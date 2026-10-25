// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144e47c70 FUN_144e47c70 body=68 status=ok
// SIG undefined FUN_144e47c70(void)

undefined8 * FUN_144e47c70(undefined8 *param_1,undefined4 *param_2)

{
  FUN_144e472d0();
  *param_1 = Imf_3_2::TypedAttribute<Imath_3_1::Box<Imath_3_1::Vec2<int>_>_>::vftable;
  *(undefined4 *)(param_1 + 1) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 2) = param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x14) = param_2[3];
  return param_1;
}



// FUNCTION 144e47cc0 FUN_144e47cc0 body=15 status=ok
// SIG undefined FUN_144e47cc0(void)

void FUN_144e47cc0(undefined8 *param_1)

{
  *param_1 = Imf_3_2::TypedAttribute<Imath_3_1::Box<Imath_3_1::Vec2<int>_>_>::vftable;
  FUN_144e472e0();
  return;
}



// FUNCTION 144e47cd0 FUN_144e47cd0 body=5 status=ok
// SIG undefined FUN_144e47cd0(void)

longlong FUN_144e47cd0(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144e47ce0 FUN_144e47ce0 body=5 status=ok
// SIG undefined FUN_144e47ce0(void)

longlong FUN_144e47ce0(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144e47cf0 FUN_144e47cf0 body=8 status=ok
// SIG undefined FUN_144e47cf0(void)

undefined1 * FUN_144e47cf0(void)

{
  return &DAT_149972540;
}



// FUNCTION 144e47d00 FUN_144e47d00 body=104 status=ok
// SIG undefined FUN_144e47d00(void)

undefined8 * FUN_144e47d00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    FUN_144e472d0(puVar1);
    *puVar1 = Imf_3_2::TypedAttribute<Imath_3_1::Box<Imath_3_1::Vec2<int>_>_>::vftable;
    *(undefined4 *)(puVar1 + 1) = 0x7fffffff;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x7fffffff;
    *(undefined4 *)(puVar1 + 2) = 0x80000000;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0x80000000;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144e47d70 FUN_144e47d70 body=158 status=ok
// SIG undefined FUN_144e47d70(void)

longlong * FUN_144e47d70(undefined8 param_1)

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
    *plVar1 = (longlong)Imf_3_2::TypedAttribute<Imath_3_1::Box<Imath_3_1::Vec2<int>_>_>::vftable;
    *(undefined4 *)(plVar1 + 1) = 0x7fffffff;
    *(undefined4 *)((longlong)plVar1 + 0xc) = 0x7fffffff;
    *(undefined4 *)(plVar1 + 2) = 0x80000000;
    *(undefined4 *)((longlong)plVar1 + 0x14) = 0x80000000;
  }
  if (*(code **)(*plVar1 + 0x28) == FUN_144e48020) {
    FUN_144e48020();
    return plVar1;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 144e47e10 FUN_144e47e10 body=241 status=ok
// SIG undefined FUN_144e47e10(void)

void FUN_144e47e10(longlong param_1,longlong *param_2)

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
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  local_res8 = (undefined1)uVar1;
  local_res9 = (undefined1)((uint)uVar1 >> 8);
  local_resa = (undefined1)((uint)uVar1 >> 0x10);
  local_resb = (undefined1)((uint)uVar1 >> 0x18);
  (**(code **)(*param_2 + 8))(param_2,&local_res8,4);
  return;
}



// FUNCTION 144e47f10 FUN_144e47f10 body=267 status=ok
// SIG undefined FUN_144e47f10(void)

void FUN_144e47f10(longlong param_1,longlong *param_2)

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
  return;
}



// FUNCTION 144e48020 FUN_144e48020 body=147 status=ok
// SIG undefined FUN_144e48020(void)

void FUN_144e48020(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imath_3_1::Box<Imath_3_1::Vec2<int>_>_>::
                           RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar1 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar1 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(lVar1 + 0x14);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e480c0 FUN_144e480c0 body=19 status=ok
// SIG undefined FUN_144e480c0(void)

void FUN_144e480c0(void)

{
  FUN_144e475b0(&DAT_149972540,FUN_144e47d00);
  return;
}



// FUNCTION 144e480e0 FUN_144e480e0 body=62 status=ok
// SIG undefined FUN_144e480e0(void)

undefined8 * FUN_144e480e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::TypedAttribute<Imath_3_1::Box<Imath_3_1::Vec2<int>_>_>::vftable;
  FUN_144e472e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144e48120 FUN_144e48120 body=8 status=ok
// SIG undefined FUN_144e48120(void)

char * FUN_144e48120(void)

{
  return "box2f";
}



// FUNCTION 144e48130 FUN_144e48130 body=104 status=ok
// SIG undefined FUN_144e48130(void)

undefined8 * FUN_144e48130(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    FUN_144e472d0(puVar1);
    *puVar1 = Imf_3_2::TypedAttribute<Imath_3_1::Box<Imath_3_1::Vec2<float>_>_>::vftable;
    *(undefined4 *)(puVar1 + 1) = 0x7f7fffff;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x7f7fffff;
    *(undefined4 *)(puVar1 + 2) = 0xff7fffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xff7fffff;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144e481a0 FUN_144e481a0 body=158 status=ok
// SIG undefined FUN_144e481a0(void)

longlong * FUN_144e481a0(undefined8 param_1)

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
    *plVar1 = (longlong)Imf_3_2::TypedAttribute<Imath_3_1::Box<Imath_3_1::Vec2<float>_>_>::vftable;
    *(undefined4 *)(plVar1 + 1) = 0x7f7fffff;
    *(undefined4 *)((longlong)plVar1 + 0xc) = 0x7f7fffff;
    *(undefined4 *)(plVar1 + 2) = 0xff7fffff;
    *(undefined4 *)((longlong)plVar1 + 0x14) = 0xff7fffff;
  }
  if (*(code **)(*plVar1 + 0x28) == FUN_144e484b0) {
    FUN_144e484b0();
    return plVar1;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 144e48240 FUN_144e48240 body=289 status=ok
// SIG undefined FUN_144e48240(void)

void FUN_144e48240(longlong param_1,longlong *param_2)

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
  return;
}



// FUNCTION 144e48370 FUN_144e48370 body=315 status=ok
// SIG undefined FUN_144e48370(void)

void FUN_144e48370(longlong param_1,longlong *param_2)

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
  return;
}



// FUNCTION 144e484b0 FUN_144e484b0 body=147 status=ok
// SIG undefined FUN_144e484b0(void)

void FUN_144e484b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imath_3_1::Box<Imath_3_1::Vec2<float>_>_>::
                           RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar1 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar1 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(lVar1 + 0x14);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e48550 FUN_144e48550 body=19 status=ok
// SIG undefined FUN_144e48550(void)

void FUN_144e48550(void)

{
  FUN_144e475b0("box2f",FUN_144e48130);
  return;
}



// FUNCTION 144e48570 FUN_144e48570 body=62 status=ok
// SIG undefined FUN_144e48570(void)

undefined8 * FUN_144e48570(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::TypedAttribute<Imath_3_1::Box<Imath_3_1::Vec2<float>_>_>::vftable;
  FUN_144e472e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144e485b0 FUN_144e485b0 body=96 status=ok
// SIG undefined FUN_144e485b0(void)

undefined8 * FUN_144e485b0(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_144e472d0();
  *param_1 = Imf_3_2::TypedAttribute<Imf_3_2::ChannelList>::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = FUN_14494321d(0x130);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  param_1[1] = lVar1;
  return param_1;
}



// FUNCTION 144e48610 FUN_144e48610 body=44 status=ok
// SIG undefined FUN_144e48610(void)

void FUN_144e48610(undefined8 *param_1)

{
  *param_1 = Imf_3_2::TypedAttribute<Imf_3_2::ChannelList>::vftable;
  FUN_144e48cf0(param_1 + 1,param_1 + 1);
  FUN_144e472e0(param_1);
  return;
}



// FUNCTION 144e48640 FUN_144e48640 body=5 status=ok
// SIG undefined FUN_144e48640(void)

longlong FUN_144e48640(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144e48650 FUN_144e48650 body=5 status=ok
// SIG undefined FUN_144e48650(void)

longlong FUN_144e48650(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144e48660 FUN_144e48660 body=8 status=ok
// SIG undefined FUN_144e48660(void)

char * FUN_144e48660(void)

{
  return "chlist";
}



// FUNCTION 144e48670 FUN_144e48670 body=57 status=ok
// SIG undefined FUN_144e48670(void)

undefined8 FUN_144e48670(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_14494321d();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    uVar2 = FUN_144e485b0(puVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144e486b0 FUN_144e486b0 body=86 status=ok
// SIG undefined FUN_144e486b0(void)

longlong * FUN_144e486b0(undefined8 param_1)

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
    plVar2 = (longlong *)FUN_144e485b0(puVar1);
  }
  (**(code **)(*plVar2 + 0x28))(plVar2,param_1);
  return plVar2;
}



// FUNCTION 144e48710 FUN_144e48710 body=426 status=ok
// SIG undefined FUN_144e48710(void)

void FUN_144e48710(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10;
  undefined1 local_res11;
  undefined1 local_res12;
  undefined1 local_res13;
  undefined1 local_res20;
  undefined1 local_res21;
  undefined1 local_res22;
  undefined1 local_res23;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  longlong local_30;
  undefined1 local_28 [16];
  
  param_1 = param_1 + 8;
  FUN_144b65f20(param_1,&local_30);
  plVar3 = (longlong *)FUN_144b65f40(param_1,local_28);
  if (local_30 != *plVar3) {
    do {
      pcVar4 = (char *)(local_30 + 0x1c);
      cVar1 = *(char *)(local_30 + 0x1c);
      while (cVar1 != '\0') {
        (**(code **)(*param_2 + 8))(param_2,pcVar4,1);
        pcVar4 = pcVar4 + 1;
        cVar1 = *pcVar4;
      }
      (**(code **)(*param_2 + 8))(param_2,pcVar4,1);
      uVar2 = *(undefined4 *)(local_30 + 0x11c);
      local_res11 = (undefined1)((uint)uVar2 >> 8);
      local_res10 = (undefined1)uVar2;
      local_res12 = (undefined1)((uint)uVar2 >> 0x10);
      local_res13 = (undefined1)((uint)uVar2 >> 0x18);
      (**(code **)(*param_2 + 8))(param_2,&local_res10,4);
      local_res8[0] = *(char *)(local_30 + 0x128) != '\0';
      (**(code **)(*param_2 + 8))(param_2,local_res8,1);
      lVar5 = 3;
      do {
        local_res8[0] = 0;
        (**(code **)(*param_2 + 8))(param_2,local_res8,1);
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      uVar2 = *(undefined4 *)(local_30 + 0x120);
      local_res21 = (undefined1)((uint)uVar2 >> 8);
      local_res20 = (undefined1)uVar2;
      local_res22 = (undefined1)((uint)uVar2 >> 0x10);
      local_res23 = (undefined1)((uint)uVar2 >> 0x18);
      (**(code **)(*param_2 + 8))(param_2,&local_res20,4);
      uVar2 = *(undefined4 *)(local_30 + 0x124);
      local_37 = (undefined1)((uint)uVar2 >> 8);
      local_38 = (undefined1)uVar2;
      local_36 = (undefined1)((uint)uVar2 >> 0x10);
      local_35 = (undefined1)((uint)uVar2 >> 0x18);
      (**(code **)(*param_2 + 8))(param_2,&local_38,4);
      FUN_144b663b0(&local_30);
      plVar3 = (longlong *)FUN_144b65f40(param_1,local_28);
    } while (local_30 != *plVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000144e488b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2,&DAT_14996de1b,1);
  return;
}



// FUNCTION 144e488c0 FUN_144e488c0 body=565 status=ok
// SIG undefined FUN_144e488c0(void)

void FUN_144e488c0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  basic_ostream<char,std::char_traits<char>_> *this;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar5;
  char *pcVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_5e8 [32];
  undefined1 local_5c8;
  char local_5b8 [4];
  uint local_5b4;
  undefined4 local_5b0;
  undefined4 local_5ac;
  undefined1 local_5a8 [16];
  undefined1 local_598 [96];
  char local_538 [272];
  undefined1 local_428 [1008];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_5e8;
  do {
    pcVar6 = local_538;
    iVar7 = 0xff;
    do {
      (**(code **)(*param_2 + 0x10))(param_2,pcVar6,1);
      if (*pcVar6 == '\0') break;
      pcVar6 = pcVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    if (local_538[0] == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_5e8);
    }
    uVar3 = 0;
    while( true ) {
      if (0xff < uVar3) {
        FUN_1470a639e(local_538 + 0x100,1);
        uVar4 = FUN_141302cc4(local_428,"Invalid ");
        uVar4 = FUN_141302cc4(uVar4,"channel name");
        this = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_141302cc4(uVar4,": it is more than ");
        pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,0xff);
        FUN_141302cc4(pbVar5," characters long.");
        FUN_144e410c0(local_598,local_538 + 0x100);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_598,(ThrowInfo *)&DAT_14c6d51d8);
      }
      if (local_538[uVar3] == '\0') break;
      uVar3 = uVar3 + 1;
    }
    (**(code **)(*param_2 + 0x10))(param_2,&local_5b4,4);
    uVar1 = local_5b4;
    (**(code **)(*param_2 + 0x10))(param_2,local_5b8,1);
    bVar8 = local_5b8[0] != '\0';
    (**(code **)(*param_2 + 0x10))(param_2,local_538 + 0x100,3);
    (**(code **)(*param_2 + 0x10))(param_2,&local_5b0,4);
    uVar2 = local_5b0;
    (**(code **)(*param_2 + 0x10))(param_2,&local_5ac,4);
    if (2 < uVar1) {
      uVar1 = 3;
    }
    local_5c8 = bVar8;
    uVar4 = FUN_144b65b80(local_5a8,uVar1,uVar2,local_5ac);
    FUN_144b65ba0(param_1 + 8,local_538,uVar4);
  } while( true );
}



// FUNCTION 144e48b20 FUN_144e48b20 body=269 status=ok
// SIG undefined FUN_144e48b20(void)

void FUN_144e48b20(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = 0;
  lVar5 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imf_3_2::ChannelList>::RTTI_Type_Descriptor);
  if (lVar5 == 0) {
    FUN_144e416a0(local_88,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_88,(ThrowInfo *)&DAT_14c6d5050);
  }
  plVar6 = (longlong *)(param_1 + 8);
  if (plVar6 != (longlong *)(lVar5 + 8)) {
    lVar2 = *plVar6;
    cVar1 = *(char *)((longlong)*(longlong **)(lVar2 + 8) + 0x19);
    plVar4 = *(longlong **)(lVar2 + 8);
    while (cVar1 == '\0') {
      FUN_14698d0c2(plVar6,plVar6,plVar4[2]);
      plVar3 = (longlong *)*plVar4;
      thunk_FUN_1400020a8(plVar4,0x130);
      plVar4 = plVar3;
      cVar1 = *(char *)((longlong)plVar3 + 0x19);
    }
    *(longlong *)(lVar2 + 8) = lVar2;
    *(longlong *)lVar2 = lVar2;
    *(longlong *)(lVar2 + 0x10) = lVar2;
    *(undefined8 *)(param_1 + 0x10) = 0;
    FUN_14698ced2(plVar6,(longlong *)(lVar5 + 8));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
}



// FUNCTION 144e48c40 FUN_144e48c40 body=19 status=ok
// SIG undefined FUN_144e48c40(void)

void FUN_144e48c40(void)

{
  FUN_144e475b0("chlist",FUN_144e48670);
  return;
}



// FUNCTION 144e48c60 FUN_144e48c60 body=124 status=ok
// SIG undefined FUN_144e48c60(void)

void FUN_144e48c60(longlong *param_1,int param_2)

{
  char cVar1;
  undefined1 auStack_438 [32];
  undefined1 local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_438;
  for (; 0x3ff < param_2; param_2 = param_2 + -0x400) {
    cVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_418,0x400);
    if (cVar1 == '\0') goto LAB_144e48ccc;
  }
  if (0 < param_2) {
    (**(code **)(*param_1 + 0x10))(param_1,local_418,param_2);
  }
LAB_144e48ccc:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_438);
}



// FUNCTION 144e48cf0 FUN_144e48cf0 body=113 status=ok
// SIG undefined FUN_144e48cf0(void)

void FUN_144e48cf0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  plVar3 = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_14698d0c2(param_1,param_2,plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    thunk_FUN_1400020a8(plVar3,0x130);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  thunk_FUN_1400020a8(*param_1,0x130);
  return;
}



// FUNCTION 144e48d70 FUN_144e48d70 body=137 status=ok
// SIG undefined FUN_144e48d70(void)

undefined8 * FUN_144e48d70(undefined8 *param_1)

{
  undefined4 local_res10;
  undefined4 local_res14;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_144e472d0();
  *param_1 = Imf_3_2::TypedAttribute<Imf_3_2::Chromaticities>::vftable;
  local_res10 = 0x3ea01a37;
  local_res14 = 0x3ea872b0;
  local_res18 = 0x3e19999a;
  local_res1c = 0x3d75c28f;
  local_res20 = 0x3e99999a;
  local_res24 = 0x3f19999a;
  local_18 = 0x3f23d70a;
  local_14 = 0x3ea8f5c3;
  FUN_144b66ad0(param_1 + 1,&local_18,&local_res20,&local_res18,&local_res10);
  return param_1;
}



// FUNCTION 144e48e00 FUN_144e48e00 body=92 status=ok
// SIG undefined FUN_144e48e00(void)

undefined8 * FUN_144e48e00(undefined8 *param_1,undefined4 *param_2)

{
  FUN_144e472d0();
  *param_1 = Imf_3_2::TypedAttribute<Imf_3_2::Chromaticities>::vftable;
  *(undefined4 *)(param_1 + 1) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 2) = param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x14) = param_2[3];
  *(undefined4 *)(param_1 + 3) = param_2[4];
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_2[5];
  *(undefined4 *)(param_1 + 4) = param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x24) = param_2[7];
  return param_1;
}



// FUNCTION 144e48e60 FUN_144e48e60 body=15 status=ok
// SIG undefined FUN_144e48e60(void)

void FUN_144e48e60(undefined8 *param_1)

{
  *param_1 = Imf_3_2::TypedAttribute<Imf_3_2::Chromaticities>::vftable;
  FUN_144e472e0();
  return;
}



// FUNCTION 144e48e70 FUN_144e48e70 body=5 status=ok
// SIG undefined FUN_144e48e70(void)

longlong FUN_144e48e70(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144e48e80 FUN_144e48e80 body=8 status=ok
// SIG undefined FUN_144e48e80(void)

char * FUN_144e48e80(void)

{
  return "chromaticities";
}



// FUNCTION 144e48e90 FUN_144e48e90 body=8 status=ok
// SIG undefined FUN_144e48e90(void)

char * FUN_144e48e90(void)

{
  return "chromaticities";
}



// FUNCTION 144e48ea0 FUN_144e48ea0 body=61 status=ok
// SIG undefined FUN_144e48ea0(void)

undefined8 FUN_144e48ea0(void)

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
    uVar2 = FUN_144e48d70(puVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144e48ee0 FUN_144e48ee0 body=90 status=ok
// SIG undefined FUN_144e48ee0(void)

longlong * FUN_144e48ee0(undefined8 param_1)

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
    plVar2 = (longlong *)FUN_144e48d70(puVar1);
  }
  (**(code **)(*plVar2 + 0x28))(plVar2,param_1);
  return plVar2;
}



// FUNCTION 144e48f40 FUN_144e48f40 body=502 status=ok
// SIG undefined FUN_144e48f40(void)

void FUN_144e48f40(longlong param_1,longlong *param_2)

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
  return;
}



// FUNCTION 144e49140 FUN_144e49140 body=552 status=ok
// SIG undefined FUN_144e49140(void)

void FUN_144e49140(longlong param_1,longlong *param_2)

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
  return;
}



// FUNCTION 144e49370 FUN_144e49370 body=171 status=ok
// SIG undefined FUN_144e49370(void)

void FUN_144e49370(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imf_3_2::Chromaticities>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar1 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar1 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(lVar1 + 0x14);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar1 + 0x1c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar1 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar1 + 0x24);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e49430 FUN_144e49430 body=19 status=ok
// SIG undefined FUN_144e49430(void)

void FUN_144e49430(void)

{
  FUN_144e475b0("chromaticities",FUN_144e48ea0);
  return;
}



// FUNCTION 144e49450 FUN_144e49450 body=62 status=ok
// SIG undefined FUN_144e49450(void)

undefined8 * FUN_144e49450(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::TypedAttribute<Imf_3_2::Chromaticities>::vftable;
  FUN_144e472e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 144e49490 FUN_144e49490 body=50 status=ok
// SIG undefined FUN_144e49490(void)

undefined8 * FUN_144e49490(undefined8 *param_1,undefined4 *param_2)

{
  FUN_144e472d0();
  *param_1 = Imf_3_2::TypedAttribute<Imf_3_2::Compression>::vftable;
  *(undefined4 *)(param_1 + 1) = *param_2;
  return param_1;
}



// FUNCTION 144e494d0 FUN_144e494d0 body=15 status=ok
// SIG undefined FUN_144e494d0(void)

void FUN_144e494d0(undefined8 *param_1)

{
  *param_1 = Imf_3_2::TypedAttribute<Imf_3_2::Compression>::vftable;
  FUN_144e472e0();
  return;
}



// FUNCTION 144e494e0 FUN_144e494e0 body=5 status=ok
// SIG undefined FUN_144e494e0(void)

longlong FUN_144e494e0(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144e494f0 FUN_144e494f0 body=5 status=ok
// SIG undefined FUN_144e494f0(void)

longlong FUN_144e494f0(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144e49500 FUN_144e49500 body=8 status=ok
// SIG undefined FUN_144e49500(void)

char * FUN_144e49500(void)

{
  return "compression";
}



// FUNCTION 144e49510 FUN_144e49510 body=70 status=ok
// SIG undefined FUN_144e49510(void)

undefined8 * FUN_144e49510(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_144e472d0(puVar1);
    *puVar1 = Imf_3_2::TypedAttribute<Imf_3_2::Compression>::vftable;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144e49560 FUN_144e49560 body=133 status=ok
// SIG undefined FUN_144e49560(void)

longlong * FUN_144e49560(undefined8 param_1)

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
    *plVar1 = (longlong)Imf_3_2::TypedAttribute<Imf_3_2::Compression>::vftable;
  }
  if (*(code **)(*plVar1 + 0x28) == FUN_144e49660) {
    lVar2 = FUN_144e496f0(param_1);
    *(undefined4 *)(plVar1 + 1) = *(undefined4 *)(lVar2 + 8);
    return plVar1;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 144e495f0 FUN_144e495f0 body=40 status=ok
// SIG undefined FUN_144e495f0(void)

void FUN_144e495f0(longlong param_1,longlong *param_2)

{
  undefined1 local_res8 [32];
  
  local_res8[0] = *(undefined1 *)(param_1 + 8);
  (**(code **)(*param_2 + 8))(param_2,local_res8,1);
  return;
}



// FUNCTION 144e49620 FUN_144e49620 body=55 status=ok
// SIG undefined FUN_144e49620(void)

void FUN_144e49620(longlong param_1,longlong *param_2)

{
  uint uVar1;
  byte local_res8 [32];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,1);
  uVar1 = (uint)local_res8[0];
  if (9 < local_res8[0]) {
    uVar1 = 10;
  }
  *(uint *)(param_1 + 8) = uVar1;
  return;
}



// FUNCTION 144e49660 FUN_144e49660 body=126 status=ok
// SIG undefined FUN_144e49660(void)

void FUN_144e49660(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imf_3_2::Compression>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e496f0 FUN_144e496f0 body=109 status=ok
// SIG undefined FUN_144e496f0(void)

void FUN_144e496f0(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imf_3_2::Compression>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e49770 FUN_144e49770 body=19 status=ok
// SIG undefined FUN_144e49770(void)

void FUN_144e49770(void)

{
  FUN_144e475b0("compression",FUN_144e49510);
  return;
}



// FUNCTION 144e49790 FUN_144e49790 body=62 status=ok
// SIG undefined FUN_144e49790(void)

undefined8 * FUN_144e49790(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::TypedAttribute<Imf_3_2::Compression>::vftable;
  FUN_144e472e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144e497d0 FUN_144e497d0 body=18 status=ok
// SIG undefined FUN_144e497d0(void)

undefined8 * FUN_144e497d0(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = Imf_3_2::Compressor::vftable;
  return param_1;
}



// FUNCTION 144e497f0 FUN_144e497f0 body=11 status=ok
// SIG undefined FUN_144e497f0(void)

void FUN_144e497f0(undefined8 *param_1)

{
  *param_1 = Imf_3_2::Compressor::vftable;
  return;
}



// FUNCTION 144e49800 FUN_144e49800 body=6 status=ok
// SIG undefined FUN_144e49800(void)

undefined8 FUN_144e49800(void)

{
  return 1;
}



// FUNCTION 144e49810 FUN_144e49810 body=11 status=ok
// SIG undefined FUN_144e49810(void)

void FUN_144e49810(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144e49817. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}



// FUNCTION 144e49820 FUN_144e49820 body=11 status=ok
// SIG undefined FUN_144e49820(void)

void FUN_144e49820(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144e49827. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}



// FUNCTION 144e49830 FUN_144e49830 body=43 status=ok
// SIG undefined FUN_144e49830(void)

undefined8 * FUN_144e49830(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::Compressor::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144e49860 FUN_144e49860 body=33 status=ok
// SIG undefined FUN_144e49860(void)

ulonglong FUN_144e49860(undefined4 param_1)

{
  ulonglong in_RAX;
  
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    return CONCAT71((int7)(int3)((uint)param_1 >> 8),1);
  default:
    return in_RAX & 0xffffffffffffff00;
  }
}



// FUNCTION 144e498b0 FUN_144e498b0 body=20 status=ok
// SIG undefined FUN_144e498b0(void)

undefined1 FUN_144e498b0(int param_1)

{
  if (((param_1 != 0) && (param_1 != 1)) && (param_1 != 2)) {
    return 0;
  }
  return 1;
}



// FUNCTION 144e498d0 FUN_144e498d0 body=544 status=ok
// SIG undefined FUN_144e498d0(void)

undefined8 FUN_144e498d0(undefined4 param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint in_stack_ffffffffffffffe8;
  
  switch(param_1) {
  case 1:
    lVar1 = FUN_14494321d(0x28);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_14521a7d0(lVar1,param_3,param_2);
    }
    return uVar2;
  case 2:
    lVar1 = FUN_14494321d(0x38);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_14521ab10(lVar1,param_3,param_2,1);
    }
    break;
  case 3:
    lVar1 = FUN_14494321d(0x38);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_14521ab10(lVar1,param_3,param_2,0x10);
    }
    return uVar2;
  case 4:
    lVar1 = FUN_14494321d(0x58);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_145218d40(lVar1,param_3,param_2,0x20);
    }
    return uVar2;
  case 5:
    lVar1 = FUN_14494321d(0x40);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_145219d10(lVar1,param_3,param_2,0x10);
    }
    return uVar2;
  case 6:
    lVar1 = FUN_14494321d(0x58);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_145216fd0(lVar1,param_3,param_2,0x20,in_stack_ffffffffffffffe8 & 0xffffff00);
    }
    return uVar2;
  case 7:
    lVar1 = FUN_14494321d(0x58);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_145216fd0(lVar1,param_3,param_2,0x20,1);
    }
    return uVar2;
  case 8:
    lVar1 = FUN_14494321d(0x108);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_144e4eb40(lVar1,param_3,param_2 & 0xffffffff,0x20,0);
    }
    return uVar2;
  case 9:
    lVar1 = FUN_14494321d(0x108);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_144e4eb40(lVar1,param_3,param_2 & 0xffffffff,0x100,0);
    }
    return uVar2;
  default:
    return 0;
  }
  return uVar2;
}



// FUNCTION 144e49b20 FUN_144e49b20 body=509 status=ok
// SIG undefined FUN_144e49b20(void)

void FUN_144e49b20(undefined4 param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auStack_c8 [32];
  uint local_a8;
  longlong local_98;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  switch(param_1) {
  case 1:
    local_98 = FUN_14494321d(0x28);
    if (local_98 != 0) {
      if ((param_2 != 0) &&
         (auVar1._8_8_ = 0, auVar1._0_8_ = param_2,
         SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < param_3)) {
        FUN_144e47140(local_88,"Integer multiplication overflow.");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_88,(ThrowInfo *)&DAT_14c6d5240);
      }
      FUN_14521a7d0(local_98,param_4,param_3 * param_2);
    }
    break;
  case 2:
  case 3:
    local_98 = FUN_14494321d(0x38);
    if (local_98 != 0) {
      FUN_14521ab10(local_98,param_4,param_2,param_3);
    }
    break;
  case 4:
    local_98 = FUN_14494321d(0x58);
    if (local_98 != 0) {
      FUN_145218d40(local_98,param_4,param_2,param_3);
    }
    break;
  case 5:
    local_98 = FUN_14494321d(0x40);
    if (local_98 != 0) {
      FUN_145219d10(local_98,param_4,param_2,param_3);
    }
    break;
  case 6:
    local_98 = FUN_14494321d(0x58);
    if (local_98 != 0) {
      local_a8 = local_a8 & 0xffffff00;
      FUN_145216fd0(local_98,param_4,param_2,param_3);
    }
    break;
  case 7:
    local_98 = FUN_14494321d(0x58);
    if (local_98 != 0) {
      local_a8 = CONCAT31(local_a8._1_3_,1);
      FUN_145216fd0(local_98,param_4,param_2,param_3);
    }
    break;
  case 8:
    local_98 = FUN_14494321d(0x108);
    if (local_98 != 0) {
      local_a8 = 1;
      FUN_144e4eb40(local_98,param_4,param_2 & 0xffffffff,param_3 & 0xffffffff);
    }
    break;
  case 9:
    local_98 = FUN_14494321d(0x108);
    if (local_98 != 0) {
      local_a8 = 0;
      FUN_144e4eb40(local_98,param_4,param_2 & 0xffffffff,param_3 & 0xffffffff);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_c8);
}



// FUNCTION 144e49d50 FUN_144e49d50 body=174 status=ok
// SIG undefined FUN_144e49d50(void)

void FUN_144e49d50(undefined4 param_1)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  switch(param_1) {
  case 0:
  case 1:
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  case 3:
  case 5:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  case 4:
  case 6:
  case 7:
  case 8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  case 9:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  default:
    FUN_144e40d70(local_78,"Unknown compression type");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
  }
}



// FUNCTION 144e49e50 FUN_144e49e50 body=8 status=ok
// SIG undefined FUN_144e49e50(void)

char * FUN_144e49e50(void)

{
  return "deepImageState";
}



// FUNCTION 144e49e60 FUN_144e49e60 body=70 status=ok
// SIG undefined FUN_144e49e60(void)

undefined8 * FUN_144e49e60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_144e472d0(puVar1);
    *puVar1 = Imf_3_2::TypedAttribute<Imf_3_2::DeepImageState>::vftable;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144e49eb0 FUN_144e49eb0 body=133 status=ok
// SIG undefined FUN_144e49eb0(void)

longlong * FUN_144e49eb0(undefined8 param_1)

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
    *plVar1 = (longlong)Imf_3_2::TypedAttribute<Imf_3_2::DeepImageState>::vftable;
  }
  if (*(code **)(*plVar1 + 0x28) == FUN_144e49fa0) {
    lVar2 = FUN_144e4a030(param_1);
    *(undefined4 *)(plVar1 + 1) = *(undefined4 *)(lVar2 + 8);
    return plVar1;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 144e49f40 FUN_144e49f40 body=40 status=ok
// SIG undefined FUN_144e49f40(void)

void FUN_144e49f40(longlong param_1,longlong *param_2)

{
  undefined1 local_res8 [32];
  
  local_res8[0] = *(undefined1 *)(param_1 + 8);
  (**(code **)(*param_2 + 8))(param_2,local_res8,1);
  return;
}



// FUNCTION 144e49f70 FUN_144e49f70 body=46 status=ok
// SIG undefined FUN_144e49f70(void)

void FUN_144e49f70(longlong param_1,longlong *param_2)

{
  byte local_res8 [32];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,1);
  *(uint *)(param_1 + 8) = (uint)local_res8[0];
  return;
}



// FUNCTION 144e49fa0 FUN_144e49fa0 body=126 status=ok
// SIG undefined FUN_144e49fa0(void)

void FUN_144e49fa0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imf_3_2::DeepImageState>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e4a030 FUN_144e4a030 body=109 status=ok
// SIG undefined FUN_144e4a030(void)

void FUN_144e4a030(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imf_3_2::DeepImageState>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e4a0b0 FUN_144e4a0b0 body=19 status=ok
// SIG undefined FUN_144e4a0b0(void)

void FUN_144e4a0b0(void)

{
  FUN_144e475b0("deepImageState",FUN_144e49e60);
  return;
}



// FUNCTION 144e4a0d0 FUN_144e4a0d0 body=62 status=ok
// SIG undefined FUN_144e4a0d0(void)

undefined8 * FUN_144e4a0d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::TypedAttribute<Imf_3_2::DeepImageState>::vftable;
  FUN_144e472e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144e4a110 FUN_144e4a110 body=8 status=ok
// SIG undefined FUN_144e4a110(void)

char * FUN_144e4a110(void)

{
  return "double";
}



// FUNCTION 144e4a120 FUN_144e4a120 body=70 status=ok
// SIG undefined FUN_144e4a120(void)

undefined8 * FUN_144e4a120(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_144e472d0(puVar1);
    *puVar1 = Imf_3_2::TypedAttribute<double>::vftable;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144e4a170 FUN_144e4a170 body=135 status=ok
// SIG undefined FUN_144e4a170(void)

longlong * FUN_144e4a170(undefined8 param_1)

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
    *plVar1 = (longlong)Imf_3_2::TypedAttribute<double>::vftable;
  }
  if (*(code **)(*plVar1 + 0x28) == FUN_144e4a350) {
    lVar2 = FUN_144e4a3e0(param_1);
    plVar1[1] = *(longlong *)(lVar2 + 8);
    return plVar1;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 144e4a200 FUN_144e4a200 body=149 status=ok
// SIG undefined FUN_144e4a200(void)

void FUN_144e4a200(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 auStack_38 [32];
  undefined1 local_18 [7];
  undefined1 uStack_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = (undefined1)((ulonglong)uVar1 >> 0x38);
  local_18 = (undefined1  [7])((uint7)(ushort)((ulonglong)uVar1 >> 0x20) << 0x20);
  _local_18 = CONCAT17(uVar2,local_18);
  local_18._0_4_ = (undefined4)uVar1;
  local_18 = (undefined1  [7])CONCAT16((char)((ulonglong)uVar1 >> 0x30),local_18._0_6_);
  _local_18 = CONCAT17(uVar2,local_18);
  (**(code **)(*param_2 + 8))(param_2,local_18,8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 144e4a2a0 FUN_144e4a2a0 body=165 status=ok
// SIG undefined FUN_144e4a2a0(void)

void FUN_144e4a2a0(longlong param_1,longlong *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_2 + 0x10))(param_2,&local_18,8);
  *(undefined8 *)(param_1 + 8) = local_18;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 144e4a350 FUN_144e4a350 body=128 status=ok
// SIG undefined FUN_144e4a350(void)

void FUN_144e4a350(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<double>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar1 + 8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e4a3e0 FUN_144e4a3e0 body=109 status=ok
// SIG undefined FUN_144e4a3e0(void)

void FUN_144e4a3e0(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<double>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e4a460 FUN_144e4a460 body=19 status=ok
// SIG undefined FUN_144e4a460(void)

void FUN_144e4a460(void)

{
  FUN_144e475b0("double",FUN_144e4a120);
  return;
}



// FUNCTION 144e4a480 FUN_144e4a480 body=62 status=ok
// SIG undefined FUN_144e4a480(void)

undefined8 * FUN_144e4a480(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::TypedAttribute<double>::vftable;
  FUN_144e472e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144e4a4c0 FUN_144e4a4c0 body=144 status=ok
// SIG undefined FUN_144e4a4c0(void)

void FUN_144e4a4c0(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 auStack_38 [32];
  undefined1 local_18 [7];
  undefined1 uStack_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = (undefined1)((ulonglong)param_2 >> 0x38);
  local_18 = (undefined1  [7])((uint7)(ushort)((ulonglong)param_2 >> 0x20) << 0x20);
  _local_18 = CONCAT17(uVar1,local_18);
  local_18._0_4_ = (undefined4)param_2;
  local_18 = (undefined1  [7])CONCAT16((char)((ulonglong)param_2 >> 0x30),local_18._0_6_);
  _local_18 = CONCAT17(uVar1,local_18);
  (**(code **)(*param_1 + 8))(param_1,local_18,8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 144e4a560 FUN_144e4a560 body=146 status=ok
// SIG undefined FUN_144e4a560(void)

void FUN_144e4a560(longlong *param_1,undefined8 *param_2)

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



// FUNCTION 144e4a600 FUN_144e4a600 body=34 status=ok
// SIG undefined FUN_144e4a600(void)

void FUN_144e4a600(char *param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  while (pcVar1 = pcVar2 + 1, pcVar1 < param_1 + param_2) {
    *pcVar1 = *pcVar1 + *pcVar2 + -0x80;
    pcVar2 = pcVar1;
  }
  return;
}



// FUNCTION 144e4a630 FUN_144e4a630 body=69 status=ok
// SIG undefined FUN_144e4a630(void)

void FUN_144e4a630(undefined1 *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  
  puVar1 = param_3 + param_2;
  puVar3 = param_1 + (param_2 + 1U >> 1);
  while( true ) {
    if (puVar1 <= param_3) {
      return;
    }
    uVar2 = *param_1;
    param_1 = param_1 + 1;
    *param_3 = uVar2;
    if (puVar1 <= param_3 + 1) break;
    uVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_3[1] = uVar2;
    param_3 = param_3 + 2;
  }
  return;
}



// FUNCTION 144e4a680 FUN_144e4a680 body=45 status=ok
// SIG undefined FUN_144e4a680(void)

undefined8 * FUN_144e4a680(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = param_3;
  uVar1 = FUN_144a7d36f(param_2);
  param_1[1] = uVar1;
  return param_1;
}



// FUNCTION 144e4a6b0 FUN_144e4a6b0 body=140 status=ok
// SIG undefined FUN_144e4a6b0(void)

void FUN_144e4a6b0(longlong *param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined4 *)(param_1 + 2) = param_4;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = 0;
  if ((param_2 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_2,
     auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff), uVar4 = SUB168(auVar2 % auVar1,0),
     SUB168(auVar2 / auVar1,0) < param_3)) {
    FUN_144e47140(local_78,"Integer multiplication overflow.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5240);
  }
  *param_1 = param_2 * param_3;
  lVar3 = FUN_144a7d36f(param_2 * param_3,uVar4);
  param_1[1] = lVar3;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 144e4a750 FUN_144e4a750 body=14 status=ok
// SIG undefined FUN_144e4a750(void)

void FUN_144e4a750(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
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



// FUNCTION 144e4a760 FUN_144e4a760 body=4 status=ok
// SIG undefined FUN_144e4a760(void)

undefined8 FUN_144e4a760(undefined8 *param_1)

{
  return *param_1;
}



// FUNCTION 144e4a770 FUN_144e4a770 body=8 status=ok
// SIG undefined FUN_144e4a770(void)

void FUN_144e4a770(undefined8 *param_1)

{
  FUN_14521ad00(*param_1);
  return;
}



// FUNCTION 144e4a780 FUN_144e4a780 body=274 status=ok
// SIG undefined FUN_144e4a780(void)

void FUN_144e4a780(undefined8 *param_1,undefined1 *param_2,int param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  char *pcVar2;
  char cVar3;
  undefined1 *puVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  undefined1 local_98 [16];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar4 = (undefined1 *)param_1[1];
  lVar9 = (longlong)param_3;
  puVar1 = param_2 + lVar9;
  puVar8 = puVar4 + (param_3 + 1) / 2;
  for (; param_2 < puVar1; param_2 = param_2 + 2) {
    *puVar4 = *param_2;
    puVar4 = puVar4 + 1;
    if (puVar1 <= param_2 + 1) break;
    *puVar8 = param_2[1];
    puVar8 = puVar8 + 1;
  }
  pcVar5 = (char *)param_1[1];
  pcVar2 = pcVar5 + lVar9;
  cVar6 = *pcVar5;
  while (pcVar5 = pcVar5 + 1, pcVar5 < pcVar2) {
    cVar3 = *pcVar5;
    *pcVar5 = (cVar3 - cVar6) + -0x80;
    cVar6 = cVar3;
  }
  local_b0 = FUN_14521ad00(*param_1);
  local_a8 = local_98;
  local_b8 = param_4;
  iVar7 = FUN_14521ad50(0,*(undefined4 *)(param_1 + 2),param_1[1],lVar9);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_d8);
  }
  FUN_144e408c0(local_88,"Data compression failed.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_88,(ThrowInfo *)&DAT_14c6d53a8);
}



// FUNCTION 144e4a8a0 FUN_144e4a8a0 body=171 status=ok
// SIG undefined FUN_144e4a8a0(void)

void FUN_144e4a8a0(undefined8 *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *local_a0;
  longlong local_98 [2];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = local_98;
  local_a8 = *param_1;
  local_98[0] = 0;
  iVar1 = FUN_14521ae20(0,param_2,(longlong)param_3,param_1[1]);
  if (iVar1 == 0) {
    if (local_98[0] != 0) {
      (*(code *)PTR_FUN_14c709d70)(param_1[1]);
      (*(code *)PTR_FUN_14c709d78)(param_1[1],local_98[0],param_4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_c8);
  }
  FUN_144e41060(local_88,"Data decompression failed.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_88,(ThrowInfo *)&DAT_14c6d51d8);
}



// FUNCTION 144e4a960 FUN_144e4a960 body=61 status=ok
// SIG undefined FUN_144e4a960(void)

void FUN_144e4a960(void)

{
  char local_res8 [3];
  char local_resb;
  
  FUN_14521ac90(local_res8);
  if (local_resb != '\0') {
    PTR_FUN_14c709d70 = &LAB_144e4a9a0;
  }
  if (local_res8[0] != '\0') {
    PTR_FUN_14c709d78 = &LAB_144e4aa60;
  }
  return;
}



// FUNCTION 144e4aaf0 FUN_144e4aaf0 body=1753 status=ok
// SIG undefined FUN_144e4aaf0(void)

void FUN_144e4aaf0(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar3 = cosf(0.7853975);
  fVar3 = fVar3 * 0.5;
  fVar4 = cosf(0.19634938);
  fVar4 = fVar4 * 0.5;
  fVar5 = cosf(0.39269876);
  fVar5 = fVar5 * 0.5;
  fVar6 = cosf(0.58904815);
  fVar6 = fVar6 * 0.5;
  fVar7 = cosf(0.9817469);
  fVar7 = fVar7 * 0.5;
  fVar8 = cosf(1.1780963);
  fVar8 = fVar8 * 0.5;
  fVar9 = cosf(1.3744457);
  pfVar1 = (float *)(param_1 + 0x14);
  fVar9 = fVar9 * 0.5;
  lVar2 = 8;
  do {
    fVar10 = pfVar1[-2];
    fVar15 = pfVar1[-4];
    fVar11 = *pfVar1;
    fVar12 = pfVar1[2];
    fVar17 = fVar10 * fVar6 + fVar15 * fVar4 + fVar11 * fVar7 + fVar12 * fVar9;
    fVar16 = ((fVar15 * fVar6 - fVar10 * fVar9) - fVar11 * fVar4) - fVar12 * fVar7;
    fVar14 = (fVar15 * fVar7 - fVar10 * fVar4) + fVar11 * fVar9 + fVar12 * fVar6;
    fVar18 = ((fVar15 * fVar9 - fVar10 * fVar7) + fVar11 * fVar6) - fVar12 * fVar4;
    fVar10 = pfVar1[-3] * fVar5 + pfVar1[1] * fVar8;
    fVar15 = pfVar1[-3] * fVar8 - pfVar1[1] * fVar5;
    fVar12 = (pfVar1[-5] - pfVar1[-1]) * fVar3;
    fVar13 = (pfVar1[-5] + pfVar1[-1]) * fVar3;
    fVar11 = fVar15 + fVar12;
    fVar12 = fVar12 - fVar15;
    fVar15 = fVar10 + fVar13;
    fVar13 = fVar13 - fVar10;
    pfVar1[-4] = fVar16 + fVar11;
    pfVar1[-5] = fVar17 + fVar15;
    pfVar1[-2] = fVar18 + fVar13;
    pfVar1[-3] = fVar14 + fVar12;
    pfVar1[-1] = fVar13 - fVar18;
    *pfVar1 = fVar12 - fVar14;
    pfVar1[1] = fVar11 - fVar16;
    pfVar1[2] = fVar15 - fVar17;
    pfVar1 = pfVar1 + 8;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  pfVar1 = (float *)(param_1 + 0x40);
  lVar2 = 4;
  do {
    fVar10 = pfVar1[8];
    fVar15 = pfVar1[0x18];
    fVar11 = pfVar1[0x28];
    fVar12 = pfVar1[-8];
    fVar19 = fVar10 * fVar6 + fVar12 * fVar4 + fVar15 * fVar7 + fVar11 * fVar9;
    fVar17 = ((fVar12 * fVar6 - fVar10 * fVar9) - fVar15 * fVar4) - fVar11 * fVar7;
    fVar13 = (pfVar1[-0x10] + pfVar1[0x10]) * fVar3;
    fVar14 = (pfVar1[-0x10] - pfVar1[0x10]) * fVar3;
    fVar18 = ((fVar12 * fVar9 - fVar10 * fVar7) + fVar15 * fVar6) - fVar11 * fVar4;
    fVar16 = (fVar12 * fVar7 - fVar10 * fVar4) + fVar15 * fVar9 + fVar11 * fVar6;
    fVar10 = pfVar1[0x20] * fVar8 + *pfVar1 * fVar5;
    fVar15 = *pfVar1 * fVar8 - pfVar1[0x20] * fVar5;
    fVar12 = fVar10 + fVar13;
    fVar13 = fVar13 - fVar10;
    fVar11 = fVar15 + fVar14;
    fVar14 = fVar14 - fVar15;
    fVar10 = pfVar1[-7];
    pfVar1[0x20] = fVar11 - fVar17;
    fVar15 = pfVar1[0x19];
    pfVar1[0x10] = fVar13 - fVar18;
    pfVar1[-8] = fVar17 + fVar11;
    *pfVar1 = fVar16 + fVar14;
    pfVar1[-0x10] = fVar19 + fVar12;
    pfVar1[8] = fVar18 + fVar13;
    fVar11 = pfVar1[9];
    pfVar1[0x28] = fVar12 - fVar19;
    fVar12 = pfVar1[0x29];
    pfVar1[0x18] = fVar14 - fVar16;
    fVar18 = fVar11 * fVar6 + fVar10 * fVar4 + fVar15 * fVar7 + fVar12 * fVar9;
    fVar16 = ((fVar10 * fVar6 - fVar11 * fVar9) - fVar15 * fVar4) - fVar12 * fVar7;
    fVar14 = (fVar10 * fVar7 - fVar11 * fVar4) + fVar15 * fVar9 + fVar12 * fVar6;
    fVar17 = ((fVar10 * fVar9 - fVar11 * fVar7) + fVar15 * fVar6) - fVar12 * fVar4;
    fVar11 = (pfVar1[0x11] + pfVar1[-0xf]) * fVar3;
    fVar10 = pfVar1[0x21] * fVar8 + pfVar1[1] * fVar5;
    fVar12 = (pfVar1[-0xf] - pfVar1[0x11]) * fVar3;
    fVar13 = pfVar1[1] * fVar8 - pfVar1[0x21] * fVar5;
    fVar15 = fVar10 + fVar11;
    fVar11 = fVar11 - fVar10;
    fVar10 = fVar13 + fVar12;
    fVar12 = fVar12 - fVar13;
    pfVar1[0x29] = fVar15 - fVar18;
    pfVar1[0x21] = fVar10 - fVar16;
    pfVar1[0x19] = fVar12 - fVar14;
    pfVar1[0x11] = fVar11 - fVar17;
    pfVar1[-0xf] = fVar18 + fVar15;
    pfVar1[9] = fVar17 + fVar11;
    pfVar1[-7] = fVar16 + fVar10;
    pfVar1[1] = fVar14 + fVar12;
    pfVar1 = pfVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 144e4b1d0 FUN_144e4b1d0 body=1753 status=ok
// SIG undefined FUN_144e4b1d0(void)

void FUN_144e4b1d0(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar3 = cosf(0.7853975);
  fVar3 = fVar3 * 0.5;
  fVar4 = cosf(0.19634938);
  fVar4 = fVar4 * 0.5;
  fVar5 = cosf(0.39269876);
  fVar5 = fVar5 * 0.5;
  fVar6 = cosf(0.58904815);
  fVar6 = fVar6 * 0.5;
  fVar7 = cosf(0.9817469);
  fVar7 = fVar7 * 0.5;
  fVar8 = cosf(1.1780963);
  fVar8 = fVar8 * 0.5;
  fVar9 = cosf(1.3744457);
  pfVar1 = (float *)(param_1 + 0x14);
  fVar9 = fVar9 * 0.5;
  lVar2 = 7;
  do {
    fVar10 = pfVar1[-2];
    fVar15 = pfVar1[-4];
    fVar11 = *pfVar1;
    fVar12 = pfVar1[2];
    fVar17 = fVar10 * fVar6 + fVar15 * fVar4 + fVar11 * fVar7 + fVar12 * fVar9;
    fVar16 = ((fVar15 * fVar6 - fVar10 * fVar9) - fVar11 * fVar4) - fVar12 * fVar7;
    fVar14 = (fVar15 * fVar7 - fVar10 * fVar4) + fVar11 * fVar9 + fVar12 * fVar6;
    fVar18 = ((fVar15 * fVar9 - fVar10 * fVar7) + fVar11 * fVar6) - fVar12 * fVar4;
    fVar10 = pfVar1[-3] * fVar5 + pfVar1[1] * fVar8;
    fVar15 = pfVar1[-3] * fVar8 - pfVar1[1] * fVar5;
    fVar12 = (pfVar1[-5] - pfVar1[-1]) * fVar3;
    fVar13 = (pfVar1[-5] + pfVar1[-1]) * fVar3;
    fVar11 = fVar15 + fVar12;
    fVar12 = fVar12 - fVar15;
    fVar15 = fVar10 + fVar13;
    fVar13 = fVar13 - fVar10;
    pfVar1[-4] = fVar16 + fVar11;
    pfVar1[-5] = fVar17 + fVar15;
    pfVar1[-2] = fVar18 + fVar13;
    pfVar1[-3] = fVar14 + fVar12;
    pfVar1[-1] = fVar13 - fVar18;
    *pfVar1 = fVar12 - fVar14;
    pfVar1[1] = fVar11 - fVar16;
    pfVar1[2] = fVar15 - fVar17;
    pfVar1 = pfVar1 + 8;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  pfVar1 = (float *)(param_1 + 0x40);
  lVar2 = 4;
  do {
    fVar10 = pfVar1[8];
    fVar15 = pfVar1[0x18];
    fVar11 = pfVar1[0x28];
    fVar12 = pfVar1[-8];
    fVar19 = fVar10 * fVar6 + fVar12 * fVar4 + fVar15 * fVar7 + fVar11 * fVar9;
    fVar17 = ((fVar12 * fVar6 - fVar10 * fVar9) - fVar15 * fVar4) - fVar11 * fVar7;
    fVar13 = (pfVar1[-0x10] + pfVar1[0x10]) * fVar3;
    fVar14 = (pfVar1[-0x10] - pfVar1[0x10]) * fVar3;
    fVar18 = ((fVar12 * fVar9 - fVar10 * fVar7) + fVar15 * fVar6) - fVar11 * fVar4;
    fVar16 = (fVar12 * fVar7 - fVar10 * fVar4) + fVar15 * fVar9 + fVar11 * fVar6;
    fVar10 = pfVar1[0x20] * fVar8 + *pfVar1 * fVar5;
    fVar15 = *pfVar1 * fVar8 - pfVar1[0x20] * fVar5;
    fVar12 = fVar10 + fVar13;
    fVar13 = fVar13 - fVar10;
    fVar11 = fVar15 + fVar14;
    fVar14 = fVar14 - fVar15;
    fVar10 = pfVar1[-7];
    pfVar1[0x20] = fVar11 - fVar17;
    fVar15 = pfVar1[0x19];
    pfVar1[0x10] = fVar13 - fVar18;
    pfVar1[-8] = fVar17 + fVar11;
    *pfVar1 = fVar16 + fVar14;
    pfVar1[-0x10] = fVar19 + fVar12;
    pfVar1[8] = fVar18 + fVar13;
    fVar11 = pfVar1[9];
    pfVar1[0x28] = fVar12 - fVar19;
    fVar12 = pfVar1[0x29];
    pfVar1[0x18] = fVar14 - fVar16;
    fVar18 = fVar11 * fVar6 + fVar10 * fVar4 + fVar15 * fVar7 + fVar12 * fVar9;
    fVar16 = ((fVar10 * fVar6 - fVar11 * fVar9) - fVar15 * fVar4) - fVar12 * fVar7;
    fVar14 = (fVar10 * fVar7 - fVar11 * fVar4) + fVar15 * fVar9 + fVar12 * fVar6;
    fVar17 = ((fVar10 * fVar9 - fVar11 * fVar7) + fVar15 * fVar6) - fVar12 * fVar4;
    fVar11 = (pfVar1[0x11] + pfVar1[-0xf]) * fVar3;
    fVar10 = pfVar1[0x21] * fVar8 + pfVar1[1] * fVar5;
    fVar12 = (pfVar1[-0xf] - pfVar1[0x11]) * fVar3;
    fVar13 = pfVar1[1] * fVar8 - pfVar1[0x21] * fVar5;
    fVar15 = fVar10 + fVar11;
    fVar11 = fVar11 - fVar10;
    fVar10 = fVar13 + fVar12;
    fVar12 = fVar12 - fVar13;
    pfVar1[0x29] = fVar15 - fVar18;
    pfVar1[0x21] = fVar10 - fVar16;
    pfVar1[0x19] = fVar12 - fVar14;
    pfVar1[0x11] = fVar11 - fVar17;
    pfVar1[-0xf] = fVar18 + fVar15;
    pfVar1[9] = fVar17 + fVar11;
    pfVar1[-7] = fVar16 + fVar10;
    pfVar1[1] = fVar14 + fVar12;
    pfVar1 = pfVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 144e4b8b0 FUN_144e4b8b0 body=1753 status=ok
// SIG undefined FUN_144e4b8b0(void)

void FUN_144e4b8b0(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar3 = cosf(0.7853975);
  fVar3 = fVar3 * 0.5;
  fVar4 = cosf(0.19634938);
  fVar4 = fVar4 * 0.5;
  fVar5 = cosf(0.39269876);
  fVar5 = fVar5 * 0.5;
  fVar6 = cosf(0.58904815);
  fVar6 = fVar6 * 0.5;
  fVar7 = cosf(0.9817469);
  fVar7 = fVar7 * 0.5;
  fVar8 = cosf(1.1780963);
  fVar8 = fVar8 * 0.5;
  fVar9 = cosf(1.3744457);
  pfVar1 = (float *)(param_1 + 0x14);
  fVar9 = fVar9 * 0.5;
  lVar2 = 6;
  do {
    fVar10 = pfVar1[-2];
    fVar15 = pfVar1[-4];
    fVar11 = *pfVar1;
    fVar12 = pfVar1[2];
    fVar17 = fVar10 * fVar6 + fVar15 * fVar4 + fVar11 * fVar7 + fVar12 * fVar9;
    fVar16 = ((fVar15 * fVar6 - fVar10 * fVar9) - fVar11 * fVar4) - fVar12 * fVar7;
    fVar14 = (fVar15 * fVar7 - fVar10 * fVar4) + fVar11 * fVar9 + fVar12 * fVar6;
    fVar18 = ((fVar15 * fVar9 - fVar10 * fVar7) + fVar11 * fVar6) - fVar12 * fVar4;
    fVar10 = pfVar1[-3] * fVar5 + pfVar1[1] * fVar8;
    fVar15 = pfVar1[-3] * fVar8 - pfVar1[1] * fVar5;
    fVar12 = (pfVar1[-5] - pfVar1[-1]) * fVar3;
    fVar13 = (pfVar1[-5] + pfVar1[-1]) * fVar3;
    fVar11 = fVar15 + fVar12;
    fVar12 = fVar12 - fVar15;
    fVar15 = fVar10 + fVar13;
    fVar13 = fVar13 - fVar10;
    pfVar1[-4] = fVar16 + fVar11;
    pfVar1[-5] = fVar17 + fVar15;
    pfVar1[-2] = fVar18 + fVar13;
    pfVar1[-3] = fVar14 + fVar12;
    pfVar1[-1] = fVar13 - fVar18;
    *pfVar1 = fVar12 - fVar14;
    pfVar1[1] = fVar11 - fVar16;
    pfVar1[2] = fVar15 - fVar17;
    pfVar1 = pfVar1 + 8;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  pfVar1 = (float *)(param_1 + 0x40);
  lVar2 = 4;
  do {
    fVar10 = pfVar1[8];
    fVar15 = pfVar1[0x18];
    fVar11 = pfVar1[0x28];
    fVar12 = pfVar1[-8];
    fVar19 = fVar10 * fVar6 + fVar12 * fVar4 + fVar15 * fVar7 + fVar11 * fVar9;
    fVar17 = ((fVar12 * fVar6 - fVar10 * fVar9) - fVar15 * fVar4) - fVar11 * fVar7;
    fVar13 = (pfVar1[-0x10] + pfVar1[0x10]) * fVar3;
    fVar14 = (pfVar1[-0x10] - pfVar1[0x10]) * fVar3;
    fVar18 = ((fVar12 * fVar9 - fVar10 * fVar7) + fVar15 * fVar6) - fVar11 * fVar4;
    fVar16 = (fVar12 * fVar7 - fVar10 * fVar4) + fVar15 * fVar9 + fVar11 * fVar6;
    fVar10 = pfVar1[0x20] * fVar8 + *pfVar1 * fVar5;
    fVar15 = *pfVar1 * fVar8 - pfVar1[0x20] * fVar5;
    fVar12 = fVar10 + fVar13;
    fVar13 = fVar13 - fVar10;
    fVar11 = fVar15 + fVar14;
    fVar14 = fVar14 - fVar15;
    fVar10 = pfVar1[-7];
    pfVar1[0x20] = fVar11 - fVar17;
    fVar15 = pfVar1[0x19];
    pfVar1[0x10] = fVar13 - fVar18;
    pfVar1[-8] = fVar17 + fVar11;
    *pfVar1 = fVar16 + fVar14;
    pfVar1[-0x10] = fVar19 + fVar12;
    pfVar1[8] = fVar18 + fVar13;
    fVar11 = pfVar1[9];
    pfVar1[0x28] = fVar12 - fVar19;
    fVar12 = pfVar1[0x29];
    pfVar1[0x18] = fVar14 - fVar16;
    fVar18 = fVar11 * fVar6 + fVar10 * fVar4 + fVar15 * fVar7 + fVar12 * fVar9;
    fVar16 = ((fVar10 * fVar6 - fVar11 * fVar9) - fVar15 * fVar4) - fVar12 * fVar7;
    fVar14 = (fVar10 * fVar7 - fVar11 * fVar4) + fVar15 * fVar9 + fVar12 * fVar6;
    fVar17 = ((fVar10 * fVar9 - fVar11 * fVar7) + fVar15 * fVar6) - fVar12 * fVar4;
    fVar11 = (pfVar1[0x11] + pfVar1[-0xf]) * fVar3;
    fVar10 = pfVar1[0x21] * fVar8 + pfVar1[1] * fVar5;
    fVar12 = (pfVar1[-0xf] - pfVar1[0x11]) * fVar3;
    fVar13 = pfVar1[1] * fVar8 - pfVar1[0x21] * fVar5;
    fVar15 = fVar10 + fVar11;
    fVar11 = fVar11 - fVar10;
    fVar10 = fVar13 + fVar12;
    fVar12 = fVar12 - fVar13;
    pfVar1[0x29] = fVar15 - fVar18;
    pfVar1[0x21] = fVar10 - fVar16;
    pfVar1[0x19] = fVar12 - fVar14;
    pfVar1[0x11] = fVar11 - fVar17;
    pfVar1[-0xf] = fVar18 + fVar15;
    pfVar1[9] = fVar17 + fVar11;
    pfVar1[-7] = fVar16 + fVar10;
    pfVar1[1] = fVar14 + fVar12;
    pfVar1 = pfVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 144e4bf90 FUN_144e4bf90 body=1753 status=ok
// SIG undefined FUN_144e4bf90(void)

void FUN_144e4bf90(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar3 = cosf(0.7853975);
  fVar3 = fVar3 * 0.5;
  fVar4 = cosf(0.19634938);
  fVar4 = fVar4 * 0.5;
  fVar5 = cosf(0.39269876);
  fVar5 = fVar5 * 0.5;
  fVar6 = cosf(0.58904815);
  fVar6 = fVar6 * 0.5;
  fVar7 = cosf(0.9817469);
  fVar7 = fVar7 * 0.5;
  fVar8 = cosf(1.1780963);
  fVar8 = fVar8 * 0.5;
  fVar9 = cosf(1.3744457);
  pfVar1 = (float *)(param_1 + 0x14);
  fVar9 = fVar9 * 0.5;
  lVar2 = 5;
  do {
    fVar10 = pfVar1[-2];
    fVar15 = pfVar1[-4];
    fVar11 = *pfVar1;
    fVar12 = pfVar1[2];
    fVar17 = fVar10 * fVar6 + fVar15 * fVar4 + fVar11 * fVar7 + fVar12 * fVar9;
    fVar16 = ((fVar15 * fVar6 - fVar10 * fVar9) - fVar11 * fVar4) - fVar12 * fVar7;
    fVar14 = (fVar15 * fVar7 - fVar10 * fVar4) + fVar11 * fVar9 + fVar12 * fVar6;
    fVar18 = ((fVar15 * fVar9 - fVar10 * fVar7) + fVar11 * fVar6) - fVar12 * fVar4;
    fVar10 = pfVar1[-3] * fVar5 + pfVar1[1] * fVar8;
    fVar15 = pfVar1[-3] * fVar8 - pfVar1[1] * fVar5;
    fVar12 = (pfVar1[-5] - pfVar1[-1]) * fVar3;
    fVar13 = (pfVar1[-5] + pfVar1[-1]) * fVar3;
    fVar11 = fVar15 + fVar12;
    fVar12 = fVar12 - fVar15;
    fVar15 = fVar10 + fVar13;
    fVar13 = fVar13 - fVar10;
    pfVar1[-4] = fVar16 + fVar11;
    pfVar1[-5] = fVar17 + fVar15;
    pfVar1[-2] = fVar18 + fVar13;
    pfVar1[-3] = fVar14 + fVar12;
    pfVar1[-1] = fVar13 - fVar18;
    *pfVar1 = fVar12 - fVar14;
    pfVar1[1] = fVar11 - fVar16;
    pfVar1[2] = fVar15 - fVar17;
    pfVar1 = pfVar1 + 8;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  pfVar1 = (float *)(param_1 + 0x40);
  lVar2 = 4;
  do {
    fVar10 = pfVar1[8];
    fVar15 = pfVar1[0x18];
    fVar11 = pfVar1[0x28];
    fVar12 = pfVar1[-8];
    fVar19 = fVar10 * fVar6 + fVar12 * fVar4 + fVar15 * fVar7 + fVar11 * fVar9;
    fVar17 = ((fVar12 * fVar6 - fVar10 * fVar9) - fVar15 * fVar4) - fVar11 * fVar7;
    fVar13 = (pfVar1[-0x10] + pfVar1[0x10]) * fVar3;
    fVar14 = (pfVar1[-0x10] - pfVar1[0x10]) * fVar3;
    fVar18 = ((fVar12 * fVar9 - fVar10 * fVar7) + fVar15 * fVar6) - fVar11 * fVar4;
    fVar16 = (fVar12 * fVar7 - fVar10 * fVar4) + fVar15 * fVar9 + fVar11 * fVar6;
    fVar10 = pfVar1[0x20] * fVar8 + *pfVar1 * fVar5;
    fVar15 = *pfVar1 * fVar8 - pfVar1[0x20] * fVar5;
    fVar12 = fVar10 + fVar13;
    fVar13 = fVar13 - fVar10;
    fVar11 = fVar15 + fVar14;
    fVar14 = fVar14 - fVar15;
    fVar10 = pfVar1[-7];
    pfVar1[0x20] = fVar11 - fVar17;
    fVar15 = pfVar1[0x19];
    pfVar1[0x10] = fVar13 - fVar18;
    pfVar1[-8] = fVar17 + fVar11;
    *pfVar1 = fVar16 + fVar14;
    pfVar1[-0x10] = fVar19 + fVar12;
    pfVar1[8] = fVar18 + fVar13;
    fVar11 = pfVar1[9];
    pfVar1[0x28] = fVar12 - fVar19;
    fVar12 = pfVar1[0x29];
    pfVar1[0x18] = fVar14 - fVar16;
    fVar18 = fVar11 * fVar6 + fVar10 * fVar4 + fVar15 * fVar7 + fVar12 * fVar9;
    fVar16 = ((fVar10 * fVar6 - fVar11 * fVar9) - fVar15 * fVar4) - fVar12 * fVar7;
    fVar14 = (fVar10 * fVar7 - fVar11 * fVar4) + fVar15 * fVar9 + fVar12 * fVar6;
    fVar17 = ((fVar10 * fVar9 - fVar11 * fVar7) + fVar15 * fVar6) - fVar12 * fVar4;
    fVar11 = (pfVar1[0x11] + pfVar1[-0xf]) * fVar3;
    fVar10 = pfVar1[0x21] * fVar8 + pfVar1[1] * fVar5;
    fVar12 = (pfVar1[-0xf] - pfVar1[0x11]) * fVar3;
    fVar13 = pfVar1[1] * fVar8 - pfVar1[0x21] * fVar5;
    fVar15 = fVar10 + fVar11;
    fVar11 = fVar11 - fVar10;
    fVar10 = fVar13 + fVar12;
    fVar12 = fVar12 - fVar13;
    pfVar1[0x29] = fVar15 - fVar18;
    pfVar1[0x21] = fVar10 - fVar16;
    pfVar1[0x19] = fVar12 - fVar14;
    pfVar1[0x11] = fVar11 - fVar17;
    pfVar1[-0xf] = fVar18 + fVar15;
    pfVar1[9] = fVar17 + fVar11;
    pfVar1[-7] = fVar16 + fVar10;
    pfVar1[1] = fVar14 + fVar12;
    pfVar1 = pfVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 144e4c670 FUN_144e4c670 body=1752 status=ok
// SIG undefined FUN_144e4c670(void)

void FUN_144e4c670(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar4 = cosf(0.7853975);
  fVar4 = fVar4 * 0.5;
  fVar5 = cosf(0.19634938);
  fVar5 = fVar5 * 0.5;
  fVar6 = cosf(0.39269876);
  fVar6 = fVar6 * 0.5;
  fVar7 = cosf(0.58904815);
  fVar7 = fVar7 * 0.5;
  fVar8 = cosf(0.9817469);
  fVar8 = fVar8 * 0.5;
  fVar9 = cosf(1.1780963);
  fVar9 = fVar9 * 0.5;
  fVar10 = cosf(1.3744457);
  pfVar1 = (float *)(param_1 + 0x14);
  fVar10 = fVar10 * 0.5;
  lVar3 = 4;
  lVar2 = 4;
  do {
    fVar11 = pfVar1[-2];
    fVar16 = pfVar1[-4];
    fVar12 = *pfVar1;
    fVar13 = pfVar1[2];
    fVar18 = fVar11 * fVar7 + fVar16 * fVar5 + fVar12 * fVar8 + fVar13 * fVar10;
    fVar17 = ((fVar16 * fVar7 - fVar11 * fVar10) - fVar12 * fVar5) - fVar13 * fVar8;
    fVar15 = (fVar16 * fVar8 - fVar11 * fVar5) + fVar12 * fVar10 + fVar13 * fVar7;
    fVar19 = ((fVar16 * fVar10 - fVar11 * fVar8) + fVar12 * fVar7) - fVar13 * fVar5;
    fVar11 = pfVar1[-3] * fVar6 + pfVar1[1] * fVar9;
    fVar16 = pfVar1[-3] * fVar9 - pfVar1[1] * fVar6;
    fVar13 = (pfVar1[-5] - pfVar1[-1]) * fVar4;
    fVar14 = (pfVar1[-5] + pfVar1[-1]) * fVar4;
    fVar12 = fVar16 + fVar13;
    fVar13 = fVar13 - fVar16;
    fVar16 = fVar11 + fVar14;
    fVar14 = fVar14 - fVar11;
    pfVar1[-4] = fVar17 + fVar12;
    pfVar1[-5] = fVar18 + fVar16;
    pfVar1[-2] = fVar19 + fVar14;
    pfVar1[-3] = fVar15 + fVar13;
    pfVar1[-1] = fVar14 - fVar19;
    *pfVar1 = fVar13 - fVar15;
    pfVar1[1] = fVar12 - fVar17;
    pfVar1[2] = fVar16 - fVar18;
    pfVar1 = pfVar1 + 8;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  pfVar1 = (float *)(param_1 + 0x40);
  do {
    fVar11 = pfVar1[8];
    fVar16 = pfVar1[0x18];
    fVar12 = pfVar1[0x28];
    fVar13 = pfVar1[-8];
    fVar20 = fVar11 * fVar7 + fVar13 * fVar5 + fVar16 * fVar8 + fVar12 * fVar10;
    fVar18 = ((fVar13 * fVar7 - fVar11 * fVar10) - fVar16 * fVar5) - fVar12 * fVar8;
    fVar14 = (pfVar1[-0x10] + pfVar1[0x10]) * fVar4;
    fVar15 = (pfVar1[-0x10] - pfVar1[0x10]) * fVar4;
    fVar19 = ((fVar13 * fVar10 - fVar11 * fVar8) + fVar16 * fVar7) - fVar12 * fVar5;
    fVar17 = (fVar13 * fVar8 - fVar11 * fVar5) + fVar16 * fVar10 + fVar12 * fVar7;
    fVar11 = pfVar1[0x20] * fVar9 + *pfVar1 * fVar6;
    fVar16 = *pfVar1 * fVar9 - pfVar1[0x20] * fVar6;
    fVar13 = fVar11 + fVar14;
    fVar14 = fVar14 - fVar11;
    fVar12 = fVar16 + fVar15;
    fVar15 = fVar15 - fVar16;
    fVar11 = pfVar1[-7];
    pfVar1[0x20] = fVar12 - fVar18;
    fVar16 = pfVar1[0x19];
    pfVar1[0x10] = fVar14 - fVar19;
    pfVar1[-8] = fVar18 + fVar12;
    *pfVar1 = fVar17 + fVar15;
    pfVar1[-0x10] = fVar20 + fVar13;
    pfVar1[8] = fVar19 + fVar14;
    fVar12 = pfVar1[9];
    pfVar1[0x28] = fVar13 - fVar20;
    fVar13 = pfVar1[0x29];
    pfVar1[0x18] = fVar15 - fVar17;
    fVar19 = fVar12 * fVar7 + fVar11 * fVar5 + fVar16 * fVar8 + fVar13 * fVar10;
    fVar17 = ((fVar11 * fVar7 - fVar12 * fVar10) - fVar16 * fVar5) - fVar13 * fVar8;
    fVar15 = (fVar11 * fVar8 - fVar12 * fVar5) + fVar16 * fVar10 + fVar13 * fVar7;
    fVar18 = ((fVar11 * fVar10 - fVar12 * fVar8) + fVar16 * fVar7) - fVar13 * fVar5;
    fVar12 = (pfVar1[0x11] + pfVar1[-0xf]) * fVar4;
    fVar11 = pfVar1[0x21] * fVar9 + pfVar1[1] * fVar6;
    fVar13 = (pfVar1[-0xf] - pfVar1[0x11]) * fVar4;
    fVar14 = pfVar1[1] * fVar9 - pfVar1[0x21] * fVar6;
    fVar16 = fVar11 + fVar12;
    fVar12 = fVar12 - fVar11;
    fVar11 = fVar14 + fVar13;
    fVar13 = fVar13 - fVar14;
    pfVar1[0x29] = fVar16 - fVar19;
    pfVar1[0x21] = fVar11 - fVar17;
    pfVar1[0x19] = fVar13 - fVar15;
    pfVar1[0x11] = fVar12 - fVar18;
    pfVar1[-0xf] = fVar19 + fVar16;
    pfVar1[9] = fVar18 + fVar12;
    pfVar1[-7] = fVar17 + fVar11;
    pfVar1[1] = fVar15 + fVar13;
    pfVar1 = pfVar1 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 144e4cd50 FUN_144e4cd50 body=1753 status=ok
// SIG undefined FUN_144e4cd50(void)

void FUN_144e4cd50(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar3 = cosf(0.7853975);
  fVar3 = fVar3 * 0.5;
  fVar4 = cosf(0.19634938);
  fVar4 = fVar4 * 0.5;
  fVar5 = cosf(0.39269876);
  fVar5 = fVar5 * 0.5;
  fVar6 = cosf(0.58904815);
  fVar6 = fVar6 * 0.5;
  fVar7 = cosf(0.9817469);
  fVar7 = fVar7 * 0.5;
  fVar8 = cosf(1.1780963);
  fVar8 = fVar8 * 0.5;
  fVar9 = cosf(1.3744457);
  pfVar1 = (float *)(param_1 + 0x14);
  fVar9 = fVar9 * 0.5;
  lVar2 = 3;
  do {
    fVar10 = pfVar1[-2];
    fVar15 = pfVar1[-4];
    fVar11 = *pfVar1;
    fVar12 = pfVar1[2];
    fVar17 = fVar10 * fVar6 + fVar15 * fVar4 + fVar11 * fVar7 + fVar12 * fVar9;
    fVar16 = ((fVar15 * fVar6 - fVar10 * fVar9) - fVar11 * fVar4) - fVar12 * fVar7;
    fVar14 = (fVar15 * fVar7 - fVar10 * fVar4) + fVar11 * fVar9 + fVar12 * fVar6;
    fVar18 = ((fVar15 * fVar9 - fVar10 * fVar7) + fVar11 * fVar6) - fVar12 * fVar4;
    fVar10 = pfVar1[-3] * fVar5 + pfVar1[1] * fVar8;
    fVar15 = pfVar1[-3] * fVar8 - pfVar1[1] * fVar5;
    fVar12 = (pfVar1[-5] - pfVar1[-1]) * fVar3;
    fVar13 = (pfVar1[-5] + pfVar1[-1]) * fVar3;
    fVar11 = fVar15 + fVar12;
    fVar12 = fVar12 - fVar15;
    fVar15 = fVar10 + fVar13;
    fVar13 = fVar13 - fVar10;
    pfVar1[-4] = fVar16 + fVar11;
    pfVar1[-5] = fVar17 + fVar15;
    pfVar1[-2] = fVar18 + fVar13;
    pfVar1[-3] = fVar14 + fVar12;
    pfVar1[-1] = fVar13 - fVar18;
    *pfVar1 = fVar12 - fVar14;
    pfVar1[1] = fVar11 - fVar16;
    pfVar1[2] = fVar15 - fVar17;
    pfVar1 = pfVar1 + 8;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  pfVar1 = (float *)(param_1 + 0x40);
  lVar2 = 4;
  do {
    fVar10 = pfVar1[8];
    fVar15 = pfVar1[0x18];
    fVar11 = pfVar1[0x28];
    fVar12 = pfVar1[-8];
    fVar19 = fVar10 * fVar6 + fVar12 * fVar4 + fVar15 * fVar7 + fVar11 * fVar9;
    fVar17 = ((fVar12 * fVar6 - fVar10 * fVar9) - fVar15 * fVar4) - fVar11 * fVar7;
    fVar13 = (pfVar1[-0x10] + pfVar1[0x10]) * fVar3;
    fVar14 = (pfVar1[-0x10] - pfVar1[0x10]) * fVar3;
    fVar18 = ((fVar12 * fVar9 - fVar10 * fVar7) + fVar15 * fVar6) - fVar11 * fVar4;
    fVar16 = (fVar12 * fVar7 - fVar10 * fVar4) + fVar15 * fVar9 + fVar11 * fVar6;
    fVar10 = pfVar1[0x20] * fVar8 + *pfVar1 * fVar5;
    fVar15 = *pfVar1 * fVar8 - pfVar1[0x20] * fVar5;
    fVar12 = fVar10 + fVar13;
    fVar13 = fVar13 - fVar10;
    fVar11 = fVar15 + fVar14;
    fVar14 = fVar14 - fVar15;
    fVar10 = pfVar1[-7];
    pfVar1[0x20] = fVar11 - fVar17;
    fVar15 = pfVar1[0x19];
    pfVar1[0x10] = fVar13 - fVar18;
    pfVar1[-8] = fVar17 + fVar11;
    *pfVar1 = fVar16 + fVar14;
    pfVar1[-0x10] = fVar19 + fVar12;
    pfVar1[8] = fVar18 + fVar13;
    fVar11 = pfVar1[9];
    pfVar1[0x28] = fVar12 - fVar19;
    fVar12 = pfVar1[0x29];
    pfVar1[0x18] = fVar14 - fVar16;
    fVar18 = fVar11 * fVar6 + fVar10 * fVar4 + fVar15 * fVar7 + fVar12 * fVar9;
    fVar16 = ((fVar10 * fVar6 - fVar11 * fVar9) - fVar15 * fVar4) - fVar12 * fVar7;
    fVar14 = (fVar10 * fVar7 - fVar11 * fVar4) + fVar15 * fVar9 + fVar12 * fVar6;
    fVar17 = ((fVar10 * fVar9 - fVar11 * fVar7) + fVar15 * fVar6) - fVar12 * fVar4;
    fVar11 = (pfVar1[0x11] + pfVar1[-0xf]) * fVar3;
    fVar10 = pfVar1[0x21] * fVar8 + pfVar1[1] * fVar5;
    fVar12 = (pfVar1[-0xf] - pfVar1[0x11]) * fVar3;
    fVar13 = pfVar1[1] * fVar8 - pfVar1[0x21] * fVar5;
    fVar15 = fVar10 + fVar11;
    fVar11 = fVar11 - fVar10;
    fVar10 = fVar13 + fVar12;
    fVar12 = fVar12 - fVar13;
    pfVar1[0x29] = fVar15 - fVar18;
    pfVar1[0x21] = fVar10 - fVar16;
    pfVar1[0x19] = fVar12 - fVar14;
    pfVar1[0x11] = fVar11 - fVar17;
    pfVar1[-0xf] = fVar18 + fVar15;
    pfVar1[9] = fVar17 + fVar11;
    pfVar1[-7] = fVar16 + fVar10;
    pfVar1[1] = fVar14 + fVar12;
    pfVar1 = pfVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 144e4d430 FUN_144e4d430 body=1753 status=ok
// SIG undefined FUN_144e4d430(void)

void FUN_144e4d430(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar3 = cosf(0.7853975);
  fVar3 = fVar3 * 0.5;
  fVar4 = cosf(0.19634938);
  fVar4 = fVar4 * 0.5;
  fVar5 = cosf(0.39269876);
  fVar5 = fVar5 * 0.5;
  fVar6 = cosf(0.58904815);
  fVar6 = fVar6 * 0.5;
  fVar7 = cosf(0.9817469);
  fVar7 = fVar7 * 0.5;
  fVar8 = cosf(1.1780963);
  fVar8 = fVar8 * 0.5;
  fVar9 = cosf(1.3744457);
  pfVar1 = (float *)(param_1 + 0x14);
  fVar9 = fVar9 * 0.5;
  lVar2 = 2;
  do {
    fVar10 = pfVar1[-2];
    fVar15 = pfVar1[-4];
    fVar11 = *pfVar1;
    fVar12 = pfVar1[2];
    fVar17 = fVar10 * fVar6 + fVar15 * fVar4 + fVar11 * fVar7 + fVar12 * fVar9;
    fVar16 = ((fVar15 * fVar6 - fVar10 * fVar9) - fVar11 * fVar4) - fVar12 * fVar7;
    fVar14 = (fVar15 * fVar7 - fVar10 * fVar4) + fVar11 * fVar9 + fVar12 * fVar6;
    fVar18 = ((fVar15 * fVar9 - fVar10 * fVar7) + fVar11 * fVar6) - fVar12 * fVar4;
    fVar10 = pfVar1[-3] * fVar5 + pfVar1[1] * fVar8;
    fVar15 = pfVar1[-3] * fVar8 - pfVar1[1] * fVar5;
    fVar12 = (pfVar1[-5] - pfVar1[-1]) * fVar3;
    fVar13 = (pfVar1[-5] + pfVar1[-1]) * fVar3;
    fVar11 = fVar15 + fVar12;
    fVar12 = fVar12 - fVar15;
    fVar15 = fVar10 + fVar13;
    fVar13 = fVar13 - fVar10;
    pfVar1[-4] = fVar16 + fVar11;
    pfVar1[-5] = fVar17 + fVar15;
    pfVar1[-2] = fVar18 + fVar13;
    pfVar1[-3] = fVar14 + fVar12;
    pfVar1[-1] = fVar13 - fVar18;
    *pfVar1 = fVar12 - fVar14;
    pfVar1[1] = fVar11 - fVar16;
    pfVar1[2] = fVar15 - fVar17;
    pfVar1 = pfVar1 + 8;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  pfVar1 = (float *)(param_1 + 0x40);
  lVar2 = 4;
  do {
    fVar10 = pfVar1[8];
    fVar15 = pfVar1[0x18];
    fVar11 = pfVar1[0x28];
    fVar12 = pfVar1[-8];
    fVar19 = fVar10 * fVar6 + fVar12 * fVar4 + fVar15 * fVar7 + fVar11 * fVar9;
    fVar17 = ((fVar12 * fVar6 - fVar10 * fVar9) - fVar15 * fVar4) - fVar11 * fVar7;
    fVar13 = (pfVar1[-0x10] + pfVar1[0x10]) * fVar3;
    fVar14 = (pfVar1[-0x10] - pfVar1[0x10]) * fVar3;
    fVar18 = ((fVar12 * fVar9 - fVar10 * fVar7) + fVar15 * fVar6) - fVar11 * fVar4;
    fVar16 = (fVar12 * fVar7 - fVar10 * fVar4) + fVar15 * fVar9 + fVar11 * fVar6;
    fVar10 = pfVar1[0x20] * fVar8 + *pfVar1 * fVar5;
    fVar15 = *pfVar1 * fVar8 - pfVar1[0x20] * fVar5;
    fVar12 = fVar10 + fVar13;
    fVar13 = fVar13 - fVar10;
    fVar11 = fVar15 + fVar14;
    fVar14 = fVar14 - fVar15;
    fVar10 = pfVar1[-7];
    pfVar1[0x20] = fVar11 - fVar17;
    fVar15 = pfVar1[0x19];
    pfVar1[0x10] = fVar13 - fVar18;
    pfVar1[-8] = fVar17 + fVar11;
    *pfVar1 = fVar16 + fVar14;
    pfVar1[-0x10] = fVar19 + fVar12;
    pfVar1[8] = fVar18 + fVar13;
    fVar11 = pfVar1[9];
    pfVar1[0x28] = fVar12 - fVar19;
    fVar12 = pfVar1[0x29];
    pfVar1[0x18] = fVar14 - fVar16;
    fVar18 = fVar11 * fVar6 + fVar10 * fVar4 + fVar15 * fVar7 + fVar12 * fVar9;
    fVar16 = ((fVar10 * fVar6 - fVar11 * fVar9) - fVar15 * fVar4) - fVar12 * fVar7;
    fVar14 = (fVar10 * fVar7 - fVar11 * fVar4) + fVar15 * fVar9 + fVar12 * fVar6;
    fVar17 = ((fVar10 * fVar9 - fVar11 * fVar7) + fVar15 * fVar6) - fVar12 * fVar4;
    fVar11 = (pfVar1[0x11] + pfVar1[-0xf]) * fVar3;
    fVar10 = pfVar1[0x21] * fVar8 + pfVar1[1] * fVar5;
    fVar12 = (pfVar1[-0xf] - pfVar1[0x11]) * fVar3;
    fVar13 = pfVar1[1] * fVar8 - pfVar1[0x21] * fVar5;
    fVar15 = fVar10 + fVar11;
    fVar11 = fVar11 - fVar10;
    fVar10 = fVar13 + fVar12;
    fVar12 = fVar12 - fVar13;
    pfVar1[0x29] = fVar15 - fVar18;
    pfVar1[0x21] = fVar10 - fVar16;
    pfVar1[0x19] = fVar12 - fVar14;
    pfVar1[0x11] = fVar11 - fVar17;
    pfVar1[-0xf] = fVar18 + fVar15;
    pfVar1[9] = fVar17 + fVar11;
    pfVar1[-7] = fVar16 + fVar10;
    pfVar1[1] = fVar14 + fVar12;
    pfVar1 = pfVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 144e4db10 FUN_144e4db10 body=1705 status=ok
// SIG undefined FUN_144e4db10(void)

void FUN_144e4db10(float *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar2 = cosf(0.7853975);
  fVar2 = fVar2 * 0.5;
  fVar3 = cosf(0.19634938);
  fVar3 = fVar3 * 0.5;
  fVar4 = cosf(0.39269876);
  fVar4 = fVar4 * 0.5;
  fVar5 = cosf(0.58904815);
  fVar5 = fVar5 * 0.5;
  fVar6 = cosf(0.9817469);
  fVar6 = fVar6 * 0.5;
  fVar7 = cosf(1.1780963);
  fVar7 = fVar7 * 0.5;
  fVar8 = cosf(1.3744457);
  fVar10 = param_1[3];
  fVar11 = param_1[1];
  fVar12 = param_1[5];
  fVar13 = param_1[7];
  fVar8 = fVar8 * 0.5;
  fVar17 = fVar11 * fVar3 + fVar10 * fVar5 + fVar12 * fVar6 + fVar13 * fVar8;
  fVar16 = ((fVar11 * fVar5 - fVar10 * fVar8) - fVar12 * fVar3) - fVar13 * fVar6;
  fVar14 = (fVar11 * fVar6 - fVar10 * fVar3) + fVar12 * fVar8 + fVar13 * fVar5;
  lVar1 = 4;
  fVar9 = param_1[6] * fVar7 + param_1[2] * fVar4;
  fVar15 = param_1[2] * fVar7 - param_1[6] * fVar4;
  fVar18 = ((fVar11 * fVar8 - fVar10 * fVar6) + fVar12 * fVar5) - fVar13 * fVar3;
  fVar12 = (*param_1 - param_1[4]) * fVar2;
  fVar13 = (*param_1 + param_1[4]) * fVar2;
  fVar11 = fVar15 + fVar12;
  fVar12 = fVar12 - fVar15;
  fVar10 = fVar9 + fVar13;
  fVar13 = fVar13 - fVar9;
  param_1[1] = fVar16 + fVar11;
  *param_1 = fVar17 + fVar10;
  param_1[3] = fVar18 + fVar13;
  param_1[2] = fVar14 + fVar12;
  param_1[4] = fVar13 - fVar18;
  param_1[5] = fVar12 - fVar14;
  param_1[6] = fVar11 - fVar16;
  param_1[7] = fVar10 - fVar17;
  param_1 = param_1 + 0x10;
  do {
    fVar10 = param_1[8];
    fVar11 = param_1[0x18];
    fVar12 = param_1[0x28];
    fVar13 = param_1[-8];
    fVar18 = fVar10 * fVar5 + fVar13 * fVar3 + fVar11 * fVar6 + fVar12 * fVar8;
    fVar16 = ((fVar13 * fVar5 - fVar10 * fVar8) - fVar11 * fVar3) - fVar12 * fVar6;
    fVar9 = (param_1[-0x10] + param_1[0x10]) * fVar2;
    fVar14 = (param_1[-0x10] - param_1[0x10]) * fVar2;
    fVar17 = ((fVar13 * fVar8 - fVar10 * fVar6) + fVar11 * fVar5) - fVar12 * fVar3;
    fVar15 = (fVar13 * fVar6 - fVar10 * fVar3) + fVar11 * fVar8 + fVar12 * fVar5;
    fVar10 = param_1[0x20] * fVar7 + *param_1 * fVar4;
    fVar11 = *param_1 * fVar7 - param_1[0x20] * fVar4;
    fVar13 = fVar10 + fVar9;
    fVar9 = fVar9 - fVar10;
    fVar12 = fVar11 + fVar14;
    fVar14 = fVar14 - fVar11;
    fVar10 = param_1[-7];
    param_1[0x20] = fVar12 - fVar16;
    fVar11 = param_1[0x19];
    param_1[0x10] = fVar9 - fVar17;
    param_1[-8] = fVar16 + fVar12;
    *param_1 = fVar15 + fVar14;
    param_1[-0x10] = fVar18 + fVar13;
    param_1[8] = fVar17 + fVar9;
    fVar12 = param_1[9];
    param_1[0x28] = fVar13 - fVar18;
    fVar13 = param_1[0x29];
    param_1[0x18] = fVar14 - fVar15;
    fVar17 = fVar12 * fVar5 + fVar10 * fVar3 + fVar11 * fVar6 + fVar13 * fVar8;
    fVar15 = ((fVar10 * fVar5 - fVar12 * fVar8) - fVar11 * fVar3) - fVar13 * fVar6;
    fVar14 = (fVar10 * fVar6 - fVar12 * fVar3) + fVar11 * fVar8 + fVar13 * fVar5;
    fVar16 = ((fVar10 * fVar8 - fVar12 * fVar6) + fVar11 * fVar5) - fVar13 * fVar3;
    fVar12 = (param_1[0x11] + param_1[-0xf]) * fVar2;
    fVar10 = param_1[0x21] * fVar7 + param_1[1] * fVar4;
    fVar13 = (param_1[-0xf] - param_1[0x11]) * fVar2;
    fVar9 = param_1[1] * fVar7 - param_1[0x21] * fVar4;
    fVar11 = fVar10 + fVar12;
    fVar12 = fVar12 - fVar10;
    fVar10 = fVar9 + fVar13;
    fVar13 = fVar13 - fVar9;
    param_1[0x29] = fVar11 - fVar17;
    param_1[0x21] = fVar10 - fVar15;
    param_1[0x19] = fVar13 - fVar14;
    param_1[0x11] = fVar12 - fVar16;
    param_1[-0xf] = fVar17 + fVar11;
    param_1[9] = fVar16 + fVar12;
    param_1[-7] = fVar15 + fVar10;
    param_1[1] = fVar14 + fVar13;
    param_1 = param_1 + 2;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 144e4e1c0 FUN_144e4e1c0 body=960 status=ok
// SIG undefined FUN_144e4e1c0(void)

void FUN_144e4e1c0(longlong param_1,longlong param_2)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  uint *puVar7;
  
  puVar6 = (ushort *)(param_1 + 4);
  lVar3 = 0x10;
  puVar7 = (uint *)(param_2 + 8);
  do {
    uVar5 = puVar7[-2];
    uVar4 = uVar5 & 0x7fffffff;
    uVar2 = (ushort)(uVar5 >> 0x10) & 0x8000;
    if (uVar4 < 0x38800000) {
      if (0x33000000 < uVar4) {
        bVar1 = 0x7e - (char)(uVar4 >> 0x17);
        uVar4 = uVar5 & 0x7fffff | 0x800000;
        uVar5 = uVar4 << (0x20 - bVar1 & 0x1f);
        uVar4 = uVar4 >> (bVar1 & 0x1f);
        uVar2 = uVar2 | (ushort)uVar4;
        if ((0x80000000 < uVar5) || ((uVar5 == 0x80000000 && ((uVar4 & 1) != 0)))) {
          uVar2 = uVar2 + 1;
        }
      }
    }
    else if (uVar4 < 0x7f800000) {
      if (uVar4 < 0x477ff000) {
        uVar2 = uVar2 | (ushort)(uVar4 + 0xc8000fff + (uVar4 + 0xc8000000 >> 0xd & 1) >> 0xd);
      }
      else {
        uVar2 = uVar2 | 0x7c00;
      }
    }
    else {
      uVar2 = uVar2 | 0x7c00;
      if (uVar4 != 0x7f800000) {
        uVar5 = uVar4 >> 0xd & 0x3ff;
        uVar2 = uVar2 | (ushort)(uVar5 == 0) | (ushort)uVar5;
      }
    }
    puVar6[-2] = uVar2;
    uVar5 = puVar7[-1];
    uVar4 = uVar5 & 0x7fffffff;
    uVar2 = (ushort)(uVar5 >> 0x10) & 0x8000;
    if (uVar4 < 0x38800000) {
      if (0x33000000 < uVar4) {
        bVar1 = 0x7e - (char)(uVar4 >> 0x17);
        uVar4 = uVar5 & 0x7fffff | 0x800000;
        uVar5 = uVar4 << (0x20 - bVar1 & 0x1f);
        uVar4 = uVar4 >> (bVar1 & 0x1f);
        uVar2 = uVar2 | (ushort)uVar4;
        if ((0x80000000 < uVar5) || ((uVar5 == 0x80000000 && ((uVar4 & 1) != 0)))) {
          uVar2 = uVar2 + 1;
        }
      }
    }
    else if (uVar4 < 0x7f800000) {
      if (uVar4 < 0x477ff000) {
        uVar2 = uVar2 | (ushort)(uVar4 + 0xc8000fff + (uVar4 + 0xc8000000 >> 0xd & 1) >> 0xd);
      }
      else {
        uVar2 = uVar2 | 0x7c00;
      }
    }
    else {
      uVar2 = uVar2 | 0x7c00;
      if (uVar4 != 0x7f800000) {
        uVar5 = uVar4 >> 0xd & 0x3ff;
        uVar2 = uVar2 | (ushort)(uVar5 == 0) | (ushort)uVar5;
      }
    }
    puVar6[-1] = uVar2;
    uVar5 = *puVar7;
    uVar4 = uVar5 & 0x7fffffff;
    uVar2 = (ushort)(uVar5 >> 0x10) & 0x8000;
    if (uVar4 < 0x38800000) {
      if (0x33000000 < uVar4) {
        bVar1 = 0x7e - (char)(uVar4 >> 0x17);
        uVar4 = uVar5 & 0x7fffff | 0x800000;
        uVar5 = uVar4 << (0x20 - bVar1 & 0x1f);
        uVar4 = uVar4 >> (bVar1 & 0x1f);
        uVar2 = uVar2 | (ushort)uVar4;
        if ((0x80000000 < uVar5) || ((uVar5 == 0x80000000 && ((uVar4 & 1) != 0)))) {
          uVar2 = uVar2 + 1;
        }
      }
    }
    else if (uVar4 < 0x7f800000) {
      if (uVar4 < 0x477ff000) {
        uVar2 = uVar2 | (ushort)(uVar4 + 0xc8000fff + (uVar4 + 0xc8000000 >> 0xd & 1) >> 0xd);
      }
      else {
        uVar2 = uVar2 | 0x7c00;
      }
    }
    else {
      uVar2 = uVar2 | 0x7c00;
      if (uVar4 != 0x7f800000) {
        uVar5 = uVar4 >> 0xd & 0x3ff;
        uVar2 = uVar2 | (ushort)(uVar5 == 0) | (ushort)uVar5;
      }
    }
    *puVar6 = uVar2;
    uVar5 = puVar7[1];
    uVar4 = uVar5 & 0x7fffffff;
    uVar2 = (ushort)(uVar5 >> 0x10) & 0x8000;
    if (uVar4 < 0x38800000) {
      if (0x33000000 < uVar4) {
        bVar1 = 0x7e - (char)(uVar4 >> 0x17);
        uVar4 = uVar5 & 0x7fffff | 0x800000;
        uVar5 = uVar4 << (0x20 - bVar1 & 0x1f);
        uVar4 = uVar4 >> (bVar1 & 0x1f);
        uVar2 = uVar2 | (ushort)uVar4;
        if ((0x80000000 < uVar5) || ((uVar5 == 0x80000000 && ((uVar4 & 1) != 0)))) {
          uVar2 = uVar2 + 1;
        }
      }
    }
    else if (uVar4 < 0x7f800000) {
      if (uVar4 < 0x477ff000) {
        uVar2 = uVar2 | (ushort)(uVar4 + 0xc8000fff + (uVar4 + 0xc8000000 >> 0xd & 1) >> 0xd);
      }
      else {
        uVar2 = uVar2 | 0x7c00;
      }
    }
    else {
      uVar2 = uVar2 | 0x7c00;
      if (uVar4 != 0x7f800000) {
        uVar5 = uVar4 >> 0xd & 0x3ff;
        uVar2 = uVar2 | (ushort)(uVar5 == 0) | (ushort)uVar5;
      }
    }
    puVar6[1] = uVar2;
    puVar7 = puVar7 + 4;
    puVar6 = puVar6 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 144e4e580 FUN_144e4e580 body=1255 status=ok
// SIG undefined FUN_144e4e580(void)

void FUN_144e4e580(ushort *param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)*param_1 * 4);
  param_2[1] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[1] * 4);
  param_2[2] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[5] * 4);
  param_2[3] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[6] * 4);
  param_2[4] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0xe] * 4);
  param_2[5] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0xf] * 4);
  param_2[6] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x1b] * 4);
  param_2[7] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x1c] * 4);
  param_2[8] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[2] * 4);
  param_2[9] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[4] * 4);
  param_2[10] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[7] * 4);
  param_2[0xb] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0xd] * 4);
  param_2[0xc] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x10] * 4);
  param_2[0xd] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x1a] * 4);
  param_2[0xe] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x1d] * 4);
  param_2[0xf] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x2a] * 4);
  param_2[0x10] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[3] * 4);
  param_2[0x11] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[8] * 4);
  param_2[0x12] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0xc] * 4);
  param_2[0x13] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x11] * 4);
  param_2[0x14] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x19] * 4);
  param_2[0x15] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x1e] * 4);
  param_2[0x16] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x29] * 4);
  param_2[0x17] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x2b] * 4);
  param_2[0x18] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[9] * 4);
  param_2[0x19] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0xb] * 4);
  param_2[0x1a] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x12] * 4);
  param_2[0x1b] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x18] * 4);
  param_2[0x1c] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x1f] * 4);
  param_2[0x1d] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x28] * 4);
  param_2[0x1e] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x2c] * 4);
  param_2[0x1f] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x35] * 4);
  param_2[0x20] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[10] * 4);
  param_2[0x21] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x13] * 4);
  param_2[0x22] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x17] * 4);
  param_2[0x23] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x20] * 4);
  param_2[0x24] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x27] * 4);
  param_2[0x25] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x2d] * 4);
  param_2[0x26] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x34] * 4);
  param_2[0x27] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x36] * 4);
  param_2[0x28] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x14] * 4);
  param_2[0x29] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x16] * 4);
  param_2[0x2a] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x21] * 4);
  param_2[0x2b] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x26] * 4);
  param_2[0x2c] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x2e] * 4);
  param_2[0x2d] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x33] * 4);
  param_2[0x2e] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x37] * 4);
  param_2[0x2f] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x3c] * 4);
  param_2[0x30] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x15] * 4);
  param_2[0x31] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x22] * 4);
  param_2[0x32] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x25] * 4);
  param_2[0x33] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x2f] * 4);
  param_2[0x34] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x32] * 4);
  param_2[0x35] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x38] * 4);
  param_2[0x36] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x3b] * 4);
  param_2[0x37] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x3d] * 4);
  param_2[0x38] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x23] * 4);
  param_2[0x39] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x24] * 4);
  param_2[0x3a] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x30] * 4);
  param_2[0x3b] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x31] * 4);
  param_2[0x3c] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x39] * 4);
  param_2[0x3d] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x3a] * 4);
  param_2[0x3e] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x3e] * 4);
  param_2[0x3f] = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)param_1[0x3f] * 4);
  return;
}



// FUNCTION 144e4ea70 FUN_144e4ea70 body=206 status=ok
// SIG undefined FUN_144e4ea70(void)

longlong * FUN_144e4ea70(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar6 = param_1;
  plVar7 = param_1;
  lVar4 = FUN_14494321d(0x130);
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar4 + 8) = lVar4;
  *(longlong *)(lVar4 + 0x10) = lVar4;
  *(undefined2 *)(lVar4 + 0x18) = 0x101;
  *param_1 = lVar4;
  uVar5 = FUN_14698cf8a(param_1,*(undefined8 *)(*param_2 + 8),lVar4,param_4,plVar6,plVar7);
  *(undefined8 *)(*param_1 + 8) = uVar5;
  param_1[1] = param_2[1];
  plVar6 = (longlong *)*param_1;
  plVar7 = (longlong *)plVar6[1];
  if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar7 + 0x19);
    plVar3 = (longlong *)*plVar7;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar3 + 0x19);
      plVar7 = plVar3;
      plVar3 = (longlong *)*plVar3;
    }
    *plVar6 = (longlong)plVar7;
    lVar4 = *(longlong *)(*param_1 + 8);
    lVar2 = *(longlong *)(lVar4 + 0x10);
    cVar1 = *(char *)(lVar2 + 0x19);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(longlong *)(lVar2 + 0x10) + 0x19);
      lVar4 = lVar2;
      lVar2 = *(longlong *)(lVar2 + 0x10);
    }
    *(longlong *)(*param_1 + 0x10) = lVar4;
  }
  else {
    *plVar6 = (longlong)plVar6;
    *(longlong *)(*param_1 + 0x10) = *param_1;
  }
  return param_1;
}



// FUNCTION 144e4eb40 FUN_144e4eb40 body=353 status=ok
// SIG undefined FUN_144e4eb40(void)

undefined8 *
FUN_144e4eb40(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  FUN_144e497d0();
  *param_1 = Imf_3_2::DwaCompressor::vftable;
  *(undefined4 *)(param_1 + 2) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 3) = param_4;
  uVar2 = FUN_144b67b80(param_2);
  FUN_144e4ea70(param_1 + 6,uVar2);
  param_1[8] = 0;
  param_1[9] = 0;
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
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1f] = 0;
  uVar1 = FUN_144b67c20(param_2);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_144b67c40(param_2);
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar1;
  puVar3 = (undefined4 *)FUN_144b67b20(param_2);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *puVar3;
  lVar4 = FUN_144b67b20(param_2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar4 + 4);
  lVar4 = FUN_144b67b20(param_2);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(lVar4 + 8);
  lVar4 = FUN_144b67b20(param_2);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(lVar4 + 0xc);
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  return param_1;
}



// FUNCTION 144e4ecb0 FUN_144e4ecb0 body=4 status=ok
// SIG undefined FUN_144e4ecb0(void)

undefined4 FUN_144e4ecb0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// FUNCTION 144e4ecc0 FUN_144e4ecc0 body=12 status=ok
// SIG undefined FUN_144e4ecc0(void)

bool FUN_144e4ecc0(void)

{
  return DAT_14c796695 == '\0';
}



// FUNCTION 144e4ecd0 FUN_144e4ecd0 body=122 status=ok
// SIG undefined FUN_144e4ecd0(void)

void FUN_144e4ecd0(longlong *param_1,undefined8 param_2,undefined4 param_3,int param_4,
                  undefined8 param_5)

{
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = (**(code **)(*param_1 + 8))();
  local_c = param_4 + -1 + local_c;
  local_18 = *(undefined4 *)((longlong)param_1 + 0x1c);
  local_10 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_14 = param_4;
  FUN_144e4f610(param_1,param_2,param_3,&local_18,param_5);
  return;
}



// FUNCTION 144e4ed50 FUN_144e4ed50 body=60 status=ok
// SIG undefined FUN_144e4ed50(void)

void FUN_144e4ed50(void)

{
  FUN_144e4f610();
  return;
}



// FUNCTION 144e4ed90 FUN_144e4ed90 body=122 status=ok
// SIG undefined FUN_144e4ed90(void)

void FUN_144e4ed90(longlong *param_1,undefined8 param_2,undefined4 param_3,int param_4,
                  undefined8 param_5)

{
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = (**(code **)(*param_1 + 8))();
  local_c = param_4 + -1 + local_c;
  local_18 = *(undefined4 *)((longlong)param_1 + 0x1c);
  local_10 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_14 = param_4;
  FUN_144e505e0(param_1,param_2,param_3,&local_18,param_5);
  return;
}



// FUNCTION 144e4ee10 FUN_144e4ee10 body=60 status=ok
// SIG undefined FUN_144e4ee10(void)

void FUN_144e4ee10(void)

{
  FUN_144e505e0();
  return;
}



// FUNCTION 144e4ee50 FUN_144e4ee50 body=443 status=ok
// SIG undefined FUN_144e4ee50(void)

void FUN_144e4ee50(void)

{
  char local_res8 [5];
  char local_resd;
  char local_rese;
  
  PTR_FUN_14c709d90 = FUN_144e4e1c0;
  PTR_FUN_14c709d98 = FUN_144e4e580;
  FUN_14521ac90(local_res8);
  if ((local_resd != '\0') && (local_rese != '\0')) {
    PTR_FUN_14c709d90 = &LAB_144e55c80;
    PTR_FUN_14c709d98 = &LAB_144e55c90;
  }
  PTR_FUN_14c709da0 = FUN_144e4aaf0;
  PTR_FUN_14c709da8 = FUN_144e4b1d0;
  PTR_FUN_14c709db0 = FUN_144e4b8b0;
  PTR_FUN_14c709db8 = FUN_144e4bf90;
  PTR_FUN_14c709dc0 = FUN_144e4c670;
  PTR_FUN_14c709dc8 = FUN_144e4cd50;
  PTR_FUN_14c709dd0 = FUN_144e4d430;
  PTR_FUN_14c709dd8 = FUN_144e4db10;
  if (local_resd != '\0') {
    PTR_FUN_14c709da0 = &LAB_144e59f50;
    PTR_FUN_14c709da8 = &LAB_144e59f60;
    PTR_FUN_14c709db0 = &LAB_144e59f70;
    PTR_FUN_14c709db8 = &LAB_144e59f80;
    PTR_FUN_14c709dc0 = &LAB_144e59f90;
    PTR_FUN_14c709dc8 = &LAB_144e59fa0;
    PTR_FUN_14c709dd0 = &LAB_144e59fb0;
    PTR_FUN_14c709dd8 = &LAB_144e59fc0;
    return;
  }
  if (local_res8[0] != '\0') {
    PTR_FUN_14c709da0 = FUN_144e59fd0;
    PTR_FUN_14c709da8 = FUN_144e5a650;
    PTR_FUN_14c709db0 = FUN_144e5ac50;
    PTR_FUN_14c709db8 = FUN_144e5b1c0;
    PTR_FUN_14c709dc0 = FUN_144e5b6b0;
    PTR_FUN_14c709dc8 = FUN_144e5bb10;
    PTR_FUN_14c709dd0 = FUN_144e5bef0;
    PTR_FUN_14c709dd8 = FUN_144e5c250;
  }
  return;
}



// FUNCTION 144e4f010 FUN_144e4f010 body=65 status=ok
// SIG undefined FUN_144e4f010(void)

void FUN_144e4f010(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x98;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 144e4f060 FUN_144e4f060 body=136 status=ok
// SIG undefined FUN_144e4f060(void)

void FUN_144e4f060(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*param_1 != 0) {
    FUN_144e5cb70(*param_1,param_1[1],param_1);
    lVar1 = *param_1;
    uVar3 = ((param_1[2] - lVar1) / 0x98) * 0x98;
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
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e4f0f0 FUN_144e4f0f0 body=16 status=ok
// SIG undefined FUN_144e4f0f0(void)

void FUN_144e4f0f0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e4f110 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<struct `protected: int __cdecl GSI1::readHash(unsigned
   short,long,long) __ptr64'::`2'::FileSymbolInfo>::deallocate(struct `protected: int __cdecl
   GSI1::readHash(unsigned short,long,long) __ptr64'::`2'::FileSymbolInfo * __ptr64 const,unsigned
   __int64) __ptr64
    public: void __cdecl std::allocator<struct GSISymbolEntry>::deallocate(struct GSISymbolEntry *
   __ptr64 const,unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0xc;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 144e4f160 FUN_144e4f160 body=114 status=ok
// SIG undefined FUN_144e4f160(void)

ulonglong FUN_144e4f160(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 < 0x1555555555555556) {
    param_2 = param_2 * 0xc;
    if (param_2 < 0x1000) {
      if (param_2 != 0) {
        uVar2 = FUN_14494321d();
        return uVar2;
      }
      return 0;
    }
    if (param_2 < param_2 + 0x27) {
      lVar1 = FUN_14494321d(param_2 + 0x27);
      if (lVar1 != 0) {
        uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar2 - 8) = lVar1;
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14694ac37();
}



// FUNCTION 144e4f1e0 FUN_144e4f1e0 body=121 status=ok
// SIG undefined FUN_144e4f1e0(void)

void FUN_144e4f1e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = ((param_1[2] - lVar1) / 0xc) * 0xc;
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
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e4f260 FUN_144e4f260 body=175 status=ok
// SIG undefined FUN_144e4f260(void)

void FUN_144e4f260(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = ((param_1[2] - lVar1) / 0xc) * 0xc;
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
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0xc;
  param_1[2] = param_2 + param_4 * 0xc;
  return;
}



// FUNCTION 144e4f310 FUN_144e4f310 body=16 status=ok
// SIG undefined FUN_144e4f310(void)

void FUN_144e4f310(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e4f330 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<struct `protected: int __cdecl GSI1::readHash(unsigned
   short,long,long) __ptr64'::`2'::FileSymbolInfo>::deallocate(struct `protected: int __cdecl
   GSI1::readHash(unsigned short,long,long) __ptr64'::`2'::FileSymbolInfo * __ptr64 const,unsigned
   __int64) __ptr64
    public: void __cdecl std::allocator<struct GSISymbolEntry>::deallocate(struct GSISymbolEntry *
   __ptr64 const,unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x30;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 144e4f380 FUN_144e4f380 body=110 status=ok
// SIG undefined FUN_144e4f380(void)

ulonglong FUN_144e4f380(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 < 0x555555555555556) {
    param_2 = param_2 * 0x30;
    if (param_2 < 0x1000) {
      if (param_2 != 0) {
        uVar2 = FUN_14494321d();
        return uVar2;
      }
      return 0;
    }
    if (param_2 < param_2 + 0x27) {
      lVar1 = FUN_14494321d(param_2 + 0x27);
      if (lVar1 != 0) {
        uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar2 - 8) = lVar1;
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14694ac37();
}



// FUNCTION 144e4f3f0 FUN_144e4f3f0 body=137 status=ok
// SIG undefined FUN_144e4f3f0(void)

void FUN_144e4f3f0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*param_1 != 0) {
    FUN_144e5c970(*param_1,param_1[1],param_1);
    lVar1 = *param_1;
    uVar3 = ((param_1[2] - lVar1) / 0x30) * 0x30;
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
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e4f480 FUN_144e4f480 body=100 status=ok
// SIG undefined FUN_144e4f480(void)

void FUN_144e4f480(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != *(undefined8 **)(param_1 + 0x10)) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    uVar2 = param_2[1];
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    uVar2 = param_2[3];
    puVar1[2] = param_2[2];
    puVar1[3] = uVar2;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_2 + 5);
    *(undefined1 *)((longlong)puVar1 + 0x2c) = *(undefined1 *)((longlong)param_2 + 0x2c);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x30;
    return;
  }
  FUN_144e5d6d0();
  return;
}



// FUNCTION 144e4f4f0 FUN_144e4f4f0 body=42 status=ok
// SIG undefined FUN_144e4f4f0(void)

void FUN_144e4f4f0(longlong *param_1)

{
  if (*param_1 != param_1[1]) {
    FUN_144e5c970(*param_1,param_1[1],param_1);
    param_1[1] = *param_1;
  }
  return;
}



// FUNCTION 144e4f520 FUN_144e4f520 body=197 status=ok
// SIG undefined FUN_144e4f520(void)

void FUN_144e4f520(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*param_1 != 0) {
    FUN_144e5c970(*param_1,param_1[1],param_1);
    lVar1 = *param_1;
    uVar3 = ((param_1[2] - lVar1) / 0x30) * 0x30;
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
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x30 + param_2;
  param_1[2] = param_4 * 0x30 + param_2;
  return;
}



// FUNCTION 144e4f5f0 FUN_144e4f5f0 body=16 status=ok
// SIG undefined FUN_144e4f5f0(void)

void FUN_144e4f5f0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e4f610 FUN_144e4f610 body=3992 status=ok
// SIG undefined FUN_144e4f610(void)

void FUN_144e4f610(longlong param_1,longlong param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  byte *pbVar14;
  longlong lVar15;
  ulonglong uVar16;
  ushort uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined1 *puVar21;
  size_t _Size;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  byte *pbVar25;
  longlong lVar26;
  undefined8 *puVar27;
  longlong lVar28;
  undefined1 auStack_438 [32];
  undefined8 *local_418;
  undefined8 local_410;
  undefined8 **local_408;
  uint local_3f8 [2];
  undefined8 *local_3f0;
  undefined8 *local_3e8;
  undefined1 local_3e0 [8];
  undefined8 *local_3d8;
  longlong local_3d0;
  ulonglong local_3c8;
  longlong local_3c0;
  undefined8 *local_3b8;
  longlong local_3b0;
  longlong local_3a8;
  undefined8 *local_3a0;
  longlong local_398;
  longlong lStack_390;
  longlong local_388;
  undefined8 *local_380;
  longlong local_378;
  undefined8 uStack_370;
  longlong local_368;
  undefined8 *local_358;
  undefined8 *puStack_350;
  undefined8 *local_348;
  undefined8 *local_340;
  undefined **local_338 [4];
  int local_318;
  int local_314;
  undefined1 local_310 [24];
  longlong local_2f8;
  uint *local_2f0;
  uint *local_2e8;
  undefined1 local_2e0 [552];
  undefined1 local_b8 [96];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_438;
  local_340 = param_5;
  uVar24 = 0;
  local_3c0 = param_1;
  FUN_144e51ea0();
  local_3d8 = (undefined8 *)0x0;
  FUN_144e518f0(param_1,&local_3d8);
  local_398 = 0;
  lStack_390 = 0;
  local_388 = 0;
  FUN_144e53570(param_1,&local_398);
  uVar17 = 2;
  lVar12 = (lStack_390 - local_398) / 6 + (lStack_390 - local_398 >> 0x3f);
  lVar28 = lVar12 >> 3;
  lVar12 = lVar12 >> 0x3f;
  if (lVar28 != lVar12) {
    puVar9 = (undefined8 *)(local_398 + 0x10);
    uVar17 = 2;
    do {
      uVar17 = uVar17 + (short)*puVar9 + 3;
      uVar24 = uVar24 + 1;
      puVar9 = puVar9 + 6;
    } while (uVar24 < (ulonglong)(lVar28 - lVar12));
  }
  uVar24 = (longlong)local_3d8 + (ulonglong)uVar17;
  if (*(ulonglong *)(param_1 + 0xc0) < uVar24) {
    *(ulonglong *)(param_1 + 0xc0) = uVar24;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      thunk_FUN_1400020a8();
    }
    uVar7 = FUN_144a7d36f(uVar24);
    *(undefined8 *)(param_1 + 0xb8) = uVar7;
  }
  lVar15 = local_3c0;
  local_3a0 = *(undefined8 **)(param_1 + 0xb8);
  local_3b8 = (undefined8 *)((longlong)local_3a0 + (ulonglong)uVar17 + 0x58);
  local_3b0 = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    local_3b0 = *(longlong *)(param_1 + 0x88);
  }
  local_3a8 = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    local_3a8 = *(longlong *)(param_1 + 0x98);
  }
  uVar3 = *param_4;
  piVar13 = param_4 + 2;
  if (*(int *)(param_1 + 0x24) < (int)param_4[2]) {
    piVar13 = (int *)(param_1 + 0x24);
  }
  iVar8 = *piVar13;
  iVar22 = param_4[1];
  piVar13 = param_4 + 3;
  if (*(int *)(param_1 + 0x28) < (int)param_4[3]) {
    piVar13 = (int *)(param_1 + 0x28);
  }
  iVar23 = *piVar13;
  local_3a0[1] = 0;
  local_3a0[2] = 0;
  local_3a0[3] = 0;
  local_3a0[4] = 0;
  local_3a0[5] = 0;
  local_3a0[6] = 0;
  local_3a0[7] = 0;
  local_3a0[8] = 0;
  local_3a0[9] = 0;
  local_3a0[10] = 0;
  *local_3a0 = 2;
  local_3a0[10] = (longlong)*(int *)(local_3c0 + 0x10);
  local_418 = (undefined8 *)CONCAT44(local_418._4_4_,iVar23);
  FUN_144e54da0(local_3c0,uVar3,iVar22,iVar8);
  lVar11 = *(longlong *)(lVar15 + 0xb8);
  *(char *)(lVar11 + 0x58) = (char)uVar17;
  *(char *)(lVar11 + 0x59) = (char)(uVar17 >> 8);
  pbVar14 = (byte *)(lVar11 + 0x5a);
  uVar24 = 0;
  if (lVar28 != lVar12) {
    pbVar25 = (byte *)(local_398 + 0x20);
    do {
      pbVar10 = pbVar25 + -0x20;
      if (0xf < *(ulonglong *)(pbVar25 + -8)) {
        pbVar10 = *(byte **)pbVar10;
      }
      bVar2 = *pbVar10;
      while (bVar2 != 0) {
        *pbVar14 = *pbVar10;
        pbVar14 = pbVar14 + 1;
        pbVar10 = pbVar10 + 1;
        bVar2 = *pbVar10;
      }
      *pbVar14 = *pbVar10;
      pbVar14[1] = pbVar25[0xc] & 1 | (pbVar25[8] + 1) * '\x10' | (*pbVar25 & 3) << 2;
      pbVar14[2] = pbVar25[4];
      pbVar14 = pbVar14 + 3;
      uVar24 = uVar24 + 1;
      pbVar25 = pbVar25 + 0x30;
    } while (uVar24 < (ulonglong)(lVar28 - lVar12));
  }
  FUN_144e59da0(&local_378,(*(longlong *)(lVar15 + 0x48) - *(longlong *)(lVar15 + 0x40)) / 0x98,
                local_3e0);
  lVar12 = *(longlong *)(lVar15 + 0x48) - *(longlong *)(lVar15 + 0x40);
  lVar12 = lVar12 / 0x26 + (lVar12 >> 0x3f);
  uVar24 = (lVar12 >> 2) - (lVar12 >> 0x3f);
  local_358 = (undefined8 *)0x0;
  puStack_350 = (undefined8 *)0x0;
  local_3d8 = (undefined8 *)0x0;
  local_348 = (undefined8 *)0x0;
  if (uVar24 != 0) {
    if (0xaaaaaaaaaaaaaaa < uVar24) {
      FUN_144e59970();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar16 = uVar24 * 0x18;
    if (uVar16 < 0x1000) {
      if (uVar16 == 0) {
        puStack_350 = (undefined8 *)0x0;
        local_348 = (undefined8 *)0x0;
        local_358 = puStack_350;
      }
      else {
        puStack_350 = (undefined8 *)FUN_14494321d();
        local_348 = puStack_350 + uVar24 * 3;
        local_358 = puStack_350;
      }
    }
    else {
      if (uVar16 + 0x27 <= uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_14694ac37();
      }
      lVar12 = FUN_14494321d();
      if (lVar12 == 0) goto LAB_144e5043e;
      puStack_350 = (undefined8 *)(lVar12 + 0x27U & 0xffffffffffffffe0);
      puStack_350[-1] = lVar12;
      local_348 = puStack_350 + uVar24 * 3;
      local_358 = puStack_350;
    }
    do {
      *puStack_350 = 0;
      puStack_350[1] = 0;
      puStack_350[2] = 0;
      puStack_350 = puStack_350 + 3;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
  puVar27 = local_358;
  uVar24 = 0;
  lVar12 = *(longlong *)(lVar15 + 0x48);
  lVar28 = *(longlong *)(lVar15 + 0x40);
  lVar11 = lVar12 - lVar28 >> 0x3f;
  local_3d0 = param_2;
  puVar9 = local_3a0;
  local_3f0 = local_358;
  local_380 = puStack_350;
  local_3d8 = local_348;
  if ((lVar12 - lVar28) / 0x98 + lVar11 != lVar11) {
    do {
      puVar1 = (uint *)(local_378 + (uVar24 >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << ((byte)uVar24 & 0x1f));
      uVar24 = (ulonglong)((int)uVar24 + 1);
      lVar12 = *(longlong *)(lVar15 + 0x48);
      lVar28 = *(longlong *)(lVar15 + 0x40);
    } while (uVar24 < (ulonglong)((lVar12 - lVar28) / 0x98));
  }
  for (; local_3a0 = puVar9, iVar22 <= iVar23; iVar22 = iVar22 + 1) {
    uVar24 = 0;
    lVar11 = lVar12 - lVar28 >> 0x3f;
    if ((lVar12 - lVar28) / 0x98 + lVar11 != lVar11) {
      do {
        lVar28 = uVar24 * 0x98 + lVar28;
        uVar20 = *(uint *)(lVar28 + 0x28);
        if (iVar22 < 0) {
          if ((int)uVar20 < 0) {
            iVar8 = ~uVar20 - iVar22;
          }
          else {
            iVar8 = (uVar20 - iVar22) + -1;
          }
          iVar8 = -(iVar8 / (int)uVar20);
        }
        else {
          iVar8 = iVar22 / (int)uVar20;
        }
        if (iVar22 == iVar8 * uVar20) {
          puVar9 = puVar27 + uVar24 * 3;
          plVar18 = (longlong *)puVar9[1];
          if (plVar18 == (longlong *)puVar9[2]) {
            FUN_1473c5f1c(puVar9,plVar18,&local_3d0);
          }
          else {
            *plVar18 = param_2;
            puVar9[1] = puVar9[1] + 8;
          }
          iVar8 = FUN_144e66f70(*(undefined4 *)(lVar28 + 0x2c));
          param_2 = param_2 + iVar8 * *(int *)(lVar28 + 0x34);
          local_3d0 = param_2;
        }
        uVar24 = (ulonglong)((int)uVar24 + 1);
        lVar12 = *(longlong *)(lVar15 + 0x48);
        lVar28 = *(longlong *)(lVar15 + 0x40);
      } while (uVar24 < (ulonglong)((lVar12 - lVar28) / 0x98));
    }
    puVar9 = local_3a0;
  }
  uVar24 = 0;
  lVar12 = *(longlong *)(lVar15 + 0x58);
  lVar11 = *(longlong *)(lVar15 + 0x60) - lVar12;
  lVar28 = lVar11 >> 0x3f;
  if (lVar11 / 0xc + lVar28 != lVar28) {
    do {
      lVar11 = (longlong)*(int *)(lVar12 + 8 + uVar24 * 0xc);
      lVar28 = *(longlong *)(lVar15 + 0x40);
      lVar15 = (longlong)*(int *)(lVar12 + 4 + uVar24 * 0xc);
      lVar12 = (longlong)*(int *)(lVar12 + uVar24 * 0xc);
      lVar26 = lVar12 * 0x98;
      local_3e8 = local_3f0 + lVar12 * 3;
      uVar20 = *(uint *)(lVar11 * 0x98 + 0x2c + lVar28);
      local_3c8 = CONCAT44(local_3c8._4_4_,uVar20);
      uVar4 = *(uint *)(lVar15 * 0x98 + 0x2c + lVar28);
      local_3d0 = CONCAT44(local_3d0._4_4_,uVar4);
      uVar5 = *(uint *)(lVar26 + 0x2c + lVar28);
      local_408 = (undefined8 **)CONCAT44(local_408._4_4_,*(undefined4 *)(lVar26 + 0x38 + lVar28));
      local_410 = CONCAT44(local_410._4_4_,*(undefined4 *)(lVar26 + 0x34 + lVar28));
      local_418 = (undefined8 *)&DAT_149a63d60;
      local_3f8[0] = uVar5;
      FUN_144e57e70(local_338,*(float *)(local_3c0 + 0x104) / 100000.0,local_3b0,local_3a8);
      local_338[0] = Imf_3_2::DwaCompressor::LossyDctEncoderCsc::vftable;
      if (local_2f0 == local_2e8) {
        FUN_144e5d350(&local_2f8,local_2f0,local_3f8);
      }
      else {
        *local_2f0 = uVar5;
        local_2f0 = local_2f0 + 1;
      }
      if (local_2f0 == local_2e8) {
        FUN_144e5d350(&local_2f8,local_2f0,&local_3d0);
      }
      else {
        *local_2f0 = uVar4;
        local_2f0 = local_2f0 + 1;
      }
      if (local_2f0 == local_2e8) {
        FUN_144e5d350(&local_2f8,local_2f0,&local_3c8);
      }
      else {
        *local_2f0 = uVar20;
        local_2f0 = local_2f0 + 1;
      }
      FUN_144e59800(local_310,local_3e8);
      FUN_144e59800(local_310,puVar27 + lVar15 * 3);
      FUN_144e59800(local_310,puVar27 + lVar11 * 3);
      FUN_144e58640(local_338);
      puVar9 = local_3a0;
      lVar15 = local_3c0;
      local_3a0[8] = local_3a0[8] + (longlong)local_318;
      local_3a0[9] = local_3a0[9] + (longlong)local_314;
      local_3b0 = local_3b0 + (longlong)local_318 * 2;
      local_3a8 = local_3a8 + (longlong)local_314 * 2;
      iVar8 = *(int *)(*(longlong *)(local_3c0 + 0x58) + uVar24 * 0xc);
      puVar1 = (uint *)(local_378 + ((ulonglong)(longlong)iVar8 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
      iVar8 = *(int *)(*(longlong *)(local_3c0 + 0x58) + 4 + uVar24 * 0xc);
      puVar1 = (uint *)(local_378 + ((ulonglong)(longlong)iVar8 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
      iVar8 = *(int *)(*(longlong *)(local_3c0 + 0x58) + 8 + uVar24 * 0xc);
      puVar1 = (uint *)(local_378 + ((ulonglong)(longlong)iVar8 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
      local_338[0] = Imf_3_2::DwaCompressor::LossyDctEncoderBase::vftable;
      FUN_144e57960(local_2e0);
      if (local_2f8 != 0) {
        uVar16 = ((longlong)local_2e8 - local_2f8 >> 2) * 4;
        lVar12 = local_2f8;
        if (0xfff < uVar16) {
          uVar16 = uVar16 + 0x27;
          lVar12 = *(longlong *)(local_2f8 + -8);
          if (0x1f < (local_2f8 - lVar12) - 8U) goto LAB_144e501cb;
        }
        thunk_FUN_1400020a8(lVar12,uVar16);
        local_2f8 = 0;
        local_2f0 = (uint *)0x0;
        local_2e8 = (uint *)0x0;
      }
      FUN_144e598e0(local_310);
      uVar24 = (ulonglong)((int)uVar24 + 1);
      lVar12 = *(longlong *)(lVar15 + 0x58);
      puVar27 = local_3f0;
    } while (uVar24 < (ulonglong)((*(longlong *)(lVar15 + 0x60) - lVar12) / 0xc));
  }
  uVar24 = 0;
  local_3f8[0] = 0;
  lVar12 = *(longlong *)(lVar15 + 0x40);
  if ((*(longlong *)(lVar15 + 0x48) - lVar12) / 0x98 != 0) {
    do {
      lVar11 = local_3a8;
      lVar28 = local_3b0;
      puVar27 = local_3f0;
      uVar19 = 0;
      lVar12 = uVar24 * 0x98 + lVar12;
      uVar16 = uVar24 >> 5;
      uVar20 = 1 << ((byte)uVar24 & 0x1f);
      local_3d0 = CONCAT44(local_3d0._4_4_,uVar20);
      local_3c8 = uVar16;
      if ((*(uint *)(local_378 + uVar16 * 4) & uVar20) == 0) {
        iVar8 = *(int *)(lVar12 + 0x20);
        if (iVar8 == 0) {
          iVar8 = FUN_144e66f70(*(undefined4 *)(lVar12 + 0x2c));
          puVar27 = local_3f0;
          lVar28 = local_3f0[uVar24 * 3];
          if (local_3f0[uVar24 * 3 + 1] - lVar28 >> 3 != 0) {
            _Size = (size_t)(iVar8 * *(int *)(lVar12 + 0x34));
            do {
              memcpy(*(void **)(lVar12 + 0x48),*(void **)(lVar28 + uVar19 * 8),_Size);
              *(longlong *)(lVar12 + 0x48) = *(longlong *)(lVar12 + 0x48) + _Size;
              uVar19 = (ulonglong)((int)uVar19 + 1);
              lVar28 = puVar27[uVar24 * 3];
            } while (uVar19 < (ulonglong)(puVar27[uVar24 * 3 + 1] - lVar28 >> 3));
          }
          puVar9[1] = puVar9[1] + (longlong)*(int *)(lVar12 + 0x94);
LAB_144e50168:
          uVar24 = (ulonglong)local_3f8[0];
          lVar15 = local_3c0;
        }
        else if (iVar8 == 1) {
          puVar27 = local_3f0 + uVar24 * 3;
          uVar20 = *(uint *)(lVar12 + 0x2c);
          local_3c8 = (ulonglong)uVar20;
          local_418 = (undefined8 *)&DAT_149a63d60;
          if (*(char *)(lVar12 + 0x30) != '\0') {
            local_418 = (undefined8 *)0x0;
          }
          local_408 = (undefined8 **)CONCAT44(local_408._4_4_,*(undefined4 *)(lVar12 + 0x38));
          local_410 = CONCAT44(local_410._4_4_,*(undefined4 *)(lVar12 + 0x34));
          FUN_144e57e70(local_338,*(float *)(lVar15 + 0x104) / 100000.0,local_3b0,local_3a8);
          local_338[0] = Imf_3_2::DwaCompressor::LossyDctEncoder::vftable;
          FUN_144e59800(local_310,puVar27);
          if (local_2f0 == local_2e8) {
            FUN_144e5d350(&local_2f8,local_2f0,&local_3c8);
          }
          else {
            *local_2f0 = uVar20;
            local_2f0 = local_2f0 + 1;
          }
          FUN_144e58640(local_338);
          puVar9[8] = puVar9[8] + (longlong)local_318;
          puVar9[9] = puVar9[9] + (longlong)local_314;
          local_3b0 = lVar28 + (longlong)local_318 * 2;
          local_3a8 = lVar11 + (longlong)local_314 * 2;
          local_338[0] = Imf_3_2::DwaCompressor::LossyDctEncoderBase::vftable;
          FUN_144e57960(local_2e0);
          if (local_2f8 != 0) {
            uVar24 = ((longlong)local_2e8 - local_2f8 >> 2) * 4;
            lVar12 = local_2f8;
            if (0xfff < uVar24) {
              uVar24 = uVar24 + 0x27;
              lVar12 = *(longlong *)(local_2f8 + -8);
              if (0x1f < (local_2f8 - lVar12) - 8U) {
LAB_144e501cb:
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            thunk_FUN_1400020a8(lVar12,uVar24);
            local_2f8 = 0;
            local_2f0 = (uint *)0x0;
            local_2e8 = (uint *)0x0;
          }
          FUN_144e598e0(local_310);
          uVar24 = (ulonglong)local_3f8[0];
        }
        else if (iVar8 == 2) {
          local_3e8 = (undefined8 *)(uVar24 * 3);
          lVar28 = local_3f0[uVar24 * 3];
          lVar15 = local_3c0;
          if (local_3f0[uVar24 * 3 + 1] - lVar28 >> 3 != 0) {
            do {
              iVar8 = 0;
              puVar21 = *(undefined1 **)(lVar28 + uVar19 * 8);
              if (0 < *(int *)(lVar12 + 0x34)) {
                do {
                  iVar23 = 0;
                  iVar22 = FUN_144e66f70(*(undefined4 *)(lVar12 + 0x2c));
                  if (0 < iVar22) {
                    plVar18 = (longlong *)(lVar12 + 0x70);
                    do {
                      *(undefined1 *)*plVar18 = *puVar21;
                      *plVar18 = *plVar18 + 1;
                      puVar21 = puVar21 + 1;
                      iVar23 = iVar23 + 1;
                      plVar18 = plVar18 + 1;
                      iVar22 = FUN_144e66f70(*(undefined4 *)(lVar12 + 0x2c));
                    } while (iVar23 < iVar22);
                  }
                  iVar8 = iVar8 + 1;
                } while (iVar8 < *(int *)(lVar12 + 0x34));
              }
              iVar8 = FUN_144e66f70(*(undefined4 *)(lVar12 + 0x2c));
              local_3a0[7] = local_3a0[7] + (longlong)(iVar8 * *(int *)(lVar12 + 0x34));
              uVar19 = (ulonglong)((int)uVar19 + 1);
              lVar28 = puVar27[(longlong)local_3e8];
              uVar16 = local_3c8;
            } while (uVar19 < (ulonglong)(puVar27[(longlong)local_3e8 + 1] - lVar28 >> 3));
            goto LAB_144e50168;
          }
        }
        puVar1 = (uint *)(local_378 + uVar16 * 4);
        *puVar1 = *puVar1 | (uint)local_3d0;
      }
      local_3f8[0] = (int)uVar24 + 1;
      uVar24 = (ulonglong)local_3f8[0];
      lVar12 = *(longlong *)(lVar15 + 0x40);
      puVar9 = local_3a0;
    } while ((ulonglong)local_3f8[0] < (ulonglong)((*(longlong *)(lVar15 + 0x48) - lVar12) / 0x98));
  }
  puVar9 = local_3a0;
  puVar27 = local_3b8;
  if (local_3a0[1] != 0) {
    local_410 = FUN_14521ad00();
    puVar27 = local_3b8;
    local_408 = &local_3e8;
    local_418 = local_3b8;
    iVar8 = FUN_14521ad50(0,9,*(undefined8 *)(lVar15 + 200),puVar9[1]);
    if (iVar8 != 0) {
      FUN_144e408c0(local_b8,"Data compression (zlib) failed.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d53a8);
    }
    puVar9[2] = local_3e8;
    puVar27 = (undefined8 *)((longlong)puVar27 + (longlong)local_3e8);
  }
  lVar12 = puVar9[8];
  if (lVar12 != 0) {
    if (*(int *)(lVar15 + 0x10) == 0) {
      iVar8 = FUN_14521aee0(*(undefined8 *)(lVar15 + 0x88),lVar12,puVar27);
      puVar9[3] = (longlong)iVar8;
    }
    else if (*(int *)(lVar15 + 0x10) == 1) {
      local_410 = FUN_14521ad00(lVar12 * 2);
      local_408 = &local_3b8;
      local_418 = puVar27;
      iVar8 = FUN_14521ad50(0,9,*(undefined8 *)(lVar15 + 0x88),lVar12 * 2);
      if (iVar8 != 0) {
        FUN_144e41060(local_b8,"Data compression (zlib) failed.");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d51d8);
      }
      puVar9[3] = local_3b8;
    }
    puVar27 = (undefined8 *)((longlong)puVar27 + puVar9[3]);
  }
  if (puVar9[9] != 0) {
    iVar8 = FUN_144e4a780(*(undefined8 *)(lVar15 + 0xf8),*(undefined8 *)(lVar15 + 0x98),
                          (int)puVar9[9] * 2,puVar27);
    puVar9[4] = (longlong)iVar8;
    puVar27 = (undefined8 *)((longlong)puVar27 + (longlong)iVar8);
  }
  if (puVar9[7] != 0) {
    iVar8 = FUN_14521c900(puVar9[7],*(undefined8 *)(lVar15 + 0xd8),*(undefined8 *)(lVar15 + 0xa8));
    puVar9[6] = (longlong)iVar8;
    local_410 = FUN_14521ad00();
    local_408 = &local_3b8;
    local_418 = puVar27;
    iVar8 = FUN_14521ad50(0,9,*(undefined8 *)(lVar15 + 0xa8),puVar9[6]);
    if (iVar8 != 0) {
      FUN_144e408c0(local_b8,"Error compressing RLE\'d data.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d53a8);
    }
    puVar9[5] = local_3b8;
  }
  puVar9 = local_3f0;
  lVar28 = 0;
  lVar12 = 0;
  lVar11 = 0xb;
  do {
    lVar26 = *(longlong *)(lVar15 + 0xb8);
    uVar7 = *(undefined8 *)(lVar28 + lVar26);
    *(char *)(lVar12 + lVar26) = (char)uVar7;
    *(char *)(lVar12 + 1 + lVar26) = (char)((ulonglong)uVar7 >> 8);
    *(char *)(lVar12 + 2 + lVar26) = (char)((ulonglong)uVar7 >> 0x10);
    *(char *)(lVar12 + 3 + lVar26) = (char)((ulonglong)uVar7 >> 0x18);
    *(char *)(lVar12 + 4 + lVar26) = (char)((ulonglong)uVar7 >> 0x20);
    *(char *)(lVar12 + 5 + lVar26) = (char)((ulonglong)uVar7 >> 0x28);
    *(char *)(lVar12 + 6 + lVar26) = (char)((ulonglong)uVar7 >> 0x30);
    *(char *)(lVar12 + 7 + lVar26) = (char)((ulonglong)uVar7 >> 0x38);
    lVar12 = lVar12 + 8;
    lVar28 = lVar28 + 8;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  *local_340 = *(undefined8 *)(lVar15 + 0xb8);
  if (local_3f0 != (undefined8 *)0x0) {
    FUN_144e5ca00(local_3f0,local_380);
    uVar24 = (((longlong)local_3d8 - (longlong)puVar9) / 0x18) * 0x18;
    puVar27 = puVar9;
    if (0xfff < uVar24) {
      uVar24 = uVar24 + 0x27;
      puVar27 = (undefined8 *)puVar9[-1];
      if (0x1f < (ulonglong)((longlong)puVar9 + (-8 - (longlong)puVar27))) {
LAB_144e5043e:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(puVar27,uVar24);
  }
  if (local_378 != 0) {
    uVar24 = (local_368 - local_378 >> 2) * 4;
    lVar12 = local_378;
    if (0xfff < uVar24) {
      uVar24 = uVar24 + 0x27;
      lVar12 = *(longlong *)(local_378 + -8);
      if (0x1f < (local_378 - lVar12) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar12,uVar24);
    local_378 = 0;
    uStack_370 = 0;
    local_368 = 0;
  }
  lVar12 = local_398;
  if (local_398 != 0) {
    FUN_144e5c970(local_398,lStack_390,&local_398);
    uVar24 = ((local_388 - lVar12) / 0x30) * 0x30;
    lVar28 = lVar12;
    if (0xfff < uVar24) {
      uVar24 = uVar24 + 0x27;
      lVar28 = *(longlong *)(lVar12 + -8);
      if (0x1f < (lVar12 - lVar28) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar28,uVar24);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_438);
}



// FUNCTION 144e505e0 FUN_144e505e0 body=4818 status=ok
// SIG undefined FUN_144e505e0(void)

void FUN_144e505e0(longlong *param_1,ulonglong *param_2,int param_3,uint *param_4,longlong *param_5)

{
  longlong lVar1;
  ushort uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  undefined **ppuVar10;
  uint *puVar11;
  undefined6 *puVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  uint uVar17;
  size_t _Size;
  short sVar18;
  uint uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined8 **ppuVar23;
  ulonglong uVar24;
  undefined1 *puVar25;
  uint uVar26;
  longlong lVar27;
  undefined8 **ppuVar28;
  undefined8 **ppuVar29;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  undefined8 **local_2b0;
  undefined8 *local_2a8;
  undefined *local_2a0;
  undefined4 local_298;
  undefined4 local_290;
  undefined4 local_288;
  undefined4 local_280;
  undefined4 local_278;
  uint local_268;
  uint local_264;
  uint local_260;
  uint local_25c;
  ulonglong *local_258;
  undefined8 *local_250;
  undefined8 *local_248;
  undefined1 local_240 [8];
  undefined8 *local_238;
  undefined8 *local_230;
  longlong local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210 [2];
  longlong local_200;
  undefined8 *local_1f0;
  undefined8 *puStack_1e8;
  ulonglong *local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  undefined **local_1c8;
  int local_1bc;
  int local_1b8;
  undefined1 local_188 [24];
  longlong local_170;
  undefined8 local_168;
  longlong lStack_160;
  undefined1 local_158 [32];
  undefined **local_138;
  int local_12c;
  int local_128;
  ulonglong local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined1 local_10c;
  undefined1 local_f8 [24];
  longlong local_e0;
  undefined8 local_d8;
  longlong lStack_d0;
  undefined1 local_c8 [32];
  undefined8 local_a8;
  undefined8 *puStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  undefined8 *local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  int iStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  ulonglong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar24 = (ulonglong)param_3;
  local_1d0 = param_5;
  local_25c = *param_4;
  puVar11 = param_4 + 2;
  if ((int)*(uint *)((longlong)param_1 + 0x24) < (int)param_4[2]) {
    puVar11 = (uint *)((longlong)param_1 + 0x24);
  }
  local_264 = *puVar11;
  local_260 = param_4[1];
  puVar11 = param_4 + 3;
  if ((int)*(uint *)(param_1 + 5) < (int)param_4[3]) {
    puVar11 = (uint *)(param_1 + 5);
  }
  local_268 = *puVar11;
  local_1d8 = param_1;
  if (uVar24 < 0x58) {
    FUN_144e41060(&local_138,"Error uncompressing DWA data(truncated header).");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_138,(ThrowInfo *)&DAT_14c6d51d8);
  }
  local_a8 = *param_2;
  puStack_a0 = (undefined8 *)param_2[1];
  local_98 = param_2[2];
  uStack_90 = param_2[3];
  local_88 = param_2[4];
  uStack_80 = param_2[5];
  local_78 = (undefined8 *)param_2[6];
  uStack_70 = param_2[7];
  local_68 = (int)param_2[8];
  iStack_64 = *(int *)((longlong)param_2 + 0x44);
  uStack_60 = (int)param_2[9];
  iStack_5c = *(int *)((longlong)param_2 + 0x4c);
  local_58 = param_2[10];
  puVar20 = &local_a8;
  puVar12 = (undefined6 *)((longlong)&local_a8 + 2);
  lVar21 = 0xb;
  do {
    *puVar20 = CONCAT71(CONCAT61(*puVar12,*(undefined1 *)((longlong)puVar12 + -1)),
                        *(undefined1 *)((longlong)puVar12 + -2));
    puVar16 = local_78;
    uVar4 = local_88;
    uVar22 = uStack_90;
    uVar13 = local_98;
    puVar12 = puVar12 + 1;
    puVar20 = puVar20 + 1;
    lVar21 = lVar21 + -1;
  } while (lVar21 != 0);
  lVar21 = uStack_90 + local_98 + local_88 + uStack_80;
  puVar14 = param_2 + 0xb;
  if ((((uVar24 < lVar21 + 0x58U) || (uVar24 < local_98)) || (uVar24 < uStack_90)) ||
     ((uVar24 < local_88 || (uVar24 < uStack_80)))) {
    FUN_144e41060(&local_138,"Error uncompressing DWA data(truncated file).");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_138,(ThrowInfo *)&DAT_14c6d51d8);
  }
  if (((((longlong)puStack_a0 < 0) || ((longlong)local_98 < 0)) ||
      (((longlong)uStack_90 < 0 ||
       ((((longlong)local_88 < 0 || ((longlong)uStack_80 < 0)) || ((longlong)local_78 < 0)))))) ||
     ((((longlong)uStack_70 < 0 || (iStack_64 < 0)) || (iStack_5c < 0)))) {
    FUN_144e41060(&local_138,"Error uncompressing DWA data (corrupt header).");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_138,(ThrowInfo *)&DAT_14c6d51d8);
  }
  if (local_a8 < 2) {
    FUN_144e52860(param_1);
  }
  else {
    param_2 = (ulonglong *)((longlong)param_2 + 0x5a);
    uVar2 = (ushort)*puVar14;
    local_258 = param_2;
    if (uVar2 < 2) {
      FUN_144e41060(&local_138,"Error uncompressing DWA data (corrupt header file).");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_138,(ThrowInfo *)&DAT_14c6d51d8);
    }
    if (uVar24 < (ulonglong)uVar2 + 0x58 + lVar21) {
      FUN_144e41060(&local_138,"Error uncompressing DWA data (truncated file).");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_138,(ThrowInfo *)&DAT_14c6d51d8);
    }
    FUN_144e4f4f0(param_1 + 0xe);
    sVar18 = uVar2 - 2;
    puVar14 = param_2;
    puVar16 = local_78;
    while (local_78 = puVar16, sVar18 != 0) {
      FUN_144e561b0(&local_138,&local_258,sVar18);
      lVar21 = param_1[0xf];
      if (lVar21 == param_1[0x10]) {
        FUN_144e5d880(param_1 + 0xe,lVar21,&local_138);
      }
      else {
        FUN_144b65a50(lVar21,&local_138);
        *(undefined4 *)(lVar21 + 0x20) = local_118;
        *(undefined4 *)(lVar21 + 0x24) = local_114;
        *(undefined4 *)(lVar21 + 0x28) = local_110;
        *(undefined1 *)(lVar21 + 0x2c) = local_10c;
        param_1[0xf] = param_1[0xf] + 0x30;
      }
      sVar18 = sVar18 - ((short)local_128 + 3);
      if (0xf < local_120) {
        uVar24 = local_120 + 1;
        ppuVar10 = local_138;
        if (0xfff < uVar24) {
          uVar24 = local_120 + 0x28;
          ppuVar10 = (undefined **)local_138[-1];
          if (0x1f < (ulonglong)((longlong)local_138 + (-8 - (longlong)ppuVar10))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1400020a8(ppuVar10,uVar24);
      }
      puVar14 = local_258;
      puVar16 = local_78;
    }
  }
  local_248 = (undefined8 *)0x0;
  FUN_144e518f0(param_1,&local_248);
  iVar6 = (**(code **)(*param_1 + 8))(param_1);
  if ((ulonglong)param_1[0x18] < (ulonglong)(longlong)(iVar6 * *(int *)((longlong)param_1 + 0x14)))
  {
    iVar6 = (**(code **)(*param_1 + 8))(param_1);
    param_1[0x18] = (longlong)(iVar6 * *(int *)((longlong)param_1 + 0x14));
    if (param_1[0x17] != 0) {
      thunk_FUN_1400020a8();
    }
    iVar6 = (**(code **)(*param_1 + 8))(param_1);
    lVar21 = FUN_144a7d36f((longlong)(iVar6 * *(int *)((longlong)param_1 + 0x14)));
    param_1[0x17] = lVar21;
  }
  local_238 = (undefined8 *)0x0;
  if ((undefined8 *)param_1[0x11] != (undefined8 *)0x0) {
    local_238 = (undefined8 *)param_1[0x11];
  }
  local_230 = (undefined8 *)0x0;
  if ((undefined8 *)param_1[0x13] != (undefined8 *)0x0) {
    local_230 = (undefined8 *)param_1[0x13];
  }
  lVar21 = uVar13 + (longlong)puVar14;
  local_218 = uVar22 + lVar21;
  local_258 = (ulonglong *)(local_218 + uVar4);
  if (2 < local_a8) {
    FUN_144e41060(&local_138,"Invalid version of compressed data block");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_138,(ThrowInfo *)&DAT_14c6d51d8);
  }
  local_2b8 = (undefined8 *)CONCAT44(local_2b8._4_4_,local_268);
  FUN_144e54da0(param_1,local_25c,local_260);
  if (uVar13 != 0) {
    if ((undefined8 *)param_1[0x1c] < puStack_a0) {
      FUN_144e41060(&local_138,"Error uncompressing DWA data(corrupt header).");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_138,(ThrowInfo *)&DAT_14c6d51d8);
    }
    local_2b0 = (undefined8 **)0x0;
    local_2b8 = puStack_a0;
    iVar6 = FUN_14521ae20(0,puVar14,uVar13);
    if (iVar6 != 0) {
      FUN_144e408c0(&local_138,"Error uncompressing UNKNOWN data.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_138,(ThrowInfo *)&DAT_14c6d53a8);
    }
  }
  if (uVar22 != 0) {
    if ((param_1[0x11] == 0) ||
       (puVar20 = (undefined8 *)(CONCAT44(iStack_64,local_68) * 2),
       (undefined8 *)param_1[0x12] < puVar20)) {
      FUN_144e41060(&local_138,"Error uncompressing DWA data(corrupt header).");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_138,(ThrowInfo *)&DAT_14c6d51d8);
    }
    if (local_58 == 0) {
      FUN_14521b090(lVar21,uVar22 & 0xffffffff);
    }
    else {
      if (local_58 != 1) {
        FUN_144e41570(&local_138,"Unknown AC Compression");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_138,(ThrowInfo *)&DAT_14c6d53e0);
      }
      local_2b0 = &local_248;
      local_2b8 = puVar20;
      iVar6 = FUN_14521ae20(0,lVar21,uVar22);
      if (iVar6 != 0) {
        FUN_144e41060(&local_138,"Data decompression (zlib) failed.");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_138,(ThrowInfo *)&DAT_14c6d51d8);
      }
      if (puVar20 != local_248) {
        FUN_144e41060(&local_138,"AC data corrupt.");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_138,(ThrowInfo *)&DAT_14c6d51d8);
      }
    }
  }
  if (uVar4 == 0) {
    if (CONCAT44(iStack_5c,uStack_60) != 0) {
      FUN_144e408c0(&local_138,"DC data corrupt.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_138,(ThrowInfo *)&DAT_14c6d53a8);
    }
  }
  else {
    uVar24 = CONCAT44(iStack_5c,uStack_60) * 2;
    if ((ulonglong)param_1[0x14] < uVar24) {
      FUN_144e41060(&local_138,"Error uncompressing DWA data(corrupt header).");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_138,(ThrowInfo *)&DAT_14c6d51d8);
    }
    iVar6 = FUN_144e4a8a0(param_1[0x1f],local_218,uVar4 & 0xffffffff);
    if ((longlong)iVar6 != uVar24) {
      FUN_144e408c0(&local_138,"DC data corrupt.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_138,(ThrowInfo *)&DAT_14c6d53a8);
    }
  }
  uVar24 = uStack_70;
  if (uStack_70 != 0) {
    if (((undefined8 *)param_1[0x16] < puVar16) || ((ulonglong)param_1[0x1e] < uStack_70)) {
      FUN_144e41060(&local_138,"Error uncompressing DWA data(corrupt header).");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_138,(ThrowInfo *)&DAT_14c6d51d8);
    }
    local_2b0 = &local_248;
    local_2b8 = puVar16;
    iVar6 = FUN_14521ae20(0,local_258,uStack_80,param_1[0x15]);
    if (iVar6 != 0) {
      FUN_144e408c0(&local_138,"Error uncompressing RLE data.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_138,(ThrowInfo *)&DAT_14c6d53a8);
    }
    if (local_248 != puVar16) {
      FUN_144e408c0(&local_138,"RLE data corrupted");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_138,(ThrowInfo *)&DAT_14c6d53a8);
    }
    iVar6 = FUN_14521ca00((ulonglong)puVar16 & 0xffffffff,uVar24 & 0xffffffff,param_1[0x15]);
    if ((longlong)iVar6 != uVar24) {
      FUN_144e408c0(&local_138,"RLE data corrupted");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_138,(ThrowInfo *)&DAT_14c6d53a8);
    }
  }
  FUN_144e59da0(local_210,(param_1[9] - param_1[8]) / 0x98,local_240);
  lVar21 = (param_1[9] - param_1[8]) / 0x26 + (param_1[9] - param_1[8] >> 0x3f);
  uVar24 = (lVar21 >> 2) - (lVar21 >> 0x3f);
  local_1f0 = (undefined8 *)0x0;
  puStack_1e8 = (undefined8 *)0x0;
  local_258 = (ulonglong *)0x0;
  local_1e0 = (ulonglong *)0x0;
  if (uVar24 != 0) {
    if (0xaaaaaaaaaaaaaaa < uVar24) {
      FUN_144e57880();
LAB_144e51873:
                    /* WARNING: Subroutine does not return */
      FUN_14694ac37();
    }
    uVar13 = uVar24 * 0x18;
    if (uVar13 < 0x1000) {
      if (uVar13 == 0) {
        puStack_1e8 = (undefined8 *)0x0;
        local_1e0 = (ulonglong *)0x0;
        local_1f0 = puStack_1e8;
      }
      else {
        puStack_1e8 = (undefined8 *)FUN_14494321d(uVar13);
        local_1e0 = puStack_1e8 + uVar24 * 3;
        local_1f0 = puStack_1e8;
      }
    }
    else {
      if (uVar13 + 0x27 <= uVar13) goto LAB_144e51873;
      lVar21 = FUN_14494321d();
      if (lVar21 == 0) goto LAB_144e51508;
      puStack_1e8 = (undefined8 *)(lVar21 + 0x27U & 0xffffffffffffffe0);
      puStack_1e8[-1] = lVar21;
      local_1e0 = puStack_1e8 + uVar24 * 3;
      local_1f0 = puStack_1e8;
    }
    do {
      *puStack_1e8 = 0;
      puStack_1e8[1] = 0;
      puStack_1e8[2] = 0;
      puStack_1e8 = puStack_1e8 + 3;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
  puVar20 = local_1f0;
  uVar26 = 0;
  lVar21 = param_1[9];
  lVar15 = param_1[8];
  lVar27 = lVar21 - lVar15 >> 0x3f;
  if ((lVar21 - lVar15) / 0x98 + lVar27 != lVar27) {
    uVar24 = 0;
    do {
      puVar11 = (uint *)(local_210[0] + (uVar24 >> 5) * 4);
      *puVar11 = *puVar11 & ~(1 << ((byte)uVar24 & 0x1f));
      uVar26 = uVar26 + 1;
      lVar21 = param_1[9];
      lVar15 = param_1[8];
      uVar24 = (ulonglong)uVar26;
    } while (uVar24 < (ulonglong)((lVar21 - lVar15) / 0x98));
  }
  lVar27 = param_1[0x17];
  uVar26 = local_268;
  uVar19 = local_260;
  local_258 = local_1e0;
  local_250 = local_1f0;
  local_248 = puStack_1e8;
  local_220 = lVar27;
  local_218 = lVar27;
  if ((int)local_260 <= (int)local_268) {
    do {
      uVar17 = 0;
      lVar1 = lVar21 - lVar15 >> 0x3f;
      lVar5 = local_218;
      if ((lVar21 - lVar15) / 0x98 + lVar1 != lVar1) {
        uVar24 = 0;
        do {
          lVar15 = uVar24 * 0x98 + lVar15;
          uVar26 = *(uint *)(lVar15 + 0x28);
          if ((int)uVar19 < 0) {
            if ((int)uVar26 < 0) {
              iVar6 = ~uVar26 - uVar19;
            }
            else {
              iVar6 = (uVar26 - uVar19) + -1;
            }
            iVar6 = -(iVar6 / (int)uVar26);
          }
          else {
            iVar6 = (int)uVar19 / (int)uVar26;
          }
          if (uVar19 == iVar6 * uVar26) {
            puVar16 = puVar20 + uVar24 * 3;
            plVar8 = (longlong *)puVar16[1];
            if (plVar8 == (longlong *)puVar16[2]) {
              FUN_144e5cd00(puVar16,plVar8,&local_220);
            }
            else {
              *plVar8 = lVar27;
              puVar16[1] = puVar16[1] + 8;
            }
            iVar6 = FUN_144e66f70(*(undefined4 *)(lVar15 + 0x2c));
            lVar27 = lVar27 + iVar6 * *(int *)(lVar15 + 0x34);
            local_220 = lVar27;
          }
          uVar17 = uVar17 + 1;
          lVar21 = param_1[9];
          lVar15 = param_1[8];
          uVar24 = (ulonglong)uVar17;
          uVar26 = local_268;
          lVar5 = lVar27;
        } while (uVar24 < (ulonglong)((lVar21 - lVar15) / 0x98));
      }
      local_218 = lVar5;
      uVar19 = uVar19 + 1;
    } while ((int)uVar19 <= (int)uVar26);
  }
  uVar26 = 0;
  lVar21 = param_1[0xb];
  lVar15 = param_1[0xc] - lVar21 >> 0x3f;
  if ((param_1[0xc] - lVar21) / 0xc + lVar15 != lVar15) {
    uVar24 = 0;
    do {
      puVar20 = local_238;
      iVar6 = *(int *)(lVar21 + 4 + uVar24 * 0xc);
      uVar13 = (ulonglong)iVar6;
      iVar7 = *(int *)(lVar21 + 8 + uVar24 * 0xc);
      uVar22 = (ulonglong)iVar7;
      iVar9 = *(int *)(lVar21 + uVar24 * 0xc);
      uVar24 = (ulonglong)iVar9;
      lVar21 = param_1[8];
      lVar15 = uVar24 * 0x98 + lVar21;
      if (((*(int *)(lVar15 + 0x20) != 1) ||
          (lVar27 = uVar13 * 0x98 + lVar21, *(int *)(lVar27 + 0x20) != 1)) ||
         (lVar21 = uVar22 * 0x98 + lVar21, *(int *)(lVar21 + 0x20) != 1)) {
        FUN_144e408c0(&local_138,"Bad DWA compression type detected");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_138,(ThrowInfo *)&DAT_14c6d53a8);
      }
      local_2b0 = (undefined8 **)((longlong)local_238 + CONCAT44(iStack_64,local_68) * 2);
      local_278 = *(undefined4 *)(lVar21 + 0x2c);
      local_280 = *(undefined4 *)(lVar27 + 0x2c);
      local_288 = *(undefined4 *)(lVar15 + 0x2c);
      local_290 = *(undefined4 *)(lVar15 + 0x38);
      local_298 = *(undefined4 *)(lVar15 + 0x34);
      local_2a0 = &DAT_149a43d60;
      local_2a8 = local_230;
      local_2b8 = local_238;
      FUN_144e57c90(&local_1c8,local_250 + uVar24 * 3,local_250 + uVar13 * 3,local_250 + uVar22 * 3)
      ;
      FUN_144e565d0(&local_1c8);
      local_238 = (undefined8 *)((longlong)puVar20 + (longlong)local_1bc * 2);
      local_230 = (undefined8 *)((longlong)local_230 + (longlong)local_1b8 * 2);
      puVar11 = (uint *)(local_210[0] + (uVar24 >> 5) * 4);
      *puVar11 = *puVar11 | 1 << ((byte)iVar9 & 0x1f);
      puVar11 = (uint *)(local_210[0] + (uVar13 >> 5) * 4);
      *puVar11 = *puVar11 | 1 << ((byte)iVar6 & 0x1f);
      puVar11 = (uint *)(local_210[0] + (uVar22 >> 5) * 4);
      *puVar11 = *puVar11 | 1 << ((byte)iVar7 & 0x1f);
      local_1c8 = Imf_3_2::DwaCompressor::LossyDctDecoderBase::vftable;
      FUN_144e57960(local_158);
      if (local_170 != 0) {
        uVar24 = (lStack_160 - local_170 >> 2) * 4;
        lVar21 = local_170;
        if (0xfff < uVar24) {
          uVar24 = uVar24 + 0x27;
          lVar21 = *(longlong *)(local_170 + -8);
          if (0x1f < (local_170 - lVar21) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1400020a8(lVar21,uVar24);
        local_170 = 0;
        local_168 = 0;
        lStack_160 = 0;
      }
      FUN_144e577f0(local_188);
      uVar26 = uVar26 + 1;
      lVar21 = param_1[0xb];
      uVar24 = (ulonglong)uVar26;
    } while (uVar24 < (ulonglong)((param_1[0xc] - lVar21) / 0xc));
  }
  local_264 = 0;
  lVar21 = param_1[8];
  lVar15 = param_1[9] - lVar21 >> 0x3f;
  lVar27 = local_210[0];
  if ((param_1[9] - lVar21) / 0x98 + lVar15 != lVar15) {
    uVar24 = 0;
    do {
      uVar26 = local_264;
      ppuVar28 = (undefined8 **)0x0;
      local_228 = (uVar24 >> 5) * 4;
      local_25c = 1 << ((byte)uVar24 & 0x1f);
      if ((*(uint *)(local_228 + lVar27) & local_25c) == 0) {
        lVar21 = uVar24 * 0x98 + lVar21;
        iVar7 = FUN_144e66f70(*(undefined4 *)(lVar21 + 0x2c));
        puVar3 = local_230;
        puVar16 = local_238;
        puVar20 = local_250;
        iVar6 = *(int *)(lVar21 + 0x20);
        if (iVar6 == 0) {
          iVar7 = FUN_144e66f70(*(undefined4 *)(lVar21 + 0x2c));
          iVar6 = *(int *)(lVar21 + 0x34);
          if ((int)local_260 <= (int)local_268) {
            lVar15 = 0;
            uVar26 = local_260;
            uVar19 = local_268;
            do {
              uVar17 = *(uint *)(lVar21 + 0x28);
              if ((int)uVar26 < 0) {
                if ((int)uVar17 < 0) {
                  iVar9 = ~uVar17 - uVar26;
                }
                else {
                  iVar9 = (uVar17 - uVar26) + -1;
                }
                iVar9 = -(iVar9 / (int)uVar17);
              }
              else {
                iVar9 = (int)uVar26 / (int)uVar17;
              }
              if (uVar26 == iVar9 * uVar17) {
                _Size = (size_t)(iVar7 * iVar6);
                if ((ulonglong)(param_1[0x1c] + param_1[0x19]) <
                    _Size + (longlong)*(void **)(lVar21 + 0x48)) {
                  FUN_144e41060(&local_138,"DWA data corrupt");
                    /* WARNING: Subroutine does not return */
                  _CxxThrowException(&local_138,(ThrowInfo *)&DAT_14c6d51d8);
                }
                memcpy(*(void **)(lVar15 + local_250[uVar24 * 3]),*(void **)(lVar21 + 0x48),_Size);
                *(longlong *)(lVar21 + 0x48) = *(longlong *)(lVar21 + 0x48) + _Size;
                lVar15 = lVar15 + 8;
                uVar19 = local_268;
              }
              uVar26 = uVar26 + 1;
            } while ((int)uVar26 <= (int)uVar19);
          }
        }
        else if (iVar6 == 1) {
          local_2b0 = (undefined8 **)&DAT_149a43d60;
          if (*(char *)(lVar21 + 0x30) != '\0') {
            local_2b0 = ppuVar28;
          }
          local_298 = *(undefined4 *)(lVar21 + 0x2c);
          local_2a0 = (undefined *)CONCAT44(local_2a0._4_4_,*(undefined4 *)(lVar21 + 0x38));
          local_2a8 = (undefined8 *)CONCAT44(local_2a8._4_4_,*(undefined4 *)(lVar21 + 0x34));
          local_2b8 = local_230;
          FUN_144e57b30(&local_138,local_250 + uVar24 * 3,local_238,
                        (longlong)local_238 + CONCAT44(iStack_64,local_68) * 2);
          FUN_144e565d0(&local_138);
          local_238 = (undefined8 *)((longlong)puVar16 + (longlong)local_12c * 2);
          local_230 = (undefined8 *)((longlong)puVar3 + (longlong)local_128 * 2);
          local_138 = Imf_3_2::DwaCompressor::LossyDctDecoderBase::vftable;
          FUN_144e57960(local_c8);
          if (local_e0 != 0) {
            uVar24 = (lStack_d0 - local_e0 >> 2) * 4;
            lVar21 = local_e0;
            if (0xfff < uVar24) {
              uVar24 = uVar24 + 0x27;
              lVar21 = *(longlong *)(local_e0 + -8);
              if (0x1f < (local_e0 - lVar21) - 8U) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            thunk_FUN_1400020a8(lVar21,uVar24);
            local_e0 = 0;
            local_d8 = 0;
            lStack_d0 = 0;
          }
          FUN_144e577f0(local_f8);
          local_264 = uVar26;
        }
        else {
          if (iVar6 != 2) {
            FUN_144e41570(&local_138,"Unhandled compression scheme case");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_138,(ThrowInfo *)&DAT_14c6d53e0);
          }
          lVar15 = (longlong)iVar7;
          ppuVar29 = ppuVar28;
          uVar26 = local_260;
          uVar19 = local_268;
          if ((int)local_260 <= (int)local_268) {
            do {
              uVar17 = *(uint *)(lVar21 + 0x28);
              if ((int)uVar26 < 0) {
                if ((int)uVar17 < 0) {
                  iVar6 = ~uVar17 - uVar26;
                }
                else {
                  iVar6 = (uVar17 - uVar26) + -1;
                }
                iVar6 = -(iVar6 / (int)uVar17);
              }
              else {
                iVar6 = (int)uVar26 / (int)uVar17;
              }
              if (uVar26 == iVar6 * uVar17) {
                puVar25 = *(undefined1 **)((longlong)ppuVar29 + puVar20[uVar24 * 3]);
                if (lVar15 == 2) {
                  FUN_144e559e0(puVar25,*(undefined8 *)(lVar21 + 0x70),
                                *(undefined8 *)(lVar21 + 0x78),*(int *)(lVar21 + 0x34));
                  *(longlong *)(lVar21 + 0x70) =
                       *(longlong *)(lVar21 + 0x70) + (longlong)*(int *)(lVar21 + 0x34);
                  *(longlong *)(lVar21 + 0x78) =
                       *(longlong *)(lVar21 + 0x78) + (longlong)*(int *)(lVar21 + 0x34);
                  uVar19 = local_268;
                }
                else {
                  ppuVar23 = ppuVar28;
                  if (0 < *(int *)(lVar21 + 0x34)) {
                    do {
                      if (0 < lVar15) {
                        plVar8 = (longlong *)(lVar21 + 0x70);
                        lVar27 = lVar15;
                        do {
                          *puVar25 = *(undefined1 *)*plVar8;
                          puVar25 = puVar25 + 1;
                          *plVar8 = *plVar8 + 1;
                          plVar8 = plVar8 + 1;
                          lVar27 = lVar27 + -1;
                        } while (lVar27 != 0);
                      }
                      uVar17 = (int)ppuVar23 + 1;
                      ppuVar23 = (undefined8 **)(ulonglong)uVar17;
                    } while ((int)uVar17 < *(int *)(lVar21 + 0x34));
                  }
                }
                ppuVar29 = ppuVar29 + 1;
              }
              uVar26 = uVar26 + 1;
              param_1 = local_1d8;
            } while ((int)uVar26 <= (int)uVar19);
          }
        }
        *(uint *)(local_228 + local_210[0]) = *(uint *)(local_228 + local_210[0]) | local_25c;
        lVar27 = local_210[0];
      }
      local_264 = local_264 + 1;
      lVar21 = param_1[8];
      uVar24 = (ulonglong)local_264;
    } while (uVar24 < (ulonglong)((param_1[9] - lVar21) / 0x98));
  }
  puVar20 = local_250;
  *local_1d0 = param_1[0x17];
  if (local_250 != (undefined8 *)0x0) {
    FUN_144e5cae0(local_250,local_248,&local_1f0);
    uVar24 = (((longlong)local_258 - (longlong)puVar20) / 0x18) * 0x18;
    puVar16 = puVar20;
    if (0xfff < uVar24) {
      uVar24 = uVar24 + 0x27;
      puVar16 = (undefined8 *)puVar20[-1];
      if (0x1f < (ulonglong)((longlong)puVar20 + (-8 - (longlong)puVar16))) {
LAB_144e51508:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(puVar16,uVar24);
    lVar27 = local_210[0];
  }
  if (lVar27 != 0) {
    uVar24 = local_200 - lVar27 & 0xfffffffffffffffc;
    lVar21 = lVar27;
    if (0xfff < uVar24) {
      uVar24 = uVar24 + 0x27;
      lVar21 = *(longlong *)(lVar27 + -8);
      if (0x1f < (lVar27 - lVar21) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar21,uVar24);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_2d8);
}



// FUNCTION 144e518f0 FUN_144e518f0 body=1402 status=ok
// SIG undefined FUN_144e518f0(void)

void FUN_144e518f0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulonglong auStack_150 [2];
  undefined *puStack_140;
  undefined1 auStack_138 [32];
  longlong local_118;
  uint local_110;
  longlong local_108;
  longlong local_100 [2];
  longlong *local_f0;
  undefined1 local_e8 [96];
  ulonglong local_88;
  undefined8 local_80;
  ulonglong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  puStack_140 = (undefined *)0x144e5193e;
  local_f0 = param_2;
  uVar2 = FUN_144e4ea70(local_100,param_1 + 6);
  puStack_140 = (undefined *)0x144e51951;
  FUN_144e53d20(param_1,uVar2,param_1 + 8,param_1 + 0xb);
  uVar8 = 0;
  local_108 = 0;
  local_118 = 0;
  puStack_140 = (undefined *)0x144e5196c;
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  puStack_140 = (undefined *)0x144e51986;
  fVar15 = ceilf((float)iVar1 * 0.125);
  puStack_140 = (undefined *)0x144e519a2;
  fVar16 = ceilf((float)((*(int *)((longlong)param_1 + 0x24) - *(int *)((longlong)param_1 + 0x1c)) +
                        1) * 0.125);
  if (9.223372e+18 <= fVar16) {
    fVar16 = fVar16 - 9.223372e+18;
  }
  if (9.223372e+18 <= fVar15) {
    fVar15 = fVar15 - 9.223372e+18;
  }
  lVar13 = (longlong)fVar16 * (longlong)fVar15 * 0x7e;
  puStack_140 = (undefined *)0x144e519fb;
  iVar1 = (**(code **)(*param_1 + 8))();
  puStack_140 = (undefined *)0x144e51a0c;
  fVar17 = ceilf((float)iVar1 * 0.125);
  puStack_140 = (undefined *)0x144e51a28;
  fVar18 = ceilf((float)((*(int *)((longlong)param_1 + 0x24) - *(int *)((longlong)param_1 + 0x1c)) +
                        1) * 0.125);
  if (9.223372e+18 <= fVar18) {
    fVar18 = fVar18 - 9.223372e+18;
  }
  if (9.223372e+18 <= fVar17) {
    fVar17 = fVar17 - 9.223372e+18;
  }
  puStack_140 = (undefined *)0x144e51a6b;
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  lVar10 = (longlong)((*(int *)((longlong)param_1 + 0x24) - *(int *)((longlong)param_1 + 0x1c)) + 1)
           * (longlong)iVar1;
  local_110 = 0;
  lVar3 = param_1[8];
  uVar11 = uVar8;
  uVar14 = uVar8;
  uVar12 = uVar8;
  if ((param_1[9] - lVar3) / 0x98 != 0) {
    do {
      lVar7 = uVar11 * 0x98;
      iVar1 = *(int *)(lVar7 + 0x20 + lVar3);
      if (iVar1 == 0) {
        puStack_140 = (undefined *)0x144e51b12;
        iVar1 = FUN_144e66f70(*(undefined4 *)(lVar7 + 0x2c + lVar3));
        local_118 = local_118 + iVar1 * lVar10;
      }
      else if (iVar1 == 1) {
        puStack_140 = (undefined *)0x144e51aef;
        uVar4 = FUN_14521ad00(lVar13);
        uVar11 = (longlong)fVar16 * (longlong)fVar15 * 0xfc + 0x10000;
        if (uVar11 < uVar4) {
          uVar11 = uVar4;
        }
        uVar14 = uVar14 + uVar11;
        local_108 = local_108 + 1;
      }
      else {
        if (iVar1 != 2) {
          puStack_140 = (undefined *)0x144e51e61;
          FUN_144e41570(local_e8,"Unhandled compression scheme case");
                    /* WARNING: Subroutine does not return */
          puStack_140 = &UNK_144e51e72;
          _CxxThrowException(local_e8,(ThrowInfo *)&DAT_14c6d53e0);
        }
        puStack_140 = (undefined *)0x144e51ad8;
        iVar1 = FUN_144e66f70(*(undefined4 *)(lVar7 + 0x2c + lVar3));
        uVar12 = uVar12 + iVar1 * lVar10 * 2;
      }
      local_110 = local_110 + 1;
      lVar3 = param_1[8];
      uVar11 = (ulonglong)local_110;
    } while ((ulonglong)local_110 < (ulonglong)((param_1[9] - lVar3) / 0x98));
  }
  puStack_140 = (undefined *)0x144e51b65;
  lVar3 = FUN_14521ad00(uVar12);
  puStack_140 = (undefined *)0x144e51b72;
  lVar7 = FUN_14521ad00(local_118);
  uVar11 = (longlong)fVar18 * (longlong)fVar17 * local_108 * 2;
  uVar4 = uVar8;
  if (param_1[0x1f] == 0) {
    puStack_140 = (undefined *)0x144e51b94;
    local_100[0] = FUN_14494321d(0x18);
    if (local_100[0] != 0) {
      puStack_140 = (undefined *)0x144e51bb0;
      uVar4 = FUN_144e4a680(local_100[0],uVar11,(int)param_1[0x20]);
    }
  }
  else {
    puStack_140 = (undefined *)0x144e51bbc;
    uVar5 = FUN_144e4a760();
    if (uVar11 <= uVar5) goto LAB_144e51c1b;
    local_118 = param_1[0x1f];
    if (local_118 != 0) {
      puStack_140 = (undefined *)0x144e51bda;
      FUN_144e4a750(local_118);
      puStack_140 = (undefined *)0x144e51be9;
      thunk_FUN_1400020a8(local_118,0x18);
    }
    puStack_140 = (undefined *)0x144e51bf3;
    local_100[0] = FUN_14494321d(0x18);
    if (local_100[0] != 0) {
      puStack_140 = (undefined *)0x144e51c0f;
      uVar4 = FUN_144e4a680(local_100[0],uVar11,(int)param_1[0x20]);
    }
  }
  param_1[0x1f] = uVar4;
LAB_144e51c1b:
  puStack_140 = (undefined *)0x144e51c27;
  lVar6 = FUN_144e4a770(param_1[0x1f]);
  *local_f0 = lVar6 + 0x58 + uVar14 + lVar3 + lVar7;
  uVar14 = lVar13 * local_108;
  if ((ulonglong)param_1[0x12] <= uVar14 && uVar14 - param_1[0x12] != 0) {
    param_1[0x12] = uVar14;
    if (param_1[0x11] != 0) {
      puStack_140 = (undefined *)0x144e51c5d;
      thunk_FUN_1400020a8();
    }
    puStack_140 = (undefined *)0x144e51c69;
    lVar13 = FUN_144a7d36f(param_1[0x12]);
    param_1[0x11] = lVar13;
  }
  if ((ulonglong)param_1[0x14] < uVar11) {
    param_1[0x14] = uVar11;
    if (param_1[0x13] != 0) {
      puStack_140 = (undefined *)0x144e51c91;
      thunk_FUN_1400020a8();
    }
    puStack_140 = (undefined *)0x144e51c9d;
    lVar13 = FUN_144a7d36f(param_1[0x14]);
    param_1[0x13] = lVar13;
  }
  if ((ulonglong)param_1[0x16] < uVar12) {
    param_1[0x16] = uVar12;
    if (param_1[0x15] != 0) {
      puStack_140 = (undefined *)0x144e51cc5;
      thunk_FUN_1400020a8();
    }
    puStack_140 = (undefined *)0x144e51ccd;
    lVar13 = FUN_144a7d36f(uVar12);
    param_1[0x15] = lVar13;
  }
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  lVar13 = param_1[8];
  uVar11 = uVar8;
  uVar14 = uVar8;
  if ((param_1[9] - lVar13) / 0x98 != 0) {
    do {
      lVar3 = uVar14 * 0x98;
      iVar1 = *(int *)(lVar3 + 0x20 + lVar13);
      if (iVar1 == 0) {
        puStack_140 = (undefined *)0x144e51d76;
        iVar1 = FUN_144e66f70(*(undefined4 *)(lVar3 + 0x2c + lVar13));
        uVar8 = uVar8 + iVar1 * lVar10;
        local_88 = uVar8;
      }
      else if (iVar1 != 1) {
        if (iVar1 != 2) {
          puStack_140 = (undefined *)0x144e51e84;
          FUN_144e41570(local_e8,"Unhandled compression scheme case");
                    /* WARNING: Subroutine does not return */
          puStack_140 = &UNK_144e51e95;
          _CxxThrowException(local_e8,(ThrowInfo *)&DAT_14c6d53e0);
        }
        puStack_140 = (undefined *)0x144e51d58;
        iVar1 = FUN_144e66f70(*(undefined4 *)(lVar3 + 0x2c + lVar13));
        uVar11 = uVar11 + iVar1 * lVar10;
        local_78 = uVar11;
      }
      uVar14 = (ulonglong)((int)uVar14 + 1);
      lVar13 = param_1[8];
    } while (uVar14 < (ulonglong)((param_1[9] - lVar13) / 0x98));
  }
  if (uVar8 != 0) {
    puStack_140 = (undefined *)0x144e51dc3;
    local_88 = FUN_14521ad00(uVar8);
  }
  plVar9 = param_1 + 0x19;
  lVar13 = 3;
  do {
    uVar8 = *(ulonglong *)((longlong)plVar9 + ((longlong)auStack_150 - (longlong)param_1));
    if ((ulonglong)plVar9[3] < uVar8) {
      plVar9[3] = uVar8;
      if (*plVar9 != 0) {
        puStack_140 = (undefined *)0x144e51e01;
        thunk_FUN_1400020a8();
      }
      puStack_140 = (undefined *)0x144e51e09;
      lVar3 = FUN_144a7d36f(uVar8);
      *plVar9 = lVar3;
    }
    plVar9 = plVar9 + 1;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
                    /* WARNING: Subroutine does not return */
  puStack_140 = &UNK_144e51e26;
  FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_138);
}



// FUNCTION 144e51ea0 FUN_144e51ea0 body=2466 status=ok
// SIG undefined FUN_144e51ea0(void)

void FUN_144e51ea0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_70;
  ulonglong local_68 [4];
  ulonglong *local_48;
  undefined1 local_40;
  undefined7 uStack_3f;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong uStack_28;
  undefined4 local_20;
  undefined8 local_1c;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x70);
  if (*plVar1 != *(longlong *)(param_1 + 0x78)) {
    FUN_144e5c970(*plVar1,*(longlong *)(param_1 + 0x78),plVar1);
    *(longlong *)(param_1 + 0x78) = *plVar1;
  }
  local_68[1] = 0;
  local_68[2] = 1;
  local_68[3] = 0xf;
  local_68[0] = 0x52;
  local_48 = local_68;
  FUN_144b65a50(&local_40,local_68);
  local_20 = 1;
  local_1c = 1;
  local_14 = 0;
  if (0xf < local_68[3]) {
    uVar7 = local_68[3] + 1;
    uVar8 = local_68[0];
    if (0xfff < uVar7) {
      uVar7 = local_68[3] + 0x28;
      uVar8 = *(ulonglong *)(local_68[0] - 8);
      if (0x1f < (local_68[0] - uVar8) - 8) goto LAB_144e5200e;
    }
    thunk_FUN_1400020a8(uVar8,uVar7);
  }
  local_68[2] = 0;
  local_68[3] = 0xf;
  local_68[0] = local_68[0] & 0xffffffffffffff00;
  puVar2 = *(undefined8 **)(param_1 + 0x78);
  if (puVar2 == *(undefined8 **)(param_1 + 0x80)) {
    FUN_144e5d6d0(plVar1,puVar2,&local_40);
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = CONCAT71(uStack_3f,local_40);
    puVar2[1] = uStack_38;
    puVar2[2] = local_30;
    puVar2[3] = uStack_28;
    local_30 = 0;
    uStack_28 = 0xf;
    local_40 = 0;
    *(undefined4 *)(puVar2 + 4) = local_20;
    *(undefined4 *)((longlong)puVar2 + 0x24) = (undefined4)local_1c;
    *(undefined4 *)(puVar2 + 5) = local_1c._4_4_;
    *(undefined1 *)((longlong)puVar2 + 0x2c) = local_14;
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 0x30;
  }
  if (0xf < uStack_28) {
    uVar8 = uStack_28 + 1;
    lVar3 = CONCAT71(uStack_3f,local_40);
    lVar6 = lVar3;
    if (0xfff < uVar8) {
      uVar8 = uStack_28 + 0x28;
      lVar6 = *(longlong *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar6) - 8U) {
LAB_144e5200e:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar6,uVar8);
  }
  local_68[1] = 0;
  local_68[2] = 1;
  local_68[3] = 0xf;
  local_68[0] = 0x52;
  local_48 = local_68;
  FUN_144b65a50(&local_40,local_68);
  local_20 = 1;
  local_1c = 2;
  local_14 = 0;
  if (0xf < local_68[3]) {
    uVar7 = local_68[3] + 1;
    uVar8 = local_68[0];
    if (0xfff < uVar7) {
      uVar7 = local_68[3] + 0x28;
      uVar8 = *(ulonglong *)(local_68[0] - 8);
      if (0x1f < (local_68[0] - uVar8) - 8) goto LAB_144e52142;
    }
    thunk_FUN_1400020a8(uVar8,uVar7);
  }
  local_68[2] = 0;
  local_68[3] = 0xf;
  local_68[0] = local_68[0] & 0xffffffffffffff00;
  puVar2 = *(undefined8 **)(param_1 + 0x78);
  if (puVar2 == *(undefined8 **)(param_1 + 0x80)) {
    FUN_144e5d6d0(plVar1,puVar2,&local_40);
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = CONCAT71(uStack_3f,local_40);
    puVar2[1] = uStack_38;
    puVar2[2] = local_30;
    puVar2[3] = uStack_28;
    local_30 = 0;
    uStack_28 = 0xf;
    local_40 = 0;
    *(undefined4 *)(puVar2 + 4) = local_20;
    *(undefined4 *)((longlong)puVar2 + 0x24) = (undefined4)local_1c;
    *(undefined4 *)(puVar2 + 5) = local_1c._4_4_;
    *(undefined1 *)((longlong)puVar2 + 0x2c) = local_14;
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 0x30;
  }
  if (0xf < uStack_28) {
    uVar8 = uStack_28 + 1;
    lVar3 = CONCAT71(uStack_3f,local_40);
    lVar6 = lVar3;
    if (0xfff < uVar8) {
      uVar8 = uStack_28 + 0x28;
      lVar6 = *(longlong *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar6) - 8U) {
LAB_144e52142:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar6,uVar8);
  }
  local_68[1] = 0;
  local_68[2] = 1;
  local_68[3] = 0xf;
  local_68[0] = 0x47;
  local_48 = local_68;
  FUN_144b65a50(&local_40,local_68);
  local_20 = 1;
  local_1c._0_4_ = 1;
  uVar4 = (undefined4)local_1c;
  local_1c._0_4_ = 1;
  local_1c._4_4_ = 1;
  local_14 = 0;
  if (0xf < local_68[3]) {
    uVar7 = local_68[3] + 1;
    uVar8 = local_68[0];
    if (0xfff < uVar7) {
      uVar7 = local_68[3] + 0x28;
      uVar8 = *(ulonglong *)(local_68[0] - 8);
      if (0x1f < (local_68[0] - uVar8) - 8) goto LAB_144e5227c;
    }
    thunk_FUN_1400020a8(uVar8,uVar7);
  }
  local_68[2] = 0;
  local_68[3] = 0xf;
  local_68[0] = local_68[0] & 0xffffffffffffff00;
  puVar2 = *(undefined8 **)(param_1 + 0x78);
  if (puVar2 == *(undefined8 **)(param_1 + 0x80)) {
    FUN_144e5d6d0(plVar1,puVar2,&local_40);
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = CONCAT71(uStack_3f,local_40);
    puVar2[1] = uStack_38;
    puVar2[2] = local_30;
    puVar2[3] = uStack_28;
    local_30 = 0;
    uStack_28 = 0xf;
    local_40 = 0;
    *(undefined4 *)(puVar2 + 4) = local_20;
    *(undefined4 *)((longlong)puVar2 + 0x24) = (undefined4)local_1c;
    *(undefined4 *)(puVar2 + 5) = local_1c._4_4_;
    *(undefined1 *)((longlong)puVar2 + 0x2c) = local_14;
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 0x30;
  }
  if (0xf < uStack_28) {
    uVar8 = uStack_28 + 1;
    lVar3 = CONCAT71(uStack_3f,local_40);
    lVar6 = lVar3;
    if (0xfff < uVar8) {
      uVar8 = uStack_28 + 0x28;
      lVar6 = *(longlong *)(lVar3 + -8);
      uVar4 = (undefined4)local_1c;
      if (0x1f < (lVar3 - lVar6) - 8U) {
LAB_144e5227c:
        local_1c._0_4_ = uVar4;
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar6,uVar8);
  }
  local_68[1] = 0;
  local_68[2] = 1;
  local_68[3] = 0xf;
  local_68[0] = 0x47;
  local_48 = local_68;
  FUN_144b65a50(&local_40,local_68);
  local_20 = 1;
  local_1c._0_4_ = 2;
  uVar4 = (undefined4)local_1c;
  local_1c._0_4_ = 2;
  local_1c._4_4_ = 1;
  local_14 = 0;
  if (0xf < local_68[3]) {
    uVar7 = local_68[3] + 1;
    uVar8 = local_68[0];
    if (0xfff < uVar7) {
      uVar7 = local_68[3] + 0x28;
      uVar8 = *(ulonglong *)(local_68[0] - 8);
      if (0x1f < (local_68[0] - uVar8) - 8) goto LAB_144e523b6;
    }
    thunk_FUN_1400020a8(uVar8,uVar7);
  }
  local_68[2] = 0;
  local_68[3] = 0xf;
  local_68[0] = local_68[0] & 0xffffffffffffff00;
  puVar2 = *(undefined8 **)(param_1 + 0x78);
  if (puVar2 == *(undefined8 **)(param_1 + 0x80)) {
    FUN_144e5d6d0(plVar1,puVar2,&local_40);
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = CONCAT71(uStack_3f,local_40);
    puVar2[1] = uStack_38;
    puVar2[2] = local_30;
    puVar2[3] = uStack_28;
    local_30 = 0;
    uStack_28 = 0xf;
    local_40 = 0;
    *(undefined4 *)(puVar2 + 4) = local_20;
    *(undefined4 *)((longlong)puVar2 + 0x24) = (undefined4)local_1c;
    *(undefined4 *)(puVar2 + 5) = local_1c._4_4_;
    *(undefined1 *)((longlong)puVar2 + 0x2c) = local_14;
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 0x30;
  }
  if (0xf < uStack_28) {
    uVar8 = uStack_28 + 1;
    lVar3 = CONCAT71(uStack_3f,local_40);
    lVar6 = lVar3;
    if (0xfff < uVar8) {
      uVar8 = uStack_28 + 0x28;
      lVar6 = *(longlong *)(lVar3 + -8);
      uVar4 = (undefined4)local_1c;
      if (0x1f < (lVar3 - lVar6) - 8U) {
LAB_144e523b6:
        local_1c._0_4_ = uVar4;
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar6,uVar8);
  }
  local_68[1] = 0;
  local_68[2] = 1;
  local_68[3] = 0xf;
  local_68[0] = 0x42;
  local_48 = local_68;
  FUN_144b65a50(&local_40,local_68);
  local_20 = 1;
  local_1c._0_4_ = 1;
  local_1c._4_4_ = 2;
  local_14 = 0;
  if (0xf < local_68[3]) {
    uVar7 = local_68[3] + 1;
    uVar8 = local_68[0];
    if (0xfff < uVar7) {
      uVar7 = local_68[3] + 0x28;
      uVar8 = *(ulonglong *)(local_68[0] - 8);
      if (0x1f < (local_68[0] - uVar8) - 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(uVar8,uVar7);
  }
  local_68[2] = 0;
  local_68[3] = 0xf;
  local_68[0] = local_68[0] & 0xffffffffffffff00;
  puVar2 = *(undefined8 **)(param_1 + 0x78);
  if (puVar2 == *(undefined8 **)(param_1 + 0x80)) {
    FUN_144e5d6d0(plVar1,puVar2,&local_40);
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = CONCAT71(uStack_3f,local_40);
    puVar2[1] = uStack_38;
    puVar2[2] = local_30;
    puVar2[3] = uStack_28;
    local_30 = 0;
    uStack_28 = 0xf;
    local_40 = 0;
    *(undefined4 *)(puVar2 + 4) = local_20;
    *(undefined4 *)((longlong)puVar2 + 0x24) = (undefined4)local_1c;
    *(undefined4 *)(puVar2 + 5) = local_1c._4_4_;
    *(undefined1 *)((longlong)puVar2 + 0x2c) = local_14;
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 0x30;
  }
  FUN_144b65b20(&local_40);
  local_68[1] = 0;
  local_68[2] = 1;
  local_68[3] = 0xf;
  local_68[0] = 0x42;
  local_70 = 0;
  local_78 = 2;
  uVar5 = FUN_144e560a0(&local_40,local_68,1);
  FUN_144e4f480(plVar1,uVar5);
  FUN_144b65b20(&local_40);
  local_68[1] = 0;
  local_68[2] = 1;
  local_68[3] = 0xf;
  local_68[0] = 0x59;
  local_70 = 0;
  local_78 = 0xffffffff;
  uVar5 = FUN_144e560a0(&local_40,local_68,1);
  FUN_144e4f480(plVar1,uVar5);
  FUN_144b65b20(&local_40);
  local_68[1] = 0;
  local_68[2] = 1;
  local_68[3] = 0xf;
  local_68[0] = 0x59;
  local_70 = 0;
  local_78 = 0xffffffff;
  uVar5 = FUN_144e560a0(&local_40,local_68,1);
  FUN_144e4f480(plVar1,uVar5);
  FUN_144b65b20(&local_40);
  local_68[1] = 0;
  local_68[2] = 2;
  local_68[3] = 0xf;
  local_68[0] = 0x5942;
  local_70 = 0;
  local_78 = 0xffffffff;
  uVar5 = FUN_144e560a0(&local_40,local_68,1);
  FUN_144e4f480(plVar1,uVar5);
  FUN_144b65b20(&local_40);
  local_68[1] = 0;
  local_68[2] = 2;
  local_68[3] = 0xf;
  local_68[0] = 0x5942;
  local_70 = 0;
  local_78 = 0xffffffff;
  uVar5 = FUN_144e560a0(&local_40,local_68,1);
  FUN_144e4f480(plVar1,uVar5);
  FUN_144b65b20(&local_40);
  local_68[1] = 0;
  local_68[2] = 2;
  local_68[3] = 0xf;
  local_68[0] = 0x5952;
  local_70 = 0;
  local_78 = 0xffffffff;
  uVar5 = FUN_144e560a0(&local_40,local_68,1);
  FUN_144e4f480(plVar1,uVar5);
  FUN_144b65b20(&local_40);
  local_68[1] = 0;
  local_68[2] = 2;
  local_68[3] = 0xf;
  local_68[0] = 0x5952;
  local_70 = 0;
  local_78 = 0xffffffff;
  uVar5 = FUN_144e560a0(&local_40,local_68,1);
  FUN_144e4f480(plVar1,uVar5);
  FUN_144b65b20(&local_40);
  local_68[1] = 0;
  local_68[2] = 1;
  local_68[3] = 0xf;
  local_68[0] = 0x41;
  local_70 = 0;
  local_78 = 0xffffffff;
  uVar5 = FUN_144e560a0(&local_40,local_68,2);
  FUN_144e4f480(plVar1,uVar5);
  FUN_144b65b20(&local_40);
  local_68[1] = 0;
  local_68[2] = 1;
  local_68[3] = 0xf;
  local_68[0] = 0x41;
  local_70 = 0;
  local_78 = 0xffffffff;
  uVar5 = FUN_144e560a0(&local_40,local_68,2);
  FUN_144e4f480(plVar1,uVar5);
  FUN_144b65b20(&local_40);
  local_68[1] = 0;
  local_68[2] = 1;
  local_68[3] = 0xf;
  local_68[0] = 0x41;
  local_70 = 0;
  local_78 = 0xffffffff;
  uVar5 = FUN_144e560a0(&local_40,local_68,2);
  FUN_144e4f480(plVar1,uVar5);
  FUN_144b65b20(&local_40);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_98);
}



// FUNCTION 144e52860 FUN_144e52860 body=3317 status=ok
// SIG undefined FUN_144e52860(void)

void FUN_144e52860(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_40 [3];
  ulonglong local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x70);
  if (*plVar1 != *(longlong *)(param_1 + 0x78)) {
    FUN_144e5c970(*plVar1,*(longlong *)(param_1 + 0x78),plVar1);
    *(longlong *)(param_1 + 0x78) = *plVar1;
  }
  uStack_60 = 0;
  local_58 = 1;
  local_50 = 0xf;
  local_68 = 0x72;
  local_70 = 1;
  local_78 = 0;
  puVar6 = (undefined4 *)FUN_144e560a0(local_40,&local_68,1);
  puVar2 = *(undefined8 **)(param_1 + 0x78);
  if (puVar2 == *(undefined8 **)(param_1 + 0x80)) {
    FUN_144e5d6d0(plVar1);
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    uVar3 = puVar6[1];
    uVar4 = puVar6[2];
    uVar5 = puVar6[3];
    *(undefined4 *)puVar2 = *puVar6;
    *(undefined4 *)((longlong)puVar2 + 4) = uVar3;
    *(undefined4 *)(puVar2 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar2 + 0xc) = uVar5;
    uVar7 = *(undefined8 *)(puVar6 + 6);
    puVar2[2] = *(undefined8 *)(puVar6 + 4);
    puVar2[3] = uVar7;
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0xf;
    *(undefined1 *)puVar6 = 0;
    *(undefined4 *)(puVar2 + 4) = puVar6[8];
    *(undefined4 *)((longlong)puVar2 + 0x24) = puVar6[9];
    *(undefined4 *)(puVar2 + 5) = puVar6[10];
    *(undefined1 *)((longlong)puVar2 + 0x2c) = *(undefined1 *)(puVar6 + 0xb);
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 0x30;
  }
  if (0xf < local_28) {
    uVar9 = local_28 + 1;
    lVar8 = local_40[0];
    if (0xfff < uVar9) {
      uVar9 = local_28 + 0x28;
      lVar8 = *(longlong *)(local_40[0] + -8);
      if (0x1f < (local_40[0] - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar8,uVar9);
  }
  uStack_60 = 0;
  local_58 = 1;
  local_50 = 0xf;
  local_68 = 0x72;
  local_70 = 1;
  local_78 = 0;
  puVar6 = (undefined4 *)FUN_144e560a0(local_40,&local_68,1);
  puVar2 = *(undefined8 **)(param_1 + 0x78);
  if (puVar2 == *(undefined8 **)(param_1 + 0x80)) {
    FUN_144e5d6d0(plVar1);
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    uVar3 = puVar6[1];
    uVar4 = puVar6[2];
    uVar5 = puVar6[3];
    *(undefined4 *)puVar2 = *puVar6;
    *(undefined4 *)((longlong)puVar2 + 4) = uVar3;
    *(undefined4 *)(puVar2 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar2 + 0xc) = uVar5;
    uVar7 = *(undefined8 *)(puVar6 + 6);
    puVar2[2] = *(undefined8 *)(puVar6 + 4);
    puVar2[3] = uVar7;
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0xf;
    *(undefined1 *)puVar6 = 0;
    *(undefined4 *)(puVar2 + 4) = puVar6[8];
    *(undefined4 *)((longlong)puVar2 + 0x24) = puVar6[9];
    *(undefined4 *)(puVar2 + 5) = puVar6[10];
    *(undefined1 *)((longlong)puVar2 + 0x2c) = *(undefined1 *)(puVar6 + 0xb);
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 0x30;
  }
  if (0xf < local_28) {
    uVar9 = local_28 + 1;
    lVar8 = local_40[0];
    if (0xfff < uVar9) {
      uVar9 = local_28 + 0x28;
      lVar8 = *(longlong *)(local_40[0] + -8);
      if (0x1f < (local_40[0] - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar8,uVar9);
  }
  uStack_60 = 0;
  local_58 = 3;
  local_50 = 0xf;
  local_68 = 0x646572;
  local_70 = 1;
  local_78 = 0;
  puVar6 = (undefined4 *)FUN_144e560a0(local_40,&local_68,1);
  puVar2 = *(undefined8 **)(param_1 + 0x78);
  if (puVar2 == *(undefined8 **)(param_1 + 0x80)) {
    FUN_144e5d6d0(plVar1);
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    uVar3 = puVar6[1];
    uVar4 = puVar6[2];
    uVar5 = puVar6[3];
    *(undefined4 *)puVar2 = *puVar6;
    *(undefined4 *)((longlong)puVar2 + 4) = uVar3;
    *(undefined4 *)(puVar2 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar2 + 0xc) = uVar5;
    uVar7 = *(undefined8 *)(puVar6 + 6);
    puVar2[2] = *(undefined8 *)(puVar6 + 4);
    puVar2[3] = uVar7;
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0xf;
    *(undefined1 *)puVar6 = 0;
    *(undefined4 *)(puVar2 + 4) = puVar6[8];
    *(undefined4 *)((longlong)puVar2 + 0x24) = puVar6[9];
    *(undefined4 *)(puVar2 + 5) = puVar6[10];
    *(undefined1 *)((longlong)puVar2 + 0x2c) = *(undefined1 *)(puVar6 + 0xb);
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 0x30;
  }
  if (0xf < local_28) {
    uVar9 = local_28 + 1;
    lVar8 = local_40[0];
    if (0xfff < uVar9) {
      uVar9 = local_28 + 0x28;
      lVar8 = *(longlong *)(local_40[0] + -8);
      if (0x1f < (local_40[0] - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar8,uVar9);
  }
  uStack_60 = 0;
  local_58 = 3;
  local_50 = 0xf;
  local_68 = 0x646572;
  local_70 = 1;
  local_78 = 0;
  puVar6 = (undefined4 *)FUN_144e560a0(local_40,&local_68,1);
  puVar2 = *(undefined8 **)(param_1 + 0x78);
  if (puVar2 == *(undefined8 **)(param_1 + 0x80)) {
    FUN_144e5d6d0(plVar1);
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    uVar3 = puVar6[1];
    uVar4 = puVar6[2];
    uVar5 = puVar6[3];
    *(undefined4 *)puVar2 = *puVar6;
    *(undefined4 *)((longlong)puVar2 + 4) = uVar3;
    *(undefined4 *)(puVar2 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar2 + 0xc) = uVar5;
    uVar7 = *(undefined8 *)(puVar6 + 6);
    puVar2[2] = *(undefined8 *)(puVar6 + 4);
    puVar2[3] = uVar7;
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0xf;
    *(undefined1 *)puVar6 = 0;
    *(undefined4 *)(puVar2 + 4) = puVar6[8];
    *(undefined4 *)((longlong)puVar2 + 0x24) = puVar6[9];
    *(undefined4 *)(puVar2 + 5) = puVar6[10];
    *(undefined1 *)((longlong)puVar2 + 0x2c) = *(undefined1 *)(puVar6 + 0xb);
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 0x30;
  }
  if (0xf < local_28) {
    uVar9 = local_28 + 1;
    lVar8 = local_40[0];
    if (0xfff < uVar9) {
      uVar9 = local_28 + 0x28;
      lVar8 = *(longlong *)(local_40[0] + -8);
      if (0x1f < (local_40[0] - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar8,uVar9);
  }
  uStack_60 = 0;
  local_58 = 1;
  local_50 = 0xf;
  local_68 = 0x67;
  local_70 = 1;
  local_78 = 1;
  puVar6 = (undefined4 *)FUN_144e560a0(local_40,&local_68,1);
  puVar2 = *(undefined8 **)(param_1 + 0x78);
  if (puVar2 == *(undefined8 **)(param_1 + 0x80)) {
    FUN_144e5d6d0(plVar1);
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    uVar3 = puVar6[1];
    uVar4 = puVar6[2];
    uVar5 = puVar6[3];
    *(undefined4 *)puVar2 = *puVar6;
    *(undefined4 *)((longlong)puVar2 + 4) = uVar3;
    *(undefined4 *)(puVar2 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar2 + 0xc) = uVar5;
    uVar7 = *(undefined8 *)(puVar6 + 6);
    puVar2[2] = *(undefined8 *)(puVar6 + 4);
    puVar2[3] = uVar7;
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0xf;
    *(undefined1 *)puVar6 = 0;
    *(undefined4 *)(puVar2 + 4) = puVar6[8];
    *(undefined4 *)((longlong)puVar2 + 0x24) = puVar6[9];
    *(undefined4 *)(puVar2 + 5) = puVar6[10];
    *(undefined1 *)((longlong)puVar2 + 0x2c) = *(undefined1 *)(puVar6 + 0xb);
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 0x30;
  }
  if (0xf < local_28) {
    uVar9 = local_28 + 1;
    lVar8 = local_40[0];
    if (0xfff < uVar9) {
      uVar9 = local_28 + 0x28;
      lVar8 = *(longlong *)(local_40[0] + -8);
      if (0x1f < (local_40[0] - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar8,uVar9);
  }
  uStack_60 = 0;
  local_58 = 1;
  local_50 = 0xf;
  local_68 = 0x67;
  local_70 = 1;
  local_78 = 1;
  puVar6 = (undefined4 *)FUN_144e560a0(local_40,&local_68,1);
  puVar2 = *(undefined8 **)(param_1 + 0x78);
  if (puVar2 == *(undefined8 **)(param_1 + 0x80)) {
    FUN_144e5d6d0(plVar1);
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    uVar3 = puVar6[1];
    uVar4 = puVar6[2];
    uVar5 = puVar6[3];
    *(undefined4 *)puVar2 = *puVar6;
    *(undefined4 *)((longlong)puVar2 + 4) = uVar3;
    *(undefined4 *)(puVar2 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar2 + 0xc) = uVar5;
    uVar7 = *(undefined8 *)(puVar6 + 6);
    puVar2[2] = *(undefined8 *)(puVar6 + 4);
    puVar2[3] = uVar7;
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0xf;
    *(undefined1 *)puVar6 = 0;
    *(undefined4 *)(puVar2 + 4) = puVar6[8];
    *(undefined4 *)((longlong)puVar2 + 0x24) = puVar6[9];
    *(undefined4 *)(puVar2 + 5) = puVar6[10];
    *(undefined1 *)((longlong)puVar2 + 0x2c) = *(undefined1 *)(puVar6 + 0xb);
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 0x30;
  }
  if (0xf < local_28) {
    uVar9 = local_28 + 1;
    lVar8 = local_40[0];
    if (0xfff < uVar9) {
      uVar9 = local_28 + 0x28;
      lVar8 = *(longlong *)(local_40[0] + -8);
      if (0x1f < (local_40[0] - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar8,uVar9);
  }
  uStack_60 = 0;
  local_58 = 3;
  local_50 = 0xf;
  local_68 = 0x6e7267;
  local_70 = 1;
  local_78 = 1;
  puVar6 = (undefined4 *)FUN_144e560a0(local_40,&local_68,1);
  puVar2 = *(undefined8 **)(param_1 + 0x78);
  if (puVar2 == *(undefined8 **)(param_1 + 0x80)) {
    FUN_144e5d6d0(plVar1);
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    uVar3 = puVar6[1];
    uVar4 = puVar6[2];
    uVar5 = puVar6[3];
    *(undefined4 *)puVar2 = *puVar6;
    *(undefined4 *)((longlong)puVar2 + 4) = uVar3;
    *(undefined4 *)(puVar2 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar2 + 0xc) = uVar5;
    uVar7 = *(undefined8 *)(puVar6 + 6);
    puVar2[2] = *(undefined8 *)(puVar6 + 4);
    puVar2[3] = uVar7;
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0xf;
    *(undefined1 *)puVar6 = 0;
    *(undefined4 *)(puVar2 + 4) = puVar6[8];
    *(undefined4 *)((longlong)puVar2 + 0x24) = puVar6[9];
    *(undefined4 *)(puVar2 + 5) = puVar6[10];
    *(undefined1 *)((longlong)puVar2 + 0x2c) = *(undefined1 *)(puVar6 + 0xb);
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 0x30;
  }
  FUN_144b65b20(local_40);
  uStack_60 = 0;
  local_58 = 3;
  local_50 = 0xf;
  local_68 = 0x6e7267;
  local_70 = 1;
  local_78 = 1;
  uVar7 = FUN_144e560a0(local_40,&local_68,1);
  FUN_144e4f480(plVar1,uVar7);
  FUN_144b65b20(local_40);
  uStack_60 = 0;
  local_58 = 5;
  local_50 = 0xf;
  local_68 = 0x6e65657267;
  local_70 = 1;
  local_78 = 1;
  uVar7 = FUN_144e560a0(local_40,&local_68,1);
  FUN_144e4f480(plVar1,uVar7);
  FUN_144b65b20(local_40);
  uStack_60 = 0;
  local_58 = 5;
  local_50 = 0xf;
  local_68 = 0x6e65657267;
  local_70 = 1;
  local_78 = 1;
  uVar7 = FUN_144e560a0(local_40,&local_68,1);
  FUN_144e4f480(plVar1,uVar7);
  FUN_144b65b20(local_40);
  uStack_60 = 0;
  local_58 = 1;
  local_50 = 0xf;
  local_68 = 0x62;
  local_70 = 1;
  local_78 = 2;
  uVar7 = FUN_144e560a0(local_40,&local_68,1);
  FUN_144e4f480(plVar1,uVar7);
  FUN_144b65b20(local_40);
  uStack_60 = 0;
  local_58 = 1;
  local_50 = 0xf;
  local_68 = 0x62;
  local_70 = 1;
  local_78 = 2;
  uVar7 = FUN_144e560a0(local_40,&local_68,1);
  FUN_144e4f480(plVar1,uVar7);
  FUN_144b65b20(local_40);
  uStack_60 = 0;
  local_58 = 3;
  local_50 = 0xf;
  local_68 = 0x756c62;
  local_70 = 1;
  local_78 = 2;
  uVar7 = FUN_144e560a0(local_40,&local_68,1);
  FUN_144e4f480(plVar1,uVar7);
  FUN_144b65b20(local_40);
  uStack_60 = 0;
  local_58 = 3;
  local_50 = 0xf;
  local_68 = 0x756c62;
  local_70 = 1;
  local_78 = 2;
  uVar7 = FUN_144e560a0(local_40,&local_68,1);
  FUN_144e4f480(plVar1,uVar7);
  FUN_144b65b20(local_40);
  uStack_60 = 0;
  local_58 = 4;
  local_50 = 0xf;
  local_68 = 0x65756c62;
  local_70 = 1;
  local_78 = 2;
  uVar7 = FUN_144e560a0(local_40,&local_68,1);
  FUN_144e4f480(plVar1,uVar7);
  FUN_144b65b20(local_40);
  uStack_60 = 0;
  local_58 = 4;
  local_50 = 0xf;
  local_68 = 0x65756c62;
  local_70 = 1;
  local_78 = 2;
  uVar7 = FUN_144e560a0(local_40,&local_68,1);
  FUN_144e4f480(plVar1,uVar7);
  FUN_144b65b20(local_40);
  uStack_60 = 0;
  local_58 = 1;
  local_50 = 0xf;
  local_68 = 0x79;
  local_70 = 1;
  local_78 = 0xffffffff;
  uVar7 = FUN_144e560a0(local_40,&local_68,1);
  FUN_144e4f480(plVar1,uVar7);
  FUN_144e564f0(local_40);
  uStack_60 = 0;
  local_58 = 1;
  local_50 = 0xf;
  local_68 = 0x79;
  local_70 = 1;
  local_78 = 0xffffffff;
  uVar7 = FUN_144e560a0(local_40,&local_68,1);
  FUN_144e4f480(plVar1,uVar7);
  FUN_144e564f0(local_40);
  uStack_60 = 0;
  local_58 = 2;
  local_50 = 0xf;
  local_68 = 0x7962;
  local_70 = 1;
  local_78 = 0xffffffff;
  uVar7 = FUN_144e560a0(local_40,&local_68,1);
  FUN_144e4f480(plVar1,uVar7);
  FUN_144e564f0(local_40);
  uStack_60 = 0;
  local_58 = 2;
  local_50 = 0xf;
  local_68 = 0x7962;
  local_70 = 1;
  local_78 = 0xffffffff;
  uVar7 = FUN_144e560a0(local_40,&local_68,1);
  FUN_144e4f480(plVar1,uVar7);
  FUN_144e564f0(local_40);
  uStack_60 = 0;
  local_58 = 2;
  local_50 = 0xf;
  local_68 = 0x7972;
  local_70 = 1;
  local_78 = 0xffffffff;
  uVar7 = FUN_144e560a0(local_40,&local_68,1);
  FUN_144e4f480(plVar1,uVar7);
  FUN_144e564f0(local_40);
  uStack_60 = 0;
  local_58 = 2;
  local_50 = 0xf;
  local_68 = 0x7972;
  local_70 = 1;
  local_78 = 0xffffffff;
  uVar7 = FUN_144e560a0(local_40,&local_68,1);
  FUN_144e4f480(plVar1,uVar7);
  FUN_144e564f0(local_40);
  uStack_60 = 0;
  local_58 = 1;
  local_50 = 0xf;
  local_68 = 0x61;
  local_70 = 1;
  local_78 = 0xffffffff;
  uVar7 = FUN_144e560a0(local_40,&local_68,2);
  FUN_144e4f480(plVar1,uVar7);
  FUN_144e564f0(local_40);
  uStack_60 = 0;
  local_58 = 1;
  local_50 = 0xf;
  local_68 = 0x61;
  local_70 = 1;
  local_78 = 0xffffffff;
  uVar7 = FUN_144e560a0(local_40,&local_68,2);
  FUN_144e4f480(plVar1,uVar7);
  FUN_144e564f0(local_40);
  uStack_60 = 0;
  local_58 = 1;
  local_50 = 0xf;
  local_68 = 0x61;
  local_70 = 1;
  local_78 = 0xffffffff;
  uVar7 = FUN_144e560a0(local_40,&local_68,2);
  FUN_144e4f480(plVar1,uVar7);
  FUN_144e564f0(local_40);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_98);
}



// FUNCTION 144e53570 FUN_144e53570 body=1931 status=ok
// SIG undefined FUN_144e53570(void)

void FUN_144e53570(longlong param_1,longlong *param_2)

{
  char cVar1;
  char ***pppcVar2;
  bool bVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  void *_Dst;
  char ****ppppcVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *_Buf1;
  char ****ppppcVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  char ****ppppcVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 *local_d8;
  undefined8 *puStack_d0;
  undefined8 *local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  longlong *local_b0;
  char ***local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  char ***local_88 [2];
  size_t local_78;
  ulonglong local_70;
  char ***local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e8 = param_1;
  local_b0 = param_2;
  if (*param_2 != param_2[1]) {
    FUN_144e5c970(*param_2,param_2[1],param_2);
    param_2[1] = *param_2;
  }
  local_d8 = (undefined8 *)0x0;
  puStack_d0 = (undefined8 *)0x0;
  puVar16 = (undefined8 *)0x0;
  local_f8 = (undefined8 *)0x0;
  local_c8 = (undefined8 *)0x0;
  uVar19 = 0;
  lVar8 = *(longlong *)(param_1 + 0x40);
  if ((*(longlong *)(param_1 + 0x48) - lVar8) / 0x98 != 0) {
    lVar18 = 0;
    do {
      puVar15 = (undefined8 *)(lVar8 + lVar18);
      local_a8 = (char ***)0x0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      puVar13 = puVar15;
      if (0xf < (ulonglong)puVar15[3]) {
        puVar13 = (undefined8 *)*puVar15;
      }
      uVar12 = puVar15[2];
      if (0x7fffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_146eb22ad();
      }
      if (uVar12 < 0x10) {
        local_98 = uVar12;
        uStack_90 = 0xf;
        local_a8 = (char ***)*puVar13;
        uStack_a0 = puVar13[1];
      }
      else {
        uStack_90 = 0xf;
        uVar9 = uVar12 | 0xf;
        if (uVar9 < 0x8000000000000000) {
          if (uVar9 < 0x16) {
            uVar9 = 0x16;
          }
        }
        else {
          uVar9 = 0x7fffffffffffffff;
        }
        local_a8 = (char ***)FUN_144b659f0(&local_a8,uVar9 + 1);
        local_98 = uVar12;
        uStack_90 = uVar9;
        memcpy(local_a8,puVar13,uVar12 + 1);
        puVar16 = local_f8;
      }
      uVar12 = uStack_90;
      ppppcVar14 = (char ****)local_a8;
      ppppcVar11 = &local_a8;
      if (0xf < uStack_90) {
        ppppcVar11 = (char ****)local_a8;
      }
      if (local_98 == 0) {
LAB_144e53719:
        lVar8 = -1;
      }
      else {
        lVar8 = -1;
        if (local_98 - 1 != -1) {
          lVar8 = local_98 - 1;
        }
        ppppcVar7 = (char ****)((longlong)ppppcVar11 + lVar8);
        cVar1 = *(char *)ppppcVar7;
        while (cVar1 != '.') {
          if (ppppcVar7 == ppppcVar11) goto LAB_144e53719;
          ppppcVar7 = (char ****)((longlong)ppppcVar7 + -1);
          cVar1 = *(char *)ppppcVar7;
        }
        lVar8 = (longlong)ppppcVar7 - (longlong)ppppcVar11;
      }
      if (lVar8 != -1) {
        uVar9 = lVar8 + 1;
        local_68 = (char ***)0x0;
        uStack_60 = 0;
        if (local_98 < uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_14709e5c0();
        }
        uVar6 = 0xffffffffffffffff;
        if (local_98 - uVar9 != 0xffffffffffffffff) {
          uVar6 = local_98 - uVar9;
        }
        ppppcVar11 = &local_a8;
        if (0xf < uStack_90) {
          ppppcVar11 = (char ****)local_a8;
        }
        if (0x7fffffffffffffff < uVar6) goto LAB_144e53d18;
        if (uVar6 < 0x10) {
          uStack_50 = 0xf;
          local_58 = uVar6;
          memcpy(&local_68,(char *)((longlong)ppppcVar11 + uVar9),uVar6);
          *(undefined1 *)((longlong)&local_68 + uVar6) = 0;
        }
        else {
          uVar12 = uVar6 | 0xf;
          if (uVar12 < 0x8000000000000000) {
            if (uVar12 < 0x16) {
              uVar12 = 0x16;
            }
          }
          else {
            uVar12 = 0x7fffffffffffffff;
          }
          ppppcVar14 = (char ****)FUN_144b659f0(&local_68,uVar12 + 1);
          local_68 = (char ***)ppppcVar14;
          local_58 = uVar6;
          uStack_50 = uVar12;
          memcpy(ppppcVar14,(char *)((longlong)ppppcVar11 + uVar9),uVar6);
          *(char *)((longlong)ppppcVar14 + uVar6) = '\0';
          uVar12 = uStack_90;
          ppppcVar14 = (char ****)local_a8;
        }
        if (0xf < uVar12) {
          ppppcVar11 = ppppcVar14;
          if ((0xfff < uVar12 + 1) &&
             (ppppcVar11 = (char ****)ppppcVar14[-1],
             (char *)0x1f < (char *)((longlong)ppppcVar14 + (-8 - (longlong)ppppcVar11))))
          goto LAB_144e53aa8;
          thunk_FUN_1400020a8(ppppcVar11);
        }
        local_a8 = local_68;
        uStack_a0 = uStack_60;
        local_98 = local_58;
        uStack_90 = uStack_50;
        puVar16 = local_f8;
        param_1 = local_e8;
      }
      uVar12 = local_98;
      puVar15 = puStack_d0;
      if (puStack_d0 == puVar16) {
        FUN_1470a9b88(&local_d8,puStack_d0,&local_a8);
        local_f8 = local_c8;
        puVar16 = local_c8;
      }
      else {
        *puStack_d0 = 0;
        puStack_d0[1] = 0;
        _Dst = (void *)0x0;
        puStack_d0[2] = 0;
        puStack_d0[3] = 0;
        ppppcVar14 = &local_a8;
        if (0xf < uStack_90) {
          ppppcVar14 = (char ****)local_a8;
        }
        if (0x7fffffffffffffff < local_98) {
LAB_144e53d18:
                    /* WARNING: Subroutine does not return */
          FUN_146eb22ad();
        }
        puStack_d0[3] = 0xf;
        if (local_98 < 0x10) {
          puStack_d0[2] = local_98;
          pppcVar2 = ppppcVar14[1];
          *puStack_d0 = *ppppcVar14;
          puStack_d0[1] = pppcVar2;
          puStack_d0 = puStack_d0 + 4;
          goto LAB_144e5394f;
        }
        uVar9 = local_98 | 0xf;
        if (uVar9 < 0x8000000000000000) {
          if (uVar9 < 0x16) {
            uVar9 = 0x16;
          }
          if (0xfff < uVar9 + 1) {
            uVar6 = uVar9 + 0x28;
            if (uVar6 <= uVar9 + 1) {
                    /* WARNING: Subroutine does not return */
              FUN_14694ac37();
            }
            goto LAB_144e538dc;
          }
          if (uVar9 != 0xffffffffffffffff) {
            _Dst = (void *)FUN_14494321d();
          }
        }
        else {
          uVar9 = 0x7fffffffffffffff;
          uVar6 = 0x8000000000000027;
LAB_144e538dc:
          lVar8 = FUN_14494321d(uVar6);
          if (lVar8 == 0) {
LAB_144e53aa8:
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          _Dst = (void *)(lVar8 + 0x27U & 0xffffffffffffffe0);
          *(longlong *)((longlong)_Dst - 8) = lVar8;
        }
        *puVar15 = _Dst;
        puVar15[2] = uVar12;
        puVar15[3] = uVar9;
        memcpy(_Dst,ppppcVar14,uVar12 + 1);
        puStack_d0 = puVar15 + 4;
        puVar16 = local_f8;
      }
LAB_144e5394f:
      if (0xf < uStack_90) {
        uVar12 = uStack_90 + 1;
        ppppcVar14 = (char ****)local_a8;
        if (0xfff < uVar12) {
          uVar12 = uStack_90 + 0x28;
          ppppcVar14 = (char ****)local_a8[-1];
          if ((char *)0x1f < (char *)((longlong)local_a8 + (-8 - (longlong)ppppcVar14))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1400020a8(ppppcVar14,uVar12);
        puVar16 = local_f8;
      }
      uVar19 = uVar19 + 1;
      lVar18 = lVar18 + 0x98;
      lVar8 = *(longlong *)(param_1 + 0x40);
    } while (uVar19 < (ulonglong)((*(longlong *)(param_1 + 0x48) - lVar8) / 0x98));
  }
  local_b8 = 0;
  lVar18 = *(longlong *)(local_e8 + 0x78) - *(longlong *)(local_e8 + 0x70);
  lVar8 = lVar18 >> 0x3f;
  puVar16 = local_d8;
  if (lVar18 / 0x30 + lVar8 != lVar8) {
    local_f0 = 0;
    lVar8 = local_e8;
    do {
      local_c0 = 0;
      lVar18 = *(longlong *)(lVar8 + 0x40);
      lVar10 = *(longlong *)(lVar8 + 0x48) - lVar18;
      lVar17 = lVar10 >> 0x3f;
      lVar20 = local_f0;
      if (lVar10 / 0x98 + lVar17 != lVar17) {
        local_e0 = 0;
        puVar15 = puVar16;
        do {
          uVar19 = local_c0;
          lVar17 = local_e0;
          puVar16 = (undefined8 *)(*(longlong *)(lVar8 + 0x70) + lVar20);
          if (*(int *)((longlong)puVar16 + 0x24) == *(int *)(local_e0 + 0x2c + lVar18)) {
            if (*(char *)((longlong)puVar16 + 0x2c) == '\0') {
              puVar13 = puVar16;
              if (0xf < (ulonglong)puVar16[3]) {
                puVar13 = (undefined8 *)*puVar16;
              }
              _Buf1 = puVar15;
              if (0xf < (ulonglong)puVar15[3]) {
                _Buf1 = (undefined8 *)*puVar15;
              }
              if ((puVar15[2] == puVar16[2]) &&
                 (iVar5 = memcmp(_Buf1,puVar13,puVar15[2]), iVar5 == 0)) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
            }
            else {
              FUN_144b65a50(local_88,puVar15);
              ppppcVar14 = (char ****)local_88[0];
              if (local_70 < 0x10) {
                ppppcVar14 = local_88;
              }
              ppppcVar7 = (char ****)((longlong)ppppcVar14 + local_78);
              ppppcVar11 = (char ****)local_88[0];
              uVar12 = local_70;
              for (; local_88[0] = (char ***)ppppcVar11, local_70 = uVar12, ppppcVar14 != ppppcVar7;
                  ppppcVar14 = (char ****)((longlong)ppppcVar14 + 1)) {
                iVar5 = tolower((int)*(char *)ppppcVar14);
                *(char *)ppppcVar14 = (char)iVar5;
                ppppcVar11 = (char ****)local_88[0];
                uVar12 = local_70;
              }
              puVar13 = puVar16;
              if (0xf < (ulonglong)puVar16[3]) {
                puVar13 = (undefined8 *)*puVar16;
              }
              ppppcVar14 = local_88;
              if (0xf < uVar12) {
                ppppcVar14 = ppppcVar11;
              }
              if ((local_78 == puVar16[2]) &&
                 (iVar5 = memcmp(ppppcVar14,puVar13,local_78), iVar5 == 0)) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              lVar17 = local_e0;
              lVar8 = local_e8;
              uVar19 = local_c0;
              lVar20 = local_f0;
              if (0xf < uVar12) {
                uVar19 = uVar12 + 1;
                ppppcVar14 = ppppcVar11;
                if (0xfff < uVar19) {
                  uVar19 = uVar12 + 0x28;
                  ppppcVar14 = (char ****)ppppcVar11[-1];
                  if ((char *)0x1f < (char *)((longlong)ppppcVar11 + (-8 - (longlong)ppppcVar14))) {
                    /* WARNING: Subroutine does not return */
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                thunk_FUN_1400020a8(ppppcVar14,uVar19);
                lVar17 = local_e0;
                lVar8 = local_e8;
                uVar19 = local_c0;
                lVar20 = local_f0;
              }
            }
            plVar4 = local_b0;
            if (bVar3) {
              lVar17 = *(longlong *)(lVar8 + 0x70) + lVar20;
              lVar18 = local_b0[1];
              if (lVar18 == local_b0[2]) {
                FUN_144e5d880(local_b0,lVar18,lVar17);
                puVar16 = local_d8;
              }
              else {
                FUN_144b65a50(lVar18,lVar17);
                *(undefined4 *)(lVar18 + 0x20) = *(undefined4 *)(lVar17 + 0x20);
                *(undefined4 *)(lVar18 + 0x24) = *(undefined4 *)(lVar17 + 0x24);
                *(undefined4 *)(lVar18 + 0x28) = *(undefined4 *)(lVar17 + 0x28);
                *(undefined1 *)(lVar18 + 0x2c) = *(undefined1 *)(lVar17 + 0x2c);
                plVar4[1] = plVar4[1] + 0x30;
                puVar16 = local_d8;
              }
              break;
            }
          }
          local_c0 = uVar19 + 1;
          local_e0 = lVar17 + 0x98;
          puVar15 = puVar15 + 4;
          lVar18 = *(longlong *)(lVar8 + 0x40);
          puVar16 = local_d8;
        } while (local_c0 < (ulonglong)((*(longlong *)(lVar8 + 0x48) - lVar18) / 0x98));
      }
      local_b8 = local_b8 + 1;
      local_f0 = lVar20 + 0x30;
    } while (local_b8 <
             (ulonglong)((*(longlong *)(lVar8 + 0x78) - *(longlong *)(lVar8 + 0x70)) / 0x30));
  }
  if (puVar16 != (undefined8 *)0x0) {
    FUN_1486115df(puVar16,puStack_d0,&local_d8);
    uVar19 = (longlong)local_f8 - (longlong)puVar16 & 0xffffffffffffffe0;
    puVar15 = puVar16;
    if (0xfff < uVar19) {
      uVar19 = uVar19 + 0x27;
      puVar15 = (undefined8 *)puVar16[-1];
      if (0x1f < (ulonglong)((longlong)puVar16 + (-8 - (longlong)puVar15))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(puVar15,uVar19);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_118);
}



// FUNCTION 144e53d20 FUN_144e53d20 body=4185 status=ok
// SIG undefined FUN_144e53d20(void)

void FUN_144e53d20(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  char ***pppcVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  char *****_Buf1;
  char *****pppppcVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  char *****pppppcVar14;
  char ****ppppcVar15;
  size_t _Size;
  longlong *plVar16;
  char ****ppppcVar17;
  longlong lVar18;
  char *****pppppcVar19;
  ulonglong uVar20;
  char ****ppppcVar21;
  ulonglong uVar22;
  longlong lVar23;
  char *****pppppcVar24;
  char cVar25;
  uint uVar26;
  void *_Dst;
  undefined1 auStack_1e8 [32];
  longlong *local_1c8;
  undefined1 local_1c0 [8];
  char ****local_1b8;
  longlong local_1b0;
  uint local_1a8;
  longlong local_1a0;
  uint local_198;
  longlong *local_190;
  undefined8 *local_188;
  char ****local_178;
  undefined8 uStack_170;
  longlong local_158;
  undefined8 *local_150;
  longlong local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 *puStack_128;
  undefined8 *local_120;
  char ***local_118;
  char ****local_108;
  undefined8 *local_100;
  char ****local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  char ****local_e0;
  ulonglong uStack_d8;
  char ***local_d0;
  ulonglong uStack_c8;
  char ****local_c0;
  ulonglong uStack_b8;
  char ***local_b0;
  ulonglong uStack_a8;
  char ****local_a0;
  undefined8 uStack_98;
  char ***local_90;
  ulonglong uStack_88;
  char ****local_80;
  char ***pppcStack_78;
  char ***local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  uVar11 = 0;
  local_1a8 = 0;
  local_1b8 = (char ****)0x0;
  local_1b0 = 0;
  local_190 = param_3;
  local_148 = param_1;
  local_140 = param_4;
  local_138 = param_2;
  local_e8 = param_2;
  local_1b8 = (char ****)FUN_14494321d(0x50);
  *local_1b8 = (char ***)local_1b8;
  local_1b8[1] = (char ***)local_1b8;
  local_1b8[2] = (char ***)local_1b8;
  *(undefined2 *)(local_1b8 + 3) = 0x101;
  local_130 = 0;
  puStack_128 = (undefined8 *)0x0;
  uVar26 = 0;
  local_188 = (undefined8 *)0x0;
  local_120 = (undefined8 *)0x0;
  local_198 = 0;
  FUN_144b65f10(param_2,&local_1c8);
  plVar7 = (longlong *)FUN_144b65f30(param_2,&local_1a0);
  uVar20 = uVar11;
  if (local_1c8 != (longlong *)*plVar7) {
    do {
      uVar26 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar26;
      plVar7 = (longlong *)local_1c8[2];
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        cVar25 = *(char *)(*plVar7 + 0x19);
        local_1c8 = plVar7;
        plVar7 = (longlong *)*plVar7;
        while (cVar25 == '\0') {
          cVar25 = *(char *)(*plVar7 + 0x19);
          local_1c8 = plVar7;
          plVar7 = (longlong *)*plVar7;
        }
      }
      else {
        cVar25 = *(char *)(local_1c8[1] + 0x19);
        plVar16 = (longlong *)local_1c8[1];
        plVar7 = local_1c8;
        while ((local_1c8 = plVar16, cVar25 == '\0' && (plVar7 == (longlong *)local_1c8[2]))) {
          cVar25 = *(char *)(local_1c8[1] + 0x19);
          plVar16 = (longlong *)local_1c8[1];
          plVar7 = local_1c8;
        }
      }
      puVar8 = (undefined8 *)FUN_144b65f30(param_2,&local_1a0);
    } while (local_1c8 != (longlong *)*puVar8);
    local_198 = uVar26;
    if (uVar26 != 0) {
      uVar22 = (ulonglong)uVar26;
      lVar18 = param_3[1];
      lVar13 = *param_3;
      lVar10 = (lVar18 - lVar13) / 0x26 + (lVar18 - lVar13 >> 0x3f);
      uVar20 = (lVar10 >> 2) - (lVar10 >> 0x3f);
      if (uVar22 < uVar20) {
        lVar13 = uVar22 * 0x98 + lVar13;
        FUN_144e5cb70(lVar13,lVar18,param_3);
        param_3[1] = lVar13;
      }
      else if (uVar20 < uVar22) {
        if ((ulonglong)((param_3[2] - lVar13) / 0x98) < uVar22) {
          FUN_144e5dc50(param_3,uVar22,local_1c0);
        }
        else {
          lVar18 = FUN_144e5df10(lVar18,uVar22 - uVar20,param_3);
          param_3[1] = lVar18;
        }
      }
    }
  }
  FUN_144b65f10(param_2,&local_1c8);
  puVar8 = (undefined8 *)FUN_144b65f30(param_2,&local_1a0);
  uVar4 = local_138;
  if (local_1c8 != (longlong *)*puVar8) {
    do {
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      lVar18 = -1;
      do {
        lVar13 = lVar18 + 0x1d;
        lVar18 = lVar18 + 1;
      } while (*(char *)((longlong)local_1c8 + lVar13) != '\0');
      FUN_140cd1a74(&local_60);
      lVar18 = uVar11 * 0x98;
      puVar8 = (undefined8 *)(*param_3 + lVar18);
      if (puVar8 == &local_60) {
        if (0xf < uStack_48) {
          FUN_144b659b0(&local_60,local_60,uStack_48 + 1);
        }
      }
      else {
        FUN_1401d9a90(puVar8);
        *puVar8 = local_60;
        puVar8[1] = uStack_58;
        puVar8[2] = local_50;
        puVar8[3] = uStack_48;
      }
      *(undefined4 *)(lVar18 + 0x20 + *param_3) = 0;
      *(int *)(*param_3 + 0x24 + lVar18) = (int)local_1c8[0x24];
      *(undefined4 *)(*param_3 + 0x28 + lVar18) = *(undefined4 *)((longlong)local_1c8 + 0x124);
      *(undefined4 *)(*param_3 + 0x2c + lVar18) = *(undefined4 *)((longlong)local_1c8 + 0x11c);
      *(char *)(*param_3 + 0x30 + lVar18) = (char)local_1c8[0x25];
      uVar11 = (ulonglong)((int)uVar11 + 1);
      plVar7 = (longlong *)local_1c8[2];
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        cVar25 = *(char *)(*plVar7 + 0x19);
        local_1c8 = plVar7;
        plVar7 = (longlong *)*plVar7;
        while (cVar25 == '\0') {
          cVar25 = *(char *)(*plVar7 + 0x19);
          local_1c8 = plVar7;
          plVar7 = (longlong *)*plVar7;
        }
      }
      else {
        cVar25 = *(char *)(local_1c8[1] + 0x19);
        plVar16 = (longlong *)local_1c8[1];
        plVar7 = local_1c8;
        while ((local_1c8 = plVar16, cVar25 == '\0' && (plVar7 == (longlong *)local_1c8[2]))) {
          cVar25 = *(char *)(local_1c8[1] + 0x19);
          plVar16 = (longlong *)local_1c8[1];
          plVar7 = local_1c8;
        }
      }
      puVar8 = (undefined8 *)FUN_144b65f30(uVar4,&local_1a0);
    } while (local_1c8 != (longlong *)*puVar8);
    uVar11 = (ulonglong)local_1a8;
  }
  local_1c8 = (longlong *)((ulonglong)local_1c8 & 0xffffffff00000000);
  if (uVar26 != 0) {
    local_1a0 = 0;
    do {
      uStack_b8 = 0;
      local_b0 = (char ***)0x0;
      uStack_a8 = 0xf;
      local_c0 = (char ****)0x0;
      local_158 = local_1a0 * 0x98;
      plVar16 = (longlong *)(*param_3 + local_158);
      local_e0 = (char ****)0x0;
      uStack_d8 = 0;
      local_d0 = (char ***)0x0;
      uStack_c8 = 0;
      plVar7 = plVar16;
      if (0xf < (ulonglong)plVar16[3]) {
        plVar7 = (longlong *)*plVar16;
      }
      ppppcVar15 = (char ****)plVar16[2];
      if ((char ****)0x7fffffffffffffff < ppppcVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_146eb22ad();
      }
      uStack_c8 = 0xf;
      if (ppppcVar15 < (char ****)0x10) {
        local_d0 = (char ***)ppppcVar15;
        local_e0 = (char ****)*plVar7;
        uStack_d8 = plVar7[1];
      }
      else {
        uVar20 = (ulonglong)ppppcVar15 | 0xf;
        if (uVar20 < 0x8000000000000000) {
          if (uVar20 < 0x16) {
            uVar20 = 0x16;
          }
        }
        else {
          uVar20 = 0x7fffffffffffffff;
        }
        local_e0 = (char ****)FUN_144b659f0(&local_e0,uVar20 + 1);
        local_d0 = (char ***)ppppcVar15;
        uStack_c8 = uVar20;
        memcpy(local_e0,plVar7,(longlong)ppppcVar15 + 1);
      }
      pppppcVar19 = &local_e0;
      if (0xf < uStack_c8) {
        pppppcVar19 = (char *****)local_e0;
      }
      if ((char ****)local_d0 == (char ****)0x0) {
LAB_144e541c2:
        ppppcVar15 = (char ****)0xffffffffffffffff;
      }
      else {
        lVar18 = -1;
        if ((longlong)local_d0 + -1 != -1) {
          lVar18 = (longlong)local_d0 + -1;
        }
        pppppcVar14 = (char *****)((longlong)pppppcVar19 + lVar18);
        cVar25 = *(char *)pppppcVar14;
        while (cVar25 != '.') {
          if (pppppcVar14 == pppppcVar19) goto LAB_144e541c2;
          pppppcVar14 = (char *****)((longlong)pppppcVar14 + -1);
          cVar25 = *(char *)pppppcVar14;
        }
        ppppcVar15 = (char ****)((longlong)pppppcVar14 - (longlong)pppppcVar19);
      }
      if (ppppcVar15 != (char ****)0xffffffffffffffff) {
        local_a0 = (char ****)0x0;
        uStack_98 = 0;
        local_90 = (char ***)0x0;
        uStack_88 = 0;
        ppppcVar17 = ppppcVar15;
        if (local_d0 < ppppcVar15) {
          ppppcVar17 = (char ****)local_d0;
        }
        pppppcVar19 = &local_e0;
        if (0xf < uStack_c8) {
          pppppcVar19 = (char *****)local_e0;
        }
        FUN_140cd1a74(&local_a0,pppppcVar19,ppppcVar17);
        if (0xf < uStack_a8) {
          uVar20 = uStack_a8 + 1;
          pppppcVar19 = (char *****)local_c0;
          if (0xfff < uVar20) {
            uVar20 = uStack_a8 + 0x28;
            pppppcVar19 = (char *****)local_c0[-1];
            if ((char *)0x1f < (char *)((longlong)local_c0 + (-8 - (longlong)pppppcVar19)))
            goto LAB_144e54a78;
          }
          thunk_FUN_1400020a8(pppppcVar19,uVar20);
        }
        uVar20 = uStack_c8;
        pppppcVar19 = (char *****)local_e0;
        local_c0 = local_a0;
        uStack_b8 = uStack_98;
        local_b0 = local_90;
        uStack_a8 = uStack_88;
        ppppcVar15 = (char ****)((longlong)ppppcVar15 + 1);
        local_a0 = (char ****)0x0;
        uStack_98 = 0;
        if (local_d0 < ppppcVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_14709e5c0();
        }
        ppppcVar17 = (char ****)0xffffffffffffffff;
        if ((char ****)((longlong)local_d0 - (longlong)ppppcVar15) != (char ****)0xffffffffffffffff)
        {
          ppppcVar17 = (char ****)((longlong)local_d0 - (longlong)ppppcVar15);
        }
        pppppcVar14 = &local_e0;
        if (0xf < uStack_c8) {
          pppppcVar14 = (char *****)local_e0;
        }
        if ((char ****)0x7fffffffffffffff < ppppcVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_146eb22ad();
        }
        if (ppppcVar17 < (char ****)0x10) {
          uStack_88 = 0xf;
          local_90 = (char ***)ppppcVar17;
          memcpy(&local_a0,(char *)((longlong)pppppcVar14 + (longlong)ppppcVar15),(size_t)ppppcVar17
                );
          *(undefined1 *)((longlong)&local_a0 + (longlong)ppppcVar17) = 0;
        }
        else {
          uVar20 = (ulonglong)ppppcVar17 | 0xf;
          if (uVar20 < 0x8000000000000000) {
            if (uVar20 < 0x16) {
              uVar20 = 0x16;
            }
          }
          else {
            uVar20 = 0x7fffffffffffffff;
          }
          pppppcVar19 = (char *****)FUN_144b659f0(&local_a0,uVar20 + 1);
          local_a0 = (char ****)pppppcVar19;
          local_90 = (char ***)ppppcVar17;
          uStack_88 = uVar20;
          memcpy(pppppcVar19,(char *)((longlong)pppppcVar14 + (longlong)ppppcVar15),
                 (size_t)ppppcVar17);
          *(char *)((longlong)pppppcVar19 + (longlong)ppppcVar17) = '\0';
          pppppcVar19 = (char *****)local_e0;
          uVar20 = uStack_c8;
        }
        local_1a8 = (uint)uVar11 | 3;
        if (0xf < uVar20) {
          uVar11 = uVar20 + 1;
          pppppcVar14 = pppppcVar19;
          if (0xfff < uVar11) {
            uVar11 = uVar20 + 0x28;
            pppppcVar14 = (char *****)pppppcVar19[-1];
            if ((char *)0x1f < (char *)((longlong)pppppcVar19 + (-8 - (longlong)pppppcVar14))) {
LAB_144e54a78:
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          thunk_FUN_1400020a8(pppppcVar14,uVar11);
        }
        uStack_d8 = uStack_98;
        local_d0 = local_90;
        uStack_c8 = uStack_88;
        local_e0 = local_a0;
      }
      pppcVar5 = local_b0;
      ppppcVar15 = (char ****)local_d0;
      pppppcVar19 = (char *****)local_1b8[1];
      cVar25 = *(char *)((longlong)pppppcVar19 + 0x19);
      pppppcVar14 = pppppcVar19;
      pppppcVar24 = (char *****)local_1b8;
      if (cVar25 == '\0') {
        do {
          pppppcVar9 = &local_c0;
          if (0xf < uStack_a8) {
            pppppcVar9 = (char *****)local_c0;
          }
          _Buf1 = pppppcVar14 + 4;
          if ((char ****)0xf < pppppcVar14[7]) {
            _Buf1 = (char *****)pppppcVar14[4];
          }
          ppppcVar17 = pppppcVar14[6];
          ppppcVar21 = ppppcVar17;
          if (pppcVar5 < ppppcVar17) {
            ppppcVar21 = (char ****)pppcVar5;
          }
          uVar26 = memcmp(_Buf1,pppppcVar9,(size_t)ppppcVar21);
          if (uVar26 == 0) {
            if (ppppcVar17 < pppcVar5) {
              uVar26 = 0xffffffff;
            }
            else {
              uVar26 = (uint)(pppcVar5 < ppppcVar17);
            }
          }
          if ((int)uVar26 < 0) {
            pppppcVar9 = (char *****)pppppcVar14[2];
          }
          else {
            pppppcVar9 = (char *****)*pppppcVar14;
            pppppcVar24 = pppppcVar14;
          }
          pppppcVar14 = pppppcVar9;
        } while (*(char *)((longlong)pppppcVar9 + 0x19) == '\0');
        cVar25 = *(char *)((longlong)pppppcVar19 + 0x19);
      }
      if (*(char *)((longlong)pppppcVar24 + 0x19) == '\0') {
        pppppcVar14 = pppppcVar24 + 4;
        if ((char ****)0xf < pppppcVar24[7]) {
          pppppcVar14 = (char *****)pppppcVar24[4];
        }
        pppppcVar9 = &local_c0;
        if (0xf < uStack_a8) {
          pppppcVar9 = (char *****)local_c0;
        }
        ppppcVar17 = pppppcVar24[6];
        ppppcVar21 = (char ****)pppcVar5;
        if (ppppcVar17 < pppcVar5) {
          ppppcVar21 = ppppcVar17;
        }
        uVar26 = memcmp(pppppcVar9,pppppcVar14,(size_t)ppppcVar21);
        if (uVar26 == 0) {
          if (pppcVar5 < ppppcVar17) {
            uVar26 = 0xffffffff;
          }
          else {
            uVar26 = (uint)(ppppcVar17 < pppcVar5);
          }
        }
        if (((int)uVar26 < 0) || (pppppcVar24 == (char *****)local_1b8)) goto LAB_144e5446b;
      }
      else {
LAB_144e5446b:
        local_118 = (char ***)0xffffffffffffffff;
        uStack_170 = uStack_170 & 0xffffffff00000000;
        local_178 = (char ****)pppppcVar19;
        pppppcVar14 = (char *****)local_1b8;
        while (pppppcVar24 = pppppcVar19, cVar25 == '\0') {
          pppppcVar19 = &local_c0;
          if (0xf < uStack_a8) {
            pppppcVar19 = (char *****)local_c0;
          }
          pppppcVar9 = pppppcVar24 + 4;
          if ((char ****)0xf < pppppcVar24[7]) {
            pppppcVar9 = (char *****)pppppcVar24[4];
          }
          ppppcVar15 = pppppcVar24[6];
          ppppcVar17 = ppppcVar15;
          if (pppcVar5 < ppppcVar15) {
            ppppcVar17 = (char ****)pppcVar5;
          }
          local_178 = (char ****)pppppcVar24;
          uVar26 = memcmp(pppppcVar9,pppppcVar19,(size_t)ppppcVar17);
          if (uVar26 == 0) {
            if (ppppcVar15 < pppcVar5) {
              uVar26 = 0xffffffff;
            }
            else {
              uVar26 = (uint)(pppcVar5 < ppppcVar15);
            }
          }
          if ((int)uVar26 < 0) {
            uStack_170 = (ulonglong)uStack_170._4_4_ << 0x20;
            pppppcVar19 = (char *****)pppppcVar24[2];
            pppppcVar24 = pppppcVar14;
          }
          else {
            uStack_170 = CONCAT44(uStack_170._4_4_,1);
            pppppcVar19 = (char *****)*pppppcVar24;
          }
          cVar25 = *(char *)((longlong)pppppcVar19 + 0x19);
          pppppcVar14 = pppppcVar24;
        }
        if (*(char *)((longlong)pppppcVar14 + 0x19) == '\0') {
          pppppcVar19 = pppppcVar14 + 4;
          if ((char ****)0xf < pppppcVar14[7]) {
            pppppcVar19 = (char *****)pppppcVar14[4];
          }
          pppppcVar24 = &local_c0;
          if (0xf < uStack_a8) {
            pppppcVar24 = (char *****)local_c0;
          }
          ppppcVar15 = pppppcVar14[6];
          ppppcVar17 = (char ****)pppcVar5;
          if (ppppcVar15 < pppcVar5) {
            ppppcVar17 = ppppcVar15;
          }
          uVar26 = memcmp(pppppcVar24,pppppcVar19,(size_t)ppppcVar17);
          if (uVar26 == 0) {
            if (pppcVar5 < ppppcVar15) {
              uVar26 = 0xffffffff;
            }
            else {
              uVar26 = (uint)(ppppcVar15 < pppcVar5);
            }
          }
          if ((int)uVar26 < 0) goto LAB_144e54558;
        }
        else {
LAB_144e54558:
          ppppcVar15 = local_1b8;
          if (local_1b0 == 0x333333333333333) {
LAB_144e54d98:
                    /* WARNING: Subroutine does not return */
            FUN_1470a938d();
          }
          local_108 = (char ****)&local_1b8;
          local_100 = (undefined8 *)0x0;
          puVar8 = (undefined8 *)FUN_144e5c520(&local_1b8,1);
          local_100 = puVar8;
          FUN_144b65a50(puVar8 + 4,&local_c0);
          puVar8[8] = 0;
          *(undefined4 *)(puVar8 + 9) = 0;
          *puVar8 = ppppcVar15;
          puVar8[1] = ppppcVar15;
          puVar8[2] = ppppcVar15;
          *(undefined2 *)(puVar8 + 3) = 0;
          local_100 = (undefined8 *)0x0;
          pppppcVar14 = (char *****)FUN_144e5c590(&local_1b8,&local_178,puVar8);
        }
        pppppcVar14[8] = (char ****)local_118;
        *(undefined4 *)(pppppcVar14 + 9) = 0xffffffff;
        ppppcVar15 = (char ****)local_d0;
      }
      puVar8 = *(undefined8 **)(local_148 + 0x70);
      local_150 = puVar8;
      if (puVar8 != *(undefined8 **)(local_148 + 0x78)) {
        do {
          lVar18 = local_158;
          plVar7 = local_190;
          if (*(int *)((longlong)puVar8 + 0x24) == *(int *)(local_158 + 0x2c + *local_190)) {
            local_150 = puVar8;
            if (*(char *)((longlong)puVar8 + 0x2c) == '\0') {
              puVar12 = puVar8;
              if (0xf < (ulonglong)puVar8[3]) {
                puVar12 = (undefined8 *)*puVar8;
              }
              pppppcVar19 = &local_e0;
              if (0xf < uStack_c8) {
                pppppcVar19 = (char *****)local_e0;
              }
              if ((ppppcVar15 == (char ****)puVar8[2]) &&
                 (iVar6 = memcmp(pppppcVar19,puVar12,(size_t)ppppcVar15), iVar6 == 0)) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
            }
            else {
              local_80 = (char ****)0x0;
              pppcStack_78 = (char ***)0x0;
              local_70 = (char ***)0x0;
              local_68 = 0;
              pppppcVar19 = &local_e0;
              if (0xf < uStack_c8) {
                pppppcVar19 = (char *****)local_e0;
              }
              if ((char ****)0x7fffffffffffffff < ppppcVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_146eb22ad();
              }
              if (ppppcVar15 < (char ****)0x10) {
                local_70 = (char ***)ppppcVar15;
                local_68 = 0xf;
                local_80 = *pppppcVar19;
                pppcStack_78 = (char ***)pppppcVar19[1];
              }
              else {
                local_68 = 0xf;
                uVar20 = (ulonglong)ppppcVar15 | 0xf;
                if (uVar20 < 0x8000000000000000) {
                  if (uVar20 < 0x16) {
                    uVar20 = 0x16;
                  }
                }
                else {
                  uVar20 = 0x7fffffffffffffff;
                }
                local_80 = (char ****)FUN_144b659f0(&local_80,uVar20 + 1);
                local_70 = (char ***)ppppcVar15;
                local_68 = uVar20;
                memcpy(local_80,pppppcVar19,(longlong)ppppcVar15 + 1);
                ppppcVar15 = (char ****)local_d0;
              }
              pppppcVar19 = (char *****)local_80;
              if (local_68 < 0x10) {
                pppppcVar19 = &local_80;
              }
              pppppcVar24 = (char *****)((longlong)pppppcVar19 + (longlong)local_70);
              pppppcVar14 = (char *****)local_80;
              uVar20 = local_68;
              for (; local_80 = (char ****)pppppcVar14, local_68 = uVar20,
                  pppppcVar19 != pppppcVar24; pppppcVar19 = (char *****)((longlong)pppppcVar19 + 1))
              {
                iVar6 = tolower((int)*(char *)pppppcVar19);
                *(char *)pppppcVar19 = (char)iVar6;
                ppppcVar15 = (char ****)local_d0;
                pppppcVar14 = (char *****)local_80;
                uVar20 = local_68;
              }
              puVar12 = puVar8;
              if (0xf < (ulonglong)puVar8[3]) {
                puVar12 = (undefined8 *)*puVar8;
              }
              pppppcVar19 = &local_80;
              if (0xf < uVar20) {
                pppppcVar19 = pppppcVar14;
              }
              if (((char ****)local_70 == (char ****)puVar8[2]) &&
                 (iVar6 = memcmp(pppppcVar19,puVar12,(size_t)local_70), iVar6 == 0)) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              plVar7 = local_190;
              lVar18 = local_158;
              if (0xf < uVar20) {
                uVar11 = uVar20 + 1;
                pppppcVar19 = pppppcVar14;
                if (0xfff < uVar11) {
                  uVar11 = uVar20 + 0x28;
                  pppppcVar19 = (char *****)pppppcVar14[-1];
                  if ((char *)0x1f < (char *)((longlong)pppppcVar14 + (-8 - (longlong)pppppcVar19)))
                  {
                    /* WARNING: Subroutine does not return */
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                thunk_FUN_1400020a8(pppppcVar19,uVar11);
                ppppcVar15 = (char ****)local_d0;
                plVar7 = local_190;
                lVar18 = local_158;
              }
            }
            uVar20 = uStack_a8;
            pppcVar5 = local_b0;
            ppppcVar17 = local_c0;
            if ((bVar3) &&
               (*(undefined4 *)(*plVar7 + 0x20 + lVar18) = *(undefined4 *)(puVar8 + 4),
               ppppcVar15 = (char ****)local_d0, -1 < *(int *)(puVar8 + 5))) {
              local_a0 = (char ****)local_1b8[1];
              uStack_98 = uStack_98 & 0xffffffff00000000;
              cVar25 = *(char *)((longlong)local_a0 + 0x19);
              pppppcVar19 = (char *****)local_a0;
              local_178 = local_1b8;
              pppppcVar14 = (char *****)local_1b8;
              while (pppppcVar24 = pppppcVar19, cVar25 == '\0') {
                pppppcVar19 = &local_c0;
                if (0xf < uVar20) {
                  pppppcVar19 = (char *****)ppppcVar17;
                }
                pppppcVar9 = pppppcVar24 + 4;
                if ((char ****)0xf < pppppcVar24[7]) {
                  pppppcVar9 = (char *****)pppppcVar24[4];
                }
                ppppcVar15 = pppppcVar24[6];
                ppppcVar21 = ppppcVar15;
                if (pppcVar5 < ppppcVar15) {
                  ppppcVar21 = (char ****)pppcVar5;
                }
                local_a0 = (char ****)pppppcVar24;
                uVar26 = memcmp(pppppcVar9,pppppcVar19,(size_t)ppppcVar21);
                if (uVar26 == 0) {
                  if (ppppcVar15 < pppcVar5) {
                    uVar26 = 0xffffffff;
                  }
                  else {
                    uVar26 = (uint)(pppcVar5 < ppppcVar15);
                  }
                }
                if ((int)uVar26 < 0) {
                  uStack_98 = (ulonglong)uStack_98._4_4_ << 0x20;
                  pppppcVar19 = (char *****)pppppcVar24[2];
                  pppppcVar24 = pppppcVar14;
                }
                else {
                  uStack_98 = CONCAT44(uStack_98._4_4_,1);
                  pppppcVar19 = (char *****)*pppppcVar24;
                }
                cVar25 = *(char *)((longlong)pppppcVar19 + 0x19);
                puVar8 = local_150;
                pppppcVar14 = pppppcVar24;
              }
              if (*(char *)((longlong)pppppcVar14 + 0x19) == '\0') {
                pppppcVar19 = pppppcVar14 + 4;
                if ((char ****)0xf < pppppcVar14[7]) {
                  pppppcVar19 = (char *****)pppppcVar14[4];
                }
                pppppcVar24 = &local_c0;
                if (0xf < uVar20) {
                  pppppcVar24 = (char *****)ppppcVar17;
                }
                ppppcVar15 = pppppcVar14[6];
                ppppcVar17 = (char ****)pppcVar5;
                if (ppppcVar15 < pppcVar5) {
                  ppppcVar17 = ppppcVar15;
                }
                uVar26 = memcmp(pppppcVar24,pppppcVar19,(size_t)ppppcVar17);
                if (uVar26 == 0) {
                  if (pppcVar5 < ppppcVar15) {
                    uVar26 = 0xffffffff;
                  }
                  else {
                    uVar26 = (uint)(ppppcVar15 < pppcVar5);
                  }
                }
                if ((int)uVar26 < 0) goto LAB_144e54914;
              }
              else {
LAB_144e54914:
                if (local_1b0 == 0x333333333333333) goto LAB_144e54d98;
                local_f8 = (char ****)&local_1b8;
                local_f0 = (longlong *)0x0;
                plVar7 = (longlong *)FUN_14494321d(0x50);
                local_f0 = plVar7;
                FUN_144b65a50(plVar7 + 4,&local_c0);
                plVar7[8] = 0;
                *(undefined4 *)(plVar7 + 9) = 0;
                *plVar7 = (longlong)local_178;
                plVar7[1] = (longlong)local_178;
                plVar7[2] = (longlong)local_178;
                *(undefined2 *)(plVar7 + 3) = 0;
                local_f0 = (longlong *)0x0;
                local_178 = local_a0;
                uStack_170 = uStack_98;
                pppppcVar14 = (char *****)FUN_144e5c590(&local_1b8,&local_178,plVar7);
              }
              *(int *)((longlong)pppppcVar14 + (longlong)*(int *)(puVar8 + 5) * 4 + 0x40) =
                   (int)local_1c8;
              ppppcVar15 = (char ****)local_d0;
            }
          }
          puVar8 = puVar8 + 6;
          local_150 = puVar8;
        } while (puVar8 != *(undefined8 **)(local_148 + 0x78));
      }
      if (0xf < uStack_c8) {
        uVar20 = uStack_c8 + 1;
        pppppcVar19 = (char *****)local_e0;
        if (0xfff < uVar20) {
          uVar20 = uStack_c8 + 0x28;
          pppppcVar19 = (char *****)local_e0[-1];
          if ((char *)0x1f < (char *)((longlong)local_e0 + (-8 - (longlong)pppppcVar19))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1400020a8(pppppcVar19,uVar20);
      }
      local_d0 = (char ***)0x0;
      uStack_c8 = 0xf;
      local_e0 = (char ****)((ulonglong)local_e0 & 0xffffffffffffff00);
      if (0xf < uStack_a8) {
        uVar20 = uStack_a8 + 1;
        pppppcVar19 = (char *****)local_c0;
        if (0xfff < uVar20) {
          uVar20 = uStack_a8 + 0x28;
          pppppcVar19 = (char *****)local_c0[-1];
          if ((char *)0x1f < (char *)((longlong)local_c0 + (-8 - (longlong)pppppcVar19))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1400020a8(pppppcVar19,uVar20);
      }
      uVar26 = (int)local_1c8 + 1;
      local_1c8 = (longlong *)CONCAT44(local_1c8._4_4_,uVar26);
      local_1a0 = local_1a0 + 1;
      param_3 = local_190;
      if (local_198 <= uVar26) break;
      uVar11 = (ulonglong)local_1a8;
    } while( true );
  }
  uVar20 = 0;
  pppppcVar19 = (char *****)*local_1b8;
  puVar8 = puStack_128;
  puVar12 = local_188;
  if (pppppcVar19 != (char *****)local_1b8) {
    do {
      iVar6 = *(int *)(pppppcVar19 + 8);
      if (((-1 < iVar6) && (-1 < *(int *)((longlong)pppppcVar19 + 0x44))) &&
         (-1 < *(int *)(pppppcVar19 + 9))) {
        lVar18 = *param_3;
        lVar13 = (longlong)*(int *)((longlong)pppppcVar19 + 0x44) * 0x98 + lVar18;
        lVar10 = (longlong)iVar6 * 0x98;
        iVar6 = *(int *)(lVar10 + 0x24 + lVar18);
        iVar1 = *(int *)(lVar13 + 0x24);
        if (iVar6 == iVar1) {
          lVar23 = (longlong)*(int *)(pppppcVar19 + 9) * 0x98 + lVar18;
          iVar2 = *(int *)(lVar23 + 0x24);
          if ((iVar6 == iVar2) && (iVar1 == iVar2)) {
            iVar6 = *(int *)(lVar10 + 0x28 + lVar18);
            iVar1 = *(int *)(lVar13 + 0x28);
            if ((iVar6 == iVar1) &&
               ((iVar2 = *(int *)(lVar23 + 0x28), iVar6 == iVar2 && (iVar1 == iVar2)))) {
              if (puVar8 == puVar12) {
                FUN_144e5db10(&local_130);
                local_188 = local_120;
                puVar8 = puStack_128;
                puVar12 = local_120;
              }
              else {
                *puVar8 = pppppcVar19[8];
                *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(pppppcVar19 + 9);
                puStack_128 = (undefined8 *)((longlong)puVar8 + 0xc);
                puVar8 = puStack_128;
              }
            }
          }
        }
      }
      pppppcVar14 = (char *****)pppppcVar19[2];
      if (*(char *)((longlong)pppppcVar14 + 0x19) == '\0') {
        cVar25 = *(char *)((longlong)*pppppcVar14 + 0x19);
        pppppcVar19 = pppppcVar14;
        pppppcVar14 = (char *****)*pppppcVar14;
        while (cVar25 == '\0') {
          cVar25 = *(char *)((longlong)*pppppcVar14 + 0x19);
          pppppcVar19 = pppppcVar14;
          pppppcVar14 = (char *****)*pppppcVar14;
        }
      }
      else {
        cVar25 = *(char *)((longlong)pppppcVar19[1] + 0x19);
        pppppcVar24 = (char *****)pppppcVar19[1];
        pppppcVar14 = pppppcVar19;
        while ((pppppcVar19 = pppppcVar24, cVar25 == '\0' &&
               (pppppcVar14 == (char *****)pppppcVar19[2]))) {
          cVar25 = *(char *)((longlong)pppppcVar19[1] + 0x19);
          pppppcVar24 = (char *****)pppppcVar19[1];
          pppppcVar14 = pppppcVar19;
        }
      }
    } while (pppppcVar19 != (char *****)local_1b8);
  }
  lVar18 = local_130;
  plVar7 = local_140;
  lVar13 = ((longlong)puVar8 - local_130) / 6 + ((longlong)puVar8 - local_130 >> 0x3f);
  uVar11 = (lVar13 >> 1) - (lVar13 >> 0x3f);
  if (uVar11 != 0) {
    _Dst = (void *)local_140[1];
    lVar13 = *local_140;
    lVar10 = ((longlong)_Dst - lVar13) / 6 + ((longlong)_Dst - lVar13 >> 0x3f);
    uVar22 = (lVar10 >> 1) - (lVar10 >> 0x3f);
    if (uVar11 < uVar22) {
      local_140[1] = lVar13 + uVar11 * 0xc;
    }
    else if (uVar22 < uVar11) {
      if ((ulonglong)((local_140[2] - lVar13) / 0xc) < uVar11) {
        FUN_144e5da10(local_140,uVar11,local_1c0);
      }
      else {
        if (uVar11 - uVar22 != 0) {
          _Size = (uVar11 - uVar22) * 0xc;
          memset(_Dst,0,_Size);
          _Dst = (void *)((longlong)_Dst + _Size);
        }
        plVar7[1] = (longlong)_Dst;
      }
    }
  }
  if (uVar11 != 0) {
    do {
      lVar13 = uVar20 * 0xc;
      puVar8 = (undefined8 *)(*plVar7 + lVar13);
      *puVar8 = *(undefined8 *)(lVar13 + lVar18);
      *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(lVar13 + 8 + lVar18);
      uVar20 = (ulonglong)((int)uVar20 + 1);
    } while (uVar20 < uVar11);
  }
  if (lVar18 != 0) {
    uVar20 = (((longlong)puVar12 - lVar18) / 0xc) * 0xc;
    lVar13 = lVar18;
    if (0xfff < uVar20) {
      uVar20 = uVar20 + 0x27;
      lVar13 = *(longlong *)(lVar18 + -8);
      if (0x1f < (lVar18 - lVar13) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar13,uVar20);
  }
  FUN_144e5cc40(&local_1b8,&local_1b8,local_1b8[1]);
  thunk_FUN_1400020a8(local_1b8,0x50);
  FUN_144e48cf0(local_138);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_1e8);
}



// FUNCTION 144e54da0 FUN_144e54da0 body=492 status=ok
// SIG undefined FUN_144e54da0(void)

void FUN_144e54da0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  ulonglong local_70 [6];
  
  local_70[3] = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar6 = 0;
  lVar5 = *(longlong *)(param_1 + 0x40);
  local_70[0] = uVar6;
  if (*(ulonglong *)(param_1 + 200) != 0) {
    local_70[0] = *(ulonglong *)(param_1 + 200);
  }
  local_70[1] = uVar6;
  if (*(ulonglong *)(param_1 + 0xd0) != 0) {
    local_70[1] = *(ulonglong *)(param_1 + 0xd0);
  }
  local_70[2] = uVar6;
  if (*(ulonglong *)(param_1 + 0xd8) != 0) {
    local_70[2] = *(ulonglong *)(param_1 + 0xd8);
  }
  local_78 = param_4;
  if ((*(longlong *)(param_1 + 0x48) - lVar5) / 0x98 != 0) {
    do {
      lVar5 = uVar6 * 0x98 + lVar5;
      uVar2 = FUN_144e67000(*(undefined4 *)(lVar5 + 0x24),param_2,local_78);
      *(undefined4 *)(lVar5 + 0x34) = uVar2;
      uVar2 = FUN_144e67000(*(undefined4 *)(lVar5 + 0x28),param_3,param_5);
      *(undefined4 *)(lVar5 + 0x38) = uVar2;
      iVar3 = FUN_144e66f70(*(undefined4 *)(lVar5 + 0x2c));
      iVar7 = 1;
      *(int *)(lVar5 + 0x94) = iVar3 * *(int *)(lVar5 + 0x38) * *(int *)(lVar5 + 0x34);
      uVar1 = local_70[*(int *)(lVar5 + 0x20)];
      *(ulonglong *)(lVar5 + 0x40) = uVar1;
      *(ulonglong *)(lVar5 + 0x48) = uVar1;
      *(ulonglong *)(lVar5 + 0x50) = uVar1;
      *(ulonglong *)(lVar5 + 0x70) = uVar1;
      iVar3 = FUN_144e66f70(*(undefined4 *)(lVar5 + 0x2c));
      if (1 < iVar3) {
        plVar8 = (longlong *)(lVar5 + 0x58);
        do {
          iVar7 = iVar7 + 1;
          lVar4 = (longlong)(*(int *)(lVar5 + 0x38) * *(int *)(lVar5 + 0x34)) + plVar8[-1];
          *plVar8 = lVar4;
          plVar8[4] = lVar4;
          iVar3 = FUN_144e66f70(*(undefined4 *)(lVar5 + 0x2c));
          plVar8 = plVar8 + 1;
        } while (iVar7 < iVar3);
      }
      *(undefined4 *)(lVar5 + 0x90) = *(undefined4 *)(lVar5 + 0x2c);
      if (*(int *)(lVar5 + 0x20) == 1) {
        *(undefined4 *)(lVar5 + 0x90) = 2;
      }
      else {
        iVar3 = FUN_144e66f70();
        local_70[*(int *)(lVar5 + 0x20)] =
             local_70[*(int *)(lVar5 + 0x20)] +
             (longlong)(iVar3 * *(int *)(lVar5 + 0x38) * *(int *)(lVar5 + 0x34));
      }
      lVar5 = *(longlong *)(param_1 + 0x40);
      uVar6 = (ulonglong)((int)uVar6 + 1);
    } while (uVar6 < (ulonglong)((*(longlong *)(param_1 + 0x48) - lVar5) / 0x98));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_70[3] ^ (ulonglong)auStack_98);
}



// FUNCTION 144e54fa0 FUN_144e54fa0 body=236 status=ok
// SIG undefined FUN_144e54fa0(void)

undefined8 * FUN_144e54fa0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = Imf_3_2::DwaCompressor::vftable;
  thunk_FUN_1400020a8(param_1[0x11]);
  thunk_FUN_1400020a8(param_1[0x13]);
  thunk_FUN_1400020a8(param_1[0x15]);
  thunk_FUN_1400020a8(param_1[0x17]);
  lVar2 = param_1[0x1f];
  if (lVar2 != 0) {
    FUN_144e4a750(lVar2);
    thunk_FUN_1400020a8(lVar2,0x18);
  }
  puVar1 = param_1 + 0x19;
  lVar2 = 3;
  do {
    thunk_FUN_1400020a8(*puVar1);
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_144e4f3f0(param_1 + 0xe);
  FUN_144e4f1e0(param_1 + 0xb);
  FUN_144e4f060(param_1 + 8);
  FUN_144e48cf0(param_1 + 6,param_1 + 6);
  FUN_144e497f0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 144e55090 FUN_144e55090 body=1186 status=ok
// SIG undefined FUN_144e55090(void)

void FUN_144e55090(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar7 = param_3[2];
  fVar8 = param_3[3];
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar11 = param_2[2];
  fVar12 = param_2[3];
  *param_1 = fVar5 * 1.5747 + fVar1;
  param_1[1] = fVar6 * 1.5747 + fVar2;
  param_1[2] = fVar7 * 1.5747 + fVar3;
  param_1[3] = fVar8 * 1.5747 + fVar4;
  *param_2 = *param_2 * -0.1873 + fVar1 + fVar5 * -0.4682;
  param_2[1] = param_2[1] * -0.1873 + fVar2 + fVar6 * -0.4682;
  param_2[2] = param_2[2] * -0.1873 + fVar3 + fVar7 * -0.4682;
  param_2[3] = param_2[3] * -0.1873 + fVar4 + fVar8 * -0.4682;
  fVar5 = param_3[4];
  fVar6 = param_3[5];
  fVar7 = param_3[6];
  fVar8 = param_3[7];
  *param_3 = fVar9 * 1.8556 + fVar1;
  param_3[1] = fVar10 * 1.8556 + fVar2;
  param_3[2] = fVar11 * 1.8556 + fVar3;
  param_3[3] = fVar12 * 1.8556 + fVar4;
  fVar1 = param_1[4];
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  fVar4 = param_1[7];
  fVar9 = param_2[4];
  fVar10 = param_2[5];
  fVar11 = param_2[6];
  fVar12 = param_2[7];
  param_1[4] = fVar5 * 1.5747 + fVar1;
  param_1[5] = fVar6 * 1.5747 + fVar2;
  param_1[6] = fVar7 * 1.5747 + fVar3;
  param_1[7] = fVar8 * 1.5747 + fVar4;
  param_2[4] = param_2[4] * -0.1873 + fVar1 + fVar5 * -0.4682;
  param_2[5] = param_2[5] * -0.1873 + fVar2 + fVar6 * -0.4682;
  param_2[6] = param_2[6] * -0.1873 + fVar3 + fVar7 * -0.4682;
  param_2[7] = param_2[7] * -0.1873 + fVar4 + fVar8 * -0.4682;
  fVar5 = param_3[8];
  fVar6 = param_3[9];
  fVar7 = param_3[10];
  fVar8 = param_3[0xb];
  param_3[4] = fVar9 * 1.8556 + fVar1;
  param_3[5] = fVar10 * 1.8556 + fVar2;
  param_3[6] = fVar11 * 1.8556 + fVar3;
  param_3[7] = fVar12 * 1.8556 + fVar4;
  fVar1 = param_1[8];
  fVar2 = param_1[9];
  fVar3 = param_1[10];
  fVar4 = param_1[0xb];
  fVar9 = param_2[8];
  fVar10 = param_2[9];
  fVar11 = param_2[10];
  fVar12 = param_2[0xb];
  param_1[8] = fVar5 * 1.5747 + fVar1;
  param_1[9] = fVar6 * 1.5747 + fVar2;
  param_1[10] = fVar7 * 1.5747 + fVar3;
  param_1[0xb] = fVar8 * 1.5747 + fVar4;
  param_2[8] = param_2[8] * -0.1873 + fVar1 + fVar5 * -0.4682;
  param_2[9] = param_2[9] * -0.1873 + fVar2 + fVar6 * -0.4682;
  param_2[10] = param_2[10] * -0.1873 + fVar3 + fVar7 * -0.4682;
  param_2[0xb] = param_2[0xb] * -0.1873 + fVar4 + fVar8 * -0.4682;
  fVar5 = param_3[0xc];
  fVar6 = param_3[0xd];
  fVar7 = param_3[0xe];
  fVar8 = param_3[0xf];
  param_3[8] = fVar9 * 1.8556 + fVar1;
  param_3[9] = fVar10 * 1.8556 + fVar2;
  param_3[10] = fVar11 * 1.8556 + fVar3;
  param_3[0xb] = fVar12 * 1.8556 + fVar4;
  fVar1 = param_1[0xc];
  fVar2 = param_1[0xd];
  fVar3 = param_1[0xe];
  fVar4 = param_1[0xf];
  fVar9 = param_2[0xc];
  fVar10 = param_2[0xd];
  fVar11 = param_2[0xe];
  fVar12 = param_2[0xf];
  param_1[0xc] = fVar5 * 1.5747 + fVar1;
  param_1[0xd] = fVar6 * 1.5747 + fVar2;
  param_1[0xe] = fVar7 * 1.5747 + fVar3;
  param_1[0xf] = fVar8 * 1.5747 + fVar4;
  param_2[0xc] = param_2[0xc] * -0.1873 + fVar1 + fVar5 * -0.4682;
  param_2[0xd] = param_2[0xd] * -0.1873 + fVar2 + fVar6 * -0.4682;
  param_2[0xe] = param_2[0xe] * -0.1873 + fVar3 + fVar7 * -0.4682;
  param_2[0xf] = param_2[0xf] * -0.1873 + fVar4 + fVar8 * -0.4682;
  fVar5 = param_3[0x10];
  fVar6 = param_3[0x11];
  fVar7 = param_3[0x12];
  fVar8 = param_3[0x13];
  param_3[0xc] = fVar9 * 1.8556 + fVar1;
  param_3[0xd] = fVar10 * 1.8556 + fVar2;
  param_3[0xe] = fVar11 * 1.8556 + fVar3;
  param_3[0xf] = fVar12 * 1.8556 + fVar4;
  fVar1 = param_1[0x10];
  fVar2 = param_1[0x11];
  fVar3 = param_1[0x12];
  fVar4 = param_1[0x13];
  fVar9 = param_2[0x10];
  fVar10 = param_2[0x11];
  fVar11 = param_2[0x12];
  fVar12 = param_2[0x13];
  param_1[0x10] = fVar5 * 1.5747 + fVar1;
  param_1[0x11] = fVar6 * 1.5747 + fVar2;
  param_1[0x12] = fVar7 * 1.5747 + fVar3;
  param_1[0x13] = fVar8 * 1.5747 + fVar4;
  param_2[0x10] = param_2[0x10] * -0.1873 + fVar1 + fVar5 * -0.4682;
  param_2[0x11] = param_2[0x11] * -0.1873 + fVar2 + fVar6 * -0.4682;
  param_2[0x12] = param_2[0x12] * -0.1873 + fVar3 + fVar7 * -0.4682;
  param_2[0x13] = param_2[0x13] * -0.1873 + fVar4 + fVar8 * -0.4682;
  fVar5 = param_3[0x14];
  fVar6 = param_3[0x15];
  fVar7 = param_3[0x16];
  fVar8 = param_3[0x17];
  param_3[0x10] = fVar9 * 1.8556 + fVar1;
  param_3[0x11] = fVar10 * 1.8556 + fVar2;
  param_3[0x12] = fVar11 * 1.8556 + fVar3;
  param_3[0x13] = fVar12 * 1.8556 + fVar4;
  fVar1 = param_1[0x14];
  fVar2 = param_1[0x15];
  fVar3 = param_1[0x16];
  fVar4 = param_1[0x17];
  fVar9 = param_2[0x14];
  fVar10 = param_2[0x15];
  fVar11 = param_2[0x16];
  fVar12 = param_2[0x17];
  param_1[0x14] = fVar5 * 1.5747 + fVar1;
  param_1[0x15] = fVar6 * 1.5747 + fVar2;
  param_1[0x16] = fVar7 * 1.5747 + fVar3;
  param_1[0x17] = fVar8 * 1.5747 + fVar4;
  param_2[0x14] = param_2[0x14] * -0.1873 + fVar1 + fVar5 * -0.4682;
  param_2[0x15] = param_2[0x15] * -0.1873 + fVar2 + fVar6 * -0.4682;
  param_2[0x16] = param_2[0x16] * -0.1873 + fVar3 + fVar7 * -0.4682;
  param_2[0x17] = param_2[0x17] * -0.1873 + fVar4 + fVar8 * -0.4682;
  fVar5 = param_3[0x18];
  fVar6 = param_3[0x19];
  fVar7 = param_3[0x1a];
  fVar8 = param_3[0x1b];
  param_3[0x14] = fVar9 * 1.8556 + fVar1;
  param_3[0x15] = fVar10 * 1.8556 + fVar2;
  param_3[0x16] = fVar11 * 1.8556 + fVar3;
  param_3[0x17] = fVar12 * 1.8556 + fVar4;
  fVar1 = param_1[0x18];
  fVar2 = param_1[0x19];
  fVar3 = param_1[0x1a];
  fVar4 = param_1[0x1b];
  fVar9 = param_2[0x18];
  fVar10 = param_2[0x19];
  fVar11 = param_2[0x1a];
  fVar12 = param_2[0x1b];
  param_1[0x18] = fVar5 * 1.5747 + fVar1;
  param_1[0x19] = fVar6 * 1.5747 + fVar2;
  param_1[0x1a] = fVar7 * 1.5747 + fVar3;
  param_1[0x1b] = fVar8 * 1.5747 + fVar4;
  param_2[0x18] = param_2[0x18] * -0.1873 + fVar1 + fVar5 * -0.4682;
  param_2[0x19] = param_2[0x19] * -0.1873 + fVar2 + fVar6 * -0.4682;
  param_2[0x1a] = param_2[0x1a] * -0.1873 + fVar3 + fVar7 * -0.4682;
  param_2[0x1b] = param_2[0x1b] * -0.1873 + fVar4 + fVar8 * -0.4682;
  fVar5 = param_3[0x1c];
  fVar6 = param_3[0x1d];
  fVar7 = param_3[0x1e];
  fVar8 = param_3[0x1f];
  param_3[0x18] = fVar9 * 1.8556 + fVar1;
  param_3[0x19] = fVar10 * 1.8556 + fVar2;
  param_3[0x1a] = fVar11 * 1.8556 + fVar3;
  param_3[0x1b] = fVar12 * 1.8556 + fVar4;
  fVar1 = param_1[0x1c];
  fVar2 = param_1[0x1d];
  fVar3 = param_1[0x1e];
  fVar4 = param_1[0x1f];
  fVar9 = param_2[0x1c];
  fVar10 = param_2[0x1d];
  fVar11 = param_2[0x1e];
  fVar12 = param_2[0x1f];
  param_1[0x1c] = fVar5 * 1.5747 + fVar1;
  param_1[0x1d] = fVar6 * 1.5747 + fVar2;
  param_1[0x1e] = fVar7 * 1.5747 + fVar3;
  param_1[0x1f] = fVar8 * 1.5747 + fVar4;
  param_2[0x1c] = param_2[0x1c] * -0.1873 + fVar1 + fVar5 * -0.4682;
  param_2[0x1d] = param_2[0x1d] * -0.1873 + fVar2 + fVar6 * -0.4682;
  param_2[0x1e] = param_2[0x1e] * -0.1873 + fVar3 + fVar7 * -0.4682;
  param_2[0x1f] = param_2[0x1f] * -0.1873 + fVar4 + fVar8 * -0.4682;
  fVar5 = param_3[0x20];
  fVar6 = param_3[0x21];
  fVar7 = param_3[0x22];
  fVar8 = param_3[0x23];
  param_3[0x1c] = fVar9 * 1.8556 + fVar1;
  param_3[0x1d] = fVar10 * 1.8556 + fVar2;
  param_3[0x1e] = fVar11 * 1.8556 + fVar3;
  param_3[0x1f] = fVar12 * 1.8556 + fVar4;
  fVar1 = param_1[0x20];
  fVar2 = param_1[0x21];
  fVar3 = param_1[0x22];
  fVar4 = param_1[0x23];
  fVar9 = param_2[0x20];
  fVar10 = param_2[0x21];
  fVar11 = param_2[0x22];
  fVar12 = param_2[0x23];
  param_1[0x20] = fVar5 * 1.5747 + fVar1;
  param_1[0x21] = fVar6 * 1.5747 + fVar2;
  param_1[0x22] = fVar7 * 1.5747 + fVar3;
  param_1[0x23] = fVar8 * 1.5747 + fVar4;
  param_2[0x20] = param_2[0x20] * -0.1873 + fVar1 + fVar5 * -0.4682;
  param_2[0x21] = param_2[0x21] * -0.1873 + fVar2 + fVar6 * -0.4682;
  param_2[0x22] = param_2[0x22] * -0.1873 + fVar3 + fVar7 * -0.4682;
  param_2[0x23] = param_2[0x23] * -0.1873 + fVar4 + fVar8 * -0.4682;
  fVar5 = param_3[0x24];
  fVar6 = param_3[0x25];
  fVar7 = param_3[0x26];
  fVar8 = param_3[0x27];
  param_3[0x20] = fVar9 * 1.8556 + fVar1;
  param_3[0x21] = fVar10 * 1.8556 + fVar2;
  param_3[0x22] = fVar11 * 1.8556 + fVar3;
  param_3[0x23] = fVar12 * 1.8556 + fVar4;
  fVar1 = param_1[0x24];
  fVar2 = param_1[0x25];
  fVar3 = param_1[0x26];
  fVar4 = param_1[0x27];
  fVar9 = param_2[0x24];
  fVar10 = param_2[0x25];
  fVar11 = param_2[0x26];
  fVar12 = param_2[0x27];
  param_1[0x24] = fVar5 * 1.5747 + fVar1;
  param_1[0x25] = fVar6 * 1.5747 + fVar2;
  param_1[0x26] = fVar7 * 1.5747 + fVar3;
  param_1[0x27] = fVar8 * 1.5747 + fVar4;
  param_2[0x24] = param_2[0x24] * -0.1873 + fVar1 + fVar5 * -0.4682;
  param_2[0x25] = param_2[0x25] * -0.1873 + fVar2 + fVar6 * -0.4682;
  param_2[0x26] = param_2[0x26] * -0.1873 + fVar3 + fVar7 * -0.4682;
  param_2[0x27] = param_2[0x27] * -0.1873 + fVar4 + fVar8 * -0.4682;
  fVar5 = param_3[0x28];
  fVar6 = param_3[0x29];
  fVar7 = param_3[0x2a];
  fVar8 = param_3[0x2b];
  param_3[0x24] = fVar9 * 1.8556 + fVar1;
  param_3[0x25] = fVar10 * 1.8556 + fVar2;
  param_3[0x26] = fVar11 * 1.8556 + fVar3;
  param_3[0x27] = fVar12 * 1.8556 + fVar4;
  fVar1 = param_1[0x28];
  fVar2 = param_1[0x29];
  fVar3 = param_1[0x2a];
  fVar4 = param_1[0x2b];
  fVar9 = param_2[0x28];
  fVar10 = param_2[0x29];
  fVar11 = param_2[0x2a];
  fVar12 = param_2[0x2b];
  param_1[0x28] = fVar5 * 1.5747 + fVar1;
  param_1[0x29] = fVar6 * 1.5747 + fVar2;
  param_1[0x2a] = fVar7 * 1.5747 + fVar3;
  param_1[0x2b] = fVar8 * 1.5747 + fVar4;
  param_2[0x28] = param_2[0x28] * -0.1873 + fVar1 + fVar5 * -0.4682;
  param_2[0x29] = param_2[0x29] * -0.1873 + fVar2 + fVar6 * -0.4682;
  param_2[0x2a] = param_2[0x2a] * -0.1873 + fVar3 + fVar7 * -0.4682;
  param_2[0x2b] = param_2[0x2b] * -0.1873 + fVar4 + fVar8 * -0.4682;
  fVar5 = param_3[0x2c];
  fVar6 = param_3[0x2d];
  fVar7 = param_3[0x2e];
  fVar8 = param_3[0x2f];
  param_3[0x28] = fVar9 * 1.8556 + fVar1;
  param_3[0x29] = fVar10 * 1.8556 + fVar2;
  param_3[0x2a] = fVar11 * 1.8556 + fVar3;
  param_3[0x2b] = fVar12 * 1.8556 + fVar4;
  fVar1 = param_1[0x2c];
  fVar2 = param_1[0x2d];
  fVar3 = param_1[0x2e];
  fVar4 = param_1[0x2f];
  fVar9 = param_2[0x2c];
  fVar10 = param_2[0x2d];
  fVar11 = param_2[0x2e];
  fVar12 = param_2[0x2f];
  param_1[0x2c] = fVar5 * 1.5747 + fVar1;
  param_1[0x2d] = fVar6 * 1.5747 + fVar2;
  param_1[0x2e] = fVar7 * 1.5747 + fVar3;
  param_1[0x2f] = fVar8 * 1.5747 + fVar4;
  param_2[0x2c] = param_2[0x2c] * -0.1873 + fVar1 + fVar5 * -0.4682;
  param_2[0x2d] = param_2[0x2d] * -0.1873 + fVar2 + fVar6 * -0.4682;
  param_2[0x2e] = param_2[0x2e] * -0.1873 + fVar3 + fVar7 * -0.4682;
  param_2[0x2f] = param_2[0x2f] * -0.1873 + fVar4 + fVar8 * -0.4682;
  fVar5 = param_3[0x30];
  fVar6 = param_3[0x31];
  fVar7 = param_3[0x32];
  fVar8 = param_3[0x33];
  param_3[0x2c] = fVar9 * 1.8556 + fVar1;
  param_3[0x2d] = fVar10 * 1.8556 + fVar2;
  param_3[0x2e] = fVar11 * 1.8556 + fVar3;
  param_3[0x2f] = fVar12 * 1.8556 + fVar4;
  fVar1 = param_1[0x30];
  fVar2 = param_1[0x31];
  fVar3 = param_1[0x32];
  fVar4 = param_1[0x33];
  fVar9 = param_2[0x30];
  fVar10 = param_2[0x31];
  fVar11 = param_2[0x32];
  fVar12 = param_2[0x33];
  param_1[0x30] = fVar5 * 1.5747 + fVar1;
  param_1[0x31] = fVar6 * 1.5747 + fVar2;
  param_1[0x32] = fVar7 * 1.5747 + fVar3;
  param_1[0x33] = fVar8 * 1.5747 + fVar4;
  param_2[0x30] = param_2[0x30] * -0.1873 + fVar1 + fVar5 * -0.4682;
  param_2[0x31] = param_2[0x31] * -0.1873 + fVar2 + fVar6 * -0.4682;
  param_2[0x32] = param_2[0x32] * -0.1873 + fVar3 + fVar7 * -0.4682;
  param_2[0x33] = param_2[0x33] * -0.1873 + fVar4 + fVar8 * -0.4682;
  fVar5 = param_3[0x34];
  fVar6 = param_3[0x35];
  fVar7 = param_3[0x36];
  fVar8 = param_3[0x37];
  param_3[0x30] = fVar9 * 1.8556 + fVar1;
  param_3[0x31] = fVar10 * 1.8556 + fVar2;
  param_3[0x32] = fVar11 * 1.8556 + fVar3;
  param_3[0x33] = fVar12 * 1.8556 + fVar4;
  fVar1 = param_1[0x34];
  fVar2 = param_1[0x35];
  fVar3 = param_1[0x36];
  fVar4 = param_1[0x37];
  fVar9 = param_2[0x34];
  fVar10 = param_2[0x35];
  fVar11 = param_2[0x36];
  fVar12 = param_2[0x37];
  param_1[0x34] = fVar5 * 1.5747 + fVar1;
  param_1[0x35] = fVar6 * 1.5747 + fVar2;
  param_1[0x36] = fVar7 * 1.5747 + fVar3;
  param_1[0x37] = fVar8 * 1.5747 + fVar4;
  param_2[0x34] = param_2[0x34] * -0.1873 + fVar1 + fVar5 * -0.4682;
  param_2[0x35] = param_2[0x35] * -0.1873 + fVar2 + fVar6 * -0.4682;
  param_2[0x36] = param_2[0x36] * -0.1873 + fVar3 + fVar7 * -0.4682;
  param_2[0x37] = param_2[0x37] * -0.1873 + fVar4 + fVar8 * -0.4682;
  fVar5 = param_3[0x38];
  fVar6 = param_3[0x39];
  fVar7 = param_3[0x3a];
  fVar8 = param_3[0x3b];
  param_3[0x34] = fVar9 * 1.8556 + fVar1;
  param_3[0x35] = fVar10 * 1.8556 + fVar2;
  param_3[0x36] = fVar11 * 1.8556 + fVar3;
  param_3[0x37] = fVar12 * 1.8556 + fVar4;
  fVar1 = param_1[0x38];
  fVar2 = param_1[0x39];
  fVar3 = param_1[0x3a];
  fVar4 = param_1[0x3b];
  fVar9 = param_2[0x38];
  fVar10 = param_2[0x39];
  fVar11 = param_2[0x3a];
  fVar12 = param_2[0x3b];
  param_1[0x38] = fVar5 * 1.5747 + fVar1;
  param_1[0x39] = fVar6 * 1.5747 + fVar2;
  param_1[0x3a] = fVar7 * 1.5747 + fVar3;
  param_1[0x3b] = fVar8 * 1.5747 + fVar4;
  param_2[0x38] = param_2[0x38] * -0.1873 + fVar1 + fVar5 * -0.4682;
  param_2[0x39] = param_2[0x39] * -0.1873 + fVar2 + fVar6 * -0.4682;
  param_2[0x3a] = param_2[0x3a] * -0.1873 + fVar3 + fVar7 * -0.4682;
  param_2[0x3b] = param_2[0x3b] * -0.1873 + fVar4 + fVar8 * -0.4682;
  fVar5 = param_3[0x3c];
  fVar6 = param_3[0x3d];
  fVar7 = param_3[0x3e];
  fVar8 = param_3[0x3f];
  param_3[0x38] = fVar9 * 1.8556 + fVar1;
  param_3[0x39] = fVar10 * 1.8556 + fVar2;
  param_3[0x3a] = fVar11 * 1.8556 + fVar3;
  param_3[0x3b] = fVar12 * 1.8556 + fVar4;
  fVar1 = param_1[0x3c];
  fVar2 = param_1[0x3d];
  fVar3 = param_1[0x3e];
  fVar4 = param_1[0x3f];
  fVar9 = param_2[0x3c];
  fVar10 = param_2[0x3d];
  fVar11 = param_2[0x3e];
  fVar12 = param_2[0x3f];
  param_1[0x3c] = fVar5 * 1.5747 + fVar1;
  param_1[0x3d] = fVar6 * 1.5747 + fVar2;
  param_1[0x3e] = fVar7 * 1.5747 + fVar3;
  param_1[0x3f] = fVar8 * 1.5747 + fVar4;
  param_2[0x3c] = param_2[0x3c] * -0.1873 + fVar1 + fVar5 * -0.4682;
  param_2[0x3d] = param_2[0x3d] * -0.1873 + fVar2 + fVar6 * -0.4682;
  param_2[0x3e] = param_2[0x3e] * -0.1873 + fVar3 + fVar7 * -0.4682;
  param_2[0x3f] = param_2[0x3f] * -0.1873 + fVar4 + fVar8 * -0.4682;
  param_3[0x3c] = fVar9 * 1.8556 + fVar1;
  param_3[0x3d] = fVar10 * 1.8556 + fVar2;
  param_3[0x3e] = fVar11 * 1.8556 + fVar3;
  param_3[0x3f] = fVar12 * 1.8556 + fVar4;
  return;
}



// FUNCTION 144e55540 FUN_144e55540 body=1178 status=ok
// SIG undefined FUN_144e55540(void)

void FUN_144e55540(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  longlong lVar6;
  
  param_1 = param_1 - param_2;
  param_3 = param_3 - param_2;
  pfVar5 = (float *)(param_2 + 4);
  lVar6 = 8;
  do {
    fVar1 = *(float *)(param_1 + -4 + (longlong)pfVar5);
    fVar2 = pfVar5[-1];
    fVar3 = *(float *)(param_3 + -4 + (longlong)pfVar5);
    *(float *)(param_1 + -4 + (longlong)pfVar5) = fVar2 * 0.7152 + fVar1 * 0.2126 + fVar3 * 0.0722;
    pfVar5[-1] = (fVar1 * -0.1146 - fVar2 * 0.3854) + fVar3 * 0.5;
    fVar4 = *(float *)(param_3 + (longlong)pfVar5);
    *(float *)(param_3 + -4 + (longlong)pfVar5) = (fVar1 * 0.5 - fVar2 * 0.4542) - fVar3 * 0.0458;
    fVar1 = *(float *)(param_1 + (longlong)pfVar5);
    fVar2 = *pfVar5;
    *(float *)(param_1 + (longlong)pfVar5) = fVar2 * 0.7152 + fVar1 * 0.2126 + fVar4 * 0.0722;
    *pfVar5 = (fVar1 * -0.1146 - fVar2 * 0.3854) + fVar4 * 0.5;
    fVar3 = *(float *)(param_3 + 4 + (longlong)pfVar5);
    *(float *)(param_3 + (longlong)pfVar5) = (fVar1 * 0.5 - fVar2 * 0.4542) - fVar4 * 0.0458;
    fVar1 = *(float *)(param_1 + 4 + (longlong)pfVar5);
    fVar2 = pfVar5[1];
    *(float *)(param_1 + 4 + (longlong)pfVar5) = fVar2 * 0.7152 + fVar1 * 0.2126 + fVar3 * 0.0722;
    pfVar5[1] = (fVar1 * -0.1146 - fVar2 * 0.3854) + fVar3 * 0.5;
    *(float *)(param_3 + 4 + (longlong)pfVar5) = (fVar1 * 0.5 - fVar2 * 0.4542) - fVar3 * 0.0458;
    fVar1 = *(float *)(param_1 + 8 + (longlong)pfVar5);
    fVar2 = pfVar5[2];
    fVar3 = *(float *)(param_3 + 8 + (longlong)pfVar5);
    *(float *)(param_1 + 8 + (longlong)pfVar5) = fVar2 * 0.7152 + fVar1 * 0.2126 + fVar3 * 0.0722;
    pfVar5[2] = (fVar1 * -0.1146 - fVar2 * 0.3854) + fVar3 * 0.5;
    fVar4 = *(float *)(param_3 + 0xc + (longlong)pfVar5);
    *(float *)(param_3 + 8 + (longlong)pfVar5) = (fVar1 * 0.5 - fVar2 * 0.4542) - fVar3 * 0.0458;
    fVar1 = *(float *)(param_1 + 0xc + (longlong)pfVar5);
    fVar2 = pfVar5[3];
    *(float *)(param_1 + 0xc + (longlong)pfVar5) = fVar2 * 0.7152 + fVar1 * 0.2126 + fVar4 * 0.0722;
    pfVar5[3] = (fVar1 * -0.1146 - fVar2 * 0.3854) + fVar4 * 0.5;
    fVar3 = *(float *)(param_3 + 0x10 + (longlong)pfVar5);
    *(float *)(param_3 + 0xc + (longlong)pfVar5) = (fVar1 * 0.5 - fVar2 * 0.4542) - fVar4 * 0.0458;
    fVar1 = *(float *)(param_1 + 0x10 + (longlong)pfVar5);
    fVar2 = pfVar5[4];
    *(float *)(param_1 + 0x10 + (longlong)pfVar5) = fVar2 * 0.7152 + fVar1 * 0.2126 + fVar3 * 0.0722
    ;
    pfVar5[4] = (fVar1 * -0.1146 - fVar2 * 0.3854) + fVar3 * 0.5;
    *(float *)(param_3 + 0x10 + (longlong)pfVar5) = (fVar1 * 0.5 - fVar2 * 0.4542) - fVar3 * 0.0458;
    fVar1 = *(float *)(param_1 + 0x14 + (longlong)pfVar5);
    fVar2 = pfVar5[5];
    fVar3 = *(float *)(param_3 + 0x14 + (longlong)pfVar5);
    *(float *)(param_1 + 0x14 + (longlong)pfVar5) = fVar2 * 0.7152 + fVar1 * 0.2126 + fVar3 * 0.0722
    ;
    pfVar5[5] = (fVar1 * -0.1146 - fVar2 * 0.3854) + fVar3 * 0.5;
    fVar4 = *(float *)(param_3 + 0x18 + (longlong)pfVar5);
    *(float *)(param_3 + 0x14 + (longlong)pfVar5) = (fVar1 * 0.5 - fVar2 * 0.4542) - fVar3 * 0.0458;
    fVar1 = *(float *)(param_1 + 0x18 + (longlong)pfVar5);
    fVar2 = pfVar5[6];
    *(float *)(param_1 + 0x18 + (longlong)pfVar5) = fVar2 * 0.7152 + fVar1 * 0.2126 + fVar4 * 0.0722
    ;
    pfVar5[6] = (fVar1 * -0.1146 - fVar2 * 0.3854) + fVar4 * 0.5;
    *(float *)(param_3 + 0x18 + (longlong)pfVar5) = (fVar1 * 0.5 - fVar2 * 0.4542) - fVar4 * 0.0458;
    pfVar5 = pfVar5 + 8;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}



// FUNCTION 144e559e0 FUN_144e559e0 body=664 status=ok
// SIG undefined FUN_144e559e0(void)

void FUN_144e559e0(undefined1 *param_1,ulonglong param_2,undefined1 *param_3,uint param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  int iVar35;
  uint uVar36;
  undefined1 *puVar37;
  undefined1 *puVar38;
  int iVar39;
  longlong lVar40;
  ulonglong uVar41;
  longlong lVar42;
  
  iVar35 = (int)(param_4 + ((int)param_4 >> 0x1f & 0xfU)) >> 4;
  lVar40 = (longlong)iVar35;
  if (((ulonglong)param_1 & 0xf) == 0) {
    if ((param_2 & 0xf) == 0) {
      if (((ulonglong)param_3 & 0xf) == 0) {
        if (iVar35 < 1) {
          lVar42 = param_2 - (longlong)param_3;
        }
        else {
          iVar39 = 0;
          lVar42 = param_2 - (longlong)param_3;
          puVar37 = param_3;
          do {
            puVar38 = puVar37 + lVar42;
            uVar4 = puVar38[1];
            uVar5 = puVar38[2];
            uVar6 = puVar38[3];
            uVar7 = puVar38[4];
            uVar8 = puVar38[5];
            uVar9 = puVar38[6];
            uVar10 = puVar38[7];
            uVar11 = puVar38[8];
            uVar12 = puVar38[9];
            uVar13 = puVar38[10];
            uVar14 = puVar38[0xb];
            uVar15 = puVar38[0xc];
            uVar16 = puVar38[0xd];
            uVar17 = puVar38[0xe];
            uVar18 = puVar38[0xf];
            uVar19 = *puVar37;
            uVar20 = puVar37[1];
            uVar21 = puVar37[2];
            uVar22 = puVar37[3];
            uVar23 = puVar37[4];
            uVar24 = puVar37[5];
            uVar25 = puVar37[6];
            uVar26 = puVar37[7];
            uVar27 = puVar37[8];
            uVar28 = puVar37[9];
            uVar29 = puVar37[10];
            uVar30 = puVar37[0xb];
            uVar31 = puVar37[0xc];
            uVar32 = puVar37[0xd];
            uVar33 = puVar37[0xe];
            uVar34 = puVar37[0xf];
            puVar37 = puVar37 + 0x10;
            puVar2 = param_1 + (longlong)iVar39 * 0x10;
            *puVar2 = *puVar38;
            puVar2[1] = uVar19;
            puVar2[2] = uVar4;
            puVar2[3] = uVar20;
            puVar2[4] = uVar5;
            puVar2[5] = uVar21;
            puVar2[6] = uVar6;
            puVar2[7] = uVar22;
            puVar2[8] = uVar7;
            puVar2[9] = uVar23;
            puVar2[10] = uVar8;
            puVar2[0xb] = uVar24;
            puVar2[0xc] = uVar9;
            puVar2[0xd] = uVar25;
            puVar2[0xe] = uVar10;
            puVar2[0xf] = uVar26;
            iVar1 = iVar39 + 1;
            iVar39 = iVar39 + 2;
            puVar38 = param_1 + (longlong)iVar1 * 0x10;
            *puVar38 = uVar11;
            puVar38[1] = uVar27;
            puVar38[2] = uVar12;
            puVar38[3] = uVar28;
            puVar38[4] = uVar13;
            puVar38[5] = uVar29;
            puVar38[6] = uVar14;
            puVar38[7] = uVar30;
            puVar38[8] = uVar15;
            puVar38[9] = uVar31;
            puVar38[10] = uVar16;
            puVar38[0xb] = uVar32;
            puVar38[0xc] = uVar17;
            puVar38[0xd] = uVar33;
            puVar38[0xe] = uVar18;
            puVar38[0xf] = uVar34;
            lVar40 = lVar40 + -1;
          } while (lVar40 != 0);
        }
        iVar39 = iVar35 * 0x10;
        if ((int)param_4 <= iVar39) {
          return;
        }
        uVar41 = (ulonglong)(param_4 + iVar35 * -0x10);
        puVar37 = param_3 + iVar39;
        puVar38 = param_1 + (longlong)iVar39 * 2;
        do {
          *puVar38 = puVar37[lVar42];
          puVar38[1] = *puVar37;
          uVar41 = uVar41 - 1;
          puVar37 = puVar37 + 1;
          puVar38 = puVar38 + 2;
        } while (uVar41 != 0);
        return;
      }
    }
    else if ((((uint)param_2 & 0xf) == 8) && (((uint)param_3 & 0xf) == 8)) {
      uVar36 = param_4;
      if (8 < (int)param_4) {
        uVar36 = 8;
      }
      if (0 < (int)uVar36) {
        uVar41 = (ulonglong)uVar36;
        puVar37 = param_3;
        puVar38 = param_1;
        do {
          *puVar38 = puVar37[param_2 - (longlong)param_3];
          puVar38[1] = *puVar37;
          uVar41 = uVar41 - 1;
          puVar37 = puVar37 + 1;
          puVar38 = puVar38 + 2;
        } while (uVar41 != 0);
      }
      if ((int)param_4 < 9) {
        return;
      }
      iVar35 = (int)((param_4 - 8) + ((int)(param_4 - 8) >> 0x1f & 0xfU)) >> 4;
      lVar40 = (longlong)iVar35;
      if (0 < iVar35) {
        iVar39 = 0;
        lVar42 = param_2 - (longlong)param_3;
        puVar37 = param_3 + 8;
        do {
          puVar2 = puVar37 + lVar42;
          uVar4 = puVar2[1];
          uVar5 = puVar2[2];
          uVar6 = puVar2[3];
          uVar7 = puVar2[4];
          uVar8 = puVar2[5];
          uVar9 = puVar2[6];
          uVar10 = puVar2[7];
          uVar11 = *puVar37;
          uVar12 = puVar37[1];
          uVar13 = puVar37[2];
          uVar14 = puVar37[3];
          uVar15 = puVar37[4];
          uVar16 = puVar37[5];
          uVar17 = puVar37[6];
          uVar18 = puVar37[7];
          puVar38 = puVar37 + 0x10;
          puVar3 = param_1 + (longlong)iVar39 * 0x10 + 0x10;
          *puVar3 = *puVar2;
          puVar3[1] = uVar11;
          puVar3[2] = uVar4;
          puVar3[3] = uVar12;
          puVar3[4] = uVar5;
          puVar3[5] = uVar13;
          puVar3[6] = uVar6;
          puVar3[7] = uVar14;
          puVar3[8] = uVar7;
          puVar3[9] = uVar15;
          puVar3[10] = uVar8;
          puVar3[0xb] = uVar16;
          puVar3[0xc] = uVar9;
          puVar3[0xd] = uVar17;
          puVar3[0xe] = uVar10;
          puVar3[0xf] = uVar18;
          uVar4 = puVar38[lVar42 + -7];
          uVar5 = puVar38[lVar42 + -6];
          uVar6 = puVar38[lVar42 + -5];
          uVar7 = puVar38[lVar42 + -4];
          uVar8 = puVar38[lVar42 + -3];
          uVar9 = puVar38[lVar42 + -2];
          uVar10 = puVar38[lVar42 + -1];
          iVar1 = iVar39 + 1;
          uVar11 = puVar37[8];
          uVar12 = puVar37[9];
          uVar13 = puVar37[10];
          uVar14 = puVar37[0xb];
          uVar15 = puVar37[0xc];
          uVar16 = puVar37[0xd];
          uVar17 = puVar37[0xe];
          uVar18 = puVar37[0xf];
          iVar39 = iVar39 + 2;
          puVar37 = param_1 + (longlong)iVar1 * 0x10 + 0x10;
          *puVar37 = puVar38[lVar42 + -8];
          puVar37[1] = uVar11;
          puVar37[2] = uVar4;
          puVar37[3] = uVar12;
          puVar37[4] = uVar5;
          puVar37[5] = uVar13;
          puVar37[6] = uVar6;
          puVar37[7] = uVar14;
          puVar37[8] = uVar7;
          puVar37[9] = uVar15;
          puVar37[10] = uVar8;
          puVar37[0xb] = uVar16;
          puVar37[0xc] = uVar9;
          puVar37[0xd] = uVar17;
          puVar37[0xe] = uVar10;
          puVar37[0xf] = uVar18;
          lVar40 = lVar40 + -1;
          puVar37 = puVar38;
        } while (lVar40 != 0);
      }
      iVar35 = iVar35 * 0x10 + 8;
      if ((int)param_4 <= iVar35) {
        return;
      }
      uVar41 = (ulonglong)(param_4 - iVar35);
      puVar37 = param_3 + iVar35;
      puVar38 = param_1 + (longlong)iVar35 * 2;
      do {
        *puVar38 = puVar37[param_2 - (longlong)param_3];
        puVar38[1] = *puVar37;
        uVar41 = uVar41 - 1;
        puVar37 = puVar37 + 1;
        puVar38 = puVar38 + 2;
      } while (uVar41 != 0);
      return;
    }
  }
  puVar37 = param_1;
  puVar38 = param_3;
  if (0 < iVar35) {
    do {
      puVar2 = puVar38 + (param_2 - (longlong)param_3);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      uVar7 = puVar2[4];
      uVar8 = puVar2[5];
      uVar9 = puVar2[6];
      uVar10 = puVar2[7];
      uVar11 = puVar2[8];
      uVar12 = puVar2[9];
      uVar13 = puVar2[10];
      uVar14 = puVar2[0xb];
      uVar15 = puVar2[0xc];
      uVar16 = puVar2[0xd];
      uVar17 = puVar2[0xe];
      uVar18 = puVar2[0xf];
      uVar19 = *puVar38;
      uVar20 = puVar38[1];
      uVar21 = puVar38[2];
      uVar22 = puVar38[3];
      uVar23 = puVar38[4];
      uVar24 = puVar38[5];
      uVar25 = puVar38[6];
      uVar26 = puVar38[7];
      uVar27 = puVar38[8];
      uVar28 = puVar38[9];
      uVar29 = puVar38[10];
      uVar30 = puVar38[0xb];
      uVar31 = puVar38[0xc];
      uVar32 = puVar38[0xd];
      uVar33 = puVar38[0xe];
      uVar34 = puVar38[0xf];
      *puVar37 = *puVar2;
      puVar37[1] = uVar19;
      puVar37[2] = uVar4;
      puVar37[3] = uVar20;
      puVar37[4] = uVar5;
      puVar37[5] = uVar21;
      puVar37[6] = uVar6;
      puVar37[7] = uVar22;
      puVar37[8] = uVar7;
      puVar37[9] = uVar23;
      puVar37[10] = uVar8;
      puVar37[0xb] = uVar24;
      puVar37[0xc] = uVar9;
      puVar37[0xd] = uVar25;
      puVar37[0xe] = uVar10;
      puVar37[0xf] = uVar26;
      puVar37[0x10] = uVar11;
      puVar37[0x11] = uVar27;
      puVar37[0x12] = uVar12;
      puVar37[0x13] = uVar28;
      puVar37[0x14] = uVar13;
      puVar37[0x15] = uVar29;
      puVar37[0x16] = uVar14;
      puVar37[0x17] = uVar30;
      puVar37[0x18] = uVar15;
      puVar37[0x19] = uVar31;
      puVar37[0x1a] = uVar16;
      puVar37[0x1b] = uVar32;
      puVar37[0x1c] = uVar17;
      puVar37[0x1d] = uVar33;
      puVar37[0x1e] = uVar18;
      puVar37[0x1f] = uVar34;
      lVar40 = lVar40 + -1;
      puVar37 = puVar37 + 0x20;
      puVar38 = puVar38 + 0x10;
    } while (lVar40 != 0);
  }
  iVar39 = iVar35 * 0x10;
  if (iVar39 < (int)param_4) {
    uVar41 = (ulonglong)(param_4 + iVar35 * -0x10);
    puVar37 = param_3 + iVar39;
    puVar38 = param_1 + (longlong)iVar39 * 2;
    do {
      *puVar38 = puVar37[param_2 - (longlong)param_3];
      puVar38[1] = *puVar37;
      uVar41 = uVar41 - 1;
      puVar37 = puVar37 + 1;
      puVar38 = puVar38 + 2;
    } while (uVar41 != 0);
  }
  return;
}



// FUNCTION 144e55ca0 FUN_144e55ca0 body=903 status=ok
// SIG undefined FUN_144e55ca0(void)

void FUN_144e55ca0(undefined4 *param_1)

{
  undefined4 uVar1;
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
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float *pfVar23;
  longlong lVar24;
  longlong lVar25;
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
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  
  lVar25 = 2;
  do {
    pfVar23 = (float *)(param_1 + 0x10);
    lVar24 = 2;
    do {
      fVar58 = pfVar23[0x18] - pfVar23[0x20];
      fVar59 = pfVar23[0x19] - pfVar23[0x21];
      fVar60 = pfVar23[0x1a] - pfVar23[0x22];
      fVar61 = pfVar23[0x1b] - pfVar23[0x23];
      fVar34 = pfVar23[0x18] + pfVar23[0x20];
      fVar35 = pfVar23[0x19] + pfVar23[0x21];
      fVar36 = pfVar23[0x1a] + pfVar23[0x22];
      fVar37 = pfVar23[0x1b] + pfVar23[0x23];
      fVar38 = pfVar23[0x28] + pfVar23[-0x10];
      fVar40 = pfVar23[0x29] + pfVar23[-0xf];
      fVar42 = pfVar23[0x2a] + pfVar23[-0xe];
      fVar44 = pfVar23[0x2b] + pfVar23[-0xd];
      fVar62 = pfVar23[-8] + *pfVar23;
      fVar63 = pfVar23[-7] + pfVar23[1];
      fVar64 = pfVar23[-6] + pfVar23[2];
      fVar65 = pfVar23[-5] + pfVar23[3];
      fVar46 = pfVar23[-8] - *pfVar23;
      fVar47 = pfVar23[-7] - pfVar23[1];
      fVar48 = pfVar23[-6] - pfVar23[2];
      fVar49 = pfVar23[-5] - pfVar23[3];
      fVar54 = pfVar23[-0x10] - pfVar23[0x28];
      fVar55 = pfVar23[-0xf] - pfVar23[0x29];
      fVar56 = pfVar23[-0xe] - pfVar23[0x2a];
      fVar57 = pfVar23[-0xd] - pfVar23[0x2b];
      fVar30 = pfVar23[8] + pfVar23[0x10];
      fVar31 = pfVar23[9] + pfVar23[0x11];
      fVar32 = pfVar23[10] + pfVar23[0x12];
      fVar33 = pfVar23[0xb] + pfVar23[0x13];
      fVar50 = pfVar23[8] - pfVar23[0x10];
      fVar51 = pfVar23[9] - pfVar23[0x11];
      fVar52 = pfVar23[10] - pfVar23[0x12];
      fVar53 = pfVar23[0xb] - pfVar23[0x13];
      fVar39 = fVar38 - fVar30;
      fVar41 = fVar40 - fVar31;
      fVar43 = fVar42 - fVar32;
      fVar45 = fVar44 - fVar33;
      fVar26 = (fVar34 + fVar62) * 0.70710677;
      fVar27 = (fVar35 + fVar63) * 0.70710677;
      fVar28 = (fVar36 + fVar64) * 0.70710677;
      fVar29 = (fVar37 + fVar65) * 0.70710677;
      fVar62 = (fVar62 - fVar34) * 0.70710677;
      fVar63 = (fVar63 - fVar35) * 0.70710677;
      fVar64 = (fVar64 - fVar36) * 0.70710677;
      fVar65 = (fVar65 - fVar37) * 0.70710677;
      fVar30 = (fVar30 + fVar38) * 0.70710677;
      fVar31 = (fVar31 + fVar40) * 0.70710677;
      fVar32 = (fVar32 + fVar42) * 0.70710677;
      fVar33 = (fVar33 + fVar44) * 0.70710677;
      fVar34 = fVar54 - fVar62;
      fVar35 = fVar55 - fVar63;
      fVar36 = fVar56 - fVar64;
      fVar37 = fVar57 - fVar65;
      fVar62 = fVar62 + fVar54;
      fVar63 = fVar63 + fVar55;
      fVar64 = fVar64 + fVar56;
      fVar65 = fVar65 + fVar57;
      pfVar23[-0x10] = (fVar26 + fVar30) * 0.5;
      pfVar23[-0xf] = (fVar27 + fVar31) * 0.5;
      pfVar23[-0xe] = (fVar28 + fVar32) * 0.5;
      pfVar23[-0xd] = (fVar29 + fVar33) * 0.5;
      pfVar23[0x10] = (fVar30 - fVar26) * 0.5;
      pfVar23[0x11] = (fVar31 - fVar27) * 0.5;
      pfVar23[0x12] = (fVar32 - fVar28) * 0.5;
      pfVar23[0x13] = (fVar33 - fVar29) * 0.5;
      fVar26 = fVar46 - fVar58;
      fVar28 = fVar47 - fVar59;
      fVar30 = fVar48 - fVar60;
      fVar32 = fVar49 - fVar61;
      fVar38 = (fVar58 + fVar46) * -0.70710677;
      fVar40 = (fVar59 + fVar47) * -0.70710677;
      fVar42 = (fVar60 + fVar48) * -0.70710677;
      fVar44 = (fVar61 + fVar49) * -0.70710677;
      fVar27 = fVar38 + fVar50;
      fVar29 = fVar40 + fVar51;
      fVar31 = fVar42 + fVar52;
      fVar33 = fVar44 + fVar53;
      pfVar23[0x20] = fVar39 * 0.19134171 - fVar26 * 0.46193978;
      pfVar23[0x21] = fVar41 * 0.19134171 - fVar28 * 0.46193978;
      pfVar23[0x22] = fVar43 * 0.19134171 - fVar30 * 0.46193978;
      pfVar23[0x23] = fVar45 * 0.19134171 - fVar32 * 0.46193978;
      *pfVar23 = fVar26 * 0.19134171 + fVar39 * 0.46193978;
      pfVar23[1] = fVar28 * 0.19134171 + fVar41 * 0.46193978;
      pfVar23[2] = fVar30 * 0.19134171 + fVar43 * 0.46193978;
      pfVar23[3] = fVar32 * 0.19134171 + fVar45 * 0.46193978;
      fVar38 = fVar38 - fVar50;
      fVar40 = fVar40 - fVar51;
      fVar42 = fVar42 - fVar52;
      fVar44 = fVar44 - fVar53;
      pfVar23[8] = fVar34 * 0.4157348 - fVar27 * 0.27778512;
      pfVar23[9] = fVar35 * 0.4157348 - fVar29 * 0.27778512;
      pfVar23[10] = fVar36 * 0.4157348 - fVar31 * 0.27778512;
      pfVar23[0xb] = fVar37 * 0.4157348 - fVar33 * 0.27778512;
      pfVar23[0x18] = fVar34 * 0.27778512 + fVar27 * 0.4157348;
      pfVar23[0x19] = fVar35 * 0.27778512 + fVar29 * 0.4157348;
      pfVar23[0x1a] = fVar36 * 0.27778512 + fVar31 * 0.4157348;
      pfVar23[0x1b] = fVar37 * 0.27778512 + fVar33 * 0.4157348;
      pfVar23[0x28] = fVar62 * 0.09754516 + fVar38 * 0.49039263;
      pfVar23[0x29] = fVar63 * 0.09754516 + fVar40 * 0.49039263;
      pfVar23[0x2a] = fVar64 * 0.09754516 + fVar42 * 0.49039263;
      pfVar23[0x2b] = fVar65 * 0.09754516 + fVar44 * 0.49039263;
      pfVar23[-8] = fVar62 * 0.49039263 - fVar38 * 0.09754516;
      pfVar23[-7] = fVar63 * 0.49039263 - fVar40 * 0.09754516;
      pfVar23[-6] = fVar64 * 0.49039263 - fVar42 * 0.09754516;
      pfVar23[-5] = fVar65 * 0.49039263 - fVar44 * 0.09754516;
      pfVar23 = pfVar23 + 4;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    uVar2 = param_1[0x3d];
    uVar3 = param_1[1];
    uVar4 = param_1[3];
    uVar5 = param_1[0x25];
    uVar6 = param_1[0x26];
    uVar7 = param_1[0x27];
    uVar8 = param_1[0x35];
    uVar9 = param_1[0x37];
    uVar10 = param_1[0x10];
    uVar11 = param_1[0x11];
    uVar12 = param_1[0x13];
    uVar1 = param_1[0x19];
    param_1[0x10] = param_1[2];
    param_1[0x11] = param_1[10];
    param_1[0x12] = param_1[0x12];
    param_1[0x13] = param_1[0x1a];
    *param_1 = *param_1;
    param_1[1] = param_1[8];
    param_1[2] = uVar10;
    param_1[3] = param_1[0x18];
    uVar10 = param_1[0x15];
    uVar13 = param_1[0x17];
    uVar14 = param_1[0x30];
    uVar15 = param_1[0x31];
    uVar16 = param_1[0x32];
    uVar17 = param_1[0x33];
    param_1[0x24] = param_1[0x24];
    param_1[0x25] = param_1[0x2c];
    param_1[0x26] = param_1[0x34];
    param_1[0x27] = param_1[0x3c];
    uVar18 = param_1[0x39];
    uVar19 = param_1[0x3b];
    param_1[0x34] = uVar6;
    param_1[0x35] = param_1[0x2e];
    param_1[0x36] = param_1[0x36];
    param_1[0x37] = param_1[0x3e];
    uVar6 = param_1[0x29];
    uVar20 = param_1[0x2b];
    param_1[0x18] = uVar4;
    param_1[0x19] = param_1[0xb];
    param_1[0x1a] = uVar12;
    param_1[0x1b] = param_1[0x1b];
    uVar4 = param_1[5];
    uVar12 = param_1[7];
    param_1[0x3c] = uVar7;
    param_1[0x3d] = param_1[0x2f];
    param_1[0x3e] = uVar9;
    param_1[0x3f] = param_1[0x3f];
    uVar7 = param_1[0x20];
    uVar9 = param_1[0x21];
    uVar21 = param_1[0x22];
    uVar22 = param_1[0x23];
    param_1[8] = uVar3;
    param_1[9] = param_1[9];
    param_1[10] = uVar11;
    param_1[0xb] = uVar1;
    param_1[0x2c] = uVar5;
    param_1[0x2d] = param_1[0x2d];
    param_1[0x2e] = uVar8;
    param_1[0x2f] = uVar2;
    param_1[0x20] = param_1[4];
    param_1[0x21] = param_1[0xc];
    param_1[0x22] = param_1[0x14];
    param_1[0x23] = param_1[0x1c];
    param_1[0x30] = param_1[6];
    param_1[0x31] = param_1[0xe];
    param_1[0x32] = param_1[0x16];
    param_1[0x33] = param_1[0x1e];
    param_1[4] = uVar7;
    param_1[5] = param_1[0x28];
    param_1[6] = uVar14;
    param_1[7] = param_1[0x38];
    param_1[0x14] = uVar21;
    param_1[0x15] = param_1[0x2a];
    param_1[0x16] = uVar16;
    param_1[0x17] = param_1[0x3a];
    param_1[0x28] = uVar4;
    param_1[0x29] = param_1[0xd];
    param_1[0x2a] = uVar10;
    param_1[0x2b] = param_1[0x1d];
    param_1[0x38] = uVar12;
    param_1[0x39] = param_1[0xf];
    param_1[0x3a] = uVar13;
    param_1[0x3b] = param_1[0x1f];
    param_1[0xc] = uVar9;
    param_1[0xd] = uVar6;
    param_1[0xe] = uVar15;
    param_1[0xf] = uVar18;
    param_1[0x1c] = uVar22;
    param_1[0x1d] = uVar20;
    param_1[0x1e] = uVar17;
    param_1[0x1f] = uVar19;
    lVar25 = lVar25 + -1;
  } while (lVar25 != 0);
  return;
}



// FUNCTION 144e56030 FUN_144e56030 body=106 status=ok
// SIG undefined FUN_144e56030(void)

void FUN_144e56030(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*param_1 != 0) {
    FUN_1486115df(*param_1,param_1[1],param_1);
    lVar1 = *param_1;
    uVar3 = param_1[2] - lVar1 & 0xffffffffffffffe0;
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
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e560a0 FUN_144e560a0 body=251 status=ok
// SIG undefined FUN_144e560a0(void)

void FUN_144e560a0(char *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,char param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined1 auStack_58 [32];
  char *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_1;
  local_30 = param_2;
  FUN_144b65a50();
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  *(undefined4 *)(param_1 + 0x28) = param_5;
  param_1[0x2c] = param_6;
  if (param_6 != '\0') {
    if (*(ulonglong *)(param_1 + 0x18) < 0x10) {
      pcVar6 = param_1 + *(longlong *)(param_1 + 0x10);
    }
    else {
      pcVar6 = *(char **)param_1 + *(longlong *)(param_1 + 0x10);
      param_1 = *(char **)param_1;
    }
    for (; param_1 != pcVar6; param_1 = param_1 + 1) {
      iVar3 = tolower((int)*param_1);
      *param_1 = (char)iVar3;
    }
  }
  uVar1 = param_2[3];
  if (0xf < uVar1) {
    uVar5 = uVar1 + 1;
    lVar2 = *param_2;
    lVar4 = lVar2;
    if (0xfff < uVar5) {
      uVar5 = uVar1 + 0x28;
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar4,uVar5);
  }
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 144e561b0 FUN_144e561b0 body=797 status=ok
// SIG undefined FUN_144e561b0(void)

void FUN_144e561b0(longlong *param_1,undefined8 *param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  void *pvVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char *pcVar11;
  ulonglong uVar12;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  ulonglong local_1d0;
  ulonglong uStack_1c8;
  undefined1 local_1b8 [96];
  char local_158 [272];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  uVar12 = (ulonglong)param_3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_1e8 = param_1;
  if (param_3 < 1) {
    FUN_144e41060(local_1b8,"Error uncompressing DWA data (truncated rule).");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_1b8,(ThrowInfo *)&DAT_14c6d51d8);
  }
  memset(local_158,0,0x101);
  pcVar11 = local_158;
  if (0xff < param_3) {
    param_3 = 0xff;
  }
  do {
    pcVar3 = (char *)*param_2;
    cVar1 = *pcVar3;
    *pcVar11 = cVar1;
    *param_2 = pcVar3 + 1;
    if (cVar1 == '\0') break;
    pcVar11 = pcVar11 + 1;
    param_3 = param_3 + -1;
  } while (-1 < param_3);
  local_1e0 = (void *)0x0;
  uStack_1d8 = 0;
  uVar10 = 0xffffffffffffffff;
  do {
    uVar9 = uVar10;
    uVar10 = uVar9 + 1;
  } while (local_158[uVar9 + 1] != '\0');
  if (0x7fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_146eb22ad();
  }
  local_1d0 = uVar10;
  if (uVar10 < 0x10) {
    uStack_1c8 = 0xf;
    memcpy(&local_1e0,local_158,uVar10);
    *(undefined1 *)((longlong)&local_1e0 + uVar9 + 1) = 0;
    uVar9 = uStack_1c8;
  }
  else {
    uVar5 = uVar10 | 0xf;
    uVar9 = 0x7fffffffffffffff;
    if ((uVar5 < 0x8000000000000000) && (uVar9 = uVar5, uVar5 < 0x16)) {
      uVar9 = 0x16;
    }
    pvVar6 = (void *)FUN_144b659f0(&local_1e0,uVar9 + 1);
    local_1e0 = pvVar6;
    uStack_1c8 = uVar9;
    memcpy(pvVar6,local_158,uVar10);
    *(undefined1 *)((longlong)pvVar6 + uVar10) = 0;
  }
  if (param_1 != &local_1e0) {
    uVar10 = param_1[3];
    if (0xf < uVar10) {
      lVar4 = *param_1;
      uVar9 = uVar10 + 1;
      lVar8 = lVar4;
      if (0xfff < uVar9) {
        uVar9 = uVar10 + 0x28;
        lVar8 = *(longlong *)(lVar4 + -8);
        if (0x1f < (lVar4 - lVar8) - 8U) goto LAB_144e563a2;
      }
      thunk_FUN_1400020a8(lVar8,uVar9);
    }
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    *(undefined4 *)param_1 = (undefined4)local_1e0;
    *(undefined4 *)((longlong)param_1 + 4) = local_1e0._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_1d8;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_1d8._4_4_;
    param_1[2] = local_1d0;
    param_1[3] = uStack_1c8;
    uVar9 = 0xf;
    local_1e0 = (void *)((ulonglong)local_1e0 & 0xffffffffffffff00);
  }
  if (0xf < uVar9) {
    uVar10 = uVar9 + 1;
    pvVar6 = local_1e0;
    if (0xfff < uVar10) {
      uVar10 = uVar9 + 0x28;
      pvVar6 = *(void **)((longlong)local_1e0 + -8);
      if (0x1f < (ulonglong)((longlong)local_1e0 + (-8 - (longlong)pvVar6))) {
LAB_144e563a2:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar6,uVar10);
  }
  if (uVar12 < param_1[2] + 3U) {
    FUN_144e41060(local_1b8,"Error uncompressing DWA data (truncated rule).");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_1b8,(ThrowInfo *)&DAT_14c6d51d8);
  }
  bVar2 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  uVar7 = (int)(char)bVar2 >> 4;
  *(uint *)(param_1 + 5) = uVar7 - 1;
  if (3 < uVar7) {
    FUN_144e41060(local_1b8,"Error uncompressing DWA data (corrupt cscIdx rule).");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_1b8,(ThrowInfo *)&DAT_14c6d51d8);
  }
  uVar7 = (int)(char)bVar2 >> 2 & 3;
  *(uint *)(param_1 + 4) = uVar7;
  if (2 < uVar7) {
    FUN_144e41060(local_1b8,"Error uncompressing DWA data (corrupt scheme rule).");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_1b8,(ThrowInfo *)&DAT_14c6d51d8);
  }
  *(byte *)((longlong)param_1 + 0x2c) = bVar2 & 1;
  bVar2 = *(byte *)*param_2;
  *param_2 = (byte *)*param_2 + 1;
  if (2 < bVar2) {
    FUN_144e41060(local_1b8,"Error uncompressing DWA data (corrupt rule).");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_1b8,(ThrowInfo *)&DAT_14c6d51d8);
  }
  *(int *)((longlong)param_1 + 0x24) = (int)(char)bVar2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_208);
}



// FUNCTION 144e564f0 FUN_144e564f0 body=94 status=ok
// SIG undefined FUN_144e564f0(void)

void FUN_144e564f0(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = param_1[3];
  if (0xf < uVar1) {
    lVar2 = *param_1;
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
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



// FUNCTION 144e56550 FUN_144e56550 body=120 status=ok
// SIG undefined FUN_144e56550(void)

void FUN_144e56550(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *param_1 = Imf_3_2::DwaCompressor::LossyDctDecoderBase::vftable;
  FUN_144e57960(param_1 + 0xe);
  lVar1 = param_1[0xb];
  if (lVar1 != 0) {
    uVar3 = param_1[0xd] - lVar1 & 0xfffffffffffffffc;
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
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  FUN_144e577f0(param_1 + 8);
  return;
}



// FUNCTION 144e565d0 FUN_144e565d0 body=4120 status=ok
// SIG undefined FUN_144e565d0(void)

void FUN_144e565d0(longlong param_1)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  ushort uVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  byte *pbVar14;
  ushort *puVar15;
  ulonglong uVar16;
  undefined1 *_Src;
  longlong *plVar17;
  uint uVar18;
  ushort *_Dst;
  ushort *puVar19;
  undefined2 *puVar20;
  int iVar21;
  longlong lVar22;
  uint uVar23;
  int iVar24;
  undefined1 (*pauVar25) [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auStack_298 [32];
  uint local_278;
  uint local_274;
  uint local_270;
  ulonglong local_268;
  undefined1 local_260 [4];
  uint local_25c;
  uint local_258;
  int local_254;
  int local_250;
  int local_24c;
  uint local_248;
  longlong local_240;
  longlong *local_238;
  int local_230;
  undefined8 local_228;
  ushort *local_220;
  longlong local_218;
  longlong local_210;
  ulonglong local_208;
  undefined8 *local_200 [2];
  longlong local_1f0;
  longlong local_1e8 [3];
  ushort *local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined1 local_1b8 [96];
  undefined1 local_158 [96];
  undefined1 local_f8 [88];
  longlong alStack_a0 [15];
  
  alStack_a0[4] = DAT_14c707940 ^ (ulonglong)auStack_298;
  lVar12 = *(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40);
  lVar12 = lVar12 / 6 + (lVar12 >> 0x3f);
  uVar16 = (lVar12 >> 2) - (lVar12 >> 0x3f);
  iVar10 = *(int *)(param_1 + 0x38);
  fVar29 = (float)iVar10 * 0.125;
  local_268 = uVar16;
  fVar26 = ceilf(fVar29);
  uVar18 = (uint)fVar26;
  iVar21 = *(int *)(param_1 + 0x3c);
  local_258 = uVar18;
  fVar26 = ceilf((float)iVar21 * 0.125);
  iVar24 = (int)fVar26;
  uVar23 = iVar10 + uVar18 * -8 + 8;
  local_230 = iVar21 + iVar24 * -8 + 8;
  local_24c = iVar24;
  local_248 = uVar23;
  fVar26 = floorf(fVar29);
  local_274 = (uint)fVar26;
  puVar15 = *(ushort **)(param_1 + 0x18);
  local_1d0 = *(ushort **)(param_1 + 0x20);
  local_220 = puVar15;
  FUN_144e59a70(local_200,uVar16,local_260);
  local_1e8[0] = 0;
  local_1e8[1] = 0;
  local_1e8[2] = 0;
  FUN_144e5c820(local_1e8,(*(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40)) / 0x18);
  lVar12 = (*(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40)) / 0x18;
  if (*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 2 != lVar12) {
    FUN_144e408c0(local_1b8,"Row pointers and types mismatch in count");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_1b8,(ThrowInfo *)&DAT_14c6d53a8);
  }
  if ((lVar12 != 3) && (lVar12 != 1)) {
    FUN_144e41570(local_158,"Only 1 and 3 channel encoding is supported");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_158,(ThrowInfo *)&DAT_14c6d53e0);
  }
  FUN_144e57a10(param_1 + 0x70,uVar16);
  local_208 = FUN_144a7d36f((longlong)(int)uVar18 * uVar16 * 0x80 + 0x20);
  alStack_a0[1] = local_208;
  if ((local_208 + 1 & 0xf) == 0) {
    alStack_a0[1] = local_208 + 1;
  }
  if ((local_208 + 2 & 0xf) == 0) {
    alStack_a0[1] = local_208 + 2;
  }
  if ((local_208 + 3 & 0xf) == 0) {
    alStack_a0[1] = local_208 + 3;
  }
  if ((local_208 + 4 & 0xf) == 0) {
    alStack_a0[1] = local_208 + 4;
  }
  if ((local_208 + 5 & 0xf) == 0) {
    alStack_a0[1] = local_208 + 5;
  }
  if ((local_208 + 6 & 0xf) == 0) {
    alStack_a0[1] = local_208 + 6;
  }
  if ((local_208 + 7 & 0xf) == 0) {
    alStack_a0[1] = local_208 + 7;
  }
  if ((local_208 + 8 & 0xf) == 0) {
    alStack_a0[1] = local_208 + 8;
  }
  if ((local_208 + 9 & 0xf) == 0) {
    alStack_a0[1] = local_208 + 9;
  }
  if ((local_208 + 10 & 0xf) == 0) {
    alStack_a0[1] = local_208 + 10;
  }
  if ((local_208 + 0xb & 0xf) == 0) {
    alStack_a0[1] = local_208 + 0xb;
  }
  if ((local_208 + 0xc & 0xf) == 0) {
    alStack_a0[1] = local_208 + 0xc;
  }
  if ((local_208 + 0xd & 0xf) == 0) {
    alStack_a0[1] = local_208 + 0xd;
  }
  if ((local_208 + 0xe & 0xf) == 0) {
    alStack_a0[1] = local_208 + 0xe;
  }
  if ((local_208 + 0xf & 0xf) == 0) {
    alStack_a0[1] = local_208 + 0xf;
  }
  if ((local_208 + 0x10 & 0xf) == 0) {
    alStack_a0[1] = local_208 + 0x10;
  }
  if ((local_208 + 0x11 & 0xf) == 0) {
    alStack_a0[1] = local_208 + 0x11;
  }
  if ((local_208 + 0x12 & 0xf) == 0) {
    alStack_a0[1] = local_208 + 0x12;
  }
  if ((local_208 + 0x13 & 0xf) == 0) {
    alStack_a0[1] = local_208 + 0x13;
  }
  if ((local_208 + 0x14 & 0xf) == 0) {
    alStack_a0[1] = local_208 + 0x14;
  }
  if ((local_208 + 0x15 & 0xf) == 0) {
    alStack_a0[1] = local_208 + 0x15;
  }
  if ((local_208 + 0x16 & 0xf) == 0) {
    alStack_a0[1] = local_208 + 0x16;
  }
  if ((local_208 + 0x17 & 0xf) == 0) {
    alStack_a0[1] = local_208 + 0x17;
  }
  if ((local_208 + 0x18 & 0xf) == 0) {
    alStack_a0[1] = local_208 + 0x18;
  }
  if ((local_208 + 0x19 & 0xf) == 0) {
    alStack_a0[1] = local_208 + 0x19;
  }
  if ((local_208 + 0x1a & 0xf) == 0) {
    alStack_a0[1] = local_208 + 0x1a;
  }
  if ((local_208 + 0x1b & 0xf) == 0) {
    alStack_a0[1] = local_208 + 0x1b;
  }
  if ((local_208 + 0x1c & 0xf) == 0) {
    alStack_a0[1] = local_208 + 0x1c;
  }
  if ((local_208 + 0x1d & 0xf) == 0) {
    alStack_a0[1] = local_208 + 0x1d;
  }
  if ((local_208 + 0x1e & 0xf) == 0) {
    alStack_a0[1] = local_208 + 0x1e;
  }
  if ((local_208 + 0x1f & 0xf) == 0) {
    alStack_a0[1] = local_208 + 0x1f;
  }
  uVar13 = 1;
  if (uVar16 < 2) {
    *local_200[0] = *(undefined8 *)(param_1 + 0x28);
  }
  else {
    do {
      alStack_a0[uVar13 + 1] = alStack_a0[uVar13] + (longlong)(int)(uVar18 << 6) * 2;
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar16);
    *local_200[0] = *(undefined8 *)(param_1 + 0x28);
    uVar13 = 1;
    do {
      local_200[0][uVar13] = local_200[0][uVar13 - 1] + (longlong)(int)(iVar24 * uVar18) * 2;
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar16);
  }
  for (local_254 = 0; local_254 < iVar24; local_254 = local_254 + 1) {
    local_250 = local_230;
    if (local_254 != iVar24 + -1) {
      local_250 = 8;
    }
    local_25c = 8;
    for (local_278 = 0; (int)local_278 < (int)uVar18; local_278 = local_278 + 1) {
      if (local_278 != uVar18 - 1) {
        uVar23 = local_25c;
      }
      bVar7 = true;
      uVar13 = 0;
      local_25c = uVar23;
      while (plVar17 = (longlong *)(param_1 + 0x70), uVar13 < uVar16) {
        pauVar25 = *(undefined1 (**) [16])(local_1e8[0] + uVar13 * 0x10);
        *(undefined8 *)pauVar25[7] = 0;
        *(undefined8 *)(pauVar25[7] + 8) = 0;
        *(undefined8 *)pauVar25[6] = 0;
        *(undefined8 *)(pauVar25[6] + 8) = 0;
        *(undefined8 *)pauVar25[5] = 0;
        *(undefined8 *)(pauVar25[5] + 8) = 0;
        *(undefined8 *)pauVar25[4] = 0;
        *(undefined8 *)(pauVar25[4] + 8) = 0;
        *(undefined8 *)pauVar25[3] = 0;
        *(undefined8 *)(pauVar25[3] + 8) = 0;
        *(undefined8 *)pauVar25[2] = 0;
        *(undefined8 *)(pauVar25[2] + 8) = 0;
        *(undefined8 *)pauVar25[1] = 0;
        *(undefined8 *)(pauVar25[1] + 8) = 0;
        uVar9 = *(ushort *)local_200[0][uVar13];
        local_200[0][uVar13] = (ushort *)local_200[0][uVar13] + 1;
        *pauVar25 = ZEXT216(uVar9);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        lVar12 = *(longlong *)(local_1e8[0] + uVar13 * 0x10);
        iVar10 = 1;
        iVar21 = 0;
        while (iVar24 = iVar10, iVar24 < 0x40) {
          if (local_1d0 <= puVar15) {
            FUN_144e41060(local_f8,"Error uncompressing DWA data (packed AC buffer too small).");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(local_f8,(ThrowInfo *)&DAT_14c6d51d8);
          }
          uVar9 = *puVar15;
          if (uVar9 == 0xff00) {
            *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
            puVar15 = puVar15 + 1;
            iVar10 = 0x40;
            local_220 = puVar15;
          }
          else if ((uVar9 & 0xff00) == 0xff00) {
            *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
            puVar15 = puVar15 + 1;
            iVar10 = iVar24 + (uint)(byte)uVar9;
            local_220 = puVar15;
          }
          else {
            *(ushort *)(lVar12 + (longlong)iVar24 * 2) = uVar9;
            *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
            puVar15 = puVar15 + 1;
            iVar10 = iVar24 + 1;
            local_220 = puVar15;
            iVar21 = iVar24;
          }
        }
        if (*(char *)(param_1 + 8) == '\0') {
          lVar12 = 0;
          do {
            lVar22 = *(longlong *)(local_1e8[0] + uVar13 * 0x10);
            *(undefined2 *)(lVar12 + lVar22) = *(undefined2 *)(lVar12 + lVar22);
            lVar12 = lVar12 + 2;
          } while (lVar12 < 0x80);
        }
        plVar17 = (longlong *)(param_1 + 0x70);
        if (iVar21 == 0) {
          lVar12 = *plVar17;
          **(undefined4 **)(lVar12 + uVar13 * 0x10) =
               *(undefined4 *)
                (PTR_DAT_14c731618 + (ulonglong)**(ushort **)(local_1e8[0] + uVar13 * 0x10) * 4);
          pfVar2 = *(float **)(lVar12 + uVar13 * 0x10);
          fVar26 = *pfVar2 * 0.3535536 * 0.3535536;
          *pfVar2 = fVar26;
          pfVar2[1] = fVar26;
          pfVar2[2] = fVar26;
          pfVar2[3] = fVar26;
          pfVar2[4] = fVar26;
          pfVar2[5] = fVar26;
          pfVar2[6] = fVar26;
          pfVar2[7] = fVar26;
          pfVar2[8] = fVar26;
          pfVar2[9] = fVar26;
          pfVar2[10] = fVar26;
          pfVar2[0xb] = fVar26;
          pfVar2[0xc] = fVar26;
          pfVar2[0xd] = fVar26;
          pfVar2[0xe] = fVar26;
          pfVar2[0xf] = fVar26;
          pfVar2[0x10] = fVar26;
          pfVar2[0x11] = fVar26;
          pfVar2[0x12] = fVar26;
          pfVar2[0x13] = fVar26;
          pfVar2[0x14] = fVar26;
          pfVar2[0x15] = fVar26;
          pfVar2[0x16] = fVar26;
          pfVar2[0x17] = fVar26;
          pfVar2[0x18] = fVar26;
          pfVar2[0x19] = fVar26;
          pfVar2[0x1a] = fVar26;
          pfVar2[0x1b] = fVar26;
          pfVar2[0x1c] = fVar26;
          pfVar2[0x1d] = fVar26;
          pfVar2[0x1e] = fVar26;
          pfVar2[0x1f] = fVar26;
          pfVar2[0x20] = fVar26;
          pfVar2[0x21] = fVar26;
          pfVar2[0x22] = fVar26;
          pfVar2[0x23] = fVar26;
          pfVar2[0x24] = fVar26;
          pfVar2[0x25] = fVar26;
          pfVar2[0x26] = fVar26;
          pfVar2[0x27] = fVar26;
          pfVar2[0x28] = fVar26;
          pfVar2[0x29] = fVar26;
          pfVar2[0x2a] = fVar26;
          pfVar2[0x2b] = fVar26;
          pfVar2[0x2c] = fVar26;
          pfVar2[0x2d] = fVar26;
          pfVar2[0x2e] = fVar26;
          pfVar2[0x2f] = fVar26;
          pfVar2[0x30] = fVar26;
          pfVar2[0x31] = fVar26;
          pfVar2[0x32] = fVar26;
          pfVar2[0x33] = fVar26;
          pfVar2[0x34] = fVar26;
          pfVar2[0x35] = fVar26;
          pfVar2[0x36] = fVar26;
          pfVar2[0x37] = fVar26;
          pfVar2[0x38] = fVar26;
          pfVar2[0x39] = fVar26;
          pfVar2[0x3a] = fVar26;
          pfVar2[0x3b] = fVar26;
          pfVar2[0x3c] = fVar26;
          pfVar2[0x3d] = fVar26;
          pfVar2[0x3e] = fVar26;
          pfVar2[0x3f] = fVar26;
          uVar13 = uVar13 + 1;
          uVar16 = local_268;
        }
        else {
          bVar7 = false;
          (*(code *)PTR_FUN_14c709d98)
                    (*(undefined8 *)(local_1e8[0] + uVar13 * 0x10),
                     *(undefined8 *)(*plVar17 + uVar13 * 0x10));
          if (iVar21 < 2) {
            (*(code *)PTR_FUN_14c709dd8)();
            uVar13 = uVar13 + 1;
            uVar16 = local_268;
          }
          else if (iVar21 < 3) {
            (*(code *)PTR_FUN_14c709dd0)();
            uVar13 = uVar13 + 1;
            uVar16 = local_268;
          }
          else if (iVar21 < 9) {
            (*(code *)PTR_FUN_14c709dc8)();
            uVar13 = uVar13 + 1;
            uVar16 = local_268;
          }
          else if (iVar21 < 10) {
            (*(code *)PTR_FUN_14c709dc0)();
            uVar13 = uVar13 + 1;
            uVar16 = local_268;
          }
          else if (iVar21 < 0x14) {
            (*(code *)PTR_FUN_14c709db8)();
            uVar13 = uVar13 + 1;
            uVar16 = local_268;
          }
          else if (iVar21 < 0x15) {
            (*(code *)PTR_FUN_14c709db0)();
            uVar13 = uVar13 + 1;
            uVar16 = local_268;
          }
          else if (iVar21 < 0x23) {
            (*(code *)PTR_FUN_14c709da8)();
            uVar13 = uVar13 + 1;
            uVar16 = local_268;
          }
          else {
            (*(code *)PTR_FUN_14c709da0)(*(undefined8 *)(*plVar17 + uVar13 * 0x10));
            uVar13 = uVar13 + 1;
            uVar16 = local_268;
          }
        }
      }
      if (uVar16 == 3) {
        puVar11 = (undefined8 *)*plVar17;
        pfVar2 = (float *)puVar11[4];
        pfVar3 = (float *)puVar11[2];
        if (bVar7) {
          fVar26 = *(float *)*puVar11;
          fVar29 = *pfVar3;
          fVar1 = *pfVar2;
          *(float *)*puVar11 = fVar1 * 1.5747 + fVar26;
          *pfVar3 = (fVar26 - fVar29 * 0.1873) - fVar1 * 0.4682;
          *pfVar2 = fVar29 * 1.8556 + fVar26;
LAB_144e56d33:
          uVar13 = 0;
          lVar22 = (longlong)(int)local_278 * 0x80;
          lVar12 = 0;
          do {
            lVar4 = alStack_a0[uVar13 + 1];
            local_270 = **(uint **)(lVar12 + *plVar17);
            uVar23 = local_270 & 0x7fffffff;
            uVar9 = (ushort)(local_270 >> 0x10) & 0x8000;
            if (uVar23 < 0x38800000) {
              if (0x33000000 < uVar23) {
                bVar6 = 0x7e - (char)(uVar23 >> 0x17);
                uVar18 = local_270 & 0x7fffff | 0x800000;
                uVar23 = uVar18 << (0x20 - bVar6 & 0x1f);
                uVar18 = uVar18 >> (bVar6 & 0x1f);
                uVar9 = uVar9 | (ushort)uVar18;
                if ((0x80000000 < uVar23) || ((uVar23 == 0x80000000 && ((uVar18 & 1) != 0)))) {
                  uVar9 = uVar9 + 1;
                }
              }
            }
            else if (uVar23 < 0x7f800000) {
              if (uVar23 < 0x477ff000) {
                uVar9 = uVar9 | (ushort)(uVar23 + 0xc8000fff + (uVar23 + 0xc8000000 >> 0xd & 1) >>
                                        0xd);
              }
              else {
                uVar9 = uVar9 | 0x7c00;
              }
            }
            else {
              uVar9 = uVar9 | 0x7c00;
              if (uVar23 != 0x7f800000) {
                uVar23 = uVar23 >> 0xd & 0x3ff;
                uVar9 = uVar9 | uVar23 == 0 | (ushort)uVar23;
              }
            }
            auVar27._0_4_ = CONCAT22(uVar9,uVar9);
            auVar27._4_4_ = auVar27._0_4_;
            auVar27._8_4_ = auVar27._0_4_;
            auVar27._12_4_ = auVar27._0_4_;
            *(undefined1 (*) [16])(lVar22 + lVar4) = auVar27;
            *(undefined1 (*) [16])(lVar22 + 0x10 + lVar4) = auVar27;
            *(undefined1 (*) [16])(lVar22 + 0x20 + lVar4) = auVar27;
            *(undefined1 (*) [16])(lVar22 + 0x30 + lVar4) = auVar27;
            *(undefined1 (*) [16])(lVar22 + 0x40 + lVar4) = auVar27;
            *(undefined1 (*) [16])(lVar22 + 0x50 + lVar4) = auVar27;
            *(undefined1 (*) [16])(lVar22 + 0x60 + lVar4) = auVar27;
            *(undefined1 (*) [16])(lVar22 + 0x70 + lVar4) = auVar27;
            uVar13 = uVar13 + 1;
            lVar12 = lVar12 + 0x10;
            uVar16 = local_268;
            puVar15 = local_220;
          } while (uVar13 < local_268);
        }
        else {
          FUN_144e55090();
LAB_144e56ddb:
          uVar16 = local_268;
          uVar13 = 0;
          iVar10 = local_278 << 6;
          lVar12 = 0;
          do {
            (*(code *)PTR_FUN_14c709d90)
                      (alStack_a0[uVar13 + 1] + (longlong)iVar10 * 2,
                       *(undefined8 *)(lVar12 + *plVar17));
            uVar13 = uVar13 + 1;
            lVar12 = lVar12 + 0x10;
          } while (uVar13 < uVar16);
        }
      }
      else if (uVar16 != 0) {
        if (bVar7) goto LAB_144e56d33;
        goto LAB_144e56ddb;
      }
      uVar18 = local_258;
      uVar23 = local_248;
    }
    if (uVar16 != 0) {
      local_1c0 = (longlong)local_254;
      local_278 = local_254 * 8;
      local_250 = local_250 + local_278;
      local_240 = 0;
      local_238 = alStack_a0 + 1;
      uVar16 = local_268;
      do {
        bVar7 = true;
        if (local_1c0 * 8 < (longlong)local_250) {
          local_210 = local_1c0 * 0x40;
          pbVar14 = (byte *)(*(longlong *)(local_240 + *(longlong *)(param_1 + 0x40)) + local_210);
          lVar12 = (longlong)local_250 + local_1c0 * -8;
          do {
            bVar8 = false;
            if ((*pbVar14 & 0xf) == 0) {
              bVar8 = bVar7;
            }
            bVar7 = bVar8;
            pbVar14 = pbVar14 + 8;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        else {
          local_210 = local_1c0 << 6;
        }
        if (bVar7) {
          local_270 = local_278;
          if ((int)local_278 < local_250) {
            local_1c8 = *local_238;
            local_218 = local_210;
            do {
              pauVar25 = *(undefined1 (**) [16])
                          (local_218 + *(longlong *)(*(longlong *)(param_1 + 0x40) + local_240));
              puVar15 = (ushort *)(local_1c8 + (ulonglong)((local_270 & 7) << 3) * 2);
              if (0 < (int)local_274) {
                uVar13 = (ulonglong)local_274;
                do {
                  lVar12 = *(longlong *)(param_1 + 0x30);
                  auVar28._2_2_ = *(undefined2 *)(lVar12 + (ulonglong)puVar15[1] * 2);
                  auVar28._0_2_ = *(undefined2 *)(lVar12 + (ulonglong)*puVar15 * 2);
                  auVar28._4_2_ = *(undefined2 *)(lVar12 + (ulonglong)puVar15[2] * 2);
                  auVar28._6_2_ = *(undefined2 *)(lVar12 + (ulonglong)puVar15[3] * 2);
                  auVar28._10_2_ = *(undefined2 *)(lVar12 + (ulonglong)puVar15[5] * 2);
                  auVar28._8_2_ = *(undefined2 *)(lVar12 + (ulonglong)puVar15[4] * 2);
                  auVar28._12_2_ = *(undefined2 *)(lVar12 + (ulonglong)puVar15[6] * 2);
                  auVar28._14_2_ = *(undefined2 *)(lVar12 + (ulonglong)puVar15[7] * 2);
                  *pauVar25 = auVar28;
                  puVar15 = puVar15 + 0x40;
                  pauVar25 = pauVar25 + 1;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              local_270 = local_270 + 1;
              local_218 = local_218 + 8;
            } while ((int)local_270 < local_250);
          }
        }
        else if ((int)local_278 < local_250) {
          lVar12 = local_210;
          uVar23 = local_278;
          do {
            puVar20 = *(undefined2 **)
                       (lVar12 + *(longlong *)(*(longlong *)(param_1 + 0x40) + local_240));
            if (0 < (int)local_274) {
              puVar15 = (ushort *)(*local_238 + (ulonglong)((uVar23 & 7) << 3) * 2);
              uVar13 = (ulonglong)local_274;
              do {
                *puVar20 = *(undefined2 *)(*(longlong *)(param_1 + 0x30) + (ulonglong)*puVar15 * 2);
                puVar20[1] = *(undefined2 *)
                              (*(longlong *)(param_1 + 0x30) + (ulonglong)puVar15[1] * 2);
                puVar20[2] = *(undefined2 *)
                              (*(longlong *)(param_1 + 0x30) + (ulonglong)puVar15[2] * 2);
                puVar20[3] = *(undefined2 *)
                              (*(longlong *)(param_1 + 0x30) + (ulonglong)puVar15[3] * 2);
                puVar20[4] = *(undefined2 *)
                              (*(longlong *)(param_1 + 0x30) + (ulonglong)puVar15[4] * 2);
                puVar20[5] = *(undefined2 *)
                              (*(longlong *)(param_1 + 0x30) + (ulonglong)puVar15[5] * 2);
                puVar20[6] = *(undefined2 *)
                              (*(longlong *)(param_1 + 0x30) + (ulonglong)puVar15[6] * 2);
                puVar20[7] = *(undefined2 *)
                              (*(longlong *)(param_1 + 0x30) + (ulonglong)puVar15[7] * 2);
                puVar20 = puVar20 + 8;
                puVar15 = puVar15 + 0x40;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            uVar23 = uVar23 + 1;
            lVar12 = lVar12 + 8;
          } while ((int)uVar23 < local_250);
        }
        if ((local_274 != local_258) && ((int)local_278 < local_250)) {
          lVar12 = *local_238;
          lVar22 = local_210;
          uVar23 = local_278;
          do {
            puVar15 = (ushort *)(lVar12 + (longlong)(int)(((uVar23 & 7) + local_274 * 8) * 8) * 2);
            puVar20 = (undefined2 *)
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x40) + local_240) + lVar22) +
                      (longlong)(int)(local_274 * 8) * 2);
            uVar13 = (ulonglong)local_25c;
            if (0 < (int)local_25c) {
              do {
                *puVar20 = *(undefined2 *)(*(longlong *)(param_1 + 0x30) + (ulonglong)*puVar15 * 2);
                puVar20 = puVar20 + 1;
                puVar15 = puVar15 + 1;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            uVar23 = uVar23 + 1;
            lVar22 = lVar22 + 8;
          } while ((int)uVar23 < local_250);
        }
        local_238 = local_238 + 1;
        local_240 = local_240 + 0x18;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
      local_228 = 0;
      uVar16 = local_268;
      puVar15 = local_220;
      uVar18 = local_258;
      uVar23 = local_248;
    }
    iVar24 = local_24c;
  }
  local_238 = (longlong *)0x0;
  if (uVar16 != 0) {
    lVar12 = 0;
    do {
      plVar17 = local_238;
      if (*(int *)(*(longlong *)(param_1 + 0x58) + (longlong)local_238 * 4) == 2) {
        uVar16 = (ulonglong)*(int *)(param_1 + 0x38);
        puVar15 = (ushort *)0x0;
        _Dst = (ushort *)0x0;
        if (uVar16 != 0) {
          if (0x7fffffffffffffff < uVar16) {
            FUN_144e59d00();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar13 = uVar16 * 2;
          if (uVar13 < 0x1000) {
            if (uVar13 != 0) {
              _Dst = (ushort *)FUN_14494321d(uVar13);
            }
          }
          else {
            if (uVar13 + 0x27 <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_14694ac37();
            }
            lVar22 = FUN_14494321d();
            if (lVar22 == 0) goto LAB_144e5754b;
            _Dst = (ushort *)(lVar22 + 0x27U & 0xffffffffffffffe0);
            *(longlong *)(_Dst + -4) = lVar22;
          }
          puVar15 = _Dst + uVar16;
          memset(_Dst,0,uVar13);
        }
        iVar10 = 0;
        if (0 < *(int *)(param_1 + 0x3c)) {
          lVar22 = 0;
          do {
            _Src = *(undefined1 **)(lVar22 + *(longlong *)(*(longlong *)(param_1 + 0x40) + lVar12));
            memcpy(_Dst,_Src,(longlong)*(int *)(param_1 + 0x38) * 2);
            iVar21 = 0;
            puVar19 = _Dst;
            if (0 < *(int *)(param_1 + 0x38)) {
              do {
                local_24c = *(int *)(PTR_DAT_14c731618 + (ulonglong)*puVar19 * 4);
                *_Src = (char)local_24c;
                _Src[1] = (char)((uint)local_24c >> 8);
                _Src[2] = (char)((uint)local_24c >> 0x10);
                _Src[3] = (char)((uint)local_24c >> 0x18);
                _Src = _Src + 4;
                iVar21 = iVar21 + 1;
                puVar19 = puVar19 + 1;
              } while (iVar21 < *(int *)(param_1 + 0x38));
            }
            iVar10 = iVar10 + 1;
            lVar22 = lVar22 + 8;
            plVar17 = local_238;
          } while (iVar10 < *(int *)(param_1 + 0x3c));
        }
        uVar16 = local_268;
        if (_Dst != (ushort *)0x0) {
          puVar19 = _Dst;
          if ((0xfff < (ulonglong)(((longlong)puVar15 - (longlong)_Dst >> 1) * 2)) &&
             (puVar19 = *(ushort **)(_Dst + -4),
             0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)puVar19)))) {
LAB_144e5754b:
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          thunk_FUN_1400020a8(puVar19);
          uVar16 = local_268;
        }
      }
      local_238 = (longlong *)((longlong)plVar17 + 1);
      lVar12 = lVar12 + 0x18;
    } while (local_238 < uVar16);
  }
  thunk_FUN_1400020a8(local_208);
  FUN_144e59bc0(local_1e8);
  if (local_200[0] != (undefined8 *)0x0) {
    uVar16 = local_1f0 - (longlong)local_200[0] & 0xfffffffffffffff8;
    puVar11 = local_200[0];
    if (0xfff < uVar16) {
      uVar16 = uVar16 + 0x27;
      puVar11 = (undefined8 *)local_200[0][-1];
      if (0x1f < (ulonglong)((longlong)local_200[0] + (-8 - (longlong)puVar11))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(puVar11,uVar16);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(alStack_a0[4] ^ (ulonglong)auStack_298);
}



// FUNCTION 144e57630 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<struct `protected: int __cdecl GSI1::readHash(unsigned
   short,long,long) __ptr64'::`2'::FileSymbolInfo>::deallocate(struct `protected: int __cdecl
   GSI1::readHash(unsigned short,long,long) __ptr64'::`2'::FileSymbolInfo * __ptr64 const,unsigned
   __int64) __ptr64
    public: void __cdecl std::allocator<struct GSISymbolEntry>::deallocate(struct GSISymbolEntry *
   __ptr64 const,unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x18;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 144e57680 FUN_144e57680 body=114 status=ok
// SIG undefined FUN_144e57680(void)

ulonglong FUN_144e57680(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    param_2 = param_2 * 0x18;
    if (param_2 < 0x1000) {
      if (param_2 != 0) {
        uVar2 = FUN_14494321d();
        return uVar2;
      }
      return 0;
    }
    if (param_2 < param_2 + 0x27) {
      lVar1 = FUN_14494321d(param_2 + 0x27);
      if (lVar1 != 0) {
        uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar2 - 8) = lVar1;
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14694ac37();
}



// FUNCTION 144e57710 FUN_144e57710 body=216 status=ok
// SIG undefined FUN_144e57710(void)

void FUN_144e57710(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  void *_Dst;
  ulonglong uVar2;
  size_t _Size;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    FUN_144e5d4f0(param_1,puVar1,param_2);
    return;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = param_2[1] - *param_2 >> 3;
  if (uVar2 != 0) {
    if (0x1fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_144e59ce0();
    }
    _Dst = (void *)FUN_1456db838(puVar1,uVar2);
    *puVar1 = _Dst;
    puVar1[1] = _Dst;
    puVar1[2] = (void *)((longlong)_Dst + uVar2 * 8);
    _Size = param_2[1] - *param_2;
    memmove(_Dst,(void *)*param_2,_Size);
    puVar1[1] = (void *)((longlong)_Dst + ((longlong)_Size >> 3) * 8);
  }
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x18;
  return;
}



// FUNCTION 144e577f0 FUN_144e577f0 body=137 status=ok
// SIG undefined FUN_144e577f0(void)

void FUN_144e577f0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*param_1 != 0) {
    FUN_144e5cae0(*param_1,param_1[1],param_1);
    lVar1 = *param_1;
    uVar3 = ((param_1[2] - lVar1) / 0x18) * 0x18;
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
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e57880 FUN_144e57880 body=16 status=ok
// SIG undefined FUN_144e57880(void)

void FUN_144e57880(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e578a0 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<unsigned long> >(class
   std::allocator<unsigned long> * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M>::deallocate(struct `void __cdecl phmap::container_internal::Deallocate<4,class
   std::allocator<unsigned long> >(class std::allocator<unsigned long> * __ptr64,void *
   __ptr64,unsigned __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<struct std::pair<unsigned long const
   ,unsigned long> > >(class std::allocator<struct std::pair<unsigned long const ,unsigned long> > *
   __ptr64,void * __ptr64,unsigned __int64)'::`2'::M>::deallocate(struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<struct std::pair<unsigned long const
   ,unsigned long> > >(class std::allocator<struct std::pair<unsigned long const ,unsigned long> > *
   __ptr64,void * __ptr64,unsigned __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
    public: static void __cdecl phmap::allocator_traits<class std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<unsigned long> >(class
   std::allocator<unsigned long> * __ptr64,void * __ptr64,unsigned __int64)'::`2'::M>
   >::deallocate(class std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<4,class std::allocator<unsigned long> >(class
   std::allocator<unsigned long> * __ptr64,void * __ptr64,unsigned __int64)'::`2'::M> &
   __ptr64,struct `void __cdecl phmap::container_internal::Deallocate<4,class
   std::allocator<unsigned long> >(class std::allocator<unsigned long> * __ptr64,void *
   __ptr64,unsigned __int64)'::`2'::M * __ptr64,unsigned __int64)
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 4;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 144e578f0 FUN_144e578f0 body=16 status=ok
// SIG undefined FUN_144e578f0(void)

void FUN_144e578f0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e57910 FUN_144e57910 body=65 status=ok
// SIG undefined FUN_144e57910(void)

void FUN_144e57910(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x10;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 144e57960 FUN_144e57960 body=169 status=ok
// SIG undefined FUN_144e57960(void)

void FUN_144e57960(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)*param_1;
  if (puVar5 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[1];
    for (; puVar5 != puVar1; puVar5 = puVar5 + 2) {
      if ((void *)puVar5[1] != (void *)0x0) {
        _aligned_free((void *)puVar5[1]);
      }
      puVar5[1] = 0;
      *puVar5 = 0;
    }
    lVar2 = *param_1;
    uVar4 = param_1[2] - lVar2 & 0xfffffffffffffff0;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      uVar4 = uVar4 + 0x27;
      if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar3,uVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e57a10 FUN_144e57a10 body=190 status=ok
// SIG undefined FUN_144e57a10(void)

void FUN_144e57a10(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  
  puVar1 = (undefined8 *)param_1[1];
  lVar2 = *param_1;
  uVar3 = (longlong)puVar1 - lVar2 >> 4;
  if (param_2 < uVar3) {
    puVar5 = (undefined8 *)(param_2 * 0x10 + lVar2);
    for (puVar4 = puVar5; puVar4 != puVar1; puVar4 = puVar4 + 2) {
      if ((void *)puVar4[1] != (void *)0x0) {
        _aligned_free((void *)puVar4[1]);
      }
      puVar4[1] = 0;
      *puVar4 = 0;
    }
    param_1[1] = (longlong)puVar5;
    return;
  }
  if (uVar3 < param_2) {
    if ((ulonglong)(param_1[2] - lVar2 >> 4) < param_2) {
      FUN_144e5d020(param_1,param_2,local_res8);
      return;
    }
    lVar2 = FUN_144e5d2c0(puVar1,param_2 - uVar3,param_1);
    param_1[1] = lVar2;
  }
  return;
}



// FUNCTION 144e57ad0 FUN_144e57ad0 body=16 status=ok
// SIG undefined FUN_144e57ad0(void)

void FUN_144e57ad0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e57af0 FUN_144e57af0 body=52 status=ok
// SIG undefined FUN_144e57af0(void)

undefined8 FUN_144e57af0(undefined8 param_1,ulonglong param_2)

{
  FUN_144e56550();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 144e57b30 FUN_144e57b30 body=263 status=ok
// SIG undefined FUN_144e57b30(void)

undefined8 *
FUN_144e57b30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9)

{
  undefined4 *puVar1;
  
  *param_1 = Imf_3_2::DwaCompressor::LossyDctDecoderBase::vftable;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[5] = param_5;
  param_1[6] = param_6;
  *(undefined4 *)(param_1 + 7) = param_7;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_8;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if (param_1[6] == 0) {
    param_1[6] = &DAT_149a23d60;
  }
  *(undefined1 *)(param_1 + 1) = DAT_14c796695;
  *param_1 = Imf_3_2::DwaCompressor::LossyDctDecoder::vftable;
  FUN_144e5d4f0(param_1 + 8,0,param_2);
  puVar1 = (undefined4 *)param_1[0xc];
  if (puVar1 == (undefined4 *)param_1[0xd]) {
    FUN_144e5d350(param_1 + 0xb,puVar1,&param_9);
  }
  else {
    *puVar1 = param_9;
    param_1[0xc] = param_1[0xc] + 4;
  }
  return param_1;
}



// FUNCTION 144e57c50 FUN_144e57c50 body=62 status=ok
// SIG undefined FUN_144e57c50(void)

undefined8 * FUN_144e57c50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::DwaCompressor::LossyDctDecoder::vftable;
  FUN_144e56550();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 144e57c90 FUN_144e57c90 body=400 status=ok
// SIG undefined FUN_144e57c90(void)

undefined8 *
FUN_144e57c90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
             undefined4 param_13)

{
  undefined4 *puVar1;
  
  *param_1 = Imf_3_2::DwaCompressor::LossyDctDecoderBase::vftable;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[6] = param_8;
  *(undefined4 *)(param_1 + 7) = param_9;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_10;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if (param_1[6] == 0) {
    param_1[6] = &DAT_149a23d60;
  }
  *(undefined1 *)(param_1 + 1) = DAT_14c796695;
  *param_1 = Imf_3_2::DwaCompressor::LossyDctDecoderCsc::vftable;
  FUN_144e5d4f0(param_1 + 8,0,param_2);
  FUN_144e57710(param_1 + 8,param_3);
  FUN_144e57710(param_1 + 8,param_4);
  puVar1 = (undefined4 *)param_1[0xc];
  if (puVar1 == (undefined4 *)param_1[0xd]) {
    FUN_144e5d350(param_1 + 0xb,puVar1,&param_11);
  }
  else {
    *puVar1 = param_11;
    param_1[0xc] = param_1[0xc] + 4;
  }
  puVar1 = (undefined4 *)param_1[0xc];
  if (puVar1 == (undefined4 *)param_1[0xd]) {
    FUN_144e5d350(param_1 + 0xb,puVar1,&param_12);
  }
  else {
    *puVar1 = param_12;
    param_1[0xc] = param_1[0xc] + 4;
  }
  puVar1 = (undefined4 *)param_1[0xc];
  if (puVar1 == (undefined4 *)param_1[0xd]) {
    FUN_144e5d350(param_1 + 0xb,puVar1,&param_13);
  }
  else {
    *puVar1 = param_13;
    param_1[0xc] = param_1[0xc] + 4;
  }
  return param_1;
}



// FUNCTION 144e57e30 FUN_144e57e30 body=62 status=ok
// SIG undefined FUN_144e57e30(void)

undefined8 * FUN_144e57e30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::DwaCompressor::LossyDctDecoderCsc::vftable;
  FUN_144e56550();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 144e57e70 FUN_144e57e70 body=1839 status=ok
// SIG undefined FUN_144e57e70(void)

void FUN_144e57e70(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  longlong lVar5;
  int aiStack_3b8 [50];
  undefined *puStack_2f0;
  longlong local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  undefined8 *local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
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
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)&local_2e8;
  *(undefined4 *)(param_1 + 1) = param_2;
  *param_1 = Imf_3_2::DwaCompressor::LossyDctEncoderBase::vftable;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_6;
  *(undefined4 *)(param_1 + 2) = param_7;
  local_238 = 0xb00000010;
  uStack_230 = 0x100000000a;
  param_1[3] = param_5;
  local_218 = 0xc0000000c;
  uStack_210 = 0x130000000e;
  param_1[4] = 0;
  local_1f8 = 0xd0000000e;
  uStack_1f0 = 0x1800000010;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  local_1d8 = 0x110000000e;
  uStack_1d0 = 0x1d00000016;
  local_228 = 0x2800000018;
  uStack_220 = 0x3d00000033;
  local_1b8 = 0x1600000012;
  uStack_1b0 = 0x3800000025;
  local_208 = 0x3a0000001a;
  uStack_200 = 0x370000003c;
  local_198 = 0x2300000018;
  uStack_190 = 0x4000000037;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  local_1e8 = 0x3900000028;
  uStack_1e0 = 0x3800000045;
  local_178 = 0x4000000031;
  uStack_170 = 0x570000004e;
  local_1c8 = 0x5700000033;
  uStack_1c0 = 0x3e00000050;
  local_158 = 0x5c00000048;
  uStack_150 = 0x620000005f;
  local_1a8 = 0x6d00000044;
  uStack_1a0 = 0x4d00000067;
  local_138 = 0x1200000011;
  uStack_130 = 0x2f00000018;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  local_188 = 0x6800000051;
  uStack_180 = 0x5c00000071;
  local_118 = 0x1500000012;
  uStack_110 = 0x420000001a;
  local_168 = 0x7900000067;
  uStack_160 = 0x6500000078;
  local_f8 = 0x1a00000018;
  uStack_f0 = 0x6300000038;
  local_148 = 0x6400000070;
  uStack_140 = 0x6300000067;
  local_d8 = 0x420000002f;
  uStack_d0 = 0x6300000063;
  local_240 = param_1;
  param_1[0xe] = param_3;
  param_1[0xf] = param_4;
  local_128 = 0x6300000063;
  uStack_120 = 0x6300000063;
  local_108 = 0x6300000063;
  uStack_100 = 0x6300000063;
  local_e8 = 0x6300000063;
  uStack_e0 = 0x6300000063;
  local_c8 = 0x6300000063;
  uStack_c0 = 0x6300000063;
  local_b8 = 0x6300000063;
  uStack_b0 = 0x6300000063;
  local_a8 = 0x6300000063;
  uStack_a0 = 0x6300000063;
  local_98 = 0x6300000063;
  uStack_90 = 0x6300000063;
  local_88 = 0x6300000063;
  uStack_80 = 0x6300000063;
  local_78 = 0x6300000063;
  uStack_70 = 0x6300000063;
  local_68 = 0x6300000063;
  uStack_60 = 0x6300000063;
  local_58 = 0x6300000063;
  uStack_50 = 0x6300000063;
  local_48 = 0x6300000063;
  uStack_40 = 0x6300000063;
  local_2e8 = (longlong)&uStack_120 - (longlong)param_1;
  local_2c8 = (longlong)&uStack_220 + (4 - (longlong)param_1);
  local_2c0 = (longlong)&uStack_120 + (4 - (longlong)param_1);
  local_2b8 = (longlong)&local_218 - (longlong)param_1;
  local_2b0 = (longlong)&local_118 - (longlong)param_1;
  local_2a8 = (longlong)&local_218 + (4 - (longlong)param_1);
  local_2a0 = (longlong)&local_118 + (4 - (longlong)param_1);
  local_298 = (longlong)&uStack_210 - (longlong)param_1;
  local_290 = (longlong)&uStack_110 - (longlong)param_1;
  local_288 = (longlong)&uStack_210 + (4 - (longlong)param_1);
  local_280 = (longlong)&uStack_110 + (4 - (longlong)param_1);
  local_278 = (longlong)&local_208 - (longlong)param_1;
  local_270 = (longlong)&local_108 - (longlong)param_1;
  local_268 = (longlong)&local_208 + -(longlong)param_1 + 4;
  local_260 = (longlong)&local_108 + -(longlong)param_1 + 4;
  local_258 = (longlong)&uStack_200 + -(longlong)param_1;
  local_250 = (longlong)&uStack_100 + -(longlong)param_1;
  local_248 = (longlong)&uStack_200 + -(longlong)param_1 + 4;
  local_2e0 = (longlong)&uStack_100 + -(longlong)param_1 + 4;
  local_2d8 = (longlong)&local_238 + -(longlong)param_1;
  local_2d0 = (longlong)&local_138 + -(longlong)param_1;
  lVar5 = 4;
  pfVar4 = (float *)(param_1 + 0x30);
  do {
    iVar2 = *(int *)((longlong)&local_2b8 + -(longlong)param_1 + (longlong)pfVar4);
    pfVar4[-0x40] =
         (float)*(int *)((longlong)aiStack_3b8 + -(longlong)param_1 + (longlong)pfVar4) / 10.0;
    iVar3 = *(int *)((longlong)pfVar4 + (longlong)aiStack_3b8 + (4 - (longlong)param_1));
    *pfVar4 = (float)iVar2 / 17.0;
    iVar2 = *(int *)((longlong)pfVar4 + (longlong)&local_2b8 + (4 - (longlong)param_1));
    pfVar4[-0x3f] = (float)iVar3 / 10.0;
    iVar3 = *(int *)((longlong)pfVar4 + (longlong)aiStack_3b8 + (8 - (longlong)param_1));
    pfVar4[1] = (float)iVar2 / 17.0;
    iVar2 = *(int *)((longlong)pfVar4 + ((longlong)&local_2b0 - (longlong)param_1));
    pfVar4[-0x3e] = (float)iVar3 / 10.0;
    iVar3 = *(int *)((longlong)pfVar4 + (longlong)aiStack_3b8 + (0xc - (longlong)param_1));
    pfVar4[2] = (float)iVar2 / 17.0;
    iVar2 = *(int *)((longlong)pfVar4 + (longlong)&local_2b0 + (4 - (longlong)param_1));
    pfVar4[-0x3d] = (float)iVar3 / 10.0;
    iVar3 = *(int *)((longlong)pfVar4 + (longlong)aiStack_3b8 + (0x10 - (longlong)param_1));
    pfVar4[3] = (float)iVar2 / 17.0;
    iVar2 = *(int *)((longlong)pfVar4 + ((longlong)&local_2a8 - (longlong)param_1));
    pfVar4[-0x3c] = (float)iVar3 / 10.0;
    iVar3 = *(int *)((longlong)pfVar4 + (longlong)aiStack_3b8 + (0x14 - (longlong)param_1));
    pfVar4[4] = (float)iVar2 / 17.0;
    iVar2 = *(int *)((longlong)pfVar4 + (longlong)&local_2a8 + (4 - (longlong)param_1));
    pfVar4[-0x3b] = (float)iVar3 / 10.0;
    iVar3 = *(int *)((longlong)pfVar4 + (longlong)aiStack_3b8 + (0x18 - (longlong)param_1));
    pfVar4[5] = (float)iVar2 / 17.0;
    iVar2 = *(int *)((longlong)pfVar4 + ((longlong)&uStack_120 - (longlong)param_1) + -0x180);
    pfVar4[-0x3a] = (float)iVar3 / 10.0;
    iVar3 = *(int *)((longlong)pfVar4 + local_2c8 + -0x180);
    pfVar4[6] = (float)iVar2 / 17.0;
    iVar2 = *(int *)((longlong)pfVar4 + local_2c0 + -0x180);
    pfVar4[-0x39] = (float)iVar3 / 10.0;
    iVar3 = *(int *)((longlong)pfVar4 + ((longlong)&local_218 - (longlong)param_1) + -0x180);
    pfVar4[7] = (float)iVar2 / 17.0;
    iVar2 = *(int *)((longlong)pfVar4 + ((longlong)&local_118 - (longlong)param_1) + -0x180);
    pfVar4[-0x38] = (float)iVar3 / 10.0;
    pfVar4[8] = (float)iVar2 / 17.0;
    pfVar1 = pfVar4 + 0x10;
    iVar2 = *(int *)((longlong)pfVar4 + local_2a0 + -0x180);
    pfVar4[-0x37] = (float)*(int *)((longlong)pfVar4 + local_2a8 + -0x180) / 10.0;
    pfVar4[9] = (float)iVar2 / 17.0;
    iVar2 = *(int *)((longlong)pfVar4 + ((longlong)&uStack_110 - (longlong)param_1) + -0x180);
    pfVar4[-0x36] =
         (float)*(int *)((longlong)pfVar4 + ((longlong)&uStack_210 - (longlong)param_1) + -0x180) /
         10.0;
    pfVar4[10] = (float)iVar2 / 17.0;
    iVar2 = *(int *)((longlong)pfVar4 + local_280 + -0x180);
    pfVar4[-0x35] = (float)*(int *)((longlong)pfVar4 + local_288 + -0x180) / 10.0;
    pfVar4[0xb] = (float)iVar2 / 17.0;
    iVar2 = *(int *)((longlong)pfVar4 + ((longlong)&local_108 - (longlong)param_1) + -0x180);
    pfVar4[-0x34] =
         (float)*(int *)((longlong)pfVar4 + ((longlong)&local_208 - (longlong)param_1) + -0x180) /
         10.0;
    pfVar4[0xc] = (float)iVar2 / 17.0;
    iVar2 = *(int *)((longlong)&local_2c8 + -(longlong)param_1 + 4 + (longlong)pfVar1);
    pfVar4[-0x33] =
         (float)*(int *)((longlong)aiStack_3b8 + -(longlong)param_1 + -0xc + (longlong)pfVar1) /
         10.0;
    pfVar4[0xd] = (float)iVar2 / 17.0;
    iVar2 = *(int *)((longlong)&local_2c0 + -(longlong)param_1 + (longlong)pfVar1);
    pfVar4[-0x32] =
         (float)*(int *)((longlong)aiStack_3b8 + -(longlong)param_1 + -8 + (longlong)pfVar1) / 10.0;
    pfVar4[0xe] = (float)iVar2 / 17.0;
    iVar2 = *(int *)((longlong)&local_2c0 + -(longlong)param_1 + 4 + (longlong)pfVar1);
    pfVar4[-0x31] =
         (float)*(int *)((longlong)aiStack_3b8 + -(longlong)param_1 + -4 + (longlong)pfVar1) / 10.0;
    pfVar4[0xf] = (float)iVar2 / 17.0;
    lVar5 = lVar5 + -1;
    pfVar4 = pfVar1;
  } while (lVar5 != 0);
                    /* WARNING: Subroutine does not return */
  puStack_2f0 = &UNK_144e5859f;
  FUN_144d8e3a0(local_38 ^ (ulonglong)&local_2e8);
}



// FUNCTION 144e585c0 FUN_144e585c0 body=120 status=ok
// SIG undefined FUN_144e585c0(void)

void FUN_144e585c0(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *param_1 = Imf_3_2::DwaCompressor::LossyDctEncoderBase::vftable;
  FUN_144e57960(param_1 + 0xb);
  lVar1 = param_1[8];
  if (lVar1 != 0) {
    uVar3 = param_1[10] - lVar1 & 0xfffffffffffffffc;
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
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  FUN_144e598e0(param_1 + 5);
  return;
}



// FUNCTION 144e58640 FUN_144e58640 body=4274 status=ok
// SIG undefined FUN_144e58640(void)

void FUN_144e58640(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  float *pfVar11;
  ushort uVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  ushort *puVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  ushort *puVar22;
  undefined1 *puVar23;
  longlong *plVar24;
  float *pfVar25;
  longlong lVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined1 *puVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_1d8 [32];
  ushort local_1b8 [4];
  longlong *local_1b0;
  uint local_1a8;
  float local_1a0 [2];
  ulonglong local_198;
  int local_190;
  int local_18c;
  undefined1 *local_188;
  float local_180;
  float local_17c;
  ushort *local_178;
  undefined1 *local_170;
  undefined8 *local_168 [2];
  longlong local_158;
  ushort local_148 [64];
  ushort local_c8 [5];
  undefined2 local_be;
  undefined2 local_bc;
  undefined2 local_ba;
  undefined2 local_b8;
  undefined2 local_b6;
  undefined2 local_b4;
  undefined2 local_b2;
  undefined2 local_b0;
  undefined2 local_ae;
  undefined2 local_ac;
  undefined2 local_aa;
  undefined2 local_a8;
  undefined2 local_a6;
  undefined2 local_a4;
  undefined2 local_a2;
  undefined2 local_a0;
  undefined2 local_9e;
  undefined2 local_9c;
  undefined2 local_9a;
  undefined2 local_98;
  undefined2 local_96;
  undefined2 local_94;
  undefined2 local_92;
  undefined2 local_90;
  undefined2 local_8e;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined2 local_88;
  undefined2 local_86;
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined2 local_72;
  undefined2 local_70;
  undefined2 local_6e;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined2 local_68;
  undefined2 local_66;
  undefined2 local_64;
  undefined2 local_62;
  undefined2 local_60;
  undefined2 local_5e;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined2 local_58;
  undefined2 local_56;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  fVar31 = ceilf((float)*(int *)(param_1 + 0xc) * 0.125);
  local_190 = (int)fVar31;
  fVar32 = ceilf((float)*(int *)(param_1 + 0x10) * 0.125);
  local_18c = (int)fVar32;
  FUN_144e59a70(local_168,(*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28)) / 0x18,
                local_1b8);
  local_178 = *(ushort **)(param_1 + 0x70);
  FUN_144e57a10(param_1 + 0x58,
                (*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28)) / 0x18);
  puVar29 = (undefined1 *)0x0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar30 = 0;
  puVar23 = (undefined1 *)((*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28)) / 0x18);
  local_1b0 = (longlong *)(param_1 + 0x40);
  if (puVar23 != (undefined1 *)0x0) {
    puVar15 = puVar29;
    puVar17 = puVar29;
    do {
      if (*(int *)(*local_1b0 + (longlong)puVar17 * 4) == 2) {
        puVar15 = (undefined1 *)
                  (ulonglong)
                  (uint)((int)puVar15 + *(int *)(param_1 + 0xc) * *(int *)(param_1 + 0x10));
      }
      iVar30 = (int)puVar15;
      puVar17 = (undefined1 *)(ulonglong)((int)puVar17 + 1);
    } while (puVar17 < puVar23);
  }
  local_170 = (undefined1 *)0x0;
  local_188 = (undefined1 *)0x0;
  if (iVar30 != 0) {
    if (0x7fffffffffffffff < (ulonglong)(longlong)iVar30) {
      FUN_144e59d00();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar10 = (longlong)iVar30 * 2;
    if (uVar10 < 0x1000) {
      if (uVar10 == 0) {
        local_188 = (undefined1 *)0x0;
      }
      else {
        local_188 = (undefined1 *)FUN_14494321d(uVar10);
      }
    }
    else {
      if (uVar10 + 0x27 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_14694ac37();
      }
      lVar6 = FUN_14494321d();
      if (lVar6 == 0) goto LAB_144e596cd;
      local_188 = (undefined1 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(local_188 + -8) = lVar6;
    }
    puVar29 = local_188;
    local_170 = local_188 + uVar10;
    memset(local_188,0,uVar10);
  }
  if (iVar30 == 0) {
    puVar29 = (undefined1 *)0x0;
  }
  local_1a8 = 0;
  lVar9 = *(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28);
  lVar6 = lVar9 >> 0x3f;
  iVar30 = (int)fVar31;
  iVar14 = (int)fVar32;
  if (lVar9 / 0x18 + lVar6 != lVar6) {
    uVar10 = 0;
    do {
      if ((*(int *)(*local_1b0 + uVar10 * 4) == 2) && (iVar30 = 0, 0 < *(int *)(param_1 + 0x10))) {
        local_198 = uVar10 * 3;
        lVar6 = 0;
        do {
          iVar14 = 0;
          pfVar25 = *(float **)
                     (lVar6 + *(longlong *)(*(longlong *)(param_1 + 0x28) + uVar10 * 0x18));
          puVar23 = puVar29;
          if (0 < *(int *)(param_1 + 0xc)) {
            do {
              local_180 = *pfVar25;
              local_1a0[0] = *(float *)(PTR_DAT_14c731618 + 0x3effc);
              local_17c = *(float *)(PTR_DAT_14c731618 + 0x1effc);
              pfVar11 = &local_180;
              if (*(float *)(PTR_DAT_14c731618 + 0x1effc) <= *pfVar25) {
                pfVar11 = &local_17c;
              }
              pfVar7 = local_1a0;
              if (local_1a0[0] < *pfVar11 || local_1a0[0] == *pfVar11) {
                pfVar7 = pfVar11;
              }
              local_1a0[0] = *pfVar7;
              fVar31 = ABS(local_1a0[0]);
              uVar4 = (ushort)((uint)local_1a0[0] >> 0x10) & 0x8000;
              if ((uint)fVar31 < 0x38800000) {
                if (0x33000000 < (uint)fVar31) {
                  bVar3 = 0x7e - (char)((uint)fVar31 >> 0x17);
                  uVar20 = (uint)local_1a0[0] & 0x7fffff | 0x800000;
                  uVar19 = uVar20 << (0x20 - bVar3 & 0x1f);
                  uVar20 = uVar20 >> (bVar3 & 0x1f);
                  uVar4 = uVar4 | (ushort)uVar20;
                  if ((0x80000000 < uVar19) || ((uVar19 == 0x80000000 && ((uVar20 & 1) != 0)))) {
                    uVar4 = uVar4 + 1;
                  }
                }
              }
              else if ((uint)fVar31 < 0x7f800000) {
                if ((uint)fVar31 < 0x477ff000) {
                  uVar4 = uVar4 | (ushort)((int)fVar31 + -0x37fff001 +
                                           ((int)fVar31 + 0xc8000000U >> 0xd & 1) >> 0xd);
                }
                else {
                  uVar4 = uVar4 | 0x7c00;
                }
              }
              else {
                uVar4 = uVar4 | 0x7c00;
                if (fVar31 != INFINITY) {
                  uVar19 = (uint)fVar31 >> 0xd & 0x3ff;
                  uVar4 = uVar4 | uVar19 == 0 | (ushort)uVar19;
                }
              }
              *puVar23 = (char)uVar4;
              puVar23[1] = (char)(uVar4 >> 8);
              iVar14 = iVar14 + 1;
              puVar23 = puVar23 + 2;
              pfVar25 = pfVar25 + 1;
            } while (iVar14 < *(int *)(param_1 + 0xc));
          }
          *(undefined1 **)(lVar6 + *(longlong *)(*(longlong *)(param_1 + 0x28) + uVar10 * 0x18)) =
               puVar29;
          puVar29 = puVar29 + (longlong)*(int *)(param_1 + 0xc) * 2;
          iVar30 = iVar30 + 1;
          lVar6 = lVar6 + 8;
        } while (iVar30 < *(int *)(param_1 + 0x10));
      }
      local_1a8 = local_1a8 + 1;
      uVar10 = (ulonglong)local_1a8;
      iVar30 = local_190;
      iVar14 = local_18c;
    } while (uVar10 < (ulonglong)
                      ((*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28)) / 0x18));
  }
  *local_168[0] = *(undefined8 *)(param_1 + 0x78);
  uVar19 = 1;
  if (1 < (ulonglong)((*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28)) / 0x18)) {
    uVar10 = 1;
    do {
      local_168[0][uVar10] = local_168[0][uVar19 - 1] + (longlong)(iVar14 * iVar30) * 2;
      uVar19 = uVar19 + 1;
      uVar10 = (ulonglong)uVar19;
    } while (uVar10 < (ulonglong)
                      ((*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28)) / 0x18));
  }
  local_1a8 = 0;
  puVar27 = local_168[0];
  if (0 < iVar14) {
    do {
      local_1a0[0] = 0.0;
      if (0 < iVar30) {
        do {
          uVar10 = 0;
          lVar6 = *(longlong *)(param_1 + 0x30);
          lVar9 = *(longlong *)(param_1 + 0x28);
          lVar1 = lVar6 - lVar9 >> 0x3f;
          if ((lVar6 - lVar9) / 0x18 + lVar1 != lVar1) {
            lVar1 = *(longlong *)(param_1 + 0x58);
            local_1b0 = (longlong *)CONCAT44(local_1b0._4_4_,local_1a8 * 8);
            do {
              lVar6 = *(longlong *)(lVar9 + uVar10 * 0x18);
              lVar21 = 0;
              iVar30 = local_1a8 * 8;
              do {
                lVar26 = 8;
                iVar14 = (int)local_1a0[0] * 8;
                do {
                  iVar13 = *(int *)(param_1 + 0xc);
                  iVar5 = iVar14;
                  if (iVar13 <= iVar14) {
                    iVar5 = (iVar13 * 2 - iVar14) + -1;
                  }
                  iVar13 = iVar13 + -1;
                  if (-1 < iVar5) {
                    iVar13 = iVar5;
                  }
                  iVar5 = *(int *)(param_1 + 0x10);
                  iVar8 = iVar30;
                  if (iVar5 <= iVar30) {
                    iVar8 = (iVar5 * 2 - iVar30) + -1;
                  }
                  iVar5 = iVar5 + -1;
                  if (-1 < iVar8) {
                    iVar5 = iVar8;
                  }
                  local_1b8[0] = *(ushort *)
                                  (*(longlong *)(lVar6 + (longlong)iVar5 * 8) + (longlong)iVar13 * 2
                                  );
                  uVar4 = local_1b8[0];
                  if (*(longlong *)(param_1 + 0x18) != 0) {
                    uVar4 = *(ushort *)(*(longlong *)(param_1 + 0x18) + (ulonglong)local_1b8[0] * 2)
                    ;
                  }
                  *(undefined4 *)(lVar21 + *(longlong *)(lVar1 + uVar10 * 0x10)) =
                       *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)uVar4 * 4);
                  iVar14 = iVar14 + 1;
                  lVar21 = lVar21 + 4;
                  lVar26 = lVar26 + -1;
                } while (lVar26 != 0);
                iVar30 = iVar30 + 1;
              } while (lVar21 < 0x100);
              uVar10 = (ulonglong)((int)uVar10 + 1);
              lVar6 = *(longlong *)(param_1 + 0x30);
              puVar27 = local_168[0];
            } while (uVar10 < (ulonglong)((lVar6 - lVar9) / 0x18));
          }
          uVar10 = 0;
          plVar24 = (longlong *)(param_1 + 0x58);
          fVar31 = local_1a0[0];
          if ((lVar6 - lVar9) / 0x18 == 3) {
            puVar28 = (undefined8 *)*plVar24;
            FUN_144e55540(*puVar28,puVar28[2],puVar28[4]);
          }
          local_198 = local_198 & 0xffffffff00000000;
          if ((*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28)) / 0x18 != 0) {
            do {
              lVar9 = 0;
              lVar6 = uVar10 * 2;
              FUN_144e55ca0(*(undefined8 *)(*plVar24 + uVar10 * 0x10));
              fVar31 = *(float *)(param_1 + 8);
              lVar6 = *(longlong *)(*plVar24 + lVar6 * 8);
              puVar16 = local_c8 + 1;
              if ((int)uVar10 == 0) {
                do {
                  uVar19 = *(uint *)(lVar6 + lVar9);
                  uVar20 = uVar19 & 0x7fffffff;
                  uVar4 = (ushort)(uVar19 >> 0x10) & 0x8000;
                  if (uVar20 < 0x38800000) {
                    if (0x33000000 < uVar20) {
                      bVar3 = 0x7e - (char)(uVar20 >> 0x17);
                      uVar20 = uVar19 & 0x7fffff | 0x800000;
                      uVar19 = uVar20 << (0x20 - bVar3 & 0x1f);
                      uVar20 = uVar20 >> (bVar3 & 0x1f);
                      uVar4 = uVar4 | (ushort)uVar20;
                      if ((0x80000000 < uVar19) || ((uVar19 == 0x80000000 && ((uVar20 & 1) != 0))))
                      {
                        uVar4 = uVar4 + 1;
                      }
                    }
                  }
                  else if (uVar20 < 0x7f800000) {
                    if (uVar20 < 0x477ff000) {
                      uVar4 = uVar4 | (ushort)(uVar20 + 0xc8000fff +
                                               (uVar20 + 0xc8000000 >> 0xd & 1) >> 0xd);
                    }
                    else {
                      uVar4 = uVar4 | 0x7c00;
                    }
                  }
                  else {
                    uVar4 = uVar4 | 0x7c00;
                    if (uVar20 != 0x7f800000) {
                      uVar19 = uVar20 >> 0xd & 0x3ff;
                      uVar4 = uVar4 | uVar19 == 0 | (ushort)uVar19;
                    }
                  }
                  uVar18 = (ulonglong)uVar4;
                  puVar22 = (ushort *)
                            (&DAT_149a83d60 + (ulonglong)(uint)(&DAT_149b83d60)[uVar18] * 2);
                  iVar30 = (*(ushort *)(&DAT_149bc3f70 + (uVar18 & 0xff) * 2) - 1) +
                           (uint)*(ushort *)(&DAT_149bc3f70 + (ulonglong)(uVar4 >> 8) * 2);
                  while ((uVar12 = uVar4, -1 < iVar30 &&
                         (uVar12 = *puVar22,
                         fVar31 * *(float *)(param_1 + 0x80 + lVar9) <=
                         ABS(*(float *)(PTR_DAT_14c731618 + (ulonglong)*puVar22 * 4) -
                             *(float *)(PTR_DAT_14c731618 + uVar18 * 4))))) {
                    puVar22 = puVar22 + 1;
                    iVar30 = iVar30 + -1;
                  }
                  puVar16[-1] = uVar12;
                  uVar19 = *(uint *)(lVar6 + 4 + lVar9);
                  local_1b0 = (longlong *)CONCAT44(local_1b0._4_4_,uVar19);
                  uVar20 = uVar19 & 0x7fffffff;
                  uVar4 = (ushort)(uVar19 >> 0x10) & 0x8000;
                  if (uVar20 < 0x38800000) {
                    if (0x33000000 < uVar20) {
                      bVar3 = 0x7e - (char)(uVar20 >> 0x17);
                      uVar20 = uVar19 & 0x7fffff | 0x800000;
                      uVar19 = uVar20 << (0x20 - bVar3 & 0x1f);
                      uVar20 = uVar20 >> (bVar3 & 0x1f);
                      uVar4 = uVar4 | (ushort)uVar20;
                      if ((0x80000000 < uVar19) || ((uVar19 == 0x80000000 && ((uVar20 & 1) != 0))))
                      {
                        uVar4 = uVar4 + 1;
                      }
                    }
                  }
                  else if (uVar20 < 0x7f800000) {
                    if (uVar20 < 0x477ff000) {
                      uVar4 = uVar4 | (ushort)(uVar20 + 0xc8000fff +
                                               (uVar20 + 0xc8000000 >> 0xd & 1) >> 0xd);
                    }
                    else {
                      uVar4 = uVar4 | 0x7c00;
                    }
                  }
                  else {
                    uVar4 = uVar4 | 0x7c00;
                    if (uVar20 != 0x7f800000) {
                      uVar19 = uVar20 >> 0xd & 0x3ff;
                      uVar4 = uVar4 | uVar19 == 0 | (ushort)uVar19;
                    }
                  }
                  uVar18 = (ulonglong)uVar4;
                  iVar30 = (uint)*(ushort *)(&DAT_149bc3f70 + (ulonglong)(uVar4 >> 8) * 2) +
                           (uint)*(ushort *)(&DAT_149bc3f70 + (uVar18 & 0xff) * 2);
                  puVar22 = (ushort *)
                            (&DAT_149a83d60 + (ulonglong)(uint)(&DAT_149b83d60)[uVar18] * 2);
                  while ((iVar30 = iVar30 + -1, uVar12 = uVar4, -1 < iVar30 &&
                         (uVar12 = *puVar22,
                         fVar31 * *(float *)(param_1 + 0x84 + lVar9) <=
                         ABS(*(float *)(PTR_DAT_14c731618 + (ulonglong)*puVar22 * 4) -
                             *(float *)(PTR_DAT_14c731618 + uVar18 * 4))))) {
                    puVar22 = puVar22 + 1;
                  }
                  *puVar16 = uVar12;
                  lVar9 = lVar9 + 8;
                  puVar16 = puVar16 + 2;
                } while (lVar9 < 0x100);
              }
              else {
                do {
                  uVar19 = *(uint *)(lVar6 + lVar9);
                  uVar20 = uVar19 & 0x7fffffff;
                  uVar4 = (ushort)(uVar19 >> 0x10) & 0x8000;
                  if (uVar20 < 0x38800000) {
                    if (0x33000000 < uVar20) {
                      bVar3 = 0x7e - (char)(uVar20 >> 0x17);
                      uVar20 = uVar19 & 0x7fffff | 0x800000;
                      uVar19 = uVar20 << (0x20 - bVar3 & 0x1f);
                      uVar20 = uVar20 >> (bVar3 & 0x1f);
                      uVar4 = uVar4 | (ushort)uVar20;
                      if ((0x80000000 < uVar19) || ((uVar19 == 0x80000000 && ((uVar20 & 1) != 0))))
                      {
                        uVar4 = uVar4 + 1;
                      }
                    }
                  }
                  else if (uVar20 < 0x7f800000) {
                    if (uVar20 < 0x477ff000) {
                      uVar4 = uVar4 | (ushort)(uVar20 + 0xc8000fff +
                                               (uVar20 + 0xc8000000 >> 0xd & 1) >> 0xd);
                    }
                    else {
                      uVar4 = uVar4 | 0x7c00;
                    }
                  }
                  else {
                    uVar4 = uVar4 | 0x7c00;
                    if (uVar20 != 0x7f800000) {
                      uVar19 = uVar20 >> 0xd & 0x3ff;
                      uVar4 = uVar4 | uVar19 == 0 | (ushort)uVar19;
                    }
                  }
                  uVar18 = (ulonglong)uVar4;
                  puVar22 = (ushort *)
                            (&DAT_149a83d60 + (ulonglong)(uint)(&DAT_149b83d60)[uVar18] * 2);
                  iVar30 = (*(ushort *)(&DAT_149bc3f70 + (uVar18 & 0xff) * 2) - 1) +
                           (uint)*(ushort *)(&DAT_149bc3f70 + (ulonglong)(uVar4 >> 8) * 2);
                  while ((uVar12 = uVar4, -1 < iVar30 &&
                         (uVar12 = *puVar22,
                         fVar31 * *(float *)(param_1 + 0x180 + lVar9) <=
                         ABS(*(float *)(PTR_DAT_14c731618 + (ulonglong)*puVar22 * 4) -
                             *(float *)(PTR_DAT_14c731618 + uVar18 * 4))))) {
                    puVar22 = puVar22 + 1;
                    iVar30 = iVar30 + -1;
                  }
                  puVar16[-1] = uVar12;
                  uVar19 = *(uint *)(lVar6 + 4 + lVar9);
                  local_1b0 = (longlong *)CONCAT44(local_1b0._4_4_,uVar19);
                  uVar20 = uVar19 & 0x7fffffff;
                  uVar4 = (ushort)(uVar19 >> 0x10) & 0x8000;
                  if (uVar20 < 0x38800000) {
                    if (0x33000000 < uVar20) {
                      bVar3 = 0x7e - (char)(uVar20 >> 0x17);
                      uVar20 = uVar19 & 0x7fffff | 0x800000;
                      uVar19 = uVar20 << (0x20 - bVar3 & 0x1f);
                      uVar20 = uVar20 >> (bVar3 & 0x1f);
                      uVar4 = uVar4 | (ushort)uVar20;
                      if ((0x80000000 < uVar19) || ((uVar19 == 0x80000000 && ((uVar20 & 1) != 0))))
                      {
                        uVar4 = uVar4 + 1;
                      }
                    }
                  }
                  else if (uVar20 < 0x7f800000) {
                    if (uVar20 < 0x477ff000) {
                      uVar4 = uVar4 | (ushort)(uVar20 + 0xc8000fff +
                                               (uVar20 + 0xc8000000 >> 0xd & 1) >> 0xd);
                    }
                    else {
                      uVar4 = uVar4 | 0x7c00;
                    }
                  }
                  else {
                    uVar4 = uVar4 | 0x7c00;
                    if (uVar20 != 0x7f800000) {
                      uVar19 = uVar20 >> 0xd & 0x3ff;
                      uVar4 = uVar4 | uVar19 == 0 | (ushort)uVar19;
                    }
                  }
                  uVar18 = (ulonglong)uVar4;
                  iVar30 = (uint)*(ushort *)(&DAT_149bc3f70 + (ulonglong)(uVar4 >> 8) * 2) +
                           (uint)*(ushort *)(&DAT_149bc3f70 + (uVar18 & 0xff) * 2);
                  puVar22 = (ushort *)
                            (&DAT_149a83d60 + (ulonglong)(uint)(&DAT_149b83d60)[uVar18] * 2);
                  while ((iVar30 = iVar30 + -1, uVar12 = uVar4, -1 < iVar30 &&
                         (uVar12 = *puVar22,
                         fVar31 * *(float *)(param_1 + 0x184 + lVar9) <=
                         ABS(*(float *)(PTR_DAT_14c731618 + (ulonglong)*puVar22 * 4) -
                             *(float *)(PTR_DAT_14c731618 + uVar18 * 4))))) {
                    puVar22 = puVar22 + 1;
                  }
                  *puVar16 = uVar12;
                  lVar9 = lVar9 + 8;
                  puVar16 = puVar16 + 2;
                } while (lVar9 < 0x100);
              }
              local_148[0] = local_c8[0];
              local_148[1] = local_c8[1];
              local_148[2] = local_b8;
              local_148[3] = local_a8;
              local_148[4] = local_b6;
              local_148[5] = local_c8[2];
              local_148[6] = local_c8[3];
              local_148[7] = local_b4;
              local_148[8] = local_a6;
              local_148[9] = local_98;
              local_148[10] = local_88;
              local_148[0xb] = local_96;
              local_148[0xc] = local_a4;
              local_148[0xd] = local_b2;
              local_148[0xe] = local_c8[4];
              local_148[0xf] = local_be;
              local_148[0x10] = local_b0;
              local_148[0x11] = local_a2;
              local_148[0x12] = local_94;
              local_148[0x13] = local_86;
              local_148[0x14] = local_78;
              local_148[0x15] = local_68;
              local_148[0x16] = local_76;
              local_148[0x17] = local_84;
              local_148[0x18] = local_92;
              local_148[0x19] = local_a0;
              local_148[0x1a] = local_ae;
              local_148[0x1b] = local_bc;
              local_148[0x1c] = local_ba;
              local_148[0x1d] = local_ac;
              local_148[0x1e] = local_9e;
              local_148[0x1f] = local_90;
              local_148[0x20] = local_82;
              local_148[0x21] = local_74;
              local_148[0x22] = local_66;
              local_148[0x23] = local_58;
              local_148[0x24] = local_56;
              local_148[0x25] = local_64;
              local_148[0x26] = local_72;
              local_148[0x27] = local_80;
              local_148[0x28] = local_8e;
              local_148[0x29] = local_9c;
              local_148[0x2a] = local_aa;
              local_148[0x2b] = local_9a;
              local_148[0x2c] = local_8c;
              local_148[0x2d] = local_7e;
              local_148[0x2e] = local_70;
              local_148[0x2f] = local_62;
              local_148[0x30] = local_54;
              local_148[0x31] = local_52;
              local_148[0x32] = local_60;
              local_148[0x33] = local_6e;
              local_148[0x34] = local_7c;
              local_148[0x35] = local_8a;
              local_148[0x36] = local_7a;
              local_148[0x37] = local_6c;
              local_148[0x38] = local_5e;
              local_148[0x39] = local_50;
              local_148[0x3a] = local_4e;
              local_148[0x3b] = local_5c;
              local_148[0x3c] = local_6a;
              local_148[0x3d] = local_5a;
              local_148[0x3e] = local_4c;
              local_148[0x3f] = local_4a;
              lVar6 = 0;
              do {
                local_1b8[0] = local_148[lVar6];
                local_148[lVar6] = local_1b8[0];
                lVar6 = lVar6 + 1;
              } while (lVar6 < 0x40);
              *(ushort *)local_168[0][uVar10] = local_148[0];
              local_168[0][uVar10] = local_168[0][uVar10] + 2;
              *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
              iVar30 = 1;
              do {
                iVar13 = 1;
                iVar14 = iVar30;
                if (local_148[iVar30] == 0) {
                  while ((iVar14 = iVar14 + 1, iVar14 < 0x40 && (local_148[iVar14] == 0))) {
                    iVar13 = iVar13 + 1;
                  }
                  if (iVar13 == 1) {
                    *local_178 = 0;
                  }
                  else if (iVar13 + iVar30 == 0x40) {
                    *local_178 = 0xff00;
                  }
                  else {
                    *local_178 = (ushort)iVar13 | 0xff00;
                  }
                }
                else {
                  *local_178 = local_148[iVar30];
                }
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
                iVar30 = iVar30 + iVar13;
                local_178 = local_178 + 1;
              } while (iVar30 < 0x40);
              uVar19 = (int)local_198 + 1;
              uVar10 = (ulonglong)uVar19;
              local_198 = CONCAT44(local_198._4_4_,uVar19);
              plVar24 = (longlong *)(param_1 + 0x58);
              puVar27 = local_168[0];
              fVar31 = local_1a0[0];
            } while ((ulonglong)uVar19 <
                     (ulonglong)
                     ((*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28)) / 0x18));
          }
          local_1a0[0] = (float)((int)fVar31 + 1);
          iVar30 = local_190;
          iVar14 = local_18c;
        } while ((int)local_1a0[0] < local_190);
      }
      local_1a8 = local_1a8 + 1;
    } while ((int)local_1a8 < iVar14);
  }
  if (local_188 != (undefined1 *)0x0) {
    uVar10 = ((longlong)local_170 - (longlong)local_188 >> 1) * 2;
    puVar29 = local_188;
    if (0xfff < uVar10) {
      uVar10 = uVar10 + 0x27;
      puVar29 = *(undefined1 **)(local_188 + -8);
      if ((undefined1 *)0x1f < local_188 + (-8 - (longlong)puVar29)) {
LAB_144e596cd:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(puVar29,uVar10);
  }
  uVar10 = local_158 - (longlong)puVar27 & 0xfffffffffffffff8;
  puVar28 = puVar27;
  if (0xfff < uVar10) {
    uVar10 = uVar10 + 0x27;
    puVar28 = (undefined8 *)puVar27[-1];
    if (0x1f < (ulonglong)((longlong)puVar27 + (-8 - (longlong)puVar28))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(puVar28,uVar10);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1d8);
}



// FUNCTION 144e59720 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<struct `protected: int __cdecl GSI1::readHash(unsigned
   short,long,long) __ptr64'::`2'::FileSymbolInfo>::deallocate(struct `protected: int __cdecl
   GSI1::readHash(unsigned short,long,long) __ptr64'::`2'::FileSymbolInfo * __ptr64 const,unsigned
   __int64) __ptr64
    public: void __cdecl std::allocator<struct GSISymbolEntry>::deallocate(struct GSISymbolEntry *
   __ptr64 const,unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x18;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 144e59770 FUN_144e59770 body=114 status=ok
// SIG undefined FUN_144e59770(void)

ulonglong FUN_144e59770(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    param_2 = param_2 * 0x18;
    if (param_2 < 0x1000) {
      if (param_2 != 0) {
        uVar2 = FUN_14494321d();
        return uVar2;
      }
      return 0;
    }
    if (param_2 < param_2 + 0x27) {
      lVar1 = FUN_14494321d(param_2 + 0x27);
      if (lVar1 != 0) {
        uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar2 - 8) = lVar1;
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14694ac37();
}



// FUNCTION 144e59800 FUN_144e59800 body=216 status=ok
// SIG undefined FUN_144e59800(void)

void FUN_144e59800(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  void *_Dst;
  ulonglong uVar2;
  size_t _Size;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == *(undefined8 **)(param_1 + 0x10)) {
    FUN_144e5ce40(param_1,puVar1,param_2);
    return;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = param_2[1] - *param_2 >> 3;
  if (uVar2 != 0) {
    if (0x1fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_144e59d20();
    }
    _Dst = (void *)FUN_1473c6056(puVar1,uVar2);
    *puVar1 = _Dst;
    puVar1[1] = _Dst;
    puVar1[2] = (void *)((longlong)_Dst + uVar2 * 8);
    _Size = param_2[1] - *param_2;
    memmove(_Dst,(void *)*param_2,_Size);
    puVar1[1] = (void *)((longlong)_Dst + ((longlong)_Size >> 3) * 8);
  }
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x18;
  return;
}



// FUNCTION 144e598e0 FUN_144e598e0 body=137 status=ok
// SIG undefined FUN_144e598e0(void)

void FUN_144e598e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*param_1 != 0) {
    FUN_144e5ca00(*param_1,param_1[1],param_1);
    lVar1 = *param_1;
    uVar3 = ((param_1[2] - lVar1) / 0x18) * 0x18;
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
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e59970 FUN_144e59970 body=16 status=ok
// SIG undefined FUN_144e59970(void)

void FUN_144e59970(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e59990 FUN_144e59990 body=52 status=ok
// SIG undefined FUN_144e59990(void)

undefined8 FUN_144e59990(undefined8 param_1,ulonglong param_2)

{
  FUN_144e585c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x280);
  }
  return param_1;
}



// FUNCTION 144e599e0 FUN_144e599e0 body=62 status=ok
// SIG undefined FUN_144e599e0(void)

undefined8 * FUN_144e599e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::DwaCompressor::LossyDctEncoder::vftable;
  FUN_144e585c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x280);
  }
  return param_1;
}



// FUNCTION 144e59a30 FUN_144e59a30 body=62 status=ok
// SIG undefined FUN_144e59a30(void)

undefined8 * FUN_144e59a30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::DwaCompressor::LossyDctEncoderCsc::vftable;
  FUN_144e585c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x280);
  }
  return param_1;
}



// FUNCTION 144e59a70 FUN_144e59a70 body=189 status=ok
// SIG undefined FUN_144e59a70(void)

undefined8 * FUN_144e59a70(undefined8 *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *_Dst;
  
  _Dst = (void *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (0x1fffffffffffffff < param_2) {
      FUN_144e59b90();
      pcVar1 = (code *)swi(3);
      puVar3 = (undefined8 *)(*pcVar1)();
      return puVar3;
    }
    param_2 = param_2 * 8;
    if (param_2 < 0x1000) {
      if (param_2 != 0) {
        _Dst = (void *)FUN_14494321d(param_2);
      }
    }
    else {
      if (param_2 + 0x27 <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_14694ac37();
      }
      lVar2 = FUN_14494321d();
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      _Dst = (void *)(lVar2 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar2;
    }
    *param_1 = _Dst;
    param_1[2] = (void *)(param_2 + (longlong)_Dst);
    memset(_Dst,0,param_2);
    param_1[1] = (void *)(param_2 + (longlong)_Dst);
  }
  return param_1;
}



// FUNCTION 144e59b30 FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_> body=91 status=ok
// SIG undefined FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>(void)

/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void>
   >::~priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void> >(void) __ptr64
    public: __cdecl std::vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64>
   >::~vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64> >(void) __ptr64
    public: __cdecl std::vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned
   __int64> >::~vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned __int64> >(void)
   __ptr64
    public: __cdecl std::vector<unsigned __int64,class std::allocator<unsigned __int64>
   >::~vector<unsigned __int64,class std::allocator<unsigned __int64> >(void) __ptr64
     7 names - too many to list
   
   Library: Visual Studio 2019 Release */

void FID_conflict__vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff8;
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
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e59b90 FUN_144e59b90 body=16 status=ok
// SIG undefined FUN_144e59b90(void)

void FUN_144e59b90(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e59bc0 FUN_144e59bc0 body=169 status=ok
// SIG undefined FUN_144e59bc0(void)

void FUN_144e59bc0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)*param_1;
  if (puVar5 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[1];
    for (; puVar5 != puVar1; puVar5 = puVar5 + 2) {
      if ((void *)puVar5[1] != (void *)0x0) {
        _aligned_free((void *)puVar5[1]);
      }
      puVar5[1] = 0;
      *puVar5 = 0;
    }
    lVar2 = *param_1;
    uVar4 = param_1[2] - lVar2 & 0xfffffffffffffff0;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      uVar4 = uVar4 + 0x27;
      if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar3,uVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e59c70 FUN_144e59c70 body=16 status=ok
// SIG undefined FUN_144e59c70(void)

void FUN_144e59c70(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e59c90 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::_Parallelism_allocator<unsigned __int64>::deallocate(unsigned __int64
   * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct CHN * __ptr64>::deallocate(struct CHN * __ptr64 *
   __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<8,class std::allocator<struct std::pair<unsigned long const
   ,struct TPI1::PRECEX * __ptr64> > >(class std::allocator<struct std::pair<unsigned long const
   ,struct TPI1::PRECEX * __ptr64> > * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M>::deallocate(struct `void __cdecl phmap::container_internal::Deallocate<8,class
   std::allocator<struct std::pair<unsigned long const ,struct TPI1::PRECEX * __ptr64> > >(class
   std::allocator<struct std::pair<unsigned long const ,struct TPI1::PRECEX * __ptr64> > *
   __ptr64,void * __ptr64,unsigned __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<8,class std::allocator<struct std::pair<unsigned long const
   ,struct TYPTYPE * __ptr64> > >(class std::allocator<struct std::pair<unsigned long const ,struct
   TYPTYPE * __ptr64> > * __ptr64,void * __ptr64,unsigned __int64)'::`2'::M>::deallocate(struct
   `void __cdecl phmap::container_internal::Deallocate<8,class std::allocator<struct
   std::pair<unsigned long const ,struct TYPTYPE * __ptr64> > >(class std::allocator<struct
   std::pair<unsigned long const ,struct TYPTYPE * __ptr64> > * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
     16 names - too many to list
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 8;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 144e59ce0 FUN_144e59ce0 body=16 status=ok
// SIG undefined FUN_144e59ce0(void)

void FUN_144e59ce0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e59d00 FUN_144e59d00 body=16 status=ok
// SIG undefined FUN_144e59d00(void)

void FUN_144e59d00(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e59d20 FUN_144e59d20 body=16 status=ok
// SIG undefined FUN_144e59d20(void)

void FUN_144e59d20(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e59d40 FUN_144e59d40 body=91 status=ok
// SIG undefined FUN_144e59d40(void)

void FUN_144e59d40(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffffc;
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
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e59da0 FUN_144e59da0 body=295 status=ok
// SIG undefined FUN_144e59da0(void)

longlong * FUN_144e59da0(longlong *param_1,ulonglong param_2)

{
  void *pvVar1;
  ulonglong _Size;
  uint *puVar2;
  longlong lVar3;
  void *_Dst;
  ulonglong uVar4;
  
  _Dst = (void *)0x0;
  uVar4 = param_2 + 0x1f >> 5;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (uVar4 != 0) {
    _Size = uVar4 * 4;
    if (_Size < 0x1000) {
      if (uVar4 != 0) {
        _Dst = (void *)FUN_14494321d(_Size);
      }
    }
    else {
      if (_Size + 0x27 <= _Size) goto LAB_144e59ec3;
      lVar3 = FUN_14494321d();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      _Dst = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar3;
    }
    *param_1 = (longlong)_Dst;
    param_1[2] = (longlong)(_Size + (longlong)_Dst);
    memset(_Dst,0,_Size);
    _Dst = (void *)(_Size + (longlong)_Dst);
    param_1[1] = (longlong)_Dst;
  }
  param_1[3] = 0;
  if (param_2 < 0x8000000000000000) {
    lVar3 = *param_1;
    if ((uVar4 < (ulonglong)((longlong)_Dst - lVar3 >> 2)) &&
       (pvVar1 = (void *)(lVar3 + uVar4 * 4), pvVar1 != _Dst)) {
      param_1[1] = (longlong)pvVar1;
    }
    param_1[3] = param_2;
    if ((param_2 & 0x1f) != 0) {
      puVar2 = (uint *)(lVar3 + -4 + uVar4 * 4);
      *puVar2 = *puVar2 & (1 << ((byte)param_2 & 0x1f)) - 1U;
    }
    return param_1;
  }
  FUN_144e59f30(param_1);
LAB_144e59ec3:
                    /* WARNING: Subroutine does not return */
  FUN_14694ac37();
}



// FUNCTION 144e59ed0 FUN_144e59ed0 body=91 status=ok
// SIG undefined FUN_144e59ed0(void)

void FUN_144e59ed0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffffc;
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
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e59f30 FUN_144e59f30 body=16 status=ok
// SIG undefined FUN_144e59f30(void)

void FUN_144e59f30(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector<bool> too long");
}



// FUNCTION 144e59fd0 FUN_144e59fd0 body=1663 status=ok
// SIG undefined FUN_144e59fd0(void)

void FUN_144e59fd0(float *param_1)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
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
  float fVar36;
  float fVar37;
  float fVar38;
  
  fVar4 = *param_1;
  fVar6 = param_1[1];
  fVar10 = param_1[2];
  fVar11 = param_1[3];
  fVar8 = param_1[4];
  fVar16 = param_1[5];
  fVar35 = param_1[6];
  fVar37 = param_1[7];
  fVar12 = fVar4 * 0.3535536 + fVar10 * 0.4619398 + fVar8 * 0.3535536 + fVar35 * 0.1913422;
  fVar13 = fVar4 * 0.3535536 + fVar10 * 0.1913422 + fVar8 * -0.3535536 + fVar35 * -0.4619398;
  fVar14 = fVar4 * 0.3535536 + fVar10 * -0.1913422 + fVar8 * -0.3535536 + fVar35 * 0.4619398;
  fVar15 = fVar4 * 0.3535536 + fVar10 * -0.4619398 + fVar8 * 0.3535536 + fVar35 * -0.1913422;
  fVar4 = param_1[8];
  fVar10 = param_1[9];
  fVar8 = param_1[10];
  fVar35 = param_1[0xb];
  fVar3 = fVar6 * 0.4903927 + fVar11 * 0.4157349 + fVar16 * 0.2777855 + fVar37 * 0.09754573;
  fVar5 = fVar6 * 0.4157349 + fVar11 * -0.09754573 + fVar16 * -0.4903927 + fVar37 * -0.2777855;
  fVar7 = fVar6 * 0.2777855 + fVar11 * -0.4903927 + fVar16 * 0.09754573 + fVar37 * 0.4157349;
  fVar9 = fVar6 * 0.09754573 + fVar11 * -0.2777855 + fVar16 * 0.4157349 + fVar37 * -0.4903927;
  fVar6 = param_1[0xc];
  fVar11 = param_1[0xd];
  fVar16 = param_1[0xe];
  fVar37 = param_1[0xf];
  *param_1 = fVar3 + fVar12;
  param_1[1] = fVar5 + fVar13;
  param_1[2] = fVar7 + fVar14;
  param_1[3] = fVar9 + fVar15;
  param_1[4] = fVar15 - fVar9;
  param_1[5] = fVar14 - fVar7;
  param_1[6] = fVar13 - fVar5;
  param_1[7] = fVar12 - fVar3;
  fVar12 = fVar4 * 0.3535536 + fVar8 * 0.4619398 + fVar6 * 0.3535536 + fVar16 * 0.1913422;
  fVar13 = fVar4 * 0.3535536 + fVar8 * 0.1913422 + fVar6 * -0.3535536 + fVar16 * -0.4619398;
  fVar14 = fVar4 * 0.3535536 + fVar8 * -0.1913422 + fVar6 * -0.3535536 + fVar16 * 0.4619398;
  fVar15 = fVar4 * 0.3535536 + fVar8 * -0.4619398 + fVar6 * 0.3535536 + fVar16 * -0.1913422;
  fVar4 = param_1[0x10];
  fVar6 = param_1[0x11];
  fVar8 = param_1[0x12];
  fVar16 = param_1[0x13];
  pfVar1 = param_1 + 0x10;
  fVar3 = fVar10 * 0.4903927 + fVar35 * 0.4157349 + fVar11 * 0.2777855 + fVar37 * 0.09754573;
  fVar5 = fVar10 * 0.4157349 + fVar35 * -0.09754573 + fVar11 * -0.4903927 + fVar37 * -0.2777855;
  fVar7 = fVar10 * 0.2777855 + fVar35 * -0.4903927 + fVar11 * 0.09754573 + fVar37 * 0.4157349;
  fVar9 = fVar10 * 0.09754573 + fVar35 * -0.2777855 + fVar11 * 0.4157349 + fVar37 * -0.4903927;
  fVar10 = param_1[0x14];
  fVar11 = param_1[0x15];
  fVar35 = param_1[0x16];
  fVar37 = param_1[0x17];
  param_1[8] = fVar3 + fVar12;
  param_1[9] = fVar5 + fVar13;
  param_1[10] = fVar7 + fVar14;
  param_1[0xb] = fVar9 + fVar15;
  param_1[0xc] = fVar15 - fVar9;
  param_1[0xd] = fVar14 - fVar7;
  param_1[0xe] = fVar13 - fVar5;
  param_1[0xf] = fVar12 - fVar3;
  fVar12 = fVar4 * 0.3535536 + fVar8 * 0.4619398 + fVar10 * 0.3535536 + fVar35 * 0.1913422;
  fVar13 = fVar4 * 0.3535536 + fVar8 * 0.1913422 + fVar10 * -0.3535536 + fVar35 * -0.4619398;
  fVar14 = fVar4 * 0.3535536 + fVar8 * -0.1913422 + fVar10 * -0.3535536 + fVar35 * 0.4619398;
  fVar15 = fVar4 * 0.3535536 + fVar8 * -0.4619398 + fVar10 * 0.3535536 + fVar35 * -0.1913422;
  fVar4 = param_1[0x18];
  fVar10 = param_1[0x19];
  fVar8 = param_1[0x1a];
  fVar35 = param_1[0x1b];
  fVar3 = fVar6 * 0.4903927 + fVar16 * 0.4157349 + fVar11 * 0.2777855 + fVar37 * 0.09754573;
  fVar5 = fVar6 * 0.4157349 + fVar16 * -0.09754573 + fVar11 * -0.4903927 + fVar37 * -0.2777855;
  fVar7 = fVar6 * 0.2777855 + fVar16 * -0.4903927 + fVar11 * 0.09754573 + fVar37 * 0.4157349;
  fVar9 = fVar6 * 0.09754573 + fVar16 * -0.2777855 + fVar11 * 0.4157349 + fVar37 * -0.4903927;
  fVar6 = param_1[0x1c];
  fVar11 = param_1[0x1d];
  fVar16 = param_1[0x1e];
  fVar37 = param_1[0x1f];
  *pfVar1 = fVar3 + fVar12;
  param_1[0x11] = fVar5 + fVar13;
  param_1[0x12] = fVar7 + fVar14;
  param_1[0x13] = fVar9 + fVar15;
  param_1[0x14] = fVar15 - fVar9;
  param_1[0x15] = fVar14 - fVar7;
  param_1[0x16] = fVar13 - fVar5;
  param_1[0x17] = fVar12 - fVar3;
  fVar12 = fVar4 * 0.3535536 + fVar8 * 0.4619398 + fVar6 * 0.3535536 + fVar16 * 0.1913422;
  fVar13 = fVar4 * 0.3535536 + fVar8 * 0.1913422 + fVar6 * -0.3535536 + fVar16 * -0.4619398;
  fVar14 = fVar4 * 0.3535536 + fVar8 * -0.1913422 + fVar6 * -0.3535536 + fVar16 * 0.4619398;
  fVar15 = fVar4 * 0.3535536 + fVar8 * -0.4619398 + fVar6 * 0.3535536 + fVar16 * -0.1913422;
  fVar3 = fVar10 * 0.4903927 + fVar35 * 0.4157349 + fVar11 * 0.2777855 + fVar37 * 0.09754573;
  fVar5 = fVar10 * 0.4157349 + fVar35 * -0.09754573 + fVar11 * -0.4903927 + fVar37 * -0.2777855;
  fVar7 = fVar10 * 0.2777855 + fVar35 * -0.4903927 + fVar11 * 0.09754573 + fVar37 * 0.4157349;
  fVar9 = fVar10 * 0.09754573 + fVar35 * -0.2777855 + fVar11 * 0.4157349 + fVar37 * -0.4903927;
  param_1[0x18] = fVar3 + fVar12;
  param_1[0x19] = fVar5 + fVar13;
  param_1[0x1a] = fVar7 + fVar14;
  param_1[0x1b] = fVar9 + fVar15;
  fVar4 = param_1[0x20];
  fVar6 = param_1[0x21];
  fVar10 = param_1[0x22];
  fVar11 = param_1[0x23];
  fVar8 = param_1[0x24];
  fVar16 = param_1[0x25];
  fVar35 = param_1[0x26];
  fVar37 = param_1[0x27];
  param_1[0x1c] = fVar15 - fVar9;
  param_1[0x1d] = fVar14 - fVar7;
  param_1[0x1e] = fVar13 - fVar5;
  param_1[0x1f] = fVar12 - fVar3;
  fVar12 = fVar4 * 0.3535536 + fVar10 * 0.4619398 + fVar8 * 0.3535536 + fVar35 * 0.1913422;
  fVar13 = fVar4 * 0.3535536 + fVar10 * 0.1913422 + fVar8 * -0.3535536 + fVar35 * -0.4619398;
  fVar14 = fVar4 * 0.3535536 + fVar10 * -0.1913422 + fVar8 * -0.3535536 + fVar35 * 0.4619398;
  fVar15 = fVar4 * 0.3535536 + fVar10 * -0.4619398 + fVar8 * 0.3535536 + fVar35 * -0.1913422;
  fVar4 = param_1[0x28];
  fVar10 = param_1[0x29];
  fVar8 = param_1[0x2a];
  fVar35 = param_1[0x2b];
  fVar3 = fVar6 * 0.4903927 + fVar11 * 0.4157349 + fVar16 * 0.2777855 + fVar37 * 0.09754573;
  fVar5 = fVar6 * 0.4157349 + fVar11 * -0.09754573 + fVar16 * -0.4903927 + fVar37 * -0.2777855;
  fVar7 = fVar6 * 0.2777855 + fVar11 * -0.4903927 + fVar16 * 0.09754573 + fVar37 * 0.4157349;
  fVar9 = fVar6 * 0.09754573 + fVar11 * -0.2777855 + fVar16 * 0.4157349 + fVar37 * -0.4903927;
  fVar6 = param_1[0x2c];
  fVar11 = param_1[0x2d];
  fVar16 = param_1[0x2e];
  fVar37 = param_1[0x2f];
  param_1[0x20] = fVar3 + fVar12;
  param_1[0x21] = fVar5 + fVar13;
  param_1[0x22] = fVar7 + fVar14;
  param_1[0x23] = fVar9 + fVar15;
  param_1[0x24] = fVar15 - fVar9;
  param_1[0x25] = fVar14 - fVar7;
  param_1[0x26] = fVar13 - fVar5;
  param_1[0x27] = fVar12 - fVar3;
  fVar12 = fVar4 * 0.3535536 + fVar8 * 0.4619398 + fVar6 * 0.3535536 + fVar16 * 0.1913422;
  fVar13 = fVar4 * 0.3535536 + fVar8 * 0.1913422 + fVar6 * -0.3535536 + fVar16 * -0.4619398;
  fVar14 = fVar4 * 0.3535536 + fVar8 * -0.1913422 + fVar6 * -0.3535536 + fVar16 * 0.4619398;
  fVar15 = fVar4 * 0.3535536 + fVar8 * -0.4619398 + fVar6 * 0.3535536 + fVar16 * -0.1913422;
  fVar4 = param_1[0x30];
  fVar6 = param_1[0x31];
  fVar8 = param_1[0x32];
  fVar16 = param_1[0x33];
  fVar3 = fVar10 * 0.4903927 + fVar35 * 0.4157349 + fVar11 * 0.2777855 + fVar37 * 0.09754573;
  fVar5 = fVar10 * 0.4157349 + fVar35 * -0.09754573 + fVar11 * -0.4903927 + fVar37 * -0.2777855;
  fVar7 = fVar10 * 0.2777855 + fVar35 * -0.4903927 + fVar11 * 0.09754573 + fVar37 * 0.4157349;
  fVar9 = fVar10 * 0.09754573 + fVar35 * -0.2777855 + fVar11 * 0.4157349 + fVar37 * -0.4903927;
  fVar10 = param_1[0x34];
  fVar11 = param_1[0x35];
  fVar35 = param_1[0x36];
  fVar37 = param_1[0x37];
  param_1[0x28] = fVar3 + fVar12;
  param_1[0x29] = fVar5 + fVar13;
  param_1[0x2a] = fVar7 + fVar14;
  param_1[0x2b] = fVar9 + fVar15;
  param_1[0x2c] = fVar15 - fVar9;
  param_1[0x2d] = fVar14 - fVar7;
  param_1[0x2e] = fVar13 - fVar5;
  param_1[0x2f] = fVar12 - fVar3;
  fVar12 = fVar4 * 0.3535536 + fVar8 * 0.4619398 + fVar10 * 0.3535536 + fVar35 * 0.1913422;
  fVar13 = fVar4 * 0.3535536 + fVar8 * 0.1913422 + fVar10 * -0.3535536 + fVar35 * -0.4619398;
  fVar14 = fVar4 * 0.3535536 + fVar8 * -0.1913422 + fVar10 * -0.3535536 + fVar35 * 0.4619398;
  fVar15 = fVar4 * 0.3535536 + fVar8 * -0.4619398 + fVar10 * 0.3535536 + fVar35 * -0.1913422;
  fVar4 = param_1[0x38];
  fVar10 = param_1[0x39];
  fVar8 = param_1[0x3a];
  fVar35 = param_1[0x3b];
  fVar3 = fVar6 * 0.4903927 + fVar16 * 0.4157349 + fVar11 * 0.2777855 + fVar37 * 0.09754573;
  fVar5 = fVar6 * 0.4157349 + fVar16 * -0.09754573 + fVar11 * -0.4903927 + fVar37 * -0.2777855;
  fVar7 = fVar6 * 0.2777855 + fVar16 * -0.4903927 + fVar11 * 0.09754573 + fVar37 * 0.4157349;
  fVar9 = fVar6 * 0.09754573 + fVar16 * -0.2777855 + fVar11 * 0.4157349 + fVar37 * -0.4903927;
  fVar6 = param_1[0x3c];
  fVar11 = param_1[0x3d];
  fVar16 = param_1[0x3e];
  fVar37 = param_1[0x3f];
  param_1[0x30] = fVar3 + fVar12;
  param_1[0x31] = fVar5 + fVar13;
  param_1[0x32] = fVar7 + fVar14;
  param_1[0x33] = fVar9 + fVar15;
  param_1[0x34] = fVar15 - fVar9;
  param_1[0x35] = fVar14 - fVar7;
  param_1[0x36] = fVar13 - fVar5;
  param_1[0x37] = fVar12 - fVar3;
  fVar3 = fVar4 * 0.3535536 + fVar8 * 0.4619398 + fVar6 * 0.3535536 + fVar16 * 0.1913422;
  fVar5 = fVar4 * 0.3535536 + fVar8 * 0.1913422 + fVar6 * -0.3535536 + fVar16 * -0.4619398;
  fVar7 = fVar4 * 0.3535536 + fVar8 * -0.1913422 + fVar6 * -0.3535536 + fVar16 * 0.4619398;
  fVar16 = fVar4 * 0.3535536 + fVar8 * -0.4619398 + fVar6 * 0.3535536 + fVar16 * -0.1913422;
  fVar4 = fVar10 * 0.4903927 + fVar35 * 0.4157349 + fVar11 * 0.2777855 + fVar37 * 0.09754573;
  fVar6 = fVar10 * 0.4157349 + fVar35 * -0.09754573 + fVar11 * -0.4903927 + fVar37 * -0.2777855;
  fVar8 = fVar10 * 0.2777855 + fVar35 * -0.4903927 + fVar11 * 0.09754573 + fVar37 * 0.4157349;
  fVar10 = fVar10 * 0.09754573 + fVar35 * -0.2777855 + fVar11 * 0.4157349 + fVar37 * -0.4903927;
  param_1[0x38] = fVar4 + fVar3;
  param_1[0x39] = fVar6 + fVar5;
  param_1[0x3a] = fVar8 + fVar7;
  param_1[0x3b] = fVar10 + fVar16;
  param_1[0x3c] = fVar16 - fVar10;
  param_1[0x3d] = fVar7 - fVar8;
  param_1[0x3e] = fVar5 - fVar6;
  param_1[0x3f] = fVar3 - fVar4;
  lVar2 = 2;
  do {
    fVar4 = pfVar1[-8];
    fVar6 = pfVar1[-7];
    fVar10 = pfVar1[-6];
    fVar11 = pfVar1[-5];
    fVar8 = pfVar1[8];
    fVar16 = pfVar1[9];
    fVar35 = pfVar1[10];
    fVar37 = pfVar1[0xb];
    fVar3 = pfVar1[0x18];
    fVar5 = pfVar1[0x19];
    fVar7 = pfVar1[0x1a];
    fVar9 = pfVar1[0x1b];
    fVar12 = pfVar1[0x28];
    fVar13 = pfVar1[0x29];
    fVar14 = pfVar1[0x2a];
    fVar15 = pfVar1[0x2b];
    fVar29 = fVar4 * 0.4903927 + fVar8 * 0.4157349 + fVar12 * 0.09754573 + fVar3 * 0.2777855;
    fVar30 = fVar6 * 0.4903927 + fVar16 * 0.4157349 + fVar13 * 0.09754573 + fVar5 * 0.2777855;
    fVar31 = fVar10 * 0.4903927 + fVar35 * 0.4157349 + fVar14 * 0.09754573 + fVar7 * 0.2777855;
    fVar32 = fVar11 * 0.4903927 + fVar37 * 0.4157349 + fVar15 * 0.09754573 + fVar9 * 0.2777855;
    fVar21 = (fVar4 * 0.4157349 - fVar8 * 0.09754573) - (fVar12 * 0.2777855 + fVar3 * 0.4903927);
    fVar22 = (fVar6 * 0.4157349 - fVar16 * 0.09754573) - (fVar13 * 0.2777855 + fVar5 * 0.4903927);
    fVar23 = (fVar10 * 0.4157349 - fVar35 * 0.09754573) - (fVar14 * 0.2777855 + fVar7 * 0.4903927);
    fVar24 = (fVar11 * 0.4157349 - fVar37 * 0.09754573) - (fVar15 * 0.2777855 + fVar9 * 0.4903927);
    fVar17 = (fVar4 * 0.2777855 - fVar8 * 0.4903927) + fVar3 * 0.09754573 + fVar12 * 0.4157349;
    fVar18 = (fVar6 * 0.2777855 - fVar16 * 0.4903927) + fVar5 * 0.09754573 + fVar13 * 0.4157349;
    fVar19 = (fVar10 * 0.2777855 - fVar35 * 0.4903927) + fVar7 * 0.09754573 + fVar14 * 0.4157349;
    fVar20 = (fVar11 * 0.2777855 - fVar37 * 0.4903927) + fVar9 * 0.09754573 + fVar15 * 0.4157349;
    fVar25 = (fVar3 * 0.4157349 - fVar12 * 0.4903927) + (fVar4 * 0.09754573 - fVar8 * 0.2777855);
    fVar26 = (fVar5 * 0.4157349 - fVar13 * 0.4903927) + (fVar6 * 0.09754573 - fVar16 * 0.2777855);
    fVar27 = (fVar7 * 0.4157349 - fVar14 * 0.4903927) + (fVar10 * 0.09754573 - fVar35 * 0.2777855);
    fVar28 = (fVar9 * 0.4157349 - fVar15 * 0.4903927) + (fVar11 * 0.09754573 - fVar37 * 0.2777855);
    fVar4 = pfVar1[0x20] * 0.1913422 + *pfVar1 * 0.4619398;
    fVar6 = pfVar1[0x21] * 0.1913422 + pfVar1[1] * 0.4619398;
    fVar10 = pfVar1[0x22] * 0.1913422 + pfVar1[2] * 0.4619398;
    fVar11 = pfVar1[0x23] * 0.1913422 + pfVar1[3] * 0.4619398;
    fVar3 = *pfVar1 * 0.1913422 - pfVar1[0x20] * 0.4619398;
    fVar5 = pfVar1[1] * 0.1913422 - pfVar1[0x21] * 0.4619398;
    fVar7 = pfVar1[2] * 0.1913422 - pfVar1[0x22] * 0.4619398;
    fVar9 = pfVar1[3] * 0.1913422 - pfVar1[0x23] * 0.4619398;
    fVar8 = (pfVar1[-0x10] - pfVar1[0x10]) * 0.3535536;
    fVar16 = (pfVar1[-0xf] - pfVar1[0x11]) * 0.3535536;
    fVar35 = (pfVar1[-0xe] - pfVar1[0x12]) * 0.3535536;
    fVar37 = (pfVar1[-0xd] - pfVar1[0x13]) * 0.3535536;
    fVar12 = (pfVar1[-0x10] + pfVar1[0x10]) * 0.3535536;
    fVar13 = (pfVar1[-0xf] + pfVar1[0x11]) * 0.3535536;
    fVar14 = (pfVar1[-0xe] + pfVar1[0x12]) * 0.3535536;
    fVar15 = (pfVar1[-0xd] + pfVar1[0x13]) * 0.3535536;
    fVar33 = fVar8 - fVar3;
    fVar34 = fVar16 - fVar5;
    fVar36 = fVar35 - fVar7;
    fVar38 = fVar37 - fVar9;
    fVar8 = fVar8 + fVar3;
    fVar16 = fVar16 + fVar5;
    fVar35 = fVar35 + fVar7;
    fVar37 = fVar37 + fVar9;
    fVar3 = fVar4 + fVar12;
    fVar5 = fVar6 + fVar13;
    fVar7 = fVar10 + fVar14;
    fVar9 = fVar11 + fVar15;
    fVar12 = fVar12 - fVar4;
    fVar13 = fVar13 - fVar6;
    fVar14 = fVar14 - fVar10;
    fVar15 = fVar15 - fVar11;
    pfVar1[-0x10] = fVar29 + fVar3;
    pfVar1[-0xf] = fVar30 + fVar5;
    pfVar1[-0xe] = fVar31 + fVar7;
    pfVar1[-0xd] = fVar32 + fVar9;
    pfVar1[-8] = fVar21 + fVar8;
    pfVar1[-7] = fVar22 + fVar16;
    pfVar1[-6] = fVar23 + fVar35;
    pfVar1[-5] = fVar24 + fVar37;
    *pfVar1 = fVar17 + fVar33;
    pfVar1[1] = fVar18 + fVar34;
    pfVar1[2] = fVar19 + fVar36;
    pfVar1[3] = fVar20 + fVar38;
    pfVar1[8] = fVar25 + fVar12;
    pfVar1[9] = fVar26 + fVar13;
    pfVar1[10] = fVar27 + fVar14;
    pfVar1[0xb] = fVar28 + fVar15;
    pfVar1[0x10] = fVar12 - fVar25;
    pfVar1[0x11] = fVar13 - fVar26;
    pfVar1[0x12] = fVar14 - fVar27;
    pfVar1[0x13] = fVar15 - fVar28;
    pfVar1[0x18] = fVar33 - fVar17;
    pfVar1[0x19] = fVar34 - fVar18;
    pfVar1[0x1a] = fVar36 - fVar19;
    pfVar1[0x1b] = fVar38 - fVar20;
    pfVar1[0x20] = fVar8 - fVar21;
    pfVar1[0x21] = fVar16 - fVar22;
    pfVar1[0x22] = fVar35 - fVar23;
    pfVar1[0x23] = fVar37 - fVar24;
    pfVar1[0x28] = fVar3 - fVar29;
    pfVar1[0x29] = fVar5 - fVar30;
    pfVar1[0x2a] = fVar7 - fVar31;
    pfVar1[0x2b] = fVar9 - fVar32;
    pfVar1 = pfVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 144e5a650 FUN_144e5a650 body=1534 status=ok
// SIG undefined FUN_144e5a650(void)

void FUN_144e5a650(float *param_1)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
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
  float fVar36;
  float fVar37;
  float fVar38;
  
  fVar4 = *param_1;
  fVar10 = param_1[1];
  fVar6 = param_1[2];
  fVar11 = param_1[3];
  fVar8 = param_1[4];
  fVar12 = param_1[5];
  fVar18 = param_1[6];
  fVar13 = param_1[7];
  fVar14 = fVar4 * 0.3535536 + fVar6 * 0.4619398 + fVar8 * 0.3535536 + fVar18 * 0.1913422;
  fVar15 = fVar4 * 0.3535536 + fVar6 * 0.1913422 + fVar8 * -0.3535536 + fVar18 * -0.4619398;
  fVar16 = fVar4 * 0.3535536 + fVar6 * -0.1913422 + fVar8 * -0.3535536 + fVar18 * 0.4619398;
  fVar17 = fVar4 * 0.3535536 + fVar6 * -0.4619398 + fVar8 * 0.3535536 + fVar18 * -0.1913422;
  fVar4 = param_1[8];
  fVar6 = param_1[9];
  fVar8 = param_1[10];
  fVar18 = param_1[0xb];
  fVar3 = fVar10 * 0.4903927 + fVar11 * 0.4157349 + fVar12 * 0.2777855 + fVar13 * 0.09754573;
  fVar5 = fVar10 * 0.4157349 + fVar11 * -0.09754573 + fVar12 * -0.4903927 + fVar13 * -0.2777855;
  fVar7 = fVar10 * 0.2777855 + fVar11 * -0.4903927 + fVar12 * 0.09754573 + fVar13 * 0.4157349;
  fVar9 = fVar10 * 0.09754573 + fVar11 * -0.2777855 + fVar12 * 0.4157349 + fVar13 * -0.4903927;
  fVar10 = param_1[0xc];
  fVar11 = param_1[0xd];
  fVar12 = param_1[0xe];
  fVar13 = param_1[0xf];
  *param_1 = fVar3 + fVar14;
  param_1[1] = fVar5 + fVar15;
  param_1[2] = fVar7 + fVar16;
  param_1[3] = fVar9 + fVar17;
  param_1[4] = fVar17 - fVar9;
  param_1[5] = fVar16 - fVar7;
  param_1[6] = fVar15 - fVar5;
  param_1[7] = fVar14 - fVar3;
  fVar14 = fVar4 * 0.3535536 + fVar8 * 0.4619398 + fVar10 * 0.3535536 + fVar12 * 0.1913422;
  fVar15 = fVar4 * 0.3535536 + fVar8 * 0.1913422 + fVar10 * -0.3535536 + fVar12 * -0.4619398;
  fVar16 = fVar4 * 0.3535536 + fVar8 * -0.1913422 + fVar10 * -0.3535536 + fVar12 * 0.4619398;
  fVar17 = fVar4 * 0.3535536 + fVar8 * -0.4619398 + fVar10 * 0.3535536 + fVar12 * -0.1913422;
  fVar4 = param_1[0x10];
  fVar10 = param_1[0x11];
  fVar8 = param_1[0x12];
  fVar12 = param_1[0x13];
  pfVar1 = param_1 + 0x10;
  fVar3 = fVar6 * 0.4903927 + fVar18 * 0.4157349 + fVar11 * 0.2777855 + fVar13 * 0.09754573;
  fVar5 = fVar6 * 0.4157349 + fVar18 * -0.09754573 + fVar11 * -0.4903927 + fVar13 * -0.2777855;
  fVar7 = fVar6 * 0.2777855 + fVar18 * -0.4903927 + fVar11 * 0.09754573 + fVar13 * 0.4157349;
  fVar9 = fVar6 * 0.09754573 + fVar18 * -0.2777855 + fVar11 * 0.4157349 + fVar13 * -0.4903927;
  fVar6 = param_1[0x14];
  fVar11 = param_1[0x15];
  fVar18 = param_1[0x16];
  fVar13 = param_1[0x17];
  param_1[8] = fVar3 + fVar14;
  param_1[9] = fVar5 + fVar15;
  param_1[10] = fVar7 + fVar16;
  param_1[0xb] = fVar9 + fVar17;
  param_1[0xc] = fVar17 - fVar9;
  param_1[0xd] = fVar16 - fVar7;
  param_1[0xe] = fVar15 - fVar5;
  param_1[0xf] = fVar14 - fVar3;
  fVar14 = fVar4 * 0.3535536 + fVar8 * 0.4619398 + fVar6 * 0.3535536 + fVar18 * 0.1913422;
  fVar15 = fVar4 * 0.3535536 + fVar8 * 0.1913422 + fVar6 * -0.3535536 + fVar18 * -0.4619398;
  fVar16 = fVar4 * 0.3535536 + fVar8 * -0.1913422 + fVar6 * -0.3535536 + fVar18 * 0.4619398;
  fVar17 = fVar4 * 0.3535536 + fVar8 * -0.4619398 + fVar6 * 0.3535536 + fVar18 * -0.1913422;
  fVar4 = param_1[0x18];
  fVar6 = param_1[0x19];
  fVar8 = param_1[0x1a];
  fVar18 = param_1[0x1b];
  fVar3 = fVar10 * 0.4903927 + fVar12 * 0.4157349 + fVar11 * 0.2777855 + fVar13 * 0.09754573;
  fVar5 = fVar10 * 0.4157349 + fVar12 * -0.09754573 + fVar11 * -0.4903927 + fVar13 * -0.2777855;
  fVar7 = fVar10 * 0.2777855 + fVar12 * -0.4903927 + fVar11 * 0.09754573 + fVar13 * 0.4157349;
  fVar9 = fVar10 * 0.09754573 + fVar12 * -0.2777855 + fVar11 * 0.4157349 + fVar13 * -0.4903927;
  fVar10 = param_1[0x1c];
  fVar11 = param_1[0x1d];
  fVar12 = param_1[0x1e];
  fVar13 = param_1[0x1f];
  *pfVar1 = fVar3 + fVar14;
  param_1[0x11] = fVar5 + fVar15;
  param_1[0x12] = fVar7 + fVar16;
  param_1[0x13] = fVar9 + fVar17;
  param_1[0x14] = fVar17 - fVar9;
  param_1[0x15] = fVar16 - fVar7;
  param_1[0x16] = fVar15 - fVar5;
  param_1[0x17] = fVar14 - fVar3;
  fVar14 = fVar4 * 0.3535536 + fVar8 * 0.4619398 + fVar10 * 0.3535536 + fVar12 * 0.1913422;
  fVar15 = fVar4 * 0.3535536 + fVar8 * 0.1913422 + fVar10 * -0.3535536 + fVar12 * -0.4619398;
  fVar16 = fVar4 * 0.3535536 + fVar8 * -0.1913422 + fVar10 * -0.3535536 + fVar12 * 0.4619398;
  fVar17 = fVar4 * 0.3535536 + fVar8 * -0.4619398 + fVar10 * 0.3535536 + fVar12 * -0.1913422;
  fVar3 = fVar6 * 0.4903927 + fVar18 * 0.4157349 + fVar11 * 0.2777855 + fVar13 * 0.09754573;
  fVar5 = fVar6 * 0.4157349 + fVar18 * -0.09754573 + fVar11 * -0.4903927 + fVar13 * -0.2777855;
  fVar7 = fVar6 * 0.2777855 + fVar18 * -0.4903927 + fVar11 * 0.09754573 + fVar13 * 0.4157349;
  fVar9 = fVar6 * 0.09754573 + fVar18 * -0.2777855 + fVar11 * 0.4157349 + fVar13 * -0.4903927;
  param_1[0x18] = fVar3 + fVar14;
  param_1[0x19] = fVar5 + fVar15;
  param_1[0x1a] = fVar7 + fVar16;
  param_1[0x1b] = fVar9 + fVar17;
  fVar4 = param_1[0x20];
  fVar10 = param_1[0x21];
  fVar6 = param_1[0x22];
  fVar11 = param_1[0x23];
  fVar8 = param_1[0x24];
  fVar12 = param_1[0x25];
  fVar18 = param_1[0x26];
  fVar13 = param_1[0x27];
  param_1[0x1c] = fVar17 - fVar9;
  param_1[0x1d] = fVar16 - fVar7;
  param_1[0x1e] = fVar15 - fVar5;
  param_1[0x1f] = fVar14 - fVar3;
  fVar14 = fVar4 * 0.3535536 + fVar6 * 0.4619398 + fVar8 * 0.3535536 + fVar18 * 0.1913422;
  fVar15 = fVar4 * 0.3535536 + fVar6 * 0.1913422 + fVar8 * -0.3535536 + fVar18 * -0.4619398;
  fVar16 = fVar4 * 0.3535536 + fVar6 * -0.1913422 + fVar8 * -0.3535536 + fVar18 * 0.4619398;
  fVar17 = fVar4 * 0.3535536 + fVar6 * -0.4619398 + fVar8 * 0.3535536 + fVar18 * -0.1913422;
  fVar4 = param_1[0x28];
  fVar6 = param_1[0x29];
  fVar8 = param_1[0x2a];
  fVar18 = param_1[0x2b];
  fVar3 = fVar10 * 0.4903927 + fVar11 * 0.4157349 + fVar12 * 0.2777855 + fVar13 * 0.09754573;
  fVar5 = fVar10 * 0.4157349 + fVar11 * -0.09754573 + fVar12 * -0.4903927 + fVar13 * -0.2777855;
  fVar7 = fVar10 * 0.2777855 + fVar11 * -0.4903927 + fVar12 * 0.09754573 + fVar13 * 0.4157349;
  fVar9 = fVar10 * 0.09754573 + fVar11 * -0.2777855 + fVar12 * 0.4157349 + fVar13 * -0.4903927;
  fVar10 = param_1[0x2c];
  fVar11 = param_1[0x2d];
  fVar12 = param_1[0x2e];
  fVar13 = param_1[0x2f];
  param_1[0x20] = fVar3 + fVar14;
  param_1[0x21] = fVar5 + fVar15;
  param_1[0x22] = fVar7 + fVar16;
  param_1[0x23] = fVar9 + fVar17;
  param_1[0x24] = fVar17 - fVar9;
  param_1[0x25] = fVar16 - fVar7;
  param_1[0x26] = fVar15 - fVar5;
  param_1[0x27] = fVar14 - fVar3;
  fVar14 = fVar4 * 0.3535536 + fVar8 * 0.4619398 + fVar10 * 0.3535536 + fVar12 * 0.1913422;
  fVar15 = fVar4 * 0.3535536 + fVar8 * 0.1913422 + fVar10 * -0.3535536 + fVar12 * -0.4619398;
  fVar16 = fVar4 * 0.3535536 + fVar8 * -0.1913422 + fVar10 * -0.3535536 + fVar12 * 0.4619398;
  fVar17 = fVar4 * 0.3535536 + fVar8 * -0.4619398 + fVar10 * 0.3535536 + fVar12 * -0.1913422;
  fVar4 = param_1[0x30];
  fVar10 = param_1[0x31];
  fVar8 = param_1[0x32];
  fVar12 = param_1[0x33];
  fVar3 = fVar6 * 0.4903927 + fVar18 * 0.4157349 + fVar11 * 0.2777855 + fVar13 * 0.09754573;
  fVar5 = fVar6 * 0.4157349 + fVar18 * -0.09754573 + fVar11 * -0.4903927 + fVar13 * -0.2777855;
  fVar7 = fVar6 * 0.2777855 + fVar18 * -0.4903927 + fVar11 * 0.09754573 + fVar13 * 0.4157349;
  fVar9 = fVar6 * 0.09754573 + fVar18 * -0.2777855 + fVar11 * 0.4157349 + fVar13 * -0.4903927;
  fVar6 = param_1[0x34];
  fVar11 = param_1[0x35];
  fVar18 = param_1[0x36];
  fVar13 = param_1[0x37];
  param_1[0x28] = fVar3 + fVar14;
  param_1[0x29] = fVar5 + fVar15;
  param_1[0x2a] = fVar7 + fVar16;
  param_1[0x2b] = fVar9 + fVar17;
  param_1[0x2c] = fVar17 - fVar9;
  param_1[0x2d] = fVar16 - fVar7;
  param_1[0x2e] = fVar15 - fVar5;
  param_1[0x2f] = fVar14 - fVar3;
  fVar3 = fVar4 * 0.3535536 + fVar8 * 0.4619398 + fVar6 * 0.3535536 + fVar18 * 0.1913422;
  fVar5 = fVar4 * 0.3535536 + fVar8 * 0.1913422 + fVar6 * -0.3535536 + fVar18 * -0.4619398;
  fVar7 = fVar4 * 0.3535536 + fVar8 * -0.1913422 + fVar6 * -0.3535536 + fVar18 * 0.4619398;
  fVar18 = fVar4 * 0.3535536 + fVar8 * -0.4619398 + fVar6 * 0.3535536 + fVar18 * -0.1913422;
  fVar4 = fVar10 * 0.4903927 + fVar12 * 0.4157349 + fVar11 * 0.2777855 + fVar13 * 0.09754573;
  fVar6 = fVar10 * 0.4157349 + fVar12 * -0.09754573 + fVar11 * -0.4903927 + fVar13 * -0.2777855;
  fVar8 = fVar10 * 0.2777855 + fVar12 * -0.4903927 + fVar11 * 0.09754573 + fVar13 * 0.4157349;
  fVar10 = fVar10 * 0.09754573 + fVar12 * -0.2777855 + fVar11 * 0.4157349 + fVar13 * -0.4903927;
  param_1[0x30] = fVar4 + fVar3;
  param_1[0x31] = fVar6 + fVar5;
  param_1[0x32] = fVar8 + fVar7;
  param_1[0x33] = fVar10 + fVar18;
  param_1[0x34] = fVar18 - fVar10;
  param_1[0x35] = fVar7 - fVar8;
  param_1[0x36] = fVar5 - fVar6;
  param_1[0x37] = fVar3 - fVar4;
  lVar2 = 2;
  do {
    fVar4 = pfVar1[-8];
    fVar10 = pfVar1[-7];
    fVar6 = pfVar1[-6];
    fVar11 = pfVar1[-5];
    fVar8 = pfVar1[8];
    fVar12 = pfVar1[9];
    fVar18 = pfVar1[10];
    fVar13 = pfVar1[0xb];
    fVar3 = pfVar1[0x18];
    fVar5 = pfVar1[0x19];
    fVar7 = pfVar1[0x1a];
    fVar9 = pfVar1[0x1b];
    fVar14 = pfVar1[0x28];
    fVar15 = pfVar1[0x29];
    fVar16 = pfVar1[0x2a];
    fVar17 = pfVar1[0x2b];
    fVar27 = fVar8 * 0.4157349 + fVar4 * 0.4903927 + fVar14 * 0.09754573 + fVar3 * 0.2777855;
    fVar28 = fVar12 * 0.4157349 + fVar10 * 0.4903927 + fVar15 * 0.09754573 + fVar5 * 0.2777855;
    fVar29 = fVar18 * 0.4157349 + fVar6 * 0.4903927 + fVar16 * 0.09754573 + fVar7 * 0.2777855;
    fVar30 = fVar13 * 0.4157349 + fVar11 * 0.4903927 + fVar17 * 0.09754573 + fVar9 * 0.2777855;
    fVar23 = (fVar4 * 0.4157349 - fVar8 * 0.09754573) - (fVar14 * 0.2777855 + fVar3 * 0.4903927);
    fVar24 = (fVar10 * 0.4157349 - fVar12 * 0.09754573) - (fVar15 * 0.2777855 + fVar5 * 0.4903927);
    fVar25 = (fVar6 * 0.4157349 - fVar18 * 0.09754573) - (fVar16 * 0.2777855 + fVar7 * 0.4903927);
    fVar26 = (fVar11 * 0.4157349 - fVar13 * 0.09754573) - (fVar17 * 0.2777855 + fVar9 * 0.4903927);
    fVar19 = (fVar4 * 0.2777855 - fVar8 * 0.4903927) + fVar14 * 0.4157349 + fVar3 * 0.09754573;
    fVar20 = (fVar10 * 0.2777855 - fVar12 * 0.4903927) + fVar15 * 0.4157349 + fVar5 * 0.09754573;
    fVar21 = (fVar6 * 0.2777855 - fVar18 * 0.4903927) + fVar16 * 0.4157349 + fVar7 * 0.09754573;
    fVar22 = (fVar11 * 0.2777855 - fVar13 * 0.4903927) + fVar17 * 0.4157349 + fVar9 * 0.09754573;
    fVar31 = (fVar4 * 0.09754573 - fVar8 * 0.2777855) + (fVar3 * 0.4157349 - fVar14 * 0.4903927);
    fVar32 = (fVar10 * 0.09754573 - fVar12 * 0.2777855) + (fVar5 * 0.4157349 - fVar15 * 0.4903927);
    fVar33 = (fVar6 * 0.09754573 - fVar18 * 0.2777855) + (fVar7 * 0.4157349 - fVar16 * 0.4903927);
    fVar34 = (fVar11 * 0.09754573 - fVar13 * 0.2777855) + (fVar9 * 0.4157349 - fVar17 * 0.4903927);
    fVar3 = (pfVar1[0x10] + pfVar1[-0x10]) * 0.3535536;
    fVar5 = (pfVar1[0x11] + pfVar1[-0xf]) * 0.3535536;
    fVar7 = (pfVar1[0x12] + pfVar1[-0xe]) * 0.3535536;
    fVar9 = (pfVar1[0x13] + pfVar1[-0xd]) * 0.3535536;
    fVar35 = (pfVar1[-0x10] - pfVar1[0x10]) * 0.3535536;
    fVar36 = (pfVar1[-0xf] - pfVar1[0x11]) * 0.3535536;
    fVar37 = (pfVar1[-0xe] - pfVar1[0x12]) * 0.3535536;
    fVar38 = (pfVar1[-0xd] - pfVar1[0x13]) * 0.3535536;
    fVar4 = pfVar1[0x20] * 0.1913422 + *pfVar1 * 0.4619398;
    fVar10 = pfVar1[0x21] * 0.1913422 + pfVar1[1] * 0.4619398;
    fVar6 = pfVar1[0x22] * 0.1913422 + pfVar1[2] * 0.4619398;
    fVar11 = pfVar1[0x23] * 0.1913422 + pfVar1[3] * 0.4619398;
    fVar14 = *pfVar1 * 0.1913422 - pfVar1[0x20] * 0.4619398;
    fVar15 = pfVar1[1] * 0.1913422 - pfVar1[0x21] * 0.4619398;
    fVar16 = pfVar1[2] * 0.1913422 - pfVar1[0x22] * 0.4619398;
    fVar17 = pfVar1[3] * 0.1913422 - pfVar1[0x23] * 0.4619398;
    fVar8 = fVar4 + fVar3;
    fVar12 = fVar10 + fVar5;
    fVar18 = fVar6 + fVar7;
    fVar13 = fVar11 + fVar9;
    fVar3 = fVar3 - fVar4;
    fVar5 = fVar5 - fVar10;
    fVar7 = fVar7 - fVar6;
    fVar9 = fVar9 - fVar11;
    fVar4 = fVar14 + fVar35;
    fVar10 = fVar15 + fVar36;
    fVar6 = fVar16 + fVar37;
    fVar11 = fVar17 + fVar38;
    fVar35 = fVar35 - fVar14;
    fVar36 = fVar36 - fVar15;
    fVar37 = fVar37 - fVar16;
    fVar38 = fVar38 - fVar17;
    pfVar1[-0x10] = fVar8 + fVar27;
    pfVar1[-0xf] = fVar12 + fVar28;
    pfVar1[-0xe] = fVar18 + fVar29;
    pfVar1[-0xd] = fVar13 + fVar30;
    pfVar1[-8] = fVar4 + fVar23;
    pfVar1[-7] = fVar10 + fVar24;
    pfVar1[-6] = fVar6 + fVar25;
    pfVar1[-5] = fVar11 + fVar26;
    *pfVar1 = fVar35 + fVar19;
    pfVar1[1] = fVar36 + fVar20;
    pfVar1[2] = fVar37 + fVar21;
    pfVar1[3] = fVar38 + fVar22;
    pfVar1[0x10] = fVar3 - fVar31;
    pfVar1[0x11] = fVar5 - fVar32;
    pfVar1[0x12] = fVar7 - fVar33;
    pfVar1[0x13] = fVar9 - fVar34;
    pfVar1[8] = fVar3 + fVar31;
    pfVar1[9] = fVar5 + fVar32;
    pfVar1[10] = fVar7 + fVar33;
    pfVar1[0xb] = fVar9 + fVar34;
    pfVar1[0x18] = fVar35 - fVar19;
    pfVar1[0x19] = fVar36 - fVar20;
    pfVar1[0x1a] = fVar37 - fVar21;
    pfVar1[0x1b] = fVar38 - fVar22;
    pfVar1[0x20] = fVar4 - fVar23;
    pfVar1[0x21] = fVar10 - fVar24;
    pfVar1[0x22] = fVar6 - fVar25;
    pfVar1[0x23] = fVar11 - fVar26;
    pfVar1[0x28] = fVar8 - fVar27;
    pfVar1[0x29] = fVar12 - fVar28;
    pfVar1[0x2a] = fVar18 - fVar29;
    pfVar1[0x2b] = fVar13 - fVar30;
    pfVar1 = pfVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 144e5ac50 FUN_144e5ac50 body=1390 status=ok
// SIG undefined FUN_144e5ac50(void)

void FUN_144e5ac50(float *param_1)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
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
  float fVar36;
  float fVar37;
  float fVar38;
  
  fVar4 = *param_1;
  fVar6 = param_1[1];
  fVar10 = param_1[2];
  fVar11 = param_1[3];
  fVar8 = param_1[4];
  fVar21 = param_1[5];
  fVar12 = param_1[6];
  fVar13 = param_1[7];
  fVar14 = fVar4 * 0.3535536 + fVar10 * 0.4619398 + fVar8 * 0.3535536 + fVar12 * 0.1913422;
  fVar16 = fVar4 * 0.3535536 + fVar10 * 0.1913422 + fVar8 * -0.3535536 + fVar12 * -0.4619398;
  fVar18 = fVar4 * 0.3535536 + fVar10 * -0.1913422 + fVar8 * -0.3535536 + fVar12 * 0.4619398;
  fVar20 = fVar4 * 0.3535536 + fVar10 * -0.4619398 + fVar8 * 0.3535536 + fVar12 * -0.1913422;
  fVar4 = param_1[8];
  fVar10 = param_1[9];
  fVar8 = param_1[10];
  fVar12 = param_1[0xb];
  fVar3 = fVar6 * 0.4903927 + fVar11 * 0.4157349 + fVar21 * 0.2777855 + fVar13 * 0.09754573;
  fVar5 = fVar6 * 0.4157349 + fVar11 * -0.09754573 + fVar21 * -0.4903927 + fVar13 * -0.2777855;
  fVar7 = fVar6 * 0.2777855 + fVar11 * -0.4903927 + fVar21 * 0.09754573 + fVar13 * 0.4157349;
  fVar9 = fVar6 * 0.09754573 + fVar11 * -0.2777855 + fVar21 * 0.4157349 + fVar13 * -0.4903927;
  fVar6 = param_1[0xc];
  fVar11 = param_1[0xd];
  fVar21 = param_1[0xe];
  fVar13 = param_1[0xf];
  *param_1 = fVar3 + fVar14;
  param_1[1] = fVar5 + fVar16;
  param_1[2] = fVar7 + fVar18;
  param_1[3] = fVar9 + fVar20;
  param_1[4] = fVar20 - fVar9;
  param_1[5] = fVar18 - fVar7;
  param_1[6] = fVar16 - fVar5;
  param_1[7] = fVar14 - fVar3;
  fVar14 = fVar4 * 0.3535536 + fVar8 * 0.4619398 + fVar6 * 0.3535536 + fVar21 * 0.1913422;
  fVar16 = fVar4 * 0.3535536 + fVar8 * 0.1913422 + fVar6 * -0.3535536 + fVar21 * -0.4619398;
  fVar18 = fVar4 * 0.3535536 + fVar8 * -0.1913422 + fVar6 * -0.3535536 + fVar21 * 0.4619398;
  fVar20 = fVar4 * 0.3535536 + fVar8 * -0.4619398 + fVar6 * 0.3535536 + fVar21 * -0.1913422;
  fVar4 = param_1[0x10];
  fVar6 = param_1[0x11];
  fVar8 = param_1[0x12];
  fVar21 = param_1[0x13];
  pfVar1 = param_1 + 0x10;
  fVar3 = fVar10 * 0.4903927 + fVar12 * 0.4157349 + fVar11 * 0.2777855 + fVar13 * 0.09754573;
  fVar5 = fVar10 * 0.4157349 + fVar12 * -0.09754573 + fVar11 * -0.4903927 + fVar13 * -0.2777855;
  fVar7 = fVar10 * 0.2777855 + fVar12 * -0.4903927 + fVar11 * 0.09754573 + fVar13 * 0.4157349;
  fVar9 = fVar10 * 0.09754573 + fVar12 * -0.2777855 + fVar11 * 0.4157349 + fVar13 * -0.4903927;
  fVar10 = param_1[0x14];
  fVar11 = param_1[0x15];
  fVar12 = param_1[0x16];
  fVar13 = param_1[0x17];
  param_1[8] = fVar3 + fVar14;
  param_1[9] = fVar5 + fVar16;
  param_1[10] = fVar7 + fVar18;
  param_1[0xb] = fVar9 + fVar20;
  param_1[0xc] = fVar20 - fVar9;
  param_1[0xd] = fVar18 - fVar7;
  param_1[0xe] = fVar16 - fVar5;
  param_1[0xf] = fVar14 - fVar3;
  fVar14 = fVar4 * 0.3535536 + fVar8 * 0.4619398 + fVar10 * 0.3535536 + fVar12 * 0.1913422;
  fVar16 = fVar4 * 0.3535536 + fVar8 * 0.1913422 + fVar10 * -0.3535536 + fVar12 * -0.4619398;
  fVar18 = fVar4 * 0.3535536 + fVar8 * -0.1913422 + fVar10 * -0.3535536 + fVar12 * 0.4619398;
  fVar20 = fVar4 * 0.3535536 + fVar8 * -0.4619398 + fVar10 * 0.3535536 + fVar12 * -0.1913422;
  fVar4 = param_1[0x18];
  fVar10 = param_1[0x19];
  fVar8 = param_1[0x1a];
  fVar12 = param_1[0x1b];
  fVar3 = fVar6 * 0.4903927 + fVar21 * 0.4157349 + fVar11 * 0.2777855 + fVar13 * 0.09754573;
  fVar5 = fVar6 * 0.4157349 + fVar21 * -0.09754573 + fVar11 * -0.4903927 + fVar13 * -0.2777855;
  fVar7 = fVar6 * 0.2777855 + fVar21 * -0.4903927 + fVar11 * 0.09754573 + fVar13 * 0.4157349;
  fVar9 = fVar6 * 0.09754573 + fVar21 * -0.2777855 + fVar11 * 0.4157349 + fVar13 * -0.4903927;
  fVar6 = param_1[0x1c];
  fVar11 = param_1[0x1d];
  fVar21 = param_1[0x1e];
  fVar13 = param_1[0x1f];
  *pfVar1 = fVar3 + fVar14;
  param_1[0x11] = fVar5 + fVar16;
  param_1[0x12] = fVar7 + fVar18;
  param_1[0x13] = fVar9 + fVar20;
  param_1[0x14] = fVar20 - fVar9;
  param_1[0x15] = fVar18 - fVar7;
  param_1[0x16] = fVar16 - fVar5;
  param_1[0x17] = fVar14 - fVar3;
  fVar14 = fVar4 * 0.3535536 + fVar8 * 0.4619398 + fVar6 * 0.3535536 + fVar21 * 0.1913422;
  fVar16 = fVar4 * 0.3535536 + fVar8 * 0.1913422 + fVar6 * -0.3535536 + fVar21 * -0.4619398;
  fVar18 = fVar4 * 0.3535536 + fVar8 * -0.1913422 + fVar6 * -0.3535536 + fVar21 * 0.4619398;
  fVar20 = fVar4 * 0.3535536 + fVar8 * -0.4619398 + fVar6 * 0.3535536 + fVar21 * -0.1913422;
  fVar3 = fVar10 * 0.4903927 + fVar12 * 0.4157349 + fVar11 * 0.2777855 + fVar13 * 0.09754573;
  fVar5 = fVar10 * 0.4157349 + fVar12 * -0.09754573 + fVar11 * -0.4903927 + fVar13 * -0.2777855;
  fVar7 = fVar10 * 0.2777855 + fVar12 * -0.4903927 + fVar11 * 0.09754573 + fVar13 * 0.4157349;
  fVar9 = fVar10 * 0.09754573 + fVar12 * -0.2777855 + fVar11 * 0.4157349 + fVar13 * -0.4903927;
  param_1[0x18] = fVar3 + fVar14;
  param_1[0x19] = fVar5 + fVar16;
  param_1[0x1a] = fVar7 + fVar18;
  param_1[0x1b] = fVar9 + fVar20;
  fVar4 = param_1[0x20];
  fVar6 = param_1[0x21];
  fVar10 = param_1[0x22];
  fVar11 = param_1[0x23];
  fVar8 = param_1[0x24];
  fVar21 = param_1[0x25];
  fVar12 = param_1[0x26];
  fVar13 = param_1[0x27];
  param_1[0x1c] = fVar20 - fVar9;
  param_1[0x1d] = fVar18 - fVar7;
  param_1[0x1e] = fVar16 - fVar5;
  param_1[0x1f] = fVar14 - fVar3;
  fVar14 = fVar4 * 0.3535536 + fVar10 * 0.4619398 + fVar8 * 0.3535536 + fVar12 * 0.1913422;
  fVar16 = fVar4 * 0.3535536 + fVar10 * 0.1913422 + fVar8 * -0.3535536 + fVar12 * -0.4619398;
  fVar18 = fVar4 * 0.3535536 + fVar10 * -0.1913422 + fVar8 * -0.3535536 + fVar12 * 0.4619398;
  fVar20 = fVar4 * 0.3535536 + fVar10 * -0.4619398 + fVar8 * 0.3535536 + fVar12 * -0.1913422;
  fVar4 = param_1[0x28];
  fVar10 = param_1[0x29];
  fVar8 = param_1[0x2a];
  fVar12 = param_1[0x2b];
  fVar3 = fVar6 * 0.4903927 + fVar11 * 0.4157349 + fVar21 * 0.2777855 + fVar13 * 0.09754573;
  fVar5 = fVar6 * 0.4157349 + fVar11 * -0.09754573 + fVar21 * -0.4903927 + fVar13 * -0.2777855;
  fVar7 = fVar6 * 0.2777855 + fVar11 * -0.4903927 + fVar21 * 0.09754573 + fVar13 * 0.4157349;
  fVar9 = fVar6 * 0.09754573 + fVar11 * -0.2777855 + fVar21 * 0.4157349 + fVar13 * -0.4903927;
  fVar6 = param_1[0x2c];
  fVar11 = param_1[0x2d];
  fVar21 = param_1[0x2e];
  fVar13 = param_1[0x2f];
  param_1[0x20] = fVar3 + fVar14;
  param_1[0x21] = fVar5 + fVar16;
  param_1[0x22] = fVar7 + fVar18;
  param_1[0x23] = fVar9 + fVar20;
  param_1[0x24] = fVar20 - fVar9;
  param_1[0x25] = fVar18 - fVar7;
  param_1[0x26] = fVar16 - fVar5;
  param_1[0x27] = fVar14 - fVar3;
  fVar3 = fVar4 * 0.3535536 + fVar8 * 0.4619398 + fVar6 * 0.3535536 + fVar21 * 0.1913422;
  fVar5 = fVar4 * 0.3535536 + fVar8 * 0.1913422 + fVar6 * -0.3535536 + fVar21 * -0.4619398;
  fVar7 = fVar4 * 0.3535536 + fVar8 * -0.1913422 + fVar6 * -0.3535536 + fVar21 * 0.4619398;
  fVar21 = fVar4 * 0.3535536 + fVar8 * -0.4619398 + fVar6 * 0.3535536 + fVar21 * -0.1913422;
  fVar4 = fVar10 * 0.4903927 + fVar12 * 0.4157349 + fVar11 * 0.2777855 + fVar13 * 0.09754573;
  fVar6 = fVar10 * 0.4157349 + fVar12 * -0.09754573 + fVar11 * -0.4903927 + fVar13 * -0.2777855;
  fVar8 = fVar10 * 0.2777855 + fVar12 * -0.4903927 + fVar11 * 0.09754573 + fVar13 * 0.4157349;
  fVar10 = fVar10 * 0.09754573 + fVar12 * -0.2777855 + fVar11 * 0.4157349 + fVar13 * -0.4903927;
  param_1[0x28] = fVar4 + fVar3;
  param_1[0x29] = fVar6 + fVar5;
  param_1[0x2a] = fVar8 + fVar7;
  param_1[0x2b] = fVar10 + fVar21;
  param_1[0x2c] = fVar21 - fVar10;
  param_1[0x2d] = fVar7 - fVar8;
  param_1[0x2e] = fVar5 - fVar6;
  param_1[0x2f] = fVar3 - fVar4;
  lVar2 = 2;
  do {
    fVar4 = pfVar1[-8];
    fVar6 = pfVar1[-7];
    fVar10 = pfVar1[-6];
    fVar11 = pfVar1[-5];
    fVar8 = pfVar1[8];
    fVar21 = pfVar1[9];
    fVar12 = pfVar1[10];
    fVar13 = pfVar1[0xb];
    fVar3 = pfVar1[0x18];
    fVar5 = pfVar1[0x19];
    fVar7 = pfVar1[0x1a];
    fVar9 = pfVar1[0x1b];
    fVar14 = pfVar1[0x28];
    fVar16 = pfVar1[0x29];
    fVar18 = pfVar1[0x2a];
    fVar20 = pfVar1[0x2b];
    fVar31 = fVar8 * 0.4157349 + fVar4 * 0.4903927 + fVar3 * 0.2777855 + fVar14 * 0.09754573;
    fVar32 = fVar21 * 0.4157349 + fVar6 * 0.4903927 + fVar5 * 0.2777855 + fVar16 * 0.09754573;
    fVar33 = fVar12 * 0.4157349 + fVar10 * 0.4903927 + fVar7 * 0.2777855 + fVar18 * 0.09754573;
    fVar34 = fVar13 * 0.4157349 + fVar11 * 0.4903927 + fVar9 * 0.2777855 + fVar20 * 0.09754573;
    fVar23 = (fVar4 * 0.4157349 - fVar8 * 0.09754573) - (fVar3 * 0.4903927 + fVar14 * 0.2777855);
    fVar24 = (fVar6 * 0.4157349 - fVar21 * 0.09754573) - (fVar5 * 0.4903927 + fVar16 * 0.2777855);
    fVar25 = (fVar10 * 0.4157349 - fVar12 * 0.09754573) - (fVar7 * 0.4903927 + fVar18 * 0.2777855);
    fVar26 = (fVar11 * 0.4157349 - fVar13 * 0.09754573) - (fVar9 * 0.4903927 + fVar20 * 0.2777855);
    fVar27 = (fVar3 * 0.4157349 - fVar14 * 0.4903927) + (fVar4 * 0.09754573 - fVar8 * 0.2777855);
    fVar28 = (fVar5 * 0.4157349 - fVar16 * 0.4903927) + (fVar6 * 0.09754573 - fVar21 * 0.2777855);
    fVar29 = (fVar7 * 0.4157349 - fVar18 * 0.4903927) + (fVar10 * 0.09754573 - fVar12 * 0.2777855);
    fVar30 = (fVar9 * 0.4157349 - fVar20 * 0.4903927) + (fVar11 * 0.09754573 - fVar13 * 0.2777855);
    fVar15 = (pfVar1[-0x10] + pfVar1[0x10]) * 0.3535536;
    fVar17 = (pfVar1[-0xf] + pfVar1[0x11]) * 0.3535536;
    fVar19 = (pfVar1[-0xe] + pfVar1[0x12]) * 0.3535536;
    fVar22 = (pfVar1[-0xd] + pfVar1[0x13]) * 0.3535536;
    fVar3 = fVar3 * 0.09754573 + fVar14 * 0.4157349 + (fVar4 * 0.2777855 - fVar8 * 0.4903927);
    fVar5 = fVar5 * 0.09754573 + fVar16 * 0.4157349 + (fVar6 * 0.2777855 - fVar21 * 0.4903927);
    fVar7 = fVar7 * 0.09754573 + fVar18 * 0.4157349 + (fVar10 * 0.2777855 - fVar12 * 0.4903927);
    fVar9 = fVar9 * 0.09754573 + fVar20 * 0.4157349 + (fVar11 * 0.2777855 - fVar13 * 0.4903927);
    fVar35 = (pfVar1[-0x10] - pfVar1[0x10]) * 0.3535536;
    fVar36 = (pfVar1[-0xf] - pfVar1[0x11]) * 0.3535536;
    fVar37 = (pfVar1[-0xe] - pfVar1[0x12]) * 0.3535536;
    fVar38 = (pfVar1[-0xd] - pfVar1[0x13]) * 0.3535536;
    fVar4 = pfVar1[0x20] * 0.1913422 + *pfVar1 * 0.4619398;
    fVar6 = pfVar1[0x21] * 0.1913422 + pfVar1[1] * 0.4619398;
    fVar10 = pfVar1[0x22] * 0.1913422 + pfVar1[2] * 0.4619398;
    fVar11 = pfVar1[0x23] * 0.1913422 + pfVar1[3] * 0.4619398;
    fVar14 = *pfVar1 * 0.1913422 - pfVar1[0x20] * 0.4619398;
    fVar16 = pfVar1[1] * 0.1913422 - pfVar1[0x21] * 0.4619398;
    fVar18 = pfVar1[2] * 0.1913422 - pfVar1[0x22] * 0.4619398;
    fVar20 = pfVar1[3] * 0.1913422 - pfVar1[0x23] * 0.4619398;
    fVar8 = fVar4 + fVar15;
    fVar21 = fVar6 + fVar17;
    fVar12 = fVar10 + fVar19;
    fVar13 = fVar11 + fVar22;
    fVar15 = fVar15 - fVar4;
    fVar17 = fVar17 - fVar6;
    fVar19 = fVar19 - fVar10;
    fVar22 = fVar22 - fVar11;
    fVar4 = fVar14 + fVar35;
    fVar6 = fVar16 + fVar36;
    fVar10 = fVar18 + fVar37;
    fVar11 = fVar20 + fVar38;
    fVar35 = fVar35 - fVar14;
    fVar36 = fVar36 - fVar16;
    fVar37 = fVar37 - fVar18;
    fVar38 = fVar38 - fVar20;
    pfVar1[-0x10] = fVar8 + fVar31;
    pfVar1[-0xf] = fVar21 + fVar32;
    pfVar1[-0xe] = fVar12 + fVar33;
    pfVar1[-0xd] = fVar13 + fVar34;
    pfVar1[-8] = fVar4 + fVar23;
    pfVar1[-7] = fVar6 + fVar24;
    pfVar1[-6] = fVar10 + fVar25;
    pfVar1[-5] = fVar11 + fVar26;
    *pfVar1 = fVar35 + fVar3;
    pfVar1[1] = fVar36 + fVar5;
    pfVar1[2] = fVar37 + fVar7;
    pfVar1[3] = fVar38 + fVar9;
    pfVar1[0x10] = fVar15 - fVar27;
    pfVar1[0x11] = fVar17 - fVar28;
    pfVar1[0x12] = fVar19 - fVar29;
    pfVar1[0x13] = fVar22 - fVar30;
    pfVar1[8] = fVar15 + fVar27;
    pfVar1[9] = fVar17 + fVar28;
    pfVar1[10] = fVar19 + fVar29;
    pfVar1[0xb] = fVar22 + fVar30;
    pfVar1[0x18] = fVar35 - fVar3;
    pfVar1[0x19] = fVar36 - fVar5;
    pfVar1[0x1a] = fVar37 - fVar7;
    pfVar1[0x1b] = fVar38 - fVar9;
    pfVar1[0x20] = fVar4 - fVar23;
    pfVar1[0x21] = fVar6 - fVar24;
    pfVar1[0x22] = fVar10 - fVar25;
    pfVar1[0x23] = fVar11 - fVar26;
    pfVar1[0x28] = fVar8 - fVar31;
    pfVar1[0x29] = fVar21 - fVar32;
    pfVar1[0x2a] = fVar12 - fVar33;
    pfVar1[0x2b] = fVar13 - fVar34;
    pfVar1 = pfVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 144e5b1c0 FUN_144e5b1c0 body=1262 status=ok
// SIG undefined FUN_144e5b1c0(void)

void FUN_144e5b1c0(float *param_1)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
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
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  
  fVar4 = *param_1;
  fVar13 = param_1[1];
  fVar7 = param_1[2];
  fVar15 = param_1[3];
  fVar10 = param_1[4];
  fVar16 = param_1[5];
  fVar25 = param_1[6];
  fVar17 = param_1[7];
  fVar18 = fVar4 * 0.3535536 + fVar7 * 0.4619398 + fVar10 * 0.3535536 + fVar25 * 0.1913422;
  fVar20 = fVar4 * 0.3535536 + fVar7 * 0.1913422 + fVar10 * -0.3535536 + fVar25 * -0.4619398;
  fVar22 = fVar4 * 0.3535536 + fVar7 * -0.1913422 + fVar10 * -0.3535536 + fVar25 * 0.4619398;
  fVar24 = fVar4 * 0.3535536 + fVar7 * -0.4619398 + fVar10 * 0.3535536 + fVar25 * -0.1913422;
  fVar4 = param_1[8];
  fVar7 = param_1[9];
  fVar10 = param_1[10];
  fVar25 = param_1[0xb];
  fVar3 = fVar13 * 0.4903927 + fVar15 * 0.4157349 + fVar16 * 0.2777855 + fVar17 * 0.09754573;
  fVar6 = fVar13 * 0.4157349 + fVar15 * -0.09754573 + fVar16 * -0.4903927 + fVar17 * -0.2777855;
  fVar9 = fVar13 * 0.2777855 + fVar15 * -0.4903927 + fVar16 * 0.09754573 + fVar17 * 0.4157349;
  fVar12 = fVar13 * 0.09754573 + fVar15 * -0.2777855 + fVar16 * 0.4157349 + fVar17 * -0.4903927;
  fVar13 = param_1[0xc];
  fVar15 = param_1[0xd];
  fVar16 = param_1[0xe];
  fVar17 = param_1[0xf];
  *param_1 = fVar3 + fVar18;
  param_1[1] = fVar6 + fVar20;
  param_1[2] = fVar9 + fVar22;
  param_1[3] = fVar12 + fVar24;
  param_1[4] = fVar24 - fVar12;
  param_1[5] = fVar22 - fVar9;
  param_1[6] = fVar20 - fVar6;
  param_1[7] = fVar18 - fVar3;
  fVar18 = fVar4 * 0.3535536 + fVar10 * 0.4619398 + fVar13 * 0.3535536 + fVar16 * 0.1913422;
  fVar20 = fVar4 * 0.3535536 + fVar10 * 0.1913422 + fVar13 * -0.3535536 + fVar16 * -0.4619398;
  fVar22 = fVar4 * 0.3535536 + fVar10 * -0.1913422 + fVar13 * -0.3535536 + fVar16 * 0.4619398;
  fVar24 = fVar4 * 0.3535536 + fVar10 * -0.4619398 + fVar13 * 0.3535536 + fVar16 * -0.1913422;
  fVar4 = param_1[0x10];
  fVar13 = param_1[0x11];
  fVar10 = param_1[0x12];
  fVar16 = param_1[0x13];
  pfVar1 = param_1 + 0x10;
  fVar3 = fVar7 * 0.4903927 + fVar25 * 0.4157349 + fVar15 * 0.2777855 + fVar17 * 0.09754573;
  fVar6 = fVar7 * 0.4157349 + fVar25 * -0.09754573 + fVar15 * -0.4903927 + fVar17 * -0.2777855;
  fVar9 = fVar7 * 0.2777855 + fVar25 * -0.4903927 + fVar15 * 0.09754573 + fVar17 * 0.4157349;
  fVar12 = fVar7 * 0.09754573 + fVar25 * -0.2777855 + fVar15 * 0.4157349 + fVar17 * -0.4903927;
  fVar7 = param_1[0x14];
  fVar15 = param_1[0x15];
  fVar25 = param_1[0x16];
  fVar17 = param_1[0x17];
  param_1[8] = fVar3 + fVar18;
  param_1[9] = fVar6 + fVar20;
  param_1[10] = fVar9 + fVar22;
  param_1[0xb] = fVar12 + fVar24;
  param_1[0xc] = fVar24 - fVar12;
  param_1[0xd] = fVar22 - fVar9;
  param_1[0xe] = fVar20 - fVar6;
  param_1[0xf] = fVar18 - fVar3;
  fVar18 = fVar4 * 0.3535536 + fVar10 * 0.4619398 + fVar7 * 0.3535536 + fVar25 * 0.1913422;
  fVar20 = fVar4 * 0.3535536 + fVar10 * 0.1913422 + fVar7 * -0.3535536 + fVar25 * -0.4619398;
  fVar22 = fVar4 * 0.3535536 + fVar10 * -0.1913422 + fVar7 * -0.3535536 + fVar25 * 0.4619398;
  fVar24 = fVar4 * 0.3535536 + fVar10 * -0.4619398 + fVar7 * 0.3535536 + fVar25 * -0.1913422;
  fVar4 = param_1[0x18];
  fVar7 = param_1[0x19];
  fVar10 = param_1[0x1a];
  fVar25 = param_1[0x1b];
  fVar3 = fVar13 * 0.4903927 + fVar16 * 0.4157349 + fVar15 * 0.2777855 + fVar17 * 0.09754573;
  fVar6 = fVar13 * 0.4157349 + fVar16 * -0.09754573 + fVar15 * -0.4903927 + fVar17 * -0.2777855;
  fVar9 = fVar13 * 0.2777855 + fVar16 * -0.4903927 + fVar15 * 0.09754573 + fVar17 * 0.4157349;
  fVar12 = fVar13 * 0.09754573 + fVar16 * -0.2777855 + fVar15 * 0.4157349 + fVar17 * -0.4903927;
  fVar13 = param_1[0x1c];
  fVar15 = param_1[0x1d];
  fVar16 = param_1[0x1e];
  fVar17 = param_1[0x1f];
  *pfVar1 = fVar3 + fVar18;
  param_1[0x11] = fVar6 + fVar20;
  param_1[0x12] = fVar9 + fVar22;
  param_1[0x13] = fVar12 + fVar24;
  param_1[0x14] = fVar24 - fVar12;
  param_1[0x15] = fVar22 - fVar9;
  param_1[0x16] = fVar20 - fVar6;
  param_1[0x17] = fVar18 - fVar3;
  fVar18 = fVar4 * 0.3535536 + fVar10 * 0.4619398 + fVar13 * 0.3535536 + fVar16 * 0.1913422;
  fVar20 = fVar4 * 0.3535536 + fVar10 * 0.1913422 + fVar13 * -0.3535536 + fVar16 * -0.4619398;
  fVar22 = fVar4 * 0.3535536 + fVar10 * -0.1913422 + fVar13 * -0.3535536 + fVar16 * 0.4619398;
  fVar24 = fVar4 * 0.3535536 + fVar10 * -0.4619398 + fVar13 * 0.3535536 + fVar16 * -0.1913422;
  fVar3 = fVar7 * 0.4903927 + fVar25 * 0.4157349 + fVar15 * 0.2777855 + fVar17 * 0.09754573;
  fVar6 = fVar7 * 0.4157349 + fVar25 * -0.09754573 + fVar15 * -0.4903927 + fVar17 * -0.2777855;
  fVar9 = fVar7 * 0.2777855 + fVar25 * -0.4903927 + fVar15 * 0.09754573 + fVar17 * 0.4157349;
  fVar12 = fVar7 * 0.09754573 + fVar25 * -0.2777855 + fVar15 * 0.4157349 + fVar17 * -0.4903927;
  param_1[0x18] = fVar3 + fVar18;
  param_1[0x19] = fVar6 + fVar20;
  param_1[0x1a] = fVar9 + fVar22;
  param_1[0x1b] = fVar12 + fVar24;
  fVar4 = param_1[0x20];
  fVar13 = param_1[0x21];
  fVar7 = param_1[0x22];
  fVar15 = param_1[0x23];
  fVar10 = param_1[0x24];
  fVar16 = param_1[0x25];
  fVar25 = param_1[0x26];
  fVar17 = param_1[0x27];
  param_1[0x1c] = fVar24 - fVar12;
  param_1[0x1d] = fVar22 - fVar9;
  param_1[0x1e] = fVar20 - fVar6;
  param_1[0x1f] = fVar18 - fVar3;
  fVar3 = fVar4 * 0.3535536 + fVar7 * 0.4619398 + fVar10 * 0.3535536 + fVar25 * 0.1913422;
  fVar6 = fVar4 * 0.3535536 + fVar7 * 0.1913422 + fVar10 * -0.3535536 + fVar25 * -0.4619398;
  fVar9 = fVar4 * 0.3535536 + fVar7 * -0.1913422 + fVar10 * -0.3535536 + fVar25 * 0.4619398;
  fVar25 = fVar4 * 0.3535536 + fVar7 * -0.4619398 + fVar10 * 0.3535536 + fVar25 * -0.1913422;
  fVar4 = fVar13 * 0.4903927 + fVar15 * 0.4157349 + fVar16 * 0.2777855 + fVar17 * 0.09754573;
  fVar7 = fVar13 * 0.4157349 + fVar15 * -0.09754573 + fVar16 * -0.4903927 + fVar17 * -0.2777855;
  fVar10 = fVar13 * 0.2777855 + fVar15 * -0.4903927 + fVar16 * 0.09754573 + fVar17 * 0.4157349;
  fVar13 = fVar13 * 0.09754573 + fVar15 * -0.2777855 + fVar16 * 0.4157349 + fVar17 * -0.4903927;
  param_1[0x20] = fVar4 + fVar3;
  param_1[0x21] = fVar7 + fVar6;
  param_1[0x22] = fVar10 + fVar9;
  param_1[0x23] = fVar13 + fVar25;
  param_1[0x24] = fVar25 - fVar13;
  param_1[0x25] = fVar9 - fVar10;
  param_1[0x26] = fVar6 - fVar7;
  param_1[0x27] = fVar3 - fVar4;
  lVar2 = 2;
  do {
    fVar4 = pfVar1[-8];
    fVar13 = pfVar1[-7];
    fVar7 = pfVar1[-6];
    fVar15 = pfVar1[-5];
    fVar10 = pfVar1[8];
    fVar16 = pfVar1[9];
    fVar25 = pfVar1[10];
    fVar17 = pfVar1[0xb];
    fVar3 = pfVar1[0x18];
    fVar6 = pfVar1[0x19];
    fVar9 = pfVar1[0x1a];
    fVar12 = pfVar1[0x1b];
    fVar18 = pfVar1[0x28];
    fVar20 = pfVar1[0x29];
    fVar22 = pfVar1[0x2a];
    fVar24 = pfVar1[0x2b];
    fVar35 = fVar10 * 0.4157349 + fVar4 * 0.4903927 + fVar18 * 0.09754573 + fVar3 * 0.2777855;
    fVar36 = fVar16 * 0.4157349 + fVar13 * 0.4903927 + fVar20 * 0.09754573 + fVar6 * 0.2777855;
    fVar37 = fVar25 * 0.4157349 + fVar7 * 0.4903927 + fVar22 * 0.09754573 + fVar9 * 0.2777855;
    fVar38 = fVar17 * 0.4157349 + fVar15 * 0.4903927 + fVar24 * 0.09754573 + fVar12 * 0.2777855;
    fVar31 = (fVar4 * 0.4157349 - fVar10 * 0.09754573) - (fVar18 * 0.2777855 + fVar3 * 0.4903927);
    fVar32 = (fVar13 * 0.4157349 - fVar16 * 0.09754573) - (fVar20 * 0.2777855 + fVar6 * 0.4903927);
    fVar33 = (fVar7 * 0.4157349 - fVar25 * 0.09754573) - (fVar22 * 0.2777855 + fVar9 * 0.4903927);
    fVar34 = (fVar15 * 0.4157349 - fVar17 * 0.09754573) - (fVar24 * 0.2777855 + fVar12 * 0.4903927);
    fVar19 = (pfVar1[-0x10] + pfVar1[0x10]) * 0.3535536;
    fVar21 = (pfVar1[-0xf] + pfVar1[0x11]) * 0.3535536;
    fVar23 = (pfVar1[-0xe] + pfVar1[0x12]) * 0.3535536;
    fVar26 = (pfVar1[-0xd] + pfVar1[0x13]) * 0.3535536;
    fVar39 = (pfVar1[-0x10] - pfVar1[0x10]) * 0.3535536;
    fVar40 = (pfVar1[-0xf] - pfVar1[0x11]) * 0.3535536;
    fVar41 = (pfVar1[-0xe] - pfVar1[0x12]) * 0.3535536;
    fVar42 = (pfVar1[-0xd] - pfVar1[0x13]) * 0.3535536;
    fVar27 = (fVar4 * 0.2777855 - fVar10 * 0.4903927) + fVar3 * 0.09754573 + fVar18 * 0.4157349;
    fVar28 = (fVar13 * 0.2777855 - fVar16 * 0.4903927) + fVar6 * 0.09754573 + fVar20 * 0.4157349;
    fVar29 = (fVar7 * 0.2777855 - fVar25 * 0.4903927) + fVar9 * 0.09754573 + fVar22 * 0.4157349;
    fVar30 = (fVar15 * 0.2777855 - fVar17 * 0.4903927) + fVar12 * 0.09754573 + fVar24 * 0.4157349;
    fVar5 = pfVar1[0x20] * 0.1913422 + *pfVar1 * 0.4619398;
    fVar8 = pfVar1[0x21] * 0.1913422 + pfVar1[1] * 0.4619398;
    fVar11 = pfVar1[0x22] * 0.1913422 + pfVar1[2] * 0.4619398;
    fVar14 = pfVar1[0x23] * 0.1913422 + pfVar1[3] * 0.4619398;
    fVar18 = (fVar3 * 0.4157349 - fVar18 * 0.4903927) + (fVar4 * 0.09754573 - fVar10 * 0.2777855);
    fVar20 = (fVar6 * 0.4157349 - fVar20 * 0.4903927) + (fVar13 * 0.09754573 - fVar16 * 0.2777855);
    fVar22 = (fVar9 * 0.4157349 - fVar22 * 0.4903927) + (fVar7 * 0.09754573 - fVar25 * 0.2777855);
    fVar24 = (fVar12 * 0.4157349 - fVar24 * 0.4903927) + (fVar15 * 0.09754573 - fVar17 * 0.2777855);
    fVar3 = *pfVar1 * 0.1913422 - pfVar1[0x20] * 0.4619398;
    fVar6 = pfVar1[1] * 0.1913422 - pfVar1[0x21] * 0.4619398;
    fVar9 = pfVar1[2] * 0.1913422 - pfVar1[0x22] * 0.4619398;
    fVar12 = pfVar1[3] * 0.1913422 - pfVar1[0x23] * 0.4619398;
    fVar10 = fVar5 + fVar19;
    fVar16 = fVar8 + fVar21;
    fVar25 = fVar11 + fVar23;
    fVar17 = fVar14 + fVar26;
    fVar19 = fVar19 - fVar5;
    fVar21 = fVar21 - fVar8;
    fVar23 = fVar23 - fVar11;
    fVar26 = fVar26 - fVar14;
    fVar4 = fVar3 + fVar39;
    fVar13 = fVar6 + fVar40;
    fVar7 = fVar9 + fVar41;
    fVar15 = fVar12 + fVar42;
    fVar39 = fVar39 - fVar3;
    fVar40 = fVar40 - fVar6;
    fVar41 = fVar41 - fVar9;
    fVar42 = fVar42 - fVar12;
    pfVar1[-0x10] = fVar10 + fVar35;
    pfVar1[-0xf] = fVar16 + fVar36;
    pfVar1[-0xe] = fVar25 + fVar37;
    pfVar1[-0xd] = fVar17 + fVar38;
    pfVar1[-8] = fVar4 + fVar31;
    pfVar1[-7] = fVar13 + fVar32;
    pfVar1[-6] = fVar7 + fVar33;
    pfVar1[-5] = fVar15 + fVar34;
    *pfVar1 = fVar39 + fVar27;
    pfVar1[1] = fVar40 + fVar28;
    pfVar1[2] = fVar41 + fVar29;
    pfVar1[3] = fVar42 + fVar30;
    pfVar1[0x10] = fVar19 - fVar18;
    pfVar1[0x11] = fVar21 - fVar20;
    pfVar1[0x12] = fVar23 - fVar22;
    pfVar1[0x13] = fVar26 - fVar24;
    pfVar1[8] = fVar19 + fVar18;
    pfVar1[9] = fVar21 + fVar20;
    pfVar1[10] = fVar23 + fVar22;
    pfVar1[0xb] = fVar26 + fVar24;
    pfVar1[0x18] = fVar39 - fVar27;
    pfVar1[0x19] = fVar40 - fVar28;
    pfVar1[0x1a] = fVar41 - fVar29;
    pfVar1[0x1b] = fVar42 - fVar30;
    pfVar1[0x20] = fVar4 - fVar31;
    pfVar1[0x21] = fVar13 - fVar32;
    pfVar1[0x22] = fVar7 - fVar33;
    pfVar1[0x23] = fVar15 - fVar34;
    pfVar1[0x28] = fVar10 - fVar35;
    pfVar1[0x29] = fVar16 - fVar36;
    pfVar1[0x2a] = fVar25 - fVar37;
    pfVar1[0x2b] = fVar17 - fVar38;
    pfVar1 = pfVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 144e5b6b0 FUN_144e5b6b0 body=1119 status=ok
// SIG undefined FUN_144e5b6b0(void)

void FUN_144e5b6b0(float *param_1)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
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
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  
  fVar4 = *param_1;
  fVar7 = param_1[1];
  fVar13 = param_1[2];
  fVar15 = param_1[3];
  fVar10 = param_1[4];
  fVar25 = param_1[5];
  fVar16 = param_1[6];
  fVar17 = param_1[7];
  fVar18 = fVar4 * 0.3535536 + fVar13 * 0.4619398 + fVar10 * 0.3535536 + fVar16 * 0.1913422;
  fVar20 = fVar4 * 0.3535536 + fVar13 * 0.1913422 + fVar10 * -0.3535536 + fVar16 * -0.4619398;
  fVar22 = fVar4 * 0.3535536 + fVar13 * -0.1913422 + fVar10 * -0.3535536 + fVar16 * 0.4619398;
  fVar24 = fVar4 * 0.3535536 + fVar13 * -0.4619398 + fVar10 * 0.3535536 + fVar16 * -0.1913422;
  fVar4 = param_1[8];
  fVar13 = param_1[9];
  fVar10 = param_1[10];
  fVar16 = param_1[0xb];
  fVar3 = fVar7 * 0.4903927 + fVar15 * 0.4157349 + fVar25 * 0.2777855 + fVar17 * 0.09754573;
  fVar6 = fVar7 * 0.4157349 + fVar15 * -0.09754573 + fVar25 * -0.4903927 + fVar17 * -0.2777855;
  fVar9 = fVar7 * 0.2777855 + fVar15 * -0.4903927 + fVar25 * 0.09754573 + fVar17 * 0.4157349;
  fVar12 = fVar7 * 0.09754573 + fVar15 * -0.2777855 + fVar25 * 0.4157349 + fVar17 * -0.4903927;
  fVar7 = param_1[0xc];
  fVar15 = param_1[0xd];
  fVar25 = param_1[0xe];
  fVar17 = param_1[0xf];
  *param_1 = fVar3 + fVar18;
  param_1[1] = fVar6 + fVar20;
  param_1[2] = fVar9 + fVar22;
  param_1[3] = fVar12 + fVar24;
  param_1[4] = fVar24 - fVar12;
  param_1[5] = fVar22 - fVar9;
  param_1[6] = fVar20 - fVar6;
  param_1[7] = fVar18 - fVar3;
  fVar18 = fVar4 * 0.3535536 + fVar10 * 0.4619398 + fVar7 * 0.3535536 + fVar25 * 0.1913422;
  fVar20 = fVar4 * 0.3535536 + fVar10 * 0.1913422 + fVar7 * -0.3535536 + fVar25 * -0.4619398;
  fVar22 = fVar4 * 0.3535536 + fVar10 * -0.1913422 + fVar7 * -0.3535536 + fVar25 * 0.4619398;
  fVar24 = fVar4 * 0.3535536 + fVar10 * -0.4619398 + fVar7 * 0.3535536 + fVar25 * -0.1913422;
  fVar4 = param_1[0x10];
  fVar7 = param_1[0x11];
  fVar10 = param_1[0x12];
  fVar25 = param_1[0x13];
  pfVar1 = param_1 + 0x10;
  fVar3 = fVar13 * 0.4903927 + fVar16 * 0.4157349 + fVar15 * 0.2777855 + fVar17 * 0.09754573;
  fVar6 = fVar13 * 0.4157349 + fVar16 * -0.09754573 + fVar15 * -0.4903927 + fVar17 * -0.2777855;
  fVar9 = fVar13 * 0.2777855 + fVar16 * -0.4903927 + fVar15 * 0.09754573 + fVar17 * 0.4157349;
  fVar12 = fVar13 * 0.09754573 + fVar16 * -0.2777855 + fVar15 * 0.4157349 + fVar17 * -0.4903927;
  fVar13 = param_1[0x14];
  fVar15 = param_1[0x15];
  fVar16 = param_1[0x16];
  fVar17 = param_1[0x17];
  param_1[8] = fVar3 + fVar18;
  param_1[9] = fVar6 + fVar20;
  param_1[10] = fVar9 + fVar22;
  param_1[0xb] = fVar12 + fVar24;
  param_1[0xc] = fVar24 - fVar12;
  param_1[0xd] = fVar22 - fVar9;
  param_1[0xe] = fVar20 - fVar6;
  param_1[0xf] = fVar18 - fVar3;
  fVar18 = fVar4 * 0.3535536 + fVar10 * 0.4619398 + fVar13 * 0.3535536 + fVar16 * 0.1913422;
  fVar20 = fVar4 * 0.3535536 + fVar10 * 0.1913422 + fVar13 * -0.3535536 + fVar16 * -0.4619398;
  fVar22 = fVar4 * 0.3535536 + fVar10 * -0.1913422 + fVar13 * -0.3535536 + fVar16 * 0.4619398;
  fVar24 = fVar4 * 0.3535536 + fVar10 * -0.4619398 + fVar13 * 0.3535536 + fVar16 * -0.1913422;
  fVar4 = param_1[0x18];
  fVar13 = param_1[0x19];
  fVar10 = param_1[0x1a];
  fVar16 = param_1[0x1b];
  fVar3 = fVar7 * 0.4903927 + fVar25 * 0.4157349 + fVar15 * 0.2777855 + fVar17 * 0.09754573;
  fVar6 = fVar7 * 0.4157349 + fVar25 * -0.09754573 + fVar15 * -0.4903927 + fVar17 * -0.2777855;
  fVar9 = fVar7 * 0.2777855 + fVar25 * -0.4903927 + fVar15 * 0.09754573 + fVar17 * 0.4157349;
  fVar12 = fVar7 * 0.09754573 + fVar25 * -0.2777855 + fVar15 * 0.4157349 + fVar17 * -0.4903927;
  fVar7 = param_1[0x1c];
  fVar15 = param_1[0x1d];
  fVar25 = param_1[0x1e];
  fVar17 = param_1[0x1f];
  *pfVar1 = fVar3 + fVar18;
  param_1[0x11] = fVar6 + fVar20;
  param_1[0x12] = fVar9 + fVar22;
  param_1[0x13] = fVar12 + fVar24;
  param_1[0x14] = fVar24 - fVar12;
  param_1[0x15] = fVar22 - fVar9;
  param_1[0x16] = fVar20 - fVar6;
  param_1[0x17] = fVar18 - fVar3;
  fVar3 = fVar4 * 0.3535536 + fVar10 * 0.4619398 + fVar7 * 0.3535536 + fVar25 * 0.1913422;
  fVar6 = fVar4 * 0.3535536 + fVar10 * 0.1913422 + fVar7 * -0.3535536 + fVar25 * -0.4619398;
  fVar9 = fVar4 * 0.3535536 + fVar10 * -0.1913422 + fVar7 * -0.3535536 + fVar25 * 0.4619398;
  fVar25 = fVar4 * 0.3535536 + fVar10 * -0.4619398 + fVar7 * 0.3535536 + fVar25 * -0.1913422;
  fVar4 = fVar13 * 0.4903927 + fVar16 * 0.4157349 + fVar15 * 0.2777855 + fVar17 * 0.09754573;
  fVar7 = fVar13 * 0.4157349 + fVar16 * -0.09754573 + fVar15 * -0.4903927 + fVar17 * -0.2777855;
  fVar10 = fVar13 * 0.2777855 + fVar16 * -0.4903927 + fVar15 * 0.09754573 + fVar17 * 0.4157349;
  fVar13 = fVar13 * 0.09754573 + fVar16 * -0.2777855 + fVar15 * 0.4157349 + fVar17 * -0.4903927;
  param_1[0x18] = fVar4 + fVar3;
  param_1[0x19] = fVar7 + fVar6;
  param_1[0x1a] = fVar10 + fVar9;
  param_1[0x1b] = fVar13 + fVar25;
  param_1[0x1c] = fVar25 - fVar13;
  param_1[0x1d] = fVar9 - fVar10;
  param_1[0x1e] = fVar6 - fVar7;
  param_1[0x1f] = fVar3 - fVar4;
  lVar2 = 2;
  do {
    fVar4 = pfVar1[0x18];
    fVar7 = pfVar1[0x19];
    fVar13 = pfVar1[0x1a];
    fVar15 = pfVar1[0x1b];
    fVar10 = pfVar1[0x28];
    fVar25 = pfVar1[0x29];
    fVar16 = pfVar1[0x2a];
    fVar17 = pfVar1[0x2b];
    fVar3 = pfVar1[-8];
    fVar6 = pfVar1[-7];
    fVar9 = pfVar1[-6];
    fVar12 = pfVar1[-5];
    fVar18 = pfVar1[8];
    fVar20 = pfVar1[9];
    fVar22 = pfVar1[10];
    fVar24 = pfVar1[0xb];
    fVar35 = fVar10 * 0.09754573 + fVar4 * 0.2777855 + fVar18 * 0.4157349 + fVar3 * 0.4903927;
    fVar36 = fVar25 * 0.09754573 + fVar7 * 0.2777855 + fVar20 * 0.4157349 + fVar6 * 0.4903927;
    fVar37 = fVar16 * 0.09754573 + fVar13 * 0.2777855 + fVar22 * 0.4157349 + fVar9 * 0.4903927;
    fVar38 = fVar17 * 0.09754573 + fVar15 * 0.2777855 + fVar24 * 0.4157349 + fVar12 * 0.4903927;
    fVar31 = (fVar3 * 0.4157349 - fVar18 * 0.09754573) - (fVar10 * 0.2777855 + fVar4 * 0.4903927);
    fVar32 = (fVar6 * 0.4157349 - fVar20 * 0.09754573) - (fVar25 * 0.2777855 + fVar7 * 0.4903927);
    fVar33 = (fVar9 * 0.4157349 - fVar22 * 0.09754573) - (fVar16 * 0.2777855 + fVar13 * 0.4903927);
    fVar34 = (fVar12 * 0.4157349 - fVar24 * 0.09754573) - (fVar17 * 0.2777855 + fVar15 * 0.4903927);
    fVar19 = (pfVar1[0x10] + pfVar1[-0x10]) * 0.3535536;
    fVar21 = (pfVar1[0x11] + pfVar1[-0xf]) * 0.3535536;
    fVar23 = (pfVar1[0x12] + pfVar1[-0xe]) * 0.3535536;
    fVar26 = (pfVar1[0x13] + pfVar1[-0xd]) * 0.3535536;
    fVar39 = (pfVar1[-0x10] - pfVar1[0x10]) * 0.3535536;
    fVar40 = (pfVar1[-0xf] - pfVar1[0x11]) * 0.3535536;
    fVar41 = (pfVar1[-0xe] - pfVar1[0x12]) * 0.3535536;
    fVar42 = (pfVar1[-0xd] - pfVar1[0x13]) * 0.3535536;
    fVar27 = (fVar3 * 0.2777855 - fVar18 * 0.4903927) + fVar10 * 0.4157349 + fVar4 * 0.09754573;
    fVar28 = (fVar6 * 0.2777855 - fVar20 * 0.4903927) + fVar25 * 0.4157349 + fVar7 * 0.09754573;
    fVar29 = (fVar9 * 0.2777855 - fVar22 * 0.4903927) + fVar16 * 0.4157349 + fVar13 * 0.09754573;
    fVar30 = (fVar12 * 0.2777855 - fVar24 * 0.4903927) + fVar17 * 0.4157349 + fVar15 * 0.09754573;
    fVar5 = *pfVar1 * 0.4619398 + pfVar1[0x20] * 0.1913422;
    fVar8 = pfVar1[1] * 0.4619398 + pfVar1[0x21] * 0.1913422;
    fVar11 = pfVar1[2] * 0.4619398 + pfVar1[0x22] * 0.1913422;
    fVar14 = pfVar1[3] * 0.4619398 + pfVar1[0x23] * 0.1913422;
    fVar18 = (fVar4 * 0.4157349 - fVar10 * 0.4903927) + (fVar3 * 0.09754573 - fVar18 * 0.2777855);
    fVar20 = (fVar7 * 0.4157349 - fVar25 * 0.4903927) + (fVar6 * 0.09754573 - fVar20 * 0.2777855);
    fVar22 = (fVar13 * 0.4157349 - fVar16 * 0.4903927) + (fVar9 * 0.09754573 - fVar22 * 0.2777855);
    fVar24 = (fVar15 * 0.4157349 - fVar17 * 0.4903927) + (fVar12 * 0.09754573 - fVar24 * 0.2777855);
    fVar3 = *pfVar1 * 0.1913422 - pfVar1[0x20] * 0.4619398;
    fVar6 = pfVar1[1] * 0.1913422 - pfVar1[0x21] * 0.4619398;
    fVar9 = pfVar1[2] * 0.1913422 - pfVar1[0x22] * 0.4619398;
    fVar12 = pfVar1[3] * 0.1913422 - pfVar1[0x23] * 0.4619398;
    fVar10 = fVar5 + fVar19;
    fVar25 = fVar8 + fVar21;
    fVar16 = fVar11 + fVar23;
    fVar17 = fVar14 + fVar26;
    fVar19 = fVar19 - fVar5;
    fVar21 = fVar21 - fVar8;
    fVar23 = fVar23 - fVar11;
    fVar26 = fVar26 - fVar14;
    fVar4 = fVar3 + fVar39;
    fVar7 = fVar6 + fVar40;
    fVar13 = fVar9 + fVar41;
    fVar15 = fVar12 + fVar42;
    fVar39 = fVar39 - fVar3;
    fVar40 = fVar40 - fVar6;
    fVar41 = fVar41 - fVar9;
    fVar42 = fVar42 - fVar12;
    pfVar1[-0x10] = fVar10 + fVar35;
    pfVar1[-0xf] = fVar25 + fVar36;
    pfVar1[-0xe] = fVar16 + fVar37;
    pfVar1[-0xd] = fVar17 + fVar38;
    pfVar1[-8] = fVar4 + fVar31;
    pfVar1[-7] = fVar7 + fVar32;
    pfVar1[-6] = fVar13 + fVar33;
    pfVar1[-5] = fVar15 + fVar34;
    *pfVar1 = fVar39 + fVar27;
    pfVar1[1] = fVar40 + fVar28;
    pfVar1[2] = fVar41 + fVar29;
    pfVar1[3] = fVar42 + fVar30;
    pfVar1[0x10] = fVar19 - fVar18;
    pfVar1[0x11] = fVar21 - fVar20;
    pfVar1[0x12] = fVar23 - fVar22;
    pfVar1[0x13] = fVar26 - fVar24;
    pfVar1[8] = fVar19 + fVar18;
    pfVar1[9] = fVar21 + fVar20;
    pfVar1[10] = fVar23 + fVar22;
    pfVar1[0xb] = fVar26 + fVar24;
    pfVar1[0x18] = fVar39 - fVar27;
    pfVar1[0x19] = fVar40 - fVar28;
    pfVar1[0x1a] = fVar41 - fVar29;
    pfVar1[0x1b] = fVar42 - fVar30;
    pfVar1[0x20] = fVar4 - fVar31;
    pfVar1[0x21] = fVar7 - fVar32;
    pfVar1[0x22] = fVar13 - fVar33;
    pfVar1[0x23] = fVar15 - fVar34;
    pfVar1[0x28] = fVar10 - fVar35;
    pfVar1[0x29] = fVar25 - fVar36;
    pfVar1[0x2a] = fVar16 - fVar37;
    pfVar1[0x2b] = fVar17 - fVar38;
    pfVar1 = pfVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 144e5bb10 FUN_144e5bb10 body=990 status=ok
// SIG undefined FUN_144e5bb10(void)

void FUN_144e5bb10(float *param_1)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
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
  float fVar36;
  float fVar37;
  float fVar38;
  
  fVar4 = *param_1;
  fVar10 = param_1[1];
  fVar6 = param_1[2];
  fVar11 = param_1[3];
  fVar8 = param_1[4];
  fVar12 = param_1[5];
  fVar21 = param_1[6];
  fVar13 = param_1[7];
  fVar14 = fVar4 * 0.3535536 + fVar6 * 0.4619398 + fVar8 * 0.3535536 + fVar21 * 0.1913422;
  fVar16 = fVar4 * 0.3535536 + fVar6 * 0.1913422 + fVar8 * -0.3535536 + fVar21 * -0.4619398;
  fVar18 = fVar4 * 0.3535536 + fVar6 * -0.1913422 + fVar8 * -0.3535536 + fVar21 * 0.4619398;
  fVar20 = fVar4 * 0.3535536 + fVar6 * -0.4619398 + fVar8 * 0.3535536 + fVar21 * -0.1913422;
  fVar4 = param_1[8];
  fVar6 = param_1[9];
  fVar8 = param_1[10];
  fVar21 = param_1[0xb];
  fVar3 = fVar10 * 0.4903927 + fVar11 * 0.4157349 + fVar12 * 0.2777855 + fVar13 * 0.09754573;
  fVar5 = fVar10 * 0.4157349 + fVar11 * -0.09754573 + fVar12 * -0.4903927 + fVar13 * -0.2777855;
  fVar7 = fVar10 * 0.2777855 + fVar11 * -0.4903927 + fVar12 * 0.09754573 + fVar13 * 0.4157349;
  fVar9 = fVar10 * 0.09754573 + fVar11 * -0.2777855 + fVar12 * 0.4157349 + fVar13 * -0.4903927;
  fVar10 = param_1[0xc];
  fVar11 = param_1[0xd];
  fVar12 = param_1[0xe];
  fVar13 = param_1[0xf];
  *param_1 = fVar3 + fVar14;
  param_1[1] = fVar5 + fVar16;
  param_1[2] = fVar7 + fVar18;
  param_1[3] = fVar9 + fVar20;
  param_1[4] = fVar20 - fVar9;
  param_1[5] = fVar18 - fVar7;
  param_1[6] = fVar16 - fVar5;
  param_1[7] = fVar14 - fVar3;
  fVar14 = fVar4 * 0.3535536 + fVar8 * 0.4619398 + fVar10 * 0.3535536 + fVar12 * 0.1913422;
  fVar16 = fVar4 * 0.3535536 + fVar8 * 0.1913422 + fVar10 * -0.3535536 + fVar12 * -0.4619398;
  fVar18 = fVar4 * 0.3535536 + fVar8 * -0.1913422 + fVar10 * -0.3535536 + fVar12 * 0.4619398;
  fVar20 = fVar4 * 0.3535536 + fVar8 * -0.4619398 + fVar10 * 0.3535536 + fVar12 * -0.1913422;
  fVar4 = param_1[0x10];
  fVar10 = param_1[0x11];
  fVar8 = param_1[0x12];
  fVar12 = param_1[0x13];
  pfVar1 = param_1 + 0x10;
  fVar3 = fVar6 * 0.4903927 + fVar21 * 0.4157349 + fVar11 * 0.2777855 + fVar13 * 0.09754573;
  fVar5 = fVar6 * 0.4157349 + fVar21 * -0.09754573 + fVar11 * -0.4903927 + fVar13 * -0.2777855;
  fVar7 = fVar6 * 0.2777855 + fVar21 * -0.4903927 + fVar11 * 0.09754573 + fVar13 * 0.4157349;
  fVar9 = fVar6 * 0.09754573 + fVar21 * -0.2777855 + fVar11 * 0.4157349 + fVar13 * -0.4903927;
  fVar6 = param_1[0x14];
  fVar11 = param_1[0x15];
  fVar21 = param_1[0x16];
  fVar13 = param_1[0x17];
  param_1[8] = fVar3 + fVar14;
  param_1[9] = fVar5 + fVar16;
  param_1[10] = fVar7 + fVar18;
  param_1[0xb] = fVar9 + fVar20;
  param_1[0xc] = fVar20 - fVar9;
  param_1[0xd] = fVar18 - fVar7;
  param_1[0xe] = fVar16 - fVar5;
  param_1[0xf] = fVar14 - fVar3;
  fVar3 = fVar4 * 0.3535536 + fVar8 * 0.4619398 + fVar6 * 0.3535536 + fVar21 * 0.1913422;
  fVar5 = fVar4 * 0.3535536 + fVar8 * 0.1913422 + fVar6 * -0.3535536 + fVar21 * -0.4619398;
  fVar7 = fVar4 * 0.3535536 + fVar8 * -0.1913422 + fVar6 * -0.3535536 + fVar21 * 0.4619398;
  fVar21 = fVar4 * 0.3535536 + fVar8 * -0.4619398 + fVar6 * 0.3535536 + fVar21 * -0.1913422;
  fVar4 = fVar10 * 0.4903927 + fVar12 * 0.4157349 + fVar11 * 0.2777855 + fVar13 * 0.09754573;
  fVar6 = fVar10 * 0.4157349 + fVar12 * -0.09754573 + fVar11 * -0.4903927 + fVar13 * -0.2777855;
  fVar8 = fVar10 * 0.2777855 + fVar12 * -0.4903927 + fVar11 * 0.09754573 + fVar13 * 0.4157349;
  fVar10 = fVar10 * 0.09754573 + fVar12 * -0.2777855 + fVar11 * 0.4157349 + fVar13 * -0.4903927;
  *pfVar1 = fVar4 + fVar3;
  param_1[0x11] = fVar6 + fVar5;
  param_1[0x12] = fVar8 + fVar7;
  param_1[0x13] = fVar10 + fVar21;
  param_1[0x14] = fVar21 - fVar10;
  param_1[0x15] = fVar7 - fVar8;
  param_1[0x16] = fVar5 - fVar6;
  param_1[0x17] = fVar3 - fVar4;
  lVar2 = 2;
  do {
    fVar4 = pfVar1[-8];
    fVar10 = pfVar1[-7];
    fVar6 = pfVar1[-6];
    fVar11 = pfVar1[-5];
    fVar8 = pfVar1[8];
    fVar12 = pfVar1[9];
    fVar21 = pfVar1[10];
    fVar13 = pfVar1[0xb];
    fVar3 = pfVar1[0x18];
    fVar5 = pfVar1[0x19];
    fVar7 = pfVar1[0x1a];
    fVar9 = pfVar1[0x1b];
    fVar14 = pfVar1[0x28];
    fVar16 = pfVar1[0x29];
    fVar18 = pfVar1[0x2a];
    fVar20 = pfVar1[0x2b];
    fVar31 = fVar8 * 0.4157349 + fVar4 * 0.4903927 + fVar14 * 0.09754573 + fVar3 * 0.2777855;
    fVar32 = fVar12 * 0.4157349 + fVar10 * 0.4903927 + fVar16 * 0.09754573 + fVar5 * 0.2777855;
    fVar33 = fVar21 * 0.4157349 + fVar6 * 0.4903927 + fVar18 * 0.09754573 + fVar7 * 0.2777855;
    fVar34 = fVar13 * 0.4157349 + fVar11 * 0.4903927 + fVar20 * 0.09754573 + fVar9 * 0.2777855;
    fVar23 = (fVar4 * 0.4157349 - fVar8 * 0.09754573) - (fVar14 * 0.2777855 + fVar3 * 0.4903927);
    fVar24 = (fVar10 * 0.4157349 - fVar12 * 0.09754573) - (fVar16 * 0.2777855 + fVar5 * 0.4903927);
    fVar25 = (fVar6 * 0.4157349 - fVar21 * 0.09754573) - (fVar18 * 0.2777855 + fVar7 * 0.4903927);
    fVar26 = (fVar11 * 0.4157349 - fVar13 * 0.09754573) - (fVar20 * 0.2777855 + fVar9 * 0.4903927);
    fVar27 = (fVar3 * 0.4157349 - fVar14 * 0.4903927) + (fVar4 * 0.09754573 - fVar8 * 0.2777855);
    fVar28 = (fVar5 * 0.4157349 - fVar16 * 0.4903927) + (fVar10 * 0.09754573 - fVar12 * 0.2777855);
    fVar29 = (fVar7 * 0.4157349 - fVar18 * 0.4903927) + (fVar6 * 0.09754573 - fVar21 * 0.2777855);
    fVar30 = (fVar9 * 0.4157349 - fVar20 * 0.4903927) + (fVar11 * 0.09754573 - fVar13 * 0.2777855);
    fVar15 = (pfVar1[-0x10] + pfVar1[0x10]) * 0.3535536;
    fVar17 = (pfVar1[-0xf] + pfVar1[0x11]) * 0.3535536;
    fVar19 = (pfVar1[-0xe] + pfVar1[0x12]) * 0.3535536;
    fVar22 = (pfVar1[-0xd] + pfVar1[0x13]) * 0.3535536;
    fVar3 = fVar3 * 0.09754573 + fVar14 * 0.4157349 + (fVar4 * 0.2777855 - fVar8 * 0.4903927);
    fVar5 = fVar5 * 0.09754573 + fVar16 * 0.4157349 + (fVar10 * 0.2777855 - fVar12 * 0.4903927);
    fVar7 = fVar7 * 0.09754573 + fVar18 * 0.4157349 + (fVar6 * 0.2777855 - fVar21 * 0.4903927);
    fVar9 = fVar9 * 0.09754573 + fVar20 * 0.4157349 + (fVar11 * 0.2777855 - fVar13 * 0.4903927);
    fVar35 = (pfVar1[-0x10] - pfVar1[0x10]) * 0.3535536;
    fVar36 = (pfVar1[-0xf] - pfVar1[0x11]) * 0.3535536;
    fVar37 = (pfVar1[-0xe] - pfVar1[0x12]) * 0.3535536;
    fVar38 = (pfVar1[-0xd] - pfVar1[0x13]) * 0.3535536;
    fVar4 = pfVar1[0x20] * 0.1913422 + *pfVar1 * 0.4619398;
    fVar10 = pfVar1[0x21] * 0.1913422 + pfVar1[1] * 0.4619398;
    fVar6 = pfVar1[0x22] * 0.1913422 + pfVar1[2] * 0.4619398;
    fVar11 = pfVar1[0x23] * 0.1913422 + pfVar1[3] * 0.4619398;
    fVar14 = *pfVar1 * 0.1913422 - pfVar1[0x20] * 0.4619398;
    fVar16 = pfVar1[1] * 0.1913422 - pfVar1[0x21] * 0.4619398;
    fVar18 = pfVar1[2] * 0.1913422 - pfVar1[0x22] * 0.4619398;
    fVar20 = pfVar1[3] * 0.1913422 - pfVar1[0x23] * 0.4619398;
    fVar8 = fVar4 + fVar15;
    fVar12 = fVar10 + fVar17;
    fVar21 = fVar6 + fVar19;
    fVar13 = fVar11 + fVar22;
    fVar15 = fVar15 - fVar4;
    fVar17 = fVar17 - fVar10;
    fVar19 = fVar19 - fVar6;
    fVar22 = fVar22 - fVar11;
    fVar4 = fVar14 + fVar35;
    fVar10 = fVar16 + fVar36;
    fVar6 = fVar18 + fVar37;
    fVar11 = fVar20 + fVar38;
    fVar35 = fVar35 - fVar14;
    fVar36 = fVar36 - fVar16;
    fVar37 = fVar37 - fVar18;
    fVar38 = fVar38 - fVar20;
    pfVar1[-0x10] = fVar8 + fVar31;
    pfVar1[-0xf] = fVar12 + fVar32;
    pfVar1[-0xe] = fVar21 + fVar33;
    pfVar1[-0xd] = fVar13 + fVar34;
    pfVar1[-8] = fVar4 + fVar23;
    pfVar1[-7] = fVar10 + fVar24;
    pfVar1[-6] = fVar6 + fVar25;
    pfVar1[-5] = fVar11 + fVar26;
    *pfVar1 = fVar35 + fVar3;
    pfVar1[1] = fVar36 + fVar5;
    pfVar1[2] = fVar37 + fVar7;
    pfVar1[3] = fVar38 + fVar9;
    pfVar1[0x10] = fVar15 - fVar27;
    pfVar1[0x11] = fVar17 - fVar28;
    pfVar1[0x12] = fVar19 - fVar29;
    pfVar1[0x13] = fVar22 - fVar30;
    pfVar1[8] = fVar15 + fVar27;
    pfVar1[9] = fVar17 + fVar28;
    pfVar1[10] = fVar19 + fVar29;
    pfVar1[0xb] = fVar22 + fVar30;
    pfVar1[0x18] = fVar35 - fVar3;
    pfVar1[0x19] = fVar36 - fVar5;
    pfVar1[0x1a] = fVar37 - fVar7;
    pfVar1[0x1b] = fVar38 - fVar9;
    pfVar1[0x20] = fVar4 - fVar23;
    pfVar1[0x21] = fVar10 - fVar24;
    pfVar1[0x22] = fVar6 - fVar25;
    pfVar1[0x23] = fVar11 - fVar26;
    pfVar1[0x28] = fVar8 - fVar31;
    pfVar1[0x29] = fVar12 - fVar32;
    pfVar1[0x2a] = fVar21 - fVar33;
    pfVar1[0x2b] = fVar13 - fVar34;
    pfVar1 = pfVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 144e5bef0 FUN_144e5bef0 body=862 status=ok
// SIG undefined FUN_144e5bef0(void)

void FUN_144e5bef0(float *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
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
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  
  fVar3 = *param_1;
  fVar6 = param_1[1];
  fVar12 = param_1[2];
  fVar14 = param_1[3];
  fVar9 = param_1[4];
  fVar24 = param_1[5];
  fVar15 = param_1[6];
  fVar16 = param_1[7];
  fVar17 = fVar3 * 0.3535536 + fVar12 * 0.4619398 + fVar9 * 0.3535536 + fVar15 * 0.1913422;
  fVar19 = fVar3 * 0.3535536 + fVar12 * 0.1913422 + fVar9 * -0.3535536 + fVar15 * -0.4619398;
  fVar21 = fVar3 * 0.3535536 + fVar12 * -0.1913422 + fVar9 * -0.3535536 + fVar15 * 0.4619398;
  fVar23 = fVar3 * 0.3535536 + fVar12 * -0.4619398 + fVar9 * 0.3535536 + fVar15 * -0.1913422;
  fVar3 = param_1[8];
  fVar12 = param_1[9];
  fVar9 = param_1[10];
  fVar15 = param_1[0xb];
  fVar2 = fVar6 * 0.4903927 + fVar14 * 0.4157349 + fVar24 * 0.2777855 + fVar16 * 0.09754573;
  fVar5 = fVar6 * 0.4157349 + fVar14 * -0.09754573 + fVar24 * -0.4903927 + fVar16 * -0.2777855;
  fVar8 = fVar6 * 0.2777855 + fVar14 * -0.4903927 + fVar24 * 0.09754573 + fVar16 * 0.4157349;
  fVar11 = fVar6 * 0.09754573 + fVar14 * -0.2777855 + fVar24 * 0.4157349 + fVar16 * -0.4903927;
  fVar6 = param_1[0xc];
  fVar14 = param_1[0xd];
  fVar24 = param_1[0xe];
  fVar16 = param_1[0xf];
  *param_1 = fVar2 + fVar17;
  param_1[1] = fVar5 + fVar19;
  param_1[2] = fVar8 + fVar21;
  param_1[3] = fVar11 + fVar23;
  param_1[4] = fVar23 - fVar11;
  param_1[5] = fVar21 - fVar8;
  param_1[6] = fVar19 - fVar5;
  param_1[7] = fVar17 - fVar2;
  fVar2 = fVar3 * 0.3535536 + fVar9 * 0.4619398 + fVar6 * 0.3535536 + fVar24 * 0.1913422;
  fVar5 = fVar3 * 0.3535536 + fVar9 * 0.1913422 + fVar6 * -0.3535536 + fVar24 * -0.4619398;
  fVar8 = fVar3 * 0.3535536 + fVar9 * -0.1913422 + fVar6 * -0.3535536 + fVar24 * 0.4619398;
  fVar24 = fVar3 * 0.3535536 + fVar9 * -0.4619398 + fVar6 * 0.3535536 + fVar24 * -0.1913422;
  fVar3 = fVar12 * 0.4903927 + fVar15 * 0.4157349 + fVar14 * 0.2777855 + fVar16 * 0.09754573;
  fVar6 = fVar12 * 0.4157349 + fVar15 * -0.09754573 + fVar14 * -0.4903927 + fVar16 * -0.2777855;
  fVar9 = fVar12 * 0.2777855 + fVar15 * -0.4903927 + fVar14 * 0.09754573 + fVar16 * 0.4157349;
  fVar12 = fVar12 * 0.09754573 + fVar15 * -0.2777855 + fVar14 * 0.4157349 + fVar16 * -0.4903927;
  param_1[8] = fVar3 + fVar2;
  param_1[9] = fVar6 + fVar5;
  param_1[10] = fVar9 + fVar8;
  param_1[0xb] = fVar12 + fVar24;
  lVar1 = 2;
  param_1[0xc] = fVar24 - fVar12;
  param_1[0xd] = fVar8 - fVar9;
  param_1[0xe] = fVar5 - fVar6;
  param_1[0xf] = fVar2 - fVar3;
  param_1 = param_1 + 0x10;
  do {
    fVar3 = param_1[-8];
    fVar6 = param_1[-7];
    fVar12 = param_1[-6];
    fVar14 = param_1[-5];
    fVar9 = param_1[8];
    fVar24 = param_1[9];
    fVar15 = param_1[10];
    fVar16 = param_1[0xb];
    fVar2 = param_1[0x18];
    fVar5 = param_1[0x19];
    fVar8 = param_1[0x1a];
    fVar11 = param_1[0x1b];
    fVar17 = param_1[0x28];
    fVar19 = param_1[0x29];
    fVar21 = param_1[0x2a];
    fVar23 = param_1[0x2b];
    fVar34 = fVar9 * 0.4157349 + fVar3 * 0.4903927 + fVar17 * 0.09754573 + fVar2 * 0.2777855;
    fVar35 = fVar24 * 0.4157349 + fVar6 * 0.4903927 + fVar19 * 0.09754573 + fVar5 * 0.2777855;
    fVar36 = fVar15 * 0.4157349 + fVar12 * 0.4903927 + fVar21 * 0.09754573 + fVar8 * 0.2777855;
    fVar37 = fVar16 * 0.4157349 + fVar14 * 0.4903927 + fVar23 * 0.09754573 + fVar11 * 0.2777855;
    fVar30 = (fVar3 * 0.4157349 - fVar9 * 0.09754573) - (fVar17 * 0.2777855 + fVar2 * 0.4903927);
    fVar31 = (fVar6 * 0.4157349 - fVar24 * 0.09754573) - (fVar19 * 0.2777855 + fVar5 * 0.4903927);
    fVar32 = (fVar12 * 0.4157349 - fVar15 * 0.09754573) - (fVar21 * 0.2777855 + fVar8 * 0.4903927);
    fVar33 = (fVar14 * 0.4157349 - fVar16 * 0.09754573) - (fVar23 * 0.2777855 + fVar11 * 0.4903927);
    fVar18 = (param_1[-0x10] + param_1[0x10]) * 0.3535536;
    fVar20 = (param_1[-0xf] + param_1[0x11]) * 0.3535536;
    fVar22 = (param_1[-0xe] + param_1[0x12]) * 0.3535536;
    fVar25 = (param_1[-0xd] + param_1[0x13]) * 0.3535536;
    fVar38 = (param_1[-0x10] - param_1[0x10]) * 0.3535536;
    fVar39 = (param_1[-0xf] - param_1[0x11]) * 0.3535536;
    fVar40 = (param_1[-0xe] - param_1[0x12]) * 0.3535536;
    fVar41 = (param_1[-0xd] - param_1[0x13]) * 0.3535536;
    fVar26 = (fVar3 * 0.2777855 - fVar9 * 0.4903927) + fVar2 * 0.09754573 + fVar17 * 0.4157349;
    fVar27 = (fVar6 * 0.2777855 - fVar24 * 0.4903927) + fVar5 * 0.09754573 + fVar19 * 0.4157349;
    fVar28 = (fVar12 * 0.2777855 - fVar15 * 0.4903927) + fVar8 * 0.09754573 + fVar21 * 0.4157349;
    fVar29 = (fVar14 * 0.2777855 - fVar16 * 0.4903927) + fVar11 * 0.09754573 + fVar23 * 0.4157349;
    fVar4 = param_1[0x20] * 0.1913422 + *param_1 * 0.4619398;
    fVar7 = param_1[0x21] * 0.1913422 + param_1[1] * 0.4619398;
    fVar10 = param_1[0x22] * 0.1913422 + param_1[2] * 0.4619398;
    fVar13 = param_1[0x23] * 0.1913422 + param_1[3] * 0.4619398;
    fVar17 = (fVar2 * 0.4157349 - fVar17 * 0.4903927) + (fVar3 * 0.09754573 - fVar9 * 0.2777855);
    fVar19 = (fVar5 * 0.4157349 - fVar19 * 0.4903927) + (fVar6 * 0.09754573 - fVar24 * 0.2777855);
    fVar21 = (fVar8 * 0.4157349 - fVar21 * 0.4903927) + (fVar12 * 0.09754573 - fVar15 * 0.2777855);
    fVar23 = (fVar11 * 0.4157349 - fVar23 * 0.4903927) + (fVar14 * 0.09754573 - fVar16 * 0.2777855);
    fVar2 = *param_1 * 0.1913422 - param_1[0x20] * 0.4619398;
    fVar5 = param_1[1] * 0.1913422 - param_1[0x21] * 0.4619398;
    fVar8 = param_1[2] * 0.1913422 - param_1[0x22] * 0.4619398;
    fVar11 = param_1[3] * 0.1913422 - param_1[0x23] * 0.4619398;
    fVar9 = fVar4 + fVar18;
    fVar24 = fVar7 + fVar20;
    fVar15 = fVar10 + fVar22;
    fVar16 = fVar13 + fVar25;
    fVar18 = fVar18 - fVar4;
    fVar20 = fVar20 - fVar7;
    fVar22 = fVar22 - fVar10;
    fVar25 = fVar25 - fVar13;
    fVar3 = fVar2 + fVar38;
    fVar6 = fVar5 + fVar39;
    fVar12 = fVar8 + fVar40;
    fVar14 = fVar11 + fVar41;
    fVar38 = fVar38 - fVar2;
    fVar39 = fVar39 - fVar5;
    fVar40 = fVar40 - fVar8;
    fVar41 = fVar41 - fVar11;
    param_1[-0x10] = fVar9 + fVar34;
    param_1[-0xf] = fVar24 + fVar35;
    param_1[-0xe] = fVar15 + fVar36;
    param_1[-0xd] = fVar16 + fVar37;
    param_1[-8] = fVar3 + fVar30;
    param_1[-7] = fVar6 + fVar31;
    param_1[-6] = fVar12 + fVar32;
    param_1[-5] = fVar14 + fVar33;
    *param_1 = fVar38 + fVar26;
    param_1[1] = fVar39 + fVar27;
    param_1[2] = fVar40 + fVar28;
    param_1[3] = fVar41 + fVar29;
    param_1[0x10] = fVar18 - fVar17;
    param_1[0x11] = fVar20 - fVar19;
    param_1[0x12] = fVar22 - fVar21;
    param_1[0x13] = fVar25 - fVar23;
    param_1[8] = fVar18 + fVar17;
    param_1[9] = fVar20 + fVar19;
    param_1[10] = fVar22 + fVar21;
    param_1[0xb] = fVar25 + fVar23;
    param_1[0x18] = fVar38 - fVar26;
    param_1[0x19] = fVar39 - fVar27;
    param_1[0x1a] = fVar40 - fVar28;
    param_1[0x1b] = fVar41 - fVar29;
    param_1[0x20] = fVar3 - fVar30;
    param_1[0x21] = fVar6 - fVar31;
    param_1[0x22] = fVar12 - fVar32;
    param_1[0x23] = fVar14 - fVar33;
    param_1[0x28] = fVar9 - fVar34;
    param_1[0x29] = fVar24 - fVar35;
    param_1[0x2a] = fVar15 - fVar36;
    param_1[0x2b] = fVar16 - fVar37;
    param_1 = param_1 + 4;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 144e5c250 FUN_144e5c250 body=719 status=ok
// SIG undefined FUN_144e5c250(void)

void FUN_144e5c250(float *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
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
  float fVar36;
  float fVar37;
  
  fVar2 = *param_1;
  fVar5 = param_1[1];
  fVar3 = param_1[2];
  fVar6 = param_1[3];
  fVar4 = param_1[4];
  fVar7 = param_1[5];
  fVar16 = param_1[6];
  fVar8 = param_1[7];
  lVar1 = 2;
  fVar13 = fVar2 * 0.3535536 + fVar3 * 0.4619398 + fVar4 * 0.3535536 + fVar16 * 0.1913422;
  fVar14 = fVar2 * 0.3535536 + fVar3 * 0.1913422 + fVar4 * -0.3535536 + fVar16 * -0.4619398;
  fVar15 = fVar2 * 0.3535536 + fVar3 * -0.1913422 + fVar4 * -0.3535536 + fVar16 * 0.4619398;
  fVar16 = fVar2 * 0.3535536 + fVar3 * -0.4619398 + fVar4 * 0.3535536 + fVar16 * -0.1913422;
  fVar2 = fVar5 * 0.4903927 + fVar6 * 0.4157349 + fVar7 * 0.2777855 + fVar8 * 0.09754573;
  fVar3 = fVar5 * 0.4157349 + fVar6 * -0.09754573 + fVar7 * -0.4903927 + fVar8 * -0.2777855;
  fVar4 = fVar5 * 0.2777855 + fVar6 * -0.4903927 + fVar7 * 0.09754573 + fVar8 * 0.4157349;
  fVar5 = fVar5 * 0.09754573 + fVar6 * -0.2777855 + fVar7 * 0.4157349 + fVar8 * -0.4903927;
  *param_1 = fVar2 + fVar13;
  param_1[1] = fVar3 + fVar14;
  param_1[2] = fVar4 + fVar15;
  param_1[3] = fVar5 + fVar16;
  param_1[4] = fVar16 - fVar5;
  param_1[5] = fVar15 - fVar4;
  param_1[6] = fVar14 - fVar3;
  param_1[7] = fVar13 - fVar2;
  param_1 = param_1 + 0x10;
  do {
    fVar2 = param_1[0x18];
    fVar5 = param_1[0x19];
    fVar3 = param_1[0x1a];
    fVar6 = param_1[0x1b];
    fVar4 = param_1[0x28];
    fVar7 = param_1[0x29];
    fVar16 = param_1[0x2a];
    fVar8 = param_1[0x2b];
    fVar13 = param_1[-8];
    fVar14 = param_1[-7];
    fVar15 = param_1[-6];
    fVar25 = param_1[-5];
    fVar26 = param_1[8];
    fVar27 = param_1[9];
    fVar28 = param_1[10];
    fVar29 = param_1[0xb];
    fVar30 = fVar4 * 0.09754573 + fVar2 * 0.2777855 + fVar26 * 0.4157349 + fVar13 * 0.4903927;
    fVar31 = fVar7 * 0.09754573 + fVar5 * 0.2777855 + fVar27 * 0.4157349 + fVar14 * 0.4903927;
    fVar32 = fVar16 * 0.09754573 + fVar3 * 0.2777855 + fVar28 * 0.4157349 + fVar15 * 0.4903927;
    fVar33 = fVar8 * 0.09754573 + fVar6 * 0.2777855 + fVar29 * 0.4157349 + fVar25 * 0.4903927;
    fVar9 = (param_1[-0x10] + param_1[0x10]) * 0.3535536;
    fVar10 = (param_1[-0xf] + param_1[0x11]) * 0.3535536;
    fVar11 = (param_1[-0xe] + param_1[0x12]) * 0.3535536;
    fVar12 = (param_1[-0xd] + param_1[0x13]) * 0.3535536;
    fVar21 = (fVar13 * 0.4157349 - fVar26 * 0.09754573) - (fVar4 * 0.2777855 + fVar2 * 0.4903927);
    fVar22 = (fVar14 * 0.4157349 - fVar27 * 0.09754573) - (fVar7 * 0.2777855 + fVar5 * 0.4903927);
    fVar23 = (fVar15 * 0.4157349 - fVar28 * 0.09754573) - (fVar16 * 0.2777855 + fVar3 * 0.4903927);
    fVar24 = (fVar25 * 0.4157349 - fVar29 * 0.09754573) - (fVar8 * 0.2777855 + fVar6 * 0.4903927);
    fVar34 = (param_1[-0x10] - param_1[0x10]) * 0.3535536;
    fVar35 = (param_1[-0xf] - param_1[0x11]) * 0.3535536;
    fVar36 = (param_1[-0xe] - param_1[0x12]) * 0.3535536;
    fVar37 = (param_1[-0xd] - param_1[0x13]) * 0.3535536;
    fVar17 = (fVar13 * 0.2777855 - fVar26 * 0.4903927) + fVar2 * 0.09754573 + fVar4 * 0.4157349;
    fVar18 = (fVar14 * 0.2777855 - fVar27 * 0.4903927) + fVar5 * 0.09754573 + fVar7 * 0.4157349;
    fVar19 = (fVar15 * 0.2777855 - fVar28 * 0.4903927) + fVar3 * 0.09754573 + fVar16 * 0.4157349;
    fVar20 = (fVar25 * 0.2777855 - fVar29 * 0.4903927) + fVar6 * 0.09754573 + fVar8 * 0.4157349;
    fVar26 = (fVar2 * 0.4157349 - fVar4 * 0.4903927) + (fVar13 * 0.09754573 - fVar26 * 0.2777855);
    fVar27 = (fVar5 * 0.4157349 - fVar7 * 0.4903927) + (fVar14 * 0.09754573 - fVar27 * 0.2777855);
    fVar28 = (fVar3 * 0.4157349 - fVar16 * 0.4903927) + (fVar15 * 0.09754573 - fVar28 * 0.2777855);
    fVar29 = (fVar6 * 0.4157349 - fVar8 * 0.4903927) + (fVar25 * 0.09754573 - fVar29 * 0.2777855);
    fVar2 = *param_1 * 0.4619398 + param_1[0x20] * 0.1913422;
    fVar5 = param_1[1] * 0.4619398 + param_1[0x21] * 0.1913422;
    fVar3 = param_1[2] * 0.4619398 + param_1[0x22] * 0.1913422;
    fVar6 = param_1[3] * 0.4619398 + param_1[0x23] * 0.1913422;
    fVar13 = *param_1 * 0.1913422 - param_1[0x20] * 0.4619398;
    fVar14 = param_1[1] * 0.1913422 - param_1[0x21] * 0.4619398;
    fVar15 = param_1[2] * 0.1913422 - param_1[0x22] * 0.4619398;
    fVar25 = param_1[3] * 0.1913422 - param_1[0x23] * 0.4619398;
    fVar4 = fVar2 + fVar9;
    fVar7 = fVar5 + fVar10;
    fVar16 = fVar3 + fVar11;
    fVar8 = fVar6 + fVar12;
    fVar9 = fVar9 - fVar2;
    fVar10 = fVar10 - fVar5;
    fVar11 = fVar11 - fVar3;
    fVar12 = fVar12 - fVar6;
    fVar2 = fVar13 + fVar34;
    fVar5 = fVar14 + fVar35;
    fVar3 = fVar15 + fVar36;
    fVar6 = fVar25 + fVar37;
    fVar34 = fVar34 - fVar13;
    fVar35 = fVar35 - fVar14;
    fVar36 = fVar36 - fVar15;
    fVar37 = fVar37 - fVar25;
    param_1[-0x10] = fVar4 + fVar30;
    param_1[-0xf] = fVar7 + fVar31;
    param_1[-0xe] = fVar16 + fVar32;
    param_1[-0xd] = fVar8 + fVar33;
    param_1[-8] = fVar2 + fVar21;
    param_1[-7] = fVar5 + fVar22;
    param_1[-6] = fVar3 + fVar23;
    param_1[-5] = fVar6 + fVar24;
    *param_1 = fVar34 + fVar17;
    param_1[1] = fVar35 + fVar18;
    param_1[2] = fVar36 + fVar19;
    param_1[3] = fVar37 + fVar20;
    param_1[0x10] = fVar9 - fVar26;
    param_1[0x11] = fVar10 - fVar27;
    param_1[0x12] = fVar11 - fVar28;
    param_1[0x13] = fVar12 - fVar29;
    param_1[8] = fVar9 + fVar26;
    param_1[9] = fVar10 + fVar27;
    param_1[10] = fVar11 + fVar28;
    param_1[0xb] = fVar12 + fVar29;
    param_1[0x18] = fVar34 - fVar17;
    param_1[0x19] = fVar35 - fVar18;
    param_1[0x1a] = fVar36 - fVar19;
    param_1[0x1b] = fVar37 - fVar20;
    param_1[0x20] = fVar2 - fVar21;
    param_1[0x21] = fVar5 - fVar22;
    param_1[0x22] = fVar3 - fVar23;
    param_1[0x23] = fVar6 - fVar24;
    param_1[0x28] = fVar4 - fVar30;
    param_1[0x29] = fVar7 - fVar31;
    param_1[0x2a] = fVar16 - fVar32;
    param_1[0x2b] = fVar8 - fVar33;
    param_1 = param_1 + 4;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 144e5c520 FUN_144e5c520 body=110 status=ok
// SIG undefined FUN_144e5c520(void)

ulonglong FUN_144e5c520(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 < 0x333333333333334) {
    param_2 = param_2 * 0x50;
    if (param_2 < 0x1000) {
      if (param_2 != 0) {
        uVar2 = FUN_14494321d();
        return uVar2;
      }
      return 0;
    }
    if (param_2 < param_2 + 0x27) {
      lVar1 = FUN_14494321d(param_2 + 0x27);
      if (lVar1 != 0) {
        uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar2 - 8) = lVar1;
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14694ac37();
}



// FUNCTION 144e5c590 FUN_144e5c590 body=603 status=ok
// SIG undefined FUN_144e5c590(void)

longlong * FUN_144e5c590(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  param_1[1] = param_1[1] + 1;
  plVar2 = (longlong *)*param_1;
  plVar6 = (longlong *)*param_2;
  param_3[1] = (longlong)plVar6;
  if (plVar6 == plVar2) {
    *plVar2 = (longlong)param_3;
    plVar2[1] = (longlong)param_3;
    plVar2[2] = (longlong)param_3;
    *(undefined1 *)(param_3 + 3) = 1;
    return param_3;
  }
  if ((int)param_2[1] == 0) {
    plVar6[2] = (longlong)param_3;
    if (plVar6 == (longlong *)plVar2[2]) {
      plVar2[2] = (longlong)param_3;
    }
  }
  else {
    *plVar6 = (longlong)param_3;
    if (plVar6 == (longlong *)*plVar2) {
      *plVar2 = (longlong)param_3;
    }
  }
  cVar1 = *(char *)(param_3[1] + 0x18);
  plVar6 = param_3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(plVar2[1] + 0x18) = 1;
      return param_3;
    }
    plVar7 = (longlong *)plVar6[1];
    lVar3 = *(longlong *)plVar7[1];
    if (plVar7 == (longlong *)lVar3) {
      lVar3 = ((longlong *)plVar7[1])[2];
      if (*(char *)(lVar3 + 0x18) == '\0') {
        *(undefined1 *)(plVar7 + 3) = 1;
        *(undefined1 *)(lVar3 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar6[1] + 8);
      }
      else {
        plVar8 = (longlong *)plVar7[2];
        if (plVar6 == plVar8) {
          plVar7[2] = *plVar8;
          if (*(char *)(*plVar8 + 0x19) == '\0') {
            *(longlong **)(*plVar8 + 8) = plVar7;
          }
          plVar8[1] = plVar7[1];
          if (plVar7 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            plVar6 = (longlong *)plVar7[1];
            if (plVar7 == (longlong *)*plVar6) {
              *plVar6 = (longlong)plVar8;
            }
            else {
              plVar6[2] = (longlong)plVar8;
            }
          }
          *plVar8 = (longlong)plVar7;
          plVar7[1] = (longlong)plVar8;
          plVar6 = plVar7;
        }
        *(undefined1 *)(plVar6[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(plVar6[1] + 8);
        plVar8 = (longlong *)*plVar7;
        *plVar7 = plVar8[2];
        if (*(char *)(plVar8[2] + 0x19) == '\0') {
          *(longlong **)(plVar8[2] + 8) = plVar7;
        }
        plVar8[1] = plVar7[1];
        if (plVar7 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
          plVar8[2] = (longlong)plVar7;
        }
        else {
          plVar4 = (longlong *)plVar7[1];
          if (plVar7 == (longlong *)plVar4[2]) {
            plVar4[2] = (longlong)plVar8;
            plVar8[2] = (longlong)plVar7;
          }
          else {
            *plVar4 = (longlong)plVar8;
            plVar8[2] = (longlong)plVar7;
          }
        }
LAB_144e5c7cd:
        plVar7[1] = (longlong)plVar8;
      }
    }
    else {
      if (*(char *)(lVar3 + 0x18) != '\0') {
        plVar8 = (longlong *)*plVar7;
        if (plVar6 == plVar8) {
          *plVar7 = plVar8[2];
          if (*(char *)(plVar8[2] + 0x19) == '\0') {
            *(longlong **)(plVar8[2] + 8) = plVar7;
          }
          plVar8[1] = plVar7[1];
          if (plVar7 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            puVar5 = (undefined8 *)plVar7[1];
            if (plVar7 == (longlong *)puVar5[2]) {
              puVar5[2] = plVar8;
            }
            else {
              *puVar5 = plVar8;
            }
          }
          plVar8[2] = (longlong)plVar7;
          plVar7[1] = (longlong)plVar8;
          plVar6 = plVar7;
        }
        *(undefined1 *)(plVar6[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(plVar6[1] + 8);
        plVar8 = (longlong *)plVar7[2];
        plVar7[2] = *plVar8;
        if (*(char *)(*plVar8 + 0x19) == '\0') {
          *(longlong **)(*plVar8 + 8) = plVar7;
        }
        plVar8[1] = plVar7[1];
        if (plVar7 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
        }
        else {
          puVar5 = (undefined8 *)plVar7[1];
          if (plVar7 == (longlong *)*puVar5) {
            *puVar5 = plVar8;
          }
          else {
            puVar5[2] = plVar8;
          }
        }
        *plVar8 = (longlong)plVar7;
        goto LAB_144e5c7cd;
      }
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(lVar3 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
      plVar6 = *(longlong **)(plVar6[1] + 8);
    }
    cVar1 = *(char *)(plVar6[1] + 0x18);
  } while( true );
}



// FUNCTION 144e5c7f0 FUN_144e5c7f0 body=42 status=ok
// SIG undefined FUN_144e5c7f0(void)

void FUN_144e5c7f0(longlong *param_1)

{
  FUN_144e5cc40(param_1,param_1,*(undefined8 *)(*param_1 + 8));
  thunk_FUN_1400020a8(*param_1,0x50);
  return;
}



// FUNCTION 144e5c820 FUN_144e5c820 body=323 status=ok
// SIG undefined FUN_144e5c820(void)

void FUN_144e5c820(undefined8 *param_1,ulonglong param_2)

{
  code *pcVar1;
  ulonglong *puVar2;
  void *_Memory;
  ulonglong *puVar3;
  ulonglong uVar4;
  
  if (param_2 != 0) {
    if (0xfffffffffffffff < param_2) {
      FUN_144e59c70();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar4 = param_2 * 0x10;
    if (uVar4 < 0x1000) {
      if (uVar4 == 0) {
        puVar3 = (ulonglong *)0x0;
        puVar2 = (ulonglong *)0x0;
      }
      else {
        puVar3 = (ulonglong *)FUN_14494321d(uVar4);
        puVar2 = puVar3 + param_2 * 2;
      }
    }
    else {
      if (uVar4 + 0x27 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_14694ac37();
      }
      uVar4 = FUN_14494321d();
      if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      puVar3 = (ulonglong *)(uVar4 + 0x27 & 0xffffffffffffffe0);
      puVar3[-1] = uVar4;
      puVar2 = puVar3 + param_2 * 2;
    }
    *param_1 = puVar3;
    param_1[1] = puVar3;
    param_1[2] = puVar2;
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      _Memory = _aligned_malloc(0x80,0x20);
      puVar3[1] = (ulonglong)_Memory;
      if (((ulonglong)_Memory & 0x1f) != 0) {
        _aligned_free(_Memory);
        _Memory = _aligned_malloc(0xa0,0x20);
        puVar3[1] = (ulonglong)_Memory;
        for (; ((ulonglong)_Memory & 0x1f) != 0; _Memory = (void *)((longlong)_Memory + 1)) {
        }
      }
      *puVar3 = (ulonglong)_Memory;
      puVar3 = puVar3 + 2;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    param_1[1] = puVar3;
  }
  return;
}



// FUNCTION 144e5c970 FUN_144e5c970 body=132 status=ok
// SIG undefined FUN_144e5c970(void)

void FUN_144e5c970(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    uVar1 = param_1[3];
    if (0xf < uVar1) {
      lVar2 = *param_1;
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
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    param_1 = param_1 + 6;
  } while( true );
}



// FUNCTION 144e5ca00 FUN_144e5ca00 body=131 status=ok
// SIG undefined FUN_144e5ca00(void)

void FUN_144e5ca00(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    lVar1 = *param_1;
    if (lVar1 != 0) {
      uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff8;
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
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    param_1 = param_1 + 3;
  } while( true );
}



// FUNCTION 144e5ca90 FUN_144e5ca90 body=79 status=ok
// SIG undefined FUN_144e5ca90(void)

void FUN_144e5ca90(undefined8 *param_1,undefined8 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    if ((void *)param_1[1] != (void *)0x0) {
      _aligned_free((void *)param_1[1]);
    }
    param_1[1] = 0;
    *param_1 = 0;
  }
  return;
}



// FUNCTION 144e5cae0 FUN_144e5cae0 body=131 status=ok
// SIG undefined FUN_144e5cae0(void)

void FUN_144e5cae0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    lVar1 = *param_1;
    if (lVar1 != 0) {
      uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff8;
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
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    param_1 = param_1 + 3;
  } while( true );
}



// FUNCTION 144e5cb70 FUN_144e5cb70 body=135 status=ok
// SIG undefined FUN_144e5cb70(void)

void FUN_144e5cb70(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    uVar1 = param_1[3];
    if (0xf < uVar1) {
      lVar2 = *param_1;
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
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    param_1 = param_1 + 0x13;
  } while( true );
}



// FUNCTION 144e5cc40 FUN_144e5cc40 body=191 status=ok
// SIG undefined FUN_144e5cc40(void)

void FUN_144e5cc40(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  do {
    if (cVar1 != '\0') {
      return;
    }
    FUN_144e5cc40(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    uVar3 = param_3[7];
    if (0xf < uVar3) {
      lVar4 = param_3[4];
      uVar6 = uVar3 + 1;
      lVar5 = lVar4;
      if (0xfff < uVar6) {
        lVar5 = *(longlong *)(lVar4 + -8);
        uVar6 = uVar3 + 0x28;
        if (0x1f < (lVar4 - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(lVar5,uVar6);
    }
    param_3[6] = 0;
    param_3[7] = 0xf;
    *(undefined1 *)(param_3 + 4) = 0;
    thunk_FUN_1400020a8(param_3,0x50);
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
    param_3 = plVar2;
  } while( true );
}



// FUNCTION 144e5cd00 FUN_144e5cd00 body=307 status=ok
// SIG undefined FUN_144e5cd00(void)

undefined8 * FUN_144e5cd00(longlong *param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  undefined8 *_Dst;
  ulonglong uVar5;
  undefined8 *_Dst_00;
  ulonglong uVar6;
  size_t _Size;
  
  lVar3 = *param_1;
  lVar4 = param_1[1] - lVar3 >> 3;
  if (lVar4 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_144e59ce0();
  }
  uVar1 = lVar4 + 1;
  uVar5 = param_1[2] - lVar3 >> 3;
  uVar6 = 0x1fffffffffffffff;
  if ((uVar5 <= 0x1fffffffffffffff - (uVar5 >> 1)) && (uVar6 = (uVar5 >> 1) + uVar5, uVar6 < uVar1))
  {
    uVar6 = uVar1;
  }
  _Dst = (undefined8 *)FUN_1456db838(param_1,uVar6);
  puVar2 = _Dst + ((longlong)param_2 - lVar3 >> 3);
  *puVar2 = *param_3;
  _Src = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)_Src;
    _Dst_00 = _Dst;
    param_2 = _Src;
  }
  else {
    memmove(_Dst,_Src,(longlong)param_2 - (longlong)_Src);
    _Dst_00 = puVar2 + 1;
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(_Dst_00,param_2,_Size);
  lVar3 = *param_1;
  if (lVar3 != 0) {
    uVar5 = param_1[2] - lVar3 & 0xfffffffffffffff8;
    lVar4 = lVar3;
    if (0xfff < uVar5) {
      uVar5 = uVar5 + 0x27;
      lVar4 = *(longlong *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar4,uVar5);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)(_Dst + uVar1);
  param_1[2] = (longlong)(_Dst + uVar6);
  return puVar2;
}



// FUNCTION 144e5ce40 FUN_144e5ce40 body=470 status=ok
// SIG undefined FUN_144e5ce40(void)

longlong FUN_144e5ce40(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar4 = *param_1;
  lVar6 = (param_2 - lVar4) / 6 + (param_2 - lVar4 >> 0x3f);
  lVar5 = (param_1[1] - lVar4) / 0x18;
  if (lVar5 == 0xaaaaaaaaaaaaaaa) {
    FUN_144e59970();
    pcVar2 = (code *)swi(3);
    lVar4 = (*pcVar2)();
    return lVar4;
  }
  uVar1 = lVar5 + 1;
  uVar7 = (param_1[2] - lVar4) / 0x18;
  uVar8 = 0xaaaaaaaaaaaaaaa;
  if ((uVar7 <= 0xaaaaaaaaaaaaaaa - (uVar7 >> 1)) && (uVar8 = (uVar7 >> 1) + uVar7, uVar8 < uVar1))
  {
    uVar8 = uVar1;
  }
  lVar3 = FUN_144e59770(param_1,uVar8);
  lVar4 = lVar3 + ((lVar6 >> 2) - (lVar6 >> 0x3f)) * 0x18;
  lVar10 = lVar4 + 0x18;
  lVar11 = lVar3;
  FUN_144e5df80(param_1,lVar4,param_3);
  lVar6 = param_1[1];
  lVar5 = *param_1;
  lVar9 = lVar3;
  if (param_2 != lVar6) {
    FUN_144e5e030(lVar5,param_2,lVar3,param_1,lVar10,lVar11);
    lVar6 = param_1[1];
    lVar5 = param_2;
    lVar9 = lVar4 + 0x18;
  }
  FUN_144e5e030(lVar5,lVar6,lVar9,param_1,lVar10,lVar11);
  if (*param_1 != 0) {
    FUN_144e5ca00(*param_1,param_1[1],param_1);
    lVar5 = *param_1;
    uVar7 = ((param_1[2] - lVar5) / 0x18) * 0x18;
    lVar6 = lVar5;
    if (0xfff < uVar7) {
      uVar7 = uVar7 + 0x27;
      lVar6 = *(longlong *)(lVar5 + -8);
      if (0x1f < (lVar5 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar6,uVar7);
  }
  *param_1 = lVar3;
  param_1[1] = lVar3 + uVar1 * 0x18;
  param_1[2] = lVar3 + uVar8 * 0x18;
  return lVar4;
}



// FUNCTION 144e5d020 FUN_144e5d020 body=655 status=ok
// SIG undefined FUN_144e5d020(void)

void FUN_144e5d020(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *_Memory;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  
  if (0xfffffffffffffff < param_2) {
    FUN_144e57ad0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar9 = (longlong)(param_1[1] - *param_1) >> 4;
  uVar5 = (longlong)(param_1[2] - *param_1) >> 4;
  if ((0xfffffffffffffff - (uVar5 >> 1) < uVar5) ||
     ((uVar5 = (uVar5 >> 1) + uVar5, uVar13 = param_2, param_2 <= uVar5 &&
      (uVar13 = uVar5, 0xfffffffffffffff < uVar5)))) {
LAB_144e5d2a5:
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  uVar13 = uVar13 * 0x10;
  if (uVar13 < 0x1000) {
    if (uVar13 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_14494321d(uVar13);
    }
  }
  else {
    if (uVar13 + 0x27 <= uVar13) goto LAB_144e5d2a5;
    lVar4 = FUN_14494321d();
    if (lVar4 == 0) goto LAB_144e5d29e;
    uVar5 = lVar4 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar5 - 8) = lVar4;
  }
  FUN_144e5d2c0(lVar9 * 0x10 + uVar5,param_2 - lVar9,param_1);
  puVar11 = (undefined8 *)param_1[1];
  puVar12 = (undefined8 *)*param_1;
  if (puVar12 != puVar11) {
    puVar10 = (undefined8 *)(uVar5 + 8);
    do {
      puVar10[-1] = 0;
      *puVar10 = 0;
      _Memory = _aligned_malloc(0x100,0x20);
      *puVar10 = _Memory;
      if (((ulonglong)_Memory & 0x1f) != 0) {
        _aligned_free(_Memory);
        _Memory = _aligned_malloc(0x120,0x20);
        *puVar10 = _Memory;
        for (; ((ulonglong)_Memory & 0x1f) != 0; _Memory = (undefined8 *)((longlong)_Memory + 1)) {
        }
      }
      puVar10[-1] = _Memory;
      puVar6 = (undefined8 *)*puVar12;
      lVar9 = 2;
      do {
        uVar3 = puVar6[1];
        *_Memory = *puVar6;
        _Memory[1] = uVar3;
        uVar3 = puVar6[3];
        _Memory[2] = puVar6[2];
        _Memory[3] = uVar3;
        uVar3 = puVar6[5];
        _Memory[4] = puVar6[4];
        _Memory[5] = uVar3;
        uVar3 = puVar6[7];
        _Memory[6] = puVar6[6];
        _Memory[7] = uVar3;
        uVar3 = puVar6[9];
        _Memory[8] = puVar6[8];
        _Memory[9] = uVar3;
        uVar3 = puVar6[0xb];
        _Memory[10] = puVar6[10];
        _Memory[0xb] = uVar3;
        uVar3 = puVar6[0xd];
        _Memory[0xc] = puVar6[0xc];
        _Memory[0xd] = uVar3;
        uVar3 = puVar6[0xf];
        _Memory[0xe] = puVar6[0xe];
        _Memory[0xf] = uVar3;
        puVar6 = puVar6 + 0x10;
        lVar9 = lVar9 + -1;
        _Memory = _Memory + 0x10;
      } while (lVar9 != 0);
      puVar10 = puVar10 + 2;
      puVar12 = puVar12 + 2;
    } while (puVar12 != puVar11);
  }
  puVar11 = (undefined8 *)*param_1;
  if (puVar11 != (undefined8 *)0x0) {
    puVar12 = (undefined8 *)param_1[1];
    for (; puVar11 != puVar12; puVar11 = puVar11 + 2) {
      if ((void *)puVar11[1] != (void *)0x0) {
        _aligned_free((void *)puVar11[1]);
      }
      puVar11[1] = 0;
      *puVar11 = 0;
    }
    uVar1 = *param_1;
    uVar8 = param_1[2] - uVar1 & 0xfffffffffffffff0;
    uVar7 = uVar1;
    if (0xfff < uVar8) {
      uVar8 = uVar8 + 0x27;
      uVar7 = *(ulonglong *)(uVar1 - 8);
      if (0x1f < (uVar1 - uVar7) - 8) {
LAB_144e5d29e:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(uVar7,uVar8);
  }
  *param_1 = uVar5;
  param_1[1] = param_2 * 0x10 + uVar5;
  param_1[2] = uVar13 + uVar5;
  return;
}



// FUNCTION 144e5d2c0 FUN_144e5d2c0 body=135 status=ok
// SIG undefined FUN_144e5d2c0(void)

ulonglong * FUN_144e5d2c0(ulonglong *param_1,longlong param_2)

{
  void *_Memory;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    _Memory = _aligned_malloc(0x100,0x20);
    param_1[1] = (ulonglong)_Memory;
    if (((ulonglong)_Memory & 0x1f) != 0) {
      _aligned_free(_Memory);
      _Memory = _aligned_malloc(0x120,0x20);
      param_1[1] = (ulonglong)_Memory;
      for (; ((ulonglong)_Memory & 0x1f) != 0; _Memory = (void *)((longlong)_Memory + 1)) {
      }
    }
    *param_1 = (ulonglong)_Memory;
    param_1 = param_1 + 2;
  }
  return param_1;
}



// FUNCTION 144e5d350 FUN_144e5d350 body=412 status=ok
// SIG undefined FUN_144e5d350(void)

undefined4 * FUN_144e5d350(longlong *param_1,void *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  void *_Src;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 *_Dst;
  undefined4 *puVar7;
  ulonglong uVar8;
  size_t _Size;
  
  lVar3 = *param_1;
  lVar5 = param_1[1] - lVar3 >> 2;
  if (lVar5 == 0x3fffffffffffffff) {
    FUN_144e578f0();
    pcVar4 = (code *)swi(3);
    puVar7 = (undefined4 *)(*pcVar4)();
    return puVar7;
  }
  uVar1 = lVar5 + 1;
  uVar6 = param_1[2] - lVar3 >> 2;
  if (0x3fffffffffffffff - (uVar6 >> 1) < uVar6) {
LAB_144e5d4e2:
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  uVar6 = (uVar6 >> 1) + uVar6;
  uVar8 = uVar1;
  if (uVar1 <= uVar6) {
    uVar8 = uVar6;
  }
  if (0x3fffffffffffffff < uVar8) goto LAB_144e5d4e2;
  uVar6 = uVar8 * 4;
  if (uVar6 < 0x1000) {
    if (uVar6 == 0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = (undefined4 *)FUN_14494321d(uVar6);
    }
  }
  else {
    if (uVar6 + 0x27 <= uVar6) goto LAB_144e5d4e2;
    lVar5 = FUN_14494321d();
    if (lVar5 == 0) goto LAB_144e5d4db;
    puVar7 = (undefined4 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)(puVar7 + -2) = lVar5;
  }
  puVar2 = puVar7 + ((longlong)param_2 - lVar3 >> 2);
  *puVar2 = *param_3;
  _Src = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)_Src;
    _Dst = puVar7;
    param_2 = _Src;
  }
  else {
    memmove(puVar7,_Src,(longlong)param_2 - (longlong)_Src);
    _Dst = puVar2 + 1;
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(_Dst,param_2,_Size);
  lVar3 = *param_1;
  if (lVar3 != 0) {
    uVar6 = param_1[2] - lVar3 & 0xfffffffffffffffc;
    lVar5 = lVar3;
    if (0xfff < uVar6) {
      uVar6 = uVar6 + 0x27;
      lVar5 = *(longlong *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar5) - 8U) {
LAB_144e5d4db:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar5,uVar6);
  }
  *param_1 = (longlong)puVar7;
  param_1[1] = (longlong)(puVar7 + uVar1);
  param_1[2] = (longlong)(puVar7 + uVar8);
  return puVar2;
}



// FUNCTION 144e5d4f0 FUN_144e5d4f0 body=470 status=ok
// SIG undefined FUN_144e5d4f0(void)

longlong FUN_144e5d4f0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar4 = *param_1;
  lVar6 = (param_2 - lVar4) / 6 + (param_2 - lVar4 >> 0x3f);
  lVar5 = (param_1[1] - lVar4) / 0x18;
  if (lVar5 == 0xaaaaaaaaaaaaaaa) {
    FUN_144e57880();
    pcVar2 = (code *)swi(3);
    lVar4 = (*pcVar2)();
    return lVar4;
  }
  uVar1 = lVar5 + 1;
  uVar7 = (param_1[2] - lVar4) / 0x18;
  uVar8 = 0xaaaaaaaaaaaaaaa;
  if ((uVar7 <= 0xaaaaaaaaaaaaaaa - (uVar7 >> 1)) && (uVar8 = (uVar7 >> 1) + uVar7, uVar8 < uVar1))
  {
    uVar8 = uVar1;
  }
  lVar3 = FUN_144e57680(param_1,uVar8);
  lVar4 = lVar3 + ((lVar6 >> 2) - (lVar6 >> 0x3f)) * 0x18;
  lVar10 = lVar4 + 0x18;
  lVar11 = lVar3;
  FUN_144e5e0b0(param_1,lVar4,param_3);
  lVar6 = param_1[1];
  lVar5 = *param_1;
  lVar9 = lVar3;
  if (param_2 != lVar6) {
    FUN_144e5e160(lVar5,param_2,lVar3,param_1,lVar10,lVar11);
    lVar6 = param_1[1];
    lVar5 = param_2;
    lVar9 = lVar4 + 0x18;
  }
  FUN_144e5e160(lVar5,lVar6,lVar9,param_1,lVar10,lVar11);
  if (*param_1 != 0) {
    FUN_144e5cae0(*param_1,param_1[1],param_1);
    lVar5 = *param_1;
    uVar7 = ((param_1[2] - lVar5) / 0x18) * 0x18;
    lVar6 = lVar5;
    if (0xfff < uVar7) {
      uVar7 = uVar7 + 0x27;
      lVar6 = *(longlong *)(lVar5 + -8);
      if (0x1f < (lVar5 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar6,uVar7);
  }
  *param_1 = lVar3;
  param_1[1] = lVar3 + uVar1 * 0x18;
  param_1[2] = lVar3 + uVar8 * 0x18;
  return lVar4;
}



// FUNCTION 144e5d6d0 FUN_144e5d6d0 body=423 status=ok
// SIG undefined FUN_144e5d6d0(void)

undefined8 * FUN_144e5d6d0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  lVar8 = *param_1;
  lVar12 = param_2 - lVar8;
  lVar9 = lVar12 / 6 + (lVar12 >> 0x3f);
  lVar10 = (param_1[1] - lVar8) / 0x30;
  if (lVar10 == 0x555555555555555) {
    FUN_144e4f5f0();
    pcVar2 = (code *)swi(3);
    puVar7 = (undefined8 *)(*pcVar2)();
    return puVar7;
  }
  uVar1 = lVar10 + 1;
  uVar15 = (param_1[2] - lVar8) / 0x30;
  uVar11 = 0x555555555555555;
  if ((uVar15 <= 0x555555555555555 - (uVar15 >> 1)) &&
     (uVar11 = (uVar15 >> 1) + uVar15, uVar11 < uVar1)) {
    uVar11 = uVar1;
  }
  uVar15 = uVar11;
  puVar6 = (undefined8 *)FUN_144e4f380(param_1,uVar11,lVar8,lVar12,uVar11);
  puVar13 = puVar6 + ((lVar9 >> 3) - (lVar9 >> 0x3f)) * 6;
  puVar7 = puVar13 + 6;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar13[2] = 0;
  puVar13[3] = 0;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)puVar13 = *param_3;
  *(undefined4 *)((longlong)puVar13 + 4) = uVar3;
  *(undefined4 *)(puVar13 + 1) = uVar4;
  *(undefined4 *)((longlong)puVar13 + 0xc) = uVar5;
  uVar3 = param_3[5];
  uVar4 = param_3[6];
  uVar5 = param_3[7];
  *(undefined4 *)(puVar13 + 2) = param_3[4];
  *(undefined4 *)((longlong)puVar13 + 0x14) = uVar3;
  *(undefined4 *)(puVar13 + 3) = uVar4;
  *(undefined4 *)((longlong)puVar13 + 0x1c) = uVar5;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0xf;
  *(undefined1 *)param_3 = 0;
  *(undefined4 *)(puVar13 + 4) = param_3[8];
  *(undefined4 *)((longlong)puVar13 + 0x24) = param_3[9];
  *(undefined4 *)(puVar13 + 5) = param_3[10];
  *(undefined1 *)((longlong)puVar13 + 0x2c) = *(undefined1 *)(param_3 + 0xb);
  lVar10 = param_1[1];
  lVar8 = *param_1;
  puVar14 = puVar6;
  puVar17 = puVar6;
  if (param_2 != lVar10) {
    puVar16 = puVar7;
    FUN_144e5e260(lVar8,param_2,puVar6,param_1,uVar15,puVar7,puVar6);
    lVar10 = param_1[1];
    lVar8 = param_2;
    puVar14 = puVar7;
    puVar7 = puVar16;
  }
  FUN_144e5e260(lVar8,lVar10,puVar14,param_1,uVar15,puVar7,puVar17);
  FUN_144e4f520(param_1,puVar6,uVar1,uVar11);
  return puVar13;
}



// FUNCTION 144e5d880 FUN_144e5d880 body=386 status=ok
// SIG undefined FUN_144e5d880(void)

longlong FUN_144e5d880(longlong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  lVar4 = *param_1;
  lVar9 = param_2 - lVar4;
  lVar5 = lVar9 / 6 + (lVar9 >> 0x3f);
  lVar6 = (param_1[1] - lVar4) / 0x30;
  if (lVar6 == 0x555555555555555) {
    FUN_144e4f5f0();
    pcVar2 = (code *)swi(3);
    lVar4 = (*pcVar2)();
    return lVar4;
  }
  uVar1 = lVar6 + 1;
  uVar10 = (param_1[2] - lVar4) / 0x30;
  uVar7 = 0x555555555555555;
  if ((uVar10 <= 0x555555555555555 - (uVar10 >> 1)) &&
     (uVar7 = (uVar10 >> 1) + uVar10, uVar7 < uVar1)) {
    uVar7 = uVar1;
  }
  uVar10 = uVar7;
  lVar3 = FUN_144e4f380(param_1,uVar7,lVar4,lVar9,uVar7);
  lVar8 = ((lVar5 >> 3) - (lVar5 >> 0x3f)) * 0x30 + lVar3;
  lVar9 = lVar8 + 0x30;
  lVar11 = lVar3;
  FUN_144b65a50(lVar8,param_3);
  *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(lVar8 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)(lVar8 + 0x28) = *(undefined4 *)(param_3 + 0x28);
  *(undefined1 *)(lVar8 + 0x2c) = *(undefined1 *)(param_3 + 0x2c);
  lVar6 = param_1[1];
  lVar4 = *param_1;
  lVar5 = lVar3;
  if (param_2 != lVar6) {
    FUN_144e5e260(lVar4,param_2,lVar3,param_1,uVar10,lVar9,lVar11);
    lVar6 = param_1[1];
    lVar4 = param_2;
    lVar5 = lVar8 + 0x30;
  }
  FUN_144e5e260(lVar4,lVar6,lVar5,param_1,uVar10,lVar9,lVar11);
  FUN_144e4f520(param_1,lVar3,uVar1,uVar7);
  return lVar8;
}



// FUNCTION 144e5da10 FUN_144e5da10 body=242 status=ok
// SIG undefined FUN_144e5da10(void)

void FUN_144e5da10(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  void *_Dst;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (param_2 < 0x1555555555555556) {
    lVar3 = (param_1[1] - *param_1) / 6 + (param_1[1] - *param_1 >> 0x3f);
    lVar3 = (lVar3 >> 1) - (lVar3 >> 0x3f);
    uVar2 = (param_1[2] - *param_1) / 0xc;
    uVar5 = 0x1555555555555555;
    if ((uVar2 <= 0x1555555555555555 - (uVar2 >> 1)) &&
       (uVar5 = (uVar2 >> 1) + uVar2, uVar5 < param_2)) {
      uVar5 = param_2;
    }
    _Dst = (void *)FUN_144e4f160(param_1,uVar5);
    lVar4 = param_2 - lVar3;
    if (lVar4 != 0) {
      memset((void *)((longlong)_Dst + lVar3 * 0xc),0,lVar4 * 0xc);
    }
    memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
    FUN_144e4f260(param_1,_Dst,param_2,uVar5);
    return;
  }
  FUN_144e4f310();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 144e5db10 FUN_144e5db10 body=317 status=ok
// SIG undefined FUN_144e5db10(void)

undefined8 * FUN_144e5db10(longlong *param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  void *_Src;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  void *_Dst;
  undefined8 *puVar6;
  void *_Dst_00;
  longlong lVar7;
  ulonglong uVar8;
  size_t _Size;
  
  lVar2 = *param_1;
  lVar7 = ((longlong)param_2 - lVar2) / 6 + ((longlong)param_2 - lVar2 >> 0x3f);
  lVar4 = (param_1[1] - lVar2) / 0xc;
  if (lVar4 != 0x1555555555555555) {
    uVar1 = lVar4 + 1;
    uVar5 = (param_1[2] - lVar2) / 0xc;
    uVar8 = 0x1555555555555555;
    if ((uVar5 <= 0x1555555555555555 - (uVar5 >> 1)) &&
       (uVar8 = (uVar5 >> 1) + uVar5, uVar8 < uVar1)) {
      uVar8 = uVar1;
    }
    _Dst = (void *)FUN_144e4f160(param_1,uVar8);
    puVar6 = (undefined8 *)((longlong)_Dst + ((lVar7 >> 1) - (lVar7 >> 0x3f)) * 0xc);
    *puVar6 = *param_3;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_3 + 1);
    _Src = (void *)*param_1;
    if (param_2 == (void *)param_1[1]) {
      _Size = param_1[1] - (longlong)_Src;
      _Dst_00 = _Dst;
      param_2 = _Src;
    }
    else {
      memmove(_Dst,_Src,(longlong)param_2 - (longlong)_Src);
      _Dst_00 = (void *)((longlong)puVar6 + 0xc);
      _Size = param_1[1] - (longlong)param_2;
    }
    memmove(_Dst_00,param_2,_Size);
    FUN_144e4f260(param_1,_Dst,uVar1,uVar8);
    return puVar6;
  }
  FUN_144e4f310();
  pcVar3 = (code *)swi(3);
  puVar6 = (undefined8 *)(*pcVar3)();
  return puVar6;
}



// FUNCTION 144e5dc50 FUN_144e5dc50 body=691 status=ok
// SIG undefined FUN_144e5dc50(void)

void FUN_144e5dc50(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  
  if (0x1af286bca1af286 < param_2) {
    FUN_144e4f0f0();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar9 = (param_1[1] - *param_1) / 0x26 + (param_1[1] - *param_1 >> 0x3f);
  lVar9 = (lVar9 >> 2) - (lVar9 >> 0x3f);
  uVar11 = (param_1[2] - *param_1) / 0x98;
  if (0x1af286bca1af286 - (uVar11 >> 1) < uVar11) {
    uVar13 = 0xffffffffffffff90;
    uVar11 = 0xffffffffffffffb7;
LAB_144e5dd21:
    lVar7 = FUN_14494321d(uVar11);
    if (lVar7 == 0) goto LAB_144e5def2;
    puVar12 = (undefined8 *)(lVar7 + 0x27U & 0xffffffffffffffe0);
    puVar12[-1] = lVar7;
  }
  else {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar13 = param_2;
    if ((param_2 <= uVar11) && (uVar13 = uVar11, 0x1af286bca1af286 < uVar11)) {
LAB_144e5def9:
                    /* WARNING: Subroutine does not return */
      FUN_14694ac37();
    }
    uVar13 = uVar13 * 0x98;
    if (0xfff < uVar13) {
      uVar11 = uVar13 + 0x27;
      if (uVar11 <= uVar13) goto LAB_144e5def9;
      goto LAB_144e5dd21;
    }
    if (uVar13 == 0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      puVar12 = (undefined8 *)FUN_14494321d(uVar13);
    }
  }
  FUN_144e5df10(puVar12 + lVar9 * 0x13,param_2 - lVar9,param_1);
  puVar1 = (undefined8 *)param_1[1];
  puVar8 = puVar12;
  for (puVar10 = (undefined8 *)*param_1; puVar10 != puVar1; puVar10 = puVar10 + 0x13) {
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    uVar6 = puVar10[1];
    *puVar8 = *puVar10;
    puVar8[1] = uVar6;
    uVar6 = puVar10[3];
    puVar8[2] = puVar10[2];
    puVar8[3] = uVar6;
    puVar10[2] = 0;
    puVar10[3] = 0xf;
    *(undefined1 *)puVar10 = 0;
    *(undefined4 *)(puVar8 + 4) = *(undefined4 *)(puVar10 + 4);
    *(undefined4 *)((longlong)puVar8 + 0x24) = *(undefined4 *)((longlong)puVar10 + 0x24);
    *(undefined4 *)(puVar8 + 5) = *(undefined4 *)(puVar10 + 5);
    *(undefined4 *)((longlong)puVar8 + 0x2c) = *(undefined4 *)((longlong)puVar10 + 0x2c);
    *(undefined1 *)(puVar8 + 6) = *(undefined1 *)(puVar10 + 6);
    *(undefined4 *)((longlong)puVar8 + 0x34) = *(undefined4 *)((longlong)puVar10 + 0x34);
    *(undefined4 *)(puVar8 + 7) = *(undefined4 *)(puVar10 + 7);
    puVar8[8] = puVar10[8];
    puVar8[9] = puVar10[9];
    uVar6 = puVar10[0xb];
    puVar8[10] = puVar10[10];
    puVar8[0xb] = uVar6;
    uVar6 = puVar10[0xd];
    puVar8[0xc] = puVar10[0xc];
    puVar8[0xd] = uVar6;
    uVar3 = *(undefined4 *)((longlong)puVar10 + 0x74);
    uVar4 = *(undefined4 *)(puVar10 + 0xf);
    uVar5 = *(undefined4 *)((longlong)puVar10 + 0x7c);
    *(undefined4 *)(puVar8 + 0xe) = *(undefined4 *)(puVar10 + 0xe);
    *(undefined4 *)((longlong)puVar8 + 0x74) = uVar3;
    *(undefined4 *)(puVar8 + 0xf) = uVar4;
    *(undefined4 *)((longlong)puVar8 + 0x7c) = uVar5;
    uVar6 = puVar10[0x11];
    puVar8[0x10] = puVar10[0x10];
    puVar8[0x11] = uVar6;
    *(undefined4 *)(puVar8 + 0x12) = *(undefined4 *)(puVar10 + 0x12);
    *(undefined4 *)((longlong)puVar8 + 0x94) = *(undefined4 *)((longlong)puVar10 + 0x94);
    puVar8 = puVar8 + 0x13;
  }
  FUN_144e5cb70(puVar8,puVar8,param_1);
  if (*param_1 != 0) {
    FUN_144e5cb70(*param_1,param_1[1],param_1);
    lVar9 = *param_1;
    uVar11 = ((param_1[2] - lVar9) / 0x98) * 0x98;
    lVar7 = lVar9;
    if (0xfff < uVar11) {
      uVar11 = uVar11 + 0x27;
      lVar7 = *(longlong *)(lVar9 + -8);
      if (0x1f < (lVar9 - lVar7) - 8U) {
LAB_144e5def2:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar7,uVar11);
  }
  *param_1 = (longlong)puVar12;
  param_1[1] = (longlong)(puVar12 + param_2 * 0x13);
  param_1[2] = uVar13 + (longlong)puVar12;
  return;
}



// FUNCTION 144e5df10 FUN_144e5df10 body=109 status=ok
// SIG undefined FUN_144e5df10(void)

undefined8 * FUN_144e5df10(undefined8 *param_1,longlong param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[4] = 0;
    param_1[5] = 0;
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
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    param_1 = param_1 + 0x13;
  }
  FUN_144e5cb70(param_1,param_1);
  return param_1;
}



// FUNCTION 144e5df80 FUN_144e5df80 body=160 status=ok
// SIG undefined FUN_144e5df80(void)

void FUN_144e5df80(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  void *_Dst;
  ulonglong uVar1;
  size_t _Size;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar1 = param_3[1] - *param_3 >> 3;
  if (uVar1 != 0) {
    if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_144e59d20();
    }
    _Dst = (void *)FUN_1473c6056(param_2,uVar1);
    *param_2 = _Dst;
    param_2[1] = _Dst;
    param_2[2] = (void *)((longlong)_Dst + uVar1 * 8);
    _Size = param_3[1] - *param_3;
    memmove(_Dst,(void *)*param_3,_Size);
    param_2[1] = (void *)((longlong)_Dst + ((longlong)_Size >> 3) * 8);
  }
  return;
}



// FUNCTION 144e5e030 FUN_144e5e030 body=127 status=ok
// SIG undefined FUN_144e5e030(void)

undefined8 *
FUN_144e5e030(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    lVar6 = (longlong)param_3 - (longlong)param_1;
    puVar5 = param_1 + 1;
    do {
      uVar2 = *puVar5;
      uVar3 = puVar5[1];
      uVar4 = puVar5[-1];
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5[-1] = 0;
      *(undefined8 *)((longlong)puVar5 + lVar6) = uVar2;
      *(undefined8 *)(lVar6 + 8 + (longlong)puVar5) = uVar3;
      *param_3 = uVar4;
      puVar1 = puVar5 + 2;
      param_3 = param_3 + 3;
      puVar5 = puVar5 + 3;
    } while (puVar1 != param_2);
  }
  FUN_144e5ca00(param_3,param_3,param_4);
  return param_3;
}



// FUNCTION 144e5e0b0 FUN_144e5e0b0 body=160 status=ok
// SIG undefined FUN_144e5e0b0(void)

void FUN_144e5e0b0(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  void *_Dst;
  ulonglong uVar1;
  size_t _Size;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar1 = param_3[1] - *param_3 >> 3;
  if (uVar1 != 0) {
    if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_144e59ce0();
    }
    _Dst = (void *)FUN_1456db838(param_2,uVar1);
    *param_2 = _Dst;
    param_2[1] = _Dst;
    param_2[2] = (void *)((longlong)_Dst + uVar1 * 8);
    _Size = param_3[1] - *param_3;
    memmove(_Dst,(void *)*param_3,_Size);
    param_2[1] = (void *)((longlong)_Dst + ((longlong)_Size >> 3) * 8);
  }
  return;
}



// FUNCTION 144e5e160 FUN_144e5e160 body=127 status=ok
// SIG undefined FUN_144e5e160(void)

undefined8 *
FUN_144e5e160(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    lVar6 = (longlong)param_3 - (longlong)param_1;
    puVar5 = param_1 + 1;
    do {
      uVar2 = *puVar5;
      uVar3 = puVar5[1];
      uVar4 = puVar5[-1];
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5[-1] = 0;
      *(undefined8 *)((longlong)puVar5 + lVar6) = uVar2;
      *(undefined8 *)(lVar6 + 8 + (longlong)puVar5) = uVar3;
      *param_3 = uVar4;
      puVar1 = puVar5 + 2;
      param_3 = param_3 + 3;
      puVar5 = puVar5 + 3;
    } while (puVar1 != param_2);
  }
  FUN_144e5cae0(param_3,param_3,param_4);
  return param_3;
}



// FUNCTION 144e5e1e0 FUN_144e5e1e0 body=121 status=ok
// SIG undefined FUN_144e5e1e0(void)

undefined8 *
FUN_144e5e1e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  if (param_1 != param_2) {
    lVar5 = (longlong)param_3 - (longlong)param_1;
    puVar6 = param_1 + 3;
    do {
      *param_3 = 0;
      param_3[1] = 0;
      *(undefined8 *)(lVar5 + -0x28 + (longlong)(puVar6 + 4)) = 0;
      puVar1 = puVar6 + 1;
      *(undefined8 *)((longlong)puVar6 + lVar5) = 0;
      uVar2 = *(undefined4 *)((longlong)puVar6 + -0x14);
      uVar3 = *(undefined4 *)(puVar6 + -2);
      uVar4 = *(undefined4 *)((longlong)puVar6 + -0xc);
      *(undefined4 *)param_3 = *(undefined4 *)(puVar6 + -3);
      *(undefined4 *)((longlong)param_3 + 4) = uVar2;
      *(undefined4 *)(param_3 + 1) = uVar3;
      *(undefined4 *)((longlong)param_3 + 0xc) = uVar4;
      uVar2 = *(undefined4 *)((longlong)puVar6 + -4);
      uVar3 = *(undefined4 *)puVar6;
      uVar4 = *(undefined4 *)((longlong)puVar6 + 4);
      *(undefined4 *)(param_3 + 2) = *(undefined4 *)(puVar6 + -1);
      *(undefined4 *)((longlong)param_3 + 0x14) = uVar2;
      *(undefined4 *)(param_3 + 3) = uVar3;
      *(undefined4 *)((longlong)param_3 + 0x1c) = uVar4;
      puVar6[-1] = 0;
      param_3 = param_3 + 4;
      *puVar6 = 0xf;
      *(undefined1 *)(puVar6 + -3) = 0;
      puVar6 = puVar6 + 4;
    } while (puVar1 != param_2);
  }
  FUN_1486115df(param_3,param_3,param_4);
  return param_3;
}



// FUNCTION 144e5e260 FUN_144e5e260 body=158 status=ok
// SIG undefined FUN_144e5e260(void)

undefined8 *
FUN_144e5e260(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    lVar7 = (longlong)param_3 - (longlong)param_1;
    puVar6 = param_1 + 3;
    do {
      puVar1 = puVar6 + 6;
      *param_3 = 0;
      param_3[1] = 0;
      *(undefined8 *)(lVar7 + -0x38 + (longlong)puVar1) = 0;
      *(undefined8 *)((longlong)puVar6 + lVar7) = 0;
      uVar3 = *(undefined4 *)((longlong)puVar6 + -0x14);
      uVar4 = *(undefined4 *)(puVar6 + -2);
      uVar5 = *(undefined4 *)((longlong)puVar6 + -0xc);
      *(undefined4 *)param_3 = *(undefined4 *)(puVar6 + -3);
      *(undefined4 *)((longlong)param_3 + 4) = uVar3;
      *(undefined4 *)(param_3 + 1) = uVar4;
      *(undefined4 *)((longlong)param_3 + 0xc) = uVar5;
      uVar3 = *(undefined4 *)((longlong)puVar6 + -4);
      uVar4 = *(undefined4 *)puVar6;
      uVar5 = *(undefined4 *)((longlong)puVar6 + 4);
      *(undefined4 *)(param_3 + 2) = *(undefined4 *)(puVar6 + -1);
      *(undefined4 *)((longlong)param_3 + 0x14) = uVar3;
      *(undefined4 *)(param_3 + 3) = uVar4;
      *(undefined4 *)((longlong)param_3 + 0x1c) = uVar5;
      puVar6[-1] = 0;
      param_3 = param_3 + 6;
      *puVar6 = 0xf;
      *(undefined1 *)(puVar6 + -3) = 0;
      *(undefined4 *)(lVar7 + -0x28 + (longlong)puVar1) = *(undefined4 *)(puVar6 + 1);
      *(undefined4 *)(lVar7 + -0x24 + (longlong)puVar1) = *(undefined4 *)((longlong)puVar6 + 0xc);
      *(undefined4 *)(lVar7 + -0x20 + (longlong)puVar1) = *(undefined4 *)(puVar6 + 2);
      *(undefined1 *)(lVar7 + -0x1c + (longlong)puVar1) = *(undefined1 *)((longlong)puVar6 + 0x14);
      puVar2 = puVar6 + 3;
      puVar6 = puVar1;
    } while (puVar2 != param_2);
  }
  FUN_144e5c970(param_3,param_3,param_4);
  return param_3;
}



// FUNCTION 144e5e300 FUN_144e5e300 body=8 status=ok
// SIG undefined FUN_144e5e300(void)

char * FUN_144e5e300(void)

{
  return "envmap";
}



// FUNCTION 144e5e310 FUN_144e5e310 body=70 status=ok
// SIG undefined FUN_144e5e310(void)

undefined8 * FUN_144e5e310(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_144e472d0(puVar1);
    *puVar1 = Imf_3_2::TypedAttribute<Imf_3_2::Envmap>::vftable;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144e5e360 FUN_144e5e360 body=133 status=ok
// SIG undefined FUN_144e5e360(void)

longlong * FUN_144e5e360(undefined8 param_1)

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
    *plVar1 = (longlong)Imf_3_2::TypedAttribute<Imf_3_2::Envmap>::vftable;
  }
  if (*(code **)(*plVar1 + 0x28) == FUN_144e5e450) {
    lVar2 = FUN_144e5e4e0(param_1);
    *(undefined4 *)(plVar1 + 1) = *(undefined4 *)(lVar2 + 8);
    return plVar1;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 144e5e3f0 FUN_144e5e3f0 body=40 status=ok
// SIG undefined FUN_144e5e3f0(void)

void FUN_144e5e3f0(longlong param_1,longlong *param_2)

{
  undefined1 local_res8 [32];
  
  local_res8[0] = *(undefined1 *)(param_1 + 8);
  (**(code **)(*param_2 + 8))(param_2,local_res8,1);
  return;
}



// FUNCTION 144e5e420 FUN_144e5e420 body=46 status=ok
// SIG undefined FUN_144e5e420(void)

void FUN_144e5e420(longlong param_1,longlong *param_2)

{
  byte local_res8 [32];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,1);
  *(uint *)(param_1 + 8) = (uint)local_res8[0];
  return;
}



// FUNCTION 144e5e450 FUN_144e5e450 body=126 status=ok
// SIG undefined FUN_144e5e450(void)

void FUN_144e5e450(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imf_3_2::Envmap>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e5e4e0 FUN_144e5e4e0 body=109 status=ok
// SIG undefined FUN_144e5e4e0(void)

void FUN_144e5e4e0(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imf_3_2::Envmap>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e5e560 FUN_144e5e560 body=19 status=ok
// SIG undefined FUN_144e5e560(void)

void FUN_144e5e560(void)

{
  FUN_144e475b0("envmap",FUN_144e5e310);
  return;
}



// FUNCTION 144e5e580 FUN_144e5e580 body=62 status=ok
// SIG undefined FUN_144e5e580(void)

undefined8 * FUN_144e5e580(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::TypedAttribute<Imf_3_2::Envmap>::vftable;
  FUN_144e472e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144e5e5c0 FUN_144e5e5c0 body=50 status=ok
// SIG undefined FUN_144e5e5c0(void)

undefined8 * FUN_144e5e5c0(undefined8 *param_1,undefined4 *param_2)

{
  FUN_144e472d0();
  *param_1 = Imf_3_2::TypedAttribute<float>::vftable;
  *(undefined4 *)(param_1 + 1) = *param_2;
  return param_1;
}



// FUNCTION 144e5e600 FUN_144e5e600 body=15 status=ok
// SIG undefined FUN_144e5e600(void)

void FUN_144e5e600(undefined8 *param_1)

{
  *param_1 = Imf_3_2::TypedAttribute<float>::vftable;
  FUN_144e472e0();
  return;
}



// FUNCTION 144e5e610 FUN_144e5e610 body=5 status=ok
// SIG undefined FUN_144e5e610(void)

longlong FUN_144e5e610(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144e5e620 FUN_144e5e620 body=8 status=ok
// SIG undefined FUN_144e5e620(void)

char * FUN_144e5e620(void)

{
  return "float";
}



// FUNCTION 144e5e630 FUN_144e5e630 body=70 status=ok
// SIG undefined FUN_144e5e630(void)

undefined8 * FUN_144e5e630(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_144e472d0(puVar1);
    *puVar1 = Imf_3_2::TypedAttribute<float>::vftable;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 144e5e680 FUN_144e5e680 body=133 status=ok
// SIG undefined FUN_144e5e680(void)

longlong * FUN_144e5e680(undefined8 param_1)

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
    *plVar1 = (longlong)Imf_3_2::TypedAttribute<float>::vftable;
  }
  if (*(code **)(*plVar1 + 0x28) == FUN_144e5e7c0) {
    lVar2 = FUN_144e5e850(param_1);
    *(undefined4 *)(plVar1 + 1) = *(undefined4 *)(lVar2 + 8);
    return plVar1;
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 144e5e710 FUN_144e5e710 body=76 status=ok
// SIG undefined FUN_144e5e710(void)

void FUN_144e5e710(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = *(undefined4 *)(param_1 + 8);
  (**(code **)(*param_2 + 8))(param_2,local_res8,4);
  return;
}



// FUNCTION 144e5e760 FUN_144e5e760 body=88 status=ok
// SIG undefined FUN_144e5e760(void)

void FUN_144e5e760(longlong param_1,longlong *param_2)

{
  undefined4 local_res8 [8];
  
  (**(code **)(*param_2 + 0x10))(param_2,local_res8,4);
  *(undefined4 *)(param_1 + 8) = local_res8[0];
  return;
}



// FUNCTION 144e5e7c0 FUN_144e5e7c0 body=126 status=ok
// SIG undefined FUN_144e5e7c0(void)

void FUN_144e5e7c0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_2,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<float>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e5e850 FUN_144e5e850 body=109 status=ok
// SIG undefined FUN_144e5e850(void)

void FUN_144e5e850(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  lVar1 = __RTDynamicCast(param_1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<float>::RTTI_Type_Descriptor);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144e5e8d0 FUN_144e5e8d0 body=19 status=ok
// SIG undefined FUN_144e5e8d0(void)

void FUN_144e5e8d0(void)

{
  FUN_144e475b0("float",FUN_144e5e630);
  return;
}



// FUNCTION 144e5e8f0 FUN_144e5e8f0 body=62 status=ok
// SIG undefined FUN_144e5e8f0(void)

undefined8 * FUN_144e5e8f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::TypedAttribute<float>::vftable;
  FUN_144e472e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}


