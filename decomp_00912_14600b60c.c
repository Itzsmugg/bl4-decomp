// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14600b60c FUN_14600b60c body=313 status=ok
// SIG undefined FUN_14600b60c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600b60c(void)

{
  if ((DAT_14c9bf40f & 2) == 0) {
    DAT_14c9bf40f = DAT_14c9bf40f | 2;
    _DAT_14c9bf3b0 = L"TBasePassVertexShaderPolicyParamType";
    _DAT_14c9bf3c8 = FUN_146826540;
    _DAT_14c9bf3d0 = FUN_146825d77;
    _DAT_14c9bf3d8 = FUN_146825fd6;
    _DAT_14c9bf3e0 = FUN_1407e02ea;
    _DAT_14c9bf3e8 = FUN_146826273;
    _DAT_14c9bf3c0 = FUN_14713e95e;
    _DAT_14c9bf400 = 0xffffffff00000110;
    _DAT_14c9bf408 = 8;
    DAT_14c9bf40c = 0;
    _DAT_14c9bf3f0 = &LAB_14713e994;
    _DAT_14c9bf410 = L"ReflectionCaptureBuffer";
    DAT_14c9bf43a = FUN_140850cc5();
    _DAT_14c9bf418 = FUN_14106a12a();
    _DAT_14c9bf428 = &LAB_14682652b;
    _DAT_14c9bf430 = 0x10000010e;
    _DAT_14c9bf438 = 0;
    _DAT_14c9bf420 = DAT_14c9bf3b8;
    DAT_14c9bf3b8 = &DAT_14c9bf410;
    FUN_14600b746();
    FUN_1407e00cc(&DAT_14c9bf3a8);
    return;
  }
  return;
}



// FUNCTION 14600b746 FUN_14600b746 body=225 status=ok
// SIG undefined FUN_14600b746(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600b746(void)

{
  _DAT_14c9bf440 = L"BASE";
  DAT_14c9bf46a = 4;
  _DAT_14c9bf448 = FUN_1411cad6c();
  _DAT_14c9bf450 = DAT_14c9bf3b8;
  _DAT_14c9bf458 = &LAB_14682652b;
  DAT_14c9bf3b8 = &DAT_14c9bf440;
  DAT_14c9bf40d = DAT_14c9bf40d + '\x01';
  _DAT_14c9bf460 = &DAT_100000108;
  if (*(char *)(_DAT_14c9bf448 + 100) != '\0') {
    DAT_14c9bf40e = DAT_14c9bf40e + '\x01';
  }
  _DAT_14c9bf470 = L"BASE";
  DAT_14c9bf49a = 4;
  _DAT_14c9bf478 = FUN_141092e92();
  _DAT_14c9bf480 = DAT_14c9bf3b8;
  _DAT_14c9bf488 = &LAB_14682652b;
  DAT_14c9bf3b8 = &DAT_14c9bf470;
  DAT_14c9bf40d = DAT_14c9bf40d + '\x01';
  _DAT_14c9bf490 = 0x100000000;
  if (*(char *)(_DAT_14c9bf478 + 100) != '\0') {
    DAT_14c9bf40e = DAT_14c9bf40e + '\x01';
  }
  return;
}



// FUNCTION 14600b828 FUN_14600b828 body=229 status=ok
// SIG undefined FUN_14600b828(void)

undefined8 * FUN_14600b828(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  FUN_1460d0fec();
  *param_1 = &PTR_FUN_14ba4b090;
  param_1[0x4f] = param_2;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x52));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x52),4000);
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  puVar2 = (undefined8 *)FUN_14600b90e();
  param_1[0x60] = *puVar2;
  lVar1 = puVar2[1];
  param_1[0x61] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x66));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x66),4000);
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  FUN_14600b97a(param_1);
  return param_1;
}



// FUNCTION 14600b90e FUN_14600b90e body=108 status=ok
// SIG undefined FUN_14600b90e(void)

undefined * FUN_14600b90e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf4e38) {
    FUN_144b3d300(&DAT_14cbf4e38);
    if (DAT_14cbf4e38 == -1) {
      FUN_14600ba48(&DAT_14cbf4e28);
      atexit(FUN_1443ad653);
      _Init_thread_footer(&DAT_14cbf4e38);
    }
  }
  return &DAT_14cbf4e28;
}



// FUNCTION 14600b97a FUN_14600b97a body=204 status=ok
// SIG undefined FUN_14600b97a(void)

void FUN_14600b97a(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = &DAT_14c872ce8;
  cVar2 = FUN_1449da20c(DAT_14c872ce0,L"OnlineSubsystemSteam",L"SteamPlatformGameplaySessionName");
  if (cVar2 == '\0') {
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    local_20 = (ulonglong)DAT_14c892fbc;
  }
  else {
    iVar1 = (int)uStack_30 + -1;
    if ((int)uStack_30 == 0) {
      iVar1 = 0;
    }
    FUN_1446f82e2(&local_20,iVar1,local_38,1);
  }
  *(ulonglong *)(param_1 + 0x288) = local_20;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14600ba48 FUN_14600ba48 body=209 status=ok
// SIG undefined FUN_14600ba48(void)

undefined8 * FUN_14600ba48(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_14ba46f50;
  puVar3[3] = 0;
  *param_1 = puVar3;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14ba46fb0;
  plVar4[2] = (longlong)puVar3;
  param_1[1] = plVar4;
  if (puVar3 != (undefined8 *)0x0) {
    if (plVar4 == (longlong *)0x0) {
      puVar3[1] = puVar3;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      puVar3[1] = puVar3;
      if ((longlong *)puVar3[2] != plVar4) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar2 = (longlong *)puVar3[2];
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
        puVar3[2] = plVar4;
      }
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 14600bb1a FUN_14600bb1a body=206 status=ok
// SIG undefined FUN_14600bb1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14600bb1a(void)

{
  if ((DAT_14ca90daf & 2) == 0) {
    DAT_14ca90daf = DAT_14ca90daf | 2;
    _DAT_14ca90d50 = L"FPixelShaderUtils::FRasterizeToRectsVS";
    _DAT_14ca90d68 = FUN_146826540;
    _DAT_14ca90d70 = FUN_146825d77;
    _DAT_14ca90d78 = FUN_146825fd6;
    _DAT_14ca90d80 = FUN_1407e02ea;
    _DAT_14ca90d88 = FUN_146826273;
    _DAT_14ca90d60 = FUN_147421f10;
    _DAT_14ca90da0 = 0xffffffff000000e0;
    _DAT_14ca90da8 = 8;
    DAT_14ca90dac = 0;
    _DAT_14ca90d90 = &LAB_147421f3c;
    FUN_14600bbe8();
    FUN_1407e00cc(&DAT_14ca90d48);
  }
  return &DAT_14ca90d48;
}



// FUNCTION 14600bbe8 FUN_14600bbe8 body=133 status=ok
// SIG undefined FUN_14600bbe8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600bbe8(void)

{
  _DAT_14ca94d58 = L"BASE";
  DAT_14ca94d82 = 4;
  FUN_140b35ae4();
  _DAT_14ca94d68 = DAT_14ca90d58;
  _DAT_14ca94d60 = &DAT_14ca8c6c8;
  _DAT_14ca94d70 = &LAB_14682652b;
  DAT_14ca90d58 = &DAT_14ca94d58;
  DAT_14ca90dad = DAT_14ca90dad + '\x01';
  _DAT_14ca94d78 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca90dae = DAT_14ca90dae + '\x01';
  }
  return;
}



// FUNCTION 14600bc6e FUN_14600bc6e body=115 status=ok
// SIG undefined FUN_14600bc6e(void)

void FUN_14600bc6e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_14600bce2(param_1 + 0x68);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_14600bd1a(param_1 + 8);
  return;
}



// FUNCTION 14600bce2 FUN_14600bce2 body=55 status=ok
// SIG undefined FUN_14600bce2(void)

void FUN_14600bce2(longlong *param_1)

{
  FUN_14600bd52(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14600bd1a FUN_14600bd1a body=55 status=ok
// SIG undefined FUN_14600bd1a(void)

void FUN_14600bd1a(longlong *param_1)

{
  FUN_14600beca(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14600bd52 FUN_14600bd52 body=374 status=ok
// SIG undefined FUN_14600bd52(void)

void FUN_14600bd52(longlong *param_1,int param_2)

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
      FUN_1468074a6((longlong)iStack_54 * 0x70 + *local_70);
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
    FUN_140875b54(param_1,param_2);
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



// FUNCTION 14600beca FUN_14600beca body=401 status=ok
// SIG undefined FUN_14600beca(void)

void FUN_14600beca(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
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
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64 * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar5) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar5) != 0) {
        FUN_1400020a8();
      }
      FUN_1408910a4(lVar2 + lVar5 + 8);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1448fc38a(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar4 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar4) {
        uVar3 = uVar4;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14600c05e FUN_14600c05e body=993 status=ok
// SIG undefined FUN_14600c05e(void)

void FUN_14600c05e(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  code *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14588cd9e();
  lVar1 = FUN_140391552(param_1);
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x2c0) == 0) {
      local_38 = FUN_1461c6576;
      local_30 = 0;
      FUN_14600c440(local_48,param_1);
      FUN_1446ddc76(&local_50,"Option_GameSettings_DiscreteValueUpdate",1);
      FUN_140391af6(lVar1,&local_38,local_50,local_48);
      *(code **)(param_1 + 0x2c0) = local_38;
      FUN_1449db362(local_48);
    }
    if (*(longlong *)(param_1 + 0x2c8) == 0) {
      local_38 = FUN_1461c674c;
      local_30 = 0;
      FUN_14600c440(local_48,param_1);
      FUN_1446ddc76(&local_58,"Option_GameSettings_SliderUpdate",1);
      FUN_140391af6(lVar1,&local_38,local_58,local_48);
      *(code **)(param_1 + 0x2c8) = local_38;
      FUN_1449db362(local_48);
    }
    if (*(longlong *)(param_1 + 0x2d0) == 0) {
      local_38 = FUN_148ebdfe0;
      local_30 = 0;
      FUN_14600c440(local_48,param_1);
      FUN_1446ddc76(&local_60,"Option_GameSettings_ColorUpdate",1);
      FUN_140391af6(lVar1,&local_38,local_60,local_48);
      *(code **)(param_1 + 0x2d0) = local_38;
      FUN_1449db362(local_48);
    }
    if (*(longlong *)(param_1 + 0x2d8) == 0) {
      local_38 = FUN_1461c6ea8;
      local_30 = 0;
      FUN_14600c440(local_48,param_1);
      FUN_1446ddc76(&local_68,"Option_GameSettings_SettingEnabledChanged",1);
      FUN_140391af6(lVar1,&local_38,local_68,local_48);
      *(code **)(param_1 + 0x2d8) = local_38;
      FUN_1449db362(local_48);
    }
    if (*(longlong *)(param_1 + 0x2e0) == 0) {
      local_38 = FUN_148ebe20c;
      local_30 = 0;
      FUN_14600c440(local_48,param_1);
      FUN_1446ddc76(&local_70,"Option_GameSettings_SettingDiscreteOptionsChanged",1);
      FUN_140391af6(lVar1,&local_38,local_70,local_48);
      *(code **)(param_1 + 0x2e0) = local_38;
      FUN_1449db362(local_48);
    }
    if (*(longlong *)(param_1 + 0x2e8) == 0) {
      local_38 = FUN_148ebe53e;
      local_30 = 0;
      FUN_14600c440(local_48,param_1);
      FUN_1446ddc76(&local_78,"Option_GameSettings_RebindingUpdated",1);
      FUN_140391af6(lVar1,&local_38,local_78,local_48);
      *(code **)(param_1 + 0x2e8) = local_38;
      FUN_1449db362(local_48);
    }
    if (*(longlong *)(param_1 + 0x2f0) == 0) {
      local_38 = (code *)&LAB_148ebe880;
      local_30 = 0;
      FUN_14600c440(local_48,param_1);
      FUN_1446ddc76(&local_80,"InputDeviceChanged",1);
      FUN_140391af6(lVar1,&local_38,local_80,local_48);
      *(code **)(param_1 + 0x2f0) = local_38;
      FUN_1449db362(local_48);
    }
    puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar2 = &PTR_FUN_14b9d0500;
    *(undefined1 *)(puVar2 + 1) = 1;
    FUN_14039144e(lVar1,puVar2);
  }
  FUN_14600c5ec(param_1);
  FUN_14600c77c(param_1);
  FUN_1446ddc76(&local_38,"PauseMenu",1);
  FUN_1415b967e(0,&local_38);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14600c440 FUN_14600c440 body=428 status=ok
// SIG undefined FUN_14600c440(void)

longlong * FUN_14600c440(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14600c520:
    *puVar5 = &PTR_LAB_14b4665f0;
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
    *puVar5 = &PTR_FUN_14b9d2a10;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14600c520;
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
    *puVar5 = &PTR_LAB_14b4665f0;
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
    *puVar5 = &PTR_FUN_14b9d2a10;
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



// FUNCTION 14600c5ec FUN_14600c5ec body=298 status=ok
// SIG undefined FUN_14600c5ec(void)

void FUN_14600c5ec(longlong *param_1)

{
  longlong lVar1;
  ushort *puVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  lVar1 = param_1[0x51];
  if (lVar1 == 0) {
    return;
  }
  uVar5 = (**(code **)(*param_1 + 0xc0))();
  lVar6 = FUN_1411c648e(uVar5);
  if (lVar6 == 0) {
    return;
  }
  lVar7 = FUN_14479d2ce(param_1 + 6);
  if (lVar7 == 0) {
    return;
  }
  lVar7 = FUN_14101baae(lVar7);
  if (lVar7 == 0) {
    return;
  }
  puVar8 = (undefined8 *)(lVar1 + 0x328);
  *(undefined8 *)(lVar1 + 0x328) = 0;
  *(undefined8 *)(lVar1 + 0x330) = 0;
  cVar3 = FUN_14600c716(lVar6,lVar7);
  puVar9 = puVar8;
  if (cVar3 != '\x01') {
    if (cVar3 == '\0') {
      puVar8 = &DAT_14cbe0bf0;
      goto LAB_14600c66b;
    }
    if (cVar3 == '\x02') {
      puVar9 = (undefined8 *)(lVar1 + 0x330);
      *puVar8 = DAT_14cbe0c00;
      uVar4 = FUN_148a07be4(lVar6,lVar7);
      switch(uVar4) {
      case 6:
        puVar8 = (undefined8 *)&DAT_14cbe0c18;
        break;
      case 7:
        puVar8 = (undefined8 *)&DAT_14cbe0c20;
        break;
      case 8:
      case 9:
        puVar8 = (undefined8 *)&DAT_14cbe0c38;
        break;
      case 10:
        puVar8 = &DAT_14cbe0c28;
        break;
      default:
        puVar8 = (undefined8 *)&DAT_14cbe0c10;
      }
      goto LAB_14600c66b;
    }
  }
  puVar8 = &DAT_14cbe0bf8;
LAB_14600c66b:
  *puVar9 = *puVar8;
  puVar2 = *(ushort **)(lVar1 + 0x80);
  if (puVar2 != (ushort *)0x0) {
    *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
  }
  return;
}



// FUNCTION 14600c716 FUN_14600c716 body=102 status=ok
// SIG undefined FUN_14600c716(void)

ulonglong FUN_14600c716(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  longlong lVar6;
  undefined7 uVar5;
  
  uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar4 = CONCAT71(uVar5,0xff);
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    lVar6 = (longlong)*(int *)(param_1 + 0x20) * 0x70;
    do {
      lVar2 = FUN_140059518(lVar3 + 8);
      if (lVar2 == param_2) {
        if (lVar3 != 0) {
          bVar1 = *(char *)(lVar3 + 0x68) + 1;
          if (bVar1 < 0xc) {
            uVar4 = CONCAT71(uVar5,(&DAT_14b47bb68)[bVar1]);
          }
          else {
            uVar4 = 0;
          }
        }
        break;
      }
      lVar3 = lVar3 + 0x70;
      lVar6 = lVar6 + -0x70;
    } while (lVar6 != 0);
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14600c77c FUN_14600c77c body=516 status=ok
// SIG undefined FUN_14600c77c(void)

void FUN_14600c77c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    FUN_1448d5e3c(&local_38,param_1 + 0x208);
    lVar4 = *(longlong *)(local_38 + 0x180);
    AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0x138));
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
    *(undefined1 *)(lVar3 + 0xf7) = *(undefined1 *)(lVar4 + 0x110);
    *(undefined1 *)(lVar3 + 0xf8) = *(undefined1 *)(lVar4 + 0x120);
    *(undefined1 *)(lVar3 + 0xf9) = *(undefined1 *)(lVar4 + 0x118);
    if (*(int *)(lVar3 + 0x154) != *(int *)(lVar4 + 0x10c)) {
      *(undefined1 *)(lVar3 + 0x150) = *(undefined1 *)(lVar4 + 0x108);
      *(undefined4 *)(lVar3 + 0x154) = *(undefined4 *)(lVar4 + 0x10c);
    }
    if (*(int *)(lVar3 + 0x134) != *(int *)(lVar4 + 0xec)) {
      *(undefined4 *)(lVar3 + 0x130) = *(undefined4 *)(lVar4 + 0xe8);
      *(undefined4 *)(lVar3 + 0x134) = *(undefined4 *)(lVar4 + 0xec);
    }
    if (*(int *)(lVar3 + 0x170) != *(int *)(lVar4 + 0xa8)) {
      uVar6 = *(undefined4 *)(lVar4 + 0x9c);
      uVar7 = *(undefined4 *)(lVar4 + 0xa0);
      uVar8 = *(undefined4 *)(lVar4 + 0xa4);
      *(undefined4 *)(lVar3 + 0x160) = *(undefined4 *)(lVar4 + 0x98);
      *(undefined4 *)(lVar3 + 0x164) = uVar6;
      *(undefined4 *)(lVar3 + 0x168) = uVar7;
      *(undefined4 *)(lVar3 + 0x16c) = uVar8;
      *(undefined4 *)(lVar3 + 0x170) = *(undefined4 *)(lVar4 + 0xa8);
    }
    if (*(int *)(lVar3 + 0x128) != *(int *)(lVar4 + 0xe0)) {
      FUN_144a787a6(lVar3 + 0x118,lVar4 + 0xd0);
      *(undefined4 *)(lVar3 + 0x128) = *(undefined4 *)(lVar4 + 0xe0);
    }
    if (*(int *)(lVar3 + 0x148) != *(int *)(lVar4 + 0x100)) {
      FUN_144a787a6(lVar3 + 0x138,lVar4 + 0xf0);
      *(undefined4 *)(lVar3 + 0x148) = *(undefined4 *)(lVar4 + 0x100);
    }
    if (*(int *)(lVar3 + 0x110) != *(int *)(lVar4 + 0xc0)) {
      FUN_144a787a6(lVar3 + 0x100,lVar4 + 0xb0);
      *(undefined4 *)(lVar3 + 0x110) = *(undefined4 *)(lVar4 + 0xc0);
    }
    puVar5 = *(ushort **)(lVar3 + 0x80);
    if (puVar5 != (ushort *)0x0) {
      *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x138));
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14600c982 FUN_14600c982 body=170 status=ok
// SIG undefined FUN_14600c982(void)

void FUN_14600c982(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_d8 [44];
  undefined4 local_ac;
  undefined1 local_a8 [136];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_20 = 0x1100000000;
  local_ac = 0;
  (**(code **)(*param_1 + 0x30))(param_1,local_a8);
  lVar4 = FUN_14486d71a(local_a8);
  lVar3 = param_1[2];
  if (lVar3 != lVar4) {
    param_1[2] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14600ca2e FUN_14600ca2e body=80 status=ok
// SIG undefined FUN_14600ca2e(void)

void FUN_14600ca2e(undefined8 param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_3;
  iVar2 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar2 + 1U) {
    FUN_14738ac8a(param_2,iVar2);
  }
  *(ulonglong *)(param_2 + (longlong)iVar2 * 8) = (ulonglong)((uVar1 & 0xff) << 8) | 0x800020000;
  return;
}



// FUNCTION 14600ca7e FUN_14600ca7e body=182 status=ok
// SIG undefined FUN_14600ca7e(void)

void FUN_14600ca7e(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  
  *param_3 = 0;
  if (DAT_14c762a1d != '\0') {
    puVar1 = *(undefined8 **)(param_1 + 0x1c80);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x80;
      *(undefined4 *)(puVar1 + 6) = 0xffffffff;
      if (puVar1 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)0x0;
      }
      else {
        *(undefined8 **)(param_1 + 0x1c80) = puVar1;
      }
    }
    FUN_14600cb34(puVar1,param_2,*(undefined8 *)(param_1 + 0x10),param_3);
    return;
  }
  FUN_140584627(*(undefined8 *)(param_1 + 0x10),param_2,0,0,0,0,0,0);
  return;
}



