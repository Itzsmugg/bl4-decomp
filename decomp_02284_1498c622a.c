// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1498c622a Unwind@1498c622a body=20 status=ok
// SIG undefined Unwind@1498c622a(void)

void Unwind_1498c622a(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498c6240 FUN_1498c6240 body=133 status=ok
// SIG undefined FUN_1498c6240(void)

undefined8 * FUN_1498c6240(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  iVar1 = FUN_144b747e0(*(undefined8 *)*param_1,0,"framesPerSecond",&local_28);
  if (local_28 == 0 || iVar1 == 0xf) {
    uVar2 = *param_3;
  }
  else {
    uVar2 = **(undefined8 **)(local_28 + 0x18);
  }
  *param_2 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c62c6 FUN_1498c62c6 body=125 status=ok
// SIG undefined FUN_1498c62c6(void)

int FUN_1498c62c6(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar2 = FUN_144688944();
  local_28 = 0;
  FUN_144b747e0(*(undefined8 *)*param_1,0,"dataWindow",&local_28);
  piVar1 = *(int **)(local_28 + 0x18);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return ((piVar1[3] - piVar1[1]) + 1) * iVar2 * ((piVar1[2] - *piVar1) + 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c6344 FUN_1498c6344 body=125 status=ok
// SIG undefined FUN_1498c6344(void)

bool FUN_1498c6344(undefined8 *param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  bVar2 = false;
  iVar1 = FUN_144b747e0(*(undefined8 *)*param_1,0,"tiles",&local_20);
  if (local_20 != 0 && iVar1 == 0) {
    bVar2 = (*(byte *)(*(longlong *)(local_20 + 0x18) + 8) & 0xf) == 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c63c2 FUN_1498c63c2 body=162 status=ok
// SIG undefined FUN_1498c63c2(void)

int FUN_1498c63c2(undefined8 *param_1,uint *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  iVar4 = FUN_144b747e0(*(undefined8 *)*param_1,0,"tiles",&local_20);
  iVar5 = 1;
  if (local_20 != 0 && iVar4 == 0) {
    uVar3 = param_2[1];
    if ((int)*param_2 < (int)param_2[1]) {
      uVar3 = *param_2;
    }
    if (*(byte *)(*(longlong *)(local_20 + 0x18) + 8) < 0x10) {
      iVar5 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uVar3 == 0) {
        iVar5 = 0;
      }
    }
    else {
      uVar1 = (ulonglong)((uVar3 - 1) + (uint)(uVar3 == 0)) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar5 = (int)lVar2;
    }
    iVar5 = iVar5 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 1498c6466 FUN_1498c6466 body=125 status=ok
// SIG undefined FUN_1498c6466(void)

bool FUN_1498c6466(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  iVar1 = FUN_144b747e0(*(undefined8 *)*param_1,0,"tiles",&local_20);
  if (local_20 != 0 && iVar1 == 0) {
    *param_2 = **(undefined8 **)(local_20 + 0x18);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_20 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c64e4 FUN_1498c64e4 body=8 status=ok
// SIG undefined FUN_1498c64e4(void)

bool FUN_1498c64e4(longlong *param_1)

{
  return *param_1 != 0;
}



// FUNCTION 1498c64ec FUN_1498c64ec body=138 status=ok
// SIG undefined FUN_1498c64ec(void)

void FUN_1498c64ec(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined2 *puVar2;
  longlong local_b8;
  undefined1 local_b0 [128];
  longlong local_30;
  undefined8 local_28;
  
  local_b8 = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
  }
  FUN_1498c6576(local_b0,puVar2);
  iVar1 = FUN_144b747e0(*(undefined8 *)*param_1,0,local_28,&local_b8);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0 && iVar1 == 0) {
    *param_3 = *(undefined4 *)(local_b8 + 0x18);
  }
  return;
}



// FUNCTION 1498c6576 FUN_1498c6576 body=110 status=ok
// SIG undefined FUN_1498c6576(void)

longlong FUN_1498c6576(longlong param_1,wchar_t *param_2)

{
  size_t sVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (param_2 == (wchar_t *)0x0) {
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  else {
    lVar2 = param_1;
    sVar1 = wcslen(param_2);
    FUN_1449b853c(param_1,param_2,sVar1 & 0xffffffff,1,lVar2,uVar3);
    param_1 = lVar2;
  }
  return param_1;
}



// FUNCTION 1498c65e4 Unwind@1498c65e4 body=46 status=ok
// SIG undefined Unwind@1498c65e4(void)

void Unwind_1498c65e4(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x80) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1498c6612 FUN_1498c6612 body=109 status=ok
// SIG undefined FUN_1498c6612(void)

longlong FUN_1498c6612(longlong *param_1,char *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  lVar3 = *(longlong *)(lVar2 + 8);
  cVar1 = *(char *)(lVar3 + 0x19);
  lVar6 = lVar2;
  while (cVar1 == '\0') {
    uVar4 = strcmp((char *)(lVar3 + 0x20),param_2);
    if (-1 < (int)uVar4) {
      lVar6 = lVar3;
    }
    lVar3 = *(longlong *)(lVar3 + (ulonglong)(uVar4 >> 0x1b & 0xfffffff0));
    cVar1 = *(char *)(lVar3 + 0x19);
  }
  if ((*(char *)(lVar6 + 0x19) != '\0') ||
     (iVar5 = strcmp(param_2,(char *)(lVar6 + 0x20)), iVar5 < 0)) {
    lVar6 = lVar2;
  }
  return lVar6;
}



// FUNCTION 1498c6680 FUN_1498c6680 body=148 status=ok
// SIG undefined FUN_1498c6680(void)

undefined8 FUN_1498c6680(longlong *param_1,char *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  char local_118 [255];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_148;
  strncpy(local_118,param_2,0xff);
  local_19 = 0;
  lVar1 = FUN_1498c6612(param_1,local_118);
  if (lVar1 == *param_1) {
    uVar2 = 0;
  }
  else {
    local_128 = 0;
    uVar2 = __RTDynamicCast(*(undefined8 *)(lVar1 + 0x120),0,
                            &Imf_3_2::Attribute::RTTI_Type_Descriptor,
                            &Imf_3_2::TypedAttribute<int>::RTTI_Type_Descriptor);
  }
  if ((local_18 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c6716 FUN_1498c6716 body=14 status=ok
// SIG undefined FUN_1498c6716(void)

void FUN_1498c6716(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 1498c6724 FUN_1498c6724 body=29 status=ok
// SIG undefined FUN_1498c6724(void)

undefined8 FUN_1498c6724(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498c6742 FUN_1498c6742 body=82 status=ok
// SIG undefined FUN_1498c6742(void)

void FUN_1498c6742(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,param_1[1],1,param_4,uVar1);
  return;
}



// FUNCTION 1498c6794 Unwind@1498c6794 body=20 status=ok
// SIG undefined Unwind@1498c6794(void)

void Unwind_1498c6794(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498c67aa FUN_1498c67aa body=71 status=ok
// SIG undefined FUN_1498c67aa(void)

void FUN_1498c67aa(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1498c6ca0();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_1498c6d26();
      return;
    }
  }
  return;
}



// FUNCTION 1498c67f2 FUN_1498c67f2 body=143 status=ok
// SIG undefined FUN_1498c67f2(void)

void FUN_1498c67f2(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1498c6dc2(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_1498c6e48(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_1498c6ea8(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1498c6882 FUN_1498c6882 body=1 status=ok
// SIG undefined FUN_1498c6882(void)

void FUN_1498c6882(void)

{
  return;
}



// FUNCTION 1498c6884 FUN_1498c6884 body=42 status=ok
// SIG undefined FUN_1498c6884(void)

void FUN_1498c6884(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1498c68ba FUN_1498c68ba body=58 status=ok
// SIG undefined FUN_1498c68ba(void)

undefined8 FUN_1498c68ba(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14494321d(0xe0);
  FUN_1498c6ba4(uVar1,param_1);
  return uVar1;
}



// FUNCTION 1498c68f4 Unwind@1498c68f4 body=37 status=ok
// SIG undefined Unwind@1498c68f4(void)

void Unwind_1498c68f4(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x28),0xe0);
  return;
}



// FUNCTION 1498c691a FUN_1498c691a body=71 status=ok
// SIG undefined FUN_1498c691a(void)

void * FUN_1498c691a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14494321d(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return _Dst;
}



// FUNCTION 1498c6962 Unwind@1498c6962 body=37 status=ok
// SIG undefined Unwind@1498c6962(void)

void Unwind_1498c6962(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x28),0xe0);
  return;
}



// FUNCTION 1498c6988 FUN_1498c6988 body=42 status=ok
// SIG undefined FUN_1498c6988(void)

void FUN_1498c6988(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1498c69be FUN_1498c69be body=58 status=ok
// SIG undefined FUN_1498c69be(void)

undefined8 FUN_1498c69be(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14494321d(0xe0);
  thunk_FUN_147432e9e(uVar1,param_1);
  return uVar1;
}



// FUNCTION 1498c69f8 Unwind@1498c69f8 body=37 status=ok
// SIG undefined Unwind@1498c69f8(void)

void Unwind_1498c69f8(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x28),0xe0);
  return;
}



// FUNCTION 1498c6a1e FUN_1498c6a1e body=71 status=ok
// SIG undefined FUN_1498c6a1e(void)

void * FUN_1498c6a1e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14494321d(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return _Dst;
}



// FUNCTION 1498c6a66 Unwind@1498c6a66 body=37 status=ok
// SIG undefined Unwind@1498c6a66(void)

void Unwind_1498c6a66(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1400020a8(*(undefined8 *)(param_2 + 0x28),0xe0);
  return;
}



// FUNCTION 1498c6a8c FUN_1498c6a8c body=138 status=ok
// SIG undefined FUN_1498c6a8c(void)

code * FUN_1498c6a8c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000028;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c6b16;
}



// FUNCTION 1498c6b16 FUN_1498c6b16 body=138 status=ok
// SIG undefined FUN_1498c6b16(void)

code * FUN_1498c6b16(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TextureSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1467706da;
}



// FUNCTION 1498c6ba4 FUN_1498c6ba4 body=84 status=ok
// SIG undefined FUN_1498c6ba4(void)

undefined8 FUN_1498c6ba4(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  thunk_FUN_147432e9e();
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  uVar3 = FUN_145fe00e6();
  FUN_147440c52(param_1,param_1,uVar1,uVar2,uVar3,1,param_1,uVar4);
  return param_1;
}



// FUNCTION 1498c6bf8 Unwind@1498c6bf8 body=34 status=ok
// SIG undefined Unwind@1498c6bf8(void)

void Unwind_1498c6bf8(undefined8 param_1,longlong param_2)

{
  FUN_14743b140(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1498c6c1a FUN_1498c6c1a body=132 status=ok
// SIG undefined FUN_1498c6c1a(void)

void FUN_1498c6c1a(longlong param_1,int param_2)

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



// FUNCTION 1498c6ca0 FUN_1498c6ca0 body=132 status=ok
// SIG undefined FUN_1498c6ca0(void)

void FUN_1498c6ca0(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1498c6d26 FUN_1498c6d26 body=62 status=ok
// SIG undefined FUN_1498c6d26(void)

void FUN_1498c6d26(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1498c6d64(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 1498c6d64 FUN_1498c6d64 body=93 status=ok
// SIG undefined FUN_1498c6d64(void)

ulonglong FUN_1498c6d64(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1498c6dc2 FUN_1498c6dc2 body=132 status=ok
// SIG undefined FUN_1498c6dc2(void)

void FUN_1498c6dc2(longlong param_1,int param_2)

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



// FUNCTION 1498c6e48 FUN_1498c6e48 body=95 status=ok
// SIG undefined FUN_1498c6e48(void)

void FUN_1498c6e48(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_1498c6ee6(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1498c6ea8 FUN_1498c6ea8 body=62 status=ok
// SIG undefined FUN_1498c6ea8(void)

void FUN_1498c6ea8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1498c6f12(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1498c6ee6 FUN_1498c6ee6 body=43 status=ok
// SIG undefined FUN_1498c6ee6(void)

void FUN_1498c6ee6(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1498c6f12 FUN_1498c6f12 body=93 status=ok
// SIG undefined FUN_1498c6f12(void)

ulonglong FUN_1498c6f12(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1498c6f70 FUN_1498c6f70 body=96 status=ok
// SIG undefined FUN_1498c6f70(void)

void FUN_1498c6f70(longlong param_1,int param_2)

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



// FUNCTION 1498c6fd0 FUN_1498c6fd0 body=36 status=ok
// SIG undefined FUN_1498c6fd0(void)

undefined8 FUN_1498c6fd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1498c6ff4 FUN_1498c6ff4 body=3 status=ok
// SIG undefined FUN_1498c6ff4(void)

undefined8 FUN_1498c6ff4(void)

{
  return 0;
}



// FUNCTION 1498c6ff8 FUN_1498c6ff8 body=5 status=ok
// SIG undefined FUN_1498c6ff8(void)

undefined8 FUN_1498c6ff8(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 1498c6ffe FUN_1498c6ffe body=5 status=ok
// SIG undefined FUN_1498c6ffe(void)

undefined8 FUN_1498c6ffe(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 1498c7004 FUN_1498c7004 body=8 status=ok
// SIG undefined FUN_1498c7004(void)

bool FUN_1498c7004(longlong param_1,longlong param_2)

{
  return *(longlong *)(param_1 + 0x18) == param_2;
}



// FUNCTION 1498c700c FUN_1498c700c body=3 status=ok
// SIG undefined FUN_1498c700c(void)

undefined1 FUN_1498c700c(void)

{
  return 1;
}



// FUNCTION 1498c7010 FUN_1498c7010 body=60 status=ok
// SIG undefined FUN_1498c7010(void)

void FUN_1498c7010(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FExrReaderGpuModule>,class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 1498c704c FUN_1498c704c body=111 status=ok
// SIG undefined FUN_1498c704c(void)

void FUN_1498c704c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  EnterCriticalSection(param_2);
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28,param_2 + 1);
  *puVar2 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FExrReaderGpuModule>,class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
  }
  return;
}



// FUNCTION 1498c70bc Unwind@1498c70bc body=41 status=ok
// SIG undefined Unwind@1498c70bc(void)

void Unwind_1498c70bc(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x20));
  }
  return;
}



// FUNCTION 1498c70e6 Unwind@1498c70e6 body=21 status=ok
// SIG undefined Unwind@1498c70e6(void)

void Unwind_1498c70e6(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1498c70fc FUN_1498c70fc body=21 status=ok
// SIG undefined FUN_1498c70fc(void)

undefined8 FUN_1498c70fc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498c7112 FUN_1498c7112 body=466 status=ok
// SIG undefined FUN_1498c7112(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_1498c7112(void *param_1,int param_2,int param_3,ulonglong param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  byte bVar4;
  void *pvVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  longlong lVar11;
  undefined1 in_XMM1 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar13 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80;
  *(int *)((longlong)param_1 + 0x18) = param_3 * param_2;
  uVar8 = param_3 * param_2 + 0x1f;
  if (uVar8 < 0x20) goto LAB_1498c7150;
  uVar7 = uVar8 >> 5;
  pvVar5 = param_1;
  if (uVar8 < 0xa0) {
LAB_1498c71d4:
    auVar1 = _DAT_149931e80;
    iVar2 = -((uint)param_4 & 0xff);
    uVar7 = uVar7 + (uVar7 == 0);
    lVar9 = (ulonglong)uVar7 - 1;
    auVar10._8_4_ = (int)lVar9;
    auVar10._0_8_ = lVar9;
    auVar10._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
    auVar12 = pmovsxbq(in_XMM1,0x302);
    auVar13 = pmovsxbq(in_XMM2,0x100);
    uVar6 = 0;
    auVar10 = auVar10 ^ _DAT_149931e80;
    auVar14 = pmovsxbq(in_XMM5,0x404);
    do {
      auVar15 = auVar13 ^ auVar1;
      lVar9 = auVar10._0_8_;
      lVar11 = auVar10._8_8_;
      if ((bool)(~(lVar9 < auVar15._0_8_) & 1)) {
        *(int *)((longlong)pvVar5 + uVar6) = iVar2;
      }
      if (auVar15._8_8_ <= lVar11) {
        *(int *)((longlong)pvVar5 + uVar6 + 4) = iVar2;
      }
      auVar15 = auVar12 ^ auVar1;
      if (auVar15._0_8_ <= lVar9) {
        *(int *)((longlong)pvVar5 + uVar6 + 8) = iVar2;
      }
      if (auVar15._8_8_ <= lVar11) {
        *(int *)((longlong)pvVar5 + uVar6 + 0xc) = iVar2;
      }
      lVar9 = auVar13._8_8_;
      auVar13._0_8_ = auVar13._0_8_ + auVar14._0_8_;
      auVar13._8_8_ = lVar9 + auVar14._8_8_;
      lVar9 = auVar12._8_8_;
      auVar12._0_8_ = auVar12._0_8_ + auVar14._0_8_;
      auVar12._8_8_ = lVar9 + auVar14._8_8_;
      uVar6 = uVar6 + 0x10;
    } while ((uVar7 * 4 + 0xc & 0x3ffffff0) != uVar6);
  }
  else {
    FUN_14499171c(param_1,0,uVar7,4);
    *(uint *)((longlong)param_1 + 0x1c) = uVar8 & 0xffffffe0;
    pvVar5 = *(void **)((longlong)param_1 + 0x10);
    if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
      pvVar5 = param_1;
    }
    if (uVar8 < 0x120) goto LAB_1498c71d4;
    memset(pvVar5,(int)CONCAT71((int7)((param_4 & 0xffffffff) >> 8),-(char)(param_4 & 0xffffffff)),
           (ulonglong)(uVar7 << 2));
  }
  iVar2 = *(int *)((longlong)param_1 + 0x18);
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  if (iVar2 % 0x20 != 0) {
    pvVar5 = *(void **)((longlong)param_1 + 0x10);
    if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
      pvVar5 = param_1;
    }
    bVar4 = -(char)(iVar2 % 0x20);
    *(uint *)((longlong)pvVar5 + (longlong)(iVar3 >> 5) * 4) =
         (uint)(*(int *)((longlong)pvVar5 + (longlong)(iVar3 >> 5) * 4) << (bVar4 & 0x1f)) >>
         (bVar4 & 0x1f);
  }
LAB_1498c7150:
  *(int *)((longlong)param_1 + 0x20) = param_2;
  *(int *)((longlong)param_1 + 0x24) = param_3;
  *(undefined1 (*) [16])((longlong)param_1 + 0x28) = (undefined1  [16])0x0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return param_1;
}



// FUNCTION 1498c72e4 FUN_1498c72e4 body=199 status=ok
// SIG undefined FUN_1498c72e4(void)

undefined8
FUN_1498c72e4(undefined8 param_1,int *param_2,int *param_3,byte param_4,undefined1 param_5)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  if ((*param_3 == 0) || (param_3[1] == 0)) {
    iVar2 = 1;
    iVar1 = 1;
  }
  else {
    iVar1 = 1 << (param_4 & 0x1f);
    fVar3 = (float)(*param_2 / iVar1) / (float)*param_3;
    iVar2 = -((int)ROUND(-0.5 - (fVar3 + fVar3)) >> 1);
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    fVar3 = (float)(param_2[1] / iVar1) / (float)param_3[1];
    iVar1 = -((int)ROUND(-0.5 - (fVar3 + fVar3)) >> 1);
    if (iVar1 < 2) {
      iVar1 = 1;
    }
  }
  FUN_1498c7112(param_1,iVar2,iVar1,param_5);
  return param_1;
}



// FUNCTION 1498c73ac FUN_1498c73ac body=312 status=ok
// SIG undefined FUN_1498c73ac(void)

ulonglong FUN_1498c73ac(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  
  lVar13 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar13 = param_1;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  iVar14 = iVar2 + 0x3e;
  if (-1 < iVar2 + 0x1f) {
    iVar14 = iVar2 + 0x1f;
  }
  iVar3 = *(int *)(param_2 + 0x18);
  iVar1 = iVar3 + 0x1f;
  iVar7 = iVar3;
  if (iVar3 < 0) {
    iVar7 = iVar1;
  }
  bVar4 = iVar2 < 1;
  uVar5 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
  if (iVar2 % 0x20 < 1) {
    uVar5 = 0xffffffff;
  }
  lVar15 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    lVar15 = param_2;
  }
  iVar9 = iVar3 + 0x3e;
  if (-1 < iVar1) {
    iVar9 = iVar1;
  }
  uVar6 = 0xffffffff >> (-(char)(iVar3 % 0x20) & 0x1fU);
  if (iVar3 % 0x20 < 1) {
    uVar6 = 0xffffffff;
  }
  uVar8 = CONCAT71((uint7)(uint3)((uint)iVar7 >> 8),1);
  if (!bVar4 || 0 < iVar3) {
    iVar9 = iVar9 >> 5;
    uVar10 = 0xffffffff;
    if (iVar3 - 1U < 0x20) {
      uVar10 = uVar6;
    }
    uVar11 = 0xffffffff;
    if (iVar2 - 1U < 0x20) {
      uVar11 = uVar5;
    }
    uVar16 = 0;
    do {
      uVar12 = 0;
      if (!bVar4) {
        uVar12 = uVar11 & *(uint *)(lVar13 + uVar16 * 4);
      }
      uVar11 = 0;
      if ((longlong)uVar16 < (longlong)iVar9) {
        uVar11 = uVar10 & *(uint *)(lVar15 + uVar16 * 4);
      }
      uVar12 = uVar12 & uVar11;
      uVar8 = (ulonglong)CONCAT31((int3)(uVar12 >> 8),uVar12 == uVar11);
      if (uVar12 != uVar11) {
        return uVar8;
      }
      uVar11 = 0xffffffff;
      if ((iVar14 >> 5) - 2 == uVar16) {
        uVar11 = uVar5;
      }
      uVar10 = 0xffffffff;
      if (iVar9 - 2 == uVar16) {
        uVar10 = uVar6;
      }
      uVar16 = uVar16 + 1;
      bVar4 = iVar14 >> 5 <= (int)uVar16;
    } while ((int)uVar16 < iVar9 || !bVar4);
  }
  return uVar8;
}



// FUNCTION 1498c74e4 FUN_1498c74e4 body=178 status=ok
// SIG undefined FUN_1498c74e4(void)

void FUN_1498c74e4(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 local_39;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  local_20 = 0x8000000000;
  local_48 = &local_39;
  FUN_146fdacc0(param_1,param_2,&local_38,1);
  if (&local_38 == param_1) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (local_28 == 0) {
      *param_1 = local_38;
      param_1[1] = uStack_34;
      param_1[2] = uStack_30;
      param_1[3] = uStack_2c;
    }
    if (*(longlong *)(param_1 + 4) != 0) {
      FUN_1400020a8(*(longlong *)(param_1 + 4));
    }
    *(longlong *)(param_1 + 4) = local_28;
    param_1[6] = (undefined4)local_20;
    param_1[7] = local_20._4_4_;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c7598 FUN_1498c7598 body=1151 status=ok
// SIG undefined FUN_1498c7598(void)

undefined8 * FUN_1498c7598(longlong param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  int *piVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  int *piVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  int *piVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  undefined8 *puVar19;
  longlong lVar20;
  int *piVar21;
  undefined1 auStack_d8 [40];
  undefined1 *local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined1 local_80 [16];
  undefined1 *local_70;
  int local_68;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  if (*(int *)(param_1 + 0x24) < 1) {
    *param_2 = 0;
    param_2[1] = 0;
    uVar3 = 0;
  }
  else {
    lVar13 = 0;
    lVar20 = 0;
    do {
      puVar12 = local_80;
      local_a8 = 0;
      uStack_a0 = 0;
      local_70 = (undefined1 *)0x0;
      local_64 = 0x80;
      local_68 = *(int *)(param_1 + 0x20);
      uVar15 = *(int *)(param_1 + 0x20) + 0x1f;
      if (0x1f < uVar15) {
        if (uVar15 < 0xa0) {
LAB_1498c787c:
          uVar15 = uVar15 >> 3 & 0xfffffffc;
        }
        else {
          FUN_14499171c(puVar12,0,uVar15 >> 5,4);
          local_64 = uVar15 & 0xffffffe0;
          puVar12 = local_70;
          if (local_70 == (undefined1 *)0x0) {
            puVar12 = local_80;
          }
          if (uVar15 < 0x120) goto LAB_1498c787c;
          uVar15 = (uVar15 >> 5) << 2;
        }
        memset(puVar12,0,(ulonglong)uVar15);
        iVar18 = local_68 + 0x1f;
        if (-1 < local_68) {
          iVar18 = local_68;
        }
        if (local_68 % 0x20 != 0) {
          puVar12 = local_70;
          if (local_70 == (undefined1 *)0x0) {
            puVar12 = local_80;
          }
          bVar5 = -(char)(local_68 % 0x20);
          *(uint *)(puVar12 + (longlong)(iVar18 >> 5) * 4) =
               (uint)(*(int *)(puVar12 + (longlong)(iVar18 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
      uVar3 = (ulonglong)*(uint *)(param_1 + 0x20);
      if (0 < (int)*(uint *)(param_1 + 0x20)) {
        iVar18 = (int)lVar20 + 1;
        puVar12 = &DAT_100000001 + lVar13;
        uVar16 = 0;
        do {
          uVar1 = uStack_a0;
          iVar2 = (int)uVar3 * (int)lVar20;
          iVar10 = (int)uVar16;
          iVar6 = iVar2 + iVar10;
          uVar15 = 1 << ((byte)iVar6 & 0x1f);
          lVar17 = *(longlong *)(param_1 + 0x10);
          if (*(longlong *)(param_1 + 0x10) == 0) {
            lVar17 = param_1;
          }
          iVar2 = iVar2 + iVar10 + 0x1f;
          if (-1 < iVar6) {
            iVar2 = iVar6;
          }
          uVar7 = *(uint *)(lVar17 + (longlong)(iVar2 >> 5) * 4) & uVar15;
          if (param_3 == 0) {
LAB_1498c7692:
            if (uVar7 != 0) {
              puVar8 = local_70;
              if (local_70 == (undefined1 *)0x0) {
                puVar8 = local_80;
              }
              *(uint *)(puVar8 + (uVar16 >> 5 & 0x7ffffff) * 4) =
                   *(uint *)(puVar8 + (uVar16 >> 5 & 0x7ffffff) * 4) | 1 << ((byte)uVar16 & 0x1f);
              if (uVar16 != 0) {
                uVar15 = iVar10 - 1;
                puVar8 = local_70;
                if (local_70 == (undefined1 *)0x0) {
                  puVar8 = local_80;
                }
                uVar7 = iVar10 + 0x1e;
                if (-1 < (int)uVar15) {
                  uVar7 = uVar15;
                }
                if ((*(uint *)(puVar8 + (longlong)((int)uVar7 >> 5) * 4) >> (uVar15 & 0x1f) & 1) !=
                    0) {
                  lVar17 = (longlong)((int)uStack_a0 + -1) * 0x10;
                  iVar10 = iVar10 + 1;
                  iVar2 = *(int *)(local_a8 + lVar17);
                  if (iVar10 <= *(int *)(local_a8 + lVar17)) {
                    iVar2 = iVar10;
                  }
                  iVar6 = *(int *)(local_a8 + 4 + lVar17);
                  if (iVar18 <= iVar6) {
                    iVar6 = iVar18;
                  }
                  *(int *)(local_a8 + lVar17) = iVar2;
                  *(int *)(local_a8 + 4 + lVar17) = iVar6;
                  iVar2 = *(int *)(local_a8 + 8 + lVar17);
                  if (iVar2 < iVar10) {
                    iVar2 = iVar10;
                  }
                  *(int *)(local_a8 + 8 + lVar17) = iVar2;
                  iVar10 = *(int *)(local_a8 + 0xc + lVar17);
                  if (iVar10 < iVar18) {
                    iVar10 = iVar18;
                  }
                  *(int *)(local_a8 + 0xc + lVar17) = iVar10;
                  goto LAB_1498c7671;
                }
              }
              lVar17 = (longlong)(int)uStack_a0;
              uVar15 = (int)uStack_a0 + 1;
              uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar15);
              if (uStack_a0._4_4_ < uVar15) {
                local_b0 = puVar12;
                FUN_145a1a3ae(&local_a8,uVar1 & 0xffffffff);
                puVar12 = local_b0;
              }
              *(ulonglong *)(local_a8 + lVar17 * 0x10) = lVar13 + uVar16;
              *(undefined1 **)(local_a8 + 8 + lVar17 * 0x10) = puVar12 + uVar16;
            }
          }
          else if (uVar7 == 0) {
            lVar17 = *(longlong *)(param_3 + 0x10);
            if (*(longlong *)(param_3 + 0x10) == 0) {
              lVar17 = param_3;
            }
            uVar7 = uVar15 & *(uint *)(lVar17 + (longlong)(iVar2 >> 5) * 4);
            goto LAB_1498c7692;
          }
LAB_1498c7671:
          uVar16 = uVar16 + 1;
          uVar3 = (ulonglong)*(int *)(param_1 + 0x20);
        } while ((longlong)uVar16 < (longlong)uVar3);
      }
      if (0 < (int)uStack_a0) {
        lVar17 = (longlong)(int)uStack_90;
        uVar15 = (int)uStack_90 + 1;
        uStack_90 = CONCAT44(uStack_90._4_4_,uVar15);
        if (uStack_90._4_4_ < uVar15) {
          FUN_1498d0eca(&local_98);
        }
        local_98[lVar17 * 2] = 0;
        local_98[lVar17 * 2] = local_a8;
        local_a8 = 0;
        *(int *)(local_98 + lVar17 * 2 + 1) = (int)uStack_a0;
        *(uint *)((longlong)local_98 + lVar17 * 0x10 + 0xc) = uStack_a0._4_4_;
        uStack_a0 = 0;
      }
      if (local_70 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      lVar20 = lVar20 + 1;
      lVar13 = lVar13 + 0x100000000;
    } while (lVar20 < *(int *)(param_1 + 0x24));
    uVar3 = 0;
    *param_2 = 0;
    param_2[1] = 0;
    if ((longlong)(int)uStack_90 != 0) {
      puVar19 = local_98 + (longlong)(int)uStack_90 * 2;
      puVar11 = local_98;
      do {
        if ((longlong)*(int *)(puVar11 + 1) != 0) {
          piVar14 = (int *)*puVar11;
          piVar21 = piVar14 + (longlong)*(int *)(puVar11 + 1) * 4;
          do {
            piVar4 = (int *)*param_2;
            iVar18 = *(int *)(param_2 + 1);
            lVar13 = (longlong)iVar18;
            if (lVar13 != 0) {
              lVar20 = lVar13 << 4;
              piVar9 = piVar4;
              do {
                if (((*piVar14 == *piVar9) && (piVar14[2] == piVar9[2])) &&
                   (piVar14[1] == piVar9[3])) {
                  if (piVar9 != (int *)0x0) {
                    piVar9[3] = piVar14[1] + 1;
                    goto LAB_1498c79cf;
                  }
                  break;
                }
                piVar9 = piVar9 + 4;
                lVar20 = lVar20 + -0x10;
              } while (lVar20 != 0);
            }
            *(uint *)(param_2 + 1) = iVar18 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar18 + 1U) {
              FUN_145a1a3ae(param_2,iVar18);
              piVar4 = (int *)*param_2;
            }
            *(undefined8 *)(piVar4 + lVar13 * 4) = *(undefined8 *)piVar14;
            *(undefined8 *)(piVar4 + lVar13 * 4 + 2) = *(undefined8 *)(piVar14 + 2);
LAB_1498c79cf:
            piVar14 = piVar14 + 4;
          } while (piVar14 != piVar21);
        }
        puVar11 = puVar11 + 2;
      } while (puVar11 != puVar19);
      uVar3 = uStack_90 & 0xffffffff;
    }
  }
  FUN_1498d0e9e(local_98,uVar3);
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1498c7a18 FUN_1498c7a18 body=94 status=ok
// SIG undefined FUN_1498c7a18(void)

undefined4 FUN_1498c7a18(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  uVar6 = 0xffffffff;
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0xffffffff;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x20);
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
  return uVar6;
}



// FUNCTION 1498c7a76 FUN_1498c7a76 body=88 status=ok
// SIG undefined FUN_1498c7a76(void)

ulonglong FUN_1498c7a76(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  bool bVar9;
  undefined7 uVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  uVar8 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar7 = CONCAT71(uVar8,1);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1498c7ac1;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      uVar6 = 1;
    }
    else {
      uVar6 = *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x25);
    }
    uVar7 = CONCAT71(uVar8,uVar6);
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
LAB_1498c7ac1:
  return uVar7 & 0xffffffff;
}



// FUNCTION 1498c7ace FUN_1498c7ace body=240 status=ok
// SIG undefined FUN_1498c7ace(void)

void FUN_1498c7ace(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  int local_a4;
  int *local_a0;
  undefined1 *local_98;
  undefined1 local_8c [4];
  undefined1 local_88 [16];
  longlong local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = FUN_14479d2ce(param_1 + 8);
  if (lVar2 != 0) {
    cVar1 = FUN_140041326(lVar2);
    if ((cVar1 != '\0') && (local_a4 = 0, 0 < *(int *)(param_3 + 0x10))) {
      do {
        local_b8 = 1;
        FUN_1498c72e4(local_88,param_3 + 8,param_3 + 0x1c,local_a4);
        local_a0 = &local_a4;
        local_98 = local_88;
        FUN_1498d0f50(param_4,local_8c,&local_a0);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        local_a4 = local_a4 + 1;
      } while (local_a4 < *(int *)(param_3 + 0x10));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c7bc0 FUN_1498c7bc0 body=302 status=ok
// SIG undefined FUN_1498c7bc0(void)

void FUN_1498c7bc0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar7 = FUN_147814168();
  local_40 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  plVar8 = (longlong *)FUN_147814606(uVar7,&local_40);
  if ((plVar8 != (longlong *)0x0) && ((longlong)(int)plVar8[1] != 0)) {
    plVar10 = (longlong *)*plVar8;
    plVar8 = plVar10 + (longlong)(int)plVar8[1] * 2;
    do {
      plVar3 = (longlong *)plVar10[1];
      if (plVar3 != (longlong *)0x0) {
        lVar4 = *plVar10;
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) goto LAB_1498c7ca1;
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
        if ((lVar4 != 0) && (lVar9 = FUN_14479d2ce(lVar4), lVar9 != 0)) {
          LOCK();
          *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
          UNLOCK();
          local_50 = lVar4;
          local_48 = plVar3;
          FUN_14468952a(param_1,lVar9,&local_50);
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
LAB_1498c7ca1:
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != plVar8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498c7cf0 FUN_1498c7cf0 body=250 status=ok
// SIG undefined FUN_1498c7cf0(void)

void FUN_1498c7cf0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar7 = FUN_147814168();
  local_30 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  plVar8 = (longlong *)FUN_147814606(uVar7,&local_30);
  if ((plVar8 != (longlong *)0x0) && ((longlong)(int)plVar8[1] != 0)) {
    plVar9 = (longlong *)*plVar8;
    plVar8 = plVar9 + (longlong)(int)plVar8[1] * 2;
    do {
      plVar3 = (longlong *)plVar9[1];
      if (plVar3 != (longlong *)0x0) {
        lVar4 = *plVar9;
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) goto LAB_1498c7da5;
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar10 = iVar6 == iVar5;
          if (bVar10) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar10);
        if (lVar4 != 0) {
          uVar7 = FUN_14479d2ce();
          FUN_144689ac2(param_1,uVar7);
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
LAB_1498c7da5:
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498c7dec FUN_1498c7dec body=137 status=ok
// SIG undefined FUN_1498c7dec(void)

int FUN_1498c7dec(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xa0);
  EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 == 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x20);
    iVar5 = 0x7fffffff;
    lVar6 = 0;
    do {
      iVar4 = (**(code **)(**(longlong **)(lVar2 + lVar6) + 0x10))();
      iVar3 = iVar4;
      if (iVar5 < iVar4) {
        iVar3 = iVar5;
      }
      if (iVar4 < 0) {
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
    LeaveCriticalSection(lpCriticalSection);
    if (iVar5 != 0x7fffffff) {
      return iVar5;
    }
  }
  return -1;
}



// FUNCTION 1498c7e76 FUN_1498c7e76 body=196 status=ok
// SIG undefined FUN_1498c7e76(void)

undefined8 FUN_1498c7e76(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14bef1400;
  puVar3[3] = param_2;
  puVar3[4] = uVar2;
  *(undefined4 *)(puVar3 + 5) = uVar1;
  FUN_1448b6402(&DAT_14c867438,param_1,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c7f3c FUN_1498c7f3c body=115 status=ok
// SIG undefined FUN_1498c7f3c(void)

void FUN_1498c7f3c(void)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (DAT_14cc316f0 == 0) {
    FUN_1446ddc76(&local_18,"ImgMedia",1);
    uVar1 = FUN_144a52528();
    DAT_14cc316f0 = FUN_1405f3750(uVar1,local_18,0);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c7fb0 FUN_1498c7fb0 body=93 status=ok
// SIG undefined FUN_1498c7fb0(void)

undefined8 * FUN_1498c7fb0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140100e25(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1498d1766(param_1,iVar1);
      FUN_1498d17d8(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1498c800e FUN_1498c800e body=172 status=ok
// SIG undefined FUN_1498c800e(void)

void FUN_1498c800e(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = 0;
  uStack_20 = 0;
  FUN_14468952a(*(undefined8 *)(param_1 + 0xd8),local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c80bc FUN_1498c80bc body=191 status=ok
// SIG undefined FUN_1498c80bc(void)

void FUN_1498c80bc(undefined8 param_1,longlong param_2)

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
  FUN_1498c817c(param_1,plVar1);
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



// FUNCTION 1498c817c FUN_1498c817c body=219 status=ok
// SIG undefined FUN_1498c817c(void)

void FUN_1498c817c(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  longlong local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  longlong local_48;
  int local_40;
  undefined2 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)FUN_14054d1d4();
  FUN_1498c87ce(param_1,&local_68);
  local_48 = local_68;
  local_40 = local_60 + -1;
  if (local_60 == 0) {
    local_40 = 0;
  }
  local_38 = &DAT_149e060b2;
  local_30 = 1;
  FUN_140bee87a(&local_58,&local_48,2);
  puVar2 = local_58;
  if (local_50 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  local_78 = 1;
  (**(code **)(*plVar1 + 0x78))(plVar1,param_2,puVar2,0);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498c8258 FUN_1498c8258 body=127 status=ok
// SIG undefined FUN_1498c8258(void)

void FUN_1498c8258(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1498c88f6(&local_28,param_1 + 200);
  iVar1 = local_20 + -1;
  if (local_20 == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(param_3,local_28,iVar1);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c82d8 FUN_1498c82d8 body=160 status=ok
// SIG undefined FUN_1498c82d8(void)

void FUN_1498c82d8(longlong param_1,longlong param_2)

{
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
  FUN_144689ac2(*(undefined8 *)(param_1 + 0xd8),local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c837a FUN_1498c837a body=171 status=ok
// SIG undefined FUN_1498c837a(void)

void FUN_1498c837a(undefined8 param_1,longlong param_2)

{
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
  FUN_1498c8426(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c8426 FUN_1498c8426 body=517 status=ok
// SIG undefined FUN_1498c8426(void)

void FUN_1498c8426(longlong param_1)

{
  void **ppvVar1;
  void *_Src;
  char cVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  longlong local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  int local_50;
  longlong local_48;
  undefined8 uStack_40;
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140bee914(&local_38);
  if ((local_30 < 2) || (cVar2 = FUN_144a791f8(&local_38,&DAT_149e0635c,1,1), cVar2 != '\0')) {
    _Src = local_38;
    ppvVar1 = (void **)(param_1 + 200);
    if (ppvVar1 != &local_38) {
      *(int *)(param_1 + 0xd0) = local_30;
      if (local_30 == 0 && *(int *)(param_1 + 0xd4) == 0) {
        *(undefined4 *)(param_1 + 0xd4) = 0;
      }
      else {
        FUN_1446dd670(ppvVar1,local_30);
        if (local_30 != 0) {
          memcpy(*ppvVar1,_Src,(longlong)local_30 * 2);
        }
      }
    }
  }
  else {
    FUN_1401aea18(&local_48,&local_38);
    FUN_140f7cd62(&local_68);
    FUN_140aa5ef8(&local_58,&local_68);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    iVar4 = local_50 + -1;
    puVar3 = local_58;
    if (local_50 == 0) {
      puVar3 = &DAT_149dfb77a;
      iVar4 = 0;
    }
    cVar2 = FUN_144a791f8(&local_48,puVar3,iVar4,1);
    if (cVar2 != '\0') {
      puVar3 = local_58;
      if (local_50 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      FUN_14107002a(&local_48,puVar3);
      FUN_140056680(local_78,&DAT_149e32c52);
      FUN_144a7dea0(&local_68,local_78,&local_48);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_48 = local_68;
      uStack_40 = uStack_60;
      local_68 = 0;
      uStack_60 = 0;
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
    }
    iVar4 = (int)uStack_40 + -1;
    if ((int)uStack_40 == 0) {
      iVar4 = 0;
    }
    FUN_1402980a2(param_1 + 200,local_48,iVar4);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c862c FUN_1498c862c body=171 status=ok
// SIG undefined FUN_1498c862c(void)

void FUN_1498c862c(undefined8 param_1,longlong param_2)

{
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
  FUN_1498c86d8(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c86d8 FUN_1498c86d8 body=144 status=ok
// SIG undefined FUN_1498c86d8(void)

void FUN_1498c86d8(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1498c8a2a(&local_28);
  if ((longlong *)(param_1 + 200) == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 200) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 200) = local_28;
    *(undefined4 *)(param_1 + 0xd0) = local_20;
    *(undefined4 *)(param_1 + 0xd4) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c877c FUN_1498c877c body=75 status=ok
// SIG undefined FUN_1498c877c(void)

void FUN_1498c877c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_14780c1d0(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c87ce FUN_1498c87ce body=295 status=ok
// SIG undefined FUN_1498c87ce(void)

undefined8 * FUN_1498c87ce(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  char cVar1;
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_70;
  longlong local_68 [2];
  void *local_58;
  int local_50;
  longlong local_48;
  int local_40;
  void *local_38;
  int local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1498c88f6(&local_58,param_1 + 200);
  cVar1 = FUN_1401aeb9c(&local_58);
  _Src = local_58;
  if (cVar1 == '\0') {
    *param_2 = 0;
    *(int *)(param_2 + 1) = local_50;
    if ((longlong)local_50 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,local_50,0);
      memcpy((void *)*param_2,_Src,(longlong)local_50 * 2);
    }
  }
  else {
    FUN_140f7cd62();
    local_48 = local_78;
    local_40 = local_70 + -1;
    if (local_70 == 0) {
      local_40 = 0;
    }
    local_38 = local_58;
    local_30 = local_50 + -1;
    if (local_50 == 0) {
      local_30 = 0;
    }
    FUN_140bee87a(local_68,&local_48,2);
    FUN_140aa5ef8(param_2,local_68);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c88f6 FUN_1498c88f6 body=307 status=ok
// SIG undefined FUN_1498c88f6(void)

undefined8 FUN_1498c88f6(undefined8 param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  longlong local_88 [2];
  undefined2 *local_78;
  int local_70;
  longlong local_68 [2];
  undefined2 *local_58;
  int local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1401afab0(local_68);
  FUN_140aa5ef8(&local_58,local_68);
  puVar1 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar1 = local_58;
  }
  local_98 = 1;
  FUN_140807d8e(param_2,local_48,L"{engine_dir}",puVar1);
  FUN_140f7cd62(local_88);
  FUN_140aa5ef8(&local_78,local_88);
  puVar1 = &DAT_149dfb77a;
  if (local_70 != 0) {
    puVar1 = local_78;
  }
  local_98 = 1;
  FUN_1414bc8e4(local_48,param_1,L"{project_dir}",puVar1);
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c8a2a FUN_1498c8a2a body=584 status=ok
// SIG undefined FUN_1498c8a2a(void)

longlong * FUN_1498c8a2a(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  int local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140ded208(param_2,&local_48);
  local_88 = 1;
  puVar4 = &DAT_149dfb77a;
  FUN_1414bc8e4(&local_48,param_1,&DAT_149e01f5a,&DAT_149dfb77a);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_140f7cd62(&local_48);
  FUN_140aa5ef8(&local_58,&local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1498c88f6(&local_68,param_1);
  cVar1 = FUN_1401aeb9c();
  if (cVar1 != '\0') {
    local_48 = local_58;
    iVar2 = local_50 + -1;
    if (local_50 == 0) {
      iVar2 = 0;
    }
    uStack_40 = CONCAT44(uStack_40._4_4_,iVar2);
    local_38 = *param_1;
    local_30 = (int)param_1[1] + -1;
    if ((int)param_1[1] == 0) {
      local_30 = 0;
    }
    FUN_140bee87a(&local_78,&local_48,2);
    if (CONCAT44(uStack_64,local_68) != 0) {
      FUN_1400020a8();
    }
    local_68 = local_78;
    uStack_64 = uStack_74;
    iStack_60 = iStack_70;
    uStack_5c = uStack_6c;
  }
  plVar3 = (longlong *)FUN_14054d1d4();
  if (iStack_60 != 0) {
    puVar4 = (undefined2 *)CONCAT44(uStack_64,local_68);
  }
  cVar1 = (**(code **)(*plVar3 + 0x48))(plVar3,puVar4);
  if (cVar1 != '\0') {
    FUN_140bee914(&local_48,&local_68);
    if (CONCAT44(uStack_64,local_68) != 0) {
      FUN_1400020a8();
    }
    local_68 = (undefined4)local_48;
    uStack_64 = local_48._4_4_;
    iStack_60 = (int)uStack_40;
    uStack_5c = uStack_40._4_4_;
    FUN_140bee914(&local_48,param_1);
    if (&local_48 == param_1) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_48;
      local_48 = 0;
      *(int *)(param_1 + 1) = (int)uStack_40;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_40._4_4_;
    }
  }
  if ((*(uint *)(param_2 + 1) < 2) || (*(short *)*param_2 != 0x7b)) {
    local_48 = 0;
    uStack_40 = 0;
    cVar1 = FUN_1498c8c74(&local_68,&local_58);
    if (cVar1 != '\0') {
      iVar2 = (int)uStack_40 + -1;
      if ((int)uStack_40 == 0) {
        iVar2 = 0;
      }
      FUN_1402980a2(param_1,local_48,iVar2);
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if (CONCAT44(uStack_64,local_68) != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c8c74 FUN_1498c8c74 body=93 status=ok
// SIG undefined FUN_1498c8c74(void)

ulonglong FUN_1498c8c74(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  ulonglong uVar2;
  undefined2 *puVar3;
  
  FUN_144a787a6(param_3,param_1);
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  cVar1 = FUN_14107002a(param_3,puVar3);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144a791f8(param_3,&DAT_149e06258,2,1);
    uVar2 = uVar2 ^ 1;
  }
  return uVar2;
}



// FUNCTION 1498c8d0e FUN_1498c8d0e body=237 status=ok
// SIG undefined FUN_1498c8d0e(void)

undefined8 *
FUN_1498c8d0e(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  void *_Src;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_3 == DAT_14cc31550) {
    *param_2 = 0;
    iVar1 = *(int *)(param_1 + 0x78);
    _Src = *(void **)(param_1 + 0x70);
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 != 0) {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446f57c6(&DAT_14cabc538,&local_38);
    if (*param_3 == local_38) {
      FUN_14029881c(param_1 + 0x84,param_2,0,0);
    }
    else {
      FUN_147813d5a(param_1,param_2,param_3,param_4);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c8dfe FUN_1498c8dfe body=69 status=ok
// SIG undefined FUN_1498c8dfe(void)

undefined8 * FUN_1498c8dfe(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  
  if (*param_3 == DAT_14cc31558) {
    *param_2 = *(undefined8 *)(param_1 + 0xb0);
    lVar1 = *(longlong *)(param_1 + 0xb8);
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  else {
    FUN_147813e00(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 1498c8e7c FUN_1498c8e7c body=133 status=ok
// SIG undefined FUN_1498c8e7c(void)

undefined8 FUN_1498c8e7c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1498c87ce(param_1,local_30);
  FUN_140056680(local_40,L"img://");
  FUN_1401c7f3e(param_2,local_40,local_30);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c8f02 FUN_1498c8f02 body=117 status=ok
// SIG undefined FUN_1498c8f02(void)

undefined4 FUN_1498c8f02(undefined8 param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1498c87ce(param_1,&local_28);
  plVar2 = (longlong *)FUN_14054d1d4();
  puVar3 = local_28;
  if (local_20 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  uVar1 = (**(code **)(*plVar2 + 0x50))(plVar2,puVar3);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1498c8f78 FUN_1498c8f78 body=192 status=ok
// SIG undefined FUN_1498c8f78(void)

undefined8 * FUN_1498c8f78(undefined8 *param_1)

{
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
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
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x24),4000);
  return param_1;
}



// FUNCTION 1498c9038 FUN_1498c9038 body=177 status=ok
// SIG undefined FUN_1498c9038(void)

void FUN_1498c9038(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_1498c90ea();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  FUN_1498cf2fa(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_1498cf388(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_1498cf416(param_1 + 0x20);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001498c90dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1498c90ea FUN_1498c90ea body=49 status=ok
// SIG undefined FUN_1498c90ea(void)

void FUN_1498c90ea(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  FUN_1498c919c(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001498c9114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  return;
}



// FUNCTION 1498c911c FUN_1498c911c body=127 status=ok
// SIG undefined FUN_1498c911c(void)

void FUN_1498c911c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  
  plVar1 = (longlong *)FUN_145b15610();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  fVar4 = *(float *)(lVar2 + 0x44) * 1024.0 * 1024.0 * 1024.0;
  uVar3 = (ulonglong)fVar4;
  *(ulonglong *)(param_1 + 0x118) =
       (longlong)(fVar4 - 9.223372e+18) & (longlong)uVar3 >> 0x3f | uVar3;
  FUN_1498c9200(param_1,0);
  return;
}



// FUNCTION 1498c919c FUN_1498c919c body=100 status=ok
// SIG undefined FUN_1498c919c(void)

void FUN_1498c919c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  while (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar1 + 0x40);
    FUN_1498c99f4(lVar1);
    FUN_1400020a8(lVar1);
    lVar1 = *(longlong *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  FUN_1498d2c22(param_1 + 0x20);
  FUN_1498d2da6(param_1 + 0x70);
  FUN_1498d2f2a(param_1 + 0xc0);
  return;
}



// FUNCTION 1498c9200 FUN_1498c9200 body=282 status=ok
// SIG undefined FUN_1498c9200(void)

void FUN_1498c9200(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(ulonglong *)(param_1 + 0x118) < (ulonglong)(*(longlong *)(param_1 + 0x110) + param_2)) {
    do {
      uVar2 = *(ulonglong *)(param_1 + 0x10);
      if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
        uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        lVar4 = *(longlong *)(param_1 + 0xb0);
        if (*(longlong *)(param_1 + 0xb0) == 0) {
          lVar4 = param_1 + 0xa8;
        }
        iVar5 = *(int *)(lVar4 + (ulonglong)
                                 (*(int *)(param_1 + 0xb8) - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
        if (iVar5 != -1) {
          do {
            puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar5 * 0x18);
            if (*puVar1 == uVar2) {
              if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
                local_30 = puVar1[1];
                goto LAB_1498c92a1;
              }
              break;
            }
            iVar5 = (int)puVar1[2];
          } while (iVar5 != -1);
        }
      }
      local_30 = 0;
LAB_1498c92a1:
      FUN_1498c995c(param_1,&local_30);
    } while (*(ulonglong *)(param_1 + 0x118) < (ulonglong)(*(longlong *)(param_1 + 0x110) + param_2)
            );
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498c931c FUN_1498c931c body=154 status=ok
// SIG undefined FUN_1498c931c(void)

undefined8 *
FUN_1498c931c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             undefined8 *param_5)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = param_4;
  param_1[4] = *param_5;
  lVar2 = param_5[1];
  param_1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 1498c93b6 FUN_1498c93b6 body=318 status=ok
// SIG undefined FUN_1498c93b6(void)

void FUN_1498c93b6(longlong param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong *local_48;
  ulonglong *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *(longlong *)(param_1 + 0x18);
  *(longlong *)(param_3 + 0x30) = lVar4;
  if (lVar4 != 0) {
    *(longlong *)(lVar4 + 0x40) = param_3;
  }
  *(longlong *)(param_1 + 0x18) = param_3;
  uVar2 = *param_2;
  iVar3 = FUN_144a788f7(uVar2 & 0xffffffff);
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar4 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x60);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U & iVar3 + (int)(uVar2 >> 0x20)) * 4);
    if (iVar3 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 0x18);
        if (*puVar1 == uVar2) {
          if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
            uVar2 = puVar1[1];
            *(ulonglong *)(param_3 + 0x38) = uVar2;
            if (uVar2 == 0) goto LAB_1498c9434;
            *(longlong *)(uVar2 + 0x48) = param_3;
            goto LAB_1498c9456;
          }
          break;
        }
        iVar3 = (int)puVar1[2];
      } while (iVar3 != -1);
    }
  }
  *(undefined8 *)(param_3 + 0x38) = 0;
LAB_1498c9434:
  local_48 = (ulonglong *)&local_50;
  local_50 = param_3;
  local_40 = param_2;
  FUN_1498d1efa(param_1 + 0x70,local_34);
LAB_1498c9456:
  local_40 = (ulonglong *)&local_50;
  local_50 = param_3;
  local_48 = param_2;
  FUN_1498d23f6((longlong *)(param_1 + 0x20),local_34);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *(longlong *)(param_1 + 0x10) = param_3;
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498c94f6 FUN_1498c94f6 body=214 status=ok
// SIG undefined FUN_1498c94f6(void)

ulonglong FUN_1498c94f6(longlong param_1,ulonglong *param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong unaff_RBP;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  uVar1 = *param_2;
  iVar2 = FUN_144a788f7(uVar1 & 0xffffffff);
  if (*(int *)(param_1 + 200) != *(int *)(param_1 + 0xf4)) {
    uVar3 = iVar2 + (int)(uVar1 >> 0x20);
    lVar4 = param_1 + 0xf8;
    if (*(longlong *)(param_1 + 0x100) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x100);
    }
    iVar2 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x108) - 1U &
                             (uVar3 * 0x40 + param_3 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar2 != -1) {
      lVar4 = *(longlong *)(param_1 + 0xc0);
      do {
        lVar5 = (longlong)iVar2 * 0x20;
        bVar6 = *(int *)(lVar4 + 8 + lVar5) == param_3 && *(ulonglong *)(lVar4 + lVar5) == uVar1;
        unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),bVar6);
        if (bVar6) break;
        iVar2 = *(int *)(lVar5 + lVar4 + 0x18);
      } while (iVar2 != -1);
      goto LAB_1498c9535;
    }
  }
  unaff_RBP = 0;
LAB_1498c9535:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 1498c95cc FUN_1498c95cc body=281 status=ok
// SIG undefined FUN_1498c95cc(void)

longlong FUN_1498c95cc(longlong param_1,ulonglong *param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  uVar2 = *param_2;
  iVar4 = FUN_144a788f7(uVar2 & 0xffffffff);
  if (*(int *)(param_1 + 200) != *(int *)(param_1 + 0xf4)) {
    uVar5 = iVar4 + (int)(uVar2 >> 0x20);
    lVar6 = param_1 + 0xf8;
    if (*(longlong *)(param_1 + 0x100) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x100);
    }
    iVar4 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x108) - 1U &
                             (uVar5 * 0x40 + param_3 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5)) * 4);
    if (iVar4 != -1) {
      lVar3 = *(longlong *)(param_1 + 0xc0);
      lVar6 = 0;
      do {
        lVar7 = (longlong)iVar4 * 0x20;
        lVar1 = lVar3 + lVar7;
        if ((*(ulonglong *)(lVar3 + lVar7) == uVar2) && (*(int *)(lVar3 + 8 + lVar7) == param_3)) {
          plVar8 = (longlong *)(lVar1 + 0x10);
          if ((plVar8 == (longlong *)0x0 || lVar1 == 0) || (*plVar8 == 0)) goto LAB_1498c960c;
          lVar6 = *plVar8 + 0x20;
          FUN_1498c96e6(param_1,param_2);
          FUN_1498c93b6(param_1,param_2,*plVar8);
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x18);
      } while (iVar4 != -1);
      goto LAB_1498c960f;
    }
  }
LAB_1498c960c:
  lVar6 = 0;
LAB_1498c960f:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  return lVar6;
}



// FUNCTION 1498c96e6 FUN_1498c96e6 body=419 status=ok
// SIG undefined FUN_1498c96e6(void)

void FUN_1498c96e6(longlong param_1,ulonglong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  ulonglong *local_58;
  ulonglong *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_3 + 0x30) == 0) {
    lVar4 = *(longlong *)(param_3 + 0x40);
    if (*(ulonglong *)(param_1 + 0x10) == param_3) {
      *(longlong *)(param_1 + 0x10) = lVar4;
    }
  }
  else {
    lVar4 = *(longlong *)(param_3 + 0x40);
    *(longlong *)(*(longlong *)(param_3 + 0x30) + 0x40) = lVar4;
  }
  puVar1 = (undefined8 *)(param_3 + 0x30);
  if (lVar4 == 0) {
    if (*(ulonglong *)(param_1 + 0x18) == param_3) {
      *(undefined8 *)(param_1 + 0x18) = *puVar1;
    }
  }
  else {
    *(undefined8 *)(lVar4 + 0x30) = *puVar1;
  }
  *(undefined8 *)(param_3 + 0x30) = 0;
  *(undefined8 *)(param_3 + 0x40) = 0;
  if (*(longlong *)(param_3 + 0x38) == 0) {
    FUN_1498d28ca(param_1 + 0x70,param_3);
    if (*(longlong *)(param_3 + 0x48) != 0) {
      local_58 = (ulonglong *)(param_3 + 0x48);
      local_50 = param_2;
      FUN_1498d29a6(param_1 + 0x70,local_44);
      uVar5 = *(ulonglong *)(param_3 + 0x48);
      goto LAB_1498c974d;
    }
  }
  else {
    uVar5 = *(ulonglong *)(param_3 + 0x48);
    *(ulonglong *)(*(longlong *)(param_3 + 0x38) + 0x48) = uVar5;
LAB_1498c974d:
    if (uVar5 != 0) {
      *(ulonglong *)(uVar5 + 0x38) = *(ulonglong *)(param_3 + 0x38);
      goto LAB_1498c975a;
    }
  }
  uVar5 = *param_2;
  iVar3 = FUN_144a788f7(uVar5 & 0xffffffff);
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar4 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x60);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U & iVar3 + (int)(uVar5 >> 0x20)) * 4);
    if (iVar3 != -1) {
      do {
        puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 0x18);
        if (*puVar2 == uVar5) {
          if ((puVar2 + 1 != (ulonglong *)0x0 && puVar2 != (ulonglong *)0x0) &&
             (puVar2[1] == param_3)) {
            local_58 = param_2;
            local_50 = (ulonglong *)(param_3 + 0x38);
            FUN_1498d2aee((longlong *)(param_1 + 0x20),local_44);
          }
          break;
        }
        iVar3 = (int)puVar2[2];
      } while (iVar3 != -1);
    }
  }
LAB_1498c975a:
  *(undefined8 *)(param_3 + 0x40) = 0;
  *(undefined8 *)(param_3 + 0x48) = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_3 + 0x38) = 0;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498c988a FUN_1498c988a body=209 status=ok
// SIG undefined FUN_1498c988a(void)

void FUN_1498c988a(longlong param_1,ulonglong *param_2,longlong *param_3)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  uVar4 = *param_2;
  iVar2 = FUN_144a788f7(uVar4 & 0xffffffff);
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar3 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x60);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U & iVar2 + (int)(uVar4 >> 0x20)) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 0x18);
        if (*puVar1 == uVar4) {
          if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
            for (uVar4 = puVar1[1]; uVar4 != 0; uVar4 = *(ulonglong *)(uVar4 + 0x38)) {
              iVar2 = (int)param_3[1];
              *(uint *)(param_3 + 1) = iVar2 + 1U;
              if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
                FUN_1446f48e2(param_3,iVar2);
              }
              *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = *(undefined4 *)(uVar4 + 0x18);
            }
          }
          break;
        }
        iVar2 = (int)puVar1[2];
      } while (iVar2 != -1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001498c98cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  return;
}



// FUNCTION 1498c995c FUN_1498c995c body=135 status=ok
// SIG undefined FUN_1498c995c(void)

void FUN_1498c995c(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1498c96e6();
  *(longlong *)(param_1 + 0x110) = *(longlong *)(param_1 + 0x110) - *(longlong *)(param_3 + 0x10);
  local_30 = *param_2;
  local_28 = *(undefined4 *)(param_3 + 0x18);
  FUN_1498d1dfc(param_1 + 0xc0);
  if (param_3 != 0) {
    FUN_1498c99f4(param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c99f4 FUN_1498c99f4 body=74 status=ok
// SIG undefined FUN_1498c99f4(void)

void FUN_1498c99f4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[5];
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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498c9a3e FUN_1498c9a3e body=67 status=ok
// SIG undefined FUN_1498c9a3e(void)

undefined8 FUN_1498c9a3e(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  FUN_1498cac6c(param_2,param_1 + 0xc0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  return param_2;
}



// FUNCTION 1498c9a82 FUN_1498c9a82 body=346 status=ok
// SIG undefined FUN_1498c9a82(void)

void FUN_1498c9a82(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
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
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  iVar6 = 0;
  local_58 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_60);
    iVar6 = (int)param_1[5];
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = param_1;
  if ((iStack_4c != iVar6) || (local_58 != plVar1)) {
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        plVar5 = *(longlong **)(lVar4 + 0x20);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        FUN_1400020a8(lVar4);
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (local_88 != param_1 || (local_78 != plVar1 || iStack_6c != iVar6));
  }
  *(int *)(param_1 + 0xc) = param_2;
  iVar6 = 0;
  if (0 < param_2) {
    iVar6 = param_2;
  }
  FUN_1498d3e14(param_1,iVar6);
  param_1[10] = 0;
  param_1[0xb] = 0;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c9bde FUN_1498c9bde body=49 status=ok
// SIG undefined FUN_1498c9bde(void)

void FUN_1498c9bde(longlong param_1)

{
  FUN_1498c9a82(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1498d3d38(param_1);
  return;
}



// FUNCTION 1498c9c10 FUN_1498c9c10 body=258 status=ok
// SIG undefined FUN_1498c9c10(void)

void FUN_1498c9c10(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  local_58 = 0;
  uStack_50 = 0;
  iVar1 = *(int *)(param_1 + 0x180);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_14481578e(&local_58);
    iVar1 = *(int *)(param_1 + 0x180);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x178);
      lVar5 = 0;
      do {
        uVar3 = uStack_50;
        lVar6 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_1446f48e2(&local_58,uVar3 & 0xffffffff);
        }
        *(undefined4 *)(local_58 + lVar6 * 4) = *(undefined4 *)(lVar2 + lVar5);
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
  }
  FUN_1498c9d14(param_1,&local_58,param_2);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c9d14 FUN_1498c9d14 body=309 status=ok
// SIG undefined FUN_1498c9d14(void)

void FUN_1498c9d14(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  longlong local_78;
  undefined1 local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((0 < *(int *)(param_1 + 0x154)) && (0 < *(int *)(param_1 + 0x150))) &&
     (lVar2 = param_2[1], (longlong)(int)lVar2 != 0)) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      dVar6 = (double)*(int *)(param_1 + 0x154) / (double)*(int *)(param_1 + 0x150);
      auVar4._0_8_ = (double)*(uint *)(lVar1 + lVar3) * dVar6 * 10000000.0 + 0.5;
      auVar4._8_8_ = 0;
      auVar4 = roundpd(auVar4,auVar4,1);
      local_78 = (longlong)auVar4._0_8_;
      auVar5._0_8_ = (double)(*(uint *)(lVar1 + lVar3) + 1) * dVar6 * 10000000.0 + 0.5;
      auVar5._8_8_ = 0;
      auVar4 = roundpd(auVar5,auVar5,1);
      local_68 = (longlong)auVar4._0_8_;
      local_80[0] = 1;
      local_70 = 0;
      FUN_1478055e8(param_3,local_80);
      lVar3 = lVar3 + 4;
    } while ((longlong)(int)lVar2 * 4 != lVar3);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c9e4a FUN_1498c9e4a body=173 status=ok
// SIG undefined FUN_1498c9e4a(void)

void FUN_1498c9e4a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  local_38[0] = 0;
  local_38[1] = 0;
  if (*(char *)(param_1 + 0x1a0) == '\x01') {
    FUN_1498c988a(*(undefined8 *)(param_1 + 0x120),param_1 + 0x158,local_38);
  }
  else {
    FUN_1498c9ef8(param_1 + 0x40,local_38);
  }
  FUN_1498c9d14(param_1,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498c9ef8 FUN_1498c9ef8 body=293 status=ok
// SIG undefined FUN_1498c9ef8(void)

void FUN_1498c9ef8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
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
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar4 = (int)param_1[5];
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = param_1;
  if ((iStack_4c != iVar4) || (uStack_58 != plVar1)) {
    do {
      puVar3 = *(undefined4 **)(*local_88 + (longlong)iStack_6c * 0x10);
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1446f48e2(param_2,iVar2);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar2 * 4) = *puVar3;
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != param_1 ||
             ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || iStack_6c != iVar4));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ca01e FUN_1498ca01e body=98 status=ok
// SIG undefined FUN_1498ca01e(void)

int FUN_1498ca01e(longlong param_1,longlong param_2)

{
  int iVar1;
  double dVar2;
  
  iVar1 = -1;
  if ((((-1 < param_2) && (param_2 < *(longlong *)(param_1 + 0x148))) &&
      (0 < *(int *)(param_1 + 0xb8))) && (0 < *(int *)(*(longlong *)(param_1 + 0xb0) + 8))) {
    dVar2 = ((double)*(int *)(param_1 + 0x150) / (double)*(int *)(param_1 + 0x154)) *
            ((double)param_2 / 10000000.0);
    iVar1 = (int)ROUND(dVar2 + dVar2 + -0.5) >> 1;
  }
  return iVar1;
}



// FUNCTION 1498ca080 FUN_1498ca080 body=175 status=ok
// SIG undefined FUN_1498ca080(void)

void FUN_1498ca080(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 *param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 8) = param_5;
  lVar1 = param_1 + 0x10;
  if (lVar1 != param_2) {
    FUN_1498cf4a4(lVar1);
    FUN_1498cf550(lVar1,param_2);
  }
  *(undefined8 *)(param_1 + 0x170) = *param_3;
  uVar2 = param_4[1];
  *(undefined8 *)(param_1 + 0x178) = *param_4;
  *(undefined8 *)(param_1 + 0x180) = uVar2;
  *(undefined1 *)(param_1 + 0x188) = param_6;
  uVar2 = param_7[1];
  *(undefined8 *)(param_1 + 0x18c) = *param_7;
  *(undefined8 *)(param_1 + 0x194) = uVar2;
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_7 + 2);
  if ((*(longlong *)(param_1 + 0x10) == 0) && (*(longlong *)(param_1 + 0x160) == 0)) {
    *(undefined1 *)(param_1 + 0x188) = 1;
  }
  return;
}



// FUNCTION 1498ca130 FUN_1498ca130 body=312 status=ok
// SIG undefined FUN_1498ca130(void)

undefined8 FUN_1498ca130(longlong param_1,longlong param_2,float param_3)

{
  longlong lVar1;
  double dVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  plVar5 = (longlong *)(param_1 + 0x1a8);
  lVar6 = *(longlong *)(param_1 + 0x1b0);
  if (0.0 <= param_3) {
    if ((*(longlong *)(param_2 + 0x28) <= lVar6) &&
       ((lVar6 != *(longlong *)(param_2 + 0x28) || (*(longlong *)(param_2 + 0x20) <= *plVar5)))) {
      return 0;
    }
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    *plVar5 = *(longlong *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x1b0) = uVar3;
    lVar6 = *(longlong *)(param_1 + 0x1a8);
    dVar2 = (double)*(int *)(param_1 + 0x154) / (double)*(int *)(param_1 + 0x150);
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x10);
    if (lVar1 < lVar6) {
      lVar6 = *(longlong *)(param_2 + 8);
    }
    else {
      if (lVar6 != lVar1) {
        return 0;
      }
      lVar6 = *(longlong *)(param_2 + 8);
      if (*plVar5 < lVar6) {
        return 0;
      }
    }
    dVar2 = (double)*(int *)(param_1 + 0x154) / (double)*(int *)(param_1 + 0x150);
    auVar7._0_8_ = dVar2 * 10000000.0 + 0.5;
    auVar7._8_8_ = 0;
    auVar7 = roundpd(auVar7,auVar7,1);
    lVar6 = lVar6 - (longlong)auVar7._0_8_;
    *(longlong *)(param_1 + 0x1a8) = lVar6;
    *(longlong *)(param_1 + 0x1b0) = lVar1;
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1d4) = 0;
  uVar4 = FUN_1498ca01e(param_1,lVar6);
  auVar8._0_8_ = (double)uVar4 * dVar2 * 10000000.0 + 0.5;
  auVar8._8_8_ = 0;
  auVar7 = roundpd(auVar8,auVar8,1);
  *(longlong *)(param_1 + 0x1a8) = (longlong)auVar7._0_8_;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  return CONCAT71((int7)((ulonglong)(longlong)auVar7._0_8_ >> 8),1);
}



// FUNCTION 1498ca268 FUN_1498ca268 body=222 status=ok
// SIG undefined FUN_1498ca268(void)

ulonglong FUN_1498ca268(longlong param_1,longlong *param_2,float param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  undefined1 auVar5 [16];
  
  cVar1 = *(char *)(param_1 + 0xd0);
  if (cVar1 != '\x01') goto LAB_1498ca27a;
  lVar4 = *(longlong *)(param_1 + 0x1b0);
  if (0.0 <= param_3) {
    lVar3 = *(longlong *)(param_1 + 0x1a8) + *(longlong *)(param_1 + 0x1b8);
    *param_2 = lVar3;
    param_2[1] = lVar4;
    lVar4 = lVar3 - *(longlong *)(param_1 + 0x148);
    if (*(longlong *)(param_1 + 0x148) <= lVar3) {
      lVar3 = 1;
      goto LAB_1498ca2e4;
    }
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x1a8) - *(longlong *)(param_1 + 0x1b8);
    *param_2 = lVar3;
    param_2[1] = lVar4;
    if (lVar3 < 0) {
      lVar4 = lVar3 + *(longlong *)(param_1 + 0x148);
      lVar3 = -1;
LAB_1498ca2e4:
      *param_2 = lVar4;
      param_2[1] = lVar3 + *(longlong *)(param_1 + 0x1b0);
      lVar3 = lVar4;
    }
  }
  uVar2 = FUN_1498ca01e(param_1,lVar3);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = ((double)*(int *)(param_1 + 0x154) / (double)*(int *)(param_1 + 0x150)) *
                 (double)uVar2 * 10000000.0 + 0.5;
  auVar5 = roundpd(auVar5,auVar5,1);
  *param_2 = (longlong)auVar5._0_8_;
LAB_1498ca27a:
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1) & 0xffffffff;
}



// FUNCTION 1498ca346 FUN_1498ca346 body=61 status=ok
// SIG undefined FUN_1498ca346(void)

void FUN_1498ca346(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  FUN_1498c9d14(param_1,param_1 + 0x168,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001498ca37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 1498ca384 FUN_1498ca384 body=362 status=ok
// SIG undefined FUN_1498ca384(void)

void FUN_1498ca384(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  int local_b4;
  int *local_b0;
  undefined1 *local_a8;
  undefined1 local_9c [4];
  undefined1 local_98 [16];
  longlong local_88;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar2 = *(longlong *)(param_1 + 0x130);
  if ((lVar2 != 0) &&
     (((1 < *(int *)(param_1 + 0xf4) || (1 < *(int *)(param_1 + 0xd4))) ||
      (1 < *(int *)(param_1 + 0xd8))))) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0xa0));
    iVar1 = *(int *)(lVar2 + 0x28);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0xa0));
    if (0 < iVar1) {
      FUN_144689c1a(*(undefined8 *)(param_1 + 0x130),local_98);
      FUN_1498cf862(param_2,local_98);
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_145a36c6e(local_98);
      goto LAB_1498ca481;
    }
  }
  local_b4 = 0;
  if (0 < *(int *)(param_1 + 0xf4)) {
    do {
      local_c8 = 1;
      FUN_1498c72e4(local_98,param_1 + 0x140,param_1 + 0xdc,local_b4);
      local_b0 = &local_b4;
      local_a8 = local_98;
      FUN_1498d10d0(param_2,local_9c,&local_b0);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      local_b4 = local_b4 + 1;
    } while (local_b4 < *(int *)(param_1 + 0xf4));
  }
LAB_1498ca481:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ca4f0 FUN_1498ca4f0 body=589 status=ok
// SIG undefined FUN_1498ca4f0(void)

void FUN_1498ca4f0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_148 [40];
  undefined1 local_120 [104];
  longlong local_b8 [3];
  longlong lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined8 local_5c;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if (*(char *)(param_1 + 0x1a0) == '\0') {
    if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
      lVar4 = param_1 + 0x78;
      if (*(longlong *)(param_1 + 0x80) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x80);
      }
      iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x88) - 1U & param_2) * 4);
      if (iVar6 != -1) {
        do {
          if (**(uint **)(*(longlong *)(param_1 + 0x40) + (longlong)iVar6 * 0x10) == param_2)
          goto LAB_1498ca708;
          iVar6 = *(int *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 0x40) + 8);
        } while (iVar6 != -1);
      }
    }
  }
  else {
    cVar3 = FUN_1498c94f6(*(undefined8 *)(param_1 + 0x120),param_1 + 0x158,param_2);
    if (cVar3 != '\0') goto LAB_1498ca708;
  }
  plVar5 = (longlong *)FUN_14001cc68(0x170);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14bef1870;
  plVar1 = plVar5 + 2;
  memset(plVar1,0,0x160);
  FUN_1498cb28e(plVar1);
  local_50 = plVar1;
  local_48 = plVar5;
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
  plVar1 = local_50;
  lStack_a0 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_98 = 0;
  local_88 = 0;
  local_80 = 0;
  local_6c = 0;
  uStack_64 = 0;
  local_5c = 0;
  local_b8[2] = *(undefined8 *)(param_1 + 0x140);
  local_90 = *(undefined8 *)(param_1 + 0x150);
  local_78 = 3;
  local_70 = 0;
  FUN_1498cac6c(local_120,local_b8);
  FUN_1498cabc4(plVar1,local_120);
  LOCK();
  *(undefined4 *)(plVar1 + 2) = 0xc;
  UNLOCK();
  LOCK();
  *(int *)((longlong)local_50 + 0x94) = *(int *)(param_1 + 0x140) * 6;
  UNLOCK();
  FUN_14468d0d2(param_1,param_2,&local_50);
  if (lStack_a0 != 0) {
    FUN_1400020a8();
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_48 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_1498ca708:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ca73e FUN_1498ca73e body=126 status=ok
// SIG undefined FUN_1498ca73e(void)

void FUN_1498ca73e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14bef0990;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = *param_2;
  lVar1 = param_2[1];
  param_1[0x10] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  param_1[0x11] = *param_3;
  lVar1 = param_3[1];
  param_1[0x12] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1498ca7bc FUN_1498ca7bc body=264 status=ok
// SIG undefined FUN_1498ca7bc(void)

void FUN_1498ca7bc(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  undefined1 *local_40;
  undefined1 **local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  lVar1 = param_1 + 0x18;
  FUN_1498cf862(lVar1,param_4);
  uVar4 = *param_5;
  lVar5 = param_5[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  *(longlong *)(param_1 + 0x70) = lVar5;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  local_40 = &local_41;
  local_38 = &local_40;
  FUN_1498d4fca(lVar1);
  FUN_1498cfe34(lVar1);
  *(undefined4 *)(param_4 + 0x48) = 0;
  if (*(longlong *)(param_4 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145a36c6e(param_4);
  plVar6 = (longlong *)param_5[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ca8c6 FUN_1498ca8c6 body=81 status=ok
// SIG undefined FUN_1498ca8c6(void)

void FUN_1498ca8c6(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  (**(code **)(**(longlong **)(param_1 + 0x100) + 0x20))
            (*(longlong **)(param_1 + 0x100),*(undefined4 *)(param_1 + 0xf0),param_2);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  FUN_14468c25e(param_1,0,0,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001498ca910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 1498ca918 FUN_1498ca918 body=165 status=ok
// SIG undefined FUN_1498ca918(void)

longlong * FUN_1498ca918(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  if (param_1 == param_2) {
    param_1[2] = param_2[2];
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    param_1[2] = param_2[2];
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    param_1[3] = param_2[3];
    param_2[3] = 0;
    *(int *)(param_1 + 4) = (int)param_2[4];
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    param_2[4] = 0;
  }
  lVar1 = param_2[5];
  lVar2 = param_2[6];
  lVar3 = param_2[7];
  lVar4 = param_2[8];
  lVar5 = param_2[9];
  lVar6 = param_2[10];
  uVar7 = *(undefined8 *)((longlong)param_2 + 0x5c);
  *(undefined8 *)((longlong)param_1 + 0x54) = *(undefined8 *)((longlong)param_2 + 0x54);
  *(undefined8 *)((longlong)param_1 + 0x5c) = uVar7;
  param_1[9] = lVar5;
  param_1[10] = lVar6;
  param_1[7] = lVar3;
  param_1[8] = lVar4;
  param_1[5] = lVar1;
  param_1[6] = lVar2;
  return param_1;
}



// FUNCTION 1498ca9be FUN_1498ca9be body=248 status=ok
// SIG undefined FUN_1498ca9be(void)

undefined8 FUN_1498ca9be(int *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = (int)param_2[1];
  uVar7 = (ulonglong)(iVar1 - 1);
  if (iVar1 == 0) {
    uVar7 = 0;
  }
  uVar4 = iVar1 + -1 + (uint)(iVar1 == 0);
  uVar6 = uVar7;
  do {
    uVar6 = uVar6 - 1;
    if ((int)uVar7 < 1) {
      uVar2 = 0;
      goto LAB_1498caa71;
    }
    iVar1 = iswdigit(*(wint_t *)(*param_2 + uVar6 * 2));
    uVar4 = uVar4 - 1;
    uVar3 = (int)uVar7 - 1;
    uVar7 = (ulonglong)uVar3;
  } while (iVar1 == 0);
  uVar7 = (ulonglong)uVar4;
  do {
    iVar1 = iswdigit(*(wint_t *)(*param_2 + uVar7 * 2));
    if (iVar1 == 0) goto LAB_1498caa37;
    uVar7 = uVar7 - 1;
  } while (0 < (int)uVar7 + 1);
  uVar7 = 0xffffffff;
LAB_1498caa37:
  iVar5 = (int)uVar7 + 1;
  uVar2 = 0;
  iVar1 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar1 = 0;
  }
  if (iVar5 < iVar1) {
    FUN_144a63a7c(param_2,&local_48,iVar5,uVar3 - (int)uVar7);
    _Str = local_48;
    if (local_40 == 0) {
      _Str = L"";
    }
    iVar1 = _wtoi(_Str);
    *param_1 = iVar1;
    if (local_48 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    uVar2 = 1;
  }
LAB_1498caa71:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1498caab8 FUN_1498caab8 body=266 status=ok
// SIG undefined FUN_1498caab8(void)

ulonglong FUN_1498caab8(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
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
  local_38 = param_2 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_60 = local_40;
  local_58 = local_38;
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  local_68 = param_2;
  if (iStack_2c < (int)local_38[3]) {
    do {
      uVar1 = FUN_1498cd64a(param_1,*(undefined4 *)(*local_68 + (longlong)iStack_4c * 0x50));
      uVar2 = (ulonglong)uVar1;
      if ((char)uVar1 == '\0') break;
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498cabc4 FUN_1498cabc4 body=167 status=ok
// SIG undefined FUN_1498cabc4(void)

void FUN_1498cabc4(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  FUN_144a787a6(param_1 + 0xc0,param_2);
  *(longlong *)(param_1 + 0xd0) = param_2[2];
  FUN_144a787a6(param_1 + 0xd8,param_2 + 3);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x2c);
  lVar9 = param_2[6];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x34);
  lVar10 = param_2[7];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x3c);
  lVar11 = param_2[8];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x44);
  lVar12 = param_2[9];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x4c);
  lVar13 = param_2[10];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x54);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x54);
  lVar14 = param_2[0xb];
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x5c);
  lVar15 = param_2[0xc];
  *(int *)(param_1 + 0xe8) = (int)param_2[5];
  *(undefined4 *)(param_1 + 0xec) = uVar1;
  *(int *)(param_1 + 0xf0) = (int)lVar9;
  *(undefined4 *)(param_1 + 0xf4) = uVar2;
  *(int *)(param_1 + 0xf8) = (int)lVar10;
  *(undefined4 *)(param_1 + 0xfc) = uVar3;
  *(int *)(param_1 + 0x100) = (int)lVar11;
  *(undefined4 *)(param_1 + 0x104) = uVar4;
  *(int *)(param_1 + 0x108) = (int)lVar12;
  *(undefined4 *)(param_1 + 0x10c) = uVar5;
  *(int *)(param_1 + 0x110) = (int)lVar13;
  *(undefined4 *)(param_1 + 0x114) = uVar6;
  *(undefined4 *)(param_1 + 0x114) = uVar7;
  *(int *)(param_1 + 0x118) = (int)lVar14;
  *(undefined4 *)(param_1 + 0x11c) = uVar8;
  *(int *)(param_1 + 0x120) = (int)lVar15;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498cac6c FUN_1498cac6c body=204 status=ok
// SIG undefined FUN_1498cac6c(void)

undefined8 * FUN_1498cac6c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = param_2[2];
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
  }
  uVar3 = param_2[5];
  uVar4 = param_2[6];
  uVar5 = param_2[7];
  uVar6 = param_2[8];
  uVar7 = param_2[9];
  uVar8 = param_2[10];
  uVar9 = *(undefined8 *)((longlong)param_2 + 0x5c);
  *(undefined8 *)((longlong)param_1 + 0x54) = *(undefined8 *)((longlong)param_2 + 0x54);
  *(undefined8 *)((longlong)param_1 + 0x5c) = uVar9;
  param_1[9] = uVar7;
  param_1[10] = uVar8;
  param_1[7] = uVar5;
  param_1[8] = uVar6;
  param_1[5] = uVar3;
  param_1[6] = uVar4;
  return param_1;
}



// FUNCTION 1498cad38 FUN_1498cad38 body=254 status=ok
// SIG undefined FUN_1498cad38(void)

void FUN_1498cad38(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  local_40 = &local_48;
  local_48 = param_4;
  local_44 = param_3;
  iVar1 = FUN_1498d4a50(param_1 + 0x178);
  if (0 < iVar1) {
    FUN_14468d0d2(param_1,param_4,param_5);
    if (((*(char *)(param_1 + 0x1d2) == '\x01') && (*(int *)(param_1 + 0x1d8) == 0)) &&
       (0 < *(int *)(param_1 + 0x1d4))) {
      *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + -1;
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x100) + 0x18))(*(longlong **)(param_1 + 0x100),param_4);
  iVar1 = *(int *)(param_1 + 0x198);
  *(uint *)(param_1 + 0x198) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x19c) < iVar1 + 1U) {
    FUN_1498d4ba6((longlong *)(param_1 + 400),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 400) + (longlong)iVar1 * 8) = param_2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498cae38 FUN_1498cae38 body=556 status=ok
// SIG undefined FUN_1498cae38(void)

void FUN_1498cae38(longlong *param_1,uint *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong lVar4;
  uint *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_68 [36];
  undefined1 local_44 [4];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar11 = *param_2;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & uVar11) * 4);
    if (iVar10 != -1) {
      do {
        lVar4 = *param_1 + (longlong)iVar10 * 0x10;
        puVar5 = *(uint **)(*param_1 + (longlong)iVar10 * 0x10);
        if (*puVar5 == uVar11) {
          if (lVar4 != 0) {
            uVar8 = *param_3;
            lVar4 = param_3[1];
            if (lVar4 != 0) {
              LOCK();
              *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
              UNLOCK();
            }
            plVar9 = *(longlong **)(puVar5 + 8);
            *(undefined8 *)(puVar5 + 6) = uVar8;
            *(longlong *)(puVar5 + 8) = lVar4;
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
            if (((uint *)param_1[10] == puVar5) &&
               (lVar4 = *(longlong *)((uint *)param_1[10] + 4), lVar4 != 0)) {
              param_1[10] = lVar4;
            }
            if ((uint *)param_1[0xb] != puVar5) {
              lVar4 = *(longlong *)(puVar5 + 4);
              if (*(longlong *)(puVar5 + 2) != 0) {
                *(longlong *)(*(longlong *)(puVar5 + 2) + 0x10) = lVar4;
              }
              puVar3 = puVar5 + 2;
              if (lVar4 != 0) {
                *(undefined8 *)(lVar4 + 8) = *(undefined8 *)puVar3;
              }
              puVar3[0] = 0;
              puVar3[1] = 0;
              puVar5[4] = 0;
              puVar5[5] = 0;
              lVar4 = param_1[0xb];
              *(longlong *)puVar3 = lVar4;
              if (lVar4 != 0) {
                *(uint **)(lVar4 + 0x10) = puVar5;
              }
              param_1[0xb] = (longlong)puVar5;
            }
            goto LAB_1498cb032;
          }
          break;
        }
        iVar10 = *(int *)(lVar4 + 8);
      } while (iVar10 != -1);
    }
  }
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) == (int)param_1[0xc]) &&
     (puVar6 = (undefined4 *)param_1[10], puVar6 != (undefined4 *)0x0)) {
    FUN_1498d4c2c(param_1,*puVar6);
    if ((undefined4 *)param_1[10] == puVar6) {
      param_1[10] = *(longlong *)(puVar6 + 4);
    }
    lVar4 = *(longlong *)(puVar6 + 2);
    if ((undefined4 *)param_1[0xb] == puVar6) {
      param_1[0xb] = lVar4;
    }
    lVar7 = *(longlong *)(puVar6 + 4);
    if (lVar4 != 0) {
      *(longlong *)(lVar4 + 0x10) = lVar7;
    }
    if (lVar7 != 0) {
      *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(puVar6 + 2);
    }
    *(undefined8 *)(puVar6 + 2) = 0;
    *(undefined8 *)(puVar6 + 4) = 0;
    plVar9 = *(longlong **)(puVar6 + 8);
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
    FUN_1400020a8(puVar6);
    uVar11 = *param_2;
  }
  local_40 = (uint *)FUN_14001cc68(0x28,0x10);
  *local_40 = uVar11;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  *(undefined8 *)(local_40 + 6) = *param_3;
  lVar4 = param_3[1];
  *(longlong *)(local_40 + 8) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  lVar4 = param_1[0xb];
  *(longlong *)(local_40 + 2) = lVar4;
  if (lVar4 != 0) {
    *(uint **)(lVar4 + 0x10) = local_40;
  }
  param_1[0xb] = (longlong)local_40;
  if (param_1[10] == 0) {
    param_1[10] = (longlong)local_40;
  }
  FUN_1498d4d4c(param_1,local_44,&local_40);
LAB_1498cb032:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498cb066 FUN_1498cb066 body=183 status=ok
// SIG undefined FUN_1498cb066(void)

longlong FUN_1498cb066(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & *param_2) * 4);
    if (iVar5 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar5 * 0x10);
        puVar2 = *(uint **)(*param_1 + (longlong)iVar5 * 0x10);
        if (*puVar2 == *param_2) {
          if (plVar4 != (longlong *)0x0) {
            if (((uint *)param_1[10] == puVar2) &&
               (lVar3 = *(longlong *)((uint *)param_1[10] + 4), lVar3 != 0)) {
              param_1[10] = lVar3;
            }
            if ((uint *)param_1[0xb] != puVar2) {
              lVar3 = *(longlong *)(puVar2 + 4);
              if (*(longlong *)(puVar2 + 2) != 0) {
                *(longlong *)(*(longlong *)(puVar2 + 2) + 0x10) = lVar3;
              }
              puVar1 = puVar2 + 2;
              if (lVar3 != 0) {
                *(undefined8 *)(lVar3 + 8) = *(undefined8 *)puVar1;
              }
              puVar1[0] = 0;
              puVar1[1] = 0;
              puVar2[4] = 0;
              puVar2[5] = 0;
              lVar3 = param_1[0xb];
              *(longlong *)puVar1 = lVar3;
              if (lVar3 != 0) {
                *(uint **)(lVar3 + 0x10) = puVar2;
              }
              param_1[0xb] = (longlong)puVar2;
            }
            return *plVar4 + 0x18;
          }
          return 0;
        }
        iVar5 = (int)plVar4[1];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1498cb11e FUN_1498cb11e body=368 status=ok
// SIG undefined FUN_1498cb11e(void)

void FUN_1498cb11e(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  
  param_1[0xd] = 0;
  plVar7 = (longlong *)param_1[0xe];
  if (plVar7 != (longlong *)0x0) {
    param_1[0xe] = 0;
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  plVar7 = (longlong *)param_1[0x10];
  bVar4 = true;
  if (plVar7 == (longlong *)0x0) {
LAB_1498cb195:
    plVar7 = (longlong *)0x0;
LAB_1498cb197:
    *param_2 = 0;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 != (longlong *)0x0) {
      param_2[1] = 0;
      LOCK();
      plVar2 = plVar3 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      plVar3 = (longlong *)param_2[1];
      *param_2 = 0;
      if (plVar3 != (longlong *)0x0) {
        param_2[1] = 0;
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
    if (param_1 != (longlong *)0x0) {
      (**(code **)(*param_1 + 0x28))(param_1,1);
    }
    if (bVar4) goto LAB_1498cb23a;
  }
  else {
    iVar6 = (int)plVar7[1];
    do {
      if (iVar6 == 0) goto LAB_1498cb195;
      LOCK();
      iVar5 = (int)plVar7[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    if (param_1[0xf] == 0) {
      bVar4 = false;
      goto LAB_1498cb197;
    }
    FUN_1498cad38(param_1[0xf],param_1,(int)param_1[2],*(undefined4 *)((longlong)param_1 + 0x14),
                  param_2);
  }
  LOCK();
  plVar3 = plVar7 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_1498cb23a:
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001498cb267. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1498cb28e FUN_1498cb28e body=221 status=ok
// SIG undefined FUN_1498cb28e(void)

undefined8 * FUN_1498cb28e(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 3),4000);
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x13),4000);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x10000ea60;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x25),4000);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  return param_1;
}



// FUNCTION 1498cb36c FUN_1498cb36c body=227 status=ok
// SIG undefined FUN_1498cb36c(void)

void FUN_1498cb36c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14bef09c0;
  param_1[1] = &PTR_FUN_14bef0ab0;
  param_1[2] = &PTR_LAB_14bef0ad0;
  param_1[3] = &PTR_LAB_14bef0b50;
  param_1[4] = &PTR_LAB_14bef0c70;
  param_1[5] = &PTR_LAB_14bef0ce0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = param_2;
  param_1[0xf] = 0x8000000000000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = *param_3;
  lVar1 = param_3[1];
  param_1[0x14] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x16] = *param_4;
  lVar1 = param_4[1];
  param_1[0x17] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined2 *)(param_1 + 0x18) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  return;
}



// FUNCTION 1498cb450 FUN_1498cb450 body=230 status=ok
// SIG undefined FUN_1498cb450(void)

void FUN_1498cb450(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bef09c0;
  param_1[1] = &PTR_FUN_14bef0ab0;
  param_1[2] = &PTR_LAB_14bef0ad0;
  param_1[3] = &PTR_LAB_14bef0b50;
  param_1[4] = &PTR_LAB_14bef0c70;
  param_1[5] = &PTR_LAB_14bef0ce0;
  FUN_14468d460();
  plVar3 = (longlong *)param_1[0x17];
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
  plVar3 = (longlong *)param_1[0x14];
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
  plVar3 = (longlong *)param_1[0x11];
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
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498cb536 FUN_1498cb536 body=175 status=ok
// SIG undefined FUN_1498cb536(void)

void FUN_1498cb536(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  local_38 = *param_2;
  plVar2 = (longlong *)param_2[1];
  local_30 = plVar2;
  if (plVar2 == (longlong *)0x0) {
    uVar3 = FUN_1498ce6bc(param_1 + 0x58,&local_38);
  }
  else {
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    uVar3 = FUN_1498ce6bc(param_1 + 0x58);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  FUN_1498ce7ac(param_1,uVar3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001498cb5ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498cb5f2 FUN_1498cb5f2 body=109 status=ok
// SIG undefined FUN_1498cb5f2(void)

undefined8 * FUN_1498cb5f2(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (lVar2 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    iVar1 = *(int *)(lVar2 + 200);
    _Src = *(void **)(lVar2 + 0xc0);
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
    }
  }
  return param_2;
}



// FUNCTION 1498cb660 FUN_1498cb660 body=188 status=ok
// SIG undefined FUN_1498cb660(void)

undefined4 * FUN_1498cb660(longlong param_1,undefined4 *param_2,longlong param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  FUN_1446f57c6(&DAT_14cabc518,&local_30);
  if (local_30 == param_3) {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_1498cb71e(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0xf4));
    }
  }
  else {
    FUN_1446f57c6(&DAT_14cabc528,&local_38);
    if ((local_38 == param_3) && (*(longlong *)(param_1 + 0x80) != 0)) {
      FUN_1498cb838(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0xd4));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498cb71e FUN_1498cb71e body=280 status=ok
// SIG undefined FUN_1498cb71e(void)

undefined4 * FUN_1498cb71e(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  ulonglong *local_d0;
  byte local_ae;
  undefined8 local_48;
  undefined4 *local_40;
  undefined8 local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_2c = param_2;
  memset(&local_d8,0,0x90);
  FUN_144869430(&local_d8);
  local_48 = 0;
  local_d8 = &PTR_FUN_149e1e590;
  local_38 = 0;
  local_40 = param_1 + 2;
  FUN_144a69558(&local_d8,1);
  (*(code *)local_d8[0x1e])(&local_d8,1);
  local_d8 = &PTR_FUN_149e1e330;
  puVar1 = (undefined4 *)*local_d0 + 1;
  if ((undefined4 *)local_d0[1] < puVar1) {
    if ((local_ae & 2) == 0) {
      FUN_144a2420a(&local_d8,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(&local_d8,&local_2c);
    }
  }
  else {
    local_2c = *(undefined4 *)*local_d0;
    *local_d0 = (ulonglong)puVar1;
  }
  *param_1 = 0xe;
  FUN_144a7fc42(&local_d8);
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498cb838 FUN_1498cb838 body=215 status=ok
// SIG undefined FUN_1498cb838(void)

undefined4 * FUN_1498cb838(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_108 [40];
  undefined **local_e0 [18];
  undefined8 local_50;
  undefined4 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_38 = param_2;
  memset(local_e0,0,0x90);
  FUN_144869430(local_e0);
  local_50 = 0;
  local_e0[0] = &PTR_FUN_149e1e590;
  local_40 = 0;
  local_48 = param_1 + 2;
  FUN_144a69558(local_e0,1);
  (*(code *)local_e0[0][0x1e])(local_e0,1);
  local_e0[0] = &PTR_FUN_149e1e330;
  FUN_1402197d0(local_e0,&local_38);
  *param_1 = 0x24;
  FUN_144a7fc42(local_e0);
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498cb924 FUN_1498cb924 body=65 status=ok
// SIG undefined FUN_1498cb924(void)

undefined8 * FUN_1498cb924(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1400020e8(param_2,L"not implemented yet",0x13);
  FUN_1400020e8(param_2,&DAT_149e01f72,1);
  return param_2;
}



// FUNCTION 1498cb96c FUN_1498cb96c body=83 status=ok
// SIG undefined FUN_1498cb96c(void)

undefined8 * FUN_1498cb96c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x60);
  _Src = *(void **)(param_1 + 0x58);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 1498cb9c6 FUN_1498cb9c6 body=3255 status=ok
// SIG undefined FUN_1498cb9c6(void)

ulonglong FUN_1498cb9c6(undefined8 *param_1,undefined8 *param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  void *pvVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  ulonglong *puVar10;
  undefined2 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined1 uVar18;
  code *_Src;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  float fVar23;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8;
  undefined1 *local_1c0;
  undefined1 local_1ad;
  int local_1ac;
  undefined8 *local_1a8;
  undefined4 local_19c;
  ulonglong local_198;
  longlong local_190;
  code *local_188;
  undefined8 *local_180;
  ulonglong local_178;
  longlong *plStack_170;
  longlong lStack_168;
  void *local_160;
  undefined8 local_158;
  void *local_150;
  int local_148;
  undefined4 local_144;
  undefined1 local_140;
  void *local_130;
  int local_128;
  undefined1 local_120 [4];
  float local_11c;
  ulonglong local_118;
  longlong *plStack_110;
  longlong local_108;
  longlong *plStack_100;
  undefined1 local_f8;
  longlong local_e8 [2];
  longlong *local_d8;
  longlong local_c8 [4];
  code *local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  (**(code **)*param_1)();
  if ((*(int *)(param_2 + 1) < 2) || (cVar6 = FUN_144a791f8(param_2,L"img://",6,1), cVar6 == '\0'))
  {
    uVar16 = 0;
    goto LAB_1498cba2b;
  }
  *(undefined4 *)(param_1 + 8) = 4;
  FUN_144a787a6(param_1 + 0xb,param_2);
  if (param_3 == (longlong *)0x0) {
    _Src = (code *)0x0;
LAB_1498cba81:
    plVar9 = (longlong *)FUN_145b15610();
    lVar19 = plVar9[0x22];
    if (lVar19 == 0) {
      (**(code **)(*plVar9 + 1000))(plVar9);
      lVar19 = plVar9[0x22];
    }
    FUN_1498cc67e(lVar19,&local_a8);
    if (_Src != (code *)0x0) {
      FUN_1400020a8(_Src);
    }
    _Src = local_a8;
    iVar21 = (int)plStack_a0;
  }
  else {
    local_178 = 0;
    plStack_170 = (longlong *)0x0;
    (**(code **)(*param_3 + 0x18))(param_3,&local_a8,&DAT_14cc31550,&local_178);
    _Src = local_a8;
    iVar21 = (int)plStack_a0;
    local_a8 = (code *)0x0;
    plStack_a0 = (longlong *)0x0;
    if (local_178 != 0) {
      FUN_1400020a8();
    }
    if (iVar21 < 2) goto LAB_1498cba81;
  }
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  puVar10 = (ulonglong *)FUN_1498cc6df();
  if (param_4 == 0) {
    FUN_1498cc74c();
    uVar8 = 0;
    dVar4 = 0.0;
  }
  else {
    uVar16 = *puVar10;
    iVar7 = FUN_144a788f7(uVar16 & 0xffffffff);
    if (*(int *)(param_4 + 0x38) != *(int *)(param_4 + 100)) {
      lVar19 = param_4 + 0x68;
      if (*(longlong *)(param_4 + 0x70) != 0) {
        lVar19 = *(longlong *)(param_4 + 0x70);
      }
      iVar7 = *(int *)(lVar19 + (ulonglong)
                                (*(int *)(param_4 + 0x78) - 1U & iVar7 + (int)(uVar16 >> 0x20)) * 4)
      ;
      if (iVar7 != -1) {
        do {
          puVar10 = (ulonglong *)(*(longlong *)(param_4 + 0x30) + (longlong)iVar7 * 0x28);
          if (*puVar10 == uVar16) {
            if ((puVar10 + 1 != (ulonglong *)0x0 && puVar10 != (ulonglong *)0x0) &&
               ((int)puVar10[1] == 2)) {
              uVar8 = FUN_146918d3a();
              goto LAB_1498cbbb6;
            }
            break;
          }
          iVar7 = (int)puVar10[4];
        } while (iVar7 != -1);
      }
    }
    uVar8 = 0;
LAB_1498cbbb6:
    puVar10 = (ulonglong *)FUN_1498cc74c();
    uVar16 = *puVar10;
    iVar7 = FUN_144a788f7(uVar16 & 0xffffffff);
    dVar4 = 0.0;
    if (*(int *)(param_4 + 0x38) != *(int *)(param_4 + 100)) {
      lVar19 = param_4 + 0x68;
      if (*(longlong *)(param_4 + 0x70) != 0) {
        lVar19 = *(longlong *)(param_4 + 0x70);
      }
      iVar7 = *(int *)(lVar19 + (ulonglong)
                                (*(int *)(param_4 + 0x78) - 1U & iVar7 + (int)(uVar16 >> 0x20)) * 4)
      ;
      dVar4 = 0.0;
      if (iVar7 != -1) {
        do {
          puVar10 = (ulonglong *)(*(longlong *)(param_4 + 0x30) + (longlong)iVar7 * 0x28);
          if (*puVar10 == uVar16) {
            dVar4 = 0.0;
            if (puVar10 + 1 != (ulonglong *)0x0 && puVar10 != (ulonglong *)0x0) {
              iVar7 = (int)puVar10[1];
              if (iVar7 == 8) {
                dVar4 = (double)FUN_146918e4a();
              }
              else {
                dVar4 = 0.0;
                if (iVar7 == 10) {
                  fVar23 = (float)FUN_146918f70();
                  dVar4 = (double)fVar23;
                }
              }
            }
            break;
          }
          iVar7 = (int)puVar10[4];
          dVar4 = 0.0;
        } while (iVar7 != -1);
      }
    }
  }
  local_1ac = iVar21;
  local_1a8 = param_2;
  if (param_3 == (longlong *)0x0) {
    local_198 = 0;
    local_190 = 0;
    uVar18 = 1;
  }
  else {
    local_19c = uVar8;
    local_188 = _Src;
    local_190 = (**(code **)(*param_3 + 0x20))(param_3,&DAT_14cc31540,0);
    local_198 = (**(code **)(*param_3 + 0x20))(param_3,&DAT_14cc31548,0);
    local_1ad = (**(code **)(*param_3 + 0x30))(param_3,&DAT_14cc31538,1);
    local_a8 = (code *)0x0;
    plStack_a0 = (longlong *)0x0;
    (**(code **)(*param_3 + 8))(param_3,&local_178,&DAT_14cc31558);
    plVar17 = plStack_110;
    plVar9 = plStack_170;
    if (local_178 != 0) {
      if (plStack_170 == (longlong *)0x0) {
        local_118 = local_178;
      }
      else {
        LOCK();
        *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
        UNLOCK();
        local_118 = local_178;
        if (plStack_170 == plStack_110) {
          LOCK();
          plVar17 = plStack_170 + 1;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)*plVar17 == 0) {
            (**(code **)*plStack_170)(plStack_170);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar21 = *piVar1;
            UNLOCK();
joined_r0x0001498cc652:
            if (iVar21 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        else {
          plStack_110 = plStack_170;
          if (plVar17 == (longlong *)0x0) goto LAB_1498cc3dd;
          LOCK();
          plVar9 = plVar17 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar17)(plVar17);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar21 = *piVar1;
            UNLOCK();
            plVar9 = plVar17;
            goto joined_r0x0001498cc652;
          }
        }
        if (local_118 == 0) goto LAB_1498cbcaf;
      }
LAB_1498cc3dd:
      lVar19 = FUN_147814168();
      iVar21 = *(int *)(lVar19 + 0x60);
      if ((longlong)iVar21 != 0) {
        lVar19 = *(longlong *)(lVar19 + 0x58);
        local_180 = (undefined8 *)((longlong)param_1 + 0xc4);
        lVar22 = 0;
        do {
          local_130 = *(void **)(lVar19 + lVar22);
          lVar14 = FUN_14479d2ce(&local_130);
          if ((lVar14 != 0) && (lVar14 = FUN_14780c03e(lVar14), lVar14 != 0)) {
            FUN_147810ecc(lVar14,&local_108);
            plVar17 = plStack_100;
            puVar12 = *(undefined8 **)(local_108 + 0x260);
            plVar9 = *(longlong **)(local_108 + 0x268);
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
              UNLOCK();
            }
            if (plStack_100 != (longlong *)0x0) {
              LOCK();
              plVar2 = plStack_100 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plStack_100)(plStack_100);
                LOCK();
                piVar1 = (int *)((longlong)plVar17 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar17 + 0x10))(plVar17);
                }
              }
            }
            uVar16 = local_118;
            if (puVar12 == param_1 && puVar12 != (undefined8 *)0x0) {
              *local_180 = local_130;
              uVar13 = FUN_14479d2ce();
              FUN_1498c7bc0(uVar16,uVar13);
            }
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              plVar17 = plVar9 + 1;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              if ((int)*plVar17 == 0) {
                (**(code **)*plVar9)(plVar9);
                LOCK();
                piVar1 = (int *)((longlong)plVar9 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar9 + 0x10))(plVar9);
                }
              }
            }
          }
          lVar22 = lVar22 + 8;
        } while ((longlong)iVar21 * 8 != lVar22);
      }
    }
LAB_1498cbcaf:
    plVar9 = plStack_170;
    if (plStack_170 != (longlong *)0x0) {
      LOCK();
      plVar17 = plStack_170 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*plStack_170)(plStack_170);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    plVar9 = plStack_a0;
    _Src = local_188;
    uVar8 = local_19c;
    uVar18 = local_1ad;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      plVar17 = plStack_a0 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*plStack_a0)(plStack_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        uVar8 = local_19c;
        uVar18 = local_1ad;
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          uVar8 = local_19c;
          uVar18 = local_1ad;
        }
      }
    }
  }
  local_11c = (float)dVar4;
  local_120[0] = (undefined1)uVar8;
  local_178 = param_1[0x16];
  plStack_170 = (longlong *)param_1[0x17];
  if (plStack_170 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
    UNLOCK();
  }
  local_108 = param_1[0x13];
  plStack_100 = (longlong *)param_1[0x14];
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_100 + 1) = (int)plStack_100[1] + 1;
    UNLOCK();
  }
  plVar9 = (longlong *)FUN_14001cc68(0x1f8,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14bef18b0;
  pcVar3 = (code *)(plVar9 + 2);
  local_1c0 = local_120;
  local_1c8 = uVar18;
  FUN_14468b20c(pcVar3,&local_108,&local_178,&local_118);
  local_a8 = pcVar3;
  plStack_a0 = plVar9;
  FUN_1498d5702(&local_a8,pcVar3);
  puVar12 = local_1a8;
  iVar21 = local_1ac;
  if (plVar9 == (longlong *)0x0) {
    param_1[0x10] = 0x10;
    plVar17 = (longlong *)param_1[0x11];
    if (plVar17 != (longlong *)0x0) {
      param_1[0x11] = 0;
LAB_1498cc51a:
      LOCK();
      plVar9 = plVar17 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar7 = *piVar1;
        UNLOCK();
joined_r0x0001498cbf3a:
        if (iVar7 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    param_1[0x10] = pcVar3;
    plVar17 = (longlong *)param_1[0x11];
    if (plVar9 == plVar17) {
      LOCK();
      plVar17 = plVar9 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar7 = *piVar1;
        UNLOCK();
        plVar17 = plVar9;
        iVar21 = local_1ac;
        puVar12 = local_1a8;
        goto joined_r0x0001498cbf3a;
      }
    }
    else {
      param_1[0x11] = plVar9;
      if (plVar17 != (longlong *)0x0) goto LAB_1498cc51a;
    }
  }
  plVar9 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar17 = plStack_a0 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  plVar9 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar17 = plStack_100 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  plVar9 = plStack_170;
  if (plStack_170 != (longlong *)0x0) {
    LOCK();
    plVar17 = plStack_170 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*plStack_170)(plStack_170);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  uVar13 = param_1[0x13];
  local_a8 = (code *)param_1[0x10];
  plVar9 = (longlong *)param_1[0x11];
  plStack_a0 = plVar9;
  if (plVar9 == (longlong *)0x0) {
    FUN_1498cc7ba(uVar13,&local_a8);
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    FUN_1498cc7ba(uVar13);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar17 = plVar9 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  iVar7 = *(int *)(puVar12 + 1);
  if (iVar7 == 0) {
    puVar11 = &DAT_149dfb77a;
  }
  else {
    puVar11 = (undefined2 *)*puVar12;
  }
  uVar20 = iVar7 - 1;
  if (iVar7 == 0) {
    uVar20 = 0;
  }
  uVar15 = 6;
  if ((int)uVar20 < 6) {
    uVar15 = uVar20;
  }
  uVar16 = (ulonglong)uVar15;
  if ((int)uVar15 < 1) {
    uVar16 = 0;
  }
  FUN_14006620a(&local_130,puVar11 + uVar16,uVar20 - (int)uVar16);
  local_e8[0] = 0;
  local_d8 = (longlong *)0x0;
  local_178 = local_198 & 0xffffffff | local_190 << 0x20;
  plStack_170 = (longlong *)param_1[0x10];
  lStack_168 = param_1[0x11];
  if (lStack_168 != 0) {
    LOCK();
    *(int *)(lStack_168 + 0xc) = *(int *)(lStack_168 + 0xc) + 1;
    UNLOCK();
  }
  local_160 = (void *)0x0;
  local_158 = CONCAT44(local_158._4_4_,iVar21);
  if (iVar21 == 0) {
    local_158 = 0;
  }
  else {
    FUN_1446dd670(&local_160,iVar21,0);
    memcpy(local_160,_Src,(longlong)iVar21 * 2);
  }
  pvVar5 = local_130;
  local_150 = (void *)0x0;
  local_148 = local_128;
  if ((longlong)local_128 == 0) {
    local_144 = 0;
  }
  else {
    FUN_1446dd670(&local_150,local_128,0);
    memcpy(local_150,pvVar5,(longlong)local_128 * 2);
  }
  local_140 = *(undefined1 *)((longlong)param_1 + 0xac);
  local_a8 = (code *)0x0;
  plVar9 = (longlong *)FUN_14001cc68(0x48,8);
  pvVar5 = local_150;
  *plVar9 = (longlong)&PTR_LAB_14bef18d0;
  plVar9[1] = local_178;
  plVar9[2] = (longlong)plStack_170;
  plVar9[3] = lStack_168;
  plStack_170 = (longlong *)0x0;
  lStack_168 = 0;
  plVar9[4] = (longlong)local_160;
  local_160 = (void *)0x0;
  *(undefined4 *)(plVar9 + 5) = (undefined4)local_158;
  *(undefined4 *)((longlong)plVar9 + 0x2c) = local_158._4_4_;
  local_158 = 0;
  plVar9[6] = 0;
  lVar19 = (longlong)local_148;
  *(int *)(plVar9 + 7) = local_148;
  local_98 = plVar9;
  if (lVar19 == 0) {
    *(undefined4 *)((longlong)plVar9 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(plVar9 + 6,local_148,0);
    memcpy((void *)plVar9[6],pvVar5,lVar19 * 2);
  }
  *(undefined1 *)(plVar9 + 8) = local_140;
  if (plVar9 != (longlong *)&DAT_fffffffffffffff8) {
    local_a8 = FUN_144694cbe;
  }
  FUN_14170b918(&local_108,local_e8);
  plVar9 = plStack_100;
  local_f8 = 1;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_100 + 1) = (int)plStack_100[1] + 1;
    UNLOCK();
  }
  cVar6 = FUN_144a53f06();
  pcVar3 = local_a8;
  plVar17 = DAT_14c8442c0;
  if (cVar6 == '\0') {
    plVar17 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar17 = &local_88;
    }
    uVar13 = (**(code **)(*plVar17 + 8))();
    (*pcVar3)(uVar13);
    *(undefined4 *)(local_108 + 0x80) = 0;
    FUN_140b576f0();
  }
  else {
    puVar12 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar12[1] = 0;
    *puVar12 = TAsyncQueuedWork<void>::vftable;
    puVar12[2] = local_a8;
    puVar12[4] = local_98;
    local_98 = (longlong *)0x0;
    *(undefined4 *)(puVar12 + 8) = local_78;
    *(undefined4 *)((longlong)puVar12 + 0x44) = uStack_74;
    *(undefined4 *)(puVar12 + 9) = uStack_70;
    *(undefined4 *)((longlong)puVar12 + 0x4c) = uStack_6c;
    puVar12[6] = local_88;
    puVar12[7] = uStack_80;
    if (local_a8 != (code *)0x0) {
      local_a8 = (code *)0x0;
    }
    puVar12[10] = local_108;
    puVar12[0xb] = plStack_100;
    local_108 = 0;
    plStack_100 = (longlong *)0x0;
    *(undefined1 *)(puVar12 + 0xc) = 0;
    (**(code **)(*plVar17 + 0x18))(plVar17,puVar12,3);
  }
  plVar17 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_100 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  if (local_a8 != (code *)0x0) {
    plVar17 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar17 = &local_88;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  if (local_e8[0] != 0) {
    plVar17 = local_d8;
    if (local_d8 == (longlong *)0x0) {
      plVar17 = local_c8;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar9 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_14468d726(&local_178);
  if (local_130 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar9 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar17 = plStack_110 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  uVar16 = CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
  if (_Src != (code *)0x0) {
    FUN_1400020a8(_Src);
  }
LAB_1498cba2b:
  if ((local_60 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16 & 0xffffffff;
}



// FUNCTION 1498cc67e FUN_1498cc67e body=97 status=ok
// SIG undefined FUN_1498cc67e(void)

undefined8 * FUN_1498cc67e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *param_2 = 0;
    iVar1 = *(int *)(param_1 + 0x58);
    _Src = *(void **)(param_1 + 0x50);
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 1498cc6df FUN_1498cc6df body=109 status=ok
// SIG undefined FUN_1498cc6df(void)

undefined * FUN_1498cc6df(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc31700) {
    FUN_144b3d300(&DAT_14cc31700);
    if (DAT_14cc31700 == -1) {
      FUN_1446f470e(&DAT_14cc316f8,L"ImgMediaSmartCacheEnabled",1);
      _Init_thread_footer(&DAT_14cc31700);
    }
  }
  return &DAT_14cc316f8;
}



// FUNCTION 1498cc74c FUN_1498cc74c body=109 status=ok
// SIG undefined FUN_1498cc74c(void)

undefined * FUN_1498cc74c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc3170c) {
    FUN_144b3d300(&DAT_14cc3170c);
    if (DAT_14cc3170c == -1) {
      FUN_1446f470e(&DAT_14cc31704,L"ImgMediaSmartCacheTimeToLookAhead",1);
      _Init_thread_footer(&DAT_14cc3170c);
    }
  }
  return &DAT_14cc31704;
}



// FUNCTION 1498cc7ba FUN_1498cc7ba body=120 status=ok
// SIG undefined FUN_1498cc7ba(void)

void FUN_1498cc7ba(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  uVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  iVar1 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x60) = iVar1 + 1U;
  if (*(uint *)(param_1 + 100) < iVar1 + 1U) {
    FUN_1498d6ae0((longlong *)(param_1 + 0x58),iVar1);
  }
  lVar4 = *(longlong *)(param_1 + 0x58);
  *(undefined8 *)(lVar4 + (longlong)iVar1 * 0x10) = uVar2;
  *(longlong *)(lVar4 + 8 + (longlong)iVar1 * 0x10) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x0001498cc81f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 1498cc850 FUN_1498cc850 body=67 status=ok
// SIG undefined FUN_1498cc850(void)

undefined8 FUN_1498cc850(longlong param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (lVar1 == 0) {
LAB_1498cc86c:
    uVar2 = 0;
  }
  else {
    if (param_2 == 1) {
      FUN_1498c9e4a(lVar1,param_3);
    }
    else if (param_2 == 3) {
      FUN_1498ca346(lVar1,param_3);
    }
    else {
      if (param_2 != 2) goto LAB_1498cc86c;
      FUN_1498c9c10(lVar1,param_3);
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1498cc8f0 FUN_1498cc8f0 body=103 status=ok
// SIG undefined FUN_1498cc8f0(void)

undefined8 * FUN_1498cc8f0(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  param_2[1] = 0;
  if ((4 < *(uint *)(param_1 + 0x30)) || ((0x13U >> (*(uint *)(param_1 + 0x30) & 0x1f) & 1) == 0)) {
    local_20 = 1;
    uStack_1c = 0xc7c35000;
    uStack_18 = 1;
    uStack_14 = 0x47c35000;
    FUN_1498cc958(param_2);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498cc958 FUN_1498cc958 body=450 status=ok
// SIG undefined FUN_1498cc958(void)

void FUN_1498cc958(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  float fVar3;
  undefined8 *puVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  iVar7 = (int)param_1[1];
  if (0 < iVar7) {
    uVar8 = 0;
    do {
      puVar9 = (undefined8 *)(*param_1 + (longlong)(int)uVar8 * 0x10);
      cVar2 = FUN_1498d57aa(puVar9,param_2);
      if ((cVar2 != '\0') || (cVar2 = FUN_1498d58a6(puVar9,param_2), cVar2 != '\0')) {
        local_48 = param_2[1];
        local_50 = puVar9[1];
        puVar4 = &local_50;
        if (((char)local_50 != '\x02') && (puVar4 = &local_48, (char)local_48 != '\x02')) {
          fVar3 = (float)((ulonglong)local_50 >> 0x20);
          fVar6 = (float)((ulonglong)local_48 >> 0x20);
          puVar4 = &local_50;
          if (((fVar3 <= fVar6) && (puVar4 = &local_48, fVar6 <= fVar3)) &&
             (puVar4 = &local_50, (char)local_50 != '\x01')) {
            puVar4 = &local_48;
          }
        }
        local_60 = *param_2;
        local_58 = *puVar9;
        puVar9 = &local_58;
        if (((char)local_58 != '\x02') && (puVar9 = &local_60, (char)local_60 != '\x02')) {
          fVar6 = (float)((ulonglong)local_58 >> 0x20);
          fVar3 = (float)((ulonglong)local_60 >> 0x20);
          puVar9 = &local_58;
          if ((fVar3 <= fVar6) &&
             ((puVar9 = &local_60, fVar6 <= fVar3 && (puVar9 = &local_58, (char)local_58 != '\x01'))
             )) {
            puVar9 = &local_60;
          }
        }
        uVar1 = *puVar4;
        *param_2 = *puVar9;
        param_2[1] = uVar1;
        iVar7 = (int)param_1[1];
        iVar5 = ~uVar8 + iVar7;
        if (iVar5 != 0) {
          if (0 < iVar5) {
            iVar5 = 1;
          }
          memmove((void *)((longlong)(int)uVar8 * 0x10 + *param_1),
                  (void *)((longlong)(iVar7 - iVar5) * 0x10 + *param_1),(longlong)iVar5 << 4);
          iVar7 = (int)param_1[1];
        }
        uVar8 = uVar8 - 1;
        *(int *)(param_1 + 1) = iVar7 + -1;
        FUN_1498d59da(param_1);
      }
      uVar8 = uVar8 + 1;
      iVar7 = (int)param_1[1];
    } while ((int)uVar8 < iVar7);
  }
  *(uint *)(param_1 + 1) = iVar7 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
    FUN_1498d5a7c(param_1,iVar7);
  }
  uVar1 = param_2[1];
  puVar9 = (undefined8 *)(*param_1 + (longlong)iVar7 * 0x10);
  *puVar9 = *param_2;
  puVar9[1] = uVar1;
  return;
}



// FUNCTION 1498ccc0c FUN_1498ccc0c body=311 status=ok
// SIG undefined FUN_1498ccc0c(void)

undefined8 FUN_1498ccc0c(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = 1;
  if ((*(longlong *)(param_1 + 0x68) == 0) ||
     ((*(uint *)(param_1 + 0x28) < 5 && ((0x13U >> (*(uint *)(param_1 + 0x28) & 0x1f) & 1) != 0))))
  goto LAB_1498ccc50;
  local_58 = *(undefined4 *)(param_1 + 0x24);
  iVar3 = FUN_14468b790(*(longlong *)(param_1 + 0x68),param_2,param_3,
                        *(undefined1 *)(param_1 + 0x94));
  (**(code **)(**(longlong **)(param_1 + 0x80) + 8))
            (*(longlong **)(param_1 + 0x80),0,0x8000000000000000);
  if (iVar3 != 0) goto LAB_1498ccc50;
  (**(code **)(*(longlong *)*param_3 + 0x60))((longlong *)*param_3,local_50);
  *(undefined8 *)(param_1 + 0x30) = local_50[0];
  if (*(char *)(param_1 + 0x94) == '\0') {
    fVar1 = *(float *)(param_1 + 0x20);
    lVar2 = *(longlong *)(param_1 + 0x68);
    iVar3 = FUN_1498ca01e(lVar2);
    if (0.0 <= fVar1) {
      if (*(int *)(lVar2 + 0xb8) < 1) {
        iVar4 = -1;
      }
      else {
        iVar4 = *(int *)(*(longlong *)(lVar2 + 0xb0) + 8) + -1;
      }
      if (iVar3 == iVar4) goto LAB_1498ccd10;
    }
    else if (iVar3 == 0) {
LAB_1498ccd10:
      (**(code **)**(undefined8 **)(param_1 + 0x58))(*(undefined8 **)(param_1 + 0x58),5);
      *(undefined4 *)(param_1 + 0x28) = 5;
      *(undefined8 *)(param_1 + 0x20) = 0;
      (**(code **)**(undefined8 **)(param_1 + 0x58))(*(undefined8 **)(param_1 + 0x58),7);
    }
  }
  uVar5 = 0;
LAB_1498ccc50:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1498ccd44 FUN_1498ccd44 body=121 status=ok
// SIG undefined FUN_1498ccd44(void)

undefined8 FUN_1498ccd44(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x68);
  if ((lVar1 == 0) ||
     ((*(uint *)(param_1 + 0x28) < 5 && ((0x13U >> (*(uint *)(param_1 + 0x28) & 0x1f) & 1) != 0))))
  {
    uVar2 = 0;
  }
  else {
    (**(code **)(*(longlong *)(param_1 + -8) + 0x30))(param_1 + -8,local_28);
    uVar2 = FUN_1498ca268(lVar1,param_2,*(undefined4 *)(param_1 + 0x24));
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ccdd6 FUN_1498ccdd6 body=31 status=ok
// SIG undefined FUN_1498ccdd6(void)

bool FUN_1498ccdd6(longlong *param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (param_3 == 0) {
    iVar2 = (**(code **)(*param_1 + 8))();
    bVar1 = 0 < iVar2;
  }
  return bVar1;
}



// FUNCTION 1498cce20 FUN_1498cce20 body=215 status=ok
// SIG undefined FUN_1498cce20(void)

longlong * FUN_1498cce20(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(uint *)(param_1 + 0x20) < 5) && ((0x13U >> (*(uint *)(param_1 + 0x20) & 0x1f) & 1) != 0))
     || (param_3 != 6 || param_4 != 0)) {
    plVar2 = (longlong *)FUN_140e82300();
    plVar1 = (longlong *)*plVar2;
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(int *)(param_2 + 1) = (int)plVar2[1];
  }
  else {
    local_30 = L"DefaultVideoTrackName";
    local_28 = 0x15;
    FUN_1446e940c(local_34,&local_30);
    local_30 = L"FImgMediaPlayer";
    local_28 = 0xf;
    FUN_1446e940c(local_38,&local_30);
    FUN_140208bae(param_2,local_38,local_34,L"Video Track");
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ccef8 FUN_1498ccef8 body=27 status=ok
// SIG undefined FUN_1498ccef8(void)

int FUN_1498ccef8(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))();
  return -(uint)(iVar1 == -1);
}



// FUNCTION 1498ccf14 FUN_1498ccf14 body=67 status=ok
// SIG undefined FUN_1498ccf14(void)

undefined8 * FUN_1498ccf14(longlong param_1,undefined8 *param_2,int param_3,int param_4)

{
  if (((*(uint *)(param_1 + 0x20) < 5) && ((0x13U >> (*(uint *)(param_1 + 0x20) & 0x1f) & 1) != 0))
     || (param_3 != 6 || param_4 != 0)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_140056680(param_2,&DAT_14bef0de4);
  }
  return param_2;
}



// FUNCTION 1498ccf58 FUN_1498ccf58 body=67 status=ok
// SIG undefined FUN_1498ccf58(void)

undefined8 * FUN_1498ccf58(longlong param_1,undefined8 *param_2,int param_3,int param_4)

{
  if (((*(uint *)(param_1 + 0x20) < 5) && ((0x13U >> (*(uint *)(param_1 + 0x20) & 0x1f) & 1) != 0))
     || (param_3 != 6 || param_4 != 0)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_140056680(param_2,L"VideoTrack");
  }
  return param_2;
}



// FUNCTION 1498ccf9c FUN_1498ccf9c body=135 status=ok
// SIG undefined FUN_1498ccf9c(void)

ulonglong FUN_1498ccf9c(longlong param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  float fVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  if (((*(uint *)(param_1 + 0x20) < 5) && ((0x13U >> (*(uint *)(param_1 + 0x20) & 0x1f) & 1) != 0))
     || (param_3 != 0 || param_2 != 0)) {
    uVar3 = 0;
  }
  else {
    *param_4 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x140);
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x150);
    fVar2 = (float)(int)uVar1 / (float)(int)((ulonglong)uVar1 >> 0x20);
    *(float *)(param_4 + 1) = fVar2;
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    *(undefined1 *)((longlong)param_4 + 0xc) = 1;
    *(float *)(param_4 + 2) = fVar2;
    *(undefined1 *)((longlong)param_4 + 0x14) = 1;
    *(float *)(param_4 + 3) = fVar2;
    FUN_14020fad6(param_4 + 4,L"Image");
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1498cd072 FUN_1498cd072 body=260 status=ok
// SIG undefined FUN_1498cd072(void)

undefined8 * FUN_1498cd072(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14bef0f10;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xb),4000);
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = *param_2;
  lVar3 = param_2[1];
  param_1[0x1b] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar2 = (longlong *)FUN_145b15610();
  lVar3 = plVar2[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar3 = plVar2[0x22];
  }
  iVar1 = *(int *)(lVar3 + 0x4c);
  if (iVar1 == 0) {
    iVar1 = FUN_144a885dc();
  }
  FUN_1498c6194(iVar1);
  return param_1;
}



// FUNCTION 1498cd176 FUN_1498cd176 body=169 status=ok
// SIG undefined FUN_1498cd176(void)

void FUN_1498cd176(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14bef0f10;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xb);
  EnterCriticalSection(lpCriticalSection);
  FUN_1402226aa(param_1 + 1);
  LeaveCriticalSection(lpCriticalSection);
  plVar2 = (longlong *)param_1[0x1b];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_1498cfa4a(param_1 + 0x10);
  DeleteCriticalSection(lpCriticalSection);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 1);
  return;
}



// FUNCTION 1498cd220 FUN_1498cd220 body=72 status=ok
// SIG undefined FUN_1498cd220(void)

void FUN_1498cd220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  uStack_10 = 0;
  FUN_1498cd26a(param_2,param_3);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498cd26a FUN_1498cd26a body=916 status=ok
// SIG undefined FUN_1498cd26a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1498cd26a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  longlong lVar18;
  undefined1 auVar17 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_118 [32];
  undefined1 local_f8 [104];
  undefined1 local_90 [8];
  longlong local_88 [2];
  int local_74;
  undefined1 local_70 [16];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_14468860a(local_70,param_1);
  cVar3 = FUN_1498c64e4(local_70);
  if (cVar3 != '\0') {
    uVar6 = FUN_14468884a(local_70);
    FUN_14020fad6(param_2,uVar6);
    FUN_1446888cc(local_70,local_88);
    *(longlong *)(param_2 + 0x10) = local_88[0];
    FUN_1498c6240(local_70,local_88,&DAT_14cc31530);
    *(longlong *)(param_2 + 0x28) = local_88[0];
    *(undefined1 *)(param_2 + 0x30) = 0;
    iVar4 = FUN_1498c62c6(local_70);
    *(longlong *)(param_2 + 0x38) = (longlong)iVar4;
    iVar4 = FUN_1446889d8(local_70);
    *(longlong *)(param_2 + 0x40) = (longlong)iVar4;
    *(undefined4 *)(param_2 + 0x60) = 1;
    local_74 = 0;
    FUN_1446f57c6(&DAT_14cc31600,local_90);
    FUN_1400021e4(local_90,local_88);
    FUN_1498c64ec(local_70,local_88,&local_74);
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (local_74 < 1) {
      cVar3 = FUN_144688a36(local_70);
      pwVar8 = L"EXR";
      if (cVar3 != '\0') {
        pwVar8 = L"EXR GPU";
      }
      FUN_14020fad6(param_2 + 0x18,pwVar8);
      cVar3 = FUN_1498c6466(local_70,param_2 + 0x54);
      *(char *)(param_2 + 0x48) = cVar3;
      *(undefined4 *)(param_2 + 0x5c) = 0;
      iVar4 = 0;
      if (cVar3 == '\0') goto LAB_1498cd55b;
LAB_1498cd3c6:
      fVar10 = (float)*(int *)(param_2 + 0x10) / (float)(*(int *)(param_2 + 0x54) + iVar4);
      fVar11 = (float)*(int *)(param_2 + 0x14) / (float)(iVar4 + *(int *)(param_2 + 0x58));
      *(ulonglong *)(param_2 + 0x4c) =
           CONCAT44(-((int)ROUND(-0.5 - (fVar11 + fVar11)) >> 1),
                    -((int)ROUND(-0.5 - (fVar10 + fVar10)) >> 1));
      cVar3 = FUN_1498c6344(local_70);
      if (cVar3 != '\0') {
        uVar5 = FUN_1498c63c2(local_70,param_2 + 0x4c);
        *(uint *)(param_2 + 0x60) = uVar5;
        if (1 < (int)uVar5) {
          lVar7 = (ulonglong)uVar5 - 2;
          uVar9 = *(ulonglong *)(param_2 + 0x38);
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar9;
          auVar14._8_4_ = (int)lVar7;
          auVar14._0_8_ = lVar7;
          auVar14._12_4_ = (int)((ulonglong)lVar7 >> 0x20);
          auVar12._8_4_ = (int)uVar9;
          auVar12._0_8_ = uVar9;
          auVar12._12_4_ = (int)(uVar9 >> 0x20);
          auVar19 = pmovsxbq(in_XMM4,0x201);
          lVar7 = 2;
          auVar20 = pmovsxbq(in_XMM5,0x202);
          do {
            auVar16 = auVar15;
            lVar18 = auVar19._8_8_;
            lVar1 = auVar19._0_8_ * 2;
            lVar2 = lVar18 * 2;
            auVar21._0_8_ = uVar9 >> lVar1;
            auVar21._8_8_ = auVar12._8_8_ >> lVar1;
            auVar17._0_8_ = uVar9 >> lVar2;
            auVar17._8_8_ = auVar12._8_8_ >> lVar2;
            auVar17 = pblendw(auVar17,auVar21,0xf);
            auVar15._0_8_ = auVar17._0_8_ + auVar16._0_8_;
            auVar15._8_8_ = auVar17._8_8_ + auVar16._8_8_;
            auVar19._0_8_ = auVar19._0_8_ + auVar20._0_8_;
            auVar19._8_8_ = lVar18 + auVar20._8_8_;
            lVar1 = (ulonglong)(uVar5 & 0x7ffffffe) + lVar7;
            lVar7 = lVar7 + -2;
          } while (lVar1 != 4);
          lVar7 = -lVar7;
          auVar20._8_4_ = (int)lVar7;
          auVar20._0_8_ = lVar7;
          auVar20._12_4_ = (int)((ulonglong)lVar7 >> 0x20);
          auVar12 = (auVar20 | _DAT_14996b6d0) ^ _DAT_149931e80;
          auVar13._0_8_ = -(ulonglong)(SUB168(auVar14 ^ _DAT_149931e80,0) < auVar12._0_8_);
          auVar13._8_8_ = -(ulonglong)(SUB168(auVar14 ^ _DAT_149931e80,8) < auVar12._8_8_);
          auVar15 = blendvpd(auVar15,auVar16,auVar13);
          *(longlong *)(param_2 + 0x38) = auVar15._8_8_ + auVar15._0_8_;
        }
      }
    }
    else {
      FUN_14020fad6(param_2 + 0x18,L"EXR CUSTOM");
      if ((*(byte *)(param_2 + 0x48) & 1) != 0) {
        iVar4 = *(int *)(param_2 + 0x5c) * 2;
        goto LAB_1498cd3c6;
      }
LAB_1498cd55b:
      *(undefined8 *)(param_2 + 0x54) = *(undefined8 *)(param_2 + 0x10);
      *(undefined1 **)(param_2 + 0x4c) = &DAT_100000001;
    }
    lVar7 = *param_3;
    if (lVar7 != 0) {
      FUN_1498cac6c(local_f8,param_2);
      FUN_1498cabc4(lVar7,local_f8);
    }
    if (*(longlong *)(param_2 + 0x38) != 0) {
      iVar4 = *(int *)(param_2 + 0x14);
      if (*(int *)(param_2 + 0x10) < *(int *)(param_2 + 0x14)) {
        iVar4 = *(int *)(param_2 + 0x10);
      }
      uVar9 = CONCAT71((int7)((ulonglong)param_2 >> 8),0 < iVar4);
      goto LAB_1498cd595;
    }
  }
  uVar9 = 0;
LAB_1498cd595:
  FUN_1446887b6(local_70);
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498cd600 FUN_1498cd600 body=74 status=ok
// SIG undefined FUN_1498cd600(void)

void FUN_1498cd600(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != param_1[2].RecursionCount) {
    FUN_1498d1346(param_1 + 1);
    FUN_1498d148e(param_1 + 1);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498cd625. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 1498cd64a FUN_1498cd64a body=157 status=ok
// SIG undefined FUN_1498cd64a(void)

ulonglong FUN_1498cd64a(LPCRITICAL_SECTION param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  byte bVar2;
  HANDLE *ppvVar3;
  int iVar4;
  byte bVar5;
  undefined7 uVar6;
  
  bVar2 = (byte)param_2;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != param_1[2].RecursionCount) {
    ppvVar3 = &param_1[2].OwningThread;
    if (param_1[2].LockSemaphore != (HANDLE *)0x0) {
      ppvVar3 = param_1[2].LockSemaphore;
    }
    iVar4 = *(int *)((longlong)ppvVar3 + (ulonglong)((int)param_1[2].SpinCount - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = (longlong)param_1[1].DebugInfo + (longlong)iVar4 * 0x50;
        if (*(uint *)((longlong)param_1[1].DebugInfo + (longlong)iVar4 * 0x50) == param_2) {
          if (lVar1 + 8 != 0 && lVar1 != 0) {
            bVar2 = FUN_1498c73ac(lVar1 + 8,param_3);
            uVar6 = (undefined7)((ulonglong)param_3 >> 8);
            bVar5 = 1;
            goto LAB_1498cd669;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x48);
      } while (iVar4 != -1);
    }
  }
  bVar5 = 0;
  uVar6 = 0;
LAB_1498cd669:
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return CONCAT71(uVar6,bVar5 & bVar2) & 0xffffffff;
}



// FUNCTION 1498cd6e8 FUN_1498cd6e8 body=111 status=ok
// SIG undefined FUN_1498cd6e8(void)

void FUN_1498cd6e8(LPCRITICAL_SECTION param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined4 *local_38;
  undefined8 local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = param_2;
  EnterCriticalSection(param_1);
  local_38 = &local_3c;
  local_30 = param_3;
  FUN_1498cfad8(param_1 + 1,local_24);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498cd758 FUN_1498cd758 body=56 status=ok
// SIG undefined FUN_1498cd758(void)

void FUN_1498cd758(longlong param_1,undefined4 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  FUN_144a7cc9e(param_1 + 8,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001498cd789. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return;
}



// FUNCTION 1498cd790 FUN_1498cd790 body=162 status=ok
// SIG undefined FUN_1498cd790(void)

undefined8 * FUN_1498cd790(undefined8 *param_1)

{
  FUN_1498cd072();
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *param_1 = &PTR_FUN_14bef1080;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1e),4000);
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  return param_1;
}



// FUNCTION 1498cd832 FUN_1498cd832 body=546 status=ok
// SIG undefined FUN_1498cd832(void)

longlong * FUN_1498cd832(longlong param_1,longlong *param_2,uint param_3,longlong *param_4)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  longlong *local_68;
  uint local_5c;
  uint *local_58;
  undefined1 *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  local_5c = param_3;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x118));
  plVar8 = (longlong *)(param_1 + 0x140);
  if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x174)) {
    lVar4 = param_1 + 0x178;
    if (*(longlong *)(param_1 + 0x180) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x180);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x188) - 1U & param_3) * 4);
    if (iVar6 != -1) {
      do {
        lVar4 = *plVar8 + (longlong)iVar6 * 0x20;
        if (*(uint *)(*plVar8 + (longlong)iVar6 * 0x20) == param_3) {
          if ((lVar4 != 0) && (lVar4 != -8)) {
            lVar3 = *(longlong *)(lVar4 + 8);
            lVar4 = *(longlong *)(lVar4 + 0x10);
            if (lVar4 == 0) {
              *param_2 = lVar3;
              param_2[1] = 0;
              goto LAB_1498cd9df;
            }
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
            local_68 = (longlong *)param_2[1];
            *param_2 = lVar3;
            param_2[1] = lVar4;
            goto LAB_1498cd9ae;
          }
          break;
        }
        iVar6 = *(int *)(lVar4 + 0x18);
      } while (iVar6 != -1);
    }
  }
  pcVar2 = (code *)*param_4;
  plVar7 = param_4 + 4;
  if ((longlong *)param_4[2] != (longlong *)0x0) {
    plVar7 = (longlong *)param_4[2];
  }
  uVar5 = (**(code **)(*plVar7 + 8))();
  (*pcVar2)(local_70,uVar5);
  local_58 = &local_5c;
  local_50 = local_70;
  FUN_1498d0188(plVar8,&local_44);
  lVar4 = *(longlong *)(*plVar8 + 8 + (longlong)local_44 * 0x20);
  lVar3 = *(longlong *)(*plVar8 + 0x10 + (longlong)local_44 * 0x20);
  if (lVar3 == 0) {
    *param_2 = lVar4;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
    plVar8 = (longlong *)param_2[1];
    *param_2 = lVar4;
    param_2[1] = lVar3;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
LAB_1498cd9ae:
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_68 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
LAB_1498cd9df:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x118));
  (**(code **)(**(longlong **)(*param_2 + 0x20) + 0x20))
            (*(longlong **)(*param_2 + 0x20),0xffffffff,0);
  if (*param_4 != 0) {
    plVar8 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1498cda56 FUN_1498cda56 body=288 status=ok
// SIG undefined FUN_1498cda56(void)

bool FUN_1498cda56(LPCRITICAL_SECTION param_1,uint param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  HANDLE *ppvVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != param_1[2].RecursionCount) {
    ppvVar3 = &param_1[2].OwningThread;
    if (param_1[2].LockSemaphore != (HANDLE *)0x0) {
      ppvVar3 = param_1[2].LockSemaphore;
    }
    iVar1 = *(int *)((longlong)ppvVar3 + (ulonglong)((int)param_1[2].SpinCount - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = (longlong)param_1[1].DebugInfo + (longlong)iVar1 * 0x50;
        if (*(uint *)((longlong)param_1[1].DebugInfo + (longlong)iVar1 * 0x50) == param_2)
        goto LAB_1498cda8c;
        iVar1 = *(int *)(lVar2 + 0x48);
      } while (iVar1 != -1);
    }
  }
  lVar2 = 0;
LAB_1498cda8c:
  lVar4 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  if (lVar4 != 0) {
    FUN_1498c7598(lVar4,&local_48,param_3);
    if (&local_48 == param_4) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_4 != 0) {
        FUN_1400020a8();
      }
      *param_4 = local_48;
      local_48 = 0;
      *(undefined4 *)(param_4 + 1) = local_40;
      *(undefined4 *)((longlong)param_4 + 0xc) = local_3c;
    }
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 != 0;
}



