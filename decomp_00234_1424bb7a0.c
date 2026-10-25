// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1424bb7a0 FUN_1424bb7a0 body=119 status=ok
// SIG undefined FUN_1424bb7a0(void)

void FUN_1424bb7a0(int *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_1424a3b00();
  if (*param_1 < 1) {
    local_28 = 0;
    FUN_1424bbe50(uVar2,&local_28,param_1);
    lVar1 = local_28;
    if (*param_1 < 1) {
      lVar3 = (**(code **)(**(longlong **)(local_28 + 0x18) + 0x18))();
      FUN_142537ca0(lVar1);
      if (lVar3 == 0) {
        *param_1 = 7;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424bb830 FUN_1424bb830 body=137 status=ok
// SIG undefined FUN_1424bb830(void)

void FUN_1424bb830(undefined8 param_1,int param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == 1) {
    if (*param_3 < 1) {
      local_28 = 0;
      FUN_1424bbe50(param_1,&local_28,param_3);
      lVar1 = local_28;
      if (*param_3 < 1) {
        lVar2 = (**(code **)(**(longlong **)(local_28 + 0x18) + 0x18))();
        FUN_142537ca0(lVar1);
        if (lVar2 == 0) {
          *param_3 = 7;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424bb8e0 FUN_1424bb8e0 body=13 status=ok
// SIG undefined FUN_1424bb8e0(void)

void FUN_1424bb8e0(undefined8 param_1,undefined8 param_2)

{
  FUN_1424bb9f0(param_1,2,param_2);
  return;
}



// FUNCTION 1424bb8f0 FUN_1424bb8f0 body=86 status=ok
// SIG undefined FUN_1424bb8f0(void)

void FUN_1424bb8f0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (DAT_14c77ea9c != 0) {
    lVar1 = FUN_1424bb950();
    if (lVar1 != 0) {
      FUN_142532630(DAT_14c77ea38,param_1,3,param_2);
      return;
    }
  }
  FUN_1424bbf60(param_1,3,0,param_2);
  return;
}



// FUNCTION 1424bb950 FUN_1424bb950 body=126 status=ok
// SIG undefined FUN_1424bb950(void)

longlong FUN_1424bb950(void)

{
  char cVar1;
  longlong lVar2;
  
  if (DAT_14c77ea9c != 2) {
    cVar1 = FUN_142501800(&DAT_14c77ea9c);
    if (cVar1 != '\0') {
      FUN_14251f960(0x15,FUN_1424bd090);
      lVar2 = thunk_FUN_1424da030(0x198);
      if (lVar2 != 0) {
        FUN_1424bd0f0(lVar2);
      }
      DAT_14c77ea38 = lVar2;
      FUN_1425019c0(&DAT_14c77ea9c);
    }
  }
  return DAT_14c77ea38;
}



// FUNCTION 1424bb9d0 Unwind@1424bb9d0 body=30 status=ok
// SIG undefined Unwind@1424bb9d0(void)

void Unwind_1424bb9d0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1424bb9f0 FUN_1424bb9f0 body=207 status=ok
// SIG undefined FUN_1424bb9f0(void)

void FUN_1424bb9f0(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  int *local_58;
  int local_4c;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 2) {
    local_48[2] = 0;
    local_48[3] = 0;
    local_48[0] = 0;
    local_48[1] = 0;
    local_4c = 0;
    local_58 = &local_4c;
    iVar1 = FUN_1424a5490(param_1,&DAT_14993a328,local_48,0x20);
    param_2 = 0xc;
    if (local_48[0] != 0x746e756f636361) {
      param_2 = 2;
    }
    if (0 < local_4c) {
      param_2 = 2;
    }
    if (iVar1 < 1) {
      param_2 = 2;
    }
  }
  if (DAT_14c77ea9c != 0) {
    lVar2 = FUN_1424bb950();
    if (lVar2 != 0) {
      FUN_142532630(DAT_14c77ea38,param_1,param_2,param_3);
      goto LAB_1424bbaaf;
    }
  }
  FUN_1424bbf60(param_1,param_2,0,param_3);
LAB_1424bbaaf:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
}



// FUNCTION 1424bbad0 FUN_1424bbad0 body=8 status=ok
// SIG undefined FUN_1424bbad0(void)

undefined1 FUN_1424bbad0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x148);
}



// FUNCTION 1424bbae0 FUN_1424bbae0 body=7 status=ok
// SIG undefined FUN_1424bbae0(void)

void FUN_1424bbae0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x148) = param_2;
  return;
}



// FUNCTION 1424bbaf0 FUN_1424bbaf0 body=7 status=ok
// SIG undefined FUN_1424bbaf0(void)

undefined4 FUN_1424bbaf0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x14c);
}



// FUNCTION 1424bbb00 FUN_1424bbb00 body=55 status=ok
// SIG undefined FUN_1424bbb00(void)

void FUN_1424bbb00(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_142501310(param_2,2000000000);
  iVar2 = FUN_142501300(0,uVar1);
  *(int *)(param_1 + 0x14c) = iVar2;
  if (iVar2 < *(int *)(param_1 + 0x150)) {
    *(int *)(param_1 + 0x150) = iVar2;
  }
  return;
}



// FUNCTION 1424bbb40 FUN_1424bbb40 body=7 status=ok
// SIG undefined FUN_1424bbb40(void)

undefined4 FUN_1424bbb40(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x150);
}



// FUNCTION 1424bbb50 FUN_1424bbb50 body=55 status=ok
// SIG undefined FUN_1424bbb50(void)

void FUN_1424bbb50(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_142501310(param_2,0x7f);
  iVar2 = FUN_142501300(0,uVar1);
  *(int *)(param_1 + 0x150) = iVar2;
  if (*(int *)(param_1 + 0x14c) < iVar2) {
    *(int *)(param_1 + 0x14c) = iVar2;
  }
  return;
}



// FUNCTION 1424bbb90 FUN_1424bbb90 body=7 status=ok
// SIG undefined FUN_1424bbb90(void)

undefined4 FUN_1424bbb90(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x154);
}



// FUNCTION 1424bbba0 FUN_1424bbba0 body=55 status=ok
// SIG undefined FUN_1424bbba0(void)

void FUN_1424bbba0(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_142501310(param_2,2000000000);
  iVar2 = FUN_142501300(0,uVar1);
  *(int *)(param_1 + 0x154) = iVar2;
  if (iVar2 < *(int *)(param_1 + 0x158)) {
    *(int *)(param_1 + 0x158) = iVar2;
  }
  return;
}



// FUNCTION 1424bbbe0 FUN_1424bbbe0 body=7 status=ok
// SIG undefined FUN_1424bbbe0(void)

undefined4 FUN_1424bbbe0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x158);
}



// FUNCTION 1424bbbf0 FUN_1424bbbf0 body=55 status=ok
// SIG undefined FUN_1424bbbf0(void)

void FUN_1424bbbf0(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_142501310(param_2,0x7f);
  iVar2 = FUN_142501300(0,uVar1);
  *(int *)(param_1 + 0x158) = iVar2;
  if (*(int *)(param_1 + 0x154) < iVar2) {
    *(int *)(param_1 + 0x154) = iVar2;
  }
  return;
}



// FUNCTION 1424bbc30 FUN_1424bbc30 body=59 status=ok
// SIG undefined FUN_1424bbc30(void)

void FUN_1424bbc30(longlong param_1,longlong param_2,int *param_3)

{
  if (*param_3 < 1) {
    if (param_2 == 0) {
      *(undefined2 *)(param_1 + 0x15e) = 0;
    }
    else {
      FUN_142504720((undefined2 *)(param_1 + 0x15e),param_2,3);
      *(undefined2 *)(param_1 + 0x164) = 0;
    }
  }
  return;
}



// FUNCTION 1424bbc70 FUN_1424bbc70 body=108 status=ok
// SIG undefined FUN_1424bbc70(void)

void FUN_1424bbc70(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if (*(short *)(param_1 + 0x15e) != 0) {
    FUN_142504720(param_2,param_1 + 0x15e,3);
    *(undefined2 *)(param_2 + 6) = 0;
    return;
  }
  lVar1 = FUN_142537bc0(param_1,1);
  if (lVar1 == 0) {
    lVar1 = thunk_FUN_1424a3ae0();
  }
  FUN_14253b540(lVar1,param_2,4,param_3);
  return;
}



// FUNCTION 1424bbce0 FUN_1424bbce0 body=36 status=ok
// SIG undefined FUN_1424bbce0(void)

void FUN_1424bbce0(longlong param_1,uint param_2,int *param_3)

{
  if (0 < *param_3) {
    return;
  }
  if ((param_2 & 0xffffff00) == 0x100) {
    *(uint *)(param_1 + 0x168) = param_2;
    return;
  }
  *param_3 = 1;
  return;
}



// FUNCTION 1424bbd10 FUN_1424bbd10 body=29 status=ok
// SIG undefined FUN_1424bbd10(void)

undefined4 FUN_1424bbd10(longlong param_1,int param_2,int *param_3)

{
  if (0 < *param_3) {
    return 0;
  }
  if (param_2 == 1) {
    return *(undefined4 *)(param_1 + 0x168);
  }
  *param_3 = 1;
  return 0;
}



// FUNCTION 1424bbd30 FUN_1424bbd30 body=236 status=ok
// SIG undefined FUN_1424bbd30(void)

undefined8 * FUN_1424bbd30(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 local_108 [224];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_1412ae150(local_108,*(undefined8 *)(param_1 + 0x38),0,0,0);
  if ((DAT_14c77ea9c == 0) || (lVar1 = FUN_1424bb950(), lVar1 == 0)) {
    puVar2 = (undefined8 *)FUN_1424bbf60(local_108,1,0,param_3);
  }
  else {
    puVar2 = (undefined8 *)FUN_142532630(DAT_14c77ea38,local_108,1,param_3);
  }
  FUN_1414b3f60(local_108);
  if (*param_3 < 1) {
    puVar3 = (undefined8 *)thunk_FUN_1424da030(0x20);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = icu_64::SharedNumberFormat::vftable;
      puVar3[3] = puVar2;
      FUN_142537c90(puVar3);
      return puVar3;
    }
    *param_3 = 7;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424bbe20 Unwind@1424bbe20 body=39 status=ok
// SIG undefined Unwind@1424bbe20(void)

void Unwind_1424bbe20(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x30);
  return;
}



// FUNCTION 1424bbe50 FUN_1424bbe50 body=158 status=ok
// SIG undefined FUN_1424bbe50(void)

void FUN_1424bbe50(undefined8 param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  undefined **local_120;
  undefined4 local_118;
  undefined1 local_114;
  undefined1 local_110 [224];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar1 = FUN_14253ea50(param_3);
  if (*param_3 < 1) {
    local_118 = 0;
    local_114 = 0;
    local_120 = icu_64::LocaleCacheKey<icu_64::SharedNumberFormat>::vftable;
    FUN_1424a3ce0(local_110,param_1);
    FUN_1424bd410(uVar1,&local_120,0,param_2,param_3);
    local_120 = icu_64::LocaleCacheKey<icu_64::SharedNumberFormat>::vftable;
    FUN_1414b3f60(local_110);
    thunk_FUN_1424b70d0(&local_120);
  }
  return;
}



// FUNCTION 1424bbef0 Unwind@1424bbef0 body=63 status=ok
// SIG undefined Unwind@1424bbef0(void)

void Unwind_1424bbef0(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x28) = icu_64::LocaleCacheKey<icu_64::SharedNumberFormat>::vftable;
  FUN_1414b3f60(param_2 + 0x38);
  thunk_FUN_1424b70d0(param_2 + 0x28);
  return;
}



// FUNCTION 1424bbf30 Unwind@1424bbf30 body=43 status=ok
// SIG undefined Unwind@1424bbf30(void)

void Unwind_1424bbf30(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x28);
  return;
}



// FUNCTION 1424bbf60 FUN_1424bbf60 body=2321 status=ok
// SIG undefined FUN_1424bbf60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1424bbf60(longlong param_1,uint param_2,char param_3,int *param_4)

{
  undefined1 uVar1;
  wchar_t *_Str;
  undefined8 *puVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  size_t sVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong *unaff_R13;
  int local_378;
  char local_374;
  undefined1 local_298 [224];
  undefined **local_1b8;
  undefined2 local_1b0;
  undefined **local_178;
  undefined2 local_170;
  undefined **local_138;
  undefined2 local_130;
  longlong local_f8;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined4 local_c0;
  undefined **local_b8;
  short local_b0;
  int local_ac;
  longlong *local_78;
  undefined8 *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_4) {
    return (longlong *)0x0;
  }
  if (0x10 < param_2) {
    *param_4 = 1;
    return (longlong *)0x0;
  }
  if ((0x13c1eUL >> ((ulonglong)param_2 & 0x3f) & 1) == 0) {
    *param_4 = 0x10;
    return (longlong *)0x0;
  }
  if ((((param_3 == '\0') &&
       (iVar6 = FUN_1424a5490(param_1,"compat",&local_378,8,param_4), 0 < iVar6)) && (*param_4 < 1))
     && (((local_374 == '\0' && local_378 == 0x74736f68 && (uVar5 = param_2 - 1, uVar5 < 0x10)) &&
         ((0x9e03U >> (uVar5 & 0x1f) & 1) != 0)))) {
    uVar1 = (&DAT_14993a1be)[(int)uVar5];
    plVar11 = (longlong *)thunk_FUN_1424da030(0x278);
    if (plVar11 == (longlong *)0x0) {
      if (*param_4 < 1) {
        *param_4 = 7;
        unaff_R13 = (longlong *)0x0;
      }
      else {
        unaff_R13 = (longlong *)0x0;
      }
    }
    else {
      local_68 = plVar11;
      FUN_14253f9b0(plVar11,param_1,uVar1,param_4);
      unaff_R13 = local_68;
      if (*param_4 < 1) {
        return local_68;
      }
      (**(code **)*local_68)(local_68,1);
    }
  }
  if ((DAT_14c77eaa4 != 2) && (cVar3 = FUN_142501800(&DAT_14c77eaa4), cVar3 != '\0')) {
    FUN_14251f960(0x15,FUN_1424bd090);
    local_378 = 0;
    DAT_14c77ea40 = FUN_142501e10(&LAB_142503320,&LAB_142503330,0,&local_378);
    if (local_378 < 1) {
      FUN_142502350(DAT_14c77ea40,&LAB_1424bd3f0);
    }
    else {
      DAT_14c77ea40 = 0;
    }
    FUN_1425019c0(&DAT_14c77eaa4);
  }
  if (DAT_14c77ea40 == 0) {
    local_78 = (longlong *)0x0;
    plVar11 = (longlong *)FUN_142540ae0(param_1,param_4);
    iVar6 = *param_4;
    plVar7 = plVar11;
  }
  else {
    local_78 = (longlong *)0x0;
    uVar4 = FUN_1424a4050(param_1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c77ea98) && (FUN_144b3d300(&DAT_14c77ea98), DAT_14c77ea98 == -1)) {
      _DAT_14c77ea88 = 0;
      uRam000000014c77ea90 = 0;
      _DAT_14c77ea78 = 0;
      uRam000000014c77ea80 = 0;
      _DAT_14c77ea68 = 0;
      uRam000000014c77ea70 = 0;
      _DAT_14c77ea58 = 0;
      uRam000000014c77ea60 = 0;
      _DAT_14c77ea48 = 0;
      uRam000000014c77ea50 = 0;
      _Mtx_init_in_situ(&DAT_14c77ea48,2);
      atexit((_func_5014 *)&LAB_1424bcd90);
      _Init_thread_footer(&DAT_14c77ea98);
    }
    FUN_142501320(&DAT_14c77ea48);
    plVar7 = (longlong *)FUN_142502740(DAT_14c77ea40,uVar4);
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)FUN_142540ae0(param_1,param_4);
      FUN_142502d30(DAT_14c77ea40,uVar4,plVar7,param_4);
    }
    FUN_142501400(&DAT_14c77ea48);
    plVar11 = (longlong *)0x0;
    iVar6 = *param_4;
  }
  if (iVar6 < 1) {
    if ((param_3 == '\0') || (local_78 = plVar11, cVar3 = FUN_1425410d0(plVar7), cVar3 == '\0')) {
      local_70 = (undefined8 *)0x0;
      local_138 = &PTR_FUN_149e18960;
      local_130 = 2;
      local_68 = plVar11;
      lVar8 = FUN_1424ebfe0(0,*(undefined8 *)(param_1 + 0x28),param_4);
      plVar12 = (longlong *)0x0;
      if (*param_4 < 1) {
        local_58 = lVar8;
        local_50 = (longlong *)thunk_FUN_1424da030(0xb00);
        if (local_50 != (longlong *)0x0) {
          FUN_1425423f0(local_50,param_1,param_4);
        }
        FUN_1424bcda0(&local_70,local_50,param_4);
        if (*param_4 < 1) {
          uVar4 = *(undefined4 *)(&DAT_14993a170 + (ulonglong)param_2 * 4);
          uVar9 = FUN_1425410c0(plVar7);
          uVar9 = FUN_142544680(param_1,uVar9,uVar4,param_4);
          FUN_1424a7060(&local_378,1,uVar9,0xffffffff);
          FUN_1424a7ca0(&local_138,&local_378);
          FUN_140859a90(&local_378);
          if (*param_4 < 1) {
            if (((param_2 < 0x11) && ((0x13404U >> (param_2 & 0x1f) & 1) != 0)) &&
               (_Str = (wchar_t *)local_70[0x12e], _Str != (wchar_t *)0x0)) {
              sVar10 = wcslen(_Str);
              FUN_1424b9350(&local_138,_Str,sVar10 & 0xffffffff);
            }
            local_60 = (longlong *)0x0;
            cVar3 = FUN_1425410d0(plVar7);
            if (cVar3 != '\0') {
              local_b8 = &PTR_FUN_149e18960;
              local_b0 = 2;
              local_1b8 = &PTR_FUN_149e18960;
              local_1b0 = 2;
              local_178 = &PTR_FUN_149e18960;
              local_170 = 2;
              FUN_1424a3c00(&local_378);
              (**(code **)(*plVar7 + 0x10))(plVar7,local_298);
              FUN_1424a7600(&local_b8,local_298,0);
              FUN_140859a90(local_298);
              iVar6 = local_ac;
              if (-1 < local_b0) {
                iVar6 = (int)local_b0 >> 5;
              }
              uVar5 = FUN_1424a8940(&local_b8,0x2f,0,iVar6);
              if (-1 < local_b0) {
                local_ac = (int)local_b0 >> 5;
              }
              iVar6 = FUN_1424a8ab0(&local_b8,0x2f,0,local_ac);
              if ((int)uVar5 < iVar6) {
                local_f8 = (longlong)&local_ec + 1;
                local_f0 = 0x28;
                local_ec = 0;
                local_c0 = 0;
                FUN_1424a84d0(&local_b8,local_298,0,uVar5);
                FUN_142503780(&local_f8,local_298,param_4);
                FUN_140859a90(local_298);
                FUN_1424bce00(&local_1b8,&local_b8,uVar5 + 1,~uVar5 + iVar6);
                FUN_1424bce50(&local_178,&local_b8,iVar6 + 1);
                FUN_1424a4210(local_298,local_f8);
                FUN_1424a3e60(&local_378,local_298);
                FUN_1414b3f60(local_298);
                FUN_1424a7060(local_298,1,L"SpelloutRules",0xffffffff);
                cVar3 = FUN_1424bcee0(&local_1b8,local_298);
                FUN_140859a90(local_298);
                if ((char)local_ec != '\0') {
                  FUN_1424da110(local_f8);
                }
                cVar3 = (cVar3 != '\0') * '\x03';
              }
              else {
                FUN_1424a3d10(&local_378,param_1);
                cVar3 = '\x03';
                FUN_1424a7600(&local_178,&local_b8,0);
              }
              plVar12 = (longlong *)thunk_FUN_1424da030(0x2f8);
              if (plVar12 == (longlong *)0x0) {
                *param_4 = 7;
                unaff_R13 = (longlong *)0x0;
              }
              else {
                local_50 = plVar12;
                FUN_142545940(plVar12,cVar3,&local_378,param_4);
                plVar12 = local_50;
                (**(code **)(*local_50 + 0x170))(local_50,&local_178,param_4);
              }
              FUN_1414b3f60(&local_378);
              FUN_140859a90(&local_178);
              FUN_140859a90(&local_1b8);
              FUN_140859a90(&local_b8);
              plVar11 = plVar12;
              if (plVar12 != (longlong *)0x0) {
LAB_1424bc756:
                lVar8 = local_58;
                uVar9 = FUN_1424ed0b0(local_58,0,param_4);
                uVar13 = FUN_1424ed0b0(lVar8,1,param_4);
                local_60 = plVar12;
                FUN_142537c10(plVar12,uVar13,uVar9);
                lVar8 = local_58;
                if (*param_4 < 1) goto LAB_1424bc31c;
                unaff_R13 = (longlong *)0x0;
                plVar11 = plVar12;
              }
              lVar8 = local_58;
              plVar12 = unaff_R13;
              if (plVar11 != (longlong *)0x0) {
                (**(code **)*plVar11)(plVar11,1);
                lVar8 = local_58;
              }
              goto LAB_1424bc31c;
            }
            if (param_2 == 10) {
              local_60 = (longlong *)0x0;
              FUN_1424a7060(&local_378,1,&DAT_14993a1b4,2);
              FUN_1424a7060(local_298,1,&DAT_14993a1ba,1);
              FUN_1424bcf60(&local_138,local_298,&local_378);
              FUN_140859a90(local_298);
              FUN_140859a90(&local_378);
            }
            puVar2 = local_70;
            plVar11 = (longlong *)thunk_FUN_1424da030(0x178);
            if (plVar11 == (longlong *)0x0) {
              *param_4 = 7;
            }
            else {
              local_50 = plVar11;
              FUN_1424c59b0(plVar11,&local_138,puVar2,param_2,param_4);
              local_70 = (undefined8 *)0x0;
              if ((*param_4 < 1) &&
                 ((plVar12 = local_50, param_2 != 0xd ||
                  (FUN_1424c6060(local_50,1,param_4), plVar12 = local_50, *param_4 < 1))))
              goto LAB_1424bc756;
              (**(code **)*local_50)(local_50,1);
            }
          }
        }
        lVar8 = local_58;
        plVar12 = (longlong *)0x0;
      }
LAB_1424bc31c:
      if (lVar8 != 0) {
        FUN_1424ea9f0(lVar8);
      }
      FUN_140859a90(&local_138);
      plVar11 = local_68;
      if (local_70 != (undefined8 *)0x0) {
        (**(code **)*local_70)(local_70,1);
      }
      goto LAB_1424bc201;
    }
    *param_4 = 0x10;
  }
  plVar12 = (longlong *)0x0;
