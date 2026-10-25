// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145087fd0 FUN_145087fd0 body=6 status=ok
// SIG undefined FUN_145087fd0(void)

undefined8 FUN_145087fd0(void)

{
  return 0xc;
}



// FUNCTION 145087fe0 FUN_145087fe0 body=6 status=ok
// SIG undefined FUN_145087fe0(void)

undefined8 FUN_145087fe0(void)

{
  return 0xc;
}



// FUNCTION 145087ff0 FUN_145087ff0 body=6 status=ok
// SIG undefined FUN_145087ff0(void)

undefined8 FUN_145087ff0(void)

{
  return 0x10;
}



// FUNCTION 145088000 FUN_145088000 body=6 status=ok
// SIG undefined FUN_145088000(void)

undefined8 FUN_145088000(void)

{
  return 0x14;
}



// FUNCTION 145088010 FUN_145088010 body=6 status=ok
// SIG undefined FUN_145088010(void)

undefined8 FUN_145088010(void)

{
  return 0x28;
}



// FUNCTION 145088020 FUN_145088020 body=6 status=ok
// SIG undefined FUN_145088020(void)

undefined8 FUN_145088020(void)

{
  return 0x1c;
}



// FUNCTION 145088030 FUN_145088030 body=6 status=ok
// SIG undefined FUN_145088030(void)

undefined8 FUN_145088030(void)

{
  return 0x1c;
}



// FUNCTION 145088040 FUN_145088040 body=6 status=ok
// SIG undefined FUN_145088040(void)

undefined8 FUN_145088040(void)

{
  return 0x10;
}



// FUNCTION 145088050 FUN_145088050 body=6 status=ok
// SIG undefined FUN_145088050(void)

undefined8 FUN_145088050(void)

{
  return 0x24;
}



// FUNCTION 145088060 FUN_145088060 body=6 status=ok
// SIG undefined FUN_145088060(void)

undefined8 FUN_145088060(void)

{
  return 0x34;
}



// FUNCTION 145088070 FUN_145088070 body=6 status=ok
// SIG undefined FUN_145088070(void)

undefined8 FUN_145088070(void)

{
  return 0xc;
}



// FUNCTION 145088080 FUN_145088080 body=6 status=ok
// SIG undefined FUN_145088080(void)

undefined8 FUN_145088080(void)

{
  return 0xc;
}



// FUNCTION 145088090 FUN_145088090 body=6 status=ok
// SIG undefined FUN_145088090(void)

undefined8 FUN_145088090(void)

{
  return 0x14;
}



// FUNCTION 1450880a0 FUN_1450880a0 body=6 status=ok
// SIG undefined FUN_1450880a0(void)

undefined8 FUN_1450880a0(void)

{
  return 0xc;
}



// FUNCTION 1450880b0 FUN_1450880b0 body=6 status=ok
// SIG undefined FUN_1450880b0(void)

undefined8 FUN_1450880b0(void)

{
  return 0x10;
}



// FUNCTION 1450880c0 FUN_1450880c0 body=6 status=ok
// SIG undefined FUN_1450880c0(void)

undefined8 FUN_1450880c0(void)

{
  return 0x1c;
}



// FUNCTION 1450880d0 FUN_1450880d0 body=6 status=ok
// SIG undefined FUN_1450880d0(void)

undefined8 FUN_1450880d0(void)

{
  return 8;
}



// FUNCTION 1450880e0 FUN_1450880e0 body=6 status=ok
// SIG undefined FUN_1450880e0(void)

undefined8 FUN_1450880e0(void)

{
  return 6;
}



// FUNCTION 1450880f0 FUN_1450880f0 body=6 status=ok
// SIG undefined FUN_1450880f0(void)

undefined8 FUN_1450880f0(void)

{
  return 0x28;
}



// FUNCTION 145088100 FUN_145088100 body=6 status=ok
// SIG undefined FUN_145088100(void)

undefined8 FUN_145088100(void)

{
  return 0xc;
}



// FUNCTION 145088110 FUN_145088110 body=6 status=ok
// SIG undefined FUN_145088110(void)

undefined8 FUN_145088110(void)

{
  return 0x1c;
}



// FUNCTION 145088120 FUN_145088120 body=6 status=ok
// SIG undefined FUN_145088120(void)

undefined8 FUN_145088120(void)

{
  return 0xc;
}



// FUNCTION 145088130 FUN_145088130 body=6 status=ok
// SIG undefined FUN_145088130(void)

undefined8 FUN_145088130(void)

{
  return 0x14;
}



// FUNCTION 145088140 FUN_145088140 body=43 status=ok
// SIG undefined FUN_145088140(void)

undefined8 * FUN_145088140(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_149c23938;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 145088170 FUN_145088170 body=517 status=ok
// SIG undefined FUN_145088170(void)

/* WARNING: Removing unreachable block (ram,0x000145088231) */

undefined8 FUN_145088170(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined4 uVar10;
  char local_res8 [8];
  undefined4 local_78 [20];
  
  local_res8[0] = '\0';
  cVar8 = FUN_145084ee0(*param_1,0,local_res8);
  if ((local_res8[0] != '\0') || (DAT_14c79bf60 != DAT_14c79bf5c)) {
    uVar10 = FUN_145084bc0(*param_1);
    *(undefined4 *)*param_1 = uVar10;
  }
  lVar3 = *param_1;
  bVar7 = false;
  puVar4 = *(undefined8 **)(lVar3 + 0x38);
  while ((puVar4 != (undefined8 *)0x0 && (*(uint *)(puVar4 + 1) <= *(uint *)(lVar3 + 0x88)))) {
    plVar5 = (longlong *)puVar4[2];
    *(undefined8 *)(lVar3 + 0x38) = *puVar4;
    if (puVar4 == *(undefined8 **)(lVar3 + 0x40)) {
      *(undefined8 *)(lVar3 + 0x40) = 0;
    }
    *puVar4 = *(undefined8 *)(lVar3 + 0x48);
    *(int *)(lVar3 + 0x5c) = *(int *)(lVar3 + 0x5c) + -1;
    *(undefined8 **)(lVar3 + 0x48) = puVar4;
    local_78[0] = 0;
    if ((*(short *)(plVar5[1] + 0x34) == 0x403) ||
       ((*(short *)(plVar5[1] + 0x34) == 0x503 && (cVar9 = FUN_1453726c0(), cVar9 != '\0')))) {
      (**(code **)(*(longlong *)plVar5[1] + 0x50))((longlong *)plVar5[1],local_78);
    }
    (**(code **)(*(longlong *)plVar5[1] + 0x38))((longlong *)plVar5[1],plVar5);
    if ((int)plVar5[6] != 0) {
      FUN_1450b28b0(DAT_14c790fc0);
    }
    plVar6 = (longlong *)plVar5[1];
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar6 + 0x18))();
    }
    (**(code **)(*plVar5 + 8))(plVar5,0);
    AK::MemoryMgr::Free(0,plVar5);
    DAT_14c7fdcb8 = DAT_14c7fdcb8 + 1;
    bVar7 = true;
    puVar4 = *(undefined8 **)(lVar3 + 0x38);
  }
  if ((cVar8 != '\0') || (bVar7)) {
    *(undefined1 *)(*param_1 + 0xbc) = 1;
  }
  if (((char)((int *)*param_1)[0x2f] != '\0') && (*(int *)*param_1 != 0)) {
    FUN_144d4bb40(param_2,8);
    return param_2;
  }
  FUN_145071a40(param_2,1);
  return param_2;
}



// FUNCTION 145088380 FUN_145088380 body=70 status=ok
// SIG undefined FUN_145088380(void)

undefined8 FUN_145088380(longlong param_1,undefined8 param_2)

{
  FUN_145072170();
  QueryPerformanceCounter((LARGE_INTEGER *)(*(longlong *)(param_1 + 8) + 0xa8));
  FUN_144d4bb40(param_2,2);
  FUN_1450721a0();
  return param_2;
}



// FUNCTION 1450883d0 FUN_1450883d0 body=43 status=ok
// SIG undefined FUN_1450883d0(void)

undefined8 * FUN_1450883d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_149c23938;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145088400 FUN_145088400 body=303 status=ok
// SIG undefined FUN_145088400(void)

undefined8 FUN_145088400(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  
  FUN_145072170();
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar2 = FUN_145084bc0(*(undefined8 *)(param_1 + 8));
  }
  else {
    uVar2 = 0;
  }
  **(undefined4 **)(param_1 + 8) = uVar2;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 4) = 0;
  *(bool *)(*(int **)(param_1 + 8) + 2) = 0 < **(int **)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar1 + 8) == '\0') {
    uVar3 = *(int *)(lVar1 + 0xb0) + 1;
    *(uint *)(lVar1 + 0xb0) = uVar3;
    if ((DAT_14c7910e0 / DAT_14c72f428 < uVar3) &&
       (((DAT_14c79bf68 != 2 || (DAT_14c72f2c0 != '\0')) &&
        ((float)DAT_14c7910e0 <
         (float)(*(longlong *)(lVar1 + 0xa8) - *(longlong *)(lVar1 + 0xa0)) / DAT_14c79c4d4)))) {
      FUN_1450a2090(1);
      QueryPerformanceCounter((LARGE_INTEGER *)(lVar1 + 0xa0));
      *(undefined4 *)(lVar1 + 0xb0) = 0;
    }
  }
  else {
    if (*(longlong *)(lVar1 + 0xa0) < *(longlong *)(lVar1 + 0xa8)) {
      *(longlong *)(lVar1 + 0xa0) = *(longlong *)(lVar1 + 0xa8);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xb0) = 0;
  }
  FUN_145084960(*(undefined8 *)(param_1 + 8),param_2);
  FUN_1450721a0();
  return param_2;
}



// FUNCTION 145088530 FUN_145088530 body=43 status=ok
// SIG undefined FUN_145088530(void)

undefined8 * FUN_145088530(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_149c23938;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 145088560 FUN_145088560 body=41 status=ok
// SIG undefined FUN_145088560(void)

undefined8 FUN_145088560(undefined8 param_1,undefined8 param_2)

{
  FUN_145072170();
  FUN_144d4bb40(param_2,0x40);
  FUN_1450721a0();
  return param_2;
}



// FUNCTION 145088590 FUN_145088590 body=43 status=ok
// SIG undefined FUN_145088590(void)

undefined8 * FUN_145088590(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_149c23938;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1450885c0 FUN_1450885c0 body=60 status=ok
// SIG undefined FUN_1450885c0(void)

undefined8 FUN_1450885c0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  FUN_145072170();
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  FUN_145071a20(param_2);
  FUN_1450721a0();
  return param_2;
}



// FUNCTION 145088600 FUN_145088600 body=43 status=ok
// SIG undefined FUN_145088600(void)

undefined8 * FUN_145088600(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_149c23938;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145088630 FUN_145088630 body=91 status=ok
// SIG undefined FUN_145088630(void)

undefined8 FUN_145088630(longlong param_1,undefined8 param_2)

{
  FUN_145072170();
  if (**(int **)(param_1 + 8) != 0) {
    FUN_144d4bb40(param_2,4);
    FUN_1450721a0();
    return param_2;
  }
  FUN_145071a40(param_2,1);
  FUN_1450721a0();
  return param_2;
}



// FUNCTION 145088690 FUN_145088690 body=43 status=ok
// SIG undefined FUN_145088690(void)

undefined8 * FUN_145088690(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_149c23938;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1450886c0 FUN_1450886c0 body=52 status=ok
// SIG undefined FUN_1450886c0(void)

undefined8 FUN_1450886c0(longlong param_1,undefined8 param_2)

{
  FUN_145072170();
  FUN_145088170(param_1 + 8,param_2);
  FUN_1450721a0();
  return param_2;
}



// FUNCTION 145088700 FUN_145088700 body=43 status=ok
// SIG undefined FUN_145088700(void)

undefined8 * FUN_145088700(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_149c23938;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145088730 FUN_145088730 body=569 status=ok
// SIG undefined FUN_145088730(void)

undefined8 FUN_145088730(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined8 *local_res20;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined1 local_38 [16];
  
  FUN_145072170();
  if (((char)(*(int **)(param_1 + 8))[0x2f] != '\0') && (**(int **)(param_1 + 8) != 0)) {
    FUN_145079340();
    FUN_1450ad700(g_pRegistryMgr);
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0xbc) = 0;
  }
  FUN_1450a5c00();
  if (DAT_14c7fdcbc != '\0') {
    FUN_145371120();
  }
  piVar1 = *(int **)(param_1 + 8);
  if ((*piVar1 == 0) || ((int)(uint)DAT_14c72f434 < piVar1[1])) {
    FUN_145071a40(param_2,1);
  }
  else {
    lVar2 = FUN_144d4bb40(local_38,0x10);
    local_res8 = 0xffffffffffffffff;
    FUN_145072680(&local_res20,&local_res8,0x10,8,"CAkAudioMgr::ProcessAllCommands",0,1);
    if (local_res20 != (undefined8 *)0x0) {
      local_res20[1] = piVar1;
      *local_res20 = &PTR_FUN_149c23af8;
    }
    local_78 = local_res8;
    local_res8 = 0xffffffffffffffff;
    FUN_145071ba0(local_58,&local_78,1,*(undefined8 *)(lVar2 + 8));
    local_res10 = 0xffffffffffffffff;
    FUN_145072680(&local_70,&local_res10,0x10,8,"CAkAudioMgr::EndRender",0,1);
    if (local_70 != (undefined8 *)0x0) {
      *local_70 = &PTR_FUN_149c23b08;
      *(undefined1 *)(local_70 + 1) = (undefined1)local_res8;
    }
    local_68 = local_res10;
    local_res10 = 0xffffffffffffffff;
    FUN_145071ba0(local_48,&local_68,1,local_50);
    local_res18 = (undefined8 *)0xffffffffffffffff;
    FUN_145072680(&local_60,&local_res18,0x10,8,"CAkAudioMgr::EndPerformIteration",0,1);
    if (local_60 != (undefined8 *)0x0) {
      local_60[1] = piVar1;
      *local_60 = &PTR_FUN_149c23b18;
    }
    local_60 = local_res18;
    local_res18 = (undefined8 *)0xffffffffffffffff;
    FUN_145071ba0(param_2,&local_60,1,local_40);
  }
  FUN_1450721a0();
  return param_2;
}



// FUNCTION 145088970 FUN_145088970 body=43 status=ok
// SIG undefined FUN_145088970(void)

undefined8 * FUN_145088970(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_149c23938;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1450889a0 FUN_1450889a0 body=105 status=ok
// SIG undefined FUN_1450889a0(void)

undefined8 FUN_1450889a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_145072170();
  iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 0x88);
  FUN_1450b0c10(DAT_14c791068,iVar1 + 1);
  FUN_1450b43c0(DAT_14c790fd0,iVar1 + 1);
  FUN_1453712e0();
  FUN_14507d730(DAT_14c791028);
  FUN_1450ab3f0(param_2);
  FUN_1450721a0();
  return param_2;
}



// FUNCTION 145088a10 FUN_145088a10 body=43 status=ok
// SIG undefined FUN_145088a10(void)

undefined8 * FUN_145088a10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_149c23938;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145088a40 FUN_145088a40 body=63 status=ok
// SIG undefined FUN_145088a40(void)

undefined8 FUN_145088a40(undefined8 param_1,undefined8 param_2)

{
  FUN_145072170();
  FUN_145071650();
  FUN_1450c7260();
  FUN_14507d740(DAT_14c791028);
  FUN_144d4bb40(param_2,0x20);
  FUN_1450721a0();
  return param_2;
}



// FUNCTION 145088a80 FUN_145088a80 body=43 status=ok
// SIG undefined FUN_145088a80(void)

undefined8 * FUN_145088a80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_149c23938;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145088ab0 FUN_145088ab0 body=75 status=ok
// SIG undefined FUN_145088ab0(void)

undefined8 FUN_145088ab0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  
  FUN_145072170();
  piVar1 = (int *)(*(longlong *)(param_1 + 8) + 4);
  *piVar1 = *piVar1 + 1;
  **(int **)(param_1 + 8) = **(int **)(param_1 + 8) + -1;
  piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x88);
  *piVar1 = *piVar1 + 1;
  FUN_145084960(*(undefined8 *)(param_1 + 8),param_2);
  FUN_1450721a0();
  return param_2;
}



// FUNCTION 145088b00 FUN_145088b00 body=43 status=ok
// SIG undefined FUN_145088b00(void)

undefined8 * FUN_145088b00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_149c23938;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145088b30 FUN_145088b30 body=58 status=ok
// SIG undefined FUN_145088b30(void)

void FUN_145088b30(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = AK::MemoryMgr::Malloc(5,0xe8);
  if (pvVar1 != (void *)0x0) {
    FUN_1450f4ee0(pvVar1,param_1,FUN_145089670);
    return;
  }
  return;
}



// FUNCTION 145088b70 FUN_145088b70 body=333 status=ok
// SIG undefined FUN_145088b70(void)

undefined8 FUN_145088b70(wchar_t *param_1)

{
  int iVar1;
  longlong lVar2;
  wchar_t *_Dst;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong _MaxCount;
  
  if (param_1 != (wchar_t *)0x0) {
    lVar5 = -1;
    lVar2 = -1;
    do {
      lVar3 = lVar2 + 1;
      lVar2 = lVar2 + 1;
    } while (param_1[lVar3] != L'\0');
    iVar1 = (int)lVar2;
    uVar6 = iVar1 + 2;
    _Dst = AK::MemoryMgr::Malloc(0,(ulonglong)uVar6 * 2);
    if (_Dst == (wchar_t *)0x0) {
      DAT_14c79be38 = _Dst;
      return 0x34;
    }
    _MaxCount = (ulonglong)(iVar1 + 1U) - 1;
    lVar2 = -1;
    do {
      lVar3 = lVar2;
      lVar2 = lVar3 + 1;
    } while (param_1[lVar2] != L'\0');
    if (lVar3 + 2U <= _MaxCount) {
      lVar2 = -1;
      do {
        lVar3 = lVar2;
        lVar2 = lVar3 + 1;
      } while (param_1[lVar2] != L'\0');
      _MaxCount = lVar3 + 2;
    }
    DAT_14c79be38 = _Dst;
    wcsncpy_s(_Dst,(ulonglong)(iVar1 + 1U),param_1,_MaxCount);
    _Dst[_MaxCount] = L'\0';
    if ((2 < uVar6) && (DAT_14c79be38[iVar1 - 1] != L'\\')) {
      do {
        lVar5 = lVar5 + 1;
      } while (DAT_14c79be38[lVar5] != L'\0');
      iVar1 = (uVar6 - (int)lVar5) + -1;
      if (0 < iVar1) {
        iVar1 = 1;
      }
      wcsncat_s(DAT_14c79be38,(ulonglong)uVar6,L"\\",(longlong)iVar1);
    }
  }
  uVar4 = FUN_145088ea0(0,1,&PTR_FUN_14c72ebf0);
  if ((int)uVar4 == 1) {
    uVar4 = FUN_1450892d0(g_pAKPluginList);
  }
  return uVar4;
}



// FUNCTION 145088cc0 FUN_145088cc0 body=121 status=ok
// SIG undefined FUN_145088cc0(void)

undefined8 FUN_145088cc0(void)

{
  if (DAT_14c79be48 != (void *)0x0) {
    DAT_14c79be50 = 0;
    AK::MemoryMgr::Free(0,DAT_14c79be48);
    DAT_14c79be48 = (void *)0x0;
    DAT_14c79be54 = 0;
  }
  if (DAT_14c79be58 != (void *)0x0) {
    DAT_14c79be60 = 0;
    AK::MemoryMgr::Free(0,DAT_14c79be58);
    DAT_14c79be58 = (void *)0x0;
    DAT_14c79be64 = 0;
  }
  if (DAT_14c79be38 != (void *)0x0) {
    AK::MemoryMgr::Free(0,DAT_14c79be38);
    DAT_14c79be38 = (void *)0x0;
  }
  return 1;
}



// FUNCTION 145088d40 FUN_145088d40 body=338 status=ok
// SIG undefined FUN_145088d40(void)

undefined8
FUN_145088d40(uint param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar9 = (ulonglong)DAT_14c79be50;
  iVar8 = (param_3 * 0x1000 + param_2) * 0x10 + (param_1 & 0xf);
  piVar3 = DAT_14c79be48 + (ulonglong)DAT_14c79be50 * 8;
  for (piVar2 = DAT_14c79be48;
      (piVar2 != DAT_14c79be48 + (ulonglong)DAT_14c79be50 * 8 && (*piVar2 != iVar8));
      piVar2 = piVar2 + 8) {
  }
  piVar7 = (int *)0x0;
  piVar6 = piVar2 + 2;
  if (piVar2 == piVar3) {
    piVar6 = piVar7;
  }
  piVar2 = DAT_14c79be48;
  if (piVar6 != (int *)0x0) {
    return 1;
  }
  for (; (piVar2 != piVar3 && (*piVar2 != iVar8)); piVar2 = piVar2 + 8) {
  }
  piVar6 = piVar2 + 2;
  if (piVar2 == piVar3) {
    piVar6 = piVar7;
  }
  if (piVar6 == (int *)0x0) {
    uVar5 = (ulonglong)DAT_14c79be54;
    uVar10 = uVar9;
    if (uVar5 <= uVar9) {
      cVar1 = FUN_1450894c0(&DAT_14c79be48);
      if (cVar1 == '\0') goto LAB_145088e6d;
      uVar5 = (ulonglong)DAT_14c79be54;
      uVar10 = (ulonglong)DAT_14c79be50;
    }
    piVar6 = piVar7;
    if (uVar5 <= uVar9) goto LAB_145088e6d;
    DAT_14c79be50 = (int)uVar10 + 1;
    piVar3 = DAT_14c79be48 + uVar10 * 8;
    if (piVar3 == (int *)0x0) goto LAB_145088e6d;
    *piVar3 = iVar8;
    piVar6 = piVar3 + 2;
  }
  *(undefined8 *)piVar6 = param_4;
  *(undefined8 *)(piVar6 + 2) = param_5;
  *(undefined8 *)(piVar6 + 4) = param_6;
LAB_145088e6d:
  uVar4 = 0x34;
  if (piVar6 != (int *)0x0) {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 145088ea0 FUN_145088ea0 body=333 status=ok
// SIG undefined FUN_145088ea0(void)

undefined8 FUN_145088ea0(int param_1,int param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  int *piVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  
  uVar3 = DAT_14c79be60;
  uVar10 = (ulonglong)DAT_14c79be60;
  iVar9 = (param_2 * 0x1000 + param_1) * 0x10 + 1;
  piVar1 = DAT_14c79be58 + uVar10 * 10;
  for (piVar5 = DAT_14c79be58; (piVar5 != DAT_14c79be58 + uVar10 * 10 && (*piVar5 != iVar9));
      piVar5 = piVar5 + 10) {
  }
  plVar8 = (longlong *)0x0;
  plVar7 = (longlong *)(piVar5 + 2);
  if (piVar5 == piVar1) {
    plVar7 = plVar8;
  }
  if (plVar7 != (longlong *)0x0) {
    return 1;
  }
  if ((*param_3 == 0) || (piVar5 = DAT_14c79be58, param_3[1] == 0)) {
    return 0x1f;
  }
  for (; (piVar5 != piVar1 && (*piVar5 != iVar9)); piVar5 = piVar5 + 10) {
  }
  plVar7 = (longlong *)(piVar5 + 2);
  if (piVar5 == piVar1) {
    plVar7 = plVar8;
  }
  if (plVar7 == (longlong *)0x0) {
    if (DAT_14c79be64 <= DAT_14c79be60) {
      cVar4 = FUN_145089590(&DAT_14c79be58);
      if (cVar4 == '\0') goto LAB_145088fbb;
      uVar10 = (ulonglong)DAT_14c79be60;
    }
    plVar7 = plVar8;
    if (DAT_14c79be64 <= uVar3) goto LAB_145088fbb;
    DAT_14c79be60 = (int)uVar10 + 1;
    piVar1 = DAT_14c79be58 + uVar10 * 10;
    if (piVar1 == (int *)0x0) goto LAB_145088fbb;
    *piVar1 = iVar9;
    plVar7 = (longlong *)(piVar1 + 2);
  }
  lVar2 = param_3[1];
  *plVar7 = *param_3;
  plVar7[1] = lVar2;
  lVar2 = param_3[3];
  plVar7[2] = param_3[2];
  plVar7[3] = lVar2;
LAB_145088fbb:
  uVar6 = 0x34;
  if (plVar7 != (longlong *)0x0) {
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 145088ff0 FUN_145088ff0 body=128 status=ok
// SIG undefined FUN_145088ff0(void)

int FUN_145088ff0(undefined8 param_1,int param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  
  *param_3 = 0;
  for (piVar1 = DAT_14c79be48;
      (piVar1 != DAT_14c79be48 + (ulonglong)DAT_14c79be50 * 8 && (*piVar1 != param_2));
      piVar1 = piVar1 + 8) {
  }
  piVar3 = piVar1 + 2;
  if (piVar1 == DAT_14c79be48 + (ulonglong)DAT_14c79be50 * 8) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 != (int *)0x0) {
    if (*(code **)(piVar3 + 2) != (code *)0x0) {
      lVar2 = (**(code **)(piVar3 + 2))(param_1);
      *param_3 = lVar2;
      return 2 - (uint)(lVar2 != 0);
    }
    return 1;
  }
  return 0x58;
}



// FUNCTION 145089070 FUN_145089070 body=157 status=ok
// SIG undefined FUN_145089070(void)

undefined4 FUN_145089070(int param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int *piVar3;
  
  *param_2 = 0;
  for (piVar1 = DAT_14c79be48;
      (piVar1 != DAT_14c79be48 + (ulonglong)DAT_14c79be50 * 8 && (*piVar1 != param_1));
      piVar1 = piVar1 + 8) {
  }
  piVar3 = piVar1 + 2;
  if (piVar1 == DAT_14c79be48 + (ulonglong)DAT_14c79be50 * 8) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 != (int *)0x0) {
    plVar2 = (longlong *)(**(code **)piVar3)(&PTR_PTR_14c72f458);
    *param_2 = plVar2;
    if (plVar2 == (longlong *)0x0) {
      return 2;
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,param_3);
    return 1;
  }
  return 0x58;
}



// FUNCTION 145089110 FUN_145089110 body=88 status=ok
// SIG undefined FUN_145089110(void)

undefined8 FUN_145089110(undefined8 param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int *piVar3;
  
  for (piVar1 = DAT_14c79be58;
      (piVar1 != DAT_14c79be58 + (ulonglong)DAT_14c79be60 * 10 && (*piVar1 != param_3));
      piVar1 = piVar1 + 10) {
  }
  piVar3 = piVar1 + 2;
  if (piVar1 == DAT_14c79be58 + (ulonglong)DAT_14c79be60 * 10) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 != (int *)0x0) {
    if (param_2 != 1) {
                    /* WARNING: Could not recover jumptable at 0x000145089164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(piVar3 + 2))();
      return uVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x000145089160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)piVar3)();
    return uVar2;
  }
  return 0;
}



// FUNCTION 145089170 FUN_145089170 body=94 status=ok
// SIG undefined FUN_145089170(void)

int * FUN_145089170(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  for (piVar1 = DAT_14c79be58;
      (piVar1 != DAT_14c79be58 + (ulonglong)DAT_14c79be60 * 10 && (*piVar1 != param_1));
      piVar1 = piVar1 + 10) {
  }
  piVar2 = (int *)0x0;
  piVar3 = piVar1 + 2;
  if (piVar1 == DAT_14c79be58 + (ulonglong)DAT_14c79be60 * 10) {
    piVar3 = piVar2;
  }
  if (piVar3 != (int *)0x0) {
    if (*(code **)(piVar3 + 4) != (code *)0x0) {
      piVar2 = (int *)(**(code **)(piVar3 + 4))();
    }
    return piVar2;
  }
  return (int *)0x0;
}



// FUNCTION 1450891d0 FUN_1450891d0 body=42 status=ok
// SIG undefined FUN_1450891d0(void)

void FUN_1450891d0(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2,0);
    AK::MemoryMgr::Free(5,param_2);
  }
  return;
}



// FUNCTION 145089200 FUN_145089200 body=94 status=ok
// SIG undefined FUN_145089200(void)

int * FUN_145089200(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  for (piVar1 = DAT_14c79be58;
      (piVar1 != DAT_14c79be58 + (ulonglong)DAT_14c79be60 * 10 && (*piVar1 != param_1));
      piVar1 = piVar1 + 10) {
  }
  piVar2 = (int *)0x0;
  piVar3 = piVar1 + 2;
  if (piVar1 == DAT_14c79be58 + (ulonglong)DAT_14c79be60 * 10) {
    piVar3 = piVar2;
  }
  if (piVar3 != (int *)0x0) {
    if (*(code **)(piVar3 + 6) != (code *)0x0) {
      piVar2 = (int *)(**(code **)(piVar3 + 6))();
    }
    return piVar2;
  }
  return (int *)0x0;
}



// FUNCTION 145089260 FUN_145089260 body=39 status=ok
// SIG undefined FUN_145089260(void)

void FUN_145089260(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(5,param_1);
  }
  return;
}



// FUNCTION 145089290 FUN_145089290 body=59 status=ok
// SIG undefined FUN_145089290(void)

int * FUN_145089290(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  for (piVar2 = DAT_14c79be48;
      (piVar2 != DAT_14c79be48 + (ulonglong)DAT_14c79be50 * 8 && (*piVar2 != param_1));
      piVar2 = piVar2 + 8) {
  }
  piVar1 = piVar2 + 2;
  if (piVar2 == DAT_14c79be48 + (ulonglong)DAT_14c79be50 * 8) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}



// FUNCTION 1450892d0 FUN_1450892d0 body=454 status=ok
// SIG undefined FUN_1450892d0(void)

undefined8 FUN_1450892d0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined **local_res8;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  
  if (param_1 == (longlong *)0x0) {
    return 1;
  }
  piVar10 = (int *)0x0;
  do {
    if (*(byte *)(param_1 + 1) == 1) {
      iVar5 = FUN_145088ea0(*(undefined4 *)((longlong)param_1 + 0xc),(int)param_1[2],param_1 + 10);
LAB_145089434:
      if (iVar5 == 1) goto LAB_145089439;
    }
    else {
      uVar7 = (ulonglong)DAT_14c79be50;
      lVar1 = param_1[9];
      lVar2 = param_1[4];
      lVar3 = param_1[3];
      iVar5 = ((int)param_1[2] * 0x1000 + *(int *)((longlong)param_1 + 0xc)) * 0x10 +
              (*(byte *)(param_1 + 1) & 0xf);
      piVar8 = DAT_14c79be48 + uVar7 * 8;
      for (piVar6 = DAT_14c79be48; (piVar6 != DAT_14c79be48 + uVar7 * 8 && (*piVar6 != iVar5));
          piVar6 = piVar6 + 8) {
      }
      piVar9 = piVar6 + 2;
      if (piVar6 == piVar8) {
        piVar9 = piVar10;
      }
      piVar6 = DAT_14c79be48;
      if (piVar9 == (int *)0x0) {
        for (; (piVar6 != piVar8 && (*piVar6 != iVar5)); piVar6 = piVar6 + 8) {
        }
        piVar9 = piVar6 + 2;
        if (piVar6 == piVar8) {
          piVar9 = piVar10;
        }
        if (piVar9 == (int *)0x0) {
          if (((uVar7 < DAT_14c79be54) || (cVar4 = FUN_1450894c0(&DAT_14c79be48), cVar4 != '\0')) &&
             (piVar9 = piVar10, uVar7 < DAT_14c79be54)) {
            uVar7 = (ulonglong)DAT_14c79be50;
            DAT_14c79be50 = DAT_14c79be50 + 1;
            piVar8 = DAT_14c79be48 + uVar7 * 8;
            if (piVar8 != (int *)0x0) {
              *piVar8 = iVar5;
              piVar9 = piVar8 + 2;
              goto LAB_145089415;
            }
          }
        }
        else {
LAB_145089415:
          local_48 = (int)lVar3;
          iStack_44 = (int)((ulonglong)lVar3 >> 0x20);
          iStack_40 = (int)lVar2;
          iStack_3c = (int)((ulonglong)lVar2 >> 0x20);
          *piVar9 = local_48;
          piVar9[1] = iStack_44;
          piVar9[2] = iStack_40;
          piVar9[3] = iStack_3c;
          *(longlong *)(piVar9 + 4) = lVar1;
        }
        iVar5 = 0x34;
        if (piVar9 != (int *)0x0) {
          iVar5 = 1;
        }
        goto LAB_145089434;
      }
LAB_145089439:
      if ((code *)param_1[7] != (code *)0x0) {
        local_res8 = &PTR_FUN_1499d1008;
        (*(code *)param_1[7])(&local_res8,1,param_1[8]);
      }
    }
    param_1 = (longlong *)*param_1;
    if (param_1 == (longlong *)0x0) {
      return 1;
    }
  } while( true );
}



// FUNCTION 1450894a0 FUN_1450894a0 body=30 status=ok
// SIG undefined FUN_1450894a0(void)

undefined8 FUN_1450894a0(undefined8 param_1,char param_2,char *param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_3 + 4) == 0x7e601) {
    uVar1 = 0;
    if (*param_3 != param_2) {
      uVar1 = 10;
    }
    return uVar1;
  }
  return 0x2c;
}



// FUNCTION 1450894c0 FUN_1450894c0 body=200 status=ok
// SIG undefined FUN_1450894c0(void)

undefined8 FUN_1450894c0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  void *pvVar7;
  longlong lVar8;
  __uint64 _Var9;
  ulonglong uVar10;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  iVar5 = (uVar3 >> 1) + uVar3;
  if (uVar3 == 0) {
    iVar5 = 1;
  }
  _Var9 = (ulonglong)(iVar5 + uVar3) << 5;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar7 = AK::MemoryMgr::Malloc(0,_Var9);
    if (pvVar7 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar7)) {
        if (uVar10 != 0) {
          lVar8 = 0;
          do {
            lVar4 = *param_1;
            puVar1 = (undefined8 *)(lVar8 + lVar4);
            uVar6 = puVar1[1];
            *(undefined8 *)(lVar8 + (longlong)pvVar7) = *puVar1;
            ((undefined8 *)(lVar8 + (longlong)pvVar7))[1] = uVar6;
            puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar4);
            uVar6 = puVar1[1];
            puVar2 = (undefined8 *)(lVar8 + 0x10 + (longlong)pvVar7);
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            uVar10 = uVar10 - 1;
            lVar8 = lVar8 + 0x20;
          } while (uVar10 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_14508956b;
    }
  }
  else {
    pvVar7 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var9);
    if (pvVar7 != (void *)0x0) {
LAB_14508956b:
      *param_1 = (longlong)pvVar7;
      *(uint *)((longlong)param_1 + 0xc) = iVar5 + uVar3;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145089590 FUN_145089590 body=212 status=ok
// SIG undefined FUN_145089590(void)

undefined8 FUN_145089590(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  void *pvVar7;
  longlong lVar8;
  __uint64 _Var9;
  ulonglong uVar10;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  iVar5 = (uVar3 >> 1) + uVar3;
  if (uVar3 == 0) {
    iVar5 = 1;
  }
  _Var9 = (ulonglong)(iVar5 + uVar3) * 0x28;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar7 = AK::MemoryMgr::Malloc(0,_Var9);
    if (pvVar7 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar7)) {
        if (uVar10 != 0) {
          lVar8 = 0;
          do {
            lVar4 = *param_1;
            uVar6 = ((undefined8 *)(lVar8 + lVar4))[1];
            *(undefined8 *)(lVar8 + (longlong)pvVar7) = *(undefined8 *)(lVar8 + lVar4);
            ((undefined8 *)(lVar8 + (longlong)pvVar7))[1] = uVar6;
            puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar4);
            uVar6 = puVar1[1];
            puVar2 = (undefined8 *)(lVar8 + 0x10 + (longlong)pvVar7);
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            *(undefined8 *)(lVar8 + 0x20 + (longlong)pvVar7) = *(undefined8 *)(lVar8 + 0x20 + lVar4)
            ;
            uVar10 = uVar10 - 1;
            lVar8 = lVar8 + 0x28;
          } while (uVar10 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_145089647;
    }
  }
  else {
    pvVar7 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var9);
    if (pvVar7 != (void *)0x0) {
LAB_145089647:
      *param_1 = (longlong)pvVar7;
      *(uint *)((longlong)param_1 + 0xc) = iVar5 + uVar3;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145089670 FUN_145089670 body=39 status=ok
// SIG undefined FUN_145089670(void)

void FUN_145089670(void)

{
  void *pvVar1;
  
  pvVar1 = AK::MemoryMgr::Malloc(5,0x28);
  if (pvVar1 != (void *)0x0) {
    FUN_145372fb0(pvVar1);
    return;
  }
  return;
}



// FUNCTION 1450896a0 FUN_1450896a0 body=221 status=ok
// SIG undefined FUN_1450896a0(void)

undefined8 * FUN_1450896a0(undefined8 *param_1)

{
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0xf000000006000018;
  param_1[0x15] = param_1[0x15] | 0x3f;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(byte *)((longlong)param_1 + 0xc3) = *(byte *)((longlong)param_1 + 0xc3) & 0xf8;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xc2) = 0;
  return param_1;
}



// FUNCTION 145089780 FUN_145089780 body=593 status=ok
// SIG undefined FUN_145089780(void)

undefined8 FUN_145089780(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  void *pvVar5;
  undefined4 *puVar6;
  __uint64 _Var7;
  undefined4 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  uVar13 = *(int *)((longlong)param_1 + 0xc) + param_2;
  _Var7 = (ulonglong)uVar13 << 4;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar5 = AK::MemoryMgr::Malloc(0,_Var7);
    if (pvVar5 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar5)) {
      uVar12 = 0;
      if (3 < uVar9) {
        puVar8 = (undefined4 *)((longlong)pvVar5 + 0x18);
        lVar10 = -(longlong)pvVar5;
        lVar11 = (uVar9 - 4 >> 2) + 1;
        uVar12 = lVar11 * 4;
        do {
          puVar1 = puVar8 + -6;
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = 0;
            *(undefined8 *)(puVar8 + -5) = 0;
          }
          lVar2 = *param_1;
          puVar6 = puVar8 + -2;
          *puVar1 = *(undefined4 *)((longlong)puVar8 + lVar2 + lVar10 + -0x18);
          puVar8[-5] = *(undefined4 *)((longlong)puVar8 + lVar2 + lVar10 + -0x14);
          puVar8[-4] = *(undefined4 *)((longlong)puVar8 + lVar2 + lVar10 + -0x10);
          puVar8[-3] = *(undefined4 *)((longlong)puVar8 + lVar2 + lVar10 + -0xc);
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = 0;
            *(undefined8 *)(puVar8 + -1) = 0;
          }
          lVar3 = *param_1;
          *puVar6 = *(undefined4 *)((longlong)puVar8 + lVar3 + lVar10 + -8);
          lVar2 = (8 - (longlong)pvVar5) + (longlong)puVar8;
          puVar8[-1] = *(undefined4 *)((longlong)puVar8 + lVar3 + lVar10 + -4);
          *puVar8 = *(undefined4 *)((longlong)puVar8 + lVar3 + lVar10);
          puVar8[1] = *(undefined4 *)((longlong)puVar8 + lVar3 + lVar10 + 4);
          if (lVar2 + (longlong)pvVar5 != 0) {
            *(undefined8 *)(puVar8 + 2) = 0;
            puVar8[4] = 0;
          }
          lVar4 = *param_1;
          puVar8[2] = *(undefined4 *)(lVar2 + lVar4);
          puVar8[3] = *(undefined4 *)(lVar2 + 4 + lVar4);
          puVar8[4] = *(undefined4 *)(lVar2 + 8 + lVar4);
          lVar3 = (0x18 - (longlong)pvVar5) + (longlong)puVar8;
          puVar8[5] = *(undefined4 *)(lVar2 + 0xc + lVar4);
          if (lVar3 + (longlong)pvVar5 != 0) {
            *(undefined8 *)(puVar8 + 6) = 0;
            puVar8[8] = 0;
          }
          lVar2 = *param_1;
          puVar8[6] = *(undefined4 *)(lVar3 + lVar2);
          puVar8[7] = *(undefined4 *)(lVar3 + 4 + lVar2);
          puVar8[8] = *(undefined4 *)(lVar3 + 8 + lVar2);
          puVar8[9] = *(undefined4 *)(lVar3 + 0xc + lVar2);
          puVar8 = puVar8 + 0x10;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      if (uVar12 < uVar9) {
        puVar8 = (undefined4 *)(uVar12 * 0x10 + 8 + (longlong)pvVar5);
        lVar10 = uVar9 - uVar12;
        do {
          puVar1 = puVar8 + -2;
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = 0;
            *(undefined8 *)(puVar8 + -1) = 0;
          }
          puVar6 = (undefined4 *)((longlong)puVar8 + *param_1 + (-8 - (longlong)pvVar5));
          *puVar1 = *puVar6;
          puVar8[-1] = puVar6[1];
          *puVar8 = puVar6[2];
          puVar8[1] = puVar6[3];
          puVar8 = puVar8 + 4;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar5 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var7);
    if (pvVar5 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar5;
  *(uint *)((longlong)param_1 + 0xc) = uVar13;
  return 1;
}



// FUNCTION 1450899e0 FUN_1450899e0 body=413 status=ok
// SIG undefined FUN_1450899e0(void)

uint * FUN_1450899e0(longlong *param_1,uint *param_2,undefined1 *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  undefined8 *_Src;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  
  uVar8 = *(uint *)(param_1 + 1);
  iVar9 = 0;
  if (uVar8 != 0) {
    lVar10 = *param_1;
    iVar9 = 0;
    do {
      iVar3 = (uVar8 >> 1) + iVar9;
      lVar5 = (longlong)iVar3 * 0x10;
      uVar4 = *(uint *)(lVar5 + 4 + lVar10);
      uVar1 = *(uint *)(lVar5 + 8 + lVar10);
      bVar11 = *(uint *)(lVar5 + lVar10) < *param_2;
      if (((*(uint *)(lVar5 + lVar10) == *param_2) &&
          (bVar11 = uVar4 < param_2[1], uVar4 == param_2[1])) &&
         (bVar11 = uVar1 < param_2[2], uVar1 == param_2[2])) {
        *param_3 = 1;
        return (uint *)(*param_1 + lVar5);
      }
      uVar4 = uVar8 - 1;
      iVar3 = iVar3 + 1;
      if (!bVar11) {
        uVar4 = uVar8;
        iVar3 = iVar9;
      }
      iVar9 = iVar3;
      uVar8 = uVar4 >> 1;
    } while (uVar8 != 0);
  }
  *param_3 = 0;
  uVar8 = *(uint *)(param_1 + 1);
  uVar4 = *(uint *)((longlong)param_1 + 0xc);
  if (*param_1 + (longlong)iVar9 * 0x10 == 0) {
    if (uVar4 <= uVar8) {
      iVar9 = (uVar4 >> 1) + uVar4;
      if (uVar4 == 0) {
        iVar9 = 1;
      }
      cVar2 = FUN_145089780(param_1,iVar9);
      if (cVar2 == '\0') {
        return (uint *)0x0;
      }
    }
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar8) {
      return (uint *)0x0;
    }
    uVar8 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar8 + 1;
    puVar6 = (uint *)((ulonglong)uVar8 * 0x10 + *param_1);
    if (puVar6 != (uint *)0x0) {
      puVar6[0] = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
    }
  }
  else {
    uVar7 = (longlong)iVar9 * 0x10 >> 4;
    if (uVar4 <= uVar8) {
      iVar9 = (uVar4 >> 1) + uVar4;
      if (uVar4 == 0) {
        iVar9 = 1;
      }
      cVar2 = FUN_145089780(param_1,iVar9);
      if (cVar2 == '\0') {
        return (uint *)0x0;
      }
    }
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar8) {
      return (uint *)0x0;
    }
    uVar8 = (uint)uVar7;
    lVar10 = (uVar7 & 0xffffffff) * 0x10;
    _Src = (undefined8 *)(*param_1 + lVar10);
    if (uVar8 < *(uint *)(param_1 + 1)) {
      memmove(_Src + 2,_Src,(ulonglong)((*(uint *)(param_1 + 1) - uVar8) * 0x10));
    }
    if (_Src != (undefined8 *)0x0) {
      *_Src = 0;
      *(undefined4 *)(_Src + 1) = 0;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    puVar6 = (uint *)(*param_1 + lVar10);
  }
  if (puVar6 != (uint *)0x0) {
    *puVar6 = *param_2;
    puVar6[1] = param_2[1];
    puVar6[2] = param_2[2];
  }
  return puVar6;
}



// FUNCTION 145089b80 FUN_145089b80 body=548 status=ok
// SIG undefined FUN_145089b80(void)

void FUN_145089b80(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  undefined8 *_Src;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  ulonglong local_res18;
  
  uVar8 = *(uint *)(param_2 + 0x70);
  local_res18 = (ulonglong)uVar8;
  if (uVar8 != 0) {
    uVar8 = *(int *)(param_1 + 0x70) + uVar8;
    if (*(uint *)(param_1 + 0x74) < uVar8) {
      FUN_145089780(param_1 + 0x68,uVar8 - *(uint *)(param_1 + 0x74));
    }
    lVar13 = 0;
    do {
      plVar12 = (longlong *)(param_1 + 0x68);
      lVar4 = *(longlong *)(param_2 + 0x68);
      uVar10 = 0;
      uVar8 = *(uint *)(param_1 + 0x70);
      uVar1 = *(uint *)(lVar4 + lVar13);
      uVar2 = *(uint *)(lVar4 + 4 + lVar13);
      uVar3 = *(uint *)(lVar4 + 8 + lVar13);
      if (uVar8 != 0) {
        do {
          iVar11 = (uVar8 >> 1) + (uint)uVar10;
          puVar7 = (uint *)((longlong)iVar11 * 0x10 + *plVar12);
          bVar14 = *puVar7 < uVar1;
          if (((*puVar7 == uVar1) && (bVar14 = puVar7[1] < uVar2, puVar7[1] == uVar2)) &&
             (bVar14 = puVar7[2] < uVar3, puVar7[2] == uVar3)) {
            if (puVar7 == (uint *)0x0) goto LAB_145089d57;
            goto LAB_145089d4f;
          }
          uVar6 = iVar11 + 1;
          if (!bVar14) {
            uVar6 = (uint)uVar10;
          }
          uVar10 = (ulonglong)uVar6;
          uVar6 = uVar8 - 1;
          if (!bVar14) {
            uVar6 = uVar8;
          }
          uVar8 = uVar6 >> 1;
        } while (uVar8 != 0);
      }
      uVar8 = *(uint *)(param_1 + 0x70);
      uVar9 = (uint)uVar10;
      uVar6 = *(uint *)(param_1 + 0x74);
      if ((longlong)(int)uVar9 * 0x10 + *plVar12 == 0) {
        if (uVar6 <= uVar8) {
          iVar11 = (uVar6 >> 1) + uVar6;
          if (uVar6 == 0) {
            iVar11 = 1;
          }
          cVar5 = FUN_145089780(plVar12,iVar11);
          if (cVar5 == '\0') goto LAB_145089d57;
        }
        if (uVar8 < *(uint *)(param_1 + 0x74)) {
          uVar8 = *(uint *)(param_1 + 0x70);
          *(uint *)(param_1 + 0x70) = uVar8 + 1;
          puVar7 = (uint *)((ulonglong)uVar8 * 0x10 + *(longlong *)(param_1 + 0x68));
          if (puVar7 != (uint *)0x0) {
            puVar7[0] = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
          }
          goto LAB_145089d38;
        }
      }
      else {
        if (uVar6 <= uVar8) {
          iVar11 = (uVar6 >> 1) + uVar6;
          if (uVar6 == 0) {
            iVar11 = 1;
          }
          cVar5 = FUN_145089780(plVar12,iVar11);
          if (cVar5 == '\0') goto LAB_145089d57;
        }
        if (uVar8 < *(uint *)(param_1 + 0x74)) {
          _Src = (undefined8 *)(*(longlong *)(param_1 + 0x68) + uVar10 * 0x10);
          if (uVar9 < *(uint *)(param_1 + 0x70)) {
            memmove(_Src + 2,_Src,(ulonglong)((*(uint *)(param_1 + 0x70) - uVar9) * 0x10));
          }
          if (_Src != (undefined8 *)0x0) {
            *_Src = 0;
            *(undefined4 *)(_Src + 1) = 0;
          }
          *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
          puVar7 = (uint *)(*(longlong *)(param_1 + 0x68) + uVar10 * 0x10);
LAB_145089d38:
          if (puVar7 != (uint *)0x0) {
            *puVar7 = uVar1;
            puVar7[1] = uVar2;
            puVar7[2] = uVar3;
LAB_145089d4f:
            puVar7[3] = *(uint *)(lVar4 + 0xc + lVar13);
          }
        }
      }
LAB_145089d57:
      lVar13 = lVar13 + 0x10;
      local_res18 = local_res18 - 1;
    } while (local_res18 != 0);
    *(byte *)(param_1 + 0xc3) = *(byte *)(param_1 + 0xc3) | 4;
  }
  return;
}



// FUNCTION 145089db0 FUN_145089db0 body=188 status=ok
// SIG undefined FUN_145089db0(void)

undefined8 FUN_145089db0(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  void *pvVar4;
  longlong lVar5;
  __uint64 _Var6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = (ulonglong)*(uint *)(param_1 + 1);
  uVar7 = *(int *)((longlong)param_1 + 0xc) + param_2;
  _Var6 = (ulonglong)uVar7 * 0x18;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var6);
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
      if (uVar8 != 0) {
        lVar5 = 0;
        do {
          lVar2 = *param_1;
          puVar1 = (undefined8 *)(lVar5 + lVar2);
          uVar3 = puVar1[1];
          *(undefined8 *)(lVar5 + (longlong)pvVar4) = *puVar1;
          ((undefined8 *)(lVar5 + (longlong)pvVar4))[1] = uVar3;
          *(undefined8 *)(lVar5 + 0x10 + (longlong)pvVar4) = *(undefined8 *)(lVar5 + 0x10 + lVar2);
          uVar8 = uVar8 - 1;
          lVar5 = lVar5 + 0x18;
        } while (uVar8 != 0);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar4;
  *(uint *)((longlong)param_1 + 0xc) = uVar7;
  return 1;
}



// FUNCTION 145089e70 FUN_145089e70 body=134 status=ok
// SIG undefined FUN_145089e70(void)

undefined8 * FUN_145089e70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  if ((void *)param_1[3] != (void *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[3]);
    param_1[3] = 0;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  param_2[3] = 0;
  param_2[4] = 0;
  return param_1;
}



// FUNCTION 145089f00 FUN_145089f00 body=170 status=ok
// SIG undefined FUN_145089f00(void)

longlong FUN_145089f00(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x18);
  plVar3 = plVar4;
  if (plVar4 != plVar4 + *(uint *)(param_1 + 0x20)) {
    do {
      plVar4 = (longlong *)*plVar3;
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0x14);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 0x18))();
      }
      plVar4 = *(longlong **)(param_1 + 0x18);
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar4 + *(uint *)(param_1 + 0x20));
  }
  if (plVar4 != (longlong *)0x0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    AK::MemoryMgr::Free(0,plVar4);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 145089fb0 FUN_145089fb0 body=300 status=ok
// SIG undefined FUN_145089fb0(void)

undefined8 FUN_145089fb0(void *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *pvVar3;
  __uint64 _Var4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)*(uint *)((longlong)param_1 + 0x148);
  uVar6 = *(int *)((longlong)param_1 + 0x14c) + param_2;
  _Var4 = (ulonglong)uVar6 * 0x28;
  pvVar3 = param_1;
  if (0x140 < _Var4) {
    pvVar3 = AK::MemoryMgr::Malign(0,_Var4,1);
  }
  if (pvVar3 != (void *)0x0) {
    if ((*(void **)((longlong)param_1 + 0x140) != (void *)0x0) &&
       (*(void **)((longlong)param_1 + 0x140) != pvVar3)) {
      if (uVar7 != 0) {
        lVar5 = (longlong)pvVar3 + 0x24;
        do {
          puVar1 = (undefined8 *)(lVar5 + -0x24);
          if (puVar1 != (undefined8 *)0x0) {
            *puVar1 = 0;
            *(undefined8 *)(lVar5 + -0x1c) = 0;
            *(undefined4 *)(lVar5 + -0x14) = 0;
            *(undefined8 *)(lVar5 + -0xc) = 0;
            *(undefined8 *)(lVar5 + -4) = 0;
          }
          lVar2 = (-0x24 - (longlong)pvVar3) + lVar5;
          FUN_145089e70(puVar1,*(longlong *)((longlong)param_1 + 0x140) + lVar2);
          FUN_145089f00(*(longlong *)((longlong)param_1 + 0x140) + lVar2,0);
          lVar5 = lVar5 + 0x28;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (param_1 != *(void **)((longlong)param_1 + 0x140)) {
        AK::MemoryMgr::Free(0,*(void **)((longlong)param_1 + 0x140));
      }
    }
    *(void **)((longlong)param_1 + 0x140) = pvVar3;
    *(uint *)((longlong)param_1 + 0x14c) = uVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 14508a0e0 FUN_14508a0e0 body=7 status=ok
// SIG undefined FUN_14508a0e0(void)

void FUN_14508a0e0(undefined8 param_1)

{
  FUN_145373550(param_1,0);
  return;
}



// FUNCTION 14508a130 FUN_14508a130 body=524 status=ok
// SIG undefined FUN_14508a130(void)

undefined4 FUN_14508a130(longlong *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  piVar1 = DAT_14c791060;
  iVar5 = (int)param_2;
  if (iVar5 == 0) {
    return 0xe;
  }
  if ((char)(param_2 >> 0x20) == '\0') {
    do {
      while (iVar3 = *piVar1, iVar3 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
        if (*piVar1 < 0) goto LAB_14508a18f;
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
      }
      LOCK();
      iVar2 = *piVar1;
      if (iVar3 == iVar2) {
        *piVar1 = iVar3 + 1;
      }
      UNLOCK();
    } while (iVar3 != iVar2);
LAB_14508a18f:
    lVar8 = 0;
    lVar7 = lVar8;
    if (piVar1[0x12] != 0) {
      for (lVar6 = *(longlong *)
                    (*(longlong *)(piVar1 + 0x10) +
                    ((param_2 & 0xffffffff) % (ulonglong)(uint)piVar1[0x12]) * 8);
          (lVar7 = lVar8, lVar6 != 0 && (lVar7 = lVar6, *(int *)(lVar6 + 0x10) != iVar5));
          lVar6 = *(longlong *)(lVar6 + 8)) {
      }
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar5 = *piVar1;
    while (-1 < iVar5) {
      LOCK();
      iVar3 = *piVar1;
      if (iVar5 == iVar3) {
        *piVar1 = iVar5 + -1;
      }
      UNLOCK();
      if (iVar5 == iVar3) {
        if ((iVar5 + -1 == 0) && (0 < piVar1[0xc])) {
          SetEvent(*(HANDLE *)(piVar1 + 0xe));
        }
        goto LAB_14508a20a;
      }
      iVar5 = *piVar1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_14508a20a:
    lVar6 = lVar7 + -0x10;
    if (lVar7 == 0) {
      lVar6 = lVar8;
    }
  }
  else {
    do {
      while (iVar3 = piVar1[0x16], iVar3 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0x18));
        if (piVar1[0x16] < 0) goto LAB_14508a247;
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0x18));
      }
      LOCK();
      bVar9 = iVar3 == piVar1[0x16];
      if (bVar9) {
        piVar1[0x16] = iVar3 + 1;
      }
      UNLOCK();
    } while (!bVar9);
LAB_14508a247:
    if (piVar1[0x28] == 0) {
      lVar6 = 0;
    }
    else {
      for (lVar6 = *(longlong *)
                    (*(longlong *)(piVar1 + 0x26) +
                    ((param_2 & 0xffffffff) % (ulonglong)(uint)piVar1[0x28]) * 8); lVar6 != 0;
          lVar6 = *(longlong *)(lVar6 + 8)) {
        if (*(int *)(lVar6 + 0x10) == iVar5) goto LAB_14508a277;
      }
      lVar6 = 0;
LAB_14508a277:
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar5 = piVar1[0x16];
    while (-1 < iVar5) {
      LOCK();
      bVar9 = iVar5 == piVar1[0x16];
      if (bVar9) {
        piVar1[0x16] = iVar5 + -1;
      }
      UNLOCK();
      if (bVar9) {
        if ((iVar5 + -1 == 0) && (0 < piVar1[0x22])) {
          SetEvent(*(HANDLE *)(piVar1 + 0x24));
        }
        goto LAB_14508a2cb;
      }
      iVar5 = piVar1[0x16];
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0x18));
LAB_14508a2cb:
    if (lVar6 == 0) {
      return 0xf;
    }
    lVar6 = lVar6 + -0x10;
  }
  if (lVar6 == 0) {
    return 0xf;
  }
  uVar4 = (**(code **)(*param_1 + 0x38))(param_1,lVar6);
  LOCK();
  piVar1 = (int *)(lVar6 + 0x24);
  iVar5 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar5 == 1) {
    (**(code **)(*(longlong *)(lVar6 + 0x10) + 0x18))();
    return uVar4;
  }
  return uVar4;
}



// FUNCTION 14508a3f0 FUN_14508a3f0 body=258 status=ok
// SIG undefined FUN_14508a3f0(void)

undefined8 FUN_14508a3f0(void *param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  ulonglong uVar5;
  __uint64 _Var6;
  int iVar7;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x14);
  pvVar3 = *(void **)((longlong)param_1 + 8);
  uVar2 = *(uint *)((longlong)param_1 + 0x10);
  iVar7 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar7 = 1;
  }
  _Var6 = (ulonglong)(iVar7 + uVar1) << 3;
  pvVar4 = param_1;
  if (pvVar3 == (void *)0x0) {
    if (8 < _Var6) {
      pvVar4 = AK::MemoryMgr::Malign(0,_Var6,1);
    }
    if (pvVar4 != (void *)0x0) {
      if ((*(void **)((longlong)param_1 + 8) != (void *)0x0) &&
         (*(void **)((longlong)param_1 + 8) != pvVar4)) {
        uVar5 = 0;
        if ((ulonglong)uVar2 != 0) {
          do {
            *(undefined8 *)((longlong)pvVar4 + uVar5 * 8) =
                 *(undefined8 *)(*(longlong *)((longlong)param_1 + 8) + uVar5 * 8);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar2);
        }
        if (param_1 != *(void **)((longlong)param_1 + 8)) {
          AK::MemoryMgr::Free(0,*(void **)((longlong)param_1 + 8));
        }
      }
      goto LAB_14508a4d4;
    }
  }
  else {
    if (8 < _Var6) {
      if (param_1 == pvVar3) {
        pvVar4 = AK::MemoryMgr::Malign(0,_Var6,1);
        if (pvVar4 == (void *)0x0) {
          return 0;
        }
        memcpy(pvVar4,param_1,(ulonglong)(uVar2 * 8));
        goto LAB_14508a4d4;
      }
      pvVar4 = AK::MemoryMgr::ReallocAligned(0,pvVar3,_Var6,1);
    }
    if (pvVar4 != (void *)0x0) {
LAB_14508a4d4:
      *(void **)((longlong)param_1 + 8) = pvVar4;
      *(uint *)((longlong)param_1 + 0x14) = iVar7 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14508a500 FUN_14508a500 body=145 status=ok
// SIG undefined FUN_14508a500(void)

ulonglong FUN_14508a500(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar9 = *(uint *)(param_1 + 0x10);
  uVar6 = 0;
  if (uVar9 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    uVar8 = 0;
    do {
      iVar5 = (uVar9 >> 1) + (uint)uVar8;
      uVar7 = lVar2 + (longlong)iVar5 * 8;
      uVar1 = *(uint *)(*(longlong *)(lVar2 + (longlong)iVar5 * 8) + 0x20);
      if (uVar1 == param_2) {
        bVar4 = true;
        goto LAB_14508a574;
      }
      uVar6 = iVar5 + 1;
      if (param_2 <= uVar1) {
        uVar6 = (uint)uVar8;
      }
      uVar8 = (ulonglong)uVar6;
      uVar3 = uVar9 - 1;
      if (param_2 <= uVar1) {
        uVar3 = uVar9;
      }
      uVar9 = uVar3 >> 1;
    } while (uVar9 != 0);
  }
  bVar4 = false;
  uVar7 = *(longlong *)(param_1 + 8) + (longlong)(int)uVar6 * 8;
LAB_14508a574:
  uVar8 = 0;
  if (bVar4) {
    uVar8 = uVar7;
  }
  return uVar8;
}



// FUNCTION 14508a5a0 FUN_14508a5a0 body=306 status=ok
// SIG undefined FUN_14508a5a0(void)

longlong FUN_14508a5a0(longlong param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  void *_Src;
  longlong lVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  
  uVar9 = *(uint *)(param_1 + 0x10);
  iVar10 = 0;
  if (uVar9 != 0) {
    lVar4 = *(longlong *)(param_1 + 8);
    do {
      iVar5 = (uVar9 >> 1) + iVar10;
      lVar6 = lVar4 + (longlong)iVar5 * 8;
      uVar1 = *(uint *)(*(longlong *)(lVar4 + (longlong)iVar5 * 8) + 0x20);
      if (uVar1 == param_2) goto LAB_14508a614;
      uVar3 = uVar9 - 1;
      iVar5 = iVar5 + 1;
      if (param_2 <= uVar1) {
        uVar3 = uVar9;
        iVar5 = iVar10;
      }
      iVar10 = iVar5;
      uVar9 = uVar3 >> 1;
    } while (uVar9 != 0);
  }
  lVar4 = *(longlong *)(param_1 + 8);
  lVar6 = lVar4 + (longlong)iVar10 * 8;
LAB_14508a614:
  puVar8 = (uint *)(param_1 + 0x10);
  uVar9 = *puVar8;
  if (lVar6 == 0) {
    if (((uVar9 < *(uint *)(param_1 + 0x14)) || (cVar2 = FUN_14508a3f0(param_1), cVar2 != '\0')) &&
       (uVar9 < *(uint *)(param_1 + 0x14))) {
      uVar9 = *puVar8;
      *puVar8 = uVar9 + 1;
      lVar4 = *(longlong *)(param_1 + 8) + (ulonglong)uVar9 * 8;
    }
    else {
      lVar4 = 0;
    }
  }
  else {
    uVar7 = lVar6 - lVar4 >> 3;
    if (((uVar9 < *(uint *)(param_1 + 0x14)) || (cVar2 = FUN_14508a3f0(param_1), cVar2 != '\0')) &&
       (uVar9 < *(uint *)(param_1 + 0x14))) {
      uVar9 = (uint)uVar7;
      lVar4 = (uVar7 & 0xffffffff) * 8;
      _Src = (void *)(*(longlong *)(param_1 + 8) + lVar4);
      if (uVar9 < *puVar8) {
        memmove((void *)((longlong)_Src + 8),_Src,(ulonglong)((*puVar8 - uVar9) * 8));
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      lVar4 = *(longlong *)(param_1 + 8) + lVar4;
    }
    else {
      lVar4 = 0;
    }
  }
  return lVar4;
}



// FUNCTION 14508a6e0 FUN_14508a6e0 body=124 status=ok
// SIG undefined FUN_14508a6e0(void)

void FUN_14508a6e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149c23b28;
  param_1[1] = &PTR_FUN_149c23d88;
  param_1[2] = &PTR_LAB_149c23d90;
  param_1[5] = &PTR_LAB_149c23db8;
  puVar1 = (undefined8 *)param_1[0x1c];
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x1d) = 0;
    if (param_1 + 0x1b != puVar1) {
      AK::MemoryMgr::Free(0,puVar1);
    }
    param_1[0x1c] = 0;
    *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  }
  FUN_1450d4570(param_1);
  return;
}



// FUNCTION 14508a770 FUN_14508a770 body=113 status=ok
// SIG undefined FUN_14508a770(void)

ulonglong FUN_14508a770(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  uVar1 = (**(code **)(*param_1 + 600))();
  if ((int)uVar1 == 1) {
    puVar2 = (undefined8 *)FUN_14508a5a0(param_1 + 0x1b,(int)param_2[4]);
    if (puVar2 == (undefined8 *)0x0) {
      return 2;
    }
    *puVar2 = param_2;
    (**(code **)(*param_2 + 0x20))(param_2,param_1);
    LOCK();
    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
    UNLOCK();
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 14508a7f0 FUN_14508a7f0 body=138 status=ok
// SIG undefined FUN_14508a7f0(void)

void FUN_14508a7f0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  void *_Dst;
  
  if (param_2[0xf] == param_1) {
    (**(code **)(*param_2 + 0x20))(param_2,0);
    _Dst = (void *)FUN_14508a500(param_1 + 0xd8,(int)param_2[4]);
    if (_Dst != (void *)0x0) {
      pvVar2 = (void *)(*(longlong *)(param_1 + 0xe0) +
                       (ulonglong)(*(int *)(param_1 + 0xe8) - 1) * 8);
      if (_Dst < pvVar2) {
        memmove(_Dst,(void *)((longlong)_Dst + 8),(ulonglong)((int)pvVar2 - (int)_Dst & 0xfffffff8))
        ;
      }
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1;
    }
    LOCK();
    piVar1 = (int *)(param_1 + 0x24);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))();
    }
  }
  return;
}



// FUNCTION 14508a880 FUN_14508a880 body=50 status=ok
// SIG undefined FUN_14508a880(void)

void FUN_14508a880(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14508a500(param_1 + 0x1b);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014508a8a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x50))(param_1,*puVar1);
    return;
  }
  return;
}



// FUNCTION 14508a8c0 FUN_14508a8c0 body=209 status=ok
// SIG undefined FUN_14508a8c0(void)

void FUN_14508a8c0(longlong param_1,uint *param_2,longlong param_3,uint *param_4,int param_5)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xe0);
  if (plVar1 != plVar1 + *(uint *)(param_1 + 0xe8)) {
    do {
      if (*param_4 < *param_2) {
        *(undefined4 *)(param_3 + (ulonglong)*param_4 * 0xc) = *(undefined4 *)(*plVar1 + 0x20);
        *(undefined4 *)(param_3 + 4 + (ulonglong)*param_4 * 0xc) =
             *(undefined4 *)(*(longlong *)(*plVar1 + 0x78) + 0x20);
        *(int *)(param_3 + 8 + (ulonglong)*param_4 * 0xc) = param_5;
      }
      *param_4 = *param_4 + 1;
    } while (((*param_4 != *param_2) &&
             ((**(code **)(*(longlong *)*plVar1 + 0x60))
                        ((longlong *)*plVar1,param_2,param_3,param_4,param_5 + 1),
             *param_4 != *param_2)) &&
            (plVar1 = plVar1 + 1,
            plVar1 != (longlong *)
                      (*(longlong *)(param_1 + 0xe0) + (ulonglong)*(uint *)(param_1 + 0xe8) * 8)));
  }
  return;
}



// FUNCTION 14508a9a0 FUN_14508a9a0 body=200 status=ok
// SIG undefined FUN_14508a9a0(void)

void FUN_14508a9a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0xe0);
  if (puVar1 != puVar1 + *(uint *)(param_1 + 0xe8)) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x68))
                ((longlong *)*puVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined8 *)
                       (*(longlong *)(param_1 + 0xe0) + (ulonglong)*(uint *)(param_1 + 0xe8) * 8));
  }
  return;
}



// FUNCTION 14508aa70 FUN_14508aa70 body=52 status=ok
// SIG undefined FUN_14508aa70(void)

undefined8 FUN_14508aa70(undefined8 param_1,ulonglong param_2)

{
  FUN_14508a6e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 14508aab0 FUN_14508aab0 body=150 status=ok
// SIG undefined FUN_14508aab0(void)

void FUN_14508aab0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x70);
  if ((lVar3 != 0) &&
     (((0 < *(short *)(lVar3 + 0xd0) || (0 < *(short *)(lVar3 + 0xd4))) &&
      (uVar2 = *(uint *)(param_1 + 0xe8), uVar2 != 0)))) {
    lVar3 = (ulonglong)uVar2 << 3;
    do {
      lVar3 = lVar3 + -8;
      uVar2 = uVar2 - 1;
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0xe0));
      if ((*(char *)(param_2 + 0x1c) == '\0') || (plVar1[0x10] == 0)) {
        (**(code **)(*plVar1 + 0x80))(plVar1,param_2);
      }
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 14508ab90 FUN_14508ab90 body=197 status=ok
// SIG undefined FUN_14508ab90(void)

void FUN_14508ab90(longlong param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((*(char *)((longlong)param_2 + 0x1f) == '\0') || (*(char *)((longlong)param_2 + 0x1d) == '\0')
     ) goto LAB_14508abd0;
  iVar1 = *param_2;
  if (iVar1 == 0) {
LAB_14508abc9:
    uVar4 = 0;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) goto LAB_14508abd0;
      goto LAB_14508abc9;
    }
    uVar4 = 1;
  }
  FUN_145354bf0(param_1 + 0x28,uVar4);
LAB_14508abd0:
  uVar5 = *(uint *)(param_1 + 0xe8);
  if (uVar5 != 0) {
    lVar6 = (ulonglong)uVar5 << 3;
    do {
      lVar6 = lVar6 + -8;
      uVar5 = uVar5 - 1;
      plVar2 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0xe0));
      if ((((char)param_2[7] == '\0') || (plVar2[0x10] == 0)) &&
         (cVar3 = FUN_1450d5200(plVar2,*(undefined8 *)(param_2 + 0xc)), cVar3 == '\0')) {
        (**(code **)(*plVar2 + 0x90))(plVar2,param_2);
      }
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 14508ac60 FUN_14508ac60 body=138 status=ok
// SIG undefined FUN_14508ac60(void)

void FUN_14508ac60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0xe0);
  if (puVar1 != puVar1 + *(uint *)(param_1 + 0xe8)) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0xa0))((longlong *)*puVar1,param_2,param_3,param_4);
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined8 *)
                       (*(longlong *)(param_1 + 0xe0) + (ulonglong)*(uint *)(param_1 + 0xe8) * 8));
  }
  return;
}



// FUNCTION 14508acf0 FUN_14508acf0 body=237 status=ok
// SIG undefined FUN_14508acf0(void)

void FUN_14508acf0(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  uVar4 = 0xffffffff;
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) | 4;
    uVar4 = *(uint *)(lVar1 + 200);
    if (uVar4 != 0xffffffff) {
      do {
        uVar4 = uVar4 - 1;
        if (uVar4 == 0xffffffff) break;
      } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar4 * 0x10) == 0);
    }
  }
  while (uVar4 != 0xffffffff) {
    uVar5 = (ulonglong)uVar4;
    if (((*(char *)(param_2 + 2) == '\0') ||
        (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0xc0) + uVar5 * 0x10) + 0x80) == 0)) &&
       (plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0xc0) + uVar5 * 0x10),
       cVar3 = (**(code **)(*plVar2 + 0x1d0))(plVar2,*param_2), cVar3 == '\0')) {
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0xc0) + uVar5 * 0x10);
      (**(code **)(*plVar2 + 0xa8))(plVar2,param_2);
    }
    do {
      uVar4 = uVar4 - 1;
      if (uVar4 == 0xffffffff) goto LAB_14508adbc;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar4 * 0x10) == 0);
  }
LAB_14508adbc:
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) & 0xfb;
  }
  return;
}



// FUNCTION 14508ade0 FUN_14508ade0 body=234 status=ok
// SIG undefined FUN_14508ade0(void)

void FUN_14508ade0(longlong param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  uVar3 = 0xffffffff;
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) | 4;
    uVar3 = *(uint *)(lVar1 + 200);
    if (uVar3 == 0xffffffff) goto LAB_14508aea4;
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_14508aea4;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
  while (uVar3 != 0xffffffff) {
    if ((param_4 == '\0') ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0xc0) + (ulonglong)uVar3 * 0x10) + 0x80)
        == 0)) {
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0xc0) + (ulonglong)uVar3 * 0x10);
      (**(code **)(*plVar2 + 0xc0))(plVar2,param_2,param_3,param_4);
    }
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_14508aea4;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
LAB_14508aea4:
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) & 0xfb;
  }
  return;
}



// FUNCTION 14508aed0 FUN_14508aed0 body=219 status=ok
// SIG undefined FUN_14508aed0(void)

void FUN_14508aed0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  uVar3 = 0xffffffff;
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) | 4;
    uVar3 = *(uint *)(lVar1 + 200);
    if (uVar3 != 0xffffffff) {
      do {
        uVar3 = uVar3 - 1;
        if (uVar3 == 0xffffffff) break;
      } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
    }
  }
  while (uVar3 != 0xffffffff) {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0xc0) + (ulonglong)uVar3 * 0x10);
    (**(code **)(*plVar2 + 0xb8))(plVar2,param_2,param_3,param_4,param_5);
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_14508af7f;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
LAB_14508af7f:
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) & 0xfb;
  }
  return;
}



// FUNCTION 14508afb0 FUN_14508afb0 body=202 status=ok
// SIG undefined FUN_14508afb0(void)

void FUN_14508afb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  uVar3 = 0xffffffff;
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) | 4;
    uVar3 = *(uint *)(lVar1 + 200);
    if (uVar3 == 0xffffffff) goto LAB_14508b053;
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_14508b053;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
  while (uVar3 != 0xffffffff) {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0xc0) + (ulonglong)uVar3 * 0x10);
    (**(code **)(*plVar2 + 0xe0))(plVar2,param_2,param_3,param_4);
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_14508b053;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
LAB_14508b053:
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) & 0xfb;
  }
  return;
}



// FUNCTION 14508b080 FUN_14508b080 body=232 status=ok
// SIG undefined FUN_14508b080(void)

void FUN_14508b080(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  uVar3 = 0xffffffff;
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) | 4;
    uVar3 = *(uint *)(lVar1 + 200);
    if (uVar3 != 0xffffffff) {
      do {
        uVar3 = uVar3 - 1;
        if (uVar3 == 0xffffffff) break;
      } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
    }
  }
  while (uVar3 != 0xffffffff) {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0xc0) + (ulonglong)uVar3 * 0x10);
    if ((plVar2[0x13] & 0x20020000ffeU) == 0) {
      (**(code **)(*plVar2 + 200))(plVar2,param_2,param_3,param_4);
    }
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_14508b13c;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
LAB_14508b13c:
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) & 0xfb;
  }
  return;
}



// FUNCTION 14508b170 FUN_14508b170 body=163 status=ok
// SIG undefined FUN_14508b170(void)

void FUN_14508b170(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  uVar2 = 0xffffffff;
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) | 4;
    uVar2 = *(uint *)(lVar1 + 200);
    if (uVar2 == 0xffffffff) goto LAB_14508b1fc;
    do {
      uVar2 = uVar2 - 1;
      if (uVar2 == 0xffffffff) goto LAB_14508b1fc;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar2 * 0x10) == 0);
  }
  while (uVar2 != 0xffffffff) {
    (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0xc0) + (ulonglong)uVar2 * 0x10) + 0xd8))();
    do {
      uVar2 = uVar2 - 1;
      if (uVar2 == 0xffffffff) goto LAB_14508b1fc;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar2 * 0x10) == 0);
  }
LAB_14508b1fc:
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) & 0xfb;
  }
  return;
}



// FUNCTION 14508b220 FUN_14508b220 body=195 status=ok
// SIG undefined FUN_14508b220(void)

void FUN_14508b220(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  uVar3 = 0xffffffff;
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) | 4;
    uVar3 = *(uint *)(lVar1 + 200);
    if (uVar3 == 0xffffffff) goto LAB_14508b2c2;
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_14508b2c2;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
  while (uVar3 != 0xffffffff) {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0xc0) + (ulonglong)uVar3 * 0x10);
    (**(code **)(*plVar2 + 0x180))(plVar2,param_2,param_3);
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_14508b2c2;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
LAB_14508b2c2:
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) & 0xfb;
  }
  return;
}



// FUNCTION 14508b2f0 FUN_14508b2f0 body=206 status=ok
// SIG undefined FUN_14508b2f0(void)

void FUN_14508b2f0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  uVar3 = 0xffffffff;
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) | 4;
    uVar3 = *(uint *)(lVar1 + 200);
    if (uVar3 == 0xffffffff) goto LAB_14508b39d;
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_14508b39d;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
  while (uVar3 != 0xffffffff) {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0xc0) + (ulonglong)uVar3 * 0x10);
    if ((*(uint *)(plVar2 + 0x13) & 0x1f000) == 0) {
      (**(code **)(*plVar2 + 0xe8))(plVar2,param_2,param_3);
    }
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_14508b39d;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
LAB_14508b39d:
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) & 0xfb;
  }
  return;
}



// FUNCTION 14508b3c0 FUN_14508b3c0 body=216 status=ok
// SIG undefined FUN_14508b3c0(void)

void FUN_14508b3c0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  uVar3 = 0xffffffff;
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) | 4;
    uVar3 = *(uint *)(lVar1 + 200);
    if (uVar3 == 0xffffffff) goto LAB_14508b471;
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_14508b471;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
  while (uVar3 != 0xffffffff) {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0xc0) + (ulonglong)uVar3 * 0x10);
    if ((*(uint *)(plVar2 + 0x13) & 0x1f000) == 0) {
      (**(code **)(*plVar2 + 0xf0))(plVar2,param_2,param_3,param_4);
    }
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_14508b471;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
LAB_14508b471:
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) & 0xfb;
  }
  return;
}



// FUNCTION 14508b4a0 FUN_14508b4a0 body=183 status=ok
// SIG undefined FUN_14508b4a0(void)

ulonglong FUN_14508b4a0(longlong param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0xe0);
  if (puVar2 == puVar2 + *(uint *)(param_1 + 0xe8)) {
    return 1;
  }
  do {
    uVar1 = (**(code **)(*(longlong *)*puVar2 + 0x128))();
    if ((int)uVar1 != 1) {
      puVar3 = *(undefined8 **)(param_1 + 0xe0);
      if (puVar3 == puVar2) {
        return uVar1;
      }
      do {
        (**(code **)(*(longlong *)*puVar3 + 0x130))();
        puVar3 = puVar3 + 1;
      } while (puVar3 != puVar2);
      return uVar1 & 0xffffffff;
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 != (undefined8 *)
                     (*(longlong *)(param_1 + 0xe0) + (ulonglong)*(uint *)(param_1 + 0xe8) * 8));
  return uVar1 & 0xffffffff;
}



// FUNCTION 14508b560 FUN_14508b560 body=84 status=ok
// SIG undefined FUN_14508b560(void)

void FUN_14508b560(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0xe0);
  if (puVar1 != puVar1 + *(uint *)(param_1 + 0xe8)) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x130))();
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined8 *)
                       (*(longlong *)(param_1 + 0xe0) + (ulonglong)*(uint *)(param_1 + 0xe8) * 8));
  }
  return;
}



// FUNCTION 14508b5c0 FUN_14508b5c0 body=168 status=ok
// SIG undefined FUN_14508b5c0(void)

void FUN_14508b5c0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  uVar3 = 0xffffffff;
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) | 4;
    uVar3 = *(uint *)(lVar1 + 200);
    if (uVar3 == 0xffffffff) goto LAB_14508b64c;
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_14508b64c;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
  while (uVar3 != 0xffffffff) {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0xc0) + (ulonglong)uVar3 * 0x10);
    (**(code **)(*plVar2 + 8))(plVar2,param_2);
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_14508b64c;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
LAB_14508b64c:
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) & 0xfb;
  }
  return;
}



// FUNCTION 14508b670 FUN_14508b670 body=95 status=ok
// SIG undefined FUN_14508b670(void)

undefined8 * FUN_14508b670(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c23e38;
  param_1[1] = &PTR_FUN_149c24098;
  param_1[2] = &PTR_LAB_149c240a0;
  param_1[5] = &PTR_LAB_149c240c8;
  FUN_14508a6e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 14508b6d0 FUN_14508b6d0 body=374 status=ok
// SIG undefined FUN_14508b6d0(void)

/* WARNING: Removing unreachable block (ram,0x00014508b811) */
/* WARNING: Removing unreachable block (ram,0x00014508b81a) */
/* WARNING: Removing unreachable block (ram,0x00014508b81f) */

undefined8 * FUN_14508b6d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(2,0x1a0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1450d4420(puVar1);
    *(undefined4 *)(puVar1 + 0x23) = 0xc2c0999a;
    *(undefined1 *)((longlong)puVar1 + 0x114) = 0;
    *(uint *)((longlong)puVar1 + 0x114) = *(uint *)((longlong)puVar1 + 0x114) & 0xff;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    *puVar1 = &PTR_FUN_149c24148;
    puVar1[0x1e] = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0;
    *(undefined4 *)(puVar1 + 0x22) = 0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
    puVar1[0x27] = 0;
    puVar1[0x28] = 0;
    puVar1[0x29] = 0;
    puVar1[0x2a] = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    puVar1[0x32] = 0;
    puVar1[1] = &PTR_FUN_149c243b0;
    *(undefined4 *)(puVar1 + 0x33) = 0xffffffff;
    *(byte *)((longlong)puVar1 + 0x19c) = *(byte *)((longlong)puVar1 + 0x19c) & 0xb0 | 0x30;
    puVar1[2] = &PTR_LAB_149c243b8;
    puVar1[5] = &PTR_LAB_149c243e0;
    puVar1[0x13] = puVar1[0x13] | 0x3ffe3e1fffe;
    *(byte *)((longlong)puVar1 + 0xd4) = *(byte *)((longlong)puVar1 + 0xd4) & 0x7f | 0x80;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14508b850 FUN_14508b850 body=145 status=ok
// SIG undefined FUN_14508b850(void)

undefined4 FUN_14508b850(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_2 + 0x80) != 0) {
    return 0x15;
  }
  iVar1 = *(int *)(param_2 + 0x20);
  if (*(char *)(param_2 + 0xd4) < '\0') {
    lVar2 = FUN_14508a500(param_1 + 0xf8,iVar1);
    if (lVar2 == 0) {
      if (*(int *)(param_1 + 0x20) != iVar1) {
        return 1;
      }
      return 0x17;
    }
  }
  else {
    lVar2 = FUN_14508a500(param_1 + 0xd8,iVar1);
    if (lVar2 == 0) {
      return 1;
    }
  }
  return 5;
}



// FUNCTION 14508b900 FUN_14508b900 body=180 status=ok
// SIG undefined FUN_14508b900(void)

int FUN_14508b900(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  
  plVar1 = (longlong *)param_2[0x10];
  if (plVar1 != (longlong *)0x0) {
    if (plVar1 == param_1) {
      return 1;
    }
    (**(code **)(*plVar1 + 0x50))();
  }
  iVar2 = (**(code **)(*param_1 + 600))(param_1,param_2);
  if (iVar2 == 1) {
    puVar3 = (undefined8 *)FUN_14508a5a0(param_1 + 0x1b,(int)param_2[4]);
    if (puVar3 == (undefined8 *)0x0) {
      return 0x34;
    }
    *puVar3 = param_2;
    (**(code **)(*param_2 + 0x28))(param_2,param_1);
    LOCK();
    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
    UNLOCK();
  }
  return iVar2;
}



// FUNCTION 14508b9c0 FUN_14508b9c0 body=222 status=ok
// SIG undefined FUN_14508b9c0(void)

void FUN_14508b9c0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  
  if (param_2[0x10] == param_1) {
    (**(code **)(*param_2 + 0x28))(param_2,0);
    if (*(char *)((longlong)param_2 + 0xd4) < '\0') {
      pvVar4 = (void *)FUN_14508a500(param_1 + 0xf8,(int)param_2[4]);
      if (pvVar4 != (void *)0x0) {
        pvVar2 = (void *)(*(longlong *)(param_1 + 0x100) +
                         (ulonglong)(*(int *)(param_1 + 0x108) - 1) * 8);
        if (pvVar4 < pvVar2) {
          memmove(pvVar4,(void *)((longlong)pvVar4 + 8),
                  (ulonglong)((int)pvVar2 - (int)pvVar4 & 0xfffffff8));
        }
        *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + -1;
      }
    }
    else {
      pvVar4 = (void *)FUN_14508a500(param_1 + 0xd8,(int)param_2[4]);
      if (pvVar4 != (void *)0x0) {
        pvVar2 = (void *)(*(longlong *)(param_1 + 0xe0) +
                         (ulonglong)(*(int *)(param_1 + 0xe8) - 1) * 8);
        if (pvVar4 < pvVar2) {
          memmove(pvVar4,(void *)((longlong)pvVar4 + 8),
                  (ulonglong)((int)pvVar2 - (int)pvVar4 & 0xfffffff8));
        }
        *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1;
      }
    }
    LOCK();
    piVar1 = (int *)(param_1 + 0x24);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))();
    }
  }
  return;
}



// FUNCTION 14508baa0 FUN_14508baa0 body=73 status=ok
// SIG undefined FUN_14508baa0(void)

void FUN_14508baa0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if ((char)((ulonglong)param_2 >> 0x20) == '\0') {
    plVar2 = param_1 + 0x1b;
  }
  else {
    plVar2 = param_1 + 0x1f;
  }
  puVar1 = (undefined8 *)FUN_14508a500(plVar2);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014508badf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x50))(param_1,*puVar1);
    return;
  }
  return;
}



// FUNCTION 14508bb00 FUN_14508bb00 body=3 status=ok
// SIG undefined FUN_14508bb00(void)

undefined8 FUN_14508bb00(void)

{
  return 0;
}



// FUNCTION 14508bb10 FUN_14508bb10 body=202 status=ok
// SIG undefined FUN_14508bb10(void)

void FUN_14508bb10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  if ((lVar1 != 0) && ((0 < *(short *)(lVar1 + 0xd0) || (0 < *(short *)(lVar1 + 0xd4))))) {
    *(undefined1 *)(param_2 + 0x1c) = 1;
    uVar3 = *(uint *)(param_1 + 0xe8);
    while (uVar3 != 0) {
      uVar4 = uVar3 - 1;
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xe0) + (ulonglong)uVar4 * 8);
      (**(code **)(*plVar2 + 0x80))(plVar2,param_2);
      uVar3 = *(uint *)(param_1 + 0xe8);
      if (uVar4 <= *(uint *)(param_1 + 0xe8)) {
        uVar3 = uVar4;
      }
    }
    uVar3 = *(uint *)(param_1 + 0x108);
    while (uVar3 != 0) {
      uVar4 = uVar3 - 1;
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x100) + (ulonglong)uVar4 * 8);
      (**(code **)(*plVar2 + 0x80))(plVar2,param_2);
      uVar3 = *(uint *)(param_1 + 0x108);
      if (uVar4 <= *(uint *)(param_1 + 0x108)) {
        uVar3 = uVar4;
      }
    }
  }
  return;
}



// FUNCTION 14508bbe0 FUN_14508bbe0 body=264 status=ok
// SIG undefined FUN_14508bbe0(void)

void FUN_14508bbe0(longlong param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  char cVar5;
  undefined8 uVar6;
  
  if ((*(char *)((longlong)param_2 + 0x1f) == '\0') || (*(char *)((longlong)param_2 + 0x1d) == '\0')
     ) goto LAB_14508bc1b;
  iVar2 = *param_2;
  if (iVar2 == 0) {
LAB_14508bc10:
    uVar6 = 0;
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 2) goto LAB_14508bc1b;
      goto LAB_14508bc10;
    }
    uVar6 = 1;
  }
  FUN_145354bf0(param_1 + 0x28,uVar6);
LAB_14508bc1b:
  *(undefined1 *)(param_2 + 7) = 1;
  uVar4 = *(uint *)(param_1 + 0xe8);
  while (uVar4 != 0) {
    uVar1 = uVar4 - 1;
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xe0) + (ulonglong)uVar1 * 8);
    cVar5 = FUN_1450d5200(plVar3,*(undefined8 *)(param_2 + 0xc));
    if (cVar5 == '\0') {
      (**(code **)(*plVar3 + 0x98))(plVar3,param_2);
    }
    uVar4 = *(uint *)(param_1 + 0xe8);
    if (uVar1 <= *(uint *)(param_1 + 0xe8)) {
      uVar4 = uVar1;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x108);
  while (uVar4 != 0) {
    uVar1 = uVar4 - 1;
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x100) + (ulonglong)uVar1 * 8);
    cVar5 = FUN_1450d5200(plVar3,*(undefined8 *)(param_2 + 0xc));
    if (cVar5 == '\0') {
      (**(code **)(*plVar3 + 0x98))(plVar3,param_2);
    }
    uVar4 = *(uint *)(param_1 + 0x108);
    if (uVar1 <= *(uint *)(param_1 + 0x108)) {
      uVar4 = uVar1;
    }
  }
  return;
}



// FUNCTION 14508bd00 FUN_14508bd00 body=190 status=ok
// SIG undefined FUN_14508bd00(void)

void FUN_14508bd00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = param_1 + 0xf8;
  puVar2 = *(undefined8 **)(param_1 + 0x100);
  lVar1 = param_1 + 0xd8;
  if ((puVar2 == puVar2 + *(uint *)(param_1 + 0x108)) && (lVar3 != lVar1)) {
    puVar2 = *(undefined8 **)(param_1 + 0xe0);
    lVar3 = lVar1;
  }
  if (puVar2 != (undefined8 *)(*(longlong *)(lVar3 + 8) + (ulonglong)*(uint *)(lVar3 + 0x10) * 8)) {
    do {
      (**(code **)(*(longlong *)*puVar2 + 0xa0))((longlong *)*puVar2,param_2,param_3,param_4);
      puVar2 = puVar2 + 1;
      if ((puVar2 == (undefined8 *)
                     (*(longlong *)(lVar3 + 8) + (ulonglong)*(uint *)(lVar3 + 0x10) * 8)) &&
         (lVar3 != lVar1)) {
        puVar2 = *(undefined8 **)(param_1 + 0xe0);
        lVar3 = lVar1;
      }
    } while (puVar2 != (undefined8 *)
                       (*(longlong *)(lVar3 + 8) + (ulonglong)*(uint *)(lVar3 + 0x10) * 8));
  }
  return;
}



// FUNCTION 14508bde0 FUN_14508bde0 body=655 status=ok
// SIG undefined FUN_14508bde0(void)

undefined8
FUN_14508bde0(float param_1,float param_2,longlong *param_3,undefined8 param_4,undefined8 param_5,
             longlong param_6,undefined8 param_7,longlong *param_8)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong *plVar7;
  longlong in_RCX;
  int iVar8;
  float *in_RDX;
  longlong *plVar9;
  ulonglong uVar10;
  undefined4 local_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  
  if (((uint)in_RDX[0x24] & 1) != 0) {
    param_2 = 0.0;
    for (puVar5 = *(undefined8 **)(in_RCX + 0x148); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)*puVar5) {
      param_2 = param_2 + *(float *)(puVar5 + 5);
    }
    param_1 = *(float *)(in_RCX + 0x118);
    if (*(float *)(in_RCX + 0x118) <= param_2) {
      param_1 = param_2;
    }
    param_1 = param_1 + *in_RDX;
    *in_RDX = param_1;
  }
  FUN_1450d98b0(param_1,param_2,param_4);
  FUN_1450d8410(in_RCX,in_RDX,param_3,param_4);
  if (((param_6 != 0) && (*(longlong *)(in_RCX + 0x58) != 0)) &&
     (*(char *)(*(longlong *)(in_RCX + 0x58) + 0x20) != '\0')) {
    uVar3 = *(uint *)(param_6 + 0x148);
    uVar4 = *(uint *)(param_6 + 0x14c);
    if (uVar4 <= uVar3) {
      iVar8 = (uVar4 >> 1) + uVar4;
      if (uVar4 == 0) {
        iVar8 = 1;
      }
      cVar6 = FUN_145089fb0(param_6,iVar8);
      if (cVar6 == '\0') {
        return 0x34;
      }
    }
    if (*(uint *)(param_6 + 0x14c) <= uVar3) {
      return 0x34;
    }
    plVar1 = (longlong *)
             (*(longlong *)(param_6 + 0x140) + (ulonglong)*(uint *)(param_6 + 0x148) * 0x28);
    *(uint *)(param_6 + 0x148) = *(uint *)(param_6 + 0x148) + 1;
    if (plVar1 == (longlong *)0x0) {
      return 0x34;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(undefined4 *)(plVar1 + 2) = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar7 = (longlong *)(in_RCX + 8);
    if (in_RCX == 0) {
      plVar7 = (longlong *)0x0;
    }
    plVar1[1] = (longlong)plVar7;
    *plVar1 = in_RCX;
    FUN_14507dbc0(in_RCX + 0x48,plVar1);
  }
  if ((DAT_14c79be68 != '\0') && ((*(byte *)(in_RCX + 0x19c) & 0x40) != 0)) {
    uVar10 = (ulonglong)*(uint *)(param_3 + 1);
    plVar7 = (longlong *)*param_3;
    plVar1 = plVar7 + uVar10 * 3;
    for (; (plVar7 != plVar1 && ((*plVar7 != in_RCX || ((*(byte *)(plVar7 + 1) & 1) == 0))));
        plVar7 = plVar7 + 3) {
    }
    plVar9 = plVar7 + 2;
    if (plVar7 == plVar1) {
      plVar9 = (longlong *)0x0;
    }
    if (plVar9 == (longlong *)0x0) {
      uVar3 = *(uint *)((longlong)param_3 + 0xc);
      if (uVar3 <= uVar10) {
        iVar8 = (uVar3 >> 1) + uVar3;
        if (uVar3 == 0) {
          iVar8 = 1;
        }
        cVar6 = FUN_145089db0(param_3,iVar8);
        if (cVar6 == '\0') goto LAB_14508bff0;
      }
      if (uVar10 < *(uint *)((longlong)param_3 + 0xc)) {
        uVar3 = *(uint *)(param_3 + 1);
        *(uint *)(param_3 + 1) = uVar3 + 1;
        puVar2 = (undefined4 *)(*param_3 + (ulonglong)uVar3 * 0x18);
        if (puVar2 != (undefined4 *)0x0) {
          local_38 = (undefined4)in_RCX;
          uStack_34 = (undefined4)((ulonglong)in_RCX >> 0x20);
          puVar2[4] = 0;
          *puVar2 = local_38;
          puVar2[1] = uStack_34;
          puVar2[2] = uStack_30 & 0xffffff6d | 0x6d;
          puVar2[3] = uStack_2c;
        }
      }
    }
    else {
      *(undefined4 *)plVar9 = 0;
    }
  }
LAB_14508bff0:
  *(ulonglong *)(in_RDX + 0x24) = *(ulonglong *)(in_RDX + 0x24) & 0xffffffffffffffdf;
  plVar1 = *(longlong **)(in_RCX + 0x80);
  if ((plVar1 != (longlong *)0x0) && (param_8 != plVar1)) {
    (**(code **)(*plVar1 + 0x140))(plVar1,in_RDX,param_3,param_4,param_5,param_6,0,param_8);
  }
  return 1;
}



// FUNCTION 14508c070 FUN_14508c070 body=125 status=ok
// SIG undefined FUN_14508c070(void)

void FUN_14508c070(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  float fVar1;
  char cVar2;
  
  cVar2 = FUN_14508d190();
  if (cVar2 == '\0') {
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0x90) = 0x7000020;
    FUN_14508fab0(param_1,param_2,param_3);
    fVar1 = *(float *)(param_2 + 0x10);
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(float *)(param_2 + 0x2c) = fVar1 + *(float *)(param_2 + 0x2c);
  }
  return;
}



// FUNCTION 14508c0f0 FUN_14508c0f0 body=447 status=ok
// SIG undefined FUN_14508c0f0(void)

void FUN_14508c0f0(longlong param_1,float *param_2)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  char local_res8 [8];
  undefined8 local_48;
  undefined4 local_40;
  
  *(ulonglong *)(param_2 + 0x26) = *(ulonglong *)(param_2 + 0x26) | 0x13f;
  *(ulonglong *)(param_2 + 0x24) = *(ulonglong *)(param_2 + 0x24) | 0xf000000007f80020;
  FUN_14508fab0(param_1);
  fVar1 = param_2[4];
  if ((DAT_14c791034 == 1) && (((uint)param_2[0x28] & 1) != 0)) {
    fVar4 = 0.0;
    if (fVar1 != 0.0) {
      local_res8[0] = '\0';
      local_48 = 0;
      local_40 = 0;
      fVar3 = 0.0;
      lVar2 = FUN_1450899e0(param_2 + 0x1a,&local_48,local_res8);
      if (lVar2 != 0) {
        if (local_res8[0] == '\0') {
          *(undefined4 *)(lVar2 + 0xc) = 0;
        }
        fVar4 = *(float *)(lVar2 + 0xc);
        fVar3 = fVar4 + fVar1;
        *(float *)(lVar2 + 0xc) = fVar3;
      }
      if (((uint)param_2[0x2c] & 1) == 0) {
        fVar1 = *param_2;
        if ((fVar4 != fVar1) || (fVar1 <= fVar3)) {
          if (fVar1 < fVar3) {
            *param_2 = fVar3;
          }
        }
        else {
          *(byte *)((longlong)param_2 + 0xc3) = *(byte *)((longlong)param_2 + 0xc3) | 4;
        }
      }
      else {
        *(byte *)((longlong)param_2 + 0xc3) = *(byte *)((longlong)param_2 + 0xc3) | 4;
      }
    }
  }
  else {
    *param_2 = fVar1 + *param_2;
  }
  if (*(float **)(param_1 + 0x88) != (float *)0x0) {
    param_2[0x1f] = **(float **)(param_1 + 0x88);
    param_2[0x20] = *(float *)(*(longlong *)(param_1 + 0x88) + 4);
    param_2[0x21] = *(float *)(*(longlong *)(param_1 + 0x88) + 8);
    param_2[0x22] = *(float *)(*(longlong *)(param_1 + 0x88) + 0xc);
  }
  *(byte *)((longlong)param_2 + 0xc2) =
       (*(byte *)((longlong)param_2 + 0xc2) ^ *(byte *)(param_1 + 0xd5)) & 1 ^
       *(byte *)((longlong)param_2 + 0xc2);
  param_2[0x23] = *(float *)(param_1 + 0xa0);
  return;
}



// FUNCTION 14508c2b0 FUN_14508c2b0 body=181 status=ok
// SIG undefined FUN_14508c2b0(void)

void FUN_14508c2b0(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  bool bVar1;
  char cVar2;
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  
  if ((*(longlong *)(param_1 + 0x58) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x58) + 0x20) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    local_20 = param_1 + 8;
    local_18 = 2;
    local_28 = param_1;
    FUN_14507d830(DAT_14c791028,&local_28,param_1 + 0x48,param_2,param_3);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if ((param_4 != '\0') && (cVar2 = FUN_14508d190(), cVar2 != '\0')) {
      return;
    }
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x138))
              (*(longlong **)(param_1 + 0x80),param_2,param_3,1);
  }
  return;
}



// FUNCTION 14508c370 FUN_14508c370 body=106 status=ok
// SIG undefined FUN_14508c370(void)

void FUN_14508c370(undefined8 param_1,int param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong lVar1;
  
  if (param_2 != 5) {
    param_3 = 0;
  }
  lVar1 = FUN_1450d8400(param_1,param_3);
  if (lVar1 != 0) {
    FUN_1450d5ad0(param_1,lVar1,param_2,param_5,param_4,param_6,param_7);
  }
  return;
}



// FUNCTION 14508c3e0 FUN_14508c3e0 body=76 status=ok
// SIG undefined FUN_14508c3e0(void)

void FUN_14508c3e0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  if ((param_2 == 0) && (lVar1 = FUN_1450d8400(), lVar1 != 0)) {
    FUN_1450d5d40(param_1,lVar1,0,param_3,param_4);
  }
  return;
}



// FUNCTION 14508c460 FUN_14508c460 body=495 status=ok
// SIG undefined FUN_14508c460(void)

void FUN_14508c460(longlong *param_1,int param_2,float param_3)

{
  byte *pbVar1;
  int iVar2;
  float *pfVar3;
  char *pcVar4;
  uint uVar5;
  float *pfVar6;
  float *_Size;
  byte bVar7;
  float local_res10 [2];
  
  if ((param_2 < 0) || (5 < param_2)) {
    FUN_1450d61c0(param_1,param_2);
    return;
  }
  pbVar1 = (byte *)param_1[0x12];
  _Size = (float *)0x0;
  local_res10[0] = 0.0;
  bVar7 = (byte)param_2;
  pfVar6 = _Size;
  if (pbVar1 != (byte *)0x0) {
    pfVar3 = _Size;
    do {
      uVar5 = (int)pfVar3 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == bVar7) {
        pfVar6 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      pfVar3 = (float *)(ulonglong)uVar5;
    } while (uVar5 < *pbVar1);
  }
  pfVar3 = local_res10;
  if (pfVar6 != (float *)0x0) {
    pfVar3 = pfVar6;
  }
  local_res10[0] = *pfVar3;
  if (param_3 - local_res10[0] != 0.0) {
    (**(code **)(*param_1 + 0xb0))
              (param_1,*(undefined4 *)(&DAT_149c27da0 + (longlong)param_2 * 4),pbVar1,param_3);
    pbVar1 = (byte *)param_1[0x12];
    local_res10[0] = param_3;
    if (pbVar1 != (byte *)0x0) {
      pfVar6 = _Size;
      do {
        uVar5 = (int)pfVar6 + 1;
        if (pbVar1[uVar5] == bVar7) {
          pfVar6 = (float *)(pbVar1 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc) + (longlong)pfVar6 * 4
                            );
          if (pfVar6 != (float *)0x0) goto LAB_14508c612;
          break;
        }
        pfVar6 = (float *)(ulonglong)uVar5;
      } while (uVar5 < *pbVar1);
      if (pbVar1 != (byte *)0x0) {
        _Size = (float *)(ulonglong)*pbVar1;
      }
    }
    iVar2 = (int)_Size;
    uVar5 = iVar2 + 5;
    pcVar4 = AK::MemoryMgr::Malloc(0,(ulonglong)((uVar5 & 0xfffffffc) + 4 + iVar2 * 4));
    if (pcVar4 != (char *)0x0) {
      if (param_1[0x12] != 0) {
        memcpy(pcVar4 + 1,(void *)(param_1[0x12] + 1),(size_t)_Size);
        memcpy(pcVar4 + ((ulonglong)uVar5 & 0xfffffffc),
               (void *)(((ulonglong)(iVar2 + 4) & 0xfffffffc) + param_1[0x12]),(longlong)_Size * 4);
        AK::MemoryMgr::Free(0,(void *)param_1[0x12]);
      }
      pcVar4[iVar2 + 1] = bVar7;
      *pcVar4 = (char)_Size + '\x01';
      param_1[0x12] = (longlong)pcVar4;
      pfVar6 = (float *)(pcVar4 + (longlong)_Size * 4 + ((ulonglong)uVar5 & 0xfffffffc));
      if (pfVar6 != (float *)0x0) {
LAB_14508c612:
        *pfVar6 = local_res10[0];
      }
    }
  }
  return;
}



// FUNCTION 14508c650 FUN_14508c650 body=578 status=ok
// SIG undefined FUN_14508c650(void)

void FUN_14508c650(longlong param_1,uint *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(undefined1 *)(param_2 + 2) = 1;
  cVar4 = FUN_14508d190();
  if (cVar4 == '\0') {
    lVar7 = *(longlong *)(param_1 + 0x70);
    if ((lVar7 != 0) &&
       ((((0 < *(short *)(lVar7 + 0xd0) || (0 < *(short *)(lVar7 + 0xd4))) && (*param_2 < 0x2e)) &&
        ((0x3800000000bdU >> ((ulonglong)*param_2 & 0x3f) & 1) != 0)))) {
      lVar7 = param_1 + 0xf8;
      lVar6 = param_1 + 0xd8;
      plVar5 = *(longlong **)(param_1 + 0x100);
      if ((plVar5 == plVar5 + *(uint *)(param_1 + 0x108)) && (lVar7 != lVar6)) {
        plVar5 = *(longlong **)(param_1 + 0xe0);
        lVar7 = lVar6;
      }
      if (plVar5 != (longlong *)(*(longlong *)(lVar7 + 8) + (ulonglong)*(uint *)(lVar7 + 0x10) * 8))
      {
        do {
          plVar2 = (longlong *)*plVar5;
          lVar3 = plVar2[0xe];
          if ((lVar3 != 0) && ((0 < *(short *)(lVar3 + 0xd0) || (0 < *(short *)(lVar3 + 0xd4))))) {
            (**(code **)(*plVar2 + 0xa8))(plVar2,param_2);
          }
          plVar5 = plVar5 + 1;
          if ((plVar5 == (longlong *)
                         (*(longlong *)(lVar7 + 8) + (ulonglong)*(uint *)(lVar7 + 0x10) * 8)) &&
             (lVar7 != lVar6)) {
            plVar5 = *(longlong **)(param_1 + 0xe0);
            lVar7 = lVar6;
          }
        } while (plVar5 != (longlong *)
                           (*(longlong *)(lVar7 + 8) + (ulonglong)*(uint *)(lVar7 + 0x10) * 8));
      }
    }
  }
  else {
    uVar1 = *param_2;
    if (uVar1 == 0x23) {
      *(byte *)(param_1 + 0x19c) = *(byte *)(param_1 + 0x19c) | 0x10;
    }
    else if ((uVar1 - 0x22 & 0xfffffffd) == 0) {
      *(byte *)(param_1 + 0x19c) = *(byte *)(param_1 + 0x19c) | 0x20;
    }
    else if ((uVar1 < 8) && ((0x9dU >> (uVar1 & 0x1f) & 1) != 0)) {
      lVar7 = *(longlong *)(param_1 + 0x70);
      if ((lVar7 != 0) && ((0 < *(short *)(lVar7 + 0xd0) || (0 < *(short *)(lVar7 + 0xd4))))) {
        lVar7 = param_1 + 0xf8;
        lVar6 = param_1 + 0xd8;
        plVar5 = *(longlong **)(param_1 + 0x100);
        if ((plVar5 == plVar5 + *(uint *)(param_1 + 0x108)) && (lVar7 != lVar6)) {
          plVar5 = *(longlong **)(param_1 + 0xe0);
          lVar7 = lVar6;
        }
        if (plVar5 != (longlong *)
                      (*(longlong *)(lVar7 + 8) + (ulonglong)*(uint *)(lVar7 + 0x10) * 8)) {
          do {
            plVar2 = (longlong *)*plVar5;
            lVar3 = plVar2[0xe];
            if ((lVar3 != 0) && ((0 < *(short *)(lVar3 + 0xd0) || (0 < *(short *)(lVar3 + 0xd4)))))
            {
              (**(code **)(*plVar2 + 0xa8))(plVar2,param_2);
            }
            plVar5 = plVar5 + 1;
            if ((plVar5 == (longlong *)
                           (*(longlong *)(lVar7 + 8) + (ulonglong)*(uint *)(lVar7 + 0x10) * 8)) &&
               (lVar7 != lVar6)) {
              plVar5 = *(longlong **)(param_1 + 0xe0);
              lVar7 = lVar6;
            }
          } while (plVar5 != (longlong *)
                             (*(longlong *)(lVar7 + 8) + (ulonglong)*(uint *)(lVar7 + 0x10) * 8));
        }
      }
    }
    else {
      FUN_1450a5e30(*(undefined4 *)(param_1 + 0x20),param_2);
    }
  }
  return;
}



// FUNCTION 14508c8a0 FUN_14508c8a0 body=228 status=ok
// SIG undefined FUN_14508c8a0(void)

void FUN_14508c8a0(longlong param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  uVar3 = 0xffffffff;
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) | 4;
    uVar3 = *(uint *)(lVar1 + 200);
    if (uVar3 == 0xffffffff) goto LAB_14508c95e;
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_14508c95e;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
  while (uVar3 != 0xffffffff) {
    if (((DAT_14c79be68 != '\0') && ((*(byte *)(param_1 + 0x19c) & 0x40) != 0)) &&
       (*param_3 == param_1)) {
      param_2 = 0;
    }
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0xc0) + (ulonglong)uVar3 * 0x10);
    (**(code **)(*plVar2 + 0xc0))(plVar2,param_2,param_3,1);
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_14508c95e;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
LAB_14508c95e:
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) & 0xfb;
  }
  return;
}



// FUNCTION 14508c9b0 FUN_14508c9b0 body=536 status=ok
// SIG undefined FUN_14508c9b0(void)

int FUN_14508c9b0(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined8 *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  puVar10 = (undefined4 *)0x0;
  for (puVar5 = *(undefined8 **)(param_1 + 0x120); puVar7 = puVar10, puVar5 != (undefined8 *)0x0;
      puVar5 = (undefined8 *)*puVar5) {
    if (*(uint *)(puVar5 + 1) == param_2) {
      puVar7 = (undefined4 *)((longlong)puVar5 + 0xc);
      if (puVar7 != (undefined4 *)0x0) goto LAB_14508ca7e;
      break;
    }
  }
  puVar5 = *(undefined8 **)(param_1 + 0x130);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = AK::MemoryMgr::Malloc(0,0x20);
    if (puVar5 == (undefined8 *)0x0) goto LAB_14508ca75;
    *puVar5 = *(undefined8 *)(param_1 + 0x130);
    *(undefined8 **)(param_1 + 0x130) = puVar5;
  }
  if (*(longlong **)(param_1 + 0x128) == (longlong *)0x0) {
    *(undefined8 **)(param_1 + 0x120) = puVar5;
  }
  else {
    **(longlong **)(param_1 + 0x128) = (longlong)puVar5;
  }
  puVar5 = *(undefined8 **)(param_1 + 0x130);
  *(undefined8 **)(param_1 + 0x128) = puVar5;
  *(undefined8 *)(param_1 + 0x130) = *puVar5;
  *puVar5 = 0;
  *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + 1;
  lVar3 = *(longlong *)(param_1 + 0x128);
  puVar6 = (uint *)(lVar3 + 8);
  if (puVar6 != (uint *)0x0) {
    *puVar6 = param_2;
    puVar7 = (undefined4 *)(lVar3 + 0xc);
  }
LAB_14508ca75:
  if (puVar7 == (undefined4 *)0x0) {
    iVar9 = 2;
  }
  else {
LAB_14508ca7e:
    puVar7[1] = param_4;
    puVar7[3] = param_6;
    puVar7[2] = param_5;
    puVar7[4] = param_7;
    *puVar7 = param_3;
    lVar3 = DAT_14c791060;
    iVar9 = 1;
    do {
      while (iVar2 = *(int *)(lVar3 + 0x58), iVar2 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x60));
        if (*(int *)(lVar3 + 0x58) < 0) goto LAB_14508cac2;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x60));
      }
      LOCK();
      bVar11 = iVar2 == *(int *)(lVar3 + 0x58);
      if (bVar11) {
        *(int *)(lVar3 + 0x58) = iVar2 + 1;
      }
      UNLOCK();
    } while (!bVar11);
LAB_14508cac2:
    puVar7 = puVar10;
    if (*(uint *)(lVar3 + 0xa0) != 0) {
      for (puVar8 = *(undefined4 **)
                     (*(longlong *)(lVar3 + 0x98) +
                     ((ulonglong)param_2 % (ulonglong)*(uint *)(lVar3 + 0xa0)) * 8);
          (puVar7 = puVar10, puVar8 != (undefined4 *)0x0 && (puVar7 = puVar8, puVar8[4] != param_2))
          ; puVar8 = *(undefined4 **)(puVar8 + 2)) {
      }
      if (puVar7 != (undefined4 *)0x0) {
        LOCK();
        puVar7[5] = puVar7[5] + 1;
        UNLOCK();
      }
    }
    iVar2 = *(int *)(lVar3 + 0x58);
    while (-1 < iVar2) {
      LOCK();
      bVar11 = iVar2 == *(int *)(lVar3 + 0x58);
      if (bVar11) {
        *(int *)(lVar3 + 0x58) = iVar2 + -1;
      }
      UNLOCK();
      if (bVar11) {
        if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar3 + 0x88))) {
          SetEvent(*(HANDLE *)(lVar3 + 0x90));
        }
        goto LAB_14508cb40;
      }
      iVar2 = *(int *)(lVar3 + 0x58);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x60));
LAB_14508cb40:
    puVar8 = puVar7 + -4;
    if (puVar7 == (undefined4 *)0x0) {
      puVar8 = puVar10;
    }
    if (puVar8 != (undefined4 *)0x0) {
      bVar4 = FUN_1450d8890(puVar8,*(undefined4 *)(&DAT_149c27da0 + (longlong)param_7 * 4));
      iVar9 = (bVar4 ^ 1) + 1;
      LOCK();
      piVar1 = puVar8 + 9;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*(longlong *)(puVar8 + 4) + 0x18))();
      }
    }
  }
  return iVar9;
}



// FUNCTION 14508cbd0 FUN_14508cbd0 body=539 status=ok
// SIG undefined FUN_14508cbd0(void)

void FUN_14508cbd0(longlong param_1,int param_2,float param_3,int param_4,undefined4 param_5,
                  int param_6)

{
  char cVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *local_48;
  longlong local_40;
  float local_38;
  float local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  plVar6 = (longlong *)0x0;
  if (param_6 == 0) {
    plVar6 = (longlong *)(param_1 + 0x148);
  }
  else if (param_6 == 5) {
    plVar6 = (longlong *)(param_1 + 0x170);
  }
  plVar2 = (longlong *)*plVar6;
  plVar5 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    do {
      if ((int)plVar5[1] == param_2) {
        plVar5 = plVar5 + 2;
        if (plVar5 == (longlong *)0x0) goto joined_r0x00014508cc4f;
        goto LAB_14508ccf0;
      }
      plVar5 = (longlong *)*plVar5;
    } while (plVar5 != (longlong *)0x0);
    do {
      if ((int)plVar2[1] == param_2) {
        plVar5 = plVar2 + 2;
        if (plVar5 != (longlong *)0x0) goto LAB_14508cce5;
        goto LAB_14508cc60;
      }
      plVar2 = (longlong *)*plVar2;
joined_r0x00014508cc4f:
    } while (plVar2 != (longlong *)0x0);
  }
  plVar5 = (longlong *)0x0;
LAB_14508cc60:
  plVar2 = (longlong *)plVar6[2];
  if (plVar2 == (longlong *)0x0) {
    plVar2 = AK::MemoryMgr::Malloc(0,0x30);
    if (plVar2 == (longlong *)0x0) goto LAB_14508ccdc;
    if (plVar2 != (longlong *)&DAT_fffffffffffffff8) {
      plVar2[2] = (longlong)&PTR_FUN_149c24460;
    }
    *plVar2 = plVar6[2];
    plVar6[2] = (longlong)plVar2;
  }
  if ((undefined8 *)plVar6[1] == (undefined8 *)0x0) {
    *plVar6 = (longlong)plVar2;
  }
  else {
    *(undefined8 *)plVar6[1] = plVar2;
  }
  plVar2 = (longlong *)plVar6[2];
  plVar6[1] = (longlong)plVar2;
  plVar6[2] = *plVar2;
  *plVar2 = 0;
  *(int *)((longlong)plVar6 + 0x24) = *(int *)((longlong)plVar6 + 0x24) + 1;
  lVar7 = plVar6[1];
  piVar3 = (int *)(lVar7 + 8);
  if (piVar3 != (int *)0x0) {
    *piVar3 = param_2;
    plVar5 = (longlong *)(lVar7 + 0x10);
  }
LAB_14508ccdc:
  if (plVar5 != (longlong *)0x0) {
LAB_14508cce5:
    FUN_145375230(plVar5,param_1);
LAB_14508ccf0:
    lVar7 = (longlong)param_6;
    cVar1 = FUN_1450d8890(param_1,*(undefined4 *)(&DAT_149c27da0 + lVar7 * 4));
    if ((cVar1 != '\0') && (*(undefined1 *)((longlong)plVar5 + 0x1c) = 0, DAT_14c791068 != 0)) {
      if (plVar5[2] == 0) {
        if ((*(float *)(plVar5 + 3) != param_3) && (param_4 != 0)) {
          local_2c = param_5;
          local_28 = 0x11;
          local_24 = 0x101;
          local_22 = 0;
          local_48 = plVar5;
          local_40 = lVar7;
          local_38 = *(float *)(plVar5 + 3);
          local_34 = param_3;
          local_30 = param_4;
          lVar4 = FUN_1450b0a50(DAT_14c791068,&local_48,0);
          plVar5[2] = lVar4;
          if (lVar4 != 0) {
            return;
          }
        }
        (**(code **)*plVar5)(plVar5,lVar7,param_3,1);
      }
      else {
        FUN_1450b0c80(DAT_14c791068,plVar5[2],lVar7,param_3,param_4,param_5,2);
      }
    }
  }
  return;
}



// FUNCTION 14508ce30 FUN_14508ce30 body=237 status=ok
// SIG undefined FUN_14508ce30(void)

int FUN_14508ce30(longlong param_1,longlong param_2,char param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 1;
  if (param_3 != '\0') {
    iVar2 = FUN_1450da210(param_1,1,*(undefined8 *)(param_2 + 0x10));
  }
  if ((param_4 == '\0') && (*(char *)(param_2 + 0x28) == '\0')) {
    FUN_1450da4a0(param_1,param_2,param_3);
    *(byte *)(param_2 + 0x28) = *(byte *)(param_1 + 0xd6) >> 2 & 1;
  }
  plVar1 = *(longlong **)(param_1 + 0x80);
  iVar4 = iVar2;
  if ((((plVar1 != (longlong *)0x0) &&
       (iVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,param_2,param_3,param_4), iVar3 != 1)) &&
      (iVar4 = iVar3, iVar3 == 0x50)) && (iVar4 = iVar2, iVar2 == 1)) {
    iVar4 = 0x50;
  }
  if ((*(longlong *)(param_1 + 0x70) != 0) &&
     (*(short *)(*(longlong *)(param_1 + 0x70) + 0xd0) == 1)) {
    *(byte *)(param_1 + 0x19c) = *(byte *)(param_1 + 0x19c) & 0xf9 | 1;
    FUN_14508f440(param_1);
  }
  return iVar4;
}



// FUNCTION 14508cf20 FUN_14508cf20 body=418 status=ok
// SIG undefined FUN_14508cf20(void)

void FUN_14508cf20(longlong param_1,longlong param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uStackX_c;
  int iVar8;
  
  FUN_1450da300(param_1,1,*(undefined8 *)(param_2 + 0x10));
  FUN_1450da620(param_1);
  plVar5 = *(longlong **)(param_1 + 0x80);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x110))(plVar5,param_2);
  }
  if ((*(longlong *)(param_1 + 0x70) == 0) ||
     (*(short *)(*(longlong *)(param_1 + 0x70) + 0xd0) == 0)) {
    if ((*(int *)(param_1 + 0x110) != 0) && (*(int *)(param_1 + 0x144) != 0)) {
      iVar8 = 2;
      iVar7 = 2;
      pvVar4 = AK::MemoryMgr::Malloc(1,0x38);
      if (pvVar4 == (void *)0x0) {
        bVar2 = *(byte *)(param_1 + 0x19c);
      }
      else {
        plVar5 = (longlong *)FUN_145375140(pvVar4,0x1820);
        if (plVar5 != (longlong *)0x0) {
          iVar3 = (**(code **)(*plVar5 + 0x28))(plVar5,0xf,*(undefined4 *)(param_1 + 0x110),0,0);
          iVar7 = iVar8;
          if (iVar3 == 1) {
            uStackX_c = CONCAT31(uStackX_c._1_3_,1);
            (**(code **)(*plVar5 + 0x20))
                      (plVar5,CONCAT44(uStackX_c,*(undefined4 *)(param_1 + 0x20)));
            pvVar4 = AK::MemoryMgr::Malloc(0,0x48);
            if (pvVar4 != (void *)0x0) {
              lVar6 = FUN_1450807a0(pvVar4,0);
              if (lVar6 != 0) {
                *(longlong **)(lVar6 + 8) = plVar5;
                FUN_145083930(DAT_14c790fd8,lVar6,0,0);
                iVar7 = 1;
              }
            }
          }
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0x14);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar5 + 0x18))(plVar5);
          }
        }
        bVar2 = *(byte *)(param_1 + 0x19c);
        if (iVar7 == 1) {
          *(byte *)(param_1 + 0x19c) = bVar2 & 0xfa | 2;
          FUN_14508f440(param_1);
          return;
        }
      }
      *(byte *)(param_1 + 0x19c) = bVar2 & 0xf8;
      FUN_14508f440(param_1);
      return;
    }
    *(byte *)(param_1 + 0x19c) = *(byte *)(param_1 + 0x19c) & 0xf8;
    FUN_14508f440(param_1);
  }
  return;
}



// FUNCTION 14508d0d0 FUN_14508d0d0 body=64 status=ok
// SIG undefined FUN_14508d0d0(void)

byte FUN_14508d0d0(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = FUN_1450da400(param_1,1);
  plVar1 = *(longlong **)(param_1 + 0x80);
  if (plVar1 != (longlong *)0x0) {
    bVar3 = (**(code **)(*plVar1 + 0x118))(plVar1,1);
    bVar2 = bVar3 & bVar2;
  }
  return bVar2;
}



// FUNCTION 14508d110 FUN_14508d110 body=54 status=ok
// SIG undefined FUN_14508d110(void)

void FUN_14508d110(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1450da440(param_1,1);
  plVar1 = *(longlong **)(param_1 + 0x80);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014508d139. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x120))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 14508d150 FUN_14508d150 body=28 status=ok
// SIG undefined FUN_14508d150(void)

undefined1 FUN_14508d150(longlong param_1,longlong param_2)

{
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (param_2 == param_1) break;
    param_1 = *(longlong *)(param_1 + 0x80);
  }
  return 1;
}



// FUNCTION 14508d170 FUN_14508d170 body=31 status=ok
// SIG undefined FUN_14508d170(void)

void FUN_14508d170(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x19c) & 7) == 2) {
    *(byte *)(param_1 + 0x19c) = *(byte *)(param_1 + 0x19c) & 0xf8;
    FUN_14508f440();
    return;
  }
  return;
}



// FUNCTION 14508d190 FUN_14508d190 body=255 status=ok
// SIG undefined FUN_14508d190(void)

undefined8 FUN_14508d190(longlong *param_1)

{
  byte bVar1;
  ulonglong *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  if (param_1[0x16] != 0) {
    uVar5 = 0;
    piVar4 = (int *)(param_1[0x16] + 4);
    do {
      if (*piVar4 != 0) {
        return 1;
      }
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 2;
    } while (uVar5 < 4);
  }
  iVar3 = (**(code **)(*param_1 + 0x70))();
  if (iVar3 != 10) {
    uVar5 = *(uint *)((longlong)param_1 + 0x114) & 0xf00;
    if (uVar5 < 0x301) {
      if ((char)*(uint *)((longlong)param_1 + 0x114) != '\0') {
        return 1;
      }
      if (uVar5 == 0x300) {
        return 1;
      }
    }
    else if ((uVar5 - 0xe00 & 0xfffffeff) == 0) {
      return 1;
    }
    bVar1 = *(byte *)((longlong)param_1 + 0xd5);
    if (((((((bVar1 & 2) == 0) && ((bVar1 & 0x1c) == 0)) && (param_1[0x10] != 0)) &&
         (((*(uint *)(param_1 + 0x13) & 0xe0000) == 0 && (param_1[0x1e] == 0)))) &&
        ((param_1[0x11] == 0 && ((bVar1 & 1) == 0)))) &&
       ((puVar2 = (ulonglong *)param_1[0xb], puVar2 == (ulonglong *)0x0 ||
        ((((*puVar2 & 0x20) == 0 && ((*puVar2 & 0x80000000000) == 0)) &&
         (((*puVar2 & 0x200000000000) == 0 && ((*puVar2 & 0x100000000000) == 0)))))))) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14508d290 FUN_14508d290 body=12 status=ok
// SIG undefined FUN_14508d290(void)

bool FUN_14508d290(longlong param_1)

{
  return *(longlong *)(param_1 + 0x80) == 0;
}



// FUNCTION 14508d2a0 FUN_14508d2a0 body=282 status=ok
// SIG undefined FUN_14508d2a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14508d2a0(int *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 auStack_30 [5];
  
  if (*(char *)((longlong)param_1 + 0x1d) != '\0') {
    if (*param_1 == 1) {
      auStack_30[0] = 0x14508d2d7;
      FUN_1450b0f80(DAT_14c791068);
    }
    else if (*param_1 == 2) {
      auStack_30[0] = 0x14508d2ea;
      FUN_1450b0fe0(DAT_14c791068);
    }
  }
  if (DAT_14c79be88 != 0) {
    lVar10 = (longlong)(int)DAT_14c79be88;
    uVar8 = lVar10 * 8 + 0xf;
    if (uVar8 <= (ulonglong)(lVar10 * 8)) {
      uVar8 = 0xffffffffffffff0;
    }
    auStack_30[0] = 0x14508d322;
    lVar6 = -(uVar8 & 0xfffffffffffffff0);
    plVar2 = (longlong *)(&stack0xfffffffffffffff8 + lVar6);
    plVar7 = DAT_14c79be80;
    plVar11 = plVar2;
    if (DAT_14c79be80 != DAT_14c79be80 + DAT_14c79be88) {
      do {
        lVar9 = *plVar7;
        *plVar11 = lVar9;
        LOCK();
        piVar1 = (int *)(lVar9 + 0x24);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        plVar7 = plVar7 + 1;
        plVar11 = plVar11 + 1;
      } while (plVar7 != DAT_14c79be80 + DAT_14c79be88);
    }
    if (0 < lVar10) {
      lVar9 = 0;
      do {
        plVar7 = (longlong *)plVar2[lVar9];
        pcVar4 = *(code **)(*plVar7 + 0x80);
        *(undefined8 *)((longlong)auStack_30 + lVar6) = 0x14508d380;
        (*pcVar4)(plVar7,param_1);
        lVar5 = plVar2[lVar9];
        LOCK();
        piVar1 = (int *)(lVar5 + 0x24);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          pcVar4 = *(code **)(*(longlong *)(lVar5 + 0x10) + 0x18);
          *(undefined8 *)((longlong)auStack_30 + lVar6) = 0x14508d39d;
          (*pcVar4)();
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < lVar10);
    }
  }
  return;
}



// FUNCTION 14508d3c0 FUN_14508d3c0 body=250 status=ok
// SIG undefined FUN_14508d3c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14508d3c0(undefined8 param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 auStack_30 [5];
  
  if (DAT_14c79be88 != 0) {
    lVar10 = (longlong)(int)DAT_14c79be88;
    uVar8 = lVar10 * 8 + 0xf;
    if (uVar8 <= (ulonglong)(lVar10 * 8)) {
      uVar8 = 0xffffffffffffff0;
    }
    auStack_30[0] = 0x14508d418;
    lVar6 = -(uVar8 & 0xfffffffffffffff0);
    plVar2 = (longlong *)(&stack0xfffffffffffffff8 + lVar6);
    plVar7 = DAT_14c79be80;
    plVar11 = plVar2;
    if (DAT_14c79be80 != DAT_14c79be80 + DAT_14c79be88) {
      do {
        lVar9 = *plVar7;
        *plVar11 = lVar9;
        LOCK();
        piVar1 = (int *)(lVar9 + 0x24);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        plVar7 = plVar7 + 1;
        plVar11 = plVar11 + 1;
      } while (plVar7 != DAT_14c79be80 + DAT_14c79be88);
    }
    if (0 < lVar10) {
      lVar9 = 0;
      do {
        plVar7 = (longlong *)plVar2[lVar9];
        pcVar4 = *(code **)(*plVar7 + 0x90);
        *(undefined8 *)((longlong)auStack_30 + lVar6) = 0x14508d480;
        (*pcVar4)(plVar7,param_1);
        lVar5 = plVar2[lVar9];
        LOCK();
        piVar1 = (int *)(lVar5 + 0x24);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          pcVar4 = *(code **)(*(longlong *)(lVar5 + 0x10) + 0x18);
          *(undefined8 *)((longlong)auStack_30 + lVar6) = 0x14508d49d;
          (*pcVar4)();
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < lVar10);
    }
  }
  return;
}



// FUNCTION 14508d4c0 FUN_14508d4c0 body=3 status=ok
// SIG undefined FUN_14508d4c0(void)

void FUN_14508d4c0(void)

{
  return;
}



// FUNCTION 14508d4d0 FUN_14508d4d0 body=74 status=ok
// SIG undefined FUN_14508d4d0(void)

float FUN_14508d4d0(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  
  puVar1 = (undefined8 *)0x0;
  if (param_2 == 0) {
    puVar1 = (undefined8 *)(param_1 + 0x148);
  }
  else if (param_2 == 5) {
    puVar1 = (undefined8 *)(param_1 + 0x170);
  }
  fVar3 = 0.0;
  for (puVar1 = (undefined8 *)*puVar1; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1)
  {
    fVar3 = fVar3 + *(float *)(puVar1 + 5);
  }
  fVar2 = *(float *)(param_1 + 0x118);
  if (*(float *)(param_1 + 0x118) <= fVar3) {
    fVar2 = fVar3;
  }
  return fVar2;
}



// FUNCTION 14508d520 FUN_14508d520 body=129 status=ok
// SIG undefined FUN_14508d520(void)

void FUN_14508d520(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  uVar2 = (uint)param_2;
  uVar1 = *(uint *)(param_1 + 0x114);
  if ((uVar2 & 0xf00) == 0x100) {
    bVar3 = 0;
    uVar4 = (uint)(param_2 >> 0xc) & 0x3ff3f;
    uVar2 = uVar4;
    if ((param_2 >> 0xc & 0x3ff3f) != 0) {
      do {
        bVar3 = bVar3 + 1;
        uVar2 = uVar2 & uVar2 - 1;
      } while (uVar2 != 0);
    }
    *(byte *)(param_1 + 0x114) = bVar3;
    uVar2 = (uint)bVar3 | uVar4 << 0xc | 0x100;
  }
  *(uint *)(param_1 + 0x114) = uVar2;
  if ((((char)uVar2 == (char)uVar1) && (((uVar2 ^ uVar1) & 0xf00) == 0)) &&
     (((uVar2 ^ uVar1) & 0xfffff000) == 0)) {
    return;
  }
  FUN_1450a6380(*(undefined4 *)(param_1 + 0x20));
  return;
}



// FUNCTION 14508d5b0 FUN_14508d5b0 body=40 status=ok
// SIG undefined FUN_14508d5b0(void)

undefined8 FUN_14508d5b0(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14508d190();
  if (cVar1 != '\0') {
    return param_1;
  }
  uVar2 = FUN_1450d5250(param_1);
  return uVar2;
}



// FUNCTION 14508d5f0 FUN_14508d5f0 body=293 status=ok
// SIG undefined FUN_14508d5f0(void)

longlong FUN_14508d5f0(longlong param_1,ulonglong param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  short sVar5;
  longlong lVar6;
  undefined2 uVar7;
  longlong *local_res8;
  
  lVar6 = FUN_1453741b0(param_1 + 0xb8,param_2,param_4);
  uVar7 = 0;
  if (lVar6 == 0) {
    local_res8 = (longlong *)0x0;
  }
  else {
    FUN_145373680(lVar6,&local_res8);
    plVar4 = local_res8;
    if (local_res8 != (longlong *)0x0) {
      plVar3 = (longlong *)*param_3;
      lVar6 = local_res8[6];
      local_res8 = (longlong *)0x0;
      *param_3 = (longlong)plVar4;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0x14);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
      }
      *(longlong *)(*param_3 + 0x30) = lVar6;
      sVar5 = FUN_1450d7ab0(param_1,param_2 & 0xffffffff,param_4);
      if ((sVar5 != 0) ||
         (((lVar6 != -1 && (param_4 != 0)) && (*(longlong *)(param_4 + 0x58) != lVar6)))) {
        uVar7 = 1;
      }
      goto LAB_14508d6de;
    }
  }
  plVar4 = (longlong *)*param_3;
  *param_3 = 0;
  uVar7 = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    uVar7 = 0;
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
LAB_14508d6de:
  *(undefined2 *)(param_3 + 1) = uVar7;
  if (local_res8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_res8 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*local_res8 + 0x18))();
    }
  }
  return param_1;
}



// FUNCTION 14508d720 FUN_14508d720 body=124 status=ok
// SIG undefined FUN_14508d720(void)

void FUN_14508d720(longlong param_1,undefined8 param_2,uint param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *local_res8;
  
  *param_4 = 0xffffffff;
  lVar3 = FUN_1453741b0(param_1 + 0xb8);
  if (lVar3 != 0) {
    FUN_145373680(lVar3,&local_res8);
    if (local_res8 != (longlong *)0x0) {
      if (param_3 < *(uint *)(local_res8 + 10)) {
        uVar4 = *(undefined4 *)(local_res8[9] + (ulonglong)param_3 * 4);
      }
      else {
        uVar4 = 0;
      }
      *param_4 = uVar4;
      LOCK();
      piVar1 = (int *)((longlong)local_res8 + 0x14);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_res8 + 0x18))(local_res8);
      }
    }
  }
  return;
}



// FUNCTION 14508d7a0 FUN_14508d7a0 body=188 status=ok
// SIG undefined FUN_14508d7a0(void)

undefined4
FUN_14508d7a0(longlong param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
             undefined4 param_9)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_14508d190();
  uVar3 = FUN_1450d6f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  cVar2 = FUN_14508d190(param_1);
  if ((cVar1 != cVar2) && (*(longlong *)(param_1 + 0x70) != 0)) {
    FUN_1450a5be0(1);
  }
  return uVar3;
}



// FUNCTION 14508d860 FUN_14508d860 body=81 status=ok
// SIG undefined FUN_14508d860(void)

void FUN_14508d860(longlong param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_14508d190();
  FUN_1450d70a0(param_1,param_2);
  cVar2 = FUN_14508d190(param_1);
  if ((cVar1 != cVar2) && (*(longlong *)(param_1 + 0x70) != 0)) {
    FUN_1450a5be0(1);
  }
  return;
}



// FUNCTION 14508d8c0 FUN_14508d8c0 body=119 status=ok
// SIG undefined FUN_14508d8c0(void)

void FUN_14508d8c0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_14508d190(param_1 + -0x28);
  FUN_145374c80(param_1,param_2,param_3,param_4);
  cVar2 = FUN_14508d190(param_1 + -0x28);
  if ((cVar1 != cVar2) && (*(longlong *)(param_1 + 0x48) != 0)) {
    FUN_1450a5be0(1);
  }
  return;
}



// FUNCTION 14508d940 FUN_14508d940 body=122 status=ok
// SIG undefined FUN_14508d940(void)

undefined8 FUN_14508d940(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_14508d190(param_1 + -0x28);
  uVar3 = FUN_145354140(param_1,param_2,param_3);
  cVar2 = FUN_14508d190(param_1 + -0x28);
  if ((cVar1 != cVar2) && (*(longlong *)(param_1 + 0x48) != 0)) {
    FUN_1450a5be0(1);
  }
  return uVar3;
}



// FUNCTION 14508d9c0 FUN_14508d9c0 body=116 status=ok
// SIG undefined FUN_14508d9c0(void)

void FUN_14508d9c0(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_14508d190(param_1 + -0x28);
  FUN_145354000(param_1,param_2,param_3);
  cVar2 = FUN_14508d190(param_1 + -0x28);
  if ((cVar1 != cVar2) && (*(longlong *)(param_1 + 0x48) != 0)) {
    FUN_1450a5be0(1);
  }
  return;
}



// FUNCTION 14508da40 FUN_14508da40 body=121 status=ok
// SIG undefined FUN_14508da40(void)

undefined4 FUN_14508da40(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_14508d190(param_1 + -0x28);
  uVar3 = FUN_145354280(param_1,param_2,param_3,param_4);
  cVar2 = FUN_14508d190(param_1 + -0x28);
  if ((cVar1 != cVar2) && (*(longlong *)(param_1 + 0x48) != 0)) {
    FUN_1450a5be0(1);
  }
  return uVar3;
}



// FUNCTION 14508dac0 FUN_14508dac0 body=592 status=ok
// SIG undefined FUN_14508dac0(void)

void FUN_14508dac0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  lVar8 = 0;
  plVar4 = (longlong *)*param_2;
  *param_2 = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  *(undefined2 *)(param_2 + 1) = 0;
  lVar6 = DAT_14c791060;
  lVar5 = *(longlong *)(param_1 + 0xf0);
  if ((lVar5 != 0) && (uVar3 = *(uint *)(lVar5 + 4), uVar3 != 0)) {
    if (*(char *)(lVar5 + 9) == '\0') {
      do {
        while (iVar2 = *(int *)(lVar6 + 0x370), iVar2 < 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x378));
          if (*(int *)(lVar6 + 0x370) < 0) goto LAB_14508dc27;
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x378));
        }
        LOCK();
        bVar9 = iVar2 == *(int *)(lVar6 + 0x370);
        if (bVar9) {
          *(int *)(lVar6 + 0x370) = iVar2 + 1;
        }
        UNLOCK();
      } while (!bVar9);
LAB_14508dc27:
      if (*(uint *)(lVar6 + 0x3b8) != 0) {
        for (lVar5 = *(longlong *)
                      (*(longlong *)(lVar6 + 0x3b0) +
                      ((ulonglong)uVar3 % (ulonglong)*(uint *)(lVar6 + 0x3b8)) * 8);
            (lVar7 = lVar8, lVar5 != 0 && (lVar7 = lVar5, *(uint *)(lVar5 + 0x10) != uVar3));
            lVar5 = *(longlong *)(lVar5 + 8)) {
        }
        lVar8 = lVar7;
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
          UNLOCK();
        }
      }
      iVar2 = *(int *)(lVar6 + 0x370);
      while (-1 < iVar2) {
        LOCK();
        bVar9 = iVar2 == *(int *)(lVar6 + 0x370);
        if (bVar9) {
          *(int *)(lVar6 + 0x370) = iVar2 + -1;
        }
        UNLOCK();
        if (bVar9) {
          if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar6 + 0x3a0))) {
            SetEvent(*(HANDLE *)(lVar6 + 0x3a8));
          }
          goto LAB_14508dcc4;
        }
        iVar2 = *(int *)(lVar6 + 0x370);
      }
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar6 + 0x378);
    }
    else {
      do {
        while (iVar2 = *(int *)(lVar6 + 0x3c8), iVar2 < 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x3d0));
          if (*(int *)(lVar6 + 0x3c8) < 0) goto LAB_14508db4a;
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x3d0));
        }
        LOCK();
        bVar9 = iVar2 == *(int *)(lVar6 + 0x3c8);
        if (bVar9) {
          *(int *)(lVar6 + 0x3c8) = iVar2 + 1;
        }
        UNLOCK();
      } while (!bVar9);
LAB_14508db4a:
      if (*(uint *)(lVar6 + 0x410) != 0) {
        for (lVar5 = *(longlong *)
                      (*(longlong *)(lVar6 + 0x408) +
                      ((ulonglong)uVar3 % (ulonglong)*(uint *)(lVar6 + 0x410)) * 8);
            (lVar7 = lVar8, lVar5 != 0 && (lVar7 = lVar5, *(uint *)(lVar5 + 0x10) != uVar3));
            lVar5 = *(longlong *)(lVar5 + 8)) {
        }
        lVar8 = lVar7;
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
          UNLOCK();
        }
      }
      iVar2 = *(int *)(lVar6 + 0x3c8);
      while (-1 < iVar2) {
        LOCK();
        bVar9 = iVar2 == *(int *)(lVar6 + 0x3c8);
        if (bVar9) {
          *(int *)(lVar6 + 0x3c8) = iVar2 + -1;
        }
        UNLOCK();
        if (bVar9) {
          if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar6 + 0x3f8))) {
            SetEvent(*(HANDLE *)(lVar6 + 0x400));
          }
          goto LAB_14508dcc4;
        }
        iVar2 = *(int *)(lVar6 + 0x3c8);
      }
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar6 + 0x3d0);
    }
    LeaveCriticalSection(lpCriticalSection);
LAB_14508dcc4:
    plVar4 = (longlong *)*param_2;
    *param_2 = lVar8;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0x14);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
  }
  return;
}



// FUNCTION 14508dd20 FUN_14508dd20 body=587 status=ok
// SIG undefined FUN_14508dd20(void)

ulonglong FUN_14508dd20(longlong param_1,uint param_2,undefined4 *param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong extraout_RAX;
  ulonglong uVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 uVar11;
  bool bVar12;
  
  *param_3 = 0xffffffff;
  lVar6 = DAT_14c791060;
  lVar4 = *(longlong *)(param_1 + 0xf0);
  uVar8 = 0;
  if (lVar4 != 0) {
    uVar7 = *(uint *)(lVar4 + 4);
    if (*(char *)(lVar4 + 9) == '\0') {
      do {
        while (iVar3 = *(int *)(lVar6 + 0x370), iVar3 < 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x378));
          if (*(int *)(lVar6 + 0x370) < 0) goto LAB_14508de67;
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x378));
        }
        LOCK();
        bVar12 = iVar3 == *(int *)(lVar6 + 0x370);
        if (bVar12) {
          *(int *)(lVar6 + 0x370) = iVar3 + 1;
        }
        UNLOCK();
      } while (!bVar12);
LAB_14508de67:
      plVar10 = (longlong *)0x0;
      if (*(uint *)(lVar6 + 0x3b8) != 0) {
        for (plVar5 = *(longlong **)
                       (*(longlong *)(lVar6 + 0x3b0) +
                       ((ulonglong)uVar7 % (ulonglong)*(uint *)(lVar6 + 0x3b8)) * 8);
            (plVar9 = plVar10, plVar5 != (longlong *)0x0 &&
            (plVar9 = plVar5, *(uint *)(plVar5 + 2) != uVar7)); plVar5 = (longlong *)plVar5[1]) {
        }
        plVar10 = plVar9;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
          UNLOCK();
        }
      }
      uVar7 = *(uint *)(lVar6 + 0x370);
      while (-1 < (int)uVar7) {
        LOCK();
        uVar2 = *(uint *)(lVar6 + 0x370);
        bVar12 = uVar7 == uVar2;
        if (bVar12) {
          *(uint *)(lVar6 + 0x370) = uVar7 - 1;
          uVar2 = uVar7;
        }
        uVar8 = (ulonglong)uVar2;
        UNLOCK();
        if (bVar12) {
          if ((uVar7 - 1 == 0) &&
             (uVar8 = (ulonglong)*(uint *)(lVar6 + 0x3a0), 0 < (int)*(uint *)(lVar6 + 0x3a0))) {
            uVar7 = SetEvent(*(HANDLE *)(lVar6 + 0x3a8));
            uVar8 = (ulonglong)uVar7;
          }
          goto LAB_14508df06;
        }
        uVar7 = *(uint *)(lVar6 + 0x370);
      }
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar6 + 0x378);
    }
    else {
      do {
        while (iVar3 = *(int *)(lVar6 + 0x3c8), iVar3 < 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x3d0));
          if (*(int *)(lVar6 + 0x3c8) < 0) goto LAB_14508dd87;
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x3d0));
        }
        LOCK();
        bVar12 = iVar3 == *(int *)(lVar6 + 0x3c8);
        if (bVar12) {
          *(int *)(lVar6 + 0x3c8) = iVar3 + 1;
        }
        UNLOCK();
      } while (!bVar12);
LAB_14508dd87:
      plVar10 = (longlong *)0x0;
      if (*(uint *)(lVar6 + 0x410) != 0) {
        for (plVar5 = *(longlong **)
                       (*(longlong *)(lVar6 + 0x408) +
                       ((ulonglong)uVar7 % (ulonglong)*(uint *)(lVar6 + 0x410)) * 8);
            (plVar9 = plVar10, plVar5 != (longlong *)0x0 &&
            (plVar9 = plVar5, *(uint *)(plVar5 + 2) != uVar7)); plVar5 = (longlong *)plVar5[1]) {
        }
        plVar10 = plVar9;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
          UNLOCK();
        }
      }
      uVar7 = *(uint *)(lVar6 + 0x3c8);
      while (-1 < (int)uVar7) {
        LOCK();
        uVar2 = *(uint *)(lVar6 + 0x3c8);
        bVar12 = uVar7 == uVar2;
        if (bVar12) {
          *(uint *)(lVar6 + 0x3c8) = uVar7 - 1;
          uVar2 = uVar7;
        }
        uVar8 = (ulonglong)uVar2;
        UNLOCK();
        if (bVar12) {
          if ((uVar7 - 1 == 0) &&
             (uVar8 = (ulonglong)*(uint *)(lVar6 + 0x3f8), 0 < (int)*(uint *)(lVar6 + 0x3f8))) {
            uVar7 = SetEvent(*(HANDLE *)(lVar6 + 0x400));
            uVar8 = (ulonglong)uVar7;
          }
          goto LAB_14508df06;
        }
        uVar7 = *(uint *)(lVar6 + 0x3c8);
      }
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar6 + 0x3d0);
    }
    LeaveCriticalSection(lpCriticalSection);
    uVar8 = extraout_RAX;
LAB_14508df06:
    uVar11 = 0;
    if (plVar10 != (longlong *)0x0) {
      if (param_2 < *(uint *)(plVar10 + 10)) {
        uVar11 = *(undefined4 *)(plVar10[9] + (ulonglong)param_2 * 4);
      }
      *param_3 = uVar11;
      LOCK();
      puVar1 = (uint *)((longlong)plVar10 + 0x14);
      uVar7 = *puVar1;
      uVar8 = (ulonglong)uVar7;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (uVar7 == 1) {
        uVar8 = (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
  }
  return uVar8;
}



// FUNCTION 14508df70 FUN_14508df70 body=250 status=ok
// SIG undefined FUN_14508df70(void)

undefined8 FUN_14508df70(longlong param_1,int param_2,char param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xf0) == 0)) {
    puVar3 = AK::MemoryMgr::Malloc(2,0xc);
    if (puVar3 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0xf0) = 0;
      return 2;
    }
    *(undefined2 *)(puVar3 + 1) = 0;
    *(undefined1 *)((longlong)puVar3 + 9) = 1;
    *puVar3 = 0;
    *(undefined8 **)(param_1 + 0xf0) = puVar3;
  }
  piVar1 = *(int **)(param_1 + 0xf0);
  if (piVar1 != (int *)0x0) {
    if (param_4 < *piVar1) {
      return 1;
    }
    *piVar1 = param_4;
  }
  lVar2 = *(longlong *)(param_1 + 0xf0);
  if ((lVar2 != 0) && ((*(char *)(lVar2 + 9) != param_3 || (*(int *)(lVar2 + 4) != param_2)))) {
    *(char *)(lVar2 + 9) = param_3;
    *(int *)(*(longlong *)(param_1 + 0xf0) + 4) = param_2;
    FUN_1450d48f0(param_1,0,0,0,4);
  }
  if ((*(void **)(param_1 + 0xf0) != (void *)0x0) && (param_2 == 0)) {
    AK::MemoryMgr::Free(2,*(void **)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  return 1;
}



// FUNCTION 14508e070 FUN_14508e070 body=1067 status=ok
// SIG undefined FUN_14508e070(void)

int FUN_14508e070(longlong *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong *plVar18;
  bool bVar19;
  undefined1 local_res8 [8];
  int *local_res10;
  undefined4 local_res18 [4];
  longlong *plVar14;
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  iVar5 = (**(code **)(*param_1 + 0x70))();
  lVar3 = DAT_14c791060;
  if ((iVar5 != 0) && (iVar5 != 10)) {
    FUN_1450b8920(DAT_14c790fe0,(int)param_1[4],0,iVar5);
    return 0x5b;
  }
  bVar2 = false;
  uVar11 = local_res10[1];
  piVar6 = local_res10 + 2;
  plVar18 = (longlong *)0x0;
  if (uVar11 == 0) {
    local_res10 = local_res10 + 3;
    *(int *)(param_1 + 0x33) = *piVar6;
    bVar19 = true;
LAB_14508e20d:
    bVar2 = bVar19;
    iVar5 = (**(code **)(*param_1 + 0x1e8))(param_1,&local_res10,local_res18);
    if (iVar5 == 1) {
      uVar13 = (uint)((longlong)((longlong)*local_res10 * (ulonglong)DAT_14c72f42c) / 1000);
      uVar11 = 0;
      if (DAT_14c72f434 < uVar13) {
        uVar11 = uVar13;
      }
      *(uint *)(param_1 + 0x22) = uVar11;
      *(int *)(param_1 + 0x23) = local_res10[1];
      uVar11 = local_res10[2];
      local_res10 = local_res10 + 3;
      plVar14 = plVar18;
      if (uVar11 != 0) {
        do {
          iVar5 = *local_res10;
          piVar6 = local_res10 + 1;
          piVar7 = local_res10 + 2;
          piVar8 = local_res10 + 3;
          piVar9 = local_res10 + 4;
          pcVar10 = (char *)((longlong)local_res10 + 0x11);
          local_res10 = (int *)((longlong)local_res10 + 0x12);
          iVar5 = FUN_14508c9b0(param_1,iVar5,*piVar6,*piVar7,*piVar8,(char)*piVar9,*pcVar10);
          if (iVar5 != 1) goto LAB_14508e324;
          uVar13 = (int)plVar14 + 1;
          plVar14 = (longlong *)(ulonglong)uVar13;
        } while (uVar13 < uVar11);
      }
      iVar5 = (**(code **)(*param_1 + 0x1f0))(param_1,&local_res10,local_res18,0);
    }
  }
  else {
    do {
      while (local_res10 = piVar6, iVar5 = *(int *)(lVar3 + 0x58), iVar5 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x60));
        if (*(int *)(lVar3 + 0x58) < 0) goto LAB_14508e111;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x60));
        piVar6 = local_res10;
      }
      LOCK();
      bVar19 = iVar5 == *(int *)(lVar3 + 0x58);
      if (bVar19) {
        *(int *)(lVar3 + 0x58) = iVar5 + 1;
      }
      UNLOCK();
      piVar6 = local_res10;
    } while (!bVar19);
LAB_14508e111:
    plVar14 = plVar18;
    if (*(uint *)(lVar3 + 0xa0) != 0) {
      for (plVar17 = *(longlong **)
                      (*(longlong *)(lVar3 + 0x98) +
                      ((ulonglong)uVar11 % (ulonglong)*(uint *)(lVar3 + 0xa0)) * 8);
          (plVar14 = plVar18, plVar17 != (longlong *)0x0 &&
          (plVar14 = plVar17, *(uint *)(plVar17 + 2) != uVar11)); plVar17 = (longlong *)plVar17[1])
      {
      }
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar14 + 0x14) = *(int *)((longlong)plVar14 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar5 = *(int *)(lVar3 + 0x58);
    while (-1 < iVar5) {
      LOCK();
      bVar19 = iVar5 == *(int *)(lVar3 + 0x58);
      if (bVar19) {
        *(int *)(lVar3 + 0x58) = iVar5 + -1;
      }
      UNLOCK();
      if (bVar19) {
        if ((iVar5 + -1 == 0) && (0 < *(int *)(lVar3 + 0x88))) {
          SetEvent(*(HANDLE *)(lVar3 + 0x90));
        }
        goto LAB_14508e191;
      }
      iVar5 = *(int *)(lVar3 + 0x58);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x60));
LAB_14508e191:
    plVar17 = plVar14 + -2;
    if (plVar14 == (longlong *)0x0) {
      plVar17 = plVar18;
    }
    if (plVar17 == (longlong *)0x0) {
      iVar5 = 0x5c;
    }
    else {
      iVar5 = (**(code **)(*plVar17 + 0x38))(plVar17,param_1);
      LOCK();
      piVar6 = (int *)((longlong)plVar17 + 0x24);
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)(plVar17[2] + 0x18))();
      }
      bVar19 = false;
      if (iVar5 == 1) goto LAB_14508e20d;
    }
  }
LAB_14508e324:
  iVar1 = *local_res10;
  local_res10 = (int *)((longlong)local_res10 + 1);
  *(byte *)((longlong)param_1 + 0xd4) =
       ((char)iVar1 << 3 ^ *(byte *)((longlong)param_1 + 0xd4)) & 8 ^
       *(byte *)((longlong)param_1 + 0xd4);
  if (iVar5 != 1) {
    return iVar5;
  }
  iVar5 = (**(code **)(*param_1 + 0x1f8))(param_1,&local_res10,local_res18);
  if (iVar5 != 1) {
    return iVar5;
  }
  iVar5 = FUN_145090090(&local_res10,local_res18,param_1);
  if (iVar5 != 1) {
    return iVar5;
  }
  iVar5 = (**(code **)(param_1[5] + 0x68))(param_1 + 5,&local_res10,local_res18);
  if (iVar5 != 1) {
    return iVar5;
  }
  if (!bVar2) {
    *(undefined4 *)(param_1 + 0x33) = *(undefined4 *)(param_1[0x10] + 0x198);
    return 1;
  }
  FUN_1450719c0(local_res8);
  uVar15 = (ulonglong)DAT_14c79be88;
  for (plVar14 = DAT_14c79be80;
      (plVar14 != DAT_14c79be80 + uVar15 && ((longlong *)*plVar14 != param_1));
      plVar14 = plVar14 + 1) {
  }
  if (plVar14 != DAT_14c79be80 + uVar15) {
    plVar18 = plVar14;
  }
  iVar5 = 1;
  if (plVar18 != (longlong *)0x0) goto LAB_14508e460;
  uVar12 = (ulonglong)DAT_14c79be8c;
  uVar16 = uVar15;
  if (uVar15 < uVar12) {
LAB_14508e430:
    if (uVar15 < uVar12) {
      DAT_14c79be88 = (int)uVar16 + 1;
      if (DAT_14c79be80 + uVar16 != (longlong *)0x0) {
        DAT_14c79be80[uVar16] = (longlong)param_1;
        FUN_1450719f0(local_res8);
        return 1;
      }
    }
  }
  else {
    cVar4 = FUN_14508ffd0(&DAT_14c79be80);
    if (cVar4 != '\0') {
      uVar12 = (ulonglong)DAT_14c79be8c;
      uVar16 = (ulonglong)DAT_14c79be88;
      goto LAB_14508e430;
    }
  }
  iVar5 = 0x34;
LAB_14508e460:
  FUN_1450719f0(local_res8);
  return iVar5;
}



// FUNCTION 14508e4a0 FUN_14508e4a0 body=99 status=ok
// SIG undefined FUN_14508e4a0(void)

void FUN_14508e4a0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = FUN_1453738f0(param_1 + 0x15);
  if (iVar4 == 1) {
    puVar3 = (undefined4 *)*param_2;
    uVar2 = *puVar3;
    *param_2 = (longlong)(puVar3 + 1);
    cVar1 = *(char *)(puVar3 + 1);
    *param_2 = (longlong)puVar3 + 5;
    (**(code **)(*param_1 + 0x1a8))(param_1,uVar2,cVar1 != '\0',0);
  }
  param_1[0x13] = param_1[0x13] | 0x1f000;
  return;
}



// FUNCTION 14508e510 FUN_14508e510 body=213 status=ok
// SIG undefined FUN_14508e510(void)

int FUN_14508e510(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = 1;
  bVar1 = *(byte *)*param_2;
  *param_2 = (longlong)((byte *)*param_2 + 1);
  if (bVar1 != 0) {
    iVar6 = FUN_1450d6640(param_1,bVar1,0);
    if ((iVar6 == 1) && (uVar7 = 0, bVar1 != 0)) {
      do {
        puVar5 = (undefined1 *)*param_2;
        uVar2 = *puVar5;
        *param_2 = (longlong)(puVar5 + 1);
        iVar4 = *(int *)(puVar5 + 1);
        *param_2 = (longlong)(puVar5 + 5);
        cVar3 = puVar5[5];
        *param_2 = (longlong)(puVar5 + 6);
        if ((iVar4 != 0) && (iVar6 = FUN_1450d66e0(param_1,uVar2,iVar4,cVar3 != '\0',0), iVar6 != 1)
           ) break;
        uVar7 = uVar7 + 1;
      } while (uVar7 < bVar1);
    }
  }
  *(ulonglong *)(param_1 + 0x98) = *(ulonglong *)(param_1 + 0x98) | 0x40000000000;
  return iVar6;
}



// FUNCTION 14508e5f0 FUN_14508e5f0 body=102 status=ok
// SIG undefined FUN_14508e5f0(void)

undefined1 FUN_14508e5f0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_145354810(param_1 + 0x28);
  while( true ) {
    if (cVar1 != '\0') {
      return 1;
    }
    param_1 = *(longlong *)(param_1 + 0x80);
    if (param_1 == 0) break;
    cVar1 = FUN_145354810(param_1 + 0x28,param_2,param_3);
  }
  return 0;
}



// FUNCTION 14508e680 FUN_14508e680 body=117 status=ok
// SIG undefined FUN_14508e680(void)

void FUN_14508e680(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 0x198) != param_2) {
    uVar2 = 0;
    *(int *)(param_1 + 0x198) = param_2;
    if (*(int *)(param_1 + 0x108) != 0) {
      do {
        FUN_14508e680(*(undefined8 *)(*(longlong *)(param_1 + 0x100) + uVar2 * 8),param_2);
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0x108));
    }
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    return;
  }
  FUN_1450a5be0(1);
  return;
}



// FUNCTION 14508e700 FUN_14508e700 body=246 status=ok
// SIG undefined FUN_14508e700(void)

void FUN_14508e700(int param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  
  plVar3 = DAT_14c79be80;
  if (DAT_14c79be80 != DAT_14c79be80 + DAT_14c79be88) {
    do {
      lVar2 = *plVar3;
      piVar1 = (int *)(lVar2 + 0x198);
      if (*piVar1 == -1) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x80);
          if (lVar2 == 0) goto LAB_14508e769;
        } while (*(int *)(lVar2 + 0x198) == -1);
        *piVar1 = *(int *)(lVar2 + 0x198);
      }
LAB_14508e769:
      if (*piVar1 == param_1) {
        lVar2 = *plVar3;
        if (*(int *)(lVar2 + 0x198) != param_2) {
          uVar5 = 0;
          *(int *)(lVar2 + 0x198) = param_2;
          if (*(int *)(lVar2 + 0x108) != 0) {
            do {
              FUN_14508e680(*(undefined8 *)(*(longlong *)(lVar2 + 0x100) + uVar5 * 8),param_2);
              uVar4 = (int)uVar5 + 1;
              uVar5 = (ulonglong)uVar4;
            } while (uVar4 < *(uint *)(lVar2 + 0x108));
          }
        }
        if (*(longlong *)(lVar2 + 0x80) == 0) {
          FUN_1450a5be0(1);
        }
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != DAT_14c79be80 + DAT_14c79be88);
  }
  return;
}



// FUNCTION 14508e800 FUN_14508e800 body=98 status=ok
// SIG undefined FUN_14508e800(void)

/* WARNING: Removing unreachable block (ram,0x00014508e839) */

undefined4 FUN_14508e800(longlong param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte local_res8 [32];
  
  pbVar1 = *(byte **)(param_1 + 0x90);
  pbVar2 = (byte *)0x0;
  local_res8[0] = 0;
  local_res8[1] = 0;
  local_res8[2] = 0;
  local_res8[3] = 0;
  if (pbVar1 != (byte *)0x0) {
    while( true ) {
      uVar3 = (int)pbVar2 + 1;
      if (((byte *)(ulonglong)uVar3)[(longlong)pbVar1] == 0x1e) break;
      pbVar2 = (byte *)(ulonglong)uVar3;
      if (*pbVar1 <= uVar3) {
        return 0;
      }
    }
    pbVar2 = pbVar1 + (longlong)pbVar2 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc);
  }
  pbVar1 = local_res8;
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = pbVar2;
  }
  return *(undefined4 *)pbVar1;
}



// FUNCTION 14508e870 FUN_14508e870 body=229 status=ok
// SIG undefined FUN_14508e870(void)

void FUN_14508e870(longlong param_1,float *param_2)

{
  byte *pbVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  float *pfVar6;
  float fVar7;
  float local_res8 [2];
  
  pbVar1 = *(byte **)(param_1 + 0x90);
  pfVar6 = (float *)0x0;
  fVar5 = 0.0;
  local_res8[0] = 0.0;
  if (pbVar1 != (byte *)0x0) {
    pfVar3 = pfVar6;
    do {
      uVar4 = (int)pfVar3 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar4 + (longlong)pbVar1) == 0x1f) {
        pfVar2 = local_res8;
        if ((float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)) !=
            (float *)0x0) {
          pfVar2 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
        }
        local_res8[0] = 200.0;
        fVar7 = *pfVar2;
        goto LAB_14508e8c1;
      }
      pfVar3 = (float *)(ulonglong)uVar4;
    } while (uVar4 < *pbVar1);
  }
  local_res8[0] = 200.0;
  fVar7 = 0.0;
  if (pbVar1 != (byte *)0x0) {
LAB_14508e8c1:
    fVar5 = fVar7;
    pfVar3 = pfVar6;
    do {
      uVar4 = (int)pfVar3 + 1;
      if (*(byte *)((longlong)(ulonglong)uVar4 + (longlong)pbVar1) == 0x20) {
        pfVar6 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      pfVar3 = (float *)(ulonglong)uVar4;
    } while (uVar4 < *pbVar1);
  }
  fVar7 = *param_2;
  pfVar3 = local_res8;
  if (pfVar6 != (float *)0x0) {
    pfVar3 = pfVar6;
  }
  if (fVar5 <= fVar7) {
    if (*pfVar3 <= fVar7) {
      fVar7 = *pfVar3;
    }
    *param_2 = fVar7;
    return;
  }
  *param_2 = fVar5;
  return;
}



// FUNCTION 14508ea00 FUN_14508ea00 body=205 status=ok
// SIG undefined FUN_14508ea00(void)

void FUN_14508ea00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar1 = param_1 + 0xd8;
    lVar4 = param_1 + 0xf8;
    plVar3 = *(longlong **)(param_1 + 0x100);
    if ((plVar3 == plVar3 + *(uint *)(param_1 + 0x108)) && (lVar4 != lVar1)) {
      plVar3 = *(longlong **)(param_1 + 0xe0);
      lVar4 = lVar1;
    }
    if (plVar3 != (longlong *)(*(longlong *)(lVar4 + 8) + (ulonglong)*(uint *)(lVar4 + 0x10) * 8)) {
      do {
        lVar2 = ((longlong *)*plVar3)[0xe];
        if ((lVar2 != 0) && ((0 < *(short *)(lVar2 + 0xd0) || (0 < *(short *)(lVar2 + 0xd4))))) {
          (**(code **)(*(longlong *)*plVar3 + 0xd8))();
        }
        plVar3 = plVar3 + 1;
        if ((plVar3 == (longlong *)
                       (*(longlong *)(lVar4 + 8) + (ulonglong)*(uint *)(lVar4 + 0x10) * 8)) &&
           (lVar4 != lVar1)) {
          plVar3 = *(longlong **)(param_1 + 0xe0);
          lVar4 = lVar1;
        }
      } while (plVar3 != (longlong *)
                         (*(longlong *)(lVar4 + 8) + (ulonglong)*(uint *)(lVar4 + 0x10) * 8));
    }
  }
  return;
}



// FUNCTION 14508eae0 FUN_14508eae0 body=254 status=ok
// SIG undefined FUN_14508eae0(void)

void FUN_14508eae0(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  cVar3 = FUN_14508d190();
  if (cVar3 != '\0') {
    *(byte *)(param_1 + 0x19c) = *(byte *)(param_1 + 0x19c) | 0x10;
    FUN_1450a5f20(*(undefined4 *)(param_1 + 0x20));
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar6 = param_1 + 0xf8;
    plVar4 = *(longlong **)(param_1 + 0x100);
    lVar5 = param_1 + 0xd8;
    if ((plVar4 == plVar4 + *(uint *)(param_1 + 0x108)) && (lVar6 != lVar5)) {
      plVar4 = *(longlong **)(param_1 + 0xe0);
      lVar6 = lVar5;
    }
    if (plVar4 != (longlong *)(*(longlong *)(lVar6 + 8) + (ulonglong)*(uint *)(lVar6 + 0x10) * 8)) {
      do {
        plVar1 = (longlong *)*plVar4;
        lVar2 = plVar1[0xe];
        if ((lVar2 != 0) && ((0 < *(short *)(lVar2 + 0xd0) || (0 < *(short *)(lVar2 + 0xd4))))) {
          (**(code **)(*plVar1 + 0x180))(plVar1,param_2,param_3);
        }
        plVar4 = plVar4 + 1;
        if ((plVar4 == (longlong *)
                       (*(longlong *)(lVar6 + 8) + (ulonglong)*(uint *)(lVar6 + 0x10) * 8)) &&
           (lVar6 != lVar5)) {
          plVar4 = *(longlong **)(param_1 + 0xe0);
          lVar6 = lVar5;
        }
      } while (plVar4 != (longlong *)
                         (*(longlong *)(lVar6 + 8) + (ulonglong)*(uint *)(lVar6 + 0x10) * 8));
    }
  }
  return;
}



// FUNCTION 14508ebe0 FUN_14508ebe0 body=284 status=ok
// SIG undefined FUN_14508ebe0(void)

undefined8 * FUN_14508ebe0(undefined8 *param_1)

{
  FUN_1450d4420();
  *(undefined4 *)(param_1 + 0x23) = 0xc2c0999a;
  *(undefined1 *)((longlong)param_1 + 0x114) = 0;
  *(uint *)((longlong)param_1 + 0x114) = *(uint *)((longlong)param_1 + 0x114) & 0xff;
  *param_1 = &PTR_FUN_149c24148;
  param_1[1] = &PTR_FUN_149c243b0;
  param_1[2] = &PTR_LAB_149c243b8;
  param_1[5] = &PTR_LAB_149c243e0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(byte *)((longlong)param_1 + 0x19c) = *(byte *)((longlong)param_1 + 0x19c) & 0xb0 | 0x30;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
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
  *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
  param_1[0x13] = param_1[0x13] | 0x3ffe3e1fffe;
  return param_1;
}



// FUNCTION 14508ed00 FUN_14508ed00 body=739 status=ok
// SIG undefined FUN_14508ed00(void)

void FUN_14508ed00(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  *param_1 = &PTR_FUN_149c24148;
  param_1[1] = &PTR_FUN_149c243b0;
  param_1[2] = &PTR_LAB_149c243b8;
  param_1[5] = &PTR_LAB_149c243e0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c79be90);
  if ((*(byte *)((longlong)param_1 + 0x19c) & 0x40) != 0) {
    for (plVar3 = DAT_14c79be70; plVar3 != DAT_14c79be70 + DAT_14c79be78; plVar3 = plVar3 + 1) {
      if ((undefined8 *)*plVar3 == param_1) {
        if (plVar3 < DAT_14c79be70 + ((ulonglong)DAT_14c79be78 - 1)) {
          *plVar3 = DAT_14c79be70[(ulonglong)DAT_14c79be78 - 1];
        }
        DAT_14c79be78 = DAT_14c79be78 - 1;
        break;
      }
    }
    *(byte *)((longlong)param_1 + 0x19c) = *(byte *)((longlong)param_1 + 0x19c) & 0xbf;
    FUN_14508ff00();
    if ((DAT_14c79be78 == 0) && (DAT_14c79be70 != (longlong *)0x0)) {
      DAT_14c79be78 = 0;
      AK::MemoryMgr::Free(0,DAT_14c79be70);
      DAT_14c79be70 = (longlong *)0x0;
      DAT_14c79be7c = 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c79be90);
  for (puVar1 = (undefined8 *)param_1[0x29]; puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    FUN_1453751f0(puVar1 + 2);
  }
  FUN_14508f7d0(param_1 + 0x29);
  for (puVar1 = (undefined8 *)param_1[0x2e]; puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    FUN_1453751f0(puVar1 + 2);
  }
  FUN_14508f7d0(param_1 + 0x2e);
  FUN_14508f760();
  puVar1 = (undefined8 *)param_1[0x26];
  while (puVar2 = puVar1, puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    if ((puVar2 < (undefined8 *)param_1[0x27]) ||
       ((undefined8 *)param_1[0x27] + (ulonglong)*(uint *)(param_1 + 0x28) * 4 <= puVar2)) {
      AK::MemoryMgr::Free(0,puVar2);
    }
  }
  if ((void *)param_1[0x27] != (void *)0x0) {
    AK::MemoryMgr::Free(0,(void *)param_1[0x27]);
    param_1[0x27] = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  FUN_1450719c0(local_res8);
  plVar3 = DAT_14c79be80;
  do {
    if (plVar3 == DAT_14c79be80 + DAT_14c79be88) {
LAB_14508ef58:
      FUN_1450719f0();
      puVar1 = (undefined8 *)param_1[0x20];
      if (puVar1 != (undefined8 *)0x0) {
        *(undefined4 *)(param_1 + 0x21) = 0;
        if (param_1 + 0x1f != puVar1) {
          AK::MemoryMgr::Free(0,puVar1);
        }
        param_1[0x20] = 0;
        *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
      }
      if ((void *)param_1[0x1e] != (void *)0x0) {
        AK::MemoryMgr::Free(2,(void *)param_1[0x1e]);
      }
      *param_1 = &PTR_FUN_149c23e38;
      param_1[1] = &PTR_FUN_149c24098;
      param_1[2] = &PTR_LAB_149c240a0;
      param_1[5] = &PTR_LAB_149c240c8;
      FUN_14508a6e0(param_1);
      return;
    }
    if ((undefined8 *)*plVar3 == param_1) {
      if (plVar3 < DAT_14c79be80 + (DAT_14c79be88 - 1)) {
        memmove(plVar3,plVar3 + 1,
                (ulonglong)((int)(DAT_14c79be80 + (DAT_14c79be88 - 1)) - (int)plVar3 & 0xfffffff8));
      }
      DAT_14c79be88 = DAT_14c79be88 - 1;
      if (DAT_14c79be88 == 0) {
        if (DAT_14c79be80 != (longlong *)0x0) {
          DAT_14c79be88 = 0;
          AK::MemoryMgr::Free(0,DAT_14c79be80);
          DAT_14c79be80 = (longlong *)0x0;
          DAT_14c79be8c = 0;
        }
        DAT_14c79be69 = 0;
        FUN_1450b87e0();
      }
      goto LAB_14508ef58;
    }
    plVar3 = plVar3 + 1;
  } while( true );
}



// FUNCTION 14508eff0 FUN_14508eff0 body=782 status=ok
// SIG undefined FUN_14508eff0(void)

undefined8 FUN_14508eff0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  void *pvVar5;
  char cVar6;
  byte *pbVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  longlong *local_28;
  uint local_20;
  
  bVar2 = *(byte *)*param_2;
  uVar9 = (ulonglong)bVar2;
  *param_2 = (longlong)((byte *)*param_2 + 1);
  pvVar5 = (void *)param_1[0x12];
  if (bVar2 == 0) {
    if (pvVar5 != (void *)0x0) {
      AK::MemoryMgr::Free(0,pvVar5);
      param_1[0x12] = 0;
    }
  }
  else {
    uVar14 = bVar2 + 4 & 0xfffffffc;
    pbVar7 = AK::MemoryMgr::Realloc(0,pvVar5,(ulonglong)(uVar14 + (uint)bVar2 * 4));
    if (pbVar7 == (byte *)0x0) {
      return 0x34;
    }
    *pbVar7 = bVar2;
    memcpy(pbVar7 + 1,(void *)*param_2,uVar9);
    *param_2 = *param_2 + uVar9;
    memcpy(pbVar7 + uVar14,(void *)*param_2,uVar9 * 4);
    *param_2 = *param_2 + uVar9 * 4;
    param_1[0x12] = (longlong)pbVar7;
  }
  uVar8 = FUN_1450d7f30(param_1,param_2,param_3);
  if ((int)uVar8 != 1) {
    return uVar8;
  }
  uVar8 = (**(code **)(*param_1 + 0x200))(param_1,param_2,param_3);
  if ((int)uVar8 != 1) {
    return uVar8;
  }
  bVar2 = *(byte *)*param_2;
  *param_2 = (longlong)((byte *)*param_2 + 1);
  FUN_1450d5e40(param_1,bVar2 & 1);
  FUN_1450d5ee0(param_1,bVar2 >> 1 & 1);
  uVar3 = *(ushort *)*param_2;
  *param_2 = (longlong)((ushort *)*param_2 + 1);
  *(ushort *)((longlong)param_1 + 0xd2) =
       (*(ushort *)((longlong)param_1 + 0xd2) ^ uVar3) & 0x3ff ^
       *(ushort *)((longlong)param_1 + 0xd2);
  FUN_1450d4a70(param_1);
  *(byte *)((longlong)param_1 + 0xd6) =
       (*(byte *)((longlong)param_1 + 0xd6) ^ bVar2) & 4 ^ *(byte *)((longlong)param_1 + 0xd6);
  uVar14 = *(uint *)*param_2;
  *param_2 = (longlong)((uint *)*param_2 + 1);
  uVar4 = *(uint *)((longlong)param_1 + 0x114);
  if ((uVar14 & 0xf00) == 0x100) {
    bVar12 = 0;
    uVar13 = uVar14 >> 0xc & 0x3ff3f;
    for (uVar14 = uVar13; uVar14 != 0; uVar14 = uVar14 & uVar14 - 1) {
      bVar12 = bVar12 + 1;
    }
    *(byte *)((longlong)param_1 + 0x114) = bVar12;
    uVar14 = (uint)bVar12 | uVar13 << 0xc | 0x100;
  }
  *(uint *)((longlong)param_1 + 0x114) = uVar14;
  if ((((char)uVar14 != (char)uVar4) || (((uVar14 ^ uVar4) & 0xf00) != 0)) ||
     (((uVar14 ^ uVar4) & 0xfffff000) != 0)) {
    FUN_1450a6380((int)param_1[4]);
  }
  pbVar7 = (byte *)((longlong)param_1 + 0x19c);
  bVar12 = *(byte *)*param_2;
  *param_2 = (longlong)((byte *)*param_2 + 1);
  uVar9 = param_1[0x13] | 0xe0000;
  if ((bVar12 & 1) == 0) {
    uVar9 = param_1[0x13] & 0xfffffffffff1ffff;
  }
  param_1[0x13] = uVar9;
  *pbVar7 = *pbVar7 ^ (bVar12 << 2 ^ *pbVar7) & 8;
  if ((bVar2 & 8) == 0) {
    return 1;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c79be90);
  if ((*pbVar7 & 0x40) == 0) {
    uVar10 = (ulonglong)DAT_14c79be78;
    uVar9 = (ulonglong)DAT_14c79be7c;
    uVar11 = (ulonglong)DAT_14c79be78;
    if (uVar9 <= uVar10) {
      cVar6 = FUN_14508ffd0(&DAT_14c79be70);
      if (cVar6 == '\0') goto LAB_14508f2d3;
      uVar9 = (ulonglong)DAT_14c79be7c;
      uVar10 = (ulonglong)DAT_14c79be78;
    }
    if (uVar11 < uVar9) {
      DAT_14c79be78 = (int)uVar10 + 1;
      puVar1 = (undefined8 *)(DAT_14c79be70 + uVar10 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = param_1;
        *(byte *)((longlong)param_1 + 0x19c) = *pbVar7 | 0x40;
        if (DAT_14c79be68 != '\0') {
          local_20 = local_20 & 0xffffff6d | 0x6d;
          local_28 = param_1;
          (**(code **)(*param_1 + 0xc0))
                    (param_1,0,&local_28,
                     CONCAT71((int7)((ulonglong)((longlong)param_1 + 0x19c) >> 8),1));
        }
      }
    }
  }
LAB_14508f2d3:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c79be90);
  return 1;
}



// FUNCTION 14508f300 FUN_14508f300 body=316 status=ok
// SIG undefined FUN_14508f300(void)

void FUN_14508f300(undefined8 param_1,undefined8 *param_2,float param_3,int param_4,
                  undefined4 param_5,int param_6,int param_7)

{
  longlong lVar1;
  float fVar2;
  undefined8 *local_48;
  longlong local_40;
  float local_38;
  float local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if (DAT_14c791068 != 0) {
    if (param_2[2] != 0) {
      FUN_1450b0c80(DAT_14c791068,param_2[2],(longlong)param_7,param_3,param_6,param_5,param_4);
      return;
    }
    local_38 = *(float *)(param_2 + 3);
    fVar2 = 0.0;
    if (param_4 != 0) {
      if ((param_4 == 1) || (param_4 == 2)) {
        fVar2 = param_3;
      }
    }
    if ((local_38 == fVar2) || (param_6 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014508f439. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_2)(param_2,(longlong)param_7,fVar2,1);
      return;
    }
    local_30 = param_6;
    local_2c = param_5;
    local_28 = 0x11;
    local_24 = 0x101;
    local_22 = 0;
    local_48 = param_2;
    local_40 = (longlong)param_7;
    local_34 = fVar2;
    lVar1 = FUN_1450b0a50(DAT_14c791068,&local_48,0);
    param_2[2] = lVar1;
    if (lVar1 == 0) {
      (**(code **)*param_2)(param_2,(longlong)param_7,fVar2,1);
    }
  }
  return;
}



// FUNCTION 14508f440 FUN_14508f440 body=794 status=ok
// SIG undefined FUN_14508f440(void)

void FUN_14508f440(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  byte bVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  bool bVar11;
  
  plVar8 = *(longlong **)(param_1 + 0x120);
  if (plVar8 != (longlong *)0x0) {
    puVar10 = (undefined8 *)0x0;
    do {
      lVar5 = DAT_14c791060;
      uVar2 = *(uint *)(plVar8 + 1);
      do {
        while (iVar3 = *(int *)(lVar5 + 0x58), iVar3 < 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x60));
          if (*(int *)(lVar5 + 0x58) < 0) goto LAB_14508f4a1;
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x60));
        }
        LOCK();
        bVar11 = iVar3 == *(int *)(lVar5 + 0x58);
        if (bVar11) {
          *(int *)(lVar5 + 0x58) = iVar3 + 1;
        }
        UNLOCK();
      } while (!bVar11);
LAB_14508f4a1:
      puVar6 = puVar10;
      if (*(uint *)(lVar5 + 0xa0) != 0) {
        for (puVar9 = *(undefined8 **)
                       (*(longlong *)(lVar5 + 0x98) +
                       ((ulonglong)uVar2 % (ulonglong)*(uint *)(lVar5 + 0xa0)) * 8);
            (puVar6 = puVar10, puVar9 != (undefined8 *)0x0 &&
            (puVar6 = puVar9, *(uint *)(puVar9 + 2) != uVar2)); puVar9 = (undefined8 *)puVar9[1]) {
        }
        if (puVar6 != (undefined8 *)0x0) {
          LOCK();
          *(int *)((longlong)puVar6 + 0x14) = *(int *)((longlong)puVar6 + 0x14) + 1;
          UNLOCK();
        }
      }
      iVar3 = *(int *)(lVar5 + 0x58);
      while (-1 < iVar3) {
        LOCK();
        bVar11 = iVar3 == *(int *)(lVar5 + 0x58);
        if (bVar11) {
          *(int *)(lVar5 + 0x58) = iVar3 + -1;
        }
        UNLOCK();
        if (bVar11) {
          if ((iVar3 + -1 == 0) && (0 < *(int *)(lVar5 + 0x88))) {
            SetEvent(*(HANDLE *)(lVar5 + 0x90));
          }
          goto LAB_14508f51f;
        }
        iVar3 = *(int *)(lVar5 + 0x58);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x60));
LAB_14508f51f:
      puVar9 = puVar6 + -2;
      if (puVar6 == (undefined8 *)0x0) {
        puVar9 = puVar10;
      }
      if (puVar9 != (undefined8 *)0x0) {
        bVar7 = *(byte *)(param_1 + 0x19c) & 7;
        if ((*(byte *)(param_1 + 0x19c) & 7) == 0) {
          iVar3 = *(int *)((longlong)plVar8 + 0x1c);
          lVar5 = plVar8[3];
          uVar4 = *(undefined4 *)((longlong)plVar8 + 0x14);
          if (iVar3 == 0) {
            puVar6 = puVar9 + 0x29;
          }
          else {
            puVar6 = puVar10;
            if (iVar3 == 5) {
              puVar6 = puVar9 + 0x2e;
            }
          }
          for (puVar6 = (undefined8 *)*puVar6; puVar6 != (undefined8 *)0x0;
              puVar6 = (undefined8 *)*puVar6) {
            if (*(int *)(puVar6 + 1) == *(int *)(param_1 + 0x20)) {
              if (puVar6 + 2 != (undefined8 *)0x0) {
                *(undefined1 *)((longlong)puVar6 + 0x2c) = 1;
                FUN_14508f300(puVar9,puVar6 + 2,0,0,(int)lVar5,uVar4,iVar3);
              }
              break;
            }
          }
        }
        else if (bVar7 == 1) {
          FUN_14508cbd0(puVar9,*(undefined4 *)(param_1 + 0x20),
                        *(undefined4 *)((longlong)plVar8 + 0xc),(int)plVar8[2],(int)plVar8[3],
                        *(undefined4 *)((longlong)plVar8 + 0x1c));
        }
        else if (bVar7 == 2) {
          iVar3 = *(int *)(param_1 + 0x20);
          for (puVar6 = (undefined8 *)puVar9[0x29]; puVar6 != (undefined8 *)0x0;
              puVar6 = (undefined8 *)*puVar6) {
            if (*(int *)(puVar6 + 1) == iVar3) {
              if (puVar6 + 2 != (undefined8 *)0x0) {
                *(undefined1 *)((longlong)puVar6 + 0x2c) = 0;
                if (DAT_14c791068 != 0) {
                  if (puVar6[4] == 0) {
                    (**(code **)puVar6[2])();
                  }
                  else {
                    FUN_1450b0c80(DAT_14c791068,puVar6[4],0,*(undefined4 *)(puVar6 + 5),0,4,1);
                  }
                }
              }
              break;
            }
          }
          for (puVar6 = (undefined8 *)puVar9[0x2e]; puVar6 != (undefined8 *)0x0;
              puVar6 = (undefined8 *)*puVar6) {
            if (*(int *)(puVar6 + 1) == iVar3) {
              if (puVar6 + 2 != (undefined8 *)0x0) {
                *(undefined1 *)((longlong)puVar6 + 0x2c) = 0;
                if (DAT_14c791068 != 0) {
                  if (puVar6[4] == 0) {
                    (**(code **)puVar6[2])();
                  }
                  else {
                    FUN_1450b0c80(DAT_14c791068,puVar6[4],5,*(undefined4 *)(puVar6 + 5),0,4,1);
                  }
                }
              }
              break;
            }
          }
        }
        LOCK();
        piVar1 = (int *)((longlong)puVar9 + 0x24);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(puVar9[2] + 0x18))();
        }
      }
      plVar8 = (longlong *)*plVar8;
    } while (plVar8 != (longlong *)0x0);
  }
  return;
}



// FUNCTION 14508f760 FUN_14508f760 body=103 status=ok
// SIG undefined FUN_14508f760(void)

void FUN_14508f760(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  while (puVar1 = (undefined8 *)*param_1, puVar1 != (undefined8 *)0x0) {
    *param_1 = *puVar1;
    if (puVar1 == (undefined8 *)param_1[1]) {
      param_1[1] = 0;
    }
    if ((puVar1 < (undefined8 *)param_1[3]) ||
       ((undefined8 *)param_1[3] + (ulonglong)*(uint *)(param_1 + 4) * 4 <= puVar1)) {
      AK::MemoryMgr::Free(0,puVar1);
      *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
    }
    else {
      *puVar1 = param_1[2];
      *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
      param_1[2] = puVar1;
    }
  }
  return;
}



// FUNCTION 14508f7d0 FUN_14508f7d0 body=237 status=ok
// SIG undefined FUN_14508f7d0(void)

void FUN_14508f7d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  while (puVar1 = (undefined8 *)*param_1, puVar1 != (undefined8 *)0x0) {
    *param_1 = *puVar1;
    if (puVar1 == (undefined8 *)param_1[1]) {
      param_1[1] = 0;
    }
    if ((puVar1 < (undefined8 *)param_1[3]) ||
       ((undefined8 *)param_1[3] + (ulonglong)*(uint *)(param_1 + 4) * 6 <= puVar1)) {
      AK::MemoryMgr::Free(0,puVar1);
      *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
    }
    else {
      *puVar1 = param_1[2];
      *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
      param_1[2] = puVar1;
    }
  }
  puVar1 = (undefined8 *)param_1[2];
  while (puVar2 = puVar1, puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    if ((puVar2 < (undefined8 *)param_1[3]) ||
       ((undefined8 *)param_1[3] + (ulonglong)*(uint *)(param_1 + 4) * 6 <= puVar2)) {
      AK::MemoryMgr::Free(0,puVar2);
    }
  }
  if ((void *)param_1[3] != (void *)0x0) {
    AK::MemoryMgr::Free(0,(void *)param_1[3]);
    param_1[3] = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 14508f8c0 FUN_14508f8c0 body=182 status=ok
// SIG undefined FUN_14508f8c0(void)

void FUN_14508f8c0(void)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *local_18;
  uint local_10;
  
  if (DAT_14c79be68 != '\0') {
    return;
  }
  DAT_14c79be68 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c79be90);
  uVar2 = 0;
  if (DAT_14c79be78 != 0) {
    do {
      local_18 = *(longlong **)(DAT_14c79be70 + uVar2 * 8);
      local_10 = local_10 & 0xffffff6d | 0x6d;
      (**(code **)(*local_18 + 0xc0))(local_18,0,&local_18,1);
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < DAT_14c79be78);
  }
  if (DAT_14c7910e8 != (code *)0x0) {
    (*DAT_14c7910e8)(DAT_14c79be68,DAT_14c7910f0);
  }
                    /* WARNING: Could not recover jumptable at 0x00014508f96a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c79be90);
  return;
}



// FUNCTION 14508f980 FUN_14508f980 body=288 status=ok
// SIG undefined FUN_14508f980(void)

void FUN_14508f980(void)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  longlong *local_28;
  uint local_20;
  
  if (DAT_14c79be68 == '\0') {
    return;
  }
  DAT_14c79be68 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c79be90);
  uVar4 = 0;
  if (DAT_14c79be78 != 0) {
    do {
      uVar5 = 0x3f800000;
      local_28 = *(longlong **)(DAT_14c79be70 + uVar4 * 8);
      local_20 = local_20 & 0xffffff6d | 0x6d;
      if ((local_28[0x18] != 0) &&
         (pbVar1 = *(byte **)(local_28[0x18] + 0x18), pbVar1 != (byte *)0x0)) {
        uVar3 = 0;
        do {
          uVar2 = uVar3 + 1;
          if (pbVar1[uVar2] == 0xb) {
            if (pbVar1 + ((ulonglong)(*pbVar1 + 8) & 0xfffffff8) + (ulonglong)uVar3 * 0x10 !=
                (byte *)0x0) {
              uVar5 = *(undefined4 *)
                       (pbVar1 + ((ulonglong)(*pbVar1 + 8) & 0xfffffff8) + (ulonglong)uVar3 * 0x10);
            }
            break;
          }
          uVar3 = uVar2;
        } while (uVar2 < *pbVar1);
      }
      (**(code **)(*local_28 + 0xc0))(local_28,uVar5,&local_28,1);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < DAT_14c79be78);
  }
  if (DAT_14c7910e8 != (code *)0x0) {
    (*DAT_14c7910e8)(DAT_14c79be68,DAT_14c7910f0);
  }
                    /* WARNING: Could not recover jumptable at 0x00014508fa94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c79be90);
  return;
}



// FUNCTION 14508faa0 FUN_14508faa0 body=8 status=ok
// SIG undefined FUN_14508faa0(void)

undefined1 FUN_14508faa0(void)

{
  return DAT_14c79be68;
}



// FUNCTION 14508fab0 FUN_14508fab0 body=1099 status=ok
// SIG undefined FUN_14508fab0(void)

void FUN_14508fab0(longlong param_1,longlong param_2,undefined8 param_3)

{
  float fVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char local_res8 [8];
  undefined4 local_148;
  undefined8 local_144;
  void *local_138;
  ulonglong local_130;
  undefined1 local_128 [16];
  float local_118;
  float local_fc;
  float local_f8;
  float local_f4;
  void *local_c0;
  undefined4 local_b8;
  uint local_98;
  uint uStack_94;
  ulonglong uStack_90;
  
  FUN_1450d98b0();
  local_138 = (void *)0x0;
  local_130 = 0;
  FUN_1450d8410(param_1,param_2,&local_138,param_3);
  if (local_138 != (void *)0x0) {
    local_130 = local_130 & 0xffffffff00000000;
    AK::MemoryMgr::Free(0,local_138);
    local_138 = (void *)0x0;
    local_130 = local_130 & 0xffffffff;
  }
  fVar6 = 0.0;
  fVar5 = 0.0;
  for (puVar2 = *(undefined8 **)(param_1 + 0x170); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    fVar5 = fVar5 + *(float *)(puVar2 + 5);
  }
  fVar7 = *(float *)(param_1 + 0x118);
  if (*(float *)(param_1 + 0x118) <= fVar5) {
    fVar7 = fVar5;
  }
  *(float *)(param_2 + 0x10) = fVar7 + *(float *)(param_2 + 0x10);
  if ((*(longlong *)(param_1 + 0x80) != 0) && (cVar3 = FUN_14508d190(), cVar3 == '\0')) {
    FUN_1450896a0(local_128);
    uStack_90 = *(ulonglong *)(param_2 + 0x98) & 0xffffffffffffffc0;
    local_98 = *(uint *)(param_2 + 0x90) & 0xff07ffff;
    uStack_94 = *(uint *)(param_2 + 0x94) & 0xfffffff;
    FUN_14508fab0(*(undefined8 *)(param_1 + 0x80),local_128,param_3);
    if ((DAT_14c791034 == 1) && ((*(uint *)(param_2 + 0xa0) >> 0x18 & 1) != 0)) {
      if (local_118 != 0.0) {
        local_148 = 0x18;
        fVar5 = 0.0;
        fVar7 = 0.0;
        local_res8[0] = '\0';
        local_144 = 0;
        lVar4 = FUN_1450899e0(param_2 + 0x68,&local_148,local_res8);
        if (lVar4 != 0) {
          if (local_res8[0] == '\0') {
            *(undefined4 *)(lVar4 + 0xc) = 0;
          }
          fVar5 = *(float *)(lVar4 + 0xc);
          fVar7 = fVar5 + local_118;
          *(float *)(lVar4 + 0xc) = fVar7;
        }
        if ((*(uint *)(param_2 + 0xb0) >> 0x18 & 1) == 0) {
          fVar1 = *(float *)(param_2 + 0x2c);
          if ((fVar5 != fVar1) || (fVar1 <= fVar7)) {
            if (fVar1 < fVar7) {
              *(float *)(param_2 + 0x2c) = fVar7;
            }
          }
          else {
            *(byte *)(param_2 + 0xc3) = *(byte *)(param_2 + 0xc3) | 4;
          }
        }
        else {
          *(byte *)(param_2 + 0xc3) = *(byte *)(param_2 + 0xc3) | 4;
        }
      }
    }
    else {
      *(float *)(param_2 + 0x2c) = local_118 + *(float *)(param_2 + 0x2c);
    }
    if ((DAT_14c791034 == 1) && ((*(uint *)(param_2 + 0xa0) >> 0x18 & 1) != 0)) {
      if (local_fc != 0.0) {
        local_148 = 0x18;
        fVar5 = 0.0;
        fVar7 = 0.0;
        local_res8[0] = '\0';
        local_144 = 0;
        lVar4 = FUN_1450899e0(param_2 + 0x68,&local_148,local_res8);
        if (lVar4 != 0) {
          if (local_res8[0] == '\0') {
            *(undefined4 *)(lVar4 + 0xc) = 0;
          }
          fVar5 = *(float *)(lVar4 + 0xc);
          fVar7 = fVar5 + local_fc;
          *(float *)(lVar4 + 0xc) = fVar7;
        }
        if ((*(uint *)(param_2 + 0xb0) >> 0x18 & 1) == 0) {
          fVar1 = *(float *)(param_2 + 0x2c);
          if ((fVar5 != fVar1) || (fVar1 <= fVar7)) {
            if (fVar1 < fVar7) {
              *(float *)(param_2 + 0x2c) = fVar7;
            }
          }
          else {
            *(byte *)(param_2 + 0xc3) = *(byte *)(param_2 + 0xc3) | 4;
          }
        }
        else {
          *(byte *)(param_2 + 0xc3) = *(byte *)(param_2 + 0xc3) | 4;
        }
      }
    }
    else {
      *(float *)(param_2 + 0x2c) = local_fc + *(float *)(param_2 + 0x2c);
    }
    if (DAT_14c791034 == 1) {
      FUN_145089b80(param_2,local_128);
    }
    else {
      *(float *)(param_2 + 0x34) = local_f4 + *(float *)(param_2 + 0x34);
      if ((DAT_14c791034 == 1) && ((*(uint *)(param_2 + 0xa0) >> 0x19 & 1) != 0)) {
        if (local_f8 != 0.0) {
          local_148 = 0x19;
          fVar5 = 0.0;
          local_res8[0] = '\0';
          local_144 = 0;
          lVar4 = FUN_1450899e0(param_2 + 0x68,&local_148,local_res8);
          if (lVar4 != 0) {
            if (local_res8[0] == '\0') {
              *(undefined4 *)(lVar4 + 0xc) = 0;
            }
            fVar6 = *(float *)(lVar4 + 0xc);
            fVar5 = fVar6 + local_f8;
            *(float *)(lVar4 + 0xc) = fVar5;
          }
          if ((*(uint *)(param_2 + 0xb0) >> 0x19 & 1) == 0) {
            fVar7 = *(float *)(param_2 + 0x30);
            if ((fVar6 != fVar7) || (fVar7 <= fVar5)) {
              if (fVar7 < fVar5) {
                *(float *)(param_2 + 0x30) = fVar5;
              }
            }
            else {
              *(byte *)(param_2 + 0xc3) = *(byte *)(param_2 + 0xc3) | 4;
            }
          }
          else {
            *(byte *)(param_2 + 0xc3) = *(byte *)(param_2 + 0xc3) | 4;
          }
        }
      }
      else {
        *(float *)(param_2 + 0x30) = local_f8 + *(float *)(param_2 + 0x30);
      }
    }
    if (local_c0 != (void *)0x0) {
      local_b8 = 0;
      AK::MemoryMgr::Free(0,local_c0);
    }
  }
  return;
}



// FUNCTION 14508ff00 FUN_14508ff00 body=138 status=ok
// SIG undefined FUN_14508ff00(void)

void FUN_14508ff00(longlong *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong *local_18;
  uint local_10;
  
  uVar4 = 0x3f800000;
  local_10 = local_10 & 0xffffff6d | 0x6d;
  if ((param_1[0x18] != 0) && (pbVar1 = *(byte **)(param_1[0x18] + 0x18), pbVar1 != (byte *)0x0)) {
    uVar2 = 0;
    do {
      uVar3 = uVar2 + 1;
      if (pbVar1[uVar3] == 0xb) {
        if (pbVar1 + (ulonglong)uVar2 * 0x10 + ((ulonglong)(*pbVar1 + 8) & 0xfffffff8) !=
            (byte *)0x0) {
          uVar4 = *(undefined4 *)
                   (pbVar1 + (ulonglong)uVar2 * 0x10 + ((ulonglong)(*pbVar1 + 8) & 0xfffffff8));
        }
        break;
      }
      uVar2 = uVar3;
    } while (uVar3 < *pbVar1);
  }
  local_18 = param_1;
  (**(code **)(*param_1 + 0xc0))(param_1,uVar4,&local_18,1);
  return;
}



// FUNCTION 14508ff90 FUN_14508ff90 body=52 status=ok
// SIG undefined FUN_14508ff90(void)

undefined8 FUN_14508ff90(undefined8 param_1,ulonglong param_2)

{
  FUN_14508ed00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 14508ffd0 FUN_14508ffd0 body=186 status=ok
// SIG undefined FUN_14508ffd0(void)

undefined8 FUN_14508ffd0(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ulonglong uVar5;
  __uint64 _Var6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 1);
  iVar3 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar3 = 1;
  }
  _Var6 = (ulonglong)(iVar3 + uVar1) << 3;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var6);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        uVar5 = 0;
        if ((ulonglong)uVar2 != 0) {
          do {
            *(undefined8 *)((longlong)pvVar4 + uVar5 * 8) = *(undefined8 *)(*param_1 + uVar5 * 8);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar2);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_14509006d;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_14509006d:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145090090 FUN_145090090 body=371 status=ok
// SIG undefined FUN_145090090(void)

undefined8 FUN_145090090(longlong *param_1,int *param_2,longlong *param_3)

{
  undefined1 uVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  byte *pbVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  
  uVar3 = *(ushort *)*param_1;
  *param_1 = (longlong)((ushort *)*param_1 + 1);
  if (uVar3 != 0) {
    uVar8 = FUN_1450d6e50(param_3,uVar3);
    if ((int)uVar8 != 1) {
      return uVar8;
    }
    uVar11 = 0;
    if (uVar3 != 0) {
      do {
        puVar7 = (undefined4 *)*param_1;
        uVar5 = *puVar7;
        *param_1 = (longlong)(puVar7 + 1);
        uVar1 = *(undefined1 *)(puVar7 + 1);
        *param_1 = (longlong)puVar7 + 5;
        cVar10 = *(char *)((longlong)puVar7 + 5);
        *param_1 = (longlong)puVar7 + 6;
        bVar2 = *(byte *)((longlong)puVar7 + 6);
        pbVar9 = (byte *)((longlong)puVar7 + 7);
        *param_1 = (longlong)pbVar9;
        uVar12 = bVar2 & 0x7f;
        while ((char)bVar2 < '\0') {
          bVar2 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          *param_1 = (longlong)pbVar9;
          uVar12 = bVar2 & 0x7f | uVar12 << 7;
        }
        uVar6 = *(undefined4 *)pbVar9;
        *param_1 = (longlong)(pbVar9 + 4);
        bVar2 = pbVar9[4];
        *param_1 = (longlong)(pbVar9 + 5);
        uVar4 = *(ushort *)(pbVar9 + 5);
        *param_1 = (longlong)(pbVar9 + 7);
        if (cVar10 == '\x06') {
          cVar10 = '\x02';
          if (DAT_14c791034 == 1) {
            cVar10 = '\x05';
          }
        }
        uVar8 = (**(code **)(*param_3 + 0x1c0))
                          (param_3,uVar5,uVar1,cVar10,uVar12,uVar6,bVar2,pbVar9 + 7,(uint)uVar4);
        if ((int)uVar8 != 1) {
          return uVar8;
        }
        uVar11 = uVar11 + 1;
        *param_1 = *param_1 + (ulonglong)uVar4 * 0xc;
        *param_2 = *param_2 + (uint)uVar4 * -0xc;
      } while (uVar11 < uVar3);
    }
  }
  return 1;
}



// FUNCTION 145090250 FUN_145090250 body=96 status=ok
// SIG undefined FUN_145090250(void)

undefined8 * FUN_145090250(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return param_1;
}



// FUNCTION 1450902b0 FUN_1450902b0 body=52 status=ok
// SIG undefined FUN_1450902b0(void)

void FUN_1450902b0(longlong param_1)

{
  if (*(void **)(param_1 + 0x90) != (void *)0x0) {
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x90));
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  FUN_145090cb0(param_1);
  return;
}



// FUNCTION 1450902f0 FUN_1450902f0 body=123 status=ok
// SIG undefined FUN_1450902f0(void)

void FUN_1450902f0(longlong param_1,longlong param_2,uint *param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = 0x633;
  bVar3 = 0;
  do {
    bVar3 = bVar3 + 1;
    uVar2 = uVar2 & uVar2 - 1;
  } while (uVar2 != 0);
  uVar2 = (uint)(bVar3 >> 1);
  if (param_2 == 0) {
    *param_3 = uVar2;
  }
  else {
    uVar1 = *param_3;
    if (uVar2 <= *param_3) {
      uVar1 = uVar2;
    }
    *param_3 = uVar1;
    FUN_1450941b0(*(undefined8 *)(param_1 + 0x90),uVar1,param_2);
  }
  *param_4 = *(float *)(param_1 + 0x98) * 57.295776;
  return;
}



// FUNCTION 145090370 FUN_145090370 body=917 status=ok
// SIG undefined FUN_145090370(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_145090370(longlong *param_1,longlong param_2,uint param_3,float param_4)

{
  float *pfVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  void *pvVar6;
  ulonglong uVar7;
  float *pfVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  uint *puVar11;
  longlong lVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  __uint64 _Var17;
  float fVar18;
  float fVar19;
  undefined8 auStack_70 [5];
  float local_48 [8];
  
  if ((param_4 < -90.0) || (90.0 < param_4)) {
    return 0x1f;
  }
  uVar15 = param_3;
  if (param_3 < *(uint *)((longlong)param_1 + 0x9c)) {
    uVar15 = *(uint *)((longlong)param_1 + 0x9c);
  }
  _Var17 = (ulonglong)uVar15 * 4;
  auStack_70[0] = 0x1450903e2;
  pvVar6 = AK::MemoryMgr::Malloc(0,_Var17);
  if (pvVar6 == (void *)0x0) {
    return 0x34;
  }
  uVar7 = _Var17 + 0xf;
  if (uVar7 <= _Var17) {
    uVar7 = 0xffffffffffffff0;
  }
  auStack_70[0] = 0x14509040f;
  lVar3 = -(uVar7 & 0xfffffffffffffff0);
  uVar7 = 0;
  uVar14 = 0;
  pfVar1 = (float *)((longlong)local_48 + lVar3);
  if (param_3 < 4) {
    if (param_3 == 0) goto LAB_14509049d;
    param_2 = param_2 - (longlong)pfVar1;
    uVar10 = uVar7;
  }
  else {
    param_2 = param_2 - (longlong)pfVar1;
    puVar9 = (undefined4 *)((longlong)local_48 + lVar3 + 4);
    uVar5 = (param_3 - 4 >> 2) + 1;
    uVar10 = (ulonglong)uVar5;
    uVar14 = uVar5 * 4;
    do {
      puVar9[-1] = *(undefined4 *)(param_2 + -4 + (longlong)puVar9);
      *puVar9 = *(undefined4 *)(param_2 + (longlong)puVar9);
      puVar9[1] = *(undefined4 *)(param_2 + 4 + (longlong)puVar9);
      puVar9[2] = *(undefined4 *)(param_2 + 8 + (longlong)puVar9);
      puVar9 = puVar9 + 4;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    uVar10 = (ulonglong)uVar5 * 4;
    if (param_3 <= uVar14) goto LAB_14509049d;
  }
  pfVar8 = pfVar1 + uVar10;
  uVar10 = (ulonglong)(param_3 - uVar14);
  do {
    *pfVar8 = *(float *)(param_2 + (longlong)pfVar8);
    pfVar8 = pfVar8 + 1;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
LAB_14509049d:
  uVar14 = param_3;
  if (param_3 < *(uint *)((longlong)param_1 + 0x9c)) {
    do {
      uVar5 = uVar14 + 1;
      pfVar1[uVar14] = *(float *)(param_1[0x12] + (ulonglong)uVar14 * 4) * 57.295776;
      uVar14 = uVar5;
    } while (uVar5 < *(uint *)((longlong)param_1 + 0x9c));
  }
  pfVar8 = pfVar1;
  if (param_3 != 0) {
    do {
      if (180.0 < *pfVar8 || *pfVar8 == 180.0) goto LAB_145090501;
      uVar14 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar14;
      pfVar8 = pfVar8 + 1;
    } while (uVar14 < param_3);
  }
  fVar19 = *pfVar1;
  if (fVar19 < 90.0) {
    uVar16 = 1;
    uVar14 = 1;
    if (1 < param_3) {
      pfVar8 = (float *)((longlong)local_48 + lVar3 + 4);
      do {
        if (((*pfVar8 < pfVar1[uVar14 - 1]) ||
            (fVar18 = *pfVar8 - pfVar1[uVar14 - 1], fVar18 == 0.0)) || (180.0 <= fVar18))
        goto LAB_145090501;
        if (fVar19 <= fVar18) {
          fVar18 = fVar19;
        }
        uVar14 = uVar14 + 1;
        pfVar8 = pfVar8 + 1;
        fVar19 = fVar18;
      } while (uVar14 < param_3);
      fVar19 = 360.0 - (pfVar1[param_3 - 1] + pfVar1[param_3 - 1]);
      if (fVar18 <= fVar19) {
        fVar19 = fVar18;
      }
    }
    if (5.0 <= fVar19) {
      *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x1450905aa;
      FUN_145094310(pfVar1,param_3,pvVar6);
      pvVar2 = (void *)param_1[0x12];
      if (pvVar2 != (void *)0x0) {
        *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x1450905c5;
        AK::MemoryMgr::Free(0,pvVar2);
      }
      param_1[0x12] = (longlong)pvVar6;
      *(uint *)((longlong)param_1 + 0x9c) = uVar15;
      *(float *)(param_1 + 0x13) = param_4 * 0.017453294;
      *(float *)(param_1 + 0x11) = 1.0 / (fVar19 * 0.017453294);
    }
    else {
      uVar16 = 0x1f;
      *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x14509059b;
      AK::MemoryMgr::Free(0,pvVar6);
    }
  }
  else {
LAB_145090501:
    uVar16 = 2;
    *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x145090511;
    AK::MemoryMgr::Free(0,pvVar6);
  }
  puVar11 = (uint *)*param_1;
  if (puVar11 != puVar11 + (ulonglong)*(uint *)(param_1 + 1) * 4) {
    puVar13 = puVar11 + 2;
    do {
      uVar15 = *puVar11;
      lVar12 = param_1[0x12];
      if ((uVar15 & 0xff9c0000) == 0) {
        *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x145090629;
        FUN_145096260(uVar15,lVar12,puVar13);
      }
      else {
        lVar4 = param_1[0x13];
        *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x14509063b;
        FUN_1450969c0(uVar15,lVar12,(int)lVar4,puVar13);
      }
      puVar11 = puVar11 + 4;
      puVar13 = puVar13 + 4;
    } while (puVar11 != (uint *)((ulonglong)*(uint *)(param_1 + 1) * 0x10 + *param_1));
  }
  lVar12 = param_1[4];
  if (lVar12 != (ulonglong)*(uint *)(param_1 + 5) * 0x10 + lVar12) {
    do {
      pvVar6 = *(void **)(lVar12 + 8);
      *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x145090670;
      AK::MemoryMgr::Free(0,pvVar6);
      lVar12 = lVar12 + 0x10;
    } while (lVar12 != (ulonglong)*(uint *)(param_1 + 5) * 0x10 + param_1[4]);
  }
  lVar12 = param_1[2];
  *(undefined4 *)(param_1 + 5) = 0;
  if (lVar12 != lVar12 + (ulonglong)*(uint *)(param_1 + 3) * 0x18) {
    do {
      pvVar6 = *(void **)(lVar12 + 8);
      if (pvVar6 != (void *)0x0) {
        *(undefined4 *)(lVar12 + 0x10) = 0;
        *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x1450906b4;
        AK::MemoryMgr::Free(0,pvVar6);
        *(undefined8 *)(lVar12 + 8) = 0;
        *(undefined4 *)(lVar12 + 0x14) = 0;
      }
      lVar12 = lVar12 + 0x18;
    } while (lVar12 != param_1[2] + (ulonglong)*(uint *)(param_1 + 3) * 0x18);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  return uVar16;
}



// FUNCTION 145090710 FUN_145090710 body=151 status=ok
// SIG undefined FUN_145090710(void)

undefined8 FUN_145090710(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint *puVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  puVar2 = (uint *)*param_1;
  puVar4 = puVar2 + (ulonglong)*(uint *)(param_1 + 1) * 4;
  if (puVar2 != puVar4) {
    do {
      uVar1 = *puVar2;
      if ((((uVar1 & 0xff) == (param_2 & 0xff)) && (((uVar1 ^ param_2) & 0xf00) == 0)) &&
         (((uVar1 ^ param_2) & 0xfffff000) == 0)) break;
      puVar2 = puVar2 + 4;
    } while (puVar2 != puVar4);
    if (puVar2 != puVar4) {
      uVar3 = *(undefined8 *)(puVar2 + 2);
      goto LAB_14509078a;
    }
  }
  uVar3 = FUN_1450907b0(param_1,param_2);
LAB_14509078a:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  return uVar3;
}



// FUNCTION 1450907b0 FUN_1450907b0 body=421 status=ok
// SIG undefined FUN_1450907b0(void)

longlong FUN_1450907b0(longlong *param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint *puVar6;
  
  if (param_1[0x12] == 0) {
    return 0;
  }
  puVar3 = (uint *)*param_1;
  uVar5 = (ulonglong)*(uint *)(param_1 + 1);
  puVar4 = puVar3 + uVar5 * 4;
  if (puVar3 != puVar4) {
    do {
      uVar1 = *puVar3;
      if ((((uVar1 & 0xff) == (param_2 & 0xff)) && (((uVar1 ^ param_2) & 0xf00) == 0)) &&
         (((uVar1 ^ param_2) & 0xfffff000) == 0)) break;
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar4);
  }
  puVar6 = puVar3 + 2;
  if (puVar3 == puVar4) {
    puVar6 = (uint *)0x0;
  }
  if (puVar6 == (uint *)0x0) {
    if (((*(uint *)((longlong)param_1 + 0xc) <= uVar5) &&
        (cVar2 = FUN_145090e20(param_1), cVar2 == '\0')) ||
       (*(uint *)((longlong)param_1 + 0xc) <= uVar5)) goto LAB_1450908c0;
    uVar1 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar1 + 1;
    puVar3 = (uint *)((ulonglong)uVar1 * 0x10 + *param_1);
    if (puVar3 == (uint *)0x0) goto LAB_1450908c0;
    *(undefined1 *)puVar3 = 0;
    *puVar3 = *puVar3 & 0xff;
    puVar6 = puVar3 + 2;
    *puVar3 = param_2;
    if (puVar6 == (uint *)0x0) goto LAB_1450908c0;
  }
  puVar6[0] = 0;
  puVar6[1] = 0;
  if ((param_2 & 0xff9c0000) == 0) {
    FUN_145096260(param_2,param_1[0x12],puVar6);
  }
  else {
    FUN_1450969c0(param_2,param_1[0x12],(int)param_1[0x13],puVar6);
  }
  if (*(longlong *)puVar6 != 0) {
    return *(longlong *)puVar6;
  }
LAB_1450908c0:
  puVar3 = (uint *)*param_1;
  puVar6 = puVar3 + (ulonglong)*(uint *)(param_1 + 1) * 4;
  puVar4 = puVar3;
  if (puVar3 != puVar6) {
    do {
      uVar1 = *puVar4;
      if ((((uVar1 & 0xff) == (param_2 & 0xff)) && (((uVar1 ^ param_2) & 0xf00) == 0)) &&
         (((uVar1 ^ param_2) & 0xfffff000) == 0)) break;
      puVar4 = puVar4 + 4;
    } while (puVar4 != puVar6);
  }
  if (puVar4 != puVar6) {
    if (puVar4 < puVar3 + (ulonglong)(*(uint *)(param_1 + 1) - 1) * 4) {
      memmove(puVar4,puVar4 + 4,
              (ulonglong)
              ((int)(puVar3 + (ulonglong)(*(uint *)(param_1 + 1) - 1) * 4) - (int)puVar4 &
              0xfffffff0));
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  }
  return 0;
}



// FUNCTION 145090960 FUN_145090960 body=166 status=ok
// SIG undefined FUN_145090960(void)

uint * FUN_145090960(longlong param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  puVar2 = *(uint **)(param_1 + 0x10);
  puVar1 = puVar2 + (ulonglong)*(uint *)(param_1 + 0x18) * 6;
  if (puVar2 != puVar1) {
    do {
      if (((*puVar2 & 0x7fffffff) == (param_2 & 0x7fffffff)) &&
         (-1 < (int)(*puVar2 ^ (param_3 << 0x1f | param_2 & 0x7fffffff)))) break;
      puVar2 = puVar2 + 6;
    } while (puVar2 != puVar1);
    if (puVar2 != puVar1) {
      puVar2 = puVar2 + 2;
      goto LAB_1450909e4;
    }
  }
  puVar2 = (uint *)FUN_145090a10(param_1);
LAB_1450909e4:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  return puVar2;
}



// FUNCTION 145090a10 FUN_145090a10 body=412 status=ok
// SIG undefined FUN_145090a10(void)

uint * FUN_145090a10(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar6 = *(uint **)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x18);
  puVar1 = puVar6 + (ulonglong)uVar2 * 6;
  if (puVar6 != puVar1) {
    do {
      if (((*puVar6 & 0x7fffffff) == (param_2 & 0x7fffffff)) && (-1 < (int)(*puVar6 ^ param_2)))
      break;
      puVar6 = puVar6 + 6;
    } while (puVar6 != puVar1);
  }
  puVar7 = puVar6 + 2;
  if (puVar6 == puVar1) {
    puVar7 = (uint *)0x0;
  }
  if (puVar7 == (uint *)0x0) {
    if (*(uint *)(param_1 + 0x1c) <= uVar2) {
      cVar4 = FUN_145090f50(param_1 + 0x10);
      if (cVar4 == '\0') {
        return (uint *)0x0;
      }
      if (*(uint *)(param_1 + 0x1c) <= uVar2) {
        return (uint *)0x0;
      }
    }
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18);
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) + 1;
    if (puVar1 == (uint *)0x0) {
      return (uint *)0x0;
    }
    puVar7 = puVar1 + 2;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *puVar1 = param_2;
    if (puVar7 == (uint *)0x0) {
      return (uint *)0x0;
    }
  }
  iVar5 = FUN_145094470(param_2,*(undefined4 *)(param_1 + 0x88),puVar7);
  if (iVar5 == 1) {
    return puVar7;
  }
  puVar6 = *(uint **)(param_1 + 0x10);
  puVar1 = puVar6 + (ulonglong)*(uint *)(param_1 + 0x18) * 6;
  if (puVar6 != puVar1) {
    do {
      if (((*puVar6 & 0x7fffffff) == (param_2 & 0x7fffffff)) && (-1 < (int)(*puVar6 ^ param_2)))
      break;
      puVar6 = puVar6 + 6;
    } while (puVar6 != puVar1);
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (puVar6 != (uint *)(lVar3 + (ulonglong)uVar2 * 0x18)) {
    while (puVar6 < (uint *)(lVar3 + ((ulonglong)uVar2 - 1) * 0x18)) {
      *puVar6 = puVar6[6];
      FUN_145096fa0(puVar6 + 2,puVar6 + 8);
      puVar6 = puVar6 + 6;
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  }
  return (uint *)0x0;
}



// FUNCTION 145090bb0 FUN_145090bb0 body=246 status=ok
// SIG undefined FUN_145090bb0(void)

int FUN_145090bb0(undefined8 param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if ((param_2 & 0xf00) == 0x100) {
    uVar3 = param_2 >> 0xc & 0xffff7;
    uVar4 = uVar3 << 0xc;
    uVar1 = param_2 - ((param_2 >> 0xc) - uVar3 >> 3) & 0xff;
    uVar5 = uVar4 | uVar1 | 0x100;
    if (1 < uVar1) {
      iVar6 = 1;
      lVar2 = FUN_145090ef0(param_1,uVar5);
      if (lVar2 == 0) {
        lVar2 = FUN_1450907b0(param_1,uVar5);
        iVar6 = 2 - (uint)(lVar2 != 0);
      }
      if (((uVar4 & 0x4000) != 0) && (iVar6 == 1)) {
        uVar1 = (uVar4 & 0xffffb000) >> 0xc;
        uVar1 = uVar5 - (uVar3 - uVar1 >> 2) & 0xff | 0x100 | uVar1 << 0xc;
        lVar2 = FUN_145090ef0(param_1,uVar1);
        if (lVar2 == 0) {
          lVar2 = FUN_1450907b0(param_1,uVar1);
          iVar6 = 2 - (uint)(lVar2 != 0);
        }
      }
      return iVar6;
    }
  }
  return 1;
}



// FUNCTION 145090cb0 FUN_145090cb0 body=354 status=ok
// SIG undefined FUN_145090cb0(void)

void FUN_145090cb0(undefined8 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  void *pvVar3;
  void *pvVar4;
  
  puVar2 = (uint *)*param_1;
  puVar1 = puVar2;
  if (puVar2 != puVar2 + (ulonglong)*(uint *)(param_1 + 1) * 4) {
    do {
      pvVar4 = *(void **)(puVar1 + 2);
      if ((*puVar1 & 0xff9c0000) == 0) {
        AK::MemoryMgr::Free(0,pvVar4);
      }
      else {
        FUN_145375460(pvVar4,&PTR_PTR_14c72f448);
        if (pvVar4 != (void *)0x0) {
          FUN_145375350(pvVar4);
          (**(code **)(PTR_PTR_14c72f448 + 0x10))(&PTR_PTR_14c72f448,pvVar4);
        }
      }
      puVar1 = puVar1 + 4;
      puVar2 = (uint *)*param_1;
    } while (puVar1 != puVar2 + (ulonglong)*(uint *)(param_1 + 1) * 4);
  }
  if (puVar2 != (uint *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(0,puVar2);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  pvVar4 = (void *)param_1[4];
  pvVar3 = pvVar4;
  if (pvVar4 != (void *)((ulonglong)*(uint *)(param_1 + 5) * 0x10 + (longlong)pvVar4)) {
    do {
      AK::MemoryMgr::Free(0,*(void **)((longlong)pvVar3 + 8));
      pvVar3 = (void *)((longlong)pvVar3 + 0x10);
      pvVar4 = (void *)param_1[4];
    } while (pvVar3 != (void *)((ulonglong)*(uint *)(param_1 + 5) * 0x10 + (longlong)pvVar4));
  }
  if (pvVar4 != (void *)0x0) {
    *(undefined4 *)(param_1 + 5) = 0;
    AK::MemoryMgr::Free(0,pvVar4);
    param_1[4] = 0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  pvVar4 = (void *)param_1[2];
  pvVar3 = pvVar4;
  if (pvVar4 != (void *)((longlong)pvVar4 + (ulonglong)*(uint *)(param_1 + 3) * 0x18)) {
    do {
      if (*(void **)((longlong)pvVar3 + 8) != (void *)0x0) {
        *(undefined4 *)((longlong)pvVar3 + 0x10) = 0;
        AK::MemoryMgr::Free(0,*(void **)((longlong)pvVar3 + 8));
        *(undefined8 *)((longlong)pvVar3 + 8) = 0;
        *(undefined4 *)((longlong)pvVar3 + 0x14) = 0;
      }
      pvVar3 = (void *)((longlong)pvVar3 + 0x18);
      pvVar4 = (void *)param_1[2];
    } while (pvVar3 != (void *)((longlong)pvVar4 + (ulonglong)*(uint *)(param_1 + 3) * 0x18));
  }
  if (pvVar4 != (void *)0x0) {
    *(undefined4 *)(param_1 + 3) = 0;
    AK::MemoryMgr::Free(0,pvVar4);
    param_1[2] = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  return;
}



// FUNCTION 145090e20 FUN_145090e20 body=199 status=ok
// SIG undefined FUN_145090e20(void)

undefined8 FUN_145090e20(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint *puVar6;
  __uint64 _Var7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar8 = (ulonglong)*(uint *)(param_1 + 1);
  iVar3 = (uVar2 >> 1) + uVar2;
  if (uVar2 == 0) {
    iVar3 = 1;
  }
  _Var7 = (ulonglong)(iVar3 + uVar2) << 4;
  if ((void *)*param_1 == (void *)0x0) {
    puVar6 = AK::MemoryMgr::Malloc(0,_Var7);
    if (puVar6 != (uint *)0x0) {
      if (((uint *)*param_1 != (uint *)0x0) && (puVar5 = puVar6, (uint *)*param_1 != puVar6)) {
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          if (puVar5 != (uint *)0x0) {
            *(undefined1 *)puVar5 = 0;
            *puVar5 = *puVar5 & 0xff;
          }
          puVar1 = (undefined8 *)((longlong)puVar5 + (*param_1 - (longlong)puVar6));
          uVar4 = puVar1[1];
          *(undefined8 *)puVar5 = *puVar1;
          *(undefined8 *)(puVar5 + 2) = uVar4;
          puVar5 = puVar5 + 4;
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_145090eca;
    }
  }
  else {
    puVar6 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var7);
    if (puVar6 != (uint *)0x0) {
LAB_145090eca:
      *param_1 = (longlong)puVar6;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145090ef0 FUN_145090ef0 body=91 status=ok
// SIG undefined FUN_145090ef0(void)

uint * FUN_145090ef0(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar4 = (uint *)*param_1;
  puVar3 = puVar4 + (ulonglong)*(uint *)(param_1 + 1) * 4;
  if (puVar4 != puVar3) {
    do {
      uVar1 = *puVar4;
      if ((((uVar1 & 0xff) == (param_2 & 0xff)) && (((uVar1 ^ param_2) & 0xf00) == 0)) &&
         (((uVar1 ^ param_2) & 0xfffff000) == 0)) break;
      puVar4 = puVar4 + 4;
    } while (puVar4 != puVar3);
  }
  puVar2 = puVar4 + 2;
  if (puVar4 == puVar3) {
    puVar2 = (uint *)0x0;
  }
  return puVar2;
}



// FUNCTION 145090f50 FUN_145090f50 body=229 status=ok
// SIG undefined FUN_145090f50(void)

undefined8 FUN_145090f50(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar6 = (ulonglong)*(uint *)(param_1 + 1);
  iVar2 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar2 = 1;
  }
  pvVar3 = AK::MemoryMgr::Malloc(0,(ulonglong)(iVar2 + uVar1) * 0x18);
  if (pvVar3 != (void *)0x0) {
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar3)) {
      if (uVar6 != 0) {
        puVar5 = (undefined8 *)((longlong)pvVar3 + 8);
        do {
          if (puVar5 + -1 != (undefined8 *)0x0) {
            *puVar5 = 0;
            puVar5[1] = 0;
          }
          puVar4 = (undefined4 *)((longlong)puVar5 + *param_1 + (-8 - (longlong)pvVar3));
          *(undefined4 *)(puVar5 + -1) = *puVar4;
          FUN_145096fa0(puVar5,puVar4 + 2);
          puVar5 = puVar5 + 3;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
    *param_1 = (longlong)pvVar3;
    *(uint *)((longlong)param_1 + 0xc) = iVar2 + uVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 145091040 FUN_145091040 body=210 status=ok
// SIG undefined FUN_145091040(void)

undefined8 FUN_145091040(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint *puVar6;
  __uint64 _Var7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar8 = (ulonglong)*(uint *)(param_1 + 1);
  iVar3 = (uVar2 >> 1) + uVar2;
  if (uVar2 == 0) {
    iVar3 = 1;
  }
  _Var7 = (ulonglong)(iVar3 + uVar2) << 4;
  if ((void *)*param_1 == (void *)0x0) {
    puVar6 = AK::MemoryMgr::Malloc(0,_Var7);
    if (puVar6 != (uint *)0x0) {
      if (((uint *)*param_1 != (uint *)0x0) && (puVar5 = puVar6, (uint *)*param_1 != puVar6)) {
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          if (puVar5 != (uint *)0x0) {
            *(undefined1 *)puVar5 = 0;
            *puVar5 = *puVar5 & 0xff;
            *(undefined1 *)(puVar5 + 1) = 0;
            puVar5[1] = puVar5[1] & 0xff;
          }
          puVar1 = (undefined8 *)((longlong)puVar5 + (*param_1 - (longlong)puVar6));
          uVar4 = puVar1[1];
          *(undefined8 *)puVar5 = *puVar1;
          *(undefined8 *)(puVar5 + 2) = uVar4;
          puVar5 = puVar5 + 4;
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1450910f5;
    }
  }
  else {
    puVar6 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var7);
    if (puVar6 != (uint *)0x0) {
LAB_1450910f5:
      *param_1 = (longlong)puVar6;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145091120 FUN_145091120 body=130 status=ok
// SIG undefined FUN_145091120(void)

uint * FUN_145091120(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uStackX_14;
  
  puVar5 = (uint *)*param_1;
  puVar3 = puVar5 + (ulonglong)*(uint *)(param_1 + 1) * 4;
  uVar4 = (uint)param_2;
  if (puVar5 != puVar3) {
    uStackX_14 = (uint)((ulonglong)param_2 >> 0x20);
    do {
      uVar1 = *puVar5;
      if (((((uVar1 & 0xff) == (uVar4 & 0xff)) && (((uVar1 ^ uVar4) & 0xf00) == 0)) &&
          (((uVar1 ^ uVar4) & 0xfffff000) == 0)) &&
         (((uVar1 = puVar5[1], (char)uVar1 == (char)((ulonglong)param_2 >> 0x20) &&
           (((uVar1 ^ uStackX_14) & 0xf00) == 0)) && (((uVar1 ^ uStackX_14) & 0xfffff000) == 0))))
      break;
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar3);
  }
  puVar2 = puVar5 + 2;
  if (puVar5 == puVar3) {
    puVar2 = (uint *)0x0;
  }
  return puVar2;
}



// FUNCTION 1450911b0 FUN_1450911b0 body=70 status=ok
// SIG undefined FUN_1450911b0(void)

void FUN_1450911b0(void)

{
  DAT_14c79beb8 = 0;
  DAT_14c79bec0 = 0;
  DAT_14c79bec8 = 0;
  DAT_14c79bed0 = 0;
  DAT_14c79bed8 = 0;
  DAT_14c79bee0 = 0;
  DAT_14c79bee8 = 0;
  DAT_14c79bef0 = 0;
  DAT_14c79bef8 = 0;
  DAT_14c79bf00 = 0;
  DAT_14c79bf08 = 0;
  DAT_14c79bf10 = 0;
  DAT_14c79bf18 = 0;
  DAT_14c79bf20 = 0;
  DAT_14c79bf28 = 0;
  DAT_14c79bf30 = 0;
  DAT_14c79bf38 = 0;
  DAT_14c79bf40 = 0;
  return;
}



// FUNCTION 145091200 FUN_145091200 body=482 status=ok
// SIG undefined FUN_145091200(void)

void FUN_145091200(void)

{
  if (DAT_14c79beb8 != (void *)0x0) {
    AK::MemoryMgr::Free(0,DAT_14c79beb8);
    DAT_14c79beb8 = (void *)0x0;
  }
  if (DAT_14c79bee8 != (void *)0x0) {
    AK::MemoryMgr::Free(0,DAT_14c79bee8);
    DAT_14c79bee8 = (void *)0x0;
  }
  if (DAT_14c79bf18 != (void *)0x0) {
    AK::MemoryMgr::Free(0,DAT_14c79bf18);
    DAT_14c79bf18 = (void *)0x0;
  }
  if (DAT_14c79bec0 != (void *)0x0) {
    AK::MemoryMgr::Free(0,DAT_14c79bec0);
    DAT_14c79bec0 = (void *)0x0;
  }
  if (DAT_14c79bef0 != (void *)0x0) {
    AK::MemoryMgr::Free(0,DAT_14c79bef0);
    DAT_14c79bef0 = (void *)0x0;
  }
  if (DAT_14c79bf20 != (void *)0x0) {
    AK::MemoryMgr::Free(0,DAT_14c79bf20);
    DAT_14c79bf20 = (void *)0x0;
  }
  if (DAT_14c79bec8 != (void *)0x0) {
    AK::MemoryMgr::Free(0,DAT_14c79bec8);
    DAT_14c79bec8 = (void *)0x0;
  }
  if (DAT_14c79bef8 != (void *)0x0) {
    AK::MemoryMgr::Free(0,DAT_14c79bef8);
    DAT_14c79bef8 = (void *)0x0;
  }
  if (DAT_14c79bf28 != (void *)0x0) {
    AK::MemoryMgr::Free(0,DAT_14c79bf28);
    DAT_14c79bf28 = (void *)0x0;
  }
  if (DAT_14c79bed0 != (void *)0x0) {
    AK::MemoryMgr::Free(0,DAT_14c79bed0);
    DAT_14c79bed0 = (void *)0x0;
  }
  if (DAT_14c79bf00 != (void *)0x0) {
    AK::MemoryMgr::Free(0,DAT_14c79bf00);
    DAT_14c79bf00 = (void *)0x0;
  }
  if (DAT_14c79bf30 != (void *)0x0) {
    AK::MemoryMgr::Free(0,DAT_14c79bf30);
    DAT_14c79bf30 = (void *)0x0;
  }
  if (DAT_14c79bed8 != (void *)0x0) {
    AK::MemoryMgr::Free(0,DAT_14c79bed8);
    DAT_14c79bed8 = (void *)0x0;
  }
  if (DAT_14c79bf08 != (void *)0x0) {
    AK::MemoryMgr::Free(0,DAT_14c79bf08);
    DAT_14c79bf08 = (void *)0x0;
  }
  if (DAT_14c79bf38 != (void *)0x0) {
    AK::MemoryMgr::Free(0,DAT_14c79bf38);
    DAT_14c79bf38 = (void *)0x0;
  }
  if (DAT_14c79bee0 != (void *)0x0) {
    AK::MemoryMgr::Free(0,DAT_14c79bee0);
    DAT_14c79bee0 = (void *)0x0;
  }
  if (DAT_14c79bf10 != (void *)0x0) {
    AK::MemoryMgr::Free(0,DAT_14c79bf10);
    DAT_14c79bf10 = (void *)0x0;
  }
  if (DAT_14c79bf40 != (void *)0x0) {
    AK::MemoryMgr::Free(0,DAT_14c79bf40);
    DAT_14c79bf40 = (void *)0x0;
  }
  return;
}



// FUNCTION 1450913f0 FUN_1450913f0 body=987 status=ok
// SIG undefined FUN_1450913f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1450913f0(undefined8 *param_1,char param_2,byte param_3,undefined4 param_4,longlong param_5
                  ,undefined8 param_6)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  float *pfVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  ulonglong uVar16;
  float fVar17;
  undefined8 auStack_d0 [5];
  longlong alStack_a8 [4];
  undefined4 local_88 [10];
  undefined1 local_60 [56];
  
  uVar11 = 0;
  if (param_2 == '\x01') {
    *param_1 = 0;
    param_1[1] = 0x3f800000;
    param_1[2] = 0x3f800000;
  }
  uVar8 = (ulonglong)param_3 * 0x10 + 0xf;
  if (uVar8 <= (ulonglong)param_3 * 0x10) {
    uVar8 = 0xffffffffffffff0;
  }
  auStack_d0[0] = 0x145091463;
  lVar3 = -(uVar8 & 0xfffffffffffffff0);
  lVar1 = (longlong)local_88 + lVar3;
  uVar12 = (uint)param_3;
  if (param_3 < 4) {
    uVar8 = uVar11;
    uVar16 = uVar11;
    if (param_3 == 0) goto LAB_1450915ca;
  }
  else {
    uVar8 = uVar11;
    puVar14 = (undefined4 *)(&DAT_149c26078 + (ulonglong)(param_3 - 1) * 0x54);
    do {
      iVar4 = (int)uVar8;
      uVar13 = iVar4 * 4;
      *(undefined4 *)(lVar1 + (ulonglong)uVar13 * 4) = puVar14[-2];
      *(undefined4 *)(lVar1 + (ulonglong)(uVar13 + 1) * 4) = puVar14[-1];
      *(undefined4 *)(lVar1 + (ulonglong)(uVar13 + 2) * 4) = *puVar14;
      *(undefined4 *)(lVar1 + (ulonglong)(uVar13 + 3) * 4) = 0;
      *(undefined4 *)(lVar1 + (ulonglong)(uVar13 + 4) * 4) = puVar14[1];
      *(undefined4 *)(lVar1 + (ulonglong)(uVar13 + 5) * 4) = puVar14[2];
      *(undefined4 *)(lVar1 + (ulonglong)(uVar13 + 6) * 4) = puVar14[3];
      *(undefined4 *)(lVar1 + (ulonglong)(uVar13 + 7) * 4) = 0;
      *(undefined4 *)(lVar1 + (ulonglong)(iVar4 * 4 + 8) * 4) = puVar14[4];
      *(undefined4 *)(lVar1 + (ulonglong)(uVar13 + 9) * 4) = puVar14[5];
      *(undefined4 *)(lVar1 + (ulonglong)(uVar13 + 10) * 4) = puVar14[6];
      uVar15 = iVar4 + 4;
      uVar8 = (ulonglong)uVar15;
      *(undefined4 *)(lVar1 + (ulonglong)(uVar13 + 0xb) * 4) = 0;
      *(undefined4 *)(lVar1 + (ulonglong)(iVar4 * 4 + 0xc) * 4) = puVar14[7];
      *(undefined4 *)(lVar1 + (ulonglong)(uVar13 + 0xd) * 4) = puVar14[8];
      *(undefined4 *)(lVar1 + (ulonglong)(uVar13 + 0xe) * 4) = puVar14[9];
      *(undefined4 *)(lVar1 + (ulonglong)(uVar13 + 0xf) * 4) = 0;
      puVar14 = puVar14 + 0xc;
    } while (uVar15 < param_3 - 3);
    uVar16 = (ulonglong)((param_3 - 4 >> 2) + 1) << 2;
    if (uVar12 <= uVar15) goto LAB_1450915ca;
  }
  puVar14 = (undefined4 *)(&DAT_149c26078 + ((ulonglong)(param_3 - 1) * 7 + uVar16) * 0xc);
  do {
    uVar13 = (int)uVar8 * 4;
    *(undefined4 *)(lVar1 + (ulonglong)uVar13 * 4) = puVar14[-2];
    *(undefined4 *)(lVar1 + (ulonglong)(uVar13 + 1) * 4) = puVar14[-1];
    uVar15 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar15;
    *(undefined4 *)(lVar1 + (ulonglong)(uVar13 + 2) * 4) = *puVar14;
    *(undefined4 *)(lVar1 + (ulonglong)(uVar13 + 3) * 4) = 0;
    puVar14 = puVar14 + 3;
  } while (uVar15 < uVar12);
LAB_1450915ca:
  if ((param_3 & 3) == 0) {
    *(undefined8 *)((longlong)auStack_d0 + lVar3) = 0x1450915e0;
    FUN_14509a280(param_1,local_88,local_60);
    *(undefined8 *)((longlong)alStack_a8 + lVar3 + 0x10) = param_6;
    *(longlong *)((longlong)alStack_a8 + lVar3 + 8) = param_5;
    *(undefined4 **)((longlong)alStack_a8 + lVar3) = local_88;
    *(undefined8 *)((longlong)auStack_d0 + lVar3) = 0x145091613;
    FUN_14509b0e0(lVar1,uVar12,param_4,local_60);
  }
  else {
    *(undefined8 *)((longlong)auStack_d0 + lVar3) = 0x145091622;
    FUN_14509a280(param_1,local_60,local_88);
    *(undefined8 *)((longlong)alStack_a8 + lVar3 + 0x10) = param_6;
    *(longlong *)((longlong)alStack_a8 + lVar3 + 8) = param_5;
    *(undefined1 **)((longlong)alStack_a8 + lVar3) = local_60;
    *(undefined8 *)((longlong)auStack_d0 + lVar3) = 0x145091655;
    FUN_14509a870(lVar1,uVar12,param_4,local_88);
  }
  fVar17 = SQRT(*(float *)(param_1 + 3) * *(float *)(param_1 + 3) +
                *(float *)((longlong)param_1 + 0x1c) * *(float *)((longlong)param_1 + 0x1c) +
                *(float *)(param_1 + 4) * *(float *)(param_1 + 4));
  if ((1.1920929e-07 <= fVar17) && (uVar12 = (uint)param_3 * 4, param_3 != 0)) {
    if (0xf < uVar12) {
      uVar13 = 8;
      uVar8 = uVar11;
      do {
        uVar10 = (int)uVar8 + 0x10;
        uVar11 = (ulonglong)uVar10;
        pfVar9 = (float *)(param_5 + uVar8 * 4);
        fVar5 = pfVar9[1];
        fVar6 = pfVar9[2];
        fVar7 = pfVar9[3];
        pfVar2 = (float *)(param_5 + uVar8 * 4);
        *pfVar2 = *pfVar9 * fVar17;
        pfVar2[1] = fVar5 * fVar17;
        pfVar2[2] = fVar6 * fVar17;
        pfVar2[3] = fVar7 * fVar17;
        pfVar9 = (float *)(param_5 + (ulonglong)(uVar13 - 4) * 4);
        fVar5 = pfVar9[1];
        fVar6 = pfVar9[2];
        fVar7 = pfVar9[3];
        pfVar2 = (float *)(param_5 + (ulonglong)(uVar13 - 4) * 4);
        *pfVar2 = *pfVar9 * fVar17;
        pfVar2[1] = fVar5 * fVar17;
        pfVar2[2] = fVar6 * fVar17;
        pfVar2[3] = fVar7 * fVar17;
        pfVar9 = (float *)(param_5 + (ulonglong)uVar13 * 4);
        fVar5 = pfVar9[1];
        fVar6 = pfVar9[2];
        fVar7 = pfVar9[3];
        pfVar2 = (float *)(param_5 + (ulonglong)uVar13 * 4);
        *pfVar2 = fVar17 * *pfVar9;
        pfVar2[1] = fVar17 * fVar5;
        pfVar2[2] = fVar17 * fVar6;
        pfVar2[3] = fVar17 * fVar7;
        uVar15 = uVar13 + 4;
        uVar13 = uVar13 + 0x10;
        pfVar9 = (float *)(param_5 + (ulonglong)uVar15 * 4);
        fVar5 = pfVar9[1];
        fVar6 = pfVar9[2];
        fVar7 = pfVar9[3];
        pfVar2 = (float *)(param_5 + (ulonglong)uVar15 * 4);
        *pfVar2 = *pfVar9 * fVar17;
        pfVar2[1] = fVar5 * fVar17;
        pfVar2[2] = fVar6 * fVar17;
        pfVar2[3] = fVar7 * fVar17;
        uVar8 = uVar11;
      } while (uVar10 < (uVar12 & 0xfffffff0));
    }
    uVar13 = (uint)uVar11;
    if (uVar13 < uVar12) {
      if (3 < uVar12 - uVar13) {
        lVar1 = uVar11 + 2;
        uVar15 = ((uVar12 - uVar13) - 4 >> 2) + 1;
        uVar8 = (ulonglong)uVar15;
        uVar13 = uVar13 + uVar15 * 4;
        uVar11 = uVar11 + (ulonglong)uVar15 * 4;
        pfVar9 = (float *)(param_5 + lVar1 * 4);
        do {
          pfVar9[-2] = fVar17 * pfVar9[-2];
          pfVar9[-1] = fVar17 * pfVar9[-1];
          *pfVar9 = fVar17 * *pfVar9;
          pfVar9[1] = fVar17 * pfVar9[1];
          uVar8 = uVar8 - 1;
          pfVar9 = pfVar9 + 4;
        } while (uVar8 != 0);
        if (uVar12 <= uVar13) {
          return;
        }
      }
      uVar8 = (ulonglong)(uVar12 - uVar13);
      pfVar9 = (float *)(param_5 + uVar11 * 4);
      do {
        *pfVar9 = fVar17 * *pfVar9;
        uVar8 = uVar8 - 1;
        pfVar9 = pfVar9 + 1;
      } while (uVar8 != 0);
    }
  }
  return;
}



// FUNCTION 1450917d0 FUN_1450917d0 body=521 status=ok
// SIG undefined FUN_1450917d0(void)

undefined4
FUN_1450917d0(undefined8 *param_1,ulonglong param_2,uint param_3,longlong param_4,void *param_5)

{
  ulonglong uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar5 = (uint)param_2;
  if ((param_3 & 0xf00) == 0x300) {
    return 0x1f;
  }
  if (*(char *)((longlong)param_1 + 0x44) == '\0') {
    FUN_145093d40(*(undefined4 *)((longlong)param_1 + 0x34),*(undefined4 *)(param_1 + 7),
                  *(undefined4 *)((longlong)param_1 + 0x3c),*(undefined4 *)(param_1 + 6),
                  *(undefined1 *)((longlong)param_1 + 0x45),uVar5,param_3,param_5,param_4);
  }
  else {
    if (param_4 == 0) {
      return 2;
    }
    uVar1 = param_2 >> 0xc;
    uVar2 = uVar5;
    if ((uVar5 & 0xf00) == 0x100) {
      bVar3 = 0;
      uVar6 = (uint)uVar1 & 0x637;
      uVar2 = uVar6;
      bVar4 = 0;
      if ((uVar1 & 0x637) != 0) {
        do {
          bVar3 = bVar3 + 1;
          uVar2 = uVar2 & uVar2 - 1;
          bVar4 = bVar3;
        } while (uVar2 != 0);
      }
      uVar2 = uVar6 << 0xc | (uint)bVar4 | 0x100;
    }
    uVar6 = (param_3 & 0xff) + 7 >> 3;
    iVar7 = uVar6 * (uVar5 & 0xff);
    memset(param_5,0,(ulonglong)(uint)(iVar7 * 0x20));
    if ((char)uVar2 != '\0') {
      local_60 = *param_1;
      uStack_58 = param_1[1];
      local_50 = param_1[2];
      uStack_48 = *(undefined4 *)(param_1 + 3);
      uStack_44 = *(undefined4 *)((longlong)param_1 + 0x1c);
      local_40 = *(undefined4 *)(param_1 + 4);
      uStack_3c = *(undefined4 *)((longlong)param_1 + 0x24);
      uStack_38 = *(undefined4 *)(param_1 + 5);
      uStack_34 = *(undefined4 *)((longlong)param_1 + 0x2c);
      if (*(char *)((longlong)param_1 + 0x44) == '\x01') {
        local_60 = 0;
        uStack_58 = 0x3f800000;
        local_50 = 0x3f800000;
      }
      FUN_14507b5c0(param_1 + 6,&local_60,1,param_2 & 0xffffffff,uVar2,param_3,iVar7 * 8,param_4,
                    param_5);
    }
    if (((uVar1 & 8) != 0) && ((param_3 & 0x8000) != 0)) {
      *(undefined4 *)
       ((longlong)param_5 +
       ((ulonglong)(((uVar5 & 0xff) - 1) * uVar6 * 8) + (ulonglong)((param_3 & 0xff) - 1)) * 4) =
           0x3f800000;
    }
  }
  return 1;
}



// FUNCTION 1450919e0 FUN_1450919e0 body=53 status=ok
// SIG undefined FUN_1450919e0(void)

void FUN_1450919e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_145093d40(0,0,0,param_3,0,param_1,param_2,param_4,0);
  return;
}



// FUNCTION 145091a20 FUN_145091a20 body=8986 status=ok
// SIG undefined FUN_145091a20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145091a20(undefined8 param_1,undefined8 param_2,float param_3,float param_4,
                  undefined4 *param_5,uint param_6,float param_7,uint param_8,longlong param_9)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined *puVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  float *pfVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  undefined1 (*pauVar20) [16];
  uint uVar21;
  ulonglong uVar22;
  byte bVar23;
  float fVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  undefined1 *puVar29;
  longlong lVar30;
  uint uVar31;
  longlong lVar32;
  undefined1 (*pauVar33) [16];
  undefined1 *puVar34;
  undefined1 *puVar35;
  undefined1 *puVar36;
  undefined1 *puVar37;
  undefined1 *puVar38;
  uint uVar39;
  longlong lVar40;
  float *pfVar41;
  uint uVar42;
  ulonglong uVar43;
  size_t sVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  longlong lVar47;
  uint uVar48;
  ulonglong uVar49;
  void *pvVar50;
  undefined4 *puVar51;
  float fVar52;
  undefined1 *puVar53;
  undefined1 in_XMM1 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined8 uStack_150;
  undefined1 auStack_148 [32];
  float afStack_128 [2];
  longlong lStack_120;
  float local_118;
  float afStack_114 [2];
  float fStack_10c;
  uint local_108;
  float *local_100;
  undefined4 *local_f8;
  ulonglong uStack_f0;
  undefined8 local_e8;
  uint *puStack_e0;
  longlong local_d8;
  float local_d0;
  undefined *local_c8;
  undefined1 *local_c0;
  
  uVar48 = param_8;
  puVar35 = auStack_148;
  puVar37 = auStack_148;
  uVar39 = param_8 & 0xf00;
  fVar70 = in_XMM1._0_4_;
  uVar21 = param_8;
  if (uVar39 == 0x100) {
    bVar23 = 0;
    uVar31 = param_8 >> 0xc & 0xffff7;
    for (uVar21 = uVar31; uVar21 != 0; uVar21 = uVar21 & uVar21 - 1) {
      bVar23 = bVar23 + 1;
    }
    uVar21 = uVar31 << 0xc | (uint)bVar23 | 0x100;
  }
  fVar24 = (float)(uVar21 & 0xff);
  fStack_10c = (float)(param_6 >> 0xc & (uint)param_7);
  fVar52 = (float)(param_6 & 0xff);
  uVar31 = param_6 & 0xff;
  if ((uint)fVar24 < 2) {
    if (fVar24 == 1.4013e-45) {
      if ((param_6 & 0xf00) == 0x200) {
        *param_5 = 0x3f800000;
      }
      else {
        uVar22 = 0;
        do {
          if ((*(uint *)(&DAT_14c72ece0 + (uVar22 + (ulonglong)((param_6 & 0xff) - 1) * 8) * 4) &
               (uint)param_7 & 0xffff) != 0) {
            param_5[((param_8 & 0xff) + 7 & 0xfffffff8) *
                    (*(uint *)(&DAT_14c72ece0 + (uVar22 + (ulonglong)((param_6 & 0xff) - 1) * 8) * 4
                              ) >> 0x10)] = 0x3f800000;
          }
          uVar48 = (int)uVar22 + 1;
          uVar22 = (ulonglong)uVar48;
        } while (uVar48 < uVar31);
      }
    }
  }
  else {
    local_108 = uVar21;
    if (((param_6 & 0xf00) == 0) || (uVar39 == 0)) {
      uStack_150 = 0x145093cd4;
      FUN_145096cb0(param_6,param_8,param_5);
    }
    else {
      bVar23 = (byte)param_8;
      if ((param_6 & 0xf00) == 0x200) {
        uVar22 = (ulonglong)uVar31;
        if (uVar39 == 0x200) {
          uVar22 = (ulonglong)uVar31;
          if ((param_8 & 0xff) < uVar31) {
            uVar22 = (ulonglong)(param_8 & 0xff);
          }
        }
        if (param_3 <= 0.0) {
          param_3 = 0.0;
        }
        uVar49 = (ulonglong)(char)(&DAT_149c256b0)[uVar22];
        uVar48 = *(uint *)(&DAT_14c72ec88 + uVar49 * 4);
        uVar45 = (ulonglong)uVar48;
        iVar14 = (char)(&DAT_149c256b0)[uVar22] + 2;
        local_118 = (float)(iVar14 * iVar14);
        uVar22 = uVar45 * 0x10 + 0xf;
        if (uVar22 <= uVar45 * 0x10) {
          uVar22 = 0xffffffffffffff0;
        }
        uStack_150 = 0x145091c2e;
        puVar9 = (&PTR_DAT_14c72ec60)[uVar49];
        lVar30 = -(uVar22 & 0xfffffffffffffff0);
        pfVar41 = (float *)((longlong)&local_118 + lVar30);
        puStack_e0 = (uint *)uVar49;
        *(float **)((longlong)afStack_128 + lVar30) = pfVar41;
        *(undefined8 *)(auStack_148 + lVar30 + -8) = 0x145091c51;
        FUN_14509b500(puVar9,uVar48,param_1);
        fVar70 = param_3 * 0.5 * param_3 + 0.5;
        *(undefined8 *)(auStack_148 + lVar30 + -8) = 0x145091c73;
        pfVar17 = (float *)FUN_145094ce0(uVar49 & 0xffffffff);
        local_100 = pfVar17;
        if (pfVar17 != (float *)0x0) {
          if (uVar39 == 0x200) {
            uVar39 = uVar48 + 7 >> 3;
            uVar21 = uVar39 * (int)local_118 * 0x20;
            uVar22 = (ulonglong)uVar21 + 0xf;
            if (uVar22 <= uVar21) {
              uVar22 = 0xffffffffffffff0;
            }
            *(undefined8 *)(auStack_148 + lVar30 + -8) = 0x145091cc3;
            lVar47 = -(uVar22 & 0xfffffffffffffff0);
            lVar40 = (longlong)&local_118 + lVar47 + lVar30;
            uStack_f0 = lVar40;
            if (uVar48 != 0) {
              lVar32 = (longlong)afStack_114 + lVar30;
              uVar22 = uVar45;
              do {
                uVar6 = *(undefined4 *)(lVar32 + -4);
                *(longlong *)((longlong)&lStack_120 + lVar47 + lVar30) = lVar40;
                *(uint *)((longlong)afStack_128 + lVar47 + lVar30) = uVar48;
                *(undefined8 *)(auStack_148 + lVar47 + lVar30 + -8) = 0x145091d12;
                FUN_145099420(uVar6);
                lVar40 = lVar40 + 4;
                lVar32 = lVar32 + 0x10;
                uVar22 = uVar22 - 1;
              } while (uVar22 != 0);
            }
            uVar21 = uVar39 << 5;
            iVar14 = 0;
            fVar24 = 0.0;
            local_108 = uVar21;
            if (local_118 != 0.0) {
              param_7 = 1.4013e-45;
              puVar53 = auStack_148 + lVar47 + lVar30;
              do {
                if ((0xb < (uint)fVar52) ||
                   (puVar34 = puVar53,
                   (*(uint *)(&DAT_149c256d8 + (ulonglong)((int)fVar52 - 1) * 4) & (uint)param_7) ==
                   0)) {
                  fVar62 = SQRT(fVar70) / (float)uVar45;
                  puVar29 = (undefined1 *)
                            ((ulonglong)((int)fVar24 * uVar48) * 4 + (longlong)pfVar17);
                  uVar22 = (ulonglong)uVar21 + 0xf;
                  if (uVar22 <= uVar21) {
                    uVar22 = 0xffffffffffffff0;
                  }
                  *(undefined8 *)(puVar53 + -8) = 0x145091dbb;
                  puVar34 = puVar53 + -(uVar22 & 0xfffffffffffffff0);
                  uVar49 = 0;
                  puVar53 = puVar53 + -(uVar22 & 0xfffffffffffffff0) + 0x30;
                  if (uVar48 != 0) {
                    if ((0xf < uVar48) &&
                       ((puVar29 + (ulonglong)(uVar48 - 1) * 4 < puVar53 ||
                        (puVar53 + (ulonglong)(uVar48 - 1) * 4 < puVar29)))) {
                      uVar21 = 8;
                      do {
                        pfVar41 = (float *)(puVar29 + uVar49 * 4);
                        fVar63 = pfVar41[1];
                        fVar64 = pfVar41[2];
                        fVar66 = pfVar41[3];
                        pfVar17 = (float *)(puVar53 + uVar49 * 4);
                        *pfVar17 = *pfVar41 * fVar62;
                        pfVar17[1] = fVar63 * fVar62;
                        pfVar17[2] = fVar64 * fVar62;
                        pfVar17[3] = fVar66 * fVar62;
                        uVar42 = (int)uVar49 + 0x10;
                        uVar49 = (ulonglong)uVar42;
                        pfVar41 = (float *)(puVar29 + (ulonglong)(uVar21 - 4) * 4);
                        fVar63 = pfVar41[1];
                        fVar64 = pfVar41[2];
                        fVar66 = pfVar41[3];
                        pfVar17 = (float *)(puVar53 + (ulonglong)(uVar21 - 4) * 4);
                        *pfVar17 = *pfVar41 * fVar62;
                        pfVar17[1] = fVar63 * fVar62;
                        pfVar17[2] = fVar64 * fVar62;
                        pfVar17[3] = fVar66 * fVar62;
                        pfVar41 = (float *)(puVar29 + (ulonglong)uVar21 * 4);
                        fVar63 = pfVar41[1];
                        fVar64 = pfVar41[2];
                        fVar66 = pfVar41[3];
                        pfVar17 = (float *)(puVar53 + (ulonglong)uVar21 * 4);
                        *pfVar17 = *pfVar41 * fVar62;
                        pfVar17[1] = fVar63 * fVar62;
                        pfVar17[2] = fVar64 * fVar62;
                        pfVar17[3] = fVar66 * fVar62;
                        uVar31 = uVar21 + 4;
                        uVar21 = uVar21 + 0x10;
                        pfVar41 = (float *)(puVar29 + (ulonglong)uVar31 * 4);
                        fVar63 = pfVar41[1];
                        fVar64 = pfVar41[2];
                        fVar66 = pfVar41[3];
                        pfVar17 = (float *)(puVar53 + (ulonglong)uVar31 * 4);
                        *pfVar17 = *pfVar41 * fVar62;
                        pfVar17[1] = fVar63 * fVar62;
                        pfVar17[2] = fVar64 * fVar62;
                        pfVar17[3] = fVar66 * fVar62;
                      } while (uVar42 < (uVar48 & 0xfffffff0));
                    }
                    uVar21 = (uint)uVar49;
                    if (uVar21 < uVar48) {
                      lVar30 = (longlong)puVar29 - (longlong)puVar53;
                      if (3 < uVar48 - uVar21) {
                        lVar40 = uVar49 + 1;
                        uVar31 = ((uVar48 - uVar21) - 4 >> 2) + 1;
                        uVar22 = (ulonglong)uVar31;
                        uVar21 = uVar21 + uVar31 * 4;
                        uVar49 = uVar49 + (ulonglong)uVar31 * 4;
                        pfVar41 = (float *)(puVar53 + lVar40 * 4);
                        do {
                          pfVar41[-1] = fVar62 * *(float *)((longlong)pfVar41 + lVar30 + -4);
                          *pfVar41 = fVar62 * *(float *)((longlong)pfVar41 + lVar30);
                          pfVar41[1] = fVar62 * *(float *)((longlong)pfVar41 + lVar30 + 4);
                          pfVar41[2] = fVar62 * *(float *)((longlong)pfVar41 + lVar30 + 8);
                          uVar22 = uVar22 - 1;
                          pfVar41 = pfVar41 + 4;
                        } while (uVar22 != 0);
                        if (uVar48 <= uVar21) goto LAB_145091efc;
                      }
                      uVar22 = (ulonglong)(uVar48 - uVar21);
                      pfVar41 = (float *)(puVar53 + uVar49 * 4);
                      do {
                        *pfVar41 = fVar62 * *(float *)(lVar30 + -4 + (longlong)(pfVar41 + 1));
                        uVar22 = uVar22 - 1;
                        pfVar41 = pfVar41 + 1;
                      } while (uVar22 != 0);
                    }
                  }
LAB_145091efc:
                  pfVar41 = (float *)(param_5 + ((param_8 & 0xff) + 7 & 0xfffffff8) * iVar14);
                  fVar62 = 0.0;
                  do {
                    fVar63 = 0.0;
                    fVar64 = 0.0;
                    fVar66 = 0.0;
                    fVar68 = 0.0;
                    pfVar17 = (float *)(uStack_f0 + (ulonglong)(uVar39 * (int)fVar62 * 8) * 4);
                    lVar30 = (longlong)puVar53 - (longlong)pfVar17;
                    pfVar1 = pfVar17 + uVar45;
                    do {
                      fVar65 = *pfVar17;
                      pfVar10 = pfVar17 + 1;
                      pfVar11 = pfVar17 + 2;
                      pfVar12 = pfVar17 + 3;
                      pfVar2 = (float *)(lVar30 + (longlong)pfVar17);
                      pfVar17 = pfVar17 + 4;
                      fVar63 = fVar63 + *pfVar2 * fVar65;
                      fVar64 = fVar64 + pfVar2[1] * *pfVar10;
                      fVar66 = fVar66 + pfVar2[2] * *pfVar11;
                      fVar68 = fVar68 + pfVar2[3] * *pfVar12;
                    } while (pfVar17 < pfVar1);
                    fVar62 = (float)((int)fVar62 + 1);
                    *pfVar41 = fVar68 + fVar66 + fVar64 + fVar63;
                    pfVar41 = pfVar41 + 1;
                  } while ((uint)fVar62 < (uint)local_118);
                  iVar14 = iVar14 + 1;
                  pfVar17 = local_100;
                  uVar21 = local_108;
                }
                param_7 = (float)((int)param_7 << 1 | (uint)((int)param_7 < 0));
                fVar24 = (float)((int)fVar24 + 1);
                puVar53 = puVar34;
              } while ((uint)fVar24 < (uint)local_118);
            }
          }
          else if (param_9 != 0) {
            *(undefined8 *)(auStack_148 + lVar30 + -8) = 0x145091fd4;
            puVar18 = (undefined4 *)FUN_145090710(param_9,uVar21);
            local_f8 = puVar18;
            if (puVar18 != (undefined4 *)0x0) {
              afStack_114[1] = (float)(param_8 & 0xff9c0000);
              local_108 = (int)fVar24 + 7U;
              afStack_114[0] = (float)((int)fVar24 + 7U >> 3);
              iVar14 = (int)afStack_114[0] * uVar48;
              uVar39 = iVar14 * 0x20;
              uVar22 = (ulonglong)uVar39 + 0xf;
              if (uVar22 <= uVar39) {
                uVar22 = 0xffffffffffffff0;
              }
              *(undefined8 *)(auStack_148 + lVar30 + -8) = 0x14509202b;
              lVar40 = -(uVar22 & 0xfffffffffffffff0);
              uVar39 = iVar14 * 8;
              pvVar50 = (void *)((longlong)&local_118 + lVar40 + lVar30);
              if (uVar39 != 0) {
                *(undefined8 *)(auStack_148 + lVar40 + lVar30 + -8) = 0x14509204f;
                memset(pvVar50,0,(ulonglong)uVar39 << 2);
                puVar18 = local_f8;
              }
              fVar70 = (1.0 / (float)uVar45) * fVar70;
              if (afStack_114[1] == 0.0) {
                if (((uVar21 & 0xfffff000) == 0x3000) && (*(char *)(param_9 + 0x30) == '\x01')) {
                  uVar21 = 0;
                  if (uVar48 != 0) {
                    uVar39 = param_8 & 0xff;
                    uVar22 = (ulonglong)(uVar39 + 7) & 0xfffffff8;
                    uStack_f0 = uVar22;
                    do {
                      uVar49 = 0;
                      fVar62 = *pfVar41;
                      auVar55 = ZEXT416((uint)fVar62);
                      uVar31 = (int)afStack_114[0] * uVar21 * 8;
                      uVar46 = (ulonglong)uVar31;
                      pauVar33 = (undefined1 (*) [16])((longlong)pvVar50 + (ulonglong)uVar31 * 4);
                      fVar62 = (fVar62 * 0.5 + 0.70710677) - fVar62 * 0.20710677 * fVar62;
                      fVar62 = fVar62 * fVar62;
                      if (1.0 < fVar62) {
                        fVar63 = 0.0;
                      }
                      else {
                        fVar63 = 1.0 - fVar62;
                      }
                      fVar64 = *(float *)((longlong)*pauVar33 + 4);
                      *(float *)*pauVar33 = fVar63 + *(float *)*pauVar33;
                      *(float *)((longlong)*pauVar33 + 4) = fVar62 + fVar64;
                      if (uVar39 != 0) {
                        if (0xf < uVar39) {
                          uVar31 = 8;
                          do {
                            pfVar17 = (float *)((longlong)*pauVar33 + uVar49 * 4);
                            fVar62 = pfVar17[1];
                            fVar63 = pfVar17[2];
                            fVar64 = pfVar17[3];
                            pfVar1 = (float *)((longlong)*pauVar33 + uVar49 * 4);
                            *pfVar1 = *pfVar17 * fVar70;
                            pfVar1[1] = fVar62 * fVar70;
                            pfVar1[2] = fVar63 * fVar70;
                            pfVar1[3] = fVar64 * fVar70;
                            uVar25 = (int)uVar49 + 0x10;
                            uVar49 = (ulonglong)uVar25;
                            pfVar17 = (float *)((longlong)*pauVar33 + (ulonglong)(uVar31 - 4) * 4);
                            fVar62 = pfVar17[1];
                            fVar63 = pfVar17[2];
                            fVar64 = pfVar17[3];
                            pfVar1 = (float *)((longlong)*pauVar33 + (ulonglong)(uVar31 - 4) * 4);
                            *pfVar1 = *pfVar17 * fVar70;
                            pfVar1[1] = fVar62 * fVar70;
                            pfVar1[2] = fVar63 * fVar70;
                            pfVar1[3] = fVar64 * fVar70;
                            pfVar17 = (float *)((longlong)*pauVar33 + (ulonglong)uVar31 * 4);
                            fVar62 = pfVar17[1];
                            fVar63 = pfVar17[2];
                            fVar64 = pfVar17[3];
                            pfVar1 = (float *)((longlong)*pauVar33 + (ulonglong)uVar31 * 4);
                            *pfVar1 = *pfVar17 * fVar70;
                            pfVar1[1] = fVar62 * fVar70;
                            pfVar1[2] = fVar63 * fVar70;
                            pfVar1[3] = fVar64 * fVar70;
                            uVar42 = uVar31 + 4;
                            uVar31 = uVar31 + 0x10;
                            pfVar17 = (float *)((longlong)*pauVar33 + (ulonglong)uVar42 * 4);
                            fVar62 = pfVar17[1];
                            fVar63 = pfVar17[2];
                            fVar64 = pfVar17[3];
                            pfVar1 = (float *)((longlong)*pauVar33 + (ulonglong)uVar42 * 4);
                            *pfVar1 = *pfVar17 * fVar70;
                            pfVar1[1] = fVar62 * fVar70;
                            pfVar1[2] = fVar63 * fVar70;
                            pfVar1[3] = fVar64 * fVar70;
                          } while (uVar25 < (param_8 & 0xf0));
                        }
                        uVar31 = (uint)uVar49;
                        if (uVar31 < uVar39) {
                          if (3 < uVar39 - uVar31) {
                            lVar47 = uVar49 + 2;
                            uVar42 = ((uVar39 - uVar31) - 4 >> 2) + 1;
                            uVar43 = (ulonglong)uVar42;
                            uVar31 = uVar31 + uVar42 * 4;
                            uVar49 = uVar49 + (ulonglong)uVar42 * 4;
                            pfVar17 = (float *)((longlong)pvVar50 + (lVar47 + uVar46) * 4);
                            do {
                              pfVar17[-2] = fVar70 * pfVar17[-2];
                              pfVar17[-1] = fVar70 * pfVar17[-1];
                              auVar55 = ZEXT416((uint)(fVar70 * pfVar17[1]));
                              *pfVar17 = fVar70 * *pfVar17;
                              pfVar17[1] = fVar70 * pfVar17[1];
                              uVar43 = uVar43 - 1;
                              pfVar17 = pfVar17 + 4;
                            } while (uVar43 != 0);
                            if (uVar39 <= uVar31) goto LAB_1450924ec;
                          }
                          uVar43 = (ulonglong)(uVar39 - uVar31);
                          pfVar17 = (float *)((longlong)pvVar50 + (uVar46 + uVar49) * 4);
                          do {
                            *pfVar17 = fVar70 * *pfVar17;
                            uVar43 = uVar43 - 1;
                            pfVar17 = pfVar17 + 1;
                          } while (uVar43 != 0);
                        }
                      }
LAB_1450924ec:
                      for (; pauVar33 <
                             (undefined1 (*) [16])((longlong)pvVar50 + (uVar46 + uVar22) * 4);
                          pauVar33 = pauVar33 + 1) {
                        auVar55 = sqrtps(auVar55,*pauVar33);
                        *pauVar33 = auVar55;
                      }
                      uVar21 = uVar21 + 1;
                      pfVar41 = pfVar41 + 4;
                      pfVar17 = local_100;
                    } while (uVar21 < uVar48);
                  }
                }
                else {
                  afStack_114[0] = (float)((int)fVar24 + 2);
                  if (3 < (uint)fVar24) {
                    afStack_114[0] = fVar24;
                  }
                  uVar21 = 0;
                  if (uVar48 != 0) {
                    local_c8 = &DAT_14c72ece0 + (ulonglong)((int)fVar24 - 1) * 0x20;
                    uVar39 = (int)fVar24 + 7U & 0xfffffff8;
                    do {
                      puVar9 = local_c8;
                      fVar62 = afStack_114[0];
                      uVar31 = uVar39 * uVar21;
                      pauVar33 = (undefined1 (*) [16])((longlong)pvVar50 + (ulonglong)uVar31 * 4);
                      *(undefined1 (**) [16])((longlong)&lStack_120 + lVar40 + lVar30) = pauVar33;
                      *(undefined **)((longlong)afStack_128 + lVar40 + lVar30) = puVar9;
                      *(undefined8 *)(auStack_148 + lVar40 + lVar30 + -8) = 0x145092596;
                      FUN_145094b60(puVar18,fVar62,pfVar41,fVar70);
                      puVar18 = local_f8;
                      for (; local_f8 = puVar18,
                          pauVar33 <
                          (undefined1 (*) [16])
                          ((longlong)pvVar50 + ((ulonglong)uVar31 + (ulonglong)uVar39) * 4);
                          pauVar33 = pauVar33 + 1) {
                        in_XMM1 = sqrtps(in_XMM1,*pauVar33);
                        *pauVar33 = in_XMM1;
                        puVar18 = local_f8;
                      }
                      uVar21 = uVar21 + 1;
                      pfVar41 = pfVar41 + 4;
                      pfVar17 = local_100;
                    } while (uVar21 < uVar48);
                  }
                }
              }
              else {
                uVar39 = 0;
                if (uVar48 != 0) {
                  do {
                    uVar31 = (int)afStack_114[0] * uVar39 * 8;
                    uVar46 = (ulonglong)uVar31;
                    pauVar33 = (undefined1 (*) [16])((longlong)pvVar50 + (ulonglong)uVar31 * 4);
                    *(undefined1 (**) [16])((longlong)&lStack_120 + lVar40 + lVar30) = pauVar33;
                    *(float *)((longlong)afStack_128 + lVar40 + lVar30) = fVar24;
                    *(undefined8 *)(auStack_148 + lVar40 + lVar30 + -8) = 0x1450920ea;
                    FUN_145375ad0(puVar18);
                    uVar49 = 0;
                    auVar55 = ZEXT816(0);
                    uVar22 = uVar49;
                    if (7 < (uint)fVar24) {
                      fVar68 = 0.0;
                      fVar65 = 0.0;
                      fVar67 = 0.0;
                      fVar69 = 0.0;
                      fVar62 = 0.0;
                      fVar63 = 0.0;
                      fVar64 = 0.0;
                      fVar66 = 0.0;
                      do {
                        pfVar41 = (float *)((longlong)*pauVar33 + uVar22 * 4);
                        iVar14 = (int)uVar22;
                        uVar31 = iVar14 + 8;
                        uVar22 = (ulonglong)uVar31;
                        fVar68 = fVar68 + *pfVar41;
                        fVar65 = fVar65 + pfVar41[1];
                        fVar67 = fVar67 + pfVar41[2];
                        fVar69 = fVar69 + pfVar41[3];
                        pfVar41 = (float *)((longlong)*pauVar33 + (ulonglong)(iVar14 + 4) * 4);
                        fVar62 = fVar62 + *pfVar41;
                        fVar63 = fVar63 + pfVar41[1];
                        fVar64 = fVar64 + pfVar41[2];
                        fVar66 = fVar66 + pfVar41[3];
                      } while (uVar31 < (uVar21 & 0xf8));
                      fVar67 = fVar67 + fVar64;
                      fVar69 = fVar69 + fVar66;
                      auVar54._0_4_ = fVar67 + fVar68 + fVar62;
                      auVar54._4_4_ = fVar69 + fVar65 + fVar63;
                      auVar54._8_4_ = fVar67 + fVar67;
                      auVar54._12_4_ = fVar69 + fVar69;
                      auVar55._4_12_ = auVar54._4_12_;
                      auVar55._0_4_ = auVar54._0_4_ + auVar54._4_4_;
                    }
                    fVar62 = (float)uVar22;
                    if ((uint)fVar62 < (uint)fVar24) {
                      if (3 < (uint)((int)fVar24 - (int)fVar62)) {
                        uVar31 = (((int)fVar24 - (int)fVar62) - 4U >> 2) + 1;
                        pfVar41 = (float *)((longlong)pvVar50 + (uVar22 + 2 + uVar46) * 4);
                        uVar43 = (ulonglong)uVar31;
                        fVar62 = (float)((int)fVar62 + uVar31 * 4);
                        uVar22 = uVar22 + (ulonglong)uVar31 * 4;
                        do {
                          auVar55._0_4_ =
                               auVar55._0_4_ + pfVar41[-2] + pfVar41[-1] + *pfVar41 + pfVar41[1];
                          pfVar41 = pfVar41 + 4;
                          uVar43 = uVar43 - 1;
                        } while (uVar43 != 0);
                        if ((uint)fVar24 <= (uint)fVar62) goto LAB_1450921bf;
                      }
                      pfVar41 = (float *)((longlong)pvVar50 + (uVar46 + uVar22) * 4);
                      uVar22 = (ulonglong)(uint)((int)fVar24 - (int)fVar62);
                      do {
                        auVar55._0_4_ = auVar55._0_4_ + *pfVar41;
                        pfVar41 = pfVar41 + 1;
                        uVar22 = uVar22 - 1;
                      } while (uVar22 != 0);
                    }
LAB_1450921bf:
                    if (0.0 < auVar55._0_4_) {
                      fVar62 = fVar70 / auVar55._0_4_;
                      if (0xf < (uint)fVar24) {
                        uVar31 = 8;
                        do {
                          pfVar41 = (float *)((longlong)*pauVar33 + uVar49 * 4);
                          fVar63 = pfVar41[1];
                          fVar64 = pfVar41[2];
                          fVar66 = pfVar41[3];
                          pfVar17 = (float *)((longlong)*pauVar33 + uVar49 * 4);
                          *pfVar17 = *pfVar41 * fVar62;
                          pfVar17[1] = fVar63 * fVar62;
                          pfVar17[2] = fVar64 * fVar62;
                          pfVar17[3] = fVar66 * fVar62;
                          uVar25 = (int)uVar49 + 0x10;
                          uVar49 = (ulonglong)uVar25;
                          pfVar41 = (float *)((longlong)*pauVar33 + (ulonglong)(uVar31 - 4) * 4);
                          fVar63 = pfVar41[1];
                          fVar64 = pfVar41[2];
                          fVar66 = pfVar41[3];
                          pfVar17 = (float *)((longlong)*pauVar33 + (ulonglong)(uVar31 - 4) * 4);
                          *pfVar17 = *pfVar41 * fVar62;
                          pfVar17[1] = fVar63 * fVar62;
                          pfVar17[2] = fVar64 * fVar62;
                          pfVar17[3] = fVar66 * fVar62;
                          pfVar41 = (float *)((longlong)*pauVar33 + (ulonglong)uVar31 * 4);
                          fVar63 = pfVar41[1];
                          fVar64 = pfVar41[2];
                          fVar66 = pfVar41[3];
                          pfVar17 = (float *)((longlong)*pauVar33 + (ulonglong)uVar31 * 4);
                          *pfVar17 = fVar62 * *pfVar41;
                          pfVar17[1] = fVar62 * fVar63;
                          pfVar17[2] = fVar62 * fVar64;
                          pfVar17[3] = fVar62 * fVar66;
                          uVar42 = uVar31 + 4;
                          uVar31 = uVar31 + 0x10;
                          pfVar41 = (float *)((longlong)*pauVar33 + (ulonglong)uVar42 * 4);
                          auVar55._0_4_ = fVar62 * *pfVar41;
                          auVar55._4_4_ = fVar62 * pfVar41[1];
                          auVar55._8_4_ = fVar62 * pfVar41[2];
                          auVar55._12_4_ = fVar62 * pfVar41[3];
                          *(undefined1 (*) [16])((longlong)*pauVar33 + (ulonglong)uVar42 * 4) =
                               auVar55;
                        } while (uVar25 < (uVar21 & 0xf0));
                      }
                      fVar63 = (float)uVar49;
                      if ((uint)fVar63 < (uint)fVar24) {
                        if (3 < (uint)((int)fVar24 - (int)fVar63)) {
                          lVar47 = uVar49 + 2;
                          uVar31 = (((int)fVar24 - (int)fVar63) - 4U >> 2) + 1;
                          uVar22 = (ulonglong)uVar31;
                          fVar63 = (float)((int)fVar63 + uVar31 * 4);
                          uVar49 = uVar49 + (ulonglong)uVar31 * 4;
                          pfVar41 = (float *)((longlong)pvVar50 + (lVar47 + uVar46) * 4);
                          do {
                            pfVar41[-2] = fVar62 * pfVar41[-2];
                            pfVar41[-1] = fVar62 * pfVar41[-1];
                            auVar55 = ZEXT416((uint)(fVar62 * pfVar41[1]));
                            *pfVar41 = fVar62 * *pfVar41;
                            pfVar41[1] = fVar62 * pfVar41[1];
                            uVar22 = uVar22 - 1;
                            pfVar41 = pfVar41 + 4;
                          } while (uVar22 != 0);
                          if ((uint)fVar24 <= (uint)fVar63) goto LAB_1450922da;
                        }
                        uVar22 = (ulonglong)(uint)((int)fVar24 - (int)fVar63);
                        pfVar41 = (float *)((longlong)pvVar50 + (uVar46 + uVar49) * 4);
                        do {
                          *pfVar41 = fVar62 * *pfVar41;
                          uVar22 = uVar22 - 1;
                          pfVar41 = pfVar41 + 1;
                        } while (uVar22 != 0);
                      }
LAB_1450922da:
                      uVar31 = (int)afStack_114[0] * 8;
                      for (; pauVar33 <
                             (undefined1 (*) [16])((longlong)pvVar50 + (uVar31 + uVar46) * 4);
                          pauVar33 = pauVar33 + 1) {
                        auVar55 = sqrtps(auVar55,*pauVar33);
                        *pauVar33 = auVar55;
                      }
                    }
                    uVar39 = uVar39 + 1;
                    puVar18 = local_f8;
                    pfVar17 = local_100;
                  } while (uVar39 < uVar48);
                }
              }
              fVar70 = 0.0;
              fVar62 = (1.0 / (float)uVar45) * 12.566371;
              afStack_114[0] = 0.0;
              afStack_114[1] = 0.0;
              local_100 = (float *)(&PTR_DAT_14c72ec10)[(longlong)puStack_e0];
              if (local_118 != 0.0) {
                fStack_10c = 1.4013e-45;
                do {
                  fVar63 = afStack_114[1];
                  if ((uint)fVar52 <= (uint)fVar70) {
                    return;
                  }
                  if ((0xb < (uint)fVar52) ||
                     ((*(uint *)(&DAT_149c256d8 + (ulonglong)((int)fVar52 - 1) * 4) &
                      (uint)fStack_10c) == 0)) {
                    local_f8 = param_5 + ((param_8 & 0xff) + 7 & 0xfffffff8) * (int)fVar70;
                    if (bVar23 != 0) {
                      *(undefined8 *)(auStack_148 + lVar40 + lVar30 + -8) = 0x14509268d;
                      memset(param_5 + ((param_8 & 0xff) + 7 & 0xfffffff8) * (int)fVar70,0,
                             (ulonglong)(param_8 & 0xff) << 2);
                    }
                    local_e8 = (ulonglong)(uint)fVar24;
                    uVar21 = (int)fVar63 * uVar48;
                    lVar47 = 0;
                    do {
                      uVar31 = 0;
                      uVar39 = 0;
                      fVar63 = 0.0;
                      fVar70 = 0.0;
                      if (uVar48 < 4) {
                        if (uVar48 != 0) {
                          fVar64 = *local_100;
                          goto LAB_145092799;
                        }
                      }
                      else {
                        fVar64 = *local_100;
                        uVar39 = local_108 & 0xfffffff8;
                        fVar70 = fVar64 * fVar62;
                        uVar42 = uVar21 + 2;
                        do {
                          uVar22 = (ulonglong)uVar42;
                          uVar25 = uVar42 - 2;
                          iVar14 = uVar42 - uVar21;
                          uVar26 = uVar39 * uVar31;
                          uVar15 = uVar42 - 1;
                          uVar31 = uVar31 + 4;
                          uVar16 = uVar42 + 1;
                          iVar27 = ~uVar21 + uVar42;
                          iVar28 = (1 - uVar21) + uVar42;
                          uVar42 = uVar42 + 4;
                          fVar63 = fVar70 * *(float *)((longlong)pfVar17 + (ulonglong)uVar25 * 4) *
                                   *(float *)((longlong)pvVar50 + ((ulonglong)uVar26 + lVar47) * 4)
                                   + fVar63 +
                                   fVar70 * *(float *)((longlong)pfVar17 + (ulonglong)uVar15 * 4) *
                                   *(float *)((longlong)pvVar50 +
                                             ((ulonglong)(iVar27 * uVar39) + lVar47) * 4) +
                                   fVar70 * *(float *)((longlong)pfVar17 + uVar22 * 4) *
                                   *(float *)((longlong)pvVar50 +
                                             ((ulonglong)(iVar14 * uVar39) + lVar47) * 4) +
                                   fVar70 * *(float *)((longlong)pfVar17 + (ulonglong)uVar16 * 4) *
                                   *(float *)((longlong)pvVar50 +
                                             ((ulonglong)(iVar28 * uVar39) + lVar47) * 4);
                        } while (uVar31 < uVar48 - 3);
                        fVar70 = fVar63;
                        uVar39 = uVar31;
                        if (uVar31 < uVar48) {
LAB_145092799:
                          fVar63 = fVar70;
                          do {
                            uVar31 = uVar21 + uVar39;
                            uVar42 = (local_108 & 0xfffffff8) * uVar39;
                            uVar39 = uVar39 + 1;
                            fVar63 = fVar63 + fVar64 * fVar62 *
                                              *(float *)((longlong)pfVar17 + (ulonglong)uVar31 * 4)
                                              * *(float *)((longlong)pvVar50 +
                                                          ((ulonglong)uVar42 + lVar47) * 4);
                          } while (uVar39 < uVar48);
                        }
                      }
                      local_f8[lVar47] = fVar63;
                      lVar47 = lVar47 + 1;
                      local_e8 = local_e8 - 1;
                    } while (local_e8 != 0);
                    fVar70 = (float)((int)afStack_114[0] + 1);
                    afStack_114[0] = fVar70;
                  }
                  afStack_114[1] = (float)((int)afStack_114[1] + 1);
                  local_100 = local_100 + 1;
                  fStack_10c = (float)((int)fStack_10c << 1 | (uint)((int)fStack_10c < 0));
                } while ((uint)afStack_114[1] < (uint)local_118);
              }
            }
          }
        }
      }
      else if (param_9 != 0) {
        fVar52 = (float)(param_6 & 7);
        uVar49 = 0;
        uVar31 = 0;
        fVar24 = fVar52;
        uVar39 = (uint)fStack_10c;
        uVar22 = uVar49;
        if (fStack_10c != (float)(param_6 >> 0xc)) {
          for (; uVar39 != 0; uVar39 = uVar39 & uVar39 - 1) {
            uVar31 = (int)uVar22 + 1;
            uVar22 = (ulonglong)uVar31;
          }
          fVar24 = (float)(uVar31 & 7);
        }
        if (fVar24 != 0.0) {
          fVar62 = 1.0 / (float)(uint)fVar24;
          if (((uVar21 & 0xf00) == 0x100) && ((uVar21 & 0xff9c0000) == 0)) {
            if (0.0 < param_3) {
              uStack_150 = 0x145092932;
              puVar19 = (undefined8 *)FUN_145090960(param_9,fVar24,0);
              if (puVar19 == (undefined8 *)0x0) {
                return;
              }
              param_7 = *(float *)(puVar19 + 1);
              pvVar50 = (void *)*puVar19;
              param_4 = 1.0 - param_4;
              if (fVar24 == 1.4013e-45) {
                param_3 = param_3 * param_4;
              }
              else {
                sVar44 = (ulonglong)(uint)param_7 * 0x10;
                uVar22 = sVar44 + 0xf;
                if (uVar22 <= sVar44) {
                  uVar22 = 0xffffffffffffff0;
                }
                uStack_150 = 0x145092983;
                lVar30 = -(uVar22 & 0xfffffffffffffff0);
                pvVar5 = (void *)((longlong)&local_118 + lVar30);
                if (param_4 < 1.0) {
                  if (0.5 < param_4) {
                    *(undefined8 *)(auStack_148 + lVar30 + -8) = 0x1450929b8;
                    FUN_14509c0c0(pvVar50,param_7,pvVar5);
                  }
                  else {
                    *(undefined8 *)(auStack_148 + lVar30 + -8) = 0x1450929b1;
                    FUN_14509bf60();
                  }
                }
                else {
                  *(undefined8 *)(auStack_148 + lVar30 + -8) = 0x14509299c;
                  memcpy(pvVar5,pvVar50,sVar44);
                }
                uVar49 = (ulonglong)(uint)((int)param_7 * (int)fVar24) * 0x10;
                uVar22 = uVar49 + 0xf;
                if (uVar22 <= uVar49) {
                  uVar22 = 0xffffffffffffff0;
                }
                *(undefined8 *)(auStack_148 + lVar30 + -8) = 0x1450929dc;
                lVar40 = -(uVar22 & 0xfffffffffffffff0);
                puVar35 = auStack_148 + lVar40 + lVar30;
                pvVar50 = (void *)((longlong)&local_118 + lVar40 + lVar30);
                *(undefined8 *)(auStack_148 + lVar40 + lVar30 + -8) = 0x1450929f1;
                FUN_14509bd30(fVar24,param_7,pvVar5,pvVar50);
              }
              uVar49 = (ulonglong)(uint)((int)param_7 * (int)fVar24) * 0x10;
              uVar22 = uVar49 + 0xf;
              if (uVar22 <= uVar49) {
                uVar22 = 0xffffffffffffff0;
              }
              *(undefined8 *)(puVar35 + -8) = 0x145092a1a;
              lVar30 = -(uVar22 & 0xfffffffffffffff0);
              puVar36 = puVar35 + lVar30;
              pfVar41 = (float *)(puVar35 + lVar30 + 0x30);
              local_100 = pfVar41;
              *(float **)(puVar35 + lVar30 + 0x20) = pfVar41;
              *(undefined8 *)(puVar35 + lVar30 + -8) = 0x145092a3b;
              FUN_14509b500(pvVar50,(int)param_7 * (int)fVar24,param_1,param_3);
            }
            else {
              param_7 = 1.4013e-45;
              uVar22 = (ulonglong)(uint)fVar24 * 0x10 + 0xf;
              if (uVar22 <= (ulonglong)(uint)fVar24 * 0x10) {
                uVar22 = 0xffffffffffffff0;
              }
              uStack_150 = 0x145092903;
              lVar30 = -(uVar22 & 0xfffffffffffffff0);
              puVar36 = auStack_148 + lVar30;
              local_100 = (float *)((longlong)&local_118 + lVar30);
              *(undefined8 *)(auStack_148 + lVar30 + -8) = 0x14509291c;
              FUN_14509bec0(fVar24,param_1,(undefined1 *)((longlong)&local_118 + lVar30));
              pfVar41 = local_100;
            }
            *(undefined8 *)(puVar36 + -8) = 0x145092a4c;
            lVar30 = FUN_145090710(param_9,uVar21);
            if (lVar30 != 0) {
              uVar39 = uVar21 & 0xff;
              uVar48 = uVar39 + 2;
              if (3 < uVar39) {
                uVar48 = uVar39;
              }
              uVar31 = uVar21 >> 0xc;
              lVar40 = 0;
              if ((((uVar39 != (uVar21 - (uVar31 - (uVar31 & 0xffffb) >> 2) & 0xff)) ||
                   (((uVar21 & 0xf00 ^ uVar21) & 0xf00) != 0)) || (uVar31 != (uVar31 & 0xffffb))) &&
                 (fVar70 < 1.0)) {
                *(undefined8 *)(puVar36 + -8) = 0x145092ac2;
                lVar40 = FUN_145090710(param_9);
              }
              uVar49 = 0;
              fVar24 = (float)(uVar21 & 0xff);
              fVar64 = (float)(uVar21 >> 0xc);
              afStack_114[1] = 0.0;
              fVar62 = fVar62 / (float)(uint)param_7;
              local_108 = 0;
              uStack_f0 = (ulonglong)((int)fVar52 - 1) << 3;
              afStack_114[0] = fVar64;
              local_118 = fVar24;
              uVar22 = uVar49;
              fVar63 = fStack_10c;
              do {
                if ((*(uint *)(&DAT_14c72ece0 + (uVar49 + uStack_f0) * 4) & (uint)fVar63 & 0xffff)
                    != 0) {
                  pauVar33 = (undefined1 (*) [16])
                             (param_5 +
                             ((param_8 & 0xff) + 7 & 0xfffffff8) *
                             (*(uint *)(&DAT_14c72ece0 + (uVar49 + uStack_f0) * 4) >> 0x10));
                  uVar21 = (int)uVar22 * (int)param_7 * 4;
                  pfVar41 = (float *)((longlong)pfVar41 + (ulonglong)uVar21 * 4);
                  pfVar17 = (float *)((longlong)local_100 +
                                     ((ulonglong)(uint)((int)param_7 * 4) + (ulonglong)uVar21) * 4);
                  do {
                    fVar63 = *pfVar41;
                    local_d8 = *(longlong *)pfVar41;
                    pfVar1 = pfVar41 + 2;
                    auVar55 = ZEXT416((uint)*pfVar1);
                    pfVar41 = pfVar41 + 4;
                    local_d0 = *pfVar1;
                    if ((fVar64 == 4.2039e-45) && (*(char *)(param_9 + 0x30) == '\x01')) {
                      fVar63 = (fVar63 * 0.5 + 0.70710677) - fVar63 * 0.20710677 * fVar63;
                      fVar63 = fVar63 * fVar63;
                      if (1.0 < fVar63) {
                        fVar66 = 0.0;
                      }
                      else {
                        fVar66 = 1.0 - fVar63;
                      }
                      fVar63 = fVar63 + *(float *)((longlong)*pauVar33 + 4);
                      auVar55 = ZEXT416((uint)fVar63);
                      *(float *)*pauVar33 = fVar66 + *(float *)*pauVar33;
                      *(float *)((longlong)*pauVar33 + 4) = fVar63;
                    }
                    else {
                      *(undefined1 (**) [16])(puVar36 + 0x28) = pauVar33;
                      *(undefined **)(puVar36 + 0x20) =
                           &DAT_14c72ece0 + (ulonglong)((int)fVar24 - 1) * 0x20;
                      if (lVar40 == 0) {
                        fVar24 = 1.0;
                        lVar47 = lVar30;
                        uVar21 = uVar48;
                      }
                      else {
                        *(undefined8 *)(puVar36 + -8) = 0x145092c42;
                        FUN_145094b60(lVar30,uVar48,&local_d8);
                        uVar21 = (int)local_118 - 2;
                        *(undefined1 (**) [16])(puVar36 + 0x28) = pauVar33;
                        *(undefined **)(puVar36 + 0x20) = &DAT_14c72edc0 + (ulonglong)uVar21 * 0x20;
                        fVar24 = 1.0 - fVar70;
                        lVar47 = lVar40;
                        uVar21 = uVar48 - 1;
                      }
                      *(undefined8 *)(puVar36 + -8) = 0x145092c7f;
                      FUN_145094b60(lVar47,uVar21,&local_d8,fVar24);
                      fVar24 = local_118;
                      fVar64 = afStack_114[0];
                    }
                  } while (pfVar41 < pfVar17);
                  uVar22 = 0;
                  uVar21 = param_8 & 0xff;
                  if (bVar23 != 0) {
                    if (0xf < uVar21) {
                      uVar39 = 8;
                      do {
                        pfVar41 = (float *)((longlong)*pauVar33 + uVar22 * 4);
                        fVar24 = pfVar41[1];
                        fVar63 = pfVar41[2];
                        fVar64 = pfVar41[3];
                        pfVar17 = (float *)((longlong)*pauVar33 + uVar22 * 4);
                        *pfVar17 = *pfVar41 * fVar62;
                        pfVar17[1] = fVar24 * fVar62;
                        pfVar17[2] = fVar63 * fVar62;
                        pfVar17[3] = fVar64 * fVar62;
                        uVar42 = (int)uVar22 + 0x10;
                        uVar22 = (ulonglong)uVar42;
                        pfVar41 = (float *)((longlong)*pauVar33 + (ulonglong)(uVar39 - 4) * 4);
                        fVar24 = pfVar41[1];
                        fVar63 = pfVar41[2];
                        fVar64 = pfVar41[3];
                        pfVar17 = (float *)((longlong)*pauVar33 + (ulonglong)(uVar39 - 4) * 4);
                        *pfVar17 = *pfVar41 * fVar62;
                        pfVar17[1] = fVar24 * fVar62;
                        pfVar17[2] = fVar63 * fVar62;
                        pfVar17[3] = fVar64 * fVar62;
                        pfVar41 = (float *)((longlong)*pauVar33 + (ulonglong)uVar39 * 4);
                        fVar24 = pfVar41[1];
                        fVar63 = pfVar41[2];
                        fVar64 = pfVar41[3];
                        pfVar17 = (float *)((longlong)*pauVar33 + (ulonglong)uVar39 * 4);
                        *pfVar17 = *pfVar41 * fVar62;
                        pfVar17[1] = fVar24 * fVar62;
                        pfVar17[2] = fVar63 * fVar62;
                        pfVar17[3] = fVar64 * fVar62;
                        uVar31 = uVar39 + 4;
                        uVar39 = uVar39 + 0x10;
                        pfVar41 = (float *)((longlong)*pauVar33 + (ulonglong)uVar31 * 4);
                        fVar24 = pfVar41[1];
                        fVar63 = pfVar41[2];
                        fVar64 = pfVar41[3];
                        pfVar17 = (float *)((longlong)*pauVar33 + (ulonglong)uVar31 * 4);
                        *pfVar17 = *pfVar41 * fVar62;
                        pfVar17[1] = fVar24 * fVar62;
                        pfVar17[2] = fVar63 * fVar62;
                        pfVar17[3] = fVar64 * fVar62;
                      } while (uVar42 < (param_8 & 0xf0));
                    }
                    uVar39 = (uint)uVar22;
                    if (uVar39 < uVar21) {
                      if (3 < uVar21 - uVar39) {
                        lVar47 = uVar22 + 2;
                        uVar31 = ((uVar21 - uVar39) - 4 >> 2) + 1;
                        uVar49 = (ulonglong)uVar31;
                        uVar39 = uVar39 + uVar31 * 4;
                        uVar22 = uVar22 + (ulonglong)uVar31 * 4;
                        pfVar41 = (float *)((longlong)*pauVar33 + lVar47 * 4);
                        do {
                          pfVar41[-2] = fVar62 * pfVar41[-2];
                          pfVar41[-1] = fVar62 * pfVar41[-1];
                          auVar55 = ZEXT416((uint)(fVar62 * pfVar41[1]));
                          *pfVar41 = fVar62 * *pfVar41;
                          pfVar41[1] = fVar62 * pfVar41[1];
                          uVar49 = uVar49 - 1;
                          pfVar41 = pfVar41 + 4;
                        } while (uVar49 != 0);
                        if (uVar21 <= uVar39) goto LAB_145092db9;
                      }
                      uVar49 = (ulonglong)(uVar21 - uVar39);
                      pfVar41 = (float *)((longlong)*pauVar33 + uVar22 * 4);
                      do {
                        *pfVar41 = fVar62 * *pfVar41;
                        uVar49 = uVar49 - 1;
                        pfVar41 = pfVar41 + 1;
                      } while (uVar49 != 0);
                    }
                  }
LAB_145092db9:
                  puVar18 = (undefined4 *)*pauVar33;
                  for (; pauVar33 <
                         (undefined1 (*) [16])
                         (puVar18 + ((ulonglong)((param_8 & 0xff) + 7) & 0xfffffff8));
                      pauVar33 = pauVar33 + 1) {
                    auVar55 = sqrtps(auVar55,*pauVar33);
                    *pauVar33 = auVar55;
                  }
                  uVar22 = (ulonglong)(local_108 + 1);
                  local_108 = local_108 + 1;
                  fVar24 = local_118;
                  fVar63 = fStack_10c;
                  fVar64 = afStack_114[0];
                }
                afStack_114[1] = (float)((int)afStack_114[1] + 1);
                uVar49 = (ulonglong)(uint)afStack_114[1];
                pfVar41 = local_100;
              } while ((uint)afStack_114[1] < (uint)fVar52);
            }
          }
          else {
            if (0.0 < param_3) {
              uStack_150 = 0x145092e91;
              puVar19 = (undefined8 *)
                        FUN_145090960(param_9,fVar24,CONCAT71((uint7)(uint3)((uint)param_7 >> 8),1))
              ;
              if (puVar19 == (undefined8 *)0x0) {
                return;
              }
              fVar63 = *(float *)(puVar19 + 1);
              pvVar50 = (void *)*puVar19;
              param_4 = 1.0 - param_4;
              local_118 = fVar63;
              if (fVar24 == 1.4013e-45) {
                param_3 = param_3 * param_4;
              }
              else {
                sVar44 = (ulonglong)(uint)fVar63 * 0x10;
                uVar22 = sVar44 + 0xf;
                if (uVar22 <= sVar44) {
                  uVar22 = 0xffffffffffffff0;
                }
                uStack_150 = 0x145092edf;
                lVar30 = -(uVar22 & 0xfffffffffffffff0);
                pvVar5 = (void *)((longlong)&local_118 + lVar30);
                if (param_4 < 1.0) {
                  if (0.5 < param_4) {
                    *(undefined8 *)(auStack_148 + lVar30 + -8) = 0x145092f17;
                    FUN_14509c0c0(pvVar50,fVar63,pvVar5);
                  }
                  else {
                    *(undefined8 *)(auStack_148 + lVar30 + -8) = 0x145092f10;
                    FUN_14509bf60();
                  }
                }
                else {
                  *(undefined8 *)(auStack_148 + lVar30 + -8) = 0x145092ef8;
                  memcpy(pvVar5,pvVar50,sVar44);
                }
                fVar63 = local_118;
                uVar45 = (ulonglong)(uint)((int)local_118 * (int)fVar24) * 0x10;
                uVar22 = uVar45 + 0xf;
                if (uVar22 <= uVar45) {
                  uVar22 = 0xffffffffffffff0;
                }
                *(undefined8 *)(auStack_148 + lVar30 + -8) = 0x145092f3f;
                lVar40 = -(uVar22 & 0xfffffffffffffff0);
                puVar37 = auStack_148 + lVar40 + lVar30;
                pvVar50 = (void *)((longlong)&local_118 + lVar40 + lVar30);
                *(undefined8 *)(auStack_148 + lVar40 + lVar30 + -8) = 0x145092f54;
                FUN_14509bd30(fVar24,fVar63,pvVar5,pvVar50);
              }
              uVar39 = (int)local_118 * (int)fVar24;
              uVar45 = (ulonglong)uVar39 * 0x10;
              uVar22 = uVar45 + 0xf;
              if (uVar22 <= uVar45) {
                uVar22 = 0xffffffffffffff0;
              }
              *(undefined8 *)(puVar37 + -8) = 0x145092f84;
              lVar30 = -(uVar22 & 0xfffffffffffffff0);
              puVar38 = puVar37 + lVar30;
              local_f8 = (undefined4 *)(puVar37 + lVar30 + 0x30);
              *(undefined4 **)(puVar37 + lVar30 + 0x20) = local_f8;
              *(undefined8 *)(puVar37 + lVar30 + -8) = 0x145092fa5;
              FUN_14509b500(pvVar50,uVar39,param_1,param_3);
            }
            else {
              local_118 = 1.4013e-45;
              uVar22 = (ulonglong)(uint)fVar24 * 0x10 + 0xf;
              if (uVar22 <= (ulonglong)(uint)fVar24 * 0x10) {
                uVar22 = 0xffffffffffffff0;
              }
              uStack_150 = 0x145092e66;
              lVar30 = -(uVar22 & 0xfffffffffffffff0);
              puVar38 = auStack_148 + lVar30;
              local_f8 = (undefined4 *)((longlong)&local_118 + lVar30);
              *(undefined8 *)(auStack_148 + lVar30 + -8) = 0x145092e7f;
              FUN_14509bec0(fVar24,param_1,(undefined1 *)((longlong)&local_118 + lVar30));
            }
            if ((uVar21 & 0xf00) == 0x100) {
              puStack_e0 = (uint *)0x0;
              uVar31 = uVar21 >> 0xc;
              param_7 = (float)(uVar21 & 0xff);
              uVar39 = uVar21 - (uVar31 - (uVar31 & 0xffffb) >> 2) & 0xff |
                       (uVar31 & 0xffffb) << 0xc | uVar21 & 0xf00;
              uVar48 = uVar39;
              uVar22 = uVar49;
              if (((uVar31 & 4) == 0) || (uVar48 = uVar21, fVar70 == 1.0)) {
                *(undefined8 *)(puVar38 + -8) = 0x14509301d;
                local_100 = (float *)FUN_145090710(param_9,uVar48);
              }
              else {
                *(undefined8 *)(puVar38 + -8) = 0x145093438;
                local_100 = (float *)FUN_145090710(param_9,uVar39);
                param_7 = (float)((int)param_7 - 1);
                if (fVar70 != 0.0) {
                  *(undefined8 *)(puVar38 + -8) = 0x145093464;
                  uVar22 = FUN_145090710(param_9,uVar21);
                  puStack_e0 = (uint *)uVar22;
                }
              }
              if (local_100 != (float *)0x0) {
                uVar48 = (uVar21 & 0xff) + 7;
                afStack_114[1] = 0.0;
                uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar48);
                local_c8 = (undefined *)(ulonglong)((uVar48 >> 3) << 5);
                afStack_114[0] = 0.0;
                uVar48 = uVar21 & 0xff;
                if (uVar22 == 0) {
                  puStack_e0 = (uint *)(&DAT_14c72ece0 + (ulonglong)((int)fVar52 - 1) * 0x20);
                  local_e8 = CONCAT44(local_e8._4_4_,uVar21) & 0xffffffff000000ff;
                  pfVar41 = local_100;
                  uVar22 = uVar49;
                  fVar70 = fStack_10c;
                  do {
                    puVar9 = local_c8;
                    fVar24 = (float)uVar49;
                    if ((*puStack_e0 & (uint)fVar70 & 0xffff) != 0) {
                      pauVar33 = (undefined1 (*) [16])
                                 (param_5 +
                                 ((param_8 & 0xff) + 7 & 0xfffffff8) * (*puStack_e0 >> 0x10));
                      uVar39 = (int)uVar22 * (int)local_118 * 4;
                      puVar53 = (undefined1 *)((longlong)local_f8 + (ulonglong)uVar39 * 4);
                      puVar34 = (undefined1 *)
                                ((longlong)local_f8 +
                                ((ulonglong)(uint)((int)local_118 * 4) + (ulonglong)uVar39) * 4);
                      puVar29 = puVar38;
                      local_c0 = puVar34;
                      do {
                        uVar22 = (longlong)puVar9 + 0xf;
                        puVar53 = puVar53 + 0x10;
                        if (uVar22 <= puVar9) {
                          uVar22 = 0xffffffffffffff0;
                        }
                        *(undefined8 *)(puVar29 + -8) = 0x145093141;
                        lVar30 = -(uVar22 & 0xfffffffffffffff0);
                        puVar38 = puVar29 + lVar30;
                        *(undefined1 **)(puVar29 + lVar30 + 0x28) = puVar29 + lVar30 + 0x30;
                        *(float *)(puVar29 + lVar30 + 0x20) = param_7;
                        *(undefined8 *)(puVar29 + lVar30 + -8) = 0x14509315e;
                        FUN_145375ad0(pfVar41);
                        *(float *)*pauVar33 =
                             *(float *)(puVar29 + lVar30 + 0x30) + *(float *)*pauVar33;
                        pfVar17 = (float *)(puVar29 + lVar30 + 0x38);
                        *(float *)((longlong)*pauVar33 + 4) =
                             *(float *)(puVar29 + lVar30 + 0x34) +
                             *(float *)((longlong)*pauVar33 + 4);
                        pfVar41 = (float *)((longlong)*pauVar33 +
                                           ((ulonglong)(uVar48 - (int)param_7) + 2) * 4);
                        do {
                          fVar70 = *pfVar17;
                          pfVar17 = pfVar17 + 1;
                          *pfVar41 = fVar70 + *pfVar41;
                          pfVar41 = pfVar41 + 1;
                        } while (pfVar41 < (float *)((longlong)*pauVar33 +
                                                    (ulonglong)(uVar21 & 0xff) * 4));
                        puVar29 = puVar29 + lVar30;
                        pfVar41 = local_100;
                      } while (puVar53 < puVar34);
                      uVar49 = 0;
                      auVar57 = ZEXT816(0);
                      uVar22 = uVar49;
                      if (7 < (uint)local_e8) {
                        fVar66 = 0.0;
                        fVar68 = 0.0;
                        fVar65 = 0.0;
                        fVar67 = 0.0;
                        fVar70 = 0.0;
                        fVar24 = 0.0;
                        fVar63 = 0.0;
                        fVar64 = 0.0;
                        do {
                          pfVar17 = (float *)((longlong)*pauVar33 + uVar22 * 4);
                          iVar14 = (int)uVar22;
                          uVar48 = iVar14 + 8;
                          uVar22 = (ulonglong)uVar48;
                          fVar66 = fVar66 + *pfVar17;
                          fVar68 = fVar68 + pfVar17[1];
                          fVar65 = fVar65 + pfVar17[2];
                          fVar67 = fVar67 + pfVar17[3];
                          pfVar17 = (float *)((longlong)*pauVar33 + (ulonglong)(iVar14 + 4) * 4);
                          fVar70 = fVar70 + *pfVar17;
                          fVar24 = fVar24 + pfVar17[1];
                          fVar63 = fVar63 + pfVar17[2];
                          fVar64 = fVar64 + pfVar17[3];
                        } while (uVar48 < ((uint)local_e8 & 0xfffffff8));
                        fVar65 = fVar65 + fVar63;
                        fVar67 = fVar67 + fVar64;
                        auVar56._0_4_ = fVar65 + fVar66 + fVar70;
                        auVar56._4_4_ = fVar67 + fVar68 + fVar24;
                        auVar56._8_4_ = fVar65 + fVar65;
                        auVar56._12_4_ = fVar67 + fVar67;
                        auVar57._4_12_ = auVar56._4_12_;
                        auVar57._0_4_ = auVar56._0_4_ + auVar56._4_4_;
                      }
                      uVar48 = (uint)uVar22;
                      if (uVar48 < (uint)local_e8) {
                        if (3 < (uint)local_e8 - uVar48) {
                          pfVar17 = (float *)((longlong)*pauVar33 + (uVar22 + 2) * 4);
                          uVar21 = (((uint)local_e8 - uVar48) - 4 >> 2) + 1;
                          uVar45 = (ulonglong)uVar21;
                          uVar48 = uVar48 + uVar21 * 4;
                          uVar22 = uVar22 + (ulonglong)uVar21 * 4;
                          do {
                            auVar57._0_4_ =
                                 auVar57._0_4_ + pfVar17[-2] + pfVar17[-1] + *pfVar17 + pfVar17[1];
                            pfVar17 = pfVar17 + 4;
                            uVar45 = uVar45 - 1;
                          } while (uVar45 != 0);
                          if ((uint)local_e8 <= uVar48) goto LAB_14509329a;
                        }
                        pfVar17 = (float *)((longlong)*pauVar33 + uVar22 * 4);
                        uVar22 = (ulonglong)((uint)local_e8 - uVar48);
                        do {
                          auVar57._0_4_ = auVar57._0_4_ + *pfVar17;
                          pfVar17 = pfVar17 + 1;
                          uVar22 = uVar22 - 1;
                        } while (uVar22 != 0);
                      }
LAB_14509329a:
                      if (0.0 < auVar57._0_4_) {
                        fVar70 = fVar62 / auVar57._0_4_;
                        if (0xf < (uint)local_e8) {
                          uVar48 = 8;
                          do {
                            pfVar17 = (float *)((longlong)*pauVar33 + uVar49 * 4);
                            fVar24 = pfVar17[1];
                            fVar63 = pfVar17[2];
                            fVar64 = pfVar17[3];
                            pfVar1 = (float *)((longlong)*pauVar33 + uVar49 * 4);
                            *pfVar1 = fVar70 * *pfVar17;
                            pfVar1[1] = fVar70 * fVar24;
                            pfVar1[2] = fVar70 * fVar63;
                            pfVar1[3] = fVar70 * fVar64;
                            uVar39 = (int)uVar49 + 0x10;
                            uVar49 = (ulonglong)uVar39;
                            pfVar17 = (float *)((longlong)*pauVar33 + (ulonglong)(uVar48 - 4) * 4);
                            fVar24 = pfVar17[1];
                            fVar63 = pfVar17[2];
                            fVar64 = pfVar17[3];
                            pfVar1 = (float *)((longlong)*pauVar33 + (ulonglong)(uVar48 - 4) * 4);
                            *pfVar1 = *pfVar17 * fVar70;
                            pfVar1[1] = fVar24 * fVar70;
                            pfVar1[2] = fVar63 * fVar70;
                            pfVar1[3] = fVar64 * fVar70;
                            pfVar17 = (float *)((longlong)*pauVar33 + (ulonglong)uVar48 * 4);
                            fVar24 = pfVar17[1];
                            fVar63 = pfVar17[2];
                            fVar64 = pfVar17[3];
                            pfVar1 = (float *)((longlong)*pauVar33 + (ulonglong)uVar48 * 4);
                            *pfVar1 = fVar70 * *pfVar17;
                            pfVar1[1] = fVar70 * fVar24;
                            pfVar1[2] = fVar70 * fVar63;
                            pfVar1[3] = fVar70 * fVar64;
                            uVar21 = uVar48 + 4;
                            uVar48 = uVar48 + 0x10;
                            pfVar17 = (float *)((longlong)*pauVar33 + (ulonglong)uVar21 * 4);
                            auVar57._0_4_ = fVar70 * *pfVar17;
                            auVar57._4_4_ = fVar70 * pfVar17[1];
                            auVar57._8_4_ = fVar70 * pfVar17[2];
                            auVar57._12_4_ = fVar70 * pfVar17[3];
                            *(undefined1 (*) [16])((longlong)*pauVar33 + (ulonglong)uVar21 * 4) =
                                 auVar57;
                          } while (uVar39 < ((uint)local_e8 & 0xfffffff0));
                        }
                        uVar48 = (uint)uVar49;
                        if (uVar48 < (uint)local_e8) {
                          if (3 < (uint)local_e8 - uVar48) {
                            lVar30 = uVar49 + 2;
                            uVar21 = (((uint)local_e8 - uVar48) - 4 >> 2) + 1;
                            uVar22 = (ulonglong)uVar21;
                            uVar48 = uVar48 + uVar21 * 4;
                            uVar49 = uVar49 + (ulonglong)uVar21 * 4;
                            pfVar17 = (float *)((longlong)*pauVar33 + lVar30 * 4);
                            do {
                              pfVar17[-2] = fVar70 * pfVar17[-2];
                              pfVar17[-1] = fVar70 * pfVar17[-1];
                              auVar57 = ZEXT416((uint)(fVar70 * pfVar17[1]));
                              *pfVar17 = fVar70 * *pfVar17;
                              pfVar17[1] = fVar70 * pfVar17[1];
                              uVar22 = uVar22 - 1;
                              pfVar17 = pfVar17 + 4;
                            } while (uVar22 != 0);
                            if ((uint)local_e8 <= uVar48) goto LAB_1450933c5;
                          }
                          uVar22 = (ulonglong)((uint)local_e8 - uVar48);
                          pfVar17 = (float *)((longlong)*pauVar33 + uVar49 * 4);
                          do {
                            *pfVar17 = fVar70 * *pfVar17;
                            uVar22 = uVar22 - 1;
                            pfVar17 = pfVar17 + 1;
                          } while (uVar22 != 0);
                        }
LAB_1450933c5:
                        puVar18 = (undefined4 *)*pauVar33;
                        for (; pauVar33 < (undefined1 (*) [16])(puVar18 + (uStack_f0 & 0xfffffff8));
                            pauVar33 = pauVar33 + 1) {
                          auVar57 = sqrtps(auVar57,*pauVar33);
                          *pauVar33 = auVar57;
                        }
                      }
                      afStack_114[1] = (float)((int)afStack_114[1] + 1);
                      uVar22 = (ulonglong)(uint)afStack_114[1];
                      uVar21 = local_108;
                      uVar48 = (uint)local_e8;
                      fVar70 = fStack_10c;
                      fVar24 = afStack_114[0];
                    }
                    afStack_114[0] = (float)((int)fVar24 + 1);
                    uVar49 = (ulonglong)(uint)afStack_114[0];
                    puStack_e0 = puStack_e0 + 1;
                  } while ((uint)afStack_114[0] < (uint)fVar52);
                }
                else {
                  uVar22 = (ulonglong)(((int)param_7 + 7U >> 3) << 5);
                  local_c0 = (undefined1 *)((ulonglong)((int)fVar52 - 1) << 3);
                  uVar45 = uVar49;
                  uVar39 = uVar21;
                  fVar24 = fStack_10c;
                  local_e8 = uVar22;
                  do {
                    fVar63 = (float)uVar49;
                    if ((*(uint *)(&DAT_14c72ece0 + (uVar49 + (longlong)local_c0) * 4) &
                         (uint)fVar24 & 0xffff) != 0) {
                      fVar24 = 1.0 - fVar70;
                      pauVar33 = (undefined1 (*) [16])
                                 (param_5 +
                                 ((param_8 & 0xff) + 7 & 0xfffffff8) *
                                 (*(uint *)(&DAT_14c72ece0 + (uVar49 + (longlong)local_c0) * 4) >>
                                 0x10));
                      uVar31 = (int)uVar45 * (int)local_118 * 4;
                      puVar53 = (undefined1 *)((longlong)local_f8 + (ulonglong)uVar31 * 4);
                      puVar34 = (undefined1 *)
                                ((longlong)local_f8 +
                                ((ulonglong)(uint)((int)local_118 * 4) + (ulonglong)uVar31) * 4);
                      puVar29 = puVar38;
                      do {
                        uVar49 = uVar22 + 0xf;
                        puVar53 = puVar53 + 0x10;
                        if (uVar49 <= uVar22) {
                          uVar49 = 0xffffffffffffff0;
                        }
                        *(undefined8 *)(puVar29 + -8) = 0x145093554;
                        pfVar41 = local_100;
                        lVar30 = -(uVar49 & 0xfffffffffffffff0);
                        *(undefined1 **)(puVar29 + lVar30 + 0x28) = puVar29 + lVar30 + 0x30;
                        *(float *)(puVar29 + lVar30 + 0x20) = param_7;
                        *(undefined8 *)(puVar29 + lVar30 + -8) = 0x14509357e;
                        FUN_145375ad0(pfVar41);
                        pauVar20 = (undefined1 (*) [16])((longlong)*pauVar33 + 0xc);
                        *(float *)*pauVar33 =
                             fVar24 * *(float *)(puVar29 + lVar30 + 0x30) + *(float *)*pauVar33;
                        pfVar41 = (float *)(puVar29 + lVar30 + 0x38);
                        *(float *)((longlong)*pauVar33 + 4) =
                             fVar24 * *(float *)(puVar29 + lVar30 + 0x34) +
                             *(float *)((longlong)*pauVar33 + 4);
                        do {
                          fVar63 = *pfVar41;
                          pfVar41 = pfVar41 + 1;
                          *(float *)*pauVar20 = fVar24 * fVar63 + *(float *)*pauVar20;
                          pauVar20 = (undefined1 (*) [16])((longlong)*pauVar20 + 4);
                        } while (pauVar20 <
                                 (undefined1 (*) [16])
                                 ((longlong)*pauVar33 + (ulonglong)(uVar39 & 0xff) * 4));
                        uVar22 = (longlong)local_c8 + 0xf;
                        if (uVar22 <= local_c8) {
                          uVar22 = 0xffffffffffffff0;
                        }
                        *(undefined8 *)(puVar29 + lVar30 + -8) = 0x1450935ec;
                        puVar13 = puStack_e0;
                        lVar40 = -(uVar22 & 0xfffffffffffffff0);
                        puVar38 = puVar29 + lVar40 + lVar30;
                        *(undefined1 **)(puVar29 + lVar40 + lVar30 + 0x28) =
                             puVar29 + lVar40 + lVar30 + 0x30;
                        *(uint *)(puVar29 + lVar40 + lVar30 + 0x20) = uVar48;
                        *(undefined8 *)(puVar29 + lVar40 + lVar30 + -8) = 0x145093616;
                        FUN_145375ad0(puVar13);
                        pauVar20 = pauVar33;
                        do {
                          *(float *)*pauVar20 =
                               fVar70 * *(float *)((longlong)pauVar20 +
                                                  ((longlong)(puVar29 + lVar40 + lVar30 + 0x30) -
                                                  (longlong)pauVar33)) + *(float *)*pauVar20;
                          pauVar20 = (undefined1 (*) [16])((longlong)*pauVar20 + 4);
                        } while (pauVar20 <
                                 (undefined1 (*) [16])
                                 ((longlong)*pauVar33 + (ulonglong)(uVar39 & 0xff) * 4));
                        puVar29 = puVar29 + lVar40 + lVar30;
                        uVar22 = local_e8;
                      } while (puVar53 < puVar34);
                      uVar45 = 0;
                      auVar59 = ZEXT816(0);
                      uVar49 = uVar45;
                      if (7 < uVar48) {
                        fVar68 = 0.0;
                        fVar65 = 0.0;
                        fVar67 = 0.0;
                        fVar69 = 0.0;
                        fVar24 = 0.0;
                        fVar63 = 0.0;
                        fVar64 = 0.0;
                        fVar66 = 0.0;
                        do {
                          pfVar41 = (float *)((longlong)*pauVar33 + uVar49 * 4);
                          iVar14 = (int)uVar49;
                          uVar39 = iVar14 + 8;
                          uVar49 = (ulonglong)uVar39;
                          fVar68 = fVar68 + *pfVar41;
                          fVar65 = fVar65 + pfVar41[1];
                          fVar67 = fVar67 + pfVar41[2];
                          fVar69 = fVar69 + pfVar41[3];
                          pfVar41 = (float *)((longlong)*pauVar33 + (ulonglong)(iVar14 + 4) * 4);
                          fVar24 = fVar24 + *pfVar41;
                          fVar63 = fVar63 + pfVar41[1];
                          fVar64 = fVar64 + pfVar41[2];
                          fVar66 = fVar66 + pfVar41[3];
                        } while (uVar39 < (uVar21 & 0xf8));
                        fVar67 = fVar67 + fVar64;
                        fVar69 = fVar69 + fVar66;
                        auVar58._0_4_ = fVar67 + fVar68 + fVar24;
                        auVar58._4_4_ = fVar69 + fVar65 + fVar63;
                        auVar58._8_4_ = fVar67 + fVar67;
                        auVar58._12_4_ = fVar69 + fVar69;
                        auVar59._4_12_ = auVar58._4_12_;
                        auVar59._0_4_ = auVar58._0_4_ + auVar58._4_4_;
                      }
                      uVar39 = (uint)uVar49;
                      if (uVar39 < uVar48) {
                        if (3 < uVar48 - uVar39) {
                          pfVar41 = (float *)((longlong)*pauVar33 + (uVar49 + 2) * 4);
                          uVar31 = ((uVar48 - uVar39) - 4 >> 2) + 1;
                          uVar46 = (ulonglong)uVar31;
                          uVar39 = uVar39 + uVar31 * 4;
                          uVar49 = uVar49 + (ulonglong)uVar31 * 4;
                          do {
                            auVar59._0_4_ =
                                 auVar59._0_4_ + pfVar41[-2] + pfVar41[-1] + *pfVar41 + pfVar41[1];
                            pfVar41 = pfVar41 + 4;
                            uVar46 = uVar46 - 1;
                          } while (uVar46 != 0);
                          if (uVar48 <= uVar39) goto LAB_14509372a;
                        }
                        pfVar41 = (float *)((longlong)*pauVar33 + uVar49 * 4);
                        uVar49 = (ulonglong)(uVar48 - uVar39);
                        do {
                          auVar59._0_4_ = auVar59._0_4_ + *pfVar41;
                          pfVar41 = pfVar41 + 1;
                          uVar49 = uVar49 - 1;
                        } while (uVar49 != 0);
                      }
LAB_14509372a:
                      if (0.0 < auVar59._0_4_) {
                        fVar24 = fVar62 / auVar59._0_4_;
                        if (0xf < uVar48) {
                          uVar39 = 8;
                          do {
                            pfVar41 = (float *)((longlong)*pauVar33 + uVar45 * 4);
                            fVar63 = pfVar41[1];
                            fVar64 = pfVar41[2];
                            fVar66 = pfVar41[3];
                            pfVar17 = (float *)((longlong)*pauVar33 + uVar45 * 4);
                            *pfVar17 = fVar24 * *pfVar41;
                            pfVar17[1] = fVar24 * fVar63;
                            pfVar17[2] = fVar24 * fVar64;
                            pfVar17[3] = fVar24 * fVar66;
                            uVar42 = (int)uVar45 + 0x10;
                            uVar45 = (ulonglong)uVar42;
                            pfVar41 = (float *)((longlong)*pauVar33 + (ulonglong)(uVar39 - 4) * 4);
                            fVar63 = pfVar41[1];
                            fVar64 = pfVar41[2];
                            fVar66 = pfVar41[3];
                            pfVar17 = (float *)((longlong)*pauVar33 + (ulonglong)(uVar39 - 4) * 4);
                            *pfVar17 = *pfVar41 * fVar24;
                            pfVar17[1] = fVar63 * fVar24;
                            pfVar17[2] = fVar64 * fVar24;
                            pfVar17[3] = fVar66 * fVar24;
                            pfVar41 = (float *)((longlong)*pauVar33 + (ulonglong)uVar39 * 4);
                            fVar63 = pfVar41[1];
                            fVar64 = pfVar41[2];
                            fVar66 = pfVar41[3];
                            pfVar17 = (float *)((longlong)*pauVar33 + (ulonglong)uVar39 * 4);
                            *pfVar17 = *pfVar41 * fVar24;
                            pfVar17[1] = fVar63 * fVar24;
                            pfVar17[2] = fVar64 * fVar24;
                            pfVar17[3] = fVar66 * fVar24;
                            uVar31 = uVar39 + 4;
                            uVar39 = uVar39 + 0x10;
                            pfVar41 = (float *)((longlong)*pauVar33 + (ulonglong)uVar31 * 4);
                            auVar59._0_4_ = fVar24 * *pfVar41;
                            auVar59._4_4_ = fVar24 * pfVar41[1];
                            auVar59._8_4_ = fVar24 * pfVar41[2];
                            auVar59._12_4_ = fVar24 * pfVar41[3];
                            *(undefined1 (*) [16])((longlong)*pauVar33 + (ulonglong)uVar31 * 4) =
                                 auVar59;
                          } while (uVar42 < (uVar21 & 0xf0));
                        }
                        uVar39 = (uint)uVar45;
                        if (uVar39 < uVar48) {
                          if (3 < uVar48 - uVar39) {
                            lVar30 = uVar45 + 2;
                            uVar31 = ((uVar48 - uVar39) - 4 >> 2) + 1;
                            uVar49 = (ulonglong)uVar31;
                            uVar39 = uVar39 + uVar31 * 4;
                            uVar45 = uVar45 + (ulonglong)uVar31 * 4;
                            pfVar41 = (float *)((longlong)*pauVar33 + lVar30 * 4);
                            do {
                              pfVar41[-2] = fVar24 * pfVar41[-2];
                              pfVar41[-1] = fVar24 * pfVar41[-1];
                              auVar59 = ZEXT416((uint)(fVar24 * pfVar41[1]));
                              *pfVar41 = fVar24 * *pfVar41;
                              pfVar41[1] = fVar24 * pfVar41[1];
                              uVar49 = uVar49 - 1;
                              pfVar41 = pfVar41 + 4;
                            } while (uVar49 != 0);
                            if (uVar48 <= uVar39) goto LAB_145093855;
                          }
                          uVar49 = (ulonglong)(uVar48 - uVar39);
                          pfVar41 = (float *)((longlong)*pauVar33 + uVar45 * 4);
                          do {
                            *pfVar41 = fVar24 * *pfVar41;
                            uVar49 = uVar49 - 1;
                            pfVar41 = pfVar41 + 1;
                          } while (uVar49 != 0);
                        }
LAB_145093855:
                        puVar18 = (undefined4 *)*pauVar33;
                        for (; pauVar33 < (undefined1 (*) [16])(puVar18 + (uStack_f0 & 0xfffffff8));
                            pauVar33 = pauVar33 + 1) {
                          auVar59 = sqrtps(auVar59,*pauVar33);
                          *pauVar33 = auVar59;
                        }
                      }
                      afStack_114[1] = (float)((int)afStack_114[1] + 1);
                      uVar45 = (ulonglong)(uint)afStack_114[1];
                      uVar39 = local_108;
                      fVar24 = fStack_10c;
                      fVar63 = afStack_114[0];
                    }
                    afStack_114[0] = (float)((int)fVar63 + 1);
                    uVar49 = (ulonglong)(uint)afStack_114[0];
                  } while ((uint)afStack_114[0] < (uint)fVar52);
                }
              }
            }
            else if ((uVar21 & 0xf00) == 0x200) {
              uVar39 = param_8 & 0xff;
              param_7 = 0.0;
              cVar8 = (&DAT_149c256b0)[param_8 & 0xff];
              iVar14 = 0;
              param_8 = 0;
              uVar21 = (uVar39 + 7 >> 3) << 5;
              uVar22 = (ulonglong)uVar21 + 0xf;
              if (uVar22 <= uVar21) {
                uVar22 = 0xffffffffffffff0;
              }
              *(undefined8 *)(puVar38 + -8) = 0x14509391b;
              lVar30 = -(uVar22 & 0xfffffffffffffff0);
              local_d8 = (ulonglong)((int)fVar52 - 1) << 3;
              puVar18 = (undefined4 *)(puVar38 + lVar30 + 0x30);
              fVar62 = SQRT(fVar62) * (1.0 / (float)(uint)local_118);
              fVar70 = fStack_10c;
              fVar24 = local_118;
              do {
                fVar63 = (float)uVar49;
                if ((*(uint *)(&DAT_14c72ece0 + (uVar49 + local_d8) * 4) & (uint)fVar70 & 0xffff) !=
                    0) {
                  puVar3 = param_5 + (uVar39 + 7 & 0xfffffff8) *
                                     (*(uint *)(&DAT_14c72ece0 + (uVar49 + local_d8) * 4) >> 0x10);
                  uVar21 = iVar14 * (int)fVar24 * 4;
                  uVar22 = (ulonglong)uVar21;
                  puVar51 = (undefined4 *)((longlong)local_f8 + (ulonglong)uVar21 * 4);
                  puVar4 = (undefined4 *)
                           ((longlong)local_f8 + ((uint)((int)fVar24 * 4) + uVar22) * 4);
                  do {
                    uVar6 = *puVar51;
                    uVar7 = puVar51[2];
                    puVar51 = puVar51 + 4;
                    *(undefined4 **)(puVar38 + lVar30 + 0x28) = puVar18;
                    *(undefined4 *)(puVar38 + lVar30 + 0x20) = 1;
                    *(undefined8 *)(puVar38 + lVar30 + -8) = 0x1450939fb;
                    FUN_145099420(uVar6,uVar22,uVar7,cVar8 + 1);
                    uVar49 = 0;
                    uVar22 = uVar49;
                    if (uVar39 != 0) {
                      if ((1 < uVar39) &&
                         ((puVar18 + (uVar39 - 1) < puVar3 || (puVar3 + (uVar39 - 1) < puVar18)))) {
                        if (0xf < uVar39) {
                          uVar21 = 8;
                          do {
                            pfVar41 = (float *)(puVar3 + uVar49);
                            fVar70 = pfVar41[1];
                            fVar24 = pfVar41[2];
                            fVar63 = pfVar41[3];
                            uVar31 = uVar21 - 4;
                            pfVar17 = (float *)(puVar18 + uVar49);
                            fVar64 = pfVar17[1];
                            fVar66 = pfVar17[2];
                            fVar68 = pfVar17[3];
                            pfVar1 = (float *)(puVar3 + uVar49);
                            *pfVar1 = *pfVar17 + *pfVar41;
                            pfVar1[1] = fVar64 + fVar70;
                            pfVar1[2] = fVar66 + fVar24;
                            pfVar1[3] = fVar68 + fVar63;
                            uVar42 = (int)uVar49 + 0x10;
                            uVar49 = (ulonglong)uVar42;
                            pfVar41 = (float *)(puVar3 + uVar31);
                            fVar70 = pfVar41[1];
                            fVar24 = pfVar41[2];
                            fVar63 = pfVar41[3];
                            pfVar17 = (float *)(puVar18 + uVar31);
                            fVar64 = pfVar17[1];
                            fVar66 = pfVar17[2];
                            fVar68 = pfVar17[3];
                            pfVar1 = (float *)(puVar3 + uVar31);
                            *pfVar1 = *pfVar17 + *pfVar41;
                            pfVar1[1] = fVar64 + fVar70;
                            pfVar1[2] = fVar66 + fVar24;
                            pfVar1[3] = fVar68 + fVar63;
                            pfVar41 = (float *)(puVar3 + uVar21);
                            fVar70 = pfVar41[1];
                            fVar24 = pfVar41[2];
                            fVar63 = pfVar41[3];
                            pfVar17 = (float *)(puVar18 + uVar21);
                            fVar64 = pfVar17[1];
                            fVar66 = pfVar17[2];
                            fVar68 = pfVar17[3];
                            pfVar1 = (float *)(puVar3 + uVar21);
                            *pfVar1 = *pfVar17 + *pfVar41;
                            pfVar1[1] = fVar64 + fVar70;
                            pfVar1[2] = fVar66 + fVar24;
                            pfVar1[3] = fVar68 + fVar63;
                            uVar31 = uVar21 + 4;
                            uVar21 = uVar21 + 0x10;
                            pfVar41 = (float *)(puVar3 + uVar31);
                            pfVar17 = (float *)(puVar18 + uVar31);
                            auVar60._0_4_ = *pfVar17 + *pfVar41;
                            auVar60._4_4_ = pfVar17[1] + pfVar41[1];
                            auVar60._8_4_ = pfVar17[2] + pfVar41[2];
                            auVar60._12_4_ = pfVar17[3] + pfVar41[3];
                            *(undefined1 (*) [16])(puVar3 + uVar31) = auVar60;
                          } while (uVar42 < (uVar48 & 0xf0));
                          if ((bVar23 & 0xf) < 2) goto LAB_145093ab9;
                        }
                        do {
                          *(ulonglong *)(puVar3 + uVar49) =
                               CONCAT44((float)((ulonglong)*(undefined8 *)(puVar18 + uVar49) >> 0x20
                                               ) +
                                        (float)((ulonglong)*(undefined8 *)(puVar3 + uVar49) >> 0x20)
                                        ,(float)*(undefined8 *)(puVar18 + uVar49) +
                                         (float)*(undefined8 *)(puVar3 + uVar49));
                          uVar21 = (int)uVar49 + 2;
                          uVar49 = (ulonglong)uVar21;
                        } while (uVar21 < (uVar48 & 0xfe));
                      }
LAB_145093ab9:
                      uVar21 = (uint)uVar49;
                      uVar22 = uVar49;
                      if (uVar21 < uVar39) {
                        if (3 < uVar39 - uVar21) {
                          pfVar41 = (float *)(puVar3 + uVar49 + 1);
                          lVar40 = (longlong)puVar18 - (longlong)puVar3;
                          uVar31 = ((uVar39 - uVar21) - 4 >> 2) + 1;
                          uVar45 = (ulonglong)uVar31;
                          uVar21 = uVar21 + uVar31 * 4;
                          uVar22 = (ulonglong)uVar21;
                          uVar49 = uVar49 + (ulonglong)uVar31 * 4;
                          do {
                            pfVar41[-1] = *(float *)(lVar40 + -4 + (longlong)pfVar41) + pfVar41[-1];
                            *pfVar41 = *(float *)(lVar40 + (longlong)pfVar41) + *pfVar41;
                            pfVar41[1] = *(float *)(lVar40 + 4 + (longlong)pfVar41) + pfVar41[1];
                            pfVar41[2] = *(float *)(lVar40 + 8 + (longlong)pfVar41) + pfVar41[2];
                            pfVar41 = pfVar41 + 4;
                            uVar45 = uVar45 - 1;
                          } while (uVar45 != 0);
                          if (uVar39 <= uVar21) goto LAB_145093b68;
                        }
                        pfVar41 = (float *)(puVar3 + uVar49);
                        uVar49 = (ulonglong)(uVar39 - (int)uVar22);
                        do {
                          *pfVar41 = *(float *)((longlong)pfVar41 +
                                               ((longlong)puVar18 - (longlong)puVar3)) + *pfVar41;
                          pfVar41 = pfVar41 + 1;
                          uVar49 = uVar49 - 1;
                          uVar22 = 0;
                        } while (uVar49 != 0);
                      }
                    }
LAB_145093b68:
                  } while (puVar51 < puVar4);
                  uVar22 = 0;
                  if (uVar39 != 0) {
                    if (0xf < uVar39) {
                      uVar21 = 8;
                      do {
                        pfVar41 = (float *)(puVar3 + uVar22);
                        fVar70 = pfVar41[1];
                        fVar24 = pfVar41[2];
                        fVar63 = pfVar41[3];
                        pfVar17 = (float *)(puVar3 + uVar22);
                        *pfVar17 = *pfVar41 * fVar62;
                        pfVar17[1] = fVar70 * fVar62;
                        pfVar17[2] = fVar24 * fVar62;
                        pfVar17[3] = fVar63 * fVar62;
                        uVar42 = (int)uVar22 + 0x10;
                        uVar22 = (ulonglong)uVar42;
                        pfVar41 = (float *)(puVar3 + (uVar21 - 4));
                        fVar70 = pfVar41[1];
                        fVar24 = pfVar41[2];
                        fVar63 = pfVar41[3];
                        pfVar17 = (float *)(puVar3 + (uVar21 - 4));
                        *pfVar17 = *pfVar41 * fVar62;
                        pfVar17[1] = fVar70 * fVar62;
                        pfVar17[2] = fVar24 * fVar62;
                        pfVar17[3] = fVar63 * fVar62;
                        pfVar41 = (float *)(puVar3 + uVar21);
                        fVar70 = pfVar41[1];
                        fVar24 = pfVar41[2];
                        fVar63 = pfVar41[3];
                        pfVar17 = (float *)(puVar3 + uVar21);
                        *pfVar17 = *pfVar41 * fVar62;
                        pfVar17[1] = fVar70 * fVar62;
                        pfVar17[2] = fVar24 * fVar62;
                        pfVar17[3] = fVar63 * fVar62;
                        uVar31 = uVar21 + 4;
                        uVar21 = uVar21 + 0x10;
                        pfVar41 = (float *)(puVar3 + uVar31);
                        auVar61._0_4_ = fVar62 * *pfVar41;
                        auVar61._4_4_ = fVar62 * pfVar41[1];
                        auVar61._8_4_ = fVar62 * pfVar41[2];
                        auVar61._12_4_ = fVar62 * pfVar41[3];
                        *(undefined1 (*) [16])(puVar3 + uVar31) = auVar61;
                      } while (uVar42 < (uVar48 & 0xf0));
                    }
                    uVar21 = (uint)uVar22;
                    if (uVar21 < uVar39) {
                      uVar49 = uVar22;
                      if (3 < uVar39 - uVar21) {
                        lVar40 = uVar22 + 2;
                        uVar31 = ((uVar39 - uVar21) - 4 >> 2) + 1;
                        uVar45 = (ulonglong)uVar31;
                        uVar21 = uVar21 + uVar31 * 4;
                        uVar49 = (ulonglong)uVar21;
                        uVar22 = uVar22 + (ulonglong)uVar31 * 4;
                        pfVar41 = (float *)(puVar3 + lVar40);
                        do {
                          pfVar41[-2] = fVar62 * pfVar41[-2];
                          pfVar41[-1] = fVar62 * pfVar41[-1];
                          *pfVar41 = fVar62 * *pfVar41;
                          pfVar41[1] = fVar62 * pfVar41[1];
                          uVar45 = uVar45 - 1;
                          pfVar41 = pfVar41 + 4;
                        } while (uVar45 != 0);
                        if (uVar39 <= uVar21) goto LAB_145093c83;
                      }
                      uVar49 = (ulonglong)(uVar39 - (int)uVar49);
                      pfVar41 = (float *)(puVar3 + uVar22);
                      do {
                        *pfVar41 = fVar62 * *pfVar41;
                        uVar49 = uVar49 - 1;
                        pfVar41 = pfVar41 + 1;
                      } while (uVar49 != 0);
                    }
                  }
LAB_145093c83:
                  iVar14 = param_8 + 1;
                  fVar70 = fStack_10c;
                  fVar63 = param_7;
                  fVar24 = local_118;
                  param_8 = iVar14;
                }
                param_7 = (float)((int)fVar63 + 1);
                uVar49 = (ulonglong)(uint)param_7;
              } while ((uint)param_7 < (uint)fVar52);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 145093d40 FUN_145093d40 body=862 status=ok
// SIG undefined FUN_145093d40(void)

void FUN_145093d40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,uint param_6,uint param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar14;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar15;
  
  uVar12 = param_7 & 0xff;
  uVar11 = uVar12 + 7 >> 3;
  iVar2 = uVar11 * (param_6 & 0xff);
  if (iVar2 != 0) {
    memset(param_8,0,(ulonglong)(uint)(iVar2 * 8) << 2);
  }
  uVar3 = param_6 >> 8 & 0xf;
  uVar4 = param_7 >> 8 & 0xf;
  if (uVar3 == uVar4) {
    if (uVar4 == 1) {
      FUN_14509d4d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      FUN_145096cb0(param_6,param_7,param_8);
    }
  }
  else {
    if (uVar3 == 2) {
      if ((param_7 & 0xf00) != 0x200) {
        FUN_1450954b0(param_6,param_7,param_8,param_9);
        return;
      }
    }
    else if ((uVar3 == 1) && ((param_7 & 0xf00) == 0x200)) {
      uVar3 = param_6 >> 0xc;
      if ((char)((char)param_6 - (char)(uVar3 - (uVar3 & 0xffff7) >> 3)) == '\x01') {
        *param_8 = 0x3f800000;
        return;
      }
      bVar6 = 0;
      for (uVar4 = uVar3 & 0x637; uVar4 != 0; uVar4 = uVar4 & uVar4 - 1) {
        bVar6 = bVar6 + 1;
      }
      uVar4 = 0;
      uVar10 = (uint)bVar6;
      if (bVar6 != 0) {
        cVar1 = (&DAT_149c256b0)[uVar12];
        puVar13 = &DAT_14c72f0d0 + (ulonglong)(uVar10 - 1) * 7;
        uVar9 = uVar4;
        do {
          FUN_145376c80(*puVar13 ^ 0x80000000);
          FUN_145099420(param_8 + uVar11 * uVar9 * 8,0,extraout_XMM0_Db,cVar1 + 1,1,
                        param_8 + uVar11 * uVar9 * 8);
          uVar9 = uVar9 + 1;
          puVar13 = puVar13 + 1;
        } while (uVar9 < uVar10);
      }
      bVar6 = 0;
      for (uVar3 = uVar3 & 0xff9c0; uVar3 != 0; uVar3 = uVar3 & uVar3 - 1) {
        bVar6 = bVar6 + 1;
      }
      if (bVar6 == 0) {
        return;
      }
      cVar1 = (&DAT_149c256b0)[uVar12];
      lVar5 = (ulonglong)(bVar6 - 1) * 0x18;
      do {
        uVar14 = FUN_145376cc3(*(undefined4 *)(&DAT_14c72f230 + lVar5),
                               *(uint *)(&DAT_14c72f1a0 + lVar5) ^ 0x80000000);
        fVar15 = (float)((ulonglong)uVar14 >> 0x20);
        FUN_145099420(extraout_XMM0_Dc * fVar15,(int)uVar14,extraout_XMM0_Dd * fVar15,cVar1 + 1,1,
                      param_8 + (uVar10 + uVar4) * ((param_7 & 0xff) + 7 & 0xfffffff8));
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 4;
      } while (uVar4 < bVar6);
      return;
    }
    if (uVar12 <= (param_6 & 0xff)) {
      param_6 = param_7;
    }
    uVar7 = 0;
    if ((param_6 & 0xff) != 0) {
      uVar8 = uVar7;
      do {
        iVar2 = (int)uVar8;
        uVar11 = iVar2 + 1;
        uVar8 = (ulonglong)uVar11;
        lVar5 = ((param_7 & 0xff) + 7 & 0xfffffff8) * iVar2 + uVar7;
        uVar7 = uVar7 + 1;
        param_8[lVar5] = 0x3f800000;
      } while (uVar11 < (param_6 & 0xff));
    }
  }
  return;
}



// FUNCTION 1450940a0 FUN_1450940a0 body=28 status=ok
// SIG undefined FUN_1450940a0(void)

void FUN_1450940a0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = 0x42340000;
  param_2[1] = 0x42b40000;
  param_2[2] = 0x43070000;
  *param_3 = 0x425acccd;
  return;
}



// FUNCTION 1450940c0 FUN_1450940c0 body=229 status=ok
// SIG undefined FUN_1450940c0(void)

undefined8 FUN_1450940c0(float *param_1,uint param_2,float *param_3)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  uVar2 = 0;
  pfVar1 = param_1;
  if (param_2 != 0) {
    do {
      if (180.0 < *pfVar1 || *pfVar1 == 180.0) {
        return 2;
      }
      uVar2 = uVar2 + 1;
      pfVar1 = pfVar1 + 1;
    } while (uVar2 < param_2);
  }
  fVar4 = *param_1;
  if (90.0 <= fVar4) {
    return 2;
  }
  uVar2 = 1;
  pfVar1 = param_1;
  if (1 < param_2) {
    do {
      fVar3 = pfVar1[1];
      if (fVar3 < param_1[uVar2 - 1]) {
        return 2;
      }
      fVar3 = fVar3 - param_1[uVar2 - 1];
      if (fVar3 == 0.0) {
        return 2;
      }
      if (180.0 <= fVar3) {
        return 2;
      }
      if (fVar4 <= fVar3) {
        fVar3 = fVar4;
      }
      uVar2 = uVar2 + 1;
      fVar4 = fVar3;
      pfVar1 = pfVar1 + 1;
    } while (uVar2 < param_2);
    fVar4 = 360.0 - (param_1[param_2 - 1] + param_1[param_2 - 1]);
    if (fVar3 <= fVar4) {
      fVar4 = fVar3;
    }
  }
  if (fVar4 < 5.0) {
    return 0x1f;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = fVar4;
  }
  return 1;
}



// FUNCTION 1450941b0 FUN_1450941b0 body=347 status=ok
// SIG undefined FUN_1450941b0(void)

void FUN_1450941b0(ulonglong param_1,uint param_2,ulonglong param_3)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float *pfVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  
  uVar11 = 0;
  if (param_2 != 0) {
    if ((0xf < param_2) &&
       ((param_1 + (ulonglong)(param_2 - 1) * 4 < param_3 ||
        (param_3 + (ulonglong)(param_2 - 1) * 4 < param_1)))) {
      uVar10 = 8;
      do {
        pfVar7 = (float *)(param_1 + uVar11 * 4);
        fVar3 = pfVar7[1];
        fVar4 = pfVar7[2];
        fVar5 = pfVar7[3];
        pfVar2 = (float *)(param_3 + uVar11 * 4);
        *pfVar2 = *pfVar7 * 57.295776;
        pfVar2[1] = fVar3 * 57.295776;
        pfVar2[2] = fVar4 * 57.295776;
        pfVar2[3] = fVar5 * 57.295776;
        uVar13 = (int)uVar11 + 0x10;
        uVar11 = (ulonglong)uVar13;
        pfVar7 = (float *)(param_1 + (ulonglong)(uVar10 - 4) * 4);
        fVar3 = pfVar7[1];
        fVar4 = pfVar7[2];
        fVar5 = pfVar7[3];
        pfVar2 = (float *)(param_3 + (ulonglong)(uVar10 - 4) * 4);
        *pfVar2 = *pfVar7 * 57.295776;
        pfVar2[1] = fVar3 * 57.295776;
        pfVar2[2] = fVar4 * 57.295776;
        pfVar2[3] = fVar5 * 57.295776;
        pfVar7 = (float *)(param_1 + (ulonglong)uVar10 * 4);
        fVar3 = pfVar7[1];
        fVar4 = pfVar7[2];
        fVar5 = pfVar7[3];
        pfVar2 = (float *)(param_3 + (ulonglong)uVar10 * 4);
        *pfVar2 = *pfVar7 * 57.295776;
        pfVar2[1] = fVar3 * 57.295776;
        pfVar2[2] = fVar4 * 57.295776;
        pfVar2[3] = fVar5 * 57.295776;
        uVar6 = uVar10 + 4;
        uVar10 = uVar10 + 0x10;
        pfVar7 = (float *)(param_1 + (ulonglong)uVar6 * 4);
        fVar3 = pfVar7[1];
        fVar4 = pfVar7[2];
        fVar5 = pfVar7[3];
        pfVar2 = (float *)(param_3 + (ulonglong)uVar6 * 4);
        *pfVar2 = *pfVar7 * 57.295776;
        pfVar2[1] = fVar3 * 57.295776;
        pfVar2[2] = fVar4 * 57.295776;
        pfVar2[3] = fVar5 * 57.295776;
      } while (uVar13 < (param_2 & 0xfffffff0));
    }
    uVar10 = (uint)uVar11;
    if (uVar10 < param_2) {
      lVar12 = param_1 - param_3;
      uVar8 = uVar11;
      if (3 < param_2 - uVar10) {
        lVar1 = uVar11 * 4;
        uVar6 = ((param_2 - uVar10) - 4 >> 2) + 1;
        uVar9 = (ulonglong)uVar6;
        uVar10 = uVar10 + uVar6 * 4;
        uVar8 = (ulonglong)uVar10;
        uVar11 = uVar11 + (ulonglong)uVar6 * 4;
        pfVar7 = (float *)(param_3 + 4 + lVar1);
        do {
          pfVar7[-1] = *(float *)((longlong)pfVar7 + lVar12 + -4) * 57.295776;
          *pfVar7 = *(float *)((longlong)pfVar7 + lVar12) * 57.295776;
          pfVar7[1] = *(float *)((longlong)pfVar7 + lVar12 + 4) * 57.295776;
          pfVar7[2] = *(float *)((longlong)pfVar7 + lVar12 + 8) * 57.295776;
          uVar9 = uVar9 - 1;
          pfVar7 = pfVar7 + 4;
        } while (uVar9 != 0);
        if (param_2 <= uVar10) {
          return;
        }
      }
      uVar8 = (ulonglong)(param_2 - (int)uVar8);
      pfVar7 = (float *)(param_3 + uVar11 * 4);
      do {
        *pfVar7 = *(float *)(lVar12 + (longlong)pfVar7) * 57.295776;
        uVar8 = uVar8 - 1;
        pfVar7 = pfVar7 + 1;
      } while (uVar8 != 0);
    }
  }
  return;
}



// FUNCTION 145094310 FUN_145094310 body=347 status=ok
// SIG undefined FUN_145094310(void)

void FUN_145094310(ulonglong param_1,uint param_2,ulonglong param_3)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float *pfVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  
  uVar11 = 0;
  if (param_2 != 0) {
    if ((0xf < param_2) &&
       ((param_1 + (ulonglong)(param_2 - 1) * 4 < param_3 ||
        (param_3 + (ulonglong)(param_2 - 1) * 4 < param_1)))) {
      uVar10 = 8;
      do {
        pfVar7 = (float *)(param_1 + uVar11 * 4);
        fVar3 = pfVar7[1];
        fVar4 = pfVar7[2];
        fVar5 = pfVar7[3];
        pfVar2 = (float *)(param_3 + uVar11 * 4);
        *pfVar2 = *pfVar7 * 0.017453294;
        pfVar2[1] = fVar3 * 0.017453294;
        pfVar2[2] = fVar4 * 0.017453294;
        pfVar2[3] = fVar5 * 0.017453294;
        uVar13 = (int)uVar11 + 0x10;
        uVar11 = (ulonglong)uVar13;
        pfVar7 = (float *)(param_1 + (ulonglong)(uVar10 - 4) * 4);
        fVar3 = pfVar7[1];
        fVar4 = pfVar7[2];
        fVar5 = pfVar7[3];
        pfVar2 = (float *)(param_3 + (ulonglong)(uVar10 - 4) * 4);
        *pfVar2 = *pfVar7 * 0.017453294;
        pfVar2[1] = fVar3 * 0.017453294;
        pfVar2[2] = fVar4 * 0.017453294;
        pfVar2[3] = fVar5 * 0.017453294;
        pfVar7 = (float *)(param_1 + (ulonglong)uVar10 * 4);
        fVar3 = pfVar7[1];
        fVar4 = pfVar7[2];
        fVar5 = pfVar7[3];
        pfVar2 = (float *)(param_3 + (ulonglong)uVar10 * 4);
        *pfVar2 = *pfVar7 * 0.017453294;
        pfVar2[1] = fVar3 * 0.017453294;
        pfVar2[2] = fVar4 * 0.017453294;
        pfVar2[3] = fVar5 * 0.017453294;
        uVar6 = uVar10 + 4;
        uVar10 = uVar10 + 0x10;
        pfVar7 = (float *)(param_1 + (ulonglong)uVar6 * 4);
        fVar3 = pfVar7[1];
        fVar4 = pfVar7[2];
        fVar5 = pfVar7[3];
        pfVar2 = (float *)(param_3 + (ulonglong)uVar6 * 4);
        *pfVar2 = *pfVar7 * 0.017453294;
        pfVar2[1] = fVar3 * 0.017453294;
        pfVar2[2] = fVar4 * 0.017453294;
        pfVar2[3] = fVar5 * 0.017453294;
      } while (uVar13 < (param_2 & 0xfffffff0));
    }
    uVar10 = (uint)uVar11;
    if (uVar10 < param_2) {
      lVar12 = param_1 - param_3;
      uVar8 = uVar11;
      if (3 < param_2 - uVar10) {
        lVar1 = uVar11 * 4;
        uVar6 = ((param_2 - uVar10) - 4 >> 2) + 1;
        uVar9 = (ulonglong)uVar6;
        uVar10 = uVar10 + uVar6 * 4;
        uVar8 = (ulonglong)uVar10;
        uVar11 = uVar11 + (ulonglong)uVar6 * 4;
        pfVar7 = (float *)(param_3 + 4 + lVar1);
        do {
          pfVar7[-1] = *(float *)((longlong)pfVar7 + lVar12 + -4) * 0.017453294;
          *pfVar7 = *(float *)((longlong)pfVar7 + lVar12) * 0.017453294;
          pfVar7[1] = *(float *)((longlong)pfVar7 + lVar12 + 4) * 0.017453294;
          pfVar7[2] = *(float *)((longlong)pfVar7 + lVar12 + 8) * 0.017453294;
          uVar9 = uVar9 - 1;
          pfVar7 = pfVar7 + 4;
        } while (uVar9 != 0);
        if (param_2 <= uVar10) {
          return;
        }
      }
      uVar8 = (ulonglong)(param_2 - (int)uVar8);
      pfVar7 = (float *)(param_3 + uVar11 * 4);
      do {
        *pfVar7 = *(float *)(lVar12 + (longlong)pfVar7) * 0.017453294;
        uVar8 = uVar8 - 1;
        pfVar7 = pfVar7 + 1;
      } while (uVar8 != 0);
    }
  }
  return;
}



// FUNCTION 145094470 FUN_145094470 body=1108 status=ok
// SIG undefined FUN_145094470(void)

undefined8 FUN_145094470(uint param_1,float param_2,longlong *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  float *pfVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar15 = (1.0 / (float)(param_1 & 0x7fffffff)) * 3.1415927;
  uVar5 = (ulonglong)(fVar15 * param_2 + 1.01);
  uVar4 = (uint)uVar5;
  if ((int)param_1 < 0) {
    uVar4 = uVar4 + (uVar4 & 1);
    cVar1 = FUN_145096ed0(param_3,uVar4 * 8);
    if (cVar1 != '\x01') {
      return 2;
    }
    pfVar3 = (float *)*param_3;
    fVar15 = cosf(fVar15);
    fVar16 = (1.0 - fVar15) / (float)uVar4;
    fVar15 = fVar16 * 0.5 + fVar15;
    if (uVar4 != 0) {
      uVar6 = FUN_145376c80(0);
      uVar7 = FUN_145376c80(0x3f490fdb);
      uVar8 = FUN_145376c80(0x3fc90fdb);
      uVar9 = FUN_145376c80(0x4016cbe4);
      uVar10 = FUN_145376c80(0x40490fdb);
      uVar11 = FUN_145376c80(0x407b53d2);
      uVar12 = FUN_145376c80(0x4096cbe4);
      uVar13 = FUN_145376c80(0x40afeddf);
      uVar5 = (ulonglong)uVar4;
      do {
        pfVar3[2] = fVar15;
        fVar14 = fVar15 * fVar15;
        pfVar3[3] = 0.0;
        pfVar3[6] = fVar15;
        pfVar3[10] = fVar15;
        pfVar3[0xe] = fVar15;
        pfVar3[0x12] = fVar15;
        pfVar3[0x16] = fVar15;
        pfVar3[0x1a] = fVar15;
        pfVar3[0x1e] = fVar15;
        fVar15 = fVar15 + fVar16;
        fVar14 = SQRT(1.0 - fVar14);
        pfVar3[7] = 0.0;
        pfVar3[0xb] = 0.0;
        pfVar3[0xf] = 0.0;
        pfVar3[0x13] = 0.0;
        pfVar3[0x17] = 0.0;
        pfVar3[0x1b] = 0.0;
        pfVar3[0x1f] = 0.0;
        *pfVar3 = (float)((ulonglong)uVar6 >> 0x20) * fVar14;
        pfVar3[1] = (float)uVar6 * fVar14;
        pfVar3[4] = (float)((ulonglong)uVar7 >> 0x20) * fVar14;
        pfVar3[5] = (float)uVar7 * fVar14;
        pfVar3[8] = (float)((ulonglong)uVar8 >> 0x20) * fVar14;
        pfVar3[9] = (float)uVar8 * fVar14;
        pfVar3[0xc] = (float)((ulonglong)uVar9 >> 0x20) * fVar14;
        pfVar3[0xd] = (float)uVar9 * fVar14;
        pfVar3[0x10] = (float)((ulonglong)uVar10 >> 0x20) * fVar14;
        pfVar3[0x11] = (float)uVar10 * fVar14;
        pfVar3[0x14] = (float)((ulonglong)uVar11 >> 0x20) * fVar14;
        pfVar3[0x15] = (float)uVar11 * fVar14;
        pfVar3[0x18] = (float)((ulonglong)uVar12 >> 0x20) * fVar14;
        pfVar3[0x19] = (float)uVar12 * fVar14;
        pfVar3[0x1c] = (float)((ulonglong)uVar13 >> 0x20) * fVar14;
        pfVar3[0x1d] = (float)uVar13 * fVar14;
        pfVar3 = pfVar3 + 0x20;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  else {
    if ((uVar5 & 3) != 0) {
      uVar5 = (ulonglong)(uVar4 + (4 - (uVar4 & 3)));
    }
    cVar1 = FUN_145096ed0(param_3,uVar5 & 0xffffffff);
    if (cVar1 != '\x01') {
      return 2;
    }
    puVar2 = (undefined4 *)*param_3;
    uVar4 = 0;
    fVar15 = fVar15 / (float)(uVar5 & 0xffffffff);
    fVar16 = (float)((uint)uVar5 - 1) * fVar15;
    do {
      uVar6 = FUN_145376c80(-fVar16);
      *puVar2 = (int)uVar6;
      fVar16 = fVar16 - (fVar15 + fVar15);
      uVar4 = uVar4 + 1;
      puVar2[2] = (int)((ulonglong)uVar6 >> 0x20);
      puVar2[1] = 0;
      puVar2[3] = 0;
      puVar2 = puVar2 + 4;
    } while (uVar4 < (uint)uVar5);
  }
  return 1;
}



// FUNCTION 1450948d0 FUN_1450948d0 body=537 status=ok
// SIG undefined FUN_1450948d0(void)

int FUN_1450948d0(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                 undefined1 (*param_5) [16])

{
  undefined1 *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined1 in_XMM1 [16];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  uVar5 = param_3 >> 0xc & 0xfffff;
  uVar9 = (uint)uVar5;
  uVar4 = (uVar9 & 0xfffffff7) << 0xc;
  uVar3 = (uint)param_3 & 0xf00;
  uVar8 = (uint)param_3 - ((uint)(uVar5 >> 3) & 0x1ffe0001) & 0xff;
  fVar10 = in_XMM1._0_4_;
  if ((uVar8 - 1 < 7) && (uVar9 = uVar9 & 0xffff7, (uVar4 & 0x63f000) >> 0xc == uVar9)) {
    iVar6 = 1;
    if ((uVar3 == 0x100) && (1 < uVar8)) {
      lVar2 = FUN_145090ef0(param_1);
      if (lVar2 == 0) {
        lVar2 = FUN_1450907b0(param_1);
        iVar6 = 2 - (uint)(lVar2 != 0);
      }
      if ((uVar4 & 0x4000) != 0) {
        if (iVar6 != 1) {
          return iVar6;
        }
        lVar2 = FUN_145090ef0(param_1);
        if (lVar2 == 0) {
          lVar2 = FUN_1450907b0(param_1);
          iVar6 = 2 - (uint)(lVar2 != 0);
        }
      }
      if (iVar6 != 1) {
        return iVar6;
      }
    }
    iVar6 = 1;
    iVar7 = (int)(param_3 & 0xff);
    if (iVar7 != 0) {
      memset(param_5,0,(param_3 & 0xff) << 2);
    }
    if ((uVar9 == 3) && (*(char *)(param_1 + 0x30) == '\x01')) {
      fVar10 = sinf(fVar10);
      FUN_145094af0(fVar10,param_5);
    }
    else {
      lVar2 = FUN_145090710(param_1,uVar4 | uVar8 | uVar3);
      if (lVar2 == 0) goto LAB_145094ac6;
      uVar11 = FUN_145376c80();
      local_40 = (undefined4)((ulonglong)uVar11 >> 0x20);
      local_48 = (undefined4)uVar11;
      uVar3 = uVar8 + 2;
      if (3 < uVar8) {
        uVar3 = uVar8;
      }
      local_44 = 0;
      FUN_145094b60(lVar2,uVar3,&local_48,0x3f800000,&DAT_14c72ece0 + (ulonglong)(uVar8 - 1) * 0x20,
                    param_5);
    }
    puVar1 = *param_5;
    for (; param_5 < (undefined1 (*) [16])(puVar1 + ((ulonglong)(iVar7 + 7) & 0xfffffff8) * 4);
        param_5 = param_5 + 1) {
      in_XMM1 = sqrtps(in_XMM1,*param_5);
      *param_5 = in_XMM1;
    }
  }
  else {
LAB_145094ac6:
    iVar6 = 2;
  }
  return iVar6;
}



// FUNCTION 145094af0 FUN_145094af0 body=100 status=ok
// SIG undefined FUN_145094af0(void)

void FUN_145094af0(float param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = (param_1 * 0.5 + 0.70710677) - param_1 * 0.20710677 * param_1;
  fVar1 = fVar1 * fVar1;
  if (fVar1 <= 1.0) {
    param_2[1] = fVar1 + param_2[1];
    *param_2 = (1.0 - fVar1) + *param_2;
    return;
  }
  param_2[1] = fVar1 + param_2[1];
  *param_2 = *param_2 + 0.0;
  return;
}



// FUNCTION 145094b60 FUN_145094b60 body=243 status=ok
// SIG undefined FUN_145094b60(void)

void FUN_145094b60(longlong param_1,uint param_2,float *param_3,float param_4,longlong param_5,
                  longlong param_6)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = 0;
  do {
    uVar3 = uVar1;
    uVar2 = (int)uVar3 + 1;
    fVar6 = param_3[2] * *(float *)(param_1 + 4 + uVar3 * 0x10);
    fVar7 = *param_3 * *(float *)(param_1 + uVar3 * 0x10);
    fVar4 = *param_3 * *(float *)(param_1 + 8 + uVar3 * 0x10);
    fVar5 = param_3[2] * *(float *)(param_1 + 0xc + uVar3 * 0x10);
    if ((-fVar6 <= fVar7) && (-fVar5 <= fVar4)) break;
    uVar1 = (ulonglong)uVar2;
  } while (uVar2 < param_2);
  uVar1 = (ulonglong)*(ushort *)(param_5 + 2 + uVar3 * 4);
  fVar4 = fVar4 + fVar5 + 1.1920929e-07;
  fVar5 = fVar6 + fVar7 + 1.1920929e-07;
  fVar4 = fVar4 * fVar4;
  fVar5 = fVar5 * fVar5;
  param_4 = param_4 / (fVar4 + fVar5);
  *(float *)(param_6 + uVar1 * 4) = param_4 * fVar5 + *(float *)(param_6 + uVar1 * 4);
  uVar1 = (ulonglong)*(ushort *)(param_5 + 2 + (ulonglong)uVar2 * 4);
  *(float *)(param_6 + uVar1 * 4) = param_4 * fVar4 + *(float *)(param_6 + uVar1 * 4);
  return;
}



// FUNCTION 145094c60 FUN_145094c60 body=117 status=ok
// SIG undefined FUN_145094c60(void)

void FUN_145094c60(undefined4 param_1,undefined4 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar2;
  
  uVar1 = FUN_145376cc3(param_2,param_1);
  fVar2 = (float)((ulonglong)uVar1 >> 0x20);
  FUN_145099420(extraout_XMM0_Dc * fVar2,(int)uVar1,extraout_XMM0_Dd * fVar2,
                (char)(&DAT_149c256b0)[param_4 & 0xffffffff] + 1,1,param_3);
  return;
}



// FUNCTION 145094ce0 FUN_145094ce0 body=497 status=ok
// SIG undefined FUN_145094ce0(void)

void * FUN_145094ce0(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  
  lVar12 = (longlong)param_1;
  pvVar5 = (void *)(&DAT_14c79bec0)[lVar12];
  if ((pvVar5 == (void *)0x0) && (-1 < param_1)) {
    puVar2 = (&PTR_DAT_14c72ec60)[lVar12];
    uVar1 = *(uint *)(&DAT_14c72ec88 + lVar12 * 4);
    uVar11 = (param_1 + 2) * (param_1 + 2);
    pvVar5 = AK::MemoryMgr::Malloc(0,(ulonglong)(uVar11 * uVar1) << 2);
    if (pvVar5 != (void *)0x0) {
      if (uVar1 != 0) {
        puVar7 = (undefined4 *)(puVar2 + 4);
        uVar13 = (ulonglong)uVar1;
        pvVar6 = pvVar5;
        do {
          FUN_145099420(puVar7[-1],*puVar7,puVar7[1],param_1 + 1,uVar1,pvVar6);
          pvVar6 = (void *)((longlong)pvVar6 + 4);
          puVar7 = puVar7 + 4;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      uVar10 = 0;
      iVar9 = 1;
      if (uVar11 != 0) {
        do {
          uVar3 = 0;
          if (uVar1 < 4) {
            if (uVar1 != 0) {
              fVar14 = (float)(&DAT_149c25698)[iVar9 - 1];
              goto LAB_145094e6b;
            }
          }
          else {
            fVar14 = (float)(&DAT_149c25698)[iVar9 - 1];
            uVar3 = (uVar1 - 4 >> 2) + 1;
            fVar15 = fVar14 * fVar14;
            uVar13 = (ulonglong)uVar3;
            uVar3 = uVar3 * 4;
            uVar8 = uVar10 * uVar1 + 2;
            do {
              *(float *)((longlong)pvVar5 + (ulonglong)(uVar8 - 2) * 4) =
                   fVar15 * *(float *)((longlong)pvVar5 + (ulonglong)(uVar8 - 2) * 4);
              *(float *)((longlong)pvVar5 + (ulonglong)(uVar8 - 1) * 4) =
                   fVar15 * *(float *)((longlong)pvVar5 + (ulonglong)(uVar8 - 1) * 4);
              uVar4 = uVar8 + 1;
              *(float *)((longlong)pvVar5 + (ulonglong)uVar8 * 4) =
                   fVar15 * *(float *)((longlong)pvVar5 + (ulonglong)uVar8 * 4);
              uVar8 = uVar8 + 4;
              *(float *)((longlong)pvVar5 + (ulonglong)uVar4 * 4) =
                   fVar15 * *(float *)((longlong)pvVar5 + (ulonglong)uVar4 * 4);
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
            if (uVar3 < uVar1) {
LAB_145094e6b:
              do {
                uVar13 = (ulonglong)(uVar10 * uVar1 + uVar3);
                uVar3 = uVar3 + 1;
                *(float *)((longlong)pvVar5 + uVar13 * 4) =
                     fVar14 * fVar14 * *(float *)((longlong)pvVar5 + uVar13 * 4);
              } while (uVar3 < uVar1);
            }
          }
          uVar10 = uVar10 + 1;
          iVar9 = iVar9 + uVar10 / (uint)(iVar9 * iVar9);
        } while (uVar10 < uVar11);
      }
      (&DAT_14c79bec0)[lVar12] = pvVar5;
    }
  }
  return pvVar5;
}



// FUNCTION 145094ee0 FUN_145094ee0 body=390 status=ok
// SIG undefined FUN_145094ee0(void)

void FUN_145094ee0(int param_1,longlong param_2,uint param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  
  if (param_3 != 0) {
    puVar4 = (undefined4 *)(param_2 + 4);
    uVar9 = (ulonglong)param_3;
    lVar3 = param_4;
    do {
      FUN_145099420(puVar4[-1],*puVar4,puVar4[1],param_1 + 1,param_3,lVar3);
      lVar3 = lVar3 + 4;
      puVar4 = puVar4 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar7 = 0;
  uVar8 = (param_1 + 2) * (param_1 + 2);
  iVar6 = 1;
  if (uVar8 != 0) {
    do {
      uVar1 = 0;
      if (param_3 < 4) {
        if (param_3 != 0) {
          fVar10 = (float)(&DAT_149c25698)[iVar6 - 1];
          goto LAB_14509501b;
        }
      }
      else {
        fVar10 = (float)(&DAT_149c25698)[iVar6 - 1];
        uVar1 = (param_3 - 4 >> 2) + 1;
        fVar11 = fVar10 * fVar10;
        uVar9 = (ulonglong)uVar1;
        uVar1 = uVar1 * 4;
        uVar5 = uVar7 * param_3 + 2;
        do {
          *(float *)(param_4 + (ulonglong)(uVar5 - 2) * 4) =
               fVar11 * *(float *)(param_4 + (ulonglong)(uVar5 - 2) * 4);
          *(float *)(param_4 + (ulonglong)(uVar5 - 1) * 4) =
               fVar11 * *(float *)(param_4 + (ulonglong)(uVar5 - 1) * 4);
          uVar2 = uVar5 + 1;
          *(float *)(param_4 + (ulonglong)uVar5 * 4) =
               fVar11 * *(float *)(param_4 + (ulonglong)uVar5 * 4);
          uVar5 = uVar5 + 4;
          *(float *)(param_4 + (ulonglong)uVar2 * 4) =
               fVar11 * *(float *)(param_4 + (ulonglong)uVar2 * 4);
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
        if (uVar1 < param_3) {
LAB_14509501b:
          do {
            uVar9 = (ulonglong)(uVar7 * param_3 + uVar1);
            uVar1 = uVar1 + 1;
            *(float *)(param_4 + uVar9 * 4) = fVar10 * fVar10 * *(float *)(param_4 + uVar9 * 4);
          } while (uVar1 < param_3);
        }
      }
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + uVar7 / (uint)(iVar6 * iVar6);
    } while (uVar7 < uVar8);
  }
  return;
}



// FUNCTION 145095070 FUN_145095070 body=15 status=ok
// SIG undefined FUN_145095070(void)

undefined * FUN_145095070(int param_1)

{
  return (&PTR_DAT_14c72ec10)[param_1];
}



// FUNCTION 145095080 FUN_145095080 body=1062 status=ok
// SIG undefined FUN_145095080(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145095080(byte param_1,ulonglong param_2,longlong param_3,int param_4,float *param_5,
                  uint param_6,longlong param_7)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  float *pfVar17;
  uint uVar18;
  longlong lVar19;
  float *_Dst;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int iVar23;
  ulonglong uVar24;
  uint uVar25;
  float *pfVar26;
  float fVar27;
  float fVar28;
  undefined8 auStack_a0 [5];
  float local_78 [4];
  float *local_68;
  ulonglong local_60;
  
  cVar6 = (&DAT_149c256b0)[param_2 & 0xff];
  local_78[1] = (float)(int)cVar6;
  auStack_a0[0] = 0x1450950ce;
  lVar13 = FUN_145094ce0((longlong)cVar6 & 0xffffffff);
  if (lVar13 != 0) {
    uVar7 = *(uint *)(&DAT_14c72ec88 + (longlong)cVar6 * 4);
    uVar15 = (uVar7 + 7 >> 3) << 5;
    uVar14 = (ulonglong)uVar15 + 0xf;
    if (uVar14 <= uVar15) {
      uVar14 = 0xffffffffffffff0;
    }
    auStack_a0[0] = 0x14509510c;
    lVar8 = -(uVar14 & 0xfffffffffffffff0);
    uVar15 = (uint)param_2 & 0xff;
    local_68 = (float *)((longlong)local_78 + lVar8);
    uVar18 = uVar15 + 7 >> 3;
    uVar14 = (ulonglong)(uVar18 << 5) + 0xf;
    if (uVar14 <= uVar18 << 5) {
      uVar14 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_a0 + lVar8) = 0x145095143;
    lVar9 = -(uVar14 & 0xfffffffffffffff0);
    local_78[2] = (float)(uint)param_1;
    local_78[0] = 0.0;
    uVar14 = (longlong)local_78 + lVar9 + lVar8;
    fVar28 = 1.0 / (float)uVar7;
    _Dst = local_68;
    if (param_1 != 0) {
      do {
        fVar27 = local_78[0];
        if (uVar7 != 0) {
          *(undefined8 *)((longlong)auStack_a0 + lVar9 + lVar8) = 0x145095197;
          memset(_Dst,0,(ulonglong)uVar7 << 2);
        }
        uVar25 = 0;
        if (param_6 != 0) {
          local_60 = (ulonglong)(uVar18 * (int)fVar27 * 8);
          pfVar26 = param_5;
          do {
            uVar21 = 0;
            fVar27 = *pfVar26;
            uVar22 = param_3 + (uVar25 * param_4 + local_60) * 4;
            if ((param_2 & 0xff) != 0) {
              if ((0xf < uVar15) &&
                 ((uVar22 + (ulonglong)(uVar15 - 1) * 4 < uVar14 ||
                  (uVar14 + (ulonglong)(uVar15 - 1) * 4 < uVar22)))) {
                uVar24 = 8;
                do {
                  pfVar17 = (float *)(uVar22 + uVar21 * 4);
                  fVar5 = pfVar17[1];
                  fVar10 = pfVar17[2];
                  fVar11 = pfVar17[3];
                  iVar23 = (int)uVar24;
                  pfVar4 = (float *)(uVar14 + uVar21 * 4);
                  *pfVar4 = *pfVar17 * fVar27;
                  pfVar4[1] = fVar5 * fVar27;
                  pfVar4[2] = fVar10 * fVar27;
                  pfVar4[3] = fVar11 * fVar27;
                  uVar20 = (int)uVar21 + 0x10;
                  uVar21 = (ulonglong)uVar20;
                  pfVar17 = (float *)(uVar22 + (ulonglong)(iVar23 - 4) * 4);
                  fVar5 = pfVar17[1];
                  fVar10 = pfVar17[2];
                  fVar11 = pfVar17[3];
                  pfVar4 = (float *)(uVar14 + (ulonglong)(iVar23 - 4) * 4);
                  *pfVar4 = *pfVar17 * fVar27;
                  pfVar4[1] = fVar5 * fVar27;
                  pfVar4[2] = fVar10 * fVar27;
                  pfVar4[3] = fVar11 * fVar27;
                  pfVar17 = (float *)(uVar22 + uVar24 * 4);
                  fVar5 = pfVar17[1];
                  fVar10 = pfVar17[2];
                  fVar11 = pfVar17[3];
                  pfVar4 = (float *)(uVar14 + uVar24 * 4);
                  *pfVar4 = *pfVar17 * fVar27;
                  pfVar4[1] = fVar5 * fVar27;
                  pfVar4[2] = fVar10 * fVar27;
                  pfVar4[3] = fVar11 * fVar27;
                  uVar24 = (ulonglong)(iVar23 + 0x10);
                  pfVar17 = (float *)(uVar22 + (ulonglong)(iVar23 + 4) * 4);
                  fVar5 = pfVar17[1];
                  fVar10 = pfVar17[2];
                  fVar11 = pfVar17[3];
                  pfVar4 = (float *)(uVar14 + (ulonglong)(iVar23 + 4) * 4);
                  *pfVar4 = *pfVar17 * fVar27;
                  pfVar4[1] = fVar5 * fVar27;
                  pfVar4[2] = fVar10 * fVar27;
                  pfVar4[3] = fVar11 * fVar27;
                } while (uVar20 < ((uint)param_2 & 0xf0));
              }
              uVar20 = (uint)uVar21;
              if (uVar20 < uVar15) {
                lVar19 = uVar22 - uVar14;
                uVar22 = uVar21;
                if (3 < uVar15 - uVar20) {
                  lVar3 = uVar21 * 4;
                  uVar12 = ((uVar15 - uVar20) - 4 >> 2) + 1;
                  uVar24 = (ulonglong)uVar12;
                  uVar20 = uVar20 + uVar12 * 4;
                  uVar22 = (ulonglong)uVar20;
                  uVar21 = uVar21 + (ulonglong)uVar12 * 4;
                  pfVar17 = (float *)((longlong)local_78 + lVar3 + lVar9 + lVar8 + 4);
                  do {
                    pfVar4 = pfVar17 + 4;
                    pfVar17[-1] = fVar27 * *(float *)(lVar19 + -0x14 + (longlong)pfVar4);
                    *pfVar17 = fVar27 * *(float *)(lVar19 + -0x10 + (longlong)pfVar4);
                    pfVar17[1] = fVar27 * *(float *)(lVar19 + -0xc + (longlong)pfVar4);
                    pfVar17[2] = fVar27 * *(float *)(lVar19 + -8 + (longlong)pfVar4);
                    uVar24 = uVar24 - 1;
                    pfVar17 = pfVar4;
                  } while (uVar24 != 0);
                  if (uVar15 <= uVar20) goto LAB_14509531b;
                }
                uVar22 = (ulonglong)(uVar15 - (int)uVar22);
                pfVar17 = (float *)(uVar14 + uVar21 * 4);
                do {
                  *pfVar17 = fVar27 * *(float *)((longlong)pfVar17 + lVar19);
                  uVar22 = uVar22 - 1;
                  pfVar17 = pfVar17 + 1;
                } while (uVar22 != 0);
              }
            }
LAB_14509531b:
            uVar20 = 0;
            if (uVar7 != 0) {
              do {
                uVar12 = 0;
                fVar27 = 0.0;
                if (uVar15 < 4) {
                  if ((param_2 & 0xff) != 0) {
                    lVar19 = 0;
                    goto LAB_1450953e1;
                  }
                }
                else {
                  pfVar17 = (float *)((longlong)local_78 + lVar9 + lVar8 + 8);
                  lVar19 = (ulonglong)((uVar15 - 4 >> 2) + 1) << 2;
                  iVar23 = 2;
                  uVar16 = 0;
                  do {
                    pfVar4 = pfVar17 + -1;
                    uVar12 = uVar16 + 4;
                    pfVar1 = pfVar17 + -2;
                    pfVar2 = pfVar17 + 1;
                    fVar5 = *pfVar17;
                    pfVar17 = pfVar17 + 4;
                    fVar27 = fVar27 + (*(float *)(lVar13 + (ulonglong)
                                                           ((iVar23 + -1) * uVar7 + uVar20) * 4) *
                                       *pfVar4 + *(float *)(lVar13 + (ulonglong)
                                                                     (uVar16 * uVar7 + uVar20) * 4)
                                                 * *pfVar1 +
                                      *(float *)(lVar13 + (ulonglong)((iVar23 + 1) * uVar7 + uVar20)
                                                          * 4) * *pfVar2 +
                                      *(float *)(lVar13 + (ulonglong)(iVar23 * uVar7 + uVar20) * 4)
                                      * fVar5) * fVar28;
                    iVar23 = iVar23 + 4;
                    uVar16 = uVar12;
                  } while (uVar12 < uVar15 - 3);
                  if (uVar12 < uVar15) {
LAB_1450953e1:
                    pfVar17 = (float *)(uVar14 + lVar19 * 4);
                    do {
                      uVar16 = uVar12 + 1;
                      fVar5 = *pfVar17;
                      pfVar17 = pfVar17 + 1;
                      fVar27 = fVar27 + *(float *)(lVar13 + (ulonglong)(uVar12 * uVar7 + uVar20) * 4
                                                  ) * fVar5 * fVar28;
                      uVar12 = uVar16;
                    } while (uVar16 < uVar15);
                  }
                }
                if (ABS(*_Dst) < ABS(fVar27)) {
                  *_Dst = fVar27;
                }
                uVar20 = uVar20 + 1;
                _Dst = _Dst + 1;
              } while (uVar20 < uVar7);
            }
            uVar25 = uVar25 + 1;
            pfVar26 = pfVar26 + 1;
            _Dst = local_68;
            fVar27 = local_78[0];
          } while (uVar25 < param_6);
        }
        fVar5 = local_78[1];
        *(undefined8 *)((longlong)auStack_a0 + lVar9 + lVar8) = 0x145095470;
        CAkSpeakerPan::EncodeVector
                  ((int)fVar5,_Dst,(float *)(param_7 + (ulonglong)(uVar18 * (int)fVar27 * 8) * 4));
        local_78[0] = (float)((int)fVar27 + 1U);
      } while ((int)fVar27 + 1U < (uint)local_78[2]);
    }
  }
  return;
}



// FUNCTION 1450954b0 FUN_1450954b0 body=2833 status=ok
// SIG undefined FUN_1450954b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1450954b0(uint param_1,uint param_2,undefined4 *param_3,longlong param_4)

{
  float *pfVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  float *pfVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  uint uVar20;
  uint uVar21;
  undefined1 *puVar22;
  ulonglong uVar23;
  longlong lVar24;
  void *pvVar25;
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  undefined1 (*pauVar29) [16];
  longlong lVar30;
  longlong lVar31;
  uint uVar32;
  float fVar33;
  float fVar36;
  float fVar37;
  undefined1 in_XMM1 [16];
  float fVar38;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 uStack_110;
  undefined1 auStack_108 [32];
  uint auStack_e8 [2];
  longlong lStack_e0;
  float local_d8;
  float fStack_d4;
  float local_d0 [2];
  undefined *local_c8;
  uint local_c0;
  undefined8 local_b8;
  float *local_b0;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  undefined *local_98;
  uint local_90;
  uint local_8c;
  
  puVar22 = auStack_108;
  uVar28 = param_2 >> 0xc;
  uVar20 = uVar28 & 0xffff7;
  uVar32 = param_2 & 0xf00;
  uVar27 = param_2 - (uVar28 - uVar20 >> 3) & 0xff;
  uVar21 = uVar20 << 0xc | uVar32 | uVar27;
  if (uVar27 == 1) {
    *param_3 = 0x3f800000;
    return;
  }
  if ((uVar20 - 3 & 0xfffffffb) == 0) {
    param_3[1] = 0x3f000000;
    *param_3 = 0x3f000000;
    if ((byte)param_1 < 2) {
      return;
    }
    uVar8 = (ulonglong)((param_2 & 0xff) + 7) & 0xfffffff8;
    param_3[uVar8] = 0x3f000000;
    param_3[uVar8 + 1] = 0xbf000000;
    return;
  }
  if (uVar27 == 0) {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  local_b8 = (undefined *)CONCAT44(param_2,param_1);
  uStack_110 = 0x14509557a;
  local_a8 = uVar27;
  local_a4 = uVar21;
  puVar7 = (undefined8 *)FUN_145091120(param_4 + 0x20,local_b8);
  if (puVar7 == (undefined8 *)0x0) {
    if ((uVar32 == 0x100) && ((uVar28 & 0xff9c0) == 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    cVar3 = (&DAT_149c256b0)[(ulonglong)param_1 & 0xff];
    lVar24 = (longlong)cVar3;
    fStack_d4 = (float)(int)cVar3;
    local_c0 = (cVar3 + 2) * (cVar3 + 2);
    if (uVar32 == 0x100) {
      uStack_110 = 0x1450955e3;
      local_b0 = (float *)FUN_145090710(param_4,uVar21);
      if (local_b0 == (float *)0x0) {
        return;
      }
      local_d8 = (float)(uVar27 + 7 >> 3);
      if (bVar2) {
        uVar20 = *(uint *)(&DAT_14c72ecc8 + lVar24 * 4);
        uVar27 = (int)local_d8 * uVar20 * 0x20;
        uVar8 = (ulonglong)uVar27 + 0xf;
        fVar43 = (1.0 / (float)uVar20) * 6.2831855;
        if (uVar8 <= uVar27) {
          uVar8 = 0xffffffffffffff0;
        }
        uStack_110 = 0x1450959a4;
        lVar30 = -(uVar8 & 0xfffffffffffffff0);
        puVar22 = auStack_108 + lVar30;
        uVar27 = (int)local_d8 * uVar20 * 8;
        pvVar25 = (void *)((longlong)&local_d8 + lVar30);
        if (uVar27 != 0) {
          *(undefined8 *)(auStack_108 + lVar30 + -8) = 0x1450959c8;
          memset(pvVar25,0,(ulonglong)uVar27 << 2);
        }
        puVar10 = (&PTR_DAT_14c72eca0)[lVar24];
        if (local_a8 < 4) {
          local_d0[0] = (float)(local_a8 + 2);
        }
        else {
          local_d0[0] = (float)local_a8;
        }
        fVar33 = local_d0[0];
        local_a0 = 0;
        local_b8 = puVar10;
        if (uVar20 != 0) {
          uVar27 = 0;
          local_98 = (undefined *)(ulonglong)(uint)((int)local_d8 * 8);
          local_c8 = &DAT_14c72ece0 + (ulonglong)(local_a8 - 1) * 0x20;
          do {
            pfVar12 = local_b0;
            puVar9 = local_c8;
            uVar21 = (int)local_d8 * uVar27 * 8;
            pauVar29 = (undefined1 (*) [16])((longlong)pvVar25 + (ulonglong)uVar21 * 4);
            *(undefined1 (**) [16])((longlong)&lStack_e0 + lVar30) = pauVar29;
            *(undefined **)((longlong)auStack_e8 + lVar30) = puVar9;
            *(undefined8 *)(auStack_108 + lVar30 + -8) = 0x145095a5a;
            FUN_145094b60(pfVar12,fVar33,puVar10,1.0 / (float)uVar20);
            puVar9 = local_98 + uVar21;
            uVar21 = local_a4;
            for (; local_a4 = uVar21,
                pauVar29 < (undefined1 (*) [16])((longlong)pvVar25 + (longlong)puVar9 * 4);
                pauVar29 = pauVar29 + 1) {
              in_XMM1 = sqrtps(in_XMM1,*pauVar29);
              *pauVar29 = in_XMM1;
              uVar21 = local_a4;
            }
            uVar27 = uVar27 + 1;
            puVar10 = puVar10 + 0x10;
          } while (uVar27 < uVar20);
        }
        fVar33 = fStack_d4;
        lVar31 = (longlong)(int)fStack_d4;
        *(undefined8 *)(auStack_108 + lVar30 + -8) = 0x145095ab6;
        lVar24 = FUN_145099d90(fVar33);
        local_b0 = (float *)(&PTR_DAT_14c72ec38)[lVar31];
      }
      else {
        uVar20 = *(uint *)(&DAT_14c72ec88 + lVar24 * 4);
        uVar27 = (int)local_d8 * uVar20 * 0x20;
        uVar8 = (ulonglong)uVar27 + 0xf;
        fVar43 = (1.0 / (float)uVar20) * 12.566371;
        if (uVar8 <= uVar27) {
          uVar8 = 0xffffffffffffff0;
        }
        uStack_110 = 0x145095669;
        lVar24 = -(uVar8 & 0xfffffffffffffff0);
        puVar22 = auStack_108 + lVar24;
        uVar27 = (int)local_d8 * uVar20 * 8;
        pvVar25 = (void *)((longlong)&local_d8 + lVar24);
        if (uVar27 != 0) {
          *(undefined8 *)(auStack_108 + lVar24 + -8) = 0x14509568d;
          memset(pvVar25,0,(ulonglong)uVar27 << 2);
        }
        uVar27 = local_a8;
        local_d0[0] = 0.0;
        if (uVar20 != 0) {
          uVar28 = 0;
          fVar33 = local_d8;
          do {
            pfVar12 = local_b0;
            uVar21 = (int)fVar33 * uVar28 * 8;
            uVar26 = (ulonglong)uVar21;
            pauVar29 = (undefined1 (*) [16])((longlong)pvVar25 + (ulonglong)uVar21 * 4);
            *(undefined1 (**) [16])((longlong)&lStack_e0 + lVar24) = pauVar29;
            *(uint *)((longlong)auStack_e8 + lVar24) = uVar27;
            *(undefined8 *)(auStack_108 + lVar24 + -8) = 0x1450956f2;
            FUN_145375ad0(pfVar12);
            uVar8 = 0;
            auVar35 = ZEXT816(0);
            if (7 < uVar27) {
              fVar39 = 0.0;
              fVar40 = 0.0;
              fVar41 = 0.0;
              fVar42 = 0.0;
              fVar33 = 0.0;
              fVar36 = 0.0;
              fVar37 = 0.0;
              fVar38 = 0.0;
              do {
                pfVar12 = (float *)((longlong)*pauVar29 + uVar8 * 4);
                iVar11 = (int)uVar8;
                uVar21 = iVar11 + 8;
                uVar8 = (ulonglong)uVar21;
                fVar39 = fVar39 + *pfVar12;
                fVar40 = fVar40 + pfVar12[1];
                fVar41 = fVar41 + pfVar12[2];
                fVar42 = fVar42 + pfVar12[3];
                pfVar12 = (float *)((longlong)*pauVar29 + (ulonglong)(iVar11 + 4) * 4);
                fVar33 = fVar33 + *pfVar12;
                fVar36 = fVar36 + pfVar12[1];
                fVar37 = fVar37 + pfVar12[2];
                fVar38 = fVar38 + pfVar12[3];
              } while (uVar21 < (uVar27 & 0xfffffff8));
              fVar41 = fVar41 + fVar37;
              fVar42 = fVar42 + fVar38;
              auVar34._0_4_ = fVar41 + fVar39 + fVar33;
              auVar34._4_4_ = fVar42 + fVar40 + fVar36;
              auVar34._8_4_ = fVar41 + fVar41;
              auVar34._12_4_ = fVar42 + fVar42;
              auVar35._4_12_ = auVar34._4_12_;
              auVar35._0_4_ = auVar34._0_4_ + auVar34._4_4_;
            }
            uVar21 = (uint)uVar8;
            if (uVar21 < uVar27) {
              uVar18 = uVar8;
              if (3 < uVar27 - uVar21) {
                uVar32 = ((uVar27 - uVar21) - 4 >> 2) + 1;
                pfVar12 = (float *)((longlong)pvVar25 + (uVar8 + 2 + uVar26) * 4);
                uVar23 = (ulonglong)uVar32;
                uVar21 = uVar21 + uVar32 * 4;
                uVar18 = (ulonglong)uVar21;
                uVar8 = uVar8 + (ulonglong)uVar32 * 4;
                do {
                  auVar35._0_4_ = auVar35._0_4_ + pfVar12[-2] + pfVar12[-1] + *pfVar12 + pfVar12[1];
                  pfVar12 = pfVar12 + 4;
                  uVar23 = uVar23 - 1;
                } while (uVar23 != 0);
                if (uVar27 <= uVar21) goto LAB_1450957bd;
              }
              pfVar12 = (float *)((longlong)pvVar25 + (uVar26 + uVar8) * 4);
              uVar8 = (ulonglong)(uVar27 - (int)uVar18);
              do {
                auVar35._0_4_ = auVar35._0_4_ + *pfVar12;
                pfVar12 = pfVar12 + 1;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
LAB_1450957bd:
            fVar33 = local_d8;
            if (0.0 < auVar35._0_4_) {
              uVar8 = 0;
              fVar33 = (1.0 / (float)uVar20) / auVar35._0_4_;
              if (0xf < uVar27) {
                uVar21 = 8;
                do {
                  pfVar12 = (float *)((longlong)*pauVar29 + uVar8 * 4);
                  fVar36 = pfVar12[1];
                  fVar37 = pfVar12[2];
                  fVar38 = pfVar12[3];
                  pfVar1 = (float *)((longlong)*pauVar29 + uVar8 * 4);
                  *pfVar1 = *pfVar12 * fVar33;
                  pfVar1[1] = fVar36 * fVar33;
                  pfVar1[2] = fVar37 * fVar33;
                  pfVar1[3] = fVar38 * fVar33;
                  uVar14 = (int)uVar8 + 0x10;
                  uVar8 = (ulonglong)uVar14;
                  pfVar12 = (float *)((longlong)*pauVar29 + (ulonglong)(uVar21 - 4) * 4);
                  auVar35._0_4_ = fVar33 * *pfVar12;
                  auVar35._4_4_ = fVar33 * pfVar12[1];
                  auVar35._8_4_ = fVar33 * pfVar12[2];
                  auVar35._12_4_ = fVar33 * pfVar12[3];
                  *(undefined1 (*) [16])((longlong)*pauVar29 + (ulonglong)(uVar21 - 4) * 4) =
                       auVar35;
                  pfVar12 = (float *)((longlong)*pauVar29 + (ulonglong)uVar21 * 4);
                  fVar36 = pfVar12[1];
                  fVar37 = pfVar12[2];
                  fVar38 = pfVar12[3];
                  pfVar1 = (float *)((longlong)*pauVar29 + (ulonglong)uVar21 * 4);
                  *pfVar1 = *pfVar12 * fVar33;
                  pfVar1[1] = fVar36 * fVar33;
                  pfVar1[2] = fVar37 * fVar33;
                  pfVar1[3] = fVar38 * fVar33;
                  uVar32 = uVar21 + 4;
                  uVar21 = uVar21 + 0x10;
                  pfVar12 = (float *)((longlong)*pauVar29 + (ulonglong)uVar32 * 4);
                  fVar36 = pfVar12[1];
                  fVar37 = pfVar12[2];
                  fVar38 = pfVar12[3];
                  pfVar1 = (float *)((longlong)*pauVar29 + (ulonglong)uVar32 * 4);
                  *pfVar1 = *pfVar12 * fVar33;
                  pfVar1[1] = fVar36 * fVar33;
                  pfVar1[2] = fVar37 * fVar33;
                  pfVar1[3] = fVar38 * fVar33;
                } while (uVar14 < (uVar27 & 0xfffffff0));
              }
              uVar21 = (uint)uVar8;
              if (uVar21 < uVar27) {
                uVar18 = uVar8;
                if (3 < uVar27 - uVar21) {
                  lVar30 = uVar8 + 2;
                  uVar32 = ((uVar27 - uVar21) - 4 >> 2) + 1;
                  uVar23 = (ulonglong)uVar32;
                  uVar21 = uVar21 + uVar32 * 4;
                  uVar18 = (ulonglong)uVar21;
                  uVar8 = uVar8 + (ulonglong)uVar32 * 4;
                  pfVar12 = (float *)((longlong)pvVar25 + (lVar30 + uVar26) * 4);
                  do {
                    pfVar12[-2] = fVar33 * pfVar12[-2];
                    pfVar12[-1] = fVar33 * pfVar12[-1];
                    auVar35 = ZEXT416((uint)(fVar33 * pfVar12[1]));
                    *pfVar12 = fVar33 * *pfVar12;
                    pfVar12[1] = fVar33 * pfVar12[1];
                    uVar23 = uVar23 - 1;
                    pfVar12 = pfVar12 + 4;
                  } while (uVar23 != 0);
                  if (uVar27 <= uVar21) goto LAB_1450958e7;
                }
                uVar18 = (ulonglong)(uVar27 - (int)uVar18);
                pfVar12 = (float *)((longlong)pvVar25 + (uVar26 + uVar8) * 4);
                do {
                  *pfVar12 = fVar33 * *pfVar12;
                  uVar18 = uVar18 - 1;
                  pfVar12 = pfVar12 + 1;
                } while (uVar18 != 0);
              }
LAB_1450958e7:
              fVar33 = local_d8;
              uVar21 = (int)local_d8 * 8;
              for (; pauVar29 < (undefined1 (*) [16])((longlong)pvVar25 + (uVar21 + uVar26) * 4);
                  pauVar29 = pauVar29 + 1) {
                auVar35 = sqrtps(auVar35,*pauVar29);
                *pauVar29 = auVar35;
              }
            }
            uVar28 = uVar28 + 1;
            uVar21 = local_a4;
          } while (uVar28 < uVar20);
        }
        fVar33 = fStack_d4;
        lVar30 = (longlong)(int)fStack_d4;
        *(undefined8 *)(auStack_108 + lVar24 + -8) = 0x145095948;
        lVar24 = FUN_145094ce0(fVar33);
        local_b0 = (float *)(&PTR_DAT_14c72ec10)[lVar30];
      }
      if (lVar24 == 0) {
        return;
      }
      local_a0 = param_1 & 0xff;
      local_90 = (param_2 & 0xff) + 7 >> 3;
      uVar27 = local_a0 * local_90 * 0x20;
      *(undefined8 *)(puVar22 + -8) = 0x145095afb;
      puVar10 = AK::MemoryMgr::Malloc(0,(ulonglong)uVar27);
      if (puVar10 == (undefined *)0x0) {
        return;
      }
      local_c8 = puVar10;
      *(undefined8 *)(puVar22 + -8) = 0x145095b18;
      memset(puVar10,0,(ulonglong)uVar27);
      uVar27 = 0;
      fStack_d4 = 0.0;
      local_d0[0] = 0.0;
      if (local_c0 != 0) {
        local_d8 = 1.4013e-45;
        do {
          if (local_a0 <= uVar27) break;
          if ((0xb < local_a0) ||
             ((*(uint *)(&DAT_149c256d8 + (ulonglong)(local_a0 - 1) * 4) & (uint)local_d8) == 0)) {
            local_b8 = (undefined *)(ulonglong)local_a8;
            uVar28 = (int)local_d0[0] * uVar20;
            lVar30 = 0;
            local_98 = puVar10 + (ulonglong)(uVar27 * local_90 * 8) * 4;
            do {
              uVar14 = 0;
              uVar32 = 0;
              fVar33 = 0.0;
              if (uVar20 < 4) {
                if (uVar20 != 0) {
                  fVar36 = *local_b0;
                  goto LAB_145095c94;
                }
              }
              else {
                uVar32 = uVar28 + 2;
                fVar36 = *local_b0;
                uVar21 = (uVar21 & 0xff) + 7 & 0xfffffff8;
                fVar37 = fVar36 * fVar43;
                local_8c = ~uVar28;
                do {
                  uVar8 = (ulonglong)uVar32;
                  uVar4 = uVar32 - 2;
                  iVar11 = uVar32 - uVar28;
                  uVar15 = uVar21 * uVar14;
                  uVar5 = uVar32 - 1;
                  uVar14 = uVar14 + 4;
                  uVar6 = uVar32 + 1;
                  iVar16 = uVar32 + ~uVar28;
                  iVar17 = uVar32 + (1 - uVar28);
                  uVar32 = uVar32 + 4;
                  fVar33 = fVar37 * *(float *)(lVar24 + (ulonglong)uVar4 * 4) *
                           *(float *)((longlong)pvVar25 + ((ulonglong)uVar15 + lVar30) * 4) + fVar33
                           + fVar37 * *(float *)(lVar24 + (ulonglong)uVar5 * 4) *
                             *(float *)((longlong)pvVar25 +
                                       ((ulonglong)(iVar16 * uVar21) + lVar30) * 4) +
                           fVar37 * *(float *)(lVar24 + uVar8 * 4) *
                           *(float *)((longlong)pvVar25 +
                                     ((ulonglong)(iVar11 * uVar21) + lVar30) * 4) +
                           fVar37 * *(float *)(lVar24 + (ulonglong)uVar6 * 4) *
                           *(float *)((longlong)pvVar25 +
                                     ((ulonglong)(iVar17 * uVar21) + lVar30) * 4);
                } while (uVar14 < uVar20 - 3);
                uVar21 = local_a4;
                uVar32 = uVar14;
                if (uVar14 < uVar20) {
LAB_145095c94:
                  do {
                    uVar14 = uVar28 + uVar32;
                    uVar4 = ((uVar21 & 0xff) + 7 & 0xfffffff8) * uVar32;
                    uVar32 = uVar32 + 1;
                    fVar33 = fVar33 + fVar36 * fVar43 * *(float *)(lVar24 + (ulonglong)uVar14 * 4) *
                                      *(float *)((longlong)pvVar25 + ((ulonglong)uVar4 + lVar30) * 4
                                                );
                  } while (uVar32 < uVar20);
                }
              }
              *(float *)(puVar10 + (ulonglong)(uVar27 * local_90 * 8) * 4 + lVar30 * 4) = fVar33;
              lVar30 = lVar30 + 1;
              local_b8 = (undefined *)((longlong)local_b8 - 1);
            } while (local_b8 != (undefined *)0x0);
            uVar27 = (int)fStack_d4 + 1;
            fStack_d4 = (float)uVar27;
            puVar10 = local_c8;
          }
          local_b0 = local_b0 + 1;
          local_d0[0] = (float)((int)local_d0[0] + 1);
          local_d8 = (float)((int)local_d8 << 1 | (uint)((int)local_d8 < 0));
        } while ((uint)local_d0[0] < local_c0);
      }
    }
    else {
      uStack_110 = 0x145095d3b;
      local_9c = param_2 & 0xff;
      lVar24 = FUN_145094ce0(fStack_d4);
      uVar28 = (param_2 & 0xff) + 7;
      uVar21 = param_1 & 0xff;
      local_c0 = param_1 & 0xff;
      uVar20 = (uVar28 >> 3) * local_c0 * 0x20;
      uStack_110 = 0x145095d63;
      local_c8 = AK::MemoryMgr::Malloc(0,(ulonglong)uVar20);
      if (local_c8 == (undefined *)0x0) {
        return;
      }
      uStack_110 = 0x145095d7d;
      memset(local_c8,0,(ulonglong)uVar20);
      uVar20 = local_9c;
      uVar32 = 0;
      puVar22 = auStack_108;
      if ((byte)param_1 != 0) {
        fVar43 = (float)(uVar28 & 0xfffffff8);
        puVar10 = local_c8;
        fStack_d4 = fVar43;
        do {
          uVar8 = 0;
          puVar9 = puVar10 + (ulonglong)(uVar32 * (int)fVar43) * 4;
          if (uVar27 != 0) {
            if (3 < uVar27) {
              uVar28 = uVar32 * uVar20;
              puVar10 = (undefined *)(lVar24 + (ulonglong)uVar28 * 4);
              if (((undefined *)(lVar24 + (ulonglong)(uVar28 + (uVar27 - 1)) * 4) < puVar9) ||
                 (puVar9 + (ulonglong)(uVar27 - 1) * 4 < puVar10)) {
                uStack_110 = 0x145095ded;
                memcpy(puVar9,puVar10,(ulonglong)uVar27 << 2);
                puVar10 = local_c8;
                goto LAB_145095e85;
              }
            }
            iVar11 = uVar32 * uVar20;
            uVar26 = uVar8;
            puVar10 = local_c8;
            fVar43 = fStack_d4;
            if (3 < uVar27) {
              uVar26 = (ulonglong)((uVar27 - 4 >> 2) + 1) << 2;
              puVar19 = (undefined4 *)(puVar9 + 8);
              do {
                uVar21 = iVar11 + (int)uVar8;
                uVar28 = (int)uVar8 + 4;
                uVar8 = (ulonglong)uVar28;
                puVar19[-2] = *(undefined4 *)(lVar24 + (ulonglong)uVar21 * 4);
                puVar19[-1] = *(undefined4 *)(lVar24 + (ulonglong)(uVar21 + 1) * 4);
                *puVar19 = *(undefined4 *)(lVar24 + (ulonglong)(uVar21 + 2) * 4);
                puVar19[1] = *(undefined4 *)(lVar24 + (ulonglong)(uVar21 + 3) * 4);
                puVar19 = puVar19 + 4;
              } while (uVar28 < uVar27 - 3);
              uVar21 = local_c0;
              if (uVar27 <= uVar28) goto LAB_145095e85;
            }
            puVar19 = (undefined4 *)(puVar9 + uVar26 * 4);
            do {
              iVar16 = (int)uVar8;
              uVar28 = iVar16 + 1;
              uVar8 = (ulonglong)uVar28;
              *puVar19 = *(undefined4 *)(lVar24 + (ulonglong)(uint)(iVar11 + iVar16) * 4);
              puVar19 = puVar19 + 1;
            } while (uVar28 < uVar27);
          }
LAB_145095e85:
          uVar32 = uVar32 + 1;
          puVar22 = auStack_108;
        } while (uVar32 < uVar21);
      }
    }
    local_b8 = (undefined *)CONCAT44(param_2,param_1);
    puVar10 = local_b8;
    *(undefined8 *)(puVar22 + -8) = 0x145095eb4;
    puVar7 = (undefined8 *)FUN_145091120(param_4 + 0x20,puVar10);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = local_c8;
      goto LAB_145095ecd;
    }
    uVar21 = *(uint *)(param_4 + 0x28);
    if (*(uint *)(param_4 + 0x2c) <= uVar21) {
      *(undefined8 *)(puVar22 + -8) = 0x145095f14;
      cVar3 = FUN_145091040();
      if ((cVar3 == '\0') || (*(uint *)(param_4 + 0x2c) <= uVar21)) goto LAB_145095f56;
    }
    uVar21 = *(uint *)(param_4 + 0x28);
    *(uint *)(param_4 + 0x28) = uVar21 + 1;
    puVar13 = (undefined8 *)((ulonglong)uVar21 * 0x10 + *(longlong *)(param_4 + 0x20));
    if (puVar13 != (undefined8 *)0x0) {
      puVar7 = puVar13 + 1;
      *(undefined1 *)puVar13 = 0;
      *(undefined1 *)((longlong)puVar13 + 4) = 0;
      *puVar7 = local_c8;
      *puVar13 = puVar10;
    }
    if (puVar7 == (undefined8 *)0x0) {
LAB_145095f56:
      puVar10 = local_c8;
      *(undefined8 *)(puVar22 + -8) = 0x145095f61;
      AK::MemoryMgr::Free(0,puVar10);
      return;
    }
  }
LAB_145095ecd:
  uVar21 = ((param_2 & 0xff) + 7 & 0xfffffff8) * (param_1 & 0xff);
  if (uVar21 != 0) {
    pvVar25 = (void *)*puVar7;
    *(undefined8 *)(puVar22 + -8) = 0x145095efc;
    memcpy(param_3,pvVar25,(ulonglong)uVar21 << 2);
  }
  return;
}



// FUNCTION 145095fd0 GetDecodingMatrixShape body=32 status=ok
// SIG void GetDecodingMatrixShape(AkChannelConfig param_1, uint * param_2, int * param_3)

/* public: static void __cdecl CAkSpeakerPan::GetDecodingMatrixShape(struct AkChannelConfig,unsigned
   int & __ptr64,int & __ptr64) */

void __cdecl CAkSpeakerPan::GetDecodingMatrixShape(byte param_1,undefined4 *param_2,int *param_3)

{
  char cVar1;
  
                    /* 0x5095fd0  74
                       ?GetDecodingMatrixShape@CAkSpeakerPan@@SAXUAkChannelConfig@@AEAIAEAH@Z */
  cVar1 = (&DAT_149c256b0)[param_1];
  *param_3 = (int)cVar1;
  *param_2 = *(undefined4 *)(&DAT_14c72ec88 + (longlong)cVar1 * 4);
  return;
}



// FUNCTION 145095ff0 EncodeVector body=610 status=ok
// SIG void EncodeVector(int param_1, float * param_2, float * param_3)

/* public: static void __cdecl CAkSpeakerPan::EncodeVector(int,float * __ptr64,float * __ptr64) */

void __cdecl CAkSpeakerPan::EncodeVector(int param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  float *pfVar9;
  uint uVar10;
  void *pvVar11;
  undefined4 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
                    /* 0x5095ff0  55  ?EncodeVector@CAkSpeakerPan@@SAXHPEAM0@Z */
  lVar16 = (longlong)param_1;
  pvVar7 = (void *)(&DAT_14c79bf18)[lVar16];
  uVar4 = *(uint *)(&DAT_14c72ec88 + lVar16 * 4);
  uVar6 = (param_1 + 2) * (param_1 + 2);
  if (pvVar7 == (void *)0x0) {
    pvVar7 = AK::MemoryMgr::Malloc(0,(ulonglong)(uVar6 * uVar4) << 2);
    if (pvVar7 == (void *)0x0) {
      if (uVar6 == 0) {
        return;
      }
      memset(param_3,0,(ulonglong)uVar6 << 2);
      return;
    }
    if (uVar4 != 0) {
      puVar12 = (undefined4 *)((&PTR_DAT_14c72ec60)[lVar16] + 4);
      uVar15 = (ulonglong)uVar4;
      pvVar11 = pvVar7;
      do {
        FUN_145099420(puVar12[-1],*puVar12,puVar12[1],param_1 + 1,uVar4,pvVar11);
        pvVar11 = (void *)((longlong)pvVar11 + 4);
        puVar12 = puVar12 + 4;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    (&DAT_14c79bf18)[lVar16] = pvVar7;
  }
  uVar10 = 0;
  if (uVar6 != 0) {
    do {
      uVar15 = 0;
      fVar17 = 0.0;
      fVar18 = 0.0;
      fVar19 = 0.0;
      fVar20 = 0.0;
      if (uVar4 != 0) {
        if (7 < uVar4) {
          fVar21 = 0.0;
          fVar22 = 0.0;
          fVar23 = 0.0;
          fVar24 = 0.0;
          do {
            pfVar9 = param_2 + uVar15;
            iVar5 = (int)uVar15;
            uVar8 = uVar10 * uVar4 + iVar5;
            pfVar3 = (float *)((longlong)pvVar7 + (ulonglong)uVar8 * 4);
            fVar21 = fVar21 + *pfVar3 * *pfVar9;
            fVar22 = fVar22 + pfVar3[1] * pfVar9[1];
            fVar23 = fVar23 + pfVar3[2] * pfVar9[2];
            fVar24 = fVar24 + pfVar3[3] * pfVar9[3];
            pfVar9 = (float *)((longlong)pvVar7 + (ulonglong)(uVar8 + 4) * 4);
            uVar15 = (ulonglong)(iVar5 + 8U);
            pfVar3 = param_2 + (iVar5 + 4);
            fVar17 = fVar17 + *pfVar9 * *pfVar3;
            fVar18 = fVar18 + pfVar9[1] * pfVar3[1];
            fVar19 = fVar19 + pfVar9[2] * pfVar3[2];
            fVar20 = fVar20 + pfVar9[3] * pfVar3[3];
          } while (iVar5 + 8U < (uVar4 & 0xfffffff8));
          fVar17 = fVar23 + fVar19 + fVar21 + fVar17 + fVar24 + fVar20 + fVar22 + fVar18;
        }
        uVar8 = (uint)uVar15;
        if (uVar8 < uVar4) {
          uVar14 = uVar15;
          if (3 < uVar4 - uVar8) {
            pfVar9 = param_2 + uVar15 + 2;
            uVar14 = uVar15 + (ulonglong)((((uVar4 - 3) - uVar8) - 1 >> 2) + 1) * 4;
            do {
              uVar8 = uVar4 * uVar10 + (int)uVar15;
              uVar13 = (int)uVar15 + 4;
              uVar15 = (ulonglong)uVar13;
              pfVar3 = pfVar9 + -2;
              pfVar1 = pfVar9 + -1;
              fVar18 = *pfVar9;
              pfVar2 = pfVar9 + 1;
              pfVar9 = pfVar9 + 4;
              fVar17 = *(float *)((longlong)pvVar7 + (ulonglong)uVar8 * 4) * *pfVar3 + fVar17 +
                       *(float *)((longlong)pvVar7 + (ulonglong)(uVar8 + 1) * 4) * *pfVar1 +
                       *(float *)((longlong)pvVar7 + (ulonglong)(uVar8 + 2) * 4) * fVar18 +
                       *(float *)((longlong)pvVar7 + (ulonglong)(uVar8 + 3) * 4) * *pfVar2;
            } while (uVar13 < uVar4 - 3);
            if (uVar4 <= uVar13) goto LAB_14509620e;
          }
          pfVar9 = param_2 + uVar14;
          do {
            iVar5 = (int)uVar15;
            uVar8 = iVar5 + 1;
            uVar15 = (ulonglong)uVar8;
            fVar18 = *pfVar9;
            pfVar9 = pfVar9 + 1;
            fVar17 = fVar17 + *(float *)((longlong)pvVar7 + (ulonglong)(uVar4 * uVar10 + iVar5) * 4)
                              * fVar18;
          } while (uVar8 < uVar4);
        }
      }
LAB_14509620e:
      *param_3 = fVar17;
      uVar10 = uVar10 + 1;
      param_3 = param_3 + 1;
    } while (uVar10 < uVar6);
  }
  return;
}



// FUNCTION 145096260 FUN_145096260 body=1875 status=ok
// SIG undefined FUN_145096260(void)

void FUN_145096260(uint param_1,undefined4 *param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float *pfVar11;
  float *pfVar12;
  ulonglong uVar13;
  uint uVar14;
  float fVar15;
  undefined4 uVar17;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar18;
  float fVar19;
  float local_2d8 [4];
  undefined4 local_2c8;
  undefined4 local_2c4;
  uint local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  uint local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  float local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined8 local_29c;
  undefined8 uStack_294;
  undefined8 local_28c;
  undefined8 uStack_284;
  undefined4 local_27c;
  float local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined8 local_26c;
  undefined4 local_264;
  float local_260;
  undefined4 local_25c;
  undefined4 local_258;
  uint local_254;
  undefined4 local_250;
  undefined4 local_24c;
  uint local_248;
  undefined4 local_244;
  undefined4 local_240;
  float local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  uint local_218;
  undefined4 local_214;
  undefined4 local_210;
  float local_20c;
  undefined4 local_208;
  undefined4 local_204;
  float local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  uint local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  uint local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined8 uStack_1d4;
  undefined8 local_1cc;
  undefined8 uStack_1c4;
  undefined4 local_1bc;
  uint local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  float local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  float local_194;
  undefined4 local_190;
  undefined4 local_18c;
  uint local_188;
  undefined4 local_184;
  undefined4 local_180;
  uint local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  uint local_158;
  undefined4 local_154;
  undefined4 local_150;
  uint local_14c;
  undefined4 local_148;
  undefined4 local_144;
  float local_140;
  undefined4 local_13c;
  undefined4 local_138;
  float local_134;
  undefined4 local_130;
  undefined4 local_12c;
  uint local_128;
  undefined4 local_124;
  undefined4 local_120;
  uint local_11c;
  undefined4 local_118;
  undefined4 local_114;
  uint local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  uint local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  uint local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  float local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 uVar16;
  
  pvVar5 = (void *)*param_3;
  param_1 = param_1 & 0xff;
  uVar3 = param_1 + 2;
  if (3 < param_1) {
    uVar3 = param_1;
  }
  if (pvVar5 == (void *)0x0) {
    pvVar5 = AK::MemoryMgr::Malloc(0,(ulonglong)uVar3 << 4);
    *param_3 = (longlong)pvVar5;
    if (pvVar5 == (void *)0x0) {
      return;
    }
  }
  uVar16 = FUN_145376cc3(*param_2,param_2[1]);
  uVar17 = (undefined4)((ulonglong)uVar16 >> 0x20);
  fVar15 = (float)uVar16;
  uVar16 = FUN_145376cc3(((float)param_2[2] - (float)param_2[1]) * 0.5 + (float)param_2[1],
                         param_2[2]);
  local_210 = (undefined4)((ulonglong)uVar16 >> 0x20);
  local_1f4 = (uint)uVar16;
  local_2d8[2] = (float)uVar17;
  local_2d8[3] = fVar15;
  local_2b4 = extraout_XMM0_Dc_00 ^ 0x80000000;
  local_2b8 = extraout_XMM0_Dd_00;
  local_2d8[0] = -fVar15;
  local_2ac = extraout_XMM0_Dd_00;
  local_24c = extraout_XMM0_Dd_00;
  local_248 = local_2b4;
  local_240 = extraout_XMM0_Dd_00;
  local_2c4 = uVar17;
  local_2c0 = extraout_XMM0_Dc_00;
  local_2a8 = local_2d8[0];
  local_2a0 = uVar17;
  local_278 = local_2d8[0];
  local_270 = uVar17;
  local_260 = fVar15;
  local_258 = uVar17;
  local_254 = extraout_XMM0_Dc_00;
  local_23c = local_2d8[0];
  local_234 = uVar17;
  local_2d8[1] = 0.0;
  local_2c8 = 0;
  local_2bc = 0;
  local_2b0 = 0;
  local_2a4 = 0;
  local_29c = 0;
  uStack_294 = 0;
  local_27c = 0;
  local_28c = 0;
  uStack_284 = 0;
  local_274 = 0;
  local_26c = 0;
  local_264 = 0x3f800000;
  local_25c = 0;
  local_250 = 0;
  local_244 = 0;
  local_238 = 0;
  local_230 = 0;
  uStack_228 = 0;
  local_220 = 0;
  local_218 = local_1f4 ^ 0x80000000;
  local_1dc = 0;
  uStack_1d4 = 0;
  local_214 = 0;
  local_1cc = 0;
  uStack_1c4 = 0;
  local_208 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_1fc = 0;
  local_20c = local_2d8[0];
  local_14c = extraout_XMM0_Dc ^ 0x80000000;
  local_ec = extraout_XMM0_Dc ^ 0x80000000;
  local_204 = uVar17;
  local_200 = fVar15;
  local_1f8 = uVar17;
  local_1ec = local_210;
  local_1e8 = local_218;
  local_1e0 = local_210;
  local_1b8 = local_218;
  local_1b0 = local_210;
  local_1ac = local_2d8[0];
  local_1a4 = uVar17;
  local_194 = fVar15;
  local_18c = uVar17;
  local_188 = local_1f4;
  local_180 = local_210;
  local_17c = local_218;
  local_174 = local_210;
  local_158 = local_2b4;
  local_150 = extraout_XMM0_Dd_00;
  local_144 = extraout_XMM0_Dd;
  local_140 = local_2d8[0];
  local_138 = uVar17;
  local_134 = fVar15;
  local_12c = uVar17;
  local_128 = extraout_XMM0_Dc;
  local_120 = extraout_XMM0_Dd;
  local_11c = extraout_XMM0_Dc_00;
  local_114 = extraout_XMM0_Dd_00;
  local_110 = local_2b4;
  local_108 = extraout_XMM0_Dd_00;
  local_f8 = local_2b4;
  local_f0 = extraout_XMM0_Dd_00;
  local_e4 = extraout_XMM0_Dd;
  local_e0 = local_2d8[0];
  local_d8 = uVar17;
  local_c8 = fVar15;
  local_c0 = uVar17;
  local_bc = extraout_XMM0_Dc;
  local_b4 = extraout_XMM0_Dd;
  local_b0 = extraout_XMM0_Dc_00;
  local_1f0 = 0;
  local_1e4 = 0;
  local_1bc = 0;
  local_1b4 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0x3f800000;
  local_190 = 0;
  local_184 = 0;
  local_178 = 0;
  local_160 = 0;
  local_154 = 0;
  local_148 = 0;
  local_13c = 0;
  local_130 = 0;
  local_124 = 0;
  local_118 = 0;
  local_10c = 0;
  local_104 = 0;
  local_fc = 0;
  local_f4 = 0;
  local_e8 = 0;
  local_dc = 0;
  local_d4 = 0;
  local_cc = 0x3f800000;
  local_c4 = 0;
  local_b8 = 0;
  uVar9 = 0;
  local_a8 = extraout_XMM0_Dd_00;
  local_a4 = local_2b4;
  local_9c = extraout_XMM0_Dd_00;
  local_ac = 0;
  local_a0 = 0;
  if (uVar3 < 4) {
    if (uVar3 == 0) {
      return;
    }
    uVar10 = (ulonglong)(param_1 - 2);
    uVar13 = uVar9;
  }
  else {
    uVar14 = 2;
    uVar10 = (ulonglong)(param_1 - 2);
    pfVar11 = (float *)((longlong)pvVar5 + 8);
    lVar6 = uVar10 * 8;
    pfVar12 = local_2d8 + uVar10 * 0x18 + 5;
    uVar4 = (uVar3 - 4 >> 2) + 1;
    uVar13 = (ulonglong)uVar4;
    uVar9 = (ulonglong)(uVar4 * 4);
    do {
      fVar15 = pfVar12[-5];
      lVar7 = (ulonglong)(uVar14 - 1) + lVar6;
      fVar1 = local_2d8[lVar7 * 3 + 2];
      fVar2 = local_2d8[lVar7 * 3];
      fVar18 = 1.0 / (fVar15 * fVar1 - pfVar12[-3] * fVar2);
      *pfVar11 = -(pfVar12[-3] * fVar18);
      fVar19 = *pfVar12;
      pfVar11[-1] = -(fVar2 * fVar18);
      fVar2 = local_2d8[((ulonglong)uVar14 + lVar6) * 3];
      pfVar11[1] = fVar15 * fVar18;
      fVar15 = pfVar12[-2];
      pfVar11[-2] = fVar1 * fVar18;
      fVar1 = local_2d8[((ulonglong)uVar14 + lVar6) * 3 + 2];
      lVar7 = (ulonglong)(uVar14 + 1) + lVar6;
      lVar8 = (ulonglong)(uVar14 + 2) + lVar6;
      fVar18 = 1.0 / (fVar15 * fVar1 - fVar19 * fVar2);
      pfVar11[4] = -(fVar19 * fVar18);
      fVar19 = pfVar12[3];
      pfVar11[3] = -(fVar2 * fVar18);
      fVar2 = local_2d8[lVar7 * 3];
      pfVar11[5] = fVar15 * fVar18;
      fVar15 = pfVar12[1];
      pfVar11[2] = fVar1 * fVar18;
      fVar1 = local_2d8[lVar7 * 3 + 2];
      fVar18 = 1.0 / (fVar15 * fVar1 - fVar19 * fVar2);
      pfVar11[9] = fVar15 * fVar18;
      fVar15 = pfVar12[4];
      pfVar11[6] = fVar1 * fVar18;
      fVar1 = local_2d8[lVar8 * 3 + 2];
      pfVar11[7] = -(fVar2 * fVar18);
      fVar2 = local_2d8[lVar8 * 3];
      pfVar11[8] = -(fVar19 * fVar18);
      fVar19 = pfVar12[6];
      pfVar12 = pfVar12 + 0xc;
      uVar14 = uVar14 + 4;
      fVar18 = 1.0 / (fVar15 * fVar1 - fVar19 * fVar2);
      pfVar11[0xb] = -(fVar2 * fVar18);
      pfVar11[0xc] = -(fVar19 * fVar18);
      pfVar11[10] = fVar1 * fVar18;
      pfVar11[0xd] = fVar15 * fVar18;
      pfVar11 = pfVar11 + 0x10;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    uVar13 = (ulonglong)uVar4 * 4;
    if (uVar3 <= uVar4 * 4) {
      return;
    }
  }
  pfVar12 = (float *)(uVar13 * 0x10 + 8 + (longlong)pvVar5);
  pfVar11 = local_2d8 + (uVar13 + uVar10 * 8) * 3;
  do {
    fVar15 = *pfVar11;
    uVar4 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar4;
    fVar1 = pfVar11[2];
    lVar6 = uVar9 + uVar10 * 8;
    pfVar11 = pfVar11 + 3;
    fVar2 = local_2d8[lVar6 * 3 + 2];
    fVar19 = 1.0 / (fVar15 * fVar2 - fVar1 * local_2d8[lVar6 * 3]);
    pfVar12[-1] = -(local_2d8[lVar6 * 3] * fVar19);
    *pfVar12 = -(fVar1 * fVar19);
    pfVar12[-2] = fVar2 * fVar19;
    pfVar12[1] = fVar15 * fVar19;
    pfVar12 = pfVar12 + 4;
  } while (uVar4 < uVar3);
  return;
}



// FUNCTION 1450969c0 FUN_1450969c0 body=752 status=ok
// SIG undefined FUN_1450969c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1450969c0(ulonglong param_1,uint *param_2,undefined4 param_3,longlong *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  float fVar14;
  undefined8 auStack_40 [5];
  
  uVar13 = param_1 & 0xff;
  uVar7 = uVar13 * 0xc + 0xf;
  if (uVar7 <= uVar13 * 0xc) {
    uVar7 = 0xffffffffffffff0;
  }
  auStack_40[0] = 0x145096a0f;
  uVar2 = *param_2;
  lVar5 = -(uVar7 & 0xfffffffffffffff0);
  param_1 = param_1 >> 0xc;
  uVar12 = (uint)param_1 & 0xfffff;
  uVar10 = 2;
  puVar1 = (undefined4 *)(&stack0xffffffffffffffe8 + lVar5);
  *(uint *)(&stack0xffffffffffffffec + lVar5) = uVar2;
  *(uint *)(&stack0xfffffffffffffff8 + lVar5) = uVar2 ^ 0x80000000;
  *(undefined4 *)(&stack0xfffffffffffffff0 + lVar5) = 0;
  *puVar1 = 0x3f800000;
  *(undefined4 *)(&stack0xfffffffffffffffc + lVar5) = 0;
  *(undefined4 *)(&stack0xfffffffffffffff4 + lVar5) = 0x3f800000;
  if ((param_1 & 4) != 0) {
    *(undefined8 *)(&stack0x00000004 + lVar5) = 0;
    uVar10 = 3;
    *(undefined4 *)(&stack0x00000000 + lVar5) = 0x3f800000;
  }
  if ((param_1 & 0x210) != 0) {
    fVar14 = (float)param_2[2];
    if (((uint)param_1 & 0x210) == 0x210) {
      uVar7 = (ulonglong)uVar10;
      uVar11 = (ulonglong)(uVar10 + 1);
      *(float *)(&stack0xffffffffffffffec + uVar7 * 0xc + lVar5) = fVar14;
      *(undefined4 *)(&stack0xfffffffffffffff0 + uVar7 * 0xc + lVar5) = 0;
      puVar1[uVar7 * 3] = 0x3f800000;
      *(float *)(&stack0xffffffffffffffec + uVar11 * 0xc + lVar5) = -fVar14;
      uVar10 = uVar10 + 2;
      *(undefined4 *)(&stack0xfffffffffffffff0 + uVar11 * 0xc + lVar5) = 0;
      puVar1[uVar11 * 3] = 0x3f800000;
      fVar14 = (float)param_2[1];
    }
    else {
      fVar14 = (fVar14 - (float)param_2[1]) * 0.5 + (float)param_2[1];
    }
    uVar7 = (ulonglong)uVar10;
    uVar11 = (ulonglong)(uVar10 + 1);
    *(float *)(&stack0xffffffffffffffec + uVar7 * 0xc + lVar5) = fVar14;
    *(undefined4 *)(&stack0xfffffffffffffff0 + uVar7 * 0xc + lVar5) = 0;
    puVar1[uVar7 * 3] = 0x3f800000;
    *(float *)(&stack0xffffffffffffffec + uVar11 * 0xc + lVar5) = -fVar14;
    uVar10 = uVar10 + 2;
    *(undefined4 *)(&stack0xfffffffffffffff0 + uVar11 * 0xc + lVar5) = 0;
    puVar1[uVar11 * 3] = 0x3f800000;
  }
  if ((uVar12 >> 0xb & 1) != 0) {
    uVar7 = (ulonglong)uVar10;
    uVar10 = uVar10 + 1;
    *(undefined4 *)(&stack0xffffffffffffffec + uVar7 * 0xc + lVar5) = 0;
    *(undefined4 *)(&stack0xfffffffffffffff0 + uVar7 * 0xc + lVar5) = 0x3fc90fdb;
    puVar1[uVar7 * 3] = 0x3f800000;
  }
  if ((uVar12 >> 0xc & 1) != 0) {
    uVar7 = (ulonglong)uVar10;
    uVar10 = uVar10 + 1;
    *(uint *)(&stack0xffffffffffffffec + uVar7 * 0xc + lVar5) = uVar2;
    *(undefined4 *)(&stack0xfffffffffffffff0 + uVar7 * 0xc + lVar5) = param_3;
    puVar1[uVar7 * 3] = 0x3f800000;
  }
  if ((uVar12 >> 0xd & 1) != 0) {
    uVar7 = (ulonglong)uVar10;
    uVar10 = uVar10 + 1;
    *(undefined4 *)(&stack0xfffffffffffffff0 + uVar7 * 0xc + lVar5) = param_3;
    *(undefined8 *)(puVar1 + uVar7 * 3) = 0x3f800000;
  }
  if ((uVar12 >> 0xe & 1) != 0) {
    uVar7 = (ulonglong)uVar10;
    uVar10 = uVar10 + 1;
    *(uint *)(&stack0xffffffffffffffec + uVar7 * 0xc + lVar5) = uVar2 ^ 0x80000000;
    *(undefined4 *)(&stack0xfffffffffffffff0 + uVar7 * 0xc + lVar5) = param_3;
    puVar1[uVar7 * 3] = 0x3f800000;
  }
  uVar2 = param_2[2];
  if ((uVar12 >> 0xf & 1) != 0) {
    uVar7 = (ulonglong)uVar10;
    uVar10 = uVar10 + 1;
    *(uint *)(&stack0xffffffffffffffec + uVar7 * 0xc + lVar5) = uVar2;
    *(undefined4 *)(&stack0xfffffffffffffff0 + uVar7 * 0xc + lVar5) = param_3;
    puVar1[uVar7 * 3] = 0x3f800000;
  }
  uVar7 = (ulonglong)uVar10;
  if ((uVar12 >> 0x10 & 1) != 0) {
    *(undefined4 *)(&stack0xfffffffffffffff0 + uVar7 * 0xc + lVar5) = param_3;
    *(undefined8 *)(puVar1 + uVar7 * 3) = 0x3f800000;
  }
  if ((uVar12 >> 0x11 & 1) != 0) {
    *(uint *)(&stack0xffffffffffffffec + uVar7 * 0xc + lVar5) = uVar2 ^ 0x80000000;
    *(undefined4 *)(&stack0xfffffffffffffff0 + uVar7 * 0xc + lVar5) = param_3;
    puVar1[uVar7 * 3] = 0x3f800000;
  }
  lVar3 = *param_4;
  *param_4 = 0;
  pcVar4 = *(code **)(PTR_PTR_14c72f448 + 8);
  *(undefined8 *)((longlong)auStack_40 + lVar5) = 0x145096c07;
  lVar8 = (*pcVar4)(&PTR_PTR_14c72f448,0x30,
                    "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\AkAudiolib\\Common\\AkVBAP.h"
                    ,199);
  lVar9 = 0;
  if (lVar8 != 0) {
    *(undefined8 *)((longlong)auStack_40 + lVar5) = 0x145096c14;
    lVar9 = FUN_145375330(lVar8);
    if (lVar9 != 0) {
      *(undefined8 *)((longlong)auStack_40 + lVar5) = 0x145096c2e;
      iVar6 = FUN_145375360(lVar9,&PTR_PTR_14c72f448,uVar13);
      if (iVar6 == 1) {
        *(undefined8 *)((longlong)auStack_40 + lVar5) = 0x145096c5c;
        FUN_1453754e0(lVar9,puVar1,uVar13);
      }
      else {
        *(undefined8 *)((longlong)auStack_40 + lVar5) = 0x145096c3b;
        FUN_145375350();
        pcVar4 = *(code **)(PTR_PTR_14c72f448 + 0x10);
        *(undefined8 *)((longlong)auStack_40 + lVar5) = 0x145096c4f;
        (*pcVar4)(&PTR_PTR_14c72f448,lVar9);
        lVar9 = 0;
      }
    }
  }
  *param_4 = lVar9;
  if ((lVar3 != 0) && (lVar9 != 0)) {
    *(undefined8 *)((longlong)auStack_40 + lVar5) = 0x145096c7b;
    FUN_145375460(lVar3,&PTR_PTR_14c72f448);
    *(undefined8 *)((longlong)auStack_40 + lVar5) = 0x145096c83;
    FUN_145375350(lVar3);
    pcVar4 = *(code **)(PTR_PTR_14c72f448 + 0x10);
    *(undefined8 *)((longlong)auStack_40 + lVar5) = 0x145096c97;
    (*pcVar4)(&PTR_PTR_14c72f448,lVar3);
  }
  return;
}



// FUNCTION 145096cb0 FUN_145096cb0 body=543 status=ok
// SIG undefined FUN_145096cb0(void)

void FUN_145096cb0(uint param_1,byte param_2,void *param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar1 = (uint)param_2;
  uVar4 = param_1 & 0xff;
  uVar7 = uVar1 + 7 & 0xfffffff8;
  if (uVar7 * uVar4 != 0) {
    memset(param_3,0,(ulonglong)(uVar7 * uVar4) << 2);
  }
  if ((param_1 & 0xf00) == 0x200) {
    uVar5 = 0;
    uVar11 = uVar5;
    uVar12 = uVar5;
    if (uVar1 < 4) {
      if (param_2 == 0) {
        return;
      }
      uVar8 = 1;
    }
    else {
      uVar8 = 1;
      do {
        uVar9 = (uint)uVar5;
        if (uVar4 <= uVar9) {
          return;
        }
        if ((uVar4 < 0xc) && ((*(uint *)(&DAT_149c256d8 + (ulonglong)(uVar4 - 1) * 4) & uVar8) != 0)
           ) {
          uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
LAB_145096d7a:
          uVar3 = (uint)uVar5;
          if ((*(uint *)(&DAT_149c256d8 + (ulonglong)(uVar4 - 1) * 4) & uVar8) == 0)
          goto LAB_145096d8d;
          uVar9 = uVar8 << 1 | (uint)((int)uVar8 < 0);
LAB_145096db1:
          uVar8 = (uint)uVar5;
          if ((*(uint *)(&DAT_149c256d8 + (ulonglong)(uVar4 - 1) * 4) & uVar9) == 0)
          goto LAB_145096dc1;
          uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
LAB_145096de8:
          uVar8 = (uint)uVar5;
          if ((*(uint *)(&DAT_149c256d8 + (ulonglong)(uVar4 - 1) * 4) & uVar9) == 0)
          goto LAB_145096df1;
        }
        else {
          uVar3 = uVar9 + 1;
          uVar5 = (ulonglong)uVar3;
          uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
          *(undefined4 *)((longlong)param_3 + (uVar7 * uVar9 + uVar11) * 4) = 0x3f800000;
          if (uVar4 <= uVar3) {
            return;
          }
          if (uVar4 < 0xc) goto LAB_145096d7a;
LAB_145096d8d:
          uVar9 = uVar8 << 1 | (uint)((int)uVar8 < 0);
          uVar8 = uVar3 + 1;
          uVar5 = (ulonglong)uVar8;
          *(undefined4 *)((longlong)param_3 + (uVar7 * uVar3 + uVar11) * 4 + 4) = 0x3f800000;
          if (uVar4 <= uVar8) {
            return;
          }
          if (uVar4 < 0xc) goto LAB_145096db1;
LAB_145096dc1:
          uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
          *(undefined4 *)((longlong)param_3 + (uVar7 * uVar8 + uVar11) * 4 + 8) = 0x3f800000;
          uVar8 = uVar8 + 1;
          if (uVar4 <= uVar8) {
            return;
          }
          uVar5 = (ulonglong)uVar8;
          if (uVar4 < 0xc) goto LAB_145096de8;
LAB_145096df1:
          uVar5 = (ulonglong)(uVar8 + 1);
          *(undefined4 *)((longlong)param_3 + (uVar7 * uVar8 + uVar11) * 4 + 0xc) = 0x3f800000;
        }
        uVar8 = uVar9 << 1 | (uint)((int)uVar9 < 0);
        uVar11 = uVar11 + 4;
        uVar9 = (int)uVar12 + 4;
        uVar12 = (ulonglong)uVar9;
      } while (uVar9 < uVar1 - 3);
      if (uVar1 <= uVar9) {
        return;
      }
    }
    do {
      uVar7 = (uint)uVar5;
      if ((param_1 & 0xff) <= uVar7) {
        return;
      }
      if ((0xb < (param_1 & 0xff)) ||
         ((*(uint *)(&DAT_149c256d8 + (ulonglong)((param_1 & 0xff) - 1) * 4) & uVar8) == 0)) {
        uVar5 = (ulonglong)(uVar7 + 1);
        *(undefined4 *)((longlong)param_3 + ((param_2 + 7 & 0xfffffff8) * uVar7 + uVar11) * 4) =
             0x3f800000;
      }
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      uVar11 = uVar11 + 1;
      uVar7 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar7;
    } while (uVar7 < uVar1);
  }
  else {
    bVar6 = (byte)param_1;
    if (uVar1 <= uVar4) {
      bVar6 = param_2;
    }
    uVar4 = 0;
    if (bVar6 != 0) {
      lVar10 = 0;
      do {
        uVar1 = uVar7 * uVar4;
        uVar4 = uVar4 + 1;
        lVar2 = (ulonglong)uVar1 + lVar10;
        lVar10 = lVar10 + 1;
        *(undefined4 *)((longlong)param_3 + lVar2 * 4) = 0x3f800000;
      } while (uVar4 < bVar6);
    }
  }
  return;
}



// FUNCTION 145096ed0 FUN_145096ed0 body=194 status=ok
// SIG undefined FUN_145096ed0(void)

undefined8 FUN_145096ed0(longlong *param_1,uint param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((param_2 < *(uint *)(param_1 + 1)) || (param_2 <= *(uint *)((longlong)param_1 + 0xc))) {
LAB_145096f78:
    *(uint *)(param_1 + 1) = param_2;
    uVar2 = 1;
  }
  else {
    uVar4 = (ulonglong)*(uint *)(param_1 + 1);
    if ((void *)*param_1 == (void *)0x0) {
      pvVar1 = AK::MemoryMgr::Malign(0,(ulonglong)param_2 << 4,0x10);
      if (pvVar1 != (void *)0x0) {
        if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar1)) {
          if (uVar4 != 0) {
            lVar3 = 0;
            do {
              uVar2 = ((undefined8 *)(lVar3 + *param_1))[1];
              *(undefined8 *)(lVar3 + (longlong)pvVar1) = *(undefined8 *)(lVar3 + *param_1);
              ((undefined8 *)(lVar3 + (longlong)pvVar1))[1] = uVar2;
              uVar4 = uVar4 - 1;
              lVar3 = lVar3 + 0x10;
            } while (uVar4 != 0);
          }
          AK::MemoryMgr::Free(0,(void *)*param_1);
        }
        goto LAB_145096f72;
      }
    }
    else {
      pvVar1 = AK::MemoryMgr::ReallocAligned(0,(void *)*param_1,(ulonglong)param_2 << 4,0x10);
      if (pvVar1 != (void *)0x0) {
LAB_145096f72:
        *param_1 = (longlong)pvVar1;
        *(uint *)((longlong)param_1 + 0xc) = param_2;
        goto LAB_145096f78;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 145096fa0 FUN_145096fa0 body=112 status=ok
// SIG undefined FUN_145096fa0(void)

void FUN_145096fa0(undefined8 *param_1,undefined8 *param_2)

{
  if ((void *)*param_1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(0,(void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 145097010 FUN_145097010 body=824 status=ok
// SIG undefined FUN_145097010(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145097010(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 (*pauVar8) [16];
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  undefined1 in_XMM1 [16];
  float in_XMM3_Da;
  float fVar18;
  uint in_stack_00000028;
  uint in_stack_00000030;
  longlong in_stack_00000038;
  undefined8 auStack_70 [5];
  longlong alStack_48 [2];
  undefined4 local_38 [4];
  
  if ((((byte)(in_stack_00000028 >> 0x15) ^ (byte)(in_stack_00000028 >> 0x10)) & 1) != 0) {
    in_stack_00000028 = in_stack_00000028 & 0xff9fffff | 0x30000;
  }
  uVar15 = 0;
  uVar9 = 1;
  uVar11 = 0;
  uVar12 = in_stack_00000028 >> 0xc & 0xffff7;
  uVar14 = 0;
  uVar7 = (ulonglong)((in_stack_00000028 & 0xff) * 3) * 4;
  uVar6 = uVar7 + 0xf;
  if (uVar6 <= uVar7) {
    uVar6 = 0xffffffffffffff0;
  }
  auStack_70[0] = 0x1450970a4;
  lVar3 = -(uVar6 & 0xfffffffffffffff0);
  puVar1 = (undefined4 *)((longlong)local_38 + lVar3);
  puVar10 = puVar1;
  if (uVar12 != 0) {
    do {
      if ((uVar9 & uVar12) != 0) {
        uVar6 = (ulonglong)uVar11;
        *puVar10 = *(undefined4 *)(&DAT_14c72eea0 + uVar6 * 0xc);
        puVar10[1] = *(undefined4 *)(&DAT_14c72eea4 + uVar6 * 0xc);
        puVar10[2] = *(undefined4 *)(&DAT_14c72eea8 + uVar6 * 0xc);
        puVar10 = puVar10 + 3;
        uVar14 = uVar14 + 1;
      }
      uVar9 = uVar9 * 2;
      uVar11 = uVar11 + 1;
    } while (uVar9 - 1 < uVar12);
  }
  uVar7 = (ulonglong)(uVar14 * 3) * 4;
  uVar6 = uVar7 + 0xf;
  if (uVar6 <= uVar7) {
    uVar6 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x145097113;
  lVar4 = -(uVar6 & 0xfffffffffffffff0);
  lVar2 = (longlong)local_38 + lVar4 + lVar3;
  *(longlong *)((longlong)alStack_48 + lVar4 + lVar3 + 8) = lVar2;
  *(undefined4 **)((longlong)alStack_48 + lVar4 + lVar3) = puVar1;
  *(undefined8 *)((longlong)auStack_70 + lVar4 + lVar3) = 0x14509712d;
  FUN_145097350(uVar7,puVar10,uVar9,uVar14);
  *(undefined8 *)((longlong)auStack_70 + lVar4 + lVar3) = 0x14509713e;
  FUN_1450976b0(uVar14,lVar2,in_stack_00000030,in_stack_00000038);
  if ((((in_stack_00000030 >> 0xc & 4) != 0) && ((in_stack_00000030 >> 0xc & 3) != 0)) &&
     (in_XMM3_Da < 1.0)) {
    uVar9 = 0;
    fVar18 = (1.0 - in_XMM3_Da) * 0.5;
    if (3 < uVar14) {
      iVar13 = 2;
      uVar11 = (in_stack_00000030 & 0xff) + 7 >> 3;
      do {
        iVar5 = uVar11 * uVar9;
        uVar9 = uVar9 + 4;
        uVar6 = (ulonglong)(uint)(iVar5 * 8);
        fVar17 = *(float *)(in_stack_00000038 + 8 + uVar6 * 4);
        fVar16 = fVar17 * fVar18;
        *(float *)(in_stack_00000038 + uVar6 * 4) =
             fVar16 + *(float *)(in_stack_00000038 + uVar6 * 4);
        *(float *)(in_stack_00000038 + 4 + uVar6 * 4) =
             fVar16 + *(float *)(in_stack_00000038 + 4 + uVar6 * 4);
        *(float *)(in_stack_00000038 + 8 + uVar6 * 4) = fVar17 * in_XMM3_Da;
        uVar6 = (ulonglong)((iVar13 + -1) * uVar11 * 8);
        fVar17 = *(float *)(in_stack_00000038 + 8 + uVar6 * 4);
        fVar16 = fVar17 * fVar18;
        *(float *)(in_stack_00000038 + uVar6 * 4) =
             fVar16 + *(float *)(in_stack_00000038 + uVar6 * 4);
        *(float *)(in_stack_00000038 + 4 + uVar6 * 4) =
             fVar16 + *(float *)(in_stack_00000038 + 4 + uVar6 * 4);
        *(float *)(in_stack_00000038 + 8 + uVar6 * 4) = fVar17 * in_XMM3_Da;
        uVar6 = (ulonglong)(iVar13 * uVar11 * 8);
        fVar17 = *(float *)(in_stack_00000038 + 8 + uVar6 * 4);
        fVar16 = fVar17 * fVar18;
        *(float *)(in_stack_00000038 + uVar6 * 4) =
             fVar16 + *(float *)(in_stack_00000038 + uVar6 * 4);
        *(float *)(in_stack_00000038 + 4 + uVar6 * 4) =
             fVar16 + *(float *)(in_stack_00000038 + 4 + uVar6 * 4);
        *(float *)(in_stack_00000038 + 8 + uVar6 * 4) = fVar17 * in_XMM3_Da;
        iVar5 = iVar13 + 1;
        iVar13 = iVar13 + 4;
        uVar6 = (ulonglong)(iVar5 * uVar11 * 8);
        fVar17 = *(float *)(in_stack_00000038 + 8 + uVar6 * 4);
        fVar16 = fVar17 * fVar18;
        *(float *)(in_stack_00000038 + uVar6 * 4) =
             fVar16 + *(float *)(in_stack_00000038 + uVar6 * 4);
        fVar16 = fVar16 + *(float *)(in_stack_00000038 + 4 + uVar6 * 4);
        in_XMM1 = ZEXT416((uint)fVar16);
        *(float *)(in_stack_00000038 + 4 + uVar6 * 4) = fVar16;
        *(float *)(in_stack_00000038 + 8 + uVar6 * 4) = fVar17 * in_XMM3_Da;
      } while (uVar9 < uVar14 - 3);
    }
    if (uVar9 < uVar14) {
      do {
        uVar6 = (ulonglong)(((in_stack_00000030 & 0xff) + 7 & 0xfffffff8) * uVar9);
        uVar9 = uVar9 + 1;
        fVar17 = *(float *)(in_stack_00000038 + 8 + uVar6 * 4);
        fVar16 = fVar17 * fVar18;
        *(float *)(in_stack_00000038 + 8 + uVar6 * 4) = fVar17 * in_XMM3_Da;
        fVar17 = fVar16 + *(float *)(in_stack_00000038 + 4 + uVar6 * 4);
        in_XMM1 = ZEXT416((uint)fVar17);
        *(float *)(in_stack_00000038 + uVar6 * 4) =
             fVar16 + *(float *)(in_stack_00000038 + uVar6 * 4);
        *(float *)(in_stack_00000038 + 4 + uVar6 * 4) = fVar17;
      } while (uVar9 < uVar14);
    }
  }
  if (uVar14 != 0) {
    uVar9 = (in_stack_00000030 & 0xff) + 7 >> 3;
    do {
      uVar6 = (ulonglong)(uVar9 * uVar15 * 8);
      for (pauVar8 = (undefined1 (*) [16])(in_stack_00000038 + uVar6 * 4);
          pauVar8 < (undefined1 (*) [16])(in_stack_00000038 + (uVar6 + uVar9 * 8) * 4);
          pauVar8 = pauVar8 + 1) {
        in_XMM1 = sqrtps(in_XMM1,*pauVar8);
        *pauVar8 = in_XMM1;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar14);
  }
  return;
}



// FUNCTION 145097350 FUN_145097350 body=853 status=ok
// SIG undefined FUN_145097350(void)

void FUN_145097350(float param_1,float param_2,float param_3,uint param_4,longlong param_5,
                  longlong param_6)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  float fVar4;
  
  uVar3 = 0;
  if (3 < param_4) {
    do {
      uVar1 = uVar3 * 3;
      fVar4 = *(float *)(param_5 + (ulonglong)uVar1 * 4);
      fVar4 = (ABS(fVar4) + 1.0) * param_1 + fVar4;
      if (-1.0 <= fVar4) {
        if (1.0 <= fVar4) {
          fVar4 = 1.0;
        }
      }
      else {
        fVar4 = -1.0;
      }
      *(float *)(param_6 + (ulonglong)uVar1 * 4) = fVar4;
      fVar4 = *(float *)(param_5 + (ulonglong)(uVar1 + 1) * 4);
      fVar4 = (ABS(fVar4) + 1.0) * param_2 + fVar4;
      if (-1.0 <= fVar4) {
        if (1.0 <= fVar4) {
          fVar4 = 1.0;
        }
      }
      else {
        fVar4 = -1.0;
      }
      *(float *)(param_6 + (ulonglong)(uVar1 + 1) * 4) = fVar4;
      fVar4 = *(float *)(param_5 + (ulonglong)(uVar1 + 2) * 4);
      fVar4 = (ABS(fVar4) + 1.0) * param_3 + fVar4;
      if (-1.0 <= fVar4) {
        if (1.0 <= fVar4) {
          fVar4 = 1.0;
        }
      }
      else {
        fVar4 = -1.0;
      }
      *(float *)(param_6 + (ulonglong)(uVar1 + 2) * 4) = fVar4;
      fVar4 = *(float *)(param_5 + (ulonglong)(uVar1 + 3) * 4);
      fVar4 = (ABS(fVar4) + 1.0) * param_1 + fVar4;
      if (-1.0 <= fVar4) {
        if (1.0 <= fVar4) {
          fVar4 = 1.0;
        }
      }
      else {
        fVar4 = -1.0;
      }
      *(float *)(param_6 + (ulonglong)(uVar1 + 3) * 4) = fVar4;
      fVar4 = *(float *)(param_5 + (ulonglong)(uVar1 + 4) * 4);
      fVar4 = (ABS(fVar4) + 1.0) * param_2 + fVar4;
      if (-1.0 <= fVar4) {
        if (1.0 <= fVar4) {
          fVar4 = 1.0;
        }
      }
      else {
        fVar4 = -1.0;
      }
      *(float *)(param_6 + (ulonglong)(uVar1 + 4) * 4) = fVar4;
      fVar4 = *(float *)(param_5 + (ulonglong)(uVar1 + 5) * 4);
      fVar4 = (ABS(fVar4) + 1.0) * param_3 + fVar4;
      if (-1.0 <= fVar4) {
        if (1.0 <= fVar4) {
          fVar4 = 1.0;
        }
      }
      else {
        fVar4 = -1.0;
      }
      *(float *)(param_6 + (ulonglong)(uVar1 + 5) * 4) = fVar4;
      uVar2 = (ulonglong)((uVar3 + 2) * 3);
      fVar4 = *(float *)(param_5 + uVar2 * 4);
      fVar4 = (ABS(fVar4) + 1.0) * param_1 + fVar4;
      if (-1.0 <= fVar4) {
        if (1.0 <= fVar4) {
          fVar4 = 1.0;
        }
      }
      else {
        fVar4 = -1.0;
      }
      *(float *)(param_6 + uVar2 * 4) = fVar4;
      fVar4 = *(float *)(param_5 + (ulonglong)(uVar1 + 7) * 4);
      fVar4 = (ABS(fVar4) + 1.0) * param_2 + fVar4;
      if (-1.0 <= fVar4) {
        if (1.0 <= fVar4) {
          fVar4 = 1.0;
        }
      }
      else {
        fVar4 = -1.0;
      }
      *(float *)(param_6 + (ulonglong)(uVar1 + 7) * 4) = fVar4;
      fVar4 = *(float *)(param_5 + (ulonglong)(uVar1 + 8) * 4);
      fVar4 = (ABS(fVar4) + 1.0) * param_3 + fVar4;
      if (-1.0 <= fVar4) {
        if (1.0 <= fVar4) {
          fVar4 = 1.0;
        }
      }
      else {
        fVar4 = -1.0;
      }
      *(float *)(param_6 + (ulonglong)(uVar1 + 8) * 4) = fVar4;
      uVar2 = (ulonglong)((uVar3 + 3) * 3);
      fVar4 = *(float *)(param_5 + uVar2 * 4);
      fVar4 = (ABS(fVar4) + 1.0) * param_1 + fVar4;
      if (-1.0 <= fVar4) {
        if (1.0 <= fVar4) {
          fVar4 = 1.0;
        }
      }
      else {
        fVar4 = -1.0;
      }
      *(float *)(param_6 + uVar2 * 4) = fVar4;
      fVar4 = *(float *)(param_5 + (ulonglong)(uVar1 + 10) * 4);
      fVar4 = (ABS(fVar4) + 1.0) * param_2 + fVar4;
      if (-1.0 <= fVar4) {
        if (1.0 <= fVar4) {
          fVar4 = 1.0;
        }
      }
      else {
        fVar4 = -1.0;
      }
      *(float *)(param_6 + (ulonglong)(uVar1 + 10) * 4) = fVar4;
      fVar4 = *(float *)(param_5 + (ulonglong)(uVar1 + 0xb) * 4);
      fVar4 = (ABS(fVar4) + 1.0) * param_3 + fVar4;
      if (-1.0 <= fVar4) {
        if (1.0 <= fVar4) {
          fVar4 = 1.0;
        }
      }
      else {
        fVar4 = -1.0;
      }
      uVar3 = uVar3 + 4;
      *(float *)(param_6 + (ulonglong)(uVar1 + 0xb) * 4) = fVar4;
    } while (uVar3 < param_4 - 3);
  }
  for (; uVar3 < param_4; uVar3 = uVar3 + 1) {
    uVar1 = uVar3 * 3;
    fVar4 = *(float *)(param_5 + (ulonglong)uVar1 * 4);
    fVar4 = (ABS(fVar4) + 1.0) * param_1 + fVar4;
    if (-1.0 <= fVar4) {
      if (1.0 <= fVar4) {
        fVar4 = 1.0;
      }
    }
    else {
      fVar4 = -1.0;
    }
    *(float *)(param_6 + (ulonglong)uVar1 * 4) = fVar4;
    fVar4 = *(float *)(param_5 + (ulonglong)(uVar1 + 1) * 4);
    fVar4 = (ABS(fVar4) + 1.0) * param_2 + fVar4;
    if (-1.0 <= fVar4) {
      if (1.0 <= fVar4) {
        fVar4 = 1.0;
      }
    }
    else {
      fVar4 = -1.0;
    }
    *(float *)(param_6 + (ulonglong)(uVar1 + 1) * 4) = fVar4;
    fVar4 = *(float *)(param_5 + (ulonglong)(uVar1 + 2) * 4);
    fVar4 = (ABS(fVar4) + 1.0) * param_3 + fVar4;
    if (-1.0 <= fVar4) {
      if (1.0 <= fVar4) {
        fVar4 = 1.0;
      }
    }
    else {
      fVar4 = -1.0;
    }
    *(float *)(param_6 + (ulonglong)(uVar1 + 2) * 4) = fVar4;
  }
  return;
}



// FUNCTION 1450976b0 FUN_1450976b0 body=2194 status=ok
// SIG undefined FUN_1450976b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1450976b0(uint param_1,undefined8 param_2,uint param_3,void *param_4)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  void *pvVar15;
  float *pfVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  uint uVar24;
  undefined4 *puVar25;
  uint uVar26;
  undefined1 *puVar27;
  uint uVar28;
  ulonglong uVar29;
  uint uVar30;
  uint uVar31;
  undefined4 *puVar32;
  undefined4 local_res18;
  void *local_res20;
  undefined1 auStack_138 [80];
  undefined4 local_e8 [8];
  undefined1 local_c8 [80];
  uint local_78;
  uint local_74;
  uint local_70;
  undefined4 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  
  if ((((byte)(param_3 >> 0x15) ^ (byte)(param_3 >> 0x10)) & 1) != 0) {
    param_3 = param_3 & 0xff9fffff | 0x30000;
  }
  uVar24 = param_3 >> 0xc;
  uVar17 = uVar24 & 0xffff7;
  uVar13 = param_3 - (uVar24 - uVar17 >> 3) & 0xff;
  uVar30 = uVar24 & 0x210;
  uVar18 = 0;
  local_74 = uVar24 & 0xff9c0;
  local_78 = 0;
  uVar31 = uVar24 & 4;
  local_70 = uVar24;
  if (local_74 == 0) {
    local_res18._0_2_ = CONCAT11(uVar30 == 0x210,uVar31 != 0);
    puVar25 = local_e8;
    uVar26 = 1;
    uVar28 = uVar18;
    local_68 = puVar25;
    if (uVar17 != 0) {
      do {
        if ((uVar17 & uVar26) != 0) {
          uVar11 = (ulonglong)uVar28;
          *puVar25 = *(undefined4 *)(&DAT_14c72eea0 + uVar11 * 0xc);
          puVar25[1] = *(undefined4 *)(&DAT_14c72eea4 + uVar11 * 0xc);
          puVar25[2] = *(undefined4 *)(&DAT_14c72eea8 + uVar11 * 0xc);
          puVar25 = puVar25 + 3;
          uVar18 = uVar18 + 1;
        }
        uVar26 = uVar26 * 2;
        uVar28 = uVar28 + 1;
        local_78 = uVar18;
      } while (uVar26 - 1 < uVar17);
    }
    puVar21 = auStack_138;
    puVar32 = local_68;
    uVar17 = local_78;
    uVar18 = local_78;
    if ((uVar31 != 0) && (puVar21 = auStack_138, uVar30 != 0)) {
      uVar17 = local_78 + 1;
      *puVar25 = 0;
      puVar25[1] = 0xbf800000;
      puVar25[2] = 0;
      puVar21 = auStack_138;
      puVar32 = local_68;
      uVar18 = uVar17;
      if (uVar30 == 0x210) {
        uVar17 = local_78 + 2;
        *(undefined8 *)(puVar25 + 3) = 0;
        local_78 = uVar17;
        puVar25[5] = 0;
        puVar21 = auStack_138;
        puVar32 = local_68;
        uVar18 = local_78;
      }
    }
  }
  else {
    local_78 = 0x1b;
    local_res18 = CONCAT13(local_res18._3_1_,0x10101);
    puVar21 = local_c8;
    puVar32 = (undefined4 *)&DAT_14c72ef80;
    uVar17 = 0x1b;
    uVar18 = local_78;
  }
  local_78 = uVar18;
  iVar19 = 0;
  if (1 < uVar13) {
    iVar19 = (uVar30 != 0) + 1;
    if (local_74 != 0) {
      iVar19 = (uVar30 != 0) + 2;
    }
  }
  uVar14 = (ulonglong)(uVar17 * param_1) * 4;
  uVar11 = uVar14 + 0xf;
  if (uVar11 <= uVar14) {
    uVar11 = 0xffffffffffffff0;
  }
  *(undefined8 *)(puVar21 + -8) = 0x145097885;
  lVar3 = -(uVar11 & 0xfffffffffffffff0);
  puVar22 = puVar21 + lVar3;
  puVar23 = puVar21 + lVar3 + 0x50;
  *(undefined1 **)(puVar21 + lVar3 + 0x30) = puVar23;
  *(undefined4 **)(puVar21 + lVar3 + 0x28) = &local_res18;
  *(int *)(puVar21 + lVar3 + 0x20) = iVar19;
  local_58 = puVar23;
  *(undefined8 *)(puVar21 + lVar3 + -8) = 0x1450978bb;
  local_res20 = param_4;
  FUN_145097f50(param_1,param_2,uVar17,puVar32);
  pvVar15 = local_res20;
  if (local_74 == 0) {
    if ((uVar31 == 0) || (uVar30 == 0)) {
      uVar24 = 0;
      if (param_1 == 0) {
        return;
      }
      do {
        uVar11 = 0;
        puVar27 = (undefined1 *)
                  ((longlong)pvVar15 + (ulonglong)(((param_3 & 0xff) + 7 & 0xfffffff8) * uVar24) * 4
                  );
        if (uVar17 != 0) {
          if (3 < uVar17) {
            if ((puVar23 + (ulonglong)(uVar24 * uVar17 + (uVar17 - 1)) * 4 < puVar27) ||
               (puVar27 + (ulonglong)(uVar17 - 1) * 4 < puVar23 + (ulonglong)(uVar24 * uVar17) * 4))
            {
              *(undefined8 *)(puVar21 + lVar3 + -8) = 0x145097add;
              memcpy(puVar27,puVar23 + (ulonglong)(uVar24 * uVar17) * 4,(ulonglong)uVar17 << 2);
              pvVar15 = local_res20;
              goto LAB_145097b6b;
            }
          }
          uVar14 = uVar11;
          pvVar15 = local_res20;
          if (3 < uVar17) {
            uVar14 = (ulonglong)((uVar17 - 4 >> 2) + 1) << 2;
            puVar32 = (undefined4 *)(puVar27 + 8);
            do {
              uVar13 = uVar17 * uVar24 + (int)uVar11;
              uVar18 = (int)uVar11 + 4;
              uVar11 = (ulonglong)uVar18;
              puVar32[-2] = *(undefined4 *)(puVar23 + (ulonglong)uVar13 * 4);
              puVar32[-1] = *(undefined4 *)(puVar23 + (ulonglong)(uVar13 + 1) * 4);
              *puVar32 = *(undefined4 *)(puVar23 + (ulonglong)(uVar13 + 2) * 4);
              puVar32[1] = *(undefined4 *)(puVar23 + (ulonglong)(uVar13 + 3) * 4);
              puVar32 = puVar32 + 4;
            } while (uVar18 < uVar17 - 3);
            if (uVar17 <= uVar18) goto LAB_145097b6b;
          }
          puVar32 = (undefined4 *)(puVar27 + uVar14 * 4);
          do {
            iVar19 = (int)uVar11;
            uVar13 = iVar19 + 1;
            uVar11 = (ulonglong)uVar13;
            *puVar32 = *(undefined4 *)(puVar23 + (ulonglong)(uVar17 * uVar24 + iVar19) * 4);
            puVar32 = puVar32 + 1;
          } while (uVar13 < uVar17);
        }
LAB_145097b6b:
        uVar24 = uVar24 + 1;
        if (param_1 <= uVar24) {
          return;
        }
      } while( true );
    }
    local_74 = 9;
    if (uVar13 != 7) {
      local_74 = 6;
    }
    local_res18 = param_3 & 0xff;
    uVar18 = local_res18 + 7 >> 3;
    uVar24 = uVar18 * param_1;
    if ((uVar24 & 0x1fffffff) != 0) {
      *(undefined8 *)(puVar21 + lVar3 + -8) = 0x145097929;
      memset(local_res20,0,(ulonglong)(uVar24 * 8) << 2);
    }
    uVar24 = 0;
    if (param_1 != 0) {
      do {
        uVar11 = 0;
        puVar27 = (undefined1 *)((longlong)pvVar15 + (ulonglong)(uVar18 * uVar24 * 8) * 4);
        if (uVar13 != 0) {
          if (3 < uVar13) {
            if ((puVar23 + (ulonglong)(uVar13 - 1) * 4 < puVar27) ||
               (puVar27 + (ulonglong)(uVar13 - 1) * 4 < puVar23)) {
              *(undefined8 *)(puVar21 + lVar3 + -8) = 0x14509798d;
              memcpy(puVar27,puVar23 + (ulonglong)(uVar24 * uVar17) * 4,(ulonglong)uVar13 << 2);
              goto LAB_145097a22;
            }
          }
          uVar14 = uVar11;
          pvVar15 = local_res20;
          if (3 < uVar13) {
            uVar14 = (ulonglong)((uVar13 - 4 >> 2) + 1) << 2;
            puVar32 = (undefined4 *)(puVar27 + 8);
            do {
              uVar30 = uVar24 * uVar17 + (int)uVar11;
              uVar31 = (int)uVar11 + 4;
              uVar11 = (ulonglong)uVar31;
              puVar32[-2] = *(undefined4 *)(puVar23 + (ulonglong)uVar30 * 4);
              puVar32[-1] = *(undefined4 *)(puVar23 + (ulonglong)(uVar30 + 1) * 4);
              *puVar32 = *(undefined4 *)(puVar23 + (ulonglong)(uVar30 + 2) * 4);
              puVar32[1] = *(undefined4 *)(puVar23 + (ulonglong)(uVar30 + 3) * 4);
              puVar32 = puVar32 + 4;
            } while (uVar31 < uVar13 - 3);
            if (uVar13 <= uVar31) goto LAB_145097a22;
          }
          puVar32 = (undefined4 *)(puVar27 + uVar14 * 4);
          do {
            iVar19 = (int)uVar11;
            uVar30 = iVar19 + 1;
            uVar11 = (ulonglong)uVar30;
            *puVar32 = *(undefined4 *)(puVar23 + (ulonglong)(uVar24 * uVar17 + iVar19) * 4);
            puVar32 = puVar32 + 1;
          } while (uVar30 < uVar13);
        }
LAB_145097a22:
        uVar24 = uVar24 + 1;
      } while (uVar24 < param_1);
    }
    uVar24 = local_74;
    *(void **)(puVar21 + lVar3 + 0x40) = pvVar15;
    *(uint *)(puVar21 + lVar3 + 0x38) = local_res18;
    *(undefined4 *)(puVar21 + lVar3 + 0x30) = 0;
    *(undefined **)(puVar21 + lVar3 + 0x28) = &DAT_149c259d0;
    *(uint *)(puVar21 + lVar3 + 0x20) = uVar24;
    goto LAB_145097f27;
  }
  local_res18 = param_3 & 0xff;
  local_74 = local_res18 + 7 & 0xfffffff8;
  uVar13 = local_74 * param_1;
  if (uVar13 != 0) {
    *(undefined8 *)(puVar21 + lVar3 + -8) = 0x145097bb9;
    memset(local_res20,0,(ulonglong)uVar13 << 2);
  }
  bVar12 = 0;
  for (uVar24 = uVar24 & 0x637; uVar24 != 0; uVar24 = uVar24 & uVar24 - 1) {
    bVar12 = bVar12 + 1;
  }
  uVar24 = (uint)bVar12;
  local_68 = (undefined4 *)0x0;
  if (uVar24 == 4) {
    local_68 = (undefined4 *)&DAT_149c25a10;
  }
  else if (uVar24 == 5) {
    local_68 = (undefined4 *)&DAT_149c25ae0;
  }
  else if (uVar24 == 6) {
    local_68 = (undefined4 *)&DAT_149c25bb0;
  }
  else if (uVar24 == 7) {
    local_68 = (undefined4 *)&DAT_149c25c50;
  }
  puVar32 = local_68;
  *(void **)(puVar21 + lVar3 + 0x40) = pvVar15;
  *(uint *)(puVar21 + lVar3 + 0x38) = local_res18;
  *(undefined4 *)(puVar21 + lVar3 + 0x30) = 0;
  *(undefined4 **)(puVar21 + lVar3 + 0x28) = puVar32;
  *(undefined4 *)(puVar21 + lVar3 + 0x20) = 9;
  *(undefined8 *)(puVar21 + lVar3 + -8) = 0x145097c4f;
  FUN_14509d720(param_1,uVar17,puVar23,0);
  iVar19 = (uVar24 + 7 >> 3) * param_1;
  uVar13 = iVar19 * 0x20;
  uVar11 = (ulonglong)uVar13 + 0xf;
  if (uVar11 <= uVar13) {
    uVar11 = 0xffffffffffffff0;
  }
  *(undefined8 *)(puVar21 + lVar3 + -8) = 0x145097c7c;
  lVar4 = -(uVar11 & 0xfffffffffffffff0);
  puVar22 = puVar21 + lVar4 + lVar3;
  uVar13 = iVar19 * 8;
  puVar27 = puVar21 + lVar4 + lVar3 + 0x50;
  local_60 = puVar27;
  if (uVar13 != 0) {
    *(undefined8 *)(puVar21 + lVar4 + lVar3 + -8) = 0x145097ca4;
    memset(puVar27,0,(ulonglong)uVar13 << 2);
  }
  *(undefined1 **)(puVar21 + lVar4 + lVar3 + 0x40) = puVar27;
  *(uint *)(puVar21 + lVar4 + lVar3 + 0x38) = (uint)bVar12;
  *(undefined4 *)(puVar21 + lVar4 + lVar3 + 0x30) = 0;
  *(undefined4 **)(puVar21 + lVar4 + lVar3 + 0x28) = puVar32;
  *(undefined4 *)(puVar21 + lVar4 + lVar3 + 0x20) = 0x1b;
  *(undefined8 *)(puVar21 + lVar4 + lVar3 + -8) = 0x145097cd5;
  FUN_14509d720(param_1,uVar17,puVar23,0x12);
  uVar13 = 0;
  if (param_1 != 0) {
    do {
      uVar11 = 0;
      puVar27 = (undefined1 *)((ulonglong)(local_74 * uVar13) * 4 + (longlong)pvVar15);
      puVar23 = local_60 + (ulonglong)((uVar24 + 7 & 0xfffffff8) * uVar13) * 4;
      if (uVar24 != 0) {
        if ((1 < uVar24) &&
           ((puVar23 + (ulonglong)(uVar24 - 1) * 4 < puVar27 ||
            (puVar27 + (ulonglong)(uVar24 - 1) * 4 < puVar23)))) {
          if (0xf < uVar24) {
            uVar17 = 8;
            do {
              pfVar16 = (float *)(puVar27 + uVar11 * 4);
              fVar5 = pfVar16[1];
              fVar6 = pfVar16[2];
              fVar7 = pfVar16[3];
              uVar14 = (ulonglong)(uVar17 - 4);
              pfVar1 = (float *)(puVar23 + uVar11 * 4);
              fVar8 = pfVar1[1];
              fVar9 = pfVar1[2];
              fVar10 = pfVar1[3];
              pfVar2 = (float *)(puVar27 + uVar11 * 4);
              *pfVar2 = *pfVar1 + *pfVar16;
              pfVar2[1] = fVar8 + fVar5;
              pfVar2[2] = fVar9 + fVar6;
              pfVar2[3] = fVar10 + fVar7;
              uVar18 = (int)uVar11 + 0x10;
              uVar11 = (ulonglong)uVar18;
              pfVar16 = (float *)(puVar27 + uVar14 * 4);
              fVar5 = pfVar16[1];
              fVar6 = pfVar16[2];
              fVar7 = pfVar16[3];
              pfVar1 = (float *)(puVar23 + uVar14 * 4);
              fVar8 = pfVar1[1];
              fVar9 = pfVar1[2];
              fVar10 = pfVar1[3];
              pfVar2 = (float *)(puVar27 + uVar14 * 4);
              *pfVar2 = *pfVar1 + *pfVar16;
              pfVar2[1] = fVar8 + fVar5;
              pfVar2[2] = fVar9 + fVar6;
              pfVar2[3] = fVar10 + fVar7;
              uVar14 = (ulonglong)uVar17;
              pfVar16 = (float *)(puVar27 + uVar14 * 4);
              fVar5 = pfVar16[1];
              fVar6 = pfVar16[2];
              fVar7 = pfVar16[3];
              pfVar1 = (float *)(puVar23 + uVar14 * 4);
              fVar8 = pfVar1[1];
              fVar9 = pfVar1[2];
              fVar10 = pfVar1[3];
              pfVar2 = (float *)(puVar27 + uVar14 * 4);
              *pfVar2 = *pfVar1 + *pfVar16;
              pfVar2[1] = fVar8 + fVar5;
              pfVar2[2] = fVar9 + fVar6;
              pfVar2[3] = fVar10 + fVar7;
              uVar14 = (ulonglong)(uVar17 + 4);
              uVar17 = uVar17 + 0x10;
              pfVar16 = (float *)(puVar27 + uVar14 * 4);
              fVar5 = pfVar16[1];
              fVar6 = pfVar16[2];
              fVar7 = pfVar16[3];
              pfVar1 = (float *)(puVar23 + uVar14 * 4);
              fVar8 = pfVar1[1];
              fVar9 = pfVar1[2];
              fVar10 = pfVar1[3];
              pfVar2 = (float *)(puVar27 + uVar14 * 4);
              *pfVar2 = *pfVar1 + *pfVar16;
              pfVar2[1] = fVar8 + fVar5;
              pfVar2[2] = fVar9 + fVar6;
              pfVar2[3] = fVar10 + fVar7;
            } while (uVar18 < (uVar24 & 0xfffffff0));
            if ((bVar12 & 0xf) < 2) goto LAB_145097dde;
          }
          do {
            *(ulonglong *)(puVar27 + uVar11 * 4) =
                 CONCAT44((float)((ulonglong)*(undefined8 *)(puVar23 + uVar11 * 4) >> 0x20) +
                          (float)((ulonglong)*(undefined8 *)(puVar27 + uVar11 * 4) >> 0x20),
                          (float)*(undefined8 *)(puVar23 + uVar11 * 4) +
                          (float)*(undefined8 *)(puVar27 + uVar11 * 4));
            uVar17 = (int)uVar11 + 2;
            uVar11 = (ulonglong)uVar17;
          } while (uVar17 < (uVar24 & 0xfffffffe));
        }
LAB_145097dde:
        uVar17 = (uint)uVar11;
        if (uVar17 < uVar24) {
          lVar20 = (longlong)puVar23 - (longlong)puVar27;
          uVar14 = uVar11;
          if (3 < uVar24 - uVar17) {
            pfVar16 = (float *)(puVar27 + (uVar11 + 1) * 4);
            uVar18 = ((uVar24 - uVar17) - 4 >> 2) + 1;
            uVar29 = (ulonglong)uVar18;
            uVar17 = uVar17 + uVar18 * 4;
            uVar14 = (ulonglong)uVar17;
            uVar11 = uVar11 + (ulonglong)uVar18 * 4;
            do {
              pfVar16[-1] = *(float *)(lVar20 + -4 + (longlong)pfVar16) + pfVar16[-1];
              *pfVar16 = *(float *)(lVar20 + (longlong)pfVar16) + *pfVar16;
              pfVar16[1] = *(float *)(lVar20 + 4 + (longlong)pfVar16) + pfVar16[1];
              pfVar16[2] = *(float *)(lVar20 + 8 + (longlong)pfVar16) + pfVar16[2];
              pfVar16 = pfVar16 + 4;
              uVar29 = uVar29 - 1;
            } while (uVar29 != 0);
            if (uVar24 <= uVar17) goto LAB_145097e8f;
          }
          pfVar16 = (float *)(puVar27 + uVar11 * 4);
          uVar11 = (ulonglong)(uVar24 - (int)uVar14);
          do {
            *pfVar16 = *(float *)(lVar20 + (longlong)pfVar16) + *pfVar16;
            pfVar16 = pfVar16 + 1;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
LAB_145097e8f:
      uVar13 = uVar13 + 1;
      puVar23 = local_58;
      puVar32 = local_68;
      uVar17 = local_78;
    } while (uVar13 < param_1);
  }
  uVar13 = local_70 & 0x3f800;
  if (uVar13 == 0) {
LAB_145097ee0:
    if (uVar13 == 0x2f000) {
      puVar32 = (undefined4 *)&DAT_149c25f00;
    }
    else if (uVar13 == 0x2f800) {
      puVar32 = (undefined4 *)&DAT_149c25fd0;
    }
  }
  else if (uVar13 == 0x5000) {
    puVar32 = (undefined4 *)&DAT_149c25ce0;
  }
  else if (uVar13 == 0x2d000) {
    puVar32 = (undefined4 *)&DAT_149c25d80;
  }
  else {
    if (uVar13 != 0x2d800) goto LAB_145097ee0;
    puVar32 = (undefined4 *)&DAT_149c25e50;
  }
  uVar13 = 9;
  *(void **)(puVar21 + lVar4 + lVar3 + 0x40) = pvVar15;
  *(uint *)(puVar21 + lVar4 + lVar3 + 0x38) = local_res18;
  *(uint *)(puVar21 + lVar4 + lVar3 + 0x30) = uVar24;
  *(undefined4 **)(puVar21 + lVar4 + lVar3 + 0x28) = puVar32;
  *(undefined4 *)(puVar21 + lVar4 + lVar3 + 0x20) = 0x12;
LAB_145097f27:
  *(undefined8 *)(puVar22 + -8) = 0x145097f31;
  FUN_14509d720(param_1,uVar17,puVar23,uVar13);
  return;
}



// FUNCTION 145097f50 FUN_145097f50 body=407 status=ok
// SIG undefined FUN_145097f50(void)

void FUN_145097f50(uint param_1,longlong param_2,uint param_3,float *param_4,uint param_5,
                  char *param_6,longlong param_7)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  ulonglong uVar5;
  uint uVar6;
  float *pfVar7;
  uint uVar8;
  char *pcVar9;
  float fVar10;
  
  if (param_1 != 0) {
    uVar6 = 0;
    do {
      pfVar1 = (float *)(param_7 + (ulonglong)(uVar6 * param_3) * 4);
      uVar5 = (ulonglong)param_3;
      pfVar7 = pfVar1;
      if (param_3 != 0) {
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pfVar7 = 1.0;
          pfVar7 = pfVar7 + 1;
        }
      }
      if (param_5 != 0) {
        uVar8 = uVar6 * 3;
        uVar5 = (ulonglong)param_5;
        pcVar9 = param_6;
        pfVar7 = param_4;
        do {
          pfVar3 = pfVar1;
          pfVar4 = pfVar7;
          if (*pcVar9 == '\0') {
            do {
              fVar10 = *pfVar4;
              pfVar4 = pfVar4 + 3;
              *pfVar3 = (*(float *)(param_2 + (ulonglong)uVar8 * 4) * fVar10 + 1.0) * 0.5 * *pfVar3;
              pfVar3 = pfVar3 + 1;
            } while (pfVar3 < pfVar1 + param_3);
          }
          else {
            do {
              fVar10 = *(float *)(param_2 + (ulonglong)uVar8 * 4);
              fVar2 = *pfVar4;
              if (fVar10 < 0.0) {
                if (0.0 < fVar2) goto LAB_14509805b;
                fVar10 = (fVar10 + fVar10 + 1.0) * (fVar2 + 0.5) + 0.5;
              }
              else if (fVar2 < 0.0) {
LAB_14509805b:
                fVar10 = 0.0;
              }
              else {
                fVar10 = ((fVar10 + fVar10) - 1.0) * (fVar2 - 0.5) + 0.5;
              }
              pfVar4 = pfVar4 + 3;
              *pfVar3 = fVar10 * *pfVar3;
              pfVar3 = pfVar3 + 1;
            } while (pfVar3 < pfVar1 + param_3);
          }
          pfVar7 = pfVar7 + 1;
          uVar8 = uVar8 + 1;
          pcVar9 = pcVar9 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_1);
  }
  return;
}



// FUNCTION 145098100 FUN_145098100 body=1092 status=ok
// SIG undefined FUN_145098100(void)

void FUN_145098100(uint param_1,longlong param_2,float *param_3,longlong param_4,longlong param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if (param_1 != 0) {
    uVar14 = 0;
    param_4 = param_4 - (longlong)param_3;
    pfVar12 = (float *)(param_2 + 8);
    pfVar11 = param_3;
    do {
      uVar10 = 0;
      fVar22 = 0.0;
      if (param_1 < 4) {
        lVar16 = 0;
LAB_14509841a:
        pfVar9 = param_3 + lVar16;
        pfVar13 = (float *)(param_2 + lVar16 * 0xc + 8);
        do {
          if (uVar14 == uVar10) {
            fVar21 = 1.0;
          }
          else {
            fVar21 = *pfVar9;
            fVar5 = *pfVar11;
            fVar17 = fVar21 + fVar21 + fVar5 + fVar5;
            fVar21 = (pfVar13[-2] * pfVar12[-2] + pfVar13[-1] * pfVar12[-1] +
                     *pfVar13 * *pfVar12 + (fVar17 - 1.0)) /
                     (fVar17 - (ABS(fVar5 - fVar21) + ABS(fVar5 - fVar21)));
            if (0.0 <= fVar21) {
              if (1.0 <= fVar21) {
                fVar21 = 1.0;
              }
            }
            else {
              fVar21 = 0.0;
            }
          }
          pfVar4 = (float *)(param_4 + (longlong)pfVar9);
          pfVar13 = pfVar13 + 3;
          uVar10 = uVar10 + 1;
          fVar5 = *pfVar9;
          pfVar9 = pfVar9 + 1;
          fVar22 = fVar22 + *pfVar4 * fVar5 * *pfVar4 * fVar21;
        } while (uVar10 < param_1);
      }
      else {
        uVar15 = 2;
        pfVar13 = param_3 + 1;
        lVar16 = (ulonglong)((param_1 - 4 >> 2) + 1) << 2;
        pfVar9 = (float *)(param_2 + 0x14);
        uVar10 = 0;
        do {
          if (uVar14 == uVar10) {
            fVar21 = 1.0;
          }
          else {
            fVar21 = pfVar13[-1];
            fVar5 = *pfVar11;
            fVar17 = fVar21 + fVar21 + fVar5 + fVar5;
            fVar21 = (pfVar9[-5] * pfVar12[-2] + pfVar9[-4] * pfVar12[-1] +
                     pfVar9[-3] * *pfVar12 + (fVar17 - 1.0)) /
                     (fVar17 - (ABS(fVar5 - fVar21) + ABS(fVar5 - fVar21)));
            if (0.0 <= fVar21) {
              if (1.0 <= fVar21) {
                fVar21 = 1.0;
              }
            }
            else {
              fVar21 = 0.0;
            }
          }
          fVar5 = *(float *)(param_4 + -4 + (longlong)pfVar13);
          pfVar4 = pfVar13 + -1;
          if (uVar14 == uVar15 - 1) {
            fVar17 = 1.0;
          }
          else {
            fVar17 = *pfVar13;
            fVar6 = *pfVar11;
            fVar18 = fVar17 + fVar17 + fVar6 + fVar6;
            fVar17 = (pfVar9[-1] * pfVar12[-1] + pfVar9[-2] * pfVar12[-2] +
                     *pfVar12 * *pfVar9 + (fVar18 - 1.0)) /
                     (fVar18 - (ABS(fVar6 - fVar17) + ABS(fVar6 - fVar17)));
            if (0.0 <= fVar17) {
              if (1.0 <= fVar17) {
                fVar17 = 1.0;
              }
            }
            else {
              fVar17 = 0.0;
            }
          }
          pfVar3 = (float *)(param_4 + (longlong)pfVar13);
          fVar6 = *pfVar13;
          if (uVar14 == uVar15) {
            fVar18 = 1.0;
          }
          else {
            fVar18 = pfVar13[1];
            fVar7 = *pfVar11;
            fVar19 = fVar18 + fVar18 + fVar7 + fVar7;
            fVar18 = (pfVar9[2] * pfVar12[-1] + pfVar9[1] * pfVar12[-2] +
                     pfVar9[3] * *pfVar12 + (fVar19 - 1.0)) /
                     (fVar19 - (ABS(fVar7 - fVar18) + ABS(fVar7 - fVar18)));
            if (0.0 <= fVar18) {
              if (1.0 <= fVar18) {
                fVar18 = 1.0;
              }
            }
            else {
              fVar18 = 0.0;
            }
          }
          fVar7 = *(float *)(param_4 + 4 + (longlong)pfVar13);
          pfVar1 = pfVar13 + 1;
          if (uVar14 == uVar15 + 1) {
            fVar19 = 1.0;
          }
          else {
            fVar19 = pfVar13[2];
            fVar8 = *pfVar11;
            fVar20 = fVar19 + fVar19 + fVar8 + fVar8;
            fVar19 = (pfVar9[5] * pfVar12[-1] + pfVar9[4] * pfVar12[-2] +
                     pfVar9[6] * *pfVar12 + (fVar20 - 1.0)) /
                     (fVar20 - (ABS(fVar8 - fVar19) + ABS(fVar8 - fVar19)));
            if (0.0 <= fVar19) {
              if (1.0 <= fVar19) {
                fVar19 = 1.0;
              }
            }
            else {
              fVar19 = 0.0;
            }
          }
          fVar8 = *(float *)(param_4 + 8 + (longlong)pfVar13);
          pfVar9 = pfVar9 + 0xc;
          uVar10 = uVar10 + 4;
          uVar15 = uVar15 + 4;
          pfVar2 = pfVar13 + 2;
          pfVar13 = pfVar13 + 4;
          fVar22 = fVar22 + fVar5 * fVar21 * fVar5 * *pfVar4 + *pfVar3 * fVar17 * *pfVar3 * fVar6 +
                   fVar7 * fVar18 * fVar7 * *pfVar1 + fVar19 * fVar8 * fVar8 * *pfVar2;
        } while (uVar10 < param_1 - 3);
        if (uVar10 < param_1) goto LAB_14509841a;
      }
      uVar14 = uVar14 + 1;
      pfVar12 = pfVar12 + 3;
      *(float *)((param_5 - (longlong)param_3) + (longlong)pfVar11) =
           (*(float *)(param_4 + (longlong)pfVar11) * *pfVar11 *
           *(float *)(param_4 + (longlong)pfVar11)) / fVar22;
      pfVar11 = pfVar11 + 1;
    } while (uVar14 < param_1);
  }
  return;
}



// FUNCTION 145098550 FUN_145098550 body=80 status=ok
// SIG undefined FUN_145098550(void)

uint FUN_145098550(uint param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_1 != 0) {
    puVar4 = (uint *)(&DAT_14c72ece0 + (ulonglong)(param_1 - 1) * 0x20);
    uVar2 = (ulonglong)param_1;
    do {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      uVar3 = 0;
      if ((uVar1 & param_2 & 0xffff) != 0) {
        uVar3 = 1 << ((byte)(uVar1 >> 0x10) & 0x1f);
      }
      uVar5 = uVar5 | uVar3;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return uVar5;
}



// FUNCTION 1450985a0 FUN_1450985a0 body=1979 status=ok
// SIG undefined FUN_1450985a0(void)

void FUN_1450985a0(byte param_1,uint param_2,uint param_3,uint param_4,longlong param_5,
                  longlong param_6)

{
  longlong lVar1;
  longlong lVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar8 = param_3 >> 0xc & 0x737;
  uVar7 = (ulonglong)param_4;
  uVar5 = (uint)param_1;
  if (uVar8 < 0x604) {
    if (uVar8 == 0x603) {
      uVar8 = 0;
      if (param_1 != 0) {
        uVar6 = param_2 >> 0xc;
        do {
          lVar2 = param_5 + (ulonglong)(((param_2 & 0xff) + 7 & 0xfffffff8) * uVar8) * 4;
          pfVar3 = (float *)(param_6 + (ulonglong)((param_4 + 7 & 0xfffffff8) * uVar8) * 4);
          if (param_4 != 0) {
            memset(pfVar3,0,uVar7 << 2);
          }
          uVar9 = 0;
          uVar10 = 0;
          uVar4 = 1;
          if (uVar6 != 0) {
            do {
              if ((uVar4 & uVar6) != 0) {
                *pfVar3 = (float)(&DAT_149c24ff0)[uVar9 * 4] * *(float *)(lVar2 + uVar10 * 4) +
                          *pfVar3;
                pfVar3[1] = (float)(&DAT_149c24ff4)[uVar9 * 4] * *(float *)(lVar2 + uVar10 * 4) +
                            pfVar3[1];
                pfVar3[2] = (float)(&DAT_149c24ff8)[uVar9 * 4] * *(float *)(lVar2 + uVar10 * 4) +
                            pfVar3[2];
                lVar1 = uVar10 * 4;
                uVar10 = (ulonglong)((int)uVar10 + 1);
                pfVar3[3] = (float)(&DAT_149c24ffc)[uVar9 * 4] * *(float *)(lVar2 + lVar1) +
                            pfVar3[3];
              }
              uVar9 = (ulonglong)((int)uVar9 + 1);
              uVar4 = uVar4 * 2;
            } while (uVar4 <= uVar6);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar5);
      }
    }
    else if (uVar8 == 3) {
      uVar8 = 0;
      if (param_1 != 0) {
        uVar6 = param_2 >> 0xc;
        do {
          lVar2 = param_5 + (ulonglong)(((param_2 & 0xff) + 7 & 0xfffffff8) * uVar8) * 4;
          pfVar3 = (float *)(param_6 + (ulonglong)((param_4 + 7 & 0xfffffff8) * uVar8) * 4);
          if (param_4 != 0) {
            memset(pfVar3,0,uVar7 << 2);
          }
          uVar9 = 0;
          uVar10 = 0;
          uVar4 = 1;
          if (uVar6 != 0) {
            do {
              if ((uVar4 & uVar6) != 0) {
                *pfVar3 = (float)(&DAT_149c24e80)[uVar9 * 2] * *(float *)(lVar2 + uVar10 * 4) +
                          *pfVar3;
                lVar1 = uVar10 * 4;
                uVar10 = (ulonglong)((int)uVar10 + 1);
                pfVar3[1] = (float)(&DAT_149c24e84)[uVar9 * 2] * *(float *)(lVar2 + lVar1) +
                            pfVar3[1];
              }
              uVar9 = (ulonglong)((int)uVar9 + 1);
              uVar4 = uVar4 * 2;
            } while (uVar4 <= uVar6);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar5);
      }
    }
    else if (uVar8 == 4) {
      uVar8 = 0;
      if (param_1 != 0) {
        uVar6 = param_2 >> 0xc;
        do {
          pfVar3 = (float *)(param_6 + (ulonglong)((param_4 + 7 & 0xfffffff8) * uVar8) * 4);
          if (param_4 != 0) {
            memset(pfVar3,0,uVar7 << 2);
          }
          uVar9 = 0;
          uVar10 = 0;
          uVar4 = 1;
          if (uVar6 != 0) {
            do {
              if ((uVar4 & uVar6) != 0) {
                lVar2 = uVar10 * 4;
                uVar10 = (ulonglong)((int)uVar10 + 1);
                *pfVar3 = *(float *)(param_5 + (ulonglong)
                                               (((param_2 & 0xff) + 7 & 0xfffffff8) * uVar8) * 4 +
                                    lVar2) * (float)(&DAT_149c24e30)[uVar9] + *pfVar3;
              }
              uVar9 = (ulonglong)((int)uVar9 + 1);
              uVar4 = uVar4 * 2;
            } while (uVar4 <= uVar6);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar5);
      }
    }
    else if ((uVar8 == 7) && (uVar8 = 0, param_1 != 0)) {
      uVar5 = param_2 >> 0xc;
      do {
        lVar2 = param_5 + (ulonglong)(((param_2 & 0xff) + 7 & 0xfffffff8) * uVar8) * 4;
        pfVar3 = (float *)(param_6 + (ulonglong)((param_4 + 7 & 0xfffffff8) * uVar8) * 4);
        if (param_4 != 0) {
          memset(pfVar3,0,uVar7 << 2);
        }
        uVar9 = 0;
        uVar10 = 0;
        uVar6 = 1;
        if (uVar5 != 0) {
          do {
            if ((uVar6 & uVar5) != 0) {
              *pfVar3 = (float)(&DAT_149c24f10)[uVar9 * 3] * *(float *)(lVar2 + uVar10 * 4) +
                        *pfVar3;
              pfVar3[1] = (float)(&DAT_149c24f14)[uVar9 * 3] * *(float *)(lVar2 + uVar10 * 4) +
                          pfVar3[1];
              lVar1 = uVar10 * 4;
              uVar10 = (ulonglong)((int)uVar10 + 1);
              pfVar3[2] = (float)(&DAT_149c24f18)[uVar9 * 3] * *(float *)(lVar2 + lVar1) + pfVar3[2]
              ;
            }
            uVar9 = (ulonglong)((int)uVar9 + 1);
            uVar6 = uVar6 * 2;
          } while (uVar6 <= uVar5);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < param_1);
    }
  }
  else if (uVar8 == 0x607) {
    uVar8 = 0;
    if (param_1 != 0) {
      uVar6 = param_2 >> 0xc;
      do {
        lVar2 = param_5 + (ulonglong)(((param_2 & 0xff) + 7 & 0xfffffff8) * uVar8) * 4;
        pfVar3 = (float *)(param_6 + (ulonglong)((param_4 + 7 & 0xfffffff8) * uVar8) * 4);
        if (param_4 != 0) {
          memset(pfVar3,0,uVar7 << 2);
        }
        uVar9 = 0;
        uVar10 = 0;
        uVar4 = 1;
        if (uVar6 != 0) {
          do {
            if ((uVar4 & uVar6) != 0) {
              *pfVar3 = (float)(&DAT_149c25110)[uVar9 * 5] * *(float *)(lVar2 + uVar10 * 4) +
                        *pfVar3;
              pfVar3[1] = (float)(&DAT_149c25114)[uVar9 * 5] * *(float *)(lVar2 + uVar10 * 4) +
                          pfVar3[1];
              pfVar3[2] = (float)(&DAT_149c25118)[uVar9 * 5] * *(float *)(lVar2 + uVar10 * 4) +
                          pfVar3[2];
              pfVar3[3] = (float)(&DAT_149c2511c)[uVar9 * 5] * *(float *)(lVar2 + uVar10 * 4) +
                          pfVar3[3];
              lVar1 = uVar10 * 4;
              uVar10 = (ulonglong)((int)uVar10 + 1);
              pfVar3[4] = (float)(&DAT_149c25120)[uVar9 * 5] * *(float *)(lVar2 + lVar1) + pfVar3[4]
              ;
            }
            uVar9 = (ulonglong)((int)uVar9 + 1);
            uVar4 = uVar4 * 2;
          } while (uVar4 <= uVar6);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar5);
    }
  }
  else if (uVar8 == 0x633) {
    uVar8 = 0;
    if (param_1 != 0) {
      uVar6 = param_2 >> 0xc;
      do {
        lVar2 = param_5 + (ulonglong)(((param_2 & 0xff) + 7 & 0xfffffff8) * uVar8) * 4;
        pfVar3 = (float *)(param_6 + (ulonglong)((param_4 + 7 & 0xfffffff8) * uVar8) * 4);
        if (param_4 != 0) {
          memset(pfVar3,0,uVar7 << 2);
        }
        uVar9 = 0;
        uVar10 = 0;
        uVar4 = 1;
        if (uVar6 != 0) {
          do {
            if ((uVar4 & uVar6) != 0) {
              *pfVar3 = (float)(&DAT_149c25280)[uVar9 * 6] * *(float *)(lVar2 + uVar10 * 4) +
                        *pfVar3;
              pfVar3[1] = (float)(&DAT_149c25284)[uVar9 * 6] * *(float *)(lVar2 + uVar10 * 4) +
                          pfVar3[1];
              pfVar3[2] = (float)(&DAT_149c25288)[uVar9 * 6] * *(float *)(lVar2 + uVar10 * 4) +
                          pfVar3[2];
              pfVar3[3] = (float)(&DAT_149c2528c)[uVar9 * 6] * *(float *)(lVar2 + uVar10 * 4) +
                          pfVar3[3];
              pfVar3[4] = (float)(&DAT_149c25290)[uVar9 * 6] * *(float *)(lVar2 + uVar10 * 4) +
                          pfVar3[4];
              lVar1 = uVar10 * 4;
              uVar10 = (ulonglong)((int)uVar10 + 1);
              pfVar3[5] = (float)(&DAT_149c25294)[uVar9 * 6] * *(float *)(lVar2 + lVar1) + pfVar3[5]
              ;
            }
            uVar9 = (ulonglong)((int)uVar9 + 1);
            uVar4 = uVar4 * 2;
          } while (uVar4 <= uVar6);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar5);
    }
  }
  else if ((uVar8 == 0x637) && (uVar8 = 0, param_1 != 0)) {
    uVar6 = param_2 >> 0xc;
    do {
      lVar2 = param_5 + (ulonglong)(((param_2 & 0xff) + 7 & 0xfffffff8) * uVar8) * 4;
      pfVar3 = (float *)(param_6 + (ulonglong)((param_4 + 7 & 0xfffffff8) * uVar8) * 4);
      if (param_4 != 0) {
        memset(pfVar3,0,uVar7 << 2);
      }
      uVar9 = 0;
      uVar10 = 0;
      uVar4 = 1;
      if (uVar6 != 0) {
        do {
          if ((uVar4 & uVar6) != 0) {
            *pfVar3 = (float)(&DAT_149c25430)[uVar9 * 7] * *(float *)(lVar2 + uVar10 * 4) + *pfVar3;
            pfVar3[1] = (float)(&DAT_149c25434)[uVar9 * 7] * *(float *)(lVar2 + uVar10 * 4) +
                        pfVar3[1];
            pfVar3[2] = (float)(&DAT_149c25438)[uVar9 * 7] * *(float *)(lVar2 + uVar10 * 4) +
                        pfVar3[2];
            pfVar3[3] = (float)(&DAT_149c2543c)[uVar9 * 7] * *(float *)(lVar2 + uVar10 * 4) +
                        pfVar3[3];
            pfVar3[4] = (float)(&DAT_149c25440)[uVar9 * 7] * *(float *)(lVar2 + uVar10 * 4) +
                        pfVar3[4];
            pfVar3[5] = (float)(&DAT_149c25444)[uVar9 * 7] * *(float *)(lVar2 + uVar10 * 4) +
                        pfVar3[5];
            lVar1 = uVar10 * 4;
            uVar10 = (ulonglong)((int)uVar10 + 1);
            pfVar3[6] = (float)(&DAT_149c25448)[uVar9 * 7] * *(float *)(lVar2 + lVar1) + pfVar3[6];
          }
          uVar9 = (ulonglong)((int)uVar9 + 1);
          uVar4 = uVar4 * 2;
        } while (uVar4 <= uVar6);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar5);
  }
  return;
}



// FUNCTION 145098d60 FUN_145098d60 body=1726 status=ok
// SIG undefined FUN_145098d60(void)

void FUN_145098d60(uint param_1,ulonglong param_2,uint param_3,longlong param_4)

{
  undefined4 *puVar1;
  void *_Dst;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint local_res8;
  uint local_res10;
  
  uVar8 = 0;
  uVar9 = (ulonglong)param_3;
  uVar2 = (uint)(param_2 >> 0xc);
  uVar7 = uVar2 & 0xfffff;
  param_1 = param_1 >> 0xc;
  uVar2 = uVar2 & 0x737;
  uVar10 = 1;
  if (uVar2 < 0x604) {
    if (uVar2 == 0x603) {
      iVar3 = 0;
      uVar6 = 0;
      local_res10 = 0;
      local_res8 = 0;
      uVar2 = uVar10;
      if (param_1 != 0) {
        do {
          uVar4 = (uint)uVar6;
          if ((param_1 & uVar2) != 0) {
            puVar1 = (undefined4 *)(param_4 + (ulonglong)((param_3 + 7 & 0xfffffff8) * iVar3) * 4);
            if (param_3 != 0) {
              memset(puVar1,0,uVar9 << 2);
              uVar6 = (ulonglong)local_res8;
            }
            *puVar1 = (&DAT_149c24ff0)[uVar6 * 4];
            puVar1[1] = (&DAT_149c24ff4)[uVar6 * 4];
            puVar1[2] = (&DAT_149c24ff8)[uVar6 * 4];
            puVar1[3] = (&DAT_149c24ffc)[uVar6 * 4];
            uVar4 = (uint)uVar6;
            if (4 < param_3) {
              memset(puVar1 + 4,0,(ulonglong)(param_3 - 4) << 2);
              uVar4 = local_res8;
            }
            iVar3 = local_res10 + 1;
            local_res10 = iVar3;
          }
          local_res8 = uVar4 + 1;
          uVar6 = (ulonglong)local_res8;
          uVar2 = uVar2 * 2;
        } while (uVar2 <= param_1);
      }
    }
    else if (uVar2 == 3) {
      iVar3 = 0;
      uVar6 = 0;
      local_res10 = 0;
      local_res8 = 0;
      uVar2 = uVar10;
      if (param_1 != 0) {
        do {
          uVar4 = (uint)uVar6;
          if ((param_1 & uVar2) != 0) {
            puVar1 = (undefined4 *)(param_4 + (ulonglong)((param_3 + 7 & 0xfffffff8) * iVar3) * 4);
            if (param_3 != 0) {
              memset(puVar1,0,uVar9 << 2);
              uVar6 = (ulonglong)local_res8;
            }
            *puVar1 = (&DAT_149c24e80)[uVar6 * 2];
            puVar1[1] = (&DAT_149c24e84)[uVar6 * 2];
            uVar4 = (uint)uVar6;
            if (2 < param_3) {
              memset(puVar1 + 2,0,(ulonglong)(param_3 - 2) << 2);
              uVar4 = local_res8;
            }
            iVar3 = local_res10 + 1;
            local_res10 = iVar3;
          }
          local_res8 = uVar4 + 1;
          uVar6 = (ulonglong)local_res8;
          uVar2 = uVar2 * 2;
        } while (uVar2 <= param_1);
      }
    }
    else if (uVar2 == 4) {
      uVar4 = 0;
      uVar6 = 0;
      local_res8 = 0;
      local_res10 = 0;
      uVar2 = uVar10;
      if (param_1 != 0) {
        do {
          uVar5 = (uint)uVar6;
          if ((param_1 & uVar2) != 0) {
            puVar1 = (undefined4 *)(param_4 + (ulonglong)((param_3 + 7 & 0xfffffff8) * uVar4) * 4);
            if (param_3 != 0) {
              memset(puVar1,0,uVar9 << 2);
              uVar6 = (ulonglong)local_res10;
              uVar4 = local_res8;
            }
            *puVar1 = (&DAT_149c24e30)[uVar6];
            uVar5 = (uint)uVar6;
            if (1 < param_3) {
              memset(puVar1 + 1,0,(ulonglong)(param_3 - 1) << 2);
              uVar4 = local_res8;
              uVar5 = local_res10;
            }
            uVar4 = uVar4 + 1;
            local_res8 = uVar4;
          }
          local_res10 = uVar5 + 1;
          uVar6 = (ulonglong)local_res10;
          uVar2 = uVar2 * 2;
        } while (uVar2 <= param_1);
      }
    }
    else if (uVar2 == 7) {
      iVar3 = 0;
      uVar6 = 0;
      local_res10 = 0;
      local_res8 = 0;
      uVar2 = uVar10;
      if (param_1 != 0) {
        do {
          uVar4 = (uint)uVar6;
          if ((param_1 & uVar2) != 0) {
            puVar1 = (undefined4 *)(param_4 + (ulonglong)((param_3 + 7 & 0xfffffff8) * iVar3) * 4);
            if (param_3 != 0) {
              memset(puVar1,0,uVar9 << 2);
              uVar6 = (ulonglong)local_res8;
            }
            *puVar1 = (&DAT_149c24f10)[uVar6 * 3];
            puVar1[1] = (&DAT_149c24f14)[uVar6 * 3];
            puVar1[2] = (&DAT_149c24f18)[uVar6 * 3];
            uVar4 = (uint)uVar6;
            if (3 < param_3) {
              memset(puVar1 + 3,0,(ulonglong)(param_3 - 3) << 2);
              uVar4 = local_res8;
            }
            iVar3 = local_res10 + 1;
            local_res10 = iVar3;
          }
          local_res8 = uVar4 + 1;
          uVar6 = (ulonglong)local_res8;
          uVar2 = uVar2 * 2;
        } while (uVar2 <= param_1);
      }
    }
  }
  else if (uVar2 == 0x607) {
    iVar3 = 0;
    uVar6 = 0;
    local_res10 = 0;
    local_res8 = 0;
    uVar2 = uVar10;
    if (param_1 != 0) {
      do {
        uVar4 = (uint)uVar6;
        if ((param_1 & uVar2) != 0) {
          puVar1 = (undefined4 *)(param_4 + (ulonglong)((param_3 + 7 & 0xfffffff8) * iVar3) * 4);
          if (param_3 != 0) {
            memset(puVar1,0,uVar9 << 2);
            uVar6 = (ulonglong)local_res8;
          }
          *puVar1 = (&DAT_149c25110)[uVar6 * 5];
          puVar1[1] = (&DAT_149c25114)[uVar6 * 5];
          puVar1[2] = (&DAT_149c25118)[uVar6 * 5];
          puVar1[3] = (&DAT_149c2511c)[uVar6 * 5];
          puVar1[4] = (&DAT_149c25120)[uVar6 * 5];
          uVar4 = (uint)uVar6;
          if (5 < param_3) {
            memset(puVar1 + 5,0,(ulonglong)(param_3 - 5) << 2);
            uVar4 = local_res8;
          }
          iVar3 = local_res10 + 1;
          local_res10 = iVar3;
        }
        local_res8 = uVar4 + 1;
        uVar6 = (ulonglong)local_res8;
        uVar2 = uVar2 * 2;
      } while (uVar2 <= param_1);
    }
  }
  else if (uVar2 == 0x633) {
    iVar3 = 0;
    uVar6 = 0;
    local_res10 = 0;
    local_res8 = 0;
    uVar2 = uVar10;
    if (param_1 != 0) {
      do {
        uVar4 = (uint)uVar6;
        if ((param_1 & uVar2) != 0) {
          puVar1 = (undefined4 *)(param_4 + (ulonglong)((param_3 + 7 & 0xfffffff8) * iVar3) * 4);
          if (param_3 != 0) {
            memset(puVar1,0,uVar9 << 2);
            uVar6 = (ulonglong)local_res8;
          }
          *puVar1 = (&DAT_149c25280)[uVar6 * 6];
          puVar1[1] = (&DAT_149c25284)[uVar6 * 6];
          puVar1[2] = (&DAT_149c25288)[uVar6 * 6];
          puVar1[3] = (&DAT_149c2528c)[uVar6 * 6];
          puVar1[4] = (&DAT_149c25290)[uVar6 * 6];
          puVar1[5] = (&DAT_149c25294)[uVar6 * 6];
          uVar4 = (uint)uVar6;
          if (6 < param_3) {
            memset(puVar1 + 6,0,(ulonglong)(param_3 - 6) << 2);
            uVar4 = local_res8;
          }
          iVar3 = local_res10 + 1;
          local_res10 = iVar3;
        }
        local_res8 = uVar4 + 1;
        uVar6 = (ulonglong)local_res8;
        uVar2 = uVar2 * 2;
      } while (uVar2 <= param_1);
    }
  }
  else if (uVar2 == 0x637) {
    iVar3 = 0;
    uVar6 = 0;
    local_res10 = 0;
    local_res8 = 0;
    uVar2 = uVar10;
    if (param_1 != 0) {
      do {
        uVar4 = (uint)uVar6;
        if ((param_1 & uVar2) != 0) {
          puVar1 = (undefined4 *)(param_4 + (ulonglong)((param_3 + 7 & 0xfffffff8) * iVar3) * 4);
          if (param_3 != 0) {
            memset(puVar1,0,uVar9 << 2);
            uVar6 = (ulonglong)local_res8;
          }
          *puVar1 = (&DAT_149c25430)[uVar6 * 7];
          puVar1[1] = (&DAT_149c25434)[uVar6 * 7];
          puVar1[2] = (&DAT_149c25438)[uVar6 * 7];
          puVar1[3] = (&DAT_149c2543c)[uVar6 * 7];
          puVar1[4] = (&DAT_149c25440)[uVar6 * 7];
          puVar1[5] = (&DAT_149c25444)[uVar6 * 7];
          puVar1[6] = (&DAT_149c25448)[uVar6 * 7];
          uVar4 = (uint)uVar6;
          if (7 < param_3) {
            memset(puVar1 + 7,0,(ulonglong)(param_3 - 7) << 2);
            uVar4 = local_res8;
          }
          iVar3 = local_res10 + 1;
          local_res10 = iVar3;
        }
        local_res8 = uVar4 + 1;
        uVar6 = (ulonglong)local_res8;
        uVar2 = uVar2 * 2;
      } while (uVar2 <= param_1);
    }
  }
  if (((param_2 >> 0xc & 0xff9c0) != 0) && ((param_1 & 0xff9c0) != 0)) {
    iVar3 = 0;
    for (uVar2 = param_1 & 0x63f; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
      iVar3 = iVar3 + 1;
    }
    uVar2 = 0x800;
    if (0x7ff < param_1) {
      do {
        if ((uVar2 & param_1) != 0) {
          _Dst = (void *)(param_4 + (ulonglong)((param_3 + 7 & 0xfffffff8) * iVar3) * 4);
          if (param_3 != 0) {
            memset(_Dst,0,uVar9 << 2);
          }
          if ((uVar2 & uVar7) != 0) {
            for (; (uVar10 & uVar2) == 0; uVar10 = uVar10 * 2) {
              uVar4 = uVar8 + 1;
              if ((uVar10 & uVar7) == 0) {
                uVar4 = uVar8;
              }
              uVar8 = uVar4;
            }
            *(undefined4 *)((longlong)_Dst + (ulonglong)uVar8 * 4) = 0x3f800000;
          }
          iVar3 = iVar3 + 1;
        }
        uVar2 = uVar2 * 2;
      } while (uVar2 <= param_1);
    }
  }
  return;
}



// FUNCTION 145099420 FUN_145099420 body=2403 status=ok
// SIG undefined FUN_145099420(void)

void FUN_145099420(float param_1,float param_2,float param_3,uint param_4,uint param_5,
                  undefined4 *param_6)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_178 [14];
  undefined8 uStack_140;
  undefined8 uStack_138;
  float local_130 [4];
  undefined8 local_120;
  float local_118 [2];
  undefined8 uStack_110;
  undefined8 local_108 [25];
  
  uVar14 = param_5;
  uVar7 = (ulonglong)param_5;
  *param_6 = 0x3f800000;
  param_6[uVar7] = -param_1;
  pfVar4 = (float *)(param_6 + uVar7 * 2);
  *pfVar4 = param_2;
  pfVar4[uVar7] = param_3;
  pfVar4 = pfVar4 + uVar7 + uVar7;
  if (param_4 < 2) {
    return;
  }
  if (0.99 <= param_2 * param_2) {
    param_4 = param_4 + 1;
    fVar19 = param_2;
    uVar14 = 2;
    if (2 < param_4) {
      do {
        uVar8 = uVar14 + 1;
        fVar19 = fVar19 * param_2;
        do {
          *pfVar4 = 0.0;
          pfVar4 = pfVar4 + uVar7;
        } while (pfVar4 < param_6 + uVar8 * uVar14 * param_5);
        *pfVar4 = fVar19;
        pfVar4 = pfVar4 + uVar7;
        uVar14 = uVar8;
      } while (uVar8 < param_4);
    }
    do {
      *pfVar4 = 0.0;
      pfVar4 = pfVar4 + uVar7;
    } while (pfVar4 < param_6 + param_4 * param_4 * param_5);
    return;
  }
  fVar20 = 1.0 - param_2 * param_2;
  fVar21 = SQRT(fVar20);
  local_178[1] = (1.0 / fVar21) * param_3;
  fVar19 = -((1.0 / fVar21) * param_1);
  if (param_4 < 4) {
    fVar22 = (local_178[1] + local_178[1]) * fVar19;
    *pfVar4 = fVar20 * fVar22 * 0.8660254;
    pfVar4 = pfVar4 + uVar7;
    *pfVar4 = param_2 * fVar21 * fVar19 * 1.7320508;
    pfVar4 = pfVar4 + uVar7;
    *pfVar4 = param_2 * 1.5 * param_2 - 0.5;
    fVar23 = local_178[1] * local_178[1] - fVar19 * fVar19;
    pfVar4 = pfVar4 + uVar7;
    *pfVar4 = param_2 * (local_178[1] + local_178[1]) * fVar21 * 0.8660254;
    pfVar4 = pfVar4 + uVar7;
    *pfVar4 = fVar23 * 0.8660254 * fVar20;
    pfVar4 = pfVar4 + uVar7;
    if (param_4 != 3) {
      return;
    }
    fVar18 = param_2 * 5.0 * param_2;
    fVar17 = (fVar18 - 1.0) * fVar21;
    *pfVar4 = (fVar19 * local_178[1] * local_178[1] * 3.0 - fVar19 * fVar19 * fVar19) * 0.7905694 *
              fVar20 * fVar21;
    pfVar4 = pfVar4 + uVar7;
    *pfVar4 = fVar20 * param_2 * fVar22 * 1.9364917;
    pfVar4 = pfVar4 + uVar7;
    *pfVar4 = fVar19 * 0.61237246 * fVar17;
    pfVar4 = pfVar4 + uVar7;
    *pfVar4 = (fVar18 - 3.0) * param_2 * 0.5;
    pfVar4 = pfVar4 + uVar7;
    *pfVar4 = local_178[1] * 0.61237246 * fVar17;
    pfVar4[uVar7] = fVar20 * param_2 * fVar23 * 1.9364917;
    (pfVar4 + uVar7)[uVar7] =
         (local_178[1] * local_178[1] * local_178[1] - fVar19 * local_178[1] * fVar19 * 3.0) *
         0.7905694 * fVar20 * fVar21;
    return;
  }
  uVar8 = param_4 + 1;
  uVar7 = 2;
  local_178[7] = fVar19;
  local_178[0] = 1.0;
  local_178[6] = 0.0;
  if (2 < uVar8) {
    fVar20 = local_178[1] + local_178[1];
    lVar6 = 2;
    if (3 < param_4 - 1) {
      uVar10 = 0;
      uVar13 = uVar7;
      do {
        iVar15 = (int)uVar10;
        fVar22 = local_178[iVar15 + 1];
        fVar23 = local_178[(ulonglong)(iVar15 + 1) + 6];
        uVar11 = (int)uVar13 + 4;
        uVar7 = (ulonglong)uVar11;
        local_178[lVar6] = fVar20 * fVar22 - local_178[uVar10];
        fVar17 = local_178[uVar13];
        local_178[lVar6 + 6] = local_178[1] * fVar23 + fVar22 * fVar19;
        fVar23 = local_178[uVar13 + 6];
        uVar10 = (ulonglong)(iVar15 + 4);
        local_178[lVar6 + 1] = fVar17 * fVar20 - fVar22;
        fVar22 = local_178[iVar15 + 3];
        local_178[lVar6 + 7] = local_178[1] * fVar23 + fVar17 * fVar19;
        fVar23 = local_178[(ulonglong)(iVar15 + 3) + 6];
        local_178[lVar6 + 2] = fVar20 * fVar22 - fVar17;
        fVar17 = local_178[uVar10];
        local_178[lVar6 + 8] = local_178[1] * fVar23 + fVar22 * fVar19;
        fVar23 = local_178[uVar10 + 6];
        local_178[lVar6 + 3] = fVar20 * fVar17 - fVar22;
        local_178[lVar6 + 9] = local_178[1] * fVar23 + fVar17 * fVar19;
        lVar6 = lVar6 + 4;
        uVar13 = uVar7;
      } while (uVar11 < param_4 - 2);
      if (uVar8 <= uVar11) goto LAB_145099965;
    }
    lVar6 = lVar6 * 4;
    do {
      iVar15 = (int)uVar7;
      fVar22 = local_178[iVar15 - 1U];
      uVar7 = (ulonglong)(iVar15 + 1U);
      fVar23 = local_178[(ulonglong)(iVar15 - 1U) + 6];
      *(float *)((longlong)local_178 + lVar6) = fVar22 * fVar20 - local_178[iVar15 - 2];
      *(float *)((longlong)local_178 + lVar6 + 0x18) = local_178[1] * fVar23 + fVar22 * fVar19;
      lVar6 = lVar6 + 4;
    } while (iVar15 + 1U < uVar8);
  }
LAB_145099965:
  local_178[0xd] = fVar21;
  local_130[2] = 0.0;
  local_130[3] = 0.0;
  local_130[0] = 1.0;
  local_130[1] = 0.0;
  uStack_110 = 0;
  local_120 = 0;
  local_108[0] = 0;
  local_178[0xc] = param_2;
  uStack_140 = 0;
  uStack_138 = 0;
  param_5 = 3;
  uStack_140._0_4_ = 0;
  uStack_140._4_4_ = 0;
  local_118[0] = param_2;
  local_130[1] = fVar21;
  fVar19 = 1.0;
  uVar8 = 2;
  do {
    local_130[0] = local_118[0];
    local_120 = local_108[0];
    uVar11 = uVar8 + 1;
    uVar9 = 1;
    fVar20 = (float)param_5;
    uVar12 = uVar11 * uVar8;
    local_118[0] = (fVar20 * param_2 * local_130[0] - (float)(uVar8 - 1) * fVar19) / (float)uVar8;
    local_118[1] = 0.0;
    param_6[uVar12 * uVar14] = local_118[0];
    if (1 < uVar11) {
      lVar6 = 1;
      if (3 < uVar8) {
        lVar1 = (ulonglong)(uVar8 - 1) * 5;
        fVar19 = fVar20 * fVar21;
        iVar15 = uVar12 + 3;
        do {
          uVar3 = (-3 - uVar12) + iVar15;
          fVar22 = fVar19 * local_178[(ulonglong)uVar3 + 0xc] + local_130[lVar6];
          iVar5 = uVar12 - uVar9;
          local_118[lVar6] = fVar22;
          fVar22 = fVar22 * *(float *)(&DAT_149c25630 + ((ulonglong)uVar3 + lVar1) * 4);
          param_6[(iVar15 + -2) * uVar14] = fVar22 * local_178[lVar6];
          param_6[iVar5 * uVar14] = fVar22 * local_178[lVar6 + 6];
          fVar22 = fVar19 * local_178[(ulonglong)uVar9 + 0xc] + local_130[lVar6 + 1];
          local_118[lVar6 + 1] = fVar22;
          fVar22 = fVar22 * *(float *)(&DAT_149c25630 + ((ulonglong)uVar9 + lVar1) * 4);
          param_6[(iVar15 + -1) * uVar14] = fVar22 * local_178[lVar6 + 1];
          param_6[(iVar5 + -1) * uVar14] = fVar22 * local_178[lVar6 + 7];
          fVar22 = fVar19 * local_178[(ulonglong)(~uVar12 + iVar15) + 0xc] + local_130[lVar6 + 2];
          *(float *)((longlong)local_108 + lVar6 * 4 + -8) = fVar22;
          fVar22 = fVar22 * *(float *)(&DAT_149c25630 + ((ulonglong)(~uVar12 + iVar15) + lVar1) * 4)
          ;
          param_6[iVar15 * uVar14] = fVar22 * local_178[lVar6 + 2];
          param_6[(iVar5 + -2) * uVar14] = fVar22 * local_178[lVar6 + 8];
          fVar22 = fVar19 * local_178[(ulonglong)(iVar15 - uVar12) + 0xc] + local_130[lVar6 + 3];
          *(float *)((longlong)local_108 + lVar6 * 4 + -4) = fVar22;
          fVar22 = fVar22 * *(float *)(&DAT_149c25630 + ((ulonglong)(iVar15 - uVar12) + lVar1) * 4);
          param_6[(iVar15 + 1) * uVar14] = fVar22 * local_178[lVar6 + 3];
          lVar2 = lVar6 + 9;
          uVar9 = uVar9 + 4;
          lVar6 = lVar6 + 4;
          iVar15 = iVar15 + 4;
          param_6[(iVar5 + -3) * uVar14] = fVar22 * local_178[lVar2];
        } while (uVar9 < uVar8 - 2);
        if (uVar11 <= uVar9) goto LAB_145099ca8;
      }
      lVar6 = lVar6 * 4;
      do {
        fVar22 = fVar20 * fVar21 * local_178[(ulonglong)(uVar9 - 1) + 0xc] +
                 *(float *)((longlong)local_130 + lVar6);
        *(float *)((longlong)local_118 + lVar6) = fVar22;
        fVar22 = fVar22 * *(float *)(&DAT_149c25630 +
                                    ((ulonglong)(uVar9 - 1) + (ulonglong)(uVar8 - 1) * 5) * 4);
        fVar19 = *(float *)((longlong)local_178 + lVar6 + 0x18);
        pfVar4 = (float *)((longlong)local_178 + lVar6);
        lVar6 = lVar6 + 4;
        param_6[(uVar9 + uVar12) * uVar14] = fVar22 * *pfVar4;
        iVar15 = uVar12 - uVar9;
        uVar9 = uVar9 + 1;
        param_6[iVar15 * uVar14] = fVar22 * fVar19;
      } while (uVar9 < uVar11);
    }
LAB_145099ca8:
    param_5 = param_5 + 2;
    local_130[3] = (float)uStack_140._4_4_;
    local_130[2] = (float)(undefined4)uStack_140;
    uStack_138 = local_108[0];
    local_178[0xc] = local_118[0];
    local_178[0xd] = 0.0;
    uStack_140 = uStack_110;
    bVar16 = param_4 <= uVar8;
    local_130[1] = 0.0;
    uStack_140._0_4_ = (undefined4)uStack_110;
    uStack_140._4_4_ = uStack_110._4_4_;
    fVar19 = local_130[0];
    uVar8 = uVar11;
    if (bVar16) {
      return;
    }
  } while( true );
}



// FUNCTION 145099d90 FUN_145099d90 body=738 status=ok
// SIG undefined FUN_145099d90(void)

void * FUN_145099d90(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  float fVar15;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  
  lVar11 = (longlong)param_1;
  pvVar5 = (void *)(&DAT_14c79bef0)[lVar11];
  iVar14 = param_1 + 1;
  if ((pvVar5 == (void *)0x0) && (-1 < param_1)) {
    puVar2 = (&PTR_DAT_14c72eca0)[lVar11];
    uVar1 = *(uint *)(&DAT_14c72ecc8 + lVar11 * 4);
    pvVar5 = AK::MemoryMgr::Malloc(0,(ulonglong)((param_1 + 2) * (param_1 + 2) * uVar1) << 2);
    if (pvVar5 != (void *)0x0) {
      if (uVar1 != 0) {
        puVar8 = (undefined4 *)(puVar2 + 4);
        uVar12 = (ulonglong)uVar1;
        pvVar7 = pvVar5;
        do {
          FUN_145099420(puVar8[-1],*puVar8,puVar8[1],iVar14,uVar1,pvVar7);
          pvVar7 = (void *)((longlong)pvVar7 + 4);
          puVar8 = puVar8 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      iVar6 = 0;
      local_48 = 0x3f233045;
      local_44 = 0x3f1b981c;
      local_58 = 0x3f5105ec3f800000;
      uStack_50 = 0x3f2d166c3f3af4ba;
      if (-1 < iVar14) {
        lVar13 = 0;
        do {
          uVar3 = 0;
          fVar15 = *(float *)((longlong)&local_58 + lVar13) *
                   *(float *)((longlong)&local_58 + lVar13) *
                   *(float *)((longlong)&DAT_149c25698 + lVar13) *
                   *(float *)((longlong)&DAT_149c25698 + lVar13);
          if (uVar1 < 4) {
            if (uVar1 != 0) goto LAB_145099f30;
          }
          else {
            uVar3 = (uVar1 - 4 >> 2) + 1;
            uVar12 = (ulonglong)uVar3;
            uVar3 = uVar3 * 4;
            uVar10 = iVar6 * iVar6 * uVar1 + 2;
            do {
              *(float *)((longlong)pvVar5 + (ulonglong)(uVar10 - 2) * 4) =
                   fVar15 * *(float *)((longlong)pvVar5 + (ulonglong)(uVar10 - 2) * 4);
              *(float *)((longlong)pvVar5 + (ulonglong)(uVar10 - 1) * 4) =
                   fVar15 * *(float *)((longlong)pvVar5 + (ulonglong)(uVar10 - 1) * 4);
              uVar4 = uVar10 + 1;
              *(float *)((longlong)pvVar5 + (ulonglong)uVar10 * 4) =
                   fVar15 * *(float *)((longlong)pvVar5 + (ulonglong)uVar10 * 4);
              uVar10 = uVar10 + 4;
              *(float *)((longlong)pvVar5 + (ulonglong)uVar4 * 4) =
                   fVar15 * *(float *)((longlong)pvVar5 + (ulonglong)uVar4 * 4);
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
            for (; uVar3 < uVar1; uVar3 = uVar3 + 1) {
LAB_145099f30:
              uVar12 = (ulonglong)(iVar6 * iVar6 * uVar1 + uVar3);
              *(float *)((longlong)pvVar5 + uVar12 * 4) =
                   fVar15 * *(float *)((longlong)pvVar5 + uVar12 * 4);
            }
          }
          iVar9 = -iVar6;
          while (iVar9 = iVar9 + 1, iVar9 < iVar6) {
            if (uVar1 != 0) {
              memset((void *)((longlong)pvVar5 +
                             (ulonglong)(((iVar6 + 1) * iVar6 + iVar9) * uVar1) * 4),0,
                     (ulonglong)uVar1 << 2);
            }
          }
          if (iVar9 == iVar6) {
            uVar3 = 0;
            iVar9 = (iVar6 + 1) * iVar6 + iVar9;
            if (uVar1 < 4) {
              if (uVar1 != 0) goto LAB_14509a010;
            }
            else {
              uVar3 = (uVar1 - 4 >> 2) + 1;
              uVar12 = (ulonglong)uVar3;
              uVar3 = uVar3 * 4;
              uVar10 = iVar9 * uVar1 + 2;
              do {
                *(float *)((longlong)pvVar5 + (ulonglong)(uVar10 - 2) * 4) =
                     fVar15 * *(float *)((longlong)pvVar5 + (ulonglong)(uVar10 - 2) * 4);
                *(float *)((longlong)pvVar5 + (ulonglong)(uVar10 - 1) * 4) =
                     fVar15 * *(float *)((longlong)pvVar5 + (ulonglong)(uVar10 - 1) * 4);
                uVar4 = uVar10 + 1;
                *(float *)((longlong)pvVar5 + (ulonglong)uVar10 * 4) =
                     fVar15 * *(float *)((longlong)pvVar5 + (ulonglong)uVar10 * 4);
                uVar10 = uVar10 + 4;
                *(float *)((longlong)pvVar5 + (ulonglong)uVar4 * 4) =
                     fVar15 * *(float *)((longlong)pvVar5 + (ulonglong)uVar4 * 4);
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
              for (; uVar3 < uVar1; uVar3 = uVar3 + 1) {
LAB_14509a010:
                uVar12 = (ulonglong)(iVar9 * uVar1 + uVar3);
                *(float *)((longlong)pvVar5 + uVar12 * 4) =
                     fVar15 * *(float *)((longlong)pvVar5 + uVar12 * 4);
              }
            }
          }
          iVar6 = iVar6 + 1;
          lVar13 = lVar13 + 4;
        } while (iVar6 <= iVar14);
      }
      (&DAT_14c79bef0)[lVar11] = pvVar5;
    }
  }
  return pvVar5;
}



// FUNCTION 14509a080 FUN_14509a080 body=511 status=ok
// SIG undefined FUN_14509a080(void)

void FUN_14509a080(undefined8 *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_68;
  
  pfVar1 = param_2 + 1;
  fVar2 = (float)((ulonglong)*param_1 >> 0x20);
  local_68 = (float)*param_1;
  fVar6 = *(float *)(param_1 + 1);
  fVar4 = fVar2 * fVar2 + local_68 * local_68 + fVar6 * fVar6;
  if (0.0 < fVar4) {
    fVar4 = 1.0 / SQRT(fVar4);
    local_68 = fVar4 * local_68;
    fVar6 = fVar4 * fVar6;
    fVar5 = -(fVar4 * fVar2);
    fVar2 = local_68 * local_68 + fVar5 * fVar5;
    fVar4 = 0.0;
    if (fVar2 <= 1.1920929e-07) {
      fVar8 = 0.0;
      fVar2 = 0.0;
      fVar7 = 0.0;
      fVar9 = 0.0;
      fVar5 = 1.0;
      if (0.0 <= fVar6) {
        fVar6 = 1.0;
        fVar3 = 1.0;
      }
      else {
        fVar6 = -1.0;
        fVar3 = -1.0;
      }
    }
    else {
      fVar2 = SQRT(fVar2);
      fVar3 = 1.0 - fVar6;
      local_68 = local_68 * (1.0 / fVar2);
      fVar5 = fVar5 * (1.0 / fVar2);
      fVar8 = local_68 * fVar2;
      fVar9 = -fVar8;
      fVar2 = fVar5 * fVar2;
      fVar7 = local_68 * fVar5 * fVar3;
      fVar4 = -fVar2;
      fVar5 = fVar5 * fVar5 * fVar3 + fVar6;
      fVar3 = local_68 * local_68 * fVar3 + fVar6;
    }
    *param_2 = fVar5;
    *pfVar1 = fVar7;
    param_2[2] = fVar9;
    param_2[3] = fVar7;
    param_2[4] = fVar3;
    param_2[5] = fVar2;
    param_2[6] = fVar8;
    param_2[7] = fVar4;
    param_2[8] = fVar6;
    return;
  }
  *param_2 = 1.0;
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  param_2[3] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[4] = 1.0;
  param_2[5] = 0.0;
  param_2[8] = 1.0;
  return;
}



// FUNCTION 14509a280 FUN_14509a280 body=526 status=ok
// SIG undefined FUN_14509a280(void)

void FUN_14509a280(float *param_1,float *param_2,float *param_3)

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
  
  FUN_14509a080(param_1 + 6);
  fVar1 = param_1[3];
  fVar2 = param_1[4];
  fVar3 = param_1[5];
  fVar4 = param_1[2];
  fVar5 = param_1[1];
  fVar6 = *param_1;
  fVar9 = fVar4 * fVar2 - fVar5 * fVar3;
  fVar8 = fVar6 * fVar3 - fVar1 * fVar4;
  fVar7 = fVar1 * fVar5 - fVar6 * fVar2;
  *param_3 = fVar8 * param_2[1] + fVar9 * *param_2 + fVar7 * param_2[2];
  param_3[1] = fVar9 * param_2[3] + fVar8 * param_2[4] + fVar7 * param_2[5];
  param_3[2] = fVar9 * param_2[6] + fVar8 * param_2[7] + fVar7 * param_2[8];
  param_3[3] = fVar1 * *param_2 + fVar2 * param_2[1] + fVar3 * param_2[2];
  param_3[4] = fVar1 * param_2[3] + fVar2 * param_2[4] + fVar3 * param_2[5];
  param_3[5] = fVar1 * param_2[6] + fVar2 * param_2[7] + fVar3 * param_2[8];
  param_3[6] = fVar6 * *param_2 + fVar5 * param_2[1] + fVar4 * param_2[2];
  param_3[7] = fVar6 * param_2[3] + fVar5 * param_2[4] + fVar4 * param_2[5];
  param_3[8] = fVar5 * param_2[7] + fVar6 * param_2[6] + fVar4 * param_2[8];
  return;
}



// FUNCTION 14509a490 FUN_14509a490 body=989 status=ok
// SIG undefined FUN_14509a490(void)

void FUN_14509a490(float *param_1,int param_2,longlong param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  
  FUN_14509a080(param_3 + 0x18,&local_d8);
  pfVar1 = param_1 + (uint)(param_2 * 4);
  if (param_1 < pfVar1) {
    pfVar5 = param_4;
    pfVar7 = param_1;
    if (0x3f < (ulonglong)(uint)(param_2 * 4) * 4) {
      do {
        fVar2 = *pfVar7;
        fVar3 = pfVar7[1];
        fVar4 = pfVar7[2];
        *pfVar5 = fVar2 * local_d8 + fVar3 * local_cc + fVar4 * local_c0;
        *(float *)((longlong)param_4 + (4 - (longlong)param_1) + (longlong)pfVar7) =
             fVar2 * local_d4 + fVar3 * local_c8 + fVar4 * local_bc;
        *(float *)((longlong)param_4 + (8 - (longlong)param_1) + (longlong)pfVar7) =
             fVar2 * local_d0 + fVar3 * local_c4 + fVar4 * local_b8;
        fVar2 = pfVar7[4];
        fVar3 = pfVar7[5];
        fVar4 = pfVar7[6];
        *(float *)((longlong)param_4 + (0x10 - (longlong)param_1) + (longlong)pfVar7) =
             fVar3 * local_cc + fVar2 * local_d8 + fVar4 * local_c0;
        *(float *)((longlong)param_4 + (0x14 - (longlong)param_1) + (longlong)pfVar7) =
             fVar3 * local_c8 + fVar2 * local_d4 + fVar4 * local_bc;
        *(float *)((longlong)param_4 + (0x18 - (longlong)param_1) + (longlong)pfVar7) =
             fVar3 * local_c4 + fVar2 * local_d0 + fVar4 * local_b8;
        fVar2 = pfVar7[8];
        fVar3 = pfVar7[9];
        fVar4 = pfVar7[10];
        *(float *)((longlong)param_4 + (0x20 - (longlong)param_1) + (longlong)pfVar7) =
             fVar3 * local_cc + fVar2 * local_d8 + fVar4 * local_c0;
        *(float *)((longlong)param_4 + (0x24 - (longlong)param_1) + (longlong)pfVar7) =
             fVar3 * local_c8 + fVar2 * local_d4 + fVar4 * local_bc;
        *(float *)((longlong)param_4 + (0x28 - (longlong)param_1) + (longlong)pfVar7) =
             fVar3 * local_c4 + fVar2 * local_d0 + fVar4 * local_b8;
        fVar2 = pfVar7[0xc];
        pfVar5 = pfVar5 + 0x10;
        fVar3 = pfVar7[0xd];
        fVar4 = pfVar7[0xe];
        *(float *)((longlong)param_4 + (0x30 - (longlong)param_1) + (longlong)pfVar7) =
             fVar3 * local_cc + fVar2 * local_d8 + fVar4 * local_c0;
        *(float *)((longlong)param_4 + (0x34 - (longlong)param_1) + (longlong)pfVar7) =
             fVar3 * local_c8 + fVar2 * local_d4 + fVar4 * local_bc;
        *(float *)((longlong)param_4 + (0x38 - (longlong)param_1) + (longlong)pfVar7) =
             fVar3 * local_c4 + fVar2 * local_d0 + fVar4 * local_b8;
        pfVar7 = pfVar7 + 0x10;
      } while (pfVar7 < pfVar1 + -0xc);
      if (pfVar1 <= pfVar7) {
        return;
      }
    }
    pfVar6 = pfVar7 + 2;
    lVar8 = (longlong)pfVar7 + (-8 - (longlong)pfVar5);
    pfVar5 = pfVar5 + 2;
    do {
      fVar2 = *(float *)(lVar8 + (longlong)pfVar5);
      fVar3 = pfVar6[-1];
      fVar4 = *pfVar6;
      pfVar6 = pfVar6 + 4;
      pfVar5[-2] = fVar3 * local_cc + fVar2 * local_d8 + fVar4 * local_c0;
      pfVar5[-1] = fVar3 * local_c8 + fVar2 * local_d4 + fVar4 * local_bc;
      *pfVar5 = fVar3 * local_c4 + fVar2 * local_d0 + fVar4 * local_b8;
      pfVar5 = pfVar5 + 4;
    } while ((float *)(lVar8 + (longlong)pfVar5) < pfVar1);
  }
  return;
}



// FUNCTION 14509a870 FUN_14509a870 body=2150 status=ok
// SIG undefined FUN_14509a870(void)

void FUN_14509a870(float *param_1,uint param_2,float param_3,float *param_4,float *param_5,
                  float *param_6,longlong param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  longlong lVar10;
  float *pfVar11;
  uint uVar12;
  ulonglong uVar13;
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
  
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[2];
  fVar4 = param_4[3];
  fVar21 = 0.0001;
  if ((0.0001 <= param_3) && (fVar21 = param_3, 0.9999 <= param_3)) {
    fVar21 = 0.9999;
  }
  fVar21 = fVar21 * 1.5707964;
  lVar10 = 0;
  uVar12 = 0;
  fVar14 = fVar21 + 1.5707964;
  fVar14 = fVar14 * 1.2732395 - ABS(fVar14) * fVar14 * 0.4052847;
  fVar21 = fVar21 * 1.2732395 - ABS(fVar21) * fVar21 * 0.4052847;
  fVar21 = ((ABS(fVar14) * fVar14 - fVar14) * 0.225 + fVar14) /
           ((ABS(fVar21) * fVar21 - fVar21) * 0.225 + fVar21);
  if (param_2 < 2) {
    fVar14 = 1.0;
    if (param_2 == 0) {
      return;
    }
  }
  else {
    fVar14 = (float)param_2 - 1.0;
    if (3 < param_2) {
      pfVar11 = (float *)(param_7 + 8);
      uVar9 = (param_2 - 4 >> 2) + 1;
      uVar13 = (ulonglong)uVar9;
      uVar12 = uVar9 * 4;
      lVar10 = (ulonglong)uVar9 * 4;
      do {
        fVar24 = param_1[1];
        fVar5 = *param_1;
        fVar6 = param_1[2];
        fVar18 = fVar24 * fVar4 + fVar5 * fVar1 + fVar6 * param_4[6];
        fVar20 = fVar24 * param_4[4] + fVar5 * fVar2 + fVar6 * param_4[7];
        fVar24 = fVar24 * param_4[5] + fVar5 * fVar3 + fVar6 * param_4[8] + fVar21;
        fVar15 = SQRT(fVar20 * fVar20 + fVar18 * fVar18 + fVar24 * fVar24);
        fVar22 = 1.0 / fVar15;
        fVar18 = fVar22 * fVar18;
        fVar20 = fVar22 * fVar20;
        fVar22 = fVar22 * fVar24;
        fVar24 = param_1[5];
        fVar5 = param_5[4];
        fVar6 = param_5[6];
        fVar7 = param_5[5];
        fVar17 = param_5[3];
        pfVar11[-2] = 1.0 / (fVar15 * fVar14 + 1.0);
        fVar15 = param_5[1];
        fVar16 = param_5[2];
        fVar8 = param_5[7];
        fVar19 = param_5[8];
        *param_6 = fVar20 * fVar17 + fVar18 * *param_5 + fVar22 * fVar6;
        fVar6 = param_1[4];
        param_6[3] = 0.0;
        param_6[1] = fVar20 * fVar5 + fVar18 * fVar15 + fVar22 * fVar8;
        fVar5 = param_1[6];
        param_6[2] = fVar20 * fVar7 + fVar18 * fVar16 + fVar22 * fVar19;
        fVar20 = fVar24 * fVar4 + fVar6 * fVar1 + fVar5 * param_4[6];
        fVar22 = fVar24 * param_4[4] + fVar6 * fVar2 + fVar5 * param_4[7];
        fVar24 = fVar24 * param_4[5] + fVar6 * fVar3 + fVar5 * param_4[8] + fVar21;
        fVar16 = SQRT(fVar22 * fVar22 + fVar20 * fVar20 + fVar24 * fVar24);
        fVar23 = 1.0 / fVar16;
        fVar20 = fVar23 * fVar20;
        fVar22 = fVar23 * fVar22;
        fVar23 = fVar23 * fVar24;
        fVar24 = param_1[9];
        fVar5 = param_5[4];
        fVar6 = param_4[4];
        fVar7 = param_5[6];
        fVar17 = param_5[5];
        fVar15 = param_5[3];
        pfVar11[-1] = 1.0 / (fVar16 * fVar14 + 1.0);
        fVar16 = param_5[1];
        fVar8 = param_5[2];
        fVar19 = param_5[7];
        fVar18 = param_5[8];
        param_6[4] = fVar22 * fVar15 + fVar20 * *param_5 + fVar23 * fVar7;
        fVar7 = param_1[8];
        param_6[7] = 0.0;
        param_6[5] = fVar22 * fVar5 + fVar20 * fVar16 + fVar23 * fVar19;
        fVar5 = param_1[10];
        param_6[6] = fVar22 * fVar17 + fVar20 * fVar8 + fVar23 * fVar18;
        fVar20 = fVar24 * fVar4 + fVar7 * fVar1 + fVar5 * param_4[6];
        fVar22 = fVar24 * fVar6 + fVar7 * fVar2 + fVar5 * param_4[7];
        fVar24 = fVar24 * param_4[5] + fVar7 * fVar3 + fVar5 * param_4[8] + fVar21;
        fVar16 = SQRT(fVar22 * fVar22 + fVar20 * fVar20 + fVar24 * fVar24);
        fVar23 = 1.0 / fVar16;
        fVar20 = fVar23 * fVar20;
        fVar22 = fVar23 * fVar22;
        fVar23 = fVar23 * fVar24;
        fVar24 = param_1[0xd];
        fVar5 = param_5[4];
        fVar6 = param_4[4];
        fVar7 = param_5[6];
        fVar17 = param_5[5];
        fVar15 = param_5[3];
        *pfVar11 = 1.0 / (fVar16 * fVar14 + 1.0);
        fVar16 = param_5[1];
        fVar8 = param_5[2];
        fVar19 = param_5[7];
        fVar18 = param_5[8];
        param_6[8] = fVar22 * fVar15 + fVar20 * *param_5 + fVar23 * fVar7;
        fVar7 = param_1[0xc];
        param_6[0xb] = 0.0;
        param_6[9] = fVar22 * fVar5 + fVar20 * fVar16 + fVar23 * fVar19;
        fVar5 = param_1[0xe];
        param_1 = param_1 + 0x10;
        param_6[10] = fVar22 * fVar17 + fVar20 * fVar8 + fVar23 * fVar18;
        fVar19 = fVar24 * fVar4 + fVar7 * fVar1 + fVar5 * param_4[6];
        fVar18 = fVar24 * fVar6 + fVar7 * fVar2 + fVar5 * param_4[7];
        fVar24 = fVar24 * param_4[5] + fVar7 * fVar3 + fVar5 * param_4[8] + fVar21;
        fVar17 = SQRT(fVar18 * fVar18 + fVar19 * fVar19 + fVar24 * fVar24);
        fVar20 = 1.0 / fVar17;
        fVar19 = fVar20 * fVar19;
        fVar18 = fVar20 * fVar18;
        fVar20 = fVar20 * fVar24;
        fVar24 = param_5[4];
        fVar5 = param_5[6];
        fVar6 = param_5[3];
        fVar7 = param_5[5];
        pfVar11[1] = 1.0 / (fVar17 * fVar14 + 1.0);
        pfVar11 = pfVar11 + 4;
        fVar17 = param_5[1];
        fVar15 = param_5[2];
        fVar16 = param_5[7];
        fVar8 = param_5[8];
        param_6[0xc] = fVar18 * fVar6 + fVar19 * *param_5 + fVar20 * fVar5;
        param_6[0xf] = 0.0;
        param_6[0xd] = fVar18 * fVar24 + fVar19 * fVar17 + fVar20 * fVar16;
        param_6[0xe] = fVar18 * fVar7 + fVar19 * fVar15 + fVar20 * fVar8;
        param_6 = param_6 + 0x10;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      if (param_2 <= uVar12) {
        return;
      }
    }
  }
  pfVar11 = (float *)(param_7 + lVar10 * 4);
  uVar13 = (ulonglong)(param_2 - uVar12);
  do {
    fVar24 = *param_1;
    fVar5 = param_1[1];
    fVar6 = param_1[2];
    param_1 = param_1 + 4;
    fVar19 = fVar5 * fVar4 + fVar24 * fVar1 + fVar6 * param_4[6];
    fVar18 = fVar5 * param_4[4] + fVar24 * fVar2 + fVar6 * param_4[7];
    fVar24 = fVar5 * param_4[5] + fVar24 * fVar3 + fVar6 * param_4[8] + fVar21;
    fVar17 = SQRT(fVar18 * fVar18 + fVar19 * fVar19 + fVar24 * fVar24);
    fVar20 = 1.0 / fVar17;
    fVar19 = fVar20 * fVar19;
    fVar18 = fVar20 * fVar18;
    fVar20 = fVar20 * fVar24;
    fVar24 = param_5[4];
    fVar5 = param_5[6];
    fVar6 = param_5[3];
    fVar7 = param_5[5];
    *pfVar11 = 1.0 / (fVar17 * fVar14 + 1.0);
    pfVar11 = pfVar11 + 1;
    fVar17 = param_5[1];
    fVar15 = param_5[2];
    fVar16 = param_5[7];
    fVar8 = param_5[8];
    *param_6 = fVar18 * fVar6 + fVar19 * *param_5 + fVar20 * fVar5;
    param_6[3] = 0.0;
    param_6[1] = fVar18 * fVar24 + fVar19 * fVar17 + fVar20 * fVar16;
    param_6[2] = fVar18 * fVar7 + fVar19 * fVar15 + fVar20 * fVar8;
    param_6 = param_6 + 4;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  return;
}



// FUNCTION 14509b0e0 FUN_14509b0e0 body=1042 status=ok
// SIG undefined FUN_14509b0e0(void)

void FUN_14509b0e0(longlong param_1,uint param_2,float param_3,float *param_4,float *param_5,
                  longlong param_6,longlong param_7)

{
  float *pfVar1;
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
  undefined1 auVar20 [16];
  float fVar21;
  uint uVar22;
  ulonglong uVar23;
  float *pfVar24;
  float *pfVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
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
  
  fVar2 = param_4[7];
  fVar3 = param_4[8];
  fVar4 = *param_4;
  fVar5 = param_4[1];
  fVar6 = param_4[2];
  fVar7 = param_4[3];
  fVar8 = param_4[4];
  fVar9 = param_4[5];
  fVar10 = param_4[6];
  fVar11 = *param_5;
  fVar12 = param_5[1];
  fVar13 = param_5[2];
  fVar14 = param_5[3];
  fVar15 = param_5[4];
  fVar16 = param_5[5];
  fVar17 = param_5[6];
  fVar18 = param_5[7];
  fVar19 = param_5[8];
  fVar44 = 0.0001;
  if ((0.0001 <= param_3) && (fVar44 = param_3, 0.9999 <= param_3)) {
    fVar44 = 0.9999;
  }
  fVar44 = fVar44 * 1.5707964;
  uVar23 = 0;
  fVar28 = fVar44 + 1.5707964;
  fVar28 = fVar28 * 1.2732395 - ABS(fVar28) * fVar28 * 0.4052847;
  fVar44 = fVar44 * 1.2732395 - ABS(fVar44) * fVar44 * 0.4052847;
  fVar44 = ((ABS(fVar28) * fVar28 - fVar28) * 0.225 + fVar28) /
           ((ABS(fVar44) * fVar44 - fVar44) * 0.225 + fVar44);
  if (param_2 < 2) {
    fVar28 = 1.0;
    if (param_2 == 0) {
      return;
    }
  }
  else {
    fVar28 = (float)param_2 - 1.0;
  }
  pfVar24 = (float *)(param_1 + 0x20);
  pfVar25 = (float *)(param_6 + 0x20);
  do {
    fVar29 = pfVar24[-4];
    fVar30 = pfVar24[-3];
    fVar31 = pfVar24[-2];
    fVar32 = pfVar24[4];
    fVar48 = pfVar24[5];
    fVar41 = pfVar24[6];
    fVar33 = pfVar24[-8];
    fVar45 = pfVar24[-7];
    fVar46 = pfVar24[-6];
    fVar35 = *pfVar24;
    fVar47 = pfVar24[1];
    fVar21 = pfVar24[2];
    auVar37._0_4_ = fVar33 * fVar6;
    auVar37._4_4_ = fVar29 * fVar6;
    auVar37._8_4_ = fVar35 * fVar6;
    auVar37._12_4_ = fVar32 * fVar6;
    fVar39 = fVar45 * fVar7 + fVar33 * fVar4 + fVar46 * fVar10;
    fVar40 = fVar30 * fVar7 + fVar29 * fVar4 + fVar31 * fVar10;
    fVar42 = fVar47 * fVar7 + fVar35 * fVar4 + fVar21 * fVar10;
    fVar43 = fVar48 * fVar7 + fVar32 * fVar4 + fVar41 * fVar10;
    fVar33 = fVar45 * fVar8 + fVar33 * fVar5 + fVar46 * fVar2;
    fVar34 = fVar30 * fVar8 + fVar29 * fVar5 + fVar31 * fVar2;
    fVar35 = fVar47 * fVar8 + fVar35 * fVar5 + fVar21 * fVar2;
    fVar36 = fVar48 * fVar8 + fVar32 * fVar5 + fVar41 * fVar2;
    auVar26._0_4_ = fVar39 * fVar39;
    auVar26._4_4_ = fVar40 * fVar40;
    auVar26._8_4_ = fVar42 * fVar42;
    auVar26._12_4_ = fVar43 * fVar43;
    fVar45 = fVar45 * fVar9 + auVar37._0_4_ + fVar46 * fVar3 + fVar44;
    fVar46 = fVar30 * fVar9 + auVar37._4_4_ + fVar31 * fVar3 + fVar44;
    fVar47 = fVar47 * fVar9 + auVar37._8_4_ + fVar21 * fVar3 + fVar44;
    fVar48 = fVar48 * fVar9 + auVar37._12_4_ + fVar41 * fVar3 + fVar44;
    fVar29 = fVar33 * fVar33 + auVar26._0_4_ + fVar45 * fVar45;
    fVar30 = fVar34 * fVar34 + auVar26._4_4_ + fVar46 * fVar46;
    fVar31 = fVar35 * fVar35 + auVar26._8_4_ + fVar47 * fVar47;
    fVar32 = fVar36 * fVar36 + auVar26._12_4_ + fVar48 * fVar48;
    auVar27._4_4_ = fVar30;
    auVar27._0_4_ = fVar29;
    auVar27._8_4_ = fVar31;
    auVar27._12_4_ = fVar32;
    auVar38 = rsqrtps(auVar37,auVar27);
    auVar20._4_4_ = fVar30;
    auVar20._0_4_ = fVar29;
    auVar20._8_4_ = fVar31;
    auVar20._12_4_ = fVar32;
    auVar27 = sqrtps(auVar26,auVar20);
    fVar29 = auVar38._0_4_;
    fVar30 = auVar38._4_4_;
    fVar31 = auVar38._8_4_;
    fVar32 = auVar38._12_4_;
    fVar39 = fVar29 * fVar39;
    fVar40 = fVar30 * fVar40;
    fVar42 = fVar31 * fVar42;
    fVar43 = fVar32 * fVar43;
    fVar33 = fVar29 * fVar33;
    fVar34 = fVar30 * fVar34;
    fVar35 = fVar31 * fVar35;
    fVar36 = fVar32 * fVar36;
    fVar29 = fVar29 * fVar45;
    fVar30 = fVar30 * fVar46;
    fVar31 = fVar31 * fVar47;
    fVar32 = fVar32 * fVar48;
    auVar38._0_4_ = auVar27._0_4_ * fVar28 + 1.0;
    auVar38._4_4_ = auVar27._4_4_ * fVar28 + 1.0;
    auVar38._8_4_ = auVar27._8_4_ * fVar28 + 1.0;
    auVar38._12_4_ = auVar27._12_4_ * fVar28 + 1.0;
    auVar27 = rcpps(auVar38,auVar38);
    *(undefined1 (*) [16])(param_7 + uVar23 * 4) = auVar27;
    fVar48 = fVar33 * fVar16 + fVar39 * fVar13 + fVar29 * fVar19;
    fVar41 = fVar34 * fVar16 + fVar40 * fVar13 + fVar30 * fVar19;
    fVar45 = fVar35 * fVar16 + fVar42 * fVar13 + fVar31 * fVar19;
    fVar46 = fVar36 * fVar16 + fVar43 * fVar13 + fVar32 * fVar19;
    uVar22 = (int)uVar23 + 4;
    uVar23 = (ulonglong)uVar22;
    pfVar1 = (float *)((longlong)pfVar24 + (param_6 - param_1) + -0x20);
    *pfVar1 = fVar33 * fVar14 + fVar39 * fVar11 + fVar29 * fVar17;
    pfVar1[1] = fVar33 * fVar15 + fVar39 * fVar12 + fVar29 * fVar18;
    pfVar1[2] = fVar48;
    pfVar1[3] = fVar48;
    pfVar24 = pfVar24 + 0x10;
    pfVar25[-4] = fVar34 * fVar14 + fVar40 * fVar11 + fVar30 * fVar17;
    pfVar25[-3] = fVar34 * fVar15 + fVar40 * fVar12 + fVar30 * fVar18;
    pfVar25[-2] = fVar41;
    pfVar25[-1] = fVar41;
    *pfVar25 = fVar35 * fVar14 + fVar42 * fVar11 + fVar31 * fVar17;
    pfVar25[1] = fVar35 * fVar15 + fVar42 * fVar12 + fVar31 * fVar18;
    pfVar25[2] = fVar45;
    pfVar25[3] = fVar45;
    pfVar25[4] = fVar36 * fVar14 + fVar43 * fVar11 + fVar32 * fVar17;
    pfVar25[5] = fVar36 * fVar15 + fVar43 * fVar12 + fVar32 * fVar18;
    pfVar25[6] = fVar46;
    pfVar25[7] = fVar46;
    pfVar25 = pfVar25 + 0x10;
  } while (uVar22 < param_2);
  return;
}



// FUNCTION 14509b500 FUN_14509b500 body=132 status=ok
// SIG undefined FUN_14509b500(void)

void FUN_14509b500(undefined8 param_1,undefined4 param_2,undefined8 param_3,float param_4,
                  undefined8 param_5)

{
  undefined1 local_68 [40];
  undefined1 local_40 [56];
  
  FUN_14509a280(param_3,local_68,local_40);
  if (0.5 < param_4) {
    FUN_14509b930(param_1,param_2,param_4,local_40,local_68,param_5);
  }
  else {
    FUN_14509b590();
  }
  return;
}



// FUNCTION 14509b590 FUN_14509b590 body=914 status=ok
// SIG undefined FUN_14509b590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14509b590(float *param_1,int param_2,float param_3,float *param_4,float *param_5,
                  longlong param_6)

{
  float *pfVar1;
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
  float *pfVar20;
  float *pfVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar29;
  float fVar30;
  undefined1 auVar28 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar39;
  float fVar40;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar41;
  
  param_3 = param_3 * 3.1415927;
  fVar2 = param_4[8];
  fVar3 = *param_5;
  fVar4 = param_5[1];
  fVar5 = param_5[2];
  fVar6 = param_4[7];
  fVar7 = *param_4;
  fVar8 = param_4[1];
  fVar9 = param_4[2];
  fVar10 = param_4[3];
  fVar11 = param_4[4];
  fVar12 = param_4[5];
  fVar13 = param_4[6];
  fVar14 = param_5[3];
  fVar15 = param_5[4];
  fVar16 = param_5[5];
  fVar17 = param_5[6];
  fVar18 = param_5[7];
  fVar19 = param_5[8];
  fVar22 = param_3 * 1.2732395 - ABS(param_3) * param_3 * 0.4052847;
  fVar22 = 1.0 / ((ABS(fVar22) * fVar22 - fVar22) * 0.225 + fVar22 + 0.0001);
  if (param_1 < param_1 + (uint)(param_2 * 4)) {
    pfVar20 = (float *)(param_6 + 0x20);
    pfVar21 = param_1 + 8;
    do {
      fVar27 = pfVar21[-4];
      fVar29 = pfVar21[-3];
      fVar24 = pfVar21[-2];
      fVar30 = pfVar21[4];
      fVar31 = pfVar21[5];
      fVar26 = pfVar21[6];
      fVar36 = pfVar21[-8];
      fVar39 = pfVar21[-7];
      fVar23 = pfVar21[-6];
      fVar40 = *pfVar21;
      fVar41 = pfVar21[1];
      fVar25 = pfVar21[2];
      fVar32 = fVar39 * fVar10 + fVar36 * fVar7 + fVar23 * fVar13;
      fVar33 = fVar29 * fVar10 + fVar27 * fVar7 + fVar24 * fVar13;
      fVar34 = fVar41 * fVar10 + fVar40 * fVar7 + fVar25 * fVar13;
      fVar35 = fVar31 * fVar10 + fVar30 * fVar7 + fVar26 * fVar13;
      auVar28._0_4_ = fVar23 * fVar2;
      auVar28._4_4_ = fVar24 * fVar2;
      auVar28._8_4_ = fVar25 * fVar2;
      auVar28._12_4_ = fVar26 * fVar2;
      fVar23 = fVar39 * fVar11 + fVar36 * fVar8 + fVar23 * fVar6;
      fVar24 = fVar29 * fVar11 + fVar27 * fVar8 + fVar24 * fVar6;
      fVar25 = fVar41 * fVar11 + fVar40 * fVar8 + fVar25 * fVar6;
      fVar26 = fVar31 * fVar11 + fVar30 * fVar8 + fVar26 * fVar6;
      auVar37._0_4_ = fVar39 * fVar12 + fVar36 * fVar9 + auVar28._0_4_;
      auVar37._4_4_ = fVar29 * fVar12 + fVar27 * fVar9 + auVar28._4_4_;
      auVar37._8_4_ = fVar41 * fVar12 + fVar40 * fVar9 + auVar28._8_4_;
      auVar37._12_4_ = fVar31 * fVar12 + fVar30 * fVar9 + auVar28._12_4_;
      auVar38 = maxps(auVar37,_DAT_149c263b0);
      fVar36 = auVar38._0_4_ + fVar22;
      fVar39 = auVar38._4_4_ + fVar22;
      fVar40 = auVar38._8_4_ + fVar22;
      fVar41 = auVar38._12_4_ + fVar22;
      auVar38._4_4_ = fVar24 * fVar24 + fVar33 * fVar33 + fVar39 * fVar39;
      auVar38._0_4_ = fVar23 * fVar23 + fVar32 * fVar32 + fVar36 * fVar36;
      auVar38._8_4_ = fVar25 * fVar25 + fVar34 * fVar34 + fVar40 * fVar40;
      auVar38._12_4_ = fVar26 * fVar26 + fVar35 * fVar35 + fVar41 * fVar41;
      auVar38 = rsqrtps(auVar28,auVar38);
      fVar27 = auVar38._0_4_;
      fVar29 = auVar38._4_4_;
      fVar30 = auVar38._8_4_;
      fVar31 = auVar38._12_4_;
      fVar23 = fVar27 * fVar23;
      fVar24 = fVar29 * fVar24;
      fVar25 = fVar30 * fVar25;
      fVar26 = fVar31 * fVar26;
      fVar32 = fVar27 * fVar32;
      fVar33 = fVar29 * fVar33;
      fVar34 = fVar30 * fVar34;
      fVar35 = fVar31 * fVar35;
      fVar27 = fVar27 * fVar36;
      fVar29 = fVar29 * fVar39;
      fVar30 = fVar30 * fVar40;
      fVar31 = fVar31 * fVar41;
      fVar36 = fVar23 * fVar16 + fVar32 * fVar5 + fVar27 * fVar19;
      fVar39 = fVar24 * fVar16 + fVar33 * fVar5 + fVar29 * fVar19;
      fVar40 = fVar25 * fVar16 + fVar34 * fVar5 + fVar30 * fVar19;
      fVar41 = fVar26 * fVar16 + fVar35 * fVar5 + fVar31 * fVar19;
      pfVar20[-8] = fVar23 * fVar14 + fVar32 * fVar3 + fVar27 * fVar17;
      pfVar20[-7] = fVar23 * fVar15 + fVar32 * fVar4 + fVar27 * fVar18;
      pfVar20[-6] = fVar36;
      pfVar20[-5] = fVar36;
      pfVar1 = pfVar21 + 8;
      pfVar20[-4] = fVar24 * fVar14 + fVar33 * fVar3 + fVar29 * fVar17;
      pfVar20[-3] = fVar24 * fVar15 + fVar33 * fVar4 + fVar29 * fVar18;
      pfVar20[-2] = fVar39;
      pfVar20[-1] = fVar39;
      *pfVar20 = fVar25 * fVar14 + fVar34 * fVar3 + fVar30 * fVar17;
      pfVar20[1] = fVar25 * fVar15 + fVar34 * fVar4 + fVar30 * fVar18;
      pfVar20[2] = fVar40;
      pfVar20[3] = fVar40;
      pfVar20[4] = fVar26 * fVar14 + fVar35 * fVar3 + fVar31 * fVar17;
      pfVar20[5] = fVar26 * fVar15 + fVar35 * fVar4 + fVar31 * fVar18;
      pfVar20[6] = fVar41;
      pfVar20[7] = fVar41;
      pfVar20 = pfVar20 + 0x10;
      pfVar21 = pfVar21 + 0x10;
    } while (pfVar1 < param_1 + (uint)(param_2 * 4));
  }
  return;
}



// FUNCTION 14509b930 FUN_14509b930 body=1016 status=ok
// SIG undefined FUN_14509b930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14509b930(float *param_1,int param_2,float param_3,float *param_4,float *param_5,
                  longlong param_6)

{
  float *pfVar1;
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
  float *pfVar20;
  float *pfVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  float fVar30;
  undefined1 auVar31 [16];
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
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  
  fVar2 = param_4[7];
  fVar3 = param_4[8];
  fVar4 = *param_5;
  fVar5 = param_5[1];
  fVar6 = param_5[2];
  fVar7 = *param_4;
  fVar8 = param_4[1];
  fVar9 = param_4[2];
  fVar10 = param_4[3];
  fVar11 = param_4[4];
  fVar12 = param_4[5];
  fVar13 = param_4[6];
  fVar14 = param_5[3];
  fVar15 = param_5[4];
  fVar16 = param_5[5];
  fVar17 = param_5[6];
  fVar18 = param_5[7];
  fVar19 = param_5[8];
  fVar30 = (1.0 - param_3) * 1.5707964;
  if (param_1 < param_1 + (uint)(param_2 * 4)) {
    pfVar20 = (float *)(param_6 + 0x20);
    pfVar21 = param_1 + 8;
    do {
      fVar32 = pfVar21[-4];
      fVar33 = pfVar21[-3];
      fVar34 = pfVar21[-2];
      fVar35 = pfVar21[4];
      fVar36 = pfVar21[5];
      fVar37 = pfVar21[6];
      fVar38 = pfVar21[-8];
      fVar39 = pfVar21[-7];
      fVar40 = pfVar21[-6];
      fVar41 = *pfVar21;
      fVar42 = pfVar21[1];
      fVar43 = pfVar21[2];
      fVar49 = fVar39 * fVar10 + fVar38 * fVar7 + fVar40 * fVar13;
      fVar50 = fVar33 * fVar10 + fVar32 * fVar7 + fVar34 * fVar13;
      fVar51 = fVar42 * fVar10 + fVar41 * fVar7 + fVar43 * fVar13;
      fVar52 = fVar36 * fVar10 + fVar35 * fVar7 + fVar37 * fVar13;
      fVar45 = fVar39 * fVar11 + fVar38 * fVar8 + fVar40 * fVar2;
      fVar46 = fVar33 * fVar11 + fVar32 * fVar8 + fVar34 * fVar2;
      fVar47 = fVar42 * fVar11 + fVar41 * fVar8 + fVar43 * fVar2;
      fVar48 = fVar36 * fVar11 + fVar35 * fVar8 + fVar37 * fVar2;
      auVar44._0_4_ = fVar39 * fVar12 + fVar38 * fVar9 + fVar40 * fVar3;
      auVar44._4_4_ = fVar33 * fVar12 + fVar32 * fVar9 + fVar34 * fVar3;
      auVar44._8_4_ = fVar42 * fVar12 + fVar41 * fVar9 + fVar43 * fVar3;
      auVar44._12_4_ = fVar36 * fVar12 + fVar35 * fVar9 + fVar37 * fVar3;
      auVar44 = maxps(auVar44,_DAT_1499319d0);
      fVar40 = fVar45 * fVar45 + fVar49 * fVar49;
      fVar41 = fVar46 * fVar46 + fVar50 * fVar50;
      fVar42 = fVar47 * fVar47 + fVar51 * fVar51;
      fVar43 = fVar48 * fVar48 + fVar52 * fVar52;
      uVar22 = -(uint)(0.0 <= auVar44._0_4_);
      uVar24 = -(uint)(0.0 <= auVar44._4_4_);
      uVar26 = -(uint)(0.0 <= auVar44._8_4_);
      uVar28 = -(uint)(0.0 <= auVar44._12_4_);
      uVar23 = -(uint)(0.0 <= fVar40 - 0.0001);
      uVar25 = -(uint)(0.0 <= fVar41 - 0.0001);
      uVar27 = -(uint)(0.0 <= fVar42 - 0.0001);
      uVar29 = -(uint)(0.0 <= fVar43 - 0.0001);
      fVar32 = (float)(~uVar23 & (~uVar22 & 0xbf800000 | uVar22 & 0x3f800000) |
                      uVar23 & (uint)auVar44._0_4_);
      fVar33 = (float)(~uVar25 & (~uVar24 & 0xbf800000 | uVar24 & 0x3f800000) |
                      uVar25 & (uint)auVar44._4_4_);
      fVar35 = (float)(~uVar27 & (~uVar26 & 0xbf800000 | uVar26 & 0x3f800000) |
                      uVar27 & (uint)auVar44._8_4_);
      fVar37 = (float)(~uVar29 & (~uVar28 & 0xbf800000 | uVar28 & 0x3f800000) |
                      uVar29 & (uint)auVar44._12_4_);
      fVar32 = ((fVar32 * fVar32 * 0.719088 + -0.35786) * fVar32 * fVar32 + 1.085865) * fVar32 *
               param_3 + fVar30;
      fVar34 = ((fVar33 * fVar33 * 0.719088 + -0.35786) * fVar33 * fVar33 + 1.085865) * fVar33 *
               param_3 + fVar30;
      fVar36 = ((fVar35 * fVar35 * 0.719088 + -0.35786) * fVar35 * fVar35 + 1.085865) * fVar35 *
               param_3 + fVar30;
      fVar38 = ((fVar37 * fVar37 * 0.719088 + -0.35786) * fVar37 * fVar37 + 1.085865) * fVar37 *
               param_3 + fVar30;
      fVar32 = ((fVar32 * fVar32 * 0.00833216 + -0.16666655) * fVar32 * fVar32 + 1.0) * fVar32;
      fVar34 = ((fVar34 * fVar34 * 0.00833216 + -0.16666655) * fVar34 * fVar34 + 1.0) * fVar34;
      fVar36 = ((fVar36 * fVar36 * 0.00833216 + -0.16666655) * fVar36 * fVar36 + 1.0) * fVar36;
      fVar38 = ((fVar38 * fVar38 * 0.00833216 + -0.16666655) * fVar38 * fVar38 + 1.0) * fVar38;
      fVar33 = -fVar32 * fVar32 + 1.0;
      fVar35 = -fVar34 * fVar34 + 1.0;
      fVar37 = -fVar36 * fVar36 + 1.0;
      fVar39 = -fVar38 * fVar38 + 1.0;
      auVar31._0_4_ = fVar33 * fVar40;
      auVar31._4_4_ = fVar35 * fVar41;
      auVar31._8_4_ = fVar37 * fVar42;
      auVar31._12_4_ = fVar39 * fVar43;
      auVar31 = maxps(auVar31,_DAT_149931fa0);
      auVar31 = rsqrtps(auVar44,auVar31);
      pfVar1 = pfVar21 + 8;
      fVar33 = auVar31._0_4_ * fVar33;
      fVar35 = auVar31._4_4_ * fVar35;
      fVar37 = auVar31._8_4_ * fVar37;
      fVar39 = auVar31._12_4_ * fVar39;
      fVar45 = fVar33 * fVar45;
      fVar46 = fVar35 * fVar46;
      fVar47 = fVar37 * fVar47;
      fVar48 = fVar39 * fVar48;
      fVar33 = fVar33 * fVar49;
      fVar35 = fVar35 * fVar50;
      fVar37 = fVar37 * fVar51;
      fVar39 = fVar39 * fVar52;
      fVar40 = fVar45 * fVar16 + fVar33 * fVar6 + fVar32 * fVar19;
      fVar41 = fVar46 * fVar16 + fVar35 * fVar6 + fVar34 * fVar19;
      fVar42 = fVar47 * fVar16 + fVar37 * fVar6 + fVar36 * fVar19;
      fVar43 = fVar48 * fVar16 + fVar39 * fVar6 + fVar38 * fVar19;
      pfVar20[-8] = fVar45 * fVar14 + fVar33 * fVar4 + fVar32 * fVar17;
      pfVar20[-7] = fVar45 * fVar15 + fVar33 * fVar5 + fVar32 * fVar18;
      pfVar20[-6] = fVar40;
      pfVar20[-5] = fVar40;
      pfVar20[-4] = fVar46 * fVar14 + fVar35 * fVar4 + fVar34 * fVar17;
      pfVar20[-3] = fVar46 * fVar15 + fVar35 * fVar5 + fVar34 * fVar18;
      pfVar20[-2] = fVar41;
      pfVar20[-1] = fVar41;
      *pfVar20 = fVar47 * fVar14 + fVar37 * fVar4 + fVar36 * fVar17;
      pfVar20[1] = fVar47 * fVar15 + fVar37 * fVar5 + fVar36 * fVar18;
      pfVar20[2] = fVar42;
      pfVar20[3] = fVar42;
      pfVar20[4] = fVar48 * fVar14 + fVar39 * fVar4 + fVar38 * fVar17;
      pfVar20[5] = fVar48 * fVar15 + fVar39 * fVar5 + fVar38 * fVar18;
      pfVar20[6] = fVar43;
      pfVar20[7] = fVar43;
      pfVar20 = pfVar20 + 0x10;
      pfVar21 = pfVar21 + 0x10;
    } while (pfVar1 < param_1 + (uint)(param_2 * 4));
  }
  return;
}



// FUNCTION 14509bd30 FUN_14509bd30 body=392 status=ok
// SIG undefined FUN_14509bd30(void)

void FUN_14509bd30(uint param_1,int param_2,longlong param_3,float *param_4)

{
  float *pfVar1;
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
  float *pfVar16;
  ulonglong uVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  if (param_1 != 0) {
    uVar17 = (ulonglong)param_1;
    pfVar18 = (float *)(&DAT_149c25784 + (ulonglong)(param_1 - 1) * 0x54);
    do {
      fVar2 = pfVar18[-1];
      fVar3 = pfVar18[1];
      fVar4 = *pfVar18;
      fVar23 = -fVar2;
      pfVar16 = (float *)(param_3 + 0x20);
      do {
        fVar5 = pfVar16[-4];
        fVar6 = pfVar16[-3];
        fVar7 = pfVar16[-2];
        fVar8 = pfVar16[4];
        fVar9 = pfVar16[5];
        fVar10 = pfVar16[6];
        fVar11 = pfVar16[-7];
        fVar12 = pfVar16[-6];
        fVar13 = *pfVar16;
        fVar14 = pfVar16[1];
        fVar15 = pfVar16[2];
        pfVar1 = pfVar16 + 8;
        fVar19 = fVar12 * fVar3 + pfVar16[-8] * fVar23;
        fVar20 = fVar7 * fVar3 + fVar5 * fVar23;
        fVar21 = fVar15 * fVar3 + fVar13 * fVar23;
        fVar22 = fVar10 * fVar3 + fVar8 * fVar23;
        *param_4 = fVar12 * fVar2 + pfVar16[-8] * fVar3;
        param_4[1] = fVar11 + fVar12 * fVar4;
        param_4[2] = fVar19;
        param_4[3] = fVar19;
        param_4[4] = fVar7 * fVar2 + fVar5 * fVar3;
        param_4[5] = fVar6 + fVar7 * fVar4;
        param_4[6] = fVar20;
        param_4[7] = fVar20;
        param_4[8] = fVar15 * fVar2 + fVar13 * fVar3;
        param_4[9] = fVar14 + fVar15 * fVar4;
        param_4[10] = fVar21;
        param_4[0xb] = fVar21;
        param_4[0xc] = fVar10 * fVar2 + fVar8 * fVar3;
        param_4[0xd] = fVar9 + fVar10 * fVar4;
        param_4[0xe] = fVar22;
        param_4[0xf] = fVar22;
        param_4 = param_4 + 0x10;
        pfVar16 = pfVar16 + 0x10;
      } while (pfVar1 < (float *)(param_3 + (ulonglong)(uint)(param_2 * 4) * 4));
      pfVar18 = pfVar18 + 3;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  return;
}



// FUNCTION 14509bec0 FUN_14509bec0 body=159 status=ok
// SIG undefined FUN_14509bec0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14509bec0(uint param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined8 auStack_30 [5];
  
  uVar4 = (ulonglong)param_1 * 0x10 + 0xf;
  if (uVar4 <= (ulonglong)param_1 * 0x10) {
    uVar4 = 0xffffffffffffff0;
  }
  auStack_30[0] = 0x14509bf04;
  lVar2 = -(uVar4 & 0xfffffffffffffff0);
  puVar3 = (undefined4 *)(&stack0x00000000 + lVar2);
  do {
    *(undefined8 *)(puVar3 + -2) = 0;
    *puVar3 = 0x3f800000;
    puVar3[1] = 0x3f800000;
    puVar1 = puVar3 + 2;
    puVar3 = puVar3 + 4;
  } while (puVar1 < &stack0xfffffffffffffff8 + lVar2 + (ulonglong)(param_1 * 4) * 4);
  *(undefined8 *)((longlong)auStack_30 + lVar2) = 0x14509bf4e;
  FUN_14509a490(&stack0xfffffffffffffff8 + lVar2,param_1,param_2,param_3);
  return;
}



// FUNCTION 14509bf60 FUN_14509bf60 body=348 status=ok
// SIG undefined FUN_14509bf60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14509bf60(longlong param_1,int param_2,longlong param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  undefined1 auVar14 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar22;
  float fVar23;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar24;
  
  auVar10 = _DAT_149c263b0;
  param_4 = param_4 * 3.1415927;
  pfVar11 = (float *)(param_3 + 0x20);
  fVar18 = param_4 * 1.2732395 - ABS(param_4) * param_4 * 0.4052847;
  fVar18 = 1.0 / ((ABS(fVar18) * fVar18 - fVar18) * 0.225 + fVar18 + 0.0001);
  pfVar12 = (float *)(param_1 + 0x20);
  do {
    fVar2 = pfVar12[-4];
    fVar3 = pfVar12[-3];
    fVar4 = pfVar12[4];
    fVar5 = pfVar12[5];
    fVar6 = pfVar12[-8];
    fVar7 = pfVar12[-7];
    fVar8 = *pfVar12;
    fVar9 = pfVar12[1];
    pfVar1 = pfVar12 + 8;
    auVar14._0_4_ = fVar7 * fVar7;
    auVar14._4_4_ = fVar3 * fVar3;
    auVar14._8_4_ = fVar9 * fVar9;
    auVar14._12_4_ = fVar5 * fVar5;
    auVar20._4_4_ = pfVar12[-2];
    auVar20._0_4_ = pfVar12[-6];
    auVar20._8_4_ = pfVar12[2];
    auVar20._12_4_ = pfVar12[6];
    auVar21 = maxps(auVar20,auVar10);
    fVar19 = auVar21._0_4_ + fVar18;
    fVar22 = auVar21._4_4_ + fVar18;
    fVar23 = auVar21._8_4_ + fVar18;
    fVar24 = auVar21._12_4_ + fVar18;
    auVar21._4_4_ = fVar2 * fVar2 + auVar14._4_4_ + fVar22 * fVar22;
    auVar21._0_4_ = fVar6 * fVar6 + auVar14._0_4_ + fVar19 * fVar19;
    auVar21._8_4_ = fVar8 * fVar8 + auVar14._8_4_ + fVar23 * fVar23;
    auVar21._12_4_ = fVar4 * fVar4 + auVar14._12_4_ + fVar24 * fVar24;
    auVar21 = rsqrtps(auVar14,auVar21);
    fVar13 = auVar21._0_4_;
    fVar15 = auVar21._4_4_;
    fVar16 = auVar21._8_4_;
    fVar17 = auVar21._12_4_;
    pfVar11[-8] = fVar6 * fVar13;
    pfVar11[-7] = fVar7 * fVar13;
    pfVar11[-6] = fVar19 * fVar13;
    pfVar11[-5] = fVar19 * fVar13;
    pfVar11[-4] = fVar2 * fVar15;
    pfVar11[-3] = fVar3 * fVar15;
    pfVar11[-2] = fVar22 * fVar15;
    pfVar11[-1] = fVar22 * fVar15;
    *pfVar11 = fVar8 * fVar16;
    pfVar11[1] = fVar9 * fVar16;
    pfVar11[2] = fVar23 * fVar16;
    pfVar11[3] = fVar23 * fVar16;
    pfVar11[4] = fVar4 * fVar17;
    pfVar11[5] = fVar5 * fVar17;
    pfVar11[6] = fVar24 * fVar17;
    pfVar11[7] = fVar24 * fVar17;
    pfVar11 = pfVar11 + 0x10;
    pfVar12 = pfVar12 + 0x10;
  } while (pfVar1 < (float *)(param_1 + (ulonglong)(uint)(param_2 * 4) * 4));
  return;
}



// FUNCTION 14509c0c0 FUN_14509c0c0 body=542 status=ok
// SIG undefined FUN_14509c0c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14509c0c0(longlong param_1,int param_2,longlong param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float *pfVar20;
  float *pfVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  
  auVar19 = _DAT_149931fa0;
  auVar18 = _DAT_1499319d0;
  pfVar20 = (float *)(param_3 + 0x20);
  fVar2 = (float)DAT_149931fa0;
  fVar4 = DAT_149931fa0._4_4_;
  fVar6 = DAT_149931fa0._8_4_;
  fVar8 = DAT_149931fa0._12_4_;
  fVar45 = (1.0 - param_4) * 1.5707964;
  uVar3 = (uint)DAT_1499319d0;
  uVar5 = DAT_1499319d0._4_4_;
  uVar7 = DAT_1499319d0._8_4_;
  uVar9 = DAT_1499319d0._12_4_;
  pfVar21 = (float *)(param_1 + 0x20);
  do {
    fVar10 = pfVar21[-4];
    fVar11 = pfVar21[-3];
    fVar12 = pfVar21[4];
    fVar13 = pfVar21[5];
    fVar14 = pfVar21[-8];
    fVar15 = pfVar21[-7];
    fVar16 = *pfVar21;
    fVar17 = pfVar21[1];
    auVar39._4_4_ = pfVar21[-2];
    auVar39._0_4_ = pfVar21[-6];
    auVar39._8_4_ = pfVar21[2];
    auVar39._12_4_ = pfVar21[6];
    auVar40 = maxps(auVar39,auVar18);
    fVar41 = fVar14 * fVar14 + fVar15 * fVar15;
    fVar42 = fVar10 * fVar10 + fVar11 * fVar11;
    fVar43 = fVar16 * fVar16 + fVar17 * fVar17;
    fVar44 = fVar12 * fVar12 + fVar13 * fVar13;
    uVar22 = -(uint)(0.0 <= auVar40._0_4_);
    uVar24 = -(uint)(0.0 <= auVar40._4_4_);
    uVar26 = -(uint)(0.0 <= auVar40._8_4_);
    uVar28 = -(uint)(0.0 <= auVar40._12_4_);
    uVar23 = -(uint)(0.0 <= fVar41 - fVar2);
    uVar25 = -(uint)(0.0 <= fVar42 - fVar4);
    uVar27 = -(uint)(0.0 <= fVar43 - fVar6);
    uVar29 = -(uint)(0.0 <= fVar44 - fVar8);
    fVar31 = (float)(~uVar23 & (uVar22 & 0x3f800000 | ~uVar22 & uVar3) |
                    uVar23 & (uint)auVar40._0_4_);
    fVar32 = (float)(~uVar25 & (uVar24 & 0x3f800000 | ~uVar24 & uVar5) |
                    uVar25 & (uint)auVar40._4_4_);
    fVar33 = (float)(~uVar27 & (uVar26 & 0x3f800000 | ~uVar26 & uVar7) |
                    uVar27 & (uint)auVar40._8_4_);
    fVar34 = (float)(~uVar29 & (uVar28 & 0x3f800000 | ~uVar28 & uVar9) |
                    uVar29 & (uint)auVar40._12_4_);
    auVar30._0_4_ =
         ((fVar31 * fVar31 * 0.719088 + -0.35786) * fVar31 * fVar31 + 1.085865) * fVar31 * param_4 +
         fVar45;
    auVar30._4_4_ =
         ((fVar32 * fVar32 * 0.719088 + -0.35786) * fVar32 * fVar32 + 1.085865) * fVar32 * param_4 +
         fVar45;
    auVar30._8_4_ =
         ((fVar33 * fVar33 * 0.719088 + -0.35786) * fVar33 * fVar33 + 1.085865) * fVar33 * param_4 +
         fVar45;
    auVar30._12_4_ =
         ((fVar34 * fVar34 * 0.719088 + -0.35786) * fVar34 * fVar34 + 1.085865) * fVar34 * param_4 +
         fVar45;
    fVar35 = ((auVar30._0_4_ * auVar30._0_4_ * 0.00833216 + -0.16666655) *
              auVar30._0_4_ * auVar30._0_4_ + 1.0) * auVar30._0_4_;
    fVar36 = ((auVar30._4_4_ * auVar30._4_4_ * 0.00833216 + -0.16666655) *
              auVar30._4_4_ * auVar30._4_4_ + 1.0) * auVar30._4_4_;
    fVar37 = ((auVar30._8_4_ * auVar30._8_4_ * 0.00833216 + -0.16666655) *
              auVar30._8_4_ * auVar30._8_4_ + 1.0) * auVar30._8_4_;
    fVar38 = ((auVar30._12_4_ * auVar30._12_4_ * 0.00833216 + -0.16666655) *
              auVar30._12_4_ * auVar30._12_4_ + 1.0) * auVar30._12_4_;
    fVar31 = -fVar35 * fVar35 + 1.0;
    fVar32 = -fVar36 * fVar36 + 1.0;
    fVar33 = -fVar37 * fVar37 + 1.0;
    fVar34 = -fVar38 * fVar38 + 1.0;
    auVar40._0_4_ = fVar31 * fVar41;
    auVar40._4_4_ = fVar32 * fVar42;
    auVar40._8_4_ = fVar33 * fVar43;
    auVar40._12_4_ = fVar34 * fVar44;
    auVar40 = maxps(auVar40,auVar19);
    auVar40 = rsqrtps(auVar30,auVar40);
    fVar31 = auVar40._0_4_ * fVar31;
    fVar32 = auVar40._4_4_ * fVar32;
    fVar33 = auVar40._8_4_ * fVar33;
    fVar34 = auVar40._12_4_ * fVar34;
    pfVar20[-8] = fVar14 * fVar31;
    pfVar20[-7] = fVar15 * fVar31;
    pfVar20[-6] = fVar35;
    pfVar20[-5] = fVar35;
    pfVar20[-4] = fVar10 * fVar32;
    pfVar20[-3] = fVar11 * fVar32;
    pfVar20[-2] = fVar36;
    pfVar20[-1] = fVar36;
    *pfVar20 = fVar16 * fVar33;
    pfVar20[1] = fVar17 * fVar33;
    pfVar20[2] = fVar37;
    pfVar20[3] = fVar37;
    pfVar20[4] = fVar12 * fVar34;
    pfVar20[5] = fVar13 * fVar34;
    pfVar20[6] = fVar38;
    pfVar20[7] = fVar38;
    pfVar20 = pfVar20 + 0x10;
    pfVar1 = pfVar21 + 8;
    pfVar21 = pfVar21 + 0x10;
  } while (pfVar1 < (float *)(param_1 + (ulonglong)(uint)(param_2 * 4) * 4));
  return;
}



// FUNCTION 14509c2e0 FUN_14509c2e0 body=135 status=ok
// SIG undefined FUN_14509c2e0(void)

void FUN_14509c2e0(float param_1,float param_2,float *param_3,byte param_4)

{
  uint uVar1;
  bool bVar2;
  
  *param_3 = SQRT((1.0 - param_1) * param_2);
  param_3[1] = SQRT(param_1 * param_2);
  bVar2 = (param_4 & 4) != 0;
  if (bVar2) {
    param_3[2] = 0.0;
  }
  uVar1 = (uint)bVar2;
  param_3[uVar1 + 2] = SQRT((1.0 - param_2) * (1.0 - param_1));
  param_3[uVar1 + 3] = SQRT((1.0 - param_2) * param_1);
  return;
}



// FUNCTION 14509c370 FUN_14509c370 body=221 status=ok
// SIG undefined FUN_14509c370(void)

void FUN_14509c370(float param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  if (param_2 < 0.5) {
    param_2 = param_2 * 1.2;
    fVar1 = 1.0;
  }
  else {
    fVar1 = 0.8;
    param_2 = param_2 * 0.8;
  }
  fVar1 = fVar1 - param_2;
  fVar2 = 1.0 - fVar1;
  *param_3 = SQRT(fVar2 * (2.0 - (param_1 + param_1)) * 0.33333334);
  param_3[1] = SQRT(fVar2 * (param_1 + param_1) * 0.33333334);
  param_3[2] = SQRT(fVar2 * 0.33333334);
  param_3[3] = SQRT(fVar1 * (1.0 - param_1));
  param_3[4] = SQRT(fVar1 * param_1);
  return;
}



// FUNCTION 14509c450 FUN_14509c450 body=249 status=ok
// SIG undefined FUN_14509c450(void)

void FUN_14509c450(float param_1,float param_2,float *param_3,byte param_4)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = 1.0 - param_1;
  fVar4 = (3.0 - param_2 * 4.0) * 0.33333334;
  fVar3 = (param_2 * 4.0 - 1.0) * 0.33333334;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar5 = 1.0 - (fVar4 + fVar3);
  *param_3 = SQRT(fVar6 * fVar3);
  param_3[1] = SQRT(fVar3 * param_1);
  bVar2 = (param_4 & 4) != 0;
  if (bVar2) {
    param_3[2] = 0.0;
  }
  uVar1 = (uint)bVar2;
  param_3[uVar1 + 2] = SQRT(fVar4 * fVar6);
  param_3[uVar1 + 3] = SQRT(fVar4 * param_1);
  param_3[uVar1 + 4] = SQRT(fVar5 * fVar6);
  param_3[uVar1 + 5] = SQRT(fVar5 * param_1);
  return;
}



// FUNCTION 14509c550 FUN_14509c550 body=280 status=ok
// SIG undefined FUN_14509c550(void)

void FUN_14509c550(float param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = param_2 * 1.1428572 - 0.14285715;
  fVar2 = 1.0 - param_2 * 1.4285715;
  fVar3 = 0.6666667 - param_1 * 0.6666667;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar1 = 0.6666666 - fVar3;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar5 = 1.0 - (fVar2 + fVar4);
  *param_3 = SQRT(fVar4 * fVar3);
  param_3[1] = SQRT(fVar1 * fVar4);
  param_3[2] = SQRT(fVar4 * 0.33333334);
  param_3[3] = SQRT(fVar2 * (1.0 - param_1));
  param_3[4] = SQRT(fVar2 * param_1);
  param_3[5] = SQRT(fVar5 * (1.0 - param_1));
  param_3[6] = SQRT(fVar5 * param_1);
  return;
}



// FUNCTION 14509c670 FUN_14509c670 body=101 status=ok
// SIG undefined FUN_14509c670(void)

void FUN_14509c670(uint param_1,uint param_2,longlong param_3)

{
  void *_Dst;
  
  if ((param_1 & 0x8000) != 0) {
    _Dst = (void *)(param_3 +
                   (ulonglong)(((param_2 & 0xff) + 7 & 0xfffffff8) * ((param_1 & 0xff) - 1)) * 4);
    if ((char)param_2 != '\0') {
      memset(_Dst,0,(ulonglong)(param_2 & 0xff) << 2);
    }
    if ((param_2 & 0x8000) != 0) {
      *(undefined4 *)((longlong)_Dst + (ulonglong)((param_2 & 0xff) - 1) * 4) = 0x3f800000;
    }
  }
  return;
}



// FUNCTION 14509c6e0 FUN_14509c6e0 body=3558 status=ok
// SIG undefined FUN_14509c6e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14509c6e0(float param_1,float param_2,float param_3,uint param_4,uint param_5,
                  float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *_Dst;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 *puVar14;
  float *pfVar15;
  float *pfVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  undefined4 *puVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  undefined1 in_XMM3 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 auStack_100 [5];
  undefined8 local_d8;
  float afStack_cc [3];
  undefined8 local_c0;
  undefined4 *local_b8;
  
  fVar33 = (param_1 + 1.0) * 0.5;
  if (0.0 <= fVar33) {
    if (1.0 <= fVar33) {
      fVar33 = 1.0;
    }
  }
  else {
    fVar33 = 0.0;
  }
  fVar34 = (param_2 + 1.0) * 0.5;
  if (0.0 <= fVar34) {
    if (1.0 <= fVar34) {
      fVar34 = 1.0;
    }
  }
  else {
    fVar34 = 0.0;
  }
  uVar22 = param_4 >> 0xc;
  uVar18 = param_5 >> 0xc & 0xffff7;
  uVar19 = uVar18 << 0xc;
  afStack_cc[1] =
       (float)(param_5 - ((param_5 >> 0xc) - uVar18 >> 3) & 0xff | uVar19 | param_5 & 0xf00);
  if ((char)((char)param_4 - (char)(uVar22 - (uVar22 & 0xffff7) >> 3)) == '\x01') {
    if ((char)param_5 != '\0') {
      auStack_100[0] = 0x14509c7ef;
      memset(param_6,0,(ulonglong)(param_5 & 0xff) << 2);
    }
    if ((uVar19 & 0x63f000) == 0) {
      uVar18 = ((param_5 & 0xff) + 7 & 0xfffffff8) * (param_4 & 0xff);
      if (uVar18 != 0) {
        auStack_100[0] = 0x14509c819;
        memset(param_6,0,(ulonglong)uVar18 << 2);
      }
      auStack_100[0] = 0x14509c825;
      FUN_14509c670(param_4,param_5,param_6);
      return;
    }
    if ((uVar19 & 0x63f000) == 0x637000) {
      fVar36 = 1.0 - fVar33;
      if (0.5 < fVar33) {
        fVar32 = (fVar33 - 1.0) * param_3 + fVar33;
        fVar35 = fVar36;
      }
      else {
        fVar32 = (1.0 - param_3) * fVar33;
        fVar35 = fVar33;
      }
      fVar35 = fVar35 * (param_3 + param_3);
      fVar30 = (3.0 - fVar34 * 4.0) * 0.33333334;
      fVar34 = (fVar34 * 4.0 - 1.0) * 0.33333334;
      if (fVar30 <= 0.0) {
        fVar30 = 0.0;
      }
      if (fVar34 <= 0.0) {
        fVar34 = 0.0;
      }
      fVar29 = 1.0 - (fVar30 + fVar34);
      *param_6 = SQRT(((1.0 - fVar32) - fVar35) * fVar34);
      param_6[1] = SQRT(fVar34 * fVar32);
      param_6[2] = SQRT(fVar34 * fVar35);
      param_6[3] = SQRT(fVar30 * fVar36);
      param_6[4] = SQRT(fVar30 * fVar33);
      param_6[5] = SQRT(fVar29 * fVar36);
      param_6[6] = SQRT(fVar29 * fVar33);
      return;
    }
    if ((uVar19 & 0x63f000) == 0x633000) {
      auStack_100[0] = 0x14509c978;
      FUN_14509c450(fVar33,fVar34,param_6,0x633);
      return;
    }
    if ((uVar19 & 0x63f000) == 0x607000) {
      if (0.5 < fVar33) {
        fVar35 = (fVar33 - 1.0) * param_3 + fVar33;
        fVar36 = 1.0 - fVar33;
      }
      else {
        fVar35 = (1.0 - param_3) * fVar33;
        fVar36 = fVar33;
      }
      fVar36 = fVar36 * (param_3 + param_3);
      *param_6 = SQRT(((1.0 - fVar35) - fVar36) * fVar34);
      param_6[1] = SQRT(fVar35 * fVar34);
      param_6[2] = SQRT(fVar36 * fVar34);
      param_6[3] = SQRT((1.0 - fVar34) * (1.0 - fVar33));
      param_6[4] = SQRT((1.0 - fVar34) * fVar33);
      return;
    }
    if ((uVar19 & 0x63f000) == 0x603000) {
      auStack_100[0] = 0x14509ca59;
      FUN_14509c2e0(fVar33,fVar34,param_6,0x603);
      return;
    }
    if ((uVar19 & 0x63f000) == 0x7000) {
      if (0.5 < fVar33) {
        fVar34 = 1.0 - fVar33;
        fVar36 = (fVar33 - 1.0) * param_3 + fVar33;
      }
      else {
        fVar36 = (1.0 - param_3) * fVar33;
        fVar34 = fVar33;
      }
      fVar34 = fVar34 * (param_3 + param_3);
      param_6[1] = SQRT(fVar36);
      *param_6 = SQRT((1.0 - fVar36) - fVar34);
      param_6[2] = SQRT(fVar34);
      return;
    }
    param_6[1] = SQRT(fVar33);
    *param_6 = SQRT(1.0 - fVar33);
    return;
  }
  uVar18 = uVar22 & 0x637;
  if ((((byte)(uVar18 >> 9) ^ (byte)(uVar18 >> 4)) & 1) != 0) {
    uVar18 = uVar22 & 0x607 | 0x600;
  }
  if (uVar18 == 0) {
    uVar18 = ((param_5 & 0xff) + 7 & 0xfffffff8) * (param_4 & 0xff);
    if (uVar18 != 0) {
      auStack_100[0] = 0x14509cb59;
      memset(param_6,0,(ulonglong)uVar18 << 2);
    }
    auStack_100[0] = 0x14509cb65;
    FUN_14509c670(param_4,param_5,param_6);
    return;
  }
  uVar22 = uVar18 | (uVar19 & 0x63f000) >> 0xc;
  bVar17 = 0;
  uVar19 = uVar18;
  do {
    bVar17 = bVar17 + 1;
    uVar19 = uVar19 & uVar19 - 1;
  } while (uVar19 != 0);
  uVar7 = (uint)bVar17;
  bVar17 = 0;
  uVar19 = uVar22;
  do {
    bVar17 = bVar17 + 1;
    uVar19 = uVar19 & uVar19 - 1;
  } while (uVar19 != 0);
  uVar19 = bVar17 + 7 >> 3;
  iVar20 = uVar7 * uVar19;
  afStack_cc[2] = (float)(uVar22 << 0xc | (uint)bVar17 | 0x100);
  uVar10 = (ulonglong)(uint)(iVar20 * 0x20) + 0xf;
  if (uVar10 <= (uint)(iVar20 * 0x20)) {
    uVar10 = 0xffffffffffffff0;
  }
  auStack_100[0] = 0x14509cc01;
  lVar3 = -(uVar10 & 0xfffffffffffffff0);
  puVar11 = (undefined4 *)((longlong)afStack_cc + lVar3 + 4);
  local_c0 = puVar11;
  if (iVar20 != 0) {
    *(undefined8 *)((longlong)auStack_100 + lVar3) = 0x14509cc26;
    memset(puVar11,0,(ulonglong)(uint)(iVar20 * 8) << 2);
  }
  puVar14 = (undefined4 *)(ulonglong)(uVar19 << 5);
  local_b8 = puVar14;
  puVar11 = (undefined4 *)((ulonglong)(uVar19 << 5) + 0xf);
  if (puVar11 <= puVar14) {
    puVar11 = (undefined4 *)0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_100 + lVar3) = 0x14509cc4f;
  lVar4 = -((ulonglong)puVar11 & 0xfffffffffffffff0);
  _Dst = (float *)((longlong)afStack_cc + lVar4 + lVar3 + 4);
  if (uVar19 != 0) {
    *(undefined8 *)((longlong)auStack_100 + lVar4 + lVar3) = 0x14509cc6f;
    memset(_Dst,0,(ulonglong)(uVar19 << 3) << 2);
    puVar14 = local_b8;
  }
  puVar11 = local_c0;
  uVar26 = uVar22 >> 2 & 1;
  if (uVar18 < 0x608) {
    if (uVar18 == 0x607) {
      uVar10 = (ulonglong)(uVar19 * 0x18);
      lVar12 = (uVar26 + 2) + uVar10;
      *local_c0 = 0x3f800000;
      puVar11[(ulonglong)(uVar19 * 8) + 1] = 0x3f800000;
      puVar11[(ulonglong)(uVar19 << 4) + 2] = 0x3f800000;
      puVar11[lVar12] = 0x3f800000;
      puVar11[(longlong)puVar14 + (ulonglong)(uVar26 + 3)] = 0x3f800000;
      if ((uVar22 - 0x633 & 0xfffffffb) == 0) {
        puVar11[(uVar26 + 4) + uVar10] = 0x3f800000;
        puVar11[(longlong)puVar14 + (ulonglong)(uVar26 + 5)] = 0x3f800000;
        *(undefined8 *)((longlong)auStack_100 + lVar4 + lVar3) = 0x14509d029;
        FUN_14509c550(fVar33,fVar34,_Dst,uVar22);
      }
      else {
        *(undefined8 *)((longlong)auStack_100 + lVar4 + lVar3) = 0x14509d000;
        FUN_14509c370(lVar12,uVar10,_Dst,uVar22);
      }
      goto LAB_14509d14e;
    }
    if (uVar18 == 3) {
      *local_c0 = 0x3f800000;
      puVar11[(ulonglong)(uVar19 * 8) + 1] = 0x3f800000;
      if ((uVar22 - 0x633 & 0xfffffffb) != 0) {
        if ((uVar22 - 0x603 & 0xfffffffb) == 0) {
          puVar11[uVar26 + 2] = 0x3f800000;
          puVar11[(ulonglong)(uVar19 * 8) + (ulonglong)(uVar26 + 3)] = 0x3f800000;
          *(undefined8 *)((longlong)auStack_100 + lVar4 + lVar3) = 0x14509cf4c;
          FUN_14509c2e0(fVar33,fVar34,_Dst,uVar22);
        }
        else {
          *(float *)((longlong)afStack_cc + lVar4 + lVar3 + 8) = SQRT(fVar33);
          *_Dst = SQRT(1.0 - fVar33);
        }
        goto LAB_14509d14e;
      }
      puVar11[uVar26 + 2] = 0x3f800000;
      puVar11[uVar26 + 4] = 0x3f800000;
      puVar11[(ulonglong)(uVar19 * 8) + (ulonglong)(uVar26 + 3)] = 0x3f800000;
      puVar11[(ulonglong)(uVar19 * 8) + (ulonglong)(uVar26 + 5)] = 0x3f800000;
    }
    else {
      if (uVar18 == 7) {
        puVar14 = local_c0 + uVar19 * 8;
        local_c0 = puVar14;
        *puVar11 = 0x3f800000;
        puVar14[1] = 0x3f800000;
        puVar24 = puVar11 + (uVar19 << 4);
        local_b8 = puVar24;
        puVar24[2] = 0x3f800000;
        if ((uVar22 - 0x633 & 0xfffffffb) != 0) {
          if ((uVar22 - 0x603 & 0xfffffffb) == 0) {
            puVar11[uVar26 + 2] = 0x3f800000;
            local_c0[uVar26 + 3] = 0x3f800000;
            puVar24[uVar26 + 2] = 0x3f000000;
            puVar24[uVar26 + 3] = 0x3f000000;
            *(undefined8 *)((longlong)auStack_100 + lVar4 + lVar3) = 0x14509ce42;
            FUN_14509c370(fVar33,fVar34,_Dst,uVar22);
          }
          else {
            *(undefined4 *)((longlong)&local_c0 + lVar4 + lVar3) = 0x3f13cd3a;
            *_Dst = SQRT((2.0 - (fVar33 + fVar33)) * 0.33333334);
            *(float *)((longlong)afStack_cc + lVar4 + lVar3 + 8) =
                 SQRT((fVar33 + fVar33) * 0.33333334);
          }
          goto LAB_14509d14e;
        }
        puVar11[uVar26 + 2] = 0x3f800000;
        puVar11[uVar26 + 4] = 0x3f800000;
        puVar14[uVar26 + 3] = 0x3f800000;
        local_c0[uVar26 + 5] = 0x3f800000;
        puVar24[uVar26 + 2] = 0x3f000000;
        puVar24[uVar26 + 4] = 0x3f000000;
        puVar24[uVar26 + 3] = 0x3f000000;
        puVar24[uVar26 + 5] = 0x3f000000;
        goto LAB_14509cea5;
      }
      if (uVar18 != 0x603) goto LAB_14509d14e;
      *local_c0 = 0x3f800000;
      uVar10 = (ulonglong)(uVar19 << 4);
      puVar11[(ulonglong)(uVar19 * 8) + 1] = 0x3f800000;
      puVar11[(uVar26 + 2) + uVar10] = 0x3f800000;
      lVar12 = (ulonglong)(uVar26 + 3) + (ulonglong)(uVar19 * 0x18);
      puVar11[lVar12] = 0x3f800000;
      if ((uVar22 - 0x633 & 0xfffffffb) != 0) {
        *(undefined8 *)((longlong)auStack_100 + lVar4 + lVar3) = 0x14509cd2b;
        FUN_14509c2e0(lVar12,uVar10,_Dst,uVar22);
        goto LAB_14509d14e;
      }
      puVar11[(uVar26 + 4) + uVar10] = 0x3f800000;
      puVar11[(ulonglong)(uVar26 + 5) + (ulonglong)(uVar19 * 0x18)] = 0x3f800000;
    }
  }
  else {
    if (uVar18 != 0x633) {
      if (uVar18 != 0x637) goto LAB_14509d14e;
      *local_c0 = 0x3f800000;
      puVar11[(ulonglong)(uVar19 * 8) + 1] = 0x3f800000;
      puVar11[(ulonglong)(uVar19 << 4) + 2] = 0x3f800000;
      puVar11[(ulonglong)(uVar19 * 0x18) + (ulonglong)(uVar26 + 2)] = 0x3f800000;
      puVar11[(ulonglong)(uVar26 + 3) + (longlong)puVar14] = 0x3f800000;
      puVar11[(ulonglong)(uVar19 * 0x28) + (ulonglong)(uVar26 + 4)] = 0x3f800000;
      puVar11[(ulonglong)(uVar19 * 0x30) + (ulonglong)(uVar26 + 5)] = 0x3f800000;
LAB_14509cea5:
      *(undefined8 *)((longlong)auStack_100 + lVar4 + lVar3) = 0x14509ceb7;
      FUN_14509c550(fVar33,fVar34,_Dst,uVar22);
      goto LAB_14509d14e;
    }
    *local_c0 = 0x3f800000;
    puVar11[(ulonglong)(uVar19 * 8) + 1] = 0x3f800000;
    puVar11[(ulonglong)(uVar19 << 4) + (ulonglong)(uVar26 + 2)] = 0x3f800000;
    puVar11[(ulonglong)(uVar19 * 0x18) + (ulonglong)(uVar26 + 3)] = 0x3f800000;
    puVar11[(ulonglong)(uVar26 + 4) + (longlong)puVar14] = 0x3f800000;
    puVar11[(ulonglong)(uVar19 * 0x28) + (ulonglong)(uVar26 + 5)] = 0x3f800000;
  }
  *(undefined8 *)((longlong)auStack_100 + lVar4 + lVar3) = 0x14509d14e;
  FUN_14509c450(fVar33,fVar34,_Dst,uVar22);
LAB_14509d14e:
  fVar34 = afStack_cc[2];
  fVar33 = afStack_cc[1];
  uVar22 = 0;
  fVar36 = (float)uVar7;
  auVar31._4_4_ = fVar36;
  auVar31._0_4_ = fVar36;
  auVar31._8_4_ = fVar36;
  auVar31._12_4_ = fVar36;
  auVar31 = sqrtps(in_XMM3,auVar31);
  fVar36 = auVar31._0_4_;
  do {
    puVar14 = (undefined4 *)0x0;
    pfVar16 = (float *)(puVar11 + uVar22 * uVar19 * 8);
    uVar26 = (uint)bVar17;
    uVar28 = (uint)bVar17;
    uVar9 = (uint)bVar17;
    if (bVar17 == 0) {
LAB_14509d337:
      if (uVar28 != 0) goto LAB_14509d343;
    }
    else {
      if ((1 < uVar26) && ((_Dst + (bVar17 - 1) < pfVar16 || (pfVar16 + (bVar17 - 1) < _Dst)))) {
        if (0xf < uVar26) {
          uVar27 = 8;
          do {
            pfVar15 = pfVar16 + (longlong)puVar14;
            fVar35 = pfVar15[1];
            fVar32 = pfVar15[2];
            fVar30 = pfVar15[3];
            uVar8 = uVar27 - 4;
            pfVar1 = _Dst + (longlong)puVar14;
            fVar29 = pfVar1[1];
            fVar5 = pfVar1[2];
            fVar6 = pfVar1[3];
            pfVar2 = pfVar16 + (longlong)puVar14;
            *pfVar2 = *pfVar1 * *pfVar15;
            pfVar2[1] = fVar29 * fVar35;
            pfVar2[2] = fVar5 * fVar32;
            pfVar2[3] = fVar6 * fVar30;
            uVar23 = (int)puVar14 + 0x10;
            puVar14 = (undefined4 *)(ulonglong)uVar23;
            pfVar15 = pfVar16 + uVar8;
            fVar35 = pfVar15[1];
            fVar32 = pfVar15[2];
            fVar30 = pfVar15[3];
            pfVar1 = _Dst + uVar8;
            fVar29 = pfVar1[1];
            fVar5 = pfVar1[2];
            fVar6 = pfVar1[3];
            pfVar2 = pfVar16 + uVar8;
            *pfVar2 = *pfVar1 * *pfVar15;
            pfVar2[1] = fVar29 * fVar35;
            pfVar2[2] = fVar5 * fVar32;
            pfVar2[3] = fVar6 * fVar30;
            pfVar15 = pfVar16 + uVar27;
            fVar35 = pfVar15[1];
            fVar32 = pfVar15[2];
            fVar30 = pfVar15[3];
            pfVar1 = _Dst + uVar27;
            fVar29 = pfVar1[1];
            fVar5 = pfVar1[2];
            fVar6 = pfVar1[3];
            pfVar2 = pfVar16 + uVar27;
            *pfVar2 = *pfVar1 * *pfVar15;
            pfVar2[1] = fVar29 * fVar35;
            pfVar2[2] = fVar5 * fVar32;
            pfVar2[3] = fVar6 * fVar30;
            uVar8 = uVar27 + 4;
            uVar27 = uVar27 + 0x10;
            pfVar15 = pfVar16 + uVar8;
            fVar35 = pfVar15[1];
            fVar32 = pfVar15[2];
            fVar30 = pfVar15[3];
            pfVar1 = _Dst + uVar8;
            fVar29 = pfVar1[1];
            fVar5 = pfVar1[2];
            fVar6 = pfVar1[3];
            pfVar2 = pfVar16 + uVar8;
            *pfVar2 = *pfVar1 * *pfVar15;
            pfVar2[1] = fVar29 * fVar35;
            pfVar2[2] = fVar5 * fVar32;
            pfVar2[3] = fVar6 * fVar30;
          } while (uVar23 < uVar9 - (uVar26 & 0xf));
          if ((uVar26 & 0xf) < 2) goto LAB_14509d25e;
        }
        do {
          *(ulonglong *)(pfVar16 + (longlong)puVar14) =
               CONCAT44((float)((ulonglong)*(undefined8 *)(_Dst + (longlong)puVar14) >> 0x20) *
                        (float)((ulonglong)*(undefined8 *)(pfVar16 + (longlong)puVar14) >> 0x20),
                        (float)*(undefined8 *)(_Dst + (longlong)puVar14) *
                        (float)*(undefined8 *)(pfVar16 + (longlong)puVar14));
          uVar26 = (int)puVar14 + 2;
          puVar14 = (undefined4 *)(ulonglong)uVar26;
        } while (uVar26 < (uVar9 & 0xfffffffe));
      }
LAB_14509d25e:
      uVar26 = (uint)puVar14;
      if (uVar28 <= uVar26) goto LAB_14509d337;
      local_c0 = puVar14;
      lVar12 = -(longlong)pfVar16;
      if (uVar28 - uVar26 < 4) {
LAB_14509d30b:
        uVar10 = (ulonglong)(uVar28 - uVar26);
        pfVar15 = pfVar16 + (longlong)puVar14;
        do {
          *pfVar15 = *(float *)((longlong)_Dst + lVar12 + (longlong)pfVar15) * *pfVar15;
          uVar10 = uVar10 - 1;
          pfVar15 = pfVar15 + 1;
        } while (uVar10 != 0);
      }
      else {
        lVar13 = (longlong)puVar14 + 1;
        uVar27 = ((uVar28 - uVar26) - 4 >> 2) + 1;
        uVar10 = (ulonglong)uVar27;
        uVar26 = uVar26 + uVar27 * 4;
        puVar14 = puVar14 + uVar10;
        pfVar15 = pfVar16 + lVar13;
        do {
          pfVar1 = pfVar15 + 4;
          pfVar15[-1] = *(float *)((longlong)pfVar15 + (longlong)_Dst + lVar12 + -4) * pfVar15[-1];
          *pfVar15 = *(float *)((longlong)_Dst + lVar12 + -0x10 + (longlong)pfVar1) * *pfVar15;
          pfVar15[1] = *(float *)((longlong)_Dst + lVar12 + -0xc + (longlong)pfVar1) * pfVar15[1];
          pfVar15[2] = *(float *)((longlong)pfVar15 + (longlong)_Dst + lVar12 + 8) * pfVar15[2];
          uVar10 = uVar10 - 1;
          pfVar15 = pfVar1;
        } while (uVar10 != 0);
        if (uVar26 < uVar28) goto LAB_14509d30b;
      }
LAB_14509d343:
      uVar10 = 0;
      if (0xf < uVar28) {
        uVar10 = 0;
        uVar26 = 8;
        do {
          pfVar15 = pfVar16 + uVar10;
          fVar35 = pfVar15[1];
          fVar32 = pfVar15[2];
          fVar30 = pfVar15[3];
          pfVar1 = pfVar16 + uVar10;
          *pfVar1 = fVar36 * *pfVar15;
          pfVar1[1] = fVar36 * fVar35;
          pfVar1[2] = fVar36 * fVar32;
          pfVar1[3] = fVar36 * fVar30;
          uVar8 = (int)uVar10 + 0x10;
          uVar10 = (ulonglong)uVar8;
          pfVar15 = pfVar16 + (uVar26 - 4);
          fVar35 = pfVar15[1];
          fVar32 = pfVar15[2];
          fVar30 = pfVar15[3];
          pfVar1 = pfVar16 + (uVar26 - 4);
          *pfVar1 = fVar36 * *pfVar15;
          pfVar1[1] = fVar36 * fVar35;
          pfVar1[2] = fVar36 * fVar32;
          pfVar1[3] = fVar36 * fVar30;
          pfVar15 = pfVar16 + uVar26;
          fVar35 = pfVar15[1];
          fVar32 = pfVar15[2];
          fVar30 = pfVar15[3];
          pfVar1 = pfVar16 + uVar26;
          *pfVar1 = *pfVar15 * fVar36;
          pfVar1[1] = fVar35 * fVar36;
          pfVar1[2] = fVar32 * fVar36;
          pfVar1[3] = fVar30 * fVar36;
          uVar27 = uVar26 + 4;
          uVar26 = uVar26 + 0x10;
          pfVar15 = pfVar16 + uVar27;
          fVar35 = pfVar15[1];
          fVar32 = pfVar15[2];
          fVar30 = pfVar15[3];
          pfVar1 = pfVar16 + uVar27;
          *pfVar1 = *pfVar15 * fVar36;
          pfVar1[1] = fVar35 * fVar36;
          pfVar1[2] = fVar32 * fVar36;
          pfVar1[3] = fVar30 * fVar36;
        } while (uVar8 < (uVar28 & 0xfffffff0));
      }
      uVar26 = (uint)uVar10;
      if (uVar26 < uVar28) {
        uVar21 = uVar10;
        if (3 < uVar9 - uVar26) {
          lVar12 = uVar10 + 2;
          uVar9 = ((uVar9 - uVar26) - 4 >> 2) + 1;
          uVar25 = (ulonglong)uVar9;
          uVar26 = uVar26 + uVar9 * 4;
          uVar21 = (ulonglong)uVar26;
          uVar10 = uVar10 + (ulonglong)uVar9 * 4;
          pfVar15 = pfVar16 + lVar12;
          do {
            pfVar15[-2] = fVar36 * pfVar15[-2];
            pfVar15[-1] = fVar36 * pfVar15[-1];
            *pfVar15 = fVar36 * *pfVar15;
            pfVar15[1] = fVar36 * pfVar15[1];
            uVar25 = uVar25 - 1;
            pfVar15 = pfVar15 + 4;
          } while (uVar25 != 0);
          if (uVar28 <= uVar26) goto LAB_14509d454;
        }
        uVar21 = (ulonglong)(uVar28 - (int)uVar21);
        pfVar16 = pfVar16 + uVar10;
        do {
          *pfVar16 = fVar36 * *pfVar16;
          uVar21 = uVar21 - 1;
          pfVar16 = pfVar16 + 1;
        } while (uVar21 != 0);
      }
    }
LAB_14509d454:
    uVar22 = uVar22 + 1;
    if (uVar7 <= uVar22) {
      *(float **)(&stack0xffffffffffffff30 + lVar4 + lVar3) = param_6;
      *(undefined4 **)((longlong)&local_d8 + lVar4 + lVar3) = puVar11;
      *(undefined8 *)((longlong)auStack_100 + lVar4 + lVar3) = 0x14509d488;
      FUN_1450985a0(uVar18 << 0xc | uVar7 | 0x100,fVar34,fVar33,param_5 & 0xff);
      return;
    }
  } while( true );
}



// FUNCTION 14509d4d0 FUN_14509d4d0 body=588 status=ok
// SIG undefined FUN_14509d4d0(void)

void FUN_14509d4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  char param_5,uint param_6,uint param_7,float *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 in_R9;
  float fVar5;
  
  uVar3 = param_7 >> 0xc;
  uVar2 = (uVar3 & 0xffff7) << 0xc;
  uVar1 = uVar3 - (uVar3 & 0xffff7) >> 3;
  uVar4 = param_7 - uVar1 & 0xff;
  if ((param_5 == '\0') || (uVar4 == 1)) {
    uVar1 = param_6 - (param_6 >> 0xf & 0x1ffe0001) & 0xff;
    if (uVar1 == 1) {
      if ((char)param_7 != '\0') {
        memset(param_8,0,(ulonglong)(param_7 & 0xff) << 2);
      }
      if (uVar4 < 2) {
        if (uVar4 == 1) {
          *param_8 = 1.0;
        }
        FUN_14509c670(param_6,param_7,param_8);
      }
      else if ((uVar2 & 0x7000) == 0x7000) {
        fVar5 = SQRT((1.0 - param_4) * 0.5);
        *param_8 = fVar5;
        param_8[1] = fVar5;
        param_8[2] = SQRT(param_4);
        FUN_14509c670(param_6,param_7,param_8);
      }
      else {
        *param_8 = 0.70710677;
        param_8[1] = 0.70710677;
        FUN_14509c670(param_6,param_7,param_8);
      }
    }
    else {
      FUN_145098d60((param_6 >> 0xc & 0xfffffff7) << 0xc | param_6 & 0xf00 | uVar1,
                    uVar4 | param_7 & 0xf00 | uVar2,param_7 & 0xff,param_8);
    }
    uVar1 = param_7 & 0xff;
    if ((param_6 & 0x8000) != 0) {
      if (uVar1 != 0) {
        memset(param_8 + (uVar1 + 7 & 0xfffffff8) * ((param_6 & 0xff) - 1),0,(ulonglong)uVar1 << 2);
      }
      if ((param_7 & 0x8000) != 0) {
        (param_8 + (uVar1 + 7 & 0xfffffff8) * ((param_6 & 0xff) - 1))[uVar1 - 1] = 1.0;
      }
    }
  }
  else {
    if (param_5 == '\x01') {
      FUN_14509c6e0(uVar1,uVar2,param_4,param_6,param_7,param_8);
    }
    else if (param_5 == '\x02') {
      FUN_145097010(uVar1,uVar2,param_3,in_R9,param_6,param_7,param_8);
    }
    if ((param_6 & 0x8000) != 0) {
      param_7 = param_7 & 0xff;
      if (param_7 != 0) {
        memset(param_8 + (param_7 + 7 & 0xfffffff8) * ((param_6 & 0xff) - 1),0,
               (ulonglong)param_7 << 2);
      }
      if ((uVar3 & 8) != 0) {
        (param_8 + (param_7 + 7 & 0xfffffff8) * ((param_6 & 0xff) - 1))[param_7 - 1] = 1.0;
      }
    }
  }
  return;
}



// FUNCTION 14509d720 FUN_14509d720 body=491 status=ok
// SIG undefined FUN_14509d720(void)

void FUN_14509d720(uint param_1,int param_2,longlong param_3,int param_4,uint param_5,int *param_6,
                  int param_7,int param_8,longlong param_9)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  ulonglong uVar8;
  int iVar9;
  
  uVar4 = (ulonglong)(param_8 + 7);
  uVar8 = 0;
  piVar7 = param_6;
  do {
    uVar6 = 0;
    if (3 < param_1) {
      iVar1 = (int)(uVar4 >> 3);
      iVar9 = 2;
      do {
        lVar3 = (ulonglong)(iVar1 * uVar6 * 8) + (ulonglong)(uint)(piVar7[1] + param_7);
        iVar2 = uVar6 * param_2;
        uVar6 = uVar6 + 4;
        *(float *)(param_9 + lVar3 * 4) =
             *(float *)(param_3 + (ulonglong)(uint)(iVar2 + *piVar7 + param_4) * 4) *
             (float)piVar7[2] + *(float *)(param_9 + lVar3 * 4);
        lVar3 = (ulonglong)(uint)(iVar1 * (iVar9 + -1) * 8) + (ulonglong)(uint)(piVar7[1] + param_7)
        ;
        iVar5 = iVar9 + 1;
        *(float *)(param_9 + lVar3 * 4) =
             *(float *)(param_3 + (ulonglong)(uint)((iVar9 + -1) * param_2 + *piVar7 + param_4) * 4)
             * (float)piVar7[2] + *(float *)(param_9 + lVar3 * 4);
        lVar3 = (ulonglong)(uint)(iVar1 * iVar9 * 8) + (ulonglong)(uint)(piVar7[1] + param_7);
        iVar2 = iVar9 * param_2;
        iVar9 = iVar9 + 4;
        *(float *)(param_9 + lVar3 * 4) =
             *(float *)(param_3 + (ulonglong)(uint)(iVar2 + *piVar7 + param_4) * 4) *
             (float)piVar7[2] + *(float *)(param_9 + lVar3 * 4);
        lVar3 = (ulonglong)(uint)(iVar1 * iVar5 * 8) + (ulonglong)(uint)(piVar7[1] + param_7);
        *(float *)(param_9 + lVar3 * 4) =
             *(float *)(param_3 + (ulonglong)(uint)(iVar5 * param_2 + *piVar7 + param_4) * 4) *
             (float)piVar7[2] + *(float *)(param_9 + lVar3 * 4);
      } while (uVar6 < param_1 - 3);
      uVar4 = (ulonglong)(param_8 + 7);
    }
    if (uVar6 < param_1) {
      do {
        lVar3 = (ulonglong)(((uint)uVar4 & 0xfffffff8) * uVar6) +
                (ulonglong)(uint)(piVar7[1] + param_7);
        iVar9 = uVar6 * param_2;
        uVar6 = uVar6 + 1;
        *(float *)(param_9 + lVar3 * 4) =
             *(float *)(param_3 + (ulonglong)(uint)(iVar9 + *piVar7 + param_4) * 4) *
             (float)piVar7[2] + *(float *)(param_9 + lVar3 * 4);
      } while (uVar6 < param_1);
    }
    else {
      uVar4 = (ulonglong)(param_8 + 7);
    }
    uVar8 = (ulonglong)((int)uVar8 + 1);
    piVar7 = param_6 + uVar8 * 3;
  } while ((uint)(*piVar7 + param_4) < param_5);
  return;
}



// FUNCTION 14509d910 FUN_14509d910 body=43 status=ok
// SIG undefined FUN_14509d910(void)

undefined8 * FUN_14509d910(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c26410;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14509d940 FUN_14509d940 body=148 status=ok
// SIG undefined FUN_14509d940(void)

void FUN_14509d940(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = param_1 + 2;
  puVar2 = (undefined8 *)*puVar1;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 3) = 0;
    if (param_1 != puVar2) {
      AK::MemoryMgr::Free(4,puVar2);
    }
    *puVar1 = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  puVar2 = (undefined8 *)param_2[2];
  if (param_2 == puVar2) {
    *param_1 = *param_2;
    puVar2 = param_1;
  }
  *puVar1 = puVar2;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}



// FUNCTION 14509d9e0 FUN_14509d9e0 body=142 status=ok
// SIG undefined FUN_14509d9e0(void)

undefined8 FUN_14509d9e0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar5;
  
  uVar8 = *(uint *)(param_1 + 0x18);
  uVar3 = 0;
  if (uVar8 != 0) {
    uVar7 = *(ulonglong *)(param_1 + 0x10);
    uVar9 = 0;
    do {
      uVar3 = (uVar8 >> 1) + (uint)uVar9;
      uVar5 = (ulonglong)uVar3;
      uVar6 = uVar7 + (longlong)(int)uVar3 * 8;
      uVar1 = *(ulonglong *)(uVar7 + (longlong)(int)uVar3 * 8);
      if (uVar1 == param_2) {
        bVar2 = true;
        goto LAB_14509da51;
      }
      uVar3 = uVar3 + 1;
      if (param_2 <= uVar1) {
        uVar3 = (uint)uVar9;
      }
      uVar9 = (ulonglong)uVar3;
      uVar4 = uVar8 - 1;
      if (param_2 <= uVar1) {
        uVar4 = uVar8;
      }
      uVar8 = uVar4 >> 1;
    } while (uVar8 != 0);
  }
  uVar5 = *(ulonglong *)(param_1 + 0x10);
  bVar2 = false;
  uVar6 = uVar5 + (longlong)(int)uVar3 * 8;
LAB_14509da51:
  uVar7 = 0;
  if (bVar2) {
    uVar7 = uVar6;
  }
  return CONCAT71((int7)(uVar5 >> 8),uVar7 != 0);
}



// FUNCTION 14509da70 FUN_14509da70 body=43 status=ok
// SIG undefined FUN_14509da70(void)

undefined8 * FUN_14509da70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c26480;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14509daa0 FUN_14509daa0 body=113 status=ok
// SIG undefined FUN_14509daa0(void)

void FUN_14509daa0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149c264a0;
  param_1[1] = &PTR_LAB_149c264c8;
  FUN_14536b6e0();
  if ((void *)param_1[0xf] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0xf]);
    param_1[0xf] = 0;
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  FUN_1453533f0(param_1 + 1);
  *param_1 = &PTR_FUN_149c26480;
  return;
}



// FUNCTION 14509db20 FUN_14509db20 body=39 status=ok
// SIG undefined FUN_14509db20(void)

void FUN_14509db20(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  FUN_14536bc90(param_5,1,param_3,param_2,param_4,param_5);
  return;
}



// FUNCTION 14509db70 FUN_14509db70 body=52 status=ok
// SIG undefined FUN_14509db70(void)

undefined8 FUN_14509db70(undefined8 param_1,ulonglong param_2)

{
  FUN_14509daa0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 14509dbb0 FUN_14509dbb0 body=81 status=ok
// SIG undefined FUN_14509dbb0(void)

undefined8 * FUN_14509dbb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c264d8;
  param_1[1] = &PTR_LAB_149c26500;
  FUN_14536cd90();
  FUN_14509daa0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x90);
  }
  return param_1;
}