// FUNCTION 1498cdb78 FUN_1498cdb78 body=365 status=ok
// SIG undefined FUN_1498cdb78(void)

undefined8 * FUN_1498cdb78(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x128));
  if (*(longlong *)(param_1 + 0x150) != 0) goto LAB_1498cdba3;
  plVar4 = (longlong *)FUN_14001cc68(0x1f0);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14bef1a30;
  plVar5 = plVar4 + 2;
  memset(plVar5,0,0x1e0);
  FUN_1498d6202(plVar5);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x150) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x158);
    if (plVar5 == (longlong *)0x0) goto LAB_1498cdba3;
    *(undefined8 *)(param_1 + 0x158) = 0;
LAB_1498cdc4c:
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
    if (plVar4 == (longlong *)0x0) goto LAB_1498cdba3;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x150) = plVar5;
    plVar5 = *(longlong **)(param_1 + 0x158);
    if (plVar4 == plVar5) {
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
    else {
      *(longlong **)(param_1 + 0x158) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_1498cdc4c;
    }
  }
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
LAB_1498cdba3:
  *param_2 = *(undefined8 *)(param_1 + 0x150);
  lVar3 = *(longlong *)(param_1 + 0x158);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x128));
  return param_2;
}



// FUNCTION 1498cdce6 FUN_1498cdce6 body=61 status=ok
// SIG undefined FUN_1498cdce6(void)

