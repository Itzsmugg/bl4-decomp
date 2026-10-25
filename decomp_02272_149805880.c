// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149805880 FUN_149805880 body=42 status=ok
// SIG undefined FUN_149805880(void)

void FUN_149805880(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1498058b2 FUN_1498058b2 body=96 status=ok
// SIG undefined FUN_1498058b2(void)

undefined8 FUN_1498058b2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e6aaac();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cc280c0,1);
  return uVar3;
}



// FUNCTION 149805912 FUN_149805912 body=52 status=ok
// SIG undefined FUN_149805912(void)

void FUN_149805912(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 149805946 FUN_149805946 body=150 status=ok
// SIG undefined FUN_149805946(void)

void FUN_149805946(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14019a1f8(&local_38,*(undefined8 *)(param_3 + 8));
  lVar2 = *(longlong *)(param_1 + 8);
  *(undefined8 *)(lVar2 + 0x40) = local_28;
  *(undefined4 *)(lVar2 + 0x30) = local_38;
  *(undefined4 *)(lVar2 + 0x34) = uStack_34;
  *(undefined4 *)(lVar2 + 0x38) = uStack_30;
  *(undefined4 *)(lVar2 + 0x3c) = uStack_2c;
  uVar1 = *(uint *)(*(longlong *)(param_1 + 8) + 0x3c);
  uVar3 = 4;
  if ((ulonglong)uVar1 < 10) {
    uVar3 = *(undefined4 *)(&DAT_14be8aa00 + (ulonglong)uVar1 * 4);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x18) = uVar3;
  *(uint *)(*(longlong *)(param_1 + 8) + 0x1c) = (uint)((uVar1 & 0xfffffffd) == 4);
  *(bool *)(*(longlong *)(param_1 + 8) + 0x23) = *(int *)(*(longlong *)(param_1 + 8) + 0x18) != 0;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498059de FUN_1498059de body=321 status=ok
// SIG undefined FUN_1498059de(void)

void FUN_1498059de(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined2 local_24;
  undefined2 local_22;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(undefined4 *)(param_4 + 0x24);
  uVar3 = *(undefined4 *)(param_4 + 0x28);
  uVar4 = *(undefined4 *)(param_4 + 0x2c);
  uVar5 = *(undefined8 *)(param_4 + 0x30);
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(lVar1 + 0xa8) = *(undefined4 *)(param_4 + 0x20);
  *(undefined4 *)(lVar1 + 0xac) = uVar2;
  *(undefined4 *)(lVar1 + 0xb0) = uVar3;
  *(undefined4 *)(lVar1 + 0xb4) = uVar4;
  *(undefined8 *)(lVar1 + 0xb8) = uVar5;
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar1 + 0x23) == '\x01') {
    if (*(char *)(lVar1 + 0x25) == '\0') {
      *(undefined1 *)(lVar1 + 0xa3) = 0x12;
    }
    lVar1 = *(longlong *)(param_4 + 0x20);
    local_1e = *(undefined1 *)(lVar1 + 0x92);
    local_1c = *(undefined1 *)(lVar1 + 0x94);
    local_2c = *(undefined8 *)(lVar1 + 0x84);
    local_24 = *(undefined2 *)(lVar1 + 0x8c);
    local_22 = *(undefined2 *)(lVar1 + 0x8e);
    local_20 = *(undefined1 *)(lVar1 + 0x90);
    local_1f = *(undefined1 *)(lVar1 + 0x91);
    local_48 = *(undefined4 *)(lVar1 + 0x68);
    uStack_44 = *(undefined4 *)(lVar1 + 0x6c);
    uStack_40 = *(undefined4 *)(lVar1 + 0x70);
    uStack_3c = *(undefined4 *)(lVar1 + 0x74);
    local_38 = *(undefined4 *)(lVar1 + 0x78);
    local_30 = *(undefined4 *)(lVar1 + 0x80);
    local_1b = *(undefined1 *)(lVar1 + 0x95);
    local_34 = *(undefined4 *)(lVar1 + 0x7c);
    local_1d = 0x12;
    local_50 = 0x20009;
    uVar5 = FUN_14472bf7a(param_2,&local_50,L"FFX-ColorConversion-Output",1);
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xa8) = uVar5;
    lVar1 = *(longlong *)(param_1 + 8);
    *(undefined8 *)(lVar1 + 0xb0) = *(undefined8 *)(param_4 + 0x28);
    *(undefined8 *)(lVar1 + 0xb8) = *(undefined8 *)(param_4 + 0x30);
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x24) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149805b20 FUN_149805b20 body=177 status=ok
// SIG undefined FUN_149805b20(void)

void FUN_149805b20(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145e6aaac();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cc280c0,param_4);
  local_78 = &DAT_14cc280c0;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_149807a18(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149805c40 FUN_149805c40 body=42 status=ok
// SIG undefined FUN_149805c40(void)

void FUN_149805c40(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 149805c6e FUN_149805c6e body=96 status=ok
// SIG undefined FUN_149805c6e(void)

undefined8 FUN_149805c6e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145db5b3a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cc28148,1);
  return uVar3;
}



// FUNCTION 149805cce FUN_149805cce body=52 status=ok
// SIG undefined FUN_149805cce(void)

void FUN_149805cce(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 149805d02 FUN_149805d02 body=42 status=ok
// SIG undefined FUN_149805d02(void)

void FUN_149805d02(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 149805d34 FUN_149805d34 body=96 status=ok
// SIG undefined FUN_149805d34(void)

undefined8 FUN_149805d34(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ee4a42();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cc28258,1);
  return uVar3;
}



// FUNCTION 149805d94 FUN_149805d94 body=52 status=ok
// SIG undefined FUN_149805d94(void)

void FUN_149805d94(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 149805de8 FUN_149805de8 body=516 status=ok
// SIG undefined FUN_149805de8(void)

void FUN_149805de8(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar1 + 0x21) == '\x01') {
    if ((*(char *)(lVar1 + 0x23) == '\x01') && (*(char *)(lVar1 + 0x26) == '\x01')) {
      lVar3 = *(longlong *)(lVar1 + 0xc0);
      local_16 = *(undefined1 *)(lVar3 + 0x92);
      local_48 = *(undefined8 *)(lVar3 + 0x60);
      local_15 = *(undefined1 *)(lVar3 + 0x93);
      local_14 = *(undefined1 *)(lVar3 + 0x94);
      local_24 = *(undefined8 *)(lVar3 + 0x84);
      local_1c = *(undefined2 *)(lVar3 + 0x8c);
      local_1a = *(undefined2 *)(lVar3 + 0x8e);
      local_18 = *(undefined1 *)(lVar3 + 0x90);
      local_17 = *(undefined1 *)(lVar3 + 0x91);
      local_40 = *(undefined8 *)(lVar3 + 0x68);
      uStack_38 = *(undefined8 *)(lVar3 + 0x70);
      local_30 = *(undefined4 *)(lVar3 + 0x78);
      local_28 = *(undefined4 *)(lVar3 + 0x80);
      local_13 = *(undefined1 *)(lVar3 + 0x95);
      local_2c = *(undefined4 *)(lVar3 + 0x7c);
      if ((*(uint *)(lVar1 + 0x18) | 2) == 3) {
        local_15 = *(undefined1 *)(*(longlong *)(param_4 + 0x20) + 0x93);
      }
    }
    else {
      lVar3 = *(longlong *)(lVar1 + 0xc0);
      local_16 = *(undefined1 *)(lVar3 + 0x92);
      local_48 = *(undefined8 *)(lVar3 + 0x60);
      local_15 = *(undefined1 *)(lVar3 + 0x93);
      local_14 = *(undefined1 *)(lVar3 + 0x94);
      local_24 = *(undefined8 *)(lVar3 + 0x84);
      local_1c = *(undefined2 *)(lVar3 + 0x8c);
      local_1a = *(undefined2 *)(lVar3 + 0x8e);
      local_18 = *(undefined1 *)(lVar3 + 0x90);
      local_17 = *(undefined1 *)(lVar3 + 0x91);
      local_40 = *(undefined8 *)(lVar3 + 0x68);
      uStack_38 = *(undefined8 *)(lVar3 + 0x70);
      local_30 = *(undefined4 *)(lVar3 + 0x78);
      local_28 = *(undefined4 *)(lVar3 + 0x80);
      local_13 = *(undefined1 *)(lVar3 + 0x95);
      local_2c = *(undefined4 *)(lVar3 + 0x7c);
    }
    *(longlong *)(lVar1 + 0xd8) = lVar3;
    *(undefined4 *)(lVar1 + 0xe0) = *(undefined4 *)(lVar1 + 200);
    *(undefined4 *)(lVar1 + 0xe4) = *(undefined4 *)(lVar1 + 0xcc);
    *(undefined4 *)(lVar1 + 0xe8) = *(undefined4 *)(lVar1 + 0xd0);
    *(undefined4 *)(lVar1 + 0xec) = *(undefined4 *)(lVar1 + 0xd4);
    uVar2 = FUN_14472bf7a(param_2,&local_48,L"FFX-RCAS-Output",1);
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xd8) = uVar2;
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149805fee FUN_149805fee body=151 status=ok
// SIG undefined FUN_149805fee(void)

undefined4 * FUN_149805fee(undefined4 *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar1 = *param_3;
  bVar2 = param_3[0xc];
  bVar3 = param_3[0xd];
  bVar4 = param_3[0xe];
  iVar5 = *(int *)(param_3 + 8);
  iVar6 = *(int *)(param_3 + 4);
  FUN_145ee47d4();
  FUN_1448e935e(param_2,&local_38,&DAT_14cc27ca0,
                iVar6 * 2 + ((uint)bVar2 * 2 + (uint)bVar3 * 4 + (uint)bVar4 * 8 + iVar5) * 8 |
                (uint)bVar1);
  FUN_145ee47d4();
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149806086 FUN_149806086 body=151 status=ok
// SIG undefined FUN_149806086(void)

undefined4 * FUN_149806086(undefined4 *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar1 = *param_3;
  bVar2 = param_3[0xc];
  bVar3 = param_3[0xd];
  bVar4 = param_3[0xe];
  iVar5 = *(int *)(param_3 + 8);
  iVar6 = *(int *)(param_3 + 4);
  FUN_145db58cc();
  FUN_1448e935e(param_2,&local_38,&DAT_14cc27b78,
                iVar6 * 2 + ((uint)bVar2 * 2 + (uint)bVar3 * 4 + (uint)bVar4 * 8 + iVar5) * 8 |
                (uint)bVar1);
  FUN_145db58cc();
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980611e FUN_14980611e body=177 status=ok
// SIG undefined FUN_14980611e(void)

void FUN_14980611e(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145db5b3a();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cc28148,param_4);
  local_78 = &DAT_14cc28148;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_149808164(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498061d0 FUN_1498061d0 body=38 status=ok
// SIG undefined FUN_1498061d0(void)

undefined8 FUN_1498061d0(undefined8 param_1,int param_2)

{
  FUN_14463b348();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498061fe FUN_1498061fe body=138 status=ok
// SIG undefined FUN_1498061fe(void)

code * FUN_1498061fe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LensPrincipalPointOffsetScaleInverse";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000006b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e7af7a;
}



// FUNCTION 149806288 FUN_149806288 body=138 status=ok
// SIG undefined FUN_149806288(void)

code * FUN_149806288(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ColorSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000068;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149806312;
}



// FUNCTION 149806312 FUN_149806312 body=132 status=ok
// SIG undefined FUN_149806312(void)

undefined1 * FUN_149806312(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x67;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e7af76;
}



// FUNCTION 149806396 FUN_149806396 body=138 status=ok
// SIG undefined FUN_149806396(void)

code * FUN_149806396(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LensPrincipalPointOffsetScaleInverse";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000008f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14675ee52;
}



// FUNCTION 149806420 FUN_149806420 body=138 status=ok
// SIG undefined FUN_149806420(void)

code * FUN_149806420(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ChromaticAberrationParams";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000008d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f82752;
}



// FUNCTION 1498064aa FUN_1498064aa body=132 status=ok
// SIG undefined FUN_1498064aa(void)

undefined1 * FUN_1498064aa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14980652e;
}



// FUNCTION 149806532 FUN_149806532 body=138 status=ok
// SIG undefined FUN_149806532(void)

code * FUN_149806532(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"samLinearClamp";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000005c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498065bc;
}



// FUNCTION 1498065bc FUN_1498065bc body=138 status=ok
// SIG undefined FUN_1498065bc(void)

code * FUN_1498065bc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VPColor_ViewportMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x680000005b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dbf6d2;
}



// FUNCTION 149806646 FUN_149806646 body=138 status=ok
// SIG undefined FUN_149806646(void)

code * FUN_149806646(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Const3";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000058;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dbf648;
}



// FUNCTION 1498066d0 FUN_1498066d0 body=138 status=ok
// SIG undefined FUN_1498066d0(void)

code * FUN_1498066d0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Const1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000056;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14980675a;
}



// FUNCTION 14980675a FUN_14980675a body=132 status=ok
// SIG undefined FUN_14980675a(void)

undefined1 * FUN_14980675a(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x55;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145dbf644;
}



// FUNCTION 1498067de FUN_1498067de body=73 status=ok
// SIG undefined FUN_1498067de(void)

void FUN_1498067de(longlong param_1,int param_2)

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



// FUNCTION 149806828 FUN_149806828 body=88 status=ok
// SIG undefined FUN_149806828(void)

void FUN_149806828(longlong param_1,int param_2)

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



// FUNCTION 149806880 FUN_149806880 body=40 status=ok
// SIG undefined FUN_149806880(void)

void FUN_149806880(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 1498068b0 FUN_1498068b0 body=132 status=ok
// SIG undefined FUN_1498068b0(void)

void FUN_1498068b0(longlong param_1,int param_2)

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



// FUNCTION 149806936 FUN_149806936 body=31 status=ok
// SIG undefined FUN_149806936(void)

undefined8 FUN_149806936(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149806972 FUN_149806972 body=93 status=ok
// SIG undefined FUN_149806972(void)

void FUN_149806972(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be8a830;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1498069d0 FUN_1498069d0 body=126 status=ok
// SIG undefined FUN_1498069d0(void)

void FUN_1498069d0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be8a830;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149806a3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149806a4e FUN_149806a4e body=21 status=ok
// SIG undefined FUN_149806a4e(void)

undefined8 FUN_149806a4e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 149806a6e FUN_149806a6e body=29 status=ok
// SIG undefined FUN_149806a6e(void)

undefined8 FUN_149806a6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149806a8c FUN_149806a8c body=67 status=ok
// SIG undefined FUN_149806a8c(void)

void FUN_149806a8c(longlong param_1)

{
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x9c0) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x938) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 149806ad0 FUN_149806ad0 body=132 status=ok
// SIG undefined FUN_149806ad0(void)

void FUN_149806ad0(longlong param_1,int param_2)

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



// FUNCTION 149806b56 FUN_149806b56 body=142 status=ok
// SIG undefined FUN_149806b56(void)

void FUN_149806b56(undefined1 (*param_1) [16])

{
  longlong lVar1;
  
  *(undefined1 (*) [16])(*param_1 + 0xc) = (undefined1  [16])0x0;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)(param_1[1] + 0xc) = 0x3f800000;
  *(undefined8 *)(param_1[2] + 4) = 0;
  *(undefined8 *)(param_1[2] + 0xc) = 0x3f800000;
  *(undefined8 *)(param_1[3] + 4) = 0;
  *(undefined8 *)(param_1[3] + 0xc) = 0x3f800000;
  *(undefined8 *)(param_1[4] + 4) = 0;
  *(undefined8 *)(param_1[4] + 0xc) = 0x3f800000;
  *(undefined8 *)(param_1[5] + 4) = 0;
  *(undefined4 *)(param_1[5] + 0xc) = 0x3f800000;
  lVar1 = 0xd0;
  do {
    *(undefined1 (*) [16])(*param_1 + lVar1) = (undefined1  [16])0x0;
    *(undefined4 *)(param_1[1] + lVar1) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 400);
  *(undefined4 *)(param_1[0x1a] + 4) = 0;
  param_1[0x19] = (undefined1  [16])0x0;
  *(undefined2 *)param_1[0x1a] = 0;
  *(undefined4 *)(param_1[0x1a] + 8) = 0xffffffff;
  *(undefined4 *)(param_1[0x1a] + 0xc) = 0xffffffff;
  *(undefined4 *)param_1[0x1b] = 0xffffffff;
  *(undefined4 *)(param_1[0x1b] + 4) = 0xffffffff;
  *(undefined4 *)(param_1[0x1b] + 8) = 0;
  *(undefined2 *)(param_1[0x1b] + 0xc) = 0;
  *(undefined8 *)param_1[0x1c] = 0;
  return;
}



// FUNCTION 149806be4 FUN_149806be4 body=29 status=ok
// SIG undefined FUN_149806be4(void)

undefined8 FUN_149806be4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149806c02 FUN_149806c02 body=220 status=ok
// SIG undefined FUN_149806c02(void)

void FUN_149806c02(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_140069376();
  uVar3 = FUN_14321180c(param_2);
  uVar2 = FUN_144a8b328(uVar3,1);
  uVar5 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar4 = uVar5 + 600;
  if (*(ulonglong *)(param_1 + 0x78) < uVar4) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x260);
    uVar5 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar4 = uVar5 + 600;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar4;
  FUN_149806cde(uVar5,param_2,param_3,uVar2,param_4);
  iVar1 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar1 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 8) = uVar5;
  *(int *)(uVar5 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,uVar5);
  return;
}



