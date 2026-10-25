// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1478c2a74 FUN_1478c2a74 body=128 status=ok
// SIG undefined FUN_1478c2a74(void)

void FUN_1478c2a74(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405b3ec2(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1478c2af6 FUN_1478c2af6 body=122 status=ok
// SIG undefined FUN_1478c2af6(void)

longlong FUN_1478c2af6(longlong param_1,longlong param_2)

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
    FUN_1478c2b70(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1478c2b70 FUN_1478c2b70 body=121 status=ok
// SIG undefined FUN_1478c2b70(void)

undefined8 * FUN_1478c2b70(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1478c2bea(param_1,uVar1);
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



// FUNCTION 1478c2bea FUN_1478c2bea body=128 status=ok
// SIG undefined FUN_1478c2bea(void)

void FUN_1478c2bea(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1478c2c6c FUN_1478c2c6c body=106 status=ok
// SIG undefined FUN_1478c2c6c(void)

undefined8 * FUN_1478c2c6c(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
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
  undefined4 uVar12;
  
  *param_1 = &PTR_FUN_14a78dee8;
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 0x20);
  uVar8 = *(undefined4 *)(param_2 + 0x24);
  uVar9 = *(undefined4 *)(param_2 + 0x28);
  uVar10 = *(undefined4 *)(param_2 + 0x2c);
  uVar11 = *(undefined4 *)(param_2 + 0x30);
  uVar12 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 3) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 4) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar8;
  *(undefined4 *)(param_1 + 5) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar10;
  *(undefined4 *)(param_1 + 6) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar12;
  FUN_140501b78(param_1 + 7,param_2 + 0x38);
  lVar1 = *(longlong *)(param_2 + 0xb8);
  param_1[0x17] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1478c2cd6 FUN_1478c2cd6 body=286 status=ok
// SIG undefined FUN_1478c2cd6(void)

undefined8 * FUN_1478c2cd6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1477e82a0(param_1,iVar1,0);
    FUN_1477e8302(*param_1,uVar2,iVar1);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1477e8354(param_1 + 2,iVar1,0);
    FUN_1477e83b6(param_1[2],uVar2,iVar1);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  uVar2 = param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1477e8408(param_1 + 4,iVar1,0);
    FUN_1477e846a(param_1[4],uVar2,iVar1);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  uVar2 = param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1477e84bc(param_1 + 6,iVar1,0);
    FUN_1477e851e(param_1[6],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1478c2df4 FUN_1478c2df4 body=38 status=ok
// SIG undefined FUN_1478c2df4(void)

undefined8 FUN_1478c2df4(undefined8 param_1,int param_2)

{
  FUN_1458219bc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478c2e1a FUN_1478c2e1a body=38 status=ok
// SIG undefined FUN_1478c2e1a(void)

undefined8 FUN_1478c2e1a(undefined8 param_1,int param_2)

{
  FUN_145821ae8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478c2e40 FUN_1478c2e40 body=122 status=ok
// SIG undefined FUN_1478c2e40(void)

longlong FUN_1478c2e40(longlong param_1,longlong param_2)

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
    FUN_1478c2eba(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1478c2eba FUN_1478c2eba body=121 status=ok
// SIG undefined FUN_1478c2eba(void)

undefined8 * FUN_1478c2eba(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14707eda8(param_1,uVar1);
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



// FUNCTION 1478c2f34 FUN_1478c2f34 body=54 status=ok
// SIG undefined FUN_1478c2f34(void)

void FUN_1478c2f34(longlong *param_1)

{
  FUN_1478c2bea(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478c2f6a FUN_1478c2f6a body=54 status=ok
// SIG undefined FUN_1478c2f6a(void)

void FUN_1478c2f6a(longlong *param_1)

{
  FUN_1478c2a74(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478c2fa0 FUN_1478c2fa0 body=122 status=ok
// SIG undefined FUN_1478c2fa0(void)

longlong FUN_1478c2fa0(longlong param_1,longlong param_2)

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
    FUN_1478c301a(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1478c301a FUN_1478c301a body=115 status=ok
// SIG undefined FUN_1478c301a(void)

undefined8 * FUN_1478c301a(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1407495a2(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_144869a3c(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 1478c308e FUN_1478c308e body=29 status=ok
// SIG undefined FUN_1478c308e(void)

undefined8 FUN_1478c308e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478c30ac FUN_1478c30ac body=120 status=ok
// SIG undefined FUN_1478c30ac(void)

undefined8 * FUN_1478c30ac(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac9f48) {
    FUN_144b3d300(&DAT_14cac9f48);
    if (DAT_14cac9f48 == -1) {
      FUN_1446ddc76(&DAT_14cac9f40,"IsRootComponentChanged",1);
      _Init_thread_footer(&DAT_14cac9f48);
    }
  }
  *param_1 = DAT_14cac9f40;
  return param_1;
}



// FUNCTION 1478c3124 FUN_1478c3124 body=38 status=ok
// SIG undefined FUN_1478c3124(void)

void FUN_1478c3124(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1448eac94(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 1478c314a FUN_1478c314a body=147 status=ok
// SIG undefined FUN_1478c314a(void)

void FUN_1478c314a(longlong param_1,int param_2)

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



// FUNCTION 1478c31de FUN_1478c31de body=90 status=ok
// SIG undefined FUN_1478c31de(void)

void FUN_1478c31de(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 8 + (longlong)(int)param_2 * 0x18) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x18);
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)(int)(~param_2 + iVar2) * 0x18);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1478c3238 FUN_1478c3238 body=62 status=ok
// SIG undefined FUN_1478c3238(void)

void FUN_1478c3238(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1478c3276(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 1478c3276 FUN_1478c3276 body=112 status=ok
// SIG undefined FUN_1478c3276(void)

ulonglong FUN_1478c3276(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1478c32b0;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_1478c32b0:
  return param_2 & 0xffffffff;
}



// FUNCTION 1478c32e6 FUN_1478c32e6 body=112 status=ok
// SIG undefined FUN_1478c32e6(void)

void FUN_1478c32e6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 1478c3356 FUN_1478c3356 body=357 status=ok
// SIG undefined FUN_1478c3356(void)

longlong * FUN_1478c3356(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_147877310(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1478c32e6(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xaaaaa < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1478c34bc(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_1478b100e(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1478c350e(param_2);
        FUN_1478c34bc(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1478c34bc FUN_1478c34bc body=82 status=ok
// SIG undefined FUN_1478c34bc(void)

longlong * FUN_1478c34bc(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1478c350e FUN_1478c350e body=63 status=ok
// SIG undefined FUN_1478c350e(void)

longlong FUN_1478c350e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1478c314a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_1478c354d(lVar2);
  return lVar2;
}



// FUNCTION 1478c354d FUN_1478c354d body=14 status=ok
// SIG undefined FUN_1478c354d(void)

void FUN_1478c354d(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 1478c355c FUN_1478c355c body=98 status=ok
// SIG undefined FUN_1478c355c(void)

void FUN_1478c355c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1478c35be FUN_1478c35be body=71 status=ok
// SIG undefined FUN_1478c35be(void)

undefined8 * FUN_1478c35be(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a78d610;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478c3606 FUN_1478c3606 body=68 status=ok
// SIG undefined FUN_1478c3606(void)

void FUN_1478c3606(longlong param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar2 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + 0x20);
    }
    uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001478c363f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1478c364c FUN_1478c364c body=71 status=ok
// SIG undefined FUN_1478c364c(void)

undefined8 * FUN_1478c364c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a78d650;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478c3694 FUN_1478c3694 body=68 status=ok
// SIG undefined FUN_1478c3694(void)

void FUN_1478c3694(longlong param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar2 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + 0x20);
    }
    uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001478c36cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1478c36d8 FUN_1478c36d8 body=14 status=ok
// SIG undefined FUN_1478c36d8(void)

void FUN_1478c36d8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 1478c36e6 FUN_1478c36e6 body=147 status=ok
// SIG undefined FUN_1478c36e6(void)

void FUN_1478c36e6(longlong param_1,int param_2)

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



// FUNCTION 1478c377a FUN_1478c377a body=131 status=ok
// SIG undefined FUN_1478c377a(void)

void FUN_1478c377a(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  LOCK();
  plVar1 = (longlong *)*param_1;
  *param_1 = 0;
  UNLOCK();
  if (plVar1 != (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
    do {
      plVar4 = plVar1;
      LOCK();
      plVar1 = (longlong *)*plVar4;
      *plVar4 = (longlong)plVar3;
      UNLOCK();
      plVar3 = plVar4;
    } while (plVar1 != (longlong *)0x0);
    do {
      plVar1 = (longlong *)*plVar4;
      puVar2 = (undefined8 *)plVar4[1];
      plVar4[1] = 0;
      (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,puVar2);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      puVar2 = (undefined8 *)plVar4[1];
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      FUN_1400020a8(plVar4);
      plVar4 = plVar1;
    } while (plVar1 != (longlong *)0x0);
  }
  return;
}



// FUNCTION 1478c37fe FUN_1478c37fe body=48 status=ok
// SIG undefined FUN_1478c37fe(void)

void FUN_1478c37fe(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1478c3846 FUN_1478c3846 body=52 status=ok
// SIG undefined FUN_1478c3846(void)

void FUN_1478c3846(longlong *param_1)

{
  FUN_14582e6c8(param_1 + 2);
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478c3870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1478c387a FUN_1478c387a body=29 status=ok
// SIG undefined FUN_1478c387a(void)

undefined8 FUN_1478c387a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478c38ba FUN_1478c38ba body=93 status=ok
// SIG undefined FUN_1478c38ba(void)

void FUN_1478c38ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a78e0f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a78d920;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1478c3918 FUN_1478c3918 body=93 status=ok
// SIG undefined FUN_1478c3918(void)

void FUN_1478c3918(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a78e0f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a78d920;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1478c3976 FUN_1478c3976 body=126 status=ok
// SIG undefined FUN_1478c3976(void)

void FUN_1478c3976(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a78e0f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a78d920;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478c39e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478c3a02 FUN_1478c3a02 body=23 status=ok
// SIG undefined FUN_1478c3a02(void)

undefined8 FUN_1478c3a02(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 1478c3a1c FUN_1478c3a1c body=115 status=ok
// SIG undefined FUN_1478c3a1c(void)

void FUN_1478c3a1c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1478c3a8f FUN_1478c3a8f body=52 status=ok
// SIG undefined FUN_1478c3a8f(void)

void FUN_1478c3a8f(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1478c3ac4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 1478c3ac4 FUN_1478c3ac4 body=93 status=ok
// SIG undefined FUN_1478c3ac4(void)

undefined2 * FUN_1478c3ac4(undefined2 *param_1,undefined2 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 4);
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 10) = 0;
  }
  else {
    FUN_1477ec236(param_1 + 4,iVar1,0);
    FUN_1477ec2ab(*(undefined8 *)(param_1 + 4),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1478c3b22 FUN_1478c3b22 body=68 status=ok
// SIG undefined FUN_1478c3b22(void)

void FUN_1478c3b22(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1478c3b66();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1478c3b66 FUN_1478c3b66 body=322 status=ok
// SIG undefined FUN_1478c3b66(void)

void FUN_1478c3b66(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
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



// FUNCTION 1478c3caa FUN_1478c3caa body=68 status=ok
// SIG undefined FUN_1478c3caa(void)

void FUN_1478c3caa(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1478c3cee();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1405b3ec2(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1478c3cee FUN_1478c3cee body=322 status=ok
// SIG undefined FUN_1478c3cee(void)

void FUN_1478c3cee(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
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



// FUNCTION 1478c3e32 FUN_1478c3e32 body=68 status=ok
// SIG undefined FUN_1478c3e32(void)

void FUN_1478c3e32(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1478c3e76();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1478c3e76 FUN_1478c3e76 body=322 status=ok
// SIG undefined FUN_1478c3e76(void)

void FUN_1478c3e76(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
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



// FUNCTION 1478c3fba FUN_1478c3fba body=230 status=ok
// SIG undefined FUN_1478c3fba(void)

int * FUN_1478c3fba(longlong *param_1,int *param_2)

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



// FUNCTION 1478c40a0 FUN_1478c40a0 body=447 status=ok
// SIG undefined FUN_1478c40a0(void)

void FUN_1478c40a0(longlong *param_1)

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
        uVar10 = (longlong)((int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4) &
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



// FUNCTION 1478c4260 FUN_1478c4260 body=149 status=ok
// SIG undefined FUN_1478c4260(void)

void FUN_1478c4260(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xb8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb8)) {
      uVar5 = uVar4 / 0xb8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1478c42f6 FUN_1478c42f6 body=147 status=ok
// SIG undefined FUN_1478c42f6(void)

void FUN_1478c42f6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc0)) {
      uVar5 = uVar4 / 0xc0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1478c438a FUN_1478c438a body=120 status=ok
// SIG undefined FUN_1478c438a(void)

undefined1 * FUN_1478c438a(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  
  *param_1 = *param_2;
  lVar1 = *(longlong *)(param_2 + 8);
  *(longlong *)(param_1 + 8) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar5 = DAT_14c950c29;
  lVar1 = *(longlong *)(param_2 + 0x10);
  *(longlong *)(param_1 + 0x10) = lVar1;
  if ((lVar1 != 0 & bVar5) == 1) {
    FUN_1456cec3c();
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  FUN_1478c4402(param_1 + 0x30,param_2 + 0x30);
  return param_1;
}



// FUNCTION 1478c4402 FUN_1478c4402 body=164 status=ok
// SIG undefined FUN_1478c4402(void)

undefined8 * FUN_1478c4402(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_14a176fc0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  *(undefined2 *)((longlong)param_1 + 0x6c) = *(undefined2 *)(param_2 + 0x6c);
  *param_1 = &DAT_14a176f00;
  param_1[0xe] = 0;
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined8 *)(param_2 + 0x78) = 0;
  lVar1 = *(longlong *)(param_2 + 0x80);
  param_1[0x10] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1478c44a6 FUN_1478c44a6 body=149 status=ok
// SIG undefined FUN_1478c44a6(void)

void FUN_1478c44a6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xb8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb8)) {
      uVar5 = uVar4 / 0xb8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1478c453c FUN_1478c453c body=48 status=ok
// SIG undefined FUN_1478c453c(void)

void FUN_1478c453c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc0,8);
  }
  return;
}



// FUNCTION 1478c456c FUN_1478c456c body=96 status=ok
// SIG undefined FUN_1478c456c(void)

void FUN_1478c456c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1478c45cc FUN_1478c45cc body=132 status=ok
// SIG undefined FUN_1478c45cc(void)

void FUN_1478c45cc(longlong param_1,int param_2)

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



// FUNCTION 1478c4652 FUN_1478c4652 body=226 status=ok
// SIG undefined FUN_1478c4652(void)

void FUN_1478c4652(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5),
           cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1478c46fa;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1478c46fa:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1478c4734 FUN_1478c4734 body=304 status=ok
// SIG undefined FUN_1478c4734(void)

undefined4 * FUN_1478c4734(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1478c4866(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  local_40[1] = *puVar1;
  local_40[2] = 0xffffffff;
  local_4c = local_48[0];
  local_58 = 0;
  cVar2 = FUN_1478c494c(param_1,uVar4,local_40);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[3] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[2] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1478c4a6a(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c4866 FUN_1478c4866 body=229 status=ok
// SIG undefined FUN_1478c4866(void)

int * FUN_1478c4866(longlong *param_1,int *param_2)

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



// FUNCTION 1478c494c FUN_1478c494c body=147 status=ok
// SIG undefined FUN_1478c494c(void)

void FUN_1478c494c(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar4 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar4 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_1478c49e0(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          goto LAB_1478c49b7;
        }
        iVar4 = *(int *)(puVar1 + 1);
      } while (iVar4 != -1);
    }
  }
  uVar2 = 0;
LAB_1478c49b7:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 1478c49e0 FUN_1478c49e0 body=138 status=ok
// SIG undefined FUN_1478c49e0(void)

void FUN_1478c49e0(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1478c4a6a FUN_1478c4a6a body=422 status=ok
// SIG undefined FUN_1478c4a6a(void)

void FUN_1478c4a6a(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
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



// FUNCTION 1478c4c12 FUN_1478c4c12 body=123 status=ok
// SIG undefined FUN_1478c4c12(void)

undefined8 * FUN_1478c4c12(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1478c4c8e();
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



// FUNCTION 1478c4c8e FUN_1478c4c8e body=146 status=ok
// SIG undefined FUN_1478c4c8e(void)

longlong * FUN_1478c4c8e(longlong *param_1,longlong *param_2)

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



// FUNCTION 1478c4d20 FUN_1478c4d20 body=132 status=ok
// SIG undefined FUN_1478c4d20(void)

void FUN_1478c4d20(longlong param_1,int param_2)

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



// FUNCTION 1478c4da6 FUN_1478c4da6 body=103 status=ok
// SIG undefined FUN_1478c4da6(void)

undefined8 FUN_1478c4da6(longlong *param_1,int param_2)

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
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_1478c4e0e(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1478c4e0e FUN_1478c4e0e body=96 status=ok
// SIG undefined FUN_1478c4e0e(void)

void FUN_1478c4e0e(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_1456eca48(param_1,param_2,1);
  return;
}



// FUNCTION 1478c4e6e FUN_1478c4e6e body=125 status=ok
// SIG undefined FUN_1478c4e6e(void)

undefined8 FUN_1478c4e6e(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_1478c4eec(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1478c4eec FUN_1478c4eec body=87 status=ok
// SIG undefined FUN_1478c4eec(void)

void FUN_1478c4eec(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_1478c4f44();
  return;
}



// FUNCTION 1478c4f44 FUN_1478c4f44 body=114 status=ok
// SIG undefined FUN_1478c4f44(void)

void FUN_1478c4f44(longlong *param_1,int param_2)

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



// FUNCTION 1478c4fb6 FUN_1478c4fb6 body=96 status=ok
// SIG undefined FUN_1478c4fb6(void)

void FUN_1478c4fb6(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  longlong lVar4;
  
  puVar3 = &DAT_14cac95b8;
  if (DAT_14cac95c0 != (undefined *)0x0) {
    puVar3 = DAT_14cac95c0;
  }
  lVar4 = (longlong)*(int *)(DAT_14cac9580 + 0x1c + (longlong)param_1 * 0x20);
  iVar2 = *(int *)(puVar3 + lVar4 * 4);
  if (iVar2 == param_1) {
    puVar1 = (undefined4 *)(puVar3 + lVar4 * 4);
  }
  else {
    do {
      lVar4 = (longlong)iVar2;
      iVar2 = *(int *)(DAT_14cac9580 + 0x18 + lVar4 * 0x20);
    } while (iVar2 != param_1);
    puVar1 = (undefined4 *)(DAT_14cac9580 + lVar4 * 0x20 + 0x18);
  }
  *puVar1 = *(undefined4 *)(DAT_14cac9580 + (longlong)param_1 * 0x20 + 0x18);
  FUN_1478c5016();
  return;
}



// FUNCTION 1478c5016 FUN_1478c5016 body=128 status=ok
// SIG undefined FUN_1478c5016(void)

void FUN_1478c5016(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cac9580;
  if (DAT_14cac95b4 != 0) {
    *(int *)(DAT_14cac9580 + (longlong)DAT_14cac95b0 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cac95b4) {
    iVar4 = DAT_14cac95b0;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14cac95b4 = DAT_14cac95b4 + 1;
  puVar3 = &DAT_14cac9590;
  if (DAT_14cac95a0 != (undefined *)0x0) {
    puVar3 = DAT_14cac95a0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cac95b0 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1478c5096 FUN_1478c5096 body=318 status=ok
// SIG undefined FUN_1478c5096(void)

undefined4 * FUN_1478c5096(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  undefined *puVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1478c51d6(local_40);
  puVar1 = (undefined4 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  *(undefined4 *)(local_38 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_38 + 0xc) = uVar4;
  *(undefined4 *)(local_38 + 2) = uVar5;
  *(undefined4 *)((longlong)local_38 + 0x14) = uVar6;
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar12 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar7 = FUN_1478c52e4(uVar12,local_38,&local_44);
  uVar4 = local_44;
  if (cVar7 == '\0') {
    uVar8 = DAT_14cac9588 - DAT_14cac95b4;
    iVar11 = 1;
    if (3 < uVar8) {
      uVar10 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar11 <= DAT_14cac95c8)) {
      uVar12 = DAT_14cac95c8 - 1U & uVar12;
      *(uint *)((longlong)local_38 + 0x1c) = uVar12;
      puVar9 = DAT_14cac95c0;
      if (DAT_14cac95c0 == (undefined *)0x0) {
        puVar9 = &DAT_14cac95b8;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)(puVar9 + ((longlong)DAT_14cac95c8 - 1U & (longlong)(int)uVar12) * 4);
      puVar9 = DAT_14cac95c0;
      if (DAT_14cac95c0 == (undefined *)0x0) {
        puVar9 = &DAT_14cac95b8;
      }
      *(undefined4 *)(puVar9 + ((longlong)DAT_14cac95c8 - 1U & (longlong)(int)uVar12) * 4) =
           local_44;
    }
    else {
      DAT_14cac95c8 = iVar11;
      FUN_1478c537a();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c51d6 FUN_1478c51d6 body=269 status=ok
// SIG undefined FUN_1478c51d6(void)

int * FUN_1478c51d6(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cac95b0;
  iVar4 = DAT_14cac9588;
  if (DAT_14cac95b4 == 0) {
    iVar2 = DAT_14cac9588 + 1;
    bVar7 = DAT_14cac958c == DAT_14cac9588;
    DAT_14cac9588 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14cac9580,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cac9590,1);
    puVar3 = DAT_14cac95a0;
    if (DAT_14cac95a0 == (undefined *)0x0) {
      puVar3 = &DAT_14cac9590;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14cac95b0;
    DAT_14cac95b0 = *(int *)(DAT_14cac9580 + 4 + lVar6 * 0x20);
    DAT_14cac95b4 = DAT_14cac95b4 + -1;
    iVar4 = iVar2;
    if (DAT_14cac95b4 != 0) {
      *(undefined4 *)(DAT_14cac9580 + (longlong)DAT_14cac95b0 * 0x20) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cac9590;
  if (DAT_14cac95a0 != (undefined *)0x0) {
    puVar3 = DAT_14cac95a0;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14cac9580;
  return param_1;
}



// FUNCTION 1478c52e4 FUN_1478c52e4 body=149 status=ok
// SIG undefined FUN_1478c52e4(void)

undefined8 FUN_1478c52e4(uint param_1,longlong *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined *puVar7;
  
  if (1 < (uint)(DAT_14cac9588 - DAT_14cac95b4)) {
    puVar7 = &DAT_14cac95b8;
    if (DAT_14cac95c0 != (undefined *)0x0) {
      puVar7 = DAT_14cac95c0;
    }
    iVar6 = *(int *)(puVar7 + (ulonglong)(DAT_14cac95c8 - 1U & param_1) * 4);
    if (iVar6 != -1) {
      do {
        puVar1 = (undefined4 *)(DAT_14cac9580 + (longlong)iVar6 * 0x20);
        if (*param_2 == *(longlong *)(DAT_14cac9580 + (longlong)iVar6 * 0x20)) {
          lVar4 = *param_2;
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar5 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(longlong *)(puVar1 + 4) = param_2[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_1478c5016(*param_3);
          *param_3 = iVar6;
          return 1;
        }
        iVar6 = puVar1[6];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1478c537a FUN_1478c537a body=491 status=ok
// SIG undefined FUN_1478c537a(void)

void FUN_1478c537a(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
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
  if (DAT_14cac95c0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cac95c0,0,0,4);
  }
  uVar2 = DAT_14cac95c8;
  uVar3 = local_50;
  if (DAT_14cac95c8 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cac95b8,0,DAT_14cac95c8,4);
    if (0 < (int)uVar2) {
      do {
        puVar5 = DAT_14cac95c0;
        if (DAT_14cac95c0 == (undefined *)0x0) {
          puVar5 = &DAT_14cac95b8;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cac95c8 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cac9590;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cac95a8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cac9580;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar9 = (longlong)
                ((int)((ulonglong)*(undefined8 *)(lVar1 + lVar6) >> 0x20) * 0x17 +
                (int)*(undefined8 *)(lVar1 + lVar6)) & (longlong)(int)DAT_14cac95c8 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x1c + lVar6) = iVar8;
        puVar5 = DAT_14cac95c0;
        if (DAT_14cac95c0 == (undefined *)0x0) {
          puVar5 = &DAT_14cac95b8;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14cac95c8 - 1U & uVar9) * 4);
        puVar5 = DAT_14cac95c0;
        if (DAT_14cac95c0 == (undefined *)0x0) {
          puVar5 = &DAT_14cac95b8;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14cac95c8 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478c5566 FUN_1478c5566 body=306 status=ok
// SIG undefined FUN_1478c5566(void)

undefined4 * FUN_1478c5566(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  FUN_1478c3fba(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar4 = FUN_1478c569a(param_1,uVar9,local_40,&local_4c);
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
      FUN_1478c40a0(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c569a FUN_1478c569a body=128 status=ok
// SIG undefined FUN_1478c569a(void)

undefined8 FUN_1478c569a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1478c4f44((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1478c571a FUN_1478c571a body=48 status=ok
// SIG undefined FUN_1478c571a(void)

void FUN_1478c571a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xb0,8);
  }
  return;
}



// FUNCTION 1478c574a FUN_1478c574a body=146 status=ok
// SIG undefined FUN_1478c574a(void)

void FUN_1478c574a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xb0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb0)) {
      uVar5 = uVar4 / 0xb0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1478c57de FUN_1478c57de body=31 status=ok
// SIG undefined FUN_1478c57de(void)

undefined8 FUN_1478c57de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478c5820 FUN_1478c5820 body=93 status=ok
// SIG undefined FUN_1478c5820(void)

void FUN_1478c5820(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a78dae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a78da70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1478c587e FUN_1478c587e body=93 status=ok
// SIG undefined FUN_1478c587e(void)

void FUN_1478c587e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a78dae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a78da70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1478c58dc FUN_1478c58dc body=126 status=ok
// SIG undefined FUN_1478c58dc(void)

void FUN_1478c58dc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a78dae0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a78da70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478c594b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478c595a FUN_1478c595a body=52 status=ok
// SIG undefined FUN_1478c595a(void)

void FUN_1478c595a(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 1478c598e FUN_1478c598e body=53 status=ok
// SIG undefined FUN_1478c598e(void)

undefined8
FUN_1478c598e(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3,param_4,param_5,param_6,param_7);
  return 1;
}



// FUNCTION 1478c59c6 FUN_1478c59c6 body=113 status=ok
// SIG undefined FUN_1478c59c6(void)

void FUN_1478c59c6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 1478c5a38 FUN_1478c5a38 body=489 status=ok
// SIG undefined FUN_1478c5a38(void)

int * FUN_1478c5a38(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
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
      FUN_1446efaca(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
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
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x10);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1478c5c22 FUN_1478c5c22 body=204 status=ok
// SIG undefined FUN_1478c5c22(void)

void FUN_1478c5c22(undefined8 param_1,longlong *param_2,undefined8 param_3)

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
      goto LAB_1478c5c75;
    }
  }
  lVar2 = 0;
LAB_1478c5c75:
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
  FUN_1478c5e4e(param_1,&local_30,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c5e4e FUN_1478c5e4e body=463 status=ok
// SIG undefined FUN_1478c5e4e(void)

void FUN_1478c5e4e(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
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
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x268);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar8) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_90 + (longlong)iStack_74 * 0x10);
      if (lVar4 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_1478c5f7b:
          lVar6 = FUN_144a78d6a();
          if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_1478c5f93;
          lVar7 = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar7 = lVar5;
          }
        }
        else {
          if (lVar5 != 0) goto LAB_1478c5f7b;
LAB_1478c5f93:
          lVar7 = 0;
        }
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          iVar3 = *(int *)(param_3 + 200);
          *(uint *)(param_3 + 200) = iVar3 + 1U;
          if (*(uint *)(param_3 + 0xcc) < iVar3 + 1U) {
            FUN_14024d3e4(param_3,iVar3);
          }
          lVar5 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar5 = param_3;
          }
          *(longlong *)(lVar5 + (longlong)iVar3 * 8) = lVar4;
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar8));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478c601e FUN_1478c601e body=74 status=ok
// SIG undefined FUN_1478c601e(void)

undefined8 * FUN_1478c601e(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a78db50;
  puVar1 = TlsGetValue(DAT_14c761240);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c761240,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478c6068 FUN_1478c6068 body=322 status=ok
// SIG undefined FUN_1478c6068(void)

void FUN_1478c6068(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 1478c61ac FUN_1478c61ac body=428 status=ok
// SIG undefined FUN_1478c61ac(void)

void FUN_1478c61ac(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_14474875a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1446efaca(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x10 + lVar2 + -0xc);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -4;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 1478c635a FUN_1478c635a body=76 status=ok
// SIG undefined FUN_1478c635a(void)

void FUN_1478c635a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145a71146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1478c6397;
    }
  }
  lVar2 = 0;
LAB_1478c6397:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1478c63a6 FUN_1478c63a6 body=136 status=ok
// SIG undefined FUN_1478c63a6(void)

void FUN_1478c63a6(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != &DAT_14cac95d8) {
    local_20 = 0;
    local_18 = 0;
    plVar1 = (longlong *)*param_1;
    if (plVar1 != (longlong *)0x0 && (int)param_1[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_20);
    }
    FUN_144a450dc(&DAT_14cac95d8,&local_20);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c6430 FUN_1478c6430 body=266 status=ok
// SIG undefined FUN_1478c6430(void)

undefined8 * FUN_1478c6430(char *param_1,undefined8 *param_2)

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
  if (*param_1 != '\x01') goto LAB_1478c6454;
  FUN_1478c653c(&local_38);
  FUN_14018932e(&local_30,param_1 + -0x201,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_1478c6454;
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
joined_r0x0001478c64f8:
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
        goto joined_r0x0001478c64f8;
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
LAB_1478c6454:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c653c FUN_1478c653c body=120 status=ok
// SIG undefined FUN_1478c653c(void)

undefined8 * FUN_1478c653c(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac9f68) {
    FUN_144b3d300(&DAT_14cac9f68);
    if (DAT_14cac9f68 == -1) {
      FUN_1446ddc76(&DAT_14cac9f60,"OnTakePointDamage",1);
      _Init_thread_footer(&DAT_14cac9f68);
    }
  }
  *param_1 = DAT_14cac9f60;
  return param_1;
}



// FUNCTION 1478c65b4 FUN_1478c65b4 body=266 status=ok
// SIG undefined FUN_1478c65b4(void)

undefined8 * FUN_1478c65b4(char *param_1,undefined8 *param_2)

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
  if (*param_1 != '\x01') goto LAB_1478c65d8;
  FUN_1478c66c0(&local_38);
  FUN_14018932e(&local_30,param_1 + -0x202,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_1478c65d8;
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
joined_r0x0001478c667c:
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
        goto joined_r0x0001478c667c;
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
LAB_1478c65d8:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c66c0 FUN_1478c66c0 body=120 status=ok
// SIG undefined FUN_1478c66c0(void)

undefined8 * FUN_1478c66c0(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac9f78) {
    FUN_144b3d300(&DAT_14cac9f78);
    if (DAT_14cac9f78 == -1) {
      FUN_1446ddc76(&DAT_14cac9f70,"OnTakeRadialDamage",1);
      _Init_thread_footer(&DAT_14cac9f78);
    }
  }
  *param_1 = DAT_14cac9f70;
  return param_1;
}



// FUNCTION 1478c6738 FUN_1478c6738 body=266 status=ok
// SIG undefined FUN_1478c6738(void)

undefined8 * FUN_1478c6738(char *param_1,undefined8 *param_2)

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
  if (*param_1 != '\x01') goto LAB_1478c675c;
  FUN_1478c6844(&local_38);
  FUN_14018932e(&local_30,param_1 + -0x200,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_1478c675c;
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
joined_r0x0001478c6800:
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
        goto joined_r0x0001478c6800;
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
LAB_1478c675c:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c6844 FUN_1478c6844 body=120 status=ok
// SIG undefined FUN_1478c6844(void)

undefined8 * FUN_1478c6844(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac9f88) {
    FUN_144b3d300(&DAT_14cac9f88);
    if (DAT_14cac9f88 == -1) {
      FUN_1446ddc76(&DAT_14cac9f80,"OnTakeAnyDamage",1);
      _Init_thread_footer(&DAT_14cac9f88);
    }
  }
  *param_1 = DAT_14cac9f80;
  return param_1;
}



// FUNCTION 1478c68bc FUN_1478c68bc body=104 status=ok
// SIG undefined FUN_1478c68bc(void)

void FUN_1478c68bc(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x18;
    if (0x18 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0xcc)) {
    *(int *)(param_1 + 0xcc) = iVar3;
    FUN_1478c6924(param_1,*(undefined4 *)(param_1 + 200));
    return;
  }
  return;
}



// FUNCTION 1478c6924 FUN_1478c6924 body=141 status=ok
// SIG undefined FUN_1478c6924(void)

void FUN_1478c6924(void *param_1,int param_2,undefined8 param_3)

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
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,8);
  return;
}



// FUNCTION 1478c69b2 FUN_1478c69b2 body=643 status=ok
// SIG undefined FUN_1478c69b2(void)

void FUN_1478c69b2(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar10 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar10;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar9 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar9) || (uStack_130 != lVar10)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        iVar2 = *(int *)(param_3 + 200);
        *(uint *)(param_3 + 200) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0xcc) < iVar2 + 1U) {
          FUN_1478c708e(param_3,iVar2);
        }
        lVar7 = *(longlong *)(param_3 + 0xc0);
        if (*(longlong *)(param_3 + 0xc0) == 0) {
          lVar7 = param_3;
        }
        *(longlong **)(lVar7 + (longlong)iVar2 * 8) = plVar3;
        lVar7 = FUN_144a7f016();
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
             == lVar7 + 0x30)) &&
           (lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar7 != 0)) {
          lVar11 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_118;
          }
          *(longlong *)(puVar8 + lVar11 * 8) = lVar7;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar10 || iStack_144 != iVar9));
    lVar10 = (longlong)(int)local_50;
    puVar8 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if (lVar10 != 0) {
      lVar7 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar8 + lVar7);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1478c69b2(uVar4,&local_168,param_3);
        lVar7 = lVar7 + 8;
      } while (lVar10 * 8 != lVar7);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478c6d88 FUN_1478c6d88 body=772 status=ok
// SIG undefined FUN_1478c6d88(void)

void FUN_1478c6d88(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar12 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar12;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar11 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar11) || (uStack_130 != lVar12)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        lVar8 = *param_2;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_1478c6eac:
          lVar7 = FUN_144a78d6a();
          if ((lVar7 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_1478c6ec4;
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30) {
            lVar9 = lVar8;
          }
        }
        else {
          if (lVar8 != 0) goto LAB_1478c6eac;
LAB_1478c6ec4:
          lVar9 = 0;
        }
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)) {
          iVar2 = *(int *)(param_3 + 200);
          *(uint *)(param_3 + 200) = iVar2 + 1U;
          if (*(uint *)(param_3 + 0xcc) < iVar2 + 1U) {
            FUN_1478c708e(param_3,iVar2);
          }
          lVar8 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar8 = param_3;
          }
          *(longlong **)(lVar8 + (longlong)iVar2 * 8) = plVar3;
        }
        lVar8 = FUN_144a7f016();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
             == lVar8 + 0x30)) &&
           (lVar8 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar8 != 0)) {
          lVar7 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          *(longlong *)(puVar10 + lVar7 * 8) = lVar8;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar12 || iStack_144 != iVar11));
    lVar12 = (longlong)(int)local_50;
    puVar10 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    if (lVar12 != 0) {
      lVar8 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar10 + lVar8);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1478c6d88(uVar4,&local_168,param_3);
        lVar8 = lVar8 + 8;
      } while (lVar12 * 8 != lVar8);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478c708e FUN_1478c708e body=119 status=ok
// SIG undefined FUN_1478c708e(void)

void FUN_1478c708e(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x18;
    if (0x18 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x18 < *(uint *)(param_1 + 0xcc)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xcc) = iVar5;
    FUN_1478c6924(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1478c7106 FUN_1478c7106 body=98 status=ok
// SIG undefined FUN_1478c7106(void)

void FUN_1478c7106(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1478c7168 FUN_1478c7168 body=320 status=ok
// SIG undefined FUN_1478c7168(void)

void FUN_1478c7168(undefined8 param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar1 = FUN_144a78d6a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar3 = *param_2;
      goto LAB_1478c71c0;
    }
  }
  lVar3 = 0;
LAB_1478c71c0:
  lVar2 = FUN_144a78d6a();
  lVar1 = *param_2;
  if (lVar3 == lVar2) {
    if (param_3 == '\0') {
      local_40 = lVar1;
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_1478c7512(param_1,&local_40,param_4);
    }
    else {
      local_38 = lVar1;
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_1478c72aa(param_1,&local_38,param_4);
    }
  }
  else if (param_3 == '\0') {
    local_50 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_1478c792c(param_1,&local_50,param_4);
  }
  else {
    local_48 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_1478c7648(param_1,&local_48,param_4);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c72aa FUN_1478c72aa body=614 status=ok
// SIG undefined FUN_1478c72aa(void)

void FUN_1478c72aa(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar10 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar10;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar9 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar9) || (uStack_130 != lVar10)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1406ca8e4(param_3,iVar2);
        }
        *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
        lVar7 = FUN_144a7f016();
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
             == lVar7 + 0x30)) &&
           (lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar7 != 0)) {
          lVar11 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_118;
          }
          *(longlong *)(puVar8 + lVar11 * 8) = lVar7;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar10 || iStack_144 != iVar9));
    lVar10 = (longlong)(int)local_50;
    puVar8 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if (lVar10 != 0) {
      lVar7 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar8 + lVar7);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1478c72aa(uVar4,&local_168,param_3);
        lVar7 = lVar7 + 8;
      } while (lVar10 * 8 != lVar7);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478c7512 FUN_1478c7512 body=308 status=ok
// SIG undefined FUN_1478c7512(void)

void FUN_1478c7512(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
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
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x268);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        iVar3 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
          FUN_1406ca8e4(param_3,iVar3);
        }
        *(longlong *)(*param_3 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar5));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c7648 FUN_1478c7648 body=739 status=ok
// SIG undefined FUN_1478c7648(void)

void FUN_1478c7648(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar12 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar12;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar11 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar11) || (uStack_130 != lVar12)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        lVar8 = *param_2;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_1478c776c:
          lVar7 = FUN_144a78d6a();
          if ((lVar7 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_1478c7780;
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30) {
            lVar9 = lVar8;
          }
        }
        else {
          if (lVar8 != 0) goto LAB_1478c776c;
LAB_1478c7780:
          lVar9 = 0;
        }
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)) {
          iVar2 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
            FUN_1406ca8e4(param_3,iVar2);
          }
          *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
        }
        lVar8 = FUN_144a7f016();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
             == lVar8 + 0x30)) &&
           (lVar8 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar8 != 0)) {
          lVar7 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          *(longlong *)(puVar10 + lVar7 * 8) = lVar8;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar12 || iStack_144 != iVar11));
    lVar12 = (longlong)(int)local_50;
    puVar10 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    if (lVar12 != 0) {
      lVar8 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar10 + lVar8);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1478c7648(uVar4,&local_168,param_3);
        lVar8 = lVar8 + 8;
      } while (lVar12 * 8 != lVar8);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478c792c FUN_1478c792c body=436 status=ok
// SIG undefined FUN_1478c792c(void)

void FUN_1478c792c(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
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
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x268);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar8) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_90 + (longlong)iStack_74 * 0x10);
      if (lVar4 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_1478c7a42:
          lVar6 = FUN_144a78d6a();
          if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_1478c7a56;
          lVar7 = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar7 = lVar5;
          }
        }
        else {
          if (lVar5 != 0) goto LAB_1478c7a42;
LAB_1478c7a56:
          lVar7 = 0;
        }
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          iVar3 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
            FUN_1406ca8e4(param_3,iVar3);
          }
          *(longlong *)(*param_3 + (longlong)iVar3 * 8) = lVar4;
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar8));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478c7ae2 FUN_1478c7ae2 body=204 status=ok
// SIG undefined FUN_1478c7ae2(void)

void FUN_1478c7ae2(undefined8 param_1,longlong *param_2,undefined8 param_3)

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
      goto LAB_1478c7b35;
    }
  }
  lVar2 = 0;
LAB_1478c7b35:
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
  FUN_1478c7d0e(param_1,&local_30,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c7d0e FUN_1478c7d0e body=463 status=ok
// SIG undefined FUN_1478c7d0e(void)

void FUN_1478c7d0e(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
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
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x268);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar8) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_90 + (longlong)iStack_74 * 0x10);
      if (lVar4 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_1478c7e3b:
          lVar6 = FUN_144a78d6a();
          if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_1478c7e53;
          lVar7 = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar7 = lVar5;
          }
        }
        else {
          if (lVar5 != 0) goto LAB_1478c7e3b;
LAB_1478c7e53:
          lVar7 = 0;
        }
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          iVar3 = *(int *)(param_3 + 200);
          *(uint *)(param_3 + 200) = iVar3 + 1U;
          if (*(uint *)(param_3 + 0xcc) < iVar3 + 1U) {
            FUN_1401bf338(param_3,iVar3);
          }
          lVar5 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar5 = param_3;
          }
          *(longlong *)(lVar5 + (longlong)iVar3 * 8) = lVar4;
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar8));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478c7ede FUN_1478c7ede body=104 status=ok
// SIG undefined FUN_1478c7ede(void)

void FUN_1478c7ede(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x18;
    if (0x18 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0xcc)) {
    *(int *)(param_1 + 0xcc) = iVar3;
    FUN_1478c7f46(param_1,*(undefined4 *)(param_1 + 200));
    return;
  }
  return;
}



// FUNCTION 1478c7f46 FUN_1478c7f46 body=141 status=ok
// SIG undefined FUN_1478c7f46(void)

void FUN_1478c7f46(void *param_1,int param_2,undefined8 param_3)

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
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,8);
  return;
}



// FUNCTION 1478c7fd4 FUN_1478c7fd4 body=643 status=ok
// SIG undefined FUN_1478c7fd4(void)

void FUN_1478c7fd4(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar10 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar10;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar9 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar9) || (uStack_130 != lVar10)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        iVar2 = *(int *)(param_3 + 200);
        *(uint *)(param_3 + 200) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0xcc) < iVar2 + 1U) {
          FUN_1478c86b0(param_3,iVar2);
        }
        lVar7 = *(longlong *)(param_3 + 0xc0);
        if (*(longlong *)(param_3 + 0xc0) == 0) {
          lVar7 = param_3;
        }
        *(longlong **)(lVar7 + (longlong)iVar2 * 8) = plVar3;
        lVar7 = FUN_144a7f016();
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
             == lVar7 + 0x30)) &&
           (lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar7 != 0)) {
          lVar11 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_118;
          }
          *(longlong *)(puVar8 + lVar11 * 8) = lVar7;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar10 || iStack_144 != iVar9));
    lVar10 = (longlong)(int)local_50;
    puVar8 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if (lVar10 != 0) {
      lVar7 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar8 + lVar7);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1478c7fd4(uVar4,&local_168,param_3);
        lVar7 = lVar7 + 8;
      } while (lVar10 * 8 != lVar7);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478c83aa FUN_1478c83aa body=772 status=ok
