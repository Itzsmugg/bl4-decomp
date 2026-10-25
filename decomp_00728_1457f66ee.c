// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1457f66ee FUN_1457f66ee body=8 status=ok
// SIG undefined FUN_1457f66ee(void)

undefined8 FUN_1457f66ee(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



// FUNCTION 1457f66f6 FUN_1457f66f6 body=68 status=ok
// SIG undefined FUN_1457f66f6(void)

void FUN_1457f66f6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  FUN_1410b7f58();
  iVar1 = FUN_14487fd02(param_1);
  if (iVar1 != 1) {
    lVar2 = FUN_1410b7fb6(param_1);
    *(uint *)(param_1 + 0x398) = *(uint *)(param_1 + 0x398) & 0xffffffbf | (uint)(lVar2 != 0) << 6;
  }
  return;
}



// FUNCTION 1457f673a FUN_1457f673a body=198 status=ok
// SIG undefined FUN_1457f673a(void)

void FUN_1457f673a(undefined8 param_1,undefined8 *param_2)

{
  size_t sVar1;
  wchar_t *_Str;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  local_38 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_30 = 0;
    local_28 = 0;
  }
  else {
    sVar1 = wcslen(_Str);
    FUN_1449b853c(local_b8,_Str,sVar1 & 0xffffffff,1);
  }
  FUN_1405b406a(param_1,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457f6802 FUN_1457f6802 body=271 status=ok
// SIG undefined FUN_1457f6802(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457f6802(void)

{
  _DAT_14caa0b20 = L"bIsBound";
  DAT_14caa0b4a = FUN_140850cc5();
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  _DAT_14caa0b28 = &DAT_14ca76fe8;
  _DAT_14caa0b38 = &LAB_14682652b;
  _DAT_14caa0b40 = 0x100000000;
  _DAT_14caa0b48 = 0;
  _DAT_14caa0b30 = DAT_14ca9efb8;
  DAT_14ca9efb8 = &DAT_14caa0b20;
  return;
}



// FUNCTION 1457f6926 FUN_1457f6926 body=57 status=ok
// SIG undefined FUN_1457f6926(void)

void FUN_1457f6926(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60e78 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60e78 = FUN_140002ddd(FUN_1464f0510,uVar1,L"GbxMomentNodeState_SetActorFactValue");
  }
  return;
}



// FUNCTION 1457f696e FUN_1457f696e body=40 status=ok
// SIG undefined FUN_1457f696e(void)

undefined8 FUN_1457f696e(undefined8 param_1,int param_2)

{
  FUN_1457f6996();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457f6996 FUN_1457f6996 body=87 status=ok
// SIG undefined FUN_1457f6996(void)

void FUN_1457f6996(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b71d360;
  FUN_1457f69ed(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1457f69ed FUN_1457f69ed body=49 status=ok
// SIG undefined FUN_1457f69ed(void)

void FUN_1457f69ed(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1457f6a1e FUN_1457f6a1e body=66 status=ok
// SIG undefined FUN_1457f6a1e(void)

void FUN_1457f6a1e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410ba828(puVar1);
  *puVar1 = &PTR_FUN_14a3d4a40;
  puVar1[6] = &PTR_FUN_14a3d4d20;
  *(undefined1 *)(puVar1 + 8) = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  return;
}



// FUNCTION 1457f6a60 FUN_1457f6a60 body=113 status=ok
// SIG undefined FUN_1457f6a60(void)

void FUN_1457f6a60(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[1])) {
    _Dst = (void *)((ulonglong)param_2 * 0x120 + *param_1);
    FUN_1457f6ad1(_Dst,1);
    iVar1 = (int)param_1[1];
    iVar2 = iVar1 - (param_2 + 1);
    if (iVar2 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x120),(longlong)iVar2 * 0x120);
      iVar1 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar1 + -1;
    FUN_1457f6afa(param_1);
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}



// FUNCTION 1457f6ad1 FUN_1457f6ad1 body=41 status=ok
// SIG undefined FUN_1457f6ad1(void)

void FUN_1457f6ad1(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1457f6b38(param_1);
    param_1 = param_1 + 0x120;
  }
  return;
}



// FUNCTION 1457f6afa FUN_1457f6afa body=62 status=ok
// SIG undefined FUN_1457f6afa(void)

void FUN_1457f6afa(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1457f6b88(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x120,8);
  }
  return;
}



// FUNCTION 1457f6b38 FUN_1457f6b38 body=80 status=ok
// SIG undefined FUN_1457f6b38(void)

void FUN_1457f6b38(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1457f6b88 FUN_1457f6b88 body=113 status=ok
// SIG undefined FUN_1457f6b88(void)

ulonglong FUN_1457f6b88(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x120) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x120,8);
      uVar1 = uVar1 / 0x120;
    }
  }
  return uVar1;
}



// FUNCTION 1457f6bfa FUN_1457f6bfa body=337 status=ok
// SIG undefined FUN_1457f6bfa(void)

undefined8 FUN_1457f6bfa(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != (longlong *)0x0) {
    lVar2 = FUN_1405e2bf2();
    if ((*(int *)(param_1[2] + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) {
      lVar2 = FUN_144a75eb4();
      if ((*(int *)(param_1[2] + 0x38) < *(int *)(lVar2 + 0x38)) ||
         (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        lVar2 = FUN_1449db7f2();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
            == lVar2 + 0x30)) goto LAB_1457f6c8e;
      }
      else if (param_1[0x86] != 0) {
        lVar2 = FUN_1449db7f2();
        param_1 = (longlong *)param_1[0x86];
        if (param_1 != (longlong *)0x0) {
          uVar3 = 0;
          if ((lVar2 == 0) || (lVar1 = param_1[2], lVar1 == 0)) goto LAB_1457f6cbe;
          if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
             (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
              lVar2 + 0x30)) goto LAB_1457f6c8e;
        }
      }
    }
    else {
      param_1 = (longlong *)(**(code **)(*param_1 + 0x2d0))(param_1);
      if (param_1 != (longlong *)0x0) {
LAB_1457f6c8e:
        local_20 = *param_2;
        if ((local_20 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        uVar3 = FUN_1457f6d4c(param_1 + 0x27,&local_20);
        goto LAB_1457f6cbe;
      }
    }
  }
  uVar3 = 0;
LAB_1457f6cbe:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1457f6d4c FUN_1457f6d4c body=76 status=ok
// SIG undefined FUN_1457f6d4c(void)

void FUN_1457f6d4c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14115fc2e();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1457f6d89;
    }
  }
  lVar2 = 0;
LAB_1457f6d89:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1457f6d98 FUN_1457f6d98 body=118 status=ok
// SIG undefined FUN_1457f6d98(void)

longlong * FUN_1457f6d98(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  if (param_2 != (longlong *)0x0) {
    if (param_3 == 1) {
      AcquireSRWLockShared((PSRWLOCK)(param_2 + 1));
    }
    LOCK();
    *(int *)(param_2 + 3) = (int)param_2[3] + 1;
    UNLOCK();
    if (*param_1 != 0) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x18);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((int)param_1[1] == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      }
    }
    *param_1 = (longlong)param_2;
    *(int *)(param_1 + 1) = param_3;
    param_1[2] = (longlong)param_4 * 2 + *param_2;
  }
  return param_1;
}



// FUNCTION 1457f6e0e FUN_1457f6e0e body=39 status=ok
// SIG undefined FUN_1457f6e0e(void)

void FUN_1457f6e0e(undefined8 param_1)

{
  FUN_14080c2b4();
  FUN_1415a4f06(param_1);
  FUN_14080c2b4();
  FUN_1410bdeec(param_1);
  return;
}



// FUNCTION 1457f6e36 FUN_1457f6e36 body=107 status=ok
// SIG undefined FUN_1457f6e36(void)

void FUN_1457f6e36(longlong *param_1,undefined2 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [38];
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1410be2c2(&local_22);
  local_22 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb61c80);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_22);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457f6ea2 FUN_1457f6ea2 body=161 status=ok
// SIG undefined FUN_1457f6ea2(void)

undefined8 FUN_1457f6ea2(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar3 = 0x28;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e03];
  }
  else {
    uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x28,8);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar2 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar4 = 0x7fffffff;
  if (0 < (int)(uVar3 / 0x28)) {
    uVar4 = uVar3 / 0x28 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar2 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x28,8);
  }
  return uVar2;
}



// FUNCTION 1457f6f44 FUN_1457f6f44 body=148 status=ok
// SIG undefined FUN_1457f6f44(void)

void FUN_1457f6f44(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1410befc0(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457f6fda FUN_1457f6fda body=129 status=ok
// SIG undefined FUN_1457f6fda(void)

void FUN_1457f6fda(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_1487d3a56(param_2);
  }
  local_20 = FUN_144a78c84();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_1457f705c(param_1,&local_20,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457f705c FUN_1457f705c body=206 status=ok
// SIG undefined FUN_1457f705c(void)

void FUN_1457f705c(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_144a78d6a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1457f70aa;
    }
  }
  lVar2 = 0;
LAB_1457f70aa:
  lVar1 = FUN_144a78d6a();
  local_30 = *param_2;
  if (lVar2 == lVar1) {
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1410bf076(param_1,&local_30,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457f7140 FUN_1457f7140 body=132 status=ok
// SIG undefined FUN_1457f7140(void)

void FUN_1457f7140(longlong param_1,int param_2)

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



// FUNCTION 1457f71c4 FUN_1457f71c4 body=56 status=ok
// SIG undefined FUN_1457f71c4(void)

void FUN_1457f71c4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410c05b0(puVar1,param_1);
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *puVar1 = &PTR_FUN_14b74bf60;
  *(undefined2 *)(puVar1 + 9) = 0;
  return;
}



// FUNCTION 1457f720a FUN_1457f720a body=40 status=ok
// SIG undefined FUN_1457f720a(void)

undefined8 FUN_1457f720a(undefined8 param_1,int param_2)

{
  FUN_1457f7232();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457f7232 FUN_1457f7232 body=57 status=ok
// SIG undefined FUN_1457f7232(void)

void FUN_1457f7232(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b240660;
  FUN_1457f726b(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1457f7294(param_1);
  return;
}



// FUNCTION 1457f726b FUN_1457f726b body=41 status=ok
// SIG undefined FUN_1457f726b(void)

void FUN_1457f726b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1457f72cc(param_1);
    param_1 = param_1 + 0xa8;
  }
  return;
}



// FUNCTION 1457f7294 FUN_1457f7294 body=56 status=ok
// SIG undefined FUN_1457f7294(void)

void FUN_1457f7294(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b240690;
  FUN_140b47c46(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1457f72cc FUN_1457f72cc body=82 status=ok
// SIG undefined FUN_1457f72cc(void)

void FUN_1457f72cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b240390;
  FUN_140b47c46(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b23dd30;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1457f731e FUN_1457f731e body=511 status=ok
// SIG undefined FUN_1457f731e(void)

void FUN_1457f731e(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  char local_a0;
  undefined7 uStack_9f;
  undefined2 *local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_a8 = &DAT_14c872ce8;
  FUN_14105aa76(DAT_14c872ce0,L"OnlineSubsystem",L"AdditionalModulesToLoad",&local_78);
  lVar1 = local_78;
  lVar6 = (longlong)(int)uStack_70;
  if (lVar6 != 0) {
    lVar5 = 0;
    do {
      uVar3 = FUN_144a52528();
      puVar4 = &DAT_149dfb77a;
      if (*(int *)(lVar1 + 8 + lVar5) != 0) {
        puVar4 = *(undefined2 **)(lVar1 + lVar5);
      }
      cVar2 = FUN_1457f751e(uVar3,puVar4,0);
      if (cVar2 != '\0') {
        uVar3 = FUN_144a52528();
        puVar4 = &DAT_149dfb77a;
        if (*(int *)(lVar1 + 8 + lVar5) != 0) {
          puVar4 = *(undefined2 **)(lVar1 + lVar5);
        }
        FUN_1446f470e(&local_80,puVar4,1);
        FUN_1402c9134(uVar3,local_80,&local_98,0);
      }
      lVar5 = lVar5 + 0x10;
    } while (lVar6 * 0x10 != lVar5);
  }
  FUN_1410c1ca2(param_1);
  local_98 = (undefined2 *)0x0;
  uStack_90 = 0;
  local_a8 = &DAT_14c872ce8;
  FUN_1449da20c(DAT_14c872ce0,L"OnlineSubsystem",L"NativePlatformService",&local_98);
  puVar4 = local_98;
  if ((int)uStack_90 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_a0,puVar4,1);
  *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_9f,local_a0);
  local_a0 = '\0';
  local_a8 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"OnlineSubsystem",L"bLoadNativeOSSBeforeDefault",&local_a0);
  if (local_a0 == '\0') {
    FUN_1410c1a72(param_1);
    FUN_1410c1b2e(param_1);
    FUN_140a68038(1);
  }
  else {
    FUN_140a68038(1);
    FUN_1410c1a72(param_1);
    FUN_1410c1b2e(param_1);
  }
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457f751e FUN_1457f751e body=194 status=ok
// SIG undefined FUN_1457f751e(void)

bool FUN_1457f751e(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1410c0c36(0,param_2,&local_28);
  iVar2 = (int)uStack_20;
  if ((int)uStack_20 == 0) {
    if (param_3 != (undefined8 *)0x0) {
      *(undefined4 *)(param_3 + 1) = 0;
      if (*(int *)((longlong)param_3 + 0xc) < 0) {
        FUN_1446f8c06(param_3,0);
      }
      if ((undefined2 *)*param_3 != (undefined2 *)0x0) {
        *(undefined2 *)*param_3 = 0;
      }
    }
  }
  else if (param_3 != (undefined8 *)0x0) {
    iVar1 = *(int *)(local_28 + 0x10) + -1;
    if (*(int *)(local_28 + 0x10) == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(param_3,*(undefined8 *)(local_28 + 8),iVar1);
  }
  FUN_1410c0c05(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457f75e2 FUN_1457f75e2 body=72 status=ok
// SIG undefined FUN_1457f75e2(void)

void FUN_1457f75e2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar1 = param_1;
  }
  FUN_1410c17b8(lVar1,*(undefined4 *)(param_1 + 0x208));
  *(undefined4 *)(param_1 + 0x208) = 0;
  if (*(int *)(param_1 + 0x20c) != 0) {
    FUN_1457f762a(param_1);
    return;
  }
  return;
}



// FUNCTION 1457f762a FUN_1457f762a body=90 status=ok
// SIG undefined FUN_1457f762a(void)

void FUN_1457f762a(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x20c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
    if (*(void **)((longlong)param_1 + 0x200) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x200),
              (longlong)*(int *)((longlong)param_1 + 0x208) << 5);
      FUN_1446efa72((longlong)param_1 + 0x200,0,0,0x20);
      return;
    }
  }
  return;
}



// FUNCTION 1457f7684 FUN_1457f7684 body=12 status=ok
// SIG undefined FUN_1457f7684(void)

void FUN_1457f7684(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001457f768d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1457f7690 FUN_1457f7690 body=31 status=ok
// SIG undefined FUN_1457f7690(void)

undefined8 FUN_1457f7690(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457f76b0 FUN_1457f76b0 body=48 status=ok
// SIG undefined FUN_1457f76b0(void)

void FUN_1457f76b0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 1457f76e0 FUN_1457f76e0 body=102 status=ok
// SIG undefined FUN_1457f76e0(void)

undefined8 FUN_1457f76e0(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x98,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xd79435e50d79435f),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x98)) {
    uVar4 = uVar2 / 0x98 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x98,8);
  }
  return uVar3;
}



// FUNCTION 1457f7746 FUN_1457f7746 body=355 status=ok
// SIG undefined FUN_1457f7746(void)

void FUN_1457f7746(longlong param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_a8 [39];
  undefined1 local_81;
  longlong *local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1410c2540();
  if (*(longlong *)(param_1 + 0x288) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x288) + 0x1f8;
    FUN_1457f78aa(lVar6);
    plVar1 = (longlong *)(param_1 + 0xd8);
    puVar2 = (undefined1 *)(param_1 + 0xe8);
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    iVar5 = 0;
    local_50 = puVar2;
    if (*(int *)(param_1 + 0x100) != 0) {
      FUN_1449c0562(&local_58);
      iVar5 = *(int *)(param_1 + 0x100);
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
    if ((local_68._4_4_ != iVar5) || (local_68 = uVar3, local_50 != puVar2)) {
      do {
        do {
          local_68 = uVar3;
          local_58 = (longlong)iVar4 * 0x18 + *local_80;
          local_50 = &local_81;
          local_81 = 0;
          FUN_1460276f6(lVar6,local_34,&local_58,0);
          local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
          FUN_1449c0562(&local_78);
          iVar4 = local_68._4_4_;
          uVar3 = local_68;
        } while (local_68._4_4_ != iVar5);
      } while ((local_70 != puVar2) || (local_80 != plVar1));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457f78aa FUN_1457f78aa body=68 status=ok
// SIG undefined FUN_1457f78aa(void)

void FUN_1457f78aa(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_146eff046();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1401ad22e(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1457f78ee FUN_1457f78ee body=125 status=ok
// SIG undefined FUN_1457f78ee(void)

void FUN_1457f78ee(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (lVar1 != 0) {
    lVar1 = FUN_1400f6f32(lVar1);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x68) != 0)) {
      lVar1 = FUN_140bccd38(*(longlong *)(lVar1 + 0x68),param_2 + 0x18);
      if (lVar1 != 0) {
        lVar2 = FUN_14030d4a0();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          FUN_1457f796c(lVar1,param_4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1457f796c FUN_1457f796c body=7496 status=ok
// SIG undefined FUN_1457f796c(void)

void FUN_1457f796c(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_4b8 [32];
  undefined8 local_498;
  undefined4 local_490;
  undefined8 local_488;
  undefined4 local_480;
  undefined8 local_478;
  undefined4 local_470;
  undefined8 local_468;
  undefined4 local_460;
  undefined8 local_458;
  undefined4 local_450;
  undefined8 local_448;
  undefined4 local_440;
  undefined8 local_438;
  undefined4 local_430;
  undefined8 local_428;
  undefined4 local_420;
  undefined8 local_418;
  undefined4 local_410;
  undefined8 local_408;
  undefined4 local_400;
  undefined8 local_3f8;
  undefined4 local_3f0;
  longlong local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined8 local_3c8;
  undefined4 local_3c0;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined8 local_398;
  undefined4 local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined8 local_378;
  undefined4 local_370;
  undefined8 local_368;
  undefined4 local_360;
  undefined8 local_358;
  undefined4 local_350;
  undefined8 local_348;
  undefined4 local_340;
  undefined8 local_338;
  undefined4 local_330;
  undefined8 local_328;
  undefined4 local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined8 local_308;
  undefined4 local_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [24];
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_4b8;
  local_88 = DAT_14cbcf0b8;
  local_80 = DAT_14cbcf0c0;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,*(undefined1 *)(param_1 + 0x361));
  *(undefined1 *)(param_1 + 0x361) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_98 = DAT_14cbcf0c4;
  local_90 = DAT_14cbcf0cc;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,*(undefined1 *)(param_1 + 0x362));
  *(undefined1 *)(param_1 + 0x362) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_a8 = DAT_14cbcf0d0;
  local_a0 = DAT_14cbcf0d8;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,*(undefined1 *)(param_1 + 0x363));
  *(undefined1 *)(param_1 + 0x363) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_b8 = DAT_14cbcf0dc;
  local_b0 = DAT_14cbcf0e4;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,*(undefined1 *)(param_1 + 0x364));
  *(undefined1 *)(param_1 + 0x364) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_c8 = DAT_14cbcf130;
  local_c0 = DAT_14cbcf138;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,*(undefined1 *)(param_1 + 0x371));
  *(undefined1 *)(param_1 + 0x371) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_d8 = DAT_14cbcf340;
  local_d0 = DAT_14cbcf348;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,*(undefined1 *)(param_1 + 0x3df));
  *(undefined1 *)(param_1 + 0x3df) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_e8 = DAT_14cbcf13c;
  local_e0 = DAT_14cbcf144;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  fVar6 = (float)FUN_140b963dc(uVar3);
  *(float *)(param_1 + 0x374) = fVar6;
  if (local_60 != 0) {
    FUN_1400020a8();
    fVar6 = *(float *)(param_1 + 0x374);
  }
  if ((fVar6 == 0.0) && (!NAN(fVar6))) {
    *(undefined4 *)(param_1 + 0x374) = 0x3f800000;
  }
  local_f8 = DAT_14cbcf148;
  local_f0 = DAT_14cbcf150;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  fVar6 = (float)FUN_140b963dc(uVar3);
  *(float *)(param_1 + 0x378) = fVar6;
  if (local_60 != 0) {
    FUN_1400020a8();
    fVar6 = *(float *)(param_1 + 0x378);
  }
  if ((fVar6 == 0.0) && (!NAN(fVar6))) {
    *(undefined4 *)(param_1 + 0x378) = 0x3f800000;
  }
  local_108 = DAT_14cbcf154;
  local_100 = DAT_14cbcf15c;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  fVar6 = (float)FUN_140b963dc(uVar3);
  *(float *)(param_1 + 0x37c) = fVar6;
  if (local_60 != 0) {
    FUN_1400020a8();
    fVar6 = *(float *)(param_1 + 0x37c);
  }
  if ((fVar6 == 0.0) && (!NAN(fVar6))) {
    *(undefined4 *)(param_1 + 0x37c) = 0x3f800000;
  }
  local_118 = DAT_14cbcf160;
  local_110 = DAT_14cbcf168;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  fVar6 = (float)FUN_140b963dc(uVar3);
  *(float *)(param_1 + 0x380) = fVar6;
  if (local_60 != 0) {
    FUN_1400020a8();
    fVar6 = *(float *)(param_1 + 0x380);
  }
  if ((fVar6 == 0.0) && (!NAN(fVar6))) {
    *(undefined4 *)(param_1 + 0x380) = 0x3f800000;
  }
  local_128 = DAT_14cbcf16c;
  local_120 = DAT_14cbcf174;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  fVar6 = (float)FUN_140b963dc(uVar3);
  *(float *)(param_1 + 900) = fVar6;
  if (local_60 != 0) {
    FUN_1400020a8();
    fVar6 = *(float *)(param_1 + 900);
  }
  if ((fVar6 == 0.0) && (!NAN(fVar6))) {
    *(undefined4 *)(param_1 + 900) = 0x3f800000;
  }
  local_138 = DAT_14cbcf178;
  local_130 = DAT_14cbcf180;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  fVar6 = (float)FUN_140b963dc(uVar3);
  *(float *)(param_1 + 0x388) = fVar6;
  if (local_60 != 0) {
    FUN_1400020a8();
    fVar6 = *(float *)(param_1 + 0x388);
  }
  if ((fVar6 == 0.0) && (!NAN(fVar6))) {
    *(undefined4 *)(param_1 + 0x388) = 0x3f800000;
  }
  local_148 = DAT_14cbcf184;
  local_140 = DAT_14cbcf18c;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  fVar6 = (float)FUN_140b963dc(uVar3);
  *(float *)(param_1 + 0x38c) = fVar6;
  if (local_60 != 0) {
    FUN_1400020a8();
    fVar6 = *(float *)(param_1 + 0x38c);
  }
  if ((fVar6 == 0.0) && (!NAN(fVar6))) {
    *(undefined4 *)(param_1 + 0x38c) = 0x3f800000;
  }
  local_158 = DAT_14cbcf190;
  local_150 = DAT_14cbcf198;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  fVar6 = (float)FUN_140b963dc(uVar3);
  *(float *)(param_1 + 0x390) = fVar6;
  if (local_60 != 0) {
    FUN_1400020a8();
    fVar6 = *(float *)(param_1 + 0x390);
  }
  if ((fVar6 == 0.0) && (!NAN(fVar6))) {
    *(undefined4 *)(param_1 + 0x390) = 0x3f800000;
  }
  local_168 = DAT_14cbcf19c;
  local_160 = DAT_14cbcf1a4;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  fVar6 = (float)FUN_140b963dc(uVar3);
  *(float *)(param_1 + 0x394) = fVar6;
  if (local_60 != 0) {
    FUN_1400020a8();
    fVar6 = *(float *)(param_1 + 0x394);
  }
  if ((fVar6 == 0.0) && (!NAN(fVar6))) {
    *(undefined4 *)(param_1 + 0x394) = 0x3f800000;
  }
  local_178 = DAT_14cbcf1a8;
  local_170 = DAT_14cbcf1b0;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  fVar6 = (float)FUN_140b963dc(uVar3);
  *(float *)(param_1 + 0x398) = fVar6;
  if (local_60 != 0) {
    FUN_1400020a8();
    fVar6 = *(float *)(param_1 + 0x398);
  }
  if ((fVar6 == 0.0) && (!NAN(fVar6))) {
    *(undefined4 *)(param_1 + 0x398) = 0x3f800000;
  }
  local_188 = DAT_14cbcf1b4;
  local_180 = DAT_14cbcf1bc;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410451c0(uVar3,*(undefined1 *)(param_1 + 0x39c));
  *(undefined1 *)(param_1 + 0x39c) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_198 = DAT_14cbcf1c0;
  local_190 = DAT_14cbcf1c8;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  fVar6 = (float)FUN_140b963dc(uVar3);
  *(float *)(param_1 + 0x3a0) = fVar6;
  if (local_60 != 0) {
    FUN_1400020a8();
    fVar6 = *(float *)(param_1 + 0x3a0);
  }
  if ((fVar6 == 0.0) && (!NAN(fVar6))) {
    *(undefined4 *)(param_1 + 0x3a0) = 0x3f800000;
  }
  local_1a8 = DAT_14cbcf1cc;
  local_1a0 = DAT_14cbcf1d4;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  fVar6 = (float)FUN_140b963dc(uVar3);
  *(float *)(param_1 + 0x3a4) = fVar6;
  if (local_60 != 0) {
    FUN_1400020a8();
    fVar6 = *(float *)(param_1 + 0x3a4);
  }
  if ((fVar6 == 0.0) && (!NAN(fVar6))) {
    *(undefined4 *)(param_1 + 0x3a4) = 0x3f800000;
  }
  local_1b8 = DAT_14cbcf1d8;
  local_1b0 = DAT_14cbcf1e0;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  fVar6 = (float)FUN_140b963dc(uVar3);
  *(float *)(param_1 + 0x3a8) = fVar6;
  if (local_60 != 0) {
    FUN_1400020a8();
    fVar6 = *(float *)(param_1 + 0x3a8);
  }
  if ((fVar6 == 0.0) && (!NAN(fVar6))) {
    *(undefined4 *)(param_1 + 0x3a8) = 0x3f800000;
  }
  local_1c8 = DAT_14cbcf1e4;
  local_1c0 = DAT_14cbcf1ec;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  fVar6 = (float)FUN_140b963dc(uVar3);
  *(float *)(param_1 + 0x3ac) = fVar6;
  if (local_60 != 0) {
    FUN_1400020a8();
    fVar6 = *(float *)(param_1 + 0x3ac);
  }
  if ((fVar6 == 0.0) && (!NAN(fVar6))) {
    *(undefined4 *)(param_1 + 0x3ac) = 0x3f800000;
  }
  local_1d8 = DAT_14cbcf1f0;
  local_1d0 = DAT_14cbcf1f8;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410451c0(uVar3,*(undefined1 *)(param_1 + 0x3b0));
  *(undefined1 *)(param_1 + 0x3b0) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_1e8 = DAT_14cbcf0e8;
  local_1e0 = DAT_14cbcf0f0;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,1);
  *(undefined1 *)(param_1 + 0x365) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_1f8 = DAT_14cbcf0f4;
  local_1f0 = DAT_14cbcf0fc;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,0);
  *(undefined1 *)(param_1 + 0x366) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_208 = DAT_14cbcf100;
  local_200 = DAT_14cbcf108;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,1);
  *(undefined1 *)(param_1 + 0x367) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_218 = DAT_14cbcf10c;
  local_210 = DAT_14cbcf114;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,0);
  *(undefined1 *)(param_1 + 0x368) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_228 = DAT_14cbcf118;
  local_220 = DAT_14cbcf120;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar7 = FUN_140b963dc(uVar3,0x3f800000);
  *(undefined4 *)(param_1 + 0x36c) = uVar7;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_238 = DAT_14cbcf124;
  local_230 = DAT_14cbcf12c;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,0);
  *(undefined1 *)(param_1 + 0x370) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_248 = DAT_14cbcf1fc;
  local_240 = DAT_14cbcf204;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,0);
  *(undefined1 *)(param_1 + 0x3b1) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_258 = DAT_14cbcf208;
  local_250 = DAT_14cbcf210;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,0);
  *(undefined1 *)(param_1 + 0x3b2) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_268 = DAT_14cbcf214;
  local_260 = DAT_14cbcf21c;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,0);
  *(undefined1 *)(param_1 + 0x3b3) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_278 = DAT_14cbcf220;
  local_270 = DAT_14cbcf228;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,0);
  *(undefined1 *)(param_1 + 0x3b4) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_288 = DAT_14cbcf22c;
  local_280 = DAT_14cbcf234;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,0);
  *(undefined1 *)(param_1 + 0x3b5) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_298 = DAT_14cbcf238;
  local_290 = DAT_14cbcf240;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,0);
  *(undefined1 *)(param_1 + 0x3b6) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_2a8 = DAT_14cbcf244;
  local_2a0 = DAT_14cbcf24c;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,0);
  *(undefined1 *)(param_1 + 0x3b7) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_2b8 = DAT_14cbcf250;
  local_2b0 = DAT_14cbcf258;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,0);
  *(undefined1 *)(param_1 + 0x3b8) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_2c8 = DAT_14cbcf25c;
  local_2c0 = DAT_14cbcf264;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar7 = FUN_140b963dc(uVar3,0x3e800000);
  *(undefined4 *)(param_1 + 0x3bc) = uVar7;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_2d8 = DAT_14cbcf268;
  local_2d0 = DAT_14cbcf270;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar7 = FUN_140b963dc(uVar3,0x3dcccccd);
  *(undefined4 *)(param_1 + 0x3c0) = uVar7;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_2e8 = DAT_14cbcf274;
  local_2e0 = DAT_14cbcf27c;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar7 = FUN_140b963dc(uVar3,0x40f00000);
  *(undefined4 *)(param_1 + 0x3c4) = uVar7;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_2f8 = DAT_14cbcf280;
  local_2f0 = DAT_14cbcf288;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar7 = FUN_140b963dc(uVar3,0x41700000);
  *(undefined4 *)(param_1 + 0x3c8) = uVar7;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_308 = DAT_14cbcf28c;
  local_300 = DAT_14cbcf294;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar7 = FUN_140b963dc(uVar3,0x3e800000);
  *(undefined4 *)(param_1 + 0x3cc) = uVar7;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_318 = DAT_14cbcf298;
  local_310 = DAT_14cbcf2a0;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar7 = FUN_140b963dc(uVar3,0x3dcccccd);
  *(undefined4 *)(param_1 + 0x3d0) = uVar7;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_328 = DAT_14cbcf2a4;
  local_320 = DAT_14cbcf2ac;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar7 = FUN_140b963dc(uVar3,0x40f00000);
  *(undefined4 *)(param_1 + 0x3d4) = uVar7;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_338 = DAT_14cbcf2b0;
  local_330 = DAT_14cbcf2b8;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar7 = FUN_140b963dc(uVar3,0x41700000);
  *(undefined4 *)(param_1 + 0x3d8) = uVar7;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_348 = DAT_14cbcf2bc;
  local_340 = DAT_14cbcf2c4;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,0);
  *(undefined1 *)(param_1 + 0x3dc) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_358 = DAT_14cbcf2c8;
  local_350 = DAT_14cbcf2d0;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,1);
  *(undefined1 *)(param_1 + 0x3dd) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_368 = DAT_14cbcf2f8;
  local_360 = DAT_14cbcf300;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar7 = FUN_140b963dc(uVar3,0x3f800000);
  *(undefined4 *)(param_1 + 0x3e0) = uVar7;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_378 = DAT_14cbcf304;
  local_370 = DAT_14cbcf30c;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,1);
  *(undefined1 *)(param_1 + 0x3e4) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_388 = DAT_14cbcf34c;
  local_380 = DAT_14cbcf354;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,1);
  *(undefined1 *)(param_1 + 0x2d2) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_398 = DAT_14cbcf358;
  local_390 = DAT_14cbcf360;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar7 = FUN_140b963dc(uVar3,0x3f800000);
  *(undefined4 *)(param_1 + 0x2d4) = uVar7;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_3a8 = DAT_14cbcf364;
  local_3a0 = DAT_14cbcf36c;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,1);
  *(undefined1 *)(param_1 + 0x2d8) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_3b8 = DAT_14cbcf370;
  local_3b0 = DAT_14cbcf378;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,1);
  *(undefined1 *)(param_1 + 0x2d9) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_3c8 = DAT_14cbcf394;
  local_3c0 = DAT_14cbcf39c;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,1);
  *(undefined1 *)(param_1 + 0x3e5) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_3d8 = DAT_14cbcf3a0;
  local_3d0 = DAT_14cbcf3a8;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,0);
  *(undefined1 *)(param_1 + 0x3e6) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_3f8 = DAT_14cbcf310;
  local_3f0 = DAT_14cbcf318;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar3 = FUN_144a7cdd6(uVar3,0);
  FUN_1400b22c2(&local_3e8,uVar3);
  if ((longlong *)(param_1 + 0x460) == &local_3e8) {
    if (local_3e8 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x460) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x460) = local_3e8;
    local_3e8 = 0;
    *(undefined4 *)(param_1 + 0x468) = (undefined4)local_3e0;
    *(undefined4 *)(param_1 + 0x46c) = local_3e0._4_4_;
    local_3e0 = 0;
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_408 = DAT_14cbcf31c;
  local_400 = DAT_14cbcf324;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,0);
  *(undefined1 *)(param_1 + 0x45a) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_418 = DAT_14cbcf328;
  local_410 = DAT_14cbcf330;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar3 = FUN_144a7cdd6(uVar3,0);
  FUN_1400b22c2(&local_3e8,uVar3);
  if ((longlong *)(param_1 + 0x470) == &local_3e8) {
    if (local_3e8 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x470) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x470) = local_3e8;
    local_3e8 = 0;
    *(undefined4 *)(param_1 + 0x478) = (undefined4)local_3e0;
    *(undefined4 *)(param_1 + 0x47c) = local_3e0._4_4_;
    local_3e0 = 0;
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_428 = DAT_14cbcf334;
  local_420 = DAT_14cbcf33c;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,0);
  *(undefined1 *)(param_1 + 0x45b) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_438 = DAT_14cbcf2d4;
  local_430 = DAT_14cbcf2dc;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar7 = FUN_140e1edd4(uVar3,*(undefined4 *)(param_1 + 1000));
  *(undefined4 *)(param_1 + 1000) = uVar7;
  FUN_1447f69b6(param_1 + 0x400);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_448 = DAT_14cbcf37c;
  local_440 = DAT_14cbcf384;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar7 = FUN_140e1edd4(uVar3,*(undefined4 *)(param_1 + 0x3ec));
  *(undefined4 *)(param_1 + 0x3ec) = uVar7;
  FUN_1447f69b6(param_1 + 0x418);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_458 = DAT_14cbcf388;
  local_450 = DAT_14cbcf390;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  iVar2 = FUN_140e1edd4(uVar3,*(undefined4 *)(param_1 + 0x3f0));
  if (*(int *)(param_1 + 0x3f0) != iVar2) {
    *(int *)(param_1 + 0x3f0) = iVar2;
    FUN_1447f69b6(param_1 + 0x418);
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_468 = DAT_14cbcf3ac;
  local_460 = DAT_14cbcf3b4;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,1);
  *(undefined1 *)(param_1 + 0x458) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_478 = DAT_14cbcf3b8;
  local_470 = DAT_14cbcf3c0;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar1 = FUN_1410c4486(uVar3,1);
  *(undefined1 *)(param_1 + 0x459) = uVar1;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)FUN_141283af6();
  lVar5 = plVar4[0x22];
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 1000))(plVar4);
    lVar5 = plVar4[0x22];
    if (lVar5 == 0) {
      plVar4 = (longlong *)FUN_14030d4a0();
      lVar5 = plVar4[0x22];
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 1000))(plVar4);
        lVar5 = plVar4[0x22];
        if (lVar5 == 0) {
          uVar7 = 0x42b40000;
          uVar8 = 0x42b40000;
          goto LAB_1457f90db;
        }
      }
      uVar7 = *(undefined4 *)(lVar5 + 0x3f4);
      uVar8 = *(undefined4 *)(lVar5 + 0x3f8);
      goto LAB_1457f90db;
    }
  }
  uVar8 = FUN_145876328(lVar5);
  uVar7 = FUN_145876328(lVar5);