// FUNCTION 149806cde FUN_149806cde body=244 status=ok
// SIG undefined FUN_149806cde(void)

undefined8 *
FUN_149806cde(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = DAT_14cc27dd8;
  if (DAT_14cc27dd8 != 0) {
    LOCK();
    *(int *)(DAT_14cc27dd8 + 8) = *(int *)(DAT_14cc27dd8 + 8) + 1;
    UNLOCK();
  }
  local_30 = &DAT_14cc27d90;
  local_48 = 2;
  local_40 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14be8a900;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(undefined4 *)(param_1 + 0x37) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar3;
  param_1[0x39] = *(undefined8 *)(param_5 + 4);
  param_1[0x3a] = *(undefined8 *)(param_5 + 6);
  param_1[0x3b] = *(undefined8 *)(param_5 + 8);
  param_1[0x3c] = *(undefined8 *)(param_5 + 10);
  param_1[0x3d] = *(undefined8 *)(param_5 + 0xc);
  param_1[0x3e] = *(undefined8 *)(param_5 + 0xe);
  puVar5 = (undefined8 *)(param_5 + 0x10);
  puVar6 = param_1 + 0x3f;
  for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_5 + 0x26);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149806dd4 FUN_149806dd4 body=38 status=ok
// SIG undefined FUN_149806dd4(void)

undefined8 FUN_149806dd4(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149806dfa FUN_149806dfa body=253 status=ok
// SIG undefined FUN_149806dfa(void)

void FUN_149806dfa(ulonglong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 5;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x30);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 5;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar3 + 2) = (float)(int)uVar1;
  *(float *)((longlong)puVar3 + 0x14) = (float)(int)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)(puVar3 + 3) = 0;
  *(float *)((longlong)puVar3 + 0x1c) = (float)(int)uVar2;
  *(float *)(puVar3 + 4) = (float)(int)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0x3f800000;
  FUN_1404e1f8e(param_1,param_5);
  FUN_14463e884(param_7);
  FUN_1447a9dbb(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 149806ef8 FUN_149806ef8 body=29 status=ok
// SIG undefined FUN_149806ef8(void)

undefined8 FUN_149806ef8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149806f16 FUN_149806f16 body=344 status=ok
// SIG undefined FUN_149806f16(void)

void FUN_149806f16(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar14 = FUN_14321180c(param_2);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  uVar13 = FUN_144a8b328(uVar14,2);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar15;
  local_50 = DAT_14cc27ee8;
  if (DAT_14cc27ee8 != 0) {
    LOCK();
    *(int *)(DAT_14cc27ee8 + 8) = *(int *)(DAT_14cc27ee8 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cc27ea0;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar13);
  *puVar16 = &PTR_FUN_14be8a920;
  uVar13 = param_4[1];
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
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar13;
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
  FUN_140069100(param_1,puVar16);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149807070 FUN_149807070 body=38 status=ok
// SIG undefined FUN_149807070(void)

undefined8 FUN_149807070(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149807096 FUN_149807096 body=163 status=ok
// SIG undefined FUN_149807096(void)

void FUN_149807096(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_14463eae2();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_14463ebca(param_1,param_2);
  return;
}



// FUNCTION 149807139 FUN_149807139 body=374 status=ok
// SIG undefined FUN_149807139(void)

void FUN_149807139(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1498072b0 FUN_1498072b0 body=126 status=ok
// SIG undefined FUN_1498072b0(void)

void FUN_1498072b0(longlong param_1)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0x3f80000000000000;
  *(undefined1 (*) [16])(param_1 + 0x70) = (undefined1  [16])0x0;
  lVar1 = 0x92;
  do {
    *(undefined1 (*) [16])(param_1 + -0x12 + lVar1) = (undefined1  [16])0x0;
    *(undefined4 *)(param_1 + -2 + lVar1) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x152);
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined1 (*) [16])(param_1 + 0x140) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x15c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x160) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x164) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined2 *)(param_1 + 0x16c) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  return;
}



// FUNCTION 14980732e FUN_14980732e body=29 status=ok
// SIG undefined FUN_14980732e(void)

undefined8 FUN_14980732e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14980734c FUN_14980734c body=220 status=ok
// SIG undefined FUN_14980734c(void)

void FUN_14980734c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_140069376();
  uVar3 = FUN_14321180c(param_2);
  uVar2 = FUN_144a8b328(uVar3,1);
  uVar5 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar4 = uVar5 + 600;
  if (*(ulonglong *)(param_1 + 0x78) < uVar4) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x260);
    uVar5 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar4 = uVar5 + 600;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar4;
  FUN_149807428(uVar5,param_2,param_3,uVar2,param_4);
  iVar1 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar1 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 8) = uVar5;
  *(int *)(uVar5 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,uVar5);
  return;
}



// FUNCTION 149807428 FUN_149807428 body=244 status=ok
// SIG undefined FUN_149807428(void)

undefined8 *
FUN_149807428(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = DAT_14cc28080;
  if (DAT_14cc28080 != 0) {
    LOCK();
    *(int *)(DAT_14cc28080 + 8) = *(int *)(DAT_14cc28080 + 8) + 1;
    UNLOCK();
  }
  local_30 = &DAT_14cc28038;
  local_48 = 2;
  local_40 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14be8a940;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(undefined4 *)(param_1 + 0x37) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar3;
  param_1[0x39] = *(undefined8 *)(param_5 + 4);
  param_1[0x3a] = *(undefined8 *)(param_5 + 6);
  param_1[0x3b] = *(undefined8 *)(param_5 + 8);
  param_1[0x3c] = *(undefined8 *)(param_5 + 10);
  param_1[0x3d] = *(undefined8 *)(param_5 + 0xc);
  param_1[0x3e] = *(undefined8 *)(param_5 + 0xe);
  puVar5 = (undefined8 *)(param_5 + 0x10);
  puVar6 = param_1 + 0x3f;
  for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_5 + 0x26);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980751e FUN_14980751e body=38 status=ok
// SIG undefined FUN_14980751e(void)

undefined8 FUN_14980751e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149807544 FUN_149807544 body=253 status=ok
// SIG undefined FUN_149807544(void)

