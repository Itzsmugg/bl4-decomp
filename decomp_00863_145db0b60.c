// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145db0b60 FUN_145db0b60 body=138 status=ok
// SIG undefined FUN_145db0b60(void)

code * FUN_145db0b60(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MipLevels";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000012;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145db0adc;
}



// FUNCTION 145db0bea FUN_145db0bea body=57 status=ok
// SIG undefined FUN_145db0bea(void)

void FUN_145db0bea(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_140f0c81a();
  if (lVar1 != 0) {
    FUN_145db0c24(lVar1,param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 145db0c24 FUN_145db0c24 body=101 status=ok
// SIG undefined FUN_145db0c24(void)

void FUN_145db0c24(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_141356fdc();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
      FUN_14154e6ea(*(longlong *)(lVar1 + 0x30),*(undefined4 *)(param_1[4] + 0xe0),param_2,param_3,
                    param_4);
    }
  }
  return;
}



// FUNCTION 145db0c8a FUN_145db0c8a body=284 status=ok
// SIG undefined FUN_145db0c8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145db0c8a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb03680) {
    FUN_144b3d300(&DAT_14cb03680);
    if (DAT_14cb03680 == -1) {
      FUN_145db0da6();
      FUN_140db5666(&DAT_14cb035d8,0,&DAT_14cb03570,L"FScreenPS",
                    L"/Engine/Private/ScreenPixelShader.usf",L"Main",3,1,FUN_147cf112a,FUN_147cf1102
                    ,&LAB_147cf10fe,&LAB_147cf10fa,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0);
      _DAT_14cb035d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1436a4e99);
      _Init_thread_footer(&DAT_14cb03680);
    }
  }
  return &DAT_14cb035d8;
}



// FUNCTION 145db0da6 FUN_145db0da6 body=211 status=ok
// SIG undefined FUN_145db0da6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145db0da6(void)

{
  if ((DAT_14cb035d7 & 2) == 0) {
    DAT_14cb035d7 = DAT_14cb035d7 | 2;
    _DAT_14cb03578 = L"FScreenPS";
    _DAT_14cb03590 = FUN_146826540;
    _DAT_14cb03598 = FUN_146825d77;
    _DAT_14cb035a0 = FUN_146825fd6;
    _DAT_14cb035a8 = FUN_1407e02ea;
    _DAT_14cb035b0 = FUN_146826273;
    _DAT_14cb03588 = FUN_147cf10cc;
    _DAT_14cb035c8 = 0xffffffff000000e8;
    _DAT_14cb035d0 = 8;
    DAT_14cb035d4 = 0;
    _DAT_14cb035b8 = &LAB_147cf10f6;
    FUN_145db0ef6();
    FUN_145db0e7a();
    FUN_1407e00cc(&DAT_14cb03570);
  }
  return &DAT_14cb03570;
}



// FUNCTION 145db0e7a FUN_145db0e7a body=123 status=ok
// SIG undefined FUN_145db0e7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db0e7a(void)

{
  _DAT_14cb051a8 = L"BASE";
  DAT_14cb051d2 = 4;
  _DAT_14cb051b0 = FUN_140b35ae4();
  _DAT_14cb051b8 = DAT_14cb03580;
  _DAT_14cb051c0 = &LAB_14682652b;
  DAT_14cb03580 = &DAT_14cb051a8;
  DAT_14cb035d5 = DAT_14cb035d5 + '\x01';
  _DAT_14cb051c8 = 0x100000000;
  if (*(char *)(_DAT_14cb051b0 + 100) != '\0') {
    DAT_14cb035d6 = DAT_14cb035d6 + '\x01';
  }
  return;
}



// FUNCTION 145db0ef6 FUN_145db0ef6 body=216 status=ok
// SIG undefined FUN_145db0ef6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db0ef6(void)

{
  _DAT_14cb04f38 = L"InTextureSampler";
  DAT_14cb04f62 = FUN_140850cc5();
  _DAT_14cb04f40 = FUN_140fb78d0();
  _DAT_14cb04f50 = &LAB_14682652b;
  _DAT_14cb04f58 = 0x1000000e4;
  _DAT_14cb04f60 = 0;
  _DAT_14cb04f48 = DAT_14cb03580;
  DAT_14cb03580 = &DAT_14cb04f38;
  _DAT_14cb04f08 = L"InTexture";
  DAT_14cb04f32 = FUN_140850cc5();
  _DAT_14cb04f10 = FUN_140fb78d0();
  _DAT_14cb04f20 = &LAB_14682652b;
  _DAT_14cb04f28 = 0x1000000e0;
  _DAT_14cb04f30 = 0;
  _DAT_14cb04f18 = DAT_14cb03580;
  DAT_14cb03580 = &DAT_14cb04f08;
  return;
}



// FUNCTION 145db0fce FUN_145db0fce body=38 status=ok
// SIG undefined FUN_145db0fce(void)

undefined8 FUN_145db0fce(undefined8 param_1,int param_2)

{
  FUN_145db0ff4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145db0ff4 FUN_145db0ff4 body=495 status=ok
// SIG undefined FUN_145db0ff4(void)

void FUN_145db0ff4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3e63f0;
  plVar3 = (longlong *)param_1[0x4a];
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
  FUN_141135d17(param_1[0x47],*(undefined4 *)(param_1 + 0x48));
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x41);
  FUN_141135d17(param_1[0x3e],*(undefined4 *)(param_1 + 0x3f));
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_145db124f(param_1[0x39],*(undefined4 *)(param_1 + 0x3a));
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_145db121a(param_1 + 0x2d);
  FUN_145db129c(param_1 + 0x29);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_145db11e4(param_1 + 0x1f);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_145db11e4(param_1 + 0x15);
  FUN_145dcbabc(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 9);
  FUN_1413e82d3(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_14114f6be(param_1);
  return;
}



// FUNCTION 145db11e4 FUN_145db11e4 body=53 status=ok
// SIG undefined FUN_145db11e4(void)

void FUN_145db11e4(longlong *param_1)

