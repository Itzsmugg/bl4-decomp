// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144e5e930 FUN_144e5e930 body=8 status=ok
// SIG undefined FUN_144e5e930(void)

char * FUN_144e5e930(void)

{
  return "floatvector";
}



// FUNCTION 144e5e940 FUN_144e5e940 body=86 status=ok
// SIG undefined FUN_144e5e940(void)

undefined8 * FUN_144e5e940(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    FUN_144e472d0(puVar1);
    *puVar1 = Imf_3_2::TypedAttribute<std::vector<float,std::allocator<float>_>_>::vftable;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144e5e9a0 FUN_144e5e9a0 body=159 status=ok
// SIG undefined FUN_144e5e9a0(void)

longlong * FUN_144e5e9a0(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_14494321d(0x20);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    FUN_144e472d0(plVar1);
    *plVar1 = (longlong)Imf_3_2::TypedAttribute<std::vector<float,std::allocator<float>_>_>::vftable
    ;
    plVar1[1] = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
  }
  if (*(code **)(*plVar1 + 0x28) != FUN_144e5ebc0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
    return plVar1;
  }
  lVar2 = FUN_144e5ec70(param_1);
  FUN_144e5ed10(plVar1 + 1,lVar2 + 8);
  return plVar1;
}



// FUNCTION 144e5ea40 FUN_144e5ea40 body=137 status=ok
// SIG undefined FUN_144e5ea40(void)

void FUN_144e5ea40(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined1 local_resb;
  
  iVar2 = (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 2);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 8) + lVar3 * 4);
      local_res9 = (undefined1)((uint)uVar1 >> 8);
      local_res8 = (undefined1)uVar1;
      local_resb = (undefined1)((uint)uVar1 >> 0x18);
      local_resa = (undefined1)((uint)uVar1 >> 0x10);
      (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}



// FUNCTION 144e5ead0 FUN_144e5ead0 body=236 status=ok
// SIG undefined FUN_144e5ead0(void)

void FUN_144e5ead0(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  size_t _Size;
  longlong lVar2;
  void *pvVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 local_res18 [4];
  
  pvVar3 = *(void **)(param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 8);
  lVar5 = *plVar1;
  uVar4 = (longlong)pvVar3 - lVar5 >> 2;
  uVar6 = (ulonglong)((int)(param_3 + (param_3 >> 0x1f & 3U)) >> 2);
  if (uVar6 < uVar4) {
    pvVar3 = (void *)(lVar5 + uVar6 * 4);
  }
  else {
    if (uVar6 <= uVar4) goto LAB_144e5eb5c;
    if ((ulonglong)(*(longlong *)(param_1 + 0x18) - lVar5 >> 2) < uVar6) {
      FUN_148279338(plVar1,uVar6,local_res18);
      goto LAB_144e5eb5c;
    }
    _Size = (uVar6 - uVar4) * 4;
    memset(pvVar3,0,_Size);
    pvVar3 = (void *)(_Size + (longlong)pvVar3);
  }
  *(void **)(param_1 + 0x10) = pvVar3;
LAB_144e5eb5c:
  if (0 < (longlong)uVar6) {
    lVar5 = 0;
    do {
      lVar2 = *plVar1;
      (**(code **)(*param_2 + 0x10))(param_2,local_res18,4);
      *(undefined4 *)(lVar2 + lVar5 * 4) = local_res18[0];
      lVar5 = lVar5 + 1;
    } while (lVar5 < (longlong)uVar6);
  }
  return;
}



// FUNCTION 144e5ebc0 FUN_144e5ebc0 body=152 status=ok
// SIG undefined FUN_144e5ebc0(void)

void FUN_144e5ebc0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar2 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<std::vector<float,std::allocator<float>_>_>::
                           RTTI_Type_Descriptor);
  if (lVar2 != 0) {
    if ((longlong *)(param_1 + 8) != (longlong *)(lVar2 + 8)) {
      lVar1 = *(longlong *)(lVar2 + 8);
      FUN_144e5ede0((longlong *)(param_1 + 8),lVar1,*(longlong *)(lVar2 + 0x10) - lVar1 >> 2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e5ec70 FUN_144e5ec70 body=109 status=ok
// SIG undefined FUN_144e5ec70(void)

void FUN_144e5ec70(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<std::vector<float,std::allocator<float>_>_>::
                           RTTI_Type_Descriptor);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e5ecf0 FUN_144e5ecf0 body=19 status=ok
// SIG undefined FUN_144e5ecf0(void)

void FUN_144e5ecf0(void)

{
  FUN_144e475b0("floatvector",FUN_144e5e940);
  return;
}



// FUNCTION 144e5ed10 FUN_144e5ed10 body=45 status=ok
// SIG undefined FUN_144e5ed10(void)

longlong * FUN_144e5ed10(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_144e5ede0(param_1,*param_2,param_2[1] - *param_2 >> 2);
  }
  return param_1;
}



// FUNCTION 144e5ed40 FUN_144e5ed40 body=144 status=ok
// SIG undefined FUN_144e5ed40(void)

undefined8 * FUN_144e5ed40(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *param_1 = Imf_3_2::TypedAttribute<std::vector<float,std::allocator<float>_>_>::vftable;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    uVar3 = param_1[3] - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  FUN_144e472e0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144e5ede0 FUN_144e5ede0 body=342 status=ok
// SIG undefined FUN_144e5ede0(void)

void FUN_144e5ede0(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  void *_Dst;
  ulonglong uVar1;
  ulonglong uVar2;
  size_t _Size;
  void *pvVar3;
  
  _Dst = (void *)*param_1;
  uVar1 = param_1[2] - (longlong)_Dst >> 2;
  if (uVar1 < param_3) {
    if (0x3fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_148279158();
    }
    uVar2 = 0x3fffffffffffffff;
    if ((uVar1 <= 0x3fffffffffffffff - (uVar1 >> 1)) &&
       (uVar2 = (uVar1 >> 1) + uVar1, uVar2 < param_3)) {
      uVar2 = param_3;
    }
    if (_Dst != (void *)0x0) {
      uVar1 = uVar1 * 4;
      pvVar3 = _Dst;
      if (0xfff < uVar1) {
        pvVar3 = *(void **)((longlong)_Dst + -8);
        uVar1 = uVar1 + 0x27;
        if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(pvVar3,uVar1);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    _Dst = (void *)FUN_14827916a(param_1,uVar2);
    *param_1 = _Dst;
    param_1[1] = _Dst;
    param_1[2] = (void *)((longlong)_Dst + uVar2 * 4);
    _Size = param_3 * 4;
    memmove(_Dst,param_2,_Size);
  }
  else {
    uVar1 = param_1[1] - (longlong)_Dst >> 2;
    if (uVar1 < param_3) {
      memmove(_Dst,param_2,uVar1 * 4);
      _Dst = (void *)param_1[1];
      param_2 = (void *)(uVar1 * 4 + (longlong)param_2);
      param_3 = param_3 - uVar1;
    }
    _Size = param_3 * 4;
    memmove(_Dst,param_2,_Size);
  }
  param_1[1] = _Size + (longlong)_Dst;
  return;
}



// FUNCTION 144e5ef40 FUN_144e5ef40 body=8 status=ok
// SIG undefined FUN_144e5ef40(void)

char * FUN_144e5ef40(void)

{
  return "idmanifest";
}



// FUNCTION 144e5ef50 FUN_144e5ef50 body=85 status=ok
// SIG undefined FUN_144e5ef50(void)

undefined8 * FUN_144e5ef50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    FUN_144e472d0(puVar1);
    *puVar1 = Imf_3_2::TypedAttribute<Imf_3_2::CompressedIDManifest>::vftable;
    FUN_14521cac0(puVar1 + 1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144e5efb0 FUN_144e5efb0 body=155 status=ok
// SIG undefined FUN_144e5efb0(void)

longlong * FUN_144e5efb0(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_14494321d(0x20);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    FUN_144e472d0(plVar1);
    *plVar1 = (longlong)Imf_3_2::TypedAttribute<Imf_3_2::CompressedIDManifest>::vftable;
    FUN_14521cac0(plVar1 + 1);
  }
  if (*(code **)(*plVar1 + 0x28) == FUN_144e5f240) {
    lVar2 = FUN_144e5f2d0(param_1);
    FUN_14521cad0(plVar1 + 1,lVar2 + 8);
    return plVar1;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 144e5f050 FUN_144e5f050 body=165 status=ok
// SIG undefined FUN_144e5f050(void)

void FUN_144e5f050(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  local_18 = (undefined1)uVar1;
  local_17 = (undefined1)((ulonglong)uVar1 >> 8);
  local_16 = (undefined1)((ulonglong)uVar1 >> 0x10);
  local_15 = (undefined1)((ulonglong)uVar1 >> 0x18);
  local_14 = (undefined1)((ulonglong)uVar1 >> 0x20);
  local_13 = (undefined1)((ulonglong)uVar1 >> 0x28);
  local_12 = (undefined1)((ulonglong)uVar1 >> 0x30);
  local_11 = (undefined1)((ulonglong)uVar1 >> 0x38);
  (**(code **)(*param_2 + 8))(param_2,&local_18,8);
  (**(code **)(*param_2 + 8))(param_2,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 144e5f100 FUN_144e5f100 body=297 status=ok
// SIG undefined FUN_144e5f100(void)

void FUN_144e5f100(longlong param_1,longlong *param_2,int param_3)

{
  void *pvVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (7 < param_3) {
    *(int *)(param_1 + 8) = param_3 + -8;
    if (*(void **)(param_1 + 0x18) != (void *)0x0) {
      free(*(void **)(param_1 + 0x18));
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    (**(code **)(*param_2 + 0x10))(param_2,&local_28,8);
    *(undefined8 *)(param_1 + 0x10) = local_28;
    pvVar1 = malloc((longlong)param_3 - 8);
    *(void **)(param_1 + 0x18) = pvVar1;
    (**(code **)(*param_2 + 0x10))(param_2,pvVar1,*(undefined4 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
  }
  FUN_144e41060(local_88,"Invalid size field reading idmanifest attribute");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_88,(ThrowInfo *)&DAT_14c6d51d8);
}



// FUNCTION 144e5f240 FUN_144e5f240 body=133 status=ok
// SIG undefined FUN_144e5f240(void)

void FUN_144e5f240(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imf_3_2::CompressedIDManifest>::
                           RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    FUN_14521cad0(param_1 + 8,lVar1 + 8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e5f2d0 FUN_144e5f2d0 body=109 status=ok
// SIG undefined FUN_144e5f2d0(void)

void FUN_144e5f2d0(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imf_3_2::CompressedIDManifest>::
                           RTTI_Type_Descriptor);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e5f350 FUN_144e5f350 body=19 status=ok
// SIG undefined FUN_144e5f350(void)

void FUN_144e5f350(void)

{
  FUN_144e475b0("idmanifest",FUN_144e5ef50);
  return;
}



// FUNCTION 144e5f370 FUN_144e5f370 body=74 status=ok
// SIG undefined FUN_144e5f370(void)

undefined8 * FUN_144e5f370(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::TypedAttribute<Imf_3_2::CompressedIDManifest>::vftable;
  FUN_14521cb30(param_1 + 1);
  FUN_144e472e0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144e5f3c0 FUN_144e5f3c0 body=146 status=ok
// SIG undefined FUN_144e5f3c0(void)

void FUN_144e5f3c0(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 0x10))(param_1,&local_18,8);
  *param_2 = local_18;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 144e5f460 FUN_144e5f460 body=8 status=ok
// SIG undefined FUN_144e5f460(void)

char * FUN_144e5f460(void)

{
  return "keycode";
}



// FUNCTION 144e5f470 FUN_144e5f470 body=131 status=ok
// SIG undefined FUN_144e5f470(void)

undefined8 * FUN_144e5f470(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    FUN_144e472d0(puVar1);
    *puVar1 = Imf_3_2::TypedAttribute<Imf_3_2::KeyCode>::vftable;
    FUN_14521cb60(puVar1 + 1,0,0,0,0,0,4,0x40);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144e5f500 FUN_144e5f500 body=201 status=ok
// SIG undefined FUN_144e5f500(void)

longlong * FUN_144e5f500(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_14494321d(0x28);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    FUN_144e472d0(plVar1);
    *plVar1 = (longlong)Imf_3_2::TypedAttribute<Imf_3_2::KeyCode>::vftable;
    FUN_14521cb60(plVar1 + 1,0,0,0,0,0,4,0x40);
  }
  if (*(code **)(*plVar1 + 0x28) == FUN_144e5f940) {
    lVar2 = FUN_144e5f9d0(param_1);
    FUN_14521cd00(plVar1 + 1,lVar2 + 8);
    return plVar1;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 144e5f5d0 FUN_144e5f5d0 body=405 status=ok
// SIG undefined FUN_144e5f5d0(void)

void FUN_144e5f5d0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined1 local_resb;
  
  param_1 = param_1 + 8;
  uVar1 = FUN_14521cd40(param_1);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  uVar1 = FUN_14521cdb0(param_1);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  uVar1 = FUN_14521ce20(param_1);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  uVar1 = FUN_14521ce90(param_1);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  uVar1 = FUN_14521cf00(param_1);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  uVar1 = FUN_14521cf70(param_1);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  uVar1 = FUN_14521cfe0(param_1);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  return;
}



// FUNCTION 144e5f770 FUN_144e5f770 body=449 status=ok
// SIG undefined FUN_144e5f770(void)

void FUN_144e5f770(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [2];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  param_1 = param_1 + 8;
  FUN_14521cd50(param_1,local_res8[0]);
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  FUN_14521cdc0(param_1,local_res8[0]);
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  FUN_14521ce30(param_1,local_res8[0]);
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  FUN_14521cea0(param_1,local_res8[0]);
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  FUN_14521cf10(param_1,local_res8[0]);
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  FUN_14521cf80(param_1,local_res8[0]);
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  FUN_14521cff0(param_1,local_res8[0]);
  return;
}



// FUNCTION 144e5f940 FUN_144e5f940 body=133 status=ok
// SIG undefined FUN_144e5f940(void)

void FUN_144e5f940(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imf_3_2::KeyCode>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    FUN_14521cd00(param_1 + 8,lVar1 + 8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e5f9d0 FUN_144e5f9d0 body=109 status=ok
// SIG undefined FUN_144e5f9d0(void)

void FUN_144e5f9d0(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imf_3_2::KeyCode>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e5fa50 FUN_144e5fa50 body=19 status=ok
// SIG undefined FUN_144e5fa50(void)

void FUN_144e5fa50(void)

{
  FUN_144e475b0("keycode",FUN_144e5f470);
  return;
}



// FUNCTION 144e5fa70 FUN_144e5fa70 body=62 status=ok
// SIG undefined FUN_144e5fa70(void)

undefined8 * FUN_144e5fa70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::TypedAttribute<Imf_3_2::KeyCode>::vftable;
  FUN_144e472e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 144e5fab0 FUN_144e5fab0 body=50 status=ok
// SIG undefined FUN_144e5fab0(void)

undefined8 * FUN_144e5fab0(undefined8 *param_1,undefined4 *param_2)

{
  FUN_144e472d0();
  *param_1 = Imf_3_2::TypedAttribute<Imf_3_2::LineOrder>::vftable;
  *(undefined4 *)(param_1 + 1) = *param_2;
  return param_1;
}



// FUNCTION 144e5faf0 FUN_144e5faf0 body=15 status=ok
// SIG undefined FUN_144e5faf0(void)

void FUN_144e5faf0(undefined8 *param_1)

{
  *param_1 = Imf_3_2::TypedAttribute<Imf_3_2::LineOrder>::vftable;
  FUN_144e472e0();
  return;
}



// FUNCTION 144e5fb00 FUN_144e5fb00 body=5 status=ok
// SIG undefined FUN_144e5fb00(void)

longlong FUN_144e5fb00(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144e5fb10 FUN_144e5fb10 body=5 status=ok
// SIG undefined FUN_144e5fb10(void)

longlong FUN_144e5fb10(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144e5fb20 FUN_144e5fb20 body=8 status=ok
// SIG undefined FUN_144e5fb20(void)

char * FUN_144e5fb20(void)

{
  return "lineOrder";
}



// FUNCTION 144e5fb30 FUN_144e5fb30 body=70 status=ok
// SIG undefined FUN_144e5fb30(void)

undefined8 * FUN_144e5fb30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_144e472d0(puVar1);
    *puVar1 = Imf_3_2::TypedAttribute<Imf_3_2::LineOrder>::vftable;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144e5fb80 FUN_144e5fb80 body=133 status=ok
// SIG undefined FUN_144e5fb80(void)

longlong * FUN_144e5fb80(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_14494321d(0x10);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    *plVar1 = 0;
    plVar1[1] = 0;
    FUN_144e472d0(plVar1);
    *plVar1 = (longlong)Imf_3_2::TypedAttribute<Imf_3_2::LineOrder>::vftable;
  }
  if (*(code **)(*plVar1 + 0x28) == FUN_144e5fc80) {
    lVar2 = FUN_144e5fd10(param_1);
    *(undefined4 *)(plVar1 + 1) = *(undefined4 *)(lVar2 + 8);
    return plVar1;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 144e5fc10 FUN_144e5fc10 body=40 status=ok
// SIG undefined FUN_144e5fc10(void)

void FUN_144e5fc10(longlong param_1,longlong *param_2)

{
  undefined1 local_res8 [32];
  
  local_res8[0] = *(undefined1 *)(param_1 + 8);
  (**(code **)(*param_2 + 8))(param_2,local_res8,1);
  return;
}



// FUNCTION 144e5fc40 FUN_144e5fc40 body=55 status=ok
// SIG undefined FUN_144e5fc40(void)

void FUN_144e5fc40(longlong param_1,longlong *param_2)

{
  uint uVar1;
  byte local_res8 [32];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,1);
  uVar1 = (uint)local_res8[0];
  if (2 < local_res8[0]) {
    uVar1 = 3;
  }
  *(uint *)(param_1 + 8) = uVar1;
  return;
}



// FUNCTION 144e5fc80 FUN_144e5fc80 body=126 status=ok
// SIG undefined FUN_144e5fc80(void)

void FUN_144e5fc80(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imf_3_2::LineOrder>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e5fd10 FUN_144e5fd10 body=109 status=ok
// SIG undefined FUN_144e5fd10(void)

void FUN_144e5fd10(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imf_3_2::LineOrder>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e5fd90 FUN_144e5fd90 body=19 status=ok
// SIG undefined FUN_144e5fd90(void)

void FUN_144e5fd90(void)

{
  FUN_144e475b0("lineOrder",FUN_144e5fb30);
  return;
}



// FUNCTION 144e5fdb0 FUN_144e5fdb0 body=62 status=ok
// SIG undefined FUN_144e5fdb0(void)

undefined8 * FUN_144e5fdb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::TypedAttribute<Imf_3_2::LineOrder>::vftable;
  FUN_144e472e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144e5fdf0 FUN_144e5fdf0 body=8 status=ok
// SIG undefined FUN_144e5fdf0(void)

undefined * FUN_144e5fdf0(void)

{
  return &DAT_149972558;
}



// FUNCTION 144e5fe00 FUN_144e5fe00 body=109 status=ok
// SIG undefined FUN_144e5fe00(void)

undefined8 * FUN_144e5fe00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    FUN_144e472d0(puVar1);
    *puVar1 = Imf_3_2::TypedAttribute<Imath_3_1::Matrix33<float>_>::vftable;
    puVar1[1] = 0x3f800000;
    puVar1[2] = 0;
    puVar1[3] = 0x3f800000;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 5) = 0x3f800000;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144e5fe70 FUN_144e5fe70 body=182 status=ok
// SIG undefined FUN_144e5fe70(void)

longlong * FUN_144e5fe70(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_14494321d(0x30);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1[5] = 0;
    FUN_144e472d0(plVar1);
    *plVar1 = (longlong)Imf_3_2::TypedAttribute<Imath_3_1::Matrix33<float>_>::vftable;
    plVar1[1] = 0x3f800000;
    plVar1[2] = 0;
    plVar1[3] = 0x3f800000;
    plVar1[4] = 0;
    *(undefined4 *)(plVar1 + 5) = 0x3f800000;
  }
  if (*(code **)(*plVar1 + 0x28) != FUN_144e603d0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
    return plVar1;
  }
  lVar2 = FUN_144e60490(param_1);
  FUN_144e60530(plVar1 + 1,lVar2 + 8);
  return plVar1;
}



// FUNCTION 144e5ff30 FUN_144e5ff30 body=559 status=ok
// SIG undefined FUN_144e5ff30(void)

void FUN_144e5ff30(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = *(undefined4 *)(param_1 + 8);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0xc);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x10);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x14);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x18);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x1c);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x20);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x24);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x28);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  return;
}



// FUNCTION 144e60160 FUN_144e60160 body=615 status=ok
// SIG undefined FUN_144e60160(void)

void FUN_144e60160(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [2];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 8) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0xc) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x10) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x14) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x18) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x1c) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x20) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x24) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x28) = local_res8[0];
  return;
}



// FUNCTION 144e603d0 FUN_144e603d0 body=177 status=ok
// SIG undefined FUN_144e603d0(void)

void FUN_144e603d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imath_3_1::Matrix33<float>_>::
                           RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar1 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar1 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(lVar1 + 0x14);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar1 + 0x1c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar1 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar1 + 0x24);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar1 + 0x28);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e60490 FUN_144e60490 body=109 status=ok