void FUN_149807544(ulonglong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 5;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x30);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 5;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar3 + 2) = (float)(int)uVar1;
  *(float *)((longlong)puVar3 + 0x14) = (float)(int)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)(puVar3 + 3) = 0;
  *(float *)((longlong)puVar3 + 0x1c) = (float)(int)uVar2;
  *(float *)(puVar3 + 4) = (float)(int)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0x3f800000;
  FUN_1404e1f8e(param_1,param_5);
  FUN_14463ee24(param_7);
  FUN_1447a9dbb(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 149807642 FUN_149807642 body=29 status=ok
// SIG undefined FUN_149807642(void)

undefined8 FUN_149807642(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149807660 FUN_149807660 body=344 status=ok
// SIG undefined FUN_149807660(void)

void FUN_149807660(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar14 = FUN_14321180c(param_2);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  uVar13 = FUN_144a8b328(uVar14,2);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar15;
  local_50 = DAT_14cc27f70;
  if (DAT_14cc27f70 != 0) {
    LOCK();
    *(int *)(DAT_14cc27f70 + 8) = *(int *)(DAT_14cc27f70 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cc27f28;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar13);
  *puVar16 = &PTR_FUN_14be8a960;
  uVar13 = param_4[1];
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
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar13;
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
  FUN_140069100(param_1,puVar16);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498077ba FUN_1498077ba body=38 status=ok
// SIG undefined FUN_1498077ba(void)

undefined8 FUN_1498077ba(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498077e0 FUN_1498077e0 body=163 status=ok
// SIG undefined FUN_1498077e0(void)

void FUN_1498077e0(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_14463f082();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_14463f16a(param_1,param_2);
  return;
}



// FUNCTION 149807883 FUN_149807883 body=374 status=ok
// SIG undefined FUN_149807883(void)

void FUN_149807883(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1498079fa FUN_1498079fa body=29 status=ok
// SIG undefined FUN_1498079fa(void)

undefined8 FUN_1498079fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149807a18 FUN_149807a18 body=344 status=ok
// SIG undefined FUN_149807a18(void)

void FUN_149807a18(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar14 = FUN_14321180c(param_2);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  uVar13 = FUN_144a8b328(uVar14,2);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar15;
  local_50 = DAT_14cc28108;
  if (DAT_14cc28108 != 0) {
    LOCK();
    *(int *)(DAT_14cc28108 + 8) = *(int *)(DAT_14cc28108 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cc280c0;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar13);
  *puVar16 = &PTR_FUN_14be8a980;
  uVar13 = param_4[1];
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
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar13;
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
  FUN_140069100(param_1,puVar16);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149807b72 FUN_149807b72 body=38 status=ok
// SIG undefined FUN_149807b72(void)

undefined8 FUN_149807b72(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149807b98 FUN_149807b98 body=163 status=ok
// SIG undefined FUN_149807b98(void)

void FUN_149807b98(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_14463f39e();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_14463f486(param_1,param_2);
  return;
}



// FUNCTION 149807c3b FUN_149807c3b body=374 status=ok
// SIG undefined FUN_149807c3b(void)

void FUN_149807c3b(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149807db2 FUN_149807db2 body=128 status=ok
// SIG undefined FUN_149807db2(void)

void FUN_149807db2(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0x3f80000000000000;
  param_1[6] = 0;
  param_1[7] = 0x3f80000000000000;
  lVar1 = 0x62;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -2) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x122);
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined1 (*) [16])(param_1 + 0x22) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 300) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined2 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x28] = 0;
  return;
}



// FUNCTION 149807e32 FUN_149807e32 body=29 status=ok
// SIG undefined FUN_149807e32(void)

undefined8 FUN_149807e32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149807e50 FUN_149807e50 body=220 status=ok
// SIG undefined FUN_149807e50(void)

void FUN_149807e50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_140069376();
  uVar3 = FUN_14321180c(param_2);
  uVar2 = FUN_144a8b328(uVar3,1);
  uVar5 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar4 = uVar5 + 600;
  if (*(ulonglong *)(param_1 + 0x78) < uVar4) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x260);
    uVar5 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar4 = uVar5 + 600;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar4;
  FUN_149807f2c(uVar5,param_2,param_3,uVar2,param_4);
  iVar1 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar1 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 8) = uVar5;
  *(int *)(uVar5 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,uVar5);
  return;
}



// FUNCTION 149807f2c FUN_149807f2c body=244 status=ok
// SIG undefined FUN_149807f2c(void)

undefined8 *
FUN_149807f2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = DAT_14cc282a0;
  if (DAT_14cc282a0 != 0) {
    LOCK();
    *(int *)(DAT_14cc282a0 + 8) = *(int *)(DAT_14cc282a0 + 8) + 1;
    UNLOCK();
  }
  local_30 = &DAT_14cc28258;
  local_48 = 2;
  local_40 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14be8a9a0;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(undefined4 *)(param_1 + 0x37) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar3;
  param_1[0x39] = *(undefined8 *)(param_5 + 4);
  param_1[0x3a] = *(undefined8 *)(param_5 + 6);
  param_1[0x3b] = *(undefined8 *)(param_5 + 8);
  param_1[0x3c] = *(undefined8 *)(param_5 + 10);
  param_1[0x3d] = *(undefined8 *)(param_5 + 0xc);
  param_1[0x3e] = *(undefined8 *)(param_5 + 0xe);
  puVar5 = (undefined8 *)(param_5 + 0x10);
  puVar6 = param_1 + 0x3f;
  for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_5 + 0x26);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149808022 FUN_149808022 body=38 status=ok
// SIG undefined FUN_149808022(void)

undefined8 FUN_149808022(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149808048 FUN_149808048 body=253 status=ok
// SIG undefined FUN_149808048(void)

void FUN_149808048(ulonglong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 5;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x30);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 5;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar3 + 2) = (float)(int)uVar1;
  *(float *)((longlong)puVar3 + 0x14) = (float)(int)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)(puVar3 + 3) = 0;
  *(float *)((longlong)puVar3 + 0x1c) = (float)(int)uVar2;
  *(float *)(puVar3 + 4) = (float)(int)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0x3f800000;
  FUN_1404e1f8e(param_1,param_5);
  FUN_14463f6e0(param_7);
  FUN_1447a9dbb(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 149808146 FUN_149808146 body=29 status=ok
// SIG undefined FUN_149808146(void)

undefined8 FUN_149808146(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149808164 FUN_149808164 body=344 status=ok
// SIG undefined FUN_149808164(void)

void FUN_149808164(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar14 = FUN_14321180c(param_2);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  uVar13 = FUN_144a8b328(uVar14,2);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar15;
  local_50 = DAT_14cc28190;
  if (DAT_14cc28190 != 0) {
    LOCK();
    *(int *)(DAT_14cc28190 + 8) = *(int *)(DAT_14cc28190 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cc28148;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar13);
  *puVar16 = &PTR_FUN_14be8a9c0;
  uVar13 = param_4[1];
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
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar13;
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
  FUN_140069100(param_1,puVar16);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498082be FUN_1498082be body=38 status=ok
// SIG undefined FUN_1498082be(void)

undefined8 FUN_1498082be(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498082e4 FUN_1498082e4 body=163 status=ok
// SIG undefined FUN_1498082e4(void)

void FUN_1498082e4(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_14463f93e();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_14463fa26(param_1,param_2);
  return;
}



// FUNCTION 149808387 FUN_149808387 body=374 status=ok
// SIG undefined FUN_149808387(void)

void FUN_149808387(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1498084fe FUN_1498084fe body=36 status=ok
// SIG undefined FUN_1498084fe(void)

undefined8 FUN_1498084fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14980853e FUN_14980853e body=93 status=ok
// SIG undefined FUN_14980853e(void)

void FUN_14980853e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be8aa30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14980859c FUN_14980859c body=123 status=ok
// SIG undefined FUN_14980859c(void)

void FUN_14980859c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be8aa30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149808618 FUN_149808618 body=21 status=ok
// SIG undefined FUN_149808618(void)

undefined8 FUN_149808618(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14980862e FUN_14980862e body=43 status=ok
// SIG undefined FUN_14980862e(void)

undefined8 FUN_14980862e(undefined8 param_1,int param_2)

{
  FUN_145806982();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14980865c FUN_14980865c body=29 status=ok
// SIG undefined FUN_14980865c(void)

void FUN_14980865c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14be8ac40;
  return;
}



// FUNCTION 14980867a FUN_14980867a body=36 status=ok
// SIG undefined FUN_14980867a(void)

undefined8 FUN_14980867a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1498086ba FUN_1498086ba body=93 status=ok
// SIG undefined FUN_1498086ba(void)

void FUN_1498086ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be8abd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149808718 FUN_149808718 body=123 status=ok
// SIG undefined FUN_149808718(void)

void FUN_149808718(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be8abd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498087a0 FUN_1498087a0 body=21 status=ok
// SIG undefined FUN_1498087a0(void)

undefined8 FUN_1498087a0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498087b6 FUN_1498087b6 body=34 status=ok
// SIG undefined FUN_1498087b6(void)

undefined8 FUN_1498087b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1498087d8 FUN_1498087d8 body=40 status=ok
// SIG undefined FUN_1498087d8(void)

undefined8 * FUN_1498087d8(longlong *param_1,undefined8 *param_2,undefined8 param_3,byte param_4)

{
  if ((param_4 & 1) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*param_1 + 0x48))(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 14980881c FUN_14980881c body=62 status=ok
// SIG undefined FUN_14980881c(void)

undefined8 * FUN_14980881c(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14be8c4e8;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 0x28);
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 14980885a FUN_14980885a body=62 status=ok
// SIG undefined FUN_14980885a(void)

undefined8 * FUN_14980885a(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14be8c4f0;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 0x28);
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 149808898 FUN_149808898 body=80 status=ok
// SIG undefined FUN_149808898(void)

undefined8 * FUN_149808898(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14be8c500;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x30);
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 1498088e8 FUN_1498088e8 body=36 status=ok
// SIG undefined FUN_1498088e8(void)

undefined8 FUN_1498088e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 149808928 FUN_149808928 body=93 status=ok
// SIG undefined FUN_149808928(void)

void FUN_149808928(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be8b8f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149808986 FUN_149808986 body=123 status=ok
// SIG undefined FUN_149808986(void)

void FUN_149808986(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be8b8f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149808a02 FUN_149808a02 body=21 status=ok
// SIG undefined FUN_149808a02(void)

undefined8 FUN_149808a02(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 149808a18 FUN_149808a18 body=53 status=ok
// SIG undefined FUN_149808a18(void)

undefined8 * FUN_149808a18(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be8b9b0;
  FUN_145cf3844();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 149808a4e FUN_149808a4e body=120 status=ok
// SIG undefined FUN_149808a4e(void)

undefined8 * FUN_149808a4e(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc28510) {
    FUN_144b3d300(&DAT_14cc28510);
    if (DAT_14cc28510 == -1) {
      FUN_1446f470e(&DAT_14cc28508,L"Pad Speaker Output",1);
      _Init_thread_footer(&DAT_14cc28510);
    }
  }
  *param_2 = DAT_14cc28508;
  return param_2;
}



// FUNCTION 149808acc FUN_149808acc body=46 status=ok
// SIG undefined FUN_149808acc(void)

longlong FUN_149808acc(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_145bb1144();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  return lVar2;
}



// FUNCTION 149808afa FUN_149808afa body=461 status=ok
// SIG undefined FUN_149808afa(void)

undefined8 *
FUN_149808afa(longlong param_1,undefined8 *param_2,ulonglong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  ulonglong *local_50;
  longlong *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)(param_1 + 0xdb8);
  uVar4 = *param_3;
  uVar6 = FUN_144a78877(uVar4 & 0xffffffff,uVar4 >> 0x20);
  if (*(int *)(param_1 + 0xdc0) != *(int *)(param_1 + 0xdec)) {
    lVar7 = param_1 + 0xdf0;
    if (*(longlong *)(param_1 + 0xdf8) != 0) {
      lVar7 = *(longlong *)(param_1 + 0xdf8);
    }
    iVar8 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0xe00) - 1U & uVar6) * 4);
    if (iVar8 != -1) {
      do {
        if (*(ulonglong *)(*plVar3 + (longlong)iVar8 * 0x20) == uVar4) goto LAB_149808c1e;
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + *plVar3 + 0x18);
      } while (iVar8 != -1);
    }
  }
  FUN_149808f36(param_4,&local_68);
  local_60 = local_68;
  local_58 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_58[1] = (longlong)&DAT_100000001;
  *local_58 = (longlong)&PTR_FUN_14be8bb80;
  local_58[2] = local_68;
  local_50 = param_3;
  local_48 = &local_60;
  FUN_149808fa4(plVar3,local_3c);
  plVar5 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_149808c1e:
  uVar4 = *param_3;
  uVar6 = FUN_144a78877(uVar4 & 0xffffffff,uVar4 >> 0x20);
  if (*(int *)(param_1 + 0xdc0) != *(int *)(param_1 + 0xdec)) {
    lVar7 = param_1 + 0xdf0;
    if (*(longlong *)(param_1 + 0xdf8) != 0) {
      lVar7 = *(longlong *)(param_1 + 0xdf8);
    }
    iVar8 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0xe00) - 1U & uVar6) * 4);
    if (iVar8 != -1) {
      do {
        lVar7 = *plVar3 + (longlong)iVar8 * 0x20;
        if (*(ulonglong *)(*plVar3 + (longlong)iVar8 * 0x20) == uVar4) goto LAB_149808c40;
        iVar8 = *(int *)(lVar7 + 0x18);
      } while (iVar8 != -1);
    }
  }
  lVar7 = 0;
LAB_149808c40:
  *param_2 = *(undefined8 *)(lVar7 + 8);
  lVar7 = *(longlong *)(lVar7 + 0x10);
  param_2[1] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149808cc8 FUN_149808cc8 body=441 status=ok
// SIG undefined FUN_149808cc8(void)

undefined8 *
FUN_149808cc8(longlong param_1,undefined8 *param_2,ulonglong *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  ulonglong *local_50;
  longlong *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = *(longlong **)(param_1 + 0x18);
  uVar3 = *param_3;
  uVar5 = FUN_144a78877(uVar3 & 0xffffffff,uVar3 >> 0x20);
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    plVar8 = plVar2 + 7;
    if ((longlong *)plVar2[8] != (longlong *)0x0) {
      plVar8 = (longlong *)plVar2[8];
    }
    iVar7 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar2[9] - 1U & uVar5) * 4);
    if (iVar7 != -1) {
      do {
        if (*(ulonglong *)(*plVar2 + (longlong)iVar7 * 0x20) == uVar3) goto LAB_149808de7;
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + *plVar2 + 0x18);
      } while (iVar7 != -1);
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  FUN_149808f36(param_4,&local_68);
  local_60 = local_68;
  local_58 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_58[1] = (longlong)&DAT_100000001;
  *local_58 = (longlong)&PTR_FUN_14be8bb80;
  local_58[2] = local_68;
  local_50 = param_3;
  local_48 = &local_60;
  FUN_149809a06(uVar4,local_3c);
  plVar2 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_58 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
LAB_149808de7:
  plVar2 = *(longlong **)(param_1 + 0x18);
  uVar3 = *param_3;
  uVar5 = FUN_144a78877(uVar3 & 0xffffffff,uVar3 >> 0x20);
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    plVar8 = plVar2 + 7;
    if ((longlong *)plVar2[8] != (longlong *)0x0) {
      plVar8 = (longlong *)plVar2[8];
    }
    iVar7 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar2[9] - 1U & uVar5) * 4);
    if (iVar7 != -1) {
      do {
        lVar6 = *plVar2 + (longlong)iVar7 * 0x20;
        if (*(ulonglong *)(*plVar2 + (longlong)iVar7 * 0x20) == uVar3) goto LAB_149808e06;
        iVar7 = *(int *)(lVar6 + 0x18);
      } while (iVar7 != -1);
    }
  }
  lVar6 = 0;
LAB_149808e06:
  *param_2 = *(undefined8 *)(lVar6 + 8);
  lVar6 = *(longlong *)(lVar6 + 0x10);
  param_2[1] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149808e82 FUN_149808e82 body=179 status=ok
// SIG undefined FUN_149808e82(void)

undefined8 * FUN_149808e82(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = &PTR_FUN_14a13de90;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 5),4000);
  FUN_145afe678(param_1 + 10);
  *param_1 = &PTR_FUN_14be8bba0;
  param_1[0x1f] = *param_2;
  lVar4 = param_2[1];
  param_1[0x20] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  LOCK();
  piVar1 = (int *)(*param_2 + 0x10);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  *(bool *)(param_1 + 0x21) = iVar3 == 0;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
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
  return param_1;
}



// FUNCTION 149808f36 FUN_149808f36 body=109 status=ok
// SIG undefined FUN_149808f36(void)

undefined8 * FUN_149808f36(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = *param_1;
  puVar3 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  puVar3[1] = param_1[1];
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_14be8ba00;
  *(undefined1 *)(puVar3 + 3) = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x41) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x49) = 0;
  *(undefined ***)((longlong)puVar3 + 0x51) = &PTR_LAB_14be8ba20;
  puVar3[0xf] = uVar2;
  *param_2 = puVar3;
  return param_2;
}



// FUNCTION 149808fa4 FUN_149808fa4 body=320 status=ok
// SIG undefined FUN_149808fa4(void)