LAB_1424bc201:
  if (plVar11 != (longlong *)0x0) {
    (**(code **)*plVar11)(plVar11,1);
  }
  return plVar12;
}



// FUNCTION 1424bc880 Unwind@1424bc880 body=73 status=ok
// SIG undefined Unwind@1424bc880(void)

void Unwind_1424bc880(undefined8 param_1,longlong param_2)

{
  (**(code **)**(undefined8 **)(param_2 + 0x358))(*(undefined8 **)(param_2 + 0x358),1);
  *(undefined8 *)(param_2 + 0x348) = 0;
  return;
}



// FUNCTION 1424bc8d0 Unwind@1424bc8d0 body=58 status=ok
// SIG undefined Unwind@1424bc8d0(void)

void Unwind_1424bc8d0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x110);
  return;
}



// FUNCTION 1424bc910 Unwind@1424bc910 body=68 status=ok
// SIG undefined Unwind@1424bc910(void)

void Unwind_1424bc910(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x358));
  *(undefined8 *)(param_2 + 0x348) = 0;
  return;
}



// FUNCTION 1424bc960 Unwind@1424bc960 body=58 status=ok
// SIG undefined Unwind@1424bc960(void)

void Unwind_1424bc960(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x110);
  return;
}



// FUNCTION 1424bc9a0 Unwind@1424bc9a0 body=58 status=ok
// SIG undefined Unwind@1424bc9a0(void)

void Unwind_1424bc9a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x110);
  return;
}



// FUNCTION 1424bc9e0 Unwind@1424bc9e0 body=65 status=ok
// SIG undefined Unwind@1424bc9e0(void)

void Unwind_1424bc9e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x348) = 0;
  return;
}



// FUNCTION 1424bca30 Unwind@1424bca30 body=58 status=ok
// SIG undefined Unwind@1424bca30(void)

void Unwind_1424bca30(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x358));
  return;
}



// FUNCTION 1424bca70 Unwind@1424bca70 body=58 status=ok
// SIG undefined Unwind@1424bca70(void)

void Unwind_1424bca70(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x110);
  return;
}



// FUNCTION 1424bcab0 Unwind@1424bcab0 body=58 status=ok
// SIG undefined Unwind@1424bcab0(void)

void Unwind_1424bcab0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x340));
  return;
}



// FUNCTION 1424bcaf0 Unwind@1424bcaf0 body=67 status=ok
// SIG undefined Unwind@1424bcaf0(void)

void Unwind_1424bcaf0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 700) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x2b0));
  }
  return;
}



// FUNCTION 1424bcb40 Unwind@1424bcb40 body=58 status=ok
// SIG undefined Unwind@1424bcb40(void)

void Unwind_1424bcb40(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x358));
  return;
}



// FUNCTION 1424bcb80 Unwind@1424bcb80 body=55 status=ok
// SIG undefined Unwind@1424bcb80(void)

void Unwind_1424bcb80(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x30);
  return;
}



// FUNCTION 1424bcbc0 Unwind@1424bcbc0 body=92 status=ok
// SIG undefined Unwind@1424bcbc0(void)

void Unwind_1424bcbc0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x230);
  FUN_140859a90(param_2 + 0x1f0);
  FUN_140859a90(param_2 + 0x2f0);
  *(undefined8 *)(param_2 + 0x348) = 0;
  return;
}



// FUNCTION 1424bcc20 Unwind@1424bcc20 body=68 status=ok
// SIG undefined Unwind@1424bcc20(void)

void Unwind_1424bcc20(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x348);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}



// FUNCTION 1424bcc70 Unwind@1424bcc70 body=68 status=ok
// SIG undefined Unwind@1424bcc70(void)

void Unwind_1424bcc70(undefined8 param_1,longlong param_2)

{
  FUN_142501400(&DAT_14c77ea48);
  *(undefined8 *)(param_2 + 0x330) = 0;
  return;
}



// FUNCTION 1424bccc0 Unwind@1424bccc0 body=115 status=ok
// SIG undefined Unwind@1424bccc0(void)

void Unwind_1424bccc0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_2 + 0x350) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x350));
  }
  FUN_140859a90(param_2 + 0x270);
  puVar1 = *(undefined8 **)(param_2 + 0x338);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_2 + 0x330) = *(undefined8 *)(param_2 + 0x340);
  return;
}



// FUNCTION 1424bcd40 Unwind@1424bcd40 body=68 status=ok
// SIG undefined Unwind@1424bcd40(void)

void Unwind_1424bcd40(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x330);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}



// FUNCTION 1424bcda0 FUN_1424bcda0 body=91 status=ok
// SIG undefined FUN_1424bcda0(void)

void FUN_1424bcda0(longlong *param_1,undefined8 *param_2,int *param_3)

{
  undefined8 *puVar1;
  
  if (*param_3 < 1) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *param_1 = (longlong)param_2;
    if (param_2 == (undefined8 *)0x0) {
      *param_3 = 7;
    }
  }
  else if (param_2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001424bcdca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_2)(param_2,1);
    return;
  }
  return;
}



// FUNCTION 1424bce00 FUN_1424bce00 body=77 status=ok
// SIG undefined FUN_1424bce00(void)

void FUN_1424bce00(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_1424a8e40();
  if (*(short *)(param_1 + 8) < 0) {
    iVar1 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar1 = (int)*(short *)(param_1 + 8) >> 5;
  }
  FUN_1424a9610(param_1,0,iVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1424bce50 FUN_1424bce50 body=131 status=ok
// SIG undefined FUN_1424bce50(void)

void FUN_1424bce50(longlong param_1,longlong param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_1424a8e40();
  sVar1 = *(short *)(param_2 + 8);
  if (param_3 < 0) {
    iVar4 = *(int *)(param_2 + 0xc);
    iVar2 = (int)sVar1 >> 5;
    iVar3 = 0;
  }
  else {
    iVar2 = (int)sVar1 >> 5;
    iVar4 = *(int *)(param_2 + 0xc);
    iVar3 = iVar2;
    if (sVar1 < 0) {
      iVar3 = iVar4;
    }
    if (param_3 <= iVar3) {
      iVar3 = param_3;
    }
  }
  if (sVar1 < 0) {
    iVar2 = iVar4;
  }
  if (*(short *)(param_1 + 8) < 0) {
    iVar4 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar4 = (int)*(short *)(param_1 + 8) >> 5;
  }
  FUN_1424a9610(param_1,0,iVar4,param_2,iVar3,iVar2 - iVar3);
  return;
}



// FUNCTION 1424bcee0 FUN_1424bcee0 body=121 status=ok
// SIG undefined FUN_1424bcee0(void)

ulonglong FUN_1424bcee0(longlong param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = *(ushort *)(param_2 + 8);
  uVar2 = *(ushort *)(param_1 + 8);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar2 < 0) {
      iVar6 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar6 = (int)(short)uVar2 >> 5;
    }
    if ((short)uVar1 < 0) {
      uVar4 = *(uint *)(param_2 + 0xc);
    }
    else {
      uVar4 = (int)(short)uVar1 >> 5;
    }
    uVar5 = uVar4;
    if ((int)uVar4 < 1) {
      uVar5 = 0;
    }
    if ((uVar1 & 2) == 0) {
      param_2 = *(longlong *)(param_2 + 0x18);
    }
    else {
      param_2 = param_2 + 10;
    }
    uVar3 = FUN_1424a7e30(param_1,0,iVar6,param_2,(int)uVar4 >> 0x1f & uVar4,uVar5);
    return uVar3;
  }
  return (ulonglong)CONCAT11((char)(uVar1 >> 8),(uVar2 & 1) == 0);
}



// FUNCTION 1424bcf60 FUN_1424bcf60 body=110 status=ok
// SIG undefined FUN_1424bcf60(void)

void FUN_1424bcf60(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(short *)(param_3 + 8) < 0) {
    iVar2 = *(int *)(param_3 + 0xc);
  }
  else {
    iVar2 = (int)*(short *)(param_3 + 8) >> 5;
  }
  if (*(short *)(param_2 + 8) < 0) {
    iVar3 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar3 = (int)*(short *)(param_2 + 8) >> 5;
  }
  if (*(short *)(param_1 + 8) < 0) {
    iVar1 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar1 = (int)*(short *)(param_1 + 8) >> 5;
  }
  FUN_1424a8b50(param_1,0,iVar1,param_2,0,iVar3,param_3,0,iVar2);
  return;
}



// FUNCTION 1424bcfd0 FUN_1424bcfd0 body=6 status=ok
// SIG undefined FUN_1424bcfd0(void)

undefined8 FUN_1424bcfd0(void)

{
  return 7;
}



// FUNCTION 1424bcfe0 FUN_1424bcfe0 body=1 status=ok
// SIG undefined FUN_1424bcfe0(void)

void FUN_1424bcfe0(void)

{
  return;
}



// FUNCTION 1424bcff0 FUN_1424bcff0 body=2 status=ok
// SIG undefined FUN_1424bcff0(void)

void FUN_1424bcff0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1424bd000 FUN_1424bd000 body=8 status=ok
// SIG undefined FUN_1424bd000(void)

undefined1 FUN_1424bd000(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x15d);
}



// FUNCTION 1424bd010 FUN_1424bd010 body=70 status=ok
// SIG undefined FUN_1424bd010(void)

undefined8 * FUN_1424bd010(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::SharedNumberFormat::vftable;
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  thunk_FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424bd060 FUN_1424bd060 body=38 status=ok
// SIG undefined FUN_1424bd060(void)

undefined8 FUN_1424bd060(undefined8 param_1,int param_2)

{
  thunk_FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424bd090 FUN_1424bd090 body=90 status=ok
// SIG undefined FUN_1424bd090(void)

undefined8 FUN_1424bd090(void)

{
  LOCK();
  DAT_14c77ea9c = 0;
  UNLOCK();
  if (DAT_14c77ea38 != (undefined8 *)0x0) {
    (**(code **)*DAT_14c77ea38)(DAT_14c77ea38,1);
    DAT_14c77ea38 = (undefined8 *)0x0;
  }
  LOCK();
  DAT_14c77eaa4 = 0;
  UNLOCK();
  if (DAT_14c77ea40 != 0) {
    FUN_142502220();
    DAT_14c77ea40 = 0;
  }
  return 1;
}



// FUNCTION 1424bd0f0 FUN_1424bd0f0 body=214 status=ok
// SIG undefined FUN_1424bd0f0(void)

longlong * FUN_1424bd0f0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 local_70 [16];
  undefined8 *local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1424a7060(local_70,1,L"Number Format",0xffffffff);
  FUN_142532400(param_1,local_70);
  FUN_140859a90(local_70);
  *param_1 = (longlong)icu_64::ICUNumberFormatService::vftable;
  local_70[0] = 0;
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0x90);
  local_28 = param_1;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    local_30 = puVar1;
    FUN_142532f00(puVar1);
    *local_30 = icu_64::ICUNumberFormatFactory::vftable;
    puVar1 = local_30;
  }
  (**(code **)(*local_28 + 0x40))(local_28,puVar1,local_70);
  return local_28;
}



// FUNCTION 1424bd1d0 Unwind@1424bd1d0 body=37 status=ok
// SIG undefined Unwind@1424bd1d0(void)

void Unwind_1424bd1d0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1424bd200 Unwind@1424bd200 body=37 status=ok
// SIG undefined Unwind@1424bd200(void)

void Unwind_1424bd200(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x68));
  return;
}



// FUNCTION 1424bd230 Unwind@1424bd230 body=37 status=ok
// SIG undefined Unwind@1424bd230(void)

void Unwind_1424bd230(undefined8 param_1,longlong param_2)

{
  FUN_142532480(*(undefined8 *)(param_2 + 0x70));
  return;
}



// FUNCTION 1424bd260 FUN_1424bd260 body=38 status=ok
// SIG undefined FUN_1424bd260(void)

undefined8 FUN_1424bd260(undefined8 param_1,int param_2)

{
  FUN_142532480();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424bd290 FUN_1424bd290 body=20 status=ok
// SIG undefined FUN_1424bd290(void)

bool FUN_1424bd290(void)

{
  int iVar1;
  
  iVar1 = FUN_142536560();
  return iVar1 == 1;
}



// FUNCTION 1424bd2b0 FUN_1424bd2b0 body=10 status=ok
// SIG undefined FUN_1424bd2b0(void)

void FUN_1424bd2b0(undefined8 param_1,longlong *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001424bd2b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x18))(param_2);
  return;
}



// FUNCTION 1424bd2c0 FUN_1424bd2c0 body=119 status=ok
// SIG undefined FUN_1424bd2c0(void)

undefined8 FUN_1424bd2c0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 local_110 [224];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar1 = (**(code **)(*param_2 + 0x48))(param_2);
  FUN_1424a3c00(local_110);
  (**(code **)(*param_2 + 0x58))(param_2,local_110);
  uVar2 = FUN_1424bbf60(local_110,uVar1,0,param_4);
  FUN_1414b3f60(local_110);
  return uVar2;
}



// FUNCTION 1424bd340 Unwind@1424bd340 body=43 status=ok
// SIG undefined Unwind@1424bd340(void)

void Unwind_1424bd340(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x28);
  return;
}



// FUNCTION 1424bd370 FUN_1424bd370 body=38 status=ok
// SIG undefined FUN_1424bd370(void)

undefined8 FUN_1424bd370(undefined8 param_1,int param_2)

{
  FUN_142532fc0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424bd3a0 FUN_1424bd3a0 body=19 status=ok
// SIG undefined FUN_1424bd3a0(void)

void FUN_1424bd3a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1424bbf60(param_2,param_3,0,param_5);
  return;
}



// FUNCTION 1424bd3c0 FUN_1424bd3c0 body=38 status=ok
// SIG undefined FUN_1424bd3c0(void)

undefined8 FUN_1424bd3c0(undefined8 param_1,int param_2)

{
  thunk_FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424bd410 FUN_1424bd410 body=167 status=ok
// SIG undefined FUN_1424bd410(void)

void FUN_1424bd410(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  int *param_5)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  int *local_38;
  longlong local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < *param_5) goto LAB_1424bd4aa;
  local_24 = 0;
  local_30 = 0;
  local_38 = &local_24;
  FUN_14253f870(param_1,param_2,&local_30,param_3);
  lVar1 = local_30;
  if ((local_24 < 1) && (*param_4 != local_30)) {
    if (*param_4 != 0) {
      FUN_142537ca0();
    }
    *param_4 = lVar1;
    if (lVar1 != 0) {
      FUN_142537c90(lVar1);
LAB_1424bd493:
      FUN_142537ca0(lVar1);
    }
  }
  else if (local_30 != 0) goto LAB_1424bd493;
  if ((*param_5 == 0) || (0 < local_24)) {
    *param_5 = local_24;
  }
LAB_1424bd4aa:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 1424bd4c0 FUN_1424bd4c0 body=60 status=ok
// SIG undefined FUN_1424bd4c0(void)

undefined8 * FUN_1424bd4c0(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::LocaleCacheKey<icu_64::SharedNumberFormat>::vftable;
  FUN_1414b3f60(param_1 + 2);
  thunk_FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424bd500 FUN_1424bd500 body=76 status=ok
// SIG undefined FUN_1424bd500(void)

int FUN_1424bd500(longlong param_1)

{
  int iVar1;
  int iVar2;
  char *_Str;
  size_t sVar3;
  
  _Str = (char *)__std_type_info_name(0x14c6d8688,&DAT_14c793310);
  sVar3 = strlen(_Str);
  iVar1 = FUN_142504d90(_Str,sVar3 & 0xffffffff);
  iVar2 = FUN_1424a4050(param_1 + 0x10);
  return iVar2 + iVar1 * 0x25;
}



// FUNCTION 1424bd550 FUN_1424bd550 body=102 status=ok
// SIG undefined FUN_1424bd550(void)

undefined8 * FUN_1424bd550(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = icu_64::CacheKeyBase::vftable;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined1 *)((longlong)puVar1 + 0xc) = 0;
    *puVar1 = icu_64::LocaleCacheKey<icu_64::SharedNumberFormat>::vftable;
    FUN_1424a3ce0(puVar1 + 2,param_1 + 0x10);
  }
  return puVar1;
}



// FUNCTION 1424bd5c0 Unwind@1424bd5c0 body=43 status=ok
// SIG undefined Unwind@1424bd5c0(void)

void Unwind_1424bd5c0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  thunk_FUN_1424b70d0(uVar1);
  FUN_1401773f0(uVar1);
  return;
}



// FUNCTION 1424bd5f0 FUN_1424bd5f0 body=94 status=ok
// SIG undefined FUN_1424bd5f0(void)