// SIG undefined FUN_144e60490(void)

void FUN_144e60490(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imath_3_1::Matrix33<float>_>::
                           RTTI_Type_Descriptor);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e60510 FUN_144e60510 body=19 status=ok
// SIG undefined FUN_144e60510(void)

void FUN_144e60510(void)

{
  FUN_144e475b0(&DAT_149972558,FUN_144e5fe00);
  return;
}



// FUNCTION 144e60530 FUN_144e60530 body=56 status=ok
// SIG undefined FUN_144e60530(void)

undefined4 * FUN_144e60530(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  return param_1;
}



// FUNCTION 144e60570 FUN_144e60570 body=62 status=ok
// SIG undefined FUN_144e60570(void)

undefined8 * FUN_144e60570(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::TypedAttribute<Imath_3_1::Matrix33<float>_>::vftable;
  FUN_144e472e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 144e605b0 FUN_144e605b0 body=8 status=ok
// SIG undefined FUN_144e605b0(void)

undefined * FUN_144e605b0(void)

{
  return &DAT_149972560;
}



// FUNCTION 144e605c0 FUN_144e605c0 body=132 status=ok
// SIG undefined FUN_144e605c0(void)

undefined8 * FUN_144e605c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    FUN_144e472d0(puVar1);
    *puVar1 = Imf_3_2::TypedAttribute<Imath_3_1::Matrix33<double>_>::vftable;
    puVar1[1] = 0x3ff0000000000000;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0x3ff0000000000000;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0x3ff0000000000000;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144e60650 FUN_144e60650 body=205 status=ok
// SIG undefined FUN_144e60650(void)

longlong * FUN_144e60650(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_14494321d(0x50);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1[5] = 0;
    plVar1[6] = 0;
    plVar1[7] = 0;
    plVar1[8] = 0;
    plVar1[9] = 0;
    FUN_144e472d0(plVar1);
    *plVar1 = (longlong)Imf_3_2::TypedAttribute<Imath_3_1::Matrix33<double>_>::vftable;
    plVar1[1] = 0x3ff0000000000000;
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1[5] = 0x3ff0000000000000;
    plVar1[6] = 0;
    plVar1[7] = 0;
    plVar1[8] = 0;
    plVar1[9] = 0x3ff0000000000000;
  }
  if (*(code **)(*plVar1 + 0x28) != FUN_144e60840) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
    return plVar1;
  }
  lVar2 = FUN_144e60910(param_1);
  FUN_144e609b0(plVar1 + 1,lVar2 + 8);
  return plVar1;
}



// FUNCTION 144e60720 FUN_144e60720 body=143 status=ok
// SIG undefined FUN_144e60720(void)

void FUN_144e60720(longlong param_1,undefined8 param_2)

{
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 8));
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 0x10));
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 0x18));
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 0x20));
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 0x28));
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 0x30));
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 0x38));
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 0x40));
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 0x48));
  return;
}



// FUNCTION 144e607b0 FUN_144e607b0 body=134 status=ok
// SIG undefined FUN_144e607b0(void)

void FUN_144e607b0(longlong param_1,undefined8 param_2)

{
  FUN_144e4a560(param_2,param_1 + 8);
  FUN_144e4a560(param_2,param_1 + 0x10);
  FUN_144e4a560(param_2,param_1 + 0x18);
  FUN_144e4a560(param_2,param_1 + 0x20);
  FUN_144e4a560(param_2,param_1 + 0x28);
  FUN_144e4a560(param_2,param_1 + 0x30);
  FUN_144e4a560(param_2,param_1 + 0x38);
  FUN_144e4a560(param_2,param_1 + 0x40);
  FUN_144e4a560(param_2,param_1 + 0x48);
  return;
}



// FUNCTION 144e60840 FUN_144e60840 body=195 status=ok
// SIG undefined FUN_144e60840(void)

void FUN_144e60840(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imath_3_1::Matrix33<double>_>::
                           RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar1 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar1 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar1 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar1 + 0x48);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e60910 FUN_144e60910 body=109 status=ok
// SIG undefined FUN_144e60910(void)

void FUN_144e60910(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imath_3_1::Matrix33<double>_>::
                           RTTI_Type_Descriptor);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e60990 FUN_144e60990 body=19 status=ok
// SIG undefined FUN_144e60990(void)

void FUN_144e60990(void)

{
  FUN_144e475b0(&DAT_149972560,FUN_144e605c0);
  return;
}



// FUNCTION 144e609b0 FUN_144e609b0 body=74 status=ok
// SIG undefined FUN_144e609b0(void)

undefined8 * FUN_144e609b0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  return param_1;
}



// FUNCTION 144e60a00 FUN_144e60a00 body=62 status=ok
// SIG undefined FUN_144e60a00(void)

undefined8 * FUN_144e60a00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::TypedAttribute<Imath_3_1::Matrix33<double>_>::vftable;
  FUN_144e472e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 144e60a40 FUN_144e60a40 body=8 status=ok
// SIG undefined FUN_144e60a40(void)

undefined * FUN_144e60a40(void)

{
  return &DAT_149972568;
}



// FUNCTION 144e60a50 FUN_144e60a50 body=140 status=ok
// SIG undefined FUN_144e60a50(void)

undefined8 * FUN_144e60a50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    FUN_144e472d0(puVar1);
    *puVar1 = Imf_3_2::TypedAttribute<Imath_3_1::Matrix44<float>_>::vftable;
    puVar1[1] = 0x3f800000;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
    puVar1[6] = 0x3f800000;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0x3f800000;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144e60ae0 FUN_144e60ae0 body=213 status=ok
// SIG undefined FUN_144e60ae0(void)

longlong * FUN_144e60ae0(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_14494321d(0x48);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1[5] = 0;
    plVar1[6] = 0;
    plVar1[7] = 0;
    plVar1[8] = 0;
    FUN_144e472d0(plVar1);
    *plVar1 = (longlong)Imf_3_2::TypedAttribute<Imath_3_1::Matrix44<float>_>::vftable;
    plVar1[1] = 0x3f800000;
    plVar1[2] = 0;
    *(undefined4 *)(plVar1 + 3) = 0;
    *(undefined8 *)((longlong)plVar1 + 0x1c) = 0x3f800000;
    *(undefined8 *)((longlong)plVar1 + 0x24) = 0;
    *(undefined4 *)((longlong)plVar1 + 0x2c) = 0;
    plVar1[6] = 0x3f800000;
    plVar1[7] = 0;
    *(undefined4 *)(plVar1 + 8) = 0;
    *(undefined4 *)((longlong)plVar1 + 0x44) = 0x3f800000;
  }
  if (*(code **)(*plVar1 + 0x28) != FUN_144e613a0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
    return plVar1;
  }
  lVar2 = FUN_144e61490(param_1);
  FUN_144e61530(plVar1 + 1,lVar2 + 8);
  return plVar1;
}



// FUNCTION 144e60bc0 FUN_144e60bc0 body=958 status=ok
// SIG undefined FUN_144e60bc0(void)

void FUN_144e60bc0(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = *(undefined4 *)(param_1 + 8);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0xc);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x10);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x14);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x18);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x1c);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x20);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x24);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x28);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x2c);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x30);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x34);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x38);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x3c);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x40);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x44);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  return;
}



// FUNCTION 144e60f80 FUN_144e60f80 body=1056 status=ok
// SIG undefined FUN_144e60f80(void)

void FUN_144e60f80(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [2];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 8) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0xc) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x10) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x14) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x18) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x1c) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x20) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x24) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x28) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x2c) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x30) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x34) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x38) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x3c) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x40) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x44) = local_res8[0];
  return;
}



// FUNCTION 144e613a0 FUN_144e613a0 body=219 status=ok
// SIG undefined FUN_144e613a0(void)

void FUN_144e613a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imath_3_1::Matrix44<float>_>::
                           RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar1 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar1 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(lVar1 + 0x14);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar1 + 0x1c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar1 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar1 + 0x24);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar1 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar1 + 0x2c);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar1 + 0x30);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(lVar1 + 0x34);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar1 + 0x38);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(lVar1 + 0x3c);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(lVar1 + 0x40);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(lVar1 + 0x44);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e61490 FUN_144e61490 body=109 status=ok
// SIG undefined FUN_144e61490(void)

void FUN_144e61490(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imath_3_1::Matrix44<float>_>::
                           RTTI_Type_Descriptor);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e61510 FUN_144e61510 body=19 status=ok
// SIG undefined FUN_144e61510(void)

void FUN_144e61510(void)

{
  FUN_144e475b0(&DAT_149972568,FUN_144e60a50);
  return;
}



// FUNCTION 144e61530 FUN_144e61530 body=98 status=ok
// SIG undefined FUN_144e61530(void)

undefined4 * FUN_144e61530(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  return param_1;
}



// FUNCTION 144e615a0 FUN_144e615a0 body=62 status=ok
// SIG undefined FUN_144e615a0(void)

undefined8 * FUN_144e615a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::TypedAttribute<Imath_3_1::Matrix44<float>_>::vftable;
  FUN_144e472e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 144e615e0 FUN_144e615e0 body=112 status=ok
// SIG undefined FUN_144e615e0(void)

undefined8 * FUN_144e615e0(undefined8 *param_1)

{
  FUN_144e472d0();
  *param_1 = Imf_3_2::TypedAttribute<Imath_3_1::Matrix44<double>_>::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[1] = 0x3ff0000000000000;
  param_1[6] = 0x3ff0000000000000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xb] = 0x3ff0000000000000;
  param_1[0x10] = 0x3ff0000000000000;
  return param_1;
}