undefined4 * FUN_149808fa4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1498090e6(param_1,local_40);
  puVar1 = (ulonglong *)param_3[1];
  uVar7 = *(ulonglong *)*param_3;
  *local_38 = uVar7;
  local_38[1] = *puVar1;
  uVar2 = puVar1[1];
  local_38[2] = uVar2;
  if (uVar2 != 0) {
    LOCK();
    *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
    UNLOCK();
    uVar7 = *local_38;
  }
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar5 = FUN_144a78877(uVar7,uVar7 >> 0x20);
  cVar4 = FUN_1498091cc(param_1,uVar5,local_38,&local_44);
  uVar3 = local_44;
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
      *(uint *)((longlong)local_38 + 0x1c) = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1498092fe(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498090e6 FUN_1498090e6 body=229 status=ok
// SIG undefined FUN_1498090e6(void)

int * FUN_1498090e6(longlong *param_1,int *param_2)

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



// FUNCTION 1498091cc FUN_1498091cc body=191 status=ok
// SIG undefined FUN_1498091cc(void)

undefined8 FUN_1498091cc(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14980928c(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = puVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 14980928c FUN_14980928c body=114 status=ok
// SIG undefined FUN_14980928c(void)

void FUN_14980928c(longlong *param_1,int param_2)

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



// FUNCTION 1498092fe FUN_1498092fe body=451 status=ok
// SIG undefined FUN_1498092fe(void)

void FUN_1498092fe(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x20;
        iVar6 = FUN_144a78877(*(ulonglong *)(lVar3 + lVar10),*(ulonglong *)(lVar3 + lVar10) >> 0x20)
        ;
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1498094c8 FUN_1498094c8 body=751 status=ok
// SIG undefined FUN_1498094c8(void)

void FUN_1498094c8(longlong param_1,int param_2,longlong *param_3,int *param_4)

{
  float fVar1;
  longlong lVar2;
  uint *puVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  
  if ((((int)param_3[1] != 0) && ((*(byte *)(param_1 + 0x18) & 1) != 0)) &&
     (*(longlong *)(param_1 + 0x78) != 0)) {
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x78) + 0xdb0);
    if (param_2 == 1) {
      if (*(char *)(param_1 + 0x50) == '\0') {
        lVar2 = *(longlong *)(param_1 + 0x70);
        uVar5 = *(int *)(lVar2 + 0x1c) - *(int *)(lVar2 + 0x18);
        if ((int)uVar5 < 0) {
          uVar5 = uVar5 + *(int *)(lVar2 + 0x10);
        }
        if (0xff < uVar5) {
          if (*(int *)(param_1 + 0x30) == 2) {
            FUN_144640614();
          }
          else {
            FUN_14464070c();
          }
          if (*(char *)(param_1 + 0x50) == '\0') {
            *(undefined1 *)(param_1 + 0x50) = 1;
            (**(code **)(**(longlong **)(param_1 + 0x48) + 0x98))
                      (*(longlong **)(param_1 + 0x48),0,0);
          }
        }
      }
      if (1 < (int)param_3[1]) {
        lVar2 = *param_3;
        lVar4 = 0;
        do {
          fVar6 = *(float *)(lVar2 + 4 + lVar4 * 8);
          puVar3 = *(uint **)(param_1 + 0x70);
          uVar5 = puVar3[7] + 1 & *puVar3;
          if (uVar5 != puVar3[6]) {
            *(float *)(*(longlong *)(puVar3 + 2) + (longlong)(int)(*puVar3 & puVar3[7]) * 4) =
                 *(float *)(lVar2 + lVar4 * 8) * fVar1;
            LOCK();
            puVar3[7] = uVar5;
            UNLOCK();
          }
          puVar3 = *(uint **)(param_1 + 0x70);
          uVar5 = puVar3[7] + 1 & *puVar3;
          if (uVar5 != puVar3[6]) {
            *(float *)(*(longlong *)(puVar3 + 2) + (longlong)(int)(*puVar3 & puVar3[7]) * 4) =
                 fVar6 * fVar1;
            LOCK();
            puVar3[7] = uVar5;
            UNLOCK();
          }
          lVar4 = lVar4 + 1;
        } while ((int)lVar4 < (int)param_3[1] / 2);
      }
    }
    else if (param_2 == 0) {
      if (*(char *)(param_1 + 0x50) == '\0') {
        lVar2 = *(longlong *)(param_1 + 0x68);
        uVar5 = *(int *)(lVar2 + 0x1c) - *(int *)(lVar2 + 0x18);
        if ((int)uVar5 < 0) {
          uVar5 = uVar5 + *(int *)(lVar2 + 0x10);
        }
        if (0xff < uVar5) {
          if (*(int *)(param_1 + 0x30) == 2) {
            FUN_144640614();
          }
          else {
            FUN_14464070c();
          }
          if (*(char *)(param_1 + 0x50) == '\0') {
            *(undefined1 *)(param_1 + 0x50) = 1;
            (**(code **)(**(longlong **)(param_1 + 0x48) + 0x98))
                      (*(longlong **)(param_1 + 0x48),0,0);
          }
        }
      }
      if (*param_4 == 1) {
        if (0 < (int)param_3[1]) {
          lVar2 = *param_3;
          lVar4 = 0;
          do {
            puVar3 = *(uint **)(param_1 + 0x68);
            fVar6 = *(float *)(lVar2 + lVar4 * 4) * fVar1;
            uVar5 = puVar3[7] + 1 & *puVar3;
            if (uVar5 != puVar3[6]) {
              *(float *)(*(longlong *)(puVar3 + 2) + (longlong)(int)(*puVar3 & puVar3[7]) * 4) =
                   fVar6;
              LOCK();
              puVar3[7] = uVar5;
              UNLOCK();
            }
            puVar3 = *(uint **)(param_1 + 0x68);
            uVar5 = puVar3[7] + 1 & *puVar3;
            if (uVar5 != puVar3[6]) {
              *(float *)(*(longlong *)(puVar3 + 2) + (longlong)(int)(*puVar3 & puVar3[7]) * 4) =
                   fVar6;
              LOCK();
              puVar3[7] = uVar5;
              UNLOCK();
            }
            lVar4 = lVar4 + 1;
          } while ((int)lVar4 < (int)param_3[1]);
        }
      }
      else if (1 < (int)param_3[1]) {
        lVar2 = *param_3;
        lVar4 = 0;
        do {
          fVar6 = *(float *)(lVar2 + 4 + lVar4 * 8);
          puVar3 = *(uint **)(param_1 + 0x68);
          uVar5 = puVar3[7] + 1 & *puVar3;
          if (uVar5 != puVar3[6]) {
            *(float *)(*(longlong *)(puVar3 + 2) + (longlong)(int)(*puVar3 & puVar3[7]) * 4) =
                 *(float *)(lVar2 + lVar4 * 8) * fVar1;
            LOCK();
            puVar3[7] = uVar5;
            UNLOCK();
          }
          puVar3 = *(uint **)(param_1 + 0x68);
          uVar5 = puVar3[7] + 1 & *puVar3;
          if (uVar5 != puVar3[6]) {
            *(float *)(*(longlong *)(puVar3 + 2) + (longlong)(int)(*puVar3 & puVar3[7]) * 4) =
                 fVar6 * fVar1;
            LOCK();
            puVar3[7] = uVar5;
            UNLOCK();
          }
          lVar4 = lVar4 + 1;
        } while ((int)lVar4 < (int)param_3[1] / 2);
      }
    }
  }
  return;
}



// FUNCTION 1498097b8 FUN_1498097b8 body=67 status=ok
// SIG undefined FUN_1498097b8(void)

undefined8 * FUN_1498097b8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be8ba00;
  FUN_149809946();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 14980981a FUN_14980981a body=190 status=ok
// SIG undefined FUN_14980981a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_14980981a(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 auStack_2058 [40];
  undefined2 *local_2030;
  int local_2028;
  undefined4 local_201c;
  undefined1 local_2018 [8192];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_2058;
  local_201c = 0x2004;
  iVar1 = FUN_144d70520(*(undefined4 *)(param_1 + 0x318 + (longlong)param_3 * 0x278));
  if (iVar1 == 0) {
    FUN_140056680(&local_2030,local_2018);
    puVar2 = local_2030;
    if (local_2028 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140002266(param_2,
                  L"SYSTEM\\CurrentControlSet\\Control\\DeviceContainers\\%s\\BaseContainers\\%s",
                  puVar2,puVar2);
    if (local_2030 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_2058) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1498098da FUN_1498098da body=108 status=ok
// SIG undefined FUN_1498098da(void)

void FUN_1498098da(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))();
  }
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x90))();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x90))();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 149809946 FUN_149809946 body=132 status=ok
// SIG undefined FUN_149809946(void)

void FUN_149809946(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x18) = 0;
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_1498098da(param_1 + 0x20);
    }
    lVar1 = *(longlong *)(param_1 + 0x68);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 8) != 0) {
        FUN_1400020a8();
      }
      thunk_FUN_1400020a8(lVar1,0x20);
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x70);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 8) != 0) {
        FUN_1400020a8();
      }
      thunk_FUN_1400020a8(lVar1,0x20);
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
  }
  return;
}



// FUNCTION 1498099ca FUN_1498099ca body=25 status=ok
// SIG undefined FUN_1498099ca(void)

void FUN_1498099ca(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498099df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 1498099e4 FUN_1498099e4 body=34 status=ok
// SIG undefined FUN_1498099e4(void)

undefined8 FUN_1498099e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 149809a06 FUN_149809a06 body=320 status=ok
// SIG undefined FUN_149809a06(void)

undefined4 * FUN_149809a06(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_149809b48(param_1,local_40);
  puVar1 = (ulonglong *)param_3[1];
  uVar7 = *(ulonglong *)*param_3;
  *local_38 = uVar7;
  local_38[1] = *puVar1;
  uVar2 = puVar1[1];
  local_38[2] = uVar2;
  if (uVar2 != 0) {
    LOCK();
    *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
    UNLOCK();
    uVar7 = *local_38;
  }
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar5 = FUN_144a78877(uVar7,uVar7 >> 0x20);
  cVar4 = FUN_149809c2e(param_1,uVar5,local_38,&local_44);
  uVar3 = local_44;
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
      *(uint *)((longlong)local_38 + 0x1c) = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_149809d60(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149809b48 FUN_149809b48 body=229 status=ok
// SIG undefined FUN_149809b48(void)

int * FUN_149809b48(longlong *param_1,int *param_2)

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



// FUNCTION 149809c2e FUN_149809c2e body=191 status=ok
// SIG undefined FUN_149809c2e(void)

undefined8 FUN_149809c2e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_149809cee(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = puVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 149809cee FUN_149809cee body=114 status=ok
// SIG undefined FUN_149809cee(void)

void FUN_149809cee(longlong *param_1,int param_2)

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



// FUNCTION 149809d60 FUN_149809d60 body=451 status=ok
// SIG undefined FUN_149809d60(void)

void FUN_149809d60(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x20;
        iVar6 = FUN_144a78877(*(ulonglong *)(lVar3 + lVar10),*(ulonglong *)(lVar3 + lVar10) >> 0x20)
        ;
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 149809f24 FUN_149809f24 body=43 status=ok
// SIG undefined FUN_149809f24(void)

undefined8 FUN_149809f24(undefined8 param_1,int param_2)

{
  FUN_149809f98();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 149809f6e FUN_149809f6e body=41 status=ok
// SIG undefined FUN_149809f6e(void)

undefined8 FUN_149809f6e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(char *)(param_1 + 0x108) == '\x01') {
    (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x10))
              (*(longlong **)(param_1 + 0xf8),0,param_2,param_3);
  }
  return 1;
}



// FUNCTION 149809f98 FUN_149809f98 body=85 status=ok
// SIG undefined FUN_149809f98(void)

void FUN_149809f98(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14be8bba0;
  LOCK();
  *(int *)(param_1[0x1f] + 0x10) = *(int *)(param_1[0x1f] + 0x10) + -1;
  UNLOCK();
  plVar3 = (longlong *)param_1[0x20];
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
  FUN_1470465cc(param_1);
  return;
}



// FUNCTION 149809fee FUN_149809fee body=53 status=ok
// SIG undefined FUN_149809fee(void)

undefined8 * FUN_149809fee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be8bbe0;
  FUN_145cf3844();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14980a024 FUN_14980a024 body=120 status=ok
// SIG undefined FUN_14980a024(void)

undefined8 * FUN_14980a024(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc28520) {
    FUN_144b3d300(&DAT_14cc28520);
    if (DAT_14cc28520 == -1) {
      FUN_1446f470e(&DAT_14cc28518,L"Vibration Output",1);
      _Init_thread_footer(&DAT_14cc28520);
    }
  }
  *param_2 = DAT_14cc28518;
  return param_2;
}



// FUNCTION 14980a0a2 FUN_14980a0a2 body=46 status=ok
// SIG undefined FUN_14980a0a2(void)

longlong FUN_14980a0a2(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_145bb1144();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  return lVar2;
}



// FUNCTION 14980a0d0 FUN_14980a0d0 body=461 status=ok
// SIG undefined FUN_14980a0d0(void)

undefined8 *
FUN_14980a0d0(longlong param_1,undefined8 *param_2,ulonglong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  ulonglong *local_50;
  longlong *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)(param_1 + 0xdb8);
  uVar4 = *param_3;
  uVar6 = FUN_144a78877(uVar4 & 0xffffffff,uVar4 >> 0x20);
  if (*(int *)(param_1 + 0xdc0) != *(int *)(param_1 + 0xdec)) {
    lVar7 = param_1 + 0xdf0;
    if (*(longlong *)(param_1 + 0xdf8) != 0) {
      lVar7 = *(longlong *)(param_1 + 0xdf8);
    }
    iVar8 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0xe00) - 1U & uVar6) * 4);
    if (iVar8 != -1) {
      do {
        if (*(ulonglong *)(*plVar3 + (longlong)iVar8 * 0x20) == uVar4) goto LAB_14980a1f4;
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + *plVar3 + 0x18);
      } while (iVar8 != -1);
    }
  }
  FUN_14980a50c(param_4,&local_68);
  local_60 = local_68;
  local_58 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_58[1] = (longlong)&DAT_100000001;
  *local_58 = (longlong)&PTR_FUN_14be8bb80;
  local_58[2] = local_68;
  local_50 = param_3;
  local_48 = &local_60;
  FUN_149808fa4(plVar3,local_3c);
  plVar5 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_14980a1f4:
  uVar4 = *param_3;
  uVar6 = FUN_144a78877(uVar4 & 0xffffffff,uVar4 >> 0x20);
  if (*(int *)(param_1 + 0xdc0) != *(int *)(param_1 + 0xdec)) {
    lVar7 = param_1 + 0xdf0;
    if (*(longlong *)(param_1 + 0xdf8) != 0) {
      lVar7 = *(longlong *)(param_1 + 0xdf8);
    }
    iVar8 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0xe00) - 1U & uVar6) * 4);
    if (iVar8 != -1) {
      do {
        lVar7 = *plVar3 + (longlong)iVar8 * 0x20;
        if (*(ulonglong *)(*plVar3 + (longlong)iVar8 * 0x20) == uVar4) goto LAB_14980a216;
        iVar8 = *(int *)(lVar7 + 0x18);
      } while (iVar8 != -1);
    }
  }
  lVar7 = 0;
LAB_14980a216:
  *param_2 = *(undefined8 *)(lVar7 + 8);
  lVar7 = *(longlong *)(lVar7 + 0x10);
  param_2[1] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14980a29e FUN_14980a29e body=441 status=ok