// SIG undefined FUN_1478c83aa(void)

void FUN_1478c83aa(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar12 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar12;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar11 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar11) || (uStack_130 != lVar12)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        lVar8 = *param_2;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_1478c84ce:
          lVar7 = FUN_144a78d6a();
          if ((lVar7 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_1478c84e6;
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30) {
            lVar9 = lVar8;
          }
        }
        else {
          if (lVar8 != 0) goto LAB_1478c84ce;
LAB_1478c84e6:
          lVar9 = 0;
        }
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)) {
          iVar2 = *(int *)(param_3 + 200);
          *(uint *)(param_3 + 200) = iVar2 + 1U;
          if (*(uint *)(param_3 + 0xcc) < iVar2 + 1U) {
            FUN_1478c86b0(param_3,iVar2);
          }
          lVar8 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar8 = param_3;
          }
          *(longlong **)(lVar8 + (longlong)iVar2 * 8) = plVar3;
        }
        lVar8 = FUN_144a7f016();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
             == lVar8 + 0x30)) &&
           (lVar8 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar8 != 0)) {
          lVar7 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          *(longlong *)(puVar10 + lVar7 * 8) = lVar8;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar12 || iStack_144 != iVar11));
    lVar12 = (longlong)(int)local_50;
    puVar10 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    if (lVar12 != 0) {
      lVar8 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar10 + lVar8);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1478c83aa(uVar4,&local_168,param_3);
        lVar8 = lVar8 + 8;
      } while (lVar12 * 8 != lVar8);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478c86b0 FUN_1478c86b0 body=119 status=ok
// SIG undefined FUN_1478c86b0(void)

void FUN_1478c86b0(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x18;
    if (0x18 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x18 < *(uint *)(param_1 + 0xcc)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xcc) = iVar5;
    FUN_1478c7f46(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1478c8728 FUN_1478c8728 body=138 status=ok
// SIG undefined FUN_1478c8728(void)

void FUN_1478c8728(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1478c87b8 FUN_1478c87b8 body=29 status=ok
// SIG undefined FUN_1478c87b8(void)

bool FUN_1478c87b8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1478c87d6 FUN_1478c87d6 body=26 status=ok
// SIG undefined FUN_1478c87d6(void)

bool FUN_1478c87d6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1478c87f0 FUN_1478c87f0 body=93 status=ok
// SIG undefined FUN_1478c87f0(void)

void FUN_1478c87f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a78db60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1478c884e FUN_1478c884e body=126 status=ok
// SIG undefined FUN_1478c884e(void)

void FUN_1478c884e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a78db60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478c88bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478c88cc FUN_1478c88cc body=132 status=ok
// SIG undefined FUN_1478c88cc(void)

void FUN_1478c88cc(longlong param_1,int param_2)

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



// FUNCTION 1478c8952 FUN_1478c8952 body=113 status=ok
// SIG undefined FUN_1478c8952(void)

void FUN_1478c8952(longlong param_1,int param_2)

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



// FUNCTION 1478c89c3 FUN_1478c89c3 body=753 status=ok
// SIG undefined FUN_1478c89c3(void)

void FUN_1478c89c3(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  undefined8 *puVar16;
  int iVar17;
  int iVar18;
  undefined8 *puVar19;
  bool bVar20;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    iVar13 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar18 = iVar13;
joined_r0x0001478c89f7:
    do {
      iVar15 = iVar13 * 2 + 1;
      if (iVar15 < (int)param_2) {
        iVar17 = iVar13 * 2 + 2;
        if ((iVar17 < (int)param_2) &&
           (*(float *)(param_1 + (longlong)iVar15 * 6 + 3) <
            *(float *)(param_1 + (longlong)iVar17 * 6 + 3) ||
            *(float *)(param_1 + (longlong)iVar15 * 6 + 3) ==
            *(float *)(param_1 + (longlong)iVar17 * 6 + 3))) {
          iVar15 = iVar17;
        }
        if (*(float *)(param_1 + (longlong)iVar13 * 6 + 3) <=
            *(float *)(param_1 + (longlong)iVar15 * 6 + 3) &&
            *(float *)(param_1 + (longlong)iVar15 * 6 + 3) !=
            *(float *)(param_1 + (longlong)iVar13 * 6 + 3)) {
          puVar19 = param_1 + (longlong)iVar13 * 6;
          puVar16 = param_1 + (longlong)iVar15 * 6;
          uVar2 = *puVar19;
          uVar3 = puVar19[1];
          uVar4 = puVar19[2];
          uVar5 = puVar19[3];
          uVar6 = puVar19[4];
          uVar7 = puVar19[5];
          uVar8 = *puVar16;
          uVar9 = puVar16[1];
          uVar10 = puVar16[2];
          uVar11 = puVar16[3];
          uVar12 = puVar16[5];
          puVar19[4] = puVar16[4];
          puVar19[5] = uVar12;
          puVar19[2] = uVar10;
          puVar19[3] = uVar11;
          *puVar19 = uVar8;
          puVar19[1] = uVar9;
          local_48._0_4_ = (undefined4)uVar2;
          local_48._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_40._0_4_ = (undefined4)uVar3;
          uStack_40._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_28._0_4_ = (undefined4)uVar6;
          local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar7;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          *(undefined4 *)(puVar16 + 4) = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar16 + 0x24) = local_28._4_4_;
          *(undefined4 *)(puVar16 + 5) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar16 + 0x2c) = uStack_20._4_4_;
          *(undefined4 *)(puVar16 + 2) = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar16 + 0x14) = local_38._4_4_;
          *(undefined4 *)(puVar16 + 3) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar16 + 0x1c) = uStack_30._4_4_;
          *(undefined4 *)puVar16 = (undefined4)local_48;
          *(undefined4 *)((longlong)puVar16 + 4) = local_48._4_4_;
          *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_40._4_4_;
          iVar13 = iVar15;
          local_48 = uVar2;
          uStack_40 = uVar3;
          local_38 = uVar4;
          uStack_30 = uVar5;
          local_28 = uVar6;
          uStack_20 = uVar7;
          goto joined_r0x0001478c89f7;
        }
      }
      bVar20 = iVar18 != 0;
      iVar13 = iVar18 + -1;
      iVar18 = iVar13;
    } while (bVar20);
    if (1 < (int)param_2) {
      uVar14 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar5 = param_1[3];
      uVar6 = param_1[4];
      uVar7 = param_1[5];
      uVar8 = param_1[uVar14 * 6];
      uVar9 = (param_1 + uVar14 * 6)[1];
      uVar10 = param_1[uVar14 * 6 + 2];
      uVar11 = (param_1 + uVar14 * 6 + 2)[1];
      uVar12 = (param_1 + uVar14 * 6 + 4)[1];
      param_1[4] = param_1[uVar14 * 6 + 4];
      param_1[5] = uVar12;
      param_1[2] = uVar10;
      param_1[3] = uVar11;
      *param_1 = uVar8;
      param_1[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar2;
      local_48._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar3;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_38._0_4_ = (undefined4)uVar4;
      local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar5;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_28._0_4_ = (undefined4)uVar6;
      local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar7;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar16 = param_1 + uVar14 * 6 + 4;
      *(undefined4 *)puVar16 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar16 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_20._4_4_;
      puVar16 = param_1 + uVar14 * 6 + 2;
      *(undefined4 *)puVar16 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar16 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_30._4_4_;
      puVar16 = param_1 + uVar14 * 6;
      *(undefined4 *)puVar16 = (undefined4)local_48;
      *(undefined4 *)((longlong)puVar16 + 4) = local_48._4_4_;
      *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_40._4_4_;
      local_48 = uVar2;
      uStack_40 = uVar3;
      local_38 = uVar4;
      uStack_30 = uVar5;
      local_28 = uVar6;
      uStack_20 = uVar7;
      if (param_2 != 2) {
        do {
          iVar13 = 0;
          iVar15 = 1;
          iVar18 = 0;
          do {
            iVar13 = iVar13 + 2;
            iVar17 = iVar15;
            if (((longlong)iVar13 < (longlong)uVar14) &&
               (*(float *)(param_1 + (longlong)iVar15 * 6 + 3) <
                *(float *)(param_1 + (longlong)iVar13 * 6 + 3) ||
                *(float *)(param_1 + (longlong)iVar15 * 6 + 3) ==
                *(float *)(param_1 + (longlong)iVar13 * 6 + 3))) {
              iVar17 = iVar13;
            }
            if (*(float *)(param_1 + (longlong)iVar17 * 6 + 3) <
                *(float *)(param_1 + (longlong)iVar18 * 6 + 3) ||
                *(float *)(param_1 + (longlong)iVar17 * 6 + 3) ==
                *(float *)(param_1 + (longlong)iVar18 * 6 + 3)) break;
            puVar19 = param_1 + (longlong)iVar18 * 6;
            puVar16 = param_1 + (longlong)iVar17 * 6;
            uVar2 = *puVar19;
            uVar3 = puVar19[1];
            uVar4 = puVar19[2];
            uVar5 = puVar19[3];
            uVar6 = puVar19[4];
            uVar7 = puVar19[5];
            uVar8 = *puVar16;
            uVar9 = puVar16[1];
            uVar10 = puVar16[2];
            uVar11 = puVar16[3];
            uVar12 = puVar16[5];
            puVar19[4] = puVar16[4];
            puVar19[5] = uVar12;
            puVar19[2] = uVar10;
            puVar19[3] = uVar11;
            *puVar19 = uVar8;
            puVar19[1] = uVar9;
            puVar16[4] = uVar6;
            puVar16[5] = uVar7;
            puVar16[2] = uVar4;
            puVar16[3] = uVar5;
            *puVar16 = uVar2;
            puVar16[1] = uVar3;
            iVar13 = iVar17 * 2;
            iVar15 = iVar17 * 2 + 1;
            iVar18 = iVar17;
          } while ((longlong)iVar15 < (longlong)uVar14);
          uVar1 = uVar14 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = param_1[2];
          uVar5 = param_1[3];
          uVar6 = param_1[4];
          uVar7 = param_1[5];
          uVar8 = param_1[uVar1 * 6];
          uVar9 = (param_1 + uVar1 * 6)[1];
          uVar10 = param_1[uVar1 * 6 + 2];
          uVar11 = (param_1 + uVar1 * 6 + 2)[1];
          uVar12 = (param_1 + uVar1 * 6 + 4)[1];
          param_1[4] = param_1[uVar1 * 6 + 4];
          param_1[5] = uVar12;
          param_1[2] = uVar10;
          param_1[3] = uVar11;
          *param_1 = uVar8;
          param_1[1] = uVar9;
          local_48._0_4_ = (undefined4)uVar2;
          local_48._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_40._0_4_ = (undefined4)uVar3;
          uStack_40._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_38._0_4_ = (undefined4)uVar4;
          local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar5;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_28._0_4_ = (undefined4)uVar6;
          local_28._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar7;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          puVar16 = param_1 + uVar1 * 6 + 4;
          *(undefined4 *)puVar16 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar16 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_20._4_4_;
          puVar16 = param_1 + uVar1 * 6 + 2;
          *(undefined4 *)puVar16 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar16 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_30._4_4_;
          puVar16 = param_1 + uVar1 * 6;
          *(undefined4 *)puVar16 = (undefined4)local_48;
          *(undefined4 *)((longlong)puVar16 + 4) = local_48._4_4_;
          *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_40._4_4_;
          bVar20 = 2 < uVar14;
          uVar14 = uVar1;
          local_48 = uVar2;
          uStack_40 = uVar3;
          local_38 = uVar4;
          uStack_30 = uVar5;
          local_28 = uVar6;
          uStack_20 = uVar7;
        } while (bVar20);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478c8cb6 FUN_1478c8cb6 body=138 status=ok
// SIG undefined FUN_1478c8cb6(void)

void FUN_1478c8cb6(longlong *param_1,int param_2,int param_3)

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
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
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



// FUNCTION 1478c8d40 FUN_1478c8d40 body=579 status=ok
// SIG undefined FUN_1478c8d40(void)

bool FUN_1478c8d40(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong local_c8;
  longlong lStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar1 = *(int *)((longlong)param_1 + 0x34);
  if (iVar1 != 0) {
    local_a8 = 0;
    uStack_a0 = 0;
    local_c8 = 0;
    lStack_c0 = 0;
    uStack_9c = 0x80;
    uStack_98 = 0xffffffff;
    uStack_94 = 0;
    FUN_140790402(&local_c8,(int)param_1[1] - iVar1);
    local_e0 = param_1 + 2;
    local_e8 = 0x100000000;
    local_d8 = 0xffffffff;
    local_d0 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_e8);
    }
    uStack_80 = local_e8;
    local_78 = local_e0;
    uStack_70 = local_d8;
    uVar5 = uStack_70;
    local_68 = CONCAT44(local_cc,local_d0);
    uStack_70._4_4_ = (int)((ulonglong)local_d8 >> 0x20);
    if (uStack_70._4_4_ < (int)local_e0[3]) {
      local_88 = param_1;
      uStack_70 = uVar5;
      do {
        FUN_1478c5a38(&local_c8,&local_e8);
        plVar4 = local_e0;
        lVar6 = (longlong)uStack_70._4_4_;
        lVar2 = *local_88;
        lVar3 = *(longlong *)(lVar2 + lVar6 * 0x10);
        *local_e0 = lVar3;
        if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
          FUN_1456cec3c();
        }
        plVar4[1] = *(longlong *)(lVar2 + lVar6 * 0x10 + 8);
        uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_80._4_4_);
        FUN_1449c0562(&uStack_80);
      } while (uStack_70._4_4_ < (int)local_78[3]);
    }
    local_58 = param_1[6];
    local_88 = (longlong *)*param_1;
    uStack_80 = param_1[1];
    lVar2 = param_1[2];
    lVar3 = param_1[3];
    local_68 = param_1[4];
    lVar6 = param_1[5];
    param_1[6] = CONCAT44(uStack_94,uStack_98);
    param_1[4] = local_a8;
    param_1[5] = CONCAT44(uStack_9c,uStack_a0);
    param_1[2] = CONCAT44(uStack_b4,local_b8);
    param_1[3] = CONCAT44(uStack_ac,uStack_b0);
    *param_1 = local_c8;
    param_1[1] = lStack_c0;
    uStack_98 = (undefined4)local_58;
    uStack_94 = (undefined4)((ulonglong)local_58 >> 0x20);
    local_78._0_4_ = (undefined4)lVar2;
    local_78._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
    uStack_70._0_4_ = (uint)lVar3;
    uStack_70._4_4_ = (int)((ulonglong)lVar3 >> 0x20);
    uStack_60._0_4_ = (undefined4)lVar6;
    uStack_60._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    local_b8 = (undefined4)local_78;
    uStack_b4 = local_78._4_4_;
    uStack_b0 = (uint)uStack_70;
    uStack_ac = uStack_70._4_4_;
    local_c8 = (longlong)local_88;
    lStack_c0 = uStack_80;
    local_a8 = local_68;
    local_78 = (longlong *)lVar2;
    uStack_70 = lVar3;
    uStack_60 = lVar6;
    FUN_1407903ca();
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar1 != 0;
}