{
  FUN_145db1302();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145db121a FUN_145db121a body=53 status=ok
// SIG undefined FUN_145db121a(void)

void FUN_145db121a(longlong *param_1)

{
  FUN_145db144a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145db124f FUN_145db124f body=77 status=ok
// SIG undefined FUN_145db124f(void)

void FUN_145db124f(longlong param_1,int param_2)

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



// FUNCTION 145db129c FUN_145db129c body=101 status=ok
// SIG undefined FUN_145db129c(void)

void FUN_145db129c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000145db12fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145db1302 FUN_145db1302 body=327 status=ok
// SIG undefined FUN_145db1302(void)

void FUN_145db1302(longlong *param_1)

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
      FUN_14122c31a(*local_68 + (longlong)iStack_4c * 0x90 + 0x18);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140d97c6c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145db144a FUN_145db144a body=356 status=ok
// SIG undefined FUN_145db144a(void)

void FUN_145db144a(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145db15b0 FUN_145db15b0 body=227 status=ok
// SIG undefined FUN_145db15b0(void)

undefined8 FUN_145db15b0(undefined8 param_1)

{
  char cVar1;
  BOOL BVar2;
  undefined1 auStack_58 [32];
  PZZWSTR local_38;
  undefined8 uStack_30;
  ULONG local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_145db1694(6,2,0);
  if (cVar1 != '\0') {
    local_28[1] = 0;
    local_28[0] = 0;
    BVar2 = GetUserPreferredUILanguages(8,local_28 + 1,(PZZWSTR)0x0,local_28);
    if (BVar2 != 0) {
      local_38 = (PZZWSTR)0x0;
      uStack_30 = 0;
      FUN_145db172c(&local_38,local_28[0],1);
      BVar2 = GetUserPreferredUILanguages(8,local_28 + 1,local_38,local_28);
      if (BVar2 != 0) {
        FUN_140056680(param_1);
        if (local_38 != (PZZWSTR)0x0) {
          FUN_1400020a8();
        }
        goto LAB_145db165b;
      }
      if (local_38 != (PZZWSTR)0x0) {
        FUN_1400020a8(local_38);
      }
    }
  }
  FUN_14626e212(param_1);
LAB_145db165b:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145db1694 FUN_145db1694 body=150 status=ok
// SIG undefined FUN_145db1694(void)

undefined8 FUN_145db1694(DWORD param_1,DWORD param_2,DWORD param_3)

{
  BOOL BVar1;
  undefined8 uVar2;
  DWORDLONG dwlConditionMask;
  undefined4 extraout_var;
  undefined1 auStack_158 [36];
  _OSVERSIONINFOEXW local_134;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_134.dwOSVersionInfoSize = 0x11c;
  local_134.dwMajorVersion = param_1;
  local_134.dwMinorVersion = param_2;
  local_134.dwBuildNumber = param_3;
  uVar2 = VerSetConditionMask(0,2,3);
  uVar2 = VerSetConditionMask(uVar2,1,3);
  dwlConditionMask = VerSetConditionMask(uVar2,4,3);
  BVar1 = VerifyVersionInfoW(&local_134,7,dwlConditionMask);
  if ((local_18 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),BVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145db172c FUN_145db172c body=121 status=ok
// SIG undefined FUN_145db172c(void)

void FUN_145db172c(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_144a2dbb8(param_1);
    }
    memset((void *)((longlong)iVar1 * 2 + *param_1),0,(longlong)(param_2 - iVar1) * 2);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1449649ae(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145db17a6 FUN_145db17a6 body=323 status=ok
// SIG undefined FUN_145db17a6(void)

undefined4 * FUN_145db17a6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
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
  FUN_145db196c(param_1,local_48);
  puVar1 = (undefined2 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined2 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_145db18ea(param_1,uVar4,local_40,&local_4c);
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
      FUN_145db1a54(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145db18ea FUN_145db18ea body=130 status=ok
// SIG undefined FUN_145db18ea(void)

undefined8 FUN_145db18ea(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14707f20e((int)lVar3,*param_4);
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



// FUNCTION 145db196c FUN_145db196c body=231 status=ok
// SIG undefined FUN_145db196c(void)

int * FUN_145db196c(longlong *param_1,int *param_2)

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



// FUNCTION 145db1a54 FUN_145db1a54 body=483 status=ok
// SIG undefined FUN_145db1a54(void)

void FUN_145db1a54(longlong *param_1)

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



// FUNCTION 145db1c38 FUN_145db1c38 body=199 status=ok
// SIG undefined FUN_145db1c38(void)

void FUN_145db1c38(void)

{
  longlong lVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  
  if (DAT_14c947e88 != DAT_14c947eb4) {
    puVar3 = &DAT_14c947eb8;
    if (DAT_14c947ec0 != (undefined *)0x0) {
      puVar3 = DAT_14c947ec0;
    }
    for (iVar2 = *(int *)(puVar3 + ((longlong)DAT_14c947ec8 - 1U & 0x3ffffffff00000d0) * 4);
        iVar2 != -1; iVar2 = *(int *)(DAT_14c947e80 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(int *)(DAT_14c947e80 + (longlong)iVar2 * 0x18) == -0xfffff30) {
        puVar3 = &DAT_14c947eb8;
        if (DAT_14c947ec0 != (undefined *)0x0) {
          puVar3 = DAT_14c947ec0;
        }
        lVar1 = DAT_14c947e80 + (longlong)iVar2 * 0x18;
        lVar6 = (longlong)*(int *)(lVar1 + 0x14);
        iVar4 = *(int *)(puVar3 + lVar6 * 4);
        if (iVar4 == iVar2) {
          piVar5 = (int *)(puVar3 + lVar6 * 4);
        }
        else {
          do {
            piVar5 = (int *)(DAT_14c947e80 + (longlong)iVar4 * 0x18 + 0x10);
            iVar4 = *piVar5;
          } while (iVar4 != iVar2);
        }
        *piVar5 = *(int *)(lVar1 + 0x10);
        FUN_145db1d00();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145db1d00 FUN_145db1d00 body=135 status=ok
// SIG undefined FUN_145db1d00(void)

void FUN_145db1d00(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14c947e80;
  if (DAT_14c947eb4 != 0) {
    *(int *)(DAT_14c947e80 + (longlong)DAT_14c947eb0 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c947eb4) {
    iVar4 = DAT_14c947eb0;
  }
  puVar1[1] = iVar4;
  DAT_14c947eb4 = DAT_14c947eb4 + 1;
  puVar5 = &DAT_14c947e90;
  if (DAT_14c947ea0 != (undefined *)0x0) {
    puVar5 = DAT_14c947ea0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14c947eb0 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145db1d88 FUN_145db1d88 body=199 status=ok
// SIG undefined FUN_145db1d88(void)

void FUN_145db1d88(void)

{
  longlong lVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  
  if (DAT_14c947ed8 != DAT_14c947f04) {
    puVar3 = &DAT_14c947f08;
    if (DAT_14c947f10 != (undefined *)0x0) {
      puVar3 = DAT_14c947f10;
    }
    for (iVar2 = *(int *)(puVar3 + ((longlong)DAT_14c947f18 - 1U & 0x3ffffffff00000d0) * 4);
        iVar2 != -1; iVar2 = *(int *)(DAT_14c947ed0 + (longlong)iVar2 * 0x18 + 0x10)) {
      if (*(int *)(DAT_14c947ed0 + (longlong)iVar2 * 0x18) == -0xfffff30) {
        puVar3 = &DAT_14c947f08;
        if (DAT_14c947f10 != (undefined *)0x0) {
          puVar3 = DAT_14c947f10;
        }
        lVar1 = DAT_14c947ed0 + (longlong)iVar2 * 0x18;
        lVar6 = (longlong)*(int *)(lVar1 + 0x14);
        iVar4 = *(int *)(puVar3 + lVar6 * 4);
        if (iVar4 == iVar2) {
          piVar5 = (int *)(puVar3 + lVar6 * 4);
        }
        else {
          do {
            piVar5 = (int *)(DAT_14c947ed0 + (longlong)iVar4 * 0x18 + 0x10);
            iVar4 = *piVar5;
          } while (iVar4 != iVar2);
        }
        *piVar5 = *(int *)(lVar1 + 0x10);
        FUN_145db1e50();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145db1e50 FUN_145db1e50 body=135 status=ok
// SIG undefined FUN_145db1e50(void)

void FUN_145db1e50(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  
  lVar3 = DAT_14c947ed0;
  if (DAT_14c947f04 != 0) {
    *(int *)(DAT_14c947ed0 + (longlong)DAT_14c947f00 * 0x18) = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
  *puVar1 = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c947f04) {
    iVar4 = DAT_14c947f00;
  }
  puVar1[1] = iVar4;
  DAT_14c947f04 = DAT_14c947f04 + 1;
  puVar5 = &DAT_14c947ee0;
  if (DAT_14c947ef0 != (undefined *)0x0) {
    puVar5 = DAT_14c947ef0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14c947f00 = param_1;
  *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 145db1ed8 FUN_145db1ed8 body=40 status=ok
// SIG undefined FUN_145db1ed8(void)

undefined8 FUN_145db1ed8(undefined8 param_1,int param_2)

{
  FUN_145db1f00();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145db1f00 FUN_145db1f00 body=127 status=ok
// SIG undefined FUN_145db1f00(void)

void FUN_145db1f00(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a44e100;
  param_1[6] = 0;
  plVar3 = (longlong *)param_1[7];
  if (plVar3 != (longlong *)0x0) {
    param_1[7] = 0;
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
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145db1f80 FUN_145db1f80 body=40 status=ok
// SIG undefined FUN_145db1f80(void)

undefined8 FUN_145db1f80(undefined8 param_1,int param_2)

{
  FUN_145db1fa8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145db1fa8 FUN_145db1fa8 body=127 status=ok
// SIG undefined FUN_145db1fa8(void)

void FUN_145db1fa8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a52ee50;
  param_1[5] = &PTR_FUN_14a52f170;
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
  *param_1 = &PTR_FUN_14a520560;
  param_1[5] = &PTR_LAB_14a520880;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 145db2030 FUN_145db2030 body=134 status=ok
// SIG undefined FUN_145db2030(void)

undefined8 * FUN_145db2030(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_140e3eac6();
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  *param_1 = &PTR_FUN_14ad72250;
  param_1[6] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  uVar1 = FUN_144830b78((longlong)param_1 + 0x44,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar1;
  param_1[6] = &PTR_FUN_14ad6b910;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x3f80000000000000;
  FUN_145db20b6(param_1 + 6,&DAT_149e1e2f8);
  return param_1;
}



// FUNCTION 145db20b6 FUN_145db20b6 body=191 status=ok
// SIG undefined FUN_145db20b6(void)

void FUN_145db20b6(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 8) = 2;
  local_38 = *param_2;
  uStack_30 = param_2[1];
  local_28 = *(undefined4 *)param_2;
  uStack_24 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_20 = *(undefined4 *)(param_2 + 1);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_48 = (undefined4 *)0x0;
  local_40 = 2;
  FUN_14479fa02(&local_48,2,0);
  local_48[4] = local_28;
  local_48[5] = uStack_24;
  local_48[6] = uStack_20;
  local_48[7] = uStack_1c;
  *local_48 = (undefined4)local_38;
  local_48[1] = local_38._4_4_;
  local_48[2] = (undefined4)uStack_30;
  local_48[3] = uStack_30._4_4_;
  if ((undefined4 **)(param_1 + 0x18) == &local_48) {
    if (local_48 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8(*(longlong *)(param_1 + 0x18));
    }
    *(undefined4 **)(param_1 + 0x18) = local_48;
    *(undefined4 *)(param_1 + 0x20) = local_40;
    *(undefined4 *)(param_1 + 0x24) = local_3c;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145db2176 FUN_145db2176 body=40 status=ok
// SIG undefined FUN_145db2176(void)

undefined8 FUN_145db2176(undefined8 param_1,int param_2)

{
  FUN_145db219e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145db219e FUN_145db219e body=127 status=ok
// SIG undefined FUN_145db219e(void)

void FUN_145db219e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b56cc50;
  plVar3 = (longlong *)param_1[0x13];
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
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145db221e FUN_145db221e body=124 status=ok
// SIG undefined FUN_145db221e(void)

longlong * FUN_145db221e(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x238,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b5c7270;
  FUN_145db229a(plVar3 + 2,0);
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



// FUNCTION 145db229a FUN_145db229a body=43 status=ok
// SIG undefined FUN_145db229a(void)

undefined8 * FUN_145db229a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a88c66();
  FUN_140aed452(param_1,uVar1);
  *param_1 = &PTR_FUN_14b9991b0;
  return param_1;
}



// FUNCTION 145db22c6 FUN_145db22c6 body=248 status=ok
// SIG undefined FUN_145db22c6(void)

undefined8 FUN_145db22c6(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_14b9648f0;
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
  *local_40 = &PTR_FUN_14b9645e0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145db23c0(&DAT_14cbc9990,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145db23c0 FUN_145db23c0 body=216 status=ok
// SIG undefined FUN_145db23c0(void)

undefined8 * FUN_145db23c0(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145db24a6 FUN_145db24a6 body=24 status=ok
// SIG undefined FUN_145db24a6(void)

bool FUN_145db24a6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145db24be FUN_145db24be body=40 status=ok
// SIG undefined FUN_145db24be(void)

undefined8 FUN_145db24be(undefined8 param_1,int param_2)

{
  FUN_145db24e6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145db24e6 FUN_145db24e6 body=127 status=ok
// SIG undefined FUN_145db24e6(void)

void FUN_145db24e6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba83490;
  param_1[5] = &PTR_FUN_14ba83730;
  FUN_144a76fd2(param_1 + 0x10);
  FUN_1449db362(param_1 + 0xe);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145db2566 FUN_145db2566 body=40 status=ok
// SIG undefined FUN_145db2566(void)

undefined8 FUN_145db2566(undefined8 param_1,int param_2)

{
  FUN_145db258e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145db258e FUN_145db258e body=127 status=ok
// SIG undefined FUN_145db258e(void)

void FUN_145db258e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb79240;
  param_1[5] = &PTR_FUN_14bb796c0;
  param_1[0x4f] = &PTR_FUN_14bb79700;
  param_1[0x50] = &PTR_FUN_14bb79720;
  if (param_1[0x160] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15a] != 0) {
    FUN_1400020a8();
  }
  FUN_1456e3f36(param_1);
  return;
}



// FUNCTION 145db260e FUN_145db260e body=40 status=ok
// SIG undefined FUN_145db260e(void)

undefined8 FUN_145db260e(undefined8 param_1,int param_2)

{
  FUN_145db2636();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145db2636 FUN_145db2636 body=127 status=ok
// SIG undefined FUN_145db2636(void)

void FUN_145db2636(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc3a7e0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140fed60e(param_1);
  return;
}



// FUNCTION 145db26b6 FUN_145db26b6 body=40 status=ok
// SIG undefined FUN_145db26b6(void)

undefined8 FUN_145db26b6(undefined8 param_1,int param_2)

{
  FUN_145db26de();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145db26de FUN_145db26de body=127 status=ok
// SIG undefined FUN_145db26de(void)

void FUN_145db26de(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bed7fa0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bed6bb0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145db275e FUN_145db275e body=71 status=ok
// SIG undefined FUN_145db275e(void)

void FUN_145db275e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000145db27a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145db27b0 FUN_145db27b0 body=99 status=ok
// SIG undefined FUN_145db27b0(void)

void FUN_145db27b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b98d950;
  FUN_145db284c();
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_145db2814(param_1 + 0x37);
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_145db2a70(param_1);
  return;
}



// FUNCTION 145db2814 FUN_145db2814 body=55 status=ok
// SIG undefined FUN_145db2814(void)

void FUN_145db2814(longlong *param_1)

{
  FUN_145db28f6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145db284c FUN_145db284c body=170 status=ok
// SIG undefined FUN_145db284c(void)

void FUN_145db284c(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14583bef4();
  if (lVar1 != 0) {
    FUN_140457ffc(lVar1 + 0x4b8,param_1);
    FUN_140457ffc(lVar1 + 0x1e0,param_1);
    FUN_140457ffc(lVar1 + 0x2b8,param_1);
  }
  lVar1 = FUN_145839968(param_1);
  if (lVar1 != 0) {
    FUN_140457ffc(lVar1 + 0x340,param_1);
    FUN_140457ffc(lVar1 + 0x2a8,param_1);
  }
  FUN_140457ffc(&DAT_14cb717f8,param_1);
  FUN_140457ffc(&DAT_14cbd0b00,param_1);
  FUN_140457ffc(&DAT_14cbd0b78,param_1);
  return;
}



// FUNCTION 145db28f6 FUN_145db28f6 body=376 status=ok
// SIG undefined FUN_145db28f6(void)

void FUN_145db28f6(longlong *param_1,int param_2)

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
  if (-1 < param_2) {
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
    if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145db2a70 FUN_145db2a70 body=721 status=ok
// SIG undefined FUN_145db2a70(void)

void FUN_145db2a70(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
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
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_1 = &PTR_LAB_14b4ef800;
  local_68 = 0;
  local_60 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_145c3f772(local_88,param_1 + 5);
  local_a8 = 0x100000000;
  local_98 = 0xffffffff;
  iStack_94 = 0;
  local_90 = 0;
  iVar3 = 0;
  local_a0 = local_78;
  if (local_60 != 0) {
    FUN_1449c0562(&local_a8);
    iVar3 = local_60;
  }
  local_b8 = local_98;
  iStack_b4 = iStack_94;
  local_b0 = local_90;
  local_ac = local_8c;
  local_c8 = local_a8;
  local_c0 = local_a0;
  local_d0 = local_88;
  if ((iStack_94 != iVar3) || (local_a0 != local_78)) {
    do {
      do {
        FUN_145818cea(param_1,*(undefined4 *)(*local_d0 + (longlong)iStack_b4 * 0xc));
        local_b8 = local_b8 & ~local_c8._4_4_;
        FUN_1449c0562(&local_c8);
      } while (iStack_b4 != iVar3);
    } while ((local_c0 != local_78) || (local_d0 != local_88));
  }
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(local_88);
  plVar2 = (longlong *)param_1[0x31];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x26);
  plVar2 = (longlong *)param_1[0x24];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_145db2d42(param_1 + 0x19);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_145db2d78(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 5);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145db2d42 FUN_145db2d42 body=53 status=ok
// SIG undefined FUN_145db2d42(void)

void FUN_145db2d42(longlong *param_1)

{
  FUN_145db2dae();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145db2d78 FUN_145db2d78 body=53 status=ok
// SIG undefined FUN_145db2d78(void)

void FUN_145db2d78(longlong *param_1)

{
  FUN_145db2f1c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145db2dae FUN_145db2dae body=364 status=ok
// SIG undefined FUN_145db2dae(void)

void FUN_145db2dae(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_145818eb2(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
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



// FUNCTION 145db2f1c FUN_145db2f1c body=364 status=ok
// SIG undefined FUN_145db2f1c(void)

void FUN_145db2f1c(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_140ea1a4e(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
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



// FUNCTION 145db308a FUN_145db308a body=91 status=ok
// SIG undefined FUN_145db308a(void)

void FUN_145db308a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_145db30f0();
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
                    /* WARNING: Could not recover jumptable at 0x000145db30e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145db30e6 FUN_145db30e6 body=9 status=ok
// SIG undefined FUN_145db30e6(void)

void FUN_145db30e6(longlong param_1)

{
  FUN_145db3144(param_1 + 0x10);
  return;
}



// FUNCTION 145db30f0 FUN_145db30f0 body=84 status=ok
// SIG undefined FUN_145db30f0(void)

void FUN_145db30f0(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_140b64e34();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    plVar2 = (longlong *)FUN_140b703aa();
    if (plVar2 != (longlong *)0x0) {
      lVar1 = (**(code **)(*plVar2 + 0x2b8))(plVar2);
      if (lVar1 != 0) {
        FUN_140457ffc(lVar1 + 0x18,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145db3144 FUN_145db3144 body=601 status=ok
// SIG undefined FUN_145db3144(void)

void FUN_145db3144(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4df3a0;
  plVar3 = (longlong *)param_1[0x5e];
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
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  FUN_145db339e(param_1 + 0x53);
  *(undefined4 *)(param_1 + 0x52) = 0;
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  FUN_145db33d4(param_1 + 0x49);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  FUN_145db340a(param_1 + 0x3f);
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_145db3440(param_1 + 0x35);
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x32) = 0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_145db3476(param_1 + 0x29);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x1f);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_145db34ac(param_1 + 10);
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b4e00d0;
  if (param_1[1] != 0) {
    FUN_1411ebbe4();
    param_1[1] = 0;
  }
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145db3399. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145db339e FUN_145db339e body=53 status=ok
// SIG undefined FUN_145db339e(void)

void FUN_145db339e(longlong *param_1)

{
  FUN_145db38c2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145db33d4 FUN_145db33d4 body=53 status=ok
// SIG undefined FUN_145db33d4(void)

void FUN_145db33d4(longlong *param_1)

{
  FUN_145db39fa();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145db340a FUN_145db340a body=53 status=ok
// SIG undefined FUN_145db340a(void)

void FUN_145db340a(longlong *param_1)

{
  FUN_145db34e2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145db3440 FUN_145db3440 body=53 status=ok
// SIG undefined FUN_145db3440(void)

void FUN_145db3440(longlong *param_1)

{
  FUN_145db353a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145db3476 FUN_145db3476 body=53 status=ok
// SIG undefined FUN_145db3476(void)

void FUN_145db3476(longlong *param_1)

{
  FUN_145db3b68();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145db34ac FUN_145db34ac body=53 status=ok
// SIG undefined FUN_145db34ac(void)

void FUN_145db34ac(longlong *param_1)

{
  FUN_145db3592();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145db34e2 FUN_145db34e2 body=88 status=ok
// SIG undefined FUN_145db34e2(void)

void FUN_145db34e2(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
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



// FUNCTION 145db353a FUN_145db353a body=88 status=ok
// SIG undefined FUN_145db353a(void)

void FUN_145db353a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
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



// FUNCTION 145db3592 FUN_145db3592 body=305 status=ok
// SIG undefined FUN_145db3592(void)

void FUN_145db3592(longlong *param_1)

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
      FUN_145db36c4((longlong)iStack_4c * 0x68 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14059f004(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145db36c4 FUN_145db36c4 body=96 status=ok
// SIG undefined FUN_145db36c4(void)

void FUN_145db36c4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_145db3724(param_1 + 0x10);
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000145db3720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145db3724 FUN_145db3724 body=53 status=ok
// SIG undefined FUN_145db3724(void)

void FUN_145db3724(longlong *param_1)

{
  FUN_145db375a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145db375a FUN_145db375a body=358 status=ok
// SIG undefined FUN_145db375a(void)

void FUN_145db375a(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 8 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145db38c2 FUN_145db38c2 body=311 status=ok
// SIG undefined FUN_145db38c2(void)

void FUN_145db38c2(longlong *param_1)

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
      FUN_145c59734((longlong)iStack_4c * 0x78 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1410fd13e(param_1,0);
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



// FUNCTION 145db39fa FUN_145db39fa body=364 status=ok
// SIG undefined FUN_145db39fa(void)

void FUN_145db39fa(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_145819992(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
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



// FUNCTION 145db3b68 FUN_145db3b68 body=364 status=ok
// SIG undefined FUN_145db3b68(void)

void FUN_145db3b68(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_14472eaf0(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
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



// FUNCTION 145db3cd6 FUN_145db3cd6 body=40 status=ok
// SIG undefined FUN_145db3cd6(void)

undefined8 FUN_145db3cd6(undefined8 param_1,int param_2)

{
  FUN_145db3cfe();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145db3cfe FUN_145db3cfe body=116 status=ok
// SIG undefined FUN_145db3cfe(void)

void FUN_145db3cfe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8d7bf0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145db3d72(param_1 + 7);
  FUN_145db3da7(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145db3d72 FUN_145db3d72 body=53 status=ok
// SIG undefined FUN_145db3d72(void)

void FUN_145db3d72(longlong *param_1)

{
  FUN_145db3e00();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145db3da7 FUN_145db3da7 body=89 status=ok
// SIG undefined FUN_145db3da7(void)

void FUN_145db3da7(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x78);
    do {
      plVar1[-0xe] = (longlong)&DAT_14a176f00;
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1[-0xe] = (longlong)&PTR_FUN_14a177080;
      FUN_144a78a1a(plVar1 + -0xd);
      plVar1 = plVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145db3e00 FUN_145db3e00 body=370 status=ok
// SIG undefined FUN_145db3e00(void)

void FUN_145db3e00(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x20;
      FUN_145db3da7(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 145db3f98 FUN_145db3f98 body=103 status=ok
// SIG undefined FUN_145db3f98(void)

ulonglong FUN_145db3f98(longlong param_1)

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
LAB_145db3fe2:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145db3fe2;
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



// FUNCTION 145db4000 FUN_145db4000 body=40 status=ok
// SIG undefined FUN_145db4000(void)

undefined8 FUN_145db4000(undefined8 param_1,int param_2)

{
  FUN_145db4028();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145db4028 FUN_145db4028 body=63 status=ok
// SIG undefined FUN_145db4028(void)

void FUN_145db4028(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab34020;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145db4068(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145db4068 FUN_145db4068 body=53 status=ok
// SIG undefined FUN_145db4068(void)

void FUN_145db4068(longlong *param_1)

{
  FUN_145db409e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145db409e FUN_145db409e body=345 status=ok
// SIG undefined FUN_145db409e(void)

void FUN_145db409e(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 145db41f8 FUN_145db41f8 body=357 status=ok
// SIG undefined FUN_145db41f8(void)

void FUN_145db41f8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48 [3];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
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
  FUN_145db435e(&local_50,local_28,local_30,local_48);
  *param_3 = local_50;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145db435e FUN_145db435e body=121 status=ok
// SIG undefined FUN_145db435e(void)

undefined8 *
FUN_145db435e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_2;
  FUN_1409c23dd(&local_28,param_4);
  local_48 = local_28;
  local_40 = 0xffffffff;
  FUN_145db43d8(local_38,param_3);
  *param_1 = local_38[0];
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145db43d8 FUN_145db43d8 body=22 status=ok
// SIG undefined FUN_145db43d8(void)

undefined8 FUN_145db43d8(undefined8 param_1)

{
  FUN_140f930f0();
  return param_1;
}



// FUNCTION 145db43ee FUN_145db43ee body=108 status=ok
// SIG undefined FUN_145db43ee(void)

void FUN_145db43ee(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else if (param_2 < 0x101) {
    iVar3 = 0x100;
  }
  else {
    uVar2 = FUN_144a3809e((ulonglong)param_2 << 3,0);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if ((int)param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x80c)) {
    *(int *)(param_1 + 0x80c) = iVar3;
    FUN_145db445a(param_1,*(undefined4 *)(param_1 + 0x808));
    return;
  }
  return;
}



// FUNCTION 145db445a FUN_145db445a body=143 status=ok
// SIG undefined FUN_145db445a(void)

void FUN_145db445a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x800);
  if ((uint)param_3 < 0x101) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x800,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x800),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x800,param_2,param_3,8);
  return;
}



// FUNCTION 145db44ea FUN_145db44ea body=232 status=ok
// SIG undefined FUN_145db44ea(void)

undefined8 FUN_145db44ea(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14b4efbf0;
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
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14b4efb80;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_148a95b1c;
  FUN_145db45d4(param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145db45d4 FUN_145db45d4 body=233 status=ok
// SIG undefined FUN_145db45d4(void)

undefined8 * FUN_145db45d4(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14cb71558,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14cb71560;
      lVar6 = (longlong)(int)DAT_14cb71560;
      DAT_14cb71560 = DAT_14cb71560 + 1;
      if (DAT_14cb71564 < DAT_14cb71560) {
        FUN_1447a71f6(&DAT_14cb71558,uVar3);
      }
      lVar2 = DAT_14cb71558;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cb71558 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145db46ca FUN_145db46ca body=24 status=ok
// SIG undefined FUN_145db46ca(void)

bool FUN_145db46ca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145db46e2 FUN_145db46e2 body=232 status=ok
// SIG undefined FUN_145db46e2(void)

undefined8 FUN_145db46e2(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14b4efe20;
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
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14b4efdb0;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = &LAB_143f374e4;
  FUN_145db47cc(param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145db47cc FUN_145db47cc body=233 status=ok
// SIG undefined FUN_145db47cc(void)

undefined8 * FUN_145db47cc(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14c86a9c0,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14c86a9c8;
      lVar6 = (longlong)(int)DAT_14c86a9c8;
      DAT_14c86a9c8 = DAT_14c86a9c8 + 1;
      if (DAT_14c86a9cc < DAT_14c86a9c8) {
        FUN_1447a71f6(&DAT_14c86a9c0,uVar3);
      }
      lVar2 = DAT_14c86a9c0;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14c86a9c0 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145db48c2 FUN_145db48c2 body=24 status=ok
// SIG undefined FUN_145db48c2(void)

bool FUN_145db48c2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145db48da FUN_145db48da body=156 status=ok
// SIG undefined FUN_145db48da(void)

void FUN_145db48da(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar2 = FUN_144a79464();
    plVar3 = *(longlong **)(lVar1 + 0x1f0);
    if (((plVar3 != (longlong *)0x0) &&
        (((lVar2 != 0 && (lVar1 = plVar3[2], lVar1 != 0)) &&
         (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x470))();
      if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145db4968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 8))(plVar3,param_2,param_3,param_4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145db4976 FUN_145db4976 body=137 status=ok
// SIG undefined FUN_145db4976(void)

void FUN_145db4976(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x2b0))();
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_140ee81ae(lVar1,param_2 + 0x1c);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x88))(plVar2,param_4);
      }
      plVar3 = (longlong *)FUN_140ee8222(lVar1,param_2 + 0x1c);
      if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145db49f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x98))(plVar3,param_4,plVar2,*(code **)(*plVar3 + 0x98));
        return;
      }
    }
  }
  return;
}



// FUNCTION 145db4a00 FUN_145db4a00 body=40 status=ok
// SIG undefined FUN_145db4a00(void)

undefined8 FUN_145db4a00(undefined8 param_1,int param_2)

{
  FUN_145db4a28();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145db4a28 FUN_145db4a28 body=295 status=ok
// SIG undefined FUN_145db4a28(void)

void FUN_145db4a28(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5162a0;
  param_1[5] = &PTR_FUN_14a5165b0;
  plVar3 = (longlong *)param_1[0x10a];
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
  if (param_1[0x107] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x105] != 0) {
    FUN_1400020a8();
  }
  FUN_144a65a1e(param_1[0x103],*(undefined4 *)(param_1 + 0x104));
  if (param_1[0x103] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x100] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x100] + 0x10))();
  }
  if ((longlong *)param_1[0xfe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xfe] + 0x10))();
  }
  plVar3 = (longlong *)param_1[0xfa];
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
  FUN_140e9e952(param_1 + 0x9c);
  FUN_140ffd6b6(param_1 + 0x2e);
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 145db4b5a FUN_145db4b5a body=159 status=ok
// SIG undefined FUN_145db4b5a(void)

undefined8 * FUN_145db4b5a(undefined8 *param_1)

{
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
  *param_1 = &PTR_FUN_14a679090;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb490) {
    FUN_144b3d300(&DAT_14caeb490);
    if (DAT_14caeb490 == -1) {
      FUN_14154ec9c();
      atexit((_func_5014 *)&LAB_14356e0c3);
      _Init_thread_footer(&DAT_14caeb490);
    }
  }
  return param_1;
}



// FUNCTION 145db4bfa FUN_145db4bfa body=261 status=ok
// SIG undefined FUN_145db4bfa(void)

void FUN_145db4bfa(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_1;
  plVar3 = (longlong *)FUN_14001cc68(0x50,0x10);
  FUN_145db4e2a(plVar3,&local_50,param_2);
  plVar1 = plVar3 + 2;
  local_48 = plVar1;
  local_40 = plVar3;
  FUN_145db4d88(&local_48,plVar1);
  local_38 = plVar1;
  local_30 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_145db4d00(param_1,&local_38);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_145db4d00(param_1);
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
  }
  plVar1 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_1449db362(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145db4d00 FUN_145db4d00 body=134 status=ok
// SIG undefined FUN_145db4d00(void)

void FUN_145db4d00(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = *(undefined8 *)(param_1 + 0x590);
  local_20 = *param_2;
  local_18 = (longlong *)param_2[1];
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  FUN_1411d7792(uVar3,&local_20);
  plVar4 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145db4d88 FUN_145db4d88 body=162 status=ok
// SIG undefined FUN_145db4d88(void)

void FUN_145db4d88(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145db4dc7;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145db4dc7;
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
LAB_145db4dc7:
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
                    /* WARNING: Could not recover jumptable at 0x000145db4e26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145db4e2a FUN_145db4e2a body=194 status=ok
// SIG undefined FUN_145db4e2a(void)

undefined8 * FUN_145db4e2a(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_14b98bb30;
  local_38 = 0;
  local_30 = 0;
  FUN_14114e6dc(&local_38,param_3);
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  iVar2 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x2c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar2;
  param_1[6] = uVar1;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[2] = &PTR_FUN_14b98bb50;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14114e6dc(param_1 + 8,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145db4eee FUN_145db4eee body=40 status=ok
// SIG undefined FUN_145db4eee(void)

undefined8 FUN_145db4eee(undefined8 param_1,int param_2)

{
  FUN_145db4f16();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145db4f16 FUN_145db4f16 body=63 status=ok
// SIG undefined FUN_145db4f16(void)

void FUN_145db4f16(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b592a10;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145db4f56(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145db4f56 FUN_145db4f56 body=53 status=ok
// SIG undefined FUN_145db4f56(void)

void FUN_145db4f56(longlong *param_1)

{
  FUN_145db4f8c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145db4f8c FUN_145db4f8c body=346 status=ok
// SIG undefined FUN_145db4f8c(void)

void FUN_145db4f8c(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x18 + (longlong)iStack_4c * 0x38) != 0) {
        FUN_1400020a8();
      }
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



// FUNCTION 145db50e8 FUN_145db50e8 body=292 status=ok
// SIG undefined FUN_145db50e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145db50e8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca25ca8) {
    FUN_144b3d300(&DAT_14ca25ca8);
    if (DAT_14ca25ca8 == -1) {
      FUN_145db5356();
      FUN_145db520c();
      FUN_140db5666(&DAT_14ca25c00,0,&DAT_14ca25b98,L"FGTAOMobile_SpatialFilterCS",
                    L"/Engine/Private/PostProcessAmbientOcclusionMobile.usf",L"GTAOSpatialFilterCS",
                    5,1,FUN_14728a194,FUN_14728a134,&LAB_14728a0f8,&LAB_14728a0f4,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca282b0);
      _DAT_14ca25c00 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142eb3603);
      _Init_thread_footer(&DAT_14ca25ca8);
    }
  }
  return &DAT_14ca25c00;
}



// FUNCTION 145db520c FUN_145db520c body=205 status=ok
// SIG undefined FUN_145db520c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db520c(void)

{
  if ((DAT_14ca25bff & 2) == 0) {
    DAT_14ca25bff = DAT_14ca25bff | 2;
    _DAT_14ca25ba0 = L"FGTAOMobile_SpatialFilterCS";
    _DAT_14ca25bb8 = FUN_146826540;
    _DAT_14ca25bc0 = FUN_146825d77;
    _DAT_14ca25bc8 = FUN_146825fd6;
    _DAT_14ca25bd0 = FUN_1407e02ea;
    _DAT_14ca25bd8 = FUN_146826273;
    _DAT_14ca25bb0 = FUN_14728a0c4;
    _DAT_14ca25bf0 = 0xffffffff000000e0;
    _DAT_14ca25bf8 = 8;
    DAT_14ca25bfc = 0;
    _DAT_14ca25be0 = &LAB_14728a0f0;
    FUN_145db52da();
    FUN_1407e00cc(&DAT_14ca25b98);
    return;
  }
  return;
}



// FUNCTION 145db52da FUN_145db52da body=123 status=ok
// SIG undefined FUN_145db52da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db52da(void)

{
  _DAT_14ca2beb0 = L"BASE";
  DAT_14ca2beda = 4;
  _DAT_14ca2beb8 = FUN_140b35ae4();
  _DAT_14ca2bec0 = DAT_14ca25ba8;
  _DAT_14ca2bec8 = &LAB_14682652b;
  DAT_14ca25ba8 = &DAT_14ca2beb0;
  DAT_14ca25bfd = DAT_14ca25bfd + '\x01';
  _DAT_14ca2bed0 = 0x100000000;
  if (*(char *)(_DAT_14ca2beb8 + 100) != '\0') {
    DAT_14ca25bfe = DAT_14ca25bfe + '\x01';
  }
  return;
}



// FUNCTION 145db5356 FUN_145db5356 body=261 status=ok
// SIG undefined FUN_145db5356(void)

void FUN_145db5356(void)

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
              0x110) < DAT_14ca28330) {
    FUN_144b3d300(&DAT_14ca28330);
    if (DAT_14ca28330 == -1) {
      FUN_145db545c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x15b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca282b0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ed6bcc);
      _Init_thread_footer(&DAT_14ca28330);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145db545c FUN_145db545c body=226 status=ok
// SIG undefined FUN_145db545c(void)

longlong * FUN_145db545c(longlong *param_1)

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
  pcVar13 = FUN_1462f8c30;
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



// FUNCTION 145db5544 FUN_145db5544 body=140 status=ok
// SIG undefined FUN_145db5544(void)

undefined1 * FUN_145db5544(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145db55d0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FGTAOMobile_SpatialFilter::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca28338;
  return &LAB_145db5540;
}



// FUNCTION 145db55d0 FUN_145db55d0 body=261 status=ok
// SIG undefined FUN_145db55d0(void)

void FUN_145db55d0(void)

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
              0x110) < DAT_14ca283b8) {
    FUN_144b3d300(&DAT_14ca283b8);
    if (DAT_14ca283b8 == -1) {
      FUN_145db56d6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x124;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca28338,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ed6bd8);
      _Init_thread_footer(&DAT_14ca283b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145db56d6 FUN_145db56d6 body=226 status=ok
// SIG undefined FUN_145db56d6(void)

longlong * FUN_145db56d6(longlong *param_1)

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
  pcVar13 = FUN_1462f8cb8;
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



// FUNCTION 145db57be FUN_145db57be body=132 status=ok
// SIG undefined FUN_145db57be(void)

undefined1 * FUN_145db57be(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewRectMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x125;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145db57ba;
}



// FUNCTION 145db5842 FUN_145db5842 body=138 status=ok
// SIG undefined FUN_145db5842(void)

code * FUN_145db5842(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AOInputTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000129;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14728d37c;
}



// FUNCTION 145db58cc FUN_145db58cc body=292 status=ok
// SIG undefined FUN_145db58cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145db58cc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc27c20) {
    FUN_144b3d300(&DAT_14cc27c20);
    if (DAT_14cc27c20 == -1) {
      FUN_145db5b3a();
      FUN_145db59f0();
      FUN_140db5666(&DAT_14cc27b78,0,&DAT_14cc27b10,L"FRCASCS",
                    L"/Plugin/FSR/Private/PostProcessFFX_RCAS.usf",L"MainCS",5,0x80,FUN_149805cce,
                    FUN_149805c6e,&LAB_14463daa2,&LAB_14463da9e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cc28148);
      _DAT_14cc27b78 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14463db18);
      _Init_thread_footer(&DAT_14cc27c20);
    }
  }
  return &DAT_14cc27b78;
}



// FUNCTION 145db59f0 FUN_145db59f0 body=205 status=ok
// SIG undefined FUN_145db59f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db59f0(void)

{
  if ((DAT_14cc27b77 & 2) == 0) {
    DAT_14cc27b77 = DAT_14cc27b77 | 2;
    _DAT_14cc27b18 = L"FRCASCS";
    _DAT_14cc27b30 = FUN_146826540;
    _DAT_14cc27b38 = FUN_146825d77;
    _DAT_14cc27b40 = FUN_146825fd6;
    _DAT_14cc27b48 = FUN_1407e02ea;
    _DAT_14cc27b50 = FUN_146826273;
    _DAT_14cc27b28 = FUN_149805c40;
    _DAT_14cc27b68 = 0xffffffff000000e0;
    _DAT_14cc27b70 = 8;
    DAT_14cc27b74 = 0;
    _DAT_14cc27b58 = &LAB_149805c6a;
    FUN_145db5abe();
    FUN_1407e00cc(&DAT_14cc27b10);
    return;
  }
  return;
}



// FUNCTION 145db5abe FUN_145db5abe body=123 status=ok
// SIG undefined FUN_145db5abe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db5abe(void)

{
  _DAT_14cc283d0 = L"BASE";
  DAT_14cc283fa = 4;
  _DAT_14cc283d8 = FUN_140b35ae4();
  _DAT_14cc283e0 = DAT_14cc27b20;
  _DAT_14cc283e8 = &LAB_14682652b;
  DAT_14cc27b20 = &DAT_14cc283d0;
  DAT_14cc27b75 = DAT_14cc27b75 + '\x01';
  _DAT_14cc283f0 = 0x100000000;
  if (*(char *)(_DAT_14cc283d8 + 100) != '\0') {
    DAT_14cc27b76 = DAT_14cc27b76 + '\x01';
  }
  return;
}



// FUNCTION 145db5b3a FUN_145db5b3a body=261 status=ok
// SIG undefined FUN_145db5b3a(void)

void FUN_145db5b3a(void)

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
              0x110) < DAT_14cc281c8) {
    FUN_144b3d300(&DAT_14cc281c8);
    if (DAT_14cc281c8 == -1) {
      FUN_145db5c40(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x39;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc28148,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14463e556);
      _Init_thread_footer(&DAT_14cc281c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145db5c40 FUN_145db5c40 body=226 status=ok
// SIG undefined FUN_145db5c40(void)

longlong * FUN_145db5c40(longlong *param_1)

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
  pcVar13 = FUN_14675f21a;
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



// FUNCTION 145db5d28 FUN_145db5d28 body=140 status=ok
// SIG undefined FUN_145db5d28(void)

undefined1 * FUN_145db5d28(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145db5db4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RCAS";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FRCASPassParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cc281d0;
  return &LAB_145db5d24;
}



// FUNCTION 145db5db4 FUN_145db5db4 body=261 status=ok
// SIG undefined FUN_145db5db4(void)

void FUN_145db5db4(void)

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
              0x110) < DAT_14cc28250) {
    FUN_144b3d300(&DAT_14cc28250);
    if (DAT_14cc28250 == -1) {
      FUN_145db5eba(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FRCASPassParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x60;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc281d0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14463e562);
      _Init_thread_footer(&DAT_14cc28250);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145db5eba FUN_145db5eba body=226 status=ok
// SIG undefined FUN_145db5eba(void)

longlong * FUN_145db5eba(longlong *param_1)

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
  pcVar13 = FUN_14675f2a2;
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



// FUNCTION 145db5fa2 FUN_145db5fa2 body=132 status=ok
// SIG undefined FUN_145db5fa2(void)

undefined1 * FUN_145db5fa2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x61;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145db5f9e;
}



// FUNCTION 145db6026 FUN_145db6026 body=138 status=ok
// SIG undefined FUN_145db6026(void)

code * FUN_145db6026(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Const0";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000062;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145db5fa2;
}



// FUNCTION 145db60b0 FUN_145db60b0 body=782 status=ok
// SIG undefined FUN_145db60b0(void)

longlong FUN_145db60b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  undefined8 *local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x160) != 0) goto LAB_145db61dc;
  FUN_1446ddc76(&local_30,"Media",1);
  uVar3 = FUN_144a52528();
  plVar4 = (longlong *)FUN_1402c9134(uVar3,local_30,&local_40,0);
  if (plVar4 == (longlong *)0x0) goto LAB_145db61dc;
  plVar5 = (longlong *)FUN_145db63bf(param_1);
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x160) = 0x10;
    plVar9 = *(longlong **)(param_1 + 0x168);
    if (plVar9 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x168) = 0;
LAB_145db62f2:
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      if (plVar5 != (longlong *)0x0) goto LAB_145db6166;
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x160) = plVar5 + 2;
    plVar9 = *(longlong **)(param_1 + 0x168);
    if (plVar5 == plVar9) {
      LOCK();
      plVar9 = plVar5 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x168) = plVar5;
      if (plVar9 != (longlong *)0x0) goto LAB_145db62f2;
    }
LAB_145db6166:
    LOCK();
    plVar9 = plVar5 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  plVar5 = (longlong *)(**(code **)(*plVar4 + 0xa8))(plVar4);
  local_40 = *(undefined8 *)(param_1 + 0x160);
  plVar4 = *(longlong **)(param_1 + 0x168);
  if (plVar4 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_38 = plVar4;
  }
  (**(code **)(*plVar5 + 0x10))(plVar5,&local_40);
  plVar5 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_38 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_145db61dc:
  if (*(char *)(param_1 + 0x14e) == '\0') {
    *(char *)(param_1 + 0xf1) = (1 < *(int *)(param_1 + 0x210)) + '\x01';
  }
  lVar6 = FUN_14001cc68(0x140,0x10);
  local_78 = *(undefined1 *)(param_1 + 0x21c);
  local_88 = *(undefined1 *)(param_1 + 0x14c);
  local_80 = *(undefined1 *)(param_1 + 0x14d);
  puVar8 = (undefined8 *)(param_1 + 0x198);
  if (((*(int *)(param_1 + 0x174) != 0 || *(int *)(param_1 + 0x170) != 0) ||
      *(int *)(param_1 + 0x178) != 0) || *(int *)(param_1 + 0x17c) != 0) {
    puVar8 = (undefined8 *)(param_1 + 0x170);
  }
  local_58 = *puVar8;
  uStack_50 = puVar8[1];
  local_90 = &local_58;
  local_68 = *(undefined4 *)(param_1 + 0x13c);
  uStack_64 = *(undefined4 *)(param_1 + 0x140);
  uStack_60 = *(undefined4 *)(param_1 + 0x144);
  uStack_5c = *(undefined4 *)(param_1 + 0x148);
  local_98 = &local_68;
  FUN_145db6436(lVar6,param_1,param_1 + 0x1a8,param_1 + 0x1d8);
  lVar7 = lVar6 + 0x10;
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 145db63bf FUN_145db63bf body=119 status=ok
// SIG undefined FUN_145db63bf(void)

undefined8 * FUN_145db63bf(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14a598d00;
  puVar1[2] = &PTR_LAB_14a598d20;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_1);
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 4));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 4),4000);
  return puVar1;
}



// FUNCTION 145db6436 FUN_145db6436 body=398 status=ok
// SIG undefined FUN_145db6436(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_145db6436(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined4 *param_6,char param_7,undefined1 param_8,char param_9)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  longlong lVar7;
  undefined1 uVar8;
  
  FUN_145db65c4();
  FUN_1414e9958(param_1 + 2);
  uVar8 = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_14a597a20;
  param_1[2] = &PTR_FUN_14a597aa0;
  *(undefined1 *)((longlong)param_1 + 0x61) = 0;
  uVar5 = param_5[1];
  *(undefined8 *)((longlong)param_1 + 100) = *param_5;
  *(undefined8 *)((longlong)param_1 + 0x6c) = uVar5;
  uVar2 = param_6[1];
  uVar3 = param_6[2];
  uVar4 = param_6[3];
  *(undefined4 *)((longlong)param_1 + 0x74) = *param_6;
  *(undefined4 *)(param_1 + 0xf) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = param_2;
  param_1[0x15] = param_3;
  param_1[0x16] = param_4;
  *(char *)(param_1 + 0x17) = param_7;
  uVar6 = 1;
  if (param_7 != '\0') {
    uVar6 = param_8;
  }
  *(undefined1 *)((longlong)param_1 + 0xb9) = uVar6;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xbf80000000000005;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  FUN_145db65da(param_1 + 0x1d);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1f),4000);
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x129) = 0;
  *(undefined8 *)((longlong)param_1 + 0x131) = 0;
  if (*(char *)(param_1[0x14] + 0x14e) == '\0') {
    uVar8 = (undefined1)_DAT_14ca84e1c;
  }
  *(undefined1 *)(param_1 + 0xc) = uVar8;
  if (param_9 != '\0') {
    lVar7 = FUN_14001cc68(0x150,0x10);
    FUN_14603e9e6(lVar7,CONCAT71((int7)((ulonglong)param_3 >> 8),param_9) & 0xffffffff);
    lVar1 = param_1[0x26];
    if ((lVar1 != lVar7) && (param_1[0x26] = lVar7, lVar1 != 0)) {
      FUN_1400020a8();
    }
  }
  return param_1;
}



// FUNCTION 145db65c4 FUN_145db65c4 body=22 status=ok
// SIG undefined FUN_145db65c4(void)

void FUN_145db65c4(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14aadd7d0;
  param_1[1] = 0;
  return;
}



// FUNCTION 145db65da FUN_145db65da body=144 status=ok
// SIG undefined FUN_145db65da(void)

undefined8 * FUN_145db65da(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145db666e(&local_28);
  *param_1 = local_28;
  param_1[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145db666e FUN_145db666e body=87 status=ok
// SIG undefined FUN_145db666e(void)

undefined8 * FUN_145db666e(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)FUN_145db66c5();
  *param_1 = plVar2 + 2;
  param_1[1] = plVar2;
  plVar2[3] = (longlong)(plVar2 + 2);
  plVar3 = (longlong *)plVar2[4];
  if (plVar3 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar3 = (longlong *)plVar2[4];
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    plVar2[4] = (longlong)plVar2;
  }
  return param_1;
}



// FUNCTION 145db66c5 FUN_145db66c5 body=123 status=ok
// SIG undefined FUN_145db66c5(void)

undefined8 * FUN_145db66c5(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14a598b70;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[2] = &PTR_LAB_14a598b90;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 7));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 7),4000);
  return puVar1;
}



// FUNCTION 145db6740 FUN_145db6740 body=284 status=ok
// SIG undefined FUN_145db6740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145db6740(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca52ff0) {
    FUN_144b3d300(&DAT_14ca52ff0);
    if (DAT_14ca52ff0 == -1) {
      FUN_145db685c();
      FUN_140db5666(&DAT_14ca52f48,0,&DAT_14ca52ee0,L"FOnePassPointShadowProjectionPS1falsetrue",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,
                    1,FUN_1472f2e04,FUN_1472f2ddc,&LAB_1472f2dd8,&LAB_1472f2dd4,&LAB_14712ac0c,
                    &LAB_14712ac08,0x128,0);
      _DAT_14ca52f48 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049c82);
      _Init_thread_footer(&DAT_14ca52ff0);
    }
  }
  return &DAT_14ca52f48;
}



// FUNCTION 145db685c FUN_145db685c body=210 status=ok
// SIG undefined FUN_145db685c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db685c(void)

{
  if ((DAT_14ca52f47 & 2) == 0) {
    DAT_14ca52f47 = DAT_14ca52f47 | 2;
    _DAT_14ca52ee8 = L"FOnePassPointShadowProjectionPS1falsetrue";
    _DAT_14ca52f00 = FUN_146826540;
    _DAT_14ca52f08 = FUN_146825d77;
    _DAT_14ca52f10 = FUN_146825fd6;
    _DAT_14ca52f18 = FUN_1407e02ea;
    _DAT_14ca52f20 = FUN_146826273;
    _DAT_14ca52ef8 = FUN_1472f2da4;
    _DAT_14ca52f38 = 0xffffffff00000128;
    _DAT_14ca52f40 = 8;
    DAT_14ca52f44 = 0;
    _DAT_14ca52f28 = &LAB_1472f2dd0;
    FUN_145db692e();
    FUN_145db6c84();
    FUN_1407e00cc(&DAT_14ca52ee0);
    return;
  }
  return;
}



// FUNCTION 145db692e FUN_145db692e body=121 status=ok
// SIG undefined FUN_145db692e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db692e(void)

{
  FUN_145db69a8();
  _DAT_14ca59130 = L"OnePassShadowParameters";
  DAT_14ca5915a = FUN_140850cc5();
  _DAT_14ca59138 = FUN_1459d290a();
  _DAT_14ca59148 = &LAB_14682652b;
  _DAT_14ca59150 = 0x1000000e0;
  _DAT_14ca59158 = 0;
  _DAT_14ca59140 = DAT_14ca52ef0;
  DAT_14ca52ef0 = &DAT_14ca59130;
  return;
}



// FUNCTION 145db69a8 FUN_145db69a8 body=121 status=ok
// SIG undefined FUN_145db69a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db69a8(void)

{
  FUN_145db6a22();
  _DAT_14ca59160 = L"ShadowDepthTextureSampler";
  DAT_14ca5918a = FUN_140850cc5();
  _DAT_14ca59168 = FUN_140fb78d0();
  _DAT_14ca59178 = &LAB_14682652b;
  _DAT_14ca59180 = 0x1000000fe;
  _DAT_14ca59188 = 0;
  _DAT_14ca59170 = DAT_14ca52ef0;
  DAT_14ca52ef0 = &DAT_14ca59160;
  return;
}



// FUNCTION 145db6a22 FUN_145db6a22 body=121 status=ok
// SIG undefined FUN_145db6a22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db6a22(void)

{
  FUN_145db6a9c();
  _DAT_14ca59190 = L"LightPosition";
  DAT_14ca591ba = FUN_140850cc5();
  _DAT_14ca59198 = FUN_140ec6960();
  _DAT_14ca591a8 = &LAB_14682652b;
  _DAT_14ca591b0 = 0x100000102;
  _DAT_14ca591b8 = 0;
  _DAT_14ca591a0 = DAT_14ca52ef0;
  DAT_14ca52ef0 = &DAT_14ca59190;
  return;
}



// FUNCTION 145db6a9c FUN_145db6a9c body=121 status=ok
// SIG undefined FUN_145db6a9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db6a9c(void)

{
  FUN_145db6b16();
  _DAT_14ca591c0 = L"ShadowFadeFraction";
  DAT_14ca591ea = FUN_140850cc5();
  _DAT_14ca591c8 = FUN_140ec6960();
  _DAT_14ca591d8 = &LAB_14682652b;
  _DAT_14ca591e0 = &DAT_100000108;
  _DAT_14ca591e8 = 0;
  _DAT_14ca591d0 = DAT_14ca52ef0;
  DAT_14ca52ef0 = &DAT_14ca591c0;
  return;
}



// FUNCTION 145db6b16 FUN_145db6b16 body=121 status=ok
// SIG undefined FUN_145db6b16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db6b16(void)

{
  FUN_145db6b90();
  _DAT_14ca591f0 = L"ShadowSharpen";
  DAT_14ca5921a = FUN_140850cc5();
  _DAT_14ca591f8 = FUN_140ec6960();
  _DAT_14ca59208 = &LAB_14682652b;
  _DAT_14ca59210 = 0x10000010e;
  _DAT_14ca59218 = 0;
  _DAT_14ca59200 = DAT_14ca52ef0;
  DAT_14ca52ef0 = &DAT_14ca591f0;
  return;
}



// FUNCTION 145db6b90 FUN_145db6b90 body=121 status=ok
// SIG undefined FUN_145db6b90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db6b90(void)

{
  FUN_145db6c0a();
  _DAT_14ca59220 = L"PointLightDepthBias";
  DAT_14ca5924a = FUN_140850cc5();
  _DAT_14ca59228 = FUN_140ec6960();
  _DAT_14ca59238 = &LAB_14682652b;
  _DAT_14ca59240 = 0x100000114;
  _DAT_14ca59248 = 0;
  _DAT_14ca59230 = DAT_14ca52ef0;
  DAT_14ca52ef0 = &DAT_14ca59220;
  return;
}



// FUNCTION 145db6c0a FUN_145db6c0a body=121 status=ok
// SIG undefined FUN_145db6c0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db6c0a(void)

{
  FUN_145db6d00();
  _DAT_14ca59250 = L"PointLightProjParameters";
  DAT_14ca5927a = FUN_140850cc5();
  _DAT_14ca59258 = FUN_140ec6960();
  _DAT_14ca59268 = &LAB_14682652b;
  _DAT_14ca59270 = 0x10000011a;
  _DAT_14ca59278 = 0;
  _DAT_14ca59260 = DAT_14ca52ef0;
  DAT_14ca52ef0 = &DAT_14ca59250;
  return;
}



// FUNCTION 145db6c84 FUN_145db6c84 body=123 status=ok
// SIG undefined FUN_145db6c84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db6c84(void)

{
  _DAT_14ca592e0 = L"BASE";
  DAT_14ca5930a = 4;
  _DAT_14ca592e8 = FUN_140b35ae4();
  _DAT_14ca592f0 = DAT_14ca52ef0;
  _DAT_14ca592f8 = &LAB_14682652b;
  DAT_14ca52ef0 = &DAT_14ca592e0;
  DAT_14ca52f45 = DAT_14ca52f45 + '\x01';
  _DAT_14ca59300 = 0x100000000;
  if (*(char *)(_DAT_14ca592e8 + 100) != '\0') {
    DAT_14ca52f46 = DAT_14ca52f46 + '\x01';
  }
  return;
}



// FUNCTION 145db6d00 FUN_145db6d00 body=216 status=ok
// SIG undefined FUN_145db6d00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db6d00(void)

{
  _DAT_14ca592b0 = L"SubstrateGlobalParameters";
  DAT_14ca592da = FUN_140850cc5();
  _DAT_14ca592b8 = FUN_14106a12a();
  _DAT_14ca592c8 = &LAB_14682652b;
  _DAT_14ca592d0 = 0x100000122;
  _DAT_14ca592d8 = 0;
  _DAT_14ca592c0 = DAT_14ca52ef0;
  DAT_14ca52ef0 = &DAT_14ca592b0;
  _DAT_14ca59280 = L"HairStrandsParameters";
  DAT_14ca592aa = FUN_140850cc5();
  _DAT_14ca59288 = FUN_14106a12a();
  _DAT_14ca59298 = &LAB_14682652b;
  _DAT_14ca592a0 = 0x100000120;
  _DAT_14ca592a8 = 0;
  _DAT_14ca59290 = DAT_14ca52ef0;
  DAT_14ca52ef0 = &DAT_14ca59280;
  return;
}



// FUNCTION 145db6dd8 FUN_145db6dd8 body=284 status=ok
// SIG undefined FUN_145db6dd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145db6dd8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca53118) {
    FUN_144b3d300(&DAT_14ca53118);
    if (DAT_14ca53118 == -1) {
      FUN_145db6ef4();
      FUN_140db5666(&DAT_14ca53070,0,&DAT_14ca53008,L"FOnePassPointShadowProjectionPS2falsetrue",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,
                    1,FUN_1472f2f14,FUN_1472f2eec,&LAB_1472f2ee8,&LAB_1472f2ee4,&LAB_14712ac0c,
                    &LAB_14712ac08,0x128,0);
      _DAT_14ca53070 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049c8e);
      _Init_thread_footer(&DAT_14ca53118);
    }
  }
  return &DAT_14ca53070;
}



// FUNCTION 145db6ef4 FUN_145db6ef4 body=210 status=ok
// SIG undefined FUN_145db6ef4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db6ef4(void)

{
  if ((DAT_14ca5306f & 2) == 0) {
    DAT_14ca5306f = DAT_14ca5306f | 2;
    _DAT_14ca53010 = L"FOnePassPointShadowProjectionPS2falsetrue";
    _DAT_14ca53028 = FUN_146826540;
    _DAT_14ca53030 = FUN_146825d77;
    _DAT_14ca53038 = FUN_146825fd6;
    _DAT_14ca53040 = FUN_1407e02ea;
    _DAT_14ca53048 = FUN_146826273;
    _DAT_14ca53020 = FUN_1472f2eb4;
    _DAT_14ca53060 = 0xffffffff00000128;
    _DAT_14ca53068 = 8;
    DAT_14ca5306c = 0;
    _DAT_14ca53050 = &LAB_1472f2ee0;
    FUN_145db6fc6();
    FUN_145db731c();
    FUN_1407e00cc(&DAT_14ca53008);
    return;
  }
  return;
}



// FUNCTION 145db6fc6 FUN_145db6fc6 body=121 status=ok
// SIG undefined FUN_145db6fc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db6fc6(void)

{
  FUN_145db7040();
  _DAT_14ca59310 = L"OnePassShadowParameters";
  DAT_14ca5933a = FUN_140850cc5();
  _DAT_14ca59318 = FUN_1459d290a();
  _DAT_14ca59328 = &LAB_14682652b;
  _DAT_14ca59330 = 0x1000000e0;
  _DAT_14ca59338 = 0;
  _DAT_14ca59320 = DAT_14ca53018;
  DAT_14ca53018 = &DAT_14ca59310;
  return;
}



// FUNCTION 145db7040 FUN_145db7040 body=121 status=ok
// SIG undefined FUN_145db7040(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db7040(void)

{
  FUN_145db70ba();
  _DAT_14ca59340 = L"ShadowDepthTextureSampler";
  DAT_14ca5936a = FUN_140850cc5();
  _DAT_14ca59348 = FUN_140fb78d0();
  _DAT_14ca59358 = &LAB_14682652b;
  _DAT_14ca59360 = 0x1000000fe;
  _DAT_14ca59368 = 0;
  _DAT_14ca59350 = DAT_14ca53018;
  DAT_14ca53018 = &DAT_14ca59340;
  return;
}



// FUNCTION 145db70ba FUN_145db70ba body=121 status=ok
// SIG undefined FUN_145db70ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db70ba(void)

{
  FUN_145db7134();
  _DAT_14ca59370 = L"LightPosition";
  DAT_14ca5939a = FUN_140850cc5();
  _DAT_14ca59378 = FUN_140ec6960();
  _DAT_14ca59388 = &LAB_14682652b;
  _DAT_14ca59390 = 0x100000102;
  _DAT_14ca59398 = 0;
  _DAT_14ca59380 = DAT_14ca53018;
  DAT_14ca53018 = &DAT_14ca59370;
  return;
}



// FUNCTION 145db7134 FUN_145db7134 body=121 status=ok
// SIG undefined FUN_145db7134(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db7134(void)

{
  FUN_145db71ae();
  _DAT_14ca593a0 = L"ShadowFadeFraction";
  DAT_14ca593ca = FUN_140850cc5();
  _DAT_14ca593a8 = FUN_140ec6960();
  _DAT_14ca593b8 = &LAB_14682652b;
  _DAT_14ca593c0 = &DAT_100000108;
  _DAT_14ca593c8 = 0;
  _DAT_14ca593b0 = DAT_14ca53018;
  DAT_14ca53018 = &DAT_14ca593a0;
  return;
}



// FUNCTION 145db71ae FUN_145db71ae body=121 status=ok
// SIG undefined FUN_145db71ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db71ae(void)

{
  FUN_145db7228();
  _DAT_14ca593d0 = L"ShadowSharpen";
  DAT_14ca593fa = FUN_140850cc5();
  _DAT_14ca593d8 = FUN_140ec6960();
  _DAT_14ca593e8 = &LAB_14682652b;
  _DAT_14ca593f0 = 0x10000010e;
  _DAT_14ca593f8 = 0;
  _DAT_14ca593e0 = DAT_14ca53018;
  DAT_14ca53018 = &DAT_14ca593d0;
  return;
}



// FUNCTION 145db7228 FUN_145db7228 body=121 status=ok
// SIG undefined FUN_145db7228(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db7228(void)

{
  FUN_145db72a2();
  _DAT_14ca59400 = L"PointLightDepthBias";
  DAT_14ca5942a = FUN_140850cc5();
  _DAT_14ca59408 = FUN_140ec6960();
  _DAT_14ca59418 = &LAB_14682652b;
  _DAT_14ca59420 = 0x100000114;
  _DAT_14ca59428 = 0;
  _DAT_14ca59410 = DAT_14ca53018;
  DAT_14ca53018 = &DAT_14ca59400;
  return;
}



// FUNCTION 145db72a2 FUN_145db72a2 body=121 status=ok
// SIG undefined FUN_145db72a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db72a2(void)

{
  FUN_145db7398();
  _DAT_14ca59430 = L"PointLightProjParameters";
  DAT_14ca5945a = FUN_140850cc5();
  _DAT_14ca59438 = FUN_140ec6960();
  _DAT_14ca59448 = &LAB_14682652b;
  _DAT_14ca59450 = 0x10000011a;
  _DAT_14ca59458 = 0;
  _DAT_14ca59440 = DAT_14ca53018;
  DAT_14ca53018 = &DAT_14ca59430;
  return;
}



// FUNCTION 145db731c FUN_145db731c body=123 status=ok
// SIG undefined FUN_145db731c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db731c(void)

{
  _DAT_14ca594c0 = L"BASE";
  DAT_14ca594ea = 4;
  _DAT_14ca594c8 = FUN_140b35ae4();
  _DAT_14ca594d0 = DAT_14ca53018;
  _DAT_14ca594d8 = &LAB_14682652b;
  DAT_14ca53018 = &DAT_14ca594c0;
  DAT_14ca5306d = DAT_14ca5306d + '\x01';
  _DAT_14ca594e0 = 0x100000000;
  if (*(char *)(_DAT_14ca594c8 + 100) != '\0') {
    DAT_14ca5306e = DAT_14ca5306e + '\x01';
  }
  return;
}



// FUNCTION 145db7398 FUN_145db7398 body=216 status=ok
// SIG undefined FUN_145db7398(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db7398(void)

{
  _DAT_14ca59490 = L"SubstrateGlobalParameters";
  DAT_14ca594ba = FUN_140850cc5();
  _DAT_14ca59498 = FUN_14106a12a();
  _DAT_14ca594a8 = &LAB_14682652b;
  _DAT_14ca594b0 = 0x100000122;
  _DAT_14ca594b8 = 0;
  _DAT_14ca594a0 = DAT_14ca53018;
  DAT_14ca53018 = &DAT_14ca59490;
  _DAT_14ca59460 = L"HairStrandsParameters";
  DAT_14ca5948a = FUN_140850cc5();
  _DAT_14ca59468 = FUN_14106a12a();
  _DAT_14ca59478 = &LAB_14682652b;
  _DAT_14ca59480 = 0x100000120;
  _DAT_14ca59488 = 0;
  _DAT_14ca59470 = DAT_14ca53018;
  DAT_14ca53018 = &DAT_14ca59460;
  return;
}



// FUNCTION 145db7470 FUN_145db7470 body=284 status=ok
// SIG undefined FUN_145db7470(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145db7470(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca53240) {
    FUN_144b3d300(&DAT_14ca53240);
    if (DAT_14ca53240 == -1) {
      FUN_145db758c();
      FUN_140db5666(&DAT_14ca53198,0,&DAT_14ca53130,L"FOnePassPointShadowProjectionPS3falsetrue",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,
                    1,FUN_1472f3024,FUN_1472f2ffc,&LAB_1472f2ff8,&LAB_1472f2ff4,&LAB_14712ac0c,
                    &LAB_14712ac08,0x128,0);
      _DAT_14ca53198 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049c9a);
      _Init_thread_footer(&DAT_14ca53240);
    }
  }
  return &DAT_14ca53198;
}



// FUNCTION 145db758c FUN_145db758c body=210 status=ok
// SIG undefined FUN_145db758c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db758c(void)

{
  if ((DAT_14ca53197 & 2) == 0) {
    DAT_14ca53197 = DAT_14ca53197 | 2;
    _DAT_14ca53138 = L"FOnePassPointShadowProjectionPS3falsetrue";
    _DAT_14ca53150 = FUN_146826540;
    _DAT_14ca53158 = FUN_146825d77;
    _DAT_14ca53160 = FUN_146825fd6;
    _DAT_14ca53168 = FUN_1407e02ea;
    _DAT_14ca53170 = FUN_146826273;
    _DAT_14ca53148 = FUN_1472f2fc4;
    _DAT_14ca53188 = 0xffffffff00000128;
    _DAT_14ca53190 = 8;
    DAT_14ca53194 = 0;
    _DAT_14ca53178 = &LAB_1472f2ff0;
    FUN_145db765e();
    FUN_145db79b4();
    FUN_1407e00cc(&DAT_14ca53130);
    return;
  }
  return;
}



// FUNCTION 145db765e FUN_145db765e body=121 status=ok
// SIG undefined FUN_145db765e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db765e(void)

{
  FUN_145db76d8();
  _DAT_14ca594f0 = L"OnePassShadowParameters";
  DAT_14ca5951a = FUN_140850cc5();
  _DAT_14ca594f8 = FUN_1459d290a();
  _DAT_14ca59508 = &LAB_14682652b;
  _DAT_14ca59510 = 0x1000000e0;
  _DAT_14ca59518 = 0;
  _DAT_14ca59500 = DAT_14ca53140;
  DAT_14ca53140 = &DAT_14ca594f0;
  return;
}



// FUNCTION 145db76d8 FUN_145db76d8 body=121 status=ok
// SIG undefined FUN_145db76d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db76d8(void)

{
  FUN_145db7752();
  _DAT_14ca59520 = L"ShadowDepthTextureSampler";
  DAT_14ca5954a = FUN_140850cc5();
  _DAT_14ca59528 = FUN_140fb78d0();
  _DAT_14ca59538 = &LAB_14682652b;
  _DAT_14ca59540 = 0x1000000fe;
  _DAT_14ca59548 = 0;
  _DAT_14ca59530 = DAT_14ca53140;
  DAT_14ca53140 = &DAT_14ca59520;
  return;
}



// FUNCTION 145db7752 FUN_145db7752 body=121 status=ok
// SIG undefined FUN_145db7752(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db7752(void)

{
  FUN_145db77cc();
  _DAT_14ca59550 = L"LightPosition";
  DAT_14ca5957a = FUN_140850cc5();
  _DAT_14ca59558 = FUN_140ec6960();
  _DAT_14ca59568 = &LAB_14682652b;
  _DAT_14ca59570 = 0x100000102;
  _DAT_14ca59578 = 0;
  _DAT_14ca59560 = DAT_14ca53140;
  DAT_14ca53140 = &DAT_14ca59550;
  return;
}



// FUNCTION 145db77cc FUN_145db77cc body=121 status=ok
// SIG undefined FUN_145db77cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db77cc(void)

{
  FUN_145db7846();
  _DAT_14ca59580 = L"ShadowFadeFraction";
  DAT_14ca595aa = FUN_140850cc5();
  _DAT_14ca59588 = FUN_140ec6960();
  _DAT_14ca59598 = &LAB_14682652b;
  _DAT_14ca595a0 = &DAT_100000108;
  _DAT_14ca595a8 = 0;
  _DAT_14ca59590 = DAT_14ca53140;
  DAT_14ca53140 = &DAT_14ca59580;
  return;
}



// FUNCTION 145db7846 FUN_145db7846 body=121 status=ok
// SIG undefined FUN_145db7846(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db7846(void)

{
  FUN_145db78c0();
  _DAT_14ca595b0 = L"ShadowSharpen";
  DAT_14ca595da = FUN_140850cc5();
  _DAT_14ca595b8 = FUN_140ec6960();
  _DAT_14ca595c8 = &LAB_14682652b;
  _DAT_14ca595d0 = 0x10000010e;
  _DAT_14ca595d8 = 0;
  _DAT_14ca595c0 = DAT_14ca53140;
  DAT_14ca53140 = &DAT_14ca595b0;
  return;
}



// FUNCTION 145db78c0 FUN_145db78c0 body=121 status=ok
// SIG undefined FUN_145db78c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db78c0(void)

{
  FUN_145db793a();
  _DAT_14ca595e0 = L"PointLightDepthBias";
  DAT_14ca5960a = FUN_140850cc5();
  _DAT_14ca595e8 = FUN_140ec6960();
  _DAT_14ca595f8 = &LAB_14682652b;
  _DAT_14ca59600 = 0x100000114;
  _DAT_14ca59608 = 0;
  _DAT_14ca595f0 = DAT_14ca53140;
  DAT_14ca53140 = &DAT_14ca595e0;
  return;
}



// FUNCTION 145db793a FUN_145db793a body=121 status=ok
// SIG undefined FUN_145db793a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db793a(void)

{
  FUN_145db7a30();
  _DAT_14ca59610 = L"PointLightProjParameters";
  DAT_14ca5963a = FUN_140850cc5();
  _DAT_14ca59618 = FUN_140ec6960();
  _DAT_14ca59628 = &LAB_14682652b;
  _DAT_14ca59630 = 0x10000011a;
  _DAT_14ca59638 = 0;
  _DAT_14ca59620 = DAT_14ca53140;
  DAT_14ca53140 = &DAT_14ca59610;
  return;
}



// FUNCTION 145db79b4 FUN_145db79b4 body=123 status=ok
// SIG undefined FUN_145db79b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db79b4(void)

{
  _DAT_14ca596a0 = L"BASE";
  DAT_14ca596ca = 4;
  _DAT_14ca596a8 = FUN_140b35ae4();
  _DAT_14ca596b0 = DAT_14ca53140;
  _DAT_14ca596b8 = &LAB_14682652b;
  DAT_14ca53140 = &DAT_14ca596a0;
  DAT_14ca53195 = DAT_14ca53195 + '\x01';
  _DAT_14ca596c0 = 0x100000000;
  if (*(char *)(_DAT_14ca596a8 + 100) != '\0') {
    DAT_14ca53196 = DAT_14ca53196 + '\x01';
  }
  return;
}



// FUNCTION 145db7a30 FUN_145db7a30 body=216 status=ok
// SIG undefined FUN_145db7a30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db7a30(void)

{
  _DAT_14ca59670 = L"SubstrateGlobalParameters";
  DAT_14ca5969a = FUN_140850cc5();
  _DAT_14ca59678 = FUN_14106a12a();
  _DAT_14ca59688 = &LAB_14682652b;
  _DAT_14ca59690 = 0x100000122;
  _DAT_14ca59698 = 0;
  _DAT_14ca59680 = DAT_14ca53140;
  DAT_14ca53140 = &DAT_14ca59670;
  _DAT_14ca59640 = L"HairStrandsParameters";
  DAT_14ca5966a = FUN_140850cc5();
  _DAT_14ca59648 = FUN_14106a12a();
  _DAT_14ca59658 = &LAB_14682652b;
  _DAT_14ca59660 = 0x100000120;
  _DAT_14ca59668 = 0;
  _DAT_14ca59650 = DAT_14ca53140;
  DAT_14ca53140 = &DAT_14ca59640;
  return;
}



// FUNCTION 145db7b08 FUN_145db7b08 body=284 status=ok
// SIG undefined FUN_145db7b08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145db7b08(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca53368) {
    FUN_144b3d300(&DAT_14ca53368);
    if (DAT_14ca53368 == -1) {
      FUN_145db7c24();
      FUN_140db5666(&DAT_14ca532c0,0,&DAT_14ca53258,L"FOnePassPointShadowProjectionPS4falsetrue",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,
                    1,FUN_1472f3134,FUN_1472f310c,&LAB_1472f3108,&LAB_1472f3104,&LAB_14712ac0c,
                    &LAB_14712ac08,0x128,0);
      _DAT_14ca532c0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049ca6);
      _Init_thread_footer(&DAT_14ca53368);
    }
  }
  return &DAT_14ca532c0;
}



// FUNCTION 145db7c24 FUN_145db7c24 body=210 status=ok
// SIG undefined FUN_145db7c24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db7c24(void)

{
  if ((DAT_14ca532bf & 2) == 0) {
    DAT_14ca532bf = DAT_14ca532bf | 2;
    _DAT_14ca53260 = L"FOnePassPointShadowProjectionPS4falsetrue";
    _DAT_14ca53278 = FUN_146826540;
    _DAT_14ca53280 = FUN_146825d77;
    _DAT_14ca53288 = FUN_146825fd6;
    _DAT_14ca53290 = FUN_1407e02ea;
    _DAT_14ca53298 = FUN_146826273;
    _DAT_14ca53270 = FUN_1472f30d4;
    _DAT_14ca532b0 = 0xffffffff00000128;
    _DAT_14ca532b8 = 8;
    DAT_14ca532bc = 0;
    _DAT_14ca532a0 = &LAB_1472f3100;
    FUN_145db7cf6();
    FUN_145db804c();
    FUN_1407e00cc(&DAT_14ca53258);
    return;
  }
  return;
}



// FUNCTION 145db7cf6 FUN_145db7cf6 body=121 status=ok
// SIG undefined FUN_145db7cf6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db7cf6(void)

{
  FUN_145db7d70();
  _DAT_14ca596d0 = L"OnePassShadowParameters";
  DAT_14ca596fa = FUN_140850cc5();
  _DAT_14ca596d8 = FUN_1459d290a();
  _DAT_14ca596e8 = &LAB_14682652b;
  _DAT_14ca596f0 = 0x1000000e0;
  _DAT_14ca596f8 = 0;
  _DAT_14ca596e0 = DAT_14ca53268;
  DAT_14ca53268 = &DAT_14ca596d0;
  return;
}



// FUNCTION 145db7d70 FUN_145db7d70 body=121 status=ok
// SIG undefined FUN_145db7d70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db7d70(void)

{
  FUN_145db7dea();
  _DAT_14ca59700 = L"ShadowDepthTextureSampler";
  DAT_14ca5972a = FUN_140850cc5();
  _DAT_14ca59708 = FUN_140fb78d0();
  _DAT_14ca59718 = &LAB_14682652b;
  _DAT_14ca59720 = 0x1000000fe;
  _DAT_14ca59728 = 0;
  _DAT_14ca59710 = DAT_14ca53268;
  DAT_14ca53268 = &DAT_14ca59700;
  return;
}



// FUNCTION 145db7dea FUN_145db7dea body=121 status=ok
// SIG undefined FUN_145db7dea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db7dea(void)

{
  FUN_145db7e64();
  _DAT_14ca59730 = L"LightPosition";
  DAT_14ca5975a = FUN_140850cc5();
  _DAT_14ca59738 = FUN_140ec6960();
  _DAT_14ca59748 = &LAB_14682652b;
  _DAT_14ca59750 = 0x100000102;
  _DAT_14ca59758 = 0;
  _DAT_14ca59740 = DAT_14ca53268;
  DAT_14ca53268 = &DAT_14ca59730;
  return;
}



// FUNCTION 145db7e64 FUN_145db7e64 body=121 status=ok
// SIG undefined FUN_145db7e64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db7e64(void)

{
  FUN_145db7ede();
  _DAT_14ca59760 = L"ShadowFadeFraction";
  DAT_14ca5978a = FUN_140850cc5();
  _DAT_14ca59768 = FUN_140ec6960();
  _DAT_14ca59778 = &LAB_14682652b;
  _DAT_14ca59780 = &DAT_100000108;
  _DAT_14ca59788 = 0;
  _DAT_14ca59770 = DAT_14ca53268;
  DAT_14ca53268 = &DAT_14ca59760;
  return;
}



// FUNCTION 145db7ede FUN_145db7ede body=121 status=ok
// SIG undefined FUN_145db7ede(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db7ede(void)

{
  FUN_145db7f58();
  _DAT_14ca59790 = L"ShadowSharpen";
  DAT_14ca597ba = FUN_140850cc5();
  _DAT_14ca59798 = FUN_140ec6960();
  _DAT_14ca597a8 = &LAB_14682652b;
  _DAT_14ca597b0 = 0x10000010e;
  _DAT_14ca597b8 = 0;
  _DAT_14ca597a0 = DAT_14ca53268;
  DAT_14ca53268 = &DAT_14ca59790;
  return;
}



// FUNCTION 145db7f58 FUN_145db7f58 body=121 status=ok
// SIG undefined FUN_145db7f58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db7f58(void)

{
  FUN_145db7fd2();
  _DAT_14ca597c0 = L"PointLightDepthBias";
  DAT_14ca597ea = FUN_140850cc5();
  _DAT_14ca597c8 = FUN_140ec6960();
  _DAT_14ca597d8 = &LAB_14682652b;
  _DAT_14ca597e0 = 0x100000114;
  _DAT_14ca597e8 = 0;
  _DAT_14ca597d0 = DAT_14ca53268;
  DAT_14ca53268 = &DAT_14ca597c0;
  return;
}



// FUNCTION 145db7fd2 FUN_145db7fd2 body=121 status=ok
// SIG undefined FUN_145db7fd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db7fd2(void)

{
  FUN_145db80c8();
  _DAT_14ca597f0 = L"PointLightProjParameters";
  DAT_14ca5981a = FUN_140850cc5();
  _DAT_14ca597f8 = FUN_140ec6960();
  _DAT_14ca59808 = &LAB_14682652b;
  _DAT_14ca59810 = 0x10000011a;
  _DAT_14ca59818 = 0;
  _DAT_14ca59800 = DAT_14ca53268;
  DAT_14ca53268 = &DAT_14ca597f0;
  return;
}



// FUNCTION 145db804c FUN_145db804c body=123 status=ok
// SIG undefined FUN_145db804c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db804c(void)

{
  _DAT_14ca59880 = L"BASE";
  DAT_14ca598aa = 4;
  _DAT_14ca59888 = FUN_140b35ae4();
  _DAT_14ca59890 = DAT_14ca53268;
  _DAT_14ca59898 = &LAB_14682652b;
  DAT_14ca53268 = &DAT_14ca59880;
  DAT_14ca532bd = DAT_14ca532bd + '\x01';
  _DAT_14ca598a0 = 0x100000000;
  if (*(char *)(_DAT_14ca59888 + 100) != '\0') {
    DAT_14ca532be = DAT_14ca532be + '\x01';
  }
  return;
}



// FUNCTION 145db80c8 FUN_145db80c8 body=216 status=ok
// SIG undefined FUN_145db80c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db80c8(void)

{
  _DAT_14ca59850 = L"SubstrateGlobalParameters";
  DAT_14ca5987a = FUN_140850cc5();
  _DAT_14ca59858 = FUN_14106a12a();
  _DAT_14ca59868 = &LAB_14682652b;
  _DAT_14ca59870 = 0x100000122;
  _DAT_14ca59878 = 0;
  _DAT_14ca59860 = DAT_14ca53268;
  DAT_14ca53268 = &DAT_14ca59850;
  _DAT_14ca59820 = L"HairStrandsParameters";
  DAT_14ca5984a = FUN_140850cc5();
  _DAT_14ca59828 = FUN_14106a12a();
  _DAT_14ca59838 = &LAB_14682652b;
  _DAT_14ca59840 = 0x100000120;
  _DAT_14ca59848 = 0;
  _DAT_14ca59830 = DAT_14ca53268;
  DAT_14ca53268 = &DAT_14ca59820;
  return;
}



// FUNCTION 145db81a0 FUN_145db81a0 body=284 status=ok
// SIG undefined FUN_145db81a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145db81a0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca53490) {
    FUN_144b3d300(&DAT_14ca53490);
    if (DAT_14ca53490 == -1) {
      FUN_145db82bc();
      FUN_140db5666(&DAT_14ca533e8,0,&DAT_14ca53380,L"FOnePassPointShadowProjectionPS5falsetrue",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,
                    1,FUN_1472f3244,FUN_1472f321c,&LAB_1472f3218,&LAB_1472f3214,&LAB_14712ac0c,
                    &LAB_14712ac08,0x128,0);
      _DAT_14ca533e8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049cb2);
      _Init_thread_footer(&DAT_14ca53490);
    }
  }
  return &DAT_14ca533e8;
}



// FUNCTION 145db82bc FUN_145db82bc body=210 status=ok
// SIG undefined FUN_145db82bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db82bc(void)

{
  if ((DAT_14ca533e7 & 2) == 0) {
    DAT_14ca533e7 = DAT_14ca533e7 | 2;
    _DAT_14ca53388 = L"FOnePassPointShadowProjectionPS5falsetrue";
    _DAT_14ca533a0 = FUN_146826540;
    _DAT_14ca533a8 = FUN_146825d77;
    _DAT_14ca533b0 = FUN_146825fd6;
    _DAT_14ca533b8 = FUN_1407e02ea;
    _DAT_14ca533c0 = FUN_146826273;
    _DAT_14ca53398 = FUN_1472f31e4;
    _DAT_14ca533d8 = 0xffffffff00000128;
    _DAT_14ca533e0 = 8;
    DAT_14ca533e4 = 0;
    _DAT_14ca533c8 = &LAB_1472f3210;
    FUN_145db838e();
    FUN_145db86e4();
    FUN_1407e00cc(&DAT_14ca53380);
    return;
  }
  return;
}



// FUNCTION 145db838e FUN_145db838e body=121 status=ok
// SIG undefined FUN_145db838e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db838e(void)

{
  FUN_145db8408();
  _DAT_14ca598b0 = L"OnePassShadowParameters";
  DAT_14ca598da = FUN_140850cc5();
  _DAT_14ca598b8 = FUN_1459d290a();
  _DAT_14ca598c8 = &LAB_14682652b;
  _DAT_14ca598d0 = 0x1000000e0;
  _DAT_14ca598d8 = 0;
  _DAT_14ca598c0 = DAT_14ca53390;
  DAT_14ca53390 = &DAT_14ca598b0;
  return;
}



// FUNCTION 145db8408 FUN_145db8408 body=121 status=ok
// SIG undefined FUN_145db8408(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db8408(void)

{
  FUN_145db8482();
  _DAT_14ca598e0 = L"ShadowDepthTextureSampler";
  DAT_14ca5990a = FUN_140850cc5();
  _DAT_14ca598e8 = FUN_140fb78d0();
  _DAT_14ca598f8 = &LAB_14682652b;
  _DAT_14ca59900 = 0x1000000fe;
  _DAT_14ca59908 = 0;
  _DAT_14ca598f0 = DAT_14ca53390;
  DAT_14ca53390 = &DAT_14ca598e0;
  return;
}



// FUNCTION 145db8482 FUN_145db8482 body=121 status=ok
// SIG undefined FUN_145db8482(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db8482(void)

{
  FUN_145db84fc();
  _DAT_14ca59910 = L"LightPosition";
  DAT_14ca5993a = FUN_140850cc5();
  _DAT_14ca59918 = FUN_140ec6960();
  _DAT_14ca59928 = &LAB_14682652b;
  _DAT_14ca59930 = 0x100000102;
  _DAT_14ca59938 = 0;
  _DAT_14ca59920 = DAT_14ca53390;
  DAT_14ca53390 = &DAT_14ca59910;
  return;
}



// FUNCTION 145db84fc FUN_145db84fc body=121 status=ok
// SIG undefined FUN_145db84fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db84fc(void)

{
  FUN_145db8576();
  _DAT_14ca59940 = L"ShadowFadeFraction";
  DAT_14ca5996a = FUN_140850cc5();
  _DAT_14ca59948 = FUN_140ec6960();
  _DAT_14ca59958 = &LAB_14682652b;
  _DAT_14ca59960 = &DAT_100000108;
  _DAT_14ca59968 = 0;
  _DAT_14ca59950 = DAT_14ca53390;
  DAT_14ca53390 = &DAT_14ca59940;
  return;
}



// FUNCTION 145db8576 FUN_145db8576 body=121 status=ok
// SIG undefined FUN_145db8576(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db8576(void)

{
  FUN_145db85f0();
  _DAT_14ca59970 = L"ShadowSharpen";
  DAT_14ca5999a = FUN_140850cc5();
  _DAT_14ca59978 = FUN_140ec6960();
  _DAT_14ca59988 = &LAB_14682652b;
  _DAT_14ca59990 = 0x10000010e;
  _DAT_14ca59998 = 0;
  _DAT_14ca59980 = DAT_14ca53390;
  DAT_14ca53390 = &DAT_14ca59970;
  return;
}



// FUNCTION 145db85f0 FUN_145db85f0 body=121 status=ok
// SIG undefined FUN_145db85f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db85f0(void)

{
  FUN_145db866a();
  _DAT_14ca599a0 = L"PointLightDepthBias";
  DAT_14ca599ca = FUN_140850cc5();
  _DAT_14ca599a8 = FUN_140ec6960();
  _DAT_14ca599b8 = &LAB_14682652b;
  _DAT_14ca599c0 = 0x100000114;
  _DAT_14ca599c8 = 0;
  _DAT_14ca599b0 = DAT_14ca53390;
  DAT_14ca53390 = &DAT_14ca599a0;
  return;
}



// FUNCTION 145db866a FUN_145db866a body=121 status=ok
// SIG undefined FUN_145db866a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db866a(void)

{
  FUN_145db8760();
  _DAT_14ca599d0 = L"PointLightProjParameters";
  DAT_14ca599fa = FUN_140850cc5();
  _DAT_14ca599d8 = FUN_140ec6960();
  _DAT_14ca599e8 = &LAB_14682652b;
  _DAT_14ca599f0 = 0x10000011a;
  _DAT_14ca599f8 = 0;
  _DAT_14ca599e0 = DAT_14ca53390;
  DAT_14ca53390 = &DAT_14ca599d0;
  return;
}



// FUNCTION 145db86e4 FUN_145db86e4 body=123 status=ok
// SIG undefined FUN_145db86e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db86e4(void)

{
  _DAT_14ca59a60 = L"BASE";
  DAT_14ca59a8a = 4;
  _DAT_14ca59a68 = FUN_140b35ae4();
  _DAT_14ca59a70 = DAT_14ca53390;
  _DAT_14ca59a78 = &LAB_14682652b;
  DAT_14ca53390 = &DAT_14ca59a60;
  DAT_14ca533e5 = DAT_14ca533e5 + '\x01';
  _DAT_14ca59a80 = 0x100000000;
  if (*(char *)(_DAT_14ca59a68 + 100) != '\0') {
    DAT_14ca533e6 = DAT_14ca533e6 + '\x01';
  }
  return;
}



// FUNCTION 145db8760 FUN_145db8760 body=216 status=ok
// SIG undefined FUN_145db8760(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db8760(void)

{
  _DAT_14ca59a30 = L"SubstrateGlobalParameters";
  DAT_14ca59a5a = FUN_140850cc5();
  _DAT_14ca59a38 = FUN_14106a12a();
  _DAT_14ca59a48 = &LAB_14682652b;
  _DAT_14ca59a50 = 0x100000122;
  _DAT_14ca59a58 = 0;
  _DAT_14ca59a40 = DAT_14ca53390;
  DAT_14ca53390 = &DAT_14ca59a30;
  _DAT_14ca59a00 = L"HairStrandsParameters";
  DAT_14ca59a2a = FUN_140850cc5();
  _DAT_14ca59a08 = FUN_14106a12a();
  _DAT_14ca59a18 = &LAB_14682652b;
  _DAT_14ca59a20 = 0x100000120;
  _DAT_14ca59a28 = 0;
  _DAT_14ca59a10 = DAT_14ca53390;
  DAT_14ca53390 = &DAT_14ca59a00;
  return;
}



// FUNCTION 145db8838 FUN_145db8838 body=284 status=ok
// SIG undefined FUN_145db8838(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145db8838(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca535b8) {
    FUN_144b3d300(&DAT_14ca535b8);
    if (DAT_14ca535b8 == -1) {
      FUN_145db8954();
      FUN_140db5666(&DAT_14ca53510,0,&DAT_14ca534a8,L"FOnePassPointShadowProjectionPS1falsefalse",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,
                    1,FUN_1472f3354,FUN_1472f332c,&LAB_1472f3328,&LAB_1472f3324,&LAB_14712ac0c,
                    &LAB_14712ac08,0x128,0);
      _DAT_14ca53510 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049cbe);
      _Init_thread_footer(&DAT_14ca535b8);
    }
  }
  return &DAT_14ca53510;
}



// FUNCTION 145db8954 FUN_145db8954 body=210 status=ok
// SIG undefined FUN_145db8954(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db8954(void)

{
  if ((DAT_14ca5350f & 2) == 0) {
    DAT_14ca5350f = DAT_14ca5350f | 2;
    _DAT_14ca534b0 = L"FOnePassPointShadowProjectionPS1falsefalse";
    _DAT_14ca534c8 = FUN_146826540;
    _DAT_14ca534d0 = FUN_146825d77;
    _DAT_14ca534d8 = FUN_146825fd6;
    _DAT_14ca534e0 = FUN_1407e02ea;
    _DAT_14ca534e8 = FUN_146826273;
    _DAT_14ca534c0 = FUN_1472f32f4;
    _DAT_14ca53500 = 0xffffffff00000128;
    _DAT_14ca53508 = 8;
    DAT_14ca5350c = 0;
    _DAT_14ca534f0 = &LAB_1472f3320;
    FUN_145db8a26();
    FUN_145db8d7c();
    FUN_1407e00cc(&DAT_14ca534a8);
    return;
  }
  return;
}



// FUNCTION 145db8a26 FUN_145db8a26 body=121 status=ok
// SIG undefined FUN_145db8a26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db8a26(void)

{
  FUN_145db8aa0();
  _DAT_14ca59a90 = L"OnePassShadowParameters";
  DAT_14ca59aba = FUN_140850cc5();
  _DAT_14ca59a98 = FUN_1459d290a();
  _DAT_14ca59aa8 = &LAB_14682652b;
  _DAT_14ca59ab0 = 0x1000000e0;
  _DAT_14ca59ab8 = 0;
  _DAT_14ca59aa0 = DAT_14ca534b8;
  DAT_14ca534b8 = &DAT_14ca59a90;
  return;
}



// FUNCTION 145db8aa0 FUN_145db8aa0 body=121 status=ok
// SIG undefined FUN_145db8aa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db8aa0(void)

{
  FUN_145db8b1a();
  _DAT_14ca59ac0 = L"ShadowDepthTextureSampler";
  DAT_14ca59aea = FUN_140850cc5();
  _DAT_14ca59ac8 = FUN_140fb78d0();
  _DAT_14ca59ad8 = &LAB_14682652b;
  _DAT_14ca59ae0 = 0x1000000fe;
  _DAT_14ca59ae8 = 0;
  _DAT_14ca59ad0 = DAT_14ca534b8;
  DAT_14ca534b8 = &DAT_14ca59ac0;
  return;
}



// FUNCTION 145db8b1a FUN_145db8b1a body=121 status=ok
// SIG undefined FUN_145db8b1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db8b1a(void)

{
  FUN_145db8b94();
  _DAT_14ca59af0 = L"LightPosition";
  DAT_14ca59b1a = FUN_140850cc5();
  _DAT_14ca59af8 = FUN_140ec6960();
  _DAT_14ca59b08 = &LAB_14682652b;
  _DAT_14ca59b10 = 0x100000102;
  _DAT_14ca59b18 = 0;
  _DAT_14ca59b00 = DAT_14ca534b8;
  DAT_14ca534b8 = &DAT_14ca59af0;
  return;
}



// FUNCTION 145db8b94 FUN_145db8b94 body=121 status=ok
// SIG undefined FUN_145db8b94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db8b94(void)

{
  FUN_145db8c0e();
  _DAT_14ca59b20 = L"ShadowFadeFraction";
  DAT_14ca59b4a = FUN_140850cc5();
  _DAT_14ca59b28 = FUN_140ec6960();
  _DAT_14ca59b38 = &LAB_14682652b;
  _DAT_14ca59b40 = &DAT_100000108;
  _DAT_14ca59b48 = 0;
  _DAT_14ca59b30 = DAT_14ca534b8;
  DAT_14ca534b8 = &DAT_14ca59b20;
  return;
}



// FUNCTION 145db8c0e FUN_145db8c0e body=121 status=ok
// SIG undefined FUN_145db8c0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db8c0e(void)

{
  FUN_145db8c88();
  _DAT_14ca59b50 = L"ShadowSharpen";
  DAT_14ca59b7a = FUN_140850cc5();
  _DAT_14ca59b58 = FUN_140ec6960();
  _DAT_14ca59b68 = &LAB_14682652b;
  _DAT_14ca59b70 = 0x10000010e;
  _DAT_14ca59b78 = 0;
  _DAT_14ca59b60 = DAT_14ca534b8;
  DAT_14ca534b8 = &DAT_14ca59b50;
  return;
}



// FUNCTION 145db8c88 FUN_145db8c88 body=121 status=ok
// SIG undefined FUN_145db8c88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db8c88(void)

{
  FUN_145db8d02();
  _DAT_14ca59b80 = L"PointLightDepthBias";
  DAT_14ca59baa = FUN_140850cc5();
  _DAT_14ca59b88 = FUN_140ec6960();
  _DAT_14ca59b98 = &LAB_14682652b;
  _DAT_14ca59ba0 = 0x100000114;
  _DAT_14ca59ba8 = 0;
  _DAT_14ca59b90 = DAT_14ca534b8;
  DAT_14ca534b8 = &DAT_14ca59b80;
  return;
}



// FUNCTION 145db8d02 FUN_145db8d02 body=121 status=ok
// SIG undefined FUN_145db8d02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db8d02(void)

{
  FUN_145db8df8();
  _DAT_14ca59bb0 = L"PointLightProjParameters";
  DAT_14ca59bda = FUN_140850cc5();
  _DAT_14ca59bb8 = FUN_140ec6960();
  _DAT_14ca59bc8 = &LAB_14682652b;
  _DAT_14ca59bd0 = 0x10000011a;
  _DAT_14ca59bd8 = 0;
  _DAT_14ca59bc0 = DAT_14ca534b8;
  DAT_14ca534b8 = &DAT_14ca59bb0;
  return;
}



// FUNCTION 145db8d7c FUN_145db8d7c body=123 status=ok
// SIG undefined FUN_145db8d7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db8d7c(void)

{
  _DAT_14ca59c40 = L"BASE";
  DAT_14ca59c6a = 4;
  _DAT_14ca59c48 = FUN_140b35ae4();
  _DAT_14ca59c50 = DAT_14ca534b8;
  _DAT_14ca59c58 = &LAB_14682652b;
  DAT_14ca534b8 = &DAT_14ca59c40;
  DAT_14ca5350d = DAT_14ca5350d + '\x01';
  _DAT_14ca59c60 = 0x100000000;
  if (*(char *)(_DAT_14ca59c48 + 100) != '\0') {
    DAT_14ca5350e = DAT_14ca5350e + '\x01';
  }
  return;
}



// FUNCTION 145db8df8 FUN_145db8df8 body=216 status=ok
// SIG undefined FUN_145db8df8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db8df8(void)

{
  _DAT_14ca59c10 = L"SubstrateGlobalParameters";
  DAT_14ca59c3a = FUN_140850cc5();
  _DAT_14ca59c18 = FUN_14106a12a();
  _DAT_14ca59c28 = &LAB_14682652b;
  _DAT_14ca59c30 = 0x100000122;
  _DAT_14ca59c38 = 0;
  _DAT_14ca59c20 = DAT_14ca534b8;
  DAT_14ca534b8 = &DAT_14ca59c10;
  _DAT_14ca59be0 = L"HairStrandsParameters";
  DAT_14ca59c0a = FUN_140850cc5();
  _DAT_14ca59be8 = FUN_14106a12a();
  _DAT_14ca59bf8 = &LAB_14682652b;
  _DAT_14ca59c00 = 0x100000120;
  _DAT_14ca59c08 = 0;
  _DAT_14ca59bf0 = DAT_14ca534b8;
  DAT_14ca534b8 = &DAT_14ca59be0;
  return;
}



// FUNCTION 145db8ed0 FUN_145db8ed0 body=284 status=ok
// SIG undefined FUN_145db8ed0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145db8ed0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca536e0) {
    FUN_144b3d300(&DAT_14ca536e0);
    if (DAT_14ca536e0 == -1) {
      FUN_145db8fec();
      FUN_140db5666(&DAT_14ca53638,0,&DAT_14ca535d0,L"FOnePassPointShadowProjectionPS2falsefalse",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,
                    1,FUN_1472f3464,FUN_1472f343c,&LAB_1472f3438,&LAB_1472f3434,&LAB_14712ac0c,
                    &LAB_14712ac08,0x128,0);
      _DAT_14ca53638 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049cca);
      _Init_thread_footer(&DAT_14ca536e0);
    }
  }
  return &DAT_14ca53638;
}



// FUNCTION 145db8fec FUN_145db8fec body=210 status=ok
// SIG undefined FUN_145db8fec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db8fec(void)

{
  if ((DAT_14ca53637 & 2) == 0) {
    DAT_14ca53637 = DAT_14ca53637 | 2;
    _DAT_14ca535d8 = L"FOnePassPointShadowProjectionPS2falsefalse";
    _DAT_14ca535f0 = FUN_146826540;
    _DAT_14ca535f8 = FUN_146825d77;
    _DAT_14ca53600 = FUN_146825fd6;
    _DAT_14ca53608 = FUN_1407e02ea;
    _DAT_14ca53610 = FUN_146826273;
    _DAT_14ca535e8 = FUN_1472f3404;
    _DAT_14ca53628 = 0xffffffff00000128;
    _DAT_14ca53630 = 8;
    DAT_14ca53634 = 0;
    _DAT_14ca53618 = &LAB_1472f3430;
    FUN_145db90be();
    FUN_145db9414();
    FUN_1407e00cc(&DAT_14ca535d0);
    return;
  }
  return;
}



// FUNCTION 145db90be FUN_145db90be body=121 status=ok
// SIG undefined FUN_145db90be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db90be(void)

{
  FUN_145db9138();
  _DAT_14ca59c70 = L"OnePassShadowParameters";
  DAT_14ca59c9a = FUN_140850cc5();
  _DAT_14ca59c78 = FUN_1459d290a();
  _DAT_14ca59c88 = &LAB_14682652b;
  _DAT_14ca59c90 = 0x1000000e0;
  _DAT_14ca59c98 = 0;
  _DAT_14ca59c80 = DAT_14ca535e0;
  DAT_14ca535e0 = &DAT_14ca59c70;
  return;
}



// FUNCTION 145db9138 FUN_145db9138 body=121 status=ok
// SIG undefined FUN_145db9138(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db9138(void)

{
  FUN_145db91b2();
  _DAT_14ca59ca0 = L"ShadowDepthTextureSampler";
  DAT_14ca59cca = FUN_140850cc5();
  _DAT_14ca59ca8 = FUN_140fb78d0();
  _DAT_14ca59cb8 = &LAB_14682652b;
  _DAT_14ca59cc0 = 0x1000000fe;
  _DAT_14ca59cc8 = 0;
  _DAT_14ca59cb0 = DAT_14ca535e0;
  DAT_14ca535e0 = &DAT_14ca59ca0;
  return;
}



// FUNCTION 145db91b2 FUN_145db91b2 body=121 status=ok
// SIG undefined FUN_145db91b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db91b2(void)

{
  FUN_145db922c();
  _DAT_14ca59cd0 = L"LightPosition";
  DAT_14ca59cfa = FUN_140850cc5();
  _DAT_14ca59cd8 = FUN_140ec6960();
  _DAT_14ca59ce8 = &LAB_14682652b;
  _DAT_14ca59cf0 = 0x100000102;
  _DAT_14ca59cf8 = 0;
  _DAT_14ca59ce0 = DAT_14ca535e0;
  DAT_14ca535e0 = &DAT_14ca59cd0;
  return;
}



// FUNCTION 145db922c FUN_145db922c body=121 status=ok
// SIG undefined FUN_145db922c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db922c(void)

{
  FUN_145db92a6();
  _DAT_14ca59d00 = L"ShadowFadeFraction";
  DAT_14ca59d2a = FUN_140850cc5();
  _DAT_14ca59d08 = FUN_140ec6960();
  _DAT_14ca59d18 = &LAB_14682652b;
  _DAT_14ca59d20 = &DAT_100000108;
  _DAT_14ca59d28 = 0;
  _DAT_14ca59d10 = DAT_14ca535e0;
  DAT_14ca535e0 = &DAT_14ca59d00;
  return;
}



// FUNCTION 145db92a6 FUN_145db92a6 body=121 status=ok
// SIG undefined FUN_145db92a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db92a6(void)

{
  FUN_145db9320();
  _DAT_14ca59d30 = L"ShadowSharpen";
  DAT_14ca59d5a = FUN_140850cc5();
  _DAT_14ca59d38 = FUN_140ec6960();
  _DAT_14ca59d48 = &LAB_14682652b;
  _DAT_14ca59d50 = 0x10000010e;
  _DAT_14ca59d58 = 0;
  _DAT_14ca59d40 = DAT_14ca535e0;
  DAT_14ca535e0 = &DAT_14ca59d30;
  return;
}



// FUNCTION 145db9320 FUN_145db9320 body=121 status=ok
// SIG undefined FUN_145db9320(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db9320(void)

{
  FUN_145db939a();
  _DAT_14ca59d60 = L"PointLightDepthBias";
  DAT_14ca59d8a = FUN_140850cc5();
  _DAT_14ca59d68 = FUN_140ec6960();
  _DAT_14ca59d78 = &LAB_14682652b;
  _DAT_14ca59d80 = 0x100000114;
  _DAT_14ca59d88 = 0;
  _DAT_14ca59d70 = DAT_14ca535e0;
  DAT_14ca535e0 = &DAT_14ca59d60;
  return;
}



// FUNCTION 145db939a FUN_145db939a body=121 status=ok
// SIG undefined FUN_145db939a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db939a(void)

{
  FUN_145db9490();
  _DAT_14ca59d90 = L"PointLightProjParameters";
  DAT_14ca59dba = FUN_140850cc5();
  _DAT_14ca59d98 = FUN_140ec6960();
  _DAT_14ca59da8 = &LAB_14682652b;
  _DAT_14ca59db0 = 0x10000011a;
  _DAT_14ca59db8 = 0;
  _DAT_14ca59da0 = DAT_14ca535e0;
  DAT_14ca535e0 = &DAT_14ca59d90;
  return;
}



// FUNCTION 145db9414 FUN_145db9414 body=123 status=ok
// SIG undefined FUN_145db9414(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db9414(void)

{
  _DAT_14ca59e20 = L"BASE";
  DAT_14ca59e4a = 4;
  _DAT_14ca59e28 = FUN_140b35ae4();
  _DAT_14ca59e30 = DAT_14ca535e0;
  _DAT_14ca59e38 = &LAB_14682652b;
  DAT_14ca535e0 = &DAT_14ca59e20;
  DAT_14ca53635 = DAT_14ca53635 + '\x01';
  _DAT_14ca59e40 = 0x100000000;
  if (*(char *)(_DAT_14ca59e28 + 100) != '\0') {
    DAT_14ca53636 = DAT_14ca53636 + '\x01';
  }
  return;
}



// FUNCTION 145db9490 FUN_145db9490 body=216 status=ok
// SIG undefined FUN_145db9490(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db9490(void)

{
  _DAT_14ca59df0 = L"SubstrateGlobalParameters";
  DAT_14ca59e1a = FUN_140850cc5();
  _DAT_14ca59df8 = FUN_14106a12a();
  _DAT_14ca59e08 = &LAB_14682652b;
  _DAT_14ca59e10 = 0x100000122;
  _DAT_14ca59e18 = 0;
  _DAT_14ca59e00 = DAT_14ca535e0;
  DAT_14ca535e0 = &DAT_14ca59df0;
  _DAT_14ca59dc0 = L"HairStrandsParameters";
  DAT_14ca59dea = FUN_140850cc5();
  _DAT_14ca59dc8 = FUN_14106a12a();
  _DAT_14ca59dd8 = &LAB_14682652b;
  _DAT_14ca59de0 = 0x100000120;
  _DAT_14ca59de8 = 0;
  _DAT_14ca59dd0 = DAT_14ca535e0;
  DAT_14ca535e0 = &DAT_14ca59dc0;
  return;
}



// FUNCTION 145db9568 FUN_145db9568 body=284 status=ok
// SIG undefined FUN_145db9568(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145db9568(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca53808) {
    FUN_144b3d300(&DAT_14ca53808);
    if (DAT_14ca53808 == -1) {
      FUN_145db9684();
      FUN_140db5666(&DAT_14ca53760,0,&DAT_14ca536f8,L"FOnePassPointShadowProjectionPS3falsefalse",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,
                    1,FUN_1472f3574,FUN_1472f354c,&LAB_1472f3548,&LAB_1472f3544,&LAB_14712ac0c,
                    &LAB_14712ac08,0x128,0);
      _DAT_14ca53760 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049cd6);
      _Init_thread_footer(&DAT_14ca53808);
    }
  }
  return &DAT_14ca53760;
}



// FUNCTION 145db9684 FUN_145db9684 body=210 status=ok
// SIG undefined FUN_145db9684(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db9684(void)

{
  if ((DAT_14ca5375f & 2) == 0) {
    DAT_14ca5375f = DAT_14ca5375f | 2;
    _DAT_14ca53700 = L"FOnePassPointShadowProjectionPS3falsefalse";
    _DAT_14ca53718 = FUN_146826540;
    _DAT_14ca53720 = FUN_146825d77;
    _DAT_14ca53728 = FUN_146825fd6;
    _DAT_14ca53730 = FUN_1407e02ea;
    _DAT_14ca53738 = FUN_146826273;
    _DAT_14ca53710 = FUN_1472f3514;
    _DAT_14ca53750 = 0xffffffff00000128;
    _DAT_14ca53758 = 8;
    DAT_14ca5375c = 0;
    _DAT_14ca53740 = &LAB_1472f3540;
    FUN_145db9756();
    FUN_145db9aac();
    FUN_1407e00cc(&DAT_14ca536f8);
    return;
  }
  return;
}



// FUNCTION 145db9756 FUN_145db9756 body=121 status=ok
// SIG undefined FUN_145db9756(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db9756(void)

{
  FUN_145db97d0();
  _DAT_14ca59e50 = L"OnePassShadowParameters";
  DAT_14ca59e7a = FUN_140850cc5();
  _DAT_14ca59e58 = FUN_1459d290a();
  _DAT_14ca59e68 = &LAB_14682652b;
  _DAT_14ca59e70 = 0x1000000e0;
  _DAT_14ca59e78 = 0;
  _DAT_14ca59e60 = DAT_14ca53708;
  DAT_14ca53708 = &DAT_14ca59e50;
  return;
}



// FUNCTION 145db97d0 FUN_145db97d0 body=121 status=ok
// SIG undefined FUN_145db97d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db97d0(void)

{
  FUN_145db984a();
  _DAT_14ca59e80 = L"ShadowDepthTextureSampler";
  DAT_14ca59eaa = FUN_140850cc5();
  _DAT_14ca59e88 = FUN_140fb78d0();
  _DAT_14ca59e98 = &LAB_14682652b;
  _DAT_14ca59ea0 = 0x1000000fe;
  _DAT_14ca59ea8 = 0;
  _DAT_14ca59e90 = DAT_14ca53708;
  DAT_14ca53708 = &DAT_14ca59e80;
  return;
}



// FUNCTION 145db984a FUN_145db984a body=121 status=ok
// SIG undefined FUN_145db984a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db984a(void)

{
  FUN_145db98c4();
  _DAT_14ca59eb0 = L"LightPosition";
  DAT_14ca59eda = FUN_140850cc5();
  _DAT_14ca59eb8 = FUN_140ec6960();
  _DAT_14ca59ec8 = &LAB_14682652b;
  _DAT_14ca59ed0 = 0x100000102;
  _DAT_14ca59ed8 = 0;
  _DAT_14ca59ec0 = DAT_14ca53708;
  DAT_14ca53708 = &DAT_14ca59eb0;
  return;
}



// FUNCTION 145db98c4 FUN_145db98c4 body=121 status=ok
// SIG undefined FUN_145db98c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db98c4(void)

{
  FUN_145db993e();
  _DAT_14ca59ee0 = L"ShadowFadeFraction";
  DAT_14ca59f0a = FUN_140850cc5();
  _DAT_14ca59ee8 = FUN_140ec6960();
  _DAT_14ca59ef8 = &LAB_14682652b;
  _DAT_14ca59f00 = &DAT_100000108;
  _DAT_14ca59f08 = 0;
  _DAT_14ca59ef0 = DAT_14ca53708;
  DAT_14ca53708 = &DAT_14ca59ee0;
  return;
}



// FUNCTION 145db993e FUN_145db993e body=121 status=ok
// SIG undefined FUN_145db993e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db993e(void)

{
  FUN_145db99b8();
  _DAT_14ca59f10 = L"ShadowSharpen";
  DAT_14ca59f3a = FUN_140850cc5();
  _DAT_14ca59f18 = FUN_140ec6960();
  _DAT_14ca59f28 = &LAB_14682652b;
  _DAT_14ca59f30 = 0x10000010e;
  _DAT_14ca59f38 = 0;
  _DAT_14ca59f20 = DAT_14ca53708;
  DAT_14ca53708 = &DAT_14ca59f10;
  return;
}



// FUNCTION 145db99b8 FUN_145db99b8 body=121 status=ok
// SIG undefined FUN_145db99b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db99b8(void)

{
  FUN_145db9a32();
  _DAT_14ca59f40 = L"PointLightDepthBias";
  DAT_14ca59f6a = FUN_140850cc5();
  _DAT_14ca59f48 = FUN_140ec6960();
  _DAT_14ca59f58 = &LAB_14682652b;
  _DAT_14ca59f60 = 0x100000114;
  _DAT_14ca59f68 = 0;
  _DAT_14ca59f50 = DAT_14ca53708;
  DAT_14ca53708 = &DAT_14ca59f40;
  return;
}



// FUNCTION 145db9a32 FUN_145db9a32 body=121 status=ok
// SIG undefined FUN_145db9a32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db9a32(void)

{
  FUN_145db9b28();
  _DAT_14ca59f70 = L"PointLightProjParameters";
  DAT_14ca59f9a = FUN_140850cc5();
  _DAT_14ca59f78 = FUN_140ec6960();
  _DAT_14ca59f88 = &LAB_14682652b;
  _DAT_14ca59f90 = 0x10000011a;
  _DAT_14ca59f98 = 0;
  _DAT_14ca59f80 = DAT_14ca53708;
  DAT_14ca53708 = &DAT_14ca59f70;
  return;
}



// FUNCTION 145db9aac FUN_145db9aac body=123 status=ok
// SIG undefined FUN_145db9aac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db9aac(void)

{
  _DAT_14ca5a000 = L"BASE";
  DAT_14ca5a02a = 4;
  _DAT_14ca5a008 = FUN_140b35ae4();
  _DAT_14ca5a010 = DAT_14ca53708;
  _DAT_14ca5a018 = &LAB_14682652b;
  DAT_14ca53708 = &DAT_14ca5a000;
  DAT_14ca5375d = DAT_14ca5375d + '\x01';
  _DAT_14ca5a020 = 0x100000000;
  if (*(char *)(_DAT_14ca5a008 + 100) != '\0') {
    DAT_14ca5375e = DAT_14ca5375e + '\x01';
  }
  return;
}



// FUNCTION 145db9b28 FUN_145db9b28 body=216 status=ok
// SIG undefined FUN_145db9b28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db9b28(void)

{
  _DAT_14ca59fd0 = L"SubstrateGlobalParameters";
  DAT_14ca59ffa = FUN_140850cc5();
  _DAT_14ca59fd8 = FUN_14106a12a();
  _DAT_14ca59fe8 = &LAB_14682652b;
  _DAT_14ca59ff0 = 0x100000122;
  _DAT_14ca59ff8 = 0;
  _DAT_14ca59fe0 = DAT_14ca53708;
  DAT_14ca53708 = &DAT_14ca59fd0;
  _DAT_14ca59fa0 = L"HairStrandsParameters";
  DAT_14ca59fca = FUN_140850cc5();
  _DAT_14ca59fa8 = FUN_14106a12a();
  _DAT_14ca59fb8 = &LAB_14682652b;
  _DAT_14ca59fc0 = 0x100000120;
  _DAT_14ca59fc8 = 0;
  _DAT_14ca59fb0 = DAT_14ca53708;
  DAT_14ca53708 = &DAT_14ca59fa0;
  return;
}



// FUNCTION 145db9c00 FUN_145db9c00 body=284 status=ok
// SIG undefined FUN_145db9c00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145db9c00(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca53930) {
    FUN_144b3d300(&DAT_14ca53930);
    if (DAT_14ca53930 == -1) {
      FUN_145db9d1c();
      FUN_140db5666(&DAT_14ca53888,0,&DAT_14ca53820,L"FOnePassPointShadowProjectionPS4falsefalse",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,
                    1,FUN_1472f3684,FUN_1472f365c,&LAB_1472f3658,&LAB_1472f3654,&LAB_14712ac0c,
                    &LAB_14712ac08,0x128,0);
      _DAT_14ca53888 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049ce2);
      _Init_thread_footer(&DAT_14ca53930);
    }
  }
  return &DAT_14ca53888;
}



// FUNCTION 145db9d1c FUN_145db9d1c body=210 status=ok
// SIG undefined FUN_145db9d1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db9d1c(void)

{
  if ((DAT_14ca53887 & 2) == 0) {
    DAT_14ca53887 = DAT_14ca53887 | 2;
    _DAT_14ca53828 = L"FOnePassPointShadowProjectionPS4falsefalse";
    _DAT_14ca53840 = FUN_146826540;
    _DAT_14ca53848 = FUN_146825d77;
    _DAT_14ca53850 = FUN_146825fd6;
    _DAT_14ca53858 = FUN_1407e02ea;
    _DAT_14ca53860 = FUN_146826273;
    _DAT_14ca53838 = FUN_1472f3624;
    _DAT_14ca53878 = 0xffffffff00000128;
    _DAT_14ca53880 = 8;
    DAT_14ca53884 = 0;
    _DAT_14ca53868 = &LAB_1472f3650;
    FUN_145db9dee();
    FUN_145dba144();
    FUN_1407e00cc(&DAT_14ca53820);
    return;
  }
  return;
}



// FUNCTION 145db9dee FUN_145db9dee body=121 status=ok
// SIG undefined FUN_145db9dee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db9dee(void)

{
  FUN_145db9e68();
  _DAT_14ca5a030 = L"OnePassShadowParameters";
  DAT_14ca5a05a = FUN_140850cc5();
  _DAT_14ca5a038 = FUN_1459d290a();
  _DAT_14ca5a048 = &LAB_14682652b;
  _DAT_14ca5a050 = 0x1000000e0;
  _DAT_14ca5a058 = 0;
  _DAT_14ca5a040 = DAT_14ca53830;
  DAT_14ca53830 = &DAT_14ca5a030;
  return;
}



// FUNCTION 145db9e68 FUN_145db9e68 body=121 status=ok
// SIG undefined FUN_145db9e68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db9e68(void)

{
  FUN_145db9ee2();
  _DAT_14ca5a060 = L"ShadowDepthTextureSampler";
  DAT_14ca5a08a = FUN_140850cc5();
  _DAT_14ca5a068 = FUN_140fb78d0();
  _DAT_14ca5a078 = &LAB_14682652b;
  _DAT_14ca5a080 = 0x1000000fe;
  _DAT_14ca5a088 = 0;
  _DAT_14ca5a070 = DAT_14ca53830;
  DAT_14ca53830 = &DAT_14ca5a060;
  return;
}



// FUNCTION 145db9ee2 FUN_145db9ee2 body=121 status=ok
// SIG undefined FUN_145db9ee2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db9ee2(void)

{
  FUN_145db9f5c();
  _DAT_14ca5a090 = L"LightPosition";
  DAT_14ca5a0ba = FUN_140850cc5();
  _DAT_14ca5a098 = FUN_140ec6960();
  _DAT_14ca5a0a8 = &LAB_14682652b;
  _DAT_14ca5a0b0 = 0x100000102;
  _DAT_14ca5a0b8 = 0;
  _DAT_14ca5a0a0 = DAT_14ca53830;
  DAT_14ca53830 = &DAT_14ca5a090;
  return;
}



// FUNCTION 145db9f5c FUN_145db9f5c body=121 status=ok
// SIG undefined FUN_145db9f5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db9f5c(void)

{
  FUN_145db9fd6();
  _DAT_14ca5a0c0 = L"ShadowFadeFraction";
  DAT_14ca5a0ea = FUN_140850cc5();
  _DAT_14ca5a0c8 = FUN_140ec6960();
  _DAT_14ca5a0d8 = &LAB_14682652b;
  _DAT_14ca5a0e0 = &DAT_100000108;
  _DAT_14ca5a0e8 = 0;
  _DAT_14ca5a0d0 = DAT_14ca53830;
  DAT_14ca53830 = &DAT_14ca5a0c0;
  return;
}



// FUNCTION 145db9fd6 FUN_145db9fd6 body=121 status=ok
// SIG undefined FUN_145db9fd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145db9fd6(void)

{
  FUN_145dba050();
  _DAT_14ca5a0f0 = L"ShadowSharpen";
  DAT_14ca5a11a = FUN_140850cc5();
  _DAT_14ca5a0f8 = FUN_140ec6960();
  _DAT_14ca5a108 = &LAB_14682652b;
  _DAT_14ca5a110 = 0x10000010e;
  _DAT_14ca5a118 = 0;
  _DAT_14ca5a100 = DAT_14ca53830;
  DAT_14ca53830 = &DAT_14ca5a0f0;
  return;
}



// FUNCTION 145dba050 FUN_145dba050 body=121 status=ok
// SIG undefined FUN_145dba050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dba050(void)

{
  FUN_145dba0ca();
  _DAT_14ca5a120 = L"PointLightDepthBias";
  DAT_14ca5a14a = FUN_140850cc5();
  _DAT_14ca5a128 = FUN_140ec6960();
  _DAT_14ca5a138 = &LAB_14682652b;
  _DAT_14ca5a140 = 0x100000114;
  _DAT_14ca5a148 = 0;
  _DAT_14ca5a130 = DAT_14ca53830;
  DAT_14ca53830 = &DAT_14ca5a120;
  return;
}



// FUNCTION 145dba0ca FUN_145dba0ca body=121 status=ok
// SIG undefined FUN_145dba0ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dba0ca(void)

{
  FUN_145dba1c0();
  _DAT_14ca5a150 = L"PointLightProjParameters";
  DAT_14ca5a17a = FUN_140850cc5();
  _DAT_14ca5a158 = FUN_140ec6960();
  _DAT_14ca5a168 = &LAB_14682652b;
  _DAT_14ca5a170 = 0x10000011a;
  _DAT_14ca5a178 = 0;
  _DAT_14ca5a160 = DAT_14ca53830;
  DAT_14ca53830 = &DAT_14ca5a150;
  return;
}



// FUNCTION 145dba144 FUN_145dba144 body=123 status=ok
// SIG undefined FUN_145dba144(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dba144(void)

{
  _DAT_14ca5a1e0 = L"BASE";
  DAT_14ca5a20a = 4;
  _DAT_14ca5a1e8 = FUN_140b35ae4();
  _DAT_14ca5a1f0 = DAT_14ca53830;
  _DAT_14ca5a1f8 = &LAB_14682652b;
  DAT_14ca53830 = &DAT_14ca5a1e0;
  DAT_14ca53885 = DAT_14ca53885 + '\x01';
  _DAT_14ca5a200 = 0x100000000;
  if (*(char *)(_DAT_14ca5a1e8 + 100) != '\0') {
    DAT_14ca53886 = DAT_14ca53886 + '\x01';
  }
  return;
}



// FUNCTION 145dba1c0 FUN_145dba1c0 body=216 status=ok
// SIG undefined FUN_145dba1c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dba1c0(void)

{
  _DAT_14ca5a1b0 = L"SubstrateGlobalParameters";
  DAT_14ca5a1da = FUN_140850cc5();
  _DAT_14ca5a1b8 = FUN_14106a12a();
  _DAT_14ca5a1c8 = &LAB_14682652b;
  _DAT_14ca5a1d0 = 0x100000122;
  _DAT_14ca5a1d8 = 0;
  _DAT_14ca5a1c0 = DAT_14ca53830;
  DAT_14ca53830 = &DAT_14ca5a1b0;
  _DAT_14ca5a180 = L"HairStrandsParameters";
  DAT_14ca5a1aa = FUN_140850cc5();
  _DAT_14ca5a188 = FUN_14106a12a();
  _DAT_14ca5a198 = &LAB_14682652b;
  _DAT_14ca5a1a0 = 0x100000120;
  _DAT_14ca5a1a8 = 0;
  _DAT_14ca5a190 = DAT_14ca53830;
  DAT_14ca53830 = &DAT_14ca5a180;
  return;
}



// FUNCTION 145dba298 FUN_145dba298 body=284 status=ok
// SIG undefined FUN_145dba298(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145dba298(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca53a58) {
    FUN_144b3d300(&DAT_14ca53a58);
    if (DAT_14ca53a58 == -1) {
      FUN_145dba3b4();
      FUN_140db5666(&DAT_14ca539b0,0,&DAT_14ca53948,L"FOnePassPointShadowProjectionPS5falsefalse",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,
                    1,FUN_1472f3794,FUN_1472f376c,&LAB_1472f3768,&LAB_1472f3764,&LAB_14712ac0c,
                    &LAB_14712ac08,0x128,0);
      _DAT_14ca539b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049cee);
      _Init_thread_footer(&DAT_14ca53a58);
    }
  }
  return &DAT_14ca539b0;
}



// FUNCTION 145dba3b4 FUN_145dba3b4 body=210 status=ok
// SIG undefined FUN_145dba3b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dba3b4(void)

{
  if ((DAT_14ca539af & 2) == 0) {
    DAT_14ca539af = DAT_14ca539af | 2;
    _DAT_14ca53950 = L"FOnePassPointShadowProjectionPS5falsefalse";
    _DAT_14ca53968 = FUN_146826540;
    _DAT_14ca53970 = FUN_146825d77;
    _DAT_14ca53978 = FUN_146825fd6;
    _DAT_14ca53980 = FUN_1407e02ea;
    _DAT_14ca53988 = FUN_146826273;
    _DAT_14ca53960 = FUN_1472f3734;
    _DAT_14ca539a0 = 0xffffffff00000128;
    _DAT_14ca539a8 = 8;
    DAT_14ca539ac = 0;
    _DAT_14ca53990 = &LAB_1472f3760;
    FUN_145dba486();
    FUN_145dba7dc();
    FUN_1407e00cc(&DAT_14ca53948);
    return;
  }
  return;
}



// FUNCTION 145dba486 FUN_145dba486 body=121 status=ok
// SIG undefined FUN_145dba486(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dba486(void)

{
  FUN_145dba500();
  _DAT_14ca5a210 = L"OnePassShadowParameters";
  DAT_14ca5a23a = FUN_140850cc5();
  _DAT_14ca5a218 = FUN_1459d290a();
  _DAT_14ca5a228 = &LAB_14682652b;
  _DAT_14ca5a230 = 0x1000000e0;
  _DAT_14ca5a238 = 0;
  _DAT_14ca5a220 = DAT_14ca53958;
  DAT_14ca53958 = &DAT_14ca5a210;
  return;
}



// FUNCTION 145dba500 FUN_145dba500 body=121 status=ok
// SIG undefined FUN_145dba500(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dba500(void)

{
  FUN_145dba57a();
  _DAT_14ca5a240 = L"ShadowDepthTextureSampler";
  DAT_14ca5a26a = FUN_140850cc5();
  _DAT_14ca5a248 = FUN_140fb78d0();
  _DAT_14ca5a258 = &LAB_14682652b;
  _DAT_14ca5a260 = 0x1000000fe;
  _DAT_14ca5a268 = 0;
  _DAT_14ca5a250 = DAT_14ca53958;
  DAT_14ca53958 = &DAT_14ca5a240;
  return;
}



// FUNCTION 145dba57a FUN_145dba57a body=121 status=ok
// SIG undefined FUN_145dba57a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dba57a(void)

{
  FUN_145dba5f4();
  _DAT_14ca5a270 = L"LightPosition";
  DAT_14ca5a29a = FUN_140850cc5();
  _DAT_14ca5a278 = FUN_140ec6960();
  _DAT_14ca5a288 = &LAB_14682652b;
  _DAT_14ca5a290 = 0x100000102;
  _DAT_14ca5a298 = 0;
  _DAT_14ca5a280 = DAT_14ca53958;
  DAT_14ca53958 = &DAT_14ca5a270;
  return;
}



// FUNCTION 145dba5f4 FUN_145dba5f4 body=121 status=ok
// SIG undefined FUN_145dba5f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dba5f4(void)

{
  FUN_145dba66e();
  _DAT_14ca5a2a0 = L"ShadowFadeFraction";
  DAT_14ca5a2ca = FUN_140850cc5();
  _DAT_14ca5a2a8 = FUN_140ec6960();
  _DAT_14ca5a2b8 = &LAB_14682652b;
  _DAT_14ca5a2c0 = &DAT_100000108;
  _DAT_14ca5a2c8 = 0;
  _DAT_14ca5a2b0 = DAT_14ca53958;
  DAT_14ca53958 = &DAT_14ca5a2a0;
  return;
}



// FUNCTION 145dba66e FUN_145dba66e body=121 status=ok
// SIG undefined FUN_145dba66e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dba66e(void)

{
  FUN_145dba6e8();
  _DAT_14ca5a2d0 = L"ShadowSharpen";
  DAT_14ca5a2fa = FUN_140850cc5();
  _DAT_14ca5a2d8 = FUN_140ec6960();
  _DAT_14ca5a2e8 = &LAB_14682652b;
  _DAT_14ca5a2f0 = 0x10000010e;
  _DAT_14ca5a2f8 = 0;
  _DAT_14ca5a2e0 = DAT_14ca53958;
  DAT_14ca53958 = &DAT_14ca5a2d0;
  return;
}



// FUNCTION 145dba6e8 FUN_145dba6e8 body=121 status=ok
// SIG undefined FUN_145dba6e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dba6e8(void)

{
  FUN_145dba762();
  _DAT_14ca5a300 = L"PointLightDepthBias";
  DAT_14ca5a32a = FUN_140850cc5();
  _DAT_14ca5a308 = FUN_140ec6960();
  _DAT_14ca5a318 = &LAB_14682652b;
  _DAT_14ca5a320 = 0x100000114;
  _DAT_14ca5a328 = 0;
  _DAT_14ca5a310 = DAT_14ca53958;
  DAT_14ca53958 = &DAT_14ca5a300;
  return;
}



// FUNCTION 145dba762 FUN_145dba762 body=121 status=ok
// SIG undefined FUN_145dba762(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dba762(void)

{
  FUN_145dba858();
  _DAT_14ca5a330 = L"PointLightProjParameters";
  DAT_14ca5a35a = FUN_140850cc5();
  _DAT_14ca5a338 = FUN_140ec6960();
  _DAT_14ca5a348 = &LAB_14682652b;
  _DAT_14ca5a350 = 0x10000011a;
  _DAT_14ca5a358 = 0;
  _DAT_14ca5a340 = DAT_14ca53958;
  DAT_14ca53958 = &DAT_14ca5a330;
  return;
}



// FUNCTION 145dba7dc FUN_145dba7dc body=123 status=ok
// SIG undefined FUN_145dba7dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dba7dc(void)

{
  _DAT_14ca5a3c0 = L"BASE";
  DAT_14ca5a3ea = 4;
  _DAT_14ca5a3c8 = FUN_140b35ae4();
  _DAT_14ca5a3d0 = DAT_14ca53958;
  _DAT_14ca5a3d8 = &LAB_14682652b;
  DAT_14ca53958 = &DAT_14ca5a3c0;
  DAT_14ca539ad = DAT_14ca539ad + '\x01';
  _DAT_14ca5a3e0 = 0x100000000;
  if (*(char *)(_DAT_14ca5a3c8 + 100) != '\0') {
    DAT_14ca539ae = DAT_14ca539ae + '\x01';
  }
  return;
}



// FUNCTION 145dba858 FUN_145dba858 body=216 status=ok
// SIG undefined FUN_145dba858(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dba858(void)

{
  _DAT_14ca5a390 = L"SubstrateGlobalParameters";
  DAT_14ca5a3ba = FUN_140850cc5();
  _DAT_14ca5a398 = FUN_14106a12a();
  _DAT_14ca5a3a8 = &LAB_14682652b;
  _DAT_14ca5a3b0 = 0x100000122;
  _DAT_14ca5a3b8 = 0;
  _DAT_14ca5a3a0 = DAT_14ca53958;
  DAT_14ca53958 = &DAT_14ca5a390;
  _DAT_14ca5a360 = L"HairStrandsParameters";
  DAT_14ca5a38a = FUN_140850cc5();
  _DAT_14ca5a368 = FUN_14106a12a();
  _DAT_14ca5a378 = &LAB_14682652b;
  _DAT_14ca5a380 = 0x100000120;
  _DAT_14ca5a388 = 0;
  _DAT_14ca5a370 = DAT_14ca53958;
  DAT_14ca53958 = &DAT_14ca5a360;
  return;
}



// FUNCTION 145dba930 FUN_145dba930 body=284 status=ok
// SIG undefined FUN_145dba930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145dba930(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca53b80) {
    FUN_144b3d300(&DAT_14ca53b80);
    if (DAT_14ca53b80 == -1) {
      FUN_145dbaa4c();
      FUN_140db5666(&DAT_14ca53ad8,0,&DAT_14ca53a70,L"FOnePassPointShadowProjectionPS1truefalse",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,
                    1,FUN_1472f38b8,FUN_1472f3890,&LAB_1472f3878,&LAB_1472f3874,&LAB_14712ac0c,
                    &LAB_14712ac08,0x128,0);
      _DAT_14ca53ad8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049cfa);
      _Init_thread_footer(&DAT_14ca53b80);
    }
  }
  return &DAT_14ca53ad8;
}



// FUNCTION 145dbaa4c FUN_145dbaa4c body=210 status=ok
// SIG undefined FUN_145dbaa4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dbaa4c(void)

{
  if ((DAT_14ca53ad7 & 2) == 0) {
    DAT_14ca53ad7 = DAT_14ca53ad7 | 2;
    _DAT_14ca53a78 = L"FOnePassPointShadowProjectionPS1truefalse";
    _DAT_14ca53a90 = FUN_146826540;
    _DAT_14ca53a98 = FUN_146825d77;
    _DAT_14ca53aa0 = FUN_146825fd6;
    _DAT_14ca53aa8 = FUN_1407e02ea;
    _DAT_14ca53ab0 = FUN_146826273;
    _DAT_14ca53a88 = FUN_1472f3844;
    _DAT_14ca53ac8 = 0xffffffff00000128;
    _DAT_14ca53ad0 = 8;
    DAT_14ca53ad4 = 0;
    _DAT_14ca53ab8 = &LAB_1472f3870;
    FUN_145dbab1e();
    FUN_145dbae74();
    FUN_1407e00cc(&DAT_14ca53a70);
    return;
  }
  return;
}



// FUNCTION 145dbab1e FUN_145dbab1e body=121 status=ok
// SIG undefined FUN_145dbab1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dbab1e(void)

{
  FUN_145dbab98();
  _DAT_14ca5a3f0 = L"OnePassShadowParameters";
  DAT_14ca5a41a = FUN_140850cc5();
  _DAT_14ca5a3f8 = FUN_1459d290a();
  _DAT_14ca5a408 = &LAB_14682652b;
  _DAT_14ca5a410 = 0x1000000e0;
  _DAT_14ca5a418 = 0;
  _DAT_14ca5a400 = DAT_14ca53a80;
  DAT_14ca53a80 = &DAT_14ca5a3f0;
  return;
}


