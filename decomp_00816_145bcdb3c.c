// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145bcdb3c FUN_145bcdb3c body=239 status=ok
// SIG undefined FUN_145bcdb3c(void)

void FUN_145bcdb3c(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  uint local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    uVar2 = FUN_14118da1c();
    DAT_14c8442b8 = FUN_14054d46e(uVar2,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar1 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_145bcdbaf;
    bVar1 = DAT_14c8442b8 & 1;
  }
  if (bVar1 == 0) {
    local_18 = -(uint)(0.0 <= *(float *)(param_1 + 0x274)) & (uint)*(float *)(param_1 + 0x274);
    local_14 = 1;
    FUN_145bcdc2c();
  }
LAB_145bcdbaf:
  FUN_145bcdc90(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bcdc2c FUN_145bcdc2c body=99 status=ok
// SIG undefined FUN_145bcdc2c(void)

void FUN_145bcdc2c(float *param_1)

{
  float fVar1;
  
  DAT_14c98f158 = *(char *)(param_1 + 1);
  if (DAT_14c98f158 == '\x01') {
    fVar1 = *param_1;
  }
  else {
    fVar1 = 1.0;
  }
  DAT_14c75ef68 = ~-(uint)(fVar1 < 0.0) & (uint)fVar1 | -(uint)(fVar1 < 0.0) & 0x3f800000;
  FUN_1447f69b6(&DAT_14c8672b0);
  if (*(char *)(param_1 + 1) == '\x01') {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 145bcdc90 FUN_145bcdc90 body=216 status=ok
// SIG undefined FUN_145bcdc90(void)

void FUN_145bcdc90(longlong param_1)

{
  char cVar1;
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_145bce05a(param_1,*(undefined1 *)(param_1 + 0x10c));
  FUN_145bcdd78(L"r.MotionBlur.Amount",*(undefined4 *)(param_1 + 0x160));
  FUN_14485dd80(param_1 + 0x170,*(undefined4 *)(param_1 + 0x15c));
  cVar1 = FUN_145bcdd6a(*(undefined8 *)(param_1 + 0x148));
  if (cVar1 == '\0') {
    FUN_145bcdde0(param_1);
    FUN_1414ce926(param_1);
  }
  FUN_1447f69b6(param_1 + 0x210);
  if (*(char *)(DAT_14cb0d2b0 + 0xf10) == '\0') {
    FUN_145bce3e4(local_18,param_1);
  }
  else {
    cVar1 = '\x01';
    if (*(char *)(param_1 + 0x1d8) != '\x01') {
      cVar1 = (*(char *)(param_1 + 0x1d8) == '\x03') * '\x03';
    }
    FUN_145c9a8aa(cVar1);
  }
  FUN_1414ce6ba(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bcdd6a FUN_145bcdd6a body=14 status=ok
// SIG undefined FUN_145bcdd6a(void)

undefined8 FUN_145bcdd6a(void)

{
  return CONCAT71((int7)((ulonglong)DAT_14cad6230 >> 8),*(undefined1 *)(DAT_14cad6230 + 200));
}



// FUNCTION 145bcdd78 FUN_145bcdd78 body=103 status=ok
// SIG undefined FUN_145bcdd78(void)

void FUN_145bcdd78(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  lVar1 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,param_1,1);
  if (lVar1 != 0) {
    FUN_140635f48(lVar1,param_2,0x2000000,0);
    return;
  }
  return;
}



// FUNCTION 145bcdde0 FUN_145bcdde0 body=107 status=ok
// SIG undefined FUN_145bcdde0(void)

void FUN_145bcdde0(longlong param_1)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(longlong *)(param_1 + 0x150);
  if (local_10 == 0) {
    local_10 = *(longlong *)(DAT_14cad6230 + 0xb8);
    *(longlong *)(param_1 + 0x150) = local_10;
  }
  FUN_145bcde4c(*(undefined8 *)(param_1 + 0x148),&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bcde4c FUN_145bcde4c body=81 status=ok
// SIG undefined FUN_145bcde4c(void)

void FUN_145bcde4c(longlong param_1,longlong *param_2)

{
  if (((DAT_14cad6230 != 0) && (0 < *(int *)(DAT_14cad6230 + 0x98))) &&
     (*(longlong *)(DAT_14cad6230 + 0xb8) != *param_2)) {
    *(longlong *)(DAT_14cad6230 + 0xb8) = *param_2;
    FUN_145bcde9e(param_1 + 0xe0,0);
    FUN_1414cecc8();
    return;
  }
  return;
}



// FUNCTION 145bcde9e FUN_145bcde9e body=107 status=ok
// SIG undefined FUN_145bcde9e(void)

void FUN_145bcde9e(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_145bcdeed:
      FUN_14130b458(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1414fa976(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_145bcdeed;
  FUN_145bcdf0a(param_1);
  FUN_14130b458(param_1,param_2);
  return;
}



// FUNCTION 145bcdf0a FUN_145bcdf0a body=335 status=ok
// SIG undefined FUN_145bcdf0a(void)

void FUN_145bcdf0a(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 145bce05a FUN_145bce05a body=204 status=ok
// SIG undefined FUN_145bce05a(void)

void FUN_145bce05a(longlong param_1,char param_2)

{
  undefined2 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7fad8) {
    FUN_144b3d300(&DAT_14cb7fad8);
    if (DAT_14cb7fad8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb7fad0 =
           (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.HDR.EnableHDROutput",1)
      ;
      _Init_thread_footer(&DAT_14cb7fad8);
    }
  }
  if (DAT_14cb7fad0 != (longlong *)0x0) {
    puVar1 = &DAT_149e25dfc;
    if (param_2 != '\0') {
      puVar1 = &DAT_149e0209e;
    }
    (**(code **)(*DAT_14cb7fad0 + 0x98))(DAT_14cb7fad0,puVar1,0x2000000,0);
  }
  *(char *)(param_1 + 0x10c) = param_2;
  FUN_145bce126(param_1);
  return;
}



// FUNCTION 145bce126 FUN_145bce126 body=310 status=ok
// SIG undefined FUN_145bce126(void)

void FUN_145bce126(undefined8 param_1)

{
  char cVar1;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [140];
  undefined4 local_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar1 = FUN_1414ce422(local_b0);
  if (cVar1 != '\0') {
    FUN_140056680(local_c0,local_b0);
    cVar1 = FUN_145bce266(local_c0);
    if (cVar1 != '\0') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cb7fac8) {
        FUN_144b3d300(&DAT_14cb7fac8);
        if (DAT_14cb7fac8 == -1) {
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          DAT_14cb7fac0 =
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"gbx.HDR.PlatformMaxLuminance",1);
          _Init_thread_footer(&DAT_14cb7fac8);
        }
      }
      if (DAT_14cb7fac0 != 0) {
        FUN_140635f48(DAT_14cb7fac0,local_24,0xd000000,0);
      }
    }
    cVar1 = FUN_145bce25e(param_1);
    if (cVar1 != '\0') {
      FUN_140056680(local_d0,local_b0);
      FUN_143c325e4(local_d0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bce25e FUN_145bce25e body=7 status=ok
// SIG undefined FUN_145bce25e(void)

undefined1 FUN_145bce25e(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x10c);
}



// FUNCTION 145bce266 FUN_145bce266 body=381 status=ok
// SIG undefined FUN_145bce266(void)

undefined4 FUN_145bce266(longlong *param_1)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined8 ***pppuVar5;
  wchar_t *_Str;
  undefined1 auStack_148 [44];
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f0 [128];
  longlong local_70;
  char *local_68;
  undefined4 local_60;
  undefined8 **local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  cVar2 = FUN_1414ce356(param_1,&local_11c);
  if (cVar2 != '\0') {
    uVar3 = FUN_1414ce2ec(local_11c);
    goto LAB_145bce2a6;
  }
  if ((int)param_1[1] == 0) {
    _Str = L"";
LAB_145bce2ff:
    local_70 = 0;
    sVar4 = wcslen(_Str);
    FUN_1446fe5a4(local_f0,_Str,sVar4 & 0xffffffff,1);
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_70 = 0;
    if (_Str != (wchar_t *)0x0) goto LAB_145bce2ff;
    local_68 = (char *)0x0;
    local_60 = 0;
  }
  pcVar1 = local_68;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (undefined8 ***)0x0;
  uStack_50 = 0;
  sVar4 = strlen(local_68);
  FUN_140cd1a74(&local_58,pcVar1,sVar4);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  pppuVar5 = &local_58;
  if (0xf < uStack_40) {
    pppuVar5 = (undefined8 ***)local_58;
  }
  FUN_1401d9f72(&local_118,pppuVar5,local_48);
  uVar3 = FUN_14861010a(&local_118);
  FUN_1401d9a90(&local_58);
LAB_145bce2a6:
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bce3e4 FUN_145bce3e4 body=239 status=ok
// SIG undefined FUN_145bce3e4(void)

undefined8 FUN_145bce3e4(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_LAB_149e020b0;
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
  *local_30 = &PTR_FUN_14b40af00;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = &LAB_145c9a88a;
  FUN_1448b6402(&DAT_14c867390,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bce4d4 FUN_145bce4d4 body=489 status=ok
// SIG undefined FUN_145bce4d4(void)

undefined8 FUN_145bce4d4(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  byte *pbVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar5 = *(longlong **)(param_1 + 0xb8);
  if (plVar5 != (longlong *)0x0) {
    cVar8 = (**(code **)(*plVar5 + 8))
                      (plVar5,(longlong)param_2 * 0x20 + *(longlong *)(param_1 + 0x68));
    uVar10 = 3;
    if (cVar8 == '\0') goto LAB_145bce565;
  }
  if (param_3 == '\x01') {
    local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x10 + (longlong)param_2 * 0x20);
    puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x20);
    local_38 = *puVar2;
    uStack_34 = puVar2[1];
    uStack_30 = puVar2[2];
    uStack_2c = puVar2[3];
    FUN_145bce72e(param_1 + 0x18);
    FUN_145bce6be(param_1 + 0x68,param_2);
    uVar9 = *(uint *)(param_1 + 0xa8);
    lVar6 = *(longlong *)(param_1 + 0xa0);
    uVar12 = 0;
    if (0 < (int)uVar9) {
      uVar12 = 0;
      uVar11 = uVar9;
      do {
        uVar1 = (uVar11 >> 1) + uVar12;
        if (*(int *)(lVar6 + (ulonglong)uVar1 * 8) < param_2) {
          uVar12 = uVar1 + (uVar11 & 1);
        }
        bVar7 = 1 < uVar11;
        uVar11 = uVar11 >> 1;
      } while (bVar7);
    }
    if (((int)uVar12 < (int)uVar9) && (*(int *)(lVar6 + (ulonglong)uVar12 * 8) <= param_2)) {
      if (~uVar12 + uVar9 != 0) {
        pvVar3 = (void *)(lVar6 + (ulonglong)uVar12 * 8);
        memmove(pvVar3,(void *)((longlong)pvVar3 + 8),(longlong)(int)(~uVar12 + uVar9) << 3);
        uVar9 = *(uint *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = uVar9 - 1;
      FUN_14768352a(param_1 + 0xa0);
    }
    uVar10 = 0;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0xa8);
    lVar6 = *(longlong *)(param_1 + 0xa0);
    uVar11 = 0;
    uVar12 = uVar9;
    if (0 < (int)uVar9) {
      do {
        uVar1 = (uVar12 >> 1) + uVar11;
        if (*(int *)(lVar6 + (ulonglong)uVar1 * 8) < param_2) {
          uVar11 = uVar1 + (uVar12 & 1);
        }
        bVar7 = 1 < uVar12;
        uVar12 = uVar12 >> 1;
      } while (bVar7);
    }
    if (((int)uVar11 < (int)uVar9) && (*(int *)(lVar6 + (ulonglong)uVar11 * 8) <= param_2)) {
      if (~uVar11 + uVar9 != 0) {
        pvVar3 = (void *)(lVar6 + (ulonglong)uVar11 * 8);
        memmove(pvVar3,(void *)((longlong)pvVar3 + 8),(longlong)(int)(~uVar11 + uVar9) << 3);
        uVar9 = *(uint *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = uVar9 - 1;
      FUN_14768352a(param_1 + 0xa0);
    }
    else {
      pbVar4 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x1c + (longlong)param_2 * 0x20);
      *pbVar4 = *pbVar4 | 2;
    }
    uVar10 = 1;
  }
LAB_145bce565:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 145bce6be FUN_145bce6be body=112 status=ok
// SIG undefined FUN_145bce6be(void)

void FUN_145bce6be(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 145bce72e FUN_145bce72e body=184 status=ok
// SIG undefined FUN_145bce72e(void)

void FUN_145bce72e(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_145bce7e6(param_2);
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    uVar7 = (longlong)iVar2 & (longlong)(int)param_1[9] - 1U;
    lVar3 = (longlong)*(int *)((longlong)plVar5 + uVar7 * 4);
    if (lVar3 != -1) {
      lVar3 = lVar3 * 0x24 + *param_1;
      cVar1 = FUN_145bce84d(lVar3,param_2);
      if (cVar1 == '\0') {
        do {
          lVar4 = lVar3;
          lVar3 = (longlong)*(int *)(lVar4 + 0x1c);
          if (lVar3 == -1) {
            return;
          }
          lVar3 = lVar3 * 0x24 + *param_1;
          cVar1 = FUN_145bce84d(lVar3,param_2);
        } while (cVar1 == '\0');
        puVar6 = (undefined4 *)(lVar4 + 0x1c);
      }
      else {
        puVar6 = (undefined4 *)((longlong)plVar5 + uVar7 * 4);
      }
      FUN_145bce88e(param_1,*puVar6);
      return;
    }
  }
  return;
}



// FUNCTION 145bce7e6 FUN_145bce7e6 body=103 status=ok
// SIG undefined FUN_145bce7e6(void)

uint FUN_145bce7e6(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = FUN_144a78877(*param_1,param_1[1]);
  uVar1 = *(undefined1 *)(param_1 + 4);
  uVar2 = *(undefined8 *)(param_1 + 2);
  uVar5 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar4 = FUN_144a78877(((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
                        (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar6 >> 4),param_1[5]);
  uVar5 = FUN_144a78877(uVar4,uVar1);
  return uVar5 ^ uVar3;
}



// FUNCTION 145bce84d FUN_145bce84d body=64 status=ok
// SIG undefined FUN_145bce84d(void)

undefined4 FUN_145bce84d(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    uVar1 = 0;
    if ((param_1[2] == param_2[2]) && (uVar1 = 0, param_1[3] == param_2[3])) {
      if ((char)param_1[4] == (char)param_2[4]) {
        uVar1 = CONCAT31((int3)((uint)param_1[5] >> 8),param_1[5] == param_2[5]);
      }
      else {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}



// FUNCTION 145bce88e FUN_145bce88e body=85 status=ok
// SIG undefined FUN_145bce88e(void)

void FUN_145bce88e(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x24;
  lVar5 = (longlong)*(int *)(lVar1 + 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x24 + 0x1c);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x1c);
  FUN_145bce8e4();
  return;
}



// FUNCTION 145bce8e4 FUN_145bce8e4 body=112 status=ok
// SIG undefined FUN_145bce8e4(void)

void FUN_145bce8e4(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x24) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x24);
  *puVar1 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 145bce954 FUN_145bce954 body=189 status=ok
// SIG undefined FUN_145bce954(void)

void FUN_145bce954(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  undefined1 auStack_88 [32];
  undefined *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14494321d(0x60);
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14a57db70;
  local_40 = FUN_1477ef196;
  local_68[0] = &DAT_1477ef1dc;
  FUN_1458d078e(uVar2,local_68,&DAT_14c99e434,0x101);
  if (local_68[0] != (undefined *)0x0) {
    pppuVar3 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar3 = &local_48;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bcea12 FUN_145bcea12 body=12 status=ok
// SIG undefined FUN_145bcea12(void)

void FUN_145bcea12(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145bcea1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 145bcea1e FUN_145bcea1e body=36 status=ok
// SIG undefined FUN_145bcea1e(void)

undefined8 FUN_145bcea1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145bcea42 FUN_145bcea42 body=189 status=ok
// SIG undefined FUN_145bcea42(void)

void FUN_145bcea42(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  undefined1 auStack_88 [32];
  undefined *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14494321d(0x60);
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14a57dd70;
  local_40 = FUN_1477ef812;
  local_68[0] = &DAT_1477ef858;
  FUN_1458d078e(uVar2,local_68,&DAT_14c99e414,0x101);
  if (local_68[0] != (undefined *)0x0) {
    pppuVar3 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar3 = &local_48;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bceb00 FUN_145bceb00 body=12 status=ok
// SIG undefined FUN_145bceb00(void)

void FUN_145bceb00(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145bceb09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 145bceb0c FUN_145bceb0c body=36 status=ok
// SIG undefined FUN_145bceb0c(void)

undefined8 FUN_145bceb0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145bceb30 FUN_145bceb30 body=189 status=ok
// SIG undefined FUN_145bceb30(void)

void FUN_145bceb30(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  undefined1 auStack_88 [32];
  undefined *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14494321d(0x60);
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14a57e350;
  local_40 = FUN_1477f0454;
  local_68[0] = &DAT_1477f04b2;
  FUN_1458d078e(uVar2,local_68,&DAT_14c99e42c,0x101);
  if (local_68[0] != (undefined *)0x0) {
    pppuVar3 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar3 = &local_48;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bcebee FUN_145bcebee body=12 status=ok
// SIG undefined FUN_145bcebee(void)

void FUN_145bcebee(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145bcebf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 145bcebfa FUN_145bcebfa body=36 status=ok
// SIG undefined FUN_145bcebfa(void)

undefined8 FUN_145bcebfa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145bcec1e FUN_145bcec1e body=40 status=ok
// SIG undefined FUN_145bcec1e(void)

undefined8 FUN_145bcec1e(undefined8 param_1,int param_2)

{
  FUN_145bcec46();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bcec46 FUN_145bcec46 body=133 status=ok
// SIG undefined FUN_145bcec46(void)

void FUN_145bcec46(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b12ba40;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_145bceccc(param_1 + 9);
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145bceccc FUN_145bceccc body=55 status=ok
// SIG undefined FUN_145bceccc(void)

void FUN_145bceccc(longlong *param_1)

{
  FUN_145bced04(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bced04 FUN_145bced04 body=365 status=ok
// SIG undefined FUN_145bced04(void)

void FUN_145bced04(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 0x20 + (longlong)iStack_54 * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_144748838(param_1,param_2);
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
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145bcee74 FUN_145bcee74 body=96 status=ok
// SIG undefined FUN_145bcee74(void)

undefined8 FUN_145bcee74(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_145bceed6(local_40);
  FUN_144a73aae(local_40);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bceed6 FUN_145bceed6 body=22 status=ok
// SIG undefined FUN_145bceed6(void)

undefined8 FUN_145bceed6(int *param_1)

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
  
  plVar4 = DAT_14cb8c910;
  if (DAT_14cb8c910 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb8c910 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb8c910 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb8c910[0x3a] <= *(int *)((longlong)DAT_14cb8c910 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cb8c910 + 0x300))(DAT_14cb8c910);
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



// FUNCTION 145bceeec FUN_145bceeec body=111 status=ok
// SIG undefined FUN_145bceeec(void)

undefined8 * FUN_145bceeec(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd6db00;
  param_1[5] = &PTR_LAB_14bd6dec0;
  param_1[0x13] = &PTR_LAB_14bd6dee0;
  param_1[0x14] = &PTR_LAB_14bd6def8;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_145bcef5c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bcef5c FUN_145bcef5c body=127 status=ok
// SIG undefined FUN_145bcef5c(void)

void FUN_145bcef5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bdc8690;
  param_1[5] = &PTR_FUN_14bdc8a50;
  param_1[0x13] = &PTR_FUN_14bdc8a70;
  param_1[0x14] = &PTR_FUN_14bdc8a88;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_1411412f4(param_1);
  return;
}



// FUNCTION 145bcefdc FUN_145bcefdc body=237 status=ok
// SIG undefined FUN_145bcefdc(void)

longlong * FUN_145bcefdc(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x68,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b096340;
  plVar1 = plVar4 + 2;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  *(undefined4 *)(plVar4 + 8) = 0xffffffff;
  plVar4[9] = 0;
  plVar4[10] = 0;
  *(undefined1 *)(plVar4 + 0xb) = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b095090;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_145bcf0cc(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bcf0cc FUN_145bcf0cc body=157 status=ok
// SIG undefined FUN_145bcf0cc(void)

void FUN_145bcf0cc(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145bcf106;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145bcf106;
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
LAB_145bcf106:
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
                    /* WARNING: Could not recover jumptable at 0x000145bcf165. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145bcf16a FUN_145bcf16a body=577 status=ok
// SIG undefined FUN_145bcf16a(void)

undefined8 * FUN_145bcf16a(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  void *_Src;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  longlong local_60;
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145bcf3ac(param_1 + 0x670);
  lVar10 = *(longlong *)(param_1 + 0xa8);
  if (lVar10 != 0) {
    lVar7 = FUN_1412eb6ec();
    if (((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
          ) == lVar7 + 0x30)) && (*(char *)(lVar10 + 0x398) == '\x01')) {
      local_58 = (void *)0x0;
      uStack_50 = 0;
      if (0 < *(int *)(lVar10 + 0x3f0)) {
        lVar12 = 8;
        lVar7 = 0;
        do {
          plVar3 = *(longlong **)(*(longlong *)(lVar10 + 1000) + -8 + lVar12);
          plVar4 = *(longlong **)(*(longlong *)(lVar10 + 1000) + lVar12);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          if ((*(byte *)((longlong)plVar3 + 0x34) & 0x80) != 0) {
            local_60 = 0;
            lVar8 = (**(code **)(*plVar3 + 0x28))(plVar3,param_1,&local_60);
            uVar5 = uStack_50;
            if (lVar8 != 0) {
              lVar11 = (longlong)(int)uStack_50;
              uVar6 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
              if (uStack_50._4_4_ < uVar6) {
                FUN_148b7b37c(&local_58,uVar5 & 0xffffffff);
              }
              *(longlong *)((longlong)local_58 + lVar11 * 8) = lVar8;
            }
            lVar8 = local_60;
            if (local_60 != 0) {
              iVar2 = *(int *)(param_1 + 0x6c8);
              *(uint *)(param_1 + 0x6c8) = iVar2 + 1U;
              if (*(uint *)(param_1 + 0x6cc) < iVar2 + 1U) {
                FUN_148b7cfd0((longlong *)(param_1 + 0x6c0),iVar2);
              }
              *(longlong *)(*(longlong *)(param_1 + 0x6c0) + (longlong)iVar2 * 8) = lVar8;
            }
          }
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar4 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
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
          lVar7 = lVar7 + 1;
          lVar12 = lVar12 + 0x10;
        } while (lVar7 < *(int *)(lVar10 + 0x3f0));
        if ((int)uStack_50 == 0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          puVar9 = (undefined8 *)FUN_14001cc68(0x3a0,0x10);
          FUN_1406ff464(puVar9,param_1);
          _Src = local_58;
          *puVar9 = &PTR_FUN_14b5b68e0;
          puVar9[0x71] = 0;
          puVar9[0x72] = 0;
          local_70 = (void *)0x0;
          lVar10 = (longlong)(int)uStack_50;
          local_68 = (int)uStack_50;
          if (lVar10 == 0) {
            local_64 = 0;
          }
          else {
            FUN_148b7d056(&local_70,uStack_50 & 0xffffffff);
            memcpy(local_70,_Src,lVar10 << 3);
          }
          FUN_148b79b7e(puVar9,&local_70);
        }
        if (local_58 != (void *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_145bcf1cf;
      }
    }
  }
  puVar9 = (undefined8 *)0x0;
LAB_145bcf1cf:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return puVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bcf3ac FUN_145bcf3ac body=97 status=ok
// SIG undefined FUN_145bcf3ac(void)

void FUN_145bcf3ac(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x58);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x50) + lVar3 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        iVar2 = *(int *)(param_1 + 0x58);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) < 0) {
    FUN_148b7cfa0((longlong *)(param_1 + 0x50));
    return;
  }
  return;
}



// FUNCTION 145bcf40e FUN_145bcf40e body=148 status=ok
// SIG undefined FUN_145bcf40e(void)

bool FUN_145bcf40e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bcf4a4 FUN_145bcf4a4 body=231 status=ok
// SIG undefined FUN_145bcf4a4(void)

void FUN_145bcf4a4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_144729dda(param_1 + 0x48);
  if (cVar3 != '\0') {
    lVar4 = FUN_14479d2ce(param_1 + 0x48);
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1710) != 0)) {
      FUN_145bcf58c(param_1,lVar4);
      cVar3 = FUN_14486ea84(param_1 + 0x58);
      if (cVar3 != '\0') {
        FUN_1449027d0(param_1,&local_38);
        lVar4 = *(longlong *)(local_38 + 0x2a0);
        AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x68));
        *(int *)(lVar4 + 0x60) = *(int *)(lVar4 + 0x60) + 1;
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
        FUN_145bcfa2e(param_1 + 0x58,lVar4);
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x68));
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bcf58c FUN_145bcf58c body=330 status=ok
// SIG undefined FUN_145bcf58c(void)

void FUN_145bcf58c(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_1400d7050(param_1 + 0x30);
  if (((lVar2 != 0) && (*(char *)(lVar2 + 0x178) != '\x03')) && (*(longlong *)(param_1 + 0x90) == 0)
     ) {
    local_38 = FUN_145bcf4a4;
    local_30 = 0;
    FUN_145bcf92e(param_2 + 0x1ea0,&local_28,param_1);
    *(undefined8 *)(param_1 + 0x90) = local_28;
  }
  FUN_145bcf6d8(param_1,param_2);
  lVar2 = param_1 + 0x58;
  cVar1 = FUN_14486ea84(lVar2);
  if (cVar1 != '\0') {
    if (*(longlong *)(param_1 + 0x78) == 0) {
      lVar3 = FUN_14008e0ae(lVar2);
      local_38 = FUN_148e5bbfe;
      local_30 = 0;
      FUN_145bcf72e(lVar3 + 0x150,&local_28,param_1);
      *(undefined8 *)(param_1 + 0x78) = local_28;
    }
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar2 = FUN_14008e0ae(lVar2);
      local_38 = FUN_140e8c2d0;
      local_30 = 0;
      FUN_145bcf82e(lVar2 + 0x138,&local_28,param_1);
      *(undefined8 *)(param_1 + 0x80) = local_28;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bcf6d8 FUN_145bcf6d8 body=85 status=ok
// SIG undefined FUN_145bcf6d8(void)

void FUN_145bcf6d8(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  if (*(longlong **)(param_2 + 0x1700) != (longlong *)0x0) {
    lVar5 = (**(code **)(**(longlong **)(param_2 + 0x1700) + 0x6d8))();
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)FUN_1402097a4(lVar5);
      if (puVar6 != (undefined8 *)0x0) {
        cVar4 = FUN_14486ea84(puVar6);
        if (cVar4 != '\0') {
          uVar1 = *puVar6;
          uVar2 = puVar6[1];
          uVar3 = puVar6[3];
          *(undefined8 *)(param_1 + 0x68) = puVar6[2];
          *(undefined8 *)(param_1 + 0x70) = uVar3;
          *(undefined8 *)(param_1 + 0x58) = uVar1;
          *(undefined8 *)(param_1 + 0x60) = uVar2;
        }
      }
    }
  }
  return;
}



// FUNCTION 145bcf72e FUN_145bcf72e body=254 status=ok
// SIG undefined FUN_145bcf72e(void)

undefined8
FUN_145bcf72e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b3f76f0;
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
  *local_48 = &PTR_FUN_14b9b6d50;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14104d758(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bcf82e FUN_145bcf82e body=254 status=ok
// SIG undefined FUN_145bcf82e(void)

undefined8
FUN_145bcf82e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b3f7900;
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
  *local_48 = &PTR_FUN_14b9b6dc0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140e2bd22(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bcf92e FUN_145bcf92e body=254 status=ok
// SIG undefined FUN_145bcf92e(void)

undefined8
FUN_145bcf92e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e020b0;
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
  *local_48 = &PTR_FUN_14b9b9bf0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bcfa2e FUN_145bcfa2e body=482 status=ok
// SIG undefined FUN_145bcfa2e(void)

void FUN_145bcfa2e(undefined8 param_1,float *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auStack_48 [39];
  char local_21;
  ulonglong local_20;
  undefined1 auVar5 [16];
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_1403ae288();
  if (cVar1 == '\0') {
    if (param_2[1] == 0.0 || *param_2 != 0.0) {
      *param_2 = 0.0;
      param_2[1] = (float)((int)param_2[1] + 1);
    }
    if (param_2[3] == 0.0 || param_2[2] != 0.0) {
      param_2[2] = 0.0;
      param_2[3] = (float)((int)param_2[3] + 1);
    }
    if (param_2[5] == 0.0 || param_2[4] != 0.0) {
      param_2[4] = 0.0;
      param_2[5] = (float)((int)param_2[5] + 1);
    }
    if (param_2[0xb] == 0.0 || *(char *)(param_2 + 10) != '\x04') {
      *(undefined1 *)(param_2 + 10) = 4;
      param_2[0xb] = (float)((int)param_2[0xb] + 1);
    }
  }
  else {
    lVar2 = FUN_140280ec4(param_1);
    if (param_2[1] == 0.0 || *(float *)(lVar2 + 200) != *param_2) {
      *param_2 = *(float *)(lVar2 + 200);
      param_2[1] = (float)((int)param_2[1] + 1);
    }
    lVar2 = FUN_140280ec4(param_1);
    if (param_2[3] == 0.0 || *(float *)(lVar2 + 0x24) != param_2[2]) {
      param_2[2] = *(float *)(lVar2 + 0x24);
      param_2[3] = (float)((int)param_2[3] + 1);
    }
    lVar2 = FUN_140280ec4(param_1);
    if ((*(longlong *)(lVar2 + 0x18) == 0) ||
       (*(char *)(*(longlong *)(lVar2 + 0x18) + 0x18) != '\x01')) {
      fVar4 = *(float *)(lVar2 + 0x30);
    }
    else {
      auVar5 = roundps(ZEXT416(*(uint *)(lVar2 + 0x30)),ZEXT416(*(uint *)(lVar2 + 0x30)),3);
      fVar4 = auVar5._0_4_;
    }
    if (param_2[5] == 0.0 || fVar4 != param_2[4]) {
      param_2[4] = fVar4;
      param_2[5] = (float)((int)param_2[5] + 1);
    }
    local_21 = '\x04';
    uVar3 = FUN_140280ec4(param_1);
    cVar1 = FUN_140280f4a(uVar3,&local_21);
    if (cVar1 != '\0') {
      if (param_2[0xb] == 0.0 || local_21 != *(char *)(param_2 + 10)) {
        *(char *)(param_2 + 10) = local_21;
        param_2[0xb] = (float)((int)param_2[0xb] + 1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bcfc12 FUN_145bcfc12 body=135 status=ok
// SIG undefined FUN_145bcfc12(void)

undefined1 * FUN_145bcfc12(undefined1 *param_1,undefined1 *param_2,byte param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = *param_2;
  InitializeSRWLock((PSRWLOCK)(param_1 + 8));
  param_1[0x10] = param_3 ^ 1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_145bcfc9a(&local_28,*param_2);
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = local_28;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bcfc9a FUN_145bcfc9a body=420 status=ok
// SIG undefined FUN_145bcfc9a(void)

undefined8 * FUN_145bcfc9a(undefined8 *param_1,char param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)0x0;
  if (param_2 == '\x02') {
    puVar3 = (undefined8 *)FUN_14001cc68(0xd8,0x10);
    *puVar3 = &PTR_FUN_149f6ad00;
    puVar3[7] = 0;
    *(undefined4 *)(puVar3 + 8) = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *(undefined8 *)((longlong)puVar3 + 0x44) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar3 + 0x4c) = 0;
    puVar3[0xb] = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
    puVar3[0x13] = 0;
    *(undefined4 *)(puVar3 + 0x14) = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    *(undefined8 *)((longlong)puVar3 + 0xa4) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar3 + 0xac) = 0;
    puVar3[0x17] = 0;
    *(undefined4 *)(puVar3 + 0x18) = 0;
    puVar3[0x19] = puVar3 + 1;
    puVar3[0x1a] = puVar3 + 0xd;
  }
  else if (param_2 == '\x04') {
    puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    FUN_146ee4aa4(puVar3);
  }
  else if (param_2 == '\x03') {
    puVar3 = (undefined8 *)FUN_14001cc68(0x130,0x10);
    *puVar3 = &PTR_FUN_149f6ad40;
    lVar2 = 0x60;
    do {
      *(undefined8 *)((longlong)puVar3 + lVar2 + -0x28) = 0;
      *(undefined4 *)((longlong)puVar3 + lVar2 + -0x20) = 0;
      puVar1 = (undefined8 *)((longlong)puVar3 + lVar2 + -0x58);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)puVar3 + lVar2 + -0x48);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((longlong)puVar3 + lVar2 + -0x1c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar3 + lVar2 + -0x14) = 0;
      *(undefined8 *)((longlong)puVar3 + lVar2 + -8) = 0;
      *(undefined4 *)((longlong)puVar3 + lVar2) = 0;
      lVar2 = lVar2 + 0x60;
    } while (lVar2 != 0x180);
    *(undefined4 *)(puVar3 + 0x25) = 1;
    *(undefined4 *)((longlong)puVar3 + 300) = 0;
  }
  else if (param_2 == '\x01') {
    puVar3 = (undefined8 *)FUN_14001cc68(0x68,0x10);
    *puVar3 = &PTR_FUN_149f6acc0;
    puVar3[7] = 0;
    *(undefined4 *)(puVar3 + 8) = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *(undefined8 *)((longlong)puVar3 + 0x44) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar3 + 0x4c) = 0;
    puVar3[0xb] = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
  }
  *param_1 = puVar3;
  return param_1;
}



// FUNCTION 145bcfe3e FUN_145bcfe3e body=54 status=ok
// SIG undefined FUN_145bcfe3e(void)

void FUN_145bcfe3e(void)

{
  FUN_145bcfe74();
  if (DAT_14ca80578 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca80558 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bcfe74 FUN_145bcfe74 body=105 status=ok
// SIG undefined FUN_145bcfe74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145bcfe74(void)

{
  DAT_14ca80560 = 0;
  if (DAT_14ca80564 != 0) {
    FUN_144727cd0(&DAT_14ca80558,0);
  }
  _DAT_14ca80588 = 0xffffffff;
  DAT_14ca80580 = 0;
  if (0x80 < DAT_14ca80584) {
    DAT_14ca80584 = 0x80;
    FUN_1446efbd8(&DAT_14ca80568,0);
    return;
  }
  return;
}



// FUNCTION 145bcfedd FUN_145bcfedd body=30 status=ok
// SIG undefined FUN_145bcfedd(void)

void FUN_145bcfedd(longlong param_1)

{
  FUN_145bcfefc(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145bcfefc FUN_145bcfefc body=73 status=ok
// SIG undefined FUN_145bcfefc(void)

void FUN_145bcfefc(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  FUN_145bcff45(param_1[1],(int)param_1[2]);
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145bcff42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 145bcff45 FUN_145bcff45 body=56 status=ok
// SIG undefined FUN_145bcff45(void)

void FUN_145bcff45(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      FUN_14003821a(lVar1);
      FUN_1400020a8(lVar1);
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 145bcff86 FUN_145bcff86 body=151 status=ok
// SIG undefined FUN_145bcff86(void)

undefined8 * FUN_145bcff86(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar1);
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ad93bb0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x19;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80;
  *(undefined4 *)(param_1 + 0xb) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x400;
  *(undefined4 *)(param_1 + 0xc) = 0x400;
  *(undefined8 *)((longlong)param_1 + 100) = 0x8000000080;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0;
  FUN_140056680(param_1 + 0xe,L"{AssetFolder}/{AssetName}_BakedAtlas_{OutputName}");
  FUN_140056680(param_1 + 0x10,L"{AssetFolder}/{AssetName}_BakedFrame_{OutputName}_{FrameIndex}");
  FUN_140056680(param_1 + 0x12,
                L"{SavedDir}/NiagaraBaker/{AssetName}_{OutputName}/Frame_{FrameIndex}.png");
  return param_1;
}



// FUNCTION 145bd001e FUN_145bd001e body=40 status=ok
// SIG undefined FUN_145bd001e(void)

undefined8 FUN_145bd001e(undefined8 param_1,int param_2)

{
  FUN_145bd0046();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bd0046 FUN_145bd0046 body=119 status=ok
// SIG undefined FUN_145bd0046(void)

void FUN_145bd0046(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad93bb0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ad92a20;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145bd00be FUN_145bd00be body=40 status=ok
// SIG undefined FUN_145bd00be(void)

undefined8 FUN_145bd00be(undefined8 param_1,int param_2)

{
  FUN_145bd00e6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bd00e6 FUN_145bd00e6 body=119 status=ok
// SIG undefined FUN_145bd00e6(void)

void FUN_145bd00e6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b581820;
  param_1[6] = &PTR_FUN_14b581af0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_14114f6be(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145bd015e FUN_145bd015e body=132 status=ok
// SIG undefined FUN_145bd015e(void)

void FUN_145bd015e(longlong param_1,int param_2)

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



// FUNCTION 145bd01e2 FUN_145bd01e2 body=694 status=ok
// SIG undefined FUN_145bd01e2(void)

void FUN_145bd01e2(longlong param_1,longlong *param_2,undefined8 *param_3,double *param_4,
                  double *param_5,double *param_6,float param_7,undefined8 *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_198 [40];
  undefined **local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  float local_134;
  double local_130;
  double dStack_128;
  undefined4 local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  double local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulonglong local_c0;
  undefined *local_b8;
  undefined1 local_b0 [48];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if ((((param_2 != (longlong *)0x0) && (0.0 < *param_4)) && (0.0 < param_4[1])) &&
     (*(longlong *)(param_1 + 0x2e0) != 0)) {
    FUN_1414cf3d0(param_2);
    if ((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)DAT_14ca85550 * 0x3c + 6) & 0x10) != 0) {
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x2e0) + 0x58);
      uVar8 = 0x9e80;
      if (plVar5 != (longlong *)0x0) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x10))();
        if (*plVar5 != 0) {
          puVar6 = (undefined8 *)
                   (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x2e0) + 0x58) + 0x10))();
          lVar7 = (**(code **)(*(longlong *)*puVar6 + 8))();
          uVar8 = (ulonglong)*(byte *)(lVar7 + 0x33) << 0x1d | 0x9e80;
        }
      }
      local_170 = &local_b8;
      local_b8 = &DAT_14cae9e78;
      local_168 = CONCAT44(local_168._4_4_,1);
      local_c0 = uVar8;
      FUN_1408ecec8(param_2);
      FUN_14588b8d6(local_b0);
    }
    dVar1 = param_5[1];
    dVar2 = param_6[1];
    dVar3 = *param_5;
    dVar4 = *param_6;
    local_f0 = (**(code **)(*param_2 + 0x2f0))(param_2);
    local_168 = *param_3;
    uStack_160 = param_3[1];
    local_148 = 0;
    local_158 = 0;
    local_150 = 0;
    local_170 = &PTR_FUN_14aaeb770;
    local_130 = *param_4;
    dStack_128 = param_4[1];
    local_120 = 0x3f800000;
    local_118 = *param_5;
    dStack_110 = param_5[1];
    local_f8 = 0;
    local_e0 = (double)param_7;
    local_e8 = 0;
    local_d8 = 0;
    local_d0 = *param_8;
    uStack_c8 = param_8[1];
    local_140 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x3a)];
    local_13c = (&DAT_14c758c60)[*(byte *)(param_1 + 0x39)];
    local_138 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x38)];
    local_134 = (float)*(byte *)(param_1 + 0x3b) * 0.003921569;
    lVar7 = *(longlong *)(param_1 + 0x2e0);
    local_108 = dVar3 + dVar4;
    local_100 = dVar1 + dVar2;
    FUN_1405054c0(&local_170,lVar7);
    if (*(int *)(lVar7 + 0xac) == 1) {
      FUN_14376e4da(lVar7,0);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd049a FUN_145bd049a body=44 status=ok
// SIG undefined FUN_145bd049a(void)

void FUN_145bd049a(undefined8 param_1,longlong param_2)

{
  FUN_145bd04c6();
  if (param_2 != 0) {
    FUN_145bd0d64(param_1);
    return;
  }
  return;
}



// FUNCTION 145bd04c6 FUN_145bd04c6 body=39 status=ok
// SIG undefined FUN_145bd04c6(void)

void FUN_145bd04c6(longlong *param_1)

{
  FUN_145bd0836();
  FUN_145bd04ee(param_1);
                    /* WARNING: Could not recover jumptable at 0x000145bd04e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1018))(param_1);
  return;
}



// FUNCTION 145bd04ee FUN_145bd04ee body=838 status=ok
// SIG undefined FUN_145bd04ee(void)

void FUN_145bd04ee(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  undefined4 local_6c;
  undefined **local_68 [3];
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = FUN_14497e828();
  if (lVar2 == 0) goto LAB_145bd06c4;
  lVar3 = FUN_144a79464();
  if (((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
       != lVar3 + 0x30)) || (*(longlong *)(param_1 + 0x398) == 0)) goto LAB_145bd06c4;
  lVar4 = FUN_140082f10();
  lVar3 = *(longlong *)(param_1 + 0x398);
  if ((((lVar3 == 0) || (lVar4 == 0)) ||
      ((lVar5 = *(longlong *)(lVar3 + 0x10), lVar5 == 0 ||
       ((*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
         lVar4 + 0x30)))))) || (lVar2 = FUN_1414cf3d2(lVar2), lVar2 == 0)) goto LAB_145bd06c4;
  lVar5 = FUN_144a7ba4c(param_1);
  lVar4 = lVar3 + 0x3a0;
  if (lVar5 == 0) {
LAB_145bd05d0:
    if ((&DAT_149fc1b6e)[*(byte *)(lVar3 + 0x3b8)] == '\x01') {
      if ((*(longlong **)(lVar3 + 0x3a8) != (longlong *)0x0) &&
         (cVar1 = (**(code **)(**(longlong **)(lVar3 + 0x3a8) + 0x28))(), cVar1 != '\0')) {
LAB_145bd07e6:
        FUN_140b6e764(lVar2,local_68,lVar4);
        local_6c = local_68[0]._0_4_;
        if (-1 < (short)local_68[0]) goto LAB_145bd061c;
      }
    }
    else if ((*(uint *)(lVar3 + 0x3a8) & 0xffffff) != 0) goto LAB_145bd07e6;
    FUN_1413d94b2(lVar2,local_68,lVar3);
    local_6c = local_68[0]._0_4_;
    if ((short)local_68[0] < 0) goto LAB_145bd06c4;
  }
  else {
    FUN_1409845a0(lVar2,local_68,lVar5);
    local_6c = local_68[0]._0_4_;
    if ((short)local_68[0] < 0) goto LAB_145bd05d0;
  }
LAB_145bd061c:
  lVar6 = FUN_140d1732e(lVar2,&local_6c);
  if (lVar6 != param_1) {
    FUN_1414cf3e6(lVar2,local_68,&local_6c,param_1);
    local_6c = local_68[0]._0_4_;
  }
  lVar6 = FUN_140d71416(lVar2,&local_6c);
  if (lVar6 != lVar3) {
    FUN_1413d95f0(lVar2,local_68,&local_6c,lVar3);
    local_6c = local_68[0]._0_4_;
  }
  if ((lVar5 != 0) && (lVar6 = FUN_140bccd38(lVar2,&local_6c), lVar6 != lVar5)) {
    FUN_1414cf5f6(lVar2,local_68,&local_6c,lVar5);
    local_6c = local_68[0]._0_4_;
  }
  if ((&DAT_149fc1b6e)[*(byte *)(lVar3 + 0x3b8)] == '\x01') {
    if ((*(longlong **)(lVar3 + 0x3a8) == (longlong *)0x0) ||
       (cVar1 = (**(code **)(**(longlong **)(lVar3 + 0x3a8) + 0x28))(), cVar1 == '\0'))
    goto LAB_145bd06c4;
  }
  else if ((*(uint *)(lVar3 + 0x3a8) & 0xffffff) == 0) goto LAB_145bd06c4;
  local_78 = 0;
  FUN_1413d9c32(lVar2,local_68,&local_6c);
  cVar1 = FUN_140ba41f1(local_68,lVar4);
  local_68[0] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])();
  if (cVar1 == '\0') {
    local_88 = 1;
    FUN_1414c1098(lVar2,local_68,&local_6c,lVar4);
    local_6c = local_68[0]._0_4_;
    FUN_1413d927c(lVar2,local_68,&local_6c);
  }
LAB_145bd06c4:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bd0836 FUN_145bd0836 body=679 status=ok
// SIG undefined FUN_145bd0836(void)

void FUN_145bd0836(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_145bd0ae0();
  if (param_2[6] != 0) {
    lVar3 = FUN_144a79cc8();
    lVar4 = FUN_144a79cc8(param_1);
    if (lVar3 == lVar4) {
      *(undefined8 *)(param_2[6] + 0x430) = 0;
    }
  }
  if (param_2 != (longlong *)0x0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x86] = (longlong)param_2;
  if ((param_1 != (longlong *)0x0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(param_1);
  }
  param_2[6] = (longlong)param_1;
  lVar3 = FUN_1447210f0(param_1);
  lVar3 = *(longlong *)(lVar3 + 0x38);
  iVar2 = (int)param_1[0x9e];
  if ((lVar3 != 0 && 0xa27 < iVar2) && (*(longlong *)(lVar3 + 0xf0) != 0)) {
    iVar5 = *(int *)(lVar3 + 200);
    if (iVar2 < *(int *)(lVar3 + 200)) {
      iVar5 = iVar2;
    }
    iVar2 = 0x708;
    if (0x708 < iVar5) {
      iVar2 = iVar5;
    }
    *(int *)(*(longlong *)(lVar3 + 0xf0) + 0x38) = iVar2;
    *(int *)(param_1[0x86] + 0x38) = iVar2;
  }
  if (param_2 != (longlong *)0x0) {
    lVar3 = FUN_1449db7f2();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      *(undefined1 *)((longlong)param_1 + 0x7ac) = 1;
      (**(code **)(*param_2 + 0x2e8))(param_2);
      (**(code **)(*param_1 + 0xea8))(param_1);
      goto LAB_145bd090d;
    }
    lVar3 = FUN_140496b24();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_2);
      }
      bVar1 = DAT_14c950c29;
      param_1[0xc1] = (longlong)param_2;
      if ((param_1 != (longlong *)0x0) && ((bVar1 & 1) != 0)) {
        FUN_1456cec3c(param_1);
      }
      param_2[0x13] = (longlong)param_1;
      FUN_1405f18a8(param_1);
      FUN_145a98e96(param_1);
      if (*(int *)(param_1[0xc1] + 0x1c0) == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = *(undefined2 **)(param_1[0xc1] + 0x1b8);
      }
      FUN_140245d8a(local_88,0,puVar6,0);
      lVar3 = FUN_14045d4ce(local_88,PTR_u_SeamlessNetTransition_14c761ec8,0);
      if (lVar3 != 0) {
        (**(code **)(*param_1 + 0xef8))(param_1,0);
      }
      FUN_141238aee(local_88);
      goto LAB_145bd090d;
    }
  }
  param_1[0xc1] = 0;
LAB_145bd090d:
  (**(code **)(*param_1 + 0xcd0))(param_1);
  (**(code **)(*param_1 + 0xea0))(param_1);
  FUN_145bd0ade();
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd0ade FUN_145bd0ade body=1 status=ok
// SIG undefined FUN_145bd0ade(void)

void FUN_145bd0ade(void)

{
  return;
}



// FUNCTION 145bd0ae0 FUN_145bd0ae0 body=19 status=ok
// SIG undefined FUN_145bd0ae0(void)

void FUN_145bd0ae0(void)

{
  if (DAT_14c99f930 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145bd0af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*DAT_14c99f930)();
  return;
}



// FUNCTION 145bd0af4 FUN_145bd0af4 body=113 status=ok
// SIG undefined FUN_145bd0af4(void)

void FUN_145bd0af4(longlong *param_1)

{
  longlong *plVar1;
  
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if ((param_1[0x79] == (ulonglong)DAT_14c893048) && (param_1[0xf4] == 0)) {
    (**(code **)(*param_1 + 0xe68))(param_1);
  }
  plVar1 = (longlong *)param_1[0x86];
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145bd0b5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 145bd0b68 FUN_145bd0b68 body=101 status=ok
// SIG undefined FUN_145bd0b68(void)

void FUN_145bd0b68(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1[0x7a] != 0) && ((char)param_1[0x2f] == '\x03')) {
    cVar1 = (**(code **)(*param_1 + 0xe90))(param_1);
    if (cVar1 == '\0') {
      FUN_1413ef136(param_1);
    }
  }
  (**(code **)(*param_1 + 0xe88))(param_1);
  uVar2 = (**(code **)(*param_1 + 0xe80))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000145bd0ba7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe78))(param_1,uVar2,*(code **)(*param_1 + 0xe78));
  return;
}



// FUNCTION 145bd0bce FUN_145bd0bce body=167 status=ok
// SIG undefined FUN_145bd0bce(void)

void FUN_145bd0bce(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[0xf4] != 0) {
    lVar1 = (**(code **)(*param_1 + 0x6b8))();
    if (lVar1 == param_1[0xf4]) {
      local_20 = 0;
      local_1c = 1;
      local_18 = 0x40000000;
      (**(code **)(*param_1 + 0xe38))(param_1,param_1);
    }
    uVar2 = FUN_1447210f0(param_1);
    FUN_1412f3774(uVar2,param_1[0xf4],0,1);
    (**(code **)(*param_1 + 0xe78))(param_1,0);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd0c76 FUN_145bd0c76 body=238 status=ok
// SIG undefined FUN_145bd0c76(void)

void FUN_145bd0c76(longlong *param_1,longlong *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (param_1[0x79] != (ulonglong)DAT_14c893048) {
    return;
  }
  (**(code **)(*param_1 + 0x670))(param_1,param_1[0xf4]);
  if ((param_2 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    param_1[0xf4] = (longlong)param_2;
    if (param_2 == (longlong *)0x0) {
      param_2 = (longlong *)param_1[0x7a];
      (**(code **)(*param_1 + 0x658))(param_1,param_2);
      (**(code **)(*param_1 + 0x668))(param_1,param_2);
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xe40);
      if (param_2 == (longlong *)0x0) {
        param_2 = param_1;
      }
      goto LAB_145bd0d14;
    }
  }
  else {
    FUN_1456cec3c(param_2);
    param_1[0xf4] = (longlong)param_2;
  }
  (**(code **)(*param_1 + 0x658))(param_1,param_2);
  (**(code **)(*param_1 + 0x668))(param_1,param_2);
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xe40);
LAB_145bd0d14:
                    /* WARNING: Could not recover jumptable at 0x000145bd0d1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}



// FUNCTION 145bd0d64 FUN_145bd0d64 body=2180 status=ok
// SIG undefined FUN_145bd0d64(void)

void FUN_145bd0d64(longlong *param_1)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  code *local_a0;
  code **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined4 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = FUN_144a7ba4c();
  if (lVar4 == 0) goto LAB_145bd1471;
  lVar5 = FUN_14030d4a0();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
      lVar5 + 0x30)) goto LAB_145bd1471;
  local_a8 = param_1 + 0x1b3;
  *(undefined4 *)local_a8 = *(undefined4 *)(lVar4 + 0x338);
  lVar5 = *(longlong *)(lVar4 + 0x340);
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *(longlong *)(lVar4 + 0x340);
    }
  }
  param_1[0x1b4] = lVar5;
  cVar2 = (**(code **)(*param_1 + 0x6c8))(param_1);
  if (cVar2 != '\0') {
    lVar4 = FUN_1447210f0(param_1);
    if (lVar4 != 0) {
      if (*(longlong *)(lVar4 + 0x178) != 0) {
        lVar5 = FUN_140cbc144();
        if ((((*(longlong *)(lVar4 + 0x178) != 0) && (lVar5 != 0)) &&
            (lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0x178) + 0x10), lVar7 != 0)) &&
           ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar7 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
             lVar5 + 0x30)))) {
          FUN_145bd169a(param_1);
          goto LAB_145bd0e75;
        }
      }
      if (param_1[0x4fa] == 0) {
        local_60 = FUN_145bd169a;
        local_58 = 0;
        FUN_145bd2272(lVar4 + 0x800,&local_50,param_1);
        param_1[0x4fa] = local_50;
      }
    }
  }
LAB_145bd0e75:
  uVar6 = FUN_144a7ba4c(param_1);
  lVar4 = FUN_1404960a8(uVar6);
  if (lVar4 != 0) {
    if (param_1[0x792] == 0) {
      local_60 = (code *)0x0;
      local_58 = 0;
      FUN_1446efa72(&local_60,0,3,0x10);
      pcVar1 = local_60;
      local_58 = 3;
      *(undefined ***)local_60 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      *(longlong *)(local_60 + 0x10) = lVar7;
      *(undefined ***)local_60 = &PTR_FUN_14b994e60;
      *(undefined8 *)(local_60 + 0x18) = 0;
      FUN_14485c47a(local_60 + 0x18,param_1);
      *(undefined4 *)(pcVar1 + 0x28) = 0;
      *(undefined1 **)(pcVar1 + 0x20) = &LAB_145811c4a;
      FUN_1446ddc76(&local_68,"FOakUIEvent_CinematicSkip",1);
      FUN_140391af6(lVar4,&local_50,local_68,&local_60);
      param_1[0x796] = local_50;
      FUN_1449db362(&local_60);
      local_60 = (code *)0x0;
      local_58 = 0;
      FUN_1446efa72(&local_60,0,3,0x10);
      pcVar1 = local_60;
      local_58 = 3;
      *(undefined ***)local_60 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      *(longlong *)(local_60 + 0x10) = lVar7;
      *(undefined ***)local_60 = &PTR_FUN_14b994e60;
      *(undefined8 *)(local_60 + 0x18) = 0;
      FUN_14485c47a(local_60 + 0x18,param_1);
      *(undefined4 *)(pcVar1 + 0x28) = 0;
      *(code **)(pcVar1 + 0x20) = FUN_145811d18;
      FUN_1446ddc76(&local_70,"PauseGame_Start",1);
      FUN_140391af6(lVar4,&local_50,local_70,&local_60);
      param_1[0x792] = local_50;
      FUN_1449db362(&local_60);
      local_60 = (code *)0x0;
      local_58 = 0;
      FUN_1446efa72(&local_60,0,3,0x10);
      pcVar1 = local_60;
      local_58 = 3;
      *(undefined ***)local_60 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      *(longlong *)(local_60 + 0x10) = lVar7;
      *(undefined ***)local_60 = &PTR_FUN_14b994e60;
      *(undefined8 *)(local_60 + 0x18) = 0;
      FUN_14485c47a(local_60 + 0x18,param_1);
      *(undefined4 *)(pcVar1 + 0x28) = 0;
      *(code **)(pcVar1 + 0x20) = FUN_14598aba0;
      FUN_1446ddc76(&local_78,"PauseGame_End",1);
      FUN_140391af6(lVar4,&local_50,local_78,&local_60);
      param_1[0x793] = local_50;
      FUN_1449db362(&local_60);
      local_60 = FUN_145c0c70c;
      local_58 = 0;
      FUN_145bd1778(&local_50,param_1,&local_60);
      param_1[0x794] = local_50;
      local_60 = FUN_1458662e8;
      local_58 = 0;
      FUN_145bd1872(&local_50,param_1,&local_60);
    }
    if (param_1[0x721] == 0) {
      local_60 = (code *)0x0;
      local_58 = 0;
      FUN_1446efa72(&local_60,0,3,0x10);
      pcVar1 = local_60;
      local_58 = 3;
      *(undefined ***)local_60 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      *(longlong *)(local_60 + 0x10) = lVar7;
      *(undefined ***)local_60 = &PTR_FUN_14b994e60;
      *(undefined8 *)(local_60 + 0x18) = 0;
      FUN_14485c47a(local_60 + 0x18,param_1);
      *(undefined1 **)(pcVar1 + 0x20) = &LAB_146630be8;
      *(undefined4 *)(pcVar1 + 0x28) = 0;
      FUN_1446ddc76(&local_80,"FOakUIEvent_WidgetDeactivated",1);
      FUN_140391af6(lVar4,&local_50,local_80,&local_60);
      param_1[0x721] = local_50;
      FUN_1449db362(&local_60);
    }
    if (param_1[0x797] == 0) {
      local_60 = (code *)0x0;
      local_58 = 0;
      FUN_1446efa72(&local_60,0,3,0x10);
      pcVar1 = local_60;
      local_58 = 3;
      *(undefined ***)local_60 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      *(longlong *)(local_60 + 0x10) = lVar7;
      *(undefined ***)local_60 = &PTR_FUN_14b994e60;
      *(undefined8 *)(local_60 + 0x18) = 0;
      FUN_14485c47a(local_60 + 0x18,param_1);
      *(undefined4 *)(pcVar1 + 0x28) = 0;
      *(undefined1 **)(pcVar1 + 0x20) = &LAB_148db8562;
      FUN_1446ddc76(&local_88,"ExpandedTutorial_PauseGame_Start",1);
      FUN_140391af6(lVar4,&local_50,local_88,&local_60);
      param_1[0x797] = local_50;
      FUN_1449db362(&local_60);
      local_60 = (code *)0x0;
      local_58 = 0;
      FUN_1446efa72(&local_60,0,3,0x10);
      pcVar1 = local_60;
      local_58 = 3;
      *(undefined ***)local_60 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      *(longlong *)(local_60 + 0x10) = lVar7;
      *(undefined ***)local_60 = &PTR_FUN_14b994e60;
      *(undefined8 *)(local_60 + 0x18) = 0;
      FUN_14485c47a(local_60 + 0x18,param_1);
      *(undefined1 **)(pcVar1 + 0x20) = &LAB_148db8574;
      *(undefined4 *)(pcVar1 + 0x28) = 0;
      FUN_1446ddc76(&local_90,"ExpandedTutorial_PauseGame_End",1);
      FUN_140391af6(lVar4,&local_50,local_90,&local_60);
      param_1[0x798] = local_50;
      FUN_1449db362(&local_60);
    }
    FUN_145bd1f3a(param_1);
  }
  local_98 = &local_60;
  local_a0 = FUN_1441f5a6e;
  FUN_145ac099e(param_1);
  FUN_145bd162e(param_1 + 0x785,param_1);
  lVar4 = FUN_144a7ba4c(param_1);
  if (lVar4 != 0) {
    lVar4 = FUN_1403ca91c(lVar4);
    if (lVar4 != 0) {
      FUN_145bd15ea(lVar4);
    }
  }
  plVar8 = (longlong *)FUN_14497e828(param_1);
  if (plVar8 != (longlong *)0x0) {
    lVar4 = FUN_1403ca142();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar8[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      if (*(code **)(*plVar8 + 0x498) == (code *)&LAB_14015c36e) {
        cVar2 = (char)plVar8[0x42];
      }
      else {
        cVar2 = (**(code **)(*plVar8 + 0x498))(plVar8);
      }
      if (cVar2 == '\b') {
        FUN_1414241fa(local_a8);
      }
      cVar2 = FUN_14016169c(param_1,0);
      if (cVar2 != '\0') {
        FUN_143eb1d58(local_a8);
        bVar3 = (**(code **)(*plVar8 + 0x498))(plVar8);
        if ((bVar3 < 6) && (*(char *)((longlong)plVar8 + 0x474) == '\0')) {
          FUN_1403ca8ec(local_a8,&DAT_14cbd9310);
        }
      }
      FUN_145bd15f4(plVar8);
    }
  }
LAB_145bd1471:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd15ea FUN_145bd15ea body=9 status=ok
// SIG undefined FUN_145bd15ea(void)

void FUN_145bd15ea(longlong param_1)

{
  FUN_1447f69b6(param_1 + 0x30);
  return;
}



// FUNCTION 145bd15f4 FUN_145bd15f4 body=57 status=ok
// SIG undefined FUN_145bd15f4(void)

void FUN_145bd15f4(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x498))();
  if ((cVar1 == '\x05') && (*(char *)((longlong)param_1 + 0x531) == '\0')) {
    uVar2 = FUN_1414b0848(param_1);
    FUN_14572e93c(uVar2);
    return;
  }
  return;
}



// FUNCTION 145bd162e FUN_145bd162e body=107 status=ok
// SIG undefined FUN_145bd162e(void)

void FUN_145bd162e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x28) = param_2;
  plVar2 = (longlong *)FUN_140161f86(param_1);
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa0));
  *(int *)(lVar1 + 0x98) = *(int *)(lVar1 + 0x98) + 1;
  FUN_145bd196c(lVar1);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa0));
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 145bd169a FUN_145bd169a body=206 status=ok
// SIG undefined FUN_145bd169a(void)

void FUN_145bd169a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    lVar1 = FUN_140cbc144();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      if (1 < *(int *)(param_2 + 0x440)) {
        FUN_145bd1ac8(param_1 + 0xd98);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
      if (*(longlong *)(param_1 + 0x27d8) == 0) {
        local_38 = FUN_146146cb0;
        local_30 = 0;
        FUN_145bd1e3a(param_2 + 0x410,&local_28,param_1);
        *(undefined8 *)(param_1 + 0x27d8) = local_28;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd1778 FUN_145bd1778 body=248 status=ok
// SIG undefined FUN_145bd1778(void)

undefined8 FUN_145bd1778(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_14a8bcc20;
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
  *local_40 = &PTR_FUN_14b994ed0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1414cf8c0(&DAT_14cadbeb0,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd1872 FUN_145bd1872 body=248 status=ok
// SIG undefined FUN_145bd1872(void)

undefined8 FUN_145bd1872(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  *local_40 = &PTR_LAB_14a8bcd00;
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
  *local_40 = &PTR_FUN_14b994f40;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_141211dc4(&DAT_14cadbec8,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd196c FUN_145bd196c body=347 status=ok
// SIG undefined FUN_145bd196c(void)

void FUN_145bd196c(char *param_1)

{
  int iVar1;
  
  if (*param_1 == '\0') {
    if (*(int *)(param_1 + 4) == 0) {
      iVar1 = 1;
      goto LAB_145bd1a3a;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 4) + 1;
LAB_145bd1a3a:
    *param_1 = '\0';
    *(int *)(param_1 + 4) = iVar1;
  }
  if (param_1[8] == '\0') {
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar1 = 1;
      goto LAB_145bd1a4a;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc) + 1;
LAB_145bd1a4a:
    param_1[8] = '\0';
    *(int *)(param_1 + 0xc) = iVar1;
  }
  if (param_1[0x10] == '\0') {
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar1 = 1;
      goto LAB_145bd1a5b;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x14) + 1;
LAB_145bd1a5b:
    param_1[0x10] = '\0';
    *(int *)(param_1 + 0x14) = iVar1;
  }
  if (param_1[0x18] == '\0') {
    if (*(int *)(param_1 + 0x1c) == 0) {
      iVar1 = 1;
      goto LAB_145bd1a6c;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c) + 1;
LAB_145bd1a6c:
    param_1[0x18] = '\0';
    *(int *)(param_1 + 0x1c) = iVar1;
  }
  if (param_1[0x20] == '\0') {
    if (*(int *)(param_1 + 0x24) == 0) {
      iVar1 = 1;
      goto LAB_145bd1a7d;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x24) + 1;
LAB_145bd1a7d:
    param_1[0x20] = '\0';
    *(int *)(param_1 + 0x24) = iVar1;
  }
  if (param_1[0x28] == '\0') {
    if (*(int *)(param_1 + 0x2c) != 0) goto LAB_145bd19f2;
    iVar1 = 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2c) + 1;
  }
  param_1[0x28] = '\0';
  *(int *)(param_1 + 0x2c) = iVar1;
LAB_145bd19f2:
  FUN_1414cfa40(param_1 + 0x30,&DAT_149eda618);
  FUN_1414cfa40(param_1 + 0x3c,&DAT_149eda618);
  FUN_1414cfa40(param_1 + 0x54,&DAT_149eda618);
  if (*(int *)(param_1 + 0x60) == -1) {
    if (*(int *)(param_1 + 100) != 0) {
      return;
    }
    iVar1 = 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 100) + 1;
  }
  param_1[0x60] = -1;
  param_1[0x61] = -1;
  param_1[0x62] = -1;
  param_1[99] = -1;
  *(int *)(param_1 + 100) = iVar1;
  return;
}



// FUNCTION 145bd1ac8 FUN_145bd1ac8 body=322 status=ok
// SIG undefined FUN_145bd1ac8(void)

void FUN_145bd1ac8(int *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  undefined1 local_50 [40];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*param_1 != 0) && (*(longlong **)(param_1 + 2) != (longlong *)0x0)) {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 2) + 0x180))();
    lVar5 = FUN_1414cfaa6(uVar4);
    if (lVar5 != 0) {
      lVar6 = FUN_140cbc144();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30)) {
        FUN_14000bbd8(local_50,lVar5 + 0x438,0);
        FUN_145bd1d66(&local_60,local_50);
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_58 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_58)(local_58);
            LOCK();
            piVar2 = (int *)((longlong)local_58 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_58 + 0x10))(local_58);
            }
          }
        }
        if (local_60 != 0) {
          uVar3 = *(uint *)(local_60 + 0x2f8);
          if ((ulonglong)uVar3 != 0) {
            lVar5 = 0;
            do {
              FUN_1403ca8ec(param_1,*(longlong *)(local_60 + 0x2f0) + lVar5);
              lVar5 = lVar5 + 8;
            } while ((ulonglong)uVar3 << 3 != lVar5);
          }
          uVar3 = *(uint *)(local_60 + 0x318);
          if ((ulonglong)uVar3 != 0) {
            lVar5 = 0;
            do {
              FUN_140c125e6(param_1,*(longlong *)(local_60 + 0x310) + lVar5);
              lVar5 = lVar5 + 8;
            } while ((ulonglong)uVar3 << 3 != lVar5);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bd1c0c FUN_145bd1c0c body=345 status=ok
// SIG undefined FUN_145bd1c0c(void)

void FUN_145bd1c0c(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  undefined1 local_50 [40];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = FUN_1447210f0();
  if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x178), lVar5 != 0)) {
    lVar6 = FUN_140cbc144();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      FUN_14000bbd8(local_50,lVar5 + 0x438,0);
      FUN_145bd1d66(&local_60,local_50);
      lVar5 = local_60;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_58 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar1 = (int *)((longlong)local_58 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_58 + 0x10))(local_58);
          }
        }
      }
      goto LAB_145bd1ca9;
    }
  }
  lVar5 = 0;
LAB_145bd1ca9:
  if (*(longlong *)(param_1 + 0x508) != 0) {
    lVar6 = FUN_140dd10c4();
    plVar3 = *(longlong **)(param_1 + 0x508);
    if ((((plVar3 != (longlong *)0x0) && (lVar6 != 0)) && (lVar4 = plVar3[2], lVar4 != 0)) &&
       (((*(int *)(lVar6 + 0x38) <= *(int *)(lVar4 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) &&
        ((lVar5 != 0 && (uVar2 = *(uint *)(lVar5 + 0x338), (ulonglong)uVar2 != 0)))))) {
      lVar6 = 0;
      do {
        (**(code **)(*plVar3 + 0x318))(plVar3,*(longlong *)(lVar5 + 0x330) + lVar6);
        lVar6 = lVar6 + 8;
      } while ((ulonglong)uVar2 << 3 != lVar6);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bd1d66 FUN_145bd1d66 body=211 status=ok
// SIG undefined FUN_145bd1d66(void)

undefined8 * FUN_145bd1d66(undefined8 *param_1,uint *param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (DAT_14cb7de20 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (*(int *)(DAT_14cb7de20 + 0x348) != *(int *)(DAT_14cb7de20 + 0x374)) {
      lVar1 = DAT_14cb7de20 + 0x378;
      if (*(longlong *)(DAT_14cb7de20 + 0x380) != 0) {
        lVar1 = *(longlong *)(DAT_14cb7de20 + 0x380);
      }
      iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(DAT_14cb7de20 + 0x388) - 1U & *param_2) * 4);
      if (iVar2 != -1) {
        do {
          lVar1 = *(longlong *)(DAT_14cb7de20 + 0x340) + (longlong)iVar2 * 0x40;
          if (*(uint *)(*(longlong *)(DAT_14cb7de20 + 0x340) + (longlong)iVar2 * 0x40) == *param_2)
          {
            if ((lVar1 != 0) && (lVar1 != -0x28)) {
              *param_1 = *(undefined8 *)(lVar1 + 0x28);
              lVar1 = *(longlong *)(lVar1 + 0x30);
              param_1[1] = lVar1;
              if (lVar1 != 0) {
                LOCK();
                *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
                UNLOCK();
              }
              goto LAB_145bd1e00;
            }
            break;
          }
          iVar2 = *(int *)(lVar1 + 0x38);
        } while (iVar2 != -1);
      }
    }
    FUN_145bd2372(DAT_14cb7de20,param_1,param_2);
  }
LAB_145bd1e00:
  if (*(longlong *)(param_2 + 6) != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 145bd1e3a FUN_145bd1e3a body=254 status=ok
// SIG undefined FUN_145bd1e3a(void)

undefined8
FUN_145bd1e3a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e063e0;
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
  *local_48 = &PTR_FUN_14b994fb0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14134bd86(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd1f3a FUN_145bd1f3a body=822 status=ok
// SIG undefined FUN_145bd1f3a(void)

void FUN_145bd1f3a(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = FUN_144a7ba4c();
  lVar4 = FUN_1404960a8(uVar3);
  if (lVar4 != 0) {
    if (*(longlong *)(param_1 + 0x27e0) == 0) {
      local_40 = (undefined8 *)0x0;
      local_38 = 0;
      FUN_1446efa72(&local_40,0,3,0x10);
      puVar1 = local_40;
      local_38 = 3;
      *local_40 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_40[2] = lVar5;
      *local_40 = &PTR_FUN_14b994e60;
      local_40[3] = 0;
      FUN_14485c47a(local_40 + 3,param_1);
      puVar1[4] = FUN_148db87ea;
      *(undefined4 *)(puVar1 + 5) = 0;
      FUN_1446ddc76(&local_48,"FGbxUIEvent_CSP_Trigger",1);
      FUN_140391af6(lVar4,&local_30,local_48,&local_40);
      *(undefined8 *)(param_1 + 0x27e0) = local_30;
      FUN_1449db362(&local_40);
    }
    if (*(longlong *)(param_1 + 0x27e8) == 0) {
      local_40 = (undefined8 *)0x0;
      local_38 = 0;
      FUN_1446efa72(&local_40,0,3,0x10);
      puVar1 = local_40;
      local_38 = 3;
      *local_40 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_40[2] = lVar5;
      *local_40 = &PTR_FUN_14b994e60;
      local_40[3] = 0;
      FUN_14485c47a(local_40 + 3,param_1);
      puVar1[4] = &LAB_1461afc12;
      *(undefined4 *)(puVar1 + 5) = 0;
      FUN_1446ddc76(&local_50,"FGbxUIEvent_CSP_RegisterWidget",1);
      FUN_140391af6(lVar4,&local_30,local_50,&local_40);
      *(undefined8 *)(param_1 + 0x27e8) = local_30;
      FUN_1449db362(&local_40);
    }
    if (*(longlong *)(param_1 + 0x27f0) == 0) {
      local_40 = (undefined8 *)0x0;
      local_38 = 0;
      FUN_1446efa72(&local_40,0,3,0x10);
      puVar1 = local_40;
      local_38 = 3;
      *local_40 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_40[2] = lVar5;
      *local_40 = &PTR_FUN_14b994e60;
      local_40[3] = 0;
      FUN_14485c47a(local_40 + 3,param_1);
      puVar1[4] = FUN_14114965e;
      *(undefined4 *)(puVar1 + 5) = 0;
      FUN_1446ddc76(&local_58,"FGbxUIEvent_CSP_UnregisterWidget",1);
      FUN_140391af6(lVar4,&local_30,local_58,&local_40);
      *(undefined8 *)(param_1 + 0x27f0) = local_30;
      FUN_1449db362(&local_40);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd2272 FUN_145bd2272 body=254 status=ok
// SIG undefined FUN_145bd2272(void)

undefined8
FUN_145bd2272(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b982140;
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
  *local_48 = &PTR_FUN_14b994df0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1406f5a84(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd2372 FUN_145bd2372 body=745 status=ok
// SIG undefined FUN_145bd2372(void)

longlong * FUN_145bd2372(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined8 unaff_RBP;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *plStack_90;
  longlong local_88 [3];
  longlong *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88[0] = 0;
  local_88[1] = 0;
  cVar3 = (**(code **)(*param_1 + 0x418))();
  if (cVar3 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    goto LAB_145bd2558;
  }
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  cVar3 = FUN_1446e9750(param_1,&local_98,local_88,0);
  if (cVar3 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    plVar4 = (longlong *)FUN_145bd2694(&local_98);
    if (plVar4 == (longlong *)0x0) {
LAB_145bd259a:
      uVar7 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
      plVar4 = (longlong *)FUN_145bd265c();
    }
    else {
      lVar5 = FUN_145bd265c();
      if (((lVar5 == 0) || ((int)plVar4[7] < *(int *)(lVar5 + 0x38))) ||
         (*(longlong *)(plVar4[6] + (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30))
      goto LAB_145bd259a;
      uVar7 = 0;
    }
    lVar5 = FUN_14001cc68((longlong)
                          (int)(-*(int *)((longlong)plVar4 + 0x5c) &
                               ((int)plVar4[0xb] + *(int *)((longlong)plVar4 + 0x5c)) - 1U));
    (**(code **)(*plVar4 + 0x2e8))(plVar4,lVar5,1);
    plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_14b403ea0;
    plVar6[2] = lVar5;
    FUN_1446e7478(&local_98,lVar5,plVar4,0);
    FUN_1447715ec(lVar5 + 0x3c0,param_3);
    FUN_1414cfad4(lVar5);
    FUN_1414cfbea(lVar5,&local_98,uVar7);
    if (plVar6 == (longlong *)0x0) {
      local_a0 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      local_a0 = plVar6;
    }
    local_70 = &local_a8;
    local_a8 = lVar5;
    local_88[2] = param_3;
    FUN_145bd27a2(param_1 + 0x68,local_64);
    plVar4 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (plVar6 == (longlong *)0x0) {
      *param_2 = lVar5;
      param_2[1] = 0;
    }
    else {
      LOCK();
      plVar4 = plVar6 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      *param_2 = lVar5;
      param_2[1] = (longlong)plVar6;
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      plVar4 = plVar6 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  }
  plVar4 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_90 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_145bd2558:
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd265c FUN_145bd265c body=55 status=ok
// SIG undefined FUN_145bd265c(void)

void FUN_145bd265c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5e600 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5e600 = FUN_140002ddd(FUN_1464e194b,uVar1,L"GbxGameModeConfig");
  }
  return;
}



// FUNCTION 145bd2694 FUN_145bd2694 body=268 status=ok
// SIG undefined FUN_145bd2694(void)

undefined8 FUN_145bd2694(undefined8 param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined2 *local_40;
  int local_38;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = DAT_14cb7de58;
  local_50 = DAT_14cb7de50;
  FUN_1448075d0(&local_40);
  puVar2 = (undefined8 *)FUN_144a06846(param_1,&local_40);
  pbVar1 = (byte *)*puVar2;
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(pbVar1 + 8);
  }
  FUN_1446ddc76(&local_50,uVar3,1);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1400021e4(&local_50,&local_40);
  puVar4 = local_40;
  if (local_38 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  uVar3 = FUN_1446f4bba();
  local_58 = 0;
  uVar3 = FUN_140277cc4(uVar3,puVar4,0,0);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 145bd27a2 FUN_145bd27a2 body=304 status=ok
// SIG undefined FUN_145bd27a2(void)

undefined4 * FUN_145bd27a2(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145bd2986(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  FUN_1447a97f4(local_38,*param_3);
  *(undefined8 *)(local_38 + 10) = *puVar1;
  lVar8 = puVar1[1];
  *(longlong *)(local_38 + 0xc) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  local_38[0xe] = 0xffffffff;
  local_44 = local_40[0];
  uVar5 = *local_38;
  cVar3 = FUN_145bd28d4(param_1,uVar5,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_38[0xf] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_38[0xe] =
           *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145bd2a6c(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd28d4 FUN_145bd28d4 body=178 status=ok
// SIG undefined FUN_145bd28d4(void)

undefined8 FUN_145bd28d4(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar15 * 0x40);
        if (*(int *)(*param_1 + (longlong)iVar15 * 0x40) == *param_3) {
          FUN_145b06bac(piVar1);
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[8];
          iVar11 = param_3[9];
          iVar12 = param_3[10];
          iVar13 = param_3[0xb];
          *(undefined8 *)(piVar1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
          piVar1[8] = iVar10;
          piVar1[9] = iVar11;
          piVar1[10] = iVar12;
          piVar1[0xb] = iVar13;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_148869ef2(param_1,*param_4);
          *param_4 = iVar15;
          return 1;
        }
        iVar15 = piVar1[0xe];
      } while (iVar15 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145bd2986 FUN_145bd2986 body=230 status=ok
// SIG undefined FUN_145bd2986(void)

int * FUN_145bd2986(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 145bd2a6c FUN_145bd2a6c body=431 status=ok
// SIG undefined FUN_145bd2a6c(void)

void FUN_145bd2a6c(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x40;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x3c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar7) =
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



// FUNCTION 145bd2c1c FUN_145bd2c1c body=590 status=ok
// SIG undefined FUN_145bd2c1c(void)

ulonglong FUN_145bd2c1c(undefined8 param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined7 uVar9;
  ulonglong uVar8;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_e8 [36];
  undefined1 local_c4 [12];
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a4 [12];
  undefined1 local_98 [24];
  longlong local_80;
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_3 + 4) < 1) {
    uVar8 = 0;
  }
  else {
    FUN_144a659ac(param_3,local_a4,0);
    FUN_1448075d0(local_70,local_a4);
    uVar3 = FUN_1400e3c00(param_1,local_70,1);
    FUN_145bd2e6c(param_1,param_2,uVar3);
    iVar6 = (int)param_2[1];
    uVar9 = (undefined7)((ulonglong)param_3 >> 8);
    if (*(int *)(param_3 + 4) == 1) {
      uVar8 = CONCAT71(uVar9,iVar6 != 0);
    }
    else if (iVar6 == 0) {
      uVar8 = 0;
    }
    else {
      local_b8 = 0;
      uStack_b0 = 0;
      if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar6);
      }
      FUN_148869f64();
      lVar10 = param_2[1];
      if ((longlong)(int)lVar10 == 0) {
        iVar6 = 0;
      }
      else {
        lVar4 = *param_2;
        lVar7 = 0;
        do {
          uVar8 = uStack_b0;
          uVar3 = *(undefined8 *)(*(longlong *)(lVar4 + lVar7) + 0x68);
          lVar11 = (longlong)(int)uStack_b0;
          uVar1 = (int)uStack_b0 + 1;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar1);
          if (uStack_b0._4_4_ < uVar1) {
            FUN_148869fba(&local_b8,uVar8 & 0xffffffff);
          }
          *(undefined8 *)(local_b8 + lVar11 * 8) = uVar3;
          lVar7 = lVar7 + 8;
        } while ((longlong)(int)lVar10 * 8 != lVar7);
        iVar6 = (int)param_2[1];
      }
      iVar2 = *(int *)(param_3 + 4);
      iVar5 = iVar2 + iVar6 + -1;
      if (iVar2 + iVar6 < 1) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar5);
      }
      if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
        FUN_1457d0886(param_2);
        iVar2 = *(int *)(param_3 + 4);
      }
      if (1 < iVar2) {
        iVar6 = 1;
        do {
          FUN_144a659ac(param_3,local_c4,iVar6);
          FUN_1448075d0(local_98,local_c4);
          if (0 < (int)uStack_b0) {
            lVar10 = 0;
            do {
              lVar4 = FUN_14013f0dc(param_1,*(undefined8 *)(local_b8 + lVar10 * 8),local_98,1);
              if (lVar4 != 0) {
                iVar2 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar2 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
                  FUN_144837cf2(param_2,iVar2);
                }
                *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar4;
                break;
              }
              lVar10 = lVar10 + 1;
            } while (lVar10 < (int)uStack_b0);
          }
          if (local_80 != 0) {
            FUN_1400020a8();
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(param_3 + 4));
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      uVar8 = CONCAT71(uVar9,1);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 145bd2e6c FUN_145bd2e6c body=283 status=ok
// SIG undefined FUN_145bd2e6c(void)

void FUN_145bd2e6c(longlong param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 auStack_58 [46];
  short local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != 0) {
    if ((longlong)(int)param_2[1] != 0) {
      lVar4 = 0;
      do {
        if (*(longlong *)(*param_2 + lVar4) == param_3) goto LAB_145bd2f67;
        lVar4 = lVar4 + 8;
      } while ((longlong)(int)param_2[1] * 8 != lVar4);
    }
    FUN_144837e54(param_3,0);
    uVar1 = *(uint *)(param_2 + 1);
    *(uint *)(param_2 + 1) = uVar1 + 1;
    if (*(uint *)((longlong)param_2 + 0xc) == uVar1) {
      FUN_144837cf2(param_2,uVar1);
    }
    memmove((void *)(*param_2 + 8),(void *)*param_2,(ulonglong)uVar1 << 3);
    *(longlong *)*param_2 = param_3;
    local_2a = -1;
    uVar2 = FUN_144a06846(param_3 + 0x48,&DAT_14cb7de28);
    piVar3 = (int *)FUN_144a89cb0(uVar2,&local_2a);
    if ((((local_2a == *(short *)(param_1 + 0xb6)) && (*piVar3 != 0)) && (piVar3[1] != 0)) &&
       (*piVar3 != DAT_14c948000)) {
      lVar4 = FUN_1400e3c00(param_1,piVar3,1);
      if (lVar4 != 0) {
        FUN_145bd2e6c(param_1,param_2,lVar4);
      }
    }
  }
LAB_145bd2f67:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd2f8e FUN_145bd2f8e body=233 status=ok
// SIG undefined FUN_145bd2f8e(void)

longlong FUN_145bd2f8e(void)

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
  if (DAT_14c952540 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1468e4160;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14123557e;
    local_38 = &LAB_1468e41a2;
    local_40 = FUN_146275578;
    local_48 = L"Engine";
    local_50 = 0x1000000000000;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/CoreUObject",L"EnumProperty",&DAT_14c952540,&DAT_1468e41a8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c952540;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd307e FUN_145bd307e body=233 status=ok
// SIG undefined FUN_145bd307e(void)

longlong FUN_145bd307e(void)

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
  if (DAT_14c9525e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14588a048;
    local_38 = &LAB_1468e459f;
    local_40 = FUN_14627574d;
    local_48 = L"Engine";
    local_50 = 0x100000000;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/CoreUObject",L"DoubleProperty",&DAT_14c9525e8,&DAT_1468e45a4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9525e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd316e FUN_145bd316e body=233 status=ok
// SIG undefined FUN_145bd316e(void)

longlong FUN_145bd316e(void)

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
  if (DAT_14c9526a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1468e46b2;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14123557e;
    local_38 = &LAB_1468e46f4;
    local_40 = FUN_146275a31;
    local_48 = L"Engine";
    local_50 = 0x400000000000;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x98;
    FUN_14081cfa3(L"/Script/CoreUObject",L"MapProperty",&DAT_14c9526a8,&DAT_1468e46fa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9526a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd325e FUN_145bd325e body=233 status=ok
// SIG undefined FUN_145bd325e(void)

longlong FUN_145bd325e(void)

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
  if (DAT_14c9526d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459e2656;
    local_38 = &LAB_1468e4731;
    local_40 = FUN_146275aa1;
    local_48 = L"Engine";
    local_50 = 0x4000000000000;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/CoreUObject",L"MulticastInlineDelegateProperty",&DAT_14c9526d8,
                  &DAT_1468e4736);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9526d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd334e FUN_145bd334e body=233 status=ok
// SIG undefined FUN_145bd334e(void)

longlong FUN_145bd334e(void)

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
  if (DAT_14c9526f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459e2656;
    local_38 = &LAB_1468e4737;
    local_40 = FUN_146275ad3;
    local_48 = L"Engine";
    local_50 = 0x8000000000000;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/CoreUObject",L"MulticastSparseDelegateProperty",&DAT_14c9526f0,
                  &DAT_1468e473c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9526f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd343e FUN_145bd343e body=233 status=ok
// SIG undefined FUN_145bd343e(void)

longlong FUN_145bd343e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c952750 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_1468e47a2;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14123557e;
    local_38 = &LAB_1468e47bf;
    local_40 = FUN_146275bdf;
    local_48 = L"Engine";
    local_50 = 0x800000000000;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/CoreUObject",L"SetProperty",&DAT_14c952750,&DAT_1468e47c4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c952750;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd352e FUN_145bd352e body=233 status=ok
// SIG undefined FUN_145bd352e(void)

longlong FUN_145bd352e(void)

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
  if (DAT_14c952768 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1468e485c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a62688;
    local_38 = &LAB_1468e489e;
    local_40 = FUN_146275c19;
    local_48 = L"Engine";
    local_50 = 0x200000000;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/CoreUObject",L"SoftClassProperty",&DAT_14c952768,&DAT_1468e48a4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c952768;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd3618 FUN_145bd3618 body=144 status=ok
// SIG undefined FUN_145bd3618(void)

bool FUN_145bd3618(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd36b0 FUN_145bd36b0 body=1257 status=ok
// SIG undefined FUN_145bd36b0(void)

void FUN_145bd36b0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *pvVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined8 local_e8;
  longlong *plStack_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong *plStack_b0;
  void *local_a8;
  ulonglong uStack_a0;
  void *local_98;
  ulonglong uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar9 = FUN_1400b465c();
  lVar9 = *(longlong *)(lVar9 + 0x48);
  if (lVar9 != 0) {
    lVar10 = FUN_140b6d0be();
    if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
        == lVar10 + 0x30)) {
      FUN_14101c9ce(lVar9,&local_70);
      local_88 = 0;
      uStack_80 = 0;
      if (local_68 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(local_68);
      }
      if (local_68 != 0) {
        FUN_145bd3bc0(&local_88);
        if ((longlong)local_68 != 0) {
          lVar9 = (longlong)local_68 * 0x38;
          puVar14 = local_70;
          do {
            local_98 = (void *)0x0;
            uStack_90 = 0;
            local_a8 = (void *)0x0;
            uStack_a0 = 0;
            local_b8 = 0;
            plStack_b0 = (longlong *)0x0;
            uVar11 = (**(code **)(*param_1 + 0x180))(param_1);
            local_f8 = &local_b8;
            cVar6 = FUN_140b672a2(uVar11,puVar14,&local_98,&local_a8);
            pvVar4 = local_98;
            if (((cVar6 != '\0') && (local_b8 != 0)) && (iVar5 = (int)uStack_90, 1 < (int)uStack_90)
               ) {
              local_e8 = *puVar14;
              plStack_e0 = (longlong *)puVar14[1];
              if (plStack_e0 == (longlong *)0x0) {
LAB_145bd382a:
                local_d0 = CONCAT44(local_d0._4_4_,(int)uStack_90);
                local_d8 = (void *)0x0;
                FUN_1446dd670(&local_d8,uStack_90 & 0xffffffff,0);
                memcpy(local_d8,pvVar4,(longlong)iVar5 * 2);
              }
              else {
                LOCK();
                *(int *)((longlong)plStack_e0 + 8) = *(int *)((longlong)plStack_e0 + 8) + 1;
                UNLOCK();
                local_d8 = (void *)0x0;
                if ((int)uStack_90 != 0) goto LAB_145bd382a;
                local_d0 = uStack_90 & 0xffffffff;
              }
              pvVar4 = local_a8;
              local_c8 = (void *)0x0;
              lVar10 = (longlong)(int)uStack_a0;
              local_c0 = CONCAT44(local_c0._4_4_,(int)uStack_a0);
              if (lVar10 == 0) {
                local_c0 = uStack_a0 & 0xffffffff;
              }
              else {
                FUN_1446dd670(&local_c8,uStack_a0 & 0xffffffff,0);
                memcpy(local_c8,pvVar4,lVar10 * 2);
              }
              uVar13 = uStack_80;
              lVar10 = (longlong)(int)uStack_80;
              uVar7 = (int)uStack_80 + 1;
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar7);
              if (uStack_80._4_4_ < uVar7) {
                FUN_148d6a82e(&local_88,uVar13 & 0xffffffff);
              }
              lVar10 = lVar10 * 0x30;
              *(undefined8 *)(local_88 + lVar10) = local_e8;
              *(longlong **)(local_88 + 8 + lVar10) = plStack_e0;
              local_e8 = 0;
              plStack_e0 = (longlong *)0x0;
              *(undefined8 *)(local_88 + 0x10 + lVar10) = 0;
              *(void **)(local_88 + 0x10 + lVar10) = local_d8;
              local_d8 = (void *)0x0;
              *(undefined4 *)(local_88 + 0x18 + lVar10) = (undefined4)local_d0;
              *(undefined4 *)(local_88 + 0x1c + lVar10) = local_d0._4_4_;
              local_d0 = 0;
              *(undefined8 *)(local_88 + 0x20 + lVar10) = 0;
              *(void **)(local_88 + 0x20 + lVar10) = local_c8;
              local_c8 = (void *)0x0;
              *(undefined4 *)(local_88 + 0x28 + lVar10) = (undefined4)local_c0;
              *(undefined4 *)(local_88 + 0x2c + lVar10) = local_c0._4_4_;
              local_c0 = 0;
              FUN_1414d03ec(&local_e8);
            }
            plVar3 = plStack_b0;
            if (plStack_b0 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_b0 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_b0)(plStack_b0);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
            if (local_a8 != (void *)0x0) {
              FUN_1400020a8();
            }
            if (local_98 != (void *)0x0) {
              FUN_1400020a8();
            }
            puVar14 = puVar14 + 7;
            lVar9 = lVar9 + -0x38;
          } while (lVar9 != 0);
        }
      }
      if (param_1[0x22] != 0) {
        FUN_145bd3cd8(param_1[0x22],&local_88);
      }
      if (param_1[0x24] != 0) {
        FUN_148e81cf6(param_1[0x24],&local_88);
      }
      lVar9 = local_88;
      lVar10 = (longlong)(int)uStack_80;
      if (lVar10 == 0) {
        uVar13 = 0;
      }
      else {
        lVar15 = 0;
        do {
          lVar12 = FUN_1400b465c(param_1);
          if ((lVar12 != 0) && (lVar12 = FUN_140b64196(lVar12), lVar12 != 0)) {
            local_e8 = *(undefined8 *)(lVar9 + lVar15);
            plStack_e0 = *(longlong **)(lVar9 + 8 + lVar15);
            if (plStack_e0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
              UNLOCK();
            }
            uVar8 = FUN_140b64372(lVar12,&local_e8);
            if (param_1[0x22] != 0) {
              FUN_145bd3c28(param_1[0x22],&local_e8,uVar8);
            }
            if (param_1[0x24] != 0) {
              FUN_148e821f6(param_1[0x24],&local_e8,uVar8);
            }
            plVar3 = plStack_e0;
            if (plStack_e0 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_e0 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_e0)(plStack_e0);
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
          lVar15 = lVar15 + 0x30;
        } while (lVar10 * 0x30 != lVar15);
        uVar13 = uStack_80 & 0xffffffff;
      }
      FUN_145bd3b9a(local_88,uVar13);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      FUN_14101c9fb(local_70,local_68);
      if (local_70 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bd3b9a FUN_145bd3b9a body=38 status=ok
// SIG undefined FUN_145bd3b9a(void)

void FUN_145bd3b9a(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1414d03ec(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 145bd3bc0 FUN_145bd3bc0 body=103 status=ok
// SIG undefined FUN_145bd3bc0(void)

undefined8 FUN_145bd3bc0(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x30,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x30)) {
    uVar4 = uVar2 / 0x30 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x30,8);
  }
  return uVar3;
}



// FUNCTION 145bd3c28 FUN_145bd3c28 body=175 status=ok
// SIG undefined FUN_145bd3c28(void)

void FUN_145bd3c28(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_47;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0x290);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x288);
    lVar6 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar2 + lVar6);
      if ((puVar3 != (undefined8 *)0x0) &&
         (cVar4 = (**(code **)*puVar3)(puVar3,*param_2), cVar4 != '\0')) {
        puVar5 = &DAT_14c96b1e1;
        if (param_3 == 1) {
          puVar5 = &DAT_14c96b238;
        }
        local_48 = *puVar5;
        local_47 = 1;
        local_40 = 0;
        uStack_38 = 0;
        FUN_14020e622(*(undefined8 *)(lVar2 + 0x30 + lVar6));
        break;
      }
      lVar6 = lVar6 + 0x40;
    } while ((longlong)iVar1 * 0x40 != lVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bd3cd8 FUN_145bd3cd8 body=1285 status=ok
// SIG undefined FUN_145bd3cd8(void)

void FUN_145bd3cd8(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  int local_158;
  undefined1 local_150;
  undefined1 local_14f;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_128 [40];
  undefined1 local_100 [40];
  undefined1 local_d8 [40];
  undefined1 local_b0 [40];
  undefined1 local_88 [40];
  ulonglong local_60;
  
  uVar4 = DAT_14c96b1e1;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_168 = param_1;
  if ((int)param_2[1] == 0) {
    iVar6 = *(int *)(param_1 + 0x290);
    if ((longlong)iVar6 != 0) {
      lVar9 = *(longlong *)(param_1 + 0x288);
      lVar11 = 0;
      do {
        local_150 = uVar4;
        local_14f = 1;
        local_148 = 0;
        uStack_140 = 0;
        FUN_14020e622(*(undefined8 *)(lVar9 + 0x30 + lVar11),&local_150);
        lVar11 = lVar11 + 0x40;
      } while ((longlong)iVar6 * 0x40 != lVar11);
    }
  }
  else {
    memset(&local_150,0,0xf0);
    FUN_145bd41de(&local_150);
    if (0 < (int)param_2[1]) {
      lVar9 = 0;
      do {
        lVar8 = *param_2;
        lVar11 = lVar8 + lVar9 * 0x30;
        lVar3 = *(longlong *)(local_168 + 0x288);
        lVar12 = lVar9 * 0x40;
        FUN_145bd4200(lVar3 + lVar12,lVar11);
        lVar8 = lVar8 + lVar9 * 0x30;
        FUN_145bd4274(*(undefined8 *)(lVar3 + 0x30 + lVar12),lVar8 + 0x10);
        FUN_145bd4472(*(undefined8 *)(lVar3 + 0x30 + lVar12),&local_150);
        FUN_1400b22c2(&local_160,"shift");
        iVar6 = *(int *)(lVar8 + 0x28);
        if (iVar6 == local_158) {
          if (iVar6 < 2) {
            bVar13 = true;
          }
          else {
            lVar8 = 0;
            while( true ) {
              uVar1 = *(ushort *)(*(longlong *)(lVar11 + 0x20) + lVar8);
              uVar5 = (uint)uVar1;
              uVar2 = *(ushort *)(local_160 + lVar8);
              uVar10 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_145bd3de0;
                }
                iVar6 = uVar5 - uVar10;
                goto LAB_145bd3e16;
              }
              if (uVar1 == 0) break;
LAB_145bd3de0:
              lVar8 = lVar8 + 2;
            }
            iVar6 = 0;
LAB_145bd3e16:
            bVar13 = iVar6 == 0;
          }
        }
        else {
          bVar13 = local_158 + iVar6 == 1;
        }
        if (local_160 != 0) {
          FUN_1400020a8();
        }
        puVar7 = local_128;
        if (bVar13) {
LAB_145bd3ece:
          FUN_145bd42f6(*(undefined8 *)(lVar3 + lVar12 + 0x30),puVar7);
        }
        else {
          FUN_1400b22c2(&local_160,"steam");
          iVar6 = *(int *)(lVar11 + 0x28);
          if (iVar6 == local_158) {
            if (iVar6 < 2) {
              bVar13 = true;
            }
            else {
              lVar8 = 0;
              while( true ) {
                uVar1 = *(ushort *)(*(longlong *)(lVar11 + 0x20) + lVar8);
                uVar5 = (uint)uVar1;
                uVar2 = *(ushort *)(local_160 + lVar8);
                uVar10 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_145bd3e79;
                  }
                  iVar6 = uVar5 - uVar10;
                  goto LAB_145bd3eaf;
                }
                if (uVar1 == 0) break;
LAB_145bd3e79:
                lVar8 = lVar8 + 2;
              }
              iVar6 = 0;
LAB_145bd3eaf:
              bVar13 = iVar6 == 0;
            }
          }
          else {
            bVar13 = local_158 + iVar6 == 1;
          }
          if (local_160 != 0) {
            FUN_1400020a8();
          }
          puVar7 = local_100;
          if (bVar13) goto LAB_145bd3ece;
          FUN_1400b22c2(&local_160,&DAT_14b501638);
          iVar6 = *(int *)(lVar11 + 0x28);
          if (iVar6 == local_158) {
            bVar13 = true;
            if (1 < iVar6) {
              lVar8 = 0;
              while( true ) {
                uVar1 = *(ushort *)(*(longlong *)(lVar11 + 0x20) + lVar8);
                uVar5 = (uint)uVar1;
                uVar2 = *(ushort *)(local_160 + lVar8);
                uVar10 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_145bd3fba;
                  }
                  iVar6 = uVar5 - uVar10;
                  goto LAB_145bd4193;
                }
                if (uVar1 == 0) break;
LAB_145bd3fba:
                lVar8 = lVar8 + 2;
              }
              iVar6 = 0;
LAB_145bd4193:
              bVar13 = iVar6 == 0;
            }
          }
          else {
            bVar13 = local_158 + iVar6 == 1;
          }
          if (local_160 != 0) {
            FUN_1400020a8();
          }
          if (bVar13) {
            puVar7 = local_d8;
            goto LAB_145bd3ece;
          }
          FUN_1400b22c2(&local_160,&DAT_14b50162e);
          iVar6 = *(int *)(lVar11 + 0x28);
          if (iVar6 == local_158) {
            bVar13 = true;
            if (1 < iVar6) {
              lVar8 = 0;
              while( true ) {
                uVar1 = *(ushort *)(*(longlong *)(lVar11 + 0x20) + lVar8);
                uVar5 = (uint)uVar1;
                uVar2 = *(ushort *)(local_160 + lVar8);
                uVar10 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_145bd40c1;
                  }
                  iVar6 = uVar5 - uVar10;
                  goto LAB_145bd41cb;
                }
                if (uVar1 == 0) break;
LAB_145bd40c1:
                lVar8 = lVar8 + 2;
              }
              iVar6 = 0;
LAB_145bd41cb:
              bVar13 = iVar6 == 0;
            }
          }
          else {
            bVar13 = local_158 + iVar6 == 1;
          }
          if (local_160 != 0) {
            FUN_1400020a8();
          }
          if (bVar13) {
            puVar7 = local_b0;
            goto LAB_145bd3ece;
          }
          FUN_1400b22c2(&local_160,"xboxlive");
          iVar6 = *(int *)(lVar11 + 0x28);
          if (iVar6 == local_158) {
            bVar13 = true;
            if (1 < iVar6) {
              lVar8 = 0;
              while( true ) {
                uVar1 = *(ushort *)(*(longlong *)(lVar11 + 0x20) + lVar8);
                uVar5 = (uint)uVar1;
                uVar2 = *(ushort *)(local_160 + lVar8);
                uVar10 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_145bd4161;
                  }
                  iVar6 = uVar5 - uVar10;
                  goto LAB_145bd41d7;
                }
                if (uVar1 == 0) break;
LAB_145bd4161:
                lVar8 = lVar8 + 2;
              }
              iVar6 = 0;
LAB_145bd41d7:
              bVar13 = iVar6 == 0;
            }
          }
          else {
            bVar13 = local_158 + iVar6 == 1;
          }
          if (local_160 != 0) {
            FUN_1400020a8();
          }
          if (bVar13) {
            puVar7 = local_88;
            goto LAB_145bd3ece;
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)param_2[1]);
    }
    FUN_145b06482(&local_150);
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bd41de FUN_145bd41de body=33 status=ok
// SIG undefined FUN_145bd41de(void)

void FUN_145bd41de(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1402735c8();
  FUN_145bd473e(param_1,lVar1 + 0x418);
  return;
}



// FUNCTION 145bd4200 FUN_145bd4200 body=116 status=ok
// SIG undefined FUN_145bd4200(void)

undefined8 * FUN_145bd4200(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar4;
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
  FUN_144a787a6(param_1 + 2,param_2 + 2);
  FUN_144a787a6(param_1 + 4,param_2 + 4);
  return param_1;
}



// FUNCTION 145bd4274 FUN_145bd4274 body=129 status=ok
// SIG undefined FUN_145bd4274(void)

void FUN_145bd4274(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  longlong *local_58 [2];
  undefined1 local_48 [16];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    FUN_140009b9a(local_58);
    FUN_14023423e(local_48,local_58);
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
    FUN_140a5cace(lVar1,local_48);
    if (local_58[0] != (longlong *)0x0) {
      (**(code **)(*local_58[0] + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd42f6 FUN_145bd42f6 body=378 status=ok
// SIG undefined FUN_145bd42f6(void)

void FUN_145bd42f6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  longlong local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_131;
  undefined8 local_130;
  longlong *local_128;
  undefined1 local_120 [248];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    FUN_1413e28b0(local_120);
    local_168 = &local_131;
    FUN_145bd45fc(local_120,&local_130,param_2 + 8,0);
    lVar3 = FUN_1409be8d8(local_130);
    if (lVar3 != 0) {
      lVar4 = FUN_144a79692();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        lVar4 = *(longlong *)(param_1 + 0x2a0);
        if (lVar4 != lVar3) {
          if ((lVar4 != 0) && (DAT_14c872a72 == '\0')) {
            FUN_140113f48();
          }
          FUN_1401924dc(lVar3);
          *(longlong *)(param_1 + 0x2a0) = lVar3;
          lVar4 = lVar3;
        }
        FUN_140648376(param_1 + 0x360,lVar4);
        local_150 = 1;
        local_148 = 0;
        uStack_140 = 0;
        local_158 = param_1 + 0x360;
        FUN_140a5cfd6(*(longlong *)(param_1 + 0x278) + 0x1e0,*(longlong *)(param_1 + 0x278),
                      &local_158);
        FUN_1449db362(&local_148);
      }
    }
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_128 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar2 = (int *)((longlong)local_128 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_128 + 0x10))(local_128);
        }
      }
    }
    FUN_140f77756(local_120);
  }
  if ((local_28 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bd4472 FUN_145bd4472 body=392 status=ok
// SIG undefined FUN_145bd4472(void)

void FUN_145bd4472(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  longlong local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_131;
  undefined8 local_130;
  longlong *local_128;
  undefined1 local_120 [248];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((*(longlong *)(param_1 + 0x268) != 0) && (*(longlong *)(param_1 + 0x298) == 0)) {
    FUN_1413e28b0(local_120);
    local_168 = &local_131;
    FUN_145bd45fc(local_120,&local_130,param_2 + 8,0);
    lVar3 = FUN_1409be8d8(local_130);
    if (lVar3 != 0) {
      lVar4 = FUN_144a79692();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        lVar4 = *(longlong *)(param_1 + 0x298);
        if (lVar4 != lVar3) {
          if ((lVar4 != 0) && (DAT_14c872a72 == '\0')) {
            FUN_140113f48();
          }
          FUN_1401924dc(lVar3);
          *(longlong *)(param_1 + 0x298) = lVar3;
          lVar4 = lVar3;
        }
        FUN_140648376(param_1 + 0x2b0,lVar4);
        local_150 = 1;
        local_148 = 0;
        uStack_140 = 0;
        local_158 = param_1 + 0x2b0;
        FUN_140a5cfd6(*(longlong *)(param_1 + 0x268) + 0x1e0,*(longlong *)(param_1 + 0x268),
                      &local_158);
        FUN_1449db362(&local_148);
      }
    }
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_128 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar2 = (int *)((longlong)local_128 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_128 + 0x10))(local_128);
        }
      }
    }
    FUN_140f77756(local_120);
  }
  if ((local_28 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bd45fc FUN_145bd45fc body=320 status=ok
// SIG undefined FUN_145bd45fc(void)

undefined8
FUN_145bd45fc(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 *local_88;
  ulonglong *local_80;
  longlong local_78;
  undefined4 local_70;
  longlong local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140d01986();
  local_68[0] = 0;
  local_68[1] = 0;
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  local_48 = (void *)0x0;
  local_40 = param_3[6];
  lVar1 = (longlong)local_40;
  _Src = *(void **)(param_3 + 4);
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar1 * 2);
  }
  local_88 = &local_58;
  local_80 = &local_38;
  FUN_140a1e2b2(&local_78);
  local_98 = local_68;
  FUN_1414d0442(param_1,param_2,&local_78,param_4);
  FUN_140861e20(local_78,local_70);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd473e FUN_145bd473e body=239 status=ok
// SIG undefined FUN_145bd473e(void)

undefined8 * FUN_145bd473e(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  FUN_144a787a6(param_1 + 3,param_2 + 3);
  param_1[5] = param_2[5];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 7);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 7) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  param_1[10] = param_2[10];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x5c);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)((longlong)param_1 + 100) = uVar3;
  FUN_144a787a6(param_1 + 0xd,param_2 + 0xd);
  param_1[0xf] = param_2[0xf];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x84);
  uVar2 = *(undefined4 *)(param_2 + 0x11);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x11) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar3;
  FUN_144a787a6(param_1 + 0x12,param_2 + 0x12);
  param_1[0x14] = param_2[0x14];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xac);
  uVar2 = *(undefined4 *)(param_2 + 0x16);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar1;
  *(undefined4 *)(param_1 + 0x16) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar3;
  FUN_144a787a6(param_1 + 0x17,param_2 + 0x17);
  param_1[0x19] = param_2[0x19];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xd4);
  uVar2 = *(undefined4 *)(param_2 + 0x1b);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar1;
  *(undefined4 *)(param_1 + 0x1b) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar3;
  FUN_144a787a6(param_1 + 0x1c,param_2 + 0x1c);
  return param_1;
}



// FUNCTION 145bd482e FUN_145bd482e body=509 status=ok
// SIG undefined FUN_145bd482e(void)

void FUN_145bd482e(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  undefined **local_98;
  code *local_90;
  longlong **local_88;
  longlong local_80 [2];
  longlong local_70 [2];
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_38 = FUN_145c3c3b7();
  local_40 = FUN_145a16bbf();
  local_48 = FUN_145c581c1();
  uVar1 = FUN_140e82e72();
  local_50 = FUN_1457ba796(uVar1);
  uVar1 = FUN_14143b730();
  local_58 = FUN_1459dc9e8(uVar1);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_60 = &DAT_14c846b20;
  uVar2 = FUN_144a8b586();
  uVar1 = FUN_1412eb7d2(uVar2);
  FUN_140002266(local_70,&DAT_149e061aa,uVar1);
  local_e8 = 0;
  FUN_14063337c(&DAT_14c846b20,L"ElasticChangelist=",local_70,1);
  FUN_1400b22c2(local_80,"Windows");
  FUN_140032b16(0);
  param_1[0x31] = *(longlong *)(DAT_14cad6230 + 0xb8);
  uVar2 = FUN_140032b16(0);
  uVar2 = FUN_145c3cfda(uVar2);
  FUN_145bd4a2c(uVar2,&local_d8,param_1,FUN_14156350a);
  local_c8 = &local_38;
  local_c0 = &local_40;
  local_b8 = &local_48;
  local_b0 = &local_50;
  local_a8 = &local_58;
  local_90 = FUN_14437d404;
  local_d8 = param_1;
  local_d0 = local_70;
  local_a0 = local_80;
  local_98 = &local_60;
  local_88 = &local_d8;
  (**(code **)(*param_1 + 0x48))(param_1);
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd4a2c FUN_145bd4a2c body=228 status=ok
// SIG undefined FUN_145bd4a2c(void)

undefined8
FUN_145bd4a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  *local_40 = &PTR_LAB_149e020b0;
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
  *local_40 = &PTR_FUN_14ba38520;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_1448b6402(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd4b12 FUN_145bd4b12 body=766 status=ok
// SIG undefined FUN_145bd4b12(void)

void FUN_145bd4b12(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined4 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  int iVar14;
  undefined1 auStack_d8 [32];
  LPCRITICAL_SECTION local_b8;
  longlong *local_b0;
  undefined1 local_a4 [4];
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar11 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar11[4] = 0;
  iVar14 = 0;
  *(undefined4 *)(plVar11 + 5) = 0;
  *plVar11 = 0;
  plVar11[1] = 0;
  *(undefined8 *)((longlong)plVar11 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar11 + 0x34) = 0;
  plVar11[8] = 0;
  *(undefined4 *)(plVar11 + 9) = 0;
  local_78 = plVar11;
  local_70 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_70[1] = (longlong)&DAT_100000001;
  *local_70 = (longlong)&PTR_FUN_149e49100;
  local_70[2] = (longlong)plVar11;
  (*(code *)*param_2)(param_2[1],&local_78);
  plVar11 = local_78;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  local_b0 = local_70;
  local_b8 = (LPCRITICAL_SECTION)(param_1 + 0x150);
  EnterCriticalSection(local_b8);
  FUN_1449ad616(param_1 + 0x78);
  *(byte *)(param_1 + 0x20) =
       *(byte *)(param_1 + 0x20) | *(int *)((longlong)plVar11 + 0x34) < (int)plVar11[1];
  plVar1 = plVar11 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)plVar11[5] != 0) {
    FUN_1449c0562(&local_68);
    iVar14 = (int)plVar11[5];
  }
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_80 = local_50;
  local_7c = local_4c;
  local_98 = local_68;
  local_90 = local_60;
  local_a0 = plVar11;
  if ((iStack_54 != iVar14) || (local_60 != plVar1)) {
    do {
      puVar4 = (undefined8 *)(*local_a0 + (longlong)iStack_84 * 0x28);
      puVar13 = &DAT_149dfb77a;
      if (*(int *)(puVar4 + 1) != 0) {
        puVar13 = (undefined2 *)*puVar4;
      }
      FUN_1446f470e(&local_68,puVar13,1);
      FUN_144869592(param_1 + 0x78,local_a4,&local_68,0);
      iVar5 = *(int *)(puVar4 + 1);
      puVar13 = &DAT_149dfb77a;
      if (iVar5 != 0) {
        puVar13 = (undefined2 *)*puVar4;
      }
      iVar9 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar9 = 0;
      }
      uVar10 = FUN_144a49b4a(iVar9,puVar13);
      puVar12 = (undefined8 *)FUN_145bd4e12(param_1 + 0x28,uVar10,puVar4);
      uVar6 = puVar4[2];
      lVar7 = puVar4[3];
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      plVar8 = (longlong *)puVar12[1];
      *puVar12 = uVar6;
      puVar12[1] = lVar7;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar3 = (int *)((longlong)plVar8 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
    } while (local_a0 != plVar11 || (local_90 != plVar1 || iStack_84 != iVar14));
  }
  LeaveCriticalSection(local_b8);
  plVar11 = local_b0;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  plVar11 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bd4e12 FUN_145bd4e12 body=135 status=ok
// SIG undefined FUN_145bd4e12(void)

longlong FUN_145bd4e12(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14047c88e();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_145bd4e5f;
  }
  local_30 = param_3;
  FUN_145bd4e9a(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_145bd4e5f:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + lVar2 * 0x28 + 0x10;
}



// FUNCTION 145bd4e9a FUN_145bd4e9a body=351 status=ok
// SIG undefined FUN_145bd4e9a(void)

undefined4 * FUN_145bd4e9a(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  void *_Src;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14047ca78(param_1,local_48);
  puVar1 = (undefined8 *)*param_4;
  *local_40 = 0;
  iVar5 = *(int *)(puVar1 + 1);
  _Src = (void *)*puVar1;
  *(int *)(local_40 + 1) = iVar5;
  if ((longlong)iVar5 == 0) {
    *(undefined4 *)((longlong)local_40 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(local_40,iVar5,0);
    memcpy((void *)*local_40,_Src,(longlong)iVar5 * 2);
  }
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_58 = 0;
  cVar2 = FUN_14047c804(param_1,param_3,local_40);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar3 < 4) {
      iVar5 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x24) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1449ba646(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd4ffa FUN_145bd4ffa body=154 status=ok
// SIG undefined FUN_145bd4ffa(void)

bool FUN_145bd4ffa(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 145bd5096 FUN_145bd5096 body=132 status=ok
// SIG undefined FUN_145bd5096(void)

void FUN_145bd5096(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    lVar2 = FUN_1447210f0(param_2);
    lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    if ((lVar2 == lVar3) && ((*(byte *)(param_2 + 0x39a) & 0x28) == 0)) {
      plVar4 = (longlong *)FUN_1401b2ade(param_2);
      if ((plVar4 != (longlong *)0x0) &&
         (cVar1 = (**(code **)(*plVar4 + 0x6c8))(plVar4), cVar1 != '\0')) {
        return;
      }
      (**(code **)(*param_1 + 0x3c8))(param_1,param_2);
      FUN_145a4467a(param_1 + 0x45,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 145bd511a FUN_145bd511a body=132 status=ok
// SIG undefined FUN_145bd511a(void)

void FUN_145bd511a(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    lVar2 = FUN_1447210f0(param_2);
    lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    if ((lVar2 == lVar3) && ((*(byte *)(param_2 + 0x39a) & 0x28) == 0)) {
      plVar4 = (longlong *)FUN_1401b2ade(param_2);
      if ((plVar4 != (longlong *)0x0) &&
         (cVar1 = (**(code **)(*plVar4 + 0x6c8))(plVar4), cVar1 != '\0')) {
        return;
      }
      (**(code **)(*param_1 + 0x3d0))(param_1,param_2);
      FUN_145a4467a(param_1 + 0x48,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 145bd519e FUN_145bd519e body=523 status=ok
// SIG undefined FUN_145bd519e(void)

undefined8 *
FUN_145bd519e(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  undefined2 *puVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_f8 [40];
  undefined2 *local_d0;
  int local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((param_3 != 0) && (lVar8 = FUN_1412c3568(param_3), lVar8 != 0)) &&
     (cVar7 = FUN_148cc6424(lVar8), cVar7 != '\0')) {
    local_88 = 0.0;
    dStack_80 = 0.0;
    local_78 = 0.0;
    local_98 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_141313b0e(param_4,&local_88,&local_a8);
    FUN_144a76660(&local_a8,&local_c0);
    dVar4 = *(double *)(lVar8 + 0x260);
    uVar5 = *(undefined8 *)(lVar8 + 0x268);
    dVar1 = *(double *)(lVar8 + 0x270);
    dVar3 = dVar1 - local_78;
    dVar2 = *(double *)(lVar8 + 0x268) - dStack_80;
    dVar10 = dVar4 - local_88;
    dVar11 = 1.0 / SQRT(dVar3 * dVar3 + dVar10 * dVar10 + dVar2 * dVar2);
    local_68 = *(undefined8 *)(lVar8 + 0x18);
    FUN_1400021e4(&local_68,&local_d0);
    puVar9 = local_d0;
    if (local_c8 == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_68,puVar9,1);
    uVar6 = local_68;
    if (local_d0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *param_2 = uVar6;
    param_2[1] = dVar4;
    param_2[2] = uVar5;
    param_2[3] = dVar1;
    *(float *)(param_2 + 4) =
         (float)(dVar3 * dVar11 * local_b0 + dVar11 * dVar10 * local_c0 + dVar2 * dVar11 * local_b8)
    ;
    *(undefined1 *)(param_2 + 5) = 1;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_f8);
  }
  FUN_145bd53b0(param_1,param_2,param_3,param_4);
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145bd53b0 FUN_145bd53b0 body=1188 status=ok
// SIG undefined FUN_145bd53b0(void)

ulonglong * FUN_145bd53b0(longlong param_1,ulonglong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  float *pfVar7;
  ulonglong uVar8;
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  undefined1 auStack_1b8 [32];
  ulonglong local_198;
  ulonglong *local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158 [2];
  double local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((param_3 != 0) && (param_4 != 0)) {
    if (*(longlong *)(param_4 + 0x11e8) == 0) {
      lVar10 = 0x38;
    }
    else {
      lVar10 = 200;
      if ((&DAT_00001100)[*(longlong *)(param_4 + 0x11e8)] == '\x01') {
        lVar10 = 0x38;
      }
    }
    lVar6 = FUN_1414d055e(param_3);
    if (lVar6 != 0) {
      FUN_141313b0e(param_4,&local_e0,&local_f8);
      FUN_144a76660(&local_f8,&local_110);
      dVar5 = (double)CONCAT44(uStack_138._4_4_,(undefined4)uStack_138);
      uVar8 = 0;
      if (0 < *(int *)(lVar6 + 0x120)) {
        pfVar7 = (float *)(param_1 + lVar10);
        fVar15 = -3.4028235e+38;
        lVar11 = 0x38;
        lVar10 = 0;
        bVar9 = false;
        local_198 = 0;
        local_190 = param_2;
        do {
          lVar1 = *(longlong *)(lVar6 + 0x118);
          local_140._0_4_ = CONCAT31(local_140._1_3_,4);
          uVar2 = *(undefined8 *)(lVar1 + lVar11);
          local_140._4_4_ = (undefined4)uVar2;
          uStack_138._0_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          FUN_1400b9382(lVar6,&local_128,&local_140,param_4);
          local_140 = (double)CONCAT44(local_140._4_4_,(undefined4)local_140);
          dVar5 = (double)CONCAT44(uStack_138._4_4_,(undefined4)uStack_138);
          if ((-DAT_14cb85830 < local_128) &&
             (local_140 = (double)CONCAT44(local_140._4_4_,(undefined4)local_140),
             dVar5 = (double)CONCAT44(uStack_138._4_4_,(undefined4)uStack_138),
             local_128 < DAT_14cb85830)) {
            local_140 = (double)CONCAT44(local_140._4_4_,(undefined4)local_140);
            dVar5 = (double)CONCAT44(uStack_138._4_4_,(undefined4)uStack_138);
            if ((-DAT_14cb85838 < dStack_120) &&
               (local_140 = (double)CONCAT44(local_140._4_4_,(undefined4)local_140),
               dVar5 = (double)CONCAT44(uStack_138._4_4_,(undefined4)uStack_138),
               dStack_120 < DAT_14cb85838)) {
              local_140 = (double)CONCAT44(local_140._4_4_,(undefined4)local_140);
              dVar5 = (double)CONCAT44(uStack_138._4_4_,(undefined4)uStack_138);
              if ((-DAT_14cb85840 < local_118) &&
                 (local_140 = (double)CONCAT44(local_140._4_4_,(undefined4)local_140),
                 dVar5 = (double)CONCAT44(uStack_138._4_4_,(undefined4)uStack_138),
                 local_118 < DAT_14cb85840)) {
                local_130 = local_118 - local_d0;
                uStack_138 = dStack_120 - local_d8;
                local_140 = local_128 - local_e0;
                dVar4 = uStack_138 * uStack_138;
                dVar3 = local_140 * local_140;
                dVar13 = local_130 * local_130;
                fVar12 = (float)FUN_141313966(pfVar7,param_4);
                dVar5 = uStack_138;
                if ((float)SQRT(dVar13 + dVar3 + dVar4) <= fVar12) {
                  FUN_144a79a9c(&local_140,&local_188);
                  local_160 = local_178 - local_e8;
                  local_168 = local_180 - local_f0;
                  local_170 = local_188 - local_f8;
                  FUN_1414d053e(&local_170,local_158);
                  dVar5 = uStack_138;
                  if (ABS(local_158[0]) < (double)*pfVar7) {
                    if (((double)-pfVar7[2] < local_148) && (local_148 < (double)pfVar7[1])) {
                      dVar3 = local_118 - local_d0;
                      dVar13 = dStack_120 - local_d8;
                      dVar4 = local_128 - local_e0;
                      dVar14 = 1.0 / SQRT(dVar3 * dVar3 + dVar4 * dVar4 + dVar13 * dVar13);
                      fVar12 = (float)(dVar3 * dVar14 * local_100 +
                                      dVar14 * dVar4 * local_110 + dVar13 * dVar14 * local_108);
                      if (fVar15 < fVar12) {
                        local_198 = *(ulonglong *)(lVar1 + lVar11);
                        uVar8 = local_198 >> 0x20;
                        local_b8 = local_118;
                        local_c8 = local_128;
                        uStack_c0 = dStack_120;
                        bVar9 = true;
                        fVar15 = fVar12;
                      }
                    }
                  }
                }
              }
            }
          }
          uStack_138._4_4_ = (undefined4)((ulonglong)dVar5 >> 0x20);
          lVar10 = lVar10 + 1;
          lVar11 = lVar11 + 0x50;
        } while (lVar10 < *(int *)(lVar6 + 0x120));
        param_2 = local_190;
        if (bVar9) {
          *local_190 = uVar8 << 0x20 | local_198 & 0xffffffff;
          *(undefined4 *)(local_190 + 1) = (undefined4)local_c8;
          *(undefined4 *)((longlong)local_190 + 0xc) = local_c8._4_4_;
          *(undefined4 *)(local_190 + 2) = (undefined4)uStack_c0;
          *(undefined4 *)((longlong)local_190 + 0x14) = uStack_c0._4_4_;
          local_190[3] = (ulonglong)local_b8;
          *(float *)(local_190 + 4) = fVar15;
          uVar8 = 1;
        }
        else {
          uVar8 = 0;
        }
      }
      *(char *)(param_2 + 5) = (char)uVar8;
      goto LAB_145bd57a2;
    }
  }
  dVar5 = (double)CONCAT44(uStack_138._4_4_,(undefined4)uStack_138);
  *(undefined1 *)(param_2 + 5) = 0;
LAB_145bd57a2:
  if ((local_b0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_2;
  }
  uStack_138 = dVar5;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd5856 FUN_145bd5856 body=308 status=ok
// SIG undefined FUN_145bd5856(void)

void FUN_145bd5856(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  ulonglong local_50;
  
  iVar1 = DAT_14cb1cc20;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = (longlong)DAT_14cb1cc20;
  iVar2 = DAT_14cb1cc20 + 0x22;
  uVar3 = DAT_14cb1cc24 - DAT_14cb1cc20;
  DAT_14cb1cc20 = iVar2;
  if (uVar3 < 0x22) {
    FUN_147e444d6(iVar1);
  }
  puVar4 = DAT_14cb1cc18;
  if (DAT_14cb1cc18 == (undefined *)0x0) {
    puVar4 = &DAT_14cb1c8e8;
  }
  lVar5 = 0;
  memset(puVar4 + lVar6 * 0x18,0,0x330);
  lVar6 = 0;
  do {
    FUN_144a89d2e(&local_68,(float)(int)lVar6 * 22.5);
    puVar4 = DAT_14cb1cc18;
    if (DAT_14cb1cc18 == (undefined *)0x0) {
      puVar4 = &DAT_14cb1c8e8;
    }
    *(double *)(puVar4 + lVar5 + 8) = local_68 * 0.5;
    *(double *)(puVar4 + lVar5 + 0x10) = local_60 * 0.5;
    puVar4 = DAT_14cb1cc18;
    if (DAT_14cb1cc18 == (undefined *)0x0) {
      puVar4 = &DAT_14cb1c8e8;
    }
    *(double *)(puVar4 + lVar5 + 0x188) = local_68;
    *(double *)(puVar4 + lVar5 + 400) = local_60;
    lVar6 = lVar6 + 1;
    lVar5 = lVar5 + 0x18;
  } while (lVar6 != 0x10);
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd598c FUN_145bd598c body=561 status=ok
// SIG undefined FUN_145bd598c(void)

void FUN_145bd598c(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
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
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  uVar4 = local_3c;
  uVar3 = local_48;
  uVar2 = local_50;
  uVar1 = local_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_38;
  if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_70 = uVar1;
  local_78 = uVar2;
  (**(code **)(*param_1 + 0x910))(param_1,&local_60,uVar4,uVar3);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd5bbe FUN_145bd5bbe body=493 status=ok
// SIG undefined FUN_145bd5bbe(void)

void FUN_145bd5bbe(longlong param_1,longlong *param_2,undefined4 param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  undefined4 local_60;
  longlong local_58;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = FUN_14487fd02();
  if (iVar1 == 1) goto LAB_145bd5d20;
  lVar2 = FUN_1447210f0(param_1);
  if ((*(longlong *)(lVar2 + 0x178) == 0) || (lVar2 = *param_2, lVar2 == 0)) goto LAB_145bd5d20;
  lVar3 = FUN_145bd5dac();
  if ((lVar3 == 0) ||
     (((*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) || (*param_2 == 0)))) goto LAB_145bd5d20;
  FUN_145bd5e8a(local_70);
  if (param_1 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_1);
  }
  local_70[0] = param_1;
  local_60 = param_3;
  if (param_4 != 0 && (~DAT_14c950c29 & 1) == 0) {
    FUN_1456cec3c(param_4);
  }
  local_48 = param_4;
  if (param_5 != 0 && (~DAT_14c950c29 & 1) == 0) {
    FUN_1456cec3c(param_5);
  }
  local_40 = param_5;
  if ((param_6 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_6);
  }
  local_38 = param_6;
  lVar2 = *param_2;
  if (lVar2 == 0) {
LAB_145bd5d43:
    param_2 = (longlong *)0x0;
  }
  else {
    lVar3 = FUN_145bd5dac();
    if (((lVar3 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) goto LAB_145bd5d43;
    param_2 = (longlong *)*param_2;
  }
  plVar4 = (longlong *)param_2[0x22];
  if (plVar4 == (longlong *)0x0) {
    (**(code **)(*param_2 + 1000))(param_2);
    plVar4 = (longlong *)param_2[0x22];
  }
  (**(code **)(*plVar4 + 0x2a0))(plVar4,local_70);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_145bd5d20:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd5dac FUN_145bd5dac body=221 status=ok
// SIG undefined FUN_145bd5dac(void)

longlong FUN_145bd5dac(void)

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
  if (DAT_14cae9550 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147ba21ed;
    local_40 = FUN_1463e91dc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"LocalMessage",&DAT_14cae9550,&DAT_147ba21ec);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cae9550;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd5e8a FUN_145bd5e8a body=80 status=ok
// SIG undefined FUN_145bd5e8a(void)

undefined8 * FUN_145bd5e8a(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_1446f470e(param_1 + 1,&DAT_149e01fe8,1);
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  FUN_140056680(param_1 + 3,&DAT_149dfb77a);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 145bd5eda FUN_145bd5eda body=708 status=ok
// SIG undefined FUN_145bd5eda(void)

void FUN_145bd5eda(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  
  lVar5 = param_1[0x3a];
  if (lVar5 != 0) {
    uVar8 = *param_2;
    uVar9 = *(undefined4 *)((longlong)param_1 + 0x4c);
    lVar6 = *(longlong *)(lVar5 + 0x338);
    if (lVar6 == 0) {
      uVar3 = FUN_1407f787c();
      lVar6 = FUN_14477b664(uVar3);
      *(longlong *)(lVar5 + 0x338) = lVar6;
    }
    lVar4 = *(longlong *)(lVar5 + 0x340);
    if (((lVar4 == 0) && (lVar4 = 0, lVar6 != 0)) && (*(longlong *)(lVar5 + 0x330) != 0)) {
      plVar7 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar7 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar2 == '\0')) {
        lVar4 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar7 + 0x110))(plVar7);
        lVar4 = FUN_144aff482(uVar3,(longlong *)(lVar5 + 0x330));
      }
      *(longlong *)(lVar5 + 0x340) = lVar4;
    }
    FUN_1447997cc(uVar8,lVar4,uVar9,0,0);
    uVar8 = *param_2;
    lVar5 = param_1[0x3a];
    lVar6 = *(longlong *)(lVar5 + 0x350);
    if (lVar6 == 0) {
      uVar3 = FUN_1407f787c();
      lVar6 = FUN_14477b664(uVar3);
      *(longlong *)(lVar5 + 0x350) = lVar6;
    }
    lVar4 = *(longlong *)(lVar5 + 0x358);
    if (((lVar4 == 0) && (lVar4 = 0, lVar6 != 0)) && (*(longlong *)(lVar5 + 0x348) != 0)) {
      plVar7 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar7 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar2 == '\0')) {
        lVar4 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar7 + 0x110))(plVar7);
        lVar4 = FUN_144aff482(uVar3,(longlong *)(lVar5 + 0x348));
      }
      *(longlong *)(lVar5 + 0x358) = lVar4;
    }
    FUN_1447997cc(uVar8,lVar4,0,0,0);
  }
  lVar5 = (**(code **)(*param_1 + 0x30))(param_1);
  if (lVar5 == 0) {
    return;
  }
  lVar6 = FUN_144a7cbb2();
  if (*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) {
    return;
  }
  if (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
      lVar6 + 0x30) {
    plVar7 = (longlong *)FUN_144a7ae82();
    if (plVar7 != (longlong *)0x0) {
      uVar8 = FUN_1447210f0(param_1 + -0x73);
      uVar9 = (**(code **)(*plVar7 + 0x2b0))(plVar7,lVar5,uVar8);
      uVar8 = *param_2;
      lVar5 = plVar7[0x19];
      if (lVar5 == 0) {
        uVar3 = FUN_1407f787c();
        lVar5 = FUN_14477b664(uVar3);
        plVar7[0x19] = lVar5;
      }
      lVar6 = plVar7[0x1a];
      if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (plVar7[0x18] != 0)) {
        plVar1 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
          lVar6 = 0;
        }
        else {
          uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar6 = FUN_144aff482(uVar3,plVar7 + 0x18);
        }
        plVar7[0x1a] = lVar6;
      }
      FUN_1447997cc(uVar8,lVar6,uVar9,0,0);
      return;
    }
    return;
  }
  return;
}



// FUNCTION 145bd619e FUN_145bd619e body=126 status=ok
// SIG undefined FUN_145bd619e(void)

void FUN_145bd619e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
    lVar3 = FUN_1458774f4();
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 != 0)) {
      FUN_145bd62c2(lVar3);
      plVar2 = *(longlong **)(lVar3 + 0x20);
      *(undefined8 *)(lVar3 + 0x18) = 0;
      *(undefined8 *)(lVar3 + 0x20) = 0;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      *(undefined1 *)(lVar3 + 0x78) = 0;
    }
  }
  FUN_145bd6256(param_1 + 0x180);
  FUN_145bd621c(param_1);
  return;
}



// FUNCTION 145bd621c FUN_145bd621c body=58 status=ok
// SIG undefined FUN_145bd621c(void)

void FUN_145bd621c(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1414d0638();
  if ((*(int *)(param_1 + 0x120) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x118), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145bd624c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 145bd6256 FUN_145bd6256 body=107 status=ok
// SIG undefined FUN_145bd6256(void)

void FUN_145bd6256(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 8);
  uVar1 = 0;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x10) << 4;
    do {
      FUN_148da9c66(param_1,lVar3);
      lVar3 = lVar3 + 0x10;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    lVar3 = *(longlong *)(param_1 + 8);
  }
  FUN_145cbdc15(lVar3,uVar1);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  FUN_148db330e(param_1 + 8);
  return;
}



// FUNCTION 145bd62c2 FUN_145bd62c2 body=773 status=ok
// SIG undefined FUN_145bd62c2(void)

void FUN_145bd62c2(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_b8 [36];
  undefined1 local_94 [4];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_14480f766(&DAT_14cb7df98);
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  lVar4 = FUN_145bd65c8(param_1);
  if (((lVar4 != 0) && (lVar4 = FUN_1400f6f32(lVar4), lVar4 != 0)) &&
     (lVar4 = *(longlong *)(lVar4 + 0x68), lVar4 != 0)) {
    uVar5 = FUN_145bd65c8(param_1);
    lVar6 = FUN_14128aaf8(uVar5);
    if (lVar6 != 0) {
      lVar7 = FUN_14130c5c8();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
        plVar1 = (longlong *)(param_1 + 0x88);
        lVar7 = param_1 + 0x98;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        local_50 = 0;
        iVar8 = 0;
        lStack_60 = lVar7;
        if (*(int *)(param_1 + 0xb0) != 0) {
          FUN_1449c0562(&local_68);
          iVar8 = *(int *)(param_1 + 0xb0);
        }
        local_78 = local_58;
        uVar5 = local_78;
        local_70 = local_50;
        local_6c = local_4c;
        local_88 = local_68;
        local_80 = lStack_60;
        local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        iVar3 = local_78._4_4_;
        local_90 = plVar1;
        if ((local_78._4_4_ != iVar8) || (local_78 = uVar5, lStack_60 != lVar7)) {
          do {
            do {
              local_78 = uVar5;
              puVar2 = (undefined8 *)(*local_90 + (longlong)iVar3 * 0x18);
              local_68 = *puVar2;
              lStack_60 = puVar2[1];
              FUN_140ceec26(lVar4,local_94,*(undefined4 *)puVar2);
              FUN_14665d90a(lVar6,local_94,&lStack_60);
              local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
              FUN_1449c0562(&local_88);
              iVar3 = local_78._4_4_;
              uVar5 = local_78;
            } while (local_78._4_4_ != iVar8);
          } while ((local_80 != lVar7) || (local_90 != plVar1));
        }
      }
    }
    plVar1 = (longlong *)(param_1 + 0xd8);
    lVar6 = param_1 + 0xe8;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    iVar8 = 0;
    lStack_60 = lVar6;
    if (*(int *)(param_1 + 0x100) != 0) {
      FUN_1449c0562(&local_68);
      iVar8 = *(int *)(param_1 + 0x100);
    }
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_88 = local_68;
    local_80 = lStack_60;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar3 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar8) || (local_78 = uVar5, lStack_60 != lVar6)) {
      do {
        do {
          local_78 = uVar5;
          FUN_145bd9d12(lVar4,*(undefined8 *)(*local_90 + 8 + (longlong)iVar3 * 0x18),0xffffffff);
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
          FUN_1449c0562(&local_88);
          iVar3 = local_78._4_4_;
          uVar5 = local_78;
        } while (local_78._4_4_ != iVar8);
      } while ((local_80 != lVar6) || (local_90 != plVar1));
    }
  }
  FUN_145bd660c(param_1 + 0xd8,0);
  FUN_145bd660c(param_1 + 0x88,0);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bd65c8 FUN_145bd65c8 body=67 status=ok
// SIG undefined FUN_145bd65c8(void)

undefined8 FUN_145bd65c8(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  cVar1 = FUN_14111b834(param_1 + 0x10,0);
  if (cVar1 == '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x10);
    if (*(longlong *)(lVar2 + 0x30) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x360);
    }
  }
  return uVar3;
}



// FUNCTION 145bd660c FUN_145bd660c body=107 status=ok
// SIG undefined FUN_145bd660c(void)

void FUN_145bd660c(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_145bd665b:
      FUN_141475358(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_14111b44c(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_145bd665b;
  FUN_145bd6678(param_1);
  FUN_141475358(param_1,param_2);
  return;
}



// FUNCTION 145bd6678 FUN_145bd6678 body=335 status=ok
// SIG undefined FUN_145bd6678(void)

void FUN_145bd6678(longlong *param_1)

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



// FUNCTION 145bd67c8 FUN_145bd67c8 body=38 status=ok
// SIG undefined FUN_145bd67c8(void)

undefined8 FUN_145bd67c8(undefined8 param_1,int param_2)

{
  FUN_145bd67ee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bd67ee FUN_145bd67ee body=81 status=ok
// SIG undefined FUN_145bd67ee(void)

void FUN_145bd67ee(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149e30880;
  FUN_145bd6840(param_1 + 2);
  *param_1 = &PTR_FUN_149e30888;
  puVar1 = TlsGetValue(DAT_14c75b110);
  if (puVar1 == param_1) {
                    /* WARNING: Could not recover jumptable at 0x000145bd6831. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TlsSetValue(DAT_14c75b110,(LPVOID)0x0);
    return;
  }
  return;
}



// FUNCTION 145bd6840 FUN_145bd6840 body=61 status=ok
// SIG undefined FUN_145bd6840(void)

void FUN_145bd6840(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar1 = param_1;
  }
  FUN_145bd687d(lVar1,*(undefined4 *)(param_1 + 0x110));
  if (*(longlong *)(param_1 + 0x100) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bd687d FUN_145bd687d body=60 status=ok
// SIG undefined FUN_145bd687d(void)

void FUN_145bd687d(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145bd68c4 FUN_145bd68c4 body=69 status=ok
// SIG undefined FUN_145bd68c4(void)

undefined8 * FUN_145bd68c4(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a61ee10;
  return param_1;
}



// FUNCTION 145bd6914 FUN_145bd6914 body=69 status=ok
// SIG undefined FUN_145bd6914(void)

undefined8 * FUN_145bd6914(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a649830;
  return param_1;
}



// FUNCTION 145bd6964 FUN_145bd6964 body=69 status=ok
// SIG undefined FUN_145bd6964(void)

undefined8 * FUN_145bd6964(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a652040;
  return param_1;
}



// FUNCTION 145bd69b4 FUN_145bd69b4 body=69 status=ok
// SIG undefined FUN_145bd69b4(void)

undefined8 * FUN_145bd69b4(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a65c150;
  return param_1;
}



// FUNCTION 145bd6a04 FUN_145bd6a04 body=69 status=ok
// SIG undefined FUN_145bd6a04(void)

undefined8 * FUN_145bd6a04(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a65c500;
  return param_1;
}



// FUNCTION 145bd6a54 FUN_145bd6a54 body=69 status=ok
// SIG undefined FUN_145bd6a54(void)

undefined8 * FUN_145bd6a54(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a65c8c0;
  return param_1;
}



// FUNCTION 145bd6aa4 FUN_145bd6aa4 body=69 status=ok
// SIG undefined FUN_145bd6aa4(void)

undefined8 * FUN_145bd6aa4(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a65d120;
  return param_1;
}



// FUNCTION 145bd6af4 FUN_145bd6af4 body=69 status=ok
// SIG undefined FUN_145bd6af4(void)

undefined8 * FUN_145bd6af4(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a65faa0;
  return param_1;
}



// FUNCTION 145bd6b44 FUN_145bd6b44 body=69 status=ok
// SIG undefined FUN_145bd6b44(void)

undefined8 * FUN_145bd6b44(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a662860;
  return param_1;
}



// FUNCTION 145bd6b94 FUN_145bd6b94 body=69 status=ok
// SIG undefined FUN_145bd6b94(void)

undefined8 * FUN_145bd6b94(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6633f0;
  return param_1;
}



// FUNCTION 145bd6be4 FUN_145bd6be4 body=69 status=ok
// SIG undefined FUN_145bd6be4(void)

undefined8 * FUN_145bd6be4(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a665f60;
  return param_1;
}



// FUNCTION 145bd6c34 FUN_145bd6c34 body=69 status=ok
// SIG undefined FUN_145bd6c34(void)

undefined8 * FUN_145bd6c34(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6773d0;
  return param_1;
}



// FUNCTION 145bd6c84 FUN_145bd6c84 body=69 status=ok
// SIG undefined FUN_145bd6c84(void)

undefined8 * FUN_145bd6c84(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a67aa70;
  return param_1;
}



// FUNCTION 145bd6cd4 FUN_145bd6cd4 body=69 status=ok
// SIG undefined FUN_145bd6cd4(void)

undefined8 * FUN_145bd6cd4(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6770f0;
  return param_1;
}



// FUNCTION 145bd6d24 FUN_145bd6d24 body=69 status=ok
// SIG undefined FUN_145bd6d24(void)

undefined8 * FUN_145bd6d24(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a67c450;
  return param_1;
}



// FUNCTION 145bd6d74 FUN_145bd6d74 body=69 status=ok
// SIG undefined FUN_145bd6d74(void)

undefined8 * FUN_145bd6d74(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a679c10;
  return param_1;
}



// FUNCTION 145bd6dc4 FUN_145bd6dc4 body=69 status=ok
// SIG undefined FUN_145bd6dc4(void)

undefined8 * FUN_145bd6dc4(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a679ef0;
  return param_1;
}



// FUNCTION 145bd6e14 FUN_145bd6e14 body=69 status=ok
// SIG undefined FUN_145bd6e14(void)

undefined8 * FUN_145bd6e14(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a679650;
  return param_1;
}



// FUNCTION 145bd6e64 FUN_145bd6e64 body=69 status=ok
// SIG undefined FUN_145bd6e64(void)

undefined8 * FUN_145bd6e64(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a679930;
  return param_1;
}



// FUNCTION 145bd6eb4 FUN_145bd6eb4 body=69 status=ok
// SIG undefined FUN_145bd6eb4(void)

undefined8 * FUN_145bd6eb4(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a675fb0;
  return param_1;
}



// FUNCTION 145bd6f04 FUN_145bd6f04 body=69 status=ok
// SIG undefined FUN_145bd6f04(void)

undefined8 * FUN_145bd6f04(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a67ec90;
  return param_1;
}



// FUNCTION 145bd6f54 FUN_145bd6f54 body=69 status=ok
// SIG undefined FUN_145bd6f54(void)

undefined8 * FUN_145bd6f54(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a676e10;
  return param_1;
}



// FUNCTION 145bd6fa4 FUN_145bd6fa4 body=69 status=ok
// SIG undefined FUN_145bd6fa4(void)

undefined8 * FUN_145bd6fa4(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a67e6d0;
  return param_1;
}



// FUNCTION 145bd6ff4 FUN_145bd6ff4 body=69 status=ok
// SIG undefined FUN_145bd6ff4(void)

undefined8 * FUN_145bd6ff4(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a676290;
  return param_1;
}



// FUNCTION 145bd7044 FUN_145bd7044 body=69 status=ok
// SIG undefined FUN_145bd7044(void)

undefined8 * FUN_145bd7044(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a676570;
  return param_1;
}



// FUNCTION 145bd7094 FUN_145bd7094 body=69 status=ok
// SIG undefined FUN_145bd7094(void)

undefined8 * FUN_145bd7094(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a67e9b0;
  return param_1;
}



// FUNCTION 145bd70e4 FUN_145bd70e4 body=69 status=ok
// SIG undefined FUN_145bd70e4(void)

undefined8 * FUN_145bd70e4(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a67e3f0;
  return param_1;
}



// FUNCTION 145bd7134 FUN_145bd7134 body=69 status=ok
// SIG undefined FUN_145bd7134(void)

undefined8 * FUN_145bd7134(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a67f250;
  return param_1;
}



// FUNCTION 145bd7184 FUN_145bd7184 body=69 status=ok
// SIG undefined FUN_145bd7184(void)

undefined8 * FUN_145bd7184(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a67ef70;
  return param_1;
}



// FUNCTION 145bd71d4 FUN_145bd71d4 body=69 status=ok
// SIG undefined FUN_145bd71d4(void)

undefined8 * FUN_145bd71d4(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a67f530;
  return param_1;
}



// FUNCTION 145bd7224 FUN_145bd7224 body=69 status=ok
// SIG undefined FUN_145bd7224(void)

undefined8 * FUN_145bd7224(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a67d870;
  return param_1;
}



// FUNCTION 145bd7274 FUN_145bd7274 body=69 status=ok
// SIG undefined FUN_145bd7274(void)

undefined8 * FUN_145bd7274(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a67d590;
  return param_1;
}



// FUNCTION 145bd72c4 FUN_145bd72c4 body=69 status=ok
// SIG undefined FUN_145bd72c4(void)

undefined8 * FUN_145bd72c4(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6776b0;
  return param_1;
}



// FUNCTION 145bd7314 FUN_145bd7314 body=69 status=ok
// SIG undefined FUN_145bd7314(void)

undefined8 * FUN_145bd7314(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a67d2b0;
  return param_1;
}



// FUNCTION 145bd7364 FUN_145bd7364 body=69 status=ok
// SIG undefined FUN_145bd7364(void)

undefined8 * FUN_145bd7364(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a67ad50;
  return param_1;
}



// FUNCTION 145bd73b4 FUN_145bd73b4 body=69 status=ok
// SIG undefined FUN_145bd73b4(void)

undefined8 * FUN_145bd73b4(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a67a1d0;
  return param_1;
}



// FUNCTION 145bd7404 FUN_145bd7404 body=69 status=ok
// SIG undefined FUN_145bd7404(void)

undefined8 * FUN_145bd7404(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a680a10;
  return param_1;
}



// FUNCTION 145bd7454 FUN_145bd7454 body=69 status=ok
// SIG undefined FUN_145bd7454(void)

undefined8 * FUN_145bd7454(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a680dd0;
  return param_1;
}



// FUNCTION 145bd74a4 FUN_145bd74a4 body=69 status=ok
// SIG undefined FUN_145bd74a4(void)

undefined8 * FUN_145bd74a4(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a683020;
  return param_1;
}



// FUNCTION 145bd74f4 FUN_145bd74f4 body=69 status=ok
// SIG undefined FUN_145bd74f4(void)

undefined8 * FUN_145bd74f4(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6887a0;
  return param_1;
}



// FUNCTION 145bd7544 FUN_145bd7544 body=69 status=ok
// SIG undefined FUN_145bd7544(void)

undefined8 * FUN_145bd7544(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a689000;
  return param_1;
}



// FUNCTION 145bd7594 FUN_145bd7594 body=69 status=ok
// SIG undefined FUN_145bd7594(void)

undefined8 * FUN_145bd7594(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a691a30;
  return param_1;
}



// FUNCTION 145bd75e4 FUN_145bd75e4 body=69 status=ok
// SIG undefined FUN_145bd75e4(void)

undefined8 * FUN_145bd75e4(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6ab3f0;
  return param_1;
}



// FUNCTION 145bd7634 FUN_145bd7634 body=69 status=ok
// SIG undefined FUN_145bd7634(void)

undefined8 * FUN_145bd7634(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6a83f0;
  return param_1;
}



// FUNCTION 145bd7684 FUN_145bd7684 body=69 status=ok
// SIG undefined FUN_145bd7684(void)

undefined8 * FUN_145bd7684(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6ab6d0;
  return param_1;
}



// FUNCTION 145bd76d4 FUN_145bd76d4 body=69 status=ok
// SIG undefined FUN_145bd76d4(void)

undefined8 * FUN_145bd76d4(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6ab9b0;
  return param_1;
}



// FUNCTION 145bd7724 FUN_145bd7724 body=69 status=ok
// SIG undefined FUN_145bd7724(void)

undefined8 * FUN_145bd7724(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6a89b0;
  return param_1;
}



// FUNCTION 145bd7774 FUN_145bd7774 body=69 status=ok
// SIG undefined FUN_145bd7774(void)

undefined8 * FUN_145bd7774(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6ac590;
  return param_1;
}



// FUNCTION 145bd77c4 FUN_145bd77c4 body=69 status=ok
// SIG undefined FUN_145bd77c4(void)

undefined8 * FUN_145bd77c4(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6acb70;
  return param_1;
}



// FUNCTION 145bd7814 FUN_145bd7814 body=69 status=ok
// SIG undefined FUN_145bd7814(void)

undefined8 * FUN_145bd7814(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6d5470;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x15 | 0xc2;
  return param_1;
}



// FUNCTION 145bd7864 FUN_145bd7864 body=69 status=ok
// SIG undefined FUN_145bd7864(void)

undefined8 * FUN_145bd7864(undefined8 *param_1)

{
  FUN_140ffc8f2();
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_14a6e2f30;
  param_1[9] = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf0 | 4;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 3;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) | 0xc;
  return param_1;
}



// FUNCTION 145bd78b4 FUN_145bd78b4 body=69 status=ok
// SIG undefined FUN_145bd78b4(void)

undefined8 * FUN_145bd78b4(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6e67f0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x14 | 0x83;
  return param_1;
}



// FUNCTION 145bd7904 FUN_145bd7904 body=69 status=ok
// SIG undefined FUN_145bd7904(void)

undefined8 * FUN_145bd7904(undefined8 *param_1)

{
  FUN_140ffc8f2();
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 3;
  *param_1 = &PTR_FUN_14a6ea6c0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x55) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfc;
  param_1[7] = 0x3dcccccd42480000;
  return param_1;
}



// FUNCTION 145bd794a FUN_145bd794a body=25 status=ok
// SIG undefined FUN_145bd794a(void)

undefined8 FUN_145bd794a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145bd797e FUN_145bd797e body=69 status=ok
// SIG undefined FUN_145bd797e(void)

undefined8 * FUN_145bd797e(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 1;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_14abc9620;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0x453b8000;
  *(byte *)((longlong)param_1 + 0x5c) = *(byte *)((longlong)param_1 + 0x5c) & 0xf8;
  *(undefined4 *)(param_1 + 5) = 0xffffff00;
  return param_1;
}



// FUNCTION 145bd79c4 FUN_145bd79c4 body=40 status=ok
// SIG undefined FUN_145bd79c4(void)

undefined8 FUN_145bd79c4(undefined8 param_1,int param_2)

{
  FUN_145bd79ec();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bd79ec FUN_145bd79ec body=59 status=ok
// SIG undefined FUN_145bd79ec(void)

void FUN_145bd79ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad66490;
  FUN_145bd7a27(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145bd7a27 FUN_145bd7a27 body=61 status=ok
// SIG undefined FUN_145bd7a27(void)

void FUN_145bd7a27(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1480661a6(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 145bd7a6c FUN_145bd7a6c body=72 status=ok
// SIG undefined FUN_145bd7a6c(void)

undefined8 * FUN_145bd7a6c(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_1458909b6();
  *param_1 = &PTR_FUN_14b1c5ab0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x9c;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0;
  return param_1;
}



// FUNCTION 145bd7abc FUN_145bd7abc body=482 status=ok
// SIG undefined FUN_145bd7abc(void)

undefined8 * FUN_145bd7abc(undefined8 *param_1)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145c7973c();
  *param_1 = &PTR_FUN_14b257670;
  param_1[0x30] = 0;
  local_28 = FUN_145bd7ca0();
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_28);
  }
  FUN_1446ddc76(&local_30,"Register",1);
  FUN_141446502(param_1 + 5,local_30,&local_28);
  local_38 = FUN_145bd7ca0();
  if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_38);
  }
  FUN_1446ddc76(&local_40,"Unregister",1);
  FUN_141446502(param_1 + 0xc,local_40,&local_38);
  local_48 = FUN_145bd7ca0();
  if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_48);
  }
  FUN_1446ddc76(&local_50,"Destroy",1);
  FUN_141446502(param_1 + 0x13,local_50,&local_48);
  local_58 = FUN_145bd7ca0();
  if ((local_58 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_58);
  }
  FUN_1446ddc76(&local_60,"ValueProp",1);
  FUN_141446502(param_1 + 0x21,local_60,&local_58);
  FUN_1446ddc76(&local_68,"GbxSkillManagedResourceType_ActorComponent_Event__DelegateSignature",1);
  FUN_145a056e8(param_1 + 0x1a,local_68);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd7ca0 FUN_145bd7ca0 body=228 status=ok
// SIG undefined FUN_145bd7ca0(void)

longlong FUN_145bd7ca0(void)

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
  if (DAT_14cb65218 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145909d42;
    local_38 = &LAB_148715fc6;
    local_40 = &LAB_145bd7ab4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x188;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillManagedResourceType_ActorComponent",&DAT_14cb65218,
                  FUN_1465088dc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb65218;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd7d94 FUN_145bd7d94 body=66 status=ok
// SIG undefined FUN_145bd7d94(void)

undefined8 * FUN_145bd7d94(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b2a4160;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 145bd7de2 FUN_145bd7de2 body=69 status=ok
// SIG undefined FUN_145bd7de2(void)

undefined8 * FUN_145bd7de2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140edf546(param_1,uVar1);
  *param_1 = &PTR_FUN_14b362d60;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[8] = DAT_14cb85aa0;
  return param_1;
}



// FUNCTION 145bd7e38 FUN_145bd7e38 body=44 status=ok
// SIG undefined FUN_145bd7e38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145bd7e38(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb75b1c = _DAT_14cb75b1c + -1;
  *param_1 = DAT_14cb75b10;
  DAT_14cb75b10 = param_1;
  return;
}



// FUNCTION 145bd7e6a FUN_145bd7e6a body=55 status=ok
// SIG undefined FUN_145bd7e6a(void)

void FUN_145bd7e6a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60778 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60778 = FUN_140002ddd(FUN_1464ed5b2,uVar1,L"GbxMomentNodeState_CinematicMode");
  }
  return;
}



// FUNCTION 145bd7ea8 FUN_145bd7ea8 body=55 status=ok
// SIG undefined FUN_145bd7ea8(void)

void FUN_145bd7ea8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60898 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60898 = FUN_140002ddd(FUN_1464edb82,uVar1,L"GbxMomentNodeState_DirectorNote");
  }
  return;
}



// FUNCTION 145bd7ee6 FUN_145bd7ee6 body=55 status=ok
// SIG undefined FUN_145bd7ee6(void)

void FUN_145bd7ee6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60e48 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60e48 = FUN_140002ddd(FUN_1464f041a,uVar1,L"GbxMomentNodeState_ScreenFade");
  }
  return;
}



// FUNCTION 145bd7f1e FUN_145bd7f1e body=80 status=ok
// SIG undefined FUN_145bd7f1e(void)

void FUN_145bd7f1e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 == 0) {
    (**(code **)(*param_3 + 0x10))(param_3,1,0);
  }
  bVar1 = bVar1 ^ 1;
  if ((*(byte *)((longlong)param_3 + 0x154) != bVar1) &&
     (*(byte *)((longlong)param_3 + 0x154) = bVar1, bVar1 == 0)) {
    FUN_1447f69b6(param_3 + 0x1f);
    return;
  }
  return;
}



// FUNCTION 145bd7f78 FUN_145bd7f78 body=551 status=ok
// SIG undefined FUN_145bd7f78(void)

undefined8 * FUN_145bd7f78(undefined8 *param_1)

{
  longlong lVar1;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b761480;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0xbfd0000000000000;
  param_1[7] = 0xbfd0000000000000;
  param_1[8] = 0xbfd0000000000000;
  param_1[9] = 0x4080000040000000;
  param_1[10] = 0x4018000000000000;
  param_1[0xb] = 0x4018000000000000;
  param_1[0xc] = 0x4018000000000000;
  param_1[0xd] = 0xc018000000000000;
  param_1[0xe] = 0xc018000000000000;
  param_1[0xf] = 0xc018000000000000;
  param_1[0x10] = 0x3ff0000000000000;
  param_1[0x11] = 0x3ff0000000000000;
  param_1[0x12] = 0x3ff0000000000000;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0x4080000040000000;
  param_1[0x18] = 0x4008000000000000;
  param_1[0x19] = 0x4008000000000000;
  param_1[0x1a] = 0x4008000000000000;
  param_1[0x1b] = 0xc008000000000000;
  param_1[0x1c] = 0xc008000000000000;
  param_1[0x1d] = 0xc008000000000000;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x80;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x29] = 0x3ff0000000000000;
  param_1[0x2a] = 0x3ff0000000000000;
  param_1[0x2b] = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0x4080000040000000;
  param_1[0x31] = 0x4008000000000000;
  param_1[0x32] = 0x4008000000000000;
  param_1[0x33] = 0x4008000000000000;
  param_1[0x34] = 0xc008000000000000;
  param_1[0x35] = 0xc008000000000000;
  param_1[0x36] = 0xc008000000000000;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x3eb33333;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x3fa00000;
  *(undefined4 *)(param_1 + 0x39) = 0x3eb33333;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x3fa00000;
  param_1[0x3a] = 0x3fa000003eb33333;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x42) = 0x3d4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0x3f4ccccd;
  param_1[0x43] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
  lVar1 = FUN_145bd81a0();
  if (lVar1 != 0) {
    param_1[3] = *(undefined8 *)(lVar1 + 0x38);
    param_1[4] = *(undefined8 *)(lVar1 + 0x40);
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(lVar1 + 0x48);
    param_1[0x37] = *(undefined8 *)(lVar1 + 0x4c);
    param_1[0x40] = *(undefined8 *)(lVar1 + 0x54);
  }
  return param_1;
}



// FUNCTION 145bd81a0 FUN_145bd81a0 body=92 status=ok
// SIG undefined FUN_145bd81a0(void)

longlong FUN_145bd81a0(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_145bd81fc();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar1 = FUN_145bd81fc();
  if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
      lVar1 + 0x30)) {
    return lVar2;
  }
  return 0;
}



// FUNCTION 145bd81fc FUN_145bd81fc body=228 status=ok
// SIG undefined FUN_145bd81fc(void)

longlong FUN_145bd81fc(void)

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
  if (DAT_14cbaa8b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_148c14a1b;
    local_40 = &LAB_145d22609;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000002;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/OakGame",L"OakFirstPersonSettings",&DAT_14cbaa8b0,&DAT_148c14a1a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaa8b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd82ea FUN_145bd82ea body=152 status=ok
// SIG undefined FUN_145bd82ea(void)

undefined8 * FUN_145bd82ea(undefined8 *param_1)

{
  FUN_145a1c7d8();
  *param_1 = &PTR_FUN_14b7b2580;
  param_1[5] = &PTR_FUN_14b7b2fe0;
  param_1[6] = &PTR_LAB_14b7b3020;
  param_1[0x55] = &PTR_FUN_14b7b3070;
  param_1[0x56] = &PTR_FUN_14b7b30f0;
  param_1[0x57] = &PTR_FUN_14b7b3100;
  param_1[0xc4] = &PTR_FUN_14b7b3130;
  param_1[0xff] = &PTR_FUN_14b7b3140;
  param_1[0x108] = &PTR_FUN_14b7b3150;
  param_1[0x109] = &PTR_FUN_14b7b31f0;
  return param_1;
}



// FUNCTION 145bd8382 FUN_145bd8382 body=37 status=ok
// SIG undefined FUN_145bd8382(void)

void FUN_145bd8382(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xd8);
  FUN_145bd83a8(param_2);
  return;
}



// FUNCTION 145bd83a8 FUN_145bd83a8 body=123 status=ok
// SIG undefined FUN_145bd83a8(void)

void FUN_145bd83a8(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14b92da80;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return;
}



// FUNCTION 145bd842a FUN_145bd842a body=55 status=ok
// SIG undefined FUN_145bd842a(void)

void FUN_145bd842a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbf908 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbf908 = FUN_140002ddd(FUN_146613537,uVar1,L"PhysicsObjectBodySettings");
  }
  return;
}



// FUNCTION 145bd8468 FUN_145bd8468 body=55 status=ok
// SIG undefined FUN_145bd8468(void)

void FUN_145bd8468(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba18e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba18e8 = FUN_140002ddd(FUN_1465b03e6,uVar1,L"GbxMomentNodeState_OakPlayCutscene");
  }
  return;
}



// FUNCTION 145bd84a0 FUN_145bd84a0 body=38 status=ok
// SIG undefined FUN_145bd84a0(void)

undefined8 FUN_145bd84a0(undefined8 param_1,int param_2)

{
  FUN_145bd84c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bd84c6 FUN_145bd84c6 body=122 status=ok
// SIG undefined FUN_145bd84c6(void)

void FUN_145bd84c6(undefined8 *param_1)

{
  FUN_145b054d5(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_140dd8e91(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  return;
}



// FUNCTION 145bd854c FUN_145bd854c body=69 status=ok
// SIG undefined FUN_145bd854c(void)

undefined8 * FUN_145bd854c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x40);
  puVar2 = puVar1 + 1;
  *puVar1 = &PTR_FUN_14beede90;
  puVar1[1] = &PTR_FUN_14beedee0;
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return puVar2;
}



// FUNCTION 145bd859e FUN_145bd859e body=69 status=ok
// SIG undefined FUN_145bd859e(void)

undefined8 * FUN_145bd859e(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x40);
  puVar2 = puVar1 + 1;
  *puVar1 = &PTR_FUN_14bef25c0;
  puVar1[1] = &PTR_FUN_14bef2610;
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return puVar2;
}



// FUNCTION 145bd85f0 FUN_145bd85f0 body=69 status=ok
// SIG undefined FUN_145bd85f0(void)

undefined8 * FUN_145bd85f0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x40);
  puVar2 = puVar1 + 1;
  *puVar1 = &PTR_FUN_14bef9b50;
  puVar1[1] = &PTR_FUN_14bef9ba0;
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return puVar2;
}



// FUNCTION 145bd8642 FUN_145bd8642 body=69 status=ok
// SIG undefined FUN_145bd8642(void)

undefined8 * FUN_145bd8642(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x40);
  puVar2 = puVar1 + 1;
  *puVar1 = &PTR_FUN_14bf07b20;
  puVar1[1] = &PTR_FUN_14bf07b70;
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return puVar2;
}



// FUNCTION 145bd8688 FUN_145bd8688 body=188 status=ok
// SIG undefined FUN_145bd8688(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145bd8688(void)

{
  int *piVar1;
  longlong *plVar2;
  
  _DAT_14c98ebe0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98ebe8,1);
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c98ebb0);
  FUN_145bd877c(DAT_14c98eba0,DAT_14c98eba8);
  if (DAT_14c98eba0 != 0) {
    FUN_1400020a8();
  }
  FUN_145bd87ca();
  FUN_145bd8744(DAT_14c98eb88,DAT_14c98eb90);
  if (DAT_14c98eb88 != 0) {
    FUN_1400020a8();
  }
  plVar2 = DAT_14c98eb80;
  if (DAT_14c98eb80 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)DAT_14c98eb80 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145bd8740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145bd8744 FUN_145bd8744 body=56 status=ok
// SIG undefined FUN_145bd8744(void)

void FUN_145bd8744(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146a26095(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 145bd877c FUN_145bd877c body=77 status=ok
// SIG undefined FUN_145bd877c(void)

void FUN_145bd877c(longlong param_1,int param_2)

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



// FUNCTION 145bd87ca FUN_145bd87ca body=80 status=ok
// SIG undefined FUN_145bd87ca(void)

void FUN_145bd87ca(void)

{
  longlong lVar1;
  uint uVar2;
  
  do {
    uVar2 = FUN_1403378ec(&DAT_14c98eb98);
    if (uVar2 == 0) {
      return;
    }
    lVar1 = *(longlong *)
             (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar2 >> 0xe) * 8) + 8 +
             (ulonglong)(uVar2 & 0x3fff) * 0x18);
    FUN_1447d080c(uVar2);
  } while (lVar1 != 0);
  return;
}



// FUNCTION 145bd881a FUN_145bd881a body=945 status=ok
// SIG undefined FUN_145bd881a(void)

void FUN_145bd881a(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_141245f18();
  lVar6 = FUN_14073fae1();
  if (*(longlong *)(lVar6 + 0x1a0) != 0) {
    plVar7 = (longlong *)FUN_14001cc68(0x9d0,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14b3f8c70;
    plVar9 = plVar7 + 2;
    FUN_145bd8ca2(plVar9);
    local_40 = plVar9;
    local_38 = plVar7;
    FUN_145bd8c02(&local_40,plVar9);
    if (plVar7 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x178) = 0x10;
      plVar9 = *(longlong **)(param_1 + 0x180);
      if (plVar9 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x180) = 0;
LAB_145bd88d0:
        LOCK();
        plVar7 = plVar9 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x000145bd8a85:
          if (iVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      *(longlong **)(param_1 + 0x178) = plVar9;
      plVar9 = *(longlong **)(param_1 + 0x180);
      if (plVar7 == plVar9) {
        LOCK();
        plVar9 = plVar7 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar9 = plVar7;
          goto joined_r0x000145bd8a85;
        }
      }
      else {
        *(longlong **)(param_1 + 0x180) = plVar7;
        if (plVar9 != (longlong *)0x0) goto LAB_145bd88d0;
      }
    }
    plVar9 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_38 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    lVar6 = *(longlong *)(param_1 + 0x178);
    if (lVar6 != 0) {
      lVar8 = FUN_14073fae1();
      FUN_145bd8e62(lVar6,lVar8 + 0x198);
    }
  }
  lVar6 = FUN_14073fae1();
  if (*(longlong *)(lVar6 + 0x1d0) == 0) goto LAB_145bd8b62;
  lVar6 = FUN_14073fae1();
  lVar8 = FUN_14073fae1();
  cVar5 = FUN_144a7afa6(lVar6 + 0x1a0,lVar8 + 0x1d0);
  if (((cVar5 != '\0') && (ABS(*(float *)(lVar6 + 0x1c0) - *(float *)(lVar8 + 0x1f0)) <= 1e-08)) &&
     (ABS(*(float *)(lVar6 + 0x1c4) - *(float *)(lVar8 + 500)) <= 1e-08)) {
    uVar3 = *(undefined8 *)(param_1 + 0x178);
    lVar6 = *(longlong *)(param_1 + 0x180);
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    puVar4 = *(undefined8 **)(param_1 + 400);
    *(undefined8 *)(param_1 + 0x188) = uVar3;
    *(longlong *)(param_1 + 400) = lVar6;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4);
        LOCK();
        piVar1 = (int *)((longlong)puVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
        }
      }
    }
    goto LAB_145bd8b62;
  }
  plVar7 = (longlong *)FUN_14001cc68(0x9d0,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b3f8c70;
  plVar9 = plVar7 + 2;
  FUN_145bd8ca2(plVar9);
  local_40 = plVar9;
  local_38 = plVar7;
  FUN_145bd8c02(&local_40,plVar9);
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x188) = 0x10;
    plVar9 = *(longlong **)(param_1 + 400);
    if (plVar9 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 400) = 0;
LAB_145bd89d2:
      LOCK();
      plVar7 = plVar9 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000145bd8bcc:
        if (iVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x188) = plVar9;
    plVar9 = *(longlong **)(param_1 + 400);
    if (plVar7 == plVar9) {
      LOCK();
      plVar9 = plVar7 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar9 = plVar7;
        goto joined_r0x000145bd8bcc;
      }
    }
    else {
      *(longlong **)(param_1 + 400) = plVar7;
      if (plVar9 != (longlong *)0x0) goto LAB_145bd89d2;
    }
  }
  plVar9 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_38 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_14073fae1();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
LAB_145bd8b62:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd8bf8 FUN_145bd8bf8 body=9 status=ok
// SIG undefined FUN_145bd8bf8(void)

void FUN_145bd8bf8(longlong param_1)

{
  FUN_145bd8d58(param_1 + 0x10);
  return;
}



// FUNCTION 145bd8c02 FUN_145bd8c02 body=159 status=ok
// SIG undefined FUN_145bd8c02(void)

void FUN_145bd8c02(longlong param_1,longlong *param_2)

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
    if ((longlong *)param_2[1] == plVar2) goto LAB_145bd8c3f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_145bd8c3f;
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
LAB_145bd8c3f:
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
                    /* WARNING: Could not recover jumptable at 0x000145bd8c9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145bd8ca2 FUN_145bd8ca2 body=182 status=ok
// SIG undefined FUN_145bd8ca2(void)

undefined8 * FUN_145bd8ca2(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = &DAT_3f8000003f800000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_144894d4c(param_1 + 0xc);
  param_1[0x128] = 0;
  *(undefined4 *)(param_1 + 0x129) = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x954) = 0;
  param_1[300] = 0;
  *(undefined4 *)(param_1 + 0x12d) = 0;
  param_1[0x132] = 0;
  *(undefined4 *)(param_1 + 0x133) = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x99c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9a4) = 0;
  param_1[0x136] = 0;
  *(undefined4 *)(param_1 + 0x137) = 0;
  return param_1;
}



// FUNCTION 145bd8d58 FUN_145bd8d58 body=265 status=ok
// SIG undefined FUN_145bd8d58(void)

void FUN_145bd8d58(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0x9b8) = 0;
  if (*(longlong *)(param_1 + 0x9b0) != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0x970);
  *(undefined4 *)(param_1 + 0x968) = 0;
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FUN_1400020a8();
  }
  FUN_140c85ee4(param_1 + 0x920);
  if (*(longlong *)(param_1 + 0x910) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x888) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x50);
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
  if (*(longlong *)(param_1 + 0x40) != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145bd8e5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145bd8e62 FUN_145bd8e62 body=956 status=ok
// SIG undefined FUN_145bd8e62(void)

void FUN_145bd8e62(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  void *_Src;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 *local_80;
  undefined8 *local_70;
  undefined4 local_68;
  undefined1 local_59;
  undefined8 local_58;
  longlong *local_50;
  undefined4 *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_1[2] = *param_2;
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar6 = *(undefined4 *)(param_2 + 2);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 4) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar7;
  FUN_144a787a6(param_1 + 5,param_2 + 3);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  lVar11 = FUN_1402d20ea(param_1 + 2);
  if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
  }
  if (param_1[3] != 0) {
    local_48 = (undefined4 *)0x0;
    uStack_40 = 0;
    lVar11 = FUN_14050fd64();
    uStack_40 = CONCAT44(uStack_40._4_4_,1);
    FUN_1406f071e(&local_48,0);
    uVar5 = *(undefined4 *)((longlong)param_1 + 0x1c);
    uVar6 = *(undefined4 *)(param_1 + 4);
    uVar7 = *(undefined4 *)((longlong)param_1 + 0x24);
    *local_48 = (int)param_1[3];
    local_48[1] = uVar5;
    local_48[2] = uVar6;
    local_48[3] = uVar7;
    *(undefined8 *)(local_48 + 4) = 0;
    iVar10 = *(int *)(param_1 + 6);
    _Src = (void *)param_1[5];
    local_48[6] = iVar10;
    if ((longlong)iVar10 == 0) {
      local_48[7] = 0;
    }
    else {
      puVar13 = (undefined8 *)(local_48 + 4);
      FUN_1446dd670(puVar13,iVar10,0);
      memcpy((void *)*puVar13,_Src,(longlong)iVar10 * 2);
    }
    local_70 = (undefined8 *)0x0;
    local_68 = 0;
    FUN_1446efa72(&local_70,0,3,0x10);
    local_68 = 3;
    plVar2 = (longlong *)param_1[1];
    if (plVar2 == (longlong *)0x0) {
LAB_145bd90ee:
      *local_70 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      local_70[2] = lVar12;
      *local_70 = &PTR_FUN_14b3f8cf0;
      local_70[3] = 0;
      local_70[4] = 0;
      local_70[5] = param_1;
    }
    else {
      iVar10 = (int)plVar2[1];
      do {
        if (iVar10 == 0) goto LAB_145bd90ee;
        LOCK();
        iVar8 = (int)plVar2[1];
        bVar14 = iVar10 == iVar8;
        if (bVar14) {
          *(int *)(plVar2 + 1) = iVar10 + 1;
          iVar8 = iVar10;
        }
        iVar10 = iVar8;
        UNLOCK();
      } while (!bVar14);
      uVar3 = *param_1;
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      *local_70 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      local_70[2] = lVar12;
      *local_70 = &PTR_FUN_14b3f8cf0;
      local_70[3] = uVar3;
      local_70[4] = plVar2;
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      local_70[5] = param_1;
      LOCK();
      plVar4 = plVar2 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      LOCK();
      plVar4 = plVar2 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      LOCK();
      plVar4 = plVar2 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    local_80 = &local_59;
    local_88 = 0;
    local_90 = 0;
    local_98 = 0;
    FUN_1457028c8(lVar11 + 0x1e8,&local_58,&local_48,&local_70);
    plVar2 = local_50;
    if (param_1 + 9 != &local_58) {
      param_1[9] = local_58;
      local_58 = 0;
      plVar4 = (longlong *)param_1[10];
      if (local_50 != plVar4) {
        local_50 = (longlong *)0x0;
        param_1[10] = plVar2;
        if (plVar4 != (longlong *)0x0) {
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
    }
    plVar2 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_50 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    FUN_1449db362(&local_70);
    FUN_140861e20(local_48,uStack_40 & 0xffffffff);
    if (local_48 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bd9236 FUN_145bd9236 body=920 status=ok
// SIG undefined FUN_145bd9236(void)

void FUN_145bd9236(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_978 [32];
  longlong local_958;
  longlong local_950;
  undefined8 local_948;
  longlong local_940;
  undefined8 local_938;
  undefined4 local_930;
  undefined4 local_92c;
  longlong *local_928;
  undefined8 local_920;
  longlong local_918;
  undefined8 local_910;
  undefined4 local_908;
  undefined4 local_904;
  longlong local_100;
  longlong local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_978;
  lVar6 = FUN_1402d20ea(param_1 + 0x10);
  if (lVar6 == 0) goto LAB_145bd945e;
  uVar7 = FUN_1402d20ea(param_1 + 0x10);
  lVar8 = FUN_14090ceee(uVar7,0,0);
  lVar6 = *(longlong *)(param_1 + 0x40);
  if (lVar8 == 0) {
    if (lVar6 != 0) {
      if (DAT_14c872a72 == '\0') {
        FUN_140113f48();
      }
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    goto LAB_145bd945e;
  }
  if (lVar6 != lVar8) {
    if ((lVar6 != 0) && (DAT_14c872a72 == '\0')) {
      FUN_140113f48();
    }
    FUN_1401924dc(lVar8);
    *(longlong *)(param_1 + 0x40) = lVar8;
  }
  plVar1 = (longlong *)(param_1 + 0x920);
  lVar6 = param_1 + 0x930;
  local_948 = 0x100000000;
  local_938._0_4_ = 0xffffffff;
  local_938._4_4_ = 0;
  local_930 = 0;
  iVar9 = 0;
  local_940 = lVar6;
  if (*(int *)(param_1 + 0x948) != 0) {
    FUN_1449c0562(&local_948);
    iVar9 = *(int *)(param_1 + 0x948);
  }
  local_910._0_4_ = (uint)local_938;
  local_910._4_4_ = local_938._4_4_;
  local_908 = local_930;
  local_904 = local_92c;
  local_920 = local_948;
  local_918 = local_940;
  local_928 = plVar1;
  if ((local_938._4_4_ != iVar9) || (local_940 != lVar6)) {
    do {
      do {
        uVar7 = *(undefined8 *)(param_1 + 0x40);
        uVar4 = *(undefined8 *)(*local_928 + (longlong)local_910._4_4_ * 0x28);
        FUN_144a083d0(&local_948);
        FUN_144a9d3f0(uVar7,uVar4,&local_948);
        local_910._0_4_ = (uint)local_910 & ~local_920._4_4_;
        FUN_1449c0562(&local_920);
      } while (local_910._4_4_ != iVar9);
    } while ((local_918 != lVar6) || (local_928 != plVar1));
  }
  plVar2 = (longlong *)(param_1 + 0x970);
  lVar6 = param_1 + 0x980;
  local_948 = 0x100000000;
  local_938 = 0xffffffff;
  local_930 = 0;
  iVar9 = 0;
  local_940 = lVar6;
  if (*(int *)(param_1 + 0x998) != 0) {
    FUN_1449c0562(&local_948);
    iVar9 = *(int *)(param_1 + 0x998);
  }
  local_910 = local_938;
  uVar7 = local_910;
  local_908 = local_930;
  local_904 = local_92c;
  local_920 = local_948;
  local_918 = local_940;
  local_910._4_4_ = (int)((ulonglong)local_938 >> 0x20);
  iVar5 = local_910._4_4_;
  local_928 = plVar2;
  if ((local_910._4_4_ != iVar9) || (local_910 = uVar7, local_940 != lVar6)) {
    do {
      do {
        local_910 = uVar7;
        FUN_14472da24(*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(*local_928 + (longlong)iVar5 * 0x14),
                      *(undefined4 *)(*local_928 + 8 + (longlong)iVar5 * 0x14));
        local_910 = CONCAT44(local_910._4_4_,(uint)local_910 & ~local_920._4_4_);
        FUN_1449c0562(&local_920);
        iVar5 = local_910._4_4_;
        uVar7 = local_910;
      } while (local_910._4_4_ != iVar9);
    } while ((local_918 != lVar6) || (local_928 != plVar2));
  }
  FUN_145bd95d0(plVar1);
  FUN_145bd9614(plVar2);
  FUN_144894d4c(&local_928);
  FUN_1414d07a4(param_1 + 0x60,&local_928);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  lVar6 = *(longlong *)(param_1 + 0x40);
  if ((lVar6 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar6 != 0) goto LAB_145bd9446;
    local_950 = 0;
  }
  else {
    FUN_1456cec3c(lVar6);
LAB_145bd9446:
    local_950 = lVar6 + 0x28;
  }
  local_958 = lVar6;
  FUN_145bd965a(param_1 + 0x60,&local_958,uVar3);
LAB_145bd945e:
  if ((local_60 ^ (ulonglong)auStack_978) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bd95d0 FUN_145bd95d0 body=68 status=ok
// SIG undefined FUN_145bd95d0(void)

void FUN_145bd95d0(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14882c3e4();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_140549ad6(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 145bd9614 FUN_145bd9614 body=70 status=ok
// SIG undefined FUN_145bd9614(void)

void FUN_145bd9614(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_144a40a0c();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1401ad22e(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 145bd965a FUN_145bd965a body=205 status=ok
// SIG undefined FUN_145bd965a(void)

void FUN_145bd965a(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x8b0);
    uVar4 = *(uint *)(param_1 + 0x8b8);
    if (0 < (int)uVar4) {
      lVar3 = 0;
      do {
        if (*(longlong *)(*plVar1 + 8 + lVar3) == lVar2) {
          *(undefined4 *)(*plVar1 + lVar3) = param_3;
          return;
        }
        lVar3 = lVar3 + 0x10;
      } while ((ulonglong)uVar4 << 4 != lVar3);
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar2);
      uVar4 = *(uint *)(param_1 + 0x8b8);
    }
    *(uint *)(param_1 + 0x8b8) = uVar4 + 1;
    if (*(uint *)(param_1 + 0x8bc) < uVar4 + 1) {
      FUN_140aaba28(plVar1,uVar4);
    }
    lVar3 = *plVar1;
    *(undefined4 *)(lVar3 + (longlong)(int)uVar4 * 0x10) = param_3;
    *(longlong *)(lVar3 + 8 + (longlong)(int)uVar4 * 0x10) = lVar2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145bd9728 FUN_145bd9728 body=307 status=ok
// SIG undefined FUN_145bd9728(void)

void FUN_145bd9728(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [40];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145bd9ae4();
  uVar1 = FUN_1447210f0(param_1);
  lVar2 = FUN_145bd989c(uVar1);
  if (lVar2 != 0) {
    FUN_145bd98fc(lVar2,param_1);
  }
  if (*(longlong *)(param_1 + 0xdb8) != 0) {
    uVar3 = FUN_1447210f0(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0xdb8);
    FUN_1414ae211(local_58);
    lVar2 = FUN_140149a73(uVar3,0);
    if (lVar2 != 0) {
      FUN_140825b72(local_58,uVar1,lVar2,0);
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xdb8) = 0;
  }
  if (*(longlong *)(param_1 + 0xdc0) != 0) {
    uVar3 = FUN_1447210f0(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0xdc0);
    FUN_1414ae1a9(local_58);
    lVar2 = FUN_140149a73(uVar3,0);
    if (lVar2 != 0) {
      FUN_140825b72(local_58,uVar1,lVar2,0);
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xdc0) = 0;
  }
  FUN_145bd985c(param_1);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd985c FUN_145bd985c body=63 status=ok
// SIG undefined FUN_145bd985c(void)

void FUN_145bd985c(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x178) == '\x03') {
    lVar1 = FUN_1447210f0();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
      lVar1 = FUN_140704886();
      if (lVar1 != 0) {
        FUN_145bd99ec(lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145bd989c FUN_145bd989c body=96 status=ok
// SIG undefined FUN_145bd989c(void)

undefined8 FUN_145bd989c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x1f0) != 0)) {
    lVar2 = FUN_1403ca142();
    if (((*(longlong *)(param_1 + 0x1f0) != 0) &&
        (((lVar2 != 0 && (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x10), lVar1 != 0))
         && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      uVar3 = FUN_140d27a2a();
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 145bd98fc FUN_145bd98fc body=239 status=ok
// SIG undefined FUN_145bd98fc(void)

void FUN_145bd98fc(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0) && ((byte)(*(char *)(param_1 + 0xb0) - 1U) < 8)) {
    iVar1 = FUN_14487fd02(param_2);
    if (iVar1 != 3) {
      local_38 = 0;
      FUN_14485c47a(&local_38,param_2);
      FUN_148d80332(param_1 + 0x148,&local_38);
      local_38 = 0;
      FUN_14485c47a(&local_38,param_2);
      FUN_148d80332(param_1 + 0x158,&local_38);
      local_38 = 0;
      FUN_14485c47a(&local_38,param_2);
      FUN_148d80332(param_1 + 0x168,&local_38);
      FUN_1441aaf86(param_1);
      FUN_148d8006c(param_1);
      FUN_1441ab0ce(param_1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd99ec FUN_145bd99ec body=246 status=ok
// SIG undefined FUN_145bd99ec(void)

void FUN_145bd99ec(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined1 local_58 [40];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((int)param_1[0x5b] != 0) && ((longlong *)param_1[0x5a] != (longlong *)0x0)) {
    cVar3 = (**(code **)(*(longlong *)param_1[0x5a] + 0x30))();
    if (cVar3 != '\0') {
      lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
      if (lVar4 != 0) {
        if (((int)param_1[0x5b] == 0) ||
           (plVar1 = (longlong *)param_1[0x5a], plVar1 == (longlong *)0x0)) {
          local_60 = 0;
        }
        else {
          (**(code **)(*plVar1 + 0x38))(plVar1,&local_60);
        }
        FUN_145bd9fc6(local_58);
        uVar2 = local_60;
        lVar4 = FUN_140149a73(lVar4,0);
        if (lVar4 != 0) {
          FUN_140825b72(local_58,uVar2,lVar4,0);
        }
        if (local_30 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if (param_1[0x5c] != 0) {
    FUN_14480f766(&DAT_14cbd0b78);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bd9ae4 FUN_145bd9ae4 body=557 status=ok
// SIG undefined FUN_145bd9ae4(void)

void FUN_145bd9ae4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((2 < *(byte *)(param_1 + 0x178)) && (lVar5 = FUN_1447210f0(param_1), lVar5 != 0)) &&
     (plVar3 = *(longlong **)(lVar5 + 0x178), plVar3 != (longlong *)0x0)) {
    lVar5 = FUN_140cbc144();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      (**(code **)(*plVar3 + 0x740))(plVar3,param_1);
    }
  }
  if (((*(longlong *)(param_1 + 0x4a0) != 0) && (*(longlong *)(param_1 + 0x4a8) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x4a8) + 8))) {
    FUN_1401cb356();
    local_40 = *(undefined8 *)(param_1 + 0x4a0);
    local_38 = *(longlong *)(param_1 + 0x4a8);
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 0xc) = *(int *)(local_38 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_40);
    plVar3 = *(longlong **)(param_1 + 0x4a8);
    *(undefined8 *)(param_1 + 0x4a0) = 0;
    *(undefined8 *)(param_1 + 0x4a8) = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x490) != 0) || (*(longlong *)(param_1 + 0x498) != 0)) {
    lVar5 = FUN_1447210f0(param_1);
    if ((lVar5 != 0) &&
       ((lVar5 = FUN_1400f6f32(lVar5), lVar5 != 0 &&
        (lVar5 = *(longlong *)(lVar5 + 0x68), lVar5 != 0)))) {
      lVar4 = *(longlong *)(param_1 + 0x490);
      if (lVar4 != 0) {
        FUN_145bd9d12(lVar5,lVar4,0xffffffff);
      }
      if (*(longlong *)(param_1 + 0x498) != 0) {
        FUN_145bd9d12(lVar5,*(longlong *)(param_1 + 0x498),0xffffffff);
      }
    }
    *(longlong *)(param_1 + 0x490) = 0;
    *(undefined8 *)(param_1 + 0x498) = 0;
  }
  FUN_140457ffc(&DAT_14cb10968,param_1);
  FUN_140457ffc(&DAT_14cb10980,param_1);
  local_28 = (longlong *)0x0;
  if (&local_30 != (undefined8 *)(param_1 + 0x520)) {
    *(undefined8 *)(param_1 + 0x520) = 0;
    local_30 = 0;
    FUN_145708362(param_1 + 0x528,&local_28);
    plVar3 = local_28;
    if (local_28 != (longlong *)0x0) {
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  FUN_145bd9dd8(param_1);
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bd9d12 FUN_145bd9d12 body=197 status=ok
// SIG undefined FUN_145bd9d12(void)

void FUN_145bd9d12(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar6 = 0;
    do {
      if (*(int *)(lVar2 + 0x10 + lVar6) == 0) {
        lVar5 = 0;
      }
      else {
        plVar3 = *(longlong **)(lVar2 + 8 + lVar6);
        lVar5 = 0;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,&local_40);
          lVar5 = local_40;
        }
      }
      if (lVar5 == param_2) {
        uVar4 = (int)(lVar6 >> 3) * -0x49249249;
        if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x40))) {
          *(undefined1 *)
           (*(longlong *)(param_1 + 0x38) + 0x20 + (ulonglong)(uVar4 & 0x7fffffff) * 0x38) = 1;
        }
        break;
      }
      lVar6 = lVar6 + 0x38;
    } while ((longlong)iVar1 * 0x38 - lVar6 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bd9dd8 FUN_145bd9dd8 body=279 status=ok
// SIG undefined FUN_145bd9dd8(void)

void FUN_145bd9dd8(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  longlong *local_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = FUN_1447210f0();
  plVar2 = *(longlong **)(lVar5 + 0x178);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x690))(plVar2,param_1);
  }
  cVar4 = (**(code **)(*param_1 + 0x680))(param_1,1);
  if ((cVar4 != '\0') && (FUN_144a7d35a(lVar5,&local_40), -1 < (int)local_38)) {
    do {
      if ((int)local_40[1] <= (int)local_38) break;
      lVar5 = FUN_14479d2ce((ulonglong)local_38 * 8 + *local_40);
      if (lVar5 != 0) {
        local_48 = param_1[0x7a];
        if ((local_48 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        local_58 = 0;
        uStack_50 = 0;
        FUN_145bd9f10(lVar5,&local_48,4,param_1);
      }
      uVar1 = local_38 + 1;
      bVar3 = -2 < (int)local_38;
      local_38 = uVar1;
    } while (bVar3);
  }
  (**(code **)(*param_1 + 0x6b8))(param_1);
  FUN_1407fb560(param_1);
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bd9ef0 FUN_145bd9ef0 body=32 status=ok
// SIG undefined FUN_145bd9ef0(void)

bool FUN_145bd9ef0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((*(byte *)(param_1 + 0x39a) & 0x20) == 0) {
    iVar1 = FUN_14487fd02();
    bVar2 = iVar1 != 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 145bd9f10 FUN_145bd9f10 body=181 status=ok
// SIG undefined FUN_145bd9f10(void)

void FUN_145bd9f10(longlong *param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (local_60 == 0) {
      local_60 = 0;
    }
    else {
      FUN_1456cec3c();
      local_60 = *param_2;
    }
  }
  local_48 = param_5;
  local_40 = param_6;
  local_58 = param_3;
  local_50 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14caf96b8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_60);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