// SIG undefined FUN_14980a29e(void)

undefined8 *
FUN_14980a29e(longlong param_1,undefined8 *param_2,ulonglong *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  ulonglong *local_50;
  longlong *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = *(longlong **)(param_1 + 0x18);
  uVar3 = *param_3;
  uVar5 = FUN_144a78877(uVar3 & 0xffffffff,uVar3 >> 0x20);
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    plVar8 = plVar2 + 7;
    if ((longlong *)plVar2[8] != (longlong *)0x0) {
      plVar8 = (longlong *)plVar2[8];
    }
    iVar7 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar2[9] - 1U & uVar5) * 4);
    if (iVar7 != -1) {
      do {
        if (*(ulonglong *)(*plVar2 + (longlong)iVar7 * 0x20) == uVar3) goto LAB_14980a3bd;
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + *plVar2 + 0x18);
      } while (iVar7 != -1);
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  FUN_14980a50c(param_4,&local_68);
  local_60 = local_68;
  local_58 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_58[1] = (longlong)&DAT_100000001;
  *local_58 = (longlong)&PTR_FUN_14be8bb80;
  local_58[2] = local_68;
  local_50 = param_3;
  local_48 = &local_60;
  FUN_149809a06(uVar4,local_3c);
  plVar2 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_58 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
LAB_14980a3bd:
  plVar2 = *(longlong **)(param_1 + 0x18);
  uVar3 = *param_3;
  uVar5 = FUN_144a78877(uVar3 & 0xffffffff,uVar3 >> 0x20);
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    plVar8 = plVar2 + 7;
    if ((longlong *)plVar2[8] != (longlong *)0x0) {
      plVar8 = (longlong *)plVar2[8];
    }
    iVar7 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar2[9] - 1U & uVar5) * 4);
    if (iVar7 != -1) {
      do {
        lVar6 = *plVar2 + (longlong)iVar7 * 0x20;
        if (*(ulonglong *)(*plVar2 + (longlong)iVar7 * 0x20) == uVar3) goto LAB_14980a3dc;
        iVar7 = *(int *)(lVar6 + 0x18);
      } while (iVar7 != -1);
    }
  }
  lVar6 = 0;
LAB_14980a3dc:
  *param_2 = *(undefined8 *)(lVar6 + 8);
  lVar6 = *(longlong *)(lVar6 + 0x10);
  param_2[1] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14980a458 FUN_14980a458 body=179 status=ok
// SIG undefined FUN_14980a458(void)

undefined8 * FUN_14980a458(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = &PTR_FUN_14a13de90;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 5),4000);
  FUN_145afe678(param_1 + 10);
  *param_1 = &PTR_FUN_14be8bc30;
  param_1[0x1f] = *param_2;
  lVar4 = param_2[1];
  param_1[0x20] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  LOCK();
  piVar1 = (int *)(*param_2 + 0x14);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  *(bool *)(param_1 + 0x21) = iVar3 == 0;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
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
  return param_1;
}



// FUNCTION 14980a50c FUN_14980a50c body=109 status=ok
// SIG undefined FUN_14980a50c(void)

undefined8 * FUN_14980a50c(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = *param_1;
  puVar3 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  puVar3[1] = param_1[1];
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_14be8ba00;
  *(undefined1 *)(puVar3 + 3) = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x41) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x49) = 0;
  *(undefined ***)((longlong)puVar3 + 0x51) = &PTR_LAB_14be8ba20;
  puVar3[0xf] = uVar2;
  *param_2 = puVar3;
  return param_2;
}



// FUNCTION 14980a57a FUN_14980a57a body=43 status=ok
// SIG undefined FUN_14980a57a(void)

undefined8 FUN_14980a57a(undefined8 param_1,int param_2)

{
  FUN_14980a5f0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 14980a5c4 FUN_14980a5c4 body=44 status=ok
// SIG undefined FUN_14980a5c4(void)

undefined8 FUN_14980a5c4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(char *)(param_1 + 0x108) == '\x01') {
    (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x10))
              (*(longlong **)(param_1 + 0xf8),1,param_2,param_3);
  }
  return 1;
}



// FUNCTION 14980a5f0 FUN_14980a5f0 body=85 status=ok
// SIG undefined FUN_14980a5f0(void)

void FUN_14980a5f0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14be8bc30;
  LOCK();
  *(int *)(param_1[0x1f] + 0x14) = *(int *)(param_1[0x1f] + 0x14) + -1;
  UNLOCK();
  plVar3 = (longlong *)param_1[0x20];
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
  FUN_1470465cc(param_1);
  return;
}



// FUNCTION 14980a646 FUN_14980a646 body=247 status=ok
// SIG undefined FUN_14980a646(void)

void FUN_14980a646(longlong param_1,ulonglong *param_2,longlong param_3)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  ulonglong *local_48;
  longlong local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_2;
  uVar4 = FUN_144a78877(uVar2 & 0xffffffff,uVar2 >> 0x20);
  if (*(int *)(param_1 + 0xdc0) != *(int *)(param_1 + 0xdec)) {
    lVar6 = param_1 + 0xdf0;
    if (*(longlong *)(param_1 + 0xdf8) != 0) {
      lVar6 = *(longlong *)(param_1 + 0xdf8);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0xe00) - 1U & uVar4) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 0xdb8);
      do {
        if (*(ulonglong *)(lVar6 + (longlong)iVar5 * 0x20) == uVar2) goto LAB_14980a6ee;
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + lVar6 + 0x18);
      } while (iVar5 != -1);
    }
  }
  local_48 = param_2;
  local_40 = param_3;
  FUN_14980ae5e((longlong *)(param_1 + 0xdb8),local_34);
