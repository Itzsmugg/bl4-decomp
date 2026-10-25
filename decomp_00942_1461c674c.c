// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1461c674c FUN_1461c674c body=468 status=ok
// SIG undefined FUN_1461c674c(void)

void FUN_1461c674c(longlong param_1,longlong param_2)

{
  ushort uVar1;
  char cVar2;
  undefined8 uVar3;
  wchar_t *_Str;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_228 [40];
  longlong local_200;
  undefined8 uStack_1f8;
  longlong local_1f0;
  int local_1e8;
  undefined4 local_1e4;
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
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (param_2 != 0) {
    cVar2 = FUN_144729dda(param_1 + 0x30);
    if (cVar2 != '\0') {
      uVar3 = FUN_14479d2ce(param_1 + 0x30);
      FUN_1400021e4(param_2 + 8,&local_200);
      local_1e8 = (int)uStack_1f8;
      uVar5 = (int)uStack_1f8 - 1;
      if ((int)uStack_1f8 == 0) {
        uVar5 = 0;
      }
      if (0 < (int)uVar5) {
        uVar6 = 0;
        do {
          uVar1 = *(ushort *)(local_200 + uVar6 * 2);
          *(ushort *)(local_200 + uVar6 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
          uVar6 = uVar6 + 1;
        } while (uVar5 != uVar6);
      }
      local_1f0 = local_200;
      local_1e4 = uStack_1f8._4_4_;
      local_200 = 0;
      uStack_1f8 = 0;
      local_1e0 = local_1c0;
      local_1c8 = '\0';
      local_1d0 = local_c0;
      local_1d8 = local_1e0;
      _Str = (wchar_t *)FUN_140c7f682(param_1,L"SliderValueUpdate",&local_1e0);
      local_40 = 0;
      if (_Str == (wchar_t *)0x0) {
        local_38 = 0;
        local_30 = 0;
      }
      else {
        sVar4 = wcslen(_Str);
        FUN_1446fe5a4(local_c0,_Str,sVar4 & 0xffffffff,1);
      }
      FUN_1461c6922(uVar3,local_38,&local_1f0,param_2 + 0x10);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      if (local_1c8 == '\x01') {
        FUN_1400020a8(local_1e0);
      }
      if (local_1f0 != 0) {
        FUN_1400020a8();
      }
      if (local_200 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461c6922 FUN_1461c6922 body=546 status=ok
// SIG undefined FUN_1461c6922(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x0001461c6b3a */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1461c6922(longlong param_1,char *param_2,undefined8 *param_3,longlong *param_4)

{
  void *_Src;
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_1e8 [40];
  undefined1 local_1c0 [16];
  void *local_1b0;
  int local_1a8;
  undefined4 local_1a4;
  longlong *local_1a0;
  undefined4 local_198;
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
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_90 = 0;
  if (param_2 == (char *)0x0) {
    local_88 = 0;
    local_80 = 0;
  }
  else {
    sVar1 = strlen(param_2);
    FUN_1446e6fe8(local_190,param_2,sVar1 & 0xffffffff,1);
  }
  FUN_140056680(local_1c0,local_88);
  local_1b0 = (void *)0x0;
  local_1a8 = *(int *)(param_3 + 1);
  lVar4 = (longlong)local_1a8;
  _Src = (void *)*param_3;
  if (lVar4 == 0) {
    local_1a4 = 0;
  }
  else {
    FUN_1446dd670(&local_1b0,local_1a8,0);
    memcpy(local_1b0,_Src,lVar4 * 2);
  }
  local_1a0 = (longlong *)*param_4;
  if (local_1a0 != (longlong *)0x0) {
    (**(code **)(*local_1a0 + 8))();
  }
  local_198 = (undefined4)param_4[1];
  local_78 = (undefined1 *)0x0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,8);
  *puVar2 = &PTR_FUN_14b9d2bf0;
  FUN_1461c6b84(puVar2 + 1,local_1c0);
  if (puVar2 == (undefined8 *)&DAT_fffffffffffffff8) {
    puVar5 = (undefined1 *)0x0;
  }
  else {
    puVar5 = &LAB_14619aa58;
    local_78 = &LAB_14619aa58;
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
  if (puVar2 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_78 = (undefined1 *)0x0;
  }
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    UNLOCK();
    LOCK();
    *puVar2 = puVar3;
    UNLOCK();
    if (local_78 != (undefined1 *)0x0) {
      (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  FUN_1461c6b46(local_1c0);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461c6b46 FUN_1461c6b46 body=61 status=ok
// SIG undefined FUN_1461c6b46(void)

void FUN_1461c6b46(longlong *param_1)

{
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
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



// FUNCTION 1461c6b84 FUN_1461c6b84 body=150 status=ok
// SIG undefined FUN_1461c6b84(void)

undefined8 * FUN_1461c6b84(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  plVar2 = (longlong *)param_2[4];
  param_1[4] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  return param_1;
}



// FUNCTION 1461c6c1a FUN_1461c6c1a body=652 status=ok
// SIG undefined FUN_1461c6c1a(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x0001461c6e9c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_1461c6c1a(longlong param_1,char *param_2,undefined8 *param_3,undefined4 *param_4)

{
  void *pvVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  undefined8 local_1b0;
  void *local_1a8;
  int local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
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
    sVar2 = strlen(param_2);
    FUN_1446e6fe8(local_190,param_2,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(&local_1b8,local_88);
  local_1a8 = (void *)0x0;
  local_1a0 = *(int *)(param_3 + 1);
  lVar7 = (longlong)local_1a0;
  pvVar1 = (void *)*param_3;
  if (lVar7 == 0) {
    local_19c = 0;
  }
  else {
    FUN_1446dd670(&local_1a8,local_1a0,0);
    memcpy(local_1a8,pvVar1,lVar7 * 2);
  }
  local_198 = *param_4;
  local_78 = (undefined1 *)0x0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,8);
  pvVar1 = local_1a8;
  *puVar3 = &PTR_FUN_14b47add0;
  puVar3[1] = local_1b8;
  local_1b8 = 0;
  *(undefined4 *)(puVar3 + 2) = (undefined4)local_1b0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = local_1b0._4_4_;
  local_1b0 = 0;
  puVar3[3] = 0;
  lVar7 = (longlong)local_1a0;
  *(int *)(puVar3 + 4) = local_1a0;
  if (lVar7 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar3 + 3,local_1a0,0);
    memcpy((void *)puVar3[3],pvVar1,lVar7 * 2);
  }
  *(undefined4 *)(puVar3 + 5) = local_198;
  if (puVar3 == (undefined8 *)&DAT_fffffffffffffff8) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar6 = &LAB_145a0686c;
    local_78 = &LAB_145a0686c;
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar4 = 0;
  puVar4[2] = puVar6;
  puVar4[4] = puVar3;
  local_68 = 0;
  *(undefined4 *)(puVar4 + 8) = local_48;
  *(undefined4 *)((longlong)puVar4 + 0x44) = uStack_44;
  *(undefined4 *)(puVar4 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar4 + 0x4c) = uStack_3c;
  *(undefined4 *)(puVar4 + 6) = local_58;
  *(undefined4 *)((longlong)puVar4 + 0x34) = uStack_54;
  *(undefined4 *)(puVar4 + 7) = uStack_50;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = uStack_4c;
  if (puVar3 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_78 = (undefined1 *)0x0;
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar3 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar3;
    *puVar3 = puVar4;
    UNLOCK();
    if (local_78 != (undefined1 *)0x0) {
      uVar5 = (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  if (local_1a8 != (void *)0x0) {
    uVar5 = FUN_1400020a8();
  }
  if (local_1b8 != 0) {
    uVar5 = FUN_1400020a8();
  }
  if (local_90 != 0) {
    uVar5 = FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1461c6ea8 FUN_1461c6ea8 body=617 status=ok
// SIG undefined FUN_1461c6ea8(void)

void FUN_1461c6ea8(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  wchar_t *_Str;
  size_t sVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_248 [32];
  longlong local_228;
  longlong local_220;
  longlong local_210;
  undefined8 uStack_208;
  longlong local_200;
  int local_1f8;
  undefined4 local_1f4;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  char local_1d8;
  undefined1 local_1d0 [256];
  undefined1 local_d0 [128];
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if (((param_2 != 0) && (lVar2 = *(longlong *)(param_1 + 0x288), lVar2 != 0)) &&
     (0 < (longlong)*(int *)(lVar2 + 0xd8))) {
    lVar3 = *(longlong *)(lVar2 + 0xd0);
    lVar8 = 0x1dc;
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar3 + lVar8) == *(longlong *)(param_2 + 8)) {
        *(undefined1 *)(lVar3 + -4 + lVar8) = *(undefined1 *)(param_2 + 0x10);
        *(undefined1 *)(lVar3 + -3 + lVar8) = *(undefined1 *)(param_2 + 0x11);
        FUN_1461c7112(lVar3 - lVar5);
        cVar4 = FUN_144729dda(param_1 + 0x30);
        if (cVar4 != '\0') {
          uVar6 = FUN_14479d2ce(param_1 + 0x30);
          FUN_1400021e4(param_2 + 8,&local_210);
          local_1f8 = (int)uStack_208;
          uVar9 = (int)uStack_208 - 1;
          if ((int)uStack_208 == 0) {
            uVar9 = 0;
          }
          if (0 < (int)uVar9) {
            uVar10 = 0;
            do {
              uVar1 = *(ushort *)(local_210 + uVar10 * 2);
              *(ushort *)(local_210 + uVar10 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
              uVar10 = uVar10 + 1;
            } while (uVar9 != uVar10);
          }
          local_200 = local_210;
          local_1f4 = uStack_208._4_4_;
          local_210 = 0;
          uStack_208 = 0;
          local_1f0 = local_1d0;
          local_1d8 = '\0';
          local_1e0 = local_d0;
          local_1e8 = local_1f0;
          _Str = (wchar_t *)FUN_140c7f682(param_1,L"SettingEnabledChanged",&local_1f0);
          local_50 = 0;
          if (_Str == (wchar_t *)0x0) {
            local_48 = 0;
            local_40 = 0;
          }
          else {
            sVar7 = wcslen(_Str);
            FUN_1446fe5a4(local_d0,_Str,sVar7 & 0xffffffff,1);
          }
          local_228 = param_2 + 0x11;
          local_220 = (lVar3 - lVar5) + 0x1da;
          FUN_1461c7134(uVar6,local_48,&local_200,param_2 + 0x10);
          if (local_50 != 0) {
            FUN_1400020a8();
          }
          if (local_1d8 == '\x01') {
            FUN_1400020a8(local_1f0);
          }
          if (local_200 != 0) {
            FUN_1400020a8();
          }
          if (local_210 != 0) {
            FUN_1400020a8();
          }
        }
        break;
      }
      lVar5 = lVar5 + -0x1e8;
      lVar8 = lVar8 + 0x1e8;
    } while ((longlong)*(int *)(lVar2 + 0xd8) * 0x1e8 + lVar5 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461c7112 FUN_1461c7112 body=34 status=ok
// SIG undefined FUN_1461c7112(void)

void FUN_1461c7112(longlong param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((*(char *)(param_1 + 0x1d8) == '\x01') && (*(char *)(param_1 + 0x1d9) == '\x01')) {
    bVar1 = *(char *)(param_1 + 0x30) == '\x06';
  }
  *(bool *)(param_1 + 0x1da) = bVar1;
  return;
}



// FUNCTION 1461c7134 FUN_1461c7134 body=698 status=ok
// SIG undefined FUN_1461c7134(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff98 : 0x0001461c73e4 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_1461c7134(longlong param_1,char *param_2,undefined8 *param_3,undefined1 *param_4,
             undefined1 *param_5,undefined1 *param_6)

{
  void *pvVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  undefined8 local_1c0;
  void *local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  undefined2 local_1a8;
  undefined1 local_1a6;
  undefined1 local_1a0 [256];
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 *local_88;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_a0 = 0;
  if (param_2 == (char *)0x0) {
    local_98 = 0;
    local_90 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    FUN_1446e6fe8(local_1a0,param_2,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(&local_1c8,local_98);
  local_1b8 = (void *)0x0;
  local_1b0 = *(int *)(param_3 + 1);
  lVar7 = (longlong)local_1b0;
  pvVar1 = (void *)*param_3;
  if (lVar7 == 0) {
    local_1ac = 0;
  }
  else {
    FUN_1446dd670(&local_1b8,local_1b0,0);
    memcpy(local_1b8,pvVar1,lVar7 * 2);
  }
  local_1a8 = CONCAT11(*param_5,*param_4);
  local_1a6 = *param_6;
  local_88 = (undefined1 *)0x0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,8);
  pvVar1 = local_1b8;
  *puVar3 = &PTR_FUN_14b9d2c30;
  puVar3[1] = local_1c8;
  local_1c8 = 0;
  *(undefined4 *)(puVar3 + 2) = (undefined4)local_1c0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = local_1c0._4_4_;
  local_1c0 = 0;
  puVar3[3] = 0;
  lVar7 = (longlong)local_1b0;
  *(int *)(puVar3 + 4) = local_1b0;
  if (lVar7 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar3 + 3,local_1b0,0);
    memcpy((void *)puVar3[3],pvVar1,lVar7 * 2);
  }
  *(undefined1 *)((longlong)puVar3 + 0x2a) = local_1a6;
  *(undefined2 *)(puVar3 + 5) = local_1a8;
  if (puVar3 == (undefined8 *)&DAT_fffffffffffffff8) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar6 = &LAB_146207cf8;
    local_88 = &LAB_146207cf8;
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar4 = 0;
  puVar4[2] = puVar6;
  puVar4[4] = puVar3;
  local_78 = 0;
  *(undefined4 *)(puVar4 + 8) = local_58;
  *(undefined4 *)((longlong)puVar4 + 0x44) = uStack_54;
  *(undefined4 *)(puVar4 + 9) = uStack_50;
  *(undefined4 *)((longlong)puVar4 + 0x4c) = uStack_4c;
  *(undefined4 *)(puVar4 + 6) = local_68;
  *(undefined4 *)((longlong)puVar4 + 0x34) = uStack_64;
  *(undefined4 *)(puVar4 + 7) = uStack_60;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = uStack_5c;
  if (puVar3 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_88 = (undefined1 *)0x0;
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar3 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar3;
    *puVar3 = puVar4;
    UNLOCK();
    if (local_88 != (undefined1 *)0x0) {
      uVar5 = (**(code **)(CONCAT44(uStack_64,local_68) + 0x10))();
    }
  }
  if (local_1b8 != (void *)0x0) {
    uVar5 = FUN_1400020a8();
  }
  if (local_1c8 != 0) {
    uVar5 = FUN_1400020a8();
  }
  if (local_a0 != 0) {
    uVar5 = FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1461c73f0 FUN_1461c73f0 body=158 status=ok
// SIG undefined FUN_1461c73f0(void)

bool FUN_1461c73f0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c7490 FUN_1461c7490 body=913 status=ok
// SIG undefined FUN_1461c7490(void)

void FUN_1461c7490(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  PSRWLOCK SRWLock_00;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_88 [32];
  char local_68 [4];
  undefined4 local_64;
  longlong *local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = FUN_1405d1fee(param_1 + 0x30);
  if (lVar7 == 0) goto LAB_1461c7730;
  lVar8 = FUN_144a2f878();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
      lVar8 + 0x30)) goto LAB_1461c7730;
  FUN_140bb46a8(param_1,&local_60);
  plVar4 = local_60;
  SRWLock_00 = (PSRWLOCK)(local_60 + 199);
  AcquireSRWLockExclusive(SRWLock_00);
  plVar10 = local_58;
  *(int *)(plVar4 + 0xc6) = (int)plVar4[0xc6] + 1;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_58 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  FUN_140d128b6(param_1,&local_60);
  plVar10 = local_60;
  SRWLock = (PSRWLOCK)(local_60 + 199);
  AcquireSRWLockExclusive(SRWLock);
  plVar9 = local_58;
  *(int *)(plVar10 + 0xc6) = (int)plVar10[0xc6] + 1;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  cVar5 = FUN_1415dd0e4(lVar7 + 0x6090,param_2);
  if ((int)plVar10[0xb1] != *(int *)((longlong)plVar10 + 0x5b4)) {
    lVar7 = *param_2;
    uVar3 = (uint)((ulonglong)lVar7 >> 0x10);
    uVar11 = (uint)lVar7 & 0xffff;
    plVar9 = plVar10 + 0xb7;
    if ((longlong *)plVar10[0xb8] != (longlong *)0x0) {
      plVar9 = (longlong *)plVar10[0xb8];
    }
    iVar6 = *(int *)((longlong)plVar9 +
                    (ulonglong)
                    ((int)plVar10[0xb9] - 1U &
                    (int)((ulonglong)lVar7 >> 0x20) + ((uint)lVar7 << 0x10 | uVar11) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar11 >> 4)) * 4);
    if (iVar6 != -1) {
      lVar8 = plVar10[0xb0];
      iVar12 = iVar6;
      do {
        if (*(longlong *)(lVar8 + (longlong)iVar12 * 0x18) == lVar7) goto LAB_1461c7762;
        iVar12 = *(int *)(lVar8 + (longlong)iVar12 * 0x18 + 0x10);
      } while (iVar12 != -1);
    }
  }
  local_58 = (longlong *)local_68;
  local_64 = 0;
  local_68[0] = cVar5;
  local_60 = param_2;
  FUN_1461c7822(plVar10 + 0xb0,local_4c);
  goto LAB_1461c7647;
  while (iVar6 = (int)plVar10[2], iVar6 != -1) {
LAB_1461c777e:
    plVar10 = (longlong *)(lVar8 + (longlong)iVar6 * 0x18);
    if (*plVar10 == lVar7) goto LAB_1461c77fc;
  }
  plVar10 = (longlong *)0x0;
LAB_1461c77fc:
  if (cVar5 == (char)plVar10[1]) {
    if (*(int *)((longlong)plVar10 + 0xc) == 0) {
      iVar6 = 1;
      goto LAB_1461c7816;
    }
  }
  else {
    iVar6 = *(int *)((longlong)plVar10 + 0xc) + 1;
LAB_1461c7816:
    *(char *)(plVar10 + 1) = cVar5;
    *(int *)((longlong)plVar10 + 0xc) = iVar6;
  }
  goto LAB_1461c7717;
  while (iVar6 = (int)plVar9[2], iVar6 != -1) {
LAB_1461c7762:
    plVar9 = (longlong *)(lVar8 + (longlong)iVar6 * 0x18);
    if (*plVar9 == lVar7) goto LAB_1461c77d4;
  }
  plVar9 = (longlong *)0x0;
LAB_1461c77d4:
  if (cVar5 == (char)plVar9[1]) {
    if (*(int *)((longlong)plVar9 + 0xc) != 0) goto LAB_1461c7647;
    iVar6 = 1;
  }
  else {
    iVar6 = *(int *)((longlong)plVar9 + 0xc) + 1;
  }
  *(char *)(plVar9 + 1) = cVar5;
  *(int *)((longlong)plVar9 + 0xc) = iVar6;
LAB_1461c7647:
  *(int *)(plVar10 + 0x40) = (int)plVar10[0x40] + 1;
  if ((int)plVar4[0xb1] != *(int *)((longlong)plVar4 + 0x5b4)) {
    lVar7 = *param_2;
    uVar3 = (uint)((ulonglong)lVar7 >> 0x10);
    uVar11 = (uint)lVar7 & 0xffff;
    plVar10 = plVar4 + 0xb7;
    if ((longlong *)plVar4[0xb8] != (longlong *)0x0) {
      plVar10 = (longlong *)plVar4[0xb8];
    }
    iVar6 = *(int *)((longlong)plVar10 +
                    (ulonglong)
                    ((int)plVar4[0xb9] - 1U &
                    (int)((ulonglong)lVar7 >> 0x20) + ((uint)lVar7 << 0x10 | uVar11) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar11 >> 4)) * 4);
    if (iVar6 != -1) {
      lVar8 = plVar4[0xb0];
      iVar12 = iVar6;
      do {
        if (*(longlong *)(lVar8 + (longlong)iVar12 * 0x18) == lVar7) goto LAB_1461c777e;
        iVar12 = *(int *)(lVar8 + (longlong)iVar12 * 0x18 + 0x10);
      } while (iVar12 != -1);
    }
  }
  local_58 = (longlong *)local_68;
  local_64 = 0;
  local_68[0] = cVar5;
  local_60 = param_2;
  FUN_1461c7822(plVar4 + 0xb0,local_4c);
LAB_1461c7717:
  *(int *)(plVar4 + 0x40) = (int)plVar4[0x40] + 1;
  ReleaseSRWLockExclusive(SRWLock);
  ReleaseSRWLockExclusive(SRWLock_00);
LAB_1461c7730:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461c7822 FUN_1461c7822 body=336 status=ok
// SIG undefined FUN_1461c7822(void)

undefined4 * FUN_1461c7822(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1461c79f6(param_1,local_48);
  puVar1 = (undefined1 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined1 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)(puVar1 + 4);
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_1461c7974(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1461c7ade(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c7974 FUN_1461c7974 body=130 status=ok
// SIG undefined FUN_1461c7974(void)

undefined8 FUN_1461c7974(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_148e413ac((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1461c79f6 FUN_1461c79f6 body=231 status=ok
// SIG undefined FUN_1461c79f6(void)

int * FUN_1461c79f6(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1403951a8(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1461c7ade FUN_1461c7ade body=482 status=ok
// SIG undefined FUN_1461c7ade(void)

void FUN_1461c7ade(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1461c7cc2 FUN_1461c7cc2 body=407 status=ok
// SIG undefined FUN_1461c7cc2(void)

undefined4 * FUN_1461c7cc2(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1461c7f4c(param_1,local_48);
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)local_40 = *param_3;
  *(undefined4 *)((longlong)local_40 + 4) = uVar3;
  *(undefined4 *)(local_40 + 1) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar5;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar2 = local_40[1];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar13 = (uint)uVar2 & 0xffff;
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar12 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar12) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar12 >> 4);
  uVar7 = (uVar7 >> 2) +
          ((uint)uVar2 << 0x10 | uVar13) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar13 >> 4) + uVar7 * 0x40 + 0x9e3779b9 ^ uVar7;
  cVar6 = FUN_1461c7e5a(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x14) = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_144972968(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c7e5a FUN_1461c7e5a body=241 status=ok
// SIG undefined FUN_1461c7e5a(void)

undefined8 FUN_1461c7e5a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if ((*plVar6 == *param_3) &&
           (*(longlong *)(*param_1 + 8 + (longlong)iVar7 * 0x18) == param_3[1])) {
          lVar4 = param_3[1];
          *plVar6 = *param_3;
          plVar6[1] = lVar4;
          iVar3 = *param_4;
          lVar4 = *param_1;
          if (*(int *)((longlong)param_1 + 0x34) != 0) {
            *(int *)(lVar4 + (longlong)(int)param_1[6] * 0x18) = iVar3;
          }
          puVar1 = (undefined4 *)(lVar4 + (longlong)iVar3 * 0x18);
          *puVar1 = 0xffffffff;
          uVar9 = 0xffffffff;
          if (0 < *(int *)((longlong)param_1 + 0x34)) {
            uVar9 = (undefined4)param_1[6];
          }
          puVar1[1] = uVar9;
          *(int *)(param_1 + 6) = iVar3;
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
          plVar6 = param_1 + 2;
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          iVar8 = iVar3 + 0x1f;
          if (-1 < iVar3) {
            iVar8 = iVar3;
          }
          bVar5 = (byte)iVar3 & 0x1f;
          puVar2 = (uint *)((longlong)plVar6 + (longlong)(iVar8 >> 5) * 4);
          *puVar2 = *puVar2 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
          *param_4 = iVar7;
          return CONCAT71((int7)(int3)(iVar8 >> 0xd),1);
        }
        iVar7 = (int)plVar6[2];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1461c7f4c FUN_1461c7f4c body=479 status=ok
// SIG undefined FUN_1461c7f4c(void)

int * FUN_1461c7f4c(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1403951a8(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar5 = iVar6 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar5 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar3 = FUN_144a3809e(uVar7 << 2,0);
          iVar5 = (int)(uVar3 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar5) {
            iVar8 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar5);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar5 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar5 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar2 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar2 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar2 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar2 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1461c8132 FUN_1461c8132 body=197 status=ok
// SIG undefined FUN_1461c8132(void)

void FUN_1461c8132(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  
  local_58[4] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_58[1] = 0;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_58[3] = 0;
  local_58[2] = 0;
  (**(code **)(*plVar2 + 0x1c8))(plVar2,local_58 + 2,local_58 + 3);
  FUN_1409ee323(local_58[2],local_58[3],local_58);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_58);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[4] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c81f8 FUN_1461c81f8 body=61 status=ok
// SIG undefined FUN_1461c81f8(void)

void FUN_1461c81f8(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    FUN_1461c8236(lVar1 + 0x2a8);
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 1461c8236 FUN_1461c8236 body=114 status=ok
// SIG undefined FUN_1461c8236(void)

void FUN_1461c8236(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14000bbd8(local_48,param_2,0);
  lVar1 = FUN_141483196(local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (lVar1 != 0) {
    FUN_1461c82aa(param_1,lVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c82aa FUN_1461c82aa body=749 status=ok
// SIG undefined FUN_1461c82aa(void)

void FUN_1461c82aa(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    plVar9 = *(longlong **)(param_2 + 0x20);
    plVar2 = *(longlong **)(param_1 + 0x10);
    if (plVar2 != plVar9) {
      *(longlong **)(param_1 + 0x10) = plVar9;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x28);
    plVar9 = *(longlong **)(param_2 + 0x30);
    plVar2 = *(longlong **)(param_1 + 0x20);
    if (plVar2 != plVar9) {
      *(longlong **)(param_1 + 0x20) = plVar9;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x38);
    plVar9 = *(longlong **)(param_2 + 0x40);
    plVar2 = *(longlong **)(param_1 + 0x30);
    if (plVar2 != plVar9) {
      *(longlong **)(param_1 + 0x30) = plVar9;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x48);
    plVar9 = *(longlong **)(param_2 + 0x50);
    plVar2 = *(longlong **)(param_1 + 0x40);
    if (plVar2 != plVar9) {
      *(longlong **)(param_1 + 0x40) = plVar9;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x58);
    iVar1 = *(int *)(param_1 + 0x8c);
    FUN_140f9c02e(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x8c) != 0)) {
      FUN_148a07b08(param_1 + 0x80,0);
    }
    if ((longlong)*(int *)(param_2 + 0x90) != 0) {
      lVar10 = (longlong)*(int *)(param_2 + 0x90) * 0x28;
      plVar9 = (longlong *)(*(longlong *)(param_2 + 0x88) + 0x10);
      do {
        lVar4 = FUN_140f9d3ac(param_1 + 0x80);
        FUN_144a787a6(lVar4,plVar9 + -2);
        lVar6 = plVar9[1];
        if (lVar6 == 0) {
          uVar5 = FUN_14036a63e();
          lVar6 = FUN_14477b664(uVar5);
          plVar9[1] = lVar6;
        }
        lVar7 = plVar9[2];
        if (lVar7 == 0) {
          if (lVar6 == 0) {
            lVar7 = 0;
          }
          else {
            lVar7 = 0;
            if (*plVar9 != 0) {
              plVar2 = *(longlong **)(lVar6 + 0xb8);
              if (plVar2 == (longlong *)0x0) {
LAB_1461c8568:
                lVar7 = 0;
              }
              else {
                cVar3 = (**(code **)(*plVar2 + 0x108))();
                if (cVar3 == '\0') goto LAB_1461c8568;
                uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar7 = FUN_144aff482(uVar5,plVar9);
              }
              plVar9[2] = lVar7;
            }
          }
        }
        puVar8 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar7 + 8) != (undefined4 *)0x0) {
          puVar8 = *(undefined4 **)(lVar7 + 8);
        }
        local_78 = 0;
        uStack_70 = 0;
        FUN_1400b2348(puVar8,&local_78,1);
        if ((longlong *)(lVar4 + 0x10) == &local_78) {
          if (local_78 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(lVar4 + 0x10) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(lVar4 + 0x10) = local_78;
          local_78 = 0;
          *(undefined4 *)(lVar4 + 0x18) = (undefined4)uStack_70;
          *(undefined4 *)(lVar4 + 0x1c) = uStack_70._4_4_;
        }
        plVar9 = plVar9 + 5;
        lVar10 = lVar10 + -0x28;
      } while (lVar10 != 0);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c8598 FUN_1461c8598 body=54 status=ok
// SIG undefined FUN_1461c8598(void)

void FUN_1461c8598(void)

{
  FUN_141636cb8();
  if (DAT_14c9a3d80 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a3d60 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1461c85ce FUN_1461c85ce body=132 status=ok
// SIG undefined FUN_1461c85ce(void)

undefined1 * FUN_1461c85ce(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumInstances";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x361;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147257f7e;
}



// FUNCTION 1461c8652 FUN_1461c8652 body=138 status=ok
// SIG undefined FUN_1461c8652(void)

code * FUN_1461c8652(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutQueueState";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer< FQueueState >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf000000371;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147257bb8;
}



// FUNCTION 1461c86dc FUN_1461c86dc body=144 status=ok
// SIG undefined FUN_1461c86dc(void)

code * FUN_1461c86dc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a75e54();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Scene";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x7000000366;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462f0fe4;
}



// FUNCTION 1461c876c FUN_1461c876c body=21 status=ok
// SIG undefined FUN_1461c876c(void)

undefined8 FUN_1461c876c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1461c8782 FUN_1461c8782 body=102 status=ok
// SIG undefined FUN_1461c8782(void)

void FUN_1461c8782(longlong param_1,char param_2)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_2 == '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa4);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = FUN_1403ca142();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        bVar1 = (**(code **)(*plVar2 + 0x498))(plVar2);
        if (bVar1 < 6) {
          FUN_141636f9c(param_1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1461c87e8 FUN_1461c87e8 body=70 status=ok
// SIG undefined FUN_1461c87e8(void)

longlong FUN_1461c87e8(longlong param_1,undefined4 *param_2)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_1461630d0(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1461c882e(param_1,*param_2);
  *(undefined1 *)(param_1 + 0x18) = 1;
  return param_1;
}



// FUNCTION 1461c882e FUN_1461c882e body=88 status=ok
// SIG undefined FUN_1461c882e(void)

int * FUN_1461c882e(int *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  uVar1 = (ulonglong)(param_2 + -1 + (uint)(param_2 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar3 = 1 << ((byte)lVar2 & 0x1f);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[4] = iVar3;
  FUN_1461c8886(param_1 + 2);
  memset(*(void **)(param_1 + 2),0,(longlong)iVar3 << 3);
  *param_1 = param_1[4] + -1;
  return param_1;
}



// FUNCTION 1461c8886 FUN_1461c8886 body=125 status=ok
// SIG undefined FUN_1461c8886(void)

void FUN_1461c8886(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if (-1 < (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = (ulonglong)uVar1;
      }
    }
    else {
      uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
    }
    uVar2 = FUN_144a3809e(uVar2 << 3,8);
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar2 >> 3)) {
      uVar3 = uVar2 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar2);
}



// FUNCTION 1461c8904 FUN_1461c8904 body=778 status=ok
// SIG undefined FUN_1461c8904(void)

void FUN_1461c8904(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_168 [44];
  int local_13c;
  longlong local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined1 *local_120;
  uint local_118;
  int iStack_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined1 *local_100;
  uint local_f8;
  int iStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8;
  int local_e0;
  undefined1 local_d8 [24];
  int local_c0;
  int local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  plVar4 = (longlong *)(param_1 + 0x50);
  FUN_1461c8c10(plVar4,&local_98);
  FUN_1461c8dd4(&local_98,&local_e8,param_2);
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    FUN_14481578e(param_3,0);
  }
  local_e0 = local_e0 - local_b4;
  if (local_e0 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_e0);
  }
  if (*(int *)((longlong)param_3 + 0xc) < local_e0) {
    FUN_14481578e(param_3);
  }
  local_108 = 0x100000000;
  local_f8 = 0xffffffff;
  iStack_f4 = 0;
  local_f0 = 0;
  iVar6 = 0;
  local_100 = local_d8;
  if (local_c0 != 0) {
    FUN_1449c0562(&local_108);
    iVar6 = local_c0;
  }
  local_118 = local_f8;
  iStack_114 = iStack_f4;
  local_110 = local_f0;
  local_10c = local_ec;
  local_128 = local_108;
  local_120 = local_100;
  local_130 = &local_e8;
  if ((iStack_f4 != iVar6) || (local_100 != local_d8)) {
    do {
      lVar5 = (longlong)iStack_114 * 0x18 + *local_130;
      uVar1 = FUN_1447addd0(lVar5,0x10);
      iVar2 = FUN_14025f414(plVar4,uVar1,lVar5);
      if (iVar2 != -1) {
        if ((*plVar4 + (longlong)iVar2 * 0x24 + 0x10U & 0xffffffffffffffef) != 0) {
          local_13c = *(int *)(*plVar4 + (longlong)iVar2 * 0x24 + 0x14);
          if (local_13c != -1) {
            local_138 = (longlong)(int)param_3[1];
            uVar3 = (int)param_3[1] + 1;
            *(uint *)(param_3 + 1) = uVar3;
            if (*(uint *)((longlong)param_3 + 0xc) < uVar3) {
              FUN_1446f48e2(param_3,local_138);
            }
            *(int *)(*param_3 + local_138 * 4) = local_13c;
          }
          FUN_145d0dddc(plVar4,lVar5);
        }
      }
      local_118 = local_118 & ~local_128._4_4_;
      FUN_1449c0562(&local_128);
    } while (((iStack_114 != iVar6) || (local_120 != local_d8)) || (local_130 != &local_e8));
  }
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(&local_e8);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(&local_98);
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_2);
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461c8c10 FUN_1461c8c10 body=381 status=ok
// SIG undefined FUN_1461c8c10(void)

void FUN_1461c8c10(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
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
  FUN_1461c8d90(param_2);
  uVar3 = (longlong)(int)param_1[1] - (longlong)*(int *)((longlong)param_1 + 0x34);
  uVar2 = (uint)uVar3;
  if ((uint)(*(int *)(param_2 + 8) - *(int *)(param_2 + 0x34)) < uVar2) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar3);
    }
    FUN_1462841aa(param_2,uVar3 & 0xffffffff);
    iVar1 = 1;
    if (3 < uVar2) {
      uVar2 = (uVar2 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_2 + 0x48) == 0) || (*(int *)(param_2 + 0x48) < iVar1)) {
      *(int *)(param_2 + 0x48) = iVar1;
      FUN_1457adf2c(param_2);
    }
  }
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_60 = local_40;
  local_58 = local_38;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_1457adc9c(param_2,&local_40,(longlong)iStack_4c * 0x24 + *local_68,0);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461c8d90 FUN_1461c8d90 body=68 status=ok
// SIG undefined FUN_1461c8d90(void)

void FUN_1461c8d90(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_145e3ae6c();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1405357e8(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1461c8dd4 FUN_1461c8dd4 body=467 status=ok
// SIG undefined FUN_1461c8dd4(void)

undefined8 * FUN_1461c8dd4(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_1462841aa(param_2,uVar3);
    iVar2 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar2)) {
      *(int *)(param_2 + 9) = iVar2;
      FUN_1457adf2c(param_2);
    }
  }
  local_50 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar4 = (longlong)iStack_64 * 0x18 + *local_80;
      uVar1 = FUN_1447addd0(lVar4,0x10);
      iVar2 = FUN_140f5cb3a(param_3,uVar1,lVar4);
      if (iVar2 == -1) {
        FUN_1457adc9c(param_2,&local_58,(longlong)iStack_64 * 0x18 + *local_80,0);
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1461c8faa FUN_1461c8faa body=226 status=ok
// SIG undefined FUN_1461c8faa(void)

longlong * FUN_1461c8faa(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1464a45c0;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c908e FUN_1461c908e body=138 status=ok
// SIG undefined FUN_1461c908e(void)

code * FUN_1461c908e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VoxelSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000016;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485ed47c;
}



// FUNCTION 1461c9118 FUN_1461c9118 body=138 status=ok
// SIG undefined FUN_1461c9118(void)

code * FUN_1461c9118(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LWCTile";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000017;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1461c908e;
}



// FUNCTION 1461c91a2 FUN_1461c91a2 body=138 status=ok
// SIG undefined FUN_1461c91a2(void)

code * FUN_1461c91a2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VolumeOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000018;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1461c9118;
}



// FUNCTION 1461c922c FUN_1461c922c body=152 status=ok
// SIG undefined FUN_1461c922c(void)

void FUN_1461c922c(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = FUN_143f28066;
  local_40 = 0;
  FUN_1461c93d4(local_38,param_1);
  (**(code **)(*param_1 + 0x100))(param_1,local_38);
  local_68 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1461c92c6(param_2,param_3,0,0);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c92c6 FUN_1461c92c6 body=101 status=ok
// SIG undefined FUN_1461c92c6(void)

void FUN_1461c92c6(longlong param_1,undefined8 param_2,int param_3,char param_4,undefined4 *param_5)

{
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == 2 && param_4 == '\x01') {
    *(short *)(param_1 + 0x670) = *(short *)(param_1 + 0x670) + 1;
  }
  local_18 = *param_5;
  uStack_14 = param_5[1];
  uStack_10 = param_5[2];
  uStack_c = param_5[3];
  local_28 = &local_18;
  FUN_1461c932c();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c932c FUN_1461c932c body=166 status=ok
// SIG undefined FUN_1461c932c(void)

void FUN_1461c932c(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined1 local_48;
  undefined1 local_47;
  undefined8 local_44;
  undefined8 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_58[1] = 0;
  local_44 = 0;
  uStack_3c = 0;
  FUN_144a787a6(local_58);
  local_44 = *param_5;
  uStack_3c = param_5[1];
  local_48 = param_3;
  local_47 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14caf9850);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c93d4 FUN_1461c93d4 body=428 status=ok
// SIG undefined FUN_1461c93d4(void)

longlong * FUN_1461c93d4(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1461c94b4:
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4e9ed0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1461c94b4;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4e9ed0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 1461c9580 FUN_1461c9580 body=187 status=ok
// SIG undefined FUN_1461c9580(void)

void FUN_1461c9580(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((byte)(*(char *)(param_1 + 0x2d0) - 1U) < 2) {
    if (DAT_14cb99c48 == (undefined8 *)0x0) {
      DAT_14cb99c48 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *DAT_14cb99c48 = 0;
      DAT_14cb99c48[1] = 0;
      DAT_14cb99c48[2] = 2;
    }
    FUN_14588d72e(param_1 + 0xc0,local_28);
    FUN_1461c963c(local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
    if (*(char *)(param_1 + 0x2d0) != '\x03') {
      *(undefined1 *)(param_1 + 0x2d0) = 3;
      FUN_14584d7f0(param_1 + 0x38,3);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c963c FUN_1461c963c body=236 status=ok
// SIG undefined FUN_1461c963c(void)

void FUN_1461c963c(undefined8 *param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined1 local_b0 [128];
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  vx_req_account_logout_create(&local_b8);
  if (*(int *)(param_1 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
  }
  local_30 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_28 = 0;
    local_20 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1446fe5a4(local_b0,_Str,sVar1 & 0xffffffff,1);
  }
  uVar2 = vx_strdup(local_28);
  *(undefined8 *)(local_b8 + 0x30) = uVar2;
  if (local_30 != 0) {
    FUN_1400020a8(local_30);
  }
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_1412f579e(local_b8);
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c972a FUN_1461c972a body=162 status=ok
// SIG undefined FUN_1461c972a(void)

ulonglong FUN_1461c972a(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x28);
  local_1c = param_2;
  if (plVar3 == (longlong *)0x0) {
LAB_1461c97b0:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1461c97b0;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x20);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      local_28 = lVar4;
      FUN_1461c97ce(param_1 + 8,param_1 + 0x30,&local_28,&local_1c);
    }
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1461c97ce FUN_1461c97ce body=167 status=ok
// SIG undefined FUN_1461c97ce(void)

void FUN_1461c97ce(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined4 *param_4)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_2 + 1);
  pcVar2 = (code *)*param_2;
  lVar3 = *param_3;
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_1 + 1);
  lVar4 = (longlong)local_48;
  _Src = (void *)*param_1;
  if (lVar4 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar4 * 2);
  }
  (*pcVar2)(lVar3 + iVar1,*param_4,&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c9882 FUN_1461c9882 body=555 status=ok
// SIG undefined FUN_1461c9882(void)

undefined8 * FUN_1461c9882(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446f470e(&local_30,L"NewReflectionComponent",1);
  uVar1 = FUN_14592c47e();
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,uVar1,0);
  FUN_145a0b3ec(param_1,param_2);
  *param_1 = &PTR_FUN_14a757ab0;
  param_1[0x73] = 0;
  lVar3 = param_1[0x72];
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  param_1[0x39] = lVar3;
  FUN_1446f470e(&local_38,L"DrawRadius0",1);
  uVar1 = FUN_145898c84();
  local_50 = 0;
  local_58 = 1;
  plVar2 = (longlong *)FUN_14048696c(param_1,local_38,uVar1,uVar1);
  FUN_140486fc4(plVar2,param_1[0x72],0);
  *(byte *)((longlong)plVar2 + 0x62c) = *(byte *)((longlong)plVar2 + 0x62c) | 1;
  *(byte *)((longlong)plVar2 + 0x2de) = *(byte *)((longlong)plVar2 + 0x2de) | 0x10;
  (**(code **)(*plVar2 + 0x728))(plVar2,DAT_14cad0f30,1);
  if ((plVar2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar2);
  }
  *(longlong **)(lVar3 + 0x318) = plVar2;
  FUN_1446f470e(&local_40,L"DrawRadius1",1);
  uVar1 = FUN_145898c84();
  local_50 = 0;
  local_58 = 1;
  lVar3 = FUN_14048696c(param_1,local_40,uVar1,uVar1);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  param_1[0x73] = lVar3;
  FUN_140486fc4(lVar3,param_1[0x72],0);
  *(byte *)(param_1[0x73] + 0x62c) = *(byte *)(param_1[0x73] + 0x62c) | 1;
  *(byte *)(param_1[0x73] + 0x2de) = *(byte *)(param_1[0x73] + 0x2de) | 0x10;
  (**(code **)(*(longlong *)param_1[0x73] + 0x728))((longlong *)param_1[0x73],DAT_14cad0f30,1);
  *(undefined4 *)(param_1[0x73] + 0x628) = 0xff645a28;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c9aae FUN_1461c9aae body=21 status=ok
// SIG undefined FUN_1461c9aae(void)

undefined8 FUN_1461c9aae(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1461c9ac4 FUN_1461c9ac4 body=545 status=ok
// SIG undefined FUN_1461c9ac4(void)

void FUN_1461c9ac4(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined1 auStack_2d8 [32];
  byte *local_2b8;
  byte local_2b0 [32];
  undefined1 local_290;
  byte local_288 [32];
  byte local_268 [32];
  byte abStack_248 [120];
  undefined1 local_1d0 [32];
  undefined1 local_1b0;
  undefined1 local_1a8 [16];
  longlong local_198;
  undefined1 local_188 [32];
  byte local_168;
  undefined1 local_160 [144];
  char local_d0 [8];
  undefined1 local_c8 [144];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x30) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x360);
  }
  lVar2 = FUN_1457fadf6(param_1,uVar3,1);
  if (lVar2 != 0) {
    FUN_146024696(lVar2);
    local_1b0 = 0;
    FUN_14101bd16(local_1d0,L"BeginGameplay");
    local_2b8 = local_1d0;
    FUN_140d767d6(local_1a8,&DAT_14cb71db0,2,L"PhaseChange");
    cVar1 = FUN_140e27f2c(local_1a8);
    if (cVar1 == '\0') {
      local_290 = 0;
      FUN_14101bd16(local_2b0,L"BeginGameplay");
      pbVar4 = local_288;
      local_2b8 = local_2b0;
    }
    else {
      abStack_248[0x28] = 0;
      FUN_14101bd16(abStack_248 + 8,L"BeginGameplay");
      pbVar4 = abStack_248 + 0x30;
      local_2b8 = abStack_248 + 8;
    }
    FUN_140d767d6(pbVar4,&DAT_14cb71db0,2,L"PhaseChange");
    FUN_140d76846(local_160,pbVar4);
    FUN_14027c224(local_d0,local_160);
    if (local_d0[0] == '\x01') {
      FUN_140f3f840(local_c8,param_2);
    }
    FUN_14027c198(local_d0);
    FUN_1404eeb8e(local_160);
    if (cVar1 == '\0') {
      pbVar4 = local_268;
    }
    else {
      pbVar4 = abStack_248 + 0x50;
    }
    (*(code *)(&PTR_FUN_14a1842f0)[pbVar4[0x20]])(pbVar4);
    if (*(longlong *)(pbVar4 + -0x10) != 0) {
      FUN_1400020a8();
    }
    (*(code *)(&PTR_FUN_14a1842f0)[local_168])(local_188);
    if (local_198 != 0) {
      FUN_1400020a8();
    }
    FUN_1415beab4(param_1,lVar2);
  }
  if ((local_38 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461c9ce6 FUN_1461c9ce6 body=499 status=ok
// SIG undefined FUN_1461c9ce6(void)

undefined8 FUN_1461c9ce6(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  byte bVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1447325ac(param_1[0xbd] + 0x3c0,&local_60,1);
  puVar1 = param_1 + 0xbf;
  local_40 = 0;
  uStack_38 = 0;
  if (local_60 == 0) {
    local_60 = DAT_14cb7db78;
  }
  local_58 = param_1;
  local_50 = puVar1;
  local_48 = local_60;
  FUN_1461c9eda(param_1[0xbd],&local_58);
  (**(code **)(*(longlong *)param_1[0xbd] + 0x10))((longlong *)param_1[0xbd],&local_58);
  FUN_145d2d936(&local_58);
  if (*(char *)(param_1 + 0xc3) == '\x01') {
    bVar7 = FUN_14885e5d2(puVar1);
  }
  else {
    bVar7 = 0;
  }
  if ((longlong)*(int *)(param_1 + 0xc5) != 0) {
    plVar8 = (longlong *)param_1[0xc4];
    lVar9 = (longlong)*(int *)(param_1 + 0xc5) << 5;
    do {
      bVar3 = (**(code **)(*plVar8 + 0x18))(plVar8);
      bVar7 = bVar7 | bVar3;
      plVar8 = plVar8 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  if (((bVar7 & 1) == 0) || (cVar4 = FUN_14885c494(puVar1), cVar4 != '\0')) {
    uVar5 = 0;
  }
  else {
    local_58 = (undefined8 *)0x0;
    local_50 = (undefined8 *)((ulonglong)local_50 & 0xffffffff00000000);
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar2 = local_58;
    local_50 = (undefined8 *)CONCAT44(local_50._4_4_,3);
    *local_58 = &PTR_LAB_149e020b0;
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
    *local_58 = &PTR_FUN_14b4037c0;
    local_58[3] = 0;
    FUN_14485c47a(local_58 + 3,param_1);
    puVar2[4] = FUN_14885c552;
    FUN_14885c504(puVar1,&local_58);
    FUN_1449db362(&local_58);
    local_58 = DAT_14cb7d9c8;
    FUN_1400bc96c(param_1 + 0xa3,&local_58);
    *(uint *)(param_1 + 0x87) =
         *(uint *)(param_1 + 0x87) & 0xfffffffe | (uint)*(byte *)(param_1 + 0xa3);
    uVar5 = 1;
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1461c9eda FUN_1461c9eda body=209 status=ok
// SIG undefined FUN_1461c9eda(void)

void FUN_1461c9eda(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x1f0) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x1e8);
    lVar7 = (longlong)*(int *)(param_1 + 0x1f0) * 0x18;
    do {
      FUN_1401f3da4(&local_48,lVar6);
      if ((local_48 != 0) && (lVar4 = FUN_1412ba9fc(&local_48), *(char *)(lVar4 + 0x80) == '\x01'))
      {
        uVar5 = FUN_1412ba9fc(&local_48);
        FUN_143d518f4(uVar5,param_2);
      }
      plVar3 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      lVar6 = lVar6 + 0x18;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461c9fac FUN_1461c9fac body=103 status=ok
// SIG undefined FUN_1461c9fac(void)

ulonglong FUN_1461c9fac(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1461c9ff6:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1461c9ff6;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 1461ca03c FUN_1461ca03c body=139 status=ok
// SIG undefined FUN_1461ca03c(void)

void FUN_1461ca03c(longlong param_1)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1415b1ce8();
  if (iVar1 < 0x18) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  else {
    local_38 = &LAB_145c7bf8c;
    local_30 = 0;
    FUN_1461ca0c8(local_28,param_1);
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x3a8))
              (*(longlong **)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x30),local_28);
    FUN_1449db362(local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ca0c8 FUN_1461ca0c8 body=428 status=ok
// SIG undefined FUN_1461ca0c8(void)

longlong * FUN_1461ca0c8(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1461ca1a8:
    *puVar5 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ebfc0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1461ca1a8;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ebfc0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 1461ca274 FUN_1461ca274 body=283 status=ok
// SIG undefined FUN_1461ca274(void)

void FUN_1461ca274(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba40300;
  FUN_1461ca390(plVar5 + 2,param_2,*param_3,*param_4,param_5,param_6);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x138);
  *(uint *)(param_1 + 0x138) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x13c) < iVar3 + 1U) {
    FUN_145c3a3e2((longlong *)(param_1 + 0x130),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x130);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
        return;
      }
    }
  }
  return;
}



// FUNCTION 1461ca390 FUN_1461ca390 body=313 status=ok
// SIG undefined FUN_1461ca390(void)

undefined8 *
FUN_1461ca390(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined4 local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140056680(local_48,L"ShiftSDK::Rooms::JoinRoom");
  FUN_145c44afe(param_1,local_48,param_2,param_6);
  *param_1 = &PTR_FUN_14ba3f150;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ba40350;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50 = 2;
  *local_58 = &PTR_LAB_14b4f3a00;
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
  local_58[2] = lVar2;
  *local_58 = &PTR_FUN_14ba40360;
  local_58[3] = param_1;
  local_68 = &local_58;
  FUN_1416372d1(param_2,param_3,param_4,param_5);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ca4ca FUN_1461ca4ca body=513 status=ok
// SIG undefined FUN_1461ca4ca(void)

void FUN_1461ca4ca(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  ushort *puVar4;
  undefined8 uVar5;
  undefined1 auStack_108 [32];
  longlong *local_e8 [2];
  undefined8 local_d8;
  longlong *local_d0;
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  undefined4 *local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined4 local_60 [2];
  undefined8 local_58;
  longlong *plStack_50;
  undefined4 local_48;
  ulonglong local_40 [4];
  
  local_40[0] = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1407cbe30();
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    uVar5 = FUN_1461ca6cc();
    FUN_144a2e342(lVar3,param_1 + 0x160,uVar5);
    local_78 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_70 = 0;
    uStack_68 = 0;
    FUN_1446ddda2(&local_88,"LoginGamepadText",0);
    FUN_1410d1eba(local_e8,&local_88);
    FUN_14023409e(&local_d8,local_e8,1);
    local_a8 = local_60;
    local_60[0] = 0;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    local_48 = 0;
    local_a0 = local_40;
    FUN_14010d304(&local_98);
    local_b8 = local_d8;
    local_b0 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (plStack_50 != (longlong *)0x0) {
      (**(code **)(*plStack_50 + 0x10))();
    }
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)local_d0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_d0 + 0x10))(local_d0);
        }
      }
    }
    FUN_140008f88(lVar3 + 0xb0,local_c8);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    puVar4 = *(ushort **)(lVar3 + 0x80);
    if (puVar4 != (ushort *)0x0) {
      *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
    }
  }
  if ((local_40[0] ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ca6cc FUN_1461ca6cc body=55 status=ok
// SIG undefined FUN_1461ca6cc(void)

void FUN_1461ca6cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb4b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb4b0 = FUN_140002ddd(FUN_146609cf6,uVar1,L"OakUIData_TitleScreen");
  }
  return;
}



// FUNCTION 1461ca704 FUN_1461ca704 body=310 status=ok
// SIG undefined FUN_1461ca704(void)

void FUN_1461ca704(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)FUN_14001cc68(0x180,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4f5dd0;
  plVar1 = plVar3 + 2;
  local_50 = (longlong *)*param_4;
  *param_4 = 0;
  local_48 = (longlong *)CONCAT44(local_48._4_4_,*(undefined4 *)(param_4 + 1));
  *(undefined4 *)(param_4 + 1) = 0;
  FUN_1461ca8de(plVar1,*param_2,param_3,&local_50);
  local_60 = plVar1;
  local_58 = plVar3;
  FUN_1461ca83c(&local_60,plVar1);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_50 = plVar1;
  local_48 = plVar3;
  FUN_1411d7792(param_1,&local_50);
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_48 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_58 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ca83c FUN_1461ca83c body=162 status=ok
// SIG undefined FUN_1461ca83c(void)

void FUN_1461ca83c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1461ca87b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1461ca87b;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1461ca87b:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001461ca8da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1461ca8de FUN_1461ca8de body=257 status=ok
// SIG undefined FUN_1461ca8de(void)

undefined8 *
FUN_1461ca8de(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  void *_Src;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  *param_1 = &PTR_FUN_14b4f5df0;
  param_1[4] = 0;
  FUN_14485c47a(param_1 + 4);
  param_1[5] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],_Src,(longlong)iVar1 * 2);
  }
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_1461ca9e0(param_1 + 7,param_4);
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = &PTR_FUN_14b4c3b18;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_145ad316c(param_1 + 0xf);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 9999;
  FUN_1449db362(param_4);
  return param_1;
}



// FUNCTION 1461ca9e0 FUN_1461ca9e0 body=124 status=ok
// SIG undefined FUN_1461ca9e0(void)

void FUN_1461ca9e0(longlong *param_1,longlong *param_2)

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



// FUNCTION 1461caa64 FUN_1461caa64 body=422 status=ok
// SIG undefined FUN_1461caa64(void)

void FUN_1461caa64(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
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
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar1 = local_2c;
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_30;
  (**(code **)(*param_1 + 0x2b0))(param_1,local_24,local_28,iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461cac12 FUN_1461cac12 body=40 status=ok
// SIG undefined FUN_1461cac12(void)

undefined8 FUN_1461cac12(undefined8 param_1,int param_2)

{
  FUN_1461cac3a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461cac3a FUN_1461cac3a body=532 status=ok
// SIG undefined FUN_1461cac3a(void)

void FUN_1461cac3a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b5707c0;
  param_1[5] = &PTR_FUN_14b570ac0;
  param_1[0x6a] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x7e];
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
  if (param_1[0x67] != 0) {
    FUN_1400020a8();
  }
  param_1[0x50] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[100];
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
  plVar3 = (longlong *)param_1[0x4f];
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
  plVar3 = (longlong *)param_1[0x4d];
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
  plVar3 = (longlong *)param_1[0x4b];
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
  plVar3 = (longlong *)param_1[0x49];
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
  param_1[0x30] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x44];
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
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 1461cae4e FUN_1461cae4e body=52 status=ok
// SIG undefined FUN_1461cae4e(void)

void FUN_1461cae4e(void)

{
  if (DAT_14cb8a778 < 2) {
    FUN_1461cae82();
    FUN_145c11b9e();
    return;
  }
  FUN_145c11b9e();
  DAT_14cb8a778 = 1;
  FUN_145d0e22e();
  return;
}



// FUNCTION 1461cae82 FUN_1461cae82 body=377 status=ok
// SIG undefined FUN_1461cae82(void)

void FUN_1461cae82(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
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
  puVar5 = &DAT_14cb8a768;
  if (DAT_14cb8a770 != (undefined *)0x0) {
    puVar5 = DAT_14cb8a770;
  }
  iVar4 = DAT_14cb8a778 + 3;
  if (-1 < DAT_14cb8a778) {
    iVar4 = DAT_14cb8a778;
  }
  if (DAT_14cb8a738 - DAT_14cb8a764 < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14cb8a740;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14cb8a758 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14cb8a758;
    }
    local_78 = &DAT_14cb8a730;
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14cb8a740)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar2 * 0x18) * 4)
             = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14cb8a730 ||
               ((undefined4 *)CONCAT44(uStack_64,uStack_68) != &DAT_14cb8a740 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14cb8a778) {
      lVar3 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14cb8a778);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461caffc FUN_1461caffc body=407 status=ok
// SIG undefined FUN_1461caffc(void)

void FUN_1461caffc(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_29;
  undefined8 local_28;
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
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141637722(&local_40,local_20,local_28,local_29);
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
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461cb194 FUN_1461cb194 body=177 status=ok
// SIG undefined FUN_1461cb194(void)

void FUN_1461cb194(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145dcebf8();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9d4ad0,param_4);
  local_78 = &DAT_14c9d4ad0;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1461cb246(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461cb246 FUN_1461cb246 body=395 status=ok
// SIG undefined FUN_1461cb246(void)

void FUN_1461cb246(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,0x12);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,0x14);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14c9d4b18;
  if (DAT_14c9d4b18 != 0) {
    LOCK();
    *(int *)(DAT_14c9d4b18 + 8) = *(int *)(DAT_14c9d4b18 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9d4ad0;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a21e0a0;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461cb3d2 FUN_1461cb3d2 body=883 status=ok
// SIG undefined FUN_1461cb3d2(void)

void FUN_1461cb3d2(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_1b8 [32];
  ushort *local_198;
  code **local_190;
  longlong local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined1 local_16c [4];
  undefined2 *local_168;
  undefined2 *local_160;
  ushort local_154;
  undefined2 local_152;
  undefined2 local_150;
  undefined4 local_14e;
  undefined2 local_14a;
  undefined2 local_148;
  undefined2 local_146;
  undefined2 local_144;
  undefined2 local_142;
  undefined2 local_140;
  undefined1 local_13b;
  undefined4 local_138;
  undefined1 local_134;
  undefined8 local_130;
  undefined2 local_128;
  undefined4 local_126;
  undefined2 local_122;
  undefined2 local_120;
  undefined2 local_11e;
  undefined2 local_11c;
  undefined2 local_11a;
  undefined2 local_118;
  undefined2 local_114;
  uint local_110;
  undefined1 local_10c;
  undefined1 local_108 [32];
  undefined8 local_e8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_88;
  undefined8 local_60;
  code *local_58;
  undefined2 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar2 = FUN_14009d2a0();
  local_150 = *(undefined2 *)(lVar2 + 0x4a);
  local_14a = *(undefined2 *)(lVar2 + 0x108);
  local_14e = *(undefined4 *)(lVar2 + 0x104);
  local_148 = **(undefined2 **)(param_2 + 0x18);
  puVar5 = (undefined2 *)*param_3;
  local_140 = puVar5[6];
  local_142 = puVar5[4];
  local_146 = *puVar5;
  local_144 = puVar5[2];
  local_13b = 0;
  local_138 = 0x6ff;
  local_134 = 0;
  local_152 = *(undefined2 *)(param_2 + 0x14);
  local_168 = &local_152;
  local_160 = &local_150;
  local_178 = param_3;
  FUN_1461cb746(&local_150,&local_128);
  local_110 = *(uint *)(param_6 + 0x290);
  bVar3 = local_114._1_1_ & 0xfe | (local_110 & 0xfffffeff) == 1;
  local_114 = CONCAT11(bVar3,(undefined1)local_114);
  local_154 = CONCAT11(bVar3,(undefined1)local_114) & 0xfdff;
  local_190 = &local_58;
  local_58 = FUN_140802644;
  local_50 = (undefined2 *)CONCAT71(local_50._1_7_,3);
  local_198 = &local_154;
  local_188 = param_2;
  FUN_1461cb8ec(&local_128,local_16c,param_6 + 0x28,param_5);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (0 < *(int *)(param_4 + 4)) {
    local_130 = 0x10000000000;
    puVar5 = (undefined2 *)*local_178;
    iVar1 = *(int *)(local_178 + 1);
    if ((longlong)iVar1 != 0) {
      lVar4 = 0;
      do {
        FUN_140dba9e6(&local_150,*(undefined2 *)((longlong)puVar5 + lVar4));
        lVar4 = lVar4 + 4;
      } while ((longlong)iVar1 * 4 != lVar4);
      puVar5 = (undefined2 *)*local_178;
    }
    local_128 = *(undefined2 *)(lVar2 + 0x4a);
    local_122 = *(undefined2 *)(lVar2 + 0x108);
    local_126 = *(undefined4 *)(lVar2 + 0x104);
    local_120 = **(undefined2 **)(param_2 + 0x18);
    local_118 = puVar5[6];
    local_11a = puVar5[4];
    local_11e = *puVar5;
    local_11c = puVar5[2];
    local_114 = local_114 & 0xff;
    local_110 = 0x6ff;
    local_10c = 0;
    local_e8 = 0x10000000000;
    local_c0 = 0x10000000000;
    local_88 = 0x10000000000;
    local_b8 = 0;
    uStack_b0 = 0;
    local_60 = 0x10000000000;
    FUN_1475dee80(&local_128,local_108);
    FUN_140dad9c2(local_108,&local_150,2);
    local_152 = *(undefined2 *)(param_2 + 0x14);
    local_58 = (code *)&local_152;
    local_50 = &local_150;
    FUN_1447c44f6(local_108,&local_58);
    FUN_140dad9c2(local_108,&local_150,0x84);
    local_110 = *(uint *)(param_6 + 0x290);
    bVar3 = local_114._1_1_ & 0xfe | (local_110 & 0xfffffeff) == 1;
    local_114 = CONCAT11(bVar3,(undefined1)local_114);
    local_154 = CONCAT11(bVar3,(undefined1)local_114) & 0xfdff;
    local_58 = FUN_1475df142;
    local_50 = (undefined2 *)CONCAT71(local_50._1_7_,3);
    local_180 = local_178;
    local_198 = &local_154;
    local_190 = &local_58;
    local_188 = param_2;
    FUN_1475def14(&local_128,local_16c,param_6 + 0x28,param_5);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461cb746 FUN_1461cb746 body=148 status=ok
// SIG undefined FUN_1461cb746(void)

undefined8 * FUN_1461cb746(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 3);
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  *(undefined4 *)(param_2 + 3) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar3;
  *param_2 = uVar4;
  param_2[1] = uVar5;
  param_2[8] = 0x10000000000;
  param_2[0xd] = 0x10000000000;
  param_2[0x14] = 0x10000000000;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x19] = 0x10000000000;
  FUN_1461cb7dc(param_2,param_2 + 4);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 4);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461cb7dc FUN_1461cb7dc body=271 status=ok
// SIG undefined FUN_1461cb7dc(void)

void FUN_1461cb7dc(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  FUN_140dad887(param_1 + 1,param_2);
  local_32 = param_1[4];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[5];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[6];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[7];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[8];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461cb8ec FUN_1461cb8ec body=605 status=ok
// SIG undefined FUN_1461cb8ec(void)

int * FUN_1461cb8ec(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((*param_1 == -1) || (param_1[4] == -1)) || (param_1[5] == -1)) ||
     (((param_1[6] == -1 || (param_1[7] == -1)) ||
      ((param_1[8] == -1 || (cVar4 = FUN_1461cbc7a(param_1,param_3), cVar4 == '\0')))))) {
    *param_2 = -1;
    goto LAB_1461cbaa7;
  }
  plVar5 = (longlong *)FUN_1461cbbc5(param_1,param_7);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x40);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x54);
  FUN_1461cbb4a(param_1,local_70);
  local_b8 = &local_b0;
  local_c0 = &LAB_146208e94;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0x10;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar5 + 2;
  local_c8 = plVar5;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_1461cba7a;
    }
  }
  else {
LAB_1461cba7a:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
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
LAB_1461cbaa7:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1461cbb4a FUN_1461cbb4a body=123 status=ok
// SIG undefined FUN_1461cbb4a(void)

void FUN_1461cbb4a(undefined2 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_140dba9e6(param_2,*param_1);
  lVar1 = 1;
  do {
    if (param_1[lVar1] != -1) {
      FUN_140dba9e6(param_2);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  FUN_140dba9e6(param_2,param_1[4]);
  FUN_140dba9e6(param_2,param_1[5]);
  FUN_140dba9e6(param_2,param_1[6]);
  FUN_140dba9e6(param_2,param_1[7]);
  FUN_140dba9e6(param_2,param_1[8]);
  return;
}



// FUNCTION 1461cbbc5 FUN_1461cbbc5 body=180 status=ok
// SIG undefined FUN_1461cbbc5(void)

undefined8 * FUN_1461cbbc5(undefined4 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar8 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar8[1] = &DAT_100000001;
  *puVar8 = &PTR_LAB_14a4c1b80;
  puVar8[2] = &PTR_FUN_14a4c1b98;
  param_2 = (longlong *)*param_2;
  puVar8[3] = param_2;
  puVar8[4] = 0;
  puVar8[5] = 0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_38);
    puVar8[4] = local_38;
    puVar8[5] = uStack_30;
  }
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  *(undefined4 *)(puVar8 + 8) = param_1[4];
  *(undefined4 *)((longlong)puVar8 + 0x44) = uVar5;
  *(undefined4 *)(puVar8 + 9) = uVar6;
  *(undefined4 *)((longlong)puVar8 + 0x4c) = uVar7;
  *(undefined4 *)(puVar8 + 6) = uVar1;
  *(undefined4 *)((longlong)puVar8 + 0x34) = uVar2;
  *(undefined4 *)(puVar8 + 7) = uVar3;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar4;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461cbc7a FUN_1461cbc7a body=370 status=ok
// SIG undefined FUN_1461cbc7a(void)

undefined8 FUN_1461cbc7a(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[4];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[5];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[6];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar6 = false;
  }
  else {
    bVar6 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[7];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar7 = false;
  }
  else {
    bVar7 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[8];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar8 = false;
  }
  else {
    bVar8 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar6 & bVar4 & bVar5 & bVar7 & bVar8);
}



// FUNCTION 1461cbdec FUN_1461cbdec body=883 status=ok
// SIG undefined FUN_1461cbdec(void)

/* WARNING: Removing unreachable block (ram,0x0001461cc00e) */

void FUN_1461cbdec(void)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  byte local_a9;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  int local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar4 = FUN_14054d46e(&DAT_14c846b20,L"nohmd");
  if (cVar4 == '\0') {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar4 = FUN_14054d46e(&DAT_14c846b20,L"emulatestereo");
    if (cVar4 == '\0') {
      FUN_145af9b74(&local_68);
      plVar7 = (longlong *)FUN_1448c2e86();
      FUN_1461cc160(plVar7,&local_78,local_68);
      local_88 = 0;
      uStack_80 = 0;
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      local_b8 = 0;
      cVar4 = FUN_14063337c(&DAT_14c846b20,L"hmd=",&local_88,1);
      if (0 < local_70) {
        lVar12 = 0;
        do {
          plVar3 = *(longlong **)(local_78 + lVar12 * 8);
          if (cVar4 == '\0') {
            cVar5 = (**(code **)(*plVar3 + 0x50))(plVar3);
            if (cVar5 == '\0') {
LAB_1461cc0d4:
              plVar9 = plVar3 + 1;
              if (plVar3 == (longlong *)0x0) {
                plVar9 = (longlong *)0x0;
              }
              (**(code **)(*plVar7 + 0x30))(plVar7,local_68,plVar9);
            }
          }
          else {
            local_98 = (longlong *)0x0;
            uStack_90 = 0;
            (**(code **)(*plVar3 + 0x48))(plVar3,&local_98);
            (**(code **)(*plVar3 + 0x40))(plVar3);
            lVar11 = (longlong)(int)uStack_90;
            uVar6 = (int)uStack_90 + 1;
            uStack_90 = CONCAT44(uStack_90._4_4_,uVar6);
            if (uStack_90._4_4_ < uVar6) {
              FUN_1447a1bd6(&local_98);
            }
            local_98[lVar11 * 2] = 0;
            local_98[lVar11 * 2] = local_a8;
            *(undefined4 *)(local_98 + lVar11 * 2 + 1) = (undefined4)local_a0;
            *(undefined4 *)((longlong)local_98 + lVar11 * 0x10 + 0xc) = local_a0._4_4_;
            local_a0 = 0;
            local_a8 = 0;
            uVar8 = (ulonglong)(int)uStack_90;
            local_a9 = 1;
            if (uVar8 != 0) {
              plVar9 = local_98;
LAB_1461cc03d:
              if ((int)uStack_80 != (int)plVar9[1]) {
                if ((int)plVar9[1] + (int)uStack_80 == 1) goto LAB_1461cc100;
                goto LAB_1461cc0b8;
              }
              if (1 < (int)uStack_80) {
                lVar11 = 0;
                do {
                  uVar1 = *(ushort *)(local_88 + lVar11);
                  uVar2 = *(ushort *)(*plVar9 + lVar11);
                  if (uVar1 == uVar2) {
                    if (uVar1 == 0) break;
                  }
                  else {
                    if (0x7f < (uVar2 | uVar1)) {
                      iVar10 = (uint)uVar1 - (uint)uVar2;
                      goto LAB_1461cc150;
                    }
                    if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2])
                    goto LAB_1461cc14d;
                  }
                  lVar11 = lVar11 + 2;
                } while( true );
              }
              goto LAB_1461cc100;
            }
            uVar8 = 0;
LAB_1461cc118:
            FUN_1447a1747(local_98,uVar8);
            if (local_98 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if (local_a9 != 0) goto LAB_1461cc0d4;
          }
          lVar12 = lVar12 + 1;
        } while ((int)lVar12 < local_70);
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1461cc14d:
  iVar10 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_1461cc150:
  if (iVar10 == 0) {
LAB_1461cc100:
    local_a9 = (**(code **)(*plVar3 + 0x50))(plVar3);
    local_a9 = local_a9 ^ 1;
    uVar8 = uStack_90 & 0xffffffff;
    goto LAB_1461cc118;
  }
LAB_1461cc0b8:
  plVar9 = plVar9 + 2;
  if (plVar9 == local_98 + uVar8 * 2) goto LAB_1461cc118;
  goto LAB_1461cc03d;
}



// FUNCTION 1461cc160 FUN_1461cc160 body=133 status=ok
// SIG undefined FUN_1461cc160(void)

longlong * FUN_1461cc160(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(0,param_3);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_3,iVar5);
      lVar4 = lVar3 + -8;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1461cc1e6(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return param_2;
}



// FUNCTION 1461cc1e6 FUN_1461cc1e6 body=132 status=ok
// SIG undefined FUN_1461cc1e6(void)

void FUN_1461cc1e6(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1461cc280 FUN_1461cc280 body=123 status=ok
// SIG undefined FUN_1461cc280(void)

void FUN_1461cc280(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(char *)(param_1 + 0x178) == '\x03') && (*(char *)(param_1 + 0x5d31) != '\0')) {
    if (*(longlong *)(param_1 + 0x3c0) != 0) {
      lVar2 = FUN_144a5dd5e();
      if ((((*(longlong *)(param_1 + 0x3c0) != 0) && (lVar2 != 0)) &&
          (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3c0) + 0x10), lVar1 != 0)) &&
         ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
           lVar2 + 0x30)))) {
        FUN_1461cc2fc();
      }
    }
    FUN_1461cce44(param_1 + 0x71a8);
    return;
  }
  return;
}



// FUNCTION 1461cc2fc FUN_1461cc2fc body=476 status=ok
// SIG undefined FUN_1461cc2fc(void)

void FUN_1461cc2fc(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  longlong *local_48;
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar8 = FUN_1447210f0();
  if ((((*(char *)(param_1 + 0xeb0) == '\0') && (lVar8 != 0)) &&
      (*(char *)(param_1 + 0x178) == '\x03')) &&
     ((lVar9 = FUN_1405e677a(DAT_14cb0d2b0,lVar8), *(char *)(lVar9 + 0x88) == '\0' &&
      (*(longlong *)(lVar8 + 0x170) != 0)))) {
    lVar9 = FUN_140425b9a();
    plVar3 = *(longlong **)(lVar8 + 0x170);
    if ((((plVar3 != (longlong *)0x0) && ((lVar9 != 0 && (lVar4 = plVar3[2], lVar4 != 0)))) &&
        (*(int *)(lVar9 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
        lVar9 + 0x30)) {
      FUN_1410d53f0(&local_50,lVar8);
      if (local_48 != (longlong *)0x0) {
        iVar7 = (int)local_48[1];
        do {
          if (iVar7 == 0) {
            plVar10 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar6 = (int)local_48[1];
          bVar12 = iVar7 == iVar6;
          if (bVar12) {
            *(int *)(local_48 + 1) = iVar7 + 1;
            iVar6 = iVar7;
          }
          iVar7 = iVar6;
          UNLOCK();
          plVar10 = local_48;
        } while (!bVar12);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
        if (plVar10 != (longlong *)0x0) {
          lVar8 = CONCAT44(uStack_4c,local_50);
          if (lVar8 != 0) {
            puVar11 = &local_50;
            local_38 = 4;
            local_50 = 1;
            local_30 = 1;
            FUN_1461cc4da(lVar8,param_1,&DAT_14cbd4098,puVar11);
            pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
            if (pcVar5 != (code *)0x0) {
              if (0x18 < local_38) {
                puVar11 = (undefined4 *)CONCAT44(uStack_4c,local_50);
              }
              (*pcVar5)(puVar11);
            }
            if (0x18 < local_38) {
              FUN_1400020a8(CONCAT44(uStack_4c,local_50));
            }
          }
          LOCK();
          plVar2 = plVar10 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
      }
      (**(code **)(*plVar3 + 0x928))(plVar3,param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461cc4da FUN_1461cc4da body=469 status=ok
// SIG undefined FUN_1461cc4da(void)

void FUN_1461cc4da(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *_Dst;
  ulonglong uVar7;
  undefined8 *_Dst_00;
  undefined8 *puVar8;
  uint uVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0) && (*param_3 != 0)) {
    local_30 = 0;
    FUN_14485c47a(&local_30);
    uVar6 = FUN_1461cc6b0(param_1 + 0x1e0,(uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30,
                          &local_30);
    lVar3 = *param_3;
    uVar5 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar9 = (uint)lVar3 & 0xffff;
    _Dst = (undefined8 *)
           FUN_1461cc7f8(uVar6,((uint)lVar3 << 0x10 | uVar9) + (int)((ulonglong)lVar3 >> 0x20) +
                               (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4),param_3);
    bVar1 = *(byte *)(_Dst + 4);
    if (bVar1 == *(byte *)(param_4 + 4)) {
      if (0x18 < *(ushort *)(param_4 + 3)) {
        param_4 = (undefined8 *)*param_4;
      }
      if (0x18 < *(ushort *)(_Dst + 3)) {
        _Dst = (undefined8 *)*_Dst;
      }
      uVar7 = (ulonglong)((uint)bVar1 * 0x120);
      pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar7);
      if (pcVar4 == (code *)0x0) {
        memcpy(_Dst,param_4,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
      }
      else {
        (*pcVar4)(_Dst,param_4);
      }
    }
    else {
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar4 != (code *)0x0) {
        puVar8 = _Dst;
        if (0x18 < *(ushort *)(_Dst + 3)) {
          puVar8 = (undefined8 *)*_Dst;
        }
        (*pcVar4)(puVar8);
      }
      if (0x18 < *(ushort *)(_Dst + 3)) {
        FUN_1400020a8(*_Dst);
      }
      bVar1 = *(byte *)(param_4 + 4);
      uVar2 = *(ushort *)(param_4 + 3);
      *(ushort *)(_Dst + 3) = uVar2;
      _Dst_00 = _Dst;
      puVar8 = param_4;
      if (0x18 < uVar2) {
        _Dst_00 = (undefined8 *)FUN_14001cc68(uVar2,0);
        *_Dst = _Dst_00;
        puVar8 = (undefined8 *)*param_4;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar4 == (code *)0x0) {
        memcpy(_Dst_00,puVar8,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
      }
      else {
        (*pcVar4)();
      }
      *(undefined1 *)(_Dst + 4) = *(undefined1 *)(param_4 + 4);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461cc6b0 FUN_1461cc6b0 body=141 status=ok
// SIG undefined FUN_1461cc6b0(void)

longlong FUN_1461cc6b0(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1461cc73e();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x60;
    if (lVar3 + lVar2 != 0) goto LAB_1461cc701;
  }
  local_30 = param_3;
  FUN_1461cc8b6(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x60;
LAB_1461cc701:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + lVar3 + 8;
}



// FUNCTION 1461cc73e FUN_1461cc73e body=184 status=ok
// SIG undefined FUN_1461cc73e(void)

int FUN_1461cc73e(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x60);
        cVar1 = FUN_140cba20c(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1461cc7d0;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x58 + (longlong)iVar4 * 0x60);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1461cc7d0:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461cc7f8 FUN_1461cc7f8 body=189 status=ok
// SIG undefined FUN_1461cc7f8(void)

longlong FUN_1461cc7f8(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *param_1 + (longlong)iVar1 * 0x38;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x38) == *param_3) {
          if (lVar2 != 0) goto LAB_1461cc847;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x30);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1461ccc86(param_1,&local_1c,param_2);
  lVar2 = (longlong)local_1c * 0x38 + *param_1;
LAB_1461cc847:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + 8;
}



// FUNCTION 1461cc8b6 FUN_1461cc8b6 body=269 status=ok
// SIG undefined FUN_1461cc8b6(void)

undefined4 * FUN_1461cc8b6(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1461ccb96(param_1,local_48);
  FUN_1461cc9c4(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_1461ccada(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1461cd0f6(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461cc9c4 FUN_1461cc9c4 body=151 status=ok
// SIG undefined FUN_1461cc9c4(void)

undefined8 * FUN_1461cc9c4(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1461cca5c(param_2 + 1,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_140333f4e(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461cca5c FUN_1461cca5c body=125 status=ok
// SIG undefined FUN_1461cca5c(void)

undefined8 * FUN_1461cca5c(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_140bc2f1c();
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



// FUNCTION 1461ccada FUN_1461ccada body=186 status=ok
// SIG undefined FUN_1461ccada(void)

undefined8 FUN_1461ccada(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

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
    iVar2 = FUN_141340124();
    if (iVar2 != -1) {
      lVar1 = *param_1;
      lVar4 = (longlong)iVar2 * 0x60;
      *(undefined4 *)(lVar1 + 0x50 + lVar4) = 0;
      if (*(longlong *)(lVar1 + 0x48 + lVar4) != 0) {
        FUN_1400020a8();
      }
      FUN_140333f4e(lVar1 + lVar4 + 8);
      memmove((void *)(lVar1 + lVar4),param_3,0x58);
      FUN_148e14528(param_1,*param_4);
      *param_4 = iVar2;
      uVar3 = 1;
      goto LAB_1461ccb1e;
    }
  }
  uVar3 = 0;
LAB_1461ccb1e:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ccb96 FUN_1461ccb96 body=239 status=ok
// SIG undefined FUN_1461ccb96(void)

int * FUN_1461ccb96(longlong *param_1,int *param_2)

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



// FUNCTION 1461ccc86 FUN_1461ccc86 body=278 status=ok
// SIG undefined FUN_1461ccc86(void)

undefined4 * FUN_1461ccc86(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14040cfbc(param_1,local_48);
  FUN_1461ccd9e(param_4,local_40);
  *(undefined4 *)(local_40 + 0x30) = 0xffffffff;
  local_58 = 0;
  cVar1 = FUN_14040c306(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x34) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x30) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_140882160(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ccd9e FUN_1461ccd9e body=165 status=ok
// SIG undefined FUN_1461ccd9e(void)

undefined8 * FUN_1461ccd9e(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  local_20 = 0;
  *param_2 = *(undefined8 *)*param_1;
  FUN_1408820c2(param_2 + 1,0,local_40);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_40;
    if (0x18 < local_28) {
      pppuVar2 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461cce44 FUN_1461cce44 body=689 status=ok
// SIG undefined FUN_1461cce44(void)

void FUN_1461cce44(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *****pppppuVar8;
  longlong lVar9;
  undefined4 uVar10;
  float fVar11;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [40];
  undefined4 local_68;
  undefined8 ****local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar9 = *(longlong *)(param_1 + 0x230);
  lVar7 = *(longlong *)(lVar9 + 0x150);
  if (lVar7 == 0) {
    uVar3 = FUN_140dddfde();
    lVar7 = FUN_14477b664(uVar3);
    *(longlong *)(lVar9 + 0x150) = lVar7;
  }
  if (*(longlong *)(lVar9 + 0x158) == 0) {
    if ((lVar7 == 0) || (*(longlong *)(lVar9 + 0x148) == 0)) goto LAB_1461cd022;
    plVar4 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar2 == '\0')) {
      *(undefined8 *)(lVar9 + 0x158) = 0;
      goto LAB_1461cd022;
    }
    uVar3 = (**(code **)(*plVar4 + 0x110))(plVar4);
    lVar7 = FUN_144aff482(uVar3,(longlong *)(lVar9 + 0x148));
    *(longlong *)(lVar9 + 0x158) = lVar7;
    if (lVar7 == 0) goto LAB_1461cd022;
  }
  plVar4 = *(longlong **)(param_1 + 0x238);
  if (plVar4 != (longlong *)0x0) {
    uVar3 = FUN_140ac4d32();
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = FUN_140ac4d32();
      plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
      if ((plVar4 != plVar5) && (plVar5 != (longlong *)0x0)) {
        lVar9 = *(longlong *)(param_1 + 0x230);
        local_90[0] = 0;
        local_68 = 0;
        FUN_1456bb102(local_90,*(undefined8 *)(param_1 + 0x238));
        FUN_1448729ea(lVar9 + 0xf8,local_60,local_90);
        uVar10 = FUN_144a7b41a(local_60);
        *(undefined4 *)(param_1 + 0x21c) = uVar10;
        FUN_14020a6cc(param_1 + 0x214,1);
        pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
        if (pcVar1 != (code *)0x0) {
          pppppuVar8 = local_60;
          if (0x18 < local_48) {
            pppppuVar8 = (undefined8 *****)local_60[0];
          }
          (*pcVar1)(pppppuVar8);
        }
        if (0x18 < local_48) {
          FUN_1400020a8(local_60[0]);
        }
        FUN_144a5ac3a(local_90);
        if (0.0 < *(float *)(param_1 + 0x218)) {
          local_60[0] = *(undefined8 *****)(*(longlong *)(param_1 + 0x230) + 0x148);
          FUN_1401533ba(local_90,local_60,1);
          uVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,local_90);
          fVar11 = (float)uVar6 * *(float *)(param_1 + 0x218);
          lVar9 = (longlong)fVar11;
          (**(code **)(*plVar5 + 0x30))
                    (plVar5,local_90,
                     (uint)lVar9 | (uint)(longlong)(fVar11 - 9.223372e+18) & (uint)(lVar9 >> 0x3f));
        }
      }
    }
  }
LAB_1461cd022:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461cd0f6 FUN_1461cd0f6 body=449 status=ok
// SIG undefined FUN_1461cd0f6(void)

void FUN_1461cd0f6(longlong *param_1)

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



// FUNCTION 1461cd2c4 FUN_1461cd2c4 body=991 status=ok
// SIG undefined FUN_1461cd2c4(void)

undefined8 * FUN_1461cd2c4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x14] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x22));
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 1;
  plVar7 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14aba03f0;
  plVar8 = plVar7 + 2;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  local_78 = plVar8;
  uStack_70 = plVar7;
  FUN_1461cd6a4(&local_78,plVar8);
  if (plVar7 == (longlong *)0x0) {
    param_1[0x24] = 0x10;
    plVar8 = (longlong *)param_1[0x25];
    if (plVar8 == (longlong *)0x0) goto LAB_1461cd3e0;
    param_1[0x25] = 0;
LAB_1461cd600:
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_1461cd3e0;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar7 = plVar8;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    param_1[0x24] = plVar8;
    plVar8 = (longlong *)param_1[0x25];
    if (plVar7 != plVar8) {
      param_1[0x25] = plVar7;
      if (plVar8 == (longlong *)0x0) goto LAB_1461cd3e0;
      goto LAB_1461cd600;
    }
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_1461cd3e0;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
LAB_1461cd3e0:
  plVar8 = uStack_70;
  if (uStack_70 != (longlong *)0x0) {
    LOCK();
    plVar7 = uStack_70 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*uStack_70)(uStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  local_78 = (longlong *)param_1[0x12];
  uStack_70 = (longlong *)param_1[0x13];
  local_68 = (longlong *)param_1[0x14];
  uStack_60 = param_1[0x15];
  local_58 = param_1[0x16];
  uStack_50 = param_1[0x17];
  local_48 = param_1[0x18];
  uStack_40 = param_1[0x19];
  uVar5 = local_48;
  uVar6 = uStack_40;
  uVar4 = uStack_60;
  uVar3 = uStack_70;
  param_1[0x18] = CONCAT44(uStack_84,local_88);
  param_1[0x19] = CONCAT44(uStack_7c,uStack_80);
  param_1[0x16] = &PTR_LAB_14aba0410;
  param_1[0x17] = param_1;
  param_1[0x14] = 0;
  param_1[0x15] = CONCAT44(uStack_9c,uStack_a0);
  param_1[0x12] = FUN_14380067c;
  param_1[0x13] = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_98 = local_58;
  uStack_90 = uStack_50;
  local_a8 = local_68;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b8 = local_78;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  if (local_78 != (longlong *)0x0) {
    plVar8 = local_a8;
    if (local_68 == (longlong *)0x0) {
      plVar8 = &local_98;
    }
    uStack_70 = (longlong *)uVar3;
    uStack_60 = uVar4;
    local_48 = uVar5;
    uStack_40 = uVar6;
    (**(code **)(*plVar8 + 0x10))();
  }
  local_f8 = (longlong *)param_1[0x1a];
  uStack_70 = (longlong *)param_1[0x1b];
  local_e8 = (longlong *)param_1[0x1c];
  uStack_60 = param_1[0x1d];
  local_58 = param_1[0x1e];
  uStack_50 = param_1[0x1f];
  local_48 = param_1[0x20];
  uStack_40 = param_1[0x21];
  uVar5 = local_48;
  uVar6 = uStack_40;
  local_68 = local_e8;
  uVar4 = uStack_60;
  local_78 = local_f8;
  uVar3 = uStack_70;
  param_1[0x20] = CONCAT44(uStack_c4,local_c8);
  param_1[0x21] = CONCAT44(uStack_bc,uStack_c0);
  param_1[0x1e] = &PTR_LAB_14aba0430;
  param_1[0x1f] = param_1;
  param_1[0x1c] = 0;
  param_1[0x1d] = CONCAT44(uStack_dc,uStack_e0);
  param_1[0x1a] = FUN_143800892;
  param_1[0x1b] = CONCAT44(uStack_ec,uStack_f0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_c8 = (undefined4)local_48;
  uStack_c4 = local_48._4_4_;
  uStack_c0 = (undefined4)uStack_40;
  uStack_bc = uStack_40._4_4_;
  local_d8 = local_58;
  uStack_d0 = uStack_50;
  uStack_e0 = (undefined4)uStack_60;
  uStack_dc = uStack_60._4_4_;
  uStack_f0 = (undefined4)uStack_70;
  uStack_ec = uStack_70._4_4_;
  uStack_70 = (longlong *)uVar3;
  uStack_60 = uVar4;
  local_48 = uVar5;
  uStack_40 = uVar6;
  if (local_f8 != (longlong *)0x0) {
    plVar8 = local_e8;
    if (local_e8 == (longlong *)0x0) {
      plVar8 = &local_d8;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461cd6a4 FUN_1461cd6a4 body=159 status=ok
// SIG undefined FUN_1461cd6a4(void)

void FUN_1461cd6a4(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_1461cd6e1;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_1461cd6e1;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1461cd6e1:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001461cd73f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1461cd744 FUN_1461cd744 body=1017 status=ok
// SIG undefined FUN_1461cd744(void)

void FUN_1461cd744(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  plVar3 = local_48;
  local_40 = 3;
  *local_48 = (longlong)&PTR_LAB_14b4c2ba0;
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
  *local_48 = (longlong)&PTR_FUN_14b4c38b0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_1);
  plVar3[4] = (longlong)FUN_143eda490;
  FUN_144a450dc(param_1 + 0xb,&local_48);
  FUN_1449db362(&local_48);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  plVar3 = local_48;
  local_40 = 3;
  *local_48 = (longlong)&PTR_LAB_149eae4d0;
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
  *local_48 = (longlong)&PTR_FUN_14b4c3920;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_1);
  plVar3[4] = (longlong)FUN_143eda602;
  FUN_144a450dc(param_1 + 5,&local_48);
  FUN_1449db362(&local_48);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  plVar3 = local_48;
  local_40 = 3;
  *local_48 = (longlong)&PTR_LAB_149eae4d0;
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
  *local_48 = (longlong)&PTR_FUN_14b4c3920;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_1);
  plVar3[4] = (longlong)FUN_143eda6a4;
  FUN_144a450dc(param_1 + 7,&local_48);
  FUN_1449db362(&local_48);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  plVar3 = local_48;
  local_40 = 3;
  *local_48 = (longlong)&PTR_LAB_149eae4d0;
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
  *local_48 = (longlong)&PTR_FUN_14b4c3920;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_1);
  plVar3[4] = (longlong)FUN_143eda758;
  FUN_144a450dc(param_1 + 9,&local_48);
  FUN_1449db362(&local_48);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  plVar3 = local_48;
  local_40 = 3;
  *local_48 = (longlong)&PTR_LAB_14b4c3a00;
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
  *local_48 = (longlong)&PTR_FUN_14b4c3990;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_1);
  plVar3[4] = (longlong)&LAB_1461bd44e;
  FUN_144a450dc(param_1 + 0xd,&local_48);
  FUN_1449db362(&local_48);
  (**(code **)(*param_1 + 0x2d8))(param_1,&local_48);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x330))(local_48,&local_50,param_1 + 0xd);
    param_1[0x16] = local_50;
  }
  plVar3 = (longlong *)CONCAT44(uStack_3c,local_40);
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
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461cdb48 FUN_1461cdb48 body=134 status=ok
// SIG undefined FUN_1461cdb48(void)

void FUN_1461cdb48(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined1 *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    uVar1 = FUN_140746dd0();
    plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
      if (lVar3 != 0) {
        local_20 = &local_30;
        local_28 = &LAB_142b513a8;
        local_30 = param_1;
        FUN_1408d6bd2(lVar3,*param_1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461cdbd0 FUN_1461cdbd0 body=246 status=ok
// SIG undefined FUN_1461cdbd0(void)

undefined8 * FUN_1461cdbd0(longlong param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  undefined1 local_64 [4];
  undefined1 *local_60;
  undefined4 local_58;
  undefined1 **local_50;
  undefined8 **local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar1 = 0;
  puVar1[6] = 0;
  local_70 = puVar1;
  FUN_14485c47a(puVar1,param_2);
  local_60 = &LAB_145d472d6;
  local_58 = 0;
  FUN_1461cdf96(&local_50,param_1);
  FUN_140725f8c(param_2 + 0x2d0,&local_60,&local_50);
  FUN_1449db362(&local_50);
  local_60 = param_2;
  local_50 = &local_60;
  local_48 = &local_70;
  FUN_1461cdcc8(param_1 + 0x20,local_64,&local_50);
  if (local_70 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461cdcc8 FUN_1461cdcc8 body=333 status=ok
// SIG undefined FUN_1461cdcc8(void)

undefined4 * FUN_1461cdcc8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1461cdeb2(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  *local_40 = *(ulonglong *)*param_3;
  local_40[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1461cde16(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1461ce142(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461cde16 FUN_1461cde16 body=156 status=ok
// SIG undefined FUN_1461cde16(void)

undefined8 FUN_1461cde16(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*plVar4 == *param_3) {
          if (plVar4[1] != 0) {
            FUN_1400020a8();
          }
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar3 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar4 = (int)*param_3;
          *(undefined4 *)((longlong)plVar4 + 4) = uVar1;
          *(int *)(plVar4 + 1) = (int)lVar3;
          *(undefined4 *)((longlong)plVar4 + 0xc) = uVar2;
          FUN_145d474b0(param_1,*param_4);
          *param_4 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar4[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1461cdeb2 FUN_1461cdeb2 body=227 status=ok
// SIG undefined FUN_1461cdeb2(void)

int * FUN_1461cdeb2(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1461cdf96 FUN_1461cdf96 body=428 status=ok
// SIG undefined FUN_1461cdf96(void)

longlong * FUN_1461cdf96(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_1461ce076:
    *puVar5 = &PTR_LAB_14a1c7440;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14ac8d3a0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1461ce076;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a1c7440;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14ac8d3a0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 1461ce142 FUN_1461ce142 body=483 status=ok
// SIG undefined FUN_1461ce142(void)

void FUN_1461ce142(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461ce326 FUN_1461ce326 body=124 status=ok
// SIG undefined FUN_1461ce326(void)

void FUN_1461ce326(longlong *param_1)

{
  longlong *in_stack_00000028;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = local_28;
  local_28[0] = 0;
  local_28[1] = 0;
  (**(code **)(*param_1 + 0x750))();
  if (((int)in_stack_00000028[1] != 0) &&
     (in_stack_00000028 = (longlong *)*in_stack_00000028, in_stack_00000028 != (longlong *)0x0)) {
    (**(code **)(*in_stack_00000028 + 0x60))(in_stack_00000028,local_28);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ce3a4 FUN_1461ce3a4 body=298 status=ok
// SIG undefined FUN_1461ce3a4(void)

void FUN_1461ce3a4(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((&DAT_149fc1b6e)[*(byte *)(param_4 + 0x18)] == '\x01') {
    if ((*(longlong **)(param_4 + 8) != (longlong *)0x0) &&
       (cVar1 = (**(code **)(**(longlong **)(param_4 + 8) + 0x28))(), cVar1 != '\0')) {
LAB_1461ce3f8:
      plVar2 = (longlong *)FUN_140489acc();
      cVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2,param_4);
      if (cVar1 == '\0') {
        FUN_14020fad6(param_5,L"incompatible_unique_net_id");
        goto LAB_1461ce460;
      }
    }
  }
  else if ((*(uint *)(param_4 + 8) & 0xffffff) != 0) goto LAB_1461ce3f8;
  (**(code **)(**(longlong **)(param_1 + 1000) + 0x650))
            (*(longlong **)(param_1 + 1000),&local_40,param_2);
  if (&local_40 == param_5) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_5 != 0) {
      FUN_1400020a8();
    }
    *param_5 = local_40;
    local_40 = 0;
    *(undefined4 *)(param_5 + 1) = local_38;
    *(undefined4 *)((longlong)param_5 + 0xc) = local_34;
  }
LAB_1461ce460:
  FUN_1461ce4d0(param_1,param_4,param_5);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461ce4d0 FUN_1461ce4d0 body=202 status=ok
// SIG undefined FUN_1461ce4d0(void)

void FUN_1461ce4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14cadaf50;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14cadaf5c = DAT_14cadaf5c + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14cadaf48 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cadaf48 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2,param_3), cVar3 != '\0')))
    {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14cadaf5c = DAT_14cadaf5c + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_1461ce580;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14cadaf5c = DAT_14cadaf5c + -1;
LAB_1461ce580:
  FUN_14474d06a(&DAT_14cadaf48,0);
  return;
}



// FUNCTION 1461ce59a FUN_1461ce59a body=402 status=ok
// SIG undefined FUN_1461ce59a(void)

undefined2 * FUN_1461ce59a(undefined2 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  *param_1 = 0;
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xf8;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  FUN_1447400e4(param_1 + 0x20,0x2000,0);
  FUN_144a99d0c(param_1 + 0x7c,0,0);
  *(undefined8 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  *(undefined8 **)(param_1 + 0xf4) = puVar2;
  *(undefined8 **)(param_1 + 0xf0) = puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  *(undefined8 **)(param_1 + 0xfc) = puVar2;
  *(undefined8 **)(param_1 + 0xf8) = puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  *(undefined8 **)(param_1 + 0x104) = puVar2;
  *(undefined8 **)(param_1 + 0x100) = puVar2;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x10);
  *puVar2 = 0;
  *(undefined8 **)(param_1 + 0x114) = puVar2;
  *(undefined8 **)(param_1 + 0x110) = puVar2;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 300) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined1 *)(param_1 + 0x78) = 1;
  if (*(longlong *)(param_1 + 0x74) <= *(longlong *)(param_1 + 0x70)) {
    lVar3 = *(longlong *)(param_1 + 0x70) + 1;
    lVar6 = *(longlong *)(param_1 + 0x74) * 2;
    if (lVar6 < lVar3) {
      lVar6 = lVar3;
    }
    *(longlong *)(param_1 + 0x74) = lVar6;
    iVar1 = *(int *)(param_1 + 0x6c);
    iVar4 = (int)(lVar6 + 7U >> 3);
    *(int *)(param_1 + 0x6c) = iVar4;
    uVar5 = iVar4 - iVar1;
    if ((uint)(*(int *)(param_1 + 0x6e) - iVar1) < uVar5) {
      FUN_1447403be(param_1 + 0x68);
    }
    memset((void *)((longlong)iVar1 + *(longlong *)(param_1 + 0x68)),0,(longlong)(int)uVar5);
  }
  return param_1;
}



// FUNCTION 1461ce72c FUN_1461ce72c body=628 status=ok
// SIG undefined FUN_1461ce72c(void)

void FUN_1461ce72c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  void *_Src;
  char cVar7;
  byte bVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  PSRWLOCK SRWLock;
  longlong lVar13;
  undefined1 auStack_98 [32];
  PSRWLOCK local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar11 = *(longlong *)(param_1 + 0x288);
  if (lVar11 != 0) {
    FUN_1448d5e3c(&local_58,param_1 + 0x208);
    plVar4 = *(longlong **)(local_58 + 0x2e0);
    SRWLock = (PSRWLOCK)(plVar4 + 6);
    AcquireSRWLockShared(SRWLock);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
    *(int *)(lVar11 + 0x140) = (int)plVar4[1];
    lVar13 = DAT_14cb92a60;
    cVar7 = FUN_144a8728e();
    if (cVar7 == '\0') {
      bVar8 = FUN_144a61b4f();
      uVar9 = (ulonglong)(bVar8 ^ 1);
    }
    else {
      uVar9 = 0;
    }
    iVar10 = *(int *)(lVar11 + 0x140);
    if ((*(char *)(lVar13 + uVar9) == '\x01') && (iVar10 < 3)) {
      *(undefined4 *)(lVar11 + 0x140) = 3;
      iVar10 = 3;
    }
    FUN_1403ed7b2((longlong *)(param_1 + 0x2b0),iVar10,1);
    FUN_1403ed7b2((longlong *)(param_1 + 0x2c0),*(undefined4 *)(lVar11 + 0x140),1);
    FUN_1447a1747(*(undefined8 *)(param_1 + 0x2d0),*(undefined4 *)(param_1 + 0x2d8));
    *(undefined4 *)(param_1 + 0x2d8) = 0;
    if (*(int *)(param_1 + 0x2dc) != 0) {
      FUN_1408be2c4((longlong *)(param_1 + 0x2d0),0);
    }
    if (0 < (int)plVar4[1]) {
      lVar11 = 0;
      lVar13 = 0;
      local_78 = SRWLock;
      local_70 = (longlong *)(param_1 + 0x2d0);
      local_68 = (longlong *)(param_1 + 0x2c0);
      local_60 = (longlong *)(param_1 + 0x2b0);
      do {
        plVar1 = local_70;
        lVar5 = *plVar4;
        iVar10 = *(int *)(param_1 + 0x2d8);
        *(uint *)(param_1 + 0x2d8) = iVar10 + 1U;
        if (*(uint *)(param_1 + 0x2dc) < iVar10 + 1U) {
          FUN_1447a1bd6(local_70,iVar10);
        }
        lVar6 = *plVar1;
        lVar12 = (longlong)iVar10 * 0x10;
        puVar3 = (undefined8 *)(lVar6 + lVar12);
        *(undefined8 *)(lVar6 + lVar12) = 0;
        iVar10 = *(int *)(lVar5 + 0x18 + lVar11);
        _Src = *(void **)(lVar5 + 0x10 + lVar11);
        *(int *)(lVar6 + 8 + lVar12) = iVar10;
        if ((longlong)iVar10 == 0) {
          *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar3,iVar10,0);
          memcpy((void *)*puVar3,_Src,(longlong)iVar10 * 2);
        }
        *(undefined1 *)(*local_68 + lVar13) = *(undefined1 *)(*plVar4 + 0xc9 + lVar11);
        *(byte *)(*local_60 + lVar13) = *(byte *)(*plVar4 + 0xca + lVar11) ^ 1;
        lVar13 = lVar13 + 1;
        lVar11 = lVar11 + 0x130;
        SRWLock = local_78;
      } while (lVar13 < (int)plVar4[1]);
    }
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461ce9a2 FUN_1461ce9a2 body=2131 status=ok
// SIG undefined FUN_1461ce9a2(void)

void FUN_1461ce9a2(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ushort uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  ushort *puVar9;
  void *pvVar10;
  char cVar11;
  byte bVar12;
  ulonglong uVar13;
  undefined2 *puVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  longlong local_1b0;
  longlong local_1a8 [2];
  longlong local_198 [4];
  longlong local_178 [2];
  longlong local_168 [2];
  longlong local_158 [4];
  void *local_138;
  int local_130;
  undefined4 local_12c;
  undefined **local_128;
  int local_120;
  undefined4 uStack_11c;
  longlong local_110;
  longlong local_78 [2];
  char local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar7 = *(longlong *)(param_1 + 0x288);
  if (((lVar7 == 0) || (*(int *)(lVar7 + 0x13c) = param_2, param_2 < 0)) ||
     (*(int *)(lVar7 + 0x140) <= param_2)) goto LAB_1461cecfe;
  FUN_1461cf1f6();
  FUN_1448d5e3c(&local_128,param_1 + 0x208);
  plVar8 = (longlong *)local_128[0x5c];
  AcquireSRWLockShared((PSRWLOCK)(plVar8 + 6));
  plVar18 = (longlong *)CONCAT44(uStack_11c,local_120);
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar2 = (int *)((longlong)plVar18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  iVar15 = *(int *)(lVar7 + 0x13c);
  if ((-1 < (longlong)iVar15) && (iVar15 < *(int *)(param_1 + 0x2c8))) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x2c0) + (longlong)iVar15) = 1;
    iVar15 = *(int *)(lVar7 + 0x13c);
  }
  if (iVar15 < (int)plVar8[1]) {
    lVar17 = *plVar8;
    lVar3 = lVar17 + (longlong)iVar15 * 0x130;
    FUN_144a787a6(lVar7 + 0xd8,lVar3);
    lVar17 = lVar17 + (longlong)iVar15 * 0x130;
    FUN_140390f7a(lVar17 + 0x70,lVar7 + 0xe8);
    if ((*(char *)(lVar17 + 0xcd) == '\0') && (1 < *(int *)(lVar3 + 0x68))) {
      lVar17 = lVar3 + 0x60;
    }
    else {
      lVar17 = lVar3 + 0x50;
    }
    FUN_144a787a6(lVar7 + 0xf8,lVar17);
    FUN_144a787a6(lVar7 + 0x108,lVar3 + 0x20);
    FUN_144a787a6(lVar7 + 0x118,lVar3 + 0x30);
    FUN_144a787a6((undefined8 *)(lVar7 + 0x128),lVar3 + 0x40);
    if (*(int *)(lVar7 + 0x130) == 0) {
      puVar14 = &DAT_149dfb77a;
    }
    else {
      puVar14 = *(undefined2 **)(lVar7 + 0x128);
    }
    lVar17 = 0;
    do {
      uVar5 = puVar14[lVar17];
      bVar12 = "Unknown"[lVar17];
      iVar15 = (uint)uVar5 - (uint)bVar12;
      if (iVar15 == 0) {
        iVar15 = 0;
        if (uVar5 == 0) goto LAB_1461ceb5a;
      }
      else {
        if (0x7f < ((uint)bVar12 | (uint)uVar5)) goto LAB_1461ceb5a;
        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[bVar12]) goto code_r0x0001461ceb57;
      }
      lVar17 = lVar17 + 1;
    } while( true );
  }
  FUN_148eae0f2(lVar7);
  goto LAB_1461ceccb;
code_r0x0001461ceb57:
  iVar15 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[bVar12];
LAB_1461ceb5a:
  *(bool *)(lVar7 + 0x138) = iVar15 != 0;
  *(bool *)(lVar7 + 0x170) = 0 < *(int *)(lVar3 + 0xa0);
  *(bool *)(lVar7 + 0x188) = 0 < *(int *)(lVar3 + 0xb0);
  *(bool *)(lVar7 + 0x1d8) = 4 < *(int *)(lVar3 + 0xb0);
  *(undefined1 *)(lVar7 + 0x1db) = *(undefined1 *)(lVar3 + 200);
  *(undefined1 *)(lVar7 + 0x14c) = *(undefined1 *)(lVar3 + 0xcb);
  *(undefined1 *)(lVar7 + 0x14d) = *(undefined1 *)(lVar3 + 0xcc);
  *(undefined1 *)(lVar7 + 0x1dc) = *(undefined1 *)(lVar3 + 0xce);
  *(undefined1 *)(lVar7 + 0x1d9) = 0;
  iVar15 = *(int *)(lVar7 + 0x13c);
  if ((-1 < (longlong)iVar15) && (iVar15 < *(int *)(param_1 + 0x2b8))) {
    *(undefined1 *)(lVar7 + 0x1d9) =
         *(undefined1 *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar15);
  }
  if ((longlong)*(int *)(lVar3 + 0xa0) != 0) {
    plVar18 = *(longlong **)(lVar3 + 0x98);
    local_1b8 = plVar18 + (longlong)*(int *)(lVar3 + 0xa0) * 3;
    do {
      FUN_1408f3f9e(&local_128);
      local_128 = &PTR_FUN_14b8b8750;
      local_78[0] = 0;
      local_78[1] = 0;
      local_68 = 1;
      FUN_144a787a6(local_78,plVar18);
      local_68 = (char)plVar18[2];
      if (local_68 == '\0') {
        *(undefined1 *)(lVar7 + 0x1da) = 0;
      }
      iVar15 = *(int *)(lVar7 + 0x180);
      *(uint *)(lVar7 + 0x180) = iVar15 + 1U;
      if (*(uint *)(lVar7 + 0x184) < iVar15 + 1U) {
        FUN_148ebb5ee((longlong *)(lVar7 + 0x178),iVar15);
      }
      FUN_148c8696a((longlong)iVar15 * 200 + *(longlong *)(lVar7 + 0x178),&local_128);
      local_128 = &PTR_FUN_14b8b8750;
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      FUN_140fe7f26(&local_128);
      plVar18 = plVar18 + 3;
    } while (plVar18 != local_1b8);
  }
  lVar17 = lVar7 + 0x150;
  FUN_14020fad6(lVar17,&DAT_149dfb77a);
  if (*(char *)(lVar7 + 0x14c) != '\0') {
    *(bool *)(lVar7 + 0x14e) = *(int *)(lVar7 + 0x148) <= *(int *)(lVar7 + 0x144);
    *(byte *)(lVar7 + 0x1da) =
         *(byte *)(lVar7 + 0x1da) & *(int *)(lVar7 + 0x144) < *(int *)(lVar7 + 0x148);
    pvVar10 = DAT_14cbdfd20;
    local_138 = (void *)0x0;
    lVar16 = (longlong)DAT_14cbdfd28;
    local_130 = DAT_14cbdfd28;
    if (lVar16 == 0) {
      local_12c = 0;
    }
    else {
      FUN_1446dd670(&local_138,DAT_14cbdfd28,0);
      memcpy(local_138,pvVar10,lVar16 * 2);
    }
    FUN_14000bbd8(&local_128,&local_138,0);
    FUN_140ac6a88(&local_128,lVar17);
    if (local_110 != 0) {
      FUN_1400020a8();
    }
    if (local_138 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400b22c2(&local_138,L"]Right Bracket");
    local_158[0] = 0;
    local_158[1] = 0;
    FUN_144a83b10(local_158,*(undefined4 *)(lVar7 + 0x148));
    FUN_1400b22c2(local_178,L"/Disabled");
    local_198[0] = 0;
    local_198[1] = 0;
    FUN_144a83b10(local_198,*(undefined4 *)(lVar7 + 0x144));
    FUN_1400b22c2(local_1a8,&DAT_14a354984);
    FUN_1401c7f3e(local_198 + 2,local_1a8,local_198);
    FUN_1401c7f3e(local_168,local_198 + 2,local_178);
    FUN_1401c7f3e(local_158 + 2,local_168,local_158);
    FUN_1401c7f3e(&local_128,local_158 + 2,&local_138);
    iVar15 = local_120 + -1;
    if (local_120 == 0) {
      iVar15 = 0;
    }
    FUN_1400020e8(lVar17,local_128,iVar15);
    if (local_128 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    if (local_158[2] != 0) {
      FUN_1400020a8();
    }
    if (local_168[0] != 0) {
      FUN_1400020a8();
    }
    if (local_198[2] != 0) {
      FUN_1400020a8();
    }
    if (local_1a8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_198[0] != 0) {
      FUN_1400020a8();
    }
    if (local_178[0] != 0) {
      FUN_1400020a8();
    }
    if (local_158[0] != 0) {
      FUN_1400020a8();
    }
    if (local_138 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  *(int *)(lVar7 + 0x1cc) = *(int *)(lVar7 + 0x1cc) + 1;
  if (0 < *(int *)(lVar3 + 0xb0)) {
    lVar17 = 0;
    lVar16 = 0;
    do {
      if ((*(byte *)(lVar7 + 0x1c8) & 2) != 0) break;
      FUN_145a050a6(lVar7 + 400,*(longlong *)(lVar3 + 0xa8) + lVar17);
      lVar16 = lVar16 + 1;
      lVar17 = lVar17 + 0xd8;
    } while (lVar16 < *(int *)(lVar3 + 0xb0));
  }
  lVar17 = DAT_14cb92a60;
  cVar11 = FUN_144a8728e();
  if (cVar11 == '\0') {
    bVar12 = FUN_144a61b4f();
    uVar13 = (ulonglong)(bVar12 ^ 1);
  }
  else {
    uVar13 = 0;
  }
  if (*(char *)(lVar17 + uVar13) != '\0') {
    FUN_148eae0f2(lVar7);
  }
  iVar15 = *(int *)(lVar3 + 0xc0);
  if ((longlong)iVar15 != 0) {
    local_1b0 = *(longlong *)(lVar3 + 0xb8);
    local_1b8 = (longlong *)(lVar7 + 0x1e0);
    lVar17 = 0;
    do {
      local_128 = (undefined **)0x0;
      local_120 = *(int *)(local_1b0 + 8 + lVar17);
      lVar16 = (longlong)local_120;
      pvVar10 = *(void **)(local_1b0 + lVar17);
      if (lVar16 == 0) {
        uStack_11c = 0;
      }
      else {
        FUN_1446dd670(&local_128,local_120,0);
        memcpy(local_128,pvVar10,lVar16 * 2);
      }
      iVar6 = *(int *)(lVar7 + 0x1e8);
      *(uint *)(lVar7 + 0x1e8) = iVar6 + 1U;
      if (*(uint *)(lVar7 + 0x1ec) < iVar6 + 1U) {
        FUN_148ebb686(local_1b8,iVar6);
      }
      lVar16 = *local_1b8;
      puVar4 = (undefined8 *)(lVar16 + (longlong)iVar6 * 0x10);
      *puVar4 = 0;
      puVar4[1] = 0;
      FUN_1402980a2(lVar16 + (longlong)iVar6 * 0x10,local_128);
      if (local_128 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      lVar17 = lVar17 + 0x10;
    } while ((longlong)iVar15 * 0x10 != lVar17);
  }
  if ((((*(int *)(lVar3 + 0xe0) != 0) && (*(int *)(lVar3 + 0xe4) != 0)) &&
      (*(int *)(lVar3 + 0xe0) != DAT_14c948000)) && (*(char *)(lVar3 + 0x108) == '\0')) {
    *(undefined1 *)(lVar7 + 0x1da) = 0;
  }
LAB_1461ceccb:
  FUN_1461cf404(param_1);
  FUN_141637cfe(param_1);
  puVar9 = *(ushort **)(lVar7 + 0x80);
  if (puVar9 != (ushort *)0x0) {
    *puVar9 = *puVar9 | (ushort)(1L << (*(byte *)(lVar7 + 0x78) & 0x3f));
  }
  ReleaseSRWLockShared((PSRWLOCK)(plVar8 + 6));
LAB_1461cecfe:
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461cf1f6 FUN_1461cf1f6 body=423 status=ok
// SIG undefined FUN_1461cf1f6(void)

void FUN_1461cf1f6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0xe0) = 0;
    if (*(int *)(lVar2 + 0xe4) < 0) {
      FUN_1446f8c06((undefined8 *)(lVar2 + 0xd8),0);
    }
    puVar3 = *(undefined2 **)(lVar2 + 0xd8);
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
    *(undefined4 *)(lVar2 + 0x100) = 0;
    if (*(int *)(lVar2 + 0x104) < 0) {
      FUN_1446f8c06((undefined8 *)(lVar2 + 0xf8),0);
    }
    puVar3 = *(undefined2 **)(lVar2 + 0xf8);
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
    *(undefined4 *)(lVar2 + 0x110) = 0;
    if (*(int *)(lVar2 + 0x114) < 0) {
      FUN_1446f8c06((undefined8 *)(lVar2 + 0x108),0);
    }
    puVar3 = *(undefined2 **)(lVar2 + 0x108);
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
    *(undefined4 *)(lVar2 + 0x120) = 0;
    if (*(int *)(lVar2 + 0x124) < 0) {
      FUN_1446f8c06((undefined8 *)(lVar2 + 0x118),0);
    }
    puVar3 = *(undefined2 **)(lVar2 + 0x118);
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
    *(undefined4 *)(lVar2 + 0x130) = 0;
    if (*(int *)(lVar2 + 0x134) < 0) {
      FUN_1446f8c06((undefined8 *)(lVar2 + 0x128),0);
    }
    puVar3 = *(undefined2 **)(lVar2 + 0x128);
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
    iVar1 = *(int *)(lVar2 + 0x184);
    FUN_1458d8294(*(undefined8 *)(lVar2 + 0x178),*(undefined4 *)(lVar2 + 0x180));
    *(undefined4 *)(lVar2 + 0x180) = 0;
    if ((iVar1 < 0) && (*(int *)(lVar2 + 0x184) != 0)) {
      FUN_148ebb70c(lVar2 + 0x178);
    }
    FUN_1461cf39e(lVar2 + 400,0);
    FUN_145c8138d(*(undefined8 *)(lVar2 + 0x1e0),*(undefined4 *)(lVar2 + 0x1e8));
    *(undefined4 *)(lVar2 + 0x1e8) = 0;
    if (*(int *)(lVar2 + 0x1ec) != 0) {
      FUN_148ebb73c(lVar2 + 0x1e0);
    }
    *(undefined1 *)(lVar2 + 0x170) = 0;
    *(undefined1 *)(lVar2 + 0x188) = 0;
    *(undefined2 *)(lVar2 + 0x1da) = 1;
  }
  return;
}



// FUNCTION 1461cf39e FUN_1461cf39e body=40 status=ok
// SIG undefined FUN_1461cf39e(void)

void FUN_1461cf39e(longlong param_1,undefined4 param_2)

{
  FUN_1461cf3c6(param_1 + 0x18);
  FUN_1461cf3c6(param_1 + 0x28,param_2);
  return;
}



// FUNCTION 1461cf3c6 FUN_1461cf3c6 body=61 status=ok
// SIG undefined FUN_1461cf3c6(void)

void FUN_1461cf3c6(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)((longlong)param_1 + 0xc)) {
    FUN_1407dde2a(*param_1,*(undefined4 *)(param_1 + 1));
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  FUN_148e6b696(param_1);
  return;
}



// FUNCTION 1461cf404 FUN_1461cf404 body=498 status=ok
// SIG undefined FUN_1461cf404(void)

void FUN_1461cf404(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ushort *puVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_138 [40];
  undefined **local_110 [22];
  longlong local_60 [2];
  undefined4 local_50;
  ushort local_4c;
  undefined1 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    plVar1 = (longlong *)(lVar3 + 0x160);
    FUN_145c813ba(*(undefined8 *)(lVar3 + 0x160),*(undefined4 *)(lVar3 + 0x168));
    *(undefined4 *)(lVar3 + 0x168) = 0;
    if (*(int *)(lVar3 + 0x16c) != 0) {
      FUN_1461cf5f8(plVar1);
    }
    if (0 < *(int *)(lVar3 + 0x140)) {
      lVar7 = 8;
      uVar6 = 0;
      do {
        FUN_1408f3f9e(local_110);
        local_110[0] = &PTR_FUN_14b8b8a40;
        FUN_1400b22c2(local_60,"side_mission");
        local_50 = (undefined4)uVar6;
        local_4a = uVar6 == *(uint *)(lVar3 + 0x13c);
        local_4c = CONCAT11(*(undefined1 *)(*(longlong *)(param_1 + 0x2b0) + uVar6),
                            *(undefined1 *)(*(longlong *)(param_1 + 0x2c0) + uVar6)) ^ 1;
        if ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x2d8)) {
          iVar2 = *(int *)(*(longlong *)(param_1 + 0x2d0) + lVar7);
          iVar5 = iVar2 + -1;
          if (iVar2 == 0) {
            iVar5 = 0;
          }
          FUN_1402980a2(local_60,*(undefined8 *)(*(longlong *)(param_1 + 0x2d0) + -8 + lVar7),iVar5)
          ;
        }
        iVar2 = *(int *)(lVar3 + 0x168);
        *(uint *)(lVar3 + 0x168) = iVar2 + 1U;
        if (*(uint *)(lVar3 + 0x16c) < iVar2 + 1U) {
          FUN_1461cf628(plVar1,iVar2);
        }
        FUN_1461cf6be((longlong)iVar2 * 200 + *plVar1,local_110);
        local_110[0] = &PTR_FUN_14b8b8a40;
        if (local_60[0] != 0) {
          FUN_1400020a8();
        }
        FUN_140fe7f26(local_110);
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while ((longlong)uVar6 < (longlong)*(int *)(lVar3 + 0x140));
    }
    puVar4 = *(ushort **)(lVar3 + 0x80);
    if (puVar4 != (ushort *)0x0) {
      *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461cf5f8 FUN_1461cf5f8 body=48 status=ok
// SIG undefined FUN_1461cf5f8(void)

void FUN_1461cf5f8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,200,8);
  }
  return;
}



// FUNCTION 1461cf628 FUN_1461cf628 body=150 status=ok
// SIG undefined FUN_1461cf628(void)

void FUN_1461cf628(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 200,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 200)) {
      uVar5 = uVar4 / 200 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,200,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1461cf6be FUN_1461cf6be body=156 status=ok
// SIG undefined FUN_1461cf6be(void)

undefined8 * FUN_1461cf6be(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *_Src;
  
  FUN_14042a9ce();
  *param_1 = &PTR_FUN_14b8b8a40;
  param_1[0x16] = 0;
  iVar1 = *(int *)(param_2 + 0xb8);
  _Src = *(void **)(param_2 + 0xb0);
  *(int *)(param_1 + 0x17) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x16,iVar1,0);
    memcpy((void *)param_1[0x16],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)((longlong)param_1 + 0xc3) = *(undefined4 *)(param_2 + 0xc3);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  return param_1;
}



// FUNCTION 1461cf75a FUN_1461cf75a body=308 status=ok
// SIG undefined FUN_1461cf75a(void)

undefined4
FUN_1461cf75a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,byte param_6,byte param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60 [2];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14163838c(param_5);
  vx_req_sessiongroup_add_session_create(&local_50);
  uVar2 = FUN_14588da6c(param_4);
  *(undefined8 *)(local_50 + 0x70) = uVar2;
  uVar2 = FUN_14588da6c(param_1);
  *(undefined8 *)(local_50 + 0x78) = uVar2;
  *(uint *)(local_50 + 0x50) = (uint)param_6;
  *(uint *)(local_50 + 0x5c) = (uint)param_7;
  uVar2 = FUN_14588da6c(param_3);
  *(undefined8 *)(local_50 + 0x68) = uVar2;
  uVar2 = FUN_14588da6c(param_2);
  *(undefined8 *)(local_50 + 0x30) = uVar2;
  FUN_1461cf890(param_5,local_60);
  uVar2 = FUN_14588da6c(local_60);
  *(undefined8 *)(local_50 + 0x38) = uVar2;
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  local_68 = 0;
  FUN_1412f566c(&local_70,param_8);
  uVar1 = FUN_1412f579e(local_50,&local_70);
  FUN_1449db362(param_8);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461cf890 FUN_1461cf890 body=1123 status=ok
// SIG undefined FUN_1461cf890(void)

undefined8 * FUN_1461cf890(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_158 [40];
  undefined8 *local_130;
  longlong local_128 [2];
  longlong local_118 [2];
  longlong local_108 [2];
  longlong local_f8 [2];
  longlong local_e8 [2];
  longlong local_d8 [2];
  longlong local_c8 [2];
  longlong local_b8 [2];
  longlong local_a8 [2];
  longlong local_98 [2];
  longlong local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((((*(int *)(param_1 + 0x18) < 2) && (*(int *)(param_1 + 8) < 2)) &&
      (*(int *)(param_1 + 0x28) < 2)) && (*(char *)(param_1 + 0x40) == '\0')) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_158);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  cVar1 = *(char *)(param_1 + 0x40);
  local_130 = param_2;
  if (cVar1 == '\0') {
    pcVar4 = "sip:confctl-g-";
LAB_1461cf8f0:
    FUN_1400b22c2(&local_78,pcVar4);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    local_58 = CONCAT44(uStack_74,local_78);
    uStack_50 = CONCAT44(uStack_6c,iStack_70);
LAB_1461cf91e:
    FUN_1400b22c2(local_88,&DAT_14b525b15);
    lVar5 = 0;
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        pcVar4 = "sip:confctl-e-";
        goto LAB_1461cf8f0;
      }
      goto LAB_1461cf91e;
    }
    FUN_1400b22c2(&local_78,"sip:confctl-d-");
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    local_58 = CONCAT44(uStack_74,local_78);
    uStack_50 = CONCAT44(uStack_6c,iStack_70);
    FUN_148ae0f56(param_1 + 0x48,&local_78);
    lVar5 = CONCAT44(uStack_74,local_78);
    uStack_60 = CONCAT44(uStack_6c,iStack_70);
    local_68 = lVar5;
    FUN_1400b22c2(local_88,&DAT_14b525b15);
    if (1 < iStack_70) {
      FUN_1400b22c2(local_b8,L"!../../../Engine/");
      FUN_144a7dea0(local_a8,local_b8,&local_68);
      bVar3 = false;
      goto LAB_1461cf94b;
    }
  }
  FUN_1400b22c2(local_a8,&DAT_149e02088);
  bVar3 = true;
LAB_1461cf94b:
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 < 2) {
    FUN_1400b22c2(local_d8,&DAT_149e02088);
  }
  else {
    FUN_1400b22c2(local_e8,L".Preview");
    FUN_144a7dea0(local_d8,local_e8,param_1 + 0x30);
  }
  FUN_1400b22c2(local_118,L".Preview");
  FUN_140474144(local_128,&local_58,param_1 + 0x20);
  FUN_1401c7f3e(local_108,local_128,local_118);
  FUN_144a7dea0(local_f8,local_108,param_1 + 0x10);
  FUN_1401c7f3e(local_c8,local_f8,local_d8);
  FUN_1401c7f3e(local_98,local_c8,local_a8);
  FUN_1401c7f3e(&local_78,local_98,local_88);
  puVar6 = local_130;
  FUN_144a7dea0(local_130,&local_78,param_1);
  if (CONCAT44(uStack_74,local_78) != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  if (local_128[0] != 0) {
    FUN_1400020a8();
  }
  if (local_118[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if ((1 < iVar2) && (puVar6 = local_130, local_e8[0] != 0)) {
    FUN_1400020a8();
    puVar6 = local_130;
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((!bVar3) && (puVar6 = local_130, local_b8[0] != 0)) {
    FUN_1400020a8();
    puVar6 = local_130;
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (lVar5 != 0) {
    FUN_1400020a8(lVar5);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar6;
}



// FUNCTION 1461cfd02 FUN_1461cfd02 body=619 status=ok
// SIG undefined FUN_1461cfd02(void)

void FUN_1461cfd02(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined1 auStack_148 [32];
  code *local_128;
  undefined8 uStack_120;
  longlong *local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar11 = FUN_1416384b6();
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
  local_128 = (code *)0x0;
  local_118 = (longlong *)0x0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  uVar7 = uStack_f0;
  uVar6 = local_f8;
  uVar12 = uStack_100;
  lVar5 = local_108;
  if ((*(char *)(param_1 + 0x560) != '\x03') ||
     (*(undefined1 *)(param_1 + 0x560) = 4, *(longlong *)(param_1 + 0x520) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_148);
  }
  plVar13 = (longlong *)(param_1 + 0x520);
  pcVar1 = (code *)*plVar13;
  uVar2 = *(undefined8 *)(param_1 + 0x528);
  plVar3 = *(longlong **)(param_1 + 0x530);
  uVar4 = *(undefined8 *)(param_1 + 0x538);
  local_f8 = *(undefined8 *)(param_1 + 0x550);
  uStack_f0 = *(undefined8 *)(param_1 + 0x558);
  local_108 = *(longlong *)(param_1 + 0x540);
  uStack_100 = *(undefined8 *)(param_1 + 0x548);
  *(undefined8 *)(param_1 + 0x550) = uVar6;
  *(undefined8 *)(param_1 + 0x558) = uVar7;
  *(longlong *)(param_1 + 0x540) = lVar5;
  *(undefined8 *)(param_1 + 0x548) = uVar12;
  *(longlong **)(param_1 + 0x530) = local_118;
  *(undefined8 *)(param_1 + 0x538) = uStack_110;
  *plVar13 = (longlong)local_128;
  *(undefined8 *)(param_1 + 0x528) = uStack_120;
  local_a8 = *plVar13;
  uStack_a0 = *(undefined8 *)(param_1 + 0x528);
  local_98 = *(longlong **)(param_1 + 0x530);
  uStack_90 = *(undefined8 *)(param_1 + 0x538);
  local_88 = *(undefined8 *)(param_1 + 0x540);
  uStack_80 = *(undefined8 *)(param_1 + 0x548);
  local_78 = *(undefined8 *)(param_1 + 0x550);
  uStack_70 = *(undefined8 *)(param_1 + 0x558);
  uVar9 = local_78;
  uVar10 = uStack_70;
  uVar7 = local_88;
  uVar8 = uStack_80;
  uVar6 = uStack_90;
  uVar12 = uStack_a0;
  *(ulonglong *)(param_1 + 0x550) = CONCAT44(uStack_b4,local_b8);
  *(ulonglong *)(param_1 + 0x558) = CONCAT44(uStack_ac,uStack_b0);
  *(ulonglong *)(param_1 + 0x540) = CONCAT44(uStack_c4,local_c8);
  *(ulonglong *)(param_1 + 0x548) = CONCAT44(uStack_bc,uStack_c0);
  *(undefined8 *)(param_1 + 0x530) = 0;
  *(ulonglong *)(param_1 + 0x538) = CONCAT44(uStack_cc,uStack_d0);
  *plVar13 = 0;
  *(ulonglong *)(param_1 + 0x528) = CONCAT44(uStack_dc,uStack_e0);
  uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_b8 = (undefined4)local_78;
  uStack_b4 = local_78._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  local_c8 = (undefined4)local_88;
  uStack_c4 = local_88._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  local_d8 = local_98;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  local_e8 = local_a8;
  uStack_e0 = (undefined4)uStack_a0;
  uStack_dc = uStack_a0._4_4_;
  local_128 = pcVar1;
  uStack_120 = uVar2;
  local_118 = plVar3;
  uStack_110 = uVar4;
  uStack_a0 = uVar12;
  uStack_90 = uVar6;
  local_88 = uVar7;
  uStack_80 = uVar8;
  local_78 = uVar9;
  uStack_70 = uVar10;
  if (local_a8 != 0) {
    plVar13 = local_d8;
    if (local_98 == (longlong *)0x0) {
      plVar13 = (longlong *)&local_c8;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  pcVar1 = local_128;
  *(undefined1 *)(param_1 + 0x560) = 5;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (pcVar1 != (code *)0x0) {
    local_a8 = CONCAT71(local_a8._1_7_,uVar11);
    plVar13 = local_118;
    if (local_118 == (longlong *)0x0) {
      plVar13 = &local_108;
    }
    uVar12 = (**(code **)(*plVar13 + 8))();
    (*pcVar1)(uVar12,&local_a8,param_1 + 0x48);
    FUN_146294f1e(param_1);
    if (local_128 != (code *)0x0) {
      plVar13 = &local_108;
      if (local_118 != (longlong *)0x0) {
        plVar13 = local_118;
      }
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461cffa4 FUN_1461cffa4 body=568 status=ok
// SIG undefined FUN_1461cffa4(void)

undefined8 * FUN_1461cffa4(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446ddc76(&local_38,"StaticMeshComponent0",1);
  uVar2 = FUN_145a64e38();
  FUN_140486538(param_2,local_38);
  FUN_14048646a(param_2 + 0x20,local_38,uVar2,0);
  FUN_140311f98(param_1,param_2);
  *param_1 = &PTR_FUN_14a3a3d30;
  param_1[0x74] = 0;
  plVar1 = (longlong *)param_1[0x72];
  (**(code **)(*plVar1 + 0x728))(plVar1,DAT_14cad0f30,1);
  *(undefined1 *)((longlong)plVar1 + 0x1fb) = 0;
  FUN_1446f470e(&local_40,L"CollisionCylinder",1);
  uVar2 = FUN_1400b5618();
  local_50 = 0;
  local_58 = 1;
  lVar3 = FUN_14048696c(param_1,local_40,uVar2,uVar2);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  param_1[0x74] = lVar3;
  *(undefined8 *)(lVar3 + 0x640) = 0x4270000043480000;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa1598) {
    FUN_144b3d300(&DAT_14caa1598);
    if (DAT_14caa1598 == -1) {
      FUN_1446f470e(&DAT_14caa1590,L"OverlapAllDynamic",1);
      _Init_thread_footer(&DAT_14caa1598);
    }
  }
  (**(code **)(*(longlong *)param_1[0x74] + 0x728))((longlong *)param_1[0x74],DAT_14caa1590,1);
  *(undefined1 *)(param_1[0x74] + 0x1fb) = 0;
  lVar3 = param_1[0x74];
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = param_1[0x74];
    }
  }
  param_1[0x39] = lVar3;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 2;
  FUN_1403121a6(param_1,1);
  *(byte *)((longlong)param_1 + 0x62) = *(byte *)((longlong)param_1 + 0x62) | 0x10;
  *(undefined1 *)((longlong)param_1 + 0x17a) = 3;
  param_1[0x81] = 0x4120000041a00000;
  param_1[0x82] = 0x3e99999a41200000;
  *(undefined4 *)(param_1 + 0x83) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x41c) = 0x47c35000;
  *(undefined4 *)(param_1 + 0x84) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0x47c35000;
  *(undefined4 *)(param_1 + 0x85) = 0x3f800000;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d01de FUN_1461d01de body=216 status=ok
// SIG undefined FUN_1461d01de(void)

undefined8 FUN_1461d01de(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 == (longlong *)0x0) {
    FUN_140056680(&local_40,&DAT_149e01fe8);
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_40);
  }
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  FUN_1461d0350(param_1,&local_50);
  puVar3 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar3 = local_50;
  }
  FUN_140002266(param_2,L"[%s].%s",puVar3,puVar2);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d02b8 FUN_1461d02b8 body=150 status=ok
// SIG undefined FUN_1461d02b8(void)

undefined8 FUN_1461d02b8(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pwVar1 = L"activated";
  if (*(char *)(param_1 + 0x10) != '\0') {
    pwVar1 = L"deactivated";
  }
  FUN_1400021e4(param_1 + 8,&local_30);
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Node.%s is %s",puVar2,pwVar1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1461d0350 FUN_1461d0350 body=212 status=ok
// SIG undefined FUN_1461d0350(void)

undefined8 * FUN_1461d0350(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar4 = FUN_140e2014e();
    lVar3 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x10) = lVar3;
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (lVar5 == 0) {
    if ((lVar3 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      plVar1 = *(longlong **)(lVar3 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar5 = FUN_144aff482(uVar4,(longlong *)(param_1 + 8));
        *(longlong *)(param_1 + 0x18) = lVar5;
        if (lVar5 != 0) goto LAB_1461d0371;
      }
    }
    FUN_140056680(param_2,&DAT_149e01fe8);
    return param_2;
  }
LAB_1461d0371:
  puVar6 = &DAT_14c9485f0;
  if (*(undefined4 **)(lVar5 + 8) != (undefined4 *)0x0) {
    puVar6 = *(undefined4 **)(lVar5 + 8);
  }
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1400b2348(puVar6,param_2,1);
  return param_2;
}



// FUNCTION 1461d0424 FUN_1461d0424 body=40 status=ok
// SIG undefined FUN_1461d0424(void)

undefined8 FUN_1461d0424(undefined8 param_1,int param_2)

{
  FUN_1461d044c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461d044c FUN_1461d044c body=540 status=ok
// SIG undefined FUN_1461d044c(void)

void FUN_1461d044c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14babf3c0;
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14111bf7d(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14111bf7d(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1461d0668 FUN_1461d0668 body=418 status=ok
// SIG undefined FUN_1461d0668(void)

undefined8 * FUN_1461d0668(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x2d0);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a5a9ec0;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x2c0);
  FUN_140a55e66(plVar4);
  plVar3[2] = (longlong)&PTR_FUN_14a5a9ee0;
  plVar3[0x56] = 0;
  *(undefined4 *)(plVar3 + 0x57) = 0;
  plVar3[0x58] = 0;
  *(undefined4 *)(plVar3 + 0x59) = 0;
  local_38 = plVar4;
  local_30 = plVar3;
  FUN_1461d080c(&local_38,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_1461d0733;
    param_1[1] = 0;
LAB_1461d07a4:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1461d0733;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_1461d0733;
      goto LAB_1461d07a4;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1461d0733;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_1461d0733:
  plVar4 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_48 = 0x2c0;
  FUN_140a52e78(*param_1,"SDefaultMovieBorder",
                ".\\Runtime/MoviePlayer/Private/DefaultGameMoviePlayer.cpp",0x10b);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d080c FUN_1461d080c body=162 status=ok
// SIG undefined FUN_1461d080c(void)

void FUN_1461d080c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1461d084b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1461d084b;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1461d084b:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001461d08aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1461d08ae FUN_1461d08ae body=420 status=ok
// SIG undefined FUN_1461d08ae(void)

undefined8 * FUN_1461d08ae(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x238);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4788c0;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x228);
  FUN_140a539ac(plVar4);
  plVar3[2] = (longlong)&PTR_FUN_14b4788e0;
  *(undefined2 *)(plVar3 + 0x43) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x21c) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x224) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x22c) = 0;
  local_40 = plVar4;
  local_38 = plVar3;
  FUN_1461d0a54(&local_40,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_1461d0978;
    param_1[1] = 0;
LAB_1461d09ec:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1461d0978;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_1461d0978;
      goto LAB_1461d09ec;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1461d0978;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_1461d0978:
  plVar4 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_48 = 0x228;
  FUN_140a52e78(*param_1,"SGbxUIWidgetContainer",
                ".\\../Plugins/Gearbox/GbxUICoherent/Source/GbxUICoherent/Private/GbxUIViewManager.cpp"
                ,0x3e);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d0a54 FUN_1461d0a54 body=162 status=ok
// SIG undefined FUN_1461d0a54(void)

void FUN_1461d0a54(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1461d0a93;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1461d0a93;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1461d0a93:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001461d0af2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1461d0af6 FUN_1461d0af6 body=595 status=ok
// SIG undefined FUN_1461d0af6(void)

void FUN_1461d0af6(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  int iVar16;
  double dVar17;
  double *pdVar18;
  undefined4 uVar19;
  uint uVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar13 = param_1[0x4d4];
  if ((longlong)(int)lVar13 != 0) {
    local_c0 = param_1[0x4d3];
    lVar23 = 0;
    do {
      uVar19 = SUB84(param_1,0);
      plVar21 = *(longlong **)(local_c0 + lVar23);
      if (plVar21 != (longlong *)0x0) {
        iVar16 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar16 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar16 + 1U) {
          plVar22 = param_2;
          FUN_1461d0d4a(param_2,iVar16);
          uVar19 = SUB84(plVar22,0);
        }
        lVar24 = *param_2;
        lVar25 = (longlong)iVar16 * 0x40;
        puVar2 = (undefined8 *)(lVar24 + 0x30 + lVar25);
        *puVar2 = 0;
        puVar2[1] = 0;
        uVar15 = DAT_14c8464e8;
        *(undefined8 *)(lVar24 + lVar25) = DAT_14c8464e0;
        ((undefined8 *)(lVar24 + lVar25))[1] = uVar15;
        *(undefined8 *)(lVar24 + 0x10 + lVar25) = DAT_14c8464f0;
        dVar8 = DAT_14c846500;
        pdVar18 = (double *)(lVar24 + 0x18 + lVar25);
        *pdVar18 = DAT_14c8464f8;
        pdVar18[1] = dVar8;
        dVar17 = DAT_14c846508;
        *(double *)(lVar24 + 0x28 + lVar25) = DAT_14c846508;
        *(undefined4 *)(lVar24 + 0x30 + lVar25) = 0;
        uVar6 = *(undefined4 *)((longlong)plVar21 + 0x264);
        lVar14 = plVar21[0x4d];
        uVar7 = *(undefined4 *)((longlong)plVar21 + 0x26c);
        lVar3 = plVar21[0x4e];
        puVar1 = (undefined4 *)(lVar24 + lVar25);
        *puVar1 = (int)plVar21[0x4c];
        puVar1[1] = uVar6;
        puVar1[2] = (int)lVar14;
        puVar1[3] = uVar7;
        *(longlong *)(lVar24 + 0x10 + lVar25) = lVar3;
        dVar8 = (double)plVar21[0x48];
        dVar9 = (double)plVar21[0x49];
        dVar10 = (double)plVar21[0x4a];
        dVar11 = (double)plVar21[0x4b];
        pdVar18 = (double *)plVar21[0x45];
        local_b8 = dVar8;
        uStack_b0 = dVar9;
        local_a8 = dVar10;
        uStack_a0 = dVar11;
        if (pdVar18 == (double *)0x0) {
          uVar19 = 0x40;
          pdVar18 = (double *)FUN_14001cc68(0x40,0x10);
          dVar17 = DAT_14c8463d8;
          *pdVar18 = DAT_14c8463d0;
          pdVar18[1] = dVar17;
          dVar17 = DAT_14c8463e8;
          pdVar18[2] = DAT_14c8463e0;
          pdVar18[3] = dVar17;
          dVar17 = DAT_14c846500;
          pdVar18[4] = DAT_14c8464f8;
          pdVar18[5] = dVar17;
          dVar17 = DAT_14c846508;
          pdVar18[6] = DAT_14c846508;
          plVar21[0x45] = (longlong)pdVar18;
        }
        auVar4._8_4_ = (int)-(ulonglong)(dVar9 != pdVar18[1]);
        auVar4._0_8_ = -(ulonglong)(dVar8 != *pdVar18);
        auVar4._12_4_ = (int)(-(ulonglong)(dVar9 != pdVar18[1]) >> 0x20);
        iVar16 = movmskpd(SUB84(dVar17,0),auVar4);
        auVar5._8_4_ = (int)-(ulonglong)(dVar11 != pdVar18[3]);
        auVar5._0_8_ = -(ulonglong)(dVar10 != pdVar18[2]);
        auVar5._12_4_ = (int)(-(ulonglong)(dVar11 != pdVar18[3]) >> 0x20);
        uVar20 = movmskpd(uVar19,auVar5);
        if ((uVar20 & 0x3fffffff) != 0 || iVar16 != 0) {
          *(undefined4 *)(pdVar18 + 2) = (undefined4)local_a8;
          *(undefined4 *)((longlong)pdVar18 + 0x14) = local_a8._4_4_;
          *(undefined4 *)(pdVar18 + 3) = (undefined4)uStack_a0;
          *(undefined4 *)((longlong)pdVar18 + 0x1c) = uStack_a0._4_4_;
          *(undefined4 *)pdVar18 = (undefined4)local_b8;
          *(undefined4 *)((longlong)pdVar18 + 4) = local_b8._4_4_;
          *(undefined4 *)(pdVar18 + 1) = (undefined4)uStack_b0;
          *(undefined4 *)((longlong)pdVar18 + 0xc) = uStack_b0._4_4_;
          FUN_1448052ee(&local_b8,&local_98);
          pdVar18[6] = local_88;
          pdVar18[4] = local_98;
          pdVar18[5] = dStack_90;
        }
        lVar24 = lVar24 + lVar25;
        uVar19 = *(undefined4 *)(pdVar18 + 4);
        uVar6 = *(undefined4 *)((longlong)pdVar18 + 0x24);
        uVar7 = *(undefined4 *)(pdVar18 + 5);
        uVar12 = *(undefined4 *)((longlong)pdVar18 + 0x2c);
        *(double *)(lVar24 + 0x28) = pdVar18[6];
        *(undefined4 *)(lVar24 + 0x18) = uVar19;
        *(undefined4 *)(lVar24 + 0x1c) = uVar6;
        *(undefined4 *)(lVar24 + 0x20) = uVar7;
        *(undefined4 *)(lVar24 + 0x24) = uVar12;
        (**(code **)(*plVar21 + 0x820))(plVar21,&local_b8,0);
        *(undefined4 *)(lVar24 + 0x30) = (undefined4)local_b8;
        *(undefined4 *)(lVar24 + 0x34) = local_b8._4_4_;
        *(undefined4 *)(lVar24 + 0x38) = (undefined4)uStack_b0;
        *(undefined4 *)(lVar24 + 0x3c) = uStack_b0._4_4_;
        param_1 = plVar21;
      }
      lVar23 = lVar23 + 8;
    } while ((longlong)(int)lVar13 * 8 != lVar23);
  }
  if ((local_80 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461d0d4a FUN_1461d0d4a body=132 status=ok
// SIG undefined FUN_1461d0d4a(void)

void FUN_1461d0d4a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1461d0dd0 FUN_1461d0dd0 body=634 status=ok
// SIG undefined FUN_1461d0dd0(void)

void FUN_1461d0dd0(longlong param_1)

{
  int iVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c12dec(param_1 + 8,&DAT_149e02088);
  FUN_140c12dec(param_1 + 0x20,&DAT_149e02088);
  FUN_140c12dec(param_1 + 0x38,&DAT_149e02088);
  FUN_140c12dec(param_1 + 0x50,&DAT_149e02088);
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  FUN_1400b22c2(&local_30,"noelement");
  if (&local_30 == (longlong *)(param_1 + 0x68)) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x68) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x68) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_1 + 0x70) = local_28;
    *(undefined4 *)(param_1 + 0x74) = local_24;
  }
  *(undefined1 *)(param_1 + 0x78) = 1;
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
  FUN_1400b22c2(&local_30,"noelement");
  if (&local_30 == (longlong *)(param_1 + 0x88)) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x88) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x88) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_1 + 0x90) = local_28;
    *(undefined4 *)(param_1 + 0x94) = local_24;
  }
  *(undefined1 *)(param_1 + 0x98) = 1;
  FUN_140c12dec(param_1 + 0xa8,&DAT_149e02088);
  if (*(char *)(param_1 + 0xc0) == '\0') {
    iVar1 = 1;
    if (*(int *)(param_1 + 0xc4) == 0) goto LAB_1461d0f0e;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc4) + 1;
LAB_1461d0f0e:
    *(undefined1 *)(param_1 + 0xc0) = 0;
    *(int *)(param_1 + 0xc4) = iVar1;
  }
  if (*(char *)(param_1 + 200) == '\0') {
    iVar1 = 1;
    if (*(int *)(param_1 + 0xcc) == 0) goto LAB_1461d0f32;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xcc) + 1;
LAB_1461d0f32:
    *(undefined1 *)(param_1 + 200) = 0;
    *(int *)(param_1 + 0xcc) = iVar1;
  }
  if (*(int *)(param_1 + 0xd0) == 0) {
    iVar1 = 1;
    if (*(int *)(param_1 + 0xd4) == 0) goto LAB_1461d0f56;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xd4) + 1;
LAB_1461d0f56:
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(int *)(param_1 + 0xd4) = iVar1;
  }
  if (*(int *)(param_1 + 0xd8) == 0) {
    iVar1 = 1;
    if (*(int *)(param_1 + 0xdc) != 0) goto LAB_1461d0f8d;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xdc) + 1;
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(int *)(param_1 + 0xdc) = iVar1;
LAB_1461d0f8d:
  FUN_1461d104c(param_1 + 0xf8,"common");
  *(undefined1 *)(param_1 + 0x110) = 0;
  FUN_140c12dec(param_1 + 0xe0,&DAT_149e02088);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461d104c FUN_1461d104c body=93 status=ok
// SIG undefined FUN_1461d104c(void)

undefined8 FUN_1461d104c(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(local_28);
  FUN_140775538(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d10aa FUN_1461d10aa body=349 status=ok
// SIG undefined FUN_1461d10aa(void)

undefined8 * FUN_1461d10aa(undefined8 *param_1,undefined8 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  *param_1 = &PTR_LAB_149faf1c0;
  param_1[1] = *param_2;
  param_1[2] = param_2[1];
  param_1[3] = param_2[2];
  param_1[4] = param_2[3];
  uVar3 = *(undefined4 *)(param_2 + 5);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar5 = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 6) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar5;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)((longlong)param_1 + 0x44) = 2;
  *(byte *)((longlong)param_1 + 0x45) = *(byte *)((longlong)param_1 + 0x45) & 0xf0;
  FUN_1461d1208();
  *param_1 = &PTR_FUN_149faf8e0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0xffffffff;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  plVar6 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149e05c70;
  lpCriticalSection = (LPCRITICAL_SECTION)(plVar6 + 2);
  InitializeCriticalSection(lpCriticalSection);
  SetCriticalSectionSpinCount(lpCriticalSection,4000);
  if (plVar6 == (longlong *)0x0) {
    param_1[0xd] = 0x10;
    plVar7 = (longlong *)param_1[0xe];
    if (plVar7 == (longlong *)0x0) {
      return param_1;
    }
    param_1[0xe] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    param_1[0xd] = lpCriticalSection;
    plVar7 = (longlong *)param_1[0xe];
    if (plVar6 == plVar7) {
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      goto LAB_1461d1182;
    }
    param_1[0xe] = plVar6;
    if (plVar7 == (longlong *)0x0) goto LAB_1461d1182;
  }
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
  if (plVar6 == (longlong *)0x0) {
    return param_1;
  }
LAB_1461d1182:
  LOCK();
  plVar7 = plVar6 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  return param_1;
}



// FUNCTION 1461d1208 FUN_1461d1208 body=235 status=ok
// SIG undefined FUN_1461d1208(void)

void FUN_1461d1208(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xfc | 2;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8);
    lVar2 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar2 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar2) break;
        } while (lVar4 != 0);
      }
      if (!bVar5) {
        return;
      }
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) {
      return;
    }
    lVar4 = *(longlong *)(param_1 + 0x20);
    if (lVar4 != 0) {
      lVar2 = *(longlong *)(lVar4 + 8);
      lVar3 = FUN_1446dcc8c();
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar5 = lVar2 != 0;
        if (lVar2 != lVar3 && bVar5) {
          do {
            lVar2 = *(longlong *)(lVar2 + 0x30);
            bVar5 = lVar2 != 0;
            if (lVar2 == lVar3) break;
          } while (lVar2 != 0);
        }
        if (!bVar5) {
          return;
        }
      }
      else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) {
        return;
      }
      cVar1 = FUN_146fb3280(*(undefined8 *)(lVar4 + 0x70));
      if (cVar1 != '\0') {
        *(undefined8 *)(param_1 + 8) = DAT_14c99cdc8;
        *(byte *)(param_1 + 0x45) = (*(byte *)(param_1 + 0x45) & 0xfc) + 1;
      }
    }
  }
  return;
}



// FUNCTION 1461d12fe FUN_1461d12fe body=137 status=ok
// SIG undefined FUN_1461d12fe(void)

void FUN_1461d12fe(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b631f60;
  plVar3 = (longlong *)param_1[0x34];
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
  plVar3 = (longlong *)param_1[0x32];
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
  if (*(char *)((longlong)param_1 + 0x17c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x17c) = 0;
  }
  FUN_145a38fa8(param_1);
  return;
}



// FUNCTION 1461d1390 FUN_1461d1390 body=577 status=ok
// SIG undefined FUN_1461d1390(void)

undefined8 * FUN_1461d1390(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14ba58070;
  param_1[5] = &PTR_FUN_14ba583d0;
  lVar1 = FUN_14120add8();
  param_1[6] = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  lVar1 = FUN_1458bd694();
  param_1[7] = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  FUN_140056680(param_1 + 8,L"default");
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x62) = 1;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 2;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x40) = 2;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x43) = 2;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x46) = 2;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x49) = 2;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 2;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0x4f) = 2;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x52) = 2;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined4 *)(param_1 + 0x55) = 2;
  *(undefined4 *)((longlong)param_1 + 700) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0;
  param_1[0x58] = 2;
  return param_1;
}



// FUNCTION 1461d15d2 FUN_1461d15d2 body=431 status=ok
// SIG undefined FUN_1461d15d2(void)

void FUN_1461d15d2(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_108 [40];
  undefined8 *local_e0;
  longlong local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b0 [32];
  undefined8 local_90;
  undefined8 local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar5 = FUN_14009d2a0();
  local_90 = 0x10000000000;
  local_68 = 0x10000000000;
  local_60 = 0;
  uStack_58 = 0;
  local_d8 = (longlong)&local_c8 + 4;
  local_c8._0_4_ = CONCAT22(*(undefined2 *)(lVar5 + 0x11a),*(undefined2 *)(lVar5 + 0x126));
  local_e0 = &local_c8;
  FUN_1447c44f6(local_b0);
  local_c8 = 0;
  uStack_c0 = 0;
  lVar5 = *(longlong *)(param_1 + 0x28);
  FUN_14150e78a(&local_e0,lVar5 + 0x28,local_b0);
  iVar1 = *(int *)(lVar5 + 0x38);
  if (local_d0 != iVar1) {
    do {
      uVar3 = uStack_c0;
      uVar2 = *(undefined8 *)(*(longlong *)(local_d8 + 0x60) + (longlong)local_d0 * 8);
      lVar5 = (longlong)(int)uStack_c0;
      uVar4 = (int)uStack_c0 + 1;
      uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar4);
      if (uStack_c0._4_4_ < uVar4) {
        FUN_1461d1782(&local_c8,uVar3 & 0xffffffff);
      }
      *(undefined8 *)(local_c8 + lVar5 * 8) = uVar2;
      local_d0 = FUN_1403b8464(&local_e0,local_d0 + 1);
    } while (local_d0 != iVar1);
  }
  lVar5 = local_c8;
  if (local_e0 != (undefined8 *)0x0) {
    if (*(char *)(local_d8 + 0x270) == '\0') {
      *(int *)(local_d8 + 0x264) = *(int *)(local_d8 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_d8 + 0x264) = *(int *)(local_d8 + 0x264) + -1;
      UNLOCK();
    }
  }
  lVar6 = (longlong)(int)uStack_c0;
  if (lVar6 != 0) {
    lVar7 = 0;
    do {
      FUN_1461d1806(param_1,*(undefined8 *)(lVar5 + lVar7));
      lVar7 = lVar7 + 8;
    } while (lVar6 * 8 != lVar7);
  }
  if (local_c8 != 0) {
    FUN_1400020a8(local_c8);
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461d1782 FUN_1461d1782 body=132 status=ok
// SIG undefined FUN_1461d1782(void)

void FUN_1461d1782(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1461d1806 FUN_1461d1806 body=1110 status=ok
// SIG undefined FUN_1461d1806(void)

void FUN_1461d1806(longlong param_1,longlong param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_198 [32];
  longlong *local_178;
  longlong *local_170;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  int local_130;
  longlong local_128;
  int local_120;
  int local_11c;
  longlong local_118;
  int local_110;
  int local_104;
  undefined8 local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined1 local_e0 [32];
  undefined8 local_c0;
  uint local_b8 [8];
  undefined8 local_98;
  undefined1 local_90 [16];
  longlong local_80;
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  int iVar11;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_140 = FUN_14009d2a0();
  local_50 = 0;
  FUN_1400abb7c(local_70,*(longlong *)(*(longlong *)(param_1 + 0x28) + 600) + 0x1b0);
  local_80 = 0;
  local_78 = 0x200000000;
  local_98 = 0x10000000000;
  local_c0 = 0x10000000000;
  uVar1 = *(ushort *)(param_2 + 0xc);
  if (uVar1 != 0) {
    lVar7 = *(longlong *)(param_2 + 0x28);
    lVar14 = 0;
    do {
      FUN_140dba9e6(local_e0,*(undefined2 *)(lVar7 + 0x1e + lVar14));
      lVar14 = lVar14 + 0x20;
    } while ((ulonglong)uVar1 * 0x20 != lVar14);
  }
  FUN_1405e188a(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 600),local_e0,local_b8);
  FUN_140dbb7cc(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 600),3,local_b8,local_90);
  if (0x1f < (int)local_98 + 0x1fU) {
    iVar13 = 0;
    uVar12 = 0;
    do {
      uVar8 = local_b8[uVar12];
      if (uVar8 != 0) {
        iVar10 = 0;
        if (uVar8 != 0) {
          for (; (uVar8 >> iVar10 & 1) == 0; iVar10 = iVar10 + 1) {
          }
        }
        if ((iVar10 - iVar13 < (int)local_98) && (iVar10 + 1 != iVar13)) {
          uVar1 = *(ushort *)(param_2 + 0xe);
          local_f8 = 0;
          uStack_f0 = 0;
          if (uVar1 != 0) {
            uVar8 = (uint)uVar1;
            FUN_14481578e(&local_f8,uVar1);
            uVar9 = 0;
            do {
              uVar12 = uStack_f0;
              lVar7 = (longlong)(int)uStack_f0;
              uVar4 = (int)uStack_f0 + 1;
              uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar4);
              if (uStack_f0._4_4_ < uVar4) {
                FUN_1446f48e2(&local_f8,uVar12 & 0xffffffff);
              }
              *(uint *)(local_f8 + lVar7 * 4) = uVar9;
              uVar9 = uVar9 + 1;
            } while (uVar8 != uVar9);
            local_160 = *(longlong *)(param_2 + 0x18);
            local_100 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x270);
            iVar13 = 0;
            local_158 = param_2;
            do {
              lVar7 = local_158;
              local_104 = uVar8 - iVar13;
              FUN_1405e0eee(*(longlong *)(param_1 + 0x28) + 0x28,&local_118,local_b8,&local_104);
              local_128 = local_118;
              local_120 = local_110;
              local_11c = local_104;
              FUN_14163869e(local_90,&local_128,&local_100);
              local_138 = (longlong)iVar13 * 4 + local_f8;
              local_130 = local_104;
              local_178 = &local_138;
              local_170 = &local_128;
              FUN_1405e1186(*(longlong *)(param_1 + 0x28) + 0x28,local_e0,local_b8,lVar7);
              if (0 < (longlong)local_11c) {
                local_148 = *(longlong *)(local_118 + 0x18);
                local_150 = local_160 + (longlong)iVar13 * 2;
                lVar7 = (longlong)local_11c;
                do {
                  uVar1 = *(ushort *)(local_150 + -2 + lVar7 * 2);
                  uVar2 = *(undefined2 *)(local_148 + lVar7 * 2 + -2 + (longlong)local_120 * 2);
                  lVar14 = *(longlong *)(param_1 + 0x28);
                  if (*(int *)(lVar14 + 0x140) != 0) {
                    lVar5 = lVar14 + 0x130;
                    if (*(longlong *)(lVar14 + 0x138) != 0) {
                      lVar5 = *(longlong *)(lVar14 + 0x138);
                    }
                    iVar10 = *(int *)(lVar5 + (ulonglong)
                                              (*(int *)(lVar14 + 0x140) - 1U & (uint)uVar1) * 4);
                    while (iVar11 = iVar10, iVar11 != -1) {
                      lVar5 = *(longlong *)(lVar14 + 0xf8);
                      iVar10 = *(int *)(lVar5 + 4 + (longlong)iVar11 * 0xc);
                      lVar6 = lVar14;
                      if (*(ushort *)(lVar5 + (longlong)iVar11 * 0xc) == uVar1) {
                        do {
                          FUN_1411019a6(lVar6 + 0x28,uVar2,
                                        *(undefined2 *)(lVar5 + 2 + (longlong)iVar11 * 0xc),local_70
                                       );
                          do {
                            iVar11 = iVar10;
                            if (iVar11 == -1) {
                              lVar14 = *(longlong *)(param_1 + 0x28);
                              goto LAB_1461d1b2e;
                            }
                            lVar5 = *(longlong *)(lVar14 + 0xf8);
                            iVar10 = *(int *)(lVar5 + 4 + (longlong)iVar11 * 0xc);
                          } while (*(ushort *)(lVar5 + (longlong)iVar11 * 0xc) != uVar1);
                          lVar6 = *(longlong *)(param_1 + 0x28);
                        } while( true );
                      }
                    }
                  }
LAB_1461d1b2e:
                  FUN_1405e0992(lVar14 + 0x28,uVar1,*(undefined2 *)(local_140 + 0x11c),2);
                  FUN_140cd80c4(*(longlong *)(param_1 + 0x28) + 0x28,uVar1,uVar2);
                  bVar3 = 1 < lVar7;
                  lVar7 = lVar7 + -1;
                } while (bVar3);
              }
              iVar13 = iVar13 + local_104;
            } while (iVar13 < (int)uVar8);
            if (local_f8 != 0) {
              FUN_1400020a8();
            }
          }
        }
        break;
      }
      uVar12 = uVar12 + 1;
      iVar13 = iVar13 + -0x20;
    } while ((int)local_98 + 0x1fU >> 5 != uVar12);
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461d1c5e FUN_1461d1c5e body=608 status=ok
// SIG undefined FUN_1461d1c5e(void)

void FUN_1461d1c5e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  longlong lVar9;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  undefined8 local_150;
  longlong local_148;
  int local_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  undefined **local_130;
  undefined2 local_128;
  undefined8 local_124;
  undefined1 local_11c;
  undefined2 local_118;
  longlong local_110;
  undefined1 local_108;
  undefined2 local_100;
  code *local_f8;
  undefined1 local_f0;
  uint local_e8;
  int local_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  undefined1 local_d4;
  undefined1 local_d0;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar5 = FUN_14009d2a0();
  FUN_145d19f6e();
  lVar6 = FUN_14038fb82();
  FUN_1414f4f68(param_3,&local_140);
  if (((iStack_13c != 0 || local_140 != 0) || iStack_138 != 0) || iStack_134 != 0) {
    lVar9 = param_1 + -0xf8;
    if (lVar9 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar9);
    }
    uVar8 = DAT_14cb8a3c0;
    uVar4 = *(undefined8 *)(param_1 + 0x280);
    uVar1 = *(undefined2 *)(lVar6 + 0xe4);
    if ((~DAT_14c950c29 & 1) == 0 && lVar9 != 0) {
      FUN_1456cec3c(lVar9);
    }
    if ((~DAT_14c950c29 & 1) == 0 && lVar9 != 0) {
      FUN_1456cec3c(lVar9);
    }
    uVar2 = *(undefined2 *)(lVar5 + 0x66);
    local_150 = param_4;
    if ((lVar9 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(lVar9);
    }
    uVar3 = *(undefined2 *)(lVar5 + 100);
    local_c8 = local_140;
    iStack_c4 = iStack_13c;
    iStack_c0 = iStack_138;
    iStack_bc = iStack_134;
    local_128 = uVar8;
    uVar7 = 1;
    local_11c = 1;
    local_108 = 1;
    local_124 = uVar4;
    local_118 = uVar1;
    local_110 = lVar9;
    if ((lVar9 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(lVar9);
    }
    local_f0 = 1;
    local_f8 = FUN_14655c444;
    local_d4 = 1;
    local_e4 = local_c8;
    iStack_e0 = iStack_c4;
    iStack_dc = iStack_c0;
    iStack_d8 = iStack_bc;
    local_d0 = 0;
    local_130 = &PTR_FUN_14b422c10;
    local_148 = param_1 + 0x40;
    if (*(int *)(param_1 + 0xa0) == 0) {
      uVar7 = *(undefined1 *)(param_1 + 0xbc);
    }
    local_158 = uVar7;
    local_100 = uVar2;
    local_e8 = (uint)CONCAT12(((iStack_13c != 0 || local_140 != 0) || iStack_138 != 0) ||
                              iStack_134 != 0,uVar3);
    FUN_1461d1ec0(&local_130,&local_c8,*(undefined2 *)(lVar5 + 0xb6));
    FUN_1461d2000(local_150,&local_c8);
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d1ec0 FUN_1461d1ec0 body=139 status=ok
// SIG undefined FUN_1461d1ec0(void)

undefined8 *
FUN_1461d1ec0(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 *local_40;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &local_30;
  local_2e = param_5;
  local_28 = *param_4;
  local_20 = 1;
  local_48 = param_1 + 0x48;
  uVar1 = *(undefined1 *)(param_1 + 0x60);
  local_30 = param_3;
  FUN_1461d1f4c(param_2 + 1,param_1 + 8,param_1 + 0x18,param_1 + 0x30);
  *(undefined1 *)(param_2 + 0xf) = uVar1;
  *param_2 = &PTR_FUN_14b422c30;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d1f4c FUN_1461d1f4c body=179 status=ok
// SIG undefined FUN_1461d1f4c(void)

undefined2 *
FUN_1461d1f4c(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
             undefined4 *param_5,undefined4 *param_6)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 6);
  *(char *)(param_1 + 6) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  }
  param_1[8] = *param_3;
  cVar1 = *(char *)(param_3 + 8);
  *(char *)(param_1 + 0x10) = cVar1;
  if (cVar1 == '\x01') {
    lVar2 = *(longlong *)(param_3 + 4);
    *(longlong *)(param_1 + 0xc) = lVar2;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
  }
  param_1[0x14] = *param_4;
  cVar1 = *(char *)(param_4 + 8);
  *(char *)(param_1 + 0x1c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_4 + 4);
  }
  *(undefined4 *)(param_1 + 0x20) = *param_5;
  cVar1 = *(char *)(param_5 + 5);
  *(char *)(param_1 + 0x2a) = cVar1;
  if (cVar1 == '\x01') {
    uVar3 = *(undefined8 *)(param_5 + 3);
    *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_5 + 1);
    *(undefined8 *)(param_1 + 0x26) = uVar3;
  }
  *(undefined4 *)(param_1 + 0x2c) = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x34) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_6 + 2);
  }
  return param_1;
}



// FUNCTION 1461d2000 FUN_1461d2000 body=268 status=ok
// SIG undefined FUN_1461d2000(void)

void FUN_1461d2000(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_1461d210e(puVar4);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) | 1;
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfd | local_28 & 2;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    local_28 = local_28 & 0xfe;
  }
  if ((local_28 & 1) != 0) {
    if ((local_28 & 2) == 0) {
      puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = local_28 & 0xfe;
    (**(code **)*puVar4)(puVar4,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d210e FUN_1461d210e body=98 status=ok
// SIG undefined FUN_1461d210e(void)

void FUN_1461d210e(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x80,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14b4224b0;
  FUN_1461d2170(param_1 + 1,param_2 + 8);
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0x78);
  *param_1 = &PTR_FUN_14b422c30;
  return;
}



// FUNCTION 1461d2170 FUN_1461d2170 body=169 status=ok
// SIG undefined FUN_1461d2170(void)

undefined2 * FUN_1461d2170(undefined2 *param_1,undefined2 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 6);
  *(char *)(param_1 + 6) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  }
  param_1[8] = param_2[8];
  cVar1 = *(char *)(param_2 + 0x10);
  *(char *)(param_1 + 0x10) = cVar1;
  if (cVar1 == '\x01') {
    lVar2 = *(longlong *)(param_2 + 0xc);
    *(longlong *)(param_1 + 0xc) = lVar2;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
  }
  param_1[0x14] = param_2[0x14];
  cVar1 = *(char *)(param_2 + 0x1c);
  *(char *)(param_1 + 0x1c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  cVar1 = *(char *)(param_2 + 0x2a);
  *(char *)(param_1 + 0x2a) = cVar1;
  if (cVar1 == '\x01') {
    uVar3 = *(undefined8 *)(param_2 + 0x26);
    *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
    *(undefined8 *)(param_1 + 0x26) = uVar3;
  }
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  cVar1 = *(char *)(param_2 + 0x34);
  *(char *)(param_1 + 0x34) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  }
  return param_1;
}



// FUNCTION 1461d221a FUN_1461d221a body=56 status=ok
// SIG undefined FUN_1461d221a(void)

undefined8 * FUN_1461d221a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x98,0x10);
  FUN_1416386f0(uVar1,param_3);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1461d226a FUN_1461d226a body=270 status=ok
// SIG undefined FUN_1461d226a(void)

void FUN_1461d226a(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  ushort uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,3);
  uVar2 = *(ushort *)(param_2 + 0xc);
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar2 != 0) {
    lVar4 = (ulonglong)uVar2 << 5;
    puVar3 = puVar1;
    do {
      if (*(short *)((longlong)puVar3 + 0x1e) == *param_1) goto LAB_1461d22bb;
      puVar3 = puVar3 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  puVar3 = (ulonglong *)0x0;
LAB_1461d22bb:
  lVar4 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar3) {
    *(int *)(lVar4 + lVar6 * 4) = (int)*puVar3 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar4 = *param_3;
    uVar2 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar2 != 0) {
    lVar5 = (ulonglong)uVar2 << 5;
    puVar3 = puVar1;
    do {
      if (*(short *)((longlong)puVar3 + 0x1e) == param_1[1]) goto LAB_1461d230e;
      puVar3 = puVar3 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar3 = (ulonglong *)0x0;
LAB_1461d230e:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar3) {
    *(int *)(lVar4 + 4 + lVar6 * 4) = (int)*puVar3 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar4 = *param_3;
    uVar2 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar2 != 0) {
    lVar5 = (ulonglong)uVar2 << 5;
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[2]) goto LAB_1461d2353;
      puVar1 = puVar1 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_1461d2353:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar4 + 8 + lVar6 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 1461d2378 FUN_1461d2378 body=155 status=ok
// SIG undefined FUN_1461d2378(void)

bool FUN_1461d2378(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d2414 FUN_1461d2414 body=136 status=ok
// SIG undefined FUN_1461d2414(void)

void FUN_1461d2414(longlong param_1)

{
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_1 + 0x290) = 0;
  if (*(char *)(param_1 + 0x17d) == '\x01') {
    local_20 = DAT_14cb98798;
    FUN_144a13f80(param_1 + 0x1f0,local_24,&local_20,0);
    FUN_144a8b5fe(param_1 + 0x240,local_20);
    FUN_14571a8e6(param_1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d249e FUN_1461d249e body=486 status=ok
// SIG undefined FUN_1461d249e(void)

void FUN_1461d249e(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = FUN_14479d2ce(param_1 + 0xc18);
  local_48 = (undefined8 *)0x0;
  FUN_14485c47a(&local_48,uVar5);
  cVar3 = FUN_144729dda(&local_48);
  puVar1 = local_48;
  if (cVar3 != '\0') {
    if (*(longlong *)(param_1 + 0xb28) == 0) {
      lVar6 = FUN_14479d2ce(&local_48);
      uVar5 = FUN_14479d2ce(&local_48);
      local_40 = (undefined8 *)0x0;
      local_38._0_4_ = 0;
      FUN_1446efa72(&local_40,0,4,0x10);
      puVar2 = local_40;
      local_38 = CONCAT44(local_38._4_4_,4);
      *local_40 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      local_40[2] = lVar8;
      *local_40 = &PTR_FUN_14b96d3d0;
      local_40[3] = 0;
      FUN_14485c47a(local_40 + 3,uVar5);
      puVar2[4] = puVar1;
      *(undefined1 *)(puVar2 + 5) = 0x12;
      puVar2[6] = param_1;
      FUN_1448b6402(lVar6 + 0x3f80,&local_50,&local_40);
      FUN_1449db362(&local_40);
      *(undefined8 *)(param_1 + 0xb28) = local_50;
    }
    lVar7 = FUN_14479d2ce(&local_48);
    uVar4 = (**(code **)(*(longlong *)(lVar7 + 0x10c0) + 0x28))(lVar7 + 0x10c0);
    *(uint *)(param_1 + 0xb30) = uVar4;
    local_40 = local_48;
    local_38 = param_1;
    if (0x31 < uVar4) {
      FUN_141638902(&local_40,4);
      uVar4 = *(uint *)(param_1 + 0xb30);
    }
    if (0x1d < uVar4) {
      FUN_141638902(&local_40,3);
      uVar4 = *(uint *)(param_1 + 0xb30);
    }
    if (9 < uVar4) {
      FUN_141638902(&local_40,2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d2690 FUN_1461d2690 body=575 status=ok
// SIG undefined FUN_1461d2690(void)

undefined8 * FUN_1461d2690(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1459a1a80();
  *param_1 = &PTR_FUN_14abf3990;
  param_1[5] = &PTR_FUN_14abf3cb0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar3 = FUN_1459eb55e();
  FUN_1446f470e(&local_30,L"ReceiveTickAI",1);
  FUN_1446f470e(&local_38,L"ReceiveTick",1);
  iVar2 = FUN_145acc604(local_38,local_30,param_1,uVar3);
  *(uint *)(param_1 + 0x12) = (*(uint *)(param_1 + 0x12) & 0xfffffff3) + iVar2 * 4;
  FUN_1446f470e(&local_40,L"ReceiveActivationAI",1);
  FUN_1446f470e(&local_48,L"ReceiveActivation",1);
  iVar2 = FUN_145acc604(local_48,local_40,param_1,uVar3);
  *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x12) & 0xffffffcf | iVar2 << 4;
  FUN_1446f470e(&local_50,L"ReceiveDeactivationAI",1);
  FUN_1446f470e(&local_58,L"ReceiveDeactivation",1);
  iVar2 = FUN_145acc604(local_58,local_50,param_1,uVar3);
  *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x12) & 0xffffff3f | iVar2 << 6;
  FUN_1446f470e(&local_60,L"ReceiveSearchStartAI",1);
  FUN_1446f470e(&local_68,L"ReceiveSearchStart",1);
  iVar2 = FUN_145acc604(local_68,local_60,param_1,uVar3);
  uVar1 = *(uint *)(param_1 + 0x12);
  *(uint *)(param_1 + 0xd) = (*(uint *)(param_1 + 0xd) & 0xfffffffb) + (uint)(iVar2 != 0) * 4;
  *(byte *)(param_1 + 0xb) =
       ((uVar1 & 0xc) != 0) << 2 |
       ((uVar1 & 0xc0) != 0) * '\x02' | *(byte *)(param_1 + 0xb) & 0xf8 | (uVar1 & 0x30) != 0;
  *(uint *)(param_1 + 0x12) = iVar2 * 0x100 + (uVar1 & 0xfffffcfe) + 1;
  *(byte *)((longlong)param_1 + 0x55) = *(byte *)((longlong)param_1 + 0x55) | 4;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    FUN_14156e8b3(param_1,uVar3,param_1 + 0x10);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d28d0 FUN_1461d28d0 body=371 status=ok
// SIG undefined FUN_1461d28d0(void)

void FUN_1461d28d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_118 [48];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  code *local_d8 [2];
  undefined8 *local_c8;
  undefined8 local_90;
  char local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  switchD_143c3d4dc::caseD_1d();
  FUN_1461d2b9a(param_1 + 0x28,&local_90);
  plVar1 = local_60;
  if (local_70 == '\x01') {
    local_e8 = local_80;
    uStack_e4 = uStack_7c;
    uStack_e0 = uStack_78;
    uStack_dc = uStack_74;
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  local_d8[0] = (code *)0x0;
  local_c8 = (undefined8 *)FUN_14001cc68(0x48,8);
  *local_c8 = &PTR_FUN_14a57c8e0;
  *(char *)(local_c8 + 2) = local_88;
  if (local_88 != '\0') {
    local_c8[1] = local_90;
  }
  *(char *)(local_c8 + 5) = local_70;
  if (local_70 != '\0') {
    *(undefined4 *)(local_c8 + 3) = local_e8;
    *(undefined4 *)((longlong)local_c8 + 0x1c) = uStack_e4;
    *(undefined4 *)(local_c8 + 4) = uStack_e0;
    *(undefined4 *)((longlong)local_c8 + 0x24) = uStack_dc;
  }
  local_c8[6] = local_68;
  local_c8[7] = plVar1;
  local_c8[8] = local_58;
  if (local_c8 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_d8[0] = FUN_143360a74;
  }
  FUN_1461d2a44(param_1 + 0x1d8,local_d8);
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
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d2a44 FUN_1461d2a44 body=340 status=ok
// SIG undefined FUN_1461d2a44(void)

void FUN_1461d2a44(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_c8 [48];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  code *local_78 [2];
  undefined8 *local_68;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar8 = *(longlong **)(param_1 + 0x10);
  if (plVar8 != (longlong *)0x0) {
    iVar7 = (int)plVar8[1];
    do {
      if (iVar7 == 0) goto LAB_1461d2a72;
      LOCK();
      iVar6 = (int)plVar8[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    lVar3 = *(longlong *)(param_1 + 8);
    if (lVar3 != 0) {
      lVar4 = *param_2;
      lVar5 = param_2[2];
      param_2[2] = 0;
      local_88 = param_2[6];
      uStack_80 = param_2[7];
      local_98 = (undefined4)param_2[4];
      uStack_94 = *(undefined4 *)((longlong)param_2 + 0x24);
      uStack_90 = (undefined4)param_2[5];
      uStack_8c = *(undefined4 *)((longlong)param_2 + 0x2c);
      if (lVar4 != 0) {
        *param_2 = 0;
      }
      local_78[0] = (code *)0x0;
      local_68 = (undefined8 *)FUN_14001cc68(0x50,0x10);
      *local_68 = &PTR_FUN_14a57c880;
      local_68[2] = lVar4;
      local_68[4] = lVar5;
      *(undefined4 *)(local_68 + 8) = (undefined4)local_88;
      *(undefined4 *)((longlong)local_68 + 0x44) = local_88._4_4_;
      *(undefined4 *)(local_68 + 9) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)local_68 + 0x4c) = uStack_80._4_4_;
      *(undefined4 *)(local_68 + 6) = local_98;
      *(undefined4 *)((longlong)local_68 + 0x34) = uStack_94;
      *(undefined4 *)(local_68 + 7) = uStack_90;
      *(undefined4 *)((longlong)local_68 + 0x3c) = uStack_8c;
      if (local_68 + 2 != (longlong *)0x0) {
        local_78[0] = FUN_143360938;
      }
      FUN_1477de1fe(lVar3,local_78);
    }
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
LAB_1461d2a72:
  if (*param_2 != 0) {
    plVar8 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461d2b9a FUN_1461d2b9a body=462 status=ok
// SIG undefined FUN_1461d2b9a(void)

undefined8 * FUN_1461d2b9a(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong in_RCX;
  longlong *plVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(in_RCX + 0x188) != 0) goto LAB_1461d2c36;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14a78d690;
  plVar6[2] = 0;
  if (plVar6 == (longlong *)0x0) {
    *(undefined8 *)(in_RCX + 0x188) = 0x10;
    plVar7 = *(longlong **)(in_RCX + 400);
    if (plVar7 == (longlong *)0x0) goto LAB_1461d2c36;
    *(undefined8 *)(in_RCX + 400) = 0;
LAB_1461d2cf2:
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      param_1 = (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        param_1 = (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    if (plVar6 == (longlong *)0x0) goto LAB_1461d2c36;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *(longlong **)(in_RCX + 0x188) = plVar6 + 2;
    plVar7 = *(longlong **)(in_RCX + 400);
    if (plVar6 == plVar7) {
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        param_1 = (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          param_1 = (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    else {
      *(longlong **)(in_RCX + 400) = plVar6;
      if (plVar7 != (longlong *)0x0) goto LAB_1461d2cf2;
    }
  }
  LOCK();
  plVar7 = plVar6 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    param_1 = (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      param_1 = (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
LAB_1461d2c36:
  cVar3 = *(char *)(in_RCX + 0x168);
  if (cVar3 == '\x01') {
    param_1 = *(undefined8 *)(in_RCX + 0x160);
  }
  cVar4 = *(char *)(in_RCX + 0x180);
  if (cVar4 == '\x01') {
    local_38 = *(undefined8 *)(in_RCX + 0x170);
    uStack_30 = *(undefined8 *)(in_RCX + 0x178);
  }
  *(char *)(param_2 + 1) = cVar3;
  if (cVar3 != '\0') {
    *param_2 = param_1;
  }
  *(char *)(param_2 + 4) = cVar4;
  if (cVar4 != '\0') {
    *(undefined4 *)(param_2 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)param_2 + 0x14) = local_38._4_4_;
    *(undefined4 *)(param_2 + 3) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_30._4_4_;
  }
  param_2[5] = *(undefined8 *)(in_RCX + 0x188);
  lVar5 = *(longlong *)(in_RCX + 400);
  param_2[6] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  *(undefined2 *)(param_2 + 7) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1461d2d6a FUN_1461d2d6a body=84 status=ok
// SIG undefined FUN_1461d2d6a(void)

undefined8 * FUN_1461d2d6a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1bd420;
  FUN_141638c42(param_1 + 0x10);
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461d2dca FUN_1461d2dca body=577 status=ok
// SIG undefined FUN_1461d2dca(void)

undefined8 * FUN_1461d2dca(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14b752a10;
  param_1[6] = &PTR_FUN_14b752cb0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_140945b6a(param_1 + 0xd);
  param_1[0x42] = 0;
  param_1[0x43] = 0xbfd0000000000000;
  param_1[0x44] = 0xbfd0000000000000;
  param_1[0x45] = 0xbfd0000000000000;
  param_1[0x46] = 0x4080000040000000;
  param_1[0x47] = 0x4018000000000000;
  param_1[0x48] = 0x4018000000000000;
  param_1[0x49] = 0x4018000000000000;
  param_1[0x4a] = 0xc018000000000000;
  param_1[0x4b] = 0xc018000000000000;
  param_1[0x4c] = 0xc018000000000000;
  param_1[0x4d] = 0x3ff0000000000000;
  param_1[0x4e] = 0x3ff0000000000000;
  param_1[0x4f] = 0x3ff0000000000000;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0x4080000040000000;
  param_1[0x55] = 0x4008000000000000;
  param_1[0x56] = 0x4008000000000000;
  param_1[0x57] = 0x4008000000000000;
  param_1[0x58] = 0xc008000000000000;
  param_1[0x59] = 0xc008000000000000;
  param_1[0x5a] = 0xc008000000000000;
  param_1[0x5f] = 0;
  param_1[0x60] = 0x8000000000;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x61] = 0xffffffff;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0x3ff0000000000000;
  param_1[0x67] = 0x3ff0000000000000;
  param_1[0x68] = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x354) = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x364) = 0x4080000040000000;
  param_1[0x6e] = 0x4008000000000000;
  param_1[0x6f] = 0x4008000000000000;
  param_1[0x70] = 0x4008000000000000;
  param_1[0x71] = 0xc008000000000000;
  param_1[0x72] = 0xc008000000000000;
  param_1[0x73] = 0xc008000000000000;
  FUN_1446f470e(param_1 + 0x74,L"Muzzle_Lead",1);
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  FUN_140945b6a(param_1 + 0x78);
  param_1[0xad] = 0x3fa000003eb33333;
  param_1[0xae] = 0x3fa000003eb33333;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0x3dcccccd3dcccccd;
  param_1[0xb2] = 0x3f4ccccd3d4ccccd;
  param_1[0xb3] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0xb4) = 0x3f800000;
  return param_1;
}



// FUNCTION 1461d3014 FUN_1461d3014 body=582 status=ok
// SIG undefined FUN_1461d3014(void)

undefined8 * FUN_1461d3014(undefined8 *param_1)

{
  FUN_145c73f34();
  *param_1 = &PTR_FUN_14bda65d0;
  param_1[5] = &PTR_FUN_14bda6c30;
  param_1[0x13] = &PTR_FUN_14bda6c50;
  param_1[0x15] = &PTR_FUN_14bda6c80;
  param_1[0x16] = &PTR_FUN_14bda6cc0;
  param_1[0x174] = &PTR_FUN_14bda6cf0;
  param_1[0x18c] = 0;
  *(undefined4 *)(param_1 + 0x18d) = 0;
  param_1[0x175] = 0;
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbd1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbd9) = 0;
  param_1[0x17d] = 0;
  param_1[0x17e] = 0;
  param_1[0x17f] = 0;
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  param_1[0x183] = 0;
  param_1[0x184] = 0;
  *(undefined1 *)(param_1 + 0x185) = 0;
  param_1[0x186] = 0;
  param_1[0x187] = 0;
  param_1[0x188] = 0;
  param_1[0x189] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc74) = 0;
  param_1[400] = 0;
  *(undefined4 *)(param_1 + 0x191) = 0;
  *(undefined1 *)(param_1 + 0x192) = 0;
  param_1[0x19f] = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  param_1[0x19b] = 0;
  param_1[0x19c] = 0;
  param_1[0x199] = 0;
  param_1[0x19a] = 0;
  param_1[0x197] = 0;
  param_1[0x198] = 0;
  param_1[0x195] = 0;
  param_1[0x196] = 0;
  param_1[0x193] = 0;
  param_1[0x194] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd04) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd0c) = 0;
  param_1[0x1a3] = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  param_1[0x1a9] = 0;
  *(undefined4 *)(param_1 + 0x1aa) = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a6] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd5c) = 0;
  param_1[0x1ad] = 0;
  *(undefined4 *)(param_1 + 0x1ae) = 0;
  *(undefined1 *)(param_1 + 0x1b3) = 0;
  param_1[0x1b1] = 0;
  param_1[0x1b2] = 0;
  param_1[0x1af] = 0;
  param_1[0x1b0] = 0;
  FUN_1458481c0(param_1 + 0x1b4);
  param_1[0x1ef] = 0x7fefffffffffffff;
  param_1[0x1f0] = 0x7fefffffffffffff;
  param_1[0x1f1] = 0x7fefffffffffffff;
  param_1[0x1f2] = 0xffefffffffffffff;
  param_1[499] = 0xffefffffffffffff;
  param_1[500] = 0xffefffffffffffff;
  FUN_1457e37e0(param_1 + 0x1f6);
  *(undefined2 *)(param_1 + 0x210) = 0;
  param_1[0x217] = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  param_1[0x211] = 0;
  param_1[0x212] = 0;
  param_1[0x213] = 0;
  param_1[0x214] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10cc) = 0;
  param_1[0x21b] = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  param_1[0x21d] = 0;
  param_1[0x21e] = 0;
  param_1[0x21f] = 0;
  param_1[0x220] = 0;
  param_1[0x221] = 0;
  param_1[0x222] = 0;
  param_1[0x223] = 0;
  param_1[0x224] = 0;
  param_1[0x225] = 0;
  param_1[0x226] = 0;
  param_1[0x227] = 0;
  return param_1;
}



// FUNCTION 1461d325a FUN_1461d325a body=165 status=ok
// SIG undefined FUN_1461d325a(void)

bool FUN_1461d325a(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
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



// FUNCTION 1461d330e FUN_1461d330e body=157 status=ok
// SIG undefined FUN_1461d330e(void)

void FUN_1461d330e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_1447210f0();
  if (lVar3 == param_2) {
    FUN_1461d33d4(param_1);
  }
  FUN_1405a77a8(param_1,local_30);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x688) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d33d4 FUN_1461d33d4 body=242 status=ok
// SIG undefined FUN_1461d33d4(void)

void FUN_1461d33d4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 0x98) = 1;
  if (param_1 != (longlong *)0x0) {
    uVar3 = FUN_1403c7982();
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = FUN_1403c7982();
      plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
      if (plVar5 != (longlong *)0x0 && plVar4 != plVar5) {
        local_38 = 0;
        plStack_30 = (longlong *)0x0;
        FUN_14009b010(&local_38,3,0);
        FUN_1446dcc2e(param_1 + 0x96,&local_38);
        plVar4 = plStack_30;
        if (plStack_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_30 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_30)(plStack_30);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_1418861ea(uVar3,param_1 + 0x96,0);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d34c8 FUN_1461d34c8 body=441 status=ok
// SIG undefined FUN_1461d34c8(void)

longlong * FUN_1461d34c8(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_1a8 [44];
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  longlong local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x1b8);
  if ((longlong)iVar1 != 0) {
    local_168 = *(longlong *)(param_1 + 0x1b0);
    lVar7 = 0;
    do {
      lVar5 = *(longlong *)(local_168 + lVar7);
      memcpy(local_148,(void *)(lVar5 + 0xd8),0x100);
      uVar2 = *(undefined4 *)(lVar5 + 0x1d8);
      uVar3 = *(undefined4 *)(lVar5 + 0x1dc);
      local_16c = *(undefined4 *)(lVar5 + 0x1e0);
      local_170 = *(undefined4 *)(lVar5 + 0x1e4);
      local_150 = *(undefined8 *)(lVar5 + 0x1e8);
      local_158 = *(undefined8 *)(lVar5 + 0x1f0);
      local_160 = *(undefined8 *)(lVar5 + 0x1f8);
      local_174 = *(undefined4 *)(lVar5 + 0x200);
      local_178 = *(undefined4 *)(lVar5 + 0x204);
      local_17c = *(undefined4 *)(lVar5 + 0x220);
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_1461d3682(param_2,iVar4);
      }
      lVar5 = *param_2;
      lVar6 = (longlong)iVar4 * 0x138;
      memcpy((void *)(lVar5 + lVar6),local_148,0x100);
      *(undefined4 *)(lVar5 + 0x100 + lVar6) = uVar2;
      *(undefined4 *)(lVar5 + 0x104 + lVar6) = uVar3;
      *(undefined4 *)(lVar5 + 0x108 + lVar6) = local_16c;
      *(undefined4 *)(lVar5 + 0x10c + lVar6) = local_170;
      *(undefined8 *)(lVar5 + 0x110 + lVar6) = local_150;
      *(undefined8 *)(lVar5 + 0x118 + lVar6) = local_158;
      *(undefined8 *)(lVar5 + 0x120 + lVar6) = local_160;
      *(undefined4 *)(lVar5 + 0x128 + lVar6) = local_174;
      *(undefined4 *)(lVar5 + 300 + lVar6) = local_178;
      *(undefined4 *)(lVar5 + 0x130 + lVar6) = local_17c;
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d3682 FUN_1461d3682 body=149 status=ok
// SIG undefined FUN_1461d3682(void)

void FUN_1461d3682(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x138,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x138)) {
      uVar5 = uVar4 / 0x138 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x138,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1461d3718 FUN_1461d3718 body=163 status=ok
// SIG undefined FUN_1461d3718(void)

longlong FUN_1461d3718(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_1461d37bc(local_48,param_2,&local_38);
  local_38 = CONCAT62(local_38._2_6_,0x119);
  local_30 = 0;
  local_28 = 0;
  FUN_140fe25fc(&local_30,local_48);
  *(undefined2 *)(param_1 + 0x70) = (undefined2)local_38;
  FUN_144a450dc(param_1 + 0x78,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d37bc FUN_1461d37bc body=428 status=ok
// SIG undefined FUN_1461d37bc(void)

longlong * FUN_1461d37bc(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x28);
  if (plVar6 == (longlong *)0x0) {
LAB_1461d389c:
    *puVar5 = &PTR_LAB_149f055c0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14a5aa360;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1461d389c;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f055c0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14a5aa360;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 1461d396e FUN_1461d396e body=496 status=ok
// SIG undefined FUN_1461d396e(void)

byte * FUN_1461d396e(byte *param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[0] = 0;
  param_1[1] = 0;
  local_21 = '\x01';
  local_38 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"/Script/Engine.StreamingSettings",L"s.AsyncLoadingThreadEnabled");
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  bVar1 = FUN_14054d46e(&DAT_14c846b20,L"NoAsyncLoadingThread");
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar2 = FUN_14054d46e(&DAT_14c846b20,L"AsyncLoadingThread");
  if (cVar2 == '\0') {
    if (local_21 == '\x01') {
      cVar2 = FUN_1447e0190();
      if (cVar2 != '\0') {
        bVar1 = bVar1 ^ 1;
        goto LAB_1461d3a21;
      }
    }
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
  }
LAB_1461d3a21:
  *param_1 = bVar1;
  local_21 = '\x01';
  local_38 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"/Script/Engine.StreamingSettings",L"s.AsyncPostLoadEnabled");
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  bVar1 = FUN_14054d46e(&DAT_14c846b20,L"NoAsyncPostLoad");
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar2 = FUN_14054d46e(&DAT_14c846b20,L"AsyncPostLoad");
  if (cVar2 == '\0') {
    if (local_21 == '\x01') {
      cVar2 = FUN_1447e0190();
      if (cVar2 != '\0') {
        bVar1 = bVar1 ^ 1;
        goto LAB_1461d3aaa;
      }
    }
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
  }
LAB_1461d3aaa:
  param_1[1] = bVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d3b60 FUN_1461d3b60 body=21 status=ok
// SIG undefined FUN_1461d3b60(void)

undefined8 FUN_1461d3b60(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1461d3b76 FUN_1461d3b76 body=66 status=ok
// SIG undefined FUN_1461d3b76(void)

void FUN_1461d3b76(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    lVar1 = FUN_1411c1a08();
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      FUN_14480f766(lVar1 + 0x90);
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 1461d3bb8 FUN_1461d3bb8 body=357 status=ok
// SIG undefined FUN_1461d3bb8(void)

void FUN_1461d3bb8(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    lVar5 = param_1 + 100;
    cVar1 = FUN_144729dda(lVar5);
    if (cVar1 != '\0') {
      uVar3 = FUN_14479d2ce(lVar5);
      cVar1 = FUN_14579c798(uVar3);
      if ((param_2 != 0) && (cVar1 != '\0')) {
        cVar1 = FUN_141107632(param_2);
        if ((param_4 != 0) && (cVar1 != '\0')) {
          lVar4 = FUN_145a257f2();
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_4 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
            if (*(longlong *)(param_1 + 0xa8) != 0) {
              lVar4 = FUN_1411c1a08();
              if (*(longlong *)(param_1 + 0xa8) != 0) {
                FUN_14480f766(lVar4 + 0x90);
              }
              *(undefined8 *)(param_1 + 0xa8) = 0;
            }
            uVar3 = FUN_14479d2ce(lVar5);
            FUN_146010374(uVar3,0,0);
            uVar3 = FUN_14479d2ce(lVar5);
            FUN_145a12516(uVar3);
            lVar5 = FUN_14577a94c(param_1);
            if (lVar5 != 0) {
              iVar2 = FUN_14490d72a(lVar5);
              if (iVar2 != 3) {
                lVar5 = FUN_1411c1a08();
                FUN_14601028e(lVar5 + 0x90,&local_30,param_1,FUN_1461d3b76);
                *(undefined8 *)(param_1 + 0xa8) = local_30;
              }
            }
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d3d1e FUN_1461d3d1e body=142 status=ok
// SIG undefined FUN_1461d3d1e(void)

bool FUN_1461d3d1e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d3dae FUN_1461d3dae body=442 status=ok
// SIG undefined FUN_1461d3dae(void)

void FUN_1461d3dae(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(char *)(param_1 + 0x28) != '\x01') || (param_2 == (longlong *)0x0)) ||
     ((DAT_14cc2d223 & 1) == 0)) goto LAB_1461d3eca;
  lVar3 = FUN_144a2f878();
  if (((*(int *)(param_2[2] + 0x38) < *(int *)(lVar3 + 0x38)) ||
      (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
       lVar3 + 0x30)) ||
     ((cVar1 = (**(code **)(*param_2 + 0x700))(param_2), cVar1 == '\0' ||
      ((cVar1 = FUN_1449ce97a(param_2), cVar1 == '\0' ||
       ((*(byte *)((longlong)param_2 + 100) & 2) == 0)))))) goto LAB_1461d3eca;
  FUN_140bac450(param_2,&local_48);
  FUN_1400021e4(&local_48,&local_38);
  FUN_144a49bb4(&local_38,&local_48,5);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  local_38 = local_48;
  local_30 = local_40;
  local_2c = local_3c;
  iVar2 = *(int *)(param_1 + 0x38);
  if (local_40 == iVar2) {
    if ((1 < local_40) &&
       (iVar2 = FUN_144a80a00(local_48,*(longlong *)(param_1 + 0x30)), iVar2 != 0)) {
      iVar2 = *(int *)(param_1 + 0x38);
LAB_1461d3ef7:
      if (1 < iVar2) {
        FUN_1461f6664(param_1);
      }
      FUN_1461d3f6a(&local_48,&local_38);
      if ((longlong *)(param_1 + 0x30) == &local_48) {
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x30) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x30) = local_48;
        local_48 = 0;
        *(int *)(param_1 + 0x38) = local_40;
        *(undefined4 *)(param_1 + 0x3c) = local_3c;
      }
      FUN_1461d42d8(param_1,param_2);
    }
  }
  else if (local_40 + iVar2 != 1) goto LAB_1461d3ef7;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
LAB_1461d3eca:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461d3f6a FUN_1461d3f6a body=876 status=ok
// SIG undefined FUN_1461d3f6a(void)

undefined8 FUN_1461d3f6a(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  char *pcVar3;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc2d1a8) && (FUN_144b3d300(&DAT_14cc2d1a8), DAT_14cc2d1a8 == -1)) {
    FUN_140056680(&DAT_14cc2d198,L"DarkSiren");
    atexit((_func_5014 *)&LAB_144667a31);
    _Init_thread_footer(&DAT_14cc2d1a8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc2d1c0) && (FUN_144b3d300(&DAT_14cc2d1c0), DAT_14cc2d1c0 == -1)) {
    FUN_140056680(&DAT_14cc2d1b0,L"ExoSoldier");
    atexit((_func_5014 *)&LAB_144667a42);
    _Init_thread_footer(&DAT_14cc2d1c0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc2d1d8) && (FUN_144b3d300(&DAT_14cc2d1d8), DAT_14cc2d1d8 == -1)) {
    FUN_140056680(&DAT_14cc2d1c8,L"Gravitar");
    atexit((_func_5014 *)&LAB_144667a53);
    _Init_thread_footer(&DAT_14cc2d1d8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc2d1f0) && (FUN_144b3d300(&DAT_14cc2d1f0), DAT_14cc2d1f0 == -1)) {
    FUN_140056680(&DAT_14cc2d1e0,L"Paladin");
    atexit((_func_5014 *)&LAB_144667a64);
    _Init_thread_footer(&DAT_14cc2d1f0);
  }
  FUN_1400b22c2(param_1,&DAT_149e02088);
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == DAT_14cc2d1a0) {
    if ((1 < iVar1) && (iVar1 = FUN_144a80a00(*param_2,DAT_14cc2d198), iVar1 != 0)) {
      iVar1 = *(int *)(param_2 + 1);
      goto LAB_1461d4134;
    }
  }
  else if (DAT_14cc2d1a0 + iVar1 != 1) {
LAB_1461d4134:
    if (iVar1 == DAT_14cc2d1b8) {
      if ((1 < iVar1) && (iVar1 = FUN_144a80a00(*param_2,DAT_14cc2d1b0), iVar1 != 0)) {
        iVar1 = *(int *)(param_2 + 1);
LAB_1461d422f:
        if (iVar1 == DAT_14cc2d1d0) {
          if ((1 < iVar1) && (iVar1 = FUN_144a80a00(*param_2,DAT_14cc2d1c8), iVar1 != 0)) {
            iVar1 = *(int *)(param_2 + 1);
LAB_1461d4278:
            if (iVar1 == DAT_14cc2d1e8) {
              if ((1 < iVar1) && (iVar1 = FUN_144a80a00(*param_2,DAT_14cc2d1e0), iVar1 != 0)) {
LAB_1461d429a:
                FUN_14020fad6(param_1,L"Generic");
                pcVar3 = "Generic_Idle_Start";
                goto LAB_1461d4174;
              }
            }
            else if (DAT_14cc2d1e8 + iVar1 != 1) goto LAB_1461d429a;
            FUN_144a787a6(param_1,&DAT_14cc2d1e0);
            pcVar3 = "Paladin_Idle_Start";
            goto LAB_1461d4174;
          }
        }
        else if (DAT_14cc2d1d0 + iVar1 != 1) goto LAB_1461d4278;
        FUN_144a787a6(param_1,&DAT_14cc2d1c8);
        pcVar3 = "Gravitar_Idle_Start";
        goto LAB_1461d4174;
      }
    }
    else if (DAT_14cc2d1b8 + iVar1 != 1) goto LAB_1461d422f;
    FUN_144a787a6(param_1,&DAT_14cc2d1b0);
    pcVar3 = "ExoSoldier_Idle_Start";
    goto LAB_1461d4174;
  }
  FUN_144a787a6(param_1,&DAT_14cc2d198);
  pcVar3 = "DarkSiren_Idle_Start";
LAB_1461d4174:
  FUN_1400b22c2(&local_28,pcVar3);
  if (((DAT_14cc2d220 == '\x01') && ((DAT_14cc2d201 & 1) != 0)) && (DAT_14cc2d221 == '\x01')) {
    puVar2 = local_28;
    if (local_20 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    (*DAT_14cc2d210)(puVar2);
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1461d42d8 FUN_1461d42d8 body=1246 status=ok
// SIG undefined FUN_1461d42d8(void)

void FUN_1461d42d8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1461d47b8(param_2 + 0x5900,&local_50,param_1,FUN_140f8ae2e);
  *(undefined8 *)(param_1 + 0x100) = local_50;
  FUN_1461d4c1a(param_2 + 0x59a0,&local_50,param_1);
  *(undefined8 *)(param_1 + 0x108) = local_50;
  FUN_1461d47b8(param_2 + 0x5068,&local_50,param_1,FUN_14983730e);
  *(undefined8 *)(param_1 + 0xb8) = local_50;
  FUN_1461d47b8(param_2 + 0x5088,&local_50,param_1,FUN_14983730e);
  *(undefined8 *)(param_1 + 0xc0) = local_50;
  FUN_1461d4df6(param_2 + 0x52a8,&local_50,param_1);
  *(undefined8 *)(param_1 + 0xd0) = local_50;
  FUN_1461d48ae(param_2 + 0x4220,&local_50,param_1,FUN_149837394);
  *(undefined8 *)(param_1 + 200) = local_50;
  FUN_1461d48ae(param_2 + 0x4ad8,&local_50,param_1,FUN_1498374cc);
  *(undefined8 *)(param_1 + 0xd8) = local_50;
  FUN_1461d48ae(param_2 + 0x4af0,&local_50,param_1,FUN_1498375b0);
  *(undefined8 *)(param_1 + 0xe8) = local_50;
  FUN_1461d47b8(param_2 + 0x6048,&local_50,param_1,FUN_1457d6380);
  *(undefined8 *)(param_1 + 0xe0) = local_50;
  lVar1 = (**(code **)(*(longlong *)(param_2 + 0x3b38) + 0x18))(param_2 + 0x3b38);
  FUN_1461d49a4(lVar1 + 0x300,&local_50,param_1,FUN_145eea656);
  *(undefined8 *)(param_1 + 0xf0) = local_50;
  lVar1 = (**(code **)(*(longlong *)(param_2 + 0x3b38) + 0x18))(param_2 + 0x3b38);
  FUN_1461d49a4(lVar1 + 0x378,&local_50,param_1,FUN_145eea6dc);
  *(undefined8 *)(param_1 + 0xf8) = local_50;
  FUN_1461d4fd2(param_2 + 0x3fa8,&local_50,param_1);
  *(undefined8 *)(param_1 + 0x110) = local_50;
  FUN_1461d4a9a(param_2 + 0x71b8,&local_50,param_1,FUN_145ee5ba6);
  *(undefined8 *)(param_1 + 0x118) = local_50;
  FUN_1461d50c8(param_2 + 0x71f8,&local_50,param_1);
  *(undefined8 *)(param_1 + 0x120) = local_50;
  FUN_1461d4a9a(param_2 + 0x72c8,&local_50,param_1,FUN_145ee5c2c);
  *(undefined8 *)(param_1 + 0x128) = local_50;
  FUN_1461f6c82(&local_58);
  local_50 = 0;
  FUN_14485c47a(&local_50,param_1);
  local_48 = local_58;
  FUN_14113f0c0(&local_50);
  FUN_14053c012(param_2 + 0x67d0,&local_50);
  FUN_1461f7098(&local_60);
  local_50 = 0;
  FUN_14485c47a(&local_50,param_1);
  local_48 = local_60;
  FUN_14113f0c0(&local_50);
  FUN_14053c012(param_2 + 0x5fc0,&local_50);
  FUN_1461f6e86(&local_68);
  local_50 = 0;
  FUN_14485c47a(&local_50,param_1);
  local_48 = local_68;
  FUN_14113f0c0(&local_50);
  FUN_14053c012(param_2 + 0x66a8,&local_50);
  lVar1 = *(longlong *)(param_2 + 0x430);
  if (lVar1 != 0) {
    FUN_14485c47a(param_1 + 0x58,lVar1);
    FUN_1461f6f36(&local_70);
    local_50 = 0;
    FUN_14485c47a(&local_50,param_1);
    local_48 = local_70;
    FUN_14113f0c0(&local_50);
    FUN_14053c012(lVar1 + 0x4460,&local_50);
    FUN_1461f6fe6(&local_78);
    local_50 = 0;
    FUN_14485c47a(&local_50,param_1);
    local_48 = local_78;
    FUN_14113f0c0(&local_50);
    FUN_14053c012(lVar1 + 0x3ba8,&local_50);
    FUN_1461f6d2e(&local_80);
    local_50 = 0;
    FUN_14485c47a(&local_50,param_1);
    local_48 = local_80;
    FUN_14113f0c0(&local_50);
    FUN_14053c012(lVar1 + 0x3bb8,&local_50);
    FUN_1461f7156(&local_88);
    local_50 = 0;
    FUN_14485c47a(&local_50,param_1);
    local_48 = local_88;
    FUN_14113f0c0(&local_50);
    FUN_14053c012(lVar1 + 0x4408,&local_50);
  }
  FUN_1461d51be(param_1,param_2);
  FUN_1461d5468(param_1,param_2);
  FUN_1461f6dda(&local_90);
  FUN_1461d4b90(param_2 + 0x20f,param_1,local_90);
  FUN_14485c47a(param_1 + 0x50,param_2);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d47b8 FUN_1461d47b8 body=244 status=ok
// SIG undefined FUN_1461d47b8(void)

undefined8
FUN_1461d47b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14beaf890;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_1448b6402(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d48ae FUN_1461d48ae body=244 status=ok
// SIG undefined FUN_1461d48ae(void)

undefined8
FUN_1461d48ae(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b3e9ef0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14beaf540;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_1403524de(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d49a4 FUN_1461d49a4 body=244 status=ok
// SIG undefined FUN_1461d49a4(void)

undefined8
FUN_1461d49a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b9a0b10;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14beaf5b0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_141309258(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d4a9a FUN_1461d4a9a body=244 status=ok
// SIG undefined FUN_1461d4a9a(void)

undefined8
FUN_1461d4a9a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b4edb80;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14beaf690;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_140dca018(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d4b90 FUN_1461d4b90 body=137 status=ok
// SIG undefined FUN_1461d4b90(void)

void FUN_1461d4b90(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_30 = (undefined4)local_48;
  uStack_2c = local_48._4_4_;
  uStack_28 = (undefined4)uStack_40;
  uStack_24 = uStack_40._4_4_;
  FUN_1402599be(param_1,&local_38);
  bVar1 = FUN_140819c20(param_1 + -0x20f,local_38,&local_30);
  *param_1 = *param_1 | bVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d4c1a FUN_1461d4c1a body=244 status=ok
// SIG undefined FUN_1461d4c1a(void)

undefined8 FUN_1461d4c1a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b96caa0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14beaf460;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_149837288;
  FUN_1461d4d10(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d4d10 FUN_1461d4d10 body=216 status=ok
// SIG undefined FUN_1461d4d10(void)

undefined8 * FUN_1461d4d10(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1461d4df6 FUN_1461d4df6 body=244 status=ok
// SIG undefined FUN_1461d4df6(void)

undefined8 FUN_1461d4df6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b96ba70;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14beaf4d0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_14983781a;
  FUN_1461d4eec(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d4eec FUN_1461d4eec body=216 status=ok
// SIG undefined FUN_1461d4eec(void)

undefined8 * FUN_1461d4eec(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1461d4fd2 FUN_1461d4fd2 body=244 status=ok
// SIG undefined FUN_1461d4fd2(void)

undefined8 FUN_1461d4fd2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e35290;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14beaf620;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_1462298c4;
  FUN_140feff30(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d50c8 FUN_1461d50c8 body=244 status=ok
// SIG undefined FUN_1461d50c8(void)

undefined8 FUN_1461d50c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b966850;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14beaf700;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_145fdc684;
  FUN_140dca198(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d51be FUN_1461d51be body=680 status=ok
// SIG undefined FUN_1461d51be(void)

void FUN_1461d51be(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 *local_60;
  undefined4 local_58;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(uint *)(param_2 + 8) >> 0x1e & 1) != 0) goto LAB_1461d53a3;
  FUN_144a884d2(&local_60,"SkillEvent_ActionSkill_Activated",0);
  uVar3 = FUN_141639c24(&local_60);
  plVar1 = (longlong *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x68) == 0) {
    uVar4 = FUN_145c05732();
    uVar4 = FUN_14477b664(uVar4);
    *(undefined8 *)(param_1 + 0x68) = uVar4;
  }
  uVar4 = FUN_145c05732();
  uVar5 = FUN_145c05732();
  FUN_1402d1bfa(&local_68,uVar5,uVar3);
  if (*plVar1 != local_68) {
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  *(longlong *)(param_1 + 0x60) = local_68;
  uVar5 = FUN_145c05732();
  lVar6 = FUN_141459e9e(uVar4,uVar5);
  if (*(longlong *)(param_1 + 0x68) != lVar6) {
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  uVar4 = FUN_14477b664(lVar6);
  lVar6 = FUN_14477b664(uVar4);
  *(longlong *)(param_1 + 0x68) = lVar6;
  if ((lVar6 != 0) && (*(longlong *)(param_1 + 0x60) != 0)) {
    *(undefined8 *)(param_1 + 0x70) = uVar3;
  }
  FUN_144a73aae(&local_60);
  lVar6 = *(longlong *)(param_1 + 0x68);
  if (lVar6 == 0) {
    uVar3 = FUN_145c05732();
    lVar6 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x68) = lVar6;
  }
  if (*(longlong *)(param_1 + 0x70) == 0) {
    if ((lVar6 == 0) || (*plVar1 == 0)) goto LAB_1461d53a3;
    lVar6 = FUN_14494cb38(lVar6,plVar1);
    *(longlong *)(param_1 + 0x70) = lVar6;
    if (lVar6 == 0) goto LAB_1461d53a3;
  }
  uVar3 = (**(code **)(*(longlong *)(param_2 + 0x3a40) + 0x10))(param_2 + 0x3a40);
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  puVar2 = local_60;
  local_58 = 3;
  *local_60 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_60[2] = lVar7;
  *local_60 = &PTR_FUN_14beaf890;
  local_60[3] = 0;
  FUN_14485c47a(local_60 + 3,param_1);
  puVar2[4] = FUN_14983763e;
  lVar6 = *(longlong *)(param_1 + 0x68);
  if (lVar6 == 0) {
    uVar4 = FUN_145c05732();
    lVar6 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x68) = lVar6;
  }
  lVar7 = *(longlong *)(param_1 + 0x70);
  if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
    lVar7 = FUN_14494cb38(lVar6,plVar1,0);
    *(longlong *)(param_1 + 0x70) = lVar7;
  }
  FUN_1410615d0(uVar3,&local_68,lVar7,&local_60);
  *(longlong *)(param_1 + 0x130) = local_68;
  FUN_1449db362(&local_60);
LAB_1461d53a3:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461d5468 FUN_1461d5468 body=725 status=ok
// SIG undefined FUN_1461d5468(void)

void FUN_1461d5468(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 *local_60;
  undefined4 local_58;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(uint *)(param_2 + 8) >> 0x1e & 1) != 0) goto LAB_1461d566b;
  FUN_144a884d2(&local_60,"SkillEvent_ActionSkill_Deactivated",0);
  uVar3 = FUN_141639c24(&local_60);
  plVar1 = (longlong *)(param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    uVar4 = FUN_145c05732();
    uVar4 = FUN_14477b664(uVar4);
    *(undefined8 *)(param_1 + 0x80) = uVar4;
  }
  uVar4 = FUN_145c05732();
  uVar5 = FUN_145c05732();
  FUN_1402d1bfa(&local_68,uVar5,uVar3);
  if (*plVar1 != local_68) {
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(longlong *)(param_1 + 0x78) = local_68;
  uVar5 = FUN_145c05732();
  lVar6 = FUN_141459e9e(uVar4,uVar5);
  if (*(longlong *)(param_1 + 0x80) != lVar6) {
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  uVar4 = FUN_14477b664(lVar6);
  lVar6 = FUN_14477b664(uVar4);
  *(longlong *)(param_1 + 0x80) = lVar6;
  if ((lVar6 != 0) && (*(longlong *)(param_1 + 0x78) != 0)) {
    *(undefined8 *)(param_1 + 0x88) = uVar3;
  }
  FUN_144a73aae(&local_60);
  lVar6 = *(longlong *)(param_1 + 0x80);
  if (lVar6 == 0) {
    uVar3 = FUN_145c05732();
    lVar6 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x80) = lVar6;
  }
  if (*(longlong *)(param_1 + 0x88) == 0) {
    if ((lVar6 == 0) || (*plVar1 == 0)) goto LAB_1461d566b;
    lVar6 = FUN_14494cb38(lVar6,plVar1);
    *(longlong *)(param_1 + 0x88) = lVar6;
    if (lVar6 == 0) goto LAB_1461d566b;
  }
  uVar3 = (**(code **)(*(longlong *)(param_2 + 0x3a40) + 0x10))(param_2 + 0x3a40);
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  puVar2 = local_60;
  local_58 = 3;
  *local_60 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_60[2] = lVar7;
  *local_60 = &PTR_FUN_14beaf890;
  local_60[3] = 0;
  FUN_14485c47a(local_60 + 3,param_1);
  puVar2[4] = FUN_149837790;
  lVar6 = *(longlong *)(param_1 + 0x80);
  if (lVar6 == 0) {
    uVar4 = FUN_145c05732();
    lVar6 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x80) = lVar6;
  }
  lVar7 = *(longlong *)(param_1 + 0x88);
  if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
    lVar7 = FUN_14494cb38(lVar6,plVar1,0);
    *(longlong *)(param_1 + 0x88) = lVar7;
  }
  FUN_1410615d0(uVar3,&local_68,lVar7,&local_60);
  *(longlong *)(param_1 + 0x138) = local_68;
  FUN_1449db362(&local_60);
LAB_1461d566b:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461d573e FUN_1461d573e body=95 status=ok
// SIG undefined FUN_1461d573e(void)

void FUN_1461d573e(longlong *param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  short sVar6;
  ushort uVar7;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    lVar5 = 0;
    do {
      bVar1 = *(byte *)(lVar2 + lVar5);
      bVar3 = bVar1 >> 4;
      sVar6 = bVar3 + 0x37;
      if (bVar1 < 0xa0) {
        sVar6 = bVar3 + 0x30;
      }
      *(short *)(param_2 + lVar5 * 4) = sVar6;
      uVar7 = *(byte *)(lVar2 + lVar5) & 0xf;
      sVar6 = 0x37;
      if ((byte)uVar7 < 10) {
        sVar6 = 0x30;
      }
      *(ushort *)(param_2 + 2 + lVar5 * 4) = uVar7 + sVar6;
      lVar5 = lVar5 + 1;
    } while ((int)lVar4 != lVar5);
  }
  return;
}



// FUNCTION 1461d579e FUN_1461d579e body=12465 status=ok
// SIG undefined FUN_1461d579e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461d579e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_6178 [32];
  undefined8 local_6158;
  undefined ***local_6150;
  undefined8 *local_6140;
  undefined8 local_6138;
  undefined8 local_6130;
  undefined8 local_6128;
  undefined8 local_6120;
  undefined8 local_6118;
  undefined8 local_6110;
  undefined8 local_6108;
  undefined8 local_6100;
  undefined8 local_60f8;
  undefined8 local_60f0;
  undefined8 local_60e8;
  undefined8 local_60e0;
  undefined8 local_60d8;
  undefined8 local_60d0;
  undefined8 local_60c8;
  undefined8 local_60c0;
  undefined8 local_60b8;
  undefined8 local_60b0;
  undefined8 local_60a8;
  undefined8 local_60a0;
  undefined8 local_6098;
  undefined8 local_6090;
  undefined8 local_6088;
  undefined8 local_6080;
  undefined8 local_6078;
  undefined8 local_6070;
  undefined8 uStack_6068;
  undefined8 local_6060;
  undefined8 local_6050;
  undefined8 local_6048;
  undefined8 local_6040;
  undefined8 local_6038;
  undefined8 local_6030;
  undefined8 local_6028;
  undefined8 local_6020;
  undefined8 local_6018;
  undefined8 local_6010;
  undefined8 local_6008;
  undefined8 local_6000;
  undefined8 local_5ff8;
  undefined8 local_5ff0;
  undefined8 local_5fe8;
  undefined8 local_5fe0;
  undefined8 local_5fd8;
  undefined8 local_5fd0;
  undefined8 local_5fc8;
  undefined8 local_5fc0;
  undefined8 local_5fb8;
  undefined8 local_5fb0;
  undefined8 local_5fa8;
  undefined8 local_5fa0;
  undefined8 local_5f98;
  undefined8 local_5f90;
  undefined8 local_5f88;
  undefined8 local_5f80;
  undefined8 local_5f78;
  undefined8 local_5f70;
  undefined8 local_5f68;
  undefined8 local_5f60;
  undefined8 local_5f58;
  undefined8 local_5f50;
  undefined **local_5f48;
  undefined1 *puStack_5f40;
  longlong *local_5ea8;
  undefined **local_5e90;
  undefined **local_5e88;
  longlong local_5e80 [2];
  undefined8 local_5e70;
  undefined8 uStack_5e68;
  longlong local_5e60 [2];
  undefined8 local_5e50;
  undefined8 uStack_5e48;
  longlong local_5e40;
  undefined4 local_5e38;
  undefined **local_5e30;
  undefined4 local_5e28;
  undefined4 local_5e24;
  undefined **local_5e20;
  undefined8 local_5e18;
  undefined8 local_5e10;
  undefined8 local_5e08;
  undefined8 local_5e00;
  undefined8 local_5df4;
  undefined8 uStack_5dec;
  undefined4 local_5de4;
  undefined8 local_5de0;
  undefined8 local_5dd8;
  undefined8 local_5dd0;
  undefined **local_5dc8;
  undefined1 *puStack_5dc0;
  undefined4 local_5d60;
  undefined4 uStack_5d5c;
  undefined4 uStack_5d58;
  undefined4 uStack_5d54;
  undefined4 local_5d50;
  longlong *plStack_5d28;
  undefined **local_5ae8;
  undefined1 *puStack_5ae0;
  undefined1 local_5ad8 [176];
  undefined1 local_5a28 [176];
  undefined1 local_5978 [352];
  undefined8 local_5818;
  undefined8 uStack_5810;
  undefined4 local_5808;
  undefined4 local_5804;
  undefined4 uStack_5800;
  undefined4 uStack_57fc;
  undefined4 uStack_57f8;
  undefined4 local_57f4;
  undefined8 local_57f0;
  undefined8 uStack_57e8;
  undefined4 local_57e0;
  undefined8 local_57c8;
  undefined8 uStack_57c0;
  undefined8 local_57b8;
  undefined8 uStack_57b0;
  undefined **local_5768;
  undefined4 local_5760;
  undefined4 uStack_575c;
  undefined4 uStack_5758;
  undefined4 uStack_5754;
  undefined4 local_5750;
  undefined4 uStack_574c;
  undefined4 uStack_5748;
  undefined4 uStack_5744;
  undefined4 local_5740;
  undefined4 uStack_573c;
  undefined4 uStack_5738;
  undefined4 uStack_5734;
  longlong local_5730;
  undefined8 local_5728 [10];
  undefined4 local_56d8;
  undefined1 local_56d4;
  undefined8 local_56d0;
  longlong local_56c8;
  undefined8 local_56c0;
  undefined8 local_56b8;
  undefined8 uStack_56b0;
  undefined8 local_56a8;
  undefined **local_5698;
  undefined4 local_5690;
  undefined4 uStack_568c;
  undefined4 uStack_5688;
  undefined4 uStack_5684;
  undefined4 local_5680;
  undefined4 uStack_567c;
  undefined4 uStack_5678;
  undefined4 uStack_5674;
  undefined4 local_5670;
  undefined4 uStack_566c;
  undefined4 uStack_5668;
  undefined4 uStack_5664;
  longlong local_5660;
  undefined8 auStack_5658 [10];
  undefined4 local_5608;
  undefined1 local_5604;
  undefined8 local_5600;
  longlong local_55f8;
  undefined8 local_55f0;
  undefined4 local_55e8;
  undefined4 uStack_55e4;
  undefined4 uStack_55e0;
  undefined4 uStack_55dc;
  undefined4 local_55d8;
  undefined4 uStack_55d4;
  undefined4 uStack_55d0;
  undefined4 uStack_55cc;
  undefined8 local_55c8;
  undefined8 uStack_55c0;
  undefined1 local_55b8;
  undefined1 local_5558 [176];
  undefined1 local_54a8 [176];
  undefined1 local_53f8 [176];
  undefined1 local_5348 [176];
  undefined1 local_5298 [736];
  undefined8 local_4fb8;
  undefined8 uStack_4fb0;
  undefined4 local_4fa0;
  undefined8 local_4f9c;
  undefined8 uStack_4f94;
  undefined4 local_4f8c;
  undefined8 local_4f88;
  undefined8 uStack_4f80;
  undefined4 local_4f78;
  undefined4 local_4f74;
  undefined4 uStack_4f70;
  undefined4 uStack_4f6c;
  undefined4 uStack_4f68;
  undefined4 local_4f64;
  undefined8 local_4f60;
  undefined8 uStack_4f58;
  undefined4 local_4f50;
  undefined8 local_4f4c;
  undefined8 uStack_4f44;
  undefined4 local_4f3c;
  undefined4 local_4f38;
  undefined8 local_2568;
  undefined8 uStack_2560;
  undefined4 local_24d8;
  undefined4 uStack_24d4;
  undefined4 uStack_24d0;
  undefined4 uStack_24cc;
  undefined **local_24c8;
  undefined **local_2488 [2];
  undefined1 local_2478 [144];
  longlong *local_23e8;
  undefined **local_2108;
  undefined4 local_2100;
  undefined4 uStack_20fc;
  undefined4 uStack_20f8;
  undefined4 uStack_20f4;
  undefined4 local_20f0;
  undefined4 uStack_20ec;
  undefined4 uStack_20e8;
  undefined4 uStack_20e4;
  undefined4 local_20e0;
  undefined4 uStack_20dc;
  undefined4 uStack_20d8;
  undefined4 uStack_20d4;
  longlong local_20d0;
  undefined8 local_20c8 [10];
  undefined4 local_2078;
  undefined1 local_2074;
  undefined8 local_2070;
  longlong local_2068;
  undefined8 local_2060;
  undefined8 local_2058;
  undefined8 uStack_2050;
  undefined8 local_2048;
  undefined **local_2038;
  undefined4 local_2030;
  undefined4 uStack_202c;
  undefined4 uStack_2028;
  undefined4 uStack_2024;
  undefined4 local_2020;
  undefined4 uStack_201c;
  undefined4 uStack_2018;
  undefined4 uStack_2014;
  undefined4 local_2010;
  undefined4 uStack_200c;
  undefined4 uStack_2008;
  undefined4 uStack_2004;
  longlong local_2000;
  undefined8 local_1ff8 [10];
  undefined4 local_1fa8;
  undefined1 local_1fa4;
  undefined8 local_1fa0;
  longlong local_1f98;
  undefined8 local_1f90;
  undefined4 local_1f88;
  undefined4 uStack_1f84;
  undefined4 uStack_1f80;
  undefined4 uStack_1f7c;
  undefined4 local_1f78;
  undefined4 uStack_1f74;
  undefined4 uStack_1f70;
  undefined4 uStack_1f6c;
  undefined4 local_1f68;
  undefined4 uStack_1f64;
  undefined4 uStack_1f60;
  undefined4 uStack_1f5c;
  undefined1 local_1f58;
  undefined **local_1f48;
  undefined8 uStack_1f40;
  undefined1 local_1f38 [144];
  longlong *local_1ea8;
  undefined **local_1bc8;
  undefined4 local_1bc0;
  undefined4 uStack_1bbc;
  undefined4 uStack_1bb8;
  undefined4 uStack_1bb4;
  undefined4 local_1bb0;
  undefined4 uStack_1bac;
  undefined4 uStack_1ba8;
  undefined4 uStack_1ba4;
  undefined4 local_1ba0;
  undefined4 uStack_1b9c;
  undefined4 uStack_1b98;
  undefined4 uStack_1b94;
  longlong local_1b90;
  undefined8 local_1b88 [10];
  undefined4 local_1b38;
  undefined1 local_1b34;
  undefined8 local_1b30;
  longlong local_1b28;
  undefined8 local_1b20;
  undefined8 local_1b18;
  undefined8 uStack_1b10;
  undefined8 local_1b08;
  undefined **local_1af8;
  undefined4 local_1af0;
  undefined4 uStack_1aec;
  undefined4 uStack_1ae8;
  undefined4 uStack_1ae4;
  undefined4 local_1ae0;
  undefined4 uStack_1adc;
  undefined4 uStack_1ad8;
  undefined4 uStack_1ad4;
  undefined4 local_1ad0;
  undefined4 uStack_1acc;
  undefined4 uStack_1ac8;
  undefined4 uStack_1ac4;
  longlong local_1ac0;
  undefined8 auStack_1ab8 [10];
  undefined4 local_1a68;
  undefined1 local_1a64;
  undefined8 local_1a60;
  longlong local_1a58;
  undefined8 local_1a50;
  undefined4 local_1a48;
  undefined4 uStack_1a44;
  undefined4 uStack_1a40;
  undefined4 uStack_1a3c;
  undefined4 local_1a38;
  undefined4 uStack_1a34;
  undefined4 uStack_1a30;
  undefined4 uStack_1a2c;
  undefined4 local_1a28;
  undefined4 uStack_1a24;
  undefined4 uStack_1a20;
  undefined4 uStack_1a1c;
  undefined1 local_1a18;
  undefined **local_1a08 [20];
  longlong *local_1968;
  undefined **local_1698 [20];
  longlong *local_15f8;
  undefined **local_1328 [20];
  longlong *local_1288;
  undefined **local_fb8;
  undefined8 uStack_fb0;
  longlong *local_f18;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 local_434;
  longlong local_3f8 [111];
  ulonglong local_80;
  undefined8 uStack_48;
  
  uStack_48 = 0x1461d57b4;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_6178;
  uVar4 = *param_1;
  FUN_1446ddc76(&local_5dd0,"Button",1);
  local_6138 = FUN_141492734(uVar4,local_5dd0,0,0);
  uVar4 = *param_1;
  FUN_1446ddc76(&local_5dd8,"NoBorder",1);
  local_6120 = FUN_141492734(uVar4,local_5dd8,0,0);
  uVar4 = *param_1;
  FUN_1446ddc76(&local_5de0,"NormalText",1);
  local_6130 = FUN_140a57516(uVar4,local_5de0,0,0);
  plVar3 = (longlong *)*param_1;
  FUN_1446ddc76(&local_5e00,"SelectionColor",1);
  local_6158 = (undefined ***)&DAT_14c98de74;
  local_6150 = (undefined ***)0x0;
  (**(code **)(*plVar3 + 0x40))(plVar3,&local_5df4,local_5e00,0);
  plVar3 = (longlong *)*param_1;
  local_6140 = param_1;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_5ae8 = (undefined **)&DAT_3f8000003f800000;
  puStack_5ae0 = &DAT_3f8000003f800000;
  local_fb8 = (undefined **)0x3e0000003e000000;
  uStack_fb0 = 0x3e0000003e000000;
  (**(code **)(*plVar3 + 0xe8))(plVar3,&local_1f48,"Old/Menu_Background",&DAT_149eca162);
  local_6158 = (undefined ***)CONCAT44(local_6158._4_4_,1);
  FUN_1412cc804(uVar4,&local_1f48,&local_fb8,&local_5ae8);
  FUN_1446ddc76(&local_5e08,"Docking.Background",1);
  FUN_141639ee8(plVar3,local_5e08,uVar4);
  if (local_1f48 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  puVar10 = local_6140;
  uVar4 = *local_6140;
  uVar5 = FUN_14001cc68(0xb0,0x10);
  local_5ae8 = DAT_14c84635c;
  FUN_14154bc0c(uVar5,&DAT_14c98db9c,0x40800000);
  FUN_1446ddc76(&local_5e10,"Docking.Border",1);
  FUN_1414787f0(uVar4,local_5e10,uVar5);
  local_6128 = *puVar10;
  FUN_141478cf2(&local_5ae8,local_6138);
  local_1a08[0] = DAT_14c967f9c;
  (**(code **)(*(longlong *)*puVar10 + 0xe8))
            ((longlong *)*puVar10,local_3f8,"Starship/Docking/show-tab-well",L".svg");
  local_6150._0_4_ = 3;
  local_6158 = (undefined ***)((ulonglong)local_6158 & 0xffffffff00000000);
  FUN_14154bb44(&local_fb8,local_3f8,local_1a08,&DAT_14c98db10);
  local_fb8 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_5ad8,&local_fb8);
  local_5dc8 = DAT_14c967f9c;
  (**(code **)(*(longlong *)*puVar10 + 0xe8))
            ((longlong *)*puVar10,local_1328,"Starship/Docking/show-tab-well",L".svg");
  local_6150._0_4_ = 3;
  local_6158 = (undefined ***)((ulonglong)local_6158 & 0xffffffff00000000);
  FUN_14154bb44(&local_1f48,local_1328,&local_5dc8,&DAT_14c98dd18);
  local_1f48 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_5978,&local_1f48);
  local_5f48 = DAT_14c967f9c;
  (**(code **)(*(longlong *)*puVar10 + 0xe8))
            ((longlong *)*puVar10,local_1698,"Starship/Docking/show-tab-well",L".svg");
  local_6150 = (undefined ***)CONCAT44(local_6150._4_4_,3);
  local_6158 = (undefined ***)((ulonglong)local_6158 & 0xffffffff00000000);
  FUN_14154bb44(local_2488,local_1698,&local_5f48,&DAT_14c98dbec);
  local_2488[0] = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_5a28,local_2488);
  local_57c8 = 0;
  uStack_57c0 = 0;
  local_57b8 = 0;
  uStack_57b0 = 0;
  FUN_1446ddc76(&local_5e18,"Docking.UnhideTabwellButton",1);
  FUN_1414fd860(local_6128,local_5e18,&local_5ae8);
  plVar3 = local_23e8;
  local_2488[0] = &PTR_FUN_149ed05f0;
  if (local_23e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_23e8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_23e8)(local_23e8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_1698[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = local_1ea8;
  local_1f48 = &PTR_FUN_149ed05f0;
  if (local_1ea8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1ea8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1ea8)(local_1ea8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_1328[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = local_f18;
  local_fb8 = &PTR_FUN_149ed05f0;
  if (local_f18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_f18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_f18)(local_f18);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_3f8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140ffd6b6(&local_5ae8);
  FUN_140ca8d78(&local_5ae8);
  local_5dc8 = DAT_14c967fc4;
  (**(code **)(*(longlong *)*puVar10 + 0xe8))
            ((longlong *)*puVar10,local_1328,"Starship/Common/close-small",L".svg");
  local_6150._0_4_ = 3;
  local_6158 = (undefined ***)((ulonglong)local_6158 & 0xffffffff00000000);
  FUN_14154bb44(&local_fb8,local_1328,&local_5dc8,&DAT_14c98dac0);
  local_fb8 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_5ad8,&local_fb8);
  local_5f48 = DAT_14c967fc4;
  (**(code **)(*(longlong *)*local_6140 + 0xe8))
            ((longlong *)*local_6140,local_1698,"Starship/Common/close-small",L".svg");
  local_6150._0_4_ = 3;
  local_6158 = (undefined ***)((ulonglong)local_6158 & 0xffffffff00000000);
  FUN_14154bb44(&local_1f48,local_1698,&local_5f48,&DAT_14c98dac0);
  puVar10 = local_6140;
  local_1f48 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_5978,&local_1f48);
  local_5e30 = DAT_14c967fc4;
  plVar3 = (longlong *)*puVar10;
  (**(code **)(*plVar3 + 0xe8))(plVar3,local_1a08,"Starship/Common/close-small",L".svg");
  local_6150 = (undefined ***)CONCAT44(local_6150._4_4_,3);
  local_6158 = (undefined ***)((ulonglong)local_6158 & 0xffffffff00000000);
  FUN_14154bb44(local_2488,local_1a08,&local_5e30,&DAT_14c98db38);
  local_2488[0] = &PTR_FUN_149eeb468;
  FUN_140f13d9e(local_5a28,local_2488);
  FUN_141478cf2(local_3f8,&local_5ae8);
  plVar3 = local_23e8;
  local_2488[0] = &PTR_FUN_149ed05f0;
  if (local_23e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_23e8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_23e8)(local_23e8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_1a08[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = local_1ea8;
  local_1f48 = &PTR_FUN_149ed05f0;
  if (local_1ea8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1ea8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1ea8)(local_1ea8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_1698[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_fb8 = &PTR_FUN_149ed05f0;
  if (local_f18 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_f18 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_f18)(local_f18);
      LOCK();
      piVar2 = (int *)((longlong)local_f18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_f18 + 0x10))(local_f18);
      }
    }
  }
  if (local_1328[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  FUN_140ffd6b6(&local_5ae8);
  FUN_1461d8918(&local_5ae8);
  FUN_141254448(local_5ad8,local_3f8);
  local_5e20 = DAT_14c84635c;
  FUN_1412ce202(&local_1f48);
  FUN_140f13d9e(&local_5768,&local_1f48);
  FUN_1461d8850(&DAT_14c98db9c,&local_5e40);
  local_5e28 = local_5e38;
  local_5e30 = (undefined **)local_5e40;
  local_5e24 = 0x3f4ccccd;
  local_5e50 = 0x3e4ccccd3e4ccccd;
  uStack_5e48 = 0x3e4ccccd3e4ccccd;
  plVar3 = (longlong *)*puVar10;
  (**(code **)(*plVar3 + 0xe8))
            (plVar3,local_5e60,"/Starship/Docking/DockTab_Foreground",&DAT_149eca162);
  puVar10 = local_6140;
  local_6158._0_4_ = 1;
  FUN_1412cc804(local_2488,local_5e60,&local_5e50,&local_5e30);
  FUN_140f13d9e(local_54a8,local_2488);
  local_5e70 = 0x3e4ccccd3e4ccccd;
  uStack_5e68 = 0x3e4ccccd3e4ccccd;
  (**(code **)(*(longlong *)*puVar10 + 0xe8))
            ((longlong *)*puVar10,local_5e80,"/Starship/Docking/DockTab_Foreground",&DAT_149eca162);
  local_6158 = (undefined ***)CONCAT44(local_6158._4_4_,1);
  FUN_141478850(local_1328,local_5e80,&local_5e70,&DAT_14c98db9c);
  FUN_140f13d9e(local_5558,local_1328);
  local_5e88 = DAT_14c84635c;
  FUN_1412ce202(local_1698);
  FUN_140f13d9e(&local_56b8,local_1698);
  local_5e90 = DAT_14c84635c;
  FUN_1412ce202(local_1a08);
  FUN_140f13d9e(&local_5608,local_1a08);
  FUN_1411bc404(&local_5dc8,&DAT_14c98db9c);
  FUN_140f13d9e(local_53f8,&local_5dc8);
  FUN_1411bc404(&local_5f48,&DAT_14c98dc50);
  FUN_140f13d9e(local_5348,&local_5f48);
  local_4f9c = local_5df4;
  uStack_4f94 = uStack_5dec;
  local_4f8c = local_5de4;
  local_4fb8 = 0x4040000040800000;
  uStack_4fb0 = 0x4080000041200000;
  local_4fa0 = 0xc0000000;
  local_4f88 = CONCAT44(uRam000000014c98dac4,_DAT_14c98dac0);
  uStack_4f80 = CONCAT44(uRam000000014c98dacc,uRam000000014c98dac8);
  local_4f78 = DAT_14c98dad0;
  local_4f60 = CONCAT44(uRam000000014c98db3c,_DAT_14c98db38);
  uStack_4f58 = CONCAT44(uRam000000014c98db44,uRam000000014c98db40);
  local_4f50 = DAT_14c98db48;
  local_4f4c = CONCAT44(uRam000000014c98dac4,_DAT_14c98dac0);
  uStack_4f44 = CONCAT44(uRam000000014c98dacc,uRam000000014c98dac8);
  local_4f3c = DAT_14c98dad0;
  local_4f64 = DAT_14c98db48;
  local_4f74 = _DAT_14c98db38;
  uStack_4f70 = uRam000000014c98db3c;
  uStack_4f6c = uRam000000014c98db40;
  uStack_4f68 = uRam000000014c98db44;
  FUN_140a5e6b8(local_5298,local_6130);
  FUN_1461d8a2e(&local_fb8,&local_5ae8);
  plVar3 = local_5ea8;
  local_5f48 = &PTR_FUN_149ed05f0;
  if (local_5ea8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5ea8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5ea8)(local_5ea8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_5d28;
  local_5dc8 = &PTR_FUN_149ed05f0;
  if (plStack_5d28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_5d28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_5d28)(plStack_5d28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_1968;
  local_1a08[0] = &PTR_FUN_149ed05f0;
  if (local_1968 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1968 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1968)(local_1968);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_15f8;
  local_1698[0] = &PTR_FUN_149ed05f0;
  if (local_15f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_15f8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_15f8)(local_15f8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_1288;
  local_1328[0] = &PTR_FUN_149ed05f0;
  if (local_1288 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1288 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1288)(local_1288);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_5e80[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = local_23e8;
  local_2488[0] = &PTR_FUN_149ed05f0;
  if (local_23e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_23e8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_23e8)(local_23e8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_5e60[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = local_1ea8;
  local_1f48 = &PTR_FUN_149ed05f0;
  if (local_1ea8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1ea8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1ea8)(local_1ea8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_145b07012(&local_5ae8);
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_5f50,"Docking.Tab",1);
  FUN_141639f48(uVar4,local_5f50,&local_fb8);
  local_6138 = *puVar10;
  FUN_1461d8918(&local_5ae8);
  FUN_141254448(local_5ad8,local_3f8);
  local_5e20 = DAT_14c84635c;
  FUN_1412ce202(&local_1f48);
  FUN_140f13d9e(&local_5768,&local_1f48);
  FUN_1461d8850(&DAT_14c98db9c,&local_5e40);
  local_5e28 = local_5e38;
  local_5e30 = (undefined **)local_5e40;
  local_5e24 = 0x3f4ccccd;
  local_5e50 = 0x3e4ccccd3e4ccccd;
  uStack_5e48 = 0x3e4ccccd3e4ccccd;
  (**(code **)(*(longlong *)*puVar10 + 0xe8))
            ((longlong *)*puVar10,local_5e60,"/Starship/Docking/DockTab_Foreground",&DAT_149eca162);
  local_6158._0_4_ = 1;
  FUN_1412cc804(local_2488,local_5e60,&local_5e50,&local_5e30);
  FUN_140f13d9e(local_54a8,local_2488);
  local_5e70 = 0x3e4ccccd3e4ccccd;
  uStack_5e68 = 0x3e4ccccd3e4ccccd;
  (**(code **)(*(longlong *)*puVar10 + 0xe8))
            ((longlong *)*puVar10,local_5e80,"/Starship/Docking/DockTab_Foreground",&DAT_149eca162);
  local_6158 = (undefined ***)CONCAT44(local_6158._4_4_,1);
  FUN_141478850(local_1328,local_5e80,&local_5e70,&DAT_14c98db9c);
  FUN_140f13d9e(local_5558,local_1328);
  local_5e88 = DAT_14c84635c;
  FUN_1412ce202(local_1698);
  FUN_140f13d9e(&local_56b8,local_1698);
  local_5e90 = DAT_14c84635c;
  FUN_14154bc0c(local_1a08,&DAT_14c98dac0,0x40800000);
  FUN_140f13d9e(&local_5608,local_1a08);
  FUN_1411bc404(&local_5dc8,&DAT_14c98dc50);
  FUN_140f13d9e(local_53f8,&local_5dc8);
  FUN_1411bc404(&local_5f48,&DAT_14c98dc50);
  FUN_140f13d9e(local_5348,&local_5f48);
  local_4fb8 = 0x4080000040800000;
  uStack_4fb0 = 0x4080000041200000;
  local_4fa0 = 0xc0000000;
  local_4f9c = local_5df4;
  uStack_4f94 = uStack_5dec;
  local_4f8c = local_5de4;
  local_4f88 = CONCAT44(uRam000000014c98dac4,_DAT_14c98dac0);
  uStack_4f80 = CONCAT44(uRam000000014c98dacc,uRam000000014c98dac8);
  local_4f78 = DAT_14c98dad0;
  local_4f60 = CONCAT44(uRam000000014c98db50,_DAT_14c98db4c);
  uStack_4f58 = CONCAT44(uRam000000014c98db58,uRam000000014c98db54);
  local_4f50 = DAT_14c98db5c;
  local_4f3c = DAT_14c98db5c;
  local_4f64 = DAT_14c98db5c;
  local_4f74 = _DAT_14c98db4c;
  uStack_4f70 = uRam000000014c98db50;
  uStack_4f6c = uRam000000014c98db54;
  uStack_4f68 = uRam000000014c98db58;
  local_4f4c = local_4f60;
  uStack_4f44 = uStack_4f58;
  FUN_140a5e6b8(local_5298,local_6130);
  local_4f38 = 0x40800000;
  FUN_1446ddc76(&local_5f58,"Docking.MajorTab",1);
  FUN_141639f48(local_6138,local_5f58,&local_5ae8);
  local_5f48 = &PTR_FUN_149ed05f0;
  if (local_5ea8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_5ea8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_5ea8)(local_5ea8);
      LOCK();
      piVar2 = (int *)((longlong)local_5ea8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_5ea8 + 0x10))(local_5ea8);
      }
    }
  }
  plVar3 = plStack_5d28;
  uVar4 = local_6120;
  local_5dc8 = &PTR_FUN_149ed05f0;
  if (plStack_5d28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_5d28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_5d28)(plStack_5d28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  puVar10 = local_6140;
  local_1a08[0] = &PTR_FUN_149ed05f0;
  if (local_1968 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_1968 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_1968)(local_1968);
      LOCK();
      piVar2 = (int *)((longlong)local_1968 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1968 + 0x10))(local_1968);
      }
    }
  }
  local_1698[0] = &PTR_FUN_149ed05f0;
  if (local_15f8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_15f8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_15f8)(local_15f8);
      LOCK();
      piVar2 = (int *)((longlong)local_15f8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_15f8 + 0x10))(local_15f8);
      }
    }
  }
  local_1328[0] = &PTR_FUN_149ed05f0;
  if (local_1288 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_1288 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_1288)(local_1288);
      LOCK();
      piVar2 = (int *)((longlong)local_1288 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1288 + 0x10))(local_1288);
      }
    }
  }
  if (local_5e80[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = local_23e8;
  local_2488[0] = &PTR_FUN_149ed05f0;
  if (local_23e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_23e8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_23e8)(local_23e8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_5e60[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = local_1ea8;
  local_1f48 = &PTR_FUN_149ed05f0;
  if (local_1ea8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1ea8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1ea8)(local_1ea8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_145b07012(&local_5ae8);
  uVar5 = *puVar10;
  uVar6 = FUN_14001cc68(0xb0,0x10);
  local_5ae8 = DAT_14c84635c;
  FUN_1412ce202(uVar6,&local_5ae8);
  FUN_1446ddc76(&local_5f60,"Docking.Tab.ContentAreaBrush",1);
  FUN_141639e2e(uVar5,local_5f60,uVar6);
  uVar5 = *puVar10;
  uVar6 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar6,&DAT_14c98dae8);
  FUN_1446ddc76(&local_5f68,"Docking.Tab.InactiveTabSeparator",1);
  FUN_1411bc6ae(uVar5,local_5f68,uVar6);
  uVar5 = *puVar10;
  FUN_1446ddc76(&local_5f70,"Docking.Tab.ActiveTabIndicatorColor",1);
  FUN_1411bc70e(uVar5,local_5f70,&DAT_14c98db10);
  FUN_141478cf2(&local_5ae8,uVar4);
  FUN_1411bc404(&local_1f48,&DAT_14c98db9c);
  FUN_140f13d9e(local_5ad8,&local_1f48);
  FUN_1411bc404(local_2488,&DAT_14c98db9c);
  FUN_140f13d9e(local_5a28,local_2488);
  local_5818 = local_458;
  uStack_5810 = uStack_450;
  local_5808 = local_448;
  local_57f0 = local_458;
  uStack_57e8 = uStack_450;
  local_57e0 = local_448;
  local_5804 = local_444;
  uStack_5800 = uStack_440;
  uStack_57fc = uStack_43c;
  uStack_57f8 = uStack_438;
  local_57f4 = local_434;
  FUN_141478cf2(local_1328,&local_5ae8);
  plVar3 = local_23e8;
  local_2488[0] = &PTR_FUN_149ed05f0;
  if (local_23e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_23e8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_23e8)(local_23e8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_1ea8;
  local_1f48 = &PTR_FUN_149ed05f0;
  if (local_1ea8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1ea8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1ea8)(local_1ea8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_140ffd6b6(&local_5ae8);
  FUN_141478cf2(&local_5ae8,uVar4);
  local_1a08[0] = DAT_14c84635c;
  FUN_1412ce202(&local_1f48);
  FUN_140f13d9e(local_5ad8,&local_1f48);
  FUN_1411bc404(local_2488,&DAT_14c98db9c);
  FUN_140f13d9e(local_5a28,local_2488);
  local_5818 = local_458;
  uStack_5810 = uStack_450;
  local_5808 = local_448;
  local_57f0 = local_458;
  uStack_57e8 = uStack_450;
  local_57e0 = local_448;
  local_5804 = local_444;
  uStack_5800 = uStack_440;
  uStack_57fc = uStack_43c;
  uStack_57f8 = uStack_438;
  local_57f4 = local_434;
  FUN_141478cf2(local_1698,&local_5ae8);
  local_2488[0] = &PTR_FUN_149ed05f0;
  if (local_23e8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_23e8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_23e8)(local_23e8);
      LOCK();
      piVar2 = (int *)((longlong)local_23e8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_23e8 + 0x10))(local_23e8);
      }
    }
  }
  local_1f48 = &PTR_FUN_149ed05f0;
  if (local_1ea8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_1ea8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_1ea8)(local_1ea8);
      LOCK();
      piVar2 = (int *)((longlong)local_1ea8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1ea8 + 0x10))(local_1ea8);
      }
    }
  }
  FUN_140ffd6b6(&local_5ae8);
  uVar5 = *puVar10;
  FUN_1446ddc76(&local_5f78,"Docking.SidebarButton.Closed",1);
  FUN_1414fd860(uVar5,local_5f78,local_1698);
  uVar5 = *puVar10;
  FUN_1446ddc76(&local_5f80,"Docking.SidebarButton.Opened",1);
  FUN_1414fd860(uVar5,local_5f80,local_1328);
  plVar3 = (longlong *)*puVar10;
  uVar5 = FUN_14001cc68(0xb0,0x10);
  local_5ae8 = (undefined **)0x0;
  puStack_5ae0 = (undefined1 *)0x3f80000000000000;
  local_1f48 = (undefined **)0x3e0000003e000000;
  uStack_1f40 = 0x3e0000003e000000;
  (**(code **)(*plVar3 + 0xe8))(plVar3,local_2488,"/Starship/Docking/drawer-shadow",&DAT_149eca162);
  local_6158 = (undefined ***)CONCAT44(local_6158._4_4_,1);
  FUN_1412cc804(uVar5,local_2488,&local_1f48,&local_5ae8);
  FUN_1446ddc76(&local_5f88,"Docking.Sidebar.DrawerShadow",1);
  FUN_141639ee8(plVar3,local_5f88,uVar5);
  if (local_2488[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
  uVar5 = *puVar10;
  uVar6 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar6,&DAT_14c98db9c);
  FUN_1446ddc76(&local_5f90,"Docking.Sidebar.DrawerBackground",1);
  FUN_1411bc6ae(uVar5,local_5f90,uVar6);
  uVar5 = *puVar10;
  uVar6 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar6,&DAT_14c98dc50);
  FUN_1446ddc76(&local_5f98,"Docking.Sidebar.Background",1);
  FUN_1411bc6ae(uVar5,local_5f98,uVar6);
  FUN_141478cf2(&local_5ae8,uVar4);
  local_5818 = CONCAT44(uRam000000014c98dac4,_DAT_14c98dac0);
  uStack_5810 = CONCAT44(uRam000000014c98dacc,uRam000000014c98dac8);
  local_5808 = DAT_14c98dad0;
  local_57c8 = 0x4000000040000000;
  uStack_57c0 = 0x4000000040000000;
  local_57b8 = 0x4040000040000000;
  uStack_57b0 = 0x3f80000040000000;
  FUN_141478cf2(local_1a08,&local_5ae8);
  FUN_140ffd6b6(&local_5ae8);
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_5fa0,"SimpleComboButton",1);
  lVar7 = FUN_145a4e810(uVar4,local_5fa0,0,0);
  local_1f48 = &PTR_FUN_149ee3280;
  FUN_141478cf2(local_1f38,lVar7 + 0x10);
  local_1bc8 = &PTR_FUN_149ed05f0;
  local_1bc0 = *(undefined4 *)(lVar7 + 0x388);
  uStack_1bbc = *(undefined4 *)(lVar7 + 0x38c);
  uStack_1bb8 = *(undefined4 *)(lVar7 + 0x390);
  uStack_1bb4 = *(undefined4 *)(lVar7 + 0x394);
  local_1bb0 = *(undefined4 *)(lVar7 + 0x398);
  uStack_1bac = *(undefined4 *)(lVar7 + 0x39c);
  uStack_1ba8 = *(undefined4 *)(lVar7 + 0x3a0);
  uStack_1ba4 = *(undefined4 *)(lVar7 + 0x3a4);
  local_1ba0 = *(undefined4 *)(lVar7 + 0x3a8);
  uStack_1b9c = *(undefined4 *)(lVar7 + 0x3ac);
  uStack_1b98 = *(undefined4 *)(lVar7 + 0x3b0);
  uStack_1b94 = *(undefined4 *)(lVar7 + 0x3b4);
  local_1b90 = *(longlong *)(lVar7 + 0x3b8);
  if ((DAT_14c950c29 == 1) && (local_1b90 != 0)) {
    FUN_1456cec3c();
  }
  puVar8 = (undefined8 *)(lVar7 + 0x3c0);
  puVar11 = local_1b88;
  for (lVar9 = 10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  local_1b34 = *(undefined1 *)(lVar7 + 0x414);
  local_1b38 = *(undefined4 *)(lVar7 + 0x410);
  local_1b30 = *(undefined8 *)(lVar7 + 0x418);
  local_1b28 = *(longlong *)(lVar7 + 0x420);
  if (local_1b28 != 0) {
    LOCK();
    *(int *)(local_1b28 + 8) = *(int *)(local_1b28 + 8) + 1;
    UNLOCK();
  }
  local_1b20 = *(undefined8 *)(lVar7 + 0x428);
  local_1b18 = *(undefined8 *)(lVar7 + 0x430);
  uStack_1b10 = *(undefined8 *)(lVar7 + 0x438);
  local_1b08 = *(undefined8 *)(lVar7 + 0x440);
  local_1af8 = &PTR_FUN_149ed05f0;
  local_1af0 = *(undefined4 *)(lVar7 + 0x458);
  uStack_1aec = *(undefined4 *)(lVar7 + 0x45c);
  uStack_1ae8 = *(undefined4 *)(lVar7 + 0x460);
  uStack_1ae4 = *(undefined4 *)(lVar7 + 0x464);
  local_1ae0 = *(undefined4 *)(lVar7 + 0x468);
  uStack_1adc = *(undefined4 *)(lVar7 + 0x46c);
  uStack_1ad8 = *(undefined4 *)(lVar7 + 0x470);
  uStack_1ad4 = *(undefined4 *)(lVar7 + 0x474);
  local_1ad0 = *(undefined4 *)(lVar7 + 0x478);
  uStack_1acc = *(undefined4 *)(lVar7 + 0x47c);
  uStack_1ac8 = *(undefined4 *)(lVar7 + 0x480);
  uStack_1ac4 = *(undefined4 *)(lVar7 + 0x484);
  local_1ac0 = *(longlong *)(lVar7 + 0x488);
  if ((DAT_14c950c29 == 1) && (local_1ac0 != 0)) {
    FUN_1456cec3c();
  }
  puVar8 = (undefined8 *)(lVar7 + 0x490);
  puVar11 = auStack_1ab8;
  for (lVar9 = 10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  local_1a64 = *(undefined1 *)(lVar7 + 0x4e4);
  local_1a68 = *(undefined4 *)(lVar7 + 0x4e0);
  local_1a60 = *(undefined8 *)(lVar7 + 0x4e8);
  local_1a58 = *(longlong *)(lVar7 + 0x4f0);
  if (local_1a58 != 0) {
    LOCK();
    *(int *)(local_1a58 + 8) = *(int *)(local_1a58 + 8) + 1;
    UNLOCK();
  }
  local_1a50 = *(undefined8 *)(lVar7 + 0x4f8);
  local_1a48 = *(undefined4 *)(lVar7 + 0x500);
  uStack_1a44 = *(undefined4 *)(lVar7 + 0x504);
  uStack_1a40 = *(undefined4 *)(lVar7 + 0x508);
  uStack_1a3c = *(undefined4 *)(lVar7 + 0x50c);
  local_1a38 = *(undefined4 *)(lVar7 + 0x510);
  uStack_1a34 = *(undefined4 *)(lVar7 + 0x514);
  uStack_1a30 = *(undefined4 *)(lVar7 + 0x518);
  uStack_1a2c = *(undefined4 *)(lVar7 + 0x51c);
  local_1a28 = *(undefined4 *)(lVar7 + 0x520);
  uStack_1a24 = *(undefined4 *)(lVar7 + 0x524);
  uStack_1a20 = *(undefined4 *)(lVar7 + 0x528);
  uStack_1a1c = *(undefined4 *)(lVar7 + 0x52c);
  local_1a18 = *(undefined1 *)(lVar7 + 0x530);
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_5fa8,"ComboButton",1);
  lVar7 = FUN_145a4e810(uVar4,local_5fa8,0,0);
  local_5ae8 = &PTR_FUN_149ee3280;
  FUN_141478cf2(local_5ad8,lVar7 + 0x10);
  local_5768 = &PTR_FUN_149ed05f0;
  local_5760 = *(undefined4 *)(lVar7 + 0x388);
  uStack_575c = *(undefined4 *)(lVar7 + 0x38c);
  uStack_5758 = *(undefined4 *)(lVar7 + 0x390);
  uStack_5754 = *(undefined4 *)(lVar7 + 0x394);
  local_5750 = *(undefined4 *)(lVar7 + 0x398);
  uStack_574c = *(undefined4 *)(lVar7 + 0x39c);
  uStack_5748 = *(undefined4 *)(lVar7 + 0x3a0);
  uStack_5744 = *(undefined4 *)(lVar7 + 0x3a4);
  local_5740 = *(undefined4 *)(lVar7 + 0x3a8);
  uStack_573c = *(undefined4 *)(lVar7 + 0x3ac);
  uStack_5738 = *(undefined4 *)(lVar7 + 0x3b0);
  uStack_5734 = *(undefined4 *)(lVar7 + 0x3b4);
  local_5730 = *(longlong *)(lVar7 + 0x3b8);
  if ((DAT_14c950c29 == 1) && (local_5730 != 0)) {
    FUN_1456cec3c();
  }
  puVar10 = (undefined8 *)(lVar7 + 0x3c0);
  puVar8 = local_5728;
  for (lVar9 = 10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar8 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar8 = puVar8 + 1;
  }
  local_56d4 = *(undefined1 *)(lVar7 + 0x414);
  local_56d8 = *(undefined4 *)(lVar7 + 0x410);
  local_56d0 = *(undefined8 *)(lVar7 + 0x418);
  local_56c8 = *(longlong *)(lVar7 + 0x420);
  if (local_56c8 != 0) {
    LOCK();
    *(int *)(local_56c8 + 8) = *(int *)(local_56c8 + 8) + 1;
    UNLOCK();
  }
  local_56c0 = *(undefined8 *)(lVar7 + 0x428);
  local_56b8 = *(undefined8 *)(lVar7 + 0x430);
  uStack_56b0 = *(undefined8 *)(lVar7 + 0x438);
  local_56a8 = *(undefined8 *)(lVar7 + 0x440);
  local_5698 = &PTR_FUN_149ed05f0;
  local_5690 = *(undefined4 *)(lVar7 + 0x458);
  uStack_568c = *(undefined4 *)(lVar7 + 0x45c);
  uStack_5688 = *(undefined4 *)(lVar7 + 0x460);
  uStack_5684 = *(undefined4 *)(lVar7 + 0x464);
  local_5680 = *(undefined4 *)(lVar7 + 0x468);
  uStack_567c = *(undefined4 *)(lVar7 + 0x46c);
  uStack_5678 = *(undefined4 *)(lVar7 + 0x470);
  uStack_5674 = *(undefined4 *)(lVar7 + 0x474);
  local_5670 = *(undefined4 *)(lVar7 + 0x478);
  uStack_566c = *(undefined4 *)(lVar7 + 0x47c);
  uStack_5668 = *(undefined4 *)(lVar7 + 0x480);
  uStack_5664 = *(undefined4 *)(lVar7 + 0x484);
  local_5660 = *(longlong *)(lVar7 + 0x488);
  if ((DAT_14c950c29 == 1) && (local_5660 != 0)) {
    FUN_1456cec3c();
  }
  puVar10 = (undefined8 *)(lVar7 + 0x490);
  puVar8 = auStack_5658;
  for (lVar9 = 10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar8 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar8 = puVar8 + 1;
  }
  local_5604 = *(undefined1 *)(lVar7 + 0x4e4);
  local_5608 = *(undefined4 *)(lVar7 + 0x4e0);
  local_5600 = *(undefined8 *)(lVar7 + 0x4e8);
  local_55f8 = *(longlong *)(lVar7 + 0x4f0);
  if (local_55f8 != 0) {
    LOCK();
    *(int *)(local_55f8 + 8) = *(int *)(local_55f8 + 8) + 1;
    UNLOCK();
  }
  local_55f0 = *(undefined8 *)(lVar7 + 0x4f8);
  local_55e8 = *(undefined4 *)(lVar7 + 0x500);
  uStack_55e4 = *(undefined4 *)(lVar7 + 0x504);
  uStack_55e0 = *(undefined4 *)(lVar7 + 0x508);
  uStack_55dc = *(undefined4 *)(lVar7 + 0x50c);
  local_55d8 = *(undefined4 *)(lVar7 + 0x510);
  uStack_55d4 = *(undefined4 *)(lVar7 + 0x514);
  uStack_55d0 = *(undefined4 *)(lVar7 + 0x518);
  uStack_55cc = *(undefined4 *)(lVar7 + 0x51c);
  local_55c8 = *(undefined8 *)(lVar7 + 0x520);
  uStack_55c0 = *(undefined8 *)(lVar7 + 0x528);
  local_55b8 = *(undefined1 *)(lVar7 + 0x530);
  local_5f48 = (undefined **)&DAT_3f8000003f800000;
  puStack_5f40 = &DAT_3f8000003f800000;
  local_5e40 = 0x41c0000040c00000;
  (**(code **)(*(longlong *)*local_6140 + 0xe8))
            ((longlong *)*local_6140,&local_5e30,"Starship/Common/ellipsis-vertical-narrow",L".svg")
  ;
  local_6150 = (undefined ***)CONCAT44(local_6150._4_4_,3);
  local_6158 = (undefined ***)((ulonglong)local_6158 & 0xffffffff00000000);
  FUN_14140806a(&local_5dc8,&local_5e30,&local_5e40,&local_5f48);
  local_5dc8 = &PTR_FUN_149eeb468;
  FUN_140f13d9e(&local_5768,&local_5dc8);
  FUN_141254448(local_5ad8,local_1a08);
  local_55c8 = 0;
  uStack_55c0 = 0;
  local_55b8 = 3;
  local_2488[0] = &PTR_FUN_149ee3280;
  FUN_141478cf2(local_2478,local_5ad8);
  local_2108 = &PTR_FUN_149ed05f0;
  local_2100 = local_5760;
  uStack_20fc = uStack_575c;
  uStack_20f8 = uStack_5758;
  uStack_20f4 = uStack_5754;
  local_20f0 = local_5750;
  uStack_20ec = uStack_574c;
  uStack_20e8 = uStack_5748;
  uStack_20e4 = uStack_5744;
  local_20e0 = local_5740;
  uStack_20dc = uStack_573c;
  uStack_20d8 = uStack_5738;
  uStack_20d4 = uStack_5734;
  local_20d0 = local_5730;
  if ((local_5730 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar10 = local_6140;
  puVar8 = local_5728;
  puVar11 = local_20c8;
  for (lVar7 = 10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  local_2074 = local_56d4;
  local_2078 = local_56d8;
  local_2070 = local_56d0;
  local_2068 = local_56c8;
  if (local_56c8 != 0) {
    LOCK();
    *(int *)(local_56c8 + 8) = *(int *)(local_56c8 + 8) + 1;
    UNLOCK();
  }
  local_2060 = local_56c0;
  local_2058 = local_56b8;
  uStack_2050 = uStack_56b0;
  local_2048 = local_56a8;
  local_2038 = &PTR_FUN_149ed05f0;
  local_2030 = local_5690;
  uStack_202c = uStack_568c;
  uStack_2028 = uStack_5688;
  uStack_2024 = uStack_5684;
  local_2020 = local_5680;
  uStack_201c = uStack_567c;
  uStack_2018 = uStack_5678;
  uStack_2014 = uStack_5674;
  local_2010 = local_5670;
  uStack_200c = uStack_566c;
  uStack_2008 = uStack_5668;
  uStack_2004 = uStack_5664;
  local_2000 = local_5660;
  if ((local_5660 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  plVar3 = plStack_5d28;
  puVar8 = auStack_5658;
  puVar11 = local_1ff8;
  for (lVar7 = 10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  local_1fa4 = local_5604;
  local_1fa8 = local_5608;
  local_1fa0 = local_5600;
  local_1f98 = local_55f8;
  if (local_55f8 != 0) {
    LOCK();
    *(int *)(local_55f8 + 8) = *(int *)(local_55f8 + 8) + 1;
    UNLOCK();
  }
  local_1f90 = local_55f0;
  local_1f88 = local_55e8;
  uStack_1f84 = uStack_55e4;
  uStack_1f80 = uStack_55e0;
  uStack_1f7c = uStack_55dc;
  local_1f78 = local_55d8;
  uStack_1f74 = uStack_55d4;
  uStack_1f70 = uStack_55d0;
  uStack_1f6c = uStack_55cc;
  local_1f68 = (undefined4)local_55c8;
  uStack_1f64 = local_55c8._4_4_;
  uStack_1f60 = (undefined4)uStack_55c0;
  uStack_1f5c = uStack_55c0._4_4_;
  local_1f58 = local_55b8;
  local_5dc8 = &PTR_FUN_149ed05f0;
  if (plStack_5d28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_5d28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_5d28)(plStack_5d28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_5e30 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  FUN_140ffd624(&local_5ae8);
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_5fb0,"StatusBar.StatusBarButton",1);
  FUN_1414fd860(uVar4,local_5fb0,local_1a08);
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_5fb8,"StatusBar.StatusBarComboButton",1);
  FUN_1416427d0(uVar4,local_5fb8,&local_1f48);
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_5fc0,"StatusBar.StatusBarEllipsisComboButton",1);
  FUN_1416427d0(uVar4,local_5fc0,local_2488);
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_5fc8,"StatusBar.Height",1);
  FUN_141478a72(uVar4,local_5fc8,0x42000000);
  plVar3 = (longlong *)*puVar10;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_5ae8 = (undefined **)0x0;
  puStack_5ae0 = (undefined1 *)0x3f80000000000000;
  local_5dc8 = (undefined **)0x3ea000003e200000;
  puStack_5dc0 = (undefined1 *)0x3e200000;
  (**(code **)(*plVar3 + 0xe8))
            (plVar3,&local_5f48,"Starship/StatusBar/drawer-shadow-bottom",&DAT_149eca162);
  local_6158 = (undefined ***)CONCAT44(local_6158._4_4_,1);
  FUN_1412cc804(uVar4,&local_5f48,&local_5dc8,&local_5ae8);
  FUN_1446ddc76(&local_5fd0,"StatusBar.DrawerShadow",1);
  FUN_141639ee8(plVar3,local_5fd0,uVar4);
  if (local_5f48 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *puVar10;
  uVar5 = FUN_14001cc68(0xb0,0x10);
  local_5ae8 = DAT_14c84635c;
  FUN_14154bc0c(uVar5,&DAT_14c98db9c,0x40a00000,&local_5ae8);
  FUN_1446ddc76(&local_5fd8,"StatusBar.DrawerBackground",1);
  FUN_1414787f0(uVar4,local_5fd8,uVar5);
  uVar4 = *puVar10;
  uVar5 = FUN_14001cc68(0xb0,0x10);
  FUN_1411bc404(uVar5,&DAT_14c98db9c);
  FUN_1446ddc76(&local_5fe0,"StatusBar.Background",1);
  FUN_1411bc6ae(uVar4,local_5fe0,uVar5);
  uVar4 = *puVar10;
  uVar5 = FUN_14001cc68(0xb0,0x10);
  local_5ae8 = (undefined **)0x4100000041a00000;
  local_6158._0_4_ = 0x3f800000;
  local_6150 = &local_5ae8;
  FUN_1414fd764(uVar5,&DAT_14c98db24,0x40000000,&DAT_14c98db9c);
  FUN_1446ddc76(&local_5fe8,"StatusBar.ProgressOverlay",1);
  FUN_1414787f0(uVar4,local_5fe8,uVar5);
  plVar3 = (longlong *)*puVar10;
  puVar8 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
  local_5dc8 = DAT_14c967fc4;
  (**(code **)(*plVar3 + 0xe8))(plVar3,&local_5ae8,"Starship/Common/help",L".svg");
  local_6150 = (undefined ***)CONCAT44(local_6150._4_4_,3);
  local_6158 = (undefined ***)((ulonglong)local_6158._4_4_ << 0x20);
  FUN_14154bb44(puVar8,&local_5ae8,&local_5dc8,&DAT_14c98dac0);
  *puVar8 = &PTR_FUN_149eeb468;
  FUN_1446ddc76(&local_5ff0,"StatusBar.HelpIcon",1);
  FUN_1415bbd06(plVar3,local_5ff0,puVar8);
  if (local_5ae8 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_5ff8,"SlimToolBar",1);
  uVar4 = FUN_1461d88a6(uVar4,local_5ff8,0,0);
  FUN_145a4eab8(&local_5ae8,uVar4);
  local_5f48 = DAT_14c84635c;
  FUN_1412ce202(&local_5dc8);
  FUN_140f13d9e(local_5ad8,&local_5dc8);
  local_5dc8 = &PTR_FUN_149ed05f0;
  if (plStack_5d28 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_5d28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_5d28)(plStack_5d28);
      LOCK();
      piVar2 = (int *)((longlong)plStack_5d28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plStack_5d28 + 0x10))(plStack_5d28);
      }
    }
  }
  local_2568 = 0x40a0000040a00000;
  uStack_2560 = 0x40a0000000000000;
  local_24c8 = DAT_14c967fc4;
  local_24d8 = 0x40800000;
  uStack_24d4 = 0x40800000;
  uStack_24d0 = 0x40800000;
  uStack_24cc = 0x40800000;
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_6000,"StatusBarToolBar",1);
  FUN_141478970(uVar4,local_6000,&local_5ae8);
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_6008,"NormalText",1);
  uVar5 = FUN_140a57516(uVar4,local_6008,0,0);
  FUN_140e9ea3a(&local_5dc8,uVar5);
  local_5d60 = _DAT_14c98dac0;
  uStack_5d5c = uRam000000014c98dac4;
  uStack_5d58 = uRam000000014c98dac8;
  uStack_5d54 = uRam000000014c98dacc;
  local_5d50 = DAT_14c98dad0;
  FUN_1446ddc76(&local_6010,"StatusBar.Message.MessageText",1);
  FUN_1412cc702(uVar4,local_6010,&local_5dc8);
  FUN_140e9e952(&local_5dc8);
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_6018,"NormalText",1);
  uVar5 = FUN_140a57516(uVar4,local_6018,0,0);
  FUN_140e9ea3a(&local_5dc8,uVar5);
  local_5d60 = _DAT_14c98db10;
  uStack_5d5c = uRam000000014c98db14;
  uStack_5d58 = uRam000000014c98db18;
  uStack_5d54 = uRam000000014c98db1c;
  local_5d50 = DAT_14c98db20;
  FUN_1446ddc76(&local_6020,"StatusBar.Message.HintText",1);
  FUN_1412cc702(uVar4,local_6020,&local_5dc8);
  FUN_140e9e952(&local_5dc8);
  uVar4 = *puVar10;
  uVar5 = FUN_14001cc68(0xb0,0x10);
  local_5dc8 = DAT_14c84635c;
  local_6158 = (undefined ***)CONCAT44(local_6158._4_4_,0x3f800000);
  local_6150 = &local_5dc8;
  FUN_1414fd764(uVar5,&DAT_14c98db24,0x40a00000,&DAT_14c98dae8);
  FUN_1446ddc76(&local_6028,"Docking.Sidebar.Border",1);
  FUN_1414787f0(uVar4,local_6028,uVar5);
  uVar4 = *puVar10;
  uVar5 = FUN_14001cc68(0xb0,0x10);
  local_5dc8 = DAT_14c84635c;
  local_6048 = 0;
  local_6040 = 0x4014000000000000;
  local_6038 = 0x4014000000000000;
  local_6030 = 0;
  local_6158 = &local_5dc8;
  FUN_145a4e9d8(uVar5,&DAT_14c98db24,&local_6048,&DAT_14c98dae8);
  FUN_1446ddc76(&local_6050,"Docking.Sidebar.Border_SquareLeft",1);
  FUN_1414787f0(uVar4,local_6050,uVar5);
  uVar4 = *local_6140;
  uVar5 = FUN_14001cc68(0xb0,0x10);
  puVar10 = local_6140;
  local_5dc8 = DAT_14c84635c;
  local_6078 = 0x4014000000000000;
  local_6070 = 0;
  uStack_6068 = 0;
  local_6060 = 0x4014000000000000;
  local_6158 = &local_5dc8;
  FUN_145a4e9d8(uVar5,&DAT_14c98db24,&local_6078,&DAT_14c98dae8);
  FUN_1446ddc76(&local_6080,"Docking.Sidebar.Border_SquareRight",1);
  FUN_1414787f0(uVar4,local_6080,uVar5);
  plVar3 = (longlong *)*puVar10;
  puVar8 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
  local_5dc8 = (undefined **)&DAT_3f8000003f800000;
  puStack_5dc0 = &DAT_3f8000003f800000;
  local_5e30 = DAT_14c967fac;
  (**(code **)(*plVar3 + 0xe8))(plVar3,&local_5f48,"Starship/Docking/pin",L".svg");
  local_6150 = (undefined ***)CONCAT44(local_6150._4_4_,3);
  local_6158 = (undefined ***)((ulonglong)local_6158 & 0xffffffff00000000);
  FUN_14140806a(puVar8,&local_5f48,&local_5e30,&local_5dc8);
  *puVar8 = &PTR_FUN_149eeb468;
  FUN_1446ddc76(&local_6088,"Docking.Sidebar.PinTabIcon",1);
  FUN_1415bbd06(plVar3,local_6088,puVar8);
  if (local_5f48 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)*puVar10;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_5dc8 = (undefined **)0x3eb333333f800000;
  puStack_5dc0 = (undefined1 *)0x3e80000000000000;
  local_5e30 = (undefined **)0x40c0000040c00000;
  (**(code **)(*plVar3 + 0xe8))(plVar3,&local_5f48,"/Docking/OuterDockingIndicator",&DAT_149eca162);
  local_6150 = (undefined ***)CONCAT44(local_6150._4_4_,1);
  local_6158 = (undefined ***)((ulonglong)local_6158 & 0xffffffff00000000);
  FUN_14140806a(uVar4,&local_5f48,&local_5e30,&local_5dc8);
  FUN_1446ddc76(&local_6090,"Docking.Cross.DockLeft",1);
  FUN_141408132(plVar3,local_6090,uVar4);
  if (local_5f48 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)*puVar10;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_5dc8 = (undefined **)0x3eb333333f800000;
  puStack_5dc0 = (undefined1 *)0x3f80000000000000;
  local_5e30 = (undefined **)0x40c0000040c00000;
  (**(code **)(*plVar3 + 0xe8))(plVar3,&local_5f48,"/Docking/OuterDockingIndicator",&DAT_149eca162);
  local_6150 = (undefined ***)CONCAT44(local_6150._4_4_,1);
  local_6158 = (undefined ***)((ulonglong)local_6158 & 0xffffffff00000000);
  FUN_14140806a(uVar4,&local_5f48,&local_5e30,&local_5dc8);
  FUN_1446ddc76(&local_6098,"Docking.Cross.DockLeft_Hovered",1);
  FUN_141408132(plVar3,local_6098,uVar4);
  if (local_5f48 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)*puVar10;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_5dc8 = (undefined **)0x3eb333333f800000;
  puStack_5dc0 = (undefined1 *)0x3e80000000000000;
  local_5e30 = (undefined **)0x40c0000040c00000;
  (**(code **)(*plVar3 + 0xe8))(plVar3,&local_5f48,"/Docking/OuterDockingIndicator",&DAT_149eca162);
  local_6150 = (undefined ***)CONCAT44(local_6150._4_4_,1);
  local_6158 = (undefined ***)((ulonglong)local_6158 & 0xffffffff00000000);
  FUN_14140806a(uVar4,&local_5f48,&local_5e30,&local_5dc8);
  FUN_1446ddc76(&local_60a0,"Docking.Cross.DockTop",1);
  FUN_141408132(plVar3,local_60a0,uVar4);
  if (local_5f48 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)*puVar10;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_5dc8 = (undefined **)0x3eb333333f800000;
  puStack_5dc0 = (undefined1 *)0x3f80000000000000;
  local_5e30 = (undefined **)0x40c0000040c00000;
  (**(code **)(*plVar3 + 0xe8))(plVar3,&local_5f48,"/Docking/OuterDockingIndicator",&DAT_149eca162);
  local_6150 = (undefined ***)CONCAT44(local_6150._4_4_,1);
  local_6158 = (undefined ***)((ulonglong)local_6158 & 0xffffffff00000000);
  FUN_14140806a(uVar4,&local_5f48,&local_5e30,&local_5dc8);
  FUN_1446ddc76(&local_60a8,"Docking.Cross.DockTop_Hovered",1);
  FUN_141408132(plVar3,local_60a8,uVar4);
  if (local_5f48 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)*puVar10;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_5dc8 = (undefined **)0x3eb333333f800000;
  puStack_5dc0 = (undefined1 *)0x3e80000000000000;
  local_5e30 = (undefined **)0x40c0000040c00000;
  (**(code **)(*plVar3 + 0xe8))(plVar3,&local_5f48,"/Docking/OuterDockingIndicator",&DAT_149eca162);
  local_6150 = (undefined ***)CONCAT44(local_6150._4_4_,1);
  local_6158 = (undefined ***)((ulonglong)local_6158 & 0xffffffff00000000);
  FUN_14140806a(uVar4,&local_5f48,&local_5e30,&local_5dc8);
  FUN_1446ddc76(&local_60b0,"Docking.Cross.DockRight",1);
  FUN_141408132(plVar3,local_60b0,uVar4);
  if (local_5f48 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)*puVar10;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_5dc8 = (undefined **)0x3eb333333f800000;
  puStack_5dc0 = (undefined1 *)0x3f80000000000000;
  local_5e30 = (undefined **)0x40c0000040c00000;
  (**(code **)(*plVar3 + 0xe8))(plVar3,&local_5f48,"/Docking/OuterDockingIndicator",&DAT_149eca162);
  local_6150 = (undefined ***)CONCAT44(local_6150._4_4_,1);
  local_6158 = (undefined ***)((ulonglong)local_6158 & 0xffffffff00000000);
  FUN_14140806a(uVar4,&local_5f48,&local_5e30,&local_5dc8);
  FUN_1446ddc76(&local_60b8,"Docking.Cross.DockRight_Hovered",1);
  FUN_141408132(plVar3,local_60b8,uVar4);
  if (local_5f48 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)*puVar10;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_5dc8 = (undefined **)0x3eb333333f800000;
  puStack_5dc0 = (undefined1 *)0x3e80000000000000;
  local_5e30 = (undefined **)0x40c0000040c00000;
  (**(code **)(*plVar3 + 0xe8))(plVar3,&local_5f48,"/Docking/OuterDockingIndicator",&DAT_149eca162);
  local_6150 = (undefined ***)CONCAT44(local_6150._4_4_,1);
  local_6158 = (undefined ***)((ulonglong)local_6158 & 0xffffffff00000000);
  FUN_14140806a(uVar4,&local_5f48,&local_5e30,&local_5dc8);
  FUN_1446ddc76(&local_60c0,"Docking.Cross.DockBottom",1);
  FUN_141408132(plVar3,local_60c0,uVar4);
  if (local_5f48 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)*puVar10;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_5dc8 = (undefined **)0x3eb333333f800000;
  puStack_5dc0 = (undefined1 *)0x3f80000000000000;
  local_5e30 = (undefined **)0x40c0000040c00000;
  (**(code **)(*plVar3 + 0xe8))(plVar3,&local_5f48,"/Docking/OuterDockingIndicator",&DAT_149eca162);
  local_6150 = (undefined ***)CONCAT44(local_6150._4_4_,1);
  local_6158 = (undefined ***)((ulonglong)local_6158 & 0xffffffff00000000);
  FUN_14140806a(uVar4,&local_5f48,&local_5e30,&local_5dc8);
  FUN_1446ddc76(&local_60c8,"Docking.Cross.DockBottom_Hovered",1);
  FUN_141408132(plVar3,local_60c8,uVar4);
  if (local_5f48 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)*puVar10;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_5dc8 = (undefined **)0x3eb333333f800000;
  puStack_5dc0 = (undefined1 *)0x3e80000000000000;
  local_5e30 = DAT_14c96800c;
  (**(code **)(*plVar3 + 0xe8))
            (plVar3,&local_5f48,"/Docking/DockingIndicator_Center",&DAT_149eca162);
  local_6150 = (undefined ***)CONCAT44(local_6150._4_4_,1);
  local_6158 = (undefined ***)((ulonglong)local_6158 & 0xffffffff00000000);
  FUN_14140806a(uVar4,&local_5f48,&local_5e30,&local_5dc8);
  FUN_1446ddc76(&local_60d0,"Docking.Cross.DockCenter",1);
  FUN_141408132(plVar3,local_60d0,uVar4);
  if (local_5f48 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)*puVar10;
  uVar4 = FUN_14001cc68(0xb0,0x10);
  local_5dc8 = (undefined **)0x3eb333333f800000;
  puStack_5dc0 = (undefined1 *)0x3f80000000000000;
  local_5e30 = DAT_14c96800c;
  (**(code **)(*plVar3 + 0xe8))
            (plVar3,&local_5f48,"/Docking/DockingIndicator_Center",&DAT_149eca162);
  local_6150 = (undefined ***)CONCAT44(local_6150._4_4_,1);
  local_6158 = (undefined ***)((ulonglong)local_6158 & 0xffffffff00000000);
  FUN_14140806a(uVar4,&local_5f48,&local_5e30,&local_5dc8);
  FUN_1446ddc76(&local_60d8,"Docking.Cross.DockCenter_Hovered",1);
  FUN_141408132(plVar3,local_60d8,uVar4);
  if (local_5f48 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *puVar10;
  uVar5 = FUN_14001cc68(0xb0,0x10);
  local_5dc8 = DAT_14c84635c;
  FUN_1412ce202(uVar5,&local_5dc8);
  FUN_1446ddc76(&local_60e0,"Docking.Cross.BorderLeft",1);
  FUN_141639e2e(uVar4,local_60e0,uVar5);
  uVar4 = *puVar10;
  uVar5 = FUN_14001cc68(0xb0,0x10);
  local_5dc8 = DAT_14c84635c;
  FUN_1412ce202(uVar5,&local_5dc8);
  FUN_1446ddc76(&local_60e8,"Docking.Cross.BorderTop",1);
  FUN_141639e2e(uVar4,local_60e8,uVar5);
  uVar4 = *puVar10;
  uVar5 = FUN_14001cc68(0xb0,0x10);
  local_5dc8 = DAT_14c84635c;
  FUN_1412ce202(uVar5,&local_5dc8);
  FUN_1446ddc76(&local_60f0,"Docking.Cross.BorderRight",1);
  FUN_141639e2e(uVar4,local_60f0,uVar5);
  uVar4 = *puVar10;
  uVar5 = FUN_14001cc68(0xb0,0x10);
  local_5dc8 = DAT_14c84635c;
  FUN_1412ce202(uVar5,&local_5dc8);
  FUN_1446ddc76(&local_60f8,"Docking.Cross.BorderBottom",1);
  FUN_141639e2e(uVar4,local_60f8,uVar5);
  uVar4 = *puVar10;
  uVar5 = FUN_14001cc68(0xb0,0x10);
  local_5dc8 = DAT_14c84635c;
  FUN_1412ce202(uVar5,&local_5dc8);
  FUN_1446ddc76(&local_6100,"Docking.Cross.BorderCenter",1);
  FUN_141639e2e(uVar4,local_6100,uVar5);
  uVar4 = *puVar10;
  local_5dc8 = (undefined **)0x3f4000003f800000;
  puStack_5dc0 = (undefined1 *)0x3f8000003f000000;
  FUN_1446ddc76(&local_6108,"Docking.Cross.PreviewWindowTint",1);
  FUN_141639e8e(uVar4,local_6108,&local_5dc8);
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_6110,"Docking.Cross.Tint",1);
  FUN_141639e8e(uVar4,local_6110,&DAT_149e1e2f8);
  uVar4 = *puVar10;
  FUN_1446ddc76(&local_6118,"Docking.Cross.HoveredTint",1);
  FUN_141639e8e(uVar4,local_6118,&DAT_149e1e2f8);
  FUN_140ffd4ee(&local_5ae8);
  FUN_140ffd624(local_2488);
  FUN_140ffd624(&local_1f48);
  FUN_140ffd6b6(local_1a08);
  FUN_140ffd6b6(local_1698);
  FUN_140ffd6b6(local_1328);
  FUN_145b07012(&local_fb8);
  FUN_140ffd6b6(local_3f8);
  if ((local_80 ^ (ulonglong)auStack_6178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d8850 FUN_1461d8850 body=86 status=ok
// SIG undefined FUN_1461d8850(void)

undefined8 * FUN_1461d8850(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 2) == '\x01') {
    lVar2 = FUN_1400c0742();
    lVar3 = *(longlong *)(lVar2 + 0x110);
    if (lVar3 == 0) {
      FUN_140aa6c08(lVar2);
      lVar3 = *(longlong *)(lVar2 + 0x110);
    }
    param_1 = (undefined8 *)(lVar3 + (ulonglong)*(byte *)((longlong)param_1 + 0x11) * 0x10 + 0x38);
  }
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1461d88a6 FUN_1461d88a6 body=113 status=ok
// SIG undefined FUN_1461d88a6(void)

void FUN_1461d88a6(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141160160(&local_28);
  local_38 = 1;
  lVar1 = (**(code **)(*param_1 + 0x98))(param_1,DAT_14c98de30,local_28,param_4);
  if (lVar1 == 0) {
    FUN_146973526();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d8918 FUN_1461d8918 body=277 status=ok
// SIG undefined FUN_1461d8918(void)

undefined8 * FUN_1461d8918(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_149eeb890;
  FUN_140ca8d78(param_1 + 2);
  FUN_140ca8f8e(param_1 + 0x70);
  FUN_140ca8f8e(param_1 + 0x86);
  FUN_140ca8f8e(param_1 + 0x9c);
  FUN_140ca8f8e(param_1 + 0xb2);
  FUN_140ca8f8e(param_1 + 200);
  FUN_140ca8f8e(param_1 + 0xde);
  FUN_140ca8f8e(param_1 + 0xf4);
  uVar1 = FUN_140a5e2a8();
  FUN_140e9ea3a(param_1 + 0x10a,uVar1);
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x168] = 0x4180000041800000;
  param_1[0x169] = 0x3f80000000000000;
  param_1[0x16a] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x16b) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xb5c) = 0;
  param_1[0x16c] = 0x3f800000;
  param_1[0x16d] = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0x16e) = 2;
  *(undefined8 *)((longlong)param_1 + 0xb74) = 0x3f800000;
  *(undefined1 **)((longlong)param_1 + 0xb7c) = &DAT_3f8000003f800000;
  *(undefined2 *)((longlong)param_1 + 0xb84) = 2;
  param_1[0x171] = 0x3f800000;
  param_1[0x172] = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0x173) = 2;
  *(undefined8 *)((longlong)param_1 + 0xb9c) = 0x3f800000;
  *(undefined1 **)((longlong)param_1 + 0xba4) = &DAT_3f8000003f800000;
  *(undefined2 *)((longlong)param_1 + 0xbac) = 2;
  *(undefined4 *)(param_1 + 0x176) = 0x3f800000;
  return param_1;
}



// FUNCTION 1461d8a2e FUN_1461d8a2e body=207 status=ok
// SIG undefined FUN_1461d8a2e(void)

undefined8 * FUN_1461d8a2e(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_FUN_149eeb890;
  FUN_141478cf2(param_1 + 2,param_2 + 0x10);
  FUN_140e361c2(param_1 + 0x70,param_2 + 0x380);
  FUN_140e361c2(param_1 + 0x86,param_2 + 0x430);
  FUN_140e361c2(param_1 + 0x9c,param_2 + 0x4e0);
  FUN_140e361c2(param_1 + 0xb2,param_2 + 0x590);
  FUN_140e361c2(param_1 + 200,param_2 + 0x640);
  FUN_140e361c2(param_1 + 0xde,param_2 + 0x6f0);
  FUN_140e361c2(param_1 + 0xf4,param_2 + 0x7a0);
  FUN_140e9ea3a(param_1 + 0x10a,param_2 + 0x850);
  memcpy(param_1 + 0x166,(void *)(param_2 + 0xb30),0x84);
  return param_1;
}



// FUNCTION 1461d8afe FUN_1461d8afe body=470 status=ok
// SIG undefined FUN_1461d8afe(void)

undefined8 * FUN_1461d8afe(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = param_2[2];
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar3 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  pvVar3 = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 8);
  uVar4 = param_2[7];
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1461d8cfc(param_1 + 7,iVar1);
    FUN_1461d8cd4(param_1[7],uVar4,iVar1);
  }
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_1410b2022(param_1 + 10,param_2 + 10);
  param_1[0x14] = param_2[0x14];
  lVar2 = param_2[0x15];
  param_1[0x15] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  param_1[0x16] = 0;
  iVar1 = *(int *)(param_2 + 0x17);
  pvVar3 = (void *)param_2[0x16];
  *(int *)(param_1 + 0x17) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  }
  else {
    FUN_148a9f02e(param_1 + 0x16,iVar1);
    memcpy((void *)param_1[0x16],pvVar3,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 1461d8cd4 FUN_1461d8cd4 body=40 status=ok
// SIG undefined FUN_1461d8cd4(void)

void FUN_1461d8cd4(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    lVar1 = *(longlong *)(param_2 + 8 + lVar2);
    *(longlong *)(param_1 + 8 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1461d8cfc FUN_1461d8cfc body=88 status=ok
// SIG undefined FUN_1461d8cfc(void)

void FUN_1461d8cfc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1461d8d54 FUN_1461d8d54 body=435 status=ok
// SIG undefined FUN_1461d8d54(void)

undefined8 * FUN_1461d8d54(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x290);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b506520;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x280);
  FUN_140a53f9a(plVar4);
  plVar3[2] = (longlong)&PTR_FUN_14b506540;
  plVar3[0x4c] = 0;
  *(undefined4 *)(plVar3 + 0x4d) = 0;
  plVar3[0x4e] = 0;
  *(undefined4 *)(plVar3 + 0x4f) = 0;
  plVar3[0x50] = 0;
  plVar3[0x51] = 0;
  local_50 = plVar4;
  local_48 = plVar3;
  FUN_1461d8f08(&local_50,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_1461d8e2b;
    param_1[1] = 0;
LAB_1461d8ea1:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1461d8e2b;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_1461d8e2b;
      goto LAB_1461d8ea1;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1461d8e2b;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_1461d8e2b:
  plVar4 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_48 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_58 = 0x280;
  FUN_140a52e78(*param_1,"SShiftUIBackgroundWidget",
                ".\\../Plugins/ShiftUI/ShiftUIPlugin/Source/Private/ShiftUIListener.cpp",0x55);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d8f08 FUN_1461d8f08 body=162 status=ok
// SIG undefined FUN_1461d8f08(void)

void FUN_1461d8f08(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1461d8f47;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1461d8f47;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1461d8f47:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001461d8fa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1461d8faa FUN_1461d8faa body=40 status=ok
// SIG undefined FUN_1461d8faa(void)

undefined8 FUN_1461d8faa(undefined8 param_1,int param_2)

{
  FUN_1461d8fd2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461d8fd2 FUN_1461d8fd2 body=559 status=ok
// SIG undefined FUN_1461d8fd2(void)

void FUN_1461d8fd2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae45620;
  param_1[0xa0] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0xb4];
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
  param_1[0x8a] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x9e];
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
  param_1[0x74] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x88];
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
  param_1[0x5e] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x72];
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
  param_1[0x48] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x5c];
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
  param_1[0x32] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x46];
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
  param_1[0x1c] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x30];
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
  param_1[6] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x1a];
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



// FUNCTION 1461d920a FUN_1461d920a body=591 status=ok
// SIG undefined FUN_1461d920a(void)

undefined8 * FUN_1461d920a(undefined8 *param_1)

{
  FUN_140fe6b3c();
  *param_1 = &PTR_FUN_14b924f90;
  param_1[0x72] = &PTR_FUN_14b925620;
  param_1[0x73] = &PTR_FUN_14b925640;
  param_1[0x74] = &PTR_FUN_14b925670;
  param_1[0x75] = &PTR_FUN_14b925680;
  param_1[0x76] = &PTR_FUN_14b9256f0;
  param_1[0x77] = &PTR_FUN_14b925720;
  param_1[0x78] = &PTR_FUN_14b925750;
  param_1[0x7f] = &PTR_FUN_14b925800;
  param_1[0x80] = &PTR_FUN_14b925870;
  param_1[0x81] = &PTR_FUN_14b9258e0;
  param_1[0x82] = &PTR_FUN_14b925910;
  param_1[0x83] = &PTR_FUN_14b925950;
  param_1[0x84] = &PTR_FUN_14b9259f0;
  param_1[0x85] = &PTR_FUN_14b925a10;
  param_1[0x89] = &PTR_FUN_14b925a30;
  param_1[0x8a] = &PTR_FUN_14b925af0;
  param_1[0x8b] = &PTR_FUN_14b925b70;
  param_1[0x8c] = &PTR_FUN_14b925bc0;
  param_1[0x8d] = &PTR_FUN_14b925c00;
  param_1[0x8e] = &PTR_FUN_14b925c20;
  param_1[0x8f] = &PTR_FUN_14b925c40;
  param_1[0x90] = &PTR_FUN_14b925c60;
  param_1[0x91] = &PTR_FUN_14b925c80;
  param_1[0x92] = &PTR_FUN_14b925ca0;
  param_1[0x93] = &PTR_FUN_14b925cc0;
  param_1[0x94] = &PTR_FUN_14b925ce0;
  param_1[0x95] = &PTR_FUN_14b925d00;
  param_1[0x96] = &PTR_FUN_14b925d20;
  param_1[0x34b] = &PTR_FUN_14b925d40;
  param_1[0x352] = &PTR_FUN_14b925d50;
  param_1[0x353] = &PTR_FUN_14b925d90;
  param_1[0x354] = &PTR_FUN_14b925dd0;
  param_1[0x355] = &PTR_FUN_14b925e20;
  param_1[0x356] = &PTR_FUN_14b925e50;
  param_1[0x359] = &PTR_FUN_14b925e90;
  param_1[0x35a] = &PTR_FUN_14b925ea0;
  param_1[0x35b] = &PTR_FUN_14b925ed0;
  param_1[0x35c] = &PTR_FUN_14b925f70;
  param_1[0x4d7] = 0;
  param_1[0x4d8] = 0;
  param_1[0x4d9] = 0xbf800000bf800000;
  return param_1;
}



// FUNCTION 1461d945a FUN_1461d945a body=145 status=ok
// SIG undefined FUN_1461d945a(void)

void FUN_1461d945a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_4;
  local_18 = param_4[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  local_28 = param_5;
  FUN_1461d94ec(param_1 + 0x1e8,param_2,param_3,&local_20);
  plVar3 = (longlong *)param_4[1];
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d94ec FUN_1461d94ec body=138 status=ok
// SIG undefined FUN_1461d94ec(void)

void FUN_1461d94ec(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *in_R9;
  undefined8 in_stack_00000028;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *in_R9;
  local_18 = in_R9[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  local_28 = in_stack_00000028;
  FUN_1461d9578();
  plVar3 = (longlong *)in_R9[1];
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d9578 FUN_1461d9578 body=313 status=ok
// SIG undefined FUN_1461d9578(void)

void FUN_1461d9578(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  bool bVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar3 + 1;
  uVar7 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar7 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar3;
  }
  else {
    bVar8 = false;
    do {
      lVar9 = uVar7 * 0x10 + -8;
      uVar10 = uVar7;
      while ((*(int *)(*param_1 + lVar9) != 0 &&
             (plVar4 = *(longlong **)(*param_1 + -8 + lVar9), plVar4 != (longlong *)0x0))) {
        local_58 = *param_4;
        local_50 = param_4[1];
        if (local_50 != 0) {
          LOCK();
          *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
          UNLOCK();
        }
        local_68 = param_5;
        cVar6 = (**(code **)(*plVar4 + 0x60))(plVar4,param_2,param_3,&local_58);
        if (cVar6 == '\0') break;
        lVar9 = lVar9 + -0x10;
        bVar5 = uVar10 < 2;
        uVar10 = uVar10 - 1;
        if (bVar5) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (!bVar8) goto LAB_1461d963d;
          goto LAB_1461d968d;
        }
      }
      uVar7 = uVar10 - 1;
      bVar8 = true;
    } while (1 < uVar10);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1461d968d:
    FUN_14474d06a(param_1,0);
  }
LAB_1461d963d:
  plVar4 = (longlong *)param_4[1];
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
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d96b2 FUN_1461d96b2 body=305 status=ok
// SIG undefined FUN_1461d96b2(void)

longlong * FUN_1461d96b2(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1461d976e:
    FUN_1461d97e4(puVar5,param_4);
    *puVar5 = &PTR_FUN_14b528e50;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = uVar4;
    *(undefined4 *)(puVar5 + 7) = uVar3;
  }
  else {
    iVar9 = (int)plVar6[1];
    do {
      if (iVar9 == 0) goto LAB_1461d976e;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar10 = iVar9 == iVar8;
      if (bVar10) {
        *(int *)(plVar6 + 1) = iVar9 + 1;
        iVar8 = iVar9;
      }
      iVar9 = iVar8;
      UNLOCK();
    } while (!bVar10);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    FUN_1461d97e4(puVar5,param_4);
    *puVar5 = &PTR_FUN_14b528e50;
    puVar5[4] = uVar7;
    puVar5[5] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 7) = uVar3;
    puVar5[6] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 1461d97e4 FUN_1461d97e4 body=146 status=ok
// SIG undefined FUN_1461d97e4(void)

undefined8 * FUN_1461d97e4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = &PTR_LAB_14b528ec0;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  param_1[3] = lVar3;
  return param_1;
}



// FUNCTION 1461d9876 FUN_1461d9876 body=201 status=ok
// SIG undefined FUN_1461d9876(void)

bool FUN_1461d9876(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((&DAT_149fc1b6e)[*(byte *)(param_2 + 0x18)] == '\x01') {
    FUN_140b6e8c2(param_2,&local_30);
    (**(code **)(*param_1 + 0x2c8))(param_1,&local_38);
    bVar2 = true;
    if (local_30 == local_38) goto LAB_1461d98d7;
    FUN_140b6e8c2(param_2,&local_40);
    if ((longlong)(int)param_1[0x10] != 0) {
      lVar1 = 0;
      do {
        bVar2 = *(longlong *)(param_1[0xf] + lVar1) == local_40;
        if (bVar2) break;
        bVar3 = (longlong)(int)param_1[0x10] * 8 + -8 != lVar1;
        lVar1 = lVar1 + 8;
      } while (bVar3);
      goto LAB_1461d98d7;
    }
  }
  bVar2 = false;
LAB_1461d98d7:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 1461d9940 FUN_1461d9940 body=983 status=ok
// SIG undefined FUN_1461d9940(void)

void FUN_1461d9940(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined8 *local_150;
  undefined4 local_148 [2];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8 [4];
  undefined4 local_b8;
  int local_b4;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  local_b0[0] = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0xf00000d0;
  local_70 = 0;
  local_68 = 0x3f800000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b0);
  }
  local_b4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b4);
  }
  iVar1 = local_b4;
  local_b8 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_d8[2] = 0;
  local_d8[3] = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1403de7ba(&local_f8,local_d8);
  uVar2 = local_b8;
  local_148[0] = local_b0[0];
  local_140 = local_a8;
  uVar3 = FUN_14477b664(uStack_a0);
  local_138 = FUN_14477b664(uVar3);
  local_130 = local_98;
  local_128 = uStack_90;
  uStack_120 = local_88;
  local_118 = uStack_80;
  local_110 = local_78;
  local_108 = 0;
  local_100 = local_68;
  local_158 = uVar2;
  local_150 = &local_f8;
  uVar2 = FUN_1461d9d18(local_58,local_5c,local_148,iVar1 != 0);
  *param_3 = uVar2;
  if (local_d8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d9d18 FUN_1461d9d18 body=179 status=ok
// SIG undefined FUN_1461d9d18(void)

undefined4
FUN_1461d9d18(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,longlong *param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  uVar1 = 0xffffffff;
  if ((param_1 != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    uVar2 = FUN_144a7b040();
    plVar3 = (longlong *)FUN_144718840(param_1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
      if (lVar4 != 0) {
        uVar1 = FUN_14163a0ae(lVar4,param_2,param_3,param_4,param_5,param_6);
      }
    }
  }
  if (param_6[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_6 != 0) {
    FUN_1400020a8();
  }
  return uVar1;
}



// FUNCTION 1461d9df2 FUN_1461d9df2 body=255 status=ok
// SIG undefined FUN_1461d9df2(void)

void FUN_1461d9df2(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined8 local_a8 [12];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar2 = FUN_144729dda(param_1 + 0x50);
  if (cVar2 == '\0') {
    cVar2 = FUN_1457baa60(param_1);
    if (cVar2 != '\0') {
      *(undefined2 *)(param_1 + 0x71) = 0;
      lVar3 = FUN_14479d2ce(param_1 + 0x58);
      if (lVar3 != 0) {
        lVar4 = FUN_1403ca227();
        local_b8 = &local_48;
        local_48 = (undefined4)DAT_14c8464f8;
        uStack_44 = DAT_14c8464f8._4_4_;
        uStack_40 = (undefined4)DAT_14c846500;
        uStack_3c = DAT_14c846500._4_4_;
        local_38 = DAT_14c846508;
        uVar1 = *(undefined4 *)(lVar4 + 0xf8);
        puVar6 = (undefined8 *)(lVar4 + 0x98);
        puVar7 = local_a8;
        for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_1461d9ef2(lVar3,local_a8,uVar1,0);
        lVar3 = FUN_14479d2ce(param_1 + 0x58);
        lVar3 = (**(code **)(*(longlong *)(lVar3 + 0x3c20) + 0x18))(lVar3 + 0x3c20);
        if (lVar3 != 0) {
          *(bool *)(param_1 + 0x6a) = *(longlong *)(lVar3 + 0x20) != 0;
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d9ef2 FUN_1461d9ef2 body=158 status=ok
// SIG undefined FUN_1461d9ef2(void)

void FUN_1461d9ef2(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8 [12];
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar3 = local_a8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_40 = *param_5;
  uStack_3c = param_5[1];
  uStack_38 = param_5[2];
  uStack_34 = param_5[3];
  local_30 = *(undefined8 *)(param_5 + 4);
  local_48 = param_3;
  local_44 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cba7ce0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_a8);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461d9f92 FUN_1461d9f92 body=40 status=ok
// SIG undefined FUN_1461d9f92(void)

undefined8 FUN_1461d9f92(undefined8 param_1,int param_2)

{
  FUN_1461d9fba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1461d9fba FUN_1461d9fba body=567 status=ok
// SIG undefined FUN_1461d9fba(void)

void FUN_1461d9fba(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b92bdb0;
  param_1[0x72] = &PTR_FUN_14b92c4c0;
  param_1[0x73] = &PTR_FUN_14b92c530;
  param_1[0x74] = &PTR_FUN_14b92c5a0;
  param_1[0x75] = &PTR_FUN_14b92c5d0;
  param_1[0x76] = &PTR_FUN_14b92c600;
  param_1[0x77] = &PTR_FUN_14b92c630;
  param_1[0x78] = &PTR_FUN_14b92c670;
  param_1[0x79] = &PTR_FUN_14b92c690;
  param_1[0x7a] = &PTR_FUN_14b92c6c0;
  param_1[0x7b] = &PTR_FUN_14b92c790;
  param_1[0x7c] = &PTR_FUN_14b92c7e0;
  param_1[0x7d] = &PTR_FUN_14b92c8a0;
  param_1[0x7e] = &PTR_FUN_14b92c8c0;
  param_1[0x7f] = &PTR_FUN_14b92c940;
  param_1[0x80] = &PTR_FUN_14b92c960;
  param_1[0x81] = &PTR_FUN_14b92c970;
  param_1[0x82] = &PTR_FUN_14b92c9b0;
  param_1[0x83] = &PTR_FUN_14b92ca20;
  param_1[0x84] = &PTR_FUN_14b92ca50;
  param_1[0x85] = &PTR_FUN_14b92caf0;
  param_1[0x86] = &PTR_FUN_14b92cb10;
  param_1[0x87] = &PTR_FUN_14b92cb30;
  param_1[0x2a7] = &PTR_FUN_14b92cb50;
  param_1[0x2a8] = &PTR_FUN_14b92cb90;
  param_1[0x2a9] = &PTR_FUN_14b92cbb0;
  param_1[0x2aa] = &PTR_FUN_14b92cc50;
  param_1[0x2ab] = &PTR_FUN_14b92cc80;
  param_1[0x30e] = &PTR_FUN_14b92cca0;
  param_1[0x30f] = &PTR_FUN_14b92cce0;
  param_1[0x310] = &PTR_FUN_14b92cd10;
  param_1[0x3a1] = &PTR_FUN_14b92cd30;
  param_1[0x3a2] = &PTR_FUN_14b92ce20;
  plVar3 = (longlong *)param_1[0x3a9];
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
  plVar3 = (longlong *)param_1[0x3a6];
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
  FUN_140ead17e(param_1);
  return;
}



// FUNCTION 1461da1f2 FUN_1461da1f2 body=103 status=ok
// SIG undefined FUN_1461da1f2(void)

ulonglong FUN_1461da1f2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1461da23c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1461da23c;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 1461da25a FUN_1461da25a body=45 status=ok
// SIG undefined FUN_1461da25a(void)

void FUN_1461da25a(void)

{
  longlong lVar1;
  
  lVar1 = FUN_145832ce0();
  if (lVar1 != 0) {
    lVar1 = FUN_1400d6ce6(lVar1);
    if (lVar1 != 0) {
      FUN_1461da288(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1461da288 FUN_1461da288 body=228 status=ok
// SIG undefined FUN_1461da288(void)

void FUN_1461da288(longlong param_1)

{
  FUN_1458c90c8(*(undefined8 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0x108));
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 0x10c) != 0) {
    FUN_1461da3da(param_1 + 0x100,0);
  }
  FUN_1458c905a(*(undefined8 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf8));
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(int *)(param_1 + 0xfc) != 0) {
    FUN_1461da44c(param_1 + 0xf0,0);
  }
  FUN_1412f41f5(*(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x118));
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(int *)(param_1 + 0x11c) != 0) {
    FUN_1461da36c(param_1 + 0x110,0);
  }
  FUN_1412f41f5(*(undefined8 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x138));
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(int *)(param_1 + 0x13c) != 0) {
    FUN_1461da36c(param_1 + 0x130,0);
    return;
  }
  return;
}



// FUNCTION 1461da36c FUN_1461da36c body=109 status=ok
// SIG undefined FUN_1461da36c(void)

void FUN_1461da36c(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x38,8);
  }
  return;
}



// FUNCTION 1461da3da FUN_1461da3da body=113 status=ok
// SIG undefined FUN_1461da3da(void)

void FUN_1461da3da(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 1461da44c FUN_1461da44c body=113 status=ok
// SIG undefined FUN_1461da44c(void)

void FUN_1461da44c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 1461da4be FUN_1461da4be body=109 status=ok
// SIG undefined FUN_1461da4be(void)

void FUN_1461da4be(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  FUN_1461da52c();
  lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
    lVar2 = FUN_140e5f22c();
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x30) != 0)) {
      FUN_14163a5ca();
    }
  }
  lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar2 != 0) {
    iVar1 = FUN_14490d72a(lVar2);
    if (iVar1 == 3) {
      *(undefined1 *)(param_1 + 0x106) = 1;
    }
  }
  return;
}



// FUNCTION 1461da52c FUN_1461da52c body=150 status=ok
// SIG undefined FUN_1461da52c(void)

void FUN_1461da52c(longlong param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_b8 [40];
  longlong local_90;
  int local_88;
  undefined1 local_80 [40];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_2;
  }
  FUN_140245d8a(local_80,0,puVar1,0);
  FUN_140d2bdd2(&local_90,local_58);
  *(bool *)(param_1 + 0x344) = 1 < local_88;
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  FUN_141238aee(local_80);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461da5c4 FUN_1461da5c4 body=241 status=ok
// SIG undefined FUN_1461da5c4(void)

undefined8 * FUN_1461da5c4(undefined8 *param_1)

{
  FUN_1461da6b6();
  *param_1 = &PTR_FUN_14b968c30;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined1 *)(param_1 + 0x95) = 0;
  param_1[0x9b] = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4ec) = 0;
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  param_1[0xa1] = param_1;
  param_1[0x96] = &PTR_FUN_14b967050;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x544) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54c) = 0;
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xad] = param_1;
  param_1[0xa2] = &PTR_FUN_14b967070;
  param_1[0xb2] = 0;
  *(undefined4 *)(param_1 + 0xb3) = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x59c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5a4) = 0;
  param_1[0xb6] = 0;
  *(undefined4 *)(param_1 + 0xb7) = 0;
  return param_1;
}



// FUNCTION 1461da6b6 FUN_1461da6b6 body=673 status=ok
// SIG undefined FUN_1461da6b6(void)

undefined8 * FUN_1461da6b6(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1409e1656();
  *param_1 = &PTR_FUN_14b3f8040;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 2;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 2;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined2 *)((longlong)param_1 + 0x169) = 1;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x341) = 0;
  *(undefined8 *)((longlong)param_1 + 0x349) = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 2;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined1 *)(param_1 + 0x85) = 0;
  *(undefined8 *)((longlong)param_1 + 0x37d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x385) = 0;
  *(undefined8 *)((longlong)param_1 + 0x374) = 0;
  *(undefined8 *)((longlong)param_1 + 0x37c) = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0x44960000;
  return param_1;
}



// FUNCTION 1461da958 FUN_1461da958 body=432 status=ok
// SIG undefined FUN_1461da958(void)

void FUN_1461da958(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x50;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x4c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x48 + lVar7) =
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



// FUNCTION 1461dab0a FUN_1461dab0a body=283 status=ok
// SIG undefined FUN_1461dab0a(void)

void FUN_1461dab0a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457307fc();
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x30);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 0x180))(plVar2);
    if (lVar3 != 0) {
      iVar1 = FUN_14490d72a(lVar3);
      if ((param_2 != 0) && (iVar1 < 3)) {
        lVar3 = FUN_1407f4df8();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          local_38 = (code *)&LAB_145887548;
          local_30 = 0;
          local_48 = &local_38;
          FUN_1461dac26(param_1,param_2,&DAT_14cb92a88,param_1);
          local_38 = FUN_1458874a0;
          local_30 = 0;
          local_48 = &local_38;
          FUN_1461dac26(param_1,param_2,&DAT_14cb92d20,param_1);
          local_38 = FUN_140de0f20;
          local_30 = 0;
          FUN_1461dad4c(param_1,param_2,param_1,&local_38);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461dac26 FUN_1461dac26 body=293 status=ok
// SIG undefined FUN_1461dac26(void)

void FUN_1461dac26(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(undefined4 *)(param_5 + 1);
  local_48 = (code *)*param_5;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_14163aad2(param_2,param_3,param_4);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_48 = (code *)*param_3;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_48);
  if (lVar4 != 0) {
    local_48 = FUN_140ed4b7e;
    local_40 = 0;
    local_58 = &local_48;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461dad4c FUN_1461dad4c body=349 status=ok
// SIG undefined FUN_1461dad4c(void)

void FUN_1461dad4c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  lVar1 = param_1 + 0x138;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar4 = FUN_14163ab56(param_2,2);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar4;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar4 = FUN_14163ab56(param_2,8,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar4;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar5 = FUN_14163ab56(param_2,0x10,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar5;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_1411a3386(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461daeaa FUN_1461daeaa body=255 status=ok
// SIG undefined FUN_1461daeaa(void)

void FUN_1461daeaa(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba40180;
  FUN_1461dafaa(plVar5 + 2,param_2,*param_3,param_4);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x138);
  *(uint *)(param_1 + 0x138) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x13c) < iVar3 + 1U) {
    FUN_145c3a3e2((longlong *)(param_1 + 0x130),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x130);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
        return;
      }
    }
  }
  return;
}



// FUNCTION 1461dafaa FUN_1461dafaa body=294 status=ok
// SIG undefined FUN_1461dafaa(void)

undefined8 *
FUN_1461dafaa(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 *local_68;
  undefined4 local_60;
  longlong local_58 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  uStack_40 = 0;
  FUN_140056680(local_58,L"ShiftSDK::Rooms::GetPeersInRoom");
  local_78 = &local_48;
  FUN_1461db0d2(param_1,local_58,param_2,param_4);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ba401d8;
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,2,0x10);
  local_60 = 2;
  *local_68 = &PTR_LAB_14b4f3a70;
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
  local_68[2] = lVar2;
  *local_68 = &PTR_FUN_14ba40220;
  local_68[3] = param_1;
  FUN_1415c7772(param_2,param_3,&local_68);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461db0d2 FUN_1461db0d2 body=670 status=ok
// SIG undefined FUN_1461db0d2(void)

undefined8 *
FUN_1461db0d2(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong *param_5)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 auStack_108 [40];
  undefined8 *local_e0;
  undefined4 local_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
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
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_1 = &PTR_LAB_14ba3d1c8;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 0x38);
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *param_1 = &PTR_FUN_14ba401e8;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar3 = (void *)*param_2;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_146076c90(param_1 + 4,param_4);
  param_1[6] = 0;
  param_1[8] = 0;
  local_d8 = 7;
  local_d0 = (void *)0x0;
  uVar2 = *(uint *)(param_5 + 1);
  pvVar3 = (void *)*param_5;
  local_c8 = CONCAT44(local_c8._4_4_,uVar2);
  local_e0 = param_1;
  if ((longlong)(int)uVar2 == 0) {
    local_c8 = (ulonglong)uVar2;
  }
  else {
    FUN_145c52c12(&local_d0,uVar2,0);
    memcpy(local_d0,pvVar3,(longlong)(int)uVar2 << 2);
  }
  local_c0 = 0;
  local_b8 = (code *)0x0;
  puVar10 = (undefined8 *)FUN_14001cc68(0x30,8);
  *puVar10 = &PTR_FUN_14ba40200;
  *(undefined4 *)(puVar10 + 2) = local_d8;
  puVar10[1] = local_e0;
  puVar10[3] = local_d0;
  local_d0 = (void *)0x0;
  *(undefined4 *)(puVar10 + 4) = (undefined4)local_c8;
  *(undefined4 *)((longlong)puVar10 + 0x24) = local_c8._4_4_;
  local_c8 = 0;
  *(undefined4 *)(puVar10 + 5) = local_c0;
  if (puVar10 + 1 != (undefined8 *)0x0) {
    local_b8 = FUN_148fa694e;
  }
  local_78 = param_1[6];
  uStack_70 = param_1[7];
  local_a8 = (longlong *)param_1[8];
  uStack_60 = param_1[9];
  local_58 = param_1[10];
  uStack_50 = param_1[0xb];
  local_48 = param_1[0xc];
  uStack_40 = param_1[0xd];
  uVar8 = local_48;
  uVar9 = uStack_40;
  uVar6 = local_58;
  uVar7 = uStack_50;
  local_68 = local_a8;
  uVar5 = uStack_60;
  uVar4 = uStack_70;
  param_1[0xc] = CONCAT44(uStack_84,local_88);
  param_1[0xd] = CONCAT44(uStack_7c,uStack_80);
  param_1[10] = CONCAT44(uStack_94,local_98);
  param_1[0xb] = CONCAT44(uStack_8c,uStack_90);
  param_1[8] = puVar10;
  param_1[9] = CONCAT44(uStack_9c,uStack_a0);
  param_1[6] = local_b8;
  param_1[7] = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  local_b8 = (code *)local_78;
  uStack_70 = uVar4;
  uStack_60 = uVar5;
  local_58 = uVar6;
  uStack_50 = uVar7;
  local_48 = uVar8;
  uStack_40 = uVar9;
  if (local_78 != 0) {
    plVar11 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar11 = (longlong *)&local_98;
    }
    (**(code **)(*plVar11 + 0x10))();
    if (local_d0 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461db372 FUN_1461db372 body=254 status=ok
// SIG undefined FUN_1461db372(void)

undefined8 * FUN_1461db372(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bed10b0;
  *(undefined1 *)(param_1 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0x4000000040400000;
  param_1[0x45] = 0x4000000040400000;
  param_1[0x46] = 0x3dcccccd3e4ccccd;
  param_1[0x47] = 0x1e41f00000;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined2 *)((longlong)param_1 + 0x244) = 0;
  *(undefined1 *)((longlong)param_1 + 0x246) = 1;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined2 *)((longlong)param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0x3ff00000;
  param_1[0x56] = 0x3ff0000000000000;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x40a00000;
  param_1[0x50] = 0x403e000000000000;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  FUN_1461db470(param_1 + 0x5a);
  *(undefined1 *)((longlong)param_1 + 0x244) = 1;
  return param_1;
}



// FUNCTION 1461db470 FUN_1461db470 body=203 status=ok
// SIG undefined FUN_1461db470(void)

undefined8 * FUN_1461db470(undefined8 *param_1)

{
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  FUN_14163abf8(param_1 + 0x24);
  param_1[0x24] = &PTR_FUN_14bed0f00;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  return param_1;
}



// FUNCTION 1461db53c FUN_1461db53c body=65 status=ok
// SIG undefined FUN_1461db53c(void)

void FUN_1461db53c(longlong param_1)

{
  longlong lVar1;
  
  if (((*(longlong *)(param_1 + 0x30) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360), lVar1 != 0)) &&
     (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14583d3ae();
    if (lVar1 != 0) {
      FUN_1461db57e(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1461db57e FUN_1461db57e body=464 status=ok
// SIG undefined FUN_1461db57e(void)

void FUN_1461db57e(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined1 local_90;
  longlong local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68 [2];
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x80) == -1) {
    lVar2 = FUN_1458d9664(param_1,0xffffffff);
    if (lVar2 != 0) {
      lVar2 = FUN_145da44aa(lVar2);
      if (lVar2 != 0) {
        local_58 = L"StartingGameplayDialogHeader";
        local_50 = 0x1c;
        FUN_1446e940c(&local_78,&local_58);
        local_58 = L"OakOnlineMessaging";
        local_50 = 0x12;
        FUN_1446e940c(&local_88,&local_58);
        FUN_140208bae(local_68,&local_88,&local_78,L"Starting Gameplay");
        local_58 = L"StartingGameplayDialogBody";
        local_50 = 0x1a;
        FUN_1446e940c(&local_78,&local_58);
        local_58 = L"OakOnlineMessaging";
        local_50 = 0x12;
        FUN_1446e940c(&local_88,&local_58);
        FUN_140208bae(&local_58,&local_88,&local_78,L"Setting up your game, please wait.");
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_90 = 0;
        local_98 = 0;
        local_a0 = 0;
        local_a8 = &local_78;
        uVar1 = FUN_1461db750(lVar2,local_68,&local_58,&local_88);
        *(undefined4 *)(param_1 + 0x80) = uVar1;
        FUN_140e0067b(local_88,uStack_80 & 0xffffffff);
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        FUN_1449db362(&local_78);
        if (local_58 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_58 + 0x10))();
        }
        if (local_68[0] != (longlong *)0x0) {
          (**(code **)(*local_68[0] + 0x10))();
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461db750 FUN_1461db750 body=307 status=ok
// SIG undefined FUN_1461db750(void)

undefined4
FUN_1461db750(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 auStack_138 [40];
  undefined1 local_110 [8];
  longlong *local_108;
  undefined4 local_100;
  longlong *local_f8;
  undefined4 local_f0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [32];
  undefined8 local_a8;
  undefined1 local_9c;
  undefined1 local_9a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_145be44b4(local_110);
  plVar2 = local_108;
  plVar1 = (longlong *)*param_2;
  if (local_108 != plVar1) {
    local_108 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  plVar2 = local_f8;
  local_100 = (undefined4)param_2[1];
  plVar1 = (longlong *)*param_3;
  if (local_f8 != plVar1) {
    local_f8 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  local_f0 = (undefined4)param_3[1];
  FUN_1461db884(local_d8,param_4);
  FUN_1459de186(local_c8,param_5);
  local_a8 = param_6;
  local_9a = param_7;
  local_9c = param_8;
  uVar3 = FUN_1459dda8e(param_1,local_110);
  FUN_1459ddea2(local_110);
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461db884 FUN_1461db884 body=80 status=ok
// SIG undefined FUN_1461db884(void)

longlong * FUN_1461db884(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140e0067b(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 1461db8e0 FUN_1461db8e0 body=601 status=ok
// SIG undefined FUN_1461db8e0(void)

undefined8 * FUN_1461db8e0(undefined8 *param_1)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14130c032();
  *param_1 = &PTR_FUN_14abf0bf0;
  param_1[5] = &PTR_FUN_14abf0f20;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffff00000000;
  *(byte *)((longlong)param_1 + 0x9c) = *(byte *)((longlong)param_1 + 0x9c) & 0xfe;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffff;
  *(byte *)((longlong)param_1 + 0xc4) = *(byte *)((longlong)param_1 + 0xc4) & 0xfe;
  FUN_1400b22c2(&local_40,"Keep in Cone");
  if (param_1 + 6 == &local_40) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_40;
    local_40 = 0;
    *(undefined4 *)(param_1 + 7) = local_38;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_34;
  }
  local_48 = FUN_144a6c4d8();
  if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_48);
  }
  FUN_1446f470e(&local_50,L"ConeOrigin",1);
  FUN_1458b8c86(param_1 + 0xf,param_1,local_50,&local_48);
  FUN_1446f470e(&local_58,L"ConeOrigin",1);
  FUN_1458b89d2(param_1 + 0xf,param_1,local_58);
  local_60 = FUN_144a6c4d8();
  if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_60);
  }
  FUN_1446f470e(&local_68,L"Observed",1);
  FUN_1458b8c86(param_1 + 0x14,param_1,local_68,&local_60);
  FUN_1446f470e(&local_70,L"Observed",1);
  FUN_1458b89d2(param_1 + 0x14,param_1,local_70);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf8 | 5;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xc4;
  *(undefined1 *)((longlong)param_1 + 100) = 2;
  param_1[0x11] = DAT_14cb1f058;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x42340000;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461dbb46 FUN_1461dbb46 body=602 status=ok
// SIG undefined FUN_1461dbb46(void)

undefined8 * FUN_1461dbb46(undefined8 *param_1)

{
  FUN_14064ffa8();
  *param_1 = &PTR_FUN_14b6e9ac0;
  param_1[0x72] = &PTR_FUN_14b6ea130;
  param_1[0x73] = &PTR_FUN_14b6ea150;
  param_1[0x74] = &PTR_FUN_14b6ea180;
  param_1[0x75] = &PTR_FUN_14b6ea190;
  param_1[0x76] = &PTR_FUN_14b6ea200;
  param_1[0x77] = &PTR_FUN_14b6ea230;
  param_1[0x78] = &PTR_FUN_14b6ea260;
  param_1[0x7f] = &PTR_FUN_14b6ea310;
  param_1[0x80] = &PTR_FUN_14b6ea380;
  param_1[0x81] = &PTR_FUN_14b6ea3f0;
  param_1[0x82] = &PTR_FUN_14b6ea420;
  param_1[0x83] = &PTR_FUN_14b6ea460;
  param_1[0x84] = &PTR_FUN_14b6ea500;
  param_1[0x85] = &PTR_FUN_14b6ea520;
  param_1[0x89] = &PTR_FUN_14b6ea540;
  param_1[0x8a] = &PTR_FUN_14b6ea600;
  param_1[0x8b] = &PTR_FUN_14b6ea680;
  param_1[0x8c] = &PTR_FUN_14b6ea6d0;
  param_1[0x8d] = &PTR_FUN_14b6ea710;
  param_1[0x8e] = &PTR_FUN_14b6ea730;
  param_1[0x8f] = &PTR_FUN_14b6ea750;
  param_1[0x90] = &PTR_FUN_14b6ea770;
  param_1[0x91] = &PTR_FUN_14b6ea790;
  param_1[0x92] = &PTR_FUN_14b6ea7b0;
  param_1[0x93] = &PTR_FUN_14b6ea7d0;
  param_1[0x94] = &PTR_FUN_14b6ea7f0;
  param_1[0x95] = &PTR_FUN_14b6ea810;
  param_1[0x96] = &PTR_FUN_14b6ea830;
  param_1[0x34b] = &PTR_FUN_14b6ea850;
  param_1[0x352] = &PTR_FUN_14b6ea860;
  param_1[0x353] = &PTR_FUN_14b6ea8a0;
  param_1[0x354] = &PTR_FUN_14b6ea8e0;
  param_1[0x355] = &PTR_FUN_14b6ea930;
  param_1[0x356] = &PTR_FUN_14b6ea960;
  param_1[0x359] = &PTR_FUN_14b6ea9a0;
  param_1[0x35a] = &PTR_FUN_14b6ea9b0;
  param_1[0x35b] = &PTR_FUN_14b6ea9e0;
  param_1[0x35c] = &PTR_FUN_14b6eaa80;
  param_1[0x4bf] = 0;
  *(undefined4 *)(param_1 + 0x4c0) = 0x401d;
  param_1[0x4c3] = 0;
  param_1[0x4c4] = 0;
  param_1[0x4c1] = 0;
  param_1[0x4c2] = 0;
  return param_1;
}



// FUNCTION 1461dbdac FUN_1461dbdac body=602 status=ok
// SIG undefined FUN_1461dbdac(void)

undefined8 * FUN_1461dbdac(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_3c [12];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145887268();
  *param_1 = &PTR_FUN_14ac1df70;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    FUN_147f022ec(param_1,local_3c);
    lVar2 = FUN_1459eb9fa();
    if (*(int *)(param_1 + 10) != 3) {
      FUN_1446efa72(param_1 + 9,0,3,0x10);
      *(undefined4 *)(param_1 + 10) = 3;
    }
    puVar1 = (undefined8 *)param_1[9];
    *puVar1 = &PTR_LAB_14ac25af0;
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
    puVar1[2] = lVar4;
    *puVar1 = &PTR_FUN_14ac25a80;
    puVar1[3] = 0;
    FUN_14485c47a(puVar1 + 3,param_1);
    puVar1[4] = FUN_147f01eec;
    if (*(int *)(param_1 + 0xe) != 3) {
      FUN_1446efa72(param_1 + 0xd,0,3,0x10);
      *(undefined4 *)(param_1 + 0xe) = 3;
    }
    puVar1 = (undefined8 *)param_1[0xd];
    *puVar1 = &PTR_LAB_14ac25af0;
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
    puVar1[2] = lVar4;
    *puVar1 = &PTR_FUN_14ac25a80;
    puVar1[3] = 0;
    FUN_14485c47a(puVar1 + 3,param_1);
    puVar1[4] = FUN_147f01fa4;
    FUN_1446f470e(&local_48,L"OnListenerUpdated",1);
    lVar3 = FUN_1400796d0(param_1[2],local_48,1);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x20) != lVar2)) {
      if (*(int *)(param_1 + 0xc) != 3) {
        FUN_1446efa72(param_1 + 0xb,0,3,0x10);
        *(undefined4 *)(param_1 + 0xc) = 3;
      }
      puVar1 = (undefined8 *)param_1[0xb];
      *puVar1 = &PTR_LAB_14ac25af0;
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar3 == 0) {
        LOCK();
        UNLOCK();
        lVar3 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      puVar1[2] = lVar3;
      *puVar1 = &PTR_FUN_14ac25a80;
      puVar1[3] = 0;
      FUN_14485c47a(puVar1 + 3,param_1);
      puVar1[4] = FUN_147f02054;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461dc008 FUN_1461dc008 body=30 status=ok
// SIG undefined FUN_1461dc008(void)

void FUN_1461dc008(longlong param_1)

{
  FUN_1408256d2(param_1 + 0x60);
  FUN_1461dc026(param_1);
  return;
}



// FUNCTION 1461dc026 FUN_1461dc026 body=184 status=ok
// SIG undefined FUN_1461dc026(void)

void FUN_1461dc026(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1461dc0e0(param_1,&local_40);
  lVar2 = local_40;
  if ((longlong)local_38 != 0) {
    lVar5 = 0;
    do {
      uVar1 = *(undefined4 *)(lVar2 + lVar5);
      uVar3 = FUN_14479d2ce(param_1 + 0x58);
      plVar4 = (longlong *)FUN_14007a5e6(uVar3);
      if ((plVar4 != (longlong *)0x0) &&
         (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x110))(plVar4), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x48))(plVar4,uVar1);
      }
      lVar5 = lVar5 + 4;
    } while ((longlong)local_38 * 4 != lVar5);
  }
  if (local_40 != 0) {
    FUN_1400020a8(local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461dc0e0 FUN_1461dc0e0 body=92 status=ok
// SIG undefined FUN_1461dc0e0(void)

undefined8 * FUN_1461dc0e0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x58);
  plVar2 = (longlong *)FUN_14007a5e6(uVar1);
  if ((plVar2 != (longlong *)0x0) &&
     (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x110))(plVar2), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0xd0))(plVar2,param_2,param_1 + 0x20);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1461dc13c FUN_1461dc13c body=440 status=ok
// SIG undefined FUN_1461dc13c(void)

void FUN_1461dc13c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  int local_3c;
  undefined8 local_38;
  undefined8 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2c = 0;
  local_24 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar1 = &local_2c;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  FUN_1461dc2f6(&local_50,puVar1,local_38,local_3c != 0);
  if (&local_50 == param_3) {
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_50;
    *(undefined4 *)(param_3 + 1) = local_48;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_44;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461dc2f6 FUN_1461dc2f6 body=151 status=ok
// SIG undefined FUN_1461dc2f6(void)

undefined8 FUN_1461dc2f6(undefined8 param_1)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140ff2acb(local_40);
  FUN_1461dc38e(local_40,param_1);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_40;
    if (0x18 < local_28) {
      pppuVar2 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461dc38e FUN_1461dc38e body=329 status=ok
// SIG undefined FUN_1461dc38e(void)

undefined8 * FUN_1461dc38e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_78 [40];
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 4) == '\b') {
    *param_2 = 0;
    iVar1 = *(int *)(param_1 + 1);
    _Src = (void *)*param_1;
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 != 0) {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
    }
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1400b56fe(local_50,param_1,8);
    *param_2 = 0;
    pppuVar4 = DAT_14c9ab1d0;
    pppuVar3 = &DAT_14c9ab1d0;
    if (local_30 != 0) {
      pppuVar3 = local_50;
    }
    iVar1 = *(int *)(pppuVar3 + 1);
    *(int *)(param_2 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      pppuVar3 = (undefined8 ***)local_50[0];
      if (local_30 == 0) {
        pppuVar3 = pppuVar4;
      }
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,pppuVar3,(longlong)iVar1 * 2);
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
    if (pcVar2 != (code *)0x0) {
      pppuVar4 = local_50;
      if (0x18 < local_38) {
        pppuVar4 = (undefined8 ***)local_50[0];
      }
      (*pcVar2)(pppuVar4);
    }
    if (0x18 < local_38) {
      FUN_1400020a8(local_50[0]);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1461dc4d8 FUN_1461dc4d8 body=301 status=ok
// SIG undefined FUN_1461dc4d8(void)

void FUN_1461dc4d8(char param_1)

{
  byte bVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar2 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"EnableHighDPIAwareness",1);
  if (plVar2 != (longlong *)0x0) {
    local_21 = '\x01';
    local_38 = &DAT_14c872ce8;
    FUN_14052bb08(DAT_14c872ce0,L"/Script/Engine.UserInterfaceSettings",L"bAllowHighDPIInGameMode",
                  &local_21);
    if (local_21 == '\x01') {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar1 = FUN_14054d46e(&DAT_14c846b20,L"nohighdpi");
      bVar1 = bVar1 ^ 1;
    }
    else {
      bVar1 = 0;
    }
    puVar3 = &DAT_149e0209e;
    if (bVar1 == 0 && param_1 == '\0') {
      puVar3 = &DAT_149e25dfc;
    }
    (**(code **)(*plVar2 + 0x98))(plVar2,puVar3,0xd000000,0);
    if (bVar1 != 0 || param_1 != '\0') {
      FUN_14163aef6();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461dc60e FUN_1461dc60e body=607 status=ok
// SIG undefined FUN_1461dc60e(void)

undefined8 * FUN_1461dc60e(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14ba682f0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x10] = 2;
  param_1[0x11] = 0x3dcccccd3e4ccccd;
  *(undefined4 *)(param_1 + 0x12) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x13) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 600;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0x400000000;
  param_1[0x15] = 0;
  *(undefined4 *)((longlong)param_1 + 0xaf) = 0;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined2 *)(param_1 + 0x27) = 1;
  *(undefined1 *)((longlong)param_1 + 0x13a) = 1;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 1;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    if (DAT_14cbf6050 == 0) {
      uVar2 = FUN_145c5bed3();
      DAT_14cbf6050 = FUN_14171c317(FUN_146672bb8,uVar2,L"EUpdateState");
    }
    lVar1 = DAT_14cbf6050;
    if ((DAT_14cbf6050 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(DAT_14cbf6050);
    }
    param_1[0x23] = lVar1;
    if (DAT_14cbf6068 == 0) {
      uVar2 = FUN_145c5bed3();
      DAT_14cbf6068 = FUN_14171c317(FUN_146672be7,uVar2,L"EUpdateCompletionStatus");
    }
    lVar1 = DAT_14cbf6068;
    if ((DAT_14cbf6068 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(DAT_14cbf6068);
    }
    param_1[0x24] = lVar1;
    FUN_149016550(&DAT_14c867518,local_20,param_1,&LAB_149016646);
    FUN_149016550(&DAT_14c872bf8,local_20,param_1,&LAB_149016654);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461dc884 FUN_1461dc884 body=132 status=ok
// SIG undefined FUN_1461dc884(void)

void FUN_1461dc884(void)

{
  undefined2 *puVar1;
  undefined1 auStack_38 [32];
  undefined2 *local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1400b22c2(&local_18,"Slide_Start");
  if (((DAT_14cc2d220 == '\x01') && ((DAT_14cc2d201 & 1) != 0)) && (DAT_14cc2d221 == '\x01')) {
    puVar1 = local_18;
    if (local_10 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    (*DAT_14cc2d210)(puVar1);
  }
  if (local_18 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461dc90a FUN_1461dc90a body=468 status=ok
// SIG undefined FUN_1461dc90a(void)

void FUN_1461dc90a(int *param_1,char *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_b8 [44];
  int local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_80 = *(undefined8 *)param_2;
  local_78 = *(undefined4 *)(param_2 + 8);
  FUN_1447715ec(&local_70,param_2 + 0x10);
  if (((*param_2 == '\x01') &&
      (FUN_144a659ac(param_2 + 0x10,&local_8c,1), local_8c == (int)DAT_14cb7bb98)) &&
     (local_88._4_4_ == DAT_14cb7bba0)) {
    if (*param_1 == 0) goto LAB_1461dc9cd;
    local_88 = *(undefined8 *)(param_1 + 1);
    local_8c = *param_1;
    FUN_144928d62(&local_70,1);
  }
  iVar3 = param_1[6];
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 4);
    lVar10 = 0;
    do {
      cVar8 = FUN_14493b798(lVar10 + lVar4,&local_80);
      if (cVar8 != '\0') {
        uVar9 = (int)(lVar10 >> 3) * 0x38e38e39;
        if ((-1 < (int)uVar9) && ((int)uVar9 < param_1[6])) {
          uVar5 = *(undefined4 *)(param_2 + 0x3c);
          uVar6 = *(undefined4 *)(param_2 + 0x40);
          uVar7 = *(undefined4 *)(param_2 + 0x44);
          puVar2 = (undefined4 *)
                   (*(longlong *)(param_1 + 4) + 0x38 + (ulonglong)(uVar9 & 0x7fffffff) * 0x48);
          *puVar2 = *(undefined4 *)(param_2 + 0x38);
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          goto LAB_1461dca2d;
        }
        break;
      }
      lVar10 = lVar10 + 0x48;
    } while ((longlong)iVar3 * 0x48 != lVar10);
  }
LAB_1461dc9cd:
  iVar3 = param_1[6];
  param_1[6] = iVar3 + 1U;
  if ((uint)param_1[7] < iVar3 + 1U) {
    FUN_1461dcae0(param_1 + 4,iVar3);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 4) + (longlong)iVar3 * 0x48);
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = local_80;
  *(undefined4 *)(puVar1 + 1) = local_78;
  FUN_1447715ec(puVar1 + 2,&local_70);
  uVar5 = *(undefined4 *)(param_2 + 0x3c);
  uVar6 = *(undefined4 *)(param_2 + 0x40);
  uVar7 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)puVar1 + 0x3c) = uVar5;
  *(undefined4 *)(puVar1 + 8) = uVar6;
  *(undefined4 *)((longlong)puVar1 + 0x44) = uVar7;
LAB_1461dca2d:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