undefined8 FUN_1498cdce6(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  FUN_1498d0676(param_2,param_1 + 0x30);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return param_2;
}



// FUNCTION 1498cdd24 FUN_1498cdd24 body=218 status=ok
// SIG undefined FUN_1498cdd24(void)

void FUN_1498cdd24(LPCRITICAL_SECTION param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  int iVar3;
  HANDLE *ppvVar4;
  undefined1 auStack_68 [44];
  uint local_3c;
  uint *local_38;
  undefined8 local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = param_2;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != param_1[2].RecursionCount) {
    ppvVar4 = &param_1[2].OwningThread;
    if (param_1[2].LockSemaphore != (HANDLE *)0x0) {
      ppvVar4 = param_1[2].LockSemaphore;
    }
    iVar3 = *(int *)((longlong)ppvVar4 + (ulonglong)((int)param_1[2].SpinCount - 1U & param_2) * 4);
    if (iVar3 != -1) {
      p_Var2 = param_1[1].DebugInfo;
      do {
        lVar1 = (longlong)p_Var2 + (longlong)iVar3 * 0x50;
        if (*(uint *)((longlong)p_Var2 + (longlong)iVar3 * 0x50) == param_2) {
          if (lVar1 + 8 != 0 && lVar1 != 0) {
            FUN_1498c74e4(lVar1 + 8,param_3);
            goto LAB_1498cdd91;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x48);
      } while (iVar3 != -1);
    }
  }
  local_38 = &local_3c;
  local_30 = param_3;
  FUN_1498cfad8(param_1 + 1,local_24);
LAB_1498cdd91:
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498cde00 FUN_1498cde00 body=137 status=ok
// SIG undefined FUN_1498cde00(void)

ulonglong FUN_1498cde00(ulonglong param_1,uint param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x118);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x174)) {
    lVar2 = param_1 + 0x178;
    if (*(longlong *)(param_1 + 0x180) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x180);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x188) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      plVar1 = (longlong *)(param_1 + 0x140);
      do {
        bVar4 = *(uint *)(*plVar1 + (longlong)iVar3 * 0x20) == param_2;
        param_1 = CONCAT71((int7)(param_1 >> 8),bVar4);
        if (bVar4) break;
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + *plVar1 + 0x18);
      } while (iVar3 != -1);
      goto LAB_1498cde2c;
    }
  }
  param_1 = 0;