LAB_14980a6ee:
  puVar3 = *(undefined8 **)(param_3 + 8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980a754 FUN_14980a754 body=42 status=ok
// SIG undefined FUN_14980a754(void)

int FUN_14980a754(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145ec4700();
  if (-1 < iVar1) {
    FUN_144b4ae10(iVar1,*(undefined4 *)(param_1 + 0xd90));
  }
  return iVar1;
}



// FUNCTION 14980a77e FUN_14980a77e body=80 status=ok
// SIG undefined FUN_14980a77e(void)

void FUN_14980a77e(longlong param_1,undefined8 *param_2)

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
  plVar5 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar4;
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
                    /* WARNING: Could not recover jumptable at 0x00014980a7c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14980a7e8 FUN_14980a7e8 body=43 status=ok
// SIG undefined FUN_14980a7e8(void)

undefined8 FUN_14980a7e8(undefined8 param_1,int param_2)

{
  FUN_145cc439c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xda0);
  }
  return param_1;
}



// FUNCTION 14980a814 FUN_14980a814 body=361 status=ok
// SIG undefined FUN_14980a814(void)

ulonglong FUN_14980a814(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  undefined1 auStack_48 [32];
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar4 = FUN_144d70620(*(undefined4 *)(param_3 + 0x218),&local_28);
  if (iVar4 == 0) {
    lVar2 = (longlong)*(int *)(param_3 + 0x210) * 0x88;
    lVar3 = *(longlong *)(param_1 + 0x14 + (longlong)(int)param_2 * 8);
    if (lVar3 == DAT_14c967888) {
      lVar1 = param_1 + lVar2;
      lVar6 = lVar1 + 0xb70;
      if (*(char *)(lVar1 + 0xbb0) == '\x01') {
        if (local_28 == 0) goto LAB_14980a902;
        if (*(int *)(lVar1 + 0xb7c) != 0) {
          if (*(int *)(lVar1 + 0xb7c) == 5) {
            if (local_28 != 1) goto LAB_14980a96a;
            bVar7 = *(byte *)(param_3 + 0x80);
LAB_14980a8cf:
            bVar8 = 0;
            if (bVar7 != 0) {
              if (bVar7 == 0xff) {
                bVar8 = 9;
              }
              else {
                bVar8 = (bVar7 >> 5) + 1;
              }
            }
            bVar9 = bVar8 < *(byte *)(lVar6 + 0x11);
            goto LAB_14980a8fa;
          }
LAB_14980a95c:
          if (local_28 < 8) {
            uVar5 = CONCAT71((int7)((ulonglong)lVar6 >> 8),0xa4 >> ((byte)local_28 & 0x1f));
            goto LAB_14980a850;
          }
        }
LAB_14980a96a:
        uVar5 = 0;
      }
      else {
        bVar7 = *(byte *)(lVar1 + 0xbb1);
        lVar6 = CONCAT71((int7)((ulonglong)lVar6 >> 8),bVar7);
        if (bVar7 == 0) goto LAB_14980a902;
        bVar9 = *(byte *)(param_3 + 0x80) < bVar7;
LAB_14980a8fa:
        uVar5 = CONCAT71((int7)((ulonglong)lVar6 >> 8),!bVar9);
      }
      goto LAB_14980a850;
    }
LAB_14980a902:
    if (lVar3 == DAT_14c967890) {
      lVar2 = param_1 + 0xb70 + lVar2;
      lVar6 = lVar2 + 0x44;
      if (*(char *)(lVar2 + 0x84) == '\x01') {
        if (local_24 != 0) {
          if (*(int *)(lVar2 + 0x50) != 0) {
            local_28 = local_24;
            if (*(int *)(lVar2 + 0x50) != 5) goto LAB_14980a95c;
            if (local_24 == 1) {
              bVar7 = *(byte *)(param_3 + 0x81);
              goto LAB_14980a8cf;
            }
          }
          goto LAB_14980a96a;
        }
      }
      else {
        bVar7 = *(byte *)(lVar2 + 0x85);
        lVar6 = CONCAT71((int7)((ulonglong)lVar6 >> 8),bVar7);
        if (bVar7 != 0) {
          bVar9 = *(byte *)(param_3 + 0x81) < bVar7;
          goto LAB_14980a8fa;
        }
      }
    }
  }
  uVar5 = (ulonglong)
          CONCAT31((int3)(*(uint *)(param_3 + 0x78) >> 8),
                   (*(uint *)(param_3 + 0x78) >> (param_2 & 0x1f) & 1) != 0);
LAB_14980a850:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980a97e FUN_14980a97e body=114 status=ok
// SIG undefined FUN_14980a97e(void)

void FUN_14980a97e(longlong param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = 0x318;
  do {
    if (*(int *)(param_1 + -8 + lVar1) == param_2) {
      local_c = (undefined1)((uint)param_3 >> 0x10);
      local_b = (undefined1)((uint)param_3 >> 8);
      local_a = (undefined1)param_3;
      FUN_144d70950(*(undefined4 *)(param_1 + lVar1));
      break;
    }
    lVar1 = lVar1 + 0x278;
  } while (lVar1 != 0xcf8);
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14980aa14 FUN_14980aa14 body=140 status=ok
// SIG undefined FUN_14980aa14(void)

undefined8 * FUN_14980aa14(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  ulonglong uVar2;
  
  iVar1 = *(int *)(param_1 + 0xae0 + (longlong)param_3 * 4);
  *param_2 = 0;
  if (iVar1 == 1) {
    uVar2 = (ulonglong)DAT_14cc284c0;
    _Src = DAT_14cc284b8;
  }
  else if (iVar1 == 0) {
    uVar2 = (ulonglong)DAT_14cc284b0;
    _Src = DAT_14cc284a8;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc284f0;
    _Src = DAT_14cc284e8;
  }
  *(int *)(param_2 + 1) = (int)uVar2;
  if (uVar2 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,uVar2 & 0xffffffff,0);
    memcpy((void *)*param_2,_Src,uVar2 * 2);
  }
  return param_2;
}



// FUNCTION 14980aaa0 FUN_14980aaa0 body=43 status=ok
// SIG undefined FUN_14980aaa0(void)

undefined8 FUN_14980aaa0(undefined8 param_1,int param_2)

{
  FUN_145cc439c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xd98);
  }
  return param_1;
}



// FUNCTION 14980aacc FUN_14980aacc body=43 status=ok
// SIG undefined FUN_14980aacc(void)

undefined8 FUN_14980aacc(undefined8 param_1,int param_2)

{
  FUN_145cc439c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb70);
  }
  return param_1;
}



// FUNCTION 14980ab12 FUN_14980ab12 body=138 status=ok
// SIG undefined FUN_14980ab12(void)

void FUN_14980ab12(longlong param_1,int param_2,undefined4 param_3,char param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [36];
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = 0x318;
  do {
    if (*(int *)(param_1 + -8 + lVar1) == param_2) {
      if (param_4 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
      }
      local_14 = (undefined1)((uint)param_3 >> 0x10);
      local_13 = (undefined1)((uint)param_3 >> 8);
      local_12 = (undefined1)param_3;
      FUN_144d70950(*(undefined4 *)(param_1 + lVar1));
      break;
    }
    lVar1 = lVar1 + 0x278;
  } while (lVar1 != 0xcf8);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980abb4 FUN_14980abb4 body=265 status=ok
// SIG undefined FUN_14980abb4(void)

void FUN_14980abb4(longlong param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_78 [40];
  int local_50;
  int local_4c;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1 + (longlong)param_2 * 0x278;
  local_50 = param_2;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2852c) {
    FUN_144b3d300(&DAT_14cc2852c);
    if (DAT_14cc2852c == -1) {
      FUN_1446ddc76(&DAT_14cc28524,"FSonyInputInterface",1);
      _Init_thread_footer(&DAT_14cc2852c);
    }
  }
  iVar2 = *(int *)(lVar1 + 0x318);
  if (0 < iVar2) {
    local_48 = lVar1 + 0x178;
    local_38 = lVar1 + 0x1f0;
    local_30 = lVar1 + 0x210;
    local_28 = 0;
    local_4c = iVar2;
    local_40 = lVar1 + 0x100;
    if (*(int *)(lVar1 + 0x310) != -1) {
      FUN_144640a4e(param_1,&local_50,param_3);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980acbe FUN_14980acbe body=132 status=ok
// SIG undefined FUN_14980acbe(void)

void FUN_14980acbe(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14980ad44 FUN_14980ad44 body=114 status=ok
// SIG undefined FUN_14980ad44(void)

void FUN_14980ad44(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = FUN_144a78877(param_2 & 0xffffffff,param_2 >> 0x20);
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)iVar1 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_14980adb6(param_1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14980adb6 FUN_14980adb6 body=90 status=ok
// SIG undefined FUN_14980adb6(void)

void FUN_14980adb6(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_14980ae10();
  return;
}



// FUNCTION 14980ae10 FUN_14980ae10 body=78 status=ok
// SIG undefined FUN_14980ae10(void)

void FUN_14980ae10(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  FUN_14980928c(param_1,param_2);
  return;
}



// FUNCTION 14980ae5e FUN_14980ae5e body=320 status=ok
// SIG undefined FUN_14980ae5e(void)

undefined4 * FUN_14980ae5e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1498090e6(param_1,local_40);
  puVar1 = (ulonglong *)param_3[1];
  uVar7 = *(ulonglong *)*param_3;
  *local_38 = uVar7;
  local_38[1] = *puVar1;
  uVar2 = puVar1[1];
  local_38[2] = uVar2;
  if (uVar2 != 0) {
    LOCK();
    *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
    UNLOCK();
    uVar7 = *local_38;
  }
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar5 = FUN_144a78877(uVar7,uVar7 >> 0x20);
  cVar4 = FUN_1498091cc(param_1,uVar5,local_38,&local_44);
  uVar3 = local_44;
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
      *(uint *)((longlong)local_38 + 0x1c) = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1498092fe(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980afa0 FUN_14980afa0 body=322 status=ok
// SIG undefined FUN_14980afa0(void)

void FUN_14980afa0(longlong *param_1)

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



// FUNCTION 14980b0e4 FUN_14980b0e4 body=311 status=ok
// SIG undefined FUN_14980b0e4(void)

void FUN_14980b0e4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
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
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
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
      plVar3 = *(longlong **)(*local_68 + 0x10 + (longlong)iStack_4c * 0x20);
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
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980b21c FUN_14980b21c body=34 status=ok
// SIG undefined FUN_14980b21c(void)

undefined8 FUN_14980b21c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14980b23e FUN_14980b23e body=34 status=ok
// SIG undefined FUN_14980b23e(void)

undefined8 FUN_14980b23e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14980b260 FUN_14980b260 body=34 status=ok
// SIG undefined FUN_14980b260(void)

undefined8 FUN_14980b260(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14980b294 FUN_14980b294 body=64 status=ok
// SIG undefined FUN_14980b294(void)

undefined8 * FUN_14980b294(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = &PTR_FUN_14be8c500;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 14980b2d4 FUN_14980b2d4 body=157 status=ok
// SIG undefined FUN_14980b2d4(void)

longlong * FUN_14980b2d4(undefined8 param_1,longlong *param_2,undefined8 param_3,uint param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = FUN_14001cc68(0x500,0x10);
  FUN_14620732e(lVar3,param_3,param_4 & 0xffffff01);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14be8c7a0;
  plVar4[2] = lVar3;
  *param_2 = lVar3;
  param_2[1] = (longlong)plVar4;
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
  return param_2;
}



// FUNCTION 14980b372 FUN_14980b372 body=89 status=ok
// SIG undefined FUN_14980b372(void)

void FUN_14980b372(longlong param_1,undefined8 *param_2)

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
  plVar5 = *(longlong **)(param_1 + 0x4f8);
  *(undefined8 *)(param_1 + 0x4f0) = uVar3;
  *(longlong *)(param_1 + 0x4f8) = lVar4;
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
                    /* WARNING: Could not recover jumptable at 0x00014980b3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14980b42a FUN_14980b42a body=36 status=ok
// SIG undefined FUN_14980b42a(void)

undefined8 FUN_14980b42a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14980b46a FUN_14980b46a body=93 status=ok
// SIG undefined FUN_14980b46a(void)

void FUN_14980b46a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be8c6e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14980b4c8 FUN_14980b4c8 body=123 status=ok
// SIG undefined FUN_14980b4c8(void)

void FUN_14980b4c8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be8c6e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14980b544 FUN_14980b544 body=21 status=ok
// SIG undefined FUN_14980b544(void)

undefined8 FUN_14980b544(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14980b574 FUN_14980b574 body=178 status=ok
// SIG undefined FUN_14980b574(void)

bool FUN_14980b574(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    lVar5 = lVar5 * 0xa8 + param_1 + 0x98;
    local_38 = (double)param_2[2];
    local_48 = *param_2;
    uStack_40 = param_2[1];
    FUN_14980b79a(lVar5);
    cVar2 = FUN_144643a3a(lVar5,param_2,&local_48);
    if (cVar2 != '\0') {
      bVar3 = 0.10000000149011612 <= local_38 - (double)param_2[2];
      break;
    }
    lVar5 = 1;
    bVar3 = false;
    bVar1 = false;
  } while (bVar4);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980b62e FUN_14980b62e body=356 status=ok
// SIG undefined FUN_14980b62e(void)

void FUN_14980b62e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar2 = local_50;
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_144642b26(param_1,local_38,puVar2,puVar3);
  *param_3 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980b79a FUN_14980b79a body=281 status=ok
// SIG undefined FUN_14980b79a(void)

void FUN_14980b79a(undefined4 *param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  void *_Src;
  int iVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x14);
  if (lVar3 == 0) goto LAB_14980b883;
  if (*(longlong *)(lVar3 + 8) != 0) {
    if (*(int *)(*(longlong *)(lVar3 + 8) + 0x10) != 0) goto LAB_14980b883;
    cVar4 = (**(code **)(**(longlong **)(lVar3 + 8) + 0x18))();
    if (cVar4 == '\0') goto LAB_14980b883;
  }
  if (param_1[0x12] == 1) {
    *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_1 + 0xc);
    param_1[0x1e] = param_1[8];
    param_1[0x1f] = param_1[9];
    param_1[0x20] = param_1[10];
    param_1[0x21] = param_1[0xb];
    param_1[0x1a] = param_1[4];
    param_1[0x1b] = param_1[5];
    param_1[0x1c] = param_1[6];
    param_1[0x1d] = param_1[7];
    param_1[0x16] = *param_1;
    param_1[0x17] = param_1[1];
    param_1[0x18] = param_1[2];
    param_1[0x19] = param_1[3];
    fVar1 = (float)param_1[0xe];
    local_34 = 0;
    _Src = (void *)FUN_1431ed846(*(undefined8 *)(param_1 + 0x14),&local_34,0);
    if (_Src != (void *)0x0) {
      iVar5 = (int)(fVar1 * fVar1);
      iVar2 = param_1[0x26];
      if ((iVar2 < iVar5) &&
         (param_1[0x26] = iVar5, (uint)(param_1[0x27] - iVar2) < (uint)(iVar5 - iVar2))) {
        FUN_14488eebe(param_1 + 0x24);
      }
      memcpy(*(void **)(param_1 + 0x24),_Src,*(size_t *)(param_1 + 0x10));
      FUN_1431ed91e(*(undefined8 *)(param_1 + 0x14));
    }
    param_1[0x12] = 0;
  }
LAB_14980b883:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980b8b4 FUN_14980b8b4 body=902 status=ok
// SIG undefined FUN_14980b8b4(void)

void FUN_14980b8b4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined ***pppuVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined1 local_110;
  undefined2 *local_100;
  int local_f8;
  longlong local_f0;
  longlong *local_e8;
  undefined1 local_e0;
  longlong local_d8;
  longlong *plStack_d0;
  undefined1 local_c8;
  longlong local_b8;
  longlong *local_a8;
  longlong local_98 [4];
  code *local_78;
  undefined ***local_68;
  undefined **local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar12 = *(longlong *)(param_1 + 0x50);
  if (lVar12 == 0) goto LAB_14980b8e0;
  if (((*(longlong *)(lVar12 + 8) == 0) ||
      ((*(int *)(*(longlong *)(lVar12 + 8) + 0x10) == 0 &&
       (cVar5 = (**(code **)(**(longlong **)(lVar12 + 8) + 0x18))(), cVar5 != '\0')))) &&
     (*(int *)(param_1 + 0x48) == 1)) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  lVar12 = *(longlong *)(param_1 + 0x50);
  if (lVar12 == 0) goto LAB_14980b8e0;
  if (*(longlong *)(lVar12 + 8) == 0) {
LAB_14980bad4:
    FUN_145bf0f7a(lVar12);
    FUN_1400020a8(lVar12);
  }
  else {
    if ((*(int *)(*(longlong *)(lVar12 + 8) + 0x10) != 0) ||
       (cVar5 = (**(code **)(**(longlong **)(lVar12 + 8) + 0x18))(), cVar5 == '\0')) {
      local_b8 = 0;
      local_a8 = (longlong *)0x0;
      uStack_50 = *(undefined8 *)(param_1 + 0x50);
      local_68 = (undefined ***)0x0;
      local_58 = &PTR_LAB_14be8f490;
      local_78 = FUN_144644ee2;
      FUN_14170b918(&local_d8);
      plVar3 = plStack_d0;
      local_c8 = 1;
      if (plStack_d0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
        UNLOCK();
      }
      cVar5 = FUN_144a53f06();
      pcVar4 = local_78;
      if (cVar5 == '\0') {
        pppuVar9 = local_68;
        if (local_68 == (undefined ***)0x0) {
          pppuVar9 = &local_58;
        }
        uVar7 = (*(code *)(*pppuVar9)[1])();
        uVar6 = (*pcVar4)(uVar7);
        *(undefined4 *)(local_d8 + 0x80) = uVar6;
        FUN_140b576f0();
      }
      else {
        FUN_145c3b830(&local_f0);
        puVar8 = (undefined8 *)FUN_14001cc68(0x80,0x10);
        local_e0 = 1;
        if (local_e8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
          UNLOCK();
        }
        *puVar8 = &PTR_FUN_14be8f4b0;
        puVar8[2] = local_78;
        puVar8[4] = local_68;
        local_68 = (undefined ***)0x0;
        *(undefined4 *)(puVar8 + 8) = local_48;
        *(undefined4 *)((longlong)puVar8 + 0x44) = uStack_44;
        *(undefined4 *)(puVar8 + 9) = uStack_40;
        *(undefined4 *)((longlong)puVar8 + 0x4c) = uStack_3c;
        puVar8[6] = local_58;
        puVar8[7] = uStack_50;
        if (local_78 != (code *)0x0) {
          local_78 = (code *)0x0;
        }
        puVar8[10] = local_d8;
        puVar8[0xb] = plStack_d0;
        local_d8 = 0;
        plStack_d0 = (longlong *)0x0;
        *(undefined1 *)(puVar8 + 0xc) = local_c8;
        puVar8[0xd] = local_f0;
        puVar8[0xe] = local_e8;
        uVar6 = FUN_146268020();
        FUN_140002266(&local_100,L"TAsync %d",uVar6);
        puVar11 = local_100;
        if (local_f8 == 0) {
          puVar11 = &DAT_149dfb77a;
        }
        local_110 = 0;
        local_118 = 0xffffffffffffffff;
        uVar7 = FUN_1411b1052(puVar8,puVar11,0,0);
        *(undefined8 *)(local_f0 + 0x80) = uVar7;
        FUN_140b576f0();
        if (local_100 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_e8 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_e8 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*local_e8)(local_e8);
            LOCK();
            piVar2 = (int *)((longlong)local_e8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_e8 + 0x10))(local_e8);
            }
          }
        }
      }
      plVar10 = plStack_d0;
      if (plStack_d0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_d0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_d0)(plStack_d0);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      if (local_78 != (code *)0x0) {
        pppuVar9 = &local_58;
        if (local_68 != (undefined ***)0x0) {
          pppuVar9 = local_68;
        }
        (*(code *)(*pppuVar9)[2])(pppuVar9);
      }
      if (local_b8 != 0) {
        plVar10 = local_a8;
        if (local_a8 == (longlong *)0x0) {
          plVar10 = local_98;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar3 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
      goto LAB_14980b8e0;
    }
    lVar12 = *(longlong *)(param_1 + 0x50);
    if (lVar12 != 0) goto LAB_14980bad4;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
LAB_14980b8e0:
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if ((local_30 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14980bc44 FUN_14980bc44 body=197 status=ok
// SIG undefined FUN_14980bc44(void)

longlong FUN_14980bc44(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
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
  lVar4 = FUN_141108188();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 14980bd1e FUN_14980bd1e body=31 status=ok
// SIG undefined FUN_14980bd1e(void)

undefined8 FUN_14980bd1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14980bd5a FUN_14980bd5a body=93 status=ok
// SIG undefined FUN_14980bd5a(void)

void FUN_14980bd5a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be8f3e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14980bdb8 FUN_14980bdb8 body=126 status=ok
// SIG undefined FUN_14980bdb8(void)

void FUN_14980bdb8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be8f3e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014980be27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14980be36 FUN_14980be36 body=21 status=ok
// SIG undefined FUN_14980be36(void)

undefined8 FUN_14980be36(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14980be4c FUN_14980be4c body=227 status=ok
// SIG undefined FUN_14980be4c(void)

undefined8 FUN_14980be4c(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_48;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar6 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_1 + 0x20);
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  uVar4 = (*pcVar2)(uVar5);
  *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x80) = uVar4;
  FUN_140b576f0();
  lVar3 = *(longlong *)(param_1 + 0x68);
  while ((*(byte *)(lVar3 + 0x78) & 1) == 0) {
    (**(code **)(**(longlong **)(lVar3 + 0x70) + 0x20))(*(longlong **)(lVar3 + 0x70),0xffffffff,0);
  }
  local_78 = *(undefined8 *)(lVar3 + 0x80);
  local_58 = 0;
  local_48 = 0;
  local_70 = param_1;
  FUN_144644fb0(local_68);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_60 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980bf30 FUN_14980bf30 body=38 status=ok
// SIG undefined FUN_14980bf30(void)

undefined8 FUN_14980bf30(undefined8 param_1,int param_2)

{
  FUN_14980bfcc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14980bf56 FUN_14980bf56 body=66 status=ok
// SIG undefined FUN_14980bf56(void)

void FUN_14980bf56(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  plVar2 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014980bf8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x28))(plVar2,1);
    return;
  }
  return;
}



// FUNCTION 14980bfa2 FUN_14980bfa2 body=12 status=ok
// SIG undefined FUN_14980bfa2(void)

void FUN_14980bfa2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014980bfab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14980bfae FUN_14980bfae body=29 status=ok
// SIG undefined FUN_14980bfae(void)

undefined8 FUN_14980bfae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14980bfcc FUN_14980bfcc body=141 status=ok
// SIG undefined FUN_14980bfcc(void)

void FUN_14980bfcc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14be8f4b0;
  plVar3 = (longlong *)param_1[0xe];
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_1[2] != 0) {
    plVar3 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[4];
    }
                    /* WARNING: Could not recover jumptable at 0x00014980c04d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))(plVar3);
    return;
  }
  return;
}



// FUNCTION 14980c05a FUN_14980c05a body=118 status=ok
// SIG undefined FUN_14980c05a(void)

ulonglong FUN_14980c05a(int *param_1)

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



// FUNCTION 14980c0d2 FUN_14980c0d2 body=31 status=ok
// SIG undefined FUN_14980c0d2(void)

undefined8 FUN_14980c0d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14980c10c FUN_14980c10c body=26 status=ok
// SIG undefined FUN_14980c10c(void)

bool FUN_14980c10c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14980c126 FUN_14980c126 body=93 status=ok
// SIG undefined FUN_14980c126(void)

void FUN_14980c126(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a7feda0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be8f650;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14980c184 FUN_14980c184 body=93 status=ok
// SIG undefined FUN_14980c184(void)

void FUN_14980c184(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a7feda0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be8f650;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14980c1e2 FUN_14980c1e2 body=126 status=ok
// SIG undefined FUN_14980c1e2(void)

void FUN_14980c1e2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a7feda0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be8f650;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014980c251. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14980c260 FUN_14980c260 body=58 status=ok
// SIG undefined FUN_14980c260(void)

void FUN_14980c260(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014980c297. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14980c29a FUN_14980c29a body=173 status=ok
// SIG undefined FUN_14980c29a(void)

bool FUN_14980c29a(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

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



// FUNCTION 14980c348 FUN_14980c348 body=62 status=ok
// SIG undefined FUN_14980c348(void)

void FUN_14980c348(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14980c386(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 14980c386 FUN_14980c386 body=93 status=ok
// SIG undefined FUN_14980c386(void)

ulonglong FUN_14980c386(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
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



// FUNCTION 14980c3e4 FUN_14980c3e4 body=190 status=ok
// SIG undefined FUN_14980c3e4(void)

void FUN_14980c3e4(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    uVar6 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar3);
        bVar5 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar6) == lVar3) {
        if ((int)(~uVar6 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar6 = uVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != uVar6);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147b4fe8a(param_1,iVar1);
  }
  lVar4 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 14980c4a2 FUN_14980c4a2 body=31 status=ok
// SIG undefined FUN_14980c4a2(void)

undefined8 FUN_14980c4a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14980c4d4 FUN_14980c4d4 body=93 status=ok
// SIG undefined FUN_14980c4d4(void)

void FUN_14980c4d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be8f770;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be8f700;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14980c532 FUN_14980c532 body=93 status=ok
// SIG undefined FUN_14980c532(void)

void FUN_14980c532(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be8f770;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be8f700;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14980c590 FUN_14980c590 body=126 status=ok
// SIG undefined FUN_14980c590(void)

void FUN_14980c590(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be8f770;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be8f700;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014980c5ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14980c61a FUN_14980c61a body=31 status=ok
// SIG undefined FUN_14980c61a(void)

undefined8 FUN_14980c61a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14980c654 FUN_14980c654 body=29 status=ok
// SIG undefined FUN_14980c654(void)

bool FUN_14980c654(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14980c672 FUN_14980c672 body=26 status=ok
// SIG undefined FUN_14980c672(void)

bool FUN_14980c672(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14980c68c FUN_14980c68c body=93 status=ok
// SIG undefined FUN_14980c68c(void)

void FUN_14980c68c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be8f8b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14980c6ea FUN_14980c6ea body=126 status=ok
// SIG undefined FUN_14980c6ea(void)

void FUN_14980c6ea(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be8f8b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014980c759. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14980c768 FUN_14980c768 body=35 status=ok
// SIG undefined FUN_14980c768(void)

void FUN_14980c768(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014980c787. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 14980c78c FUN_14980c78c body=36 status=ok
// SIG undefined FUN_14980c78c(void)

undefined8 FUN_14980c78c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14980c7cc FUN_14980c7cc body=93 status=ok
// SIG undefined FUN_14980c7cc(void)

void FUN_14980c7cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be8f940;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14980c82a FUN_14980c82a body=123 status=ok
// SIG undefined FUN_14980c82a(void)

void FUN_14980c82a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be8f940;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14980c8a6 FUN_14980c8a6 body=21 status=ok
// SIG undefined FUN_14980c8a6(void)

undefined8 FUN_14980c8a6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14980c8c0 FUN_14980c8c0 body=8 status=ok
// SIG undefined FUN_14980c8c0(void)

void FUN_14980c8c0(undefined8 param_1,undefined8 param_2)

{
  FUN_144bae400(param_2);
  return;
}



// FUNCTION 14980c8c8 FUN_14980c8c8 body=170 status=ok
// SIG undefined FUN_14980c8c8(void)

undefined8
FUN_14980c8c8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_144bad5b0();
  if (*(int *)(param_2 + 1) < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144ba0570();
  }
  if (*(int *)(param_3 + 1) < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_144ba0570();
  }
  uVar4 = FUN_144ba0570();
  if (*(int *)(param_2 + 1) != 0) {
    FUN_144ba0a00(*param_2,*(int *)(param_2 + 1),uVar2);
  }
  if (*(int *)(param_3 + 1) != 0) {
    FUN_144ba0a00(*param_3,*(int *)(param_3 + 1),uVar3);
  }
  FUN_144ba0a00(*param_4,*(undefined4 *)(param_4 + 1),uVar4);
  FUN_144bad7e0(uVar1,uVar4,uVar2,uVar3);
  return uVar1;
}



// FUNCTION 14980c972 FUN_14980c972 body=8 status=ok
// SIG undefined FUN_14980c972(void)

void FUN_14980c972(undefined8 param_1,undefined8 param_2)

{
  FUN_144bad8c0(param_2);
  return;
}



// FUNCTION 14980c97a FUN_14980c97a body=20 status=ok
// SIG undefined FUN_14980c97a(void)

int FUN_14980c97a(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_144bae400(param_2);
  return iVar1 + -0xb;
}



// FUNCTION 14980c98e FUN_14980c98e body=104 status=ok
// SIG undefined FUN_14980c98e(void)

int FUN_14980c98e(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_144bae400(param_4);
  FUN_144a5eaa2(param_3,uVar1,1);
  iVar2 = FUN_144bae430(*(undefined4 *)(param_2 + 1),*param_2,*param_3,param_4,1);
  if ((iVar2 == -1) && (*(undefined4 *)(param_3 + 1) = 0, *(int *)((longlong)param_3 + 0xc) != 0)) {
    FUN_144893a1c(param_3,0);
  }
  return iVar2;
}



// FUNCTION 14980c9f6 FUN_14980c9f6 body=104 status=ok
// SIG undefined FUN_14980c9f6(void)

int FUN_14980c9f6(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_144bae400(param_4);
  FUN_144a5eaa2(param_3,uVar1,1);
  iVar2 = FUN_144bae450(*(undefined4 *)(param_2 + 1),*param_2,*param_3,param_4,1);
  if ((iVar2 == -1) && (*(undefined4 *)(param_3 + 1) = 0, *(int *)((longlong)param_3 + 0xc) != 0)) {
    FUN_144893a1c(param_3,0);
  }
  return iVar2;
}



// FUNCTION 14980ca5e FUN_14980ca5e body=118 status=ok
// SIG undefined FUN_14980ca5e(void)

int FUN_14980ca5e(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_144bae400(param_4);
  FUN_144a5eaa2(param_3,iVar1 + -0xb,1);
  iVar1 = FUN_144bae470(*(undefined4 *)(param_2 + 1),*param_2,*param_3,param_4,1);
  if (iVar1 == -1) {
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) != 0) {
      FUN_144893a1c(param_3,0);
    }
  }
  else {
    FUN_144a5eaa2(param_3,iVar1,1);
  }
  return iVar1;
}



// FUNCTION 14980cad4 FUN_14980cad4 body=118 status=ok
// SIG undefined FUN_14980cad4(void)

int FUN_14980cad4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_144bae400(param_4);
  FUN_144a5eaa2(param_3,iVar1 + -0xb,1);
  iVar1 = FUN_144bae490(*(undefined4 *)(param_2 + 1),*param_2,*param_3,param_4,1);
  if (iVar1 == -1) {
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) != 0) {
      FUN_144893a1c(param_3,0);
    }
  }
  else {
    FUN_144a5eaa2(param_3,iVar1,1);
  }
  return iVar1;
}



// FUNCTION 14980cb4e FUN_14980cb4e body=36 status=ok
// SIG undefined FUN_14980cb4e(void)

undefined8 FUN_14980cb4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14980cb8e FUN_14980cb8e body=93 status=ok
// SIG undefined FUN_14980cb8e(void)

void FUN_14980cb8e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be8fa20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14980cbec FUN_14980cbec body=123 status=ok
// SIG undefined FUN_14980cbec(void)

void FUN_14980cbec(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be8fa20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14980cc68 FUN_14980cc68 body=21 status=ok
// SIG undefined FUN_14980cc68(void)

undefined8 FUN_14980cc68(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14980cc7e FUN_14980cc7e body=75 status=ok
// SIG undefined FUN_14980cc7e(void)

void FUN_14980cc7e(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_14be8faf0;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    param_1[1] = 0;
    thunk_FUN_1400020a8(lVar1,1);
    if (param_1[1] != 0) {
      thunk_FUN_1400020a8(param_1[1],1);
      return;
    }
  }
  return;
}



// FUNCTION 14980ccec FUN_14980ccec body=109 status=ok
// SIG undefined FUN_14980ccec(void)

void FUN_14980ccec(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)FUN_14980cf50();
  local_38 = *param_4;
  uStack_30 = param_4[1];
  local_48 = *param_3;
  uStack_40 = param_3[1];
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_14980c8c8(*puVar1);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980cd5a FUN_14980cd5a body=29 status=ok
// SIG undefined FUN_14980cd5a(void)

void FUN_14980cd5a(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14980cf50();
  FUN_14980c972(*puVar1,param_2);
  return;
}



// FUNCTION 14980cd78 FUN_14980cd78 body=29 status=ok
// SIG undefined FUN_14980cd78(void)

void FUN_14980cd78(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14980cf50();
  FUN_14980c8c0(*puVar1,param_2);
  return;
}



// FUNCTION 14980cd96 FUN_14980cd96 body=29 status=ok
// SIG undefined FUN_14980cd96(void)

void FUN_14980cd96(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14980cf50();
  FUN_14980c97a(*puVar1,param_2);
  return;
}



// FUNCTION 14980cdb4 FUN_14980cdb4 body=91 status=ok
// SIG undefined FUN_14980cdb4(void)

void FUN_14980cdb4(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14980cf50();
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14980c98e(*puVar1,&local_38,param_3,param_4);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980ce10 FUN_14980ce10 body=91 status=ok
// SIG undefined FUN_14980ce10(void)

void FUN_14980ce10(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14980cf50();
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14980c9f6(*puVar1,&local_38,param_3,param_4);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980ce6c FUN_14980ce6c body=91 status=ok
// SIG undefined FUN_14980ce6c(void)

void FUN_14980ce6c(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14980cf50();
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14980ca5e(*puVar1,&local_38,param_3,param_4);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980cec8 FUN_14980cec8 body=91 status=ok
// SIG undefined FUN_14980cec8(void)

void FUN_14980cec8(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14980cf50();
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14980cad4(*puVar1,&local_38,param_3,param_4);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980cf24 FUN_14980cf24 body=43 status=ok
// SIG undefined FUN_14980cf24(void)

undefined8 FUN_14980cf24(undefined8 param_1,int param_2)

{
  FUN_14980cc7e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14980cf50 FUN_14980cf50 body=63 status=ok
// SIG undefined FUN_14980cf50(void)

longlong * FUN_14980cf50(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_14980cf90();
    lVar3 = FUN_14494321d(1);
    lVar2 = *plVar1;
    *plVar1 = lVar3;
    if (lVar2 != 0) {
      thunk_FUN_1400020a8(lVar2,1);
    }
  }
  return plVar1;
}



// FUNCTION 14980cf90 FUN_14980cf90 body=132 status=ok
// SIG undefined FUN_14980cf90(void)

void FUN_14980cf90(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_18,"PlatformCrypto",1);
  lVar1 = FUN_1447c1074(local_18);
  if (lVar1 == 0) {
    FUN_1446ddc76(&local_20,"PlatformCrypto",1);
    uVar2 = FUN_144a52528();
    FUN_14493e38c(uVar2,local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980d016 FUN_14980d016 body=36 status=ok
// SIG undefined FUN_14980d016(void)

undefined8 FUN_14980d016(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14980d056 FUN_14980d056 body=93 status=ok
// SIG undefined FUN_14980d056(void)

void FUN_14980d056(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be8fb50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14980d0b4 FUN_14980d0b4 body=123 status=ok
// SIG undefined FUN_14980d0b4(void)

void FUN_14980d0b4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be8fb50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14980d130 FUN_14980d130 body=21 status=ok
// SIG undefined FUN_14980d130(void)

undefined8 FUN_14980d130(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14980d14a FUN_14980d14a body=233 status=ok
// SIG undefined FUN_14980d14a(void)

longlong * FUN_14980d14a(longlong *param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_2 != 0) {
    lVar2 = FUN_144a6c4d8();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) != lVar2 + 0x30)) {
      lVar2 = FUN_144a78d6a();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30)) goto LAB_14980d1b8;
      FUN_14980d344(param_2 + 0xd8,local_20,param_1,FUN_14980d40a);
      FUN_14980d344(param_2 + 0xf0,local_20,param_1,FUN_14980d45c);
      bVar1 = 4;
    }
    else {
      FUN_14980d234(param_2 + 0x2d0,local_20,param_1);
      bVar1 = 2;
    }
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | bVar1;
  }
LAB_14980d1b8:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980d234 FUN_14980d234 body=189 status=ok
// SIG undefined FUN_14980d234(void)

undefined8 FUN_14980d234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  *local_40 = &PTR_LAB_14a1c7440;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14be901f0;
  puVar1[3] = param_3;
  puVar1[4] = FUN_14980d2f2;
  FUN_140725f8c(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980d2f2 FUN_14980d2f2 body=81 status=ok
// SIG undefined FUN_14980d2f2(void)

void FUN_14980d2f2(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 2);
  if ((longlong)iVar1 != 0) {
    lVar2 = param_1[1];
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if ((*(byte *)((longlong)plVar3 + 0x11) & 4) != 0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,*param_1);
        *(byte *)((longlong)plVar3 + 0x11) = *(byte *)((longlong)plVar3 + 0x11) & 0xfb;
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  return;
}



// FUNCTION 14980d344 FUN_14980d344 body=196 status=ok
// SIG undefined FUN_14980d344(void)

undefined8
FUN_14980d344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  *local_48 = &PTR_LAB_14a3ea270;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14be90260;
  puVar1[3] = param_3;
  puVar1[4] = param_4;
  FUN_14037332e(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980d40a FUN_14980d40a body=81 status=ok
// SIG undefined FUN_14980d40a(void)

void FUN_14980d40a(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 2);
  if ((longlong)iVar1 != 0) {
    lVar2 = param_1[1];
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if ((*(byte *)((longlong)plVar3 + 0x11) & 4) == 0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,*param_1);
        *(byte *)((longlong)plVar3 + 0x11) = *(byte *)((longlong)plVar3 + 0x11) | 4;
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  return;
}



// FUNCTION 14980d45c FUN_14980d45c body=81 status=ok
// SIG undefined FUN_14980d45c(void)

void FUN_14980d45c(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 2);
  if ((longlong)iVar1 != 0) {
    lVar2 = param_1[1];
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if ((*(byte *)((longlong)plVar3 + 0x11) & 4) != 0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,*param_1);
        *(byte *)((longlong)plVar3 + 0x11) = *(byte *)((longlong)plVar3 + 0x11) & 0xfb;
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  return;
}



// FUNCTION 14980d4ae FUN_14980d4ae body=124 status=ok
// SIG undefined FUN_14980d4ae(void)

void FUN_14980d4ae(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = param_1[1];
  iVar1 = *(int *)(param_1 + 2);
  uVar3 = 0;
  if ((longlong)iVar1 != 0) {
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(lVar4 + lVar5);
      if ((*(byte *)((longlong)plVar2 + 0x11) & 4) != 0) {
        (**(code **)(*plVar2 + 0x28))(plVar2,*param_1);
        *(byte *)((longlong)plVar2 + 0x11) = *(byte *)((longlong)plVar2 + 0x11) & 0xfb;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar5);
    uVar3 = *(undefined4 *)(param_1 + 2);
    lVar4 = param_1[1];
  }
  FUN_14980e820(lVar4,uVar3);
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14980d52a FUN_14980d52a body=96 status=ok
// SIG undefined FUN_14980d52a(void)

void FUN_14980d52a(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  longlong lVar5;
  
  bVar4 = *(byte *)(param_1 + 3);
  if ((bVar4 & 1) != 0) {
    iVar1 = *(int *)(param_1 + 2);
    if ((longlong)iVar1 != 0) {
      lVar2 = param_1[1];
      lVar5 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar5);
        if ((*(byte *)((longlong)plVar3 + 0x11) & 4) == 0) {
          (**(code **)(*plVar3 + 0x20))(plVar3,*param_1);
          *(byte *)((longlong)plVar3 + 0x11) = *(byte *)((longlong)plVar3 + 0x11) | 4;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar5);
      bVar4 = *(byte *)(param_1 + 3);
    }
    *(byte *)(param_1 + 3) = bVar4 & 0xfe;
  }
  return;
}



// FUNCTION 14980d58a FUN_14980d58a body=126 status=ok
// SIG undefined FUN_14980d58a(void)

void FUN_14980d58a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *(longlong *)(param_2 + 8) = param_1;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_LAB_14be902d0;
  puVar3[2] = param_2;
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_14980ebcc(param_1 + 8,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  *(longlong *)(lVar2 + (longlong)iVar1 * 0x10) = param_2;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar3;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
  return;
}



// FUNCTION 14980d608 FUN_14980d608 body=103 status=ok
// SIG undefined FUN_14980d608(void)

void FUN_14980d608(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145bb14ec();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_18);
  }
  FUN_14980ed7e(param_1 + 0x870,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980d670 FUN_14980d670 body=107 status=ok
// SIG undefined FUN_14980d670(void)

void FUN_14980d670(int *param_1,undefined2 *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_2 + 8) != 0) {
    iVar1 = param_1[0x44];
    param_1[0x44] = iVar1 + 1U;
    if ((uint)param_1[0x45] < iVar1 + 1U) {
      FUN_14980d6e6(param_1 + 2,iVar1);
    }
    piVar2 = param_1 + 2;
    if (*(int **)(param_1 + 0x42) != (int *)0x0) {
      piVar2 = *(int **)(param_1 + 0x42);
    }
    *(undefined2 **)(piVar2 + (longlong)iVar1 * 2) = param_2;
    *param_1 = *param_1 + *(int *)(param_2 + 8);
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | (byte)((ushort)*param_2 >> 9) & 1;
  }
  return;
}



// FUNCTION 14980d6e6 FUN_14980d6e6 body=119 status=ok
// SIG undefined FUN_14980d6e6(void)

void FUN_14980d6e6(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_14980d75e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14980d75e FUN_14980d75e body=141 status=ok
// SIG undefined FUN_14980d75e(void)

void FUN_14980d75e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,8);
  return;
}



// FUNCTION 14980d7ec FUN_14980d7ec body=31 status=ok
// SIG undefined FUN_14980d7ec(void)

undefined8 FUN_14980d7ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14980d824 FUN_14980d824 body=93 status=ok
// SIG undefined FUN_14980d824(void)

void FUN_14980d824(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ccd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be90160;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14980d882 FUN_14980d882 body=93 status=ok
// SIG undefined FUN_14980d882(void)

void FUN_14980d882(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ccd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be90160;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14980d8e0 FUN_14980d8e0 body=123 status=ok
// SIG undefined FUN_14980d8e0(void)

void FUN_14980d8e0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79ccd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be90160;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14980d96a FUN_14980d96a body=666 status=ok
// SIG undefined FUN_14980d96a(void)

void FUN_14980d96a(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar5 = param_1[1];
  iVar11 = 0;
  local_98 = 0;
  local_d8 = param_1;
  local_90 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_90[1] = (longlong)&DAT_100000001;
  *local_90 = (longlong)&PTR_FUN_14be901d0;
  local_90[2] = 0;
  plVar1 = (longlong *)(lVar5 + 8);
  lVar2 = lVar5 + 0x18;
  local_88 = 0x100000000;
  local_78 = (longlong *)&DAT_ffffffff;
  local_70 = 0;
  local_80 = lVar2;
  if (*(int *)(lVar5 + 0x30) != 0) {
    FUN_1449c0562(&local_88);
    iVar11 = *(int *)(lVar5 + 0x30);
  }
  local_a8 = local_78;
  plVar10 = local_a8;
  local_a0 = local_70;
  local_9c = local_6c;
  local_b8 = local_88;
  local_b0 = local_80;
  local_a8._4_4_ = (int)((ulonglong)local_78 >> 0x20);
  local_c0 = plVar1;
  if ((local_a8._4_4_ != iVar11) || (local_80 != lVar2)) {
    iVar8 = local_a8._4_4_;
    local_a8 = plVar10;
    do {
      lVar6 = *local_c0;
      lVar5 = (longlong)iVar8 * 0x60 + lVar6;
      pcVar7 = *(code **)(lVar5 + 0x10);
      plVar10 = *(longlong **)(lVar5 + 0x20);
      if (*(longlong **)(lVar5 + 0x20) == (longlong *)0x0) {
        plVar10 = (longlong *)(lVar5 + 0x30);
      }
      local_d0 = param_2;
      uVar9 = (**(code **)(*plVar10 + 8))();
      (*pcVar7)(&local_88,uVar9,&local_d0);
      if (local_88 != 0) {
        local_e8 = param_2;
        FUN_14980dc06(*local_d8,&local_d0,lVar6 + (longlong)iVar8 * 0x60,&local_88);
        FUN_145a282c4(&local_98,&local_d0);
        plVar10 = local_c8;
        if (local_c8 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_c8 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_c8)(local_c8);
            LOCK();
            piVar3 = (int *)((longlong)plVar10 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        if (local_88 != 0) {
          plVar10 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar10 = local_68;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
      }
      local_a8 = (longlong *)CONCAT44(local_a8._4_4_,(uint)local_a8 & ~local_b8._4_4_);
      FUN_1449c0562(&local_b8);
      iVar8 = local_a8._4_4_;
    } while (local_c0 != plVar1 || (local_b0 != lVar2 || local_a8._4_4_ != iVar11));
    plVar10 = local_a8;
    if (local_98 != 0) {
      FUN_14980d52a();
      plVar10 = local_a8;
    }
  }
  local_a8 = plVar10;
  plVar1 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_90 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14980dc06 FUN_14980dc06 body=825 status=ok
// SIG undefined FUN_14980dc06(void)

longlong *
FUN_14980dc06(longlong param_1,longlong *param_2,ulonglong *param_3,undefined8 *param_4,
             ulonglong param_5)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (*(ulonglong *)(param_1 + 0xa0) != param_5) {
    *(ulonglong *)(param_1 + 0xa0) = param_5;
    if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
      uVar4 = ((uint)(param_5 >> 0x14) & 0xffff ^ (uint)(param_5 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      lVar7 = param_1 + 0x60;
      if (*(longlong *)(param_1 + 0x68) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x68);
      }
      iVar9 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x70) - 1U & (uVar4 >> 0x10 ^ uVar4))
                               * 4);
      if (iVar9 != -1) {
        do {
          lVar7 = *(longlong *)(param_1 + 0x28) + (longlong)iVar9 * 0x20;
          if (*(ulonglong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar9 * 0x20) == param_5) {
            if (lVar7 != -8 && lVar7 != 0) {
              FUN_14980df40(param_1 + 0xa8);
              goto LAB_14980dc52;
            }
            break;
          }
          iVar9 = *(int *)(lVar7 + 0x18);
        } while (iVar9 != -1);
      }
    }
    local_58 = 0;
    local_50 = (longlong *)FUN_14001cc68(0x18,0x10);
    local_50[1] = (longlong)&DAT_100000001;
    *local_50 = (longlong)&PTR_FUN_14be901d0;
    local_50[2] = 0;
    FUN_145a282c4(param_1 + 0xa8,&local_58);
    plVar11 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
  }
LAB_14980dc52:
  lVar7 = *(longlong *)(param_1 + 0xa8);
  *param_2 = lVar7;
  lVar6 = *(longlong *)(param_1 + 0xb0);
  param_2[1] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    lVar7 = *param_2;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (lVar7 == 0) {
    local_58 = param_5;
    pcVar3 = (code *)*param_4;
    plVar11 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar11 = (longlong *)param_4[2];
    }
    uVar5 = (**(code **)(*plVar11 + 8))(plVar11);
    lVar7 = (*pcVar3)(uVar5,&local_58);
    if (lVar7 != 0) {
      uVar8 = FUN_14001cc68(0x20,0x10);
      FUN_14980d14a(uVar8,param_5);
      local_58 = uVar8;
      local_50 = (longlong *)FUN_14001cc68(0x18,0x10);
      local_50[1] = (longlong)&DAT_100000001;
      *local_50 = (longlong)&PTR_FUN_14be901d0;
      local_50[2] = uVar8;
      FUN_145a282c4(param_2,&local_58);
      plVar11 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      FUN_14980d58a(*param_2,lVar7);
      FUN_14980df90(param_1 + 0x20,param_5,param_2);
    }
  }
  else {
    iVar9 = *(int *)(lVar7 + 0x10);
    if ((longlong)iVar9 != 0) {
      lVar6 = *(longlong *)(lVar7 + 8);
      lVar10 = 0;
      do {
        plVar11 = *(longlong **)(lVar6 + lVar10);
        (**(code **)(*plVar11 + 8))(plVar11,&local_58);
        if (local_58 == *param_3) {
          *(byte *)(lVar7 + 0x18) = *(byte *)(lVar7 + 0x18) | 1;
          goto LAB_14980dd3a;
        }
        lVar10 = lVar10 + 0x10;
      } while ((longlong)iVar9 * 0x10 != lVar10);
    }
    local_58 = param_5;
    pcVar3 = (code *)*param_4;
    plVar11 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar11 = (longlong *)param_4[2];
    }
    uVar5 = (**(code **)(*plVar11 + 8))(plVar11);
    lVar6 = (*pcVar3)(uVar5,&local_58);
    if (lVar6 != 0) {
      FUN_14980d58a(lVar7,lVar6);
    }
  }
LAB_14980dd3a:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14980df40 FUN_14980df40 body=80 status=ok
// SIG undefined FUN_14980df40(void)

undefined8 * FUN_14980df40(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



// FUNCTION 14980df90 FUN_14980df90 body=270 status=ok
// SIG undefined FUN_14980df90(void)

void FUN_14980df90(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = *param_3;
  local_60 = (longlong *)param_3[1];
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  if (local_68 == 0) {
    FUN_14980e0a0(param_1,param_2);
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    iVar3 = *(int *)(param_1 + 0x10);
    iVar4 = *(int *)(param_1 + 0x3c);
    *(undefined8 *)(param_1 + 0x80) = param_2;
    FUN_145a282c4(param_1 + 0x88,&local_68);
    local_58 = param_1 + 0x80;
    local_50 = param_1 + 0x88;
    FUN_14980e344(param_1 + 8,local_44);
    if (iVar3 == iVar4) {
      FUN_140f9708a(&DAT_14c9647b8,param_1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  }
  plVar5 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