// FUNCTION 144e61650 FUN_144e61650 body=8 status=ok
// SIG undefined FUN_144e61650(void)

undefined * FUN_144e61650(void)

{
  return &DAT_149972570;
}



// FUNCTION 144e61660 FUN_144e61660 body=88 status=ok
// SIG undefined FUN_144e61660(void)

undefined8 FUN_144e61660(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_14494321d();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    uVar2 = FUN_144e615e0(puVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144e616c0 FUN_144e616c0 body=117 status=ok
// SIG undefined FUN_144e616c0(void)

longlong * FUN_144e616c0(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)FUN_14494321d();
  if (puVar1 == (undefined8 *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    plVar2 = (longlong *)FUN_144e615e0(puVar1);
  }
  (**(code **)(*plVar2 + 0x28))(plVar2,param_1);
  return plVar2;
}



// FUNCTION 144e61740 FUN_144e61740 body=237 status=ok
// SIG undefined FUN_144e61740(void)

void FUN_144e61740(longlong param_1,undefined8 param_2)

{
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 8));
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 0x10));
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 0x18));
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 0x20));
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 0x28));
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 0x30));
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 0x38));
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 0x40));
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 0x48));
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 0x50));
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 0x58));
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 0x60));
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 0x68));
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 0x70));
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 0x78));
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 0x80));
  return;
}



// FUNCTION 144e61830 FUN_144e61830 body=221 status=ok
// SIG undefined FUN_144e61830(void)

void FUN_144e61830(longlong param_1,undefined8 param_2)

{
  FUN_144e4a560(param_2,param_1 + 8);
  FUN_144e4a560(param_2,param_1 + 0x10);
  FUN_144e4a560(param_2,param_1 + 0x18);
  FUN_144e4a560(param_2,param_1 + 0x20);
  FUN_144e4a560(param_2,param_1 + 0x28);
  FUN_144e4a560(param_2,param_1 + 0x30);
  FUN_144e4a560(param_2,param_1 + 0x38);
  FUN_144e4a560(param_2,param_1 + 0x40);
  FUN_144e4a560(param_2,param_1 + 0x48);
  FUN_144e4a560(param_2,param_1 + 0x50);
  FUN_144e4a560(param_2,param_1 + 0x58);
  FUN_144e4a560(param_2,param_1 + 0x60);
  FUN_144e4a560(param_2,param_1 + 0x68);
  FUN_144e4a560(param_2,param_1 + 0x70);
  FUN_144e4a560(param_2,param_1 + 0x78);
  FUN_144e4a560(param_2,param_1 + 0x80);
  return;
}



// FUNCTION 144e61910 FUN_144e61910 body=261 status=ok
// SIG undefined FUN_144e61910(void)

void FUN_144e61910(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imath_3_1::Matrix44<double>_>::
                           RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar1 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar1 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar1 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar1 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar1 + 0x50);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar1 + 0x58);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar1 + 0x60);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar1 + 0x68);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar1 + 0x70);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar1 + 0x78);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(lVar1 + 0x80);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e61a20 FUN_144e61a20 body=19 status=ok
// SIG undefined FUN_144e61a20(void)

void FUN_144e61a20(void)

{
  FUN_144e475b0(&DAT_149972570,FUN_144e61660);
  return;
}



// FUNCTION 144e61a40 FUN_144e61a40 body=62 status=ok
// SIG undefined FUN_144e61a40(void)

undefined8 * FUN_144e61a40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::TypedAttribute<Imath_3_1::Matrix44<double>_>::vftable;
  FUN_144e472e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 144e61a80 FUN_144e61a80 body=115 status=ok
// SIG undefined FUN_144e61a80(void)

undefined8 * FUN_144e61a80(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_144e472d0();
  *param_1 = Imf_3_2::OpaqueAttribute::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  FUN_140cd1a74(param_1 + 1,param_2);
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 144e61b00 FUN_144e61b00 body=15 status=ok
// SIG undefined FUN_144e61b00(void)

longlong * FUN_144e61b00(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (0xf < *(ulonglong *)(param_1 + 0x20)) {
    plVar1 = (longlong *)*plVar1;
  }
  return plVar1;
}



// FUNCTION 144e61b10 FUN_144e61b10 body=180 status=ok
// SIG undefined FUN_144e61b10(void)

undefined8 * FUN_144e61b10(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  void *_Dst;
  
  puVar2 = (undefined8 *)FUN_14494321d(0x40);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    FUN_144e472d0(puVar2);
    *puVar2 = Imf_3_2::OpaqueAttribute::vftable;
    FUN_144b65a50(puVar2 + 1,param_1 + 8);
    *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_1 + 0x28);
    iVar1 = *(int *)(param_1 + 0x28);
    uVar3 = FUN_144a7d36f((longlong)iVar1);
    puVar2[7] = uVar3;
    *(int *)(puVar2 + 6) = iVar1;
    iVar1 = *(int *)(param_1 + 0x28);
    _Dst = (void *)FUN_144a7d36f((longlong)iVar1);
    thunk_FUN_1400020a8(puVar2[7]);
    *(int *)(puVar2 + 6) = iVar1;
    puVar2[7] = _Dst;
    memcpy(_Dst,*(void **)(param_1 + 0x38),(longlong)*(int *)(param_1 + 0x28));
  }
  return puVar2;
}



// FUNCTION 144e61bd0 FUN_144e61bd0 body=21 status=ok
// SIG undefined FUN_144e61bd0(void)

void FUN_144e61bd0(longlong param_1,longlong *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000144e61be1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))
            (param_2,*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x28));
  return;
}



// FUNCTION 144e61bf0 FUN_144e61bf0 body=97 status=ok
// SIG undefined FUN_144e61bf0(void)

void FUN_144e61bf0(longlong param_1,longlong *param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144a7d36f((longlong)param_3);
  thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 0x38));
  *(int *)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(int *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x000144e61c4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,uVar1,param_3);
  return;
}



// FUNCTION 144e61c60 FUN_144e61c60 body=345 status=ok
// SIG undefined FUN_144e61c60(void)

void FUN_144e61c60(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Buf1;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined1 local_188 [16];
  undefined1 local_178 [240];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_198 = 0;
  lVar2 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::OpaqueAttribute::RTTI_Type_Descriptor);
  if (lVar2 != 0) {
    pvVar3 = (void *)(lVar2 + 8);
    if (0xf < *(ulonglong *)(lVar2 + 0x20)) {
      pvVar3 = *(void **)(lVar2 + 8);
    }
    _Buf1 = (void *)(param_1 + 8);
    if (0xf < *(ulonglong *)(param_1 + 0x20)) {
      _Buf1 = *(void **)(param_1 + 8);
    }
    if (*(size_t *)(param_1 + 0x18) == *(size_t *)(lVar2 + 0x18)) {
      iVar1 = memcmp(_Buf1,pvVar3,*(size_t *)(param_1 + 0x18));
      if (iVar1 == 0) {
        iVar1 = *(int *)(lVar2 + 0x28);
        pvVar3 = (void *)FUN_144a7d36f((longlong)iVar1);
        thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 0x38));
        *(int *)(param_1 + 0x30) = iVar1;
        *(void **)(param_1 + 0x38) = pvVar3;
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + 0x28);
        memcpy(pvVar3,*(void **)(lVar2 + 0x38),(longlong)*(int *)(lVar2 + 0x28));
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_1b8);
      }
    }
  }
  FUN_144e47110();
  FUN_1470a639e(local_188,1);
  uVar4 = (**(code **)(*param_2 + 8))(param_2);
  uVar5 = FUN_141302cc4(local_178,"Cannot copy the value of an image file attribute of type \"");
  uVar4 = FUN_141302cc4(uVar5,uVar4);
  uVar4 = FUN_141302cc4(uVar4,"\" to an attribute of type \"");
  uVar4 = FUN_144b6d940(uVar4,param_1 + 8);
  FUN_141302cc4(uVar4,&DAT_149971260);
  FUN_144e416d0(local_88,local_188);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_88,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e61dd0 FUN_144e61dd0 body=156 status=ok
// SIG undefined FUN_144e61dd0(void)

undefined8 * FUN_144e61dd0(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_1 = Imf_3_2::OpaqueAttribute::vftable;
  thunk_FUN_1400020a8(param_1[7]);
  uVar1 = param_1[4];
  if (0xf < uVar1) {
    lVar2 = param_1[1];
    uVar4 = uVar1 + 1;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar3,uVar4);
  }
  param_1[3] = 0;
  param_1[4] = 0xf;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_144e472e0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 144e61e70 FUN_144e61e70 body=154 status=ok
// SIG undefined FUN_144e61e70(void)

undefined4 FUN_144e61e70(undefined8 *param_1)