LAB_1498cde2c:
  LeaveCriticalSection(lpCriticalSection);
  return param_1 & 0xffffffff;
}



// FUNCTION 1498cde8a FUN_1498cde8a body=58 status=ok
// SIG undefined FUN_1498cde8a(void)

void FUN_1498cde8a(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  FUN_1498d0998(param_1 + 0x30,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001498cdebd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 1498cdec4 FUN_1498cdec4 body=199 status=ok
// SIG undefined FUN_1498cdec4(void)

void FUN_1498cdec4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *param_1;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar5 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14bef1ae0;
  uVar6 = FUN_144a3f946();
  puVar5[2] = uVar6;
  *puVar5 = &PTR_FUN_14bef1a70;
  FUN_1498ce002(uVar3,&local_38);
  FUN_1449db362(&local_38);
  plVar4 = (longlong *)param_1[1];
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498cdf8c FUN_1498cdf8c body=117 status=ok
// SIG undefined FUN_1498cdf8c(void)

void FUN_1498cdf8c(longlong *param_1)

{
  FUN_1498d0b14(param_1[0x12],(int)param_1[0x13]);
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1498d0ae5(param_1[0x10],(int)param_1[0x11]);
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498ce002 FUN_1498ce002 body=115 status=ok
// SIG undefined FUN_1498ce002(void)

void FUN_1498ce002(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe0));
  FUN_1498d0b40(param_1 + 0x108,param_2);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x118));
  FUN_1498d0bc4(param_1 + 400,param_1 + 0x140);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x118));
                    /* WARNING: Could not recover jumptable at 0x0001498ce072. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe0));
  return;
}



// FUNCTION 1498ce076 FUN_1498ce076 body=144 status=ok
// SIG undefined FUN_1498ce076(void)

void FUN_1498ce076(longlong *param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  if ((int)param_1[9] != 0) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (longlong)(int)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar4 = iVar3, iVar4 != -1) {
      lVar1 = *param_1;
      iVar3 = *(int *)(lVar1 + 0x10 + (longlong)iVar4 * 0x18);
      if (*(uint *)(lVar1 + (longlong)iVar4 * 0x18) == param_2) {
        do {
          if (*(longlong *)(lVar1 + 8 + (longlong)iVar4 * 0x18) == param_3) {
            FUN_1498d65d8(param_1);
          }
          do {
            iVar4 = iVar3;
            if (iVar4 == -1) {
              return;
            }
            lVar1 = *param_1;
            iVar3 = *(int *)(lVar1 + 0x10 + (longlong)iVar4 * 0x18);
          } while (*(uint *)(lVar1 + (longlong)iVar4 * 0x18) != param_2);
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 1498ce106 FUN_1498ce106 body=378 status=ok
// SIG undefined FUN_1498ce106(void)

undefined4 FUN_1498ce106(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_134;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe0));
  if ((*(int *)(param_1 + 0x110) != 0) && (*(longlong **)(param_1 + 0x108) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x30))();
    if (cVar1 != '\0') {
      FUN_1498cdce6(param_1,&local_190);
      local_d0 = uStack_188;
      local_e0 = *param_3;
      if (local_e0 != 0) {
        LOCK();
        *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
        UNLOCK();
      }
      if (*(int *)(param_1 + 0x110) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x108);
      }
      local_198 = &local_d8;
      local_d8 = local_190;
      local_190 = 0;
      uStack_188 = 0;
      uStack_c8 = uStack_180;
      local_c0 = local_178;
      uStack_b8 = uStack_170;
      local_178 = 0;
      uStack_170 = 0;
      local_b0 = local_168;
      uStack_a8 = uStack_160;
      local_a0 = local_158;
      uStack_98 = uStack_150;
      local_90 = local_148;
      uStack_7c = uStack_134;
      local_70 = local_128;
      uStack_68 = uStack_120;
      local_60 = local_118;
      uVar2 = (undefined4)local_110;
      local_58 = (undefined4)local_110;
      uStack_54 = local_110._4_4_;
      uStack_50 = (undefined4)uStack_108;
      uStack_4c = uStack_108._4_4_;
      local_110 = 0;
      uStack_108 = 0;
      local_48 = (undefined4)local_100;
      uStack_44 = local_100._4_4_;
      uStack_40 = (undefined4)uStack_f8;
      uStack_3c = uStack_f8._4_4_;
      local_100 = 0;
      uStack_f8 = 0;
      local_38 = local_f0;
      uStack_34 = uStack_ec;
      uStack_30 = uStack_e8;
      uStack_2c = uStack_e4;
      uVar2 = (**(code **)(*plVar3 + 0x58))(uVar2,param_2,&local_e0,param_1 + 0x140);
      FUN_1498cdf8c(&local_190);
      goto LAB_1498ce15e;
    }
  }
  uVar2 = 0;
LAB_1498ce15e:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe0));
  if ((local_28 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ce282 FUN_1498ce282 body=156 status=ok
// SIG undefined FUN_1498ce282(void)

bool FUN_1498ce282(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_58 = param_3;
  FUN_14469131a(0,&local_48,param_2);
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
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return local_48 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ce320 FUN_1498ce320 body=118 status=ok
// SIG undefined FUN_1498ce320(void)

ulonglong FUN_1498ce320(LPCRITICAL_SECTION param_1,uint param_2)

{
  HANDLE *ppvVar1;
  int iVar2;
  ulonglong unaff_RBX;
  bool bVar3;
  
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != param_1[2].RecursionCount) {
    ppvVar1 = &param_1[2].OwningThread;
    if (param_1[2].LockSemaphore != (HANDLE *)0x0) {
      ppvVar1 = param_1[2].LockSemaphore;
    }
    iVar2 = *(int *)((longlong)ppvVar1 + (ulonglong)((int)param_1[2].SpinCount - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        bVar3 = *(uint *)((longlong)param_1[1].DebugInfo + (longlong)iVar2 * 0x50) == param_2;
        unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),bVar3);
        if (bVar3) break;
        iVar2 = *(int *)((longlong)param_1[1].DebugInfo + (longlong)iVar2 * 0x50 + 0x48);
      } while (iVar2 != -1);
      goto LAB_1498ce33c;
    }
  }
  unaff_RBX = 0;
LAB_1498ce33c:
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 1498ce396 FUN_1498ce396 body=110 status=ok
// SIG undefined FUN_1498ce396(void)

void FUN_1498ce396(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14bef1110;
  param_1[1] = &PTR_FUN_14bef1138;
  FUN_1498ce404();
  FUN_1498d6a24(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498ce404 FUN_1498ce404 body=152 status=ok
// SIG undefined FUN_1498ce404(void)

void FUN_1498ce404(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1498d6b66(param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_1498d6b66(param_1 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x0001498ce47f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 1498ce49c FUN_1498ce49c body=191 status=ok
// SIG undefined FUN_1498ce49c(void)

void FUN_1498ce49c(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    return;
  }
  plVar2 = (longlong *)FUN_145b15610();
  lVar3 = plVar2[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar3 = plVar2[0x22];
  }
  iVar1 = *(int *)(lVar3 + 0x3c);
  if (iVar1 < 1) {
    iVar1 = FUN_145afebe4();
  }
  plVar2 = (longlong *)FUN_145b15610();
  lVar3 = plVar2[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar3 = plVar2[0x22];
  }
  uVar4 = 0x20000;
  if (0x20000 < *(uint *)(lVar3 + 0x40)) {
    uVar4 = *(uint *)(lVar3 + 0x40);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if (0 < iVar1) {
    uVar5 = iVar1 + 1;
    do {
      FUN_1498ce55c(param_1,uVar4);
      uVar5 = uVar5 - 1;
    } while (1 < uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x0001498ce554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 1498ce55c FUN_1498ce55c body=133 status=ok
// SIG undefined FUN_1498ce55c(void)

void FUN_1498ce55c(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14001cc68(0x38,0x10);
  FUN_1498ce5e2(uVar2,param_1 + 8,param_2);
  iVar1 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_1498d6a5a(param_1 + 0x20,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 8) = uVar2;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_1498d6a5a((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 1498ce5e2 FUN_1498ce5e2 body=217 status=ok
// SIG undefined FUN_1498ce5e2(void)

undefined8 * FUN_1498ce5e2(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14bef1150;
  param_1[1] = &PTR_FUN_14bef1180;
  param_1[2] = param_2;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  uVar1 = FUN_1405d8a54(0);
  param_1[6] = uVar1;
  DAT_14cc316e4 = DAT_14cc316e4 + 1;
  FUN_140002266(&local_38,L"FImgMediaSchedulerThread %d");
  puVar2 = local_38;
  if (local_30 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  local_40 = 0;
  local_48 = 0xffffffffffffffff;
  uVar1 = FUN_1411b1052(param_1,puVar2,param_3,0);
  param_1[5] = uVar1;
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1498ce6bc FUN_1498ce6bc body=240 status=ok
// SIG undefined FUN_1498ce6bc(void)

ulonglong FUN_1498ce6bc(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    param_1 = (longlong *)*param_1;
    plVar10 = param_1;
    do {
      plVar7 = (longlong *)plVar10[1];
      if (plVar7 == (longlong *)0x0) {
LAB_1498ce70a:
        plVar7 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)plVar7[1];
        do {
          if (iVar6 == 0) goto LAB_1498ce70a;
          LOCK();
          iVar5 = (int)plVar7[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar7 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
      }
      lVar8 = *plVar10;
      plVar3 = (longlong *)param_2[1];
      if (plVar3 == (longlong *)0x0) {
LAB_1498ce750:
        lVar9 = 0;
      }
      else {
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) goto LAB_1498ce750;
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
        lVar9 = *param_2;
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
      if (plVar7 == (longlong *)0x0) {
        lVar8 = 0;
      }
      else {
        LOCK();
        plVar3 = plVar7 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      if (lVar8 == lVar9) {
        return (ulonglong)((longlong)plVar10 - (longlong)param_1) >> 4 & 0xffffffff;
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != param_1 + (longlong)(int)lVar4 * 2);
  }
  return 0xffffffff;
}



// FUNCTION 1498ce7ac FUN_1498ce7ac body=65 status=ok
// SIG undefined FUN_1498ce7ac(void)

void FUN_1498ce7ac(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x60))) {
    FUN_1498d6b96(param_1 + 0x58,param_2);
    FUN_1498d6bf6(param_1 + 0x58);
    if (param_2 <= *(int *)(param_1 + 0x68)) {
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
    }
  }
  return;
}



// FUNCTION 1498ce7ee FUN_1498ce7ee body=136 status=ok
// SIG undefined FUN_1498ce7ee(void)

void FUN_1498ce7ee(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if (0 < *(int *)(param_1 + 0x28)) {
    do {
      lVar2 = (*(code *)**(undefined8 **)(param_1 + 8))((undefined8 *)(param_1 + 8),0);
      if (lVar2 == 0) break;
      lVar1 = *(longlong *)
               (*(longlong *)(param_1 + 0x20) + -8 + (longlong)*(int *)(param_1 + 0x28) * 8);
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      FUN_1498d6c92(param_1 + 0x20);
      *(longlong *)(lVar1 + 0x18) = lVar2;
      (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x10))();
    } while (0 < *(int *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x0001498ce86f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 1498ce876 FUN_1498ce876 body=354 status=ok
// SIG undefined FUN_1498ce876(void)

longlong FUN_1498ce876(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong unaff_R14;
  int iVar13;
  bool bVar14;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if ((param_2 == 0) || (cVar7 = FUN_144a53f06(), cVar7 != '\0')) {
    iVar3 = *(int *)(param_1 + 0x58);
    if (0 < iVar3) {
      iVar13 = 1;
      iVar12 = iVar13;
      do {
        while( true ) {
          uVar5 = (longlong)(*(int *)(param_1 + 0x60) + 1) % (longlong)*(int *)(param_1 + 0x58);
          uVar11 = uVar5 & 0xffffffff;
          iVar10 = (int)uVar5;
          *(int *)(param_1 + 0x60) = iVar10;
          lVar9 = *(longlong *)(param_1 + 0x50);
          lVar8 = (longlong)iVar10 * 0x10;
          plVar4 = *(longlong **)(lVar9 + 8 + lVar8);
          if (plVar4 != (longlong *)0x0) break;
LAB_1498ce953:
          iVar10 = iVar3;
          if (iVar3 < iVar13) {
            iVar10 = iVar13;
          }
          FUN_1498ce7ac(param_1 + -8,uVar11);
          bVar14 = iVar12 == iVar10;
          iVar12 = iVar12 + 1;
          if (bVar14) goto LAB_1498ce98b;
        }
        iVar10 = (int)plVar4[1];
        do {
          if (iVar10 == 0) {
            uVar11 = (ulonglong)*(uint *)(param_1 + 0x60);
            goto LAB_1498ce953;
          }
          LOCK();
          iVar6 = (int)plVar4[1];
          bVar14 = iVar10 == iVar6;
          if (bVar14) {
            *(int *)(plVar4 + 1) = iVar10 + 1;
            iVar6 = iVar10;
          }
          iVar10 = iVar6;
          UNLOCK();
        } while (!bVar14);
        if (*(longlong *)(lVar9 + lVar8) == 0) {
          FUN_1498ce7ac(param_1 + -8,*(undefined4 *)(param_1 + 0x60));
          bVar14 = true;
        }
        else {
          lVar9 = FUN_14468bdfe();
          bVar14 = lVar9 == 0;
          if (!bVar14) {
            unaff_R14 = lVar9;
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
        if (!bVar14) goto LAB_1498ce9ae;
        iVar13 = iVar12 + 1;
        bVar14 = iVar12 < iVar3;
        iVar12 = iVar13;
      } while (bVar14);
    }
LAB_1498ce98b:
    if (param_2 == 0) goto LAB_1498ce9ab;
  }
  iVar3 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar3 + 1U) {
    FUN_1498d6a5a((longlong *)(param_1 + 0x18),iVar3);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 8) = param_2;
LAB_1498ce9ab:
  unaff_R14 = 0;
LAB_1498ce9ae:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return unaff_R14;
}



// FUNCTION 1498ce9d8 FUN_1498ce9d8 body=113 status=ok
// SIG undefined FUN_1498ce9d8(void)

void FUN_1498ce9d8(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bef1150;
  param_1[1] = &PTR_FUN_14bef1180;
  LOCK();
  *(undefined1 *)(param_1 + 4) = 1;
  UNLOCK();
  (**(code **)(*(longlong *)param_1[6] + 0x10))();
  (**(code **)(*(longlong *)param_1[5] + 0x20))();
  (**(code **)(*(longlong *)param_1[5] + 0x18))((longlong *)param_1[5],1);
  plVar1 = (longlong *)param_1[5];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  param_1[5] = 0;
  FUN_14018802a(param_1[6]);
  param_1[6] = 0;
  return;
}



// FUNCTION 1498cea50 FUN_1498cea50 body=94 status=ok
// SIG undefined FUN_1498cea50(void)

undefined8 FUN_1498cea50(longlong param_1)

{
  byte bVar1;
  char cVar2;
  undefined8 *puVar3;
  
  bVar1 = *(byte *)(param_1 + 0x20);
  while ((bVar1 & 1) == 0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))
                      (*(longlong **)(param_1 + 0x30),10,0);
    if (cVar2 != '\0') {
      puVar3 = *(undefined8 **)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = 0;
      while (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        puVar3 = (undefined8 *)
                 (**(code **)**(undefined8 **)(param_1 + 0x10))
                           (*(undefined8 **)(param_1 + 0x10),param_1);
      }
    }
    bVar1 = *(byte *)(param_1 + 0x20);
  }
  return 0;
}



// FUNCTION 1498ceaae FUN_1498ceaae body=62 status=ok
// SIG undefined FUN_1498ceaae(void)

void FUN_1498ceaae(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    do {
      (**(code **)*puVar1)(puVar1);
      puVar1 = (undefined8 *)
               (**(code **)**(undefined8 **)(param_1 + 8))
                         (*(undefined8 **)(param_1 + 8),param_1 + -8);
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}



// FUNCTION 1498ceaec FUN_1498ceaec body=64 status=ok
// SIG undefined FUN_1498ceaec(void)

undefined8 * FUN_1498ceaec(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14beef5d0;
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498ceb2c FUN_1498ceb2c body=38 status=ok
// SIG undefined FUN_1498ceb2c(void)

undefined8 FUN_1498ceb2c(undefined8 param_1,int param_2)

{
  FUN_145a36b92();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498ceb52 FUN_1498ceb52 body=45 status=ok
// SIG undefined FUN_1498ceb52(void)

longlong FUN_1498ceb52(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x18;
  FUN_145a36b92(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498ceb84 FUN_1498ceb84 body=38 status=ok
// SIG undefined FUN_1498ceb84(void)

undefined8 FUN_1498ceb84(undefined8 param_1,int param_2)

{
  FUN_145dde220();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498cebaa FUN_1498cebaa body=38 status=ok
// SIG undefined FUN_1498cebaa(void)

undefined8 FUN_1498cebaa(undefined8 param_1,int param_2)

{
  FUN_14468b4f0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498cebd0 FUN_1498cebd0 body=38 status=ok
// SIG undefined FUN_1498cebd0(void)

undefined8 FUN_1498cebd0(undefined8 param_1,int param_2)

{
  FUN_1498d6d2e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498cec00 FUN_1498cec00 body=169 status=ok
// SIG undefined FUN_1498cec00(void)

longlong * FUN_1498cec00(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x40))(param_1,&local_28);
  if (local_20 < 2) {
    plVar2 = (longlong *)FUN_140e82300();
    plVar1 = (longlong *)*plVar2;
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(int *)(param_2 + 1) = (int)plVar2[1];
  }
  else {
    FUN_140c50e86(local_38,&local_28,1);
    FUN_140233b1a(param_2,local_38);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498cecb6 FUN_1498cecb6 body=51 status=ok
// SIG undefined FUN_1498cecb6(void)

undefined8 FUN_1498cecb6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
  return 0;
}



// FUNCTION 1498cecee FUN_1498cecee body=38 status=ok
// SIG undefined FUN_1498cecee(void)

undefined8 FUN_1498cecee(undefined8 param_1,int param_2)

{
  FUN_1498cb450();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498ced18 FUN_1498ced18 body=45 status=ok
// SIG undefined FUN_1498ced18(void)

longlong FUN_1498ced18(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1498cb450(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498ced46 FUN_1498ced46 body=42 status=ok
// SIG undefined FUN_1498ced46(void)

undefined1 * FUN_1498ced46(longlong *param_1,undefined1 *param_2)

{
  (**(code **)(*param_1 + 8))(param_1,param_2 + 0x18);
  *param_2 = 1;
  *(undefined8 *)(param_2 + 8) = 0;
  param_2[0x10] = 0;
  return param_2;
}



// FUNCTION 1498ced74 FUN_1498ced74 body=45 status=ok
// SIG undefined FUN_1498ced74(void)

longlong FUN_1498ced74(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  FUN_1498cb450(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498cee20 FUN_1498cee20 body=45 status=ok
// SIG undefined FUN_1498cee20(void)

longlong FUN_1498cee20(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x18;
  FUN_1498cb450(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498cee52 FUN_1498cee52 body=45 status=ok
// SIG undefined FUN_1498cee52(void)

longlong FUN_1498cee52(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_1498cb450(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498ceeb0 FUN_1498ceeb0 body=45 status=ok
// SIG undefined FUN_1498ceeb0(void)

longlong FUN_1498ceeb0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1498cb450(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498ceee2 FUN_1498ceee2 body=38 status=ok
// SIG undefined FUN_1498ceee2(void)

undefined8 FUN_1498ceee2(undefined8 param_1,int param_2)

{
  FUN_1498cd176();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498cef08 FUN_1498cef08 body=38 status=ok
// SIG undefined FUN_1498cef08(void)

undefined8 FUN_1498cef08(undefined8 param_1,int param_2)

{
  FUN_14468e072();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498cef32 FUN_1498cef32 body=64 status=ok
// SIG undefined FUN_1498cef32(void)

undefined8 * FUN_1498cef32(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14bef10d0;
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498cef72 FUN_1498cef72 body=38 status=ok
// SIG undefined FUN_1498cef72(void)

undefined8 FUN_1498cef72(undefined8 param_1,int param_2)

{
  FUN_1498ce396();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498cef98 FUN_1498cef98 body=45 status=ok
// SIG undefined FUN_1498cef98(void)

longlong FUN_1498cef98(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1498ce396(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498cefc6 FUN_1498cefc6 body=38 status=ok
// SIG undefined FUN_1498cefc6(void)

undefined8 FUN_1498cefc6(undefined8 param_1,int param_2)

{
  FUN_1498ce9d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498cefec FUN_1498cefec body=45 status=ok
// SIG undefined FUN_1498cefec(void)

longlong FUN_1498cefec(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1498ce9d8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498cf01a FUN_1498cf01a body=54 status=ok
// SIG undefined FUN_1498cf01a(void)

longlong FUN_1498cf01a(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498cf050 FUN_1498cf050 body=16 status=ok
// SIG undefined FUN_1498cf050(void)

byte FUN_1498cf050(void)

{
  byte bVar1;
  
  bVar1 = FUN_144729dda();
  return bVar1 ^ 1;
}



// FUNCTION 1498cf060 FUN_1498cf060 body=122 status=ok
// SIG undefined FUN_1498cf060(void)

longlong FUN_1498cf060(longlong param_1,longlong param_2)

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
    FUN_1498cf0da(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1498cf0da FUN_1498cf0da body=309 status=ok
// SIG undefined FUN_1498cf0da(void)

longlong * FUN_1498cf0da(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  if (param_1 != param_2) {
    uVar2 = *(uint *)(param_2 + 1);
    FUN_145a36d50(param_1,(ulonglong)uVar2);
    lVar5 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar5 + uVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar5) < uVar2) {
      FUN_1406fba42(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar2) {
      lVar5 = *param_1;
      lVar4 = *param_2;
      lVar7 = 0;
      uVar8 = 0;
      do {
        plVar6 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar6 = param_2 + 2;
        }
        uVar3 = *(uint *)((longlong)plVar6 + (uVar8 >> 5 & 0x7ffffff) * 4);
        *(undefined4 *)(lVar5 + lVar7) = *(undefined4 *)(lVar4 + lVar7);
        if ((uVar3 >> ((uint)uVar8 & 0x1f) & 1) == 0) {
          *(undefined4 *)(lVar5 + 4 + lVar7) = *(undefined4 *)(lVar4 + 4 + lVar7);
        }
        else {
          puVar1 = (undefined8 *)(lVar5 + 0x18 + lVar7);
          *puVar1 = 0;
          puVar1[1] = 0;
          FUN_144a69486(lVar5 + 8 + lVar7,lVar4 + 8 + lVar7);
          *(undefined8 *)(lVar5 + 0x28 + lVar7) = *(undefined8 *)(lVar4 + 0x28 + lVar7);
          *(undefined8 *)(lVar5 + 0x30 + lVar7) = *(undefined8 *)(lVar4 + 0x30 + lVar7);
          *(undefined8 *)(lVar5 + 0x38 + lVar7) = *(undefined8 *)(lVar4 + 0x38 + lVar7);
          *(undefined1 *)(lVar5 + 0x40 + lVar7) = *(undefined1 *)(lVar4 + 0x40 + lVar7);
          *(undefined8 *)(lVar5 + 0x48 + lVar7) = *(undefined8 *)(lVar4 + 0x48 + lVar7);
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x50;
      } while (uVar2 != uVar8);
    }
  }
  return param_1;
}



// FUNCTION 1498cf258 FUN_1498cf258 body=59 status=ok
// SIG undefined FUN_1498cf258(void)

undefined8 FUN_1498cf258(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498cf2fa FUN_1498cf2fa body=52 status=ok
// SIG undefined FUN_1498cf2fa(void)

void FUN_1498cf2fa(longlong *param_1)

{
  FUN_1498cf32e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498cf32e FUN_1498cf32e body=89 status=ok
// SIG undefined FUN_1498cf32e(void)

void FUN_1498cf32e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1498cf388 FUN_1498cf388 body=52 status=ok
// SIG undefined FUN_1498cf388(void)

void FUN_1498cf388(longlong *param_1)

{
  FUN_1498cf3bc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498cf3bc FUN_1498cf3bc body=89 status=ok
// SIG undefined FUN_1498cf3bc(void)

void FUN_1498cf3bc(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1498cf416 FUN_1498cf416 body=52 status=ok
// SIG undefined FUN_1498cf416(void)

void FUN_1498cf416(longlong *param_1)

{
  FUN_1498cf44a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498cf44a FUN_1498cf44a body=89 status=ok
// SIG undefined FUN_1498cf44a(void)

void FUN_1498cf44a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1498cf4a4 FUN_1498cf4a4 body=172 status=ok
// SIG undefined FUN_1498cf4a4(void)

void FUN_1498cf4a4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x158);
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
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x128));
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  FUN_1498cf746(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001498cf544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1498cf550 FUN_1498cf550 body=502 status=ok
// SIG undefined FUN_1498cf550(void)

undefined8 * FUN_1498cf550(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
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
  undefined4 uVar19;
  undefined4 uVar20;
  
  *param_1 = *param_2;
  lVar3 = param_2[1];
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  FUN_1498cf77c(param_1 + 3,param_2 + 3);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x13),4000);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x1d] = 0x10000ea60;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x25),4000);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x25));
  uVar4 = param_2[0x2a];
  lVar3 = param_2[0x2b];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[0x2b];
  param_1[0x2a] = uVar4;
  param_1[0x2b] = lVar3;
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
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x25));
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x13));
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  param_1[0x1a] = param_2[0x1a];
  FUN_144a787a6(param_1 + 0x1b,param_2 + 0x1b);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xec);
  uVar7 = *(undefined4 *)(param_2 + 0x1e);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0xf4);
  uVar9 = *(undefined4 *)(param_2 + 0x1f);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0xfc);
  uVar11 = *(undefined4 *)(param_2 + 0x20);
  uVar12 = *(undefined4 *)((longlong)param_2 + 0x104);
  uVar13 = *(undefined4 *)(param_2 + 0x21);
  uVar14 = *(undefined4 *)((longlong)param_2 + 0x10c);
  uVar15 = *(undefined4 *)(param_2 + 0x22);
  uVar16 = *(undefined4 *)((longlong)param_2 + 0x114);
  uVar17 = *(undefined4 *)((longlong)param_2 + 0x114);
  uVar18 = *(undefined4 *)(param_2 + 0x23);
  uVar19 = *(undefined4 *)((longlong)param_2 + 0x11c);
  uVar20 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0x1d);
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar6;
  *(undefined4 *)(param_1 + 0x1e) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0xf4) = uVar8;
  *(undefined4 *)(param_1 + 0x1f) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0xfc) = uVar10;
  *(undefined4 *)(param_1 + 0x20) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar12;
  *(undefined4 *)(param_1 + 0x21) = uVar13;
  *(undefined4 *)((longlong)param_1 + 0x10c) = uVar14;
  *(undefined4 *)(param_1 + 0x22) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0x114) = uVar16;
  *(undefined4 *)((longlong)param_1 + 0x114) = uVar17;
  *(undefined4 *)(param_1 + 0x23) = uVar18;
  *(undefined4 *)((longlong)param_1 + 0x11c) = uVar19;
  *(undefined4 *)(param_1 + 0x24) = uVar20;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x13));
  return param_1;
}



// FUNCTION 1498cf746 FUN_1498cf746 body=53 status=ok
// SIG undefined FUN_1498cf746(void)

void FUN_1498cf746(LPCRITICAL_SECTION param_1)

{
  *(undefined4 *)&param_1[2].SpinCount = 0;
  if (param_1[2].LockSemaphore != (HANDLE)0x0) {
    FUN_1400020a8();
  }
  FUN_145a36c6e(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x0001498cf774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(param_1);
  return;
}



// FUNCTION 1498cf77c FUN_1498cf77c body=93 status=ok
// SIG undefined FUN_1498cf77c(void)

LPCRITICAL_SECTION FUN_1498cf77c(LPCRITICAL_SECTION param_1,undefined8 param_2)

{
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].SpinCount = 0;
  *(undefined4 *)&param_1[2].DebugInfo = 0;
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  *(undefined8 *)((longlong)&param_1[2].DebugInfo + 4) = 0xffffffff00000080;
  param_1[2].RecursionCount = 0;
  param_1[2].LockSemaphore = (HANDLE)0x0;
  *(undefined4 *)&param_1[2].SpinCount = 0;
  FUN_1498cf7da(param_1,param_2);
  return param_1;
}



// FUNCTION 1498cf7da FUN_1498cf7da body=88 status=ok
// SIG undefined FUN_1498cf7da(void)

void FUN_1498cf7da(LPCRITICAL_SECTION param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  EnterCriticalSection(param_1);
  FUN_1498cf060(param_1 + 1,param_2 + 1);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498cf822. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498cf832 FUN_1498cf832 body=47 status=ok
// SIG undefined FUN_1498cf832(void)

void FUN_1498cf832(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1498cf862 FUN_1498cf862 body=93 status=ok
// SIG undefined FUN_1498cf862(void)

longlong FUN_1498cf862(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_1498cf8c0(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 1498cf8c0 FUN_1498cf8c0 body=393 status=ok
// SIG undefined FUN_1498cf8c0(void)

longlong * FUN_1498cf8c0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar5 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, uStack_48 != plVar1)) {
      do {
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + 0x18 + (longlong)iVar6 * 0x50) != 0) {
          FUN_1400020a8();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar7));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498cfa4a FUN_1498cfa4a body=52 status=ok
// SIG undefined FUN_1498cfa4a(void)

void FUN_1498cfa4a(longlong *param_1)

{
  FUN_1498cfa7e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498cfa7e FUN_1498cfa7e body=89 status=ok
// SIG undefined FUN_1498cfa7e(void)

void FUN_1498cfa7e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1498cfad8 FUN_1498cfad8 body=332 status=ok
// SIG undefined FUN_1498cfad8(void)

undefined4 * FUN_1498cfad8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1498cfc26(param_1,local_48);
  lVar7 = param_3[1];
  *local_40 = *(uint *)*param_3;
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[8] = 0;
  local_40[9] = 0;
  FUN_144a69486(local_40 + 2,lVar7);
  *(undefined8 *)(local_40 + 10) = *(undefined8 *)(lVar7 + 0x20);
  *(undefined8 *)(local_40 + 0xc) = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(local_40 + 0xe) = *(undefined8 *)(lVar7 + 0x30);
  *(undefined1 *)(local_40 + 0x10) = *(undefined1 *)(lVar7 + 0x38);
  local_40[0x12] = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = *local_40;
  cVar2 = FUN_1498cfd14(param_1,uVar4,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[0x13] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[0x12] =
           *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1498cfe34(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498cfc26 FUN_1498cfc26 body=238 status=ok
// SIG undefined FUN_1498cfc26(void)

int * FUN_1498cfc26(longlong *param_1,int *param_2)

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
      FUN_1406fba42(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x50);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x50) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x50 + *param_1;
  return param_2;
}



// FUNCTION 1498cfd14 FUN_1498cfd14 body=165 status=ok
// SIG undefined FUN_1498cfd14(void)

undefined8 FUN_1498cfd14(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x50);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x50) == *param_3) {
          if (*(longlong *)((longlong)_Dst + 0x18) != 0) {
            FUN_1400020a8();
          }
          memmove(_Dst,param_3,0x48);
          FUN_1498cfdba(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x48);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1498cfdba FUN_1498cfdba body=122 status=ok
// SIG undefined FUN_1498cfdba(void)

void FUN_1498cfdba(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 1498cfe34 FUN_1498cfe34 body=423 status=ok
// SIG undefined FUN_1498cfe34(void)

void FUN_1498cfe34(longlong *param_1)

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



// FUNCTION 1498cffdc FUN_1498cffdc body=122 status=ok
// SIG undefined FUN_1498cffdc(void)

longlong FUN_1498cffdc(longlong param_1,longlong param_2)

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
    FUN_1498d0056(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1498d0056 FUN_1498d0056 body=121 status=ok
// SIG undefined FUN_1498d0056(void)

undefined8 * FUN_1498d0056(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1498d00d0(param_1,uVar1);
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



// FUNCTION 1498d00d0 FUN_1498d00d0 body=128 status=ok
// SIG undefined FUN_1498d00d0(void)

void FUN_1498d00d0(longlong param_1,int param_2)

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



// FUNCTION 1498d0152 FUN_1498d0152 body=54 status=ok
// SIG undefined FUN_1498d0152(void)

void FUN_1498d0152(longlong *param_1)

{
  FUN_1498d00d0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498d0188 FUN_1498d0188 body=303 status=ok
// SIG undefined FUN_1498d0188(void)

undefined4 * FUN_1498d0188(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1498d02b8(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(uint *)*param_3;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  *(undefined8 *)(local_40 + 4) = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_1498d039e(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
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
      local_40[7] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_1498d04ce(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d02b8 FUN_1498d02b8 body=229 status=ok
// SIG undefined FUN_1498d02b8(void)

int * FUN_1498d02b8(longlong *param_1,int *param_2)

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



// FUNCTION 1498d039e FUN_1498d039e body=189 status=ok
// SIG undefined FUN_1498d039e(void)

undefined8 FUN_1498d039e(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
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
        piVar3 = (int *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(piVar3 + 4);
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
          iVar4 = *param_3;
          iVar5 = param_3[1];
          iVar6 = param_3[2];
          iVar7 = param_3[3];
          *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar3 = iVar4;
          piVar3[1] = iVar5;
          piVar3[2] = iVar6;
          piVar3[3] = iVar7;
          FUN_1498d045c(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = piVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 1498d045c FUN_1498d045c body=114 status=ok
// SIG undefined FUN_1498d045c(void)

void FUN_1498d045c(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
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



// FUNCTION 1498d04ce FUN_1498d04ce body=422 status=ok
// SIG undefined FUN_1498d04ce(void)

void FUN_1498d04ce(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 1498d0676 FUN_1498d0676 body=162 status=ok
// SIG undefined FUN_1498d0676(void)

longlong FUN_1498d0676(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_1498cac6c();
  uVar3 = *(undefined4 *)(param_2 + 0x6c);
  uVar4 = *(undefined4 *)(param_2 + 0x70);
  uVar5 = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  *(undefined4 *)(param_1 + 0x70) = uVar4;
  *(undefined4 *)(param_1 + 0x74) = uVar5;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  FUN_1498d0718(param_1 + 0x80,param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x90) = 0;
  iVar1 = *(int *)(param_2 + 0x98);
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  *(int *)(param_1 + 0x98) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  else {
    FUN_1498d086a((undefined8 *)(param_1 + 0x90),iVar1,0);
    FUN_1498d08cc(*(undefined8 *)(param_1 + 0x90),uVar2,iVar1);
  }
  uVar2 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  return param_1;
}



// FUNCTION 1498d0718 FUN_1498d0718 body=77 status=ok
// SIG undefined FUN_1498d0718(void)

undefined8 * FUN_1498d0718(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1498d0766(param_1,iVar1,0);
    FUN_1498d07d9(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1498d0766 FUN_1498d0766 body=115 status=ok
// SIG undefined FUN_1498d0766(void)

void FUN_1498d0766(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1498d07d9 FUN_1498d07d9 body=66 status=ok
// SIG undefined FUN_1498d07d9(void)

void FUN_1498d07d9(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined4 *)(param_1 + -8) = *(undefined4 *)(param_2 + -8);
      FUN_1498d081c(param_1,param_2);
      param_1 = param_1 + 0x18;
      param_2 = param_2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1498d081c FUN_1498d081c body=77 status=ok
// SIG undefined FUN_1498d081c(void)

undefined8 * FUN_1498d081c(undefined8 *param_1,undefined8 *param_2)

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
    FUN_140179af6(param_1,iVar1,0);
    FUN_144882cee(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1498d086a FUN_1498d086a body=98 status=ok
// SIG undefined FUN_1498d086a(void)

void FUN_1498d086a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}