// FUNCTION 14600cb34 FUN_14600cb34 body=354 status=ok
// SIG undefined FUN_14600cb34(void)

void FUN_14600cb34(longlong *param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar3 = *(longlong *)(param_2 + 0x18);
    uVar2 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar4 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x20) == lVar3) {
          if ((lVar1 != 0) && (lVar1 + 8 != 0)) {
            while( true ) {
              iVar4 = *(int *)(lVar1 + 0x10);
              if ((longlong)iVar4 < 1) break;
              local_48 = *(undefined8 *)(*(longlong *)(lVar1 + 8) + -8 + (longlong)iVar4 * 8);
              *(int *)(lVar1 + 0x10) = iVar4 + -1;
              FUN_14600cca0(lVar1 + 8);
              lVar3 = FUN_14479d2ce(&local_48);
              if (lVar3 != 0) {
                *param_4 = 1;
                    /* WARNING: Subroutine does not return */
                FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
              }
            }
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x18);
      } while (iVar4 != -1);
    }
  }
  *param_4 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  local_68 = 0;
  FUN_140584627(param_3,param_2,0,0);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14600cca0 FUN_14600cca0 body=62 status=ok
// SIG undefined FUN_14600cca0(void)

void FUN_14600cca0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14600ccde(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 14600ccde FUN_14600ccde body=89 status=ok
// SIG undefined FUN_14600ccde(void)

ulonglong FUN_14600ccde(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14600cd38 FUN_14600cd38 body=239 status=ok
// SIG undefined FUN_14600cd38(void)

void FUN_14600cd38(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined1 *local_30;
  undefined8 **local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = param_2;
  (**(code **)(*param_1 + 0x7a0))();
  cVar1 = (**(code **)(*param_1 + 0x950))(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x958))(param_1);
  }
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  cVar1 = FUN_144a92582(param_2,DAT_14c893054);
  if (cVar1 == '\0') {
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    cVar1 = FUN_144a92582(param_2,DAT_14c893048);
    if (cVar1 == '\0') {
      local_38 = &local_20;
      local_28 = &local_38;
      local_30 = &LAB_143d55164;
      FUN_14608fa08(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14600ce28 FUN_14600ce28 body=40 status=ok
// SIG undefined FUN_14600ce28(void)

undefined8 FUN_14600ce28(undefined8 param_1,int param_2)

{
  FUN_14600ce50();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14600ce50 FUN_14600ce50 body=211 status=ok
// SIG undefined FUN_14600ce50(void)

void FUN_14600ce50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b447dc0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_145cbd08b(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14600cf24 FUN_14600cf24 body=576 status=ok
// SIG undefined FUN_14600cf24(void)

void FUN_14600cf24(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  longlong local_108;
  longlong local_100;
  undefined1 local_f8 [4];
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_dc [12];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  longlong local_a8;
  undefined1 local_98 [40];
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_108 = param_2;
  FUN_14600d166(param_1,local_98);
  if (0 < *(int *)(param_1 + 0x90)) {
    local_100 = local_108 + 0x2c0;
    lVar8 = 0;
    lVar7 = 0;
    do {
      local_e0 = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 8 + lVar8);
      local_e8 = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + lVar8);
      lVar4 = FUN_140823ef2(param_1,local_108,&local_e8);
      iVar2 = *(int *)(lVar4 + 0x60);
      uVar6 = iVar2 + 1;
      *(uint *)(lVar4 + 0x60) = uVar6;
      if (*(uint *)(lVar4 + 100) < uVar6) {
        FUN_140823334((longlong *)(lVar4 + 0x58));
      }
      puVar1 = (undefined8 *)(*(longlong *)(lVar4 + 0x58) + (longlong)iVar2 * 0x28);
      puVar1[4] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar5 = &DAT_14cbcdd30;
      if (*(char *)(param_1 + 0x78) == '\x01') {
        puVar5 = &DAT_14cbcdd20;
      }
      *puVar1 = *puVar5;
      local_d0 = CONCAT31(local_d0._1_3_,2);
      local_c4 = 1;
      uStack_cc = 0;
      uStack_c8 = 0;
      FUN_140821fec(puVar1,local_98,&local_d0,1);
      lVar4 = FUN_1406b2efc(local_100);
      local_f8[0] = 1;
      local_ec = 1;
      local_f4 = DAT_14cb7c588;
      local_d0 = (undefined4)DAT_14cbcd1e8;
      uStack_cc = (undefined4)((ulonglong)DAT_14cbcd1e8 >> 0x20);
      FUN_1401533ba(local_dc,&local_d0,1);
      FUN_140fe4afa(param_1,&local_d0,&local_e8,local_dc);
      local_118 = 0;
      FUN_140641812(lVar4 + 0x170,&local_d0,local_f8,0);
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0xc;
    } while (lVar7 < *(int *)(param_1 + 0x90));
  }
  if (*(char *)(param_1 + 0x78) == '\0') {
    uVar3 = *(undefined4 *)(param_1 + 0x80);
  }
  else {
    if (*(char *)(param_1 + 0x78) != '\x01') goto LAB_14600d111;
    uVar3 = *(undefined4 *)(param_1 + 0x7c);
  }
  FUN_14600d188(local_108 + 0x2c0,uVar3);
LAB_14600d111:
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14600d166 FUN_14600d166 body=34 status=ok
// SIG undefined FUN_14600d166(void)

undefined8 FUN_14600d166(undefined8 param_1,undefined8 param_2)

{
  FUN_1408234aa();
  return param_2;
}



// FUNCTION 14600d188 FUN_14600d188 body=141 status=ok
// SIG undefined FUN_14600d188(void)

void FUN_14600d188(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined1 local_50;
  undefined1 local_48;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_50 = 1;
  local_48 = 0;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0xf00000d0;
  local_18 = 0;
  local_54 = param_2;
  FUN_140fcbf3a(0,local_58);
  plVar3 = plStack_38;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14600d216 FUN_14600d216 body=68 status=ok
// SIG undefined FUN_14600d216(void)

void FUN_14600d216(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x388);
  memset(_Dst,0,0x388);
  FUN_14600d25a(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 14600d25a FUN_14600d25a body=183 status=ok
// SIG undefined FUN_14600d25a(void)

undefined8 * FUN_14600d25a(undefined8 *param_1)

{
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8b9400;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_14124e07a(param_1 + 0x1a);
  FUN_14124e07a(param_1 + 0x2a);
  FUN_145a02f58(param_1 + 0x3a);
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  FUN_144a5dc74(param_1 + 99);
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined4 *)((longlong)param_1 + 0x337) = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined1 *)(param_1 + 0x6a) = 1;
  *(undefined4 *)((longlong)param_1 + 0x354) = 1;
  *(undefined1 *)(param_1 + 0x70) = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  return param_1;
}



// FUNCTION 14600d312 FUN_14600d312 body=159 status=ok
// SIG undefined FUN_14600d312(void)

undefined8 * FUN_14600d312(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_14600d3b2(&local_38,param_3);
  FUN_14600d430(param_1 + 0x20,local_40,&local_38);
  FUN_1449db362(&local_38);
  if (((int)param_3[1] == 0) || (param_3 = (longlong *)*param_3, param_3 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*param_3 + 0x38))(param_3,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14600d3b2 FUN_14600d3b2 body=124 status=ok
// SIG undefined FUN_14600d3b2(void)

void FUN_14600d3b2(longlong *param_1,longlong *param_2)

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



// FUNCTION 14600d430 FUN_14600d430 body=216 status=ok
// SIG undefined FUN_14600d430(void)

undefined8 * FUN_14600d430(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14600d50a FUN_14600d50a body=159 status=ok
// SIG undefined FUN_14600d50a(void)

undefined8 * FUN_14600d50a(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_14600d5aa(&local_38,param_3);
  FUN_14600d628(param_1 + 0x38,local_40,&local_38);
  FUN_1449db362(&local_38);
  if (((int)param_3[1] == 0) || (param_3 = (longlong *)*param_3, param_3 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*param_3 + 0x38))(param_3,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14600d5aa FUN_14600d5aa body=124 status=ok
// SIG undefined FUN_14600d5aa(void)

void FUN_14600d5aa(longlong *param_1,longlong *param_2)

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



// FUNCTION 14600d628 FUN_14600d628 body=216 status=ok
// SIG undefined FUN_14600d628(void)

undefined8 * FUN_14600d628(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14600d70c FUN_14600d70c body=372 status=ok
// SIG undefined FUN_14600d70c(void)

undefined8 * FUN_14600d70c(undefined8 *param_1)

{
  FUN_1415b9a1c();
  *param_1 = &PTR_FUN_14b1837b0;
  param_1[5] = &PTR_FUN_14b183c50;
  param_1[6] = &PTR_LAB_14b183c90;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 2;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 2;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x57] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x58) = 1;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined8 *)((longlong)param_1 + 0x354) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x35c) = 0;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 1;
  *(undefined1 *)((longlong)param_1 + 0x381) = 1;
  return param_1;
}



// FUNCTION 14600d880 FUN_14600d880 body=26 status=ok
// SIG undefined FUN_14600d880(void)

undefined8 FUN_14600d880(longlong param_1,undefined8 param_2)

{
  FUN_14600d89a(param_1 + 0x18);
  return param_2;
}



// FUNCTION 14600d89a FUN_14600d89a body=476 status=ok
// SIG undefined FUN_14600d89a(void)

undefined8 * FUN_14600d89a(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((DAT_14cb81ba0 != (longlong *)0x0 && DAT_14cb81ba8 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb81ba0 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cb81ba0;
    if (DAT_14cb81ba8 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_40);
    goto LAB_14600d9a4;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *puVar3 = &PTR_FUN_14b410280;
  FUN_1412cbb62(puVar3 + 4);
  *puVar3 = &PTR_FUN_14b410200;
  puVar3[4] = &PTR_FUN_14b410220;
  puVar3[6] = 0;
  puVar3[7] = 0;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b4102a0;
  plVar4[2] = (longlong)puVar3;
  local_38 = plVar4;
  if (puVar3 == (undefined8 *)0x0) {
    local_40 = (undefined8 *)0x0;
    goto LAB_14600d9a4;
  }
  local_40 = puVar3;
  if (((puVar3[2] != 0) && (puVar3[3] != 0)) && (0 < *(int *)(puVar3[3] + 8))) goto LAB_14600d9a4;
  if (plVar4 == (longlong *)0x0) {
    puVar3[2] = puVar3;
    plVar5 = (longlong *)puVar3[3];
    if (plVar5 != (longlong *)0x0) {
LAB_14600da1b:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      puVar3[3] = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_14600d99a;
    }
    local_38 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    puVar3[2] = puVar3;
    if ((longlong *)puVar3[3] != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = (longlong *)puVar3[3];
      if (plVar5 != (longlong *)0x0) goto LAB_14600da1b;
      puVar3[3] = plVar4;
    }
LAB_14600d99a:
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_14600d9a4:
  *param_2 = local_40;
  param_2[1] = local_38;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14600da7e FUN_14600da7e body=281 status=ok
// SIG undefined FUN_14600da7e(void)

void FUN_14600da7e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_141237922();
  lVar1 = FUN_14584ed68(param_2);
  if (lVar1 != 0) {
    local_48 = FUN_14428273e;
    local_40 = 0;
    FUN_1415b9c86(lVar1 + 0x30,&local_38,param_1,&local_48);
    *(undefined8 *)(param_1 + 0xa0) = local_38;
    local_48 = FUN_1442828f8;
    local_40 = 0;
    FUN_1415b9c86(lVar1 + 0x48,&local_38,param_1,&local_48);
    *(undefined8 *)(param_1 + 0xa8) = local_38;
    local_48 = FUN_144282a7e;
    local_40 = 0;
    FUN_1415b9c86(lVar1 + 0x78,&local_38,param_1,&local_48);
    *(undefined8 *)(param_1 + 0xb0) = local_38;
  }
  local_48 = (code *)&LAB_145ad7012;
  local_40 = 0;
  FUN_14600db98(&local_38,param_1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14600db98 FUN_14600db98 body=248 status=ok
// SIG undefined FUN_14600db98(void)

undefined8 FUN_14600db98(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_149e063e0;
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
  *local_40 = &PTR_FUN_14b9b3690;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14134bd86(&DAT_14c964278,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14600dc9a FUN_14600dc9a body=558 status=ok
// SIG undefined FUN_14600dc9a(void)

undefined8 * FUN_14600dc9a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140834366(param_1,uVar1);
  *param_1 = &PTR_FUN_14b19c230;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3ec) = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  FUN_140f23ff6(param_1 + 0x81);
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x554) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x55c) = 0;
  param_1[0xad] = 0;
  *(undefined4 *)(param_1 + 0xae) = 0;
  param_1[0xb3] = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5ac) = 0;
  param_1[0xb7] = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5f4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5fc) = 0;
  param_1[0xc1] = 0;
  *(undefined4 *)(param_1 + 0xc2) = 0;
  param_1[199] = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x644) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x64c) = 0;
  param_1[0xcb] = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  param_1[0xd2] = 0;
  *(undefined4 *)(param_1 + 0xd3) = 0;
  param_1[0xcf] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  *(undefined8 *)((longlong)param_1 + 0x69c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6a4) = 0;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0x41a00000;
  param_1[0xdf] = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  *(undefined8 *)((longlong)param_1 + 0x704) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x70c) = 0;
  param_1[0xe3] = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  param_1[0xe9] = 0;
  *(undefined4 *)(param_1 + 0xea) = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x754) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x75c) = 0;
  param_1[0xed] = 0;
  *(undefined4 *)(param_1 + 0xee) = 0;
  param_1[0xf3] = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7ac) = 0;
  param_1[0xf7] = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 8;
  return param_1;
}



// FUNCTION 14600dec8 FUN_14600dec8 body=50 status=ok
// SIG undefined FUN_14600dec8(void)

void FUN_14600dec8(undefined8 param_1)

{
  FUN_144a63f30();
  FUN_145adf2ae();
                    /* WARNING: Could not recover jumptable at 0x00014600def7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_14cbf71a8 + 0x98))(&DAT_14cbf71a8,param_1);
  return;
}



// FUNCTION 14600defa FUN_14600defa body=187 status=ok
// SIG undefined FUN_14600defa(void)

void FUN_14600defa(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x78));
  uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  plVar2 = (longlong *)FUN_14600dfb6(param_1 + 0x18,uVar1 >> 0x10 ^ uVar1,&local_30);
  if (*plVar2 == 0) {
    lVar3 = FUN_14001cc68(0x140,0x10);
    FUN_14600e074(lVar3,local_30);
    *plVar2 = lVar3;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x78));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14600dfb6 FUN_14600dfb6 body=189 status=ok
// SIG undefined FUN_14600dfb6(void)

longlong * FUN_14600dfb6(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_14600e006;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14600e14a(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_14600e006:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 14600e074 FUN_14600e074 body=213 status=ok
// SIG undefined FUN_14600e074(void)

undefined8 * FUN_14600e074(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  param_1[0x17] = puVar1;
  param_1[0x16] = puVar1;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x22));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x22),4000);
  return param_1;
}



// FUNCTION 14600e14a FUN_14600e14a body=275 status=ok
// SIG undefined FUN_14600e14a(void)

undefined4 * FUN_14600e14a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14600e2e0(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar1 = FUN_14600e25e(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_14600e3c8(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14600e25e FUN_14600e25e body=130 status=ok
// SIG undefined FUN_14600e25e(void)

undefined8 FUN_14600e25e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_146067120((int)lVar3,*param_4);
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



// FUNCTION 14600e2e0 FUN_14600e2e0 body=231 status=ok
// SIG undefined FUN_14600e2e0(void)

int * FUN_14600e2e0(longlong *param_1,int *param_2)

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



// FUNCTION 14600e3c8 FUN_14600e3c8 body=483 status=ok
// SIG undefined FUN_14600e3c8(void)

void FUN_14600e3c8(longlong *param_1)

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



// FUNCTION 14600e5ac FUN_14600e5ac body=287 status=ok
// SIG undefined FUN_14600e5ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14600e5ac(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ada78) {
    FUN_144b3d300(&DAT_14c9ada78);
    if (DAT_14c9ada78 == -1) {
      FUN_14600e6cc();
      FUN_140db5666(&DAT_14c9ad9d0,2,&DAT_14c9ad968,
                    L"TBasePassVSFSelfShadowedCachedPointIndirectLightingPolicy",
                    L"/Engine/Private/BasePassVertexShader.usf",L"Main",0,1,FUN_14712b714,
                    FUN_14712b6c0,FUN_141748b20,&LAB_14712b6bc,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9ad9d0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c2d7);
      _Init_thread_footer(&DAT_14c9ada78);
    }
  }
  return &DAT_14c9ad9d0;
}



// FUNCTION 14600e6cc FUN_14600e6cc body=205 status=ok
// SIG undefined FUN_14600e6cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600e6cc(void)

{
  if ((DAT_14c9ad9cf & 2) == 0) {
    DAT_14c9ad9cf = DAT_14c9ad9cf | 2;
    _DAT_14c9ad970 = L"TBasePassVSFSelfShadowedCachedPointIndirectLightingPolicy";
    _DAT_14c9ad988 = FUN_146826540;
    _DAT_14c9ad990 = FUN_146825d77;
    _DAT_14c9ad998 = FUN_146825fd6;
    _DAT_14c9ad9a0 = FUN_1407e02ea;
    _DAT_14c9ad9a8 = FUN_146826273;
    _DAT_14c9ad980 = FUN_14712b682;
    _DAT_14c9ad9c0 = 0xffffffff00000110;
    _DAT_14c9ad9c8 = 8;
    DAT_14c9ad9cc = 0;
    _DAT_14c9ad9b0 = &LAB_14712b6b8;
    FUN_14600e79a();
    FUN_1407e00cc(&DAT_14c9ad968);
    return;
  }
  return;
}



// FUNCTION 14600e79a FUN_14600e79a body=133 status=ok
// SIG undefined FUN_14600e79a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600e79a(void)

{
  _DAT_14c9b9840 = L"BASE";
  DAT_14c9b986a = 4;
  FUN_14600e820();
  _DAT_14c9b9850 = DAT_14c9ad978;
  _DAT_14c9b9848 = &DAT_14c9b9870;
  _DAT_14c9b9858 = &LAB_14682652b;
  DAT_14c9ad978 = &DAT_14c9b9840;
  DAT_14c9ad9cd = DAT_14c9ad9cd + '\x01';
  _DAT_14c9b9860 = 0x100000000;
  if (DAT_14c9b98d4 != '\0') {
    DAT_14c9ad9ce = DAT_14c9ad9ce + '\x01';
  }
  return;
}



// FUNCTION 14600e820 FUN_14600e820 body=205 status=ok
// SIG undefined FUN_14600e820(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600e820(void)

{
  if ((DAT_14c9b98d7 & 2) == 0) {
    DAT_14c9b98d7 = DAT_14c9b98d7 | 2;
    _DAT_14c9b9878 = L"TBasePassVertexShaderBaseType";
    _DAT_14c9b9890 = FUN_146826540;
    _DAT_14c9b9898 = FUN_146825d77;
    _DAT_14c9b98a0 = FUN_146825fd6;
    _DAT_14c9b98a8 = FUN_1407e02ea;
    _DAT_14c9b98b0 = FUN_146826273;
    _DAT_14c9b9888 = FUN_14713c204;
    _DAT_14c9b98c8 = 0xffffffff00000110;
    _DAT_14c9b98d0 = 8;
    DAT_14c9b98d4 = 0;
    _DAT_14c9b98b8 = &LAB_14713c23a;
    FUN_14600e8ee();
    FUN_1407e00cc(&DAT_14c9b9870);
    return;
  }
  return;
}



// FUNCTION 14600e8ee FUN_14600e8ee body=133 status=ok
// SIG undefined FUN_14600e8ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600e8ee(void)

{
  _DAT_14c9b98d8 = L"BASE";
  DAT_14c9b9902 = 4;
  FUN_14600e974();
  _DAT_14c9b98e8 = DAT_14c9b9880;
  _DAT_14c9b98e0 = &DAT_14c9b9908;
  _DAT_14c9b98f0 = &LAB_14682652b;
  DAT_14c9b9880 = &DAT_14c9b98d8;
  DAT_14c9b98d5 = DAT_14c9b98d5 + '\x01';
  _DAT_14c9b98f8 = 0x100000000;
  if (DAT_14c9b996c != '\0') {
    DAT_14c9b98d6 = DAT_14c9b98d6 + '\x01';
  }
  return;
}



// FUNCTION 14600e974 FUN_14600e974 body=313 status=ok
// SIG undefined FUN_14600e974(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600e974(void)

{
  if ((DAT_14c9b996f & 2) == 0) {
    DAT_14c9b996f = DAT_14c9b996f | 2;
    _DAT_14c9b9910 = L"TBasePassVertexShaderPolicyParamType";
    _DAT_14c9b9928 = FUN_146826540;
    _DAT_14c9b9930 = FUN_146825d77;
    _DAT_14c9b9938 = FUN_146825fd6;
    _DAT_14c9b9940 = FUN_1407e02ea;
    _DAT_14c9b9948 = FUN_146826273;
    _DAT_14c9b9920 = FUN_14713c23e;
    _DAT_14c9b9960 = 0xffffffff00000110;
    _DAT_14c9b9968 = 8;
    DAT_14c9b996c = 0;
    _DAT_14c9b9950 = &LAB_14713c274;
    _DAT_14c9b9970 = L"ReflectionCaptureBuffer";
    DAT_14c9b999a = FUN_140850cc5();
    _DAT_14c9b9978 = FUN_14106a12a();
    _DAT_14c9b9988 = &LAB_14682652b;
    _DAT_14c9b9990 = &DAT_100000108;
    _DAT_14c9b9998 = 0;
    _DAT_14c9b9980 = DAT_14c9b9918;
    DAT_14c9b9918 = &DAT_14c9b9970;
    FUN_14600eaae();
    FUN_1407e00cc(&DAT_14c9b9908);
    return;
  }
  return;
}



// FUNCTION 14600eaae FUN_14600eaae body=235 status=ok
// SIG undefined FUN_14600eaae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600eaae(void)

{
  _DAT_14c9b99a0 = L"BASE";
  DAT_14c9b99ca = 4;
  FUN_145e16c80();
  _DAT_14c9b99b0 = DAT_14c9b9918;
  _DAT_14c9b99a8 = &DAT_14c9b8d48;
  _DAT_14c9b99b8 = &LAB_14682652b;
  DAT_14c9b9918 = &DAT_14c9b99a0;
  DAT_14c9b996d = DAT_14c9b996d + '\x01';
  _DAT_14c9b99c0 = &DAT_100000108;
  if (DAT_14c9b8dac != '\0') {
    DAT_14c9b996e = DAT_14c9b996e + '\x01';
  }
  _DAT_14c9b99d0 = L"BASE";
  DAT_14c9b99fa = 4;
  _DAT_14c9b99d8 = FUN_141092e92();
  _DAT_14c9b99e0 = DAT_14c9b9918;
  _DAT_14c9b99e8 = &LAB_14682652b;
  DAT_14c9b9918 = &DAT_14c9b99d0;
  DAT_14c9b996d = DAT_14c9b996d + '\x01';
  _DAT_14c9b99f0 = 0x100000000;
  if (*(char *)(_DAT_14c9b99d8 + 100) != '\0') {
    DAT_14c9b996e = DAT_14c9b996e + '\x01';
  }
  return;
}



// FUNCTION 14600eb9a FUN_14600eb9a body=287 status=ok
// SIG undefined FUN_14600eb9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14600eb9a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ae980) {
    FUN_144b3d300(&DAT_14c9ae980);
    if (DAT_14c9ae980 == -1) {
      FUN_14600ecba();
      FUN_140db5666(&DAT_14c9ae8d8,2,&DAT_14c9ae870,
                    L"TBasePassVSFSelfShadowedVolumetricLightmapPolicy",
                    L"/Engine/Private/BasePassVertexShader.usf",L"Main",0,1,FUN_14712c0b4,
                    FUN_14712c060,FUN_14174b288,&LAB_14712c05c,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9ae8d8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c373);
      _Init_thread_footer(&DAT_14c9ae980);
    }
  }
  return &DAT_14c9ae8d8;
}



// FUNCTION 14600ecba FUN_14600ecba body=205 status=ok
// SIG undefined FUN_14600ecba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600ecba(void)

{
  if ((DAT_14c9ae8d7 & 2) == 0) {
    DAT_14c9ae8d7 = DAT_14c9ae8d7 | 2;
    _DAT_14c9ae878 = L"TBasePassVSFSelfShadowedVolumetricLightmapPolicy";
    _DAT_14c9ae890 = FUN_146826540;
    _DAT_14c9ae898 = FUN_146825d77;
    _DAT_14c9ae8a0 = FUN_146825fd6;
    _DAT_14c9ae8a8 = FUN_1407e02ea;
    _DAT_14c9ae8b0 = FUN_146826273;
    _DAT_14c9ae888 = FUN_14712c022;
    _DAT_14c9ae8c8 = 0xffffffff00000110;
    _DAT_14c9ae8d0 = 8;
    DAT_14c9ae8d4 = 0;
    _DAT_14c9ae8b8 = &LAB_14712c058;
    FUN_14600ed88();
    FUN_1407e00cc(&DAT_14c9ae870);
    return;
  }
  return;
}



// FUNCTION 14600ed88 FUN_14600ed88 body=133 status=ok
// SIG undefined FUN_14600ed88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600ed88(void)

{
  _DAT_14c9ba4c0 = L"BASE";
  DAT_14c9ba4ea = 4;
  FUN_14600ee0e();
  _DAT_14c9ba4d0 = DAT_14c9ae880;
  _DAT_14c9ba4c8 = &DAT_14c9ba4f0;
  _DAT_14c9ba4d8 = &LAB_14682652b;
  DAT_14c9ae880 = &DAT_14c9ba4c0;
  DAT_14c9ae8d5 = DAT_14c9ae8d5 + '\x01';
  _DAT_14c9ba4e0 = 0x100000000;
  if (DAT_14c9ba554 != '\0') {
    DAT_14c9ae8d6 = DAT_14c9ae8d6 + '\x01';
  }
  return;
}



// FUNCTION 14600ee0e FUN_14600ee0e body=205 status=ok
// SIG undefined FUN_14600ee0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600ee0e(void)

{
  if ((DAT_14c9ba557 & 2) == 0) {
    DAT_14c9ba557 = DAT_14c9ba557 | 2;
    _DAT_14c9ba4f8 = L"TBasePassVertexShaderBaseType";
    _DAT_14c9ba510 = FUN_146826540;
    _DAT_14c9ba518 = FUN_146825d77;
    _DAT_14c9ba520 = FUN_146825fd6;
    _DAT_14c9ba528 = FUN_1407e02ea;
    _DAT_14c9ba530 = FUN_146826273;
    _DAT_14c9ba508 = FUN_14713c6a6;
    _DAT_14c9ba548 = 0xffffffff00000110;
    _DAT_14c9ba550 = 8;
    DAT_14c9ba554 = 0;
    _DAT_14c9ba538 = &LAB_14713c6dc;
    FUN_14600eedc();
    FUN_1407e00cc(&DAT_14c9ba4f0);
    return;
  }
  return;
}



// FUNCTION 14600eedc FUN_14600eedc body=133 status=ok
// SIG undefined FUN_14600eedc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600eedc(void)

{
  _DAT_14c9ba558 = L"BASE";
  DAT_14c9ba582 = 4;
  FUN_14600ef62();
  _DAT_14c9ba568 = DAT_14c9ba500;
  _DAT_14c9ba560 = &DAT_14c9ba588;
  _DAT_14c9ba570 = &LAB_14682652b;
  DAT_14c9ba500 = &DAT_14c9ba558;
  DAT_14c9ba555 = DAT_14c9ba555 + '\x01';
  _DAT_14c9ba578 = 0x100000000;
  if (DAT_14c9ba5ec != '\0') {
    DAT_14c9ba556 = DAT_14c9ba556 + '\x01';
  }
  return;
}



// FUNCTION 14600ef62 FUN_14600ef62 body=313 status=ok
// SIG undefined FUN_14600ef62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600ef62(void)

{
  if ((DAT_14c9ba5ef & 2) == 0) {
    DAT_14c9ba5ef = DAT_14c9ba5ef | 2;
    _DAT_14c9ba590 = L"TBasePassVertexShaderPolicyParamType";
    _DAT_14c9ba5a8 = FUN_146826540;
    _DAT_14c9ba5b0 = FUN_146825d77;
    _DAT_14c9ba5b8 = FUN_146825fd6;
    _DAT_14c9ba5c0 = FUN_1407e02ea;
    _DAT_14c9ba5c8 = FUN_146826273;
    _DAT_14c9ba5a0 = FUN_14713c6e0;
    _DAT_14c9ba5e0 = 0xffffffff00000110;
    _DAT_14c9ba5e8 = 8;
    DAT_14c9ba5ec = 0;
    _DAT_14c9ba5d0 = &LAB_14713c716;
    _DAT_14c9ba5f0 = L"ReflectionCaptureBuffer";
    DAT_14c9ba61a = FUN_140850cc5();
    _DAT_14c9ba5f8 = FUN_14106a12a();
    _DAT_14c9ba608 = &LAB_14682652b;
    _DAT_14c9ba610 = &DAT_100000108;
    _DAT_14c9ba618 = 0;
    _DAT_14c9ba600 = DAT_14c9ba598;
    DAT_14c9ba598 = &DAT_14c9ba5f0;
    FUN_14600f09c();
    FUN_1407e00cc(&DAT_14c9ba588);
    return;
  }
  return;
}



// FUNCTION 14600f09c FUN_14600f09c body=235 status=ok
// SIG undefined FUN_14600f09c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14600f09c(void)

{
  _DAT_14c9ba620 = L"BASE";
  DAT_14c9ba64a = 4;
  FUN_145e16c80();
  _DAT_14c9ba630 = DAT_14c9ba598;
  _DAT_14c9ba628 = &DAT_14c9b8d48;
  _DAT_14c9ba638 = &LAB_14682652b;
  DAT_14c9ba598 = &DAT_14c9ba620;
  DAT_14c9ba5ed = DAT_14c9ba5ed + '\x01';
  _DAT_14c9ba640 = &DAT_100000108;
  if (DAT_14c9b8dac != '\0') {
    DAT_14c9ba5ee = DAT_14c9ba5ee + '\x01';
  }
  _DAT_14c9ba650 = L"BASE";
  DAT_14c9ba67a = 4;
  _DAT_14c9ba658 = FUN_141092e92();
  _DAT_14c9ba660 = DAT_14c9ba598;
  _DAT_14c9ba668 = &LAB_14682652b;
  DAT_14c9ba598 = &DAT_14c9ba650;
  DAT_14c9ba5ed = DAT_14c9ba5ed + '\x01';
  _DAT_14c9ba670 = 0x100000000;
  if (*(char *)(_DAT_14c9ba658 + 100) != '\0') {
    DAT_14c9ba5ee = DAT_14c9ba5ee + '\x01';
  }
  return;
}



// FUNCTION 14600f188 FUN_14600f188 body=26 status=ok
// SIG undefined FUN_14600f188(void)

void FUN_14600f188(undefined8 param_1)

{
  FUN_14600f1a2();
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 14600f1a2 FUN_14600f1a2 body=226 status=ok
// SIG undefined FUN_14600f1a2(void)

void FUN_14600f1a2(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  
  plVar1 = (longlong *)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0x50);
  if (iVar2 != 0) {
    if (0 < iVar2) {
      uVar7 = iVar2 + 1;
      uVar4 = (ulonglong)(iVar2 - 1);
      lVar8 = uVar4 * 0x620;
      lVar5 = lVar8 + 0x610;
      do {
        lVar6 = lVar5 + (uVar4 / 5) * -0x1ea0;
        lVar3 = *(longlong *)(*plVar1 + ((ulonglong)(uVar7 - 2) / 5) * 8);
        if (*(char *)(lVar3 + lVar6) == '\x01') {
          FUN_14490e692(lVar8 + (uVar4 / 5) * -0x1ea0 + lVar3);
          *(undefined1 *)(lVar3 + lVar6) = 0;
        }
        uVar7 = uVar7 - 1;
        lVar8 = lVar8 + -0x620;
        uVar4 = uVar4 - 1;
        lVar5 = lVar5 + -0x620;
      } while (1 < uVar7);
    }
    FUN_145bcc98a(plVar1);
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(int *)(param_1 + 0x4c) != 0) {
      FUN_1447ab16c(plVar1,0);
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14600f290 FUN_14600f290 body=240 status=ok
// SIG undefined FUN_14600f290(void)

undefined8 * FUN_14600f290(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6675b0;
  param_1[0x22] = 0;
  param_1[0x23] = 0x3f80000000000000;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) | 1;
  *(undefined1 *)(param_1 + 0x20) = 2;
  FUN_1446f470e(&local_20,&DAT_149e3bdd8,1);
  param_1[0x1b] = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14600f38c FUN_14600f38c body=242 status=ok
// SIG undefined FUN_14600f38c(void)

void FUN_14600f38c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14b4e78a0;
  param_1[4] = &PTR_FUN_14b4e78c8;
  if (param_1[9] != 0) {
    plVar3 = (longlong *)FUN_140a68038(1);
    if (plVar3 == (longlong *)0x0) {
      local_28 = (longlong *)0x0;
      plStack_20 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar3 + 0x80))(plVar3,&local_28);
      if (local_28 != (longlong *)0x0) {
        (**(code **)(*local_28 + 0x98))(local_28,*(undefined4 *)(param_1 + 6),param_1 + 9);
      }
    }
    plVar3 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  if (param_1[10] != 0) {
    FUN_14480f766(param_1[7] + 0xb8);
    param_1[10] = 0;
  }
  FUN_1449db362(param_1 + 0xb);
  FUN_1457f3dec(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14600f480 FUN_14600f480 body=175 status=ok
// SIG undefined FUN_14600f480(void)

bool FUN_14600f480(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14600f53e FUN_14600f53e body=146 status=ok
// SIG undefined FUN_14600f53e(void)

undefined8 FUN_14600f53e(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x16d) == '\0') {
    if (DAT_14cb99c48 == (undefined8 *)0x0) {
      DAT_14cb99c48 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *DAT_14cb99c48 = 0;
      DAT_14cb99c48[1] = 0;
      DAT_14cb99c48[2] = 2;
    }
    uVar1 = FUN_148ae0e4e(param_2);
  }
  else {
    if (DAT_14cb99c48 == (undefined8 *)0x0) {
      DAT_14cb99c48 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *DAT_14cb99c48 = 0;
      DAT_14cb99c48[1] = 0;
      DAT_14cb99c48[2] = 2;
    }
    uVar1 = FUN_14600f5d0(param_2);
  }
  if ((int)uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x168) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 14600f5d0 FUN_14600f5d0 body=105 status=ok
// SIG undefined FUN_14600f5d0(void)

undefined8 FUN_14600f5d0(int param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 - 0x33U < 0xffffff9b) {
    uVar1 = 0x3f0;
  }
  else {
    vx_req_aux_set_speaker_level_create(&local_20);
    *(int *)(local_20 + 0x30) = param_1 + 0x32;
    local_38 = 0;
    uStack_30 = 0;
    uVar1 = FUN_1412f579e();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14600f640 FUN_14600f640 body=247 status=ok
// SIG undefined FUN_14600f640(void)

void FUN_14600f640(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140d2f8ee(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba2ed50;
  *(undefined1 *)(puVar1 + 0x15) = 2;
  puVar1[0x16] = 0x4059000000000000;
  puVar1[0x17] = 0x4059000000000000;
  puVar1[0x18] = 0x4059000000000000;
  *(undefined1 *)(puVar1 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar1 + 0xcc) = 0;
  puVar1[0x1a] = 0x42340000;
  *(undefined4 *)(puVar1 + 0x1b) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xdc) = 0x3e800000;
  uVar2 = DAT_14c846328;
  puVar1[0x1d] = DAT_14c846320;
  puVar1[0x1e] = uVar2;
  uVar2 = DAT_14c8463f8;
  puVar1[0x1f] = DAT_14c8463f0;
  puVar1[0x20] = uVar2;
  puVar1[0x23] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  puVar1[0x21] = DAT_14c8464e0;
  puVar1[0x22] = uVar2;
  *(undefined1 *)(puVar1 + 0x24) = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  *(undefined4 *)(puVar1 + 0x28) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x144) = 0;
  *(undefined4 *)(puVar1 + 0x29) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x14c) = 0x3ff00000;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2e] = 0x3ff0000000000000;
  puVar1[0x2f] = 0x3ff0000000000000;
  puVar1[0x30] = 0x3ff0000000000000;
  puVar1[0x31] = 0;
  return;
}



// FUNCTION 14600f738 FUN_14600f738 body=91 status=ok
// SIG undefined FUN_14600f738(void)

void FUN_14600f738(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_14600f79e();
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
                    /* WARNING: Could not recover jumptable at 0x00014600f78f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14600f794 FUN_14600f794 body=9 status=ok
// SIG undefined FUN_14600f794(void)

void FUN_14600f794(longlong param_1)

{
  FUN_1415b9e62(param_1 + 0x10);
  return;
}



// FUNCTION 14600f79e FUN_14600f79e body=525 status=ok
// SIG undefined FUN_14600f79e(void)

void FUN_14600f79e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  uint local_b8;
  int iStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined1 *local_a0;
  uint local_98;
  int iStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88 [2];
  undefined1 local_78 [16];
  undefined8 local_68;
  int local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar1 = FUN_14111b834(param_1 + 0x28,0);
  if (cVar1 == '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x28);
    lVar2 = *(longlong *)(lVar2 + 0x48);
    if (lVar2 != 0) {
      lVar3 = FUN_140b6d0be();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        if (*(longlong *)(param_1 + 0x80) != 0) {
          FUN_14480f766(lVar2 + 0x2a0);
        }
        *(undefined8 *)(param_1 + 0x80) = 0;
      }
    }
  }
  local_68 = 0;
  local_60 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_14600f9ac(local_88,param_1 + 0x30);
  local_a8 = 0x100000000;
  local_98 = 0xffffffff;
  iStack_94 = 0;
  local_90 = 0;
  iVar4 = 0;
  local_a0 = local_78;
  if (local_60 != 0) {
    FUN_1449c0562(&local_a8);
    iVar4 = local_60;
  }
  local_b8 = local_98;
  iStack_b4 = iStack_94;
  local_b0 = local_90;
  local_ac = local_8c;
  local_c8 = local_a8;
  local_c0 = local_a0;
  local_d0 = local_88;
  if ((iStack_94 != iVar4) || (local_a0 != local_78)) {
    do {
      do {
        FUN_14662f94e(param_1,*(undefined4 *)(*local_d0 + (longlong)iStack_b4 * 0x18));
        local_b8 = local_b8 & ~local_c8._4_4_;
        FUN_1449c0562(&local_c8);
      } while (iStack_b4 != iVar4);
    } while ((local_c0 != local_78) || (local_d0 != local_88));
  }
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_141475320(local_88);
  if ((local_30 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14600f9ac FUN_14600f9ac body=120 status=ok
// SIG undefined FUN_14600f9ac(void)

longlong FUN_14600f9ac(longlong param_1,longlong param_2)

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
    FUN_14600fa24(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14600fa24 FUN_14600fa24 body=121 status=ok
// SIG undefined FUN_14600fa24(void)

undefined8 * FUN_14600fa24(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_141475358(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 14600faa6 FUN_14600faa6 body=400 status=ok
// SIG undefined FUN_14600faa6(void)

void FUN_14600faa6(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_1;
  (**(code **)(*param_2 + 0x70))(param_2,&local_50);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x10))(param_2,&local_58);
    if (*(int *)(lVar3 + 0x28) != *(int *)(lVar3 + 0x54)) {
      uVar4 = (uint)((ulonglong)local_58 >> 0x10);
      uVar6 = (uint)local_58 & 0xffff;
      lVar5 = lVar3 + 0x58;
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        lVar5 = *(longlong *)(lVar3 + 0x60);
      }
      iVar7 = *(int *)(lVar5 + (ulonglong)
                               (*(int *)(lVar3 + 0x68) - 1U &
                               (int)((ulonglong)local_58 >> 0x20) + ((uint)local_58 << 0x10 | uVar6)
                               + (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar7 != -1) {
        do {
          plVar2 = (longlong *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar7 * 0x18);
          if (*plVar2 == local_58) {
            if ((plVar2 + 1 != (longlong *)0x0 && plVar2 != (longlong *)0x0) && (plVar2[1] != 0)) {
              (**(code **)(*local_50 + 0xb8))();
            }
            break;
          }
          iVar7 = (int)plVar2[2];
        } while (iVar7 != -1);
      }
    }
    (**(code **)(*local_50 + 0xb0))(local_50,local_60,lVar3 + 0x10);
    (**(code **)(*param_2 + 0x10))(param_2,local_68);
    local_40 = local_68;
    local_38 = local_60;
    FUN_14600fc38((longlong *)(lVar3 + 0x20),local_2c);
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_48 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14600fc38 FUN_14600fc38 body=347 status=ok
// SIG undefined FUN_14600fc38(void)

undefined4 * FUN_14600fc38(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1413f0d2c(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = 0;
  cVar3 = FUN_1413f0c94(param_1,uVar8,local_38);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_38 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1413f0f06(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14600fd94 FUN_14600fd94 body=268 status=ok
// SIG undefined FUN_14600fd94(void)

undefined * FUN_14600fd94(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca38528) {
    FUN_144b3d300(&DAT_14ca38528);
    if (DAT_14ca38528 == -1) {
      FUN_14600fea2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FReadbackTextureParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x4b1;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca384a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f54b2b);
      _Init_thread_footer(&DAT_14ca38528);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca384a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14600fea2 FUN_14600fea2 body=232 status=ok
// SIG undefined FUN_14600fea2(void)

longlong * FUN_14600fea2(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_146300cba;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14600ff90 FUN_14600ff90 body=360 status=ok
// SIG undefined FUN_14600ff90(void)

void FUN_14600ff90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  lVar6 = DAT_14c98e618;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c98e618 != 0) {
    local_40 = *(undefined8 *)(param_1 + 0x48);
    local_38 = *(longlong *)(param_1 + 0x50);
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    FUN_145a3846a(lVar6,&local_40);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  plVar3 = *(longlong **)(param_1 + 0x50);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
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
  FUN_1446ddc76(&local_30,"CommonInput",1);
  uVar4 = local_30;
  uVar5 = FUN_144a52528();
  FUN_1402c9134(uVar5,uVar4,local_1c,1);
  lVar6 = FUN_1409e7438();
  if ((*(char *)(lVar6 + 0xda) == '\x01') && (*(longlong *)(param_1 + 0x20) != 0)) {
    lVar6 = FUN_1400b6e86();
    if (lVar6 != 0) {
      local_30 = *(undefined8 *)(param_1 + 0x104);
      local_28 = *(undefined8 *)(param_1 + 0x10c);
      FUN_140805e68(lVar6 + 0x180,&local_30,1);
      FUN_144a7b126(lVar6 + 0x180,local_1c,1);
      *(undefined8 *)(param_1 + 0x104) = 0;
      *(undefined8 *)(param_1 + 0x10c) = 0;
    }
  }
  FUN_1401cb356();
  local_50 = *(undefined8 *)(param_1 + 0x58);
  local_48 = *(longlong *)(param_1 + 0x60);
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 0xc) = *(int *)(local_48 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_50);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460100fa FUN_1460100fa body=9 status=ok
// SIG undefined FUN_1460100fa(void)

void FUN_1460100fa(longlong param_1)

{
  FUN_146010104(param_1 + 0x10);
  return;
}



// FUNCTION 146010104 FUN_146010104 body=135 status=ok
// SIG undefined FUN_146010104(void)

void FUN_146010104(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14ae3af30;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  puVar2 = param_1 + 0x1a;
  lVar1 = -0xf0;
  do {
    *(undefined4 *)(puVar2 + 9) = 0;
    if (puVar2[8] != 0) {
      FUN_1400020a8();
    }
    FUN_140e90ec0(puVar2);
    puVar2 = puVar2 + -10;
    lVar1 = lVar1 + 0x50;
  } while (lVar1 != 0);
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14601018c FUN_14601018c body=257 status=ok
// SIG undefined FUN_14601018c(void)

ulonglong FUN_14601018c(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined1 local_41;
  undefined8 local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  cVar2 = FUN_14601054c();
  if (cVar2 != '\0') {
    lVar1 = param_1 + 100;
    cVar2 = FUN_144729dda(lVar1);
    if (cVar2 != '\0') {
      if (*(longlong *)(param_1 + 0xa8) == 0) {
        lVar3 = FUN_1411c1a08();
        FUN_14601028e(lVar3 + 0x90,&local_40,param_1,FUN_1461d3bb8);
        *(undefined8 *)(param_1 + 0xa8) = local_40;
      }
      uVar4 = FUN_14479d2ce(lVar1);
      plVar5 = (longlong *)FUN_14021f720(uVar4);
      if (plVar5 != (longlong *)0x0) {
        local_58 = &local_41;
        (**(code **)(*plVar5 + 0x2f8))(plVar5,local_38,0,&local_40);
      }
      uVar4 = FUN_14479d2ce(lVar1);
      uVar6 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      FUN_146010374(uVar4,1,0);
      goto LAB_14601025e;
    }
  }
  uVar6 = 0;
LAB_14601025e:
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14601028e FUN_14601028e body=228 status=ok
// SIG undefined FUN_14601028e(void)

undefined8
FUN_14601028e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_14ae30180;
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
  local_40[2] = lVar2;
  *local_40 = &PTR_FUN_14b97e500;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_145851a76(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146010374 FUN_146010374 body=403 status=ok
// SIG undefined FUN_146010374(void)

void FUN_146010374(longlong param_1,char param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x448) != param_2) {
    *(char *)(param_1 + 0x448) = param_2;
    lVar3 = FUN_14021f720();
    if (lVar3 != 0) {
      FUN_146010536(lVar3,*(undefined1 *)(param_1 + 0x448));
    }
    if (*(char *)(param_1 + 0x448) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
    }
    if ((((param_3 != '\0') && (*(longlong *)(param_1 + 0x450) != 0)) &&
        (*(longlong *)(param_1 + 0x458) != 0)) && (0 < *(int *)(*(longlong *)(param_1 + 0x458) + 8))
       ) {
      FUN_1401cb356();
      local_40 = *(undefined8 *)(param_1 + 0x450);
      local_38 = *(longlong *)(param_1 + 0x458);
      if (local_38 != 0) {
        LOCK();
        *(int *)(local_38 + 0xc) = *(int *)(local_38 + 0xc) + 1;
        UNLOCK();
      }
      FUN_140d61352(&local_40);
      plVar2 = *(longlong **)(param_1 + 0x458);
      *(undefined8 *)(param_1 + 0x450) = 0;
      *(undefined8 *)(param_1 + 0x458) = 0;
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
    if (((*(longlong *)(param_1 + 0x460) != 0) && (*(longlong *)(param_1 + 0x468) != 0)) &&
       (0 < *(int *)(*(longlong *)(param_1 + 0x468) + 8))) {
      FUN_1401cb356();
      local_50 = *(undefined8 *)(param_1 + 0x460);
      local_48 = *(longlong *)(param_1 + 0x468);
      if (local_48 != 0) {
        LOCK();
        *(int *)(local_48 + 0xc) = *(int *)(local_48 + 0xc) + 1;
        UNLOCK();
      }
      FUN_140d61352(&local_50);
      lVar3 = *(longlong *)(param_1 + 0x468);
      *(undefined8 *)(param_1 + 0x460) = 0;
      *(undefined8 *)(param_1 + 0x468) = 0;
      if (lVar3 != 0) {
        LOCK();
        piVar1 = (int *)(lVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146010536 FUN_146010536 body=22 status=ok
// SIG undefined FUN_146010536(void)

void FUN_146010536(longlong param_1,char param_2)

{
  if (param_2 != '\0') {
    FUN_146003630();
    return;
  }
  FUN_14598420a(param_1 + 0x150);
  return;
}



// FUNCTION 14601054c FUN_14601054c body=531 status=ok
// SIG undefined FUN_14601054c(void)

ulonglong FUN_14601054c(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined7 uVar13;
  ulonglong uVar12;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined4 local_70;
  undefined2 *local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = *(char *)(param_1 + 0xc1);
  *(undefined1 *)(param_1 + 0xc1) = 0;
  plVar4 = (longlong *)FUN_145acdf28();
  lVar6 = plVar4[0x22];
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 1000))(plVar4);
    lVar6 = plVar4[0x22];
  }
  if (*(char *)(lVar6 + 0x30) == '\x01') {
    uVar5 = FUN_14577a94c(param_1);
    uVar12 = 0;
    FUN_146010760(param_1 + 0xb8,&local_50,uVar5,0);
    if ((local_50 != DAT_14cbcd3c0) && (local_50 != DAT_14cbcd3c8)) goto LAB_1460106b5;
    cVar2 = FUN_144729dda(param_1 + 100);
    if (cVar2 != '\0') {
      lVar6 = FUN_14479d2ce(param_1 + 100);
      iVar3 = *(int *)(lVar6 + 0x40);
      if ((longlong)iVar3 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0x38);
        lVar11 = 0;
        do {
          FUN_141237a6a(&local_60,*(undefined8 *)(lVar6 + lVar11),0);
          uVar7 = FUN_1459afa08(&local_60);
          if (uVar7 != 0) {
            lVar8 = FUN_144a7b4ca();
            uVar12 = uVar7;
            if (((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(uVar7 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
               (*(char *)(uVar7 + 0x6b3) != '\0')) goto LAB_1460106b2;
          }
          lVar11 = lVar11 + 8;
        } while ((longlong)iVar3 * 8 != lVar11);
      }
    }
    uVar13 = (undefined7)(uVar12 >> 8);
    if (cVar1 != '\0') {
      FUN_14020fad6(param_3,L"World_P");
      uVar12 = CONCAT71(uVar13,1);
      goto LAB_1460106b5;
    }
    local_70 = 0xffffffff;
    local_78 = local_78 & 0xffffffff00000000;
    iVar3 = FUN_1447ee042(param_2,L"ExtLoadingMovie",0xf,1);
    if (iVar3 != -1) {
      FUN_140002266(&local_60,&DAT_149e2b6ae,L"ExtLoadingMovie");
      puVar9 = &DAT_149dfb77a;
      puVar10 = &DAT_149dfb77a;
      if (local_58 != 0) {
        puVar10 = local_60;
      }
      if (*(int *)(param_2 + 1) != 0) {
        puVar9 = (undefined2 *)*param_2;
      }
      local_78 = 0;
      uVar12 = CONCAT71(uVar13,1);
      FUN_14063337c(puVar9,puVar10,param_3,1);
      if (local_60 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1460106b5;
    }
  }
LAB_1460106b2:
  uVar12 = 0;
LAB_1460106b5:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar12 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146010760 FUN_146010760 body=183 status=ok
// SIG undefined FUN_146010760(void)

undefined8 * FUN_146010760(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_4 == 0) {
    param_4 = FUN_146010909(param_3);
    if (param_4 != 0) goto LAB_146010791;
  }
  else {
LAB_146010791:
    local_30 = 0;
    FUN_14485c47a(&local_30,param_4);
    local_28 = local_30;
    iVar1 = FUN_146010818((longlong *)(param_1 + 0x10),
                          (uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30);
    if (((iVar1 != -1) &&
        (lVar3 = (longlong)iVar1 * 0x18 + *(longlong *)(param_1 + 0x10), lVar3 != 0)) &&
       (*(longlong *)(lVar3 + 8) != 0)) {
      puVar2 = (undefined8 *)(lVar3 + 8);
      goto LAB_1460107d4;
    }
  }
  puVar2 = &DAT_14cbca1c8;
LAB_1460107d4:
  *param_2 = *puVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146010818 FUN_146010818 body=185 status=ok
// SIG undefined FUN_146010818(void)

int FUN_146010818(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x18);
        cVar1 = FUN_1460108d2(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_146010841;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_146010841:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 1460108d2 FUN_1460108d2 body=55 status=ok
// SIG undefined FUN_1460108d2(void)

ulonglong FUN_1460108d2(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 146010909 FUN_146010909 body=105 status=ok
// SIG undefined FUN_146010909(void)

undefined8 FUN_146010909(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar2 = FUN_1403ca142();
    if (((*(longlong *)(lVar1 + 0x1f0) != 0) &&
        (((lVar2 != 0 && (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x1f0) + 0x10), lVar1 != 0))
         && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      uVar3 = FUN_14119d4d6();
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 146010972 FUN_146010972 body=162 status=ok
// SIG undefined FUN_146010972(void)

undefined8 * FUN_146010972(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_146010a16(&local_38,param_3);
  FUN_146010a94(param_1 + 0x200,local_40,&local_38);
  FUN_1449db362(&local_38);
  if (((int)param_3[1] == 0) || (param_3 = (longlong *)*param_3, param_3 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*param_3 + 0x38))(param_3,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146010a16 FUN_146010a16 body=124 status=ok
// SIG undefined FUN_146010a16(void)

void FUN_146010a16(longlong *param_1,longlong *param_2)

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



// FUNCTION 146010a94 FUN_146010a94 body=216 status=ok
// SIG undefined FUN_146010a94(void)

undefined8 * FUN_146010a94(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 146010b6e FUN_146010b6e body=162 status=ok
// SIG undefined FUN_146010b6e(void)

undefined8 * FUN_146010b6e(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_146010c12(&local_38,param_3);
  FUN_146010c90(param_1 + 0x248,local_40,&local_38);
  FUN_1449db362(&local_38);
  if (((int)param_3[1] == 0) || (param_3 = (longlong *)*param_3, param_3 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*param_3 + 0x38))(param_3,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146010c12 FUN_146010c12 body=124 status=ok
// SIG undefined FUN_146010c12(void)

void FUN_146010c12(longlong *param_1,longlong *param_2)

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



// FUNCTION 146010c90 FUN_146010c90 body=216 status=ok
// SIG undefined FUN_146010c90(void)

undefined8 * FUN_146010c90(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 146010d74 FUN_146010d74 body=391 status=ok
// SIG undefined FUN_146010d74(void)

undefined8 * FUN_146010d74(undefined8 *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14a4f1660;
  param_1[8] = &PTR_LAB_14a4f1940;
  FUN_146010efc(param_1 + 9);
  lVar2 = FUN_14009d2a0();
  lVar3 = FUN_145f643ae();
  lVar4 = FUN_14038fb82();
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar3 + 0x1a);
  *(undefined1 *)((longlong)param_1 + 0x32) = 4;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    uVar1 = *(undefined2 *)(lVar2 + 0xea);
    local_38 = param_1[2];
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_38,uVar1);
    uVar1 = *(undefined2 *)(lVar2 + 0x4a);
    local_40 = param_1[2];
    if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_40,uVar1);
    uVar1 = *(undefined2 *)(lVar4 + 0xfa);
    local_48 = param_1[2];
    if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14122166c(&local_48,uVar1);
    local_50 = param_1[2];
    if ((local_50 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_58 = FUN_14090928c();
    if ((local_58 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_58);
    }
    FUN_140909372(&local_58,&local_50);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146010efc FUN_146010efc body=103 status=ok
// SIG undefined FUN_146010efc(void)

void FUN_146010efc(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[9] = 0x10000000000;
  param_1[0xe] = 0x10000000000;
  param_1[0x15] = 0x10000000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x1a] = 0x10000000000;
  param_1[0x21] = 0x10000000000;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x26] = 0x10000000000;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  return;
}



// FUNCTION 146010f6e FUN_146010f6e body=242 status=ok
// SIG undefined FUN_146010f6e(void)

undefined8 * FUN_146010f6e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14af19f20;
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
  param_1[0x11] = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x1fffe;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa2) = 1;
  uVar1 = DAT_14c8464e8;
  param_1[0x15] = DAT_14c8464e0;
  param_1[0x16] = uVar1;
  param_1[0x17] = DAT_14c8464f0;
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0x3ff0000000000000;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x2c] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  return param_1;
}



// FUNCTION 146011060 FUN_146011060 body=237 status=ok
// SIG undefined FUN_146011060(void)

void FUN_146011060(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14054d9c0(param_1 + 0x680,*(longlong *)(param_1 + 0x5e8) + 0x208);
  FUN_1415b9fec(param_1);
  FUN_146011210(param_1);
  if (*(longlong *)(param_1 + 0x3f0) != 0) {
    lVar2 = FUN_14041aabe();
    if ((((*(longlong *)(param_1 + 0x3f0) != 0) && (lVar2 != 0)) &&
        (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3f0) + 0x10), lVar1 != 0)) &&
       ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)))) {
      FUN_145d2d5de(param_1);
    }
  }
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_1400b2348(*(longlong *)(param_1 + 0x5e8) + 0x3c0,local_28,1);
  FUN_14601114e(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14601114e FUN_14601114e body=179 status=ok
// SIG undefined FUN_14601114e(void)

void FUN_14601114e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14477b072(param_1,DAT_14cb5e5b8);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_38[0] = 0;
    local_38[1] = 0;
    FUN_144a787a6(local_38,param_2);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_38);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38[2] ^ (ulonglong)auStack_58);
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001460111b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x918))(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146011210 FUN_146011210 body=257 status=ok
// SIG undefined FUN_146011210(void)

void FUN_146011210(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x5e8) + 0x1f0);
  if (lVar5 != 0) {
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x5e8) + 0x1e8);
    plVar3 = plVar6 + lVar5 * 3;
    do {
      lVar5 = *plVar6;
      plVar4 = (longlong *)plVar6[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
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
      if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x48) & 0xfb) != 0)) {
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        local_48 = lVar5;
        local_40 = plVar4;
        FUN_143d50766(param_1,&local_48);
      }
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
      plVar6 = plVar6 + 3;
    } while (plVar6 != plVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146011312 FUN_146011312 body=353 status=ok
// SIG undefined FUN_146011312(void)

undefined4 * FUN_146011312(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146011538(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar9 = *(undefined8 *)*param_3;
  *local_40 = uVar9;
  local_40[1] = *puVar1;
  lVar7 = puVar1[1];
  local_40[2] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
    uVar9 = *local_40;
  }
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar9 >> 0x10);
  uVar4 = (uint)uVar9 & 0xffff;
  uVar8 = ((uint)uVar9 << 0x10 | uVar4) + (int)((ulonglong)uVar9 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_146011474(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x1c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14601161e(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146011474 FUN_146011474 body=195 status=ok
// SIG undefined FUN_146011474(void)

undefined8 FUN_146011474(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(puVar3 + 4);
          if (plVar8 != (longlong *)0x0) {
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
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_1489bdd3c(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = puVar3[6];
      } while (iVar9 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146011538 FUN_146011538 body=230 status=ok
// SIG undefined FUN_146011538(void)

int * FUN_146011538(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 14601161e FUN_14601161e body=485 status=ok
// SIG undefined FUN_14601161e(void)

void FUN_14601161e(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 146011804 FUN_146011804 body=40 status=ok
// SIG undefined FUN_146011804(void)

undefined8 FUN_146011804(undefined8 param_1,int param_2)

{
  FUN_14601182c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14601182c FUN_14601182c body=213 status=ok
// SIG undefined FUN_14601182c(void)

void FUN_14601182c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba650d0;
  FUN_144760e21(param_1[0xa4],*(undefined4 *)(param_1 + 0xa5));
  if (param_1[0xa4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xa1],*(undefined4 *)(param_1 + 0xa2));
  if (param_1[0xa1] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x9e],*(undefined4 *)(param_1 + 0x9f));
  if (param_1[0x9e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x9b],*(undefined4 *)(param_1 + 0x9c));
  if (param_1[0x9b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x98] != 0) {
    FUN_1400020a8();
  }
  FUN_1409def00(param_1 + 0x76);
  thunk_FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 14601190c FUN_14601190c body=241 status=ok
// SIG undefined FUN_14601190c(void)

undefined8 * FUN_14601190c(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14bc57510;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3e4) = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  FUN_1446f470e(&local_20,L"SceneComp",1);
  uVar1 = FUN_144a799b0();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x39] = lVar2;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460119fe FUN_1460119fe body=973 status=ok
// SIG undefined FUN_1460119fe(void)

undefined8 FUN_1460119fe(undefined8 param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  wchar_t *_Str1;
  wchar_t *pwVar5;
  wchar_t *_Str2;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [32];
  char *local_68;
  wchar_t *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c83ef80);
  if (DAT_14c83e780 == 0) {
    FUN_146011dcc(&local_38);
    pwVar5 = local_38;
    if ((uint)uStack_30 == 0) {
      pwVar5 = L"";
    }
    wcscpy(&DAT_14c83e780,pwVar5);
    if (local_38 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_38 = (wchar_t *)0x0;
    uStack_30 = 0;
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    local_68 = (char *)0x0;
    cVar2 = FUN_14063337c(&DAT_14c846b20,L"LOG=",&local_38,0);
    if (cVar2 == '\0') {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      local_68 = (char *)0x0;
      cVar2 = FUN_14063337c(&DAT_14c846b20,L"ABSLOG=",&local_38,0);
      if (cVar2 != '\0') {
        DAT_14c83e780 = 0;
      }
    }
    else {
      FUN_140056680(&local_48,L"details");
      pwVar5 = local_48;
      _Str2 = local_48;
      if (local_40 == 0) {
        _Str2 = L"";
      }
      _Str1 = L"";
      if ((uint)uStack_30 != 0) {
        _Str1 = local_38;
      }
      iVar3 = wcscmp(_Str1,_Str2);
      if (pwVar5 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar5);
      }
      if (iVar3 == 0) {
        lVar6 = FUN_144a8b586();
        uVar1 = *(uint *)(lVar6 + 8);
        FUN_146168076(&local_48);
        local_60 = local_48;
        if (local_40 == 0) {
          local_60 = L"";
        }
        local_68 = "Windows";
        FUN_140002266(&local_58,L"%ls-%d-%hs-%ls.log",&DAT_14c764000,uVar1 & 0x7fffffff);
        if (local_38 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        local_38 = (wchar_t *)CONCAT44(uStack_54,local_58);
        uStack_30 = CONCAT44(uStack_4c,uStack_50);
        if (local_48 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    lVar6 = 0;
    FUN_144a06df0(&local_48,&local_38,0);
    pwVar5 = local_48;
    if (local_40 == 0) {
      pwVar5 = L"";
    }
    do {
      uVar7 = *(ushort *)((longlong)pwVar5 + lVar6);
      uVar8 = (ulonglong)uVar7;
      uVar9 = *(ushort *)((longlong)&DAT_149e06118 + lVar6);
      if (uVar7 == uVar9) {
        if (uVar7 == 0) goto LAB_146011bb7;
      }
      else {
        if (0x7f < (uVar9 | uVar7)) goto LAB_146011b5b;
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        uVar10 = (ulonglong)uVar9;
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
        if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar10]) goto LAB_146011b5b;
      }
      lVar6 = lVar6 + 2;
    } while( true );
  }
  goto LAB_146011c3b;
LAB_146011ba5:
  if (uVar7 != uVar9) {
    FUN_144a7e010(&local_38);
  }
  goto LAB_146011bb7;
LAB_146011b5b:
  if (uVar7 != uVar9) {
    lVar6 = 0;
    do {
      uVar7 = *(ushort *)((longlong)pwVar5 + lVar6);
      uVar8 = (ulonglong)uVar7;
      uVar9 = *(ushort *)((longlong)&DAT_149e049d8 + lVar6);
      if (uVar7 == uVar9) {
        if (uVar7 == 0) break;
      }
      else {
        if (0x7f < (uVar9 | uVar7)) goto LAB_146011ba5;
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        uVar10 = (ulonglong)uVar9;
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
        if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar10]) goto LAB_146011ba5;
      }
      lVar6 = lVar6 + 2;
    } while( true );
  }
LAB_146011bb7:
  pwVar5 = local_38;
  if ((uint)uStack_30 < 2) {
    sVar4 = wcslen(&DAT_14c764000);
    pwVar5 = L"Unreal";
    if ((int)sVar4 != 0) {
      pwVar5 = &DAT_14c764000;
    }
    FUN_14020fad6(&local_38,pwVar5);
    FUN_1400020e8(&local_38,L".log",4);
    pwVar5 = local_38;
    if ((uint)uStack_30 == 0) {
      pwVar5 = L"";
    }
  }
  wcscat(&DAT_14c83e780,pwVar5);
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_146011c3b:
  FUN_140056680(param_1,&DAT_14c83e780);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c83ef80);
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146011dcc FUN_146011dcc body=40 status=ok
// SIG undefined FUN_146011dcc(void)

undefined8 FUN_146011dcc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14047ac8c();
  FUN_1449b8608(param_1,uVar1,L"Logs/");
  return param_1;
}



// FUNCTION 146011df4 FUN_146011df4 body=257 status=ok
// SIG undefined FUN_146011df4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146011df4(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c990150) {
    FUN_144b3d300(&DAT_14c990150);
    if (DAT_14c990150 == -1) {
      FUN_1446ddc76(&local_28,"SResponsiveGridPanel",1);
      DAT_14c990138 = 0;
      _DAT_14c990140 = 0x100000000;
      DAT_14c990118 = 0;
      _DAT_14c990120 = 0;
      _DAT_14c990148 = local_28;
      uVar1 = FUN_140a580e4();
      FUN_145b26348(local_20,&DAT_14c990118,uVar1);
      FUN_146011ef6(local_20);
      FUN_140a5f69a(local_20);
      atexit(FUN_142903c6f);
      _Init_thread_footer(&DAT_14c990150);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146011ef6 FUN_146011ef6 body=112 status=ok
// SIG undefined FUN_146011ef6(void)

void FUN_146011ef6(undefined8 param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_30,L"Slots",1);
  FUN_145a5eba6(param_1,local_28,local_30,0x1e0);
  FUN_146011f68(local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146011f68 FUN_146011f68 body=136 status=ok
// SIG undefined FUN_146011f68(void)

void FUN_146011f68(undefined8 param_1)

{
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 local_58 [24];
  undefined8 local_40;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38[0] = 1;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddc76(&local_40,"Slot.Padding",1);
  local_68 = local_38;
  FUN_1458dbc34(param_1,local_58,local_40,8);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146011ff2 FUN_146011ff2 body=25 status=ok
// SIG undefined FUN_146011ff2(void)

undefined8 FUN_146011ff2(undefined8 param_1,undefined8 param_2)

{
  FUN_14601200c(param_2);
  return param_2;
}



// FUNCTION 14601200c FUN_14601200c body=355 status=ok
// SIG undefined FUN_14601200c(void)

undefined8 * FUN_14601200c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14c9a7780 == (longlong *)0x0 || DAT_14c9a7788 == 0) ||
     (cVar3 = (**(code **)(*DAT_14c9a7780 + 0x30))(), cVar3 == '\0')) {
    puVar4 = (undefined8 *)FUN_14001cc68(0xc40);
    memset(puVar4 + 1,0,0xc38);
    *puVar4 = &PTR_FUN_14a1c8380;
    *(undefined4 *)((longlong)puVar4 + 0xc2c) = 0x80;
    plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14a1c83a0;
    plVar5[2] = (longlong)puVar4;
    local_28 = plVar5;
    if (puVar4 == (undefined8 *)0x0) {
      local_30 = (undefined8 *)0x0;
    }
    else {
      local_30 = puVar4;
      if (plVar5 == (longlong *)0x0) {
        puVar4[2] = puVar4;
        local_28 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        puVar4[2] = puVar4;
        if ((longlong *)puVar4[3] != plVar5) {
          LOCK();
          *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
          UNLOCK();
          plVar2 = (longlong *)puVar4[3];
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))();
            }
          }
          puVar4[3] = plVar5;
        }
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    }
  }
  else {
    plVar5 = DAT_14c9a7780;
    if (DAT_14c9a7788 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,&local_30);
  }
  *param_1 = local_30;
  param_1[1] = local_28;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146012178 FUN_146012178 body=245 status=ok
// SIG undefined FUN_146012178(void)

undefined8 * FUN_146012178(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar1);
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_14a8d96d0;
  *(undefined2 *)(param_1 + 6) = 0x103;
  FUN_1446ddc76(&local_28,"InputDeviceTriggerResetProperty",1);
  *(undefined8 *)((longlong)param_1 + 0x34) = local_28;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 3;
  *param_1 = &PTR_FUN_14a8d9cb0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_1446ddc76(&local_28,"InputDeviceTriggerFeedback",1);
  param_1[0x14] = local_28;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_1 + 6);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14601226e FUN_14601226e body=169 status=ok
// SIG undefined FUN_14601226e(void)

void FUN_14601226e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1412d7cbc();
  lVar1 = DAT_14cb0d2b0;
  if (DAT_14cb0d2b0 != 0) {
    lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
    if (lVar3 == 0) {
      FUN_145876474(DAT_14cb0d2b0);
      lVar2 = DAT_14cb0d2b0;
      if (*(longlong *)(lVar1 + 0x2c8) == 0) goto LAB_1460122c4;
      lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
      if (lVar3 == 0) {
        FUN_145876474(DAT_14cb0d2b0);
        lVar3 = *(longlong *)(lVar2 + 0x2c8);
      }
    }
    FUN_146012318(lVar3 + 0x1f8,&local_20,param_1);
    *(undefined8 *)(param_1 + 0x138) = local_20;
  }
LAB_1460122c4:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146012318 FUN_146012318 body=210 status=ok
// SIG undefined FUN_146012318(void)

undefined8 FUN_146012318(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar1 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b54a4b0;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_3);
  puVar1[4] = &LAB_148b0a2a8;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460123ec FUN_1460123ec body=21 status=ok
// SIG undefined FUN_1460123ec(void)

undefined8 FUN_1460123ec(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14601241c FUN_14601241c body=242 status=ok
// SIG undefined FUN_14601241c(void)

undefined8 * FUN_14601241c(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14ba7d790;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"GbxPrefabLayerComponent",1);
  uVar2 = FUN_14599ac9e();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_20,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar3;
  *(undefined1 *)(lVar3 + 0x1fb) = 0;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 2;
  lVar3 = param_1[0x72];
  if ((bVar1 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = param_1[0x72];
    }
  }
  param_1[0x39] = lVar3;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146012518 FUN_146012518 body=246 status=ok
// SIG undefined FUN_146012518(void)

undefined8 * FUN_146012518(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bebf080;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xe] = DAT_14c846520;
  uVar1 = DAT_14c846518;
  param_1[0xc] = DAT_14c846510;
  param_1[0xd] = uVar1;
  param_1[0x11] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xf] = DAT_14c8464e0;
  param_1[0x10] = uVar1;
  param_1[0x14] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x12] = DAT_14c8464e0;
  param_1[0x13] = uVar1;
  param_1[0x17] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_1[0x15] = DAT_14c8464f8;
  param_1[0x16] = uVar1;
  param_1[0x18] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x437a000041700000;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x3f800000;
  return param_1;
}



// FUNCTION 14601260e FUN_14601260e body=239 status=ok
// SIG undefined FUN_14601260e(void)

void FUN_14601260e(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [35];
  undefined1 local_25;
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
  iVar1 = local_24;
  local_25 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1460126fe(param_1,iVar1 != 0,local_25);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460126fe FUN_1460126fe body=78 status=ok
// SIG undefined FUN_1460126fe(void)

void FUN_1460126fe(longlong param_1,byte param_2,char param_3)

{
  if (param_3 != '\0') {
    switch(param_3) {
    case '\x01':
      *(byte *)(param_1 + 0x7948) = param_2;
      return;
    case '\x02':
      *(byte *)(param_1 + 0x7949) = param_2;
      return;
    case '\x03':
      *(byte *)(param_1 + 0x794a) = param_2;
      return;
    case '\x04':
      *(byte *)(param_1 + 0x794b) = param_2;
    }
    return;
  }
  *(uint *)(param_1 + 0x7948) = (uint)param_2 * 0x1010101;
  return;
}



// FUNCTION 14601274c FUN_14601274c body=212 status=ok
// SIG undefined FUN_14601274c(void)

void FUN_14601274c(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_144a52528();
  FUN_1446ddc76(&local_20,"Sockets",1);
  cVar1 = FUN_14011feae(uVar2,local_20);
  if (cVar1 != '\0') {
    FUN_1446ddc76(&local_28,"Sockets",1);
    uVar2 = FUN_144a52528();
    plVar3 = (longlong *)FUN_1401e3324(uVar2,local_28);
    (**(code **)(*plVar3 + 0x58))(plVar3,DAT_14cb8e468);
  }
  if (DAT_14cbf4f70 != (longlong *)0x0) {
    (**(code **)(*DAT_14cbf4f70 + 0x10))();
    if (DAT_14cbf4f70 != (longlong *)0x0) {
      (**(code **)*DAT_14cbf4f70)(DAT_14cbf4f70,1);
    }
    DAT_14cbf4f70 = (longlong *)0x0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146012822 FUN_146012822 body=38 status=ok
// SIG undefined FUN_146012822(void)

undefined8 FUN_146012822(undefined8 param_1,int param_2)

{
  FUN_146012848();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146012848 FUN_146012848 body=219 status=ok
// SIG undefined FUN_146012848(void)

void FUN_146012848(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba4bd60;
  param_1[0x10] = &PTR_FUN_14ba4be88;
  param_1[0x13] = &PTR_FUN_14ba4bea0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_146012924(param_1 + 0x22);
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_14601295a(param_1 + 0x18);
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1410c966c(param_1 + 0x13);
  FUN_145bfbed6(param_1 + 0x10);
  FUN_145c0f28c(param_1);
  return;
}



// FUNCTION 146012924 FUN_146012924 body=53 status=ok
// SIG undefined FUN_146012924(void)

void FUN_146012924(longlong *param_1)

{
  FUN_145d72cfc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14601295a FUN_14601295a body=53 status=ok
// SIG undefined FUN_14601295a(void)

void FUN_14601295a(longlong *param_1)

{
  FUN_146012990();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146012990 FUN_146012990 body=332 status=ok
// SIG undefined FUN_146012990(void)

void FUN_146012990(longlong *param_1)

{
  longlong *plVar1;
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
      FUN_148fbf028((longlong)iStack_4c * 0x38 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
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



// FUNCTION 146012ade FUN_146012ade body=112 status=ok
// SIG undefined FUN_146012ade(void)

void FUN_146012ade(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x410,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x410)) {
      uVar2 = uVar1 / 0x410 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x410,0x10);
  }
  return;
}



// FUNCTION 146012b4e FUN_146012b4e body=40 status=ok
// SIG undefined FUN_146012b4e(void)

undefined8 FUN_146012b4e(undefined8 param_1,int param_2)

{
  FUN_146012b76();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146012b76 FUN_146012b76 body=389 status=ok
// SIG undefined FUN_146012b76(void)

void FUN_146012b76(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bab8210;
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  FUN_144a1c8ac(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  FUN_14584f2f0(param_1 + 0x3b);
  *(undefined4 *)(param_1 + 0x3a) = 0;
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_146012d32(param_1 + 0x31);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_146012d6a(param_1 + 0x27);
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_145c6bddc(param_1 + 0x1d);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_146012cfc(param_1 + 0x13);
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_140ba05b6(param_1 + 8);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 146012cfc FUN_146012cfc body=53 status=ok
// SIG undefined FUN_146012cfc(void)

void FUN_146012cfc(longlong *param_1)

{
  FUN_146012da2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146012d32 FUN_146012d32 body=55 status=ok
// SIG undefined FUN_146012d32(void)

void FUN_146012d32(longlong *param_1)

{
  FUN_146012f16(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146012d6a FUN_146012d6a body=55 status=ok
// SIG undefined FUN_146012d6a(void)

void FUN_146012d6a(longlong *param_1)

{
  FUN_1460130b0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146012da2 FUN_146012da2 body=371 status=ok
// SIG undefined FUN_146012da2(void)

void FUN_146012da2(longlong *param_1)

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
      if (*(longlong *)(lVar2 + 0x20 + lVar3 * 0x38) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar3 * 0x38 + 0x10) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
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



// FUNCTION 146012f16 FUN_146012f16 body=408 status=ok
// SIG undefined FUN_146012f16(void)

void FUN_146012f16(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
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
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64 * 0x20;
      FUN_1447a1747(*(undefined8 *)(lVar2 + 8 + lVar5),*(undefined4 *)(lVar2 + 0x10 + lVar5));
      if (*(longlong *)(lVar2 + 8 + lVar5) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar4 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar3 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460130b0 FUN_1460130b0 body=409 status=ok
// SIG undefined FUN_1460130b0(void)

void FUN_1460130b0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
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
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar4 = (longlong)iStack_64;
      if (*(longlong *)(lVar2 + 0x10 + lVar4 * 0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar4 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar5 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar5) {
      uVar3 = uVar5;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146013256 FUN_146013256 body=683 status=ok
// SIG undefined FUN_146013256(void)

undefined8 * FUN_146013256(undefined8 *param_1)

{
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_80;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14130c032();
  *param_1 = &PTR_FUN_14abef4f0;
  param_1[5] = &PTR_FUN_14abef820;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffff;
  *(byte *)((longlong)param_1 + 0x8c) = *(byte *)((longlong)param_1 + 0x8c) & 0xfe;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffff;
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) & 0xfe;
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x19) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  FUN_140056680(param_1 + 0x1b,&DAT_149dfb77a);
  local_48[1] = 0;
  FUN_14596da70(param_1 + 0x1d);
  FUN_1400b22c2(&local_98,"Does path exist");
  if (param_1 + 6 == &local_98) {
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_98;
    local_98 = 0;
    *(undefined4 *)(param_1 + 7) = local_90;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_8c;
  }
  local_48[0] = FUN_144a6c4d8();
  if ((local_48[0] != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_48[0]);
  }
  FUN_1446f470e(&local_50,L"BlackboardKeyA",1);
  FUN_1458b8c86(param_1 + 0xd,param_1,local_50,local_48);
  FUN_1446f470e(&local_58,L"BlackboardKeyA",1);
  FUN_1458b89d2(param_1 + 0xd,param_1,local_58);
  local_60 = FUN_144a6c4d8();
  if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_60);
  }
  FUN_1446f470e(&local_68,L"BlackboardKeyB",1);
  FUN_1458b8c86(param_1 + 0x12,param_1,local_68,&local_60);
  FUN_1446f470e(&local_70,L"BlackboardKeyB",1);
  FUN_1458b89d2(param_1 + 0x12,param_1,local_70);
  *(uint *)(param_1 + 0xc) = (*(uint *)(param_1 + 0xc) & 0xfffffff8) + 1;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  param_1[0xf] = DAT_14cb1f058;
  FUN_146013580(&local_98);
  FUN_146013502(param_1 + 0x18,&local_98);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_48[2] ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146013502 FUN_146013502 body=126 status=ok
// SIG undefined FUN_146013502(void)

undefined8 * FUN_146013502(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
  lVar1 = param_2[2];
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = param_2[2];
    }
  }
  param_1[2] = lVar1;
  if (param_1 != param_2) {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    param_1[3] = param_2[3];
    param_2[3] = 0;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    param_2[4] = 0;
  }
  return param_1;
}



// FUNCTION 146013580 FUN_146013580 body=197 status=ok
// SIG undefined FUN_146013580(void)

undefined8 * FUN_146013580(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  if (DAT_14cb1f4f0 == 0) {
    uVar2 = FUN_140d9472b();
    DAT_14cb1f4f0 = FUN_14171c317(FUN_14642ac2e,uVar2,L"EPathExistanceQueryType");
  }
  lVar1 = DAT_14cb1f4f0;
  param_1[2] = DAT_14cb1f4f0;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
    lVar1 = param_1[2];
  }
  if (lVar1 == 0) {
    FUN_140056680(param_1 + 3,&DAT_149e01fe8);
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x18);
    FUN_1400021e4();
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146013646 FUN_146013646 body=56 status=ok
// SIG undefined FUN_146013646(void)

void FUN_146013646(void)

{
  DAT_14c9ac060 = 0;
  if (DAT_14c9ac058 != 0) {
    FUN_1400020a8();
  }
  FUN_14601367e();
                    /* WARNING: Could not recover jumptable at 0x000146013670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c9abff0);
  return;
}



// FUNCTION 14601367e FUN_14601367e body=54 status=ok
// SIG undefined FUN_14601367e(void)

void FUN_14601367e(void)

{
  FUN_1460136b4();
  if (DAT_14c9ac038 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9ac018 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1460136b4 FUN_1460136b4 body=399 status=ok
// SIG undefined FUN_1460136b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460136b4(void)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0x100000000;
  local_30 = &DAT_14c9ac028;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (DAT_14c9ac040 != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = &DAT_14c9ac018;
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      lVar1 = *local_60 + (longlong)iStack_44 * 0x60;
      FUN_1471263f0(lVar1 + 0x18);
      if (*(longlong *)(lVar1 + 8) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < *(int *)(local_50 + 0x18));
  }
  DAT_14c9ac020 = 0;
  if (DAT_14c9ac024 != 0) {
    FUN_1448fc38a(&DAT_14c9ac018,0);
  }
  _DAT_14c9ac048 = 0xffffffff;
  DAT_14c9ac040 = 0;
  if (0x80 < DAT_14c9ac044) {
    DAT_14c9ac044 = 0x80;
    FUN_1446efbd8(&DAT_14c9ac028,0);
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146013844 FUN_146013844 body=188 status=ok
// SIG undefined FUN_146013844(void)

undefined8 * FUN_146013844(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = &PTR__purecall_14a34aaf0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x16));
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x17));
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x18));
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  return param_1;
}



// FUNCTION 14601390c FUN_14601390c body=243 status=ok
// SIG undefined FUN_14601390c(void)

undefined8 * FUN_14601390c(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14a4da7f0;
  param_1[8] = &PTR_FUN_14a4daad0;
  param_1[9] = 0;
  param_1[10] = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x32) = 8;
  uVar1 = FUN_1408bae02();
  *(uint *)(param_1 + 7) = uVar1 | 0x10;
  *param_1 = &PTR_FUN_14a4dbca0;
  param_1[8] = &PTR_FUN_14a4dbf80;
  lVar2 = FUN_14038fb82();
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar2 + 0x9c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(lVar2 + 0xa4);
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_18 = param_1[2];
    if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_20 = FUN_145a68760();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    FUN_140909372(&local_20,&local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146013a0c FUN_146013a0c body=244 status=ok
// SIG undefined FUN_146013a0c(void)

undefined8 * FUN_146013a0c(undefined8 *param_1)

{
  FUN_14585e102();
  param_1[0x5f] = &PTR_FUN_14b56e120;
  FUN_141067f4a(param_1 + 0x60);
  param_1[0x60] = &PTR_FUN_14b56e140;
  param_1[0x66] = 0;
  param_1[0x68] = 0;
  *(undefined1 *)((longlong)param_1 + 0x34a) = 1;
  *(undefined2 *)(param_1 + 0x69) = 0;
  *param_1 = &PTR_FUN_14b579dd0;
  param_1[5] = &PTR_FUN_14b57a2b0;
  param_1[0x2d] = &PTR_FUN_14b57a2f0;
  param_1[0x5f] = &PTR_FUN_14b57a320;
  param_1[0x67] = &PTR_FUN_14b57a340;
  param_1[0x6a] = &PTR_FUN_14b57a3a0;
  *(undefined1 (*) [16])(param_1 + 0x6b) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x6d) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x6f) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x71) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x73) = (undefined1  [16])0x0;
  *(undefined1 *)(param_1 + 0x75) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3ac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x76) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x77) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3bc) = 0xffffffff;
  return param_1;
}



// FUNCTION 146013b0c FUN_146013b0c body=244 status=ok
// SIG undefined FUN_146013b0c(void)

undefined8 * FUN_146013b0c(undefined8 *param_1)

{
  FUN_140834366();
  *param_1 = &PTR_FUN_14ba64460;
  FUN_144a5dc74(param_1 + 0x72);
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined1 *)(param_1 + 0x77) = 0;
  param_1[0x74] = &PTR_FUN_14a5af930;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  param_1[0x7a] = &PTR_FUN_14a5af930;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 2;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x43c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44c) = 0;
  param_1[0x8a] = 2;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 8;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  param_1[0x2e] = (ulonglong)DAT_14c892fb0;
  return param_1;
}



// FUNCTION 146013c08 FUN_146013c08 body=725 status=ok
// SIG undefined FUN_146013c08(void)

undefined8 * FUN_146013c08(undefined8 *param_1)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145ad3c5c();
  *param_1 = &PTR_FUN_14bd827f0;
  param_1[5] = &PTR_FUN_14bd82be0;
  param_1[0x13] = &PTR_FUN_14bd82c00;
  param_1[0x15] = &PTR_FUN_14bd82c30;
  param_1[0x16] = &PTR_FUN_14bd82c70;
  param_1[0x20] = &PTR_FUN_14bd82ca0;
  *(undefined4 *)(param_1 + 0x21) = 0x3f000000;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x3ff00000;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x3ff00000;
  param_1[0x3a] = 0x3ff0000000000000;
  param_1[0x3b] = 0;
  FUN_141300fc0(param_1 + 0x3c);
  param_1[0x77] = DAT_14c8464f0;
  uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x75] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x76] = uVar2;
  param_1[0x7a] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7b] = 0x3ff0000000000000;
  param_1[0x7e] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8._4_4_;
  uVar4 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x7c) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x3e4) = uVar3;
  *(undefined4 *)(param_1 + 0x7d) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x3ec) = uVar5;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x82) = 0;
  FUN_146013f98(param_1 + 0x86);
  FUN_14601408c(param_1 + 0x12e);
  uVar5 = DAT_14c8464e8._4_4_;
  uVar4 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x1db) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0xedc) = uVar3;
  *(undefined4 *)(param_1 + 0x1dc) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xee4) = uVar5;
  param_1[0x1dd] = DAT_14c8464f0;
  param_1[0x1de] = 0;
  param_1[0x1df] = 0;
  param_1[0x1e0] = 0;
  param_1[0x1e1] = 0x3ff0000000000000;
  FUN_146013ede(param_1 + 0x1e2);
  FUN_146014160(param_1 + 0x210);
  param_1[0x210] = &PTR_FUN_14af16f50;
  FUN_1458d302c(param_1 + 0x240);
  FUN_141300fc0(param_1 + 0x25e);
  FUN_1457e37e0(param_1 + 0x282);
  FUN_1461b7b04(param_1 + 0x29e);
  param_1[0x2fd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17f4) = 0x100000000;
  local_50 = L"DeformPolygroupsToolName";
  local_48 = 0x18;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"UDeformMeshPolygonsTool";
  local_48 = 0x17;
  FUN_1446e940c(local_58,&local_50);
  FUN_140208bae(&local_50,local_58,local_54,L"PolyGroup Deform");
  pwVar1 = (wchar_t *)param_1[0x11];
  if (pwVar1 != local_50) {
    param_1[0x11] = local_50;
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 8))();
    }
    if (pwVar1 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)pwVar1 + 0x10))(pwVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x12) = local_48;
  if (local_50 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_50 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146013ede FUN_146013ede body=186 status=ok
// SIG undefined FUN_146013ede(void)

void FUN_146013ede(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae728b0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0x8000000000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  return;
}



// FUNCTION 146013f98 FUN_146013f98 body=186 status=ok
// SIG undefined FUN_146013f98(void)

undefined8 * FUN_146013f98(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = &PTR_FUN_14bd8c250;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xc) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0xd) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar3;
  param_1[0xe] = DAT_14c8464f0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0x3ff0000000000000;
  FUN_146014052(param_1 + 0x14);
  FUN_141300fc0(param_1 + 0x56);
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x404) = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  FUN_141300fc0(param_1 + 0x84);
  return param_1;
}



// FUNCTION 146014052 FUN_146014052 body=58 status=ok
// SIG undefined FUN_146014052(void)

undefined8 * FUN_146014052(undefined8 *param_1)

{
  FUN_145b2589e();
  *param_1 = &PTR_FUN_14af19160;
  param_1[0x38] = 0;
  param_1[0x3a] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  return param_1;
}



// FUNCTION 14601408c FUN_14601408c body=211 status=ok
// SIG undefined FUN_14601408c(void)

undefined8 * FUN_14601408c(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = &PTR_FUN_14bd8c2b0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0xffffffff;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xe) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0xf) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar3;
  param_1[0x10] = DAT_14c8464f0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0x3ff0000000000000;
  FUN_146014052(param_1 + 0x16);
  FUN_141300fc0(param_1 + 0x58);
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x40c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x414) = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  FUN_141300fc0(param_1 + 0x86);
  return param_1;
}



// FUNCTION 146014160 FUN_146014160 body=664 status=ok
// SIG undefined FUN_146014160(void)

undefined8 * FUN_146014160(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = &PTR_LAB_14af18420;
  param_1[2] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f000000;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  local_a8 = param_1[2];
  uStack_60 = param_1[3];
  local_98 = (longlong *)param_1[4];
  uStack_50 = param_1[5];
  local_48 = param_1[6];
  uStack_40 = param_1[7];
  local_38 = param_1[8];
  uStack_30 = param_1[9];
  uVar3 = local_38;
  uVar4 = uStack_30;
  local_58 = local_98;
  uVar2 = uStack_50;
  local_68 = local_a8;
  uVar1 = uStack_60;
  param_1[8] = CONCAT44(uStack_74,local_78);
  param_1[9] = CONCAT44(uStack_6c,uStack_70);
  param_1[6] = &PTR_LAB_14af18200;
  param_1[7] = &LAB_143ba6492;
  param_1[4] = 0;
  param_1[5] = CONCAT44(uStack_8c,uStack_90);
  param_1[2] = &LAB_14854d5d8;
  param_1[3] = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  uStack_80 = uStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  if (local_a8 != 0) {
    plVar5 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar5 = &local_88;
    }
    uStack_60 = uVar1;
    uStack_50 = uVar2;
    local_38 = uVar3;
    uStack_30 = uVar4;
    (**(code **)(*plVar5 + 0x10))();
  }
  local_a8 = param_1[0xe];
  uStack_60 = param_1[0xf];
  local_98 = (longlong *)param_1[0x10];
  uStack_50 = param_1[0x11];
  local_48 = param_1[0x12];
  uStack_40 = param_1[0x13];
  local_38 = param_1[0x14];
  uStack_30 = param_1[0x15];
  uVar3 = local_38;
  uVar4 = uStack_30;
  local_58 = local_98;
  uVar2 = uStack_50;
  local_68 = local_a8;
  uVar1 = uStack_60;
  param_1[0x14] = CONCAT44(uStack_74,local_78);
  param_1[0x15] = CONCAT44(uStack_6c,uStack_70);
  param_1[0x12] = &PTR_LAB_14af18220;
  param_1[0x13] = &LAB_143ba64d2;
  param_1[0x10] = 0;
  param_1[0x11] = CONCAT44(uStack_8c,uStack_90);
  param_1[0xe] = FUN_14854d608;
  param_1[0xf] = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = local_48;
  uStack_80 = uStack_40;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_60 = uVar1;
  uStack_50 = uVar2;
  local_38 = uVar3;
  uStack_30 = uVar4;
  if (local_a8 != 0) {
    plVar5 = &local_88;
    if (local_98 != (longlong *)0x0) {
      plVar5 = local_98;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460143fa FUN_1460143fa body=180 status=ok
// SIG undefined FUN_1460143fa(void)

void FUN_1460143fa(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((byte *)*param_4 != (byte *)0x0) && ((*(byte *)*param_4 & 3) != 0)) {
    lVar2 = (**(code **)(*param_1 + 0x180))();
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
      lVar3 = FUN_140dbafcc();
      if (lVar3 != 0) {
        lVar2 = FUN_1400f6f32(lVar2);
        if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x68), lVar2 != 0)) {
          lVar3 = FUN_140bccd38(lVar2,param_2 + 0x18);
          if (lVar3 != 0) {
            uVar1 = FUN_140def96c(lVar2,param_2 + 0x18);
            lVar2 = FUN_140e7100c(lVar3);
            if (lVar2 != 0) {
              FUN_1460144ae(lVar2,param_4,uVar1);
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1460144ae FUN_1460144ae body=138 status=ok
// SIG undefined FUN_1460144ae(void)

void FUN_1460144ae(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = DAT_14cbd7f00;
  local_50 = DAT_14cbd7f08;
  FUN_1448075d0(local_48);
  uVar2 = FUN_144a06846(param_2,local_48);
  uVar1 = FUN_1410c4486(uVar2,0);
  *(undefined1 *)(param_1 + 0xf4) = uVar1;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14601453a FUN_14601453a body=408 status=ok
// SIG undefined FUN_14601453a(void)

void FUN_14601453a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined1 local_2c [7];
  undefined1 local_25;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_2c;
  (**(code **)(*param_1 + 0xfc8))(param_1,&local_20,local_24,local_25);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460146d4 FUN_1460146d4 body=250 status=ok
// SIG undefined FUN_1460146d4(void)

void FUN_1460146d4(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  byte *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  undefined1 local_3c [36];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = (&DAT_14c758c60)[param_5[2]];
  local_48 = (&DAT_14c758c60)[param_5[1]];
  local_44 = (&DAT_14c758c60)[*param_5];
  local_40 = (float)param_5[3] * 0.003921569;
  FUN_1460147d0(local_3c,param_3,param_4);
  if (*(longlong *)(param_1 + 0x448) != 0) {
    lVar3 = FUN_140183ac4();
    lVar1 = *(longlong *)(param_1 + 0x448);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       (((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)))) {
      FUN_140fa871e(lVar1,param_2,local_3c);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460147d0 FUN_1460147d0 body=42 status=ok
// SIG undefined FUN_1460147d0(void)

void FUN_1460147d0(undefined1 *param_1,undefined4 param_2,undefined1 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  param_1[0x20] = 0;
  *param_1 = param_3;
  *(undefined8 *)(param_1 + 4) = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  uVar1 = param_4[1];
  *(undefined8 *)(param_1 + 0x10) = *param_4;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  param_1[0x21] = 1;
  return;
}



// FUNCTION 1460147fa FUN_1460147fa body=53 status=ok
// SIG undefined FUN_1460147fa(void)

void FUN_1460147fa(longlong *param_1)

{
  FUN_146014830();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146014830 FUN_146014830 body=329 status=ok
// SIG undefined FUN_146014830(void)

void FUN_146014830(longlong *param_1)

{
  longlong *plVar1;
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
      FUN_145c7dde4((longlong)iStack_4c * 0x30 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
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



// FUNCTION 14601497a FUN_14601497a body=85 status=ok
// SIG undefined FUN_14601497a(void)

void FUN_14601497a(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == param_2) {
          FUN_1460149d0(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x60 + *param_1 + 0x58);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1460149d0 FUN_1460149d0 body=94 status=ok
// SIG undefined FUN_1460149d0(void)

void FUN_1460149d0(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x60 + 0x58);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_146014a2e();
  return;
}



// FUNCTION 146014a2e FUN_146014a2e body=84 status=ok
// SIG undefined FUN_146014a2e(void)

void FUN_146014a2e(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x60;
  *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
  if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(lVar1 + lVar2 + 8);
  FUN_146014a82(param_1,param_2);
  return;
}



// FUNCTION 146014a82 FUN_146014a82 body=120 status=ok
// SIG undefined FUN_146014a82(void)

void FUN_146014a82(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 146014afa FUN_146014afa body=171 status=ok
// SIG undefined FUN_146014afa(void)

undefined8 FUN_146014afa(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined2 *puVar6;
  
  lVar5 = FUN_140d5712e();
  lVar3 = *(longlong *)(lVar5 + 0x58);
  plVar4 = *(longlong **)(lVar5 + 0x60);
  if (plVar4 == (longlong *)0x0) {
    if (*(int *)(lVar3 + 0x30) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = *(undefined2 **)(lVar3 + 0x28);
    }
    FUN_1415ba7c1(param_1,L"LANGUAGE=",L"Language",puVar6,param_2);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (*(int *)(lVar3 + 0x30) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = *(undefined2 **)(lVar3 + 0x28);
    }
    FUN_1415ba7c1(param_1,L"LANGUAGE=",L"Language",puVar6,param_2);
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



// FUNCTION 146014bb0 FUN_146014bb0 body=830 status=ok
// SIG undefined FUN_146014bb0(void)

undefined8 * FUN_146014bb0(undefined8 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined3 uStack_90;
  undefined4 uStack_8d;
  undefined4 uStack_89;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_140312256();
  *param_1 = &PTR_FUN_14ac16340;
  param_1[0x72] = &PTR_FUN_14ac16980;
  param_1[0x73] = &PTR_FUN_14ac169a0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  FUN_1446f470e(&local_38,L"PositionComponent",1);
  uVar4 = FUN_144a799b0();
  local_c0 = 0;
  local_c8 = 1;
  lVar5 = FUN_14048696c(param_1,local_38,uVar4,uVar4);
  if ((lVar5 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar5);
  }
  param_1[0x39] = lVar5;
  FUN_1405bab3a(param_1,1);
  FUN_1446f470e(&local_40,L"SmartLinkComp",1);
  uVar4 = FUN_1459937de();
  local_c0 = 0;
  local_c8 = 1;
  lVar5 = FUN_14048696c(param_1,local_40,uVar4,uVar4);
  if ((lVar5 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar5);
  }
  param_1[0x78] = lVar5;
  FUN_146014efc(lVar5,0);
  uVar4 = param_1[0x78];
  local_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  FUN_1446efa72(&local_b0,0,3,0x10);
  puVar3 = local_b0;
  uStack_a8 = 3;
  *local_b0 = &PTR_LAB_14ac25640;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_b0[2] = lVar6;
  *local_b0 = &PTR_FUN_14ac255d0;
  local_b0[3] = 0;
  FUN_14485c47a(local_b0 + 3,param_1);
  puVar3[4] = FUN_147ef295c;
  *(undefined4 *)(puVar3 + 5) = 0;
  FUN_146014ef0(uVar4,&local_b0);
  FUN_1449db362(&local_b0);
  *(undefined1 *)(param_1 + 0x79) = 0;
  FUN_145be65b2(&local_b0);
  local_70 = 0;
  uStack_68 = 0xc049000000000000;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0x4049000000000000;
  uStack_48 = 0;
  uVar4 = FUN_14142c306();
  FUN_145be65ee(&local_b0,uVar4);
  iVar2 = *(int *)(param_1 + 0x75);
  *(uint *)(param_1 + 0x75) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x3ac) < iVar2 + 1U) {
    FUN_145be6626(param_1 + 0x74,iVar2);
  }
  lVar6 = param_1[0x74];
  lVar7 = (longlong)iVar2 * 0x70;
  lVar5 = lVar6 + lVar7;
  puVar1 = (undefined4 *)(lVar6 + 0x1b + lVar7);
  *puVar1 = CONCAT31((undefined3)uStack_94,uStack_98._3_1_);
  puVar1[1] = CONCAT31(uStack_90,uStack_94._3_1_);
  puVar1[2] = uStack_8d;
  puVar1[3] = uStack_89;
  puVar1 = (undefined4 *)(lVar6 + 0x10 + lVar7);
  *puVar1 = local_a0;
  puVar1[1] = uStack_9c;
  puVar1[2] = uStack_98;
  puVar1[3] = uStack_94;
  puVar1 = (undefined4 *)(lVar6 + lVar7);
  *puVar1 = (undefined4)local_b0;
  puVar1[1] = local_b0._4_4_;
  puVar1[2] = uStack_a8;
  puVar1[3] = uStack_a4;
  *(longlong *)(lVar6 + 0x30 + lVar7) = local_80;
  if ((local_80 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined8 *)(lVar5 + 0x38) = local_78;
  *(undefined4 *)(lVar5 + 0x40) = (undefined4)local_70;
  *(undefined4 *)(lVar5 + 0x44) = local_70._4_4_;
  *(undefined4 *)(lVar5 + 0x48) = (undefined4)uStack_68;
  *(undefined4 *)(lVar5 + 0x4c) = uStack_68._4_4_;
  *(undefined4 *)(lVar5 + 0x50) = (undefined4)local_60;
  *(undefined4 *)(lVar5 + 0x54) = local_60._4_4_;
  *(undefined4 *)(lVar5 + 0x58) = (undefined4)uStack_58;
  *(undefined4 *)(lVar5 + 0x5c) = uStack_58._4_4_;
  *(undefined4 *)(lVar5 + 0x60) = (undefined4)local_50;
  *(undefined4 *)(lVar5 + 100) = local_50._4_4_;
  *(undefined4 *)(lVar5 + 0x68) = (undefined4)uStack_48;
  *(undefined4 *)(lVar5 + 0x6c) = uStack_48._4_4_;
  FUN_1405e47c6(param_1,0);
  FUN_1403121a6(param_1,0);
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146014ef0 FUN_146014ef0 body=12 status=ok
// SIG undefined FUN_146014ef0(void)

void FUN_146014ef0(longlong param_1)

{
  FUN_146014f28(param_1 + 0x238);
  return;
}



// FUNCTION 146014efc FUN_146014efc body=44 status=ok
// SIG undefined FUN_146014efc(void)

void FUN_146014efc(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  if ((((*(byte *)(param_1 + 0x9e) & 0x40) == 0) == (bool)param_2) &&
     (*(byte *)(param_1 + 0x9e) = *(byte *)(param_1 + 0x9e) & 0xbf | param_2 << 6,
     (*(byte *)(param_1 + 0x9c) & 1) != 0)) {
    plVar1 = DAT_14caca218;
    if (DAT_14caca220 == 0) {
      plVar1 = (longlong *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x0001413f02b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x58))(plVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 146014f28 FUN_146014f28 body=124 status=ok
// SIG undefined FUN_146014f28(void)

void FUN_146014f28(longlong *param_1,longlong *param_2)

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



// FUNCTION 146014fa6 FUN_146014fa6 body=40 status=ok
// SIG undefined FUN_146014fa6(void)

undefined8 FUN_146014fa6(undefined8 param_1,int param_2)

{
  FUN_146014fce();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146014fce FUN_146014fce body=964 status=ok
// SIG undefined FUN_146014fce(void)

void FUN_146014fce(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14ba561c0;
  FUN_144760e21(param_1[0x6a],*(undefined4 *)(param_1 + 0x6b));
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x67],*(undefined4 *)(param_1 + 0x68));
  if (param_1[0x67] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[100],*(undefined4 *)(param_1 + 0x65));
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x61],*(undefined4 *)(param_1 + 0x62));
  if (param_1[0x61] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5e],*(undefined4 *)(param_1 + 0x5f));
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5b],*(undefined4 *)(param_1 + 0x5c));
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x58],*(undefined4 *)(param_1 + 0x59));
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x55],*(undefined4 *)(param_1 + 0x56));
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x52],*(undefined4 *)(param_1 + 0x53));
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x4f],*(undefined4 *)(param_1 + 0x50));
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x4c],*(undefined4 *)(param_1 + 0x4d));
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_1449db362(param_1 + 0x46);
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x22b) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x22b) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x225) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x225) = 0;
  }
  while (puVar3 = (undefined8 *)param_1[0x3f], puVar3 != (undefined8 *)0x0) {
    param_1[0x3f] = *puVar3;
    FUN_14601549e(puVar3 + 1);
    FUN_1400020a8(puVar3);
  }
  FUN_146015444(param_1 + 0x33);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_146015392(param_1 + 0x27);
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_1460153c8(param_1 + 0x1c);
  param_1[0x16] = &PTR_FUN_14a5af930;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  param_1[0x16] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 0x19)])(param_1 + 0x17);
  param_1[0x10] = &PTR_FUN_14a5af930;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  param_1[0x10] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 0x13)])(param_1 + 0x11);
  plVar4 = (longlong *)param_1[0xf];
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
  FUN_1460153fe(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 146015392 FUN_146015392 body=53 status=ok
// SIG undefined FUN_146015392(void)

void FUN_146015392(longlong *param_1)

{
  FUN_14601566c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1460153c8 FUN_1460153c8 body=53 status=ok
// SIG undefined FUN_1460153c8(void)

void FUN_1460153c8(longlong *param_1)

{
  FUN_14601580a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1460153fe FUN_1460153fe body=69 status=ok
// SIG undefined FUN_1460153fe(void)

void FUN_1460153fe(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ba5ae20;
  FUN_14601552c();
  plVar2 = (longlong *)param_1[6];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1);
  return;
}



// FUNCTION 146015444 FUN_146015444 body=89 status=ok
// SIG undefined FUN_146015444(void)

void FUN_146015444(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146015499. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14601549e FUN_14601549e body=105 status=ok
// SIG undefined FUN_14601549e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14601549e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_146015501(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a5af930;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a184370;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 3)) {
  case 1:
    return;
  case 2:
    param_1[1] = switchD_1458da17c::caseD_0;
    param_1[2] = (undefined *)0x1470afba2;
    LOCK();
    FUN_1470afba4 = FUN_1470afba4 + 1;
    UNLOCK();
    return;
  case 3:
    *(undefined4 *)(param_1 + 1) = 0x4053b5c6;
    return;
  }
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
                    /* WARNING: Could not recover jumptable at 0x00014053b5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146015501 FUN_146015501 body=43 status=ok
// SIG undefined FUN_146015501(void)

void FUN_146015501(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148fe7f62(param_1);
    param_1 = param_1 + 0x98;
  }
  return;
}



// FUNCTION 14601552c FUN_14601552c body=302 status=ok
// SIG undefined FUN_14601552c(void)

void FUN_14601552c(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x10) != 0) {
      puVar3 = *(undefined8 **)(lVar2 + 8);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,0);
        FUN_1446efa72((longlong *)(lVar2 + 8),0,0,0x10);
        *(undefined4 *)(lVar2 + 0x10) = 0;
      }
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if ((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0xb8) + 0x20))();
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x30) + 8))) {
    FUN_1401cb356();
    local_30 = *(undefined8 *)(param_1 + 0x28);
    local_28 = *(longlong *)(param_1 + 0x30);
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_30);
    lVar2 = *(longlong *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (lVar2 != 0) {
      LOCK();
      piVar1 = (int *)(lVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14601566c FUN_14601566c body=413 status=ok
// SIG undefined FUN_14601566c(void)

void FUN_14601566c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_68);
  }
  local_88 = local_68;
  local_80 = local_60;
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_90 = param_1;
  if (iStack_54 < (int)local_60[3]) {
    do {
      lVar2 = *local_90;
      lVar3 = (longlong)iStack_74 * 0x40;
      *(undefined ***)(lVar2 + lVar3) = &PTR_FUN_14a5af930;
      if (*(longlong *)(lVar2 + 0x20 + lVar3) != 0) {
        FUN_1400020a8();
      }
      puVar4 = (undefined8 *)(lVar2 + lVar3);
      *puVar4 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(puVar4 + 3)])(puVar4 + 1);
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < (int)local_80[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14601580a FUN_14601580a body=413 status=ok
// SIG undefined FUN_14601580a(void)

void FUN_14601580a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_68);
  }
  local_88 = local_68;
  local_80 = local_60;
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_90 = param_1;
  if (iStack_54 < (int)local_60[3]) {
    do {
      lVar2 = *local_90;
      lVar3 = (longlong)iStack_74 * 0x40;
      *(undefined ***)(lVar2 + lVar3) = &PTR_FUN_14a5af930;
      if (*(longlong *)(lVar2 + 0x20 + lVar3) != 0) {
        FUN_1400020a8();
      }
      puVar4 = (undefined8 *)(lVar2 + lVar3);
      *puVar4 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(puVar4 + 3)])(puVar4 + 1);
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < (int)local_80[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460159a8 FUN_1460159a8 body=75 status=ok
// SIG undefined FUN_1460159a8(void)

void FUN_1460159a8(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [16];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_146015a14(local_28);
  uVar1 = FUN_144a52528();
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_140da023c(uVar1,&local_38,local_28);
  FUN_1449db362(local_28);
  return;
}



// FUNCTION 1460159f4 Unwind@1460159f4 body=32 status=ok
// SIG undefined Unwind@1460159f4(void)

void Unwind_1460159f4(undefined8 param_1,longlong param_2)

{
  FUN_1449db362(param_2 + 0x30);
  return;
}



// FUNCTION 146015a14 FUN_146015a14 body=115 status=ok
// SIG undefined FUN_146015a14(void)

undefined8 * FUN_146015a14(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  puVar1 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149ef7ca0;
  puVar1[3] = &DAT_14c98e230;
  puVar1[4] = FUN_1459cea0a;
  return param_1;
}



// FUNCTION 146015a88 Unwind@146015a88 body=32 status=ok
// SIG undefined Unwind@146015a88(void)

void Unwind_146015a88(undefined8 param_1,longlong param_2)

{
  FUN_1449db362(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 146015ab4 FUN_146015ab4 body=244 status=ok
// SIG undefined FUN_146015ab4(void)

undefined8 * FUN_146015ab4(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14130c032();
  *param_1 = &PTR_FUN_14abeddf0;
  param_1[5] = &PTR_FUN_14abee120;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffff;
  *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) & 0xfe;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0xffff;
  *(byte *)((longlong)param_1 + 0xbc) = *(byte *)((longlong)param_1 + 0xbc) & 0xfe;
  FUN_1400b22c2(&local_28,"Compare Blackboard entries");
  if (param_1 + 6 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_28;
    *(undefined4 *)(param_1 + 7) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_1c;
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf8 | 3;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 199;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146015bb4 FUN_146015bb4 body=245 status=ok
// SIG undefined FUN_146015bb4(void)

undefined8 * FUN_146015bb4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14aee3120;
  param_1[5] = &PTR_FUN_14aee33c0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xffffffff00000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0x8000000000;
  param_1[0xd] = 0xffffffff;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x18] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x1a] = &PTR_LAB_14aee56d0;
  param_1[0x1b] = &LAB_148483dc6;
  param_1[0x16] = &DAT_148483dca;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0x3ff0000000000000;
  param_1[0x24] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x22] = DAT_14c8464e0;
  param_1[0x23] = uVar1;
  uVar1 = DAT_14c846518;
  param_1[0x25] = DAT_14c846510;
  param_1[0x26] = uVar1;
  param_1[0x27] = DAT_14c846520;
  return param_1;
}



// FUNCTION 146015caa FUN_146015caa body=53 status=ok
// SIG undefined FUN_146015caa(void)

void FUN_146015caa(longlong *param_1)

{
  FUN_1415bab16();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146015ce0 FUN_146015ce0 body=166 status=ok
// SIG undefined FUN_146015ce0(void)

undefined8 *
FUN_146015ce0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_146015d86(param_1 + 2,param_5);
  param_1[4] = param_2;
  param_1[5] = *param_3;
  lVar2 = param_3[1];
  param_1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[7] = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar1 * 2);
  }
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 4;
  return param_1;
}



// FUNCTION 146015d86 FUN_146015d86 body=124 status=ok
// SIG undefined FUN_146015d86(void)

void FUN_146015d86(longlong *param_1,longlong *param_2)

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



// FUNCTION 146015e04 FUN_146015e04 body=93 status=ok
// SIG undefined FUN_146015e04(void)

void FUN_146015e04(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b456c10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f6900;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146015e62 FUN_146015e62 body=75 status=ok
// SIG undefined FUN_146015e62(void)

void FUN_146015e62(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [16];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_146015ece(local_28);
  uVar1 = FUN_144a52528();
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_140da023c(uVar1,&local_38,local_28);
  FUN_1449db362(local_28);
  return;
}



// FUNCTION 146015eae Unwind@146015eae body=32 status=ok
// SIG undefined Unwind@146015eae(void)

void Unwind_146015eae(undefined8 param_1,longlong param_2)

{
  FUN_1449db362(param_2 + 0x30);
  return;
}



// FUNCTION 146015ece FUN_146015ece body=115 status=ok
// SIG undefined FUN_146015ece(void)

undefined8 * FUN_146015ece(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  puVar1 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b4f8870;
  puVar1[3] = &DAT_14cb97fc0;
  puVar1[4] = FUN_1459a6708;
  return param_1;
}



// FUNCTION 146015f42 Unwind@146015f42 body=32 status=ok
// SIG undefined Unwind@146015f42(void)

void Unwind_146015f42(undefined8 param_1,longlong param_2)

{
  FUN_1449db362(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 146015f6c FUN_146015f6c body=183 status=ok
// SIG undefined FUN_146015f6c(void)

void FUN_146015f6c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b63f090;
  plVar3 = (longlong *)param_1[0x36];
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
  if (*(char *)((longlong)param_1 + 0x1a4) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1a4) = 0;
  }
  plVar3 = (longlong *)param_1[0x33];
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
  plVar3 = (longlong *)param_1[0x31];
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
  FUN_145a38fa8(param_1);
  return;
}



// FUNCTION 14601602a FUN_14601602a body=122 status=ok
// SIG undefined FUN_14601602a(void)

void FUN_14601602a(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_1c);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_1c);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460160a6 FUN_1460160a6 body=75 status=ok
// SIG undefined FUN_1460160a6(void)

void FUN_1460160a6(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [16];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_146016112(local_28);
  uVar1 = FUN_144a52528();
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_140da023c(uVar1,&local_38,local_28);
  FUN_1449db362(local_28);
  return;
}



// FUNCTION 1460160f2 Unwind@1460160f2 body=32 status=ok
// SIG undefined Unwind@1460160f2(void)

void Unwind_1460160f2(undefined8 param_1,longlong param_2)

{
  FUN_1449db362(param_2 + 0x30);
  return;
}



// FUNCTION 146016112 FUN_146016112 body=115 status=ok
// SIG undefined FUN_146016112(void)

undefined8 * FUN_146016112(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  puVar1 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bd3d730;
  puVar1[3] = &DAT_14cc1e8a0;
  puVar1[4] = FUN_14955127e;
  return param_1;
}



// FUNCTION 146016186 Unwind@146016186 body=32 status=ok
// SIG undefined Unwind@146016186(void)

void Unwind_146016186(undefined8 param_1,longlong param_2)

{
  FUN_1449db362(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1460161a6 FUN_1460161a6 body=40 status=ok
// SIG undefined FUN_1460161a6(void)

undefined8 FUN_1460161a6(undefined8 param_1,int param_2)

{
  FUN_1460161ce();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1460161ce FUN_1460161ce body=216 status=ok
// SIG undefined FUN_1460161ce(void)

void FUN_1460161ce(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14bd75b20;
  param_1[5] = &PTR_FUN_14bd75ec0;
  param_1[0x13] = &PTR_FUN_14bd75ee0;
  param_1[0x17] = &PTR_FUN_14bd75f10;
  param_1[0x18] = &PTR_FUN_14bd75f20;
  param_1[0x35] = &PTR_FUN_14bd75f38;
  plVar3 = (longlong *)param_1[0x3f];
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
  plVar3 = (longlong *)param_1[0x3d];
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
  lVar4 = param_1[0x3b];
  if (lVar4 != 0) {
    FUN_149607c46(lVar4);
    FUN_1400020a8(lVar4);
  }
  FUN_145810bd4(param_1);
  return;
}



// FUNCTION 1460162a6 FUN_1460162a6 body=75 status=ok
// SIG undefined FUN_1460162a6(void)

void FUN_1460162a6(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [16];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_146016312(local_28);
  uVar1 = FUN_144a52528();
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_140da023c(uVar1,&local_38,local_28);
  FUN_1449db362(local_28);
  return;
}



// FUNCTION 1460162f2 Unwind@1460162f2 body=32 status=ok
// SIG undefined Unwind@1460162f2(void)

void Unwind_1460162f2(undefined8 param_1,longlong param_2)

{
  FUN_1449db362(param_2 + 0x30);
  return;
}



// FUNCTION 146016312 FUN_146016312 body=115 status=ok
// SIG undefined FUN_146016312(void)

undefined8 * FUN_146016312(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  puVar1 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FExrReaderGpuModule>,class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[3] = &DAT_14cc311c8;
  puVar1[4] = FUN_1459a705a;
  return param_1;
}



// FUNCTION 146016386 Unwind@146016386 body=32 status=ok
// SIG undefined Unwind@146016386(void)

void Unwind_146016386(undefined8 param_1,longlong param_2)

{
  FUN_1449db362(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1460163a6 FUN_1460163a6 body=342 status=ok
// SIG undefined FUN_1460163a6(void)

undefined4 * FUN_1460163a6(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146016590(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_1460164fe(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cadbd40 - DAT_14cadbd6c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cadbd80)) {
      uVar10 = DAT_14cadbd80 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cadbd78;
      if (DAT_14cadbd78 == (undefined *)0x0) {
        puVar7 = &DAT_14cadbd70;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cadbd80 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cadbd78;
      if (DAT_14cadbd78 == (undefined *)0x0) {
        puVar7 = &DAT_14cadbd70;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cadbd80 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cadbd80 = iVar9;
      FUN_14601669e();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460164fe FUN_1460164fe body=145 status=ok
// SIG undefined FUN_1460164fe(void)

undefined8 FUN_1460164fe(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cadbd40 - DAT_14cadbd6c != 1) && (DAT_14cadbd40 != DAT_14cadbd6c)) {
    puVar6 = &DAT_14cadbd70;
    if (DAT_14cadbd78 != (undefined *)0x0) {
      puVar6 = DAT_14cadbd78;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cadbd80 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cadbd38 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_147ad0b5a(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146016590 FUN_146016590 body=270 status=ok
// SIG undefined FUN_146016590(void)

int * FUN_146016590(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cadbd68;
  iVar3 = DAT_14cadbd40;
  if (DAT_14cadbd6c == 0) {
    iVar2 = DAT_14cadbd40 + 1;
    bVar7 = DAT_14cadbd44 == DAT_14cadbd40;
    DAT_14cadbd40 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cadbd38,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cadbd48,1);
    puVar4 = DAT_14cadbd58;
    if (DAT_14cadbd58 == (undefined *)0x0) {
      puVar4 = &DAT_14cadbd48;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cadbd68;
    DAT_14cadbd68 = *(int *)(DAT_14cadbd38 + 4 + lVar6 * 0x18);
    DAT_14cadbd6c = DAT_14cadbd6c + -1;
    if (DAT_14cadbd6c != 0) {
      *(undefined4 *)(DAT_14cadbd38 + (longlong)DAT_14cadbd68 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cadbd48;
  if (DAT_14cadbd58 != (undefined *)0x0) {
    puVar4 = DAT_14cadbd58;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cadbd38;
  return param_1;
}



// FUNCTION 14601669e FUN_14601669e body=523 status=ok
// SIG undefined FUN_14601669e(void)

void FUN_14601669e(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cadbd78 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cadbd78,0,0,4);
  }
  uVar3 = DAT_14cadbd80;
  uVar2 = local_50;
  if (DAT_14cadbd80 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cadbd70,0,DAT_14cadbd80,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cadbd78;
        if (DAT_14cadbd78 == (undefined *)0x0) {
          puVar6 = &DAT_14cadbd70;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cadbd80 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cadbd48;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cadbd60 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cadbd38;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cadbd80 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cadbd78;
        if (DAT_14cadbd78 == (undefined *)0x0) {
          puVar6 = &DAT_14cadbd70;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cadbd80 - 1U & uVar9) * 4);
        puVar6 = DAT_14cadbd78;
        if (DAT_14cadbd78 == (undefined *)0x0) {
          puVar6 = &DAT_14cadbd70;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cadbd80 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460168aa FUN_1460168aa body=309 status=ok
// SIG undefined FUN_1460168aa(void)

undefined4 * FUN_1460168aa(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146016a60(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_1460169e0(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146016b46(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460169e0 FUN_1460169e0 body=127 status=ok
// SIG undefined FUN_1460169e0(void)

undefined8 FUN_1460169e0(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_14692be0a(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146016a60 FUN_146016a60 body=230 status=ok
// SIG undefined FUN_146016a60(void)

int * FUN_146016a60(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 146016b46 FUN_146016b46 body=486 status=ok
// SIG undefined FUN_146016b46(void)

void FUN_146016b46(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
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
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 146016d2e FUN_146016d2e body=64 status=ok
// SIG undefined FUN_146016d2e(void)

void FUN_146016d2e(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14cb8fbf8);
  DAT_14cb8fbf0 = 0;
  if (DAT_14cb8fbe8 != 0) {
    FUN_1400020a8();
  }
  FUN_146016d6e();
  FUN_1449db362(&DAT_14cb8fb98);
  return;
}



// FUNCTION 146016d6e FUN_146016d6e body=63 status=ok
// SIG undefined FUN_146016d6e(void)

void FUN_146016d6e(void)

{
  FUN_146016dae(&DAT_14cb8fba8,0);
  if (DAT_14cb8fbc8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb8fba8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146016dae FUN_146016dae body=384 status=ok
// SIG undefined FUN_146016dae(void)

void FUN_146016dae(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
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
      lVar2 = *(longlong *)(*local_78 + (longlong)iStack_5c * 0x10);
      if (lVar2 != 0) {
        FUN_14058c1a6(lVar2);
        FUN_1400020a8(lVar2);
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar4 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar4 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar3 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146016f30 FUN_146016f30 body=222 status=ok
// SIG undefined FUN_146016f30(void)

void FUN_146016f30(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_88 [40];
  wchar_t *local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146017010();
  local_28 = 0;
  local_38 = 0;
  local_30 = 1;
  local_40 = 0;
  local_50 = 2;
  local_48 = 1;
  local_60 = L"MaxLoadedAmmo";
  local_58 = &DAT_100000002;
  FUN_140c2c993(&local_60,param_2);
  local_60 = L"SpareAmmo";
  local_58 = &DAT_100000003;
  FUN_140c2c993(&local_60,param_2,&local_50);
  local_60 = L"ServerSyncedLoadedAmmo";
  local_58 = &DAT_100000004;
  FUN_140c2c993(&local_60,param_2,&local_50);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146017010 FUN_146017010 body=161 status=ok
// SIG undefined FUN_146017010(void)

void FUN_146017010(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  switchD_143c3d4dc::caseD_42();
  local_28 = 0;
  local_38 = 0;
  local_30 = 1;
  local_48 = L"RegenRate";
  local_40 = (undefined1 *)0x100000000;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_48 = L"ConsumeRegenDelay";
  local_40 = &DAT_100000001;
  FUN_140c2c993(&local_48,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460170b2 FUN_1460170b2 body=102 status=ok
// SIG undefined FUN_1460170b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460170b2(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c8447d0);
  _DAT_14c8447c8 = 0;
  if (DAT_14c8447c0 != 0) {
    FUN_1400020a8();
  }
  FUN_146017118();
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c844758);
  _DAT_14c844750 = 0;
  if (DAT_14c844748 != 0) {
    FUN_1400020a8();
  }
  FUN_14601714e();
  return;
}



// FUNCTION 146017118 FUN_146017118 body=54 status=ok
// SIG undefined FUN_146017118(void)

void FUN_146017118(void)

{
  FUN_14601731c();
  if (DAT_14c8447a0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c844780 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14601714e FUN_14601714e body=54 status=ok
// SIG undefined FUN_14601714e(void)

void FUN_14601714e(void)

{
  FUN_146017184();
  if (DAT_14c844728 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c844708 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146017184 FUN_146017184 body=406 status=ok
// SIG undefined FUN_146017184(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146017184(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0x100000000;
  local_30 = &DAT_14c844718;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (DAT_14c844730 != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = &DAT_14c844708;
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      plVar3 = *(longlong **)(*local_60 + 0x10 + (longlong)iStack_44 * 0x20);
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
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < *(int *)(local_50 + 0x18));
  }
  _DAT_14c844710 = 0;
  if (DAT_14c844714 != 0) {
    FUN_1446f4a44(&DAT_14c844708,0);
  }
  _DAT_14c844738 = 0xffffffff;
  DAT_14c844730 = 0;
  if (0x80 < DAT_14c844734) {
    DAT_14c844734 = 0x80;
    FUN_1446efbd8(&DAT_14c844718,0);
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14601731c FUN_14601731c body=409 status=ok
// SIG undefined FUN_14601731c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14601731c(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0x100000000;
  local_38 = &DAT_14c844790;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (DAT_14c8447a8 != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = &DAT_14c844780;
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      lVar1 = *local_68;
      lVar2 = (longlong)iStack_4c * 0x60;
      *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
      if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
        FUN_1400020a8();
      }
      FUN_1467d6516(lVar1 + lVar2 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  _DAT_14c844788 = 0;
  if (DAT_14c84478c != 0) {
    FUN_1448fc38a(&DAT_14c844780,0);
  }
  _DAT_14c8447b0 = 0xffffffff;
  DAT_14c8447a8 = 0;
  if (0x80 < DAT_14c8447ac) {
    DAT_14c8447ac = 0x80;
    FUN_1446efbd8(&DAT_14c844790,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460174c2 FUN_1460174c2 body=245 status=ok
// SIG undefined FUN_1460174c2(void)

undefined8 * FUN_1460174c2(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a0768c();
  uVar3 = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffffff5f | 0x20;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xffffffff;
  *param_1 = &PTR_FUN_14abd6cf0;
  lVar1 = FUN_145a750e8();
  FUN_1446f470e(&local_30,L"ActionTick",1);
  lVar2 = FUN_1400796d0(param_1[2],local_30,1);
  if (lVar2 != 0) {
    uVar3 = (uint)(*(longlong *)(lVar2 + 0x20) != lVar1) << 4;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffffffef | uVar3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460175b8 FUN_1460175b8 body=129 status=ok
// SIG undefined FUN_1460175b8(void)

undefined8 * FUN_1460175b8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b071c50;
  param_1[5] = &PTR_LAB_14b072650;
  param_1[6] = &PTR_LAB_14b072690;
  param_1[0x55] = &PTR_LAB_14b0726e0;
  param_1[0x56] = &PTR_LAB_14b072760;
  param_1[0x57] = &PTR_LAB_14b072770;
  FUN_14601763a(param_1 + 0xc4);
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14601763a FUN_14601763a body=128 status=ok
// SIG undefined FUN_14601763a(void)

void FUN_14601763a(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1460176c6 FUN_1460176c6 body=141 status=ok
// SIG undefined FUN_1460176c6(void)

undefined8 * FUN_1460176c6(undefined8 *param_1)

{
  char cVar1;
  
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b93a370;
  param_1[5] = 0xffffffffffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 2;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x200000000;
  *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa2) = 0;
  cVar1 = FUN_144a792c0(param_1,0x30);
  if (cVar1 == '\0') {
    FUN_1415bace2(param_1);
  }
  return param_1;
}



// FUNCTION 146017754 FUN_146017754 body=116 status=ok
// SIG undefined FUN_146017754(void)

undefined8 * FUN_146017754(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bbf9490;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 1;
  FUN_1460177c8(param_1 + 0x3e);
  puVar1 = (undefined8 *)param_1[0x3e];
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  return param_1;
}



// FUNCTION 1460177c8 FUN_1460177c8 body=141 status=ok
// SIG undefined FUN_1460177c8(void)

void FUN_1460177c8(longlong param_1)

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
      uVar2 = (uVar2 * 3 >> 3) + uVar2 + 0x10;
    }
    uVar2 = FUN_144a3809e(uVar2 * 0xc,4);
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar2 / 0xc)) {
      uVar3 = uVar2 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,0,uVar3,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar2);
}



// FUNCTION 146017856 FUN_146017856 body=116 status=ok
// SIG undefined FUN_146017856(void)

undefined8 * FUN_146017856(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bbf99d0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 1;
  FUN_1460178ca(param_1 + 0x3e);
  puVar1 = (undefined8 *)param_1[0x3e];
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  return param_1;
}



// FUNCTION 1460178ca FUN_1460178ca body=141 status=ok
// SIG undefined FUN_1460178ca(void)

void FUN_1460178ca(longlong param_1)

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
      uVar2 = (uVar2 * 3 >> 3) + uVar2 + 0x10;
    }
    uVar2 = FUN_144a3809e(uVar2 * 0xc,4);
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar2 / 0xc)) {
      uVar3 = uVar2 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,0,uVar3,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar2);
}



// FUNCTION 146017960 FUN_146017960 body=249 status=ok
// SIG undefined FUN_146017960(void)

undefined8 * FUN_146017960(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1412c18ae();
  *param_1 = &PTR_FUN_14bdd00b0;
  param_1[5] = &PTR_FUN_14bdd0450;
  param_1[0x13] = &PTR_FUN_14bdd0470;
  param_1[0x17] = &PTR_FUN_14bdd04a0;
  param_1[0x18] = &PTR_FUN_14bdd04e0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x1e] = DAT_14c8464e0;
  param_1[0x1f] = uVar1;
  param_1[0x20] = DAT_14c8464f0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0x3ff0000000000000;
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
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x194) = 0;
  return param_1;
}



// FUNCTION 146017a5a FUN_146017a5a body=463 status=ok
// SIG undefined FUN_146017a5a(void)

longlong * FUN_146017a5a(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar7 = (longlong *)FUN_146017e49(param_3,param_4);
  plVar1 = plVar7 + 2;
  local_58 = plVar1;
  local_50 = plVar7;
  FUN_146017ee2(&local_58,plVar1);
  plVar6 = local_50;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  uVar8 = (**(code **)(plVar7[2] + 0x90))(plVar1);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
  }
  local_58 = (longlong *)(param_1 + -8);
  local_50 = plVar1;
  local_48 = plVar7;
  FUN_146017f84(uVar8,local_60,&local_58);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_48 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar4 + 1U) {
    FUN_146017cba(param_1 + 0x18,iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  *(longlong **)(lVar5 + (longlong)iVar4 * 0x10) = plVar1;
  *(longlong **)(lVar5 + 8 + (longlong)iVar4 * 0x10) = plVar7;
  local_70 = plVar1;
  local_68 = plVar7;
  if (plVar7 == (longlong *)0x0) {
    FUN_146017c30(param_1 + 0x28,&local_70);
    *param_2 = 0x10;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    FUN_146017c30(param_1 + 0x28,&local_70);
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar7;
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
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
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146017c30 FUN_146017c30 body=120 status=ok
// SIG undefined FUN_146017c30(void)

void FUN_146017c30(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_146017d3e(param_1,&local_28);
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146017cba FUN_146017cba body=132 status=ok
// SIG undefined FUN_146017cba(void)

void FUN_146017cba(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146017d3e FUN_146017d3e body=266 status=ok
// SIG undefined FUN_146017d3e(void)

void FUN_146017d3e(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar2 + 1;
  uVar6 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar6 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar2;
  }
  else {
    bVar7 = false;
    do {
      lVar8 = uVar6 * 0x10 + -8;
      uVar9 = uVar6;
      while ((*(int *)(*param_1 + lVar8) != 0 &&
             (plVar3 = *(longlong **)(*param_1 + -8 + lVar8), plVar3 != (longlong *)0x0))) {
        local_48 = *param_2;
        local_40 = param_2[1];
        if (local_40 != 0) {
          LOCK();
          *(int *)(local_40 + 0xc) = *(int *)(local_40 + 0xc) + 1;
          UNLOCK();
        }
        cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,&local_48);
        if (cVar5 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar4 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar4) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (bVar7) goto LAB_146017e3a;
          goto LAB_146017d74;
        }
      }
      uVar6 = uVar9 - 1;
      bVar7 = true;
    } while (1 < uVar9);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_146017e3a:
    FUN_14474d06a(param_1,0);
  }
LAB_146017d74:
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146017e49 FUN_146017e49 body=151 status=ok
// SIG undefined FUN_146017e49(void)

undefined8 * FUN_146017e49(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14a158a60;
  local_30 = *param_1;
  *param_1 = 0;
  local_28 = *(undefined4 *)(param_1 + 1);
  local_24 = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  FUN_146018078(puVar1 + 2,&local_30,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146017ee2 FUN_146017ee2 body=162 status=ok
// SIG undefined FUN_146017ee2(void)

void FUN_146017ee2(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_146017f21;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_146017f21;
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
LAB_146017f21:
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
                    /* WARNING: Could not recover jumptable at 0x000146017f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146017f84 FUN_146017f84 body=243 status=ok
// SIG undefined FUN_146017f84(void)

undefined8 FUN_146017f84(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_38 = &PTR_LAB_149e020b0;
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
  *local_38 = &PTR_FUN_14a158a80;
  local_38[3] = *param_3;
  local_38[4] = param_3[1];
  local_38[5] = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146018078 FUN_146018078 body=310 status=ok
// SIG undefined FUN_146018078(void)

undefined8 * FUN_146018078(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14a157b00;
  param_1[3] = 0;
  param_1[3] = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 4) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[7] = *param_3;
  lVar1 = param_3[1];
  param_1[8] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 2;
  uVar2 = FUN_14001cc68(0x168,0x10);
  FUN_1460181b0(uVar2);
  param_1[5] = uVar2;
  puVar3 = &DAT_149dfb77a;
  if (*(int *)(param_1 + 4) != 0) {
    puVar3 = (undefined2 *)param_1[3];
  }
  FUN_140002266(&local_38,L"FMessageBus.%s.Router",puVar3);
  puVar3 = &DAT_149dfb77a;
  if (local_30 != 0) {
    puVar3 = local_38;
  }
  local_40 = 0;
  local_48 = 0xffffffffffffffff;
  uVar2 = FUN_1411b1052(param_1[5],puVar3,0x20000,0);
  param_1[6] = uVar2;
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460181b0 FUN_1460181b0 body=565 status=ok
// SIG undefined FUN_1460181b0(void)

undefined8 * FUN_1460181b0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  *param_1 = &PTR_LAB_14a157c50;
  param_1[1] = &PTR_FUN_14a157c80;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,8);
  *puVar2 = 0;
  param_1[0x22] = puVar2;
  param_1[0x23] = puVar2;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x240,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14a1584d0;
  FUN_146018584(puVar2 + 2);
  param_1[0x29] = puVar2 + 2;
  param_1[0x2a] = puVar2;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  uVar1 = (uint)((ulonglong)DAT_14c99f9f8 >> 0x10);
  uVar5 = (uint)DAT_14c99f9f8 & 0xffff;
  uVar6 = (uint)((ulonglong)DAT_14c99f9f0 >> 0x10);
  uVar4 = (uint)DAT_14c99f9f0 & 0xffff;
  uVar6 = ((uint)DAT_14c99f9f0 << 0x10 | uVar4) + (int)((ulonglong)DAT_14c99f9f0 >> 0x20) +
          (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar4 >> 4);
  FUN_1460183e6(param_1 + 0x16,
                (uVar6 >> 2) +
                ((uint)DAT_14c99f9f8 << 0x10 | uVar5) + (int)((ulonglong)DAT_14c99f9f8 >> 0x20) +
                (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4) + uVar6 * 0x40 + 0x9e3779b9 ^ uVar6)
  ;
  uVar3 = FUN_1405d8a54(0);
  param_1[0x2b] = uVar3;
  FUN_14052bb08(DAT_14c872ce0,L"Messaging",L"bAllowDelayedMessaging",param_1 + 0x2c,&DAT_14c872ce8);
  return param_1;
}



// FUNCTION 1460183e6 FUN_1460183e6 body=128 status=ok
// SIG undefined FUN_1460183e6(void)

longlong FUN_1460183e6(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_141323494(param_1,param_2,&DAT_14c99f9f0);
  if (lVar1 == 0) {
    local_30 = &DAT_14c99f9f0;
    FUN_146018468(param_1,&local_24,param_2 & 0xffffffff);
    lVar1 = *param_1 + (longlong)local_24 * 0x28;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 0x10;
}