// FUNCTION 1478c8f84 FUN_1478c8f84 body=142 status=ok
// SIG undefined FUN_1478c8f84(void)

void FUN_1478c8f84(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x188);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x18c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x60,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0x60)) {
        uVar4 = uVar3 / 0x60 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x18c) = (int)uVar4;
    FUN_1433bbf2c(param_1,param_2,uVar4,0x60);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1478c9014 FUN_1478c9014 body=138 status=ok
// SIG undefined FUN_1478c9014(void)

void FUN_1478c9014(longlong *param_1,int param_2,int param_3)

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
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
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



// FUNCTION 1478c909e FUN_1478c909e body=122 status=ok
// SIG undefined FUN_1478c909e(void)

void FUN_1478c909e(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a77db50;
  if (param_1[0x18] != 0) {
    plVar1 = param_1 + 0x1c;
    if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x1a];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0xe] != 0) {
    plVar1 = param_1 + 0x12;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *param_1 = &PTR_LAB_14aabfdc0;
                    /* WARNING: Could not recover jumptable at 0x0001478c90d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 1478c9120 FUN_1478c9120 body=14 status=ok
// SIG undefined FUN_1478c9120(void)

undefined8 * FUN_1478c9120(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_3f8000003f800000;
  param_2[1] = &DAT_3f8000003f800000;
  return param_2;
}



// FUNCTION 1478c912e FUN_1478c912e body=229 status=ok
// SIG undefined FUN_1478c912e(void)

float FUN_1478c912e(longlong param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,undefined8 param_6,float param_7)

{
  longlong lVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if ((param_5 == 0) || ((param_1 != param_5 && (*(longlong *)(param_1 + 0x1b0) != param_5)))) {
    if ((-1 < *(char *)(param_1 + 0x60)) && (lVar1 = *(longlong *)(param_1 + 0x1c8), lVar1 != 0)) {
      dVar3 = *(double *)(lVar1 + 0x270) - param_2[2];
      dVar5 = *(double *)(lVar1 + 0x268) - param_2[1];
      dVar4 = *(double *)(lVar1 + 0x260) - *param_2;
      fVar2 = (float)(dVar3 * dVar3 + dVar4 * dVar4 + dVar5 * dVar5);
      if (250000.0 <= fVar2) {
        if (4e+06 <= fVar2) {
          if (9998244.0 <= fVar2) {
            if (6.4e+07 <= fVar2) {
              param_7 = param_7 * 0.2;
            }
            else {
              param_7 = param_7 * 0.8;
            }
          }
          else {
            param_7 = param_7 * 2.4;
          }
        }
        else {
          param_7 = param_7 * 3.0;
        }
      }
      else {
        param_7 = param_7 * 4.0;
      }
    }
  }
  else {
    param_7 = param_7 * 10.0;
  }
  return param_7 * *(float *)(param_1 + 0x1a0);
}



// FUNCTION 1478c937a FUN_1478c937a body=383 status=ok
// SIG undefined FUN_1478c937a(void)

void FUN_1478c937a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  iVar6 = 0;
  local_58 = lVar2;
  if (*(int *)(param_1 + 0x268) != 0) {
    FUN_1449c0562(&local_60);
    iVar6 = *(int *)(param_1 + 0x268);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = plVar1;
  if ((iStack_4c != iVar6) || (local_58 != lVar2)) {
    do {
      plVar4 = *(longlong **)(*local_88 + (longlong)iStack_6c * 0x10);
      if ((plVar4 != (longlong *)0x0) && ((*(uint *)(plVar4 + 1) >> 0x1e & 1) == 0)) {
        cVar5 = (**(code **)(*plVar4 + 0x1f8))(plVar4);
        if (cVar5 != '\0') {
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_1447f76d2(param_2,iVar3);
          }
          *(longlong **)(*param_2 + (longlong)iVar3 * 8) = plVar4;
          (**(code **)(*plVar4 + 0x208))(plVar4,param_2);
        }
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (local_78 != lVar2 || iStack_6c != iVar6));
  }
  FUN_1478dbded(*param_2,(int)param_2[1]);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c94fa FUN_1478c94fa body=368 status=ok
// SIG undefined FUN_1478c94fa(void)

void FUN_1478c94fa(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar5 = 0;
  FUN_142a85ac8();
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = lVar2;
  if (*(int *)(param_1 + 0x268) != 0) {
    FUN_1449c0562(&local_58);
    iVar5 = *(int *)(param_1 + 0x268);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = plVar1;
  if ((iStack_44 != iVar5) || (local_50 != lVar2)) {
    do {
      plVar3 = *(longlong **)(*local_80 + (longlong)iStack_64 * 0x10);
      if ((plVar3 != (longlong *)0x0) && ((*(uint *)(plVar3 + 1) >> 0x1e & 1) == 0)) {
        if ((*(uint *)(plVar3 + 1) >> 0x12 & 1) == 0) {
          cVar4 = FUN_14008df84(plVar3);
          if (cVar4 == '\0') goto LAB_1478c960a;
        }
        if (-1 < *(char *)((longlong)plVar3 + 0x9c)) {
          (**(code **)(*plVar3 + 0x1f0))(plVar3,param_2,1);
        }
      }
LAB_1478c960a:
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (local_70 != lVar2 || iStack_64 != iVar5));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c966c FUN_1478c966c body=111 status=ok
// SIG undefined FUN_1478c966c(void)

void FUN_1478c966c(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x108);
  *(uint *)(param_1 + 0x108) = iVar2 + uVar1;
  if ((uint)(*(int *)(param_1 + 0x10c) - iVar2) < uVar1) {
    FUN_1478dc29e(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar3 = param_1;
  }
  FUN_147449172(lVar3 + (longlong)iVar2 * 8,*param_2,uVar1);
  return;
}



// FUNCTION 1478c96dc FUN_1478c96dc body=11 status=ok
// SIG undefined FUN_1478c96dc(void)

bool FUN_1478c96dc(longlong param_1)

{
  return *(char *)(param_1 + 0x1a4) == '\x02';
}



// FUNCTION 1478c96e8 FUN_1478c96e8 body=58 status=ok
// SIG undefined FUN_1478c96e8(void)

undefined4 FUN_1478c96e8(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_144800528();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  return *(undefined4 *)(lVar2 + 0xfc);
}



// FUNCTION 1478c973e FUN_1478c973e body=10 status=ok
// SIG undefined FUN_1478c973e(void)

bool FUN_1478c973e(byte param_1)

{
  return (param_1 & 0xfb) == 2;
}



// FUNCTION 1478c9748 FUN_1478c9748 body=1 status=ok
// SIG undefined FUN_1478c9748(void)

void FUN_1478c9748(void)

{
  return;
}



// FUNCTION 1478c9749 FUN_1478c9749 body=124 status=ok
// SIG undefined FUN_1478c9749(void)

undefined * FUN_1478c9749(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caca0f0) {
    FUN_144b3d300(&DAT_14caca0f0);
    if (DAT_14caca0f0 == -1) {
      FUN_145c12714(&DAT_14caca068,0x420c0000,0x43100000);
      atexit(FUN_1433c2996);
      _Init_thread_footer(&DAT_14caca0f0);
    }
  }
  return &DAT_14caca068;
}



// FUNCTION 1478c97c5 FUN_1478c97c5 body=124 status=ok
// SIG undefined FUN_1478c97c5(void)

undefined * FUN_1478c97c5(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caca180) {
    FUN_144b3d300(&DAT_14caca180);
    if (DAT_14caca180 == -1) {
      FUN_145c12714(&DAT_14caca0f8,0x420c0000,0x43100000);
      atexit(FUN_1433c29c6);
      _Init_thread_footer(&DAT_14caca180);
    }
  }
  return &DAT_14caca0f8;
}



// FUNCTION 1478c9841 FUN_1478c9841 body=33 status=ok
// SIG undefined FUN_1478c9841(void)

void FUN_1478c9841(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = DAT_14caca208;
  if (DAT_14caca210 == 0) {
    plVar1 = (longlong *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001478c985f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))(plVar1,param_1);
  return;
}



// FUNCTION 1478c9862 FUN_1478c9862 body=36 status=ok
// SIG undefined FUN_1478c9862(void)

void FUN_1478c9862(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = DAT_14caca328;
  if (DAT_14caca330 == 0) {
    plVar1 = (longlong *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001478c9883. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))(plVar1,param_1,param_2);
  return;
}



// FUNCTION 1478c9886 FUN_1478c9886 body=33 status=ok
// SIG undefined FUN_1478c9886(void)

void FUN_1478c9886(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = DAT_14caca238;
  if (DAT_14caca240 == 0) {
    plVar1 = (longlong *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001478c98a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))(plVar1,param_1);
  return;
}



// FUNCTION 1478c98a7 FUN_1478c98a7 body=50 status=ok
// SIG undefined FUN_1478c98a7(void)

longlong * FUN_1478c98a7(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_14caca3e8;
  *param_1 = DAT_14caca3e8;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1478c98d9 FUN_1478c98d9 body=50 status=ok
// SIG undefined FUN_1478c98d9(void)

longlong * FUN_1478c98d9(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_14caca3f0;
  *param_1 = DAT_14caca3f0;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1478c990b FUN_1478c990b body=33 status=ok
// SIG undefined FUN_1478c990b(void)

void FUN_1478c990b(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = DAT_14caca338;
  if (DAT_14caca340 == 0) {
    plVar1 = (longlong *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001478c9929. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))(plVar1,param_1);
  return;
}



// FUNCTION 1478c992c FUN_1478c992c body=36 status=ok
// SIG undefined FUN_1478c992c(void)

void FUN_1478c992c(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = DAT_14caca358;
  if (DAT_14caca360 == 0) {
    plVar1 = (longlong *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001478c994d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))(plVar1,param_1,param_2);
  return;
}



// FUNCTION 1478c9992 FUN_1478c9992 body=298 status=ok
// SIG undefined FUN_1478c9992(void)

longlong FUN_1478c9992(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar5 = *(int *)(param_1 + 0x268);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar5) || (uStack_48 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_78 + (longlong)iStack_5c * 0x10);
      if (lVar4 != 0) {
        uVar3 = FUN_145a6e83e();
        lVar4 = FUN_144718840(lVar4,uVar3);
        if (lVar4 != 0) goto LAB_1478c9a29;
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar5));
  }
  lVar4 = 0;
LAB_1478c9a29:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 1478c9abe FUN_1478c9abe body=187 status=ok
// SIG undefined FUN_1478c9abe(void)

longlong FUN_1478c9abe(uint param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cacb090) {
    FUN_144b3d300(&DAT_14cacb090);
    if (DAT_14cacb090 == -1) {
      puVar2 = &DAT_14c846480;
      puVar3 = &DAT_14cacaf10;
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      puVar2 = &DAT_14c846480;
      puVar3 = &DAT_14cacaf70;
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      puVar2 = &DAT_14c846480;
      puVar3 = &DAT_14cacafd0;
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      puVar2 = &DAT_14c846480;
      puVar3 = &DAT_14cacb030;
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      _Init_thread_footer(&DAT_14cacb090);
    }
  }
  return (longlong)&DAT_14cacaf10 + (ulonglong)((param_1 & 0xff) * 0xc0);
}



// FUNCTION 1478c9b79 FUN_1478c9b79 body=29 status=ok
// SIG undefined FUN_1478c9b79(void)

undefined8 FUN_1478c9b79(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1478c9b96 FUN_1478c9b96 body=8 status=ok
// SIG undefined FUN_1478c9b96(void)

undefined8 * FUN_1478c9b96(void)

{
  return &DAT_14caca3a8;
}



// FUNCTION 1478c9b9e FUN_1478c9b9e body=8 status=ok
// SIG undefined FUN_1478c9b9e(void)

undefined8 * FUN_1478c9b9e(void)

{
  return &DAT_14caca3c0;
}



// FUNCTION 1478c9bb4 FUN_1478c9bb4 body=322 status=ok
// SIG undefined FUN_1478c9bb4(void)

longlong * FUN_1478c9bb4(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar2 = (longlong *)FUN_14090368a(param_1 + 0x28);
  if ((plVar2 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    if (plVar2 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  }
  else {
    FUN_1456cec3c(plVar2);
  }
  FUN_14594a93c();
  lVar3 = FUN_14594a93c();
  if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= (int)plVar2[7])) &&
     (*(longlong *)(plVar2[6] + (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
    lVar3 = FUN_14594a93c();
    if ((lVar3 == 0) || ((int)plVar2[7] < *(int *)(lVar3 + 0x38))) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)0x0;
      if (*(longlong *)(plVar2[6] + (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30) {
        plVar5 = plVar2;
      }
    }
    plVar4 = (longlong *)plVar5[0x22];
    if (plVar4 == (longlong *)0x0) {
      (**(code **)(*plVar5 + 1000))(plVar5);
      plVar4 = (longlong *)plVar5[0x22];
    }
    cVar1 = (**(code **)(*plVar4 + 0x328))(plVar4,param_2);
    if (cVar1 != '\0') {
      lVar3 = FUN_14594a93c();
      if ((lVar3 == 0) || ((int)plVar2[7] < *(int *)(lVar3 + 0x38))) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)0x0;
        if (*(longlong *)(plVar2[6] + (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30) {
          plVar5 = plVar2;
        }
      }
      plVar2 = (longlong *)FUN_1478c9cf6(param_2,plVar5,0,0,0,0,0,0);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x2b0))(plVar2,param_1);
        return plVar2;
      }
      return (longlong *)0x0;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1478c9cf6 FUN_1478c9cf6 body=236 status=ok
// SIG undefined FUN_1478c9cf6(void)

undefined8
FUN_1478c9cf6(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
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



// FUNCTION 1478c9de4 FUN_1478c9de4 body=183 status=ok
// SIG undefined FUN_1478c9de4(void)

void FUN_1478c9de4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  FUN_1478c9e9c(param_1,&local_40,local_28);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c9e9c FUN_1478c9e9c body=208 status=ok
// SIG undefined FUN_1478c9e9c(void)

undefined4 * FUN_1478c9e9c(longlong param_1,undefined4 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  undefined1 local_88 [92];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_3 != 0) {
    uVar4 = FUN_145a6eeb2();
    plVar5 = (longlong *)FUN_144718840(param_3,uVar4);
    if (plVar5 != (longlong *)0x0) {
      FUN_1478ca1ac(local_88,param_1,plVar5);
      local_2c = (**(code **)(*plVar5 + 0x18))(plVar5);
      local_98 = &local_2c;
      FUN_1433c2ca0(param_1,param_2,local_88,*(undefined4 *)(param_1 + 0x3c));
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
    }
  }
  *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *param_2 = (undefined4)DAT_14c8464e0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478c9fd2 FUN_1478c9fd2 body=239 status=ok
// SIG undefined FUN_1478c9fd2(void)

void FUN_1478c9fd2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1478ca0c2(param_1,local_28,local_2c);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ca0c2 FUN_1478ca0c2 body=230 status=ok
// SIG undefined FUN_1478ca0c2(void)

undefined8 FUN_1478ca0c2(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [88];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != 0) {
    uVar2 = FUN_145a6eeb2();
    plVar3 = (longlong *)FUN_144718840(param_2,uVar2);
    if (plVar3 != (longlong *)0x0) {
      iVar1 = *(int *)(param_1 + 0xb0);
      if ((longlong)iVar1 == 0) {
        iVar4 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x8c);
      }
      else {
        iVar4 = *(int *)(*(longlong *)(param_1 + 0xa8) + -4 + (longlong)iVar1 * 4);
        *(int *)(param_1 + 0xb0) = iVar1 + -1;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3,iVar4);
      (**(code **)(*plVar3 + 0x20))(plVar3,param_3);
      FUN_1478ca3e2(param_1);
      FUN_1478ca1ac(local_98,param_1,plVar3);
      FUN_1478ca592(param_1,iVar4,local_98);
      uVar2 = 1;
      goto LAB_1478ca10a;
    }
  }
  uVar2 = 0;
LAB_1478ca10a:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ca1ac FUN_1478ca1ac body=372 status=ok
// SIG undefined FUN_1478ca1ac(void)

undefined8 * FUN_1478ca1ac(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar4 = (**(code **)(*param_3 + 0x48))(param_3);
  uVar1 = (**(code **)(*param_3 + 0x80))(param_3);
  uVar2 = (**(code **)(*param_3 + 0x70))(param_3);
  uVar3 = (**(code **)(*param_3 + 0x60))(param_3);
  fVar5 = (float)(**(code **)(*param_3 + 0x28))(param_3);
  (**(code **)(*param_3 + 0x50))(param_3,&local_a8);
  uVar6 = (**(code **)(*param_3 + 0x40))(param_3);
  fVar7 = (float)(**(code **)(*param_3 + 0x38))(param_3);
  (**(code **)(*param_3 + 0x30))(param_3,&local_c0);
  param_1[2] = local_b0;
  *param_1 = local_c0;
  param_1[1] = uStack_b8;
  param_1[5] = local_98;
  param_1[3] = local_a8;
  param_1[4] = uStack_a0;
  *(float *)((longlong)param_1 + 0x34) = fVar7 * *(float *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 7) = uVar6;
  if (1.0 <= fVar5) {
    fVar5 = 1.0;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *(float *)((longlong)param_1 + 0x3c) = fVar5;
  *(undefined4 *)(param_1 + 9) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar2;
  *(undefined4 *)(param_1 + 10) = uVar1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar4;
  param_1[5] = 0;
  if ((local_90 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ca322 FUN_1478ca322 body=191 status=ok
// SIG undefined FUN_1478ca322(void)

void FUN_1478ca322(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_38 [44];
  uint local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  if (-1 < (int)param_2) {
    if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
      lVar1 = param_1 + 0x90;
      if (*(longlong *)(param_1 + 0x98) != 0) {
        lVar1 = *(longlong *)(param_1 + 0x98);
      }
      iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xa0) + 0x7fffffffU & param_2) * 4);
      if (iVar2 != -1) {
        do {
          lVar1 = *(longlong *)(param_1 + 0x58) + (longlong)iVar2 * 0x68;
          if (*(uint *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar2 * 0x68) == param_2) {
            if ((lVar1 + 8U & 0xfffffffffffffff7) != 0) {
              *(undefined4 *)(lVar1 + 0x38) = 0;
            }
            break;
          }
          iVar2 = *(int *)(lVar1 + 0x60);
        } while (iVar2 != -1);
      }
    }
    FUN_1449e3bb0(param_1 + 0xa8,&local_c);
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478ca3e2 FUN_1478ca3e2 body=430 status=ok
// SIG undefined FUN_1478ca3e2(void)

void FUN_1478ca3e2(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar4 = FUN_144a7757c();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
         == lVar4 + 0x30)) && ((*(uint *)(param_1 + 0xd8) & 1) == 0)) {
      *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
      uVar5 = FUN_144a88394(lVar2);
      fVar1 = *(float *)(param_1 + 0x30);
      local_a8 = (undefined8 *)0x0;
      local_a0 = 0;
      FUN_1446efa72(&local_a8,0,3,0x10);
      puVar3 = local_a8;
      local_a0 = 3;
      *local_a8 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_a8[2] = lVar4;
      *local_a8 = &PTR_FUN_14a79bbf0;
      local_a8[3] = 0;
      FUN_14485c47a(local_a8 + 3,param_1);
      *(undefined4 *)(puVar3 + 5) = 0;
      puVar3[4] = FUN_1433c2a3e;
      local_98 = 0;
      local_90 = 0;
      FUN_14487d8d8(&local_98,&local_a8);
      local_58 = 1;
      local_b0 = 0xbf800000;
      local_b8 = 0;
      FUN_1406f3fee(uVar5,param_1 + 0x50,&local_98,fVar1 * 0.5);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
      FUN_1449db362(&local_a8);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ca592 FUN_1478ca592 body=208 status=ok
// SIG undefined FUN_1478ca592(void)

void FUN_1478ca592(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [36];
  uint local_34;
  uint *local_30;
  undefined8 *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = param_2;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    lVar4 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x98);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0xa0) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x58);
      do {
        lVar1 = lVar4 + (longlong)iVar3 * 0x68;
        if (*(uint *)(lVar4 + (longlong)iVar3 * 0x68) == param_2) {
          if ((lVar1 != 0) && ((undefined8 *)(lVar1 + 8) != (undefined8 *)0x0)) {
            uVar2 = *(undefined8 *)(lVar1 + 0x48);
            puVar5 = (undefined8 *)(lVar1 + 8);
            for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar5 = *param_3;
              param_3 = param_3 + 1;
              puVar5 = puVar5 + 1;
            }
            *(undefined8 *)(lVar1 + 0x48) = uVar2;
            goto LAB_1478ca645;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x60);
      } while (iVar3 != -1);
    }
  }
  local_30 = &local_34;
  local_28 = param_3;
  FUN_1478dc876((longlong *)(param_1 + 0x58),local_1c,&local_30);
LAB_1478ca645:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ca664 FUN_1478ca664 body=216 status=ok
// SIG undefined FUN_1478ca664(void)

undefined8 FUN_1478ca664(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [88];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar1 = *(int *)(param_1 + 0xb0);
  if ((longlong)iVar1 == 0) {
    iVar2 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x8c);
  }
  else {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0xa8) + -4 + (longlong)iVar1 * 4);
    *(int *)(param_1 + 0xb0) = iVar1 + -1;
  }
  lVar3 = param_2 + 0x1e0;
  (**(code **)(*(longlong *)(param_2 + 0x1e0) + 0x10))(lVar3,iVar2);
  (**(code **)(*(longlong *)(param_2 + 0x1e0) + 0x20))(lVar3,param_3);
  FUN_1478ca3e2(param_1);
  if (param_2 == 0) {
    lVar3 = 0;
  }
  FUN_1478ca1ac(local_98,param_1,lVar3);
  FUN_1478ca592(param_1,iVar2,local_98);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ca73e FUN_1478ca73e body=150 status=ok
// SIG undefined FUN_1478ca73e(void)

undefined8 FUN_1478ca73e(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  undefined1 local_88 [92];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = param_3 + 0x1e0;
  if (param_3 == 0) {
    lVar1 = 0;
  }
  FUN_1478ca1ac(local_88,param_1,lVar1);
  local_2c = *(undefined4 *)(param_3 + 0x610);
  local_98 = &local_2c;
  FUN_1433c2ca0(param_1,param_2,local_88,*(undefined4 *)(param_1 + 0x3c));
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ca7d6 FUN_1478ca7d6 body=111 status=ok
// SIG undefined FUN_1478ca7d6(void)

void FUN_1478ca7d6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [88];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_2 + 0x1e0;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  FUN_1478ca1ac(local_78,param_1,lVar1);
  FUN_1478ca592(param_1,*(undefined4 *)(param_2 + 0x610),local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ca846 FUN_1478ca846 body=960 status=ok
// SIG undefined FUN_1478ca846(void)

undefined4 * FUN_1478ca846(undefined4 *param_1,undefined8 *param_2,double *param_3,uint param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double *pdVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  undefined1 auStack_138 [32];
  double local_118;
  double dStack_110;
  double local_108;
  double local_f8 [2];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_108 = param_3[2];
  local_118 = *param_3;
  dStack_110 = param_3[1];
  if (0 < (int)param_4) {
    pdVar1 = (double *)*param_2;
    uVar21 = (ulonglong)param_4;
    pdVar19 = pdVar1;
    do {
      dVar5 = (local_108 * pdVar19[2] + local_118 * *pdVar19 + dStack_110 * pdVar19[1]) - pdVar19[3]
      ;
      if (0.0 < dVar5) {
        dVar4 = (local_108 * pdVar19[6] + local_118 * pdVar19[4] + dStack_110 * pdVar19[5]) -
                pdVar19[7];
        if (0.0 < dVar4) {
          dVar2 = (pdVar19[2] * DAT_14c8464f0 +
                  *pdVar19 * DAT_14c8464e0 + pdVar19[1] * DAT_14c8464e8) - pdVar19[3];
          dVar3 = (pdVar19[6] * DAT_14c8464f0 +
                  pdVar19[4] * DAT_14c8464e0 + pdVar19[5] * DAT_14c8464e8) - pdVar19[7];
          if (dVar2 <= 0.0) {
            local_f8[0] = -dVar2 / (dVar5 - dVar2);
            if (dVar3 <= 0.0) {
              local_f8[1] = -dVar3 / (dVar4 - dVar3);
              uVar20 = (ulonglong)(local_f8[0] < local_f8[1]);
            }
            else {
              uVar20 = 0;
            }
          }
          else {
            if (0.0 < dVar3) {
              *(double *)(param_1 + 4) = DAT_14c8464f0;
              uVar7 = DAT_14c8464e8._4_4_;
              uVar6 = DAT_14c8464e8._0_4_;
              uVar22 = DAT_14c8464e0._4_4_;
              *param_1 = DAT_14c8464e0._0_4_;
              param_1[1] = uVar22;
              param_1[2] = uVar6;
              param_1[3] = uVar7;
              goto LAB_1478caa98;
            }
            local_f8[1] = -dVar3 / (dVar4 - dVar3);
            uVar20 = 1;
          }
          dVar5 = local_f8[uVar20];
          dVar4 = dStack_110 * dVar5;
          dVar2 = 1.0 - dVar5;
          local_108 = DAT_14c8464f0 * dVar2 + local_108 * dVar5;
          dStack_110 = DAT_14c8464e8 * dVar2 + dVar4;
          local_118 = DAT_14c8464e0 * dVar2 + local_118 * dVar5;
          uVar20 = (ulonglong)(param_4 - 1);
          uVar22 = SUB84(dVar4,0);
          if ((int)uVar21 != 1) {
            dVar5 = *pdVar19;
            dVar4 = pdVar19[1];
            dVar2 = pdVar19[2];
            dVar3 = pdVar19[3];
            dVar8 = pdVar19[4];
            dVar9 = pdVar19[5];
            dVar10 = pdVar19[6];
            dVar11 = pdVar19[7];
            dVar12 = pdVar1[uVar20 * 8];
            dVar13 = (pdVar1 + uVar20 * 8)[1];
            dVar14 = pdVar1[uVar20 * 8 + 2];
            dVar15 = (pdVar1 + uVar20 * 8 + 2)[1];
            dVar16 = pdVar1[uVar20 * 8 + 4];
            dVar17 = (pdVar1 + uVar20 * 8 + 4)[1];
            dVar18 = (pdVar1 + uVar20 * 8 + 6)[1];
            pdVar19[6] = pdVar1[uVar20 * 8 + 6];
            pdVar19[7] = dVar18;
            pdVar19[4] = dVar16;
            pdVar19[5] = dVar17;
            pdVar19[2] = dVar14;
            pdVar19[3] = dVar15;
            *pdVar19 = dVar12;
            pdVar19[1] = dVar13;
            local_e8._0_4_ = SUB84(dVar5,0);
            local_e8._4_4_ = (undefined4)((ulonglong)dVar5 >> 0x20);
            uStack_e0._0_4_ = SUB84(dVar4,0);
            uStack_e0._4_4_ = (undefined4)((ulonglong)dVar4 >> 0x20);
            local_d8._0_4_ = SUB84(dVar2,0);
            local_d8._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
            uStack_d0._0_4_ = SUB84(dVar3,0);
            uStack_d0._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
            local_c8._0_4_ = SUB84(dVar8,0);
            local_c8._4_4_ = (undefined4)((ulonglong)dVar8 >> 0x20);
            uStack_c0._0_4_ = SUB84(dVar9,0);
            uStack_c0._4_4_ = (undefined4)((ulonglong)dVar9 >> 0x20);
            local_b8._0_4_ = SUB84(dVar10,0);
            local_b8._4_4_ = (undefined4)((ulonglong)dVar10 >> 0x20);
            uStack_b0._0_4_ = SUB84(dVar11,0);
            uStack_b0._4_4_ = (undefined4)((ulonglong)dVar11 >> 0x20);
            pdVar19 = pdVar1 + uVar20 * 8 + 6;
            *(undefined4 *)pdVar19 = (undefined4)local_b8;
            *(undefined4 *)((longlong)pdVar19 + 4) = local_b8._4_4_;
            *(undefined4 *)(pdVar19 + 1) = (undefined4)uStack_b0;
            *(undefined4 *)((longlong)pdVar19 + 0xc) = uStack_b0._4_4_;
            pdVar19 = pdVar1 + uVar20 * 8 + 4;
            *(undefined4 *)pdVar19 = (undefined4)local_c8;
            *(undefined4 *)((longlong)pdVar19 + 4) = local_c8._4_4_;
            *(undefined4 *)(pdVar19 + 1) = (undefined4)uStack_c0;
            *(undefined4 *)((longlong)pdVar19 + 0xc) = uStack_c0._4_4_;
            pdVar19 = pdVar1 + uVar20 * 8 + 2;
            *(undefined4 *)pdVar19 = (undefined4)local_d8;
            *(undefined4 *)((longlong)pdVar19 + 4) = local_d8._4_4_;
            *(undefined4 *)(pdVar19 + 1) = (undefined4)uStack_d0;
            *(undefined4 *)((longlong)pdVar19 + 0xc) = uStack_d0._4_4_;
            pdVar1 = pdVar1 + uVar20 * 8;
            *(undefined4 *)pdVar1 = (undefined4)local_e8;
            *(undefined4 *)((longlong)pdVar1 + 4) = local_e8._4_4_;
            *(undefined4 *)(pdVar1 + 1) = (undefined4)uStack_e0;
            *(undefined4 *)((longlong)pdVar1 + 0xc) = uStack_e0._4_4_;
            uVar22 = (undefined4)local_d8;
            local_e8 = dVar5;
            uStack_e0 = dVar4;
            local_d8 = dVar2;
            uStack_d0 = dVar3;
            local_c8 = dVar8;
            uStack_c0 = dVar9;
            local_b8 = dVar10;
            uStack_b0 = dVar11;
          }
          FUN_1478ca846(param_1,uVar22,&local_118);
LAB_1478caa98:
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_138);
        }
      }
      pdVar19 = pdVar19 + 8;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  *(double *)(param_1 + 4) = param_3[2];
  uVar22 = *(undefined4 *)((longlong)param_3 + 4);
  uVar6 = *(undefined4 *)(param_3 + 1);
  uVar7 = *(undefined4 *)((longlong)param_3 + 0xc);
  *param_1 = *(undefined4 *)param_3;
  param_1[1] = uVar22;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  if ((local_a0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478cac0c FUN_1478cac0c body=191 status=ok
// SIG undefined FUN_1478cac0c(void)

void FUN_1478cac0c(longlong param_1,uint param_2,float param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    lVar1 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x98);
    }
    iVar4 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xa0) - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x58) + (longlong)iVar4 * 0x68;
        if (*(uint *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar4 * 0x68) == param_2) {
          if ((lVar1 + 8U & 0xfffffffffffffff7) == 0) {
            return;
          }
          lVar3 = *(longlong *)(param_1 + 0x20);
          if (lVar3 != 0) {
            lVar2 = FUN_144a7757c();
            if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) goto LAB_1478cacb5;
          }
          lVar3 = 0;
LAB_1478cacb5:
          *(double *)(lVar1 + 0x48) = (double)param_3 + *(double *)(lVar3 + 0x6d0);
          return;
        }
        iVar4 = *(int *)(lVar1 + 0x60);
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 1478cacda FUN_1478cacda body=218 status=ok
// SIG undefined FUN_1478cacda(void)

undefined8 * FUN_1478cacda(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  
  *param_1 = 0;
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_147468894(param_1,iVar2,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar2 * 0x38);
  }
  param_1[2] = param_2[2];
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[10] = param_2[10];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  uVar8 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar8;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  *(undefined1 *)((longlong)param_1 + 0x59) = *(undefined1 *)((longlong)param_2 + 0x59);
  bVar9 = *(byte *)((longlong)param_2 + 0x5a) & 1;
  bVar1 = *(byte *)((longlong)param_1 + 0x5a);
  *(byte *)((longlong)param_1 + 0x5a) = bVar1 & 0xfe | bVar9;
  bVar10 = *(byte *)((longlong)param_2 + 0x5a) & 2;
  *(byte *)((longlong)param_1 + 0x5a) = bVar1 & 0xfc | bVar9 | bVar10;
  bVar11 = *(byte *)((longlong)param_2 + 0x5a) & 4;
  *(byte *)((longlong)param_1 + 0x5a) = bVar1 & 0xf8 | bVar9 | bVar10 | bVar11;
  *(byte *)((longlong)param_1 + 0x5a) =
       bVar1 & 0xf0 | bVar9 | bVar10 | bVar11 | *(byte *)((longlong)param_2 + 0x5a) & 8;
  return param_1;
}



// FUNCTION 1478cadb4 FUN_1478cadb4 body=191 status=ok
// SIG undefined FUN_1478cadb4(void)

longlong FUN_1478cadb4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  
  FUN_1478cae74();
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  lVar5 = *(longlong *)(param_2 + 0x18);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  *(longlong *)(param_1 + 0x18) = lVar5;
  if (plVar6 != (longlong *)0x0) {
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
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  uVar8 = *(undefined8 *)(param_2 + 0x30);
  uVar9 = *(undefined8 *)(param_2 + 0x38);
  uVar10 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar10;
  *(undefined8 *)(param_1 + 0x30) = uVar8;
  *(undefined8 *)(param_1 + 0x38) = uVar9;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(param_2 + 0x59);
  bVar11 = *(byte *)(param_2 + 0x5a) & 1;
  bVar3 = *(byte *)(param_1 + 0x5a);
  *(byte *)(param_1 + 0x5a) = bVar3 & 0xfe | bVar11;
  bVar12 = *(byte *)(param_2 + 0x5a) & 2;
  *(byte *)(param_1 + 0x5a) = bVar3 & 0xfc | bVar11 | bVar12;
  bVar13 = *(byte *)(param_2 + 0x5a) & 4;
  *(byte *)(param_1 + 0x5a) = bVar3 & 0xf8 | bVar11 | bVar12 | bVar13;
  *(byte *)(param_1 + 0x5a) =
       bVar3 & 0xf0 | bVar11 | bVar12 | bVar13 | *(byte *)(param_2 + 0x5a) & 8;
  return param_1;
}



// FUNCTION 1478cae74 FUN_1478cae74 body=85 status=ok
// SIG undefined FUN_1478cae74(void)

undefined8 * FUN_1478cae74(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147468894(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x38);
      }
    }
  }
  return param_1;
}



// FUNCTION 1478caec9 FUN_1478caec9 body=230 status=ok
// SIG undefined FUN_1478caec9(void)

ulonglong FUN_1478caec9(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  if (param_1 != (longlong *)0x0) {
    lVar4 = FUN_144a78d6a();
    if ((*(int *)(param_1[2] + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30)) {
      lVar4 = FUN_144a6c4d8();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
         (plVar6 = param_1,
         *(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)) goto LAB_1478caf3b;
    }
    else {
      plVar6 = (longlong *)param_1[0x15];
      if (plVar6 != (longlong *)0x0) {
LAB_1478caf3b:
        cVar2 = FUN_1478c1b1e(plVar6);
        uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
        if (cVar2 == '\0') goto LAB_1478caf21;
        lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
        if (lVar4 != 0) {
          uVar5 = 0;
          lVar4 = FUN_14494016c(lVar4,0,1);
          if (lVar4 == 0) goto LAB_1478caf21;
          iVar1 = *(int *)(lVar4 + 0x400);
          if ((longlong)iVar1 != 0) {
            lVar4 = *(longlong *)(lVar4 + 0x3f8);
            lVar7 = 0;
            do {
              uVar3 = FUN_1478c1ae0(plVar6,*(undefined8 *)(lVar4 + lVar7));
              uVar5 = (ulonglong)uVar3;
              if ((char)uVar3 != '\0') break;
              bVar8 = (longlong)iVar1 * 8 + -8 != lVar7;
              lVar7 = lVar7 + 8;
            } while (bVar8);
            goto LAB_1478caf21;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_1478caf21:
  return uVar5 & 0xffffffff;
}



// FUNCTION 1478cafaf FUN_1478cafaf body=121 status=ok
// SIG undefined FUN_1478cafaf(void)

undefined8 FUN_1478cafaf(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    lVar1 = FUN_144a78d6a();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) != lVar1 + 0x30)) {
      lVar1 = FUN_144a6c4d8();
      if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) {
        return 0;
      }
      if (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30) {
        return 0;
      }
      lVar1 = FUN_144a79cc8(param_1);
    }
    else {
      lVar1 = FUN_14494250a(param_1);
    }
    if (lVar1 != 0) {
      uVar2 = FUN_144b249f0(lVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1478cb028 FUN_1478cb028 body=195 status=ok
// SIG undefined FUN_1478cb028(void)

undefined8 * FUN_1478cb028(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  param_1[9] = param_3;
  param_1[10] = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0xc;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfd) = 0;
  *(undefined2 *)((longlong)param_1 + 0x105) = 1;
  *(undefined1 *)((longlong)param_1 + 0x107) = 0;
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar2 != 0) {
      FUN_14485c47a(param_1 + 8,lVar2);
      uVar1 = FUN_1478caec9(lVar2);
      *(undefined1 *)((longlong)param_1 + 0x106) = uVar1;
      uVar1 = FUN_1478cafaf(lVar2);
      *(undefined1 *)((longlong)param_1 + 0x107) = uVar1;
    }
  }
  FUN_1433c3d62(param_1,param_2);
  return param_1;
}



// FUNCTION 1478cb0ec FUN_1478cb0ec body=110 status=ok
// SIG undefined FUN_1478cb0ec(void)

longlong * FUN_1478cb0ec(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x120,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14a79bf70;
  puVar1 = puVar2 + 2;
  FUN_1478cb028(puVar1,param_2,0xffffffffffffffff);
  *param_1 = (longlong)puVar1;
  param_1[1] = (longlong)puVar2;
  FUN_1478dce16(param_1,puVar1);
  return param_1;
}



// FUNCTION 1478cb15a FUN_1478cb15a body=276 status=ok
// SIG undefined FUN_1478cb15a(void)

undefined8 FUN_1478cb15a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = FUN_14479d2ce(param_1 + 0x40);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 == -1) {
    if (lVar2 == 0) {
      FUN_140056680(&local_28,&DAT_149e01fe8);
    }
    else {
      local_28 = (undefined2 *)0x0;
      uStack_20 = 0;
      FUN_1401031ac(lVar2,0);
    }
    puVar3 = local_28;
    if ((int)uStack_20 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_140002266(param_2,&DAT_149e0625e,puVar3);
  }
  else {
    if (lVar2 == 0) {
      FUN_140056680(&local_28,&DAT_149e01fe8);
    }
    else {
      local_28 = (undefined2 *)0x0;
      uStack_20 = 0;
      FUN_1401031ac(lVar2,0);
    }
    puVar3 = local_28;
    if ((int)uStack_20 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_140002266(param_2,L"%s - %llu",puVar3,lVar1);
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1478cb278 FUN_1478cb278 body=107 status=ok
// SIG undefined FUN_1478cb278(void)

longlong FUN_1478cb278(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_14479d2ce(param_1 + 0x38);
  lVar1 = DAT_14caca3e8;
  if (lVar2 != 0) {
    return lVar2;
  }
  if ((DAT_14caca3e8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(DAT_14caca3e8);
  }
  else if (DAT_14caca3e8 == 0) {
    return 0;
  }
  lVar2 = FUN_145909544();
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
    if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30) {
      return lVar1;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 1478cb2e4 FUN_1478cb2e4 body=77 status=ok
// SIG undefined FUN_1478cb2e4(void)

void FUN_1478cb2e4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_145909544();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      goto LAB_1478cb2f8;
    }
  }
  uVar3 = 0;
LAB_1478cb2f8:
  FUN_14485c47a(param_1 + 0x38,uVar3);
  return;
}



// FUNCTION 1478cb332 FUN_1478cb332 body=157 status=ok
// SIG undefined FUN_1478cb332(void)

undefined8 FUN_1478cb332(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_145909544();
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) && (lVar1 = *(longlong *)(param_1 + 0x30), lVar1 != 0)) {
      lVar2 = FUN_145909544();
      if (((lVar2 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0x30);
      }
      plVar4 = (longlong *)plVar5[0x22];
      if (plVar4 == (longlong *)0x0) {
        (**(code **)(*plVar5 + 1000))(plVar5);
        plVar4 = (longlong *)plVar5[0x22];
      }
                    /* WARNING: Could not recover jumptable at 0x0001478cb3c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar4 + 0x2a8))();
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1478cb3d0 FUN_1478cb3d0 body=171 status=ok
// SIG undefined FUN_1478cb3d0(void)

undefined8 * FUN_1478cb3d0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_1 == (longlong *)0x0) {
LAB_1478cb402:
    puVar1 = &DAT_14caca4b8;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caca4c8) {
      FUN_144b3d300(&DAT_14caca4c8);
      if (DAT_14caca4c8 == -1) {
        DAT_14caca4b8 = 0;
        uRam000000014caca4c0 = 0;
        atexit((_func_5014 *)&LAB_1433c4377);
        _Init_thread_footer(&DAT_14caca4c8);
      }
    }
  }
  else {
    lVar2 = param_1[0x22];
    if (lVar2 == 0) {
      (**(code **)(*param_1 + 1000))(param_1);
      lVar2 = param_1[0x22];
      if (lVar2 == 0) goto LAB_1478cb402;
    }
    FUN_1478cb47c(lVar2);
    puVar1 = (undefined8 *)(lVar2 + 0x28);
  }
  return puVar1;
}



// FUNCTION 1478cb47c FUN_1478cb47c body=114 status=ok
// SIG undefined FUN_1478cb47c(void)

void FUN_1478cb47c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(uint *)(param_1 + 0x48) & 1) == 0) {
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 1;
    if (0 < *(int *)(param_1 + 0x30)) {
      lVar2 = 0;
      lVar1 = 0;
      do {
        FUN_1478cb2e4(*(longlong *)(param_1 + 0x28) + lVar2,0);
        lVar1 = lVar1 + 1;
        lVar2 = lVar2 + 0x70;
      } while (lVar1 < *(int *)(param_1 + 0x30));
    }
    if (0 < *(int *)(param_1 + 0x40)) {
      lVar2 = 0;
      lVar1 = 0;
      do {
        FUN_1478cb2e4(*(longlong *)(param_1 + 0x38) + lVar2,0);
        lVar1 = lVar1 + 1;
        lVar2 = lVar2 + 0xa0;
      } while (lVar1 < *(int *)(param_1 + 0x40));
    }
  }
  return;
}



// FUNCTION 1478cb4ee FUN_1478cb4ee body=171 status=ok
// SIG undefined FUN_1478cb4ee(void)

undefined8 * FUN_1478cb4ee(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_1 == (longlong *)0x0) {
LAB_1478cb520:
    puVar1 = &DAT_14caca4d0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caca4e0) {
      FUN_144b3d300(&DAT_14caca4e0);
      if (DAT_14caca4e0 == -1) {
        DAT_14caca4d0 = 0;
        uRam000000014caca4d8 = 0;
        atexit((_func_5014 *)&LAB_1433c4388);
        _Init_thread_footer(&DAT_14caca4e0);
      }
    }
  }
  else {
    lVar2 = param_1[0x22];
    if (lVar2 == 0) {
      (**(code **)(*param_1 + 1000))(param_1);
      lVar2 = param_1[0x22];
      if (lVar2 == 0) goto LAB_1478cb520;
    }
    FUN_1478cb47c(lVar2);
    puVar1 = (undefined8 *)(lVar2 + 0x38);
  }
  return puVar1;
}



// FUNCTION 1478cb59a FUN_1478cb59a body=385 status=ok
// SIG undefined FUN_1478cb59a(void)

byte * FUN_1478cb59a(byte *param_1,float param_2,float param_3,longlong param_4,longlong *param_5)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 *puVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = *param_1 & 0xfe;
  param_1[0x50] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  local_68 = *param_5;
  if ((local_68 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1478cb71c(param_1,&local_68);
  dVar7 = ABS(*(double *)(param_4 + 0x40));
  if (ABS(*(double *)(param_4 + 0x40)) <= ABS(*(double *)(param_4 + 0x48))) {
    dVar7 = ABS(*(double *)(param_4 + 0x48));
  }
  dVar7 = dVar7 * (double)param_2;
  dVar6 = (double)param_3 * ABS(*(double *)(param_4 + 0x50));
  FUN_140b463b8(param_1 + 0x58,2,1);
  uVar8 = *(undefined8 *)(param_4 + 0x28);
  uVar1 = *(undefined8 *)(param_4 + 0x30);
  puVar5 = *(undefined8 **)(param_1 + 0x58);
  *puVar5 = *(undefined8 *)(param_4 + 0x20);
  puVar5[1] = uVar8;
  puVar5[2] = uVar1;
  *(double *)(*(longlong *)(param_1 + 0x58) + 0x18) = dVar7;
  *(double *)(*(longlong *)(param_1 + 0x58) + 0x28) = dVar6;
  param_1[0x68] = 1;
  dVar2 = *(double *)(param_4 + 0x30);
  dVar3 = *(double *)(param_4 + 0x20);
  dVar4 = *(double *)(param_4 + 0x28);
  *(double *)(param_1 + 0x20) = dVar3 - dVar7;
  *(double *)(param_1 + 0x28) = dVar4 - dVar7;
  *(double *)(param_1 + 0x30) = dVar2 - dVar6;
  *(double *)(param_1 + 0x38) = dVar7 + dVar3;
  *(double *)(param_1 + 0x40) = dVar7 + dVar4;
  *(double *)(param_1 + 0x48) = dVar6 + dVar2;
  param_1[0x50] = 1;
  if ((local_60 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478cb71c FUN_1478cb71c body=128 status=ok
// SIG undefined FUN_1478cb71c(void)

void FUN_1478cb71c(longlong param_1,longlong *param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) & 0xfc;
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  local_18 = *param_2;
  if ((local_18 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1478ccd90(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478cb79e FUN_1478cb79e body=1393 status=ok
// SIG undefined FUN_1478cb79e(void)

void FUN_1478cb79e(longlong param_1,double *param_2,double *param_3)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  bool bVar22;
  longlong lVar23;
  undefined4 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined4 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined8 *local_130;
  double local_128;
  double dStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_100 [2];
  undefined4 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  dVar25 = param_2[2];
  dVar26 = param_2[5];
  dVar27 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[4];
  dVar4 = param_2[3];
  local_e8 = 0;
  uStack_e0 = 0;
  uVar20 = 0;
  do {
    uVar18 = uStack_e0;
    dVar8 = ((double)(int)(-(uint)(uVar20 < 4) | 1) * (dVar4 - dVar27) * 0.5 +
            (dVar27 + dVar4) * 0.5) * param_3[8];
    dVar9 = ((double)(int)(-(uint)((uVar20 & 2) == 0) | 1) * (dVar3 - dVar2) * 0.5 +
            (dVar2 + dVar3) * 0.5) * param_3[9];
    dVar29 = ((double)(int)(-(uint)((uVar20 & 1) == 0) | 1) * (dVar26 - dVar25) * 0.5 +
             (dVar25 + dVar26) * 0.5) * param_3[10];
    dVar12 = *param_3;
    dVar13 = param_3[1];
    dVar14 = param_3[2];
    dVar5 = param_3[3];
    dVar30 = dVar9 * dVar12 - dVar13 * dVar8;
    dVar31 = dVar29 * dVar13 - dVar14 * dVar9;
    dVar32 = dVar8 * dVar14 - dVar12 * dVar29;
    dVar31 = dVar31 + dVar31;
    dVar32 = dVar32 + dVar32;
    dVar30 = dVar30 + dVar30;
    dVar6 = param_3[4];
    dVar11 = (dVar14 * dVar31 - dVar12 * dVar30) + param_3[3] * dVar32 + dVar9 + param_3[5];
    dVar9 = param_3[6];
    lVar23 = (longlong)(int)uStack_e0;
    uVar19 = (int)uStack_e0 + 1;
    uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar19);
    if (uStack_e0._4_4_ < uVar19) {
      FUN_1403e3958(&local_e8,uVar18 & 0xffffffff);
    }
    auVar10._8_4_ = SUB84(dVar11,0);
    auVar10._0_8_ = (dVar30 * dVar13 - dVar32 * dVar14) + dVar5 * dVar31 + dVar8 + dVar6;
    auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    *(undefined1 (*) [16])(local_e8 + lVar23 * 0x18) = auVar10;
    *(double *)(local_e8 + 0x10 + lVar23 * 0x18) =
         dVar30 * dVar5 + dVar29 + (dVar32 * dVar12 - dVar31 * dVar13) + dVar9;
    uVar20 = uVar20 + 1;
  } while (uVar20 != 8);
  local_128 = *param_3;
  dStack_120 = param_3[1];
  local_118 = *(undefined4 *)(param_3 + 2);
  uStack_114 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_110 = *(undefined4 *)(param_3 + 3);
  uStack_10c = *(undefined4 *)((longlong)param_3 + 0x1c);
  FUN_1448052ee(&local_128,local_100);
  dVar25 = (double)FUN_144719204(local_100[0],0x4056800000000000);
  dVar26 = (double)FUN_144719204(local_f8,0x4056800000000000);
  dVar27 = (double)FUN_144719204(local_f0,0x4056800000000000);
  if ((((1.0 <= dVar25) && (1.0 <= 90.0 - dVar25)) || ((1.0 <= dVar26 && (1.0 <= 90.0 - dVar26))))
     || ((1.0 <= dVar27 && (1.0 <= 90.0 - dVar27)))) {
    local_130 = &DAT_14c846480;
    local_138 = 0;
    FUN_1478cbd9c(param_1,local_e8,0,uStack_e0 & 0xffffffff);
  }
  else {
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x50) = 0;
    lVar23 = (longlong)(int)uStack_e0;
    if (0 < lVar23) {
      lVar23 = lVar23 * 0x18;
      bVar22 = true;
      lVar21 = 0;
      do {
        if (bVar22) {
          puVar1 = (undefined8 *)(local_e8 + lVar21);
          *(undefined8 *)(param_1 + 0x48) = puVar1[2];
          uVar17 = puVar1[1];
          *(undefined8 *)(param_1 + 0x38) = *puVar1;
          *(undefined8 *)(param_1 + 0x40) = uVar17;
          uVar24 = *(undefined4 *)puVar1;
          uVar28 = *(undefined4 *)((longlong)puVar1 + 4);
          uVar15 = *(undefined4 *)(puVar1 + 1);
          uVar16 = *(undefined4 *)((longlong)puVar1 + 0xc);
          *(undefined8 *)(param_1 + 0x30) = puVar1[2];
          *(undefined4 *)(param_1 + 0x20) = uVar24;
          *(undefined4 *)(param_1 + 0x24) = uVar28;
          *(undefined4 *)(param_1 + 0x28) = uVar15;
          *(undefined4 *)(param_1 + 0x2c) = uVar16;
          *(undefined1 *)(param_1 + 0x50) = 1;
        }
        else {
          dVar25 = *(double *)(param_1 + 0x20);
          uVar24 = SUB84(dVar25,0);
          uVar28 = (undefined4)((ulonglong)dVar25 >> 0x20);
          dVar26 = *(double *)(local_e8 + lVar21);
          if (dVar26 <= dVar25) {
            uVar24 = SUB84(dVar26,0);
            uVar28 = (undefined4)((ulonglong)dVar26 >> 0x20);
          }
          *(ulonglong *)(param_1 + 0x20) = CONCAT44(uVar28,uVar24);
          dVar25 = *(double *)(local_e8 + 8 + lVar21);
          dVar26 = *(double *)(param_1 + 0x28);
          if (dVar25 <= *(double *)(param_1 + 0x28)) {
            dVar26 = dVar25;
          }
          *(double *)(param_1 + 0x28) = dVar26;
          dVar25 = *(double *)(param_1 + 0x30);
          uVar24 = SUB84(dVar25,0);
          uVar28 = (undefined4)((ulonglong)dVar25 >> 0x20);
          dVar26 = *(double *)(local_e8 + 0x10 + lVar21);
          if (dVar26 <= dVar25) {
            uVar24 = SUB84(dVar26,0);
            uVar28 = (undefined4)((ulonglong)dVar26 >> 0x20);
          }
          *(ulonglong *)(param_1 + 0x30) = CONCAT44(uVar28,uVar24);
          dVar25 = *(double *)(param_1 + 0x38);
          uVar24 = SUB84(dVar25,0);
          uVar28 = (undefined4)((ulonglong)dVar25 >> 0x20);
          dVar26 = *(double *)(local_e8 + lVar21);
          if (dVar25 <= dVar26) {
            uVar24 = SUB84(dVar26,0);
            uVar28 = (undefined4)((ulonglong)dVar26 >> 0x20);
          }
          *(ulonglong *)(param_1 + 0x38) = CONCAT44(uVar28,uVar24);
          dVar25 = *(double *)(param_1 + 0x40);
          uVar24 = SUB84(dVar25,0);
          uVar28 = (undefined4)((ulonglong)dVar25 >> 0x20);
          dVar26 = *(double *)(local_e8 + 8 + lVar21);
          if (dVar25 <= dVar26) {
            uVar24 = SUB84(dVar26,0);
            uVar28 = (undefined4)((ulonglong)dVar26 >> 0x20);
          }
          *(ulonglong *)(param_1 + 0x40) = CONCAT44(uVar28,uVar24);
          dVar25 = *(double *)(param_1 + 0x48);
          uVar24 = SUB84(dVar25,0);
          uVar28 = (undefined4)((ulonglong)dVar25 >> 0x20);
          dVar26 = *(double *)(local_e8 + 0x10 + lVar21);
          if (dVar25 <= dVar26) {
            uVar24 = SUB84(dVar26,0);
            uVar28 = (undefined4)((ulonglong)dVar26 >> 0x20);
          }
          *(ulonglong *)(param_1 + 0x48) = CONCAT44(uVar28,uVar24);
        }
        lVar21 = lVar21 + 0x18;
        bVar22 = false;
      } while (lVar23 != lVar21);
    }
    FUN_140b463b8(param_1 + 0x58,2,CONCAT71((int7)((ulonglong)lVar23 >> 8),1));
    dVar25 = *(double *)(param_1 + 0x30);
    dVar26 = *(double *)(param_1 + 0x48);
    dVar27 = *(double *)(param_1 + 0x28);
    dVar2 = *(double *)(param_1 + 0x40);
    pdVar7 = *(double **)(param_1 + 0x58);
    *pdVar7 = (*(double *)(param_1 + 0x20) + *(double *)(param_1 + 0x38)) * 0.5;
    pdVar7[1] = (dVar27 + dVar2) * 0.5;
    pdVar7[2] = (dVar25 + dVar26) * 0.5;
    dVar25 = *(double *)(param_1 + 0x48);
    dVar26 = *(double *)(param_1 + 0x30);
    dVar27 = *(double *)(param_1 + 0x40);
    dVar2 = *(double *)(param_1 + 0x28);
    lVar23 = *(longlong *)(param_1 + 0x58);
    *(double *)(lVar23 + 0x18) = (*(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20)) * 0.5;
    *(double *)(lVar23 + 0x20) = (dVar27 - dVar2) * 0.5;
    *(double *)(lVar23 + 0x28) = (dVar25 - dVar26) * 0.5;
    *(undefined1 *)(param_1 + 0x68) = 2;
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_d0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478cbd10 FUN_1478cbd10 body=138 status=ok
// SIG undefined FUN_1478cbd10(void)

byte * FUN_1478cbd10(byte *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = *param_1 & 0xfe;
  param_1[0x50] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  local_28 = *param_4;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1478cb71c(param_1,&local_28);
  FUN_1478cb79e(param_1,param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478cbd9c FUN_1478cbd9c body=2095 status=ok
// SIG undefined FUN_1478cbd9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1478cbd9c(longlong param_1,longlong param_2,int param_3,int param_4,undefined4 param_5,
                  double *param_6)

{
  longlong *plVar1;
  double dVar2;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 uVar26;
  double *pdVar27;
  int iVar28;
  uint uVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar37;
  double dVar38;
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auStack_318 [32];
  longlong local_2f8;
  double local_2e8;
  double dStack_2e0;
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  undefined1 local_248 [16];
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  void *local_168;
  double dStack_160;
  double local_158;
  undefined8 local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  ulonglong local_e0;
  double dVar3;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  lVar30 = param_2;
  pdVar27 = (double *)FUN_1478c9abe();
  auVar44 = _DAT_149934d80;
  local_2c8 = ZEXT816(0);
  local_2b8 = 0.0;
  dStack_2b0 = 0.0;
  auVar34 = *(undefined1 (*) [16])(pdVar27 + 8);
  dVar8 = auVar34._0_8_;
  dVar12 = auVar34._8_8_;
  auVar5 = *(undefined1 (*) [16])(pdVar27 + 10);
  dVar9 = auVar5._0_8_;
  auVar35 = *(undefined1 (*) [16])(param_6 + 8);
  dVar10 = auVar35._0_8_;
  dVar13 = auVar35._8_8_;
  auVar6 = *(undefined1 (*) [16])(param_6 + 10);
  dVar11 = auVar6._0_8_;
  auVar34 = minpd(auVar35,auVar34);
  auVar39 = minpd(auVar6,auVar5);
  auVar35._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
  auVar35._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
  iVar28 = movmskpd(param_5,auVar35);
  auVar34._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
  auVar34._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
  uVar29 = movmskpd((int)lVar30,auVar34);
  if ((uVar29 & 0x3fffffff) == 0 && iVar28 == 0) {
    dVar18 = *param_6;
    dVar19 = param_6[1];
    dVar20 = param_6[2];
    dVar21 = param_6[3];
    dVar22 = *pdVar27;
    dVar23 = pdVar27[1];
    dVar24 = pdVar27[2];
    dVar25 = pdVar27[3];
    dVar38 = pdVar27[3];
    dVar33 = pdVar27[3];
    dVar2 = pdVar27[1];
    dVar3 = pdVar27[1];
    dVar4 = pdVar27[2];
    dVar40 = pdVar27[2];
    local_2e8 = dVar19 * dVar4 * -1.0 + dVar20 * dVar2 + dVar21 * *pdVar27 * 1.0 + dVar18 * dVar38;
    dStack_2e0 = dVar18 * dVar40 * 1.0 + dVar21 * dVar3 + dVar20 * *pdVar27 * -1.0 + dVar19 * dVar33
    ;
    dVar14 = param_6[4] * dVar8;
    dVar43 = param_6[5] * dVar12;
    dVar15 = param_6[6] * dVar9;
    dVar16 = param_6[7] * auVar5._8_8_;
    dVar37 = dVar43 * dVar22 - dVar23 * dVar14;
    dVar41 = dVar15 * dVar23 - dVar24 * dVar43;
    dVar42 = dVar14 * dVar24 - dVar22 * dVar15;
    dVar17 = dVar16 * dVar25 - dVar25 * dVar16;
    dVar41 = dVar41 + dVar41;
    dVar42 = dVar42 + dVar42;
    dVar37 = dVar37 + dVar37;
    dVar17 = dVar17 + dVar17;
    dVar43 = (dVar41 * dVar24 - dVar37 * dVar22) + dVar33 * dVar42 + dVar43 + pdVar27[5];
    local_2b8 = (dVar42 * dVar22 - dVar23 * dVar41) + dVar38 * dVar37 + dVar15 + pdVar27[6];
    dStack_2b0 = (dVar17 * dVar25 - dVar17 * dVar25) + dVar33 * dVar17 + dVar16 + pdVar27[7];
    local_2d8._8_8_ =
         dVar20 * dVar40 * -1.0 + ((*pdVar27 * dVar18 * -1.0 + dVar21 * dVar33) - dVar19 * dVar3);
    local_2d8._0_8_ =
         dVar21 * dVar4 * 1.0 + ((*pdVar27 * dVar19 * 1.0 + dVar20 * dVar38) - dVar18 * dVar2);
    local_2c8._8_4_ = SUB84(dVar43,0);
    local_2c8._0_8_ = (dVar37 * dVar23 - dVar24 * dVar42) + dVar38 * dVar41 + dVar14 + pdVar27[4];
    local_2c8._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
  }
  else {
    dVar3 = *pdVar27;
    dVar4 = pdVar27[1];
    dVar40 = pdVar27[2];
    dVar37 = dVar4 + dVar4;
    dVar41 = dVar40 + dVar40;
    dVar38 = dVar3 * (dVar3 + dVar3);
    local_198 = (1.0 - (dVar38 + dVar4 * dVar37)) * dVar9;
    dVar33 = pdVar27[3];
    dVar42 = dVar41 * dVar33;
    dVar43 = (dVar3 + dVar3) * pdVar27[3];
    dVar33 = dVar37 * dVar33;
    local_1a8 = (dVar33 + *pdVar27 * dVar41) * dVar9;
    dVar38 = (DAT_149934d80._8_8_ - (dVar40 * dVar41 + dVar38)) * dVar12;
    dVar2 = (dVar37 * dVar3 + dVar42) * dVar8;
    local_1b8 = (dVar41 * dVar4 + dVar43) * dVar12;
    dStack_1a0 = (dVar41 * dVar4 - dVar43) * dVar9;
    local_1d8 = (*pdVar27 * dVar41 - dVar33) * dVar8;
    local_1e8._8_4_ = SUB84(dVar2,0);
    local_1e8._0_8_ = ((double)DAT_149934d80 - (dVar40 * dVar41 + dVar4 * dVar37)) * dVar8;
    local_1e8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    uStack_1d0 = 0;
    local_1c8._8_4_ = SUB84(dVar38,0);
    local_1c8._0_8_ = (dVar37 * dVar3 - dVar42) * dVar12;
    local_1c8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
    uStack_1b0 = 0;
    uStack_190 = 0;
    local_188 = pdVar27[4];
    dStack_180 = pdVar27[5];
    local_178 = pdVar27[6];
    uStack_170 = 0x3ff0000000000000;
    dVar2 = *param_6;
    dVar3 = param_6[1];
    dVar4 = param_6[2];
    dVar40 = dVar3 + dVar3;
    dVar37 = dVar4 + dVar4;
    dVar38 = dVar2 * (dVar2 + dVar2);
    local_218 = (1.0 - (dVar38 + dVar3 * dVar40)) * dVar11;
    dVar33 = param_6[3];
    dVar41 = dVar37 * dVar33;
    dVar42 = (dVar2 + dVar2) * param_6[3];
    dVar33 = dVar40 * dVar33;
    local_228 = (dVar33 + *param_6 * dVar37) * dVar11;
    dStack_220 = (dVar37 * dVar3 - dVar42) * dVar11;
    local_268 = ((double)DAT_149934d80 - (dVar4 * dVar37 + dVar3 * dVar40)) * dVar10;
    dVar38 = (DAT_149934d80._8_8_ - (dVar4 * dVar37 + dVar38)) * dVar13;
    dStack_260 = (dVar40 * dVar2 + dVar41) * dVar10;
    local_238 = (dVar37 * dVar3 + dVar42) * dVar13;
    local_258 = (*param_6 * dVar37 - dVar33) * dVar10;
    uStack_250 = 0;
    local_248._8_4_ = SUB84(dVar38,0);
    local_248._0_8_ = (dVar40 * dVar2 - dVar41) * dVar13;
    local_248._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
    uStack_230 = 0;
    uStack_210 = 0;
    local_208 = param_6[4];
    dStack_200 = param_6[5];
    local_1f8 = param_6[6];
    uStack_1f0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_168);
    FUN_144a1c686(&local_168,0x3e45798ee0000000);
    auVar39._8_8_ = -(ulonglong)(0.0 <= dVar12 * dVar13);
    auVar39._0_8_ = -(ulonglong)(0.0 <= dVar8 * dVar10);
    auVar34 = blendvpd(_DAT_149936790,auVar44,auVar39);
    uVar31 = -(ulonglong)(0.0 <= dVar9 * dVar11);
    dVar33 = (double)(~uVar31 & 0xbff0000000000000 | uVar31 & 0x3ff0000000000000);
    dVar38 = auVar34._0_8_;
    local_158 = local_158 * dVar38;
    dStack_160 = dStack_160 * dVar38;
    local_168 = (void *)((double)local_168 * dVar38);
    dVar38 = auVar34._8_8_;
    local_138 = local_138 * dVar38;
    local_140 = local_140 * dVar38;
    local_148 = dVar38 * local_148;
    local_118 = local_118 * dVar33;
    local_120 = local_120 * dVar33;
    local_128 = dVar33 * local_128;
    FUN_14481fd10(&local_288,&local_168);
    dVar33 = local_278 * local_278 + local_288 * local_288;
    dVar38 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
    auVar36._0_8_ = dVar33 + dVar38;
    auVar36._8_8_ = dVar33 + dVar38;
    auVar32._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
    auVar32._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
    auVar34 = sqrtpd(auVar36,auVar36);
    auVar34 = divpd(auVar44,auVar34);
    auVar44._0_8_ = auVar34._0_8_ * local_278;
    auVar44._8_8_ = auVar34._8_8_ * dStack_270;
    local_2e8 = (double)((ulonglong)(local_288 * auVar34._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_));
    dStack_2e0 = (double)((ulonglong)(dStack_280 * auVar34._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_));
    local_2d8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar44,auVar32);
    local_2c8._8_8_ = uStack_100;
    local_2c8._0_8_ = local_108;
    local_2b8 = local_f8;
    dStack_2b0 = 0.0;
  }
  dVar33 = auVar6._8_8_ * auVar5._8_8_;
  local_2a8._8_4_ = SUB84(dVar13 * dVar12,0);
  local_2a8._0_8_ = dVar10 * dVar8;
  local_2a8._12_4_ = (int)((ulonglong)(dVar13 * dVar12) >> 0x20);
  local_298._8_4_ = SUB84(dVar33,0);
  local_298._0_8_ = dVar11 * dVar9;
  local_298._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
  local_2f8 = param_1 + 0x20;
  local_168 = (void *)0x0;
  dStack_160 = 0.0;
  FUN_1478cc90e(param_2 + (longlong)param_3 * 0x18,param_4 - param_3,&local_2e8,&local_168);
  lVar30 = (longlong)(int)dStack_160._0_4_;
  if (lVar30 < 1) {
    uVar26 = 0;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x58);
    iVar28 = *(int *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x60) = iVar28 + dStack_160._0_4_;
    if ((uint)(*(int *)(param_1 + 100) - iVar28) < dStack_160._0_4_) {
      FUN_1403e3958(plVar1,iVar28);
    }
    memcpy((void *)((longlong)iVar28 * 0x18 + *(longlong *)(param_1 + 0x58)),local_168,lVar30 * 0x18
          );
    dVar8 = local_158;
    iVar28 = *(int *)(param_1 + 0x60);
    lVar30 = (longlong)iVar28;
    *(uint *)(param_1 + 0x60) = iVar28 + 1U;
    if (*(uint *)(param_1 + 100) < iVar28 + 1U) {
      FUN_1403e3958(plVar1,iVar28);
    }
    lVar7 = *plVar1;
    *(double *)(lVar7 + lVar30 * 0x18) = dVar8;
    *(undefined8 *)(lVar7 + 8 + lVar30 * 0x18) = local_150;
    *(undefined8 *)(lVar7 + 0x10 + lVar30 * 0x18) = 0;
    uVar26 = 3;
  }
  *(undefined1 *)(param_1 + 0x68) = uVar26;
  if (local_168 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_e0 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478cc5cc FUN_1478cc5cc body=166 status=ok
// SIG undefined FUN_1478cc5cc(void)

byte * FUN_1478cc5cc(byte *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
                    longlong *param_5)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = *param_1 & 0xfe;
  param_1[0x50] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  local_30 = *param_5;
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1478cb71c(param_1,&local_30);
  local_48 = param_3;
  local_40 = param_4;
  FUN_1478cbd9c(param_1,*param_2,0,*(undefined4 *)(param_2 + 1));
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478cc674 FUN_1478cc674 body=169 status=ok
// SIG undefined FUN_1478cc674(void)

byte * FUN_1478cc674(byte *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
                    longlong *param_5)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = *param_1 & 0xfe;
  param_1[0x50] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  local_30 = *param_5;
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1478cb71c(param_1,&local_30);
  local_48 = 0;
  local_40 = param_4;
  FUN_1478cbd9c(param_1,*param_2,0,param_3);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478cc71e FUN_1478cc71e body=496 status=ok
// SIG undefined FUN_1478cc71e(void)

void FUN_1478cc71e(longlong param_1,longlong param_2,int param_3,int param_4)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double *pdVar6;
  longlong lVar7;
  double *pdVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  if (param_3 < param_4) {
    lVar9 = (longlong)param_3;
    do {
      pdVar1 = (double *)(param_2 + lVar9 * 0x18);
      pdVar6 = *(double **)(param_1 + 0x58);
      iVar3 = *(int *)(param_1 + 0x60);
      lVar10 = (longlong)iVar3;
      if (lVar10 != 0) {
        lVar7 = lVar10 * 0x18;
        pdVar8 = pdVar6;
        do {
          if (ABS((pdVar1[2] - pdVar8[2]) * (pdVar1[2] - pdVar8[2]) +
                  (pdVar1[1] - pdVar8[1]) * (pdVar1[1] - pdVar8[1]) +
                  (*pdVar1 - *pdVar8) * (*pdVar1 - *pdVar8)) <= 1e-08) {
            if (pdVar8 != (double *)0x0) goto LAB_1478cc8a7;
            break;
          }
          pdVar8 = pdVar8 + 3;
          lVar7 = lVar7 + -0x18;
        } while (lVar7 != 0);
      }
      *(uint *)(param_1 + 0x60) = iVar3 + 1U;
      if (*(uint *)(param_1 + 100) < iVar3 + 1U) {
        FUN_1403e3958((undefined8 *)(param_1 + 0x58),iVar3);
        pdVar6 = *(double **)(param_1 + 0x58);
      }
      pdVar6[lVar10 * 3 + 2] = pdVar1[2];
      dVar13 = pdVar1[1];
      pdVar6[lVar10 * 3] = *pdVar1;
      (pdVar6 + lVar10 * 3)[1] = dVar13;
      if (*(char *)(param_1 + 0x50) == '\0') {
        *(double *)(param_1 + 0x48) = pdVar1[2];
        dVar13 = pdVar1[1];
        *(double *)(param_1 + 0x38) = *pdVar1;
        *(double *)(param_1 + 0x40) = dVar13;
        uVar11 = *(undefined4 *)pdVar1;
        uVar12 = *(undefined4 *)((longlong)pdVar1 + 4);
        uVar4 = *(undefined4 *)(pdVar1 + 1);
        uVar5 = *(undefined4 *)((longlong)pdVar1 + 0xc);
        *(double *)(param_1 + 0x30) = pdVar1[2];
        *(undefined4 *)(param_1 + 0x20) = uVar11;
        *(undefined4 *)(param_1 + 0x24) = uVar12;
        *(undefined4 *)(param_1 + 0x28) = uVar4;
        *(undefined4 *)(param_1 + 0x2c) = uVar5;
        *(undefined1 *)(param_1 + 0x50) = 1;
      }
      else {
        dVar13 = *(double *)(param_1 + 0x20);
        uVar11 = SUB84(dVar13,0);
        uVar12 = (undefined4)((ulonglong)dVar13 >> 0x20);
        dVar2 = *pdVar1;
        if (dVar2 <= dVar13) {
          uVar11 = SUB84(dVar2,0);
          uVar12 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        *(ulonglong *)(param_1 + 0x20) = CONCAT44(uVar12,uVar11);
        dVar13 = *(double *)(param_1 + 0x28);
        if (pdVar1[1] <= *(double *)(param_1 + 0x28)) {
          dVar13 = pdVar1[1];
        }
        *(double *)(param_1 + 0x28) = dVar13;
        dVar13 = *(double *)(param_1 + 0x30);
        uVar11 = SUB84(dVar13,0);
        uVar12 = (undefined4)((ulonglong)dVar13 >> 0x20);
        dVar2 = pdVar1[2];
        if (dVar2 <= dVar13) {
          uVar11 = SUB84(dVar2,0);
          uVar12 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        *(ulonglong *)(param_1 + 0x30) = CONCAT44(uVar12,uVar11);
        dVar13 = *(double *)(param_1 + 0x38);
        uVar11 = SUB84(dVar13,0);
        uVar12 = (undefined4)((ulonglong)dVar13 >> 0x20);
        dVar2 = *pdVar1;
        if (dVar13 <= dVar2) {
          uVar11 = SUB84(dVar2,0);
          uVar12 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        *(ulonglong *)(param_1 + 0x38) = CONCAT44(uVar12,uVar11);
        dVar13 = *(double *)(param_1 + 0x40);
        uVar11 = SUB84(dVar13,0);
        uVar12 = (undefined4)((ulonglong)dVar13 >> 0x20);
        dVar2 = pdVar1[1];
        if (dVar13 <= dVar2) {
          uVar11 = SUB84(dVar2,0);
          uVar12 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        *(ulonglong *)(param_1 + 0x40) = CONCAT44(uVar12,uVar11);
        dVar13 = *(double *)(param_1 + 0x48);
        uVar11 = SUB84(dVar13,0);
        uVar12 = (undefined4)((ulonglong)dVar13 >> 0x20);
        dVar2 = pdVar1[2];
        if (dVar13 <= dVar2) {
          uVar11 = SUB84(dVar2,0);
          uVar12 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        *(ulonglong *)(param_1 + 0x48) = CONCAT44(uVar12,uVar11);
      }
LAB_1478cc8a7:
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 != param_4);
  }
  *(undefined1 *)(param_1 + 0x68) = 4;
  return;
}



// FUNCTION 1478cc90e FUN_1478cc90e body=1153 status=ok
// SIG undefined FUN_1478cc90e(void)

void FUN_1478cc90e(longlong param_1,uint param_2,double *param_3,longlong *param_4,double *param_5)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double *pdVar11;
  undefined1 *puVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_1c8 [32];
  double *local_1a8;
  undefined1 local_1a0 [32];
  undefined1 *local_180;
  undefined8 local_178;
  double local_170 [24];
  double *local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  param_5[4] = 0.0;
  param_5[5] = 0.0;
  param_5[2] = 0.0;
  param_5[3] = 0.0;
  *param_5 = 0.0;
  param_5[1] = 0.0;
  *(undefined1 *)(param_5 + 6) = 0;
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) < 0) {
    FUN_1447a8aa0(param_4,0);
  }
  param_4[2] = 0x47efffffe0000000;
  param_4[3] = -0x3810000020000000;
  if (0 < (int)param_2) {
    local_1a8 = param_5 + 3;
    local_b0 = (double *)0x0;
    local_a8 = 0x800000000;
    uVar15 = 0;
    do {
      pdVar11 = (double *)(param_1 + uVar15 * 0x18);
      dVar19 = *pdVar11 * param_3[8];
      dVar20 = pdVar11[1] * param_3[9];
      dVar24 = *(double *)(param_1 + 0x10 + uVar15 * 0x18) * param_3[10];
      dVar7 = *param_3;
      dVar8 = param_3[1];
      dVar6 = param_3[2];
      dVar18 = param_3[3];
      dVar21 = dVar20 * dVar7 - dVar19 * dVar8;
      dVar22 = dVar24 * dVar8 - dVar20 * dVar6;
      dVar23 = dVar19 * dVar6 - dVar7 * dVar24;
      dVar22 = dVar22 + dVar22;
      dVar23 = dVar23 + dVar23;
      dVar21 = dVar21 + dVar21;
      dVar19 = (dVar21 * dVar8 - dVar23 * dVar6) + dVar18 * dVar22 + dVar19 + param_3[4];
      dVar6 = (dVar6 * dVar22 - dVar7 * dVar21) + param_3[3] * dVar23 + dVar20 + param_3[5];
      dVar24 = dVar21 * dVar18 + dVar24 + (dVar23 * dVar7 - dVar22 * dVar8) + param_3[6];
      dVar18 = (double)param_4[2];
      if (dVar24 <= (double)param_4[2]) {
        dVar18 = dVar24;
      }
      param_4[2] = (longlong)dVar18;
      dVar18 = (double)param_4[3];
      if ((double)param_4[3] <= dVar24) {
        dVar18 = dVar24;
      }
      param_4[3] = (longlong)dVar18;
      pdVar11 = local_b0;
      if (local_b0 == (double *)0x0) {
        pdVar11 = local_170;
      }
      lVar14 = (longlong)(int)local_a8;
      if (lVar14 != 0) {
        pdVar1 = pdVar11 + lVar14 * 3;
        do {
          dVar18 = dVar19 - *pdVar11;
          if ((0.0 - pdVar11[2]) * (0.0 - pdVar11[2]) +
              (dVar6 - pdVar11[1]) * (dVar6 - pdVar11[1]) + dVar18 * dVar18 < 16.0)
          goto LAB_1478ccbf1;
          pdVar11 = pdVar11 + 3;
        } while (pdVar11 != pdVar1);
      }
      uVar13 = (int)local_a8 + 1;
      local_a8 = CONCAT44(local_a8._4_4_,uVar13);
      if (local_a8._4_4_ < uVar13) {
        FUN_146c5b08e(local_170);
      }
      pdVar11 = local_b0;
      if (local_b0 == (double *)0x0) {
        pdVar11 = local_170;
      }
      auVar5._8_4_ = SUB84(dVar6,0);
      auVar5._0_8_ = dVar19;
      auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      *(undefined1 (*) [16])(pdVar11 + lVar14 * 3) = auVar5;
      pdVar11[lVar14 * 3 + 2] = 0.0;
LAB_1478ccbf1:
      uVar15 = uVar15 + 1;
    } while (uVar15 != param_2);
    local_180 = (undefined1 *)0x0;
    local_178 = 0x800000000;
    FUN_1478cd002(local_170,local_1a0);
    if (2 < (int)local_178) {
      lVar14 = 0;
      do {
        puVar12 = local_180;
        if (local_180 == (undefined1 *)0x0) {
          puVar12 = local_1a0;
        }
        iVar2 = *(int *)(puVar12 + lVar14 * 4);
        pdVar11 = local_b0;
        if (local_b0 == (double *)0x0) {
          pdVar11 = local_170;
        }
        iVar3 = (int)param_4[1];
        *(uint *)(param_4 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
          FUN_1403e3958(param_4,iVar3);
        }
        pdVar11 = pdVar11 + (longlong)iVar2 * 3;
        lVar4 = *param_4;
        *(double *)(lVar4 + 0x10 + (longlong)iVar3 * 0x18) = pdVar11[2];
        dVar18 = pdVar11[1];
        pdVar1 = (double *)(lVar4 + (longlong)iVar3 * 0x18);
        *pdVar1 = *pdVar11;
        pdVar1[1] = dVar18;
        if (*(char *)(param_5 + 6) == '\0') {
          local_1a8[2] = pdVar11[2];
          dVar18 = pdVar11[1];
          *local_1a8 = *pdVar11;
          local_1a8[1] = dVar18;
          uVar16 = *(undefined4 *)pdVar11;
          uVar17 = *(undefined4 *)((longlong)pdVar11 + 4);
          uVar9 = *(undefined4 *)(pdVar11 + 1);
          uVar10 = *(undefined4 *)((longlong)pdVar11 + 0xc);
          param_5[2] = pdVar11[2];
          *(undefined4 *)param_5 = uVar16;
          *(undefined4 *)((longlong)param_5 + 4) = uVar17;
          *(undefined4 *)(param_5 + 1) = uVar9;
          *(undefined4 *)((longlong)param_5 + 0xc) = uVar10;
          *(undefined1 *)(param_5 + 6) = 1;
        }
        else {
          dVar18 = *param_5;
          uVar16 = SUB84(dVar18,0);
          uVar17 = (undefined4)((ulonglong)dVar18 >> 0x20);
          dVar24 = *pdVar11;
          if (dVar24 <= dVar18) {
            uVar16 = SUB84(dVar24,0);
            uVar17 = (undefined4)((ulonglong)dVar24 >> 0x20);
          }
          *param_5 = (double)CONCAT44(uVar17,uVar16);
          dVar18 = param_5[1];
          if (pdVar11[1] <= param_5[1]) {
            dVar18 = pdVar11[1];
          }
          param_5[1] = dVar18;
          dVar18 = param_5[2];
          uVar16 = SUB84(dVar18,0);
          uVar17 = (undefined4)((ulonglong)dVar18 >> 0x20);
          dVar24 = pdVar11[2];
          if (dVar24 <= dVar18) {
            uVar16 = SUB84(dVar24,0);
            uVar17 = (undefined4)((ulonglong)dVar24 >> 0x20);
          }
          param_5[2] = (double)CONCAT44(uVar17,uVar16);
          dVar18 = param_5[3];
          uVar16 = SUB84(dVar18,0);
          uVar17 = (undefined4)((ulonglong)dVar18 >> 0x20);
          dVar24 = *pdVar11;
          if (dVar18 <= dVar24) {
            uVar16 = SUB84(dVar24,0);
            uVar17 = (undefined4)((ulonglong)dVar24 >> 0x20);
          }
          param_5[3] = (double)CONCAT44(uVar17,uVar16);
          dVar18 = param_5[4];
          uVar16 = SUB84(dVar18,0);
          uVar17 = (undefined4)((ulonglong)dVar18 >> 0x20);
          dVar24 = pdVar11[1];
          if (dVar18 <= dVar24) {
            uVar16 = SUB84(dVar24,0);
            uVar17 = (undefined4)((ulonglong)dVar24 >> 0x20);
          }
          param_5[4] = (double)CONCAT44(uVar17,uVar16);
          dVar18 = param_5[5];
          uVar16 = SUB84(dVar18,0);
          uVar17 = (undefined4)((ulonglong)dVar18 >> 0x20);
          dVar24 = pdVar11[2];
          if (dVar18 <= dVar24) {
            uVar16 = SUB84(dVar24,0);
            uVar17 = (undefined4)((ulonglong)dVar24 >> 0x20);
          }
          param_5[5] = (double)CONCAT44(uVar17,uVar16);
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 < (int)local_178);
      param_5[2] = (double)param_4[2];
      param_5[5] = (double)param_4[3];
    }
    if (local_180 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_b0 != (double *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ccd90 FUN_1478ccd90 body=250 status=ok
// SIG undefined FUN_1478ccd90(void)

void FUN_1478ccd90(uint *param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  
  lVar7 = *param_2;
  if ((((lVar7 == 0) || (lVar5 = FUN_145909544(), lVar5 == 0)) ||
      (*(int *)(lVar7 + 0x38) < *(int *)(lVar5 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
      lVar5 + 0x30)) {
    lVar7 = 0;
  }
  else {
    lVar7 = *param_2;
  }
  FUN_14485c47a(param_1 + 3,lVar7);
  plVar3 = (longlong *)FUN_14479d2ce(param_1 + 3);
  plVar4 = (longlong *)FUN_14479d2ce(param_1 + 5);
  if (plVar3 != (longlong *)0x0) {
    plVar6 = (longlong *)plVar3[0x22];
    if (plVar6 == (longlong *)0x0) {
      (**(code **)(*plVar3 + 1000))(plVar3);
      plVar6 = (longlong *)plVar3[0x22];
      if (plVar6 == (longlong *)0x0) goto LAB_1478ccdee;
    }
    cVar1 = (**(code **)(*plVar6 + 0x2a8))();
    uVar8 = 1;
    if (cVar1 != '\0') goto LAB_1478cce0d;
  }
LAB_1478ccdee:
  uVar8 = 0;
  if (plVar4 != (longlong *)0x0) {
    plVar3 = (longlong *)plVar4[0x22];
    if (plVar3 == (longlong *)0x0) {
      (**(code **)(*plVar4 + 1000))(plVar4);
      plVar3 = (longlong *)plVar4[0x22];
      uVar8 = 0;
      if (plVar3 == (longlong *)0x0) goto LAB_1478cce0d;
    }
    bVar2 = (**(code **)(*plVar3 + 0x2a8))();
    uVar8 = (uint)bVar2;
  }
LAB_1478cce0d:
  *param_1 = *param_1 & 0xfffffffe | uVar8;
  return;
}



// FUNCTION 1478cce8a FUN_1478cce8a body=376 status=ok
// SIG undefined FUN_1478cce8a(void)

void FUN_1478cce8a(uint *param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  lVar8 = *param_2;
  if ((((lVar8 == 0) || (lVar6 = FUN_145909544(), lVar6 == 0)) ||
      (*(int *)(lVar8 + 0x38) < *(int *)(lVar6 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
      lVar6 + 0x30)) {
    lVar8 = 0;
  }
  else {
    lVar8 = *param_2;
  }
  FUN_14485c47a(param_1 + 5,lVar8);
  plVar4 = (longlong *)FUN_14479d2ce(param_1 + 3);
  plVar5 = (longlong *)FUN_14479d2ce(param_1 + 5);
  if (plVar4 == (longlong *)0x0) {
LAB_1478ccf08:
    if (plVar5 == (longlong *)0x0) {
      *(byte *)param_1 = (byte)*param_1 & 0xfe;
LAB_1478ccf7e:
      bVar2 = *(byte *)((longlong)param_1 + 0x69);
      if ((bVar2 | 2) != 3) {
        return;
      }
      *(byte *)((longlong)param_1 + 0x6a) =
           *(byte *)((longlong)param_1 + 0x6a) & 0xfb | (bVar2 == 3) * '\x04';
      bVar2 = (bVar2 == 3) * '\x02';
      goto LAB_1478ccf70;
    }
    plVar4 = (longlong *)plVar5[0x22];
    if (plVar4 == (longlong *)0x0) {
      (**(code **)(*plVar5 + 1000))(plVar5);
      plVar4 = (longlong *)plVar5[0x22];
      if (plVar4 != (longlong *)0x0) goto LAB_1478ccf1d;
      uVar3 = 0;
    }
    else {
LAB_1478ccf1d:
      bVar2 = (**(code **)(*plVar4 + 0x2a8))();
      uVar3 = (uint)bVar2;
    }
    *param_1 = *param_1 & 0xfffffffe | uVar3;
  }
  else {
    plVar7 = (longlong *)plVar4[0x22];
    if (plVar7 == (longlong *)0x0) {
      (**(code **)(*plVar4 + 1000))(plVar4);
      plVar7 = (longlong *)plVar4[0x22];
      if (plVar7 == (longlong *)0x0) goto LAB_1478ccf08;
    }
    cVar1 = (**(code **)(*plVar7 + 0x2a8))();
    if (cVar1 == '\0') goto LAB_1478ccf08;
    *(byte *)param_1 = (byte)*param_1 | 1;
    if (plVar5 == (longlong *)0x0) goto LAB_1478ccf7e;
  }
  plVar4 = (longlong *)plVar5[0x22];
  if (plVar4 == (longlong *)0x0) {
    (**(code **)(*plVar5 + 1000))(plVar5);
    plVar4 = (longlong *)plVar5[0x22];
  }
  cVar1 = (**(code **)(*plVar4 + 0x2a0))();
  *(byte *)((longlong)param_1 + 0x6a) = *(byte *)((longlong)param_1 + 0x6a) & 0xfb | cVar1 * '\x04';
  bVar2 = cVar1 * '\x02' + 1;
LAB_1478ccf70:
  *(byte *)((longlong)param_1 + 0x69) = bVar2;
  return;
}



// FUNCTION 1478cd002 FUN_1478cd002 body=777 status=ok
// SIG undefined FUN_1478cd002(void)

void FUN_1478cd002(longlong param_1,longlong param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  double *pdVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  bool bVar18;
  double dVar19;
  
  uVar7 = *(uint *)(param_1 + 200);
  if ((ulonglong)uVar7 != 0) {
    uVar17 = 0;
    uVar12 = 0;
    if (1 < (int)uVar7) {
      lVar9 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        lVar9 = param_1;
      }
      pdVar10 = (double *)(lVar9 + 0x20);
      uVar12 = 0;
      uVar13 = 1;
      uVar17 = 0;
      do {
        dVar2 = pdVar10[-1];
        dVar3 = *(double *)(lVar9 + (longlong)(int)uVar17 * 0x18);
        if ((dVar2 < dVar3) ||
           ((dVar2 <= dVar3 &&
            (dVar3 = *(double *)(lVar9 + (longlong)(int)uVar17 * 0x18 + 8),
            *pdVar10 <= dVar3 && dVar3 != *pdVar10)))) {
          uVar17 = (uint)uVar13;
        }
        dVar3 = *(double *)(lVar9 + (longlong)(int)uVar12 * 0x18);
        if ((dVar3 < dVar2) ||
           ((dVar3 <= dVar2 &&
            (pdVar1 = (double *)(lVar9 + (longlong)(int)uVar12 * 0x18 + 8),
            *pdVar1 <= *pdVar10 && *pdVar10 != *pdVar1)))) {
          uVar12 = (uint)uVar13;
        }
        uVar13 = uVar13 + 1;
        pdVar10 = pdVar10 + 3;
      } while (uVar7 != uVar13);
    }
    iVar11 = *(int *)(param_2 + 0x28);
    *(uint *)(param_2 + 0x28) = iVar11 + 1U;
    if (*(uint *)(param_2 + 0x2c) < iVar11 + 1U) {
      FUN_1400cc390(param_2,iVar11);
    }
    lVar9 = *(longlong *)(param_2 + 0x20);
    if (*(longlong *)(param_2 + 0x20) == 0) {
      lVar9 = param_2;
    }
    *(uint *)(lVar9 + (longlong)iVar11 * 4) = uVar17;
    if (uVar17 != uVar12) {
      iVar11 = *(int *)(param_2 + 0x28);
      uVar7 = *(uint *)(param_1 + 200);
      if (iVar11 <= (int)uVar7) {
        bVar18 = true;
        uVar13 = (ulonglong)uVar12;
        uVar8 = uVar17;
        do {
          uVar15 = (uint)uVar13;
          if (0 < (int)uVar7) {
            lVar9 = *(longlong *)(param_1 + 0xc0);
            if (*(longlong *)(param_1 + 0xc0) == 0) {
              lVar9 = param_1;
            }
            pdVar1 = (double *)(lVar9 + (longlong)(int)uVar8 * 0x18);
            pdVar10 = (double *)(lVar9 + 8);
            uVar14 = 0;
            uVar16 = uVar13;
            do {
              if ((uVar8 != uVar14) && (uVar14 != uVar16)) {
                dVar2 = *(double *)(lVar9 + (longlong)(int)uVar16 * 0x18);
                dVar3 = *(double *)(lVar9 + 8 + (longlong)(int)uVar16 * 0x18);
                dVar19 = *pdVar1;
                dVar4 = pdVar1[1];
                dVar5 = pdVar10[-1];
                dVar6 = *pdVar10;
                dVar19 = (dVar6 - dVar4) * (dVar2 - dVar19) - (dVar5 - dVar19) * (dVar3 - dVar4);
                if (dVar19 < -0.001) goto LAB_1478cd268;
                if (dVar19 < 0.001) {
                  if (bVar18) {
                    if ((dVar2 < dVar5) || ((dVar2 <= dVar5 && (dVar3 < dVar6)))) {
LAB_1478cd268:
                      uVar16 = uVar14 & 0xffffffff;
                    }
                  }
                  else if ((dVar5 < dVar2) || ((dVar5 <= dVar2 && (dVar6 < dVar3))))
                  goto LAB_1478cd268;
                }
              }
              uVar15 = (uint)uVar16;
              uVar14 = uVar14 + 1;
              pdVar10 = pdVar10 + 3;
            } while (uVar7 != uVar14);
          }
          if (uVar15 == uVar12) {
            uVar13 = (ulonglong)uVar17;
          }
          if (uVar15 == uVar17) {
            return;
          }
          *(uint *)(param_2 + 0x28) = iVar11 + 1U;
          if (*(uint *)(param_2 + 0x2c) < iVar11 + 1U) {
            FUN_1400cc390(param_2,iVar11);
          }
          bVar18 = (bool)(bVar18 & uVar15 != uVar12);
          lVar9 = *(longlong *)(param_2 + 0x20);
          if (*(longlong *)(param_2 + 0x20) == 0) {
            lVar9 = param_2;
          }
          *(uint *)(lVar9 + (longlong)iVar11 * 4) = uVar15;
          iVar11 = *(int *)(param_2 + 0x28);
          uVar7 = *(uint *)(param_1 + 200);
          uVar8 = uVar15;
        } while (iVar11 <= (int)uVar7);
      }
      *(undefined4 *)(param_2 + 0x28) = 0;
      if (*(int *)(param_2 + 0x2c) < 0) {
        FUN_1456cbaf4(param_2,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1478cd30c FUN_1478cd30c body=178 status=ok
// SIG undefined FUN_1478cd30c(void)

void FUN_1478cd30c(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_1478cd3be(param_1 + 2);
  uVar4 = param_1[0x28] & 0xfffffffd;
  param_1[0x28] = uVar4;
  if (0 < (int)param_1[4]) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 2);
      bVar3 = FUN_1478cb332(lVar2 + lVar6);
      uVar1 = param_1[0x28];
      uVar4 = (uVar1 & 0xfffffffd) + (uint)(byte)((byte)((uVar1 & 2) >> 1) | bVar3) * 2;
      param_1[0x28] = uVar4;
      uVar4 = uVar4 & 0xfffffffe | (byte)((byte)uVar1 | 0.0 < *(float *)(lVar2 + 4 + lVar6)) & 1;
      param_1[0x28] = uVar4;
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x70;
    } while (lVar5 < (int)param_1[4]);
  }
  *param_1 = *param_1 & 0xfffffffe | (uint)((uVar4 & 6) != 0);
  return;
}



// FUNCTION 1478cd3be FUN_1478cd3be body=79 status=ok
// SIG undefined FUN_1478cd3be(void)

undefined8 * FUN_1478cd3be(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1478d8dfc(param_1,iVar1);
      FUN_1478d8e6b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1478cd40e FUN_1478cd40e body=194 status=ok
// SIG undefined FUN_1478cd40e(void)

void FUN_1478cd40e(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_1478cd4d0(param_1 + 6);
  uVar4 = param_1[0x28] & 0xfffffffb;
  param_1[0x28] = uVar4;
  if (0 < (int)param_1[8]) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 6);
      *(undefined8 *)(lVar2 + 0x10 + lVar6) = *(undefined8 *)(param_1 + 0x26);
      bVar3 = FUN_1478cb332(lVar2 + lVar6);
      uVar1 = param_1[0x28];
      uVar4 = (uVar1 & 0xfffffffb) + (uint)(byte)((byte)((uVar1 & 4) >> 2) | bVar3) * 4;
      param_1[0x28] = uVar4;
      uVar4 = uVar4 & 0xfffffffe | (byte)((byte)uVar1 | 0.0 < *(float *)(lVar2 + 4 + lVar6)) & 1;
      param_1[0x28] = uVar4;
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0xa0;
    } while (lVar5 < (int)param_1[8]);
  }
  *param_1 = *param_1 & 0xfffffffe | (uint)((uVar4 & 6) != 0);
  return;
}



// FUNCTION 1478cd4d0 FUN_1478cd4d0 body=79 status=ok
// SIG undefined FUN_1478cd4d0(void)

undefined8 * FUN_1478cd4d0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1478d8f0e(param_1,iVar1);
      FUN_1478d8f81(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1478cd520 FUN_1478cd520 body=91 status=ok
// SIG undefined FUN_1478cd520(void)

void FUN_1478cd520(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_145be6626(param_1,iVar2);
  }
  FUN_1478d8e6b((longlong)iVar2 * 0x70 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1478cd57c FUN_1478cd57c body=95 status=ok
// SIG undefined FUN_1478cd57c(void)

void FUN_1478cd57c(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_1478dcef0(param_1,iVar2);
  }
  FUN_1478d8f81((longlong)iVar2 * 0xa0 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1478cd5dc FUN_1478cd5dc body=77 status=ok
// SIG undefined FUN_1478cd5dc(void)

void FUN_1478cd5dc(longlong param_1)

{
  if (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x20)) {
    FUN_1478dcf84(param_1 + 0x18);
  }
  if (*(int *)(param_1 + 0x34) != *(int *)(param_1 + 0x30)) {
    FUN_1478dcff2(param_1 + 0x28);
  }
  if (*(int *)(param_1 + 0x44) == *(int *)(param_1 + 0x40)) {
    return;
  }
  FUN_1478dd062(param_1 + 0x38);
  return;
}



// FUNCTION 1478cd62a FUN_1478cd62a body=132 status=ok
// SIG undefined FUN_1478cd62a(void)

void FUN_1478cd62a(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[8];
  param_1[8] = uVar1 + 1;
  if (param_1[9] < uVar1 + 1) {
    FUN_1478d9026(param_1 + 6,uVar1);
  }
  FUN_1478d8c3a((longlong)(int)uVar1 * 0x70 + *(longlong *)(param_1 + 6),param_2);
  *param_1 = *param_1 | *param_2 & 1;
  uVar2 = param_1[0x12];
  uVar1 = (uVar2 & 0xfffffffd) +
          (uint)(byte)((byte)((uVar2 & 2) >> 1) | (*(byte *)((longlong)param_2 + 0x6a) & 2) >> 1) *
          2;
  param_1[0x12] = uVar1;
  param_1[0x12] =
       (uVar1 & 0xfffffffb) +
       (uint)(byte)((byte)((uVar2 & 4) >> 2) | (*(byte *)((longlong)param_2 + 0x6a) & 4) >> 2) * 4;
  return;
}



// FUNCTION 1478cd6ae FUN_1478cd6ae body=58 status=ok
// SIG undefined FUN_1478cd6ae(void)

int FUN_1478cd6ae(longlong param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x44) * 0x80 +
          *(int *)(param_1 + 0x34) * 0xb0 + *(int *)(param_1 + 0x24) * 0x70;
  if (0 < iVar3) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x28) + 0x14);
    do {
      iVar1 = iVar1 + *piVar2 * 0x70;
      piVar2 = piVar2 + 0x2c;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}



// FUNCTION 1478cd6e8 FUN_1478cd6e8 body=55 status=ok
// SIG undefined FUN_1478cd6e8(void)

void FUN_1478cd6e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14caca568 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caca568 = FUN_14171c317(FUN_1463a01d8,uVar1,L"ENavPathEvent");
  }
  return;
}



// FUNCTION 1478cd74c FUN_1478cd74c body=149 status=ok
// SIG undefined FUN_1478cd74c(void)

longlong FUN_1478cd74c(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  FUN_1478cd7e2();
  uVar6 = *(undefined8 *)(param_2 + 0x40);
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  uVar3 = *(undefined4 *)(param_2 + 0x4c);
  uVar4 = *(undefined4 *)(param_2 + 0x50);
  uVar5 = *(undefined4 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  *(undefined4 *)(param_1 + 0x50) = uVar4;
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  uVar2 = *(undefined4 *)(param_2 + 0x6c);
  uVar3 = *(undefined4 *)(param_2 + 0x70);
  uVar4 = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  *(undefined4 *)(param_1 + 0x74) = uVar4;
  *(undefined8 *)(param_1 + 0x78) = 0;
  iVar1 = *(int *)(param_2 + 0x80);
  _Src = *(void **)(param_2 + 0x78);
  *(int *)(param_1 + 0x80) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0x78),iVar1,0);
    memcpy(*(void **)(param_1 + 0x78),_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1478cd7e2 FUN_1478cd7e2 body=112 status=ok
// SIG undefined FUN_1478cd7e2(void)

undefined1 * FUN_1478cd7e2(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar5 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0xc) = uVar5;
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = 0;
  iVar1 = *(int *)(param_2 + 0x30);
  _Src = *(void **)(param_2 + 0x28);
  *(int *)(param_1 + 0x30) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x28,iVar1,0);
    memcpy(*(void **)(param_1 + 0x28),_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1478cd852 FUN_1478cd852 body=111 status=ok
// SIG undefined FUN_1478cd852(void)

undefined1 * FUN_1478cd852(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar5 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0xc) = uVar5;
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  FUN_144a787a6(param_1 + 0x28,param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  uVar2 = *(undefined4 *)(param_2 + 0x4c);
  uVar3 = *(undefined4 *)(param_2 + 0x50);
  uVar4 = *(undefined4 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  uVar2 = *(undefined4 *)(param_2 + 0x70);
  uVar3 = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  FUN_144a787a6(param_1 + 0x78,param_2 + 0x78);
  return param_1;
}



// FUNCTION 1478cd8c2 FUN_1478cd8c2 body=327 status=ok
// SIG undefined FUN_1478cd8c2(void)

void FUN_1478cd8c2(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(int *)(param_1 + 0x84) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x78),0);
    }
    puVar2 = *(undefined2 **)(param_1 + 0x78);
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48);
    *(undefined4 *)(param_1 + 0x68) = local_48;
    *(undefined4 *)(param_1 + 0x6c) = uStack_44;
    *(undefined4 *)(param_1 + 0x70) = uStack_40;
    *(undefined4 *)(param_1 + 0x74) = uStack_3c;
    if ((undefined4 *)(param_1 + 0x68) == &local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x78) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x78) = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x80) = local_30;
      *(undefined4 *)(param_1 + 0x84) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(param_2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) != 0) {
        *(undefined8 *)(param_1 + 0x60) = 0;
        goto LAB_1478cd9e9;
      }
    }
    FUN_14485c47a((undefined8 *)(param_1 + 0x60),param_2);
  }
LAB_1478cd9e9:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478cda0a FUN_1478cda0a body=267 status=ok
// SIG undefined FUN_1478cda0a(void)

undefined8 FUN_1478cda0a(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(float *)(param_1 + 4) < 0.0) {
    return 0;
  }
  if (*(float *)(param_1 + 8) < 0.0) {
    return 0;
  }
  lVar4 = param_1 + 0x60;
  lVar3 = FUN_14479d2ce(lVar4);
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 0x68) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(lVar4,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(lVar4,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_144a797b2();
  if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) && (lVar4 = FUN_144a6c4d8(), lVar4 != 0)) &&
     (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) {
    return CONCAT71((int7)((ulonglong)(lVar4 + 0x30) >> 8),
                    *(longlong *)
                     (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
                    lVar4 + 0x30);
  }
  return 0;
}



// FUNCTION 1478cdb16 FUN_1478cdb16 body=94 status=ok
// SIG undefined FUN_1478cdb16(void)

void FUN_1478cdb16(byte *param_1)

{
  undefined2 *puVar1;
  
  *param_1 = *param_1 & 0xe0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x80;
  param_1[7] = 0xbf;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x80;
  param_1[0xb] = 0xbf;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x80;
  param_1[0xf] = 0xbf;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x3f;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  if (*(int *)(param_1 + 0x84) < 0) {
    FUN_1446f8c06(param_1 + 0x78,0);
  }
  puVar1 = *(undefined2 **)(param_1 + 0x78);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  return;
}



// FUNCTION 1478cdb74 FUN_1478cdb74 body=62 status=ok
// SIG undefined FUN_1478cdb74(void)

void FUN_1478cdb74(longlong param_1)

{
  if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
    FUN_144893a1c(param_1 + 0x10);
  }
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x28)) {
    FUN_144893a1c(param_1 + 0x20);
  }
  FUN_1478cd5dc(param_1 + 0x88);
  return;
}



// FUNCTION 1478cdbb2 FUN_1478cdbb2 body=360 status=ok
// SIG undefined FUN_1478cdbb2(void)

longlong * FUN_1478cdbb2(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined4 *)(puVar4 + 4) = 0x800;
  *param_2 = (longlong)puVar4;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a79d2f0;
  plVar5[2] = (longlong)puVar4;
  param_2[1] = (longlong)plVar5;
  if (puVar4 != (undefined8 *)0x0) {
    if (plVar5 == (longlong *)0x0) {
      *puVar4 = puVar4;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *puVar4 = puVar4;
      if ((longlong *)puVar4[1] != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)puVar4[1];
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))();
          }
        }
        puVar4[1] = plVar5;
      }
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
  lVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))();
  lVar3 = *param_2;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14a79bf90;
  plVar7[2] = lVar6;
  *(longlong *)(lVar3 + 0x10) = lVar6;
  plVar5 = *(longlong **)(lVar3 + 0x18);
  if (plVar7 == plVar5) {
    if (plVar7 == (longlong *)0x0) goto LAB_1478cdd00;
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1478cdd00;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar5 = plVar7;
  }
  else {
    *(longlong **)(lVar3 + 0x18) = plVar7;
    if (plVar5 == (longlong *)0x0) goto LAB_1478cdd00;
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_1478cdd00;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_1478cdd00:
  *(undefined4 *)(*param_2 + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return param_2;
}



// FUNCTION 1478cdd1a FUN_1478cdd1a body=14 status=ok
// SIG undefined FUN_1478cdd1a(void)

void FUN_1478cdd1a(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001478cdd25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
  return;
}



// FUNCTION 1478cdd28 FUN_1478cdd28 body=14 status=ok
// SIG undefined FUN_1478cdd28(void)

void FUN_1478cdd28(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001478cdd33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
  return;
}



// FUNCTION 1478cdd36 FUN_1478cdd36 body=14 status=ok
// SIG undefined FUN_1478cdd36(void)

void FUN_1478cdd36(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001478cdd41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))();
  return;
}



// FUNCTION 1478cdd44 FUN_1478cdd44 body=14 status=ok
// SIG undefined FUN_1478cdd44(void)

void FUN_1478cdd44(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001478cdd4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))();
  return;
}



// FUNCTION 1478cdd52 FUN_1478cdd52 body=14 status=ok
// SIG undefined FUN_1478cdd52(void)

void FUN_1478cdd52(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001478cdd5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x68))();
  return;
}



// FUNCTION 1478cdd60 FUN_1478cdd60 body=86 status=ok
// SIG undefined FUN_1478cdd60(void)

undefined8 FUN_1478cdd60(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
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
  return 1;
}



// FUNCTION 1478cddb6 FUN_1478cddb6 body=35 status=ok
// SIG undefined FUN_1478cddb6(void)

void FUN_1478cddb6(longlong param_1,undefined8 param_2)

{
  FUN_14484255c(param_2,(ulonglong)(*(int *)(param_1 + 0x2c) + 0x1fU >> 3 & 0xfffffffc) +
                        (longlong)*(int *)(param_1 + 0xc) * 2 + 0x30);
  return;
}



// FUNCTION 1478cddda FUN_1478cddda body=189 status=ok
// SIG undefined FUN_1478cddda(void)

void FUN_1478cddda(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_144a6c4d8();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1478cde21;
    }
  }
  lVar2 = 0;
LAB_1478cde21:
  FUN_1400bbfc4(&local_40,lVar2);
  *(undefined4 *)(param_1 + 0x18) = local_40;
  *(undefined4 *)(param_1 + 0x1c) = uStack_3c;
  *(undefined4 *)(param_1 + 0x20) = uStack_38;
  *(undefined4 *)(param_1 + 0x24) = uStack_34;
  if ((undefined4 *)(param_1 + 0x18) == &local_40) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x28) = local_30;
    *(undefined4 *)(param_1 + 0x30) = local_28;
    *(undefined4 *)(param_1 + 0x34) = local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478cde98 FUN_1478cde98 body=103 status=ok
// SIG undefined FUN_1478cde98(void)

longlong * FUN_1478cde98(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(undefined1 *)((longlong)param_1 + 0x24) = *(undefined1 *)((longlong)param_2 + 0x24);
  FUN_1404163bc(param_1);
  return param_1;
}



// FUNCTION 1478cdf00 FUN_1478cdf00 body=89 status=ok
// SIG undefined FUN_1478cdf00(void)

longlong * FUN_1478cdf00(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_1 + 0x24) = *(undefined1 *)((longlong)param_2 + 0xc);
  FUN_1404163bc(param_1);
  return param_1;
}



// FUNCTION 1478cdf5a FUN_1478cdf5a body=20 status=ok
// SIG undefined FUN_1478cdf5a(void)

undefined8 * FUN_1478cdf5a(undefined8 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 1478cdf6e FUN_1478cdf6e body=258 status=ok
// SIG undefined FUN_1478cdf6e(void)

void FUN_1478cdf6e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x390) != 0) {
    FUN_1479b9adc(*(longlong *)(param_1 + 0x390),local_1c,local_20,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ce072 FUN_1478ce072 body=267 status=ok
// SIG undefined FUN_1478ce072(void)

void FUN_1478ce072(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = *(longlong **)(param_1 + 0x390);
  if (plVar1 != (longlong *)0x0) {
    local_28 = 0;
    (**(code **)(*plVar1 + 0x5d8))(plVar1,local_1c,local_20,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ce17e FUN_1478ce17e body=262 status=ok
// SIG undefined FUN_1478ce17e(void)

void FUN_1478ce17e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = *(longlong **)(param_1 + 0x390);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x5e0))(plVar1,local_1c,local_20,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ce286 FUN_1478ce286 body=156 status=ok
// SIG undefined FUN_1478ce286(void)

void FUN_1478ce286(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1478ce324(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ce324 FUN_1478ce324 body=173 status=ok
// SIG undefined FUN_1478ce324(void)

void FUN_1478ce324(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x390) != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caca67c) {
      FUN_144b3d300(&DAT_14caca67c);
      if (DAT_14caca67c == -1) {
        uVar1 = FUN_14118da1c();
        DAT_14caca678 = FUN_14054d46e(uVar1,L"NoAmbientActors");
        _Init_thread_footer(&DAT_14caca67c);
      }
    }
    if (DAT_14caca678 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001478ce391. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x390) + 0x5e8))
                (*(longlong **)(param_1 + 0x390),param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1478ce402 FUN_1478ce402 body=203 status=ok
// SIG undefined FUN_1478ce402(void)

undefined8 FUN_1478ce402(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
      ((param_1[3] == param_2[3] && (param_1[4] == param_2[4])))) &&
     ((param_2[5] == 0 && param_1[5] == 0 && ((int)param_1[7] == (int)param_2[7])))) {
    cVar1 = FUN_1405d12b4(param_1[6],param_2[6]);
    if (cVar1 != '\0') {
      cVar1 = FUN_1478ce4ce(param_1 + 8,param_2 + 8);
      if ((cVar1 != '\0') && ((int)param_1[0x13] == (int)param_2[0x13])) {
        cVar1 = FUN_1405d12b4(param_1[0x12],param_2[0x12]);
        if ((cVar1 != '\0') && ((int)param_1[0x15] == (int)param_2[0x15])) {
          uVar2 = FUN_1405d12b4(param_1[0x14],param_2[0x14]);
          return uVar2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1478ce4ce FUN_1478ce4ce body=370 status=ok
// SIG undefined FUN_1478ce4ce(void)

ulonglong FUN_1478ce4ce(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  ulonglong unaff_RBX;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) ==
      (int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) {
    local_48 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
    }
    local_60 = local_40;
    uVar1 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_70 = local_50;
    local_68 = local_48;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_78 = param_1;
    if (local_60._4_4_ < (int)local_48[3]) {
      unaff_RBX = 0;
      iVar3 = local_60._4_4_;
      local_60 = uVar1;
      do {
        lVar5 = *local_78;
        lVar4 = (longlong)iVar3 * 0x20;
        iVar3 = *(int *)(lVar5 + 8 + lVar4);
        puVar7 = &DAT_149dfb77a;
        if (iVar3 != 0) {
          puVar7 = *(undefined2 **)(lVar5 + lVar4);
        }
        uVar6 = (ulonglong)(iVar3 - 1);
        if (iVar3 == 0) {
          uVar6 = unaff_RBX;
        }
        uVar2 = FUN_144a49b4a(uVar6,puVar7);
        iVar3 = FUN_144a7df4c(param_2,uVar2,lVar5 + lVar4);
        if ((iVar3 == -1) || (lVar5 = (longlong)iVar3 * 0x20 + *param_2, lVar5 == 0))
        goto LAB_1478ce61c;
        if (*(int *)(lVar5 + 0x10) != *(int *)(*local_78 + 0x10 + (longlong)local_60._4_4_ * 0x20))
        goto LAB_1478ce61a;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_60._4_4_ < (int)local_68[3]);
    }
    local_60 = uVar1;
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
  }
  else {
LAB_1478ce61a:
    unaff_RBX = 0;
  }
LAB_1478ce61c:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return unaff_RBX & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ce642 FUN_1478ce642 body=482 status=ok
// SIG undefined FUN_1478ce642(void)

void FUN_1478ce642(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  int *piVar5;
  longlong *plVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = *param_2 + *param_1;
  param_2[1] = param_2[1] + param_1[1];
  param_2[2] = param_2[2] + param_1[2];
  param_2[3] = param_2[3] + param_1[3];
  param_2[4] = param_2[4] + param_1[4];
  local_58 = param_1 + 10;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  if ((int)param_1[0xd] != 0) {
    FUN_1449c0562(&local_60);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = param_1 + 8;
  if (iStack_4c < (int)local_58[3]) {
    do {
      lVar2 = *local_88;
      lVar4 = (longlong)iStack_6c * 0x20;
      iVar1 = *(int *)(lVar2 + 8 + lVar4);
      puVar8 = &DAT_149dfb77a;
      if (iVar1 != 0) {
        puVar8 = *(undefined2 **)(lVar2 + lVar4);
      }
      iVar7 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar7 = 0;
      }
      uVar3 = FUN_144a49b4a(iVar7,puVar8);
      piVar5 = (int *)FUN_1467d5fec(param_2 + 8,uVar3,lVar2 + lVar4);
      *piVar5 = *piVar5 + *(int *)(*local_88 + 0x10 + (longlong)iStack_6c * 0x20);
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < (int)local_78[3]);
  }
  plVar6 = (longlong *)FUN_1478ce826(param_2 + 0x16);
  if (param_1[5] != 0) {
    if (plVar6 != param_1 + 5) {
      lVar2 = *plVar6;
      *plVar6 = param_1[5];
      param_1[5] = 0;
      FUN_14585d45a(plVar6,lVar2);
    }
    FUN_1410e5bda(plVar6 + 1,param_1 + 6);
  }
  FUN_140b7fa3a(param_2 + 0x12,param_1 + 0x12);
  FUN_140b7fa3a(param_2 + 0x14,param_1 + 0x14);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ce826 FUN_1478ce826 body=63 status=ok
// SIG undefined FUN_1478ce826(void)

longlong FUN_1478ce826(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1478dd164(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_1478dd155(lVar2);
  return lVar2;
}



// FUNCTION 1478ce866 FUN_1478ce866 body=236 status=ok
// SIG undefined FUN_1478ce866(void)

void FUN_1478ce866(longlong *param_1,undefined8 *param_2,wchar_t *param_3)

{
  size_t sVar1;
  int iVar2;
  undefined1 auStack_68 [46];
  undefined2 local_3a;
  wchar_t *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_38 = (wchar_t *)CONCAT62(local_38._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_38,2);
  }
  local_38 = (wchar_t *)*param_2;
  iVar2 = 0;
  local_30 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_30 = iVar2;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_38);
  local_3a = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_3a,2);
  local_38 = param_3;
  if (param_3 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_3);
    iVar2 = (int)sVar1;
  }
  local_30 = iVar2;
  (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined4 *)(param_1 + 4) = 7;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ce954 FUN_1478ce954 body=309 status=ok
// SIG undefined FUN_1478ce954(void)

void FUN_1478ce954(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  undefined4 local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  ulonglong *local_70;
  char local_68;
  undefined1 local_60 [64];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_80 = (undefined1 *)CONCAT62(local_80._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_80,2);
  }
  local_80 = (undefined1 *)*param_2;
  iVar1 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar1 = 0;
  }
  local_78 = (undefined1 *)CONCAT44(local_78._4_4_,iVar1);
  (**(code **)(*param_1 + 0x18))(param_1);
  local_90 = (undefined1 *)CONCAT62(local_90._2_6_,0x3a);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_90,2);
  local_80 = local_60;
  local_68 = '\0';
  local_70 = &local_20;
  local_78 = local_80;
  FUN_140212e80(&local_80,L"%lld",(longlong)param_3);
  local_90 = local_80;
  local_88 = (undefined4)((ulonglong)((longlong)local_78 - (longlong)local_80) >> 1);
  FUN_145d3640c(param_1[1],&local_90);
  if (local_68 == '\x01') {
    FUN_1400020a8(local_80);
  }
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478cea8a FUN_1478cea8a body=539 status=ok
// SIG undefined FUN_1478cea8a(void)

undefined8 FUN_1478cea8a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  
  iVar1 = (int)param_1[1];
  if (iVar1 == (int)param_2[1]) {
    if (1 < iVar1) {
      lVar4 = 0;
      while( true ) {
        uVar5 = *(ushort *)(*param_1 + lVar4);
        uVar6 = (ulonglong)uVar5;
        uVar7 = *(ushort *)(*param_2 + lVar4);
        if (uVar5 != uVar7) break;
        if (uVar5 == 0) goto LAB_1478ceb06;
LAB_1478ceac9:
        lVar4 = lVar4 + 2;
      }
      if ((uVar7 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar8 = (ulonglong)uVar7;
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_1478ceac9;
      }
      if (uVar5 != uVar7) {
        return 0;
      }
    }
  }
  else if ((int)param_2[1] + iVar1 != 1) {
    return 0;
  }
LAB_1478ceb06:
  iVar1 = (int)param_1[3];
  if (iVar1 == (int)param_2[3]) {
    if (1 < iVar1) {
      lVar4 = 0;
      while( true ) {
        uVar5 = *(ushort *)(param_1[2] + lVar4);
        uVar6 = (ulonglong)uVar5;
        uVar7 = *(ushort *)(param_2[2] + lVar4);
        if (uVar5 != uVar7) break;
        if (uVar5 == 0) goto LAB_1478ceb78;
LAB_1478ceb3b:
        lVar4 = lVar4 + 2;
      }
      if ((uVar7 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar8 = (ulonglong)uVar7;
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_1478ceb3b;
      }
      if (uVar5 != uVar7) {
        return 0;
      }
    }
  }
  else if ((int)param_2[3] + iVar1 != 1) {
    return 0;
  }
LAB_1478ceb78:
  if ((int)param_1[4] == (int)param_2[4]) {
    iVar1 = (int)param_1[6];
    if (iVar1 == (int)param_2[6]) {
      if (1 < iVar1) {
        lVar4 = 0;
        while( true ) {
          uVar5 = *(ushort *)(param_1[5] + lVar4);
          uVar6 = (ulonglong)uVar5;
          uVar7 = *(ushort *)(param_2[5] + lVar4);
          if (uVar5 != uVar7) break;
          if (uVar5 == 0) goto LAB_1478cebf2;
LAB_1478cebb9:
          lVar4 = lVar4 + 2;
        }
        if ((uVar7 | uVar5) < 0x80) {
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar8 = (ulonglong)uVar7;
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_1478cebb9;
        }
        if (uVar5 != uVar7) {
          return 0;
        }
      }
    }
    else if ((int)param_2[6] + iVar1 != 1) {
      return 0;
    }
LAB_1478cebf2:
    if ((int)param_1[7] == (int)param_2[7]) {
      iVar1 = (int)param_1[9];
      if (iVar1 == (int)param_2[9]) {
        if (1 < iVar1) {
          lVar4 = 0;
          while( true ) {
            uVar5 = *(ushort *)(param_1[8] + lVar4);
            uVar6 = (ulonglong)uVar5;
            uVar7 = *(ushort *)(param_2[8] + lVar4);
            if (uVar5 != uVar7) break;
            if (uVar5 == 0) goto LAB_1478cec64;
LAB_1478cec2f:
            lVar4 = lVar4 + 2;
          }
          if ((uVar7 | uVar5) < 0x80) {
            uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
            uVar8 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
            if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_1478cec2f;
          }
          if (uVar5 != uVar7) {
            return 0;
          }
        }
      }
      else if ((int)param_2[9] + iVar1 != 1) {
        return 0;
      }
LAB_1478cec64:
      if ((((int)param_1[0xb] == (int)param_2[0xb]) &&
          (cVar2 = FUN_1478dd294(param_1[10],param_2[10]), cVar2 != '\0')) &&
         ((int)param_1[0xe] == (int)param_2[0xe])) {
        uVar3 = FUN_1478dd2c1(param_1[0xd],param_2[0xd]);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 1478ceca6 FUN_1478ceca6 body=1729 status=ok
// SIG undefined FUN_1478ceca6(void)

void FUN_1478ceca6(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  double *pdVar2;
  uint uVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *plVar6;
  void **ppvVar7;
  longlong *plVar8;
  longlong *plVar9;
  int *piVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong *plVar24;
  longlong lVar25;
  bool bVar26;
  float fVar27;
  undefined1 auStack_388 [32];
  longlong *local_368;
  undefined8 *local_360;
  void *local_358;
  ulonglong local_350;
  void *local_348;
  int local_340;
  undefined4 local_33c;
  undefined4 local_338;
  void *local_330;
  int local_328;
  undefined4 local_324;
  undefined4 local_320;
  void *local_318;
  int local_310;
  undefined4 local_30c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (*(int *)(param_2 + 0x20) < *(int *)(param_1 + 4)) {
    *(int *)(param_2 + 0x20) = *(int *)(param_1 + 4);
    iVar17 = *(int *)(param_1 + 6) + -1;
    if (*(int *)(param_1 + 6) == 0) {
      iVar17 = 0;
    }
    FUN_1402980a2(param_2 + 0x28,param_1[5],iVar17);
  }
  if (*(int *)(param_2 + 0x38) < *(int *)(param_1 + 7)) {
    *(int *)(param_2 + 0x38) = *(int *)(param_1 + 7);
    iVar17 = *(int *)(param_1 + 9) + -1;
    if (*(int *)(param_1 + 9) == 0) {
      iVar17 = 0;
    }
    FUN_1402980a2(param_2 + 0x40,param_1[8],iVar17);
  }
  plVar12 = (longlong *)(param_2 + 0x50);
  FUN_1478cf368(plVar12);
  iVar17 = *(int *)(param_2 + 0x58);
  if (1 < (longlong)iVar17) {
    pvVar4 = (void *)*plVar12;
    local_368 = plVar12;
    local_360 = param_1;
    memset(&local_348,0,0x2f0);
    local_350 = (longlong)pvVar4 + (longlong)iVar17 * 0x10 + -0x10;
    local_358 = pvVar4;
    fVar27 = logf((float)iVar17);
    local_348 = (void *)CONCAT44(local_348._4_4_,(int)(longlong)(fVar27 + fVar27));
    ppvVar7 = &local_358;
    do {
      plVar9 = *ppvVar7;
      plVar11 = ppvVar7[1];
      iVar17 = *(int *)(ppvVar7 + 2);
      iVar13 = (int)((ulonglong)((longlong)plVar11 - (longlong)plVar9) >> 4);
      uVar14 = (ulonglong)(iVar13 + 1);
      plVar12 = plVar11;
      plVar20 = plVar9;
      if (iVar17 != 0) {
LAB_1478cedba:
        if (8 < (int)(uint)uVar14) {
          uVar14 = (ulonglong)((uint)uVar14 >> 1);
          lVar25 = plVar9[uVar14 * 2];
          lVar23 = (plVar9 + uVar14 * 2)[1];
          lVar5 = plVar9[1];
          plVar9[uVar14 * 2] = *plVar9;
          (plVar9 + uVar14 * 2)[1] = lVar5;
          *plVar9 = lVar25;
          plVar9[1] = lVar23;
          plVar21 = plVar12 + 2;
          plVar8 = plVar9;
          do {
            plVar6 = plVar8 + 2;
            plVar16 = plVar8 + 2;
            do {
              plVar8 = plVar16;
              plVar22 = plVar6;
              if (plVar12 < plVar8) break;
              plVar6 = plVar22 + 2;
              plVar16 = plVar8 + 2;
            } while (*(double *)(*plVar9 + 0x10) < *(double *)(*plVar8 + 0x10) ||
                     *(double *)(*plVar9 + 0x10) == *(double *)(*plVar8 + 0x10));
            plVar6 = plVar21 + -4;
            do {
              plVar16 = plVar21;
              plVar24 = plVar6;
              plVar21 = plVar16 + -2;
              if (plVar21 <= plVar9) break;
              plVar6 = plVar24 + -2;
            } while (*(double *)(*plVar21 + 0x10) < *(double *)(*plVar9 + 0x10) ||
                     *(double *)(*plVar21 + 0x10) == *(double *)(*plVar9 + 0x10));
            if (plVar21 < plVar8) goto LAB_1478cee80;
            lVar25 = *plVar8;
            lVar23 = plVar8[1];
            lVar5 = plVar16[-1];
            *plVar8 = *plVar21;
            plVar8[1] = lVar5;
            *plVar21 = lVar25;
            plVar16[-1] = lVar23;
          } while( true );
        }
        if (plVar9 < plVar12) {
          do {
            plVar11 = plVar9;
            if (plVar9 + 2 <= plVar12) {
              plVar20 = plVar9 + 2;
              lVar25 = *plVar9;
              plVar21 = plVar9;
              do {
                pdVar2 = (double *)(*plVar20 + 0x10);
                plVar11 = plVar20;
                lVar23 = *plVar20;
                if (*(double *)(lVar25 + 0x10) < *pdVar2 || *(double *)(lVar25 + 0x10) == *pdVar2) {
                  plVar11 = plVar21;
                  lVar23 = lVar25;
                }
                plVar20 = plVar20 + 2;
                lVar25 = lVar23;
                plVar21 = plVar11;
              } while (plVar20 <= plVar12);
            }
            local_58 = *plVar11;
            uStack_50 = plVar11[1];
            lVar23 = local_58;
            lVar5 = uStack_50;
            lVar25 = plVar12[1];
            *plVar11 = *plVar12;
            plVar11[1] = lVar25;
            local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
            *(undefined4 *)plVar12 = (undefined4)local_58;
            *(undefined4 *)((longlong)plVar12 + 4) = local_58._4_4_;
            *(undefined4 *)(plVar12 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)plVar12 + 0xc) = uStack_50._4_4_;
            plVar12 = plVar12 + -2;
            local_58 = lVar23;
            uStack_50 = lVar5;
          } while (plVar9 < plVar12);
        }
        goto LAB_1478cf18a;
      }
LAB_1478cef2a:
      iVar17 = (int)uVar14;
      if (iVar17 != 0) {
        iVar13 = (iVar13 - (iVar13 + -1 >> 0x1f)) + -1 >> 1;
        iVar19 = iVar13;
joined_r0x0001478cef51:
        do {
          iVar15 = iVar13 * 2 + 1;
          if (iVar15 < iVar17) {
            iVar18 = iVar13 * 2 + 2;
            if ((iVar18 < iVar17) &&
               (*(double *)(plVar9[(longlong)iVar18 * 2] + 0x10) <
                *(double *)(plVar9[(longlong)iVar15 * 2] + 0x10) ||
                *(double *)(plVar9[(longlong)iVar18 * 2] + 0x10) ==
                *(double *)(plVar9[(longlong)iVar15 * 2] + 0x10))) {
              iVar15 = iVar18;
            }
            if (*(double *)(plVar9[(longlong)iVar15 * 2] + 0x10) <=
                *(double *)(plVar9[(longlong)iVar13 * 2] + 0x10) &&
                *(double *)(plVar9[(longlong)iVar13 * 2] + 0x10) !=
                *(double *)(plVar9[(longlong)iVar15 * 2] + 0x10)) {
              plVar12 = plVar9 + (longlong)iVar13 * 2;
              plVar11 = plVar9 + (longlong)iVar15 * 2;
              local_58 = *plVar12;
              uStack_50 = plVar12[1];
              lVar23 = local_58;
              lVar5 = uStack_50;
              lVar25 = plVar11[1];
              *plVar12 = *plVar11;
              plVar12[1] = lVar25;
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
              *(undefined4 *)plVar11 = (undefined4)local_58;
              *(undefined4 *)((longlong)plVar11 + 4) = local_58._4_4_;
              *(undefined4 *)(plVar11 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)plVar11 + 0xc) = uStack_50._4_4_;
              iVar13 = iVar15;
              local_58 = lVar23;
              uStack_50 = lVar5;
              goto joined_r0x0001478cef51;
            }
          }
          bVar26 = iVar19 != 0;
          iVar13 = iVar19 + -1;
          iVar19 = iVar13;
        } while (bVar26);
        if (1 < iVar17) {
          uVar14 = uVar14 - 1;
          local_58 = *plVar9;
          uStack_50 = plVar9[1];
          lVar23 = local_58;
          lVar5 = uStack_50;
          lVar25 = (plVar9 + uVar14 * 2)[1];
          *plVar9 = plVar9[uVar14 * 2];
          plVar9[1] = lVar25;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          plVar12 = plVar9 + uVar14 * 2;
          *(undefined4 *)plVar12 = (undefined4)local_58;
          *(undefined4 *)((longlong)plVar12 + 4) = local_58._4_4_;
          *(undefined4 *)(plVar12 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)plVar12 + 0xc) = uStack_50._4_4_;
          local_58 = lVar23;
          uStack_50 = lVar5;
          if (iVar17 != 2) {
            do {
              iVar17 = 0;
              iVar19 = 1;
              iVar13 = 0;
              do {
                iVar17 = iVar17 + 2;
                iVar15 = iVar19;
                if (((longlong)iVar17 < (longlong)uVar14) &&
                   (*(double *)(plVar9[(longlong)iVar17 * 2] + 0x10) <
                    *(double *)(plVar9[(longlong)iVar19 * 2] + 0x10) ||
                    *(double *)(plVar9[(longlong)iVar17 * 2] + 0x10) ==
                    *(double *)(plVar9[(longlong)iVar19 * 2] + 0x10))) {
                  iVar15 = iVar17;
                }
                if (*(double *)(plVar9[(longlong)iVar13 * 2] + 0x10) <
                    *(double *)(plVar9[(longlong)iVar15 * 2] + 0x10) ||
                    *(double *)(plVar9[(longlong)iVar13 * 2] + 0x10) ==
                    *(double *)(plVar9[(longlong)iVar15 * 2] + 0x10)) break;
                plVar12 = plVar9 + (longlong)iVar13 * 2;
                plVar11 = plVar9 + (longlong)iVar15 * 2;
                lVar25 = *plVar12;
                lVar23 = plVar12[1];
                lVar5 = plVar11[1];
                *plVar12 = *plVar11;
                plVar12[1] = lVar5;
                *plVar11 = lVar25;
                plVar11[1] = lVar23;
                iVar17 = iVar15 * 2;
                iVar19 = iVar15 * 2 + 1;
                iVar13 = iVar15;
              } while ((longlong)iVar19 < (longlong)uVar14);
              uVar1 = uVar14 - 1;
              local_58 = *plVar9;
              uStack_50 = plVar9[1];
              lVar23 = local_58;
              lVar5 = uStack_50;
              lVar25 = (plVar9 + uVar1 * 2)[1];
              *plVar9 = plVar9[uVar1 * 2];
              plVar9[1] = lVar25;
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
              plVar12 = plVar9 + uVar1 * 2;
              *(undefined4 *)plVar12 = (undefined4)local_58;
              *(undefined4 *)((longlong)plVar12 + 4) = local_58._4_4_;
              *(undefined4 *)(plVar12 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)plVar12 + 0xc) = uStack_50._4_4_;
              bVar26 = 2 < uVar14;
              uVar14 = uVar1;
              local_58 = lVar23;
              uStack_50 = lVar5;
            } while (bVar26);
          }
        }
      }
LAB_1478cf18a:
      ppvVar7 = ppvVar7 + -3;
    } while (&local_358 <= ppvVar7);
    iVar17 = *(int *)(param_2 + 0x58);
    plVar12 = local_368;
    param_1 = local_360;
  }
  if (*(int *)(param_2 + 0x60) < iVar17) {
    FUN_1478cf3c6(plVar12);
  }
  if (*(int *)(param_1 + 7) != 0) {
    uVar3 = *(uint *)(param_2 + 0x70);
    uVar14 = 0;
    if (0 < (int)uVar3) {
      piVar10 = (int *)(*(longlong *)(param_2 + 0x68) + 0x38);
      uVar14 = 0;
      do {
        if (*piVar10 < *(int *)(param_1 + 7)) goto LAB_1478cf214;
        uVar14 = uVar14 + 1;
        piVar10 = piVar10 + 0x14;
      } while (uVar3 != uVar14);
      uVar14 = (ulonglong)uVar3;
    }
LAB_1478cf214:
    local_358 = (void *)0x0;
    uVar3 = *(uint *)(param_1 + 1);
    pvVar4 = (void *)*param_1;
    local_350 = CONCAT44(local_350._4_4_,uVar3);
    if ((longlong)(int)uVar3 == 0) {
      local_350 = (ulonglong)uVar3;
    }
    else {
      FUN_1446dd670(&local_358,uVar3,0);
      memcpy(local_358,pvVar4,(longlong)(int)uVar3 * 2);
    }
    local_348 = (void *)0x0;
    local_340 = *(int *)(param_1 + 3);
    lVar25 = (longlong)local_340;
    pvVar4 = (void *)param_1[2];
    if (lVar25 == 0) {
      local_33c = 0;
    }
    else {
      FUN_1446dd670(&local_348,local_340,0);
      memcpy(local_348,pvVar4,lVar25 * 2);
    }
    local_338 = *(undefined4 *)(param_1 + 4);
    local_330 = (void *)0x0;
    local_328 = *(int *)(param_1 + 6);
    lVar25 = (longlong)local_328;
    pvVar4 = (void *)param_1[5];
    if (lVar25 == 0) {
      local_324 = 0;
    }
    else {
      FUN_1446dd670(&local_330,local_328,0);
      memcpy(local_330,pvVar4,lVar25 * 2);
    }
    local_320 = *(undefined4 *)(param_1 + 7);
    local_318 = (void *)0x0;
    local_310 = *(int *)(param_1 + 9);
    lVar25 = (longlong)local_310;
    pvVar4 = (void *)param_1[8];
    if (lVar25 == 0) {
      local_30c = 0;
    }
    else {
      FUN_1446dd670(&local_318,local_310,0);
      memcpy(local_318,pvVar4,lVar25 * 2);
    }
    FUN_1478cf44a((longlong *)(param_2 + 0x68),&local_358,uVar14 & 0xffffffff);
    FUN_1478cf4c2(&local_358);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1478cee80:
  local_58 = *plVar9;
  uStack_50 = plVar9[1];
  lVar23 = local_58;
  lVar5 = uStack_50;
  lVar25 = plVar16[-1];
  *plVar9 = *plVar21;
  plVar9[1] = lVar25;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)plVar21 = (undefined4)local_58;
  *(undefined4 *)((longlong)plVar16 + -0xc) = local_58._4_4_;
  *(undefined4 *)(plVar16 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)plVar16 + -4) = uStack_50._4_4_;
  iVar17 = iVar17 + -1;
  plVar16 = plVar16 + -4;
  local_58 = lVar23;
  uStack_50 = lVar5;
  if ((longlong)plVar24 - (longlong)plVar20 < (longlong)plVar11 - (longlong)plVar22) {
    if (plVar8 < plVar12) {
      *ppvVar7 = plVar8;
      ppvVar7[1] = plVar12;
      *(int *)(ppvVar7 + 2) = iVar17;
      ppvVar7 = ppvVar7 + 3;
    }
    plVar22 = plVar9;
    plVar11 = plVar24;
    if (plVar21 <= plVar9 + 2) goto LAB_1478cf18a;
  }
  else {
    if (plVar9 + 2 < plVar21) {
      *ppvVar7 = plVar9;
      ppvVar7[1] = plVar16;
      *(int *)(ppvVar7 + 2) = iVar17;
      ppvVar7 = ppvVar7 + 3;
    }
    plVar9 = plVar8;
    plVar16 = plVar12;
    plVar11 = plVar12;
    if (plVar12 <= plVar8) goto LAB_1478cf18a;
  }
  iVar13 = (int)((ulonglong)((longlong)plVar11 - (longlong)plVar22) >> 4);
  uVar14 = (ulonglong)(iVar13 + 1);
  plVar12 = plVar16;
  plVar20 = plVar22;
  if (iVar17 == 0) goto LAB_1478cef2a;
  goto LAB_1478cedba;
}



// FUNCTION 1478cf368 FUN_1478cf368 body=94 status=ok
// SIG undefined FUN_1478cf368(void)

void FUN_1478cf368(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_1478dd510(param_1,iVar2);
  }
  FUN_1478dd4e7((longlong)iVar2 * 0x10 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1478cf3c6 FUN_1478cf3c6 body=130 status=ok
// SIG undefined FUN_1478cf3c6(void)

void FUN_1478cf3c6(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1478dd510(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1478dd596(param_1,param_2,iVar1 - param_2);
    FUN_1478dd5f0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1478cf44a FUN_1478cf44a body=119 status=ok
// SIG undefined FUN_1478cf44a(void)

int FUN_1478cf44a(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1478dd72e(param_1,iVar1);
  }
  lVar2 = (longlong)param_3 * 0x50;
  memmove((void *)(*param_1 + lVar2 + 0x50),(void *)(*param_1 + lVar2),
          (ulonglong)(uint)(iVar1 - param_3) * 0x50);
  FUN_1478dd68c(lVar2 + *param_1,param_2);
  return param_3;
}



// FUNCTION 1478cf4c2 FUN_1478cf4c2 body=75 status=ok
// SIG undefined FUN_1478cf4c2(void)

void FUN_1478cf4c2(longlong *param_1)

{
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478cf50e FUN_1478cf50e body=203 status=ok
// SIG undefined FUN_1478cf50e(void)

void FUN_1478cf50e(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_48 = CONCAT62(local_48._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_48,2);
  }
  local_48 = *param_2;
  local_40 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_40 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  local_32 = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_32,2);
  FUN_145928232(param_1[1],param_3);
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478cf5da FUN_1478cf5da body=310 status=ok
// SIG undefined FUN_1478cf5da(void)

void FUN_1478cf5da(longlong *param_1,undefined8 *param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  undefined4 local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  ulonglong *local_70;
  char local_68;
  undefined1 local_60 [64];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_80 = (undefined1 *)CONCAT62(local_80._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_80,2);
  }
  local_80 = (undefined1 *)*param_2;
  iVar1 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar1 = 0;
  }
  local_78 = (undefined1 *)CONCAT44(local_78._4_4_,iVar1);
  (**(code **)(*param_1 + 0x18))(param_1);
  local_90 = (undefined1 *)CONCAT62(local_90._2_6_,0x3a);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_90,2);
  local_80 = local_60;
  local_68 = '\0';
  local_70 = &local_20;
  local_78 = local_80;
  FUN_140212e80(&local_80,L"%lld",param_3);
  local_90 = local_80;
  local_88 = (undefined4)((ulonglong)((longlong)local_78 - (longlong)local_80) >> 1);
  FUN_145d3640c(param_1[1],&local_90);
  if (local_68 == '\x01') {
    FUN_1400020a8(local_80);
  }
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478cf712 FUN_1478cf712 body=3115 status=ok
// SIG undefined FUN_1478cf712(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1478cf712(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong *param_8)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  void *pvVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 uVar7;
  size_t sVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  wchar_t *_Str;
  undefined1 auStack_10d8 [32];
  undefined8 local_10b8;
  undefined4 *local_10b0;
  longlong local_10a8;
  undefined8 uStack_10a0;
  longlong local_1098;
  undefined8 uStack_1090;
  undefined4 local_1080;
  undefined4 local_107c;
  undefined8 local_1078;
  int local_1070;
  undefined4 local_106c;
  undefined4 *local_1068;
  undefined4 *local_1060;
  ulonglong *local_1058;
  char local_1050;
  undefined4 local_1048 [1024];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_10d8;
  plVar1 = *(longlong **)(param_1 + 0x18);
  local_1080 = param_2;
  local_107c = param_4;
  if (*plVar1 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cacab58) {
      FUN_144b3d300(&DAT_14cacab58);
      if (DAT_14cacab58 == -1) {
        FUN_140056680(&DAT_14cacab48,L"Core.ServerRPCDoSEscalation");
        atexit((_func_5014 *)&LAB_1433cb4fb);
        _Init_thread_footer(&DAT_14cacab58);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cacab70) {
      FUN_144b3d300(&DAT_14cacab70);
      if (DAT_14cacab70 == -1) {
        FUN_140056680(&DAT_14cacab60,L"AnalyticsSeverityIndex");
        atexit((_func_5014 *)&LAB_1433cb50c);
        _Init_thread_footer(&DAT_14cacab70);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cacab88) {
      FUN_144b3d300(&DAT_14cacab88);
      if (DAT_14cacab88 == -1) {
        FUN_140056680(&DAT_14cacab78,L"AnalyticsSeverityCategory");
        atexit((_func_5014 *)&LAB_1433cb51d);
        _Init_thread_footer(&DAT_14cacab88);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cacaba0) {
      FUN_144b3d300(&DAT_14cacaba0);
      if (DAT_14cacaba0 == -1) {
        FUN_140056680(&DAT_14cacab90,L"WorstCountPerSec");
        atexit((_func_5014 *)&LAB_1433cb52e);
        _Init_thread_footer(&DAT_14cacaba0);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cacabb8) {
      FUN_144b3d300(&DAT_14cacabb8);
      if (DAT_14cacabb8 == -1) {
        FUN_140056680(&DAT_14cacaba8,L"WorstTimePerSec");
        atexit((_func_5014 *)&LAB_1433cb53f);
        _Init_thread_footer(&DAT_14cacabb8);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cacabd0) {
      FUN_144b3d300(&DAT_14cacabd0);
      if (DAT_14cacabd0 == -1) {
        FUN_140056680(&DAT_14cacabc0,L"PlayerIP");
        atexit((_func_5014 *)&LAB_1433cb550);
        _Init_thread_footer(&DAT_14cacabd0);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cacabe8) {
      FUN_144b3d300(&DAT_14cacabe8);
      if (DAT_14cacabe8 == -1) {
        FUN_140056680(&DAT_14cacabd8,L"PlayerUID");
        atexit((_func_5014 *)&LAB_1433cb561);
        _Init_thread_footer(&DAT_14cacabe8);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cacac00) {
      FUN_144b3d300(&DAT_14cacac00);
      if (DAT_14cacac00 == -1) {
        FUN_140056680(&DAT_14cacabf0,L"GameThreadCPU");
        atexit((_func_5014 *)&LAB_1433cb572);
        _Init_thread_footer(&DAT_14cacac00);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cacac18) {
      FUN_144b3d300(&DAT_14cacac18);
      if (DAT_14cacac18 == -1) {
        FUN_140056680(&DAT_14cacac08,L"RPCGroup");
        atexit((_func_5014 *)&LAB_1433cb583);
        _Init_thread_footer(&DAT_14cacac18);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cacac30) {
      FUN_144b3d300(&DAT_14cacac30);
      if (DAT_14cacac30 == -1) {
        FUN_140056680(&DAT_14cacac20,L"RPCGroupTime");
        atexit((_func_5014 *)&LAB_1433cb594);
        _Init_thread_footer(&DAT_14cacac30);
      }
    }
    pcVar2 = *(code **)(param_1 + 0xa0);
    if (pcVar2 == (code *)0x0) {
      local_10b8 = 0;
    }
    else {
      plVar10 = (longlong *)(param_1 + 0xc0);
      if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
        plVar10 = *(longlong **)(param_1 + 0xb0);
      }
      uVar7 = (**(code **)(*plVar10 + 8))(plVar10);
      local_10b8 = (*pcVar2)(uVar7);
    }
    FUN_146834d0e(&local_1078);
    cVar3 = (char)(int)local_1078._4_4_;
    local_10a8 = CONCAT71(local_10a8._1_7_,
                          cVar3 - (char)(((ushort)(int)local_1078._4_4_ & 0xff) %
                                        (ushort)(byte)(((byte)(cVar3 - 10U) < 0x51) * '\x05' + 5)));
    local_1098 = 0;
    uStack_1090 = 0;
    FUN_146b17e4e(0,0);
    uStack_1090 = uStack_1090 & 0xffffffff00000000;
    FUN_147087202(&local_1098,7);
    uVar5 = uStack_1090;
    lVar9 = (longlong)(int)uStack_1090;
    uVar6 = (int)uStack_1090 + 1;
    uStack_1090 = CONCAT44(uStack_1090._4_4_,uVar6);
    if (uStack_1090._4_4_ < uVar6) {
      FUN_146b17dba(&local_1098,uVar5 & 0xffffffff);
    }
    lVar11 = local_1098;
    pvVar4 = DAT_14cacab60;
    local_1068 = (undefined4 *)0x0;
    lVar12 = (longlong)(int)DAT_14cacab68;
    local_1060 = (undefined4 *)CONCAT44(local_1060._4_4_,DAT_14cacab68);
    if (lVar12 == 0) {
      local_1060 = (undefined4 *)(ulonglong)DAT_14cacab68;
    }
    else {
      FUN_1446dd670(&local_1068,DAT_14cacab68,0);
      memcpy(local_1068,pvVar4,lVar12 * 2);
    }
    FUN_146b172be(lVar11 + lVar9 * 0x30,&local_1068,&local_1080);
    uVar5 = uStack_1090;
    lVar9 = (longlong)(int)uStack_1090;
    uVar6 = (int)uStack_1090 + 1;
    uStack_1090 = CONCAT44(uStack_1090._4_4_,uVar6);
    if (uStack_1090._4_4_ < uVar6) {
      FUN_146b17dba(&local_1098,uVar5 & 0xffffffff);
    }
    lVar11 = local_1098;
    pvVar4 = DAT_14cacab78;
    local_1068 = (undefined4 *)0x0;
    lVar12 = (longlong)(int)DAT_14cacab80;
    local_1060 = (undefined4 *)CONCAT44(local_1060._4_4_,DAT_14cacab80);
    if (lVar12 == 0) {
      local_1060 = (undefined4 *)(ulonglong)DAT_14cacab80;
    }
    else {
      FUN_1446dd670(&local_1068,DAT_14cacab80,0);
      memcpy(local_1068,pvVar4,lVar12 * 2);
    }
    FUN_146b280ea(lVar11 + lVar9 * 0x30,&local_1068,param_3);
    uVar5 = uStack_1090;
    lVar9 = (longlong)(int)uStack_1090;
    uVar6 = (int)uStack_1090 + 1;
    uStack_1090 = CONCAT44(uStack_1090._4_4_,uVar6);
    if (uStack_1090._4_4_ < uVar6) {
      FUN_146b17dba(&local_1098,uVar5 & 0xffffffff);
    }
    lVar11 = local_1098;
    pvVar4 = DAT_14cacab90;
    local_1068 = (undefined4 *)0x0;
    lVar12 = (longlong)(int)DAT_14cacab98;
    local_1060 = (undefined4 *)CONCAT44(local_1060._4_4_,DAT_14cacab98);
    if (lVar12 == 0) {
      local_1060 = (undefined4 *)(ulonglong)DAT_14cacab98;
    }
    else {
      FUN_1446dd670(&local_1068,DAT_14cacab98,0);
      memcpy(local_1068,pvVar4,lVar12 * 2);
    }
    FUN_146b172be(lVar11 + lVar9 * 0x30,&local_1068,&local_107c);
    uVar5 = uStack_1090;
    lVar9 = (longlong)(int)uStack_1090;
    uVar6 = (int)uStack_1090 + 1;
    uStack_1090 = CONCAT44(uStack_1090._4_4_,uVar6);
    if (uStack_1090._4_4_ < uVar6) {
      FUN_146b17dba(&local_1098,uVar5 & 0xffffffff);
    }
    lVar11 = local_1098;
    pvVar4 = DAT_14cacaba8;
    local_1068 = (undefined4 *)0x0;
    lVar12 = (longlong)(int)DAT_14cacabb0;
    local_1060 = (undefined4 *)CONCAT44(local_1060._4_4_,DAT_14cacabb0);
    if (lVar12 == 0) {
      local_1060 = (undefined4 *)(ulonglong)DAT_14cacabb0;
    }
    else {
      FUN_1446dd670(&local_1068,DAT_14cacabb0,0);
      memcpy(local_1068,pvVar4,lVar12 * 2);
    }
    FUN_146b174e6(lVar11 + lVar9 * 0x30,&local_1068,&param_5);
    uVar5 = uStack_1090;
    lVar9 = (longlong)(int)uStack_1090;
    uVar6 = (int)uStack_1090 + 1;
    uStack_1090 = CONCAT44(uStack_1090._4_4_,uVar6);
    if (uStack_1090._4_4_ < uVar6) {
      FUN_146b17dba(&local_1098,uVar5 & 0xffffffff);
    }
    lVar11 = local_1098;
    uVar7 = param_6;
    pvVar4 = DAT_14cacabc0;
    local_1068 = (undefined4 *)0x0;
    lVar12 = (longlong)(int)DAT_14cacabc8;
    local_1060 = (undefined4 *)CONCAT44(local_1060._4_4_,DAT_14cacabc8);
    if (lVar12 == 0) {
      local_1060 = (undefined4 *)(ulonglong)DAT_14cacabc8;
    }
    else {
      FUN_1446dd670(&local_1068,DAT_14cacabc8,0);
      memcpy(local_1068,pvVar4,lVar12 * 2);
    }
    FUN_146b280ea(lVar11 + lVar9 * 0x30,&local_1068,uVar7);
    uVar5 = uStack_1090;
    lVar9 = (longlong)(int)uStack_1090;
    uVar6 = (int)uStack_1090 + 1;
    uStack_1090 = CONCAT44(uStack_1090._4_4_,uVar6);
    if (uStack_1090._4_4_ < uVar6) {
      FUN_146b17dba(&local_1098,uVar5 & 0xffffffff);
    }
    lVar11 = local_1098;
    uVar7 = param_7;
    pvVar4 = DAT_14cacabd8;
    local_1068 = (undefined4 *)0x0;
    lVar12 = (longlong)(int)DAT_14cacabe0;
    local_1060 = (undefined4 *)CONCAT44(local_1060._4_4_,DAT_14cacabe0);
    if (lVar12 == 0) {
      local_1060 = (undefined4 *)(ulonglong)DAT_14cacabe0;
    }
    else {
      FUN_1446dd670(&local_1068,DAT_14cacabe0,0);
      memcpy(local_1068,pvVar4,lVar12 * 2);
    }
    FUN_146b280ea(lVar11 + lVar9 * 0x30,&local_1068,uVar7);
    uVar5 = uStack_1090;
    lVar9 = (longlong)(int)uStack_1090;
    uVar6 = (int)uStack_1090 + 1;
    uStack_1090 = CONCAT44(uStack_1090._4_4_,uVar6);
    if (uStack_1090._4_4_ < uVar6) {
      FUN_146b17dba(&local_1098,uVar5 & 0xffffffff);
    }
    lVar11 = local_1098;
    plVar10 = param_8;
    pvVar4 = DAT_14cacabf0;
    local_1068 = (undefined4 *)0x0;
    lVar12 = (longlong)(int)DAT_14cacabf8;
    local_1060 = (undefined4 *)CONCAT44(local_1060._4_4_,DAT_14cacabf8);
    if (lVar12 == 0) {
      local_1060 = (undefined4 *)(ulonglong)DAT_14cacabf8;
    }
    else {
      FUN_1446dd670(&local_1068,DAT_14cacabf8,0);
      memcpy(local_1068,pvVar4,lVar12 * 2);
    }
    FUN_1478dd8e8(lVar11 + lVar9 * 0x30,&local_1068,&local_10a8);
    lVar9 = (longlong)(int)plVar10[1];
    if (0 < lVar9) {
      local_1068 = local_1048;
      local_1050 = '\0';
      local_1058 = &local_48;
      lVar11 = *plVar10;
      lVar9 = lVar9 << 3;
      local_1060 = local_1068;
      do {
        if (0 < (int)((ulonglong)((longlong)local_1060 - (longlong)local_1068) >> 1)) {
          if (local_1058 <= local_1060 + 1) {
            FUN_140213274(&local_1068,2);
          }
          *local_1060 = 0x20002c;
          local_1060 = local_1060 + 1;
        }
        FUN_1400021e4(lVar11,&local_1078);
        _Str = L"";
        if (local_1070 != 0) {
          _Str = local_1078;
        }
        if (_Str == (wchar_t *)0x0) {
          sVar8 = 0;
        }
        else {
          sVar8 = wcslen(_Str);
        }
        FUN_1449668a2(&local_1068,_Str,sVar8);
        if (local_1078 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        lVar11 = lVar11 + 8;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
      *(undefined2 *)local_1060 = 0;
      local_10b0 = local_1068;
      local_10a8 = 0;
      uStack_10a0 = 0;
      FUN_146b17e4e(0,0);
      uStack_10a0 = uStack_10a0 & 0xffffffff00000000;
      FUN_147087202(&local_10a8,2);
      uVar5 = uStack_10a0;
      lVar9 = (longlong)(int)uStack_10a0;
      uVar6 = (int)uStack_10a0 + 1;
      uStack_10a0 = CONCAT44(uStack_10a0._4_4_,uVar6);
      if (uStack_10a0._4_4_ < uVar6) {
        FUN_146b17dba(&local_10a8,uVar5 & 0xffffffff);
      }
      lVar11 = local_10a8;
      pvVar4 = DAT_14cacac08;
      local_1078 = (void *)0x0;
      lVar12 = (longlong)DAT_14cacac10;
      local_1070 = DAT_14cacac10;
      if (lVar12 == 0) {
        local_106c = 0;
      }
      else {
        FUN_1446dd670(&local_1078,DAT_14cacac10,0);
        memcpy(local_1078,pvVar4,lVar12 * 2);
      }
      FUN_146b24b94(lVar11 + lVar9 * 0x30,&local_1078,&local_10b0);
      uVar5 = uStack_10a0;
      lVar9 = (longlong)(int)uStack_10a0;
      uVar6 = (int)uStack_10a0 + 1;
      uStack_10a0 = CONCAT44(uStack_10a0._4_4_,uVar6);
      if (uStack_10a0._4_4_ < uVar6) {
        FUN_146b17dba(&local_10a8,uVar5 & 0xffffffff);
      }
      lVar11 = local_10a8;
      pvVar4 = DAT_14cacac20;
      local_1078 = (wchar_t *)0x0;
      lVar12 = (longlong)DAT_14cacac28;
      local_1070 = DAT_14cacac28;
      if (lVar12 == 0) {
        local_106c = 0;
      }
      else {
        FUN_1446dd670(&local_1078,DAT_14cacac28,0);
        memcpy(local_1078,pvVar4,lVar12 * 2);
      }
      FUN_146b174e6(lVar11 + lVar9 * 0x30,&local_1078,&stack0x00000048);
      FUN_1478d033e(&local_1098,&local_10a8);
      FUN_146b17e4e(local_10a8,uStack_10a0 & 0xffffffff);
      if (local_10a8 != 0) {
        FUN_1400020a8();
      }
      if (local_1050 == '\x01') {
        FUN_1400020a8(local_1068);
      }
    }
    FUN_1478dd838(&DAT_14caca968,local_10b8,&local_1098);
    plVar1 = (longlong *)*plVar1;
    (**(code **)(*plVar1 + 0x78))(plVar1,&DAT_14cacab48,&local_1098);
    FUN_146b17e4e(local_1098,uStack_1090 & 0xffffffff);
    if (local_1098 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_10d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478d033e FUN_1478d033e body=95 status=ok
// SIG undefined FUN_1478d033e(void)

void FUN_1478d033e(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_146b17dba(param_1,iVar2);
  }
  FUN_146b17f01((longlong)iVar2 * 0x30 + *param_1,*param_2,uVar1);
  return;
}