LAB_1457f90db:
  local_488 = DAT_14cbcf2ec;
  local_480 = DAT_14cbcf2f4;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar8 = FUN_140b963dc(uVar3,uVar8);
  *(undefined4 *)(param_1 + 0x3f8) = uVar8;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_498 = DAT_14cbcf2e0;
  local_490 = DAT_14cbcf2e8;
  FUN_1448075d0(local_78);
  uVar3 = FUN_144a06846(param_2,local_78);
  uVar7 = FUN_140b963dc(uVar3,uVar7);
  *(undefined4 *)(param_1 + 0x3f4) = uVar7;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  FUN_1457f96b6(param_1);
  lVar5 = FUN_1410c4496(param_1);
  if (lVar5 != 0) {
    FUN_1410c45ce(lVar5,param_2);
  }
  if ((0.5 < *(float *)(param_1 + 0x3c0)) || (0.5 < *(float *)(param_1 + 0x3d0))) {
    *(undefined4 *)(param_1 + 0x3bc) = 0x3e800000;
    *(undefined4 *)(param_1 + 0x3c0) = 0x3dcccccd;
    *(undefined4 *)(param_1 + 0x3c4) = 0x40f00000;
    *(undefined4 *)(param_1 + 0x3c8) = 0x41700000;
    *(undefined4 *)(param_1 + 0x3cc) = 0x3e800000;
    *(undefined4 *)(param_1 + 0x3d0) = 0x3dcccccd;
    *(undefined4 *)(param_1 + 0x3d4) = 0x40f00000;
    *(undefined4 *)(param_1 + 0x3d8) = 0x41700000;
  }
  if ((local_50 ^ (ulonglong)auStack_4b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457f96b6 FUN_1457f96b6 body=58 status=ok
// SIG undefined FUN_1457f96b6(void)

void FUN_1457f96b6(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    cVar1 = FUN_141107632();
    if (cVar1 != '\0') {
      lVar2 = FUN_14034eff0(*(undefined8 *)(param_1 + 0x30));
      if (lVar2 != 0) {
        *(undefined1 *)(lVar2 + 0x408) = *(undefined1 *)(param_1 + 0x371);
      }
    }
  }
  return;
}



// FUNCTION 1457f96f0 FUN_1457f96f0 body=7 status=ok
// SIG undefined FUN_1457f96f0(void)

void FUN_1457f96f0(undefined8 param_1)

{
  FUN_1447cd2ec(param_1,0);
  return;
}



// FUNCTION 1457f96f8 FUN_1457f96f8 body=7 status=ok
// SIG undefined FUN_1457f96f8(void)

void FUN_1457f96f8(undefined8 param_1)

{
  FUN_1447cd2ec(param_1,0);
  return;
}



// FUNCTION 1457f9700 FUN_1457f9700 body=12 status=ok
// SIG undefined FUN_1457f9700(void)

void FUN_1457f9700(longlong param_1)

{
  FUN_14479d2ce(param_1 + 200);
  return;
}



// FUNCTION 1457f970c FUN_1457f970c body=238 status=ok
// SIG undefined FUN_1457f970c(void)

undefined8
FUN_1457f970c(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_d8,param_2);
  local_b0 = param_5;
  local_b8 = param_6;
  local_a8 = param_7;
  local_a0 = param_8;
  local_d0 = param_1;
  local_c8 = param_3;
  local_c0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457f97fc FUN_1457f97fc body=381 status=ok
// SIG undefined FUN_1457f97fc(void)

undefined4 *
FUN_1457f97fc(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457f9a9a(param_1,local_40);
  plVar1 = (longlong *)param_3[1];
  uVar8 = *(undefined8 *)*param_3;
  *local_38 = uVar8;
  lVar6 = *plVar1;
  local_38[1] = lVar6;
  if ((lVar6 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
    uVar8 = *local_38;
  }
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar7 = (uint)((ulonglong)uVar8 >> 0x10);
  uVar4 = (uint)uVar8 & 0xffff;
  uVar7 = ((uint)uVar8 << 0x10 | uVar4) + (int)((ulonglong)uVar8 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = param_4;
  cVar2 = FUN_1457f997a(param_1,uVar7,local_38);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_38 + 0x14) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1457f9b82(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457f997a FUN_1457f997a body=149 status=ok
// SIG undefined FUN_1457f997a(void)

void FUN_1457f997a(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_1457f9a10((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_1457f99ee;
    }
  }
  uVar5 = 0;
LAB_1457f99ee:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 1457f9a10 FUN_1457f9a10 body=138 status=ok
// SIG undefined FUN_1457f9a10(void)

void FUN_1457f9a10(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1457f9a9a FUN_1457f9a9a body=231 status=ok
// SIG undefined FUN_1457f9a9a(void)

int * FUN_1457f9a9a(longlong *param_1,int *param_2)

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



// FUNCTION 1457f9b82 FUN_1457f9b82 body=482 status=ok
// SIG undefined FUN_1457f9b82(void)

void FUN_1457f9b82(longlong *param_1)

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



// FUNCTION 1457f9d66 FUN_1457f9d66 body=5 status=ok
// SIG undefined FUN_1457f9d66(void)

longlong FUN_1457f9d66(longlong param_1)

{
  return param_1 + 0x68;
}



// FUNCTION 1457f9d72 FUN_1457f9d72 body=57 status=ok
// SIG undefined FUN_1457f9d72(void)

void FUN_1457f9d72(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60da0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60da0 = FUN_140002ddd(FUN_1464f01c8,uVar1,L"GbxMomentNodeState_Random");
  }
  return;
}



// FUNCTION 1457f9dba FUN_1457f9dba body=40 status=ok
// SIG undefined FUN_1457f9dba(void)

undefined8 FUN_1457f9dba(undefined8 param_1,int param_2)

{
  FUN_140753ab6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457f9df0 FUN_1457f9df0 body=40 status=ok
// SIG undefined FUN_1457f9df0(void)

undefined8 FUN_1457f9df0(undefined8 param_1,int param_2)

{
  FUN_14075380c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457f9e18 FUN_1457f9e18 body=40 status=ok
// SIG undefined FUN_1457f9e18(void)

undefined8 FUN_1457f9e18(undefined8 param_1,int param_2)

{
  FUN_1457f9e40();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457f9e40 FUN_1457f9e40 body=62 status=ok
// SIG undefined FUN_1457f9e40(void)

void FUN_1457f9e40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0a9be0;
  FUN_1410c76fc(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1457f9e8a FUN_1457f9e8a body=46 status=ok
// SIG undefined FUN_1457f9e8a(void)

undefined8 * FUN_1457f9e8a(undefined8 *param_1)

{
  FUN_1406078d6();
  *param_1 = &PTR_FUN_14b215430;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 3;
  return param_1;
}



// FUNCTION 1457f9eb8 FUN_1457f9eb8 body=93 status=ok
// SIG undefined FUN_1457f9eb8(void)

void FUN_1457f9eb8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  FUN_1410c7f42();
  iVar1 = FUN_14487fd02(param_1);
  if (iVar1 != 3) {
    (**(code **)(*param_1 + 0x578))(param_1);
  }
  iVar1 = FUN_14487fd02(param_1);
  if (iVar1 != 1) {
    lVar2 = FUN_1410b7fb6(param_1);
    *(uint *)(param_1 + 0x73) = *(uint *)(param_1 + 0x73) & 0xffffffbf | (uint)(lVar2 != 0) << 6;
  }
  return;
}



// FUNCTION 1457f9f16 FUN_1457f9f16 body=8 status=ok
// SIG undefined FUN_1457f9f16(void)

undefined8 FUN_1457f9f16(void)

{
  return DAT_14cb92e20;
}



// FUNCTION 1457f9f1e FUN_1457f9f1e body=147 status=ok
// SIG undefined FUN_1457f9f1e(void)

void FUN_1457f9f1e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
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



// FUNCTION 1457f9fb2 FUN_1457f9fb2 body=141 status=ok
// SIG undefined FUN_1457f9fb2(void)

void FUN_1457f9fb2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  code *local_40;
  longlong *local_38;
  code **local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_148a081fe(param_2);
  }
  local_38 = &local_48;
  local_30 = &local_40;
  local_40 = FUN_143ebe778;
  local_20 = &local_30;
  local_28 = FUN_1410c88a4;
  local_48 = param_2;
  FUN_1410c84fe(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457fa040 FUN_1457fa040 body=40 status=ok
// SIG undefined FUN_1457fa040(void)

undefined8 FUN_1457fa040(undefined8 param_1,int param_2)

{
  FUN_1457fa068();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457fa068 FUN_1457fa068 body=132 status=ok
// SIG undefined FUN_1457fa068(void)

void FUN_1457fa068(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7902f0;
  param_1[5] = &PTR_FUN_14a790590;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1457fa0ec(param_1 + 0xb);
  FUN_1410c966c(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1457fa0ec FUN_1457fa0ec body=53 status=ok
// SIG undefined FUN_1457fa0ec(void)

void FUN_1457fa0ec(longlong *param_1)

{
  FUN_1457fa122();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457fa122 FUN_1457fa122 body=90 status=ok
// SIG undefined FUN_1457fa122(void)

void FUN_1457fa122(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14059f004(param_1,0);
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



// FUNCTION 1457fa17c FUN_1457fa17c body=14 status=ok
// SIG undefined FUN_1457fa17c(void)

void FUN_1457fa17c(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  return;
}



// FUNCTION 1457fa18a FUN_1457fa18a body=225 status=ok
// SIG undefined FUN_1457fa18a(void)

void FUN_1457fa18a(longlong param_1,int param_2,char param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 uVar5;
  undefined1 auStack_38 [44];
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar4 = (longlong)param_2 * 0x28 + *(longlong *)(param_1 + 0x68);
  local_c = param_2;
  if (param_3 != '\x01') {
    if ((*(byte *)(lVar4 + 0x24) & 1) != 0) {
      FUN_1476b8b78(param_1 + 0xa0,&local_c,param_4);
      goto LAB_1457fa1f4;
    }
    *(undefined8 *)(lVar4 + 0x14) = *(undefined8 *)(param_4 + 4);
    uVar1 = param_4[1];
    uVar2 = param_4[2];
    uVar3 = param_4[3];
    *(undefined4 *)(lVar4 + 4) = *param_4;
    *(undefined4 *)(lVar4 + 8) = uVar1;
    *(undefined4 *)(lVar4 + 0xc) = uVar2;
    *(undefined4 *)(lVar4 + 0x10) = uVar3;
    if ((undefined4 *)(lVar4 + 4) != param_4) {
      if (*(char *)(param_4 + 7) == '\x01') {
        *(undefined4 *)(lVar4 + 0x1c) = param_4[6];
        uVar5 = 1;
      }
      else {
        if (*(char *)(lVar4 + 0x20) != '\x01') goto LAB_1457fa1ee;
        uVar5 = 0;
      }
      *(undefined1 *)(lVar4 + 0x20) = uVar5;
    }
LAB_1457fa1ee:
    *(byte *)(lVar4 + 0x24) = *(byte *)(lVar4 + 0x24) | 1;
    goto LAB_1457fa1f4;
  }
  *(undefined8 *)(lVar4 + 0x14) = *(undefined8 *)(param_4 + 4);
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(lVar4 + 4) = *param_4;
  *(undefined4 *)(lVar4 + 8) = uVar1;
  *(undefined4 *)(lVar4 + 0xc) = uVar2;
  *(undefined4 *)(lVar4 + 0x10) = uVar3;
  if ((undefined4 *)(lVar4 + 4) != param_4) {
    if (*(char *)(param_4 + 7) == '\x01') {
      *(undefined4 *)(lVar4 + 0x1c) = param_4[6];
      uVar5 = 1;
    }
    else {
      if (*(char *)(lVar4 + 0x20) != '\x01') goto LAB_1457fa23c;
      uVar5 = 0;
    }
    *(undefined1 *)(lVar4 + 0x20) = uVar5;
  }
LAB_1457fa23c:
  *(byte *)(lVar4 + 0x24) = *(byte *)(lVar4 + 0x24) | 3;
LAB_1457fa1f4:
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457fa26c FUN_1457fa26c body=229 status=ok
// SIG undefined FUN_1457fa26c(void)

int * FUN_1457fa26c(longlong *param_1,int *param_2)

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
      FUN_14055df60(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1457fa352 FUN_1457fa352 body=282 status=ok
// SIG undefined FUN_1457fa352(void)

undefined4 * FUN_1457fa352(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  byte *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457fa4f0(param_1,local_48);
  puVar2 = (undefined4 *)param_3[1];
  bVar1 = *(byte *)*param_3;
  *local_40 = bVar1;
  *(undefined4 *)(local_40 + 4) = *puVar2;
  local_40[8] = 0xff;
  local_40[9] = 0xff;
  local_40[10] = 0xff;
  local_40[0xb] = 0xff;
  local_4c = local_48[0];
  cVar4 = FUN_1457fa46e(param_1,bVar1,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & (uint)bVar1;
      *(uint *)(local_40 + 0xc) = uVar6;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 8) =
           *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar6) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar6) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1457fa8f0(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457fa46e FUN_1457fa46e body=130 status=ok
// SIG undefined FUN_1457fa46e(void)

undefined8 FUN_1457fa46e(longlong *param_1,uint param_2,char *param_3,int *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(char *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_146201266(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1457fa4f0 FUN_1457fa4f0 body=228 status=ok
// SIG undefined FUN_1457fa4f0(void)

int * FUN_1457fa4f0(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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



// FUNCTION 1457fa5d4 FUN_1457fa5d4 body=162 status=ok
// SIG undefined FUN_1457fa5d4(void)

void FUN_1457fa5d4(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1457fa613;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1457fa613;
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
LAB_1457fa613:
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
                    /* WARNING: Could not recover jumptable at 0x0001457fa672. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1457fa676 FUN_1457fa676 body=188 status=ok
// SIG undefined FUN_1457fa676(void)

void FUN_1457fa676(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_1c = param_2;
  FUN_140dd6482(param_1 + 0xe8,&local_1c,&local_30);
  plVar3 = local_28;
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
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457fa734 FUN_1457fa734 body=442 status=ok
// SIG undefined FUN_1457fa734(void)

undefined8 * FUN_1457fa734(undefined8 *param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined1 auStack_78 [36];
  uint local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((param_2 == (longlong *)0x0) ||
       (lVar2 = (**(code **)(*param_2 + 0x180))(param_2), lVar2 == 0)) ||
      (*(longlong *)(lVar2 + 0x1f0) == 0)) ||
     ((*(char *)(lVar2 + 0x152) == '\x02' || (*(char *)(lVar2 + 0x152) == '\x04')))) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
  }
  lVar3 = FUN_1410ccb57(param_2);
  bVar1 = true;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0x448);
    if ((lVar4 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar4);
LAB_1457fa7f3:
      lVar4 = FUN_1447e6586(lVar4);
    }
    else {
      if (lVar4 != 0) goto LAB_1457fa7f3;
      lVar4 = 0;
    }
    lVar3 = FUN_144a7ba4c(lVar3);
    if (lVar3 != 0) {
      local_54 = (uint)*(byte *)(lVar3 + 0xb8);
      cVar5 = '\x01';
      bVar1 = false;
      goto LAB_1457fa822;
    }
  }
  lVar3 = 0;
  cVar5 = '\0';
LAB_1457fa822:
  local_50 = 0;
  FUN_14485c47a(&local_50,lVar2);
  *(undefined4 *)param_1 = (undefined4)local_50;
  *(undefined4 *)((longlong)param_1 + 4) = local_50._4_4_;
  param_1[1] = 0;
  if (!bVar1) {
    local_50 = 0;
    FUN_14485c47a(&local_50,lVar3);
    *(undefined4 *)(param_1 + 1) = (undefined4)local_50;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_50._4_4_;
  }
  param_1[2] = 0;
  if (lVar4 != 0) {
    local_50 = 0;
    FUN_14485c47a(&local_50,lVar4);
    *(undefined4 *)(param_1 + 2) = (undefined4)local_50;
    *(undefined4 *)((longlong)param_1 + 0x14) = local_50._4_4_;
  }
  *(char *)((longlong)param_1 + 0x1c) = cVar5;
  if (cVar5 != '\0') {
    *(uint *)(param_1 + 3) = local_54;
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457fa8f0 FUN_1457fa8f0 body=422 status=ok
// SIG undefined FUN_1457fa8f0(void)

void FUN_1457fa8f0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
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
        uVar8 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar2 + lVar6);
        *(uint *)(lVar2 + 0xc + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 1457faa98 FUN_1457faa98 body=40 status=ok
// SIG undefined FUN_1457faa98(void)

undefined8 FUN_1457faa98(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457faac0 FUN_1457faac0 body=29 status=ok
// SIG undefined FUN_1457faac0(void)

void FUN_1457faac0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1457faade FUN_1457faade body=31 status=ok
// SIG undefined FUN_1457faade(void)

undefined8 FUN_1457faade(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457fab48 caseD_34 body=31 status=ok
// SIG undefined caseD_34(void)

undefined8 switchD_148704b3c::caseD_34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457fab68 FUN_1457fab68 body=104 status=ok
// SIG undefined FUN_1457fab68(void)

void FUN_1457fab68(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1457fabd0();
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    lVar2 = FUN_144a7b4ca();
    if ((((*(longlong *)(param_1 + 0x3b0) != 0) && (lVar2 != 0)) &&
        (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3b0) + 0x10), lVar1 != 0)) &&
       ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)))) {
      FUN_1447f69b6(param_1 + 0x3fd0);
      return;
    }
  }
  return;
}



// FUNCTION 1457fabd0 FUN_1457fabd0 body=43 status=ok
// SIG undefined FUN_1457fabd0(void)

void FUN_1457fabd0(longlong param_1)

{
  FUN_1410ccdd8();
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    FUN_14140e650(param_1);
    return;
  }
  return;
}



// FUNCTION 1457fabfe FUN_1457fabfe body=12 status=ok
// SIG undefined FUN_1457fabfe(void)

void FUN_1457fabfe(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001457fac07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1457fac0a FUN_1457fac0a body=59 status=ok
// SIG undefined FUN_1457fac0a(void)

undefined8 * FUN_1457fac0a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9db410;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457fac46 FUN_1457fac46 body=20 status=ok
// SIG undefined FUN_1457fac46(void)

undefined8 FUN_1457fac46(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 1457fac5a FUN_1457fac5a body=117 status=ok
// SIG undefined FUN_1457fac5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1457fac5a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb71b60) {
    FUN_144b3d300(&DAT_14cb71b60);
    if (DAT_14cb71b60 == -1) {
      DAT_14cb71b48 = 0;
      _DAT_14cb71b50 = 0;
      _DAT_14cb71b58 = 2;
      atexit(FUN_143ca63b7);
      _Init_thread_footer(&DAT_14cb71b60);
    }
  }
  return &DAT_14cb71b48;
}



// FUNCTION 1457facd0 FUN_1457facd0 body=85 status=ok
// SIG undefined FUN_1457facd0(void)

void FUN_1457facd0(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_1412e3d1e(&local_28);
    *(undefined4 *)(param_1 + 0x4a8) = local_28;
    *(undefined4 *)(param_1 + 0x4ac) = uStack_24;
    *(undefined4 *)(param_1 + 0x4b0) = uStack_20;
    *(undefined4 *)(param_1 + 0x4b4) = uStack_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457fad26 FUN_1457fad26 body=207 status=ok
// SIG undefined FUN_1457fad26(void)

void FUN_1457fad26(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined1 auStack_98 [40];
  void *local_70;
  undefined8 uStack_68;
  void *local_60;
  int local_58;
  undefined4 local_54;
  byte local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = (void *)0x0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  if ((longlong)iVar1 == 0) {
    local_54 = 0;
    local_58 = 0;
    local_60 = (void *)0x0;
  }
  else {
    uStack_68._0_4_ = iVar1;
    FUN_1446dd670(&local_70,iVar1,0);
    memcpy(local_70,_Src,(longlong)iVar1 * 2);
    local_60 = local_70;
    local_58 = (int)uStack_68;
    local_54 = uStack_68._4_4_;
  }
  local_70 = (void *)0x0;
  uStack_68 = 0;
  local_40 = 4;
  local_38 = param_2;
  FUN_1410cd700(param_1,&local_60);
  (*(code *)(&PTR_FUN_14a1842f0)[local_40])(&local_60);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457fadf6 FUN_1457fadf6 body=458 status=ok
// SIG undefined FUN_1457fadf6(void)

longlong FUN_1457fadf6(longlong param_1,longlong param_2,char param_3)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  undefined1 auStack_a8 [32];
  LARGE_INTEGER local_88;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = param_2;
  QueryPerformanceCounter(&local_88);
  dVar1 = (double)local_88.QuadPart * DAT_14c83f420;
  lVar6 = FUN_1410cd8c0(param_2);
  if ((lVar6 != 0) && (lVar6 = *(longlong *)(param_2 + 0x178), lVar6 != 0)) {
    lVar7 = FUN_14041aabe();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) {
      local_70 = lVar6;
      piVar8 = (int *)FUN_140de1706(lVar6,0);
      local_80 = &local_68;
      local_88.QuadPart = (LONGLONG)&local_70;
      local_78 = param_1;
      if ((longlong)*(int *)(param_1 + 0x10) != 0) {
        lVar6 = *(longlong *)(param_1 + 8);
        lVar7 = (longlong)*(int *)(param_1 + 0x10) * 200;
        do {
          if ((((((*(int *)(lVar6 + 0x14) != 0 || *(int *)(lVar6 + 0x10) != 0) ||
                 *(int *)(lVar6 + 0x18) != 0) || *(int *)(lVar6 + 0x1c) != 0) &&
               (*(int *)(lVar6 + 0x10) == *piVar8)) && (*(int *)(lVar6 + 0x14) == piVar8[1])) &&
             ((*(int *)(lVar6 + 0x18) == piVar8[2] && (*(int *)(lVar6 + 0x1c) == piVar8[3])))) {
            FUN_1457fb0be(&local_88,lVar6);
            cVar5 = FUN_1457fafc2(lVar6);
            lVar7 = 0;
            if (cVar5 == '\0') {
              lVar7 = lVar6;
            }
            goto LAB_1457fae53;
          }
          lVar6 = lVar6 + 200;
          lVar7 = lVar7 + -200;
        } while (lVar7 != 0);
      }
      if (param_3 != '\0') {
        lVar7 = FUN_14606a59c(param_1 + 8);
        FUN_1457fb0be(&local_88,lVar7);
        iVar2 = piVar8[1];
        iVar3 = piVar8[2];
        iVar4 = piVar8[3];
        *(int *)(lVar7 + 0x10) = *piVar8;
        *(int *)(lVar7 + 0x14) = iVar2;
        *(int *)(lVar7 + 0x18) = iVar3;
        *(int *)(lVar7 + 0x1c) = iVar4;
        FUN_1412e3d1e(&local_60);
        *(undefined4 *)(lVar7 + 0x20) = local_60;
        *(undefined4 *)(lVar7 + 0x24) = uStack_5c;
        *(undefined4 *)(lVar7 + 0x28) = uStack_58;
        *(undefined4 *)(lVar7 + 0x2c) = uStack_54;
        FUN_1402160b8(&local_60);
        *(ulonglong *)(lVar7 + 0x70) = CONCAT44(uStack_5c,local_60);
        *(double *)(lVar7 + 0x80) = dVar1 + 16777216.0;
        goto LAB_1457fae53;
      }
    }
  }
  lVar7 = 0;
LAB_1457fae53:
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 1457fafc2 FUN_1457fafc2 body=60 status=ok
// SIG undefined FUN_1457fafc2(void)

ulonglong FUN_1457fafc2(longlong param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (((*(int *)(param_1 + 0x14) != 0 || *(int *)(param_1 + 0x10) != 0) ||
      *(int *)(param_1 + 0x18) != 0) || *(int *)(param_1 + 0x1c) != 0) {
    cVar1 = FUN_144729dda();
    if (cVar1 != '\0') {
      uVar2 = FUN_144729dda(param_1 + 8);
      uVar3 = (ulonglong)uVar2 ^ 1;
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1457faffe FUN_1457faffe body=191 status=ok
// SIG undefined FUN_1457faffe(void)

void FUN_1457faffe(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14cb71b50;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14cb71b5c = DAT_14cb71b5c + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14cb71b48 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cb71b48 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2), cVar3 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14cb71b5c = DAT_14cb71b5c + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_1457fb0a4;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14cb71b5c = DAT_14cb71b5c + -1;
LAB_1457fb0a4:
  FUN_14474d06a(&DAT_14cb71b48,0);
  return;
}



// FUNCTION 1457fb0be FUN_1457fb0be body=542 status=ok
// SIG undefined FUN_1457fb0be(void)

void FUN_1457fb0be(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  undefined4 uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  piVar4 = (int *)param_1[2];
  cVar5 = FUN_144729dda(param_2);
  if (cVar5 == '\0') {
LAB_1457fb169:
    FUN_14485c47a(param_2,*(undefined8 *)*param_1);
    plVar2 = (longlong *)(param_2 + 0x50);
    FUN_144a7e010(plVar2);
    if (*(longlong *)(*(longlong *)param_1[1] + 0x170) != 0) {
      local_38 = (ulonglong)*(uint *)(*(longlong *)(*(longlong *)param_1[1] + 0x170) + 0x18);
      FUN_1400021e4(&local_38,&local_48);
      if (plVar2 == &local_48) {
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_2 + 0x50) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_2 + 0x50) = local_48;
        local_48 = 0;
        *(undefined4 *)(param_2 + 0x58) = local_40;
        *(undefined4 *)(param_2 + 0x5c) = local_3c;
      }
      if (*(char *)(*(longlong *)param_1[1] + 0x152) == '\x03') {
        FUN_1400020e8(plVar2,L"(PIE)",5);
      }
    }
  }
  else {
    cVar5 = FUN_1457fb2de(param_2,*(undefined8 *)*param_1);
    if (cVar5 == '\0') goto LAB_1457fb169;
  }
  lVar1 = param_2 + 8;
  cVar5 = FUN_144729dda(lVar1);
  if (cVar5 != '\0') {
    cVar5 = FUN_1447ffd82(lVar1,*(undefined8 *)param_1[1]);
    if (cVar5 != '\0') goto LAB_1457fb12b;
  }
  FUN_14485c47a(lVar1,*(undefined8 *)param_1[1]);
  local_38 = *(ulonglong *)(*(longlong *)param_1[1] + 0x18);
  FUN_1400021e4(&local_38,&local_48);
  if ((longlong *)(param_2 + 0x60) == &local_48) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 0x60) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 0x60) = local_48;
    local_48 = 0;
    *(undefined4 *)(param_2 + 0x68) = local_40;
    *(undefined4 *)(param_2 + 0x6c) = local_3c;
  }
  *(int *)(param_2 + 0x7c) = *(int *)(param_2 + 0x7c) + 1;
  iVar3 = *piVar4;
  *piVar4 = iVar3 + 1;
  *(int *)(param_2 + 0x78) = iVar3;
  *(undefined4 *)(param_2 + 0xa8) = 0;
  *(undefined8 *)(param_2 + 0xb0) = 0;
LAB_1457fb12b:
  if (*(int *)(param_2 + 0x88) != 1) {
    uVar6 = FUN_14490d72a(*(undefined8 *)param_1[1]);
    *(undefined4 *)(param_2 + 0x88) = uVar6;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457fb2de FUN_1457fb2de body=120 status=ok
// SIG undefined FUN_1457fb2de(void)

ulonglong FUN_1457fb2de(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457fb358 FUN_1457fb358 body=207 status=ok
// SIG undefined FUN_1457fb358(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1457fb358(void)

{
  if ((DAT_14c874f1f & 2) == 0) {
    DAT_14c874f1f = DAT_14c874f1f | 2;
    _DAT_14c874ec0 = L"FHashedName";
    _DAT_14c874ed8 = FUN_146826540;
    _DAT_14c874ee0 = FUN_146825d77;
    _DAT_14c874ee8 = FUN_146825fd6;
    _DAT_14c874ef0 = FUN_1407e02ea;
    _DAT_14c874ef8 = FUN_146826273;
    _DAT_14c874ed0 = &LAB_1468263ce;
    _DAT_14c874f10 = 0xffffffff00000008;
    _DAT_14c874f18 = 8;
    DAT_14c874f1c = 0;
    _DAT_14c874f00 = &LAB_1468263dc;
    FUN_1457fbbe6();
    FUN_1407e00cc(&DAT_14c874eb8);
  }
  return &DAT_14c874eb8;
}



// FUNCTION 1457fb428 FUN_1457fb428 body=123 status=ok
// SIG undefined FUN_1457fb428(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457fb428(void)

{
  _DAT_14ca94458 = L"BASE";
  DAT_14ca94482 = 4;
  _DAT_14ca94460 = FUN_1457fb4a4();
  _DAT_14ca94468 = DAT_14ca8c748;
  _DAT_14ca94470 = &LAB_14682652b;
  DAT_14ca8c748 = &DAT_14ca94458;
  DAT_14ca8c79d = DAT_14ca8c79d + '\x01';
  _DAT_14ca94478 = 0x100000000;
  if (*(char *)(_DAT_14ca94460 + 100) != '\0') {
    DAT_14ca8c79e = DAT_14ca8c79e + '\x01';
  }
  return;
}



// FUNCTION 1457fb4a4 FUN_1457fb4a4 body=207 status=ok
// SIG undefined FUN_1457fb4a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1457fb4a4(void)

{
  if ((DAT_14ca980bf & 2) == 0) {
    DAT_14ca980bf = DAT_14ca980bf | 2;
    _DAT_14ca98060 = L"FShaderMapContent";
    _DAT_14ca98078 = FUN_146826540;
    _DAT_14ca98080 = FUN_146825d77;
    _DAT_14ca98088 = FUN_146825fd6;
    _DAT_14ca98090 = FUN_1407e02ea;
    _DAT_14ca98098 = FUN_146826273;
    _DAT_14ca98070 = FUN_14743230a;
    _DAT_14ca980b0 = 0xffffffff00000060;
    _DAT_14ca980b8 = 8;
    DAT_14ca980bc = 0;
    _DAT_14ca980a0 = &LAB_147432344;
    FUN_1457fb574();
    FUN_1407e00cc(&DAT_14ca98058);
  }
  return &DAT_14ca98058;
}



// FUNCTION 1457fb574 FUN_1457fb574 body=275 status=ok
// SIG undefined FUN_1457fb574(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457fb574(void)

{
  FUN_1457fb688();
  _DAT_14ca99538 = L"ShaderHash";
  DAT_14ca99562 = FUN_140850cc5();
  if ((DAT_14ca998c7 & 2) == 0) {
    DAT_14ca998c7 = DAT_14ca998c7 | 3;
    _DAT_14ca99868 = L"THashTable<InAllocator>";
    _DAT_14ca99880 = &LAB_1474383ac;
    _DAT_14ca99888 = FUN_1474383ba;
    _DAT_14ca99890 = &LAB_1474383d4;
    _DAT_14ca99898 = &LAB_1474383e2;
    _DAT_14ca998a0 = &LAB_1474383f0;
    _DAT_14ca99878 = FUN_1474383f6;
    _DAT_14ca998b8 = 0x1800000018;
    _DAT_14ca998c0 = 8;
    DAT_14ca998c4 = 0;
  }
  _DAT_14ca99540 = &DAT_14ca99860;
  _DAT_14ca99550 = &LAB_14682652b;
  _DAT_14ca99558 = 0x100000000;
  _DAT_14ca99560 = 0;
  _DAT_14ca99548 = DAT_14ca98068;
  DAT_14ca98068 = &DAT_14ca99538;
  return;
}



// FUNCTION 1457fb688 FUN_1457fb688 body=276 status=ok
// SIG undefined FUN_1457fb688(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457fb688(void)

{
  FUN_1457fb79c();
  _DAT_14ca99568 = L"ShaderTypes";
  DAT_14ca99592 = FUN_140850cc5();
  if ((DAT_14ca98e67 & 2) == 0) {
    DAT_14ca98e67 = DAT_14ca98e67 | 3;
    _DAT_14ca98e08 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca98e20 = &LAB_147434da6;
    _DAT_14ca98e28 = FUN_147434db4;
    _DAT_14ca98e30 = &LAB_147434dd4;
    _DAT_14ca98e38 = &LAB_147434de2;
    _DAT_14ca98e40 = FUN_147434df0;
    _DAT_14ca98e18 = FUN_147434e36;
    _DAT_14ca98e58 = 0x1000000010;
    _DAT_14ca98e60 = 8;
    DAT_14ca98e64 = 0;
  }
  _DAT_14ca99570 = &DAT_14ca98e00;
  _DAT_14ca99580 = &LAB_14682652b;
  _DAT_14ca99588 = &DAT_100000018;
  _DAT_14ca99590 = 0;
  _DAT_14ca99578 = DAT_14ca98068;
  DAT_14ca98068 = &DAT_14ca99568;
  return;
}



// FUNCTION 1457fb79c FUN_1457fb79c body=275 status=ok
// SIG undefined FUN_1457fb79c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457fb79c(void)

{
  FUN_1457fb8b0();
  _DAT_14ca99598 = L"ShaderPermutations";
  DAT_14ca995c2 = FUN_140850cc5();
  if ((DAT_14ca9a347 & 2) == 0) {
    DAT_14ca9a347 = DAT_14ca9a347 | 3;
    _DAT_14ca9a2e8 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca9a300 = &LAB_147437ebc;
    _DAT_14ca9a308 = FUN_147437eca;
    _DAT_14ca9a310 = &LAB_147437eea;
    _DAT_14ca9a318 = &LAB_147437ef8;
    _DAT_14ca9a320 = &LAB_147437f06;
    _DAT_14ca9a2f8 = FUN_147437f12;
    _DAT_14ca9a338 = 0x1000000010;
    _DAT_14ca9a340 = 8;
    DAT_14ca9a344 = 0;
  }
  _DAT_14ca995a0 = &DAT_14ca9a2e0;
  _DAT_14ca995b0 = &LAB_14682652b;
  _DAT_14ca995b8 = &DAT_100000028;
  _DAT_14ca995c0 = 0;
  _DAT_14ca995a8 = DAT_14ca98068;
  DAT_14ca98068 = &DAT_14ca99598;
  return;
}



// FUNCTION 1457fb8b0 FUN_1457fb8b0 body=275 status=ok
// SIG undefined FUN_1457fb8b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457fb8b0(void)

{
  FUN_1457fb9c4();
  _DAT_14ca995c8 = L"Shaders";
  DAT_14ca995f2 = FUN_140850cc5();
  if ((DAT_14ca997f7 & 2) == 0) {
    DAT_14ca997f7 = DAT_14ca997f7 | 3;
    _DAT_14ca99798 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca997b0 = &LAB_14743765e;
    _DAT_14ca997b8 = FUN_14743766c;
    _DAT_14ca997c0 = &LAB_14743768c;
    _DAT_14ca997c8 = &LAB_14743769a;
    _DAT_14ca997d0 = &LAB_1474376a8;
    _DAT_14ca997a8 = FUN_1474376b4;
    _DAT_14ca997e8 = 0x1000000010;
    _DAT_14ca997f0 = 8;
    DAT_14ca997f4 = 0;
  }
  _DAT_14ca995d0 = &DAT_14ca99790;
  _DAT_14ca995e0 = &LAB_14682652b;
  _DAT_14ca995e8 = &DAT_100000038;
  _DAT_14ca995f0 = 0;
  _DAT_14ca995d8 = DAT_14ca98068;
  DAT_14ca98068 = &DAT_14ca995c8;
  return;
}



// FUNCTION 1457fb9c4 FUN_1457fb9c4 body=275 status=ok
// SIG undefined FUN_1457fb9c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457fb9c4(void)

{
  FUN_1457fbad8();
  _DAT_14ca995f8 = L"ShaderPipelines";
  DAT_14ca99622 = FUN_140850cc5();
  if ((DAT_14ca99727 & 2) == 0) {
    DAT_14ca99727 = DAT_14ca99727 | 3;
    _DAT_14ca996c8 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca996e0 = &LAB_147436e28;
    _DAT_14ca996e8 = FUN_147436e36;
    _DAT_14ca996f0 = &LAB_147436e56;
    _DAT_14ca996f8 = &LAB_147436e64;
    _DAT_14ca99700 = &LAB_147436e72;
    _DAT_14ca996d8 = FUN_147436e7e;
    _DAT_14ca99718 = 0x1000000010;
    _DAT_14ca99720 = 8;
    DAT_14ca99724 = 0;
  }
  _DAT_14ca99600 = &DAT_14ca996c0;
  _DAT_14ca99610 = &LAB_14682652b;
  _DAT_14ca99618 = 0x100000048;
  _DAT_14ca99620 = 0;
  _DAT_14ca99608 = DAT_14ca98068;
  DAT_14ca98068 = &DAT_14ca995f8;
  return;
}



// FUNCTION 1457fbad8 FUN_1457fbad8 body=270 status=ok
// SIG undefined FUN_1457fbad8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457fbad8(void)

{
  _DAT_14ca99628 = L"ShaderPlatformName";
  DAT_14ca99652 = FUN_140850cc5();
  if ((DAT_14ca996bf & 2) == 0) {
    DAT_14ca996bf = DAT_14ca996bf | 3;
    _DAT_14ca99660 = L"FMemoryImageName";
    _DAT_14ca99678 = &LAB_147436df2;
    _DAT_14ca99680 = &LAB_147436df8;
    _DAT_14ca99688 = &LAB_147436e00;
    _DAT_14ca99690 = &LAB_147436e10;
    _DAT_14ca99698 = &LAB_147436e14;
    _DAT_14ca99670 = &LAB_147436e1a;
    _DAT_14ca996b0 = 0x800000008;
    _DAT_14ca996b8 = 4;
    DAT_14ca996bc = 0;
  }
  _DAT_14ca99630 = &DAT_14ca99658;
  _DAT_14ca99640 = &LAB_14682652b;
  _DAT_14ca99648 = 0x100000058;
  _DAT_14ca99650 = 0;
  _DAT_14ca99638 = DAT_14ca98068;
  DAT_14ca98068 = &DAT_14ca99628;
  return;
}



// FUNCTION 1457fbbe6 FUN_1457fbbe6 body=359 status=ok
// SIG undefined FUN_1457fbbe6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457fbbe6(void)

{
  wchar_t *pwVar1;
  short sVar2;
  short *psVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t wVar6;
  
  psVar3 = &DAT_149e385f8;
  _DAT_14c87e5f8 = &DAT_149e385f8;
  DAT_14c87e622 = '\0';
  while (sVar2 = *psVar3, sVar2 != 0) {
    psVar3 = psVar3 + 1;
    if (sVar2 == 0x5f) {
      if (*psVar3 == 0x44) {
        wVar6 = L'D';
        pwVar5 = L"DEPRECATED";
        do {
          if (wVar6 == L'\0') goto LAB_1457fbc3f;
          pwVar4 = pwVar5 + 1;
          wVar6 = psVar3[1];
          psVar3 = psVar3 + 1;
          pwVar1 = pwVar5 + 1;
          pwVar5 = pwVar4;
        } while (wVar6 == *pwVar1);
      }
      else {
        pwVar4 = L"DEPRECATED";
      }
      DAT_14c87e622 = DAT_14c87e622 + (char)((int)pwVar4 + 0xb61c7ce8U >> 1);
    }
    DAT_14c87e622 = DAT_14c87e622 + '\x01';
  }
LAB_1457fbc3f:
  if ((DAT_14c87e707 & 2) == 0) {
    DAT_14c87e707 = DAT_14c87e707 | 3;
    _DAT_14c87e6a8 = L"unsigned long long";
    _DAT_14c87e6c0 = FUN_146828f6a;
    _DAT_14c87e6c8 = &LAB_146828f9c;
    _DAT_14c87e6d0 = &LAB_146828fa8;
    _DAT_14c87e6d8 = &LAB_146828fae;
    _DAT_14c87e6e0 = FUN_146828fb2;
    _DAT_14c87e6b8 = &LAB_146828fce;
    _DAT_14c87e6f8 = 0x800000008;
    _DAT_14c87e700 = 8;
    DAT_14c87e704 = 0;
  }
  _DAT_14c87e600 = &DAT_14c87e6a0;
  _DAT_14c87e610 = &LAB_14682652b;
  _DAT_14c87e618 = 0x100000000;
  _DAT_14c87e620 = 0;
  _DAT_14c87e608 = DAT_14c874ec8;
  DAT_14c874ec8 = &DAT_14c87e5f8;
  return;
}



// FUNCTION 1457fbd4e FUN_1457fbd4e body=132 status=ok
// SIG undefined FUN_1457fbd4e(void)

void FUN_1457fbd4e(longlong param_1,int param_2)

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



// FUNCTION 1457fbdd4 FUN_1457fbdd4 body=96 status=ok
// SIG undefined FUN_1457fbdd4(void)

void FUN_1457fbdd4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1457fbe34 FUN_1457fbe34 body=200 status=ok
// SIG undefined FUN_1457fbe34(void)

undefined4 FUN_1457fbe34(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_1410cfc16();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    FUN_1410cfcf6(lVar2,&local_48);
    uVar3 = FUN_1458cdfb6();
    uVar3 = FUN_144718840(param_2,uVar3);
    lVar2 = local_48;
    lVar4 = (longlong)(int)uStack_40;
    if (lVar4 == 0) {
      uVar1 = 0;
    }
    else {
      lVar5 = 0;
      do {
        uVar1 = FUN_1457fbefe(*(undefined8 *)(lVar2 + lVar5),uVar3);
        if ((char)uVar1 != '\0') break;
        bVar6 = lVar4 * 8 + -8 != lVar5;
        lVar5 = lVar5 + 8;
      } while (bVar6);
    }
    if (local_48 != 0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1457fbefe FUN_1457fbefe body=100 status=ok
// SIG undefined FUN_1457fbefe(void)

undefined8 FUN_1457fbefe(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (((param_1 != 0) && (param_2 != (longlong *)0x0)) &&
     (lVar2 = (**(code **)(*param_2 + 0x10))(param_2), lVar2 != 0)) {
    cVar1 = FUN_1457fbf62(lVar2,param_1);
    if (cVar1 != '\0') {
      return 1;
    }
    uVar3 = FUN_140b15fd0(lVar2);
    if (*(longlong *)(param_1 + 0x3d0) != 0) {
      uVar3 = FUN_14064aef8(*(longlong *)(param_1 + 0x3d0),uVar3);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1457fbf62 FUN_1457fbf62 body=85 status=ok
// SIG undefined FUN_1457fbf62(void)

undefined8 FUN_1457fbf62(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_2 == 0) || ((longlong)*(int *)(param_1 + 0xa8) == 0)) {
    uVar1 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0xa0);
    lVar2 = (longlong)*(int *)(param_1 + 0xa8) * 8;
    do {
      lVar2 = lVar2 + -8;
      uVar1 = FUN_1411db966(lVar3,param_2);
      if ((char)uVar1 != '\0') {
        return uVar1;
      }
      lVar3 = lVar3 + 8;
    } while (lVar2 != 0);
  }
  return uVar1;
}



// FUNCTION 1457fbfb8 FUN_1457fbfb8 body=21 status=ok
// SIG undefined FUN_1457fbfb8(void)

undefined8 FUN_1457fbfb8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1457fbfce FUN_1457fbfce body=115 status=ok
// SIG undefined FUN_1457fbfce(void)

void FUN_1457fbfce(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  
  FUN_1457fc042();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    if ((((*(char *)(lVar1 + 0x928) != '\0') || (*(char *)(lVar1 + 0xc0) != '\0')) ||
        (*(char *)(lVar1 + 0x1c0) == '\x01')) &&
       (puVar2 = *(ushort **)(lVar1 + 0x80), puVar2 != (ushort *)0x0)) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
    *(undefined1 *)(lVar1 + 0x928) = 0;
    *(undefined1 *)(lVar1 + 0xc0) = 0;
    *(undefined1 *)(lVar1 + 0x1c0) = 0;
    *(undefined1 *)(lVar1 + 0x399) = 1;
  }
  return;
}



// FUNCTION 1457fc042 FUN_1457fc042 body=2080 status=ok
// SIG undefined FUN_1457fc042(void)

/* WARNING: Removing unreachable block (ram,0x0001457fc765) */
/* WARNING: Removing unreachable block (ram,0x0001457fc851) */
/* WARNING: Removing unreachable block (ram,0x0001457fc826) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff98 : 0x0001457fc855 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1457fc042(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  longlong lVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  undefined1 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1407cbc56();
  plVar10 = (longlong *)(**(code **)(*param_1 + 400))(param_1);
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x28))(plVar10,param_1 + 0x2c);
  }
  lVar11 = (**(code **)(*param_1 + 0x198))(param_1);
  if (lVar11 != 0) {
    if (param_1[0x2c] == 0) {
      plVar10 = &DAT_14c9a1308;
    }
    else {
      plVar10 = (longlong *)FUN_1446e60f4(param_1[0x2c],&DAT_14cbdc788);
    }
    if (*plVar10 == 0) {
      *(byte *)(param_1 + 0x5b) = *(byte *)(param_1 + 0x5b) & 0xfe;
    }
    else {
      bVar6 = FUN_14000584e(*plVar10,0);
      *(byte *)(param_1 + 0x5b) = *(byte *)(param_1 + 0x5b) & 0xfe | bVar6;
      if (bVar6 != 0) {
        local_78 = 0;
        local_68 = &PTR_LAB_14b9c5e50;
        uStack_60 = param_1;
        local_88 = &LAB_1442da368;
        iVar2 = *(int *)(lVar11 + 0xae0);
        *(uint *)(lVar11 + 0xae0) = iVar2 + 1U;
        if (*(uint *)(lVar11 + 0xae4) < iVar2 + 1U) {
          FUN_1457fc94e((longlong *)(lVar11 + 0xad8),iVar2);
        }
        lVar3 = *(longlong *)(lVar11 + 0xad8);
        lVar15 = (longlong)iVar2 * 0x40;
        *(undefined1 **)(lVar3 + lVar15) = &LAB_1442da368;
        *(undefined8 *)(lVar3 + 0x10 + lVar15) = local_78;
        local_78 = 0;
        puVar1 = (undefined4 *)(lVar3 + 0x30 + lVar15);
        *puVar1 = local_58;
        puVar1[1] = uStack_54;
        puVar1[2] = uStack_50;
        puVar1[3] = uStack_4c;
        puVar1 = (undefined4 *)(lVar3 + 0x20 + lVar15);
        *puVar1 = (undefined4)local_68;
        puVar1[1] = local_68._4_4_;
        puVar1[2] = (undefined4)uStack_60;
        puVar1[3] = uStack_60._4_4_;
        if ((*(longlong *)(lVar3 + lVar15) == 0) && (local_88 != (undefined1 *)0x0)) {
          (*(code *)local_68[2])(&local_68);
        }
        FUN_1457fd360(lVar11 + 0x130,lVar11 + 0xb0);
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x35a) = 1;
    *(undefined2 *)(param_1 + 0x6b) = 0;
  }
  plVar10 = param_1 + 0x57;
  iVar2 = *(int *)((longlong)param_1 + 0x2c4);
  FUN_1447a1747(param_1[0x57],(int)param_1[0x58]);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((iVar2 < 0) && (*(int *)((longlong)param_1 + 0x2c4) != 0)) {
    FUN_1408be2c4(plVar10,0);
  }
  if (param_1[0x2c] == 0) {
    puVar12 = &DAT_14c9a1308;
  }
  else {
    puVar12 = (undefined8 *)FUN_1446e60f4(param_1[0x2c],&DAT_14cbdc778);
  }
  plVar13 = (longlong *)FUN_1407cbaec(puVar12);
  lVar11 = plVar13[2];
  if ((longlong)(int)lVar11 != 0) {
    lVar3 = *plVar13;
    lVar15 = 0;
    do {
      pbVar4 = *(byte **)(lVar3 + lVar15);
      if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 3) == 1)) {
        FUN_1400b22c2(&local_88,*(undefined8 *)(pbVar4 + 8));
        iVar2 = (int)param_1[0x58];
        *(uint *)(param_1 + 0x58) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0x2c4) < iVar2 + 1U) {
          FUN_1447a1bd6(plVar10,iVar2);
        }
        lVar5 = *plVar10;
        lVar16 = (longlong)iVar2 * 0x10;
        *(undefined8 *)(lVar5 + lVar16) = 0;
        *(undefined1 **)(lVar5 + lVar16) = local_88;
        local_88 = (undefined1 *)0x0;
        *(undefined4 *)(lVar5 + 8 + lVar16) = (undefined4)local_80;
        *(undefined4 *)(lVar5 + 0xc + lVar16) = local_80._4_4_;
        local_80 = 0;
      }
      lVar15 = lVar15 + 0x10;
    } while ((longlong)(int)lVar11 * 0x10 != lVar15);
  }
  plVar10 = param_1 + 0x59;
  iVar2 = *(int *)((longlong)param_1 + 0x2d4);
  FUN_1447a1747(param_1[0x59],(int)param_1[0x5a]);
  *(undefined4 *)(param_1 + 0x5a) = 0;
  if ((iVar2 < 0) && (*(int *)((longlong)param_1 + 0x2d4) != 0)) {
    FUN_1408be2c4(plVar10,0);
  }
  if (param_1[0x2c] == 0) {
    puVar12 = &DAT_14c9a1308;
  }
  else {
    puVar12 = (undefined8 *)FUN_1446e60f4(param_1[0x2c],&DAT_14cbdc780);
  }
  plVar13 = (longlong *)FUN_1407cbaec(puVar12);
  lVar11 = plVar13[2];
  if ((longlong)(int)lVar11 != 0) {
    lVar3 = *plVar13;
    lVar15 = 0;
    do {
      pbVar4 = *(byte **)(lVar3 + lVar15);
      if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 3) == 1)) {
        FUN_1400b22c2(&local_88,*(undefined8 *)(pbVar4 + 8));
        iVar2 = (int)param_1[0x5a];
        *(uint *)(param_1 + 0x5a) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0x2d4) < iVar2 + 1U) {
          FUN_1447a1bd6(plVar10,iVar2);
        }
        lVar5 = *plVar10;
        lVar16 = (longlong)iVar2 * 0x10;
        *(undefined8 *)(lVar5 + lVar16) = 0;
        *(undefined1 **)(lVar5 + lVar16) = local_88;
        local_88 = (undefined1 *)0x0;
        *(undefined4 *)(lVar5 + 8 + lVar16) = (undefined4)local_80;
        *(undefined4 *)(lVar5 + 0xc + lVar16) = local_80._4_4_;
        local_80 = 0;
      }
      lVar15 = lVar15 + 0x10;
    } while ((longlong)(int)lVar11 * 0x10 != lVar15);
  }
  plVar10 = &DAT_14c9a1308;
  puVar12 = &DAT_14c9a1308;
  if (param_1[0x2c] != 0) {
    puVar12 = (undefined8 *)FUN_1446e60f4(param_1[0x2c],&DAT_14cbdc7f8);
  }
  uVar14 = FUN_140625082(puVar12,&DAT_14c9a12e0);
  FUN_1447325ac(uVar14,&local_88,1);
  param_1[0x5f] = (longlong)local_88;
  puVar12 = &DAT_14c9a1308;
  if (param_1[0x2c] != 0) {
    puVar12 = (undefined8 *)FUN_1446e60f4(param_1[0x2c],&DAT_14cbdc800);
  }
  uVar14 = FUN_140625082(puVar12,&DAT_14c9a12e0);
  FUN_1447325ac(uVar14,&local_88,1);
  param_1[0x60] = (longlong)local_88;
  puVar12 = &DAT_14c9a1308;
  if (param_1[0x2c] != 0) {
    puVar12 = (undefined8 *)FUN_1446e60f4(param_1[0x2c],&DAT_14cbdc810);
  }
  uVar14 = FUN_140625082(puVar12,&DAT_14c9a12e0);
  FUN_1447325ac(uVar14,&local_88,1);
  param_1[0x61] = (longlong)local_88;
  puVar12 = &DAT_14c9a1308;
  if (param_1[0x2c] != 0) {
    puVar12 = (undefined8 *)FUN_1446e60f4(param_1[0x2c],&DAT_14cbdc808);
  }
  uVar14 = FUN_140625082(puVar12,&DAT_14c9a12e0);
  FUN_1447325ac(uVar14,&local_88,1);
  param_1[0x62] = (longlong)local_88;
  puVar12 = &DAT_14c9a1308;
  if (param_1[0x2c] != 0) {
    puVar12 = (undefined8 *)FUN_1446e60f4(param_1[0x2c],&DAT_14cbdc7d0);
  }
  uVar14 = FUN_140625082(puVar12,&DAT_14c9a12e0);
  FUN_1447325ac(uVar14,&local_88,1);
  param_1[99] = (longlong)local_88;
  puVar12 = &DAT_14c9a1308;
  if (param_1[0x2c] != 0) {
    puVar12 = (undefined8 *)FUN_1446e60f4(param_1[0x2c],&DAT_14cbdc7d8);
  }
  uVar14 = FUN_140625082(puVar12,&DAT_14c9a12e0);
  FUN_1447325ac(uVar14,&local_88,1);
  param_1[100] = (longlong)local_88;
  puVar12 = &DAT_14c9a1308;
  if (param_1[0x2c] != 0) {
    puVar12 = (undefined8 *)FUN_1446e60f4(param_1[0x2c],&DAT_14cbdc7e0);
  }
  uVar14 = FUN_140625082(puVar12,&DAT_14c9a12e0);
  FUN_1447325ac(uVar14,&local_88,1);
  param_1[0x65] = (longlong)local_88;
  puVar12 = &DAT_14c9a1308;
  if (param_1[0x2c] != 0) {
    puVar12 = (undefined8 *)FUN_1446e60f4(param_1[0x2c],&DAT_14cbdc7e8);
  }
  uVar14 = FUN_140625082(puVar12,&DAT_14c9a12e0);
  FUN_1447325ac(uVar14,&local_88,1);
  param_1[0x66] = (longlong)local_88;
  puVar12 = &DAT_14c9a1308;
  if (param_1[0x2c] != 0) {
    puVar12 = (undefined8 *)FUN_1446e60f4(param_1[0x2c],&DAT_14cbdc7f0);
  }
  uVar14 = FUN_140625082(puVar12,&DAT_14c9a12e0);
  FUN_1447325ac(uVar14,&local_88,1);
  param_1[0x67] = (longlong)local_88;
  puVar12 = &DAT_14c9a1308;
  if (param_1[0x2c] != 0) {
    puVar12 = (undefined8 *)FUN_1446e60f4(param_1[0x2c],&DAT_14cbdc820);
  }
  uVar14 = FUN_140625082(puVar12,&DAT_14c9a12e0);
  FUN_1447325ac(uVar14,&local_88,1);
  param_1[0x68] = (longlong)local_88;
  puVar12 = &DAT_14c9a1308;
  if (param_1[0x2c] != 0) {
    puVar12 = (undefined8 *)FUN_1446e60f4(param_1[0x2c],&DAT_14cbdc828);
  }
  uVar14 = FUN_140625082(puVar12,&DAT_14c9a12e0);
  FUN_1447325ac(uVar14,&local_88,1);
  param_1[0x6a] = (longlong)local_88;
  puVar12 = &DAT_14c9a1308;
  if (param_1[0x2c] != 0) {
    puVar12 = (undefined8 *)FUN_1446e60f4(param_1[0x2c],&DAT_14cbdc830);
  }
  uVar14 = FUN_140625082(puVar12,&DAT_14c9a12e0);
  FUN_1447325ac(uVar14,&local_88,1);
  param_1[0x69] = (longlong)local_88;
  if (param_1[0x2c] != 0) {
    plVar10 = (longlong *)FUN_1446e60f4(param_1[0x2c],&DAT_14cbdc790);
  }
  if (*plVar10 == 0) {
    bVar6 = *(byte *)(param_1 + 0x5b);
  }
  else {
    cVar7 = FUN_14000584e(*plVar10,1);
    bVar6 = *(byte *)(param_1 + 0x5b);
    if (cVar7 == '\0') {
      bVar8 = 0;
      goto LAB_1457fc620;
    }
  }
  bVar8 = 2;
LAB_1457fc620:
  *(byte *)(param_1 + 0x5b) = bVar6 & 0xfd | bVar8;
  if (param_1[0x2c] == 0) {
    plVar10 = &DAT_14c9a1308;
  }
  else {
    plVar10 = (longlong *)FUN_1446e60f4(param_1[0x2c],&DAT_14cbdc840);
  }
  if (*plVar10 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_14000584e(*plVar10,0);
  }
  *(undefined1 *)((longlong)param_1 + 0x35b) = uVar9;
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457fc870 FUN_1457fc870 body=81 status=ok
// SIG undefined FUN_1457fc870(void)

longlong * FUN_1457fc870(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x288);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1457fc8c2();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1457fc8c2 FUN_1457fc8c2 body=57 status=ok
// SIG undefined FUN_1457fc8c2(void)

void FUN_1457fc8c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbe4f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbe4f0 = FUN_140002ddd(FUN_146610213,uVar1,L"OakWidgetData_BackpackBase");
  }
  return;
}



// FUNCTION 1457fc8fc FUN_1457fc8fc body=81 status=ok
// SIG undefined FUN_1457fc8fc(void)

longlong * FUN_1457fc8fc(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x288);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_141021b5a();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1457fc94e FUN_1457fc94e body=132 status=ok
// SIG undefined FUN_1457fc94e(void)

void FUN_1457fc94e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457fc9d2 FUN_1457fc9d2 body=1516 status=ok
// SIG undefined FUN_1457fc9d2(void)

void FUN_1457fc9d2(longlong param_1,undefined8 param_2)

{
  int iVar1;
  byte *pbVar2;
  ushort *puVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined *puVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  undefined1 *puVar14;
  longlong lVar15;
  undefined1 auStack_a8 [32];
  longlong *local_88 [2];
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  longlong local_60;
  longlong alStack_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1457fcffc();
  uVar8 = FUN_144a7cdc2(param_2,&DAT_14cbe39f8);
  cVar5 = FUN_1410c4486(uVar8,0);
  *(byte *)(param_1 + 0xb00) = *(byte *)(param_1 + 0xb00) & 0xfd | cVar5 * '\x02';
  uVar8 = FUN_144a7cdc2(param_2,&DAT_14cbe3a00);
  cVar5 = FUN_1410c4486(uVar8,0);
  *(byte *)(param_1 + 0xb00) = *(byte *)(param_1 + 0xb00) & 0xfb | cVar5 << 2;
  uVar8 = FUN_144a7cdc2(param_2,&DAT_14cbe39f0);
  bVar6 = FUN_1410c4486(uVar8,0);
  *(byte *)(param_1 + 0xb00) = *(byte *)(param_1 + 0xb00) & 0xfe | bVar6;
  uVar8 = FUN_144a7cdc2(param_2,&DAT_14cbe3a08);
  cVar5 = FUN_1410c4486(uVar8,0);
  *(byte *)(param_1 + 0xb00) = *(byte *)(param_1 + 0xb00) & 0xf7 | cVar5 << 3;
  uVar8 = FUN_144a7cdc2(param_2,&DAT_14cbe2dd0);
  bVar6 = FUN_1410c4486(uVar8,0);
  *(byte *)(param_1 + 0x8f8) = *(byte *)(param_1 + 0x8f8) & 0xfe | bVar6;
  uVar8 = FUN_144a7cdc2(param_2,&DAT_14cbe2dd8);
  cVar5 = FUN_1410c4486(uVar8,0);
  *(byte *)(param_1 + 0x8f8) = *(byte *)(param_1 + 0x8f8) & 0xfd | cVar5 * '\x02';
  uVar8 = FUN_144a7cdc2(param_2,&DAT_14cbe2de0);
  cVar5 = FUN_1410c4486(uVar8,0);
  *(byte *)(param_1 + 0x8f8) = *(byte *)(param_1 + 0x8f8) & 0xfb | cVar5 << 2;
  uVar8 = FUN_144a7cdc2(param_2,&DAT_14cbe2de8);
  cVar5 = FUN_1410c4486(uVar8,0);
  *(byte *)(param_1 + 0x8f8) = *(byte *)(param_1 + 0x8f8) & 0xf7 | cVar5 << 3;
  uVar8 = FUN_144a7cdc2(param_2,&DAT_14cbe2df0);
  cVar5 = FUN_1410c4486(uVar8,0);
  *(byte *)(param_1 + 0x8f8) = *(byte *)(param_1 + 0x8f8) & 0xef | cVar5 << 4;
  puVar11 = &DAT_14cbe2df8;
  uVar8 = FUN_144a7cdc2(param_2,&DAT_14cbe2df8);
  uVar12 = CONCAT71((int7)((ulonglong)puVar11 >> 8),*(undefined1 *)(param_1 + 0x8f8)) &
           0xffffffffffffff10;
  cVar5 = FUN_1410c4486(uVar8,CONCAT71((int7)(uVar12 >> 8),(byte)uVar12 >> 4));
  *(byte *)(param_1 + 0x8f8) = *(byte *)(param_1 + 0x8f8) & 0xdf | cVar5 << 5;
  uVar8 = FUN_144a7cdc2(param_2,&DAT_14cbe2e00);
  cVar5 = FUN_1410c4486(uVar8,0);
  *(byte *)(param_1 + 0x8f8) = *(byte *)(param_1 + 0x8f8) & 0xbf | cVar5 << 6;
  puVar13 = DAT_14cbe2d00;
  if (DAT_14cbe2d08 == 0) {
    puVar13 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_78,puVar13,1);
  *(longlong *)(param_1 + 0xa18) = local_78;
  local_78 = 0;
  local_68 = (longlong *)0x0;
  uVar8 = FUN_144a7cdc2(param_2,&DAT_14cbe39e8);
  FUN_1410d10d8((longlong *)(param_1 + 0x998),uVar8,&local_78);
  if (local_78 != 0) {
    plVar10 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar10 = alStack_58;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  puVar13 = DAT_14cbe2d10;
  if (DAT_14cbe2d18 == 0) {
    puVar13 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_78,puVar13,1);
  *(longlong *)(param_1 + 0x998) = local_78;
  puVar9 = (undefined8 *)FUN_144a7cdc2(param_2,&DAT_14cbe2e50);
  pbVar2 = (byte *)*puVar9;
  puVar14 = &DAT_149e02088;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 3) == 1)) {
    puVar14 = &DAT_149e02088;
    if (*(undefined1 **)(pbVar2 + 8) != (undefined1 *)0x0) {
      puVar14 = *(undefined1 **)(pbVar2 + 8);
    }
  }
  FUN_1400b22c2(&local_78,puVar14);
  if ((longlong *)(param_1 + 0x380) == &local_78) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x380) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x380) = local_78;
    local_78 = 0;
    *(undefined4 *)(param_1 + 0x388) = (undefined4)uStack_70;
    *(undefined4 *)(param_1 + 0x38c) = uStack_70._4_4_;
  }
  puVar9 = (undefined8 *)FUN_144a7cdc2(param_2,&DAT_14cbe3a10);
  pbVar2 = (byte *)*puVar9;
  puVar14 = &DAT_149e02088;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 3) == 1)) {
    puVar14 = &DAT_149e02088;
    if (*(undefined1 **)(pbVar2 + 8) != (undefined1 *)0x0) {
      puVar14 = *(undefined1 **)(pbVar2 + 8);
    }
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
  local_60 = 0;
  alStack_58[0] = 0;
  FUN_1446ddda2(&local_78,puVar14,0);
  FUN_1410d1eba(local_88,&local_78);
  uVar8 = FUN_1447a1f4a(local_88);
  FUN_144a787a6(param_1 + 0x3a0,uVar8);
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x3a8) + -1;
  if (*(int *)(param_1 + 0x3a8) == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(param_1 + 0x3b0,*(undefined8 *)(param_1 + 0x3a0),iVar1);
  FUN_1457fcfbf(*(undefined8 *)(param_1 + 0xad8),*(undefined4 *)(param_1 + 0xae0));
  *(undefined4 *)(param_1 + 0xae0) = 0;
  if (*(int *)(param_1 + 0xae4) != 0) {
    FUN_148e9a6b4(param_1 + 0xad8,0);
  }
  uVar8 = FUN_144a7cdc2(param_2,&DAT_14cbe2e80);
  uVar7 = FUN_140e1edd4(uVar8,0xffffffff);
  *(undefined4 *)(param_1 + 0x3e0) = uVar7;
  if ((*(byte *)(param_1 + 0xb00) & 4) == 0) {
    iVar1 = *(int *)(param_1 + 0xae0);
    *(uint *)(param_1 + 0xae0) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0xae4) < iVar1 + 1U) {
      FUN_1457fc94e(param_1 + 0xad8,iVar1);
    }
    lVar4 = *(longlong *)(param_1 + 0xad8);
    lVar15 = (longlong)iVar1 * 0x40;
    *(undefined1 **)(lVar4 + lVar15) = &LAB_144322242;
    *(undefined8 *)(lVar4 + 0x10 + lVar15) = 0;
    *(undefined ***)(lVar4 + 0x20 + lVar15) = &PTR_LAB_14b9d8880;
    *(longlong *)(lVar4 + 0x28 + lVar15) = param_1;
  }
  uVar8 = FUN_144a7cdc2(param_2,&DAT_14cbe3a18);
  uVar7 = FUN_140e1edd4(uVar8,0);
  *(undefined4 *)(param_1 + 0x8fc) = uVar7;
  uVar8 = FUN_144a7cdc2(param_2,&DAT_14cbe3a20);
  uVar7 = FUN_140e1edd4(uVar8,0);
  *(undefined4 *)(param_1 + 0x908) = uVar7;
  uVar8 = FUN_144a7cdc2(param_2,&DAT_14cbe3a28);
  cVar5 = FUN_1410c4486(uVar8,1);
  *(byte *)(param_1 + 0xb00) = *(byte *)(param_1 + 0xb00) & 0xef | cVar5 << 4;
  *(byte *)(param_1 + 0x331) = *(byte *)(param_1 + 0x331) | 2;
  *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) | 0x20;
  puVar3 = *(ushort **)(param_1 + 0x80);
  if (puVar3 != (ushort *)0x0) {
    *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457fcfbf FUN_1457fcfbf body=60 status=ok
// SIG undefined FUN_1457fcfbf(void)

void FUN_1457fcfbf(longlong param_1,int param_2)

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



// FUNCTION 1457fcffc FUN_1457fcffc body=866 status=ok
// SIG undefined FUN_1457fcffc(void)

void FUN_1457fcffc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  byte *pbVar2;
  ushort *puVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined ***pppuVar8;
  undefined1 *puVar9;
  undefined2 *puVar10;
  undefined1 auStack_98 [32];
  code *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar6 = FUN_144a7cdc2(param_2,&DAT_14cbe2c80);
  cVar4 = FUN_1410c4486(uVar6,1);
  *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) & 0xfb | cVar4 * '\x04';
  if (cVar4 != '\0') {
    lVar1 = param_1 + 0x1b0;
    local_78 = (code *)0x0;
    local_68 = (undefined ***)0x0;
    uVar6 = FUN_144a7cdc2(param_2,&DAT_14cbe2c60);
    FUN_1410d10d8(lVar1,uVar6,&local_78);
    if (local_78 != (code *)0x0) {
      pppuVar8 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar8 = &local_58;
      }
      (*(code *)(*pppuVar8)[2])();
    }
    puVar7 = (undefined8 *)FUN_144a7cdc2(param_2,&DAT_14cbe2c70);
    pbVar2 = (byte *)*puVar7;
    puVar9 = &DAT_149e02088;
    if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 3) == 1)) {
      puVar9 = &DAT_149e02088;
      if (*(undefined1 **)(pbVar2 + 8) != (undefined1 *)0x0) {
        puVar9 = *(undefined1 **)(pbVar2 + 8);
      }
    }
    FUN_1400b22c2(&local_78,puVar9);
    if ((code **)(param_1 + 0x348) == &local_78) {
      if (local_78 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x348) != 0) {
        FUN_1400020a8();
      }
      *(code **)(param_1 + 0x348) = local_78;
      local_78 = (code *)0x0;
      *(undefined4 *)(param_1 + 0x350) = local_70;
      *(undefined4 *)(param_1 + 0x354) = local_6c;
    }
    puVar10 = DAT_14cbe2d30;
    if (DAT_14cbe2d38 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_78,puVar10,1);
    *(code **)(param_1 + 0x1b0) = local_78;
    FUN_1410d0f68(lVar1);
    FUN_1410d0ea4(lVar1);
    FUN_1457fd360(param_1 + 0x230,lVar1);
  }
  uVar6 = FUN_144a7cdc2(param_2,&DAT_14cbe2c78);
  cVar4 = FUN_1410c4486(uVar6,1);
  *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) & 0xfd | cVar4 * '\x02';
  if (cVar4 != '\0') {
    FUN_14579b5c4(param_1 + 0x2c0);
    lVar1 = param_1 + 0xb0;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14b9d8a00;
    local_78 = FUN_144323998;
    local_50 = param_1;
    uVar6 = FUN_144a7cdc2(param_2,&DAT_14cbe2c68);
    FUN_1410d10d8(lVar1,uVar6,&local_78);
    if (local_78 != (code *)0x0) {
      pppuVar8 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar8 = &local_58;
      }
      (*(code *)(*pppuVar8)[2])();
    }
    puVar10 = DAT_14cbe2cf0;
    if (DAT_14cbe2cf8 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_78,puVar10,1);
    *(code **)(param_1 + 0xb0) = local_78;
    FUN_1410d0f68(lVar1);
    FUN_1410d0ea4(lVar1);
    FUN_1457fd360(param_1 + 0x130,lVar1);
  }
  uVar6 = FUN_144a7cdc2(param_2,&DAT_14cbe2c50);
  cVar4 = FUN_1410c4486(uVar6,0);
  *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) & 0xf7 | cVar4 << 3;
  uVar6 = FUN_144a7cdc2(param_2,&DAT_14cbe2c58);
  uVar5 = FUN_140e1edd4(uVar6,0);
  *(undefined4 *)(param_1 + 0x368) = uVar5;
  uVar6 = FUN_144a7cdc2(param_2,&DAT_14cbe2c48);
  uVar5 = FUN_140e1edd4(uVar6,0);
  *(undefined4 *)(param_1 + 0x36c) = uVar5;
  puVar3 = *(ushort **)(param_1 + 0x80);
  if (puVar3 != (ushort *)0x0) {
    *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457fd360 FUN_1457fd360 body=125 status=ok
// SIG undefined FUN_1457fd360(void)

undefined4 * FUN_1457fd360(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_144a787a6(param_1 + 6,param_2 + 6);
  FUN_144a787a6(param_1 + 10,param_2 + 10);
  FUN_144a787a6(param_1 + 0xe,param_2 + 0xe);
  FUN_144a787a6(param_1 + 0x12,param_2 + 0x12);
  FUN_1457fd3de(param_1 + 0x16,param_2 + 0x16);
  *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(param_2 + 0x1a);
  FUN_140bee9ec(param_1 + 0x1c,param_2 + 0x1c);
  return param_1;
}



// FUNCTION 1457fd3de FUN_1457fd3de body=93 status=ok
// SIG undefined FUN_1457fd3de(void)

undefined8 * FUN_1457fd3de(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d47191(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1457fd43c(param_1,iVar1);
      FUN_1410d0c19(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1457fd43c FUN_1457fd43c body=115 status=ok
// SIG undefined FUN_1457fd43c(void)

void FUN_1457fd43c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x90,8);
    iVar2 = (int)(uVar1 / 0x90);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x90,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1457fd4b0 FUN_1457fd4b0 body=328 status=ok
// SIG undefined FUN_1457fd4b0(void)

undefined4 * FUN_1457fd4b0(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1410d27c0(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  local_40[2] = *(uint *)(puVar1 + 1);
  *(undefined8 *)local_40 = *puVar1;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[8] = 0xffffffff;
  local_4c = local_48[0];
  if (local_40[2] == 0) {
    uVar5 = *local_40;
  }
  else {
    uVar5 = FUN_144a78877(*local_40,local_40[2]);
  }
  cVar3 = FUN_1410d2534(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar7 = 1;
    }
    else {
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
      local_40[9] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[8] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1410d2ad2(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1457fd5fa FUN_1457fd5fa body=71 status=ok
// SIG undefined FUN_1457fd5fa(void)

void FUN_1457fd5fa(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1457fd72a(param_1,iVar1);
  }
  FUN_1410d4112((longlong)iVar1 * 0x78 + *param_1,param_2);
  if (iVar1 != -1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}



// FUNCTION 1457fd642 FUN_1457fd642 body=109 status=ok
// SIG undefined FUN_1457fd642(void)

void FUN_1457fd642(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x78,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x78)) {
      uVar2 = uVar1 / 0x78 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x78,8);
  }
  return;
}



// FUNCTION 1457fd6b0 FUN_1457fd6b0 body=121 status=ok
// SIG undefined FUN_1457fd6b0(void)

longlong FUN_1457fd6b0(longlong param_1,longlong param_2)

{
  if (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10)) {
    FUN_144a787a6(param_1,param_2);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  }
  if (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28)) {
    FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  }
  if (*(int *)(param_1 + 0x34) != *(int *)(param_2 + 0x34)) {
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  }
  if (*(int *)(param_1 + 0x70) != *(int *)(param_2 + 0x70)) {
    FUN_1410d422e(param_1 + 0x38,param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  }
  return param_1;
}



// FUNCTION 1457fd72a FUN_1457fd72a body=143 status=ok
// SIG undefined FUN_1457fd72a(void)

void FUN_1457fd72a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x78,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x78)) {
      uVar5 = uVar4 / 0x78 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x78,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457fd7c8 FUN_1457fd7c8 body=72 status=ok
// SIG undefined FUN_1457fd7c8(void)

undefined8 * FUN_1457fd7c8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5ecae0;
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  FUN_14075380c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457fd810 FUN_1457fd810 body=57 status=ok
// SIG undefined FUN_1457fd810(void)

void FUN_1457fd810(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbabef0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbabef0 = FUN_140002ddd(FUN_1465df93c,uVar1,L"OakLevelStationTypeData");
  }
  return;
}



// FUNCTION 1457fd84a FUN_1457fd84a body=75 status=ok
// SIG undefined FUN_1457fd84a(void)

void FUN_1457fd84a(longlong *param_1,byte param_2)

{
  if (*(byte *)(param_1 + 0x4d9) != param_2) {
    *(byte *)(param_1 + 0x4d9) = param_2;
    (**(code **)(*param_1 + 0x330))(param_1,param_2 ^ 1);
    FUN_1405e47c6(param_1,(char)param_1[0x4d9]);
    FUN_1409b52ac(param_1 + 0x78);
    return;
  }
  return;
}



// FUNCTION 1457fd8ce FUN_1457fd8ce body=208 status=ok
// SIG undefined FUN_1457fd8ce(void)

void FUN_1457fd8ce(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = ((uint)(param_2[1] >> 0x14) & 0xffff ^ (uint)(param_2[1] >> 4)) * -0x7a143595;
    uVar4 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar3 = ((uint)(*param_2 >> 0x14) & 0xffff ^ (uint)(*param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    iVar2 = FUN_144a78877(uVar3 >> 0x10 ^ uVar3,uVar4 >> 0x10 ^ uVar4);
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar5 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar6 = (longlong)iVar2;
        if ((*(ulonglong *)(lVar1 + lVar6 * 0x28) == *param_2) &&
           (*(ulonglong *)(lVar1 + 8 + lVar6 * 0x28) == param_2[1])) {
          FUN_1457fdc1a(param_1);
          return;
        }
        iVar2 = *(int *)(lVar1 + lVar6 * 0x28 + 0x20);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1457fd99e FUN_1457fd99e body=361 status=ok
// SIG undefined FUN_1457fd99e(void)

undefined4 * FUN_1457fd99e(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457fdd78(param_1,local_48);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)local_40 = *param_3;
  *(undefined4 *)((longlong)local_40 + 4) = uVar1;
  *(undefined4 *)(local_40 + 1) = uVar2;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar3;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = ((uint)(local_40[1] >> 0x14) & 0xffff ^ (uint)(local_40[1] >> 4)) * -0x7a143595;
  uVar6 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = FUN_144a78877(uVar5 >> 0x10 ^ uVar5,uVar6 >> 0x10 ^ uVar6);
  cVar4 = FUN_1457fdb8c(param_1,uVar5,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0x14) = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1457fde60(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457fdb08 FUN_1457fdb08 body=132 status=ok
// SIG undefined FUN_1457fdb08(void)

void FUN_1457fdb08(longlong param_1,int param_2)

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



// FUNCTION 1457fdb8c FUN_1457fdb8c body=141 status=ok
// SIG undefined FUN_1457fdb8c(void)

undefined8 FUN_1457fdb8c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
      while( true ) {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if ((*plVar5 == *param_3) &&
           (*(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x18) == param_3[1])) break;
        iVar6 = (int)plVar5[2];
        if (iVar6 == -1) {
          return 0;
        }
      }
      lVar3 = *param_3;
      uVar1 = *(undefined4 *)((longlong)param_3 + 4);
      lVar4 = param_3[1];
      uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(int *)plVar5 = (int)lVar3;
      *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
      *(int *)(plVar5 + 1) = (int)lVar4;
      *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
      FUN_147a39f0a((int)lVar3,*param_4);
      *param_4 = iVar6;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1457fdc1a FUN_1457fdc1a body=85 status=ok
// SIG undefined FUN_1457fdc1a(void)

void FUN_1457fdc1a(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x28;
  lVar5 = (longlong)*(int *)(lVar1 + 0x24);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x28 + 0x20);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x20);
  FUN_1457fdc70();
  return;
}



// FUNCTION 1457fdc70 FUN_1457fdc70 body=78 status=ok
// SIG undefined FUN_1457fdc70(void)

void FUN_1457fdc70(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x18 + (longlong)param_2 * 0x28);
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
  FUN_1457fdd04(param_1,param_2);
  return;
}



// FUNCTION 1457fdcbe FUN_1457fdcbe body=9 status=ok
// SIG undefined FUN_1457fdcbe(void)

void FUN_1457fdcbe(longlong param_1)

{
  FUN_1457fdcc8(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 1457fdcc8 FUN_1457fdcc8 body=60 status=ok
// SIG undefined FUN_1457fdcc8(void)

void FUN_1457fdcc8(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 1457fdd04 FUN_1457fdd04 body=116 status=ok
// SIG undefined FUN_1457fdd04(void)

void FUN_1457fdd04(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 1457fdd78 FUN_1457fdd78 body=231 status=ok
// SIG undefined FUN_1457fdd78(void)

int * FUN_1457fdd78(longlong *param_1,int *param_2)

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



// FUNCTION 1457fde60 FUN_1457fde60 body=529 status=ok
// SIG undefined FUN_1457fde60(void)

void FUN_1457fde60(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar8 != uVar10);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar2 = *local_88;
        lVar11 = (longlong)iVar5;
        uVar7 = *(ulonglong *)(lVar2 + lVar11 * 0x18);
        uVar3 = *(ulonglong *)(lVar2 + 8 + lVar11 * 0x18);
        uVar8 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
        uVar10 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar8 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        iVar6 = FUN_144a78877(uVar8 >> 0x10 ^ uVar8,uVar10 >> 0x10 ^ uVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x14 + lVar11 * 0x18) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar11 * 0x18) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457fe072 FUN_1457fe072 body=55 status=ok
// SIG undefined FUN_1457fe072(void)

void FUN_1457fe072(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  FUN_1410d8888();
  uVar1 = FUN_144a7cdc2(param_2,&DAT_14cbcbc98);
  uVar2 = FUN_1410c4486(uVar1,1);
  *(undefined1 *)(param_1 + 0x10c8) = uVar2;
  return;
}



// FUNCTION 1457fe0aa FUN_1457fe0aa body=139 status=ok
// SIG undefined FUN_1457fe0aa(void)

void FUN_1457fe0aa(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1410d942e();
  if (param_2 != 0) {
    lVar1 = FUN_145b2289a(param_2);
    if (lVar1 != 0) {
      lVar2 = FUN_145b22812(param_1);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x448) != 0)) {
        local_38 = 0;
        uStack_30 = 0;
        local_28 = 0;
        FUN_140d895f4(lVar1 + 0xfb0);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457fe136 FUN_1457fe136 body=80 status=ok
// SIG undefined FUN_1457fe136(void)

void FUN_1457fe136(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    uVar1 = FUN_140338614();
    plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
      FUN_140457ffc(uVar1,param_1);
    }
  }
  FUN_14105178c(param_1,param_2);
  return;
}



// FUNCTION 1457fe188 FUN_1457fe188 body=119 status=ok
// SIG undefined FUN_1457fe188(void)

void FUN_1457fe188(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))();
    lVar3 = FUN_1410dae8a();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      plVar4 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        plVar4 = plVar1;
      }
      goto LAB_1457fe1d1;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1457fe1d1:
  *(longlong **)(param_1 + 0x1870) = plVar4;
  FUN_1457fe200(param_1,param_2);
  FUN_1410db336(param_1 + -0x400);
  return;
}



// FUNCTION 1457fe200 FUN_1457fe200 body=438 status=ok
// SIG undefined FUN_1457fe200(void)

void FUN_1457fe200(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined4 local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1 + -0x400;
  plVar2 = (longlong *)*param_2;
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 8))();
    lVar4 = FUN_140da1732();
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) {
      plVar7 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        plVar7 = plVar2;
      }
      *(longlong **)(param_1 + 0x1690) = plVar7;
      if ((*(longlong *)(param_1 + 0x16a8) != 0) && (plVar7 != (longlong *)0x0)) {
        *(char *)(*(longlong *)(param_1 + 0x16a8) + 0x17fe) = (char)plVar7[0x89];
        lVar3 = FUN_1408c3c8e(*(longlong *)(param_1 + 0x1690) + 0x420);
        if (lVar3 != 0) {
          uVar6 = *(undefined8 *)(param_1 + 0x16a8);
          uVar5 = FUN_1408c3c8e(*(longlong *)(param_1 + 0x1690) + 0x420);
          FUN_145849808(uVar6,uVar5,1);
        }
      }
      goto LAB_1457fe2d8;
    }
  }
  *(undefined8 *)(param_1 + 0x1690) = 0;
LAB_1457fe2d8:
  FUN_140656b66(param_1,param_2);
  FUN_140457ffc(param_1 + 0x1520,lVar1);
  local_48 = &LAB_145ab9426;
  local_40 = 0;
  FUN_1457fe4f6(param_1 + 0x1520,local_38,lVar1);
  uVar6 = FUN_1447210f0(lVar1);
  uVar5 = (**(code **)(*(longlong *)(param_1 + 0x1660) + 0x10))(param_1 + 0x1660);
  FUN_140c889d4(uVar6,uVar5);
  FUN_1410daec4(lVar1);
  FUN_1410dafc0(lVar1);
  FUN_1457fe40a(lVar1);
  FUN_140355e00(param_1 + 0x17a0,lVar1);
  FUN_1457fe3b8(lVar1);
  if (((*(byte *)(param_1 + -0x39b) & 0x18) == 0x10) && (*(char *)(param_1 + 0x1698) == '\0')) {
    FUN_1457b95b2(lVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457fe3b8 FUN_1457fe3b8 body=82 status=ok
// SIG undefined FUN_1457fe3b8(void)

void FUN_1457fe3b8(longlong param_1)

{
  longlong lVar1;
  
  FUN_140e39776(param_1 + 0xa98);
  if (*(longlong *)(param_1 + 0x1a90) != 0) {
    lVar1 = FUN_14035f346(*(longlong *)(param_1 + 0x1a90) + 0x388);
    if (lVar1 != 0) {
      FUN_140361c16(param_1 + 0xa98,*(undefined8 *)(lVar1 + 0x30),param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1457fe40a FUN_1457fe40a body=235 status=ok
// SIG undefined FUN_1457fe40a(void)

void FUN_1457fe40a(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x1a68) + 0x20))(param_1 + 0x1a68);
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x1c58) == 0) {
      FUN_1446f470e(&local_28,L"FaceFXComponent",1);
      local_30 = 0;
      local_38 = 0;
      lVar1 = FUN_140359d04(param_1,local_28,0x40,0);
      if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar1);
      }
      *(longlong *)(param_1 + 0x1c58) = lVar1;
    }
    lVar1 = FUN_1447210f0(param_1);
    if (((lVar1 != 0) && (*(longlong *)(param_1 + 0x1c58) != 0)) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x1c58) + 0x9c) & 1) == 0)) {
      FUN_140b506a4();
    }
    FUN_140356ec2(param_1 + 0x1a68);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457fe4f6 FUN_1457fe4f6 body=254 status=ok
// SIG undefined FUN_1457fe4f6(void)

undefined8
FUN_1457fe4f6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b3e7b60;
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
  *local_48 = &PTR_FUN_14b3e8d50;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140f4dcf0(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457fe5f6 FUN_1457fe5f6 body=239 status=ok
// SIG undefined FUN_1457fe5f6(void)

void FUN_1457fe5f6(longlong *param_1,float param_2,float param_3,char param_4)

{
  int iVar1;
  float fVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  fVar2 = 0.0;
  if (0.0 <= param_3) {
    fVar2 = param_3;
  }
  if (fVar2 <= param_2) {
    fVar2 = param_2;
  }
  *(float *)((longlong)param_1 + 0x664) = fVar2;
  fVar2 = 0.0;
  if (0.0 <= param_2) {
    fVar2 = param_2;
  }
  *(float *)(param_1 + 0xcd) = fVar2;
  if ((int)param_1[200] == 1) {
    (**(code **)(*param_1 + 0x540))();
    (**(code **)(*param_1 + 0x9f8))(param_1);
    FUN_1448215fa(param_1);
    if ((*(byte *)((longlong)param_1 + 0x9c) & 8) != 0) {
      local_38 = param_1[0x50];
      lStack_30 = param_1[0x51];
      local_28 = param_1[0x52];
      FUN_140043360(param_1 + 0x82,&local_38,1);
      if (param_4 != '\0') {
        iVar1 = (**(code **)(*param_1 + 0x570))(param_1);
        if ((iVar1 != 0) && (param_1[0x15] != 0)) {
          FUN_144907e2c(param_1,0,1,0);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457fe6e6 FUN_1457fe6e6 body=55 status=ok
// SIG undefined FUN_1457fe6e6(void)

void FUN_1457fe6e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c700 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c700 = FUN_140002ddd(FUN_1464d66c2,uVar1,L"GbxDecoCharacterBodySettings");
  }
  return;
}



// FUNCTION 1457fe71e FUN_1457fe71e body=187 status=ok
// SIG undefined FUN_1457fe71e(void)

void FUN_1457fe71e(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  float fVar4;
  
  cVar2 = FUN_1410dbfd0();
  if (cVar2 == '\0') goto LAB_1457fe78f;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x620) + 0x58);
  if (lVar1 == 0) {
LAB_1457fe7ca:
    *(undefined8 *)(param_1 + 0x620) = 0;
    bVar3 = 0;
  }
  else {
    fVar4 = *(float *)(param_1 + 0x668);
    if ((*(float *)(lVar1 + 0x60) != fVar4) || (NAN(*(float *)(lVar1 + 0x60)) || NAN(fVar4)))
    goto LAB_1457fe7ca;
    fVar4 = *(float *)(param_1 + 0x664) - fVar4;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if ((*(float *)(lVar1 + 100) != fVar4 + fVar4) ||
       (NAN(*(float *)(lVar1 + 100)) || NAN(fVar4 + fVar4))) goto LAB_1457fe7ca;
    bVar3 = *(byte *)(param_1 + 0x62c) & 0x10;
  }
  *(byte *)(param_1 + 0x62c) = *(byte *)(param_1 + 0x62c) & 0xef | bVar3;
LAB_1457fe78f:
  FUN_1457fe8be(param_1);
  if ((*(byte *)(param_1 + 0x62c) & 0x10) != 0) {
    return;
  }
  FUN_1457fe7d9(param_1 + 0x620,*(undefined4 *)(param_1 + 0x668),*(undefined4 *)(param_1 + 0x664));
  return;
}



// FUNCTION 1457fe7d9 FUN_1457fe7d9 body=228 status=ok
// SIG undefined FUN_1457fe7d9(void)

void FUN_1457fe7d9(longlong *param_1,float param_2,float param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(*param_1 + 0x58);
  if (lVar1 == 0) {
    *param_1 = 0;
  }
  else {
    param_3 = param_3 - param_2;
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    FUN_144a78e48(&DAT_14c846480);
    local_68 = DAT_14c846480;
    uStack_60 = DAT_14c846488;
    local_58 = (undefined4)DAT_14c846490;
    uStack_54 = DAT_14c846490._4_4_;
    uStack_50 = (undefined4)DAT_14c846498;
    uStack_4c = DAT_14c846498._4_4_;
    FUN_1448052ee(&local_68,&local_80);
    *(undefined8 *)(lVar1 + 0x58) = local_70;
    *(undefined8 *)(lVar1 + 0x48) = local_80;
    *(undefined8 *)(lVar1 + 0x50) = uStack_78;
    uVar5 = DAT_14c8464b0;
    uVar4 = DAT_14c8464a8._4_4_;
    uVar3 = (undefined4)DAT_14c8464a8;
    uVar2 = DAT_14c8464a0._4_4_;
    *(undefined4 *)(lVar1 + 0x30) = (undefined4)DAT_14c8464a0;
    *(undefined4 *)(lVar1 + 0x34) = uVar2;
    *(undefined4 *)(lVar1 + 0x38) = uVar3;
    *(undefined4 *)(lVar1 + 0x3c) = uVar4;
    *(undefined8 *)(lVar1 + 0x40) = uVar5;
    *(float *)(lVar1 + 0x60) = param_2;
    *(float *)(lVar1 + 100) = param_3 + param_3;
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457fe8be FUN_1457fe8be body=559 status=ok
// SIG undefined FUN_1457fe8be(void)

void FUN_1457fe8be(longlong param_1)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  undefined1 *local_38;
  longlong *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x620) == 0) ||
     ((*(uint *)(*(longlong *)(param_1 + 0x620) + 8) >> 0x1e & 1) != 0)) {
    local_40 = 0;
    local_48 = 0;
    lVar3 = FUN_140c9d4a9(param_1,0,0x40,0);
    if ((lVar3 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar3);
    }
    *(longlong *)(param_1 + 0x620) = lVar3;
    if (*(int *)(param_1 + 0xc) <= DAT_14c9647bc) {
      uVar2 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      FUN_1447f71cc(lVar3,0x40000000);
      lVar3 = *(longlong *)(param_1 + 0x620);
    }
    lVar5 = 0;
    FUN_1406555d4(lVar3,param_1,0);
    lVar3 = *(longlong *)(param_1 + 0x620);
    uVar2 = *(uint *)(lVar3 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1a & 1) != 0) {
      lVar5 = FUN_14065579a(&DAT_14c9640e8);
      lVar3 = *(longlong *)(param_1 + 0x620);
      if (lVar5 != 0) {
        uVar2 = *(uint *)(lVar3 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar3 = 0;
        }
        FUN_14482b126(lVar3,0x4000000);
        lVar3 = *(longlong *)(param_1 + 0x620);
      }
    }
    *(undefined1 *)(lVar3 + 0x31) = 2;
    FUN_1457febe8(param_1);
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x620) + 0xb9);
    *pbVar1 = *pbVar1 | 8;
    *(byte *)(param_1 + 0x62c) = *(byte *)(param_1 + 0x62c) & 0xef;
    lVar3 = *(longlong *)(param_1 + 0x620);
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar3);
    }
    local_28 = 0;
    FUN_14485c47a(&local_28,lVar3);
    *(longlong *)(param_1 + 0x410) = local_28;
    if (*(longlong *)(param_1 + 0x548) != 0) {
      local_38 = &LAB_148813732;
      local_30 = &local_28;
      local_28 = param_1;
      uVar4 = FUN_1457b57b4(param_1 + 0x410);
      FUN_140e2683c(uVar4,&local_38);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457feaee FUN_1457feaee body=249 status=ok
// SIG undefined FUN_1457feaee(void)

void FUN_1457feaee(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  undefined8 uVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  
  cVar5 = FUN_1410dbfd0();
  if (cVar5 == '\0') goto LAB_1457feaff;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x620) + 0x38);
  if (lVar2 == 0) {
LAB_1457febab:
    *(undefined8 *)(param_1 + 0x620) = 0;
    bVar6 = *(byte *)(param_1 + 0x62c);
    bVar7 = 0;
  }
  else {
    uVar8 = -(uint)(*(float *)(param_1 + 0x660) < 0.0001);
    fVar3 = (float)(~uVar8 & (uint)*(float *)(param_1 + 0x660) | uVar8 & 0x3dcccccd);
    fVar1 = *(float *)(lVar2 + 0x48);
    if ((fVar1 != fVar3) || (NAN(fVar1) || NAN(fVar3))) goto LAB_1457febab;
    bVar6 = *(byte *)(param_1 + 0x62c);
    bVar7 = bVar6 & 0x10;
  }
  *(byte *)(param_1 + 0x62c) = bVar6 & 0xef | bVar7;
LAB_1457feaff:
  FUN_1457fed4a(param_1);
  if ((*(byte *)(param_1 + 0x62c) & 0x10) == 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x620) + 0x38);
    if (lVar2 == 0) {
      *(undefined8 *)(param_1 + 0x620) = 0;
    }
    else {
      fVar1 = *(float *)(param_1 + 0x660);
      uVar8 = -(uint)(fVar1 < 0.0001);
      *(undefined8 *)(lVar2 + 0x40) = DAT_14c8464f0;
      uVar4 = DAT_14c8464e8;
      *(undefined8 *)(lVar2 + 0x30) = DAT_14c8464e0;
      *(undefined8 *)(lVar2 + 0x38) = uVar4;
      *(uint *)(lVar2 + 0x48) = ~uVar8 & (uint)fVar1 | uVar8 & 0x3dcccccd;
    }
  }
  return;
}



// FUNCTION 1457febe8 FUN_1457febe8 body=353 status=ok
// SIG undefined FUN_1457febe8(void)

void FUN_1457febe8(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [40];
  undefined **local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined2 local_78;
  undefined4 local_70;
  undefined ***local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = *(longlong *)(param_1 + 0x620);
  local_68 = &local_90;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 2;
  local_78 = 0x3ff;
  local_70 = 6;
  local_90 = &PTR_FUN_14a1dee70;
  local_60 = DAT_14c8464e0;
  uStack_58 = DAT_14c8464e8;
  local_50 = DAT_14c8464f0;
  uStack_48 = (undefined4)DAT_14c8464f8;
  uStack_44 = DAT_14c8464f8._4_4_;
  uStack_40 = (undefined4)DAT_14c846500;
  uStack_3c = DAT_14c846500._4_4_;
  uStack_38 = DAT_14c846508;
  local_30 = &DAT_3f8000003f800000;
  iVar2 = *(int *)(lVar3 + 0x60);
  *(uint *)(lVar3 + 0x60) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 100) < iVar2 + 1U) {
    FUN_1407e1e9e((longlong *)(lVar3 + 0x58),iVar2);
  }
  lVar3 = *(longlong *)(lVar3 + 0x58);
  lVar4 = (longlong)iVar2 * 0x68;
  *(undefined ***)(lVar3 + lVar4) = &PTR_FUN_14a1dee50;
  *(undefined4 *)(lVar3 + 8 + lVar4) = local_88;
  *(ulonglong *)(lVar3 + 0xc + lVar4) = CONCAT44(uStack_80,uStack_84);
  *(undefined4 *)(lVar3 + 0x14 + lVar4) = uStack_7c;
  *(byte *)(lVar3 + 0x18 + lVar4) = *(byte *)(lVar3 + 0x18 + lVar4) & 0xfe | (byte)local_78 & 1;
  *(undefined1 *)(lVar3 + 0x19 + lVar4) = local_78._1_1_;
  *(undefined4 *)(lVar3 + 0x20 + lVar4) = 6;
  *(longlong *)(lVar3 + 0x28 + lVar4) = lVar3 + lVar4;
  *(undefined ***)(lVar3 + lVar4) = &PTR_FUN_14a1dee70;
  puVar1 = (undefined4 *)(lVar3 + 0x30 + lVar4);
  *puVar1 = (undefined4)local_60;
  puVar1[1] = local_60._4_4_;
  puVar1[2] = (undefined4)uStack_58;
  puVar1[3] = uStack_58._4_4_;
  puVar1 = (undefined4 *)(lVar3 + 0x40 + lVar4);
  *puVar1 = (undefined4)local_50;
  puVar1[1] = local_50._4_4_;
  puVar1[2] = uStack_48;
  puVar1[3] = uStack_44;
  puVar1 = (undefined4 *)(lVar3 + 0x50 + lVar4);
  *puVar1 = uStack_40;
  puVar1[1] = uStack_3c;
  puVar1[2] = (undefined4)uStack_38;
  puVar1[3] = uStack_38._4_4_;
  *(undefined1 **)(lVar3 + 0x60 + lVar4) = local_30;
  FUN_1410dc120();
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457fed4a FUN_1457fed4a body=581 status=ok
// SIG undefined FUN_1457fed4a(void)

void FUN_1457fed4a(longlong param_1)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  undefined1 *local_38;
  longlong *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x620) == 0) ||
     ((*(uint *)(*(longlong *)(param_1 + 0x620) + 8) >> 0x1e & 1) != 0)) {
    local_40 = 0;
    local_48 = 0;
    lVar3 = FUN_140c9d4a9(param_1,0,0x40,0);
    if ((lVar3 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar3);
    }
    *(longlong *)(param_1 + 0x620) = lVar3;
    if (*(int *)(param_1 + 0xc) <= DAT_14c9647bc) {
      uVar2 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      FUN_1447f71cc(lVar3,0x40000000);
      lVar3 = *(longlong *)(param_1 + 0x620);
    }
    lVar5 = 0;
    FUN_1406555d4(lVar3,param_1,0);
    lVar3 = *(longlong *)(param_1 + 0x620);
    uVar2 = *(uint *)(lVar3 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1a & 1) != 0) {
      lVar5 = FUN_14065579a(&DAT_14c9640e8);
      lVar3 = *(longlong *)(param_1 + 0x620);
      if (lVar5 != 0) {
        uVar2 = *(uint *)(lVar3 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar3 = 0;
        }
        FUN_14482b126(lVar3,0x4000000);
        lVar3 = *(longlong *)(param_1 + 0x620);
      }
    }
    *(undefined1 *)(lVar3 + 0x31) = 2;
    FUN_1457fef90(param_1);
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x620) + 0xb9);
    *pbVar1 = *pbVar1 | 8;
    *(byte *)(param_1 + 0x62c) = *(byte *)(param_1 + 0x62c) & 0xef;
    lVar3 = *(longlong *)(param_1 + 0x620);
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar3);
    }
    local_28 = 0;
    FUN_14485c47a(&local_28,lVar3);
    *(longlong *)(param_1 + 0x410) = local_28;
    if (*(longlong *)(param_1 + 0x548) != 0) {
      local_38 = &LAB_1488138aa;
      local_30 = &local_28;
      local_28 = param_1;
      uVar4 = FUN_1457b57b4(param_1 + 0x410);
      FUN_140e2683c(uVar4,&local_38);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457fef90 FUN_1457fef90 body=294 status=ok
// SIG undefined FUN_1457fef90(void)

void FUN_1457fef90(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined **local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined2 local_60;
  undefined4 local_58;
  undefined ***local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0x620);
  local_50 = &local_78;
  local_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_60 = 0x3ff;
  local_58 = 6;
  local_78 = &PTR_FUN_14a418310;
  local_48 = (undefined4)DAT_14c8464e0;
  uStack_44 = DAT_14c8464e0._4_4_;
  uStack_40 = (undefined4)DAT_14c8464e8;
  uStack_3c = DAT_14c8464e8._4_4_;
  local_38 = DAT_14c8464f0;
  local_30 = 0x3f800000;
  iVar2 = *(int *)(lVar3 + 0x40);
  *(uint *)(lVar3 + 0x40) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x44) < iVar2 + 1U) {
    FUN_140e25fd0((longlong *)(lVar3 + 0x38),iVar2);
  }
  lVar3 = *(longlong *)(lVar3 + 0x38);
  lVar4 = (longlong)iVar2 * 0x50;
  *(undefined ***)(lVar3 + lVar4) = &PTR_FUN_14a1dee50;
  *(undefined4 *)(lVar3 + 8 + lVar4) = local_70;
  *(ulonglong *)(lVar3 + 0xc + lVar4) = CONCAT44(uStack_68,uStack_6c);
  *(undefined4 *)(lVar3 + 0x14 + lVar4) = uStack_64;
  *(byte *)(lVar3 + 0x18 + lVar4) = *(byte *)(lVar3 + 0x18 + lVar4) & 0xfe | (byte)local_60 & 1;
  *(undefined1 *)(lVar3 + 0x19 + lVar4) = local_60._1_1_;
  *(undefined4 *)(lVar3 + 0x20 + lVar4) = 6;
  *(longlong *)(lVar3 + 0x28 + lVar4) = lVar3 + lVar4;
  *(undefined ***)(lVar3 + lVar4) = &PTR_FUN_14a418310;
  puVar1 = (undefined4 *)(lVar3 + 0x30 + lVar4);
  *puVar1 = local_48;
  puVar1[1] = uStack_44;
  puVar1[2] = uStack_40;
  puVar1[3] = uStack_3c;
  puVar1 = (undefined4 *)(lVar3 + 0x3c + lVar4);
  *puVar1 = uStack_3c;
  puVar1[1] = (undefined4)local_38;
  puVar1[2] = local_38._4_4_;
  puVar1[3] = local_30;
  FUN_1410dc120();
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ff0b8 FUN_1457ff0b8 body=40 status=ok
// SIG undefined FUN_1457ff0b8(void)

undefined8 FUN_1457ff0b8(undefined8 param_1,int param_2)

{
  thunk_FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457ff0e0 thunk_FUN_140bc97f4 body=5 status=ok
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



// FUNCTION 1457ff0e6 FUN_1457ff0e6 body=25 status=ok
// SIG undefined FUN_1457ff0e6(void)

undefined8 FUN_1457ff0e6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1457ff122 FUN_1457ff122 body=31 status=ok
// SIG undefined FUN_1457ff122(void)

undefined8 FUN_1457ff122(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457ff150 FUN_1457ff150 body=31 status=ok
// SIG undefined FUN_1457ff150(void)

undefined8 FUN_1457ff150(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457ff17e FUN_1457ff17e body=31 status=ok
// SIG undefined FUN_1457ff17e(void)

undefined8 FUN_1457ff17e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457ff1ac FUN_1457ff1ac body=31 status=ok
// SIG undefined FUN_1457ff1ac(void)

undefined8 FUN_1457ff1ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457ff1da FUN_1457ff1da body=31 status=ok
// SIG undefined FUN_1457ff1da(void)

undefined8 FUN_1457ff1da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457ff1f9 FUN_1457ff1f9 body=35 status=ok
// SIG undefined FUN_1457ff1f9(void)

void FUN_1457ff1f9(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1457ff21c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd81ad0;
  return;
}



// FUNCTION 1457ff21c FUN_1457ff21c body=32 status=ok
// SIG undefined FUN_1457ff21c(void)

undefined8 * FUN_1457ff21c(undefined8 *param_1)

{
  FUN_1457ff23c();
  *param_1 = &PTR_FUN_14aef7cb0;
  return param_1;
}



// FUNCTION 1457ff23c FUN_1457ff23c body=40 status=ok
// SIG undefined FUN_1457ff23c(void)

undefined8 * FUN_1457ff23c(undefined8 *param_1)

{
  FUN_140e6d9f4();
  *param_1 = &PTR_FUN_14aed2190;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 1457ff272 FUN_1457ff272 body=54 status=ok
// SIG undefined FUN_1457ff272(void)

undefined8 * FUN_1457ff272(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457ff2b6 FUN_1457ff2b6 body=54 status=ok
// SIG undefined FUN_1457ff2b6(void)

undefined8 * FUN_1457ff2b6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457ff2fa FUN_1457ff2fa body=54 status=ok
// SIG undefined FUN_1457ff2fa(void)

undefined8 * FUN_1457ff2fa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457ff33e FUN_1457ff33e body=40 status=ok
// SIG undefined FUN_1457ff33e(void)

undefined8 FUN_1457ff33e(undefined8 param_1,int param_2)

{
  FUN_1457ff366();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457ff366 FUN_1457ff366 body=65 status=ok
// SIG undefined FUN_1457ff366(void)

void FUN_1457ff366(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b9376c0;
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
                    /* WARNING: Could not recover jumptable at 0x0001457ff3a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1457ff3b6 FUN_1457ff3b6 body=40 status=ok
// SIG undefined FUN_1457ff3b6(void)

undefined8 FUN_1457ff3b6(undefined8 param_1,int param_2)

{
  FUN_1457ff3de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457ff3de FUN_1457ff3de body=65 status=ok
// SIG undefined FUN_1457ff3de(void)

void FUN_1457ff3de(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b939150;
  plVar3 = (longlong *)param_1[0xb];
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
                    /* WARNING: Could not recover jumptable at 0x0001457ff41b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1457ff420 FUN_1457ff420 body=124 status=ok
// SIG undefined FUN_1457ff420(void)

void FUN_1457ff420(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x100);
  FUN_1410df32e(param_2);
  *param_2 = &PTR_FUN_14b1b4460;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined8 *)((longlong)param_2 + 0x89) = 0;
  *(undefined8 *)((longlong)param_2 + 0x91) = 0;
  *(undefined8 *)((longlong)param_2 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa1) = 0;
  FUN_14044066a(param_2 + 0x16,0x11,7);
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  return;
}



// FUNCTION 1457ff49c FUN_1457ff49c body=123 status=ok
// SIG undefined FUN_1457ff49c(void)

undefined8
FUN_1457ff49c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  uVar1 = FUN_144a6c4d8();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  if ((lVar2 != 0) && (plVar3 = (longlong *)FUN_1405f1c0c(lVar2), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x328))(plVar3,lVar2,param_2,param_3,param_4,param_5,param_1);
    return 1;
  }
  return 0;
}



// FUNCTION 1457ff574 FUN_1457ff574 body=179 status=ok
// SIG undefined FUN_1457ff574(void)

bool FUN_1457ff574(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
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



// FUNCTION 1457ff636 FUN_1457ff636 body=1052 status=ok
// SIG undefined FUN_1457ff636(void)

void FUN_1457ff636(longlong param_1,longlong *param_2,undefined8 param_3,byte param_4)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 ***pppuVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_c0 [24];
  undefined1 local_a8 [4];
  undefined8 local_a4;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulonglong local_80;
  undefined8 **local_78 [3];
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar4 = (longlong *)FUN_140944864(param_3);
  if (plVar4 == (longlong *)0x0) goto LAB_1457ff6b8;
  lVar5 = (**(code **)(*plVar4 + 8))(plVar4);
  lVar6 = FUN_14086ad12();
  if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_1457ff6b8;
  bVar13 = *(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30;
  plVar10 = (longlong *)0x0;
  if (bVar13) {
    plVar10 = plVar4;
  }
  if ((bVar13 & param_4) != 1) goto LAB_1457ff6b8;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    cVar2 = FUN_1457ffa53(param_2,param_3);
    if (cVar2 != '\0') {
      lVar5 = FUN_140d72879();
      local_a8[0] = 0;
      local_80 = local_80 & 0xffffffff00000000;
      FUN_1456bb102(local_a8,param_2);
      FUN_1448729ea(lVar5 + 0xa0,local_78,local_a8);
      uVar3 = FUN_14005fbd2(local_78,0);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar1 != (code *)0x0) {
        pppuVar12 = local_78;
        if (0x18 < local_60) {
          pppuVar12 = (undefined8 ***)local_78[0];
        }
        (*pcVar1)(pppuVar12);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(local_78[0]);
      }
      FUN_144a5ac3a(local_a8);
      local_a8[0] = 0;
      local_80 = local_80 & 0xffffffff00000000;
      FUN_1456bb102(local_a8,param_2);
      FUN_1448729ea(plVar10 + 0x1d,local_78,local_a8);
      fVar14 = (float)FUN_144a7b41a(local_78,0x3f800000);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar1 != (code *)0x0) {
        pppuVar12 = local_78;
        if (0x18 < local_60) {
          pppuVar12 = (undefined8 ***)local_78[0];
        }
        (*pcVar1)(pppuVar12);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(local_78[0]);
      }
      FUN_144a5ac3a(local_a8);
      if ((longlong)(int)uVar3 < 0) {
        fVar15 = (float)((ulonglong)(uVar3 & 1) | (ulonglong)(longlong)(int)uVar3 >> 1);
        fVar15 = fVar15 + fVar15;
      }
      else {
        fVar15 = (float)(int)uVar3;
      }
      uVar7 = (ulonglong)(fVar14 * fVar15);
      uVar7 = (longlong)(fVar14 * fVar15 - 9.223372e+18) & (longlong)uVar7 >> 0x3f | uVar7;
      if (uVar7 != 0) {
        uVar8 = FUN_1401e6c61();
        FUN_1410dfe5a(param_2,uVar8,uVar7);
      }
    }
  }
  plVar4 = (longlong *)(**(code **)(*param_2 + 0x5f0))(param_2);
  if (plVar4 == (longlong *)0x0) goto LAB_1457ff6b8;
  cVar2 = (**(code **)(*plVar4 + 0x700))(plVar4);
  if (cVar2 == '\0') goto LAB_1457ff6b8;
  lVar5 = FUN_14030dc32();
  if (lVar5 == 0) goto LAB_1457ff6b8;
  lVar6 = *(longlong *)(lVar5 + 0x468);
  if (lVar6 == 0) {
    uVar8 = FUN_140067708();
    lVar6 = FUN_14477b664(uVar8);
    *(longlong *)(lVar5 + 0x468) = lVar6;
  }
  lVar11 = *(longlong *)(lVar5 + 0x460);
  if (*(longlong *)(lVar5 + 0x470) == 0) {
    if ((lVar11 == 0) || (lVar6 == 0)) goto LAB_1457ff6b8;
    plVar10 = *(longlong **)(lVar6 + 0xb8);
    if (plVar10 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar10 + 0x108))(plVar10);
      if (cVar2 != '\0') {
        uVar8 = (**(code **)(*plVar10 + 0x110))(plVar10);
        lVar6 = FUN_144aff482(uVar8,lVar5 + 0x460);
        *(longlong *)(lVar5 + 0x470) = lVar6;
        if (lVar6 == 0) goto LAB_1457ff6b8;
        lVar11 = *(longlong *)(lVar5 + 0x460);
        lVar6 = *(longlong *)(lVar5 + 0x468);
        goto LAB_1457ff947;
      }
    }
    *(undefined8 *)(lVar5 + 0x470) = 0;
  }
  else {
LAB_1457ff947:
    uVar8 = FUN_14477b664(lVar6);
    uVar9 = FUN_14477b664(uVar8);
    uVar8 = *(undefined8 *)(lVar5 + 0x470);
    local_a8[0] = 0;
    local_a4 = 0;
    local_98 = lVar11;
    uVar9 = FUN_14477b664(uVar9);
    local_90 = FUN_14477b664(uVar9);
    local_80 = 0;
    local_c8 = 0;
    local_88 = uVar8;
    FUN_140b32deb(local_c0,plVar4,local_a8,0);
    FUN_144a7b030(local_c0);
    if ((local_80 != 0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(local_80 + 0x50));
    }
  }
LAB_1457ff6b8:
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ffa53 FUN_1457ffa53 body=207 status=ok
// SIG undefined FUN_1457ffa53(void)

ulonglong FUN_1457ffa53(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [35];
  undefined1 local_25;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_140944864(param_2);
  if (lVar1 != 0) {
    uVar2 = FUN_14042ada0(param_1);
    lVar3 = FUN_140e13f44(uVar2);
    if (lVar3 != 0) {
      local_24 = FUN_141068a6c(param_1);
      plVar4 = (longlong *)FUN_140d17acc(lVar3);
      if (plVar4 != (longlong *)0x0) {
        local_24 = 0xffffffff;
        lVar3 = (**(code **)(*plVar4 + 0x30))(plVar4,lVar1 + 0x98);
        uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),lVar3 == 0);
        if (lVar3 == 0) {
          local_25 = 0xff;
          (**(code **)(*plVar4 + 0x40))(plVar4,lVar1 + 0x98,&local_25,1);
        }
        goto LAB_1457ffafe;
      }
    }
  }
  uVar5 = 0;
LAB_1457ffafe:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ffb32 FUN_1457ffb32 body=40 status=ok
// SIG undefined FUN_1457ffb32(void)

undefined8 FUN_1457ffb32(undefined8 param_1,int param_2)

{
  FUN_1457ffb5a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457ffb5a FUN_1457ffb5a body=60 status=ok
// SIG undefined FUN_1457ffb5a(void)

void FUN_1457ffb5a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7b8590;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1457ffba4 FUN_1457ffba4 body=158 status=ok
// SIG undefined FUN_1457ffba4(void)

bool FUN_1457ffba4(longlong param_1,undefined8 param_2)

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



// FUNCTION 1457ffc44 FUN_1457ffc44 body=61 status=ok
// SIG undefined FUN_1457ffc44(void)

void FUN_1457ffc44(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 8);
    *(undefined1 *)(param_1 + 0xf5) = 0;
    if (*(char *)(param_2 + 8) != '\x01') {
      FUN_140635702(param_1,1);
      return;
    }
    uVar1 = FUN_1410e2a25();
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
  }
  return;
}



// FUNCTION 1457ffc82 FUN_1457ffc82 body=244 status=ok
// SIG undefined FUN_1457ffc82(void)

void FUN_1457ffc82(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) goto LAB_1457ffd2f;
  FUN_1447325ac(param_2 + 8,&local_38,1);
  FUN_1402815f4(param_1,&local_48);
  lVar3 = *(longlong *)(local_48 + 0x310);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x50));
  *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  FUN_1457ffd78(param_1,&local_38,*(undefined1 *)(param_2 + 0x30),lVar3 + 0x28);
  if (local_38 == *(longlong *)(lVar3 + 0x18)) {
    if (*(int *)(lVar3 + 0x20) == 0) {
      iVar4 = 1;
      goto LAB_1457ffd1e;
    }
  }
  else {
    iVar4 = *(int *)(lVar3 + 0x20) + 1;
LAB_1457ffd1e:
    *(longlong *)(lVar3 + 0x18) = local_38;
    *(int *)(lVar3 + 0x20) = iVar4;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x50));
LAB_1457ffd2f:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ffd78 FUN_1457ffd78 body=285 status=ok
// SIG undefined FUN_1457ffd78(void)

void FUN_1457ffd78(longlong param_1,longlong *param_2,undefined1 param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_140059518(param_1 + 0x44);
  if ((lVar2 != 0) && (lVar2 = FUN_14120f7e6(lVar2), lVar2 != 0)) {
    if (*(char *)(param_1 + 0x100) == '\0') {
      FUN_145801040(param_1);
    }
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      if (*(longlong *)(param_1 + 0xc0) == *param_2) {
        return;
      }
      FUN_1457ffece(param_1,1);
      FUN_1458008a0(param_1,(longlong *)(param_1 + 0xc0),lVar2);
    }
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined1 *)(param_1 + 200) = param_3;
    if (*param_2 == 0) {
      iVar1 = *(int *)((longlong)param_4 + 0xc);
      FUN_141033307(*param_4,*(undefined4 *)(param_4 + 1));
      *(undefined4 *)(param_4 + 1) = 0;
      if ((iVar1 < 0) && (*(int *)((longlong)param_4 + 0xc) != 0)) {
        FUN_148e54a3a(param_4);
      }
      *(int *)(param_4 + 3) = *(int *)(param_4 + 3) + 1;
      *(int *)(param_4 + 2) = *(int *)(param_4 + 2) + 1;
    }
    else {
      FUN_1457ffe96(param_1);
      FUN_145800066(param_1,param_2,lVar2,param_4);
    }
    *(longlong *)(param_1 + 0xc0) = *param_2;
    if (*param_2 == DAT_14cbd7bd8) {
      FUN_1410e7e0e(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1457ffe96 FUN_1457ffe96 body=56 status=ok
// SIG undefined FUN_1457ffe96(void)

void FUN_1457ffe96(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140059518(param_1 + 0x44);
  if (lVar1 != 0) {
    lVar1 = FUN_14120f7e6(lVar1);
    if (lVar1 != 0) {
      FUN_1410e2aa2(lVar1);
    }
  }
  *(undefined1 *)(param_1 + 0xa0) = 0;
  return;
}



// FUNCTION 1457ffece FUN_1457ffece body=103 status=ok
// SIG undefined FUN_1457ffece(void)

void FUN_1457ffece(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_140059518(param_1 + 0x44);
  if (lVar2 != 0) {
    lVar2 = FUN_14120f7e6(lVar2);
    if (lVar2 != 0) {
      cVar1 = FUN_14584074c(lVar2);
      FUN_1410e2a54(lVar2,param_2);
      if ((cVar1 == '\0') && (*(char *)(param_1 + 0xa0) != '\0')) {
        FUN_148e4c8f0(param_1);
        *(undefined1 *)(param_1 + 0xa0) = 0;
      }
    }
  }
  return;
}



// FUNCTION 1457fff36 FUN_1457fff36 body=303 status=ok
// SIG undefined FUN_1457fff36(void)

void FUN_1457fff36(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  byte local_58 [40];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    lVar1 = FUN_140059518(param_1 + 0x44);
    if (lVar1 != 0) {
      lVar1 = FUN_14120f7e6(lVar1);
      if (lVar1 != 0) {
        plVar2 = (longlong *)FUN_1410e70dc(lVar1,(longlong *)(param_2 + 8));
        if (plVar2 != (longlong *)0x0) {
          FUN_1410e2b8a(local_58,plVar2 + 0x22);
          if ((~local_58[0] & 3) == 0) {
            lVar1 = FUN_1410e4a74();
            if ((*(int *)(plVar2[2] + 0x38) < *(int *)(lVar1 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
                lVar1 + 0x30)) {
              lVar1 = FUN_14598396a();
              if ((*(int *)(lVar1 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
                  lVar1 + 0x30)) {
                FUN_145800ebc(plVar2,*(undefined8 *)(param_2 + 0x18));
              }
            }
            else {
              lVar1 = *(longlong *)(param_2 + 8);
              if ((lVar1 == DAT_14cbd7bb0) || (lVar1 == DAT_14cbd7bb8)) {
                FUN_148e4bdf8(param_1,plVar2,param_2);
              }
              else {
                (**(code **)(*plVar2 + 0x318))(plVar2,*(undefined4 *)(param_2 + 0x14));
              }
            }
          }
          FUN_1410e2b42(local_58);
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



// FUNCTION 145800066 FUN_145800066 body=525 status=ok
// SIG undefined FUN_145800066(void)

void FUN_145800066(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  void *_Src;
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = FUN_1402735c8();
  FUN_145800274(param_4);
  *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
  *(int *)(param_4 + 0x18) = *(int *)(param_4 + 0x18) + 1;
  lVar8 = *param_2;
  if (*(int *)(lVar2 + 0x8c8) != *(int *)(lVar2 + 0x8f4)) {
    uVar1 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar5 = (uint)lVar8 & 0xffff;
    lVar3 = lVar2 + 0x8f8;
    if (*(longlong *)(lVar2 + 0x900) != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x900);
    }
    iVar6 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(lVar2 + 0x908) - 1U &
                             (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar5) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)(lVar2 + 0x8c0);
      iVar7 = iVar6;
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar7 * 0x38) == lVar8) goto LAB_145800133;
        iVar7 = *(int *)((longlong)iVar7 * 0x38 + lVar2 + 0x30);
      } while (iVar7 != -1);
    }
  }
  lVar8 = FUN_148b0252a(param_3);
  goto LAB_1458001a9;
  while (iVar6 = *(int *)(lVar3 + 0x30), iVar6 != -1) {
LAB_145800133:
    lVar3 = lVar2 + (longlong)iVar6 * 0x38;
    if (*(longlong *)(lVar2 + (longlong)iVar6 * 0x38) == lVar8) goto LAB_145800148;
  }
  lVar3 = 0;
LAB_145800148:
  local_68 = *(undefined8 *)(lVar3 + 8);
  local_60 = *(undefined4 *)(lVar3 + 0x10);
  uStack_5c = *(undefined4 *)(lVar3 + 0x14);
  uStack_58 = *(undefined4 *)(lVar3 + 0x18);
  uStack_54 = *(undefined4 *)(lVar3 + 0x1c);
  local_50 = (void *)0x0;
  local_48 = *(int *)(lVar3 + 0x28);
  lVar8 = (longlong)local_48;
  _Src = *(void **)(lVar3 + 0x20);
  if (lVar8 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar8 * 2);
  }
  uVar4 = FUN_1410e4d26(&local_68);
  lVar8 = FUN_145800746(param_3,uVar4);
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1458001a9:
  if (lVar8 != 0) {
    local_70 = lVar8;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar8);
    }
    FUN_1410e2d42(param_1,&local_70,param_4);
    FUN_1458003e0(param_1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145800274 FUN_145800274 body=112 status=ok
// SIG undefined FUN_145800274(void)

void FUN_145800274(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)-iVar1) {
      FUN_145800b6a(param_1,iVar1);
    }
    FUN_1410e361e((longlong)iVar1 * 0x168 + *param_1,-iVar1);
    return;
  }
  if (iVar1 == 0) {
    return;
  }
  FUN_145800322(param_1,iVar1);
  FUN_1458002e4(param_1);
  return;
}



// FUNCTION 1458002e4 FUN_1458002e4 body=62 status=ok
// SIG undefined FUN_1458002e4(void)

void FUN_1458002e4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145800372(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x168,8);
  }
  return;
}



// FUNCTION 145800322 FUN_145800322 body=79 status=ok
// SIG undefined FUN_145800322(void)

void FUN_145800322(undefined8 *param_1,uint param_2)

{
  void *_Dst;
  uint uVar1;
  
  _Dst = (void *)*param_1;
  FUN_141033307(_Dst);
  uVar1 = param_2;
  if (*(int *)(param_1 + 1) - param_2 != 0) {
    memmove(_Dst,(void *)((ulonglong)param_2 * 0x168 + (longlong)_Dst),
            (longlong)(int)(*(int *)(param_1 + 1) - param_2) * 0x168);
    uVar1 = *(uint *)(param_1 + 1);
  }
  *(uint *)(param_1 + 1) = uVar1 - param_2;
  return;
}



// FUNCTION 145800372 FUN_145800372 body=109 status=ok
// SIG undefined FUN_145800372(void)

ulonglong FUN_145800372(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x168) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x168,8);
      uVar1 = uVar1 / 0x168;
    }
  }
  return uVar1;
}



// FUNCTION 1458003e0 FUN_1458003e0 body=638 status=ok
// SIG undefined FUN_1458003e0(void)

void FUN_1458003e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  char *pcVar3;
  uint uVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar8 = FUN_140059518(param_1 + 0x44);
  if (lVar8 == 0) goto LAB_14580059c;
  lVar8 = FUN_14120f7e6(lVar8);
  if (lVar8 == 0) goto LAB_14580059c;
  lVar9 = FUN_1402735c8();
  lVar12 = *param_2;
  if (*(int *)(lVar9 + 0x8c8) != *(int *)(lVar9 + 0x8f4)) {
    uVar4 = (uint)((ulonglong)lVar12 >> 0x10);
    uVar13 = (uint)lVar12 & 0xffff;
    lVar11 = lVar9 + 0x8f8;
    if (*(longlong *)(lVar9 + 0x900) != 0) {
      lVar11 = *(longlong *)(lVar9 + 0x900);
    }
    iVar7 = *(int *)(lVar11 + (ulonglong)
                              (*(int *)(lVar9 + 0x908) - 1U &
                              (int)((ulonglong)lVar12 >> 0x20) + ((uint)lVar12 << 0x10 | uVar13) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar13 >> 4)) * 4);
    if (iVar7 != -1) {
      lVar9 = *(longlong *)(lVar9 + 0x8c0);
      iVar14 = iVar7;
      do {
        if (*(longlong *)(lVar9 + (longlong)iVar14 * 0x38) == lVar12) goto LAB_1458004bc;
        iVar14 = *(int *)((longlong)iVar14 * 0x38 + lVar9 + 0x30);
      } while (iVar14 != -1);
    }
  }
  lVar8 = FUN_148b0252a(lVar8);
  goto LAB_145800531;
  while (iVar7 = *(int *)(lVar11 + 0x30), iVar7 != -1) {
LAB_1458004bc:
    lVar11 = lVar9 + (longlong)iVar7 * 0x38;
    if (*(longlong *)(lVar9 + (longlong)iVar7 * 0x38) == lVar12) goto LAB_1458004d1;
  }
  lVar11 = 0;
LAB_1458004d1:
  local_58 = *(longlong *)(lVar11 + 8);
  local_50 = *(undefined4 *)(lVar11 + 0x10);
  uStack_4c = *(undefined4 *)(lVar11 + 0x14);
  uStack_48 = *(undefined4 *)(lVar11 + 0x18);
  uStack_44 = *(undefined4 *)(lVar11 + 0x1c);
  local_40 = (void *)0x0;
  local_38 = *(int *)(lVar11 + 0x28);
  lVar12 = (longlong)local_38;
  _Src = *(void **)(lVar11 + 0x20);
  if (lVar12 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar12 * 2);
  }
  uVar10 = FUN_1410e4d26(&local_58);
  lVar8 = FUN_145800746(lVar8,uVar10);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_145800531:
  if (lVar8 == 0) goto LAB_14580059c;
  cVar6 = FUN_145800660(lVar8);
  if (*(char *)(param_1 + 0x112) != cVar6) {
    *(char *)(param_1 + 0x112) = cVar6;
  }
  FUN_1402815f4(param_1,&local_58);
  pcVar3 = *(char **)(local_58 + 0x360);
  AcquireSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x20));
  *(int *)(pcVar3 + 0x18) = *(int *)(pcVar3 + 0x18) + 1;
  plVar5 = (longlong *)CONCAT44(uStack_4c,local_50);
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
  if (*pcVar3 == cVar6) {
    if (*(int *)(pcVar3 + 4) == 0) {
      iVar7 = 1;
      goto LAB_1458005c9;
    }
  }
  else {
    iVar7 = *(int *)(pcVar3 + 4) + 1;
LAB_1458005c9:
    *pcVar3 = cVar6;
    *(int *)(pcVar3 + 4) = iVar7;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x20));
LAB_14580059c:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145800660 FUN_145800660 body=229 status=ok
// SIG undefined FUN_145800660(void)

ulonglong FUN_145800660(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined7 uVar5;
  ulonglong uVar4;
  longlong lVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x2a8))(param_1,&local_28);
  if (0 < local_20) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(local_28 + lVar6 * 8);
      if (plVar1 != (longlong *)0x0) {
        lVar3 = FUN_140febe0e();
        uVar5 = (undefined7)((ulonglong)plVar1 >> 8);
        if ((*(int *)(plVar1[2] + 0x38) < *(int *)(lVar3 + 0x38)) ||
           (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30)) {
          lVar3 = FUN_140e21508();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
             ((*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
               == lVar3 + 0x30 && (cVar2 = (**(code **)(*plVar1 + 0x300))(plVar1), cVar2 == '\0'))))
          {
            uVar4 = CONCAT71(uVar5,1);
            goto LAB_145800713;
          }
        }
        else {
          cVar2 = FUN_145800660(plVar1);
          uVar4 = CONCAT71(uVar5,1);
          if (cVar2 != '\0') goto LAB_145800713;
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < local_20);
  }
  uVar4 = 0;
LAB_145800713:
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 145800746 FUN_145800746 body=344 status=ok
// SIG undefined FUN_145800746(void)

longlong FUN_145800746(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != 0) {
    FUN_1456cec3c(param_2);
  }
  local_20 = param_2;
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != 0) {
    FUN_1456cec3c(param_2);
  }
  if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  iVar3 = FUN_1410e6a7a((longlong *)(param_1 + 200),uVar2 >> 0x10 ^ uVar2,&local_20);
  if (iVar3 == -1) {
    lVar5 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 200);
    lVar5 = 0;
    if ((((lVar1 + (longlong)iVar3 * 0x18 != 0) &&
         (plVar4 = (longlong *)(lVar1 + (longlong)iVar3 * 0x18 + 8), plVar4 != (longlong *)0x0)) &&
        (lVar5 = *plVar4, DAT_14c950c29 == 1)) && (lVar5 != 0)) {
      FUN_1456cec3c(lVar5);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458008a0 FUN_1458008a0 body=712 status=ok
// SIG undefined FUN_1458008a0(void)

void FUN_1458008a0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  void *_Src;
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  int local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = FUN_1402735c8();
  lVar8 = *param_2;
  if (*(int *)(lVar3 + 0x8c8) != *(int *)(lVar3 + 0x8f4)) {
    uVar2 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar10 = (uint)lVar8 & 0xffff;
    lVar9 = lVar3 + 0x8f8;
    if (*(longlong *)(lVar3 + 0x900) != 0) {
      lVar9 = *(longlong *)(lVar3 + 0x900);
    }
    iVar7 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(lVar3 + 0x908) - 1U &
                             (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar10) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar10 >> 4)) * 4);
    if (iVar7 != -1) {
      lVar3 = *(longlong *)(lVar3 + 0x8c0);
      iVar11 = iVar7;
      do {
        if (*(longlong *)(lVar3 + (longlong)iVar11 * 0x38) == lVar8) goto LAB_145800959;
        iVar11 = *(int *)((longlong)iVar11 * 0x38 + lVar3 + 0x30);
      } while (iVar11 != -1);
    }
  }
  plVar5 = (longlong *)FUN_148b0252a(param_3);
  goto LAB_1458009ce;
  while (iVar7 = *(int *)(lVar9 + 0x30), iVar7 != -1) {
LAB_145800959:
    lVar9 = lVar3 + (longlong)iVar7 * 0x38;
    if (*(longlong *)(lVar3 + (longlong)iVar7 * 0x38) == lVar8) goto LAB_14580096e;
  }
  lVar9 = 0;
LAB_14580096e:
  local_58 = *(longlong *)(lVar9 + 8);
  local_50 = *(int *)(lVar9 + 0x10);
  uStack_4c = *(undefined4 *)(lVar9 + 0x14);
  uStack_48 = *(undefined4 *)(lVar9 + 0x18);
  uStack_44 = *(undefined4 *)(lVar9 + 0x1c);
  local_40 = (void *)0x0;
  local_38 = *(int *)(lVar9 + 0x28);
  lVar8 = (longlong)local_38;
  _Src = *(void **)(lVar9 + 0x20);
  if (lVar8 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar8 * 2);
  }
  uVar4 = FUN_1410e4d26(&local_58);
  plVar5 = (longlong *)FUN_145800746(param_3,uVar4);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1458009ce:
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x2a8))(plVar5,&local_58);
    if (0 < local_50) {
      lVar8 = 0;
      do {
        lVar3 = local_58;
        if (*(longlong *)(local_58 + lVar8 * 8) == 0) {
LAB_145800af1:
          lVar9 = 0;
LAB_145800af3:
          FUN_140457ffc(lVar9 + 0x40,param_1);
          FUN_140457ffc(*(longlong *)(lVar3 + lVar8 * 8) + 0x28,param_1);
        }
        else {
          lVar6 = FUN_140febe0e();
          lVar9 = *(longlong *)(lVar3 + lVar8 * 8);
          if (lVar9 == 0) goto LAB_145800af1;
          if ((((lVar6 == 0) || (lVar1 = *(longlong *)(lVar9 + 0x10), lVar1 == 0)) ||
              (*(int *)(lVar1 + 0x38) < *(int *)(lVar6 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
              lVar6 + 0x30)) goto LAB_145800af3;
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar9);
          }
          local_60 = lVar9;
          if ((DAT_14c950c29 & 1) != 0) {
            FUN_1456cec3c(lVar9);
          }
          FUN_1410e2c2a(param_1,&local_60);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < local_50);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145800b6a FUN_145800b6a body=146 status=ok
// SIG undefined FUN_145800b6a(void)

void FUN_145800b6a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x168,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x168)) {
      uVar5 = uVar4 / 0x168 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x168,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145800bfe FUN_145800bfe body=12 status=ok
// SIG undefined FUN_145800bfe(void)

void FUN_145800bfe(longlong param_1)

{
  FUN_140230656(param_1 + 0x148);
  return;
}



// FUNCTION 145800c0a FUN_145800c0a body=147 status=ok
// SIG undefined FUN_145800c0a(void)

void FUN_145800c0a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145800c9e FUN_145800c9e body=541 status=ok
// SIG undefined FUN_145800c9e(void)

undefined8 * FUN_145800c9e(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined4 local_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar6 = (longlong *)FUN_14107a740();
  if (plVar6 == (longlong *)0x0) {
    puVar10 = &DAT_14c966e80;
  }
  else {
    local_90 = *(undefined8 *)(param_1 + 0x140);
    local_88 = *(undefined8 *)(param_1 + 0x148);
    local_80 = *(undefined8 *)(param_1 + 0x150);
    local_78 = *(longlong **)(param_1 + 0x158);
    if (local_78 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_78 + 1) = (int)local_78[1] + 1;
      UNLOCK();
    }
    _local_70 = CONCAT71((int7)((ulonglong)*(undefined8 *)(param_1 + 0x160) >> 8),param_2);
    lVar7 = FUN_14107a740(param_1);
    puVar10 = &DAT_14c966e80;
    uVar3 = local_a0;
    if ((lVar7 != 0) &&
       (plVar8 = (longlong *)FUN_14107a796(lVar7,*(undefined8 *)(param_1 + 0x138)), uVar3 = local_a0
       , plVar8 != (longlong *)0x0)) {
      plVar1 = plVar8 + 2;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = plVar1;
      if ((int)plVar8[5] == 0) {
        iVar9 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar9 = (int)plVar8[5];
      }
      uStack_98 = CONCAT44(uStack_4c,uStack_50);
      local_a0 = local_58;
      uVar3 = local_a0;
      local_b0 = (undefined4)local_68;
      uStack_ac = local_68._4_4_;
      uStack_a8 = (undefined4)uStack_60;
      uStack_a4 = uStack_60._4_4_;
      local_a0._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      puVar10 = &DAT_14c966e80;
      local_b8 = plVar8;
      if ((local_a0._4_4_ != iVar9) || (uStack_60 != plVar1)) {
        iVar5 = local_a0._4_4_;
        local_a0 = uVar3;
        do {
          lVar7 = (longlong)iVar5 * 0x90 + *local_b8;
          cVar4 = (**(code **)(*plVar6 + 0x2e8))(plVar6,lVar7,&local_90);
          if (cVar4 != '\0') {
            puVar10 = (undefined8 *)(lVar7 + 0x48);
            uVar3 = local_a0;
            if (*(longlong *)(lVar7 + 0x48) == *(longlong *)(lVar7 + 0x30)) {
              puVar10 = (undefined8 *)(lVar7 + 0x30);
            }
            break;
          }
          local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~uStack_ac);
          FUN_1449c0562(&local_b0);
          iVar5 = local_a0._4_4_;
          uVar3 = local_a0;
        } while (local_b8 != plVar8 ||
                 ((longlong *)CONCAT44(uStack_a4,uStack_a8) != plVar1 || local_a0._4_4_ != iVar9));
      }
    }
    local_a0 = uVar3;
    plVar6 = local_78;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_78 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_78)(local_78);
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
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar10;
}



// FUNCTION 145800ebc FUN_145800ebc body=137 status=ok
// SIG undefined FUN_145800ebc(void)

void FUN_145800ebc(longlong *param_1,double param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  double local_48;
  double local_38;
  ulonglong local_30;
  
  uVar1 = SUB84(param_2,0);
  uVar2 = (undefined4)((ulonglong)param_2 >> 0x20);
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x330))(param_1,local_50);
  if (1.0 <= param_2) {
    uVar1 = 0;
    uVar2 = 0x3ff00000;
  }
  if ((double)CONCAT44(uVar2,uVar1) <= 0.0) {
    uVar1 = 0;
    uVar2 = 0;
  }
  (**(code **)(*param_1 + 800))
            (param_1,(local_38 - local_48) * (double)CONCAT44(uVar2,uVar1) + local_48,0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145800f46 FUN_145800f46 body=249 status=ok
// SIG undefined FUN_145800f46(void)

void FUN_145800f46(longlong *param_1,double param_2,undefined4 param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  dVar2 = (double)param_1[0x32];
  dVar1 = (double)FUN_14047fbb4(param_2 / dVar2);
  dVar1 = dVar1 * dVar2;
  dVar2 = dVar1;
  if (((char)param_1[0x34] == '\x01') &&
     (dVar2 = (double)param_1[0x33], (double)param_1[0x33] <= dVar1)) {
    dVar2 = dVar1;
  }
  dVar1 = dVar2;
  if (((char)param_1[0x36] == '\x01') &&
     (dVar1 = (double)param_1[0x35], dVar2 <= (double)param_1[0x35])) {
    dVar1 = dVar2;
  }
  dVar2 = (double)(**(code **)(*param_1 + 0x328))(param_1);
  if ((dVar1 != dVar2) || (NAN(dVar1) || NAN(dVar2))) {
    FUN_140002266(local_50,&DAT_149e02016,dVar1);
    (**(code **)(*(longlong *)param_1[0x29] + 0x20))
              ((longlong *)param_1[0x29],param_1[0xb],local_50);
    FUN_1459ca14e(param_1,param_3);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145801040 FUN_145801040 body=651 status=ok
// SIG undefined FUN_145801040(void)

void FUN_145801040(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  void *_Src;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  void *pvStack_80;
  int local_78;
  undefined4 local_74;
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  void *pvStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = param_1;
  lVar5 = FUN_140059518(param_1 + 0x44);
  if ((lVar5 != 0) && (lVar5 = FUN_14120f7e6(lVar5), lVar5 != 0)) {
    lVar6 = FUN_1402735c8();
    plVar1 = (longlong *)(lVar6 + 0x8c0);
    local_a0 = lVar6 + 0x8d0;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    pvStack_80 = (void *)((ulonglong)pvStack_80 & 0xffffffff00000000);
    uStack_90 = local_a0;
    if (*(int *)(lVar6 + 0x8e8) == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_98);
      iVar8 = *(int *)(lVar6 + 0x8e8);
    }
    local_58 = local_88;
    lVar6 = local_58;
    pvStack_50 = pvStack_80;
    local_68 = (undefined4)local_98;
    uStack_64 = local_98._4_4_;
    uStack_60 = (undefined4)uStack_90;
    uStack_5c = uStack_90._4_4_;
    local_58._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_70 = plVar1;
    if ((local_58._4_4_ != iVar8) || (uStack_90 != local_a0)) {
      iVar4 = local_58._4_4_;
      local_58 = lVar6;
      do {
        lVar6 = *local_70;
        lVar10 = (longlong)iVar4 * 0x38;
        local_98 = *(undefined8 *)(lVar6 + 8 + lVar10);
        plVar2 = (longlong *)(lVar6 + 0x10 + lVar10);
        uStack_90 = *plVar2;
        local_88 = plVar2[1];
        pvStack_80 = (void *)0x0;
        local_78 = *(int *)(lVar6 + 0x28 + lVar10);
        lVar9 = (longlong)local_78;
        _Src = *(void **)(lVar6 + 0x20 + lVar10);
        if (lVar9 == 0) {
          local_74 = 0;
        }
        else {
          FUN_1446dd670(&pvStack_80,local_78,0);
          memcpy(pvStack_80,_Src,lVar9 * 2);
        }
        lVar9 = FUN_1410e4d26(&local_98);
        if ((lVar9 == 0) || (lVar9 = FUN_1410e4d26(&local_98), lVar9 == 0)) {
          bVar3 = false;
        }
        else {
          if (*(longlong *)(lVar6 + lVar10) == DAT_14cbd7bd8) {
            uVar7 = FUN_145801772(lVar5,lVar9);
            FUN_1410e71be(local_a8,uVar7);
            FUN_145801c6c(lVar5,lVar9,uVar7);
          }
          else {
            FUN_1458012cc(lVar5,lVar9);
          }
          bVar3 = true;
        }
        if (pvStack_80 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (!bVar3) goto LAB_14580125e;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~uStack_64);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        lVar6 = local_58;
      } while (local_70 != plVar1 ||
               (CONCAT44(uStack_5c,uStack_60) != local_a0 || local_58._4_4_ != iVar8));
    }
    local_58 = lVar6;
    FUN_1458026e0(lVar5);
    FUN_145801f36(lVar5);
    lVar5 = local_a8;
    FUN_145827ad0(local_a8);
    *(undefined1 *)(lVar5 + 0x100) = 1;
  }
LAB_14580125e:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458012cc FUN_1458012cc body=333 status=ok
// SIG undefined FUN_1458012cc(void)

longlong FUN_1458012cc(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  local_28 = param_2;
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != 0) {
    FUN_1456cec3c(param_2);
  }
  if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  iVar2 = FUN_1410e6a7a((longlong *)(param_1 + 200),uVar1 >> 0x10 ^ uVar1,&local_28);
  if ((iVar2 == -1) ||
     (lVar3 = *(longlong *)(param_1 + 200) + (longlong)iVar2 * 0x18,
     plVar4 = (longlong *)(lVar3 + 8), plVar4 == (longlong *)0x0 || lVar3 == 0)) {
    lVar3 = FUN_145801772(param_1,param_2);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14580147e(param_1,lVar3);
      FUN_1410e4f02(param_2 + 0x30,param_1);
    }
  }
  else {
    lVar3 = *plVar4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14580141a FUN_14580141a body=98 status=ok
// SIG undefined FUN_14580141a(void)

void FUN_14580141a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    FUN_14580156e(param_2 + 0x28,local_20,param_1);
    FUN_145801664(param_2 + 0x40,local_20,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14580147e FUN_14580147e body=170 status=ok
// SIG undefined FUN_14580147e(void)

void FUN_14580147e(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    iVar1 = *(int *)(param_1 + 0x90);
    *(uint *)(param_1 + 0x90) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x94) < iVar1 + 1U) {
      FUN_1410e6f7a((longlong *)(param_1 + 0x88),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar1 * 8) = param_2;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    if ((param_1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(param_1);
    }
    *(longlong *)(param_2 + 0x68) = param_1;
    FUN_1410e6b44(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 145801528 FUN_145801528 body=69 status=ok
// SIG undefined FUN_145801528(void)

void FUN_145801528(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [44];
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_144a13f80(param_2,local_c,param_1 + 8,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14580156e FUN_14580156e body=244 status=ok
// SIG undefined FUN_14580156e(void)

undefined8 FUN_14580156e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14b538b70;
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
  *local_38 = &PTR_FUN_14b5385b0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_146167766;
  FUN_1410e6738(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145801664 FUN_145801664 body=244 status=ok
// SIG undefined FUN_145801664(void)

undefined8 FUN_145801664(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14b538b00;
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
  *local_38 = &PTR_FUN_14b538620;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_1410e6716;
  FUN_1410e6906(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14580175a FUN_14580175a body=24 status=ok
// SIG undefined FUN_14580175a(void)

bool FUN_14580175a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145801772 FUN_145801772 body=414 status=ok
// SIG undefined FUN_145801772(void)

longlong FUN_145801772(longlong param_1,undefined8 ***param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  undefined8 **local_48;
  longlong local_40;
  undefined8 **local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (undefined8 ***)0x0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  local_38 = param_2;
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != (undefined8 ***)0x0) {
    FUN_1456cec3c(param_2);
  }
  plVar1 = (longlong *)(param_1 + 200);
  if ((param_2 != (undefined8 ***)0x0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  uVar2 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  iVar3 = FUN_1410e6a7a(plVar1,uVar2 >> 0x10 ^ uVar2,&local_38);
  if ((iVar3 == -1) ||
     (lVar4 = *plVar1 + (longlong)iVar3 * 0x18, plVar5 = (longlong *)(lVar4 + 8),
     plVar5 == (longlong *)0x0 || lVar4 == 0)) {
    lVar4 = FUN_14101d7aa(param_2 + 6,param_1);
    local_40 = lVar4;
    if (lVar4 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar4);
    }
    local_48 = param_2;
    if ((param_2 != (undefined8 ***)0x0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(param_2);
    }
    local_38 = &local_48;
    local_30 = &local_40;
    FUN_145801912(plVar1,local_24);
  }
  else {
    lVar4 = *plVar5;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145801912 FUN_145801912 body=359 status=ok
// SIG undefined FUN_145801912(void)

undefined4 * FUN_145801912(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_145801b78(param_1,local_48);
  FUN_145801a7a(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  if ((uVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar5);
  }
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_145801ad2(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar6 = 1;
    }
    else {
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
      *(uint *)((longlong)local_40 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_145801fd8(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145801a7a FUN_145801a7a body=87 status=ok
// SIG undefined FUN_145801a7a(void)

longlong * FUN_145801a7a(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = *param_3;
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 145801ad2 FUN_145801ad2 body=164 status=ok
// SIG undefined FUN_145801ad2(void)

undefined8 FUN_145801ad2(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar5 = FUN_1410e6a7a(param_1,param_2,&local_30);
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      lVar4 = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = (int)*param_3;
      puVar1[1] = uVar2;
      puVar1[2] = (int)lVar4;
      puVar1[3] = uVar3;
      FUN_148b05d64(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_145801b2d;
    }
  }
  uVar6 = 0;
LAB_145801b2d:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145801b78 FUN_145801b78 body=243 status=ok
// SIG undefined FUN_145801b78(void)

int * FUN_145801b78(longlong *param_1,int *param_2)

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



// FUNCTION 145801c6c FUN_145801c6c body=54 status=ok
// SIG undefined FUN_145801c6c(void)

void FUN_145801c6c(undefined8 param_1,longlong param_2,longlong param_3)

{
  if (param_3 != 0) {
    FUN_14580147e(param_1,param_3);
    FUN_1410e4f02(param_2 + 0x30,param_1);
    return;
  }
  return;
}



// FUNCTION 145801ca2 FUN_145801ca2 body=405 status=ok
// SIG undefined FUN_145801ca2(void)

undefined8 * FUN_145801ca2(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_3 + 0xa0) != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x98) + lVar2);
      if (*(longlong *)(lVar1 + 0x70) == *(longlong *)(param_1 + 8)) {
        if (lVar1 != 0) {
          lVar2 = FUN_140e212f4();
          if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
            FUN_148b01af8(param_1,param_2,lVar1);
            return param_2;
          }
          lVar2 = FUN_140e21422();
          if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
            FUN_145801e38(param_1,param_2,lVar1);
            return param_2;
          }
          lVar2 = FUN_145861dd6();
          if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
            FUN_148b01e9c(param_1,param_2,lVar1);
            return param_2;
          }
          lVar2 = FUN_141227f1e();
          if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
            FUN_1458023b6(param_1,param_2,lVar1);
            return param_2;
          }
          lVar2 = FUN_1410e4b5a();
          if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
            FUN_148b02236(param_1,param_2,lVar1);
            return param_2;
          }
          lVar2 = FUN_145b84936();
          if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
            FUN_148b023b0(param_1,param_2,lVar1);
            return param_2;
          }
        }
        break;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_3 + 0xa0) * 8 != lVar2);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 145801e38 FUN_145801e38 body=252 status=ok
// SIG undefined FUN_145801e38(void)

longlong * FUN_145801e38(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_14485c47a(&local_30,param_3);
  if (*(int *)(param_1 + 0x20) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = *(undefined2 **)(param_1 + 0x18);
  }
  bVar5 = FUN_14052c20c(puVar7);
  uVar3 = local_30;
  cVar1 = *(char *)(param_1 + 0x10);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  FUN_1446efa72(param_2,0,3,0x10);
  *(undefined4 *)(param_2 + 1) = 3;
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b5407d0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  puVar2[2] = lVar6;
  *puVar2 = &PTR_FUN_14b540bc0;
  puVar2[3] = uVar3;
  *(byte *)(puVar2 + 4) = bVar5 ^ cVar1 == '\x01';
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145801f36 FUN_145801f36 body=161 status=ok
// SIG undefined FUN_145801f36(void)

void FUN_145801f36(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446ddc76(local_20,"reticle_position",1);
  lVar1 = FUN_1410e70dc(param_1,local_20);
  if (lVar1 != 0) {
    lVar2 = FUN_14101f1de();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_140056680(local_30,&DAT_149e0209e);
      FUN_1458433a4(lVar1,local_30);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145801fd8 FUN_145801fd8 body=517 status=ok
// SIG undefined FUN_145801fd8(void)

void FUN_145801fd8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  uVar3 = local_70;
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar3 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar9 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar2 = *local_88;
        uVar7 = *(ulonglong *)(lVar2 + (longlong)iVar9 * 0x18);
        if ((DAT_14c950c29 == '\x01') && (uVar7 != 0)) {
          FUN_1456cec3c(uVar7);
        }
        lVar2 = lVar2 + (longlong)iVar9 * 0x18;
        uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar7 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x14) = iVar6;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar9 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458021de FUN_1458021de body=470 status=ok
// SIG undefined FUN_1458021de(void)

longlong * FUN_1458021de(longlong param_1,longlong *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 0x10);
  lVar4 = (longlong)local_30;
  pvVar1 = *(void **)(param_1 + 8);
  if (lVar4 == 0) {
    local_2c = 0;
    local_40 = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,pvVar1,lVar4 * 2);
    pvVar1 = local_38;
    local_40 = local_30;
    lVar4 = (longlong)local_30;
    local_48 = (void *)0x0;
    if (lVar4 != 0) {
      FUN_1446dd670(&local_48,local_30,0);
      memcpy(local_48,pvVar1,lVar4 * 2);
      goto LAB_145802232;
    }
  }
  local_48 = (void *)0x0;
  local_3c = 0;
LAB_145802232:
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  FUN_1446efa72(param_2,0,3,0x10);
  pvVar1 = local_48;
  *(undefined4 *)(param_2 + 1) = 3;
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b5411e0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  puVar2[2] = lVar3;
  *puVar2 = &PTR_FUN_14b5412c0;
  puVar2[3] = 0;
  lVar4 = (longlong)local_40;
  *(int *)(puVar2 + 4) = local_40;
  if (lVar4 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 3,local_40,0);
    memcpy((void *)puVar2[3],pvVar1,lVar4 * 2);
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8(local_48);
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458023b6 FUN_1458023b6 body=809 status=ok
// SIG undefined FUN_1458023b6(void)

longlong * FUN_1458023b6(longlong param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined **ppuVar7;
  longlong lVar8;
  undefined2 *_Src;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  FUN_14485c47a(&local_38,param_3);
  _Src = *(undefined2 **)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x20);
  uVar6 = (longlong)iVar2 * 2;
  do {
    if (uVar6 == 0) goto LAB_14580259f;
    uVar1 = uVar6 - 2;
    lVar9 = uVar6 - 2;
    uVar6 = uVar1;
  } while (*(short *)((longlong)_Src + lVar9) != 0x3a);
  iVar4 = (int)(uVar1 >> 1);
  if (iVar4 == -1) {
LAB_14580259f:
    local_48 = (void *)0x0;
    local_40 = iVar2;
    if (iVar2 == 0) {
      local_3c = 0;
    }
    else {
      FUN_1446dd670(&local_48,iVar2,0);
      memcpy(local_48,_Src,(longlong)iVar2 * 2);
    }
  }
  else {
    uVar5 = iVar4 + 1;
    uVar11 = iVar2 - 1;
    if (iVar2 == 0) {
      _Src = &DAT_149dfb77a;
      uVar11 = 0;
    }
    if ((int)uVar11 <= (int)uVar5) {
      uVar5 = uVar11;
    }
    uVar6 = (ulonglong)uVar5;
    if ((int)uVar5 < 1) {
      uVar6 = 0;
    }
    FUN_14006620a(&local_48,_Src + uVar6,uVar11 - (int)uVar6);
  }
  pvVar3 = local_48;
  if (*(char *)(param_1 + 0x10) == '\0') {
    local_60 = local_38;
    local_58 = (void *)0x0;
    lVar9 = (longlong)local_40;
    local_50 = local_40;
    if (lVar9 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_40,0);
      memcpy(local_58,pvVar3,lVar9 * 2);
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
    puVar10 = (undefined8 *)*param_2;
    *puVar10 = &PTR_LAB_14b5407d0;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar10[2] = lVar8;
    ppuVar7 = &PTR_FUN_14b540ed0;
  }
  else {
    local_60 = local_38;
    local_58 = (void *)0x0;
    lVar9 = (longlong)local_40;
    local_50 = local_40;
    if (lVar9 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_40,0);
      memcpy(local_58,pvVar3,lVar9 * 2);
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
    puVar10 = (undefined8 *)*param_2;
    *puVar10 = &PTR_LAB_14b5407d0;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar10[2] = lVar8;
    ppuVar7 = &PTR_FUN_14b540f40;
  }
  pvVar3 = local_58;
  *puVar10 = ppuVar7;
  puVar10[3] = local_60;
  puVar10[4] = 0;
  lVar9 = (longlong)local_50;
  *(int *)(puVar10 + 5) = local_50;
  if (lVar9 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar10 + 4,local_50,0);
    memcpy((void *)puVar10[4],pvVar3,lVar9 * 2);
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8(local_58);
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1458026e0 FUN_1458026e0 body=984 status=ok
// SIG undefined FUN_1458026e0(void)

void FUN_1458026e0(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  char *pcVar12;
  longlong lVar13;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined1 local_b8;
  double local_b0;
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_1446ddc76(local_50,"fragment_AntiAliasingMethod",1);
  uVar2 = FUN_1410e70dc(param_1,local_50);
  FUN_1446ddc76(local_58,"fragment_UpscalingMethod",1);
  uVar3 = FUN_1410e70dc(param_1,local_58);
  FUN_1446ddc76(local_60,"fragment_Upscaling",1);
  uVar4 = FUN_1410e70dc(param_1,local_60);
  FUN_1446ddc76(local_68,"basic_framegeneration",1);
  uVar5 = FUN_1410e70dc(param_1,local_68);
  FUN_1446ddc76(local_70,"advanced_framestogenerate",1);
  uVar6 = FUN_1410e70dc(param_1,local_70);
  FUN_1446ddc76(local_78,"advanced_nvidiareflex");
  uVar7 = FUN_1410e70dc(param_1,local_78);
  uVar8 = FUN_141292688();
  plVar9 = (longlong *)FUN_141292680(uVar8);
  if (DAT_14cb9acd0 != 0) {
    if ((longlong)(int)plVar9[1] != 0) {
      lVar13 = 0;
      do {
        if (*(longlong *)(*plVar9 + lVar13) == DAT_14cb9acd0) goto LAB_14580288c;
        lVar13 = lVar13 + 8;
      } while ((longlong)(int)plVar9[1] * 8 != lVar13);
    }
    if ((longlong)(int)plVar9[3] != 0) {
      lVar13 = 0;
      do {
        if (*(longlong *)(plVar9[2] + lVar13) == DAT_14cb9acd0) goto LAB_14580288c;
        lVar13 = lVar13 + 8;
      } while ((longlong)(int)plVar9[3] * 8 != lVar13);
    }
  }
  pcVar12 = "basic_graphics_preset";
LAB_145802893:
  local_f0 = uVar7;
  local_e8 = uVar6;
  local_e0 = uVar5;
  local_d8 = uVar4;
  local_d0 = uVar2;
  FUN_1446ddc76(local_80,pcVar12,1);
  uVar2 = FUN_1410e70dc(param_1,local_80);
  FUN_1446ddc76(local_88,"basic_graphics_preset_ftc",1);
  uVar4 = FUN_1410e70dc(param_1,local_88);
  FUN_1446ddc76(local_90,"basic_frameratelimit",1);
  lVar13 = FUN_1410e70dc(param_1,local_90);
  if (lVar13 == 0) {
LAB_145802aa9:
    lVar13 = 0;
  }
  else {
    lVar10 = FUN_140e212f4();
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8
         ) != lVar10 + 0x30)) goto LAB_145802aa9;
  }
  FUN_1446ddc76(local_98,"hdr_enabled",1);
  lVar10 = FUN_1410e70dc(param_1,local_98);
  if (lVar10 != 0) {
    lVar11 = FUN_14101f1de();
    if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8
         ) == lVar11 + 0x30)) goto LAB_14580299a;
  }
  lVar10 = 0;
LAB_14580299a:
  FUN_1446ddc76(local_a0,"fragment_SecondaryUpscaling",1);
  uVar5 = FUN_1410e70dc(param_1,local_a0);
  FUN_1446ddc76(local_a8,"advanced_TargetHighRefreshRate",1);
  FUN_1410e70dc(param_1,local_a8);
  if (lVar13 != 0) {
    uVar1 = FUN_1410e712e();
    local_b0 = (double)uVar1;
    local_c8[0] = 1;
    local_c0 = 0x403e000000000000;
    local_b8 = 0;
    FUN_1410e7110(lVar13,local_c8,0x4024000000000000);
  }
  FUN_145802e98(uVar3,local_d0);
  FUN_145802d3a(uVar3,local_d8);
  FUN_145803154(uVar3,local_e0,local_e8,local_f0);
  FUN_145802ab9(uVar2);
  FUN_145802ab9(uVar4);
  FUN_145802c03(lVar10);
  FUN_145802ff6(uVar3,uVar5);
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14580288c:
  pcVar12 = "advanced_graphics_preset";
  goto LAB_145802893;
}



// FUNCTION 145802ab9 FUN_145802ab9 body=329 status=ok
// SIG undefined FUN_145802ab9(void)

void FUN_145802ab9(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    local_30 = (longlong *)FUN_14001cc68(0x80,0x10);
    local_30[1] = (longlong)&DAT_100000001;
    *local_30 = (longlong)&PTR_FUN_14b5414b0;
    local_38 = local_30 + 2;
    local_30[3] = 0;
    local_30[4] = 0;
    local_30[5] = 0;
    local_30[6] = 0;
    local_30[7] = 2;
    local_30[2] = (longlong)&PTR_FUN_14b5414d0;
    local_30[8] = (longlong)&LAB_143fa6636;
    local_30[10] = 0;
    local_30[0xc] = (longlong)&PTR_LAB_14b54a520;
    local_30[0xd] = (longlong)FUN_144293b12;
    FUN_1410e573a(&local_38);
    local_28 = local_38;
    local_20 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    FUN_1410e57dc(param_1,&local_28);
    plVar3 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    FUN_1410e5ae4(param_1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145802c03 FUN_145802c03 body=310 status=ok
// SIG undefined FUN_145802c03(void)

void FUN_145802c03(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (longlong *)FUN_14001cc68(0x80,0x10);
  local_30[1] = (longlong)&DAT_100000001;
  *local_30 = (longlong)&PTR_FUN_14b5414b0;
  local_38 = local_30 + 2;
  local_30[3] = 0;
  local_30[4] = 0;
  local_30[5] = 0;
  local_30[6] = 0;
  local_30[7] = 2;
  local_30[2] = (longlong)&PTR_FUN_14b5414d0;
  local_30[8] = (longlong)&LAB_143fa6636;
  local_30[10] = 0;
  local_30[0xc] = (longlong)&PTR_LAB_14b54a520;
  local_30[0xd] = (longlong)FUN_144293cb0;
  FUN_1410e573a(&local_38);
  local_28 = local_38;
  local_20 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  FUN_1410e57dc(param_1,&local_28);
  plVar3 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145802d3a FUN_145802d3a body=349 status=ok
// SIG undefined FUN_145802d3a(void)

void FUN_145802d3a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_14580141a(param_2,param_1);
    local_30 = (longlong *)FUN_14001cc68(0x80,0x10);
    local_30[1] = (longlong)&DAT_100000001;
    *local_30 = (longlong)&PTR_FUN_14b5414b0;
    local_38 = local_30 + 2;
    local_30[3] = 0;
    local_30[4] = 0;
    local_30[5] = 0;
    local_30[6] = 0;
    local_30[7] = 2;
    local_30[2] = (longlong)&PTR_FUN_14b5414d0;
    local_30[8] = (longlong)&LAB_143fa6636;
    local_30[10] = 0;
    local_30[0xc] = (longlong)&PTR_LAB_14b54a520;
    local_30[0xd] = (longlong)FUN_1442937de;
    FUN_1410e573a(&local_38);
    local_28 = local_38;
    local_20 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    FUN_1410e57dc(param_2,&local_28);
    plVar3 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    FUN_1410e5ae4(param_2,1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145802e98 FUN_145802e98 body=349 status=ok
// SIG undefined FUN_145802e98(void)

void FUN_145802e98(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_14580141a(param_2,param_1);
    local_30 = (longlong *)FUN_14001cc68(0x80,0x10);
    local_30[1] = (longlong)&DAT_100000001;
    *local_30 = (longlong)&PTR_FUN_14b5414b0;
    local_38 = local_30 + 2;
    local_30[3] = 0;
    local_30[4] = 0;
    local_30[5] = 0;
    local_30[6] = 0;
    local_30[7] = 2;
    local_30[2] = (longlong)&PTR_FUN_14b5414d0;
    local_30[8] = (longlong)&LAB_143fa6636;
    local_30[10] = 0;
    local_30[0xc] = (longlong)&PTR_LAB_14b54a520;
    local_30[0xd] = (longlong)FUN_14429387e;
    FUN_1410e573a(&local_38);
    local_28 = local_38;
    local_20 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    FUN_1410e57dc(param_2,&local_28);
    plVar3 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    FUN_1410e5ae4(param_2,1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145802ff6 FUN_145802ff6 body=349 status=ok
// SIG undefined FUN_145802ff6(void)

void FUN_145802ff6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_14580141a(param_2,param_1);
    local_30 = (longlong *)FUN_14001cc68(0x80,0x10);
    local_30[1] = (longlong)&DAT_100000001;
    *local_30 = (longlong)&PTR_FUN_14b5414b0;
    local_38 = local_30 + 2;
    local_30[3] = 0;
    local_30[4] = 0;
    local_30[5] = 0;
    local_30[6] = 0;
    local_30[7] = 2;
    local_30[2] = (longlong)&PTR_FUN_14b5414d0;
    local_30[8] = (longlong)&LAB_143fa6636;
    local_30[10] = 0;
    local_30[0xc] = (longlong)&PTR_LAB_14b54a520;
    local_30[0xd] = (longlong)FUN_144293bc0;
    FUN_1410e573a(&local_38);
    local_28 = local_38;
    local_20 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    FUN_1410e57dc(param_2,&local_28);
    plVar3 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    FUN_1410e5ae4(param_2,1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145803154 FUN_145803154 body=948 status=ok
// SIG undefined FUN_145803154(void)

void FUN_145803154(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    FUN_14580141a(param_2,param_1);
    local_60 = (longlong *)FUN_14001cc68(0x80,0x10);
    local_60[1] = (longlong)&DAT_100000001;
    *local_60 = (longlong)&PTR_FUN_14b5414b0;
    local_68 = local_60 + 2;
    local_60[3] = 0;
    local_60[4] = 0;
    local_60[5] = 0;
    local_60[6] = 0;
    local_60[7] = 2;
    local_60[2] = (longlong)&PTR_FUN_14b5414d0;
    local_60[8] = (longlong)&LAB_143fa6636;
    local_60[10] = 0;
    local_60[0xc] = (longlong)&PTR_LAB_14b54a520;
    local_60[0xd] = (longlong)FUN_14429391e;
    FUN_1410e573a(&local_68);
    local_58 = local_68;
    local_50 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    FUN_1410e57dc(param_2,&local_58);
    plVar3 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    FUN_1410e5ae4(param_2,1);
    FUN_14580141a(param_3,param_2);
    local_60 = (longlong *)FUN_14001cc68(0x80,0x10);
    local_60[1] = (longlong)&DAT_100000001;
    *local_60 = (longlong)&PTR_FUN_14b5414b0;
    local_68 = local_60 + 2;
    local_60[3] = 0;
    local_60[4] = 0;
    local_60[5] = 0;
    local_60[6] = 0;
    local_60[7] = 2;
    local_60[2] = (longlong)&PTR_FUN_14b5414d0;
    local_60[8] = (longlong)&LAB_143fa6636;
    local_60[10] = 0;
    local_60[0xc] = (longlong)&PTR_LAB_14b54a520;
    local_60[0xd] = (longlong)FUN_144293980;
    FUN_1410e573a(&local_68);
    local_58 = local_68;
    local_50 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    FUN_1410e57dc(param_3,&local_58);
    plVar3 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    FUN_1410e5ae4(param_3,1);
    FUN_14580141a(param_4,param_2);
    local_60 = (longlong *)FUN_14001cc68(0x80,0x10);
    local_60[1] = (longlong)&DAT_100000001;
    *local_60 = (longlong)&PTR_FUN_14b5414b0;
    local_68 = local_60 + 2;
    local_60[3] = 0;
    local_60[4] = 0;
    local_60[5] = 0;
    local_60[6] = 0;
    local_60[7] = 2;
    local_60[2] = (longlong)&PTR_FUN_14b5414d0;
    local_60[8] = (longlong)&LAB_143fa6636;
    local_60[10] = 0;
    local_60[0xc] = (longlong)&PTR_LAB_14b54a520;
    local_60[0xd] = (longlong)FUN_144293a5a;
    FUN_1410e573a(&local_68);
    local_58 = local_68;
    local_50 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    FUN_1410e57dc(param_4,&local_58);
    plVar3 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_60)(local_60);
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
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14580350a FUN_14580350a body=70 status=ok
// SIG undefined FUN_14580350a(void)

longlong FUN_14580350a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1458035c6(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x48 + *param_1;
  FUN_145803550(lVar2,1);
  return lVar2;
}



// FUNCTION 145803550 FUN_145803550 body=34 status=ok
// SIG undefined FUN_145803550(void)

void FUN_145803550(longlong param_1,int param_2)

{
  do {
    FUN_145803572(param_1);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 145803572 FUN_145803572 body=83 status=ok
// SIG undefined FUN_145803572(void)

undefined8 * FUN_145803572(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[6] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 7) = (int)plVar2[1];
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 1458035c6 FUN_1458035c6 body=147 status=ok
// SIG undefined FUN_1458035c6(void)

void FUN_1458035c6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14580365a FUN_14580365a body=113 status=ok
// SIG undefined FUN_14580365a(void)

void FUN_14580365a(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)-iVar1) {
      FUN_1458035c6(param_1,iVar1);
    }
    FUN_145803550((longlong)iVar1 * 0x48 + *param_1,-iVar1);
    return;
  }
  if (iVar1 == 0) {
    return;
  }
  FUN_148e555b4(param_1,iVar1);
  FUN_148e55600(param_1);
  return;
}



// FUNCTION 1458036cb FUN_1458036cb body=156 status=ok
// SIG undefined FUN_1458036cb(void)

void FUN_1458036cb(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined4 *local_40;
  undefined8 local_38;
  code *local_30;
  undefined4 **local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &local_1c;
  local_1c = 0;
  local_28 = &local_40;
  local_30 = FUN_1400018c6;
  local_38 = param_1;
  if (DAT_14c947fe0 == 0) {
    lVar1 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar1);
    DAT_14c947fe0 = lVar1;
  }
  FUN_14493bb52(DAT_14c947fe0,param_2,&local_30);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145803776 FUN_145803776 body=40 status=ok
// SIG undefined FUN_145803776(void)

undefined8 FUN_145803776(undefined8 param_1,int param_2)

{
  FUN_14580379e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14580379e FUN_14580379e body=69 status=ok
// SIG undefined FUN_14580379e(void)

void FUN_14580379e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b215150;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_140829532(param_1 + 8);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458037e4 FUN_1458037e4 body=142 status=ok
// SIG undefined FUN_1458037e4(void)

undefined8 *
FUN_1458037e4(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
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
  local_48 = param_1 + 0x50;
  uVar1 = *(undefined1 *)(param_1 + 0x68);
  local_30 = param_3;
  FUN_145803874(param_2 + 1,param_1 + 8,param_1 + 0x20,param_1 + 0x38);
  *(undefined1 *)(param_2 + 0x10) = uVar1;
  *param_2 = &PTR_FUN_14a4c73e0;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145803874 FUN_145803874 body=145 status=ok
// SIG undefined FUN_145803874(void)

void FUN_145803874(undefined4 *param_1,undefined4 *param_2,undefined2 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 3) = uVar2;
  }
  *(undefined2 *)(param_1 + 6) = *param_3;
  cVar1 = *(char *)(param_3 + 10);
  *(char *)(param_1 + 0xb) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_1 + 9) = uVar2;
  }
  param_1[0xc] = *param_4;
  cVar1 = *(char *)(param_4 + 4);
  *(char *)(param_1 + 0x10) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_4 + 2);
  }
  param_1[0x12] = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x16) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_5 + 2);
  }
  param_1[0x18] = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x1c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_6 + 2);
  }
  return;
}



// FUNCTION 145803906 FUN_145803906 body=154 status=ok
// SIG undefined FUN_145803906(void)

undefined8 *
FUN_145803906(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined2 *local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = &local_30;
  local_2e = param_5;
  local_28 = *param_4;
  local_20 = 1;
  local_40 = param_1 + 0x68;
  local_48 = param_1 + 0x50;
  uVar1 = *(undefined1 *)(param_1 + 0x80);
  local_30 = param_3;
  FUN_145803a40(param_2 + 1,param_1 + 8,param_1 + 0x20,param_1 + 0x38);
  *(undefined1 *)(param_2 + 0x13) = uVar1;
  *param_2 = &PTR_FUN_14a4c7400;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458039a2 FUN_1458039a2 body=157 status=ok
// SIG undefined FUN_1458039a2(void)

undefined8 *
FUN_1458039a2(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined2 *local_40;
  undefined2 local_38 [2];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = local_38;
  local_34 = *param_4;
  uStack_30 = param_4[1];
  uStack_2c = param_4[2];
  uStack_28 = param_4[3];
  local_24 = 1;
  local_48 = param_1 + 0x80;
  local_50 = param_1 + 0x68;
  local_58 = param_1 + 0x50;
  uVar1 = *(undefined1 *)(param_1 + 0x98);
  local_38[0] = param_3;
  FUN_145803afa(param_2 + 1,param_1 + 8,param_1 + 0x20,param_1 + 0x38);
  *(undefined1 *)(param_2 + 0x16) = uVar1;
  *param_2 = &PTR_FUN_14a4c7420;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145803a40 FUN_145803a40 body=185 status=ok
// SIG undefined FUN_145803a40(void)

void FUN_145803a40(undefined4 *param_1,undefined4 *param_2,undefined2 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 3) = uVar2;
  }
  *(undefined2 *)(param_1 + 6) = *param_3;
  cVar1 = *(char *)(param_3 + 10);
  *(char *)(param_1 + 0xb) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_1 + 9) = uVar2;
  }
  param_1[0xc] = *param_4;
  cVar1 = *(char *)(param_4 + 4);
  *(char *)(param_1 + 0x10) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_4 + 2);
  }
  param_1[0x12] = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x16) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_5 + 2);
  }
  param_1[0x18] = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x1c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_6 + 2);
  }
  param_1[0x1e] = *param_7;
  cVar1 = *(char *)(param_7 + 4);
  *(char *)(param_1 + 0x22) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_7 + 2);
  }
  return;
}



// FUNCTION 145803afa FUN_145803afa body=230 status=ok
// SIG undefined FUN_145803afa(void)

void FUN_145803afa(undefined4 *param_1,undefined4 *param_2,undefined2 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined2 *param_8)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 3) = uVar2;
  }
  *(undefined2 *)(param_1 + 6) = *param_3;
  cVar1 = *(char *)(param_3 + 10);
  *(char *)(param_1 + 0xb) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_1 + 9) = uVar2;
  }
  param_1[0xc] = *param_4;
  cVar1 = *(char *)(param_4 + 4);
  *(char *)(param_1 + 0x10) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_4 + 2);
  }
  param_1[0x12] = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x16) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_5 + 2);
  }
  param_1[0x18] = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x1c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_6 + 2);
  }
  param_1[0x1e] = *param_7;
  cVar1 = *(char *)(param_7 + 4);
  *(char *)(param_1 + 0x22) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_7 + 2);
  }
  *(undefined2 *)(param_1 + 0x24) = *param_8;
  cVar1 = *(char *)(param_8 + 10);
  *(char *)(param_1 + 0x29) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_8 + 6);
    *(undefined8 *)(param_1 + 0x25) = *(undefined8 *)(param_8 + 2);
    *(undefined8 *)(param_1 + 0x27) = uVar2;
  }
  return;
}



// FUNCTION 145803be0 FUN_145803be0 body=268 status=ok
// SIG undefined FUN_145803be0(void)

void FUN_145803be0(longlong param_1)

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
  FUN_145803cee(puVar4);
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



// FUNCTION 145803cee FUN_145803cee body=104 status=ok
// SIG undefined FUN_145803cee(void)

void FUN_145803cee(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0xc0,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a4c3a40;
  FUN_145803d56(param_1 + 1,param_2 + 8);
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0xb8);
  *param_1 = &PTR_FUN_14a4c7440;
  return;
}



// FUNCTION 145803d56 FUN_145803d56 body=223 status=ok
// SIG undefined FUN_145803d56(void)

void FUN_145803d56(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 3) = uVar2;
  }
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  cVar1 = *(char *)(param_2 + 0xb);
  *(char *)(param_1 + 0xb) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 9);
    *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_2 + 7);
    *(undefined8 *)(param_1 + 9) = uVar2;
  }
  param_1[0xc] = param_2[0xc];
  cVar1 = *(char *)(param_2 + 0x10);
  *(char *)(param_1 + 0x10) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  }
  param_1[0x12] = param_2[0x12];
  cVar1 = *(char *)(param_2 + 0x16);
  *(char *)(param_1 + 0x16) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  }
  param_1[0x18] = param_2[0x18];
  cVar1 = *(char *)(param_2 + 0x1c);
  *(char *)(param_1 + 0x1c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  }
  param_1[0x1e] = param_2[0x1e];
  cVar1 = *(char *)(param_2 + 0x22);
  *(char *)(param_1 + 0x22) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  }
  *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(param_2 + 0x24);
  cVar1 = *(char *)(param_2 + 0x29);
  *(char *)(param_1 + 0x29) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x27);
    *(undefined8 *)(param_1 + 0x25) = *(undefined8 *)(param_2 + 0x25);
    *(undefined8 *)(param_1 + 0x27) = uVar2;
  }
  param_1[0x2a] = param_2[0x2a];
  return;
}



// FUNCTION 145803e52 FUN_145803e52 body=37 status=ok
// SIG undefined FUN_145803e52(void)

ulonglong FUN_145803e52(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = FUN_145803e78();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1410e9f0d(param_2);
    uVar2 = uVar2 ^ 1;
  }
  return uVar2;
}


