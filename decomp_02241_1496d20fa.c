// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1496d20fa FUN_1496d20fa body=127 status=ok
// SIG undefined FUN_1496d20fa(void)

void FUN_1496d20fa(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bdcde70;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 1496d2179 FUN_1496d2179 body=74 status=ok
// SIG undefined FUN_1496d2179(void)

void FUN_1496d2179(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1411b354a(param_1,0,0,0,0);
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined8 *)(param_1 + 0x228) = 0;
    param_1 = param_1 + 0x230;
  }
  return;
}



// FUNCTION 1496d21c4 FUN_1496d21c4 body=146 status=ok
// SIG undefined FUN_1496d21c4(void)

void FUN_1496d21c4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x230,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x230)) {
      uVar5 = uVar4 / 0x230 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x230,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1496d2258 FUN_1496d2258 body=98 status=ok
// SIG undefined FUN_1496d2258(void)

void FUN_1496d2258(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x230 + *param_1);
  FUN_145c32397(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x230 + (longlong)_Dst),(longlong)iVar2 * 0x230);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1496d22ba FUN_1496d22ba body=62 status=ok
// SIG undefined FUN_1496d22ba(void)

void FUN_1496d22ba(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1496d22f8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x230,8);
  }
  return;
}



// FUNCTION 1496d22f8 FUN_1496d22f8 body=110 status=ok
// SIG undefined FUN_1496d22f8(void)

ulonglong FUN_1496d22f8(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x230) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1496d2331;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x230,8);
      param_2 = param_2 / 0x230;
    }
  }
LAB_1496d2331:
  return param_2 & 0xffffffff;
}



// FUNCTION 1496d2366 FUN_1496d2366 body=48 status=ok
// SIG undefined FUN_1496d2366(void)

void FUN_1496d2366(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x38,8);
  }
  return;
}



// FUNCTION 1496d2396 FUN_1496d2396 body=31 status=ok
// SIG undefined FUN_1496d2396(void)

void FUN_1496d2396(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 8);
    do {
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1496d23b6 FUN_1496d23b6 body=143 status=ok
// SIG undefined FUN_1496d23b6(void)

void FUN_1496d23b6(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1496d2446 FUN_1496d2446 body=89 status=ok
// SIG undefined FUN_1496d2446(void)

void FUN_1496d2446(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x38 + *param_1);
  FUN_145c3236f(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x38 + (longlong)_Dst),(longlong)iVar2 * 0x38);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1496d24a0 FUN_1496d24a0 body=62 status=ok
// SIG undefined FUN_1496d24a0(void)

void FUN_1496d24a0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1496d24de(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 1496d24de FUN_1496d24de body=104 status=ok
// SIG undefined FUN_1496d24de(void)

ulonglong FUN_1496d24de(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x38) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1496d2514;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x38,8);
      param_2 = param_2 / 0x38;
    }
  }
LAB_1496d2514:
  return param_2 & 0xffffffff;
}



// FUNCTION 1496d2546 FUN_1496d2546 body=89 status=ok
// SIG undefined FUN_1496d2546(void)

void FUN_1496d2546(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_140b1730a(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1496d25a0 FUN_1496d25a0 body=62 status=ok
// SIG undefined FUN_1496d25a0(void)

void FUN_1496d25a0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1496d25de(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1496d25de FUN_1496d25de body=93 status=ok
// SIG undefined FUN_1496d25de(void)

ulonglong FUN_1496d25de(uint param_1,uint param_2)

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



// FUNCTION 1496d263b FUN_1496d263b body=175 status=ok
// SIG undefined FUN_1496d263b(void)

undefined8 FUN_1496d263b(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_145bae90c();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d2756 FUN_1496d2756 body=54 status=ok
// SIG undefined FUN_1496d2756(void)

bool FUN_1496d2756(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  uVar3 = (**(code **)(*param_1 + 0x2c0))();
  iVar2 = (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2,uVar3);
  return iVar2 == 2;
}



// FUNCTION 1496d2795 FUN_1496d2795 body=148 status=ok
// SIG undefined FUN_1496d2795(void)

undefined8 FUN_1496d2795(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145baef72();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d282a FUN_1496d282a body=349 status=ok
// SIG undefined FUN_1496d282a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1496d282a(void)

{
  undefined8 *_Src;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *_Dst;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc22018) {
    FUN_144b3d300(&DAT_14cc22018);
    if (DAT_14cc22018 == -1) {
      uVar1 = FUN_145b7126e();
      uVar2 = FUN_145b71442();
      uVar3 = FUN_145b71358();
      uVar4 = FUN_145a7b1c0();
      local_50 = (undefined8 *)0x0;
      local_48 = 4;
      FUN_1484d6e40(&local_50,4,0);
      _Src = local_50;
      *local_50 = uVar1;
      local_50[1] = uVar2;
      local_50[2] = uVar3;
      local_50[3] = uVar4;
      DAT_14cc22008 = (undefined *)0x0;
      _DAT_14cc22014 = 5;
      lVar5 = (longlong)local_48;
      _DAT_14cc22010 = local_48;
      FUN_1484d23fc(&DAT_14cc21fe0,local_48,5);
      if (lVar5 != 0) {
        _Dst = &DAT_14cc21fe0;
        if (DAT_14cc22008 != (undefined *)0x0) {
          _Dst = DAT_14cc22008;
        }
        memcpy(_Dst,_Src,lVar5 << 3);
      }
      if (local_50 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144582f44);
      _Init_thread_footer(&DAT_14cc22018);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return &DAT_14cc21fe0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d2988 FUN_1496d2988 body=448 status=ok
// SIG undefined FUN_1496d2988(void)

void FUN_1496d2988(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1484416be();
  plVar1 = (longlong *)FUN_1496d2b49(param_1);
  if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar1);
  }
  param_1[0x18] = (longlong)plVar1;
  FUN_140056680(&local_40,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1,&local_40);
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x18]);
  local_40 = L"ToolName";
  local_38 = 8;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"UTransferMeshTool";
  local_38 = 0x11;
  FUN_1446e940c(local_48,&local_40);
  FUN_140208bae(&local_40,local_48,local_44,L"Transfer");
  (**(code **)(*param_1 + 0x370))(param_1,&local_40);
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_40 = L"OnStartTool";
  local_38 = 0xb;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"UTransferMeshTool";
  local_38 = 0x11;
  FUN_1446e940c(local_48,&local_40);
  FUN_140208bae(&local_40,local_48,local_44,L"Copy Mesh from Source object to Target object");
  (**(code **)(*plVar1 + 0x340))(plVar1,&local_40,2);
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d2b49 FUN_1496d2b49 body=148 status=ok
// SIG undefined FUN_1496d2b49(void)

undefined8 FUN_1496d2b49(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14599db26();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d2be8 FUN_1496d2be8 body=1298 status=ok
// SIG undefined FUN_1496d2be8(void)

void FUN_1496d2be8(longlong *param_1,char param_2)

{
  uint uVar1;
  void *pvVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_618 [44];
  undefined1 local_5ec [4];
  undefined4 local_5e8;
  undefined1 local_5e4 [4];
  undefined4 local_5e0;
  undefined1 local_5dc;
  longlong local_5d8 [2];
  void *local_5c8;
  ulonglong uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  wchar_t *local_300;
  undefined4 local_2f8;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_618;
  plVar11 = (longlong *)param_1[0x18];
  FUN_140056680(&local_300,&DAT_149dfb77a);
  (**(code **)(*plVar11 + 0x2a0))(plVar11,param_1,&local_300);
  if (local_300 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (param_2 != '\x01') goto LAB_1496d2c52;
  lVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
  local_300 = L"TransferMeshToolTransactionName";
  local_2f8 = 0x1f;
  FUN_1446e940c(&local_5c8,&local_300);
  local_300 = L"UTransferMeshTool";
  local_2f8 = 0x11;
  FUN_1446e940c(local_5d8,&local_300);
  FUN_140208bae(&local_300,local_5d8,&local_5c8,L"Transfer Mesh");
  (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x10))(lVar6 + 0x28,&local_300);
  if (local_300 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_300 + 0x10))();
  }
  FUN_148506417(local_5d8,*(undefined8 *)param_1[0x14],0);
  cVar3 = *(char *)(param_1[0x18] + 0xa8);
  plVar11 = (longlong *)0x0;
  if (cVar3 != '\0') {
    plVar11 = local_5d8;
  }
  FUN_1458c1dca(&local_300);
  local_5e4[0] = 0;
  local_5e0 = 1000;
  local_5dc = 1;
  lVar6 = *(longlong *)param_1[0x14];
  if (lVar6 != 0) {
    uVar7 = FUN_145b71442();
    lVar6 = FUN_144718840(lVar6,uVar7);
    if (lVar6 != 0) {
      local_5c8 = (void *)0x0;
      uVar1 = *(uint *)(param_1[0x18] + 0xb8);
      pvVar2 = *(void **)(param_1[0x18] + 0xb0);
      uStack_5c0 = CONCAT44(uStack_5c0._4_4_,uVar1);
      if ((longlong)(int)uVar1 == 0) {
        uStack_5c0 = (ulonglong)uVar1;
      }
      else {
        FUN_1446dd670(&local_5c8,uVar1,0);
        memcpy(local_5c8,pvVar2,(longlong)(int)uVar1 * 2);
      }
      cVar4 = FUN_144a791f8(&local_5c8,L"HiRes",5,1);
      if (cVar4 == '\0') {
        iVar5 = FUN_140e1307c(param_1[0x18] + 0xd8,param_1[0x18] + 0xb0);
        if (iVar5 != -1) {
          local_5e0 = *(undefined4 *)(*(longlong *)(param_1[0x18] + 0xe8) + (longlong)iVar5 * 4);
          goto LAB_1496d2fcd;
        }
      }
      else {
        local_5e0 = 100;
LAB_1496d2fcd:
        local_5e4[0] = 1;
      }
      if (local_5c8 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  FUN_1485066d8(&local_5c8,*(undefined8 *)param_1[0x14],local_5e4);
  FUN_146f781a2(&local_300,&local_5c8);
  FUN_145838e00(&local_5c8);
  lVar6 = *(longlong *)(param_1[0x14] + 8);
  if (lVar6 == 0) {
    uVar7 = 0;
LAB_1496d2dd6:
    local_5c8 = (void *)0x3e800000000;
    FUN_148506a2a(uVar7,&local_300,plVar11);
  }
  else {
    uVar7 = FUN_145b71358();
    plVar10 = (longlong *)FUN_144718840(lVar6,uVar7);
    if ((plVar10 == (longlong *)0x0) || (lVar6 = param_1[0x18], *(char *)(lVar6 + 0x118) == '\0')) {
      uVar7 = *(undefined8 *)(param_1[0x14] + 8);
      goto LAB_1496d2dd6;
    }
    local_5ec[0] = 0;
    local_5e8 = 1000;
    local_5c8 = (void *)0x0;
    uVar1 = *(uint *)(lVar6 + 200);
    pvVar2 = *(void **)(lVar6 + 0xc0);
    uStack_5c0 = CONCAT44(uStack_5c0._4_4_,uVar1);
    if ((longlong)(int)uVar1 == 0) {
      uStack_5c0 = (ulonglong)uVar1;
    }
    else {
      FUN_1446dd670(&local_5c8,uVar1,0);
      memcpy(local_5c8,pvVar2,(longlong)(int)uVar1 * 2);
    }
    cVar4 = FUN_144a791f8(&local_5c8,L"HiRes",5,1);
    if (cVar4 == '\0') {
      iVar5 = FUN_140e1307c(param_1[0x18] + 0xf8,param_1[0x18] + 0xc0);
      if (iVar5 != -1) {
        local_5e8 = *(undefined4 *)(*(longlong *)(param_1[0x18] + 0x108) + (longlong)iVar5 * 4);
        goto LAB_1496d3070;
      }
    }
    else {
      local_5e8 = 100;
LAB_1496d3070:
      local_5ec[0] = 1;
    }
    if (cVar3 != '\0') {
      FUN_148506462(*(undefined8 *)(param_1[0x14] + 8),local_5d8,1);
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,&local_300,local_5ec);
    if (local_5c8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(char *)(param_1[0x18] + 0xa9) == '\x01') {
    uVar7 = FUN_1485062e8(*(undefined8 *)param_1[0x14]);
    cVar3 = FUN_1485075e2(uVar7,0);
    if (cVar3 != '\0') {
      uVar8 = FUN_1485062e8(*(undefined8 *)(param_1[0x14] + 8));
      cVar3 = FUN_1485075e2(uVar8,1);
      if (cVar3 != '\0') {
        uVar9 = FUN_14850766a(uVar7);
        local_588 = 0;
        uStack_580 = 0;
        local_598 = 0;
        uStack_590 = 0;
        local_5a8 = 0;
        uStack_5a0 = 0;
        local_5b8 = 0;
        uStack_5b0 = 0;
        local_5c8 = (void *)0x0;
        uStack_5c0 = 0;
        cVar3 = FUN_14850789a(uVar7);
        if (cVar3 != '\0') {
          FUN_148507fa1(uVar8,&local_5c8,uVar9);
        }
        FUN_14838fe66(&local_5c8);
      }
    }
  }
  lVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x18))(lVar6 + 0x28);
  FUN_145838e00(&local_300);
  if (local_5d8[0] != 0) {
    FUN_1400020a8();
  }
LAB_1496d2c52:
  if ((local_40 ^ (ulonglong)auStack_618) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d3128 FUN_1496d3128 body=136 status=ok
// SIG undefined FUN_1496d3128(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1496d3128(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc22108) {
    FUN_144b3d300(&DAT_14cc22108);
    if (DAT_14cc22108 == -1) {
      _DAT_14cc220d0 = FUN_145a7b1c0();
      DAT_14cc220f8 = 0;
      _DAT_14cc22100 = 0x500000001;
      atexit((_func_5014 *)&LAB_144582ffa);
      _Init_thread_footer(&DAT_14cc22108);
    }
  }
  return &DAT_14cc220d0;
}



// FUNCTION 1496d31b9 FUN_1496d31b9 body=148 status=ok
// SIG undefined FUN_1496d31b9(void)

undefined8 FUN_1496d31b9(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145baf146();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d324e FUN_1496d324e body=881 status=ok
// SIG undefined FUN_1496d324e(void)

void FUN_1496d324e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_138 [40];
  undefined1 local_110 [4];
  undefined1 local_10c [4];
  wchar_t *local_108;
  undefined4 local_100;
  undefined1 *local_f8;
  undefined8 local_e8;
  undefined **local_d8;
  longlong *local_d0;
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined **local_98;
  longlong *local_90;
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1484416be();
  plVar1 = (longlong *)FUN_148f4925a(param_1);
  if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar1);
  }
  param_1[0x1c] = (longlong)plVar1;
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1);
  plVar1 = (longlong *)FUN_14841014b(param_1);
  (**(code **)(*plVar1 + 0x358))(plVar1,param_1 + 0x17);
  (**(code **)(*param_1 + 0x2e8))(param_1,plVar1,0);
  uVar2 = FUN_1409ffe1d();
  lVar3 = FUN_1496d35c0(uVar2);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar3);
  }
  param_1[0x19] = lVar3;
  (**(code **)(*param_1 + 0x308))(param_1,lVar3);
  plVar1 = (longlong *)param_1[0x19];
  FUN_140056680(&local_108,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1,&local_108);
  if (local_108 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_68 = 0;
  local_58 = &PTR_LAB_14bdd81d0;
  local_78 = &LAB_144583196;
  local_50 = param_1;
  FUN_1496d3656(param_1[0x19] + 0x28,param_1[0x19] + 0xa8);
  local_a8 = 0;
  local_98 = &PTR_LAB_14bdd81f0;
  local_b8 = &LAB_1445831e8;
  local_90 = param_1;
  FUN_1484c9b00(param_1[0x19] + 0x28,param_1[0x19] + 0xa9);
  local_e8 = 0;
  local_d8 = &PTR_LAB_14bdd8210;
  local_f8 = &LAB_144583246;
  local_d0 = param_1;
  FUN_1484c9b00(param_1[0x19] + 0x28,param_1[0x19] + 0xaa);
  *(undefined1 *)(param_1[0x19] + 0xae) = 0;
  if (0 < (int)param_1[0x15]) {
    lVar3 = 0;
    do {
      lVar4 = FUN_1485062e8(*(undefined8 *)(param_1[0x14] + lVar3 * 8));
      if (lVar4 != 0) {
        lVar5 = FUN_144a80466();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          *(undefined1 *)(param_1[0x19] + 0xae) = 1;
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[0x15]);
  }
  FUN_1496d372c(param_1,*(undefined1 *)(param_1[0x19] + 0xa8));
  local_108 = L"ToolName";
  local_100 = 8;
  FUN_1446e940c(local_10c,&local_108);
  local_108 = L"UTransformMeshesTool";
  local_100 = 0x14;
  FUN_1446e940c(local_110,&local_108);
  FUN_140208bae(&local_108,local_110,local_10c,L"Transform");
  (**(code **)(*param_1 + 0x370))(param_1,&local_108);
  if (local_108 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_108 + 0x10))();
  }
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_108 = L"OnStartTransformMeshesTool";
  local_100 = 0x1a;
  FUN_1446e940c(local_10c,&local_108);
  local_108 = L"UTransformMeshesTool";
  local_100 = 0x14;
  FUN_1446e940c(local_110,&local_108);
  FUN_140208bae(&local_108,local_110,local_10c,
                L"Transform the selected objects. Middle-mouse-drag on gizmo to reposition it. Hold Ctrl while dragging to snap/align. [A] cycles through Transform modes. [S] toggles Set Pivot Mode. [D] Toggles Snap Drag Mode. [W] and [E] cycle through Snap Drag Source and Rotation types."
               );
  (**(code **)(*plVar1 + 0x340))(plVar1,&local_108,2);
  if (local_108 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_108 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d35c0 FUN_1496d35c0 body=148 status=ok
// SIG undefined FUN_1496d35c0(void)

undefined8 FUN_1496d35c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459fcdda();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d3656 FUN_1496d3656 body=212 status=ok
// SIG undefined FUN_1496d3656(void)

void FUN_1496d3656(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_1496dba4e(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d372c FUN_1496d372c body=66 status=ok
// SIG undefined FUN_1496d372c(void)

void FUN_1496d372c(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  FUN_1496d3f9c();
  if (param_2 == '\x01') {
    uVar1 = 1;
  }
  else {
    if (param_2 == '\x02') {
      FUN_1496d4326();
      goto LAB_1496d3761;
    }
    uVar1 = 0;
  }
  FUN_1496d3ffc(param_1,uVar1);
LAB_1496d3761:
  *(char *)(param_1 + 0xe8) = param_2;
  return;
}



// FUNCTION 1496d376e FUN_1496d376e body=165 status=ok
// SIG undefined FUN_1496d376e(void)

void FUN_1496d376e(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)param_1[0x19];
  FUN_140056680(local_30,&DAT_149dfb77a);
  (**(code **)(*plVar2 + 0x2a0))(plVar2,param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  (**(code **)(*(longlong *)param_1[0x1c] + 0x2a8))();
  uVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
  plVar2 = (longlong *)FUN_148451354(uVar1);
  (**(code **)(*plVar2 + 0x2d8))(plVar2,param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d3828 FUN_1496d3828 body=1907 status=ok
// SIG undefined FUN_1496d3828(void)

void FUN_1496d3828(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_218 [32];
  wchar_t **local_1f8;
  longlong **local_1f0;
  undefined1 local_1e8;
  undefined8 *local_1e0;
  code **local_1d8;
  undefined8 local_1d0;
  longlong local_1c8 [2];
  undefined1 local_1b8 [4];
  undefined1 local_1b4 [4];
  undefined1 local_1b0 [4];
  undefined1 local_1ac [4];
  longlong *local_1a8 [2];
  wchar_t *local_198;
  undefined4 local_190;
  code *local_188 [2];
  undefined8 local_178;
  undefined **local_168;
  undefined8 local_160;
  code *local_148 [2];
  undefined8 local_138;
  undefined **local_128;
  undefined8 local_120;
  code *local_108 [2];
  undefined8 local_f8;
  undefined **local_e8;
  undefined8 local_e0;
  code *local_c8 [2];
  undefined8 local_b8;
  undefined **local_a8;
  undefined8 local_a0;
  code *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_78 = 0;
  local_68 = &PTR_LAB_14bdd8230;
  local_88[0] = FUN_1445832c2;
  local_198 = L"TransformToggleSetPivotTooltip";
  local_190 = 0x1e;
  local_1d0 = param_2;
  local_60 = param_1;
  FUN_1446e940c(local_1ac,&local_198);
  local_198 = L"UTransformMeshesTool";
  local_190 = 0x14;
  FUN_1446e940c(local_1b0,&local_198);
  FUN_140208bae(local_1a8,local_1b0,local_1ac,L"Toggle Set Pivot on and off");
  local_198 = L"TransformToggleSetPivot";
  local_190 = 0x17;
  FUN_1446e940c(local_1b4,&local_198);
  local_198 = L"UTransformMeshesTool";
  local_190 = 0x14;
  FUN_1446e940c(local_1b8,&local_198);
  FUN_140208bae(&local_198,local_1b8,local_1b4,L"Toggle Set Pivot");
  FUN_140056680(local_1c8,L"ToggleSetPivot");
  local_1e0 = &DAT_14c965130;
  local_1e8 = 0;
  local_1f8 = &local_198;
  local_1f0 = local_1a8;
  local_1d8 = local_88;
  FUN_148450124(local_1d0,param_1,0x2711,local_1c8);
  if (local_1c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_198 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_198 + 0x10))();
  }
  if (local_1a8[0] != (longlong *)0x0) {
    (**(code **)(*local_1a8[0] + 0x10))();
  }
  local_b8 = 0;
  local_a8 = &PTR_LAB_14bdd8250;
  local_c8[0] = FUN_144583386;
  local_198 = L"TransformToggleSnapDragTooltip";
  local_190 = 0x1e;
  local_a0 = param_1;
  FUN_1446e940c(local_1ac,&local_198);
  local_198 = L"UTransformMeshesTool";
  local_190 = 0x14;
  FUN_1446e940c(local_1b0,&local_198);
  FUN_140208bae(local_1a8,local_1b0,local_1ac,L"Toggle SnapDrag on and off");
  local_198 = L"TransformToggleSnapDrag";
  local_190 = 0x17;
  FUN_1446e940c(local_1b4,&local_198);
  local_198 = L"UTransformMeshesTool";
  local_190 = 0x14;
  FUN_1446e940c(local_1b8,&local_198);
  FUN_140208bae(&local_198,local_1b8,local_1b4,L"Toggle SnapDrag");
  FUN_140056680(local_1c8,L"ToggleSnapDrag");
  local_1e0 = &DAT_14c966ef8;
  local_1e8 = 0;
  local_1f8 = &local_198;
  local_1f0 = local_1a8;
  local_1d8 = local_c8;
  FUN_148450124(local_1d0,param_1,0x2712,local_1c8);
  if (local_1c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_198 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_198 + 0x10))();
  }
  if (local_1a8[0] != (longlong *)0x0) {
    (**(code **)(*local_1a8[0] + 0x10))();
  }
  local_f8 = 0;
  local_e8 = &PTR_LAB_14bdd8270;
  local_108[0] = FUN_14458344a;
  local_198 = L"TransformCycleTransformModeTooltip";
  local_190 = 0x22;
  local_e0 = param_1;
  FUN_1446e940c(local_1ac,&local_198);
  local_198 = L"UTransformMeshesTool";
  local_190 = 0x14;
  FUN_1446e940c(local_1b0,&local_198);
  FUN_140208bae(local_1a8,local_1b0,local_1ac,L"Cycle through available Transform Modes");
  local_198 = L"TransformCycleTransformMode";
  local_190 = 0x1b;
  FUN_1446e940c(local_1b4,&local_198);
  local_198 = L"UTransformMeshesTool";
  local_190 = 0x14;
  FUN_1446e940c(local_1b8,&local_198);
  FUN_140208bae(&local_198,local_1b8,local_1b4,L"Next Transform Mode");
  FUN_140056680(local_1c8,L"CycleTransformMode");
  local_1e0 = &DAT_14c966f88;
  local_1e8 = 0;
  local_1f8 = &local_198;
  local_1f0 = local_1a8;
  local_1d8 = local_108;
  FUN_148450124(local_1d0,param_1,0x2713,local_1c8);
  if (local_1c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_198 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_198 + 0x10))();
  }
  if (local_1a8[0] != (longlong *)0x0) {
    (**(code **)(*local_1a8[0] + 0x10))();
  }
  local_138 = 0;
  local_128 = &PTR_LAB_14bdd8290;
  local_148[0] = FUN_14458352a;
  local_198 = L"TransformCycleSourceModeTooltip";
  local_190 = 0x1f;
  local_120 = param_1;
  FUN_1446e940c(local_1ac,&local_198);
  local_198 = L"UTransformMeshesTool";
  local_190 = 0x14;
  FUN_1446e940c(local_1b0,&local_198);
  FUN_140208bae(local_1a8,local_1b0,local_1ac,L"Cycle through available SnapDrag Source Modes");
  local_198 = L"TransformCycleSourceMode";
  local_190 = 0x18;
  FUN_1446e940c(local_1b4,&local_198);
  local_198 = L"UTransformMeshesTool";
  local_190 = 0x14;
  FUN_1446e940c(local_1b8,&local_198);
  FUN_140208bae(&local_198,local_1b8,local_1b4,L"Next SnapDrag Source Mode");
  FUN_140056680(local_1c8,L"CycleSourceMode");
  local_1e0 = &DAT_14c966fd0;
  local_1e8 = 0;
  local_1f8 = &local_198;
  local_1f0 = local_1a8;
  local_1d8 = local_148;
  FUN_148450124(local_1d0,param_1,0x2714,local_1c8);
  if (local_1c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_198 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_198 + 0x10))();
  }
  if (local_1a8[0] != (longlong *)0x0) {
    (**(code **)(*local_1a8[0] + 0x10))();
  }
  local_178 = 0;
  local_168 = &PTR_LAB_14bdd82b0;
  local_188[0] = FUN_1445835f8;
  local_198 = L"TransformCycleRotationModeTooltip";
  local_190 = 0x21;
  local_160 = param_1;
  FUN_1446e940c(local_1ac,&local_198);
  local_198 = L"UTransformMeshesTool";
  local_190 = 0x14;
  FUN_1446e940c(local_1b0,&local_198);
  FUN_140208bae(local_1a8,local_1b0,local_1ac,L"Cycle through available SnapDrag Rotation Modes");
  local_198 = L"TransformCycleRotationMode";
  local_190 = 0x1a;
  FUN_1446e940c(local_1b4,&local_198);
  local_198 = L"UTransformMeshesTool";
  local_190 = 0x14;
  FUN_1446e940c(local_1b8,&local_198);
  FUN_140208bae(&local_198,local_1b8,local_1b4,L"Next SnapDrag Rotation Mode");
  FUN_140056680(local_1c8,L"CycleRotationMode");
  local_1e0 = &DAT_14c964fe0;
  local_1e8 = 0;
  local_1f8 = &local_198;
  local_1f0 = local_1a8;
  local_1d8 = local_188;
  FUN_148450124(local_1d0,param_1,0x2715,local_1c8);
  if (local_1c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_198 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_198 + 0x10))();
  }
  if (local_1a8[0] != (longlong *)0x0) {
    (**(code **)(*local_1a8[0] + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d3f9c FUN_1496d3f9c body=96 status=ok
// SIG undefined FUN_1496d3f9c(void)

void FUN_1496d3f9c(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x2c8))();
  plVar2 = (longlong *)FUN_148451354(uVar1);
  (**(code **)(*plVar2 + 0x2d8))(plVar2,param_1);
  if (-1 < *(int *)((longlong)param_1 + 0xdc)) {
    *(undefined4 *)(param_1 + 0x1b) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  FUN_1496dbe46(param_1 + 0x1a);
  return;
}



// FUNCTION 1496d3ffc FUN_1496d3ffc body=808 status=ok
// SIG undefined FUN_1496d3ffc(void)

void FUN_1496d3ffc(longlong *param_1,char param_2)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined1 local_120;
  char local_109;
  longlong local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  longlong *local_f0;
  code *local_e8 [2];
  undefined8 local_d8;
  undefined **local_c8;
  longlong local_c0;
  undefined4 local_b8;
  code *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined **local_88;
  longlong local_80;
  undefined4 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_f0 = (longlong *)0x0;
  plVar5 = (longlong *)FUN_1484c6256();
  if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar5);
  }
  if (param_1[0x19] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(param_1[0x19] + 0xaa);
  }
  *(undefined1 *)((longlong)plVar5 + 0xd1) = uVar2;
  *(char *)(plVar5 + 0x1a) = param_2;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = plVar5;
  if ((int)param_1[0x15] < 1) {
    bVar13 = false;
  }
  else {
    lVar12 = 0;
    local_109 = param_2;
    do {
      lVar6 = FUN_1485062e8(*(undefined8 *)(param_1[0x14] + lVar12 * 8));
      if (lVar6 == 0) {
LAB_1496d40da:
        (**(code **)(*plVar5 + 0x2a0))(plVar5,lVar6,1);
      }
      else {
        lVar7 = FUN_144a80466();
        if (((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) ||
           (*(char *)(param_1[0x19] + 0xa9) != '\x01')) goto LAB_1496d40da;
        uVar4 = FUN_147af9036(lVar6);
        if (0 < (int)uVar4) {
          uVar11 = 0;
          do {
            cVar3 = FUN_147af903e(lVar6,uVar11 & 0xffffffff);
            if (cVar3 == '\0') goto LAB_1496d42d9;
            local_98 = 0;
            local_88 = &PTR_LAB_14bdd8000;
            local_a8 = FUN_1445830aa;
            local_d8 = 0;
            local_c8 = &PTR_LAB_14bdd8020;
            local_e8[0] = FUN_14458310c;
            local_120 = 1;
            local_128 = uVar11;
            local_c0 = lVar6;
            local_b8 = (int)uVar11;
            local_80 = lVar6;
            local_78 = (int)uVar11;
            (**(code **)(*plVar5 + 0x2a8))(plVar5,lVar6,local_e8,&local_a8);
            uVar11 = uVar11 + 1;
          } while (uVar4 != uVar11);
        }
      }
      uVar11 = uStack_100;
      lVar7 = (longlong)(int)uStack_100;
      uVar4 = (int)uStack_100 + 1;
      uStack_100 = CONCAT44(uStack_100._4_4_,uVar4);
      if (uStack_100._4_4_ < uVar4) {
        FUN_140097524(&local_108,uVar11 & 0xffffffff);
      }
      *(longlong *)(local_108 + lVar7 * 8) = lVar6;
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)param_1[0x15]);
    bVar13 = (int)param_1[0x15] == 1;
    param_2 = local_109;
  }
  uVar10 = 0x103fe;
  if (param_2 != '\0') {
    uVar10 = 0x1fffe;
  }
  if (bVar13) {
    uVar10 = 0x1fffe;
  }
  local_a8 = (code *)0x0;
  uStack_a0 = 0;
  uVar8 = (**(code **)(*param_1 + 0x2c8))(param_1);
  plVar9 = (longlong *)FUN_14843d221(uVar8,uVar10,param_1,&local_a8);
  if ((plVar9 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar9);
  }
  local_f0 = plVar9;
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*plVar9 + 800))(plVar9,plVar5,0);
  FUN_1484f6c9e(param_1[0x1c] + 0x30,local_f0,&local_108,0);
  iVar1 = (int)param_1[0x1b];
  *(uint *)(param_1 + 0x1b) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xdc) < iVar1 + 1U) {
    FUN_1496dbdc0(param_1 + 0x1a,iVar1);
  }
  FUN_1496dbd6c((longlong)iVar1 * 0x10 + param_1[0x1a],&local_f8);
LAB_1496d42d9:
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496d4326 FUN_1496d4326 body=1176 status=ok
// SIG undefined FUN_1496d4326(void)

void FUN_1496d4326(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  code cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  code *pcVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined1 local_120;
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  code *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined **local_c8;
  longlong local_c0;
  undefined4 local_b8;
  code *local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  undefined **local_88;
  longlong local_80;
  undefined4 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_f8 = 0;
  uStack_f0 = 0;
  if (0 < (int)param_1[0x15]) {
    local_110 = param_1 + 0x1a;
    lVar14 = 0;
    do {
      lVar6 = FUN_1485062e8(*(undefined8 *)(param_1[0x14] + lVar14 * 8));
      if (lVar6 == 0) {
LAB_1496d45f1:
        plStack_a0 = (longlong *)0x0;
        pcVar11 = (code *)FUN_1484c6256(param_1);
        if ((pcVar11 != (code *)0x0) && (DAT_14c950c29 != '\0')) {
          FUN_14689c22e(pcVar11);
        }
        if (param_1[0x19] == 0) {
          cVar3 = (code)0x0;
        }
        else {
          cVar3 = *(code *)(param_1[0x19] + 0xaa);
        }
        pcVar11[0xd1] = cVar3;
        local_a8 = pcVar11;
        (**(code **)(*(longlong *)pcVar11 + 0x2a0))(pcVar11,lVar6,1);
        local_e8 = (code *)0x0;
        uStack_e0 = 0;
        uVar9 = (**(code **)(*param_1 + 0x2c8))(param_1);
        plVar8 = (longlong *)FUN_14843d221(uVar9,0x1fffe,param_1,&local_e8);
        if ((plVar8 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
          FUN_14689c22e(plVar8);
        }
        plStack_a0 = plVar8;
        if (local_e8 != (code *)0x0) {
          FUN_1400020a8();
        }
        (**(code **)(*plVar8 + 800))(plVar8,pcVar11,0);
        uVar4 = uStack_f0._4_4_;
        iVar12 = 0;
        if (uStack_f0 < 0) {
          uStack_f0 = (ulonglong)uStack_f0._4_4_ << 0x20;
          FUN_14009a542(&local_f8,0);
          uVar4 = uStack_f0._4_4_;
          iVar12 = (int)uStack_f0;
        }
        uStack_f0 = CONCAT44(uStack_f0._4_4_,iVar12 + 1U);
        if (uVar4 < iVar12 + 1U) {
          FUN_140097524(&local_f8,iVar12);
        }
        *(longlong *)(local_f8 + (longlong)iVar12 * 8) = lVar6;
        FUN_1484f6c9e(param_1[0x1c] + 0x30,plStack_a0,&local_f8,0);
        iVar12 = (int)param_1[0x1b];
        *(uint *)(param_1 + 0x1b) = iVar12 + 1U;
        if (*(uint *)((longlong)param_1 + 0xdc) < iVar12 + 1U) {
          FUN_1496dbdc0(local_110,iVar12);
        }
        FUN_1496dbd6c((longlong)iVar12 * 0x10 + *local_110,&local_a8);
      }
      else {
        lVar7 = FUN_144a80466();
        if (((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) ||
           (*(char *)(param_1[0x19] + 0xa9) != '\x01')) goto LAB_1496d45f1;
        uVar4 = FUN_147af9036(lVar6);
        if (0 < (int)uVar4) {
          uVar13 = 0;
          do {
            cVar1 = FUN_147af903e(lVar6,uVar13 & 0xffffffff);
            if (cVar1 == '\0') goto LAB_1496d477a;
            local_100 = (longlong *)0x0;
            plVar8 = (longlong *)FUN_1484c6256(param_1);
            if ((plVar8 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
              FUN_14689c22e(plVar8);
            }
            if (param_1[0x19] == 0) {
              uVar2 = 0;
            }
            else {
              uVar2 = *(undefined1 *)(param_1[0x19] + 0xaa);
            }
            *(undefined1 *)((longlong)plVar8 + 0xd1) = uVar2;
            local_98 = 0;
            local_88 = &PTR_LAB_14bdd8000;
            local_a8 = FUN_1445830aa;
            local_d8 = 0;
            local_c8 = &PTR_LAB_14bdd8020;
            local_e8 = FUN_14458310c;
            local_120 = 1;
            local_128 = uVar13;
            local_108 = plVar8;
            local_c0 = lVar6;
            local_b8 = (int)uVar13;
            local_80 = lVar6;
            local_78 = (int)uVar13;
            (**(code **)(*plVar8 + 0x2a8))(plVar8,lVar6,&local_e8,&local_a8);
            local_a8 = (code *)0x0;
            plStack_a0 = (longlong *)0x0;
            uVar9 = (**(code **)(*param_1 + 0x2c8))(param_1);
            plVar10 = (longlong *)FUN_14843d221(uVar9,0x1fffe,param_1,&local_a8);
            if ((plVar10 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
              FUN_14689c22e(plVar10);
            }
            local_100 = plVar10;
            if (local_a8 != (code *)0x0) {
              FUN_1400020a8();
            }
            (**(code **)(*plVar10 + 800))(plVar10,plVar8,0);
            uVar5 = uStack_f0._4_4_;
            iVar12 = 0;
            if (uStack_f0 < 0) {
              uStack_f0 = (ulonglong)uStack_f0._4_4_ << 0x20;
              FUN_14009a542(&local_f8,0);
              uVar5 = uStack_f0._4_4_;
              iVar12 = (int)uStack_f0;
            }
            uStack_f0 = CONCAT44(uStack_f0._4_4_,iVar12 + 1U);
            if (uVar5 < iVar12 + 1U) {
              FUN_140097524(&local_f8,iVar12);
            }
            *(longlong *)(local_f8 + (longlong)iVar12 * 8) = lVar6;
            FUN_1484f6c9e(param_1[0x1c] + 0x30,local_100,&local_f8,0);
            iVar12 = (int)param_1[0x1b];
            *(uint *)(param_1 + 0x1b) = iVar12 + 1U;
            if (*(uint *)((longlong)param_1 + 0xdc) < iVar12 + 1U) {
              FUN_1496dbdc0(local_110,iVar12);
            }
            FUN_1496dbd6c((longlong)iVar12 * 0x10 + *local_110,&local_108);
            uVar13 = uVar13 + 1;
          } while (uVar4 != uVar13);
        }
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)param_1[0x15]);
LAB_1496d477a:
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496d47c0 FUN_1496d47c0 body=503 status=ok
// SIG undefined FUN_1496d47c0(void)

undefined1 * FUN_1496d47c0(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  float local_170;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_d4;
  undefined4 local_a8;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (((*(char *)(*(longlong *)(param_1 + 0x10) + 0xab) != '\0') && (*(int *)(param_1 + 0x20) != 0))
     && (*(undefined4 *)(param_1 + 0xd8) = 0xffffffff, 0 < *(int *)(param_1 + -0x10))) {
    fVar5 = 3.4028235e+38;
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + -0x18) + lVar4 * 8);
      if (lVar1 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        FUN_145a7b1c0();
        plVar3 = (longlong *)FUN_144718840(lVar1);
      }
      memset(&local_178,0,0x100);
      local_a8 = 0xffffffff;
      local_178 = CONCAT44(0x3f800000,(undefined4)local_178);
      local_d4 = 0xffffffff;
      cVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,param_3,&local_178);
      if (cVar2 != '\0') {
        if (local_170 <= fVar5) {
          fVar5 = local_170;
        }
        local_78 = local_138;
        uStack_74 = uStack_134;
        uStack_70 = uStack_130;
        uStack_6c = uStack_12c;
        local_68 = local_128;
        *(int *)(param_1 + 0xd8) = (int)lVar4;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + -0x10));
    if (fVar5 < 3.4028235e+38) {
      *(undefined8 *)(param_2 + 0x38) = 0;
      *param_2 = 1;
      *(double *)(param_2 + 8) = (double)fVar5;
      *(undefined4 *)(param_2 + 0x10) = local_78;
      *(undefined4 *)(param_2 + 0x14) = uStack_74;
      *(undefined4 *)(param_2 + 0x18) = uStack_70;
      *(undefined4 *)(param_2 + 0x1c) = uStack_6c;
      *(undefined8 *)(param_2 + 0x20) = local_68;
      param_2[0x28] = 1;
      *(undefined4 *)(param_2 + 0x2c) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      goto LAB_1496d496e;
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
LAB_1496d496e:
  local_178 = 0;
  FUN_14485c47a(&local_178,0);
  *(undefined8 *)(param_2 + 0x38) = local_178;
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d49b8 FUN_1496d49b8 body=604 status=ok
// SIG undefined FUN_1496d49b8(void)

void FUN_1496d49b8(longlong *param_1,double *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  double local_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong local_a0;
  undefined1 local_98 [8];
  double local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  (**(code **)(*param_1 + 0x10))(param_1,local_98,param_2);
  lVar1 = (**(code **)(param_1[-0x17] + 0x2c8))(param_1 + -0x17);
  local_d0 = L"TransformToolTransformTxnName";
  uStack_c8._0_4_ = 0x1d;
  FUN_1446e940c(&local_58,&local_d0);
  local_d0 = L"UTransformMeshesTool";
  uStack_c8 = (double)CONCAT44(uStack_c8._4_4_,0x14);
  FUN_1446e940c(&local_e8,&local_d0);
  FUN_140208bae(&local_d0,&local_e8,&local_58,L"SnapDrag");
  (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28,&local_d0);
  if (local_d0 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_d0 + 0x10))();
  }
  lVar1 = param_1[2];
  if (*(char *)(lVar1 + 0xa8) == '\x02') {
    lVar2 = (longlong)(int)param_1[0x1b] * 0x10 + param_1[3];
  }
  else {
    lVar2 = param_1[3];
  }
  plVar4 = (longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 8) + 0x218) + 0x1c8) + 0x240);
  plVar5 = param_1 + 0xf;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *plVar5 = *plVar4;
    plVar4 = plVar4 + 1;
    plVar5 = plVar5 + 1;
  }
  if (*(char *)(lVar1 + 0xac) == '\0') {
    local_d8 = local_78;
    local_e8 = local_88;
    uStack_e0 = uStack_80;
    local_c0 = param_2[5] * local_90 + param_2[2];
    uStack_c8 = param_2[4] * local_90 + param_2[1];
    local_d0 = (wchar_t *)(local_90 * param_2[3] + *param_2);
    lStack_b8 = 0;
    lStack_b0 = 0;
    lStack_a8 = 0;
    local_a0 = 0x3ff0000000000000;
    local_48 = DAT_14c8463c8;
    local_58 = (undefined4)DAT_14c8463b8;
    uStack_54 = DAT_14c8463b8._4_4_;
    uStack_50 = (undefined4)DAT_14c8463c0;
    uStack_4c = DAT_14c8463c0._4_4_;
    FUN_146bfb7f2(&lStack_b8);
    param_1[0xd] = local_a0;
    param_1[0xb] = lStack_b0;
    param_1[0xc] = lStack_a8;
    param_1[9] = (longlong)local_c0;
    param_1[10] = lStack_b8;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_d0;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_d0._4_4_;
    *(undefined4 *)(param_1 + 8) = (undefined4)uStack_c8;
    *(undefined4 *)((longlong)param_1 + 0x44) = uStack_c8._4_4_;
  }
  else {
    *(int *)(param_1 + 7) = (int)param_1[0x13];
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_1 + 0x9c);
    *(int *)(param_1 + 8) = (int)param_1[0x14];
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_1 + 0xa4);
    param_1[9] = param_1[0x15];
    param_1[10] = param_1[0xf];
    param_1[0xb] = param_1[0x10];
    param_1[0xc] = param_1[0x11];
    param_1[0xd] = param_1[0x12];
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d4c16 FUN_1496d4c16 body=2181 status=ok
// SIG undefined FUN_1496d4c16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1496d4c16(longlong param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  char cVar3;
  char cVar4;
  double dVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  double *pdVar13;
  double *pdVar14;
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
  double dVar26;
  double dVar27;
  undefined1 auStack_338 [32];
  undefined8 local_318;
  undefined8 local_308;
  double local_300;
  double dStack_2f8;
  double local_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  undefined8 uStack_290;
  double local_288;
  double local_280;
  double local_278;
  double local_268 [2];
  undefined1 local_258 [12];
  undefined4 uStack_24c;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  undefined1 local_218 [16];
  undefined1 local_208 [4];
  undefined4 local_204;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  undefined4 local_164;
  undefined4 local_138;
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  *(undefined1 *)(param_1 + 0xdc) = 1;
  lVar10 = *(longlong *)(param_1 + 0x10);
  cVar3 = *(char *)(lVar10 + 0xaa);
  local_108 = (undefined1  [16])0x0;
  local_308 = param_2;
  if (cVar3 == '\0') {
    uVar11 = 0xffffffff;
    if (*(char *)(lVar10 + 0xa8) == '\x02') {
      uVar11 = *(uint *)(param_1 + 0xd8);
    }
    iVar7 = *(int *)(param_1 + -0x10);
    if (0 < iVar7) {
      uVar12 = 0;
      do {
        if (uVar11 == 0xffffffff || uVar11 == uVar12) {
          uVar9 = FUN_1485062e8(*(undefined8 *)(*(longlong *)(param_1 + -0x18) + uVar12 * 8));
          lVar10 = (longlong)(int)local_108._8_4_;
          uVar8 = local_108._8_4_ + 1;
          local_108._8_4_ = uVar8;
          if ((uint)local_108._12_4_ < uVar8) {
            FUN_140097524(local_108);
          }
          *(undefined8 *)(local_108._0_8_ + lVar10 * 8) = uVar9;
          iVar7 = *(int *)(param_1 + -0x10);
        }
        uVar12 = uVar12 + 1;
      } while ((longlong)uVar12 < (longlong)iVar7);
      lVar10 = *(longlong *)(param_1 + 0x10);
    }
  }
  cVar4 = *(char *)(lVar10 + 0xad);
  memset(local_208,0,0x100);
  local_138 = 0xffffffff;
  local_204 = 0x3f800000;
  local_164 = 0xffffffff;
  local_318 = 0;
  cVar6 = FUN_14855784a(param_1 + -0xb8,local_208,local_308,local_108);
  if (cVar6 != '\0') {
    if (cVar3 == '\0') {
      local_298 = local_1d0;
      local_2a8 = local_1e0;
      dStack_2a0 = dStack_1d8;
      local_2e8 = (double)*(float *)(&DAT_149e1eeb0 + (ulonglong)(cVar4 == '\x02') * 4);
      local_2d8 = local_1b8 * local_2e8;
      dStack_2e0 = local_1c0 * local_2e8;
      local_2e8 = local_2e8 * local_1c8;
      dVar15 = *(double *)(param_1 + 0x38);
      dVar19 = *(double *)(param_1 + 0x40);
      dVar16 = *(double *)(param_1 + 0x48);
      dVar1 = *(double *)(param_1 + 0x50);
      dVar2 = *(double *)(param_1 + 0x58);
      dVar20 = *(double *)(param_1 + 0x60);
      dVar21 = *(double *)(param_1 + 0x68);
      local_280 = 0.0;
      uStack_290 = 0.0;
      local_288 = 0.0;
      local_278 = 1.0;
      local_258._0_8_ = DAT_14c8463c8;
      local_268[0] = DAT_14c8463b8;
      local_268[1] = DAT_14c8463c0;
      FUN_146bfb7f2(&uStack_290,local_268,&local_2e8);
      dVar5 = dVar16 - *(double *)(param_1 + 0xa8);
      dStack_2c0 = dVar19 - *(double *)(param_1 + 0xa0);
      local_2c8 = dVar15 - *(double *)(param_1 + 0x98);
      local_268[0] = uStack_290 * (local_280 + local_280) + local_278 * (local_288 + local_288);
      local_268[1] = (local_280 + local_280) * local_288 - (uStack_290 + uStack_290) * local_278;
      local_258._0_8_ =
           1.0 - ((local_288 + local_288) * local_288 + uStack_290 * (uStack_290 + uStack_290));
      dVar20 = dVar20 + dVar20;
      local_300 = dVar1 * dVar20 + dVar21 * (dVar2 + dVar2);
      dStack_2f8 = dVar20 * dVar2 - (dVar1 + dVar1) * dVar21;
      local_2f0 = 1.0 - ((dVar2 + dVar2) * dVar2 + dVar1 * (dVar1 + dVar1));
      local_2e8 = 0.0;
      dStack_2e0 = 0.0;
      local_2d8 = 0.0;
      local_2d0 = 1.0;
      local_2b8 = dVar5;
      FUN_146bfb7f2(&local_2e8,&local_300,local_268);
      if (cVar4 == '\0') {
        local_2e8 = 0.0;
        dStack_2e0 = 0.0;
        local_2d8 = 0.0;
        local_2d0 = 1.0;
      }
      dVar16 = local_298 - dVar16;
      dVar19 = dStack_2a0 - dVar19;
      dVar15 = local_2a8 - dVar15;
      pdVar13 = (double *)(param_1 + 0x78);
      pdVar14 = local_268;
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *pdVar14 = *pdVar13;
        pdVar13 = pdVar13 + 1;
        pdVar14 = pdVar14 + 1;
      }
      dVar1 = local_268[0] * 0.0;
      dVar2 = local_268[1] * 0.0;
      dVar20 = stack0xfffffffffffffdb0 * 0.0 * 1.0;
      dVar21 = (double)local_258._0_8_ * 0.0 * -1.0;
      dVar22 = dVar2 * -1.0 + local_268[0] + dVar20 + (double)local_258._0_8_ * 0.0;
      dVar23 = dVar1 * 1.0 + local_268[1] + dVar21 + stack0xfffffffffffffdb0 * 0.0;
      dVar20 = ((dVar2 * 1.0 + (double)local_258._0_8_) - dVar1) + dVar20;
      dVar21 = ((dVar1 * -1.0 + stack0xfffffffffffffdb0) - dVar2) + dVar21;
      dVar26 = local_2c8 + local_248;
      dVar27 = dStack_2c0 + dStack_240;
      dVar17 = dVar23 * local_2d8 * -1.0 +
               dVar20 * dStack_2e0 + local_2e8 * dVar21 * 1.0 + dVar22 * local_2d0;
      dVar18 = dVar22 * local_2d8 * 1.0 +
               dVar21 * dStack_2e0 + local_2e8 * dVar20 * -1.0 + dVar23 * local_2d0;
      dVar24 = dVar21 * local_2d8 * 1.0 +
               ((local_2e8 * dVar23 * 1.0 + local_2d0 * dVar20) - dVar22 * dStack_2e0);
      dVar23 = dVar20 * local_2d8 * -1.0 +
               ((local_2e8 * dVar22 * -1.0 + local_2d0 * dVar21) - dVar23 * dStack_2e0);
      dVar20 = dVar17 * 0.0;
      dVar22 = dVar18 * 0.0;
      dVar21 = dVar24 * 0.0;
      dVar25 = dVar23 * 0.0;
      dVar1 = dVar25 * 1.0;
      dVar2 = dVar21 * -1.0;
      dVar21 = dVar22 * -1.0 + dVar17 + dVar1 + dVar21;
      dVar17 = dVar20 * 1.0 + dVar18 + dVar2 + dVar25;
      dVar1 = ((dVar22 * 1.0 + dVar24) - dVar20) + dVar1;
      dVar2 = ((dVar20 * -1.0 + dVar23) - dVar22) + dVar2;
      FUN_146bed047(&local_300,&local_2e8,&local_2c8);
      local_2b8 = local_2f0;
      local_2c8 = local_300;
      dStack_2c0 = dStack_2f8;
      local_238 = (double)((ulonglong)local_2f0 ^ DAT_149931e80) + dVar16 + dVar5 + local_238 + 0.0;
      dStack_230 = dStack_230 + 0.0 + 0.0 + 0.0 + 0.0;
      dVar16 = dVar1 * 0.0;
      dVar20 = dVar2 * 0.0;
      dVar5 = dVar21 * 0.0;
      dVar22 = dVar17 * 0.0;
      dVar23 = dVar20 * 1.0;
      dVar18 = dVar16 * -1.0;
      local_268[0] = dVar22 * -1.0 + dVar21 + dVar23 + dVar16;
      local_268[1] = dVar5 * 1.0 + dVar17 + dVar18 + dVar20;
      dVar18 = ((dVar5 * -1.0 + dVar2) - dVar22) + dVar18;
      local_248 = (dVar26 + 0.0 + dVar15) - local_300;
      dStack_240 = (dVar27 + 0.0 + dVar19) - dStack_2f8;
      local_258._8_4_ = SUB84(dVar18,0);
      local_258._0_8_ = ((dVar22 * 1.0 + dVar1) - dVar5) + dVar23;
      uStack_24c = (int)((ulonglong)dVar18 >> 0x20);
      dVar15 = (double)local_218._8_8_ * 0.0 * 0.0 * 0.0 * 0.0;
      local_218._8_4_ = SUB84(dVar15,0);
      local_218._0_8_ = (double)local_218._0_8_ * 1.0 * 1.0 * 1.0 * 1.0;
      local_218._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    }
    else {
      if (cVar4 == '\0') {
        local_2a8 = 0.0;
        dStack_2a0 = 0.0;
        local_298 = 0.0;
        uStack_290 = 1.0;
      }
      else {
        dVar15 = (double)-*(float *)(&DAT_149e1eeb0 + (ulonglong)(cVar4 == '\x02') * 4);
        local_268[0] = local_1c8 * dVar15;
        local_268[1] = local_1c0 * dVar15;
        local_258._0_8_ = dVar15 * local_1b8;
        local_2e8 = DAT_14c8463b8;
        dStack_2e0 = DAT_14c8463c0;
        local_2d8 = DAT_14c8463c8;
        local_2a8 = 0.0;
        dStack_2a0 = 0.0;
        local_298 = 0.0;
        uStack_290 = 1.0;
        FUN_146bfb7f2(&local_2a8);
      }
      pdVar13 = (double *)(param_1 + 0x78);
      pdVar14 = local_268;
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *pdVar14 = *pdVar13;
        pdVar13 = pdVar13 + 1;
        pdVar14 = pdVar14 + 1;
      }
      local_258._8_4_ = (undefined4)uStack_290;
      local_258._0_8_ = local_298;
      uStack_24c = uStack_290._4_4_;
      local_248 = local_1e0;
      dStack_240 = dStack_1d8;
      local_238 = local_1d0;
      dStack_230 = 0.0;
      local_268[0] = local_2a8;
      local_268[1] = dStack_2a0;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x10) + 0xa8) == '\x02') {
      lVar10 = (longlong)*(int *)(param_1 + 0xd8) * 0x10 + *(longlong *)(param_1 + 0x18);
    }
    else {
      lVar10 = *(longlong *)(param_1 + 0x18);
    }
    (**(code **)(**(longlong **)(lVar10 + 8) + 0x330))(*(longlong **)(lVar10 + 8),local_268,1);
  }
  if (local_108._0_8_ != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496d54a4 FUN_1496d54a4 body=428 status=ok
// SIG undefined FUN_1496d54a4(void)

void FUN_1496d54a4(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  undefined8 local_b8 [12];
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined1 *)(param_1 + 0xdc) = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0xa8) == '\x02') {
    lVar1 = (longlong)*(int *)(param_1 + 0xd8) * 0x10 + *(longlong *)(param_1 + 0x18);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x18);
  }
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 8) + 0x218) + 0x1c8);
  puVar4 = (undefined8 *)(lVar1 + 0x240);
  puVar5 = local_b8;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar2 = FUN_14001cc68(0x110,0x10);
  FUN_148442c04(uVar2,param_1 + 0x78,local_b8);
  local_d0 = param_1 + -0xb8;
  lVar3 = (**(code **)(*(longlong *)(param_1 + -0xb8) + 0x2c8))(param_1 + -0xb8);
  local_58 = L"TransformToolTransformTxnName";
  local_50 = 0x1d;
  FUN_1446e940c(local_bc,&local_58);
  local_58 = L"UTransformMeshesTool";
  local_50 = 0x14;
  FUN_1446e940c(local_c0,&local_58);
  FUN_140208bae(&local_58,local_c0,local_bc,L"SnapDrag");
  local_c8 = uVar2;
  (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x20))(lVar3 + 0x28,lVar1,&local_c8,&local_58);
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0xb8) + 0x2c8))(local_d0);
  (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x18))(lVar1 + 0x28);
  *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d5666 FUN_1496d5666 body=521 status=ok
// SIG undefined FUN_1496d5666(void)

void FUN_1496d5666(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  wchar_t *local_88;
  undefined4 local_80;
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)FUN_1496d5870();
  if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar1);
  }
  param_1[0x20] = (longlong)plVar1;
  FUN_140056680(&local_88,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1,&local_88);
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x20]);
  local_68 = 0;
  local_58 = &PTR_LAB_14bdd82d0;
  local_78 = &LAB_1445836d8;
  local_50 = param_1;
  FUN_14588c620(param_1[0x20] + 0x28,param_1[0x20] + 0xa8);
  local_88 = L"TriangulateSplinesToolName";
  local_80 = 0x1a;
  FUN_1446e940c(local_8c,&local_88);
  local_88 = L"UTriangulateSplinesTool";
  local_80 = 0x17;
  FUN_1446e940c(local_90,&local_88);
  FUN_140208bae(&local_88,local_90,local_8c,L"Triangulate Splines");
  (**(code **)(*param_1 + 0x370))(param_1,&local_88);
  if (local_88 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_88 + 0x10))();
  }
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_88 = L"TriangulateSplinesToolToolDescription";
  local_80 = 0x25;
  FUN_1446e940c(local_8c,&local_88);
  local_88 = L"UTriangulateSplinesTool";
  local_80 = 0x17;
  FUN_1446e940c(local_90,&local_88);
  FUN_140208bae(&local_88,local_90,local_8c,L"Triangulate the shapes of the selected splines.");
  (**(code **)(*plVar1 + 0x340))(plVar1,&local_88,2);
  if (local_88 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_88 + 0x10))();
  }
  FUN_1496b1be0(param_1);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d5870 FUN_1496d5870 body=148 status=ok
// SIG undefined FUN_1496d5870(void)

undefined8 FUN_1496d5870(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459fcec6();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d5906 FUN_1496d5906 body=129 status=ok
// SIG undefined FUN_1496d5906(void)

void FUN_1496d5906(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x100);
  FUN_140056680(local_38,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1496b2aa4(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d5988 FUN_1496d5988 body=531 status=ok
// SIG undefined FUN_1496d5988(void)

undefined8 * FUN_1496d5988(longlong param_1,undefined8 *param_2)

{
  double dVar1;
  undefined8 *_Dst;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  _Dst = (undefined8 *)FUN_14001cc68(0x130);
  uVar3 = 0;
  memset(_Dst,0,0x130);
  FUN_14845abbc(_Dst);
  *_Dst = &PTR_FUN_14bdd82f0;
  _Dst[0x11] = 0x3ff0000000000000;
  *(undefined1 *)(_Dst + 0x12) = 0;
  _Dst[0x13] = 0;
  *(undefined8 *)((longlong)_Dst + 0x9e) = 0;
  _Dst[0x15] = 0x3ff0000000000000;
  _Dst[0x16] = 0x3ff0000000000000;
  *(undefined1 *)(_Dst + 0x17) = 0;
  _Dst[0x18] = 0;
  _Dst[0x19] = 0;
  _Dst[0x1a] = 0;
  _Dst[0x1b] = 0;
  *(undefined4 *)(_Dst + 0x1c) = 0;
  *(undefined4 *)((longlong)_Dst + 0xe4) = 0;
  *(undefined4 *)(_Dst + 0x1d) = 0;
  *(undefined4 *)((longlong)_Dst + 0xec) = 0x3ff00000;
  _Dst[0x1e] = 0;
  _Dst[0x1f] = 0;
  _Dst[0x20] = 0;
  _Dst[0x21] = 0;
  _Dst[0x22] = 0x3ff0000000000000;
  _Dst[0x23] = 0x3ff0000000000000;
  _Dst[0x24] = 0x3ff0000000000000;
  _Dst[0x25] = 0;
  lVar2 = *(longlong *)(param_1 + 0x60);
  _Dst[0x13] = *(undefined8 *)(lVar2 + 0xb8);
  *(undefined1 *)(_Dst + 0x17) = *(undefined1 *)(lVar2 + 0xc0);
  *(undefined1 *)((longlong)_Dst + 0xa1) = *(undefined1 *)(lVar2 + 0xb1);
  *(undefined1 *)(_Dst + 0x14) = *(undefined1 *)(lVar2 + 0xb0);
  dVar1 = *(double *)(lVar2 + 200);
  _Dst[0x16] = dVar1;
  if ((dVar1 != 0.0) || (NAN(dVar1))) {
    uVar3 = *(undefined1 *)(lVar2 + 0xd0);
  }
  *(undefined1 *)((longlong)_Dst + 0xa2) = uVar3;
  *(undefined1 *)((longlong)_Dst + 0xa3) = *(undefined1 *)(lVar2 + 0xc1);
  *(undefined1 *)((longlong)_Dst + 0xa4) = *(undefined1 *)(lVar2 + 0xd2);
  *(undefined1 *)((longlong)_Dst + 0xa5) = *(undefined1 *)(lVar2 + 0xd1);
  _Dst[0x15] = *(undefined8 *)(lVar2 + 0xd8);
  lVar4 = *(longlong *)(param_1 + 0x10);
  _Dst[0x11] = (double)*(float *)(lVar4 + 0xb0);
  *(undefined1 *)(_Dst + 0x12) = *(undefined1 *)(lVar4 + 0xb4);
  *(undefined1 *)(_Dst + 0x17) = *(undefined1 *)(lVar2 + 0xc0);
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x70) << 7;
    lVar2 = *(longlong *)(param_1 + 0x68) + 0x20;
    do {
      local_40 = *(undefined8 *)(lVar2 + -0x20);
      local_38 = *(undefined4 *)(lVar2 + -0x18);
      FUN_14846547a(_Dst,&local_40,*(undefined1 *)(lVar2 + -0x10),lVar2);
      lVar2 = lVar2 + 0x80;
      lVar4 = lVar4 + -0x80;
    } while (lVar4 != 0);
  }
  *param_2 = _Dst;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d5b9c FUN_1496d5b9c body=1009 status=ok
// SIG undefined FUN_1496d5b9c(void)

void FUN_1496d5b9c(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0xf8) == '\0') {
    iVar10 = *(int *)(param_1 + 0x114);
    FUN_145c2fdfd(*(undefined8 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x110));
    *(undefined4 *)(param_1 + 0x110) = 0;
    if ((iVar10 < 0) && (*(int *)(param_1 + 0x114) != 0)) {
      FUN_1496dbf36(param_1 + 0x108);
    }
    local_a0 = param_1;
    if ((*(char *)(param_1 + 0xf8) == '\0') && (0 < *(int *)(param_1 + 0xd0))) {
      lVar9 = 0;
      local_a8 = param_1;
      do {
        lVar3 = FUN_14479d2ce(lVar9 * 8 + *(longlong *)(param_1 + 200));
        if (lVar3 != 0) {
          lVar4 = FUN_14092ee58();
          if ((lVar4 == 0) || (DAT_14c950c29 == 0)) {
            if (lVar4 != 0) goto LAB_1496d5c9b;
            bVar12 = true;
LAB_1496d5cb7:
            lVar7 = 0;
          }
          else {
            FUN_14689c22e(lVar4);
LAB_1496d5c9b:
            lVar5 = FUN_144a78d6a();
            if ((lVar5 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38))) {
              bVar12 = false;
              goto LAB_1496d5cb7;
            }
            bVar12 = false;
            lVar7 = 0;
            if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
                lVar5 + 0x30) {
              lVar7 = lVar4;
            }
          }
          lVar5 = FUN_144a78d6a();
          bVar8 = lVar4 != 0 & DAT_14c950c29;
          if (lVar7 == lVar5) {
            if (bVar8 != 0) {
              FUN_14689c22e(lVar4);
            }
            local_70 = &local_a0;
            lVar4 = lVar3 + 0x250;
            local_68 = 0x100000000;
            local_58 = 0xffffffff;
            uStack_50 = 0;
            uStack_60 = lVar4;
            if (*(int *)(lVar3 + 0x268) == 0) {
              iVar10 = 0;
            }
            else {
              FUN_1449c0562(&local_68);
              iVar10 = *(int *)(lVar3 + 0x268);
            }
            plVar11 = (longlong *)(lVar3 + 0x240);
            local_90 = (undefined4)local_68;
            uStack_8c = local_68._4_4_;
            uStack_88 = (undefined4)uStack_60;
            uStack_84 = uStack_60._4_4_;
            uStack_78 = CONCAT44(uStack_4c,uStack_50);
            local_80 = local_58;
            uVar1 = local_80;
            local_80._4_4_ = (int)((ulonglong)local_58 >> 0x20);
            iVar2 = local_80._4_4_;
            local_98 = plVar11;
            if ((local_80._4_4_ != iVar10) || (local_80 = local_58, uStack_60 != lVar4)) {
              do {
                local_80 = uVar1;
                if (*(longlong *)(*local_98 + (longlong)iVar2 * 0x10) != 0) {
                  FUN_14458372e(&local_70);
                }
                local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_8c);
                FUN_1449c0562(&local_90);
                bVar12 = local_80._4_4_ != iVar10;
                iVar2 = local_80._4_4_;
                uVar1 = local_80;
              } while (local_98 != plVar11 || (CONCAT44(uStack_84,uStack_88) != lVar4 || bVar12));
            }
          }
          else {
            if (bVar8 != 0) {
              FUN_14689c22e(lVar4);
            }
            local_70 = &local_a0;
            lVar5 = lVar3 + 0x250;
            local_68 = 0x100000000;
            local_58 = 0xffffffff;
            uStack_50 = 0;
            uStack_60 = lVar5;
            if (*(int *)(lVar3 + 0x268) == 0) {
              iVar10 = 0;
            }
            else {
              FUN_1449c0562(&local_68);
              iVar10 = *(int *)(lVar3 + 0x268);
            }
            plVar11 = (longlong *)(lVar3 + 0x240);
            uStack_78 = CONCAT44(uStack_4c,uStack_50);
            local_80 = local_58;
            uVar1 = local_80;
            local_90 = (undefined4)local_68;
            uStack_8c = local_68._4_4_;
            uStack_88 = (undefined4)uStack_60;
            uStack_84 = uStack_60._4_4_;
            local_80._4_4_ = (int)((ulonglong)local_58 >> 0x20);
            iVar2 = local_80._4_4_;
            local_98 = plVar11;
            if ((local_80._4_4_ != iVar10) ||
               (param_1 = local_a8, local_80 = uVar1, uStack_60 != lVar5)) {
              do {
                local_80 = uVar1;
                lVar3 = *(longlong *)(*local_98 + (longlong)iVar2 * 0x10);
                if (lVar3 != 0) {
                  if ((lVar4 != 0) && (DAT_14c950c29 != 0)) {
                    FUN_14689c22e(lVar4);
                  }
                  if (((bVar12) || (lVar7 = FUN_144a78d6a(), lVar7 == 0)) ||
                     (*(int *)(lVar4 + 0x38) < *(int *)(lVar7 + 0x38))) {
                    lVar6 = 0;
                  }
                  else {
                    lVar6 = 0;
                    if (*(longlong *)
                         (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                        lVar7 + 0x30) {
                      lVar6 = lVar4;
                    }
                  }
                  if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
                    FUN_14458372e(&local_70,lVar3);
                  }
                }
                local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_8c);
                FUN_1449c0562(&local_90);
                param_1 = local_a8;
                iVar2 = local_80._4_4_;
                uVar1 = local_80;
              } while (local_98 != plVar11 ||
                       (CONCAT44(uStack_84,uStack_88) != lVar5 || local_80._4_4_ != iVar10));
            }
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(param_1 + 0xd0));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496d5f8e FUN_1496d5f8e body=32 status=ok
// SIG undefined FUN_1496d5f8e(void)

undefined8 FUN_1496d5f8e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Triangulation");
  return param_2;
}



// FUNCTION 1496d5fae FUN_1496d5fae body=152 status=ok
// SIG undefined FUN_1496d5fae(void)

undefined8 FUN_1496d5fae(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"TriangulateSplinesAction";
  local_28 = 0x18;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"UTriangulateSplinesTool";
  local_28 = 0x17;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Spline Triangulation");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d6048 FUN_1496d6048 body=54 status=ok
// SIG undefined FUN_1496d6048(void)

undefined8 FUN_1496d6048(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1496d607e(*(undefined8 *)(param_2 + 8));
  (**(code **)(*param_1 + 0x2c0))(param_1,uVar1,param_2);
  return uVar1;
}



// FUNCTION 1496d607e FUN_1496d607e body=148 status=ok
// SIG undefined FUN_1496d607e(void)

undefined8 FUN_1496d607e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145baf230();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d6114 FUN_1496d6114 body=537 status=ok
// SIG undefined FUN_1496d6114(void)

void FUN_1496d6114(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  undefined8 *local_98 [11];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar4 = *(longlong **)(param_1 + 0xf8);
  FUN_140056680(local_98,&DAT_149dfb77a);
  (**(code **)(*plVar4 + 0x2a0))(plVar4,param_1,local_98);
  if (local_98[0] != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(**(longlong **)(param_1 + 0x108) + 0x2a0))
            (*(longlong **)(param_1 + 0x108),param_1,&DAT_14cc22158);
  plVar4 = *(longlong **)(param_1 + 0x100);
  FUN_140056680(local_98,&DAT_149dfb77a);
  (**(code **)(*plVar4 + 0x2a0))(plVar4,param_1,local_98);
  if (local_98[0] != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1484e0e5e(*(undefined8 *)(param_1 + 0x120));
  FUN_1484e0e5e(*(undefined8 *)(param_1 + 0x128));
  iVar3 = *(int *)(param_1 + 0xa8);
  if ((longlong)iVar3 != 0) {
    lVar9 = *(longlong *)(param_1 + 0xa0);
    lVar8 = 0;
    do {
      lVar5 = *(longlong *)(lVar9 + lVar8);
      if ((lVar5 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e(lVar5);
      }
      FUN_14850635b(lVar5);
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar3 * 8 != lVar8);
  }
  FUN_143b84538(*(undefined8 *)(param_1 + 0x110),local_98);
  if (param_2 == '\x01') {
    FUN_1496d632e(param_1,local_98);
  }
  FUN_14851b2ea(*(undefined8 *)(param_1 + 0x118));
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  lVar9 = 0;
  bVar6 = true;
  do {
    bVar7 = bVar6;
    lVar8 = lVar9 * 0x10;
    *(undefined8 *)(param_1 + 0x130 + lVar8) = 0;
    plVar4 = *(longlong **)(param_1 + 0x138 + lVar8);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(lVar8 + param_1 + 0x130 + 8) = 0;
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
    FUN_145a22d80(lVar9 * 0x50 + param_1 + 0x150);
    lVar9 = 1;
    bVar6 = false;
  } while (bVar7);
  if (local_98[0] != (undefined8 *)0x0) {
    (**(code **)*local_98[0])(local_98[0],1);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d632e FUN_1496d632e body=278 status=ok
// SIG undefined FUN_1496d632e(void)

void FUN_1496d632e(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = (**(code **)(*param_1 + 0x2c8))();
  local_50 = L"UVLayoutToolTransactionName";
  local_48 = 0x1b;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"UUVTransferTool";
  local_48 = 0xf;
  FUN_1446e940c(local_58,&local_50);
  FUN_140208bae(&local_50,local_58,local_54,L"UV Layout Tool");
  (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28,&local_50);
  if (local_50 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_50 + 0x10))();
  }
  FUN_148507113(*(undefined8 *)
                 (param_1[0x14] + (ulonglong)(*(byte *)(param_1[0x1f] + 0xa8) ^ 1) * 8),*param_2);
  lVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x18))(lVar1 + 0x28);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d6446 FUN_1496d6446 body=2739 status=ok
// SIG undefined FUN_1496d6446(void)

void FUN_1496d6446(code *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  code *pcVar10;
  bool bVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_4b8 [32];
  code *local_498;
  undefined1 local_48c [4];
  code *local_488;
  code **local_480;
  undefined8 local_478;
  undefined4 local_470;
  undefined1 *local_468;
  undefined8 local_458;
  undefined **local_448;
  code *local_440;
  undefined1 *local_428;
  undefined8 local_418;
  undefined **local_408;
  code *local_400;
  undefined1 *local_3e8;
  undefined8 local_3d8;
  undefined **local_3c8;
  code *local_3c0;
  undefined1 *local_3a8;
  undefined8 local_398;
  undefined **local_388;
  code *local_380;
  undefined1 *local_368;
  undefined8 local_358;
  undefined **local_348;
  code *local_340;
  undefined1 *local_328;
  undefined8 local_318;
  undefined **local_308;
  code *local_300;
  code *local_2e8;
  undefined8 local_2d8;
  undefined **local_2c8;
  code *local_2c0;
  code *local_2a8;
  undefined8 local_298;
  undefined **local_288;
  code *local_280;
  code *local_268;
  undefined4 local_260;
  undefined ***local_258;
  undefined **local_248;
  code *local_240;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4b8;
  FUN_1484416be();
  plVar6 = (longlong *)FUN_1496d6efa(param_1);
  if ((plVar6 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(plVar6);
  }
  *(longlong **)(param_1 + 0xf8) = plVar6;
  FUN_140056680(&local_268,&DAT_149dfb77a);
  (**(code **)(*plVar6 + 0x2a8))(plVar6,param_1,&local_268);
  if (local_268 != (code *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*(longlong *)param_1 + 0x308))(param_1,*(longlong *)(param_1 + 0xf8));
  plVar6 = (longlong *)FUN_148f735f0(param_1);
  if ((plVar6 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(plVar6);
  }
  *(longlong **)(param_1 + 0x108) = plVar6;
  (**(code **)(*plVar6 + 0x2a8))(plVar6,param_1,&DAT_14cc22158);
  (**(code **)(*(longlong *)param_1 + 0x308))(param_1,*(longlong *)(param_1 + 0x108));
  plVar6 = (longlong *)FUN_148f732b9(param_1);
  if ((plVar6 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(plVar6);
  }
  *(longlong **)(param_1 + 0x100) = plVar6;
  FUN_140056680(&local_268,&DAT_149dfb77a);
  (**(code **)(*plVar6 + 0x2a8))(plVar6,param_1,&local_268);
  if (local_268 != (code *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*(longlong *)param_1 + 0x308))(param_1,*(longlong *)(param_1 + 0x100));
  FUN_148f723a4(*(longlong *)(param_1 + 0x100),1);
  iVar3 = *(int *)(param_1 + 0xa8);
  if ((longlong)iVar3 != 0) {
    lVar15 = *(longlong *)(param_1 + 0xa0);
    lVar12 = 0;
    do {
      lVar14 = *(longlong *)(lVar15 + lVar12);
      if ((lVar14 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e(lVar14);
      }
      FUN_148506321(lVar14);
      lVar12 = lVar12 + 8;
    } while ((longlong)iVar3 * 8 != lVar12);
  }
  local_498 = param_1 + 0x150;
  lVar15 = 0;
  bVar11 = true;
  do {
    local_470 = 0;
    local_478 = 0x3e800000000;
    FUN_148506727(&local_268,*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + lVar15 * 8),&local_478)
    ;
    plVar6 = (longlong *)FUN_14001cc68(0x230,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_149fab260;
    FUN_146bffece(plVar6 + 2,&local_268);
    if (plVar6 == (longlong *)0x0) {
      pcVar10 = param_1 + (lVar15 * 2 + 0x26) * 8;
      *(undefined8 *)(param_1 + (lVar15 * 2 + 0x26) * 8) = 0x10;
      plVar13 = *(longlong **)(param_1 + (lVar15 * 2 + 0x27) * 8);
      if (plVar13 != (longlong *)0x0) {
        *(undefined8 *)(pcVar10 + 8) = 0;
LAB_1496d66b6:
        LOCK();
        plVar1 = plVar13 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
        if (plVar6 != (longlong *)0x0) goto LAB_1496d66dc;
      }
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      pcVar10 = param_1 + (lVar15 * 2 + 0x26) * 8;
      *(longlong **)(param_1 + (lVar15 * 2 + 0x26) * 8) = plVar6 + 2;
      plVar13 = *(longlong **)(param_1 + (lVar15 * 2 + 0x27) * 8);
      if (plVar6 == plVar13) {
        LOCK();
        plVar13 = plVar6 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
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
      else {
        *(longlong **)(pcVar10 + 8) = plVar6;
        if (plVar13 != (longlong *)0x0) goto LAB_1496d66b6;
      }
LAB_1496d66dc:
      LOCK();
      plVar13 = plVar6 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
    FUN_141082778(&local_268);
    cVar5 = (**(code **)(*(longlong *)param_1 + 0x3a8))(param_1,lVar15);
    if (cVar5 != '\0') {
      FUN_146bee514(local_498 + lVar15 * 0x50);
      local_488 = FUN_144583814;
      uVar8 = *(undefined8 *)pcVar10;
      local_480 = &local_268;
      local_268 = param_1;
      local_260 = (int)lVar15;
      uVar7 = (**(code **)(*(longlong *)param_1 + 0x3b0))(param_1,0);
      FUN_148385b4a(uVar7,uVar8,&local_488,0);
    }
    lVar15 = 1;
    bVar4 = !bVar11;
    bVar11 = false;
    if (bVar4) {
      lVar15 = FUN_1484c5d32(param_1);
      if ((lVar15 != 0) && (DAT_14c950c29 != 0)) {
        FUN_14689c22e(lVar15);
      }
      *(longlong *)(param_1 + 0x110) = lVar15;
      uVar8 = (**(code **)(*(longlong *)param_1 + 0x390))(param_1);
      FUN_148504f74(lVar15,uVar8,param_1 + 0xe8);
      lVar15 = *(longlong *)(param_1 + 0x110);
      local_268 = (code *)0x0;
      local_260 = 0;
      FUN_1446efa72(&local_268,0,3,0x10);
      pcVar10 = local_268;
      local_260 = 3;
      *(undefined ***)local_268 = &PTR_LAB_14ba263d0;
      uVar8 = FUN_144a3f946();
      *(undefined8 *)(pcVar10 + 0x10) = uVar8;
      *(undefined ***)pcVar10 = &PTR_FUN_14bdd8310;
      *(undefined8 *)(pcVar10 + 0x18) = 0;
      FUN_14485c47a(pcVar10 + 0x18,param_1);
      *(code **)(pcVar10 + 0x20) = param_1;
      FUN_148f76e8e(lVar15 + 0x40,&local_478,&local_268);
      FUN_1449db362(&local_268);
      lVar15 = *(longlong *)(param_1 + 0x110);
      local_268 = (code *)0x0;
      local_260 = 0;
      FUN_1446efa72(&local_268,0,3,0x10);
      pcVar10 = local_268;
      local_260 = 3;
      *(undefined ***)local_268 = &PTR_LAB_14aefe820;
      uVar8 = FUN_144a3f946();
      *(undefined8 *)(pcVar10 + 0x10) = uVar8;
      *(undefined ***)pcVar10 = &PTR_FUN_14bdd8630;
      *(undefined8 *)(pcVar10 + 0x18) = 0;
      FUN_14485c47a(pcVar10 + 0x18,param_1);
      *(code **)(pcVar10 + 0x20) = param_1;
      FUN_1484d607c(lVar15 + 0x28,&local_478,&local_268);
      FUN_1449db362(&local_268);
      lVar15 = FUN_1484e47e5(param_1);
      if ((lVar15 != 0) && (DAT_14c950c29 != 0)) {
        FUN_14689c22e(lVar15);
      }
      *(longlong *)(param_1 + 0x118) = lVar15;
      uVar8 = (**(code **)(*(longlong *)param_1 + 0x390))(param_1);
      FUN_14851b11a(lVar15,uVar8,&DAT_14c846480);
      FUN_1496d6f90(param_1);
      local_298 = 0;
      local_288 = &PTR_LAB_14bdd86a0;
      local_2a8 = FUN_14458429c;
      local_280 = param_1;
      FUN_1484c5b30(*(longlong *)(param_1 + 0x100) + 0x28,*(longlong *)(param_1 + 0x100) + 0xa8);
      lVar15 = FUN_1484e487a(param_1);
      if ((lVar15 != 0) && (DAT_14c950c29 != 0)) {
        FUN_14689c22e(lVar15);
      }
      *(longlong *)(param_1 + 0x120) = lVar15;
      FUN_14851b8ac(*(longlong *)(param_1 + 0x118),&local_268);
      uVar8 = (**(code **)(*(longlong *)param_1 + 0x180))(param_1);
      FUN_1484e0ce2(lVar15,uVar8,&local_268);
      lVar15 = *(longlong *)(param_1 + 0x120);
      if (*(longlong *)(lVar15 + 0x120) != 0) {
        FUN_1484deaa2(*(longlong *)(lVar15 + 0x120),0);
        lVar15 = *(longlong *)(param_1 + 0x120);
      }
      local_258 = (undefined ***)0x0;
      local_248 = &PTR_LAB_14bdd86c0;
      local_268 = FUN_144584342;
      local_240 = param_1;
      FUN_1484de4b4(lVar15,&local_268);
      if (local_268 != (code *)0x0) {
        pppuVar9 = local_258;
        if (local_258 == (undefined ***)0x0) {
          pppuVar9 = &local_248;
        }
        (*(code *)(*pppuVar9)[2])();
      }
      lVar15 = FUN_1484e487a(param_1);
      if ((lVar15 != 0) && (DAT_14c950c29 != 0)) {
        FUN_14689c22e(lVar15);
      }
      *(longlong *)(param_1 + 0x128) = lVar15;
      FUN_14851b8ac(*(undefined8 *)(*(longlong *)(param_1 + 0x110) + 0x58),&local_268);
      uVar8 = (**(code **)(*(longlong *)param_1 + 0x180))(param_1);
      FUN_1484e0ce2(lVar15,uVar8,&local_268);
      lVar15 = *(longlong *)(param_1 + 0x128);
      if (*(longlong *)(lVar15 + 0x120) != 0) {
        FUN_1484deaa2(*(longlong *)(lVar15 + 0x120),0);
        lVar15 = *(longlong *)(param_1 + 0x128);
      }
      local_258 = (undefined ***)0x0;
      local_248 = &PTR_LAB_14bdd86e0;
      local_268 = FUN_1445843c4;
      local_240 = param_1;
      FUN_1484de4b4(lVar15,&local_268);
      if (local_268 != (code *)0x0) {
        pppuVar9 = &local_248;
        if (local_258 != (undefined ***)0x0) {
          pppuVar9 = local_258;
        }
        (*(code *)(*pppuVar9)[2])(pppuVar9);
      }
      FUN_1496d72b4(param_1);
      local_2d8 = 0;
      local_2c8 = &PTR_LAB_14bdd8700;
      local_2e8 = FUN_14458444a;
      local_2c0 = param_1;
      FUN_1484c9b00(*(longlong *)(param_1 + 0xf8) + 0x28,*(longlong *)(param_1 + 0xf8) + 0xa8);
      local_318 = 0;
      local_308 = &PTR_LAB_14bdd8720;
      local_328 = &LAB_1445844be;
      local_300 = param_1;
      FUN_14588c620(*(longlong *)(param_1 + 0xf8) + 0x28,*(longlong *)(param_1 + 0xf8) + 0xc0);
      local_358 = 0;
      local_348 = &PTR_LAB_14bdd8740;
      local_368 = &LAB_14458451a;
      local_340 = param_1;
      FUN_14588c620(*(longlong *)(param_1 + 0xf8) + 0x28,*(longlong *)(param_1 + 0xf8) + 0xb0);
      local_398 = 0;
      local_388 = &PTR_LAB_14bdd8760;
      local_3a8 = &LAB_144584576;
      local_380 = param_1;
      FUN_1484c9b00(*(longlong *)(param_1 + 0xf8) + 0x28,*(longlong *)(param_1 + 0xf8) + 0xa9);
      local_3d8 = 0;
      local_3c8 = &PTR_LAB_14bdd8780;
      local_3e8 = &LAB_1445845d2;
      local_3c0 = param_1;
      FUN_1484c9b00(*(longlong *)(param_1 + 0xf8) + 0x28,*(longlong *)(param_1 + 0xf8) + 0xaa);
      local_418 = 0;
      local_408 = &PTR_LAB_14bdd87a0;
      local_428 = &LAB_14458462e;
      local_400 = param_1;
      FUN_1484c9b00(*(longlong *)(param_1 + 0xf8) + 0x28,*(longlong *)(param_1 + 0xf8) + 0xb8);
      local_458 = 0;
      local_448 = &PTR_LAB_14bdd87c0;
      local_468 = &LAB_14458467e;
      local_440 = param_1;
      FUN_1484c9b00(*(longlong *)(param_1 + 0xf8) + 0x28,*(longlong *)(param_1 + 0xf8) + 0xb9);
      lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0xf8) + 0x30);
      if (lVar15 != 0) {
        lVar12 = *(longlong *)(*(longlong *)(param_1 + 0xf8) + 0x28);
        lVar14 = 0;
        do {
          (**(code **)(**(longlong **)(lVar12 + lVar14) + 0x10))();
          lVar14 = lVar14 + 8;
        } while (lVar15 * 8 != lVar14);
      }
      lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x100) + 0x30);
      if (lVar15 != 0) {
        lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x100) + 0x28);
        lVar14 = 0;
        do {
          (**(code **)(**(longlong **)(lVar12 + lVar14) + 0x10))();
          lVar14 = lVar14 + 8;
        } while (lVar15 * 8 != lVar14);
      }
      lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x108) + 0x30);
      if (lVar15 != 0) {
        lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x28);
        lVar14 = 0;
        do {
          (**(code **)(**(longlong **)(lVar12 + lVar14) + 0x10))();
          lVar14 = lVar14 + 8;
        } while (lVar15 * 8 != lVar14);
      }
      local_268 = (code *)0x14ba1690c;
      local_260 = 8;
      FUN_1446e940c(&local_478,&local_268);
      local_268 = (code *)0x14bd6ec68;
      local_260 = 0xf;
      FUN_1446e940c(local_48c,&local_268);
      FUN_140208bae(&local_268,local_48c,&local_478,L"UV Transfer");
      (**(code **)(*(longlong *)param_1 + 0x370))(param_1,&local_268);
      if (local_268 != (code *)0x0) {
        (**(code **)(*(longlong *)local_268 + 0x10))();
      }
      plVar6 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x2c8))(param_1);
      local_268 = (code *)0x14ac8b0b8;
      local_260 = 7;
      FUN_1446e940c(&local_478,&local_268);
      local_268 = (code *)0x14bd6ec68;
      local_260 = 0xf;
      FUN_1446e940c(local_48c,&local_268);
      FUN_140208bae(&local_268,local_48c,&local_478,
                    L"Transfer UVs from a low-res mesh to a high-res mesh.");
      (**(code **)(*plVar6 + 0x340))(plVar6,&local_268,2);
      if (local_268 != (code *)0x0) {
        (**(code **)(*(longlong *)local_268 + 0x10))();
      }
      if (*(longlong *)(param_1 + 0x110) != 0) {
        FUN_1485051e4();
      }
      if ((local_48 ^ (ulonglong)auStack_4b8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 1496d6efa FUN_1496d6efa body=148 status=ok
// SIG undefined FUN_1496d6efa(void)

undefined8 FUN_1496d6efa(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459f9016();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d6f90 FUN_1496d6f90 body=803 status=ok
// SIG undefined FUN_1496d6f90(void)

void FUN_1496d6f90(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  bVar1 = *(byte *)(param_1[0x1f] + 0xa8);
  uVar7 = (ulonglong)bVar1 ^ 1;
  iVar3 = (int)uVar7;
  uVar8 = (ulonglong)(uint)(iVar3 * 8);
  FUN_148558526(*(undefined8 *)(param_1[0x22] + 0x58),*(undefined8 *)(param_1[0x14] + uVar8));
  lVar2 = param_1[0x22];
  uVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar5 = FUN_1485578f6(uVar5);
  FUN_148506417(&local_a8,*(undefined8 *)(param_1[0x14] + uVar8),0);
  local_48 = local_a8;
  uStack_40 = uStack_a0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1485053d2(lVar2,&local_48,uVar5,0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  lVar6 = FUN_148f71fb0(param_1[0x21]);
  lVar2 = param_1[0x22];
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar6);
  }
  *(longlong *)(lVar2 + 0x70) = lVar6;
  FUN_14851bbe8(*(undefined8 *)(param_1[0x22] + 0x58),
                *(undefined8 *)((longlong)param_1 + (ulonglong)(uint)(iVar3 << 4) + 0x130),1,0xf);
  uVar5 = *(undefined8 *)(param_1[0x22] + 0x58);
  FUN_1485063a5(&local_a8,*(undefined8 *)(param_1[0x14] + uVar7 * 8));
  FUN_14851b91a(uVar5,&local_a8);
  FUN_148558526(param_1[0x23],*(undefined8 *)(param_1[0x14] + (ulonglong)((uint)bVar1 * 8)));
  lVar2 = param_1[0x23];
  FUN_148506417(&local_a8,*(undefined8 *)(param_1[0x14] + (ulonglong)((uint)bVar1 * 8)),0);
  FUN_14851b480(lVar2,&local_a8);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_14851bbe8(param_1[0x23],param_1[(ulonglong)bVar1 * 2 + 0x26],1,0xf);
  lVar2 = param_1[0x23];
  FUN_1485063a5(&local_a8,*(undefined8 *)(param_1[0x14] + (ulonglong)bVar1 * 8));
  FUN_14851b91a(lVar2,&local_a8);
  FUN_148f7236e(param_1[0x20],param_1[(ulonglong)bVar1 * 2 + 0x26],0);
  FUN_148f723a4(param_1[0x20],1);
  lVar2 = param_1[0x20];
  lVar6 = param_1[0x21];
  uVar4 = FUN_148f724e8(lVar2,0);
  FUN_148f71fd6(lVar6,uVar4,lVar2 + 0xb8,1);
  FUN_148f71ee6(param_1[0x21]);
  lVar6 = FUN_148f71fb0(param_1[0x21]);
  lVar2 = param_1[0x22];
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar6);
  }
  *(longlong *)(lVar2 + 0x70) = lVar6;
  lVar2 = param_1[0x24];
  if (lVar2 != 0) {
    FUN_14851b8ac(param_1[0x23],&local_a8);
    FUN_1484e27dc(lVar2,&local_a8);
    FUN_1484dea34(param_1[0x24]);
  }
  lVar2 = param_1[0x25];
  if (lVar2 != 0) {
    FUN_14851b8ac(*(undefined8 *)(param_1[0x22] + 0x58),&local_a8);
    FUN_1484e27dc(lVar2,&local_a8);
    FUN_1484dea34(param_1[0x25]);
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d72b4 FUN_1496d72b4 body=269 status=ok
// SIG undefined FUN_1496d72b4(void)

void FUN_1496d72b4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x120) + 0x120);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0xa9) = *(undefined1 *)(*(longlong *)(param_1 + 0xf8) + 0xb8);
    *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x120) + 0xab) =
         *(undefined1 *)(*(longlong *)(param_1 + 0xf8) + 0xb9);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x120) + 0x120);
    lVar2 = (longlong)*(int *)(lVar1 + 0x30);
    if (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar1 + 0x28);
      lVar3 = 0;
      do {
        (**(code **)(**(longlong **)(lVar1 + lVar3) + 8))();
        lVar3 = lVar3 + 8;
      } while (lVar2 * 8 != lVar3);
    }
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x128) + 0x120);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0xa9) = *(undefined1 *)(*(longlong *)(param_1 + 0xf8) + 0xb8);
    *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x128) + 0x120) + 0xab) =
         *(undefined1 *)(*(longlong *)(param_1 + 0xf8) + 0xb9);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x128) + 0x120);
    lVar2 = (longlong)*(int *)(lVar1 + 0x30);
    if (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar1 + 0x28);
      lVar3 = 0;
      do {
        (**(code **)(**(longlong **)(lVar1 + lVar3) + 8))();
        lVar3 = lVar3 + 8;
      } while (lVar2 * 8 != lVar3);
    }
  }
  return;
}



// FUNCTION 1496d73c2 FUN_1496d73c2 body=97 status=ok
// SIG undefined FUN_1496d73c2(void)

void FUN_1496d73c2(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_148505016(*(longlong *)(param_1 + 0x110),param_2);
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1484de7e0(*(longlong *)(param_1 + 0x128),param_2);
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1484de7e0(*(longlong *)(param_1 + 0x120),param_2);
    return;
  }
  return;
}



// FUNCTION 1496d743c FUN_1496d743c body=83 status=ok
// SIG undefined FUN_1496d743c(void)

void FUN_1496d743c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x108) == param_2) {
    FUN_148f71ee6();
    lVar2 = FUN_148f71fb0(*(undefined8 *)(param_1 + 0x108));
    lVar1 = *(longlong *)(param_1 + 0x110);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar2);
    }
    *(longlong *)(lVar1 + 0x70) = lVar2;
  }
  return;
}



// FUNCTION 1496d7490 FUN_1496d7490 body=610 status=ok
// SIG undefined FUN_1496d7490(void)

undefined8 * FUN_1496d7490(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  void *_Dst;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
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
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  _Dst = (void *)FUN_14001cc68(0x170);
  memset(_Dst,0,0x170);
  FUN_1496dbfec(_Dst);
  bVar3 = *(byte *)(*(longlong *)(param_1 + 0x10) + 0xa8);
  uVar9 = (ulonglong)bVar3 ^ 1;
  lVar7 = (ulonglong)bVar3 * 0x10;
  uVar4 = *(undefined8 *)(param_1 + 0x48 + lVar7);
  plVar5 = *(longlong **)(param_1 + 0x50 + lVar7);
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 *)((longlong)_Dst + 0x88) = uVar4;
    plVar10 = *(longlong **)((longlong)_Dst + 0x90);
    if (plVar10 != (longlong *)0x0) {
      *(undefined8 *)((longlong)_Dst + 0x90) = 0;
LAB_1496d7550:
      LOCK();
      plVar5 = plVar10 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001496d757f:
        if (iVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(undefined8 *)((longlong)_Dst + 0x88) = uVar4;
    plVar10 = *(longlong **)((longlong)_Dst + 0x90);
    if (plVar5 == plVar10) {
      LOCK();
      plVar10 = plVar5 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar10 = plVar5;
        goto joined_r0x0001496d757f;
      }
    }
    else {
      *(longlong **)((longlong)_Dst + 0x90) = plVar5;
      if (plVar10 != (longlong *)0x0) goto LAB_1496d7550;
    }
  }
  uVar8 = (ulonglong)(uint)((int)uVar9 << 4);
  uVar4 = *(undefined8 *)(param_1 + 0x48 + uVar8);
  plVar5 = *(longlong **)(param_1 + 0x50 + uVar8);
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 *)((longlong)_Dst + 0x98) = uVar4;
    plVar10 = *(longlong **)((longlong)_Dst + 0xa0);
    if (plVar10 == (longlong *)0x0) goto LAB_1496d761d;
    *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
LAB_1496d75e3:
    LOCK();
    plVar5 = plVar10 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1496d761d;
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar5 = plVar10;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(undefined8 *)((longlong)_Dst + 0x98) = uVar4;
    plVar10 = *(longlong **)((longlong)_Dst + 0xa0);
    if (plVar5 != plVar10) {
      *(longlong **)((longlong)_Dst + 0xa0) = plVar5;
      if (plVar10 == (longlong *)0x0) goto LAB_1496d761d;
      goto LAB_1496d75e3;
    }
    LOCK();
    plVar10 = plVar5 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 != 0) goto LAB_1496d761d;
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
LAB_1496d761d:
  FUN_1485063a5(&local_a8,*(undefined8 *)(*(longlong *)(param_1 + -0x48) + uVar9 * 8));
  *(undefined4 *)((longlong)_Dst + 0x10) = local_a8;
  *(undefined4 *)((longlong)_Dst + 0x14) = uStack_a4;
  *(undefined4 *)((longlong)_Dst + 0x18) = uStack_a0;
  *(undefined4 *)((longlong)_Dst + 0x1c) = uStack_9c;
  *(undefined4 *)((longlong)_Dst + 0x20) = local_98;
  *(undefined4 *)((longlong)_Dst + 0x24) = uStack_94;
  *(undefined4 *)((longlong)_Dst + 0x28) = uStack_90;
  *(undefined4 *)((longlong)_Dst + 0x2c) = uStack_8c;
  *(undefined4 *)((longlong)_Dst + 0x30) = local_88;
  *(undefined4 *)((longlong)_Dst + 0x34) = uStack_84;
  *(undefined4 *)((longlong)_Dst + 0x38) = uStack_80;
  *(undefined4 *)((longlong)_Dst + 0x3c) = uStack_7c;
  *(undefined8 *)((longlong)_Dst + 0x40) = local_78;
  *(undefined8 *)((longlong)_Dst + 0x48) = local_68;
  *(undefined8 *)((longlong)_Dst + 0x50) = uStack_60;
  *(undefined8 *)((longlong)_Dst + 0x58) = local_58;
  uVar6 = FUN_148f724e8(*(undefined8 *)(param_1 + 0x18),1);
  *(undefined4 *)((longlong)_Dst + 0x148) = uVar6;
  lVar7 = *(longlong *)(param_1 + 0x10);
  *(undefined1 *)((longlong)_Dst + 0x14c) = *(undefined1 *)(lVar7 + 0xa9);
  *(undefined1 *)((longlong)_Dst + 0x14d) = *(undefined1 *)(lVar7 + 0xaa);
  uVar4 = *(undefined8 *)(lVar7 + 0xc0);
  *(undefined8 *)((longlong)_Dst + 0x150) = uVar4;
  *(undefined8 *)((longlong)_Dst + 0x158) = uVar4;
  *(undefined8 *)((longlong)_Dst + 0x160) = *(undefined8 *)(lVar7 + 0xb0);
  *param_2 = _Dst;
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d76fd FUN_1496d76fd body=148 status=ok
// SIG undefined FUN_1496d76fd(void)

undefined8 FUN_1496d76fd(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145baacb8();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d7792 FUN_1496d7792 body=54 status=ok
// SIG undefined FUN_1496d7792(void)

bool FUN_1496d7792(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  uVar3 = (**(code **)(*param_1 + 0x2c0))();
  iVar2 = (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2,uVar3);
  return iVar2 == 2;
}



// FUNCTION 1496d77c8 FUN_1496d77c8 body=311 status=ok
// SIG undefined FUN_1496d77c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1496d77c8(void)

{
  undefined8 *_Src;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *_Dst;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc221a0) {
    FUN_144b3d300(&DAT_14cc221a0);
    if (DAT_14cc221a0 == -1) {
      uVar1 = FUN_145b74cee();
      uVar2 = FUN_145b74c04();
      local_38 = (undefined8 *)0x0;
      local_30 = 2;
      FUN_1484d6e40(&local_38,2,0);
      _Src = local_38;
      *local_38 = uVar1;
      local_38[1] = uVar2;
      DAT_14cc22190 = (undefined *)0x0;
      _DAT_14cc2219c = 5;
      lVar3 = (longlong)local_30;
      _DAT_14cc22198 = local_30;
      FUN_1484d23fc(&DAT_14cc22168,local_30,5);
      if (lVar3 != 0) {
        _Dst = &DAT_14cc22168;
        if (DAT_14cc22190 != (undefined *)0x0) {
          _Dst = DAT_14cc22190;
        }
        memcpy(_Dst,_Src,lVar3 << 3);
      }
      if (local_38 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14458301c);
      _Init_thread_footer(&DAT_14cc221a0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return &DAT_14cc22168;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d792c FUN_1496d792c body=23 status=ok
// SIG undefined FUN_1496d792c(void)

bool FUN_1496d792c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1496d7943(param_2);
  return iVar1 == 1;
}



// FUNCTION 1496d7943 FUN_1496d7943 body=135 status=ok
// SIG undefined FUN_1496d7943(void)

undefined4 FUN_1496d7943(undefined8 param_1)

{
  undefined4 uVar1;
  undefined ***pppuVar2;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  code *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14bdd8800;
  local_30 = FUN_1496dc47a;
  local_58[0] = &LAB_1496dc4b4;
  uVar1 = FUN_1484530dc(param_1,local_58);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar2 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar2 = &local_38;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d79cc FUN_1496d79cc body=70 status=ok
// SIG undefined FUN_1496d79cc(void)

longlong * FUN_1496d79cc(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_1496d7a12(param_2[1]);
  (**(code **)(*plVar1 + 0x378))(plVar1,*param_2);
  uVar2 = FUN_1496d7aa7(param_2);
  (**(code **)(*plVar1 + 0x380))(plVar1,uVar2);
  return plVar1;
}



// FUNCTION 1496d7a12 FUN_1496d7a12 body=148 status=ok
// SIG undefined FUN_1496d7a12(void)

undefined8 FUN_1496d7a12(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145baf4ee();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d7aa7 FUN_1496d7aa7 body=176 status=ok
// SIG undefined FUN_1496d7aa7(void)

longlong FUN_1496d7aa7(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined ***pppuVar3;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  code *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14bdd8800;
  local_30 = FUN_1496dc506;
  local_58[0] = &LAB_1496dc4b4;
  lVar1 = FUN_1484531db(param_1,local_58);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar3 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar3 = &local_38;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  if (lVar1 != 0) {
    lVar2 = FUN_140fe7df8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_1496d7b37;
  }
  lVar1 = 0;
LAB_1496d7b37:
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d7b58 FUN_1496d7b58 body=209 status=ok
// SIG undefined FUN_1496d7b58(void)

void FUN_1496d7b58(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  FUN_1468b526e();
  *(undefined4 *)(param_1 + 0xb8) = local_38;
  *(undefined4 *)(param_1 + 0xbc) = uStack_34;
  *(undefined4 *)(param_1 + 0xc0) = uStack_30;
  *(undefined4 *)(param_1 + 0xc4) = uStack_2c;
  cVar2 = (*(code *)PTR_FUN_14c758760)();
  if (cVar2 != '\0') {
    uVar1 = *(uint *)(param_2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) & 0x8400000) != 0) {
      *(undefined8 *)(param_1 + 0xb0) = 0;
      goto LAB_1496d7c13;
    }
  }
  FUN_14485c47a((undefined8 *)(param_1 + 0xb0),param_2);
LAB_1496d7c13:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496d7c2a FUN_1496d7c2a body=1578 status=ok
// SIG undefined FUN_1496d7c2a(void)

void FUN_1496d7c2a(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_1f8 [40];
  undefined1 local_1d0 [4];
  undefined1 local_1cc [4];
  wchar_t *local_1c8;
  undefined4 local_1c0;
  undefined1 *local_1b8;
  undefined8 local_1a8;
  undefined **local_198;
  longlong *local_190;
  undefined1 *local_178;
  undefined8 local_168;
  undefined **local_158;
  longlong *local_150;
  undefined1 *local_138;
  undefined8 local_128;
  undefined **local_118;
  longlong *local_110;
  undefined1 *local_f8;
  undefined8 local_e8;
  undefined **local_d8;
  longlong *local_d0;
  code *local_b8;
  undefined8 local_a8;
  undefined **local_98;
  longlong *local_90;
  code *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  longlong *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  FUN_1484416be();
  lVar3 = FUN_1484e47e5(param_1);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar3);
  }
  param_1[0x15] = lVar3;
  *(undefined1 *)(lVar3 + 0x40) = 0;
  lVar3 = param_1[0x15];
  plVar6 = param_1 + 0x16;
  lVar4 = FUN_14479d2ce(plVar6);
  if (lVar4 == 0) {
    if (((*(int *)((longlong)param_1 + 0xbc) != 0 || (int)param_1[0x17] != 0) ||
        (int)param_1[0x18] != 0) || *(int *)((longlong)param_1 + 0xc4) != 0) {
      lVar4 = thunk_FUN_140971090();
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar4 == 0) || (cVar2 == '\0')) {
        FUN_14485c47a(plVar6,lVar4);
        if (lVar4 == 0) goto LAB_1496d7d53;
      }
      else {
        uVar1 = *(uint *)(lVar4 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(plVar6,lVar4);
        }
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) goto LAB_1496d7d33;
    }
LAB_1496d7d53:
    lVar4 = 0;
  }
  else {
LAB_1496d7d33:
    lVar7 = FUN_140fe7df8();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        != lVar7 + 0x30)) goto LAB_1496d7d53;
  }
  uVar5 = FUN_1447210f0(lVar4);
  FUN_14851b11a(lVar3,uVar5,&DAT_14c846480);
  lVar3 = param_1[0x15];
  lVar4 = FUN_14479d2ce(plVar6);
  if (lVar4 == 0) {
    if (((*(int *)((longlong)param_1 + 0xbc) != 0 || (int)param_1[0x17] != 0) ||
        (int)param_1[0x18] != 0) || *(int *)((longlong)param_1 + 0xc4) != 0) {
      lVar4 = thunk_FUN_140971090();
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar4 == 0) || (cVar2 == '\0')) {
        FUN_14485c47a(plVar6,lVar4);
        if (lVar4 == 0) goto LAB_1496d7e42;
      }
      else {
        uVar1 = *(uint *)(lVar4 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(plVar6,lVar4);
        }
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) goto LAB_1496d7e22;
    }
  }
  else {
LAB_1496d7e22:
    lVar7 = FUN_140fe7df8();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) goto LAB_1496d7e45;
  }
LAB_1496d7e42:
  lVar4 = 0;
LAB_1496d7e45:
  puVar8 = (undefined8 *)(*(longlong *)(lVar4 + 0x1c8) + 0x240);
  if (*(longlong *)(lVar4 + 0x1c8) == 0) {
    puVar8 = &DAT_14c846480;
  }
  FUN_14851b91a(lVar3,puVar8);
  FUN_148558526(param_1[0x15],0);
  lVar3 = param_1[0x15];
  uVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar5 = FUN_148557b44(uVar5);
  FUN_14851b338(lVar3,uVar5);
  lVar3 = param_1[0x15];
  uVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar5 = FUN_148557e35(uVar5);
  FUN_14851b56e(lVar3,uVar5);
  local_68 = 0;
  local_58 = &PTR_LAB_14bdd8820;
  local_78[0] = FUN_1445846ce;
  local_50 = param_1;
  FUN_14851c734(param_1[0x15],local_78,1);
  lVar3 = FUN_1484e2e03(*(undefined8 *)(param_1[0x15] + 0x50));
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar3);
  }
  param_1[0x19] = lVar3;
  FUN_140486fc4(lVar3,*(undefined8 *)(param_1[0x15] + 0x50),0);
  lVar3 = param_1[0x19];
  uVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar5 = FUN_1485583eb(uVar5,1);
  FUN_1484d0608(lVar3,uVar5);
  FUN_140b506a4(param_1[0x19]);
  plVar6 = (longlong *)FUN_1484c5a9a(param_1);
  if ((plVar6 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar6);
  }
  param_1[0x14] = (longlong)plVar6;
  FUN_140056680(&local_1c8,L"VolumeToMeshTool");
  (**(code **)(*plVar6 + 0x2a8))(plVar6,param_1,&local_1c8);
  if (local_1c8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_14851cad2(param_1[0x14],1,0,1);
  local_a8 = 0;
  local_98 = &PTR_LAB_14bdd8840;
  local_b8 = FUN_14458473c;
  local_90 = param_1;
  FUN_1484c5b30(param_1[0x14] + 0x28,param_1[0x14] + 0xa8);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x14]);
  plVar6 = (longlong *)FUN_1496d8255(param_1);
  if ((plVar6 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar6);
  }
  param_1[0x13] = (longlong)plVar6;
  FUN_140056680(&local_1c8,&DAT_149dfb77a);
  (**(code **)(*plVar6 + 0x2a8))(plVar6,param_1,&local_1c8);
  if (local_1c8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x13]);
  local_e8 = 0;
  local_d8 = &PTR_LAB_14bdd8860;
  local_f8 = &LAB_144584828;
  local_d0 = param_1;
  FUN_1484c9b00(param_1[0x13] + 0x28,param_1[0x13] + 0xa8);
  local_128 = 0;
  local_118 = &PTR_LAB_14bdd8880;
  local_138 = &LAB_14458487c;
  local_110 = param_1;
  FUN_1484c9b00(param_1[0x13] + 0x28,param_1[0x13] + 0xa9);
  local_168 = 0;
  local_158 = &PTR_LAB_14bdd88a0;
  local_178 = &LAB_1445848d0;
  local_150 = param_1;
  FUN_1484c9b00(param_1[0x13] + 0x28,param_1[0x13] + 0xaa);
  local_1a8 = 0;
  local_198 = &PTR_LAB_14bdd88c0;
  local_1b8 = &LAB_144584924;
  local_190 = param_1;
  FUN_1484c9b00(param_1[0x13] + 0x28,param_1[0x13] + 0xab);
  *(undefined1 *)(param_1 + 0x5f) = 0;
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_1c8 = L"OnStartTool";
  local_1c0 = 0xb;
  FUN_1446e940c(local_1cc,&local_1c8);
  local_1c8 = L"UVolumeToMeshTool";
  local_1c0 = 0x11;
  FUN_1446e940c(local_1d0,&local_1c8);
  FUN_140208bae(&local_1c8,local_1d0,local_1cc,L"Convert a Volume to a Mesh");
  (**(code **)(*plVar6 + 0x340))(plVar6,&local_1c8,2);
  if (local_1c8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_1c8 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496d8255 FUN_1496d8255 body=148 status=ok
// SIG undefined FUN_1496d8255(void)

undefined8 FUN_1496d8255(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459fcfb2();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d82ea FUN_1496d82ea body=1299 status=ok
// SIG undefined FUN_1496d82ea(void)

void FUN_1496d82ea(longlong *param_1,char param_2)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  undefined8 *puVar11;
  undefined1 auStack_778 [40];
  undefined8 local_750;
  longlong local_748;
  undefined1 local_72c [4];
  longlong local_728;
  int local_720;
  undefined8 local_718 [12];
  wchar_t *local_6b8;
  int local_6b0;
  longlong local_698;
  undefined8 local_688 [12];
  undefined1 local_628 [16];
  longlong local_618;
  uint local_610;
  uint local_60c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_778;
  plVar2 = (longlong *)param_1[0x14];
  FUN_140056680(&local_6b8,L"VolumeToMeshTool");
  (**(code **)(*plVar2 + 0x2a0))(plVar2,param_1,&local_6b8);
  if (local_6b8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x13];
  FUN_140056680(&local_6b8,&DAT_149dfb77a);
  (**(code **)(*plVar2 + 0x2a0))(plVar2,param_1,&local_6b8);
  if (local_6b8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_14851b8ac(param_1[0x15],local_718);
  FUN_14851bab8(param_1[0x15],0);
  FUN_14851b2ea(param_1[0x15]);
  param_1[0x15] = 0;
  if (param_2 != '\x01') goto LAB_1496d83cc;
  lVar5 = FUN_1447277f0(0);
  plVar2 = param_1 + 0x16;
  lVar6 = FUN_14479d2ce(plVar2);
  if (lVar6 == 0) {
    if (((*(int *)((longlong)param_1 + 0xbc) != 0 || (int)param_1[0x17] != 0) ||
        (int)param_1[0x18] != 0) || *(int *)((longlong)param_1 + 0xc4) != 0) {
      lVar6 = thunk_FUN_140971090();
      cVar4 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar6 == 0) || (cVar4 == '\0')) {
        FUN_14485c47a(plVar2,lVar6);
        if (lVar6 == 0) goto LAB_1496d8439;
      }
      else {
        uVar1 = *(uint *)(lVar6 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        if ((*(uint *)(lVar8 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(plVar2,lVar6);
        }
      }
      if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0) goto LAB_1496d86d9;
    }
LAB_1496d8439:
    FUN_140056680(&local_728,L"Volume Mesh");
  }
  else {
LAB_1496d86d9:
    lVar6 = FUN_14479d2ce(plVar2);
    if (lVar6 == 0) {
      if (((*(int *)((longlong)param_1 + 0xbc) != 0 || (int)param_1[0x17] != 0) ||
          (int)param_1[0x18] != 0) || *(int *)((longlong)param_1 + 0xc4) != 0) {
        lVar6 = thunk_FUN_140971090();
        cVar4 = (*(code *)PTR_FUN_14c758760)();
        if ((lVar6 == 0) || (cVar4 == '\0')) {
          FUN_14485c47a(plVar2,lVar6);
          if (lVar6 == 0) goto LAB_1496d87a2;
        }
        else {
          uVar1 = *(uint *)(lVar6 + 0xc);
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar8 = 0;
          }
          if ((*(uint *)(lVar8 + 8) & 0x8400000) == 0) {
            FUN_14485c47a(plVar2,lVar6);
          }
        }
        if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0) goto LAB_1496d8782;
      }
LAB_1496d87a2:
      lVar6 = 0;
    }
    else {
LAB_1496d8782:
      lVar8 = FUN_140fe7df8();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8
           ) != lVar8 + 0x30)) goto LAB_1496d87a2;
    }
    local_750 = *(undefined8 *)(lVar6 + 0x18);
    FUN_1400021e4(&local_750,&local_6b8);
    pwVar10 = L"";
    if (local_6b0 != 0) {
      pwVar10 = local_6b8;
    }
    FUN_140002266(&local_728,L"%sMesh",pwVar10);
    if (local_6b8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
  local_6b8 = L"CreateMeshVolume";
  local_6b0 = 0x10;
  FUN_1446e940c(&local_750,&local_6b8);
  local_6b8 = L"UVolumeToMeshTool";
  local_6b0 = 0x11;
  FUN_1446e940c(local_72c,&local_6b8);
  FUN_140208bae(&local_6b8,local_72c,&local_750,L"Volume To Mesh");
  (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x10))(lVar6 + 0x28,&local_6b8);
  if (local_6b8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_6b8 + 0x10))();
  }
  FUN_14850577a(&local_6b8,1);
  local_698 = param_1[0x1a];
  if ((local_698 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_698);
  }
  puVar9 = local_718;
  puVar11 = local_688;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  iVar3 = local_720 + -1;
  if (local_720 == 0) {
    iVar3 = 0;
  }
  FUN_1402980a2(local_628,local_728,iVar3);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  uVar1 = local_610;
  lVar6 = (longlong)(int)local_610;
  local_610 = local_610 + 1;
  if (local_60c < local_610) {
    FUN_140655806(&local_618,uVar1);
  }
  *(longlong *)(local_618 + lVar6 * 8) = lVar5;
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  FUN_148505bae(&local_6b8,param_1 + 0x1b);
  (**(code **)(*(longlong *)param_1[0x14] + 0x2c0))((longlong *)param_1[0x14],&local_6b8);
  uVar7 = (**(code **)(*param_1 + 0x2c8))(param_1);
  FUN_148505c7a(&local_750,uVar7,&local_6b8);
  if (((char)local_750 == '\0') && (local_748 != 0)) {
    uVar7 = (**(code **)(*param_1 + 0x2c8))(param_1);
    FUN_1485509b4(uVar7,local_748);
  }
  lVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x18))(lVar5 + 0x28);
  FUN_1484c7624(&local_6b8);
  if (local_728 != 0) {
    FUN_1400020a8();
  }
LAB_1496d83cc:
  if ((local_40 ^ (ulonglong)auStack_778) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496d880c FUN_1496d880c body=671 status=ok
// SIG undefined FUN_1496d880c(void)

void FUN_1496d880c(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_278 [32];
  undefined1 local_258;
  undefined1 local_24e;
  undefined1 local_24d;
  undefined1 uStack_24c;
  undefined1 uStack_24b;
  undefined1 uStack_24a;
  undefined1 local_249;
  undefined1 local_248 [544];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_278;
  lVar4 = param_1 + 0xb0;
  lVar3 = FUN_14479d2ce(lVar4);
  if (lVar3 == 0) {
    if (((*(int *)(param_1 + 0xbc) == 0 && *(int *)(param_1 + 0xb8) == 0) &&
        *(int *)(param_1 + 0xc0) == 0) && *(int *)(param_1 + 0xc4) == 0) goto LAB_1496d8a76;
    lVar3 = thunk_FUN_140971090();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(lVar4,lVar3);
      if (lVar3 == 0) goto LAB_1496d8a76;
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
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) goto LAB_1496d8a76;
  }
  local_24e = 0;
  local_249 = 1;
  lVar3 = *(longlong *)(param_1 + 0x98);
  _local_24d = CONCAT13(*(undefined1 *)(lVar3 + 0xaa),
                        CONCAT12(*(undefined1 *)(lVar3 + 0xa9),
                                 CONCAT11(*(undefined1 *)(lVar3 + 0xa8),1)));
  local_258 = 1;
  FUN_1411b354a(local_248,0,0,0);
  lVar3 = param_1 + 0xd8;
  FUN_146c00942(lVar3,local_248);
  FUN_141082778(local_248);
  lVar5 = FUN_14479d2ce(lVar4);
  if (lVar5 == 0) {
    if (((*(int *)(param_1 + 0xbc) != 0 || *(int *)(param_1 + 0xb8) != 0) ||
        *(int *)(param_1 + 0xc0) != 0) || *(int *)(param_1 + 0xc4) != 0) {
      lVar5 = thunk_FUN_140971090();
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar5 == 0) || (cVar2 == '\0')) {
        FUN_14485c47a(lVar4,lVar5);
        if (lVar5 == 0) goto LAB_1496d8a13;
      }
      else {
        uVar1 = *(uint *)(lVar5 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(lVar4,lVar5);
        }
      }
      if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) goto LAB_1496d89f3;
    }
LAB_1496d8a13:
    lVar5 = 0;
  }
  else {
LAB_1496d89f3:
    lVar4 = FUN_140fe7df8();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_1496d8a13;
  }
  FUN_1484cfa92(lVar5,lVar3,&local_24e);
  FUN_14582ed12(lVar3);
  if (*(int *)(*(longlong *)(param_1 + 0x2e0) + 0x38) < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = **(undefined8 **)(*(longlong *)(param_1 + 0x2e0) + 0x30);
  }
  FUN_146c39d50(lVar3,uVar7);
  FUN_146c3906a(lVar3,0,1,1);
  FUN_14851bbe8(*(undefined8 *)(param_1 + 0xa8),lVar3,1,0xf);
LAB_1496d8a76:
  FUN_1496d8ac6(param_1);
  *(undefined1 *)(param_1 + 0x2f8) = 1;
  if ((local_28 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496d8ac6 FUN_1496d8ac6 body=636 status=ok
// SIG undefined FUN_1496d8ac6(void)

void FUN_1496d8ac6(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1484d04e2(*(undefined8 *)(param_1 + 200));
  if (*(char *)(*(longlong *)(param_1 + 0x98) + 0xab) == '\x01') {
    FUN_1484d0658(*(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0x2d8));
    uVar6 = *(int *)(param_1 + 0x2a8) * 0x200 + *(int *)(param_1 + 0x2ac);
    uVar10 = 0;
    if ((uVar6 != 0) &&
       (uVar10 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x2b0) - 1U))) {
      uVar11 = 1;
      uVar4 = 1;
      if (1 < (int)uVar6) {
        uVar11 = uVar6;
      }
      do {
        uVar10 = uVar11;
        if (uVar11 == uVar4) break;
        uVar5 = uVar4 >> 9;
        uVar7 = uVar4 & 0x1ff;
        uVar10 = uVar4;
        uVar4 = uVar4 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x2b0))[uVar5] +
                                           (ulonglong)uVar7 * 2) - 1U));
    }
    if (uVar10 != uVar6) {
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x298) + (ulonglong)(uVar10 >> 9) * 8);
        uVar8 = (ulonglong)((uVar10 & 0x1ff) << 4);
        uVar2 = *(ulonglong *)(lVar1 + uVar8);
        puVar3 = (undefined4 *)
                 ((ulonglong)(((uint)uVar2 & 0x1ff) * 0x18) +
                 *(longlong *)(*(longlong *)(param_1 + 0xe8) + (uVar2 >> 9 & 0x7fffff) * 8));
        puVar9 = (undefined4 *)
                 ((ulonglong)(((uint)(uVar2 >> 0x20) & 0x1ff) * 0x18) +
                 *(longlong *)(*(longlong *)(param_1 + 0xe8) + (uVar2 >> 0x29) * 8));
        if (*(int *)(lVar1 + 0xc + uVar8) == -1) {
          local_60 = *(undefined8 *)(puVar9 + 4);
          local_70 = *puVar9;
          uStack_6c = puVar9[1];
          uStack_68 = puVar9[2];
          uStack_64 = puVar9[3];
          local_78 = *(undefined8 *)(puVar3 + 4);
          local_88 = *puVar3;
          uStack_84 = puVar3[1];
          uStack_80 = puVar3[2];
          uStack_7c = puVar3[3];
          local_58 = 0xffeb1010;
          local_54 = 0x400000003f800000;
        }
        else {
          local_60 = *(undefined8 *)(puVar9 + 4);
          local_70 = *puVar9;
          uStack_6c = puVar9[1];
          uStack_68 = puVar9[2];
          uStack_64 = puVar9[3];
          local_78 = *(undefined8 *)(puVar3 + 4);
          local_88 = *puVar3;
          uStack_84 = puVar3[1];
          uStack_80 = puVar3[2];
          uStack_7c = puVar3[3];
          local_58 = 0xff808080;
          local_54 = 0x3f8000003dcccccd;
        }
        local_c8 = local_88;
        uStack_c4 = uStack_84;
        uStack_c0 = uStack_80;
        uStack_bc = uStack_7c;
        local_b8 = local_78;
        local_a8 = local_70;
        uStack_a4 = uStack_6c;
        uStack_a0 = uStack_68;
        uStack_9c = uStack_64;
        local_98 = local_60;
        FUN_1484d0812(*(undefined8 *)(param_1 + 200),&local_88);
        uVar11 = uVar10 + 1;
        if ((int)(uVar10 + 1) < (int)uVar6) {
          uVar11 = uVar6;
        }
        do {
          uVar4 = uVar11;
          if (uVar11 - 1 == uVar10) break;
          uVar10 = uVar10 + 1;
          uVar4 = uVar10;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_1 + 0x2b0) +
                                               (ulonglong)(uVar10 >> 9) * 8) +
                                             (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
        uVar10 = uVar4;
      } while (uVar10 != uVar6);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496d8d60 FUN_1496d8d60 body=448 status=ok
// SIG undefined FUN_1496d8d60(void)

void FUN_1496d8d60(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1484c9df8();
  plVar1 = (longlong *)FUN_1496d8f21(param_1);
  if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar1);
  }
  param_1[0x24] = (longlong)plVar1;
  FUN_140056680(&local_40,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1,&local_40);
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x24]);
  local_40 = L"VoxelBlendMeshesToolName";
  local_38 = 0x18;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"UVoxelBlendMeshesTool";
  local_38 = 0x15;
  FUN_1446e940c(local_48,&local_40);
  FUN_140208bae(&local_40,local_48,local_44,L"Voxel Blend");
  (**(code **)(*param_1 + 0x370))(param_1,&local_40);
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_40 = L"VoxelBlendMeshesToolDescription";
  local_38 = 0x1f;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"UVoxelBlendMeshesTool";
  local_38 = 0x15;
  FUN_1446e940c(local_48,&local_40);
  FUN_140208bae(&local_40,local_48,local_44,
                L"Compute a volumetric Blend of the input meshes, controlled by the Blend Power/Falloff. UVs, sharp edges, and small/thin features will be lost. Increase Voxel Count to enhance accuracy."
               );
  (**(code **)(*plVar1 + 0x340))(plVar1,&local_40,2);
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d8f21 FUN_1496d8f21 body=148 status=ok
// SIG undefined FUN_1496d8f21(void)

undefined8 FUN_1496d8f21(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459fd09e();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d8fb6 FUN_1496d8fb6 body=118 status=ok
// SIG undefined FUN_1496d8fb6(void)

void FUN_1496d8fb6(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1484c9f32();
  plVar1 = *(longlong **)(param_1 + 0x120);
  FUN_140056680(local_30,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d902e FUN_1496d902e body=253 status=ok
// SIG undefined FUN_1496d902e(void)

void FUN_1496d902e(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1484ca076();
  if (*(char *)(param_1[0x24] + 0xb9) == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x410))(param_1);
    if (cVar1 != '\0') {
      plVar2 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      local_38 = L"WarnOpenEdges";
      local_30 = 0xd;
      FUN_1446e940c(local_3c,&local_38);
      local_38 = L"UVoxelBlendMeshesTool";
      local_30 = 0x15;
      FUN_1446e940c(local_40,&local_38);
      FUN_140208bae(&local_38,local_40,local_3c,
                    L"Open edges found: Consider using the \'Vox Wrap Preprocess\' settings to avoid artifacts."
                   );
      (**(code **)(*plVar2 + 0x340))(plVar2,&local_38,3);
      if (local_38 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_38 + 0x10))();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d912c FUN_1496d912c body=746 status=ok
// SIG undefined FUN_1496d912c(void)

void FUN_1496d912c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  double dVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_e8 [40];
  undefined8 *local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  undefined8 local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8 = param_2;
  puVar8 = (undefined8 *)FUN_14001cc68(0x100);
  memset(puVar8,0,0x100);
  FUN_14845abbc(puVar8);
  puVar8[0x11] = 0;
  puVar8[0x12] = 0;
  *(undefined1 *)(puVar8 + 0x13) = 1;
  puVar8[0x14] = 0x3ff0000000000000;
  *(undefined4 *)(puVar8 + 0x15) = 0x400;
  *(undefined4 *)((longlong)puVar8 + 0xac) = 0x400;
  *(undefined1 *)(puVar8 + 0x16) = 0;
  *puVar8 = &PTR_FUN_14bdd88e0;
  plVar2 = puVar8 + 0x17;
  local_b0 = puVar8 + 0x19;
  puVar8[0x17] = 0;
  puVar8[0x18] = 0;
  puVar8[0x19] = 0;
  puVar8[0x1a] = 0;
  puVar8[0x1b] = 0x4024000000000000;
  puVar8[0x1c] = 0x4000000000000000;
  *(undefined2 *)(puVar8 + 0x1d) = 0;
  puVar8[0x1e] = 0;
  *(undefined1 *)(puVar8 + 0x1f) = 0;
  local_c0 = puVar8;
  FUN_140ee84a4(local_b0,*(undefined4 *)(param_1 + -0x10),1);
  FUN_148f517fe(plVar2,*(undefined4 *)(param_1 + -0x10),1);
  if (0 < *(int *)(param_1 + -0x10)) {
    lVar10 = 1;
    lVar13 = 0;
    lVar14 = 0;
    do {
      uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + -8 + lVar10 * 8);
      plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x58) + lVar10 * 8);
      if (plVar7 == (longlong *)0x0) {
        lVar9 = *plVar2;
        *(undefined8 *)(lVar9 + -8 + lVar10 * 8) = uVar6;
        plVar11 = *(longlong **)(lVar9 + lVar10 * 8);
        if (plVar11 != (longlong *)0x0) {
          *(undefined8 *)(lVar9 + lVar10 * 8) = 0;
LAB_1496d92b0:
          LOCK();
          plVar7 = plVar11 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar3 = *piVar1;
            UNLOCK();
joined_r0x0001496d92db:
            if (iVar3 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        lVar9 = *plVar2;
        *(undefined8 *)(lVar9 + -8 + lVar10 * 8) = uVar6;
        plVar11 = *(longlong **)(lVar9 + lVar10 * 8);
        if (plVar7 == plVar11) {
          LOCK();
          plVar11 = plVar7 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar3 = *piVar1;
            UNLOCK();
            plVar11 = plVar7;
            goto joined_r0x0001496d92db;
          }
        }
        else {
          *(longlong **)(lVar9 + lVar10 * 8) = plVar7;
          if (plVar11 != (longlong *)0x0) goto LAB_1496d92b0;
        }
      }
      plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x30) + lVar14 * 8);
      (**(code **)(*plVar7 + 0x2b0))(plVar7,local_a8);
      puVar8 = local_a8;
      puVar12 = (undefined8 *)(*local_b0 + lVar13);
      for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar12 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar12 = puVar12 + 1;
      }
      lVar14 = lVar14 + 1;
      lVar13 = lVar13 + 0x60;
      lVar10 = lVar10 + 2;
    } while (lVar14 < *(int *)(param_1 + -0x10));
  }
  lVar10 = *(longlong *)(param_1 + 0x68);
  local_c0[0x1b] = *(undefined8 *)(lVar10 + 0xb0);
  local_c0[0x1c] = *(undefined8 *)(lVar10 + 0xa8);
  *(bool *)(local_c0 + 0x1f) = *(char *)(lVar10 + 0xb8) == '\x01';
  *(undefined1 *)(local_c0 + 0x1d) = *(undefined1 *)(lVar10 + 0xb9);
  *(undefined1 *)((longlong)local_c0 + 0xe9) = *(undefined1 *)(lVar10 + 0xba);
  local_c0[0x1e] = *(undefined8 *)(lVar10 + 0xc0);
  lVar10 = *(longlong *)(param_1 + 0x50);
  uVar5 = *(undefined4 *)(lVar10 + 0xa8);
  *(undefined4 *)((longlong)local_c0 + 0xac) = uVar5;
  *(undefined4 *)(local_c0 + 0x15) = uVar5;
  *(undefined1 *)(local_c0 + 0x13) = *(undefined1 *)(lVar10 + 0xac);
  *(undefined1 *)(local_c0 + 0x16) = *(undefined1 *)(lVar10 + 0xad);
  local_c0[0x14] = *(undefined8 *)(lVar10 + 0xb0);
  dVar4 = *(double *)(lVar10 + 0xb8);
  local_c0[0x11] = dVar4 * dVar4 * dVar4;
  *local_b8 = local_c0;
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d9418 FUN_1496d9418 body=32 status=ok
// SIG undefined FUN_1496d9418(void)

undefined8 FUN_1496d9418(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Blended");
  return param_2;
}



// FUNCTION 1496d9438 FUN_1496d9438 body=152 status=ok
// SIG undefined FUN_1496d9438(void)

undefined8 FUN_1496d9438(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"VoxelBlendMeshes";
  local_28 = 0x10;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"UVoxelBlendMeshesTool";
  local_28 = 0x15;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Voxel Blend");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d94ee FUN_1496d94ee body=448 status=ok
// SIG undefined FUN_1496d94ee(void)

void FUN_1496d94ee(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1484c9df8();
  plVar1 = (longlong *)FUN_1496d96af(param_1);
  if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar1);
  }
  param_1[0x24] = (longlong)plVar1;
  FUN_140056680(&local_40,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1,&local_40);
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x24]);
  local_40 = L"VoxelMorphologyMeshesToolName";
  local_38 = 0x1d;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"UVoxelMorphologyMeshesTool";
  local_38 = 0x1a;
  FUN_1446e940c(local_48,&local_40);
  FUN_140208bae(&local_40,local_48,local_44,L"Voxel Offset");
  (**(code **)(*param_1 + 0x370))(param_1,&local_40);
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_40 = L"OnStartTool";
  local_38 = 0xb;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"UVoxelMorphologyMeshesTool";
  local_38 = 0x1a;
  FUN_1446e940c(local_48,&local_40);
  FUN_140208bae(&local_40,local_48,local_44,
                L"Apply Offset (aka Morphology) operations to the input meshes to create a new Mesh, using voxelization techniques. UVs, sharp edges, and small/thin features will be lost. Increase Voxel Count to enhance accuracy."
               );
  (**(code **)(*plVar1 + 0x340))(plVar1,&local_40,2);
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d96af FUN_1496d96af body=148 status=ok
// SIG undefined FUN_1496d96af(void)

undefined8 FUN_1496d96af(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459fd18a();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d9744 FUN_1496d9744 body=118 status=ok
// SIG undefined FUN_1496d9744(void)

void FUN_1496d9744(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1484c9f32();
  plVar1 = *(longlong **)(param_1 + 0x120);
  FUN_140056680(local_30,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d97bc FUN_1496d97bc body=253 status=ok
// SIG undefined FUN_1496d97bc(void)

void FUN_1496d97bc(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1484ca076();
  if (*(char *)(param_1[0x24] + 0xb8) == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x410))(param_1);
    if (cVar1 != '\0') {
      plVar2 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      local_38 = L"WarnOpenEdges";
      local_30 = 0xd;
      FUN_1446e940c(local_3c,&local_38);
      local_38 = L"UVoxelMorphologyMeshesTool";
      local_30 = 0x1a;
      FUN_1446e940c(local_40,&local_38);
      FUN_140208bae(&local_38,local_40,local_3c,
                    L"Open edges found: Consider using the \'Vox Wrap Preprocess\' settings to avoid artifacts."
                   );
      (**(code **)(*plVar2 + 0x340))(plVar2,&local_38,3);
      if (local_38 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_38 + 0x10))();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d98ba FUN_1496d98ba body=738 status=ok
// SIG undefined FUN_1496d98ba(void)

void FUN_1496d98ba(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  double dVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *_Dst;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = param_2;
  _Dst = (undefined8 *)FUN_14001cc68(0xf0);
  memset(_Dst,0,0xf0);
  FUN_14845abbc(_Dst);
  _Dst[0x11] = 0;
  _Dst[0x12] = 0;
  *(undefined1 *)(_Dst + 0x13) = 1;
  _Dst[0x14] = 0x3ff0000000000000;
  _Dst[0x15] = 0x40000000400;
  *(undefined1 *)(_Dst + 0x16) = 0;
  *_Dst = &PTR_FUN_14bdd8910;
  plVar2 = _Dst + 0x17;
  _Dst[0x17] = 0;
  _Dst[0x18] = 0;
  _Dst[0x19] = 0;
  _Dst[0x1a] = 0;
  _Dst[0x1b] = 0x3ff0000000000000;
  *(undefined2 *)((longlong)_Dst + 0xe1) = 0;
  _Dst[0x1d] = 0;
  local_b8 = _Dst;
  FUN_148f51788(_Dst + 0x19,*(undefined4 *)(param_1 + -0x10),1);
  FUN_148f517fe(plVar2,*(undefined4 *)(param_1 + -0x10),1);
  if (0 < *(int *)(param_1 + -0x10)) {
    lVar12 = 1;
    lVar13 = 0;
    lVar11 = 0;
    do {
      uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + -8 + lVar12 * 8);
      plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x58) + lVar12 * 8);
      if (plVar9 == (longlong *)0x0) {
        lVar10 = *plVar2;
        *(undefined8 *)(lVar10 + -8 + lVar12 * 8) = uVar8;
        plVar14 = *(longlong **)(lVar10 + lVar12 * 8);
        if (plVar14 != (longlong *)0x0) {
          *(undefined8 *)(lVar10 + lVar12 * 8) = 0;
LAB_1496d9a0c:
          LOCK();
          plVar9 = plVar14 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar5 = *piVar1;
            UNLOCK();
joined_r0x0001496d9a3b:
            if (iVar5 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        lVar10 = *plVar2;
        *(undefined8 *)(lVar10 + -8 + lVar12 * 8) = uVar8;
        plVar14 = *(longlong **)(lVar10 + lVar12 * 8);
        if (plVar9 == plVar14) {
          LOCK();
          plVar14 = plVar9 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar5 = *piVar1;
            UNLOCK();
            plVar14 = plVar9;
            goto joined_r0x0001496d9a3b;
          }
        }
        else {
          *(longlong **)(lVar10 + lVar12 * 8) = plVar9;
          if (plVar14 != (longlong *)0x0) goto LAB_1496d9a0c;
        }
      }
      plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x30) + lVar11 * 8);
      (**(code **)(*plVar9 + 0x2b0))(plVar9,&local_a8);
      lVar10 = _Dst[0x19];
      puVar3 = (undefined4 *)(lVar10 + lVar13);
      *puVar3 = local_a8;
      puVar3[1] = uStack_a4;
      puVar3[2] = uStack_a0;
      puVar3[3] = uStack_9c;
      puVar4 = (undefined8 *)(lVar10 + 0x10 + lVar13);
      *puVar4 = local_98;
      puVar4[1] = uStack_90;
      puVar4 = (undefined8 *)(lVar10 + 0x20 + lVar13);
      *puVar4 = local_88;
      puVar4[1] = uStack_80;
      *(undefined8 *)(lVar10 + 0x30 + lVar13) = local_78;
      puVar4 = (undefined8 *)(lVar10 + 0x38 + lVar13);
      *puVar4 = local_68;
      puVar4[1] = uStack_60;
      *(undefined8 *)(lVar10 + 0x48 + lVar13) = local_58;
      lVar11 = lVar11 + 1;
      lVar13 = lVar13 + 0x50;
      lVar12 = lVar12 + 2;
    } while (lVar11 < *(int *)(param_1 + -0x10));
  }
  lVar11 = *(longlong *)(param_1 + 0x50);
  uVar7 = *(undefined4 *)(lVar11 + 0xa8);
  *(undefined4 *)((longlong)local_b8 + 0xac) = uVar7;
  *(undefined4 *)(local_b8 + 0x15) = uVar7;
  *(undefined1 *)(local_b8 + 0x13) = *(undefined1 *)(lVar11 + 0xac);
  *(undefined1 *)(local_b8 + 0x16) = *(undefined1 *)(lVar11 + 0xad);
  local_b8[0x14] = *(undefined8 *)(lVar11 + 0xb0);
  dVar6 = *(double *)(lVar11 + 0xb8);
  local_b8[0x11] = dVar6 * dVar6 * dVar6;
  lVar11 = *(longlong *)(param_1 + 0x68);
  *(undefined1 *)((longlong)local_b8 + 0xe1) = *(undefined1 *)(lVar11 + 0xb8);
  local_b8[0x1d] = *(undefined8 *)(lVar11 + 0xc0);
  *(undefined1 *)((longlong)local_b8 + 0xe2) = *(undefined1 *)(lVar11 + 0xb9);
  local_b8[0x1b] = *(undefined8 *)(lVar11 + 0xb0);
  *(undefined1 *)(local_b8 + 0x1c) = *(undefined1 *)(lVar11 + 0xa8);
  *local_b0 = local_b8;
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d9b9e FUN_1496d9b9e body=32 status=ok
// SIG undefined FUN_1496d9b9e(void)

undefined8 FUN_1496d9b9e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Offset");
  return param_2;
}



// FUNCTION 1496d9bbe FUN_1496d9bbe body=152 status=ok
// SIG undefined FUN_1496d9bbe(void)

undefined8 FUN_1496d9bbe(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"VoxelMorphologyMeshes";
  local_28 = 0x15;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"UVoxelMorphologyMeshesTool";
  local_28 = 0x1a;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Voxel Offset");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d9c74 FUN_1496d9c74 body=448 status=ok
// SIG undefined FUN_1496d9c74(void)

void FUN_1496d9c74(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1484c9df8();
  plVar1 = (longlong *)FUN_1496d9e35(param_1);
  if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar1);
  }
  param_1[0x24] = (longlong)plVar1;
  FUN_140056680(&local_40,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1,&local_40);
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x24]);
  local_40 = L"VoxelSolidifyMeshesToolName";
  local_38 = 0x1b;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"UVoxelSolidifyMeshesTool";
  local_38 = 0x18;
  FUN_1446e940c(local_48,&local_40);
  FUN_140208bae(&local_40,local_48,local_44,L"Voxel Wrap");
  (**(code **)(*param_1 + 0x370))(param_1,&local_40);
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_40 = L"VoxelSolidifyMeshesToolDescription";
  local_38 = 0x22;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"UVoxelSolidifyMeshesTool";
  local_38 = 0x18;
  FUN_1446e940c(local_48,&local_40);
  FUN_140208bae(&local_40,local_48,local_44,
                L"Create a new closed/solid shell mesh that wraps the input meshes. Holes will automatically be filled, controlled by the Winding Threshold. UVs, sharp edges, and small/thin features will be lost. Increase Voxel Count to enhance accuracy."
               );
  (**(code **)(*plVar1 + 0x340))(plVar1,&local_40,2);
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d9e35 FUN_1496d9e35 body=148 status=ok
// SIG undefined FUN_1496d9e35(void)

undefined8 FUN_1496d9e35(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459fd276();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d9eca FUN_1496d9eca body=118 status=ok
// SIG undefined FUN_1496d9eca(void)

void FUN_1496d9eca(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1484c9f32();
  plVar1 = *(longlong **)(param_1 + 0x120);
  FUN_140056680(local_30,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496d9f42 FUN_1496d9f42 body=795 status=ok
// SIG undefined FUN_1496d9f42(void)

void FUN_1496d9f42(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  double dVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *_Dst;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = param_2;
  _Dst = (undefined8 *)FUN_14001cc68(0x100);
  memset(_Dst,0,0x100);
  FUN_14845abbc(_Dst);
  _Dst[0x11] = 0;
  _Dst[0x12] = 0;
  *(undefined1 *)(_Dst + 0x13) = 1;
  _Dst[0x14] = 0x3ff0000000000000;
  _Dst[0x15] = 0x40000000400;
  *(undefined1 *)(_Dst + 0x16) = 0;
  *_Dst = &PTR_FUN_14bdd8940;
  plVar2 = _Dst + 0x17;
  local_b0 = _Dst + 0x19;
  _Dst[0x17] = 0;
  _Dst[0x18] = 0;
  _Dst[0x19] = 0;
  _Dst[0x1a] = 0;
  _Dst[0x1b] = 0x3fe0000000000000;
  _Dst[0x1c] = 0x3ff0000000000000;
  *(undefined1 *)(_Dst + 0x1d) = 1;
  *(undefined4 *)((longlong)_Dst + 0xec) = 3;
  *(undefined1 *)(_Dst + 0x1e) = 0;
  _Dst[0x1f] = 0x4014000000000000;
  FUN_148f51788(local_b0,*(undefined4 *)(param_1 + -0x10),0x3ff0000000000001);
  FUN_148f517fe(plVar2,*(undefined4 *)(param_1 + -0x10),1);
  if (0 < *(int *)(param_1 + -0x10)) {
    lVar11 = 1;
    lVar12 = 0;
    lVar14 = 0;
    do {
      uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + -8 + lVar11 * 8);
      plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x58) + lVar11 * 8);
      if (plVar9 == (longlong *)0x0) {
        lVar10 = *plVar2;
        *(undefined8 *)(lVar10 + -8 + lVar11 * 8) = uVar8;
        plVar13 = *(longlong **)(lVar10 + lVar11 * 8);
        if (plVar13 != (longlong *)0x0) {
          *(undefined8 *)(lVar10 + lVar11 * 8) = 0;
LAB_1496da0bd:
          LOCK();
          plVar9 = plVar13 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar5 = *piVar1;
            UNLOCK();
joined_r0x0001496da0ec:
            if (iVar5 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        lVar10 = *plVar2;
        *(undefined8 *)(lVar10 + -8 + lVar11 * 8) = uVar8;
        plVar13 = *(longlong **)(lVar10 + lVar11 * 8);
        if (plVar9 == plVar13) {
          LOCK();
          plVar13 = plVar9 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar5 = *piVar1;
            UNLOCK();
            plVar13 = plVar9;
            goto joined_r0x0001496da0ec;
          }
        }
        else {
          *(longlong **)(lVar10 + lVar11 * 8) = plVar9;
          if (plVar13 != (longlong *)0x0) goto LAB_1496da0bd;
        }
      }
      plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x30) + lVar14 * 8);
      (**(code **)(*plVar9 + 0x2b0))(plVar9,&local_a8);
      lVar10 = *local_b0;
      puVar3 = (undefined4 *)(lVar10 + lVar12);
      *puVar3 = local_a8;
      puVar3[1] = uStack_a4;
      puVar3[2] = uStack_a0;
      puVar3[3] = uStack_9c;
      puVar4 = (undefined8 *)(lVar10 + 0x10 + lVar12);
      *puVar4 = local_98;
      puVar4[1] = uStack_90;
      puVar4 = (undefined8 *)(lVar10 + 0x20 + lVar12);
      *puVar4 = local_88;
      puVar4[1] = uStack_80;
      *(undefined8 *)(lVar10 + 0x30 + lVar12) = local_78;
      puVar4 = (undefined8 *)(lVar10 + 0x38 + lVar12);
      *puVar4 = local_68;
      puVar4[1] = uStack_60;
      *(undefined8 *)(lVar10 + 0x48 + lVar12) = local_58;
      lVar14 = lVar14 + 1;
      lVar12 = lVar12 + 0x50;
      lVar11 = lVar11 + 2;
    } while (lVar14 < *(int *)(param_1 + -0x10));
  }
  lVar11 = *(longlong *)(param_1 + 0x68);
  *(undefined1 *)(_Dst + 0x1d) = *(undefined1 *)(lVar11 + 0xbc);
  _Dst[0x1b] = *(undefined8 *)(lVar11 + 0xa8);
  *(undefined1 *)(_Dst + 0x1e) = *(undefined1 *)(lVar11 + 0xbd);
  _Dst[0x1f] = *(undefined8 *)(lVar11 + 0xc0);
  *(undefined4 *)((longlong)_Dst + 0xec) = *(undefined4 *)(lVar11 + 0xb8);
  _Dst[0x1c] = *(undefined8 *)(lVar11 + 0xb0);
  lVar11 = *(longlong *)(param_1 + 0x50);
  uVar7 = *(undefined4 *)(lVar11 + 0xa8);
  *(undefined4 *)((longlong)_Dst + 0xac) = uVar7;
  *(undefined4 *)(_Dst + 0x15) = uVar7;
  *(undefined1 *)(_Dst + 0x13) = *(undefined1 *)(lVar11 + 0xac);
  *(undefined1 *)(_Dst + 0x16) = *(undefined1 *)(lVar11 + 0xad);
  _Dst[0x14] = *(undefined8 *)(lVar11 + 0xb0);
  dVar6 = *(double *)(lVar11 + 0xb8);
  _Dst[0x11] = dVar6 * dVar6 * dVar6;
  *local_b8 = _Dst;
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496da25e FUN_1496da25e body=32 status=ok
// SIG undefined FUN_1496da25e(void)

undefined8 FUN_1496da25e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Solid");
  return param_2;
}



// FUNCTION 1496da27e FUN_1496da27e body=152 status=ok
// SIG undefined FUN_1496da27e(void)

undefined8 FUN_1496da27e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"VoxelSolidifyMeshes";
  local_28 = 0x13;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"UVoxelSolidifyMeshesTool";
  local_28 = 0x18;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Voxel Shell");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496da349 FUN_1496da349 body=148 status=ok
// SIG undefined FUN_1496da349(void)

undefined8 FUN_1496da349(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459fd44e();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496da3de FUN_1496da3de body=150 status=ok
// SIG undefined FUN_1496da3de(void)

undefined8 * FUN_1496da3de(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x110,0x10);
  FUN_14845abbc(puVar1);
  *puVar1 = &PTR_FUN_14bdd8970;
  puVar1[0x17] = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0xcc) = 0;
  puVar1[0x1b] = 0;
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  puVar1[0x21] = 0;
  FUN_1496da474(*(undefined8 *)(param_1 + 8),puVar1);
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 1496da474 FUN_1496da474 body=446 status=ok
// SIG undefined FUN_1496da474(void)

void FUN_1496da474(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 uVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined1 *)(param_2 + 0xf0) = *(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0xac);
  *(undefined1 *)(param_2 + 0xf1) = *(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0xad);
  *(undefined1 *)(param_2 + 0x104) = *(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0xae);
  *(double *)(param_2 + 0xe8) = (double)*(float *)(*(longlong *)(param_1 + 0x120) + 0xa8);
  cVar3 = *(char *)(*(longlong *)(param_1 + 0x120) + 0xb8);
  uVar7 = 2;
  if (cVar3 != '\x02') {
    uVar7 = cVar3 == '\x01';
  }
  *(undefined1 *)(param_2 + 0xf2) = uVar7;
  *(undefined4 *)(param_2 + 0xfc) = *(undefined4 *)(*(longlong *)(param_1 + 0x120) + 0xc4);
  *(undefined4 *)(param_2 + 0x100) = *(undefined4 *)(*(longlong *)(param_1 + 0x120) + 200);
  *(undefined4 *)(param_2 + 0xf4) = *(undefined4 *)(*(longlong *)(param_1 + 0x120) + 0xbc);
  *(undefined4 *)(param_2 + 0xf8) = *(undefined4 *)(*(longlong *)(param_1 + 0x120) + 0xc0);
  uVar4 = *(undefined8 *)(param_1 + 0x140);
  lVar5 = *(longlong *)(param_1 + 0x148);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(param_2 + 0x90);
  *(undefined8 *)(param_2 + 0x88) = uVar4;
  *(longlong *)(param_2 + 0x90) = lVar5;
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
  FUN_145c3f772(param_2 + 0x98,param_1 + 0x150);
  FUN_1485063a5(&local_88,*(undefined8 *)(param_1 + 0xa0));
  *(undefined4 *)(param_2 + 0x10) = local_88;
  *(undefined4 *)(param_2 + 0x14) = uStack_84;
  *(undefined4 *)(param_2 + 0x18) = uStack_80;
  *(undefined4 *)(param_2 + 0x1c) = uStack_7c;
  *(undefined4 *)(param_2 + 0x20) = local_78;
  *(undefined4 *)(param_2 + 0x24) = uStack_74;
  *(undefined4 *)(param_2 + 0x28) = uStack_70;
  *(undefined4 *)(param_2 + 0x2c) = uStack_6c;
  *(undefined4 *)(param_2 + 0x30) = local_68;
  *(undefined4 *)(param_2 + 0x34) = uStack_64;
  *(undefined4 *)(param_2 + 0x38) = uStack_60;
  *(undefined4 *)(param_2 + 0x3c) = uStack_5c;
  *(undefined8 *)(param_2 + 0x40) = local_58;
  *(undefined8 *)(param_2 + 0x48) = local_48;
  *(undefined8 *)(param_2 + 0x50) = uStack_40;
  *(undefined8 *)(param_2 + 0x58) = local_38;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496da634 FUN_1496da634 body=2407 status=ok
// SIG undefined FUN_1496da634(void)

void FUN_1496da634(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  void *_Src;
  code *pcVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined ***pppuVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_568 [36];
  undefined1 local_544 [4];
  undefined1 local_540 [8];
  void *local_538;
  int local_530;
  undefined4 local_52c;
  void *local_528;
  int local_520;
  code *local_518;
  longlong **local_510;
  code *local_508;
  undefined4 local_500;
  undefined ***local_4f8;
  undefined **local_4e8;
  longlong *local_4e0;
  undefined1 *local_4a8;
  undefined8 local_498;
  undefined **local_488;
  longlong *local_480;
  undefined1 *local_468;
  undefined8 local_458;
  undefined **local_448;
  longlong *local_440;
  undefined1 *local_428;
  undefined8 local_418;
  undefined **local_408;
  longlong *local_400;
  undefined1 *local_3e8;
  undefined8 local_3d8;
  undefined **local_3c8;
  longlong *local_3c0;
  undefined1 *local_3a8;
  undefined8 local_398;
  undefined **local_388;
  longlong *local_380;
  undefined1 *local_368;
  undefined8 local_358;
  undefined **local_348;
  longlong *local_340;
  undefined1 *local_328;
  undefined8 local_318;
  undefined **local_308;
  longlong *local_300;
  undefined1 *local_2e8;
  undefined8 local_2d8;
  undefined **local_2c8;
  longlong *local_2c0;
  undefined1 *local_2a8;
  undefined8 local_298;
  undefined **local_288;
  longlong *local_280;
  longlong *local_268 [69];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_568;
  FUN_1484416be();
  DAT_14c7677e4 = 1;
  FUN_148506727(local_268,param_1[0x14],&DAT_14c7677dc);
  plVar6 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149fab260;
  FUN_146bffece(plVar6 + 2,local_268);
  if (plVar6 == (longlong *)0x0) {
    param_1[0x28] = 0x10;
    plVar10 = (longlong *)param_1[0x29];
    if (plVar10 == (longlong *)0x0) goto LAB_1496da767;
    param_1[0x29] = 0;
LAB_1496da6e4:
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    if (plVar6 == (longlong *)0x0) goto LAB_1496da767;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    param_1[0x28] = (longlong)(plVar6 + 2);
    plVar10 = (longlong *)param_1[0x29];
    if (plVar6 == plVar10) {
      LOCK();
      plVar10 = plVar6 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    else {
      param_1[0x29] = (longlong)plVar6;
      if (plVar10 != (longlong *)0x0) goto LAB_1496da6e4;
    }
  }
  LOCK();
  plVar10 = plVar6 + 1;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)*plVar10 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
LAB_1496da767:
  FUN_141082778(local_268);
  cVar5 = (**(code **)(*param_1 + 0x3b8))(param_1);
  if (cVar5 != '\0') {
    uVar7 = (**(code **)(*param_1 + 0x3c0))(param_1);
    local_518 = FUN_144584978;
    local_510 = local_268;
    local_268[0] = param_1;
    FUN_14838690f(uVar7,param_1[0x28],&local_518,0);
  }
  FUN_1485063a5(local_268,param_1[0x14]);
  lVar8 = FUN_1496daf9c(param_1);
  if (lVar8 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar8);
  }
  bVar3 = DAT_14c950c29;
  param_1[0x27] = lVar8;
  if ((param_1 != (longlong *)0x0) && ((bVar3 & 1) != 0)) {
    FUN_14689c22e(param_1);
  }
  *(longlong **)(lVar8 + 0x30) = param_1;
  lVar8 = FUN_1484c5d32(param_1[0x27]);
  if ((lVar8 != 0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(lVar8);
  }
  param_1[0x25] = lVar8;
  lVar11 = param_1[0x27] + 0x28;
  if (param_1[0x27] == 0) {
    lVar11 = 0;
  }
  uVar7 = (**(code **)(*param_1 + 0x3a0))(param_1);
  FUN_148504f74(lVar8,uVar7,lVar11);
  FUN_148558526(*(undefined8 *)(param_1[0x25] + 0x58),param_1[0x14]);
  FUN_14851b91a(*(undefined8 *)(param_1[0x25] + 0x58),local_268);
  FUN_14851b65c(*(undefined8 *)(param_1[0x25] + 0x58),2);
  FUN_14851bbe8(*(undefined8 *)(param_1[0x25] + 0x58),param_1[0x28],1,0xf);
  FUN_148506417(&local_528,param_1[0x14],0);
  lVar8 = param_1[0x25];
  uVar7 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar7 = FUN_1485578f6(uVar7);
  _Src = local_528;
  local_538 = (void *)0x0;
  local_530 = local_520;
  if ((longlong)local_520 == 0) {
    local_52c = 0;
  }
  else {
    FUN_1411312f2(&local_538,local_520,0);
    memcpy(local_538,_Src,(longlong)local_520 << 3);
  }
  FUN_1485053d2(lVar8,&local_538,uVar7,0);
  FUN_1485054ca(param_1[0x25],1);
  FUN_148506321(param_1[0x14]);
  plVar6 = (longlong *)FUN_1496db031(param_1);
  if ((plVar6 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(plVar6);
  }
  param_1[0x24] = (longlong)plVar6;
  FUN_140056680(&local_508,&DAT_149dfb77a);
  (**(code **)(*plVar6 + 0x2a8))(plVar6,param_1,&local_508);
  if (local_508 != (code *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x24]);
  local_298 = 0;
  local_288 = &PTR_LAB_14bdd8990;
  local_2a8 = &LAB_1445849ca;
  local_280 = param_1;
  FUN_1484de26e(param_1[0x24] + 0x28,param_1[0x24] + 0xa8);
  local_2d8 = 0;
  local_2c8 = &PTR_LAB_14bdd89b0;
  local_2e8 = &LAB_144584a22;
  local_2c0 = param_1;
  FUN_1484c9b00(param_1[0x24] + 0x28,param_1[0x24] + 0xac);
  local_318 = 0;
  local_308 = &PTR_LAB_14bdd89d0;
  local_328 = &LAB_144584a7a;
  local_300 = param_1;
  FUN_1484c9b00(param_1[0x24] + 0x28,param_1[0x24] + 0xad);
  local_358 = 0;
  local_348 = &PTR_LAB_14bdd89f0;
  local_368 = &LAB_144584ad2;
  local_340 = param_1;
  FUN_1484c9b00(param_1[0x24] + 0x28,param_1[0x24] + 0xae);
  local_398 = 0;
  local_388 = &PTR_LAB_14bdd8a70;
  local_3a8 = &LAB_144584b2a;
  local_380 = param_1;
  FUN_1496db0c6(param_1[0x24] + 0x28,param_1[0x24] + 0xb8);
  local_3d8 = 0;
  local_3c8 = &PTR_LAB_14bdd8a90;
  local_3e8 = &LAB_144584b82;
  local_3c0 = param_1;
  FUN_1484de26e(param_1[0x24] + 0x28,param_1[0x24] + 0xc4);
  local_418 = 0;
  local_408 = &PTR_LAB_14bdd8ab0;
  local_428 = &LAB_144584bda;
  local_400 = param_1;
  FUN_1484de26e(param_1[0x24] + 0x28,param_1[0x24] + 200);
  local_458 = 0;
  local_448 = &PTR_LAB_14bdd8ad0;
  local_468 = &LAB_144584c32;
  local_440 = param_1;
  FUN_1484de26e(param_1[0x24] + 0x28,param_1[0x24] + 0xbc);
  local_498 = 0;
  local_488 = &PTR_LAB_14bdd8af0;
  local_4a8 = &LAB_144584c8a;
  local_480 = param_1;
  FUN_1484de26e(param_1[0x24] + 0x28,param_1[0x24] + 0xc0);
  lVar8 = FUN_1484e487a(param_1);
  if ((lVar8 != 0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(lVar8);
  }
  param_1[0x26] = lVar8;
  FUN_14851b8ac(*(undefined8 *)(param_1[0x25] + 0x58),&local_508);
  uVar7 = (**(code **)(**(longlong **)(param_1[0x25] + 0x58) + 0x180))();
  FUN_1484e0ce2(lVar8,uVar7,&local_508);
  lVar8 = param_1[0x26];
  if (*(longlong *)(lVar8 + 0x120) != 0) {
    *(undefined1 *)(*(longlong *)(lVar8 + 0x120) + 0xab) = 0;
    *(undefined1 *)(*(longlong *)(param_1[0x26] + 0x120) + 0xac) = 0;
    *(undefined1 *)(*(longlong *)(param_1[0x26] + 0x120) + 0xae) = 0;
    plVar6 = *(longlong **)(param_1[0x26] + 0x120);
    FUN_140056680(&local_508,L"WeldEdges");
    (**(code **)(*plVar6 + 0x2a8))(plVar6,param_1,&local_508);
    if (local_508 != (code *)0x0) {
      FUN_1400020a8();
    }
    (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(param_1[0x26] + 0x120));
    lVar8 = param_1[0x26];
  }
  local_4f8 = (undefined ***)0x0;
  local_4e8 = &PTR_LAB_14bdd8b10;
  local_508 = FUN_144584ce2;
  local_4e0 = param_1;
  FUN_1484de4b4(lVar8,&local_508);
  if (local_508 != (code *)0x0) {
    pppuVar9 = local_4f8;
    if (local_4f8 == (undefined ***)0x0) {
      pppuVar9 = &local_4e8;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  lVar8 = param_1[0x25];
  local_508 = (code *)0x0;
  local_500 = 0;
  FUN_1446efa72(&local_508,0,2,0x10);
  pcVar4 = local_508;
  local_500 = 2;
  *(undefined ***)local_508 = &PTR_LAB_14aefe820;
  uVar7 = FUN_144a3f946();
  *(undefined8 *)(pcVar4 + 0x10) = uVar7;
  *(undefined ***)pcVar4 = &PTR_FUN_14bdd8b30;
  *(longlong **)(pcVar4 + 0x18) = param_1;
  FUN_1484d607c(lVar8 + 0x28,local_540,&local_508);
  FUN_1449db362(&local_508);
  lVar8 = param_1[0x25];
  local_508 = (code *)0x0;
  local_500 = 0;
  FUN_1446efa72(&local_508,0,2,0x10);
  pcVar4 = local_508;
  local_500 = 2;
  *(undefined ***)local_508 = &PTR_LAB_14ba263d0;
  uVar7 = FUN_144a3f946();
  *(undefined8 *)(pcVar4 + 0x10) = uVar7;
  *(undefined ***)pcVar4 = &PTR_FUN_14bdd8ba0;
  *(longlong **)(pcVar4 + 0x18) = param_1;
  FUN_148f76e8e(lVar8 + 0x40,local_540,&local_508);
  FUN_1449db362(&local_508);
  FUN_1485051e4(param_1[0x25]);
  local_508 = (code *)0x14ba1690c;
  local_500 = 8;
  FUN_1446e940c(local_540,&local_508);
  local_508 = (code *)0x14bdd73e0;
  local_500 = 0x12;
  FUN_1446e940c(local_544,&local_508);
  FUN_140208bae(&local_508,local_544,local_540,L"Weld Edges");
  (**(code **)(*param_1 + 0x370))(param_1,&local_508);
  if (local_508 != (code *)0x0) {
    (**(code **)(*(longlong *)local_508 + 0x10))();
  }
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_508 = (code *)0x14bdd7b5e;
  local_500 = 0x1c;
  FUN_1446e940c(local_540,&local_508);
  local_508 = (code *)0x14bdd73e0;
  local_500 = 0x12;
  FUN_1446e940c(local_544,&local_508);
  FUN_140208bae(&local_508,local_544,local_540,
                L"Weld overlapping/identical border edges of the selected Mesh, by merging the vertices."
               );
  (**(code **)(*plVar6 + 0x340))(plVar6,&local_508,2);
  if (local_508 != (code *)0x0) {
    (**(code **)(*(longlong *)local_508 + 0x10))();
  }
  if (local_528 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_568) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496daf9c FUN_1496daf9c body=148 status=ok
// SIG undefined FUN_1496daf9c(void)

undefined8 FUN_1496daf9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459d98ca();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496db031 FUN_1496db031 body=148 status=ok
// SIG undefined FUN_1496db031(void)

undefined8 FUN_1496db031(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459fd362();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496db0c6 FUN_1496db0c6 body=212 status=ok
// SIG undefined FUN_1496db0c6(void)

void FUN_1496db0c6(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_1496dcf34(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496db19c FUN_1496db19c body=523 status=ok
// SIG undefined FUN_1496db19c(void)

void FUN_1496db19c(longlong *param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  undefined8 *local_a0 [11];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)param_1[0x24];
  FUN_140056680(local_a0,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_a0);
  if (local_a0[0] != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14850635b(param_1[0x14]);
  lVar2 = param_1[0x26];
  plVar1 = *(longlong **)(lVar2 + 0x120);
  if (plVar1 != (longlong *)0x0) {
    FUN_140056680(local_a0,L"WeldEdges");
    (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_a0);
    if (local_a0[0] != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    lVar2 = param_1[0x26];
  }
  FUN_1484e0e5e(lVar2);
  if (param_1[0x25] != 0) {
    FUN_143b84538(param_1[0x25],local_a0);
    if (param_2 == '\x01') {
      lVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
      local_48 = L"WeldMeshEdgesToolTransactionName";
      local_40 = 0x20;
      FUN_1446e940c(local_a4,&local_48);
      local_48 = L"UWeldMeshEdgesTool";
      local_40 = 0x12;
      FUN_1446e940c(local_a8,&local_48);
      FUN_140208bae(&local_48,local_a8,local_a4,L"Weld Edges");
      (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x10))(lVar2 + 0x28,&local_48);
      if (local_48 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_48 + 0x10))();
      }
      if (local_a0[0] != (undefined8 *)0x0) {
        local_48 = (wchar_t *)0x1000000010101;
        local_b8 = 0;
        FUN_148506f34(param_1[0x14],local_a0[0],1);
      }
      lVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
      (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x18))(lVar2 + 0x28);
    }
    if (local_a0[0] != (undefined8 *)0x0) {
      (**(code **)*local_a0[0])(local_a0[0],1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496db3a8 FUN_1496db3a8 body=53 status=ok
// SIG undefined FUN_1496db3a8(void)

undefined8 FUN_1496db3a8(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = (**(code **)(*param_1 + 0x388))();
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    lVar1 = param_1[0x25];
    if (lVar1 == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x91));
    }
  }
  return uVar3;
}



// FUNCTION 1496db3de FUN_1496db3de body=53 status=ok
// SIG undefined FUN_1496db3de(void)

void FUN_1496db3de(longlong param_1,undefined4 param_2)

{
  FUN_148505016(*(undefined8 *)(param_1 + 0x128));
  FUN_1484de7e0(*(undefined8 *)(param_1 + 0x130),param_2);
  return;
}



// FUNCTION 1496db41c FUN_1496db41c body=45 status=ok
// SIG undefined FUN_1496db41c(void)

longlong FUN_1496db41c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_1411412a8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496db450 FUN_1496db450 body=48 status=ok
// SIG undefined FUN_1496db450(void)

longlong FUN_1496db450(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  thunk_FUN_1411412a8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496db488 FUN_1496db488 body=48 status=ok
// SIG undefined FUN_1496db488(void)

longlong FUN_1496db488(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb8;
  thunk_FUN_1411412a8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496db4cc FUN_1496db4cc body=45 status=ok
// SIG undefined FUN_1496db4cc(void)

longlong FUN_1496db4cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d15fbe(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496db500 FUN_1496db500 body=48 status=ok
// SIG undefined FUN_1496db500(void)

longlong FUN_1496db500(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145d15fbe(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496db538 FUN_1496db538 body=48 status=ok
// SIG undefined FUN_1496db538(void)

longlong FUN_1496db538(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb8;
  FUN_145d15fbe(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496db568 FUN_1496db568 body=48 status=ok
// SIG undefined FUN_1496db568(void)

longlong FUN_1496db568(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xc0;
  FUN_145d15fbe(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496db5a4 FUN_1496db5a4 body=45 status=ok
// SIG undefined FUN_1496db5a4(void)

longlong FUN_1496db5a4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c2fd92(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496db5d2 FUN_1496db5d2 body=48 status=ok
// SIG undefined FUN_1496db5d2(void)

longlong FUN_1496db5d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145c2fd92(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496db602 FUN_1496db602 body=48 status=ok
// SIG undefined FUN_1496db602(void)

longlong FUN_1496db602(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa0;
  FUN_145c2fd92(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496db666 FUN_1496db666 body=45 status=ok
// SIG undefined FUN_1496db666(void)

longlong FUN_1496db666(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145850608(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496db694 FUN_1496db694 body=48 status=ok
// SIG undefined FUN_1496db694(void)

longlong FUN_1496db694(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145850608(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496db6c4 FUN_1496db6c4 body=48 status=ok
// SIG undefined FUN_1496db6c4(void)

longlong FUN_1496db6c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb8;
  FUN_145850608(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496db704 FUN_1496db704 body=45 status=ok
// SIG undefined FUN_1496db704(void)

longlong FUN_1496db704(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145850608(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496db732 FUN_1496db732 body=48 status=ok
// SIG undefined FUN_1496db732(void)

longlong FUN_1496db732(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145850608(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496db762 FUN_1496db762 body=48 status=ok
// SIG undefined FUN_1496db762(void)

longlong FUN_1496db762(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb8;
  FUN_145850608(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496db79c FUN_1496db79c body=45 status=ok
// SIG undefined FUN_1496db79c(void)

longlong FUN_1496db79c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145850608(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496db7ca FUN_1496db7ca body=48 status=ok
// SIG undefined FUN_1496db7ca(void)

longlong FUN_1496db7ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145850608(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496db7fa FUN_1496db7fa body=48 status=ok
// SIG undefined FUN_1496db7fa(void)

longlong FUN_1496db7fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb8;
  FUN_145850608(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496db838 FUN_1496db838 body=45 status=ok
// SIG undefined FUN_1496db838(void)

longlong FUN_1496db838(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496db86e FUN_1496db86e body=45 status=ok
// SIG undefined FUN_1496db86e(void)

longlong FUN_1496db86e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145e0a05e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496db89c FUN_1496db89c body=48 status=ok
// SIG undefined FUN_1496db89c(void)

longlong FUN_1496db89c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x98;
  FUN_145e0a05e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496db8f4 FUN_1496db8f4 body=54 status=ok
// SIG undefined FUN_1496db8f4(void)

undefined1 FUN_1496db8f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1496db9f2(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1496db952 FUN_1496db952 body=59 status=ok
// SIG undefined FUN_1496db952(void)

undefined8 FUN_1496db952(longlong *param_1)

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



// FUNCTION 1496db9f2 FUN_1496db9f2 body=91 status=ok
// SIG undefined FUN_1496db9f2(void)

longlong * FUN_1496db9f2(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 1496dba4e FUN_1496dba4e body=199 status=ok
// SIG undefined FUN_1496dba4e(void)

undefined8 * FUN_1496dba4e(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bdd8170;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bdd8190;
  param_1[7] = param_2;
  param_1[2] = &LAB_1496dbc42;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bdd81b0;
  param_1[0x17] = &LAB_1496dbc90;
  param_1[0x12] = &LAB_1496dbc98;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 1496dbb16 FUN_1496dbb16 body=38 status=ok
// SIG undefined FUN_1496dbb16(void)

undefined8 FUN_1496dbb16(undefined8 param_1,int param_2)

{
  FUN_1496dbcec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496dbb3c FUN_1496dbb3c body=207 status=ok
// SIG undefined FUN_1496dbb3c(void)

void FUN_1496dbb3c(longlong param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_21 = (*pcVar2)(uVar4);
  puVar1 = (undefined1 *)(param_1 + 8);
  if (*(char *)(param_1 + 9) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_21);
    if (cVar3 == '\0') goto LAB_1496dbbed;
  }
  if (&local_21 != puVar1) {
    *(undefined1 *)(param_1 + 8) = local_21;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_1496dbbed:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496dbc0c FUN_1496dbc0c body=53 status=ok
// SIG undefined FUN_1496dbc0c(void)

void FUN_1496dbc0c(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined1 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 1496dbc72 FUN_1496dbc72 body=29 status=ok
// SIG undefined FUN_1496dbc72(void)

undefined8 FUN_1496dbc72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496dbcce FUN_1496dbcce body=29 status=ok
// SIG undefined FUN_1496dbcce(void)

undefined8 FUN_1496dbcce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496dbcec FUN_1496dbcec body=127 status=ok
// SIG undefined FUN_1496dbcec(void)

void FUN_1496dbcec(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bdd8170;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 1496dbd6c FUN_1496dbd6c body=84 status=ok
// SIG undefined FUN_1496dbd6c(void)

longlong * FUN_1496dbd6c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_14689c22e();
  }
  return param_1;
}



// FUNCTION 1496dbdc0 FUN_1496dbdc0 body=132 status=ok
// SIG undefined FUN_1496dbdc0(void)

void FUN_1496dbdc0(longlong param_1,int param_2)

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



// FUNCTION 1496dbe46 FUN_1496dbe46 body=48 status=ok
// SIG undefined FUN_1496dbe46(void)

void FUN_1496dbe46(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1496dbe76 FUN_1496dbe76 body=38 status=ok
// SIG undefined FUN_1496dbe76(void)

undefined8 FUN_1496dbe76(undefined8 param_1,int param_2)

{
  FUN_1496dbe9c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496dbe9c FUN_1496dbe9c body=107 status=ok
// SIG undefined FUN_1496dbe9c(void)

void FUN_1496dbe9c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14bdd82f0;
  FUN_1496dbf07(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001496dbefd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1496dbf07 FUN_1496dbf07 body=47 status=ok
// SIG undefined FUN_1496dbf07(void)

void FUN_1496dbf07(longlong param_1,int param_2)

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



// FUNCTION 1496dbf36 FUN_1496dbf36 body=48 status=ok
// SIG undefined FUN_1496dbf36(void)

void FUN_1496dbf36(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x80,0x10);
  }
  return;
}



// FUNCTION 1496dbf66 FUN_1496dbf66 body=132 status=ok
// SIG undefined FUN_1496dbf66(void)

void FUN_1496dbf66(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 7,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1496dbfec FUN_1496dbfec body=226 status=ok
// SIG undefined FUN_1496dbfec(void)

undefined8 * FUN_1496dbfec(undefined8 *param_1)

{
  FUN_14845abbc();
  *param_1 = &PTR_FUN_14bdd87e0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0xffffffff;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x8000000000;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0xffffffff00000000;
  param_1[0x23] = 0;
  param_1[0x24] = 0x8000000000;
  param_1[0x25] = 0xffffffff;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14c) = 0x100;
  param_1[0x2a] = 0x3f1a36e2e0000000;
  param_1[0x2b] = 0x3f33a92a28000000;
  param_1[0x2c] = 0x4069000000000000;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  return param_1;
}



// FUNCTION 1496dc0ce FUN_1496dc0ce body=38 status=ok
// SIG undefined FUN_1496dc0ce(void)

undefined8 FUN_1496dc0ce(undefined8 param_1,int param_2)

{
  FUN_1496dc28c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496dc0f4 FUN_1496dc0f4 body=407 status=ok
// SIG undefined FUN_1496dc0f4(void)

void FUN_1496dc0f4(longlong param_1,char *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  undefined1 local_190;
  undefined1 local_180 [24];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_1496dc169;
    pcVar1 = *(code **)(param_2 + 0x70);
    plVar6 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar6 = *(longlong **)(param_2 + 0x80);
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    cVar2 = (*pcVar1)(uVar5);
    *param_2 = cVar2;
    if (cVar2 != '\0') goto LAB_1496dc169;
  }
  if ((((*(longlong *)(param_1 + 0x98) != 0) && (*(longlong *)(param_1 + 0x88) != 0)) &&
      (*(uint *)(param_1 + 0x148) < 8)) &&
     (plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 0x208), plVar6 != (longlong *)0x0)) {
    iVar4 = (**(code **)(*plVar6 + 0xa0))();
    if (*(int *)(param_1 + 0x148) < iVar4) {
      local_190 = 1;
      local_198 = 1;
      FUN_146c005f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x98),1,1);
      if (param_2 != (char *)0x0) {
        if (*param_2 != '\0') goto LAB_1496dc169;
        pcVar1 = *(code **)(param_2 + 0x70);
        plVar6 = (longlong *)(param_2 + 0x90);
        if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
          plVar6 = *(longlong **)(param_2 + 0x80);
        }
        uVar5 = (**(code **)(*plVar6 + 8))();
        cVar2 = (*pcVar1)(uVar5);
        *param_2 = cVar2;
        if (cVar2 != '\0') goto LAB_1496dc169;
      }
      FUN_148345f48(local_180,*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 8),
                    *(undefined4 *)(param_1 + 0x148));
      local_168 = *(undefined8 *)(param_1 + 0x150);
      local_160 = *(undefined8 *)(param_1 + 0x158);
      local_158 = *(undefined8 *)(param_1 + 0x160);
      local_150 = *(undefined1 *)(param_1 + 0x14d);
      if (*(char *)(param_1 + 0x14c) == '\x01') {
        uVar3 = FUN_148346064(local_180,param_2);
      }
      else {
        uVar3 = FUN_148346d50(local_180,param_2);
      }
      *(undefined1 *)(param_1 + 0x168) = uVar3;
      FUN_1496dc342(local_180);
    }
  }
LAB_1496dc169:
  if ((local_20 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496dc28c FUN_1496dc28c body=181 status=ok
// SIG undefined FUN_1496dc28c(void)

void FUN_1496dc28c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14bdd87e0;
  FUN_145a22d80(param_1 + 0x1f);
  FUN_145a22d80(param_1 + 0x15);
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
  plVar3 = (longlong *)param_1[0x12];
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
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001496dc336. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 1496dc342 FUN_1496dc342 body=170 status=ok
// SIG undefined FUN_1496dc342(void)

void FUN_1496dc342(longlong param_1)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  FUN_1496dc3ec(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 0x60);
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 == 0) {
    return;
  }
  FUN_146be6294(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 1496dc3ec FUN_1496dc3ec body=52 status=ok
// SIG undefined FUN_1496dc3ec(void)

void FUN_1496dc3ec(longlong *param_1)

{
  FUN_1496dc420();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1496dc420 FUN_1496dc420 body=89 status=ok
// SIG undefined FUN_1496dc420(void)

void FUN_1496dc420(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140411364(param_1,0);
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



// FUNCTION 1496dc47a FUN_1496dc47a body=57 status=ok
// SIG undefined FUN_1496dc47a(void)

undefined8 FUN_1496dc47a(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_140fe7df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 1496dc4dc FUN_1496dc4dc body=12 status=ok
// SIG undefined FUN_1496dc4dc(void)

void FUN_1496dc4dc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001496dc4e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1496dc4e8 FUN_1496dc4e8 body=29 status=ok
// SIG undefined FUN_1496dc4e8(void)

undefined8 FUN_1496dc4e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496dc506 FUN_1496dc506 body=57 status=ok
// SIG undefined FUN_1496dc506(void)

undefined8 FUN_1496dc506(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_140fe7df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 1496dc540 FUN_1496dc540 body=38 status=ok
// SIG undefined FUN_1496dc540(void)

undefined8 FUN_1496dc540(undefined8 param_1,int param_2)

{
  FUN_1496dc566();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496dc566 FUN_1496dc566 body=124 status=ok
// SIG undefined FUN_1496dc566(void)

void FUN_1496dc566(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14bdd88e0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_148f77037(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001496dc5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1496dc5e2 FUN_1496dc5e2 body=38 status=ok
// SIG undefined FUN_1496dc5e2(void)

undefined8 FUN_1496dc5e2(undefined8 param_1,int param_2)

{
  FUN_1496dc608();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496dc608 FUN_1496dc608 body=124 status=ok
// SIG undefined FUN_1496dc608(void)

void FUN_1496dc608(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14bdd8910;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_148f77037(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001496dc67a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1496dc684 FUN_1496dc684 body=38 status=ok
// SIG undefined FUN_1496dc684(void)

undefined8 FUN_1496dc684(undefined8 param_1,int param_2)

{
  FUN_1496dc6aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496dc6aa FUN_1496dc6aa body=124 status=ok
// SIG undefined FUN_1496dc6aa(void)

void FUN_1496dc6aa(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14bdd8940;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_148f77037(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001496dc71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1496dc726 FUN_1496dc726 body=38 status=ok
// SIG undefined FUN_1496dc726(void)

undefined8 FUN_1496dc726(undefined8 param_1,int param_2)

{
  FUN_1496dce96();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496dc74c FUN_1496dc74c body=1865 status=ok
// SIG undefined FUN_1496dc74c(void)

void FUN_1496dc74c(longlong param_1,char *param_2)

{
  undefined **ppuVar1;
  double dVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  undefined1 uVar7;
  byte bVar8;
  int iVar9;
  undefined8 uVar10;
  float *pfVar11;
  longlong *plVar12;
  double *pdVar13;
  int iVar14;
  float fVar15;
  undefined1 auStack_208 [32];
  undefined1 local_1e8;
  undefined1 local_1e0;
  undefined1 local_1d8 [8];
  int local_1d0;
  int local_1cc;
  undefined8 local_1c8;
  int local_1c0;
  int local_1bc;
  undefined **local_1b8;
  double local_1b0;
  double *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  double local_198;
  undefined8 local_190;
  undefined4 uStack_18c;
  undefined1 local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined **local_158;
  undefined8 local_150;
  double local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  float fStack_124;
  float local_120;
  float local_11c;
  float local_118 [2];
  longlong local_110;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined **local_d8;
  longlong lStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  longlong lStack_b0;
  ulonglong local_a8;
  double dStack_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_1496dc7df;
    pcVar3 = *(code **)(param_2 + 0x70);
    plVar12 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar12 = *(longlong **)(param_2 + 0x80);
    }
    uVar10 = (**(code **)(*plVar12 + 8))();
    cVar6 = (*pcVar3)(uVar10);
    *param_2 = cVar6;
    if (cVar6 != '\0') goto LAB_1496dc7df;
  }
  lVar4 = *(longlong *)(param_1 + 0x88);
  if (((lVar4 != 0) && (*(int *)(lVar4 + 0x170) != 0)) && (*(int *)(lVar4 + 0x50) != 0)) {
    local_1e0 = 1;
    local_1e8 = 1;
    FUN_146c005f0(*(undefined8 *)(param_1 + 8),lVar4,1,1);
    if (*(char *)(param_1 + 0x104) == '\x01') {
      local_1c8 = *(undefined8 *)(param_1 + 8);
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      dStack_a0 = 0.0;
      local_b8 = 0;
      lStack_b0 = 0;
      local_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      local_d8 = (undefined **)0x0;
      lStack_d0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = (undefined1 *)0x0;
      uStack_f0 = 0;
      if (*(int *)(param_1 + 0xa0) == *(int *)(param_1 + 0xcc)) {
        FUN_146bc8e62(&local_1c8,&local_f8);
      }
      else {
        ppuVar1 = (undefined **)(param_1 + 0x98);
        dVar2 = (double)(param_1 + 0xa8);
        local_1b8 = (undefined **)0x100000000;
        local_1a8 = (double *)&DAT_ffffffff;
        local_1a0 = 0;
        iVar14 = 0;
        local_1b0 = dVar2;
        if (*(int *)(param_1 + 0xc0) != 0) {
          FUN_1449c0562(&local_1b8);
          iVar14 = *(int *)(param_1 + 0xc0);
        }
        local_150 = local_1b8;
        local_148 = local_1b0;
        local_140 = local_1a8;
        pdVar13 = local_140;
        local_138 = (double)CONCAT44(local_19c,local_1a0);
        local_140._4_4_ = (int)((ulonglong)local_1a8 >> 0x20);
        iVar9 = local_140._4_4_;
        local_158 = ppuVar1;
        if ((local_140._4_4_ != iVar14) || (local_140 = local_1a8, local_1b0 != dVar2)) {
          do {
            local_140 = pdVar13;
            uVar5 = *(ulonglong *)
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) +
                       (ulonglong)(*(uint *)(*local_158 + (longlong)iVar9 * 0xc) >> 9) * 8) +
                     (ulonglong)((*(uint *)(*local_158 + (longlong)iVar9 * 0xc) & 0x1ff) << 4));
            FUN_146bc8d26(&local_1c8,uVar5,&local_f8);
            FUN_146bc8d26(&local_1c8,uVar5 >> 0x20,&local_f8);
            local_140 = (double *)CONCAT44(local_140._4_4_,(uint)local_140 & ~local_150._4_4_);
            FUN_1449c0562(&local_150);
            iVar9 = local_140._4_4_;
            pdVar13 = local_140;
          } while (local_158 != ppuVar1 || (local_148 != dVar2 || local_140._4_4_ != iVar14));
        }
      }
      FUN_146bc8622(&local_f8);
    }
    uVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0xd8))(*(longlong **)(param_1 + 8),0,0);
    *(undefined4 *)(param_1 + 0x108) = 0;
    lStack_d0 = *(longlong *)(param_1 + 0x88);
    local_e8 = 0;
    local_d8 = &PTR_LAB_149f36400;
    local_f8 = &LAB_146be5292;
    FUN_146be50a2(lStack_d0 + 0x1d0,&local_1b8);
    FUN_146be4fdc(&local_1b8,&local_f8);
    local_1d0 = *(int *)CONCAT44(uStack_174,local_178) * 0x200 +
                ((int *)CONCAT44(uStack_174,local_178))[1];
    local_1cc = local_1d0;
    local_1c0 = local_1d0;
    local_1bc = local_1d0;
    FUN_146be5300(&local_158,local_1d8,&local_1c8,&local_1b8);
    if ((int)uStack_f0 != (int)local_150) {
      do {
        *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
        FUN_146be53a8(&local_f8);
      } while ((int)uStack_f0 != (int)local_150);
    }
    if (local_138 != 0.0) {
      pfVar11 = (float *)CONCAT44(fStack_124,local_128);
      if ((float *)CONCAT44(fStack_124,local_128) == (float *)0x0) {
        pfVar11 = local_118;
      }
      (**(code **)(*(longlong *)pfVar11 + 0x10))();
    }
    if (local_d8 != (undefined **)0x0) {
      plVar12 = (longlong *)CONCAT44(uStack_c4,local_c8);
      if ((longlong *)CONCAT44(uStack_c4,local_c8) == (longlong *)0x0) {
        plVar12 = &local_b8;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if (local_1b8 != (undefined **)0x0) {
      pdVar13 = local_1a8;
      if (local_1a8 == (double *)0x0) {
        pdVar13 = &local_198;
      }
      (**(code **)((longlong)*pdVar13 + 0x10))();
    }
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x108);
    local_150 = *(undefined ***)(param_1 + 8);
    local_158 = &PTR_FUN_149f36300;
    local_130 = 0;
    local_110 = param_1 + 0x98;
    if (*(int *)(param_1 + 0xa0) == *(int *)(param_1 + 0xcc)) {
      local_110 = 0;
    }
    local_148 = *(double *)(param_1 + 0xe8);
    local_138 = local_148 + local_148;
    local_140 = (double *)CONCAT71(local_140._1_7_,*(undefined1 *)(param_1 + 0xf0));
    local_128 = CONCAT31(local_128._1_3_,*(char *)(param_1 + 0xf2) == '\x01');
    fStack_124 = *(float *)(param_1 + 0xfc) * *(float *)(param_1 + 0xfc);
    fVar15 = cosf(*(float *)(param_1 + 0xf4) * 0.017453292);
    local_11c = ABS(1.0 - fVar15);
    fVar15 = cosf(*(float *)(param_1 + 0xf8) * 0.017453292);
    local_118[0] = ABS(1.0 - fVar15);
    local_120 = *(float *)(param_1 + 0x100) * *(float *)(param_1 + 0x100);
    bVar8 = FUN_146c3d996(&local_158);
    *(int *)(param_1 + 0x10c) = local_130._4_4_;
    if (((bVar8 & 0 < local_130._4_4_) != 0) && (bVar8 = 1, *(char *)(param_1 + 0xf1) == '\x01')) {
      local_f8 = *(undefined1 **)(param_1 + 8);
      lStack_d0 = 0;
      local_c8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_c4 = 0x80;
      uStack_c0 = 0xffffffff;
      uStack_bc = 0;
      lStack_b0 = 0;
      local_a8 = local_a8 & 0xffffffff00000000;
      local_98 = local_98 & 0xffffffff00000000;
      dStack_a0 = *(double *)(param_1 + 0xe8) + *(double *)(param_1 + 0xe8);
      cVar6 = FUN_148319268();
      bVar8 = 1;
      if ((cVar6 != '\0') && (0 < (int)local_98)) {
        local_1b0 = *(double *)(param_1 + 8);
        local_1b8 = &PTR_FUN_149f36300;
        local_170 = 0;
        local_190 = 0;
        local_1a8 = *(double **)(param_1 + 0xe8);
        local_198 = (double)local_1a8 + (double)local_1a8;
        local_1a0 = CONCAT31(local_1a0._1_3_,*(undefined1 *)(param_1 + 0xf0));
        local_188 = *(char *)(param_1 + 0xf2) == '\x01';
        local_184 = *(float *)(param_1 + 0xfc) * *(float *)(param_1 + 0xfc);
        fVar15 = cosf(*(float *)(param_1 + 0xf4) * 0.017453292);
        local_17c = ABS(1.0 - fVar15);
        fVar15 = cosf(*(float *)(param_1 + 0xf8) * 0.017453292);
        local_178 = ABS(1.0 - fVar15);
        local_180 = *(float *)(param_1 + 0x100) * *(float *)(param_1 + 0x100);
        bVar8 = FUN_146c3d996(&local_1b8);
        *(undefined4 *)(param_1 + 0x10c) = uStack_18c;
      }
      local_a8 = local_a8 & 0xffffffff00000000;
      if (lStack_b0 != 0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(&uStack_f0);
    }
    if (*(char *)(param_1 + 0xf2) == '\x02') {
      local_f8 = (undefined1 *)
                 CONCAT44(local_f8._4_4_,*(float *)(param_1 + 0xfc) * *(float *)(param_1 + 0xfc));
      fVar15 = cosf(*(float *)(param_1 + 0xf4) * 0.017453292);
      uStack_f0 = CONCAT44(uStack_f0._4_4_,1.0 - fVar15) & 0xffffffff7fffffff;
      fVar15 = cosf(*(float *)(param_1 + 0xf8) * 0.017453292);
      uStack_f0 = CONCAT44(1.0 - fVar15,(int)uStack_f0) & 0x7fffffffffffffff;
      local_f8 = (undefined1 *)
                 CONCAT44(*(float *)(param_1 + 0x100) * *(float *)(param_1 + 0x100),
                          (undefined4)local_f8);
      FUN_146c4034c(&local_f8,*(undefined8 *)(param_1 + 8));
    }
    if (bVar8 != 0) {
      cVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0xd8))
                        (*(longlong **)(param_1 + 8),CONCAT11(uVar7,uVar7) ^ 0x101,0);
      if (cVar6 != '\0') goto LAB_1496dc7df;
    }
    local_1e0 = 1;
    local_1e8 = 1;
    FUN_146c005f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x88),1,1);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x108);
  }
LAB_1496dc7df:
  if ((local_80 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496dce96 FUN_1496dce96 body=158 status=ok
// SIG undefined FUN_1496dce96(void)

void FUN_1496dce96(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14bdd8970;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x13);
  plVar3 = (longlong *)param_1[0x12];
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
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001496dcf29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 1496dcf34 FUN_1496dcf34 body=199 status=ok
// SIG undefined FUN_1496dcf34(void)

undefined8 * FUN_1496dcf34(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bdd8a10;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bdd8a30;
  param_1[7] = param_2;
  param_1[2] = &LAB_1496dd128;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bdd8a50;
  param_1[0x17] = &LAB_1496dd176;
  param_1[0x12] = &LAB_1496dd17e;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 1496dcffc FUN_1496dcffc body=38 status=ok
// SIG undefined FUN_1496dcffc(void)

undefined8 FUN_1496dcffc(undefined8 param_1,int param_2)

{
  FUN_1496dd1d2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496dd022 FUN_1496dd022 body=207 status=ok
// SIG undefined FUN_1496dd022(void)

void FUN_1496dd022(longlong param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_21 = (*pcVar2)(uVar4);
  puVar1 = (undefined1 *)(param_1 + 8);
  if (*(char *)(param_1 + 9) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_21);
    if (cVar3 == '\0') goto LAB_1496dd0d3;
  }
  if (&local_21 != puVar1) {
    *(undefined1 *)(param_1 + 8) = local_21;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_1496dd0d3:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496dd0f2 FUN_1496dd0f2 body=53 status=ok
// SIG undefined FUN_1496dd0f2(void)

void FUN_1496dd0f2(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined1 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 1496dd158 FUN_1496dd158 body=29 status=ok
// SIG undefined FUN_1496dd158(void)

undefined8 FUN_1496dd158(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496dd1b4 FUN_1496dd1b4 body=29 status=ok
// SIG undefined FUN_1496dd1b4(void)

undefined8 FUN_1496dd1b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496dd1d2 FUN_1496dd1d2 body=127 status=ok
// SIG undefined FUN_1496dd1d2(void)

void FUN_1496dd1d2(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bdd8a10;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 1496dd251 FUN_1496dd251 body=148 status=ok
// SIG undefined FUN_1496dd251(void)

undefined8 FUN_1496dd251(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145baf5d8();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496dd2e6 FUN_1496dd2e6 body=148 status=ok
// SIG undefined FUN_1496dd2e6(void)

undefined8 FUN_1496dd2e6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145baf7ac();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496dd37b FUN_1496dd37b body=148 status=ok
// SIG undefined FUN_1496dd37b(void)

undefined8 FUN_1496dd37b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145baf980();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496dd414 FUN_1496dd414 body=31 status=ok
// SIG undefined FUN_1496dd414(void)

undefined8 FUN_1496dd414(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496dd450 FUN_1496dd450 body=93 status=ok
// SIG undefined FUN_1496dd450(void)

void FUN_1496dd450(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bdd8c20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1496dd4ae FUN_1496dd4ae body=123 status=ok
// SIG undefined FUN_1496dd4ae(void)

void FUN_1496dd4ae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bdd8c20;
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



// FUNCTION 1496dd52a FUN_1496dd52a body=21 status=ok
// SIG undefined FUN_1496dd52a(void)

undefined8 FUN_1496dd52a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1496dd568 FUN_1496dd568 body=2465 status=ok
// SIG undefined FUN_1496dd568(void)

undefined8 FUN_1496dd568(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 **ppuVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  undefined8 *puVar28;
  float fVar29;
  undefined1 auStack_3b8 [32];
  undefined8 **local_398;
  ulonglong local_390;
  undefined8 *local_388;
  undefined8 *local_380;
  undefined8 *local_378;
  undefined8 uStack_370;
  undefined8 *local_368;
  undefined8 uStack_360;
  longlong local_358;
  int local_350;
  undefined8 *local_348;
  undefined8 *local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  uVar9 = FUN_1448c2e86();
  FUN_145a22648(uVar9,&local_358,DAT_14cc223b0);
  if (*param_1 != 0) {
    FUN_144a3a302();
  }
  lVar20 = local_358;
  local_368 = (undefined8 *)0x0;
  uStack_360 = 0;
  lVar27 = (longlong)local_350;
  if (lVar27 == 0) {
    local_378 = (undefined8 *)0x0;
    uStack_370 = 0;
  }
  else {
    lVar19 = 0;
    do {
      plVar1 = *(longlong **)(lVar20 + lVar19);
      if ((plVar1 != (longlong *)0x0) && (cVar3 = (**(code **)(*plVar1 + 8))(), cVar3 == '\x01')) {
        lVar13 = (longlong)(int)uStack_360;
        uVar6 = (int)uStack_360 + 1;
        uStack_360 = CONCAT44(uStack_360._4_4_,uVar6);
        if (uStack_360._4_4_ < uVar6) {
          FUN_145a226ce(&local_368);
        }
        local_368[lVar13] = *(undefined8 *)(lVar20 + lVar19);
      }
      lVar13 = local_358;
      lVar19 = lVar19 + 8;
    } while (lVar27 * 8 != lVar19);
    local_378 = (undefined8 *)0x0;
    uStack_370 = 0;
    if ((longlong)local_350 != 0) {
      lVar20 = 0;
      do {
        plVar1 = *(longlong **)(lVar13 + lVar20);
        if ((plVar1 != (longlong *)0x0) && (cVar3 = (**(code **)(*plVar1 + 8))(), cVar3 == '\x02'))
        {
          lVar27 = (longlong)(int)uStack_370;
          uVar6 = (int)uStack_370 + 1;
          uStack_370 = CONCAT44(uStack_370._4_4_,uVar6);
          if (uStack_370._4_4_ < uVar6) {
            FUN_145a226ce(&local_378);
          }
          local_378[lVar27] = *(undefined8 *)(lVar13 + lVar20);
        }
        lVar20 = lVar20 + 8;
      } while ((longlong)local_350 * 8 != lVar20);
    }
  }
  puVar23 = local_368;
  iVar12 = (int)uStack_360;
  lVar20 = (longlong)(int)uStack_360;
  if (1 < lVar20) {
    memset(local_338,0,0x2f0);
    local_348 = puVar23;
    local_340 = puVar23 + lVar20 + -1;
    fVar29 = logf((float)iVar12);
    local_338[0] = (int)(longlong)(fVar29 + fVar29);
    ppuVar11 = &local_348;
    do {
      puVar21 = *ppuVar11;
      puVar14 = ppuVar11[1];
      iVar12 = *(int *)(ppuVar11 + 2);
      iVar7 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar21) >> 3);
      uVar6 = iVar7 + 1;
      puVar23 = puVar14;
      puVar22 = puVar21;
      puVar28 = puVar21;
      local_398 = ppuVar11;
      if (iVar12 != 0) {
LAB_1496dd742:
        if (8 < (int)uVar6) {
          local_390 = CONCAT44(local_390._4_4_,iVar12);
          uVar9 = puVar22[uVar6 >> 1];
          puVar22[uVar6 >> 1] = *puVar22;
          *puVar22 = uVar9;
          puVar17 = puVar23 + 1;
          puVar28 = puVar22;
          local_388 = puVar21;
          local_380 = puVar14;
          do {
            puVar21 = puVar28 + 1;
            puVar14 = puVar28 + 1;
            do {
              puVar28 = puVar14;
              puVar10 = puVar21;
              if (puVar23 < puVar28) break;
              plVar1 = (longlong *)*puVar28;
              bVar4 = (**(code **)(*(longlong *)*puVar22 + 0x18))();
              bVar5 = (**(code **)(*plVar1 + 0x18))(plVar1);
              puVar21 = puVar10 + 1;
              puVar14 = puVar28 + 1;
            } while (bVar5 <= bVar4);
            puVar21 = puVar17 + -2;
            do {
              puVar24 = puVar17;
              puVar14 = puVar21;
              puVar17 = puVar24 + -1;
              if (puVar17 <= puVar22) break;
              plVar1 = (longlong *)*puVar22;
              bVar4 = (**(code **)(*(longlong *)*puVar17 + 0x18))();
              bVar5 = (**(code **)(*plVar1 + 0x18))(plVar1);
              puVar21 = puVar14 + -1;
            } while (bVar5 <= bVar4);
            if (puVar17 < puVar28) goto LAB_1496dd7f8;
            uVar9 = *puVar28;
            *puVar28 = *puVar17;
            *puVar17 = uVar9;
          } while( true );
        }
        for (; ppuVar11 = local_398, puVar14 = puVar22, puVar21 = puVar22, puVar22 < puVar23;
            puVar23 = puVar23 + -1) {
          while (puVar28 = puVar14, puVar21 = puVar21 + 1, puVar21 <= puVar23) {
            plVar1 = (longlong *)*puVar21;
            bVar4 = (**(code **)(*(longlong *)*puVar28 + 0x18))();
            bVar5 = (**(code **)(*plVar1 + 0x18))(plVar1);
            puVar14 = puVar21;
            if (bVar5 <= bVar4) {
              puVar14 = puVar28;
            }
          }
          uVar9 = *puVar28;
          *puVar28 = *puVar23;
          *puVar23 = uVar9;
        }
        goto LAB_1496dda96;
      }
LAB_1496dd8a6:
      ppuVar11 = local_398;
      if (uVar6 != 0) {
        uVar8 = (iVar7 - (iVar7 + -1 >> 0x1f)) + -1 >> 1;
        do {
          local_390 = (ulonglong)uVar8;
          uVar15 = local_390;
          while (uVar2 = uVar8 * 2 + 1, (int)uVar2 < (int)uVar6) {
            uVar18 = uVar8 * 2 + 2;
            uVar8 = uVar2;
            if ((int)uVar18 < (int)uVar6) {
              plVar1 = (longlong *)puVar28[(int)uVar2];
              bVar4 = (**(code **)(*(longlong *)puVar28[(int)uVar18] + 0x18))();
              bVar5 = (**(code **)(*plVar1 + 0x18))(plVar1);
              if (bVar5 <= bVar4) {
                uVar8 = uVar18;
              }
            }
            iVar12 = (int)uVar15;
            plVar1 = (longlong *)puVar28[(int)uVar8];
            bVar4 = (**(code **)(*(longlong *)puVar28[iVar12] + 0x18))();
            bVar5 = (**(code **)(*plVar1 + 0x18))(plVar1);
            if (bVar5 <= bVar4) break;
            uVar9 = puVar28[iVar12];
            puVar28[iVar12] = puVar28[(int)uVar8];
            puVar28[(int)uVar8] = uVar9;
            uVar15 = (ulonglong)uVar8;
          }
          uVar8 = (int)local_390 - 1;
        } while ((int)local_390 != 0);
        ppuVar11 = local_398;
        if (1 < (int)uVar6) {
          uVar15 = (ulonglong)uVar6;
          uVar9 = *puVar28;
          *puVar28 = puVar28[uVar15 - 1];
          puVar28[uVar15 - 1] = uVar9;
          if (uVar6 != 2) {
            do {
              uVar16 = uVar15 - 1;
              iVar12 = 0;
              iVar26 = 1;
              iVar7 = 0;
              do {
                iVar12 = iVar12 + 2;
                iVar25 = iVar26;
                if ((longlong)iVar12 < (longlong)uVar16) {
                  plVar1 = (longlong *)puVar28[iVar26];
                  bVar4 = (**(code **)(*(longlong *)puVar28[iVar12] + 0x18))();
                  bVar5 = (**(code **)(*plVar1 + 0x18))(plVar1);
                  if (bVar5 <= bVar4) {
                    iVar25 = iVar12;
                  }
                }
                plVar1 = (longlong *)puVar28[iVar25];
                bVar4 = (**(code **)(*(longlong *)puVar28[iVar7] + 0x18))();
                bVar5 = (**(code **)(*plVar1 + 0x18))(plVar1);
                if (bVar5 <= bVar4) break;
                uVar9 = puVar28[iVar7];
                puVar28[iVar7] = puVar28[iVar25];
                puVar28[iVar25] = uVar9;
                iVar12 = iVar25 * 2;
                iVar26 = iVar25 * 2 + 1;
                iVar7 = iVar25;
              } while ((longlong)iVar26 < (longlong)uVar16);
              uVar9 = *puVar28;
              *puVar28 = puVar28[uVar15 - 2];
              puVar28[uVar15 - 2] = uVar9;
              ppuVar11 = local_398;
              uVar15 = uVar16;
            } while (2 < uVar16);
          }
        }
      }
LAB_1496dda96:
      ppuVar11 = ppuVar11 + -3;
    } while (&local_348 <= ppuVar11);
  }
  puVar23 = local_378;
  iVar12 = (int)uStack_370;
  lVar20 = (longlong)(int)uStack_370;
  if (1 < lVar20) {
    memset(local_338,0,0x2f0);
    local_348 = puVar23;
    local_340 = puVar23 + lVar20 + -1;
    fVar29 = logf((float)iVar12);
    local_338[0] = (int)(longlong)(fVar29 + fVar29);
    ppuVar11 = &local_348;
    do {
      puVar21 = *ppuVar11;
      puVar14 = ppuVar11[1];
      iVar12 = *(int *)(ppuVar11 + 2);
      iVar7 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar21) >> 3);
      uVar6 = iVar7 + 1;
      puVar23 = puVar14;
      puVar22 = puVar21;
      puVar28 = puVar21;
      local_398 = ppuVar11;
      if (iVar12 != 0) {
LAB_1496ddb2b:
        if (8 < (int)uVar6) {
          local_390 = CONCAT44(local_390._4_4_,iVar12);
          uVar9 = puVar22[uVar6 >> 1];
          puVar22[uVar6 >> 1] = *puVar22;
          *puVar22 = uVar9;
          puVar17 = puVar23 + 1;
          puVar28 = puVar22;
          local_388 = puVar21;
          local_380 = puVar14;
          do {
            puVar21 = puVar28 + 1;
            puVar14 = puVar28 + 1;
            do {
              puVar28 = puVar14;
              puVar10 = puVar21;
              if (puVar23 < puVar28) break;
              plVar1 = (longlong *)*puVar28;
              bVar4 = (**(code **)(*(longlong *)*puVar22 + 0x18))();
              bVar5 = (**(code **)(*plVar1 + 0x18))(plVar1);
              puVar21 = puVar10 + 1;
              puVar14 = puVar28 + 1;
            } while (bVar5 <= bVar4);
            puVar21 = puVar17 + -2;
            do {
              puVar24 = puVar17;
              puVar14 = puVar21;
              puVar17 = puVar24 + -1;
              if (puVar17 <= puVar22) break;
              plVar1 = (longlong *)*puVar22;
              bVar4 = (**(code **)(*(longlong *)*puVar17 + 0x18))();
              bVar5 = (**(code **)(*plVar1 + 0x18))(plVar1);
              puVar21 = puVar14 + -1;
            } while (bVar5 <= bVar4);
            if (puVar17 < puVar28) goto LAB_1496ddbe1;
            uVar9 = *puVar28;
            *puVar28 = *puVar17;
            *puVar17 = uVar9;
          } while( true );
        }
        for (; ppuVar11 = local_398, puVar14 = puVar22, puVar21 = puVar22, puVar22 < puVar23;
            puVar23 = puVar23 + -1) {
          while (puVar28 = puVar14, puVar21 = puVar21 + 1, puVar21 <= puVar23) {
            plVar1 = (longlong *)*puVar21;
            bVar4 = (**(code **)(*(longlong *)*puVar28 + 0x18))();
            bVar5 = (**(code **)(*plVar1 + 0x18))(plVar1);
            puVar14 = puVar21;
            if (bVar5 <= bVar4) {
              puVar14 = puVar28;
            }
          }
          uVar9 = *puVar28;
          *puVar28 = *puVar23;
          *puVar23 = uVar9;
        }
        goto LAB_1496dde7f;
      }
LAB_1496ddc8f:
      ppuVar11 = local_398;
      if (uVar6 != 0) {
        uVar8 = (iVar7 - (iVar7 + -1 >> 0x1f)) + -1 >> 1;
        do {
          local_390 = (ulonglong)uVar8;
          uVar15 = local_390;
          while (uVar2 = uVar8 * 2 + 1, (int)uVar2 < (int)uVar6) {
            uVar18 = uVar8 * 2 + 2;
            uVar8 = uVar2;
            if ((int)uVar18 < (int)uVar6) {
              plVar1 = (longlong *)puVar28[(int)uVar2];
              bVar4 = (**(code **)(*(longlong *)puVar28[(int)uVar18] + 0x18))();
              bVar5 = (**(code **)(*plVar1 + 0x18))(plVar1);
              if (bVar5 <= bVar4) {
                uVar8 = uVar18;
              }
            }
            iVar12 = (int)uVar15;
            plVar1 = (longlong *)puVar28[(int)uVar8];
            bVar4 = (**(code **)(*(longlong *)puVar28[iVar12] + 0x18))();
            bVar5 = (**(code **)(*plVar1 + 0x18))(plVar1);
            if (bVar5 <= bVar4) break;
            uVar9 = puVar28[iVar12];
            puVar28[iVar12] = puVar28[(int)uVar8];
            puVar28[(int)uVar8] = uVar9;
            uVar15 = (ulonglong)uVar8;
          }
          uVar8 = (int)local_390 - 1;
        } while ((int)local_390 != 0);
        ppuVar11 = local_398;
        if (1 < (int)uVar6) {
          uVar15 = (ulonglong)uVar6;
          uVar9 = *puVar28;
          *puVar28 = puVar28[uVar15 - 1];
          puVar28[uVar15 - 1] = uVar9;
          if (uVar6 != 2) {
            do {
              uVar16 = uVar15 - 1;
              iVar12 = 0;
              iVar26 = 1;
              iVar7 = 0;
              do {
                iVar12 = iVar12 + 2;
                iVar25 = iVar26;
                if ((longlong)iVar12 < (longlong)uVar16) {
                  plVar1 = (longlong *)puVar28[iVar26];
                  bVar4 = (**(code **)(*(longlong *)puVar28[iVar12] + 0x18))();
                  bVar5 = (**(code **)(*plVar1 + 0x18))(plVar1);
                  if (bVar5 <= bVar4) {
                    iVar25 = iVar12;
                  }
                }
                plVar1 = (longlong *)puVar28[iVar25];
                bVar4 = (**(code **)(*(longlong *)puVar28[iVar7] + 0x18))();
                bVar5 = (**(code **)(*plVar1 + 0x18))(plVar1);
                if (bVar5 <= bVar4) break;
                uVar9 = puVar28[iVar7];
                puVar28[iVar7] = puVar28[iVar25];
                puVar28[iVar25] = uVar9;
                iVar12 = iVar25 * 2;
                iVar26 = iVar25 * 2 + 1;
                iVar7 = iVar25;
              } while ((longlong)iVar26 < (longlong)uVar16);
              uVar9 = *puVar28;
              *puVar28 = puVar28[uVar15 - 2];
              puVar28[uVar15 - 2] = uVar9;
              ppuVar11 = local_398;
              uVar15 = uVar16;
            } while (2 < uVar16);
          }
        }
      }
LAB_1496dde7f:
      ppuVar11 = ppuVar11 + -3;
    } while (&local_348 <= ppuVar11);
  }
  if ((int)uStack_360 < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = *local_368;
  }
  if (local_378 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_368 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_358 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
LAB_1496dd7f8:
  uVar9 = *puVar22;
  *puVar22 = *puVar17;
  *puVar17 = uVar9;
  iVar12 = (int)local_390 + -1;
  puVar24 = puVar24 + -2;
  if ((longlong)puVar14 - (longlong)local_388 < (longlong)local_380 - (longlong)puVar10) {
    if (puVar28 < puVar23) {
      *local_398 = puVar28;
      local_398[1] = puVar23;
      *(int *)(local_398 + 2) = iVar12;
      local_398 = local_398 + 3;
    }
    ppuVar11 = local_398;
    puVar28 = puVar22;
    if (puVar17 <= puVar22 + 1) goto LAB_1496dda96;
  }
  else {
    ppuVar11 = local_398;
    if (puVar22 + 1 < puVar17) {
      *local_398 = puVar22;
      local_398[1] = puVar24;
      *(int *)(local_398 + 2) = iVar12;
      ppuVar11 = local_398 + 3;
    }
    puVar14 = puVar23;
    puVar22 = puVar10;
    puVar24 = puVar23;
    if (puVar23 <= puVar28) goto LAB_1496dda96;
  }
  local_398 = ppuVar11;
  iVar7 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar22) >> 3);
  uVar6 = iVar7 + 1;
  puVar21 = puVar22;
  puVar23 = puVar24;
  puVar22 = puVar28;
  if (iVar12 == 0) goto LAB_1496dd8a6;
  goto LAB_1496dd742;
LAB_1496ddbe1:
  uVar9 = *puVar22;
  *puVar22 = *puVar17;
  *puVar17 = uVar9;
  iVar12 = (int)local_390 + -1;
  puVar24 = puVar24 + -2;
  if ((longlong)puVar14 - (longlong)local_388 < (longlong)local_380 - (longlong)puVar10) {
    if (puVar28 < puVar23) {
      *local_398 = puVar28;
      local_398[1] = puVar23;
      *(int *)(local_398 + 2) = iVar12;
      local_398 = local_398 + 3;
    }
    ppuVar11 = local_398;
    puVar28 = puVar22;
    if (puVar17 <= puVar22 + 1) goto LAB_1496dde7f;
  }
  else {
    ppuVar11 = local_398;
    if (puVar22 + 1 < puVar17) {
      *local_398 = puVar22;
      local_398[1] = puVar24;
      *(int *)(local_398 + 2) = iVar12;
      ppuVar11 = local_398 + 3;
    }
    puVar14 = puVar23;
    puVar22 = puVar10;
    puVar24 = puVar23;
    if (puVar23 <= puVar28) goto LAB_1496dde7f;
  }
  local_398 = ppuVar11;
  iVar7 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar22) >> 3);
  uVar6 = iVar7 + 1;
  puVar21 = puVar22;
  puVar23 = puVar24;
  puVar22 = puVar28;
  if (iVar12 == 0) goto LAB_1496ddc8f;
  goto LAB_1496ddb2b;
}



// FUNCTION 1496ddf14 FUN_1496ddf14 body=56 status=ok
// SIG undefined FUN_1496ddf14(void)

void FUN_1496ddf14(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1496ec5e2(param_1,iVar1);
  }
  FUN_1496ec5a5((longlong)iVar1 * 0x90 + *param_1);
  return;
}



// FUNCTION 1496ddf4c FUN_1496ddf4c body=754 status=ok
// SIG undefined FUN_1496ddf4c(void)

undefined8 * FUN_1496ddf4c(undefined8 *param_1,undefined4 param_2,longlong param_3,double *param_4)

{
  double dVar1;
  undefined1 auVar3 [16];
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  ulonglong local_60;
  double dVar2;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_1 = &PTR_FUN_14bdde7e0;
  *(undefined4 *)(param_1 + 1) = param_2;
  dVar6 = *(double *)(param_3 + 0x10) * param_4[8];
  dVar7 = *(double *)(param_3 + 0x18) * param_4[9];
  dVar9 = *(double *)(param_3 + 0x20) * param_4[10];
  dVar4 = *param_4;
  dVar8 = param_4[1];
  dVar14 = param_4[2];
  dVar1 = param_4[3];
  dVar2 = param_4[3];
  dVar10 = dVar7 * dVar4 - dVar6 * dVar8;
  dVar12 = dVar9 * dVar8 - dVar7 * dVar14;
  dVar13 = dVar6 * dVar14 - dVar4 * dVar9;
  dVar12 = dVar12 + dVar12;
  dVar13 = dVar13 + dVar13;
  dVar10 = dVar10 + dVar10;
  dVar15 = param_4[5];
  dVar11 = param_4[6];
  param_1[2] = (dVar10 * dVar8 - dVar13 * dVar14) + dVar1 * dVar12 + dVar6 + param_4[4];
  param_1[3] = (dVar14 * dVar12 - dVar4 * dVar10) + dVar2 * dVar13 + dVar7 + dVar15;
  param_1[4] = dVar10 * dVar1 + dVar9 + (dVar13 * dVar4 - dVar12 * dVar8) + dVar11;
  dVar8 = *(double *)(param_3 + 0x28) * param_4[8];
  dVar9 = *(double *)(param_3 + 0x30) * param_4[9];
  dVar1 = *(double *)(param_3 + 0x38) * param_4[10];
  dVar10 = *param_4;
  dVar13 = param_4[1];
  dVar4 = param_4[2];
  dVar2 = param_4[3];
  dVar11 = dVar9 * dVar10 - dVar8 * dVar13;
  dVar14 = dVar1 * dVar13 - dVar9 * dVar4;
  dVar15 = dVar8 * dVar4 - dVar10 * dVar1;
  dVar14 = dVar14 + dVar14;
  dVar15 = dVar15 + dVar15;
  dVar11 = dVar11 + dVar11;
  dVar9 = (dVar4 * dVar14 - dVar10 * dVar11) + param_4[3] * dVar15 + dVar9;
  auVar3._8_4_ = SUB84(dVar9,0);
  auVar3._0_8_ = (dVar11 * dVar13 - dVar15 * dVar4) + dVar2 * dVar14 + dVar8;
  auVar3._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 5) = auVar3;
  param_1[7] = dVar11 * dVar2 + dVar1 + (dVar15 * dVar10 - dVar14 * dVar13);
  uVar5 = *(undefined8 *)(param_3 + 0x48);
  param_1[8] = *(undefined8 *)(param_3 + 0x40);
  param_1[9] = uVar5;
  param_1[10] = *(undefined8 *)(param_3 + 0x50);
  *(float *)(param_1 + 0xb) = (float)*(double *)(param_3 + 0x58);
  param_1[0xe] = *(undefined8 *)(param_3 + 0x70);
  uVar5 = *(undefined8 *)(param_3 + 0x68);
  param_1[0xc] = *(undefined8 *)(param_3 + 0x60);
  param_1[0xd] = uVar5;
  uVar5 = *(undefined8 *)(param_3 + 0x80);
  param_1[0xf] = *(undefined8 *)(param_3 + 0x78);
  param_1[0x10] = uVar5;
  param_1[0x11] = *(undefined8 *)(param_3 + 0x88);
  local_c8 = param_1[0xe];
  local_d8 = param_1[0xc];
  uStack_d0 = param_1[0xd];
  local_c0 = *(undefined4 *)(param_3 + 0x78);
  uStack_bc = *(undefined4 *)(param_3 + 0x7c);
  uStack_b8 = *(undefined4 *)(param_3 + 0x80);
  uStack_b4 = *(undefined4 *)(param_3 + 0x84);
  local_b0 = *(undefined8 *)(param_3 + 0x88);
  local_a8 = 1;
  FUN_144a1c3a2(&local_d8,&local_98,param_4);
  param_1[0xe] = local_88;
  param_1[0xc] = local_98;
  param_1[0xd] = uStack_90;
  *(undefined4 *)(param_1 + 0xf) = local_80;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uStack_7c;
  *(undefined4 *)(param_1 + 0x10) = uStack_78;
  *(undefined4 *)((longlong)param_1 + 0x84) = uStack_74;
  param_1[0x11] = local_70;
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496de240 FUN_1496de240 body=1688 status=ok
// SIG undefined FUN_1496de240(void)

void FUN_1496de240(undefined8 *param_1,double *param_2,double *param_3)

{
  double dVar1;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
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
  double dVar2;
  
  *param_1 = &PTR_FUN_14bdde950;
  dVar10 = *param_2 * param_3[8];
  dVar11 = param_2[1] * param_3[9];
  dVar13 = param_2[2] * param_3[10];
  dVar9 = *param_3;
  dVar12 = param_3[1];
  dVar18 = param_3[2];
  dVar1 = param_3[3];
  dVar2 = param_3[3];
  dVar14 = dVar11 * dVar9 - dVar10 * dVar12;
  dVar16 = dVar13 * dVar12 - dVar11 * dVar18;
  dVar17 = dVar10 * dVar18 - dVar9 * dVar13;
  dVar16 = dVar16 + dVar16;
  dVar17 = dVar17 + dVar17;
  dVar14 = dVar14 + dVar14;
  dVar19 = param_3[5];
  dVar15 = param_3[6];
  param_1[1] = (dVar14 * dVar12 - dVar17 * dVar18) + dVar1 * dVar16 + dVar10 + param_3[4];
  param_1[2] = (dVar18 * dVar16 - dVar9 * dVar14) + dVar2 * dVar17 + dVar11 + dVar19;
  param_1[3] = dVar14 * dVar1 + dVar13 + (dVar17 * dVar9 - dVar16 * dVar12) + dVar15;
  dVar12 = param_2[3] * param_3[8];
  dVar13 = param_2[4] * param_3[9];
  dVar1 = param_2[5] * param_3[10];
  dVar14 = *param_3;
  dVar17 = param_3[1];
  dVar9 = param_3[2];
  dVar2 = param_3[3];
  dVar15 = dVar13 * dVar14 - dVar12 * dVar17;
  dVar18 = dVar1 * dVar17 - dVar13 * dVar9;
  dVar19 = dVar12 * dVar9 - dVar14 * dVar1;
  dVar18 = dVar18 + dVar18;
  dVar19 = dVar19 + dVar19;
  dVar15 = dVar15 + dVar15;
  dVar13 = (dVar9 * dVar18 - dVar14 * dVar15) + param_3[3] * dVar19 + dVar13;
  auVar3._8_4_ = SUB84(dVar13,0);
  auVar3._0_8_ = (dVar15 * dVar17 - dVar19 * dVar9) + dVar2 * dVar18 + dVar12;
  auVar3._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 4) = auVar3;
  param_1[6] = dVar15 * dVar2 + dVar1 + (dVar19 * dVar14 - dVar18 * dVar17);
  dVar12 = param_2[6] * param_3[8];
  dVar13 = param_2[7] * param_3[9];
  dVar1 = param_2[8] * param_3[10];
  dVar14 = *param_3;
  dVar17 = param_3[1];
  dVar9 = param_3[2];
  dVar2 = param_3[3];
  dVar15 = dVar13 * dVar14 - dVar12 * dVar17;
  dVar18 = dVar1 * dVar17 - dVar13 * dVar9;
  dVar19 = dVar12 * dVar9 - dVar14 * dVar1;
  dVar18 = dVar18 + dVar18;
  dVar19 = dVar19 + dVar19;
  dVar15 = dVar15 + dVar15;
  dVar13 = (dVar9 * dVar18 - dVar14 * dVar15) + param_3[3] * dVar19 + dVar13;
  auVar4._8_4_ = SUB84(dVar13,0);
  auVar4._0_8_ = (dVar15 * dVar17 - dVar19 * dVar9) + dVar2 * dVar18 + dVar12;
  auVar4._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 7) = auVar4;
  param_1[9] = dVar15 * dVar2 + dVar1 + (dVar19 * dVar14 - dVar18 * dVar17);
  dVar12 = param_2[9] * param_3[8];
  dVar13 = param_2[10] * param_3[9];
  dVar1 = param_2[0xb] * param_3[10];
  dVar14 = *param_3;
  dVar17 = param_3[1];
  dVar9 = param_3[2];
  dVar2 = param_3[3];
  dVar15 = dVar13 * dVar14 - dVar12 * dVar17;
  dVar18 = dVar1 * dVar17 - dVar13 * dVar9;
  dVar19 = dVar12 * dVar9 - dVar14 * dVar1;
  dVar18 = dVar18 + dVar18;
  dVar19 = dVar19 + dVar19;
  dVar15 = dVar15 + dVar15;
  dVar13 = (dVar9 * dVar18 - dVar14 * dVar15) + param_3[3] * dVar19 + dVar13;
  auVar5._8_4_ = SUB84(dVar13,0);
  auVar5._0_8_ = (dVar15 * dVar17 - dVar19 * dVar9) + dVar2 * dVar18 + dVar12;
  auVar5._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 10) = auVar5;
  param_1[0xc] = dVar15 * dVar2 + dVar1 + (dVar19 * dVar14 - dVar18 * dVar17);
  dVar12 = param_2[0xc] * param_3[8];
  dVar13 = param_2[0xd] * param_3[9];
  dVar1 = param_2[0xe] * param_3[10];
  dVar14 = *param_3;
  dVar17 = param_3[1];
  dVar9 = param_3[2];
  dVar2 = param_3[3];
  dVar15 = dVar13 * dVar14 - dVar12 * dVar17;
  dVar18 = dVar1 * dVar17 - dVar13 * dVar9;
  dVar19 = dVar12 * dVar9 - dVar14 * dVar1;
  dVar18 = dVar18 + dVar18;
  dVar19 = dVar19 + dVar19;
  dVar15 = dVar15 + dVar15;
  dVar13 = (dVar9 * dVar18 - dVar14 * dVar15) + param_3[3] * dVar19 + dVar13;
  auVar6._8_4_ = SUB84(dVar13,0);
  auVar6._0_8_ = (dVar15 * dVar17 - dVar19 * dVar9) + dVar2 * dVar18 + dVar12;
  auVar6._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xd) = auVar6;
  param_1[0xf] = dVar15 * dVar2 + dVar1 + (dVar19 * dVar14 - dVar18 * dVar17);
  dVar12 = param_2[0xf] * param_3[8];
  dVar13 = param_2[0x10] * param_3[9];
  dVar1 = param_2[0x11] * param_3[10];
  dVar14 = *param_3;
  dVar17 = param_3[1];
  dVar9 = param_3[2];
  dVar2 = param_3[3];
  dVar15 = dVar13 * dVar14 - dVar12 * dVar17;
  dVar18 = dVar1 * dVar17 - dVar13 * dVar9;
  dVar19 = dVar12 * dVar9 - dVar14 * dVar1;
  dVar18 = dVar18 + dVar18;
  dVar19 = dVar19 + dVar19;
  dVar15 = dVar15 + dVar15;
  dVar13 = (dVar9 * dVar18 - dVar14 * dVar15) + param_3[3] * dVar19 + dVar13;
  auVar7._8_4_ = SUB84(dVar13,0);
  auVar7._0_8_ = (dVar15 * dVar17 - dVar19 * dVar9) + dVar2 * dVar18 + dVar12;
  auVar7._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar7;
  param_1[0x12] = dVar15 * dVar2 + dVar1 + (dVar19 * dVar14 - dVar18 * dVar17);
  dVar12 = param_2[0x12] * param_3[8];
  dVar13 = param_2[0x13] * param_3[9];
  dVar1 = param_2[0x14] * param_3[10];
  dVar14 = *param_3;
  dVar17 = param_3[1];
  dVar9 = param_3[2];
  dVar2 = param_3[3];
  dVar15 = dVar13 * dVar14 - dVar12 * dVar17;
  dVar18 = dVar1 * dVar17 - dVar13 * dVar9;
  dVar19 = dVar12 * dVar9 - dVar14 * dVar1;
  dVar18 = dVar18 + dVar18;
  dVar19 = dVar19 + dVar19;
  dVar15 = dVar15 + dVar15;
  dVar13 = (dVar9 * dVar18 - dVar14 * dVar15) + param_3[3] * dVar19 + dVar13;
  auVar8._8_4_ = SUB84(dVar13,0);
  auVar8._0_8_ = (dVar15 * dVar17 - dVar19 * dVar9) + dVar2 * dVar18 + dVar12;
  auVar8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x13) = auVar8;
  param_1[0x15] = dVar15 * dVar2 + dVar1 + (dVar19 * dVar14 - dVar18 * dVar17);
  param_1[0x18] = param_2[0x17];
  dVar2 = param_2[0x16];
  param_1[0x16] = param_2[0x15];
  param_1[0x17] = dVar2;
  dVar2 = param_2[0x19];
  param_1[0x19] = param_2[0x18];
  param_1[0x1a] = dVar2;
  param_1[0x1b] = param_2[0x1a];
  *(float *)(param_1 + 0x1c) = (float)param_2[0x1b];
  *(float *)((longlong)param_1 + 0xe4) = (float)param_2[0x1c];
  *(float *)(param_1 + 0x1d) = (float)param_2[0x1d];
  return;
}



// FUNCTION 1496de8d8 FUN_1496de8d8 body=737 status=ok
// SIG undefined FUN_1496de8d8(void)

undefined8 * FUN_1496de8d8(undefined8 *param_1,undefined4 param_2,double *param_3,double *param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  double local_b0;
  undefined1 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_1 = &PTR_FUN_14bddeac0;
  *(undefined4 *)(param_1 + 1) = param_2;
  dVar7 = *param_3 * param_4[8];
  dVar9 = param_3[1] * param_4[9];
  dVar11 = param_3[2] * param_4[10];
  dVar5 = *param_4;
  dVar6 = param_4[1];
  dVar8 = param_4[2];
  dVar1 = param_4[3];
  dVar10 = dVar9 * dVar5 - dVar7 * dVar6;
  dVar12 = dVar11 * dVar6 - dVar9 * dVar8;
  dVar13 = dVar7 * dVar8 - dVar5 * dVar11;
  dVar12 = dVar12 + dVar12;
  dVar13 = dVar13 + dVar13;
  dVar10 = dVar10 + dVar10;
  dVar4 = (dVar8 * dVar12 - dVar5 * dVar10) + param_4[3] * dVar13 + dVar9 + param_4[5];
  dVar9 = param_4[6];
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = (dVar10 * dVar6 - dVar13 * dVar8) + dVar1 * dVar12 + dVar7 + param_4[4];
  auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 2) = auVar2;
  param_1[4] = dVar10 * dVar1 + dVar11 + (dVar13 * dVar5 - dVar12 * dVar6) + dVar9;
  dVar8 = param_3[3] * param_4[8];
  dVar13 = param_3[4] * param_4[9];
  dVar9 = param_3[5] * param_4[10];
  dVar4 = *param_4;
  dVar5 = param_4[1];
  dVar6 = param_4[2];
  dVar1 = param_4[3];
  dVar11 = dVar13 * dVar4 - dVar8 * dVar5;
  dVar7 = dVar9 * dVar5 - dVar13 * dVar6;
  dVar10 = dVar8 * dVar6 - dVar4 * dVar9;
  dVar7 = dVar7 + dVar7;
  dVar10 = dVar10 + dVar10;
  dVar11 = dVar11 + dVar11;
  dVar13 = (dVar6 * dVar7 - dVar4 * dVar11) + param_4[3] * dVar10 + dVar13;
  auVar3._8_4_ = SUB84(dVar13,0);
  auVar3._0_8_ = (dVar11 * dVar5 - dVar10 * dVar6) + dVar1 * dVar7 + dVar8;
  auVar3._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 5) = auVar3;
  param_1[7] = dVar11 * dVar1 + dVar9 + (dVar10 * dVar4 - dVar7 * dVar5);
  param_1[10] = param_3[8];
  dVar1 = param_3[7];
  param_1[8] = param_3[6];
  param_1[9] = dVar1;
  dVar1 = param_3[0xc];
  param_1[0xb] = param_3[0xb];
  param_1[0xc] = dVar1;
  param_1[0xd] = param_3[0xd];
  dVar1 = param_3[0xf];
  param_1[0xe] = param_3[0xe];
  param_1[0xf] = dVar1;
  param_1[0x10] = param_3[0x10];
  local_c8 = param_1[0xd];
  local_d8 = param_1[0xb];
  uStack_d0 = param_1[0xc];
  local_c0 = *(undefined4 *)(param_3 + 0xe);
  uStack_bc = *(undefined4 *)((longlong)param_3 + 0x74);
  uStack_b8 = *(undefined4 *)(param_3 + 0xf);
  uStack_b4 = *(undefined4 *)((longlong)param_3 + 0x7c);
  local_b0 = param_3[0x10];
  local_a8 = 1;
  FUN_144a1c3a2(&local_d8,&local_98,param_4);
  param_1[0xd] = local_88;
  param_1[0xb] = local_98;
  param_1[0xc] = uStack_90;
  *(undefined4 *)(param_1 + 0xe) = local_80;
  *(undefined4 *)((longlong)param_1 + 0x74) = uStack_7c;
  *(undefined4 *)(param_1 + 0xf) = uStack_78;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uStack_74;
  param_1[0x10] = local_70;
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496debba FUN_1496debba body=10369 status=ok
// SIG undefined FUN_1496debba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1496debba(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 (*pauVar4) [16];
  void *_Src;
  ulonglong *puVar5;
  char *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar23;
  char cVar24;
  byte bVar25;
  int iVar26;
  longlong lVar27;
  longlong *plVar28;
  longlong *plVar29;
  longlong *plVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  undefined1 auVar34 [8];
  uint uVar35;
  uint uVar36;
  double *pdVar37;
  double *pdVar38;
  uint uVar39;
  longlong lVar40;
  int iVar41;
  uint uVar42;
  ulonglong in_R10;
  longlong lVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  double dVar50;
  double dVar53;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar54;
  undefined1 auVar55 [16];
  double dVar57;
  double dVar58;
  double dVar59;
  undefined1 auVar56 [16];
  double dVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar64;
  undefined1 auVar63 [16];
  double dVar65;
  double dVar66;
  double dVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  double dVar72;
  double dVar73;
  double dVar74;
  double dVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined1 auStack_6a8 [32];
  double local_688;
  longlong local_680;
  longlong *local_678;
  double dStack_670;
  undefined1 local_668 [16];
  undefined1 local_658 [16];
  double local_648;
  double dStack_640;
  double local_638;
  double dStack_630;
  longlong *local_620;
  undefined1 local_618 [16];
  undefined8 local_608;
  undefined2 local_600;
  undefined1 local_5fe;
  longlong local_5f8;
  undefined8 uStack_5f0;
  undefined1 local_5e7;
  undefined8 local_5e0;
  double local_5d8 [4];
  double local_5b8;
  double dStack_5b0;
  double local_5a8;
  double local_598;
  double dStack_590;
  double local_588;
  double local_578;
  double dStack_570;
  double local_568;
  double dStack_560;
  code *local_558 [2];
  undefined8 local_548;
  undefined **local_538;
  undefined1 *local_530;
  float local_528;
  double local_520;
  undefined1 local_518 [16];
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  double dStack_4e0;
  double local_4d8;
  undefined8 uStack_4d0;
  double local_4c8;
  double dStack_4c0;
  undefined1 local_4b8 [16];
  undefined8 *local_4a8;
  undefined1 auStack_4a0 [16];
  double dStack_490;
  undefined1 local_488 [16];
  double local_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  double local_440;
  double local_438;
  double local_430;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 local_400;
  code *local_3f8 [2];
  undefined8 local_3e8;
  undefined **local_3d8;
  undefined1 *local_3d0;
  float local_3c8;
  code *local_3b8 [2];
  undefined8 local_3a8;
  undefined **local_398;
  undefined1 *local_390;
  float local_388;
  undefined1 local_370 [64];
  longlong local_330;
  undefined4 local_328;
  undefined1 local_320 [8];
  longlong local_318;
  longlong local_308;
  int local_300;
  longlong local_2e8;
  int local_2e0;
  int local_2b4;
  undefined1 local_2b0 [8];
  undefined1 *local_2a8;
  int local_2a0;
  double local_1f8;
  undefined8 *puStack_1f0;
  undefined8 *local_1e8;
  double dStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined1 local_178 [8];
  undefined8 uStack_170;
  undefined8 *local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_6a8;
  dVar73 = *(double *)(param_2 + 0xa40);
  if (dVar73 == 0.0) goto LAB_1496decb1;
  lVar31 = 0xc;
  pdVar37 = (double *)((longlong)dVar73 + 0xa0);
  pdVar38 = local_5d8;
  while( true ) {
    if (lVar31 == 0) break;
    lVar31 = lVar31 + -1;
    *pdVar38 = *pdVar37;
    pdVar37 = pdVar37 + 1;
    pdVar38 = pdVar38 + 1;
  }
  lVar31 = *(longlong *)((longlong)dVar73 + 0x58);
  plVar30 = *(longlong **)((longlong)dVar73 + 0x60);
  if (plVar30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar30 + 1) = (int)plVar30[1] + 1;
    UNLOCK();
  }
  uVar19 = DAT_14c9974a8;
  if (*(longlong *)((longlong)dVar73 + 8) != 0 && lVar31 != 0) {
    local_688 = dVar73;
    local_680 = *(longlong *)((longlong)dVar73 + 8);
    local_620 = plVar30;
    FUN_1446ddc76(&local_5e0,"MassToLocal",1);
    lVar31 = FUN_1401466c8(lVar31,local_5e0,uVar19);
    local_608 = param_5;
    local_5e7 = 0;
    local_5f8 = 0;
    uStack_5f0 = 0;
    local_600 = 1;
    local_5fe = 1;
    FUN_144588c92(param_3,local_320,&local_608,lVar31 + 0x10);
    if (local_2e0 != local_2b4) {
      uVar39 = (uint)((ulonglong)DAT_14cc22418 >> 0x10);
      uVar35 = (uint)DAT_14cc22418 & 0xffff;
      if (local_2a8 == (undefined1 *)0x0) {
        local_2a8 = local_2b0;
      }
      uVar36 = local_2a0 - 1;
      iVar41 = *(int *)(local_2a8 +
                       (ulonglong)
                       ((int)((ulonglong)DAT_14cc22418 >> 0x20) +
                        ((uint)DAT_14cc22418 << 0x10 | uVar35) + (uVar39 << 0x13 | uVar39 & 0xffff)
                        + (uVar35 >> 4) & uVar36) * 4);
      if (iVar41 == -1) {
        plVar30 = (longlong *)0x0;
      }
      else {
        do {
          lVar31 = local_2e8 + (longlong)iVar41 * 0x20;
          if (*(longlong *)(local_2e8 + (longlong)iVar41 * 0x20) == DAT_14cc22418)
          goto LAB_1496dfcf8;
          iVar41 = *(int *)(lVar31 + 0x18);
        } while (iVar41 != -1);
        lVar31 = 0;
LAB_1496dfcf8:
        plVar30 = (longlong *)(lVar31 + 8);
        if (lVar31 == 0) {
          plVar30 = (longlong *)0x0;
        }
      }
      uVar39 = (uint)((ulonglong)DAT_14cc22420 >> 0x10);
      uVar35 = (uint)DAT_14cc22420 & 0xffff;
      iVar41 = *(int *)(local_2a8 +
                       (ulonglong)
                       ((int)((ulonglong)DAT_14cc22420 >> 0x20) +
                        ((uint)DAT_14cc22420 << 0x10 | uVar35) + (uVar39 << 0x13 | uVar39 & 0xffff)
                        + (uVar35 >> 4) & uVar36) * 4);
      if (iVar41 == -1) {
        plVar29 = (longlong *)0x0;
      }
      else {
        do {
          lVar31 = local_2e8 + (longlong)iVar41 * 0x20;
          if (*(longlong *)(local_2e8 + (longlong)iVar41 * 0x20) == DAT_14cc22420)
          goto LAB_1496dfd7d;
          iVar41 = *(int *)(lVar31 + 0x18);
        } while (iVar41 != -1);
        lVar31 = 0;
LAB_1496dfd7d:
        plVar29 = (longlong *)(lVar31 + 8);
        if (lVar31 == 0) {
          plVar29 = (longlong *)0x0;
        }
      }
      uVar39 = (uint)((ulonglong)DAT_14cc22428 >> 0x10);
      uVar35 = (uint)DAT_14cc22428 & 0xffff;
      iVar41 = *(int *)(local_2a8 +
                       (ulonglong)
                       ((int)((ulonglong)DAT_14cc22428 >> 0x20) +
                        ((uint)DAT_14cc22428 << 0x10 | uVar35) + (uVar39 << 0x13 | uVar39 & 0xffff)
                        + (uVar35 >> 4) & uVar36) * 4);
      if (iVar41 == -1) {
        auVar51._8_8_ = 0;
        auVar51._0_8_ = local_668._8_8_;
        local_668 = auVar51 << 0x40;
      }
      else {
        do {
          lVar31 = local_2e8 + (longlong)iVar41 * 0x20;
          if (*(longlong *)(local_2e8 + (longlong)iVar41 * 0x20) == DAT_14cc22428)
          goto LAB_1496dfdff;
          iVar41 = *(int *)(lVar31 + 0x18);
        } while (iVar41 != -1);
        lVar31 = 0;
LAB_1496dfdff:
        local_668._0_8_ = lVar31 + 8;
        if (lVar31 == 0) {
          local_668._0_8_ = 0;
        }
      }
      uVar39 = (uint)((ulonglong)DAT_14cc22430 >> 0x10);
      uVar35 = (uint)DAT_14cc22430 & 0xffff;
      uVar42 = uVar35 >> 4;
      in_R10 = (ulonglong)uVar42;
      iVar41 = *(int *)(local_2a8 +
                       (ulonglong)
                       ((int)((ulonglong)DAT_14cc22430 >> 0x20) +
                        ((uint)DAT_14cc22430 << 0x10 | uVar35) + (uVar39 << 0x13 | uVar39 & 0xffff)
                        + uVar42 & uVar36) * 4);
      while (iVar41 != -1) {
        lVar31 = local_2e8 + (longlong)iVar41 * 0x20;
        if (*(longlong *)(local_2e8 + (longlong)iVar41 * 0x20) == DAT_14cc22430) goto LAB_1496dfe59;
        iVar41 = *(int *)(lVar31 + 0x18);
      }
      lVar31 = 0;
LAB_1496dfe59:
      lVar43 = lVar31 + 8;
      if (lVar31 == 0) {
        lVar43 = 0;
      }
      local_658._0_8_ = lVar43;
      if (plVar30 != (longlong *)0x0) {
        local_4f8._0_4_ = 0;
        local_4f8._4_4_ = 0;
        uStack_4f0._0_4_ = 0;
        local_518 = ZEXT816(0);
        uStack_4f0._4_4_ = 0x80;
        uStack_4e8._0_4_ = 0xffffffff;
        uStack_4e8._4_4_ = 0;
        local_4d8 = 0.0;
        uStack_4d0._0_4_ = 0;
        lVar31 = plVar30[1];
        local_678 = plVar29;
        if ((longlong)(int)lVar31 != 0) {
          lVar43 = *plVar30;
          lVar27 = 0;
          dVar73 = local_688;
          do {
            uVar39 = *(uint *)(lVar43 + 0xc + lVar27);
            if (((((((ulonglong)uVar39 != 0xffffffff) &&
                   (lVar32 = *(longlong *)(lVar43 + lVar27), lVar32 != 0)) &&
                  (*(int *)(lVar32 + 0x30) == *(int *)(lVar43 + 8 + lVar27))) &&
                 ((-1 < (int)uVar39 && ((int)uVar39 < *(int *)(lVar32 + 0x28))))) &&
                ((*(longlong *)(lVar32 + 8) != 0 &&
                 ((lVar32 = *(longlong *)(*(longlong *)(lVar32 + 0x20) + (ulonglong)uVar39 * 8),
                  lVar32 != 0 &&
                  (lVar40 = (longlong)
                            *(int *)(*(longlong *)((longlong)dVar73 + 0x410) +
                                    (longlong)*(int *)(lVar32 + 8) * 4), lVar40 != -1)))))) &&
               (plVar30 = *(longlong **)(*(longlong *)((longlong)dVar73 + 0x340) + lVar40 * 8),
               plVar30 != (longlong *)0x0)) {
              in_R10 = *(ulonglong *)(*plVar30 + 0x2c0);
              lVar40 = (longlong)(int)plVar30[1] * 0x10;
              if (*(char *)(in_R10 + 0xb + lVar40) == '\x02') {
                uVar44 = *(ulonglong *)(*(longlong *)(*plVar30 + 0x5a8) + lVar40);
                if (uVar44 == 0) {
                  *(byte *)(in_R10 + 0xd + lVar40) = *(byte *)(lVar32 + 0xc) ^ 1;
                }
                else {
                  if (*(byte *)(uVar44 + 0xc) < 3) {
                    uVar44 = 0;
                  }
                  local_178 = (undefined1  [8])uVar44;
                  dVar73 = local_688;
                  if (uVar44 != 0) {
                    uVar39 = ((uint)(uVar44 >> 0x14) & 0xffff ^ (uint)(uVar44 >> 4)) * -0x7a143595;
                    uVar39 = (uVar39 >> 0xd ^ uVar39) * -0x3d4d51cb;
                    plVar29 = (longlong *)FUN_1429d374a(local_518,uVar39 >> 0x10 ^ uVar39);
                    iVar41 = (int)plVar29[1];
                    *(uint *)(plVar29 + 1) = iVar41 + 1U;
                    if (*(uint *)((longlong)plVar29 + 0xc) < iVar41 + 1U) {
                      FUN_1406b7a4a(plVar29,iVar41);
                    }
                    *(longlong **)(*plVar29 + (longlong)iVar41 * 8) = plVar30;
                    dVar73 = local_688;
                  }
                }
              }
            }
            lVar27 = lVar27 + 0x10;
          } while ((longlong)(int)lVar31 * 0x10 != lVar27);
        }
        local_1f8 = 2.12199579096527e-314;
        puStack_1f0 = &local_508;
        local_1e8 = (undefined8 *)&DAT_ffffffff;
        dStack_1e0 = (double)((ulonglong)dStack_1e0 & 0xffffffff00000000);
        iVar41 = 0;
        if ((int)uStack_4f0 != 0) {
          FUN_1449c0562(&local_1f8);
          iVar41 = (int)uStack_4f0;
        }
        uStack_160 = local_1e8;
        puVar2 = uStack_160;
        local_158 = dStack_1e0;
        local_168 = puStack_1f0;
        uStack_170 = local_1f8;
        local_178 = (undefined1  [8])local_518;
        uStack_160._4_4_ = (int)((ulonglong)local_1e8 >> 0x20);
        if ((uStack_160._4_4_ != iVar41) || (puStack_1f0 != &local_508)) {
          auVar34 = (undefined1  [8])local_518;
          iVar26 = uStack_160._4_4_;
          uStack_160 = puVar2;
          do {
            lVar31 = *(longlong *)auVar34;
            lVar43 = (longlong)iVar26 * 0x20;
            local_1f8 = *(double *)(lVar31 + lVar43);
            puStack_1f0 = (undefined8 *)0x0;
            iVar26 = *(int *)(lVar31 + 0x10 + lVar43);
            _Src = *(void **)(lVar31 + 8 + lVar43);
            local_1e8 = (undefined8 *)CONCAT44(local_1e8._4_4_,iVar26);
            if ((longlong)iVar26 != 0) {
              FUN_140509e62(&puStack_1f0,iVar26,0);
              memcpy(puStack_1f0,_Src,(longlong)iVar26 << 3);
              if ((longlong)(int)local_1e8 != 0) {
                lVar31 = 0;
                lVar43 = 0;
                do {
                  puVar5 = *(ulonglong **)((longlong)puStack_1f0 + lVar31);
                  lVar27 = lVar43;
                  if ((puVar5 != (ulonglong *)0x0) && (2 < *(byte *)((longlong)puVar5 + 0xc))) {
                    in_R10 = *puVar5;
                    lVar32 = (longlong)(int)puVar5[1] * 0x10;
                    if (*(char *)(*(longlong *)(in_R10 + 0x2c0) + 0xd + lVar32) == '\x01') {
                      in_R10 = *(ulonglong *)(in_R10 + 0x5a8);
                      lVar32 = *(longlong *)(in_R10 + lVar32);
                      if ((lVar32 != 0) &&
                         (in_R10 = CONCAT71((int7)(in_R10 >> 8),lVar43 != 0), lVar27 = lVar32,
                         lVar43 != 0 && lVar32 != lVar43)) goto LAB_1496e0235;
                    }
                  }
                  lVar43 = lVar27;
                  lVar31 = lVar31 + 8;
                } while ((longlong)(int)local_1e8 * 8 != lVar31);
                if (lVar43 != 0) {
LAB_1496e0235:
                  if (*(byte *)(lVar43 + 0xc) < 3) {
                    lVar43 = 0;
                  }
                  FUN_1429c4846(*(longlong *)(local_680 + 0x9c8) + 0x448,local_370,lVar43);
                  local_328 = 0;
                  if (local_330 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_140a356f6(local_370);
                }
              }
              if (puStack_1f0 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            uStack_160 = (undefined8 *)
                         CONCAT44(uStack_160._4_4_,(uint)uStack_160 & ~uStack_170._4_4_);
            FUN_1449c0562(&uStack_170);
            auVar34 = local_178;
            iVar26 = uStack_160._4_4_;
            puVar2 = uStack_160;
          } while (local_178 != (undefined1  [8])local_518 ||
                   (local_168 != &local_508 || uStack_160._4_4_ != iVar41));
        }
        uStack_160 = puVar2;
        uStack_4d0._0_4_ = 0;
        if (local_4d8 != 0.0) {
          FUN_1400020a8();
        }
        FUN_1457a8144(local_518);
        plVar29 = local_678;
      }
      dVar73 = local_688;
      if (*(char *)((longlong)local_688 + 0x1c0) < '\0') {
        if (plVar29 != (longlong *)0x0) goto LAB_1496e033b;
      }
      else if ((plVar29 != (longlong *)0x0) &&
              ((*(byte *)((longlong)local_688 + 0x1c1) & 0x10) != 0)) {
LAB_1496e033b:
        lVar31 = plVar29[1];
        if ((longlong)(int)lVar31 != 0) {
          pcVar6 = *(char **)(*(longlong *)(local_680 + 0x9d8) + 8);
          lVar43 = *plVar29;
          lVar27 = 0;
          do {
            uVar39 = *(uint *)(lVar43 + 0xc + lVar27);
            if ((((((ulonglong)uVar39 != 0xffffffff) &&
                  (lVar32 = *(longlong *)(lVar43 + lVar27), lVar32 != 0)) &&
                 (*(int *)(lVar32 + 0x30) == *(int *)(lVar43 + 8 + lVar27))) &&
                (((-1 < (int)uVar39 && ((int)uVar39 < *(int *)(lVar32 + 0x28))) &&
                 ((*(longlong *)(lVar32 + 8) != 0 &&
                  ((lVar32 = *(longlong *)(*(longlong *)(lVar32 + 0x20) + (ulonglong)uVar39 * 8),
                   lVar32 != 0 &&
                   (lVar40 = (longlong)
                             *(int *)(*(longlong *)((longlong)local_688 + 0x410) +
                                     (longlong)*(int *)(lVar32 + 8) * 4), lVar40 != -1)))))))) &&
               ((plVar30 = *(longlong **)(*(longlong *)((longlong)local_688 + 0x340) + lVar40 * 8),
                plVar30 != (longlong *)0x0 &&
                (*(char *)(*(longlong *)(*plVar30 + 0x2c0) + 0xb + (longlong)(int)plVar30[1] * 0x10)
                 == '\x02')))) {
              local_518._0_4_ = 1;
              local_488._0_5_ = 0xffffffff;
              local_518._8_8_ = dVar73;
              dVar67 = *(double *)(lVar32 + 0x10) * local_598;
              dVar59 = *(double *)(lVar32 + 0x18) * dStack_590;
              dVar75 = *(double *)(lVar32 + 0x20) * local_588;
              dVar10 = dVar59 * local_5d8[0] - dVar67 * local_5d8[1];
              dVar72 = dVar75 * local_5d8[1] - dVar59 * local_5d8[2];
              dVar74 = dVar67 * local_5d8[2] - dVar75 * local_5d8[0];
              dVar72 = dVar72 + dVar72;
              dVar74 = dVar74 + dVar74;
              dVar10 = dVar10 + dVar10;
              local_508 = (dVar10 * local_5d8[1] - dVar74 * local_5d8[2]) +
                          local_5d8[3] * dVar72 + dVar67 + local_5b8;
              uStack_500 = (local_5d8[2] * dVar72 - local_5d8[0] * dVar10) +
                           local_5d8[3] * dVar74 + dVar59 + dStack_5b0;
              local_4f8 = dVar10 * local_5d8[3] + dVar75 +
                          (dVar74 * local_5d8[0] - dVar72 * local_5d8[1]) + local_5a8;
              dVar67 = *(double *)(lVar32 + 0x28) * local_598;
              dVar59 = *(double *)(lVar32 + 0x30) * dStack_590;
              dVar10 = *(double *)(lVar32 + 0x38) * local_588;
              dVar72 = dVar59 * local_5d8[0] - local_5d8[1] * dVar67;
              dVar74 = dVar10 * local_5d8[1] - local_5d8[2] * dVar59;
              dVar75 = dVar67 * local_5d8[2] - local_5d8[0] * dVar10;
              dVar74 = dVar74 + dVar74;
              dVar75 = dVar75 + dVar75;
              dVar72 = dVar72 + dVar72;
              dStack_4e0 = dVar72 * local_5d8[3] + dVar10 +
                           (dVar75 * local_5d8[0] - dVar74 * local_5d8[1]);
              uStack_4f0 = (dVar72 * local_5d8[1] - dVar75 * local_5d8[2]) +
                           local_5d8[3] * dVar74 + dVar67;
              uStack_4e8 = (local_5d8[2] * dVar74 - local_5d8[0] * dVar72) +
                           local_5d8[3] * dVar75 + dVar59;
              local_4c8 = *(double *)(lVar32 + 0x50);
              local_4d8 = *(double *)(lVar32 + 0x40);
              uStack_4d0._0_4_ = (undefined4)*(undefined8 *)(lVar32 + 0x48);
              uStack_4d0._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar32 + 0x48) >> 0x20);
              dStack_4c0 = (double)*(float *)(lVar32 + 0x58);
              local_4b8._0_8_ = *(undefined8 *)(lVar32 + 0x60);
              local_4b8._8_8_ = *(undefined8 *)(lVar32 + 0x68);
              local_4a8 = *(undefined8 **)(lVar32 + 0x70);
              auStack_4a0._0_8_ = *(undefined8 *)(lVar32 + 0x78);
              auStack_4a0._8_8_ = *(undefined8 *)(lVar32 + 0x80);
              dStack_490 = *(double *)(lVar32 + 0x88);
              FUN_1400fd046(local_4b8,local_178,local_5d8);
              local_4a8 = local_168;
              local_4b8 = _local_178;
              dStack_490 = dStack_150;
              auStack_4a0._8_8_ = local_158;
              auStack_4a0._0_8_ = uStack_160;
              local_518._0_4_ =
                   *(byte *)((longlong)dVar73 + 0x1c1) >> 3 & 2 |
                   (uint)(*(byte *)((longlong)dVar73 + 0x1c0) >> 7);
              if (*pcVar6 == '\x01') {
                cVar24 = FUN_146ef0444(pcVar6,local_518);
                if (cVar24 == '\0') goto LAB_1496e0b5c;
              }
              local_388 = (float)*(double *)(local_680 + 0x1f8);
              local_3a8 = 0;
              local_398 = &PTR_LAB_14bddfaf0;
              local_390 = local_518;
              local_3b8[0] = FUN_144590ed8;
              local_178._0_4_ = 1;
              FUN_1496e143c(*(undefined8 *)(local_680 + 0x9d0),local_178,local_3b8);
            }
LAB_1496e0b5c:
            lVar27 = lVar27 + 0x10;
          } while ((longlong)(int)lVar31 * 0x10 != lVar27);
        }
      }
      bVar25 = *(byte *)((longlong)local_688 + 0x1c1);
      if (((longlong *)local_658._0_8_ == (longlong *)0x0) || ((bVar25 & 2) == 0)) {
LAB_1496e0bf8:
      }
      else {
        lVar31 = *(longlong *)(local_658._0_8_ + 8);
        if ((longlong)(int)lVar31 != 0) {
          local_678 = *(longlong **)(*(longlong *)(local_680 + 0x9d8) + 0x10);
          lVar43 = *(longlong *)local_658._0_8_;
          lVar27 = 0;
          do {
            uVar39 = *(uint *)(lVar43 + 0xc + lVar27);
            if (((((ulonglong)uVar39 != 0xffffffff) &&
                 (lVar32 = *(longlong *)(lVar43 + lVar27), lVar32 != 0)) &&
                (*(int *)(lVar32 + 0x30) == *(int *)(lVar43 + 8 + lVar27))) &&
               (((((-1 < (int)uVar39 && ((int)uVar39 < *(int *)(lVar32 + 0x28))) &&
                  ((*(longlong *)(lVar32 + 8) != 0 &&
                   ((lVar32 = *(longlong *)(*(longlong *)(lVar32 + 0x20) + (ulonglong)uVar39 * 8),
                    lVar32 != 0 &&
                    (lVar40 = (longlong)
                              *(int *)(*(longlong *)((longlong)local_688 + 0x410) +
                                      (longlong)*(int *)(lVar32 + 8) * 4), lVar40 != -1)))))) &&
                 (plVar30 = *(longlong **)(*(longlong *)((longlong)local_688 + 0x340) + lVar40 * 8),
                 plVar30 != (longlong *)0x0)) &&
                (*(char *)(*(longlong *)(*plVar30 + 0x2c0) + 0xb + (longlong)(int)plVar30[1] * 0x10)
                 == '\x02')))) {
              memset(local_518,0,0x88);
              local_4c8 = local_688;
              dVar75 = *(double *)(lVar32 + 0x10) * local_598;
              dVar10 = *(double *)(lVar32 + 0x18) * dStack_590;
              dVar73 = *(double *)(lVar32 + 0x20) * local_588;
              dVar67 = dVar10 * local_5d8[0] - dVar75 * local_5d8[1];
              dVar59 = dVar73 * local_5d8[1] - dVar10 * local_5d8[2];
              dVar72 = dVar75 * local_5d8[2] - dVar73 * local_5d8[0];
              dVar59 = dVar59 + dVar59;
              dVar72 = dVar72 + dVar72;
              dVar67 = dVar67 + dVar67;
              dVar10 = (local_5d8[2] * dVar59 - local_5d8[0] * dVar67) +
                       local_5d8[3] * dVar72 + dVar10 + dStack_5b0;
              local_508 = dVar67 * local_5d8[3] + dVar73 +
                          (dVar72 * local_5d8[0] - dVar59 * local_5d8[1]) + local_5a8;
              local_518._8_4_ = SUB84(dVar10,0);
              local_518._0_8_ =
                   (dVar67 * local_5d8[1] - dVar72 * local_5d8[2]) + local_5d8[3] * dVar59 + dVar75
                   + local_5b8;
              local_518._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
              dVar10 = *(double *)(lVar32 + 0x28) * local_598;
              dVar67 = *(double *)(lVar32 + 0x30) * dStack_590;
              dVar75 = *(double *)(lVar32 + 0x38) * local_588;
              dVar59 = dVar67 * local_5d8[0] - local_5d8[1] * dVar10;
              dVar72 = dVar75 * local_5d8[1] - local_5d8[2] * dVar67;
              dVar73 = dVar10 * local_5d8[2] - local_5d8[0] * dVar75;
              dVar72 = dVar72 + dVar72;
              dVar73 = dVar73 + dVar73;
              dVar59 = dVar59 + dVar59;
              uStack_4f0 = dVar59 * local_5d8[3] + dVar75 +
                           (dVar73 * local_5d8[0] - dVar72 * local_5d8[1]);
              uStack_500 = (dVar59 * local_5d8[1] - dVar73 * local_5d8[2]) +
                           local_5d8[3] * dVar72 + dVar10;
              local_4f8 = (local_5d8[2] * dVar72 - local_5d8[0] * dVar59) +
                          local_5d8[3] * dVar73 + dVar67;
              local_4d8 = *(double *)(lVar32 + 0x50);
              dStack_4e0 = *(double *)(lVar32 + 0x48);
              uStack_4e8._0_4_ = (undefined4)*(undefined8 *)(lVar32 + 0x40);
              uStack_4e8._4_4_ = (uint)((ulonglong)*(undefined8 *)(lVar32 + 0x40) >> 0x20);
              dStack_4c0 = *(double *)(lVar32 + 0x58);
              local_4b8 = *(undefined1 (*) [16])(lVar32 + 0x60);
              local_4a8 = *(undefined8 **)(lVar32 + 0x70);
              auStack_4a0 = *(undefined1 (*) [16])(lVar32 + 0x78);
              FUN_1400fd046(&dStack_4c0,local_178,local_5d8);
              dStack_4c0 = (double)local_178;
              local_4b8._8_8_ = local_168;
              local_4b8._0_8_ = uStack_170;
              local_4a8 = uStack_160;
              auStack_4a0._8_8_ = dStack_150;
              auStack_4a0._0_8_ = local_158;
              if ((char)*local_678 == '\x01') {
                cVar24 = FUN_146ef03aa(local_678,local_518);
                if (cVar24 == '\0') goto LAB_1496e06f3;
              }
              local_3c8 = (float)*(double *)(local_680 + 0x1f8);
              local_3e8 = 0;
              local_3d8 = &PTR_LAB_14bddfb10;
              local_3f8[0] = FUN_144591008;
              local_178._0_4_ = 2;
              local_3d0 = local_518;
              FUN_1496e1520(*(undefined8 *)(local_680 + 0x9d0),local_178,local_3f8);
            }
LAB_1496e06f3:
            lVar27 = lVar27 + 0x10;
          } while ((longlong)(int)lVar31 * 0x10 != lVar27);
          bVar25 = *(byte *)((longlong)local_688 + 0x1c1);
          goto LAB_1496e0bf8;
        }
      }
      if ((bVar25 & 1) == 0) {
        if (((longlong *)local_668._0_8_ != (longlong *)0x0) && ((bVar25 & 0x20) != 0))
        goto LAB_1496e0c1d;
      }
      else if ((longlong *)local_668._0_8_ != (longlong *)0x0) {
LAB_1496e0c1d:
        lVar31 = *(longlong *)(local_668._0_8_ + 8);
        if ((longlong)(int)lVar31 != 0) {
          pcVar6 = (char *)**(undefined8 **)(local_680 + 0x9d8);
          lVar43 = *(longlong *)local_668._0_8_;
          lVar27 = 0;
          do {
            uVar39 = *(uint *)(lVar43 + 0xc + lVar27);
            if ((((((ulonglong)uVar39 != 0xffffffff) &&
                  (lVar32 = *(longlong *)(lVar43 + lVar27), lVar32 != 0)) &&
                 (*(int *)(lVar32 + 0x30) == *(int *)(lVar43 + 8 + lVar27))) &&
                ((-1 < (int)uVar39 && ((int)uVar39 < *(int *)(lVar32 + 0x28))))) &&
               ((*(longlong *)(lVar32 + 8) != 0 &&
                (lVar32 = *(longlong *)(*(longlong *)(lVar32 + 0x20) + (ulonglong)uVar39 * 8),
                lVar32 != 0)))) {
              memset(local_518,0,0xf9);
              local_418 = 0;
              uStack_410 = 0;
              local_408 = 0xffffffffffffffff;
              local_400 = 0;
              dVar75 = *(double *)(lVar32 + 8) * local_598;
              dVar10 = *(double *)(lVar32 + 0x10) * dStack_590;
              dVar73 = *(double *)(lVar32 + 0x18) * local_588;
              dVar67 = dVar10 * local_5d8[0] - dVar75 * local_5d8[1];
              dVar59 = dVar73 * local_5d8[1] - dVar10 * local_5d8[2];
              dVar72 = dVar75 * local_5d8[2] - dVar73 * local_5d8[0];
              dVar59 = dVar59 + dVar59;
              dVar72 = dVar72 + dVar72;
              dVar67 = dVar67 + dVar67;
              dVar10 = (local_5d8[2] * dVar59 - local_5d8[0] * dVar67) +
                       local_5d8[3] * dVar72 + dVar10 + dStack_5b0;
              local_508 = dVar67 * local_5d8[3] + dVar73 +
                          (dVar72 * local_5d8[0] - dVar59 * local_5d8[1]) + local_5a8;
              local_518._8_4_ = SUB84(dVar10,0);
              local_518._0_8_ =
                   (dVar67 * local_5d8[1] - dVar72 * local_5d8[2]) + local_5d8[3] * dVar59 + dVar75
                   + local_5b8;
              local_518._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
              dVar59 = *(double *)(lVar32 + 0x20) * local_598;
              dVar72 = *(double *)(lVar32 + 0x28) * dStack_590;
              dVar73 = *(double *)(lVar32 + 0x30) * local_588;
              dVar75 = dVar72 * local_5d8[0] - local_5d8[1] * dVar59;
              dVar10 = dVar73 * local_5d8[1] - local_5d8[2] * dVar72;
              dVar67 = dVar59 * local_5d8[2] - local_5d8[0] * dVar73;
              dVar10 = dVar10 + dVar10;
              dVar67 = dVar67 + dVar67;
              dVar75 = dVar75 + dVar75;
              uStack_4f0 = dVar75 * local_5d8[3] + dVar73 +
                           (dVar67 * local_5d8[0] - dVar10 * local_5d8[1]);
              uStack_500 = (dVar75 * local_5d8[1] - dVar67 * local_5d8[2]) +
                           local_5d8[3] * dVar10 + dVar59;
              local_4f8 = (local_5d8[2] * dVar10 - local_5d8[0] * dVar75) +
                          local_5d8[3] * dVar67 + dVar72;
              dVar59 = *(double *)(lVar32 + 0x38) * local_598;
              dVar72 = *(double *)(lVar32 + 0x40) * dStack_590;
              dVar73 = *(double *)(lVar32 + 0x48) * local_588;
              dVar75 = dVar72 * local_5d8[0] - local_5d8[1] * dVar59;
              dVar10 = dVar73 * local_5d8[1] - local_5d8[2] * dVar72;
              dVar67 = dVar59 * local_5d8[2] - local_5d8[0] * dVar73;
              dVar10 = dVar10 + dVar10;
              dVar67 = dVar67 + dVar67;
              dVar75 = dVar75 + dVar75;
              local_4d8 = dVar75 * local_5d8[3] + dVar73 +
                          (dVar67 * local_5d8[0] - dVar10 * local_5d8[1]);
              uStack_4e8 = (dVar75 * local_5d8[1] - dVar67 * local_5d8[2]) +
                           local_5d8[3] * dVar10 + dVar59;
              dVar73 = (local_5d8[2] * dVar10 - local_5d8[0] * dVar75) +
                       local_5d8[3] * dVar67 + dVar72;
              auVar15._8_4_ = SUB84(dVar73,0);
              auVar15._0_8_ = uStack_4e8;
              auVar15._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
              dStack_4e0 = auVar15._8_8_;
              dVar59 = *(double *)(lVar32 + 0x50) * local_598;
              dVar72 = *(double *)(lVar32 + 0x58) * dStack_590;
              dVar73 = *(double *)(lVar32 + 0x60) * local_588;
              dVar75 = dVar72 * local_5d8[0] - local_5d8[1] * dVar59;
              dVar10 = dVar73 * local_5d8[1] - local_5d8[2] * dVar72;
              dVar67 = dVar59 * local_5d8[2] - local_5d8[0] * dVar73;
              dVar10 = dVar10 + dVar10;
              dVar67 = dVar67 + dVar67;
              dVar75 = dVar75 + dVar75;
              dStack_4c0 = dVar75 * local_5d8[3] + dVar73 +
                           (dVar67 * local_5d8[0] - dVar10 * local_5d8[1]);
              uStack_4d0 = (dVar75 * local_5d8[1] - dVar67 * local_5d8[2]) +
                           local_5d8[3] * dVar10 + dVar59;
              dVar73 = (local_5d8[2] * dVar10 - local_5d8[0] * dVar75) +
                       local_5d8[3] * dVar67 + dVar72;
              auVar68._8_4_ = SUB84(dVar73,0);
              auVar68._0_8_ = uStack_4d0;
              auVar68._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
              local_4c8 = auVar68._8_8_;
              dVar59 = *(double *)(lVar32 + 0x68) * local_598;
              dVar72 = *(double *)(lVar32 + 0x70) * dStack_590;
              dVar73 = *(double *)(lVar32 + 0x78) * local_588;
              dVar75 = dVar72 * local_5d8[0] - local_5d8[1] * dVar59;
              dVar10 = dVar73 * local_5d8[1] - local_5d8[2] * dVar72;
              dVar67 = dVar59 * local_5d8[2] - local_5d8[0] * dVar73;
              dVar10 = dVar10 + dVar10;
              dVar67 = dVar67 + dVar67;
              dVar75 = dVar75 + dVar75;
              local_4a8 = (undefined8 *)
                          (dVar75 * local_5d8[3] + dVar73 +
                          (dVar67 * local_5d8[0] - dVar10 * local_5d8[1]));
              dVar73 = (local_5d8[2] * dVar10 - local_5d8[0] * dVar75) +
                       local_5d8[3] * dVar67 + dVar72;
              local_4b8._8_4_ = SUB84(dVar73,0);
              local_4b8._0_8_ =
                   (dVar75 * local_5d8[1] - dVar67 * local_5d8[2]) + local_5d8[3] * dVar10 + dVar59;
              local_4b8._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
              dVar59 = *(double *)(lVar32 + 0x80) * local_598;
              dVar72 = *(double *)(lVar32 + 0x88) * dStack_590;
              dVar73 = *(double *)(lVar32 + 0x90) * local_588;
              dVar75 = dVar72 * local_5d8[0] - local_5d8[1] * dVar59;
              dVar10 = dVar73 * local_5d8[1] - local_5d8[2] * dVar72;
              dVar67 = dVar59 * local_5d8[2] - local_5d8[0] * dVar73;
              dVar10 = dVar10 + dVar10;
              dVar67 = dVar67 + dVar67;
              dVar75 = dVar75 + dVar75;
              dStack_490 = dVar75 * local_5d8[3] + dVar73 +
                           (dVar67 * local_5d8[0] - dVar10 * local_5d8[1]);
              dVar73 = (local_5d8[2] * dVar10 - local_5d8[0] * dVar75) +
                       local_5d8[3] * dVar67 + dVar72;
              auStack_4a0._8_4_ = SUB84(dVar73,0);
              auStack_4a0._0_8_ =
                   (dVar75 * local_5d8[1] - dVar67 * local_5d8[2]) + local_5d8[3] * dVar10 + dVar59;
              auStack_4a0._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
              dVar10 = *(double *)(lVar32 + 0x98) * local_598;
              dVar67 = *(double *)(lVar32 + 0xa0) * dStack_590;
              dVar75 = *(double *)(lVar32 + 0xa8) * local_588;
              dVar59 = dVar67 * local_5d8[0] - local_5d8[1] * dVar10;
              dVar72 = dVar75 * local_5d8[1] - local_5d8[2] * dVar67;
              dVar73 = dVar10 * local_5d8[2] - local_5d8[0] * dVar75;
              dVar72 = dVar72 + dVar72;
              dVar73 = dVar73 + dVar73;
              dVar59 = dVar59 + dVar59;
              local_478 = dVar59 * local_5d8[3] + dVar75 +
                          (dVar73 * local_5d8[0] - dVar72 * local_5d8[1]);
              dVar75 = (local_5d8[2] * dVar72 - local_5d8[0] * dVar59) +
                       local_5d8[3] * dVar73 + dVar67;
              local_488._8_4_ = SUB84(dVar75,0);
              local_488._0_8_ =
                   (dVar59 * local_5d8[1] - dVar73 * local_5d8[2]) + local_5d8[3] * dVar72 + dVar10;
              local_488._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
              local_470 = *(undefined8 *)(lVar32 + 0xb0);
              uStack_468 = *(undefined8 *)(lVar32 + 0xb8);
              local_460 = *(undefined8 *)(lVar32 + 0xc0);
              local_448 = *(undefined8 *)(lVar32 + 0xd8);
              local_458 = *(undefined8 *)(lVar32 + 200);
              uStack_450 = *(undefined8 *)(lVar32 + 0xd0);
              local_440 = (double)*(float *)(lVar32 + 0xe0);
              local_438 = (double)*(float *)(lVar32 + 0xe4);
              local_430 = (double)*(float *)(lVar32 + 0xe8);
              if (*pcVar6 == '\x01') {
                cVar24 = FUN_146ef02d4(pcVar6,local_518);
                if (cVar24 == '\0') goto LAB_1496e13a6;
              }
              local_528 = (float)*(double *)(local_680 + 0x1f8);
              local_548 = 0;
              local_538 = &PTR_LAB_14bddfb30;
              local_520 = local_688;
              local_558[0] = FUN_144591122;
              auVar70._12_4_ = 0;
              auVar70._0_12_ = stack0xfffffffffffffe8c;
              _local_178 = auVar70 << 0x20;
              local_530 = local_518;
              FUN_1496e1604(*(undefined8 *)(local_680 + 0x9d0),local_178,local_558);
            }
LAB_1496e13a6:
            lVar27 = lVar27 + 0x10;
          } while ((longlong)(int)lVar31 * 0x10 != lVar27);
        }
      }
    }
    if (0 < (longlong)local_300) {
      lVar43 = 0x50;
      lVar31 = 0;
      uVar76 = 0xe0000000;
      uVar77 = 0x3e45798e;
      uVar78 = 0xe0000000;
      uVar79 = 0x3e45798e;
      dVar73 = local_688;
      do {
        lVar27 = (longlong)
                 *(int *)(*(longlong *)((longlong)dVar73 + 0x410) +
                         (longlong)*(int *)(local_318 + lVar31 * 4) * 4);
        if ((lVar27 != -1) &&
           (plVar30 = *(longlong **)(*(longlong *)((longlong)dVar73 + 0x340) + lVar27 * 8),
           plVar30 != (longlong *)0x0)) {
          lVar27 = (longlong)(int)plVar30[1];
          if (*(char *)(*(longlong *)(*plVar30 + 0x2c0) + 0xb + lVar27 * 0x10) == '\x02') {
            pauVar4 = (undefined1 (*) [16])(local_308 + -0x50 + lVar43);
            dVar72 = *(double *)*pauVar4;
            dVar74 = *(double *)(*pauVar4 + 8);
            local_518 = *pauVar4;
            pdVar37 = (double *)(local_308 + -0x40 + lVar43);
            dVar11 = *pdVar37;
            dVar12 = pdVar37[1];
            pdVar37 = (double *)(local_308 + -0x30 + lVar43);
            dVar59 = *pdVar37;
            dVar18 = pdVar37[1];
            pdVar37 = (double *)(local_308 + -0x20 + lVar43);
            dVar16 = *pdVar37;
            dVar67 = pdVar37[1];
            local_668 = *(undefined1 (*) [16])(local_308 + -0x10 + lVar43);
            auVar51 = *(undefined1 (*) [16])(local_308 + lVar43);
            dVar75 = auVar51._0_8_;
            dVar10 = auVar51._8_8_;
            lVar32 = *(longlong *)(*plVar30 + 0x530);
            pdVar37 = (double *)(lVar32 + lVar27 * 0x18);
            *pdVar37 = dVar59;
            pdVar37[1] = dVar18;
            *(double *)(lVar32 + 0x10 + lVar27 * 0x18) = dVar16;
            lVar27 = *(longlong *)(*plVar30 + 0x548);
            lVar32 = (longlong)(int)plVar30[1] * 0x10;
            *(float *)(lVar27 + lVar32) = (float)dVar72;
            *(float *)(lVar27 + 4 + lVar32) = (float)dVar74;
            *(float *)(lVar27 + 8 + lVar32) = (float)dVar11;
            *(float *)(lVar27 + 0xc + lVar32) = (float)dVar12;
            lVar27 = *(longlong *)(*plVar30 + 0x530);
            lVar40 = (longlong)(int)plVar30[1] * 0x18;
            lVar32 = *(longlong *)(*plVar30 + 0x28);
            *(undefined8 *)(lVar32 + 0x10 + lVar40) = *(undefined8 *)(lVar27 + 0x10 + lVar40);
            puVar2 = (undefined8 *)(lVar27 + lVar40);
            uVar19 = puVar2[1];
            puVar3 = (undefined8 *)(lVar32 + lVar40);
            *puVar3 = *puVar2;
            puVar3[1] = uVar19;
            lVar27 = (longlong)(int)plVar30[1] * 0x10;
            puVar2 = (undefined8 *)(*(longlong *)(*plVar30 + 0x548) + lVar27);
            uVar19 = puVar2[1];
            puVar3 = (undefined8 *)(*(longlong *)(*plVar30 + 0x48) + lVar27);
            *puVar3 = *puVar2;
            puVar3[1] = uVar19;
            _local_178 = ZEXT816(0);
            local_168 = (undefined8 *)0x0;
            local_508._0_4_ = SUB84(dVar11,0);
            local_508._4_4_ = (undefined4)((ulonglong)dVar11 >> 0x20);
            uStack_500._0_4_ = SUB84(dVar12,0);
            uStack_500._4_4_ = (undefined4)((ulonglong)dVar12 >> 0x20);
            local_4f8._0_4_ = SUB84(dVar59,0);
            local_4f8._4_4_ = (undefined4)((ulonglong)dVar59 >> 0x20);
            uStack_4f0._0_4_ = SUB84(dVar18,0);
            uStack_4f0._4_4_ = (undefined4)((ulonglong)dVar18 >> 0x20);
            uStack_4e8._0_4_ = SUB84(dVar16,0);
            uStack_4e8._4_4_ = (uint)((ulonglong)dVar16 >> 0x20);
            local_4d8 = local_668._0_8_;
            uStack_4d0._0_4_ = local_668._8_4_;
            uStack_4d0._4_4_ = local_668._12_4_;
            dStack_4e0 = dVar67;
            local_4c8 = dVar75;
            dStack_4c0 = dVar10;
            FUN_144aa485a(*plVar30,(int)plVar30[1],local_518,local_178);
            lVar27 = *plVar30;
            lVar32 = (longlong)(int)plVar30[1];
            if ((*(char *)(*(longlong *)(lVar27 + 0x2c0) + 0xd + lVar32 * 0x10) == '\0') &&
               ((*(char *)(*(longlong *)(lVar27 + 0xe0) + lVar32) != '\0' || (DAT_14c9978a0 != 0))))
            {
              lVar40 = *(longlong *)(local_680 + 0x9c8);
              uVar80 = *(undefined4 *)(*(longlong *)(lVar27 + 0x80) + lVar32 * 4);
              plVar29 = (longlong *)
                        FUN_1447eab44(lVar40 + 0x360,uVar80,
                                      CONCAT71((int7)(int3)((uint)(int)plVar30[1] >> 8),1));
              *(undefined1 *)(plVar29 + 8) = 2;
              local_518._8_8_ = plVar30;
              local_518._0_8_ =
                   *(undefined8 *)(*(longlong *)(*plVar30 + 0xb0) + (longlong)(int)plVar30[1] * 8);
              local_508._0_4_ =
                   *(undefined4 *)(*(longlong *)(*plVar30 + 0x80) + (longlong)(int)plVar30[1] * 4);
              local_4f8._4_4_ = 0;
              uStack_4f0._0_4_ = 0;
              uStack_4f0._4_4_ = 0;
              uStack_4e8._0_4_ = 0;
              local_508._4_4_ = 0;
              uStack_500._0_4_ = 0;
              uStack_500._4_4_ = 0;
              local_4f8._0_4_ = 0;
              uStack_4e8._4_4_ = uStack_4e8._4_4_ & 0xffffff00;
              FUN_144b06ac6(plVar30);
              FUN_144b06a28(plVar30,(longlong)&local_4f8 + 4);
              uStack_4e8._4_4_ = CONCAT31(uStack_4e8._5_3_,1);
              auVar46._4_4_ = local_508._4_4_;
              auVar46._0_4_ = (undefined4)local_508;
              auVar46._8_4_ = (undefined4)uStack_500;
              auVar46._12_4_ = uStack_500._4_4_;
              auVar55._4_4_ = local_4f8._4_4_;
              auVar55._0_4_ = (undefined4)local_4f8;
              auVar55._8_4_ = (int)uStack_4f0;
              auVar55._12_4_ = uStack_4f0._4_4_;
              *(undefined1 (*) [16])(plVar29 + 4) = auVar55;
              *(undefined1 (*) [16])(plVar29 + 2) = auVar46;
              *plVar29 = local_518._0_8_;
              plVar29[1] = local_518._8_8_;
              plVar29[6] = CONCAT44(uStack_4e8._4_4_,(undefined4)uStack_4e8);
              *(undefined2 *)(plVar29 + 7) =
                   *(undefined2 *)(*(longlong *)(*plVar30 + 0x170) + (longlong)(int)plVar30[1] * 2);
              plVar28 = (longlong *)FUN_1447eab44(lVar40 + 0x380,uVar80,1);
              for (lVar27 = 9; lVar27 != 0; lVar27 = lVar27 + -1) {
                *plVar28 = *plVar29;
                plVar29 = plVar29 + 1;
                plVar28 = plVar28 + 1;
              }
              lVar27 = *plVar30;
              lVar32 = (longlong)(int)plVar30[1];
            }
            auVar15 = _DAT_149934d80;
            plVar29 = *(longlong **)(*(longlong *)(lVar27 + 0x5a8) + lVar32 * 0x10);
            uStack_4f0 = (double)CONCAT44(uStack_4f0._4_4_,(int)uStack_4f0);
            uStack_4d0 = (double)CONCAT44(uStack_4d0._4_4_,(undefined4)uStack_4d0);
            if ((plVar29 != (longlong *)0x0) &&
               (uStack_4f0 = (double)CONCAT44(uStack_4f0._4_4_,(int)uStack_4f0),
               uStack_4d0 = (double)CONCAT44(uStack_4d0._4_4_,(undefined4)uStack_4d0),
               2 < *(byte *)((longlong)plVar29 + 0xc))) {
              lVar40 = *plVar29;
              lVar33 = (longlong)(int)plVar29[1];
              uStack_4f0 = (double)CONCAT44(uStack_4f0._4_4_,(int)uStack_4f0);
              uStack_4d0 = (double)CONCAT44(uStack_4d0._4_4_,(undefined4)uStack_4d0);
              if ((*(byte *)(*(longlong *)(lVar40 + 0x680) + lVar33) & 1) != 0) {
                pdVar37 = *(double **)(lVar27 + 0x5c0);
                auVar68 = *(undefined1 (*) [16])(pdVar37 + lVar32 * 0xc + 8);
                auVar70 = *(undefined1 (*) [16])(pdVar37 + lVar32 * 0xc + 10);
                auVar61._8_8_ = -(ulonglong)((double)CONCAT44(uVar79,uVar78) < ABS(auVar68._8_8_));
                auVar61._0_8_ = -(ulonglong)((double)CONCAT44(uVar77,uVar76) < ABS(auVar68._0_8_));
                uVar39 = movmskpd((int)*(longlong *)(lVar40 + 0x680),auVar61);
                auVar62._8_8_ = -(ulonglong)((double)CONCAT44(uVar79,uVar78) < ABS(auVar70._8_8_));
                auVar62._0_8_ = -(ulonglong)((double)CONCAT44(uVar77,uVar76) < ABS(auVar70._0_8_));
                iVar41 = movmskpd((int)in_R10,auVar62);
                uVar39 = iVar41 << 2 | uVar39;
                in_R10 = (ulonglong)uVar39;
                if (uVar39 == 0) {
                  local_648 = DAT_14c8464a0;
                  dStack_640 = DAT_14c8464a8;
                  dStack_630 = DAT_14c8464b8;
                  local_638 = DAT_14c8464b0;
                  dStack_670 = dRam000000014c8464d8;
                  local_678 = DAT_14c8464d0;
                  local_658 = _DAT_14c8464c0;
                  dVar60 = DAT_14c846480;
                  dVar64 = DAT_14c846488;
                  dVar50 = DAT_14c846490;
                  dVar53 = DAT_14c846498;
                }
                else {
                  pdVar37 = pdVar37 + lVar32 * 0xc;
                  auVar55 = divpd(_DAT_149934d80,auVar68);
                  auVar46 = divpd(ZEXT816(0x3ff0000000000000),auVar70);
                  local_658._0_8_ =
                       -(ulonglong)((double)CONCAT44(uVar77,uVar76) < ABS(auVar68._0_8_)) &
                       auVar55._0_8_;
                  local_658._8_8_ =
                       -(ulonglong)((double)CONCAT44(uVar79,uVar78) < ABS(auVar68._8_8_)) &
                       auVar55._8_8_;
                  local_678 = (longlong *)
                              (-(ulonglong)((double)CONCAT44(uVar77,uVar76) < ABS(auVar70._0_8_)) &
                              auVar46._0_8_);
                  dVar60 = -*pdVar37;
                  dVar64 = -pdVar37[1];
                  dVar50 = pdVar37[2] * -1.0;
                  dVar53 = pdVar37[3] * 1.0;
                  dVar8 = pdVar37[4] * (double)local_658._0_8_;
                  dVar9 = pdVar37[5] * (double)local_658._8_8_;
                  dStack_670 = 0.0;
                  dVar65 = pdVar37[6] * (double)local_678;
                  dVar54 = dVar9 * dVar60 - dVar8 * dVar64;
                  dVar57 = dVar65 * dVar64 - dVar9 * dVar50;
                  dVar58 = dVar8 * dVar50 - dVar60 * dVar65;
                  dVar57 = dVar57 + dVar57;
                  dVar58 = dVar58 + dVar58;
                  dVar54 = dVar54 + dVar54;
                  local_648 = 0.0 - ((dVar54 * dVar64 - dVar58 * dVar50) + dVar53 * dVar57 + dVar8);
                  dStack_640 = 0.0 - (dVar54 * *pdVar37 + dVar50 * dVar57 + dVar53 * dVar58 + dVar9)
                  ;
                  local_638 = 0.0 - (dVar53 * dVar54 + dVar65 + (dVar58 * dVar60 - dVar57 * dVar64))
                  ;
                  dStack_630 = 0.0;
                }
                dVar58 = dStack_670;
                plVar28 = local_678;
                dVar8 = local_668._0_8_;
                dVar9 = local_668._8_8_;
                auVar68 = minpd(local_658,local_668);
                auVar20._8_8_ = dStack_670;
                auVar20._0_8_ = local_678;
                auVar70 = minpd(auVar20,auVar51);
                auVar69._8_8_ = -(ulonglong)(auVar68._8_8_ < 0.0);
                auVar69._0_8_ = -(ulonglong)(auVar68._0_8_ < 0.0);
                iVar41 = movmskpd((int)pdVar37,auVar69);
                auVar71._8_8_ = -(ulonglong)(auVar70._8_8_ < 0.0);
                auVar71._0_8_ = -(ulonglong)(auVar70._0_8_ < 0.0);
                uVar39 = movmskpd((int)lVar32 * 0x60,auVar71);
                uVar19 = local_658._0_8_;
                uVar23 = local_658._8_8_;
                if ((uVar39 & 0x3fffffff) == 0 && iVar41 == 0) {
                  local_518._0_8_ =
                       dVar64 * dVar11 * -1.0 +
                       dVar72 * dVar53 * 1.0 + dVar12 * dVar60 + dVar74 * dVar50;
                  local_518._8_8_ =
                       dVar60 * dVar11 * 1.0 +
                       dVar72 * dVar50 * -1.0 + dVar12 * dVar64 + dVar74 * dVar53;
                  auVar52._0_8_ =
                       dVar53 * dVar11 * 1.0 +
                       ((dVar72 * dVar64 * 1.0 + dVar12 * dVar50) - dVar74 * dVar60);
                  auVar52._8_8_ =
                       dVar50 * dVar11 * -1.0 +
                       ((dVar72 * dVar60 * -1.0 + dVar12 * dVar53) - dVar74 * dVar64);
                  dVar54 = local_648 * dVar8;
                  dVar57 = dStack_640 * dVar9;
                  dVar65 = local_638 * dVar75;
                  dVar49 = dStack_630 * dVar10;
                  dVar60 = dVar57 * dVar72 - dVar74 * dVar54;
                  dVar64 = dVar65 * dVar74 - dVar11 * dVar57;
                  dVar50 = dVar54 * dVar11 - dVar72 * dVar65;
                  dVar53 = dVar49 * dVar12 - dVar12 * dVar49;
                  dVar64 = dVar64 + dVar64;
                  dVar50 = dVar50 + dVar50;
                  dVar60 = dVar60 + dVar60;
                  dVar53 = dVar53 + dVar53;
                  dVar59 = dVar59 + (dVar60 * dVar74 - dVar11 * dVar50) + dVar12 * dVar64 + dVar54;
                  uStack_4f0 = dVar18 + (dVar64 * dVar11 - dVar60 * dVar72) +
                                        dVar12 * dVar50 + dVar57;
                  puVar2 = (undefined8 *)
                           (dVar16 + (dVar50 * dVar72 - dVar74 * dVar64) + dVar12 * dVar60 + dVar65)
                  ;
                  dVar67 = dVar67 + (dVar53 * dVar12 - dVar53 * dVar12) + dVar12 * dVar53 + dVar49;
                  uVar76 = 0xe0000000;
                  uVar77 = 0x3e45798e;
                  uVar78 = 0xe0000000;
                  uVar79 = 0x3e45798e;
                  local_618 = auVar51;
                }
                else {
                  dVar67 = dVar74 + dVar74;
                  dVar54 = dVar11 + dVar11;
                  dVar66 = dVar72 * (dVar72 + dVar72);
                  dVar57 = (dVar72 + dVar72) * dVar12;
                  local_158 = (dVar67 * dVar72 - dVar54 * dVar12) * dVar9;
                  dVar65 = (dVar54 * dVar74 - dVar57) * dVar75;
                  dStack_150 = (1.0 - (dVar11 * dVar54 + dVar66)) * dVar9;
                  dVar49 = (dVar67 * dVar72 + dVar54 * dVar12) * dVar8;
                  local_148 = (dVar54 * dVar74 + dVar57) * dVar9;
                  unique0x10001c60 = SUB84(dVar49,0);
                  local_178 = (undefined1  [8])((1.0 - (dVar11 * dVar54 + dVar74 * dVar67)) * dVar8)
                  ;
                  uStack_170._4_4_ = (int)((ulonglong)dVar49 >> 0x20);
                  local_168 = (undefined8 *)((dVar72 * dVar54 - dVar67 * dVar12) * dVar8);
                  uStack_160 = (undefined8 *)0x0;
                  local_128 = (1.0 - (dVar66 + dVar74 * dVar67)) * dVar75;
                  dVar57 = dVar75 * (double)local_678;
                  uStack_140 = 0;
                  local_138._8_4_ = SUB84(dVar65,0);
                  local_138._0_8_ = (dVar67 * dVar12 + dVar72 * dVar54) * dVar75;
                  local_138._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
                  uStack_120 = 0;
                  local_108._8_4_ = 0;
                  local_108._0_8_ = dVar16;
                  local_108._12_4_ = 0x3ff00000;
                  dVar72 = dVar64 + dVar64;
                  dVar11 = dVar50 + dVar50;
                  dVar67 = dVar60 * (dVar60 + dVar60);
                  local_1a8 = (1.0 - (dVar67 + dVar64 * dVar72)) * (double)local_678;
                  dVar12 = (dVar60 + dVar60) * dVar53;
                  dVar74 = (dVar11 * dVar64 - dVar12) * (double)local_678;
                  dVar16 = dVar8 * (double)local_658._0_8_;
                  dVar54 = dVar9 * (double)local_658._8_8_;
                  local_1f8 = ((double)DAT_149934d80 - (dVar50 * dVar11 + dVar64 * dVar72)) *
                              (double)local_658._0_8_;
                  dVar67 = (DAT_149934d80._8_8_ - (dVar50 * dVar11 + dVar67)) *
                           (double)local_658._8_8_;
                  puStack_1f0 = (undefined8 *)
                                ((dVar72 * dVar60 + dVar11 * dVar53) * (double)local_658._0_8_);
                  local_1c8 = (dVar11 * dVar64 + dVar12) * (double)local_658._8_8_;
                  local_1e8 = (undefined8 *)
                              ((dVar60 * dVar11 - dVar72 * dVar53) * (double)local_658._0_8_);
                  dStack_1e0 = 0.0;
                  local_1d8._8_4_ = SUB84(dVar67,0);
                  local_1d8._0_8_ = (dVar72 * dVar60 - dVar11 * dVar53) * (double)local_658._8_8_;
                  local_1d8._12_4_ = (int)((ulonglong)dVar67 >> 0x20);
                  uStack_1c0 = 0;
                  local_1b8._8_4_ = SUB84(dVar74,0);
                  local_1b8._0_8_ = (dVar72 * dVar53 + dVar60 * dVar11) * (double)local_678;
                  local_1b8._12_4_ = (int)((ulonglong)dVar74 >> 0x20);
                  uStack_1a0 = 0;
                  local_198 = local_648;
                  dStack_190 = dStack_640;
                  local_188 = local_638;
                  uStack_180 = 0x3ff0000000000000;
                  local_118 = dVar59;
                  dStack_110 = dVar18;
                  FUN_1447fea8d(local_518,&local_1f8,local_178);
                  FUN_144a1c686(local_518,0x3e45798ee0000000);
                  auVar47._8_8_ = -(ulonglong)(0.0 <= dVar54);
                  auVar47._0_8_ = -(ulonglong)(0.0 <= dVar16);
                  auVar51 = blendvpd(_DAT_149936790,auVar15,auVar47);
                  uVar44 = -(ulonglong)(0.0 <= dVar57);
                  dVar67 = (double)(~uVar44 & 0xbff0000000000000 | uVar44 & 0x3ff0000000000000);
                  dVar59 = auVar51._0_8_;
                  local_508 = (double)CONCAT44(local_508._4_4_,(undefined4)local_508) * dVar59;
                  local_518._8_8_ = (double)local_518._8_8_ * dVar59;
                  local_518._0_8_ = (double)local_518._0_8_ * dVar59;
                  dVar59 = auVar51._8_8_;
                  uStack_4e8 = (double)CONCAT44(uStack_4e8._4_4_,(undefined4)uStack_4e8) * dVar59;
                  uStack_4f0 = (double)CONCAT44(uStack_4f0._4_4_,(int)uStack_4f0) * dVar59;
                  local_4f8 = dVar59 * (double)CONCAT44(local_4f8._4_4_,(undefined4)local_4f8);
                  local_4c8 = local_4c8 * dVar67;
                  uStack_4d0 = (double)CONCAT44(uStack_4d0._4_4_,(undefined4)uStack_4d0) * dVar67;
                  local_4d8 = dVar67 * local_4d8;
                  FUN_14481fd10(&local_578,local_518);
                  dVar67 = local_568 * local_568 + local_578 * local_578;
                  dVar59 = dStack_560 * dStack_560 + dStack_570 * dStack_570;
                  auVar56._0_8_ = dVar67 + dVar59;
                  auVar56._8_8_ = dVar67 + dVar59;
                  uVar76 = (undefined4)DAT_149e1ecd0;
                  uVar77 = DAT_149e1ecd0._4_4_;
                  uVar78 = DAT_149e1ecd0._8_4_;
                  uVar79 = DAT_149e1ecd0._12_4_;
                  uVar44 = -(ulonglong)((double)DAT_149e1ecd0 <= auVar56._0_8_);
                  uVar45 = -(ulonglong)(DAT_149e1ecd0._8_8_ <= auVar56._8_8_);
                  auVar48._8_8_ = uVar45;
                  auVar48._0_8_ = uVar44;
                  auVar51 = sqrtpd(auVar56,auVar56);
                  auVar51 = divpd(auVar15,auVar51);
                  auVar63._0_8_ = auVar51._0_8_ * local_568;
                  auVar63._8_8_ = auVar51._8_8_ * dStack_560;
                  auVar52 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar63,auVar48);
                  local_518._0_8_ = (ulonglong)(local_578 * auVar51._0_8_) & uVar44;
                  local_518._8_8_ = (ulonglong)(dStack_570 * auVar51._8_8_) & uVar45;
                  dVar67 = 0.0;
                  lVar40 = *plVar29;
                  lVar33 = (longlong)(int)plVar29[1];
                  dVar59 = (double)local_4b8._0_8_;
                  uStack_4f0 = (double)local_4b8._8_8_;
                  puVar2 = local_4a8;
                }
                uStack_4d0 = dVar9 * (double)uVar23;
                local_4d8 = dVar8 * (double)uVar19;
                local_4c8 = dVar75 * (double)plVar28;
                uVar80 = (undefined4)((ulonglong)uStack_4f0 >> 0x20);
                lVar27 = *(longlong *)(lVar40 + 0x530);
                auVar13._8_4_ = SUB84(uStack_4f0,0);
                auVar13._0_8_ = dVar59;
                auVar13._12_4_ = uVar80;
                *(undefined1 (*) [16])(lVar27 + lVar33 * 0x18) = auVar13;
                *(undefined8 **)(lVar27 + 0x10 + lVar33 * 0x18) = puVar2;
                lVar32 = plVar29[1];
                lVar27 = *(longlong *)(*plVar29 + 0x28);
                auVar14._8_4_ = SUB84(uStack_4f0,0);
                auVar14._0_8_ = dVar59;
                auVar14._12_4_ = uVar80;
                *(undefined1 (*) [16])(lVar27 + (longlong)(int)lVar32 * 0x18) = auVar14;
                *(undefined8 **)(lVar27 + 0x10 + (longlong)(int)lVar32 * 0x18) = puVar2;
                lVar27 = *(longlong *)(*plVar29 + 0x548);
                lVar32 = (longlong)(int)plVar29[1] * 0x10;
                *(float *)(lVar27 + lVar32) = (float)(double)local_518._0_8_;
                *(float *)(lVar27 + 4 + lVar32) = (float)(double)local_518._8_8_;
                *(float *)(lVar27 + 8 + lVar32) = (float)auVar52._0_8_;
                *(float *)(lVar27 + 0xc + lVar32) = (float)auVar52._8_8_;
                lVar27 = *(longlong *)(*plVar29 + 0x48);
                lVar32 = (longlong)(int)plVar29[1] * 0x10;
                *(float *)(lVar27 + lVar32) = (float)(double)local_518._0_8_;
                *(float *)(lVar27 + 4 + lVar32) = (float)(double)local_518._8_8_;
                *(float *)(lVar27 + 8 + lVar32) = (float)auVar52._0_8_;
                *(float *)(lVar27 + 0xc + lVar32) = (float)auVar52._8_8_;
                _local_178 = ZEXT816(0);
                local_168 = (undefined8 *)0x0;
                local_508._0_4_ = auVar52._0_4_;
                local_508._4_4_ = auVar52._4_4_;
                uStack_500._0_4_ = auVar52._8_4_;
                uStack_500._4_4_ = auVar52._12_4_;
                local_4f8._0_4_ = SUB84(dVar59,0);
                local_4f8._4_4_ = (undefined4)((ulonglong)dVar59 >> 0x20);
                auVar7._8_4_ = SUB84(dVar67,0);
                auVar7._0_8_ = puVar2;
                auVar7._12_4_ = (int)((ulonglong)dVar67 >> 0x20);
                uStack_4e8._0_4_ = SUB84(puVar2,0);
                uStack_4e8._4_4_ = (uint)((ulonglong)puVar2 >> 0x20);
                dStack_4e0 = auVar7._8_8_;
                auVar17._8_4_ = SUB84(dVar10 * dVar58,0);
                auVar17._0_8_ = local_4c8;
                auVar17._12_4_ = (int)((ulonglong)(dVar10 * dVar58) >> 0x20);
                dStack_4c0 = auVar17._8_8_;
                FUN_144aa485a(*plVar29,(int)plVar29[1],local_518,local_178);
                lVar27 = *plVar29;
                lVar32 = (longlong)(int)plVar29[1];
                if ((*(char *)(*(longlong *)(lVar27 + 0x2c0) + 0xd + lVar32 * 0x10) == '\0') &&
                   ((*(char *)(*(longlong *)(lVar27 + 0xe0) + lVar32) != '\0' ||
                    (DAT_14c9978a0 != 0)))) {
                  lVar40 = *(longlong *)(local_680 + 0x9c8);
                  uVar80 = *(undefined4 *)(*(longlong *)(lVar27 + 0x80) + lVar32 * 4);
                  plVar28 = (longlong *)
                            FUN_1447eab44(lVar40 + 0x360,uVar80,
                                          CONCAT71((int7)((ulonglong)(lVar32 * 0x10) >> 8),1));
                  *(undefined1 *)(plVar28 + 8) = 2;
                  local_518._8_8_ = plVar29;
                  local_518._0_8_ =
                       *(undefined8 *)
                        (*(longlong *)(*plVar29 + 0xb0) + (longlong)(int)plVar29[1] * 8);
                  local_508._0_4_ =
                       *(undefined4 *)
                        (*(longlong *)(*plVar29 + 0x80) + (longlong)(int)plVar29[1] * 4);
                  local_4f8._4_4_ = 0;
                  uStack_4f0._0_4_ = 0;
                  uStack_4f0._4_4_ = 0;
                  uStack_4e8._0_4_ = 0;
                  local_508._4_4_ = 0;
                  uStack_500._0_4_ = 0;
                  uStack_500._4_4_ = 0;
                  local_4f8._0_4_ = 0;
                  uStack_4e8._4_4_ = uStack_4e8._4_4_ & 0xffffff00;
                  FUN_144b06ac6(plVar29);
                  FUN_144b06a28(plVar29,(longlong)&local_4f8 + 4);
                  uStack_4e8._4_4_ = CONCAT31(uStack_4e8._5_3_,1);
                  auVar21._4_4_ = local_508._4_4_;
                  auVar21._0_4_ = (undefined4)local_508;
                  auVar21._8_4_ = (undefined4)uStack_500;
                  auVar21._12_4_ = uStack_500._4_4_;
                  auVar22._4_4_ = local_4f8._4_4_;
                  auVar22._0_4_ = (undefined4)local_4f8;
                  auVar22._8_4_ = (int)uStack_4f0;
                  auVar22._12_4_ = uStack_4f0._4_4_;
                  *(undefined1 (*) [16])(plVar28 + 4) = auVar22;
                  *(undefined1 (*) [16])(plVar28 + 2) = auVar21;
                  *plVar28 = local_518._0_8_;
                  plVar28[1] = local_518._8_8_;
                  plVar28[6] = CONCAT44(uStack_4e8._4_4_,(undefined4)uStack_4e8);
                  *(undefined2 *)(plVar28 + 7) =
                       *(undefined2 *)
                        (*(longlong *)(*plVar29 + 0x170) + (longlong)(int)plVar29[1] * 2);
                  plVar29 = (longlong *)FUN_1447eab44(lVar40 + 0x380,uVar80,1);
                  for (lVar27 = 9; dVar73 = local_688, lVar27 != 0; lVar27 = lVar27 + -1) {
                    *plVar29 = *plVar28;
                    plVar28 = plVar28 + 1;
                    plVar29 = plVar29 + 1;
                  }
                }
              }
            }
            iVar41 = (int)param_6[1];
            *(uint *)(param_6 + 1) = iVar41 + 1U;
            if (*(uint *)((longlong)param_6 + 0xc) < iVar41 + 1U) {
              FUN_1406b7a4a(param_6,iVar41);
            }
            *(longlong **)(*param_6 + (longlong)iVar41 * 8) = plVar30;
          }
        }
        lVar31 = lVar31 + 1;
        lVar43 = lVar43 + 0x60;
      } while (local_300 != lVar31);
    }
    FUN_1496e16e8(local_320);
    plVar30 = local_620;
    if (local_5f8 != 0) {
      FUN_1400020a8();
    }
  }
  if (plVar30 != (longlong *)0x0) {
    LOCK();
    plVar29 = plVar30 + 1;
    *(int *)plVar29 = (int)*plVar29 + -1;
    UNLOCK();
    if ((int)*plVar29 == 0) {
      (**(code **)*plVar30)(plVar30);
      LOCK();
      piVar1 = (int *)((longlong)plVar30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar30 + 0x10))(plVar30);
      }
    }
  }
LAB_1496decb1:
  if ((local_f0 ^ (ulonglong)auStack_6a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e143c FUN_1496e143c body=227 status=ok
// SIG undefined FUN_1496e143c(void)

void FUN_1496e143c(char *param_1,int *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_1 == '\x02') {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x18));
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + (longlong)*param_2 * 8);
  if (plVar2 != (longlong *)0x0) {
    local_68[0] = *param_3;
    local_58[0] = 0;
    if (local_68[0] != 0) {
      plVar1 = param_3 + 4;
      if ((longlong *)param_3[2] != (longlong *)0x0) {
        plVar1 = (longlong *)param_3[2];
      }
      (**(code **)*plVar1)(plVar1,local_58);
    }
    (**(code **)(*plVar2 + 0x40))(plVar2,local_68);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  if (*param_1 == '\x02') {
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x18));
  }
  if (*param_3 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e1520 FUN_1496e1520 body=227 status=ok
// SIG undefined FUN_1496e1520(void)

void FUN_1496e1520(char *param_1,int *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_1 == '\x02') {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x18));
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + (longlong)*param_2 * 8);
  if (plVar2 != (longlong *)0x0) {
    local_68[0] = *param_3;
    local_58[0] = 0;
    if (local_68[0] != 0) {
      plVar1 = param_3 + 4;
      if ((longlong *)param_3[2] != (longlong *)0x0) {
        plVar1 = (longlong *)param_3[2];
      }
      (**(code **)*plVar1)(plVar1,local_58);
    }
    (**(code **)(*plVar2 + 0x40))(plVar2,local_68);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  if (*param_1 == '\x02') {
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x18));
  }
  if (*param_3 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e1604 FUN_1496e1604 body=227 status=ok
// SIG undefined FUN_1496e1604(void)

void FUN_1496e1604(char *param_1,int *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_1 == '\x02') {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x18));
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + (longlong)*param_2 * 8);
  if (plVar2 != (longlong *)0x0) {
    local_68[0] = *param_3;
    local_58[0] = 0;
    if (local_68[0] != 0) {
      plVar1 = param_3 + 4;
      if ((longlong *)param_3[2] != (longlong *)0x0) {
        plVar1 = (longlong *)param_3[2];
      }
      (**(code **)*plVar1)(plVar1,local_58);
    }
    (**(code **)(*plVar2 + 0x40))(plVar2,local_68);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  if (*param_1 == '\x02') {
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x18));
  }
  if (*param_3 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e16e8 FUN_1496e16e8 body=197 status=ok
// SIG undefined FUN_1496e16e8(void)

void FUN_1496e16e8(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  FUN_14090bbce(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  FUN_145e15680(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_1496ea754(param_1 + 0x38);
  FUN_1496ea8f0(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1496e17ae FUN_1496e17ae body=282 status=ok
// SIG undefined FUN_1496e17ae(void)

ulonglong FUN_1496e17ae(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar6 = FUN_140f5398e();
  if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) {
    return 0;
  }
  if (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
      != lVar6 + 0x30) {
    return 0;
  }
  lVar6 = *(longlong *)(param_2 + 0x660);
  if (lVar6 == 0) {
    return 0;
  }
  lVar9 = *(longlong *)(lVar6 + 0x218);
  plVar5 = *(longlong **)(lVar6 + 0x220);
  if (plVar5 == (longlong *)0x0) {
    if (lVar9 == 0) {
      return 0;
    }
  }
  else {
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
    if (lVar9 == 0) {
      return 0;
    }
    lVar9 = *(longlong *)(lVar6 + 0x218);
    plVar5 = *(longlong **)(lVar6 + 0x220);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      iVar8 = *(int *)(lVar9 + 200);
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
      goto LAB_1496e187e;
    }
  }
  iVar8 = *(int *)(lVar9 + 200);
LAB_1496e187e:
  iVar3 = *(int *)(param_3 + 0x40);
  if ((longlong)iVar3 == 0) {
    return CONCAT71((int7)(int3)((uint)iVar3 >> 8),1);
  }
  lVar6 = 0;
  do {
    iVar4 = *(int *)(*(longlong *)(param_3 + 0x38) + lVar6);
    uVar7 = (ulonglong)CONCAT31((int3)((uint)iVar4 >> 8),iVar4 < iVar8 && -1 < iVar4);
    if (iVar4 >= iVar8 || -1 >= iVar4) {
      return uVar7;
    }
    bVar10 = (longlong)iVar3 * 4 + -4 != lVar6;
    lVar6 = lVar6 + 4;
  } while (bVar10);
  return uVar7;
}



// FUNCTION 1496e18d2 FUN_1496e18d2 body=142 status=ok
// SIG undefined FUN_1496e18d2(void)

undefined8 FUN_1496e18d2(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
LAB_1496e1943:
    uVar3 = 0;
  }
  else {
    lVar1 = FUN_140f5398e();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) != lVar1 + 0x30)) {
LAB_1496e18ff:
      lVar1 = *(longlong *)(param_2 + 0xb0);
      if (lVar1 == 0) {
        lVar1 = FUN_1448abda6(param_2);
        if (lVar1 == 0) goto LAB_1496e1943;
        lVar1 = *(longlong *)(param_2 + 0xb0);
        if (lVar1 == 0) {
          lVar1 = FUN_1448abda6(param_2);
        }
      }
      if (*(longlong *)(lVar1 + 0x260) == 0) goto LAB_1496e1943;
      puVar2 = (undefined8 *)(*(longlong *)(lVar1 + 0x260) + 0x38);
    }
    else {
      lVar1 = FUN_1474a86da(param_2);
      if (lVar1 == 0) goto LAB_1496e18ff;
      puVar2 = (undefined8 *)(lVar1 + 0x550);
    }
    uVar3 = *puVar2;
  }
  return uVar3;
}



// FUNCTION 1496e196a FUN_1496e196a body=5043 status=ok
// SIG undefined FUN_1496e196a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1496e196a(undefined4 param_1,longlong param_2,longlong param_3,double *param_4,
                  double param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  longlong lVar11;
  double dVar12;
  undefined1 auVar13 [16];
  longlong *plVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  double *pdVar20;
  ulonglong uVar21;
  double *pdVar22;
  double *pdVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar42;
  double dVar43;
  undefined1 auVar41 [16];
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  double dVar51;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar52;
  double dVar53;
  double dVar54;
  undefined1 auVar55 [16];
  double dVar56;
  undefined1 auVar57 [16];
  double dVar58;
  double dVar61;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar62;
  undefined1 auStack_638 [32];
  double local_618;
  double dStack_610;
  double local_608;
  double dStack_600;
  float local_5ec;
  undefined1 local_5e8 [16];
  undefined1 local_5d8 [16];
  undefined1 local_5c8 [16];
  double local_5b8;
  double dStack_5b0;
  longlong *local_5a0;
  longlong local_598;
  longlong local_590;
  undefined1 local_588 [16];
  undefined1 local_578 [16];
  undefined1 local_568 [16];
  double local_558;
  double dStack_550;
  double local_548;
  double dStack_540;
  double local_538;
  double dStack_530;
  double local_528;
  double dStack_520;
  double local_518;
  double dStack_510;
  double local_508;
  undefined8 uStack_500;
  double local_4f8;
  double dStack_4f0;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  undefined8 uStack_4d0;
  double *local_4c8;
  undefined8 uStack_4c0;
  double *local_4b0;
  undefined2 local_4a8;
  undefined1 local_4a6;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined1 local_48f;
  double local_488;
  double dStack_480;
  double local_478;
  double dStack_470;
  double local_468;
  double local_460;
  double local_458;
  longlong local_450;
  double local_448;
  double local_440;
  double local_438;
  double local_428;
  double local_420;
  double local_418;
  double local_408;
  double dStack_400;
  double local_3f8;
  double local_338;
  double dStack_330;
  double local_328;
  undefined8 uStack_320;
  double local_318;
  double dStack_310;
  undefined8 local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined1 local_2f8 [16];
  double local_2e8;
  undefined8 uStack_2e0;
  double local_2d8 [12];
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  auVar59 = _DAT_149934d80;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_638;
  if (((param_3 != 0) && (param_2 != 0)) &&
     ((*(float *)(param_3 + 0x28) != 0.0 || (NAN(*(float *)(param_3 + 0x28)))))) {
    local_5d8 = *(undefined1 (*) [16])(param_4 + 8);
    auVar10 = *(undefined1 (*) [16])(param_4 + 10);
    auVar39 = *(undefined1 (*) [16])(param_2 + 0x280);
    auVar49 = *(undefined1 (*) [16])(param_2 + 0x290);
    auVar48._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar39._8_8_));
    auVar48._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar39._0_8_));
    uVar15 = movmskpd((int)local_f0,auVar48);
    auVar57._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar49._8_8_));
    auVar57._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar49._0_8_));
    iVar16 = movmskpd(param_1,auVar57);
    uVar17 = iVar16 << 2 | uVar15;
    if (uVar17 == 0) {
      local_608 = DAT_14c8464a0;
      dStack_600 = DAT_14c8464a8;
      dStack_610 = DAT_14c8464b8;
      local_618 = DAT_14c8464b0;
      auVar28 = _DAT_14c8464c0;
      auVar39 = _DAT_14c8464d0;
      dVar27 = DAT_14c846490;
      dVar53 = DAT_14c846498;
      dVar56 = DAT_14c846480;
      dVar58 = DAT_14c846488;
    }
    else {
      auVar57 = divpd(_DAT_149934d80,auVar39);
      auVar48 = divpd(ZEXT816(0x3ff0000000000000),auVar49);
      auVar28._0_8_ =
           (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar39._0_8_)) & auVar57._0_8_);
      auVar28._8_8_ =
           (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar39._8_8_)) & auVar57._8_8_);
      dVar54 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar49._0_8_)) & auVar48._0_8_);
      auVar39._8_8_ = 0;
      auVar39._0_8_ = dVar54;
      dVar27 = *(double *)(param_2 + 0x250) * -1.0;
      dVar53 = *(double *)(param_2 + 600) * 1.0;
      dVar56 = -*(double *)(param_2 + 0x240);
      dVar58 = -*(double *)(param_2 + 0x248);
      dVar12 = *(double *)(param_2 + 0x260) * auVar28._0_8_;
      dVar38 = *(double *)(param_2 + 0x268) * auVar28._8_8_;
      dVar54 = *(double *)(param_2 + 0x270) * dVar54;
      dVar45 = dVar38 * dVar56 - dVar58 * dVar12;
      dVar51 = dVar54 * dVar58 - dVar27 * dVar38;
      dVar62 = dVar12 * dVar27 - dVar56 * dVar54;
      dVar51 = dVar51 + dVar51;
      dVar62 = dVar62 + dVar62;
      dVar45 = dVar45 + dVar45;
      local_608 = 0.0 - ((dVar45 * dVar58 - dVar62 * dVar27) + dVar53 * dVar51 + dVar12);
      dStack_600 = 0.0 - (dVar45 * *(double *)(param_2 + 0x240) + dVar27 * dVar51 +
                         dVar53 * dVar62 + dVar38);
      local_618 = 0.0 - (dVar53 * dVar45 + dVar54 + (dVar62 * dVar56 - dVar51 * dVar58));
      dStack_610 = 0.0;
    }
    dVar38 = *param_4;
    dVar54 = param_4[1];
    dVar45 = param_4[2];
    dVar51 = param_4[3];
    local_5e8 = *(undefined1 (*) [16])(param_4 + 4);
    dVar62 = param_4[6];
    auVar49 = minpd(local_5d8,auVar28);
    auVar48 = minpd(auVar10,auVar39);
    auVar50._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
    auVar50._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
    iVar16 = movmskpd(uVar15,auVar50);
    auVar49._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
    auVar49._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
    uVar15 = movmskpd(uVar17,auVar49);
    dVar37 = auVar39._0_8_;
    dVar43 = auVar28._0_8_;
    dVar47 = auVar28._8_8_;
    dVar12 = auVar10._0_8_;
    if ((uVar15 & 0x3fffffff) == 0 && iVar16 == 0) {
      dVar42 = dVar38 * dVar27 * 1.0 + dVar51 * dVar58 + dVar45 * dVar56 * -1.0 + dVar54 * dVar53;
      local_5c8._8_4_ = SUB84(dVar42,0);
      local_5c8._0_8_ =
           dVar54 * dVar27 * -1.0 + dVar45 * dVar58 + dVar51 * dVar56 * 1.0 + dVar38 * dVar53;
      local_5c8._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
      auVar59._0_8_ =
           dVar51 * dVar27 * 1.0 + ((dVar56 * dVar54 * 1.0 + dVar45 * dVar53) - dVar58 * dVar38);
      auVar59._8_8_ =
           dVar45 * dVar27 * -1.0 + ((dVar56 * dVar38 * -1.0 + dVar51 * dVar53) - dVar58 * dVar54);
      dVar44 = (double)local_5e8._0_8_ * dVar43;
      dVar46 = (double)local_5e8._8_8_ * dVar47;
      dVar62 = dVar62 * dVar37;
      dVar42 = param_4[7] * auVar39._8_8_;
      dVar38 = dVar46 * dVar56 - dVar58 * dVar44;
      dVar54 = dVar62 * dVar58 - dVar27 * dVar46;
      dVar45 = dVar44 * dVar27 - dVar56 * dVar62;
      dVar51 = dVar42 * dVar53 - dVar53 * dVar42;
      dVar54 = dVar54 + dVar54;
      dVar45 = dVar45 + dVar45;
      dVar38 = dVar38 + dVar38;
      dVar51 = dVar51 + dVar51;
      local_608 = local_608 + (dVar38 * dVar58 - dVar27 * dVar45) + dVar53 * dVar54 + dVar44;
      dStack_600 = dStack_600 + (dVar54 * dVar27 - dVar38 * dVar56) + dVar53 * dVar45 + dVar46;
      local_618 = local_618 + (dVar45 * dVar56 - dVar58 * dVar54) + dVar53 * dVar38 + dVar62;
      dStack_610 = dStack_610 + (dVar51 * dVar53 - dVar51 * dVar53) + dVar53 * dVar51 + dVar42;
      auVar55._0_8_ = (double)local_5d8._0_8_ * dVar43;
      auVar55._8_8_ = (double)local_5d8._8_8_ * dVar47;
    }
    else {
      dVar61 = dVar58 + dVar58;
      dVar46 = dVar27 + dVar27;
      dVar42 = dVar56 * (dVar56 + dVar56);
      dVar52 = (dVar56 + dVar56) * dVar53;
      local_2e8 = (1.0 - (dVar42 + dVar58 * dVar61)) * dVar37;
      local_318 = (dVar61 * dVar56 - dVar46 * dVar53) * dVar47;
      dVar44 = (dVar46 * dVar58 - dVar52) * dVar37;
      auVar55._0_8_ = (double)local_5d8._0_8_ * dVar43;
      auVar55._8_8_ = (double)local_5d8._8_8_ * dVar47;
      local_338 = (1.0 - (dVar27 * dVar46 + dVar58 * dVar61)) * dVar43;
      dStack_310 = (1.0 - (dVar27 * dVar46 + dVar42)) * dVar47;
      dStack_330 = (dVar61 * dVar56 + dVar46 * dVar53) * dVar43;
      local_308 = (dVar46 * dVar58 + dVar52) * dVar47;
      local_328 = (dVar56 * dVar46 - dVar61 * dVar53) * dVar43;
      uStack_320 = 0;
      uStack_300 = 0;
      uStack_2fc = 0;
      local_2f8._8_4_ = SUB84(dVar44,0);
      local_2f8._0_8_ = (dVar61 * dVar53 + dVar56 * dVar46) * dVar37;
      local_2f8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
      uStack_2e0 = 0;
      local_2d8[0] = local_608;
      local_2d8[1] = dStack_600;
      local_2d8[2] = local_618;
      local_2d8[3] = 1.0;
      dVar53 = dVar54 + dVar54;
      dVar56 = dVar45 + dVar45;
      dVar27 = dVar38 * (dVar38 + dVar38);
      local_128 = (1.0 - (dVar27 + dVar54 * dVar53)) * dVar12;
      dVar58 = (dVar38 + dVar38) * dVar51;
      local_138 = (dVar53 * dVar51 + dVar38 * dVar56) * dVar12;
      local_158 = (dVar53 * dVar38 - dVar56 * dVar51) * (double)local_5d8._8_8_;
      dStack_130 = (dVar56 * dVar54 - dVar58) * dVar12;
      local_178 = ((double)DAT_149934d80 - (dVar45 * dVar56 + dVar54 * dVar53)) *
                  (double)local_5d8._0_8_;
      dStack_150 = (DAT_149934d80._8_8_ - (dVar45 * dVar56 + dVar27)) * (double)local_5d8._8_8_;
      dStack_170 = (dVar53 * dVar38 + dVar56 * dVar51) * (double)local_5d8._0_8_;
      local_148 = (dVar56 * dVar54 + dVar58) * (double)local_5d8._8_8_;
      local_168 = (dVar38 * dVar56 - dVar53 * dVar51) * (double)local_5d8._0_8_;
      uStack_160 = 0;
      uStack_140 = 0;
      uStack_120 = 0;
      local_118 = (double)local_5e8._0_8_;
      dStack_110 = (double)local_5e8._8_8_;
      uStack_100 = 0x3ff0000000000000;
      local_5b8 = dVar62;
      dStack_5b0 = param_4[7];
      local_108 = dVar62;
      FUN_1447fea8d(&local_468);
      FUN_144a1c686(&local_468,0x3e45798ee0000000);
      auVar29._8_8_ = -(ulonglong)(0.0 <= auVar55._8_8_);
      auVar29._0_8_ = -(ulonglong)(0.0 <= auVar55._0_8_);
      auVar49 = blendvpd(_DAT_149936790,auVar59,auVar29);
      uVar25 = -(ulonglong)(0.0 <= dVar12 * dVar37);
      dVar27 = (double)(~uVar25 & 0xbff0000000000000 | uVar25 & 0x3ff0000000000000);
      dVar53 = auVar49._0_8_;
      local_458 = local_458 * dVar53;
      local_460 = local_460 * dVar53;
      local_468 = local_468 * dVar53;
      dVar53 = auVar49._8_8_;
      local_438 = local_438 * dVar53;
      local_440 = local_440 * dVar53;
      local_448 = dVar53 * local_448;
      local_418 = local_418 * dVar27;
      local_420 = local_420 * dVar27;
      local_428 = dVar27 * local_428;
      FUN_14481fd10(&local_1f8,&local_468);
      dVar27 = local_1e8 * local_1e8 + local_1f8 * local_1f8;
      dVar53 = dStack_1e0 * dStack_1e0 + dStack_1f0 * dStack_1f0;
      auVar35._0_8_ = dVar27 + dVar53;
      auVar35._8_8_ = dVar27 + dVar53;
      auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
      auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
      auVar49 = sqrtpd(auVar35,auVar35);
      auVar59 = divpd(auVar59,auVar49);
      auVar60._0_8_ = auVar59._0_8_ * local_1e8;
      auVar60._8_8_ = auVar59._8_8_ * dStack_1e0;
      local_5c8._8_8_ =
           (ulonglong)(dStack_1f0 * auVar59._8_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
      local_5c8._0_8_ =
           (ulonglong)(local_1f8 * auVar59._0_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
      auVar59 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar60,auVar30);
      local_608 = local_408;
      dStack_600 = dStack_400;
      local_618 = local_3f8;
      dStack_610 = 0.0;
    }
    dVar12 = dVar12 * dVar37;
    dVar27 = auVar10._8_8_ * auVar39._8_8_;
    lVar18 = *(longlong *)(param_2 + 0x660);
    if (lVar18 != 0) {
      lVar11 = *(longlong *)(lVar18 + 0x218);
      local_5a0 = *(longlong **)(lVar18 + 0x220);
      if (local_5a0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_5a0 + 1) = (int)local_5a0[1] + 1;
        UNLOCK();
      }
      local_590 = param_2;
      local_588 = auVar59;
      uVar15 = FUN_1401f66f6(lVar11);
      pdVar20 = (double *)(ulonglong)uVar15;
      dStack_310 = 0.0;
      local_308._0_4_ = 0;
      dStack_330 = 0.0;
      local_328 = 0.0;
      local_308._4_4_ = 0x80;
      uStack_300 = 0xffffffff;
      uStack_2fc = 0;
      local_2f8._8_8_ = 0;
      local_2e8 = (double)((ulonglong)local_2e8 & 0xffffffff00000000);
      pdVar22 = &DAT_14c846480;
      pdVar23 = local_2d8;
      for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
        *pdVar23 = *pdVar22;
        pdVar22 = pdVar22 + 1;
        pdVar23 = pdVar23 + 1;
      }
      local_5ec = (float)param_5;
      local_338 = (double)((ulonglong)(uint)local_5ec << 0x20);
      local_4b0 = &local_338;
      local_48f = 0;
      local_4a0 = 0;
      uStack_498 = 0;
      local_4a8 = 1;
      local_4a6 = 0;
      local_598 = param_3;
      FUN_144588c92(param_3,&local_468,&local_4b0,0);
      iVar16 = local_448._0_4_;
      uVar25 = (ulonglong)local_448 & 0xffffffff;
      local_4c8 = (double *)0x0;
      uStack_4c0 = 0;
      FUN_140ee84a4(&local_4c8,pdVar20,1);
      if (0 < (int)uVar15) {
        lVar18 = 0;
        do {
          lVar24 = *(longlong *)(lVar11 + 0xc0);
          uVar4 = *(undefined8 *)(lVar24 + 0x20 + lVar18);
          uVar5 = *(undefined8 *)(lVar24 + 0x28 + lVar18);
          uVar6 = *(undefined8 *)(lVar24 + 0x10 + lVar18);
          uVar7 = *(undefined8 *)(lVar24 + 0x18 + lVar18);
          uVar8 = *(undefined8 *)(lVar24 + lVar18);
          uVar9 = *(undefined8 *)(lVar24 + 8 + lVar18);
          pdVar20 = (double *)((longlong)local_4c8 + lVar18 * 2);
          *pdVar20 = (double)(float)uVar8;
          pdVar20[1] = (double)(float)((ulonglong)uVar8 >> 0x20);
          pdVar20 = (double *)((longlong)local_4c8 + lVar18 * 2 + 0x10);
          *pdVar20 = (double)(float)uVar9;
          pdVar20[1] = (double)(float)((ulonglong)uVar9 >> 0x20);
          pdVar20 = (double *)((longlong)local_4c8 + lVar18 * 2 + 0x20);
          *pdVar20 = (double)(float)uVar6;
          pdVar20[1] = (double)(float)((ulonglong)uVar6 >> 0x20);
          pdVar20 = (double *)((longlong)local_4c8 + lVar18 * 2 + 0x30);
          *pdVar20 = (double)(float)uVar7;
          pdVar20[1] = (double)(float)((ulonglong)uVar7 >> 0x20);
          pdVar20 = (double *)((longlong)local_4c8 + lVar18 * 2 + 0x40);
          *pdVar20 = (double)(float)uVar4;
          pdVar20[1] = (double)(float)((ulonglong)uVar4 >> 0x20);
          pdVar20 = (double *)((longlong)local_4c8 + lVar18 * 2 + 0x50);
          *pdVar20 = (double)(float)uVar5;
          pdVar20[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
          lVar18 = lVar18 + 0x30;
          pdVar20 = local_4c8;
        } while ((ulonglong)uVar15 * 0x30 != lVar18);
      }
      if (0 < iVar16) {
        dVar56 = (double)local_5c8._8_8_ + (double)local_5c8._8_8_;
        local_548 = local_588._0_8_;
        dStack_550 = local_588._8_8_;
        dVar58 = local_548 + local_548;
        dVar38 = (double)local_5c8._0_8_ * ((double)local_5c8._0_8_ + (double)local_5c8._0_8_);
        local_4e8 = auVar55._0_8_;
        local_4f8 = (1.0 - (local_548 * dVar58 + (double)local_5c8._8_8_ * dVar56)) * local_4e8;
        dVar54 = auVar55._8_8_;
        local_4d8 = (1.0 - (dVar38 + (double)local_5c8._8_8_ * dVar56)) * dVar12;
        local_518 = (double)local_5c8._0_8_;
        dStack_510 = (double)local_5c8._0_8_;
        dVar53 = ((double)local_5c8._0_8_ + (double)local_5c8._0_8_) * dStack_550;
        dStack_4f0 = (dVar56 * (double)local_5c8._0_8_ + dVar58 * dStack_550) * local_4e8;
        local_5b8 = (dVar58 * (double)local_5c8._8_8_ + dVar53) * dVar54;
        dVar53 = (dVar58 * (double)local_5c8._8_8_ - dVar53) * dVar12;
        local_4e8 = ((double)local_5c8._0_8_ * dVar58 - dVar56 * dStack_550) * local_4e8;
        uStack_4d0 = 0;
        dStack_4e0 = 0.0;
        dStack_5b0 = 0.0;
        local_5d8._8_8_ = (1.0 - (local_548 * dVar58 + dVar38)) * dVar54;
        local_5d8._0_8_ = (dVar56 * (double)local_5c8._0_8_ - dVar58 * dStack_550) * dVar54;
        local_5e8._8_4_ = SUB84(dVar53,0);
        local_5e8._0_8_ = ((double)local_5c8._0_8_ * dVar58 + dVar56 * dStack_550) * dVar12;
        local_5e8._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
        local_508 = local_618;
        uStack_500 = 0x3ff0000000000000;
        local_538 = (double)local_5c8._8_8_;
        dStack_530 = (double)local_5c8._8_8_;
        local_558 = (double)local_5c8._0_8_;
        local_568._8_4_ = local_588._0_4_;
        local_568._0_8_ = local_5c8._8_8_;
        local_568._12_4_ = local_588._4_4_;
        lVar18 = 0x50;
        uVar21 = 0;
        local_578 = auVar55;
        dStack_540 = local_548;
        local_528 = dStack_550;
        dStack_520 = dStack_550;
        do {
          auVar39 = _DAT_149934d80;
          lVar24 = (longlong)*(int *)((longlong)local_460 + uVar21 * 4);
          auVar59 = *(undefined1 (*) [16])(local_450 + -0x10 + lVar18);
          auVar10 = *(undefined1 (*) [16])(local_450 + lVar18);
          auVar49 = minpd(auVar59,auVar55);
          auVar13._8_4_ = SUB84(dVar27,0);
          auVar13._0_8_ = dVar12;
          auVar13._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
          auVar48 = minpd(auVar10,auVar13);
          auVar31._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
          auVar31._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
          iVar16 = movmskpd(SUB84(local_460,0),auVar31);
          auVar34._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
          auVar34._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
          uVar15 = movmskpd((int)pdVar20,auVar34);
          if ((uVar15 & 0x3fffffff) == 0 && iVar16 == 0) {
            pdVar20 = (double *)(local_450 + -0x50 + lVar18);
            dVar53 = *pdVar20;
            dVar56 = pdVar20[1];
            pdVar20 = (double *)(local_450 + -0x40 + lVar18);
            dVar58 = *pdVar20;
            dVar38 = pdVar20[1];
            dVar45 = dVar56 * local_548 * -1.0 +
                     local_518 * dVar38 * 1.0 + local_528 * dVar53 + local_538 * dVar58;
            dVar51 = dVar53 * dStack_540 * 1.0 +
                     dStack_510 * dVar58 * -1.0 + dStack_520 * dVar56 + dStack_530 * dVar38;
            auVar36._0_8_ =
                 dVar38 * local_548 * 1.0 +
                 ((local_518 * dVar56 * 1.0 + local_528 * dVar58) - local_538 * dVar53);
            auVar36._8_8_ =
                 dVar58 * dStack_540 * -1.0 +
                 ((dStack_510 * dVar53 * -1.0 + dStack_520 * dVar38) - dStack_530 * dVar56);
            pdVar20 = (double *)(local_450 + -0x30 + lVar18);
            dVar53 = *pdVar20 * auVar55._0_8_;
            dVar56 = pdVar20[1] * auVar55._8_8_;
            pdVar20 = (double *)(local_450 + -0x20 + lVar18);
            dVar62 = *pdVar20 * dVar12;
            dVar43 = pdVar20[1] * dVar27;
            dVar58 = dVar56 * (double)local_5c8._0_8_ - (double)local_568._0_8_ * dVar53;
            dVar38 = dVar62 * (double)local_5c8._8_8_ - (double)local_568._8_8_ * dVar56;
            dVar54 = dVar53 * (double)local_588._0_8_ - local_558 * dVar62;
            dVar47 = dVar43 * (double)local_588._8_8_ - dStack_550 * dVar43;
            dVar38 = dVar38 + dVar38;
            dVar54 = dVar54 + dVar54;
            dVar58 = dVar58 + dVar58;
            dVar47 = dVar47 + dVar47;
            dVar53 = (dVar58 * (double)local_5c8._8_8_ - (double)local_568._8_8_ * dVar54) +
                     local_528 * dVar38 + dVar53 + local_608;
            dVar56 = (dVar38 * (double)local_588._0_8_ - dVar58 * local_558) +
                     dStack_520 * dVar54 + dVar56 + dStack_600;
            dVar58 = (dVar54 * (double)local_5c8._0_8_ - (double)local_568._0_8_ * dVar38) +
                     local_528 * dVar58 + dVar62 + local_618;
            dVar38 = (dVar47 * (double)local_588._8_8_ - dVar47 * dStack_550) +
                     dStack_520 * dVar47 + dVar43 + dStack_610;
            dVar54 = auVar59._0_8_ * local_578._0_8_;
            dVar62 = auVar59._8_8_ * local_578._8_8_;
            pdVar20 = (double *)0x0;
            auVar55 = local_578;
          }
          else {
            local_1f8 = local_4f8;
            dStack_1f0 = dStack_4f0;
            local_1e8 = local_4e8;
            dStack_1e0 = dStack_4e0;
            local_1d8 = local_5d8._0_8_;
            uStack_1d0 = local_5d8._8_8_;
            local_1c8 = local_5b8;
            dStack_1c0 = dStack_5b0;
            local_1b8 = local_5e8._0_8_;
            uStack_1b0 = local_5e8._8_8_;
            local_1a8 = local_4d8;
            uStack_1a0 = uStack_4d0;
            local_198 = local_608;
            dStack_190 = dStack_600;
            local_188 = local_508;
            uStack_180 = uStack_500;
            pdVar20 = (double *)(local_450 + -0x50 + lVar18);
            dVar58 = *pdVar20;
            dVar38 = pdVar20[1];
            dVar53 = *(double *)(local_450 + -0x40 + lVar18);
            pdVar20 = (double *)(local_450 + -0x10 + lVar18);
            local_268 = *pdVar20;
            dVar54 = pdVar20[1];
            dStack_230 = *(double *)(local_450 + lVar18);
            dVar43 = dVar38 + dVar38;
            dVar45 = dVar53 + dVar53;
            dVar51 = dVar58 * (dVar58 + dVar58);
            local_278 = ((double)DAT_149934d80 - (dVar53 * dVar45 + dVar38 * dVar43)) * local_268;
            dVar56 = (DAT_149934d80._8_8_ - (dVar53 * dVar45 + dVar51)) * dVar54;
            local_228 = (1.0 - (dVar51 + dVar38 * dVar43)) * dStack_230;
            dVar47 = *(double *)(local_450 + -0x50 + lVar18) * dVar45;
            pdVar20 = (double *)(local_450 + -0x38 + lVar18);
            dVar53 = *pdVar20;
            dVar51 = dVar45 * dVar53;
            dVar62 = (dVar58 + dVar58) * *pdVar20;
            dVar53 = dVar43 * dVar53;
            dStack_270 = (dVar43 * dVar58 + dVar51) * local_268;
            local_248 = (dVar45 * dVar38 + dVar62) * dVar54;
            local_238 = (dVar53 + dVar47) * dStack_230;
            local_268 = (dVar47 - dVar53) * local_268;
            dStack_230 = (dVar45 * dVar38 - dVar62) * dStack_230;
            uStack_260 = 0;
            local_258._8_4_ = SUB84(dVar56,0);
            local_258._0_8_ = (dVar43 * dVar58 - dVar51) * dVar54;
            local_258._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
            uStack_240 = 0;
            uStack_220 = 0;
            puVar3 = (undefined8 *)(local_450 + -0x30 + lVar18);
            local_218 = *puVar3;
            uStack_210 = puVar3[1];
            local_208 = *(undefined8 *)(local_450 + -0x20 + lVar18);
            uStack_200 = 0x3ff0000000000000;
            dVar54 = auVar59._0_8_ * auVar55._0_8_;
            dVar62 = auVar59._8_8_ * auVar55._8_8_;
            FUN_1447fea8d(&local_178,&local_278,&local_1f8);
            FUN_144a1c686(&local_178,0x3e45798ee0000000);
            auVar32._8_8_ = -(ulonglong)(0.0 <= dVar62);
            auVar32._0_8_ = -(ulonglong)(0.0 <= dVar54);
            auVar59 = blendvpd(_DAT_149936790,auVar39,auVar32);
            uVar26 = -(ulonglong)(0.0 <= auVar10._0_8_ * dVar12);
            dVar53 = (double)(~uVar26 & 0xbff0000000000000 | uVar26 & 0x3ff0000000000000);
            dVar56 = auVar59._0_8_;
            local_168 = local_168 * dVar56;
            dStack_170 = dStack_170 * dVar56;
            local_178 = local_178 * dVar56;
            dVar56 = auVar59._8_8_;
            local_148 = local_148 * dVar56;
            dStack_150 = dStack_150 * dVar56;
            local_158 = dVar56 * local_158;
            local_128 = local_128 * dVar53;
            dStack_130 = dStack_130 * dVar53;
            local_138 = dVar53 * local_138;
            pdVar20 = &local_178;
            FUN_14481fd10(&local_488);
            dVar53 = local_478 * local_478 + local_488 * local_488;
            dVar56 = dStack_470 * dStack_470 + dStack_480 * dStack_480;
            auVar40._0_8_ = dVar53 + dVar56;
            auVar40._8_8_ = dVar53 + dVar56;
            auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar40._8_8_);
            auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar40._0_8_);
            auVar59 = sqrtpd(auVar40,auVar40);
            auVar59 = divpd(auVar39,auVar59);
            auVar41._0_8_ = auVar59._0_8_ * local_478;
            auVar41._8_8_ = auVar59._8_8_ * dStack_470;
            dVar45 = (double)((ulonglong)(local_488 * auVar59._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar40._0_8_));
            dVar51 = (double)((ulonglong)(dStack_480 * auVar59._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar40._8_8_));
            auVar36 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar41,auVar33);
            dVar38 = 0.0;
            dVar53 = local_118;
            dVar56 = dStack_110;
            dVar58 = local_108;
          }
          local_4c8[lVar24 * 0xc] = dVar45;
          (local_4c8 + lVar24 * 0xc)[1] = dVar51;
          *(undefined1 (*) [16])(local_4c8 + lVar24 * 0xc + 2) = auVar36;
          local_4c8[lVar24 * 0xc + 4] = dVar53;
          (local_4c8 + lVar24 * 0xc + 4)[1] = dVar56;
          local_4c8[lVar24 * 0xc + 6] = dVar58;
          (local_4c8 + lVar24 * 0xc + 6)[1] = dVar38;
          local_4c8[lVar24 * 0xc + 8] = dVar54;
          (local_4c8 + lVar24 * 0xc + 8)[1] = dVar62;
          local_4c8[lVar24 * 0xc + 10] = auVar10._0_8_ * dVar12;
          (local_4c8 + lVar24 * 0xc + 10)[1] = auVar10._8_8_ * dVar27;
          uVar21 = uVar21 + 1;
          lVar18 = lVar18 + 0x60;
        } while (uVar25 != uVar21);
      }
      FUN_1496e2d24(&local_178,local_598);
      if ((longlong)dStack_170._0_4_ != 0) {
        lVar18 = 0;
        do {
          lVar24 = (longlong)
                   *(int *)(*(longlong *)(lVar11 + 0x120) +
                           (longlong)*(int *)((longlong)local_178 + lVar18) * 4);
          if (-1 < lVar24) {
            pdVar20 = &DAT_14c846480;
            pdVar22 = local_4c8 + lVar24 * 0xc;
            for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
              *pdVar22 = *pdVar20;
              pdVar20 = pdVar20 + 1;
              pdVar22 = pdVar22 + 1;
            }
          }
          lVar18 = lVar18 + 4;
        } while ((longlong)dStack_170._0_4_ * 4 != lVar18);
      }
      FUN_1474a5c32(local_590,&local_4c8);
      if (local_178 != 0.0) {
        FUN_1400020a8();
      }
      if (local_4c8 != (double *)0x0) {
        FUN_1400020a8();
      }
      FUN_1496e16e8(&local_468);
      local_2e8 = (double)((ulonglong)local_2e8 & 0xffffffff00000000);
      if (local_2f8._8_8_ != 0) {
        FUN_1400020a8();
      }
      FUN_1401ad17c(&dStack_330);
      plVar14 = local_5a0;
      local_308 = (double)CONCAT44(local_308._4_4_,(undefined4)local_308);
      if (local_5a0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_5a0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        local_308 = (double)CONCAT44(local_308._4_4_,(undefined4)local_308);
        if ((int)*plVar1 == 0) {
          (**(code **)*local_5a0)(local_5a0);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_638) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496e2d1e FUN_1496e2d1e body=6 status=ok
// SIG undefined FUN_1496e2d1e(void)

undefined4 FUN_1496e2d1e(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// FUNCTION 1496e2d24 FUN_1496e2d24 body=601 status=ok
// SIG undefined FUN_1496e2d24(void)

/* WARNING: Type propagation algorithm not settling */

longlong * FUN_1496e2d24(longlong *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_278 [32];
  ulonglong *local_258;
  undefined2 local_250;
  undefined1 local_24e;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined1 local_237;
  undefined1 local_230 [56];
  longlong local_1f8;
  int local_1f0;
  int local_1c4;
  undefined1 local_1c0 [8];
  undefined1 *local_1b8;
  int local_1b0;
  ulonglong local_108 [5];
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  longlong local_c0;
  undefined4 local_b8;
  undefined8 local_a8 [13];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_278;
  *param_1 = 0;
  param_1[1] = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_108[1] = 0;
  local_108[2] = 0;
  local_d4 = 0xffffffff00000080;
  local_cc = 0;
  local_c0 = 0;
  local_b8 = 0;
  puVar7 = &DAT_14c846480;
  puVar8 = local_a8;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_108[0] = (ulonglong)param_3;
  local_258 = local_108;
  local_237 = 0;
  local_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_24e = 1;
  FUN_144588c92(param_2,local_230,&local_258,0);
  if (local_1f0 != local_1c4) {
    uVar2 = (uint)((ulonglong)DAT_14cc22418 >> 0x10);
    uVar6 = (uint)DAT_14cc22418 & 0xffff;
    if (local_1b8 == (undefined1 *)0x0) {
      local_1b8 = local_1c0;
    }
    iVar1 = *(int *)(local_1b8 +
                    (ulonglong)
                    (local_1b0 - 1U &
                    (int)((ulonglong)DAT_14cc22418 >> 0x20) + ((uint)DAT_14cc22418 << 0x10 | uVar6)
                    + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar1 != -1) {
      lVar5 = local_1f8 + (longlong)iVar1 * 0x20;
      if (*(longlong *)(local_1f8 + (longlong)iVar1 * 0x20) == DAT_14cc22418) {
        if ((lVar5 + 8U & 0xfffffffffffffff7) != 0) {
          iVar1 = *(int *)(lVar5 + 0x10);
          if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar1);
          }
          if (iVar1 != 0) {
            FUN_14481578e(param_1);
            iVar1 = *(int *)(lVar5 + 0x10);
            if ((longlong)iVar1 != 0) {
              lVar5 = *(longlong *)(lVar5 + 8);
              lVar9 = 0;
              do {
                uVar2 = *(uint *)(lVar5 + 0xc + lVar9);
                if ((((((ulonglong)uVar2 != 0xffffffff) &&
                      (lVar4 = *(longlong *)(lVar5 + lVar9), lVar4 != 0)) &&
                     (*(int *)(lVar4 + 0x30) == *(int *)(lVar5 + 8 + lVar9))) &&
                    ((-1 < (int)uVar2 && ((int)uVar2 < *(int *)(lVar4 + 0x28))))) &&
                   ((*(longlong *)(lVar4 + 8) != 0 &&
                    ((lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x20) + (ulonglong)uVar2 * 8),
                     lVar4 != 0 && (*(char *)(lVar4 + 0xc) == '\x01')))))) {
                  iVar3 = (int)param_1[1];
                  *(uint *)(param_1 + 1) = iVar3 + 1U;
                  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
                    FUN_1446f48e2(param_1,iVar3);
                  }
                  *(undefined4 *)(*param_1 + (longlong)iVar3 * 4) = *(undefined4 *)(lVar4 + 8);
                }
                lVar9 = lVar9 + 0x10;
              } while ((longlong)iVar1 * 0x10 != lVar9);
            }
          }
        }
        break;
      }
      iVar1 = *(int *)(lVar5 + 0x18);
    }
  }
  FUN_1496e16e8(local_230);
  local_b8 = 0;
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(local_108 + 1);
  if ((local_40 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e2f80 FUN_1496e2f80 body=653 status=ok
// SIG undefined FUN_1496e2f80(void)

undefined8 FUN_1496e2f80(longlong param_1,longlong param_2)

{
  int *piVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  code *local_60;
  undefined4 local_58;
  undefined4 local_4c;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *(ulonglong *)(param_2 + 0xa40);
  if ((uVar3 == 0) || (lVar4 = *(longlong *)(uVar3 + 8), lVar4 == 0)) {
    uVar7 = 0;
  }
  else {
    FUN_140a1e722(lVar4,&local_48,0);
    if (local_48 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_48 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_48)(local_48,1);
      }
    }
    if ((*(longlong *)(lVar4 + 0x1e0) != 0) &&
       ((*(byte *)(*(longlong *)(lVar4 + 0x1e0) + 0xa0) & 1) == 0)) {
      FUN_14009fd82(DAT_14c82b500,lVar4 + 0x1e0,0xff);
    }
    puVar6 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    *(undefined2 *)(puVar6 + 1) = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined2 *)(puVar6 + 8) = 1;
    *puVar6 = &PTR_FUN_149f45dc0;
    puVar6[10] = &LAB_1445912a8;
    puVar6[0xc] = 0;
    puVar6[0xe] = &PTR_LAB_14bddfb50;
    puVar6[0xf] = lVar4;
    puVar6[0x12] = 0;
    puVar6[0x14] = 0;
    *(undefined1 *)(puVar6 + 0x1a) = 0;
    FUN_1406e6496(lVar4 + 0x70,puVar6);
    if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x3c)) {
      lVar4 = *(longlong *)(lVar4 + 0x9d0);
      if (lVar4 != 0) {
        if ((*(char *)(uVar3 + 0x1c0) < '\0') ||
           (bVar2 = *(byte *)(uVar3 + 0x1c1), (bVar2 & 0x10) != 0)) {
          local_4c = 1;
          local_60 = FUN_1496e32d0;
          local_58 = 0;
          local_78 = &local_70;
          local_70 = 0;
          local_68 = 0;
          FUN_1496e320e(lVar4,&local_4c,param_1);
          bVar2 = *(byte *)(uVar3 + 0x1c1);
        }
        if (((bVar2 & 0x20) == 0 & (bVar2 ^ 1)) == 0) {
          local_4c = 0;
          local_60 = FUN_1496e3564;
          local_58 = 0;
          local_78 = &local_70;
          local_70 = 0;
          local_68 = 0;
          FUN_1496e34a2(lVar4,&local_4c,param_1);
          bVar2 = *(byte *)(uVar3 + 0x1c1);
        }
        if ((bVar2 & 2) != 0) {
          local_4c = 2;
          local_60 = FUN_1496e37f8;
          local_58 = 0;
          local_78 = &local_70;
          local_70 = 0;
          local_68 = 0;
          FUN_1496e3736(lVar4,&local_4c,param_1);
        }
      }
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    local_60 = (code *)uVar3;
    puVar6 = (undefined8 *)FUN_1496ed6fa(param_1 + 8,uVar5 >> 0x10 ^ uVar5);
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    uVar7 = 1;
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e320e FUN_1496e320e body=192 status=ok
// SIG undefined FUN_1496e320e(void)

void FUN_1496e320e(longlong param_1,int *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar4 = *param_4;
  uVar2 = *(undefined4 *)(param_5 + 1);
  uVar5 = *param_5;
  iVar3 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 8);
  local_50 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *local_50 = &PTR_FUN_14bddfb70;
  local_50[1] = param_3;
  local_50[2] = uVar4;
  *(undefined4 *)(local_50 + 3) = uVar1;
  local_50[4] = uVar5;
  *(undefined4 *)(local_50 + 5) = uVar2;
  (**(code **)(*plVar6 + 8))(plVar6);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e32d0 FUN_1496e32d0 body=464 status=ok
// SIG undefined FUN_1496e32d0(void)

void FUN_1496e32d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(longlong *)(param_1 + 0x58) = param_2 + 8;
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = param_1 + 0x18;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar4 = *(int *)(param_1 + 0x30);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 == iVar4) && (uStack_50 == lVar2)) {
LAB_1496e3366:
    if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
LAB_1496e3394:
  if (*(int *)(param_2 + 0x30) != *(int *)(param_2 + 0x5c)) {
    uVar3 = *(ulonglong *)(*local_80 + (longlong)iStack_64 * 0x28);
    uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    lVar6 = *(longlong *)(param_2 + 0x68);
    if (*(longlong *)(param_2 + 0x68) == 0) {
      lVar6 = param_2 + 0x60;
    }
    iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_2 + 0x70) - 1U & (uVar5 >> 0x10 ^ uVar5)) *
                             4);
    if (iVar7 != -1) {
      lVar6 = *(longlong *)(param_2 + 0x28);
      iVar9 = iVar7;
      do {
        if (*(ulonglong *)(lVar6 + (longlong)iVar9 * 0x20) == uVar3) goto LAB_1496e346d;
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + lVar6 + 0x18);
      } while (iVar9 != -1);
    }
  }
  lVar8 = 0;
  goto LAB_1496e33a9;
  while (iVar7 = *(int *)(lVar8 + 0x18), iVar7 != -1) {
LAB_1496e346d:
    lVar8 = lVar6 + (longlong)iVar7 * 0x20;
    if (*(ulonglong *)(lVar6 + (longlong)iVar7 * 0x20) == uVar3) goto LAB_1496e348b;
  }
  lVar8 = 0;
LAB_1496e348b:
  lVar8 = lVar8 + 8;
LAB_1496e33a9:
  *(longlong *)(*local_80 + (longlong)iStack_64 * 0x28 + 8) = lVar8;
  local_68 = local_68 & ~uStack_74;
  FUN_1449c0562(&local_78);
  if (local_80 == plVar1 && (CONCAT44(uStack_6c,uStack_70) == lVar2 && iStack_64 == iVar4))
  goto LAB_1496e3366;
  goto LAB_1496e3394;
}



// FUNCTION 1496e34a2 FUN_1496e34a2 body=192 status=ok
// SIG undefined FUN_1496e34a2(void)

void FUN_1496e34a2(longlong param_1,int *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar4 = *param_4;
  uVar2 = *(undefined4 *)(param_5 + 1);
  uVar5 = *param_5;
  iVar3 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 8);
  local_50 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *local_50 = &PTR_FUN_14bddfb90;
  local_50[1] = param_3;
  local_50[2] = uVar4;
  *(undefined4 *)(local_50 + 3) = uVar1;
  local_50[4] = uVar5;
  *(undefined4 *)(local_50 + 5) = uVar2;
  (**(code **)(*plVar6 + 8))(plVar6);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e3564 FUN_1496e3564 body=464 status=ok
// SIG undefined FUN_1496e3564(void)

void FUN_1496e3564(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(longlong *)(param_1 + 0x60) = param_2 + 8;
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = param_1 + 0x18;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar4 = *(int *)(param_1 + 0x30);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 == iVar4) && (uStack_50 == lVar2)) {
LAB_1496e35fa:
    if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
LAB_1496e3628:
  if (*(int *)(param_2 + 0x28) != *(int *)(param_2 + 0x54)) {
    uVar3 = *(ulonglong *)(*local_80 + (longlong)iStack_64 * 0x28);
    uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    lVar6 = *(longlong *)(param_2 + 0x60);
    if (*(longlong *)(param_2 + 0x60) == 0) {
      lVar6 = param_2 + 0x58;
    }
    iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_2 + 0x68) - 1U & (uVar5 >> 0x10 ^ uVar5)) *
                             4);
    if (iVar7 != -1) {
      lVar6 = *(longlong *)(param_2 + 0x20);
      iVar9 = iVar7;
      do {
        if (*(ulonglong *)(lVar6 + (longlong)iVar9 * 0x20) == uVar3) goto LAB_1496e3701;
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + lVar6 + 0x18);
      } while (iVar9 != -1);
    }
  }
  lVar8 = 0;
  goto LAB_1496e363d;
  while (iVar7 = *(int *)(lVar8 + 0x18), iVar7 != -1) {
LAB_1496e3701:
    lVar8 = lVar6 + (longlong)iVar7 * 0x20;
    if (*(ulonglong *)(lVar6 + (longlong)iVar7 * 0x20) == uVar3) goto LAB_1496e371f;
  }
  lVar8 = 0;
LAB_1496e371f:
  lVar8 = lVar8 + 8;
LAB_1496e363d:
  *(longlong *)(*local_80 + (longlong)iStack_64 * 0x28 + 0x10) = lVar8;
  local_68 = local_68 & ~uStack_74;
  FUN_1449c0562(&local_78);
  if (local_80 == plVar1 && (CONCAT44(uStack_6c,uStack_70) == lVar2 && iStack_64 == iVar4))
  goto LAB_1496e35fa;
  goto LAB_1496e3628;
}



// FUNCTION 1496e3736 FUN_1496e3736 body=192 status=ok
// SIG undefined FUN_1496e3736(void)

void FUN_1496e3736(longlong param_1,int *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar4 = *param_4;
  uVar2 = *(undefined4 *)(param_5 + 1);
  uVar5 = *param_5;
  iVar3 = *param_2;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 8);
  local_50 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *local_50 = &PTR_FUN_14bddfbb0;
  local_50[1] = param_3;
  local_50[2] = uVar4;
  *(undefined4 *)(local_50 + 3) = uVar1;
  local_50[4] = uVar5;
  *(undefined4 *)(local_50 + 5) = uVar2;
  (**(code **)(*plVar6 + 8))(plVar6);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e37f8 FUN_1496e37f8 body=464 status=ok
// SIG undefined FUN_1496e37f8(void)

void FUN_1496e37f8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(longlong *)(param_1 + 0x68) = param_2 + 8;
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = param_1 + 0x18;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar4 = *(int *)(param_1 + 0x30);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 == iVar4) && (uStack_50 == lVar2)) {
LAB_1496e388e:
    if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
LAB_1496e38bc:
  if (*(int *)(param_2 + 0x28) != *(int *)(param_2 + 0x54)) {
    uVar3 = *(ulonglong *)(*local_80 + (longlong)iStack_64 * 0x28);
    uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    lVar6 = *(longlong *)(param_2 + 0x60);
    if (*(longlong *)(param_2 + 0x60) == 0) {
      lVar6 = param_2 + 0x58;
    }
    iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_2 + 0x68) - 1U & (uVar5 >> 0x10 ^ uVar5)) *
                             4);
    if (iVar7 != -1) {
      lVar6 = *(longlong *)(param_2 + 0x20);
      iVar9 = iVar7;
      do {
        if (*(ulonglong *)(lVar6 + (longlong)iVar9 * 0x20) == uVar3) goto LAB_1496e3995;
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + lVar6 + 0x18);
      } while (iVar9 != -1);
    }
  }
  lVar8 = 0;
  goto LAB_1496e38d1;
  while (iVar7 = *(int *)(lVar8 + 0x18), iVar7 != -1) {
LAB_1496e3995:
    lVar8 = lVar6 + (longlong)iVar7 * 0x20;
    if (*(ulonglong *)(lVar6 + (longlong)iVar7 * 0x20) == uVar3) goto LAB_1496e39b3;
  }
  lVar8 = 0;
LAB_1496e39b3:
  lVar8 = lVar8 + 8;
LAB_1496e38d1:
  *(longlong *)(*local_80 + (longlong)iStack_64 * 0x28 + 0x18) = lVar8;
  local_68 = local_68 & ~uStack_74;
  FUN_1449c0562(&local_78);
  if (local_80 == plVar1 && (CONCAT44(uStack_6c,uStack_70) == lVar2 && iStack_64 == iVar4))
  goto LAB_1496e388e;
  goto LAB_1496e38bc;
}



// FUNCTION 1496e39ca FUN_1496e39ca body=699 status=ok
// SIG undefined FUN_1496e39ca(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1496e39ca(undefined8 param_1,longlong *param_2,undefined8 param_3,uint param_4)

{
  longlong *plVar1;
  int *piVar2;
  double *pdVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  uint uVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  undefined1 auStack_2a8 [40];
  longlong *local_280;
  undefined2 local_278;
  undefined1 local_276;
  longlong local_270;
  undefined8 uStack_268;
  undefined1 local_25f;
  longlong local_258 [3];
  longlong local_240;
  longlong local_238;
  longlong local_228;
  uint local_220;
  longlong local_118 [5];
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  longlong local_d0;
  undefined4 local_c8;
  undefined8 local_b8 [13];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if (param_2 == (longlong *)0x0) {
    uVar18 = 0;
  }
  else {
    lVar20 = param_2[0xcc];
    uVar18 = 0;
    if (lVar20 != 0) {
      local_258[0] = 0;
      local_258[1] = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_118[1] = 0;
      local_118[2] = 0;
      local_e4 = 0xffffffff00000080;
      local_dc = 0;
      local_d0 = 0;
      local_c8 = 0;
      puVar21 = &DAT_14c846480;
      puVar22 = local_b8;
      for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
        *puVar22 = *puVar21;
        puVar21 = puVar21 + 1;
        puVar22 = puVar22 + 1;
      }
      local_118[0] = (ulonglong)param_4 << 0x20;
      local_280 = local_118;
      local_25f = 0;
      local_270 = 0;
      uStack_268 = 0;
      local_278 = 1;
      local_276 = 0;
      FUN_144588c92(param_3,&local_240,&local_280,0);
      lVar19 = *(longlong *)(lVar20 + 0x218);
      plVar9 = *(longlong **)(lVar20 + 0x220);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      uVar17 = FUN_1401f66f6(lVar19,DAT_14c9974a8);
      FUN_140ee84a4();
      if (0 < (int)uVar17) {
        lVar20 = 0;
        do {
          lVar10 = *(longlong *)(lVar19 + 0xc0);
          uVar18 = *(undefined8 *)(lVar10 + 0x20 + lVar20);
          dVar12 = (double)(float)((ulonglong)uVar18 >> 0x20);
          uVar4 = *(undefined8 *)(lVar10 + 0x28 + lVar20);
          uVar5 = *(undefined8 *)(lVar10 + 0x10 + lVar20);
          dVar14 = (double)(float)((ulonglong)uVar5 >> 0x20);
          uVar6 = *(undefined8 *)(lVar10 + 0x18 + lVar20);
          dVar16 = (double)(float)((ulonglong)uVar6 >> 0x20);
          uVar7 = *(undefined8 *)(lVar10 + lVar20);
          uVar8 = *(undefined8 *)(lVar10 + 8 + lVar20);
          pdVar3 = (double *)(local_258[0] + lVar20 * 2);
          *pdVar3 = (double)(float)uVar7;
          pdVar3[1] = (double)(float)((ulonglong)uVar7 >> 0x20);
          pdVar3 = (double *)(local_258[0] + 0x10 + lVar20 * 2);
          *pdVar3 = (double)(float)uVar8;
          pdVar3[1] = (double)(float)((ulonglong)uVar8 >> 0x20);
          auVar13._8_4_ = SUB84(dVar14,0);
          auVar13._0_8_ = (double)(float)uVar5;
          auVar13._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
          *(undefined1 (*) [16])(local_258[0] + 0x20 + lVar20 * 2) = auVar13;
          auVar15._8_4_ = SUB84(dVar16,0);
          auVar15._0_8_ = (double)(float)uVar6;
          auVar15._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
          *(undefined1 (*) [16])(local_258[0] + 0x30 + lVar20 * 2) = auVar15;
          auVar11._8_4_ = SUB84(dVar12,0);
          auVar11._0_8_ = (double)(float)uVar18;
          auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
          *(undefined1 (*) [16])(local_258[0] + 0x40 + lVar20 * 2) = auVar11;
          pdVar3 = (double *)(local_258[0] + 0x50 + lVar20 * 2);
          *pdVar3 = (double)(float)uVar4;
          pdVar3[1] = (double)(float)((ulonglong)uVar4 >> 0x20);
          lVar20 = lVar20 + 0x30;
        } while ((ulonglong)uVar17 * 0x30 != lVar20);
      }
      if (0 < (int)local_220) {
        lVar20 = 0;
        uVar23 = 0;
        do {
          puVar21 = (undefined8 *)(local_228 + lVar20);
          puVar22 = (undefined8 *)((longlong)*(int *)(local_238 + uVar23 * 4) * 0x60 + local_258[0])
          ;
          for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
            *puVar22 = *puVar21;
            puVar21 = puVar21 + 1;
            puVar22 = puVar22 + 1;
          }
          uVar23 = uVar23 + 1;
          lVar20 = lVar20 + 0x60;
        } while (local_220 != uVar23);
      }
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
      FUN_1496e16e8(&local_240);
      if (local_270 != 0) {
        FUN_1400020a8();
      }
      local_c8 = 0;
      if (local_d0 != 0) {
        FUN_1400020a8();
      }
      FUN_1401ad17c(local_118 + 1);
      FUN_1474a5c64(param_2,local_258);
      FUN_1496e2d24(&local_240,param_3,param_4);
      FUN_1474a726a(param_2,&local_240);
      local_118[0] = CONCAT71(local_118[0]._1_7_,2);
      FUN_1474a7208(param_2);
      (**(code **)(*param_2 + 0x690))(param_2,1);
      if (local_240 != 0) {
        FUN_1400020a8();
      }
      if (local_258[0] != 0) {
        FUN_1400020a8();
      }
      uVar18 = 1;
    }
  }
  if ((local_50 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return uVar18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e3c89 FUN_1496e3c89 body=466 status=ok
// SIG undefined FUN_1496e3c89(void)

void FUN_1496e3c89(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_168 [32];
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
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
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (((param_1 != 0) && (plVar3 = *(longlong **)(param_1 + 0x48), plVar3 != (longlong *)0x0)) &&
     (1 < *(byte *)((longlong)plVar3 + 0xc))) {
    lVar5 = (longlong)(int)plVar3[1];
    lVar4 = *(longlong *)(*plVar3 + 0x48);
    lVar6 = lVar5 * 0x10;
    dStack_130 = (double)*(float *)(lVar4 + 0xc + lVar6);
    lVar7 = *(longlong *)(*plVar3 + 0x28);
    local_138 = (double)*(float *)(lVar4 + 8 + lVar6);
    dStack_140 = (double)*(float *)(lVar4 + 4 + lVar6);
    local_148 = (double)*(float *)(lVar4 + lVar6);
    puVar1 = (undefined8 *)(lVar7 + lVar5 * 0x18);
    local_128 = *puVar1;
    uStack_120 = puVar1[1];
    local_118 = *(undefined8 *)(lVar7 + 0x10 + lVar5 * 0x18);
    uStack_110 = 0;
    local_108 = 0x3ff0000000000000;
    uStack_100 = 0x3ff0000000000000;
    local_f8 = 0x3ff0000000000000;
    uStack_f0 = 0;
    FUN_1449437a2(&local_148,&local_e8,param_2);
    iVar2 = *(int *)(param_3 + 0x10);
    *(uint *)(param_3 + 0x10) = iVar2 + 1U;
    if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
      FUN_1496ec5e2((longlong *)(param_3 + 8),iVar2);
    }
    lVar4 = *(longlong *)(param_3 + 8);
    lVar7 = (longlong)iVar2 * 0x90;
    *(undefined4 *)(lVar4 + lVar7) = 0;
    puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar7);
    *puVar1 = local_e8;
    puVar1[1] = uStack_e0;
    puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar7);
    *puVar1 = local_d8;
    puVar1[1] = uStack_d0;
    puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar7);
    *puVar1 = local_c8;
    puVar1[1] = uStack_c0;
    puVar1 = (undefined8 *)(lVar4 + 0x40 + lVar7);
    *puVar1 = local_b8;
    puVar1[1] = uStack_b0;
    puVar1 = (undefined8 *)(lVar4 + 0x50 + lVar7);
    *puVar1 = local_a8;
    puVar1[1] = uStack_a0;
    puVar1 = (undefined8 *)(lVar4 + 0x60 + lVar7);
    *puVar1 = local_98;
    puVar1[1] = uStack_90;
    *(undefined1 *)(lVar4 + 0x70 + lVar7) = 0;
    puVar1 = (undefined8 *)(lVar4 + 0x78 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  if ((local_80 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e3e6e FUN_1496e3e6e body=343 status=ok
// SIG undefined FUN_1496e3e6e(void)

void FUN_1496e3e6e(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_198 [40];
  undefined8 local_170;
  undefined2 local_168;
  undefined1 local_166;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 local_14f;
  undefined1 local_148 [24];
  double *local_130;
  int local_128;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if ((param_2 != 0) && (param_1 != 0)) {
    if (((*(float *)(param_2 + 0x28) != 0.0) || (NAN(*(float *)(param_2 + 0x28)))) &&
       (((plVar6 = *(longlong **)(param_1 + 0x48), plVar6 != (longlong *)0x0 &&
         (1 < *(byte *)((longlong)plVar6 + 0xc))) &&
        (*(char *)(*(longlong *)(*plVar6 + 0x2c0) + 0xb + (longlong)(int)plVar6[1] * 0x10) == '\x02'
        )))) {
      local_14f = 0;
      local_160 = 0;
      uStack_158 = 0;
      local_168 = 1;
      local_166 = 0;
      local_170 = param_3;
      FUN_144588c92(param_2,local_148,&local_170,0);
      if (local_128 == 1) {
        dVar3 = local_130[5];
        dVar2 = local_130[6];
        lVar8 = plVar6[1];
        lVar7 = *(longlong *)(*plVar6 + 0x28);
        pdVar1 = (double *)(lVar7 + (longlong)(int)lVar8 * 0x18);
        *pdVar1 = local_130[4];
        pdVar1[1] = dVar3;
        *(double *)(lVar7 + 0x10 + (longlong)(int)lVar8 * 0x18) = dVar2;
        dVar2 = local_130[3];
        dVar3 = local_130[2];
        dVar4 = local_130[1];
        lVar7 = *(longlong *)(*plVar6 + 0x48);
        lVar8 = (longlong)(int)plVar6[1] * 0x10;
        *(float *)(lVar7 + lVar8) = (float)*local_130;
        *(float *)(lVar7 + 4 + lVar8) = (float)dVar4;
        *(float *)(lVar7 + 8 + lVar8) = (float)dVar3;
        *(float *)(lVar7 + 0xc + lVar8) = (float)dVar2;
      }
      iVar5 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar5 + 1U) {
        FUN_1406b7a4a(param_4,iVar5);
      }
      *(longlong **)(*param_4 + (longlong)iVar5 * 8) = plVar6;
      FUN_1496e16e8(local_148);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e3fec FUN_1496e3fec body=102 status=ok
// SIG undefined FUN_1496e3fec(void)

undefined8 FUN_1496e3fec(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined7 uVar2;
  undefined7 extraout_var;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a7a726();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      uVar2 = (undefined7)((ulonglong)(lVar1 + 0x30) >> 8);
      if ((*(longlong *)(param_2 + 0x660) != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
        uVar2 = extraout_var;
      }
      else if (*(longlong *)(param_2 + 0x660) == 0) {
        return 0;
      }
      return CONCAT71(uVar2,0 < *(int *)(param_3 + 0x40));
    }
  }
  return 0;
}



// FUNCTION 1496e4052 FUN_1496e4052 body=86 status=ok
// SIG undefined FUN_1496e4052(void)

undefined8 FUN_1496e4052(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0xb0);
    if (lVar1 == 0) {
      lVar1 = FUN_1448abda6(param_2);
      if (lVar1 == 0) {
        return 0;
      }
      lVar1 = *(longlong *)(param_2 + 0xb0);
      if (lVar1 == 0) {
        lVar1 = FUN_1448abda6(param_2);
      }
    }
    if (*(longlong *)(lVar1 + 0x260) != 0) {
      return *(undefined8 *)(*(longlong *)(lVar1 + 0x260) + 0x38);
    }
  }
  return 0;
}



// FUNCTION 1496e40b2 FUN_1496e40b2 body=2124 status=ok
// SIG undefined FUN_1496e40b2(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1496e40b2(undefined8 param_1,undefined8 param_2,longlong param_3,double *param_4,
                  double param_5)

{
  undefined1 auVar1 [16];
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
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  double dVar31;
  undefined1 auVar29 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  undefined1 auStack_428 [32];
  double *local_408;
  undefined8 local_400;
  double local_3f8;
  double dStack_3f0;
  undefined1 local_3e8 [16];
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  undefined1 local_358 [16];
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  longlong local_318 [5];
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e4;
  undefined4 local_2dc;
  longlong local_2d0;
  undefined4 local_2c8;
  undefined8 local_2b8 [12];
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
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
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  auVar39 = _DAT_149934d80;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_428;
  if ((param_3 != 0) &&
     (((*(float *)(param_3 + 0x28) != 0.0 || (NAN(*(float *)(param_3 + 0x28)))) &&
      (*(int *)(param_3 + 0x50) == 1)))) {
    local_2f0 = 0;
    local_2e8 = 0;
    local_318[1] = 0;
    local_318[2] = 0;
    local_2e4 = 0xffffffff00000080;
    local_2dc = 0;
    local_2d0 = 0;
    local_2c8 = 0;
    puVar20 = &DAT_14c846480;
    puVar21 = local_2b8;
    for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
      *puVar21 = *puVar20;
      puVar20 = puVar20 + 1;
      puVar21 = puVar21 + 1;
    }
    local_318[0] = (ulonglong)(uint)(float)param_5 << 0x20;
    local_408 = &local_398;
    local_398 = 0.0;
    dStack_390 = 0.0;
    local_388 = 0.0;
    dStack_380 = 1.0;
    local_378 = 0.0;
    dStack_370 = 0.0;
    local_368 = 0.0;
    dStack_360 = 0.0;
    dVar26 = (double)DAT_149934d80;
    dVar31 = DAT_149934d80._8_8_;
    local_358 = _DAT_149934d80;
    local_348 = 1.0;
    dStack_340 = 0.0;
    local_400 = 0;
    uVar16 = FUN_1496e4900(param_3,0,local_318,0);
    dVar10 = dStack_340;
    dVar15 = local_348;
    local_3c8 = 0.0;
    dStack_3c0 = 0.0;
    local_3d8 = 0.0;
    dStack_3d0 = 0.0;
    auVar27 = *(undefined1 (*) [16])(param_4 + 8);
    dVar2 = auVar27._0_8_;
    dVar5 = auVar27._8_8_;
    auVar1 = *(undefined1 (*) [16])(param_4 + 10);
    dVar3 = auVar1._0_8_;
    dVar4 = local_358._0_8_;
    dVar6 = local_358._8_8_;
    auVar32._8_8_ = dStack_340;
    auVar32._0_8_ = local_348;
    auVar27 = minpd(local_358,auVar27);
    auVar32 = minpd(auVar32,auVar1);
    auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
    auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
    iVar17 = movmskpd(uVar16,auVar28);
    auVar27._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
    auVar27._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
    uVar18 = movmskpd((int)param_3,auVar27);
    if ((uVar18 & 0x3fffffff) == 0 && iVar17 == 0) {
      dVar11 = *param_4;
      dVar12 = param_4[1];
      dVar13 = param_4[2];
      dVar14 = param_4[3];
      dVar31 = param_4[3];
      dVar26 = param_4[3];
      dVar7 = param_4[1];
      dVar25 = param_4[1];
      dVar36 = param_4[2];
      dVar33 = param_4[2];
      local_3f8 = dStack_390 * dVar36 * -1.0 +
                  local_388 * dVar7 + dStack_380 * *param_4 * 1.0 + local_398 * dVar31;
      dStack_3f0 = local_398 * dVar33 * 1.0 +
                   dStack_380 * dVar25 + local_388 * *param_4 * -1.0 + dStack_390 * dVar26;
      dVar38 = local_378 * dVar2;
      dVar8 = dStack_370 * dVar5;
      dVar9 = local_368 * dVar3;
      dVar30 = dStack_360 * auVar1._8_8_;
      dVar37 = dVar8 * dVar11 - dVar12 * dVar38;
      dVar41 = dVar9 * dVar12 - dVar13 * dVar8;
      dVar34 = dVar38 * dVar13 - dVar11 * dVar9;
      dVar35 = dVar30 * dVar14 - dVar14 * dVar30;
      dVar41 = dVar41 + dVar41;
      dVar34 = dVar34 + dVar34;
      dVar37 = dVar37 + dVar37;
      dVar35 = dVar35 + dVar35;
      local_3d8 = (dVar37 * dVar12 - dVar13 * dVar34) + dVar31 * dVar41 + dVar38 + param_4[4];
      dStack_3d0 = (dVar41 * dVar13 - dVar37 * dVar11) + dVar26 * dVar34 + dVar8 + param_4[5];
      local_3c8 = (dVar34 * dVar11 - dVar12 * dVar41) + dVar31 * dVar37 + dVar9 + param_4[6];
      dStack_3c0 = (dVar35 * dVar14 - dVar35 * dVar14) + dVar26 * dVar35 + dVar30 + param_4[7];
      local_3e8._8_8_ =
           local_388 * dVar33 * -1.0 +
           ((*param_4 * local_398 * -1.0 + dStack_380 * dVar26) - dStack_390 * dVar25);
      local_3e8._0_8_ =
           dStack_380 * dVar36 * 1.0 +
           ((*param_4 * dStack_390 * 1.0 + local_388 * dVar31) - local_398 * dVar7);
    }
    else {
      dVar38 = *param_4;
      dVar8 = param_4[1];
      dVar9 = param_4[2];
      dVar30 = dVar8 + dVar8;
      dVar34 = dVar9 + dVar9;
      dVar33 = dVar38 * (dVar38 + dVar38);
      local_188 = (1.0 - (dVar33 + dVar8 * dVar30)) * dVar3;
      dVar25 = param_4[3];
      dVar35 = dVar34 * dVar25;
      dVar37 = (dVar38 + dVar38) * param_4[3];
      dVar25 = dVar30 * dVar25;
      local_198 = (dVar25 + *param_4 * dVar34) * dVar3;
      dVar7 = dVar3 * local_348;
      dVar33 = (dVar31 - (dVar9 * dVar34 + dVar33)) * dVar5;
      dVar36 = (dVar30 * dVar38 + dVar35) * dVar2;
      local_1a8 = (dVar34 * dVar8 + dVar37) * dVar5;
      dStack_190 = (dVar34 * dVar8 - dVar37) * dVar3;
      local_1c8 = (*param_4 * dVar34 - dVar25) * dVar2;
      local_1d8._8_4_ = SUB84(dVar36,0);
      local_1d8._0_8_ = (dVar26 - (dVar9 * dVar34 + dVar8 * dVar30)) * dVar2;
      local_1d8._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
      uStack_1c0 = 0;
      local_1b8._8_4_ = SUB84(dVar33,0);
      local_1b8._0_8_ = (dVar30 * dVar38 - dVar35) * dVar5;
      local_1b8._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
      uStack_1a0 = 0;
      uStack_180 = 0;
      local_178 = param_4[4];
      dStack_170 = param_4[5];
      local_168 = param_4[6];
      uStack_160 = 0x3ff0000000000000;
      dVar33 = dStack_390 + dStack_390;
      dVar36 = local_388 + local_388;
      dVar25 = local_398 * (local_398 + local_398);
      local_208 = (1.0 - (dVar25 + dStack_390 * dVar33)) * local_348;
      dVar38 = (local_398 + local_398) * dStack_380;
      local_218 = (dVar33 * dStack_380 + local_398 * dVar36) * local_348;
      dStack_210 = (dVar36 * dStack_390 - dVar38) * local_348;
      local_258 = (dVar26 - (local_388 * dVar36 + dStack_390 * dVar33)) * dVar4;
      dVar26 = (dVar31 - (local_388 * dVar36 + dVar25)) * dVar6;
      dStack_250 = (dVar33 * local_398 + dVar36 * dStack_380) * dVar4;
      local_228 = (dVar36 * dStack_390 + dVar38) * dVar6;
      local_248 = (local_398 * dVar36 - dVar33 * dStack_380) * dVar4;
      uStack_240 = 0;
      local_238._8_4_ = SUB84(dVar26,0);
      local_238._0_8_ = (dVar33 * local_398 - dVar36 * dStack_380) * dVar6;
      local_238._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
      uStack_220 = 0;
      uStack_200 = 0;
      local_1f8 = local_378;
      dStack_1f0 = dStack_370;
      local_1e8 = local_368;
      uStack_1e0 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar23._8_8_ = -(ulonglong)(0.0 <= dVar5 * dVar6);
      auVar23._0_8_ = -(ulonglong)(0.0 <= dVar2 * dVar4);
      auVar27 = blendvpd(_DAT_149936790,auVar39,auVar23);
      uVar22 = -(ulonglong)(0.0 <= dVar7);
      dVar26 = (double)(~uVar22 & 0xbff0000000000000 | uVar22 & 0x3ff0000000000000);
      dVar31 = auVar27._0_8_;
      local_148 = local_148 * dVar31;
      local_150 = local_150 * dVar31;
      local_158 = local_158 * dVar31;
      dVar31 = auVar27._8_8_;
      local_128 = local_128 * dVar31;
      local_130 = local_130 * dVar31;
      local_138 = dVar31 * local_138;
      local_108 = local_108 * dVar26;
      local_110 = local_110 * dVar26;
      local_118 = dVar26 * local_118;
      FUN_14481fd10(&local_338,&local_158);
      dVar26 = local_328 * local_328 + local_338 * local_338;
      dVar31 = dStack_320 * dStack_320 + dStack_330 * dStack_330;
      auVar29._0_8_ = dVar26 + dVar31;
      auVar29._8_8_ = dVar26 + dVar31;
      auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
      auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
      auVar27 = sqrtpd(auVar29,auVar29);
      auVar39 = divpd(auVar39,auVar27);
      auVar40._0_8_ = auVar39._0_8_ * local_328;
      auVar40._8_8_ = auVar39._8_8_ * dStack_320;
      local_3f8 = (double)((ulonglong)(local_338 * auVar39._0_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_));
      dStack_3f0 = (double)((ulonglong)(dStack_330 * auVar39._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_));
      local_3e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar40,auVar24);
      local_3d8 = local_f8;
      dStack_3d0 = dStack_f0;
      local_3c8 = local_e8;
      dStack_3c0 = 0.0;
    }
    dVar10 = auVar1._8_8_ * dVar10;
    local_3b8._8_4_ = SUB84(dVar5 * dVar6,0);
    local_3b8._0_8_ = dVar2 * dVar4;
    local_3b8._12_4_ = (int)((ulonglong)(dVar5 * dVar6) >> 0x20);
    local_3a8._8_4_ = SUB84(dVar10,0);
    local_3a8._0_8_ = dVar3 * dVar15;
    local_3a8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    local_408 = (double *)((ulonglong)local_408 & 0xffffffffffffff00);
    FUN_140613f88(param_2,&local_3f8,0,0);
    local_2c8 = 0;
    if (local_2d0 != 0) {
      FUN_1400020a8();
    }
    FUN_1401ad17c(local_318 + 1);
  }
  if ((local_d0 ^ (ulonglong)auStack_428) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e4900 FUN_1496e4900 body=1948 status=ok
// SIG undefined FUN_1496e4900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1496e4900(longlong param_1,int param_2,float *param_3,undefined8 param_4,double *param_5,
                  longlong param_6)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  double *pdVar23;
  double *pdVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined1 auVar27 [16];
  double dVar29;
  undefined1 auVar28 [16];
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auStack_2b8 [32];
  undefined1 local_298;
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
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168 [4];
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  lVar25 = (longlong)param_2 * 0x98 + *(longlong *)(param_1 + 0x48);
  if (param_5 != (double *)0x0) {
    local_298 = *(undefined1 *)(param_1 + 0x30);
    uVar19 = FUN_14458ece0(lVar25,local_168,param_3[1] + *param_3);
    pdVar23 = local_168;
    pdVar24 = param_5;
    for (lVar22 = 0xc; auVar41 = _DAT_149934d80, lVar22 != 0; lVar22 = lVar22 + -1) {
      *pdVar24 = *pdVar23;
      pdVar23 = pdVar23 + 1;
      pdVar24 = pdVar24 + 1;
    }
    auVar32 = *(undefined1 (*) [16])(param_3 + 0x28);
    dVar5 = auVar32._0_8_;
    dVar9 = auVar32._8_8_;
    auVar3 = *(undefined1 (*) [16])(param_3 + 0x2c);
    dVar6 = auVar3._0_8_;
    auVar33 = *(undefined1 (*) [16])(param_5 + 8);
    dVar7 = auVar33._0_8_;
    dVar10 = auVar33._8_8_;
    auVar4 = *(undefined1 (*) [16])(param_5 + 10);
    dVar8 = auVar4._0_8_;
    auVar32 = minpd(auVar33,auVar32);
    auVar36 = minpd(auVar4,auVar3);
    auVar33._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
    auVar33._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
    iVar20 = movmskpd(uVar19,auVar33);
    auVar32._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
    auVar32._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
    uVar21 = movmskpd(0,auVar32);
    if ((uVar21 & 0x3fffffff) == 0 && iVar20 == 0) {
      dVar39 = *param_5;
      dVar40 = param_5[1];
      dVar13 = param_5[2];
      dVar14 = param_5[3];
      dVar15 = *(double *)(param_3 + 0x18);
      dVar16 = *(double *)(param_3 + 0x1a);
      dVar17 = *(double *)(param_3 + 0x1c);
      dVar18 = *(double *)(param_3 + 0x1e);
      dVar30 = *(double *)(param_3 + 0x1e);
      dVar29 = *(double *)(param_3 + 0x1e);
      dVar12 = *(double *)(param_3 + 0x18);
      dVar1 = *(double *)(param_3 + 0x18);
      dVar2 = *(double *)(param_3 + 0x1a);
      dVar37 = *(double *)(param_3 + 0x1a);
      dVar38 = *(double *)(param_3 + 0x1c);
      dVar34 = *(double *)(param_3 + 0x1c);
      dVar31 = dVar40 * dVar38 * -1.0 + dVar13 * dVar2 + dVar14 * dVar12 * 1.0 + dVar39 * dVar30;
      dVar35 = dVar39 * dVar34 * 1.0 + dVar14 * dVar37 + dVar13 * dVar1 * -1.0 + dVar40 * dVar29;
      auVar41._0_8_ =
           dVar14 * dVar38 * 1.0 + ((dVar12 * dVar40 * 1.0 + dVar13 * dVar30) - dVar39 * dVar2);
      auVar41._8_8_ =
           dVar13 * dVar34 * -1.0 + ((dVar1 * dVar39 * -1.0 + dVar14 * dVar29) - dVar40 * dVar37);
      dVar37 = param_5[4] * dVar5;
      dVar34 = param_5[5] * dVar9;
      dVar38 = param_5[6] * dVar6;
      dVar39 = param_5[7] * auVar3._8_8_;
      dVar12 = dVar34 * dVar15 - dVar16 * dVar37;
      dVar1 = dVar38 * dVar16 - dVar17 * dVar34;
      dVar2 = dVar37 * dVar17 - dVar15 * dVar38;
      dVar40 = dVar39 * dVar18 - dVar18 * dVar39;
      dVar1 = dVar1 + dVar1;
      dVar2 = dVar2 + dVar2;
      dVar12 = dVar12 + dVar12;
      dVar40 = dVar40 + dVar40;
      local_108 = (dVar12 * dVar16 - dVar17 * dVar2) + dVar30 * dVar1 + dVar37 +
                  *(double *)(param_3 + 0x20);
      dStack_100 = (dVar1 * dVar17 - dVar12 * dVar15) + dVar29 * dVar2 + dVar34 +
                   *(double *)(param_3 + 0x22);
      local_f8 = (dVar2 * dVar15 - dVar16 * dVar1) + dVar30 * dVar12 + dVar38 +
                 *(double *)(param_3 + 0x24);
      dVar30 = (dVar40 * dVar18 - dVar40 * dVar18) + dVar29 * dVar40 + dVar39 +
               *(double *)(param_3 + 0x26);
    }
    else {
      dVar1 = *(double *)(param_3 + 0x18);
      dVar2 = *(double *)(param_3 + 0x1a);
      dVar37 = *(double *)(param_3 + 0x1c);
      dVar34 = dVar2 + dVar2;
      dVar38 = dVar37 + dVar37;
      dVar29 = dVar1 * (dVar1 + dVar1);
      local_198 = (1.0 - (dVar29 + dVar2 * dVar34)) * dVar6;
      dVar30 = *(double *)(param_3 + 0x1e);
      dVar39 = dVar38 * dVar30;
      dVar40 = (dVar1 + dVar1) * *(double *)(param_3 + 0x1e);
      dVar30 = dVar34 * dVar30;
      local_1a8 = (dVar30 + *(double *)(param_3 + 0x18) * dVar38) * dVar6;
      dVar29 = (DAT_149934d80._8_8_ - (dVar37 * dVar38 + dVar29)) * dVar9;
      dVar12 = (dVar34 * dVar1 + dVar39) * dVar5;
      local_1b8 = (dVar38 * dVar2 + dVar40) * dVar9;
      dStack_1a0 = (dVar38 * dVar2 - dVar40) * dVar6;
      local_1d8 = (*(double *)(param_3 + 0x18) * dVar38 - dVar30) * dVar5;
      local_1e8._8_4_ = SUB84(dVar12,0);
      local_1e8._0_8_ = ((double)DAT_149934d80 - (dVar37 * dVar38 + dVar2 * dVar34)) * dVar5;
      local_1e8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      uStack_1d0 = 0;
      local_1c8._8_4_ = SUB84(dVar29,0);
      local_1c8._0_8_ = (dVar34 * dVar1 - dVar39) * dVar9;
      local_1c8._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
      uStack_1b0 = 0;
      uStack_190 = 0;
      local_188 = *(undefined8 *)(param_3 + 0x20);
      uStack_180 = *(undefined8 *)(param_3 + 0x22);
      local_178 = *(undefined8 *)(param_3 + 0x24);
      uStack_170 = 0x3ff0000000000000;
      dVar12 = *param_5;
      dVar1 = param_5[1];
      dVar2 = param_5[2];
      dVar37 = dVar1 + dVar1;
      dVar34 = dVar2 + dVar2;
      dVar29 = dVar12 * (dVar12 + dVar12);
      local_218 = (1.0 - (dVar29 + dVar1 * dVar37)) * dVar8;
      dVar30 = param_5[3];
      dVar38 = dVar34 * dVar30;
      dVar39 = (dVar12 + dVar12) * param_5[3];
      dVar30 = dVar37 * dVar30;
      local_228 = (dVar30 + *param_5 * dVar34) * dVar8;
      dStack_220 = (dVar34 * dVar1 - dVar39) * dVar8;
      local_268 = ((double)DAT_149934d80 - (dVar2 * dVar34 + dVar1 * dVar37)) * dVar7;
      dVar29 = (DAT_149934d80._8_8_ - (dVar2 * dVar34 + dVar29)) * dVar10;
      dStack_260 = (dVar37 * dVar12 + dVar38) * dVar7;
      local_238 = (dVar34 * dVar1 + dVar39) * dVar10;
      local_258 = (*param_5 * dVar34 - dVar30) * dVar7;
      uStack_250 = 0;
      local_248._8_4_ = SUB84(dVar29,0);
      local_248._0_8_ = (dVar37 * dVar12 - dVar38) * dVar10;
      local_248._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
      uStack_230 = 0;
      uStack_210 = 0;
      local_208 = param_5[4];
      dStack_200 = param_5[5];
      local_1f8 = param_5[6];
      uStack_1f0 = 0x3ff0000000000000;
      FUN_1447fea8d(local_168);
      FUN_144a1c686(local_168,0x3e45798ee0000000);
      auVar36._8_8_ = -(ulonglong)(0.0 <= dVar9 * dVar10);
      auVar36._0_8_ = -(ulonglong)(0.0 <= dVar5 * dVar7);
      auVar32 = blendvpd(_DAT_149936790,auVar41,auVar36);
      uVar26 = -(ulonglong)(0.0 <= dVar6 * dVar8);
      dVar30 = (double)(~uVar26 & 0xbff0000000000000 | uVar26 & 0x3ff0000000000000);
      dVar29 = auVar32._0_8_;
      local_168[2] = local_168[2] * dVar29;
      local_168[1] = local_168[1] * dVar29;
      local_168[0] = local_168[0] * dVar29;
      dVar29 = auVar32._8_8_;
      local_138 = local_138 * dVar29;
      local_140 = local_140 * dVar29;
      local_148 = dVar29 * local_148;
      local_118 = local_118 * dVar30;
      local_120 = local_120 * dVar30;
      local_128 = dVar30 * local_128;
      FUN_14481fd10(&local_288,local_168);
      dVar30 = local_278 * local_278 + local_288 * local_288;
      dVar29 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
      auVar28._0_8_ = dVar30 + dVar29;
      auVar28._8_8_ = dVar30 + dVar29;
      auVar27._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_);
      auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
      auVar32 = sqrtpd(auVar28,auVar28);
      auVar41 = divpd(auVar41,auVar32);
      auVar42._0_8_ = auVar41._0_8_ * local_278;
      auVar42._8_8_ = auVar41._8_8_ * dStack_270;
      dVar31 = (double)((ulonglong)(local_288 * auVar41._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_));
      dVar35 = (double)((ulonglong)(dStack_280 * auVar41._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_));
      auVar41 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar42,auVar27);
      dVar30 = 0.0;
    }
    dVar29 = auVar3._8_8_ * auVar4._8_8_;
    *param_5 = dVar31;
    param_5[1] = dVar35;
    *(undefined1 (*) [16])(param_5 + 2) = auVar41;
    auVar4._8_4_ = SUB84(dStack_100,0);
    auVar4._0_8_ = local_108;
    auVar4._12_4_ = (int)((ulonglong)dStack_100 >> 0x20);
    *(undefined1 (*) [16])(param_5 + 4) = auVar4;
    param_5[6] = local_f8;
    param_5[7] = dVar30;
    auVar11._8_4_ = SUB84(dVar9 * dVar10,0);
    auVar11._0_8_ = dVar5 * dVar7;
    auVar11._12_4_ = (int)((ulonglong)(dVar9 * dVar10) >> 0x20);
    *(undefined1 (*) [16])(param_5 + 8) = auVar11;
    auVar3._8_4_ = SUB84(dVar29,0);
    auVar3._0_8_ = dVar6 * dVar8;
    auVar3._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
    *(undefined1 (*) [16])(param_5 + 10) = auVar3;
  }
  if (param_6 != 0) {
    FUN_1496e9458(lVar25,param_3[1] + *param_3,param_6);
  }
  if ((local_e0 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e50a2 FUN_1496e50a2 body=153 status=ok
// SIG undefined FUN_1496e50a2(void)

undefined8 FUN_1496e50a2(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_144a7a726();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar1 = (**(code **)(*param_2 + 0x7b8))(param_2,0,1,0xffffffff);
      if (lVar1 != 0) {
        lVar1 = (**(code **)(*param_2 + 0x7b8))(param_2,0,1,0xffffffff);
        if (*(longlong *)(lVar1 + 0x138) != 0) {
          lVar1 = (**(code **)(*param_2 + 0x7b8))(param_2,0,1,0xffffffff);
          FUN_140cd4d2c(lVar1 + 0x138,1);
        }
      }
    }
  }
  return 1;
}



// FUNCTION 1496e5146 FUN_1496e5146 body=77 status=ok
// SIG undefined FUN_1496e5146(void)

void FUN_1496e5146(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1427dc336(local_20);
  switchD_143c3d4dc::caseD_3d(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e5194 FUN_1496e5194 body=84 status=ok
// SIG undefined FUN_1496e5194(void)

longlong FUN_1496e5194(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x28);
    lVar2 = (longlong)*(int *)(param_1 + 0x30) << 3;
    do {
      lVar1 = *plVar3;
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x18) == *param_2)) {
        if (plVar3 == (longlong *)0x0) {
          return 0;
        }
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar1);
          return lVar1;
        }
        return lVar1;
      }
      plVar3 = plVar3 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 1496e51e8 FUN_1496e51e8 body=467 status=ok
// SIG undefined FUN_1496e51e8(void)

longlong FUN_1496e51e8(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined2 *local_40;
  int local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar7 = *param_2;
  local_30 = lVar7;
  if ((lVar7 != 0) && ((longlong)*(int *)(param_1 + 0x30) != 0)) {
    plVar5 = *(longlong **)(param_1 + 0x28);
    lVar2 = (longlong)*(int *)(param_1 + 0x30) << 3;
    do {
      lVar4 = *plVar5;
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x18) == lVar7)) {
        if (plVar5 != (longlong *)0x0) {
          if (DAT_14c950c29 == '\x01') goto LAB_1496e5398;
          goto LAB_1496e526a;
        }
        break;
      }
      plVar5 = plVar5 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  FUN_1400021e4(&local_30,&local_40);
  puVar6 = local_40;
  if (local_38 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  uVar3 = FUN_1459d99ae();
  lVar2 = FUN_140277b32(uVar3,param_1,puVar6,0);
  if (lVar2 == 0) {
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (lVar7 != 0) goto LAB_1496e534b;
  }
  else if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14029eeae(&local_30,&local_40);
  puVar6 = local_40;
  if (local_38 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_50,puVar6,1);
  uVar3 = FUN_1459d99ae();
  local_58 = 0;
  FUN_140af9fb2(&local_48,param_1,uVar3,local_50);
  local_30 = local_48;
  lVar7 = local_48;
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
    lVar7 = local_30;
  }
LAB_1496e534b:
  lVar4 = FUN_1496e53bc(param_1,lVar7);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1496edc8c((longlong *)(param_1 + 0x28),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
LAB_1496e5398:
    FUN_1456cec3c(lVar4);
  }
LAB_1496e526a:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 1496e53bc FUN_1496e53bc body=183 status=ok
// SIG undefined FUN_1496e53bc(void)

undefined8 FUN_1496e53bc(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1459d99ae();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e5474 FUN_1496e5474 body=53 status=ok
// SIG undefined FUN_1496e5474(void)

void FUN_1496e5474(longlong param_1)

{
  FUN_1496e54aa();
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1496e54aa FUN_1496e54aa body=170 status=ok
// SIG undefined FUN_1496e54aa(void)

void FUN_1496e54aa(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    iVar1 = *(int *)(param_1 + 0x28);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x20);
      lVar4 = 0;
      do {
        uVar3 = *(undefined8 *)(lVar2 + lVar4);
        (**(code **)(**(longlong **)(param_1 + 8) + 0x2f0))(*(longlong **)(param_1 + 8),uVar3,1);
        FUN_1400020a8(uVar3);
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (*(int *)(param_1 + 0x2c) < 0) {
      FUN_1481c5400(param_1 + 0x20,0);
    }
    if (*(int *)(param_1 + 0x1c) < 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      FUN_14482f6fa(param_1 + 0x10,0);
      return;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1496e5554 FUN_1496e5554 body=143 status=ok
// SIG undefined FUN_1496e5554(void)

void FUN_1496e5554(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_2 + 0x28);
  if ((bVar2 & 5) != 0) {
    if (DAT_14cc22470 == 0) {
      uVar1 = FUN_140fdaba3();
      DAT_14cc22470 = FUN_140002ddd(FUN_14674dccb,uVar1,L"CacheEventTrack");
    }
    FUN_14496b17c(DAT_14cc22470,param_2,param_1,*(undefined8 *)(param_1 + 8),0,0);
    bVar2 = *(byte *)(param_2 + 0x28);
  }
  if ((bVar2 & 4) == 0) {
    if ((bVar2 & 1) == 0) {
      return;
    }
    FUN_1496e5884(param_1,param_2);
    return;
  }
  FUN_1496e55e4(param_1,param_2);
  return;
}



// FUNCTION 1496e55e4 FUN_1496e55e4 body=670 status=ok
// SIG undefined FUN_1496e55e4(void)

void FUN_1496e55e4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [4];
  undefined1 local_e4 [4];
  longlong *local_e0 [2];
  wchar_t *local_d0;
  longlong *local_c8;
  longlong *local_c0 [2];
  undefined1 local_b0 [8];
  undefined1 local_a8 [48];
  undefined8 local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  wchar_t *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar7 = *(longlong *)(param_1 + 8);
  if (lVar7 == 0) {
    if (DAT_14cc22458 == 0) {
      uVar6 = FUN_140fdaba3();
      DAT_14cc22458 = FUN_140002ddd(FUN_14674d9a4,uVar6,L"CacheEventBase");
    }
    lVar7 = DAT_14cc22458;
    FUN_1446ddc76(local_b0,"SaveErrors",1);
    FUN_14276766e(local_a8,local_b0);
    FUN_144a5dc74(local_c0);
    FUN_142767974(local_a8,&local_78,local_c0);
    local_58 = L"StructSaveError";
    local_50._0_4_ = 0xf;
    FUN_1446e940c(local_e4,&local_58);
    local_58 = L"ChaosCache";
    local_50 = (longlong *)CONCAT44(local_50._4_4_,10);
    FUN_1446e940c(local_e8,&local_58);
    FUN_140208bae(local_e0,local_e8,local_e4,
                  L"Failed to save Chaos cache event track as the underlying struct was unavailable."
                 );
    FUN_1467eb2e4(&local_d0,local_e0,1);
    local_58 = local_d0;
    local_50 = local_c8;
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
      UNLOCK();
    }
    FUN_1467eb24e(local_78,local_68,&local_58);
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
    plVar1 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar2 = (int *)((longlong)local_c8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_c8 + 0x10))(local_c8);
        }
      }
    }
    if (local_e0[0] != (longlong *)0x0) {
      (**(code **)(*local_e0[0] + 0x10))();
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
    if (local_c0[0] != (longlong *)0x0) {
      (**(code **)(*local_c0[0] + 0x10))();
    }
    FUN_1427678c0(local_a8);
  }
  iVar4 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar4 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x20);
    lVar8 = 0;
    do {
      FUN_14047320e(lVar7,param_2,*(undefined8 *)(lVar5 + lVar8),0);
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar4 * 8 != lVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e5884 FUN_1496e5884 body=746 status=ok
// SIG undefined FUN_1496e5884(void)

void FUN_1496e5884(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [4];
  undefined1 local_e4 [4];
  longlong *local_e0 [2];
  wchar_t *local_d0;
  longlong *local_c8;
  longlong *local_c0 [2];
  undefined1 local_b0 [8];
  undefined1 local_a8 [48];
  undefined8 local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  wchar_t *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar7 = *(longlong **)(param_1 + 8);
  if (plVar7 == (longlong *)0x0) {
    if (DAT_14cc22458 == (longlong *)0x0) {
      uVar6 = FUN_140fdaba3();
      DAT_14cc22458 = (longlong *)FUN_140002ddd(FUN_14674d9a4,uVar6,L"CacheEventBase");
    }
    plVar7 = DAT_14cc22458;
    FUN_1446ddc76(local_b0,"LoadErrors",1);
    FUN_14276766e(local_a8,local_b0);
    FUN_144a5dc74(local_c0);
    FUN_142767974(local_a8,&local_78,local_c0);
    local_58 = L"StructLoadError";
    local_50._0_4_ = 0xf;
    FUN_1446e940c(local_e4,&local_58);
    local_58 = L"ChaosCache";
    local_50 = (longlong *)CONCAT44(local_50._4_4_,10);
    FUN_1446e940c(local_e8,&local_58);
    FUN_140208bae(local_e0,local_e8,local_e4,
                  L"Failed to load Chaos cache event track as the underlying struct was unavailable."
                 );
    FUN_1467eb2e4(&local_d0,local_e0,1);
    local_58 = local_d0;
    local_50 = local_c8;
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
      UNLOCK();
    }
    FUN_1467eb24e(local_78,local_68,&local_58);
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
    plVar1 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar2 = (int *)((longlong)local_c8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_c8 + 0x10))(local_c8);
        }
      }
    }
    if (local_e0[0] != (longlong *)0x0) {
      (**(code **)(*local_e0[0] + 0x10))();
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
    if (local_c0[0] != (longlong *)0x0) {
      (**(code **)(*local_c0[0] + 0x10))();
    }
    FUN_1427678c0(local_a8);
  }
  iVar8 = *(int *)(param_1 + 0x18);
  if (0 < iVar8) {
    do {
      uVar6 = FUN_14001cc68((longlong)
                            (int)(-*(int *)((longlong)plVar7 + 0x5c) &
                                 ((int)plVar7[0xb] + *(int *)((longlong)plVar7 + 0x5c)) - 1U),0);
      (**(code **)(*plVar7 + 0x2e8))(plVar7,uVar6,1);
      FUN_14047320e(plVar7,param_2,uVar6,0);
      iVar4 = *(int *)(param_1 + 0x28);
      uVar5 = iVar4 + 1;
      *(uint *)(param_1 + 0x28) = uVar5;
      if (*(uint *)(param_1 + 0x2c) < uVar5) {
        FUN_14018c802((longlong *)(param_1 + 0x20));
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 8) = uVar6;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496e5b70 FUN_1496e5b70 body=532 status=ok
// SIG undefined FUN_1496e5b70(void)

void FUN_1496e5b70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    iVar5 = *(int *)(param_2 + 0x18);
    if (0 < (longlong)iVar5) {
      plVar1 = (longlong *)(param_1 + 0x10);
      plVar2 = (longlong *)(param_1 + 0x20);
      lVar11 = 0;
      do {
        lVar15 = *(longlong *)(param_2 + 0x10);
        uVar6 = *(uint *)(param_1 + 0x18);
        lVar8 = *(longlong *)(param_1 + 0x10);
        if ((longlong)(int)uVar6 < 1) {
LAB_1496e5ca6:
          *(uint *)(param_1 + 0x18) = uVar6 + 1;
          if (*(uint *)(param_1 + 0x1c) < uVar6 + 1) {
            FUN_14475e4ac(plVar1,uVar6);
            lVar8 = *plVar1;
          }
          *(undefined4 *)(lVar8 + (longlong)(int)uVar6 * 4) = *(undefined4 *)(lVar15 + lVar11 * 4);
          lVar15 = *(longlong *)(param_2 + 0x20);
          iVar12 = *(int *)(param_1 + 0x28);
          uVar14 = (ulonglong)iVar12;
          *(uint *)(param_1 + 0x28) = iVar12 + 1U;
          if (*(uint *)(param_1 + 0x2c) < iVar12 + 1U) {
            FUN_14018c802(plVar2,iVar12);
          }
        }
        else {
          fVar4 = *(float *)(lVar15 + lVar11 * 4);
          uVar14 = 0;
          uVar10 = (ulonglong)uVar6;
          do {
            uVar13 = (int)(uVar10 >> 1) + (int)uVar14;
            pfVar3 = (float *)(lVar8 + (ulonglong)uVar13 * 4);
            uVar9 = (uint)uVar10;
            if (*pfVar3 <= fVar4 && fVar4 != *pfVar3) {
              uVar14 = (ulonglong)(uVar13 + (uVar9 & 1));
            }
            uVar10 = uVar10 >> 1;
          } while (1 < uVar9);
          iVar12 = (int)uVar14;
          if (uVar6 - iVar12 == 0 || (int)uVar6 < iVar12) goto LAB_1496e5ca6;
          *(uint *)(param_1 + 0x18) = uVar6 + 1;
          if (*(uint *)(param_1 + 0x1c) <= uVar6) {
            FUN_14475e4ac(plVar1,uVar6);
            lVar8 = *plVar1;
          }
          memmove((void *)(lVar8 + uVar14 * 4 + 4),(void *)(lVar8 + uVar14 * 4),
                  (ulonglong)(uVar6 - iVar12) << 2);
          *(undefined4 *)(*(longlong *)(param_1 + 0x10) + uVar14 * 4) =
               *(undefined4 *)(lVar15 + lVar11 * 4);
          lVar15 = *(longlong *)(param_2 + 0x20);
          iVar7 = *(int *)(param_1 + 0x28);
          *(uint *)(param_1 + 0x28) = iVar7 + 1U;
          if (*(uint *)(param_1 + 0x2c) < iVar7 + 1U) {
            FUN_14018c802(plVar2,iVar7);
          }
          memmove((void *)(*plVar2 + uVar14 * 8 + 8),(void *)(*plVar2 + uVar14 * 8),
                  (ulonglong)(uint)(iVar7 - iVar12) << 3);
        }
        *(undefined8 *)(uVar14 * 8 + *plVar2) = *(undefined8 *)(lVar15 + lVar11 * 8);
        lVar11 = lVar11 + 1;
      } while (lVar11 != iVar5);
    }
    *(undefined4 *)(param_2 + 0x18) = 0;
    if (*(int *)(param_2 + 0x1c) < 0) {
      FUN_14482f6fa((longlong *)(param_2 + 0x10),0);
    }
    if (*(int *)(param_2 + 0x2c) < 0) {
      *(undefined4 *)(param_2 + 0x28) = 0;
      FUN_1481c5400(param_2 + 0x20,0);
      return;
    }
    *(undefined4 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1496e5d84 FUN_1496e5d84 body=182 status=ok
// SIG undefined FUN_1496e5d84(void)

void FUN_1496e5d84(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 0x5c);
  uVar2 = FUN_14001cc68((longlong)
                        (int)(-iVar1 & (*(int *)(*(longlong *)(param_1 + 8) + 0x58) + iVar1) - 1U),0
                       );
  (**(code **)(**(longlong **)(param_1 + 8) + 0x2e8))(*(longlong **)(param_1 + 8),uVar2,1);
  FUN_1449b16b6(*(undefined8 *)(param_1 + 8),uVar2,param_3,1);
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14475e4ac(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = param_2;
  iVar1 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_14018c802(param_1 + 0x20,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 8) = uVar2;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  return;
}



// FUNCTION 1496e5e4c FUN_1496e5e4c body=270 status=ok
// SIG undefined FUN_1496e5e4c(void)

void FUN_1496e5e4c(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((-1 < (longlong)local_1c) && (local_1c < *(int *)(param_1 + 0x3b0))) {
    *(bool *)(*(longlong *)(param_1 + 0x3a8) + 0x79 + (longlong)local_1c * 0x180) = local_20 != 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e5f62 FUN_1496e5f62 body=297 status=ok
// SIG undefined FUN_1496e5f62(void)

void FUN_1496e5f62(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [36];
  int local_24;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  if ((longlong)*(int *)(param_1 + 0x3b0) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x3a8);
    lVar2 = (longlong)*(int *)(param_1 + 0x3b0) * 0x180;
    do {
      if (*plVar1 == local_20) {
        if (plVar1 != (longlong *)0x0) {
          *(bool *)((longlong)plVar1 + 0x79) = local_24 != 0;
        }
        break;
      }
      plVar1 = plVar1 + 0x30;
      lVar2 = lVar2 + -0x180;
    } while (lVar2 != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e60a2 FUN_1496e60a2 body=146 status=ok
// SIG undefined FUN_1496e60a2(void)

void FUN_1496e60a2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_1 + 0x390) != 0) && ((longlong)*(int *)(param_1 + 0x3b0) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x3a8);
    lVar4 = (longlong)*(int *)(param_1 + 0x3b0) * 0x180;
    do {
      lVar1 = FUN_1496e69c2(lVar3,param_1);
      if ((lVar1 != 0) &&
         (lVar2 = FUN_1496e5194(*(undefined8 *)(param_1 + 0x390),lVar3), lVar2 != 0)) {
        FUN_140613f88(lVar1,lVar2 + 0x220,0,0,0);
      }
      lVar3 = lVar3 + 0x180;
      lVar4 = lVar4 + -0x180;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1496e6134 FUN_1496e6134 body=154 status=ok
// SIG undefined FUN_1496e6134(void)

void FUN_1496e6134(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1496e61d0(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e61d0 FUN_1496e61d0 body=116 status=ok
// SIG undefined FUN_1496e61d0(void)

void FUN_1496e61d0(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x3b0))) {
    lVar2 = (ulonglong)param_2 * 0x180 + *(longlong *)(param_1 + 0x3a8);
    lVar1 = FUN_1496e69c2(lVar2,param_1);
    if (lVar1 != 0) {
      lVar2 = FUN_1496e5194(*(undefined8 *)(param_1 + 0x390),lVar2);
      if (lVar2 != 0) {
        FUN_140613f88(lVar1,lVar2 + 0x220,0,0,0);
      }
    }
  }
  return;
}



// FUNCTION 1496e6244 FUN_1496e6244 body=168 status=ok
// SIG undefined FUN_1496e6244(void)

void FUN_1496e6244(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
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
  *(float *)(param_1 + 0x39c) = local_1c;
  FUN_14458a2c2(param_1,(double)local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e62ee FUN_1496e62ee body=168 status=ok
// SIG undefined FUN_1496e62ee(void)

void FUN_1496e62ee(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
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
  *(float *)(param_1 + 0x39c) = local_1c;
  FUN_14458a2c2(param_1,(double)local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e63ae FUN_1496e63ae body=112 status=ok
// SIG undefined FUN_1496e63ae(void)

void FUN_1496e63ae(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x3b0) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x3a8);
    lVar2 = (longlong)*(int *)(param_1 + 0x3b0) * 0x180;
    do {
      if (((*(char *)(param_1 + 0x399) == '\x01') &&
          (lVar1 = FUN_1496e69c2(lVar3,param_1), lVar1 != 0)) &&
         ((*(char *)(param_1 + 0x398) == '\x02' || (*(char *)(lVar3 + 0x79) == '\x01')))) {
        *(undefined1 *)(lVar3 + 0x91) = 1;
      }
      lVar3 = lVar3 + 0x180;
      lVar2 = lVar2 + -0x180;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1496e641e FUN_1496e641e body=156 status=ok
// SIG undefined FUN_1496e641e(void)

void FUN_1496e641e(undefined8 param_1,longlong param_2)

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
  FUN_1496e64bc(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e64bc FUN_1496e64bc body=122 status=ok
// SIG undefined FUN_1496e64bc(void)

void FUN_1496e64bc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x3b0) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x3a8);
    lVar3 = (longlong)*(int *)(param_1 + 0x3b0) * 0x180;
    do {
      lVar1 = FUN_1496e6a04(lVar2,param_1);
      if ((lVar1 == param_2) &&
         ((*(char *)(param_1 + 0x398) == '\x02' || ((*(byte *)(lVar2 + 0x79) & 1) != 0)))) {
        if (lVar2 == 0) {
          return;
        }
        if (*(char *)(param_1 + 0x399) != '\x01') {
          return;
        }
        *(undefined1 *)(lVar2 + 0x91) = 1;
        return;
      }
      lVar2 = lVar2 + 0x180;
      lVar3 = lVar3 + -0x180;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1496e6536 FUN_1496e6536 body=156 status=ok
// SIG undefined FUN_1496e6536(void)

void FUN_1496e6536(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1496e65d4(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e65d4 FUN_1496e65d4 body=127 status=ok
// SIG undefined FUN_1496e65d4(void)

void FUN_1496e65d4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x3b0) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x3a8);
    lVar3 = (longlong)*(int *)(param_1 + 0x3b0) * 0x180;
    do {
      if (((*plVar2 == param_2) && (lVar1 = FUN_1496e6a04(plVar2,param_1), lVar1 != 0)) &&
         ((*(char *)(param_1 + 0x398) == '\x02' || ((*(byte *)((longlong)plVar2 + 0x79) & 1) != 0)))
         ) {
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        if (*(char *)(param_1 + 0x399) != '\x01') {
          return;
        }
        *(undefined1 *)((longlong)plVar2 + 0x91) = 1;
        return;
      }
      plVar2 = plVar2 + 0x30;
      lVar3 = lVar3 + -0x180;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1496e6662 FUN_1496e6662 body=459 status=ok
// SIG undefined FUN_1496e6662(void)

void FUN_1496e6662(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1402d084a();
  if ((longlong)*(int *)(param_1 + 0x3b0) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x3a8);
    lVar6 = (longlong)*(int *)(param_1 + 0x3b0) * 0x180;
    do {
      FUN_1496e6832(lVar5,param_2);
      if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_88 = 0;
        if (param_1 == 0) {
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = 0;
        }
        else {
          FUN_1400bbfae(&local_80,param_1);
          uStack_a0 = CONCAT44(uStack_7c,local_80);
          local_98 = CONCAT44(uStack_74,uStack_78);
          if (uStack_90 != 0) {
            FUN_1400020a8();
          }
          uStack_90 = CONCAT44(uStack_6c,local_70);
          local_88 = CONCAT44(uStack_64,uStack_68);
          cVar3 = (*(code *)PTR_FUN_14c758760)();
          if (cVar3 != '\0') {
            uVar1 = *(uint *)(param_1 + 0xc);
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar4 = 0;
            }
            if ((*(uint *)(lVar4 + 8) & 0x8400000) != 0) {
              local_a8 = 0;
              goto LAB_1496e6791;
            }
          }
          FUN_14485c47a(&local_a8,param_1);
        }
LAB_1496e6791:
        cVar3 = FUN_144a7afa6(lVar5 + 0x58,&uStack_a0);
        if (uStack_90 != 0) {
          FUN_1400020a8();
        }
        if (cVar3 != '\0') {
          *(undefined8 *)(lVar5 + 0x50) = 0;
          *(undefined8 *)(lVar5 + 0x58) = 0;
          *(undefined8 *)(lVar5 + 0x60) = 0;
          *(undefined4 *)(lVar5 + 0x70) = 0;
          if (*(int *)(lVar5 + 0x74) < 0) {
            FUN_1446f8c06((undefined8 *)(lVar5 + 0x68),0);
          }
          puVar2 = *(undefined2 **)(lVar5 + 0x68);
          if (puVar2 != (undefined2 *)0x0) {
            *puVar2 = 0;
          }
        }
      }
      lVar5 = lVar5 + 0x180;
      lVar6 = lVar6 + -0x180;
    } while (lVar6 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496e6832 FUN_1496e6832 body=399 status=ok
// SIG undefined FUN_1496e6832(void)

void FUN_1496e6832(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
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
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) goto LAB_1496e69a1;
  cVar4 = FUN_144729dda(param_1 + 0x28);
  if (cVar4 == '\0') goto LAB_1496e69a1;
  lVar5 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar5 == 0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    if (*(int *)(param_1 + 0x74) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x68),0);
    }
    puVar2 = *(undefined2 **)(param_1 + 0x68);
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x58) = local_48;
    *(undefined4 *)(param_1 + 0x5c) = uStack_44;
    *(undefined4 *)(param_1 + 0x60) = uStack_40;
    *(undefined4 *)(param_1 + 100) = uStack_3c;
    if ((undefined4 *)(param_1 + 0x58) == &local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x68) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x68) = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x70) = local_30;
      *(undefined4 *)(param_1 + 0x74) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar1 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        *(undefined8 *)(param_1 + 0x50) = 0;
        goto LAB_1496e6973;
      }
    }
    FUN_14485c47a((undefined8 *)(param_1 + 0x50),lVar5);
  }
LAB_1496e6973:
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x18) + -1;
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar3 = 0;
  }
  FUN_1402980a2(param_1 + 0x38,*(undefined8 *)(param_1 + 0x10),iVar3);
LAB_1496e69a1:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e69c2 FUN_1496e69c2 body=65 status=ok
// SIG undefined FUN_1496e69c2(void)

longlong FUN_1496e69c2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_147a9063e(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_144a3a302();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1496e6a04 FUN_1496e6a04 body=65 status=ok
// SIG undefined FUN_1496e6a04(void)

longlong FUN_1496e6a04(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_147a9063e(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_144a3a302();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1496e6a46 FUN_1496e6a46 body=145 status=ok
// SIG undefined FUN_1496e6a46(void)

void FUN_1496e6a46(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined8 *local_48;
  longlong local_38;
  undefined1 *local_30;
  longlong *local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1404d1fb0();
  lVar1 = *(longlong *)(param_1 + 0x390);
  if (lVar1 != 0) {
    local_28 = &local_38;
    local_48 = &local_20;
    local_20 = 0;
    local_18 = 0;
    local_30 = &LAB_144591318;
    local_50 = 0;
    local_38 = lVar1;
    FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(lVar1 + 0x30),1);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e6ad8 FUN_1496e6ad8 body=42 status=ok
// SIG undefined FUN_1496e6ad8(void)

void FUN_1496e6ad8(longlong param_1)

{
  FUN_1405f1eac();
  *(undefined4 *)(param_1 + 0x438) = *(undefined4 *)(param_1 + 0x39c);
  FUN_14458a4f0(param_1);
  return;
}



// FUNCTION 1496e6b02 FUN_1496e6b02 body=276 status=ok
// SIG undefined FUN_1496e6b02(void)

void FUN_1496e6b02(longlong param_1,undefined4 param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined8 local_38;
  undefined **local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x390) != 0) &&
     (*(int *)(param_1 + 0x3d0) != *(int *)(param_1 + 0x3fc))) {
    uVar1 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar2 = param_1 + 0x400;
    if (*(longlong *)(param_1 + 0x408) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x408);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x410) - 1U & (uVar1 >> 0x10 ^ uVar1)) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x3c8) + (longlong)iVar3 * 0x70;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x3c8) + (longlong)iVar3 * 0x70) == param_3) {
          if (lVar2 + 8 != 0 && lVar2 != 0) {
            local_38 = 0;
            local_28 = &PTR_LAB_14bddfd90;
            local_48 = FUN_144591330;
            local_20 = param_1;
            local_18 = lVar2 + 8;
            FUN_1496e6f3e(param_1,lVar2 + 0x38,param_2);
          }
          break;
        }
        iVar3 = *(int *)(lVar2 + 0x68);
      } while (iVar3 != -1);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496e6c18 FUN_1496e6c18 body=288 status=ok
// SIG undefined FUN_1496e6c18(void)

void FUN_1496e6c18(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  if ((*(longlong *)(param_1 + 0x390) != 0) &&
     (*(int *)(param_1 + 0x3d0) != *(int *)(param_1 + 0x3fc))) {
    uVar2 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0x400;
    if (*(longlong *)(param_1 + 0x408) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x408);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x410) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x3c8) + (longlong)iVar4 * 0x70;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x3c8) + (longlong)iVar4 * 0x70) == param_3) {
          if ((lVar3 + 8U & 0xfffffffffffffff7) == 0) {
            return;
          }
          iVar4 = *(int *)(lVar3 + 0x60);
          if ((longlong)iVar4 < 1) {
            return;
          }
          lVar1 = *(longlong *)(lVar3 + 0x58);
          lVar5 = 0;
          do {
            FUN_1456cc230(param_3 + 0x2b0,*(undefined8 *)(lVar1 + lVar5),1);
            lVar5 = lVar5 + 8;
          } while ((longlong)iVar4 * 8 != lVar5);
          *(undefined4 *)(lVar3 + 0x60) = 0;
          if (-1 < *(int *)(lVar3 + 100)) {
            return;
          }
          FUN_14043d0a6((longlong *)(lVar3 + 0x58),0);
          return;
        }
        iVar4 = *(int *)(lVar3 + 0x68);
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 1496e6d38 FUN_1496e6d38 body=261 status=ok
// SIG undefined FUN_1496e6d38(void)

void FUN_1496e6d38(longlong param_1,undefined4 param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined8 local_38;
  undefined **local_28;
  longlong local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x390) != 0) &&
     (*(int *)(param_1 + 0x3d0) != *(int *)(param_1 + 0x3fc))) {
    uVar1 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar2 = param_1 + 0x400;
    if (*(longlong *)(param_1 + 0x408) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x408);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x410) - 1U & (uVar1 >> 0x10 ^ uVar1)) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x3c8) + (longlong)iVar3 * 0x70;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x3c8) + (longlong)iVar3 * 0x70) == param_3) {
          if ((lVar2 + 8U & 0xfffffffffffffff7) != 0) {
            local_38 = 0;
            local_28 = &PTR_LAB_14bddfdb0;
            local_48 = FUN_1445913c6;
            local_20 = param_1;
            FUN_1496e6f3e(param_1,lVar2 + 0x48,param_2);
          }
          break;
        }
        iVar3 = *(int *)(lVar2 + 0x68);
      } while (iVar3 != -1);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496e6e4a FUN_1496e6e4a body=56 status=ok
// SIG undefined FUN_1496e6e4a(void)

void FUN_1496e6e4a(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1496ee82a(param_1,iVar1);
  }
  FUN_1496ee7e6((longlong)iVar1 * 0xc0 + *param_1);
  return;
}



// FUNCTION 1496e6e82 FUN_1496e6e82 body=72 status=ok
// SIG undefined FUN_1496e6e82(void)

void FUN_1496e6e82(longlong param_1)

{
  float fVar1;
  
  FUN_1403d8a98();
  FUN_14458be64(param_1);
  fVar1 = *(float *)(param_1 + 0x438);
  if ((fVar1 == *(float *)(param_1 + 0x39c)) && (!NAN(fVar1) && !NAN(*(float *)(param_1 + 0x39c))))
  {
    return;
  }
  *(float *)(param_1 + 0x39c) = fVar1;
  FUN_14458a2c2(param_1,(double)fVar1);
  return;
}



// FUNCTION 1496e6eca FUN_1496e6eca body=115 status=ok
// SIG undefined FUN_1496e6eca(void)

void FUN_1496e6eca(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x3c0);
  if (0 < iVar2) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x3b8) + lVar5 * 8);
      if (plVar1 != (longlong *)0x0) {
        uVar3 = FUN_1496e69c2(*(longlong *)(param_1 + 0x3a8) + lVar4,param_1);
        (**(code **)(*plVar1 + 0x90))(plVar1,uVar3);
        iVar2 = *(int *)(param_1 + 0x3c0);
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x180;
    } while (lVar5 < iVar2);
  }
  return;
}



// FUNCTION 1496e6f3e FUN_1496e6f3e body=368 status=ok
// SIG undefined FUN_1496e6f3e(void)

void FUN_1496e6f3e(longlong param_1,longlong *param_2,double param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = param_2[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar1 = *param_2;
    lVar9 = 0;
    do {
      lVar8 = (longlong)*(int *)(lVar1 + lVar9) * 0x180;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x3a8) + 0xa8 + lVar8);
      if (lVar2 != 0) {
        lVar8 = *(longlong *)(param_1 + 0x3a8) + lVar8;
        lVar3 = *(longlong *)
                 (*(longlong *)(param_1 + 0x3b8) + (longlong)*(int *)(lVar1 + lVar9) * 8);
        if ((*(char *)(param_1 + 0x398) == '\x02') || (*(char *)(lVar8 + 0x79) == '\x01')) {
          *(double *)(lVar8 + 0x98) = *(double *)(lVar8 + 0x98) + param_3;
          if ((*(char *)(lVar8 + 0x91) == '\x01') && (lVar3 != 0)) {
            if (*(char *)(param_1 + 0x398) == '\x01') {
              *(float *)(lVar8 + 0xb0) = (float)param_3;
            }
            *(double *)(lVar8 + 0xa0) = *(double *)(lVar8 + 0xa0) + param_3;
            pcVar4 = (code *)*param_4;
            plVar7 = (longlong *)param_4[2];
            if ((longlong *)param_4[2] == (longlong *)0x0) {
              plVar7 = param_4 + 4;
            }
            local_80 = lVar2;
            local_78 = lVar3;
            uVar6 = (**(code **)(*plVar7 + 8))();
            (*pcVar4)(uVar6,&local_80,lVar8,&local_78);
          }
        }
      }
      lVar9 = lVar9 + 4;
    } while ((longlong)(int)lVar5 * 4 != lVar9);
  }
  if (*param_4 != 0) {
    plVar7 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e70ce FUN_1496e70ce body=91 status=ok
// SIG undefined FUN_1496e70ce(void)

void FUN_1496e70ce(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  switchD_143c3d4dc::caseD_21(param_1,param_2);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    iVar1 = FUN_1448332aa(param_2,&DAT_149e3cc78);
    if ((iVar1 < 0x31) && (*(int *)(param_1 + 0x2f0) == 0)) {
      *(undefined1 *)(param_1 + 0x318) = 1;
    }
  }
  return;
}



// FUNCTION 1496e712a FUN_1496e712a body=2601 status=ok
// SIG undefined FUN_1496e712a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1496e712a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  double *pdVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined1 *puVar19;
  float fVar20;
  float fVar25;
  float fVar26;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar27;
  float fVar28;
  double dVar29;
  float fVar33;
  float fVar34;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar35;
  float fVar36;
  float fVar44;
  float fVar45;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar46;
  float fVar47;
  float fVar52;
  float fVar53;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar54;
  undefined1 auVar55 [16];
  float fVar57;
  undefined1 auVar56 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar64;
  float fVar65;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar66;
  undefined1 auVar67 [16];
  float fVar68;
  double dVar69;
  float fVar71;
  float fVar72;
  undefined1 auVar70 [16];
  float fVar73;
  undefined1 unaff_XMM13 [16];
  undefined1 auVar74 [16];
  undefined1 auStack_258 [36];
  int local_234;
  longlong *local_230;
  longlong *local_228;
  longlong local_220;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined1 local_208 [8];
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined1 local_1e8 [8];
  float fStack_1e0;
  float fStack_1dc;
  undefined8 *local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  float local_1a8;
  float fStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float fStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  float local_168;
  float fStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined1 *local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if ((*(char *)(param_1 + 0x318) == '\x01') &&
     (lVar18 = *(longlong *)(param_1 + 0x210), lVar18 != 0)) {
    lVar11 = FUN_140f5398e();
    if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar18 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30 &&
        (lVar18 = *(longlong *)(lVar18 + 0x660), lVar18 != 0)))) {
      uVar3 = *(undefined8 *)(lVar18 + 0x218);
      plVar17 = *(longlong **)(lVar18 + 0x220);
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        UNLOCK();
      }
      puVar19 = DAT_14c9974a8;
      FUN_1446f470e(&local_1d0,L"MassToLocal",1);
      cVar9 = FUN_140498cd4(uVar3,local_1d0,puVar19);
      puVar19 = DAT_14c9974a8;
      if (cVar9 != '\0') {
        local_230 = plVar17;
        FUN_1446f470e(&local_1d8,L"MassToLocal",1);
        local_228 = (longlong *)FUN_1401466c8(uVar3);
        lVar18 = (longlong)*(int *)(param_1 + 0x40);
        local_234 = (**(code **)(*local_228 + 0x60))();
        local_220 = lVar18;
        if (0 < lVar18) {
          lVar18 = 0;
          puVar15 = local_1d8;
          do {
            iVar10 = *(int *)(*(longlong *)(param_1 + 0x38) + lVar18 * 4);
            if (iVar10 < local_234) {
              lVar11 = local_228[2];
              lVar14 = (longlong)iVar10 * 0x60;
              auVar70 = *(undefined1 (*) [16])(lVar11 + 0x40 + lVar14);
              auVar62 = *(undefined1 (*) [16])(lVar11 + 0x50 + lVar14);
              auVar41._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar70._8_8_));
              auVar41._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar70._0_8_));
              uVar16 = movmskpd((int)puVar15,auVar41);
              puVar15 = (undefined8 *)(ulonglong)uVar16;
              auVar55._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar62._8_8_));
              auVar55._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar62._0_8_));
              iVar10 = movmskpd((int)puVar19,auVar55);
              uVar16 = iVar10 << 2 | uVar16;
              puVar19 = (undefined1 *)(ulonglong)uVar16;
              auVar63 = _DAT_14c8464c0;
              auVar37 = _DAT_14c846480;
              auVar48 = _DAT_14c846490;
              auVar49 = _DAT_14c8464d0;
              auVar32 = _DAT_14c8464a0;
              dVar69 = DAT_14c8464b0;
              if (uVar16 != 0) {
                pdVar12 = (double *)(lVar11 + lVar14);
                auVar48 = divpd(_DAT_149934d80,auVar70);
                auVar37 = divpd(ZEXT816(0x3ff0000000000000),auVar62);
                auVar63._0_8_ =
                     (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar70._0_8_)) &
                             auVar48._0_8_);
                auVar63._8_8_ =
                     (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar70._8_8_)) &
                             auVar48._8_8_);
                dVar29 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar62._0_8_)) &
                                 auVar37._0_8_);
                auVar49._8_8_ = 0;
                auVar49._0_8_ = dVar29;
                auVar37._0_8_ = -*pdVar12;
                auVar37._8_8_ = -pdVar12[1];
                auVar48._0_8_ = pdVar12[2] * -1.0;
                auVar48._8_8_ = pdVar12[3] * 1.0;
                dVar6 = pdVar12[4] * auVar63._0_8_;
                dVar7 = pdVar12[5] * auVar63._8_8_;
                dVar29 = pdVar12[6] * dVar29;
                dVar69 = dVar7 * auVar37._0_8_ - auVar37._8_8_ * dVar6;
                dVar5 = dVar29 * auVar37._8_8_ - auVar48._0_8_ * dVar7;
                dVar8 = dVar6 * auVar48._0_8_ - auVar37._0_8_ * dVar29;
                dVar5 = dVar5 + dVar5;
                dVar8 = dVar8 + dVar8;
                dVar69 = dVar69 + dVar69;
                auVar32._0_8_ =
                     0.0 - ((dVar69 * auVar37._8_8_ - dVar8 * auVar48._0_8_) +
                           auVar48._8_8_ * dVar5 + dVar6);
                auVar32._8_8_ =
                     0.0 - (dVar69 * *pdVar12 + auVar48._0_8_ * dVar5 +
                           auVar48._8_8_ * dVar8 + dVar7);
                dVar69 = 0.0 - (auVar48._8_8_ * dVar69 + dVar29 +
                               (dVar8 * auVar37._0_8_ - dVar5 * auVar37._8_8_));
              }
              lVar11 = *(longlong *)(param_1 + 0x48);
              lVar14 = lVar18 * 0x98;
              uVar16 = *(uint *)(lVar11 + 8 + lVar14);
              if (((uVar16 == *(uint *)(lVar11 + 0x18 + lVar14)) && (0 < (int)uVar16)) &&
                 (plVar17 = (longlong *)(lVar11 + lVar14), uVar16 == *(uint *)(plVar17 + 5))) {
                auVar50._4_12_ = auVar49._4_12_;
                auVar50._0_4_ = (float)auVar49._0_8_;
                auVar70._8_8_ = auVar63._8_8_;
                auVar70._0_8_ = auVar70._8_8_;
                auVar62._4_12_ = auVar70._4_12_;
                auVar62._0_4_ = (float)auVar70._8_8_;
                auVar70 = insertps(ZEXT416((uint)(float)auVar63._0_8_),auVar62,0x1c);
                auVar74._4_12_ = unaff_XMM13._4_12_;
                auVar74._0_4_ = (float)auVar32._0_8_;
                auVar49 = insertps(auVar70,auVar50,0x28);
                auVar70 = insertps(auVar74,ZEXT416((uint)(float)auVar32._8_8_),0x1c);
                auVar38._8_8_ = auVar48._8_8_;
                auVar38._0_8_ = auVar38._8_8_;
                auVar39._4_12_ = auVar38._4_12_;
                auVar39._0_4_ = (float)auVar38._8_8_;
                _local_1e8 = insertps(auVar70,ZEXT416((uint)(float)dVar69),0x28);
                auVar70 = insertps(ZEXT416((uint)(float)auVar37._0_8_),
                                   ZEXT416((uint)(float)auVar37._8_8_),0x10);
                fVar54 = auVar70._0_4_;
                auVar62 = insertps(auVar70,ZEXT416((uint)(float)auVar48._0_8_),0x20);
                auVar63 = insertps(auVar62,auVar39,0x30);
                fVar61 = auVar63._0_4_;
                fVar64 = auVar63._4_4_;
                fVar65 = auVar63._8_4_;
                fVar66 = auVar63._12_4_;
                fVar36 = fVar61 + fVar61;
                fVar44 = fVar64 + fVar64;
                fVar45 = fVar65 + fVar65;
                fVar26 = fVar66 * (fVar66 + fVar66);
                fVar68 = auVar49._0_4_;
                auVar30._0_4_ = (1.0 - (fVar65 * fVar45 + fVar64 * fVar44)) * fVar68;
                fVar71 = auVar49._4_4_;
                auVar30._4_4_ = (1.0 - (fVar65 * fVar45 + fVar61 * fVar36)) * fVar71;
                fVar72 = auVar49._8_4_;
                auVar30._8_4_ = (1.0 - (fVar64 * fVar44 + fVar61 * fVar36)) * fVar72;
                fVar73 = auVar49._12_4_;
                auVar30._12_4_ = (0.0 - (fVar26 + fVar26)) * fVar73;
                fVar26 = fVar45 * auVar70._4_4_;
                fVar59 = (fVar44 * fVar54 + fVar45 * fVar66) * fVar68;
                fVar60 = (fVar45 * fVar54 + fVar44 * fVar66) * fVar72;
                auVar70 = blendps(auVar30,ZEXT816(0),8);
                auVar40._4_4_ = (fVar26 + fVar36 * fVar66) * fVar71;
                auVar40._0_4_ = fVar59;
                auVar40._8_4_ = fVar60;
                auVar40._12_4_ = (fVar36 * fVar54 + fVar36 * fVar66) * fVar73;
                auVar62 = insertps(auVar40,auVar40,0x4c);
                unaff_XMM13 = insertps(_local_1e8,0x3f800000,0x30);
                local_208 = auVar63._8_8_;
                fStack_200 = fVar61;
                fStack_1fc = fVar64;
                lVar14 = 8;
                lVar11 = 0;
                local_218 = fVar64;
                fStack_214 = fVar61;
                fStack_210 = fVar66;
                fStack_20c = fVar65;
                local_1f8 = fVar66;
                fStack_1f4 = fVar65;
                fStack_1f0 = fVar64;
                fStack_1ec = fVar61;
                do {
                  auVar37 = _DAT_149e1ef10;
                  lVar4 = plVar17[4];
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = *(ulonglong *)(*plVar17 + -8 + lVar14);
                  auVar48 = insertps(auVar21,*(undefined4 *)(*plVar17 + lVar14),0x28);
                  lVar13 = plVar17[2];
                  auVar31._8_8_ = 0;
                  auVar31._0_8_ = *(ulonglong *)(lVar4 + -8 + lVar14);
                  auVar32 = insertps(auVar31,*(undefined4 *)(lVar4 + lVar14),0x28);
                  auVar63 = *(undefined1 (*) [16])(lVar13 + lVar11);
                  fVar27 = auVar63._0_4_;
                  fVar20 = auVar63._4_4_;
                  fVar25 = auVar63._12_4_;
                  auVar41 = minps(auVar49,auVar32);
                  auVar42._4_4_ = -(uint)(auVar41._4_4_ < 0.0);
                  auVar42._0_4_ = -(uint)(auVar41._0_4_ < 0.0);
                  auVar42._8_4_ = -(uint)(auVar41._8_4_ < 0.0);
                  auVar42._12_4_ = -(uint)(auVar41._12_4_ < 0.0);
                  iVar10 = movmskps((int)lVar4,auVar42);
                  fVar47 = auVar63._8_4_;
                  fVar28 = auVar32._0_4_;
                  fVar35 = auVar32._12_4_;
                  fVar33 = auVar32._4_4_;
                  fVar34 = auVar32._8_4_;
                  if (iVar10 == 0) {
                    auVar56._0_4_ =
                         fVar47 * local_218 * -1.0 +
                         fVar20 * (float)local_208._0_4_ * 1.0 +
                         fVar27 * local_1f8 * 1.0 + fVar61 * fVar25;
                    auVar56._4_4_ =
                         fVar47 * fStack_214 * 1.0 +
                         fVar20 * (float)local_208._4_4_ * 1.0 +
                         fVar27 * fStack_1f4 * -1.0 + fVar64 * fVar25;
                    auVar56._8_4_ =
                         fVar47 * fStack_210 * 1.0 +
                         fVar20 * fStack_200 * -1.0 + fVar27 * fStack_1f0 * 1.0 + fVar65 * fVar25;
                    auVar56._12_4_ =
                         fVar47 * fStack_20c * -1.0 +
                         fVar20 * fStack_1fc * -1.0 + fVar27 * fStack_1ec * -1.0 + fVar66 * fVar25;
                    fVar28 = fVar28 * (float)local_1e8._0_4_;
                    fVar33 = fVar33 * (float)local_1e8._4_4_;
                    fVar34 = fVar34 * fStack_1e0;
                    fVar35 = fVar35 * fStack_1dc;
                    fVar46 = fVar33 * fVar27 - fVar20 * fVar28;
                    fVar52 = fVar34 * fVar20 - fVar47 * fVar33;
                    fVar53 = fVar28 * fVar47 - fVar27 * fVar34;
                    fVar57 = fVar35 * fVar25 - fVar25 * fVar35;
                    fVar46 = fVar46 + fVar46;
                    fVar52 = fVar52 + fVar52;
                    fVar53 = fVar53 + fVar53;
                    fVar57 = fVar57 + fVar57;
                    auVar24._0_4_ =
                         auVar48._0_4_ +
                         (fVar46 * fVar20 - fVar53 * fVar47) + fVar25 * fVar52 + fVar28;
                    auVar24._4_4_ =
                         auVar48._4_4_ +
                         (fVar52 * fVar47 - fVar46 * fVar27) + fVar25 * fVar53 + fVar33;
                    auVar24._8_4_ =
                         auVar48._8_4_ +
                         (fVar53 * fVar27 - fVar52 * fVar20) + fVar25 * fVar46 + fVar34;
                    auVar24._12_4_ =
                         auVar48._12_4_ +
                         (fVar57 * fVar25 - fVar57 * fVar25) + fVar25 * fVar57 + fVar35;
                  }
                  else {
                    fVar46 = fVar27 + fVar27;
                    fVar52 = fVar20 + fVar20;
                    fVar53 = fVar47 + fVar47;
                    fVar57 = fVar25 * (fVar25 + fVar25);
                    auVar58._0_4_ =
                         ((float)DAT_149e1ef10 - (fVar47 * fVar53 + fVar20 * fVar52)) * fVar28;
                    auVar58._4_4_ =
                         (DAT_149e1ef10._4_4_ - (fVar47 * fVar53 + fVar27 * fVar46)) * fVar33;
                    auVar58._8_4_ =
                         (DAT_149e1ef10._8_4_ - (fVar20 * fVar52 + fVar27 * fVar46)) * fVar34;
                    auVar58._12_4_ = (DAT_149e1ef10._12_4_ - (fVar57 + fVar57)) * fVar35;
                    fVar47 = (fVar52 * fVar27 + fVar25 * fVar53) * fVar28;
                    auVar67._4_4_ = (fVar53 * fVar20 + fVar25 * fVar46) * fVar33;
                    auVar67._0_4_ = fVar47;
                    local_158 = (fVar53 * fVar27 + fVar25 * fVar52) * fVar34;
                    local_168 = (fVar52 * fVar27 - fVar25 * fVar53) * fVar33;
                    fStack_154 = (fVar53 * fVar20 - fVar25 * fVar46) * fVar34;
                    auVar63 = blendps(auVar58,ZEXT816(0),8);
                    auVar67._8_4_ = local_158;
                    auVar67._12_4_ = (fVar46 * fVar27 + fVar25 * fVar46) * fVar35;
                    local_178._4_4_ = fVar47;
                    local_178._0_4_ = auVar58._0_4_;
                    local_178._8_4_ = (fVar53 * fVar27 - fVar25 * fVar52) * fVar28;
                    local_178._12_4_ = 0;
                    auVar32 = insertps(auVar67,auVar67,0x4c);
                    uStack_160 = auVar32._0_4_;
                    uStack_15c = auVar32._8_4_;
                    uStack_150 = auVar63._8_4_;
                    uStack_14c = auVar63._12_4_;
                    local_148 = insertps(auVar48,0x3f800000,0x30);
                    local_1b8._4_4_ = fVar59;
                    local_1b8._0_4_ = auVar30._0_4_;
                    local_1b8._8_4_ = (fVar45 * fVar54 - fVar44 * fVar66) * fVar68;
                    local_1b8._12_4_ = 0;
                    puVar19 = local_178;
                    local_1a8 = (fVar44 * fVar54 - fVar45 * fVar66) * fVar71;
                    fStack_1a4 = auVar30._4_4_;
                    uStack_1a0 = auVar62._0_4_;
                    uStack_19c = auVar62._8_4_;
                    local_198 = fVar60;
                    fStack_194 = (fVar26 - fVar36 * fVar66) * fVar72;
                    uStack_190 = auVar70._8_4_;
                    uStack_18c = auVar70._12_4_;
                    local_188 = unaff_XMM13;
                    fStack_164 = auVar58._4_4_;
                    FUN_144afeb32(&local_138,local_1b8);
                    FUN_144afd82e(&local_138);
                    auVar22._4_4_ = -(uint)(0.0 <= fVar71 * fVar33);
                    auVar22._0_4_ = -(uint)(0.0 <= fVar68 * fVar28);
                    auVar22._8_4_ = -(uint)(0.0 <= fVar72 * fVar34);
                    auVar22._12_4_ = -(uint)(0.0 <= fVar73 * fVar35);
                    auVar63 = blendvps(_DAT_149f63320,auVar37,auVar22);
                    fVar27 = auVar63._0_4_;
                    fVar20 = auVar63._4_4_;
                    local_138 = CONCAT44(local_138._4_4_ * fVar27,(float)local_138 * fVar27);
                    local_130 = (undefined1 *)CONCAT44(local_130._4_4_,local_130._0_4_ * fVar27);
                    local_120 = local_120 * fVar20;
                    local_124 = local_124 * fVar20;
                    local_128 = fVar20 * local_128;
                    fVar27 = auVar63._8_4_;
                    local_110 = local_110 * fVar27;
                    local_114 = local_114 * fVar27;
                    local_118 = fVar27 * local_118;
                    puVar15 = &local_138;
                    FUN_14066c2ac(local_1c8);
                    fVar27 = local_1c8._12_4_;
                    fVar28 = local_1c8._0_4_;
                    fVar33 = local_1c8._4_4_;
                    fVar34 = local_1c8._8_4_;
                    fVar20 = fVar28 * fVar28 + fVar33 * fVar33;
                    fVar25 = fVar34 * fVar34 + fVar27 * fVar27;
                    auVar43._0_4_ = fVar25 + fVar20;
                    auVar43._4_4_ = fVar25 + fVar20;
                    auVar43._8_4_ = fVar20 + fVar25;
                    auVar43._12_4_ = fVar20 + fVar25;
                    auVar23._4_4_ = -(uint)(1e-08 <= auVar43._4_4_);
                    auVar23._0_4_ = -(uint)(1e-08 <= auVar43._0_4_);
                    auVar23._8_4_ = -(uint)(1e-08 <= auVar43._8_4_);
                    auVar23._12_4_ = -(uint)(1e-08 <= auVar43._12_4_);
                    auVar63 = sqrtps(auVar43,auVar43);
                    auVar63 = divps(_DAT_1499314a0,auVar63);
                    auVar51._0_4_ = auVar63._0_4_ * fVar28;
                    auVar51._4_4_ = auVar63._4_4_ * fVar33;
                    auVar51._8_4_ = auVar63._8_4_ * fVar34;
                    auVar51._12_4_ = auVar63._12_4_ * fVar27;
                    auVar56 = blendvps(_DAT_149932320,auVar51,auVar23);
                    auVar24 = blendps(local_108,ZEXT816(0),8);
                    lVar13 = plVar17[2];
                  }
                  *(undefined1 (*) [16])(lVar13 + lVar11) = auVar56;
                  lVar4 = *plVar17;
                  *(longlong *)(lVar4 + -8 + lVar14) = auVar24._0_8_;
                  uVar3 = extractps(auVar24,2);
                  *(undefined8 *)(lVar4 + lVar14) = uVar3;
                  lVar11 = lVar11 + 0x10;
                  lVar14 = lVar14 + 0xc;
                } while ((ulonglong)uVar16 << 4 != lVar11);
              }
            }
            lVar18 = lVar18 + 1;
          } while (lVar18 != local_220);
        }
        *(undefined1 *)(param_1 + 0x318) = 0;
        plVar17 = local_230;
      }
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar17 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar2 = (int *)((longlong)plVar17 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x2f0) = 1;
  lVar18 = param_1 + 800;
  uVar16 = *(uint *)(param_1 + 0x60);
  if ((uint)(*(int *)(param_1 + 0x328) - *(int *)(param_1 + 0x354)) < uVar16) {
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar16);
    }
    FUN_140ab2830(lVar18,uVar16);
    iVar10 = 1;
    if (3 < uVar16) {
      uVar16 = (uVar16 | 1) + 0xe;
      iVar10 = 0x1f;
      if (uVar16 != 0) {
        for (; uVar16 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      iVar10 = 1 << ((byte)iVar10 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x368) == 0) || (*(int *)(param_1 + 0x368) < iVar10)) {
      *(int *)(param_1 + 0x368) = iVar10;
      FUN_140264164(lVar18);
    }
  }
  local_1b8._0_4_ = 0;
  if (0 < *(int *)(param_1 + 0x60)) {
    do {
      local_138 = (longlong)(int)local_1b8._0_4_ * 4 + *(longlong *)(param_1 + 0x58);
      local_130 = local_1b8;
      FUN_140263e2a(lVar18,local_178,&local_138,0);
      local_1b8._0_4_ = local_1b8._0_4_ + 1;
    } while ((int)local_1b8._0_4_ < *(int *)(param_1 + 0x60));
  }
  FUN_1446e0b6e(param_1);
  if ((local_f0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496e7b56 FUN_1496e7b56 body=253 status=ok
// SIG undefined FUN_1496e7b56(void)

bool FUN_1496e7b56(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_178 [32];
  undefined1 local_158 [84];
  undefined8 local_104;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b0;
  undefined8 local_a4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined8 local_54;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_1496eed0e(param_2);
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    memset(local_158,0,0x128);
    local_104 = 0xffffffff00000080;
    local_b0 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_a4 = 0xffffffff00000080;
    local_60 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_54 = 0xffffffff00000080;
    FUN_1496eed0e(lVar1 + 8,local_158);
    FUN_145e15580(local_158);
    if (lVar2 != 0) {
      FUN_145e15580(lVar2 + 8);
      FUN_1400020a8(lVar2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e7c54 FUN_1496e7c54 body=2623 status=ok
// SIG undefined FUN_1496e7c54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1496e7c54(longlong param_1,longlong param_2,double *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2a8;
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
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
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_2a8 = 0xfff00007;
  local_2b0 = 0;
  local_2b8 = 0;
  lVar12 = FUN_14092e7b3(param_2,param_1,0,0xffffffff);
  if ((lVar12 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x210) = lVar12;
    lVar13 = 0;
    if (lVar12 == 0) goto LAB_1496e7db5;
  }
  else {
    FUN_1456cec3c(lVar12);
    *(longlong *)(param_1 + 0x210) = lVar12;
  }
  lVar13 = FUN_144a799b0();
  plVar2 = *(longlong **)(param_1 + 0x210);
  if ((plVar2 != (longlong *)0x0) &&
     ((((lVar13 == 0 || (lVar12 = plVar2[2], lVar12 == 0)) ||
       (*(int *)(lVar12 + 0x38) < *(int *)(lVar13 + 0x38))) ||
      (((*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) !=
         lVar13 + 0x30 || (plVar2[0x24] == 0)) ||
       (lVar13 = (**(code **)(*plVar2 + 0x4a0))(plVar2,&DAT_14cadad9c),
       *(longlong *)(param_1 + 0x210) != 0)))))) {
    lVar13 = FUN_140f5398e();
    lVar12 = *(longlong *)(param_1 + 0x210);
    if (((lVar12 != 0) && (lVar13 != 0)) &&
       ((lVar3 = *(longlong *)(lVar12 + 0x10), lVar3 != 0 &&
        (((piVar1 = (int *)(lVar13 + 0x38), *piVar1 <= *(int *)(lVar3 + 0x38) &&
          (lVar13 = lVar13 + 0x30,
          *(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*piVar1 * 8) == lVar13)) &&
         (*(undefined4 *)(lVar12 + 0x670) = 0, *(int *)(lVar12 + 0x674) != 0)))))) {
      lVar13 = FUN_1496f20ca(lVar12 + 0x668);
    }
  }
LAB_1496e7db5:
  puVar16 = (undefined8 *)(param_2 + 0x240);
  puVar17 = (undefined8 *)(param_1 + 0x220);
  for (lVar12 = 0xc; auVar45 = _DAT_149934d80, lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  auVar24 = *(undefined1 (*) [16])(param_3 + 8);
  auVar27 = *(undefined1 (*) [16])(param_3 + 10);
  auVar32._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar24._8_8_));
  auVar32._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar24._0_8_));
  uVar11 = movmskpd((int)lVar13,auVar32);
  auVar41._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar27._8_8_));
  auVar41._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar27._0_8_));
  iVar14 = movmskpd(0,auVar41);
  uVar15 = iVar14 << 2 | uVar11;
  if (uVar15 == 0) {
    dStack_290 = DAT_14c8464b8;
    local_298 = DAT_14c8464b0;
    auVar20 = _DAT_14c8464c0;
    auVar24 = _DAT_14c8464d0;
    uVar48 = (undefined4)DAT_14c846480;
    uVar49 = DAT_14c846480._4_4_;
    uVar50 = (undefined4)DAT_14c846488;
    uVar51 = DAT_14c846488._4_4_;
    dVar40 = DAT_14c846490;
    dVar42 = DAT_14c846498;
    dVar31 = DAT_14c8464a0;
    dVar35 = DAT_14c8464a8;
  }
  else {
    auVar41 = divpd(_DAT_149934d80,auVar24);
    auVar32 = divpd(ZEXT816(0x3ff0000000000000),auVar27);
    auVar20._0_8_ =
         (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar24._0_8_)) & auVar41._0_8_);
    auVar20._8_8_ =
         (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar24._8_8_)) & auVar41._8_8_);
    dVar37 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar27._0_8_)) & auVar32._0_8_);
    auVar24._8_8_ = 0;
    auVar24._0_8_ = dVar37;
    dVar19 = *param_3;
    dVar40 = param_3[2] * -1.0;
    dVar42 = param_3[3] * 1.0;
    dVar31 = -dVar19;
    dVar35 = -param_3[1];
    dVar43 = param_3[4] * auVar20._0_8_;
    dVar44 = param_3[5] * auVar20._8_8_;
    dVar37 = param_3[6] * dVar37;
    dVar30 = dVar44 * dVar31 - dVar35 * dVar43;
    dVar33 = dVar37 * dVar35 - dVar40 * dVar44;
    dVar34 = dVar43 * dVar40 - dVar31 * dVar37;
    dVar33 = dVar33 + dVar33;
    dVar34 = dVar34 + dVar34;
    dVar30 = dVar30 + dVar30;
    local_298 = 0.0 - (dVar42 * dVar30 + dVar37 + (dVar34 * dVar31 - dVar33 * dVar35));
    dStack_290 = 0.0;
    uVar48 = SUB84(dVar19,0);
    uVar49 = (int)((ulonglong)dVar31 >> 0x20);
    uVar50 = SUB84(param_3[1],0);
    uVar51 = (int)((ulonglong)dVar35 >> 0x20);
    dVar31 = 0.0 - ((dVar30 * dVar35 - dVar34 * dVar40) + dVar42 * dVar33 + dVar43);
    dVar35 = 0.0 - (dVar30 * dVar19 + dVar40 * dVar33 + dVar42 * dVar34 + dVar44);
  }
  auVar27 = *(undefined1 (*) [16])(param_2 + 0x280);
  dVar30 = auVar27._0_8_;
  dVar34 = auVar27._8_8_;
  local_288 = *(undefined1 (*) [16])(param_2 + 0x290);
  auVar27 = minpd(auVar27,auVar20);
  auVar32 = minpd(local_288,auVar24);
  auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
  auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
  iVar14 = movmskpd(uVar11,auVar28);
  auVar27._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
  auVar27._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
  uVar11 = movmskpd(uVar15,auVar27);
  dVar19 = auVar20._0_8_;
  dVar33 = auVar20._8_8_;
  dVar37 = auVar24._0_8_;
  uVar9 = local_288._0_8_;
  uVar10 = local_288._8_8_;
  if ((uVar11 & 0x3fffffff) == 0 && iVar14 == 0) {
    dVar43 = *(double *)(param_2 + 0x240);
    dVar44 = *(double *)(param_2 + 0x248);
    dVar26 = *(double *)(param_2 + 0x250);
    dVar36 = *(double *)(param_2 + 600);
    dVar8 = dVar44 * dVar40 * -1.0 +
            dVar26 * (double)CONCAT44(uVar51,uVar50) +
            (double)CONCAT44(uVar49,uVar48) * dVar36 * 1.0 + dVar42 * dVar43;
    dVar7 = dVar43 * dVar40 * 1.0 +
            dVar36 * (double)CONCAT44(uVar51,uVar50) +
            (double)CONCAT44(uVar49,uVar48) * dVar26 * -1.0 + dVar42 * dVar44;
    auVar45._0_8_ =
         dVar36 * dVar40 * 1.0 +
         (((double)CONCAT44(uVar49,uVar48) * dVar44 * 1.0 + dVar42 * dVar26) -
         (double)CONCAT44(uVar51,uVar50) * dVar43);
    auVar45._8_8_ =
         dVar26 * dVar40 * -1.0 +
         (((double)CONCAT44(uVar49,uVar48) * dVar43 * -1.0 + dVar42 * dVar36) -
         (double)CONCAT44(uVar51,uVar50) * dVar44);
    dVar38 = *(double *)(param_2 + 0x260) * dVar19;
    dVar39 = *(double *)(param_2 + 0x268) * dVar33;
    dVar26 = *(double *)(param_2 + 0x270) * dVar37;
    dVar36 = *(double *)(param_2 + 0x278) * auVar24._8_8_;
    dVar29 = dVar39 * (double)CONCAT44(uVar49,uVar48) - (double)CONCAT44(uVar51,uVar50) * dVar38;
    dVar47 = dVar26 * (double)CONCAT44(uVar51,uVar50) - dVar40 * dVar39;
    dVar43 = dVar38 * dVar40 - (double)CONCAT44(uVar49,uVar48) * dVar26;
    dVar44 = dVar36 * dVar42 - dVar42 * dVar36;
    dVar47 = dVar47 + dVar47;
    dVar43 = dVar43 + dVar43;
    dVar29 = dVar29 + dVar29;
    dVar44 = dVar44 + dVar44;
    local_f8 = dVar31 + (dVar29 * (double)CONCAT44(uVar51,uVar50) - dVar40 * dVar43) +
                        dVar42 * dVar47 + dVar38;
    dStack_f0 = dVar35 + (dVar47 * dVar40 - dVar29 * (double)CONCAT44(uVar49,uVar48)) +
                         dVar42 * dVar43 + dVar39;
    local_e8 = local_298 +
               (dVar43 * (double)CONCAT44(uVar49,uVar48) - (double)CONCAT44(uVar51,uVar50) * dVar47)
               + dVar42 * dVar29 + dVar26;
    dVar40 = dStack_290 + (dVar44 * dVar42 - dVar44 * dVar42) + dVar42 * dVar44 + dVar36;
  }
  else {
    dVar8 = (double)CONCAT44(uVar49,uVar48) + (double)CONCAT44(uVar49,uVar48);
    dVar26 = (double)CONCAT44(uVar51,uVar50) + (double)CONCAT44(uVar51,uVar50);
    dVar43 = dVar40 + dVar40;
    dVar44 = (double)CONCAT44(uVar49,uVar48) * dVar8;
    dVar29 = (double)CONCAT44(uVar51,uVar50) * dVar26;
    local_1d8 = ((double)DAT_149934d80 - (dVar40 * dVar43 + dVar29)) * dVar19;
    dVar7 = (DAT_149934d80._8_8_ - (dVar40 * dVar43 + dVar44)) * dVar33;
    dVar36 = dVar26 * (double)CONCAT44(uVar49,uVar48);
    dVar38 = dVar43 * (double)CONCAT44(uVar51,uVar50);
    dVar40 = (double)CONCAT44(uVar49,uVar48) * dVar43;
    dVar8 = dVar8 * dVar42;
    dVar39 = (dVar38 - dVar8) * dVar37;
    local_188 = (1.0 - (dVar44 + dVar29)) * dVar37;
    dVar44 = dVar37 * (double)local_288._0_8_;
    dStack_1d0 = (dVar36 + dVar43 * dVar42) * dVar19;
    local_1a8 = (dVar38 + dVar8) * dVar33;
    local_1c8 = (dVar40 - dVar26 * dVar42) * dVar19;
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar7,0);
    local_1b8._0_8_ = (dVar36 - dVar43 * dVar42) * dVar33;
    local_1b8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    uStack_1a0 = 0;
    local_198._8_4_ = SUB84(dVar39,0);
    local_198._0_8_ = (dVar40 + dVar26 * dVar42) * dVar37;
    local_198._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
    uStack_180 = 0;
    local_168 = local_298;
    uStack_160 = 0x3ff0000000000000;
    dVar43 = *(double *)(param_2 + 0x240);
    dVar8 = *(double *)(param_2 + 0x248);
    dVar7 = *(double *)(param_2 + 0x250);
    dVar36 = dVar8 + dVar8;
    dVar38 = dVar7 + dVar7;
    dVar26 = dVar43 * (dVar43 + dVar43);
    local_208 = (1.0 - (dVar26 + dVar8 * dVar36)) * (double)local_288._0_8_;
    dVar42 = *(double *)(param_2 + 0x240) * dVar38;
    dVar40 = *(double *)(param_2 + 600);
    dVar39 = dVar38 * dVar40;
    dVar29 = (dVar43 + dVar43) * *(double *)(param_2 + 600);
    dVar40 = dVar36 * dVar40;
    local_218 = (dVar40 + dVar42) * (double)local_288._0_8_;
    local_238 = (dVar36 * dVar43 - dVar39) * dVar34;
    dStack_210 = (dVar38 * dVar8 - dVar29) * (double)local_288._0_8_;
    local_258 = ((double)DAT_149934d80 - (dVar7 * dVar38 + dVar8 * dVar36)) * dVar30;
    dStack_230 = (DAT_149934d80._8_8_ - (dVar7 * dVar38 + dVar26)) * dVar34;
    dStack_250 = (dVar36 * dVar43 + dVar39) * dVar30;
    local_228 = (dVar38 * dVar8 + dVar29) * dVar34;
    local_248 = (dVar42 - dVar40) * dVar30;
    uStack_240 = 0;
    uStack_220 = 0;
    uStack_200 = 0;
    local_1f8 = *(undefined8 *)(param_2 + 0x260);
    uStack_1f0 = *(undefined8 *)(param_2 + 0x268);
    local_1e8 = *(undefined8 *)(param_2 + 0x270);
    uStack_1e0 = 0x3ff0000000000000;
    local_178 = dVar31;
    dStack_170 = dVar35;
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar21._8_8_ = -(ulonglong)(0.0 <= dVar33 * dVar34);
    auVar21._0_8_ = -(ulonglong)(0.0 <= dVar19 * dVar30);
    auVar27 = blendvpd(_DAT_149936790,auVar45,auVar21);
    uVar18 = -(ulonglong)(0.0 <= dVar44);
    dVar40 = (double)(~uVar18 & 0xbff0000000000000 | uVar18 & 0x3ff0000000000000);
    dVar42 = auVar27._0_8_;
    local_148 = local_148 * dVar42;
    local_150 = local_150 * dVar42;
    local_158 = local_158 * dVar42;
    dVar42 = auVar27._8_8_;
    local_128 = local_128 * dVar42;
    local_130 = local_130 * dVar42;
    local_138 = dVar42 * local_138;
    local_108 = local_108 * dVar40;
    local_110 = local_110 * dVar40;
    local_118 = dVar40 * local_118;
    FUN_14481fd10(&local_278,&local_158);
    auVar23._0_8_ = local_278 * local_278;
    auVar23._8_8_ = dStack_270 * dStack_270;
    dVar40 = local_268 * local_268 + auVar23._0_8_;
    dVar42 = dStack_260 * dStack_260 + auVar23._8_8_;
    auVar25._0_8_ = dVar40 + dVar42;
    auVar25._8_8_ = dVar40 + dVar42;
    auVar27 = sqrtpd(auVar23,auVar25);
    auVar45 = divpd(auVar45,auVar27);
    auVar46._0_8_ = auVar45._0_8_ * local_268;
    auVar46._8_8_ = auVar45._8_8_ * dStack_260;
    dVar8 = (double)((ulonglong)(local_278 * auVar45._0_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_));
    dVar7 = (double)((ulonglong)(dStack_270 * auVar45._8_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_));
    auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_);
    auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_);
    auVar45 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar46,auVar22);
    dVar40 = 0.0;
  }
  dVar42 = auVar24._8_8_ * (double)uVar10;
  auVar6._8_4_ = SUB84(dVar7,0);
  auVar6._0_8_ = dVar8;
  auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x280) = auVar6;
  *(undefined1 (*) [16])(param_1 + 0x290) = auVar45;
  *(double *)(param_1 + 0x2a0) = local_f8;
  *(double *)(param_1 + 0x2a8) = dStack_f0;
  *(double *)(param_1 + 0x2b0) = local_e8;
  *(double *)(param_1 + 0x2b8) = dVar40;
  auVar5._8_4_ = SUB84(dVar33 * dVar34,0);
  auVar5._0_8_ = dVar19 * dVar30;
  auVar5._12_4_ = (int)((ulonglong)(dVar33 * dVar34) >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x2c0) = auVar5;
  auVar4._8_4_ = SUB84(dVar42,0);
  auVar4._0_8_ = dVar37 * (double)uVar9;
  auVar4._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x2d0) = auVar4;
  if ((local_d0 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496e8694 FUN_1496e8694 body=570 status=ok
// SIG undefined FUN_1496e8694(void)

void FUN_1496e8694(longlong param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_118 [40];
  undefined4 local_f0;
  undefined8 *local_e8;
  longlong local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint local_c0;
  int iStack_bc;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  uint local_a0;
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar1 = (longlong *)(param_1 + 0x68);
  lVar2 = param_1 + 0x78;
  local_b0 = 0x100000000;
  local_a0 = 0xffffffff;
  iStack_9c = 0;
  uStack_98 = 0;
  uStack_a8 = lVar2;
  if (*(int *)(param_1 + 0x90) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_b0);
    iVar9 = *(int *)(param_1 + 0x90);
  }
  uStack_b8 = CONCAT44(uStack_94,uStack_98);
  local_c0 = local_a0;
  iStack_bc = iStack_9c;
  local_d0 = (undefined4)local_b0;
  uStack_cc = local_b0._4_4_;
  uStack_c8 = (undefined4)uStack_a8;
  uStack_c4 = uStack_a8._4_4_;
  local_d8 = plVar1;
  if ((iStack_9c != iVar9) || (uStack_a8 != lVar2)) {
    local_e0 = param_1 + 0xb8;
    do {
      lVar4 = *local_d8;
      lVar10 = (longlong)iStack_bc * 0x20;
      uVar5 = *(undefined8 *)(lVar4 + lVar10);
      uVar6 = (uint)((ulonglong)uVar5 >> 0x10);
      uVar8 = (uint)uVar5 & 0xffff;
      lVar7 = FUN_1496f27a4(local_e0,((uint)uVar5 << 0x10 | uVar8) + (int)((ulonglong)uVar5 >> 0x20)
                                     + (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar8 >> 4),
                            lVar4 + lVar10);
      uVar3 = *(undefined4 *)(lVar4 + 0x10 + lVar10);
      FUN_1496e95e4(lVar7,uVar3);
      local_80 = 0;
      local_78 = 0;
      local_90 = &LAB_144591588;
      local_88 = &local_b0;
      local_e8 = &local_80;
      local_f0 = 0;
      local_b0 = lVar4 + lVar10;
      uStack_a8 = lVar7;
      local_a0 = param_2;
      iStack_9c = param_3;
      FUN_1427ae281(L"ParallelFor Task",uVar3,1,&local_90);
      local_c0 = local_c0 & ~uStack_cc;
      FUN_1449c0562(&local_d0);
    } while (local_d8 != plVar1 || (CONCAT44(uStack_c4,uStack_c8) != lVar2 || iStack_bc != iVar9));
  }
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
    FUN_1496f0dae(plVar1);
    FUN_1496f0ef2(plVar1);
  }
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e88d0 FUN_1496e88d0 body=1380 status=ok
// SIG undefined FUN_1496e88d0(void)

void FUN_1496e88d0(ulonglong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  uint unaff_EBP;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  ulonglong unaff_R15;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar40;
  undefined1 auVar39 [16];
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  
  iVar10 = (int)param_1[8];
  if (iVar10 < 3) {
    return;
  }
  iVar14 = 0;
  iVar16 = 1;
  iVar11 = 0;
  do {
    uVar15 = (ulonglong)iVar14;
    if (iVar16 == 0) {
      local_f8 = DAT_14c8464a0;
      dStack_f0 = DAT_14c8464a8;
      dStack_100 = DAT_14c8464b8;
      local_108 = DAT_14c8464b0;
      local_128 = DAT_14c8464c0;
      dStack_120 = DAT_14c8464c8;
      local_118 = (double)CONCAT44(DAT_14c8464d0._4_4_,(undefined4)DAT_14c8464d0);
      dStack_110 = (double)CONCAT44(uRam000000014c8464dc,uRam000000014c8464d8);
      dVar33 = DAT_14c846490;
      dVar34 = DAT_14c846498;
      dVar35 = DAT_14c846480;
      dVar36 = DAT_14c846488;
    }
    else {
      uVar18 = param_1[2];
      lVar20 = uVar15 * 0x10;
      uVar3 = *param_1;
      local_108 = (double)*(float *)(uVar3 + 8 + uVar15 * 0xc);
      dStack_f0 = (double)*(float *)(uVar3 + 4 + uVar15 * 0xc);
      local_f8 = (double)*(float *)(uVar3 + uVar15 * 0xc);
      dStack_100 = 0.0;
      local_118 = 1.0;
      dStack_110 = 0.0;
      local_128 = 1.0;
      dStack_120 = 1.0;
      dVar33 = (double)*(float *)(uVar18 + 8 + lVar20);
      dVar34 = (double)*(float *)(uVar18 + 0xc + lVar20);
      dVar35 = (double)*(float *)(uVar18 + lVar20);
      dVar36 = (double)*(float *)(uVar18 + 4 + lVar20);
    }
    uVar18 = (ulonglong)iVar11;
    if (iVar14 != iVar11) {
      *(undefined4 *)(param_1[7] + uVar18 * 4) = *(undefined4 *)(param_1[7] + uVar15 * 4);
      uVar3 = *param_1;
      lVar20 = uVar15 * 0xc;
      lVar12 = uVar18 * 0xc;
      *(undefined4 *)(uVar3 + 8 + lVar12) = *(undefined4 *)(uVar3 + 8 + lVar20);
      *(undefined8 *)(uVar3 + lVar12) = *(undefined8 *)(uVar3 + lVar20);
      puVar1 = (undefined8 *)(param_1[2] + uVar15 * 0x10);
      uVar9 = puVar1[1];
      puVar2 = (undefined8 *)(param_1[2] + uVar18 * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar9;
      uVar18 = param_1[4];
      *(undefined4 *)(uVar18 + 8 + lVar12) = *(undefined4 *)(uVar18 + 8 + lVar20);
      *(undefined8 *)(uVar18 + lVar12) = *(undefined8 *)(uVar18 + lVar20);
      iVar10 = (int)param_1[8];
      uVar18 = uVar15;
    }
    iVar19 = iVar11 + 1;
    iVar16 = iVar14 + 1;
    if (iVar14 + 1 < iVar10) {
      iVar16 = iVar10;
    }
    lVar12 = uVar18 * 0x10 + 0x1c;
    lVar20 = uVar18 * 0xc + 0x14;
    uVar15 = uVar18;
    do {
      iVar17 = (int)uVar18;
      uVar15 = uVar15 + 1;
      iVar22 = iVar16 + -1;
      if ((longlong)iVar10 <= (longlong)uVar15) break;
      uVar41 = SUB84(DAT_14c8464c0,0);
      uVar42 = (undefined4)((ulonglong)DAT_14c8464c0 >> 0x20);
      uVar43 = SUB84(DAT_14c8464c8,0);
      uVar44 = (undefined4)((ulonglong)DAT_14c8464c8 >> 0x20);
      uVar45 = (undefined4)DAT_14c8464d0;
      uVar46 = DAT_14c8464d0._4_4_;
      uVar47 = uRam000000014c8464d8;
      uVar48 = uRam000000014c8464dc;
      dVar6 = DAT_14c846498;
      dVar5 = DAT_14c846490;
      dVar4 = DAT_14c846480;
      dVar8 = DAT_14c8464a8;
      dVar7 = DAT_14c8464a0;
      dVar37 = DAT_14c846488;
      dVar38 = DAT_14c8464b0;
      dVar40 = DAT_14c8464b8;
      if (iVar10 != 0) {
        unaff_R15 = *param_1;
        uVar18 = param_1[2];
        dVar6 = (double)*(float *)(uVar18 + lVar12);
        dVar5 = (double)*(float *)((uVar18 - 4) + lVar12);
        dVar37 = (double)*(float *)((uVar18 - 8) + lVar12);
        dVar4 = (double)*(float *)((uVar18 - 0xc) + lVar12);
        dVar38 = (double)*(float *)(unaff_R15 + lVar20);
        dVar8 = (double)*(float *)((unaff_R15 - 4) + lVar20);
        dVar7 = (double)*(float *)((unaff_R15 - 8) + lVar20);
        dVar40 = 0.0;
        uVar45 = 0;
        uVar46 = 0x3ff00000;
        uVar47 = 0;
        uVar48 = 0;
        uVar41 = 0;
        uVar42 = 0x3ff00000;
        uVar43 = 0;
        uVar44 = 0x3ff00000;
      }
      auVar25._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar8 - dStack_f0));
      auVar25._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar7 - local_f8));
      unaff_EBP = movmskpd(unaff_EBP,auVar25);
      auVar26._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar40 - dStack_100));
      auVar26._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar38 - local_108));
      iVar22 = movmskpd((int)unaff_R15,auVar26);
      uVar23 = iVar22 << 2 | unaff_EBP;
      unaff_R15 = (ulonglong)uVar23;
      iVar22 = iVar17;
      if (uVar23 != 0) break;
      auVar27._8_4_ = SUB84(dVar37,0);
      auVar27._0_8_ = dVar4;
      auVar27._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
      auVar39._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar27._8_8_ - dVar36));
      auVar39._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar4 - dVar35));
      unaff_EBP = movmskpd(unaff_EBP,auVar39);
      auVar28._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar6 - dVar34));
      auVar28._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar5 - dVar33));
      iVar24 = movmskpd(0,auVar28);
      uVar23 = iVar24 << 2 | unaff_EBP;
      if (uVar23 != 0) {
        auVar29._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar37 + dVar36));
        auVar29._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar4 + dVar35));
        unaff_EBP = movmskpd(unaff_EBP,auVar29);
        auVar30._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar6 + dVar34));
        auVar30._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar5 + dVar33));
        iVar24 = movmskpd(uVar23,auVar30);
        uVar23 = iVar24 << 2 | unaff_EBP;
        unaff_R15 = (ulonglong)uVar23;
        if (uVar23 != 0) break;
      }
      auVar31._8_8_ =
           -(ulonglong)(9.999999747378752e-05 < ABS((double)CONCAT44(uVar44,uVar43) - dStack_120));
      auVar31._0_8_ =
           -(ulonglong)(9.999999747378752e-05 < ABS((double)CONCAT44(uVar42,uVar41) - local_128));
      unaff_EBP = movmskpd(unaff_EBP,auVar31);
      auVar32._8_8_ =
           -(ulonglong)(9.999999747378752e-05 < ABS((double)CONCAT44(uVar48,uVar47) - dStack_110));
      auVar32._0_8_ =
           -(ulonglong)(9.999999747378752e-05 < ABS((double)CONCAT44(uVar46,uVar45) - local_118));
      iVar24 = movmskpd(0,auVar32);
      uVar18 = (ulonglong)(iVar17 + 1);
      lVar12 = lVar12 + 0x10;
      lVar20 = lVar20 + 0xc;
      uVar23 = iVar24 << 2 | unaff_EBP;
      unaff_R15 = (ulonglong)uVar23;
    } while (uVar23 == 0);
    if ((iVar14 < iVar22) && (iVar14 = iVar22, iVar19 < iVar10)) {
      if (iVar22 != iVar19) {
        lVar13 = (longlong)iVar22;
        lVar21 = (longlong)iVar19;
        *(undefined4 *)(param_1[7] + lVar21 * 4) = *(undefined4 *)(param_1[7] + lVar13 * 4);
        uVar15 = *param_1;
        lVar20 = lVar13 * 0xc;
        lVar12 = lVar21 * 0xc;
        *(undefined4 *)(uVar15 + 8 + lVar12) = *(undefined4 *)(uVar15 + 8 + lVar20);
        *(undefined8 *)(uVar15 + lVar12) = *(undefined8 *)(uVar15 + lVar20);
        puVar1 = (undefined8 *)(param_1[2] + lVar13 * 0x10);
        uVar9 = puVar1[1];
        puVar2 = (undefined8 *)(param_1[2] + lVar21 * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar9;
        uVar15 = param_1[4];
        *(undefined4 *)(uVar15 + 8 + lVar12) = *(undefined4 *)(uVar15 + 8 + lVar20);
        *(undefined8 *)(uVar15 + lVar12) = *(undefined8 *)(uVar15 + lVar20);
        iVar10 = (int)param_1[8];
      }
      iVar19 = iVar11 + 2;
    }
    iVar14 = iVar14 + 1;
    iVar16 = iVar10;
    iVar11 = iVar19;
    if (iVar10 <= iVar14) {
      FUN_1496e9660();
      return;
    }
  } while( true );
}



// FUNCTION 1496e8e34 FUN_1496e8e34 body=151 status=ok
// SIG undefined FUN_1496e8e34(void)

void FUN_1496e8e34(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  return;
}



// FUNCTION 1496e8ecc FUN_1496e8ecc body=162 status=ok
// SIG undefined FUN_1496e8ecc(void)

void FUN_1496e8ecc(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1496f188a();
  do {
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1496f1b0a(param_1,iVar1);
    }
    lVar2 = *param_1;
    lVar3 = (longlong)iVar1 * 0x50;
    *(undefined8 *)(lVar2 + 0x20 + lVar3) = 0;
    *(undefined4 *)(lVar2 + 0x28 + lVar3) = 0;
    *(undefined8 *)(lVar2 + lVar3) = 0;
    ((undefined8 *)(lVar2 + lVar3))[1] = 0;
    *(undefined8 *)(lVar2 + 0x2c + lVar3) = 0xffffffff00000080;
    *(undefined4 *)(lVar2 + 0x34 + lVar3) = 0;
    *(undefined8 *)(lVar2 + 0x40 + lVar3) = 0;
    *(undefined4 *)(lVar2 + 0x48 + lVar3) = 0;
    FUN_140d188f2(lVar2 + lVar3,&DAT_14cc225f8);
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 1496e8f6e FUN_1496e8f6e body=1255 status=ok
// SIG undefined FUN_1496e8f6e(void)

void FUN_1496e8f6e(longlong param_1,float *param_2,undefined8 **param_3)

{
  uint uVar1;
  longlong *plVar2;
  float *pfVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined8 **ppuVar11;
  undefined8 **ppuVar12;
  uint uVar13;
  int iVar14;
  float fVar15;
  int iVar16;
  float *pfVar17;
  longlong lVar18;
  float fVar19;
  int iVar20;
  int iVar21;
  longlong *plVar22;
  undefined1 auStack_138 [32];
  int local_118;
  undefined4 local_114;
  float *local_110;
  float *local_108;
  longlong local_100;
  longlong local_f8;
  longlong *local_f0;
  undefined8 **local_e8;
  undefined8 **local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong *local_c0;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  ppuVar11 = param_3;
  if (*(float *)(param_3 + 1) != *(float *)((longlong)param_3 + 0x34)) {
    FUN_1496f20fa(param_3);
    FUN_1496f223e(param_3);
  }
  plVar22 = (longlong *)(param_1 + 0x1b8);
  lVar5 = param_1 + 0x1c8;
  local_98 = (longlong *)0x100000000;
  local_88 = 0xffffffff;
  iStack_84 = 0;
  uStack_80 = 0;
  uStack_90 = lVar5;
  if (*(int *)(param_1 + 0x1e0) == 0) {
    iVar16 = 0;
  }
  else {
    FUN_1449c0562(&local_98);
    iVar16 = *(int *)(param_1 + 0x1e0);
  }
  uStack_a0 = CONCAT44(uStack_7c,uStack_80);
  local_a8 = local_88;
  iStack_a4 = iStack_84;
  local_b8 = (undefined4)local_98;
  uStack_b4 = local_98._4_4_;
  uStack_b0 = (undefined4)uStack_90;
  uStack_ac = uStack_90._4_4_;
  local_c0 = plVar22;
  if ((iStack_84 != iVar16) || (uStack_90 != lVar5)) {
    local_108 = param_2 + 2;
    local_e0 = (undefined8 **)(param_2 + 0x10);
    local_118 = iVar16;
    local_100 = lVar5;
    do {
      lVar7 = *local_c0;
      lVar6 = (longlong)iStack_a4;
      if (*(int *)(lVar7 + 0x30 + lVar6 * 0x48) != 0) {
        plVar2 = (longlong *)(lVar7 + lVar6 * 0x48);
        fVar19 = 0.0;
        ppuVar11 = (undefined8 **)CONCAT71((int7)((ulonglong)ppuVar11 >> 8),1);
        local_114 = SUB84(ppuVar11,0);
        pfVar17 = (float *)&DAT_00000008;
        if (param_2[4] != param_2[0xf]) {
          lVar18 = *plVar2;
          uVar8 = (uint)((ulonglong)lVar18 >> 0x10);
          uVar13 = (uint)lVar18 & 0xffff;
          ppuVar11 = *(undefined8 ***)(param_2 + 0x12);
          if (*(undefined8 ***)(param_2 + 0x12) == (undefined8 **)0x0) {
            ppuVar11 = local_e0;
          }
          fVar15 = *(float *)((longlong)ppuVar11 +
                             (ulonglong)
                             ((int)param_2[0x14] - 1U &
                             (int)((ulonglong)lVar18 >> 0x20) + ((uint)lVar18 << 0x10 | uVar13) +
                             (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar13 >> 4)) * 4);
          if (fVar15 == -NAN) {
            pfVar17 = (float *)&DAT_00000008;
            fVar19 = 0.0;
          }
          else {
            ppuVar11 = *(undefined8 ***)local_108;
            pfVar17 = (float *)&DAT_00000008;
            do {
              pfVar3 = (float *)((longlong)ppuVar11 + (longlong)(int)fVar15 * 0x14);
              if (*(longlong *)pfVar3 == lVar18) {
                pfVar17 = pfVar3 + 2;
                if (pfVar3 != (float *)0x0) {
                  local_114 = 0;
                  fVar19 = *pfVar17;
                }
                break;
              }
              fVar15 = pfVar3[3];
            } while (fVar15 != -NAN);
          }
        }
        uVar8 = (int)plVar2[4] - (int)fVar19;
        if (uVar8 == 0 || (int)plVar2[4] < (int)fVar19) {
          local_d8 = 0;
          uStack_d0 = 0;
        }
        else {
          local_f8 = lVar7 + lVar6 * 0x48 + 8;
          lVar5 = (longlong)(int)fVar19 * 4 + plVar2[3];
          iVar16 = 0;
          uVar13 = uVar8;
          do {
            uVar1 = (uVar13 >> 1) + iVar16;
            if (*(float *)(lVar5 + (ulonglong)uVar1 * 4) <= param_2[1]) {
              iVar16 = uVar1 + (uVar13 & 1);
            }
            bVar10 = 1 < uVar13;
            uVar13 = uVar13 >> 1;
          } while (bVar10);
          iVar14 = 0;
          ppuVar12 = (undefined8 **)(ulonglong)uVar8;
          do {
            ppuVar11 = (undefined8 **)((ulonglong)ppuVar12 >> 1);
            uVar13 = (int)ppuVar11 + iVar14;
            uVar8 = (uint)ppuVar12;
            if (*(float *)(lVar5 + (ulonglong)uVar13 * 4) <= param_2[1] + *param_2) {
              iVar14 = uVar13 + (uVar8 & 1);
            }
            ppuVar12 = ppuVar11;
          } while (1 < uVar8);
          iVar20 = (int)fVar19 + iVar16;
          iVar14 = iVar14 - iVar16;
          local_d8 = 0;
          uStack_d0 = 0;
          if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar14);
          }
          lVar5 = local_100;
          iVar16 = local_118;
          if (iVar14 != 0) {
            local_110 = pfVar17;
            local_f0 = plVar22;
            local_e8 = param_3;
            FUN_1496f235c(&local_d8,iVar14);
            lVar7 = local_f8;
            pfVar17 = local_110;
            do {
              uVar4 = uStack_d0;
              iVar21 = -1;
              if ((iVar20 < 0) || ((int)plVar2[6] <= iVar20)) {
                uVar9 = 0;
                lVar6 = 0;
              }
              else {
                uVar9 = (undefined4)plVar2[7];
                lVar6 = lVar7;
                iVar21 = iVar20;
              }
              lVar18 = (longlong)(int)uStack_d0;
              uVar8 = (int)uStack_d0 + 1;
              uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar8);
              if (uStack_d0._4_4_ < uVar8) {
                FUN_1496f23bc(&local_d8,uVar4 & 0xffffffff);
                lVar7 = local_f8;
                pfVar17 = local_110;
              }
              param_3 = local_e8;
              plVar22 = local_f0;
              lVar5 = local_100;
              pfVar3 = local_108;
              iVar16 = local_118;
              lVar18 = lVar18 * 0x10;
              *(longlong *)(local_d8 + lVar18) = lVar6;
              *(undefined4 *)(local_d8 + 8 + lVar18) = uVar9;
              *(int *)(local_d8 + 0xc + lVar18) = iVar21;
              iVar20 = iVar20 + 1;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            if (0 < (int)uStack_d0) {
              if ((char)local_114 != '\0') {
                local_98 = plVar2;
                FUN_140818534(local_108,&local_78,&local_98,0);
                pfVar17 = (float *)(*(longlong *)pfVar3 + (longlong)(int)local_78 * 0x14 + 8);
              }
              *pfVar17 = *(float *)(local_d8 + 0xc + (longlong)((int)uStack_d0 + -1) * 0x10);
              local_98 = (longlong *)*plVar2;
              uStack_90 = local_d8;
              local_88 = (uint)uStack_d0;
              iStack_84 = uStack_d0._4_4_;
              local_d8 = 0;
              uStack_d0 = 0;
              local_78 = &local_98;
              local_70 = &uStack_90;
              ppuVar11 = &local_78;
              FUN_1496f2442(param_3,local_64,ppuVar11);
              if (uStack_90 != 0) {
                FUN_1400020a8();
              }
            }
          }
        }
        if (local_d8 != 0) {
          FUN_1400020a8();
        }
      }
      local_a8 = local_a8 & ~uStack_b4;
      FUN_1449c0562(&local_b8);
      bVar10 = CONCAT44(uStack_ac,uStack_b0) != lVar5 || iStack_a4 != iVar16;
      ppuVar11 = (undefined8 **)CONCAT71((int7)((ulonglong)ppuVar11 >> 8),bVar10);
    } while (local_c0 != plVar22 || bVar10);
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496e9458 FUN_1496e9458 body=394 status=ok
// SIG undefined FUN_1496e9458(void)

void FUN_1496e9458(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined4 local_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint local_90;
  int iStack_8c;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x48);
  lVar2 = param_1 + 0x58;
  local_80 = 0x100000000;
  local_70 = 0xffffffff;
  iStack_6c = 0;
  uStack_68 = 0;
  uStack_78 = lVar2;
  if (*(int *)(param_1 + 0x70) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_80);
    iVar9 = *(int *)(param_1 + 0x70);
  }
  uStack_88 = CONCAT44(uStack_64,uStack_68);
  local_90 = local_70;
  iStack_8c = iStack_6c;
  local_a0 = (undefined4)local_80;
  uStack_9c = local_80._4_4_;
  uStack_98 = (undefined4)uStack_78;
  uStack_94 = uStack_78._4_4_;
  local_a8 = plVar1;
  if ((iStack_6c != iVar9) || (uStack_78 != lVar2)) {
    do {
      lVar4 = *local_a8;
      lVar7 = (longlong)iStack_8c;
      puVar3 = (undefined8 *)(lVar4 + lVar7 * 0x90);
      uVar11 = FUN_1448c9f94(puVar3 + 1,param_2,0);
      uVar5 = *puVar3;
      uVar6 = (uint)((ulonglong)uVar5 >> 0x10);
      uVar10 = (uint)uVar5 & 0xffff;
      puVar8 = (undefined4 *)
               FUN_1478fc374(param_3,((uint)uVar5 << 0x10 | uVar10) +
                                     (int)((ulonglong)uVar5 >> 0x20) +
                                     (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar10 >> 4),
                             lVar4 + lVar7 * 0x90);
      *puVar8 = uVar11;
      local_90 = local_90 & ~uStack_9c;
      FUN_1449c0562(&local_a0);
    } while (local_a8 != plVar1 || (CONCAT44(uStack_94,uStack_98) != lVar2 || iStack_8c != iVar9));
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496e95e4 FUN_1496e95e4 body=122 status=ok
// SIG undefined FUN_1496e95e4(void)

void FUN_1496e95e4(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1496f2d7e(param_1,iVar1);
    }
    FUN_1496f2d5d((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1496f2e12(param_1,param_2,iVar1 - param_2);
    FUN_1496f2e74(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}