{
  size_t _Size;
  int iVar1;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  char *_Buf2_00;
  
  _Buf2 = &DAT_14c709e00;
  if (0xf < DAT_14c709e18) {
    _Buf2 = DAT_14c709e00;
  }
  _Buf1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    _Buf1 = (undefined8 *)*param_1;
  }
  _Size = param_1[2];
  if ((_Size == DAT_14c709e10) && (iVar1 = memcmp(_Buf1,_Buf2,_Size), iVar1 == 0)) {
    return 1;
  }
  _Buf2_00 = s_deeptile_14c709e40;
  if (0xf < DAT_14c709e58) {
    _Buf2_00 = (char *)s_deeptile_14c709e40._0_8_;
  }
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if ((_Size == DAT_14c709e50) && (iVar1 = memcmp(param_1,_Buf2_00,_Size), iVar1 == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 144e61f10 FUN_144e61f10 body=154 status=ok
// SIG undefined FUN_144e61f10(void)

undefined4 FUN_144e61f10(undefined8 *param_1)

{
  size_t _Size;
  int iVar1;
  undefined8 *puVar2;
  char *_Buf2;
  
  _Buf2 = s_deeptile_14c709e40;
  if (0xf < DAT_14c709e58) {
    _Buf2 = (char *)s_deeptile_14c709e40._0_8_;
  }
  puVar2 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  _Size = param_1[2];
  if ((_Size == DAT_14c709e50) && (iVar1 = memcmp(puVar2,_Buf2,_Size), iVar1 == 0)) {
    return 1;
  }
  puVar2 = &DAT_14c709e20;
  if (0xf < DAT_14c709e38) {
    puVar2 = DAT_14c709e20;
  }
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if ((_Size == DAT_14c709e30) && (iVar1 = memcmp(param_1,puVar2,_Size), iVar1 == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 144e61fb0 FUN_144e61fb0 body=287 status=ok
// SIG undefined FUN_144e61fb0(void)

undefined4 FUN_144e61fb0(undefined8 *param_1)

{
  ulonglong uVar1;
  size_t _Size;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char *_Buf2;
  
  uVar1 = param_1[3];
  puVar4 = &DAT_14c709de0;
  if (0xf < DAT_14c709df8) {
    puVar4 = DAT_14c709de0;
  }
  puVar3 = param_1;
  if (0xf < uVar1) {
    puVar3 = (undefined8 *)*param_1;
  }
  _Size = param_1[2];
  if ((_Size == DAT_14c709df0) && (iVar2 = memcmp(puVar3,puVar4,_Size), iVar2 == 0)) {
    return 1;
  }
  puVar4 = &DAT_14c709e00;
  if (0xf < DAT_14c709e18) {
    puVar4 = DAT_14c709e00;
  }
  puVar3 = param_1;
  if (0xf < uVar1) {
    puVar3 = (undefined8 *)*param_1;
  }
  if ((_Size == DAT_14c709e10) && (iVar2 = memcmp(puVar3,puVar4,_Size), iVar2 == 0)) {
    return 1;
  }
  puVar4 = &DAT_14c709e20;
  if (0xf < DAT_14c709e38) {
    puVar4 = DAT_14c709e20;
  }
  puVar3 = param_1;
  if (0xf < uVar1) {
    puVar3 = (undefined8 *)*param_1;
  }
  if ((_Size == DAT_14c709e30) && (iVar2 = memcmp(puVar3,puVar4,_Size), iVar2 == 0)) {
    return 1;
  }
  _Buf2 = s_deeptile_14c709e40;
  if (0xf < DAT_14c709e58) {
    _Buf2 = (char *)s_deeptile_14c709e40._0_8_;
  }
  if (0xf < uVar1) {
    param_1 = (undefined8 *)*param_1;
  }
  if ((_Size == DAT_14c709e50) && (iVar2 = memcmp(param_1,_Buf2,_Size), iVar2 == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 144e620d0 FUN_144e620d0 body=8 status=ok
// SIG undefined FUN_144e620d0(void)

char * FUN_144e620d0(void)

{
  return "preview";
}



// FUNCTION 144e620e0 FUN_144e620e0 body=95 status=ok
// SIG undefined FUN_144e620e0(void)

undefined8 * FUN_144e620e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    FUN_144e472d0(puVar1);
    *puVar1 = Imf_3_2::TypedAttribute<Imf_3_2::PreviewImage>::vftable;
    FUN_14521d050(puVar1 + 1,0,0,0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144e62140 FUN_144e62140 body=165 status=ok
// SIG undefined FUN_144e62140(void)

longlong * FUN_144e62140(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_14494321d(0x18);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    FUN_144e472d0(plVar1);
    *plVar1 = (longlong)Imf_3_2::TypedAttribute<Imf_3_2::PreviewImage>::vftable;
    FUN_14521d050(plVar1 + 1,0,0,0);
  }
  if (*(code **)(*plVar1 + 0x28) == FUN_144e624f0) {
    lVar2 = FUN_144e62580(param_1);
    FUN_14521d1d0(plVar1 + 1,lVar2 + 8);
    return plVar1;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 144e621f0 FUN_144e621f0 body=284 status=ok
// SIG undefined FUN_144e621f0(void)

void FUN_144e621f0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined1 local_resb;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  iVar2 = *(int *)(param_1 + 0xc) * *(int *)(param_1 + 8);
  lVar3 = (longlong)iVar2;
  if (0 < iVar2) {
    puVar4 = (undefined1 *)(*(longlong *)(param_1 + 0x10) + 2);
    do {
      local_res8 = puVar4[-2];
      (**(code **)(*param_2 + 8))(param_2,&local_res8,1);
      local_res8 = puVar4[-1];
      (**(code **)(*param_2 + 8))(param_2,&local_res8,1);
      local_res8 = *puVar4;
      (**(code **)(*param_2 + 8))(param_2,&local_res8,1);
      local_res8 = puVar4[1];
      (**(code **)(*param_2 + 8))(param_2,&local_res8,1);
      puVar4 = puVar4 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144e62310 FUN_144e62310 body=450 status=ok
// SIG undefined FUN_144e62310(void)

void FUN_144e62310(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  int local_a8 [2];
  int local_a0;
  int local_9c;
  longlong local_98;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_2 + 0x10))(param_2,local_a8,4);
  iVar1 = local_a8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_a8,4);
  if ((-1 < iVar1) && (-1 < local_a8[0])) {
    if ((longlong)local_a8[0] * (longlong)iVar1 * 4 + 8 == (longlong)param_3) {
      FUN_14521d050(&local_a0,iVar1,local_a8[0],0);
      if (0 < local_9c * local_a0) {
        lVar3 = local_98 + 2;
        uVar2 = (ulonglong)(uint)(local_9c * local_a0);
        do {
          (**(code **)(*param_2 + 0x10))(param_2,lVar3 + -2,1);
          (**(code **)(*param_2 + 0x10))(param_2,lVar3 + -1,1);
          (**(code **)(*param_2 + 0x10))(param_2,lVar3,1);
          (**(code **)(*param_2 + 0x10))(param_2,lVar3 + 1,1);
          lVar3 = lVar3 + 4;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      FUN_14521d1d0(param_1 + 8,&local_a0);
      FUN_14521d1c0(&local_a0);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_c8);
    }
    FUN_144e41060(local_88,"Mismatch between Preview Image Attribute size and dimensions");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_88,(ThrowInfo *)&DAT_14c6d51d8);
  }
  FUN_144e41060(local_88,"Invalid dimensions in Preview Image Attribute");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_88,(ThrowInfo *)&DAT_14c6d51d8);
}



// FUNCTION 144e624f0 FUN_144e624f0 body=133 status=ok
// SIG undefined FUN_144e624f0(void)

void FUN_144e624f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imf_3_2::PreviewImage>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    FUN_14521d1d0(param_1 + 8,lVar1 + 8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e62580 FUN_144e62580 body=109 status=ok
// SIG undefined FUN_144e62580(void)

void FUN_144e62580(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imf_3_2::PreviewImage>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e62600 FUN_144e62600 body=19 status=ok
// SIG undefined FUN_144e62600(void)

void FUN_144e62600(void)

{
  FUN_144e475b0("preview",FUN_144e620e0);
  return;
}



// FUNCTION 144e62620 FUN_144e62620 body=74 status=ok
// SIG undefined FUN_144e62620(void)

undefined8 * FUN_144e62620(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::TypedAttribute<Imf_3_2::PreviewImage>::vftable;
  FUN_14521d1c0(param_1 + 1);
  FUN_144e472e0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144e62670 FUN_144e62670 body=8 status=ok
// SIG undefined FUN_144e62670(void)

char * FUN_144e62670(void)

{
  return "rational";
}



// FUNCTION 144e62680 FUN_144e62680 body=84 status=ok
// SIG undefined FUN_144e62680(void)

undefined8 * FUN_144e62680(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_144e472d0(puVar1);
    *puVar1 = Imf_3_2::TypedAttribute<Imf_3_2::Rational>::vftable;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144e626e0 FUN_144e626e0 body=149 status=ok
// SIG undefined FUN_144e626e0(void)

longlong * FUN_144e626e0(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_14494321d(0x10);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    *plVar1 = 0;
    plVar1[1] = 0;
    FUN_144e472d0(plVar1);
    *plVar1 = (longlong)Imf_3_2::TypedAttribute<Imf_3_2::Rational>::vftable;
    *(undefined4 *)(plVar1 + 1) = 0;
    *(undefined4 *)((longlong)plVar1 + 0xc) = 1;
  }
  if (*(code **)(*plVar1 + 0x28) == FUN_144e628b0) {
    lVar2 = FUN_144e62940(param_1);
    plVar1[1] = *(longlong *)(lVar2 + 8);
    return plVar1;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 144e62780 FUN_144e62780 body=137 status=ok
// SIG undefined FUN_144e62780(void)

void FUN_144e62780(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined1 local_resb;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  return;
}



// FUNCTION 144e62810 FUN_144e62810 body=151 status=ok
// SIG undefined FUN_144e62810(void)

void FUN_144e62810(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [2];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 8) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0xc) = local_res8[0];
  return;
}



// FUNCTION 144e628b0 FUN_144e628b0 body=128 status=ok
// SIG undefined FUN_144e628b0(void)

void FUN_144e628b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imf_3_2::Rational>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar1 + 8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e62940 FUN_144e62940 body=109 status=ok
// SIG undefined FUN_144e62940(void)

void FUN_144e62940(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imf_3_2::Rational>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e629c0 FUN_144e629c0 body=19 status=ok
// SIG undefined FUN_144e629c0(void)

void FUN_144e629c0(void)

{
  FUN_144e475b0("rational",FUN_144e62680);
  return;
}



// FUNCTION 144e629e0 FUN_144e629e0 body=62 status=ok
// SIG undefined FUN_144e629e0(void)

undefined8 * FUN_144e629e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::TypedAttribute<Imf_3_2::Rational>::vftable;
  FUN_144e472e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144e62a30 FUN_144e62a30 body=97 status=ok
// SIG undefined FUN_144e62a30(void)

void FUN_144e62a30(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (7 < (ulonglong)param_1[3]) {
    lVar2 = *param_1;
    lVar1 = param_1[3] * 2;
    uVar4 = lVar1 + 2;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      uVar4 = lVar1 + 0x29;
      if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar3,uVar4);
  }
  param_1[3] = 7;
  param_1[2] = 0;
  *(undefined2 *)param_1 = 0;
  return;
}



// FUNCTION 144e62aa0 FUN_144e62aa0 body=47 status=ok
// SIG undefined FUN_144e62aa0(void)

void FUN_144e62aa0(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144e62ac7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  return;
}



// FUNCTION 144e62ad0 FUN_144e62ad0 body=122 status=ok
// SIG undefined FUN_144e62ad0(void)

undefined8 * FUN_144e62ad0(undefined8 *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  FUN_144b6b800();
  *param_1 = Imf_3_2::StdIFStream::vftable;
  plVar2 = (longlong *)FUN_144e62f50(param_2);
  param_1[5] = plVar2;
  *(undefined1 *)(param_1 + 6) = 1;
  bVar1 = std::ios_base::operator!((ios_base *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2))
  ;
  if (bVar1) {
    plVar2 = (longlong *)param_1[5];
    if (plVar2 != (longlong *)0x0) {
      puVar3 = (undefined8 *)((longlong)*(int *)(*plVar2 + 4) + (longlong)plVar2);
      (**(code **)*puVar3)(puVar3,1);
    }
    FUN_144e7f080();
  }
  return param_1;
}



// FUNCTION 144e62b50 FUN_144e62b50 body=152 status=ok
// SIG undefined FUN_144e62b50(void)

void FUN_144e62b50(longlong param_1,char *param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  bVar1 = std::ios_base::operator!
                    ((ios_base *)
                     ((longlong)*(int *)(**(longlong **)(param_1 + 0x28) + 4) +
                     (longlong)*(longlong **)(param_1 + 0x28)));
  if (!bVar1) {
    piVar2 = _errno();
    *piVar2 = 0;
    std::basic_istream<char,std::char_traits<char>_>::read
              (*(basic_istream<char,std::char_traits<char>_> **)(param_1 + 0x28),param_2,
               (longlong)param_3);
    FUN_144e63230(*(undefined8 *)(param_1 + 0x28),(longlong)param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  }
  FUN_144e41060(local_88,"Unexpected end of file.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_88,(ThrowInfo *)&DAT_14c6d51d8);
}



// FUNCTION 144e62c00 FUN_144e62c00 body=34 status=ok
// SIG undefined FUN_144e62c00(void)

longlong FUN_144e62c00(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           std::basic_istream<char,std::char_traits<char>_>::tellg
                     (*(basic_istream<char,std::char_traits<char>_> **)(param_1 + 0x28));
  return plVar1[1] + *plVar1;
}



// FUNCTION 144e62c30 FUN_144e62c30 body=74 status=ok
// SIG undefined FUN_144e62c30(void)

void FUN_144e62c30(longlong param_1,undefined8 param_2)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = 0;
  uStack_18 = 0;
  local_28 = param_2;
  std::basic_istream<char,std::char_traits<char>_>::seekg
            (*(basic_istream<char,std::char_traits<char>_> **)(param_1 + 0x28),&local_28);
  FUN_144e63230(*(undefined8 *)(param_1 + 0x28),0);
  return;
}



// FUNCTION 144e62c80 FUN_144e62c80 body=26 status=ok
// SIG undefined FUN_144e62c80(void)

void FUN_144e62c80(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144e62c93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ios<char,std::char_traits<char>_>::clear
            ((basic_ios<char,std::char_traits<char>_> *)
             ((longlong)*(int *)(**(longlong **)(param_1 + 0x28) + 4) +
             (longlong)*(longlong **)(param_1 + 0x28)),0,false);
  return;
}



// FUNCTION 144e62ca0 FUN_144e62ca0 body=101 status=ok
// SIG undefined FUN_144e62ca0(void)

undefined8 * FUN_144e62ca0(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = Imf_3_2::StdIFStream::vftable;
  if ((*(char *)(param_1 + 6) != '\0') &&
     (plVar1 = (longlong *)param_1[5], plVar1 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)((longlong)plVar1 + (longlong)*(int *)(*plVar1 + 4));
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_144b6b720(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 144e62d10 FUN_144e62d10 body=195 status=ok
// SIG undefined FUN_144e62d10(void)

undefined8 * FUN_144e62d10(undefined8 *param_1)

{
  basic_ostream<char,std::char_traits<char>_> *this;
  basic_streambuf<char,std::char_traits<char>_> *this_00;
  
  FUN_144b6b960(param_1,"(string)");
  *param_1 = Imf_3_2::StdOSStream::vftable;
  this = (basic_ostream<char,std::char_traits<char>_> *)(param_1 + 5);
  *(undefined **)this = &DAT_14ae75844;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)(param_1 + 0x16));
  this_00 = (basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 6);
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            (this,this_00,false);
  *(undefined ***)(this + *(int *)(*(longlong *)this + 4)) = &PTR_LAB_14ae75850;
  *(int *)(this + (longlong)*(int *)(*(longlong *)this + 4) + -4) =
       *(int *)(*(longlong *)this + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (this_00);
  *(undefined ***)this_00 = &PTR_FUN_14a179f40;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 4;
  return param_1;
}



// FUNCTION 144e62de0 FUN_144e62de0 body=41 status=ok
// SIG undefined FUN_144e62de0(void)

void FUN_144e62de0(undefined8 *param_1)

{
  *param_1 = Imf_3_2::StdOSStream::vftable;
  FUN_144d730c0(param_1 + 5);
  FUN_144b6b8e0(param_1);
  return;
}



// FUNCTION 144e62e10 FUN_144e62e10 body=76 status=ok
// SIG undefined FUN_144e62e10(void)

void FUN_144e62e10(longlong param_1,char *param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = _errno();
  *piVar1 = 0;
  std::basic_ostream<char,std::char_traits<char>_>::write
            ((basic_ostream<char,std::char_traits<char>_> *)(param_1 + 0x28),param_2,
             (longlong)param_3);
  FUN_144e63340(param_1 + 0x28);
  return;
}



// FUNCTION 144e62e60 FUN_144e62e60 body=34 status=ok
// SIG undefined FUN_144e62e60(void)

longlong FUN_144e62e60(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           std::basic_ostream<char,std::char_traits<char>_>::tellp
                     ((basic_ostream<char,std::char_traits<char>_> *)(param_1 + 0x28));
  return plVar1[1] + *plVar1;
}



// FUNCTION 144e62e90 FUN_144e62e90 body=71 status=ok
// SIG undefined FUN_144e62e90(void)

void FUN_144e62e90(longlong param_1,undefined8 param_2)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = 0;
  uStack_18 = 0;
  local_28 = param_2;
  std::basic_ostream<char,std::char_traits<char>_>::seekp
            ((basic_ostream<char,std::char_traits<char>_> *)(param_1 + 0x28),&local_28);
  FUN_144e63340((basic_ostream<char,std::char_traits<char>_> *)(param_1 + 0x28));
  return;
}



// FUNCTION 144e62ee0 FUN_144e62ee0 body=27 status=ok
// SIG undefined FUN_144e62ee0(void)

undefined8 FUN_144e62ee0(longlong param_1,undefined8 param_2)

{
  FUN_144d72f30(param_1 + 0x30);
  return param_2;
}



// FUNCTION 144e62f00 FUN_144e62f00 body=74 status=ok
// SIG undefined FUN_144e62f00(void)

undefined8 * FUN_144e62f00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::StdOSStream::vftable;
  FUN_144d730c0(param_1 + 5);
  FUN_144b6b8e0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 144e62f50 FUN_144e62f50 body=395 status=ok
// SIG undefined FUN_144e62f50(void)

void FUN_144e62f50(undefined8 param_1)

{
  basic_streambuf<char,std::char_traits<char>_> *this;
  basic_istream<char,std::char_traits<char>_> *this_00;
  longlong lVar1;
  undefined8 ****ppppuVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  basic_istream<char,std::char_traits<char>_> *local_40;
  basic_streambuf<char,std::char_traits<char>_> *local_38;
  undefined8 ***local_30 [3];
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_144e69fd0(local_30,param_1);
  this_00 = (basic_istream<char,std::char_traits<char>_> *)FUN_14494321d(0x110);
  local_40 = this_00;
  if (this_00 != (basic_istream<char,std::char_traits<char>_> *)0x0) {
    ppppuVar2 = local_30;
    if (7 < local_18) {
      ppppuVar2 = (undefined8 ****)local_30[0];
    }
    *(undefined **)this_00 = &DAT_14a179e88;
    std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(this_00 + 0xb0));
    local_48 = 1;
    this = (basic_streambuf<char,std::char_traits<char>_> *)(this_00 + 0x10);
    std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
              (this_00,this,false);
    *(undefined ***)(this_00 + *(int *)(*(longlong *)this_00 + 4)) = &PTR_LAB_14a179e80;
    *(int *)(this_00 + (longlong)*(int *)(*(longlong *)this_00 + 4) + -4) =
         *(int *)(*(longlong *)this_00 + 4) + -0xb0;
    local_38 = this;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>(this);
    *(undefined ***)this = &PTR_FUN_149f63ee0;
    this_00[0x8c] = (basic_istream<char,std::char_traits<char>_>)0x0;
    this_00[0x81] = (basic_istream<char,std::char_traits<char>_>)0x0;
    std::basic_streambuf<char,std::char_traits<char>_>::_Init(this);
    *(undefined8 *)(this_00 + 0x90) = 0;
    *(undefined8 *)(this_00 + 0x84) = DAT_14c996af8;
    *(undefined8 *)(this_00 + 0x78) = 0;
    lVar1 = FUN_144e630f0(this,ppppuVar2);
    if (lVar1 == 0) {
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 (this_00 + *(int *)(*(longlong *)this_00 + 4)),2,false);
    }
  }
  if (7 < local_18) {
    uVar3 = local_18 * 2 + 2;
    ppppuVar2 = (undefined8 ****)local_30[0];
    if (0xfff < uVar3) {
      uVar3 = local_18 * 2 + 0x29;
      ppppuVar2 = (undefined8 ****)local_30[0][-1];
      if (0x1f < (ulonglong)((longlong)local_30[0] + (-8 - (longlong)ppppuVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(ppppuVar2,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_68);
}



// FUNCTION 144e630f0 FUN_144e630f0 body=319 status=ok
// SIG undefined FUN_144e630f0(void)

basic_streambuf<char,std::char_traits<char>_> *
FUN_144e630f0(basic_streambuf<char,std::char_traits<char>_> *param_1,wchar_t *param_2,int param_3,
             int param_4)

{
  bool bVar1;
  _iobuf *p_Var2;
  undefined8 uVar3;
  codecvt_base *this;
  undefined8 *puVar4;
  int *local_res8;
  char **local_28;
  char **local_20;
  longlong *local_18;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    p_Var2 = std::_Fiopen(param_2,param_3,param_4);
    if (p_Var2 != (_iobuf *)0x0) {
      param_1[0x7c] = (basic_streambuf<char,std::char_traits<char>_>)0x1;
      param_1[0x71] = (basic_streambuf<char,std::char_traits<char>_>)0x0;
      std::basic_streambuf<char,std::char_traits<char>_>::_Init(param_1);
      local_20 = (char **)0x0;
      local_28 = (char **)0x0;
      local_res8 = (int *)0x0;
      _get_stream_buffer_pointers(p_Var2,&local_20,&local_28,&local_res8);
      std::basic_streambuf<char,std::char_traits<char>_>::_Init
                (param_1,local_20,local_28,local_res8,local_20,local_28,local_res8);
      *(_iobuf **)(param_1 + 0x80) = p_Var2;
      *(undefined8 *)(param_1 + 0x74) = DAT_14c996af8;
      *(undefined8 *)(param_1 + 0x68) = 0;
      uVar3 = std::basic_streambuf<char,std::char_traits<char>_>::getloc(param_1);
      this = (codecvt_base *)FUN_146eb3068(uVar3);
      bVar1 = std::codecvt_base::always_noconv(this);
      if (bVar1) {
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
      else {
        *(codecvt_base **)(param_1 + 0x68) = this;
        std::basic_streambuf<char,std::char_traits<char>_>::_Init(param_1);
      }
      if (local_18 != (longlong *)0x0) {
        puVar4 = (undefined8 *)(**(code **)(*local_18 + 0x10))();
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      return param_1;
    }
  }
  return (basic_streambuf<char,std::char_traits<char>_> *)0x0;
}



// FUNCTION 144e63230 FUN_144e63230 body=251 status=ok
// SIG undefined FUN_144e63230(void)

void FUN_144e63230(basic_istream<char,std::char_traits<char>_> *param_1,longlong param_2)

{
  bool bVar1;
  int *piVar2;
  __int64 _Var3;
  basic_ostream<char,std::char_traits<char>_> *pbVar4;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar5;
  undefined1 auStack_198 [32];
  undefined1 local_178 [16];
  undefined1 local_168 [240];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_198;
  bVar1 = std::ios_base::operator!((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if (bVar1) {
    piVar2 = _errno();
    if (*piVar2 != 0) {
      FUN_144e7f080();
    }
    _Var3 = std::basic_istream<char,std::char_traits<char>_>::gcount(param_1);
    if (_Var3 < param_2) {
      FUN_144e47110();
      FUN_1470a639e(local_178,1);
      _Var3 = std::basic_istream<char,std::char_traits<char>_>::gcount(param_1);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_141302cc4(local_168,"Early end of file: read ");
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,_Var3);
      pbVar4 = (basic_ostream<char,std::char_traits<char>_> *)FUN_141302cc4(pbVar5," out of ");
      pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar4,param_2);
      FUN_141302cc4(pbVar5," requested bytes.");
      FUN_144e410c0(local_78,local_178);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d51d8);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_198);
}



// FUNCTION 144e63340 FUN_144e63340 body=114 status=ok
// SIG undefined FUN_144e63340(void)

void FUN_144e63340(longlong *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  bVar1 = std::ios_base::operator!
                    ((ios_base *)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1));
  if (!bVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  piVar2 = _errno();
  if (*piVar2 != 0) {
    FUN_144e7f080();
  }
  FUN_144e41410(local_78,"File output failed.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5448);
}



// FUNCTION 144e633c0 FUN_144e633c0 body=64 status=ok
// SIG undefined FUN_144e633c0(void)

undefined8 * FUN_144e633c0(undefined8 *param_1,undefined8 param_2)

{
  FUN_144e472d0();
  *param_1 = Imf_3_2::
             TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
             vftable;
  FUN_144b65a50(param_1 + 1,param_2);
  return param_1;
}



// FUNCTION 144e63400 FUN_144e63400 body=113 status=ok
// SIG undefined FUN_144e63400(void)

void FUN_144e63400(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_1 = Imf_3_2::
             TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
             vftable;
  uVar1 = param_1[4];
  if (0xf < uVar1) {
    lVar2 = param_1[1];
    uVar4 = uVar1 + 1;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar3,uVar4);
  }
  param_1[3] = 0;
  param_1[4] = 0xf;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_144e472e0(param_1);
  return;
}



// FUNCTION 144e63480 FUN_144e63480 body=5 status=ok
// SIG undefined FUN_144e63480(void)

longlong FUN_144e63480(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144e63490 FUN_144e63490 body=5 status=ok
// SIG undefined FUN_144e63490(void)

longlong FUN_144e63490(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144e634a0 FUN_144e634a0 body=8 status=ok
// SIG undefined FUN_144e634a0(void)

char * FUN_144e634a0(void)

{
  return "string";
}



// FUNCTION 144e634b0 FUN_144e634b0 body=107 status=ok
// SIG undefined FUN_144e634b0(void)

undefined8 * FUN_144e634b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    FUN_144e472d0(puVar1);
    *puVar1 = Imf_3_2::
              TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              ::vftable;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0xf;
    *(undefined1 *)(puVar1 + 1) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144e63520 FUN_144e63520 body=177 status=ok
// SIG undefined FUN_144e63520(void)

longlong * FUN_144e63520(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_14494321d(0x28);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    FUN_144e472d0(plVar1);
    *plVar1 = (longlong)
              Imf_3_2::
              TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              ::vftable;
    plVar1[1] = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0xf;
    *(undefined1 *)(plVar1 + 1) = 0;
  }
  if (*(code **)(*plVar1 + 0x28) == FUN_144e63740) {
    lVar2 = FUN_144e637f0(param_1);
    FUN_1401d7e14(plVar1 + 1,lVar2 + 8);
    return plVar1;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 144e635e0 FUN_144e635e0 body=108 status=ok
// SIG undefined FUN_144e635e0(void)

void FUN_144e635e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (0 < (longlong)iVar1) {
    lVar3 = 0;
    do {
      puVar2 = (undefined8 *)(param_1 + 8);
      if (0xf < *(ulonglong *)(param_1 + 0x20)) {
        puVar2 = *(undefined8 **)(param_1 + 8);
      }
      local_res8[0] = *(undefined1 *)(lVar3 + (longlong)puVar2);
      (**(code **)(*param_2 + 8))(param_2,local_res8,1);
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
  }
  return;
}



// FUNCTION 144e63650 FUN_144e63650 body=230 status=ok
// SIG undefined FUN_144e63650(void)

void FUN_144e63650(longlong param_1,longlong *param_2,uint param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong _Size;
  ulonglong uVar5;
  longlong lVar6;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  uVar5 = (ulonglong)param_3;
  uVar2 = *(ulonglong *)(param_1 + 0x18);
  uVar4 = (ulonglong)(int)param_3;
  if (uVar2 < uVar4) {
    _Size = uVar4 - uVar2;
    if (*(ulonglong *)(param_1 + 0x20) - uVar2 < _Size) {
      FUN_144e63930(puVar1,_Size,0,_Size,0);
    }
    else {
      *(ulonglong *)(param_1 + 0x18) = uVar4;
      puVar3 = puVar1;
      if (0xf < *(ulonglong *)(param_1 + 0x20)) {
        puVar3 = (undefined8 *)*puVar1;
      }
      memset((void *)((longlong)puVar3 + uVar2),0,_Size);
      *(undefined1 *)((longlong)((longlong)puVar3 + uVar2) + _Size) = 0;
    }
  }
  else {
    *(ulonglong *)(param_1 + 0x18) = uVar4;
    puVar3 = puVar1;
    if (0xf < *(ulonglong *)(param_1 + 0x20)) {
      puVar3 = (undefined8 *)*puVar1;
    }
    *(undefined1 *)((longlong)puVar3 + uVar4) = 0;
  }
  if (0 < (int)param_3) {
    lVar6 = 0;
    do {
      puVar3 = puVar1;
      if (0xf < *(ulonglong *)(param_1 + 0x20)) {
        puVar3 = (undefined8 *)*puVar1;
      }
      (**(code **)(*param_2 + 0x10))(param_2,lVar6 + (longlong)puVar3,1);
      lVar6 = lVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 144e63740 FUN_144e63740 body=155 status=ok
// SIG undefined FUN_144e63740(void)

void FUN_144e63740(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::
                           TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                           ::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    plVar2 = (longlong *)(lVar1 + 8);
    if ((longlong *)(param_1 + 8) != plVar2) {
      if (0xf < *(ulonglong *)(lVar1 + 0x20)) {
        plVar2 = (longlong *)*plVar2;
      }
      FUN_144b6ebb0(param_1 + 8,plVar2,*(undefined8 *)(lVar1 + 0x18));
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e637f0 FUN_144e637f0 body=109 status=ok
// SIG undefined FUN_144e637f0(void)

void FUN_144e637f0(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::
                           TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                           ::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e63870 FUN_144e63870 body=19 status=ok
// SIG undefined FUN_144e63870(void)

void FUN_144e63870(void)

{
  FUN_144e475b0("string",FUN_144e634b0);
  return;
}



// FUNCTION 144e63890 FUN_144e63890 body=147 status=ok
// SIG undefined FUN_144e63890(void)

undefined8 * FUN_144e63890(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_1 = Imf_3_2::
             TypedAttribute<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
             vftable;
  uVar1 = param_1[4];
  if (0xf < uVar1) {
    lVar2 = param_1[1];
    uVar4 = uVar1 + 1;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar3,uVar4);
  }
  param_1[3] = 0;
  param_1[4] = 0xf;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_144e472e0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 144e63930 FUN_144e63930 body=393 status=ok
// SIG undefined FUN_144e63930(void)

undefined8 *
FUN_144e63930(undefined8 *param_1,ulonglong param_2,undefined8 param_3,size_t param_4,char param_5)

{
  ulonglong uVar1;
  size_t _Size;
  ulonglong uVar2;
  void *_Src;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *pvVar6;
  void *_Dst;
  
  _Size = param_1[2];
  uVar5 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff - _Size < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_146eb22ad();
  }
  uVar2 = param_1[3];
  uVar4 = _Size + param_2 | 0xf;
  if ((uVar4 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar5 = uVar4;
    if (uVar4 < uVar1) {
      uVar5 = uVar1;
    }
    uVar1 = uVar5 + 1;
    if (0xfff < uVar1) {
      uVar4 = uVar5 + 0x28;
      if (uVar4 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_14694ac37();
      }
      goto LAB_144e639ce;
    }
    if (uVar1 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_14494321d(uVar1);
    }
  }
  else {
    uVar4 = 0x8000000000000027;
LAB_144e639ce:
    lVar3 = FUN_14494321d(uVar4);
    if (lVar3 == 0) goto LAB_144e63a69;
    _Dst = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar3;
  }
  param_1[2] = _Size + param_2;
  pvVar6 = (void *)((longlong)_Dst + _Size);
  param_1[3] = uVar5;
  if (uVar2 < 0x10) {
    memcpy(_Dst,param_1,_Size);
    memset(pvVar6,(int)param_5,param_4);
    *(undefined1 *)((longlong)pvVar6 + param_4) = 0;
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,_Src,_Size);
    memset(pvVar6,(int)param_5,param_4);
    uVar5 = uVar2 + 1;
    *(undefined1 *)((longlong)pvVar6 + param_4) = 0;
    pvVar6 = _Src;
    if (0xfff < uVar5) {
      pvVar6 = *(void **)((longlong)_Src + -8);
      uVar5 = uVar2 + 0x28;
      if (0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar6))) {
LAB_144e63a69:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar6,uVar5);
  }
  *param_1 = _Dst;
  return param_1;
}



// FUNCTION 144e63ac0 FUN_144e63ac0 body=8 status=ok
// SIG undefined FUN_144e63ac0(void)

char * FUN_144e63ac0(void)

{
  return "stringvector";
}



// FUNCTION 144e63ad0 FUN_144e63ad0 body=86 status=ok
// SIG undefined FUN_144e63ad0(void)

undefined8 * FUN_144e63ad0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    FUN_144e472d0(puVar1);
    *puVar1 = Imf_3_2::
              TypedAttribute<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>
              ::vftable;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144e63b30 FUN_144e63b30 body=159 status=ok
// SIG undefined FUN_144e63b30(void)

longlong * FUN_144e63b30(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_14494321d(0x20);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    FUN_144e472d0(plVar1);
    *plVar1 = (longlong)
              Imf_3_2::
              TypedAttribute<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>
              ::vftable;
    plVar1[1] = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
  }
  if (*(code **)(*plVar1 + 0x28) != FUN_144e63f10) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
    return plVar1;
  }
  lVar2 = FUN_144e63fc0(param_1);
  FUN_144e64060(plVar1 + 1,lVar2 + 8);
  return plVar1;
}



// FUNCTION 144e63bd0 FUN_144e63bd0 body=166 status=ok
// SIG undefined FUN_144e63bd0(void)

void FUN_144e63bd0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined1 local_resb;
  
  iVar2 = (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 5);
  lVar5 = (longlong)iVar2;
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x10 + lVar4);
      local_res9 = (undefined1)((uint)uVar1 >> 8);
      local_resa = (undefined1)((uint)uVar1 >> 0x10);
      local_resb = (undefined1)((uint)uVar1 >> 0x18);
      local_res8 = (undefined1)uVar1;
      (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 8) + lVar4);
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      (**(code **)(*param_2 + 8))(param_2,puVar3,uVar1);
      lVar4 = lVar4 + 0x20;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 144e63c80 FUN_144e63c80 body=617 status=ok
// SIG undefined FUN_144e63c80(void)

void FUN_144e63c80(longlong param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 ***pppuVar2;
  int iVar3;
  longlong *plVar4;
  void *_Dst;
  undefined8 ****ppppuVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  int local_e8 [2];
  longlong local_e0;
  longlong *local_d8;
  undefined8 ***local_d0;
  undefined8 uStack_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  if (param_3 < 1) {
    return;
  }
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar8 = 0;
  local_e0 = param_1;
  local_d8 = param_2;
  do {
    plVar4 = local_d8;
    (**(code **)(*local_d8 + 0x10))(local_d8,local_e8,4);
    iVar3 = local_e8[0];
    if ((local_e8[0] < 0) || (param_3 - (iVar8 + 4) < local_e8[0])) {
      FUN_144e41060(local_a8,"Invalid size field reading stringvector attribute");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d51d8);
    }
    uStack_c8 = 0;
    local_c0 = 0;
    local_b8 = 0xf;
    local_d0 = (undefined8 ****)0x0;
    uVar6 = (ulonglong)local_e8[0];
    if (local_e8[0] == 0) {
      local_c0 = uVar6;
                    /* WARNING: Ignoring partial resolution of indirect */
      local_d0._0_1_ = 0;
    }
    else if (uVar6 < 0x10) {
      local_c0 = uVar6;
      memset(&local_d0,0,uVar6);
      *(undefined1 *)((longlong)&local_d0 + uVar6) = 0;
    }
    else {
      local_f8 = 0;
      FUN_144e63930(&local_d0,uVar6,0,uVar6);
    }
    if (0 < iVar3) {
      ppppuVar5 = &local_d0;
      if (0xf < local_b8) {
        ppppuVar5 = (undefined8 ****)local_d0;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4,ppppuVar5,iVar3);
    }
    uVar6 = local_c0;
    iVar8 = iVar8 + 4 + iVar3;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    if (puVar1 == *(undefined8 **)(param_1 + 0x18)) {
      FUN_1470a9b88(param_1 + 8,puVar1,&local_d0);
    }
    else {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      ppppuVar5 = &local_d0;
      if (0xf < local_b8) {
        ppppuVar5 = (undefined8 ****)local_d0;
      }
      if (0x7fffffffffffffff < local_c0) {
                    /* WARNING: Subroutine does not return */
        FUN_146eb22ad();
      }
      puVar1[3] = 0xf;
      if (local_c0 < 0x10) {
        puVar1[2] = local_c0;
        pppuVar2 = ppppuVar5[1];
        *puVar1 = *ppppuVar5;
        puVar1[1] = pppuVar2;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x20;
        param_1 = local_e0;
      }
      else {
        uVar7 = local_c0 | 0xf;
        if (uVar7 < 0x8000000000000000) {
          if (uVar7 < 0x16) {
            uVar7 = 0x16;
          }
        }
        else {
          uVar7 = 0x7fffffffffffffff;
        }
        _Dst = (void *)FUN_144b659f0(puVar1,uVar7 + 1);
        *puVar1 = _Dst;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
        memcpy(_Dst,ppppuVar5,uVar6 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x20;
        param_1 = local_e0;
      }
    }
    if (0xf < local_b8) {
      uVar6 = local_b8 + 1;
      ppppuVar5 = (undefined8 ****)local_d0;
      if (0xfff < uVar6) {
        uVar6 = local_b8 + 0x28;
        ppppuVar5 = (undefined8 ****)local_d0[-1];
        if (0x1f < (ulonglong)((longlong)local_d0 + (-8 - (longlong)ppppuVar5))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(ppppuVar5,uVar6);
    }
  } while (iVar8 < param_3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_118);
}



// FUNCTION 144e63f10 FUN_144e63f10 body=152 status=ok
// SIG undefined FUN_144e63f10(void)

void FUN_144e63f10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar2 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::
                           TypedAttribute<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>
                           ::RTTI_Type_Descriptor);
  if (lVar2 != 0) {
    if ((longlong *)(param_1 + 8) != (longlong *)(lVar2 + 8)) {
      lVar1 = *(longlong *)(lVar2 + 8);
      FUN_144e640e0((longlong *)(param_1 + 8),lVar1,*(longlong *)(lVar2 + 0x10) - lVar1 >> 5);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e63fc0 FUN_144e63fc0 body=109 status=ok
// SIG undefined FUN_144e63fc0(void)

void FUN_144e63fc0(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::
                           TypedAttribute<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>
                           ::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e64040 FUN_144e64040 body=19 status=ok
// SIG undefined FUN_144e64040(void)

void FUN_144e64040(void)

{
  FUN_144e475b0("stringvector",FUN_144e63ad0);
  return;
}



// FUNCTION 144e64060 FUN_144e64060 body=45 status=ok
// SIG undefined FUN_144e64060(void)

longlong * FUN_144e64060(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_144e640e0(param_1,*param_2,param_2[1] - *param_2 >> 5);
  }
  return param_1;
}



// FUNCTION 144e64090 FUN_144e64090 body=74 status=ok
// SIG undefined FUN_144e64090(void)

undefined8 * FUN_144e64090(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::
             TypedAttribute<std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>_>
             ::vftable;
  FUN_1401d7744(param_1 + 1);
  FUN_144e472e0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144e640e0 FUN_144e640e0 body=524 status=ok
// SIG undefined FUN_144e640e0(void)

void FUN_144e640e0(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)*param_1;
  uVar2 = param_1[2] - (longlong)puVar7 >> 5;
  if (uVar2 < param_3) {
    if (0x7ffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_1470a9d4e();
    }
    uVar6 = 0x7ffffffffffffff;
    if ((uVar2 <= 0x7ffffffffffffff - (uVar2 >> 1)) &&
       (uVar6 = (uVar2 >> 1) + uVar2, uVar6 < param_3)) {
      uVar6 = param_3;
    }
    if (puVar7 != (undefined8 *)0x0) {
      FUN_1486115df(puVar7,param_1[1],param_1);
      lVar1 = *param_1;
      uVar2 = param_1[2] - lVar1 & 0xffffffffffffffe0;
      lVar3 = lVar1;
      if (0xfff < uVar2) {
        uVar2 = uVar2 + 0x27;
        lVar3 = *(longlong *)(lVar1 + -8);
        if (0x1f < (lVar1 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(lVar3,uVar2);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    lVar1 = FUN_1470a9df8(param_1,uVar6);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = uVar6 * 0x20 + lVar1;
    for (; param_3 != 0; param_3 = param_3 - 1) {
      FUN_144b65a50(lVar1,param_2);
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + 4;
    }
    param_1[1] = lVar1;
  }
  else {
    puVar4 = (undefined8 *)param_1[1];
    uVar2 = (longlong)puVar4 - (longlong)puVar7 >> 5;
    if (uVar2 < param_3) {
      if (puVar7 != puVar4) {
        do {
          if (puVar7 != param_2) {
            puVar4 = param_2;
            if (0xf < (ulonglong)param_2[3]) {
              puVar4 = (undefined8 *)*param_2;
            }
            FUN_144b6ebb0(puVar7,puVar4,param_2[2]);
          }
          puVar7 = puVar7 + 4;
          param_2 = param_2 + 4;
          puVar4 = (undefined8 *)param_1[1];
        } while (puVar7 != puVar4);
      }
      for (lVar1 = param_3 - uVar2; lVar1 != 0; lVar1 = lVar1 + -1) {
        FUN_144b65a50(puVar4,param_2);
        puVar4 = puVar4 + 4;
        param_2 = param_2 + 4;
      }
    }
    else {
      puVar4 = puVar7 + param_3 * 4;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        if (puVar7 != param_2) {
          puVar5 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            puVar5 = (undefined8 *)*param_2;
          }
          FUN_144b6ebb0(puVar7,puVar5,param_2[2]);
        }
        puVar7 = puVar7 + 4;
        param_2 = param_2 + 4;
      }
      FUN_1486115df(puVar4,param_1[1],param_1);
    }
    param_1[1] = (longlong)puVar4;
  }
  return;
}



// FUNCTION 144e64300 FUN_144e64300 body=5 status=ok
// SIG undefined FUN_144e64300(void)

longlong FUN_144e64300(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144e64310 FUN_144e64310 body=5 status=ok
// SIG undefined FUN_144e64310(void)

longlong FUN_144e64310(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144e64320 FUN_144e64320 body=8 status=ok
// SIG undefined FUN_144e64320(void)

char * FUN_144e64320(void)

{
  return "tiledesc";
}



// FUNCTION 144e64330 FUN_144e64330 body=98 status=ok
// SIG undefined FUN_144e64330(void)

undefined8 * FUN_144e64330(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    FUN_144e472d0(puVar1);
    *puVar1 = Imf_3_2::TypedAttribute<Imf_3_2::TileDescription>::vftable;
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined8 *)((longlong)puVar1 + 0xc) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144e643a0 FUN_144e643a0 body=163 status=ok
// SIG undefined FUN_144e643a0(void)

longlong * FUN_144e643a0(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_14494321d(0x18);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2[2] = 0;
    FUN_144e472d0(plVar2);
    *plVar2 = (longlong)Imf_3_2::TypedAttribute<Imf_3_2::TileDescription>::vftable;
    *(undefined4 *)(plVar2 + 1) = 0x20;
    *(undefined8 *)((longlong)plVar2 + 0xc) = 0x20;
    *(undefined4 *)((longlong)plVar2 + 0x14) = 0;
  }
  if (*(code **)(*plVar2 + 0x28) == FUN_144e645f0) {
    lVar3 = FUN_144e64680(param_1);
    lVar1 = *(longlong *)(lVar3 + 0x10);
    plVar2[1] = *(longlong *)(lVar3 + 8);
    plVar2[2] = lVar1;
    return plVar2;
  }
  (**(code **)(*plVar2 + 0x28))(plVar2,param_1);
  return plVar2;
}



// FUNCTION 144e64450 FUN_144e64450 body=171 status=ok
// SIG undefined FUN_144e64450(void)

void FUN_144e64450(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  byte local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined1 local_resb;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  local_res8 = (byte)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  local_res8 = (byte)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  local_res8 = *(char *)(param_1 + 0x14) << 4 | *(byte *)(param_1 + 0x10);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,1);
  return;
}



// FUNCTION 144e64500 FUN_144e64500 body=225 status=ok
// SIG undefined FUN_144e64500(void)

void FUN_144e64500(longlong param_1,longlong *param_2)

{
  uint uVar1;
  byte local_res8 [8];
  undefined4 local_res10 [2];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res10,4);
  *(undefined4 *)(param_1 + 8) = local_res10[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res10,4);
  *(undefined4 *)(param_1 + 0xc) = local_res10[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,1);
  uVar1 = (uint)(local_res8[0] & 0xf);
  if (3 < (local_res8[0] & 0xf)) {
    uVar1 = 3;
  }
  local_res8[0] = local_res8[0] >> 4;
  *(uint *)(param_1 + 0x10) = uVar1;
  if (2 < local_res8[0]) {
    local_res8[0] = 2;
  }
  *(uint *)(param_1 + 0x14) = (uint)local_res8[0];
  return;
}



// FUNCTION 144e645f0 FUN_144e645f0 body=128 status=ok
// SIG undefined FUN_144e645f0(void)

void FUN_144e645f0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar4 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imf_3_2::TileDescription>::RTTI_Type_Descriptor);
  if (lVar4 != 0) {
    uVar1 = *(undefined4 *)(lVar4 + 0xc);
    uVar2 = *(undefined4 *)(lVar4 + 0x10);
    uVar3 = *(undefined4 *)(lVar4 + 0x14);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar4 + 8);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    *(undefined4 *)(param_1 + 0x14) = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e64680 FUN_144e64680 body=109 status=ok
// SIG undefined FUN_144e64680(void)

void FUN_144e64680(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imf_3_2::TileDescription>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e64700 FUN_144e64700 body=19 status=ok
// SIG undefined FUN_144e64700(void)

void FUN_144e64700(void)

{
  FUN_144e475b0("tiledesc",FUN_144e64330);
  return;
}



// FUNCTION 144e64720 FUN_144e64720 body=62 status=ok
// SIG undefined FUN_144e64720(void)

undefined8 * FUN_144e64720(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::TypedAttribute<Imf_3_2::TileDescription>::vftable;
  FUN_144e472e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144e64760 FUN_144e64760 body=5 status=ok
// SIG undefined FUN_144e64760(void)

longlong FUN_144e64760(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144e64770 FUN_144e64770 body=8 status=ok
// SIG undefined FUN_144e64770(void)

char * FUN_144e64770(void)

{
  return "timecode";
}



// FUNCTION 144e64780 FUN_144e64780 body=8 status=ok
// SIG undefined FUN_144e64780(void)

char * FUN_144e64780(void)

{
  return "timecode";
}



// FUNCTION 144e64790 FUN_144e64790 body=81 status=ok
// SIG undefined FUN_144e64790(void)

undefined8 * FUN_144e64790(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_144e472d0(puVar1);
    *puVar1 = Imf_3_2::TypedAttribute<Imf_3_2::TimeCode>::vftable;
    FUN_14521d2b0(puVar1 + 1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144e647f0 FUN_144e647f0 body=151 status=ok
// SIG undefined FUN_144e647f0(void)

longlong * FUN_144e647f0(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_14494321d(0x10);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    *plVar1 = 0;
    plVar1[1] = 0;
    FUN_144e472d0(plVar1);
    *plVar1 = (longlong)Imf_3_2::TypedAttribute<Imf_3_2::TimeCode>::vftable;
    FUN_14521d2b0(plVar1 + 1);
  }
  if (*(code **)(*plVar1 + 0x28) == FUN_144e649d0) {
    lVar2 = FUN_144e64a60(param_1);
    FUN_14521d2c0(plVar1 + 1,lVar2 + 8);
    return plVar1;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 144e64890 FUN_144e64890 body=150 status=ok
// SIG undefined FUN_144e64890(void)

void FUN_144e64890(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined1 local_resb;
  
  uVar1 = FUN_14521d2e0(param_1 + 8,0);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  uVar1 = FUN_14521d370(param_1 + 8);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  return;
}



// FUNCTION 144e64930 FUN_144e64930 body=157 status=ok
// SIG undefined FUN_144e64930(void)

void FUN_144e64930(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [2];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  FUN_14521d320(param_1 + 8,local_res8[0],0);
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  FUN_14521d380(param_1 + 8,local_res8[0]);
  return;
}



// FUNCTION 144e649d0 FUN_144e649d0 body=133 status=ok
// SIG undefined FUN_144e649d0(void)

void FUN_144e649d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imf_3_2::TimeCode>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    FUN_14521d2c0(param_1 + 8,lVar1 + 8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e64a60 FUN_144e64a60 body=109 status=ok
// SIG undefined FUN_144e64a60(void)

void FUN_144e64a60(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imf_3_2::TimeCode>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e64ae0 FUN_144e64ae0 body=19 status=ok
// SIG undefined FUN_144e64ae0(void)

void FUN_144e64ae0(void)

{
  FUN_144e475b0("timecode",FUN_144e64790);
  return;
}



// FUNCTION 144e64b00 FUN_144e64b00 body=62 status=ok
// SIG undefined FUN_144e64b00(void)

undefined8 * FUN_144e64b00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::TypedAttribute<Imf_3_2::TimeCode>::vftable;
  FUN_144e472e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144e64b40 FUN_144e64b40 body=8 status=ok
// SIG undefined FUN_144e64b40(void)

undefined * FUN_144e64b40(void)

{
  return &DAT_1499725a4;
}



// FUNCTION 144e64b50 FUN_144e64b50 body=70 status=ok
// SIG undefined FUN_144e64b50(void)

undefined8 * FUN_144e64b50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_144e472d0(puVar1);
    *puVar1 = Imf_3_2::TypedAttribute<Imath_3_1::Vec2<int>_>::vftable;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144e64ba0 FUN_144e64ba0 body=140 status=ok
// SIG undefined FUN_144e64ba0(void)

longlong * FUN_144e64ba0(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_14494321d(0x10);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    *plVar1 = 0;
    plVar1[1] = 0;
    FUN_144e472d0(plVar1);
    *plVar1 = (longlong)Imf_3_2::TypedAttribute<Imath_3_1::Vec2<int>_>::vftable;
  }
  if (*(code **)(*plVar1 + 0x28) == FUN_144e64d60) {
    lVar2 = FUN_144e64e00(param_1);
    *(undefined4 *)(plVar1 + 1) = *(undefined4 *)(lVar2 + 8);
    *(undefined4 *)((longlong)plVar1 + 0xc) = *(undefined4 *)(lVar2 + 0xc);
    return plVar1;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 144e64c30 FUN_144e64c30 body=137 status=ok
// SIG undefined FUN_144e64c30(void)

void FUN_144e64c30(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined1 local_resb;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  return;
}



// FUNCTION 144e64cc0 FUN_144e64cc0 body=151 status=ok
// SIG undefined FUN_144e64cc0(void)

void FUN_144e64cc0(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [2];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 8) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0xc) = local_res8[0];
  return;
}



// FUNCTION 144e64d60 FUN_144e64d60 body=135 status=ok
// SIG undefined FUN_144e64d60(void)

void FUN_144e64d60(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imath_3_1::Vec2<int>_>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar1 + 0xc);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e64e00 FUN_144e64e00 body=109 status=ok
// SIG undefined FUN_144e64e00(void)

void FUN_144e64e00(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imath_3_1::Vec2<int>_>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e64e80 FUN_144e64e80 body=19 status=ok
// SIG undefined FUN_144e64e80(void)

void FUN_144e64e80(void)

{
  FUN_144e475b0(&DAT_1499725a4,FUN_144e64b50);
  return;
}



// FUNCTION 144e64ea0 FUN_144e64ea0 body=62 status=ok
// SIG undefined FUN_144e64ea0(void)

undefined8 * FUN_144e64ea0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::TypedAttribute<Imath_3_1::Vec2<int>_>::vftable;
  FUN_144e472e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144e64ee0 FUN_144e64ee0 body=56 status=ok
// SIG undefined FUN_144e64ee0(void)

undefined8 * FUN_144e64ee0(undefined8 *param_1,undefined4 *param_2)

{
  FUN_144e472d0();
  *param_1 = Imf_3_2::TypedAttribute<Imath_3_1::Vec2<float>_>::vftable;
  *(undefined4 *)(param_1 + 1) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_2[1];
  return param_1;
}



// FUNCTION 144e64f20 FUN_144e64f20 body=15 status=ok
// SIG undefined FUN_144e64f20(void)

void FUN_144e64f20(undefined8 *param_1)

{
  *param_1 = Imf_3_2::TypedAttribute<Imath_3_1::Vec2<float>_>::vftable;
  FUN_144e472e0();
  return;
}



// FUNCTION 144e64f30 FUN_144e64f30 body=8 status=ok
// SIG undefined FUN_144e64f30(void)

undefined1 * FUN_144e64f30(void)

{
  return &DAT_1499725a8;
}



// FUNCTION 144e64f40 FUN_144e64f40 body=70 status=ok
// SIG undefined FUN_144e64f40(void)

undefined8 * FUN_144e64f40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_144e472d0(puVar1);
    *puVar1 = Imf_3_2::TypedAttribute<Imath_3_1::Vec2<float>_>::vftable;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144e64f90 FUN_144e64f90 body=140 status=ok
// SIG undefined FUN_144e64f90(void)

longlong * FUN_144e64f90(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_14494321d(0x10);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    *plVar1 = 0;
    plVar1[1] = 0;
    FUN_144e472d0(plVar1);
    *plVar1 = (longlong)Imf_3_2::TypedAttribute<Imath_3_1::Vec2<float>_>::vftable;
  }
  if (*(code **)(*plVar1 + 0x28) == FUN_144e65180) {
    lVar2 = FUN_144e65220(param_1);
    *(undefined4 *)(plVar1 + 1) = *(undefined4 *)(lVar2 + 8);
    *(undefined4 *)((longlong)plVar1 + 0xc) = *(undefined4 *)(lVar2 + 0xc);
    return plVar1;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 144e65020 FUN_144e65020 body=161 status=ok
// SIG undefined FUN_144e65020(void)

void FUN_144e65020(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = *(undefined4 *)(param_1 + 8);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0xc);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  return;
}



// FUNCTION 144e650d0 FUN_144e650d0 body=175 status=ok
// SIG undefined FUN_144e650d0(void)

void FUN_144e650d0(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [2];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 8) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0xc) = local_res8[0];
  return;
}



// FUNCTION 144e65180 FUN_144e65180 body=135 status=ok
// SIG undefined FUN_144e65180(void)

void FUN_144e65180(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imath_3_1::Vec2<float>_>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar1 + 0xc);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e65220 FUN_144e65220 body=109 status=ok
// SIG undefined FUN_144e65220(void)

void FUN_144e65220(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imath_3_1::Vec2<float>_>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e652a0 FUN_144e652a0 body=19 status=ok
// SIG undefined FUN_144e652a0(void)

void FUN_144e652a0(void)

{
  FUN_144e475b0(&DAT_1499725a8,FUN_144e64f40);
  return;
}



// FUNCTION 144e652c0 FUN_144e652c0 body=62 status=ok
// SIG undefined FUN_144e652c0(void)

undefined8 * FUN_144e652c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::TypedAttribute<Imath_3_1::Vec2<float>_>::vftable;
  FUN_144e472e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144e65300 FUN_144e65300 body=8 status=ok
// SIG undefined FUN_144e65300(void)

undefined * FUN_144e65300(void)

{
  return &DAT_1499725ac;
}



// FUNCTION 144e65310 FUN_144e65310 body=76 status=ok
// SIG undefined FUN_144e65310(void)

undefined8 * FUN_144e65310(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    FUN_144e472d0(puVar1);
    *puVar1 = Imf_3_2::TypedAttribute<Imath_3_1::Vec2<double>_>::vftable;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144e65360 FUN_144e65360 body=150 status=ok
// SIG undefined FUN_144e65360(void)

longlong * FUN_144e65360(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_14494321d(0x18);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    FUN_144e472d0(plVar1);
    *plVar1 = (longlong)Imf_3_2::TypedAttribute<Imath_3_1::Vec2<double>_>::vftable;
  }
  if (*(code **)(*plVar1 + 0x28) == FUN_144e65480) {
    lVar2 = FUN_144e65520(param_1);
    plVar1[1] = *(longlong *)(lVar2 + 8);
    plVar1[2] = *(longlong *)(lVar2 + 0x10);
    return plVar1;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 144e65400 FUN_144e65400 body=52 status=ok
// SIG undefined FUN_144e65400(void)

void FUN_144e65400(longlong param_1,undefined8 param_2)

{
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 8));
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 144e65440 FUN_144e65440 body=50 status=ok
// SIG undefined FUN_144e65440(void)

void FUN_144e65440(longlong param_1,undefined8 param_2)

{
  FUN_144e4a560(param_2,param_1 + 8);
  FUN_144e4a560(param_2,param_1 + 0x10);
  return;
}



// FUNCTION 144e65480 FUN_144e65480 body=139 status=ok
// SIG undefined FUN_144e65480(void)

void FUN_144e65480(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imath_3_1::Vec2<double>_>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar1 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e65520 FUN_144e65520 body=109 status=ok
// SIG undefined FUN_144e65520(void)

void FUN_144e65520(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imath_3_1::Vec2<double>_>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e655a0 FUN_144e655a0 body=19 status=ok
// SIG undefined FUN_144e655a0(void)

void FUN_144e655a0(void)

{
  FUN_144e475b0(&DAT_1499725ac,FUN_144e65310);
  return;
}



// FUNCTION 144e655c0 FUN_144e655c0 body=62 status=ok
// SIG undefined FUN_144e655c0(void)

undefined8 * FUN_144e655c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::TypedAttribute<Imath_3_1::Vec2<double>_>::vftable;
  FUN_144e472e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144e65600 FUN_144e65600 body=8 status=ok
// SIG undefined FUN_144e65600(void)

undefined * FUN_144e65600(void)

{
  return &DAT_1499725b0;
}



// FUNCTION 144e65610 FUN_144e65610 body=76 status=ok
// SIG undefined FUN_144e65610(void)

undefined8 * FUN_144e65610(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    FUN_144e472d0(puVar1);
    *puVar1 = Imf_3_2::TypedAttribute<Imath_3_1::Vec3<int>_>::vftable;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144e65660 FUN_144e65660 body=130 status=ok
// SIG undefined FUN_144e65660(void)

longlong * FUN_144e65660(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14494321d(0x18);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    FUN_144e472d0(plVar1);
    *plVar1 = (longlong)Imf_3_2::TypedAttribute<Imath_3_1::Vec3<int>_>::vftable;
  }
  if (*(code **)(*plVar1 + 0x28) == FUN_144e65890) {
    FUN_144e65890();
    return plVar1;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 144e656f0 FUN_144e656f0 body=189 status=ok
// SIG undefined FUN_144e656f0(void)

void FUN_144e656f0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined1 local_resb;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  return;
}



// FUNCTION 144e657b0 FUN_144e657b0 body=209 status=ok
// SIG undefined FUN_144e657b0(void)

void FUN_144e657b0(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [2];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 8) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0xc) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x10) = local_res8[0];
  return;
}



// FUNCTION 144e65890 FUN_144e65890 body=141 status=ok
// SIG undefined FUN_144e65890(void)

void FUN_144e65890(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imath_3_1::Vec3<int>_>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar1 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar1 + 0x10);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e65930 FUN_144e65930 body=19 status=ok
// SIG undefined FUN_144e65930(void)

void FUN_144e65930(void)

{
  FUN_144e475b0(&DAT_1499725b0,FUN_144e65610);
  return;
}



// FUNCTION 144e65950 FUN_144e65950 body=62 status=ok
// SIG undefined FUN_144e65950(void)

undefined8 * FUN_144e65950(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::TypedAttribute<Imath_3_1::Vec3<int>_>::vftable;
  FUN_144e472e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144e65990 FUN_144e65990 body=8 status=ok
// SIG undefined FUN_144e65990(void)

undefined * FUN_144e65990(void)

{
  return &DAT_1499725b4;
}



// FUNCTION 144e659a0 FUN_144e659a0 body=76 status=ok
// SIG undefined FUN_144e659a0(void)

undefined8 * FUN_144e659a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    FUN_144e472d0(puVar1);
    *puVar1 = Imf_3_2::TypedAttribute<Imath_3_1::Vec3<float>_>::vftable;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144e659f0 FUN_144e659f0 body=130 status=ok
// SIG undefined FUN_144e659f0(void)

longlong * FUN_144e659f0(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14494321d(0x18);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    FUN_144e472d0(plVar1);
    *plVar1 = (longlong)Imf_3_2::TypedAttribute<Imath_3_1::Vec3<float>_>::vftable;
  }
  if (*(code **)(*plVar1 + 0x28) == FUN_144e65c70) {
    FUN_144e65c70();
    return plVar1;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 144e65a80 FUN_144e65a80 body=225 status=ok
// SIG undefined FUN_144e65a80(void)

void FUN_144e65a80(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = *(undefined4 *)(param_1 + 8);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0xc);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x10);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  return;
}



// FUNCTION 144e65b70 FUN_144e65b70 body=245 status=ok
// SIG undefined FUN_144e65b70(void)

void FUN_144e65b70(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [2];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 8) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0xc) = local_res8[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 0x10) = local_res8[0];
  return;
}



// FUNCTION 144e65c70 FUN_144e65c70 body=141 status=ok
// SIG undefined FUN_144e65c70(void)

void FUN_144e65c70(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imath_3_1::Vec3<float>_>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar1 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar1 + 0x10);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e65d10 FUN_144e65d10 body=19 status=ok
// SIG undefined FUN_144e65d10(void)

void FUN_144e65d10(void)

{
  FUN_144e475b0(&DAT_1499725b4,FUN_144e659a0);
  return;
}



// FUNCTION 144e65d30 FUN_144e65d30 body=62 status=ok
// SIG undefined FUN_144e65d30(void)

undefined8 * FUN_144e65d30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::TypedAttribute<Imath_3_1::Vec3<float>_>::vftable;
  FUN_144e472e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144e65d70 FUN_144e65d70 body=8 status=ok
// SIG undefined FUN_144e65d70(void)

undefined * FUN_144e65d70(void)

{
  return &DAT_1499725b8;
}



// FUNCTION 144e65d80 FUN_144e65d80 body=74 status=ok
// SIG undefined FUN_144e65d80(void)

undefined8 * FUN_144e65d80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    FUN_144e472d0(puVar1);
    *puVar1 = Imf_3_2::TypedAttribute<Imath_3_1::Vec3<double>_>::vftable;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144e65dd0 FUN_144e65dd0 body=128 status=ok
// SIG undefined FUN_144e65dd0(void)

longlong * FUN_144e65dd0(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14494321d(0x20);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    FUN_144e472d0(plVar1);
    *plVar1 = (longlong)Imf_3_2::TypedAttribute<Imath_3_1::Vec3<double>_>::vftable;
  }
  if (*(code **)(*plVar1 + 0x28) == FUN_144e65ee0) {
    FUN_144e65ee0();
    return plVar1;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 144e65e50 FUN_144e65e50 body=65 status=ok
// SIG undefined FUN_144e65e50(void)

void FUN_144e65e50(longlong param_1,undefined8 param_2)

{
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 8));
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 0x10));
  FUN_144e4a4c0(param_2,*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 144e65ea0 FUN_144e65ea0 body=62 status=ok
// SIG undefined FUN_144e65ea0(void)

void FUN_144e65ea0(longlong param_1,undefined8 param_2)

{
  FUN_144e4a560(param_2,param_1 + 8);
  FUN_144e4a560(param_2,param_1 + 0x10);
  FUN_144e4a560(param_2,param_1 + 0x18);
  return;
}



// FUNCTION 144e65ee0 FUN_144e65ee0 body=147 status=ok
// SIG undefined FUN_144e65ee0(void)

void FUN_144e65ee0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imath_3_1::Vec3<double>_>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar1 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e65f80 FUN_144e65f80 body=19 status=ok
// SIG undefined FUN_144e65f80(void)

void FUN_144e65f80(void)

{
  FUN_144e475b0(&DAT_1499725b8,FUN_144e65d80);
  return;
}



// FUNCTION 144e65fa0 FUN_144e65fa0 body=62 status=ok
// SIG undefined FUN_144e65fa0(void)

undefined8 * FUN_144e65fa0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::TypedAttribute<Imath_3_1::Vec3<double>_>::vftable;
  FUN_144e472e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144e65fe0 FUN_144e65fe0 body=27 status=ok
// SIG undefined FUN_144e65fe0(void)

void FUN_144e65fe0(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = DAT_14c796698;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = DAT_14c79669c;
  }
  return;
}



// FUNCTION 144e66000 FUN_144e66000 body=27 status=ok
// SIG undefined FUN_144e66000(void)

void FUN_144e66000(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = DAT_14c7966a0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = DAT_14c7966a4;
  }
  return;
}



// FUNCTION 144e66020 FUN_144e66020 body=14 status=ok
// SIG undefined FUN_144e66020(void)

void FUN_144e66020(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = DAT_14c70a078;
  }
  return;
}



// FUNCTION 144e66030 FUN_144e66030 body=18 status=ok
// SIG undefined FUN_144e66030(void)

void FUN_144e66030(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = DAT_14c70a07c;
  }
  return;
}



// FUNCTION 144e66050 FUN_144e66050 body=32 status=ok
// SIG undefined FUN_144e66050(void)

undefined * FUN_144e66050(int param_1)

{
  if ((param_1 < 0) || (DAT_14c709f6c <= param_1)) {
    param_1 = DAT_14c709f6c + -1;
  }
  return (&PTR_s_Success_1499d6e7e_2_14c709f70)[param_1];
}



// FUNCTION 144e66070 FUN_144e66070 body=32 status=ok
// SIG undefined FUN_144e66070(void)

undefined * FUN_144e66070(int param_1)

{
  if ((param_1 < 0) || (DAT_14c709f68 <= param_1)) {
    param_1 = DAT_14c709f68 + -1;
  }
  return (&PTR_s_EXR_ERR_SUCCESS_14c709e60)[param_1];
}



// FUNCTION 144e66090 FUN_144e66090 body=152 status=ok
// SIG undefined FUN_144e66090(void)

void FUN_144e66090(int param_1,int param_2,int param_3)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 < 0) {
    FUN_144e40d70(local_78,"Argument not in valid range.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98,
                (longlong)((param_2 - param_1) + 1) % (longlong)(1 << ((byte)param_3 & 0x1f)) &
                0xffffffff);
}



// FUNCTION 144e66140 FUN_144e66140 body=135 status=ok
// SIG undefined FUN_144e66140(void)

int * FUN_144e66140(int *param_1,longlong param_2,int param_3,undefined4 param_4,int param_5,
                   undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_144e66090(param_5,param_6,param_8,*(undefined4 *)(param_2 + 0xc));
  iVar2 = FUN_144e66090(param_3,param_4,param_7,*(undefined4 *)(param_2 + 0xc));
  param_1[1] = param_5;
  *param_1 = param_3;
  param_1[3] = param_5 + -1 + iVar1;
  param_1[2] = param_3 + -1 + iVar2;
  return param_1;
}



// FUNCTION 144e661d0 FUN_144e661d0 body=247 status=ok
// SIG undefined FUN_144e661d0(void)

int * FUN_144e661d0(int *param_1,uint *param_2,int param_3,undefined4 param_4,int param_5,
                   undefined4 param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10
                   )

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  iVar3 = *param_2 * param_7 + param_3;
  lVar5 = ((ulonglong)*param_2 - 1) + (longlong)iVar3;
  iVar6 = param_2[1] * param_8 + param_5;
  lVar7 = ((ulonglong)param_2[1] - 1) + (longlong)iVar6;
  iVar1 = FUN_144e66090(param_5,param_6,param_10,param_2[3]);
  iVar2 = FUN_144e66090(param_3,param_4,param_9,param_2[3]);
  iVar2 = param_3 + -1 + iVar2;
  iVar1 = param_5 + -1 + iVar1;
  iVar4 = (int)lVar5;
  if (iVar2 < lVar5) {
    iVar4 = iVar2;
  }
  iVar2 = (int)lVar7;
  if (iVar1 < lVar7) {
    iVar2 = iVar1;
  }
  *param_1 = iVar3;
  param_1[1] = iVar6;
  param_1[2] = iVar4;
  param_1[3] = iVar2;
  return param_1;
}



// FUNCTION 144e662d0 FUN_144e662d0 body=128 status=ok
// SIG undefined FUN_144e662d0(void)

longlong FUN_144e662d0(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_res10;
  undefined1 local_res18 [16];
  
  uVar2 = FUN_144b67b80();
  lVar4 = 0;
  FUN_144b65f20(uVar2,&local_res10);
  plVar3 = (longlong *)FUN_144b65f40(uVar2,local_res18);
  if (local_res10 != *plVar3) {
    do {
      iVar1 = FUN_144e66f70(*(undefined4 *)(local_res10 + 0x11c));
      lVar4 = lVar4 + iVar1;
      FUN_144b663b0(&local_res10);
      plVar3 = (longlong *)FUN_144b65f40(uVar2,local_res18);
    } while (local_res10 != *plVar3);
  }
  return lVar4;
}



// FUNCTION 144e66350 FUN_144e66350 body=750 status=ok
// SIG undefined FUN_144e66350(void)

void FUN_144e66350(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,
                  undefined8 *param_6,undefined8 *param_7,int *param_8,int *param_9)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined8 *local_b8;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar6 = param_1[2];
  local_b8 = param_7;
  iVar3 = 0;
  if (iVar6 == 0) {
    iVar6 = 1;
    iVar8 = param_3 - param_2;
  }
  else if (iVar6 == 1) {
    iVar8 = param_3 - param_2;
    iVar7 = 0;
    iVar6 = 0;
    iVar9 = iVar8;
    if (iVar8 + 1 < (param_5 - param_4) + 1) {
      iVar9 = param_5 - param_4;
    }
    uVar5 = iVar9 + 1;
    if (param_1[3] == 0) {
      if (1 < (int)uVar5) {
        do {
          iVar6 = iVar7;
          uVar5 = (int)uVar5 >> 1;
          iVar7 = iVar6 + 1;
        } while (1 < (int)uVar5);
        iVar6 = iVar6 + 2;
        goto LAB_144e66497;
      }
    }
    else {
      iVar6 = 0;
      for (; 1 < (int)uVar5; uVar5 = (int)uVar5 >> 1) {
        if ((uVar5 & 1) != 0) {
          iVar7 = 1;
        }
        iVar6 = iVar6 + 1;
      }
      iVar6 = iVar7 + iVar6;
    }
    iVar6 = iVar6 + 1;
  }
  else {
    if (iVar6 != 2) {
      FUN_144e40d70(local_a8,"Unknown LevelMode format.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d50e0);
    }
    iVar8 = param_3 - param_2;
    iVar7 = 0;
    uVar5 = iVar8 + 1;
    if (param_1[3] == 0) {
      if (1 < (int)uVar5) {
        do {
          iVar6 = iVar7;
          uVar5 = (int)uVar5 >> 1;
          iVar7 = iVar6 + 1;
        } while (1 < (int)uVar5);
        iVar6 = iVar6 + 2;
        goto LAB_144e66497;
      }
    }
    else {
      iVar6 = 0;
      for (; 1 < (int)uVar5; uVar5 = (int)uVar5 >> 1) {
        if ((uVar5 & 1) != 0) {
          iVar7 = 1;
        }
        iVar6 = iVar6 + 1;
      }
      iVar7 = iVar7 + iVar6;
    }
    iVar6 = iVar7 + 1;
  }
LAB_144e66497:
  iVar7 = 1;
  *param_8 = iVar6;
  iVar6 = param_1[2];
  if (iVar6 != 0) {
    if (iVar6 == 1) {
      if (iVar8 + 1 < (param_5 - param_4) + 1) {
        iVar8 = param_5 - param_4;
      }
      uVar5 = iVar8 + 1;
      if (param_1[3] == 0) {
        for (; 1 < (int)uVar5; uVar5 = (int)uVar5 >> 1) {
          iVar3 = iVar3 + 1;
        }
      }
      else {
        iVar6 = 0;
        for (; 1 < (int)uVar5; uVar5 = (int)uVar5 >> 1) {
          if ((uVar5 & 1) != 0) {
            iVar6 = 1;
          }
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar3 + iVar6;
      }
    }
    else {
      if (iVar6 != 2) {
        FUN_144e40d70(local_a8,"Unknown LevelMode format.");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d50e0);
      }
      uVar5 = (param_5 - param_4) + 1;
      if (param_1[3] == 0) {
        for (; 1 < (int)uVar5; uVar5 = (int)uVar5 >> 1) {
          iVar3 = iVar3 + 1;
        }
      }
      else {
        iVar6 = 0;
        for (; 1 < (int)uVar5; uVar5 = (int)uVar5 >> 1) {
          if ((uVar5 & 1) != 0) {
            iVar6 = 1;
          }
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar3 + iVar6;
      }
    }
    iVar7 = iVar3 + 1;
  }
  *param_9 = iVar7;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)*param_8;
  uVar4 = SUB168(ZEXT816(4) * auVar1,0);
  if (SUB168(ZEXT816(4) * auVar1,8) != 0) {
    uVar4 = 0xffffffffffffffff;
  }
  uVar4 = FUN_144a7d36f(uVar4);
  *param_6 = uVar4;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)*param_9;
  uVar4 = SUB168(ZEXT816(4) * auVar2,0);
  if (SUB168(ZEXT816(4) * auVar2,8) != 0) {
    uVar4 = 0xffffffffffffffff;
  }
  uVar4 = FUN_144a7d36f(uVar4);
  *local_b8 = uVar4;
  local_c0 = param_1[3];
  local_c8 = *param_1;
  FUN_144e66860(*param_6,*param_8,param_2,param_3);
  local_c0 = param_1[3];
  local_c8 = param_1[1];
  FUN_144e66860(*local_b8,*param_9,param_4,param_5);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
}



// FUNCTION 144e66660 FUN_144e66660 body=479 status=ok
// SIG undefined FUN_144e66660(void)

void FUN_144e66660(undefined8 param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  longlong *local_180;
  longlong *local_178;
  int *local_170;
  int *local_168;
  int local_158 [2];
  longlong local_150;
  longlong local_148;
  int local_140 [2];
  undefined1 local_138 [96];
  undefined1 local_d8 [96];
  undefined1 local_78 [96];
  ulonglong local_18;
  ulonglong uVar9;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  puVar2 = (undefined4 *)FUN_144b67b20();
  uVar6 = 0;
  local_150 = 0;
  local_148 = 0;
  uVar3 = FUN_144b68200(param_1);
  local_168 = local_140;
  local_170 = local_158;
  local_178 = &local_148;
  local_180 = &local_150;
  local_188 = puVar2[3];
  FUN_144e66350(uVar3,*puVar2,puVar2[2],puVar2[1]);
  lVar4 = FUN_144b68200(param_1);
  lVar1 = local_148;
  iVar7 = *(int *)(lVar4 + 8);
  uVar5 = uVar6;
  if ((iVar7 == 0) || (iVar7 == 1)) {
    while (iVar7 = (int)uVar5, iVar7 < local_158[0]) {
      uVar6 = uVar6 + (longlong)*(int *)(local_148 + (longlong)iVar7 * 4) *
                      (longlong)*(int *)(local_150 + (longlong)iVar7 * 4);
      if (0x7fffffff < uVar6) {
        FUN_144e40f00(local_78,"Maximum number of tiles exceeded");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5340);
      }
      uVar5 = (ulonglong)(iVar7 + 1);
    }
  }
  else {
    uVar9 = uVar6;
    if (iVar7 == 2) {
      while (iVar7 = (int)uVar9, uVar9 = uVar6, iVar7 < local_158[0]) {
        while (iVar8 = (int)uVar9, iVar8 < local_140[0]) {
          uVar5 = uVar5 + (longlong)*(int *)(local_148 + (longlong)iVar8 * 4) *
                          (longlong)*(int *)(local_150 + (longlong)iVar7 * 4);
          if (0x7fffffff < uVar5) {
            FUN_144e40f00(local_d8,"Maximum number of tiles exceeded");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(local_d8,(ThrowInfo *)&DAT_14c6d5340);
          }
          uVar9 = (ulonglong)(iVar8 + 1);
        }
        uVar9 = (ulonglong)(iVar7 + 1);
      }
    }
    else if (iVar7 == 3) {
      FUN_144e40f00(local_138,"Bad level mode getting chunk offset table size");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_138,(ThrowInfo *)&DAT_14c6d5340);
    }
  }
  thunk_FUN_1400020a8(local_150);
  thunk_FUN_1400020a8(lVar1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1a8);
}



// FUNCTION 144e66860 FUN_144e66860 body=251 status=ok
// SIG undefined FUN_144e66860(void)

void FUN_144e66860(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  if (param_2 < 1) {
    return;
  }
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar6 = (ulonglong)param_5;
  iVar5 = 0;
  uVar4 = 1;
  do {
    if (iVar5 < 0) {
      FUN_144e40d70(local_88,"Argument not in valid range.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_88,(ThrowInfo *)&DAT_14c6d50e0);
    }
    iVar3 = (param_4 - param_3) + 1;
    iVar1 = iVar3 / (int)uVar4;
    if ((param_6 == 1) && ((int)(iVar1 * uVar4) < iVar3)) {
      iVar1 = iVar1 + 1;
    }
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    iVar5 = iVar5 + 1;
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    uVar2 = (longlong)iVar1 + -1 + uVar6;
    *param_1 = (int)(uVar2 / uVar6);
    param_1 = param_1 + 1;
  } while (iVar5 < param_2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8,uVar2 % uVar6);
}



// FUNCTION 144e66970 FUN_144e66970 body=11 status=ok
// SIG undefined FUN_144e66970(void)

void FUN_144e66970(undefined8 *param_1)

{
  *param_1 = Imf_3_2::GenericInputFile::vftable;
  return;
}



// FUNCTION 144e66980 FUN_144e66980 body=14 status=ok
// SIG undefined FUN_144e66980(void)

undefined8 * FUN_144e66980(undefined8 *param_1)

{
  *param_1 = Imf_3_2::GenericInputFile::vftable;
  return param_1;
}



// FUNCTION 144e66990 FUN_144e66990 body=455 status=ok
// SIG undefined FUN_144e66990(void)

void FUN_144e66990(undefined8 param_1,longlong *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  basic_ostream<char,std::char_traits<char>_> *pbVar3;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar4;
  undefined1 auStack_1a8 [32];
  uint local_188 [4];
  undefined1 local_178 [16];
  undefined1 local_168 [240];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  (**(code **)(*param_2 + 0x10))(param_2,local_188,4);
  uVar1 = local_188[0];
  (**(code **)(*param_2 + 0x10))(param_2,local_188,4);
  *param_3 = local_188[0];
  if (uVar1 != 0x1312f76) {
    FUN_144e41060(local_78,"File is not an image file.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d51d8);
  }
  if ((char)local_188[0] == '\x02') {
    if ((local_188[0] & 0xffffe100) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1a8);
    }
    FUN_144e47110();
    FUN_1470a639e(local_178,1);
    FUN_141302cc4(local_168,
                  "The file format version number\'s flag field contains unrecognized flags.");
    FUN_144e410c0(local_78,local_178);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d51d8);
  }
  FUN_144e47110();
  FUN_1470a639e(local_178,1);
  iVar2 = FUN_144e66ba0(*param_3);
  pbVar3 = (basic_ostream<char,std::char_traits<char>_> *)
           FUN_141302cc4(local_168,"Cannot read version ");
  pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar3,iVar2);
  pbVar3 = (basic_ostream<char,std::char_traits<char>_> *)
           FUN_141302cc4(pbVar4," image files.  Current file format version is ");
  pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar3,2);
  FUN_141302cc4(pbVar4,&DAT_149971530);
  FUN_144e410c0(local_78,local_178);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d51d8);
}



// FUNCTION 144e66b70 FUN_144e66b70 body=43 status=ok
// SIG undefined FUN_144e66b70(void)

undefined8 * FUN_144e66b70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::GenericInputFile::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 144e66ba0 FUN_144e66ba0 body=4 status=ok
// SIG undefined FUN_144e66ba0(void)

undefined1 FUN_144e66ba0(undefined1 param_1)

{
  return param_1;
}



// FUNCTION 144e66bb0 FUN_144e66bb0 body=196 status=ok
// SIG undefined FUN_144e66bb0(void)

undefined8 * FUN_144e66bb0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  void *_Dst;
  undefined8 *_Src;
  ulonglong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  _Src = param_2;
  if (7 < (ulonglong)param_2[3]) {
    _Src = (undefined8 *)*param_2;
  }
  uVar1 = param_2[2];
  if (uVar1 < 0x7fffffffffffffff) {
    param_1[3] = 7;
    if (uVar1 < 8) {
      param_1[2] = uVar1;
      uVar2 = _Src[1];
      *param_1 = *_Src;
      param_1[1] = uVar2;
    }
    else {
      uVar3 = uVar1 | 7;
      uVar4 = 0x7ffffffffffffffe;
      if ((uVar3 < 0x7fffffffffffffff) && (uVar4 = uVar3, uVar3 < 10)) {
        uVar4 = 10;
      }
      _Dst = (void *)FUN_145b28560(param_1,uVar4 + 1);
      *param_1 = _Dst;
      param_1[2] = uVar1;
      param_1[3] = uVar4;
      memcpy(_Dst,_Src,uVar1 * 2 + 2);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_146eb22ad();
}



// FUNCTION 144e66c80 FUN_144e66c80 body=60 status=ok
// SIG undefined FUN_144e66c80(void)

undefined8 * FUN_144e66c80(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::runtime_error::vftable;
  return param_1;
}



// FUNCTION 144e66cc0 FUN_144e66cc0 body=71 status=ok
// SIG undefined FUN_144e66cc0(void)

undefined8 * FUN_144e66cc0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined1 local_10;
  
  local_10 = 1;
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = param_2;
  __std_exception_copy(&local_18);
  *param_1 = std::range_error::vftable;
  return param_1;
}