undefined8 FUN_1424bd5f0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1 == param_2) {
    uVar4 = 1;
  }
  else {
    lVar2 = __RTtypeid();
    lVar3 = __RTtypeid(param_2);
    iVar1 = __std_type_info_compare(lVar2 + 8,lVar3 + 8);
    if (iVar1 == 0) {
      uVar4 = FUN_1424a3f70(param_1 + 0x10,param_2 + 0x10);
      return uVar4;
    }
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 1424bd650 FUN_1424bd650 body=43 status=ok
// SIG undefined FUN_1424bd650(void)

char * FUN_1424bd650(longlong param_1,char *param_2,int param_3)

{
  strncpy(param_2,*(char **)(param_1 + 0x38),(longlong)param_3);
  param_2[(longlong)param_3 - 1] = '\0';
  return param_2;
}



// FUNCTION 1424bd680 FUN_1424bd680 body=2 status=ok
// SIG undefined FUN_1424bd680(void)

void FUN_1424bd680(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1424bd690 FUN_1424bd690 body=10 status=ok
// SIG undefined FUN_1424bd690(void)

undefined8 FUN_1424bd690(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  *param_3 = 0x10;
  return 0;
}



// FUNCTION 1424bd6a0 FUN_1424bd6a0 body=62 status=ok
// SIG undefined FUN_1424bd6a0(void)

void FUN_1424bd6a0(undefined8 *param_1)

{
  *param_1 = icu_64::DateFmtBestPatternKey::vftable;
  FUN_140859a90(param_1 + 0x1e);
  *param_1 = icu_64::LocaleCacheKey<icu_64::DateFmtBestPattern>::vftable;
  FUN_1414b3f60(param_1 + 2);
  thunk_FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 1424bd6e0 FUN_1424bd6e0 body=59 status=ok
// SIG undefined FUN_1424bd6e0(void)

undefined8 * FUN_1424bd6e0(undefined8 *param_1)

{
  FUN_142537a10();
  *param_1 = icu_64::DateFormat::vftable;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x10000000000;
  return param_1;
}



// FUNCTION 1424bd720 FUN_1424bd720 body=181 status=ok
// SIG undefined FUN_1424bd720(void)

undefined8 * FUN_1424bd720(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_142537a40();
  *param_1 = icu_64::DateFormat::vftable;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x10000000000;
  if (param_1 != param_2) {
    if ((longlong *)param_2[0x29] == (longlong *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)(*(longlong *)param_2[0x29] + 0x10))();
    }
    param_1[0x29] = uVar1;
    if ((longlong *)param_2[0x2a] == (longlong *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)(*(longlong *)param_2[0x2a] + 0x18))();
    }
    param_1[0x2a] = uVar1;
    *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x2b);
    *(undefined4 *)((longlong)param_1 + 0x15c) = *(undefined4 *)((longlong)param_2 + 0x15c);
  }
  return param_1;
}



// FUNCTION 1424bd7e0 Unwind@1424bd7e0 body=34 status=ok
// SIG undefined Unwind@1424bd7e0(void)

void Unwind_1424bd7e0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1424bd810 FUN_1424bd810 body=157 status=ok
// SIG undefined FUN_1424bd810(void)

longlong FUN_1424bd810(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    puVar1 = *(undefined8 **)(param_1 + 0x148);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x150);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    if (*(longlong **)(param_2 + 0x148) == (longlong *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(param_2 + 0x148) + 0x10))();
    }
    *(undefined8 *)(param_1 + 0x148) = uVar2;
    if (*(longlong **)(param_2 + 0x150) == (longlong *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(param_2 + 0x150) + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x150) = uVar2;
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
    *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x15c);
  }
  return param_1;
}



// FUNCTION 1424bd8b0 FUN_1424bd8b0 body=75 status=ok
// SIG undefined FUN_1424bd8b0(void)

void FUN_1424bd8b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::DateFormat::vftable;
  puVar1 = (undefined8 *)param_1[0x29];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x2a];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  thunk_FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 1424bd900 FUN_1424bd900 body=114 status=ok
// SIG undefined FUN_1424bd900(void)

bool FUN_1424bd900(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 == param_2) {
    bVar3 = true;
  }
  else {
    cVar2 = FUN_142537b80();
    if ((((cVar2 != '\0') && (plVar1 = *(longlong **)(param_1 + 0x148), plVar1 != (longlong *)0x0))
        && (cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,*(undefined8 *)(param_2 + 0x148)),
           cVar2 != '\0')) &&
       ((plVar1 = *(longlong **)(param_1 + 0x150), plVar1 != (longlong *)0x0 &&
        (cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_2 + 0x150)),
        cVar2 != '\0')))) {
      return *(int *)(param_1 + 0x15c) == *(int *)(param_2 + 0x15c);
    }
    bVar3 = false;
  }
  return bVar3;
}



// FUNCTION 1424bd980 FUN_1424bd980 body=216 status=ok
// SIG undefined FUN_1424bd980(void)

void FUN_1424bd980(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  int *param_5)

{
  double dVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [36];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_5 < 1) {
    iVar2 = FUN_14252d140(param_2);
    if (iVar2 == 2) {
      dVar1 = (double)*(int *)(param_2 + 8);
    }
    else {
      if ((iVar2 != 1) && (iVar2 != 0)) {
        *param_5 = 1;
        goto LAB_1424bd9b1;
      }
      dVar1 = *(double *)(param_2 + 8);
    }
    if ((longlong *)param_1[0x29] != (longlong *)0x0) {
      puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1[0x29] + 0x10))();
      if (puVar3 != (undefined8 *)0x0) {
        local_44 = 0;
        FUN_1424ccf20(puVar3,dVar1,&local_44);
        if (local_44 < 1) {
          (**(code **)(*param_1 + 0x40))(param_1,puVar3,param_3,param_4);
        }
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
LAB_1424bd9b1:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
}



// FUNCTION 1424bda70 FUN_1424bda70 body=202 status=ok
// SIG undefined FUN_1424bda70(void)

undefined8
FUN_1424bda70(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,int *param_5)

{
  double dVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (*param_5 < 1) {
    iVar2 = FUN_14252d140(param_2);
    if (iVar2 == 2) {
      dVar1 = (double)*(int *)(param_2 + 8);
    }
    else {
      if ((iVar2 != 1) && (iVar2 != 0)) {
        *param_5 = 1;
        return param_3;
      }
      dVar1 = *(double *)(param_2 + 8);
    }
    if (((longlong *)param_1[0x29] != (longlong *)0x0) &&
       (puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1[0x29] + 0x10))(),
       puVar3 != (undefined8 *)0x0)) {
      FUN_1424ccf20(puVar3,dVar1,param_5);
      if (*param_5 < 1) {
        (**(code **)(*param_1 + 0x38))(param_1,puVar3,param_3,param_4,param_5);
      }
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return param_3;
}



// FUNCTION 1424bdb40 FUN_1424bdb40 body=21 status=ok
// SIG undefined FUN_1424bdb40(void)

undefined8
FUN_1424bdb40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int *param_5)

{
  if (0 < *param_5) {
    return param_3;
  }
  *param_5 = 0x10;
  return param_3;
}



// FUNCTION 1424bdb60 FUN_1424bdb60 body=172 status=ok
// SIG undefined FUN_1424bdb60(void)

undefined8 FUN_1424bdb60(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined **local_60;
  undefined8 local_58;
  undefined4 local_50;
  int local_44 [9];
  
  local_44[1] = -2;
  local_44[2] = -1;
  local_60 = icu_64::FieldPosition::vftable;
  local_58 = 0xffffffff;
  local_50 = 0;
  if ((longlong *)param_1[0x29] != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1[0x29] + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      local_44[0] = 0;
      FUN_1424ccf20(puVar1,param_2,local_44);
      if (local_44[0] < 1) {
        (**(code **)(*param_1 + 0x40))(param_1,puVar1,param_3,&local_60);
      }
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  thunk_FUN_1424b70d0(&local_60);
  return param_3;
}



// FUNCTION 1424bdc10 Unwind@1424bdc10 body=45 status=ok
// SIG undefined Unwind@1424bdc10(void)

void Unwind_1424bdc10(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x28);
  return;
}



// FUNCTION 1424bdc40 FUN_1424bdc40 body=223 status=ok
// SIG undefined FUN_1424bdc40(void)

undefined8 FUN_1424bdc40(longlong *param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined **local_58;
  undefined8 local_50;
  int local_44 [7];
  
  local_44[1] = -2;
  local_44[2] = -1;
  uVar1 = 0;
  if (0 < *param_3) {
    return 0;
  }
  local_58 = icu_64::ParsePosition::vftable;
  local_50 = 0xffffffff00000000;
  uVar3 = uVar1;
  if (((longlong *)param_1[0x29] != (longlong *)0x0) &&
     (puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1[0x29] + 0x10))(),
     puVar2 != (undefined8 *)0x0)) {
    FUN_1424cb7f0(puVar2);
    (**(code **)(*param_1 + 0x48))(param_1,param_2,puVar2,&local_58);
    uVar3 = 0;
    if ((int)local_50 != 0) {
      local_44[0] = 0;
      uVar3 = FUN_1424cd180(puVar2,local_44);
      if (0 < local_44[0]) {
        local_50 = 0;
        uVar3 = uVar1;
      }
    }
    (**(code **)*puVar2)(puVar2,1);
    if ((int)local_50 != 0) goto LAB_1424bdd04;
  }
  *param_3 = 1;
LAB_1424bdd04:
  thunk_FUN_1424b70d0(&local_58);
  return uVar3;
}



// FUNCTION 1424bdd20 Unwind@1424bdd20 body=49 status=ok
// SIG undefined Unwind@1424bdd20(void)

void Unwind_1424bdd20(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x20);
  return;
}



// FUNCTION 1424bdd60 FUN_1424bdd60 body=189 status=ok
// SIG undefined FUN_1424bdd60(void)

void FUN_1424bdd60(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [36];
  int local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = 0;
  if (((longlong *)param_1[0x29] != (longlong *)0x0) &&
     (puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1[0x29] + 0x10))(),
     puVar2 != (undefined8 *)0x0)) {
    iVar1 = *(int *)(param_4 + 8);
    FUN_1424cb7f0(puVar2);
    (**(code **)(*param_1 + 0x48))(param_1,param_2,puVar2,param_4);
    uVar3 = 0;
    if (*(int *)(param_4 + 8) != iVar1) {
      local_54 = 0;
      uVar3 = FUN_1424cd180(puVar2,&local_54);
      if (0 < local_54) {
        *(int *)(param_4 + 8) = iVar1;
        *(int *)(param_4 + 0xc) = iVar1;
        uVar3 = 0;
      }
    }
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_14252d3a0(param_3,uVar3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_78);
}



// FUNCTION 1424bde30 FUN_1424bde30 body=13 status=ok
// SIG undefined FUN_1424bde30(void)

void FUN_1424bde30(undefined8 param_1,undefined8 param_2)

{
  FUN_1424bde80(param_1,0xffffffff,param_2);
  return;
}



// FUNCTION 1424bde40 FUN_1424bde40 body=18 status=ok
// SIG undefined FUN_1424bde40(void)

void FUN_1424bde40(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = param_1 + 4;
  if (param_1 == -1) {
    iVar1 = -1;
  }
  FUN_1424bde80(param_2,iVar1);
  return;
}



// FUNCTION 1424bde60 FUN_1424bde60 body=24 status=ok
// SIG undefined FUN_1424bde60(void)

void FUN_1424bde60(int param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = param_1 + 4;
  if (param_1 == -1) {
    iVar1 = -1;
  }
  FUN_1424bde80(0xffffffff,iVar1,param_2);
  return;
}



// FUNCTION 1424bde80 FUN_1424bde80 body=433 status=ok
// SIG undefined FUN_1424bde80(void)

undefined8 * FUN_1424bde80(undefined4 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int local_50;
  char local_4c;
  undefined8 *local_48;
  int local_3c [3];
  
  local_3c[1] = -2;
  local_3c[2] = -1;
  local_3c[0] = 0;
  iVar1 = FUN_1424a5490(param_3,"compat",&local_50,8,local_3c);
  if ((0 < iVar1) && (local_4c == '\0' && local_50 == 0x74736f68)) {
    puVar2 = (undefined8 *)thunk_FUN_1424da030(0x2a0);
    if (puVar2 == (undefined8 *)0x0) {
      if (local_3c[0] < 1) {
        return (undefined8 *)0x0;
      }
    }
    else {
      local_48 = puVar2;
      FUN_14254ac80(puVar2,param_1,param_2,param_3,local_3c);
      if (local_3c[0] < 1) {
        return local_48;
      }
      (**(code **)*local_48)(local_48,1);
    }
  }
  if ((param_2 != -1) && ((char)(param_2 + -4) < '\0')) {
    puVar2 = (undefined8 *)thunk_FUN_1424da030(0x2f8);
    if (puVar2 == (undefined8 *)0x0) {
      if (local_3c[0] < 1) {
        return (undefined8 *)0x0;
      }
    }
    else {
      local_48 = puVar2;
      FUN_1425491e0(puVar2,param_1,param_2 + -4,param_3,local_3c);
      if (local_3c[0] < 1) {
        return local_48;
      }
      (**(code **)*local_48)(local_48,1);
    }
    local_3c[0] = 0;
  }
  puVar2 = (undefined8 *)thunk_FUN_1424da030(0x360);
  if (puVar2 == (undefined8 *)0x0) {
    if (local_3c[0] < 1) {
      return (undefined8 *)0x0;
    }
  }
  else {
    local_48 = puVar2;
    FUN_14254d960(puVar2,param_1,param_2,param_3,local_3c);
    if (local_3c[0] < 1) {
      return local_48;
    }
    (**(code **)*local_48)(local_48,1);
  }
  local_3c[0] = 0;
  local_48 = (undefined8 *)thunk_FUN_1424da030(0x360);
  if (local_48 != (undefined8 *)0x0) {
    FUN_14254dbc0(local_48,param_3,local_3c);
    if (local_3c[0] < 1) {
      return local_48;
    }
    (**(code **)*local_48)(local_48,1);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424be040 Unwind@1424be040 body=44 status=ok
// SIG undefined Unwind@1424be040(void)

void Unwind_1424be040(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424be070 Unwind@1424be070 body=44 status=ok
// SIG undefined Unwind@1424be070(void)

void Unwind_1424be070(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424be0a0 Unwind@1424be0a0 body=44 status=ok
// SIG undefined Unwind@1424be0a0(void)

void Unwind_1424be0a0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424be0d0 Unwind@1424be0d0 body=44 status=ok
// SIG undefined Unwind@1424be0d0(void)

void Unwind_1424be0d0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424be100 FUN_1424be100 body=325 status=ok
// SIG undefined FUN_1424be100(void)

undefined8 * FUN_1424be100(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  undefined8 uVar1;
  undefined **local_180;
  undefined4 local_178;
  undefined1 local_174;
  undefined1 local_170 [224];
  undefined1 local_90 [64];
  undefined8 *local_50;
  longlong local_48 [2];
  
  local_48[1] = 0xfffffffffffffffe;
  uVar1 = FUN_14253ea50(param_4);
  if (*param_4 < 1) {
    local_178 = 0;
    local_174 = 0;
    local_180 = icu_64::LocaleCacheKey<icu_64::DateFmtBestPattern>::vftable;
    FUN_1424a3ce0(local_170,param_2);
    local_180 = icu_64::DateFmtBestPatternKey::vftable;
    FUN_142558e20(local_90,param_3,param_4);
    local_48[0] = 0;
    FUN_1424bee00(uVar1,&local_180,0,local_48,param_4);
    local_50 = param_1;
    if (*param_4 < 1) {
      FUN_1424a6be0(param_1,local_48[0] + 0x18);
      FUN_142537ca0(local_48[0]);
    }
    else {
      *param_1 = &PTR_FUN_149e18960;
      *(undefined2 *)(param_1 + 1) = 2;
    }
    local_180 = icu_64::DateFmtBestPatternKey::vftable;
    FUN_140859a90(local_90);
    local_180 = icu_64::LocaleCacheKey<icu_64::DateFmtBestPattern>::vftable;
    FUN_1414b3f60(local_170);
    thunk_FUN_1424b70d0(&local_180);
    param_1 = local_50;
  }
  else {
    *param_1 = &PTR_FUN_149e18960;
    *(undefined2 *)(param_1 + 1) = 2;
  }
  return param_1;
}



// FUNCTION 1424be250 Unwind@1424be250 body=51 status=ok
// SIG undefined Unwind@1424be250(void)

void Unwind_1424be250(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x28);
  return;
}



// FUNCTION 1424be290 Unwind@1424be290 body=71 status=ok
// SIG undefined Unwind@1424be290(void)

void Unwind_1424be290(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x28) = icu_64::LocaleCacheKey<icu_64::DateFmtBestPattern>::vftable;
  FUN_1414b3f60(param_2 + 0x38);
  thunk_FUN_1424b70d0(param_2 + 0x28);
  return;
}



// FUNCTION 1424be2e0 Unwind@1424be2e0 body=54 status=ok
// SIG undefined Unwind@1424be2e0(void)

void Unwind_1424be2e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x158));
  return;
}



// FUNCTION 1424be320 Unwind@1424be320 body=51 status=ok
// SIG undefined Unwind@1424be320(void)

void Unwind_1424be320(undefined8 param_1,longlong param_2)

{
  FUN_1424bd6a0(param_2 + 0x28);
  return;
}



// FUNCTION 1424be360 FUN_1424be360 body=152 status=ok
// SIG undefined FUN_1424be360(void)

undefined8 * FUN_1424be360(undefined8 param_1,undefined8 param_2,int *param_3)

{
  undefined1 local_70 [64];
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*param_3 < 1) {
    local_30 = (undefined8 *)thunk_FUN_1424da030(0x360);
    if (local_30 == (undefined8 *)0x0) {
      if (*param_3 < 1) {
        *param_3 = 7;
      }
    }
    else {
      FUN_1424be100(local_70,param_2,param_1,param_3);
      FUN_14254d6a0(local_30,local_70,param_2,param_3);
      FUN_140859a90(local_70);
      if (*param_3 < 1) {
        return local_30;
      }
      (**(code **)*local_30)(local_30,1);
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424be400 Unwind@1424be400 body=36 status=ok
// SIG undefined Unwind@1424be400(void)

void Unwind_1424be400(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1424be430 Unwind@1424be430 body=36 status=ok
// SIG undefined Unwind@1424be430(void)

void Unwind_1424be430(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x68));
  return;
}



// FUNCTION 1424be460 FUN_1424be460 body=48 status=ok
// SIG undefined FUN_1424be460(void)

void FUN_1424be460(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x148);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x148) = param_2;
  return;
}



// FUNCTION 1424be490 FUN_1424be490 body=53 status=ok
// SIG undefined FUN_1424be490(void)

void FUN_1424be490(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001424be4bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x80))(param_1,lVar1,*(code **)(*param_1 + 0x80));
    return;
  }
  return;
}



// FUNCTION 1424be4d0 FUN_1424be4d0 body=8 status=ok
// SIG undefined FUN_1424be4d0(void)

undefined8 FUN_1424be4d0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



// FUNCTION 1424be4e0 FUN_1424be4e0 body=79 status=ok
// SIG undefined FUN_1424be4e0(void)

