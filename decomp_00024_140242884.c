// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140242884 FUN_140242884 body=335 status=ok
// SIG undefined FUN_140242884(void)

void FUN_140242884(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 1402429d4 FUN_1402429d4 body=384 status=ok
// SIG undefined FUN_1402429d4(void)

void FUN_1402429d4(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
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
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 140242b56 FUN_140242b56 body=280 status=ok
// SIG undefined FUN_140242b56(void)

bool FUN_140242b56(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  
  cVar2 = (**(code **)(*param_1 + 0x18))();
  piVar1 = DAT_14cb52a40;
  if (cVar2 == '\0') {
    return false;
  }
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar3 = *(int *)(lVar7 + 0xc60);
  if (iVar3 == 0x40000002) {
    iVar8 = *DAT_14cb52a40;
  }
  else {
    if (DAT_14c86a9f8 == 0) {
      iVar8 = *DAT_14cb52a40;
    }
    else if (iVar3 == 2) {
      iVar8 = *DAT_14cb52a40;
      iVar3 = 2;
    }
    else {
      uVar6 = 1;
      if (iVar3 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        uVar6 = (ulonglong)(DVar4 != DVar5);
        iVar3 = *(int *)(lVar7 + 0xc60);
      }
      iVar8 = piVar1[uVar6];
      if (iVar3 == 0x40000002) goto LAB_140242c20;
    }
    lVar7 = DAT_14cb52a70;
    if (((DAT_14c86a9f8 & 1) != 0) && (iVar3 != 2)) {
      if (iVar3 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        uVar6 = (ulonglong)(DVar4 != DVar5);
      }
      else {
        uVar6 = 1;
      }
      goto LAB_140242bde;
    }
  }
LAB_140242c20:
  uVar6 = 0;
  lVar7 = DAT_14cb52a70;
LAB_140242bde:
  if (((*(int *)(lVar7 + uVar6 * 4) == 0) || (iVar3 = FUN_1401433c5(), iVar3 != 0)) ||
     (iVar3 = FUN_14014334e(), iVar3 == 0)) {
    bVar9 = iVar8 != 0;
  }
  else {
    bVar9 = true;
  }
  return bVar9;
}



// FUNCTION 140242c6e FUN_140242c6e body=103 status=ok
// SIG undefined FUN_140242c6e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 FUN_140242c6e(void)

{
  char cVar1;
  undefined1 auStack_2668 [40];
  undefined1 local_2640 [32];
  undefined1 local_2620;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_2668;
  cVar1 = FUN_140242cd6();
  if (cVar1 == '\0') {
    local_2620 = 0;
  }
  else {
    FUN_14490a810(local_2640);
    FUN_140242e09(local_2640);
  }
  if ((local_10 ^ (ulonglong)auStack_2668) == DAT_14c707940) {
    return local_2620;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140242cd6 FUN_140242cd6 body=307 status=ok
// SIG undefined FUN_140242cd6(void)

undefined1 FUN_140242cd6(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') {
      return 0;
    }
    if ((DAT_14c8442b8 & 1) != 0) {
      return 0;
    }
  }
  else if (DAT_14c8442b8 != 0) {
    return 0;
  }
  uVar1 = 0;
  if (((DAT_14cb527d0 == '\x01') && ((DAT_14cb526f4 & 1) != 0)) &&
     (uVar1 = DAT_14cb52ad0, DAT_14cb52ad1 == '\0')) {
    uVar3 = (**(code **)(*DAT_14cb527c8 + 0x18))();
    iVar2 = FUN_1456d0c02(3,uVar3);
    DAT_14cb52ad0 = iVar2 == 0;
    FUN_1401435b5(3,uVar3);
    DAT_14cb52ad1 = '\x01';
    uVar1 = DAT_14cb52ad0;
  }
  return uVar1;
}



// FUNCTION 140242e09 FUN_140242e09 body=485 status=ok
// SIG undefined FUN_140242e09(void)

void FUN_140242e09(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_1c8 [32];
  longlong local_1a8 [2];
  longlong local_198 [2];
  undefined8 *local_188;
  ulonglong uStack_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  longlong local_78;
  undefined8 *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (DAT_14cb52e28 == (code *)0x0) {
    (*DAT_14cb52768)(3,"slReflexGetState",&DAT_14cb52e28);
  }
  local_188 = (undefined8 *)0x0;
  uStack_180 = 0;
  FUN_140002266(&local_178,L"arg%d",0);
  uStack_180 = CONCAT44(uStack_180._4_4_,1);
  FUN_1447a1bd6(&local_188,0);
  puVar2 = local_188;
  *local_188 = 0;
  *local_188 = local_178;
  local_178 = 0;
  *(undefined4 *)(local_188 + 1) = local_170;
  *(undefined4 *)((longlong)local_188 + 0xc) = local_16c;
  lVar5 = (longlong)(int)uStack_180;
  local_198[0] = 0;
  local_198[1] = 0;
  if (lVar5 != 0) {
    iVar3 = 1;
    lVar6 = 0;
    do {
      if ((char)iVar3 == '\0') {
        FUN_1400020e8(local_198,&DAT_149e19f34,2);
      }
      iVar1 = *(int *)((longlong)puVar2 + lVar6 + 8);
      iVar3 = 0;
      iVar4 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar4 = iVar3;
      }
      FUN_1400020e8(local_198,*(undefined8 *)((longlong)puVar2 + lVar6),iVar4);
      lVar6 = lVar6 + 0x10;
    } while (lVar5 * 0x10 != lVar6);
  }
  local_78 = 0;
  local_68 = 0x10;
  lVar5 = 0;
  do {
    *(short *)((longlong)&local_178 + lVar5 * 2) = (short)"slReflexGetState"[lVar5];
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x11);
  local_70 = &local_178;
  FUN_140002266(local_1a8,&DAT_149e0625e,&local_178);
  if (local_1a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_198[0] != 0) {
    FUN_1400020a8();
  }
  (*DAT_14cb52e28)(param_1);
  FUN_1447a1747(local_188,uStack_180 & 0xffffffff);
  if (local_188 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140242ff8 FUN_140242ff8 body=138 status=ok
// SIG undefined FUN_140242ff8(void)

bool FUN_140242ff8(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc28);
  iVar2 = FUN_1448332aa(param_2,&DAT_149e3cc28);
  if (0x12 < iVar2) {
    puVar1 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *param_1 = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  return 0x12 < iVar2;
}



// FUNCTION 140243082 FUN_140243082 body=116 status=ok
// SIG undefined FUN_140243082(void)

void FUN_140243082(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1402430f6(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1471db68e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1402430f6 FUN_1402430f6 body=93 status=ok
// SIG undefined FUN_1402430f6(void)

void FUN_1402430f6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar2 = 0x7fffffff;
    if ((int)uVar1 <= (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)(param_1 + 0xc) = uVar2;
    FUN_140243154();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 140243154 FUN_140243154 body=469 status=ok
// SIG undefined FUN_140243154(void)

void FUN_140243154(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_140243284:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1402432c1:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1402431be;
LAB_1402431b3:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1402431be:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa1) goto code_r0x0001402431eb;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x60;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_140243241:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1402432c1;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_140243284;
code_r0x0001402431eb:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_140243241;
    }
  }
  goto LAB_1402431b3;
}



// FUNCTION 14024332a FUN_14024332a body=101 status=ok
// SIG undefined FUN_14024332a(void)

void FUN_14024332a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_14024338f(param_2,param_3,*(undefined8 *)(param_1 + 8));
  if (0 < *(int *)(param_1 + 0x3f0)) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      FUN_140243974(param_2,*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 1000) + lVar1);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x13c10;
    } while (lVar2 < *(int *)(param_1 + 0x3f0));
  }
  return;
}



// FUNCTION 14024338f FUN_14024338f body=1246 status=ok
// SIG undefined FUN_14024338f(void)

void FUN_14024338f(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  byte bVar9;
  int iVar10;
  DWORD DVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 **ppuVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  char cVar18;
  byte *pbVar19;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  DWORD local_94;
  longlong local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  uint local_64;
  undefined4 local_60;
  ulonglong local_5c;
  undefined2 local_54;
  undefined4 local_52;
  undefined1 local_4e;
  char local_4d;
  undefined2 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_90 = param_2;
  if (param_3 == (longlong *)0x0) goto LAB_140243749;
  uVar16 = (ulonglong)(uint)(int)*(float *)(DAT_14ca5c9c8 + 4);
  if ((int)*(float *)(DAT_14ca5c9c8 + 4) < 5) {
    uVar16 = 4;
  }
  uVar4 = (int)*(float *)(DAT_14ca5c9e0 + 4);
  if ((int)*(float *)(DAT_14ca5c9e0 + 4) < 5) {
    uVar4 = 4;
  }
  uVar17 = (ulonglong)(uint)(int)*(float *)(DAT_14ca5ca28 + 4);
  if ((int)*(float *)(DAT_14ca5ca28 + 4) < 5) {
    uVar17 = 4;
  }
  uVar5 = 4;
  if (4 < (int)*(float *)(DAT_14ca5ca40 + 4)) {
    uVar5 = (int)*(float *)(DAT_14ca5ca40 + 4);
  }
  lVar12 = (**(code **)(*param_3 + 0x2c8))(param_3);
  plVar7 = DAT_14ca27dc8;
  lVar6 = param_3[1];
  if (*(code **)(*DAT_14ca27dc8 + 0xa8) == FUN_144aa0162) {
    iVar10 = FUN_140052f36(DAT_14ca27dc8);
    if (iVar10 == 0) {
      pbVar19 = (byte *)(plVar7 + 0xb);
    }
    else {
      pbVar19 = (byte *)plVar7[10];
    }
    bVar9 = *pbVar19;
  }
  else {
    bVar9 = (**(code **)(*DAT_14ca27dc8 + 0xa8))(DAT_14ca27dc8);
  }
  lVar8 = DAT_14ca5c980;
  iVar10 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (((iVar10 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar10 == 2)) {
    uVar15 = 0;
  }
  else if (iVar10 == 1) {
    local_94 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    uVar15 = (ulonglong)(local_94 != DVar11);
  }
  else {
    uVar15 = 1;
  }
  plVar7 = DAT_14ca63b20;
  cVar18 = ((int)lVar6 < 2 | bVar9) + 9;
  if (*(int *)(lVar8 + uVar15 * 4) < 1) {
    plVar3 = *(longlong **)(lVar12 + 0xd0);
    if (plVar3 != DAT_14ca63b20) {
      *(longlong **)(lVar12 + 0xd0) = DAT_14ca63b20;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x30))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3);
      }
    }
  }
  else {
    local_4d = '%';
    if (*(int *)(DAT_14ca5c9b0 + 4) < 1) {
      local_4d = cVar18;
    }
    local_5c = uVar16 | (ulonglong)uVar4 << 0x20;
    local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_60 = 0;
    local_54 = 1;
    local_4e = 0;
    local_78 = DAT_14ca85088;
    local_74 = DAT_14ca8508c;
    uStack_70 = CONCAT44(DAT_14ca85094,DAT_14ca85090);
    uStack_68 = DAT_14ca85098;
    local_4c = 0xff00;
    local_52 = 0x1010001;
    local_80 = 0x20008;
    uStack_7c = 0;
    local_a8 = L"SkyAtmosphere.TransmittanceLut";
    FUN_14490a8c0(&DAT_14ca9a3e8,param_1,&local_80,lVar12 + 0xd0);
  }
  local_5c = uVar17 | (ulonglong)uVar5 << 0x20;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_54 = 1;
  local_4e = 0;
  local_78 = DAT_14ca85088;
  local_74 = DAT_14ca8508c;
  uStack_70 = CONCAT44(DAT_14ca85094,DAT_14ca85090);
  uStack_68 = DAT_14ca85098;
  local_4c = 0xff00;
  local_52 = 0x1010001;
  local_80 = 0x20008;
  uStack_7c = 0;
  local_a8 = L"SkyAtmosphere.MultiScatteredLuminanceLut";
  local_4d = cVar18;
  FUN_14490a8c0(&DAT_14ca9a3e8,param_1,&local_80,lVar12 + 0xd8);
  if (*(int *)(DAT_14ca5ca58 + 4) < 1) goto LAB_140243749;
  uStack_70 = 0;
  local_78 = 0x10109;
  local_80 = 0x10;
  uStack_7c = 1;
  FUN_14490af1f(&local_88,&local_80,L"SkyAtmosphere.DistantSkyLightLutBuffer",1);
  lVar6 = local_90;
  ppuVar14 = (undefined8 **)(lVar12 + 0xe0);
  if (ppuVar14 == &local_88) {
LAB_14024378a:
    if (local_88 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_88 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_88)(local_88,1);
      }
    }
  }
  else {
    puVar2 = *ppuVar14;
    *ppuVar14 = local_88;
    local_88 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      goto LAB_14024378a;
    }
  }
  local_80 = CONCAT31(local_80._1_3_,1);
  uStack_7c = 0;
  local_78 = 0xffffffff;
  uStack_70 = 0;
  uVar13 = FUN_14002bb54(*(longlong *)(lVar12 + 0xe0) + 0x38,*(undefined8 *)(lVar6 + 0x18),
                         *(undefined8 *)(*(longlong *)(lVar12 + 0xe0) + 0x28),&local_80);
  *(undefined8 *)(lVar12 + 0xe8) = uVar13;
  uStack_70 = 0;
  local_78 = 0x4109;
  local_80 = 0x10;
  uStack_7c = 1;
  FUN_14490af1f(&local_88,&local_80,L"SkyAtmosphere.MobileDistantSkyLightLutBuffer",1);
  ppuVar14 = (undefined8 **)(lVar12 + 0xf0);
  if (ppuVar14 == &local_88) {
LAB_1402437bb:
    if (local_88 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_88 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_88)(local_88,1);
      }
    }
  }
  else {
    puVar2 = *ppuVar14;
    *ppuVar14 = local_88;
    local_88 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      goto LAB_1402437bb;
    }
  }
  local_80 = CONCAT31(local_80._1_3_,1);
  uStack_7c = 0;
  local_78 = 0xffffffff;
  uStack_70 = 0;
  uVar13 = FUN_14002bb54(*(longlong *)(lVar12 + 0xf0) + 0x38,*(undefined8 *)(lVar6 + 0x18),
                         *(undefined8 *)(*(longlong *)(lVar12 + 0xf0) + 0x28));
  *(undefined8 *)(lVar12 + 0xf8) = uVar13;
LAB_140243749:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14024386e FUN_14024386e body=153 status=ok
// SIG undefined FUN_14024386e(void)

undefined4 FUN_14024386e(longlong *param_1,longlong *param_2)

{
  char cVar1;
  
  if (((((*(char *)((longlong)param_1 + 0x32) == *(char *)((longlong)param_2 + 0x32)) &&
        (*param_1 == *param_2)) &&
       (*(char *)((longlong)param_1 + 0x33) == *(char *)((longlong)param_2 + 0x33))) &&
      (((*(char *)((longlong)param_1 + 0x34) == *(char *)((longlong)param_2 + 0x34) &&
        (*(int *)((longlong)param_1 + 0x24) == *(int *)((longlong)param_2 + 0x24))) &&
       (((int)param_1[5] == (int)param_2[5] &&
        ((*(short *)((longlong)param_1 + 0x2c) == *(short *)((longlong)param_2 + 0x2c) &&
         (*(short *)((longlong)param_1 + 0x2e) == *(short *)((longlong)param_2 + 0x2e))))))))) &&
     (((char)param_1[6] == (char)param_2[6] &&
      ((((*(char *)((longlong)param_1 + 0x31) == *(char *)((longlong)param_2 + 0x31) &&
         (*(char *)((longlong)param_1 + 0x35) == *(char *)((longlong)param_2 + 0x35))) &&
        (cVar1 = FUN_140243908(param_1 + 1,param_2 + 1), cVar1 != '\0')) &&
       ((int)param_1[4] == (int)param_2[4])))))) {
    return CONCAT31((int3)((uint)*(int *)((longlong)param_1 + 0x1c) >> 8),
                    *(int *)((longlong)param_1 + 0x1c) == *(int *)((longlong)param_2 + 0x1c));
  }
  return 0;
}



// FUNCTION 140243908 FUN_140243908 body=108 status=ok
// SIG undefined FUN_140243908(void)

bool FUN_140243908(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == *param_2) {
    if (iVar1 == 1) {
      if (((float)param_1[1] == (float)param_2[1]) &&
         (!NAN((float)param_1[1]) && !NAN((float)param_2[1]))) {
        if (((float)param_1[2] == (float)param_2[2]) &&
           (!NAN((float)param_1[2]) && !NAN((float)param_2[2]))) {
          if (((float)param_1[3] == (float)param_2[3]) &&
             (!NAN((float)param_1[3]) && !NAN((float)param_2[3]))) {
            return (bool)(-((float)param_2[4] == (float)param_1[4]) & 1);
          }
        }
      }
    }
    else {
      if (iVar1 != 2) {
        return true;
      }
      if (((float)param_1[1] == (float)param_2[1]) &&
         (!NAN((float)param_1[1]) && !NAN((float)param_2[1]))) {
        return param_1[2] == param_2[2];
      }
    }
  }
  return false;
}



// FUNCTION 140243974 FUN_140243974 body=1650 status=ok
// SIG undefined FUN_140243974(void)

void FUN_140243974(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  byte bVar8;
  int iVar9;
  DWORD DVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong **pplVar14;
  ulonglong uVar15;
  char cVar16;
  short sVar17;
  int iVar18;
  bool bVar19;
  byte *pbVar20;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  longlong local_d8;
  undefined8 local_d0;
  DWORD local_c4;
  wchar_t *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined1 *local_a0;
  char local_98;
  undefined1 local_97;
  ulonglong local_94;
  short local_8c;
  undefined4 local_8a;
  undefined2 local_86;
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint local_64;
  undefined4 local_60;
  ulonglong local_5c;
  short local_54;
  undefined4 local_52;
  undefined1 local_4e;
  char local_4d;
  undefined2 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d8 = param_3;
  local_d0 = param_1;
  if (param_2 == (longlong *)0x0) goto LAB_140243c82;
  iVar2 = (int)*(float *)(DAT_14ca5c8c0 + 4);
  if ((int)*(float *)(DAT_14ca5c8c0 + 4) < 5) {
    iVar2 = 4;
  }
  iVar3 = (int)*(float *)(DAT_14ca5c8d8 + 4);
  if ((int)*(float *)(DAT_14ca5c8d8 + 4) < 5) {
    iVar3 = 4;
  }
  uVar15 = (ulonglong)(uint)(int)*(float *)(DAT_14ca5c950 + 4);
  if ((int)*(float *)(DAT_14ca5c950 + 4) < 5) {
    uVar15 = 4;
  }
  iVar18 = 4;
  if (4 < (int)*(float *)(DAT_14ca5c908 + 4)) {
    iVar18 = (int)*(float *)(DAT_14ca5c908 + 4);
  }
  lVar11 = (**(code **)(*param_2 + 0x2c0))(param_2);
  plVar12 = DAT_14ca27dc8;
  lVar4 = param_2[1];
  if (*(code **)(*DAT_14ca27dc8 + 0xa8) == FUN_144aa0162) {
    iVar9 = FUN_140052f36(DAT_14ca27dc8);
    if (iVar9 == 0) {
      pbVar20 = (byte *)(plVar12 + 0xb);
    }
    else {
      pbVar20 = (byte *)plVar12[10];
    }
    bVar8 = *pbVar20;
  }
  else {
    bVar8 = (**(code **)(*DAT_14ca27dc8 + 0xa8))(DAT_14ca27dc8);
  }
  lVar5 = DAT_14ca5ca88;
  iVar9 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar9 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar9 == 2)) {
    uVar13 = 0;
  }
  else if (iVar9 == 1) {
    local_c4 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    uVar13 = (ulonglong)(local_c4 != DVar10);
  }
  else {
    uVar13 = 1;
  }
  uVar7 = local_d0;
  lVar6 = local_d8;
  uStack_68 = DAT_14ca85098;
  uStack_6c = DAT_14ca85094;
  uStack_70 = DAT_14ca85090;
  uStack_74 = DAT_14ca8508c;
  local_78 = DAT_14ca85088;
  cVar16 = (*(int *)(lVar5 + uVar13 * 4) == 0) * '\t' + '\x01';
  local_5c = CONCAT44(iVar3,iVar2);
  bVar19 = false;
  local_97 = 0;
  local_86 = 0xff;
  local_b8 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
  uStack_b0 = CONCAT44(DAT_14ca85094,DAT_14ca85090);
  local_a8 = DAT_14ca85098;
  uVar15 = uVar15 << 0x20 | uVar15;
  sVar17 = (short)iVar18;
  local_8a = 0x1010001;
  local_a0 = &DAT_00020008;
  local_c0 = L"UnknownTextureVolume";
  *(longlong *)(local_d8 + 0x13740) = lVar11 + 0x10;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_54 = 1;
  local_4e = 0;
  local_4c = 0xff00;
  local_52 = 0x1010001;
  local_80 = (longlong *)&DAT_00020008;
  local_e8 = L"SkyAtmosphere.SkyViewLut";
  local_98 = cVar16;
  local_94 = uVar15;
  local_8c = sVar17;
  local_4d = ((int)lVar4 < 2 | bVar8) + 9;
  FUN_14490a8c0(&DAT_14ca9a3e8,local_d0,&local_80,local_d8 + 0x13738);
  plVar12 = (longlong *)(**(code **)(*param_2 + 0x338))(param_2);
  if (plVar12 != (longlong *)0x0) {
    if (*(int *)(DAT_14ca69630 + 4) < 1) {
      bVar19 = false;
    }
    else {
      bVar19 = 0.0 < *(float *)(*plVar12 + 0x48) || 0.0 < *(float *)(*plVar12 + 0x50);
    }
  }
  if (*(longlong *)(lVar6 + 0x3108) == 0) {
    local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_60 = 0;
    local_54 = 1;
    local_4e = 0;
    local_78 = (undefined4)local_b8;
    uStack_74 = local_b8._4_4_;
    uStack_70 = (undefined4)uStack_b0;
    uStack_6c = uStack_b0._4_4_;
    uStack_68 = local_a8;
    local_52 = 0x1010001;
    if (sVar17 != 0) {
      local_4e = 2;
      local_54 = sVar17;
    }
    local_80 = (longlong *)&DAT_00020008;
    local_4c = 0xff00;
    local_e8 = L"SkyAtmosphere.CameraAPVolume";
    local_5c = uVar15;
    local_4d = cVar16;
    FUN_14490a8c0(&DAT_14ca9a3e8,local_d0,&local_80,lVar6 + 0x13720);
    if (bVar19 != false) {
      local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_60 = 0;
      local_54 = 1;
      local_4e = 0;
      local_78 = (undefined4)local_b8;
      uStack_74 = local_b8._4_4_;
      uStack_70 = (undefined4)uStack_b0;
      uStack_6c = uStack_b0._4_4_;
      uStack_68 = local_a8;
      local_52 = 0x1010001;
      if (sVar17 != 0) {
        local_4e = 2;
        local_54 = sVar17;
      }
      local_80 = (longlong *)&DAT_00020008;
      local_4c = 0xff00;
      local_e8 = L"SkyAtmosphere.CameraAPVolumeMieOnly";
      local_5c = uVar15;
      local_4d = cVar16;
      FUN_14490a8c0(&DAT_14ca9a3e8,local_d0,&local_80,local_d8 + 0x13728);
      local_d8 = local_d8 + 0x13730;
      local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_60 = 0;
      local_54 = 1;
      local_4e = 0;
      local_78 = (undefined4)local_b8;
      uStack_74 = local_b8._4_4_;
      uStack_70 = (undefined4)uStack_b0;
      uStack_6c = uStack_b0._4_4_;
      uStack_68 = local_a8;
      local_52 = 0x1010001;
      if (sVar17 != 0) {
        local_4e = 2;
        local_54 = sVar17;
      }
      local_80 = (longlong *)&DAT_00020008;
      local_4c = 0xff00;
      local_e8 = L"SkyAtmosphere.CameraAPVolumeRayOnly";
      local_5c = uVar15;
      local_4d = cVar16;
      FUN_14490a8c0(&DAT_14ca9a3e8,local_d0,&local_80,local_d8);
    }
    goto LAB_140243c82;
  }
  local_e8 = (wchar_t *)CONCAT71(local_e8._1_7_,bVar19);
  FUN_140243fe8(*(longlong *)(lVar6 + 0x3108) + 1000,*(undefined4 *)(lVar6 + 0x3090),&local_c0,uVar7
               );
  plVar12 = *(longlong **)
             (*(longlong *)(lVar6 + 0x3108) + 0x3f8 +
             (ulonglong)*(byte *)(*(longlong *)(lVar6 + 0x3108) + 0x429) * 8);
  if (plVar12 != (longlong *)0x0) {
    (**(code **)(*plVar12 + 0x30))(plVar12);
  }
  plVar1 = *(longlong **)(lVar6 + 0x13720);
  *(longlong **)(lVar6 + 0x13720) = plVar12;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  if (!bVar19) goto LAB_140243c82;
  FUN_1472c79c4(*(longlong *)(lVar6 + 0x3108) + 1000,&local_80);
  pplVar14 = (longlong **)(lVar6 + 0x13728);
  if (pplVar14 == &local_80) {
LAB_140243f4a:
    if (local_80 != (longlong *)0x0) {
      (**(code **)(*local_80 + 0x38))();
    }
  }
  else {
    plVar12 = *pplVar14;
    *pplVar14 = local_80;
    local_80 = (longlong *)0x0;
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x38))();
      goto LAB_140243f4a;
    }
  }
  lVar4 = local_d8;
  FUN_1472c79ec(*(longlong *)(local_d8 + 0x3108) + 1000,&local_80);
  pplVar14 = (longlong **)(lVar4 + 0x13730);
  if (pplVar14 != &local_80) {
    plVar12 = *pplVar14;
    *pplVar14 = local_80;
    local_80 = (longlong *)0x0;
    if (plVar12 == (longlong *)0x0) goto LAB_140243c82;
    (**(code **)(*plVar12 + 0x38))();
  }
  if (local_80 != (longlong *)0x0) {
    (**(code **)(*local_80 + 0x38))();
  }
LAB_140243c82:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140243fe8 FUN_140243fe8 body=512 status=ok
// SIG undefined FUN_140243fe8(void)

uint FUN_140243fe8(char *param_1,int param_2,longlong param_3,undefined8 param_4,char param_5)

{
  char *pcVar1;
  byte bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  longlong local_88;
  undefined1 local_80 [56];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((((*param_1 == '\x01') && (*(int *)(param_3 + 0x2c) == *(int *)(param_1 + 4))) &&
      (*(uint *)(param_1 + 8) == (uint)*(ushort *)(param_3 + 0x34))) &&
     ((*(char *)(param_3 + 0x28) == param_1[0xc] && (param_1[0x42] == param_5)))) {
    uVar4 = (ulonglong)(byte)param_1[0x40];
  }
  else {
    param_1[0x42] = param_5;
    param_1[0x40] = (param_2 == 1) + '\x01';
    local_88 = 0x30;
    lVar6 = 0x20;
    lVar8 = 0x10;
    uVar7 = 0;
    do {
      pwVar5 = L"SkyAtmosphere.CameraAPVolume1";
      if (uVar7 == 0) {
        pwVar5 = L"SkyAtmosphere.CameraAPVolume0";
      }
      FUN_14490b435(local_80,param_3);
      local_98 = pwVar5;
      FUN_14490a8c0(&DAT_14ca9a3e8,param_4,local_80,param_1 + lVar8);
      if (param_1[0x42] == '\x01') {
        FUN_14490b435(local_80,param_3);
        local_98 = L"SkyAtmosphere.CameraAPVolumeMieOnly1";
        if (uVar7 == 0) {
          local_98 = L"SkyAtmosphere.CameraAPVolumeMieOnly0";
        }
        pwVar5 = L"SkyAtmosphere.CameraAPVolumeRayOnly1";
        if (uVar7 == 0) {
          pwVar5 = L"SkyAtmosphere.CameraAPVolumeRayOnly0";
        }
        FUN_14490a8c0(&DAT_14ca9a3e8,param_4,local_80,param_1 + lVar6);
        pcVar1 = param_1 + local_88;
        FUN_14490b435(local_80,param_3);
        local_98 = pwVar5;
        FUN_14490a8c0(&DAT_14ca9a3e8,param_4,local_80,pcVar1);
      }
      else {
        plVar3 = *(longlong **)(param_1 + uVar7 * 8 + 0x20);
        if (plVar3 != (longlong *)0x0) {
          pcVar1 = param_1 + uVar7 * 8 + 0x20;
          pcVar1[0] = '\0';
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          pcVar1[4] = '\0';
          pcVar1[5] = '\0';
          pcVar1[6] = '\0';
          pcVar1[7] = '\0';
          (**(code **)(*plVar3 + 0x38))();
        }
        plVar3 = *(longlong **)(param_1 + uVar7 * 8 + 0x30);
        if (plVar3 != (longlong *)0x0) {
          pcVar1 = param_1 + uVar7 * 8 + 0x30;
          pcVar1[0] = '\0';
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          pcVar1[4] = '\0';
          pcVar1[5] = '\0';
          pcVar1[6] = '\0';
          pcVar1[7] = '\0';
          (**(code **)(*plVar3 + 0x38))();
        }
      }
      uVar7 = uVar7 + 1;
      uVar4 = (ulonglong)(byte)param_1[0x40];
      local_88 = local_88 + 8;
      lVar6 = lVar6 + 8;
      lVar8 = lVar8 + 8;
    } while (uVar7 < uVar4);
    *param_1 = '\x01';
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 0x2c);
    *(uint *)(param_1 + 8) = (uint)*(ushort *)(param_3 + 0x34);
    param_1[0xc] = *(char *)(param_3 + 0x28);
  }
  bVar2 = param_1[0x41];
  param_1[0x41] = (char)((bVar2 + 1) % (uint)(ushort)uVar4);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return (bVar2 + 1) / (uint)(ushort)uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402441ea FUN_1402441ea body=215 status=ok
// SIG undefined FUN_1402441ea(void)

void FUN_1402441ea(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70 [16];
  uint *local_60;
  uint local_58;
  undefined1 local_49;
  undefined1 *local_48;
  uint **local_40;
  undefined *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = 0;
LAB_140244213:
  while ((param_2 & 1) == 0) {
    LOCK();
    uVar2 = *param_1;
    bVar4 = param_2 == uVar2;
    if (bVar4) {
      *param_1 = param_2 | 1;
      uVar2 = param_2;
    }
    param_2 = uVar2;
    UNLOCK();
    if (bVar4) {
      param_1[1] = param_3;
      if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
  uVar2 = param_2;
  if ((param_2 & 2) != 0) goto LAB_140244267;
  if (0x27 < uVar3) goto LAB_14024425c;
  SwitchToThread();
  uVar3 = uVar3 + 1;
  goto LAB_140244229;
LAB_14024425c:
  uVar2 = param_2 | 2;
  LOCK();
  uVar1 = *param_1;
  bVar4 = param_2 == uVar1;
  if (bVar4) {
    *param_1 = uVar2;
    uVar1 = param_2;
  }
  param_2 = uVar1;
  UNLOCK();
  if (bVar4) {
LAB_140244267:
    local_40 = &local_60;
    local_30 = &local_49;
    local_38 = &DAT_1427437c6;
    local_48 = &LAB_1427437c8;
    local_78 = 0x7ff0000000000000;
    local_60 = param_1;
    local_58 = uVar2;
    FUN_1456d3e9c(local_70,param_1);
LAB_140244229:
    param_2 = *param_1;
  }
  goto LAB_140244213;
}



// FUNCTION 1402442c2 FUN_1402442c2 body=102 status=ok
// SIG undefined FUN_1402442c2(void)

void FUN_1402442c2(longlong param_1,byte param_2,char param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (param_3 != '\0') {
    *(uint *)(param_1 + 0x7cc) = *(uint *)(param_1 + 0x7cc) & 0xffffff7f | (uint)param_2 << 7;
  }
  if (*(longlong *)(param_1 + 0x760) == 0) {
    return;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x668) + 0x68);
  if ((lVar1 == 0) || (*(int *)(lVar1 + 0x30) != 4)) {
    uVar2 = *(uint *)(param_1 + 0x7cc);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x7cc);
    if ((char)uVar2 < '\0') {
      uVar3 = CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
      goto LAB_1402442f5;
    }
  }
  uVar3 = (ulonglong)(uVar2 >> 9 & 1);
LAB_1402442f5:
  FUN_140244328(*(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0x30),uVar3);
  return;
}



// FUNCTION 140244328 FUN_140244328 body=176 status=ok
// SIG undefined FUN_140244328(void)

void FUN_140244328(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((*(char *)(param_1 + 8) == '\x05' || *(char *)(param_1 + 8) == '\x02') != (bool)param_2) {
    FUN_140336cb8(param_1,0);
    if (*(longlong *)(param_1 + 0x7b0) != 0) {
      FUN_14005a35e(param_1,1);
    }
    if (*(int *)(param_1 + 0x18) != -1) {
      lVar3 = *(longlong *)(param_1 + 0x20);
      plVar4 = *(longlong **)(param_1 + 0x28);
      if (plVar4 != (longlong *)0x0) {
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
      if (lVar3 != 0) {
        if (param_2 != '\0') {
          FUN_1402443d8();
          return;
        }
        FUN_14024441a(lVar3,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1402443d8 FUN_1402443d8 body=65 status=ok
// SIG undefined FUN_1402443d8(void)

void FUN_1402443d8(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  FUN_14012d1c4(param_1,0);
  uVar1 = 5;
  if (*(char *)(param_2 + 8) != '\x04') {
    if (*(char *)(param_2 + 8) != '\x01') {
      return;
    }
    uVar1 = 2;
  }
  FUN_144962840(param_1,param_2,uVar1);
  return;
}



// FUNCTION 14024441a FUN_14024441a body=65 status=ok
// SIG undefined FUN_14024441a(void)

void FUN_14024441a(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  FUN_14012d1c4(param_1,0);
  uVar1 = 4;
  if (*(char *)(param_2 + 8) != '\x05') {
    if (*(char *)(param_2 + 8) != '\x02') {
      return;
    }
    uVar1 = 1;
  }
  FUN_144962840(param_1,param_2,uVar1);
  return;
}



// FUNCTION 14024445c FUN_14024445c body=72 status=ok
// SIG undefined FUN_14024445c(void)

void FUN_14024445c(longlong *param_1)

{
  if (param_1[9] != 0) {
    FUN_14480f766(*param_1 + 0x3c8);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1402444a4 FUN_1402444a4 body=172 status=ok
// SIG undefined FUN_1402444a4(void)

undefined4 * FUN_1402444a4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_2;
  lVar2 = *(longlong *)(param_2 + 4);
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  uVar3 = *(undefined8 *)(param_2 + 2);
  local_38 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 0x16) = 0;
  local_30 = uVar3;
  FUN_140244552(param_1 + 2,&local_30,&local_38);
  FUN_140244da6(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140244552 FUN_140244552 body=131 status=ok
// SIG undefined FUN_140244552(void)

longlong FUN_140244552(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_14024445c(param_1);
  }
  local_28 = *param_3;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_140244822(param_1,*param_2,&local_28);
  *(undefined1 *)(param_1 + 0x50) = 1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402445d6 FUN_1402445d6 body=228 status=ok
// SIG undefined FUN_1402445d6(void)

longlong FUN_1402445d6(void)

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
  if (DAT_14cb49e90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_148409cb2;
    local_40 = FUN_1411ee41c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x470;
    FUN_14081cfa3(L"/Script/Water",L"WaterZone",&DAT_14cb49e90,FUN_146489cd4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb49e90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402446bc FUN_1402446bc body=357 status=ok
// SIG undefined FUN_1402446bc(void)

void FUN_1402446bc(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  fVar4 = *DAT_14cb496b8;
  if (fVar4 < 0.0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar3 = 0x8c;
    if (lVar2 != 0) {
      if (DAT_14cb10130 == 0) {
        local_40 = &local_28;
        local_28 = FUN_140754f84;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_14081d0ea;
        local_48 = &LAB_147da9a76;
        local_50 = FUN_1409f3105;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10000000;
        local_70 = 8;
        local_78 = 0x990;
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      if ((((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) &&
          ((bVar1 = *(byte *)(lVar2 + 0x152), bVar1 == 1 ||
           ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))))) &&
         ((*(char *)(param_1 + 0x9c) == '\x01' && (lVar3 = 0x88, *(char *)(param_1 + 0x9d) != '\0'))
         )) {
        lVar3 = 0x94;
      }
    }
    fVar4 = *(float *)(param_1 + lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(fVar4);
  }
  return;
}



// FUNCTION 140244822 FUN_140244822 body=919 status=ok
// SIG undefined FUN_140244822(void)

undefined8 * FUN_140244822(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  undefined8 *local_40;
  code *local_38;
  undefined8 **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  lVar1 = *param_3;
  if (lVar1 == 0) {
LAB_140244aea:
    lVar1 = 0;
  }
  else {
    if (DAT_14cac9ca8 == 0) {
      local_60 = &local_38;
      local_38 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_1478c0a72;
      local_70 = &LAB_1417b2375;
      local_78 = L"Engine";
      local_80 = 0x1000000000;
      local_88 = 0x10000004;
      local_90 = 8;
      local_98 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      if (DAT_14cac9ca8 == 0) goto LAB_140244aea;
    }
    if ((*(int *)(lVar1 + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) !=
        DAT_14cac9ca8 + 0x30)) goto LAB_140244aea;
    lVar1 = *param_3;
  }
  param_1[8] = lVar1;
  param_1[9] = 0;
  lVar1 = *param_3;
  if (lVar1 == 0) {
LAB_140244b95:
    lVar1 = 0;
  }
  else {
    if (DAT_14cac9ca8 == 0) {
      local_60 = &local_38;
      local_38 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_1478c0a72;
      local_70 = &LAB_1417b2375;
      local_78 = L"Engine";
      local_80 = 0x1000000000;
      local_88 = 0x10000004;
      local_90 = 8;
      local_98 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      if (DAT_14cac9ca8 == 0) goto LAB_140244b95;
    }
    if ((*(int *)(lVar1 + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) !=
        DAT_14cac9ca8 + 0x30)) goto LAB_140244b95;
    lVar1 = *param_3;
  }
  local_30 = &local_40;
  local_38 = FUN_142840874;
  local_98 = 0x200000;
  local_40 = param_1 + 1;
  FUN_140245161(lVar1,&local_38,1,0x10);
  local_38 = (code *)0x0;
  local_30 = (undefined8 **)((ulonglong)local_30 & 0xffffffff00000000);
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30._0_4_ = 3;
  *(undefined ***)local_38 = &PTR_LAB_14a3a3510;
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
  *(longlong *)(local_38 + 0x10) = lVar2;
  *(undefined ***)local_38 = &PTR_FUN_14a3a3430;
  *(undefined8 **)(local_38 + 0x18) = param_1;
  *(code **)(local_38 + 0x20) = FUN_1456cb2b4;
  FUN_140244bba(*param_1,&local_40,&local_38);
  param_1[9] = local_40;
  if ((int)local_30 != 0) {
    if (local_38 == (code *)0x0) goto LAB_1402449e4;
    (*(code *)**(undefined8 **)local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30._0_4_ = 0;
  }
  if (local_38 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_1402449e4:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140244bba FUN_140244bba body=185 status=ok
// SIG undefined FUN_140244bba(void)

undefined8 FUN_140244bba(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_140244c74(&local_30,param_3);
  FUN_14490d954(param_1 + 0x3c8,param_2,&local_30);
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140244c19;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140244c19:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140244c74 FUN_140244c74 body=305 status=ok
// SIG undefined FUN_140244c74(void)

void FUN_140244c74(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_140244d0e;
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
LAB_140244ce7:
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
      goto LAB_140244ce7;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140244d0e;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140244d0e:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140244da6 FUN_140244da6 body=954 status=ok
// SIG undefined FUN_140244da6(void)

void FUN_140244da6(uint *param_1)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  char *pcVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar14 = (longlong)(int)param_1[6];
  if ((int)(param_1[8] + 1) < (int)(param_1[0x10] + param_1[6])) {
    lVar2 = *(longlong *)(param_1 + 2);
    lVar11 = (longlong)(int)param_1[8] + 1;
    do {
      puVar7 = param_1 + 4;
      lVar10 = lVar11;
      if (lVar14 <= lVar11) {
        puVar7 = param_1 + 0xe;
        lVar10 = lVar11 - lVar14;
      }
      lVar10 = *(longlong *)(*(longlong *)puVar7 + lVar10 * 8);
      param_1[10] = param_1[10] + 1;
      if (lVar10 != 0) {
        if (DAT_14cae8b20 == 0) {
          local_70 = &local_50;
          local_50 = (code *)&LAB_14355090c;
          local_60 = FUN_14081d0ea;
          local_68 = FUN_14081d0ea;
          local_78 = &LAB_147b8e16d;
          local_80 = (code *)&LAB_140810a38;
          local_88 = L"Engine";
          local_90 = 0x800000000;
          local_98 = 0x10000000;
          local_a0 = 8;
          local_a8 = 0x3f0;
          FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
        }
        lVar9 = DAT_14cae8b20;
        if (DAT_14c951858 == 0) {
          local_70 = &local_50;
          local_50 = FUN_1449e2820;
          local_60 = FUN_14081d0ea;
          local_68 = FUN_14081d0ea;
          local_78 = &LAB_1468c5283;
          local_80 = FUN_142809da0;
          local_88 = L"Engine";
          local_90 = 0x400000000;
          local_98 = 0x10000000;
          local_a0 = 8;
          local_a8 = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar8 = *(longlong *)(lVar10 + 0x20);
        if (lVar8 != 0) {
          iVar1 = *(int *)(lVar9 + 0x38);
          do {
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < iVar1) ||
               (lVar12 = lVar8,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
               lVar9 + 0x30)) {
              lVar12 = 0;
            }
          } while ((lVar12 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
          if ((lVar12 != 0) &&
             ((uVar6 = *param_1, (uVar6 & 1) == 0 || ((*(uint *)(lVar10 + 8) >> 0x1e & 1) == 0)))) {
            if ((uVar6 & 2) != 0) {
              cVar5 = FUN_144affb44(lVar10);
              if (cVar5 == '\0') goto LAB_140245136;
              uVar6 = *param_1;
            }
            if ((uVar6 & 4) == 0) {
              lVar9 = *(longlong *)(lVar12 + 0xc0);
            }
            else {
              if (((*(byte *)(lVar12 + 0x240) & 0x20) == 0) ||
                 (bVar4 = 1, (*(byte *)(lVar12 + 0x242) & 8) != 0)) {
                if ((*(byte *)(lVar12 + 0x241) & 0x20) == 0) {
                  bVar4 = (*(byte *)(lVar12 + 0x241) & 0x40) >> 6;
                }
                else {
                  bVar4 = 1;
                }
              }
              lVar9 = *(longlong *)(lVar12 + 0xc0);
              if (lVar9 == 0) {
LAB_140244f71:
                pcVar13 = (char *)0x0;
              }
              else {
                iVar1 = *(int *)(lVar9 + 0x1b0);
                if (((longlong)iVar1 < 0) || (*(int *)(lVar9 + 0x1a8) <= iVar1)) goto LAB_140244f71;
                pcVar13 = (char *)((longlong)iVar1 * 0x78 + *(longlong *)(lVar9 + 0x1a0));
              }
              pcVar3 = *(char **)(lVar12 + 0x2e8);
              if (pcVar3 == (char *)0x0) {
                bVar15 = true;
              }
              else {
                bVar15 = *pcVar3 == '\x02';
              }
              if ((bVar4 & ((pcVar13 == (char *)0x0 || pcVar3 == pcVar13) | bVar15)) != 1)
              goto LAB_140245136;
            }
            if (lVar9 == lVar2) {
              if (*(longlong *)(lVar2 + 0x30) != lVar12) {
                lVar9 = FUN_14059e8cc();
                if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) goto LAB_140245136;
              }
              *(longlong *)(param_1 + 0xc) = lVar10;
              param_1[8] = (uint)lVar11;
              goto LAB_140244f43;
            }
          }
        }
      }
LAB_140245136:
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_1[0x10] + lVar14);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
LAB_140244f43:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140245161 FUN_140245161 body=2457 status=ok
// SIG undefined FUN_140245161(void)

void FUN_140245161(ulonglong param_1,longlong *param_2,char param_3,uint param_4,uint param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined *puVar7;
  ulonglong *puVar8;
  uint *puVar9;
  ulonglong uVar10;
  undefined7 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint *puVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined8 unaff_RSI;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong *puVar25;
  ulonglong uVar26;
  undefined1 auStack_168 [36];
  uint local_144;
  longlong *local_140;
  ulonglong local_138;
  uint *local_130;
  LPCRITICAL_SECTION local_128;
  longlong *local_120;
  undefined4 local_118;
  uint local_114;
  int local_110;
  uint local_10c;
  longlong local_108;
  longlong local_100;
  code *local_f8;
  ulonglong *local_f0;
  ulonglong *local_e8;
  longlong local_e0;
  ulonglong local_d8 [16];
  ulonglong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_58 = (ulonglong *)0x0;
  local_50 = 0x1000000001;
  local_d8[0] = param_1;
  local_144 = param_4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c964670) && (FUN_144b3d300(&DAT_14c964670), DAT_14c964670 == -1)) {
    FUN_145794a58(&DAT_14c964408);
    atexit((_func_5014 *)&LAB_142840318);
    _Init_thread_footer(&DAT_14c964670);
  }
  if ((DAT_14c949800 & 1) != 0) {
    uVar18 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((DAT_14c86a9f8 != '\x01') ||
       (iVar17 = *(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         ), iVar17 == 2)) {
LAB_140245aed:
      local_128 = (LPCRITICAL_SECTION)0x0;
      goto LAB_140245237;
    }
    if (iVar17 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      if (DVar5 == DVar6) goto LAB_140245aed;
    }
  }
  local_128 = (LPCRITICAL_SECTION)&DAT_14c964408;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c964408);
  uVar18 = 0;
LAB_140245237:
  local_118 = uVar18;
  if (param_3 == '\0') {
    puVar8 = (ulonglong *)0x0;
    iVar17 = 1;
LAB_140245540:
    local_f8 = (code *)*param_2;
    local_100 = param_2[1];
    puVar25 = local_d8;
    if (puVar8 != (ulonglong *)0x0) {
      puVar25 = puVar8;
    }
    uVar3 = FUN_14482ca40();
    if (iVar17 != 0) {
      local_10c = uVar3 | param_5 | 0x10000000;
      local_e8 = puVar25 + iVar17;
      uVar3 = local_144;
      do {
        if (DAT_14c964528 != DAT_14c964554) {
          uVar26 = *puVar25;
          uVar13 = ((uint)(uVar26 >> 0x14) & 0xffff ^ (uint)(uVar26 >> 4)) * -0x7a143595;
          uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
          puVar7 = DAT_14c964560;
          if (DAT_14c964560 == (undefined *)0x0) {
            puVar7 = &DAT_14c964558;
          }
          iVar17 = *(int *)(puVar7 + (ulonglong)(DAT_14c964568 - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4
                           );
          while (iVar17 != -1) {
            lVar20 = DAT_14c964520 + (longlong)iVar17 * 0x20;
            if (*(ulonglong *)(DAT_14c964520 + (longlong)iVar17 * 0x20) == uVar26) {
              local_108 = lVar20 + 8;
              if (local_108 != 0 && lVar20 != 0) {
                lVar22 = *(longlong *)(lVar20 + 8);
                plVar1 = *(longlong **)(lVar20 + 0x10);
                if (lVar22 == 0 && plVar1 != (longlong *)0x0) {
                  puVar16 = (uint *)(plVar1 + 2);
                  uVar19 = *(uint *)(plVar1 + 5);
                  uVar26 = 1;
                  local_140 = plVar1;
                  if (uVar19 == 0) {
                    iVar17 = 0;
                    uVar24 = 0;
                    uVar13 = 0;
                    goto LAB_140245825;
                  }
                  puVar9 = (uint *)plVar1[4];
                  if ((uint *)plVar1[4] == (uint *)0x0) {
                    puVar9 = puVar16;
                  }
                  uVar13 = *puVar9;
                  if (uVar13 != 0) {
                    iVar17 = 0;
                    uVar24 = 0;
                    goto LAB_1402457c6;
                  }
                  iVar17 = uVar19 + 0x1e;
                  if (-1 < (int)(uVar19 - 1)) {
                    iVar17 = uVar19 - 1;
                  }
                  uVar24 = 0;
                  uVar26 = (ulonglong)(uint)(iVar17 >> 5);
                  if (iVar17 >> 5 < 1) {
                    uVar26 = uVar24;
                  }
                  iVar21 = (int)uVar26;
                  iVar17 = 0;
                  goto LAB_1402457a5;
                }
                uVar26 = 1;
                if (DAT_14c964348 == 0) {
                  iVar17 = 0;
                  puVar16 = &DAT_14c964330;
                  uVar24 = 0;
                  local_140 = &DAT_14c964320;
                  uVar13 = 0;
                  goto LAB_140245825;
                }
                puVar16 = DAT_14c964340;
                if (DAT_14c964340 == (uint *)0x0) {
                  puVar16 = &DAT_14c964330;
                }
                uVar13 = *puVar16;
                if (uVar13 != 0) {
                  uVar24 = 0;
                  iVar17 = 0;
                  goto LAB_140245702;
                }
                iVar17 = DAT_14c964348 + 0x1e;
                if (-1 < (int)(DAT_14c964348 - 1)) {
                  iVar17 = DAT_14c964348 - 1;
                }
                uVar24 = 0;
                uVar26 = (ulonglong)(uint)(iVar17 >> 5);
                if (iVar17 >> 5 < 1) {
                  uVar26 = uVar24;
                }
                iVar21 = (int)uVar26;
                iVar17 = 0;
                goto LAB_1402456e0;
              }
              break;
            }
            iVar17 = *(int *)(lVar20 + 0x18);
          }
        }
LAB_140245633:
        puVar25 = puVar25 + 1;
      } while (puVar25 != local_e8);
    }
    if ((char)local_118 == '\0') {
      LeaveCriticalSection(local_128);
    }
    if (local_58 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
    if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  lVar22 = 1;
  lVar20 = 0;
  local_140 = param_2;
LAB_140245258:
  if (DAT_14c964578 != DAT_14c9645a4) {
    uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    puVar7 = DAT_14c9645b0;
    if (DAT_14c9645b0 == (undefined *)0x0) {
      puVar7 = &DAT_14c9645a8;
    }
    iVar17 = *(int *)(puVar7 + (ulonglong)(DAT_14c9645b8 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
    while (iVar17 != -1) {
      lVar15 = DAT_14c964570 + (longlong)iVar17 * 0x60;
      if (*(ulonglong *)(DAT_14c964570 + (longlong)iVar17 * 0x60) == param_1) {
        local_120 = (longlong *)(lVar15 + 8);
        if (local_120 != (longlong *)0x0 && lVar15 != 0) {
          iVar17 = (*(int *)(lVar15 + 0x10) - *(int *)(lVar15 + 0x3c)) + (int)lVar22;
          if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar17);
          }
          if ((int)local_50._4_4_ < iVar17) {
            FUN_14089378c(local_d8);
          }
          puVar16 = (uint *)(lVar15 + 0x18);
          uVar3 = *(uint *)(lVar15 + 0x30);
          if (uVar3 == 0) {
            uVar26 = 1;
            uVar24 = 0;
            iVar17 = 0;
            uVar13 = 0;
            goto LAB_1402453b5;
          }
          puVar9 = *(uint **)(lVar15 + 0x28);
          if (*(uint **)(lVar15 + 0x28) == (uint *)0x0) {
            puVar9 = puVar16;
          }
          uVar13 = *puVar9;
          if (uVar13 != 0) {
            uVar24 = 0;
            iVar17 = 0;
            goto LAB_140245383;
          }
          iVar17 = uVar3 + 0x1e;
          if (-1 < (int)(uVar3 - 1)) {
            iVar17 = uVar3 - 1;
          }
          uVar24 = 0;
          uVar26 = (ulonglong)(uint)(iVar17 >> 5);
          if (iVar17 >> 5 < 1) {
            uVar26 = uVar24;
          }
          iVar17 = 0;
          goto LAB_14024536f;
        }
        break;
      }
      iVar17 = *(int *)(lVar15 + 0x58);
    }
  }
  goto LAB_1402453ba;
  while( true ) {
    iVar17 = iVar17 + 0x20;
    uVar13 = puVar9[uVar24 + 1];
    uVar24 = uVar24 + 1;
    if (uVar13 != 0) break;
LAB_14024536f:
    if (uVar26 == uVar24) goto LAB_1402453ba;
  }
LAB_140245383:
  uVar26 = (ulonglong)(-uVar13 & uVar13);
  uVar10 = uVar26 * 2 + 1;
  lVar22 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar22 == 0; lVar22 = lVar22 + -1) {
    }
  }
  uVar13 = (iVar17 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
  if ((int)uVar3 <= (int)uVar13) {
    uVar13 = uVar3;
  }
LAB_1402453b5:
  if (uVar13 != uVar3) {
    uVar19 = 0xffffffff;
    local_138 = (ulonglong)uVar3;
    local_130 = puVar16;
    do {
      uVar2 = local_50;
      uVar10 = *(ulonglong *)(*local_120 + (longlong)(int)uVar13 * 0x10);
      lVar22 = (longlong)(int)local_50;
      uVar3 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,uVar3);
      if (local_50._4_4_ < uVar3) {
        FUN_146908068(local_d8,uVar2 & 0xffffffff);
        puVar16 = local_130;
      }
      puVar8 = local_58;
      if (local_58 == (ulonglong *)0x0) {
        puVar8 = local_d8;
      }
      puVar8[lVar22] = uVar10;
      uVar19 = uVar19 & ~(uint)uVar26;
      puVar9 = *(uint **)(lVar15 + 0x28);
      if (*(uint **)(lVar15 + 0x28) == (uint *)0x0) {
        puVar9 = puVar16;
      }
      uVar3 = *(uint *)(lVar15 + 0x30);
      iVar21 = (int)uVar24;
      lVar22 = (longlong)iVar21;
      uVar13 = puVar9[lVar22] & uVar19;
      if (uVar13 == 0) {
        iVar4 = uVar3 + 0x1e;
        if (-1 < (int)(uVar3 - 1)) {
          iVar4 = uVar3 - 1;
        }
        iVar4 = iVar4 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar12 = iVar4;
        if (iVar4 < iVar21) {
          iVar12 = iVar21;
        }
        puVar16 = local_130;
        if (iVar21 < iVar4) {
          lVar23 = 0;
          do {
            uVar13 = puVar9[lVar22 + lVar23 + 1];
            if (uVar13 != 0) {
              uVar24 = (ulonglong)(iVar21 + (int)lVar23 + 1);
              uVar19 = 0xffffffff;
              goto LAB_1402454bd;
            }
            iVar17 = iVar17 + 0x20;
            lVar23 = lVar23 + 1;
          } while (iVar12 - lVar22 != lVar23);
          uVar19 = 0xffffffff;
          iVar21 = iVar12;
        }
        uVar24 = (ulonglong)(iVar21 + 1);
        uVar13 = uVar3;
      }
      else {
LAB_1402454bd:
        uVar26 = (ulonglong)(-uVar13 & uVar13);
        uVar10 = uVar26 * 2 + 1;
        lVar22 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        uVar13 = (iVar17 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
        if ((int)uVar3 <= (int)uVar13) {
          uVar13 = uVar3;
        }
      }
    } while (uVar13 != (uint)local_138);
  }
LAB_1402453ba:
  lVar20 = lVar20 + 1;
  lVar22 = (longlong)(int)local_50;
  puVar8 = local_58;
  param_2 = local_140;
  iVar17 = (int)local_50;
  if (lVar22 <= lVar20) goto LAB_140245540;
  if (local_58 == (ulonglong *)0x0) {
    puVar8 = local_d8;
  }
  param_1 = puVar8[lVar20];
  goto LAB_140245258;
  while( true ) {
    iVar17 = iVar17 + 0x20;
    uVar13 = puVar16[uVar24 + 1];
    uVar24 = uVar24 + 1;
    if (uVar13 != 0) break;
LAB_1402456e0:
    if (uVar26 == uVar24) {
      puVar16 = &DAT_14c964330;
      local_140 = &DAT_14c964320;
      uVar19 = DAT_14c964348;
      goto LAB_140245a2d;
    }
  }
  uVar24 = uVar24 & 0xffffffff;
  uVar3 = local_144;
LAB_140245702:
  uVar26 = (ulonglong)(-uVar13 & uVar13);
  uVar10 = uVar26 * 2 + 1;
  lVar15 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar15 == 0; lVar15 = lVar15 + -1) {
    }
  }
  uVar13 = (iVar17 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
  if ((int)DAT_14c964348 <= (int)uVar13) {
    uVar13 = DAT_14c964348;
  }
  puVar16 = &DAT_14c964330;
  local_140 = &DAT_14c964320;
  goto LAB_140245825;
  while( true ) {
    iVar17 = iVar17 + 0x20;
    uVar13 = puVar9[uVar24 + 1];
    uVar24 = uVar24 + 1;
    if (uVar13 != 0) break;
LAB_1402457a5:
    if (uVar26 == uVar24) goto LAB_140245a2d;
  }
  uVar24 = uVar24 & 0xffffffff;
  uVar3 = local_144;
LAB_1402457c6:
  uVar26 = (ulonglong)(-uVar13 & uVar13);
  uVar10 = uVar26 * 2 + 1;
  lVar15 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar15 == 0; lVar15 = lVar15 + -1) {
    }
  }
  uVar13 = (iVar17 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
  if ((int)uVar19 <= (int)uVar13) {
    uVar13 = uVar19;
  }
LAB_140245825:
  local_120 = (longlong *)CONCAT71(local_120._1_7_,lVar22 == 0 && plVar1 != (longlong *)0x0);
  local_138 = CONCAT71(local_138._1_7_,plVar1 == (longlong *)0x0 && lVar22 == 0);
  uVar19 = 0xffffffff;
  uVar10 = 0;
  local_f0 = puVar25;
  do {
    local_114 = (uint)uVar10;
    local_130 = (uint *)(local_108 + (uVar10 & 0xff) * 8);
    uVar14 = uVar13;
LAB_140245863:
    uVar13 = uVar14;
    while( true ) {
      iVar21 = (int)uVar24;
      if ((char)local_120 == '\0') {
        puVar9 = local_130;
        if ((local_138 & 1) != 0) goto LAB_140245633;
      }
      else {
        if ((int)puVar16[6] <= (int)uVar13) goto LAB_140245633;
        puVar9 = (uint *)((longlong)(int)uVar13 * 0x10 + *local_140);
      }
      lVar22 = *(longlong *)puVar9;
      uVar10 = (ulonglong)*(uint *)(lVar22 + 8);
      if ((*(uint *)(lVar22 + 8) & uVar3) == 0) {
        uVar14 = *(uint *)(lVar22 + 0xc);
        if ((int)uVar14 < DAT_14c9647dc) {
          lVar15 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
        }
        else {
          lVar15 = 0;
        }
        uVar10 = (ulonglong)*(uint *)(lVar15 + 8);
        if ((local_10c & *(uint *)(lVar15 + 8)) == 0) {
          local_110 = iVar17;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar22);
          }
          local_e0 = lVar22;
          uVar10 = (*local_f8)(local_100,&local_e0);
          puVar25 = local_f0;
          uVar3 = local_144;
          iVar17 = local_110;
        }
      }
      if ((char)local_120 == '\0') break;
      uVar19 = uVar19 & ~(uint)uVar26;
      puVar9 = *(uint **)(puVar16 + 4);
      if (*(uint **)(puVar16 + 4) == (uint *)0x0) {
        puVar9 = puVar16;
      }
      uVar13 = puVar16[6];
      lVar22 = (longlong)iVar21;
      uVar14 = puVar9[lVar22] & uVar19;
      if (uVar14 != 0) goto LAB_1402459b5;
      iVar4 = uVar13 + 0x1e;
      if (-1 < (int)(uVar13 - 1)) {
        iVar4 = uVar13 - 1;
      }
      iVar4 = iVar4 >> 5;
      iVar17 = iVar17 + 0x20;
      iVar12 = iVar4;
      if (iVar4 < iVar21) {
        iVar12 = iVar21;
      }
      if (iVar21 < iVar4) {
        lVar15 = 0;
        do {
          uVar14 = puVar9[lVar22 + lVar15 + 1];
          if (uVar14 != 0) {
            uVar24 = (ulonglong)(iVar21 + (int)lVar15 + 1);
            uVar19 = 0xffffffff;
            goto LAB_1402459b5;
          }
          iVar17 = iVar17 + 0x20;
          lVar15 = lVar15 + 1;
        } while (iVar12 - lVar22 != lVar15);
        uVar19 = 0xffffffff;
        iVar21 = iVar12;
      }
      uVar24 = (ulonglong)(iVar21 + 1);
      uVar3 = local_144;
    }
    local_138 = CONCAT71(local_138._1_7_,1);
    uVar11 = (undefined7)(uVar10 >> 8);
    uVar10 = CONCAT71(uVar11,1);
    if ((local_114 & 1) == 0) {
      local_138 = CONCAT71(local_138._1_7_,*(longlong *)(lVar20 + 0x10) == 0);
      uVar10 = CONCAT71(uVar11,1);
    }
  } while( true );
LAB_140245a2d:
  iVar17 = iVar21 * 0x20 + 0x20;
  uVar24 = (ulonglong)(iVar21 + 1);
  uVar26 = 1;
  uVar3 = local_144;
  uVar13 = uVar19;
  goto LAB_140245825;
LAB_1402459b5:
  uVar26 = (ulonglong)(-uVar14 & uVar14);
  uVar10 = uVar26 * 2 + 1;
  lVar22 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar22 == 0; lVar22 = lVar22 + -1) {
    }
  }
  uVar14 = (iVar17 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
  if ((int)uVar13 <= (int)uVar14) {
    uVar14 = uVar13;
  }
  goto LAB_140245863;
}



// FUNCTION 140245afc FUN_140245afc body=193 status=ok
// SIG undefined FUN_140245afc(void)

void FUN_140245afc(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  undefined8 *puVar4;
  uint *puVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)*(int *)(param_1 + 0x3a8) != 0) {
    puVar5 = *(uint **)(param_1 + 0x3a0);
    puVar1 = puVar5 + (longlong)*(int *)(param_1 + 0x3a8) * 2;
    do {
      if (((puVar5[1] != 0) && (uVar2 = *puVar5, -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc))
      {
        puVar4 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if (((puVar4 != (undefined8 *)0x0) && (*(uint *)(puVar4 + 2) == puVar5[1])) &&
           ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
            local_30 = *puVar4;
          }
          else {
            local_30 = 0;
          }
          cVar3 = (*(code *)*param_2)(param_2[1],&local_30);
          if (cVar3 == '\0') break;
        }
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140245bbe FUN_140245bbe body=460 status=ok
// SIG undefined FUN_140245bbe(void)

void FUN_140245bbe(PSRWLOCK param_1,byte param_2,uint param_3)

{
  undefined1 *puVar1;
  char cVar2;
  PVOID pvVar3;
  uint uVar4;
  PSRWLOCK pRVar5;
  int iVar6;
  PVOID pvVar7;
  longlong lVar8;
  int *piVar9;
  
  AcquireSRWLockShared(param_1);
  if ((param_3 < *(uint *)&param_1[2].Ptr) &&
     (*(int *)&param_1[4].Ptr != *(int *)((longlong)&param_1[9].Ptr + 4))) {
    piVar9 = (int *)((longlong)param_1[1].Ptr + (longlong)(int)param_3 * 0x28);
    uVar4 = FUN_14490dc6d(piVar9);
    pRVar5 = param_1[0xb].Ptr;
    if (param_1[0xb].Ptr == (PSRWLOCK)0x0) {
      pRVar5 = param_1 + 10;
    }
    iVar6 = *(int *)((longlong)&pRVar5->Ptr +
                    (ulonglong)(*(int *)&param_1[0xc].Ptr - 1U & uVar4) * 4);
    if (iVar6 != -1) {
      pvVar3 = param_1[3].Ptr;
      do {
        lVar8 = (longlong)iVar6 * 0x98;
        if ((((*(int *)((longlong)pvVar3 + lVar8) == *piVar9) &&
             (puVar1 = (undefined1 *)((longlong)pvVar3 + lVar8),
             *(longlong *)(puVar1 + 8) == *(longlong *)(piVar9 + 2))) &&
            (*(longlong *)(puVar1 + 0x10) == *(longlong *)(piVar9 + 4))) &&
           ((*(longlong *)(puVar1 + 0x18) == *(longlong *)(piVar9 + 6) &&
            (*(longlong *)(puVar1 + 0x20) == *(longlong *)(piVar9 + 8))))) {
          if ((puVar1 != (undefined1 *)0x0) &&
             ((puVar1 != &DAT_ffffffffffffffd8 && ((byte)puVar1[0x88] < param_2)))) {
            cVar2 = puVar1[0x2c];
            ReleaseSRWLockShared(param_1);
            if (cVar2 == '\x03') {
              return;
            }
            AcquireSRWLockExclusive(param_1);
            if (*(int *)&param_1[4].Ptr == *(int *)((longlong)&param_1[9].Ptr + 4))
            goto LAB_140245d85;
            piVar9 = (int *)((longlong)(int)param_3 * 0x28 + (longlong)param_1[1].Ptr);
            uVar4 = FUN_14490dc6d(piVar9);
            pRVar5 = param_1 + 10;
            if (param_1[0xb].Ptr != (PSRWLOCK)0x0) {
              pRVar5 = param_1[0xb].Ptr;
            }
            iVar6 = *(int *)((longlong)&pRVar5->Ptr +
                            (ulonglong)(*(int *)&param_1[0xc].Ptr - 1U & uVar4) * 4);
            if (iVar6 == -1) goto LAB_140245d85;
            pvVar3 = param_1[3].Ptr;
            goto LAB_140245d12;
          }
          break;
        }
        iVar6 = *(int *)((longlong)pvVar3 + lVar8 + 0x90);
      } while (iVar6 != -1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140245cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared(param_1);
  return;
  while (iVar6 = *(int *)((longlong)pvVar3 + lVar8 + 0x90), iVar6 != -1) {
LAB_140245d12:
    lVar8 = (longlong)iVar6 * 0x98;
    if ((((*(int *)((longlong)pvVar3 + lVar8) == *piVar9) &&
         (pvVar7 = (PVOID)((longlong)pvVar3 + lVar8),
         *(longlong *)((longlong)pvVar7 + 8) == *(longlong *)(piVar9 + 2))) &&
        (*(longlong *)((longlong)pvVar7 + 0x10) == *(longlong *)(piVar9 + 4))) &&
       ((*(longlong *)((longlong)pvVar7 + 0x18) == *(longlong *)(piVar9 + 6) &&
        (*(longlong *)((longlong)pvVar7 + 0x20) == *(longlong *)(piVar9 + 8))))) goto LAB_140245d5a;
  }
LAB_140245d85:
  pvVar7 = (PVOID)0x0;
LAB_140245d5a:
  lVar8 = (longlong)pvVar7 + 0x28;
  if (pvVar7 == (PVOID)0x0) {
    lVar8 = 0;
  }
  *(byte *)(lVar8 + 0x60) = param_2;
  FUN_1402d01fc(lVar8,1);
                    /* WARNING: Could not recover jumptable at 0x000140245d7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive(param_1);
  return;
}



// FUNCTION 140245d8a FUN_140245d8a body=7727 status=ok
// SIG undefined FUN_140245d8a(void)

code ** FUN_140245d8a(code **param_1,undefined8 *param_2,wchar_t *param_3,undefined8 param_4)

{
  short sVar1;
  wint_t _C;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  size_t sVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  code *pcVar16;
  longlong *plVar17;
  wchar_t *pwVar18;
  int iVar19;
  longlong lVar20;
  code *pcVar21;
  undefined2 *puVar22;
  int iVar23;
  longlong lVar24;
  int iVar25;
  ulonglong uVar26;
  code **ppcVar27;
  code **ppcVar28;
  longlong lVar29;
  wchar_t *pwVar30;
  uint uVar31;
  uint uVar32;
  ushort uVar33;
  ushort uVar34;
  wchar_t wVar35;
  uint uVar36;
  int iVar37;
  wchar_t wVar38;
  int iVar39;
  int iVar40;
  longlong lVar41;
  undefined2 *puVar42;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  uint local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  wchar_t *local_298;
  code *local_290;
  undefined1 *local_288;
  code **local_280;
  code *local_278;
  code *local_270;
  code **local_268;
  byte local_259;
  code **local_258;
  code **local_250;
  code **local_248;
  int local_240;
  int local_23c;
  undefined8 local_238;
  wchar_t *local_230;
  code *local_228;
  int local_220;
  undefined8 local_218;
  code *local_210;
  undefined4 local_208;
  undefined4 local_204;
  longlong local_200;
  longlong local_1f8;
  ulonglong uStack_1f0;
  code *local_1e8;
  int local_1e0;
  longlong *local_1d8;
  undefined4 local_1d0;
  code *local_1c8;
  undefined8 uStack_1c0;
  code *local_1b8;
  int local_1b0;
  code *local_1a8;
  ulonglong uStack_1a0;
  code *local_198;
  undefined8 uStack_190;
  longlong local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  longlong lStack_170;
  undefined8 local_168;
  longlong lStack_160;
  longlong local_158;
  undefined8 uStack_150;
  ulonglong local_148;
  longlong lStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  *param_1 = (code *)0x0;
  iVar25 = DAT_14cb0f150;
  puVar22 = DAT_14cb0f148;
  lVar29 = (longlong)DAT_14cb0f150;
  *(int *)(param_1 + 1) = DAT_14cb0f150;
  local_238 = param_4;
  if (lVar29 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar25,0);
    memcpy(*param_1,puVar22,lVar29 * 2);
  }
  ppcVar27 = param_1 + 2;
  param_1[2] = (code *)0x0;
  iVar25 = DAT_14cb0f170;
  pvVar2 = DAT_14cb0f168;
  lVar29 = (longlong)DAT_14cb0f170;
  *(int *)(param_1 + 3) = DAT_14cb0f170;
  if (lVar29 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(ppcVar27,iVar25,0);
    memcpy(*ppcVar27,pvVar2,lVar29 * 2);
  }
  *(undefined4 *)(param_1 + 4) = DAT_14cb0f198;
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  local_250 = param_1 + 5;
  FUN_140810f5e(local_250,0);
  ppcVar28 = param_1 + 0xb;
  param_1[9] = (code *)0x0;
  param_1[10] = (code *)0x0;
  param_1[7] = (code *)0x0;
  param_1[8] = (code *)0x0;
  param_1[0xb] = (code *)0x0;
  iVar25 = DAT_14cb0f180;
  pvVar2 = DAT_14cb0f178;
  lVar29 = (longlong)DAT_14cb0f180;
  *(int *)(param_1 + 0xc) = DAT_14cb0f180;
  local_248 = ppcVar28;
  if (lVar29 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1446dd670(ppcVar28,iVar25,0);
    memcpy(*ppcVar28,pvVar2,lVar29 * 2);
  }
  local_268 = param_1;
  if (DAT_14cb0db68 == '\0') {
    FUN_145d12fb6(&DAT_14cb0f148);
    ppcVar28 = local_268;
    DAT_14cb0db68 = '\x01';
    iVar39 = 0;
    iVar25 = DAT_14cb0f150 + -1;
    if (DAT_14cb0f150 == 0) {
      iVar25 = iVar39;
    }
    FUN_1402980a2(local_268,DAT_14cb0f148,iVar25);
    iVar25 = DAT_14cb0f170 + -1;
    if (DAT_14cb0f170 == 0) {
      iVar25 = iVar39;
    }
    FUN_1402980a2(ppcVar27,DAT_14cb0f168,iVar25);
    *(undefined4 *)(ppcVar28 + 4) = DAT_14cb0f198;
    iVar25 = DAT_14cb0f180 + -1;
    if (DAT_14cb0f180 == 0) {
      iVar25 = iVar39;
    }
    FUN_1402980a2(local_248,DAT_14cb0f178,iVar25);
  }
  sVar9 = wcslen(param_3);
  lVar20 = (longlong)((sVar9 << 0x20) + 0x100000000) >> 0x1f;
  lVar29 = -1;
  if (-2 < (int)sVar9) {
    lVar29 = lVar20 + (ulonglong)(lVar20 == 0);
  }
  local_230 = (wchar_t *)FUN_14001cc68(lVar29,0x10);
  wcscpy(local_230,param_3);
  ppcVar28 = local_268;
  local_258 = ppcVar27;
  if ((int)local_238 == 2) {
    iVar39 = 0;
    iVar25 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      iVar25 = iVar39;
    }
    FUN_1402980a2(local_268,*param_2,iVar25);
    iVar25 = *(int *)(param_2 + 3) + -1;
    if (*(int *)(param_2 + 3) == 0) {
      iVar25 = iVar39;
    }
    FUN_1402980a2(ppcVar27,param_2[2],iVar25);
    iVar25 = *(int *)(param_2 + 6) + -1;
    if (*(int *)(param_2 + 6) == 0) {
      iVar25 = iVar39;
    }
    FUN_1402980a2(local_250,param_2[5],iVar25);
    iVar25 = *(int *)(param_2 + 0xc) + -1;
    if (*(int *)(param_2 + 0xc) == 0) {
      iVar25 = iVar39;
    }
    FUN_1402980a2(local_248,param_2[0xb],iVar25);
    *(undefined4 *)(ppcVar28 + 4) = *(undefined4 *)(param_2 + 4);
LAB_14024604f:
    if (0 < *(int *)(param_2 + 10)) {
      ppcVar27 = local_268 + 9;
      lVar20 = 8;
      lVar29 = 0;
      do {
        lVar24 = param_2[9];
        iVar25 = *(int *)(local_268 + 10);
        lVar41 = (longlong)iVar25;
        *(uint *)(local_268 + 10) = iVar25 + 1U;
        if (*(uint *)((longlong)local_268 + 0x54) < iVar25 + 1U) {
          FUN_1447a1bd6(ppcVar27,iVar25);
        }
        pcVar21 = *ppcVar27;
        pcVar16 = pcVar21 + lVar41 * 0x10;
        *(undefined8 *)(pcVar21 + lVar41 * 0x10) = 0;
        iVar25 = *(int *)(lVar24 + lVar20);
        pvVar2 = *(void **)(lVar24 + -8 + lVar20);
        *(int *)(pcVar21 + (lVar41 * 8 + 4) * 2) = iVar25;
        if ((longlong)iVar25 == 0) {
          *(undefined4 *)(pcVar16 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(pcVar16,iVar25,0);
          memcpy(*(void **)pcVar16,pvVar2,(longlong)iVar25 * 2);
        }
        lVar29 = lVar29 + 1;
        lVar20 = lVar20 + 0x10;
      } while (lVar29 < *(int *)(param_2 + 10));
    }
  }
  else if ((int)local_238 - 1U < 2) goto LAB_14024604f;
  pwVar18 = local_230 + -1;
  do {
    pwVar30 = pwVar18;
    pwVar18 = pwVar30 + 1;
  } while (pwVar30[1] == L' ');
  pwVar10 = wcschr(pwVar18,L'?');
  pwVar11 = wcschr(pwVar18,L'#');
  ppcVar27 = local_268;
  pwVar12 = pwVar11;
  if (pwVar10 == (wchar_t *)0x0) {
    if (pwVar11 != (wchar_t *)0x0) goto LAB_14024614f;
  }
  else {
    if (pwVar10 < pwVar11) {
      pwVar12 = pwVar10;
    }
    if (pwVar11 == (wchar_t *)0x0) {
      pwVar12 = pwVar10;
    }
LAB_14024614f:
    wVar35 = *pwVar12;
    *pwVar12 = L'\0';
    wVar38 = L'\0';
    pwVar12 = pwVar12 + 1;
    do {
      pwVar11 = wcschr(pwVar12,L'?');
      pwVar13 = wcschr(pwVar12,L'#');
      pwVar10 = pwVar13;
      if (pwVar11 == (wchar_t *)0x0) {
        if (pwVar13 != (wchar_t *)0x0) goto LAB_1402461a9;
        pwVar10 = (wchar_t *)0x0;
      }
      else {
        if (pwVar11 < pwVar13) {
          pwVar10 = pwVar11;
        }
        if (pwVar13 == (wchar_t *)0x0) {
          pwVar10 = pwVar11;
        }
LAB_1402461a9:
        wVar38 = *pwVar10;
        *pwVar10 = L'\0';
        pwVar10 = pwVar10 + 1;
      }
      pwVar11 = wcschr(pwVar12,L'?');
      if ((pwVar11 != (wchar_t *)0x0) || (pwVar11 = wcschr(pwVar12,L'#'), pwVar11 != (wchar_t *)0x0)
         ) {
        FUN_140810d00(&local_198,0);
        FUN_147bcc67a(ppcVar27,&local_198);
        if (lStack_140 != 0) {
          FUN_1400020a8();
        }
        FUN_1447a1747(uStack_150,local_148 & 0xffffffff);
        if (uStack_150 != 0) {
          FUN_1400020a8();
        }
        if (lStack_160 != 0) {
          FUN_1400020a8();
        }
        if (lStack_170 != 0) {
          FUN_1400020a8();
        }
        if (local_188 != 0) {
          FUN_1400020a8();
        }
        if (local_198 != (code *)0x0) {
          FUN_1400020a8();
        }
        *(undefined4 *)((longlong)ppcVar27 + 0x24) = 0;
        break;
      }
      if (wVar35 == L'?') {
        if ((pwVar12 == (wchar_t *)0x0) || (*pwVar12 != L'-')) {
          FUN_141556918(ppcVar27,pwVar12);
        }
        else {
          FUN_14622b792(ppcVar27,pwVar12 + 1,0,&DAT_14c872af8);
        }
      }
      else {
        FUN_14020fad6(local_248,pwVar12);
      }
      pwVar12 = pwVar10;
      wVar35 = wVar38;
    } while (pwVar10 != (wchar_t *)0x0);
  }
  iVar25 = *(int *)((longlong)ppcVar27 + 0x24);
  if (pwVar18 == (wchar_t *)0x0 || iVar25 != 1) {
    bVar47 = false;
  }
  else {
    pwVar30 = pwVar30 + 2;
    pwVar12 = pwVar18;
LAB_1402462f2:
    if (*pwVar12 != L':') {
      if (*pwVar12 == L'\0') goto LAB_1402463c6;
LAB_14024632c:
      pwVar12 = pwVar12 + 1;
      goto LAB_1402462f2;
    }
    if ((((pwVar12[1] != L'\\') && (pwVar12[1] != L'/')) ||
        (sVar9 = wcslen(pwVar12), (int)sVar9 < 3)) ||
       ((pwVar12[2] != L'/' && (pwVar12[2] != L'\\')))) goto LAB_14024632c;
    if (pwVar12 != (wchar_t *)0x0) {
      *pwVar12 = L'\0';
      iVar25 = iswalpha(*pwVar18);
      if (iVar25 == 0) goto LAB_140246425;
      wVar35 = *pwVar18;
      ppcVar27 = local_268;
      goto joined_r0x000140246363;
    }
LAB_1402463c6:
    iVar25 = 1;
    bVar47 = false;
    ppcVar27 = local_268;
  }
LAB_1402463d2:
  if ((iVar25 == 1) && (pwVar30 = pwVar18, pwVar18 != (wchar_t *)0x0)) {
    do {
      while( true ) {
        pwVar12 = pwVar30 + 1;
        wVar35 = *pwVar30;
        pwVar30 = pwVar12;
        if ((wVar35 == L'/') || (wVar35 == L'\\')) break;
        if (wVar35 == L'\0') goto LAB_14024643a;
      }
    } while ((0x2d < (ushort)*pwVar12 - 0x2f) ||
            ((0x200000010001U >> ((ulonglong)((ushort)*pwVar12 - 0x2f) & 0x3f) & 1) == 0));
LAB_14024642c:
    *(undefined4 *)((longlong)ppcVar27 + 0x24) = 0;
    pwVar18 = L"";
  }
  else if (iVar25 != 1) {
    pwVar18 = L"";
  }
LAB_14024643a:
  FUN_140056680(&local_1a8,pwVar18);
  ppcVar28 = local_258;
  if (*(int *)((longlong)ppcVar27 + 0x24) != 1) goto LAB_140247232;
  if ((int)uStack_1a0 - 4U < 0x7ffffffd) {
    sVar1 = *(short *)local_1a8;
    if ((sVar1 == 0x3a) || (sVar1 == 0x5b)) {
LAB_14024648a:
      pcVar16 = local_1a8 + (longlong)(int)uStack_1a0 * 2;
      goto LAB_140246584;
    }
    if (*(short *)(local_1a8 + 2) != 0x3a) {
      if (sVar1 != 0x2f) goto LAB_14024648a;
      local_1b8 = local_1a8;
      local_1b0 = (int)uStack_1a0 + -1;
      cVar5 = FUN_14022f3b8(&local_1b8,CONCAT71((uint7)(uint3)((uint)local_1b0 >> 8),1),0);
      if (cVar5 != '\0') goto LAB_140246579;
    }
    if (!bVar47) {
      iVar25 = DAT_14cb0f150 + -1;
      if (DAT_14cb0f150 == 0) {
        iVar25 = 0;
      }
      FUN_1402980a2(local_268,DAT_14cb0f148,iVar25);
    }
    iVar25 = (int)uStack_1a0 + -1;
    if ((int)uStack_1a0 == 0) {
      iVar25 = 0;
    }
    FUN_1402980a2(local_250,local_1a8,iVar25);
    ppcVar27 = local_268;
    iVar25 = DAT_14cb0f180 + -1;
    if (DAT_14cb0f180 == 0) {
      iVar25 = 0;
    }
    FUN_1402980a2(local_248,DAT_14cb0f178,iVar25);
    FUN_14020fad6(&local_1a8,&DAT_149dfb77a);
    FUN_14020fad6(ppcVar28,&DAT_149dfb77a);
  }
  else {
LAB_140246579:
    pcVar16 = local_1a8 + (longlong)(int)uStack_1a0 * 2;
    if ((int)uStack_1a0 == 0) {
      iVar25 = -1;
      iVar39 = -1;
    }
    else {
LAB_140246584:
      iVar39 = 0;
      pcVar21 = local_1a8;
      do {
        if (*(short *)pcVar21 == 0x3a) goto LAB_1402465a2;
        pcVar21 = pcVar21 + 2;
        iVar39 = iVar39 + 1;
      } while (pcVar21 != pcVar16);
      iVar39 = -1;
LAB_1402465a2:
      iVar25 = 0;
      pcVar21 = local_1a8;
      do {
        if (*(short *)pcVar21 == 0x2e) goto LAB_1402465bd;
        pcVar21 = pcVar21 + 2;
        iVar25 = iVar25 + 1;
      } while (pcVar21 != pcVar16);
      iVar25 = -1;
LAB_1402465bd:
      iVar23 = 0;
      pcVar21 = local_1a8;
      do {
        if (*(short *)pcVar21 == 0x5b) goto LAB_1402465e5;
        pcVar21 = pcVar21 + 2;
        iVar23 = iVar23 + 1;
      } while (pcVar21 != pcVar16);
    }
    iVar23 = -1;
LAB_1402465e5:
    uVar26 = (longlong)pcVar16 - (longlong)local_1a8;
    do {
      if (pcVar16 == local_1a8) {
        iVar40 = -1;
        goto LAB_140246609;
      }
      uVar26 = uVar26 - 2;
      pcVar21 = pcVar16 + -2;
      pcVar16 = pcVar16 + -2;
    } while (*(short *)pcVar21 != 0x3a);
    iVar40 = (int)(uVar26 >> 1);
LAB_140246609:
    uVar36 = iVar39 + 1;
    local_2b8 = 0;
    local_2b0 = uVar36;
    iVar6 = FUN_1447ee042(&local_1a8,&DAT_149e31048,1,0);
    ppcVar27 = local_268;
    bVar43 = iVar39 != -1;
    bVar44 = iVar40 != -1;
    bVar45 = iVar39 != iVar40;
    bVar46 = iVar6 != iVar40;
    ppcVar28 = local_258;
    if (((bool)(~bVar47 & 1 < iVar39)) &&
       (((iVar39 < iVar23 || iVar23 == -1 && ((!bVar46 || !bVar45) || (!bVar44 || !bVar43)) ||
         (((bVar46 && bVar45) && (bVar44 && bVar43) &&
          (*(short *)(local_1a8 + (ulonglong)uVar36 * 2) == 0x2f)))) &&
        (iVar25 == -1 || iVar39 < iVar25)))) {
      iVar25 = (int)uStack_1a0 + -1;
      pcVar16 = local_1a8;
      if ((int)uStack_1a0 == 0) {
        pcVar16 = (code *)&DAT_149dfb77a;
        iVar25 = 0;
      }
      if (iVar39 < iVar25) {
        iVar25 = iVar39;
      }
      if (iVar25 < 1) {
        iVar25 = 0;
      }
      FUN_14006620a(&local_198,pcVar16,iVar25);
      ppcVar28 = local_258;
      if (&local_198 == ppcVar27) {
        if (local_198 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*ppcVar27 != (code *)0x0) {
          FUN_1400020a8();
        }
        *ppcVar27 = local_198;
        local_198 = (code *)0x0;
        *(int *)(ppcVar27 + 1) = (int)uStack_190;
        *(undefined4 *)((longlong)ppcVar27 + 0xc) = uStack_190._4_4_;
        ppcVar28 = local_258;
      }
      uVar31 = (int)uStack_1a0 - 1;
      pcVar16 = local_1a8;
      if ((int)uStack_1a0 == 0) {
        uVar31 = 0;
        pcVar16 = (code *)&DAT_149dfb77a;
      }
      if ((int)uVar31 <= (int)uVar36) {
        uVar36 = uVar31;
      }
      uVar26 = (ulonglong)uVar36;
      if ((int)uVar36 < 1) {
        uVar26 = 0;
      }
      FUN_14006620a(&local_198,pcVar16 + uVar26 * 2,uVar31 - (int)uVar26);
      if (local_1a8 != (code *)0x0) {
        FUN_1400020a8();
      }
      local_1a8 = local_198;
      uStack_1a0 = uStack_190;
    }
    if ((int)uStack_1a0 - 3U < 0x7ffffffe) {
      iVar25 = (int)uStack_1a0;
      if ((*(short *)local_1a8 == 0x2f) && (*(short *)(local_1a8 + 2) == 0x2f)) {
        FUN_14006620a(&local_198,local_1a8 + 4);
        if (local_1a8 != (code *)0x0) {
          FUN_1400020a8();
        }
        local_1a8 = local_198;
        uStack_1a0 = uStack_190;
        FUN_14020fad6(ppcVar28,&DAT_149dfb77a);
        goto LAB_1402467c8;
      }
LAB_1402467cc:
      iVar39 = 0;
      pcVar16 = local_1a8;
      do {
        if (*(short *)pcVar16 == 0x2e) goto LAB_1402467ed;
        pcVar16 = pcVar16 + 2;
        iVar39 = iVar39 + 1;
      } while (pcVar16 != local_1a8 + (longlong)iVar25 * 2);
      iVar39 = -1;
LAB_1402467ed:
      iVar40 = 0;
      pcVar16 = local_1a8;
      do {
        if (*(short *)pcVar16 == 0x3a) goto LAB_14024680f;
        pcVar16 = pcVar16 + 2;
        iVar40 = iVar40 + 1;
      } while (pcVar16 != local_1a8 + (longlong)iVar25 * 2);
    }
    else {
LAB_1402467c8:
      iVar25 = (int)uStack_1a0;
      if ((int)uStack_1a0 != 0) goto LAB_1402467cc;
      iVar39 = -1;
    }
    iVar40 = -1;
LAB_14024680f:
    local_259 = (bVar46 && bVar45) && (bVar44 && bVar43);
    puVar14 = (undefined8 *)FUN_141538082();
    iVar25 = *(int *)(puVar14 + 1);
    iVar7 = 0;
    iVar6 = iVar25 + -1;
    if (iVar25 == 0) {
      iVar6 = 0;
    }
    puVar42 = &DAT_149dfb77a;
    puVar22 = &DAT_149dfb77a;
    if (iVar25 != 0) {
      puVar22 = (undefined2 *)*puVar14;
    }
    local_2b0 = 0xffffffff;
    local_2b8 = 0;
    local_23c = FUN_1447ee042(&local_1a8,puVar22,iVar6,1);
    lVar29 = FUN_141538082();
    iVar25 = *(int *)(lVar29 + 8) + -1;
    if (*(int *)(lVar29 + 8) == 0) {
      iVar25 = iVar7;
    }
    if (DAT_14cb0f190 != 0) {
      puVar42 = DAT_14cb0f188;
      iVar7 = DAT_14cb0f190 + -1;
    }
    local_2b0 = 0xffffffff;
    local_2b8 = 0;
    local_240 = FUN_1447ee042(&local_1a8,puVar42,iVar7,1);
    iVar6 = DAT_14cb0f190 + -1;
    if (DAT_14cb0f190 == 0) {
      iVar6 = 0;
    }
    local_2b0 = 0xffffffff;
    local_2b8 = 0;
    iVar7 = FUN_1447ee042(&local_1a8,L"demo",4);
    uVar26 = (longlong)(int)uStack_1a0 * 2;
    do {
      if (uVar26 == 0) {
        iVar37 = -1;
        goto LAB_14024691a;
      }
      uVar15 = uVar26 - 2;
      lVar29 = uVar26 - 2;
      uVar26 = uVar15;
    } while (*(short *)(local_1a8 + lVar29) != 0x3a);
    iVar37 = (int)(uVar15 >> 1);
LAB_14024691a:
    if (iVar39 < 1) {
LAB_1402469e3:
      ppcVar27 = local_268;
      if (iVar23 == -1) {
LAB_1402469ed:
        if ((iVar40 != iVar37 || iVar40 == -1) && (local_259 & 1) == 0) goto LAB_140246f45;
      }
    }
    else {
      if (iVar39 == local_23c) {
        iVar19 = (int)uStack_1a0 + -1;
        if ((int)uStack_1a0 == 0) {
          iVar19 = 0;
        }
        uVar36 = iVar25 + iVar39;
        if ((((int)uVar36 < 0) || (iVar19 <= (int)uVar36)) ||
           (iVar25 = iswalnum(*(wint_t *)(local_1a8 + (ulonglong)uVar36 * 2)), iVar25 == 0))
        goto LAB_1402469e3;
      }
      if (iVar39 + 1 == local_240) {
        if (-2 < iVar6 + iVar39) {
          uVar36 = iVar6 + iVar39 + 1;
          iVar25 = (int)uStack_1a0 + -1;
          if ((int)uStack_1a0 == 0) {
            iVar25 = 0;
          }
          if (((int)uVar36 < iVar25) &&
             (iVar25 = iswalnum(*(wint_t *)(local_1a8 + (ulonglong)uVar36 * 2)), iVar25 != 0))
          goto LAB_1402469a0;
        }
        goto LAB_1402469e3;
      }
LAB_1402469a0:
      ppcVar27 = local_268;
      if (iVar39 + 1 == iVar7) {
        bVar47 = false;
        iVar25 = (int)uStack_1a0 + -1;
        if ((int)uStack_1a0 == 0) {
          iVar25 = 0;
        }
        if ((int)(iVar39 + 5U) < iVar25) {
          iVar25 = iswalnum(*(wint_t *)(local_1a8 + (ulonglong)(iVar39 + 5U) * 2));
          bVar47 = iVar25 != 0;
        }
        if ((iVar23 != -1) || (bVar47)) goto LAB_140246a09;
        goto LAB_1402469ed;
      }
    }
LAB_140246a09:
    pcVar16 = local_1a8;
    lVar29 = (longlong)(int)uStack_1a0;
    if (lVar29 != 0) {
      lVar20 = lVar29 * 2;
      lVar24 = 0;
      do {
        if (*(short *)(local_1a8 + lVar24 * 2) == 0x2f) {
          uVar36 = (uint)lVar24;
          if (uVar36 != 0xffffffff) {
            uVar31 = (int)uStack_1a0 - 1;
            if ((int)uStack_1a0 == 0) {
              uVar31 = 0;
            }
            if ((int)uVar36 < (int)uVar31) {
              uVar31 = uVar36;
            }
            if ((int)uVar31 < 1) {
              uVar31 = 0;
            }
            FUN_14006620a(&local_198,local_1a8,uVar31);
            ppcVar28 = local_258;
            uVar31 = (int)uStack_1a0 - 1;
            pcVar16 = local_1a8;
            if ((int)uStack_1a0 == 0) {
              uVar31 = 0;
              pcVar16 = (code *)&DAT_149dfb77a;
            }
            if ((int)uVar31 <= (int)uVar36) {
              uVar36 = uVar31;
            }
            if ((int)uVar36 < 1) {
              uVar36 = 0;
            }
            FUN_14006620a(&local_1c8,pcVar16 + (ulonglong)uVar36 * 2,uVar31 - uVar36);
            ppcVar27 = local_268;
            goto LAB_140246ae5;
          }
          break;
        }
        lVar24 = lVar24 + 1;
        lVar20 = lVar20 + -2;
      } while (lVar20 != 0);
    }
    local_198 = (code *)0x0;
    uStack_190 = CONCAT44(uStack_190._4_4_,(int)uStack_1a0);
    if ((int)uStack_1a0 == 0) {
      uStack_190 = uStack_1a0 & 0xffffffff;
    }
    else {
      FUN_1446dd670(&local_198,uStack_1a0 & 0xffffffff,0);
      memcpy(local_198,pcVar16,lVar29 * 2);
    }
    ppcVar28 = local_258;
    FUN_140056680(&local_1c8);
LAB_140246ae5:
    if (local_1a8 != (code *)0x0) {
      FUN_1400020a8();
    }
    local_1a8 = local_1c8;
    uStack_1a0._0_4_ = (int)uStack_1c0;
    if (((int)local_238 != 2) || (*(int *)(ppcVar27 + 3) < 2)) {
      iVar25 = -1;
      if ((longlong)(int)uStack_190 != 0) {
        lVar29 = (longlong)(int)uStack_190 * 2;
        lVar20 = 0;
        do {
          if (*(short *)(local_198 + lVar20 * 2) == 0x5d) {
            iVar25 = (int)lVar20;
            break;
          }
          lVar20 = lVar20 + 1;
          lVar29 = lVar29 + -2;
        } while (lVar29 != 0);
      }
      iVar39 = 0;
      if (0 < iVar25) {
        iVar39 = iVar25;
      }
      FUN_1400b22c2(&local_1c8,L":Asset");
      iVar23 = (int)uStack_1c0 + -1;
      pcVar16 = local_1c8;
      if ((int)uStack_1c0 == 0) {
        pcVar16 = (code *)&DAT_149dfb77a;
        iVar23 = 0;
      }
      local_2b8 = 0;
      local_2b0 = iVar39;
      iVar39 = FUN_1447ee042(&local_198,pcVar16,iVar23);
      if (local_1c8 != (code *)0x0) {
        FUN_1400020a8();
      }
      uVar36 = iVar39 + 1;
      FUN_1400b22c2(&local_1c8,L":Asset");
      ppcVar27 = local_268;
      iVar23 = (int)uStack_1c0 + -1;
      pcVar16 = local_1c8;
      if ((int)uStack_1c0 == 0) {
        pcVar16 = (code *)&DAT_149dfb77a;
        iVar23 = 0;
      }
      local_2b8 = 0;
      local_2b0 = uVar36;
      iVar23 = FUN_1447ee042(&local_198,pcVar16,iVar23);
      if (local_1c8 != (code *)0x0) {
        FUN_1400020a8();
      }
      iVar40 = (int)uStack_190;
      if ((iVar39 != -1) && ((iVar25 != -1 || (iVar23 == -1)))) {
        uVar31 = (int)uStack_190 - 1;
        pcVar16 = local_198;
        if ((int)uStack_190 == 0) {
          uVar31 = 0;
          pcVar16 = (code *)&DAT_149dfb77a;
        }
        if ((int)uVar31 <= (int)uVar36) {
          uVar36 = uVar31;
        }
        uVar26 = (ulonglong)uVar36;
        if ((int)uVar36 < 1) {
          uVar26 = 0;
        }
        FUN_14006620a(&local_1c8,pcVar16 + uVar26 * 2,uVar31 - (int)uVar26);
        pcVar16 = (code *)&DAT_149dfb77a;
        if ((int)uStack_1c0 != 0) {
          pcVar16 = local_1c8;
        }
        iVar23 = _wtoi((wchar_t *)pcVar16);
        *(int *)(ppcVar27 + 4) = iVar23;
        if (local_1c8 != (code *)0x0) {
          FUN_1400020a8();
        }
        iVar23 = (int)uStack_190 + -1;
        pcVar16 = local_198;
        if ((int)uStack_190 == 0) {
          iVar23 = 0;
          pcVar16 = (code *)&DAT_149dfb77a;
        }
        if (iVar39 < iVar23) {
          iVar23 = iVar39;
        }
        if (iVar23 < 1) {
          iVar23 = 0;
        }
        FUN_14006620a(&local_1c8,pcVar16,iVar23);
        if (local_198 != (code *)0x0) {
          FUN_1400020a8();
        }
        local_198 = local_1c8;
        uStack_190 = uStack_1c0;
        iVar40 = (int)uStack_1c0;
      }
      if (iVar40 != 0) {
        uVar36 = 1;
        lVar29 = 0;
        do {
          if (*(short *)(local_198 + lVar29) == 0x5b) {
            if (iVar25 != -1 && uVar36 != 0) {
              if ((int)(iVar25 - uVar36) < 0) {
                local_1c8 = (code *)0x0;
                uStack_1c0 = 0;
              }
              else {
                uVar31 = iVar40 - 1;
                if (iVar40 == 0) {
                  uVar31 = 0;
                }
                uVar32 = uVar31;
                if ((int)uVar36 < (int)uVar31) {
                  uVar32 = uVar36;
                }
                uVar26 = (ulonglong)uVar32;
                if ((int)uVar32 < 1) {
                  uVar26 = 0;
                }
                uVar15 = (longlong)(int)uVar36 + (ulonglong)(iVar25 - uVar36);
                if ((longlong)(int)uVar31 <= (longlong)uVar15) {
                  uVar15 = (longlong)(int)uVar31;
                }
                if ((longlong)uVar15 < (longlong)uVar26) {
                  uVar15 = uVar26;
                }
                FUN_14006620a(&local_1c8,local_198 + uVar26 * 2,(int)uVar15 - (int)uVar26);
              }
              if (ppcVar28 == &local_1c8) {
                if (local_1c8 != (code *)0x0) {
                  FUN_1400020a8();
                }
              }
              else {
                if (ppcVar27[2] != (code *)0x0) {
                  FUN_1400020a8();
                }
                ppcVar27[2] = local_1c8;
                local_1c8 = (code *)0x0;
                *(int *)(ppcVar27 + 3) = (int)uStack_1c0;
                *(undefined4 *)((longlong)ppcVar27 + 0x1c) = uStack_1c0._4_4_;
              }
              goto LAB_140246e46;
            }
            break;
          }
          uVar36 = uVar36 + 1;
          lVar29 = lVar29 + 2;
        } while ((longlong)iVar40 * 2 != lVar29);
      }
      iVar25 = iVar40 + -1;
      if (iVar40 == 0) {
        iVar25 = 0;
      }
      FUN_1402980a2(ppcVar28,local_198,iVar25);
    }
LAB_140246e46:
    pcVar16 = (code *)&DAT_149dfb77a;
    puVar22 = &DAT_149dfb77a;
    if (DAT_14cb0f150 != 0) {
      puVar22 = DAT_14cb0f148;
    }
    if (*(int *)(ppcVar27 + 1) != 0) {
      pcVar16 = *ppcVar27;
    }
    lVar29 = 0;
    while( true ) {
      uVar33 = *(ushort *)(pcVar16 + lVar29);
      uVar26 = (ulonglong)uVar33;
      uVar34 = *(ushort *)((longlong)puVar22 + lVar29);
      if (uVar33 != uVar34) break;
      if (uVar33 == 0) goto LAB_140246ec9;
LAB_140246e87:
      lVar29 = lVar29 + 2;
    }
    if ((uVar34 | uVar33) < 0x80) {
      uVar33 = (ushort)(byte)(&DAT_149e05da0)[uVar26];
      uVar15 = (ulonglong)uVar34;
      uVar34 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
      if ((&DAT_149e05da0)[uVar26] == (&DAT_149e05da0)[uVar15]) goto LAB_140246e87;
    }
    if (uVar33 != uVar34) {
      FUN_14020fad6(local_250,&DAT_149dfb77a);
      goto LAB_140246f33;
    }
LAB_140246ec9:
    FUN_140810f5e(&local_1c8,0);
    if (local_250 == &local_1c8) {
      if (local_1c8 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (ppcVar27[5] != (code *)0x0) {
        FUN_1400020a8();
      }
      ppcVar27[5] = local_1c8;
      local_1c8 = (code *)0x0;
      *(int *)(ppcVar27 + 6) = (int)uStack_1c0;
      *(undefined4 *)((longlong)ppcVar27 + 0x34) = uStack_1c0._4_4_;
    }
LAB_140246f33:
    if (local_198 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140246f45:
  ppcVar28 = local_268;
  if (*(int *)((longlong)ppcVar27 + 0x24) != 1) goto LAB_140247232;
  iVar25 = (int)uStack_1a0 + -1;
  if ((int)uStack_1a0 == 0) {
    iVar25 = 0;
  }
  if (0 < iVar25) {
    if (*(short *)local_1a8 == 0x2f) {
      FUN_1402980a2(local_250);
    }
    else {
      local_1c8 = (code *)0x0;
      uStack_1c0 = 0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
      {
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
      local_1d8 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        else {
          (**(code **)(*DAT_14c844840 + 8))();
        }
      }
      local_1d0 = 0;
      plVar17 = (longlong *)FUN_14054d1d4();
      cVar5 = (**(code **)(*plVar17 + 0x48))(plVar17);
      if ((cVar5 == '\0') || (cVar5 = FUN_140f11842(&local_1a8,&local_1c8,0,0), cVar5 == '\0')) {
        local_1e8 = local_1a8;
        local_1e0 = (int)uStack_1a0 + -1;
        if ((int)uStack_1a0 == 0) {
          local_1e0 = 0;
        }
        cVar5 = FUN_146271a06(&local_1e8,&local_1d8);
        ppcVar28 = local_268;
        if (cVar5 == '\0') {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
            FUN_145762954(&DAT_14c874628);
            DAT_14c874a18 = 1;
            atexit(FUN_14278de47);
            _Init_thread_footer(&DAT_14c874a20);
          }
          local_198 = (code *)0x149fca2ba;
          uStack_190 = CONCAT35(uStack_190._5_3_,0xd);
          uVar8 = FUN_14001a6c0(&local_198,1);
          cVar5 = FUN_14011feae(&DAT_14c874628,uVar8);
          ppcVar28 = local_268;
          if (cVar5 != '\0') {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1))
            {
              FUN_145762954(&DAT_14c874628);
              DAT_14c874a18 = 1;
              atexit(FUN_14278de47);
              _Init_thread_footer(&DAT_14c874a20);
            }
            local_198 = (code *)0x149fca2ba;
            uStack_190 = CONCAT35(uStack_190._5_3_,0xd);
            uVar8 = FUN_14001a6c0(&local_198,1);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1))
            {
              FUN_145762954(&DAT_14c874628);
              DAT_14c874a18 = 1;
              atexit(FUN_14278de47);
              _Init_thread_footer(&DAT_14c874a20);
            }
            plVar17 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar8,&local_198,1);
            plVar17 = (longlong *)(**(code **)(*plVar17 + 0x40))(plVar17);
            cVar5 = (**(code **)(*plVar17 + 0x3b0))(plVar17);
            ppcVar28 = local_268;
            if (cVar5 == '\0') {
              local_1f8 = 0;
              uStack_1f0 = 0;
              local_128 = 0;
              local_120 = 0;
              local_198 = (code *)0x0;
              uStack_190 = 0;
              local_188 = 0;
              uStack_180 = 0;
              local_178 = 0;
              lStack_170 = 0;
              local_168 = 0;
              lStack_160 = 0;
              local_158 = 0;
              uStack_150 = 0;
              local_148 = 0;
              lStack_140 = 0;
              local_11c = 0xffffffff00000080;
              local_114 = 0;
              local_108 = 0;
              local_100 = 0;
              local_d8 = 0;
              local_d0 = 0;
              local_f8 = 0;
              uStack_f0 = 0;
              local_cc = 0xffffffff00000080;
              local_c4 = 0;
              local_b8 = 0;
              local_b0 = 0;
              local_88 = 0;
              local_80 = 0;
              local_a8 = 0;
              uStack_a0 = 0;
              local_7c = 0xffffffff00000080;
              local_74 = 0;
              local_68 = 0;
              local_60 = 0;
              local_58 = 0;
              local_56 = 0;
              local_54 = 0;
              iVar25 = 0;
              uVar36 = 0;
              if (DAT_14cb10130 == 0) {
                local_280 = &local_210;
                local_210 = FUN_140754f84;
                local_270 = FUN_14081d0ea;
                local_278 = FUN_14081d0ea;
                local_288 = &LAB_147da9a76;
                local_290 = FUN_1409f3105;
                local_298 = L"Engine";
                local_2a0 = 0;
                local_2a8 = 0x10000000;
                local_2b0 = 8;
                local_2b8 = 0x990;
                FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
                iVar25 = (int)uStack_150;
                uVar36 = uStack_150._4_4_;
              }
              uVar3 = *(undefined8 *)(DAT_14cb10130 + 0x18);
              uVar4 = *(undefined8 *)(*(longlong *)(DAT_14cb10130 + 0x20) + 0x18);
              uStack_150 = CONCAT44(uStack_150._4_4_,iVar25 + 1U);
              if (uVar36 < iVar25 + 1U) {
                FUN_1401d5364(&local_158,iVar25);
              }
              *(undefined8 *)(local_158 + (longlong)iVar25 * 0x10) = uVar4;
              *(undefined8 *)(local_158 + 8 + (longlong)iVar25 * 0x10) = uVar3;
              local_54 = CONCAT44(local_54._4_4_,0x8100000);
              cVar5 = (**(code **)(*plVar17 + 0x50))(plVar17,&local_198,&local_1f8,1);
              ppcVar28 = local_268;
              if (cVar5 == '\0') {
                bVar47 = false;
              }
              else {
                pcVar16 = local_1a8;
                if ((int)uStack_1a0 == 0) {
                  pcVar16 = (code *)&DAT_149dfb77a;
                }
                FUN_1446f470e(&local_200,pcVar16,1);
                if ((longlong)(int)uStack_1f0 != 0) {
                  lVar20 = (longlong)(int)uStack_1f0 * 0x70;
                  lVar29 = local_1f8;
                  do {
                    if (*(longlong *)(lVar29 + 0x10) == local_200) {
                      FUN_1400021e4(lVar29,&local_210);
                      if (local_250 == &local_210) {
                        if (local_210 != (code *)0x0) {
                          FUN_1400020a8();
                        }
                      }
                      else {
                        if (ppcVar28[5] != (code *)0x0) {
                          FUN_1400020a8();
                        }
                        ppcVar28[5] = local_210;
                        local_210 = (code *)0x0;
                        *(undefined4 *)(ppcVar28 + 6) = local_208;
                        *(undefined4 *)((longlong)ppcVar28 + 0x34) = local_204;
                      }
                      bVar47 = true;
                      goto LAB_1402478b1;
                    }
                    lVar29 = lVar29 + 0x70;
                    lVar20 = lVar20 + -0x70;
                  } while (lVar20 != 0);
                }
                bVar47 = false;
              }
LAB_1402478b1:
              FUN_14019571a(&local_198);
              FUN_140195631(local_1f8,uStack_1f0 & 0xffffffff);
              if (local_1f8 != 0) {
                FUN_1400020a8();
              }
              if (bVar47) goto LAB_14024707a;
            }
          }
          FUN_1446f470e(&local_218,L"AssetRegistry",1);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
            FUN_145762954(&DAT_14c874628);
            DAT_14c874a18 = 1;
            atexit(FUN_14278de47);
            _Init_thread_footer(&DAT_14c874a20);
          }
          plVar17 = (longlong *)FUN_1402c9134(&DAT_14c874628,local_218,&local_198,1);
          plVar17 = (longlong *)(**(code **)(*plVar17 + 0x40))(plVar17);
          local_228 = local_1a8;
          local_220 = (int)uStack_1a0 + -1;
          if ((int)uStack_1a0 == 0) {
            local_220 = 0;
          }
          (**(code **)(*plVar17 + 0xf0))(plVar17,&local_198);
          if (local_198 != (code *)0x0) {
            FUN_1400348e2(&local_198,local_250);
            goto LAB_14024707a;
          }
        }
        FUN_140810d00(&local_198,0);
        FUN_147bcc67a(ppcVar28,&local_198);
        if (lStack_140 != 0) {
          FUN_1400020a8();
        }
        FUN_1447a1747(uStack_150,local_148 & 0xffffffff);
        if (uStack_150 != 0) {
          FUN_1400020a8();
        }
        if (lStack_160 != 0) {
          FUN_1400020a8();
        }
        if (lStack_170 != 0) {
          FUN_1400020a8();
        }
        if (local_188 != 0) {
          FUN_1400020a8();
        }
        if (local_198 != (code *)0x0) {
          FUN_1400020a8();
        }
        *(undefined4 *)((longlong)ppcVar28 + 0x24) = 0;
      }
      else {
        iVar25 = (int)uStack_1c0 + -1;
        if ((int)uStack_1c0 == 0) {
          iVar25 = 0;
        }
        FUN_1402980a2(local_250,local_1c8,iVar25);
        ppcVar28 = local_268;
      }
LAB_14024707a:
      if (local_1d8 != (longlong *)0x0) {
        (**(code **)(*local_1d8 + 0x10))();
      }
      if (local_1c8 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if (*(int *)((longlong)ppcVar28 + 0x24) == 1) {
    if (*(int *)(local_268 + 1) == 0) {
      pcVar16 = (code *)&DAT_149dfb77a;
    }
    else {
      pcVar16 = *local_268;
    }
    iVar25 = iswalpha(*(wint_t *)pcVar16);
    if (iVar25 != 0) {
      _C = *(wint_t *)pcVar16;
      while (_C != 0) {
        iVar25 = iswalnum(_C);
        if (((iVar25 == 0) && (1 < *(ushort *)pcVar16 - 0x2d)) && (*(ushort *)pcVar16 != 0x2b))
        goto LAB_140247191;
        _C = *(wint_t *)(pcVar16 + 2);
        pcVar16 = pcVar16 + 2;
      }
      if (*(int *)(local_268 + 3) == 0) {
        pcVar16 = (code *)&DAT_149dfb77a;
      }
      else {
        pcVar16 = *local_258;
      }
      pwVar18 = wcschr((wchar_t *)pcVar16,L'?');
      if ((pwVar18 == (wchar_t *)0x0) &&
         (pwVar18 = wcschr((wchar_t *)pcVar16,L'#'), pwVar18 == (wchar_t *)0x0)) {
        if (*(int *)(local_268 + 0xc) == 0) {
          pcVar16 = (code *)&DAT_149dfb77a;
        }
        else {
          pcVar16 = *local_248;
        }
        pwVar18 = wcschr((wchar_t *)pcVar16,L'?');
        if ((pwVar18 == (wchar_t *)0x0) &&
           (pwVar18 = wcschr((wchar_t *)pcVar16,L'#'), pwVar18 == (wchar_t *)0x0))
        goto LAB_140247232;
      }
    }
LAB_140247191:
    FUN_140810d00(&local_198,0);
    ppcVar27 = local_268;
    FUN_147bcc67a(local_268,&local_198);
    if (lStack_140 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(uStack_150,local_148 & 0xffffffff);
    if (uStack_150 != 0) {
      FUN_1400020a8();
    }
    if (lStack_160 != 0) {
      FUN_1400020a8();
    }
    if (lStack_170 != 0) {
      FUN_1400020a8();
    }
    if (local_188 != 0) {
      FUN_1400020a8();
    }
    if (local_198 != (code *)0x0) {
      FUN_1400020a8();
    }
    *(undefined4 *)((longlong)ppcVar27 + 0x24) = 0;
  }
LAB_140247232:
  if (local_230 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_1a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return local_268;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
joined_r0x000140246363:
  local_268 = ppcVar27;
  if (wVar35 == L'\0') goto LAB_1402463a0;
  iVar25 = iswalnum(wVar35);
  if ((iVar25 == 0) &&
     ((0x2e < (ulonglong)(ushort)pwVar30[-1] ||
      ((0x680000000000U >> ((ulonglong)(ushort)pwVar30[-1] & 0x3f) & 1) == 0)))) goto LAB_140246425;
  wVar35 = *pwVar30;
  pwVar30 = pwVar30 + 1;
  ppcVar27 = local_268;
  goto joined_r0x000140246363;
LAB_1402463a0:
  *(undefined4 *)((longlong)ppcVar27 + 0x24) = 1;
  FUN_14020fad6(ppcVar27,pwVar18);
  pwVar18 = pwVar12 + 3;
  iVar25 = *(int *)((longlong)ppcVar27 + 0x24);
  bVar47 = true;
  goto LAB_1402463d2;
LAB_140246425:
  bVar47 = false;
  ppcVar27 = local_268;
  goto LAB_14024642c;
}



// FUNCTION 140247bba FUN_140247bba body=425 status=ok
// SIG undefined FUN_140247bba(void)

undefined8
FUN_140247bba(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x260) == 0)) {
    uVar2 = 0;
  }
  else {
    if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x38) + 0x1e9) == '\x01') {
      cVar1 = FUN_144a61b4f();
      if ((cVar1 != '\0') ||
         (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002)) {
        local_98 = param_5[2];
        local_f8 = &local_a8;
        local_a8 = *param_5;
        uStack_a0 = param_5[1];
        local_c8 = *param_4;
        uStack_c4 = param_4[1];
        uStack_c0 = param_4[2];
        uStack_bc = param_4[3];
        local_b8 = *(undefined8 *)(param_4 + 4);
        local_d0 = param_10;
        local_d8 = param_9;
        local_e0 = param_8;
        local_e8 = param_7;
        local_f0 = param_6;
        uVar2 = FUN_1434473d6(param_1,param_2,param_3);
        goto LAB_140247c9e;
      }
    }
    local_58 = param_5[2];
    local_f8 = &local_68;
    local_68 = *param_5;
    uStack_60 = param_5[1];
    local_88 = *param_4;
    uStack_84 = param_4[1];
    uStack_80 = param_4[2];
    uStack_7c = param_4[3];
    local_78 = *(undefined8 *)(param_4 + 4);
    local_d0 = param_10;
    local_d8 = param_9;
    local_e0 = param_8;
    local_e8 = param_7;
    local_f0 = param_6;
    uVar2 = FUN_140247d64(param_1,param_2,param_3);
  }
LAB_140247c9e:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140247d64 FUN_140247d64 body=568 status=ok
// SIG undefined FUN_140247d64(void)

undefined8
FUN_140247d64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5,undefined4 param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 param_9)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  undefined4 local_180;
  undefined8 *local_178;
  undefined8 local_170;
  undefined8 local_168;
  char *local_160;
  undefined8 *local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  char local_c9;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined2 local_b7;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  longlong local_78;
  undefined8 local_70;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  bVar5 = true;
  local_160 = &local_c9;
  local_c9 = '\x01';
  local_a4 = 0;
  local_a0 = 0x101;
  local_78 = 0;
  local_70 = 0x800000000;
  local_58 = 0;
  local_50 = 0x400000000;
  local_b8 = 0;
  local_ac = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b7 = 1;
  local_b5 = 0;
  local_a8 = 0;
  local_b4 = 0x1000000;
  local_b0 = 1;
  local_d8 = param_5[2];
  local_188 = &local_e8;
  local_e8 = *param_5;
  uStack_e0 = param_5[1];
  local_f8 = *(undefined8 *)(param_4 + 4);
  local_108 = *param_4;
  uStack_104 = param_4[1];
  uStack_100 = param_4[2];
  uStack_fc = param_4[3];
  local_168 = param_9;
  local_170 = param_8;
  local_178 = param_7;
  local_180 = param_6;
  local_158 = &local_c8;
  uVar2 = FUN_143447635(param_1);
  if (local_c9 == '\x01') {
    uVar2 = 10;
    do {
      local_118 = param_5[2];
      local_128 = *param_5;
      uStack_120 = param_5[1];
      local_148 = *param_4;
      uStack_144 = param_4[1];
      uStack_140 = param_4[2];
      uStack_13c = param_4[3];
      local_138 = *(undefined8 *)(param_4 + 4);
      local_160 = &local_c9;
      local_168 = param_9;
      local_170 = param_8;
      local_180 = param_6;
      local_188 = &local_128;
      local_178 = &local_c8;
      local_158 = &local_c8;
      uVar3 = FUN_143447635(param_1,param_2,param_3,&local_148);
      uVar4 = (ulonglong)uVar3;
      bVar5 = 1 < uVar2;
      if (local_c9 != '\x01') break;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 - 1;
    } while (bVar1);
  }
  else {
    uVar4 = (ulonglong)uVar2;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 & bVar5);
}



// FUNCTION 140247f9d FUN_140247f9d body=139 status=ok
// SIG undefined FUN_140247f9d(void)

void FUN_140247f9d(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_140047f5c();
  bVar2 = false;
  if ((((param_2 != 0) && (bVar2 = false, cVar1 != '\0')) && (DAT_14c760aa8 != 0)) &&
     ((bVar2 = false, (*(byte *)(param_4 + 0x5d) & 8) != 0 && (0 < *(int *)(param_2 + 0x4d18))))) {
    if (*(char *)(*(longlong *)(param_2 + 0x4d10) + 0x6c) == '\x01') {
      bVar2 = 0.0 < *(float *)(*(longlong *)(param_2 + 0x4d10) + 0x98);
    }
    else {
      bVar2 = false;
    }
  }
  FUN_140248028(param_1,param_4,param_3,param_2 + 0x5200,bVar2);
  return;
}



// FUNCTION 140248028 FUN_140248028 body=521 status=ok
// SIG undefined FUN_140248028(void)

void FUN_140248028(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  byte param_5)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  ulonglong uVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  ulonglong uVar14;
  ulonglong uVar13;
  
  FUN_14490df4a();
  FUN_140248232(param_1,0,0,param_4);
  uVar12 = 0x10;
  if ((int)*(uint *)(DAT_14c9e7be0 + 4) < 0x10) {
    uVar12 = *(uint *)(DAT_14c9e7be0 + 4);
  }
  uVar14 = 2;
  if (2 < (int)uVar12) {
    uVar14 = (ulonglong)uVar12;
  }
  uVar9 = 0x20;
  if (0x20 < (int)*(uint *)(DAT_14c9e7bc8 + 4)) {
    uVar9 = (ulonglong)*(uint *)(DAT_14c9e7bc8 + 4);
  }
  uVar12 = (int)uVar9 * (int)uVar14;
  uVar13 = (ulonglong)uVar12;
  if (DAT_14ca84e40 < uVar12) {
    uVar9 = DAT_14ca84e40 / uVar14;
    uVar13 = (ulonglong)DAT_14ca84e40 % uVar14;
  }
  *(ulonglong *)(param_1 + 0xd0) = uVar14 | uVar9 << 0x20;
  bVar5 = (byte)(*(uint *)(param_2 + 0x50) >> 0x13) & 1 & 0 < *(int *)(DAT_14c9e7bb0 + 4);
  *(byte *)(param_1 + 8) = bVar5;
  iVar10 = DAT_14c760444;
  if (bVar5 != 1) {
    *param_4 = param_1;
    *(byte *)(param_4 + 1) = bVar5;
    goto LAB_140248186;
  }
  param_5 = 0 < DAT_14c760440 & param_5;
  bVar2 = 0 < DAT_14c760444;
  bVar6 = FUN_1402482f8(param_2,uVar13);
  iVar4 = DAT_14c760448;
  bVar5 = (byte)*(undefined4 *)(param_1 + 8);
  bVar11 = bVar5 ^ 1;
  bVar8 = 1;
  if ((bVar11 & 1) != 0 || param_5 != 0) {
    bVar8 = bVar5;
  }
  if (((bVar2 | bVar6 | 0 < DAT_14c760448 | bVar11 | param_5) & 1) == 0) {
    bVar8 = 1;
    cVar7 = FUN_147430de8();
    if (cVar7 == '\0') {
      bVar8 = FUN_147430e2e();
    }
  }
  *(byte *)(param_1 + 8) = bVar8;
  *param_4 = param_1;
  *(byte *)(param_4 + 1) = bVar8;
  if (*(char *)(param_1 + 8) == '\0') goto LAB_140248186;
  if (param_5 == 0) {
    if (0 < iVar10) {
      uVar12 = *(uint *)((longlong)param_4 + 0xc);
      goto LAB_140248169;
    }
LAB_140248211:
    if (bVar6 == 0) goto LAB_140248178;
    uVar12 = *(uint *)((longlong)param_4 + 0xc);
LAB_14024821d:
    uVar12 = uVar12 | 4;
    *(uint *)((longlong)param_4 + 0xc) = uVar12;
    if (iVar4 < 1) goto LAB_140248186;
  }
  else {
    uVar12 = *(uint *)((longlong)param_4 + 0xc) | 1;
    *(uint *)((longlong)param_4 + 0xc) = uVar12;
    if (iVar10 < 1) goto LAB_140248211;
LAB_140248169:
    uVar12 = uVar12 | 2;
    *(uint *)((longlong)param_4 + 0xc) = uVar12;
    if (bVar6 != 0) goto LAB_14024821d;
LAB_140248178:
    if (iVar4 < 1) goto LAB_140248186;
    uVar12 = *(uint *)((longlong)param_4 + 0xc);
  }
  *(uint *)((longlong)param_4 + 0xc) = uVar12 | 8;
LAB_140248186:
  lVar3 = param_3[1];
  if ((int)lVar3 != 0) {
    iVar10 = 0;
    do {
      lVar1 = *param_3;
      *(longlong **)(lVar1 + 0x11f90 + (longlong)iVar10 * 0x13c10) = param_4;
      *(int *)(lVar1 + 0x11f98 + (longlong)iVar10 * 0x13c10) = iVar10;
      iVar10 = iVar10 + 1;
    } while ((int)lVar3 != iVar10);
  }
  return;
}



// FUNCTION 140248232 FUN_140248232 body=198 status=ok
// SIG undefined FUN_140248232(void)

void FUN_140248232(longlong param_1,longlong param_2,undefined4 param_3,longlong *param_4)

{
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0x40) {
    FUN_1402bf368(param_1 + 0x20,0x40);
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_1 + 0xbc) != 4) {
    FUN_14024839c(param_1 + 0xb0,4);
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) != 4) {
    FUN_1402484d8(param_1 + 0xc0,4);
  }
  *(undefined1 *)(param_1 + 8) = 0;
  if (param_4 != (longlong *)0x0) {
    *param_4 = param_1;
    *(undefined1 *)(param_4 + 1) = 0;
    *(undefined4 *)((longlong)param_4 + 0xc) = 0;
    if (param_2 != 0) {
      *(longlong **)(param_2 + 0x11f90) = param_4;
      *(undefined4 *)(param_2 + 0x11f98) = param_3;
    }
  }
  return;
}



// FUNCTION 1402482f8 FUN_1402482f8 body=163 status=ok
// SIG undefined FUN_1402482f8(void)

bool FUN_1402482f8(longlong param_1)

{
  char cVar1;
  int *piVar2;
  
  if ((*(byte *)(**(longlong **)(param_1 + 8) + 0x2954) & 1) != 0) {
    if (*(int *)(DAT_14ca046e8 + 4) == 0) {
      return false;
    }
    if (-1 < *(int *)(param_1 + 0x4c)) {
      return false;
    }
    piVar2 = &DAT_14c760db4;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x40) + 8);
    }
    if (((3 < (int)(&DAT_14ca814b8)
                   [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar2 * 2) * 0xf]) &&
        (((&DAT_14ca814cd)[(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar2 * 2) * 0x3c] &
         3) != 0)) &&
       ((cVar1 = FUN_1472390ef(), cVar1 != '\0' ||
        ((cVar1 = FUN_14498f84a(), cVar1 != '\0' && (*(int *)(DAT_14ca08660 + 4) != 0)))))) {
      return *(int *)(DAT_14ca04940 + 4) != 0;
    }
  }
  return false;
}



// FUNCTION 14024839c FUN_14024839c body=315 status=ok
// SIG undefined FUN_14024839c(void)

void FUN_14024839c(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 8;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140248406;
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
LAB_140248406:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 1402484d8 FUN_1402484d8 body=315 status=ok
// SIG undefined FUN_1402484d8(void)

void FUN_1402484d8(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 8;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140248542;
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
LAB_140248542:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 140248614 FUN_140248614 body=102 status=ok
// SIG undefined FUN_140248614(void)

longlong FUN_140248614(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  if ((*(longlong *)(param_1 + 0x48) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8), lVar2 != 0)) {
    lVar3 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 200) + 0x280) + 0x28);
    lVar5 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x20) + 2) * 0xa8;
    lVar4 = (longlong)*(int *)(lVar3 + 0x70 + lVar5);
    if (lVar4 != 0) {
      lVar1 = lVar3 + 0x68;
      lVar6 = 0;
      do {
        bVar7 = *(longlong *)(*(longlong *)(lVar1 + lVar5) + lVar6) == lVar2;
        lVar3 = CONCAT71((int7)((ulonglong)lVar3 >> 8),bVar7);
        if (bVar7) {
          return lVar3;
        }
        lVar6 = lVar6 + 8;
      } while (lVar4 * 8 != lVar6);
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 14024867a FUN_14024867a body=281 status=ok
// SIG undefined FUN_14024867a(void)

undefined8 * FUN_14024867a(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 0x18);
  if (puVar5 == (undefined8 *)0x0) {
    lVar3 = *(longlong *)(param_1 + 8);
    if (lVar3 == 0) {
      lVar3 = FUN_14473c272(param_2,param_1,0);
      *(longlong *)(param_1 + 8) = lVar3;
    }
    uVar1 = *(undefined1 *)(lVar3 + 0x94);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
      FUN_140023dd8((longlong *)(param_2 + 0x70),0x50);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar4;
    puVar5[1] = *(undefined8 *)(lVar3 + 8);
    puVar5[2] = 0;
    *(undefined1 *)(puVar5 + 3) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar5 + 5) = 0;
    *puVar5 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar5 + 6) = uVar1;
    *(undefined1 *)(puVar5 + 7) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar5 + 0x35) = 0;
    puVar5[8] = lVar3;
    iVar2 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar5;
    *(int *)((longlong)puVar5 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    *(undefined8 **)(param_1 + 0x18) = puVar5;
  }
  return puVar5;
}



// FUNCTION 140248794 FUN_140248794 body=342 status=ok
// SIG undefined FUN_140248794(void)

undefined8 * FUN_140248794(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  if (puVar6 == (undefined8 *)0x0) {
    lVar4 = *(longlong *)(param_1 + 8);
    if (lVar4 == 0) {
      lVar4 = FUN_14473c272(param_2,param_1,0);
      *(longlong *)(param_1 + 8) = lVar4;
    }
    if ((*(char *)(lVar4 + 0x92) == '\x01') || (*(char *)(lVar4 + 0x92) == '\x04')) {
      uVar5 = *(undefined2 *)(lVar4 + 0x8e);
    }
    else {
      uVar5 = 0;
    }
    uVar1 = *(undefined1 *)(lVar4 + 0x90);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar6 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar3) {
      FUN_140023dd8((longlong *)(param_2 + 0x70),0x48);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar6 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar3;
    puVar6[1] = *(undefined8 *)(lVar4 + 8);
    puVar6[2] = 0;
    *(undefined1 *)(puVar6 + 3) = 1;
    *(undefined8 *)((longlong)puVar6 + 0x1c) = 0xffffffffffffffff;
    *puVar6 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar6 + 5) = 0;
    *(undefined1 *)((longlong)puVar6 + 0x2a) = uVar1;
    *(undefined1 *)((longlong)puVar6 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar6 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar6 + 0x2e) = uVar5;
    *(undefined1 *)(puVar6 + 6) = 0;
    *(undefined1 *)((longlong)puVar6 + 0x32) = 0;
    puVar6[7] = lVar4;
    iVar2 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar6;
    *(int *)((longlong)puVar6 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    *(undefined8 **)(param_1 + 0x10) = puVar6;
  }
  return puVar6;
}



// FUNCTION 1402488ea FUN_1402488ea body=102 status=ok
// SIG undefined FUN_1402488ea(void)

void FUN_1402488ea(longlong param_1)

{
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0xc) == '\x01') {
    QueryPerformanceCounter(&local_20);
    (&DAT_14ca84ac4)[*(int *)(param_1 + 8)] =
         (&DAT_14ca84ac4)[*(int *)(param_1 + 8)] + (local_20.s.LowPart - *(int *)(param_1 + 0x10));
  }
  FUN_140248952(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140248952 FUN_140248952 body=249 status=ok
// SIG undefined FUN_140248952(void)

void FUN_140248952(int *param_1)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD dwTlsIndex;
  undefined8 *lpTlsValue;
  bool bVar4;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((char)param_1[1] == '\0') {
    dwTlsIndex = DAT_14c758730;
    if (DAT_14c758730 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar3 = 0xffffffff;
      LOCK();
      bVar4 = DAT_14c758730 != 0xffffffff;
      DVar2 = dwTlsIndex;
      if (bVar4) {
        DVar3 = DAT_14c758730;
        DVar2 = DAT_14c758730;
      }
      DAT_14c758730 = DVar2;
      UNLOCK();
      if (bVar4) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar3;
      }
    }
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (undefined8 *)0x0) {
      lpTlsValue = (undefined8 *)FUN_14001cc68(0x20,0x10);
      DVar3 = GetCurrentThreadId();
      *(DWORD *)(lpTlsValue + 1) = DVar3;
      *lpTlsValue = &PTR_FUN_149e06328;
      lpTlsValue[2] = 0;
      *(undefined4 *)(lpTlsValue + 3) = 1;
      *(undefined1 *)((longlong)lpTlsValue + 0x1c) = 0;
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    QueryPerformanceCounter(&local_28);
    iVar1 = *param_1;
    *(DWORD *)(lpTlsValue + 2) = *(int *)(lpTlsValue + 2) + (local_28.s.LowPart - iVar1);
    if (0 < *(int *)(lpTlsValue + 3)) {
      *(int *)((longlong)lpTlsValue + 0x14) =
           *(int *)((longlong)lpTlsValue + 0x14) + (local_28.s.LowPart - iVar1);
    }
    *(undefined1 *)((longlong)lpTlsValue + 0x1c) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140248a4c FUN_140248a4c body=1082 status=ok
// SIG undefined FUN_140248a4c(void)

void FUN_140248a4c(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_3f8 [32];
  undefined4 local_3d8;
  undefined4 local_3d0;
  undefined4 local_3c8;
  undefined8 local_3c0;
  wchar_t *local_3b8;
  undefined1 *local_3b0;
  undefined1 *local_3a8;
  code **local_3a0;
  code *local_398;
  code *local_390;
  longlong local_388;
  undefined4 local_380;
  undefined1 local_378 [8];
  int local_370;
  code *local_368 [99];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  iVar4 = (int)param_1[0x44];
  if ((longlong)iVar4 == 0) goto LAB_140248d7e;
  lVar11 = *(longlong *)(param_1[0x43] + -8 + (longlong)iVar4 * 8);
  *(int *)(param_1 + 0x44) = iVar4 + -1;
  if (iVar4 + -1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_3f8);
  }
  cVar3 = FUN_14043fe08(lVar11);
  if (cVar3 == '\0') {
    if ((*(byte *)(lVar11 + 0x608) & 2) != 0) goto LAB_140248afd;
  }
  else {
    FUN_14474658a(param_1,1,0,*(undefined1 *)(lVar11 + 0x14));
LAB_140248afd:
    if (param_1 != (longlong *)0x0) {
      if (DAT_14cac6e60 == 0) {
        local_3a0 = local_368;
        local_368[0] = FUN_144a7958c;
        local_390 = FUN_14081d0ea;
        local_398 = FUN_142b47bc4;
        local_3a8 = &LAB_1478989f1;
        local_3b0 = &LAB_146391124;
        local_3b8 = L"Engine";
        local_3c0 = 0x10000000000;
        local_3c8 = 0x10000005;
        local_3d0 = 0x10;
        local_3d8 = 0x620;
        FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
      }
      if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
          DAT_14cac6e60 + 0x30)) {
        local_50 = 0;
        local_48 = 0x300000000;
        local_388 = lVar11 + 0xd0;
        if (*(longlong *)(lVar11 + 1000) != 0) {
          local_388 = *(longlong *)(lVar11 + 1000);
        }
        local_380 = *(undefined4 *)(lVar11 + 0x3f0);
        local_3d8 = CONCAT31(local_3d8._1_3_,cVar3);
        FUN_1406c19e0(lVar11,local_378,param_1);
        puVar9 = local_378;
        if (local_370 == -1) {
          puVar9 = (undefined1 *)0x0;
        }
        if ((longlong)(int)param_1[0x44] < 1) {
          if ((DAT_14c76142c != 1) || ((*(byte *)(param_1 + 0x3f) & 2) == 0)) {
            cVar3 = (**(code **)(*param_1 + 0x508))(param_1,&local_388,1,puVar9);
            *(byte *)(param_1 + 0x3f) = *(byte *)(param_1 + 0x3f) & 0xfd | cVar3 * '\x02';
          }
        }
        else {
          lVar2 = *(longlong *)(param_1[0x43] + -8 + (longlong)(int)param_1[0x44] * 8);
          *(byte *)(lVar2 + 0x608) = *(byte *)(lVar2 + 0x608) | 2;
          *(undefined4 *)(lVar2 + 0x10) = 3;
          *(undefined4 *)(lVar2 + 200) = 0xffffffff;
        }
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        goto LAB_140248c46;
      }
    }
    if ((longlong)(int)param_1[0x44] < 1) {
      if ((DAT_14c76142c != 1) || ((*(byte *)(param_1 + 0x3f) & 2) == 0)) {
        cVar3 = (**(code **)(*param_1 + 0x508))(param_1,0,1,0);
        *(byte *)(param_1 + 0x3f) = *(byte *)(param_1 + 0x3f) & 0xfd | cVar3 * '\x02';
      }
    }
    else {
      lVar2 = *(longlong *)(param_1[0x43] + -8 + (longlong)(int)param_1[0x44] * 8);
      *(byte *)(lVar2 + 0x608) = *(byte *)(lVar2 + 0x608) | 2;
      *(undefined4 *)(lVar2 + 0x10) = 3;
      *(undefined4 *)(lVar2 + 200) = 0xffffffff;
    }
  }
LAB_140248c46:
  if ((0 < (int)*(uint *)(lVar11 + 0x600)) && (lVar2 = param_1[0x15], lVar2 != 0)) {
    lVar10 = lVar11 + 0x3f8;
    if (*(longlong *)(lVar11 + 0x5f8) != 0) {
      lVar10 = *(longlong *)(lVar11 + 0x5f8);
    }
    if (param_1 != (longlong *)0x0) {
      lVar11 = (ulonglong)*(uint *)(lVar11 + 0x600) << 8;
      do {
        if ((*(uint *)(param_1 + 1) >> 0x1e & 1) != 0) break;
        if (((*(int *)(lVar10 + 0xdc) != 0) && (uVar1 = *(uint *)(lVar10 + 0xd8), -1 < (int)uVar1))
           && ((int)uVar1 < DAT_14c9647dc)) {
          plVar8 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if (((plVar8 != (longlong *)0x0) && ((int)plVar8[2] == *(int *)(lVar10 + 0xdc))) &&
             (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 &&
              (plVar8 = (longlong *)*plVar8, plVar8 != (longlong *)0x0)))) {
            iVar4 = (**(code **)(*param_1 + 0x570))(param_1);
            if (iVar4 != 0) {
              iVar4 = (**(code **)(*plVar8 + 0x570))(plVar8);
              if (iVar4 != 0) {
                uVar5 = (**(code **)(*param_1 + 0x580))(param_1);
                uVar6 = (**(code **)(*plVar8 + 0x580))(plVar8);
                iVar7 = (**(code **)(*param_1 + 0x578))(param_1,uVar6);
                iVar4 = (**(code **)(*plVar8 + 0x578))(plVar8,uVar5);
                if (iVar7 < iVar4) {
                  iVar4 = iVar7;
                }
                if (iVar4 == 2) {
                  FUN_143482562(param_1,lVar2,lVar10);
                }
              }
            }
          }
        }
        lVar10 = lVar10 + 0x100;
        lVar11 = lVar11 + -0x100;
      } while (lVar11 != 0);
    }
  }
LAB_140248d7e:
  if ((local_40 ^ (ulonglong)auStack_3f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140248ea4 FUN_140248ea4 body=89 status=ok
// SIG undefined FUN_140248ea4(void)

undefined8 FUN_140248ea4(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x1150) != 0) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1148) + lVar3);
      if (*(longlong *)(lVar1 + 0x2a0) == param_2) {
        if (lVar1 == 0) {
          return 0;
        }
        uVar2 = FUN_14062842a();
        uVar2 = FUN_140248efd(uVar2,param_3);
        return uVar2;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(param_1 + 0x1150) * 8 != lVar3);
  }
  return 0;
}



// FUNCTION 140248efd FUN_140248efd body=182 status=ok
// SIG undefined FUN_140248efd(void)

longlong FUN_140248efd(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c9670a0 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_14001cc68(0x78,0x10);
    FUN_14593912e(plVar2,1,1);
    DAT_14c9670a0 = plVar2;
  }
  (**(code **)(*DAT_14c9670a0 + 0x58))(DAT_14c9670a0,&local_24,param_2);
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*param_1 + lVar3);
      if ((lVar1 != 0) && (*(int *)(lVar1 + 0x100) == local_24)) goto LAB_140248f6a;
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)param_1[1] * 8 != lVar3);
  }
  lVar1 = 0;
LAB_140248f6a:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140248fb4 FUN_140248fb4 body=274 status=ok
// SIG undefined FUN_140248fb4(void)

undefined4 * FUN_140248fb4(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14024918a(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_58 = 0;
  cVar1 = FUN_1402490c8(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_14024945a(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402490c8 FUN_1402490c8 body=193 status=ok
// SIG undefined FUN_1402490c8(void)

void FUN_1402490c8(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_1429f94c4(param_1,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          break;
        }
        iVar8 = puVar1[6];
        uVar6 = 0;
      } while (iVar8 != -1);
      goto LAB_140249118;
    }
  }
  uVar6 = 0;
LAB_140249118:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 14024918a FUN_14024918a body=719 status=ok
// SIG undefined FUN_14024918a(void)

int * FUN_14024918a(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_1447711aa(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar2 = iVar8 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar2 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar6 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar3 = (uint)(uVar6 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar6 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar3 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar3 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar7) {
                    uVar14 = (ulonglong)bVar7;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_14024933d;
                    lVar5 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar5 != 0x33);
                }
                uVar6 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar6 = (ulonglong)DAT_14c841df8;
                }
                uVar6 = -uVar6 & (uVar10 + uVar6) - 1;
              }
            }
            else {
              uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
              iVar2 = (int)param_1[5];
            }
          }
LAB_14024933d:
          iVar4 = (int)(uVar6 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar2);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar5 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x20);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x20) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar5 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 14024945a FUN_14024945a body=679 status=ok
// SIG undefined FUN_14024945a(void)

void FUN_14024945a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_1402494be;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_1402494be:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x20;
      uVar2 = ((uint)(*(ulonglong *)(lVar6 + lVar13) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar13) >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x1c + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x18 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 140249702 FUN_140249702 body=5931 status=ok
// SIG undefined FUN_140249702(void)

int FUN_140249702(PSRWLOCK param_1,longlong *param_2,char param_3,longlong param_4)

{
  PVOID pvVar1;
  void *_Dst;
  int *piVar2;
  PVOID pvVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  uint *puVar15;
  byte bVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  PSRWLOCK pRVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined1 *puVar24;
  uint *puVar25;
  PSRWLOCK pRVar26;
  ulonglong uVar27;
  int iVar28;
  int *piVar29;
  ulonglong uVar30;
  int iVar31;
  longlong lVar32;
  ulonglong uVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined8 local_150;
  int local_144;
  PSRWLOCK local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 local_128;
  int iStack_120;
  int iStack_11c;
  int local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  longlong local_108;
  code *local_f8 [2];
  undefined8 *local_e8;
  int local_b0;
  undefined1 local_ac;
  undefined8 *local_a8;
  undefined1 local_a0 [16];
  int *local_90;
  ulonglong local_88;
  int *local_70;
  int local_68;
  undefined1 *local_60;
  ulonglong local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (DAT_14cafb2b4 == 1) {
    iVar17 = -1;
    cVar5 = FUN_1406917e6();
    if (cVar5 != '\0') {
      plVar10 = (longlong *)FUN_14001cc68(8,0x10);
      lVar11 = (**(code **)(*(longlong *)param_2[1] + 0x4c0))();
      *plVar10 = 0;
      if (lVar11 != 0) {
        FUN_1401924dc(lVar11);
        *plVar10 = lVar11;
      }
      puVar12 = (undefined8 *)FUN_1446fac86(0xa8);
      FUN_1447247dc(puVar12,0);
      *puVar12 = &PTR_FUN_149e00300;
      if (*(code **)(puVar12[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar12[0xe] + 0x18))(puVar12 + 0xe,puVar12 + 9);
      }
      puVar12[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar12[9] = puVar12;
      puVar12[10] = puVar12;
      lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      lVar32 = *(longlong *)(lVar11 + 0x2b8);
      if (lVar32 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(lVar32 + 0x30);
      }
      local_150 = (longlong *)(lVar11 + 0x2b8);
      puVar12[0xf] = uVar14;
      puVar12[0x10] = 0xc80000527800c400;
      *(undefined4 *)((longlong)puVar12 + 0x1c) = 2;
      puVar35 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar15 = (uint *)*puVar35;
      if (puVar15 != (uint *)0x0) goto LAB_14024a00c;
      do {
        uVar18 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar18 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar18 | 1;
          __tlregdtor(&LAB_14365fa42);
        }
        lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar13 = *(undefined4 **)(lVar11 + 0x310);
        *(undefined8 *)(lVar11 + 0x310) = 0;
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar13 = 0xffffffff;
        *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
        puVar13[0x12] = 0;
        *puVar35 = puVar13;
        FUN_140217a48(puVar35);
        puVar15 = (uint *)*puVar35;
LAB_14024a00c:
        uVar33 = *(longlong *)(puVar15 + 0x10) + 7;
        uVar18 = puVar15[0x12];
        while( true ) {
          puVar34 = (undefined8 *)(uVar33 & 0xfffffffffffffff8);
          if (puVar34 + 0x1d <= puVar15 + 0x4000) {
            *(undefined8 **)(puVar15 + 0x10) = puVar34 + 0x1d;
            puVar15[0x12] = uVar18 + 1;
            FUN_1447247dc(puVar34,0);
            *puVar34 = &PTR_FUN_14aa595d0;
            if (puVar12 == (undefined8 *)0x0) {
              puVar34[0x15] = plVar10;
              iVar17 = *(int *)((longlong)param_2 + 4);
              lVar21 = param_2[1];
              iVar31 = *(int *)((longlong)param_2 + 0xc);
              lVar11 = param_2[2];
              lVar32 = param_2[3];
              *(int *)(puVar34 + 0x16) = (int)*param_2;
              *(int *)((longlong)puVar34 + 0xb4) = iVar17;
              *(int *)(puVar34 + 0x17) = (int)lVar21;
              *(int *)((longlong)puVar34 + 0xbc) = iVar31;
              puVar34[0x18] = lVar11;
              puVar34[0x19] = lVar32;
              puVar34[0x1a] = param_2[4];
              puVar34[0x1b] = 0;
              *(undefined1 *)((longlong)puVar34 + 0xe4) = 0;
            }
            else {
              LOCK();
              *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
              UNLOCK();
              puVar34[0x15] = plVar10;
              iVar17 = *(int *)((longlong)param_2 + 4);
              lVar11 = param_2[1];
              iVar31 = *(int *)((longlong)param_2 + 0xc);
              lVar32 = param_2[2];
              iVar7 = *(int *)((longlong)param_2 + 0x14);
              lVar21 = param_2[3];
              iVar19 = *(int *)((longlong)param_2 + 0x1c);
              *(int *)(puVar34 + 0x16) = (int)*param_2;
              *(int *)((longlong)puVar34 + 0xb4) = iVar17;
              *(int *)(puVar34 + 0x17) = (int)lVar11;
              *(int *)((longlong)puVar34 + 0xbc) = iVar31;
              *(int *)(puVar34 + 0x18) = (int)lVar32;
              *(int *)((longlong)puVar34 + 0xc4) = iVar7;
              *(int *)(puVar34 + 0x19) = (int)lVar21;
              *(int *)((longlong)puVar34 + 0xcc) = iVar19;
              puVar34[0x1a] = param_2[4];
              puVar34[0x1b] = puVar12;
              LOCK();
              *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
              UNLOCK();
              *(undefined1 *)((longlong)puVar34 + 0xe4) = 0;
              LOCK();
              piVar29 = (int *)(puVar12 + 1);
              *piVar29 = *piVar29 + -1;
              UNLOCK();
              if (*piVar29 == 0) {
                (**(code **)*puVar12)(puVar12,1);
              }
            }
            if (*(code **)(puVar34[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(puVar34[0xe] + 0x18))(puVar34 + 0xe,puVar34 + 9);
            }
            puVar34[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            puVar34[9] = puVar34;
            puVar34[10] = puVar34;
            if (*local_150 == 0) {
              uVar14 = 0;
            }
            else {
              uVar14 = *(undefined8 *)(*local_150 + 0x30);
            }
            puVar34[0xf] = uVar14;
            puVar34[0x10] = 0xd80000527800b400;
            *(undefined4 *)((longlong)puVar34 + 0x1c) = 0;
            if (puVar34 == (undefined8 *)0x0) {
              local_b0 = CONCAT31(local_b0._1_3_,1);
              FUN_1447439e4(0);
            }
            else {
              LOCK();
              *(int *)(puVar34 + 1) = *(int *)(puVar34 + 1) + 1;
              UNLOCK();
              local_b0 = CONCAT31(local_b0._1_3_,1);
              FUN_1447439e4(puVar34);
              LOCK();
              piVar29 = (int *)(puVar34 + 1);
              *piVar29 = *piVar29 + -1;
              UNLOCK();
              if (*piVar29 == 0) {
                (**(code **)*puVar34)(puVar34,1);
              }
            }
            if (puVar12 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
              UNLOCK();
            }
            local_90 = (int *)0x0;
            local_88 = CONCAT44(local_88._4_4_,1);
            local_128 = puVar12;
            FUN_144727e94(&local_b0,1,0);
            piVar29 = local_90;
            if (local_90 == (int *)0x0) {
              piVar29 = &local_b0;
            }
            FUN_144727e6e(piVar29,&local_128,1);
            if (local_128 != (undefined8 *)0x0) {
              LOCK();
              piVar29 = (int *)(local_128 + 1);
              *piVar29 = *piVar29 + -1;
              UNLOCK();
              if (*piVar29 == 0) {
                (**(code **)*local_128)(local_128,1);
              }
            }
            puVar15 = (uint *)*puVar35;
            if (puVar15 != (uint *)0x0) goto LAB_14024a328;
            goto LAB_14024a2a8;
          }
          *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
          LOCK();
          uVar23 = *puVar15;
          *puVar15 = *puVar15 + uVar18 + 1;
          UNLOCK();
          if ((uVar23 ^ uVar18) != 0xffffffff) break;
          puVar15 = (uint *)*puVar35;
          *puVar15 = 0xffffffff;
          *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar35 = puVar15;
          uVar33 = (longlong)puVar15 + 0x5f;
          uVar18 = 0;
        }
      } while( true );
    }
    goto LAB_14024a81f;
  }
  AcquireSRWLockShared(param_1);
  pRVar26 = param_1 + 3;
  if (*(int *)&param_1[4].Ptr != *(int *)((longlong)&param_1[9].Ptr + 4)) {
    uVar18 = FUN_14490dc6d(param_2);
    pRVar20 = param_1 + 10;
    if (param_1[0xb].Ptr != (PSRWLOCK)0x0) {
      pRVar20 = param_1[0xb].Ptr;
    }
    iVar17 = *(int *)((longlong)&pRVar20->Ptr +
                     (ulonglong)(*(int *)&param_1[0xc].Ptr - 1U & uVar18) * 4);
    if (iVar17 != -1) {
      pvVar3 = pRVar26->Ptr;
      do {
        lVar11 = (longlong)iVar17 * 0x98;
        if ((((*(int *)((longlong)pvVar3 + lVar11) == (int)*param_2) &&
             (puVar24 = (undefined1 *)((longlong)pvVar3 + lVar11),
             *(longlong *)(puVar24 + 8) == param_2[1])) &&
            (*(longlong *)(puVar24 + 0x10) == param_2[2])) &&
           ((*(longlong *)(puVar24 + 0x18) == param_2[3] &&
            (*(longlong *)(puVar24 + 0x20) == param_2[4])))) {
          if ((puVar24 != &DAT_ffffffffffffffd8 && puVar24 != (undefined1 *)0x0) &&
             (puVar24[0x2c] == '\x03')) {
            ReleaseSRWLockShared(param_1);
            goto LAB_140249dec;
          }
          break;
        }
        iVar17 = *(int *)((longlong)pvVar3 + lVar11 + 0x90);
      } while (iVar17 != -1);
    }
  }
  ReleaseSRWLockShared(param_1);
  if (DAT_14c761954 == 0) {
    local_150 = (longlong *)((ulonglong)local_150._4_4_ << 0x20);
  }
  else {
    uVar6 = FUN_1447e0190();
    local_150 = (longlong *)CONCAT44(local_150._4_4_,uVar6);
  }
  local_130 = (undefined8 *)0x0;
  AcquireSRWLockExclusive(param_1);
  if (*(int *)&param_1[4].Ptr != *(int *)((longlong)&param_1[9].Ptr + 4)) {
    uVar18 = FUN_14490dc6d(param_2);
    pRVar20 = param_1 + 10;
    if (param_1[0xb].Ptr != (PSRWLOCK)0x0) {
      pRVar20 = param_1[0xb].Ptr;
    }
    iVar17 = *(int *)((longlong)&pRVar20->Ptr +
                     (ulonglong)(*(int *)&param_1[0xc].Ptr - 1U & uVar18) * 4);
    if (iVar17 != -1) {
      pvVar3 = pRVar26->Ptr;
LAB_140249940:
      lVar11 = (longlong)iVar17 * 0x98;
      if (((*(int *)((longlong)pvVar3 + lVar11) != (int)*param_2) ||
          (pvVar1 = (PVOID)((longlong)pvVar3 + lVar11),
          *(longlong *)((longlong)pvVar1 + 8) != param_2[1])) ||
         ((*(longlong *)((longlong)pvVar1 + 0x10) != param_2[2] ||
          ((*(longlong *)((longlong)pvVar1 + 0x18) != param_2[3] ||
           (*(longlong *)((longlong)pvVar1 + 0x20) != param_2[4])))))) goto LAB_14024995b;
      piVar29 = (int *)((longlong)pvVar1 + 0x28);
      if (piVar29 != (int *)0x0 && pvVar1 != (PVOID)0x0) {
        if (param_3 == '\x01') {
          uVar14 = CONCAT71((int7)((ulonglong)param_2[1] >> 8),
                            *(char *)((longlong)pvVar1 + 0x88) != '\x01');
        }
        else {
          uVar14 = 0;
        }
        FUN_1402d01fc(piVar29,uVar14);
        if (*(char *)((longlong)pvVar1 + 0x2c) == '\x03') {
          ReleaseSRWLockExclusive(param_1);
LAB_140249dec:
          iVar17 = -1;
          goto LAB_14024a81f;
        }
        if (*(longlong *)((longlong)pvVar1 + 0x30) == 0) {
          lVar11 = (longlong)pvVar1 + 0x38;
          if (*(longlong *)((longlong)pvVar1 + 0x78) != 0) {
            lVar11 = *(longlong *)((longlong)pvVar1 + 0x78);
          }
          iVar17 = *(int *)((longlong)pvVar1 + 0x80);
          if ((longlong)iVar17 != 0) {
            lVar32 = 0;
            do {
              iVar31 = *(int *)(param_4 + 0x28);
              *(uint *)(param_4 + 0x28) = iVar31 + 1U;
              if (*(uint *)(param_4 + 0x2c) < iVar31 + 1U) {
                FUN_14476a5c8(param_4,iVar31);
              }
              lVar21 = *(longlong *)(param_4 + 0x20);
              if (*(longlong *)(param_4 + 0x20) == 0) {
                lVar21 = param_4;
              }
              lVar4 = *(longlong *)(lVar11 + 8 + lVar32);
              *(longlong *)(lVar21 + (longlong)iVar31 * 8) = lVar4;
              if (lVar4 != 0) {
                LOCK();
                *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
                UNLOCK();
              }
              lVar32 = lVar32 + 0x10;
            } while ((longlong)iVar17 * 0x10 != lVar32);
          }
        }
        else {
          iVar17 = *(int *)(param_4 + 0x28);
          *(uint *)(param_4 + 0x28) = iVar17 + 1U;
          if (*(uint *)(param_4 + 0x2c) < iVar17 + 1U) {
            FUN_14476a5c8(param_4,iVar17);
          }
          lVar11 = *(longlong *)(param_4 + 0x20);
          if (*(longlong *)(param_4 + 0x20) == 0) {
            lVar11 = param_4;
          }
          lVar32 = *(longlong *)((longlong)pvVar1 + 0x30);
          *(longlong *)(lVar11 + (longlong)iVar17 * 8) = lVar32;
          if (lVar32 != 0) {
            LOCK();
            *(int *)(lVar32 + 8) = *(int *)(lVar32 + 8) + 1;
            UNLOCK();
          }
        }
        puVar12 = local_130;
        iVar17 = *piVar29;
        ReleaseSRWLockExclusive(param_1);
        if (puVar12 == (undefined8 *)0x0) goto LAB_14024a81f;
        LOCK();
        piVar29 = (int *)(puVar12 + 1);
        *piVar29 = *piVar29 + -1;
        UNLOCK();
        if (*piVar29 != 0) goto LAB_14024a81f;
        puVar35 = (undefined8 *)*puVar12;
        goto LAB_14024a818;
      }
    }
  }
LAB_140249998:
  iVar17 = *(int *)&param_1[2].Ptr;
  lVar11 = (longlong)iVar17;
  *(uint *)&param_1[2].Ptr = iVar17 + 1U;
  if (*(uint *)((longlong)&param_1[2].Ptr + 4) < iVar17 + 1U) {
    FUN_1417ea000(param_1 + 1,iVar17);
  }
  pvVar3 = param_1[1].Ptr;
  *(longlong *)((longlong)pvVar3 + lVar11 * 0x28 + 0x20) = param_2[4];
  lVar32 = *param_2;
  iVar31 = *(int *)((longlong)param_2 + 4);
  lVar21 = param_2[1];
  iVar7 = *(int *)((longlong)param_2 + 0xc);
  iVar19 = *(int *)((longlong)param_2 + 0x14);
  lVar4 = param_2[3];
  iVar28 = *(int *)((longlong)param_2 + 0x1c);
  piVar29 = (int *)((longlong)pvVar3 + lVar11 * 0x28 + 0x10);
  *piVar29 = (int)param_2[2];
  piVar29[1] = iVar19;
  piVar29[2] = (int)lVar4;
  piVar29[3] = iVar28;
  piVar29 = (int *)((longlong)pvVar3 + lVar11 * 0x28);
  *piVar29 = (int)lVar32;
  piVar29[1] = iVar31;
  piVar29[2] = (int)lVar21;
  piVar29[3] = iVar7;
  local_a8 = (undefined8 *)0x0;
  local_60 = (undefined1 *)0x0;
  local_58 = 0x400000000;
  local_ac = 1;
  local_144 = iVar17;
  local_b0 = iVar17;
  local_50 = param_3;
  if ((char)local_150 != '\0') {
    puVar12 = (undefined8 *)FUN_1446fac86(0xa8);
    FUN_1447247dc(puVar12,0);
    *puVar12 = &PTR_FUN_149e00300;
    if (*(code **)(puVar12[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar12[0xe] + 0x18))(puVar12 + 0xe,puVar12 + 9);
    }
    puVar35 = local_130;
    puVar12[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar12[9] = puVar12;
    puVar12[10] = puVar12;
    lVar11 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar11 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(undefined8 *)(lVar11 + 0x30);
    }
    puVar12[0xf] = uVar14;
    puVar12[0x10] = 0xc80000527800c400;
    *(undefined4 *)((longlong)puVar12 + 0x1c) = 2;
    if (local_130 != (undefined8 *)0x0) {
      LOCK();
      piVar29 = (int *)(local_130 + 1);
      *piVar29 = *piVar29 + -1;
      UNLOCK();
      if (*piVar29 == 0) {
        puVar34 = (undefined8 *)*local_130;
        local_130 = puVar12;
        (*(code *)*puVar34)(puVar35,1);
        puVar12 = local_130;
      }
    }
    local_130 = puVar12;
    puVar12 = local_a8;
    puVar35 = local_a8;
    if (local_a8 != local_130) {
      if (local_130 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_130 + 1) = *(int *)(local_130 + 1) + 1;
        UNLOCK();
      }
      puVar35 = local_130;
      if (local_a8 != (undefined8 *)0x0) {
        LOCK();
        piVar29 = (int *)(local_a8 + 1);
        *piVar29 = *piVar29 + -1;
        UNLOCK();
        puVar35 = local_130;
        if (*piVar29 == 0) {
          puVar35 = (undefined8 *)*local_a8;
          local_a8 = local_130;
          (*(code *)*puVar35)(puVar12,1);
          puVar35 = local_a8;
        }
      }
    }
    local_a8 = puVar35;
    uVar6 = *(undefined4 *)&param_1[0xd].Ptr;
    local_108 = param_2[4];
    local_128 = (undefined8 *)*param_2;
    iStack_120 = (int)param_2[1];
    iStack_11c = *(int *)((longlong)param_2 + 0xc);
    local_118 = (int)param_2[2];
    iStack_114 = *(int *)((longlong)param_2 + 0x14);
    iStack_110 = (int)param_2[3];
    iStack_10c = *(int *)((longlong)param_2 + 0x1c);
    local_f8[0] = (code *)0x0;
    local_e8 = (undefined8 *)FUN_14001cc68(0x40,8);
    *local_e8 = &PTR_LAB_14aa595e0;
    local_e8[1] = param_1;
    local_e8[6] = local_108;
    *(int *)(local_e8 + 4) = local_118;
    *(int *)((longlong)local_e8 + 0x24) = iStack_114;
    *(int *)(local_e8 + 5) = iStack_110;
    *(int *)((longlong)local_e8 + 0x2c) = iStack_10c;
    *(undefined4 *)(local_e8 + 2) = (undefined4)local_128;
    *(undefined4 *)((longlong)local_e8 + 0x14) = local_128._4_4_;
    *(int *)(local_e8 + 3) = iStack_120;
    *(int *)((longlong)local_e8 + 0x1c) = iStack_11c;
    *(undefined4 *)(local_e8 + 7) = uVar6;
    if (local_e8 + 1 != (undefined8 *)0x0) {
      local_f8[0] = FUN_1402d0136;
    }
    local_158 = 0xff;
    FUN_140e6df44(&local_138,local_f8);
    if (local_138 != (undefined8 *)0x0) {
      LOCK();
      piVar29 = (int *)(local_138 + 1);
      *piVar29 = *piVar29 + -1;
      UNLOCK();
      if (*piVar29 == 0) {
        (**(code **)*local_138)(local_138,1);
      }
    }
  }
  iVar17 = *(int *)((longlong)&param_1[9].Ptr + 4);
  local_140 = pRVar26;
  if (iVar17 == 0) {
    iVar31 = *(int *)&param_1[4].Ptr;
    iVar17 = *(int *)((longlong)&param_1[4].Ptr + 4);
    *(int *)&param_1[4].Ptr = iVar31 + 1;
    if (iVar17 == iVar31) {
      FUN_14125fb0c(pRVar26,iVar31);
    }
    iVar17 = *(int *)&param_1[8].Ptr;
    if (iVar17 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = iVar17 + 0x1e;
      if (-1 < iVar17 + -1) {
        iVar7 = iVar17 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    pRVar26 = param_1 + 5;
    iVar19 = iVar17 + 1;
    iVar28 = iVar17 + 0x1f;
    if (-1 < iVar17) {
      iVar28 = iVar17;
    }
    if (iVar28 >> 5 == iVar7) {
      *(int *)&param_1[8].Ptr = iVar19;
    }
    else {
      iVar7 = *(int *)((longlong)&param_1[8].Ptr + 4);
      if (iVar7 <= iVar17) {
        iVar19 = iVar17;
        if (iVar17 + 0x20U < 0xa0) {
          iVar7 = 0x80;
        }
        else {
          uVar18 = iVar17 + 0x20U >> 5;
          if (iVar7 + 0x1fU < 0xa0) {
            uVar23 = 4;
            if (4 < uVar18) {
              uVar23 = uVar18;
            }
          }
          else {
            uVar23 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar33 = (ulonglong)(uVar23 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar8 = (uint)(uVar33 + 0xf);
              if (uVar23 < 0x1ffd) {
                uVar33 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar33 + 0xf >> 4]];
              }
              else {
                uVar22 = (ulonglong)(uVar8 & 0xfffffff0);
                if (uVar22 < 0x7ff1) {
                  bVar16 = (&DAT_14c841e00)[uVar8 >> 4];
                  uVar27 = 0x32;
                  if (0x32 < bVar16) {
                    uVar27 = (ulonglong)bVar16;
                  }
                  uVar30 = 0x32 - (ulonglong)bVar16;
                  do {
                    uVar33 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar30 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar30 & 0xffffffff] & 0xf) == 0) goto LAB_14024ac57;
                    lVar11 = uVar27 + 1 + uVar30;
                    uVar30 = uVar30 - 1;
                  } while (lVar11 != 0x33);
                }
                uVar33 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar33 = (ulonglong)DAT_14c841df8;
                }
                uVar33 = -uVar33 & (uVar22 + uVar33) - 1;
              }
            }
            else {
              uVar33 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar33,0);
              iVar19 = *(int *)&param_1[8].Ptr;
            }
          }
LAB_14024ac57:
          iVar9 = (int)(uVar33 >> 2);
          iVar7 = -0x20;
          if ((int)uVar18 <= iVar9) {
            iVar7 = iVar9 << 5;
          }
        }
        *(int *)((longlong)&param_1[8].Ptr + 4) = iVar7;
        FUN_1446efbd8(pRVar26,iVar19);
        iVar19 = *(int *)&param_1[8].Ptr + 1;
      }
      iVar7 = iVar19 + 0x1f;
      if (-1 < iVar19) {
        iVar7 = iVar19;
      }
      *(int *)&param_1[8].Ptr = iVar19;
      if (iVar19 % 0x20 != 0) {
        pRVar20 = param_1[7].Ptr;
        if (param_1[7].Ptr == (PSRWLOCK)0x0) {
          pRVar20 = pRVar26;
        }
        bVar16 = -(char)(iVar19 % 0x20);
        *(uint *)((longlong)&pRVar20->Ptr + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)((longlong)&pRVar20->Ptr + (longlong)(iVar7 >> 5) * 4) <<
                   (bVar16 & 0x1f)) >> (bVar16 & 0x1f);
      }
    }
    lVar11 = (longlong)iVar31;
    if (param_1[7].Ptr != (PSRWLOCK)0x0) {
      pRVar26 = param_1[7].Ptr;
    }
    bVar16 = (byte)iVar17 & 0x1f;
    puVar15 = (uint *)((longlong)&pRVar26->Ptr + (longlong)(iVar28 >> 5) * 4);
    *puVar15 = *puVar15 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
  }
  else {
    pvVar3 = param_1[3].Ptr;
    iVar31 = *(int *)&param_1[9].Ptr;
    lVar11 = (longlong)iVar31;
    iVar7 = *(int *)((longlong)pvVar3 + lVar11 * 0x98 + 4);
    *(int *)&param_1[9].Ptr = iVar7;
    iVar17 = iVar17 + -1;
    *(int *)((longlong)&param_1[9].Ptr + 4) = iVar17;
    if (iVar17 != 0) {
      *(undefined4 *)((longlong)pvVar3 + (longlong)iVar7 * 0x98) = 0xffffffff;
    }
  }
  pRVar26 = local_140;
  pRVar20 = param_1 + 5;
  if (param_1[7].Ptr != (PSRWLOCK)0x0) {
    pRVar20 = param_1[7].Ptr;
  }
  iVar17 = iVar31 + 0x1f;
  if (-1 < iVar31) {
    iVar17 = iVar31;
  }
  puVar15 = (uint *)((longlong)&pRVar20->Ptr + (longlong)(iVar17 >> 5) * 4);
  *puVar15 = *puVar15 | 1 << ((byte)iVar31 & 0x1f);
  pvVar3 = param_1[3].Ptr;
  lVar11 = lVar11 * 0x98;
  piVar29 = (int *)((longlong)pvVar3 + lVar11);
  *(longlong *)((longlong)pvVar3 + lVar11 + 0x20) = param_2[4];
  lVar32 = *param_2;
  iVar17 = *(int *)((longlong)param_2 + 4);
  lVar21 = param_2[1];
  iVar7 = *(int *)((longlong)param_2 + 0xc);
  iVar19 = *(int *)((longlong)param_2 + 0x14);
  lVar4 = param_2[3];
  iVar28 = *(int *)((longlong)param_2 + 0x1c);
  piVar2 = (int *)((longlong)pvVar3 + lVar11 + 0x10);
  *piVar2 = (int)param_2[2];
  piVar2[1] = iVar19;
  piVar2[2] = (int)lVar4;
  piVar2[3] = iVar28;
  piVar2 = (int *)((longlong)pvVar3 + lVar11);
  *piVar2 = (int)lVar32;
  piVar2[1] = iVar17;
  piVar2[2] = (int)lVar21;
  piVar2[3] = iVar7;
  *(int *)((longlong)pvVar3 + lVar11 + 0x28) = local_b0;
  *(undefined1 *)((longlong)pvVar3 + lVar11 + 0x2c) = local_ac;
  *(undefined8 **)((longlong)pvVar3 + lVar11 + 0x30) = local_a8;
  if (local_a8 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_a8 + 1) = *(int *)(local_a8 + 1) + 1;
    UNLOCK();
  }
  piVar29[0x1e] = 0;
  piVar29[0x1f] = 0;
  puVar24 = local_60;
  if (local_60 == (undefined1 *)0x0) {
    puVar24 = local_a0;
  }
  FUN_1405be342(piVar29 + 0xe,puVar24,local_58 & 0xffffffff,0);
  *(char *)(piVar29 + 0x22) = local_50;
  piVar29[0x24] = -1;
  uVar18 = FUN_14490dc6d(piVar29);
  uVar23 = *(int *)&param_1[4].Ptr - *(int *)((longlong)&param_1[9].Ptr + 4);
  if ((uVar23 != 0) && (uVar23 != 1)) {
    pRVar20 = param_1 + 10;
    if (param_1[0xb].Ptr != (PSRWLOCK)0x0) {
      pRVar20 = param_1[0xb].Ptr;
    }
    iVar17 = *(int *)((longlong)&pRVar20->Ptr +
                     (ulonglong)(*(int *)&param_1[0xc].Ptr - 1U & uVar18) * 4);
    if (iVar17 != -1) {
      pvVar3 = pRVar26->Ptr;
      do {
        lVar11 = (longlong)iVar17 * 0x98;
        if ((((*(int *)((longlong)pvVar3 + lVar11) == *piVar29) &&
             (_Dst = (void *)((longlong)pvVar3 + lVar11),
             *(longlong *)((longlong)_Dst + 8) == *(longlong *)(piVar29 + 2))) &&
            (*(longlong *)((longlong)_Dst + 0x10) == *(longlong *)(piVar29 + 4))) &&
           ((*(longlong *)((longlong)_Dst + 0x18) == *(longlong *)(piVar29 + 6) &&
            (*(longlong *)((longlong)_Dst + 0x20) == *(longlong *)(piVar29 + 8))))) {
          FUN_140231422((longlong)_Dst + 0x38);
          puVar12 = *(undefined8 **)((longlong)_Dst + 0x30);
          if (puVar12 != (undefined8 *)0x0) {
            LOCK();
            piVar2 = (int *)(puVar12 + 1);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)*puVar12)(puVar12,1);
            }
          }
          memmove(_Dst,piVar29,0x90);
          FUN_140231494(local_140,iVar31);
          goto LAB_140249cb2;
        }
        iVar17 = *(int *)((longlong)pvVar3 + lVar11 + 0x90);
        pRVar26 = local_140;
      } while (iVar17 != -1);
    }
  }
  if (uVar23 < 4) {
    iVar17 = 1;
  }
  else {
    uVar33 = (ulonglong)(uVar23 & 0xfffffffe) + 0xf;
    lVar11 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar17 = 1 << ((byte)lVar11 & 0x1f);
  }
  if (((int)uVar23 < 1) || (iVar17 <= *(int *)&param_1[0xc].Ptr)) {
    uVar18 = *(int *)&param_1[0xc].Ptr - 1U & uVar18;
    piVar29[0x25] = uVar18;
    pRVar26 = param_1[0xb].Ptr;
    if (param_1[0xb].Ptr == (PSRWLOCK)0x0) {
      pRVar26 = param_1 + 10;
    }
    piVar29[0x24] =
         *(int *)((longlong)&pRVar26->Ptr +
                 ((longlong)*(int *)&param_1[0xc].Ptr - 1U & (longlong)(int)uVar18) * 4);
    pRVar26 = param_1[0xb].Ptr;
    if (param_1[0xb].Ptr == (PSRWLOCK)0x0) {
      pRVar26 = param_1 + 10;
    }
    *(int *)((longlong)&pRVar26->Ptr +
            ((longlong)*(int *)&param_1[0xc].Ptr - 1U & (longlong)(int)uVar18) * 4) = iVar31;
  }
  else {
    *(int *)&param_1[0xc].Ptr = iVar17;
    FUN_140d9707e(pRVar26);
  }
LAB_140249cb2:
  FUN_140231422(local_a0);
  iVar17 = local_144;
  if (local_a8 != (undefined8 *)0x0) {
    LOCK();
    piVar29 = (int *)(local_a8 + 1);
    *piVar29 = *piVar29 + -1;
    UNLOCK();
    if (*piVar29 == 0) {
      (**(code **)*local_a8)(local_a8,1);
    }
  }
  ReleaseSRWLockExclusive(param_1);
  if ((char)local_150 == '\0') {
    FUN_1405be624(*(undefined8 *)(param_2[1] + 0x10),&local_128,param_2);
    FUN_1405be4a9(&local_b0,&local_128);
    FUN_1405be1ea(param_1,param_2,&local_b0,*(undefined4 *)&param_1[0xd].Ptr);
    if (local_70 == (int *)0x0) {
      local_70 = &local_b0;
    }
    if ((longlong)local_68 != 0) {
      lVar11 = 0;
      do {
        iVar31 = *(int *)(param_4 + 0x28);
        *(uint *)(param_4 + 0x28) = iVar31 + 1U;
        if (*(uint *)(param_4 + 0x2c) < iVar31 + 1U) {
          FUN_14476a5c8(param_4,iVar31);
        }
        lVar32 = *(longlong *)(param_4 + 0x20);
        if (*(longlong *)(param_4 + 0x20) == 0) {
          lVar32 = param_4;
        }
        lVar21 = *(longlong *)((longlong)local_70 + lVar11 + 8);
        *(longlong *)(lVar32 + (longlong)iVar31 * 8) = lVar21;
        if (lVar21 != 0) {
          LOCK();
          *(int *)(lVar21 + 8) = *(int *)(lVar21 + 8) + 1;
          UNLOCK();
        }
        lVar11 = lVar11 + 0x10;
      } while ((longlong)local_68 * 0x10 != lVar11);
    }
    FUN_140231422(&local_b0);
    FUN_1405be1b2(local_128,iStack_120);
    if (local_128 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    plVar10 = (longlong *)FUN_14001cc68(8,0x10);
    lVar11 = (**(code **)(*(longlong *)param_2[1] + 0x4c0))();
    *plVar10 = 0;
    if (lVar11 != 0) {
      FUN_1401924dc(lVar11);
      *plVar10 = lVar11;
    }
    local_90 = (int *)0x0;
    local_88 = 0x400000000;
    puVar12 = (undefined8 *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x308);
    puVar15 = (uint *)*puVar12;
    if (puVar15 != (uint *)0x0) goto LAB_14024a62d;
    while( true ) {
      uVar18 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar18 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar18 | 1;
        __tlregdtor(&LAB_14365fa42);
      }
      lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar13 = *(undefined4 **)(lVar11 + 0x310);
      *(undefined8 *)(lVar11 + 0x310) = 0;
      if (puVar13 == (undefined4 *)0x0) {
        puVar13 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar13 = 0xffffffff;
      *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
      puVar13[0x12] = 0;
      *puVar12 = puVar13;
      FUN_140217a48(puVar12);
      puVar15 = (uint *)*puVar12;
LAB_14024a62d:
      puVar35 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar25 = (uint *)(puVar35 + 0x1d);
      uVar18 = puVar15[0x12];
      if (puVar25 <= puVar15 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
        LOCK();
        uVar23 = *puVar15;
        *puVar15 = *puVar15 + uVar18 + 1;
        UNLOCK();
        if ((uVar23 ^ uVar18) != 0xffffffff) break;
        puVar15 = (uint *)*puVar12;
        *puVar15 = 0xffffffff;
        *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
        puVar15[0x12] = 0;
        *puVar12 = puVar15;
        puVar35 = (undefined8 *)((longlong)puVar15 + 0x5fU & 0xfffffffffffffff8);
        puVar25 = (uint *)(puVar35 + 0x1d);
        uVar18 = 0;
        if (puVar25 <= puVar15 + 0x4000) {
          uVar18 = 1;
          goto LAB_14024a6af;
        }
      }
    }
    uVar18 = uVar18 + 1;
LAB_14024a6af:
    *(uint **)(puVar15 + 0x10) = puVar25;
    puVar15[0x12] = uVar18;
    FUN_1447247dc(puVar35,&local_b0);
    *puVar35 = &PTR_FUN_14aa59600;
    uVar6 = *(undefined4 *)&param_1[0xd].Ptr;
    puVar35[0x15] = plVar10;
    puVar35[0x1a] = param_2[4];
    lVar11 = *param_2;
    iVar17 = *(int *)((longlong)param_2 + 4);
    lVar32 = param_2[1];
    iVar31 = *(int *)((longlong)param_2 + 0xc);
    iVar7 = *(int *)((longlong)param_2 + 0x14);
    lVar21 = param_2[3];
    iVar19 = *(int *)((longlong)param_2 + 0x1c);
    *(int *)(puVar35 + 0x18) = (int)param_2[2];
    *(int *)((longlong)puVar35 + 0xc4) = iVar7;
    *(int *)(puVar35 + 0x19) = (int)lVar21;
    *(int *)((longlong)puVar35 + 0xcc) = iVar19;
    *(int *)(puVar35 + 0x16) = (int)lVar11;
    *(int *)((longlong)puVar35 + 0xb4) = iVar17;
    *(int *)(puVar35 + 0x17) = (int)lVar32;
    *(int *)((longlong)puVar35 + 0xbc) = iVar31;
    puVar35[0x1b] = local_130;
    if (local_130 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_130 + 1) = *(int *)(local_130 + 1) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar35 + 0x1c) = uVar6;
    if (*(code **)(puVar35[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar35[0xe] + 0x18))(puVar35 + 0xe,puVar35 + 9);
    }
    puVar35[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar35[9] = puVar35;
    puVar35[10] = puVar35;
    lVar11 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar11 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(undefined8 *)(lVar11 + 0x30);
    }
    puVar35[0xf] = uVar14;
    puVar35[0x10] = 0xd80000527800b400;
    *(undefined4 *)((longlong)puVar35 + 0x1c) = 0;
    if (puVar35 == (undefined8 *)0x0) {
      local_128 = (undefined8 *)CONCAT71(local_128._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar35 + 1) = *(int *)(puVar35 + 1) + 1;
      UNLOCK();
      local_128 = (undefined8 *)CONCAT71(local_128._1_7_,1);
      FUN_1447439e4(puVar35);
      LOCK();
      piVar29 = (int *)(puVar35 + 1);
      *piVar29 = *piVar29 + -1;
      UNLOCK();
      if (*piVar29 == 0) {
        (**(code **)*puVar35)(puVar35,1);
      }
    }
    iVar17 = *(int *)(param_4 + 0x28);
    *(uint *)(param_4 + 0x28) = iVar17 + 1U;
    if (*(uint *)(param_4 + 0x2c) < iVar17 + 1U) {
      FUN_14476a5c8(param_4,iVar17);
    }
    lVar11 = *(longlong *)(param_4 + 0x20);
    if (*(longlong *)(param_4 + 0x20) == 0) {
      lVar11 = param_4;
    }
    *(undefined8 **)(lVar11 + (longlong)iVar17 * 8) = local_130;
    if (local_130 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_130 + 1) = *(int *)(local_130 + 1) + 1;
      UNLOCK();
    }
    piVar29 = &local_b0;
    if (local_90 != (int *)0x0) {
      piVar29 = local_90;
    }
    FUN_144717c65(piVar29,local_88 & 0xffffffff);
    iVar17 = local_144;
    if (local_90 != (int *)0x0) {
      FUN_1400020a8();
      iVar17 = local_144;
    }
  }
  if (local_130 == (undefined8 *)0x0) goto LAB_14024a81f;
  LOCK();
  piVar29 = (int *)(local_130 + 1);
  *piVar29 = *piVar29 + -1;
  UNLOCK();
  if (*piVar29 != 0) goto LAB_14024a81f;
  puVar35 = (undefined8 *)*local_130;
  puVar12 = local_130;
  goto LAB_14024a818;
LAB_14024a2a8:
  uVar18 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x318);
  if ((uVar18 & 1) == 0) {
    *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
             ) = uVar18 | 1;
    __tlregdtor(&LAB_14365fa42);
  }
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar13 = *(undefined4 **)(lVar11 + 0x310);
  *(undefined8 *)(lVar11 + 0x310) = 0;
  if (puVar13 == (undefined4 *)0x0) {
    puVar13 = _aligned_malloc(0x10000,0x10000);
  }
  *puVar13 = 0xffffffff;
  *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
  puVar13[0x12] = 0;
  *puVar35 = puVar13;
  FUN_140217a48(puVar35);
  puVar15 = (uint *)*puVar35;
LAB_14024a328:
  puVar34 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar25 = (uint *)(puVar34 + 0x16);
  uVar18 = puVar15[0x12];
  if (puVar25 <= puVar15 + 0x4000) goto LAB_14024abc3;
  while( true ) {
    *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
    LOCK();
    uVar23 = *puVar15;
    *puVar15 = *puVar15 + uVar18 + 1;
    UNLOCK();
    if ((uVar23 ^ uVar18) != 0xffffffff) break;
    puVar15 = (uint *)*puVar35;
    *puVar15 = 0xffffffff;
    *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
    puVar15[0x12] = 0;
    *puVar35 = puVar15;
    puVar34 = (undefined8 *)((longlong)puVar15 + 0x5fU & 0xfffffffffffffff8);
    puVar25 = (uint *)(puVar34 + 0x16);
    uVar18 = 0;
    if (puVar25 <= puVar15 + 0x4000) {
      uVar18 = 1;
      goto LAB_14024a3aa;
    }
  }
  goto LAB_14024a2a8;
LAB_14024995b:
  iVar17 = *(int *)((longlong)pvVar3 + lVar11 + 0x90);
  if (iVar17 == -1) goto LAB_140249998;
  goto LAB_140249940;
LAB_14024abc3:
  uVar18 = uVar18 + 1;
LAB_14024a3aa:
  *(uint **)(puVar15 + 0x10) = puVar25;
  puVar15[0x12] = uVar18;
  FUN_1447247dc(puVar34,&local_b0);
  *puVar34 = &PTR_FUN_14aa595c0;
  puVar34[0x15] = plVar10;
  iVar17 = -1;
  if (*(code **)(puVar34[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar34[0xe] + 0x18))(puVar34 + 0xe,puVar34 + 9);
  }
  puVar34[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar34[9] = puVar34;
  puVar34[10] = puVar34;
  if (*local_150 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined8 *)(*local_150 + 0x30);
  }
  puVar34[0xf] = uVar14;
  puVar34[0x10] = 0xe80000527800b400;
  *(undefined4 *)((longlong)puVar34 + 0x1c) = 3;
  if (puVar34 == (undefined8 *)0x0) {
    local_128 = (undefined8 *)CONCAT71(local_128._1_7_,1);
    FUN_1447439e4(0);
  }
  else {
    LOCK();
    *(int *)(puVar34 + 1) = *(int *)(puVar34 + 1) + 1;
    UNLOCK();
    local_128 = (undefined8 *)CONCAT71(local_128._1_7_,1);
    FUN_1447439e4(puVar34);
    LOCK();
    piVar29 = (int *)(puVar34 + 1);
    *piVar29 = *piVar29 + -1;
    UNLOCK();
    if (*piVar29 == 0) {
      (**(code **)*puVar34)(puVar34,1);
    }
  }
  iVar31 = *(int *)(param_4 + 0x28);
  *(uint *)(param_4 + 0x28) = iVar31 + 1U;
  if (*(uint *)(param_4 + 0x2c) < iVar31 + 1U) {
    FUN_14476a5c8(param_4,iVar31);
  }
  lVar11 = *(longlong *)(param_4 + 0x20);
  if (*(longlong *)(param_4 + 0x20) == 0) {
    lVar11 = param_4;
  }
  *(undefined8 **)(lVar11 + (longlong)iVar31 * 8) = puVar12;
  if (puVar12 == (undefined8 *)0x0) {
    piVar29 = &local_b0;
    if (local_90 != (int *)0x0) {
      piVar29 = local_90;
    }
    FUN_144717c65(piVar29,local_88 & 0xffffffff);
    if (local_90 != (int *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_14024a81f;
  }
  LOCK();
  *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
  UNLOCK();
  piVar29 = &local_b0;
  if (local_90 != (int *)0x0) {
    piVar29 = local_90;
  }
  FUN_144717c65(piVar29,local_88 & 0xffffffff);
  if (local_90 != (int *)0x0) {
    FUN_1400020a8();
  }
  LOCK();
  piVar29 = (int *)(puVar12 + 1);
  *piVar29 = *piVar29 + -1;
  UNLOCK();
  if (*piVar29 != 0) goto LAB_14024a81f;
  puVar35 = (undefined8 *)*puVar12;
LAB_14024a818:
  (*(code *)*puVar35)(puVar12,1);
LAB_14024a81f:
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return iVar17;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14024ae2e FUN_14024ae2e body=598 status=ok
// SIG undefined FUN_14024ae2e(void)

undefined4 FUN_14024ae2e(undefined8 param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  char cVar6;
  undefined4 uVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *plStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a0 = 0xffffffffffffffff;
  local_98 = 0;
  local_90 = DAT_14cb1cda8;
  uStack_88 = DAT_14cb1cdb0;
  local_80 = DAT_14cb1cdb8;
  local_78 = DAT_14cb1cda8;
  uStack_70 = DAT_14cb1cdb0;
  local_68 = DAT_14cb1cdb8;
  local_60 = 0;
  plStack_58 = (longlong *)0x0;
  local_50 = 0xffffffff;
  cVar6 = FUN_14024b1e0(param_2);
  if (cVar6 != '\0') {
    uVar7 = FUN_14039a586(param_1,&local_a0);
    goto LAB_14024aeeb;
  }
  if (*(char *)(param_2 + 8) == '\x0e') {
    lVar10 = FUN_140593260(param_2);
    if (lVar10 != 0) {
      if ((DAT_14c86a9f8 != '\x01') ||
         (iVar3 = *(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0xc60), iVar3 == 2)) {
LAB_14024b061:
        local_48 = *(undefined8 **)(lVar10 + 0x260);
        uStack_40 = *(undefined8 *)(lVar10 + 0x268);
        puVar11 = &local_48;
        local_38 = *(undefined8 *)(lVar10 + 0x270);
        goto LAB_14024aee1;
      }
      if (iVar3 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_14024b061;
      }
    }
LAB_14024affb:
    uVar7 = 0;
  }
  else {
    local_a8 = 0;
    cVar6 = FUN_14024b086(param_2);
    if (cVar6 != '\0') {
      uVar7 = FUN_147e47b54(param_1,local_a8);
      goto LAB_14024aeeb;
    }
    if (*(char *)(param_2 + 8) == '\x04') {
      local_b8 = *(undefined8 *)(param_2 + 4);
      local_c8 = *param_2;
      uStack_c4 = param_2[1];
      uStack_c0 = param_2[2];
      uStack_bc = param_2[3];
    }
    else {
      FUN_1400b56fe(&local_48,param_2,4);
      if (local_28 != 0) {
        local_b8 = local_38;
        local_c8 = (undefined4)local_48;
        uStack_c4 = local_48._4_4_;
        uStack_c0 = (undefined4)uStack_40;
        uStack_bc = uStack_40._4_4_;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
      if (pcVar4 != (code *)0x0) {
        puVar11 = &local_48;
        if (0x18 < local_30) {
          puVar11 = local_48;
        }
        (*pcVar4)(puVar11);
      }
      if (0x18 < local_30) {
        FUN_1400020a8(local_48);
      }
      if (local_28 == 0) goto LAB_14024affb;
    }
    puVar11 = (undefined8 *)&local_c8;
LAB_14024aee1:
    uVar7 = FUN_14024b35c(param_1,puVar11);
  }
LAB_14024aeeb:
  plVar5 = plStack_58;
  if (plStack_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_58)(plStack_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14024b086 FUN_14024b086 body=345 status=ok
// SIG undefined FUN_14024b086(void)

ulonglong FUN_14024b086(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 unaff_RBX;
  undefined7 uVar6;
  ulonglong uVar5;
  uint *puVar7;
  undefined1 auStack_68 [32];
  uint local_48;
  int iStack_44;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if ((char)param_1[8] != '\a') {
    puVar7 = &local_48;
    FUN_1400b56fe(puVar7,param_1,7);
    uVar5 = CONCAT71(uVar6,local_28 != 0);
    if (local_28 != 0) {
      if (iStack_44 == 0) {
LAB_14024b1b6:
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        if ((-1 < (int)local_48) && ((int)local_48 < DAT_14c9647dc)) {
          puVar4 = (undefined8 *)
                   ((ulonglong)((local_48 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_48 >> 0x10) * 8));
          if ((puVar4 == (undefined8 *)0x0) ||
             ((*(int *)(puVar4 + 2) != iStack_44 || ((*(uint *)(puVar4 + 1) & 0x10200000) != 0))))
          goto LAB_14024b1b6;
          uVar3 = *puVar4;
        }
      }
      *param_2 = uVar3;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_30) {
        puVar7 = (uint *)CONCAT44(iStack_44,local_48);
      }
      (*pcVar2)(puVar7);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(CONCAT44(iStack_44,local_48));
    }
    goto LAB_14024b0f3;
  }
  if (param_1[1] == 0) {
LAB_14024b15e:
    uVar3 = 0;
  }
  else {
    uVar1 = *param_1;
    uVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar4 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar4 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar4 + 2) != param_1[1] || ((*(uint *)(puVar4 + 1) & 0x10200000) != 0))))
      goto LAB_14024b15e;
      uVar3 = *puVar4;
    }
  }
  *param_2 = uVar3;
  uVar5 = CONCAT71(uVar6,1);
LAB_14024b0f3:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14024b1e0 FUN_14024b1e0 body=379 status=ok
// SIG undefined FUN_14024b1e0(void)

ulonglong FUN_14024b1e0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
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
  uint uVar19;
  undefined8 unaff_RBX;
  ulonglong uVar20;
  undefined8 ***pppuVar21;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((char)param_1[4] == '\t') {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar4 + 1);
    *param_2 = *puVar4;
    uVar8 = *(undefined4 *)(puVar4 + 2);
    uVar9 = *(undefined4 *)((longlong)puVar4 + 0x14);
    uVar10 = *(undefined4 *)(puVar4 + 3);
    uVar11 = *(undefined4 *)((longlong)puVar4 + 0x1c);
    uVar12 = *(undefined4 *)(puVar4 + 4);
    uVar13 = *(undefined4 *)((longlong)puVar4 + 0x24);
    uVar14 = *(undefined4 *)(puVar4 + 5);
    uVar15 = *(undefined4 *)((longlong)puVar4 + 0x2c);
    uVar16 = *(undefined4 *)((longlong)puVar4 + 0x34);
    uVar17 = *(undefined4 *)(puVar4 + 7);
    uVar18 = *(undefined4 *)((longlong)puVar4 + 0x3c);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(puVar4 + 6);
    *(undefined4 *)((longlong)param_2 + 0x34) = uVar16;
    *(undefined4 *)(param_2 + 7) = uVar17;
    *(undefined4 *)((longlong)param_2 + 0x3c) = uVar18;
    *(undefined4 *)(param_2 + 4) = uVar12;
    *(undefined4 *)((longlong)param_2 + 0x24) = uVar13;
    *(undefined4 *)(param_2 + 5) = uVar14;
    *(undefined4 *)((longlong)param_2 + 0x2c) = uVar15;
    *(undefined4 *)(param_2 + 2) = uVar8;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar9;
    *(undefined4 *)(param_2 + 3) = uVar10;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uVar11;
    uVar5 = puVar4[8];
    lVar6 = puVar4[9];
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    plVar7 = (longlong *)param_2[9];
    param_2[8] = uVar5;
    param_2[9] = lVar6;
    if (plVar7 != (longlong *)0x0) {
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
    *(undefined4 *)(param_2 + 10) = *(undefined4 *)(puVar4 + 10);
    uVar20 = CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
  }
  else {
    FUN_1400b56fe(local_48,param_1,9);
    uVar20 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_28 != 0);
    if (local_28 != 0) {
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(local_48[0] + 1);
      *param_2 = *local_48[0];
      uVar8 = *(undefined4 *)((longlong)local_48[0] + 0x14);
      uVar9 = *(undefined4 *)(local_48[0] + 3);
      uVar10 = *(undefined4 *)((longlong)local_48[0] + 0x1c);
      uVar11 = *(undefined4 *)(local_48[0] + 4);
      uVar12 = *(undefined4 *)((longlong)local_48[0] + 0x24);
      uVar13 = *(undefined4 *)(local_48[0] + 5);
      uVar14 = *(undefined4 *)((longlong)local_48[0] + 0x2c);
      uVar15 = *(undefined4 *)(local_48[0] + 6);
      uVar16 = *(undefined4 *)((longlong)local_48[0] + 0x34);
      uVar17 = *(undefined4 *)(local_48[0] + 7);
      uVar18 = *(undefined4 *)((longlong)local_48[0] + 0x3c);
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(local_48[0] + 2);
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar8;
      *(undefined4 *)(param_2 + 3) = uVar9;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uVar10;
      *(undefined4 *)(param_2 + 4) = uVar11;
      *(undefined4 *)((longlong)param_2 + 0x24) = uVar12;
      *(undefined4 *)(param_2 + 5) = uVar13;
      *(undefined4 *)((longlong)param_2 + 0x2c) = uVar14;
      *(undefined4 *)(param_2 + 6) = uVar15;
      *(undefined4 *)((longlong)param_2 + 0x34) = uVar16;
      *(undefined4 *)(param_2 + 7) = uVar17;
      *(undefined4 *)((longlong)param_2 + 0x3c) = uVar18;
      FUN_14488c2fc(param_2 + 8,local_48[0] + 8);
      uVar19 = (uint)local_28;
    }
    else {
      uVar19 = 0;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar19 * 0x120));
    if (pcVar3 != (code *)0x0) {
      pppuVar21 = local_48;
      if (0x18 < local_30) {
        pppuVar21 = (undefined8 ***)local_48[0];
      }
      (*pcVar3)(pppuVar21);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(local_48[0]);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar20 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14024b35c FUN_14024b35c body=1271 status=ok
// SIG undefined FUN_14024b35c(void)

/* WARNING: Removing unreachable block (ram,0x00014024b79b) */
/* WARNING: Removing unreachable block (ram,0x00014024b7a5) */
/* WARNING: Removing unreachable block (ram,0x00014024b834) */
/* WARNING: Removing unreachable block (ram,0x00014024b83e) */
/* WARNING: Removing unreachable block (ram,0x00014024b7b0) */
/* WARNING: Removing unreachable block (ram,0x00014024b7c6) */
/* WARNING: Removing unreachable block (ram,0x00014024b7d8) */

ulonglong FUN_14024b35c(undefined8 *param_1,double *param_2)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  double dVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  double *unaff_RBX;
  undefined7 uVar9;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong *local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  longlong *plStack_110;
  undefined8 local_108;
  double local_100;
  double dStack_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong *plStack_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8;
  undefined8 local_98;
  undefined4 local_90;
  double local_88;
  double dStack_80;
  double local_78;
  double local_70;
  double dStack_68;
  double local_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_60 = DAT_14cb1cdb8;
  dStack_68 = DAT_14cb1cdb0;
  local_70 = DAT_14cb1cda8;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_98 = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = DAT_14cb1cda8;
  dStack_80 = DAT_14cb1cdb0;
  local_78 = DAT_14cb1cdb8;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_48 = 0xffffffff;
  uVar7 = *(uint *)(param_1 + 0x11);
  if (uVar7 < 0x15) {
    unaff_RBX = &local_100;
    local_108 = *(double *)*param_1;
    uStack_120 = *(undefined4 *)(param_1 + 0x11);
    dVar4 = (double)param_1[0x10];
    local_118 = (double)param_1[0x12];
    plStack_110 = (longlong *)param_1[0x13];
    if (plStack_110 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plStack_110 + 0xc) = *(int *)((longlong)plStack_110 + 0xc) + 1;
      UNLOCK();
    }
    local_128._0_4_ = SUB84(dVar4,0);
    local_128._4_4_ = (undefined4)((ulonglong)dVar4 >> 0x20);
    local_158 = *(undefined4 *)param_2;
    uStack_154 = *(undefined4 *)((longlong)param_2 + 4);
    local_100 = *param_2;
    uStack_150 = *(undefined4 *)(param_2 + 1);
    uStack_14c = *(undefined4 *)((longlong)param_2 + 0xc);
    dStack_f8 = param_2[1];
    local_148 = (longlong *)param_2[2];
    local_e8 = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
    uStack_e0 = CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
    local_48 = 0xffffffff;
    plStack_50 = (longlong *)0x0;
    local_58 = 0;
    local_78 = local_60;
    dStack_80 = dStack_68;
    local_88 = local_70;
    local_90 = 0;
    local_98 = 0xffffffffffffffff;
    uStack_ac = 0xffffffff;
    uStack_b0 = 0xffffffff;
    plStack_c8 = (longlong *)0x0;
    local_d0 = 0;
    local_d8 = DAT_14cb1c870;
    local_130 = DAT_14cb1c870;
    uStack_134 = DAT_14cb1c868._4_4_;
    uStack_138 = (undefined4)DAT_14cb1c868;
    uStack_13c = DAT_14cb1c860._4_4_;
    local_140 = (undefined4)DAT_14cb1c860;
    local_c0 = 0xffffffff;
    local_b8 = (undefined4)local_128;
    uStack_b4 = local_128._4_4_;
    local_a8 = 0;
    local_128 = dVar4;
    local_f0 = local_148;
    cVar6 = FUN_14488902f(&local_128,&local_98);
    if (cVar6 != '\0') {
      uVar7 = FUN_14039a586(param_1,&local_98);
      unaff_RBX = (double *)(ulonglong)uVar7;
    }
    plVar5 = plStack_c8;
    if (plStack_c8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_c8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_c8)(plStack_c8);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (plStack_110 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plStack_110 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_110 + 0x10))();
      }
    }
    if (cVar6 != '\0') goto LAB_14024b585;
  }
  else {
    uVar9 = (undefined7)((ulonglong)unaff_RBX >> 8);
    if (uVar7 - 0x15 < 10) {
      uStack_e0 = 0xffffffffffffffff;
      uVar7 = (uint)local_d8;
      local_d8 = CONCAT44(0xffffffff,uVar7 & 0xffffff00);
      local_e8 = *(undefined8 *)*param_1;
      local_100 = (double)CONCAT44(local_100._4_4_,*(undefined4 *)(param_1 + 0x11));
      dVar4 = (double)param_1[0x10];
      dStack_f8 = (double)param_1[0x12];
      local_f0 = (longlong *)param_1[0x13];
      if (local_f0 == (longlong *)0x0) {
        local_f0 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)((longlong)local_f0 + 0xc) = *(int *)((longlong)local_f0 + 0xc) + 1;
        UNLOCK();
      }
      local_108._4_4_ = (float)((ulonglong)dVar4 >> 0x20);
      local_108._0_4_ = SUB84(dVar4,0);
      if (local_108._4_4_ <= (float)local_108) {
        local_108._4_4_ = (float)local_108;
      }
      if (local_108._4_4_ <= 15.0) {
        local_108._4_4_ = 15.0;
      }
      plStack_110 = (longlong *)CONCAT44(plStack_110._4_4_,local_108._4_4_);
      local_128 = *param_2;
      uStack_120 = *(undefined4 *)(param_2 + 1);
      uStack_11c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_118 = param_2[2];
      local_108 = dVar4;
      iVar8 = FUN_14022b7ff(&local_128,&local_98);
      if (iVar8 == 0) {
        fVar3 = *(float *)(param_1 + 0x10);
        cVar6 = FUN_14039a586(param_1,&local_98);
        if ((cVar6 == '\0') || (14.989999771118164 <= ABS(local_78 - param_2[2]))) {
          unaff_RBX = (double *)0x0;
        }
        else {
          unaff_RBX = (double *)
                      CONCAT71(uVar9,(param_2[1] - dStack_80) * (param_2[1] - dStack_80) +
                                     (*param_2 - local_88) * (*param_2 - local_88) <
                                     (double)(fVar3 * fVar3));
        }
      }
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_f0 + 0x10))();
        }
      }
      if (iVar8 == 0) goto LAB_14024b585;
    }
    else if (uVar7 == 0x200) {
      unaff_RBX = (double *)CONCAT71(uVar9,1);
      goto LAB_14024b585;
    }
  }
  unaff_RBX = (double *)0x0;
LAB_14024b585:
  plVar5 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)unaff_RBX & 0xffffff01;
}



// FUNCTION 14024b854 FUN_14024b854 body=353 status=ok
// SIG undefined FUN_14024b854(void)

void FUN_14024b854(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14024b8db;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_14024b8db:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 14024b9b6 FUN_14024b9b6 body=373 status=ok
// SIG undefined FUN_14024b9b6(void)

void FUN_14024b9b6(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0xc;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14024ba41;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_14024ba41:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 14024bb2c FUN_14024bb2c body=370 status=ok
// SIG undefined FUN_14024bb2c(void)

void FUN_14024bb2c(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14024bbb7;
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
LAB_14024bbb7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 14024bc9e FUN_14024bc9e body=46 status=ok
// SIG undefined FUN_14024bc9e(void)

void FUN_14024bc9e(undefined8 param_1,longlong param_2)

{
  FUN_14024bccc();
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    FUN_1448332aa(param_2,&DAT_14b3e86bc);
    return;
  }
  return;
}



// FUNCTION 14024bccc FUN_14024bccc body=43 status=ok
// SIG undefined FUN_14024bccc(void)

void FUN_14024bccc(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    FUN_14024c018(param_1);
  }
  FUN_14024bcf8(param_1,param_2);
  return;
}



// FUNCTION 14024bcf8 FUN_14024bcf8 body=182 status=ok
// SIG undefined FUN_14024bcf8(void)

void FUN_14024bcf8(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  longlong local_60;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    iVar2 = *(int *)(param_1 + 0x30);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x28);
      lVar5 = 0;
      do {
        (**(code **)(**(longlong **)(lVar3 + lVar5) + 0x68))();
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar2 * 8 != lVar5);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    FUN_140851e80(local_78,*(undefined8 *)(param_1 + 0x10));
    FUN_14085123a(uVar4,local_78,0,1);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14024bdb0 FUN_14024bdb0 body=238 status=ok
// SIG undefined FUN_14024bdb0(void)

void FUN_14024bdb0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  byte bVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14024bea0(param_1,1);
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) != 0))
  {
    local_28 = 0x17ca2837;
    uStack_24 = 0xc1bf47e1;
    uStack_20 = 0x96b238e4;
    uStack_1c = 0x9d8f14fe;
    iVar4 = FUN_1448a256a();
    if ((iVar4 < 0) && ((longlong)*(int *)(param_1 + 0x30) != 0)) {
      plVar7 = *(longlong **)(param_1 + 0x28);
      plVar5 = plVar7 + (longlong)*(int *)(param_1 + 0x30) * 4;
      do {
        if (((*(longlong *)((longlong)plVar7 + 0x14) == 0) && (lVar1 = *plVar7, lVar1 != 0)) &&
           (bVar6 = (char)plVar7[1] - 2, bVar6 < 4)) {
          if ((longlong)*(int *)(lVar1 + 0x30) != 0) {
            lVar2 = *(longlong *)(lVar1 + 0x28);
            lVar8 = 0;
            do {
              if (((*(longlong *)(lVar2 + lVar8) == param_1) &&
                  (*(char *)(lVar2 + 8 + lVar8) == (char)(0x4050203 >> ((bVar6 & 3) << 3)))) &&
                 (lVar3 = *(longlong *)(lVar2 + 0xc + lVar8), lVar3 != 0)) {
                *(longlong *)((longlong)plVar7 + 0x14) = lVar3;
                *(undefined8 *)(lVar2 + 0x14 + lVar8) = *(undefined8 *)((longlong)plVar7 + 0xc);
                break;
              }
              lVar8 = lVar8 + 0x20;
            } while ((longlong)*(int *)(lVar1 + 0x30) * 0x20 != lVar8);
          }
        }
        plVar7 = plVar7 + 4;
      } while (plVar7 != plVar5);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14024bea0 FUN_14024bea0 body=283 status=ok
// SIG undefined FUN_14024bea0(void)

void FUN_14024bea0(longlong *param_1,char param_2)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((param_2 == '\0') && (*(char *)((longlong)param_1 + 0x1e) != '\0')) {
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x1e) = 1;
  cVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if ((int)param_1[3] == 0) {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
    if ((param_1[1] == 0) || (lVar5 = *(longlong *)(param_1[1] + 8), lVar5 == 0)) {
LAB_14024bf29:
      *(undefined1 *)((longlong)param_1 + 0x1d) = 1;
      goto LAB_14024bf2d;
    }
    FUN_14024bea0(lVar5,0);
    plVar4 = *(longlong **)(param_1[1] + 8);
LAB_14024bf63:
    uVar3 = (**(code **)(*plVar4 + 0x18))();
    *(undefined1 *)((longlong)param_1 + 0x1d) = uVar3;
  }
  else {
    if (param_1[4] != 0) {
      FUN_14024bea0(param_1[4],0);
      plVar4 = (longlong *)param_1[4];
      if (plVar4 != (longlong *)0x0) goto LAB_14024bf63;
    }
    *(undefined1 *)((longlong)param_1 + 0x1d) = 0;
    if ((longlong)(int)param_1[6] != 0) {
      plVar4 = (longlong *)param_1[5];
      lVar5 = (longlong)(int)param_1[6] << 5;
      do {
        if ((*plVar4 != 0) &&
           (cVar2 = (**(code **)(*param_1 + 0x20))(param_1,plVar4), cVar2 != '\0')) {
          FUN_14024bea0(*plVar4,0);
          if (((longlong *)*plVar4 != (longlong *)0x0) &&
             (cVar2 = (**(code **)(*(longlong *)*plVar4 + 0x18))(), cVar2 != '\0'))
          goto LAB_14024bf29;
        }
        plVar4 = plVar4 + 4;
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
    }
  }
LAB_14024bf2d:
  cVar2 = (**(code **)(*param_1 + 0x18))(param_1);
  if (cVar1 == cVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014024bf7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
}



// FUNCTION 14024bfc4 FUN_14024bfc4 body=83 status=ok
// SIG undefined FUN_14024bfc4(void)

void FUN_14024bfc4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if (((lVar3 != 0) && (uVar4 = (uint)*(byte *)(lVar2 + 8 + lVar5), uVar4 < 6)) &&
         ((0x2aU >> (uVar4 & 0x1f) & 1) != 0)) {
        FUN_14024bea0(lVar3,1);
      }
      lVar5 = lVar5 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar5);
  }
  return;
}



// FUNCTION 14024c018 FUN_14024c018 body=192 status=ok
// SIG undefined FUN_14024c018(void)

void FUN_14024c018(longlong param_1)

{
  undefined1 auStack_78 [32];
  longlong local_58;
  code *local_50;
  longlong *local_48;
  code **local_40;
  code *local_38;
  undefined8 **local_30;
  code **local_28;
  undefined1 *local_20;
  undefined8 **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x194) < 0) {
    *(undefined4 *)(param_1 + 400) = 0;
    FUN_148872464(param_1 + 0x108,0);
  }
  else {
    *(undefined4 *)(param_1 + 400) = 0;
  }
  local_48 = &local_58;
  local_40 = &local_50;
  local_50 = FUN_143d5ebc8;
  local_30 = &local_40;
  local_28 = &local_38;
  local_38 = FUN_140076f1a;
  local_18 = &local_28;
  local_20 = &LAB_142b4460a;
  local_58 = param_1;
  FUN_1447c5ba2(param_1);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14024c0da FUN_14024c0da body=1987 status=ok
// SIG undefined FUN_14024c0da(void)

void FUN_14024c0da(code *param_1,float param_2,undefined8 param_3,char param_4)

{
  code cVar1;
  int iVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 unaff_RBP;
  longlong lVar10;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  code *local_80;
  code **local_78;
  code *local_70;
  float local_68;
  code *local_60;
  code **local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1[0x32] == (code)0x0) goto LAB_14024c425;
  if (param_1 == (code *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x20);
    if (lVar6 != 0) {
      if (DAT_14cad2858 == 0) {
        local_a0 = &local_70;
        local_70 = FUN_144a7958c;
        local_90 = FUN_14081d0ea;
        local_98 = (code *)&LAB_146395584;
        local_a8 = &LAB_147a0ba80;
        local_b0 = (code *)&LAB_14575ccce;
        local_b8 = L"Engine";
        local_c0 = 0x40000000000;
        local_c8 = 0x10000004;
        local_d0 = 0x10;
        local_d8 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      lVar6 = *(longlong *)(lVar6 + 0x10);
      iVar2 = *(int *)(DAT_14cad2858 + 0x38);
      if ((iVar2 <= *(int *)(lVar6 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar2 * 8) == DAT_14cad2858 + 0x30))
      {
        FUN_14036294a(*(longlong *)(param_1 + 0x20),CONCAT71((int7)(int3)((uint)iVar2 >> 8),1),1);
      }
    }
    lVar6 = *(longlong *)(param_1 + 0x3e0);
    if (lVar6 == 0) {
      lVar6 = (**(code **)(*(longlong *)param_1 + 0x350))(param_1);
      *(longlong *)(param_1 + 0x3e0) = lVar6;
    }
  }
  cVar1 = param_1[0x1b8];
  if (cVar1 != (code)0x0) {
    iVar2 = *(int *)(lVar6 + 0x798);
    if ((longlong)iVar2 != 0) {
      lVar9 = *(longlong *)(lVar6 + 0x790);
      lVar10 = 0;
      do {
        plVar7 = *(longlong **)(lVar9 + lVar10);
        (**(code **)(*plVar7 + 0x68))
                  (plVar7,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar1) & 0xffffffff);
        lVar10 = lVar10 + 8;
      } while ((longlong)iVar2 * 8 != lVar10);
    }
    param_1[0x1b8] = (code)0x0;
  }
  plVar7 = *(longlong **)(param_1 + 0x20);
  if (plVar7 == (longlong *)0x0) goto LAB_14024c1fe;
  cVar3 = (**(code **)(*plVar7 + 0xcf8))(plVar7);
  if (cVar3 != '\0') goto LAB_14024c425;
  if (*(char *)((longlong)plVar7 + 0x89c) == '\x02') {
    if (((0.0 < param_2) && ((*(byte *)((longlong)plVar7 + 0x89f) & 0x40) == 0)) &&
       (*(int *)(param_1 + 0x90) < 1)) goto LAB_14024c7a1;
  }
  else if (((*(char *)((longlong)plVar7 + 0x89c) == '\x03') && (0.0 < param_2)) &&
          ((*(byte *)((longlong)plVar7 + 0x89f) & 0x40) == 0)) {
LAB_14024c7a1:
    FUN_144826242(param_1 + 0x1c0,*(longlong *)(param_1 + 0x20));
    *(undefined4 *)(lVar6 + 0x5e8) = 0xffff;
    *(undefined8 *)(lVar6 + 0x5e0) = 0xffffffffffffffff;
    if ((((byte)param_1[0x31] & 0x40) == 0) ||
       (*(code **)(*(longlong *)(param_1 + 0x20) + 0xae8) == param_1)) {
      if (*(code **)(*(longlong *)param_1 + 0x2d8) == FUN_1433d67e0) {
        FUN_1433d67e0(param_1,param_2);
      }
      else {
        (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,param_2);
      }
      if (*(code **)(*(longlong *)param_1 + 0x2e0) == FUN_140bf2dac) {
        FUN_140bf2dac(param_1,param_2);
      }
      else {
        (**(code **)(*(longlong *)param_1 + 0x2e0))(param_1,param_2);
      }
    }
    iVar2 = *(int *)(param_1 + 0x90);
    if ((longlong)iVar2 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x88);
      lVar9 = 0;
      do {
        lVar10 = *(longlong *)(lVar6 + lVar9);
        *(undefined1 *)(lVar10 + 0x70) = 0;
        *(undefined4 *)(lVar10 + 0x4c) = 0xfffffffe;
        *(undefined4 *)(lVar10 + 0x54) = 0xfffffffe;
        if (*(int *)(lVar10 + 0x6c) < 0) {
          *(undefined4 *)(lVar10 + 0x68) = 0;
          FUN_1478fc0c4(lVar10 + 0x60,0);
        }
        else {
          *(undefined4 *)(lVar10 + 0x68) = 0;
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)iVar2 * 8 != lVar9);
    }
    goto LAB_14024c425;
  }
LAB_14024c1fe:
  FUN_1433d55ee(param_1,param_2);
  if ((((byte)param_1[0x31] & 0x40) == 0) ||
     (*(code **)(*(longlong *)(param_1 + 0x20) + 0xae8) == param_1)) {
    if (*(code **)(*(longlong *)param_1 + 0x2d8) == FUN_1433d67e0) {
      FUN_1433d67e0(param_1,param_2);
    }
    else {
      (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,param_2);
    }
    if (*(code **)(*(longlong *)param_1 + 0x2e0) == FUN_140bf2dac) {
      FUN_140bf2dac(param_1,param_2);
    }
    else {
      (**(code **)(*(longlong *)param_1 + 0x2e0))(param_1,param_2);
    }
  }
  FUN_144b1faf0(param_1);
  FUN_1433d5ad2(param_1);
  lVar6 = *(longlong *)(param_1 + 0x10);
  if (lVar6 != 0) {
    if (DAT_14cacb1f8 == 0) {
      local_a0 = &local_70;
      local_70 = FUN_1449e2820;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_1427b09ee;
      local_a8 = &LAB_1478defb1;
      local_b0 = FUN_1463a1b02;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x10004001;
      local_d0 = 8;
      local_d8 = 0x28;
      FUN_14081cfa3(L"/Script/Engine",L"AnimClassInterface",&DAT_14cacb1f8,&DAT_1478defb0);
    }
    plVar7 = (longlong *)FUN_144718840(lVar6,DAT_14cacb1f8);
    if (plVar7 != (longlong *)0x0) {
      local_58 = &local_70;
      local_60 = FUN_1433d706e;
      local_70 = param_1;
      local_68 = param_2;
      (**(code **)(*plVar7 + 0xb0))(plVar7,param_1);
    }
  }
  FUN_1449591ba(param_1,param_2);
  (**(code **)(*(longlong *)param_1 + 0x370))(param_1,param_2);
  if (((byte)param_1[0x430] & 1) == 0) {
    local_70 = (code *)CONCAT44(local_70._4_4_,param_2);
    uVar8 = FUN_14477b072(param_1,DAT_14cacb568);
    (**(code **)(*(longlong *)param_1 + 0x248))(param_1,uVar8,&local_70);
  }
  FUN_144921cfc(param_1,param_2);
  lVar6 = *(longlong *)(param_1 + 0x10);
  if (lVar6 != 0) {
    if (DAT_14cacb1f8 == 0) {
      local_a0 = &local_70;
      local_70 = FUN_1449e2820;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_1427b09ee;
      local_a8 = &LAB_1478defb1;
      local_b0 = FUN_1463a1b02;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x10004001;
      local_d0 = 8;
      local_d8 = 0x28;
      FUN_14081cfa3(L"/Script/Engine",L"AnimClassInterface",&DAT_14cacb1f8,&DAT_1478defb0);
    }
    plVar7 = (longlong *)FUN_144718840(lVar6,DAT_14cacb1f8);
    if (plVar7 != (longlong *)0x0) {
      local_78 = &local_70;
      local_80 = FUN_1433d70c8;
      local_70 = param_1;
      local_68 = param_2;
      (**(code **)(*plVar7 + 0xb0))(plVar7,param_1);
    }
  }
  cVar3 = FUN_144adfbd6(param_1,param_2,0);
  if ((param_4 == '\0') || (cVar3 == '\0')) goto LAB_14024c425;
  lVar6 = *(longlong *)(param_1 + 0x20);
  if (lVar6 != 0) {
    if (DAT_14cad2858 == 0) {
      local_a0 = &local_70;
      local_70 = FUN_144a7958c;
      local_90 = FUN_14081d0ea;
      local_98 = (code *)&LAB_146395584;
      local_a8 = &LAB_147a0ba80;
      local_b0 = (code *)&LAB_14575ccce;
      local_b8 = L"Engine";
      local_c0 = 0x40000000000;
      local_c8 = 0x10000004;
      local_d0 = 0x10;
      local_d8 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    lVar6 = *(longlong *)(lVar6 + 0x10);
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
        DAT_14cad2858 + 0x30)) {
      if ((DAT_14c86a9f8 == '\x01') &&
         (iVar2 = *(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0xc60), iVar2 != 2)) {
        if (iVar2 == 1) {
          DVar4 = FUN_140ad26c0();
          DVar5 = GetCurrentThreadId();
          if (DVar4 == DVar5) goto LAB_14024c749;
        }
      }
      else {
LAB_14024c749:
        FUN_14036294a(*(longlong *)(param_1 + 0x20),1,1);
      }
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x3e0);
  if (lVar6 == 0) {
    lVar6 = (**(code **)(*(longlong *)param_1 + 0x350))(param_1);
    *(longlong *)(param_1 + 0x3e0) = lVar6;
  }
  FUN_140508256(lVar6);
  FUN_1401fe94c(param_1);
LAB_14024c425:
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14024c89e FUN_14024c89e body=735 status=ok
// SIG undefined FUN_14024c89e(void)

ulonglong FUN_14024c89e(longlong *param_1,float *param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  short sVar3;
  longlong lVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  int *piVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  float *pfVar13;
  undefined1 auStack_98 [32];
  int *local_78;
  int local_64;
  undefined8 local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar10 = param_3 + 8;
  plVar8 = (longlong *)FUN_144741050(lVar10);
  lVar1 = *plVar8;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  lVar4 = DAT_14cb42130;
  lVar2 = plVar8[1];
  if ((DAT_14cb42130 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(DAT_14cb42130);
  }
  if (((lVar1 == lVar4) && (DAT_14cb42138 == (short)lVar2)) &&
     (DAT_14cb4213a == (char)((ulonglong)lVar2 >> 0x10))) {
    local_50 = (double)param_2[2];
    local_58 = (double)param_2[1];
    local_60 = (double)*param_2;
    uVar7 = (**(code **)(*param_1 + 0x60))(param_1,&local_60,param_3,param_4);
    uVar12 = (ulonglong)uVar7;
    goto LAB_14024c9be;
  }
  piVar9 = (int *)(**(code **)(*param_1 + 0x58))(param_1,param_3,0);
  if (piVar9 == (int *)0x0) {
    local_64 = -1;
LAB_14024ca4d:
    if ((char)param_4 == '\0') {
      uVar12 = 0;
      goto LAB_14024c9be;
    }
    local_78 = &local_64;
    (**(code **)(*param_1 + 0x10))(param_1,param_3,0,0);
    pfVar13 = (float *)((longlong)local_64 + param_1[4]);
    if (pfVar13 != param_2) {
      FUN_14024cb7e(param_1,&local_60,param_3);
      if (((local_50._0_4_ < 1) || ((int)local_60 < 1)) || (local_60._4_4_ < 1)) {
        uVar11 = FUN_144741050(lVar10);
        iVar6 = FUN_144a81174(uVar11);
        memcpy(pfVar13,param_2,(longlong)iVar6);
      }
      else {
        FUN_1481f8f7c(&local_60,pfVar13,param_2,1);
      }
      if (local_58 != 0.0) {
        FUN_1400020a8();
      }
    }
    FUN_140219f72(param_1);
  }
  else {
    local_64 = *piVar9;
    if ((longlong)local_64 == -1) goto LAB_14024ca4d;
    pfVar13 = (float *)((longlong)local_64 + param_1[4]);
    if (pfVar13 != param_2) {
      FUN_14024cb7e(param_1,&local_60,param_3);
      if (((local_50._0_4_ < 1) || ((int)local_60 < 1)) || (local_60._4_4_ < 1)) {
        plVar8 = (longlong *)FUN_144741050(lVar10);
        uVar5 = *(ushort *)((longlong)plVar8 + 0xc);
        if (uVar5 == 0xffff) {
          uVar5 = 0;
          if ((*plVar8 != 0) && (uVar5 = 0, (short)plVar8[1] != 1)) {
            lVar10 = FUN_144a811ba(plVar8);
            sVar3 = (short)*(undefined4 *)(lVar10 + 0x5c);
            uVar5 = -sVar3 & ((short)*(undefined4 *)(lVar10 + 0x58) + sVar3) - 1U;
          }
          *(ushort *)((longlong)plVar8 + 0xc) = uVar5;
        }
        memcpy(pfVar13,param_2,(longlong)(short)uVar5);
      }
      else {
        FUN_1481f8f7c(&local_60,pfVar13,param_2,1);
      }
      if (local_58 != 0.0) {
        FUN_1400020a8();
      }
    }
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
  }
  uVar12 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
LAB_14024c9be:
  if (*(longlong *)(param_3 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar12 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14024cb7e FUN_14024cb7e body=460 status=ok
// SIG undefined FUN_14024cb7e(void)

undefined8 * FUN_14024cb7e(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  void *_Src;
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = param_2;
  (**(code **)*param_1)(param_1,&local_58);
  lVar1 = local_58;
  if (local_50 == 0) {
LAB_14024cc44:
    *local_78 = 0;
    local_78[1] = 0;
    local_78[2] = 0;
    puVar3 = local_78;
  }
  else {
    uVar11 = 0;
    iVar6 = local_50;
    do {
      while( true ) {
        if (iVar6 == 0) goto LAB_14024cc44;
        iVar7 = iVar6 / 2;
        iVar8 = iVar7 + (int)uVar11;
        lVar2 = (longlong)iVar8;
        iVar10 = *(int *)(lVar1 + lVar2 * 0x28) - *param_3;
        if (iVar10 == 0) {
          iVar10 = *(int *)(lVar1 + 4 + lVar2 * 0x28) - param_3[1];
        }
        if (iVar10 == 0) {
          local_60 = uVar11;
          plVar4 = (longlong *)FUN_144741050(lVar1 + lVar2 * 0x28 + 8);
          local_70 = 0;
          local_68 = 0;
          uVar11 = 0;
          if (*plVar4 != 0) {
            uVar11 = *(ulonglong *)(*plVar4 + 0x18);
            local_68 = uVar11 >> 0x20;
          }
          plVar4 = (longlong *)FUN_144741050(param_3 + 2);
          uVar5 = 0;
          if (*plVar4 != 0) {
            uVar5 = *(ulonglong *)(*plVar4 + 0x18);
            local_70 = uVar5 >> 0x20;
          }
          iVar10 = (int)uVar11 - (int)uVar5;
          uVar11 = local_60;
          if (iVar10 == 0) {
            iVar10 = (int)local_68 - (int)local_70;
          }
        }
        puVar3 = local_78;
        if (-1 < iVar10) break;
        iVar6 = iVar6 % 2 + iVar7 + -1;
        uVar11 = (ulonglong)(iVar8 + 1);
      }
      iVar6 = iVar7;
    } while (iVar10 != 0);
    *local_78 = *(undefined8 *)(local_58 + 0x10 + lVar2 * 0x28);
    local_78[1] = 0;
    iVar6 = *(int *)(local_58 + 0x20 + lVar2 * 0x28);
    _Src = *(void **)(local_58 + 0x18 + lVar2 * 0x28);
    *(int *)(local_78 + 2) = iVar6;
    if ((longlong)iVar6 == 0) {
      *(undefined4 *)((longlong)local_78 + 0x14) = 0;
    }
    else {
      puVar9 = local_78 + 1;
      FUN_145cec054(puVar9,iVar6,0);
      memcpy((void *)*puVar9,_Src,(longlong)iVar6 * 0x14);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar3;
}



// FUNCTION 14024cd4c FUN_14024cd4c body=373 status=ok
// SIG undefined FUN_14024cd4c(void)

void FUN_14024cd4c(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0xc;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14024cdd5;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_14024cdd5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 14024cec2 FUN_14024cec2 body=108 status=ok
// SIG undefined FUN_14024cec2(void)

void FUN_14024cec2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b42e840;
  FUN_14024cf2e(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xf];
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
  FUN_14024cf5a(param_1);
  return;
}



// FUNCTION 14024cf2e FUN_14024cf2e body=44 status=ok
// SIG undefined FUN_14024cf2e(void)

void FUN_14024cf2e(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x14);
    do {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      if (*(int *)(pcVar1 + -0x10) != -1) {
        pcVar1[-0x10] = -1;
        pcVar1[-0xf] = -1;
        pcVar1[-0xe] = -1;
        pcVar1[-0xd] = -1;
        pcVar1[-0xc] = '\0';
        pcVar1[-0xb] = '\0';
        pcVar1[-10] = '\0';
        pcVar1[-9] = '\0';
      }
      pcVar1 = pcVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14024cf5a FUN_14024cf5a body=142 status=ok
// SIG undefined FUN_14024cf5a(void)

void FUN_14024cf5a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b42f4f0;
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
  plVar3 = (longlong *)param_1[8];
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
  FUN_14024cfe8(param_1);
  plVar3 = (longlong *)param_1[6];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014024cfac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14024cfe8 FUN_14024cfe8 body=64 status=ok
// SIG undefined FUN_14024cfe8(void)

void FUN_14024cfe8(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14b42f5a0;
  FUN_144760e21(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 14024d028 FUN_14024d028 body=248 status=ok
// SIG undefined FUN_14024d028(void)

void FUN_14024d028(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  if (*(int *)((longlong)param_1 + 0x14) < 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    FUN_1403de8ba(param_1 + 1,0);
  }
  else {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x24) < 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    FUN_1403de8ba(param_1 + 3,0);
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(undefined2 *)(param_1 + 9) = 0xffff;
  if (0 < *(int *)(param_1 + 6)) {
    lVar5 = 0;
    lVar4 = 0;
    do {
      FUN_14024d028(*(undefined8 *)(param_1[5] + lVar5));
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar4 < *(int *)(param_1 + 6));
  }
  FUN_14024d120(param_1[5]);
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    FUN_14024d16e(param_1 + 5,0);
  }
  param_1[7] = 0;
  plVar3 = (longlong *)param_1[8];
  if (plVar3 != (longlong *)0x0) {
    param_1[8] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014024d11c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14024d120 FUN_14024d120 body=77 status=ok
// SIG undefined FUN_14024d120(void)

void FUN_14024d120(longlong param_1,int param_2)

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



// FUNCTION 14024d16e FUN_14024d16e body=95 status=ok
// SIG undefined FUN_14024d16e(void)

void FUN_14024d16e(longlong param_1,uint param_2)

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



// FUNCTION 14024d1ce FUN_14024d1ce body=59 status=ok
// SIG undefined FUN_14024d1ce(void)

longlong FUN_14024d1ce(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14024d220(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x40 + *param_1;
  FUN_14024d209(lVar2);
  return lVar2;
}



// FUNCTION 14024d209 FUN_14024d209 body=22 status=ok
// SIG undefined FUN_14024d209(void)

void FUN_14024d209(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 **)(param_1 + 0x1c) = &DAT_3f8000003f800000;
  return;
}



// FUNCTION 14024d220 FUN_14024d220 body=255 status=ok
// SIG undefined FUN_14024d220(void)

void FUN_14024d220(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14024d320 FUN_14024d320 body=194 status=ok
// SIG undefined FUN_14024d320(void)

undefined8 FUN_14024d320(char *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_2;
  plVar3 = *(longlong **)(param_1 + 8);
  iVar1 = (int)plVar3[1];
  lVar7 = (longlong)iVar1;
  lVar4 = *plVar3;
  if (lVar7 != 0) {
    lVar6 = lVar7 * 8;
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar4 + lVar5 * 8) == lVar2) {
        if ((int)lVar5 != -1) {
          if (iVar1 <= (int)lVar5) goto LAB_14024d390;
          goto LAB_14024d3c0;
        }
        break;
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_1447d05f2(plVar3,iVar1);
    lVar4 = *plVar3;
  }
  *(longlong *)(lVar4 + lVar7 * 8) = lVar2;
LAB_14024d390:
  if (*param_1 == '\x01') {
    local_40 = *(undefined8 *)(param_1 + 8);
    local_30 = local_48;
    local_48[0] = 1;
    local_38 = FUN_14024d320;
    FUN_1417b144e(lVar2);
  }
LAB_14024d3c0:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14024d3e4 FUN_14024d3e4 body=350 status=ok
// SIG undefined FUN_14024d3e4(void)

void FUN_14024d3e4(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 200);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 < 0x19) {
    uVar6 = 0x18;
  }
  else {
    lVar3 = (longlong)(int)uVar2;
    if (0x18 < *(uint *)(param_1 + 0xcc)) {
      lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
    }
    uVar4 = lVar3 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar6 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
        }
        else {
          if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar1 = (&DAT_14c841e00)[uVar6 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar1) {
              uVar5 = (ulonglong)bVar1;
            }
            uVar7 = 0x32 - (ulonglong)bVar1;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_14024d476;
              lVar3 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar3 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar6 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_14024d476:
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 >> 3)) {
      uVar6 = uVar4 >> 3 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0xcc) = (int)uVar6;
  FUN_14024d542(param_1,param_2,uVar6,8);
  return;
}



// FUNCTION 14024d542 FUN_14024d542 body=141 status=ok
// SIG undefined FUN_14024d542(void)

void FUN_14024d542(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 0x19) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,param_4);
  return;
}



// FUNCTION 14024d5d0 FUN_14024d5d0 body=21 status=ok
// SIG undefined FUN_14024d5d0(void)

undefined8 FUN_14024d5d0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14024d5f0 FUN_14024d5f0 body=264 status=ok
// SIG undefined FUN_14024d5f0(void)

void FUN_14024d5f0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)DAT_14cb42bb8 < 0) {
    FUN_14024d99c(*(undefined8 *)(param_1 + 0x150),*(undefined4 *)(param_1 + 0x158));
    *(undefined4 *)(param_1 + 0x158) = 0;
    if (*(int *)(param_1 + 0x15c) != 0) {
      FUN_1481da84c(param_1 + 0x150,0);
    }
    FUN_14024d953(*(undefined8 *)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x168));
    *(undefined4 *)(param_1 + 0x168) = 0;
    if (*(int *)(param_1 + 0x16c) != 0) {
      FUN_1481da8be(param_1 + 0x160,0);
    }
  }
  else {
    local_40 = param_1;
    local_38 = &local_30;
    local_30 = (longlong)DAT_14cb42bb8;
    FUN_14024d6fa(param_1 + 0x150,&local_40);
    local_40 = param_1;
    local_38 = &local_30;
    FUN_14024d81a(param_1 + 0x160,&local_40);
    *(longlong *)(param_1 + 0x170) = *(longlong *)(param_1 + 0x170) + 1;
  }
  FUN_140a0ab96(param_1,param_2,param_1 + 0x10);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14024d6fa FUN_14024d6fa body=288 status=ok
// SIG undefined FUN_14024d6fa(void)

int FUN_14024d6fa(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  iVar7 = 0;
  if (lVar13 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar7 = 0;
    bVar11 = *(ulonglong *)param_2[1] < (ulonglong)(*(longlong *)(*param_2 + 0x170) - *plVar2);
    iVar4 = 0;
    do {
      lVar9 = (longlong)iVar4;
      iVar12 = iVar4 + 1;
      if (iVar4 + 1 < iVar1) {
        iVar12 = iVar1;
      }
      plVar8 = plVar2 + lVar9 * 3 + 3;
      iVar5 = iVar4;
      lVar10 = lVar9;
      do {
        lVar10 = lVar10 + 1;
        iVar6 = iVar12;
        if (lVar13 <= lVar10) break;
        lVar3 = *plVar8;
        iVar5 = iVar5 + 1;
        plVar8 = plVar8 + 3;
        iVar6 = iVar5;
      } while (bVar11 == *(ulonglong *)param_2[1] <
                         (ulonglong)(*(longlong *)(*param_2 + 0x170) - lVar3));
      iVar12 = iVar6 - iVar4;
      if (bVar11 == false) {
        if (iVar7 != iVar4) {
          memmove(plVar2 + (longlong)iVar7 * 3,plVar2 + lVar9 * 3,(longlong)iVar12 * 0x18);
        }
        iVar7 = iVar7 + iVar12;
      }
      else {
        FUN_14024d99c(plVar2 + lVar9 * 3,iVar12);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar4 = iVar6;
    } while (lVar10 < lVar13);
    *(int *)(param_1 + 1) = iVar7;
    iVar7 = iVar1 - iVar7;
  }
  return iVar7;
}



// FUNCTION 14024d81a FUN_14024d81a body=313 status=ok
// SIG undefined FUN_14024d81a(void)

int FUN_14024d81a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar11 = (longlong)iVar1;
  iVar8 = 0;
  if (lVar11 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar8 = 0;
    iVar5 = 0;
    bVar4 = *(ulonglong *)param_2[1] < (ulonglong)(*(longlong *)(*param_2 + 0x170) - *plVar2);
    do {
      lVar12 = (longlong)iVar5;
      iVar10 = iVar5 + 1;
      if (iVar5 + 1 < iVar1) {
        iVar10 = iVar1;
      }
      plVar9 = plVar2 + lVar12 * 4 + 4;
      iVar6 = iVar5;
      lVar13 = lVar12;
      do {
        lVar13 = lVar13 + 1;
        iVar7 = iVar10;
        if (lVar11 <= lVar13) break;
        lVar3 = *plVar9;
        iVar6 = iVar6 + 1;
        plVar9 = plVar9 + 4;
        iVar7 = iVar6;
      } while (bVar4 == *(ulonglong *)param_2[1] <
                        (ulonglong)(*(longlong *)(*param_2 + 0x170) - lVar3));
      iVar10 = iVar7 - iVar5;
      if (bVar4 == false) {
        if (iVar8 != iVar5) {
          memmove(plVar2 + (longlong)iVar8 * 4,plVar2 + lVar12 * 4,(longlong)iVar10 << 5);
        }
        iVar8 = iVar8 + iVar10;
      }
      else {
        FUN_14024d953(plVar2 + lVar12 * 4,iVar10);
      }
      iVar5 = iVar7;
      bVar4 = (bool)(bVar4 ^ 1);
    } while (lVar13 < lVar11);
    *(int *)(param_1 + 1) = iVar8;
    iVar8 = iVar1 - iVar8;
  }
  return iVar8;
}



// FUNCTION 14024d953 FUN_14024d953 body=73 status=ok
// SIG undefined FUN_14024d953(void)

void FUN_14024d953(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x18);
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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14024d99c FUN_14024d99c body=73 status=ok
// SIG undefined FUN_14024d99c(void)

void FUN_14024d99c(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
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



// FUNCTION 14024d9e6 FUN_14024d9e6 body=9 status=ok
// SIG undefined FUN_14024d9e6(void)

void FUN_14024d9e6(longlong param_1)

{
  FUN_14476820c(param_1 + 0x10);
  return;
}



// FUNCTION 14024d9f0 FUN_14024d9f0 body=360 status=ok
// SIG undefined FUN_14024d9f0(void)

void FUN_14024d9f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_458 [40];
  undefined1 local_430 [792];
  undefined1 *local_118;
  int local_110;
  int local_10c;
  undefined8 local_108 [24];
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_458;
  local_48 = (undefined8 *)0x0;
  local_40 = 0x1800000000;
  FUN_14024dbd6(param_1,local_108,0);
  local_118 = (undefined1 *)0x0;
  local_10c = 3;
  puVar5 = local_48;
  if (local_48 == (undefined8 *)0x0) {
    puVar5 = local_108;
  }
  if ((longlong)(int)local_40 != 0) {
    puVar1 = puVar5 + (int)local_40;
    do {
      uVar2 = *puVar5;
      local_110 = 0;
      if (local_10c < 0) {
        FUN_1406c24c0(local_430,0);
      }
      FUN_14024db5a(local_430);
      puVar3 = local_118;
      if (local_118 == (undefined1 *)0x0) {
        puVar3 = local_430;
      }
      if ((longlong)local_110 != 0) {
        lVar4 = (longlong)local_110 * 0x108;
        do {
          FUN_1400fc306(uVar2,puVar3,1,0);
          puVar3 = puVar3 + 0x108;
          lVar4 = lVar4 + -0x108;
        } while (lVar4 != 0);
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar1);
    if (local_118 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_458) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14024db5a FUN_14024db5a body=123 status=ok
// SIG undefined FUN_14024db5a(void)

void FUN_14024db5a(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 800);
  *(uint *)(param_1 + 800) = iVar2 + uVar1;
  if ((uint)(*(int *)(param_1 + 0x324) - iVar2) < uVar1) {
    FUN_14011d10e(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x318);
  if (*(longlong *)(param_1 + 0x318) == 0) {
    lVar3 = param_1;
  }
  FUN_14011d00d((longlong)iVar2 * 0x108 + lVar3,*param_2,uVar1);
  return;
}



// FUNCTION 14024dbd6 FUN_14024dbd6 body=342 status=ok
// SIG undefined FUN_14024dbd6(void)

void FUN_14024dbd6(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  longlong local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_2 + 200) = 0;
  if (*(int *)(param_2 + 0xcc) < 0) {
    FUN_1470e993e(param_2,0);
  }
  if (DAT_14cac6e60 == 0) {
    local_50 = &local_28;
    local_28 = FUN_144a7958c;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_142b47bc4;
    local_58 = &LAB_1478989f1;
    local_60 = &LAB_146391124;
    local_68 = L"Engine";
    local_70 = 0x10000000000;
    local_78 = 0x10000005;
    local_80 = 0x10;
    local_88 = 0x620;
    FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
  }
  local_30 = DAT_14cac6e60;
  if ((DAT_14cac6e60 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_14024dd2e(param_1,&local_30,param_3,param_2);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14024dd2e FUN_14024dd2e body=721 status=ok
// SIG undefined FUN_14024dd2e(void)

void FUN_14024dd2e(undefined8 param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    if (DAT_14cad00c8 == 0) {
LAB_14024ded9:
      local_70 = &local_38;
      local_38 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1479b7a0c;
      local_80 = &LAB_1463b464e;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 8;
      local_a8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
    }
LAB_14024dd99:
    lVar1 = *param_2;
    if (lVar2 == DAT_14cad00c8) {
      if (param_3 == '\0') {
        local_48 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1470e9c28(param_1,&local_48,param_4);
      }
      else {
        local_40 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1470e99ac(param_1,&local_40,param_4);
      }
      goto LAB_14024ddd3;
    }
  }
  else {
    if (DAT_14cad00c8 == 0) {
      local_70 = &local_38;
      local_38 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1479b7a0c;
      local_80 = &LAB_1463b464e;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 8;
      local_a8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) goto LAB_14024ded9;
    }
    if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
        DAT_14cad00c8 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14024dd99;
    }
    lVar1 = *param_2;
  }
  if (param_3 == '\0') {
    local_58 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_14490f550(param_1,&local_58,param_4);
  }
  else {
    local_50 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_14024e1ec(param_1,&local_50,param_4);
  }
LAB_14024ddd3:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14024e000 FUN_14024e000 body=350 status=ok
// SIG undefined FUN_14024e000(void)

void FUN_14024e000(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 200);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 < 0x19) {
    uVar6 = 0x18;
  }
  else {
    lVar3 = (longlong)(int)uVar2;
    if (0x18 < *(uint *)(param_1 + 0xcc)) {
      lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
    }
    uVar4 = lVar3 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar6 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
        }
        else {
          if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar1 = (&DAT_14c841e00)[uVar6 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar1) {
              uVar5 = (ulonglong)bVar1;
            }
            uVar7 = 0x32 - (ulonglong)bVar1;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_14024e092;
              lVar3 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar3 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar6 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_14024e092:
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 >> 3)) {
      uVar6 = uVar4 >> 3 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0xcc) = (int)uVar6;
  FUN_14024e15e(param_1,param_2,uVar6,8);
  return;
}



// FUNCTION 14024e15e FUN_14024e15e body=141 status=ok
// SIG undefined FUN_14024e15e(void)

void FUN_14024e15e(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 0x19) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,param_4);
  return;
}



// FUNCTION 14024e1ec FUN_14024e1ec body=1473 status=ok
// SIG undefined FUN_14024e1ec(void)

void FUN_14024e1ec(longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  wchar_t *local_178;
  code *local_170;
  undefined1 *local_168;
  code **local_160;
  code *local_158;
  code *local_150;
  longlong local_140;
  uint *local_138;
  longlong *local_130;
  longlong local_128;
  code *local_120;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  puVar15 = (uint *)(param_1 + 0x250);
  iVar2 = *(int *)(param_1 + 0x268);
  local_130 = param_2;
  if (iVar2 == 0) {
    uVar16 = 1;
    uVar14 = 0;
    iVar6 = 0;
    iVar12 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar7 = puVar15;
    }
    uVar13 = *puVar7;
    if (uVar13 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar16 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar16 = uVar14;
      }
      iVar12 = 0;
      do {
        if (uVar16 == uVar14) goto LAB_14024e51c;
        iVar12 = iVar12 + 0x20;
        uVar13 = puVar7[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar12 = 0;
    }
    uVar16 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar16 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar6 = (iVar12 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 != iVar2) {
    uVar13 = 0xffffffff;
    local_140 = param_3;
    local_138 = puVar15;
    do {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x240) + (longlong)iVar6 * 0x10);
      if (plVar4 != (longlong *)0x0) {
        lVar17 = *local_130;
        if ((lVar17 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar17);
          param_3 = local_140;
          puVar15 = local_138;
LAB_14024e31c:
          if (DAT_14cad00c8 == 0) {
            local_160 = &local_120;
            local_120 = FUN_144a7958c;
            local_150 = FUN_14081d0ea;
            local_158 = FUN_14081d0ea;
            local_168 = &LAB_1479b7a0c;
            local_170 = (code *)&LAB_1463b464e;
            local_178 = L"Engine";
            local_180 = 0;
            local_188 = 0x10000005;
            local_190 = 8;
            local_198 = 0x110;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            param_3 = local_140;
            puVar15 = local_138;
            if (DAT_14cad00c8 == 0) goto LAB_14024e6ac;
          }
          if (*(int *)(lVar17 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_14024e6ac;
          if (*(longlong *)
               (*(longlong *)(lVar17 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
              DAT_14cad00c8 + 0x30) {
            lVar17 = 0;
          }
        }
        else {
          if (lVar17 != 0) goto LAB_14024e31c;
LAB_14024e6ac:
          lVar17 = 0;
        }
        if ((*(int *)(lVar17 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8)
            == lVar17 + 0x30)) {
          iVar6 = *(int *)(param_3 + 200);
          *(uint *)(param_3 + 200) = iVar6 + 1U;
          if (*(uint *)(param_3 + 0xcc) < iVar6 + 1U) {
            FUN_14024e000(param_3,iVar6);
            param_3 = local_140;
            puVar15 = local_138;
          }
          lVar17 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar17 = param_3;
          }
          *(longlong **)(lVar17 + (longlong)iVar6 * 8) = plVar4;
        }
        if (DAT_14cabf8d0 == 0) {
          local_160 = &local_120;
          local_120 = FUN_144a7958c;
          local_150 = FUN_14081d0ea;
          local_158 = FUN_142b47bc4;
          local_168 = &LAB_147860ffd;
          local_170 = FUN_1463713dc;
          local_178 = L"Engine";
          local_180 = 0;
          local_188 = 0x10000005;
          local_190 = 0x10;
          local_198 = 0x2b0;
          FUN_14081cfa3(L"/Script/Engine",L"ChildActorBaseComponent",&DAT_14cabf8d0,&DAT_147860ffc);
          param_3 = local_140;
          puVar15 = local_138;
        }
        if (((*(int *)(DAT_14cabf8d0 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cabf8d0 + 0x38) * 8) ==
             DAT_14cabf8d0 + 0x30)) &&
           (lVar17 = (**(code **)(*plVar4 + 0x5d8))(plVar4), uVar1 = local_50, param_3 = local_140,
           puVar15 = local_138, lVar17 != 0)) {
          lVar18 = (longlong)(int)local_50;
          uVar11 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar11);
          if (local_50._4_4_ < uVar11) {
            FUN_1470e9d72(local_118,uVar1 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          *(longlong *)(puVar10 + lVar18 * 8) = lVar17;
          param_3 = local_140;
          puVar15 = local_138;
        }
      }
      uVar13 = uVar13 & ~(uint)uVar16;
      puVar7 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar7 = puVar15;
      }
      iVar3 = *(int *)(param_1 + 0x268);
      iVar6 = (int)uVar14;
      lVar17 = (longlong)iVar6;
      uVar11 = puVar7[lVar17] & uVar13;
      if (uVar11 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        puVar15 = local_138;
        if (iVar6 < iVar8) {
          lVar18 = 0;
          do {
            uVar11 = puVar7[lVar17 + lVar18 + 1];
            if (uVar11 != 0) {
              uVar14 = (ulonglong)(iVar6 + (int)lVar18 + 1);
              uVar13 = 0xffffffff;
              goto LAB_14024e412;
            }
            iVar12 = iVar12 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar9 - lVar17 != lVar18);
          uVar13 = 0xffffffff;
          iVar6 = iVar9;
        }
        uVar14 = (ulonglong)(iVar6 + 1);
        param_3 = local_140;
        iVar6 = iVar3;
      }
      else {
LAB_14024e412:
        uVar16 = (ulonglong)(-uVar11 & uVar11);
        uVar1 = uVar16 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar6 = (iVar12 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar6) {
          iVar6 = iVar3;
        }
      }
    } while (iVar6 != iVar2);
    lVar17 = (longlong)(int)local_50;
    puVar10 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    if (lVar17 != 0) {
      lVar18 = 0;
      do {
        uVar5 = *(undefined8 *)(puVar10 + lVar18);
        local_128 = *local_130;
        if ((local_128 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_14024e1ec(uVar5,&local_128,local_140);
        lVar18 = lVar18 + 8;
      } while (lVar17 * 8 != lVar18);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14024e51c:
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14024e7c8 FUN_14024e7c8 body=372 status=ok
// SIG undefined FUN_14024e7c8(void)

void FUN_14024e7c8(longlong *param_1,undefined8 param_2,void *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  int *piVar5;
  void *_Src;
  int iVar6;
  longlong lVar7;
  
  iVar2 = FUN_1402a90ea();
  lVar7 = (longlong)iVar2 * 0x50 + param_1[0x40];
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *(undefined4 *)(puVar3 + 1) = 0xa0;
    *puVar3 = &PTR_FUN_14a2e8dc0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *param_1 = (longlong)puVar3;
  }
  if ((*(ulonglong *)(lVar7 + 8) & 1) == 0) {
    iVar6 = *(int *)(puVar3 + 5);
    *(ulonglong *)(lVar7 + 8) = *(ulonglong *)(lVar7 + 8) | 1;
    uVar1 = *(uint *)(lVar7 + 0x48);
    *(uint *)(lVar7 + 0x48) = uVar1 + 1;
    if (*(uint *)(lVar7 + 0x4c) < uVar1 + 1) {
      FUN_1400cc390((void *)(lVar7 + 0x20),(ulonglong)uVar1);
    }
    _Src = *(void **)(lVar7 + 0x40);
    if (*(void **)(lVar7 + 0x40) == (void *)0x0) {
      _Src = (void *)(lVar7 + 0x20);
    }
    memmove((void *)((longlong)_Src + 4),_Src,(ulonglong)uVar1 << 2);
    piVar4 = *(int **)(lVar7 + 0x40);
  }
  else {
    piVar4 = *(int **)(lVar7 + 0x40);
    piVar5 = piVar4;
    if (piVar4 == (int *)0x0) {
      piVar5 = (int *)(lVar7 + 0x20);
    }
    iVar6 = *piVar5;
    if (iVar6 != -1) goto LAB_14024e8d2;
    iVar6 = *(int *)(puVar3 + 5);
  }
  piVar5 = (int *)(lVar7 + 0x20);
  if (piVar4 != (int *)0x0) {
    piVar5 = piVar4;
  }
  *piVar5 = iVar6;
  iVar6 = *(int *)(puVar3 + 5);
  *(uint *)(puVar3 + 5) = iVar6 + 1U;
  if (*(uint *)((longlong)puVar3 + 0x2c) < iVar6 + 1U) {
    FUN_1446f48e2(puVar3 + 4,iVar6);
  }
  *(int *)(puVar3[4] + (longlong)iVar6 * 4) = iVar2;
  iVar6 = *(int *)(puVar3 + 3);
  *(uint *)(puVar3 + 3) = iVar6 + 1U;
  if (*(uint *)((longlong)puVar3 + 0x1c) < iVar6 + 1U) {
    FUN_14024e93c(puVar3 + 2,iVar6);
  }
LAB_14024e8d2:
  memcpy((void *)((longlong)iVar6 * 0xa0 + puVar3[2]),param_3,0xa0);
  return;
}



// FUNCTION 14024e93c FUN_14024e93c body=275 status=ok
// SIG undefined FUN_14024e93c(void)

void FUN_14024e93c(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0xa0;
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
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14024ea50 FUN_14024ea50 body=38 status=ok
// SIG undefined FUN_14024ea50(void)

undefined8 FUN_14024ea50(undefined8 param_1,int param_2)

{
  FUN_14024ea76();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14024ea76 FUN_14024ea76 body=741 status=ok
// SIG undefined FUN_14024ea76(void)

void FUN_14024ea76(undefined8 *param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x24);
  EnterCriticalSection(lpCriticalSection);
  if ((*(int *)((longlong)param_1 + 0xb4) < *(int *)(param_1 + 0x11)) ||
     (0 < *(int *)(param_1 + 0x29))) {
    FUN_140033559(".\\Runtime/PakFile/Private/IPlatformFilePak.cpp",0xcec,
                  L"LiveRequests.Num or NumLiveRawReqeusts was > 0 in ~FPakAsyncReadFileHandle!");
  }
  iVar2 = *(int *)(param_1 + 0x1b);
  if ((longlong)iVar2 != 0) {
    lVar3 = param_1[0x1a];
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar7);
      if (lVar4 != 0) {
        FUN_140320ec2(lVar4);
        puVar5 = *(undefined8 **)(lVar4 + 0x18);
        if (puVar5 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar5 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar5)(puVar5,1);
          }
        }
        FUN_1400020a8(lVar4);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar2 * 8 != lVar7);
  }
  LeaveCriticalSection(lpCriticalSection);
  *(undefined4 *)(param_1 + 0x37) = 0;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (*(int *)((longlong)param_1 + 0x17c) != 0) {
    FUN_144727cd0(param_1 + 0x2e,0);
  }
  param_1[0x34] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x33) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x19c)) {
    *(undefined4 *)((longlong)param_1 + 0x19c) = 0x80;
    FUN_1446efbd8(param_1 + 0x30,0);
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection(lpCriticalSection);
  if (param_1[0x1c] != 0) {
    plVar6 = param_1 + 0x20;
    if ((longlong *)param_1[0x1e] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x1e];
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (*(int *)((longlong)param_1 + 0x8c) != 0) {
    FUN_14474875a(param_1 + 0x10,0);
  }
  param_1[0x16] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xac)) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 0x80;
    FUN_1446efbd8(param_1 + 0x12,0);
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  puVar5 = (undefined8 *)param_1[2];
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  *param_1 = &PTR_LAB_149e064c0;
  return;
}



// FUNCTION 14024ed68 FUN_14024ed68 body=31 status=ok
// SIG undefined FUN_14024ed68(void)

undefined8 FUN_14024ed68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14024ed88 FUN_14024ed88 body=166 status=ok
// SIG undefined FUN_14024ed88(void)

void FUN_14024ed88(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = (longlong *)param_1[2];
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_14024edc0;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = (longlong *)param_1[1];
    bVar2 = false;
  }
LAB_14024edc0:
  lVar5 = thunk_FUN_1424da030(0x40);
  if (lVar5 != 0) {
    FUN_14024eeb8(lVar5,param_2);
  }
  (**(code **)(*plVar7 + 0x40))(plVar7,lVar5);
  if (!bVar2) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014024ee06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))(param_1);
  return;
}



// FUNCTION 14024ee30 thunk_FUN_1424da030 body=5 status=ok
// SIG undefined thunk_FUN_1424da030(void)

undefined * thunk_FUN_1424da030(size_t param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    return &DAT_149966ef0;
  }
  if (DAT_14c77ed68 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001424da04b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined *)(*DAT_14c77ed68)(DAT_14c77ed70);
    return puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001424da059. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = malloc(param_1);
  return puVar1;
}



// FUNCTION 14024ee36 FUN_14024ee36 body=129 status=ok
// SIG undefined FUN_14024ee36(void)

undefined4 FUN_14024ee36(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar7 = *(longlong **)(param_1 + 0x10);
  bVar2 = true;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    plVar6 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar7[1];
    plVar6 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_14024ee66;
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
    plVar6 = *(longlong **)(param_1 + 8);
    bVar2 = false;
  }
LAB_14024ee66:
  uVar5 = (**(code **)(*plVar6 + 0x48))(plVar6);
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  (**(code **)(*plVar6 + 0x20))(plVar6);
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  if (!bVar2) {
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  return uVar5;
}



// FUNCTION 14024eeb8 FUN_14024eeb8 body=142 status=ok
// SIG undefined FUN_14024eeb8(void)

undefined8 * FUN_14024eeb8(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  FUN_14003c090();
  *param_1 = &PTR_FUN_149e17b10;
  param_1[4] = 0;
  iVar3 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 5) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    iVar3 = 0;
    uVar2 = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar3,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar3 * 2);
    uVar2 = param_1[4];
    iVar3 = *(int *)(param_1 + 5);
  }
  param_1[6] = uVar2;
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 7) = iVar1;
  FUN_14003c0c0(param_1);
  return param_1;
}



// FUNCTION 14024ef60 FUN_14024ef60 body=92 status=ok
// SIG undefined FUN_14024ef60(void)

void FUN_14024ef60(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0xe80) != 0) {
    lVar1 = param_1 + 0xe80;
    FUN_14024f1da(lVar1,*(undefined8 *)(param_1 + 0x390));
    if (*(longlong *)(param_1 + 0xe80) != 0) goto LAB_14024ef8c;
  }
  lVar1 = param_1 + 0x430;
  FUN_14024f1da(lVar1,*(undefined8 *)(param_1 + 0x390));
LAB_14024ef8c:
  FUN_14024efbc(lVar1);
  return;
}



// FUNCTION 14024efbc FUN_14024efbc body=541 status=ok
// SIG undefined FUN_14024efbc(void)

longlong FUN_14024efbc(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_1;
  if (lVar2 != 0) {
    if (DAT_14caf64b8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_142b4754c;
      local_38 = &LAB_147c45ce0;
      local_40 = &LAB_1463f1ff4;
      local_48 = L"Game";
      local_50 = 0x4000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
      lVar2 = *param_1;
      if (lVar2 == 0) goto LAB_14024f073;
    }
    if ((((DAT_14caf64b8 != 0) && (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 != 0)) &&
        (*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) ==
        DAT_14caf64b8 + 0x30)) goto LAB_14024f01b;
    lVar3 = lVar2;
    if (DAT_14cad3ae0 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_142b4754c;
      local_38 = &LAB_147a36475;
      local_40 = &LAB_1463c0cc7;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000005;
      local_60 = 8;
      local_68 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Controller",&DAT_14cad3ae0,FUN_1463c0ca0);
      lVar3 = *param_1;
      if (lVar3 == 0) goto LAB_14024f073;
    }
    lVar2 = 0;
    if ((DAT_14cad3ae0 == 0) || (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 == 0))
    goto LAB_14024f01b;
    if ((*(int *)(DAT_14cad3ae0 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cad3ae0 + 0x38) * 8) ==
        DAT_14cad3ae0 + 0x30)) {
      lVar2 = *(longlong *)(lVar3 + 0x3d0);
      goto LAB_14024f01b;
    }
  }
LAB_14024f073:
  lVar2 = 0;
LAB_14024f01b:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 14024f1da FUN_14024f1da body=1456 status=ok
// SIG undefined FUN_14024f1da(void)

void FUN_14024f1da(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined8 local_38;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *param_1;
  if (lVar2 == 0) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *param_1 = param_2;
LAB_14024f3a0:
    param_1[0x148] = 0;
LAB_14024f3ab:
    lVar2 = *param_1;
LAB_14024f3ae:
    if (lVar2 != 0) goto LAB_14024f33a;
  }
  else {
    if (lVar2 == param_2) goto LAB_14024f3a0;
    if (DAT_14cad3ae0 == 0) {
      local_80 = &local_30;
      local_30 = FUN_141030f22;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_142b4754c;
      local_88 = &LAB_147a36475;
      local_90 = &LAB_1463c0cc7;
      local_98 = L"Engine";
      local_a0 = 0;
      local_a8 = 0x10000005;
      local_b0 = 8;
      local_b8 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Controller",&DAT_14cad3ae0,FUN_1463c0ca0);
      lVar2 = *param_1;
      if (lVar2 == 0) goto LAB_14024f3a0;
    }
    if ((((DAT_14cad3ae0 != 0) && (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 != 0)) &&
        (*(int *)(DAT_14cad3ae0 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cad3ae0 + 0x38) * 8) ==
        DAT_14cad3ae0 + 0x30)) {
      lVar3 = *(longlong *)(lVar2 + 0x398);
      if (DAT_14c950c29 == '\x01') {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c(lVar3);
          lVar3 = *(longlong *)(lVar2 + 0x398);
        }
      }
LAB_14024f2aa:
      param_1[0x148] = lVar3;
      if (lVar3 != 0) goto LAB_14024f2ba;
      goto LAB_14024f3ab;
    }
    if (DAT_14caf64b8 == 0) {
      local_80 = &local_30;
      local_30 = FUN_141030f22;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_142b4754c;
      local_88 = &LAB_147c45ce0;
      local_90 = &LAB_1463f1ff4;
      local_98 = L"Game";
      local_a0 = 0x4000000000;
      local_a8 = 0x10000004;
      local_b0 = 8;
      local_b8 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
      lVar2 = *param_1;
      if (lVar2 == 0) goto LAB_14024f3a0;
    }
    if (((DAT_14caf64b8 != 0) && (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 != 0)) &&
       ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(lVar3 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8)
         == DAT_14caf64b8 + 0x30)))) {
      lVar3 = *(longlong *)(lVar2 + 0x3b0);
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar3);
      }
      goto LAB_14024f2aa;
    }
    lVar2 = FUN_1400d1928();
    lVar3 = *param_1;
    if ((((lVar3 == 0) || (lVar2 == 0)) || (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 == 0)) ||
       ((*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
         lVar2 + 0x30)))) goto LAB_14024f3a0;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar3);
    }
    param_1[0x148] = lVar3;
LAB_14024f2ba:
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) goto LAB_14024f3ab;
    lVar2 = *param_1;
    if ((lVar2 == 0) || ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0)) {
LAB_14024f63e:
      *param_1 = 0;
      lVar2 = *(longlong *)(lVar3 + 0x168);
      if (lVar2 == 0) goto LAB_14024f3a0;
      lVar3 = FUN_14490fee6();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) != lVar3 + 0x30)) goto LAB_14024f3a0;
      lVar2 = *(longlong *)(lVar2 + 0x3d0);
      if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
        local_40 = 0;
        local_3c = 1;
        local_38 = 0x40000000;
        (**(code **)(**(longlong **)(param_2 + 0x448) + 0x698))
                  (*(longlong **)(param_2 + 0x448),lVar2,param_1);
        goto LAB_14024f3ab;
      }
      lVar2 = param_1[0x148];
      if (DAT_14c950c29 == '\x01') {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = param_1[0x148];
        }
      }
      *param_1 = lVar2;
      goto LAB_14024f3ae;
    }
    if (DAT_14caf64b8 == 0) {
      local_80 = &local_30;
      local_30 = FUN_141030f22;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_142b4754c;
      local_88 = &LAB_147c45ce0;
      local_90 = &LAB_1463f1ff4;
      local_98 = L"Game";
      local_a0 = 0x4000000000;
      local_a8 = 0x10000004;
      local_b0 = 8;
      local_b8 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
      lVar2 = *param_1;
      if (lVar2 != 0) goto LAB_14024f2f0;
LAB_14024f637:
      lVar3 = param_1[0x148];
      goto LAB_14024f63e;
    }
LAB_14024f2f0:
    if (((DAT_14caf64b8 == 0) || (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 == 0)) ||
       (*(int *)(lVar1 + 0x38) < *(int *)(DAT_14caf64b8 + 0x38))) goto LAB_14024f637;
    lVar3 = param_1[0x148];
    if ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8)
         != DAT_14caf64b8 + 0x30) || (lVar3 != *(longlong *)(lVar2 + 0x3b0))) goto LAB_14024f63e;
LAB_14024f33a:
    if ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0) goto LAB_14024f343;
  }
  lVar2 = *(longlong *)(param_2 + 0x3d0);
  if (((lVar2 == 0) || ((*(byte *)(lVar2 + 0x65) & 2) != 0)) ||
     ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0)) {
    plVar4 = *(longlong **)(param_2 + 0x448);
    local_60 = 0;
    local_5c = 1;
    local_58 = 0x40000000;
    lVar3 = *plVar4;
  }
  else {
    plVar4 = *(longlong **)(param_2 + 0x448);
    local_50 = 0;
    local_4c = 1;
    local_48 = 0x40000000;
    lVar3 = *plVar4;
    param_2 = lVar2;
  }
  (**(code **)(lVar3 + 0x698))(plVar4,param_2,param_1);
LAB_14024f343:
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14024f7e8 FUN_14024f7e8 body=140 status=ok
// SIG undefined FUN_14024f7e8(void)

undefined8 * FUN_14024f7e8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae0c680;
  FUN_14024f874(param_1 + 0x71);
  FUN_14024f874(param_1 + 0x6b);
  FUN_14024f874(param_1 + 0x65);
  FUN_14024f874(param_1 + 0x5f);
  FUN_14024f874(param_1 + 0x59);
  FUN_14024f874(param_1 + 0x53);
  FUN_14024fa58(param_1 + 0x30);
  FUN_140137a40(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14024f874 FUN_14024f874 body=484 status=ok
// SIG undefined FUN_14024f874(void)

void FUN_14024f874(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
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
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
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
    if (*(longlong *)(param_1 + 0x28) != 0) {
      LOCK();
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x28) + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x20) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x18) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 14024fa58 FUN_14024fa58 body=392 status=ok
// SIG undefined FUN_14024fa58(void)

void FUN_14024fa58(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 0xc0);
  if (lVar4 != 0) {
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
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xb8) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  lVar4 = *(longlong *)(param_1 + 0x98);
  if (lVar4 != 0) {
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
  if (*(longlong *)(param_1 + 0x90) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x90) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14024fbe0 FUN_14024fbe0 body=109 status=ok
// SIG undefined FUN_14024fbe0(void)

void FUN_14024fbe0(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = *param_1;
  puVar3 = *(undefined8 **)(lVar2 + (longlong)(int)param_2 * 8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  iVar4 = (int)param_1[1];
  iVar5 = ~param_2 + iVar4;
  if (iVar5 != 0) {
    iVar6 = 1;
    if (iVar5 < 1) {
      iVar6 = iVar5;
    }
    memmove((void *)(lVar2 + (longlong)(int)param_2 * 8),
            (void *)(lVar2 + (longlong)(iVar4 - iVar6) * 8),(longlong)iVar6 << 3);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 14024fc4e FUN_14024fc4e body=370 status=ok
// SIG undefined FUN_14024fc4e(void)

void FUN_14024fc4e(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar3;
  iVar6 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar6 - uVar3) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar3 * 3) < iVar6 * 2)) && (uVar3 == 0 || 0x40 < (int)(iVar6 - uVar3))) {
    if (0 < (int)uVar3) {
      uVar5 = uVar5 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar5 + 0xf;
          if (uVar3 < 0xfff) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar8 = 0x32 - (ulonglong)bVar2;
              do {
                uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14024fcf5;
                lVar1 = uVar7 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar1 != 0x33);
            }
            uVar5 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar5 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar5 & ((uVar4 & 0x7fffffff0) + uVar5) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
LAB_14024fcf5:
      uVar5 = uVar5 >> 3 & 0xffffffff;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
    }
  }
  return;
}



// FUNCTION 14024fde8 FUN_14024fde8 body=354 status=ok
// SIG undefined FUN_14024fde8(void)

void FUN_14024fde8(ulonglong *param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  int unaff_EDI;
  ulonglong uVar7;
  
  uVar3 = 0;
  if (param_2 != 0) {
    uVar4 = (longlong)param_2 * 4;
    if (DAT_14c872d28 == (longlong *)0x0) goto LAB_14024fe9a;
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar3 = uVar4 + 0xf;
      if (0x7ff0 < uVar4) goto LAB_14024febc;
      uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
      goto LAB_14024fe9a;
    }
    uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
    goto LAB_14024fe9a;
  }
  do {
    param_2 = unaff_EDI;
    uVar5 = (uint)uVar3;
    if (uVar5 == *(uint *)((longlong)param_1 + 0xc)) {
      return;
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar5;
    uVar4 = *param_1;
    if ((uVar4 & 1) == 0) {
      if ((int)uVar5 < 1 && uVar4 == 0) {
        return;
      }
      if (-1 < (int)uVar5) {
        uVar3 = FUN_14001fdce(uVar4,uVar3 << 2,4);
        *param_1 = uVar3;
        return;
      }
    }
    else if (uVar5 <= (uint)param_1[1]) {
      return;
    }
    uVar3 = 0;
    FUN_1467ac767();
LAB_14024febc:
    if ((uVar3 & 0xfffffffffffffff0) < 0x7ff1) {
      bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
      uVar6 = 0x32;
      if (0x32 < bVar2) {
        uVar6 = (ulonglong)bVar2;
      }
      uVar7 = 0x32 - (ulonglong)bVar2;
      do {
        uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
        if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_14024fe9a;
        lVar1 = uVar6 + 1 + uVar7;
        uVar7 = uVar7 - 1;
      } while (lVar1 != 0x33);
    }
    uVar4 = 0x10;
    if (0x10 < DAT_14c841df8) {
      uVar4 = (ulonglong)DAT_14c841df8;
    }
    uVar4 = -uVar4 & ((uVar3 & 0xfffffffffffffff0) + uVar4) - 1;
LAB_14024fe9a:
    uVar3 = 0x7fffffff;
    unaff_EDI = param_2;
    if (param_2 <= (int)(uVar4 >> 2)) {
      uVar3 = uVar4 >> 2 & 0xffffffff;
    }
  } while( true );
}



// FUNCTION 14024ff4a FUN_14024ff4a body=61 status=ok
// SIG undefined FUN_14024ff4a(void)

void FUN_14024ff4a(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  FUN_14024ff87(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_14755f672(param_1);
    return;
  }
  return;
}



// FUNCTION 14024ff87 FUN_14024ff87 body=43 status=ok
// SIG undefined FUN_14024ff87(void)

void FUN_14024ff87(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14755f62c(param_1);
    param_1 = param_1 + 0x88;
  }
  return;
}



// FUNCTION 14024ffb2 FUN_14024ffb2 body=400 status=ok
// SIG undefined FUN_14024ffb2(void)

void FUN_14024ffb2(undefined8 *param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  ulonglong local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 1) != 0) {
    if (((param_3[1] == 0 && *param_3 == 0) && param_3[2] == 0) && param_3[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
    }
    FUN_1401abe9c(param_4,&local_58,param_3,param_3 + 4);
    if ((longlong)local_50 != 0) {
      local_78 = local_58 + local_50;
      puVar7 = local_58;
      do {
        local_60 = *puVar7;
        uVar1 = FUN_14479d2ce(&local_60);
        if ((uVar1 != 0) && ((longlong)*(int *)(param_1 + 1) != 0)) {
          plVar6 = (longlong *)*param_1;
          uVar3 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
          uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
          lVar5 = (longlong)*(int *)(param_1 + 1) * 0x88;
          do {
            if ((*(byte *)(plVar6 + 0x10) & 2) == 0) {
              local_68 = *(longlong *)(*plVar6 + 8);
              plVar4 = (longlong *)*plVar6;
            }
            else {
              local_68 = plVar6[1];
              plVar4 = plVar6;
            }
            local_70 = uVar1;
            uVar2 = FUN_147565d28(param_2,(int)((ulonglong)local_68 >> 0x20) * 0x17 + (int)local_68
                                          ^ uVar3 >> 0x10 ^ uVar3,&local_70);
            (**(code **)(*plVar4 + 8))(plVar4,uVar2);
            plVar6 = plVar6 + 0x11;
            lVar5 = lVar5 + -0x88;
          } while (lVar5 != 0);
        }
        puVar7 = puVar7 + 1;
      } while (puVar7 != local_78);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14025015e FUN_14025015e body=1282 status=ok
// SIG undefined FUN_14025015e(void)

undefined8 *
FUN_14025015e(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,char param_7)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong *puVar14;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 **local_a0;
  int local_94;
  ulonglong *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar14 = (ulonglong *)(param_2 + 0x70);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar8 = puVar13 + 0x3a;
  local_88 = param_4;
  if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
    FUN_140023dd8(puVar14);
    puVar13 = (undefined8 *)(*puVar14 + 0xf & 0xfffffffffffffff0);
    puVar8 = puVar13 + 0x3a;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar8;
  *puVar13 = &PTR_FUN_14a1f67e8;
  puVar8 = puVar13 + 2;
  puVar13[0x38] = 0;
  local_90 = puVar14;
  memset(puVar8,0,0x168);
  puVar13[0x35] = 0;
  puVar13[0x36] = 0;
  iVar2 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar2 * 8) = puVar13;
  local_94 = *(int *)(param_3 + 0x3090);
  uVar10 = 0x40a;
  if (local_94 == 1) {
    uVar10 = 0;
  }
  uVar11 = 6;
  if (local_94 != 1) {
    uVar11 = 0;
  }
  local_a8 = puVar8;
  local_80 = puVar8;
  FUN_1448e315a(param_2,param_5,local_94,uVar10);
  FUN_140250972(param_2,param_5,uVar11,puVar13 + 0x14);
  puVar14 = local_90;
  plVar3 = *(longlong **)(param_3 + 0x30d8);
  if ((plVar3 == (longlong *)0x0) || ((*(byte *)(plVar3 + 1) & 2) == 0)) {
    local_a0 = &local_78;
    local_78 = (undefined8 *)&DAT_3f8000003f800000;
    uStack_70 = 0x3f800000;
    uStack_6c = 0x3f800000;
    local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,1);
    lVar7 = FUN_1449cc94d(param_2,&DAT_14ca63c48,&DAT_14ca63c78,0x10);
    puVar14 = local_90;
  }
  else {
    if (*(code **)(*plVar3 + 0x80) == (code *)&LAB_144b15db6) {
      local_78 = (undefined8 *)plVar3[(ulonglong)*(uint *)(plVar3 + 0xcd) + 0xd1];
    }
    else {
      local_78 = (undefined8 *)(**(code **)(*plVar3 + 0x80))();
    }
    if (local_78 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_78 + 1) = *(int *)(local_78 + 1) + 1;
      UNLOCK();
    }
    lVar7 = FUN_144735dd8(param_2,&local_78,1);
    if (local_78 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_78 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_78)(local_78,1);
      }
    }
  }
  if ((*(byte *)(lVar7 + 0x68) & 0x80) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0x1c;
  }
  puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar12 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
    FUN_140023dd8(puVar14,0x50);
    puVar12 = (undefined8 *)(*puVar14 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar12 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar8;
  puVar12[1] = *(undefined8 *)(lVar7 + 8);
  puVar12[2] = 0;
  *(undefined1 *)(puVar12 + 3) = 3;
  *(undefined8 *)((longlong)puVar12 + 0x1c) = 0xffffffffffffffff;
  *puVar12 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar12 + 5) = uVar9;
  *(undefined8 *)((longlong)puVar12 + 0x2c) = 0xffffffff00000000;
  puVar12[7] = 0;
  puVar12[8] = lVar7;
  iVar2 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
    FUN_1447568fc(param_2 + 0x198,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  puVar13[0x38] = puVar12;
  uVar10 = 0;
  if (param_7 == '\x05') {
    uVar10 = local_88;
  }
  FUN_140250815(param_2,uVar10,puVar13 + 0x30);
  FUN_140250662();
  uVar10 = DAT_14c9b7998;
  puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar13 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
    FUN_140023dd8(puVar14,0x50);
    puVar13 = (undefined8 *)(*puVar14 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar13 + 9;
  }
  *puVar14 = (ulonglong)puVar8;
  puVar13[1] = uVar10;
  puVar13[2] = 0;
  *puVar13 = &PTR_FUN_14a1fb9b8;
  FUN_140250662();
  puVar13[3] = local_80;
  lVar7 = DAT_14c9b79c8;
  puVar13[4] = DAT_14c9b79c8;
  if (lVar7 != 0) {
    LOCK();
    piVar1 = (int *)(lVar7 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar13[5] = &DAT_14c9b7980;
  puVar13[6] = 0;
  *(undefined4 *)(puVar13 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar13 + 0x3c) = 0;
  *puVar13 = &PTR_FUN_14a1f67f0;
  puVar13[8] = local_80;
  iVar2 = *(int *)(param_2 + 0x1b0);
  *(uint *)(param_2 + 0x1b0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x1b4) < iVar2 + 1U) {
    FUN_1402aa76e(param_2 + 0x1a8,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x1a8) + (longlong)iVar2 * 8) = puVar13;
  *(int *)(puVar13 + 7) = *(int *)(param_2 + 0x1b0) + -1;
  *param_1 = puVar13;
  uVar4 = *(undefined4 *)(param_5 + 0x1c4);
  uVar5 = *(undefined4 *)(param_5 + 0x1c8);
  uVar6 = *(undefined4 *)(param_5 + 0x1cc);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_5 + 0x1c0);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  *(undefined4 *)(param_1 + 2) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
  param_1[3] = *(undefined8 *)(param_5 + 0x1b0);
  lVar7 = *(longlong *)(*(longlong *)(param_5 + 0x198) + 0x40);
  if (local_94 != 1) {
    param_1[5] = *(undefined8 *)(lVar7 + 0x28);
    param_1[6] = *(undefined8 *)(lVar7 + 0x30);
    param_1[7] = *(undefined8 *)(lVar7 + 0x38);
    param_1[9] = *(undefined8 *)(lVar7 + 0x48);
  }
  param_1[10] = param_6;
  param_1[8] = *(undefined8 *)(lVar7 + 0x80);
  param_1[0xb] = *(undefined8 *)(param_5 + 0x328);
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140250662 FUN_140250662 body=434 status=ok
// SIG undefined FUN_140250662(void)

undefined * FUN_140250662(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  wchar_t *local_68;
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
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b7a00) {
    FUN_144b3d300(&DAT_14c9b7a00);
    if (DAT_14c9b7a00 == -1) {
      FUN_1456ea844(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = L"SceneTextures";
      local_70 = L"DecalPass";
      local_78 = L"FDecalPassUniformParameters";
      local_38 = 0;
      local_50 = 0x1c0;
      local_58 = 0x17;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9b7980,1,2);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8d7d2);
      _Init_thread_footer(&DAT_14c9b7a00);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9b7980;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140250815 FUN_140250815 body=348 status=ok
// SIG undefined FUN_140250815(void)

void FUN_140250815(longlong param_1,longlong param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x58) == 0)) {
    if (DAT_14c760a84 == -1) {
      FUN_145fdab76(&local_38,L"FRDGSystemTextures",
                    L".\\Runtime/Renderer/Private/SystemTextures.cpp",0x66);
      DAT_14c760a84 = FUN_145d12cf0(&local_38);
      if (CONCAT44(uStack_34,local_38) != 0) {
        FUN_1400020a8();
      }
    }
    if ((DAT_14c760a84 < *(int *)(param_1 + 0x130)) &&
       (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)DAT_14c760a84 * 8),
       lVar5 != 0)) {
      lVar5 = lVar5 + 8;
    }
    else {
      lVar5 = 0;
    }
    *param_3 = 0;
    param_3[1] = 0;
    *(undefined4 *)(param_3 + 2) = 0;
    *(undefined4 *)(param_3 + 4) = 0xffffffff;
    local_40 = &local_38;
    local_38 = DAT_14ca83a5c;
    uStack_34 = DAT_14ca83a60;
    uStack_30 = DAT_14ca83a64;
    uStack_2c = DAT_14ca83a68;
    local_48 = 0x1c;
    uVar4 = FUN_1400dd219(param_1,&DAT_14ca63c38,&DAT_14ca63c58,1);
    param_3[6] = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 8);
  }
  else {
    puVar6 = (undefined8 *)(param_2 + 0x58);
    bVar1 = *(byte *)(param_2 + 0x20);
    uVar3 = *(undefined4 *)(param_2 + 0x1c);
    bVar2 = *(byte *)(param_2 + 0x21);
    *param_3 = *(undefined8 *)(param_2 + 0x14);
    *(uint *)(param_3 + 1) = (uint)bVar1;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar3;
    *(uint *)(param_3 + 2) = (uint)bVar2;
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_2 + 0x30);
    param_3[6] = *(undefined8 *)(param_2 + 0x38);
  }
  param_3[5] = *puVar6;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140250972 FUN_140250972 body=1109 status=ok
// SIG undefined FUN_140250972(void)

void FUN_140250972(longlong param_1,longlong param_2,uint param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 *local_70;
  uint local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_5c = param_3;
  if (DAT_14c760a84 == -1) {
    FUN_145fdab76(&local_58,L"FRDGSystemTextures",L".\\Runtime/Renderer/Private/SystemTextures.cpp",
                  0x66);
    DAT_14c760a84 = FUN_145d12cf0(&local_58);
    if (CONCAT44(uStack_54,local_58) != 0) {
      FUN_1400020a8();
    }
  }
  if ((DAT_14c760a84 < *(int *)(param_1 + 0x130)) &&
     (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)DAT_14c760a84 * 8),
     lVar4 != 0)) {
    lVar4 = lVar4 + 8;
  }
  else {
    lVar4 = 0;
  }
  *param_4 = *(longlong *)(lVar4 + 8);
  param_4[1] = DAT_14c9c0d80;
  param_4[2] = *(longlong *)(lVar4 + 0x28);
  local_58 = DAT_14ca83a34;
  uStack_54 = DAT_14ca83a38;
  uStack_50 = DAT_14ca83a3c;
  uStack_4c = DAT_14ca83a40;
  local_78 = 2;
  local_70 = &local_58;
  lVar2 = FUN_1400dd219(param_1,&DAT_14ca63c38,&DAT_14ca63c58,1);
  param_4[3] = lVar2;
  lVar2 = DAT_14c9c0d80;
  param_4[4] = DAT_14c9c0d80;
  param_4[5] = *(longlong *)(lVar4 + 0x28);
  param_4[6] = lVar2;
  param_4[7] = *(longlong *)(lVar4 + 8);
  local_58 = DAT_14ca83a34;
  uStack_54 = DAT_14ca83a34;
  uStack_50 = DAT_14ca83a34;
  uStack_4c = DAT_14ca83a34;
  local_78 = 0xb;
  local_70 = &local_58;
  lVar2 = FUN_1400dd219(param_1,&DAT_14ca63c38,&DAT_14ca63c58,1);
  param_4[8] = lVar2;
  lVar1 = DAT_14c9c0d80;
  param_4[9] = DAT_14c9c0d80;
  lVar2 = *(longlong *)(lVar4 + 0x80);
  param_4[10] = lVar2;
  param_4[0xb] = lVar2;
  param_4[0xc] = *(longlong *)(lVar4 + 8);
  param_4[0xd] = lVar1;
  lVar2 = *(longlong *)(lVar4 + 8);
  param_4[0xe] = lVar2;
  param_4[0xf] = lVar2;
  lVar2 = *(longlong *)(lVar4 + 8);
  param_4[0x10] = lVar2;
  param_4[0x11] = lVar2;
  param_4[0x12] = *(longlong *)(lVar4 + 8);
  local_58 = DAT_14ca83a34;
  uStack_54 = DAT_14ca83a38;
  uStack_50 = DAT_14ca83a3c;
  uStack_4c = DAT_14ca83a40;
  local_78 = 2;
  local_70 = &local_58;
  lVar2 = FUN_1400dd219(param_1,&DAT_14ca63c38,&DAT_14ca63c58,1);
  param_4[0x13] = lVar2;
  lVar2 = *(longlong *)(lVar4 + 8);
  param_4[0x14] = lVar2;
  param_4[0x15] = lVar2;
  lVar2 = DAT_14c9c0d80;
  param_4[0x16] = DAT_14c9c0d80;
  param_4[0x17] = lVar2;
  param_4[0x18] = lVar2;
  param_4[0x19] = lVar2;
  param_4[0x1a] = lVar2;
  if (param_2 != 0) {
    if ((((local_5c & 1) != 0) && (lVar2 = *(longlong *)(param_2 + 0x1b8), lVar2 != 0)) &&
       ((*(byte *)(lVar2 + 0x24) & 4) != 0)) {
      *param_4 = lVar2;
    }
    if ((local_5c & 2) != 0) {
      lVar2 = *(longlong *)(param_2 + 0x1c8);
      if (((lVar2 != 0) && ((*(byte *)(lVar2 + 0x24) & 4) != 0)) &&
         ((*(byte *)(lVar2 + 0x61) & 0x10) == 0)) {
        param_4[2] = lVar2;
        param_4[3] = *(longlong *)(param_2 + 0x1c8);
      }
      lVar2 = *(longlong *)(param_2 + 0x220);
      if (((lVar2 != 0) && ((*(byte *)(lVar2 + 0x24) & 4) != 0)) &&
         ((*(byte *)(lVar2 + 0x61) & 0x10) == 0)) {
        param_4[5] = lVar2;
      }
    }
    if ((*(byte *)(param_2 + 0x188) & 2) != 0) {
      lVar2 = *(longlong *)(param_2 + 0x2a8);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x24) & 4) != 0)) {
        param_4[0xe] = lVar2;
      }
      lVar2 = *(longlong *)(param_2 + 0x2b0);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x24) & 4) != 0)) {
        param_4[0xf] = lVar2;
      }
      lVar2 = *(longlong *)(param_2 + 0x2b8);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x24) & 4) != 0)) {
        param_4[0x10] = lVar2;
      }
      lVar2 = *(longlong *)(param_2 + 0x2c0);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x24) & 4) != 0)) {
        param_4[0x11] = lVar2;
      }
    }
    if ((((char)local_5c < '\0') && (lVar2 = *(longlong *)(param_2 + 0x2e8), lVar2 != 0)) &&
       ((*(byte *)(lVar2 + 0x24) & 4) != 0)) {
      param_4[0x12] = lVar2;
      param_4[0x13] = *(longlong *)(param_2 + 0x2e8);
    }
    lVar2 = *(longlong *)(param_2 + 0x2f8);
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x24) & 4) != 0)) {
      param_4[0x14] = lVar2;
    }
    lVar2 = *(longlong *)(param_2 + 0x300);
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x24) & 4) != 0)) {
      param_4[0x15] = lVar2;
    }
    if ((local_5c & 4) != 0) {
      plVar3 = (longlong *)(lVar4 + 0x80);
      lVar2 = *(longlong *)(param_2 + 0x230);
      if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0x24) & 4) == 0)) {
        lVar4 = *(longlong *)(lVar4 + 0x28);
        param_4[7] = lVar4;
        param_4[8] = lVar4;
      }
      else {
        param_4[7] = lVar2;
        param_4[8] = *(longlong *)(param_2 + 0x230);
        plVar3 = (longlong *)(param_2 + 0x238);
      }
      lVar4 = *plVar3;
      param_4[10] = lVar4;
      param_4[0xb] = lVar4;
    }
    if ((((local_5c >> 8 & 1) != 0) && (lVar4 = *(longlong *)(param_2 + 0x2f0), lVar4 != 0)) &&
       ((*(byte *)(lVar4 + 0x24) & 4) != 0)) {
      param_4[0xc] = lVar4;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140250dc8 FUN_140250dc8 body=42 status=ok
// SIG undefined FUN_140250dc8(void)

void FUN_140250dc8(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_140250e1e();
    return;
  }
  return;
}



// FUNCTION 140250df4 FUN_140250df4 body=41 status=ok
// SIG undefined FUN_140250df4(void)

void FUN_140250df4(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_14480809c();
  return;
}



// FUNCTION 140250e1e FUN_140250e1e body=231 status=ok
// SIG undefined FUN_140250e1e(void)

void FUN_140250e1e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x30;
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,4);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,4);
  }
  return;
}



// FUNCTION 140250f06 FUN_140250f06 body=89 status=ok
// SIG undefined FUN_140250f06(void)

undefined8 * FUN_140250f06(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140251036(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
      }
    }
  }
  return param_1;
}



// FUNCTION 140250f60 FUN_140250f60 body=212 status=ok
// SIG undefined FUN_140250f60(void)

void FUN_140250f60(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_98 [36];
  float local_74;
  float local_70;
  float local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_74 = (float)*(double *)(param_2 + 0x60);
  local_70 = (float)*(double *)(param_2 + 0x68);
  local_6c = (float)*(double *)(param_2 + 0x70);
  param_1[6] = (double)local_74;
  param_1[7] = (double)local_70;
  param_1[8] = (double)local_6c;
  FUN_144911616(&local_68,&local_74,param_2);
  *param_1 = local_68;
  *(undefined4 *)(param_1 + 1) = local_60;
  *(undefined8 *)((longlong)param_1 + 0xc) = local_58;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_50;
  param_1[3] = local_48;
  *(undefined4 *)(param_1 + 4) = local_40;
  *(undefined8 *)((longlong)param_1 + 0x24) = local_38;
  *(undefined4 *)((longlong)param_1 + 0x2c) = local_30;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140251036 FUN_140251036 body=235 status=ok
// SIG undefined FUN_140251036(void)

void FUN_140251036(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar2 & (uVar3 + uVar2) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
    iVar1 = (int)(uVar3 / 0x30);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x30,4);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140251122 FUN_140251122 body=319 status=ok
// SIG undefined FUN_140251122(void)

void FUN_140251122(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar7 = param_2;
  if (1 < param_2) {
    uVar4 = (ulonglong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0x555) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0x1ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar2) {
              uVar6 = (ulonglong)bVar2;
            }
            uVar8 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14025118c;
              lVar1 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0x1ffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_14025118c:
    uVar5 = (uint)(uVar4 / 0x18);
    uVar7 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar5) {
      uVar7 = uVar5;
    }
  }
  if (uVar7 == *(uint *)(param_1 + 0x24)) {
    return;
  }
  *(uint *)(param_1 + 0x24) = uVar7;
  FUN_140251262(param_1,*(undefined4 *)(param_1 + 0x20),uVar7,0x18);
  return;
}



// FUNCTION 140251262 FUN_140251262 body=141 status=ok
// SIG undefined FUN_140251262(void)

void FUN_140251262(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x18);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x18,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x18),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x18,param_2,param_3,param_4);
  return;
}



// FUNCTION 1402512f0 FUN_1402512f0 body=31 status=ok
// SIG undefined FUN_1402512f0(void)

undefined1
FUN_1402512f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_140251310(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 140251310 FUN_140251310 body=163 status=ok
// SIG undefined FUN_140251310(void)

ulonglong FUN_140251310(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar5 = (int)param_1[1];
  if (iVar5 == (int)param_2[1]) {
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (0 < iVar5) {
      lVar7 = 8;
      lVar8 = 0;
      do {
        lVar2 = *param_1;
        lVar3 = *param_2;
        cVar4 = *(char *)(lVar2 + -8 + lVar7);
        cVar1 = *(char *)(lVar3 + -8 + lVar7);
        if (cVar4 == '\0' && cVar1 == '\0') {
          if ((((*(short *)(lVar2 + -6 + lVar7) != *(short *)(lVar3 + -6 + lVar7)) ||
               (*(short *)(lVar2 + -4 + lVar7) != *(short *)(lVar3 + -4 + lVar7))) ||
              (*(char *)(lVar2 + -7 + lVar7) != *(char *)(lVar3 + -7 + lVar7))) ||
             (cVar4 = FUN_1402513b4(lVar2 + lVar7,lVar3 + lVar7), cVar4 == '\0'))
          goto LAB_140251388;
          iVar5 = (int)param_1[1];
        }
        else if (cVar4 != cVar1) goto LAB_140251388;
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0x50;
      } while (lVar8 < iVar5);
    }
  }
  else {
LAB_140251388:
    uVar6 = 0;
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1402513b4 FUN_1402513b4 body=38 status=ok
// SIG undefined FUN_1402513b4(void)

undefined8 FUN_1402513b4(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x14) < 1) {
    if (*(int *)(param_2 + 0x14) < 1) {
      uVar1 = FUN_1403218c0(param_1 + 0x38,param_2 + 0x38);
      return uVar1;
    }
  }
  else if (0 < *(int *)(param_2 + 0x14)) {
    uVar1 = FUN_14493b798();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1402513da FUN_1402513da body=3662 status=ok
// SIG undefined FUN_1402513da(void)

void FUN_1402513da(longlong param_1)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined1 auVar6 [16];
  double dVar7;
  DWORD DVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  bool bVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  uint local_150;
  undefined4 local_148;
  undefined8 local_140;
  wchar_t *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  code **local_120;
  undefined1 *local_118;
  code *local_110;
  longlong local_100;
  undefined8 **local_f8;
  code **local_f0;
  code *local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a8;
  ulonglong uStack_a0;
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((*(int *)(param_1 + 0x54) < 1) && (1 < *(int *)(param_1 + 0x4c))) {
    plVar14 = *(longlong **)(param_1 + 0xc0);
    if (plVar14 != (longlong *)0x0) {
      if (*(char *)(param_1 + 0x90) == '\x01') {
        lVar17 = plVar14[4];
        if (lVar17 != 0) {
          if (DAT_14cad2858 == 0) {
            local_120 = &local_e8;
            local_e8 = FUN_144a7958c;
            local_110 = FUN_14081d0ea;
            local_118 = &LAB_146395584;
            local_128 = &LAB_147a0ba80;
            local_130 = &LAB_14575ccce;
            local_138 = L"Engine";
            local_140 = 0x40000000000;
            local_148 = 0x10000004;
            local_150 = 0x10;
            local_158 = CONCAT44(local_158._4_4_,0x1180);
            FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
          }
          lVar17 = *(longlong *)(lVar17 + 0x10);
          if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar17 + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(lVar17 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
              DAT_14cad2858 + 0x30)) {
            if ((DAT_14c86a9f8 == '\x01') &&
               (iVar3 = *(int *)(*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0xc60), iVar3 != 2)) {
              if (iVar3 == 1) {
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                if (DVar9 == DVar10) goto LAB_140252216;
              }
            }
            else {
LAB_140252216:
              FUN_14036294a(plVar14[4],1,1);
            }
          }
        }
        lVar17 = plVar14[0x7c];
        if (lVar17 == 0) {
          lVar17 = (**(code **)(*plVar14 + 0x350))(plVar14);
          plVar14[0x7c] = lVar17;
        }
        if ((*(byte *)(lVar17 + 0x7e1) & 4) == 0) goto LAB_14025148f;
        plVar14 = *(longlong **)(param_1 + 0xc0);
      }
      if ((*(byte *)((longlong)plVar14 + 0x31) & 4) != 0) {
        FUN_1449d3f9e(plVar14);
      }
    }
LAB_14025148f:
    if ((((((2 < *(int *)(param_1 + 0x4c)) && (*(int *)(param_1 + 0x3c) != 0)) &&
          (uVar2 = *(uint *)(param_1 + 0x38), -1 < (int)uVar2)) &&
         (((int)uVar2 < DAT_14c9647dc &&
          (plVar14 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar14 != (longlong *)0x0)))) && ((int)plVar14[2] == *(int *)(param_1 + 0x3c))) &&
       ((((*(uint *)(plVar14 + 1) & 0x10200000) == 0 && (lVar17 = *plVar14, lVar17 != 0)) &&
        ((plVar11 = *(longlong **)(param_1 + 0xc0), plVar11 != (longlong *)0x0 &&
         ((*(longlong *)(param_1 + 0xb8) != 0 && (0 < *(int *)(param_1 + 0x110))))))))) {
      lVar13 = plVar11[4];
      if (lVar13 != 0) {
        if (DAT_14cad2858 == 0) {
          local_120 = &local_e8;
          local_e8 = FUN_144a7958c;
          local_110 = FUN_14081d0ea;
          local_118 = &LAB_146395584;
          local_128 = &LAB_147a0ba80;
          local_130 = &LAB_14575ccce;
          local_138 = L"Engine";
          local_140 = 0x40000000000;
          local_148 = 0x10000004;
          local_150 = 0x10;
          local_158 = CONCAT44(local_158._4_4_,0x1180);
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
        }
        lVar13 = *(longlong *)(lVar13 + 0x10);
        plVar14 = (longlong *)(longlong)*(int *)(DAT_14cad2858 + 0x38);
        if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar13 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)plVar14 * 8) ==
            DAT_14cad2858 + 0x30)) {
          if ((DAT_14c86a9f8 == '\x01') &&
             (iVar3 = *(int *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0xc60), iVar3 != 2)) {
            if (iVar3 == 1) {
              DVar9 = FUN_140ad26c0();
              DVar10 = GetCurrentThreadId();
              if (DVar9 == DVar10) goto LAB_140252138;
            }
          }
          else {
LAB_140252138:
            plVar14 = (longlong *)CONCAT71((int7)((ulonglong)plVar14 >> 8),1);
            FUN_14036294a(plVar11[4],plVar14,1);
          }
        }
      }
      if (plVar11[0x7c] == 0) {
        lVar13 = (**(code **)(*plVar11 + 0x350))(plVar11);
        plVar11[0x7c] = lVar13;
      }
      DVar9 = DAT_14c7585d0;
      if (DAT_14c7585d0 == 0xffffffff) {
        DVar9 = TlsAlloc();
        DVar10 = 0xffffffff;
        LOCK();
        bVar19 = DAT_14c7585d0 != 0xffffffff;
        DVar8 = DVar9;
        if (bVar19) {
          DVar10 = DAT_14c7585d0;
          DVar8 = DAT_14c7585d0;
        }
        DAT_14c7585d0 = DVar8;
        UNLOCK();
        if (bVar19) {
          TlsFree(DVar9);
          DVar9 = DVar10;
        }
      }
      plVar11 = TlsGetValue(DVar9);
      if (plVar11 == (longlong *)0x0) {
        plVar11 = (longlong *)FUN_140036a08(&local_e8);
        FUN_140fddf04(plVar11);
        plVar14 = plVar11;
        TlsSetValue(DVar9,plVar11);
      }
      local_90 = plVar11 + 2;
      local_88 = plVar11[2];
      local_80 = plVar11[4];
      local_78 = '\0';
      local_70 = plVar11[5];
      plVar11[5] = (longlong)&local_90;
      *(int *)(plVar11 + 6) = (int)plVar11[6] + 1;
      local_f8 = &local_a8;
      local_a8 = (undefined8 *)0x0;
      uStack_a0 = 0;
      local_98 = (longlong *)0x0;
      local_f0 = &local_e8;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0.0;
      dStack_c0 = 0.0;
      local_d8 = 0.0;
      dStack_d0 = 0.0;
      local_e8 = (code *)0x0;
      dStack_e0 = 0.0;
      local_100 = param_1 + 400;
      FUN_1433d60fe(*(undefined8 *)(param_1 + 0xc0),
                    CONCAT71((int7)((ulonglong)plVar14 >> 8),*(undefined1 *)(lVar17 + 0xc71)) &
                    0xffffffffffffff01,*(undefined8 *)(param_1 + 0xb8));
      plVar14 = *(longlong **)(param_1 + 0xb8);
      if (*(code **)(*plVar14 + 0x310) == (code *)&LAB_144992730) {
        plVar14 = plVar14 + 0x61;
      }
      else {
        plVar14 = (longlong *)(**(code **)(*plVar14 + 0x310))(plVar14);
      }
      plVar11 = (longlong *)(param_1 + 0x1c8);
      if (plVar11 != plVar14 + 6) {
        iVar3 = (int)plVar14[7];
        pvVar5 = (void *)plVar14[6];
        *(int *)(param_1 + 0x1d0) = iVar3;
        if (iVar3 == 0 && *(int *)(param_1 + 0x1d4) == 0) {
          *(undefined4 *)(param_1 + 0x1d4) = 0;
        }
        else {
          FUN_144756262(plVar11,iVar3);
          if (iVar3 != 0) {
            memcpy((void *)*plVar11,pvVar5,(longlong)iVar3 * 0x60);
          }
        }
      }
      if ((((((local_98 == (longlong *)0x0) || (*(int *)((longlong)local_98 + 0x34) == 0)) ||
            (uVar2 = *(uint *)(local_98 + 6), (int)uVar2 < 0)) ||
           (((DAT_14c9647dc <= (int)uVar2 ||
             (lVar17 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar17 == 0))
            || ((*(int *)(lVar17 + 0x10) != *(int *)((longlong)local_98 + 0x34) ||
                (((*(uint *)(lVar17 + 8) & 0x10200000) != 0 || (local_98[9] == 0)))))))) ||
          ((int)local_98[1] < 1)) || ((int)uStack_a0 < 1)) {
        lVar17 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x310))();
        if (plVar11 != (longlong *)(lVar17 + 0x30)) {
          iVar3 = *(int *)(lVar17 + 0x38);
          pvVar5 = *(void **)(lVar17 + 0x30);
          *(int *)(param_1 + 0x1d0) = iVar3;
          if (iVar3 == 0 && *(int *)(param_1 + 0x1d4) == 0) {
            *(undefined4 *)(param_1 + 0x1d4) = 0;
          }
          else {
            FUN_144756262(plVar11,iVar3);
            if (iVar3 != 0) {
              memcpy((void *)*plVar11,pvVar5,(longlong)iVar3 * 0x60);
            }
          }
        }
      }
      else {
        FUN_142400cf0(local_a8);
        if ((uStack_a0 & 0xffffffff) != 0) {
          uVar18 = 0;
          puVar12 = local_a8;
          do {
            puVar15 = puVar12;
            puVar16 = (undefined8 *)
                      ((ulonglong)((uint)*(ushort *)(*local_98 + uVar18 * 2) * 0x60) + *plVar11);
            for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
              *puVar16 = *puVar15;
              puVar15 = puVar15 + 1;
              puVar16 = puVar16 + 1;
            }
            uVar18 = uVar18 + 1;
            puVar12 = puVar12 + 0xc;
          } while ((uStack_a0 & 0xffffffff) != uVar18);
        }
      }
      plVar14 = *(longlong **)(param_1 + 0xb8);
      lVar17 = *(longlong *)(param_1 + 0x1c8);
      dVar20 = *(double *)(lVar17 + 0x20);
      dVar7 = *(double *)(lVar17 + 0x28);
      dVar21 = *(double *)(lVar17 + 0x30);
      if (*(code **)(*plVar14 + 0x310) == (code *)&LAB_144992730) {
        plVar14 = plVar14 + 0x61;
      }
      else {
        plVar14 = (longlong *)(**(code **)(*plVar14 + 0x310))(plVar14);
      }
      lVar17 = plVar14[6];
      dVar1 = *(double *)(lVar17 + 0x30);
      dVar7 = dVar7 - *(double *)(lVar17 + 0x28);
      auVar6._8_4_ = SUB84(dVar7,0);
      auVar6._0_8_ = dVar20 - *(double *)(lVar17 + 0x20);
      auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x1b0) = auVar6;
      *(double *)(param_1 + 0x1c0) = dVar21 - dVar1;
      plVar14 = *(longlong **)(param_1 + 0xc0);
      lVar17 = plVar14[4];
      if (lVar17 != 0) {
        if (DAT_14cad2858 == 0) {
          local_120 = &local_68;
          local_68 = FUN_144a7958c;
          local_110 = FUN_14081d0ea;
          local_118 = &LAB_146395584;
          local_128 = &LAB_147a0ba80;
          local_130 = &LAB_14575ccce;
          local_138 = L"Engine";
          local_140 = 0x40000000000;
          local_148 = 0x10000004;
          local_150 = 0x10;
          local_158 = CONCAT44(local_158._4_4_,0x1180);
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
        }
        lVar17 = *(longlong *)(lVar17 + 0x10);
        if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar17 + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(lVar17 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
            DAT_14cad2858 + 0x30)) {
          if ((DAT_14c86a9f8 == '\x01') &&
             (iVar3 = *(int *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0xc60), iVar3 != 2)) {
            if (iVar3 == 1) {
              DVar9 = FUN_140ad26c0();
              DVar10 = GetCurrentThreadId();
              if (DVar9 == DVar10) goto LAB_140252110;
            }
          }
          else {
LAB_140252110:
            FUN_14036294a(plVar14[4],1,1);
          }
        }
      }
      lVar17 = plVar14[0x7c];
      if (lVar17 == 0) {
        lVar17 = (**(code **)(*plVar14 + 0x350))(plVar14);
        plVar14[0x7c] = lVar17;
      }
      FUN_14018c33c(lVar17,param_1 + 400);
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      FUN_144723c10(local_c8,(ulonglong)dStack_c0 & 0xffffffff);
      if (local_c8 != 0.0) {
        FUN_1400020a8();
      }
      FUN_144716758(local_d8,(ulonglong)dStack_d0 & 0xffffffff);
      if (local_d8 != 0.0) {
        FUN_1400020a8();
      }
      FUN_144716727(local_e8,(ulonglong)dStack_e0 & 0xffffffff);
      if (local_e8 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (local_78 == '\0') {
        local_78 = '\x01';
        *(int *)(local_90 + 4) = (int)local_90[4] + -1;
        if (local_80 != local_90[2]) {
          FUN_14004673c();
        }
        *local_90 = local_88;
        local_90[3] = local_70;
      }
    }
  }
  if (1 < *(int *)(param_1 + 0x50)) {
    if (*(char *)(param_1 + 0x60) == '\0') {
      iVar3 = *(int *)(param_1 + 0x198);
      pvVar5 = *(void **)(param_1 + 400);
      *(int *)(param_1 + 0x1e0) = iVar3;
      if (iVar3 == 0 && *(int *)(param_1 + 0x1e4) == 0) {
        *(undefined4 *)(param_1 + 0x1e4) = 0;
      }
      else {
        FUN_1447563a6((undefined8 *)(param_1 + 0x1d8),iVar3);
        if (iVar3 != 0) {
          memcpy(*(void **)(param_1 + 0x1d8),pvVar5,(longlong)iVar3 << 4);
        }
      }
      *(undefined1 *)(param_1 + 0x1e8) = *(undefined1 *)(param_1 + 0x1a0);
      *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_1 + 0x1a8);
      *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_1 + 0x1b0);
      *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_1 + 0x1b4);
      *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_1 + 0x1b8);
      *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_1 + 0x1bc);
      *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_1 + 0x1c0);
      iVar3 = *(int *)(param_1 + 0x1d0);
      pvVar5 = *(void **)(param_1 + 0x1c8);
      *(int *)(param_1 + 0x218) = iVar3;
      if (iVar3 == 0 && *(int *)(param_1 + 0x21c) == 0) {
        *(undefined4 *)(param_1 + 0x21c) = 0;
      }
      else {
        FUN_144756262((undefined8 *)(param_1 + 0x210),iVar3);
        if (iVar3 != 0) {
          memcpy(*(void **)(param_1 + 0x210),pvVar5,(longlong)iVar3 * 0x60);
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x61) == '\x01') {
        fVar22 = 1.0 / (float)((*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x54)) + 1);
      }
      else {
        fVar22 = 1.0;
      }
      FUN_140507e50(param_1 + 0x1d8,param_1 + 400,fVar22);
      dVar7 = (double)fVar22;
      *(double *)(param_1 + 0x1f8) =
           (*(double *)(param_1 + 0x1b0) - *(double *)(param_1 + 0x1f8)) * dVar7 +
           *(double *)(param_1 + 0x1f8);
      *(double *)(param_1 + 0x200) =
           (*(double *)(param_1 + 0x1b8) - *(double *)(param_1 + 0x200)) * dVar7 +
           *(double *)(param_1 + 0x200);
      *(double *)(param_1 + 0x208) =
           (*(double *)(param_1 + 0x1c0) - *(double *)(param_1 + 0x208)) * dVar7 +
           *(double *)(param_1 + 0x208);
      FUN_140507b88(param_1 + 0x210,param_1 + 0x1c8,fVar22,param_1 + 0x118);
    }
  }
  lVar17 = param_1 + 400;
  if (1 < *(int *)(param_1 + 0x50)) {
    lVar17 = param_1 + 0x1d8;
  }
  plVar14 = *(longlong **)(param_1 + 0xb8);
  if (plVar14 != (longlong *)0x0) {
    iVar3 = *(int *)(lVar17 + 0x40);
    iVar4 = *(int *)(param_1 + 0x110);
    if (*(code **)(*plVar14 + 0x310) == (code *)&LAB_144992730) {
      plVar14 = plVar14 + 0x61;
    }
    else {
      plVar14 = (longlong *)(**(code **)(*plVar14 + 0x310))(plVar14);
    }
    if ((iVar3 == (int)plVar14[5]) && (iVar4 == (int)plVar14[5])) {
      FUN_1407ecbee(*(undefined8 *)(param_1 + 0xb8),lVar17 + 0x38,param_1 + 0x128,param_1 + 0x108);
    }
  }
  if ((((*(char *)(param_1 + 0x92) == '\x01') && (*(int *)(param_1 + 0x3c) != 0)) &&
      (uVar2 = *(uint *)(param_1 + 0x38), -1 < (int)uVar2)) &&
     ((((int)uVar2 < DAT_14c9647dc &&
       (plVar14 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar14 != (longlong *)0x0)) &&
      (((int)plVar14[2] == *(int *)(param_1 + 0x3c) &&
       (((*(uint *)(plVar14 + 1) & 0x10200000) == 0 && (*plVar14 != 0)))))))) {
    FUN_14362ecd8(*plVar14,param_1 + 0x118,param_1 + 0x108,param_1 + 0x1c8);
  }
  if ((0 < *(int *)(param_1 + 0x54)) || (*(int *)(param_1 + 0x4c) < 3)) goto LAB_140251c1c;
  plVar14 = *(longlong **)(param_1 + 0xb8);
  lVar17 = *(longlong *)(param_1 + 200);
  if (lVar17 == 0) {
    if (plVar14 == (longlong *)0x0) goto LAB_140251c1c;
  }
  else {
    if (plVar14 == (longlong *)0x0) goto LAB_140251c1c;
    if (*(int *)(lVar17 + 0x48) != 0) {
      local_158 = (**(code **)(*plVar14 + 0x310))();
      local_150 = local_150 & 0xffffff00;
      FUN_14363560a(lVar17,&local_e8,&DAT_14c846480,param_1 + 0x108);
      dVar7 = (dStack_c0 - local_d8) * 0.5;
      dVar20 = (local_c8 - dStack_e0) * 0.5;
      dVar21 = (dStack_d0 - (double)local_e8) * 0.5;
      *(double *)(param_1 + 0xd0) = (double)local_e8 + dVar21;
      *(double *)(param_1 + 0xd8) = dStack_e0 + dVar20;
      *(double *)(param_1 + 0xe0) = local_d8 + dVar7;
      *(double *)(param_1 + 0xe8) = dVar21;
      *(double *)(param_1 + 0xf0) = dVar20;
      *(double *)(param_1 + 0xf8) = dVar7;
      *(double *)(param_1 + 0x100) = SQRT(dVar7 * dVar7 + dVar21 * dVar21 + dVar20 * dVar20);
      goto LAB_140251c1c;
    }
  }
  (**(code **)(*plVar14 + 0x3d0))(plVar14,&local_e8);
  *(longlong *)(param_1 + 0x100) = local_b8;
  *(double *)(param_1 + 0xf0) = local_c8;
  *(double *)(param_1 + 0xf8) = dStack_c0;
  *(double *)(param_1 + 0xe0) = local_d8;
  *(double *)(param_1 + 0xe8) = dStack_d0;
  *(code **)(param_1 + 0xd0) = local_e8;
  *(double *)(param_1 + 0xd8) = dStack_e0;
LAB_140251c1c:
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140252232 FUN_140252232 body=160 status=ok
// SIG undefined FUN_140252232(void)

undefined8 FUN_140252232(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined **local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined ****local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ad42464);
  if ((*(byte *)(param_2 + 5) & 5) != 0) {
    plVar1 = (longlong *)FUN_1402522d4();
    local_190 = &local_198;
    local_1a8 = &PTR_FUN_149e37810;
    local_198 = &local_1a8;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1a0 = param_2;
    (**(code **)(*plVar1 + 0x2d0))(plVar1,local_190,param_1,plVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402522d4 FUN_1402522d4 body=57 status=ok
// SIG undefined FUN_1402522d4(void)

void FUN_1402522d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35ef0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35ef0 = FUN_140002ddd(FUN_146464d1d,uVar1,L"VMExternalFunctionBindingInfo");
  }
  return;
}



// FUNCTION 14025230e FUN_14025230e body=514 status=ok
// SIG undefined FUN_14025230e(void)

void FUN_14025230e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  undefined8 *local_90;
  code *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14c833980 == '\0') {
    DAT_14c833940 = 0;
    DAT_14c833900 = TlsAlloc();
    DAT_14c833980 = '\x01';
  }
  uVar4 = FUN_140252512();
  if (uVar4 == 0) {
    uVar5 = 0;
    uVar7 = 0;
    lVar6 = 0;
  }
  else {
    uVar7 = (ulonglong)(uVar4 >> 0xe);
    uVar5 = uVar4 & 0x3fff;
    lVar6 = (ulonglong)(uVar5 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
  }
  *(undefined8 *)(lVar6 + 8) = param_1;
  do {
    local_98 = DAT_14c833a00;
    local_a0 = (DAT_14c833a00 & 0xfffffffffc000000) + 0x4000000;
    if (local_a0 >> 0x1a < DAT_14c833a00 >> 0x1a) {
      FUN_14000f986(0x3a83126f);
    }
    local_a0 = local_a0 & 0xfffffffffc000000 | (ulonglong)uVar4;
    if (uVar4 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar5 * 0x18);
    }
    *(uint *)(lVar6 + 0x10) = (uint)local_98 & 0x3ffffff;
    LOCK();
    bVar8 = local_98 != DAT_14c833a00;
    uVar3 = local_a0;
    if (bVar8) {
      uVar3 = DAT_14c833a00;
    }
    DAT_14c833a00 = uVar3;
    UNLOCK();
  } while (bVar8);
  LOCK();
  iVar2 = DAT_14c833a40 + 1;
  UNLOCK();
  uVar4 = DAT_14c833a40 + 1;
  DAT_14c833a40 = iVar2;
  if ((uVar4 & 0x1f) == 0) {
    local_78 = 0;
    local_68 = &PTR_LAB_149e01d10;
    local_60 = &DAT_14c8339c0;
    local_88[0] = FUN_140108844;
    local_a8 = 0xff;
    FUN_14014aede(&local_90,local_88,param_3,0);
    if (local_90 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_90 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_90)(local_90,1);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140252512 FUN_140252512 body=712 status=ok
// SIG undefined FUN_140252512(void)

ulonglong FUN_140252512(void)

{
  uint uVar1;
  uint uVar2;
  uint *lpTlsValue;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  bool bVar10;
  
  lpTlsValue = TlsGetValue(DAT_14c833900);
  if (lpTlsValue == (uint *)0x0) {
    lpTlsValue = (uint *)FUN_14001cc68(0xc,0x10);
    lpTlsValue[0] = 0;
    lpTlsValue[1] = 0;
    lpTlsValue[2] = 0;
    TlsSetValue(DAT_14c833900,lpTlsValue);
  }
  uVar7 = (ulonglong)lpTlsValue[1];
  if (lpTlsValue[1] == 0) {
    uVar2 = *lpTlsValue;
    if (uVar2 == 0) {
      uVar2 = (uint)DAT_14c833940;
      uVar7 = DAT_14c833940;
      while (DAT_14c833940 = uVar7, (uVar7 & 0x3ffffff) != 0) {
        uVar2 = uVar2 & 0x3ffffff;
        uVar3 = (uVar7 & 0xfffffffffc000000) + 0x4000000;
        if (uVar3 >> 0x1a < uVar7 >> 0x1a) {
          FUN_14000f986(0x3a83126f);
        }
        uVar9 = (ulonglong)((uint)uVar7 & 0x3fff);
        LOCK();
        bVar10 = uVar7 == DAT_14c833940;
        uVar7 = uVar3 | *(uint *)(*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar2 >> 0xe) * 8) +
                                  0x10 + uVar9 * 0x18);
        if (!bVar10) {
          uVar7 = DAT_14c833940;
        }
        DAT_14c833940 = uVar7;
        UNLOCK();
        if (bVar10) {
          *(undefined4 *)
           (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar2 >> 0xe) * 8) + uVar9 * 0x18 + 0x10) = 0
          ;
          lpTlsValue[1] = uVar2;
          goto LAB_14025259a;
        }
        uVar2 = (uint)DAT_14c833940;
        uVar7 = DAT_14c833940;
      }
      lpTlsValue[1] = 0;
      uVar1 = DAT_14c833ac0;
      LOCK();
      uVar2 = DAT_14c833ac0 + 0x40;
      UNLOCK();
      if (DAT_14c833ac0 + 0x40 < 0x4000001) {
        bVar10 = DAT_14c833ac0 < 0xffffffc0;
        DAT_14c833ac0 = uVar2;
        if (bVar10) goto LAB_1402526c8;
      }
      else {
        DAT_14c833ac0 = uVar2;
        FUN_140033559(".\\Runtime/Core/Private/Containers/LockFreeList.cpp",0x30,
                      L"Consumed %d lock free links; there are no more.",0x4000000);
LAB_1402526c8:
        iVar8 = 0;
        do {
          puVar4 = (undefined8 *)FUN_1402bcaae(&DAT_14c833ac0,uVar1 + iVar8);
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          iVar8 = iVar8 + 1;
        } while (iVar8 != 0x40);
      }
      iVar8 = 0;
      uVar2 = uVar1;
      do {
        uVar6 = uVar2;
        if (uVar6 == 0) {
          puVar4 = (undefined8 *)0x0;
        }
        else {
          puVar4 = (undefined8 *)
                   ((ulonglong)((uVar6 & 0x3fff) * 0x18) +
                   *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar6 >> 0xe) * 8));
        }
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 2) = 0;
        puVar4[1] = (ulonglong)lpTlsValue[1];
        lpTlsValue[1] = uVar6;
        iVar8 = iVar8 + -1;
        uVar2 = uVar6 + 1;
      } while (iVar8 != -0x40);
      lpTlsValue[2] = 0x40;
      uVar2 = 0x3f;
      if (uVar6 == 0) {
        uVar7 = 0;
        lVar5 = 0;
        goto LAB_140252566;
      }
      uVar7 = (ulonglong)(uVar1 + 0x3f);
    }
    else {
      lpTlsValue[1] = uVar2;
      *lpTlsValue = 0;
LAB_14025259a:
      uVar7 = (ulonglong)uVar2;
      lpTlsValue[2] = 0x40;
      uVar2 = 0x3f;
    }
  }
  else {
    uVar2 = lpTlsValue[2] - 1;
  }
  lVar5 = (ulonglong)(((uint)uVar7 & 0x3fff) * 0x18) +
          *(longlong *)(&DAT_14c833b00 + (uVar7 >> 0xe) * 8);
LAB_140252566:
  lpTlsValue[1] = (uint)*(undefined8 *)(lVar5 + 8);
  lpTlsValue[2] = uVar2;
  *(undefined8 *)(lVar5 + 8) = 0;
  return uVar7;
}



// FUNCTION 1402527da FUN_1402527da body=1923 status=ok
// SIG undefined FUN_1402527da(void)

void FUN_1402527da(longlong param_1,float *param_2,byte *param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  byte bVar8;
  longlong *plVar9;
  float *pfVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  float *local_180;
  float *local_178;
  float local_170;
  float fStack_16c;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 local_158;
  float local_150;
  undefined8 local_14c;
  undefined2 local_144;
  byte local_142;
  undefined8 local_140;
  float local_138;
  float local_134;
  float local_130;
  undefined8 local_12c;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  byte local_10c;
  undefined2 local_10b;
  byte local_109;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  char local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar15 = *(longlong *)(param_1 + 0x208);
  bVar5 = *(byte *)(lVar15 + 0x39);
  if ((*param_3 & bVar5) == 0) goto LAB_140252ae0;
  fVar20 = *(float *)(param_1 + 0x218);
  fVar16 = *(float *)(param_1 + 0x220);
  fVar21 = fVar20;
  fVar19 = fVar16;
  if (DAT_14c96b1e0 != '\x01') {
    fVar21 = fVar16;
    fVar19 = fVar20;
  }
  fVar18 = *(float *)(param_1 + 0x21c);
  fVar17 = (float)*(double *)(param_1 + 0x230);
  fVar3 = *(float *)(param_1 + 0x224);
  fVar4 = *param_2;
  fVar20 = fVar20 + fVar16;
  iVar6 = *(int *)(param_1 + 0x228);
  if (DAT_14c96b1e0 == '\x01') {
    if (iVar6 == 0) goto LAB_1402528d1;
    if (iVar6 == 3) {
      pfVar10 = (float *)&DAT_14c84635c;
      if ((*(byte *)(lVar15 + 0x31) & 0x20) != 0) {
        pfVar10 = (float *)(lVar15 + 0x168);
      }
      local_170 = fVar17 * *pfVar10;
      if (fVar4 - fVar20 <= fVar17 * *pfVar10) {
        local_170 = fVar4 - fVar20;
      }
      fVar19 = fVar16;
      if (local_170 <= 0.0) {
        local_170 = 0.0;
      }
    }
    else {
      if (iVar6 != 1) goto LAB_140252ec2;
      pfVar10 = (float *)&DAT_14c84635c;
      if ((*(byte *)(lVar15 + 0x31) & 0x20) != 0) {
        pfVar10 = (float *)(lVar15 + 0x168);
      }
      local_170 = fVar17 * *pfVar10;
      if (fVar4 - fVar20 <= fVar17 * *pfVar10) {
        local_170 = fVar4 - fVar20;
      }
      if (local_170 <= 0.0) {
        local_170 = 0.0;
      }
LAB_140252eb2:
      fVar19 = (fVar4 - local_170) - fVar21;
    }
  }
  else if (iVar6 == 0) {
LAB_1402528d1:
    local_170 = (fVar4 - fVar20) * fVar17;
    if (local_170 <= 0.0) {
      local_170 = 0.0;
    }
  }
  else {
LAB_140252ec2:
    pfVar10 = (float *)&DAT_14c84635c;
    if ((*(byte *)(lVar15 + 0x31) & 0x20) != 0) {
      pfVar10 = (float *)(lVar15 + 0x168);
    }
    fVar20 = fVar4 - fVar20;
    local_170 = *pfVar10 * fVar17;
    if (fVar20 <= *pfVar10 * fVar17) {
      local_170 = fVar20;
    }
    if (local_170 <= 0.0) {
      local_170 = 0.0;
    }
    if (iVar6 != 1) {
      if (iVar6 == 3) goto LAB_140252eb2;
      if (iVar6 == 2) {
        fVar19 = (fVar19 + (fVar4 - local_170) * 0.5) - fVar21;
      }
      else {
        local_170 = fVar20 * fVar17;
        if (local_170 <= 0.0) {
          local_170 = 0.0;
        }
      }
    }
  }
  fVar16 = (float)*(double *)(param_1 + 0x238);
  fVar20 = param_2[1];
  iVar6 = *(int *)(param_1 + 0x22c);
  if (iVar6 == 0) {
    fStack_16c = (fVar20 - (fVar18 + fVar3)) * fVar16;
    if (fStack_16c <= 0.0) {
      fStack_16c = 0.0;
    }
  }
  else {
    puVar11 = &DAT_14c84635c;
    if ((*(byte *)(lVar15 + 0x31) & 0x20) != 0) {
      puVar11 = (undefined8 *)(lVar15 + 0x168);
    }
    fStack_16c = *(float *)((longlong)puVar11 + 4) * fVar16;
    fVar21 = fVar20 - (fVar18 + fVar3);
    if (fVar21 <= fStack_16c) {
      fStack_16c = fVar21;
    }
    if (fStack_16c <= 0.0) {
      fStack_16c = 0.0;
    }
    if (iVar6 != 1) {
      if (iVar6 == 3) {
        fVar18 = (fVar20 - fStack_16c) - fVar3;
      }
      else if (iVar6 == 2) {
        fVar18 = (fVar18 + (fVar20 - fStack_16c) * 0.5) - fVar3;
      }
      else {
        fStack_16c = fVar21 * fVar16;
        if (fStack_16c <= 0.0) {
          fStack_16c = 0.0;
        }
      }
    }
  }
  local_164 = 0x3f800000;
  uVar12 = CONCAT44(fVar18,fVar19);
  local_f0 = *(char *)(lVar15 + 0x198);
  local_160 = uVar12;
  if (DAT_14c96b1e0 == '\0') {
    if (local_f0 != '\0') {
      local_f8 = *(ulonglong *)(lVar15 + 400);
      local_108 = *(undefined8 *)(lVar15 + 0x180);
      uStack_100 = *(undefined8 *)(lVar15 + 0x188);
      goto LAB_140252c71;
    }
LAB_140252961:
    bVar8 = *(byte *)(param_2 + 0xd) & 1;
    fVar20 = param_2[2];
    fVar16 = param_2[7];
    fVar21 = param_2[8];
    fVar3 = param_2[10];
    fVar4 = param_2[9];
    fVar17 = fVar19 * fVar21 + fVar18 * fVar3 + param_2[0xc];
    fVar22 = fVar19 * fVar16 + fVar18 * fVar4 + param_2[0xb];
    uVar13 = CONCAT44(fStack_16c,local_170);
    fVar23 = fVar21 * 0.0 + fVar3;
    fVar24 = fVar16 * 0.0 + fVar4;
    fVar21 = fVar3 * 0.0 + fVar21;
    fVar16 = fVar4 * 0.0 + fVar16;
    fVar18 = fVar18 * fVar20 + param_2[4];
    fVar19 = fVar19 * fVar20 + param_2[3];
    plVar9 = *(longlong **)(param_1 + 0x210);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      goto LAB_140252a1d;
    }
    plVar9 = (longlong *)0x0;
LAB_140252a33:
    iVar6 = *(int *)(param_3 + 0x130);
    lVar14 = (longlong)iVar6;
    *(uint *)(param_3 + 0x130) = iVar6 + 1U;
    if (*(uint *)(param_3 + 0x134) < iVar6 + 1U) {
      FUN_14022ed06(param_3 + 8,iVar6);
    }
    pbVar7 = param_3 + 8;
    if (*(byte **)(param_3 + 0x128) != (byte *)0x0) {
      pbVar7 = *(byte **)(param_3 + 0x128);
    }
    *(undefined8 *)(pbVar7 + lVar14 * 0x48) = uVar13;
    *(float *)(pbVar7 + lVar14 * 0x48 + 8) = fVar20;
    *(float *)(pbVar7 + lVar14 * 0x48 + 0xc) = fVar19;
    *(float *)(pbVar7 + lVar14 * 0x48 + 0x10) = fVar18;
    *(undefined8 *)(pbVar7 + lVar14 * 0x48 + 0x14) = uVar12;
    *(float *)(pbVar7 + lVar14 * 0x48 + 0x1c) = fVar16;
    *(float *)(pbVar7 + lVar14 * 0x48 + 0x20) = fVar21;
    *(float *)(pbVar7 + lVar14 * 0x48 + 0x24) = fVar24;
    *(float *)(pbVar7 + lVar14 * 0x48 + 0x28) = fVar23;
    *(float *)(pbVar7 + lVar14 * 0x48 + 0x2c) = fVar22;
    *(float *)(pbVar7 + lVar14 * 0x48 + 0x30) = fVar17;
    pbVar7[lVar14 * 0x48 + 0x34] = bVar8;
    *(undefined2 *)(pbVar7 + lVar14 * 0x48 + 0x35) = local_144;
    pbVar7[lVar14 * 0x48 + 0x37] = local_142;
    *(longlong *)(pbVar7 + lVar14 * 0x48 + 0x38) = lVar15;
    *(longlong **)(pbVar7 + lVar14 * 0x48 + 0x40) = plVar9;
    if (plVar9 == (longlong *)0x0) goto LAB_140252ae0;
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  else {
    if (local_f0 == '\0') goto LAB_140252961;
    local_108 = *(undefined8 *)(lVar15 + 0x180);
    uStack_100 = *(undefined8 *)(lVar15 + 0x188);
    local_f8 = *(ulonglong *)(lVar15 + 400) ^ 0x80000000;
LAB_140252c71:
    fVar20 = (float)*(double *)(lVar15 + 0x170);
    if (DAT_14c96b1e0 != '\0') {
      fVar20 = (0.5 - fVar20) + 0.5;
    }
    local_158 = CONCAT44((float)*(double *)(lVar15 + 0x178),fVar20);
    local_188 = &local_158;
    local_178 = param_2 + 7;
    local_14c = *(undefined8 *)(param_2 + 3);
    local_150 = param_2[2];
    local_180 = &local_150;
    FUN_146978c22(&local_140,&local_170,&local_164,&local_108);
    lVar15 = *(longlong *)(param_1 + 0x208);
    plVar9 = *(longlong **)(param_1 + 0x210);
    bVar8 = local_10c;
    if (plVar9 == (longlong *)0x0) {
      local_144 = local_10b;
      local_142 = local_109;
    }
    else {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      local_144 = local_10b;
      local_142 = local_109;
      uVar12 = local_12c;
      uVar13 = local_140;
      fVar18 = local_130;
      fVar19 = local_134;
      fVar20 = local_138;
      fVar21 = local_120;
      fVar16 = local_124;
      fVar17 = local_110;
      fVar22 = local_114;
      fVar23 = local_118;
      fVar24 = local_11c;
LAB_140252a1d:
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      local_12c = uVar12;
      local_140 = uVar13;
      local_130 = fVar18;
      local_134 = fVar19;
      local_138 = fVar20;
      local_120 = fVar21;
      local_124 = fVar16;
      local_110 = fVar17;
      local_114 = fVar22;
      local_118 = fVar23;
      local_11c = fVar24;
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
    }
    uVar12 = local_12c;
    uVar13 = local_140;
    fVar18 = local_130;
    fVar19 = local_134;
    fVar20 = local_138;
    fVar21 = local_120;
    fVar16 = local_124;
    fVar17 = local_110;
    fVar22 = local_114;
    fVar23 = local_118;
    fVar24 = local_11c;
    if ((*param_3 & bVar5) != 0) goto LAB_140252a33;
    if (plVar9 == (longlong *)0x0) goto LAB_140252ae0;
  }
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
LAB_140252ae0:
  if ((local_e0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140252f5e FUN_140252f5e body=6555 status=ok
// SIG undefined FUN_140252f5e(void)

void FUN_140252f5e(longlong param_1,float *param_2,byte *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  ulonglong uVar11;
  byte bVar12;
  undefined8 uVar13;
  byte *pbVar14;
  undefined8 uVar15;
  longlong lVar16;
  bool bVar17;
  undefined8 *puVar18;
  float *pfVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined8 uVar22;
  int iVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_438 [32];
  undefined8 *local_418;
  undefined8 *local_410;
  float *local_408;
  char local_3f5;
  float local_3f4;
  int local_3f0;
  float local_3ec;
  longlong local_3e8;
  byte *local_3e0;
  float *local_3d8;
  byte *local_3d0;
  float *local_3c8;
  float *local_3c0;
  float local_3b8;
  undefined4 local_3b4;
  float local_3b0;
  undefined4 local_3ac;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined1 local_390 [12];
  undefined4 local_384;
  float local_380;
  float local_37c;
  undefined8 local_378;
  undefined4 local_36c;
  undefined8 local_368;
  undefined1 local_360 [512];
  undefined1 *local_160;
  uint local_158;
  uint local_154;
  undefined8 local_150;
  float local_148;
  float local_144;
  float local_140;
  undefined8 local_13c;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  byte local_11c;
  undefined2 local_11b;
  undefined1 local_119;
  undefined8 local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  char local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_438;
  iVar23 = *(int *)(param_1 + 0x200);
  local_3f5 = DAT_14c96b1e0;
  local_3e0 = param_3;
  if (*(int *)(param_1 + 0x208) == 0) {
    if (iVar23 == 0) goto LAB_1402544d8;
    local_160 = (undefined1 *)0x0;
    local_154 = 0x10;
    local_3e8 = param_1;
    local_3d8 = param_2;
    if (iVar23 < 0) goto LAB_14025455e;
    local_158 = 0;
    if (iVar23 != 0x10) {
      FUN_14287a854(local_360);
    }
    do {
      lVar21 = (longlong)(int)local_158;
      local_158 = local_158 + 1;
      if (local_154 < local_158) {
        FUN_14287a9b2(local_360);
      }
      puVar9 = local_160;
      if (local_160 == (undefined1 *)0x0) {
        puVar9 = local_360;
      }
      lVar21 = lVar21 * 0x20;
      *(undefined8 *)(puVar9 + lVar21 + 9) = 0;
      *(undefined8 *)((longlong)(puVar9 + lVar21 + 9) + 8) = 0;
      *(undefined8 *)(puVar9 + lVar21) = 0;
      *(undefined8 *)((longlong)(puVar9 + lVar21) + 8) = 0;
      *(undefined4 *)(puVar9 + lVar21 + 0x1c) = 0;
      iVar23 = iVar23 + -1;
    } while (iVar23 != 0);
    if (0 < *(int *)(local_3e8 + 0x200)) {
      lVar21 = 0;
      lVar16 = 0;
      fVar28 = 0.0;
      fVar27 = 0.0;
      fVar29 = 0.0;
      fVar25 = 0.0;
      bVar17 = false;
      bVar6 = 0;
      bVar12 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(local_3e8 + 0x1f8) + lVar16 * 8);
        lVar4 = *(longlong *)(lVar3 + 0x10);
        if (*(byte *)(lVar4 + 0x39) != DAT_14c96b1e1) {
          pfVar19 = (float *)&DAT_14c84635c;
          if ((*(byte *)(lVar4 + 0x31) & 0x20) != 0) {
            pfVar19 = (float *)(lVar4 + 0x168);
          }
          fVar26 = *(float *)(lVar3 + 0x4c);
          fVar29 = fVar29 + *(float *)(lVar3 + 0x28) + *(float *)(lVar3 + 0x30);
          fVar32 = *pfVar19;
          fVar33 = *(float *)(lVar3 + 0x50);
          puVar9 = local_160;
          if (local_160 == (undefined1 *)0x0) {
            puVar9 = local_360;
          }
          *(float *)(puVar9 + lVar21 + 8) = fVar26;
          *(float *)(puVar9 + lVar21 + 0xc) = fVar33;
          iVar23 = *(int *)(lVar3 + 0x40);
          *(int *)(puVar9 + lVar21 + 0x1c) = iVar23;
          fVar33 = (float)(~-(uint)(0.0 < fVar33) & 0x7f7fffff |
                          (uint)fVar33 & -(uint)(0.0 < fVar33));
          if (fVar26 <= 0.0) {
            fVar26 = 0.0;
          }
          if (fVar33 <= fVar32) {
            fVar32 = fVar33;
          }
          if (fVar32 <= fVar26) {
            fVar32 = fVar26;
          }
          if (iVar23 == 2) {
            fVar26 = 0.0;
            if (0.0 <= *(float *)(lVar3 + 0x44)) {
              fVar26 = *(float *)(lVar3 + 0x44);
            }
            *(float *)(puVar9 + lVar21 + 0x10) = fVar26;
            fVar33 = 0.0;
            if (0.0 <= *(float *)(lVar3 + 0x48)) {
              fVar33 = *(float *)(lVar3 + 0x48);
            }
            *(float *)(puVar9 + lVar21 + 0x14) = fVar33;
            *(float *)(puVar9 + lVar21) = fVar32;
            *(float *)(puVar9 + lVar21 + 4) = fVar32;
            fVar28 = fVar28 + fVar26;
            fVar27 = fVar27 + fVar33;
            fVar25 = fVar25 + fVar32;
            bVar6 = 1;
          }
          else if (iVar23 == 1) {
            fVar26 = *(float *)(lVar3 + 0x44);
            *(float *)(puVar9 + lVar21 + 0x10) = fVar26;
            *(float *)(puVar9 + lVar21 + 0x14) = fVar26;
            *(undefined8 *)(puVar9 + lVar21) = 0;
            fVar28 = fVar28 + fVar26;
            fVar27 = fVar27 + fVar26;
            fVar25 = fVar25 + fVar32;
            bVar12 = 1;
          }
          else {
            fVar29 = fVar29 + fVar32;
            *(undefined8 *)(puVar9 + lVar21 + 0x10) = 0;
            *(float *)(puVar9 + lVar21) = fVar32;
            *(float *)(puVar9 + lVar21 + 4) = fVar32;
          }
          bVar17 = true;
        }
        lVar16 = lVar16 + 1;
        lVar21 = lVar21 + 0x20;
      } while (lVar16 < *(int *)(local_3e8 + 0x200));
      if (bVar17) {
        fVar26 = 0.0;
        if (0.0 <= *local_3d8 - fVar29) {
          fVar26 = *local_3d8 - fVar29;
        }
        if ((bool)(bVar12 & 0.0 < fVar28)) {
          puVar9 = local_160;
          if (local_160 == (undefined1 *)0x0) {
            puVar9 = local_360;
          }
          lVar21 = (longlong)(int)local_158;
          fVar29 = 0.0;
          if (lVar21 != 0) {
            lVar16 = 0;
            do {
              if (*(int *)(puVar9 + lVar16 + 0x1c) == 1) {
                fVar30 = (*(float *)(puVar9 + lVar16 + 0x10) * fVar26) / fVar28;
                fVar32 = *(float *)(puVar9 + lVar16 + 8);
                uVar24 = -(uint)(0.0 < *(float *)(puVar9 + lVar16 + 0xc));
                fVar33 = (float)(~uVar24 & 0x7f7fffff |
                                (uint)*(float *)(puVar9 + lVar16 + 0xc) & uVar24);
                if (fVar32 <= 0.0) {
                  fVar32 = 0.0;
                }
                if (fVar33 <= fVar30) {
                  fVar30 = fVar33;
                }
                if (fVar30 <= fVar32) {
                  fVar30 = fVar32;
                }
                *(float *)(puVar9 + lVar16) = fVar30;
                fVar29 = fVar29 + fVar30;
              }
              lVar16 = lVar16 + 0x20;
            } while (lVar21 * 0x20 != lVar16);
          }
          fVar26 = fVar26 - fVar29;
        }
        if (fVar25 < fVar26) {
          fVar27 = fVar28;
        }
        if ((bool)(bVar6 & 0.0 < fVar27)) {
          puVar9 = local_160;
          if (local_160 == (undefined1 *)0x0) {
            puVar9 = local_360;
          }
          lVar21 = (longlong)(int)local_158;
          fVar27 = fVar26;
          if (lVar21 == 0) {
            iVar23 = 0;
          }
          else {
            lVar16 = 0;
            iVar23 = 0;
            do {
              if (*(int *)(puVar9 + lVar16 + 0x1c) == 2) {
                fVar27 = fVar27 - *(float *)(puVar9 + lVar16);
                iVar23 = iVar23 + 1;
                puVar9[lVar16 + 0x18] =
                     puVar9[lVar16 + 0x18] |
                     ABS(*(float *)(puVar9 + lVar16 + (ulonglong)(fVar26 <= fVar25) * 4 + 0x10)) <=
                     1e-08;
              }
              lVar16 = lVar16 + 0x20;
            } while (lVar21 * 0x20 != lVar16);
          }
          iVar7 = 5;
          if (iVar23 < 5) {
            iVar7 = iVar23;
          }
          if ((0 < iVar23) && (1e-08 < ABS(fVar27))) {
            iVar23 = 0;
            while( true ) {
              puVar9 = local_160;
              if (local_160 == (undefined1 *)0x0) {
                puVar9 = local_360;
              }
              if ((longlong)(int)local_158 == 0) break;
              lVar21 = (longlong)(int)local_158 * 0x20;
              fVar28 = 0.0;
              lVar16 = 0;
              fVar29 = 0.0;
              do {
                if ((*(int *)(puVar9 + lVar16 + 0x1c) == 2) && (puVar9[lVar16 + 0x18] == '\0')) {
                  fVar28 = fVar28 + *(float *)(puVar9 + lVar16 + 0x10);
                  fVar29 = fVar29 + *(float *)(puVar9 + lVar16 + 0x14) *
                                    *(float *)(puVar9 + lVar16 + 4);
                }
                lVar16 = lVar16 + 0x20;
              } while (lVar21 != lVar16);
              if ((float)(~-(uint)(fVar25 < fVar26) & (uint)fVar29 |
                         -(uint)(fVar25 < fVar26) & (uint)fVar28) < 0.0001) break;
              fVar32 = 0.0;
              lVar16 = 0;
              do {
                if ((*(int *)(puVar9 + lVar16 + 0x1c) == 2) && (puVar9[lVar16 + 0x18] == '\0')) {
                  if (fVar26 <= fVar25) {
                    fVar33 = (*(float *)(puVar9 + lVar16 + 0x14) * *(float *)(puVar9 + lVar16 + 4))
                             / fVar29;
                  }
                  else {
                    fVar33 = *(float *)(puVar9 + lVar16 + 0x10) / fVar28;
                  }
                  fVar33 = fVar33 * fVar27;
                  if (ABS(fVar33) <= 1e-08) {
                    puVar9[lVar16 + 0x18] = 1;
                  }
                  else {
                    fVar30 = *(float *)(puVar9 + lVar16);
                    fVar35 = *(float *)(puVar9 + lVar16 + 8);
                    fVar31 = fVar33 + fVar30;
                    if ((fVar31 <= fVar35) ||
                       ((fVar35 = *(float *)(puVar9 + lVar16 + 0xc), 0.0 < fVar35 &&
                        (fVar35 <= fVar31)))) {
                      *(float *)(puVar9 + lVar16) = fVar35;
                      fVar33 = fVar35 - fVar30;
                      puVar9[lVar16 + 0x18] = 1;
                    }
                    else {
                      *(float *)(puVar9 + lVar16) = fVar31;
                    }
                    fVar32 = fVar32 + fVar33;
                  }
                }
                lVar16 = lVar16 + 0x20;
              } while (lVar21 != lVar16);
              iVar23 = iVar23 + 1;
              if ((iVar7 <= iVar23) || (fVar27 = fVar27 - fVar32, ABS(fVar27) <= 1e-08)) break;
            }
          }
        }
        uVar24 = 0;
        if (local_3f5 == '\x01') {
          uVar24 = *(int *)(local_3e8 + 0x200) - 1;
        }
        if ((int)uVar24 < *(int *)(local_3e8 + 0x200) && -1 < (int)uVar24) {
          local_3c0 = local_3d8 + 7;
          local_3d0 = local_3e0 + 8;
          local_3f0 = ((local_3f5 != '\x01') - 1) + (uint)(local_3f5 != '\x01');
          local_3ec = 0.0;
          do {
            puVar9 = local_160;
            if (local_160 == (undefined1 *)0x0) {
              puVar9 = local_360;
            }
            lVar21 = *(longlong *)(*(longlong *)(local_3e8 + 0x1f8) + (ulonglong)uVar24 * 8);
            lVar16 = *(longlong *)(lVar21 + 0x10);
            bVar6 = *(byte *)(lVar16 + 0x39);
            local_3a8 = *(undefined8 *)(lVar21 + 0x28);
            uStack_3a0 = *(undefined8 *)(lVar21 + 0x30);
            fVar27 = (float)local_3a8;
            fVar25 = (float)uStack_3a0;
            if (local_3f5 == '\x01') {
              local_3a8._4_4_ = (float)((ulonglong)local_3a8 >> 0x20);
              local_3a8 = CONCAT44(local_3a8._4_4_,(float)uStack_3a0);
              uStack_3a0._4_4_ = (float)((ulonglong)uStack_3a0 >> 0x20);
              uStack_3a0 = CONCAT44(uStack_3a0._4_4_,fVar27);
            }
            fVar28 = local_3d8[1];
            fVar27 = *(float *)(puVar9 + (ulonglong)uVar24 * 0x20) + fVar27 + fVar25;
            local_150._0_2_ = 0;
            local_150._2_1_ = 0x80;
            local_150._3_1_ = 0x3f;
            local_3c8 = (float *)CONCAT44(local_3c8._4_4_,fVar27);
            local_418 = &local_3a8;
            local_410 = &local_150;
            FUN_140254a95(&local_3b0,
                          CONCAT71((int7)((ulonglong)*(longlong *)(local_3e8 + 0x1f8) >> 8),
                                   local_3f5),fVar27,lVar21);
            local_150._0_2_ = 0;
            local_150._2_1_ = 0x80;
            local_150._3_1_ = 0x3f;
            local_418 = &local_150;
            FUN_1402548fa(&local_3b8,fVar28,lVar21,&local_3a8);
            fVar27 = local_3b8;
            fVar25 = local_3b0 + local_3ec + 0.0;
            local_384 = 0x3f800000;
            local_37c = local_3b8;
            uVar15 = CONCAT44(local_3b4,local_3ac);
            local_100 = *(char *)(lVar16 + 0x198);
            local_380 = fVar25;
            if (DAT_14c96b1e0 == '\0') {
              if (local_100 == '\0') goto LAB_140253ff9;
              local_108 = *(ulonglong *)(lVar16 + 400);
              local_118 = *(undefined8 *)(lVar16 + 0x180);
              uStack_110 = *(undefined8 *)(lVar16 + 0x188);
LAB_1402542a4:
              fVar27 = (float)*(double *)(*(longlong *)(lVar21 + 0x10) + 0x170);
              if (DAT_14c96b1e0 != '\0') {
                fVar27 = (0.5 - fVar27) + 0.5;
              }
              local_378 = CONCAT44((float)*(double *)(*(longlong *)(lVar21 + 0x10) + 0x178),fVar27);
              local_368 = *(undefined8 *)(local_3d8 + 3);
              local_36c = local_3d8[2];
              local_408 = local_3c0;
              local_410 = (undefined8 *)&local_36c;
              local_418 = &local_378;
              FUN_146978c22(&local_150,local_390,&local_384,&local_118);
              bVar12 = local_11c;
              fVar31 = local_120;
              fVar35 = local_124;
              fVar25 = local_128;
              fVar27 = local_12c;
              fVar29 = local_130;
              fVar28 = local_134;
              uVar22 = local_13c;
              fVar30 = local_140;
              fVar33 = local_144;
              uVar13 = *(undefined8 *)(lVar21 + 0x10);
              plVar20 = *(longlong **)(lVar21 + 0x18);
              if (plVar20 == (longlong *)0x0) {
                uVar15 = CONCAT44(local_150._4_4_,
                                  CONCAT13(local_150._3_1_,
                                           CONCAT12(local_150._2_1_,(undefined2)local_150)));
                local_3f4 = local_148;
                local_36c._0_3_ = CONCAT12(local_119,local_11b);
              }
              else {
                LOCK();
                *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
                UNLOCK();
                uVar15 = CONCAT44(local_150._4_4_,
                                  CONCAT13(local_150._3_1_,
                                           CONCAT12(local_150._2_1_,(undefined2)local_150)));
                local_3f4 = local_148;
                local_36c._0_3_ = CONCAT12(local_119,local_11b);
                LOCK();
                *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
                UNLOCK();
                LOCK();
                plVar1 = plVar20 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar20)(plVar20);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar20 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar20 + 0x10))(plVar20);
                  }
                }
              }
            }
            else {
              if (local_100 != '\0') {
                local_118 = *(undefined8 *)(lVar16 + 0x180);
                uStack_110 = *(undefined8 *)(lVar16 + 0x188);
                local_108 = *(ulonglong *)(lVar16 + 400) ^ 0x80000000;
                goto LAB_1402542a4;
              }
LAB_140253ff9:
              fVar28 = local_3d8[7];
              fVar29 = local_3d8[8];
              fVar26 = local_3d8[10];
              fVar32 = local_3d8[9];
              fVar31 = fVar25 * fVar29 + fVar26 * local_3b8 + local_3d8[0xc];
              fVar35 = fVar25 * fVar28 + fVar32 * local_3b8 + local_3d8[0xb];
              local_3f4 = local_3d8[2];
              fVar30 = local_3b8 * local_3f4 + local_3d8[4];
              fVar33 = fVar25 * local_3f4 + local_3d8[3];
              bVar12 = *(byte *)(local_3d8 + 0xd);
              uVar13 = *(undefined8 *)(lVar21 + 0x10);
              plVar20 = *(longlong **)(lVar21 + 0x18);
              if (plVar20 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
                UNLOCK();
                local_36c = (float)CONCAT22(CONCAT11(local_36c._3_1_,local_150._2_1_),
                                            (undefined2)local_150);
                LOCK();
                *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
                UNLOCK();
                LOCK();
                plVar1 = plVar20 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar20)(plVar20);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar20 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar20 + 0x10))(plVar20);
                  }
                }
              }
              uVar22 = CONCAT44(fVar27,fVar25);
              bVar12 = bVar12 & 1;
              fVar25 = fVar29 * 0.0 + fVar26;
              fVar27 = fVar28 * 0.0 + fVar32;
              fVar29 = fVar26 * 0.0 + fVar29;
              fVar28 = fVar32 * 0.0 + fVar28;
            }
            if ((*local_3e0 & bVar6) == 0) {
              if (plVar20 != (longlong *)0x0) goto LAB_1402541de;
            }
            else {
              iVar23 = *(int *)(local_3e0 + 0x130);
              lVar21 = (longlong)iVar23;
              *(uint *)(local_3e0 + 0x130) = iVar23 + 1U;
              if (*(uint *)(local_3e0 + 0x134) < iVar23 + 1U) {
                FUN_14022ed06(local_3d0,iVar23);
              }
              pbVar10 = *(byte **)(local_3e0 + 0x128);
              if (*(byte **)(local_3e0 + 0x128) == (byte *)0x0) {
                pbVar10 = local_3d0;
              }
              *(undefined8 *)(pbVar10 + lVar21 * 0x48) = uVar15;
              *(float *)(pbVar10 + lVar21 * 0x48 + 8) = local_3f4;
              *(float *)(pbVar10 + lVar21 * 0x48 + 0xc) = fVar33;
              *(float *)(pbVar10 + lVar21 * 0x48 + 0x10) = fVar30;
              *(undefined8 *)(pbVar10 + lVar21 * 0x48 + 0x14) = uVar22;
              *(float *)(pbVar10 + lVar21 * 0x48 + 0x1c) = fVar28;
              *(float *)(pbVar10 + lVar21 * 0x48 + 0x20) = fVar29;
              *(float *)(pbVar10 + lVar21 * 0x48 + 0x24) = fVar27;
              *(float *)(pbVar10 + lVar21 * 0x48 + 0x28) = fVar25;
              *(float *)(pbVar10 + lVar21 * 0x48 + 0x2c) = fVar35;
              *(float *)(pbVar10 + lVar21 * 0x48 + 0x30) = fVar31;
              pbVar10[lVar21 * 0x48 + 0x34] = bVar12;
              *(undefined2 *)(pbVar10 + lVar21 * 0x48 + 0x35) = (undefined2)local_36c;
              pbVar10[lVar21 * 0x48 + 0x37] = local_36c._2_1_;
              *(undefined8 *)(pbVar10 + lVar21 * 0x48 + 0x38) = uVar13;
              *(longlong **)(pbVar10 + lVar21 * 0x48 + 0x40) = plVar20;
              if (plVar20 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
                UNLOCK();
LAB_1402541de:
                LOCK();
                plVar1 = plVar20 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar20)(plVar20);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar20 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar20 + 0x10))(plVar20);
                  }
                }
              }
            }
            if (bVar6 != DAT_14c96b1e1) {
              local_3ec = local_3ec + local_3c8._0_4_;
            }
            uVar24 = uVar24 + local_3f0;
          } while ((-1 < (int)uVar24) && ((int)uVar24 < *(int *)(local_3e8 + 0x200)));
        }
      }
    }
  }
  else {
    if (iVar23 == 0) goto LAB_1402544d8;
    local_160 = (undefined1 *)0x0;
    local_154 = 0x10;
    if (iVar23 < 0) {
LAB_14025455e:
      local_154 = 0x10;
      local_160 = (undefined1 *)0x0;
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar23);
    }
    local_158 = 0;
    if (iVar23 != 0x10) {
      FUN_1402549c6(local_360);
    }
    do {
      lVar21 = (longlong)(int)local_158;
      local_158 = local_158 + 1;
      if (local_154 < local_158) {
        FUN_14287ab2a(local_360);
      }
      puVar9 = local_160;
      if (local_160 == (undefined1 *)0x0) {
        puVar9 = local_360;
      }
      lVar21 = lVar21 * 0x20;
      *(undefined8 *)(puVar9 + lVar21 + 9) = 0;
      *(undefined8 *)((longlong)(puVar9 + lVar21 + 9) + 8) = 0;
      *(undefined8 *)(puVar9 + lVar21) = 0;
      *(undefined8 *)((longlong)(puVar9 + lVar21) + 8) = 0;
      *(undefined4 *)(puVar9 + lVar21 + 0x1c) = 0;
      iVar23 = iVar23 + -1;
    } while (iVar23 != 0);
    if (0 < *(int *)(param_1 + 0x200)) {
      lVar21 = 0;
      lVar16 = 0;
      fVar28 = 0.0;
      fVar27 = 0.0;
      fVar29 = 0.0;
      fVar25 = 0.0;
      bVar17 = false;
      bVar6 = 0;
      bVar12 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar16 * 8);
        lVar4 = *(longlong *)(lVar3 + 0x10);
        if (*(byte *)(lVar4 + 0x39) != DAT_14c96b1e1) {
          puVar18 = &DAT_14c84635c;
          if ((*(byte *)(lVar4 + 0x31) & 0x20) != 0) {
            puVar18 = (undefined8 *)(lVar4 + 0x168);
          }
          fVar26 = *(float *)(lVar3 + 0x4c);
          fVar29 = fVar29 + *(float *)(lVar3 + 0x2c) + *(float *)(lVar3 + 0x34);
          fVar32 = *(float *)((longlong)puVar18 + 4);
          fVar33 = *(float *)(lVar3 + 0x50);
          puVar9 = local_160;
          if (local_160 == (undefined1 *)0x0) {
            puVar9 = local_360;
          }
          *(float *)(puVar9 + lVar21 + 8) = fVar26;
          *(float *)(puVar9 + lVar21 + 0xc) = fVar33;
          iVar23 = *(int *)(lVar3 + 0x40);
          *(int *)(puVar9 + lVar21 + 0x1c) = iVar23;
          fVar33 = (float)(~-(uint)(0.0 < fVar33) & 0x7f7fffff |
                          (uint)fVar33 & -(uint)(0.0 < fVar33));
          if (fVar26 <= 0.0) {
            fVar26 = 0.0;
          }
          if (fVar33 <= fVar32) {
            fVar32 = fVar33;
          }
          if (fVar32 <= fVar26) {
            fVar32 = fVar26;
          }
          if (iVar23 == 1) {
            fVar26 = *(float *)(lVar3 + 0x44);
            *(float *)(puVar9 + lVar21 + 0x10) = fVar26;
            *(float *)(puVar9 + lVar21 + 0x14) = fVar26;
            *(undefined8 *)(puVar9 + lVar21) = 0;
            fVar28 = fVar28 + fVar26;
            fVar27 = fVar27 + fVar26;
            fVar25 = fVar25 + fVar32;
            bVar12 = 1;
          }
          else if (iVar23 == 2) {
            fVar26 = 0.0;
            if (0.0 <= *(float *)(lVar3 + 0x44)) {
              fVar26 = *(float *)(lVar3 + 0x44);
            }
            *(float *)(puVar9 + lVar21 + 0x10) = fVar26;
            fVar33 = 0.0;
            if (0.0 <= *(float *)(lVar3 + 0x48)) {
              fVar33 = *(float *)(lVar3 + 0x48);
            }
            *(float *)(puVar9 + lVar21 + 0x14) = fVar33;
            *(float *)(puVar9 + lVar21) = fVar32;
            *(float *)(puVar9 + lVar21 + 4) = fVar32;
            fVar28 = fVar28 + fVar26;
            fVar27 = fVar27 + fVar33;
            fVar25 = fVar25 + fVar32;
            bVar6 = 1;
          }
          else {
            fVar29 = fVar29 + fVar32;
            *(undefined8 *)(puVar9 + lVar21 + 0x10) = 0;
            *(float *)(puVar9 + lVar21) = fVar32;
            *(float *)(puVar9 + lVar21 + 4) = fVar32;
          }
          bVar17 = true;
        }
        lVar16 = lVar16 + 1;
        lVar21 = lVar21 + 0x20;
      } while (lVar16 < *(int *)(param_1 + 0x200));
      if (bVar17) {
        fVar26 = 0.0;
        if (0.0 <= param_2[1] - fVar29) {
          fVar26 = param_2[1] - fVar29;
        }
        if ((bool)(bVar12 & 0.0 < fVar28)) {
          puVar9 = local_160;
          if (local_160 == (undefined1 *)0x0) {
            puVar9 = local_360;
          }
          lVar21 = (longlong)(int)local_158;
          fVar29 = 0.0;
          if (lVar21 != 0) {
            lVar16 = 0;
            do {
              if (*(int *)(puVar9 + lVar16 + 0x1c) == 1) {
                fVar30 = (*(float *)(puVar9 + lVar16 + 0x10) * fVar26) / fVar28;
                fVar32 = *(float *)(puVar9 + lVar16 + 8);
                uVar24 = -(uint)(0.0 < *(float *)(puVar9 + lVar16 + 0xc));
                fVar33 = (float)(~uVar24 & 0x7f7fffff |
                                (uint)*(float *)(puVar9 + lVar16 + 0xc) & uVar24);
                if (fVar32 <= 0.0) {
                  fVar32 = 0.0;
                }
                if (fVar33 <= fVar30) {
                  fVar30 = fVar33;
                }
                if (fVar30 <= fVar32) {
                  fVar30 = fVar32;
                }
                *(float *)(puVar9 + lVar16) = fVar30;
                fVar29 = fVar29 + fVar30;
              }
              lVar16 = lVar16 + 0x20;
            } while (lVar21 * 0x20 != lVar16);
          }
          fVar26 = fVar26 - fVar29;
        }
        if (fVar25 < fVar26) {
          fVar27 = fVar28;
        }
        puVar9 = (undefined1 *)0x0;
        if ((bool)(bVar6 & 0.0 < fVar27)) {
          puVar8 = local_160;
          if (local_160 == (undefined1 *)0x0) {
            puVar8 = local_360;
          }
          lVar21 = (longlong)(int)local_158;
          fVar27 = fVar26;
          if (lVar21 == 0) {
            puVar9 = (undefined1 *)0x0;
          }
          else {
            lVar16 = 0;
            puVar9 = (undefined1 *)0x0;
            do {
              if (*(int *)(puVar8 + lVar16 + 0x1c) == 2) {
                fVar27 = fVar27 - *(float *)(puVar8 + lVar16);
                puVar9 = (undefined1 *)(ulonglong)((int)puVar9 + 1);
                puVar8[lVar16 + 0x18] =
                     puVar8[lVar16 + 0x18] |
                     ABS(*(float *)(puVar8 + lVar16 + (ulonglong)(fVar26 <= fVar25) * 4 + 0x10)) <=
                     1e-08;
              }
              lVar16 = lVar16 + 0x20;
            } while (lVar21 * 0x20 != lVar16);
          }
          puVar8 = (undefined1 *)0x5;
          if ((int)puVar9 < 5) {
            puVar8 = puVar9;
          }
          if ((0 < (int)puVar9) && (1e-08 < ABS(fVar27))) {
            iVar23 = 0;
            while( true ) {
              puVar9 = local_160;
              if (local_160 == (undefined1 *)0x0) {
                puVar9 = local_360;
              }
              if ((longlong)(int)local_158 == 0) break;
              lVar21 = (longlong)(int)local_158 * 0x20;
              fVar28 = 0.0;
              lVar16 = 0;
              fVar29 = 0.0;
              do {
                if ((*(int *)(puVar9 + lVar16 + 0x1c) == 2) && (puVar9[lVar16 + 0x18] == '\0')) {
                  fVar28 = fVar28 + *(float *)(puVar9 + lVar16 + 0x10);
                  fVar29 = fVar29 + *(float *)(puVar9 + lVar16 + 0x14) *
                                    *(float *)(puVar9 + lVar16 + 4);
                }
                lVar16 = lVar16 + 0x20;
              } while (lVar21 != lVar16);
              if ((float)(~-(uint)(fVar25 < fVar26) & (uint)fVar29 |
                         -(uint)(fVar25 < fVar26) & (uint)fVar28) < 0.0001) break;
              fVar32 = 0.0;
              lVar16 = 0;
              do {
                if ((*(int *)(puVar9 + lVar16 + 0x1c) == 2) && (puVar9[lVar16 + 0x18] == '\0')) {
                  if (fVar26 <= fVar25) {
                    fVar33 = (*(float *)(puVar9 + lVar16 + 0x14) * *(float *)(puVar9 + lVar16 + 4))
                             / fVar29;
                  }
                  else {
                    fVar33 = *(float *)(puVar9 + lVar16 + 0x10) / fVar28;
                  }
                  fVar33 = fVar33 * fVar27;
                  if (ABS(fVar33) <= 1e-08) {
                    puVar9[lVar16 + 0x18] = 1;
                  }
                  else {
                    fVar30 = *(float *)(puVar9 + lVar16);
                    fVar35 = *(float *)(puVar9 + lVar16 + 8);
                    fVar31 = fVar33 + fVar30;
                    if ((fVar31 <= fVar35) ||
                       ((fVar35 = *(float *)(puVar9 + lVar16 + 0xc), 0.0 < fVar35 &&
                        (fVar35 <= fVar31)))) {
                      *(float *)(puVar9 + lVar16) = fVar35;
                      fVar33 = fVar35 - fVar30;
                      puVar9[lVar16 + 0x18] = 1;
                    }
                    else {
                      *(float *)(puVar9 + lVar16) = fVar31;
                    }
                    fVar32 = fVar32 + fVar33;
                  }
                }
                lVar16 = lVar16 + 0x20;
              } while (lVar21 != lVar16);
              iVar23 = iVar23 + 1;
              if (((int)puVar8 <= iVar23) || (fVar27 = fVar27 - fVar32, ABS(fVar27) <= 1e-08))
              break;
            }
          }
        }
        if (0 < *(int *)(param_1 + 0x200)) {
          local_3c8 = param_2 + 7;
          lVar21 = 0;
          iVar23 = 0;
          fVar27 = 0.0;
          local_3e8 = param_1;
          do {
            puVar8 = local_160;
            if (local_160 == (undefined1 *)0x0) {
              puVar8 = local_360;
            }
            lVar16 = *(longlong *)(*(longlong *)(local_3e8 + 0x1f8) + lVar21);
            lVar3 = *(longlong *)(lVar16 + 0x10);
            local_3f4 = (float)CONCAT31(local_3f4._1_3_,*(undefined1 *)(lVar3 + 0x39));
            local_3a8 = *(undefined8 *)(lVar16 + 0x28);
            uStack_3a0 = *(undefined8 *)(lVar16 + 0x30);
            uVar15 = CONCAT71((int7)((ulonglong)puVar9 >> 8),local_3f5);
            if (local_3f5 == '\x01') {
              uVar5 = (float)local_3a8;
              local_3a8._4_4_ = (float)((ulonglong)local_3a8 >> 0x20);
              local_3a8 = CONCAT44(local_3a8._4_4_,(float)uStack_3a0);
              uStack_3a0._4_4_ = (float)((ulonglong)uStack_3a0 >> 0x20);
              uStack_3a0 = CONCAT44(uStack_3a0._4_4_,uVar5);
            }
            fVar29 = *(float *)(puVar8 + lVar21 * 4) + local_3a8._4_4_ + uStack_3a0._4_4_;
            local_150._0_2_ = 0;
            local_150._2_1_ = 0x80;
            local_150._3_1_ = 0x3f;
            local_418 = &local_3a8;
            local_410 = &local_150;
            FUN_140254a95(&local_3b0,uVar15,*param_2,lVar16);
            local_150._0_2_ = 0;
            local_150._2_1_ = 0x80;
            local_150._3_1_ = 0x3f;
            local_418 = &local_150;
            FUN_1402548fa(&local_3b8,fVar29,lVar16,&local_3a8);
            fVar25 = local_3b0;
            fVar28 = local_3b8 + fVar27 + 0.0;
            local_384 = 0x3f800000;
            local_380 = local_3b0;
            uVar13 = CONCAT44(local_3b4,local_3ac);
            local_100 = *(char *)(lVar3 + 0x198);
            local_3d8 = (float *)CONCAT44(local_3d8._4_4_,fVar27);
            local_3ec = fVar29;
            local_37c = fVar28;
            if (DAT_14c96b1e0 == '\0') {
              if (local_100 != '\0') {
                local_108 = *(ulonglong *)(lVar3 + 400);
                local_118 = *(undefined8 *)(lVar3 + 0x180);
                uStack_110 = *(undefined8 *)(lVar3 + 0x188);
                goto LAB_1402536cc;
              }
LAB_1402533fb:
              fVar27 = param_2[2];
              fVar29 = param_2[7];
              fVar26 = param_2[8];
              fVar32 = param_2[10];
              fVar33 = param_2[9];
              fVar34 = local_3b0 * fVar26 + fVar28 * fVar32 + param_2[0xc];
              fVar31 = local_3b0 * fVar29 + fVar28 * fVar33 + param_2[0xb];
              fVar35 = fVar28 * fVar27 + param_2[4];
              fVar30 = fVar27 * local_3b0 + param_2[3];
              bVar6 = *(byte *)(param_2 + 0xd);
              pbVar10 = *(byte **)(lVar16 + 0x10);
              plVar20 = *(longlong **)(lVar16 + 0x18);
              puVar9 = (undefined1 *)CONCAT71((int7)((ulonglong)uVar15 >> 8),local_3f4._0_1_);
              if (plVar20 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
                UNLOCK();
                local_36c = (float)CONCAT22(CONCAT11(local_36c._3_1_,local_150._2_1_),
                                            (undefined2)local_150);
                LOCK();
                *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
                UNLOCK();
                LOCK();
                plVar1 = plVar20 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  local_3f0 = CONCAT31(local_3f0._1_3_,bVar6);
                  (**(code **)*plVar20)(plVar20);
                  puVar9 = (undefined1 *)CONCAT71((int7)((ulonglong)puVar9 >> 8),local_3f4._0_1_);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar20 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  bVar6 = (byte)local_3f0;
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar20 + 0x10))(plVar20);
                    puVar9 = (undefined1 *)CONCAT71((int7)((ulonglong)puVar9 >> 8),local_3f4._0_1_);
                    bVar6 = (byte)local_3f0;
                  }
                }
              }
              uVar15 = CONCAT44(fVar28,fVar25);
              fVar28 = fVar26 * 0.0 + fVar32;
              fVar25 = fVar29 * 0.0 + fVar33;
              fVar26 = fVar32 * 0.0 + fVar26;
              fVar29 = fVar33 * 0.0 + fVar29;
              bVar6 = bVar6 & 1;
            }
            else {
              if (local_100 == '\0') goto LAB_1402533fb;
              local_118 = *(undefined8 *)(lVar3 + 0x180);
              uStack_110 = *(undefined8 *)(lVar3 + 0x188);
              local_108 = *(ulonglong *)(lVar3 + 400) ^ 0x80000000;
LAB_1402536cc:
              fVar27 = (float)*(double *)(*(longlong *)(lVar16 + 0x10) + 0x170);
              if (DAT_14c96b1e0 != '\0') {
                fVar27 = (0.5 - fVar27) + 0.5;
              }
              local_378 = CONCAT44((float)*(double *)(*(longlong *)(lVar16 + 0x10) + 0x178),fVar27);
              local_418 = &local_378;
              local_368 = *(undefined8 *)(param_2 + 3);
              local_36c = param_2[2];
              local_410 = (undefined8 *)&local_36c;
              local_408 = local_3c8;
              puVar9 = local_390;
              FUN_146978c22(&local_150,puVar9,&local_384,&local_118);
              fVar34 = local_120;
              fVar31 = local_124;
              fVar28 = local_128;
              fVar25 = local_12c;
              fVar26 = local_130;
              fVar29 = local_134;
              uVar15 = local_13c;
              fVar35 = local_140;
              fVar30 = local_144;
              fVar27 = local_148;
              local_3d0 = *(byte **)(lVar16 + 0x10);
              plVar20 = *(longlong **)(lVar16 + 0x18);
              if (plVar20 == (longlong *)0x0) {
                uVar13 = CONCAT44(local_150._4_4_,
                                  CONCAT13(local_150._3_1_,
                                           CONCAT12(local_150._2_1_,(undefined2)local_150)));
                local_3f0 = CONCAT31(local_3f0._1_3_,local_11c);
                local_36c._0_3_ = CONCAT12(local_119,local_11b);
              }
              else {
                LOCK();
                *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
                UNLOCK();
                uVar13 = CONCAT44(local_150._4_4_,
                                  CONCAT13(local_150._3_1_,
                                           CONCAT12(local_150._2_1_,(undefined2)local_150)));
                local_3f0 = CONCAT31(local_3f0._1_3_,local_11c);
                local_36c._0_3_ = CONCAT12(local_119,local_11b);
                LOCK();
                *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
                UNLOCK();
                LOCK();
                plVar1 = plVar20 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar20)(plVar20);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar20 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar20 + 0x10))(plVar20);
                  }
                }
              }
              puVar9 = (undefined1 *)CONCAT71((int7)((ulonglong)puVar9 >> 8),local_3f4._0_1_);
              pbVar10 = local_3d0;
              bVar6 = (byte)local_3f0;
            }
            if ((*local_3e0 & (byte)puVar9) == 0) {
              if (plVar20 != (longlong *)0x0) goto LAB_1402535b7;
            }
            else {
              pbVar14 = local_3e0 + 8;
              uVar24 = *(uint *)(local_3e0 + 0x130);
              lVar16 = (longlong)(int)uVar24;
              *(uint *)(local_3e0 + 0x130) = uVar24 + 1;
              if (*(uint *)(local_3e0 + 0x134) < uVar24 + 1) {
                uVar11 = (ulonglong)uVar24;
                local_3f0 = CONCAT31(local_3f0._1_3_,bVar6);
                local_3d0 = pbVar10;
                FUN_14022ed06(pbVar14,uVar11);
                puVar9 = (undefined1 *)CONCAT71((int7)(uVar11 >> 8),local_3f4._0_1_);
                pbVar10 = local_3d0;
                bVar6 = (byte)local_3f0;
              }
              if (*(byte **)(local_3e0 + 0x128) != (byte *)0x0) {
                pbVar14 = *(byte **)(local_3e0 + 0x128);
              }
              *(undefined8 *)(pbVar14 + lVar16 * 0x48) = uVar13;
              *(float *)(pbVar14 + lVar16 * 0x48 + 8) = fVar27;
              *(float *)(pbVar14 + lVar16 * 0x48 + 0xc) = fVar30;
              *(float *)(pbVar14 + lVar16 * 0x48 + 0x10) = fVar35;
              *(undefined8 *)(pbVar14 + lVar16 * 0x48 + 0x14) = uVar15;
              *(float *)(pbVar14 + lVar16 * 0x48 + 0x1c) = fVar29;
              *(float *)(pbVar14 + lVar16 * 0x48 + 0x20) = fVar26;
              *(float *)(pbVar14 + lVar16 * 0x48 + 0x24) = fVar25;
              *(float *)(pbVar14 + lVar16 * 0x48 + 0x28) = fVar28;
              *(float *)(pbVar14 + lVar16 * 0x48 + 0x2c) = fVar31;
              *(float *)(pbVar14 + lVar16 * 0x48 + 0x30) = fVar34;
              pbVar14[lVar16 * 0x48 + 0x34] = bVar6;
              *(undefined2 *)(pbVar14 + lVar16 * 0x48 + 0x35) = (undefined2)local_36c;
              pbVar14[lVar16 * 0x48 + 0x37] = local_36c._2_1_;
              *(byte **)(pbVar14 + lVar16 * 0x48 + 0x38) = pbVar10;
              *(longlong **)(pbVar14 + lVar16 * 0x48 + 0x40) = plVar20;
              if (plVar20 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
                UNLOCK();
LAB_1402535b7:
                LOCK();
                plVar1 = plVar20 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar20)(plVar20);
                  puVar9 = (undefined1 *)CONCAT71((int7)((ulonglong)puVar9 >> 8),local_3f4._0_1_);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar20 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar20 + 0x10))(plVar20);
                    puVar9 = (undefined1 *)CONCAT71((int7)((ulonglong)puVar9 >> 8),local_3f4._0_1_);
                  }
                }
              }
            }
            fVar27 = local_3d8._0_4_;
            if ((byte)puVar9 != DAT_14c96b1e1) {
              fVar27 = local_3d8._0_4_ + local_3ec;
            }
            iVar23 = iVar23 + 1;
            lVar21 = lVar21 + 8;
          } while (iVar23 < *(int *)(local_3e8 + 0x200));
        }
      }
    }
  }
  if (local_160 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_1402544d8:
  if ((local_f0 ^ (ulonglong)auStack_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402548fa FUN_1402548fa body=204 status=ok
// SIG undefined FUN_1402548fa(void)

void FUN_1402548fa(float *param_1,float param_2,longlong param_3,longlong param_4,float *param_5)

{
  float fVar1;
  int iVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = *(float *)(param_4 + 4);
  fVar1 = *(float *)(param_4 + 0xc);
  iVar2 = *(int *)(param_3 + 0x3c);
  if (iVar2 == 0) {
    fVar5 = (param_2 - (fVar4 + fVar1)) * *param_5;
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
  }
  else {
    puVar3 = &DAT_14c84635c;
    if ((*(byte *)(*(longlong *)(param_3 + 0x10) + 0x31) & 0x20) != 0) {
      puVar3 = (undefined8 *)(*(longlong *)(param_3 + 0x10) + 0x168);
    }
    fVar5 = *(float *)((longlong)puVar3 + 4) * *param_5;
    fVar6 = param_2 - (fVar4 + fVar1);
    if (fVar6 <= fVar5) {
      fVar5 = fVar6;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    if (iVar2 != 1) {
      if (iVar2 == 3) {
        fVar4 = (param_2 - fVar5) - fVar1;
      }
      else if (iVar2 == 2) {
        fVar4 = (fVar4 + (param_2 - fVar5) * 0.5) - fVar1;
      }
      else {
        fVar5 = fVar6 * *param_5;
        if (fVar5 <= 0.0) {
          fVar5 = 0.0;
        }
      }
    }
  }
  *param_1 = fVar4;
  param_1[1] = fVar5;
  return;
}



// FUNCTION 1402549c6 FUN_1402549c6 body=207 status=ok
// SIG undefined FUN_1402549c6(void)

void FUN_1402549c6(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 0x10;
  if (0x10 < param_2) {
    uVar2 = (ulonglong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x400) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0);
      }
    }
    iVar1 = (int)(uVar2 >> 5);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (iVar4 == *(int *)(param_1 + 0x20c)) {
    return;
  }
  *(int *)(param_1 + 0x20c) = iVar4;
  FUN_14287aa9c(param_1,*(undefined4 *)(param_1 + 0x208));
  return;
}



// FUNCTION 140254a95 FUN_140254a95 body=236 status=ok
// SIG undefined FUN_140254a95(void)

void FUN_140254a95(float *param_1,char param_2,float param_3,longlong param_4,float *param_5,
                  float *param_6)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = *param_5;
  fVar1 = param_5[2];
  iVar2 = *(int *)(param_4 + 0x38);
  if (param_2 == '\x01') {
    if (iVar2 == 0) {
LAB_140254adc:
      fVar5 = (param_3 - (fVar4 + fVar1)) * *param_6;
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      goto LAB_140254b6f;
    }
    if (iVar2 == 1) {
      iVar2 = 3;
    }
    else if (iVar2 == 3) {
      iVar2 = 1;
    }
  }
  else if (iVar2 == 0) goto LAB_140254adc;
  pfVar3 = (float *)&DAT_14c84635c;
  if ((*(byte *)(*(longlong *)(param_4 + 0x10) + 0x31) & 0x20) != 0) {
    pfVar3 = (float *)(*(longlong *)(param_4 + 0x10) + 0x168);
  }
  fVar5 = *pfVar3 * *param_6;
  fVar6 = param_3 - (fVar4 + fVar1);
  if (fVar6 <= fVar5) {
    fVar5 = fVar6;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (iVar2 != 1) {
    if (iVar2 == 3) {
      fVar4 = (param_3 - fVar5) - fVar1;
    }
    else if (iVar2 == 2) {
      fVar4 = (fVar4 + (param_3 - fVar5) * 0.5) - fVar1;
    }
    else {
      fVar5 = fVar6 * *param_6;
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
    }
  }
LAB_140254b6f:
  *param_1 = fVar4;
  param_1[1] = fVar5;
  return;
}



// FUNCTION 140254b82 FUN_140254b82 body=176 status=ok
// SIG undefined FUN_140254b82(void)

float FUN_140254b82(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = 0.0;
  fVar2 = 0.0;
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    fVar2 = (float)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))();
  }
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    fVar4 = (float)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))();
  }
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x40))();
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 0) {
    fVar3 = fVar4 * fVar2;
  }
  else if (iVar1 == 1) {
    fVar3 = (float)(-(uint)(1.1920929e-07 < ABS(fVar2)) & (uint)(fVar4 / fVar2));
  }
  else {
    fVar3 = 0.0;
    if ((iVar1 - 2U < 2) && (fVar3 = fVar2, fVar2 <= fVar4)) {
      fVar3 = fVar4;
    }
  }
  return fVar2 * *(float *)(param_1 + 0x10) * fVar3;
}



// FUNCTION 140254c50 FUN_140254c50 body=90 status=ok
// SIG undefined FUN_140254c50(void)

bool FUN_140254c50(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  cVar1 = FUN_140254caa(param_1 + -0x20);
  bVar4 = true;
  if (cVar1 == '\0') {
    if ((longlong)*(int *)(param_1 + 0x40) == 0) {
      bVar4 = false;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x38);
      lVar3 = (longlong)*(int *)(param_1 + 0x40) * 0x88;
      do {
        if (*(int *)(lVar2 + 0x30) != 0) goto LAB_140254c9e;
        lVar2 = lVar2 + 0x88;
        lVar3 = lVar3 + -0x88;
      } while (lVar3 != 0);
      lVar2 = 0;
LAB_140254c9e:
      bVar4 = lVar2 != 0;
    }
  }
  return bVar4;
}



// FUNCTION 140254caa FUN_140254caa body=265 status=ok
// SIG undefined FUN_140254caa(void)

undefined8 FUN_140254caa(longlong param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    uVar1 = *(uint *)(param_1 + 0x70);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(param_1 + 0x74))) &&
        ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) &&
       (((*plVar5 != 0 && (iVar3 = FUN_14490d72a(), iVar3 != 1)) && (*DAT_14cbc6690 != 0)))) {
      if ((((*DAT_14cbc66a8 == 0) && (*(int *)(param_1 + 0x7c) != 0)) &&
          (((uVar1 = *(uint *)(param_1 + 0x78), -1 < (int)uVar1 &&
            (((((int)uVar1 < DAT_14c9647dc &&
               (plVar5 = (longlong *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
               plVar5 != (longlong *)0x0)) && ((int)plVar5[2] == *(int *)(param_1 + 0x7c))) &&
             (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && ((longlong *)*plVar5 != (longlong *)0x0)
              ))))) && (lVar4 = (**(code **)(*(longlong *)*plVar5 + 0x5d8))(), lVar4 != 0)))) &&
         (cVar2 = FUN_14016169c(lVar4,0), cVar2 != '\0')) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140254db4 FUN_140254db4 body=41 status=ok
// SIG undefined FUN_140254db4(void)

void FUN_140254db4(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_140254dde(param_1 + 8,0);
  }
  *param_1 = 0;
  return;
}



// FUNCTION 140254dde FUN_140254dde body=101 status=ok
// SIG undefined FUN_140254dde(void)

void FUN_140254dde(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0) && (uVar2 = 2, 2 < param_2)) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 == *(int *)(param_1 + 0x1c)) {
    return;
  }
  *(int *)(param_1 + 0x1c) = (int)uVar2;
  FUN_140254e44(param_1,*(undefined4 *)(param_1 + 0x18),uVar2,8);
  return;
}



// FUNCTION 140254e44 FUN_140254e44 body=132 status=ok
// SIG undefined FUN_140254e44(void)

void FUN_140254e44(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,param_4);
  return;
}



// FUNCTION 140254ec8 FUN_140254ec8 body=28 status=ok
// SIG undefined FUN_140254ec8(void)

undefined4 FUN_140254ec8(longlong param_1)

{
  if (*(char *)(param_1 + 0x138) == '\0') {
    return CONCAT31((int3)((uint)*(int *)(param_1 + 0x9c) >> 8),
                    *(int *)(param_1 + 0x94) <= *(int *)(param_1 + 0x9c));
  }
  return 0;
}



// FUNCTION 140254ee4 FUN_140254ee4 body=76 status=ok
// SIG undefined FUN_140254ee4(void)

void FUN_140254ee4(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = FUN_14011c349();
  local_18 = *(undefined8 *)(lVar1 + 0x48);
  FUN_140254f32(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140254f32 FUN_140254f32 body=330 status=ok
// SIG undefined FUN_140254f32(void)

undefined8 FUN_140254f32(longlong param_1)

{
  longlong lVar1;
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
  lVar1 = *(longlong *)(param_1 + 0x398);
  if (lVar1 != 0) {
    if (DAT_14cbae3d8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464f5fc4;
      local_48 = &LAB_148c3dd26;
      local_50 = &LAB_1459673ba;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      lVar1 = *(longlong *)(param_1 + 0x398);
      if (lVar1 == 0) goto LAB_14025506e;
    }
    if ((((DAT_14cbae3d8 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
        DAT_14cbae3d8 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
LAB_14025506e:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 140255092 FUN_140255092 body=172 status=ok
// SIG undefined FUN_140255092(void)

longlong FUN_140255092(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0xc98) != *(int *)(param_1 + 0xcc4)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    lVar4 = param_1 + 0xcc8;
    if (*(longlong *)(param_1 + 0xcd0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xcd0);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0xcd8) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      while (plVar1 = (longlong *)(*(longlong *)(param_1 + 0xc90) + (longlong)iVar6 * 0x18),
            *plVar1 != lVar2) {
        iVar6 = (int)plVar1[2];
        if (iVar6 == -1) {
          return 0;
        }
      }
      if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
        return plVar1[1];
      }
    }
  }
  return 0;
}



// FUNCTION 14025513e FUN_14025513e body=196 status=ok
// SIG undefined FUN_14025513e(void)

ulonglong FUN_14025513e(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (*param_2 != 0) {
    if ((longlong)(int)param_2[3] != 0) {
      lVar2 = 0;
      do {
        if (*(longlong *)(param_2[2] + lVar2) == 0) {
          return 0xffffffff;
        }
        lVar2 = lVar2 + 8;
      } while ((longlong)(int)param_2[3] * 8 != lVar2);
    }
    cVar1 = FUN_1449ce79a(param_1 + -0x3be8);
    if (0 < (longlong)*(int *)(param_1 + 0x3d08)) {
      lVar2 = *param_2;
      plVar3 = (longlong *)(*(longlong *)(param_1 + 0x3d00) + 0x14);
      uVar4 = 0;
      do {
        if (lVar2 == 0) {
          lVar5 = 0;
        }
        else if (((cVar1 == '\0') || (lVar5 = *(longlong *)(lVar2 + 0xa0), lVar5 == 0)) &&
                (lVar5 = *(longlong *)(lVar2 + 0x98), lVar5 == 0)) {
          lVar5 = *(longlong *)(lVar2 + 0x3c);
        }
        if (((lVar5 == *plVar3) && (*(char *)((longlong)plVar3 + -4) == '\0')) &&
           ((int)plVar3[-1] == -1)) {
          return uVar4 & 0xffffffff;
        }
        uVar4 = uVar4 + 1;
        plVar3 = plVar3 + 9;
      } while ((longlong)*(int *)(param_1 + 0x3d08) != uVar4);
    }
  }
  return 0xffffffff;
}



// FUNCTION 140255202 FUN_140255202 body=1232 status=ok
// SIG undefined FUN_140255202(void)

undefined8 FUN_140255202(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined ***pppuVar12;
  undefined4 uVar13;
  longlong *plVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  code *pcVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  undefined1 *local_b8;
  code *local_b0;
  longlong local_a0;
  longlong local_98;
  undefined8 uStack_90;
  code *local_88;
  longlong local_80;
  undefined ***local_78;
  int local_70;
  undefined **local_68;
  longlong *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar7 = FUN_140b47a16(param_3);
  if ((lVar7 == 0) || (*(char *)(lVar7 + 8) != '\0')) {
    uVar17 = 0;
  }
  else {
    uVar17 = *(ulonglong *)(lVar7 + 0x28);
  }
  iVar5 = (**(code **)(*(longlong *)(param_1 + -0x2b28) + 0x18))(param_1 + -0x2b28);
  if ((ulonglong)(longlong)iVar5 < uVar17) {
LAB_14025554b:
    uVar9 = 0;
  }
  else {
    plVar14 = (longlong *)(param_1 + -0x3be8);
    lVar7 = *param_3;
    if (lVar7 != 0) {
      lVar8 = FUN_1402566a4();
      if (lVar8 == 0) {
        pcVar18 = (code *)0x0;
        local_80 = 0;
        pppuVar12 = (undefined ***)0x0;
        local_70 = 0;
      }
      else {
        FUN_1400bbfc4(&local_88,lVar8);
        pppuVar12 = local_78;
        pcVar18 = local_88;
        cVar4 = (*(code *)PTR_FUN_14c758760)();
        uVar6 = *(uint *)(lVar8 + 0xc);
        if (cVar4 != '\0') {
          if ((int)uVar6 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
          }
          else {
            lVar8 = 0;
          }
          if ((*(uint *)(lVar8 + 8) & 0x8400000) != 0) goto LAB_1402552fa;
        }
        if ((int)uVar6 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        if (*(int *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar16 = DAT_14c964868 + 1;
          bVar20 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar20) {
            local_a0 = CONCAT44(local_a0._4_4_,iVar16);
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar16);
            iVar16 = (int)local_a0;
          }
          LOCK();
          if (*(int *)(lVar8 + 0x10) == 0) {
            *(int *)(lVar8 + 0x10) = iVar16;
          }
          UNLOCK();
        }
      }
LAB_1402552fa:
      if ((*(code **)(lVar7 + 0x78) == pcVar18) && (*(longlong *)(lVar7 + 0x80) == local_80)) {
        iVar5 = *(int *)(lVar7 + 0x90);
        if (iVar5 == local_70) {
          bVar20 = true;
          if (iVar5 < 2) goto LAB_140255303;
          lVar8 = 0;
          while( true ) {
            uVar1 = *(ushort *)(*(longlong *)(lVar7 + 0x88) + lVar8);
            uVar6 = (uint)uVar1;
            uVar2 = *(ushort *)((longlong)pppuVar12 + lVar8);
            uVar15 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1402553a8;
              }
              iVar5 = uVar6 - uVar15;
              goto LAB_14025557f;
            }
            if (uVar1 == 0) break;
LAB_1402553a8:
            lVar8 = lVar8 + 2;
          }
          iVar5 = 0;
        }
        else {
          iVar5 = local_70 + iVar5 + -1;
        }
LAB_14025557f:
        bVar20 = iVar5 == 0;
      }
      else {
        bVar20 = false;
      }
LAB_140255303:
      if (pppuVar12 != (undefined ***)0x0) {
        FUN_1400020a8(pppuVar12);
      }
      if (bVar20) {
        lVar7 = (**(code **)(*plVar14 + 0x5e8))(plVar14);
        uVar13 = 0;
        if (lVar7 == 0) {
LAB_140255695:
          uVar19 = 0;
          uVar17 = 0;
        }
        else {
          if (DAT_14cbae3d8 == 0) {
            local_c0 = &local_88;
            local_88 = FUN_141030f22;
            local_b0 = FUN_14081d0ea;
            local_b8 = &LAB_1464f5fc4;
            local_c8 = &LAB_148c3dd26;
            local_d0 = &LAB_1459673ba;
            local_d8 = L"Engine";
            local_e0 = 0;
            local_e8 = 0x10000004;
            local_f0 = 0x10;
            local_f8 = 0x1360;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
          }
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cbae3d8 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) != DAT_14cbae3d8 + 0x30))
          goto LAB_140255695;
          lVar7 = FUN_1403b0700(lVar7);
          uVar17 = *(ulonglong *)(lVar7 + 0x38) & 0xffffffff00000000;
          uVar19 = *(ulonglong *)(lVar7 + 0x38) & 0xffffffff;
        }
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14b95c610;
        local_88 = FUN_1440b6008;
        local_98 = 0;
        uStack_90 = 0;
        local_60 = plVar14;
        FUN_140255853(param_3,1,&local_88,&local_98);
        lVar7 = (longlong)(int)uStack_90;
        if (lVar7 == 0) {
          bVar20 = true;
        }
        else {
          lVar8 = 0;
          local_a0 = local_98;
          do {
            plVar3 = *(longlong **)(local_a0 + lVar8);
            if (plVar3 != (longlong *)0x0) {
              lVar10 = (**(code **)(*plVar3 + 8))(plVar3);
              lVar11 = FUN_14025678a();
              if ((((lVar11 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
                  (*(longlong *)
                    (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
                   lVar11 + 0x30)) && ((uVar17 | uVar19) != plVar3[6])) {
                bVar20 = false;
                break;
              }
            }
            lVar8 = lVar8 + 0x10;
            bVar20 = true;
          } while (lVar7 * 0x10 != lVar8);
          uVar13 = (int)uStack_90;
        }
        FUN_140255aed(local_98,uVar13);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        if (local_88 != (code *)0x0) {
          pppuVar12 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar12 = &local_68;
          }
          (*(code *)(*pppuVar12)[2])();
        }
        if (!bVar20) goto LAB_14025554b;
      }
    }
    uVar9 = FUN_1402556d4(plVar14,param_3,&local_88);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1402556d4 FUN_1402556d4 body=382 status=ok
// SIG undefined FUN_1402556d4(void)

ulonglong FUN_1402556d4(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined ***pppuVar7;
  longlong lVar8;
  undefined7 uVar10;
  ulonglong uVar9;
  longlong lVar11;
  undefined1 auStack_b8 [32];
  longlong local_98;
  ulonglong uStack_90;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_3 = 1;
  uVar10 = (undefined7)((ulonglong)param_2 >> 8);
  if ((*(longlong **)(param_1 + 0x3f70) == (longlong *)0x0) ||
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x3f70) + 0x80))(), cVar3 != '\0')) {
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14b95c630;
    local_88[0] = FUN_1440b6092;
    local_98 = 0;
    uStack_90 = 0;
    local_60 = param_1;
    FUN_140255853(param_2,1,local_88,&local_98);
    lVar2 = local_98;
    lVar11 = (longlong)(int)uStack_90;
    uVar9 = CONCAT71(uVar10,1);
    if (lVar11 != 0) {
      lVar8 = 0;
      do {
        plVar1 = *(longlong **)(lVar2 + lVar8);
        if (plVar1 != (longlong *)0x0) {
          lVar5 = (**(code **)(*plVar1 + 8))(plVar1);
          lVar6 = FUN_1418c3a38();
          if ((((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
              (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
               lVar6 + 0x30)) && (cVar3 = FUN_148d11b7e(plVar1,param_1), cVar3 == '\0')) {
            uVar4 = FUN_148d11ba0(plVar1,param_1);
            *param_3 = uVar4;
            uVar9 = 0;
            break;
          }
        }
        lVar8 = lVar8 + 0x10;
      } while (lVar11 * 0x10 != lVar8);
    }
    FUN_140255aed(local_98,uStack_90 & 0xffffffff);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar7 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar7 = &local_68;
      }
      (*(code *)(*pppuVar7)[2])();
    }
  }
  else {
    uVar9 = CONCAT71(uVar10,1);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 140255853 FUN_140255853 body=665 status=ok
// SIG undefined FUN_140255853(void)

void FUN_140255853(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  ulonglong uStack_70;
  undefined4 local_68 [2];
  longlong local_60;
  ulonglong uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_3;
  if (*param_1 != 0) {
    if ((longlong)(int)param_1[3] != 0) {
      lVar7 = 0;
      do {
        if (*(longlong *)(param_1[2] + lVar7) == 0) goto LAB_140255a08;
        lVar7 = lVar7 + 8;
      } while ((longlong)(int)param_1[3] * 8 != lVar7);
    }
    local_60 = 0;
    uStack_58 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_80 = param_4;
    local_68[0] = param_2;
    FUN_140255ee2(*param_1,&local_78,param_3);
    FUN_144911a4e(local_68,&local_78);
    lVar7 = param_1[3];
    if ((longlong)(int)lVar7 != 0) {
      lVar1 = param_1[2];
      lVar6 = 0;
      do {
        uVar5 = uStack_70;
        lVar2 = *(longlong *)(lVar1 + lVar6);
        if (lVar2 != 0) {
          FUN_140255aed(local_78,uStack_70 & 0xffffffff);
          uVar4 = uStack_70 >> 0x20;
          uStack_70 = uStack_70 & 0xffffffff00000000;
          if (((longlong)uVar5 < 0) && ((int)uVar4 != 0)) {
            FUN_1488ca408(&local_78,0);
          }
          FUN_140255b38(lVar2,&local_78,local_88);
          FUN_144911a4e(local_68,&local_78);
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)(int)lVar7 * 8 != lVar6);
    }
    uVar5 = uStack_70;
    if (param_1[1] != 0) {
      FUN_140255aed(local_78,uStack_70 & 0xffffffff);
      uVar4 = uStack_70 >> 0x20;
      uStack_70 = uStack_70 & 0xffffffff00000000;
      if (((longlong)uVar5 < 0) && ((int)uVar4 != 0)) {
        FUN_1488ca408(&local_78,0);
      }
      FUN_140256138(param_1[1],&local_78,local_88);
      FUN_144911a4e(local_68,&local_78);
    }
    lVar7 = param_1[5];
    if ((longlong)(int)lVar7 != 0) {
      lVar1 = param_1[4];
      lVar6 = 0;
      do {
        uVar5 = uStack_70;
        plVar3 = *(longlong **)(lVar1 + lVar6);
        if (plVar3 != (longlong *)0x0) {
          FUN_140255aed(local_78,uStack_70 & 0xffffffff);
          uVar4 = uStack_70 >> 0x20;
          uStack_70 = uStack_70 & 0xffffffff00000000;
          if (((longlong)uVar5 < 0) && ((int)uVar4 != 0)) {
            FUN_1488ca408(&local_78,0);
          }
          (**(code **)(*plVar3 + 0x20))(plVar3,&local_78,local_88);
          FUN_144911a4e(local_68,&local_78);
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)(int)lVar7 * 8 != lVar6);
    }
    FUN_1402562f1(local_60,uStack_58 & 0xffffffff);
    FUN_140255d84(local_80,&local_60);
    FUN_140255aed(local_78,uStack_70 & 0xffffffff);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_140255aed(local_60,uStack_58 & 0xffffffff);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
LAB_140255a08:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140255aed FUN_140255aed body=75 status=ok
// SIG undefined FUN_140255aed(void)

void FUN_140255aed(longlong param_1,int param_2)

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



// FUNCTION 140255b38 FUN_140255b38 body=405 status=ok
// SIG undefined FUN_140255b38(void)

void FUN_140255b38(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar9 = *(longlong **)(param_1 + 0x58);
  iVar3 = *(int *)(param_1 + 0x60);
  if (param_3 == (undefined8 *)0x0) {
    if (iVar3 != 0) {
      lVar10 = (longlong)iVar3 * 0x18;
      do {
        if (*plVar9 != 0) {
          FUN_140255cd8(plVar9,&local_58);
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_140255dd4(param_2,iVar3);
          }
          lVar5 = *param_2;
          *(undefined8 *)(lVar5 + (longlong)iVar3 * 0x10) = local_58;
          *(longlong **)(lVar5 + 8 + (longlong)iVar3 * 0x10) = local_50;
        }
        plVar9 = plVar9 + 3;
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != 0);
    }
  }
  else if (iVar3 != 0) {
    lVar10 = (longlong)iVar3 * 0x18;
    do {
      if (*plVar9 != 0) {
        FUN_140255cd8(plVar9,&local_58);
        pcVar4 = (code *)*param_3;
        plVar8 = (longlong *)param_3[2];
        if ((longlong *)param_3[2] == (longlong *)0x0) {
          plVar8 = param_3 + 4;
        }
        uVar7 = (**(code **)(*plVar8 + 8))();
        cVar6 = (*pcVar4)(uVar7,&local_58);
        plVar8 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        if (cVar6 != '\0') {
          FUN_140255cd8(plVar9,&local_58);
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_140255dd4(param_2,iVar3);
          }
          lVar5 = *param_2;
          *(undefined8 *)(lVar5 + (longlong)iVar3 * 0x10) = local_58;
          *(longlong **)(lVar5 + 8 + (longlong)iVar3 * 0x10) = local_50;
        }
      }
      plVar9 = plVar9 + 3;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140255cd8 FUN_140255cd8 body=83 status=ok
// SIG undefined FUN_140255cd8(void)

longlong * FUN_140255cd8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_140255d2c();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140255d2c FUN_140255d2c body=57 status=ok
// SIG undefined FUN_140255d2c(void)

void FUN_140255d2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69ba8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69ba8 = FUN_140002ddd(FUN_14185c5a5,uVar1,L"InventoryAspect");
  }
  return;
}



// FUNCTION 140255d84 FUN_140255d84 body=80 status=ok
// SIG undefined FUN_140255d84(void)

longlong * FUN_140255d84(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140255aed(*param_1,(int)param_1[1]);
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



// FUNCTION 140255dd4 FUN_140255dd4 body=269 status=ok
// SIG undefined FUN_140255dd4(void)

void FUN_140255dd4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140255ee2 FUN_140255ee2 body=596 status=ok
// SIG undefined FUN_140255ee2(void)

void FUN_140255ee2(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar10 = *(longlong *)(param_1 + 0x60);
  if (lVar10 == 0) {
    uVar6 = FUN_14042c486();
    lVar10 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x60) = lVar10;
  }
  lVar7 = *(longlong *)(param_1 + 0x68);
  if (lVar7 == 0) {
    if ((*(longlong *)(param_1 + 0x58) == 0) || (lVar10 == 0)) goto LAB_140255f2f;
    plVar9 = *(longlong **)(lVar10 + 0xb8);
    if ((plVar9 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar5 == '\0')) {
      *(undefined8 *)(param_1 + 0x68) = 0;
      goto LAB_140255f2f;
    }
    uVar6 = (**(code **)(*plVar9 + 0x110))(plVar9);
    lVar7 = FUN_144aff482(uVar6,(longlong *)(param_1 + 0x58));
    *(longlong *)(param_1 + 0x68) = lVar7;
    if (lVar7 == 0) goto LAB_140255f2f;
  }
  FUN_140255ee2(lVar7,param_2,param_3);
LAB_140255f2f:
  plVar9 = *(longlong **)(param_1 + 0x418);
  iVar3 = *(int *)(param_1 + 0x420);
  if (param_3 == (undefined8 *)0x0) {
    if (iVar3 != 0) {
      lVar10 = (longlong)iVar3 * 0x18;
      do {
        if (*plVar9 != 0) {
          FUN_140255cd8(plVar9,&local_58);
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_140255dd4(param_2,iVar3);
          }
          lVar7 = *param_2;
          *(undefined8 *)(lVar7 + (longlong)iVar3 * 0x10) = local_58;
          *(longlong **)(lVar7 + 8 + (longlong)iVar3 * 0x10) = local_50;
        }
        plVar9 = plVar9 + 3;
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != 0);
    }
  }
  else if (iVar3 != 0) {
    lVar10 = (longlong)iVar3 * 0x18;
    do {
      if (*plVar9 != 0) {
        FUN_140255cd8(plVar9,&local_58);
        pcVar4 = (code *)*param_3;
        plVar8 = (longlong *)param_3[2];
        if ((longlong *)param_3[2] == (longlong *)0x0) {
          plVar8 = param_3 + 4;
        }
        uVar6 = (**(code **)(*plVar8 + 8))();
        cVar5 = (*pcVar4)(uVar6,&local_58);
        plVar8 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        if (cVar5 != '\0') {
          FUN_140255cd8(plVar9,&local_58);
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_140255dd4(param_2,iVar3);
          }
          lVar7 = *param_2;
          *(undefined8 *)(lVar7 + (longlong)iVar3 * 0x10) = local_58;
          *(longlong **)(lVar7 + 8 + (longlong)iVar3 * 0x10) = local_50;
        }
      }
      plVar9 = plVar9 + 3;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140256138 FUN_140256138 body=440 status=ok
// SIG undefined FUN_140256138(void)

void FUN_140256138(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar7 = FUN_140a9668e();
  if (lVar7 != 0) {
    FUN_140256138(lVar7,param_2,param_3);
  }
  plVar10 = *(longlong **)(param_1 + 0x108);
  iVar3 = *(int *)(param_1 + 0x110);
  if (param_3 == (undefined8 *)0x0) {
    if (iVar3 != 0) {
      lVar7 = (longlong)iVar3 * 0x18;
      do {
        if (*plVar10 != 0) {
          FUN_140255cd8(plVar10,&local_58);
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_140255dd4(param_2,iVar3);
          }
          lVar5 = *param_2;
          *(undefined8 *)(lVar5 + (longlong)iVar3 * 0x10) = local_58;
          *(longlong **)(lVar5 + 8 + (longlong)iVar3 * 0x10) = local_50;
        }
        plVar10 = plVar10 + 3;
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != 0);
    }
  }
  else if (iVar3 != 0) {
    lVar7 = (longlong)iVar3 * 0x18;
    do {
      if (*plVar10 != 0) {
        FUN_140255cd8(plVar10,&local_58);
        pcVar4 = (code *)*param_3;
        plVar9 = (longlong *)param_3[2];
        if ((longlong *)param_3[2] == (longlong *)0x0) {
          plVar9 = param_3 + 4;
        }
        uVar8 = (**(code **)(*plVar9 + 8))();
        cVar6 = (*pcVar4)(uVar8,&local_58);
        plVar9 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        if (cVar6 != '\0') {
          FUN_140255cd8(plVar10,&local_58);
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_140255dd4(param_2,iVar3);
          }
          lVar5 = *param_2;
          *(undefined8 *)(lVar5 + (longlong)iVar3 * 0x10) = local_58;
          *(longlong **)(lVar5 + 8 + (longlong)iVar3 * 0x10) = local_50;
        }
      }
      plVar10 = plVar10 + 3;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402562f1 FUN_1402562f1 body=929 status=ok
// SIG undefined FUN_1402562f1(void)

void FUN_1402562f1(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_d8 [36];
  uint local_b4;
  uint local_b0;
  uint local_ac;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  longlong *local_90;
  uint local_84;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_80 = param_1;
  if (0 < (int)param_2) {
    lVar10 = 0;
    do {
      if (lVar10 + 1U < (ulonglong)param_2) {
        iVar5 = (**(code **)(*(longlong *)param_1[2] + 0x10))();
        iVar6 = (**(code **)(*(longlong *)*param_1 + 0x10))();
        if (iVar5 == iVar6) {
          if (*(byte *)(*param_1 + 8) < *(byte *)((longlong *)param_1[2] + 1)) {
LAB_140256383:
            lVar3 = *param_1;
            lVar4 = param_1[1];
            *param_1 = param_1[2];
            param_1[1] = param_1[3];
            local_58._0_4_ = (undefined4)lVar3;
            local_58._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
            uStack_50._0_4_ = (undefined4)lVar4;
            uStack_50._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
            *(undefined4 *)(param_1 + 2) = (undefined4)local_58;
            *(undefined4 *)((longlong)param_1 + 0x14) = local_58._4_4_;
            *(undefined4 *)(param_1 + 3) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
            local_58 = lVar3;
            uStack_50 = lVar4;
          }
        }
        else {
          iVar5 = (**(code **)(*(longlong *)param_1[2] + 0x10))();
          iVar6 = (**(code **)(*(longlong *)*param_1 + 0x10))();
          if (iVar6 < iVar5) goto LAB_140256383;
        }
      }
      lVar10 = lVar10 + 2;
      param_1 = param_1 + 4;
    } while ((int)lVar10 < (int)param_2);
    if (2 < (int)param_2) {
      uVar13 = 2;
      local_84 = param_2;
      local_60 = (ulonglong)param_2;
      do {
        local_ac = (int)uVar13 * 2;
        local_68 = (longlong)(int)local_ac;
        lVar10 = 0;
        local_a8 = uVar13;
        do {
          local_b4 = local_84 - (int)lVar10;
          if ((int)local_ac <= (int)local_b4) {
            local_b4 = local_ac;
          }
          local_78 = lVar10;
          if ((0 < (int)uVar13) && ((int)uVar13 < (int)local_b4)) {
            local_90 = local_80 + lVar10 * 2;
            iVar5 = 0;
            uVar14 = uVar13 & 0xffffffff;
            while( true ) {
              plVar15 = local_90;
              local_b0 = (uint)uVar14;
              local_70 = local_90 + (longlong)(int)local_b0 * 2;
              uVar13 = 0;
              local_a0 = CONCAT44(local_a0._4_4_,iVar5);
              uVar16 = local_b0 - iVar5;
              if (uVar16 != 0 && iVar5 <= (int)local_b0) {
                uVar13 = 0;
                uVar14 = (ulonglong)uVar16;
                do {
                  plVar9 = local_70;
                  uVar14 = uVar14 >> 1;
                  uVar11 = (int)uVar13 + (uint)uVar14;
                  plVar12 = plVar15 + (longlong)iVar5 * 2 + (ulonglong)uVar11 * 2;
                  local_98 = uVar13;
                  iVar6 = (**(code **)(*(longlong *)*local_70 + 0x10))();
                  iVar7 = (**(code **)(*(longlong *)
                                        plVar15[(longlong)iVar5 * 2 + (ulonglong)uVar11 * 2] + 0x10)
                          )();
                  if (iVar6 == iVar7) {
                    bVar2 = *(byte *)(*plVar12 + 8) < *(byte *)((longlong *)*plVar9 + 1);
                  }
                  else {
                    iVar6 = (**(code **)(*(longlong *)*plVar9 + 0x10))();
                    iVar7 = (**(code **)(*(longlong *)*plVar12 + 0x10))();
                    bVar2 = iVar7 < iVar6;
                  }
                  uVar13 = local_98;
                  if (!bVar2) {
                    uVar13 = (ulonglong)(uVar11 + (uVar16 & 1));
                  }
                  bVar2 = 1 < uVar16;
                  uVar16 = (uint)uVar14;
                } while (bVar2);
              }
              uVar16 = (int)uVar13 + (int)local_a0;
              iVar5 = local_b0 - uVar16;
              uVar13 = local_a8;
              if (iVar5 == 0 || (int)local_b0 < (int)uVar16) break;
              if (local_b4 - local_b0 == 0 || (int)local_b4 < (int)local_b0) {
                uVar17 = 0;
                uVar14 = (ulonglong)local_b0;
              }
              else {
                plVar15 = local_90 + (longlong)(int)uVar16 * 2;
                uVar17 = 0;
                uVar11 = local_b4 - local_b0;
                local_98 = (ulonglong)uVar16;
                do {
                  plVar12 = local_70;
                  uVar16 = (int)uVar17 + (uVar11 >> 1);
                  local_a0 = uVar17;
                  iVar6 = (**(code **)(*(longlong *)local_70[(ulonglong)uVar16 * 2] + 0x10))();
                  iVar7 = (**(code **)(*(longlong *)*plVar15 + 0x10))();
                  if (iVar6 == iVar7) {
                    bVar2 = *(byte *)(*plVar15 + 8) <
                            *(byte *)((longlong *)plVar12[(ulonglong)uVar16 * 2] + 1);
                  }
                  else {
                    iVar6 = (**(code **)(*(longlong *)plVar12[(ulonglong)uVar16 * 2] + 0x10))();
                    iVar7 = (**(code **)(*(longlong *)*plVar15 + 0x10))();
                    bVar2 = iVar7 < iVar6;
                  }
                  uVar17 = local_a0;
                  if (bVar2) {
                    uVar17 = (ulonglong)(uVar16 + (uVar11 & 1));
                  }
                  bVar2 = 1 < uVar11;
                  uVar11 = uVar11 >> 1;
                } while (bVar2);
                uVar11 = local_b0 + (int)uVar17;
                uVar14 = (ulonglong)uVar11;
                uVar16 = (uint)local_98;
                if (0 < (int)uVar17) {
                  plVar8 = plVar15 + (longlong)(int)(uVar11 - uVar16) * 2;
                  plVar12 = plVar15 + (longlong)iVar5 * 2;
                  plVar9 = plVar15 + (longlong)iVar5 * 2;
                  do {
                    while( true ) {
                      plVar1 = plVar12 + 2;
                      lVar10 = *plVar15;
                      lVar3 = plVar15[1];
                      lVar4 = plVar12[1];
                      *plVar15 = *plVar12;
                      plVar15[1] = lVar4;
                      plVar15 = plVar15 + 2;
                      local_58._0_4_ = (undefined4)lVar10;
                      local_58._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
                      uStack_50._0_4_ = (undefined4)lVar3;
                      uStack_50._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
                      *(undefined4 *)plVar12 = (undefined4)local_58;
                      *(undefined4 *)((longlong)plVar12 + 4) = local_58._4_4_;
                      *(undefined4 *)(plVar12 + 1) = (undefined4)uStack_50;
                      *(undefined4 *)((longlong)plVar12 + 0xc) = uStack_50._4_4_;
                      if (plVar1 == plVar8) break;
                      plVar12 = plVar1;
                      if (plVar15 == plVar9) {
                        plVar9 = plVar1;
                      }
                    }
                    plVar12 = plVar9;
                    local_58 = lVar10;
                    uStack_50 = lVar3;
                  } while (plVar15 != plVar9);
                }
              }
              uVar13 = local_a8;
              if (((int)local_b4 <= (int)uVar14) ||
                 (iVar5 = uVar16 + (int)uVar17 + 1, (int)uVar14 <= iVar5)) break;
            }
          }
          lVar10 = local_78 + local_68;
        } while (lVar10 < (longlong)local_60);
        uVar13 = (ulonglong)local_ac;
      } while ((int)local_ac < (int)local_84);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402566a4 FUN_1402566a4 body=228 status=ok
// SIG undefined FUN_1402566a4(void)

longlong FUN_1402566a4(void)

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
  if (DAT_14cb9fff0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_140940a0a;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146522c26;
    local_38 = &LAB_148b8b12d;
    local_40 = &LAB_145d032a8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x960;
    FUN_14081cfa3(L"/Script/OakGame",L"ClassMod",&DAT_14cb9fff0,&DAT_148b8b12c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9fff0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14025678a FUN_14025678a body=57 status=ok
// SIG undefined FUN_14025678a(void)

void FUN_14025678a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba00a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba00a0 = FUN_140002ddd(FUN_1465a83b8,uVar1,L"ClassModPlayerClassAspect");
  }
  return;
}



// FUNCTION 1402567c4 FUN_1402567c4 body=340 status=ok
// SIG undefined FUN_1402567c4(void)

void FUN_1402567c4(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  if (param_1[0x39d] == 0) {
    return;
  }
  cVar3 = FUN_1402569ac();
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0xbf8))(param_1,param_2,param_3);
  }
  lVar4 = *(longlong *)(param_1[0x39d] + 0x32b8);
  if (lVar4 == 0) {
    return;
  }
  lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x1238) + 0x10))(lVar4 + 0x1238);
  if (lVar4 == 0) {
    return;
  }
  lVar4 = FUN_140256918(lVar4,DAT_14c9abbf0);
  if (lVar4 == 0) {
    return;
  }
  param_1[0xb0] = *(longlong *)(lVar4 + 0x1f0);
  lVar5 = *(longlong *)(lVar4 + 0x210);
  lVar2 = *(longlong *)(lVar4 + 0x218);
  param_1[0xa2] = *(longlong *)(lVar4 + 0x220);
  param_1[0xa0] = lVar5;
  param_1[0xa1] = lVar2;
  lVar5 = *(longlong *)(lVar4 + 0x1f8);
  lVar2 = *(longlong *)(lVar4 + 0x200);
  param_1[0x9c] = *(longlong *)(lVar4 + 0x208);
  param_1[0x9a] = lVar5;
  param_1[0x9b] = lVar2;
  if (*(int *)(lVar4 + 500) != 0) {
    uVar1 = *(uint *)(lVar4 + 0x1f0);
    bVar6 = false;
    if (((int)uVar1 < 0) || (bVar6 = false, DAT_14c9647dc <= (int)uVar1)) goto LAB_1402568cc;
    lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == *(int *)(lVar4 + 500))) {
      bVar6 = (*(uint *)(lVar5 + 8) & 0x10200000) == 0;
      goto LAB_1402568cc;
    }
  }
  bVar6 = false;
LAB_1402568cc:
  *(byte *)((longlong)param_1 + 0x555) = *(byte *)((longlong)param_1 + 0x555) & 0xfe | bVar6;
  *(uint *)(param_1 + 0x93) = *(uint *)(param_1 + 0x93) & 0xfffffffe | (uint)bVar6;
  return;
}



// FUNCTION 140256918 FUN_140256918 body=147 status=ok
// SIG undefined FUN_140256918(void)

longlong FUN_140256918(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar2 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x50);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x10) + (longlong)iVar4 * 0x460;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar4 * 0x460) == param_2)
        goto LAB_14025698e;
        iVar4 = *(int *)(lVar2 + 0x450);
      } while (iVar4 != -1);
    }
  }
  lVar2 = 0;
LAB_14025698e:
  lVar3 = lVar2 + 0x10;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 1402569ac FUN_1402569ac body=1673 status=ok
// SIG undefined FUN_1402569ac(void)

ulonglong FUN_1402569ac(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 unaff_RBX;
  undefined7 uVar12;
  ulonglong uVar11;
  int iVar13;
  undefined8 uVar14;
  bool bVar15;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar5 = *(longlong *)(param_1 + 0x32b8);
  if (lVar5 == 0) {
LAB_140256fcb:
    if (*(longlong *)(param_1 + 0x11e8) != 0) {
      FUN_1409df526(*(longlong *)(param_1 + 0x11e8),&DAT_14cb712f0);
    }
  }
  else {
    lVar2 = *(longlong *)(lVar5 + 0xae8);
    lVar5 = FUN_14025708c(lVar5,DAT_14c9abbf0);
    if ((lVar2 == 0) || (lVar5 == 0)) goto LAB_140256fcb;
    plVar6 = (longlong *)FUN_140257036(lVar5);
    if (plVar6 == (longlong *)0x0) {
LAB_140256fec:
      plVar6 = (longlong *)0x0;
    }
    else {
      lVar7 = FUN_140257238();
      if ((*(int *)(plVar6[2] + 0x38) < *(int *)(lVar7 + 0x38)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
          lVar7 + 0x30)) goto LAB_140256fec;
    }
    cVar3 = *(char *)(param_1 + 0x32c0);
    uVar12 = (undefined7)((ulonglong)unaff_RBX >> 8);
    if (cVar3 == '\x01') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9ab76c) && (FUN_144b3d300(&DAT_14c9ab76c), DAT_14c9ab76c == -1))
      {
        FUN_1446f470e(&DAT_14c9ab764,L"Animated Death",1);
        _Init_thread_footer(&DAT_14c9ab76c);
      }
      if (*(longlong *)(lVar5 + 0x2a0) == DAT_14c9ab764) {
LAB_140256db2:
        uVar11 = CONCAT71(uVar12,1);
      }
      else {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9ab760) &&
           (FUN_144b3d300(&DAT_14c9ab760), DAT_14c9ab760 == -1)) {
          FUN_1446f470e(&DAT_14c9ab758,L"Animated",1);
          _Init_thread_footer(&DAT_14c9ab760);
        }
        if (*(longlong *)(lVar5 + 0x2a0) == DAT_14c9ab758) goto LAB_140256db2;
        uVar11 = 0;
      }
      if (*(int *)(param_1 + 13000) == 0) {
LAB_140256daa:
        lVar7 = 0;
      }
      else {
        uVar1 = *(uint *)(&DAT_000032c4 + param_1);
        lVar7 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          plVar9 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((plVar9 == (longlong *)0x0) ||
             (((int)plVar9[2] != *(int *)(param_1 + 13000) ||
              ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_140256daa;
          lVar7 = *plVar9;
        }
      }
      if (plVar6 == (longlong *)0x0) goto LAB_140256b57;
      if (*(char *)(param_1 + 0x178) == '\x03') {
        lVar8 = (**(code **)(*plVar6 + 0x2d0))(plVar6,(longlong *)(lVar5 + 0x270));
LAB_140256b52:
        if (lVar8 != 0) {
          uVar1 = *(uint *)(lVar8 + 0xc);
          *(uint *)(&DAT_000032c4 + param_1) = uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar5 = 0;
          }
          iVar4 = *(int *)(lVar5 + 0x10);
          if (*(int *)(lVar5 + 0x10) == 0) {
            LOCK();
            iVar4 = DAT_14c964868 + 1;
            UNLOCK();
            iVar13 = DAT_14c964868 + 1;
            bVar15 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar4;
            if (bVar15) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar13);
            }
            LOCK();
            iVar4 = *(int *)(lVar5 + 0x10);
            bVar15 = iVar4 == 0;
            if (bVar15) {
              *(int *)(lVar5 + 0x10) = iVar13;
              iVar4 = 0;
            }
            UNLOCK();
            if (bVar15) {
              iVar4 = iVar13;
            }
          }
          *(int *)(param_1 + 13000) = iVar4;
          if (lVar8 != lVar7) {
            local_c0 = 0;
            local_b8 = 0x3f800000;
            uStack_b4 = 0;
            local_b0 = 0x3dcccccd;
            uStack_ac = uStack_ac & 0xffffff00;
            local_a8 = 0;
            uStack_a0 = 0;
            local_98 = 0;
            local_90 = 0x3dcccccd;
            local_8c = 0;
            local_88 = 0;
            uStack_80 = 0;
            local_78 = 0;
            local_70 = 0;
            local_68 = 0;
            local_60 = (undefined4)DAT_14c8464e0;
            uStack_5c = DAT_14c8464e0._4_4_;
            uStack_58 = (undefined4)DAT_14c8464e8;
            uStack_54 = DAT_14c8464e8._4_4_;
            local_50 = DAT_14c8464f0;
            local_c8 = DAT_14cb8d430;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar8);
            }
            local_b8 = 0;
            local_70 = 0;
            local_c0 = lVar8;
            FUN_140657bfa(lVar2);
          }
          goto LAB_140256b60;
        }
      }
      else {
        lVar8 = lVar7;
        if (*(char *)(param_1 + 0x331c) == '\0') goto LAB_140256b52;
        lVar5 = *(longlong *)(lVar5 + 0x270);
        if (lVar5 != 0) {
          lVar8 = FUN_14025731e();
          if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
            FUN_140257404(plVar6,&local_c8,lVar5,param_1 + 0x3310);
            lVar8 = FUN_140257578(&local_c8);
            if (CONCAT44(uStack_ac,local_b0) != 0) {
              FUN_1400020a8();
            }
            goto LAB_140256b52;
          }
        }
      }
LAB_140256b57:
      if (lVar7 != 0) {
        FUN_1406712fc(lVar2,&DAT_14cb8d430,lVar7);
      }
      goto LAB_140256b60;
    }
    if (cVar3 == '\x03') {
      if (1 < (byte)(*(char *)(lVar5 + 0x260) - 1U)) {
        if (*(int *)(param_1 + 13000) == 0) {
LAB_140256f0e:
          uVar14 = 0;
        }
        else {
          uVar1 = *(uint *)(&DAT_000032c4 + param_1);
          uVar14 = 0;
          if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
            puVar10 = (undefined8 *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if ((puVar10 == (undefined8 *)0x0) ||
               ((*(int *)(puVar10 + 2) != *(int *)(param_1 + 13000) ||
                ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_140256f0e;
            uVar14 = *puVar10;
          }
        }
        cVar3 = FUN_14489e746(lVar2,&DAT_14cb8d430,uVar14,0);
        if (cVar3 == '\0') {
          *(undefined1 *)(param_1 + 0x32c0) = 0;
          *(undefined8 *)(&DAT_000032c4 + param_1) = 0;
        }
        uVar11 = CONCAT71(uVar12,*(char *)(lVar5 + 0x260) == '\0');
        goto LAB_140256b60;
      }
      FUN_140257ae0(param_1,1);
    }
    else {
      if (cVar3 == '\0') {
        uVar11 = 0;
        FUN_1402577d6(param_1,0);
        goto LAB_140256b60;
      }
      if (cVar3 == '\x02') {
        if ((((*(int *)(param_1 + 13000) == 0) ||
             (uVar1 = *(uint *)(&DAT_000032c4 + param_1), (int)uVar1 < 0)) ||
            (DAT_14c9647dc <= (int)uVar1)) ||
           (((plVar6 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
             plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)(param_1 + 13000))) ||
            (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar5 = *plVar6, lVar5 == 0)))))) {
          *(undefined1 *)(param_1 + 0x32c0) = 0;
        }
        else {
          uStack_b4 = 0;
          local_b0 = 0x3dcccccd;
          uStack_ac = uStack_ac & 0xffffff00;
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = 0;
          local_90 = 0x3dcccccd;
          local_8c = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          local_68 = 0;
          local_60 = (undefined4)DAT_14c8464e0;
          uStack_5c = DAT_14c8464e0._4_4_;
          uStack_58 = (undefined4)DAT_14c8464e8;
          uStack_54 = DAT_14c8464e8._4_4_;
          local_50 = DAT_14c8464f0;
          local_c8 = DAT_14cb8d430;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar5);
          }
          local_b8 = 0x3f800000;
          local_70 = 0;
          local_c0 = lVar5;
          FUN_140657bfa(lVar2);
          *(undefined1 *)(param_1 + 0x32c0) = 3;
        }
      }
    }
  }
  uVar11 = 0;
LAB_140256b60:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 140257036 FUN_140257036 body=86 status=ok
// SIG undefined FUN_140257036(void)

longlong FUN_140257036(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x168) == 0) {
    lVar2 = FUN_140257132(param_1 + 0x140);
    bVar1 = DAT_14c950c29;
    if (lVar2 == 0) {
      return 0;
    }
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x168) + 0xd0);
    bVar1 = DAT_14c950c29 & lVar2 != 0;
  }
  if (bVar1 != 0) {
    FUN_1456cec3c(lVar2);
  }
  return lVar2;
}



// FUNCTION 14025708c FUN_14025708c body=165 status=ok
// SIG undefined FUN_14025708c(void)

longlong FUN_14025708c(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  
  lVar2 = (**(code **)(*(longlong *)(param_1 + 0x1238) + 0x10))(param_1 + 0x1238);
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar5 = (uint)param_2 & 0xffff;
    lVar4 = lVar2 + 0x48;
    if (*(longlong *)(lVar2 + 0x50) != 0) {
      lVar4 = *(longlong *)(lVar2 + 0x50);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(lVar2 + 0x58) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar5) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(lVar2 + 0x10) + (longlong)iVar3 * 0x460;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar3 * 0x460) == param_2)
        goto LAB_140257120;
        iVar3 = *(int *)(lVar4 + 0x450);
      } while (iVar3 != -1);
    }
  }
  lVar4 = 0;
LAB_140257120:
  lVar2 = lVar4 + 0x10;
  if (lVar4 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 140257132 FUN_140257132 body=261 status=ok
// SIG undefined FUN_140257132(void)

longlong FUN_140257132(uint *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar3 = *plVar5, lVar3 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_1459090d0();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 140257238 FUN_140257238 body=228 status=ok
// SIG undefined FUN_140257238(void)

longlong FUN_140257238(void)

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
  if (DAT_14c9ab560 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1462b2792;
    local_38 = &LAB_1470f4c59;
    local_40 = &LAB_140ce070a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x150;
    FUN_14081cfa3(L"/Script/GbxPhysics",L"RagdollBehaviorManager",&DAT_14c9ab560,&DAT_1470f4c58);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9ab560;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14025731e FUN_14025731e body=228 status=ok
// SIG undefined FUN_14025731e(void)

longlong FUN_14025731e(void)

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
  if (DAT_14c9ab518 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1462b275e;
    local_38 = &LAB_1470f4c4b;
    local_40 = FUN_142b4d0c2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xf0;
    FUN_14081cfa3(L"/Script/GbxPhysics",L"RagdollBehaviorInstanceData",&DAT_14c9ab518,&DAT_1470f4c4a
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9ab518;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140257404 FUN_140257404 body=370 status=ok
// SIG undefined FUN_140257404(void)

undefined8 *
FUN_140257404(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_3 + 0xe8) != 0) {
    lVar9 = *(longlong *)(param_3 + 0xe0);
    lVar8 = (longlong)*(int *)(param_3 + 0xe8) * 0x28 + lVar9;
    do {
      if ((longlong)*(int *)(lVar9 + 0x10) != 0) {
        puVar11 = *(undefined8 **)(lVar9 + 8);
        lVar10 = (longlong)*(int *)(lVar9 + 0x10) * 0x28;
        do {
          lVar7 = FUN_140257578(puVar11);
          if (lVar7 != 0) {
            uVar2 = *param_4;
            lVar7 = FUN_140257578(puVar11);
            local_50 = *(undefined8 *)(lVar7 + 0x18);
            FUN_1400021e4(&local_50,&local_60);
            iVar1 = local_58 + -1;
            if (local_58 == 0) {
              iVar1 = 0;
            }
            cVar6 = FUN_1402ca054(uVar2,local_60,iVar1);
            if (local_60 != 0) {
              FUN_1400020a8();
            }
            if (cVar6 != '\0') {
              *param_2 = *puVar11;
              uVar3 = *(undefined4 *)((longlong)puVar11 + 0xc);
              uVar4 = *(undefined4 *)(puVar11 + 2);
              uVar5 = *(undefined4 *)((longlong)puVar11 + 0x14);
              *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar11 + 1);
              *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
              *(undefined4 *)(param_2 + 2) = uVar4;
              *(undefined4 *)((longlong)param_2 + 0x14) = uVar5;
              param_2[3] = 0;
              iVar1 = *(int *)(puVar11 + 4);
              _Src = (void *)puVar11[3];
              *(int *)(param_2 + 4) = iVar1;
              if ((longlong)iVar1 == 0) {
                *(undefined4 *)((longlong)param_2 + 0x24) = 0;
              }
              else {
                FUN_1446dd670(param_2 + 3,iVar1,0);
                memcpy((void *)param_2[3],_Src,(longlong)iVar1 * 2);
              }
              goto LAB_1402574f2;
            }
          }
          puVar11 = puVar11 + 5;
          lVar10 = lVar10 + -0x28;
        } while (lVar10 != 0);
      }
      lVar9 = lVar9 + 0x28;
    } while (lVar9 != lVar8);
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
LAB_1402574f2:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140257578 FUN_140257578 body=375 status=ok
// SIG undefined FUN_140257578(void)

longlong FUN_140257578(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar6 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar5 = *plVar6, lVar5 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar5 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar5 == 0) || (cVar2 == '\0')) {
      if (lVar5 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar5 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      uVar3 = *(uint *)(lVar4 + 0x10);
      if (*(uint *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar3 = *(uint *)(lVar4 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar4 + 0x10) = uVar7;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar7;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar5);
      }
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_1402576f0();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar5;
  }
  return 0;
}



// FUNCTION 1402576f0 FUN_1402576f0 body=228 status=ok
// SIG undefined FUN_1402576f0(void)

longlong FUN_1402576f0(void)

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
  if (DAT_14cacc720 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1433e5b44;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14636d4f2;
    local_38 = &LAB_14792969d;
    local_40 = FUN_14061e8e1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x218;
    FUN_14081cfa3(L"/Script/Engine",L"AnimSequence",&DAT_14cacc720,&DAT_14792969c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacc720;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402577d6 FUN_1402577d6 body=534 status=ok
// SIG undefined FUN_1402577d6(void)

void FUN_1402577d6(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined *local_38;
  undefined1 *local_30;
  undefined **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x11e8);
  if (param_2 == '\0') {
    if (lVar1 != 0) {
      FUN_1409df526(lVar1,&DAT_14cb712f0);
      FUN_1400bc8c2(*(longlong *)(param_1 + 0x11e8) + 0x11f0,&DAT_14cb712f0);
      FUN_1407adf94(*(undefined8 *)(param_1 + 0x11e8),&DAT_14cb712f0);
      plVar2 = *(longlong **)(param_1 + 0x11e8);
      uVar3 = (**(code **)(*plVar2 + 0xbf0))(plVar2);
      (**(code **)(*plVar2 + 0x7c0))(plVar2,uVar3);
    }
    local_28 = &local_38;
    local_38 = &DAT_14cb712f0;
    local_30 = &LAB_143cbcafc;
    FUN_1400b7536(param_1 + 0x1808);
    FUN_140ba2af2(param_1 + 0x19d0,&DAT_14cb712f0);
  }
  else {
    if (lVar1 != 0) {
      FUN_140257a06(lVar1,&DAT_14cb712f0,8);
      FUN_1400bc96c(*(longlong *)(param_1 + 0x11e8) + 0x11f0,&DAT_14cb712f0);
      FUN_1407ae0cc(*(undefined8 *)(param_1 + 0x11e8),&DAT_14cb712f0,2);
      plVar2 = *(longlong **)(param_1 + 0x11e8);
      uVar3 = (**(code **)(*plVar2 + 0xbf0))(plVar2);
      (**(code **)(*plVar2 + 0x7c0))(plVar2,uVar3);
    }
    local_28 = &local_38;
    local_38 = &DAT_14cb712f0;
    local_30 = &LAB_143cbcb14;
    FUN_1400b7536(param_1 + 0x1808);
    FUN_140ba2cd0(param_1 + 0x19d0,&DAT_14cb712f0,1);
  }
  if (*(longlong *)(param_1 + 0x32b8) != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb71300) {
      FUN_144b3d300(&DAT_14cb71300);
      if (DAT_14cb71300 == -1) {
        FUN_1446f470e(&DAT_14cb712f8,L"PhysRagdoll Movement Mode",1);
        _Init_thread_footer(&DAT_14cb71300);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140257a06 FUN_140257a06 body=218 status=ok
// SIG undefined FUN_140257a06(void)

void FUN_140257a06(longlong param_1,longlong *param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  puVar1 = (undefined1 *)(param_1 + 0x1110);
  puVar3 = *(undefined1 **)(param_1 + 0x1140);
  puVar4 = puVar3;
  if (puVar3 == (undefined1 *)0x0) {
    puVar4 = puVar1;
  }
  iVar2 = *(int *)(param_1 + 0x1148);
  lVar6 = (longlong)iVar2;
  if (lVar6 != 0) {
    lVar5 = lVar6 * 0xc;
    do {
      if (*(longlong *)(puVar4 + 4) == *param_2) {
        if (puVar4 != (undefined1 *)0x0) goto LAB_140257a89;
        break;
      }
      puVar4 = puVar4 + 0xc;
      lVar5 = lVar5 + -0xc;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 0x1148) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x114c) < iVar2 + 1U) {
    FUN_1470e3c92(puVar1,iVar2);
    puVar3 = *(undefined1 **)(param_1 + 0x1140);
  }
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  lVar6 = lVar6 * 0xc;
  *(undefined4 *)(puVar3 + lVar6 + 8) = 0;
  *(undefined8 *)(puVar3 + lVar6) = 0;
  puVar3 = *(undefined1 **)(param_1 + 0x1140);
  if (*(undefined1 **)(param_1 + 0x1140) == (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  puVar4 = puVar3 + lVar6;
  *(longlong *)(puVar3 + lVar6 + 4) = *param_2;
LAB_140257a89:
  *puVar4 = param_3;
  FUN_1409df582(param_1);
  return;
}



// FUNCTION 140257ae0 FUN_140257ae0 body=1141 status=ok
// SIG undefined FUN_140257ae0(void)

void FUN_140257ae0(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  double _X;
  code *pcVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined *puVar8;
  longlong *plVar9;
  uint uVar10;
  
  plVar9 = (longlong *)param_1[0x657];
  if (plVar9 == (longlong *)0x0) {
    return;
  }
  if (param_2 != '\0') {
    *(undefined1 *)(param_1 + 0x658) = 1;
    FUN_1402577d6(param_1,1);
    goto LAB_140257d03;
  }
  *(undefined1 *)(param_1 + 0x658) = 2;
  (**(code **)(*plVar9 + 0xd80))(plVar9,0,1);
  pcVar3 = *(code **)(*param_1 + 0x5e8);
  if (pcVar3 == FUN_140972dde) {
    lVar6 = param_1[0x76];
    if (lVar6 != 0) goto LAB_140257e04;
    pcVar3 = *(code **)(*param_1 + 0x5f8);
    if (pcVar3 == FUN_144784df4) {
      if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
        if (((((*(int *)((longlong)param_1 + 0x75b4) != 0) &&
              (uVar10 = *(uint *)(param_1 + 0xeb6), -1 < (int)uVar10)) &&
             ((int)uVar10 < DAT_14c9647dc)) &&
            ((plVar9 = (longlong *)
                       ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
             plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)((longlong)param_1 + 0x75b4))))
            ) && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
            lVar6 = *plVar9;
          }
          else {
            lVar6 = 0;
          }
          lVar6 = lVar6 + 0x110;
          goto LAB_140257dde;
        }
      }
      else {
        lVar6 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
LAB_140257dde:
        if (lVar6 != 0) {
          lVar6 = *(longlong *)(lVar6 + 0x20);
          goto LAB_140257deb;
        }
      }
    }
    else {
      lVar6 = (*pcVar3)(param_1);
LAB_140257deb:
      if (lVar6 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0x3b0);
        goto LAB_140257dfb;
      }
    }
  }
  else {
    lVar6 = (*pcVar3)(param_1);
LAB_140257dfb:
    if (lVar6 != 0) {
LAB_140257e04:
      if ((*(byte *)(lVar6 + 0x39a) & 8) == 0) goto LAB_140257d03;
    }
  }
  lVar6 = param_1[0x10b];
  if (lVar6 == 0) goto LAB_140257d03;
  lVar7 = *(longlong *)(lVar6 + 0x1518);
  plVar9 = *(longlong **)(lVar6 + 0x1520);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x260) - 1U < 2) {
      if ((*(int *)(lVar7 + 600) != -1) && (*(int *)(lVar7 + 0x25c) != -1)) {
LAB_140257c2a:
        _X = *(double *)(lVar7 + 0x268);
        if ((((-DAT_14cb71028 < _X) &&
             (((_X < DAT_14cb71028 && (-DAT_14cb71030 < *(double *)(lVar7 + 0x270))) &&
              (*(double *)(lVar7 + 0x270) < DAT_14cb71030)))) &&
            (((-DAT_14cb71038 < *(double *)(lVar7 + 0x278) &&
              (*(double *)(lVar7 + 0x278) < DAT_14cb71038)) && (iVar5 = _finite(_X), iVar5 != 0))))
           && ((iVar5 = _finite(*(double *)(lVar7 + 0x270)), iVar5 != 0 &&
               (iVar5 = _finite(*(double *)(lVar7 + 0x278)), iVar5 != 0)))) goto LAB_140257cf4;
      }
    }
    else if (*(int *)(lVar7 + 0x260) == 3) goto LAB_140257c2a;
    (**(code **)(*param_1 + 0x928))(param_1,4);
    *(undefined1 *)(param_1 + 0x658) = 0;
  }
LAB_140257cf4:
  if (plVar9 != (longlong *)0x0) {
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
  }
LAB_140257d03:
  if ((char)param_1[0x2f] == '\x03') {
    *(undefined4 *)(param_1 + 0x65b) = 0;
    if (*(int *)((longlong)param_1 + 0x32dc) < 0) {
      FUN_14482f6fa(param_1 + 0x65a,0);
    }
    *(undefined1 *)((longlong)param_1 + 0x331c) = 0;
    if (*(int *)((longlong)param_1 + 0x32ec) < 0) {
      *(undefined4 *)(param_1 + 0x65d) = 0;
      FUN_141744912(param_1 + 0x65c,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x65d) = 0;
    }
    iVar5 = *(int *)((longlong)param_1 + 0x32fc);
    FUN_1402c741b(param_1[0x65e],(int)param_1[0x65f]);
    *(undefined4 *)(param_1 + 0x65f) = 0;
    if ((iVar5 < 0) && (*(int *)((longlong)param_1 + 0x32fc) != 0)) {
      FUN_1487be4e2(param_1 + 0x65e);
    }
    *(undefined4 *)(param_1 + 0x660) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3304) = 0;
    *(undefined4 *)((longlong)param_1 + 0x330c) = 0xffffffff;
    param_1[0x662] = 0;
    *(undefined4 *)(param_1 + 0x663) = 0xffffffff;
    uVar4 = param_1[5];
    if (uVar4 < 0xffffffff00000000) {
      plVar9 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar9 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x000140257f52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x58))(plVar9,param_1,uVar4,0x22);
      return;
    }
    uVar10 = (uint)uVar4;
    if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c998088)) {
      puVar8 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar8 = DAT_14c998080;
      }
      if ((*(uint *)(puVar8 + ((uint)(uVar4 >> 3) & 0xffffffc)) >> (uVar10 & 0x1f) & 1) != 0) {
        lVar7 = DAT_14c998060 + (ulonglong)(uVar10 & 0x7fffffff) * 0x68;
        lVar6 = *(longlong *)(lVar7 + 0x18);
        if (*(longlong *)(lVar7 + 0x18) == 0) {
          lVar6 = lVar7 + 8;
        }
        *(uint *)(lVar6 + 4) = *(uint *)(lVar6 + 4) | 4;
        *(byte *)(lVar7 + 0x60) = *(byte *)(lVar7 + 0x60) | 1;
      }
    }
  }
  return;
}



// FUNCTION 140257f56 FUN_140257f56 body=14 status=ok
// SIG undefined FUN_140257f56(void)

void FUN_140257f56(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_140257f64();
    return;
  }
  return;
}



// FUNCTION 140257f64 FUN_140257f64 body=450 status=ok
// SIG undefined FUN_140257f64(void)

void FUN_140257f64(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,4);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14025807f:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1402580bc:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 4;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_140257fba;
LAB_140257faf:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_140257fba:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x3fea) goto code_r0x000140257fe6;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14025803c:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1402580bc;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14025807f;
code_r0x000140257fe6:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_14025803c;
    }
  }
  goto LAB_140257faf;
}



// FUNCTION 140258126 FUN_140258126 body=1762 status=ok
// SIG undefined FUN_140258126(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140258126(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong lVar16;
  bool bVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined1 local_160;
  double local_150;
  double local_148;
  double local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  double local_118;
  double dStack_110;
  undefined1 local_108 [16];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_14025891a(param_1,param_1 + 9);
  if ((char)param_1[0x5b] != '\0') {
    lVar10 = (longlong)*(int *)(*param_1 + 0x1550);
    if (lVar10 != 0) {
      lVar16 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x1548) + lVar16);
        if ((lVar2 != 0) && (*(char *)(lVar2 + 0x40) == (char)param_1[0x5b])) goto LAB_14025874a;
        lVar16 = lVar16 + 0x10;
      } while (lVar10 * 0x10 != lVar16);
    }
    *(undefined1 *)(param_1 + 0x5b) = 0;
  }
  cVar9 = FUN_14025887a(param_1);
  if (cVar9 != '\0') {
LAB_14025874a:
    FUN_14025891a(param_1,param_1 + 0x23);
  }
  if ((*param_1 != 0) && (*(longlong *)(&DAT_00006850 + *param_1) != 0)) {
    if ((char)param_1[0x26] == '\x04') {
      bVar17 = param_1[0x2a] != 0;
    }
    else {
      bVar17 = false;
    }
    FUN_14025880a(*(longlong *)(&DAT_00006850 + *param_1),DAT_14cbcb2e8,bVar17);
  }
  if (param_1[0x4b] == 0) goto LAB_1402581f4;
  if ((param_1[0x4c] != 0) && (plVar11 = (longlong *)param_1[0x4d], plVar11 != (longlong *)0x0)) {
    if (*(code **)(*plVar11 + 0x20) == (code *)&LAB_144a7e90a) {
      plVar11 = plVar11 + 0x143;
    }
    else {
      plVar11 = (longlong *)(**(code **)(*plVar11 + 0x20))(plVar11);
    }
    if ((int)plVar11[6] != *(int *)((longlong)plVar11 + 0x5c)) {
      plVar13 = plVar11 + 0xc;
      if ((longlong *)plVar11[0xd] != (longlong *)0x0) {
        plVar13 = (longlong *)plVar11[0xd];
      }
      iVar12 = *(int *)((longlong)plVar13 +
                       (ulonglong)((int)plVar11[0xe] - 1U & *(uint *)(param_1 + 0x4e)) * 4);
      if (iVar12 != -1) {
        do {
          if (*(uint *)(plVar11[5] + (longlong)iVar12 * 0xe0) == *(uint *)(param_1 + 0x4e)) {
            lVar10 = param_1[0x4c];
            if ((lVar10 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(lVar10);
            }
            if ((lVar10 != 0) && (plVar11 = (longlong *)param_1[0x4d], plVar11 != (longlong *)0x0))
            {
              lVar10 = param_1[0x4c];
              if ((lVar10 != 0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c(lVar10);
                plVar11 = (longlong *)param_1[0x4d];
              }
              if (lVar10 == 0) {
                plVar11 = (longlong *)0x0;
              }
              lVar10 = (**(code **)(*plVar11 + 0x10))();
              if (lVar10 != 0) {
                puVar14 = &DAT_14cbcb1e0;
                if ((param_1[0x4c] == 0) ||
                   (plVar11 = (longlong *)param_1[0x4d], plVar11 == (longlong *)0x0))
                goto LAB_1402583eb;
                if (*(code **)(*plVar11 + 0x20) == (code *)&LAB_144a7e90a) {
                  plVar11 = plVar11 + 0x143;
                }
                else {
                  plVar11 = (longlong *)(**(code **)(*plVar11 + 0x20))(plVar11);
                }
                if ((int)plVar11[6] == *(int *)((longlong)plVar11 + 0x5c)) goto LAB_1402583eb;
                uVar1 = *(uint *)(param_1 + 0x4e);
                plVar13 = plVar11 + 0xc;
                if ((longlong *)plVar11[0xd] != (longlong *)0x0) {
                  plVar13 = (longlong *)plVar11[0xd];
                }
                iVar12 = *(int *)((longlong)plVar13 +
                                 (ulonglong)((int)plVar11[0xe] - 1U & uVar1) * 4);
                if (iVar12 == -1) goto LAB_1402583eb;
                lVar10 = plVar11[5];
                iVar15 = iVar12;
                goto LAB_1402583bc;
              }
            }
            break;
          }
          iVar12 = *(int *)((longlong)iVar12 * 0xe0 + plVar11[5] + 0xd0);
        } while (iVar12 != -1);
      }
    }
  }
  goto LAB_140258415;
  while (iVar15 = *(int *)((longlong)iVar15 * 0xe0 + lVar10 + 0xd0), iVar15 != -1) {
LAB_1402583bc:
    if (*(uint *)(lVar10 + (longlong)iVar15 * 0xe0) == uVar1) goto LAB_1402583d0;
  }
  goto LAB_1402583eb;
  while (iVar12 = *(int *)(lVar16 + 0xd0), iVar12 != -1) {
LAB_1402583d0:
    lVar16 = lVar10 + (longlong)iVar12 * 0xe0;
    if (*(uint *)(lVar10 + (longlong)iVar12 * 0xe0) == uVar1) goto LAB_1402583e7;
  }
  lVar16 = 0;
LAB_1402583e7:
  puVar14 = (undefined8 *)(lVar16 + 0x10);
LAB_1402583eb:
  FUN_14066734e(puVar14,&local_118);
  *(undefined4 *)(param_1 + 0x4f) = local_f8;
  *(undefined4 *)((longlong)param_1 + 0x27c) = uStack_f4;
  *(undefined4 *)(param_1 + 0x50) = uStack_f0;
  *(undefined4 *)((longlong)param_1 + 0x284) = uStack_ec;
  param_1[0x51] = local_e8;
LAB_140258415:
  FUN_140258d06(param_1,&local_118);
  dVar6 = (double)param_1[0x51] - (double)local_108._0_8_;
  dStack_110 = (double)param_1[0x50] - dStack_110;
  local_118 = (double)param_1[0x4f] - local_118;
  dVar3 = 0.0;
  if ((((dStack_110 != 0.0) || (NAN(dStack_110))) || (local_118 != 0.0)) || (NAN(local_118))) {
    dVar3 = atan2(dStack_110,local_118);
    dVar3 = dVar3 * 57.29577951308232;
  }
  dVar18 = SQRT(local_118 * local_118 + dStack_110 * dStack_110);
  dVar4 = 0.0;
  if (((dVar6 != 0.0) || (NAN(dVar6))) || ((dVar18 != 0.0 || (NAN(dVar18))))) {
    dVar4 = atan2(dVar6,dVar18);
    dVar4 = dVar4 * 57.29577951308232;
  }
  plVar11 = (longlong *)param_1[0x4b];
  FUN_140258d06(param_1,&local_138);
  auVar19._8_8_ = dVar3;
  auVar19._0_8_ = dVar4;
  auVar19 = divpd(auVar19,_DAT_1499387d0);
  auVar19 = roundpd(auVar19,auVar19,3);
  auVar20 = roundpd(in_XMM2,ZEXT816(0),3);
  dVar18 = (dVar4 - auVar19._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar5 = (dVar3 - auVar19._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar7 = (0.0 - auVar20._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar8 = (0.0 - auVar20._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar3 = sin(dVar18);
  dVar6 = sin(dVar5);
  dVar4 = sin(dVar7);
  sin(dVar8);
  dVar18 = cos(dVar18);
  dVar5 = cos(dVar5);
  dVar7 = cos(dVar7);
  cos(dVar8);
  dVar8 = dVar6 * dVar3 * dVar4 + dVar5 * dVar18 * dVar7;
  local_118 = dVar3 * dVar6 * dVar7 - dVar18 * dVar5 * dVar4;
  dStack_110 = -(dVar3 * dVar5 * dVar7) - dVar18 * dVar6 * dVar4;
  local_108._8_4_ = SUB84(dVar8,0);
  local_108._0_8_ = -(dVar5 * dVar3 * dVar4) + dVar6 * dVar18 * dVar7;
  local_108._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  local_b8 = local_138;
  uStack_b0 = uStack_130;
  local_a8 = local_128;
  local_160 = 0;
  local_168 = 0;
  FUN_144927ad4(plVar11,&local_b8,&local_118,0);
  local_118 = 1.0;
  dStack_110 = 1.0;
  local_108._0_8_ = 0x3ff0000000000000;
  if (*(code **)(*plVar11 + 0x478) == FUN_14028a216) {
    FUN_14028a216(plVar11);
  }
  else {
    (**(code **)(*plVar11 + 0x478))(plVar11,&local_118);
  }
  lVar10 = param_1[0x4b];
  FUN_140258d06(param_1,&local_118);
  local_150 = SQRT(((double)param_1[0x51] - (double)local_108._0_8_) *
                   ((double)param_1[0x51] - (double)local_108._0_8_) +
                   ((double)param_1[0x4f] - local_118) * ((double)param_1[0x4f] - local_118) +
                   ((double)param_1[0x50] - dStack_110) * ((double)param_1[0x50] - dStack_110));
  local_140 = DAT_14c8463b0 * local_150;
  local_148 = DAT_14c8463a8 * local_150;
  local_150 = local_150 * DAT_14c8463a0;
  FUN_1404e0f62(lVar10,DAT_14cbcb2f0);
LAB_1402581f4:
  if ((local_a0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14025880a FUN_14025880a body=110 status=ok
// SIG undefined FUN_14025880a(void)

void FUN_14025880a(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  if (param_3 == '\0') {
    FUN_1400bc8c2();
  }
  else {
    FUN_1400bc96c(param_1 + 0x41b0,&local_18);
  }
  *(byte *)(param_1 + 0x5b5) =
       *(byte *)(param_1 + 0x5b5) & 0xfd | *(char *)(param_1 + 0x41b0) * '\x02';
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14025887a FUN_14025887a body=160 status=ok
// SIG undefined FUN_14025887a(void)

bool FUN_14025887a(longlong *param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((((*(byte *)(param_1 + 0x37) < 2) && (*(float *)((longlong)param_1 + 0x1bc) <= 0.0)) &&
      (ABS((double)param_1[0x47] - (double)param_1[0x44]) <= 9.999999747378752e-05)) &&
     ((ABS((double)param_1[0x48] - (double)param_1[0x45]) <= 9.999999747378752e-05 &&
      (ABS((double)param_1[0x49] - (double)param_1[0x46]) <= 9.999999747378752e-05)))) {
    if ((*param_1 == 0) || (*(longlong *)(&DAT_00006850 + *param_1) == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = (&DAT_00001100)[*(longlong *)(&DAT_00006850 + *param_1)] == '\f';
    }
  }
  return bVar1;
}



// FUNCTION 14025891a FUN_14025891a body=1002 status=ok
// SIG undefined FUN_14025891a(void)

void FUN_14025891a(longlong *param_1,longlong *param_2)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  double dStack_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  double local_a0;
  longlong local_98;
  undefined1 local_88 [16];
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*param_1 != 0) {
    FUN_1447210f0();
  }
  if ((*param_2 != 0) && (plVar7 = (longlong *)param_2[1], plVar7 != (longlong *)0x0)) {
    if (*(code **)(*plVar7 + 0x20) == (code *)&LAB_144a7e90a) {
      plVar7 = plVar7 + 0x143;
    }
    else {
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7);
    }
    if ((int)plVar7[6] != *(int *)((longlong)plVar7 + 0x5c)) {
      uVar8 = *(uint *)(param_2 + 2);
      plVar10 = plVar7 + 0xc;
      if ((longlong *)plVar7[0xd] != (longlong *)0x0) {
        plVar10 = (longlong *)plVar7[0xd];
      }
      iVar9 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar7[0xe] - 1U & uVar8) * 4);
      if (iVar9 != -1) {
        do {
          if (*(uint *)(plVar7[5] + (longlong)iVar9 * 0xe0) == uVar8) {
            puVar11 = &DAT_14cbcb1e0;
            if ((*param_2 == 0) || (plVar7 = (longlong *)param_2[1], plVar7 == (longlong *)0x0))
            goto LAB_140258aab;
            if (*(code **)(*plVar7 + 0x20) == (code *)&LAB_144a7e90a) {
              plVar7 = plVar7 + 0x143;
            }
            else {
              plVar7 = (longlong *)(**(code **)(*plVar7 + 0x20))(plVar7);
              uVar8 = *(uint *)(param_2 + 2);
            }
            if ((int)plVar7[6] == *(int *)((longlong)plVar7 + 0x5c)) goto LAB_140258aab;
            plVar10 = plVar7 + 0xc;
            if ((longlong *)plVar7[0xd] != (longlong *)0x0) {
              plVar10 = (longlong *)plVar7[0xd];
            }
            iVar9 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar7[0xe] - 1U & uVar8) * 4);
            if (iVar9 == -1) goto LAB_140258aab;
            lVar2 = plVar7[5];
            iVar13 = iVar9;
            goto LAB_140258a65;
          }
          iVar9 = *(int *)((longlong)iVar9 * 0xe0 + plVar7[5] + 0xd0);
        } while (iVar9 != -1);
      }
    }
  }
  goto LAB_140258c88;
  while (iVar13 = *(int *)((longlong)iVar13 * 0xe0 + lVar2 + 0xd0), iVar13 != -1) {
LAB_140258a65:
    if (*(uint *)(lVar2 + (longlong)iVar13 * 0xe0) == uVar8) goto LAB_140258a87;
  }
  goto LAB_140258aab;
  while (iVar9 = *(int *)(lVar12 + 0xd0), iVar9 != -1) {
LAB_140258a87:
    lVar12 = lVar2 + (longlong)iVar9 * 0xe0;
    if (*(uint *)(lVar2 + (longlong)iVar9 * 0xe0) == uVar8) goto LAB_140258aa7;
  }
  lVar12 = 0;
LAB_140258aa7:
  puVar11 = (undefined8 *)(lVar12 + 0x10);
LAB_140258aab:
  cVar6 = FUN_1412c3426(puVar11);
  if (((cVar6 != '\0') && ((longlong *)*param_1 != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(*(longlong *)*param_1 + 0x700))(), cVar6 != '\0')) {
    local_d8 = (undefined4)param_2[3];
    uStack_d4 = *(undefined4 *)((longlong)param_2 + 0x1c);
    uStack_d0 = (undefined4)param_2[4];
    uStack_cc = *(undefined4 *)((longlong)param_2 + 0x24);
    local_c8 = (double)param_2[5];
    dStack_c0 = (double)param_2[6];
    lVar2 = param_2[7];
    local_b8 = lVar2;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar2);
    }
    local_a0 = (double)param_2[10];
    local_b0 = (undefined4)param_2[8];
    uStack_ac = *(undefined4 *)((longlong)param_2 + 0x44);
    uStack_a8 = (undefined4)param_2[9];
    uStack_a4 = *(undefined4 *)((longlong)param_2 + 0x4c);
    local_98 = param_2[0xb];
    if ((local_98 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    if (((lVar2 == 0) && ((char)local_d8 != '\0')) ||
       (FUN_1441614f6(param_1,param_2,&local_d8), local_b8 == 0)) {
      dVar15 = (double)CONCAT44(uStack_cc,uStack_d0);
      dVar3 = local_c8;
      dVar1 = dStack_c0;
    }
    else {
      dVar15 = (double)CONCAT44(uStack_ac,local_b0) * *(double *)(local_b8 + 0x280);
      dVar16 = (double)CONCAT44(uStack_a4,uStack_a8) * *(double *)(local_b8 + 0x288);
      dVar14 = local_a0 * *(double *)(local_b8 + 0x290);
      dVar4 = *(double *)(local_b8 + 0x240);
      dVar5 = *(double *)(local_b8 + 0x248);
      dVar3 = *(double *)(local_b8 + 0x250);
      dVar1 = *(double *)(local_b8 + 600);
      dVar17 = dVar16 * dVar4 - dVar15 * dVar5;
      dVar18 = dVar14 * dVar5 - dVar16 * dVar3;
      dVar19 = dVar15 * dVar3 - dVar4 * dVar14;
      dVar18 = dVar18 + dVar18;
      dVar19 = dVar19 + dVar19;
      dVar17 = dVar17 + dVar17;
      dVar15 = (dVar17 * dVar5 - dVar19 * dVar3) + dVar1 * dVar18 + dVar15 +
               *(double *)(local_b8 + 0x260);
      dVar3 = (dVar3 * dVar18 - dVar4 * dVar17) + *(double *)(local_b8 + 600) * dVar19 + dVar16 +
              *(double *)(local_b8 + 0x268);
      dVar1 = dVar17 * dVar1 + dVar14 + (dVar19 * dVar4 - dVar18 * dVar5) +
              *(double *)(local_b8 + 0x270);
    }
    if (param_2[0xb] != 0) {
      local_88._8_4_ = SUB84(dVar3,0);
      local_88._0_8_ = dVar15;
      local_88._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      local_e8 = 0;
      local_78 = dVar1;
      FUN_140d93b16(param_2[0xb],local_88,0,0);
    }
  }
LAB_140258c88:
  if ((local_70 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140258d06 FUN_140258d06 body=215 status=ok
// SIG undefined FUN_140258d06(void)

undefined4 * FUN_140258d06(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  bool bVar9;
  
  *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *param_2 = (undefined4)DAT_14c8464e0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  if ((longlong *)*param_1 == (longlong *)0x0) {
    return param_2;
  }
  cVar4 = (**(code **)(*(longlong *)*param_1 + 0x700))();
  if (cVar4 != '\0') {
    if ((longlong *)*param_1 == (longlong *)0x0) {
      return param_2;
    }
    plVar5 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x5d0))();
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x6b8))(plVar5);
      lVar7 = *param_1;
      bVar9 = lVar7 == lVar6;
      goto LAB_140258d76;
    }
  }
  lVar7 = *param_1;
  bVar9 = false;
LAB_140258d76:
  if (lVar7 != 0) {
    if ((*(longlong *)(&DAT_00006850 + lVar7) == 0) ||
       (lVar6 = *(longlong *)(*(longlong *)(&DAT_00006850 + lVar7) + 0x44c0), lVar6 == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar6 + 0x580 + (ulonglong)(bVar9 ^ 1) * 8);
    }
    plVar5 = (longlong *)(**(code **)(*(longlong *)(lVar7 + 0x3a30) + 0x20))(lVar7 + 0x3a30);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x4b0))(plVar5,param_2,uVar8);
    }
  }
  return param_2;
}



// FUNCTION 140258ddd FUN_140258ddd body=477 status=ok
// SIG undefined FUN_140258ddd(void)

undefined8
FUN_140258ddd(undefined8 param_1,undefined8 param_2,double *param_3,undefined8 param_4,
             undefined4 param_5,char param_6,undefined1 param_7,undefined8 param_8)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  char local_40;
  undefined1 local_38;
  undefined8 local_30;
  double local_28;
  double dStack_20;
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_6 == '\0') {
    dVar1 = param_3[4] - param_3[1];
    local_28 = param_3[3] - *param_3;
    dVar2 = local_28 * local_28 + dVar1 * dVar1;
    if ((dVar2 != 1.0) || (NAN(dVar2))) {
      if (dVar2 < 9.99999993922529e-09) goto LAB_140258f9c;
      local_28 = local_28 * (1.0 / SQRT(dVar2));
      dStack_20 = dVar1 * (1.0 / SQRT(dVar2));
    }
    else {
      local_18 = param_3[5] - param_3[2];
      dStack_20 = dVar1;
      if ((local_18 == 0.0) && (!NAN(local_18))) goto LAB_140258e95;
    }
    local_18 = 0.0;
    dVar1 = dStack_20;
  }
  else {
    dVar1 = param_3[5] - param_3[2];
    dStack_20 = param_3[4] - param_3[1];
    local_28 = param_3[3] - *param_3;
    dVar2 = dVar1 * dVar1 + local_28 * local_28 + dStack_20 * dStack_20;
    if ((dVar2 == 1.0) && (local_18 = dVar1, !NAN(dVar2))) goto LAB_140258e95;
    if (9.99999993922529e-09 <= dVar2) {
      dVar2 = 1.0 / SQRT(dVar2);
      dVar1 = dVar1 * dVar2;
      local_28 = local_28 * dVar2;
      dStack_20 = dStack_20 * dVar2;
      local_18 = dVar1;
      goto LAB_140258e95;
    }
LAB_140258f9c:
    local_28 = DAT_14c8464e0;
    dVar1 = DAT_14c8464e0;
    dStack_20 = DAT_14c8464e8;
    local_18 = DAT_14c8464f0;
  }
LAB_140258e95:
  local_30 = param_8;
  local_38 = param_7;
  local_40 = param_6;
  local_48 = param_5;
  FUN_140258fbb(param_1,dVar1,&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140258fbb FUN_140258fbb body=752 status=ok
// SIG undefined FUN_140258fbb(void)

double * FUN_140258fbb(double *param_1,double *param_2,double *param_3,double *param_4,float param_5
                      ,char param_6,char param_7,float *param_8)

{
  int iVar1;
  double dVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  
  lVar3 = DAT_14cb1d0f0;
  if (((param_7 == '\0') &&
      (*(float *)((longlong)param_2 + 0x34) <= param_5 * 0.25 &&
       param_5 * 0.25 != *(float *)((longlong)param_2 + 0x34))) ||
     ((param_6 != '\0' && (0.5 < ABS(param_3[2]))))) {
    param_1[2] = param_3[2];
    dVar11 = param_3[1];
    *param_1 = *param_3;
    param_1[1] = dVar11;
  }
  else {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar6 = 0;
    }
    else if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar6 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar6 = 1;
    }
    if (param_6 == '\0') {
      dVar7 = param_2[1] - param_4[1];
      dVar11 = *param_2 - *param_4;
      dVar9 = dVar11 * dVar11 + dVar7 * dVar7;
      if ((dVar9 != 1.0) || (NAN(dVar9))) {
        dVar8 = DAT_14c8464e8;
        dVar10 = DAT_14c8464f0;
        dVar2 = DAT_14c8464e0;
        if (9.99999993922529e-09 <= dVar9) {
          dVar8 = dVar7 * (1.0 / SQRT(dVar9));
          dVar10 = 0.0;
          dVar2 = dVar11 * (1.0 / SQRT(dVar9));
        }
      }
      else {
        dVar8 = dVar7;
        dVar10 = (double)(-(ulonglong)(param_2[2] - param_4[2] == 0.0) &
                         (ulonglong)(param_2[2] - param_4[2]));
        dVar2 = dVar11;
      }
    }
    else {
      dVar9 = param_2[2] - param_4[2];
      dVar7 = param_2[1] - param_4[1];
      dVar11 = *param_2 - *param_4;
      dVar13 = dVar9 * dVar9 + dVar11 * dVar11 + dVar7 * dVar7;
      if (((dVar13 != 1.0) || (dVar8 = dVar7, dVar10 = dVar9, dVar2 = dVar11, NAN(dVar13))) &&
         (dVar8 = DAT_14c8464e8, dVar10 = DAT_14c8464f0, dVar2 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar13)) {
        dVar13 = 1.0 / SQRT(dVar13);
        dVar8 = dVar7 * dVar13;
        dVar10 = dVar9 * dVar13;
        dVar2 = dVar11 * dVar13;
      }
    }
    if (param_7 == '\0') {
      fVar12 = *(float *)(lVar3 + uVar6 * 4);
    }
    else {
      fVar12 = 0.5;
      param_5 = param_5 * 0.5;
    }
    param_5 = *(float *)((longlong)param_2 + 0x34) / param_5;
    if (fVar12 <= param_5) {
      param_5 = fVar12;
    }
    *param_8 = param_5;
    dVar11 = (double)param_5;
    dVar9 = (dVar10 - param_3[2]) * dVar11 + param_3[2];
    dVar7 = (dVar8 - param_3[1]) * dVar11 + param_3[1];
    dVar11 = (dVar2 - *param_3) * dVar11 + *param_3;
    dVar13 = 1.0 / SQRT(dVar9 * dVar9 + dVar11 * dVar11 + dVar7 * dVar7);
    *param_1 = dVar13 * dVar11;
    param_1[1] = dVar7 * dVar13;
    param_1[2] = dVar9 * dVar13;
  }
  return param_1;
}



// FUNCTION 1402592ac FUN_1402592ac body=70 status=ok
// SIG undefined FUN_1402592ac(void)

void FUN_1402592ac(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_144911d18();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14474875a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1402592f2 FUN_1402592f2 body=263 status=ok
// SIG undefined FUN_1402592f2(void)

void FUN_1402592f2(int *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((uint)param_1[0x11] < 4) {
    uVar2 = FUN_144735dd8(param_2,param_1 + (longlong)*param_1 * 2 + 8,1);
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xc) + (longlong)param_1[0x10] * 8);
    if (lVar3 == 0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14ca27888) {
        FUN_144b3d300(&DAT_14ca27888);
        if (DAT_14ca27888 == -1) {
          FUN_1446f470e(&DAT_14ca27880,L"Scene view state exposure readback",1);
          _Init_thread_footer(&DAT_14ca27888);
        }
      }
      lVar3 = FUN_14001cc68(0x58,0x10);
      FUN_1402593fa(lVar3,DAT_14ca27880);
      *(longlong *)(*(longlong *)(param_1 + 0xc) + (longlong)param_1[0x10] * 8) = lVar3;
    }
    FUN_1401e3a19(param_2,lVar3,uVar2,0);
    param_1[0x10] = param_1[0x10] + 1U & 3;
    uVar1 = 4;
    if (param_1[0x11] + 1U < 4) {
      uVar1 = param_1[0x11] + 1U;
    }
    param_1[0x11] = uVar1;
  }
  return;
}



// FUNCTION 1402593fa FUN_1402593fa body=51 status=ok
// SIG undefined FUN_1402593fa(void)

undefined8 * FUN_1402593fa(undefined8 *param_1)

{
  FUN_14047abb0();
  *param_1 = &PTR_FUN_14a37f800;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 14025942e FUN_14025942e body=38 status=ok
// SIG undefined FUN_14025942e(void)

undefined8 FUN_14025942e(undefined8 param_1,int param_2)

{
  FUN_140259454();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140259454 FUN_140259454 body=80 status=ok
// SIG undefined FUN_140259454(void)

void FUN_140259454(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aac2f70;
  if ((longlong *)param_1[0x51] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x51] + 0x10))();
  }
  *param_1 = &PTR_FUN_14aac2e30;
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_1402594a4(param_1);
  return;
}



// FUNCTION 1402594a4 FUN_1402594a4 body=171 status=ok
// SIG undefined FUN_1402594a4(void)

void FUN_1402594a4(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aac3170;
  if (param_1[0x20] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x20] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14aac3130;
  if (param_1[0x18] != 0) {
    plVar3 = param_1 + 0x1c;
    if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x1a];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0xe] != 0) {
    plVar3 = param_1 + 0x12;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x10];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  *param_1 = &PTR_LAB_14aabfdc0;
                    /* WARNING: Could not recover jumptable at 0x0001402594f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 140259550 FUN_140259550 body=353 status=ok
// SIG undefined FUN_140259550(void)

void FUN_140259550(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1402595d5;
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
LAB_1402595d5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1402596b2 FUN_1402596b2 body=373 status=ok
// SIG undefined FUN_1402596b2(void)

void FUN_1402596b2(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14025973b;
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
LAB_14025973b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 140259828 FUN_140259828 body=139 status=ok
// SIG undefined FUN_140259828(void)

void FUN_140259828(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1402598b4(param_1,&local_40);
  if (local_40 != 0) {
    local_30 = param_2;
    local_28 = param_3;
    FUN_1447cd2ec();
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402598b4 FUN_1402598b4 body=264 status=ok
// SIG undefined FUN_1402598b4(void)

undefined8 * FUN_1402598b4(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_1402598d8;
  FUN_1402599be(0,&local_38);
  FUN_14018932e(&local_30,param_1 + -0x20f,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_1402598d8;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x00014025999a:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x00014025999a;
      }
    }
  }
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
LAB_1402598d8:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402599be FUN_1402599be body=120 status=ok
// SIG undefined FUN_1402599be(void)

undefined8 * FUN_1402599be(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa9c24) {
    FUN_144b3d300(&DAT_14caa9c24);
    if (DAT_14caa9c24 == -1) {
      FUN_1446ddc76(&DAT_14caa9c1c,"OnEndPlay",1);
      _Init_thread_footer(&DAT_14caa9c24);
    }
  }
  *param_2 = DAT_14caa9c1c;
  return param_2;
}



// FUNCTION 140259a36 FUN_140259a36 body=78 status=ok
// SIG undefined FUN_140259a36(void)

undefined8 *
FUN_140259a36(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  
  FUN_140259a84(param_1,param_2,param_4,param_5);
  *param_1 = &PTR_FUN_14aaeb7f0;
  plVar1 = (longlong *)*param_3;
  param_1[0x41] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x42) = (int)param_3[1];
  return param_1;
}



// FUNCTION 140259a84 FUN_140259a84 body=358 status=ok
// SIG undefined FUN_140259a84(void)

undefined8 *
FUN_140259a84(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_140114c18(param_1,param_2,param_4);
  *param_1 = &PTR_LAB_14aaf76e0;
  if (*param_3 != 0) {
    lVar5 = FUN_140259bea();
    lVar1 = *param_3;
    if (lVar1 != 0) {
      lVar6 = 0;
      if ((lVar5 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_140259aed;
      if (*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar6 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30) {
          lVar6 = lVar1;
        }
        goto LAB_140259aed;
      }
    }
  }
  lVar6 = 0;
LAB_140259aed:
  param_1[0x33] = lVar6;
  lVar1 = *param_3;
  param_1[0x34] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar4 = DAT_14c950c29;
  lVar1 = param_3[1];
  param_1[0x35] = lVar1;
  if ((lVar1 != 0 & bVar4) == 1) {
    FUN_1456cec3c();
    bVar4 = DAT_14c950c29;
  }
  lVar1 = param_3[2];
  *(undefined4 *)((longlong)param_1 + 0x1b3) = *(undefined4 *)((longlong)param_3 + 0x13);
  *(int *)(param_1 + 0x36) = (int)lVar1;
  lVar1 = param_3[3];
  param_1[0x37] = lVar1;
  if ((lVar1 != 0 & bVar4) == 1) {
    FUN_1456cec3c();
  }
  lVar1 = param_3[5];
  param_1[0x38] = param_3[4];
  param_1[0x39] = lVar1;
  param_1[0x3a] = param_3[6];
  lVar1 = param_3[7];
  param_1[0x3b] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  lVar1 = param_3[8];
  lVar5 = param_3[9];
  uVar3 = *(undefined8 *)((longlong)param_3 + 0x54);
  *(undefined8 *)((longlong)param_1 + 0x1ec) = *(undefined8 *)((longlong)param_3 + 0x4c);
  *(undefined8 *)((longlong)param_1 + 500) = uVar3;
  param_1[0x3c] = lVar1;
  param_1[0x3d] = lVar5;
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xc;
  return param_1;
}



// FUNCTION 140259bea FUN_140259bea body=221 status=ok
// SIG undefined FUN_140259bea(void)

longlong FUN_140259bea(void)

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
  if (DAT_14cad8a90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a97ddb;
    local_40 = &LAB_14585e8a9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1d8;
    FUN_14081cfa3(L"/Script/Engine",L"Font",&DAT_14cad8a90,&DAT_147a97dda);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad8a90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140259cc8 FUN_140259cc8 body=43 status=ok
// SIG undefined FUN_140259cc8(void)

void FUN_140259cc8(longlong param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    FUN_140259cf4();
    if (DAT_14cb99a60 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140259cef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*DAT_14cb99a60 + 8))();
      return;
    }
  }
  return;
}



// FUNCTION 140259cf4 FUN_140259cf4 body=127 status=ok
// SIG undefined FUN_140259cf4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140259cf4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb99a70) {
    FUN_144b3d300(&DAT_14cb99a70);
    if (DAT_14cb99a70 == -1) {
      DAT_14cb99a50 = 0;
      DAT_14cb99a58 = 0;
      DAT_14cb99a60 = 0;
      _DAT_14cb99a68 = 0xffffffff;
      atexit(FUN_143f8354b);
      _Init_thread_footer(&DAT_14cb99a70);
      return;
    }
  }
  return;
}



// FUNCTION 140259d74 FUN_140259d74 body=171 status=ok
// SIG undefined FUN_140259d74(void)

undefined8 * FUN_140259d74(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a37d488;
  lVar4 = param_1[7];
  if (lVar4 != 0) {
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
  FUN_140259e20(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140259e20 FUN_140259e20 body=86 status=ok
// SIG undefined FUN_140259e20(void)

void FUN_140259e20(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_LAB_14a37d360;
  FUN_1402ce13e();
  lVar4 = 0x30;
  do {
    plVar3 = *(longlong **)((longlong)param_1 + lVar4);
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
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != 0x10);
  return;
}



// FUNCTION 140259e76 FUN_140259e76 body=69 status=ok
// SIG undefined FUN_140259e76(void)

void FUN_140259e76(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,1);
  }
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140259eb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 140259ebc FUN_140259ebc body=79 status=ok
// SIG undefined FUN_140259ebc(void)

undefined8 * FUN_140259ebc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a37d4c0;
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140187f4a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140259f0c FUN_140259f0c body=111 status=ok
// SIG undefined FUN_140259f0c(void)

void FUN_140259f0c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  if (DAT_14c992a90 == '\x01') {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xb8));
    FUN_140259f7c(*(longlong *)(param_1 + 0x28) + 0x160,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x000140259f57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xb8));
    return;
  }
  FUN_140259f7c(*(longlong *)(param_1 + 0x28) + 0x160,param_2,param_3);
  return;
}



// FUNCTION 140259f7c FUN_140259f7c body=336 status=ok
// SIG undefined FUN_140259f7c(void)

void FUN_140259f7c(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  
  iVar5 = *(int *)(param_2 + 0x18);
  if (iVar5 == -1) {
    uVar7 = *(uint *)(param_2 + 0x1c);
    piVar2 = (int *)(param_1 + (ulonglong)uVar7 * 4);
    *piVar2 = *piVar2 + 1;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    lVar1 = param_1 + (ulonglong)uVar7 * 0x10;
    iVar5 = *(int *)(lVar1 + 0x40);
    *(int *)(param_2 + 0x18) = iVar5;
    *(uint *)(lVar1 + 0x40) = iVar5 + 1U;
    if (*(uint *)(lVar1 + 0x44) < iVar5 + 1U) {
      FUN_140431d5c((longlong *)(lVar1 + 0x38),iVar5);
    }
    lVar1 = *(longlong *)(lVar1 + 0x38);
    lVar8 = (longlong)iVar5 * 0x20;
    *(longlong *)(lVar1 + lVar8) = param_2;
    *(undefined4 *)(lVar1 + 8 + lVar8) = 0;
    puVar3 = (undefined8 *)(lVar1 + 0x10 + lVar8);
    *puVar3 = 0;
    puVar3[1] = 0;
    iVar5 = *(int *)(param_2 + 0x18);
  }
  lVar8 = *(longlong *)(param_1 + 0x38 + (ulonglong)*(uint *)(param_2 + 0x1c) * 0x10);
  lVar1 = lVar8 + (longlong)iVar5 * 0x20;
  lVar8 = lVar8 + (longlong)iVar5 * 0x20;
  plVar6 = (longlong *)(lVar8 + 0x10);
  uVar7 = *(uint *)(lVar8 + 0x18);
  if ((int)uVar7 <= (int)param_3) {
    if ((int)uVar7 < (int)param_3) {
      do {
        iVar5 = *(int *)(param_1 + 0x110);
        *(uint *)(param_1 + 0x110) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0x114) < iVar5 + 1U) {
          FUN_140105448((longlong *)(param_1 + 0x108),iVar5);
        }
        *(ulonglong *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar5 * 8) = (ulonglong)uVar7;
        iVar4 = *(int *)(lVar1 + 0x18);
        *(uint *)(lVar1 + 0x18) = iVar4 + 1U;
        if (*(uint *)(lVar1 + 0x1c) < iVar4 + 1U) {
          FUN_1446f48e2(plVar6,iVar4);
        }
        *(int *)(*plVar6 + (longlong)iVar4 * 4) = iVar5;
        uVar7 = uVar7 + 1;
      } while (param_3 != uVar7);
    }
    return;
  }
  if (-1 < (int)param_3) {
    *(uint *)(lVar1 + 0x18) = param_3;
    FUN_14479f406(plVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_3);
}



// FUNCTION 14025a0ce FUN_14025a0ce body=140 status=ok
// SIG undefined FUN_14025a0ce(void)

void FUN_14025a0ce(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14025a15c(param_1 + 0xc0,0);
  iVar1 = *(int *)(param_1 + 0xb0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa8);
    lVar3 = 0;
    do {
      local_38 = *(undefined8 *)(lVar2 + lVar3);
      FUN_140608954(param_1 + 0xc0,&local_38);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14025a15c FUN_14025a15c body=36 status=ok
// SIG undefined FUN_14025a15c(void)

void FUN_14025a15c(longlong param_1,undefined4 param_2)

{
  FUN_14025a180();
  FUN_14025a180(param_1 + 0x10,param_2);
  return;
}



// FUNCTION 14025a180 FUN_14025a180 body=42 status=ok
// SIG undefined FUN_14025a180(void)

void FUN_14025a180(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_1403de8ba();
  return;
}



// FUNCTION 14025a1aa FUN_14025a1aa body=119 status=ok
// SIG undefined FUN_14025a1aa(void)

void FUN_14025a1aa(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_14025a222(param_1 + 0x15);
  FUN_140b76caa(param_1 + 0x15,0);
  if ((*(byte *)((longlong)param_1 + 0x17b) & 0x10) != 0) {
    LOCK();
    DAT_14ca813ac = DAT_14ca813ac + -1;
    UNLOCK();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014025a21e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14025a222 FUN_14025a222 body=159 status=ok
// SIG undefined FUN_14025a222(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14025a222(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  if (((DAT_14ca80750 != '\x01') || (DAT_14c842750 != '\x01')) ||
     (uVar2 = 0, *(char *)((longlong)param_1 + 0xe4) == '\0')) {
    if (((DAT_14ca81208 == 0x400) && (DAT_14c7585d8 == 0)) ||
       ((DAT_14ca81208 == 0x800 && (DAT_14c7585dc == 0)))) {
      uVar2 = _DAT_14ca81210 | 0xff;
    }
    else {
      uVar2 = DAT_14ca81208 | _DAT_14ca8120c | 0xff;
    }
  }
  uVar3 = 0x8ff;
  if (((int)param_1[0x1c] != 1) &&
     ((((longlong *)*param_1 == (longlong *)0x0 ||
       (cVar1 = (**(code **)(*(longlong *)*param_1 + 8))(), cVar1 == '\0')) ||
      ((*(byte *)((longlong)param_1 + 0xd3) & 0x10) == 0)))) {
    uVar3 = uVar2;
  }
  return uVar3;
}



// FUNCTION 14025a2c6 FUN_14025a2c6 body=76 status=ok
// SIG undefined FUN_14025a2c6(void)

void FUN_14025a2c6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  (**(code **)(*param_1 + 0x130))();
  iVar1 = DAT_14cb7fa40;
  lVar2 = (longlong)(int)DAT_14cb7fa40;
  DAT_14cb7fa40 = DAT_14cb7fa40 + 1;
  if (DAT_14cb7fa44 < DAT_14cb7fa40) {
    FUN_1457210ba(&DAT_14cb7fa38,iVar1);
  }
  *(longlong **)(DAT_14cb7fa38 + lVar2 * 8) = param_1;
  return;
}



// FUNCTION 14025a312 FUN_14025a312 body=189 status=ok
// SIG undefined FUN_14025a312(void)

void FUN_14025a312(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x660);
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar4);
    lVar4 = *(longlong *)(param_1 + 0x660);
  }
  else if (lVar4 == 0) {
    iVar2 = 0;
    iVar5 = 0;
    iVar3 = 0;
    iVar1 = 0;
    goto LAB_14025a367;
  }
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar4);
  }
  lVar4 = *(longlong *)(lVar4 + 0x188);
  iVar5 = *(int *)(lVar4 + 0xe8);
  iVar2 = *(int *)(lVar4 + 0xec);
  iVar3 = *(int *)(lVar4 + 0xf0);
  iVar1 = *(int *)(lVar4 + 0xf4);
LAB_14025a367:
  if ((((*(int *)(param_1 + 0x7ec) != iVar5) || (*(int *)(param_1 + 0x7f0) != iVar2)) ||
      (*(int *)(param_1 + 0x7f4) != iVar3)) || (*(int *)(param_1 + 0x7f8) != iVar1)) {
    FUN_147a2a4e0(param_1);
  }
  FUN_14025a3d0(param_1);
  return;
}



// FUNCTION 14025a3d0 FUN_14025a3d0 body=111 status=ok
// SIG undefined FUN_14025a3d0(void)

void FUN_14025a3d0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  FUN_14025a440();
  cVar1 = (**(code **)(*param_1 + 0x460))(param_1);
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) & 0xbf | cVar1 << 6;
  if ((param_1[0x14] != 0) && ((*(byte *)(param_1 + 0x17) & 0x60) == 0x20)) {
    return;
  }
  plVar2 = DAT_14caca218;
  if (DAT_14caca220 == 0) {
    plVar2 = (longlong *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014025a42a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x58))(plVar2,param_1);
  return;
}



// FUNCTION 14025a440 FUN_14025a440 body=597 status=ok
// SIG undefined FUN_14025a440(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14025a440(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  longlong local_98 [8];
  double local_58;
  double dStack_50;
  double local_48;
  undefined8 uStack_40;
  undefined1 local_33 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(byte *)((longlong)param_1 + 0x9c) = *(byte *)((longlong)param_1 + 0x9c) | 8;
  if (param_1[0xa9] == 0) {
    plVar1 = param_1 + 0x82;
    if (0 < DAT_14cad1ca0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cad1d4c) && (FUN_144b3d300(&DAT_14cad1d4c), DAT_14cad1d4c == -1))
      {
        FUN_1412b4aa2(&DAT_14cad1d2c,0);
        _Init_thread_footer(&DAT_14cad1d4c);
      }
      iVar3 = FUN_144b261ba(plVar1);
      if ((iVar3 == 1) &&
         (_DAT_14cad1d3c == *(undefined1 (*) [16])(param_1 + 0x91) &&
          *(undefined1 (*) [16])(param_1 + 0x8f) == _DAT_14cad1d2c)) {
        *(byte *)((longlong)param_1 + 0x2d3) = *(byte *)((longlong)param_1 + 0x2d3) | 4;
        FUN_140a18d12(plVar1,0,1);
      }
    }
    lVar4 = (**(code **)(*param_1 + 0x7a0))(param_1);
    if (lVar4 != 0) {
      plVar6 = param_1 + 0x48;
      plVar7 = local_98;
      for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
        *plVar7 = *plVar6;
        plVar6 = plVar6 + 1;
        plVar7 = plVar7 + 1;
      }
      if (((ABS(local_58) <= 9.999999747378752e-05) && (ABS(dStack_50) <= 9.999999747378752e-05)) &&
         (ABS(local_48) <= 9.999999747378752e-05)) {
        local_58 = 9.999999747378752e-05;
        dStack_50 = 9.999999747378752e-05;
        local_48 = 9.999999747378752e-05;
        uStack_40 = 0;
      }
      lVar5 = param_1[0x16];
      if (lVar5 == 0) {
        lVar5 = FUN_1448abda6(param_1);
      }
      uVar2 = *(undefined8 *)(lVar5 + 0x260);
      FUN_14025a69a(local_33,param_1);
      local_a0 = 0;
      local_b8 = 0;
      local_b0 = uVar2;
      local_a8 = local_33;
      FUN_140311a3a(plVar1,lVar4,local_98,param_1);
    }
  }
  if ((param_1[0x14] == 0) || ((*(byte *)(param_1 + 0x17) & 0x60) != 0x20)) {
    FUN_140156588((longlong)param_1 + 0x59e,param_1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14025a69a FUN_14025a69a body=319 status=ok
// SIG undefined FUN_14025a69a(void)

byte * FUN_14025a69a(byte *param_1,longlong param_2)

{
  byte bVar1;
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
  if (param_2 == 0) {
    *param_1 = 1;
  }
  else {
    if (*(char *)(param_2 + 0x1fb) == '\x02') {
      bVar1 = 0;
    }
    else {
      bVar1 = *(byte *)(param_2 + 0x2e8) >> 2 & 1;
    }
    *param_1 = bVar1;
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
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) {
      bVar1 = 1;
      goto LAB_14025a6ff;
    }
  }
  bVar1 = 0;
LAB_14025a6ff:
  param_1[1] = bVar1;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14025a7da FUN_14025a7da body=1627 status=ok
// SIG undefined FUN_14025a7da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14025a7da(longlong param_1,longlong *param_2)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  char cVar4;
  longlong lVar5;
  undefined4 *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  double local_168;
  double dStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  double dStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e4;
  undefined1 local_e3;
  undefined1 local_e2;
  undefined1 local_e1;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((int)param_2[1] != 0) {
    bVar3 = *(byte *)(param_2 + 2);
    cVar4 = *(char *)((longlong)param_2 + 0x11);
    iVar10 = FUN_1449411d2(param_1,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar3) & 0xffffffff,
                           CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar4) & 0xffffffff);
    iVar11 = FUN_1402c7454(param_2,3);
    if (iVar10 == iVar11) {
      iVar10 = 0;
      if (((0 < *(int *)(param_1 + 0x10)) && (iVar10 = 0, cVar4 != '\0')) &&
         (lVar5 = **(longlong **)(param_1 + 8), lVar5 != 0)) {
        if ((bVar3 & 1) == 0) {
          iVar10 = 0;
        }
        else {
          FUN_144941734(lVar5,&local_148);
          if (*(char *)((longlong)param_2 + 0x11) == '\x02') {
            puVar6 = (undefined4 *)*param_2;
            local_170 = *(undefined8 *)(puVar6 + 4);
            local_180 = *puVar6;
            uStack_17c = puVar6[1];
            uStack_178 = puVar6[2];
            uStack_174 = puVar6[3];
            FUN_14025b1b3(&local_168);
            local_148 = local_168;
            dStack_140 = dStack_160;
            local_138 = local_158;
            uStack_134 = uStack_154;
            uStack_130 = uStack_150;
            uStack_12c = uStack_14c;
            lVar15 = 3;
          }
          else if (*(char *)((longlong)param_2 + 0x11) == '\x01') {
            pdVar1 = (double *)*param_2;
            local_148 = *pdVar1;
            dStack_140 = pdVar1[1];
            local_138 = *(undefined4 *)(pdVar1 + 2);
            uStack_134 = *(undefined4 *)((longlong)pdVar1 + 0x14);
            uStack_130 = *(undefined4 *)(pdVar1 + 3);
            uStack_12c = *(undefined4 *)((longlong)pdVar1 + 0x1c);
            lVar15 = 4;
          }
          else {
            lVar15 = 0;
          }
          pdVar1 = (double *)(*param_2 + lVar15 * 8);
          local_128 = *pdVar1;
          dStack_120 = pdVar1[1];
          local_118 = *(double *)(*param_2 + 0x10 + lVar15 * 8);
          uStack_110 = 0;
          dVar22 = *(double *)(lVar5 + 400);
          dVar23 = *(double *)(lVar5 + 0x198);
          auVar2 = *(undefined1 (*) [16])(lVar5 + 0x1d0);
          auVar19 = divpd(_DAT_149934d80,auVar2);
          auVar25 = divpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(lVar5 + 0x1e0));
          dVar17 = *(double *)(lVar5 + 0x1a0) * -1.0;
          dVar20 = *(double *)(lVar5 + 0x1a8) * 1.0;
          dVar7 = *(double *)(lVar5 + 0x1b0);
          dVar8 = *(double *)(lVar5 + 0x1b8);
          dVar9 = *(double *)(lVar5 + 0x1c0);
          local_108 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) &
                              auVar19._0_8_) * local_108;
          dStack_100 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) &
                               auVar19._8_8_) * dStack_100;
          local_f8 = (double)(-(ulonglong)
                               (9.99999993922529e-09 <
                               ABS(SUB168(*(undefined1 (*) [16])(lVar5 + 0x1e0),0))) & auVar25._0_8_
                             ) * local_f8;
          dVar18 = (dVar17 * dStack_140 +
                   (dVar20 * local_148 * 1.0 - (double)CONCAT44(uStack_12c,uStack_130) * dVar22)) -
                   dVar23 * (double)CONCAT44(uStack_134,local_138) * -1.0;
          dVar21 = (dVar20 * dStack_140 +
                   (dVar17 * local_148 * -1.0 - (double)CONCAT44(uStack_12c,uStack_130) * dVar23)) -
                   dVar22 * (double)CONCAT44(uStack_134,local_138) * 1.0;
          dVar24 = dVar20 * (double)CONCAT44(uStack_134,local_138) * 1.0 +
                   dStack_140 * dVar22 +
                   (dVar17 * (double)CONCAT44(uStack_12c,uStack_130) - local_148 * dVar23 * 1.0);
          dVar20 = dVar17 * (double)CONCAT44(uStack_134,local_138) * -1.0 +
                   dStack_140 * dVar23 +
                   (dVar20 * (double)CONCAT44(uStack_12c,uStack_130) - local_148 * dVar22 * -1.0);
          dVar22 = dVar8 * dVar18 - dVar7 * dVar21;
          dVar17 = dVar9 * dVar21 - dVar8 * dVar24;
          dVar23 = dVar7 * dVar24 - dVar18 * dVar9;
          dVar17 = dVar17 + dVar17;
          dVar23 = dVar23 + dVar23;
          *(double *)(lVar5 + 0x130) = dVar18;
          *(double *)(lVar5 + 0x138) = dVar21;
          *(double *)(lVar5 + 0x140) = dVar24;
          *(double *)(lVar5 + 0x148) = dVar20;
          dVar22 = dVar22 + dVar22;
          *(double *)(lVar5 + 0x150) =
               local_128 -
               ((dVar22 * dVar21 - dVar23 * dVar24) + dVar20 * dVar17 + dVar7) * local_108;
          *(double *)(lVar5 + 0x158) =
               dStack_120 -
               ((dVar24 * dVar17 - dVar22 * dVar18) + dVar20 * dVar23 + dVar8) * dStack_100;
          *(double *)(lVar5 + 0x160) =
               local_118 -
               (dVar20 * dVar22 + dVar9 + (dVar23 * dVar18 - dVar17 * dVar21)) * local_f8;
          *(undefined8 *)(lVar5 + 0x168) = 0;
          *(double *)(lVar5 + 0x170) = local_108;
          *(double *)(lVar5 + 0x178) = dStack_100;
          *(double *)(lVar5 + 0x180) = local_f8;
          *(double *)(lVar5 + 0x188) = dStack_f0 * 0.0;
          iVar10 = (int)lVar15 + 3;
        }
        if ((bVar3 & 2) != 0) {
          uVar12 = (ulonglong)(uint)(iVar10 * 8);
          *(undefined8 *)(lVar5 + 0x378) = *(undefined8 *)(*param_2 + uVar12);
          *(undefined8 *)(lVar5 + 0x380) = *(undefined8 *)(*param_2 + 8 + uVar12);
          *(undefined8 *)(lVar5 + 0x388) = *(undefined8 *)(*param_2 + 0x10 + uVar12);
          *(undefined8 *)(lVar5 + 0x390) = *(undefined8 *)(*param_2 + 0x18 + uVar12);
          *(undefined8 *)(lVar5 + 0x398) = *(undefined8 *)(*param_2 + 0x20 + uVar12);
          *(undefined8 *)(lVar5 + 0x3a0) = *(undefined8 *)(*param_2 + 0x28 + uVar12);
          iVar10 = iVar10 + 6;
          FUN_14025ae36(lVar5);
        }
      }
      if ((longlong)*(int *)(param_1 + 0x30) != 0) {
        plVar16 = *(longlong **)(param_1 + 0x28);
        plVar14 = plVar16 + *(int *)(param_1 + 0x30);
        do {
          lVar5 = *plVar16;
          lVar15 = -0x18;
          do {
            if (((*(int *)(lVar5 + 0xf48 + lVar15) != 2) ||
                (lVar13 = *(longlong *)(lVar5 + 0x20), (*(byte *)(lVar13 + 0x20) & 1) != 0)) ||
               ((((ABS(*(double *)(lVar13 + 0x60)) <= 9.99999993922529e-09 &&
                  ((ABS(*(double *)(lVar13 + 0x68)) <= 9.99999993922529e-09 &&
                   (ABS(*(double *)(lVar13 + 0x70)) <= 9.99999993922529e-09)))) &&
                 (ABS(*(double *)(lVar13 + 0x48)) <= 9.99999993922529e-09)) &&
                ((ABS(*(double *)(lVar13 + 0x50)) <= 9.99999993922529e-09 &&
                 (ABS(*(double *)(lVar13 + 0x58)) <= 9.99999993922529e-09)))))) {
              if ((bVar3 & 1) != 0) {
                lVar13 = (longlong)iVar10;
                iVar10 = iVar10 + 1;
                *(undefined8 *)(lVar5 + 0x708 + lVar15 * 2) = *(undefined8 *)(*param_2 + lVar13 * 8)
                ;
              }
              if ((bVar3 & 2) != 0) {
                lVar13 = (longlong)iVar10;
                iVar10 = iVar10 + 1;
                *(undefined8 *)(lVar5 + 0x6d8 + lVar15 * 2) = *(undefined8 *)(*param_2 + lVar13 * 8)
                ;
              }
            }
            lVar15 = lVar15 + 4;
          } while (lVar15 != 0);
          if ((bVar3 & 1) != 0) {
            local_e1 = 0;
            local_e3 = 0;
            local_188 = 1;
            FUN_1448f23ac(lVar5,&local_e4,&local_e2,1);
          }
          if ((bVar3 & 2) != 0) {
            FUN_14025ae36(*(undefined8 *)(lVar5 + 0x20));
          }
          plVar16 = plVar16 + 1;
        } while (plVar16 != plVar14);
      }
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14025ae36 FUN_14025ae36 body=892 status=ok
// SIG undefined FUN_14025ae36(void)

void FUN_14025ae36(longlong param_1)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  double dVar2;
  double dVar4;
  double dVar6;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    FUN_144912200(*(longlong *)(param_1 + 0x2b8),0);
    FUN_14499301a(*(undefined8 *)(param_1 + 0x2b8));
    lVar8 = *(longlong *)(param_1 + 0x2b8);
    local_b8 = lVar8 + 0x6a8;
    FUN_144912407(&local_b0,lVar8 + 0x8c0,*(longlong *)(lVar8 + 0x18) + 0x378,lVar8 + 0x4b0);
    *(undefined8 *)(param_1 + 0x398) = local_90;
    *(undefined8 *)(param_1 + 0x3a0) = uStack_88;
    *(undefined8 *)(param_1 + 0x388) = local_a0;
    *(undefined8 *)(param_1 + 0x390) = uStack_98;
    *(undefined8 *)(param_1 + 0x378) = local_b0;
    *(undefined8 *)(param_1 + 0x380) = uStack_a8;
  }
  dVar11 = *(double *)(param_1 + 400);
  dVar12 = *(double *)(param_1 + 0x198);
  dVar13 = *(double *)(param_1 + 0x1a0);
  dVar14 = *(double *)(param_1 + 0x1a8);
  dVar1 = *(double *)(param_1 + 0x148);
  dVar2 = *(double *)(param_1 + 0x148);
  dVar3 = *(double *)(param_1 + 0x138);
  dVar4 = *(double *)(param_1 + 0x138);
  dVar5 = *(double *)(param_1 + 0x130);
  dVar6 = *(double *)(param_1 + 0x130);
  dVar7 = *(double *)(param_1 + 0x140);
  dVar15 = *(double *)(param_1 + 0x140);
  dVar9 = dVar12 * dVar7 * -1.0 + dVar13 * dVar3 + dVar5 * dVar14 * 1.0 + dVar1 * dVar11;
  dVar10 = dVar11 * dVar15 * 1.0 + dVar14 * dVar4 + dVar6 * dVar13 * -1.0 + dVar2 * dVar12;
  dVar5 = dVar14 * dVar7 * 1.0 + ((dVar5 * dVar12 * 1.0 + dVar1 * dVar13) - dVar3 * dVar11);
  dVar4 = dVar13 * dVar15 * -1.0 + ((dVar6 * dVar11 * -1.0 + dVar2 * dVar14) - dVar4 * dVar12);
  dVar2 = *(double *)(param_1 + 0x378);
  dVar1 = *(double *)(param_1 + 0x380);
  dVar3 = *(double *)(param_1 + 0x388);
  dVar6 = dVar10 * dVar3 - dVar1 * dVar5;
  dVar6 = dVar6 + dVar6;
  dVar7 = dVar9 * dVar1 - dVar2 * dVar10;
  dVar7 = dVar7 + dVar7;
  dVar15 = dVar5 * dVar2 - dVar3 * dVar9;
  dVar15 = dVar15 + dVar15;
  *(double *)(param_1 + 0xd8) = (dVar10 * dVar7 - dVar15 * dVar5) + dVar4 * dVar6 + dVar2;
  *(double *)(param_1 + 0xe0) = (dVar5 * dVar6 - dVar7 * dVar9) + dVar4 * dVar15 + dVar1;
  *(double *)(param_1 + 0xe8) = (dVar9 * dVar15 - dVar6 * dVar10) + dVar4 * dVar7 + dVar3;
  dVar2 = *(double *)(param_1 + 0x390);
  dVar1 = *(double *)(param_1 + 0x398);
  dVar3 = *(double *)(param_1 + 0x3a0);
  dVar6 = dVar10 * dVar3 - dVar1 * dVar5;
  dVar6 = dVar6 + dVar6;
  dVar7 = dVar9 * dVar1 - dVar2 * dVar10;
  dVar7 = dVar7 + dVar7;
  dVar15 = dVar5 * dVar2 - dVar3 * dVar9;
  dVar15 = dVar15 + dVar15;
  *(double *)(param_1 + 0xf0) = (dVar10 * dVar7 - dVar15 * dVar5) + dVar4 * dVar6 + dVar2;
  *(double *)(param_1 + 0xf8) = (dVar5 * dVar6 - dVar7 * dVar9) + dVar4 * dVar15 + dVar1;
  *(double *)(param_1 + 0x100) = (dVar9 * dVar15 - dVar6 * dVar10) + dVar4 * dVar7 + dVar3;
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14025b1b3 FUN_14025b1b3 body=467 status=ok
// SIG undefined FUN_14025b1b3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14025b1b3(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double _X;
  
  auVar9._8_8_ = param_2[2] * 57.29577951308232;
  auVar9._0_8_ = param_2[1] * -57.29577951308232;
  auVar8 = divpd(auVar9,_DAT_1499387d0);
  auVar7._0_8_ = (*param_2 * -57.29577951308232) / 360.0;
  auVar7._8_8_ = 0;
  auVar9 = roundpd(auVar8,auVar8,3);
  auVar8 = roundpd(auVar7,auVar7,3);
  dVar1 = (param_2[1] * -57.29577951308232 - auVar9._0_8_ * (double)DAT_1499387d0) *
          0.008726646259971648;
  dVar6 = (param_2[2] * 57.29577951308232 - auVar9._8_8_ * DAT_1499387d0._8_8_) *
          0.008726646259971648;
  dVar10 = (*param_2 * -57.29577951308232 - auVar8._0_8_ * (double)DAT_1499387d0) *
           0.008726646259971648;
  _X = (0.0 - auVar8._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar2 = sin(dVar1);
  dVar3 = sin(dVar6);
  dVar4 = sin(dVar10);
  sin(_X);
  dVar5 = cos(dVar1);
  dVar6 = cos(dVar6);
  dVar10 = cos(dVar10);
  cos(_X);
  dVar1 = dVar3 * dVar2 * dVar4 + dVar6 * dVar5 * dVar10;
  *param_1 = dVar2 * dVar3 * dVar10 - dVar5 * dVar6 * dVar4;
  param_1[1] = -(dVar2 * dVar6 * dVar10) - dVar5 * dVar3 * dVar4;
  auVar8._8_4_ = SUB84(dVar1,0);
  auVar8._0_8_ = -(dVar6 * dVar2 * dVar4) + dVar3 * dVar5 * dVar10;
  auVar8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 2) = auVar8;
  return param_1;
}



// FUNCTION 14025b386 FUN_14025b386 body=1022 status=ok
// SIG undefined FUN_14025b386(void)

void FUN_14025b386(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  float *pfVar9;
  undefined4 *puVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined1 auStack_88 [32];
  float local_68;
  undefined1 local_64;
  longlong local_60;
  longlong local_58;
  undefined1 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x34) == 0) {
    fVar11 = *(float *)(param_1 + 0x298) - *(float *)(param_2 + 0x28);
    *(float *)(param_1 + 0x298) = fVar11;
    if (fVar11 <= 0.0) {
      if ((longlong)*(int *)(param_1 + 0x150) == 0) {
        *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) * 0xbb38435 + 0x3619636b;
      }
      else {
        lVar7 = *(longlong *)(param_1 + 0x148);
        lVar4 = (longlong)*(int *)(param_1 + 0x150) * 0x70;
        fVar11 = 0.0;
        lVar6 = 0;
        do {
          if (*(longlong *)(lVar7 + lVar6) == 0 && *(longlong *)(lVar7 + 8 + lVar6) == 0) {
            fVar12 = 0.0;
          }
          else {
            fVar12 = *(float *)(lVar7 + 0x18 + lVar6);
          }
          fVar14 = 0.0;
          if (0.0 <= fVar12) {
            fVar14 = fVar12;
          }
          fVar11 = fVar11 + fVar14;
          lVar6 = lVar6 + 0x70;
        } while (lVar4 - lVar6 != 0);
        uVar5 = *(int *)(param_1 + 0x2a0) * 0xbb38435 + 0x3619636b;
        *(uint *)(param_1 + 0x2a0) = uVar5;
        fVar11 = fVar11 * ((float)(uVar5 >> 9 | 0x3f800000) + -1.0);
        lVar6 = 0;
        do {
          lVar1 = *(longlong *)(lVar7 + lVar6);
          if (*(longlong *)(lVar7 + 8 + lVar6) == 0 && lVar1 == 0) {
            fVar12 = 0.0;
          }
          else {
            fVar12 = *(float *)(lVar7 + 0x18 + lVar6);
          }
          if (0.0 < fVar12) {
            if (fVar11 < fVar12) {
              if (lVar7 + lVar6 != 0) {
                if (lVar1 == 0) {
                  *(undefined8 *)(param_1 + 0x280) = DAT_14caa8578;
                  uVar8 = *(undefined8 *)(lVar7 + lVar6 + 8);
                }
                else {
                  *(longlong *)(param_1 + 0x280) = lVar1;
                  uVar8 = 0;
                }
                (**(code **)(*(longlong *)(param_1 + 0x198) + 0x1a8))(param_1 + 0x198,uVar8);
                *(undefined4 *)(param_1 + 0x1c4) = 0;
                *(undefined4 *)(param_1 + 0x1b0) = 0xfffffffe;
                *(undefined4 *)(param_1 + 0x1b8) = 0xfffffffe;
                uVar13 = FUN_14025bbd2(lVar7 + lVar6 + 0x1c,param_1 + 0x29c);
                *(undefined4 *)(param_1 + 0x1fc) = uVar13;
                pfVar9 = (float *)(param_1 + 0x158);
                if (*(char *)(lVar7 + lVar6 + 0x24) != '\0') {
                  pfVar9 = (float *)(lVar7 + lVar6 + 0x28);
                }
                puVar10 = (undefined4 *)(param_1 + 0x178);
                if (*(char *)(lVar7 + lVar6 + 0x48) != '\0') {
                  puVar10 = (undefined4 *)(lVar7 + lVar6 + 0x50);
                }
                *(undefined4 *)(param_1 + 0x2a8) = *puVar10;
                *(undefined1 *)(param_1 + 0x2ac) = *(undefined1 *)(puVar10 + 1);
                lVar7 = *(longlong *)(puVar10 + 2);
                if (DAT_14c950c29 == 1) {
                  if (lVar7 == 0) {
                    lVar7 = 0;
                  }
                  else {
                    FUN_1456cec3c();
                    lVar7 = *(longlong *)(puVar10 + 2);
                  }
                }
                bVar2 = DAT_14c950c29;
                *(longlong *)(param_1 + 0x2b0) = lVar7;
                lVar7 = *(longlong *)(puVar10 + 4);
                if ((bVar2 & 1) != 0) {
                  if (lVar7 == 0) {
                    lVar7 = 0;
                  }
                  else {
                    FUN_1456cec3c();
                    lVar7 = *(longlong *)(puVar10 + 4);
                    bVar2 = DAT_14c950c29;
                  }
                }
                *(longlong *)(param_1 + 0x2b8) = lVar7;
                *(undefined1 *)(param_1 + 0x2c0) = *(undefined1 *)(puVar10 + 6);
                local_64 = *(undefined1 *)(pfVar9 + 1);
                local_68 = *pfVar9;
                local_60 = *(longlong *)(pfVar9 + 2);
                if (((bVar2 & 1) != 0) && (local_60 != 0)) {
                  FUN_1456cec3c();
                  bVar2 = DAT_14c950c29;
                }
                local_58 = *(longlong *)(pfVar9 + 4);
                if (((bVar2 & 1) != 0) && (local_58 != 0)) {
                  FUN_1456cec3c();
                }
                local_50 = *(undefined1 *)(pfVar9 + 6);
                local_48 = 1;
                uVar8 = 1;
                goto LAB_14025b6ce;
              }
              break;
            }
            fVar11 = fVar11 - fVar12;
          }
          lVar6 = lVar6 + 0x70;
        } while (lVar4 - lVar6 != 0);
      }
    }
  }
  else {
    plVar3 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x198) + 0x198))(param_1 + 0x198);
    if (plVar3 == (longlong *)0x0) {
      fVar11 = 0.0;
    }
    else {
      fVar11 = (float)(**(code **)(*plVar3 + 0x2b0))(plVar3);
    }
    fVar12 = (float)FUN_14025ba60(param_1 + 0x198);
    if (fVar11 - fVar12 <= *(float *)(param_1 + 0x2a8)) {
      local_64 = *(undefined1 *)(param_1 + 0x2ac);
      local_68 = *(float *)(param_1 + 0x2a8);
      local_60 = *(longlong *)(param_1 + 0x2b0);
      if ((local_60 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      local_58 = *(longlong *)(param_1 + 0x2b8);
      if ((local_58 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      fVar11 = local_68;
      local_50 = *(undefined1 *)(param_1 + 0x2c0);
      local_48 = 1;
      fVar12 = (float)FUN_14025bbd2(param_1 + 0x140,param_1 + 0x29c);
      *(float *)(param_1 + 0x298) = fVar12 + fVar11;
      uVar8 = 0;
LAB_14025b6ce:
      FUN_1403201ee(param_1,uVar8,&local_68);
    }
  }
  FUN_14491269a(param_1,param_2);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14025b786 FUN_14025b786 body=157 status=ok
// SIG undefined FUN_14025b786(void)

void FUN_14025b786(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1 + 0x100;
  FUN_14025b824(lVar4);
  uVar1 = *(uint *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x128);
  *(uint *)(param_1 + 0x128) = iVar2 + uVar1;
  if ((uint)(*(int *)(param_1 + 300) - iVar2) < uVar1) {
    FUN_140e79564(lVar4);
  }
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x120) == 0) {
    lVar3 = lVar4;
  }
  memset((void *)(lVar3 + (longlong)iVar2 * 4),0,(longlong)(int)uVar1 << 2);
  iVar2 = *(int *)(param_1 + 0x34);
  if ((-1 < (longlong)iVar2) && (iVar2 < *(int *)(param_1 + 0x128))) {
    if (*(longlong *)(param_1 + 0x120) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x120);
    }
    *(undefined4 *)(lVar4 + (longlong)iVar2 * 4) = 0x3f800000;
  }
  return;
}



// FUNCTION 14025b824 FUN_14025b824 body=42 status=ok
// SIG undefined FUN_14025b824(void)

void FUN_14025b824(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_2 <= *(int *)(param_1 + 0x2c)) {
    return;
  }
  FUN_14791bb40();
  return;
}



// FUNCTION 14025b84e FUN_14025b84e body=379 status=ok
// SIG undefined FUN_14025b84e(void)

ulonglong FUN_14025b84e(float *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  float *pfVar5;
  float fVar6;
  float fVar7;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (0.0 < param_1[1]) {
    *param_1 = *(float *)(param_2 + 0x28) + *param_1;
    FUN_14470c566(param_1 + 4,*(undefined4 *)(param_2 + 0x28));
    if (*(char *)((longlong)param_1 + 0x37) == '\0') {
      fVar6 = param_1[0xe];
    }
    else {
      fVar6 = param_1[0xb];
      fVar1 = param_1[0xc];
      fVar7 = (float)FUN_14002c5a6(0x3f800000,*(undefined1 *)(param_1 + 0xd),
                                   *(undefined8 *)(param_1 + 4));
      fVar6 = fVar7 * (fVar1 - fVar6) + fVar6;
      param_1[0xe] = fVar6;
      *(undefined1 *)((longlong)param_1 + 0x37) = 0;
    }
    if ((fVar6 != param_1[10]) || (NAN(fVar6) || NAN(param_1[10]))) {
      fVar6 = (float)FUN_14002c5a6(*param_1 / param_1[1],*(undefined1 *)(param_1 + 0xd),
                                   *(undefined8 *)(param_1 + 4));
      param_1[2] = fVar6;
      FUN_14025b824(param_3);
      fVar6 = param_1[0x1a];
      iVar2 = *(int *)(param_3 + 0x28);
      *(int *)(param_3 + 0x28) = iVar2 + (int)fVar6;
      if ((uint)(*(int *)(param_3 + 0x2c) - iVar2) < (uint)fVar6) {
        FUN_140e79564(param_3);
      }
      lVar3 = *(longlong *)(param_3 + 0x20);
      if (*(longlong *)(param_3 + 0x20) == 0) {
        lVar3 = param_3;
      }
      uVar4 = 0;
      memset((void *)(lVar3 + (longlong)iVar2 * 4),0,(longlong)(int)fVar6 << 2);
      if (0 < *(int *)(param_3 + 0x28)) {
        uVar4 = 0;
        do {
          pfVar5 = *(float **)(param_1 + 0x18);
          if (*(float **)(param_1 + 0x18) == (float *)0x0) {
            pfVar5 = param_1 + 0x10;
          }
          lVar3 = *(longlong *)(param_3 + 0x20);
          if (*(longlong *)(param_3 + 0x20) == 0) {
            lVar3 = param_3;
          }
          fVar6 = 1.0;
          if (uVar4 != (uint)param_1[3]) {
            fVar6 = 0.0;
          }
          *(float *)(lVar3 + uVar4 * 4) = (fVar6 - pfVar5[uVar4]) * param_1[2] + pfVar5[uVar4];
          uVar4 = uVar4 + 1;
        } while ((longlong)uVar4 < (longlong)*(int *)(param_3 + 0x28));
        uVar4 = 0;
      }
    }
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14025b9ca FUN_14025b9ca body=149 status=ok
// SIG undefined FUN_14025b9ca(void)

undefined8 FUN_14025b9ca(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined1 *local_40;
  undefined8 **local_38;
  undefined8 local_30;
  undefined1 **local_28;
  undefined1 *local_20;
  undefined8 **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar1 = 0;
  }
  else {
    local_48 = &local_30;
    local_30 = 0;
    local_38 = &local_48;
    local_28 = &local_40;
    local_40 = &LAB_1401b6580;
    local_18 = &local_28;
    local_20 = &LAB_1401b6572;
    FUN_14015e554(*(longlong *)(param_1 + 8) + 0x148,DAT_14cacc368);
    uVar1 = local_30;
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14025ba60 FUN_14025ba60 body=209 status=ok
// SIG undefined FUN_14025ba60(void)

undefined8 FUN_14025ba60(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  
  lVar1 = (**(code **)(*param_1 + 0x198))();
  if (lVar1 == 0) {
    fVar5 = 1.0;
  }
  else {
    fVar5 = *(float *)(lVar1 + 0xb0);
  }
  fVar3 = (float)(**(code **)(*param_1 + 0x1c0))(param_1);
  fVar4 = (float)(**(code **)(*param_1 + 0x1b8))(param_1);
  uVar2 = (**(code **)(*param_1 + 0x1c8))(param_1);
  fVar3 = (float)FUN_14025bb32(param_1 + 8,uVar2,
                               ~-(uint)(ABS(fVar4) <= 1e-08) & (uint)(fVar3 / fVar4));
  if (fVar3 * fVar5 < 0.0) {
    uVar2 = (**(code **)(*param_1 + 0x108))(param_1);
    uVar6 = (undefined4)((ulonglong)uVar2 >> 0x20);
    fVar5 = (float)uVar2 - *(float *)((longlong)param_1 + 0x2c);
  }
  else {
    fVar5 = *(float *)((longlong)param_1 + 0x2c);
    uVar6 = 0;
  }
  return CONCAT44(uVar6,fVar5);
}



// FUNCTION 14025bb32 FUN_14025bb32 body=159 status=ok
// SIG undefined FUN_14025bb32(void)

float FUN_14025bb32(undefined8 param_1,char *param_2,float param_3)

{
  float fVar1;
  
  if (*param_2 == '\x01') {
    fVar1 = *(float *)(param_2 + 8) - *(float *)(param_2 + 4);
    if (ABS(fVar1) <= 1e-08) {
      fVar1 = (float)(-(uint)(*(float *)(param_2 + 8) <= param_3) & 0x3f800000);
    }
    else {
      fVar1 = (param_3 - *(float *)(param_2 + 4)) / fVar1;
    }
    param_3 = (*(float *)(param_2 + 0x10) - *(float *)(param_2 + 0xc)) * fVar1 +
              *(float *)(param_2 + 0xc);
  }
  fVar1 = param_3 * *(float *)(param_2 + 0x14) + *(float *)(param_2 + 0x18);
  if (param_2[1] == '\x01') {
    if (*(float *)(param_2 + 0x20) <= fVar1) {
      fVar1 = *(float *)(param_2 + 0x20);
    }
    if (fVar1 <= *(float *)(param_2 + 0x1c)) {
      fVar1 = *(float *)(param_2 + 0x1c);
    }
  }
  return fVar1;
}



// FUNCTION 14025bbd2 FUN_14025bbd2 body=117 status=ok
// SIG undefined FUN_14025bbd2(void)

float FUN_14025bbd2(float *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  if (1e-08 < ABS(fVar2)) {
    uVar3 = *(int *)(param_2 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_2 + 4) = uVar3;
    fVar1 = ((float)(uVar3 >> 9 | 0x3f800000) + -1.0) * (fVar2 - -fVar2) + -fVar2 + fVar1;
  }
  return fVar1;
}



// FUNCTION 14025bc48 FUN_14025bc48 body=158 status=ok
// SIG undefined FUN_14025bc48(void)

undefined8 FUN_14025bc48(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [64];
  undefined8 local_38;
  undefined8 uStack_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x518) == '\x01') {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = (double)param_2[2] - (double)*(float *)((longlong)param_2 + 0x4c);
    FUN_144912966(param_1 + 0x3c0,local_78);
    uVar1 = FUN_14025bce8(param_1 + 0x3c0,local_78,param_2);
  }
  else {
    uVar1 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14025bce8 FUN_14025bce8 body=704 status=ok
// SIG undefined FUN_14025bce8(void)

bool FUN_14025bce8(double *param_1,double *param_2,double *param_3)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  if (*(float *)((longlong)param_2 + 0x34) < 1.0) {
    return true;
  }
  iVar1 = *(int *)(param_2 + 6);
  if (iVar1 == 1) {
    if (((ABS(*param_2 - *param_1) <= 1.0) && (ABS(param_2[1] - param_1[1]) <= 1.0)) &&
       (ABS(param_2[2] - param_1[2]) <= 1.0)) {
      dVar7 = param_2[1] - param_3[1];
      dVar5 = *param_2 - *param_3;
      dVar9 = param_2[2] - (param_3[2] - (double)*(float *)((longlong)param_3 + 0x4c));
      dVar10 = dVar9 * dVar9 + dVar5 * dVar5 + dVar7 * dVar7;
      if (((dVar10 != 1.0) || (dVar4 = dVar5, dVar6 = dVar7, dVar8 = dVar9, NAN(dVar10))) &&
         (dVar4 = DAT_14c8464e0, dVar6 = DAT_14c8464e8, dVar8 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar10)) {
        dVar10 = 1.0 / SQRT(dVar10);
        dVar4 = dVar5 * dVar10;
        dVar6 = dVar7 * dVar10;
        dVar8 = dVar9 * dVar10;
      }
      if (0.9900000095367432 < dVar8 * param_2[5] + dVar4 * param_2[3] + dVar6 * param_2[4]) {
        return true;
      }
    }
  }
  else {
    if (1 < iVar1 - 3U) {
      if (iVar1 != 2) {
        return false;
      }
      fVar3 = *(float *)(param_3 + 9) * 0.125;
      if (fVar3 <= 5.0) {
        fVar3 = 5.0;
      }
      goto LAB_14025bd46;
    }
    lVar2 = 0x18;
    if (*(char *)((longlong)param_1 + 0xf9) != '\0') {
      lVar2 = 0x48;
    }
    if (((ABS(*param_2 - *(double *)((longlong)param_1 + lVar2)) <= 1.0) &&
        (ABS(param_2[1] - *(double *)((longlong)param_1 + lVar2 + 8)) <= 1.0)) &&
       (ABS(param_2[2] - *(double *)((longlong)param_1 + lVar2 + 0x10)) <= 1.0)) {
      dVar7 = param_2[1] - param_3[1];
      dVar5 = *param_2 - *param_3;
      dVar9 = param_2[2] - (param_3[2] - (double)*(float *)((longlong)param_3 + 0x4c));
      dVar10 = dVar9 * dVar9 + dVar5 * dVar5 + dVar7 * dVar7;
      if (((dVar10 != 1.0) || (dVar4 = dVar5, dVar6 = dVar7, dVar8 = dVar9, NAN(dVar10))) &&
         (dVar4 = DAT_14c8464e0, dVar6 = DAT_14c8464e8, dVar8 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar10)) {
        dVar10 = 1.0 / SQRT(dVar10);
        dVar4 = dVar5 * dVar10;
        dVar6 = dVar7 * dVar10;
        dVar8 = dVar9 * dVar10;
      }
      if (dVar8 * param_2[5] + dVar4 * param_2[3] + dVar6 * param_2[4] < -0.10000000149011612) {
        return false;
      }
    }
  }
  fVar3 = 5.0;
LAB_14025bd46:
  return *(float *)((longlong)param_2 + 0x34) < fVar3;
}



// FUNCTION 14025bfa8 FUN_14025bfa8 body=578 status=ok
// SIG undefined FUN_14025bfa8(void)

bool FUN_14025bfa8(double *param_1,undefined8 param_2,longlong param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  undefined1 auStack_a8 [32];
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  dVar3 = *(double *)(param_3 + 0x28) - param_1[2];
  dVar2 = *(double *)(param_3 + 0x20) - param_1[1];
  dVar1 = *(double *)(param_3 + 0x18) - *param_1;
  fVar11 = (float)SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
  dVar4 = DAT_14c8464f0;
  dVar5 = DAT_14c8464e8;
  dVar10 = DAT_14c8464e0;
  if (1e-08 < fVar11) {
    dVar10 = (double)(1.0 / fVar11);
    dVar4 = dVar3 * dVar10;
    dVar5 = dVar2 * dVar10;
    dVar10 = dVar1 * dVar10;
  }
  if (fVar11 < 1.0) {
    bVar8 = true;
  }
  else {
    dVar2 = param_4[2] - param_1[2];
    dVar1 = param_4[1] - param_1[1];
    dVar3 = *param_4 - *param_1;
    fVar11 = (float)SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1);
    dVar6 = DAT_14c8464f0;
    dVar7 = DAT_14c8464e8;
    dVar9 = DAT_14c8464e0;
    if (1e-08 < fVar11) {
      dVar9 = (double)(1.0 / fVar11);
      dVar6 = dVar2 * dVar9;
      dVar7 = dVar1 * dVar9;
      dVar9 = dVar3 * dVar9;
    }
    if (fVar11 < 1.0) {
      bVar8 = false;
    }
    else {
      FUN_14025c1eb(&local_88);
      bVar8 = (dVar10 * dVar7 - dVar9 * dVar5) * local_78 +
              (dVar5 * dVar6 - dVar7 * dVar4) * local_88 +
              (dVar4 * dVar9 - dVar6 * dVar10) * local_80 < 0.0;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar8;
}



// FUNCTION 14025c1eb FUN_14025c1eb body=1113 status=ok
// SIG undefined FUN_14025c1eb(void)

void FUN_14025c1eb(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar7 = param_3[3];
  dVar11 = *param_3 - dVar7;
  dVar9 = param_3[4];
  dVar2 = param_3[1] - dVar9;
  dVar10 = param_3[5];
  dVar1 = param_3[2] - dVar10;
  dVar8 = *param_4;
  dVar12 = param_4[1];
  dVar3 = dVar8 - param_4[3];
  dVar6 = dVar12 - param_4[4];
  dVar5 = param_4[2];
  dVar4 = dVar5 - param_4[5];
  if ((float)SQRT(dVar1 * dVar1 + dVar2 * dVar2 + dVar11 * dVar11) <=
      (float)SQRT(dVar4 * dVar4 + dVar6 * dVar6 + dVar3 * dVar3)) {
    dVar10 = dVar5 - param_2[2];
    dVar9 = dVar12 - param_2[1];
    dVar7 = dVar8 - *param_2;
    dVar11 = dVar10 * dVar10 + dVar7 * dVar7 + dVar9 * dVar9;
    if (((dVar11 != 1.0) || (dVar6 = dVar9, dVar2 = dVar10, dVar1 = dVar7, NAN(dVar11))) &&
       (dVar6 = DAT_14c8464e8, dVar2 = DAT_14c8464f0, dVar1 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar11)) {
      dVar11 = 1.0 / SQRT(dVar11);
      dVar6 = dVar9 * dVar11;
      dVar2 = dVar10 * dVar11;
      dVar1 = dVar7 * dVar11;
    }
    dVar5 = param_4[5] - dVar5;
    dVar12 = param_4[4] - dVar12;
    dVar8 = param_4[3] - dVar8;
    dVar7 = dVar5 * dVar5 + dVar8 * dVar8 + dVar12 * dVar12;
    if (((dVar7 != 1.0) || (dVar11 = dVar12, dVar9 = dVar5, dVar10 = dVar8, NAN(dVar7))) &&
       (dVar11 = DAT_14c8464e8, dVar9 = DAT_14c8464f0, dVar10 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar7)) {
      dVar7 = 1.0 / SQRT(dVar7);
      dVar11 = dVar12 * dVar7;
      dVar9 = dVar5 * dVar7;
      dVar10 = dVar8 * dVar7;
    }
    dVar7 = dVar1 * dVar11 - dVar10 * dVar6;
    dVar10 = dVar2 * dVar10 - dVar9 * dVar1;
    dVar9 = dVar6 * dVar9 - dVar11 * dVar2;
  }
  else {
    dVar11 = dVar10 - param_2[2];
    dVar5 = dVar9 - param_2[1];
    dVar8 = dVar7 - *param_2;
    dVar12 = dVar11 * dVar11 + dVar8 * dVar8 + dVar5 * dVar5;
    if (((dVar12 != 1.0) || (dVar6 = dVar5, dVar2 = dVar11, dVar1 = dVar8, NAN(dVar12))) &&
       (dVar6 = DAT_14c8464e8, dVar2 = DAT_14c8464f0, dVar1 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar12)) {
      dVar12 = 1.0 / SQRT(dVar12);
      dVar6 = dVar5 * dVar12;
      dVar2 = dVar11 * dVar12;
      dVar1 = dVar8 * dVar12;
    }
    dVar10 = dVar10 - param_3[2];
    dVar9 = dVar9 - param_3[1];
    dVar7 = dVar7 - *param_3;
    dVar8 = dVar10 * dVar10 + dVar7 * dVar7 + dVar9 * dVar9;
    if (((dVar8 != 1.0) || (dVar12 = dVar7, dVar5 = dVar9, dVar11 = dVar10, NAN(dVar8))) &&
       (dVar12 = DAT_14c8464e0, dVar5 = DAT_14c8464e8, dVar11 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar8)) {
      dVar8 = 1.0 / SQRT(dVar8);
      dVar12 = dVar7 * dVar8;
      dVar5 = dVar9 * dVar8;
      dVar11 = dVar10 * dVar8;
    }
    dVar7 = dVar1 * dVar5 - dVar12 * dVar6;
    dVar10 = dVar2 * dVar12 - dVar11 * dVar1;
    dVar9 = dVar6 * dVar11 - dVar5 * dVar2;
  }
  dVar8 = dVar7 * dVar7 + dVar9 * dVar9 + dVar10 * dVar10;
  if ((dVar8 != 1.0) || (NAN(dVar8))) {
    if (dVar8 < 9.99999993922529e-09) {
      param_1[2] = DAT_14c8464f0;
      dVar7 = DAT_14c8464e8;
      *param_1 = DAT_14c8464e0;
      param_1[1] = dVar7;
      return;
    }
    dVar8 = 1.0 / SQRT(dVar8);
    dVar7 = dVar7 * dVar8;
    dVar10 = dVar10 * dVar8;
    dVar9 = dVar9 * dVar8;
  }
  *param_1 = dVar9;
  param_1[1] = dVar10;
  param_1[2] = dVar7;
  return;
}



// FUNCTION 14025c644 FUN_14025c644 body=358 status=ok
// SIG undefined FUN_14025c644(void)

ulonglong *
FUN_14025c644(ulonglong *param_1,double *param_2,double *param_3,double *param_4,undefined8 param_5,
             undefined8 param_6)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14025c1eb(&local_68,param_4,param_5,param_6);
  dVar5 = param_2[2] - param_4[2];
  dVar6 = param_2[1] - param_4[1];
  dVar4 = *param_2 - *param_4;
  dVar3 = dVar4 * param_3[1] - *param_3 * dVar6;
  dVar2 = dVar5 * *param_3 - param_3[2] * dVar4;
  dVar7 = param_3[2] * dVar6 - param_3[1] * dVar5;
  dVar4 = (dVar4 * dVar2 - dVar7 * dVar6) * local_58 +
          (dVar6 * dVar3 - dVar2 * dVar5) * local_68 + (dVar5 * dVar7 - dVar3 * dVar4) * local_60;
  uVar1 = -(ulonglong)(0.0 < dVar4);
  if (dVar4 <= 0.0) {
    dVar3 = -dVar3;
    dVar2 = -dVar2;
  }
  *param_1 = ~uVar1 & (ulonglong)-dVar7 | uVar1 & (ulonglong)dVar7;
  param_1[1] = (ulonglong)dVar2;
  param_1[2] = (ulonglong)dVar3;
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14025c7ac FUN_14025c7ac body=3233 status=ok
// SIG undefined FUN_14025c7ac(void)

void FUN_14025c7ac(longlong param_1,ulonglong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  double dVar2;
  char *pcVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte bVar15;
  undefined2 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_148 [32];
  byte local_128;
  longlong local_120;
  longlong local_118;
  longlong *local_110;
  undefined8 *local_108;
  ulonglong local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined **local_d8;
  undefined1 *local_d0;
  ulonglong uStack_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  byte local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(int *)(param_1 + 0x420) != *(int *)(param_1 + 0x44c)) {
    uVar6 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    lVar8 = param_1 + 0x450;
    if (*(longlong *)(param_1 + 0x458) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x458);
    }
    iVar7 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x460) - 1U & (uVar6 >> 0x10 ^ uVar6)) *
                             4);
    if (iVar7 != -1) {
      do {
        lVar8 = *(longlong *)(param_1 + 0x418) + (longlong)iVar7 * 0x168;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x418) + (longlong)iVar7 * 0x168) == param_2)
        break;
        iVar7 = *(int *)(lVar8 + 0x160);
        lVar8 = 0;
      } while (iVar7 != -1);
      goto LAB_14025c881;
    }
  }
  lVar8 = 0;
LAB_14025c881:
  lVar9 = FUN_14491371e(param_2,*(undefined4 *)(lVar8 + 0xc));
  dVar2 = *(double *)(param_2 + 0x298);
  fVar20 = (float)(**(code **)(*(longlong *)*param_3 + 0xe8))();
  fVar22 = *(float *)(param_3 + 7);
  local_f8 = param_3[10];
  uStack_f0 = param_3[0xb];
  local_e8 = *(undefined4 *)(param_3 + 0xc);
  uStack_e4 = *(undefined4 *)((longlong)param_3 + 100);
  uStack_e0 = *(undefined4 *)(param_3 + 0xd);
  uStack_dc = *(undefined4 *)((longlong)param_3 + 0x6c);
  pcVar3 = (char *)param_3[1];
  if (*pcVar3 == '\x01') {
    plVar11 = *(longlong **)(pcVar3 + 0x18);
  }
  else {
    plVar11 = (longlong *)((longlong)*(int *)(lVar8 + 8) * 8 + *(longlong *)(pcVar3 + 0x18));
  }
  plVar1 = (longlong *)(param_1 + 8);
  lVar8 = *plVar11;
  if (*(longlong *)(lVar9 + 0x10) != 0) {
    FUN_14025d5d4(*(longlong *)(lVar9 + 0x10),lVar8,plVar1);
  }
  if (*(longlong *)(lVar9 + 0x20) != 0) {
    FUN_146e878c2(*(longlong *)(lVar9 + 0x20),lVar8,plVar1);
  }
  if (*(longlong *)(lVar9 + 0x30) != 0) {
    FUN_146e8d3f8(*(longlong *)(lVar9 + 0x30),lVar8,plVar1);
  }
  if (*(longlong *)(lVar9 + 0x40) != 0) {
    FUN_146e832d4(*(longlong *)(lVar9 + 0x40),lVar8,plVar1);
  }
  if (*(longlong *)(lVar9 + 0x50) != 0) {
    FUN_14025ec62(*(longlong *)(lVar9 + 0x50),lVar8,plVar1);
  }
  if (*(longlong *)(lVar9 + 0x60) != 0) {
    FUN_146e87c84(*(longlong *)(lVar9 + 0x60),lVar8,plVar1);
  }
  if (*(longlong *)(lVar9 + 0x70) != 0) {
    FUN_14025e4fe(*(longlong *)(lVar9 + 0x70),lVar8,plVar1);
  }
  if (*(longlong *)(lVar9 + 0x80) != 0) {
    FUN_146e86572(*(longlong *)(lVar9 + 0x80),lVar8,plVar1);
  }
  if (*(longlong *)(lVar9 + 0x90) != 0) {
    FUN_146e4cbc4(*(longlong *)(lVar9 + 0x90),lVar8,plVar1);
  }
  if (*(longlong *)(lVar9 + 0xa0) != 0) {
    FUN_14025d8c6(*(longlong *)(lVar9 + 0xa0),lVar8,plVar1);
  }
  if (*(longlong *)(lVar9 + 0xb0) != 0) {
    FUN_1497ec09c(*(longlong *)(lVar9 + 0xb0),lVar8,plVar1);
  }
  fVar20 = (float)((1.0 / dVar2) * (double)fVar20);
  if (*(longlong *)(lVar9 + 0xc0) != 0) {
    FUN_14025de76(*(longlong *)(lVar9 + 0xc0),lVar8,plVar1,fVar20);
  }
  if (*(longlong *)(lVar9 + 0xd0) != 0) {
    FUN_14025d474(*(longlong *)(lVar9 + 0xd0),lVar8,plVar1,fVar22 * fVar20);
  }
  if (*(longlong *)(lVar9 + 0xe0) != 0) {
    FUN_14025dbb8(*(longlong *)(lVar9 + 0xe0),lVar8,plVar1,fVar20);
  }
  lVar13 = *(longlong *)(lVar9 + 0xf0);
  if (lVar13 != 0) {
    lVar10 = (longlong)*(int *)(lVar13 + 0xa8);
    if ((lVar10 != -1) &&
       (bVar15 = *(byte *)(*(longlong *)(lVar8 + 0x48) + lVar10), (bVar15 & 0x92) == 0x82)) {
      fVar22 = *(float *)(*(longlong *)(lVar8 + 0x28) + lVar10 * 0xc);
      fVar20 = *(float *)(*(longlong *)(lVar8 + 0x18) + lVar10 * 0xc);
      if ((bVar15 & 0x40) == 0) {
        if (1.0 <= fVar22) {
          fVar22 = 1.0;
        }
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
        if (1.0 <= fVar20) {
          fVar20 = 1.0;
        }
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        bVar15 = 1;
        if ((*(float *)(lVar13 + 0x40) == fVar20) &&
           (!NAN(*(float *)(lVar13 + 0x40)) && !NAN(fVar20))) {
          bVar15 = -(*(float *)(lVar13 + 0x44) != fVar22) & 1;
        }
        *(byte *)(lVar13 + 0x48) = *(byte *)(lVar13 + 0x48) | bVar15;
        *(float *)(lVar13 + 0x40) = fVar20;
        *(float *)(lVar13 + 0x44) = fVar22;
      }
      else {
        local_108 = (undefined8 *)(*(longlong *)(lVar8 + 0x38) + lVar10 * 0x10);
        iVar7 = *(int *)(*(longlong *)(lVar8 + 0x38) + 8 + lVar10 * 0x10);
        local_100 = 0;
        iVar12 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar12 = 0;
        }
        uVar14 = 0;
        if (0 < iVar12) {
          if (iVar7 == 0) {
            puVar16 = &DAT_149dfb77a;
          }
          else {
            puVar16 = (undefined2 *)*local_108;
          }
          lVar10 = 0;
          uVar14 = 0;
          do {
            uVar6 = ((uint)(ushort)puVar16[lVar10] +
                    (uint)(0x19 < (ushort)puVar16[lVar10] - 0x61) * 0x20) - 0x20;
            uVar18 = (uint)(uVar14 >> 8) ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar14 ^ uVar6) & 0xff) * 4);
            uVar14 = (ulonglong)
                     (uVar18 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar18 & 0xff ^ uVar6 >> 8 & 0xff) * 4))
            ;
            lVar10 = lVar10 + 1;
          } while (iVar12 != (int)lVar10);
        }
        uVar6 = *(uint *)(lVar13 + 0x14);
        iVar7 = FUN_140aad9fa(plVar1,uVar14,local_108);
        if (iVar7 == -1) {
          uVar18 = 0;
        }
        else {
          uVar18 = 0;
          lVar10 = (longlong)iVar7 * 0x28 + *plVar1;
          if (lVar10 != 0) {
            local_100 = *(ulonglong *)(lVar10 + 0x10);
            uVar18 = *(uint *)(lVar10 + 0x18);
          }
        }
        local_d8 = &PTR_FUN_149f57480;
        local_d0 = (undefined1 *)0x0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_b0 = DAT_14c84635c;
        local_a8 = 1;
        if (((int)uVar6 < 1) || (uVar18 != uVar6)) {
          uStack_c8 = 1;
          FUN_1447403be(&local_d0,0);
          uVar14 = uStack_b8;
          *local_d0 = 0;
          iVar7 = (int)uStack_b8;
          lVar10 = (longlong)(int)uStack_b8;
          uStack_b8 = CONCAT44(uStack_b8._4_4_,(int)uStack_b8 + 1);
          if (uStack_b8._4_4_ == iVar7) {
            FUN_14475e4ac(&local_c0,uVar14 & 0xffffffff);
          }
          *(undefined4 *)(local_c0 + lVar10 * 4) = 0;
        }
        else {
          uStack_c8 = (ulonglong)uVar6;
          uVar19 = 0;
          FUN_1447403be(&local_d0,0);
          uVar14 = uStack_b8;
          do {
            fVar21 = *(float *)(local_100 + uVar19 * 4);
            if (1.0 <= fVar21) {
              fVar21 = 1.0;
            }
            if (fVar21 <= 0.0) {
              fVar21 = 0.0;
            }
            local_d0[uVar19] = (char)(int)(fVar21 * 15.0);
            uVar19 = uVar19 + 1;
          } while (uVar6 != uVar19);
          iVar7 = (int)uStack_b8;
          lVar10 = (longlong)(int)uStack_b8;
          uStack_b8 = CONCAT44(uStack_b8._4_4_,(int)uStack_b8 + 0x10);
          if ((uint)(uStack_b8._4_4_ - iVar7) < 0x10) {
            FUN_14475e4ac(&local_c0,uVar14 & 0xffffffff);
          }
          puVar17 = (undefined8 *)(local_c0 + 0x30 + lVar10 * 4);
          *puVar17 = 0;
          puVar17[1] = 0;
          puVar17 = (undefined8 *)(local_c0 + 0x20 + lVar10 * 4);
          *puVar17 = 0;
          puVar17[1] = 0;
          puVar17 = (undefined8 *)(local_c0 + 0x10 + lVar10 * 4);
          *puVar17 = 0;
          puVar17[1] = 0;
          puVar17 = (undefined8 *)(local_c0 + lVar10 * 4);
          *puVar17 = 0;
          puVar17[1] = 0;
        }
        local_d8 = &PTR_FUN_149f57478;
        local_a0 = 0x40dd0c55447a0000;
        uStack_98 = 0;
        if (1.0 <= fVar22) {
          fVar22 = 1.0;
        }
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
        if (1.0 <= fVar20) {
          fVar20 = 1.0;
        }
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        local_a8 = local_a8 | -(local_b0._4_4_ != fVar22 || (float)local_b0 != fVar20) & 1U;
        local_b0 = CONCAT44(fVar22,fVar20);
        FUN_14025ef54(lVar13 + 0x18,&local_d8);
        *(undefined8 *)(lVar13 + 0x50) = local_a0;
        *(undefined8 *)(lVar13 + 0x58) = uStack_98;
        local_d8 = &PTR_FUN_149f57480;
        if (local_c0 != 0) {
          FUN_1400020a8();
        }
        if (local_d0 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    lVar10 = (longlong)*(int *)(lVar13 + 0xac);
    if ((lVar10 != -1) &&
       (bVar15 = *(byte *)(*(longlong *)(lVar8 + 0x48) + lVar10), (bVar15 & 0x92) == 0x82)) {
      fVar22 = *(float *)(*(longlong *)(lVar8 + 0x28) + lVar10 * 0xc);
      fVar20 = *(float *)(*(longlong *)(lVar8 + 0x18) + lVar10 * 0xc);
      if ((bVar15 & 0x40) == 0) {
        if (1.0 <= fVar22) {
          fVar22 = 1.0;
        }
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
        if (1.0 <= fVar20) {
          fVar20 = 1.0;
        }
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        bVar15 = 1;
        if ((*(float *)(lVar13 + 0x88) == fVar20) &&
           (!NAN(*(float *)(lVar13 + 0x88)) && !NAN(fVar20))) {
          bVar15 = -(*(float *)(lVar13 + 0x8c) != fVar22) & 1;
        }
        *(byte *)(lVar13 + 0x90) = *(byte *)(lVar13 + 0x90) | bVar15;
        *(float *)(lVar13 + 0x88) = fVar20;
        *(float *)(lVar13 + 0x8c) = fVar22;
      }
      else {
        local_108 = (undefined8 *)(*(longlong *)(lVar8 + 0x38) + lVar10 * 0x10);
        iVar7 = *(int *)(*(longlong *)(lVar8 + 0x38) + 8 + lVar10 * 0x10);
        local_100 = 0;
        iVar12 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar12 = 0;
        }
        if (0 < iVar12) {
          iVar7 = 0;
          do {
            iVar7 = iVar7 + 1;
          } while (iVar12 != iVar7);
        }
        uVar6 = *(uint *)(lVar13 + 0x14);
        iVar7 = FUN_140aad9fa(plVar1);
        lVar10 = (longlong)iVar7 * 0x28 + *plVar1;
        if (lVar10 == 0 || iVar7 == -1) {
          puVar17 = (undefined8 *)0x0;
        }
        else {
          puVar17 = *(undefined8 **)(lVar10 + 0x10);
          local_100 = (ulonglong)*(uint *)(lVar10 + 0x18);
        }
        local_d8 = &PTR_FUN_149f57480;
        local_d0 = (undefined1 *)0x0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_b0 = DAT_14c84635c;
        local_a8 = 1;
        if (((int)uVar6 < 1) || ((uint)local_100 != uVar6)) {
          uStack_c8 = 1;
          FUN_1447403be(&local_d0,0);
          uVar14 = uStack_b8;
          *local_d0 = 0;
          iVar7 = (int)uStack_b8;
          lVar10 = (longlong)(int)uStack_b8;
          uStack_b8 = CONCAT44(uStack_b8._4_4_,(int)uStack_b8 + 1);
          if (uStack_b8._4_4_ == iVar7) {
            FUN_14475e4ac(&local_c0,uVar14 & 0xffffffff);
          }
          *(undefined4 *)(local_c0 + lVar10 * 4) = 0;
        }
        else {
          uStack_c8 = (ulonglong)uVar6;
          uVar19 = 0;
          local_108 = puVar17;
          FUN_1447403be(&local_d0,0);
          uVar14 = uStack_b8;
          do {
            fVar21 = *(float *)((longlong)local_108 + uVar19 * 4);
            if (1.0 <= fVar21) {
              fVar21 = 1.0;
            }
            if (fVar21 <= 0.0) {
              fVar21 = 0.0;
            }
            local_d0[uVar19] = (char)(int)(fVar21 * 15.0);
            uVar19 = uVar19 + 1;
          } while (uVar6 != uVar19);
          iVar7 = (int)uStack_b8;
          lVar10 = (longlong)(int)uStack_b8;
          uStack_b8 = CONCAT44(uStack_b8._4_4_,(int)uStack_b8 + 0x10);
          if ((uint)(uStack_b8._4_4_ - iVar7) < 0x10) {
            FUN_14475e4ac(&local_c0,uVar14 & 0xffffffff);
          }
          puVar17 = (undefined8 *)(local_c0 + 0x30 + lVar10 * 4);
          *puVar17 = 0;
          puVar17[1] = 0;
          puVar17 = (undefined8 *)(local_c0 + 0x20 + lVar10 * 4);
          *puVar17 = 0;
          puVar17[1] = 0;
          puVar17 = (undefined8 *)(local_c0 + 0x10 + lVar10 * 4);
          *puVar17 = 0;
          puVar17[1] = 0;
          puVar17 = (undefined8 *)(local_c0 + lVar10 * 4);
          *puVar17 = 0;
          puVar17[1] = 0;
        }
        local_d8 = &PTR_FUN_149f57478;
        local_a0 = 0x40dd0c55447a0000;
        uStack_98 = 0;
        if (1.0 <= fVar22) {
          fVar22 = 1.0;
        }
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
        if (1.0 <= fVar20) {
          fVar20 = 1.0;
        }
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        local_a8 = local_a8 | -(local_b0._4_4_ != fVar22 || (float)local_b0 != fVar20) & 1U;
        local_b0 = CONCAT44(fVar22,fVar20);
        FUN_14025ef54(lVar13 + 0x60,&local_d8);
        *(undefined8 *)(lVar13 + 0x98) = local_a0;
        *(undefined8 *)(lVar13 + 0xa0) = uStack_98;
        local_d8 = &PTR_FUN_149f57480;
        if (local_c0 != 0) {
          FUN_1400020a8();
        }
        if (local_d0 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if (*(longlong *)(lVar9 + 0x110) != 0) {
    FUN_1497ec29c(*(longlong *)(lVar9 + 0x110),lVar8,plVar1,param_1 + 0xf8);
  }
  if (*(longlong *)(lVar9 + 0x100) != 0) {
    FUN_1497ec88a(*(longlong *)(lVar9 + 0x100),lVar8,param_1 + 0xa8);
  }
  if (*(longlong *)(lVar9 + 0x130) != 0) {
    FUN_146e13bac(*(longlong *)(lVar9 + 0x130),lVar8,param_1 + 0x58);
  }
  if (*(longlong *)(lVar9 + 0x160) != 0) {
    FUN_146e24c20(*(longlong *)(lVar9 + 0x160),lVar8,plVar1);
  }
  if (*(longlong *)(lVar9 + 400) == 0) {
    bVar15 = 0;
  }
  else {
    FUN_1497eccfa(*(longlong *)(lVar9 + 400),lVar8,plVar1);
    bVar15 = *(byte *)(*(longlong *)(lVar9 + 400) + 0x60);
  }
  lVar10 = DAT_14cc26ff8;
  lVar13 = *(longlong *)(lVar9 + 0x180);
  if (lVar13 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar14 = 0;
    }
    else {
      bVar5 = FUN_144a61b4f();
      uVar14 = (ulonglong)(bVar5 ^ 1);
      lVar13 = *(longlong *)(lVar9 + 0x180);
    }
    local_128 = bVar15 & *(byte *)(lVar10 + uVar14) ^ 1;
    local_120 = lVar9 + 0x170;
    local_110 = &local_f8;
    local_118 = param_2 + 0x2d0;
    FUN_146e40eac(lVar13,lVar8,plVar1,0x42c80000);
  }
  if (*(longlong *)(lVar9 + 0x1a0) != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc27008) && (FUN_144b3d300(&DAT_14cc27008), DAT_14cc27008 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cc27000 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))
                     (DAT_14c8407a8,L"p.Chaos.PBDEvolution.WriteCCDContacts",1);
      _Init_thread_footer(&DAT_14cc27008);
    }
    if (DAT_14cc27000 == (longlong *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*DAT_14cc27000 + 0xa8))();
    }
    FUN_146e13f64(*(undefined8 *)(lVar9 + 0x1a0),lVar8);
    *(undefined1 *)(*(longlong *)(lVar9 + 0x1a0) + 0x18) = uVar4;
  }
  if ((local_90 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14025d44e FUN_14025d44e body=37 status=ok
// SIG undefined FUN_14025d44e(void)

undefined8 FUN_14025d44e(longlong *param_1)

{
  longlong lVar1;
  double dVar2;
  
  lVar1 = (**(code **)(*param_1 + 0xb8))();
  dVar2 = *(double *)(lVar1 + 0x40);
  if (*(double *)(lVar1 + 0x40) <= *(double *)(lVar1 + 0x48)) {
    dVar2 = *(double *)(lVar1 + 0x48);
  }
  if (dVar2 <= *(double *)(lVar1 + 0x50)) {
    dVar2 = *(double *)(lVar1 + 0x50);
  }
  return CONCAT44((int)((ulonglong)dVar2 >> 0x20),(float)dVar2);
}



// FUNCTION 14025d474 FUN_14025d474 body=352 status=ok
// SIG undefined FUN_14025d474(void)

void FUN_14025d474(longlong param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  longlong *plVar6;
  
  lVar3 = (longlong)*(int *)(param_1 + 0x2c);
  if ((lVar3 != -1) && ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar3) & 0x92) == 0x82)) {
    fVar8 = *(float *)(*(longlong *)(param_2 + 0x28) + lVar3 * 0xc);
    fVar9 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar3 * 0xc);
    if (fVar8 <= DAT_14c84635c._4_4_) {
      fVar8 = DAT_14c84635c._4_4_;
    }
    if (fVar9 <= (float)DAT_14c84635c) {
      fVar9 = (float)DAT_14c84635c;
    }
    *(float *)(param_1 + 0x24) = fVar9;
    *(float *)(param_1 + 0x28) = fVar8 - fVar9;
    if ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar3) & 0x40) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_2 + 0x38) + 8 + lVar3 * 0x10);
      uVar7 = 0;
      iVar4 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      if (0 < iVar4) {
        iVar1 = 0;
        do {
          iVar1 = iVar1 + 1;
        } while (iVar4 != iVar1);
      }
      plVar6 = param_3;
      iVar1 = FUN_140aad9fa();
      uVar5 = SUB84(plVar6,0);
      if (iVar1 == -1) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        lVar3 = (longlong)iVar1 * 0x28 + *param_3;
        if (lVar3 != 0) {
          uVar7 = *(undefined8 *)(lVar3 + 0x10);
          uVar2 = *(undefined4 *)(lVar3 + 0x18);
          uVar5 = *(undefined4 *)(lVar3 + 0x1c);
        }
      }
      *(undefined8 *)(param_1 + 8) = uVar7;
      *(undefined4 *)(param_1 + 0x10) = uVar2;
      *(undefined4 *)(param_1 + 0x14) = uVar5;
    }
  }
  *(undefined4 *)(param_1 + 0x20) = param_4;
  return;
}



// FUNCTION 14025d5d4 FUN_14025d5d4 body=752 status=ok
// SIG undefined FUN_14025d5d4(void)

void FUN_14025d5d4(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined **local_b0;
  longlong local_a8;
  longlong local_98;
  float local_88;
  float local_84;
  byte local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar5 = (longlong)*(int *)(param_1 + 0x88);
  if ((lVar5 != -1) &&
     (bVar3 = *(byte *)(*(longlong *)(param_2 + 0x48) + lVar5), (bVar3 & 0x92) == 0x82)) {
    fVar7 = *(float *)(*(longlong *)(param_2 + 0x28) + lVar5 * 0xc);
    fVar8 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar5 * 0xc);
    if ((bVar3 & 0x40) == 0) {
      if (1.0 <= fVar7) {
        fVar7 = 1.0;
      }
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      if (1.0 <= fVar8) {
        fVar8 = 1.0;
      }
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      bVar3 = 1;
      if ((*(float *)(param_1 + 0x58) == fVar8) && (!NAN(*(float *)(param_1 + 0x58)) && !NAN(fVar8))
         ) {
        bVar3 = -(*(float *)(param_1 + 0x5c) != fVar7) & 1;
      }
      *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | bVar3;
      *(float *)(param_1 + 0x58) = fVar8;
      *(float *)(param_1 + 0x5c) = fVar7;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      uVar2 = *(undefined4 *)(param_1 + 0x2c);
      local_c0 = *(undefined8 *)(param_1 + 8);
      local_b8 = *(undefined4 *)(param_1 + 0x10);
      iVar4 = *(int *)(*(longlong *)(param_2 + 0x38) + 8 + lVar5 * 0x10);
      iVar6 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar6 = 0;
      }
      if (0 < iVar6) {
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 1;
        } while (iVar6 != iVar4);
      }
      iVar4 = FUN_140aad9fa(param_3);
      lVar5 = (longlong)iVar4 * 0x28 + *param_3;
      if (lVar5 == 0 || iVar4 == -1) {
        local_d8 = 0;
        uStack_d0 = 0;
      }
      else {
        local_d8 = *(undefined8 *)(lVar5 + 0x10);
        uStack_d0 = *(undefined4 *)(lVar5 + 0x18);
        uStack_cc = *(undefined4 *)(lVar5 + 0x1c);
      }
      local_68 = DAT_14c84635c;
      local_e0 = 0;
      local_e8 = 0x10;
      local_f8 = uVar1;
      local_f0 = uVar2;
      FUN_140a9b934(&local_b0,&local_68,&local_d8,&local_c0);
      local_b0 = &PTR_FUN_149f57478;
      local_78 = 0x40dd0c55447a0000;
      uStack_70 = 0;
      if (1.0 <= fVar7) {
        fVar7 = 1.0;
      }
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      if (1.0 <= fVar8) {
        fVar8 = 1.0;
      }
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      bVar3 = 1;
      if ((local_88 == fVar8) && (!NAN(local_88) && !NAN(fVar8))) {
        bVar3 = -(local_84 != fVar7) & 1;
      }
      local_80 = local_80 | bVar3;
      local_88 = fVar8;
      local_84 = fVar7;
      FUN_14025ef54(param_1 + 0x30,&local_b0);
      *(undefined4 *)(param_1 + 0x68) = (undefined4)local_78;
      *(undefined4 *)(param_1 + 0x6c) = local_78._4_4_;
      *(undefined4 *)(param_1 + 0x70) = (undefined4)uStack_70;
      *(undefined4 *)(param_1 + 0x74) = uStack_70._4_4_;
      local_b0 = &PTR_FUN_149f57480;
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14025d8c6 FUN_14025d8c6 body=752 status=ok
// SIG undefined FUN_14025d8c6(void)

void FUN_14025d8c6(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined **local_b0;
  longlong local_a8;
  longlong local_98;
  float local_88;
  float local_84;
  byte local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar5 = (longlong)*(int *)(param_1 + 0x98);
  if ((lVar5 != -1) &&
     (bVar3 = *(byte *)(*(longlong *)(param_2 + 0x48) + lVar5), (bVar3 & 0x92) == 0x82)) {
    fVar7 = *(float *)(*(longlong *)(param_2 + 0x28) + lVar5 * 0xc);
    fVar8 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar5 * 0xc);
    if ((bVar3 & 0x40) == 0) {
      if (1.0 <= fVar7) {
        fVar7 = 1.0;
      }
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      if (1.0 <= fVar8) {
        fVar8 = 1.0;
      }
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      bVar3 = 1;
      if ((*(float *)(param_1 + 0x68) == fVar8) && (!NAN(*(float *)(param_1 + 0x68)) && !NAN(fVar8))
         ) {
        bVar3 = -(*(float *)(param_1 + 0x6c) != fVar7) & 1;
      }
      *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) | bVar3;
      *(float *)(param_1 + 0x68) = fVar8;
      *(float *)(param_1 + 0x6c) = fVar7;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar2 = *(undefined4 *)(param_1 + 0x1c);
      local_c0 = *(undefined8 *)(param_1 + 8);
      local_b8 = *(undefined4 *)(param_1 + 0x10);
      iVar4 = *(int *)(*(longlong *)(param_2 + 0x38) + 8 + lVar5 * 0x10);
      iVar6 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar6 = 0;
      }
      if (0 < iVar6) {
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 1;
        } while (iVar6 != iVar4);
      }
      iVar4 = FUN_140aad9fa(param_3);
      lVar5 = (longlong)iVar4 * 0x28 + *param_3;
      if (lVar5 == 0 || iVar4 == -1) {
        local_d8 = 0;
        uStack_d0 = 0;
      }
      else {
        local_d8 = *(undefined8 *)(lVar5 + 0x10);
        uStack_d0 = *(undefined4 *)(lVar5 + 0x18);
        uStack_cc = *(undefined4 *)(lVar5 + 0x1c);
      }
      local_68 = DAT_14c84635c;
      local_e0 = 0;
      local_e8 = 0x10;
      local_f8 = uVar1;
      local_f0 = uVar2;
      FUN_14025efd6(&local_b0,&local_68,&local_d8,&local_c0);
      local_b0 = &PTR_FUN_149f57478;
      local_78 = 0x40dd0c55447a0000;
      uStack_70 = 0;
      if (1.0 <= fVar7) {
        fVar7 = 1.0;
      }
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      if (1.0 <= fVar8) {
        fVar8 = 1.0;
      }
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      bVar3 = 1;
      if ((local_88 == fVar8) && (!NAN(local_88) && !NAN(fVar8))) {
        bVar3 = -(local_84 != fVar7) & 1;
      }
      local_80 = local_80 | bVar3;
      local_88 = fVar8;
      local_84 = fVar7;
      FUN_14025ef54(param_1 + 0x40,&local_b0);
      *(undefined4 *)(param_1 + 0x78) = (undefined4)local_78;
      *(undefined4 *)(param_1 + 0x7c) = local_78._4_4_;
      *(undefined4 *)(param_1 + 0x80) = (undefined4)uStack_70;
      *(undefined4 *)(param_1 + 0x84) = uStack_70._4_4_;
      local_b0 = &PTR_FUN_149f57480;
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14025dbb8 FUN_14025dbb8 body=701 status=ok
// SIG undefined FUN_14025dbb8(void)

void FUN_14025dbb8(longlong param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  
  lVar3 = (longlong)*(int *)(param_1 + 0x54);
  if ((lVar3 != -1) && ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar3) & 0x92) == 0x82)) {
    fVar9 = *(float *)(*(longlong *)(param_2 + 0x28) + lVar3 * 0xc);
    fVar10 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar3 * 0xc);
    if (fVar9 <= DAT_14c84635c._4_4_) {
      fVar9 = DAT_14c84635c._4_4_;
    }
    if (fVar10 <= (float)DAT_14c84635c) {
      fVar10 = (float)DAT_14c84635c;
    }
    *(float *)(param_1 + 0x3c) = fVar10;
    *(float *)(param_1 + 0x40) = fVar9 - fVar10;
    bVar5 = *(byte *)(*(longlong *)(param_2 + 0x48) + lVar3);
    if ((bVar5 & 0x40) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_2 + 0x38) + 8 + lVar3 * 0x10);
      uVar7 = 0;
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      if (0 < iVar6) {
        iVar1 = 0;
        do {
          iVar1 = iVar1 + 1;
        } while (iVar6 != iVar1);
      }
      plVar8 = param_3;
      iVar1 = FUN_140aad9fa();
      uVar2 = SUB84(plVar8,0);
      if (iVar1 == -1) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        lVar3 = (longlong)iVar1 * 0x28 + *param_3;
        uVar7 = 0;
        if (lVar3 != 0) {
          uVar4 = *(undefined8 *)(lVar3 + 0x10);
          uVar7 = *(undefined4 *)(lVar3 + 0x18);
          uVar2 = *(undefined4 *)(lVar3 + 0x1c);
        }
      }
      *(undefined8 *)(param_1 + 0x10) = uVar4;
      *(undefined4 *)(param_1 + 0x18) = uVar7;
      *(undefined4 *)(param_1 + 0x1c) = uVar2;
      bVar5 = *(byte *)(*(longlong *)(param_2 + 0x48) + (longlong)*(int *)(param_1 + 0x54));
    }
    *(byte *)(param_1 + 0x4c) = bVar5 & 1;
  }
  lVar3 = (longlong)*(int *)(param_1 + 0x50);
  if ((lVar3 != -1) && ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar3) & 0x92) == 0x82)) {
    fVar9 = *(float *)(*(longlong *)(param_2 + 0x28) + lVar3 * 0xc);
    fVar10 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar3 * 0xc);
    *(float *)(param_1 + 0x44) = fVar10;
    *(float *)(param_1 + 0x48) = fVar9 - fVar10;
    if ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar3) & 0x40) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_2 + 0x38) + 8 + lVar3 * 0x10);
      uVar4 = 0;
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      if (0 < iVar6) {
        iVar1 = 0;
        do {
          iVar1 = iVar1 + 1;
        } while (iVar6 != iVar1);
      }
      plVar8 = param_3;
      iVar1 = FUN_140aad9fa();
      uVar7 = SUB84(plVar8,0);
      if (iVar1 == -1) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        lVar3 = (longlong)iVar1 * 0x28 + *param_3;
        if (lVar3 != 0) {
          uVar4 = *(undefined8 *)(lVar3 + 0x10);
          uVar2 = *(undefined4 *)(lVar3 + 0x18);
          uVar7 = *(undefined4 *)(lVar3 + 0x1c);
        }
      }
      *(undefined8 *)(param_1 + 0x20) = uVar4;
      *(undefined4 *)(param_1 + 0x28) = uVar2;
      *(undefined4 *)(param_1 + 0x2c) = uVar7;
    }
  }
  *(undefined4 *)(param_1 + 0x38) = param_4;
  return;
}



// FUNCTION 14025de76 FUN_14025de76 body=1671 status=ok
// SIG undefined FUN_14025de76(void)

void FUN_14025de76(longlong param_1,longlong param_2,longlong *param_3,float param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_e8 [32];
  undefined **local_c8;
  undefined1 *local_c0;
  ulonglong uStack_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  byte local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar5 = (longlong)*(int *)(param_1 + 0x98);
  if ((lVar5 != -1) &&
     (bVar3 = *(byte *)(*(longlong *)(param_2 + 0x48) + lVar5), (bVar3 & 0x92) == 0x82)) {
    fVar12 = *(float *)(*(longlong *)(param_2 + 0x28) + lVar5 * 0xc);
    fVar13 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar5 * 0xc);
    if ((bVar3 & 0x40) == 0) {
      if (1.0 <= fVar12) {
        fVar12 = 1.0;
      }
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      if (1.0 <= fVar13) {
        fVar13 = 1.0;
      }
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      bVar3 = 1;
      if ((*(float *)(param_1 + 0x40) == fVar13) &&
         (!NAN(*(float *)(param_1 + 0x40)) && !NAN(fVar13))) {
        bVar3 = -(*(float *)(param_1 + 0x44) != fVar12) & 1;
      }
      *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | bVar3;
      *(float *)(param_1 + 0x40) = fVar13;
      *(float *)(param_1 + 0x44) = fVar12;
    }
    else {
      iVar4 = *(int *)(*(longlong *)(param_2 + 0x38) + 8 + lVar5 * 0x10);
      uVar10 = 0;
      uVar6 = iVar4 - 1;
      if (iVar4 == 0) {
        uVar6 = uVar10;
      }
      if (0 < (int)uVar6) {
        uVar9 = 0;
        do {
          uVar9 = uVar9 + 1;
        } while (uVar6 != uVar9);
      }
      uVar6 = *(uint *)(param_1 + 0x14);
      iVar4 = FUN_140aad9fa(param_3);
      lVar5 = (longlong)iVar4 * 0x28 + *param_3;
      if (lVar5 == 0 || iVar4 == -1) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(longlong *)(lVar5 + 0x10);
        uVar10 = *(uint *)(lVar5 + 0x18);
      }
      local_c8 = &PTR_FUN_149f57480;
      local_c0 = (undefined1 *)0x0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = DAT_14c84635c;
      local_98 = 1;
      if (((int)uVar6 < 1) || (uVar10 != uVar6)) {
        uStack_b8 = 1;
        FUN_1447403be(&local_c0,0);
        uVar2 = uStack_a8;
        *local_c0 = 0;
        iVar4 = (int)uStack_a8;
        lVar5 = (longlong)(int)uStack_a8;
        uStack_a8 = CONCAT44(uStack_a8._4_4_,(int)uStack_a8 + 1);
        if (uStack_a8._4_4_ == iVar4) {
          FUN_14475e4ac(&local_b0,uVar2 & 0xffffffff);
        }
        *(undefined4 *)(local_b0 + lVar5 * 4) = 0;
      }
      else {
        uStack_b8 = (ulonglong)uVar6;
        uVar7 = 0;
        FUN_1447403be(&local_c0,0);
        uVar2 = uStack_a8;
        do {
          fVar11 = *(float *)(lVar8 + uVar7 * 4);
          if (1.0 <= fVar11) {
            fVar11 = 1.0;
          }
          if (fVar11 <= 0.0) {
            fVar11 = 0.0;
          }
          local_c0[uVar7] = (char)(int)(fVar11 * 15.0);
          uVar7 = uVar7 + 1;
        } while (uVar6 != uVar7);
        iVar4 = (int)uStack_a8;
        lVar5 = (longlong)(int)uStack_a8;
        uStack_a8 = CONCAT44(uStack_a8._4_4_,(int)uStack_a8 + 0x10);
        if ((uint)(uStack_a8._4_4_ - iVar4) < 0x10) {
          FUN_14475e4ac(&local_b0,uVar2 & 0xffffffff);
        }
        puVar1 = (undefined8 *)(local_b0 + 0x30 + lVar5 * 4);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(local_b0 + 0x20 + lVar5 * 4);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(local_b0 + 0x10 + lVar5 * 4);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(local_b0 + lVar5 * 4);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      local_c8 = &PTR_FUN_149f57478;
      local_90 = 0x40dd0c55447a0000;
      uStack_88 = 0;
      if (1.0 <= fVar12) {
        fVar12 = 1.0;
      }
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      if (1.0 <= fVar13) {
        fVar13 = 1.0;
      }
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      local_98 = local_98 | -(local_a0._4_4_ != fVar12 || (float)local_a0 != fVar13) & 1U;
      local_a0 = CONCAT44(fVar12,fVar13);
      FUN_14025ef54(param_1 + 0x18,&local_c8);
      *(undefined8 *)(param_1 + 0x50) = local_90;
      *(undefined8 *)(param_1 + 0x58) = uStack_88;
      local_c8 = &PTR_FUN_149f57480;
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
      if (local_c0 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  lVar5 = (longlong)*(int *)(param_1 + 0x9c);
  if ((lVar5 != -1) &&
     (bVar3 = *(byte *)(*(longlong *)(param_2 + 0x48) + lVar5), (bVar3 & 0x92) == 0x82)) {
    fVar12 = *(float *)(*(longlong *)(param_2 + 0x28) + lVar5 * 0xc);
    fVar13 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar5 * 0xc);
    if (10.0 <= fVar12) {
      fVar12 = 10.0;
    }
    if (fVar12 <= 0.01) {
      fVar12 = 0.01;
    }
    if (10.0 <= fVar13) {
      fVar13 = 10.0;
    }
    if (fVar13 <= 0.01) {
      fVar13 = 0.01;
    }
    fVar12 = fVar12 * param_4;
    fVar13 = fVar13 * param_4;
    if ((bVar3 & 0x40) == 0) {
      bVar3 = 1;
      if ((*(float *)(param_1 + 0x88) == fVar13) &&
         (!NAN(*(float *)(param_1 + 0x88)) && !NAN(fVar13))) {
        bVar3 = -(*(float *)(param_1 + 0x8c) != fVar12) & 1;
      }
      *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | bVar3;
      *(float *)(param_1 + 0x88) = fVar13;
      *(float *)(param_1 + 0x8c) = fVar12;
    }
    else {
      iVar4 = *(int *)(*(longlong *)(param_2 + 0x38) + 8 + lVar5 * 0x10);
      uVar10 = 0;
      uVar6 = iVar4 - 1;
      if (iVar4 == 0) {
        uVar6 = uVar10;
      }
      if (0 < (int)uVar6) {
        uVar9 = 0;
        do {
          uVar9 = uVar9 + 1;
        } while (uVar6 != uVar9);
      }
      uVar6 = *(uint *)(param_1 + 0x14);
      iVar4 = FUN_140aad9fa(param_3);
      lVar5 = (longlong)iVar4 * 0x28 + *param_3;
      if (lVar5 == 0 || iVar4 == -1) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(longlong *)(lVar5 + 0x10);
        uVar10 = *(uint *)(lVar5 + 0x18);
      }
      local_c8 = &PTR_FUN_149f57480;
      local_c0 = (undefined1 *)0x0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = CONCAT44(fVar12,fVar13);
      local_98 = 1;
      if (((int)uVar6 < 1) || (uVar10 != uVar6)) {
        uStack_b8 = 1;
        FUN_1447403be(&local_c0,0);
        uVar2 = uStack_a8;
        *local_c0 = 0;
        iVar4 = (int)uStack_a8;
        lVar5 = (longlong)(int)uStack_a8;
        uStack_a8 = CONCAT44(uStack_a8._4_4_,(int)uStack_a8 + 1);
        if (uStack_a8._4_4_ == iVar4) {
          FUN_14475e4ac(&local_b0,uVar2 & 0xffffffff);
        }
        *(undefined4 *)(local_b0 + lVar5 * 4) = 0;
      }
      else {
        uStack_b8 = (ulonglong)uVar6;
        uVar7 = 0;
        FUN_1447403be(&local_c0,0);
        uVar2 = uStack_a8;
        do {
          fVar12 = *(float *)(lVar8 + uVar7 * 4);
          if (1.0 <= fVar12) {
            fVar12 = 1.0;
          }
          if (fVar12 <= 0.0) {
            fVar12 = 0.0;
          }
          local_c0[uVar7] = (char)(int)(fVar12 * 15.0);
          uVar7 = uVar7 + 1;
        } while (uVar6 != uVar7);
        iVar4 = (int)uStack_a8;
        lVar5 = (longlong)(int)uStack_a8;
        uStack_a8 = CONCAT44(uStack_a8._4_4_,(int)uStack_a8 + 0x10);
        if ((uint)(uStack_a8._4_4_ - iVar4) < 0x10) {
          FUN_14475e4ac(&local_b0,uVar2 & 0xffffffff);
        }
        puVar1 = (undefined8 *)(local_b0 + 0x30 + lVar5 * 4);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(local_b0 + 0x20 + lVar5 * 4);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(local_b0 + 0x10 + lVar5 * 4);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(local_b0 + lVar5 * 4);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      FUN_14025ef54(param_1 + 0x60,&local_c8);
      local_c8 = &PTR_FUN_149f57480;
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
      if (local_c0 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14025e4fe FUN_14025e4fe body=1891 status=ok
// SIG undefined FUN_14025e4fe(void)

void FUN_14025e4fe(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  undefined2 *puVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined **local_c0;
  longlong local_b8;
  longlong local_a8;
  float local_98;
  float local_94;
  byte local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar7 = (longlong)*(int *)(param_1 + 0x130);
  if ((lVar7 != -1) &&
     (bVar4 = *(byte *)(*(longlong *)(param_2 + 0x48) + lVar7), (bVar4 & 0x92) == 0x82)) {
    fVar10 = *(float *)(*(longlong *)(param_2 + 0x28) + lVar7 * 0xc);
    fVar11 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar7 * 0xc);
    if ((bVar4 & 0x40) == 0) {
      if (1.0 <= fVar10) {
        fVar10 = 1.0;
      }
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      if (1.0 <= fVar11) {
        fVar11 = 1.0;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      bVar4 = 1;
      if ((*(float *)(param_1 + 0x58) == fVar11) &&
         (!NAN(*(float *)(param_1 + 0x58)) && !NAN(fVar11))) {
        bVar4 = -(*(float *)(param_1 + 0x5c) != fVar10) & 1;
      }
      *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | bVar4;
      *(float *)(param_1 + 0x58) = fVar11;
      *(float *)(param_1 + 0x5c) = fVar10;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      uVar2 = *(undefined4 *)(param_1 + 0x2c);
      local_d0 = *(undefined8 *)(param_1 + 0x18);
      local_c8 = *(undefined4 *)(param_1 + 0x20);
      iVar5 = *(int *)(*(longlong *)(param_2 + 0x38) + 8 + lVar7 * 0x10);
      iVar8 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar8 = 0;
      }
      if (0 < iVar8) {
        iVar5 = 0;
        do {
          iVar5 = iVar5 + 1;
        } while (iVar8 != iVar5);
      }
      iVar5 = FUN_140aad9fa(param_3);
      lVar7 = (longlong)iVar5 * 0x28 + *param_3;
      if (lVar7 == 0 || iVar5 == -1) {
        local_e8 = 0;
        uStack_e0 = 0;
      }
      else {
        local_e8 = *(undefined8 *)(lVar7 + 0x10);
        uStack_e0 = *(undefined4 *)(lVar7 + 0x18);
        uStack_dc = *(undefined4 *)(lVar7 + 0x1c);
      }
      local_78 = DAT_14c84635c;
      local_f0 = 0;
      local_f8 = 0x10;
      local_108 = uVar1;
      local_100 = uVar2;
      FUN_140a9b934(&local_c0,&local_78,&local_e8,&local_d0);
      local_c0 = &PTR_FUN_149f57478;
      local_88 = 0x40dd0c55447a0000;
      uStack_80 = 0;
      if (1.0 <= fVar10) {
        fVar10 = 1.0;
      }
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      if (1.0 <= fVar11) {
        fVar11 = 1.0;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      bVar4 = 1;
      if ((local_98 == fVar11) && (!NAN(local_98) && !NAN(fVar11))) {
        bVar4 = -(local_94 != fVar10) & 1;
      }
      local_90 = local_90 | bVar4;
      local_98 = fVar11;
      local_94 = fVar10;
      FUN_14025ef54(param_1 + 0x30,&local_c0);
      *(undefined4 *)(param_1 + 0x68) = (undefined4)local_88;
      *(undefined4 *)(param_1 + 0x6c) = local_88._4_4_;
      *(undefined4 *)(param_1 + 0x70) = (undefined4)uStack_80;
      *(undefined4 *)(param_1 + 0x74) = uStack_80._4_4_;
      local_c0 = &PTR_FUN_149f57480;
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  lVar7 = (longlong)*(int *)(param_1 + 0x134);
  if ((lVar7 != -1) &&
     (bVar4 = *(byte *)(*(longlong *)(param_2 + 0x48) + lVar7), (bVar4 & 0x92) == 0x82)) {
    fVar10 = *(float *)(*(longlong *)(param_2 + 0x28) + lVar7 * 0xc);
    fVar11 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar7 * 0xc);
    if (1.0 <= fVar10) {
      fVar10 = 1.0;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    if (1.0 <= fVar11) {
      fVar11 = 1.0;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    local_78 = CONCAT44(fVar10,fVar11);
    if ((bVar4 & 0x40) == 0) {
      if ((*(float *)(param_1 + 0xa0) != fVar11) || (NAN(*(float *)(param_1 + 0xa0)) || NAN(fVar11))
         ) {
        bVar4 = 1;
      }
      else {
        bVar4 = -(fVar10 != *(float *)(param_1 + 0xa4)) & 1;
      }
      *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xa8) | bVar4;
      *(undefined8 *)(param_1 + 0xa0) = local_78;
    }
    else {
      lVar3 = *(longlong *)(param_2 + 0x38);
      lVar7 = lVar7 * 0x10;
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      uVar2 = *(undefined4 *)(param_1 + 0x2c);
      local_d0 = *(undefined8 *)(param_1 + 0x18);
      local_c8 = *(undefined4 *)(param_1 + 0x20);
      iVar5 = *(int *)(lVar3 + 8 + lVar7);
      if (iVar5 == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      else {
        puVar9 = *(undefined2 **)(lVar3 + lVar7);
      }
      iVar8 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar8 = 0;
      }
      uVar6 = FUN_144a49b4a(iVar8,puVar9);
      iVar5 = FUN_140aad9fa(param_3,uVar6,lVar3 + lVar7);
      lVar7 = (longlong)iVar5 * 0x28 + *param_3;
      if (lVar7 == 0 || iVar5 == -1) {
        local_e8 = 0;
        uStack_e0 = 0;
      }
      else {
        local_e8 = *(undefined8 *)(lVar7 + 0x10);
        uStack_e0 = *(undefined4 *)(lVar7 + 0x18);
        uStack_dc = *(undefined4 *)(lVar7 + 0x1c);
      }
      local_f0 = 0;
      local_f8 = 0x10;
      local_108 = uVar1;
      local_100 = uVar2;
      FUN_140a9b934(&local_c0,&local_78,&local_e8,&local_d0);
      FUN_14025ef54(param_1 + 0x78,&local_c0);
      local_c0 = &PTR_FUN_149f57480;
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  lVar7 = (longlong)*(int *)(param_1 + 0x138);
  if ((lVar7 != -1) &&
     (bVar4 = *(byte *)(*(longlong *)(param_2 + 0x48) + lVar7), (bVar4 & 0x92) == 0x82)) {
    fVar10 = *(float *)(*(longlong *)(param_2 + 0x28) + lVar7 * 0xc);
    fVar11 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar7 * 0xc);
    if ((bVar4 & 0x40) == 0) {
      if (1.0 <= fVar10) {
        fVar10 = 1.0;
      }
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      if (1.0 <= fVar11) {
        fVar11 = 1.0;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      bVar4 = 1;
      if ((*(float *)(param_1 + 0xd8) == fVar11) &&
         (!NAN(*(float *)(param_1 + 0xd8)) && !NAN(fVar11))) {
        bVar4 = -(*(float *)(param_1 + 0xdc) != fVar10) & 1;
      }
      *(byte *)(param_1 + 0xe0) = *(byte *)(param_1 + 0xe0) | bVar4;
      *(float *)(param_1 + 0xd8) = fVar11;
      *(float *)(param_1 + 0xdc) = fVar10;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      uVar2 = *(undefined4 *)(param_1 + 0x2c);
      local_d0 = *(undefined8 *)(param_1 + 0x18);
      local_c8 = *(undefined4 *)(param_1 + 0x20);
      iVar5 = *(int *)(*(longlong *)(param_2 + 0x38) + 8 + lVar7 * 0x10);
      iVar8 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar8 = 0;
      }
      if (0 < iVar8) {
        iVar5 = 0;
        do {
          iVar5 = iVar5 + 1;
        } while (iVar8 != iVar5);
      }
      iVar5 = FUN_140aad9fa(param_3);
      lVar7 = (longlong)iVar5 * 0x28 + *param_3;
      if (lVar7 == 0 || iVar5 == -1) {
        local_e8 = 0;
        uStack_e0 = 0;
      }
      else {
        local_e8 = *(undefined8 *)(lVar7 + 0x10);
        uStack_e0 = *(undefined4 *)(lVar7 + 0x18);
        uStack_dc = *(undefined4 *)(lVar7 + 0x1c);
      }
      local_78 = DAT_14c84635c;
      local_f0 = 0;
      local_f8 = 0x10;
      local_108 = uVar1;
      local_100 = uVar2;
      FUN_140a9b934(&local_c0,&local_78,&local_e8,&local_d0);
      local_c0 = &PTR_FUN_149f57478;
      local_88 = 0x40dd0c55447a0000;
      uStack_80 = 0;
      if (1.0 <= fVar10) {
        fVar10 = 1.0;
      }
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      if (1.0 <= fVar11) {
        fVar11 = 1.0;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      bVar4 = 1;
      if ((local_98 == fVar11) && (!NAN(local_98) && !NAN(fVar11))) {
        bVar4 = -(local_94 != fVar10) & 1;
      }
      local_90 = local_90 | bVar4;
      local_98 = fVar11;
      local_94 = fVar10;
      FUN_14025ef54(param_1 + 0xb0,&local_c0);
      *(undefined4 *)(param_1 + 0xe8) = (undefined4)local_88;
      *(undefined4 *)(param_1 + 0xec) = local_88._4_4_;
      *(undefined4 *)(param_1 + 0xf0) = (undefined4)uStack_80;
      *(undefined4 *)(param_1 + 0xf4) = uStack_80._4_4_;
      local_c0 = &PTR_FUN_149f57480;
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