void FUN_1424be4e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x150);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(longlong **)(param_1 + 0x150) = param_2;
  (**(code **)(*param_2 + 0xb0))(param_2,1);
                    /* WARNING: Could not recover jumptable at 0x0001424be52c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 200))(param_2,0);
  return;
}



// FUNCTION 1424be530 FUN_1424be530 body=53 status=ok
// SIG undefined FUN_1424be530(void)

void FUN_1424be530(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001424be55b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x98))(param_1,lVar1,*(code **)(*param_1 + 0x98));
    return;
  }
  return;
}



// FUNCTION 1424be570 FUN_1424be570 body=8 status=ok
// SIG undefined FUN_1424be570(void)

undefined8 FUN_1424be570(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



// FUNCTION 1424be580 FUN_1424be580 body=17 status=ok
// SIG undefined FUN_1424be580(void)

void FUN_1424be580(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x148);
  if (lVar1 == 0) {
    return;
  }
  if (param_2 != 0) {
    puVar2 = *(undefined8 **)(lVar1 + 0xf0);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *(longlong *)(lVar1 + 0xf0) = param_2;
    *(undefined1 *)(lVar1 + 9) = 0;
  }
  return;
}



// FUNCTION 1424be5a0 FUN_1424be5a0 body=17 status=ok
// SIG undefined FUN_1424be5a0(void)

void FUN_1424be5a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x148);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = (**(code **)(*param_2 + 0x58))(param_2);
  if (lVar3 != 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0xf0);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(longlong *)(lVar2 + 0xf0) = lVar3;
    *(undefined1 *)(lVar2 + 9) = 0;
  }
  return;
}



// FUNCTION 1424be5c0 FUN_1424be5c0 body=21 status=ok
// SIG undefined FUN_1424be5c0(void)

undefined8 FUN_1424be5c0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x148) != 0) {
    uVar2 = FUN_1424ce780();
    return uVar2;
  }
  if (DAT_14c77e9cc != 2) {
    cVar1 = FUN_142501800(&DAT_14c77e9cc);
    if (cVar1 != '\0') {
      FUN_14251f960(0x12,FUN_1424b78b0);
      if (DAT_14c77e998 == (longlong *)0x0) {
        DAT_14c77e998 = (longlong *)FUN_1424b7610();
      }
      FUN_1425019c0(&DAT_14c77e9cc);
    }
  }
  if (DAT_14c77e998 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001424b7855. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*DAT_14c77e998 + 0x58))();
    return uVar2;
  }
  return 0;
}



// FUNCTION 1424be5e0 FUN_1424be5e0 body=115 status=ok
// SIG undefined FUN_1424be5e0(void)

void FUN_1424be5e0(longlong *param_1,undefined4 param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[0x29] != 0) {
    FUN_1424d04c0(param_1[0x29],param_2);
  }
  local_24 = 0;
  (**(code **)(*param_1 + 0xd0))(param_1,0,param_2,&local_24);
  (**(code **)(*param_1 + 0xd0))(param_1,1,param_2,&local_24);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424be660 FUN_1424be660 body=131 status=ok
// SIG undefined FUN_1424be660(void)

void FUN_1424be660(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[0x29] != 0) {
    cVar1 = FUN_1424cd2d0();
    local_1c = 0;
    if (cVar1 == '\0') goto LAB_1424be6d6;
  }
  local_1c = 0;
  cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,0,&local_1c);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0xd8))(param_1,1,&local_1c);
  }
LAB_1424be6d6:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424be6f0 FUN_1424be6f0 body=17 status=ok
// SIG undefined FUN_1424be6f0(void)

void FUN_1424be6f0(longlong param_1,undefined1 param_2)

{
  if (*(longlong *)(param_1 + 0x148) == 0) {
    return;
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x148) + 0xe8) = param_2;
  return;
}



// FUNCTION 1424be710 FUN_1424be710 body=19 status=ok
// SIG undefined FUN_1424be710(void)

undefined1 FUN_1424be710(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x148) == 0) {
    return 0;
  }
  return *(undefined1 *)(*(longlong *)(param_1 + 0x148) + 0xe8);
}



// FUNCTION 1424be730 FUN_1424be730 body=36 status=ok
// SIG undefined FUN_1424be730(void)

void FUN_1424be730(longlong param_1,uint param_2,int *param_3)

{
  if (0 < *param_3) {
    return;
  }
  if ((param_2 & 0xffffff00) == 0x100) {
    *(uint *)(param_1 + 0x15c) = param_2;
    return;
  }
  *param_3 = 1;
  return;
}



// FUNCTION 1424be760 FUN_1424be760 body=29 status=ok
// SIG undefined FUN_1424be760(void)

undefined4 FUN_1424be760(longlong param_1,int param_2,int *param_3)

{
  if (0 < *param_3) {
    return 0;
  }
  if (param_2 == 1) {
    return *(undefined4 *)(param_1 + 0x15c);
  }
  *param_3 = 1;
  return 0;
}



// FUNCTION 1424be780 FUN_1424be780 body=59 status=ok
// SIG undefined FUN_1424be780(void)

void FUN_1424be780(longlong param_1,uint param_2,byte param_3,undefined4 *param_4)

{
  uint uVar1;
  
  if (1 < param_3) {
    *param_4 = 1;
    return;
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = 1 << ((byte)param_2 & 0x1f);
  }
  *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) & ~(1 << (param_2 & 0x1f)) | uVar1;
  return;
}



// FUNCTION 1424be7c0 FUN_1424be7c0 body=13 status=ok
// SIG undefined FUN_1424be7c0(void)

undefined4 FUN_1424be7c0(longlong param_1,uint param_2)

{
  return CONCAT31((int3)(*(uint *)(param_1 + 0x158) >> 8),
                  (*(uint *)(param_1 + 0x158) >> (param_2 & 0x1f) & 1) != 0);
}



// FUNCTION 1424be7d0 FUN_1424be7d0 body=60 status=ok
// SIG undefined FUN_1424be7d0(void)

undefined8 * FUN_1424be7d0(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::DateFmtBestPattern::vftable;
  FUN_140859a90(param_1 + 3);
  thunk_FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424be810 FUN_1424be810 body=82 status=ok
// SIG undefined FUN_1424be810(void)

undefined8 * FUN_1424be810(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::DateFmtBestPatternKey::vftable;
  FUN_140859a90(param_1 + 0x1e);
  *param_1 = icu_64::LocaleCacheKey<icu_64::DateFmtBestPattern>::vftable;
  FUN_1414b3f60(param_1 + 2);
  thunk_FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424be870 FUN_1424be870 body=96 status=ok
// SIG undefined FUN_1424be870(void)

int FUN_1424be870(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *_Str;
  size_t sVar4;
  
  _Str = (char *)__std_type_info_name(0x14c6d8868,&DAT_14c793310);
  sVar4 = strlen(_Str);
  iVar1 = FUN_142504d90(_Str,sVar4 & 0xffffffff);
  iVar2 = FUN_1424a4050(param_1 + 0x10);
  iVar3 = FUN_1424a9a40(param_1 + 0xf0);
  return iVar3 + (iVar2 + iVar1 * 0x25) * 0x25;
}



// FUNCTION 1424be8d0 FUN_1424be8d0 body=139 status=ok
// SIG undefined FUN_1424be8d0(void)

undefined8 *
FUN_1424be8d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0x130);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = icu_64::CacheKeyBase::vftable;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined1 *)((longlong)puVar1 + 0xc) = 0;
    *puVar1 = icu_64::LocaleCacheKey<icu_64::DateFmtBestPattern>::vftable;
    FUN_1424a3ce0(puVar1 + 2,param_1 + 0x10,param_3,param_4,puVar1 + 2,puVar1,uVar2);
    *puVar1 = icu_64::DateFmtBestPatternKey::vftable;
    FUN_1424a6be0(puVar1 + 0x1e,param_1 + 0xf0);
  }
  return puVar1;
}



// FUNCTION 1424be960 Unwind@1424be960 body=32 status=ok
// SIG undefined Unwind@1424be960(void)

void Unwind_1424be960(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1424be980 Unwind@1424be980 body=32 status=ok
// SIG undefined Unwind@1424be980(void)

void Unwind_1424be980(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1424be9a0 Unwind@1424be9a0 body=54 status=ok
// SIG undefined Unwind@1424be9a0(void)

void Unwind_1424be9a0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x28);
  *puVar1 = icu_64::LocaleCacheKey<icu_64::DateFmtBestPattern>::vftable;
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x20));
  thunk_FUN_1424b70d0(puVar1);
  return;
}



// FUNCTION 1424be9e0 FUN_1424be9e0 body=201 status=ok
// SIG undefined FUN_1424be9e0(void)

bool FUN_1424be9e0(longlong param_1,longlong param_2)

{
  ushort uVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  if (param_1 == param_2) {
    bVar3 = true;
  }
  else {
    lVar6 = __RTtypeid();
    lVar7 = __RTtypeid(param_2);
    iVar5 = __std_type_info_compare(lVar6 + 8,lVar7 + 8);
    if ((iVar5 == 0) && (cVar4 = FUN_1424a3f70(param_1 + 0x10,param_2 + 0x10), cVar4 != '\0')) {
      uVar1 = *(ushort *)(param_2 + 0xf8);
      if ((uVar1 & 1) != 0) {
        return (bool)(*(byte *)(param_1 + 0xf8) & 1);
      }
      if ((short)uVar1 < 0) {
        iVar5 = *(int *)(param_2 + 0xfc);
      }
      else {
        iVar5 = (int)(short)uVar1 >> 5;
      }
      sVar2 = *(short *)(param_1 + 0xf8);
      if (sVar2 < 0) {
        iVar8 = *(int *)(param_1 + 0xfc);
      }
      else {
        iVar8 = (int)sVar2 >> 5;
      }
      if (((int)sVar2 & 1U) != 0) {
        return false;
      }
      if (iVar5 != iVar8) {
        return false;
      }
      cVar4 = FUN_1412ae090(param_2 + 0xf0,param_1 + 0xf0);
      return cVar4 != '\0';
    }
    bVar3 = false;
  }
  return bVar3;
}



// FUNCTION 1424beab0 FUN_1424beab0 body=232 status=ok
// SIG undefined FUN_1424beab0(void)

undefined8 * FUN_1424beab0(longlong param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_78 [64];
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)FUN_142556440(param_1 + 0x10,param_3);
  local_38 = puVar1;
  if (*param_3 < 1) {
    puVar2 = (undefined8 *)thunk_FUN_1424da030(0x58);
    if (puVar2 == (undefined8 *)0x0) {
      if (*param_3 < 1) {
        *param_3 = 7;
      }
    }
    else {
      local_30 = puVar2;
      FUN_142559d30(puVar1,local_78,param_1 + 0xf0,param_3);
      local_30[1] = 0;
      local_30[2] = 0;
      *local_30 = icu_64::DateFmtBestPattern::vftable;
      FUN_1424a6be0(local_30 + 3,local_78);
      FUN_140859a90(local_78);
      puVar1 = local_30;
      if (*param_3 < 1) {
        FUN_142537c90(local_30);
        goto LAB_1424beae2;
      }
      (**(code **)*local_30)(local_30,1);
    }
  }
  puVar1 = (undefined8 *)0x0;
LAB_1424beae2:
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  return puVar1;
}



// FUNCTION 1424beba0 Unwind@1424beba0 body=45 status=ok
// SIG undefined Unwind@1424beba0(void)

void Unwind_1424beba0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x68));
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1424bebd0 Unwind@1424bebd0 body=36 status=ok
// SIG undefined Unwind@1424bebd0(void)

void Unwind_1424bebd0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x68));
  return;
}



// FUNCTION 1424bec00 Unwind@1424bec00 body=48 status=ok
// SIG undefined Unwind@1424bec00(void)

void Unwind_1424bec00(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x60) != 0) {
    (**(code **)**(undefined8 **)(param_2 + 0x60))(*(undefined8 **)(param_2 + 0x60),1);
  }
  return;
}



// FUNCTION 1424bec30 FUN_1424bec30 body=43 status=ok
// SIG undefined FUN_1424bec30(void)

char * FUN_1424bec30(longlong param_1,char *param_2,int param_3)

{
  strncpy(param_2,*(char **)(param_1 + 0x38),(longlong)param_3);
  param_2[(longlong)param_3 - 1] = '\0';
  return param_2;
}



// FUNCTION 1424bec60 FUN_1424bec60 body=2 status=ok
// SIG undefined FUN_1424bec60(void)

void FUN_1424bec60(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1424bec70 FUN_1424bec70 body=60 status=ok
// SIG undefined FUN_1424bec70(void)

undefined8 * FUN_1424bec70(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::LocaleCacheKey<icu_64::DateFmtBestPattern>::vftable;
  FUN_1414b3f60(param_1 + 2);
  thunk_FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424becb0 FUN_1424becb0 body=76 status=ok
// SIG undefined FUN_1424becb0(void)

int FUN_1424becb0(longlong param_1)

{
  int iVar1;
  int iVar2;
  char *_Str;
  size_t sVar3;
  
  _Str = (char *)__std_type_info_name(0x14c6d8868,&DAT_14c793310);
  sVar3 = strlen(_Str);
  iVar1 = FUN_142504d90(_Str,sVar3 & 0xffffffff);
  iVar2 = FUN_1424a4050(param_1 + 0x10);
  return iVar2 + iVar1 * 0x25;
}



// FUNCTION 1424bed00 FUN_1424bed00 body=102 status=ok
// SIG undefined FUN_1424bed00(void)

undefined8 * FUN_1424bed00(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = icu_64::CacheKeyBase::vftable;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined1 *)((longlong)puVar1 + 0xc) = 0;
    *puVar1 = icu_64::LocaleCacheKey<icu_64::DateFmtBestPattern>::vftable;
    FUN_1424a3ce0(puVar1 + 2,param_1 + 0x10);
  }
  return puVar1;
}



// FUNCTION 1424bed70 Unwind@1424bed70 body=43 status=ok
// SIG undefined Unwind@1424bed70(void)

void Unwind_1424bed70(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  thunk_FUN_1424b70d0(uVar1);
  FUN_1401773f0(uVar1);
  return;
}



// FUNCTION 1424beda0 FUN_1424beda0 body=94 status=ok
// SIG undefined FUN_1424beda0(void)

undefined8 FUN_1424beda0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1 == param_2) {
    uVar4 = 1;
  }
  else {
    lVar2 = __RTtypeid();
    lVar3 = __RTtypeid(param_2);
    iVar1 = __std_type_info_compare(lVar2 + 8,lVar3 + 8);
    if (iVar1 == 0) {
      uVar4 = FUN_1424a3f70(param_1 + 0x10,param_2 + 0x10);
      return uVar4;
    }
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 1424bee00 FUN_1424bee00 body=167 status=ok
// SIG undefined FUN_1424bee00(void)

void FUN_1424bee00(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  int *param_5)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  int *local_38;
  longlong local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < *param_5) goto LAB_1424bee9a;
  local_24 = 0;
  local_30 = 0;
  local_38 = &local_24;
  FUN_14253f870(param_1,param_2,&local_30,param_3);
  lVar1 = local_30;
  if ((local_24 < 1) && (*param_4 != local_30)) {
    if (*param_4 != 0) {
      FUN_142537ca0();
    }
    *param_4 = lVar1;
    if (lVar1 != 0) {
      FUN_142537c90(lVar1);
LAB_1424bee83:
      FUN_142537ca0(lVar1);
    }
  }
  else if (local_30 != 0) goto LAB_1424bee83;
  if ((*param_5 == 0) || (0 < local_24)) {
    *param_5 = local_24;
  }
LAB_1424bee9a:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 1424beeb0 FUN_1424beeb0 body=186 status=ok
// SIG undefined FUN_1424beeb0(void)

longlong FUN_1424beeb0(longlong *param_1,longlong *param_2,undefined8 param_3,int *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_110 [224];
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  cVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_4);
  if (cVar1 == '\0') {
    return 0;
  }
  FUN_1424a3c00(local_110);
  (**(code **)(*param_2 + 0x50))(param_2,local_110);
  lVar2 = FUN_1424e28b0(local_110,param_4);
  if (*param_4 < 1) {
    lVar3 = thunk_FUN_1424da030(0x110);
    if (lVar3 == 0) {
      *param_4 = 7;
      goto LAB_1424bef0d;
    }
    local_30 = lVar3;
    FUN_14255d970(lVar3,lVar2);
    lVar3 = local_30;
  }
  else {
LAB_1424bef0d:
    lVar3 = 0;
    if (lVar2 == 0) goto LAB_1424bef4a;
  }
  FUN_142537ca0(lVar2);
LAB_1424bef4a:
  FUN_1414b3f60(local_110);
  return lVar3;
}



// FUNCTION 1424bef70 Unwind@1424bef70 body=42 status=ok
// SIG undefined Unwind@1424bef70(void)

void Unwind_1424bef70(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x108));
  return;
}



// FUNCTION 1424befa0 Unwind@1424befa0 body=39 status=ok
// SIG undefined Unwind@1424befa0(void)

void Unwind_1424befa0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x28);
  return;
}



// FUNCTION 1424befd0 FUN_1424befd0 body=7 status=ok
// SIG undefined FUN_1424befd0(void)

void FUN_1424befd0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001424befd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}



// FUNCTION 1424befe0 FUN_1424befe0 body=54 status=ok
// SIG undefined FUN_1424befe0(void)

void FUN_1424befe0(longlong *param_1)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  (**(code **)(*param_1 + 0x50))();
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424bf020 FUN_1424bf020 body=59 status=ok
// SIG undefined FUN_1424bf020(void)

void FUN_1424bf020(longlong *param_1)

{
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_14 = 0;
  local_28 = &local_14;
  (**(code **)(*param_1 + 0x40))();
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424bf070 FUN_1424bf070 body=68 status=ok
// SIG undefined FUN_1424bf070(void)

void FUN_1424bf070(longlong *param_1)

{
  undefined4 in_stack_00000028;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 *local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_14 = 0;
  local_20 = &local_14;
  local_28 = in_stack_00000028;
  (**(code **)(*param_1 + 0x30))();
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424bf0c0 FUN_1424bf0c0 body=19 status=ok
// SIG undefined FUN_1424bf0c0(void)

undefined8 FUN_1424bf0c0(void)

{
  int *in_R9;
  
  if (0 < *in_R9) {
    return 0;
  }
  *in_R9 = 0x10;
  return 0;
}



// FUNCTION 1424bf0e0 FUN_1424bf0e0 body=127 status=ok
// SIG undefined FUN_1424bf0e0(void)

void FUN_1424bf0e0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,int *param_4)

{
  undefined1 auStack_138 [40];
  undefined1 local_110 [112];
  undefined1 local_a0 [112];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*param_4 < 1) {
    FUN_1424e5ce0(local_a0,*param_2,*(undefined4 *)(param_2 + 1));
    FUN_1424e5ce0(local_110,*param_3,*(undefined4 *)(param_3 + 1));
    (**(code **)(*param_1 + 0x28))(param_1,local_a0,local_110,param_4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_138);
}



// FUNCTION 1424bf170 FUN_1424bf170 body=14 status=ok
// SIG undefined FUN_1424bf170(void)

void FUN_1424bf170(undefined8 *param_1)

{
  *param_1 = icu_64::Collator::vftable;
  return;
}



// FUNCTION 1424bf180 thunk_FUN_1424b70d0 body=5 status=ok
// SIG undefined thunk_FUN_1424b70d0(void)

void thunk_FUN_1424b70d0(void)

{
  return;
}



// FUNCTION 1424bf190 FUN_1424bf190 body=14 status=ok
// SIG undefined FUN_1424bf190(void)

void FUN_1424bf190(undefined8 *param_1)

{
  *param_1 = icu_64::Collator::vftable;
  return;
}



// FUNCTION 1424bf1a0 FUN_1424bf1a0 body=53 status=ok
// SIG undefined FUN_1424bf1a0(void)

bool FUN_1424bf1a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = __RTtypeid();
  lVar2 = __RTtypeid(param_2);
  iVar3 = __std_type_info_compare(lVar1 + 8,lVar2 + 8);
  return iVar3 == 0;
}



// FUNCTION 1424bf1e0 FUN_1424bf1e0 body=20 status=ok
// SIG undefined FUN_1424bf1e0(void)

bool FUN_1424bf1e0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  return cVar1 == '\0';
}



// FUNCTION 1424bf200 FUN_1424bf200 body=1 status=ok
// SIG undefined FUN_1424bf200(void)

void FUN_1424bf200(void)

{
  return;
}



// FUNCTION 1424bf210 FUN_1424bf210 body=72 status=ok
// SIG undefined FUN_1424bf210(void)

longlong FUN_1424bf210(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if ((*param_2 < 1) && (lVar1 = thunk_FUN_1424da030(200), lVar1 != 0)) {
    FUN_142511960(lVar1,0,0x10ffff,param_4,lVar1,uVar2);
    return lVar1;
  }
  return 0;
}



// FUNCTION 1424bf260 Unwind@1424bf260 body=30 status=ok
// SIG undefined Unwind@1424bf260(void)

void Unwind_1424bf260(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1424bf280 FUN_1424bf280 body=126 status=ok
// SIG undefined FUN_1424bf280(void)

longlong FUN_1424bf280(void)

{
  char cVar1;
  longlong lVar2;
  
  if (DAT_14c77ead0 != 2) {
    cVar1 = FUN_142501800(&DAT_14c77ead0);
    if (cVar1 != '\0') {
      lVar2 = thunk_FUN_1424da030(0x198);
      if (lVar2 != 0) {
        FUN_1424bf670(lVar2);
      }
      DAT_14c77eab8 = lVar2;
      FUN_14251f960(0x1a,FUN_1424bf5c0);
      FUN_1425019c0(&DAT_14c77ead0);
    }
  }
  return DAT_14c77eab8;
}



// FUNCTION 1424bf300 Unwind@1424bf300 body=30 status=ok
// SIG undefined Unwind@1424bf300(void)

void Unwind_1424bf300(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1424bf320 FUN_1424bf320 body=62 status=ok
// SIG undefined FUN_1424bf320(void)

void FUN_1424bf320(longlong *param_1)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  (**(code **)(*param_1 + 0xb8))(param_1,5,&local_14);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424bf370 FUN_1424bf370 body=62 status=ok
// SIG undefined FUN_1424bf370(void)

void FUN_1424bf370(longlong *param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = 0;
  (**(code **)(*param_1 + 0xb0))(param_1,5,param_2,&local_c);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424bf3c0 FUN_1424bf3c0 body=18 status=ok
// SIG undefined FUN_1424bf3c0(void)

undefined8 FUN_1424bf3c0(undefined8 param_1,undefined8 param_2,int *param_3)

{
  if (0 < *param_3) {
    return param_1;
  }
  *param_3 = 0x10;
  return param_1;
}



// FUNCTION 1424bf3e0 FUN_1424bf3e0 body=6 status=ok
// SIG undefined FUN_1424bf3e0(void)

undefined8 FUN_1424bf3e0(void)

{
  return 0x1001;
}



// FUNCTION 1424bf3f0 FUN_1424bf3f0 body=19 status=ok
// SIG undefined FUN_1424bf3f0(void)

undefined8 FUN_1424bf3f0(void)

{
  int *in_R9;
  
  if (0 < *in_R9) {
    return 0;
  }
  *in_R9 = 0x10;
  return 0;
}



// FUNCTION 1424bf410 FUN_1424bf410 body=15 status=ok
// SIG undefined FUN_1424bf410(void)

void FUN_1424bf410(void)

{
  int *in_R9;
  
  if (0 < *in_R9) {
    return;
  }
  *in_R9 = 0x10;
  return;
}



// FUNCTION 1424bf420 FUN_1424bf420 body=22 status=ok
// SIG undefined FUN_1424bf420(void)

undefined8 FUN_1424bf420(void)

{
  int *in_stack_00000028;
  
  if (0 < *in_stack_00000028) {
    return 0;
  }
  *in_stack_00000028 = 0x10;
  return 0;
}



// FUNCTION 1424bf440 FUN_1424bf440 body=172 status=ok
// SIG undefined FUN_1424bf440(void)

void FUN_1424bf440(longlong *param_1,char *param_2,int param_3,char *param_4,int param_5,
                  int *param_6)

{
  size_t sVar1;
  undefined1 auStack_78 [32];
  char *local_58;
  int local_50;
  char *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_6 < 1) {
    if (((param_2 == (char *)0x0) && (param_3 != 0)) || ((param_4 == (char *)0x0 && (param_5 != 0)))
       ) {
      *param_6 = 1;
    }
    else {
      if (param_5 < 0) {
        sVar1 = strlen(param_4);
        param_5 = (int)sVar1;
      }
      local_48 = param_4;
      local_40 = param_5;
      if (param_3 < 0) {
        sVar1 = strlen(param_2);
        param_3 = (int)sVar1;
      }
      local_58 = param_2;
      local_50 = param_3;
      (**(code **)(*param_1 + 0x60))(param_1,&local_58,&local_48,param_6);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 1424bf500 FUN_1424bf500 body=22 status=ok
// SIG undefined FUN_1424bf500(void)

undefined8 FUN_1424bf500(void)

{
  int *in_stack_00000030;
  
  if (0 < *in_stack_00000030) {
    return 0;
  }
  *in_stack_00000030 = 0x10;
  return 0;
}



// FUNCTION 1424bf520 FUN_1424bf520 body=2 status=ok
// SIG undefined FUN_1424bf520(void)

void FUN_1424bf520(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1424bf530 FUN_1424bf530 body=143 status=ok
// SIG undefined FUN_1424bf530(void)

uint FUN_1424bf530(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_142503a40(param_1,"space");
  if (iVar1 == 0) {
    uVar2 = 0x1000;
  }
  else {
    iVar1 = FUN_142503a40(param_1,"punct");
    if (iVar1 == 0) {
      uVar2 = 0x1001;
    }
    else {
      iVar1 = FUN_142503a40(param_1,"symbol");
      if (iVar1 == 0) {
        uVar2 = 0x1002;
      }
      else {
        iVar1 = FUN_142503a40(param_1,"currency");
        if (iVar1 == 0) {
          uVar2 = 0x1003;
        }
        else {
          iVar1 = FUN_142503a40(param_1,"digit");
          uVar2 = -(uint)(iVar1 != 0) | 0x1004;
        }
      }
    }
  }
  return uVar2;
}



// FUNCTION 1424bf5c0 FUN_1424bf5c0 body=161 status=ok
// SIG undefined FUN_1424bf5c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1424bf5c0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (DAT_14c77eab8 != (undefined8 *)0x0) {
    (**(code **)*DAT_14c77eab8)(DAT_14c77eab8,1);
    DAT_14c77eab8 = (undefined8 *)0x0;
  }
  LOCK();
  DAT_14c77ead0 = 0;
  UNLOCK();
  if (DAT_14c77eac0 != 0) {
    lVar1 = DAT_14c77eac0 + -8;
    if (*(longlong *)(DAT_14c77eac0 + -8) != 0) {
      lVar3 = *(longlong *)(DAT_14c77eac0 + -8) * 0xe0;
      lVar2 = DAT_14c77eac0 + -0xe0;
      do {
        FUN_1414b3f60(lVar2 + lVar3);
        lVar3 = lVar3 + -0xe0;
      } while (lVar3 != 0);
    }
    FUN_1424b70c0(lVar1);
    DAT_14c77eac0 = 0;
  }
  _DAT_14c77eac8 = 0;
  LOCK();
  DAT_14c77eab0 = 0;
  UNLOCK();
  return 1;
}



// FUNCTION 1424bf670 FUN_1424bf670 body=214 status=ok
// SIG undefined FUN_1424bf670(void)

longlong * FUN_1424bf670(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 local_78 [64];
  undefined8 *local_38;
  undefined4 local_2c;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1424a7060(local_78,1,L"Collator",0xffffffff);
  FUN_142532400(param_1,local_78);
  FUN_140859a90(local_78);
  *param_1 = (longlong)icu_64::ICUCollatorService::vftable;
  local_2c = 0;
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0x90);
  local_28 = param_1;
  if (puVar1 != (undefined8 *)0x0) {
    local_38 = puVar1;
    FUN_1424a7220(local_78,"icudt64l-coll",0xffffffff,0);
    puVar1 = local_38;
    FUN_142532f40(local_38,local_78);
    FUN_140859a90(local_78);
    *puVar1 = icu_64::ICUCollatorFactory::vftable;
  }
  (**(code **)(*local_28 + 0x40))(local_28,puVar1,&local_2c);
  return local_28;
}



// FUNCTION 1424bf750 Unwind@1424bf750 body=37 status=ok
// SIG undefined Unwind@1424bf750(void)

void Unwind_1424bf750(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1424bf780 Unwind@1424bf780 body=37 status=ok
// SIG undefined Unwind@1424bf780(void)

void Unwind_1424bf780(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x60));
  return;
}



// FUNCTION 1424bf7b0 Unwind@1424bf7b0 body=37 status=ok
// SIG undefined Unwind@1424bf7b0(void)

void Unwind_1424bf7b0(undefined8 param_1,longlong param_2)

{
  FUN_142532480(*(undefined8 *)(param_2 + 0x70));
  return;
}



// FUNCTION 1424bf7e0 Unwind@1424bf7e0 body=37 status=ok
// SIG undefined Unwind@1424bf7e0(void)

void Unwind_1424bf7e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1424bf810 FUN_1424bf810 body=38 status=ok
// SIG undefined FUN_1424bf810(void)

undefined8 FUN_1424bf810(undefined8 param_1,int param_2)

{
  FUN_142532480();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424bf840 FUN_1424bf840 body=74 status=ok
// SIG undefined FUN_1424bf840(void)

undefined8 FUN_1424bf840(undefined8 param_1,undefined8 param_2,undefined ***param_3)

{
  undefined8 uVar1;
  undefined **local_58;
  undefined2 local_50;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_58 = &PTR_FUN_149e18960;
  local_50 = 2;
  if (param_3 == (undefined ***)0x0) {
    param_3 = &local_58;
  }
  uVar1 = FUN_1425352c0(param_1,param_2,param_3);
  FUN_140859a90(&local_58);
  return uVar1;
}



// FUNCTION 1424bf890 Unwind@1424bf890 body=32 status=ok
// SIG undefined Unwind@1424bf890(void)

void Unwind_1424bf890(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1424bf8b0 FUN_1424bf8b0 body=20 status=ok
// SIG undefined FUN_1424bf8b0(void)

bool FUN_1424bf8b0(void)

{
  int iVar1;
  
  iVar1 = FUN_142536560();
  return iVar1 == 1;
}



// FUNCTION 1424bf8d0 FUN_1424bf8d0 body=10 status=ok
// SIG undefined FUN_1424bf8d0(void)

void FUN_1424bf8d0(undefined8 param_1,longlong *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001424bf8d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 1424bf8e0 FUN_1424bf8e0 body=248 status=ok
// SIG undefined FUN_1424bf8e0(void)

longlong FUN_1424bf8e0(undefined8 param_1,longlong *param_2,longlong param_3,int *param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_110 [224];
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (param_3 != 0) {
    uVar1 = *(ushort *)(param_3 + 8);
    if ((uVar1 & 1) == 0) {
      if ((short)uVar1 < 0) {
        if (*(int *)(param_3 + 0xc) != 0) {
LAB_1424bf935:
          *(ushort *)(param_3 + 8) = uVar1 & 0x1f;
        }
      }
      else if ((short)uVar1 >> 5 != 0) goto LAB_1424bf935;
    }
    else {
      FUN_1424a8e40(param_3);
    }
  }
  FUN_1412ae150(local_110,&DAT_149e02088,0,0,0);
  (**(code **)(*param_2 + 0x50))(param_2,local_110);
  lVar2 = FUN_1424e28b0(local_110,param_4);
  if (*param_4 < 1) {
    lVar3 = thunk_FUN_1424da030(0x110);
    if (lVar3 == 0) {
      *param_4 = 7;
      goto LAB_1424bf97f;
    }
    local_30 = lVar3;
    FUN_14255d970(lVar3,lVar2);
    lVar3 = local_30;
  }
  else {
LAB_1424bf97f:
    lVar3 = 0;
    if (lVar2 == 0) goto LAB_1424bf9b8;
  }
  FUN_142537ca0(lVar2);
LAB_1424bf9b8:
  FUN_1414b3f60(local_110);
  return lVar3;
}



// FUNCTION 1424bf9e0 Unwind@1424bf9e0 body=42 status=ok
// SIG undefined Unwind@1424bf9e0(void)

void Unwind_1424bf9e0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x108));
  return;
}



// FUNCTION 1424bfa10 Unwind@1424bfa10 body=39 status=ok
// SIG undefined Unwind@1424bfa10(void)

void Unwind_1424bfa10(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x28);
  return;
}



// FUNCTION 1424bfa40 FUN_1424bfa40 body=38 status=ok
// SIG undefined FUN_1424bfa40(void)

undefined8 FUN_1424bfa40(undefined8 param_1,int param_2)

{
  FUN_142532fc0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424bfa70 FUN_1424bfa70 body=8 status=ok
// SIG undefined FUN_1424bfa70(void)

undefined * FUN_1424bfa70(void)

{
  return &DAT_14c77ead8;
}



// FUNCTION 1424bfa80 FUN_1424bfa80 body=8 status=ok
// SIG undefined FUN_1424bfa80(void)

undefined * FUN_1424bfa80(void)

{
  return &DAT_14c77ead9;
}



// FUNCTION 1424bfa90 FUN_1424bfa90 body=167 status=ok
// SIG undefined FUN_1424bfa90(void)

undefined8 * FUN_1424bfa90(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  
  *param_1 = icu_64::PluralRules::vftable;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if (param_1 != param_2) {
    param_1[1] = 0;
    iVar1 = *(int *)(param_2 + 2);
    *(int *)(param_1 + 2) = iVar1;
    if ((iVar1 < 1) && (param_2[1] != 0)) {
      lVar2 = thunk_FUN_1424da030(0xe0);
      if (lVar2 == 0) {
        param_1[1] = 0;
        iVar1 = 7;
      }
      else {
        FUN_1424bfbf0(lVar2,param_2[1]);
        param_1[1] = lVar2;
        iVar1 = *(int *)(lVar2 + 0xdc);
        if (iVar1 < 1) {
          return param_1;
        }
      }
      *(int *)(param_1 + 2) = iVar1;
    }
  }
  return param_1;
}



// FUNCTION 1424bfb40 Unwind@1424bfb40 body=43 status=ok
// SIG undefined Unwind@1424bfb40(void)

void Unwind_1424bfb40(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1424bfb70 FUN_1424bfb70 body=84 status=ok
// SIG undefined FUN_1424bfb70(void)

undefined8 * FUN_1424bfb70(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1424bfa90(puVar1,param_1);
    if (*(int *)(puVar1 + 2) < 1) {
      return puVar1;
    }
    (**(code **)*puVar1)(puVar1,1);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424bfbd0 Unwind@1424bfbd0 body=32 status=ok
// SIG undefined Unwind@1424bfbd0(void)

void Unwind_1424bfbd0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1424bfbf0 FUN_1424bfbf0 body=333 status=ok
// SIG undefined FUN_1424bfbf0(void)

undefined8 * FUN_1424bfbf0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  *param_1 = icu_64::RuleChain::vftable;
  FUN_1424a6be0(param_1 + 1,param_2 + 8);
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_1424a6be0(param_1 + 0xb,param_2 + 0x58);
  FUN_1424a6be0(param_1 + 0x13,param_2 + 0x98);
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0xd8);
  *(undefined1 *)((longlong)param_1 + 0xd9) = *(undefined1 *)(param_2 + 0xd9);
  iVar1 = *(int *)(param_2 + 0xdc);
  *(int *)((longlong)param_1 + 0xdc) = iVar1;
  if (0 < iVar1) {
    return param_1;
  }
  if (*(longlong *)(param_2 + 0x50) == 0) {
LAB_1424bfcc1:
    lVar2 = *(longlong *)(param_2 + 0x48);
  }
  else {
    lVar2 = thunk_FUN_1424da030(0x20);
    if (lVar2 != 0) {
      FUN_1424c24b0(lVar2,*(undefined8 *)(param_2 + 0x50));
      param_1[10] = lVar2;
      iVar1 = *(int *)(lVar2 + 0x18);
      if (0 < iVar1) goto LAB_1424bfd29;
      goto LAB_1424bfcc1;
    }
    param_1[10] = 0;
    *(undefined4 *)((longlong)param_1 + 0xdc) = 7;
    lVar2 = *(longlong *)(param_2 + 0x48);
  }
  if (lVar2 == 0) {
    return param_1;
  }
  lVar2 = thunk_FUN_1424da030(0xe0);
  if (lVar2 == 0) {
    param_1[9] = 0;
    iVar1 = 7;
  }
  else {
    FUN_1424bfbf0(lVar2,*(undefined8 *)(param_2 + 0x48));
    param_1[9] = lVar2;
    iVar1 = *(int *)(lVar2 + 0xdc);
    if (iVar1 < 1) {
      return param_1;
    }
  }
LAB_1424bfd29:
  *(int *)((longlong)param_1 + 0xdc) = iVar1;
  return param_1;
}



// FUNCTION 1424bfd40 Unwind@1424bfd40 body=40 status=ok
// SIG undefined Unwind@1424bfd40(void)

void Unwind_1424bfd40(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 1424bfd70 Unwind@1424bfd70 body=40 status=ok
// SIG undefined Unwind@1424bfd70(void)

void Unwind_1424bfd70(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 1424bfda0 Unwind@1424bfda0 body=40 status=ok
// SIG undefined Unwind@1424bfda0(void)

void Unwind_1424bfda0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1424bfdd0 Unwind@1424bfdd0 body=40 status=ok
// SIG undefined Unwind@1424bfdd0(void)

void Unwind_1424bfdd0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424bfe00 Unwind@1424bfe00 body=40 status=ok
// SIG undefined Unwind@1424bfe00(void)

void Unwind_1424bfe00(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1424bfe30 FUN_1424bfe30 body=2488 status=ok
// SIG undefined FUN_1424bfe30(void)

void FUN_1424bfe30(longlong param_1,undefined8 param_2,longlong param_3,int *param_4)

{
  short sVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  char local_108 [144];
  wchar_t *local_78;
  undefined4 local_6c;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  if (0 < *param_4) {
    return;
  }
  *(undefined8 *)(param_1 + 8) = param_2;
  puVar7 = (undefined8 *)(param_1 + 0x18);
  do {
    sVar1 = *(short *)(*(longlong *)(param_1 + 8) + 8);
    if (sVar1 < 0) {
      if (*(int *)(*(longlong *)(param_1 + 8) + 0xc) <= *(int *)(param_1 + 0x10)) {
        return;
      }
    }
    else if ((int)sVar1 >> 5 <= *(int *)(param_1 + 0x10)) {
      return;
    }
    FUN_1424c1d10(param_1,param_4);
    if (0 < *param_4) {
      return;
    }
    FUN_1424c20d0(param_1,param_4);
    if (0 < *param_4) {
      return;
    }
    switch(*(undefined4 *)(param_1 + 0x58)) {
    case 1:
      lVar5 = *(longlong *)(param_1 + 0x60);
      if ((*(int *)(lVar5 + 8) == 1) && (*(int *)(lVar5 + 0xc) == -1)) {
        if (*(short *)(param_1 + 0x20) < 0) {
          iVar10 = *(int *)(param_1 + 0x24);
        }
        else {
          iVar10 = (int)*(short *)(param_1 + 0x20) >> 5;
        }
        iVar10 = FUN_1424a83f0(puVar7,0,iVar10,local_108,0x80,0);
        local_108[iVar10] = '\0';
        iVar10 = atoi(local_108);
        *(int *)(*(longlong *)(param_1 + 0x60) + 0xc) = iVar10;
      }
      else {
        lVar5 = *(longlong *)(lVar5 + 0x18);
        if (lVar5 == 0) {
          if (*(short *)(param_1 + 0x20) < 0) {
            iVar10 = *(int *)(param_1 + 0x24);
          }
          else {
            iVar10 = (int)*(short *)(param_1 + 0x20) >> 5;
          }
          iVar10 = FUN_1424a83f0(puVar7,0,iVar10,local_108,0x80,0);
          local_108[iVar10] = '\0';
          iVar10 = atoi(local_108);
          *(int *)(*(longlong *)(param_1 + 0x60) + 0x10) = iVar10;
        }
        else {
          uVar2 = *(uint *)(param_1 + 0x70);
          if (((((int)uVar2 < 0) || (*(int *)(lVar5 + 8) < 1)) ||
              (*(int *)(lVar5 + 8) <= (int)uVar2)) ||
             (*(int *)(*(longlong *)(lVar5 + 0x18) + (ulonglong)uVar2 * 4) != -1)) {
            if (*(short *)(param_1 + 0x20) < 0) {
              iVar10 = *(int *)(param_1 + 0x24);
            }
            else {
              iVar10 = (int)*(short *)(param_1 + 0x20) >> 5;
            }
            local_68 = puVar7;
            iVar10 = FUN_1424a83f0(puVar7,0,iVar10,local_108,0x80,0);
            local_108[iVar10] = '\0';
            iVar10 = atoi(local_108);
            FUN_142518140(lVar5,iVar10);
            lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x18);
            uVar2 = *(uint *)(param_1 + 0x70);
            iVar10 = 0;
            if (((-1 < (int)uVar2) && (0 < *(int *)(lVar5 + 8))) &&
               ((int)uVar2 < *(int *)(lVar5 + 8))) {
              iVar10 = *(int *)(*(longlong *)(lVar5 + 0x18) + (ulonglong)uVar2 * 4);
            }
            uVar2 = *(uint *)(param_1 + 0x74);
            puVar7 = local_68;
            if ((((int)uVar2 < 0) || (*(int *)(lVar5 + 8) < 1)) ||
               (*(int *)(lVar5 + 8) <= (int)uVar2)) {
              if (0 < iVar10) goto LAB_1424c058b;
            }
            else if (*(int *)(*(longlong *)(lVar5 + 0x18) + (ulonglong)uVar2 * 4) < iVar10) {
LAB_1424c058b:
              *param_4 = 0x10100;
            }
          }
          else {
            if (*(short *)(param_1 + 0x20) < 0) {
              iVar10 = *(int *)(param_1 + 0x24);
            }
            else {
              iVar10 = (int)*(short *)(param_1 + 0x20) >> 5;
            }
            local_68 = puVar7;
            iVar10 = FUN_1424a83f0(puVar7,0,iVar10,local_108,0x80,0);
            local_108[iVar10] = '\0';
            iVar10 = atoi(local_108);
            FUN_142518140(lVar5,iVar10,uVar2);
            puVar7 = local_68;
            if (*(short *)(param_1 + 0x20) < 0) {
              iVar10 = *(int *)(param_1 + 0x24);
            }
            else {
              iVar10 = (int)*(short *)(param_1 + 0x20) >> 5;
            }
            uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x18);
            local_6c = *(undefined4 *)(param_1 + 0x74);
            iVar10 = FUN_1424a83f0(local_68,0,iVar10,local_108,0x80,0);
            local_108[iVar10] = '\0';
            iVar10 = atoi(local_108);
            FUN_142518140(uVar3,iVar10);
          }
        }
      }
      break;
    case 2:
      lVar5 = *(longlong *)(param_1 + 0x60);
      if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0x18) == 0)) goto LAB_1424c058b;
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(*(longlong *)(lVar5 + 0x18) + 8);
      lVar5 = *(longlong *)(lVar5 + 0x18);
      iVar10 = *(int *)(lVar5 + 8);
      if ((iVar10 < -1) || (*(int *)(lVar5 + 0xc) <= iVar10)) {
        cVar4 = FUN_1425182c0(lVar5,iVar10 + 1);
        if (cVar4 != '\0') {
          iVar10 = *(int *)(lVar5 + 8);
          goto LAB_1424c00a3;
        }
      }
      else {
LAB_1424c00a3:
        *(undefined4 *)(*(longlong *)(lVar5 + 0x18) + (longlong)iVar10 * 4) = 0xffffffff;
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      }
      *(undefined4 *)(param_1 + 0x74) =
           *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x18) + 8);
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x18);
      iVar10 = *(int *)(lVar5 + 8);
      if ((iVar10 < -1) || (*(int *)(lVar5 + 0xc) <= iVar10)) {
        cVar4 = FUN_1425182c0(lVar5,iVar10 + 1);
        if (cVar4 == '\0') break;
        iVar10 = *(int *)(lVar5 + 8);
      }
      *(undefined4 *)(*(longlong *)(lVar5 + 0x18) + (longlong)iVar10 * 4) = 0xffffffff;
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      break;
    case 10:
      puVar6 = (undefined8 *)thunk_FUN_1424da030(0xe0);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = icu_64::RuleChain::vftable;
        puVar6[1] = &PTR_FUN_149e18960;
        *(undefined2 *)(puVar6 + 2) = 2;
        puVar6[9] = 0;
        puVar6[10] = 0;
        puVar6[0xb] = &PTR_FUN_149e18960;
        *(undefined2 *)(puVar6 + 0xc) = 2;
        puVar6[0x13] = &PTR_FUN_149e18960;
        *(undefined2 *)(puVar6 + 0x14) = 2;
        *(undefined2 *)(puVar6 + 0x1b) = 0;
        *(undefined4 *)((longlong)puVar6 + 0xdc) = 0;
        local_68 = puVar7;
        FUN_1424a7c80(puVar6 + 1,puVar7);
        lVar5 = *(longlong *)(param_3 + 8);
        plVar11 = (longlong *)(param_3 + 8);
        if (lVar5 != 0) {
          lVar9 = *(longlong *)(lVar5 + 0x48);
          plVar11 = (longlong *)(lVar5 + 0x48);
          if (lVar9 == 0) {
            lVar5 = 0;
          }
          else {
            do {
              if (*(short *)(lVar9 + 0x10) < 0) {
                iVar10 = *(int *)(lVar9 + 0x14);
              }
              else {
                iVar10 = (int)*(short *)(lVar9 + 0x10) >> 5;
              }
              cVar4 = FUN_1424a7e30(lVar9 + 8,0,iVar10,L"other",0,5);
              local_78 = L"other";
              lVar5 = *plVar11;
              if (cVar4 == '\0') goto LAB_1424c05f8;
              lVar9 = *(longlong *)(lVar5 + 0x48);
              plVar11 = (longlong *)(lVar5 + 0x48);
            } while (lVar9 != 0);
            lVar5 = 0;
          }
LAB_1424c05f8:
          puVar6[9] = lVar5;
        }
        *plVar11 = (longlong)puVar6;
        puVar7 = (undefined8 *)thunk_FUN_1424da030(0x20);
        if (puVar7 == (undefined8 *)0x0) {
          *param_4 = 7;
          puVar7 = local_68;
        }
        else {
          puVar7[3] = 0;
          *puVar7 = icu_64::OrConstraint::vftable;
          puVar7[1] = 0;
          puVar7[2] = 0;
          *(undefined4 *)(puVar7 + 3) = 0;
          puVar6[10] = puVar7;
          if (*(int *)(puVar7 + 3) < 1) {
            do {
              puVar8 = puVar7;
              puVar7 = (undefined8 *)puVar8[2];
            } while ((undefined8 *)puVar8[2] != (undefined8 *)0x0);
            puVar7 = (undefined8 *)thunk_FUN_1424da030(0x38);
            if (puVar7 == (undefined8 *)0x0) {
              puVar8[1] = 0;
              *param_4 = 7;
              puVar7 = (undefined8 *)puVar8[1];
            }
            else {
              puVar7[2] = 0;
              puVar7[3] = 0;
              puVar7[4] = 0;
              puVar7[5] = 0;
              puVar7[6] = 0;
              *puVar7 = icu_64::AndConstraint::vftable;
              puVar7[1] = 0xffffffff00000000;
              *(undefined4 *)(puVar7 + 2) = 0xffffffff;
              *(undefined8 *)((longlong)puVar7 + 0x24) = 0;
              *(undefined8 *)((longlong)puVar7 + 0x2c) = 0;
              puVar8[1] = puVar7;
            }
          }
          else {
            *param_4 = *(int *)(puVar7 + 3);
            puVar7 = (undefined8 *)0x0;
          }
          *(undefined8 **)(param_1 + 0x60) = puVar7;
          *(undefined8 **)(param_1 + 0x68) = puVar6;
          puVar7 = local_68;
        }
        break;
      }
      goto LAB_1424c036c;
    case 0xb:
      lVar5 = *(longlong *)(param_1 + 0x60);
      if (*(int *)(lVar5 + 0x30) < 1) {
        puVar6 = (undefined8 *)thunk_FUN_1424da030(0x38);
        if (puVar6 == (undefined8 *)0x0) {
          *(undefined8 *)(lVar5 + 0x28) = 0;
          *param_4 = 7;
          puVar6 = *(undefined8 **)(lVar5 + 0x28);
        }
        else {
          puVar6[2] = 0;
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar6[5] = 0;
          puVar6[6] = 0;
          *puVar6 = icu_64::AndConstraint::vftable;
          puVar6[1] = 0xffffffff00000000;
          *(undefined4 *)(puVar6 + 2) = 0xffffffff;
          *(undefined8 *)((longlong)puVar6 + 0x24) = 0;
          *(undefined8 *)((longlong)puVar6 + 0x2c) = 0;
          *(undefined8 **)(lVar5 + 0x28) = puVar6;
        }
      }
      else {
        *param_4 = *(int *)(lVar5 + 0x30);
LAB_1424c02a1:
        puVar6 = (undefined8 *)0x0;
      }
LAB_1424c02a3:
      *(undefined8 **)(param_1 + 0x60) = puVar6;
      break;
    case 0xc:
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x50);
      do {
        lVar9 = lVar5;
        lVar5 = *(longlong *)(lVar9 + 0x10);
      } while (*(longlong *)(lVar9 + 0x10) != 0);
      puVar6 = (undefined8 *)thunk_FUN_1424da030(0x20);
      if (puVar6 != (undefined8 *)0x0) {
        puVar6[3] = 0;
        *puVar6 = icu_64::OrConstraint::vftable;
        puVar6[1] = 0;
        puVar6[2] = 0;
        *(undefined4 *)(puVar6 + 3) = 0;
        *(undefined8 **)(lVar9 + 0x10) = puVar6;
        puVar6[2] = 0;
        if (0 < *(int *)(puVar6 + 3)) {
          *param_4 = *(int *)(puVar6 + 3);
          goto LAB_1424c02a1;
        }
        do {
          puVar8 = puVar6;
          puVar6 = (undefined8 *)puVar8[2];
        } while ((undefined8 *)puVar8[2] != (undefined8 *)0x0);
        puVar6 = (undefined8 *)thunk_FUN_1424da030(0x38);
        if (puVar6 == (undefined8 *)0x0) {
          puVar8[1] = 0;
          *param_4 = 7;
          puVar6 = (undefined8 *)puVar8[1];
        }
        else {
          puVar6[2] = 0;
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar6[5] = 0;
          puVar6[6] = 0;
          *puVar6 = icu_64::AndConstraint::vftable;
          puVar6[1] = 0xffffffff00000000;
          *(undefined4 *)(puVar6 + 2) = 0xffffffff;
          *(undefined8 *)((longlong)puVar6 + 0x24) = 0;
          *(undefined8 *)((longlong)puVar6 + 0x2c) = 0;
          puVar8[1] = puVar6;
        }
        goto LAB_1424c02a3;
      }
      *(undefined8 *)(lVar9 + 0x10) = 0;
      *param_4 = 7;
      break;
    case 0xd:
      *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 8) = 1;
      break;
    case 0xe:
      *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x20) = 1;
      break;
    case 0xf:
    case 0x10:
    case 0x13:
      goto switchD_1424bff12_caseD_f;
    case 0x11:
      *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x20) = 1;
switchD_1424bff12_caseD_f:
      puVar6 = (undefined8 *)thunk_FUN_1424da030(0x20);
      if (puVar6 == (undefined8 *)0x0) {
        if (*param_4 < 1) {
LAB_1424c036c:
          *param_4 = 7;
        }
      }
      else {
        local_68 = puVar6;
        FUN_142517d10(puVar6,param_4);
        if (*param_4 < 1) {
          *(undefined8 **)(*(longlong *)(param_1 + 0x60) + 0x18) = local_68;
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x18);
          iVar10 = *(int *)(lVar5 + 8);
          if ((iVar10 < -1) || (*(int *)(lVar5 + 0xc) <= iVar10)) {
            cVar4 = FUN_1425182c0(lVar5,iVar10 + 1);
            if (cVar4 != '\0') {
              iVar10 = *(int *)(lVar5 + 8);
              goto LAB_1424c03b2;
            }
          }
          else {
LAB_1424c03b2:
            *(undefined4 *)(*(longlong *)(lVar5 + 0x18) + (longlong)iVar10 * 4) = 0xffffffff;
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          }
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x18);
          iVar10 = *(int *)(lVar5 + 8);
          if ((iVar10 < -1) || (*(int *)(lVar5 + 0xc) <= iVar10)) {
            cVar4 = FUN_1425182c0(lVar5,iVar10 + 1);
            if (cVar4 != '\0') {
              iVar10 = *(int *)(lVar5 + 8);
              goto LAB_1424c03f5;
            }
          }
          else {
LAB_1424c03f5:
            *(undefined4 *)(*(longlong *)(lVar5 + 0x18) + (longlong)iVar10 * 4) = 0xffffffff;
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          }
          *(undefined8 *)(param_1 + 0x70) = 0x100000000;
          *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x10) = 0x7fffffff;
          *(bool *)(*(longlong *)(param_1 + 0x60) + 0x21) = *(int *)(param_1 + 0x58) != 0x13;
        }
        else {
          (**(code **)*local_68)(local_68,1);
        }
      }
      break;
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
      *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x24) = *(undefined4 *)(param_1 + 0x58);
      break;
    case 0x1a:
      while (FUN_1424c1d10(param_1,param_4), *param_4 < 1) {
        switch(*(undefined4 *)(param_1 + 0x58)) {
        case 3:
        case 6:
        case 0x1c:
          goto switchD_1424bff12_caseD_3;
        default:
          if (*(short *)(param_1 + 0x20) < 0) {
            iVar10 = *(int *)(param_1 + 0x24);
          }
          else {
            iVar10 = (int)*(short *)(param_1 + 0x20) >> 5;
          }
          FUN_1424a9690(*(longlong *)(param_1 + 0x68) + 0x58,puVar7,0,iVar10);
          break;
        case 9:
          *(undefined1 *)(*(longlong *)(param_1 + 0x68) + 0xd8) = 1;
        }
      }
      break;
    case 0x1b:
      while (FUN_1424c1d10(param_1,param_4), *param_4 < 1) {
        switch(*(undefined4 *)(param_1 + 0x58)) {
        case 3:
        case 6:
        case 0x1c:
          goto switchD_1424bff12_caseD_3;
        default:
          if (*(short *)(param_1 + 0x20) < 0) {
            iVar10 = *(int *)(param_1 + 0x24);
          }
          else {
            iVar10 = (int)*(short *)(param_1 + 0x20) >> 5;
          }
          FUN_1424a9690(*(longlong *)(param_1 + 0x68) + 0x98,puVar7,0,iVar10);
          break;
        case 9:
          *(undefined1 *)(*(longlong *)(param_1 + 0x68) + 0xd9) = 1;
        }
      }
    }
switchD_1424bff12_caseD_3:
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x58);
    if (0 < *param_4) {
      return;
    }
  } while( true );
}



// FUNCTION 1424c0820 Unwind@1424c0820 body=64 status=ok
// SIG undefined Unwind@1424c0820(void)

void Unwind_1424c0820(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xd0));
  return;
}



// FUNCTION 1424c0860 Unwind@1424c0860 body=66 status=ok
// SIG undefined Unwind@1424c0860(void)

void Unwind_1424c0860(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0xb8) = L"other";
  return;
}



// FUNCTION 1424c08b0 FUN_1424c08b0 body=230 status=ok
// SIG undefined FUN_1424c08b0(void)

undefined8 * FUN_1424c08b0(longlong param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined1 local_108 [224];
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1412ae150(local_108,*(undefined8 *)(param_1 + 0x38),0,0,0);
  puVar1 = (undefined8 *)FUN_1424c0a00(local_108,0,param_3);
  if ((puVar1 == (undefined8 *)0x0) && (*param_3 < 1)) {
    *param_3 = 7;
  }
  FUN_1414b3f60(local_108);
  if (*param_3 < 1) {
    local_28 = (undefined8 *)thunk_FUN_1424da030(0x20);
    if (local_28 == (undefined8 *)0x0) {
      if (*param_3 < 1) {
        *param_3 = 7;
      }
    }
    else {
      local_28[1] = 0;
      local_28[2] = 0;
      *local_28 = icu_64::SharedPluralRules::vftable;
      local_28[3] = puVar1;
      if (*param_3 < 1) {
        FUN_142537c90();
        return local_28;
      }
      (**(code **)*local_28)(local_28,1);
    }
  }
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424c09a0 Unwind@1424c09a0 body=45 status=ok
// SIG undefined Unwind@1424c09a0(void)

void Unwind_1424c09a0(undefined8 param_1,longlong param_2)

{
  (**(code **)**(undefined8 **)(param_2 + 0x110))(*(undefined8 **)(param_2 + 0x110),1);
  return;
}



// FUNCTION 1424c09d0 Unwind@1424c09d0 body=37 status=ok
// SIG undefined Unwind@1424c09d0(void)

void Unwind_1424c09d0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x30);
  return;
}



// FUNCTION 1424c0a00 FUN_1424c0a00 body=377 status=ok
// SIG undefined FUN_1424c0a00(void)

undefined8 * FUN_1424c0a00(undefined8 param_1,int param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined4 extraout_XMM0_Da;
  undefined **local_f0 [2];
  undefined4 local_e0;
  undefined **local_d8;
  undefined2 local_d0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  short local_70;
  int local_6c;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_3 < 1) {
    if (param_2 < 2) {
      puVar1 = (undefined8 *)thunk_FUN_1424da030(0x18);
      if (puVar1 == (undefined8 *)0x0) {
        if (*param_3 < 1) {
          *param_3 = 7;
        }
      }
      else {
        *puVar1 = icu_64::PluralRules::vftable;
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 2) = 0;
        if (*param_3 < 1) {
          local_38 = puVar1;
          FUN_1424c0d40(extraout_XMM0_Da,local_78,param_1,param_2,param_3);
          puVar1 = local_38;
          if (-1 < local_70) {
            local_6c = (int)local_70 >> 5;
          }
          if (local_6c != 0) {
LAB_1424c0b06:
            local_f0[0] = icu_64::PluralRuleParser::vftable;
            local_e0 = 0;
            local_d8 = &PTR_FUN_149e18960;
            local_d0 = 2;
            local_98 = 0;
            uStack_90 = 0;
            local_88 = 0;
            local_80 = 0xffffffffffffffff;
            FUN_1424bfe30(local_f0,local_78,local_38,param_3);
            local_f0[0] = icu_64::PluralRuleParser::vftable;
            FUN_140859a90(&local_d8);
            FUN_140859a90(local_78);
            return local_38;
          }
          if (*param_3 != 7) {
            FUN_1424a6c90(local_f0,L"other: n");
            FUN_1424a7ca0(local_78,local_f0);
            FUN_140859a90(local_f0);
            *param_3 = 0;
            goto LAB_1424c0b06;
          }
          FUN_140859a90(local_78);
        }
        (**(code **)*puVar1)(puVar1,1);
      }
    }
    else {
      *param_3 = 1;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424c0b80 Unwind@1424c0b80 body=54 status=ok
// SIG undefined Unwind@1424c0b80(void)

void Unwind_1424c0b80(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x28) = icu_64::PluralRuleParser::vftable;
  FUN_140859a90(param_2 + 0x40);
  return;
}



// FUNCTION 1424c0bc0 Unwind@1424c0bc0 body=43 status=ok
// SIG undefined Unwind@1424c0bc0(void)

void Unwind_1424c0bc0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xa0);
  return;
}



// FUNCTION 1424c0bf0 Unwind@1424c0bf0 body=48 status=ok
// SIG undefined Unwind@1424c0bf0(void)

void Unwind_1424c0bf0(undefined8 param_1,longlong param_2)

{
  (**(code **)**(undefined8 **)(param_2 + 0xe0))(*(undefined8 **)(param_2 + 0xe0),1);
  return;
}



// FUNCTION 1424c0c20 FUN_1424c0c20 body=158 status=ok
// SIG undefined FUN_1424c0c20(void)

void FUN_1424c0c20(undefined8 param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  undefined **local_120;
  undefined4 local_118;
  undefined1 local_114;
  undefined1 local_110 [224];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar1 = FUN_14253ea50(param_3);
  if (*param_3 < 1) {
    local_118 = 0;
    local_114 = 0;
    local_120 = icu_64::LocaleCacheKey<icu_64::SharedPluralRules>::vftable;
    FUN_1424a3ce0(local_110,param_1);
    FUN_1424c3220(uVar1,&local_120,0,param_2,param_3);
    local_120 = icu_64::LocaleCacheKey<icu_64::SharedPluralRules>::vftable;
    FUN_1414b3f60(local_110);
    thunk_FUN_1424b70d0(&local_120);
  }
  return;
}



// FUNCTION 1424c0cc0 Unwind@1424c0cc0 body=63 status=ok
// SIG undefined Unwind@1424c0cc0(void)

void Unwind_1424c0cc0(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x28) = icu_64::LocaleCacheKey<icu_64::SharedPluralRules>::vftable;
  FUN_1414b3f60(param_2 + 0x38);
  thunk_FUN_1424b70d0(param_2 + 0x28);
  return;
}



// FUNCTION 1424c0d00 Unwind@1424c0d00 body=43 status=ok
// SIG undefined Unwind@1424c0d00(void)

void Unwind_1424c0d00(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x28);
  return;
}



// FUNCTION 1424c0d30 FUN_1424c0d30 body=10 status=ok
// SIG undefined FUN_1424c0d30(void)

void FUN_1424c0d30(undefined8 param_1,undefined8 param_2)

{
  FUN_1412ad590(param_1,0,param_2);
  return;
}



// FUNCTION 1424c0d40 FUN_1424c0d40 body=1118 status=ok
// SIG undefined FUN_1424c0d40(void)

undefined8 *
FUN_1424c0d40(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4,int *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  int iVar10;
  char local_248 [264];
  undefined4 local_140 [2];
  short local_138;
  int local_134;
  undefined **local_100;
  undefined2 local_f8;
  undefined **local_c0;
  short local_b8;
  int local_b4;
  undefined8 local_80;
  longlong local_78;
  undefined8 *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  undefined2 local_4a;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_100 = &PTR_FUN_149e18960;
  local_f8 = 2;
  if (0 < *param_5) {
    FUN_1424a77e0(param_2,&local_100);
    goto LAB_1424c0dd8;
  }
  lVar4 = FUN_1424edad0(0,"plurals",param_5);
  if (*param_5 < 1) {
    if (param_4 == 0) {
      pcVar9 = "locales";
    }
    else {
      if (param_4 != 1) {
        *param_5 = 1;
        goto LAB_1424c0dbc;
      }
      pcVar9 = "locales_ordinals";
    }
    lVar5 = FUN_1424ecc30(lVar4,pcVar9,0,param_5);
    if (*param_5 < 1) {
      local_50 = 0;
      local_60 = lVar4;
      local_58 = lVar5;
      uVar6 = FUN_1424a5500(param_3);
      lVar5 = local_58;
      lVar4 = FUN_1424ecf00(local_58,uVar6,&local_50,param_5);
      if (lVar4 == 0) {
        local_c0 = (undefined **)((ulonglong)local_c0 & 0xffffffff00000000);
        pcVar9 = (char *)FUN_1424a5500(param_3);
        strcpy(local_248,pcVar9);
        iVar10 = FUN_1424e8b00(local_248,local_248,0x9d,&local_c0);
        if (0 < iVar10) {
          do {
            local_50 = 0;
            lVar4 = FUN_1424ecf00(local_58,local_248,&local_50,&local_c0);
            if (lVar4 != 0) {
              *param_5 = 0;
              lVar5 = local_58;
              goto LAB_1424c0e8a;
            }
            local_c0 = (undefined **)((ulonglong)local_c0 & 0xffffffff00000000);
            iVar10 = FUN_1424e8b00(local_248,local_248,0x9d,&local_c0);
          } while (0 < iVar10);
        }
        FUN_1424a77e0(param_2,&local_100);
        lVar5 = local_58;
        lVar4 = local_60;
      }
      else {
LAB_1424c0e8a:
        FUN_14250ae10(lVar4,local_248,local_50 + 1);
        lVar4 = local_60;
        lVar7 = FUN_1424ecc30(local_60,"rules",0,param_5);
        if (*param_5 < 1) {
          iVar10 = 0;
          lVar8 = FUN_1424ecc30(lVar7,local_248,0,param_5);
          if (*param_5 < 1) {
            local_78 = lVar7;
            local_68 = lVar8;
            iVar3 = FUN_1424eaf70(lVar8);
            *param_2 = &PTR_FUN_149e18960;
            *(undefined2 *)(param_2 + 1) = 2;
            local_80 = 0;
            lVar8 = local_68;
            lVar5 = local_58;
            lVar7 = local_78;
            lVar4 = local_60;
            local_70 = param_2;
            if (0 < iVar3) {
              do {
                local_c0 = &PTR_FUN_149e18960;
                local_b8 = 2;
                local_140[0] = 0;
                uVar6 = FUN_1424eafb0(local_68,local_140,&local_80,param_5);
                if (*param_5 < 1) {
                  FUN_1424a8f10(&local_c0,1,uVar6,local_140[0]);
                }
                else {
                  FUN_1424a7130(&local_c0);
                }
                FUN_1424a7220(local_140,local_80,0xffffffff,0);
                puVar2 = local_70;
                iVar1 = local_134;
                if (-1 < local_138) {
                  iVar1 = (int)local_138 >> 5;
                }
                FUN_1424a9690(local_70,local_140,0,iVar1);
                local_4a = 0x3a;
                FUN_1424a6cf0(puVar2,&local_4a,0,1);
                puVar2 = local_70;
                iVar1 = local_b4;
                if (-1 < local_b8) {
                  iVar1 = (int)local_b8 >> 5;
                }
                FUN_1424a9690(local_70,&local_c0,0,iVar1);
                local_4a = 0x3b;
                FUN_1424a6cf0(puVar2,&local_4a,0,1);
                FUN_140859a90(local_140);
                FUN_140859a90(&local_c0);
                iVar10 = iVar10 + 1;
                lVar8 = local_68;
                lVar5 = local_58;
                lVar7 = local_78;
                param_2 = local_70;
                lVar4 = local_60;
              } while (iVar10 < iVar3);
            }
          }
          else {
            FUN_1424a77e0(param_2,&local_100);
          }
          if (lVar8 != 0) {
            FUN_1424ea9f0();
          }
        }
        else {
          FUN_1424a77e0(param_2,&local_100);
        }
        if (lVar7 != 0) {
          FUN_1424ea9f0(lVar7);
        }
      }
    }
    else {
      FUN_1424a77e0(param_2,&local_100);
    }
    if (lVar5 != 0) {
      FUN_1424ea9f0(lVar5);
    }
  }
  else {
LAB_1424c0dbc:
    FUN_1424a77e0(param_2,&local_100);
  }
  if (lVar4 != 0) {
    FUN_1424ea9f0(lVar4);
  }
LAB_1424c0dd8:
  FUN_140859a90(&local_100);
  return param_2;
}



// FUNCTION 1424c11a0 Unwind@1424c11a0 body=58 status=ok
// SIG undefined Unwind@1424c11a0(void)

void Unwind_1424c11a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x1a8);
  return;
}



// FUNCTION 1424c11e0 Unwind@1424c11e0 body=58 status=ok
// SIG undefined Unwind@1424c11e0(void)

void Unwind_1424c11e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x128);
  return;
}



// FUNCTION 1424c1220 Unwind@1424c1220 body=58 status=ok
// SIG undefined Unwind@1424c1220(void)

void Unwind_1424c1220(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x1a8);
  return;
}



// FUNCTION 1424c1260 Unwind@1424c1260 body=102 status=ok
// SIG undefined Unwind@1424c1260(void)

void Unwind_1424c1260(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x1f8));
  if (*(longlong *)(param_2 + 0x200) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x200));
  }
  if (*(longlong *)(param_2 + 0x1f0) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x1f0));
  }
  return;
}



// FUNCTION 1424c12d0 Unwind@1424c12d0 body=102 status=ok
// SIG undefined Unwind@1424c12d0(void)

void Unwind_1424c12d0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x210) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x210));
  }
  if (*(longlong *)(param_2 + 0x208) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x208));
  }
  FUN_140859a90(param_2 + 0x168);
  return;
}



// FUNCTION 1424c1340 FUN_1424c1340 body=137 status=ok
// SIG undefined FUN_1424c1340(void)

undefined8 FUN_1424c1340(longlong param_1,undefined8 param_2,int param_3)

{
  undefined **local_60;
  undefined **local_58 [7];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_60 = icu_64::FixedDecimal::vftable;
  local_58[0] = icu_64::FixedDecimal::vftable;
  FUN_1424c2ad0(&local_60,(double)param_3);
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_1424a7060(param_2,1,L"other: n",0xffffffff);
  }
  else {
    FUN_1424c1500(*(longlong *)(param_1 + 8),param_2,&local_60);
  }
  FUN_1424b70d0(local_58);
  FUN_142537d00(&local_60);
  return param_2;
}



// FUNCTION 1424c13d0 Unwind@1424c13d0 body=43 status=ok
// SIG undefined Unwind@1424c13d0(void)

void Unwind_1424c13d0(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(param_2 + 0x30);
  FUN_142537d00(param_2 + 0x28);
  return;
}



// FUNCTION 1424c1400 FUN_1424c1400 body=59 status=ok
// SIG undefined FUN_1424c1400(void)

undefined8 FUN_1424c1400(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_1424a7060(param_2,1,L"other: n",0xffffffff);
  }
  else {
    FUN_1424c1500(*(longlong *)(param_1 + 8),param_2);
  }
  return param_2;
}



// FUNCTION 1424c1440 FUN_1424c1440 body=135 status=ok
// SIG undefined FUN_1424c1440(void)

undefined8 FUN_1424c1440(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined **local_60;
  undefined **local_58 [7];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_60 = icu_64::FixedDecimal::vftable;
  local_58[0] = icu_64::FixedDecimal::vftable;
  FUN_1424c2ad0(&local_60,param_3);
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_1424a7060(param_2,1,L"other: n",0xffffffff);
  }
  else {
    FUN_1424c1500(*(longlong *)(param_1 + 8),param_2,&local_60);
  }
  FUN_1424b70d0(local_58);
  FUN_142537d00(&local_60);
  return param_2;
}



// FUNCTION 1424c14d0 Unwind@1424c14d0 body=43 status=ok
// SIG undefined Unwind@1424c14d0(void)

void Unwind_1424c14d0(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(param_2 + 0x30);
  FUN_142537d00(param_2 + 0x28);
  return;
}



// FUNCTION 1424c1500 FUN_1424c1500 body=185 status=ok
// SIG undefined FUN_1424c1500(void)

undefined8 FUN_1424c1500(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = (**(code **)(*param_3 + 0x10))(param_3);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_3 + 0x18))(param_3), cVar1 == '\0')) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x50);
      do {
        lVar2 = *(longlong *)(lVar3 + 8);
        if (lVar2 == 0) goto LAB_1424c15a4;
        do {
          cVar1 = FUN_1424c2380(lVar2,param_3);
          if (cVar1 == '\0') break;
          lVar2 = *(longlong *)(lVar2 + 0x28);
        } while (lVar2 != 0);
      } while ((cVar1 == '\0') && (lVar3 = *(longlong *)(lVar3 + 0x10), lVar3 != 0));
      if (cVar1 != '\0') {
LAB_1424c15a4:
        FUN_1424a6be0(param_2,param_1 + 8);
        return param_2;
      }
      param_1 = *(longlong *)(param_1 + 0x48);
    } while (param_1 != 0);
  }
  FUN_1424a7060(param_2,1,L"other",5);
  return param_2;
}



// FUNCTION 1424c15d0 FUN_1424c15d0 body=419 status=ok
// SIG undefined FUN_1424c15d0(void)

undefined8 * FUN_1424c15d0(undefined8 *param_1,longlong param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  
  FUN_14250a770();
  *param_1 = icu_64::PluralKeywordEnumeration::vftable;
  *(undefined4 *)(param_1 + 0xf) = 0;
  puVar4 = param_1 + 0x10;
  FUN_142515e50(puVar4,param_3);
  if (*param_3 < 1) {
    FUN_142516bb0(puVar4,&LAB_1424b70f0);
    bVar1 = true;
    for (; param_2 != 0; param_2 = *(longlong *)(param_2 + 0x48)) {
      puVar3 = (undefined8 *)thunk_FUN_1424da030(0x40);
      if (puVar3 == (undefined8 *)0x0) goto LAB_1424c1762;
      FUN_1424a6be0(puVar3,param_2 + 8);
      FUN_1425163e0(puVar4,puVar3,param_3);
      if (0 < *param_3) {
        puVar4 = (undefined8 *)*puVar3;
        goto LAB_1424c1774;
      }
      if (*(short *)(param_2 + 0x10) < 0) {
        iVar5 = *(int *)(param_2 + 0x14);
      }
      else {
        iVar5 = (int)*(short *)(param_2 + 0x10) >> 5;
      }
      cVar2 = FUN_1424a7e30(param_2 + 8,0,iVar5,L"other",0,5);
      if (cVar2 == '\0') {
        bVar1 = false;
      }
    }
    if (bVar1) {
      puVar3 = (undefined8 *)thunk_FUN_1424da030(0x40);
      if (puVar3 == (undefined8 *)0x0) {
LAB_1424c1762:
        *param_3 = 7;
      }
      else {
        FUN_1424a6c90(puVar3,L"other");
        FUN_1425163e0(puVar4,puVar3,param_3);
        if (0 < *param_3) {
          puVar4 = (undefined8 *)*puVar3;
LAB_1424c1774:
          (*(code *)*puVar4)(puVar3,1);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 1424c1780 Unwind@1424c1780 body=52 status=ok
// SIG undefined Unwind@1424c1780(void)

void Unwind_1424c1780(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x58));
  return;
}



// FUNCTION 1424c17c0 Unwind@1424c17c0 body=52 status=ok
// SIG undefined Unwind@1424c17c0(void)

void Unwind_1424c17c0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x58));
  return;
}



// FUNCTION 1424c1800 Unwind@1424c1800 body=52 status=ok
// SIG undefined Unwind@1424c1800(void)

void Unwind_1424c1800(undefined8 param_1,longlong param_2)

{
  FUN_142515ff0(*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 1424c1840 Unwind@1424c1840 body=52 status=ok
// SIG undefined Unwind@1424c1840(void)

void Unwind_1424c1840(undefined8 param_1,longlong param_2)

{
  FUN_14250a7a0(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 1424c1880 Unwind@1424c1880 body=53 status=ok
// SIG undefined Unwind@1424c1880(void)

void Unwind_1424c1880(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x38) = L"other";
  return;
}



// FUNCTION 1424c18c0 FUN_1424c18c0 body=228 status=ok
// SIG undefined FUN_1424c18c0(void)

bool FUN_1424c18c0(longlong param_1,longlong param_2)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  
  if (*(short *)(param_2 + 8) < 0) {
    iVar6 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar6 = (int)*(short *)(param_2 + 8) >> 5;
  }
  cVar2 = FUN_1424a7e30(param_2,0,iVar6,L"other",0,5);
  if (cVar2 == '\0') {
    bVar7 = true;
  }
  else {
    for (lVar5 = *(longlong *)(param_1 + 8); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x48)) {
      uVar1 = *(ushort *)(lVar5 + 0x10);
      if ((uVar1 & 1) == 0) {
        if ((short)uVar1 < 0) {
          iVar6 = *(int *)(lVar5 + 0x14);
        }
        else {
          iVar6 = (int)(short)uVar1 >> 5;
        }
        uVar1 = *(ushort *)(param_2 + 8);
        if ((short)uVar1 < 0) {
          iVar4 = *(int *)(param_2 + 0xc);
        }
        else {
          iVar4 = (int)(short)uVar1 >> 5;
        }
        if (((uVar1 & 1) == 0) && (iVar6 == iVar4)) {
          bVar3 = FUN_1412ae090(lVar5 + 8,param_2);
          goto joined_r0x0001424c1938;
        }
      }
      else {
        bVar3 = *(byte *)(param_2 + 8) & 1;
joined_r0x0001424c1938:
        if (bVar3 != 0) goto LAB_1424c19ab;
      }
    }
    lVar5 = 0;
LAB_1424c19ab:
    bVar7 = lVar5 != 0;
  }
  return bVar7;
}



// FUNCTION 1424c19c0 Unwind@1424c19c0 body=35 status=ok
// SIG undefined Unwind@1424c19c0(void)

void Unwind_1424c19c0(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x38) = L"other";
  return;
}



// FUNCTION 1424c19f0 FUN_1424c19f0 body=82 status=ok
// SIG undefined FUN_1424c19f0(void)

void FUN_1424c19f0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(short *)(param_1 + 8) < 0) {
    iVar1 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar1 = (int)*(short *)(param_1 + 8) >> 5;
  }
  FUN_1424a7e30(param_1,0,iVar1,param_2,0,param_3);
  return;
}



// FUNCTION 1424c1a50 Unwind@1424c1a50 body=28 status=ok
// SIG undefined Unwind@1424c1a50(void)

void Unwind_1424c1a50(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x40);
  return;
}



// FUNCTION 1424c1a70 FUN_1424c1a70 body=439 status=ok
// SIG undefined FUN_1424c1a70(void)

ulonglong FUN_1424c1a70(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  longlong *local_48;
  int local_34 [3];
  
  local_34[1] = -2;
  local_34[2] = -1;
  local_34[0] = 0;
  if (param_1 == param_2) {
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    goto LAB_1424c1aa2;
  }
  if ((0 < *(int *)(param_1 + 0x10)) ||
     (plVar4 = (longlong *)thunk_FUN_1424da030(0xa8), plVar4 == (longlong *)0x0)) {
    uVar6 = 0;
    goto LAB_1424c1aa2;
  }
  FUN_1424c15d0(plVar4,*(undefined8 *)(param_1 + 8),local_34);
  if (0 < local_34[0]) {
    (**(code **)*plVar4)(plVar4,1);
    uVar6 = 0;
    if (0 < local_34[0]) goto LAB_1424c1aa2;
    plVar4 = (longlong *)0x0;
  }
  iVar2 = *(int *)(param_2 + 0x10);
  if (*(int *)(param_2 + 0x10) < 1) {
    local_48 = (longlong *)thunk_FUN_1424da030(0xa8);
    if (local_48 != (longlong *)0x0) {
      FUN_1424c15d0(local_48,*(undefined8 *)(param_2 + 8),local_34);
      if (local_34[0] < 1) {
LAB_1424c1b7c:
        iVar2 = (**(code **)(*plVar4 + 0x18))(plVar4,local_34);
        iVar3 = (**(code **)(*local_48 + 0x18))(local_48,local_34);
        if (iVar2 == iVar3) {
          (**(code **)(*plVar4 + 0x38))(plVar4,local_34);
          do {
            lVar5 = (**(code **)(*plVar4 + 0x30))(plVar4,local_34);
            if (lVar5 == 0) {
              (**(code **)(*local_48 + 0x38))(local_48,local_34);
              goto LAB_1424c1be4;
            }
            cVar1 = FUN_1424c18c0(param_2,lVar5);
          } while (cVar1 != '\0');
        }
        goto LAB_1424c1c05;
      }
      (**(code **)*local_48)(local_48,1);
      uVar6 = 0;
      if (local_34[0] < 1) {
        local_48 = (longlong *)0x0;
        goto LAB_1424c1b7c;
      }
      goto LAB_1424c1b06;
    }
    iVar2 = local_34[0];
    if (local_34[0] < 1) {
      local_34[0] = 7;
      iVar2 = local_34[0];
    }
  }
  local_34[0] = iVar2;
  uVar6 = 0;
  goto LAB_1424c1b06;
  while (cVar1 = FUN_1424c18c0(param_1,lVar5), cVar1 != '\0') {
LAB_1424c1be4:
    lVar5 = (**(code **)(*local_48 + 0x30))(local_48,local_34);
    if (lVar5 == 0) {
      uVar6 = CONCAT71((int7)((ulonglong)local_34 >> 8),local_34[0] < 1);
      goto LAB_1424c1c07;
    }
  }
LAB_1424c1c05:
  uVar6 = 0;
LAB_1424c1c07:
  (**(code **)*local_48)(local_48,1);
LAB_1424c1b06:
  if (plVar4 != (longlong *)0x0) {
    (**(code **)*plVar4)(plVar4,1);
  }
LAB_1424c1aa2:
  return uVar6 & 0xffffffff;
}



// FUNCTION 1424c1c30 Unwind@1424c1c30 body=40 status=ok
// SIG undefined Unwind@1424c1c30(void)

void Unwind_1424c1c30(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1424c1c60 Unwind@1424c1c60 body=40 status=ok
// SIG undefined Unwind@1424c1c60(void)

void Unwind_1424c1c60(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1424c1c90 Unwind@1424c1c90 body=52 status=ok
// SIG undefined Unwind@1424c1c90(void)

void Unwind_1424c1c90(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    (**(code **)**(undefined8 **)(param_2 + 0x20))(*(undefined8 **)(param_2 + 0x20),1);
  }
  return;
}



// FUNCTION 1424c1cd0 Unwind@1424c1cd0 body=52 status=ok
// SIG undefined Unwind@1424c1cd0(void)

void Unwind_1424c1cd0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x28) != 0) {
    (**(code **)**(undefined8 **)(param_2 + 0x28))(*(undefined8 **)(param_2 + 0x28),1);
  }
  return;
}



// FUNCTION 1424c1d10 FUN_1424c1d10 body=941 status=ok
// SIG undefined FUN_1424c1d10(void)

void FUN_1424c1d10(longlong param_1,int *param_2)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  undefined1 local_60 [64];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < *param_2) goto LAB_1424c1ec5;
  lVar3 = *(longlong *)(param_1 + 8);
  uVar7 = *(uint *)(param_1 + 0x10);
  uVar2 = (uint)*(short *)(lVar3 + 8);
  uVar4 = *(uint *)(lVar3 + 0xc);
  uVar9 = (int)uVar2 >> 5;
  if (*(short *)(lVar3 + 8) < 0) {
    uVar9 = uVar4;
  }
  if ((int)uVar7 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar7;
    do {
      uVar8 = 0;
      if (uVar9 <= uVar7) {
switchD_1424c1ddb_caseD_22:
        *(undefined4 *)(param_1 + 0x58) = uVar8;
        uVar2 = (uint)*(ushort *)(lVar3 + 8);
        uVar4 = *(uint *)(lVar3 + 0xc);
        break;
      }
      lVar6 = lVar3 + 10;
      if ((uVar2 & 2) == 0) {
        lVar6 = *(longlong *)(lVar3 + 0x18);
      }
      sVar1 = *(short *)(lVar6 + lVar10 * 2);
      if ((ushort)(sVar1 - 0x30U) < 10) {
        uVar8 = 1;
        goto switchD_1424c1ddb_caseD_22;
      }
      if ((ushort)(sVar1 - 0x61U) < 0x1a) {
        uVar8 = 10;
        goto switchD_1424c1ddb_caseD_22;
      }
      if (sVar1 != 0x20) {
        switch(sVar1) {
        case 0x21:
          uVar8 = 0x11;
          break;
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2d:
        case 0x2f:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3c:
        case 0x3e:
        case 0x3f:
          break;
        case 0x25:
          uVar8 = 0xd;
          break;
        case 0x2c:
          uVar8 = 2;
          break;
        case 0x2e:
          uVar8 = 7;
          break;
        case 0x3a:
          uVar8 = 5;
          break;
        case 0x3b:
          uVar8 = 3;
          break;
        case 0x3d:
          uVar8 = 0x10;
          break;
        case 0x40:
          uVar8 = 6;
          break;
        default:
          if (sVar1 == 0x7e) {
            uVar8 = 0x12;
          }
          else if (sVar1 == 0x2026) {
            uVar8 = 9;
          }
        }
        goto switchD_1424c1ddb_caseD_22;
      }
      *(undefined4 *)(param_1 + 0x58) = 4;
      lVar10 = lVar10 + 1;
      uVar7 = uVar7 + 1;
      *(uint *)(param_1 + 0x10) = uVar7;
      uVar2 = (uint)*(short *)(lVar3 + 8);
      uVar4 = *(uint *)(lVar3 + 0xc);
      uVar9 = (int)uVar2 >> 5;
      if (*(short *)(lVar3 + 8) < 0) {
        uVar9 = uVar4;
      }
    } while (lVar10 < (int)uVar9);
  }
  uVar9 = (int)(short)uVar2 >> 5;
  if ((short)uVar2 < 0) {
    uVar9 = uVar4;
  }
  if ((int)uVar9 <= (int)uVar7) {
    *(undefined4 *)(param_1 + 0x58) = 0x1c;
    goto LAB_1424c1ec5;
  }
  switch(*(undefined4 *)(param_1 + 0x58)) {
  case 1:
    uVar5 = (longlong)(int)uVar7 + 1;
    uVar4 = (uint)*(short *)(lVar3 + 8);
    if (*(short *)(lVar3 + 8) < 0) {
      uVar9 = *(uint *)(lVar3 + 0xc);
    }
    else {
      uVar9 = (int)uVar4 >> 5;
    }
    if (((longlong)uVar5 < (longlong)(int)uVar9) && ((uint)uVar5 < uVar9)) {
      lVar10 = (longlong)(int)uVar7 + 2;
      while( true ) {
        lVar6 = lVar3 + 10;
        if ((uVar4 & 2) == 0) {
          lVar6 = *(longlong *)(lVar3 + 0x18);
        }
        if (9 < (ushort)(*(short *)(lVar6 + -2 + lVar10 * 2) - 0x30U)) break;
        *(undefined4 *)(param_1 + 0x58) = 1;
        uVar4 = (uint)*(short *)(lVar3 + 8);
        if (*(short *)(lVar3 + 8) < 0) {
          uVar9 = *(uint *)(lVar3 + 0xc);
        }
        else {
          uVar9 = (int)uVar4 >> 5;
        }
        uVar2 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar2;
        if (((int)uVar9 <= lVar10) || (lVar10 = lVar10 + 1, uVar9 <= uVar2)) break;
      }
    }
    uVar4 = (uint)uVar5;
    *(undefined4 *)(param_1 + 0x58) = 1;
    break;
  case 2:
  case 3:
  case 5:
  case 6:
  case 9:
  case 0xd:
  case 0x10:
  case 0x12:
    uVar4 = uVar7 + 1;
    break;
  default:
    *param_2 = 0x10100;
    uVar4 = uVar7 + 1;
    uVar7 = *(uint *)(param_1 + 0x10);
    lVar3 = *(longlong *)(param_1 + 8);
    break;
  case 7:
    uVar4 = uVar7 + 1;
    if (uVar4 < uVar9 && (int)uVar4 < (int)uVar9) {
      if ((uVar2 & 2) == 0) {
        lVar10 = *(longlong *)(lVar3 + 0x18);
      }
      else {
        lVar10 = lVar3 + 10;
      }
      if (*(short *)(lVar10 + (longlong)(int)uVar4 * 2) == 0x2e) {
        uVar4 = uVar7 + 2;
        if ((uVar4 < uVar9 && (int)uVar4 < (int)uVar9) &&
           (*(short *)(lVar10 + (longlong)(int)uVar4 * 2) == 0x2e)) {
          *(undefined4 *)(param_1 + 0x58) = 9;
          uVar4 = uVar7 + 3;
        }
        else {
          *(undefined4 *)(param_1 + 0x58) = 8;
        }
      }
    }
    break;
  case 10:
    uVar5 = (longlong)(int)uVar7 + 1;
    uVar4 = (uint)*(short *)(lVar3 + 8);
    if (*(short *)(lVar3 + 8) < 0) {
      uVar9 = *(uint *)(lVar3 + 0xc);
    }
    else {
      uVar9 = (int)uVar4 >> 5;
    }
    if (((longlong)uVar5 < (longlong)(int)uVar9) && ((uint)uVar5 < uVar9)) {
      lVar10 = (longlong)(int)uVar7 + 2;
      while( true ) {
        lVar6 = lVar3 + 10;
        if ((uVar4 & 2) == 0) {
          lVar6 = *(longlong *)(lVar3 + 0x18);
        }
        if (0x19 < (ushort)(*(short *)(lVar6 + -2 + lVar10 * 2) - 0x61U)) break;
        *(undefined4 *)(param_1 + 0x58) = 10;
        uVar4 = (uint)*(short *)(lVar3 + 8);
        if (*(short *)(lVar3 + 8) < 0) {
          uVar9 = *(uint *)(lVar3 + 0xc);
        }
        else {
          uVar9 = (int)uVar4 >> 5;
        }
        uVar2 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar2;
        if (((int)uVar9 <= lVar10) || (lVar10 = lVar10 + 1, uVar9 <= uVar2)) break;
      }
    }
    uVar4 = (uint)uVar5;
    *(undefined4 *)(param_1 + 0x58) = 10;
    break;
  case 0x11:
    uVar4 = uVar7 + 1;
    if (uVar4 < uVar9) {
      if ((uVar2 & 2) == 0) {
        lVar10 = *(longlong *)(lVar3 + 0x18);
      }
      else {
        lVar10 = lVar3 + 10;
      }
      if (*(short *)(lVar10 + (longlong)(int)uVar4 * 2) == 0x3d) {
        uVar4 = uVar7 + 2;
        break;
      }
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  FUN_1424a7950(local_60,lVar3,uVar7,uVar4 - uVar7);
  FUN_1424a7ca0(param_1 + 0x18,local_60);
  FUN_140859a90(local_60);
  *(uint *)(param_1 + 0x10) = uVar4;
LAB_1424c1ec5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
}



// FUNCTION 1424c20d0 FUN_1424c20d0 body=268 status=ok
// SIG undefined FUN_1424c20d0(void)

void FUN_1424c20d0(longlong param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0 < *param_2) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x5c);
  if ((iVar2 != 0) && (iVar2 != 3)) {
    uVar1 = FUN_1424c25e0(param_1 + 0x18,*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    iVar2 = *(int *)(param_1 + 0x5c);
  }
  switch(iVar2) {
  case 0:
  case 3:
    if (*(int *)(param_1 + 0x58) == 10) {
      return;
    }
    if (*(int *)(param_1 + 0x58) == 0x1c) {
      return;
    }
    break;
  case 1:
    uVar3 = *(uint *)(param_1 + 0x58);
    if (0x1c < uVar3) break;
    uVar4 = 0x101bd94c;
    goto LAB_1424c213d;
  case 2:
  case 8:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x13:
    if (*(int *)(param_1 + 0x58) == 1) {
      return;
    }
    break;
  case 5:
    if (*(int *)(param_1 + 0x58) - 0x15U < 5) {
      return;
    }
    if (*(int *)(param_1 + 0x58) == 6) {
      return;
    }
    break;
  case 6:
    if ((*(uint *)(param_1 + 0x58) & 0xfffffffe) == 0x1a) {
      return;
    }
    break;
  case 10:
    if (*(int *)(param_1 + 0x58) == 5) {
      return;
    }
    break;
  case 0xb:
  case 0xc:
    if (*(int *)(param_1 + 0x58) - 0x15U < 5) {
      return;
    }
    break;
  case 0xe:
    uVar3 = *(uint *)(param_1 + 0x58);
    if (0x13 < uVar3) break;
    uVar4 = 0x88002;
    goto LAB_1424c213d;
  case 0x14:
    if (*(int *)(param_1 + 0x58) == 1) {
      return;
    }
    if (*(int *)(param_1 + 0x58) == 0xe) {
      return;
    }
    break;
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
    uVar3 = *(uint *)(param_1 + 0x58);
    if (0x14 < uVar3) break;
    uVar4 = 0x1be000;
LAB_1424c213d:
    if ((uVar4 >> (uVar3 & 0x1f) & 1) != 0) {
      return;
    }
  }
  *param_2 = 0x10100;
  return;
}



// FUNCTION 1424c21e0 FUN_1424c21e0 body=309 status=ok
// SIG undefined FUN_1424c21e0(void)

undefined8 * FUN_1424c21e0(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  *param_1 = icu_64::AndConstraint::vftable;
  param_1[1] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  iVar2 = *(int *)(param_2 + 0x30);
  *(int *)(param_1 + 6) = iVar2;
  if (0 < iVar2) {
    return param_1;
  }
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  if (*(longlong *)(param_2 + 0x18) != 0) {
    piVar1 = (int *)(param_1 + 6);
    puVar3 = (undefined8 *)thunk_FUN_1424da030(0x20);
    if (puVar3 == (undefined8 *)0x0) {
      if (0 < *piVar1) {
        return param_1;
      }
      *piVar1 = 7;
      return param_1;
    }
    FUN_142517d10(puVar3,piVar1);
    if (0 < *piVar1) {
      (**(code **)*puVar3)(puVar3,1);
      return param_1;
    }
    param_1[3] = puVar3;
    FUN_142517e20(puVar3,*(undefined8 *)(param_2 + 0x18),piVar1);
  }
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  if (*(longlong *)(param_2 + 0x28) != 0) {
    lVar4 = thunk_FUN_1424da030(0x38);
    if (lVar4 == 0) {
      param_1[5] = 0;
      *(undefined4 *)(param_1 + 6) = 7;
    }
    else {
      FUN_1424c21e0(lVar4,*(undefined8 *)(param_2 + 0x28));
      param_1[5] = lVar4;
    }
  }
  return param_1;
}



// FUNCTION 1424c2320 Unwind@1424c2320 body=36 status=ok
// SIG undefined Unwind@1424c2320(void)

void Unwind_1424c2320(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1424c2350 Unwind@1424c2350 body=36 status=ok
// SIG undefined Unwind@1424c2350(void)

void Unwind_1424c2350(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1424c2380 FUN_1424c2380 body=293 status=ok
// SIG undefined FUN_1424c2380(void)

byte FUN_1424c2380(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  double dVar6;
  double extraout_XMM0_Qa;
  undefined4 uVar7;
  undefined4 uVar8;
  
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 0:
    return 1;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  case 0x15:
    uVar7 = 0;
    break;
  case 0x16:
    uVar7 = 1;
    break;
  case 0x17:
    uVar7 = 2;
    break;
  case 0x18:
    uVar7 = 4;
    break;
  case 0x19:
    uVar7 = 3;
  }
  dVar6 = (double)(**(code **)(*param_2 + 8))(param_2,uVar7);
  uVar7 = SUB84(dVar6,0);
  uVar8 = (undefined4)((ulonglong)dVar6 >> 0x20);
  if (*(char *)(param_1 + 0x21) == '\0') {
LAB_1424c23f7:
    if (*(int *)(param_1 + 8) == 1) {
      dVar6 = fmod(dVar6,(double)*(int *)(param_1 + 0xc));
      uVar7 = SUB84(dVar6,0);
      uVar8 = (undefined4)((ulonglong)dVar6 >> 0x20);
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (lVar2 == 0) {
      bVar3 = (double)CONCAT44(uVar8,uVar7) == (double)*(int *)(param_1 + 0x10) ||
              *(int *)(param_1 + 0x10) == -1;
      goto LAB_1424c2493;
    }
    uVar1 = *(uint *)(lVar2 + 8);
    if (0 < (int)uVar1) {
      lVar4 = 0;
      do {
        if ((double)*(int *)(*(longlong *)(lVar2 + 0x18) + lVar4 * 4) <=
            (double)CONCAT44(uVar8,uVar7)) {
          iVar5 = 0;
          if (lVar4 + 1 < (longlong)(ulonglong)uVar1) {
            iVar5 = *(int *)(*(longlong *)(lVar2 + 0x18) + 4 + lVar4 * 4);
          }
          if ((double)CONCAT44(uVar8,uVar7) <= (double)iVar5) {
            bVar3 = true;
            goto LAB_1424c2493;
          }
        }
        lVar4 = lVar4 + 2;
      } while ((int)lVar4 < (int)uVar1);
    }
  }
  else {
    FUN_1424d97b0(dVar6);
    if ((dVar6 == extraout_XMM0_Qa) && (!NAN(dVar6) && !NAN(extraout_XMM0_Qa))) goto LAB_1424c23f7;
  }
  bVar3 = false;
LAB_1424c2493:
  return *(char *)(param_1 + 0x20) != '\0' ^ bVar3;
}



// FUNCTION 1424c24b0 FUN_1424c24b0 body=195 status=ok
// SIG undefined FUN_1424c24b0(void)

undefined8 * FUN_1424c24b0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = icu_64::OrConstraint::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  iVar1 = *(int *)(param_2 + 0x18);
  *(int *)(param_1 + 3) = iVar1;
  if (0 < iVar1) {
    return param_1;
  }
  if (*(longlong *)(param_2 + 8) == 0) {
LAB_1424c251e:
    if (*(longlong *)(param_2 + 0x10) == 0) {
      return param_1;
    }
    plVar3 = param_1 + 2;
    lVar2 = thunk_FUN_1424da030(0x20);
    if (lVar2 != 0) {
      FUN_1424c24b0(lVar2,*(undefined8 *)(param_2 + 0x10));
      *plVar3 = lVar2;
      iVar1 = *(int *)(lVar2 + 0x18);
      if (iVar1 < 1) {
        return param_1;
      }
      goto LAB_1424c2564;
    }
  }
  else {
    plVar3 = param_1 + 1;
    lVar2 = thunk_FUN_1424da030(0x38);
    if (lVar2 != 0) {
      FUN_1424c21e0(lVar2,*(undefined8 *)(param_2 + 8));
      *plVar3 = lVar2;
      goto LAB_1424c251e;
    }
  }
  *plVar3 = 0;
  iVar1 = 7;
LAB_1424c2564:
  *(int *)(param_1 + 3) = iVar1;
  return param_1;
}


