// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14509dc10 FUN_14509dc10 body=81 status=ok
// SIG undefined FUN_14509dc10(void)

undefined8 * FUN_14509dc10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c26510;
  param_1[1] = &PTR_LAB_149c26538;
  FUN_14536ce10();
  FUN_14509daa0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 14509dc70 FUN_14509dc70 body=1325 status=ok
// SIG undefined FUN_14509dc70(void)

undefined8 *
FUN_14509dc70(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  param_1[2] = 0;
  *param_1 = &PTR_FUN_149c26690;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xff;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[6] = param_3;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0xd) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar3;
  *(undefined4 *)(param_1 + 0xe) = uVar4;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x12) & 0xff;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined2 *)((longlong)param_1 + 0x9c) = 0;
  FUN_145377550(param_1 + 0x14);
  FUN_145090250(param_1 + 0x19);
  memset(param_1 + 0x2e,0,0x238);
  param_1[0x2f] = 0;
  param_1[0x2d] = &PTR_FUN_149c26510;
  param_1[0x2e] = &PTR_LAB_149c26538;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0xff;
  *(undefined1 *)(param_1 + 0x33) = 0xff;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0xff;
  *(undefined1 *)(param_1 + 0x45) = 0xff;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x3f] = &PTR_FUN_149c26510;
  param_1[0x40] = &PTR_LAB_149c26538;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(undefined1 *)(param_1 + 0x56) = 0xff;
  *(undefined1 *)(param_1 + 0x57) = 0xff;
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
  param_1[0x51] = &PTR_FUN_149c26510;
  param_1[0x52] = &PTR_LAB_149c26538;
  param_1[0x62] = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0xff;
  *(undefined1 *)(param_1 + 0x69) = 0xff;
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
  param_1[99] = &PTR_FUN_149c26510;
  param_1[100] = &PTR_LAB_149c26538;
  param_1[0x74] = 0;
  param_1[0x75] = &PTR_FUN_149c265d8;
  *(undefined4 *)(param_1 + 0x76) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 0xffffffff;
  param_1[0x77] = param_1;
  *(undefined1 *)(param_1 + 0x78) = 0;
  param_1[0x79] = &PTR_FUN_149c265d8;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0xffffffff;
  param_1[0x7b] = param_1;
  *(undefined1 *)(param_1 + 0x7c) = 1;
  param_1[0x7d] = &PTR_FUN_149c265d8;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3f4) = 0xffffffff;
  param_1[0x7f] = param_1;
  *(undefined1 *)(param_1 + 0x80) = 2;
  param_1[0x81] = &PTR_FUN_149c265d8;
  *(undefined4 *)(param_1 + 0x82) = 0;
  *(undefined4 *)((longlong)param_1 + 0x414) = 0xffffffff;
  param_1[0x83] = param_1;
  *(undefined1 *)(param_1 + 0x84) = 3;
  param_1[0x85] = &PTR_FUN_149c26548;
  param_1[0x89] = &PTR_FUN_149c264d8;
  *(undefined1 *)(param_1 + 0x9d) = 0;
  *(uint *)(param_1 + 0x9d) = *(uint *)(param_1 + 0x9d) & 0xff;
  *(undefined1 *)(param_1 + 0xa3) = 0;
  *(uint *)(param_1 + 0xa3) = *(uint *)(param_1 + 0xa3) & 0xff;
  param_1[0x8a] = &PTR_LAB_149c26500;
  *(undefined4 *)(param_1 + 0x86) = 0;
  *(undefined4 *)((longlong)param_1 + 0x434) = 0xffffffff;
  param_1[0x87] = param_1;
  param_1[0x88] = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  *(undefined1 *)(param_1 + 0x8e) = 0xff;
  *(undefined1 *)(param_1 + 0x8f) = 0xff;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4dc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x53c) = 1;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  *(undefined1 *)((longlong)param_1 + 0x567) = param_5;
  param_1[0xab] = 0;
  *(undefined1 *)((longlong)param_1 + 0x564) = 0;
  *(undefined1 *)((longlong)param_1 + 0x565) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x566) = 0;
  *(undefined2 *)(param_1 + 0xad) = 0;
  *(undefined1 *)((longlong)param_1 + 0x56a) = 0;
  param_1[0x9c] = 0;
  param_1[0x9f] = 0;
  param_1[0xa2] = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xac) = 2;
  *(undefined8 *)((longlong)param_1 + 0x4ec) = 0x2b;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x504) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x50c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x51c) = 0x2b;
  *(undefined4 *)(param_1 + 0xa6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x534) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa7) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 14509e1a0 FUN_14509e1a0 body=595 status=ok
// SIG undefined FUN_14509e1a0(void)

void FUN_14509e1a0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_149c26690;
  puVar4 = (undefined8 *)param_1[0x11];
  while (puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)puVar4[1];
    (**(code **)*puVar4)(puVar4,0);
    AK::MemoryMgr::Free(5,puVar4);
    puVar4 = puVar3;
  }
  uVar6 = 0;
  plVar8 = param_1 + 0x2d;
  uVar5 = 1;
  do {
    if (uVar5 != 0) {
      (**(code **)(*plVar8 + 0x20))(param_1 + uVar6 * 0x12 + 0x2d);
    }
    uVar7 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar7;
    uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    plVar8 = plVar8 + 0x12;
  } while (uVar7 < 4);
  FUN_1450a0830(param_1);
  FUN_1450902b0(param_1 + 0x19);
  puVar4 = (undefined8 *)param_1[10];
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0xb) = 0;
    if (param_1 + 8 != puVar4) {
      AK::MemoryMgr::Free(4,puVar4);
    }
    param_1[10] = 0;
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  param_1[0x89] = &PTR_FUN_149c264d8;
  param_1[0x8a] = &PTR_LAB_149c26500;
  FUN_14536cd90(param_1 + 0x89);
  FUN_14509daa0(param_1 + 0x89);
  plVar8 = (longlong *)param_1[0x88];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar8 + 0x18))();
    }
    param_1[0x88] = 0;
  }
  param_1[0x85] = &PTR_FUN_149c26410;
  param_1[0x81] = &PTR_FUN_149c26410;
  param_1[0x7d] = &PTR_FUN_149c26410;
  param_1[0x79] = &PTR_FUN_149c26410;
  param_1[0x75] = &PTR_FUN_149c26410;
  param_1[99] = &PTR_FUN_149c26510;
  param_1[100] = &PTR_LAB_149c26538;
  FUN_14536ce10(param_1 + 99);
  FUN_14509daa0(param_1 + 99);
  param_1[0x51] = &PTR_FUN_149c26510;
  param_1[0x52] = &PTR_LAB_149c26538;
  FUN_14536ce10(param_1 + 0x51);
  FUN_14509daa0(param_1 + 0x51);
  param_1[0x3f] = &PTR_FUN_149c26510;
  param_1[0x40] = &PTR_LAB_149c26538;
  FUN_14536ce10(param_1 + 0x3f);
  FUN_14509daa0(param_1 + 0x3f);
  param_1[0x2d] = &PTR_FUN_149c26510;
  param_1[0x2e] = &PTR_LAB_149c26538;
  FUN_14536ce10(param_1 + 0x2d);
  FUN_14509daa0(param_1 + 0x2d);
  FUN_1450902b0(param_1 + 0x19);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  FUN_1453775f0(param_1 + 0x14);
  return;
}



// FUNCTION 14509e400 FUN_14509e400 body=430 status=ok
// SIG undefined FUN_14509e400(void)

void FUN_14509e400(longlong param_1,undefined8 *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  param_5._0_4_ = (float)param_5 * DAT_14c72f2c8 * *(float *)(param_1 + 0x4d8);
  param_5._4_4_ = param_5._4_4_ * DAT_14c72f2cc * *(float *)(param_1 + 0x4dc);
  FUN_14509f890();
  if (*(longlong *)(param_1 + 0x88) != 0) {
    local_40 = 0;
    local_48 = 0;
    local_3c = 0x2b;
    local_30 = 0;
    local_28 = 0xffffffff;
    local_24 = 0x3f800000;
    local_20 = 0xffffffff;
    local_1c = 1;
    puVar4 = param_2;
    if ((*(char *)(param_1 + 0x9c) != '\0') || (*param_4 != 0)) {
      local_3c = (ulonglong)CONCAT24(*(undefined2 *)((longlong)param_2 + 0x12),0x2b);
      local_40 = *(undefined4 *)(param_2 + 1);
      iVar3 = FUN_145071750(&local_48);
      if (iVar3 == 1) {
        FUN_14509fdd0(param_1,param_2,param_3,param_4,&local_48);
        puVar4 = &local_48;
      }
    }
    for (lVar1 = *(longlong *)(param_1 + 0x88); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 8)) {
      FUN_1450a0a50(lVar1,puVar4,CONCAT44(param_5._4_4_,(float)param_5));
    }
    FUN_1450718b0(&local_48);
  }
  plVar2 = *(longlong **)(param_1 + 0x4d0);
  if (*(char *)(param_1 + 0x569) != '\0') {
    (**(code **)(*plVar2 + 0x68))
              (plVar2,param_2,param_3,param_4,CONCAT44(param_5._4_4_,(float)param_5));
    return;
  }
  (**(code **)(*plVar2 + 0x60))(plVar2,param_2,CONCAT44(param_5._4_4_,(float)param_5));
  return;
}



// FUNCTION 14509e5b0 FUN_14509e5b0 body=1594 status=ok
// SIG undefined FUN_14509e5b0(void)

int FUN_14509e5b0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  byte bVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  bool bVar16;
  longlong *local_res8;
  longlong *local_res10;
  ulonglong in_stack_fffffffffffffe98;
  uint local_158;
  ulonglong local_154;
  undefined2 local_14c;
  undefined1 local_148 [4];
  undefined4 local_144;
  undefined4 local_140;
  undefined2 local_13c;
  undefined1 local_13a;
  undefined4 local_138;
  uint local_134;
  uint local_130;
  undefined **local_128;
  undefined **local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  void *pvStack_b0;
  ulonglong local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined8 local_40;
  
  lVar5 = DAT_14c791060;
  uVar9 = *(uint *)(param_1 + 100);
  plVar13 = (longlong *)0x0;
  uVar14 = 0;
  local_res8 = (longlong *)0x0;
  if (uVar9 == 0) {
    iVar6 = 4;
    goto LAB_14509eb9c;
  }
  do {
    while (iVar6 = *(int *)(lVar5 + 0x420), iVar6 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x428));
      if (*(int *)(lVar5 + 0x420) < 0) goto LAB_14509e61b;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x428));
    }
    LOCK();
    bVar16 = iVar6 == *(int *)(lVar5 + 0x420);
    if (bVar16) {
      *(int *)(lVar5 + 0x420) = iVar6 + 1;
    }
    UNLOCK();
  } while (!bVar16);
LAB_14509e61b:
  if (*(uint *)(lVar5 + 0x468) != 0) {
    for (plVar3 = *(longlong **)
                   (*(longlong *)(lVar5 + 0x460) +
                   ((ulonglong)uVar9 % (ulonglong)*(uint *)(lVar5 + 0x468)) * 8);
        (plVar12 = plVar13, plVar3 != (longlong *)0x0 &&
        (plVar12 = plVar3, *(uint *)(plVar3 + 2) != uVar9)); plVar3 = (longlong *)plVar3[1]) {
    }
    plVar13 = plVar12;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar12 + 0x14) = *(int *)((longlong)plVar12 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar6 = *(int *)(lVar5 + 0x420);
  while (-1 < iVar6) {
    LOCK();
    bVar16 = iVar6 == *(int *)(lVar5 + 0x420);
    if (bVar16) {
      *(int *)(lVar5 + 0x420) = iVar6 + -1;
    }
    UNLOCK();
    if (bVar16) {
      if ((iVar6 + -1 == 0) && (0 < *(int *)(lVar5 + 0x450))) {
        SetEvent(*(HANDLE *)(lVar5 + 0x458));
      }
      goto LAB_14509e694;
    }
    iVar6 = *(int *)(lVar5 + 0x420);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x428));
LAB_14509e694:
  local_res8 = plVar13;
  if (plVar13 == (longlong *)0x0) {
    if (uVar9 != 0xe611314a) {
      iVar6 = 0xf;
      goto LAB_14509eb9c;
    }
    uVar15 = 0xae0007;
  }
  else {
    uVar15 = (undefined4)plVar13[7];
  }
  local_118 = 0;
  local_110 = 0;
  local_128 = &PTR_FUN_149c264d8;
  local_108 = 0;
  local_120 = &PTR_LAB_149c26500;
  local_100 = 0xff;
  local_f8 = 0xff;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  pvStack_b0 = (void *)0x0;
  local_a8 = 0;
  local_a0 = (longlong *)0x0;
  local_148[0] = 0;
  local_144 = 0;
  local_140 = 1;
  local_13c = 0x100;
  local_13a = 0;
  local_res10 = (longlong *)0x0;
  iVar6 = FUN_145089070(uVar15,&local_res10,local_148);
  if (iVar6 == 0x58) {
    iVar6 = 0x58;
  }
  else if (local_res10 == (longlong *)0x0) {
    iVar6 = 0x34;
  }
  else {
    local_a0 = local_res10;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0xff;
    local_78 = 0xff;
    local_70 = 0;
    FUN_14536b850(&local_128,plVar13,&local_98,0,in_stack_fffffffffffffe98 & 0xffffffffffffff00);
    if (local_a0 == (longlong *)0x0) {
      iVar6 = 0x34;
    }
    else {
      local_134 = *(uint *)(param_1 + 0x70);
      if ((local_134 & 0xf00) == 0x300) {
        local_134 = 0;
        *(undefined1 *)(param_1 + 0x70) = 0;
        *(undefined4 *)(param_1 + 0x70) = 0;
      }
      local_138 = DAT_14c72f42c;
      local_130 = (local_134 & 0xff) << 8 | local_130 & 0xfffd0020 | 0x50020;
      if (*(char *)(param_1 + 0x567) == '\0') {
        uVar14 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
      }
      *(undefined4 *)(param_1 + 0x430) = uVar14;
      *(undefined4 *)(param_1 + 0x434) = uVar15;
      iVar6 = (**(code **)(*local_a0 + 0x30))
                        (local_a0,&PTR_PTR_14c72f458,param_1 + 0x428,local_d8,&local_138);
      uVar9 = local_134;
      if (iVar6 != 1) goto LAB_14509e8ce;
      FUN_1450a08c0(param_1);
      uVar7 = uVar9 & 0xf00;
      if (0x300 < uVar7) goto LAB_14509e8c9;
      if ((char)uVar9 != '\0') {
        if (uVar7 == 0x300) goto LAB_14509e97c;
        if (uVar7 == 0x100) {
          uVar7 = uVar9 >> 0xc;
          if ((((byte)(uVar9 >> 0x15) ^ (byte)(uVar9 >> 0x10)) & 1) != 0) {
            uVar7 = uVar7 & 0xffffffcf | 0x600;
          }
          bVar10 = 0;
          for (uVar9 = uVar7; uVar9 != 0; uVar9 = uVar9 & uVar9 - 1) {
            bVar10 = bVar10 + 1;
          }
          uVar9 = uVar7 << 0xc | (uint)bVar10 | 0x100;
        }
        *(undefined2 *)(param_1 + 0x4f0) = DAT_14c72f434;
        *(uint *)(param_1 + 0x4e8) = uVar9;
        iVar6 = FUN_145071750(param_1 + 0x4e0);
        if (iVar6 != 1) goto LAB_14509e8ce;
        iVar6 = FUN_145377570(param_1 + 0xa0,0);
        goto LAB_14509eb12;
      }
      if (uVar7 == 0x300) {
LAB_14509e97c:
        local_154 = 0;
        local_158 = 0;
        local_14c = 0;
        (**(code **)(*local_a0 + 0x60))(local_a0,&local_158);
        uVar4 = DAT_14c72f434;
        uVar7 = local_158 >> 8 & 0xf;
        if ((3 < uVar7) || (((char)local_158 == '\0' && (uVar7 != 3)))) goto LAB_14509e8c9;
        *(uint *)(param_1 + 0x4e8) = local_158;
        *(undefined2 *)(param_1 + 0x4f0) = uVar4;
        iVar6 = FUN_145071750(param_1 + 0x4e0);
        if (iVar6 == 1) {
          if ((char)local_14c != '\0') {
            *(undefined2 *)(param_1 + 0x520) = DAT_14c72f434;
            *(undefined4 *)(param_1 + 0x518) = 0x3102;
            iVar6 = FUN_145071750(param_1 + 0x510);
            if (iVar6 != 1) goto LAB_14509eb12;
          }
          uVar11 = local_154 & 0xffffffff;
          if ((int)local_154 == 0) {
LAB_14509ea76:
            iVar6 = FUN_145377570(param_1 + 0xa0,uVar11);
            goto LAB_14509eb12;
          }
          pvVar8 = AK::MemoryMgr::Malloc(5,uVar11 << 3);
          *(void **)(param_1 + 0x548) = pvVar8;
          if (pvVar8 == (void *)0x0) {
            iVar6 = 0x34;
          }
          else {
            pvVar8 = AK::MemoryMgr::Malloc(5,(local_154 & 0xffffffff) << 3);
            *(void **)(param_1 + 0x550) = pvVar8;
            if (pvVar8 != (void *)0x0) {
              uVar11 = local_154 & 0xffffffff;
              goto LAB_14509ea76;
            }
            iVar6 = 0x34;
          }
        }
        else {
LAB_14509eb12:
          if ((iVar6 == 1) && (iVar6 = (**(code **)(*local_a0 + 0x10))(), iVar6 == 1)) {
            FUN_14509fa80(param_1,uVar15,&local_128,uVar9);
            FUN_1450a07c0(param_1,&local_res8);
            local_68 = 0;
            local_60 = 0;
            local_58 = 0;
            local_50 = 0xff;
            local_48 = 0xff;
            local_40 = 0;
            FUN_14536b880(param_1 + 0x448,&local_68,0);
            *(undefined4 *)(param_1 + 0x560) = 1;
            plVar13 = local_res8;
            goto LAB_14509e8f6;
          }
        }
      }
      else {
LAB_14509e8c9:
        iVar6 = 4;
      }
LAB_14509e8ce:
      FUN_1450a08c0(param_1);
      FUN_14536cd90(&local_128);
      FUN_1450a2330(param_1 + 100,0,iVar6);
    }
  }
LAB_14509e8f6:
  local_128 = &PTR_FUN_149c264d8;
  local_120 = &PTR_LAB_149c26500;
  FUN_14536cd90(&local_128);
  local_128 = &PTR_FUN_149c264a0;
  local_120 = &PTR_LAB_149c264c8;
  FUN_14536b6e0();
  if (pvStack_b0 != (void *)0x0) {
    local_a8 = local_a8 & 0xffffffff00000000;
    AK::MemoryMgr::Free(0,pvStack_b0);
    pvStack_b0 = (void *)0x0;
    local_a8 = local_a8 & 0xffffffff;
  }
  FUN_1453533f0(&local_120);
  local_128 = &PTR_FUN_149c26480;
LAB_14509eb9c:
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar13 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*local_res8 + 0x18))();
    }
  }
  return iVar6;
}



// FUNCTION 14509ebf0 FUN_14509ebf0 body=39 status=ok
// SIG undefined FUN_14509ebf0(void)

void FUN_14509ebf0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x4d0);
  if ((plVar1 != (longlong *)0x0) && (*(char *)(param_1 + 0x569) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00014509ec12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))(plVar1,param_1 + 0x90);
    return;
  }
  return;
}



// FUNCTION 14509ed50 FUN_14509ed50 body=56 status=ok
// SIG undefined FUN_14509ed50(void)

undefined8 FUN_14509ed50(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x565) != '\0') {
    FUN_145073730(DAT_14c790fd8 + 0x90);
    return 1;
  }
  return 2;
}



// FUNCTION 14509eda0 FUN_14509eda0 body=43 status=ok
// SIG undefined FUN_14509eda0(void)

undefined8 * FUN_14509eda0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c26410;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14509eef0 FUN_14509eef0 body=43 status=ok
// SIG undefined FUN_14509eef0(void)

undefined8 * FUN_14509eef0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c26410;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14509ef20 FUN_14509ef20 body=963 status=ok
// SIG undefined FUN_14509ef20(void)

void FUN_14509ef20(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  longlong *local_res20;
  undefined4 *in_stack_fffffffffffffeb8;
  longlong *local_138;
  undefined1 local_130 [4];
  undefined4 local_12c;
  undefined4 local_128;
  undefined2 local_124;
  undefined1 local_122;
  longlong *local_120;
  undefined4 local_118;
  uint local_114;
  uint local_110;
  undefined **local_108;
  undefined **local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  void *pvStack_90;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  
  uVar5 = 0;
  piVar6 = (int *)(param_1 + 0x18);
  plVar7 = (longlong *)(param_1 + 0x168);
  uVar9 = 1;
  do {
    if ((param_2 & uVar9) != 0) {
      lVar8 = uVar5 * 0x90 + 0x168 + param_1;
      local_78 = uVar5;
      (**(code **)(*plVar7 + 0x20))(lVar8);
      FUN_14509f680(param_1,&local_res20,uVar5);
      if (local_res20 == (longlong *)0x0) {
        if ((*piVar6 == 0) && (*(longlong *)(param_1 + 0x440) != 0)) {
          FUN_14536b150(*(longlong *)(param_1 + 0x440),uVar5);
        }
      }
      else {
        uVar4 = 0;
        plVar3 = local_res20;
        do {
          if ((uVar4 != (uint)uVar5) &&
             (FUN_14509f680(param_1,&local_138,uVar4), local_138 != (longlong *)0x0)) {
            if ((int)local_138[7] == (int)plVar3[7]) {
              LOCK();
              piVar1 = (int *)((longlong)local_138 + 0x14);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*local_138 + 0x18))();
              }
              local_138 = (longlong *)0x0;
              LOCK();
              piVar1 = (int *)((longlong)local_res20 + 0x14);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              goto LAB_14509f289;
            }
            LOCK();
            piVar1 = (int *)((longlong)local_138 + 0x14);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_138 + 0x18))();
            }
            local_138 = (longlong *)0x0;
            plVar3 = local_res20;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < 4);
        local_128 = 1;
        local_120 = (longlong *)0x0;
        local_130[0] = 0;
        local_12c = 0;
        local_122 = 0;
        local_124 = 0x100;
        iVar2 = FUN_145089070((int)plVar3[7],&local_120,local_130);
        if ((iVar2 == 1) && (local_120 != (longlong *)0x0)) {
          if ((char)local_124 == '\0') {
            (**(code **)(*local_120 + 8))(local_120,&PTR_PTR_14c72f458);
          }
          else {
            local_114 = *(uint *)(param_1 + 0x60);
            local_118 = DAT_14c72f42c;
            local_f8 = 0;
            local_f0 = 0;
            local_110 = (local_114 & 0xff) << 8 | local_110 & 0xfffd0020 | 0x50020;
            local_e8 = 0;
            local_108 = &PTR_FUN_149c26510;
            local_e0 = 0xff;
            local_100 = &PTR_LAB_149c26538;
            local_d8 = 0xff;
            local_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            local_b8 = 0;
            lStack_b0 = 0;
            local_a8 = 0;
            local_a0 = 0;
            local_98 = 0;
            pvStack_90 = (void *)0x0;
            local_88 = 0;
            local_80 = (longlong *)0x0;
            local_70 = 0;
            local_68 = 0;
            local_60 = 0;
            local_58 = 0xff;
            local_50 = 0xff;
            local_48 = 0;
            FUN_14536b850(&local_108,plVar3,&local_70,0,
                          (ulonglong)in_stack_fffffffffffffeb8 & 0xffffffffffffff00);
            plVar7[0xb] = lStack_b0;
            local_80 = local_120;
            in_stack_fffffffffffffeb8 = &local_118;
            iVar2 = (**(code **)(*local_120 + 0x30))
                              (local_120,&PTR_PTR_14c72f458,local_78 * 0x20 + 0x3a8 + param_1,
                               local_b8,in_stack_fffffffffffffeb8,param_1 + 0x90);
            if (iVar2 == 1) {
              FUN_14536ce50(lVar8,&local_108);
              (**(code **)(*(longlong *)plVar7[0x11] + 0x10))();
              *(uint *)(param_1 + 0x14) =
                   (*(uint *)(param_1 + 0x14) | *(uint *)(param_1 + 0x10)) & uVar9;
            }
            else {
              (**(code **)(*plVar7 + 0x20))();
              FUN_14536ce10(&local_108);
            }
            local_108 = &PTR_FUN_149c26510;
            local_100 = &PTR_LAB_149c26538;
            FUN_14536ce10(&local_108);
            local_108 = &PTR_FUN_149c264a0;
            local_100 = &PTR_LAB_149c264c8;
            FUN_14536b6e0();
            if (pvStack_90 != (void *)0x0) {
              local_88 = local_88 & 0xffffffff00000000;
              AK::MemoryMgr::Free(0,pvStack_90);
              pvStack_90 = (void *)0x0;
              local_88 = local_88 & 0xffffffff;
            }
            FUN_1453533f0(&local_100);
            local_108 = &PTR_FUN_149c26480;
          }
        }
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0x14);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
LAB_14509f289:
        if (iVar2 == 1) {
          (**(code **)(*local_res20 + 0x18))();
        }
        local_res20 = (longlong *)0x0;
      }
    }
    piVar6 = piVar6 + 1;
    uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
    uVar4 = (uint)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
    plVar7 = plVar7 + 0x12;
    if (3 < (int)uVar4) {
      return;
    }
  } while( true );
}



// FUNCTION 14509f2f0 FUN_14509f2f0 body=907 status=ok
// SIG undefined FUN_14509f2f0(void)

int FUN_14509f2f0(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *local_res8;
  longlong *local_res18;
  longlong *local_res20;
  ulonglong in_stack_fffffffffffffec8;
  undefined1 local_128 [4];
  undefined4 local_124;
  undefined4 local_120;
  undefined2 local_11c;
  undefined1 local_11a;
  undefined4 local_118;
  uint local_114;
  uint local_110;
  undefined **local_108;
  undefined **local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  void *pvStack_90;
  ulonglong local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  
  uVar8 = (ulonglong)param_2;
  local_78 = uVar8 * 0x90 + param_1;
  plVar2 = (longlong *)(local_78 + 0x168);
  (**(code **)(*plVar2 + 0x20))(plVar2);
  FUN_14509f680(param_1,&local_res18,uVar8);
  if (local_res18 == (longlong *)0x0) {
    iVar4 = *(int *)(param_1 + 0x18 + uVar8 * 4);
    if ((iVar4 == 0) && (*(longlong *)(param_1 + 0x440) != 0)) {
      iVar4 = FUN_14536b150(*(longlong *)(param_1 + 0x440),param_2);
    }
    iVar5 = 0xf;
    if (iVar4 == 0) {
      iVar5 = 1;
    }
  }
  else {
    uVar7 = 0;
    plVar6 = local_res18;
    do {
      if ((uVar7 != param_2) &&
         (FUN_14509f680(param_1,&local_res8,uVar7), local_res8 != (longlong *)0x0)) {
        if ((int)local_res8[7] == (int)plVar6[7]) {
          LOCK();
          piVar1 = (int *)((longlong)local_res8 + 0x14);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_res8 + 0x18))();
          }
          iVar5 = 9;
          plVar6 = local_res18;
          goto LAB_14509f649;
        }
        LOCK();
        piVar1 = (int *)((longlong)local_res8 + 0x14);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_res8 + 0x18))();
        }
        local_res8 = (longlong *)0x0;
        plVar6 = local_res18;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 4);
    local_res20 = (longlong *)0x0;
    local_128[0] = 0;
    local_124 = 0;
    local_120 = 1;
    local_11c = 0x100;
    local_11a = 0;
    iVar5 = FUN_145089070((int)plVar6[7],&local_res20,local_128);
    if ((iVar5 == 1) && (local_res20 != (longlong *)0x0)) {
      if ((char)local_11c == '\0') {
        (**(code **)(*local_res20 + 8))(local_res20,&PTR_PTR_14c72f458);
        iVar5 = 4;
      }
      else {
        local_114 = *(uint *)(param_1 + 0x60);
        local_118 = DAT_14c72f42c;
        local_e0 = 0xff;
        local_d8 = 0xff;
        local_b8 = 0;
        uStack_b0 = 0;
        local_110 = (local_114 & 0xff) << 8 | local_110 & 0xfffd0020 | 0x50020;
        local_f8 = 0;
        local_108 = &PTR_FUN_149c26510;
        local_100 = &PTR_LAB_149c26538;
        local_f0 = 0;
        local_e8 = 0;
        local_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_a8 = 0;
        local_a0 = 0;
        local_98 = 0;
        pvStack_90 = (void *)0x0;
        local_88 = 0;
        local_80 = (longlong *)0x0;
        local_70 = 0;
        local_68 = 0;
        local_60 = 0;
        local_58 = 0xff;
        local_50 = 0xff;
        local_48 = 0;
        FUN_14536b850(&local_108,plVar6,&local_70,0,in_stack_fffffffffffffec8 & 0xffffffffffffff00);
        lVar3 = local_78;
        local_80 = local_res20;
        *(undefined8 *)(local_78 + 0x1c0) = uStack_b0;
        iVar5 = (**(code **)(*local_res20 + 0x30))
                          (local_res20,&PTR_PTR_14c72f458,
                           param_1 + 0x3a8 + (ulonglong)param_2 * 0x20,local_b8,&local_118,
                           param_1 + 0x90);
        if (iVar5 == 1) {
          FUN_14536ce50(plVar2,&local_108);
          (**(code **)(**(longlong **)(lVar3 + 0x1f0) + 0x10))();
          iVar5 = 1;
          *(uint *)(param_1 + 0x14) =
               (*(uint *)(param_1 + 0x14) | *(uint *)(param_1 + 0x10)) & 1 << ((byte)param_2 & 0x1f)
          ;
        }
        else {
          (**(code **)(*plVar2 + 0x20))();
          FUN_14536ce10(&local_108);
          iVar5 = 2;
        }
        local_108 = &PTR_FUN_149c26510;
        local_100 = &PTR_LAB_149c26538;
        FUN_14536ce10(&local_108);
        local_108 = &PTR_FUN_149c264a0;
        local_100 = &PTR_LAB_149c264c8;
        FUN_14536b6e0();
        if (pvStack_90 != (void *)0x0) {
          local_88 = local_88 & 0xffffffff00000000;
          AK::MemoryMgr::Free(0,pvStack_90);
          pvStack_90 = (void *)0x0;
          local_88 = local_88 & 0xffffffff;
        }
        FUN_1453533f0(&local_100);
        local_108 = &PTR_FUN_149c26480;
      }
    }
    else if (local_res20 == (longlong *)0x0) {
      iVar5 = 0x34;
    }
LAB_14509f649:
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0x14);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*local_res18 + 0x18))();
    }
  }
  return iVar5;
}



// FUNCTION 14509f680 FUN_14509f680 body=398 status=ok
// SIG undefined FUN_14509f680(void)

longlong * FUN_14509f680(longlong param_1,longlong *param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  longlong *local_res8;
  
  *param_2 = 0;
  lVar5 = DAT_14c791060;
  uVar2 = *(uint *)(param_1 + 0x18 + (ulonglong)param_3 * 4);
  if (uVar2 == 0) {
    if (*(longlong *)(param_1 + 0x440) == 0) {
      return param_2;
    }
    plVar6 = (longlong *)FUN_14536b100(*(longlong *)(param_1 + 0x440),&local_res8);
    plVar4 = (longlong *)*param_2;
    *param_2 = *plVar6;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0x14);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
    *plVar6 = 0;
  }
  else {
    do {
      while (iVar3 = *(int *)(lVar5 + 0x3c8), iVar3 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x3d0));
        if (*(int *)(lVar5 + 0x3c8) < 0) goto LAB_14509f6cb;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x3d0));
      }
      LOCK();
      bVar8 = iVar3 == *(int *)(lVar5 + 0x3c8);
      if (bVar8) {
        *(int *)(lVar5 + 0x3c8) = iVar3 + 1;
      }
      UNLOCK();
    } while (!bVar8);
LAB_14509f6cb:
    if (*(uint *)(lVar5 + 0x410) == 0) {
      lVar7 = 0;
    }
    else {
      for (lVar7 = *(longlong *)
                    (*(longlong *)(lVar5 + 0x408) +
                    ((ulonglong)uVar2 % (ulonglong)*(uint *)(lVar5 + 0x410)) * 8); lVar7 != 0;
          lVar7 = *(longlong *)(lVar7 + 8)) {
        if (*(uint *)(lVar7 + 0x10) == uVar2) goto LAB_14509f700;
      }
      lVar7 = 0;
LAB_14509f700:
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar3 = *(int *)(lVar5 + 0x3c8);
    while (-1 < iVar3) {
      LOCK();
      bVar8 = iVar3 == *(int *)(lVar5 + 0x3c8);
      if (bVar8) {
        *(int *)(lVar5 + 0x3c8) = iVar3 + -1;
      }
      UNLOCK();
      if (bVar8) {
        if ((iVar3 + -1 == 0) && (0 < *(int *)(lVar5 + 0x3f8))) {
          SetEvent(*(HANDLE *)(lVar5 + 0x400));
        }
        goto LAB_14509f764;
      }
      iVar3 = *(int *)(lVar5 + 0x3c8);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x3d0));
LAB_14509f764:
    local_res8 = (longlong *)*param_2;
    *param_2 = lVar7;
  }
  if (local_res8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_res8 + 0x14);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*local_res8 + 0x18))();
    }
  }
  return param_2;
}



// FUNCTION 14509f810 FUN_14509f810 body=120 status=ok
// SIG undefined FUN_14509f810(void)

void FUN_14509f810(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  
  plVar2 = (longlong *)(param_1 + 0x168);
  uVar4 = 0;
  uVar1 = 1;
  do {
    if ((param_2 & uVar1) != 0) {
      (**(code **)(*plVar2 + 0x20))(uVar4 * 0x90 + 0x168 + param_1);
    }
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
    uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
    plVar2 = plVar2 + 0x12;
  } while (uVar3 < 4);
  return;
}



// FUNCTION 14509f890 FUN_14509f890 body=484 status=ok
// SIG undefined FUN_14509f890(void)

void FUN_14509f890(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  bool bVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x1f0);
  if (plVar1 != (longlong *)0x0) {
    if (((*(uint *)(param_1 + 0x10) >> 4 & 1) == 0) && ((*(uint *)(param_1 + 0x10) & 1) == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (((*(uint *)(param_1 + 0x14) >> 4 & 1) == 0) && ((*(uint *)(param_1 + 0x14) & 1) == 0)) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
    else {
      (**(code **)(*(longlong *)(param_1 + 0x168) + 8))();
      (**(code **)(*plVar1 + 0x38))(plVar1,param_2,param_3,param_4,param_5);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x280);
  if (plVar1 != (longlong *)0x0) {
    if (((*(uint *)(param_1 + 0x10) >> 4 & 1) == 0) && ((*(uint *)(param_1 + 0x10) & 2) == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (((*(uint *)(param_1 + 0x14) >> 4 & 1) == 0) && ((*(uint *)(param_1 + 0x14) & 2) == 0)) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
    else {
      (**(code **)(*(longlong *)(param_1 + 0x1f8) + 8))();
      (**(code **)(*plVar1 + 0x38))(plVar1,param_2,param_3,param_4,param_5);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x310);
  if (plVar1 != (longlong *)0x0) {
    if (((*(uint *)(param_1 + 0x10) >> 4 & 1) == 0) && ((*(uint *)(param_1 + 0x10) & 4) == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (((*(uint *)(param_1 + 0x14) >> 4 & 1) == 0) && ((*(uint *)(param_1 + 0x14) & 4) == 0)) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
    else {
      (**(code **)(*(longlong *)(param_1 + 0x288) + 8))();
      (**(code **)(*plVar1 + 0x38))(plVar1,param_2,param_3,param_4,param_5);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x3a0);
  if (plVar1 != (longlong *)0x0) {
    if (((*(uint *)(param_1 + 0x10) >> 4 & 1) == 0) && ((*(uint *)(param_1 + 0x10) & 8) == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (((*(uint *)(param_1 + 0x14) >> 4 & 1) == 0) && ((*(uint *)(param_1 + 0x14) & 8) == 0)) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
    else {
      (**(code **)(*(longlong *)(param_1 + 0x318) + 8))();
      (**(code **)(*plVar1 + 0x38))(plVar1,param_2,param_3,param_4,param_5);
    }
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  return;
}



// FUNCTION 14509fa80 FUN_14509fa80 body=130 status=ok
// SIG undefined FUN_14509fa80(void)

void FUN_14509fa80(longlong param_1,undefined4 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x38) = param_2;
  FUN_14536cdd0(param_1 + 0x448,param_3);
  *(uint *)(param_1 + 0x60) = param_4;
  *(bool *)(param_1 + 0x568) = (param_4 & 0xf00) == 0x300;
  if (*(longlong **)(param_1 + 0x4d0) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x4d0) + 0x58))();
    *(bool *)(param_1 + 0x569) = iVar1 == 1;
    if ((iVar1 == 1) && (*(char *)(param_1 + 0x568) != '\0')) {
      (**(code **)(**(longlong **)(param_1 + 0x4d0) + 0x60))
                (*(longlong **)(param_1 + 0x4d0),param_1 + 0x90);
    }
  }
  return;
}



// FUNCTION 14509fb10 FUN_14509fb10 body=122 status=ok
// SIG undefined FUN_14509fb10(void)

void FUN_14509fb10(longlong param_1)

{
  bool bVar1;
  IAkGlobalPluginContext *pIVar2;
  
  if (DAT_14c79bf80 != (code *)0x0) {
    pIVar2 = AK::SoundEngine::GetGlobalPluginContext();
    (*DAT_14c79bf80)(pIVar2,*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),2,1);
  }
  FUN_1450a0170(param_1,0);
  if (*(int *)(param_1 + 0x560) != 2) {
    *(undefined4 *)(param_1 + 0x560) = 2;
    bVar1 = AK::SoundEngine::IsInitialized();
    if (bVar1) {
      FUN_145073730(DAT_14c790fd8 + 0x90);
      return;
    }
  }
  return;
}



// FUNCTION 14509fb90 FUN_14509fb90 body=398 status=ok
// SIG undefined FUN_14509fb90(void)

void FUN_14509fb90(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      FUN_14509fd20();
    }
    puVar3 = AK::MemoryMgr::Malloc(5,0x58);
    if (puVar3 != (undefined8 *)0x0) {
      lVar4 = 0x90;
      if (*(char *)(param_1 + 0x568) == '\0') {
        lVar4 = 0x60;
      }
      uVar1 = *(undefined4 *)(lVar4 + param_1);
      *puVar3 = &PTR_FUN_149c26650;
      *(undefined1 *)(puVar3 + 5) = 0;
      *(uint *)(puVar3 + 5) = *(uint *)(puVar3 + 5) & 0xff;
      *(undefined8 *)((longlong)puVar3 + 0x2c) = 0x2b;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[7] = 0;
      *(undefined4 *)(puVar3 + 8) = 0xffffffff;
      *(undefined4 *)((longlong)puVar3 + 0x44) = 0x3f800000;
      *(undefined4 *)(puVar3 + 9) = 0xffffffff;
      *(undefined4 *)((longlong)puVar3 + 0x4c) = 1;
      *(undefined2 *)(puVar3 + 6) = DAT_14c72f434;
      *(undefined4 *)(puVar3 + 5) = uVar1;
      FUN_145071750();
      puVar3[10] = 0;
      *puVar3 = &PTR_FUN_149c26670;
      puVar5 = (undefined8 *)FUN_1450b4d90();
      uVar2 = 0x90;
      if (*(char *)(param_1 + 0x568) == '\0') {
        uVar2 = 0x60;
      }
      uVar6 = (**(code **)*puVar5)
                        (puVar5,param_2,DAT_14c72f42c,0x10,1,
                         *(undefined4 *)((ulonglong)uVar2 + param_1));
      puVar3[10] = uVar6;
      *(undefined8 **)(param_1 + 0x78) = puVar3;
      puVar3[1] = 0;
      if (*(longlong *)(param_1 + 0x88) == 0) {
        *(undefined8 **)(param_1 + 0x88) = puVar3;
        *(undefined8 **)(param_1 + 0x80) = puVar3;
        return;
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x80) + 8) = puVar3;
      *(undefined8 **)(param_1 + 0x80) = puVar3;
      return;
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  return;
}



// FUNCTION 14509fd20 FUN_14509fd20 body=169 status=ok
// SIG undefined FUN_14509fd20(void)

void FUN_14509fd20(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
    puVar3 = *(undefined8 **)(param_1 + 0x88);
    if (*(undefined8 **)(param_1 + 0x88) != (undefined8 *)0x0) {
      while (puVar3 != *(undefined8 **)(param_1 + 0x78)) {
        plVar1 = puVar3 + 1;
        puVar2 = puVar3;
        puVar3 = (undefined8 *)*plVar1;
        if ((undefined8 *)*plVar1 == (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x78) = 0;
          return;
        }
      }
      if (puVar3 == *(undefined8 **)(param_1 + 0x88)) {
        *(undefined8 *)(param_1 + 0x88) = puVar3[1];
      }
      else {
        puVar2[1] = puVar3[1];
      }
      if (puVar3 == *(undefined8 **)(param_1 + 0x80)) {
        *(undefined8 **)(param_1 + 0x80) = puVar2;
      }
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,0);
        AK::MemoryMgr::Free(5,puVar3);
      }
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  return;
}



// FUNCTION 14509fdd0 FUN_14509fdd0 body=649 status=ok
// SIG undefined FUN_14509fdd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14509fdd0(longlong param_1,undefined8 *param_2,AkAudioBuffer *param_3,int *param_4,
                  AkAudioBuffer *param_5)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  AkAudioBuffer *pAVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  int iVar11;
  float fVar12;
  undefined1 *local_res8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [32];
  undefined8 uStack_a8;
  float afStack_a0 [2];
  uint local_98 [4];
  float local_88 [24];
  
  puVar8 = auStack_c8;
  fVar12 = 1.0 / (float)*(ushort *)((longlong)param_2 + 0x12);
  uStack_d0 = 0x14509fe44;
  memcpy(*(void **)param_5,(void *)*param_2,
         (ulonglong)((uint)*(byte *)(param_2 + 1) * (uint)*(ushort *)((longlong)param_2 + 0x12)) <<
         2);
  *(undefined2 *)(param_5 + 0x12) = *(undefined2 *)((longlong)param_2 + 0x12);
  if (*(char *)(param_1 + 0x9c) != '\0') {
    uVar7 = (ulonglong)
            (((*(uint *)(param_5 + 8) & 0xff) + 7 >> 3) * (*(uint *)(param_3 + 8) & 0xff) * 0x20);
    uVar6 = uVar7 + 0xf;
    if (uVar6 <= uVar7) {
      uVar6 = 0xffffffffffffff0;
    }
    uStack_d0 = 0x14509fea5;
    lVar10 = -(uVar6 & 0xfffffffffffffff0);
    puVar8 = auStack_c8 + lVar10;
    local_88[0] = 0.0;
    local_88[1] = 0.0;
    local_88[2] = 1.0;
    local_88[3] = 0.0;
    local_88[0x11] = 9.18355e-41;
    pfVar1 = (float *)((longlong)local_88 + lVar10);
    local_88[9] = 1.0;
    *(float **)((longlong)&uStack_a8 + lVar10) = pfVar1;
    local_88[10] = 1.0;
    local_88[0xb] = 9.18341e-41;
    local_88[6] = 0.0;
    local_88[7] = 0.0;
    local_88[8] = 0.0;
    local_88[4] = 1.0;
    local_88[5] = 0.0;
    local_88[0xc] = 1.0;
    local_88[0xd] = 0.0;
    local_88[0xe] = 0.0;
    local_88[0xf] = 0.0;
    local_88[0x10] = 1.0;
    *(undefined8 *)(auStack_c8 + lVar10 + -8) = 0x14509ff0b;
    FUN_1450917d0(local_88);
    *(uint *)((longlong)local_98 + lVar10) = (uint)*(ushort *)(param_3 + 0x12);
    *(float *)((longlong)afStack_a0 + lVar10) = fVar12;
    *(float **)((longlong)&uStack_a8 + lVar10) = pfVar1;
    local_res8 = &DAT_3f8000003f800000;
    *(undefined8 *)(auStack_c8 + lVar10 + -8) = 0x14509ff48;
    AkMixer::MixNinNChannels
              (param_3,param_5,(AkRamp *)&local_res8,pfVar1,
               *(float **)((longlong)&uStack_a8 + lVar10),*(float *)((longlong)afStack_a0 + lVar10),
               *(uint *)((longlong)local_98 + lVar10));
  }
  iVar11 = 0;
  if (0 < *param_4) {
    lVar10 = 0;
    puVar9 = puVar8;
    do {
      uVar2 = *(uint *)(param_5 + 8);
      local_res8 = *(undefined1 **)(lVar10 + *(longlong *)(param_4 + 4));
      pAVar4 = *(AkAudioBuffer **)(lVar10 + *(longlong *)(param_4 + 2));
      uVar3 = *(uint *)(pAVar4 + 8);
      uVar6 = (ulonglong)(((uVar2 & 0xff) + 7 >> 3) * (uVar3 & 0xff) * 0x20);
      uVar7 = uVar6 + 0xf;
      if (uVar7 <= uVar6) {
        uVar7 = 0xffffffffffffff0;
      }
      *(undefined8 *)(puVar9 + -8) = 0x14509ffbd;
      lVar5 = -(uVar7 & 0xfffffffffffffff0);
      pfVar1 = (float *)(puVar9 + lVar5 + 0x40);
      *(float **)(puVar9 + lVar5 + 0x20) = pfVar1;
      *(undefined8 *)(puVar9 + lVar5 + -8) = 0x14509ffda;
      FUN_1450917d0((longlong)local_res8 + 8,uVar3,uVar2,param_1 + 200);
      *(uint *)(puVar9 + lVar5 + 0x30) = (uint)*(ushort *)(pAVar4 + 0x12);
      *(float *)(puVar9 + lVar5 + 0x28) = fVar12;
      *(float **)(puVar9 + lVar5 + 0x20) = pfVar1;
      *(undefined8 *)(puVar9 + lVar5 + -8) = 0x1450a0007;
      AkMixer::MixNinNChannels
                (pAVar4,param_5,(AkRamp *)((longlong)local_res8 + 0x50),pfVar1,
                 *(float **)(puVar9 + lVar5 + 0x20),*(float *)(puVar9 + lVar5 + 0x28),
                 *(uint *)(puVar9 + lVar5 + 0x30));
      iVar11 = iVar11 + 1;
      lVar10 = lVar10 + 8;
      *(undefined2 *)(param_5 + 0x12) = *(undefined2 *)(param_5 + 0x10);
      puVar9 = puVar9 + lVar5;
    } while (iVar11 < *param_4);
  }
  return;
}



// FUNCTION 1450a0060 FUN_1450a0060 body=46 status=ok
// SIG undefined FUN_1450a0060(void)

undefined8 FUN_1450a0060(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x4d0) != 0) {
    FUN_1450902f0(param_1 + 200);
    return 1;
  }
  return 2;
}



// FUNCTION 1450a0090 FUN_1450a0090 body=12 status=ok
// SIG undefined FUN_1450a0090(void)

void FUN_1450a0090(longlong param_1)

{
  FUN_145090370(param_1 + 200);
  return;
}



// FUNCTION 1450a00a0 FUN_1450a00a0 body=150 status=ok
// SIG undefined FUN_1450a00a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1450a00a0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  byte bVar6;
  undefined4 local_res8 [2];
  undefined8 auStack_30 [5];
  
  uVar5 = 0x633;
  bVar6 = 0;
  do {
    bVar6 = bVar6 + 1;
    uVar5 = uVar5 & uVar5 - 1;
  } while (uVar5 != 0);
  uVar3 = (ulonglong)(uint)(bVar6 >> 1) * 4;
  uVar4 = uVar3 + 0xf;
  if (uVar4 <= uVar3) {
    uVar4 = 0xffffffffffffff0;
  }
  auStack_30[0] = 0x1450a00f7;
  lVar2 = -(uVar4 & 0xfffffffffffffff0);
  uVar1 = *(undefined4 *)(param_1 + 0x60);
  *(undefined8 *)((longlong)auStack_30 + lVar2) = 0x1450a010e;
  FUN_1450940a0(uVar1,&stack0xfffffffffffffff8 + lVar2,local_res8);
  *(undefined8 *)((longlong)auStack_30 + lVar2) = 0x1450a0125;
  FUN_145090370(param_1 + 200,&stack0xfffffffffffffff8 + lVar2,(uint)(bVar6 >> 1),local_res8[0]);
  return;
}



// FUNCTION 1450a0140 FUN_1450a0140 body=43 status=ok
// SIG undefined FUN_1450a0140(void)

undefined8 FUN_1450a0140(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_3 = *(undefined4 *)(param_1 + 0x38);
  if (*(char *)(param_1 + 0x567) != '\0') {
    *param_2 = 0;
    return 1;
  }
  *param_2 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  return 1;
}



// FUNCTION 1450a0170 FUN_1450a0170 body=1173 status=ok
// SIG undefined FUN_1450a0170(void)

int FUN_1450a0170(longlong param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  void *pvVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 uVar11;
  bool bVar12;
  longlong *local_res18;
  undefined4 local_f8;
  ulonglong local_f4;
  undefined2 local_ec;
  undefined1 local_e8 [4];
  uint local_e4;
  undefined **local_d8;
  undefined **local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  void *pvStack_60;
  ulonglong local_58;
  longlong *local_50;
  undefined **local_48 [4];
  
  if ((param_2 == 0) && (*(int *)(param_1 + 0x560) == 0)) {
    return 1;
  }
  pvVar6 = AK::MemoryMgr::Malloc(6,0x18);
  if ((pvVar6 == (void *)0x0) ||
     (plVar7 = (longlong *)FUN_1453806a0(pvVar6), plVar7 == (longlong *)0x0)) {
    return 0x34;
  }
  plVar10 = (longlong *)0x0;
  local_d0 = &PTR_LAB_149c26500;
  local_e4 = *(uint *)(param_1 + 0x70);
  local_d8 = &PTR_FUN_149c264d8;
  local_c8 = 0;
  uVar11 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0xff;
  local_a8 = 0xff;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  pvStack_60 = (void *)0x0;
  local_58 = 0;
  local_50 = plVar7;
  FUN_145381c00(local_48);
  if (*(char *)(param_1 + 0x567) == '\0') {
    uVar11 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  }
  *(undefined4 *)(param_1 + 0x430) = uVar11;
  *(undefined4 *)(param_1 + 0x434) = 0xb50007;
  iVar5 = (**(code **)(*plVar7 + 0x30))(plVar7,0,0,local_48,local_e8);
  if (iVar5 != 1) goto LAB_1450a053a;
  FUN_14509f810(param_1,0xffffffff);
  FUN_1450a0830(param_1);
  if ((local_e4 & 0xf00) == 0x300) {
    local_f4 = 0;
    local_f8 = 0;
    local_ec = 0;
    (**(code **)(*plVar7 + 0x60))(plVar7,&local_f8);
    *(undefined2 *)(param_1 + 0x4f0) = DAT_14c72f434;
    *(undefined4 *)(param_1 + 0x4e8) = local_f8;
    iVar5 = FUN_145071750(param_1 + 0x4e0);
    if (iVar5 == 1) {
      if ((char)local_ec != '\0') {
        *(undefined2 *)(param_1 + 0x520) = DAT_14c72f434;
        *(undefined4 *)(param_1 + 0x518) = 0x3102;
        iVar5 = FUN_145071750(param_1 + 0x510);
        if (iVar5 != 1) goto joined_r0x0001450a0405;
      }
      uVar8 = local_f4 & 0xffffffff;
      if ((int)local_f4 != 0) {
        pvVar6 = AK::MemoryMgr::Malloc(5,uVar8 << 3);
        *(void **)(param_1 + 0x548) = pvVar6;
        if (pvVar6 == (void *)0x0) {
          iVar5 = 0x34;
          goto LAB_1450a053a;
        }
        pvVar6 = AK::MemoryMgr::Malloc(5,(local_f4 & 0xffffffff) << 3);
        *(void **)(param_1 + 0x550) = pvVar6;
        if (pvVar6 == (void *)0x0) {
          iVar5 = 0x34;
          goto LAB_1450a053a;
        }
        uVar8 = local_f4 & 0xffffffff;
      }
      iVar5 = FUN_145377570(param_1 + 0xa0,uVar8);
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x4f0) = DAT_14c72f434;
    *(uint *)(param_1 + 0x4e8) = local_e4;
    iVar5 = FUN_145071750(param_1 + 0x4e0);
    if (iVar5 != 1) goto LAB_1450a053a;
    iVar5 = FUN_145377570(param_1 + 0xa0,0);
  }
joined_r0x0001450a0405:
  if (iVar5 == 1) {
    FUN_14509fa80(param_1,0xb50007,&local_d8,local_e4);
    *(int *)(param_1 + 0x560) = param_2;
    lVar4 = DAT_14c791060;
    if (DAT_14c790ff5 != '\0') {
      uVar2 = *(uint *)(param_1 + 100);
      do {
        while (iVar3 = *(int *)(lVar4 + 0x420), iVar3 < 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x428));
          if (*(int *)(lVar4 + 0x420) < 0) goto LAB_1450a0467;
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x428));
        }
        LOCK();
        bVar12 = iVar3 == *(int *)(lVar4 + 0x420);
        if (bVar12) {
          *(int *)(lVar4 + 0x420) = iVar3 + 1;
        }
        UNLOCK();
      } while (!bVar12);
LAB_1450a0467:
      if (*(uint *)(lVar4 + 0x468) != 0) {
        for (plVar7 = *(longlong **)
                       (*(longlong *)(lVar4 + 0x460) +
                       ((ulonglong)uVar2 % (ulonglong)*(uint *)(lVar4 + 0x468)) * 8);
            (plVar9 = plVar10, plVar7 != (longlong *)0x0 &&
            (plVar9 = plVar7, *(uint *)(plVar7 + 2) != uVar2)); plVar7 = (longlong *)plVar7[1]) {
        }
        plVar10 = plVar9;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
          UNLOCK();
        }
      }
      iVar3 = *(int *)(lVar4 + 0x420);
      while (-1 < iVar3) {
        LOCK();
        bVar12 = iVar3 == *(int *)(lVar4 + 0x420);
        if (bVar12) {
          *(int *)(lVar4 + 0x420) = iVar3 + -1;
        }
        UNLOCK();
        if (bVar12) {
          if ((iVar3 + -1 == 0) && (0 < *(int *)(lVar4 + 0x450))) {
            SetEvent(*(HANDLE *)(lVar4 + 0x458));
          }
          goto LAB_1450a0508;
        }
        iVar3 = *(int *)(lVar4 + 0x420);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x428));
LAB_1450a0508:
      local_res18 = plVar10;
      FUN_1450a07c0(param_1,&local_res18);
      if (local_res18 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_res18 + 0x14);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_res18 + 0x18))();
        }
      }
    }
  }
LAB_1450a053a:
  local_d8 = &PTR_FUN_149c264d8;
  local_48[0] = &PTR_FUN_1499d1820;
  local_d0 = &PTR_LAB_149c26500;
  FUN_14536cd90(&local_d8);
  local_d8 = &PTR_FUN_149c264a0;
  local_d0 = &PTR_LAB_149c264c8;
  FUN_14536b6e0();
  if (pvStack_60 != (void *)0x0) {
    local_58 = local_58 & 0xffffffff00000000;
    AK::MemoryMgr::Free(0,pvStack_60);
    pvStack_60 = (void *)0x0;
    local_58 = local_58 & 0xffffffff;
  }
  FUN_1453533f0(&local_d0);
  return iVar5;
}



// FUNCTION 1450a0610 FUN_1450a0610 body=336 status=ok
// SIG undefined FUN_1450a0610(void)

undefined8 FUN_1450a0610(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 local_38 [24];
  undefined1 local_20 [24];
  
  *param_2 = 0;
  uVar5 = *(uint *)(param_1 + 0x60) & 0xf00;
  if ((uVar5 < 0x301) && (((char)*(uint *)(param_1 + 0x60) != '\0' || (uVar5 == 0x300)))) {
    if ((*(char *)(param_1 + 0x564) != '\0') && (*(longlong *)(param_1 + 0x558) == 0)) {
      FUN_145376d40(local_38,*(undefined8 *)(param_1 + 0x30));
      lVar2 = FUN_1450a6a10(local_38);
      *(longlong *)(param_1 + 0x558) = lVar2;
      if (lVar2 == 0) {
        *param_2 = 1;
        pvVar3 = AK::MemoryMgr::Malloc(5,0x1c8);
        if (pvVar3 == (void *)0x0) {
          *(undefined8 *)(param_1 + 0x558) = 0;
          FUN_145376d90(local_38);
          return 0;
        }
        FUN_14537d560(pvVar3);
        *(byte *)((longlong)pvVar3 + 0x1c4) = *(byte *)((longlong)pvVar3 + 0x1c4) & 0xe8;
        *(undefined4 *)((longlong)pvVar3 + 0x1c0) = 0xffffffff;
        *(void **)(param_1 + 0x558) = pvVar3;
        uVar4 = FUN_145376d60(local_20,local_38);
        iVar1 = FUN_1450a8cc0(*(undefined8 *)(param_1 + 0x558),uVar4,0);
        if (iVar1 != 1) {
          pvVar3 = *(void **)(param_1 + 0x558);
          if (pvVar3 != (void *)0x0) {
            FUN_1450a3360(pvVar3);
            AK::MemoryMgr::Free(5,pvVar3);
          }
          *(undefined8 *)(param_1 + 0x558) = 0;
        }
      }
      FUN_145376d90(local_38);
    }
    *(undefined1 *)(param_1 + 0x564) = 1;
  }
  return *(undefined8 *)(param_1 + 0x558);
}



// FUNCTION 1450a0760 FUN_1450a0760 body=93 status=ok
// SIG undefined FUN_1450a0760(void)

void FUN_1450a0760(longlong param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x558);
  if (pvVar1 != (void *)0x0) {
    FUN_1450a3360(pvVar1);
    AK::MemoryMgr::Free(5,pvVar1);
    *(undefined8 *)(param_1 + 0x558) = 0;
    *(undefined1 *)(param_1 + 0x564) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x564) = 1;
  return;
}



// FUNCTION 1450a07c0 FUN_1450a07c0 body=112 status=ok
// SIG undefined FUN_1450a07c0(void)

void FUN_1450a07c0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  uVar3 = *param_2;
  uVar5 = 0;
  *param_2 = 0;
  plVar4 = *(longlong **)(param_1 + 0x440);
  *(undefined8 *)(param_1 + 0x440) = uVar3;
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
  if (*(longlong *)(param_1 + 0x440) != 0) {
    uVar5 = FUN_14536b180();
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  FUN_14509ef20(param_1,0xffffffff);
  return;
}



// FUNCTION 1450a0830 FUN_1450a0830 body=132 status=ok
// SIG undefined FUN_1450a0830(void)

void FUN_1450a0830(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uStack_c;
  
  (**(code **)(*(longlong *)(param_1 + 0x448) + 0x20))();
  FUN_1450a08c0(param_1);
  *(undefined2 *)(param_1 + 0x568) = 0;
  uStack_c = uStack_c & 0xffff0000;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(uint *)(param_1 + 0x9c) = uStack_c;
  plVar3 = *(longlong **)(param_1 + 0x440);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x440) = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 1450a08c0 FUN_1450a08c0 body=219 status=ok
// SIG undefined FUN_1450a08c0(void)

void FUN_1450a08c0(longlong param_1)

{
  FUN_1450718b0((undefined8 *)(param_1 + 0x4e0));
  *(undefined8 *)(param_1 + 0x4ec) = 0x2b;
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  *(undefined4 *)(param_1 + 0x500) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x504) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x508) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50c) = 1;
  FUN_1450718b0((undefined8 *)(param_1 + 0x510));
  *(undefined8 *)(param_1 + 0x510) = 0;
  *(undefined8 *)(param_1 + 0x51c) = 0x2b;
  *(undefined8 *)(param_1 + 0x528) = 0;
  *(undefined4 *)(param_1 + 0x530) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x534) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x538) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x53c) = 1;
  if (*(void **)(param_1 + 0x548) != (void *)0x0) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 0x548));
    *(undefined8 *)(param_1 + 0x548) = 0;
  }
  if (*(void **)(param_1 + 0x550) != (void *)0x0) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 0x550));
    *(undefined8 *)(param_1 + 0x550) = 0;
  }
  FUN_1453775f0(param_1 + 0xa0);
  return;
}



// FUNCTION 1450a09a0 FUN_1450a09a0 body=43 status=ok
// SIG undefined FUN_1450a09a0(void)

undefined8 FUN_1450a09a0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if ((param_2 == *(longlong *)(lVar1 + 0x10)) && (param_3 == *(longlong *)(lVar1 + 0x18))) break;
    lVar1 = *(longlong *)(lVar1 + 8);
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



// FUNCTION 1450a09d0 FUN_1450a09d0 body=118 status=ok
// SIG undefined FUN_1450a09d0(void)

undefined8 *
FUN_1450a09d0(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[2] = param_3;
  param_1[3] = param_4;
  *param_1 = &PTR_FUN_149c26650;
  *(undefined1 *)(param_1 + 5) = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xff;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x2b;
  param_1[4] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 1;
  *(undefined2 *)(param_1 + 6) = DAT_14c72f434;
  *(undefined4 *)(param_1 + 5) = param_2;
  FUN_145071750();
  return param_1;
}



// FUNCTION 1450a0a50 FUN_1450a0a50 body=562 status=ok
// SIG undefined FUN_1450a0a50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1450a0a50(longlong *param_1,AkAudioBuffer *param_2,undefined8 param_3)

{
  float *pfVar1;
  uint uVar2;
  code *pcVar3;
  longlong lVar4;
  ushort uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 auStack_c0 [5];
  undefined8 uStack_98;
  float afStack_90 [2];
  uint local_88 [4];
  void *local_78;
  uint local_70;
  undefined4 local_6c;
  ushort local_68;
  undefined2 local_66;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  if ((short)param_1[6] == *(short *)(param_2 + 0x10)) {
    uVar2 = *(uint *)(param_2 + 8);
    uVar9 = *(uint *)(param_1 + 5);
    if ((((char)uVar2 != (char)uVar9) || (((uVar2 ^ uVar9) & 0xf00) != 0)) ||
       (((uVar2 ^ uVar9) & 0xfffff000) != 0)) goto LAB_1450a0abc;
  }
  else {
LAB_1450a0abc:
    auStack_c0[0] = 0x1450a0acd;
    FUN_1450718b0(param_1 + 4);
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0xc);
    *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 0x10);
    *(undefined2 *)((longlong)param_1 + 0x32) = *(undefined2 *)(param_2 + 0x12);
    auStack_c0[0] = 0x1450a0af6;
    iVar6 = FUN_145071750(param_1 + 4);
    if (iVar6 != 1) goto LAB_1450a0afd;
  }
  uVar2 = *(uint *)(param_1 + 5);
  if ((uVar2 & 0xf00) != 0x200) {
    auStack_c0[0] = 0x1450a0b28;
    (**(code **)(*param_1 + 8))(param_1,param_2,param_3);
    *(undefined2 *)((longlong)param_1 + 0x32) = *(undefined2 *)(param_2 + 0x12);
    return;
  }
  local_70 = *(uint *)(param_2 + 8);
  local_6c = *(undefined4 *)(param_2 + 0xc);
  local_68 = *(ushort *)(param_2 + 0x10);
  local_66 = *(undefined2 *)(param_2 + 0x12);
  local_78 = (void *)0x0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0x3f800000;
  local_50 = 0xffffffff;
  local_4c = 1;
  auStack_c0[0] = 0x1450a0b8d;
  iVar6 = FUN_145071750((AkAudioBuffer *)&local_78);
  uVar5 = local_68;
  if (iVar6 == 1) {
    uVar9 = (uint)local_68;
    auStack_c0[0] = 0x1450a0bb3;
    memset(local_78,0,(ulonglong)((local_70 & 0xff) * uVar9 * 4));
    uVar7 = (ulonglong)(((uVar2 & 0xff) + 7 >> 3) * (uVar2 & 0xff) * 0x20);
    uVar8 = uVar7 + 0xf;
    if (uVar8 <= uVar7) {
      uVar8 = 0xffffffffffffff0;
    }
    auStack_c0[0] = 0x1450a0be3;
    lVar4 = -(uVar8 & 0xfffffffffffffff0);
    pfVar1 = (float *)((longlong)&local_78 + lVar4);
    *(undefined8 *)((longlong)auStack_c0 + lVar4) = 0x1450a0bf5;
    FUN_1450a31c0(uVar2,pfVar1);
    *(uint *)((longlong)local_88 + lVar4) = (uint)uVar5;
    local_res8 = 0x3f800000;
    local_resc = 0x3f800000;
    *(float *)((longlong)afStack_90 + lVar4) = 1.0 / (float)uVar9;
    *(float **)((longlong)&uStack_98 + lVar4) = pfVar1;
    *(undefined8 *)((longlong)auStack_c0 + lVar4) = 0x1450a0c3b;
    AkMixer::MixNinNChannels
              (param_2,(AkAudioBuffer *)&local_78,(AkRamp *)&local_res8,pfVar1,
               *(float **)((longlong)&uStack_98 + lVar4),*(float *)((longlong)afStack_90 + lVar4),
               *(uint *)((longlong)local_88 + lVar4));
    pcVar3 = *(code **)(*param_1 + 8);
    *(undefined8 *)((longlong)auStack_c0 + lVar4) = 0x1450a0c4d;
    (*pcVar3)(param_1,(AkAudioBuffer *)&local_78,param_3);
    *(undefined2 *)((longlong)param_1 + 0x32) = *(undefined2 *)(param_2 + 0x12);
    *(undefined8 *)((longlong)auStack_c0 + lVar4) = 0x1450a0c5f;
    FUN_1450718b0((AkAudioBuffer *)&local_78);
    return;
  }
LAB_1450a0afd:
  *(undefined2 *)((longlong)param_1 + 0x32) = 0;
  return;
}



// FUNCTION 1450a0c90 FUN_1450a0c90 body=18 status=ok
// SIG undefined FUN_1450a0c90(void)

undefined1 FUN_1450a0c90(longlong param_1,longlong param_2,longlong param_3)

{
  if ((param_2 == *(longlong *)(param_1 + 0x10)) && (param_3 == *(longlong *)(param_1 + 0x18))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1450a0cb0 FUN_1450a0cb0 body=66 status=ok
// SIG undefined FUN_1450a0cb0(void)

undefined8 * FUN_1450a0cb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c26650;
  FUN_1450718b0(param_1 + 4);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1450a0d50 FUN_1450a0d50 body=91 status=ok
// SIG undefined FUN_1450a0d50(void)

undefined8 * FUN_1450a0d50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c26670;
  if (param_1[10] != 0) {
    FUN_1450b4760();
  }
  *param_1 = &PTR_FUN_149c26650;
  FUN_1450718b0(param_1 + 4);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1450a0db0 FUN_1450a0db0 body=129 status=ok
// SIG undefined FUN_1450a0db0(void)

undefined8 * FUN_1450a0db0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = AK::MemoryMgr::Malloc(5,0x58);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = 0x90;
    if (*(char *)(param_1 + 0x568) == '\0') {
      lVar2 = 0x60;
    }
    FUN_1450a09d0(puVar1,*(undefined4 *)(lVar2 + param_1),param_2,param_3);
    *puVar1 = &PTR_FUN_149c26698;
    puVar1[10] = *(undefined8 *)(param_1 + 0x30);
  }
  return puVar1;
}



// FUNCTION 1450a0e40 FUN_1450a0e40 body=71 status=ok
// SIG undefined FUN_1450a0e40(void)

undefined4 FUN_1450a0e40(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    return 0x1f;
  }
  *(undefined8 *)(param_2 + 8) = 0;
  if (*(longlong *)(param_1 + 0x88) == 0) {
    *(longlong *)(param_1 + 0x88) = param_2;
    *(longlong *)(param_1 + 0x80) = param_2;
    return 1;
  }
  *(longlong *)(*(longlong *)(param_1 + 0x80) + 8) = param_2;
  *(longlong *)(param_1 + 0x80) = param_2;
  return 1;
}



// FUNCTION 1450a0e90 FUN_1450a0e90 body=42 status=ok
// SIG undefined FUN_1450a0e90(void)

void FUN_1450a0e90(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2,0);
    AK::MemoryMgr::Free(5,param_2);
  }
  return;
}



// FUNCTION 1450a0ec0 FUN_1450a0ec0 body=52 status=ok
// SIG undefined FUN_1450a0ec0(void)

undefined8 FUN_1450a0ec0(undefined8 param_1,ulonglong param_2)

{
  FUN_14509e1a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x570);
  }
  return param_1;
}



// FUNCTION 1450a0f00 FUN_1450a0f00 body=578 status=ok
// SIG undefined FUN_1450a0f00(void)

int FUN_1450a0f00(void)

{
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  HANDLE hProcess;
  DWORD_PTR DVar4;
  void *pvVar5;
  undefined8 *puVar6;
  uint uVar7;
  DWORD local_res8 [2];
  uint local_res10 [2];
  ULONG_PTR local_res18 [2];
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  
  DAT_14c79bf65 = 0;
  DAT_14c79bf68 = 0;
  DAT_14c79bf6c = 0;
  DAT_14c72f2c0 = 1;
  DAT_14c72f2c4 = 0xbf800000;
  DAT_14c79bf78 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  if (DAT_14c79bf78 == (HANDLE)0x0) {
    return 2;
  }
  DAT_14c79bf70 =
       CreateThread((LPSECURITY_ATTRIBUTES)0x0,(ulonglong)DAT_14c79bffc,FUN_1450a2380,(LPVOID)0x0,4,
                    local_res8);
  if (DAT_14c79bf70 == (HANDLE)0x0) {
    DAT_14c79bf70 = (HANDLE)0x0;
    return 2;
  }
  FUN_145073560(DAT_14c79bf70,local_res8[0],"AK Suspended");
  BVar1 = SetThreadPriority(DAT_14c79bf70,DAT_14c79bff4);
  uVar7 = DAT_14c79bff8;
  if ((BVar1 != 0) || (DAT_14c79bff4 == 0x10000)) {
    if (DAT_14c79bff8 != 0) {
      hProcess = GetCurrentProcess();
      BVar1 = GetProcessAffinityMask(hProcess,(PDWORD_PTR)local_res10,local_res18);
      if (BVar1 != 0) {
        uVar7 = uVar7 & local_res10[0];
      }
      DVar4 = SetThreadAffinityMask(DAT_14c79bf70,(ulonglong)uVar7);
      if (DVar4 == 0) goto LAB_1450a0fb9;
    }
    DVar2 = ResumeThread(DAT_14c79bf70);
    if (DVar2 != 0) {
      if (DAT_14c79bf70 == (HANDLE)0x0) {
        return 2;
      }
      local_28 = 0;
      local_1c = 0;
      local_20 = 0;
      local_24 = 0xffffffff;
      pvVar5 = AK::MemoryMgr::Malloc(0,0x570);
      if ((pvVar5 != (void *)0x0) &&
         (puVar6 = (undefined8 *)FUN_14509dc70(pvVar5,&local_28,0xffffffff00000000,1,1),
         puVar6 != (undefined8 *)0x0)) {
        iVar3 = FUN_1450a0170(puVar6,1);
        if (iVar3 == 1) {
          iVar3 = FUN_1450a00a0();
          if (iVar3 != 1) {
            (**(code **)*puVar6)(puVar6,0);
            AK::MemoryMgr::Free(0,puVar6);
            return iVar3;
          }
          if (DAT_14c79bfa0 == (undefined8 *)0x0) {
            DAT_14c79bf98 = puVar6;
            DAT_14c79bfa0 = puVar6;
            puVar6[5] = 0;
            DAT_14c79bf90 = DAT_14c79bf90 + 1;
            return 1;
          }
          puVar6[5] = DAT_14c79bfa0;
          DAT_14c79bf90 = DAT_14c79bf90 + 1;
          DAT_14c79bfa0 = puVar6;
          return 1;
        }
        (**(code **)*puVar6)(puVar6,0);
        AK::MemoryMgr::Free(0,puVar6);
      }
      return 0x34;
    }
  }
LAB_1450a0fb9:
  CloseHandle(DAT_14c79bf70);
  DAT_14c79bf70 = (HANDLE)0x0;
  return 2;
}



// FUNCTION 1450a1150 FUN_1450a1150 body=476 status=ok
// SIG undefined FUN_1450a1150(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1450a1150(void)

{
  IAkGlobalPluginContext *pIVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)0x0;
  puVar2 = DAT_14c79bfa0;
  if (DAT_14c79bfa0 != (undefined8 *)0x0) {
    do {
      if ((puVar4 == (undefined8 *)0x0) && (*(char *)((longlong)puVar2 + 0x565) != '\0')) {
        puVar3 = (undefined8 *)puVar2[5];
        puVar4 = puVar2;
      }
      else {
        if (DAT_14c79bf80 != (code *)0x0) {
          pIVar1 = AK::SoundEngine::GetGlobalPluginContext();
          (*DAT_14c79bf80)(pIVar1,*(undefined4 *)((longlong)puVar2 + 100),
                           *(undefined4 *)(puVar2 + 0xd),1,1);
        }
        puVar3 = (undefined8 *)puVar2[5];
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,0);
          AK::MemoryMgr::Free(0,puVar2);
        }
      }
      puVar2 = puVar3;
    } while (puVar3 != (undefined8 *)0x0);
    if (puVar4 != (undefined8 *)0x0) {
      if (DAT_14c79bf80 != (code *)0x0) {
        pIVar1 = AK::SoundEngine::GetGlobalPluginContext();
        (*DAT_14c79bf80)(pIVar1,*(undefined4 *)((longlong)puVar4 + 100),
                         *(undefined4 *)(puVar4 + 0xd),1,1);
      }
      (**(code **)*puVar4)(puVar4,0);
      AK::MemoryMgr::Free(0,puVar4);
    }
  }
  DAT_14c79bfa0 = (undefined8 *)0x0;
  DAT_14c79bf98 = 0;
  DAT_14c79bf90 = 0;
  DAT_14c72f2cc = 0x3f800000;
  DAT_14c72f2c8 = 0x3f800000;
  if (DAT_14c79bf50 != (void *)0x0) {
    AK::MemoryMgr::Free(0,DAT_14c79bf50);
    DAT_14c79bf50 = (void *)0x0;
  }
  if (DAT_14c79bfc0 != (undefined8 *)0x0) {
    DAT_14c79bfc8 = 0;
    if (DAT_14c79bfc0 != &DAT_14c79bfb0) {
      AK::MemoryMgr::Free(4,DAT_14c79bfc0);
    }
    DAT_14c79bfc0 = (undefined8 *)0x0;
    _DAT_14c79bfcc = 0;
  }
  DAT_14c79bf64 = 0;
  DAT_14c79bf88 = 0;
  if (DAT_14c79bf70 != (HANDLE)0x0) {
    DAT_14c79bf65 = 1;
    SetEvent(DAT_14c79bf78);
    WaitForSingleObject(DAT_14c79bf70,0xffffffff);
    CloseHandle(DAT_14c79bf70);
    DAT_14c79bf70 = (HANDLE)0x0;
  }
  if (DAT_14c79bf78 != (HANDLE)0x0) {
    CloseHandle(DAT_14c79bf78);
  }
  DAT_14c79bf78 = (HANDLE)0x0;
  DAT_14c79bf60 = 0;
  DAT_14c79bf5c = 0;
  return;
}



// FUNCTION 1450a1330 FUN_1450a1330 body=225 status=ok
// SIG undefined FUN_1450a1330(void)

undefined8 FUN_1450a1330(int *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 uVar4;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined1 local_28 [16];
  undefined8 local_18;
  undefined8 local_10;
  
  local_38 = *param_1;
  iStack_34 = param_1[1];
  iStack_30 = param_1[2];
  iStack_2c = param_1[3];
  uVar4 = 0;
  local_18 = 0;
  local_10 = 0;
  if ((param_1[1] == 0) || (local_38 == 0)) {
    FUN_1450a3590(&local_38,&iStack_34);
    uVar4 = 1;
  }
  lVar3 = CONCAT44(iStack_34,local_38);
  lVar1 = DAT_14c79bfa0;
  do {
    if (lVar1 == 0) {
LAB_1450a13ec:
      uVar2 = FUN_1450a2920(lVar3,&local_38,local_28,1,uVar4);
      return uVar2;
    }
    if (*(char *)(lVar1 + 0x565) != '\0') {
      if (*(longlong *)(lVar1 + 0x30) == lVar3) {
        if ((*(int *)(lVar1 + 0x560) != 0) && (*(int *)(lVar1 + 0x38) != 0xb50007)) {
          return 1;
        }
LAB_1450a13e5:
        uVar2 = 0;
      }
      else {
        if ((*(int *)(lVar1 + 0x560) == 0) || (*(int *)(lVar1 + 0x38) == 0xb50007))
        goto LAB_1450a13e5;
        uVar2 = 1;
      }
      FUN_1450a1510(*(longlong *)(lVar1 + 0x30),uVar2);
      goto LAB_1450a13ec;
    }
    lVar1 = *(longlong *)(lVar1 + 0x28);
  } while( true );
}



// FUNCTION 1450a1420 FUN_1450a1420 body=240 status=ok
// SIG undefined FUN_1450a1420(void)

undefined8 FUN_1450a1420(undefined1 (*param_1) [16],undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 local_18 [16];
  
  local_18 = *param_1;
  uVar3 = local_18._4_4_;
  iVar5 = local_18._0_4_;
  if ((*(int *)(*param_1 + 4) == 0) || (iVar5 == 0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  if ((iVar5 == 0) && (lVar1 = DAT_14c79bfa0, uVar3 == 0)) {
    for (; uVar6 = local_18._0_8_, lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x28)) {
      if (*(char *)(lVar1 + 0x565) != '\0') goto LAB_1450a147f;
    }
    lVar1 = 0;
LAB_1450a147f:
    if (lVar1 != 0) {
      return 1;
    }
  }
  else {
    if ((uVar3 == 0) || (iVar5 == 0)) {
      FUN_1450a3590(local_18,local_18 + 4);
      uVar3 = local_18._4_4_;
    }
    for (lVar1 = DAT_14c79bfa0; uVar6 = local_18._0_8_, lVar1 != 0;
        lVar1 = *(longlong *)(lVar1 + 0x28)) {
      if (*(ulonglong *)(lVar1 + 0x30) == ((ulonglong)uVar3 << 0x20 | local_18._0_8_ & 0xffffffff))
      goto LAB_1450a147f;
    }
  }
  uVar2 = FUN_1450a2920((ulonglong)uVar3 << 0x20 | uVar6 & 0xffffffff,local_18,param_2,0,uVar4);
  return uVar2;
}



// FUNCTION 1450a1510 FUN_1450a1510 body=274 status=ok
// SIG undefined FUN_1450a1510(void)

undefined8 FUN_1450a1510(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  IAkGlobalPluginContext *pIVar4;
  
  puVar1 = (undefined8 *)0x0;
  puVar2 = DAT_14c79bfa0;
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      return 2;
    }
    if (puVar2[6] == param_1) break;
    puVar1 = puVar2;
    puVar2 = (undefined8 *)puVar2[5];
  }
  FUN_1450a1bc0(puVar2);
  if (((param_2 != '\0') && (*(int *)(puVar2 + 7) != 0xb50007)) && (DAT_14c79bf80 != (code *)0x0)) {
    pIVar4 = AK::SoundEngine::GetGlobalPluginContext();
    (*DAT_14c79bf80)(pIVar4,*(undefined4 *)((longlong)puVar2 + 100),*(undefined4 *)(puVar2 + 0xd),1,
                     1);
  }
  puVar3 = (undefined8 *)puVar2[5];
  if (puVar2 != DAT_14c79bfa0) {
    puVar1[5] = (undefined8 *)puVar2[5];
    puVar3 = DAT_14c79bfa0;
  }
  DAT_14c79bfa0 = puVar3;
  if (puVar2 == DAT_14c79bf98) {
    DAT_14c79bf98 = puVar1;
  }
  DAT_14c79bf90 = DAT_14c79bf90 + -1;
  (**(code **)*puVar2)(puVar2,0);
  AK::MemoryMgr::Free(0,puVar2);
  FUN_1450a5be0();
  if ((DAT_14c79bf50 != (void *)0x0) && (DAT_14c79bfa0 == (undefined8 *)0x0)) {
    AK::MemoryMgr::Free(0,DAT_14c79bf50);
    DAT_14c79bf50 = (void *)0x0;
  }
  return 1;
}



// FUNCTION 1450a1630 FUN_1450a1630 body=309 status=ok
// SIG undefined FUN_1450a1630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1450a1630(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  bool bVar6;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined1 local_38 [16];
  undefined1 *local_28;
  ulonglong local_20;
  
  uVar4 = 0;
  local_28 = (undefined1 *)0x0;
  local_20 = 0;
  cVar5 = '\0';
  lVar2 = FUN_1450a19c0(param_2);
  if (lVar2 != 0) {
    uVar4 = (ulonglong)*(uint *)(lVar2 + 100);
    FUN_1450a3040(local_38,lVar2 + 0x40);
    cVar5 = *(char *)(lVar2 + 0x565);
    param_2 = *(undefined8 *)(lVar2 + 0x30);
  }
  local_58 = *param_1;
  uStack_54 = param_1[1];
  uStack_50 = param_1[2];
  uStack_4c = param_1[3];
  local_48 = (uint)uVar4;
  uVar1 = local_48;
  uStack_44 = uStack_54;
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  if (*param_1 != 0) {
    local_48 = local_58;
    FUN_14508e700(uVar4);
    uVar4 = (ulonglong)local_48;
    uVar1 = local_58;
  }
  local_58 = uVar1;
  FUN_1450a5be0(1);
  FUN_1450a1510(param_2);
  if (cVar5 != '\0') {
    DAT_14c7910a4 = local_48;
    uRam000000014c7910a8 = uStack_44;
    uRam000000014c7910ac = uStack_40;
    _DAT_14c7910b0 = uStack_3c;
  }
  bVar6 = uStack_54 == 0;
  if (bVar6) {
    FUN_1450a3590(&local_58,&uStack_54);
    uVar4 = (ulonglong)local_58;
  }
  uVar3 = FUN_1450a2920((ulonglong)uStack_54 << 0x20 | uVar4,&local_58,local_38,cVar5,bVar6);
  uVar4 = uVar3;
  if ((local_28 != (undefined1 *)0x0) &&
     (local_20 = local_20 & 0xffffffff00000000, uVar4 = uVar3 & 0xffffffff, local_38 != local_28)) {
    AK::MemoryMgr::Free(4,local_28);
  }
  return uVar4;
}



// FUNCTION 1450a1770 FUN_1450a1770 body=347 status=ok
// SIG undefined FUN_1450a1770(void)

void FUN_1450a1770(void)

{
  ushort uVar1;
  longlong *plVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (DAT_14c79bfa0 != 0) {
    lVar8 = DAT_14c79bfa0;
    do {
      for (plVar2 = *(longlong **)(lVar8 + 0x88); plVar2 != (longlong *)0x0;
          plVar2 = (longlong *)plVar2[1]) {
        cVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (cVar3 != '\0') {
          if ((*(short *)((longlong)plVar2 + 0x32) == 0) && (plVar2[4] != 0)) {
            uVar1 = *(ushort *)(plVar2 + 6);
            uVar4 = *(ushort *)((longlong)plVar2 + 0x32);
            if (uVar1 <= *(ushort *)((longlong)plVar2 + 0x32)) {
              uVar4 = uVar1;
            }
            iVar5 = (uint)uVar1 - (uint)uVar4;
            if (iVar5 != 0) {
              if (*(byte *)(plVar2 + 5) != 0) {
                uVar6 = (ulonglong)*(byte *)(plVar2 + 5);
                lVar7 = 0;
                do {
                  memset((void *)(plVar2[4] +
                                 ((ulonglong)*(ushort *)(plVar2 + 6) * lVar7 +
                                 (ulonglong)(uint)uVar4) * 4),0,(ulonglong)(uint)(iVar5 * 4));
                  lVar7 = lVar7 + 1;
                  uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
              }
              *(short *)((longlong)plVar2 + 0x32) = (short)plVar2[6];
            }
          }
          (**(code **)(*plVar2 + 0x18))(plVar2);
          *(undefined2 *)((longlong)plVar2 + 0x32) = 0;
        }
      }
      if (*(longlong **)(lVar8 + 0x4d0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar8 + 0x4d0) + 0x40))();
      }
      *(undefined4 *)(lVar8 + 0x4d8) = *(undefined4 *)(lVar8 + 0x4dc);
      FUN_145377730(lVar8 + 0xa0);
      *(undefined1 *)(lVar8 + 0x56a) = 0;
      lVar8 = *(longlong *)(lVar8 + 0x28);
    } while (lVar8 != 0);
  }
  DAT_14c72f2c8 = DAT_14c72f2cc;
  return;
}



// FUNCTION 1450a18d0 FUN_1450a18d0 body=7 status=ok
// SIG undefined FUN_1450a18d0(void)

void FUN_1450a18d0(void)

{
  FUN_1450a2420(0);
  return;
}



// FUNCTION 1450a18e0 FUN_1450a18e0 body=218 status=ok
// SIG undefined FUN_1450a18e0(void)

longlong FUN_1450a18e0(int *param_1,int *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  if ((*param_1 == 0) && (lVar2 = DAT_14c79bfa0, *param_2 == 0)) {
    while( true ) {
      if (lVar2 == 0) {
        return 0;
      }
      if (*(char *)(lVar2 + 0x565) != '\0') break;
      lVar2 = *(longlong *)(lVar2 + 0x28);
    }
  }
  else {
    iVar1 = *param_2;
    if ((iVar1 == 0) || (*param_1 == 0)) {
      FUN_1450a3590();
    }
    for (lVar2 = DAT_14c79bfa0; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x28)) {
      if (*(longlong *)(lVar2 + 0x30) == CONCAT44(*param_2,*param_1)) {
        return lVar2;
      }
    }
    if (((iVar1 == 0) && (*param_1 != 0)) && (lVar2 = DAT_14c79bfa0, param_3 != '\0')) {
      for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x28)) {
        if (*(int *)(lVar2 + 100) == *param_1) {
          return lVar2;
        }
      }
    }
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1450a19c0 FUN_1450a19c0 body=150 status=ok
// SIG undefined FUN_1450a19c0(void)

longlong FUN_1450a19c0(ulonglong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint local_res8 [2];
  uint local_res10 [6];
  
  local_res8[0] = (uint)param_1;
  local_res10[0] = (uint)(param_1 >> 0x20);
  if (local_res8[0] == 0) {
    if (local_res10[0] == 0) {
      lVar2 = DAT_14c79bfa0;
      if (DAT_14c79bfa0 == 0) {
        return 0;
      }
      do {
        if (*(char *)(lVar2 + 0x565) != '\0') {
          return lVar2;
        }
        plVar1 = (longlong *)(lVar2 + 0x28);
        lVar2 = *plVar1;
      } while (*plVar1 != 0);
      return 0;
    }
  }
  else if (local_res10[0] != 0) goto LAB_1450a1a22;
  FUN_1450a3590(local_res8,local_res10);
  param_1 = (ulonglong)local_res8[0];
LAB_1450a1a22:
  lVar2 = DAT_14c79bfa0;
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    if (*(ulonglong *)(lVar2 + 0x30) == ((ulonglong)local_res10[0] << 0x20 | param_1 & 0xffffffff))
    break;
    lVar2 = *(longlong *)(lVar2 + 0x28);
  }
  return lVar2;
}



// FUNCTION 1450a1a60 FUN_1450a1a60 body=294 status=ok
// SIG undefined FUN_1450a1a60(void)

longlong FUN_1450a1a60(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    if (DAT_14c79bfa0 != 0) {
      lVar4 = DAT_14c79bfa0;
      do {
        if (*(longlong *)(lVar4 + 0x30) == param_1[1]) {
          return lVar4;
        }
        lVar4 = *(longlong *)(lVar4 + 0x28);
        lVar6 = DAT_14c79bfa0;
      } while (lVar4 != 0);
      do {
        if (*(char *)(lVar6 + 0x565) != '\0') {
          return lVar6;
        }
        lVar6 = *(longlong *)(lVar6 + 0x28);
      } while (lVar6 != 0);
    }
    return 0;
  }
  piVar1 = (int *)(lVar4 + 0x198);
  if (*piVar1 == -1) {
    do {
      lVar4 = *(longlong *)(lVar4 + 0x80);
      if (lVar4 == 0) goto LAB_1450a1aa9;
    } while (*(int *)(lVar4 + 0x198) == -1);
    *piVar1 = *(int *)(lVar4 + 0x198);
  }
LAB_1450a1aa9:
  iVar2 = *piVar1;
  lVar4 = DAT_14c79bfa0;
  do {
    if (lVar4 == 0) {
      return 0;
    }
    if (*(int *)(lVar4 + 100) == iVar2) {
      if (*(char *)(lVar4 + 0x566) == '\0') {
        uVar5 = FUN_145377010(param_1);
        cVar3 = FUN_14509d9e0(lVar4 + 0x40,uVar5);
        if (cVar3 != '\0') {
          return lVar4;
        }
        if (*(int *)(lVar4 + 0x58) == 0) {
          uVar5 = FUN_145377010(param_1);
          cVar3 = FUN_14509d9e0(&DAT_14c79bfb0,uVar5);
          if (cVar3 == '\0') {
            return lVar4;
          }
        }
      }
      else {
        uVar5 = FUN_145377010(param_1);
        cVar3 = FUN_14509d9e0(lVar4 + 0x40,uVar5);
        if (cVar3 != '\0') {
          return lVar4;
        }
      }
    }
    lVar4 = *(longlong *)(lVar4 + 0x28);
  } while( true );
}



// FUNCTION 1450a1b90 FUN_1450a1b90 body=37 status=ok
// SIG undefined FUN_1450a1b90(void)

longlong FUN_1450a1b90(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14c79bfa0;
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(char *)(lVar1 + 0x565) != '\0') break;
    lVar1 = *(longlong *)(lVar1 + 0x28);
  }
  return lVar1;
}



// FUNCTION 1450a1bc0 FUN_1450a1bc0 body=477 status=ok
// SIG undefined FUN_1450a1bc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1450a1bc0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_38 [2];
  ulonglong *local_28;
  undefined8 local_20;
  
  iVar7 = *(int *)(param_1 + 0x58);
  uVar10 = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (iVar7 == 0) {
    return;
  }
  DAT_14c79bfc8 = 0;
  uVar8 = uVar10;
  lVar1 = DAT_14c79bfa0;
  puVar4 = DAT_14c79bfc0;
joined_r0x0001450a1bf6:
  if (lVar1 == 0) {
    return;
  }
  if (param_1 != lVar1) {
    puVar5 = *(ulonglong **)(lVar1 + 0x50);
    uVar9 = uVar10;
    if (puVar4 != puVar4 + uVar8) {
      puVar6 = puVar5 + *(uint *)(lVar1 + 0x58);
      puVar3 = puVar4;
      do {
        if (puVar5 == puVar6) break;
        if (*puVar3 == *puVar5) {
          uVar9 = (ulonglong)((int)uVar9 + 1);
          puVar3 = puVar3 + 1;
LAB_1450a1c5e:
          puVar5 = puVar5 + 1;
        }
        else {
          if (*puVar5 <= *puVar3) goto LAB_1450a1c5e;
          puVar3 = puVar3 + 1;
        }
      } while (puVar3 != puVar4 + uVar8);
    }
    local_28 = (ulonglong *)0x0;
    local_20 = 0;
    iVar7 = (*(int *)(lVar1 + 0x58) - (int)uVar9) + (int)uVar8;
    if (iVar7 == 0) {
LAB_1450a1ca6:
      puVar5 = *(ulonglong **)(lVar1 + 0x50);
      local_20 = CONCAT44(local_20._4_4_,iVar7);
      puVar6 = local_28;
      puVar3 = puVar4;
      do {
        if (puVar5 == (ulonglong *)
                      (*(longlong *)(lVar1 + 0x50) + (ulonglong)*(uint *)(lVar1 + 0x58) * 8)) {
          if (puVar4 == puVar3 + uVar8) goto LAB_1450a1d12;
LAB_1450a1cce:
          uVar8 = *puVar4;
          puVar4 = puVar4 + 1;
        }
        else {
          if (puVar4 == puVar3 + uVar8) {
LAB_1450a1cf4:
            uVar8 = *puVar5;
          }
          else {
            uVar8 = *puVar4;
            uVar9 = *puVar5;
            if (uVar8 >= uVar9 && uVar8 != uVar9) goto LAB_1450a1cf4;
            if (uVar8 < uVar9) goto LAB_1450a1cce;
            puVar4 = puVar4 + 1;
          }
          puVar5 = puVar5 + 1;
        }
        *puVar6 = uVar8;
        puVar6 = puVar6 + 1;
        uVar8 = (ulonglong)DAT_14c79bfc8;
        puVar3 = DAT_14c79bfc0;
      } while( true );
    }
    cVar2 = FUN_1450772c0(local_38,iVar7);
    uVar8 = (ulonglong)DAT_14c79bfc8;
    puVar4 = DAT_14c79bfc0;
    if (cVar2 != '\0') goto LAB_1450a1ca6;
  }
  goto LAB_1450a1d74;
LAB_1450a1d12:
  if ((puVar3 != (ulonglong *)0x0) && (DAT_14c79bfc8 = 0, puVar3 != &DAT_14c79bfb0)) {
    AK::MemoryMgr::Free(4,puVar3);
  }
  if (local_38 == local_28) {
    DAT_14c79bfb0 = local_38[0];
    DAT_14c79bfc0 = &DAT_14c79bfb0;
  }
  else {
    DAT_14c79bfc0 = local_28;
  }
  uVar8 = local_20 & 0xffffffff;
  DAT_14c79bfc8 = (uint)local_20;
  _DAT_14c79bfcc = local_20._4_4_;
  puVar4 = DAT_14c79bfc0;
LAB_1450a1d74:
  lVar1 = *(longlong *)(lVar1 + 0x28);
  goto joined_r0x0001450a1bf6;
}



// FUNCTION 1450a1da0 FUN_1450a1da0 body=358 status=ok
// SIG undefined FUN_1450a1da0(void)

void FUN_1450a1da0(void *param_1)

{
  short *psVar1;
  size_t _Size;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  void *pvVar5;
  ulonglong uVar6;
  
  if (DAT_14c79bf50 != (void *)0x0) {
    return;
  }
  if (DAT_14c79bf88 != 1) {
    return;
  }
  pvVar5 = param_1;
  lVar2 = DAT_14c79bfa0;
  if (param_1 != (void *)0x0) {
    uVar6 = 0xffffffffffffffff;
    do {
      uVar4 = uVar6;
      uVar6 = uVar4 + 1;
    } while (*(short *)((longlong)param_1 + uVar6 * 2) != 0);
    if (uVar6 == 0) {
      return;
    }
    _Size = uVar6 * 2;
    DAT_14c79bf50 = AK::MemoryMgr::Malloc(0,_Size + 4);
    if (DAT_14c79bf50 == (void *)0x0) {
      return;
    }
    memcpy(DAT_14c79bf50,param_1,_Size);
    DAT_14c79bf58 = (uint)uVar4;
    if (DAT_14c79bf58 != 0) {
      uVar4 = uVar4 & 0xffffffff;
      do {
        if (*(char *)((longlong)param_1 + uVar4 * 2) == '.') break;
        DAT_14c79bf58 = DAT_14c79bf58 - 1;
        uVar4 = (ulonglong)DAT_14c79bf58;
      } while (DAT_14c79bf58 != 0);
    }
    memcpy((void *)((longlong)DAT_14c79bf50 + (ulonglong)DAT_14c79bf58 * 2 + 2),
           (void *)((ulonglong)DAT_14c79bf58 * 2 + (longlong)param_1),(uVar6 - DAT_14c79bf58) * 2);
    *(undefined2 *)(_Size + 2 + (longlong)DAT_14c79bf50) = 0;
    *(undefined2 *)((longlong)DAT_14c79bf50 + (ulonglong)DAT_14c79bf58 * 2) = 0x30;
    pvVar5 = DAT_14c79bf50;
    lVar2 = DAT_14c79bfa0;
  }
  for (; DAT_14c79bf50 = pvVar5, lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x28)) {
    pvVar5 = param_1;
    if ((param_1 != (void *)0x0) &&
       (lVar3 = FUN_1450a1b90(), *(longlong *)(lVar2 + 0x30) != *(longlong *)(lVar3 + 0x30))) {
      psVar1 = (short *)((longlong)DAT_14c79bf50 + (ulonglong)DAT_14c79bf58 * 2);
      *psVar1 = *psVar1 + 1;
      pvVar5 = DAT_14c79bf50;
    }
    FUN_14509fb90(lVar2,pvVar5);
    pvVar5 = DAT_14c79bf50;
  }
  return;
}



// FUNCTION 1450a1f10 FUN_1450a1f10 body=212 status=ok
// SIG undefined FUN_1450a1f10(void)

void FUN_1450a1f10(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar1 = DAT_14c79bfa0;
  do {
    if (lVar1 == 0) {
      if (DAT_14c79bf50 != (void *)0x0) {
        AK::MemoryMgr::Free(0,DAT_14c79bf50);
        DAT_14c79bf50 = (void *)0x0;
      }
      return;
    }
    if (*(undefined8 **)(lVar1 + 0x78) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(lVar1 + 0x88);
      puVar3 = (undefined8 *)0x0;
      while (puVar2 = puVar4, puVar2 != (undefined8 *)0x0) {
        if (puVar2 == *(undefined8 **)(lVar1 + 0x78)) {
          if (puVar2 == *(undefined8 **)(lVar1 + 0x88)) {
            *(undefined8 *)(lVar1 + 0x88) = puVar2[1];
          }
          else {
            puVar3[1] = puVar2[1];
          }
          if (puVar2 == *(undefined8 **)(lVar1 + 0x80)) {
            *(undefined8 **)(lVar1 + 0x80) = puVar3;
          }
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,0);
            AK::MemoryMgr::Free(5,puVar2);
          }
          break;
        }
        puVar3 = puVar2;
        puVar4 = (undefined8 *)puVar2[1];
      }
      *(undefined8 *)(lVar1 + 0x78) = 0;
    }
    lVar1 = *(longlong *)(lVar1 + 0x28);
  } while( true );
}



// FUNCTION 1450a1ff0 FUN_1450a1ff0 body=160 status=ok
// SIG undefined FUN_1450a1ff0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1450a1ff0(void *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 auStack_30 [5];
  
  lVar1 = -1;
  do {
    lVar3 = lVar1;
    lVar1 = lVar3 + 1;
  } while (*(char *)((longlong)param_1 + lVar3 + 1) != '\0');
  uVar4 = lVar3 + 0x11;
  if (uVar4 <= lVar3 + 2U) {
    uVar4 = 0xffffffffffffff0;
  }
  auStack_30[0] = 0x1450a203b;
  lVar2 = -(uVar4 & 0xfffffffffffffff0);
  *(undefined8 *)((longlong)auStack_30 + lVar2) = 0x1450a204e;
  memcpy(&stack0xfffffffffffffff8 + lVar2,param_1,lVar3 + 2U);
  for (lVar1 = DAT_14c79bfa0; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x28)) {
    if ((*(longlong *)(lVar1 + 0x78) != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x78) + 0x50), lVar3 != 0)) {
      *(undefined8 *)((longlong)auStack_30 + lVar2) = 0x1450a207a;
      FUN_1450b4880(lVar3,&stack0xfffffffffffffff8 + lVar2);
    }
  }
  return;
}



// FUNCTION 1450a2090 FUN_1450a2090 body=119 status=ok
// SIG undefined FUN_1450a2090(void)

int FUN_1450a2090(undefined1 param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 1;
  for (lVar1 = DAT_14c79bfa0; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x28)) {
    iVar2 = FUN_1450a0170(lVar1,0);
    if ((iVar3 == 1) && (iVar2 != 1)) {
      iVar3 = iVar2;
    }
  }
  FUN_1450a5be0(0);
  DAT_14c79bf64 = iVar3 == 1;
  DAT_14c72f2c0 = param_1;
  SetEvent(DAT_14c79bf78);
  return iVar3;
}



// FUNCTION 1450a2110 FUN_1450a2110 body=41 status=ok
// SIG undefined FUN_1450a2110(void)

void FUN_1450a2110(void)

{
  if (DAT_14c790ff5 == '\0') {
    LOCK();
    DAT_14c79bf5c = DAT_14c79bf5c + 1;
    UNLOCK();
    if (DAT_14c790fd8 != 0) {
      FUN_145073730(DAT_14c790fd8 + 0x90);
      return;
    }
  }
  return;
}



// FUNCTION 1450a2140 FUN_1450a2140 body=24 status=ok
// SIG undefined FUN_1450a2140(void)

undefined1 FUN_1450a2140(void)

{
  if ((DAT_14c79bf68 == 2) && (DAT_14c72f2c0 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 1450a2160 FUN_1450a2160 body=434 status=ok
// SIG undefined FUN_1450a2160(void)

int FUN_1450a2160(byte param_1,char param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = (uint)param_1 * 2 == DAT_14c79bf68;
  if ((bVar4) && (param_2 == DAT_14c72f2c0)) {
    return 3;
  }
  iVar3 = 1;
  if (bVar4) {
    DAT_14c72f2c0 = '\x01';
    if (param_1 != 0) {
      DAT_14c72f2c0 = param_2;
    }
    return 3;
  }
  if ((param_1 == 0) || (DAT_14c79bf68 != 0)) {
    DAT_14c79bf68 = (param_1 ^ 1) * 2 + 1;
  }
  else {
    DAT_14c72f2c4 = DAT_14c72f2cc;
    DAT_14c72f2cc = DAT_14c79bf68;
    DAT_14c79bf68 = 1;
    if ((param_3 != 0) && (param_3 < DAT_14c79c018 * DAT_14c72f428)) {
      param_3 = DAT_14c79c018 * DAT_14c72f428;
    }
  }
  iVar2 = DAT_14c72f2c4;
  DAT_14c79bf6c = param_3;
  if (DAT_14c72f428 <= param_3) {
    DAT_14c72f2c0 = param_2;
    return 3;
  }
  DAT_14c79bf6c = 0;
  if (DAT_14c79bf68 == 1) {
    DAT_14c72f2c0 = param_2;
    iVar3 = FUN_1450a2090(param_2,1);
    if (iVar3 == 1) {
      DAT_14c79bf68 = 2;
      FUN_144d4bb20(0x800);
      return 1;
    }
  }
  else {
    DAT_14c72f2c0 = '\x01';
    DAT_14c72f2c4 = -0x40800000;
    DAT_14c79bf68 = 0;
    DAT_14c72f2cc = iVar2;
    for (lVar1 = DAT_14c79bfa0; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x28)) {
      if (*(int *)(lVar1 + 0x560) != 2) {
        *(undefined4 *)(lVar1 + 0x560) = 2;
        bVar4 = AK::SoundEngine::IsInitialized();
        if (bVar4) {
          FUN_145073730(DAT_14c790fd8 + 0x90);
        }
      }
    }
    FUN_1450a2420(1);
    FUN_144d4bb20(0x1000);
  }
  return iVar3;
}



// FUNCTION 1450a2320 thunk_FUN_1450a19c0 body=5 status=ok
// SIG undefined thunk_FUN_1450a19c0(void)

longlong thunk_FUN_1450a19c0(ulonglong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint auStackX_8 [2];
  uint auStackX_10 [6];
  
  auStackX_8[0] = (uint)param_1;
  auStackX_10[0] = (uint)(param_1 >> 0x20);
  if (auStackX_8[0] == 0) {
    if (auStackX_10[0] == 0) {
      lVar2 = DAT_14c79bfa0;
      if (DAT_14c79bfa0 == 0) {
        return 0;
      }
      do {
        if (*(char *)(lVar2 + 0x565) != '\0') {
          return lVar2;
        }
        plVar1 = (longlong *)(lVar2 + 0x28);
        lVar2 = *plVar1;
      } while (*plVar1 != 0);
      return 0;
    }
  }
  else if (auStackX_10[0] != 0) goto LAB_1450a1a22;
  FUN_1450a3590(auStackX_8,auStackX_10);
  param_1 = (ulonglong)auStackX_8[0];
LAB_1450a1a22:
  lVar2 = DAT_14c79bfa0;
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    if (*(ulonglong *)(lVar2 + 0x30) == ((ulonglong)auStackX_10[0] << 0x20 | param_1 & 0xffffffff))
    break;
    lVar2 = *(longlong *)(lVar2 + 0x28);
  }
  return lVar2;
}



// FUNCTION 1450a2330 FUN_1450a2330 body=76 status=ok
// SIG undefined FUN_1450a2330(void)

void FUN_1450a2330(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  IAkGlobalPluginContext *pIVar1;
  
  if (DAT_14c79bf80 != (code *)0x0) {
    pIVar1 = AK::SoundEngine::GetGlobalPluginContext();
    (*DAT_14c79bf80)(pIVar1,*param_1,param_1[1],param_2,param_3);
  }
  return;
}



// FUNCTION 1450a2380 FUN_1450a2380 body=145 status=ok
// SIG undefined FUN_1450a2380(void)

undefined8 FUN_1450a2380(void)

{
  DWORD dwMilliseconds;
  char cVar1;
  
  dwMilliseconds = DAT_14c72f428;
  AK::MemoryMgr::InitForThread();
  while (DAT_14c79bf65 == '\0') {
    WaitForSingleObject(DAT_14c79bf78,0xffffffff);
    while (DAT_14c79bf64 != '\0') {
      if (DAT_14c79bf65 != '\0') goto LAB_1450a2404;
      cVar1 = FUN_1450a2140();
      if ((cVar1 != '\0') && (DAT_14c790fd8 != 0)) {
        FUN_145073730(DAT_14c790fd8 + 0x90);
      }
      Sleep(dwMilliseconds);
    }
  }
LAB_1450a2404:
  AK::MemoryMgr::TermForThread();
  return 0;
}



// FUNCTION 1450a2420 FUN_1450a2420 body=1277 status=ok
// SIG undefined FUN_1450a2420(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0001450a24ed) */
/* WARNING: Removing unreachable block (ram,0x0001450a24d1) */
/* WARNING: Removing unreachable block (ram,0x0001450a24d6) */
/* WARNING: Removing unreachable block (ram,0x0001450a24da) */

uint FUN_1450a2420(char param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  IAkGlobalPluginContext *pIVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  byte bVar17;
  uint uVar18;
  uint local_res18;
  uint local_res20 [2];
  undefined8 auStack_90 [5];
  undefined4 auStack_68 [4];
  longlong local_58 [3];
  
  uVar1 = DAT_14c72f2c4;
  if ((int)DAT_14c72f428 < 1) {
    DAT_14c72f428 = 10;
  }
  if ((uint)((ulonglong)*(uint *)(DAT_14c790fd8 + 0x88) %
            (1000 / (longlong)(int)DAT_14c72f428 & 0xffffffffU)) < (uint)DAT_14c79c018) {
    param_1 = '\x01';
  }
  if ((DAT_14c79bf6c == 0) && ((DAT_14c79bf68 - 1 & 0xfffffffd) == 0)) {
    uVar18 = 0;
    if (DAT_14c79bf68 == 1) {
      uVar18 = 2;
    }
    if (uVar18 != DAT_14c79bf68) {
      DAT_14c79bf68 = (DAT_14c79bf68 == 1 ^ 1) * 2 + 1;
      DAT_14c79bf6c = 0;
      if (DAT_14c72f428 != 0) {
        if (DAT_14c79bf68 == 1) {
          auStack_90[0] = 0x1450a2544;
          iVar10 = FUN_1450a2090(DAT_14c72f2c0,1);
          if (iVar10 != 1) goto LAB_1450a25cf;
          DAT_14c79bf68 = 2;
          uVar12 = 0x800;
        }
        else {
          DAT_14c72f2c0 = 1;
          DAT_14c72f2c4 = 0xbf800000;
          DAT_14c79bf68 = 0;
          DAT_14c72f2cc = uVar1;
          for (lVar5 = DAT_14c79bfa0; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
            if (*(int *)(lVar5 + 0x560) != 2) {
              *(undefined4 *)(lVar5 + 0x560) = 2;
              auStack_90[0] = 0x1450a2598;
              bVar9 = AK::SoundEngine::IsInitialized();
              if (bVar9) {
                auStack_90[0] = 0x1450a25af;
                FUN_145073730(DAT_14c790fd8 + 0x90);
              }
            }
          }
          auStack_90[0] = 0x1450a25c1;
          FUN_1450a2420(1);
          uVar12 = 0x1000;
        }
        auStack_90[0] = 0x1450a25cb;
        FUN_144d4bb20(uVar12);
      }
    }
  }
LAB_1450a25cf:
  if ((DAT_14c79bf60 != DAT_14c79bf5c) && (DAT_14c79bfa0 != 0)) {
    DAT_14c79bf60 = DAT_14c79bf5c;
    if (DAT_14c79c0b8 != 0) {
      auStack_90[0] = 0x1450a2606;
      FUN_1450a3e90();
    }
    param_1 = '\0';
  }
  cVar7 = DAT_14c79bf64;
  uVar13 = (ulonglong)DAT_14c79bf90 * 8 + 0xf;
  if (uVar13 <= (ulonglong)DAT_14c79bf90 * 8) {
    uVar13 = 0xffffffffffffff0;
  }
  auStack_90[0] = 0x1450a263f;
  lVar6 = -(uVar13 & 0xfffffffffffffff0);
  local_res18 = 0xffffffff;
  uVar18 = 0;
  bVar17 = 1;
  local_res20[0] = 0;
  for (lVar5 = DAT_14c79bfa0; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
    plVar3 = *(longlong **)(lVar5 + 0x4d0);
    iVar10 = *(int *)(lVar5 + 0x560);
    iVar15 = 2;
    iVar16 = iVar15;
    if ((plVar3 != (longlong *)0x0) && (iVar16 = iVar10, DAT_14c79bf68 < 2)) {
      if (iVar10 != 1) {
        iVar16 = iVar15;
      }
      pcVar4 = *(code **)(*plVar3 + 0x38);
      *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x1450a269f;
      iVar10 = (*pcVar4)(plVar3,local_res20);
      if (iVar10 == 2) {
        if (DAT_14c79bf80 != (code *)0x0) {
          *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x1450a26b7;
          pIVar11 = AK::SoundEngine::GetGlobalPluginContext();
          uVar1 = *(undefined4 *)(lVar5 + 0x68);
          uVar2 = *(undefined4 *)(lVar5 + 100);
          *(undefined4 *)((longlong)auStack_68 + lVar6) = 1;
          *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x1450a26cf;
          (*DAT_14c79bf80)(pIVar11,uVar2,uVar1,2);
        }
        *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x1450a26d9;
        FUN_1450a0170(lVar5,0);
        iVar16 = iVar15;
        if (*(int *)(lVar5 + 0x560) != 2) {
          *(undefined4 *)(lVar5 + 0x560) = 2;
          *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x1450a26ed;
          bVar9 = AK::SoundEngine::IsInitialized();
          if (bVar9) {
            *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x1450a2704;
            FUN_145073730(DAT_14c790fd8 + 0x90);
          }
        }
      }
    }
    if (((*(char *)(lVar5 + 0x565) == '\0') || (*(int *)(lVar5 + 0x560) == 0)) ||
       (*(int *)(lVar5 + 0x38) == 0xb50007)) {
      bVar14 = 1;
    }
    else {
      bVar14 = 0;
    }
    if (iVar16 == 1) {
LAB_1450a27e7:
      uVar8 = local_res18;
      if ((bVar14 == 0) && (uVar8 = local_res20[0], local_res18 < local_res20[0])) {
        uVar8 = local_res18;
      }
      local_res18 = uVar8;
      bVar17 = bVar17 & bVar14;
    }
    else if ((iVar16 == 2) && (param_1 != '\0')) {
      if (DAT_14c790ff5 == '\0') {
        *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x1450a276a;
        iVar10 = FUN_14509e5b0(lVar5);
      }
      else {
        *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x1450a2763;
        iVar10 = FUN_1450a0170(lVar5,1);
      }
      if (iVar10 == 1) {
        if (DAT_14c79bf80 != (code *)0x0) {
          *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x1450a27a2;
          pIVar11 = AK::SoundEngine::GetGlobalPluginContext();
          uVar1 = *(undefined4 *)(lVar5 + 0x68);
          uVar2 = *(undefined4 *)(lVar5 + 100);
          *(undefined4 *)((longlong)auStack_68 + lVar6) = 1;
          *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x1450a27ba;
          (*DAT_14c79bf80)(pIVar11,uVar2,uVar1,0);
        }
        *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x1450a27c6;
        FUN_145087e30(DAT_14c790fd8);
        uVar13 = (ulonglong)uVar18;
        uVar18 = uVar18 + 1;
        *(longlong *)((longlong)local_58 + uVar13 * 8 + lVar6) = lVar5;
        plVar3 = *(longlong **)(lVar5 + 0x4d0);
        pcVar4 = *(code **)(*plVar3 + 0x38);
        *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x1450a27e2;
        iVar10 = (*pcVar4)(plVar3,local_res20);
        if (iVar10 == 1) goto LAB_1450a27e7;
      }
      else {
        *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x1450a277c;
        FUN_14509f810(lVar5,0xffffffff);
        *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x1450a2786;
        FUN_1450a0170(lVar5,0);
        uVar13 = (ulonglong)uVar18;
        uVar18 = uVar18 + 1;
        *(longlong *)((longlong)local_58 + uVar13 * 8 + lVar6) = lVar5;
      }
    }
  }
  if (DAT_14c79bf90 == 0) {
    DAT_14c79bf64 = bVar17;
    return 0;
  }
  DAT_14c79bf64 = bVar17;
  if (bVar17 == 0) {
    if ((cVar7 != '\0') && (DAT_14c79bf68 == 0)) {
      pcVar4 = *(code **)(**(longlong **)(DAT_14c79bfa0 + 0x4d0) + 0x38);
      *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x1450a2898;
      (*pcVar4)();
    }
LAB_1450a2898:
    if (uVar18 != 0) {
      *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x1450a28a4;
      FUN_1450a5be0(0);
    }
    uVar18 = DAT_14c79bf6c;
    if (local_res18 != 0) {
      if (local_res18 * DAT_14c72f428 < DAT_14c79bf6c) {
        DAT_14c79bf6c = DAT_14c79bf6c - local_res18 * DAT_14c72f428;
      }
      else if (DAT_14c79bf68 == 1) {
        DAT_14c79bf6c = 0;
        local_res18 = 1;
        if (1 < uVar18 / DAT_14c72f428) {
          local_res18 = uVar18 / DAT_14c72f428;
        }
      }
      else if (DAT_14c79bf68 == 3) {
        DAT_14c79bf6c = 0;
      }
    }
  }
  else {
    if (*(longlong **)(DAT_14c79bfa0 + 0x4d0) != (longlong *)0x0) {
      pcVar4 = *(code **)(**(longlong **)(DAT_14c79bfa0 + 0x4d0) + 0x38);
      *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x1450a284d;
      iVar10 = (*pcVar4)();
      if (iVar10 == 1) {
        if (cVar7 == '\0') {
          *(undefined8 *)((longlong)auStack_90 + lVar6) = 0x1450a2863;
          FUN_1450a2090(1);
          local_res18 = 0;
        }
        goto LAB_1450a2898;
      }
    }
    DAT_14c79bf60 = DAT_14c79bf60 + -1;
    local_res18 = 0;
  }
  return local_res18;
}



// FUNCTION 1450a2920 FUN_1450a2920 body=621 status=ok
// SIG undefined FUN_1450a2920(void)

int FUN_1450a2920(undefined8 param_1,int *param_2,undefined8 param_3,char param_4,undefined1 param_5
                 )

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  IAkGlobalPluginContext *pIVar7;
  
  iVar3 = 0x34;
  pvVar4 = AK::MemoryMgr::Malloc(0,0x570);
  if (pvVar4 == (void *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)FUN_14509dc70(pvVar4,param_2,param_1,param_4,param_5);
    if (puVar5 != (undefined8 *)0x0) {
      if (DAT_14c790ff5 == '\0') {
LAB_1450a29b0:
        iVar2 = FUN_14509e5b0(puVar5);
        puVar6 = puVar5;
        iVar3 = 0x34;
        switch(iVar2) {
        case 1:
          goto switchD_1450a29d5_caseD_1;
        default:
switchD_1450a29d5_caseD_2:
          uVar1 = 0;
          goto LAB_1450a2a3a;
        case 4:
        case 0xf:
        case 0x58:
          goto switchD_1450a29d5_caseD_4;
        case 0x34:
          goto switchD_1450a29d5_caseD_34;
        case 0x5a:
          break;
        }
      }
      uVar1 = 1;
LAB_1450a2a3a:
      iVar3 = FUN_1450a0170(puVar5,uVar1);
      puVar6 = puVar5;
      if (iVar3 != 1) {
switchD_1450a29d5_caseD_34:
        (**(code **)*puVar5)(puVar5,0);
        AK::MemoryMgr::Free(0,puVar5);
        puVar5 = puVar6;
      }
      if (iVar3 == 1) {
switchD_1450a29d5_caseD_1:
        iVar3 = FUN_1450a2c40(puVar5,param_3);
        if ((iVar3 != 1) && (puVar5 != (undefined8 *)0x0)) {
          (**(code **)*puVar5)(puVar5,0);
          AK::MemoryMgr::Free(0,puVar5);
        }
      }
    }
  }
  if ((param_4 != '\0') && (DAT_14c79bf88 == 0)) {
    if ((iVar3 == 1) && (*(int *)(DAT_14c79bfa0 + 100) == *param_2)) {
      DAT_14c79bf88 = 1;
      goto LAB_1450a2ae9;
    }
    DAT_14c79bf88 = 2;
  }
  if ((iVar3 - 1U & 0xfffffffd) != 0) {
    if (DAT_14c79bf80 != (code *)0x0) {
      pIVar7 = AK::SoundEngine::GetGlobalPluginContext();
      (*DAT_14c79bf80)(pIVar7,*param_2,param_2[1],0,iVar3);
    }
    return iVar3;
  }
LAB_1450a2ae9:
  FUN_14509d940(puVar5 + 8,param_3);
  FUN_1450a3040(&DAT_14c79bfb0,puVar5 + 8);
  FUN_1450a5be0(0);
  if (DAT_14c79bf80 != (code *)0x0) {
    pIVar7 = AK::SoundEngine::GetGlobalPluginContext();
    (*DAT_14c79bf80)(pIVar7,*(undefined4 *)((longlong)puVar5 + 100),*(undefined4 *)(puVar5 + 0xd),0,
                     1);
  }
  return 1;
switchD_1450a29d5_caseD_4:
  puVar6 = (undefined8 *)FUN_1450a2c10(0xe611314a);
  if (puVar6 != (undefined8 *)0x0) {
    iVar3 = 3;
    goto switchD_1450a29d5_caseD_34;
  }
  if (*(int *)((longlong)puVar5 + 100) == -0x19eeceb6) goto switchD_1450a29d5_caseD_2;
  FUN_14508e700(*(int *)((longlong)puVar5 + 100),0xe611314a);
  *(undefined4 *)((longlong)puVar5 + 100) = 0xe611314a;
  FUN_1450a3590((longlong)puVar5 + 100,puVar5 + 0xd);
  puVar5[6] = *(undefined8 *)((longlong)puVar5 + 100);
  if (iVar2 == 1) goto switchD_1450a29d5_caseD_1;
  goto LAB_1450a29b0;
}



// FUNCTION 1450a2c10 FUN_1450a2c10 body=37 status=ok
// SIG undefined FUN_1450a2c10(void)

longlong FUN_1450a2c10(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14c79bfa0;
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(lVar1 + 100) == -0x19eeceb6) break;
    lVar1 = *(longlong *)(lVar1 + 0x28);
  }
  return lVar1;
}



// FUNCTION 1450a2c40 FUN_1450a2c40 body=1021 status=ok
// SIG undefined FUN_1450a2c40(void)

undefined8 FUN_1450a2c40(longlong param_1,longlong param_2)

{
  longlong lVar1;
  short *psVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong *puVar7;
  __uint64 _Var8;
  ulonglong *puVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong *puVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong local_48 [2];
  ulonglong *local_38;
  undefined8 local_30;
  
  uVar3 = FUN_1450a00a0();
  lVar6 = DAT_14c79bfa0;
  if ((int)uVar3 == 1) {
    for (; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x28)) {
      if (*(int *)(lVar6 + 100) == *(int *)(param_1 + 100)) {
        if ((*(char *)(lVar6 + 0x566) == '\0') && (*(int *)(lVar6 + 0x58) == 0)) {
          return 0x61;
        }
        if (*(int *)(param_2 + 0x18) == 0) {
          return 0x61;
        }
        uVar11 = *(uint *)(lVar6 + 0x58);
        uVar14 = (ulonglong)uVar11;
        local_38 = (ulonglong *)0x0;
        local_30 = 0;
        if (uVar11 == 0) {
LAB_1450a2d34:
          local_30 = CONCAT44(local_30._4_4_,uVar11);
          uVar10 = 0;
          if (*(int *)(lVar6 + 0x58) != 0) {
            do {
              uVar11 = (int)uVar10 + 1;
              local_38[uVar10] = *(ulonglong *)(uVar10 * 8 + *(longlong *)(lVar6 + 0x50));
              uVar10 = (ulonglong)uVar11;
            } while (uVar11 < *(uint *)(lVar6 + 0x58));
            goto LAB_1450a2d64;
          }
        }
        else {
          if (uVar14 * 8 < 9) {
            puVar5 = local_48;
LAB_1450a2d2c:
            local_38 = puVar5;
            local_30 = (ulonglong)uVar11 << 0x20;
            goto LAB_1450a2d34;
          }
          puVar5 = AK::MemoryMgr::Malign(4,uVar14 * 8,0x10);
          if (puVar5 != (ulonglong *)0x0) {
            if (((local_38 != (ulonglong *)0x0) && (local_38 != puVar5)) && (local_48 != local_38))
            {
              AK::MemoryMgr::Free(4,local_38);
            }
            goto LAB_1450a2d2c;
          }
LAB_1450a2d64:
          uVar14 = local_30 & 0xffffffff;
        }
        puVar7 = *(ulonglong **)(param_2 + 0x10);
        puVar4 = local_38;
        puVar9 = local_38;
        puVar5 = local_38;
        puVar12 = puVar7;
        if (local_38 != local_38 + uVar14) {
          do {
            if (puVar7 == puVar12 + *(uint *)(param_2 + 0x18)) break;
            uVar10 = *puVar4;
            if (uVar10 == *puVar7) {
              if (puVar9 != puVar4) {
                *puVar9 = uVar10;
                puVar12 = *(ulonglong **)(param_2 + 0x10);
                uVar14 = local_30 & 0xffffffff;
                puVar5 = local_38;
              }
              puVar9 = puVar9 + 1;
              puVar4 = puVar4 + 1;
LAB_1450a2dc0:
              puVar7 = puVar7 + 1;
            }
            else {
              if (*puVar7 <= uVar10) goto LAB_1450a2dc0;
              puVar4 = puVar4 + 1;
            }
          } while (puVar4 != puVar5 + uVar14);
        }
        uVar10 = (longlong)puVar9 - (longlong)puVar5 >> 3;
        uVar13 = (uint)uVar14;
        uVar11 = (uint)uVar10;
        if ((uVar13 <= uVar11) && (local_30._4_4_ < uVar11)) {
          _Var8 = (uVar10 & 0xffffffff) << 3;
          if (puVar5 == (ulonglong *)0x0) {
            if (_Var8 < 9) {
              puVar5 = local_48;
              puVar7 = (ulonglong *)0x0;
            }
            else {
              puVar5 = AK::MemoryMgr::Malign(4,_Var8,0x10);
              puVar7 = local_38;
              if (puVar5 == (ulonglong *)0x0) goto LAB_1450a2e3e;
            }
            if ((puVar7 != (ulonglong *)0x0) && (puVar7 != puVar5)) {
              uVar10 = 0;
              if (uVar13 != 0) {
                do {
                  puVar5[uVar10] = puVar7[uVar10];
                  uVar10 = uVar10 + 1;
                  puVar7 = local_38;
                } while (uVar10 < uVar14);
              }
              if (local_48 != puVar7) {
                AK::MemoryMgr::Free(4,puVar7);
              }
            }
LAB_1450a2f7a:
            local_30 = CONCAT44(uVar11,(uint)local_30);
            local_38 = puVar5;
          }
          else if (_Var8 < 9) {
            local_30 = CONCAT44(uVar11,(uint)local_30);
            puVar5 = local_48;
            local_38 = local_48;
          }
          else {
            if (local_48 == puVar5) {
              puVar5 = AK::MemoryMgr::Malign(4,_Var8,0x10);
              if (puVar5 != (ulonglong *)0x0) {
                memcpy(puVar5,local_48,(ulonglong)(uVar13 * 8));
                local_30 = CONCAT44(uVar11,(uint)local_30);
                local_38 = puVar5;
                goto LAB_1450a2e45;
              }
            }
            else {
              puVar5 = AK::MemoryMgr::ReallocAligned(4,puVar5,_Var8,0x10);
              if (puVar5 != (ulonglong *)0x0) goto LAB_1450a2f7a;
            }
LAB_1450a2e3e:
            puVar5 = local_38;
            uVar11 = (uint)local_30;
          }
        }
LAB_1450a2e45:
        if ((puVar5 != (ulonglong *)0x0) &&
           (local_30 = local_30 & 0xffffffff00000000, local_48 != puVar5)) {
          AK::MemoryMgr::Free(4,puVar5);
        }
        if (uVar11 != 0) {
          return 0x61;
        }
        *(undefined1 *)(lVar6 + 0x566) = 1;
        *(undefined1 *)(param_1 + 0x566) = 1;
      }
    }
    if (*(char *)(param_1 + 0x565) == '\0') {
      *(undefined8 *)(param_1 + 0x28) = 0;
      lVar6 = param_1;
      lVar1 = param_1;
      if (DAT_14c79bfa0 != 0) {
        *(longlong *)(DAT_14c79bf98 + 0x28) = param_1;
        lVar6 = param_1;
        lVar1 = DAT_14c79bfa0;
      }
    }
    else if (DAT_14c79bfa0 == 0) {
      DAT_14c79bf98 = param_1;
      DAT_14c79bfa0 = param_1;
      *(undefined8 *)(param_1 + 0x28) = 0;
      lVar6 = DAT_14c79bf98;
      lVar1 = DAT_14c79bfa0;
    }
    else {
      *(longlong *)(param_1 + 0x28) = DAT_14c79bfa0;
      lVar6 = DAT_14c79bf98;
      lVar1 = param_1;
    }
    DAT_14c79bfa0 = lVar1;
    DAT_14c79bf98 = lVar6;
    DAT_14c79bf90 = DAT_14c79bf90 + 1;
    if (DAT_14c79bf50 != 0) {
      lVar6 = -1;
      do {
        lVar1 = lVar6 * 2;
        lVar6 = lVar6 + 1;
      } while (*(short *)(DAT_14c79bf50 + 2 + lVar1) != 0);
      psVar2 = (short *)(DAT_14c79bf50 + -10 + lVar6 * 2);
      *psVar2 = *psVar2 + 1;
      FUN_14509fb90(param_1,DAT_14c79bf50);
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1450a3040 FUN_1450a3040 body=372 status=ok
// SIG undefined FUN_1450a3040(void)

undefined8 FUN_1450a3040(ulonglong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  int iVar7;
  ulonglong local_28 [2];
  ulonglong *local_18;
  undefined8 local_10;
  
  puVar6 = (ulonglong *)param_1[2];
  iVar7 = 0;
  puVar3 = *(ulonglong **)(param_2 + 0x10);
  puVar5 = puVar6 + (uint)param_1[3];
  if (puVar6 != puVar5) {
    puVar1 = puVar3 + *(uint *)(param_2 + 0x18);
    do {
      if (puVar3 == puVar1) break;
      if (*puVar6 == *puVar3) {
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 1;
LAB_1450a3098:
        puVar3 = puVar3 + 1;
      }
      else {
        if (*puVar3 <= *puVar6) goto LAB_1450a3098;
        puVar6 = puVar6 + 1;
      }
    } while (puVar6 != puVar5);
  }
  local_10 = 0;
  iVar7 = ((uint)param_1[3] - iVar7) + *(int *)(param_2 + 0x18);
  local_18 = (ulonglong *)0x0;
  if ((iVar7 == 0) || (uVar4 = FUN_1450772c0(local_28,iVar7), (char)uVar4 != '\0')) {
    puVar5 = (ulonglong *)param_1[2];
    puVar6 = *(ulonglong **)(param_2 + 0x10);
    puVar3 = local_18;
LAB_1450a30e0:
    while( true ) {
      puVar1 = (ulonglong *)param_1[2];
      if (puVar6 == (ulonglong *)
                    (*(longlong *)(param_2 + 0x10) + (ulonglong)*(uint *)(param_2 + 0x18) * 8))
      break;
      if (puVar5 == puVar1 + (uint)param_1[3]) {
LAB_1450a3144:
        uVar2 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar3 = uVar2;
        puVar3 = puVar3 + 1;
      }
      else {
        uVar2 = *puVar5;
        if (*puVar6 < uVar2) goto LAB_1450a3144;
        if (uVar2 < *puVar6) goto LAB_1450a3106;
        puVar5 = puVar5 + 1;
        *puVar3 = uVar2;
        puVar6 = puVar6 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    if (puVar5 != puVar1 + (uint)param_1[3]) {
LAB_1450a3106:
      uVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar3 = uVar2;
      puVar3 = puVar3 + 1;
      goto LAB_1450a30e0;
    }
    local_10._0_4_ = iVar7;
    if (puVar1 != (ulonglong *)0x0) {
      *(undefined4 *)(param_1 + 3) = 0;
      if (param_1 != puVar1) {
        AK::MemoryMgr::Free(4,puVar1);
      }
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    if (local_28 == local_18) {
      *param_1 = local_28[0];
      local_18 = param_1;
    }
    param_1[2] = (ulonglong)local_18;
    *(int *)(param_1 + 3) = (int)local_10;
    *(undefined4 *)((longlong)param_1 + 0x1c) = local_10._4_4_;
    uVar4 = CONCAT71((uint7)(uint3)((uint)local_10._4_4_ >> 8),1);
  }
  return uVar4;
}



// FUNCTION 1450a31c0 FUN_1450a31c0 body=409 status=ok
// SIG undefined FUN_1450a31c0(void)

void FUN_1450a31c0(byte param_1,void *param_2)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  ulonglong uVar10;
  float *pfVar11;
  
  uVar7 = (uint)param_1;
  uVar8 = param_1 + 7 >> 3;
  iVar3 = uVar8 * param_1;
  if (iVar3 != 0) {
    memset(param_2,0,(ulonglong)(uint)(iVar3 * 8) << 2);
  }
  uVar6 = 0;
  uVar10 = uVar6;
  if (param_1 < 0x10) {
    if (param_1 < 4) {
      if (param_1 == 0) {
        return;
      }
      goto LAB_1450a331c;
    }
  }
  else {
    uVar7 = 0x10;
  }
  iVar3 = 2;
  do {
    iVar4 = (int)uVar6;
    uVar5 = iVar4 + 4;
    uVar6 = (ulonglong)uVar5;
    bVar2 = (&DAT_149c263c1)[uVar10];
    fVar1 = (float)(&DAT_149c263dc)[uVar10];
    *(float *)((longlong)param_2 +
              ((ulonglong)(byte)(&DAT_149c263c0)[uVar10] + (ulonglong)(uVar8 * iVar4 * 8)) * 4) =
         0.70710677 / (float)(&DAT_149c263d0)[uVar10];
    *(float *)((longlong)param_2 + ((ulonglong)((iVar3 + -1) * uVar8 * 8) + (ulonglong)bVar2) * 4) =
         0.70710677 / (float)(&DAT_149c263d4)[uVar10];
    pfVar11 = (float *)(&DAT_149c263d8 + uVar10);
    pbVar9 = &DAT_149c263c2 + uVar10;
    bVar2 = (&DAT_149c263c3)[uVar10];
    uVar10 = uVar10 + 4;
    *(float *)((longlong)param_2 + ((ulonglong)*pbVar9 + (ulonglong)(iVar3 * uVar8 * 8)) * 4) =
         0.70710677 / *pfVar11;
    iVar4 = iVar3 + 1;
    iVar3 = iVar3 + 4;
    *(float *)((longlong)param_2 + ((ulonglong)(iVar4 * uVar8 * 8) + (ulonglong)bVar2) * 4) =
         0.70710677 / fVar1;
  } while (uVar5 < uVar7 - 3);
  if (uVar7 <= uVar5) {
    return;
  }
LAB_1450a331c:
  pbVar9 = &DAT_149c263c0 + uVar10;
  pfVar11 = (float *)(&DAT_149c263d0 + uVar10);
  do {
    bVar2 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    iVar3 = (int)uVar6;
    uVar5 = iVar3 + 1;
    uVar6 = (ulonglong)uVar5;
    *(float *)((longlong)param_2 + ((ulonglong)(uVar8 * iVar3 * 8) + (ulonglong)bVar2) * 4) =
         0.70710677 / *pfVar11;
    pfVar11 = pfVar11 + 1;
  } while (uVar5 < uVar7);
  return;
}



// FUNCTION 1450a3360 FUN_1450a3360 body=394 status=ok
// SIG undefined FUN_1450a3360(void)

void FUN_1450a3360(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if ((*(longlong *)(param_1 + 0x38) == 0) &&
     ((lVar3 = *(longlong *)(param_1 + 0x70), lVar3 == 0 || (*(longlong *)(lVar3 + 0x80) == 0)))) {
    if (lVar3 == 0) {
      if (*(longlong *)(param_1 + 0x78) != 0) {
        lVar4 = DAT_14c79bfa0;
        if (DAT_14c79bfa0 != 0) {
          do {
            lVar3 = lVar4;
            if (*(longlong *)(lVar4 + 0x30) == *(longlong *)(param_1 + 0x78)) goto LAB_1450a33e9;
            lVar4 = *(longlong *)(lVar4 + 0x28);
            lVar3 = DAT_14c79bfa0;
          } while (lVar4 != 0);
          do {
            if (*(char *)(lVar3 + 0x565) != '\0') goto LAB_1450a33e9;
            lVar3 = *(longlong *)(lVar3 + 0x28);
          } while (lVar3 != 0);
        }
        lVar3 = 0;
LAB_1450a33e9:
        if ((lVar3 != 0) &&
           ((*(longlong *)(lVar3 + 0x558) == param_1 || (*(longlong *)(lVar3 + 0x558) == 0)))) {
          *(undefined1 *)(lVar3 + 0x564) = 0;
          *(undefined8 *)(lVar3 + 0x558) = 0;
        }
      }
    }
    else {
      lVar4 = lVar3;
      if (*(int *)(lVar3 + 0x198) == -1) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x80);
          if (lVar4 == 0) goto LAB_1450a345d;
        } while (*(int *)(lVar4 + 0x198) == -1);
        *(int *)(lVar3 + 0x198) = *(int *)(lVar4 + 0x198);
      }
LAB_1450a345d:
      iVar1 = *(int *)(lVar3 + 0x198);
      for (lVar3 = DAT_14c79bfa0; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x28)) {
        if (*(int *)(lVar3 + 100) == iVar1) {
          if (*(char *)(lVar3 + 0x566) == '\0') {
            uVar5 = FUN_145377010(param_1 + 0x70);
            cVar2 = FUN_14509d9e0(lVar3 + 0x40,uVar5);
            if (cVar2 != '\0') goto LAB_1450a33e9;
            if (*(int *)(lVar3 + 0x58) == 0) {
              uVar5 = FUN_145377010(param_1 + 0x70);
              cVar2 = FUN_14509d9e0(&DAT_14c79bfb0,uVar5);
              if (cVar2 == '\0') goto LAB_1450a33e9;
            }
          }
          else {
            uVar5 = FUN_145377010(param_1 + 0x70);
            cVar2 = FUN_14509d9e0(lVar3 + 0x40,uVar5);
            if (cVar2 != '\0') goto LAB_1450a33e9;
          }
        }
      }
    }
  }
  FUN_14537d590(param_1);
  return;
}



// FUNCTION 1450a3540 FUN_1450a3540 body=66 status=ok
// SIG undefined FUN_1450a3540(void)

undefined8 * FUN_1450a3540(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c26650;
  FUN_1450718b0(param_1 + 4);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1450a3590 FUN_1450a3590 body=447 status=ok
// SIG undefined FUN_1450a3590(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1450a3590(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  AKRESULT AVar2;
  uint local_res8 [2];
  AkDeviceDescription local_2998 [524];
  undefined4 local_278c;
  char local_2788 [528];
  undefined4 local_2578;
  undefined1 local_2574;
  undefined4 local_2364;
  undefined1 local_2360;
  undefined4 local_2150;
  undefined1 local_214c;
  undefined4 local_1f3c;
  undefined1 local_1f38;
  undefined4 local_1d28;
  undefined1 local_1d24;
  undefined4 local_1b14;
  undefined1 local_1b10;
  undefined4 local_1900;
  undefined1 local_18fc;
  undefined4 local_16ec;
  undefined1 local_16e8;
  undefined4 local_14d8;
  undefined1 local_14d4;
  undefined4 local_12c4;
  undefined1 local_12c0;
  undefined4 local_10b0;
  undefined1 local_10ac;
  undefined4 local_e9c;
  undefined1 local_e98;
  undefined4 local_c88;
  undefined1 local_c84;
  undefined4 local_a74;
  undefined1 local_a70;
  undefined4 local_860;
  undefined1 local_85c;
  undefined4 local_64c;
  undefined1 local_648;
  undefined4 local_438;
  undefined1 local_434;
  undefined4 local_224;
  undefined1 local_220;
  ulonglong local_10;
  
  local_10 = 0x1450a35b2;
  *param_2 = 0;
  uVar1 = *param_1;
  if (uVar1 == 0) {
    uVar1 = AK::SoundEngine::GetIDFromString("System");
    *param_1 = uVar1;
  }
  local_278c = 0;
  local_2788[0] = '\0';
  local_2578 = 0;
  local_2574 = 0;
  local_2364 = 0;
  local_2360 = 0;
  local_2150 = 0;
  local_214c = 0;
  local_1f3c = 0;
  local_1f38 = 0;
  local_1d28 = 0;
  local_1d24 = 0;
  local_1b14 = 0;
  local_1b10 = 0;
  local_1900 = 0;
  local_18fc = 0;
  local_16ec = 0;
  local_16e8 = 0;
  local_14d8 = 0;
  local_14d4 = 0;
  local_12c4 = 0;
  local_12c0 = 0;
  local_10b0 = 0;
  local_10ac = 0;
  local_e9c = 0;
  local_e98 = 0;
  local_c88 = 0;
  local_c84 = 0;
  local_a74 = 0;
  local_a70 = 0;
  local_860 = 0;
  local_85c = 0;
  local_64c = 0;
  local_648 = 0;
  local_438 = 0;
  local_434 = 0;
  local_224 = 0;
  local_220 = 0;
  local_10 = local_10 & 0xffffff0000000000;
  local_res8[0] = 0x14;
  AVar2 = AK::SoundEngine::GetDeviceList(uVar1,local_res8,local_2998);
  if ((AVar2 == 1) && (local_res8[0] != 0)) {
    uVar1 = 0;
    do {
      if (local_2788[(ulonglong)uVar1 * 0x214] != '\0') break;
      uVar1 = uVar1 + 1;
    } while (uVar1 < local_res8[0]);
    if (uVar1 == local_res8[0]) {
      uVar1 = 0;
    }
    *param_2 = *(undefined4 *)(local_2998 + (ulonglong)uVar1 * 0x214);
  }
  return;
}



// FUNCTION 1450a3750 FUN_1450a3750 body=311 status=ok
// SIG undefined FUN_1450a3750(void)

longlong * FUN_1450a3750(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  LPCWSTR local_res8;
  byte local_118 [259];
  undefined1 local_15;
  
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  *param_2 = 0;
  (**(code **)(*(longlong *)*param_1 + 0x20))((longlong *)*param_1,0,param_3,param_2);
  plVar2 = (longlong *)*param_2;
  if (plVar2 != (longlong *)0x0) {
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
    local_res8 = (LPCWSTR)0x0;
    iVar4 = (**(code **)(*plVar2 + 0x28))(plVar2,&local_res8);
    if (iVar4 == 0) {
      lVar9 = -1;
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (local_res8[lVar5] != L'\0');
      if ((uint)lVar5 < 0x102) {
        do {
          lVar9 = lVar9 + 1;
        } while (local_res8[lVar9] != L'\0');
      }
      else {
        lVar9 = 0x102;
      }
      iVar4 = WideCharToMultiByte(0xfde9,0,local_res8,(int)lVar9,(LPSTR)local_118,0x103,(LPCSTR)0x0,
                                  (LPBOOL)0x0);
      pbVar1 = local_118;
      uVar8 = 0x811c9dc5;
      local_118[iVar4] = 0;
      local_15 = 0;
      while (local_118[0] != 0) {
        uVar3 = (uint)local_118[0];
        bVar7 = local_118[0] + 0xbf;
        pbVar1 = pbVar1 + 1;
        local_118[0] = *pbVar1;
        uVar6 = uVar3 + 0x20 & 0xff;
        if (0x19 < bVar7) {
          uVar6 = uVar3;
        }
        uVar8 = uVar8 * 0x1000193 ^ uVar6;
      }
      *(uint *)(param_2 + 1) = uVar8;
      CoTaskMemFree(local_res8);
    }
  }
  return param_2;
}



// FUNCTION 1450a3890 FUN_1450a3890 body=528 status=ok
// SIG undefined FUN_1450a3890(void)

undefined8 * FUN_1450a3890(void)

{
  LPVOID *ppv;
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  puVar3 = AK::MemoryMgr::Malloc(5,0x78);
  if (puVar3 != (undefined8 *)0x0) {
    ppv = (LPVOID *)(puVar3 + 4);
    puVar3[2] = 0;
    *puVar3 = &PTR_LAB_149c266d0;
    puVar3[1] = &PTR_FUN_149c26710;
    puVar3[3] = 0;
    *ppv = (LPVOID)0x0;
    CoCreateInstance((IID *)&DAT_14ab423d0,(LPUNKNOWN)0x0,0x17,(IID *)&DAT_14ab423c0,ppv);
    puVar3[5] = 0;
    puVar3[6] = 0;
    *(undefined4 *)(puVar3 + 7) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x3c) = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar3 + 8));
    *(undefined4 *)(puVar3 + 0xd) = 1;
    *(undefined1 *)((longlong)puVar3 + 0x6c) = 0;
    puVar3[6] = 0x20;
    *(undefined4 *)(puVar3 + 0xe) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x74) = 0;
    *(undefined4 *)(puVar3 + 7) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x3c) = 0;
    pvVar4 = AK::MemoryMgr::Malloc(0,(ulonglong)*(uint *)(puVar3 + 6) << 4);
    puVar3[5] = pvVar4;
    if (*ppv != (LPVOID)0x0) {
      FUN_1450a4390(puVar3);
      (**(code **)(*(longlong *)*ppv + 0x30))(*ppv,puVar3);
      return puVar3;
    }
    *puVar3 = &PTR_LAB_149c266d0;
    puVar3[1] = &PTR_FUN_149c26710;
    LOCK();
    *(undefined4 *)(puVar3 + 0xe) = 1;
    UNLOCK();
    iVar2 = *(int *)((longlong)puVar3 + 0x74);
    while (iVar2 != 0) {
      Sleep(1);
      iVar2 = *(int *)((longlong)puVar3 + 0x74);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(puVar3 + 8));
    plVar5 = (longlong *)puVar3[2];
    if (plVar5 != (longlong *)0x0) {
      plVar6 = plVar5 + (ulonglong)*(uint *)(puVar3 + 3) * 2;
      for (; plVar5 != plVar6; plVar5 = plVar5 + 2) {
        if ((longlong *)*plVar5 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar5 + 0x10))();
          *plVar5 = 0;
        }
      }
      *(undefined4 *)(puVar3 + 3) = 0;
      AK::MemoryMgr::Free(0,(void *)puVar3[2]);
      puVar3[2] = 0;
      *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
    }
    iVar2 = *(int *)((longlong)puVar3 + 0x3c);
    while (iVar2 != 0) {
      pvVar4 = *(void **)((ulonglong)*(uint *)((longlong)puVar3 + 0x34) * 0x10 + puVar3[5]);
      if (pvVar4 != (void *)0x0) {
        AK::MemoryMgr::Free(5,pvVar4);
      }
      *(uint *)((longlong)puVar3 + 0x34) =
           (*(int *)((longlong)puVar3 + 0x34) + 1U) % *(uint *)(puVar3 + 6);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0x3c);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
    }
    puVar3[6] = 0;
    *(undefined4 *)(puVar3 + 7) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x3c) = 0;
    if ((void *)puVar3[5] != (void *)0x0) {
      AK::MemoryMgr::Free(0,(void *)puVar3[5]);
      puVar3[5] = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(puVar3 + 8));
    DeleteCriticalSection((LPCRITICAL_SECTION)(puVar3 + 8));
    if (*ppv != (longlong *)0x0) {
      (**(code **)(*(longlong *)*ppv + 0x10))();
      *ppv = (LPVOID)0x0;
    }
    AK::MemoryMgr::Free(5,puVar3);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1450a3b00 FUN_1450a3b00 body=55 status=ok
// SIG undefined FUN_1450a3b00(void)

undefined4 FUN_1450a3b00(void *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((longlong)param_1 + 0x68);
  *piVar1 = *piVar1 + -1;
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x68);
  if (*piVar1 == 0) {
    FUN_1450a4950(param_1,0);
    AK::MemoryMgr::Free(5,param_1);
  }
  return uVar2;
}



// FUNCTION 1450a3b40 FUN_1450a3b40 body=22 status=ok
// SIG undefined FUN_1450a3b40(void)

undefined8 FUN_1450a3b40(undefined8 param_1,undefined8 param_2)

{
  FUN_1450a4740(param_1,param_2,2);
  return 0;
}



// FUNCTION 1450a3b60 FUN_1450a3b60 body=19 status=ok
// SIG undefined FUN_1450a3b60(void)

undefined8 FUN_1450a3b60(undefined8 param_1,undefined8 param_2)

{
  FUN_1450a4740(param_1,param_2,0);
  return 0;
}



// FUNCTION 1450a3b80 FUN_1450a3b80 body=22 status=ok
// SIG undefined FUN_1450a3b80(void)

undefined8 FUN_1450a3b80(undefined8 param_1,undefined8 param_2)

{
  FUN_1450a4740(param_1,param_2,1);
  return 0;
}



// FUNCTION 1450a3ba0 FUN_1450a3ba0 body=86 status=ok
// SIG undefined FUN_1450a3ba0(void)

undefined8 FUN_1450a3ba0(undefined8 param_1,int param_2,int param_3,undefined8 param_4)

{
  if (param_2 == 0) {
    if (param_3 == 1) {
      FUN_1450a4740(param_1,param_4,3);
      return 0;
    }
    if (param_3 == 0) {
      FUN_1450a4740(param_1,param_4,4);
      return 0;
    }
    if (param_3 == 2) {
      FUN_1450a4740(param_1,param_4,5);
    }
  }
  return 0;
}



// FUNCTION 1450a3c00 FUN_1450a3c00 body=243 status=ok
// SIG undefined FUN_1450a3c00(void)

undefined8 FUN_1450a3c00(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3[2];
  if (iVar1 == 0) {
    if ((*param_3 == 0x4e27082cf19f064d) && (param_3[1] == 0x4c8ebba1826873bc)) goto LAB_1450a3cdd;
  }
  else if (((iVar1 == 3) && (*param_3 == 0x4cd23cc5e4870e26)) && (param_3[1] == 0x4ed709a0aca46ba))
  goto LAB_1450a3cdd;
  if (((*param_3 != 0x4c4c2e503d6e1656) || ((param_3[1] != 0x686c3caeacd0858d || (1 < iVar1 - 2U))))
     && ((*param_3 != 0x4cd23cc5e4870e26 || ((param_3[1] != 0x4ed709a0aca46ba || (iVar1 != 0)))))) {
    if (*param_3 != 0x473efd24624f56de) {
      return 0;
    }
    if (param_3[1] != 0x16edcaaa40de4a81) {
      return 0;
    }
    if (iVar1 != 3) {
      return 0;
    }
  }
LAB_1450a3cdd:
  FUN_1450a4740(param_1,param_2,2);
  return 0;
}



// FUNCTION 1450a3d00 FUN_1450a3d00 body=51 status=ok
// SIG undefined FUN_1450a3d00(void)

undefined4 FUN_1450a3d00(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return uVar1;
}



// FUNCTION 1450a3d40 FUN_1450a3d40 body=132 status=ok
// SIG undefined FUN_1450a3d40(void)

longlong * FUN_1450a3d40(longlong param_1,longlong *param_2,uint param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if (param_3 < *(uint *)(param_1 + 0x10)) {
    plVar2 = (longlong *)((ulonglong)param_3 * 0x10 + *(longlong *)(param_1 + 8));
    *param_2 = 0;
    plVar1 = (longlong *)*plVar2;
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(int *)(param_2 + 1) = (int)plVar2[1];
  }
  else {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return param_2;
}



// FUNCTION 1450a3df0 FUN_1450a3df0 body=145 status=ok
// SIG undefined FUN_1450a3df0(void)

longlong * FUN_1450a3df0(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  uVar2 = FUN_1450a46c0(param_1 + -8,param_3);
  if (uVar2 == 0xffffffff) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
  }
  else {
    plVar3 = (longlong *)((ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 8));
    *param_2 = 0;
    plVar1 = (longlong *)*plVar3;
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(int *)(param_2 + 1) = (int)plVar3[1];
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return param_2;
}



// FUNCTION 1450a3e90 FUN_1450a3e90 body=1068 status=ok
// SIG undefined FUN_1450a3e90(void)

void FUN_1450a3e90(longlong param_1)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  int local_res8 [2];
  uint local_res10 [2];
  int local_res18 [2];
  uint local_res20 [2];
  longlong *local_150;
  byte local_148 [259];
  undefined1 local_45;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  if (*(char *)(param_1 + 0x6c) != '\0') {
    FUN_1450a4600(param_1);
    FUN_1450a4390(param_1);
    *(undefined1 *)(param_1 + 0x6c) = 0;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    do {
      puVar10 = (undefined8 *)
                ((ulonglong)*(uint *)(param_1 + 0x34) * 0x10 + *(longlong *)(param_1 + 0x28));
      local_150 = (longlong *)0x0;
      uVar5 = 0;
      if ((wchar_t *)*puVar10 != (wchar_t *)0x0) {
        uVar5 = AK::SoundEngine::GetIDFromString((wchar_t *)*puVar10);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))
                  (*(longlong **)(param_1 + 0x20),*puVar10,&local_150);
        AK::MemoryMgr::Free(5,(void *)*puVar10);
      }
      switch(*(undefined4 *)(puVar10 + 1)) {
      case 0:
        uVar5 = *(uint *)(param_1 + 0x18);
        if ((uVar5 < *(uint *)(param_1 + 0x1c)) ||
           ((cVar4 = FUN_1450a4820(param_1 + 0x10), cVar4 != '\0' &&
            (uVar5 < *(uint *)(param_1 + 0x1c))))) {
          plVar11 = local_150;
          uVar5 = *(uint *)(param_1 + 0x18);
          *(uint *)(param_1 + 0x18) = uVar5 + 1;
          plVar13 = (longlong *)((ulonglong)uVar5 * 0x10 + *(longlong *)(param_1 + 0x10));
          if (plVar13 != (longlong *)0x0) {
            *plVar13 = 0;
            *(undefined4 *)(plVar13 + 1) = 0xffffffff;
            if ((longlong *)*plVar13 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*plVar13 + 0x10))();
            }
            *plVar13 = (longlong)plVar11;
            *(undefined4 *)(plVar13 + 1) = 0xffffffff;
            if ((plVar11 != (longlong *)0x0) &&
               (iVar6 = (**(code **)(*plVar11 + 0x28))(plVar11), iVar6 == 0)) {
              lVar12 = -1;
              do {
                lVar12 = lVar12 + 1;
              } while (*(short *)(lVar12 * 2) != 0);
              if ((uint)lVar12 < 0x102) {
                lVar12 = -1;
                do {
                  lVar12 = lVar12 + 1;
                } while (*(short *)(lVar12 * 2) != 0);
              }
              else {
                lVar12 = 0x102;
              }
              iVar6 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)0x0,(int)lVar12,(LPSTR)local_148,0x103,
                                          (LPCSTR)0x0,(LPBOOL)0x0);
              pbVar1 = local_148;
              uVar5 = 0x811c9dc5;
              local_148[iVar6] = 0;
              local_45 = 0;
              bVar3 = local_148[0];
              while (bVar3 != 0) {
                uVar7 = (uint)bVar3;
                bVar9 = bVar3 + 0xbf;
                pbVar1 = pbVar1 + 1;
                bVar3 = *pbVar1;
                uVar8 = uVar7 + 0x20 & 0xff;
                if (0x19 < bVar9) {
                  uVar8 = uVar7;
                }
                uVar5 = uVar5 * 0x1000193 ^ uVar8;
              }
              *(uint *)(plVar13 + 1) = uVar5;
              CoTaskMemFree((LPVOID)0x0);
            }
            if ((longlong *)*plVar13 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*plVar13 + 8))();
            }
          }
        }
        break;
      case 1:
        uVar7 = FUN_1450a46c0(param_1);
        lVar12 = DAT_14c79bfa0;
        if (uVar7 != 0xffffffff) {
          plVar13 = (longlong *)
                    (*(longlong *)(param_1 + 0x10) + -0x10 +
                    (ulonglong)*(uint *)(param_1 + 0x18) * 0x10);
          plVar11 = (longlong *)((ulonglong)uVar7 * 0x10 + *(longlong *)(param_1 + 0x10));
          if (plVar11 < plVar13) {
            if ((longlong *)*plVar11 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*plVar11 + 0x10))();
              *plVar11 = 0;
            }
            *plVar11 = *plVar13;
            *(int *)(plVar11 + 1) = (int)plVar13[1];
            *plVar13 = 0;
          }
          lVar12 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x10 + *(longlong *)(param_1 + 0x10);
          plVar11 = *(longlong **)(lVar12 + -0x10);
          if (plVar11 != (longlong *)0x0) {
            (**(code **)(*plVar11 + 0x10))();
            *(undefined8 *)(lVar12 + -0x10) = 0;
          }
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
          lVar12 = DAT_14c79bfa0;
        }
        for (; lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x28)) {
          if ((uint)((ulonglong)*(undefined8 *)(lVar12 + 0x30) >> 0x20) == uVar5) {
            FUN_14509fb10(lVar12);
          }
        }
        break;
      case 2:
        for (lVar12 = DAT_14c79bfa0; lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x28)) {
          if ((uint)((ulonglong)*(undefined8 *)(lVar12 + 0x30) >> 0x20) == uVar5) {
            FUN_14509fb10(lVar12);
          }
        }
        break;
      case 3:
      case 4:
        for (lVar12 = DAT_14c79bfa0; lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x28)) {
          FUN_1450a0140(lVar12,local_res18,local_res20);
          if ((local_res18[0] == 0) && ((local_res20[0] & 0xffff0000) == 0xae0000)) {
            FUN_14509fb10(lVar12);
          }
        }
        break;
      case 5:
        for (lVar12 = DAT_14c79bfa0; lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x28)) {
          FUN_1450a0140(lVar12,local_res8,local_res10);
          if ((local_res8[0] == 0) && ((local_res10[0] & 0xffff0000) == 0xb00000)) {
            FUN_14509fb10(lVar12);
          }
        }
      }
      if (local_150 != (longlong *)0x0) {
        (**(code **)(*local_150 + 0x10))();
      }
      *(uint *)(param_1 + 0x34) = (*(int *)(param_1 + 0x34) + 1U) % *(uint *)(param_1 + 0x30);
      LOCK();
      piVar2 = (int *)(param_1 + 0x3c);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
    } while (*piVar2 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001450a42b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  return;
}



// FUNCTION 1450a42e0 FUN_1450a42e0 body=129 status=ok
// SIG undefined FUN_1450a42e0(void)

undefined8 FUN_1450a42e0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  int local_res8 [2];
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  local_res8[0] = 4;
  uVar2 = FUN_1450a46c0(param_1,param_2);
  if (uVar2 != 0xffffffff) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar2 * 0x10);
    (**(code **)(*plVar1 + 0x30))(plVar1,local_res8);
  }
  if ((local_res8[0] == 1) || (local_res8[0] == 8)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  return uVar3;
}



// FUNCTION 1450a4370 FUN_1450a4370 body=27 status=ok
// SIG undefined FUN_1450a4370(void)

undefined8 FUN_1450a4370(longlong param_1,undefined8 param_2)

{
  FUN_1450a3750(param_1 + 0x20);
  return param_2;
}



// FUNCTION 1450a4390 FUN_1450a4390 body=619 status=ok
// SIG undefined FUN_1450a4390(void)

void FUN_1450a4390(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  byte bVar10;
  int iVar11;
  longlong *plVar12;
  LPCWSTR local_res8;
  longlong *local_158;
  uint local_150;
  longlong *local_148;
  int local_140 [2];
  byte local_138 [259];
  undefined1 local_35;
  
  iVar11 = 0;
  local_148 = (longlong *)0x0;
  local_140[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))
            (*(longlong **)(param_1 + 0x20),0,0xf,&local_148);
  plVar9 = local_148;
  plVar4 = local_148;
  if (local_148 != (longlong *)0x0) {
    (**(code **)(*local_148 + 0x18))(local_148,local_140);
    plVar9 = local_148;
    plVar4 = local_148;
  }
  for (; (plVar4 != plVar9 || (iVar11 != local_140[0])); iVar11 = iVar11 + 1) {
    uVar3 = *(uint *)(param_1 + 0x18);
    if ((uVar3 < *(uint *)(param_1 + 0x1c)) ||
       ((cVar5 = FUN_1450a4820(param_1 + 0x10), plVar9 = local_148, cVar5 != '\0' &&
        (uVar3 < *(uint *)(param_1 + 0x1c))))) {
      uVar3 = *(uint *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x18) = uVar3 + 1;
      plVar12 = (longlong *)((ulonglong)uVar3 * 0x10 + *(longlong *)(param_1 + 0x10));
      if (plVar12 != (longlong *)0x0) {
        *plVar12 = 0;
        *(undefined4 *)(plVar12 + 1) = 0xffffffff;
        local_158 = (longlong *)0x0;
        local_150 = 0xffffffff;
        (**(code **)(*plVar4 + 0x20))(plVar4,iVar11,&local_158);
        if (local_158 != (longlong *)0x0) {
          local_150 = 0xffffffff;
          local_res8 = (LPCWSTR)0x0;
          iVar6 = (**(code **)(*local_158 + 0x28))(local_158,&local_res8);
          if (iVar6 == 0) {
            lVar7 = -1;
            do {
              lVar7 = lVar7 + 1;
            } while (local_res8[lVar7] != L'\0');
            if ((uint)lVar7 < 0x102) {
              lVar7 = -1;
              do {
                lVar7 = lVar7 + 1;
              } while (local_res8[lVar7] != L'\0');
            }
            else {
              lVar7 = 0x102;
            }
            iVar6 = WideCharToMultiByte(0xfde9,0,local_res8,(int)lVar7,(LPSTR)local_138,0x103,
                                        (LPCSTR)0x0,(LPBOOL)0x0);
            pbVar1 = local_138;
            local_150 = 0x811c9dc5;
            local_138[iVar6] = 0;
            local_35 = 0;
            bVar2 = local_138[0];
            while (bVar2 != 0) {
              uVar3 = (uint)bVar2;
              bVar10 = bVar2 + 0xbf;
              pbVar1 = pbVar1 + 1;
              bVar2 = *pbVar1;
              uVar8 = uVar3 + 0x20 & 0xff;
              if (0x19 < bVar10) {
                uVar8 = uVar3;
              }
              local_150 = local_150 * 0x1000193 ^ uVar8;
            }
            CoTaskMemFree(local_res8);
          }
        }
        plVar9 = (longlong *)*plVar12;
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
        *(uint *)(plVar12 + 1) = local_150;
        *plVar12 = (longlong)local_158;
        local_158 = (longlong *)0x0;
        plVar9 = local_148;
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x10))();
  }
  return;
}



// FUNCTION 1450a4600 FUN_1450a4600 body=185 status=ok
// SIG undefined FUN_1450a4600(void)

undefined4 FUN_1450a4600(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar5 = *(longlong **)(param_1 + 0x10);
  if (plVar5 != (longlong *)0x0) {
    plVar6 = plVar5 + (ulonglong)*(uint *)(param_1 + 0x18) * 2;
    for (; plVar5 != plVar6; plVar5 = plVar5 + 2) {
      if ((longlong *)*plVar5 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar5 + 0x10))();
        *plVar5 = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x3c);
  uVar3 = 0;
  while (iVar2 != 0) {
    pvVar4 = *(void **)((ulonglong)*(uint *)(param_1 + 0x34) * 0x10 + *(longlong *)(param_1 + 0x28))
    ;
    if (pvVar4 != (void *)0x0) {
      AK::MemoryMgr::Free(5,pvVar4);
    }
    *(uint *)(param_1 + 0x34) = (*(int *)(param_1 + 0x34) + 1U) % *(uint *)(param_1 + 0x30);
    LOCK();
    piVar1 = (int *)(param_1 + 0x3c);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
  }
  return uVar3;
}



// FUNCTION 1450a46c0 FUN_1450a46c0 body=127 status=ok
// SIG undefined FUN_1450a46c0(void)

ulonglong FUN_1450a46c0(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *local_18;
  int local_10;
  
  if (param_2 == 0) {
    FUN_1450a3750(param_1 + 0x20,&local_18,0);
    if (local_18 != (longlong *)0x0) {
      (**(code **)(*local_18 + 0x10))();
      param_2 = local_10;
    }
  }
  uVar2 = 0;
  if (*(uint *)(param_1 + 0x18) != 0) {
    do {
      if (param_2 == *(int *)(*(longlong *)(param_1 + 0x10) + 8 + uVar2 * 0x10)) {
        return uVar2;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x18));
  }
  return 0xffffffff;
}



// FUNCTION 1450a4740 FUN_1450a4740 body=220 status=ok
// SIG undefined FUN_1450a4740(void)

undefined4 FUN_1450a4740(longlong param_1,short *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  short sVar2;
  longlong lVar3;
  short *psVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  LOCK();
  *(undefined4 *)(param_1 + 0x74) = 1;
  UNLOCK();
  if ((param_2 != (short *)0x0) && (*(int *)(param_1 + 0x70) == 0)) {
    if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x3c)) {
      *(undefined1 *)(param_1 + 0x6c) = 1;
    }
    else {
      lVar5 = -1;
      puVar6 = (undefined8 *)
               ((ulonglong)*(uint *)(param_1 + 0x38) * 0x10 + *(longlong *)(param_1 + 0x28));
      do {
        lVar3 = lVar5 + 1;
        lVar5 = lVar5 + 1;
      } while (param_2[lVar3] != 0);
      psVar4 = AK::MemoryMgr::Malloc(5,lVar5 * 2 + 2);
      *puVar6 = psVar4;
      if (psVar4 == (short *)0x0) {
        return 0;
      }
      do {
        sVar2 = *param_2;
        param_2 = param_2 + 1;
        *psVar4 = sVar2;
        psVar4 = psVar4 + 1;
      } while (sVar2 != 0);
      *(undefined4 *)(puVar6 + 1) = param_3;
      *(uint *)(param_1 + 0x38) = (*(int *)(param_1 + 0x38) + 1U) % *(uint *)(param_1 + 0x30);
      LOCK();
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      UNLOCK();
    }
    FUN_1450a2110();
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x74) = 0;
  UNLOCK();
  return uVar1;
}



// FUNCTION 1450a4820 FUN_1450a4820 body=291 status=ok
// SIG undefined FUN_1450a4820(void)

undefined8 FUN_1450a4820(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  iVar4 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar4 = 1;
  }
  plVar6 = AK::MemoryMgr::Malloc(0,(ulonglong)(iVar4 + uVar1) << 4);
  if (plVar6 != (longlong *)0x0) {
    if (((longlong *)*param_1 != (longlong *)0x0) &&
       (plVar5 = plVar6, (longlong *)*param_1 != plVar6)) {
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        if (plVar5 != (longlong *)0x0) {
          *plVar5 = 0;
          *(undefined4 *)(plVar5 + 1) = 0xffffffff;
        }
        lVar2 = *param_1;
        if ((longlong *)*plVar5 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar5 + 0x10))();
          *plVar5 = 0;
        }
        *plVar5 = *(longlong *)((longlong)plVar5 + (lVar2 - (longlong)plVar6));
        *(undefined4 *)(plVar5 + 1) =
             *(undefined4 *)((longlong)plVar5 + ((lVar2 + 8) - (longlong)plVar6));
        *(undefined8 *)((longlong)plVar5 + (lVar2 - (longlong)plVar6)) = 0;
        lVar2 = *param_1;
        plVar3 = *(longlong **)((longlong)plVar5 + (lVar2 - (longlong)plVar6));
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))();
          *(undefined8 *)((longlong)plVar5 + (lVar2 - (longlong)plVar6)) = 0;
        }
        plVar5 = plVar5 + 2;
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
    *param_1 = (longlong)plVar6;
    *(uint *)((longlong)param_1 + 0xc) = iVar4 + uVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1450a4950 FUN_1450a4950 body=230 status=ok
// SIG undefined FUN_1450a4950(void)

undefined8 * FUN_1450a4950(undefined8 *param_1,uint param_2)

{
  int iVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_149c266d0;
  param_1[1] = &PTR_FUN_149c26710;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  }
  LOCK();
  *(undefined4 *)(param_1 + 0xe) = 1;
  UNLOCK();
  iVar1 = *(int *)((longlong)param_1 + 0x74);
  while (iVar1 != 0) {
    Sleep(1);
    iVar1 = *(int *)((longlong)param_1 + 0x74);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  FUN_1450a4600();
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  if ((void *)param_1[5] != (void *)0x0) {
    AK::MemoryMgr::Free(0,(void *)param_1[5]);
    param_1[5] = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
    param_1[4] = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1450a4a40 FUN_1450a4a40 body=146 status=ok
// SIG undefined FUN_1450a4a40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1450a4a40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1450aaf10(&DAT_14c79bfe0);
    return;
  }
  _DAT_14c79bfe0 = *param_1;
  _DAT_14c79bff0 = param_1[2];
  _DAT_14c79bff8 = param_1[3];
  _DAT_14c79c000 = param_1[4];
  _DAT_14c79c008 = param_1[5];
  _DAT_14c79c010 = *(undefined2 *)(param_1 + 6);
  uRam000000014c79c012 = *(undefined2 *)((longlong)param_1 + 0x32);
  uRam000000014c79c014 = *(undefined2 *)((longlong)param_1 + 0x34);
  uRam000000014c79c016 = *(undefined2 *)((longlong)param_1 + 0x36);
  DAT_14c79c018 = *(ushort *)(param_1 + 7);
  uRam000000014c79c01a = *(undefined2 *)((longlong)param_1 + 0x3a);
  DAT_14c79c01c._0_2_ = *(undefined2 *)((longlong)param_1 + 0x3c);
  DAT_14c79c01c._2_2_ = *(undefined2 *)((longlong)param_1 + 0x3e);
  DAT_14c79c020 = param_1[8];
  if (DAT_14c79c018 < 2) {
    DAT_14c79c018 = 4;
  }
  _DAT_14c79bfe8 = param_1[1];
  *param_1 = _DAT_14c79bfe0;
  param_1[1] = param_1[1];
  uVar1 = _DAT_14c79bff8;
  param_1[2] = _DAT_14c79bff0;
  param_1[3] = uVar1;
  uVar1 = _DAT_14c79c008;
  param_1[4] = _DAT_14c79c000;
  param_1[5] = uVar1;
  uVar1 = CONCAT26(DAT_14c79c01c._2_2_,
                   CONCAT24((undefined2)DAT_14c79c01c,CONCAT22(uRam000000014c79c01a,DAT_14c79c018)))
  ;
  param_1[6] = CONCAT26(uRam000000014c79c016,
                        CONCAT24(uRam000000014c79c014,CONCAT22(uRam000000014c79c012,_DAT_14c79c010))
                       );
  param_1[7] = uVar1;
  param_1[8] = DAT_14c79c020;
  return;
}



// FUNCTION 1450a4ae0 FUN_1450a4ae0 body=59 status=ok
// SIG undefined FUN_1450a4ae0(void)

void FUN_1450a4ae0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0x20000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x20000;
  *(undefined8 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0x1c) = 0x20000;
  *(undefined8 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x34) = 0x20000;
  *(undefined8 *)(param_1 + 0x2c) = 1;
  return;
}



// FUNCTION 1450a4b20 FUN_1450a4b20 body=21 status=ok
// SIG undefined FUN_1450a4b20(void)

void FUN_1450a4b20(undefined8 *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) & 0xff;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 1450a4b40 thunk_FUN_1450a18d0 body=5 status=ok
// SIG undefined thunk_FUN_1450a18d0(void)

void thunk_FUN_1450a18d0(void)

{
  FUN_1450a2420(0);
  return;
}



// FUNCTION 1450a4b50 FUN_1450a4b50 body=53 status=ok
// SIG undefined FUN_1450a4b50(void)

void FUN_1450a4b50(undefined8 *param_1)

{
  FUN_1450cc900();
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(5,param_1);
    return;
  }
  return;
}



// FUNCTION 1450a4b90 FUN_1450a4b90 body=41 status=ok
// SIG undefined FUN_1450a4b90(void)

void FUN_1450a4b90(undefined8 param_1,undefined1 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1450a19c0();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0xf8) = param_2;
    FUN_145079370();
    return;
  }
  return;
}



// FUNCTION 1450a4bc0 FUN_1450a4bc0 body=380 status=ok
// SIG undefined FUN_1450a4bc0(void)

void FUN_1450a4bc0(wchar_t *param_1,int param_2,wchar_t *param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong _SizeInWords;
  
  lVar8 = -1;
  if (param_4 == 0) {
    if (DAT_14c79be38 != 0) {
      FUN_144d4f820(param_1,DAT_14c79be38,param_2 + -1);
    }
  }
  else {
    uVar6 = param_2 - 1;
    FUN_144d4f820(param_1,param_4,uVar6);
    lVar2 = -1;
    do {
      lVar3 = lVar2;
      lVar2 = lVar3 + 1;
    } while (param_1[lVar2] != L'\0');
    if ((lVar2 != 0) && (param_1[lVar3] != L'\\')) {
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (param_1[lVar2] != L'\0');
      iVar1 = (uVar6 - (int)lVar2) + -1;
      if (0 < iVar1) {
        iVar1 = 1;
      }
      wcsncat_s(param_1,(ulonglong)uVar6,L"\\",(longlong)iVar1);
    }
  }
  uVar6 = param_2 - 1;
  lVar2 = -1;
  _SizeInWords = (ulonglong)uVar6;
  do {
    lVar2 = lVar2 + 1;
  } while (param_1[lVar2] != L'\0');
  iVar1 = (uVar6 - (int)lVar2) + -1;
  if (-1 < iVar1) {
    iVar1 = 0;
  }
  wcsncat_s(param_1,_SizeInWords,L"",(longlong)iVar1);
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (param_1[lVar2] != L'\0');
  lVar3 = -1;
  uVar5 = (uVar6 - (int)lVar2) - 1;
  do {
    lVar3 = lVar3 + 1;
  } while (param_3[lVar3] != L'\0');
  if ((int)uVar5 < (int)lVar3) {
    uVar4 = (ulonglong)uVar5;
  }
  else {
    uVar4 = 0xffffffffffffffff;
    do {
      uVar4 = uVar4 + 1;
    } while (param_3[uVar4] != L'\0');
  }
  wcsncat_s(param_1,_SizeInWords,param_3,(longlong)(int)uVar4);
  do {
    lVar8 = lVar8 + 1;
  } while (param_1[lVar8] != L'\0');
  iVar7 = (uVar6 - (int)lVar8) + -1;
  iVar1 = 4;
  if (iVar7 < 4) {
    iVar1 = iVar7;
  }
  wcsncat_s(param_1,_SizeInWords,L".dll",(longlong)iVar1);
  param_1[_SizeInWords] = L'\0';
  return;
}



// FUNCTION 1450a4d40 FUN_1450a4d40 body=151 status=ok
// SIG undefined FUN_1450a4d40(void)

void FUN_1450a4d40(longlong *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = *(ushort *)(param_1 + 2);
  uVar2 = *(ushort *)((longlong)param_1 + 0x12);
  if (uVar1 <= *(ushort *)((longlong)param_1 + 0x12)) {
    uVar2 = uVar1;
  }
  iVar3 = (uint)uVar1 - (uint)uVar2;
  if (iVar3 != 0) {
    if (*(byte *)(param_1 + 1) != 0) {
      uVar4 = (ulonglong)*(byte *)(param_1 + 1);
      lVar5 = 0;
      do {
        memset((void *)(*param_1 +
                       ((ulonglong)*(ushort *)(param_1 + 2) * lVar5 + (ulonglong)(uint)uVar2) * 4),0
               ,(ulonglong)(uint)(iVar3 * 4));
        lVar5 = lVar5 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    *(short *)((longlong)param_1 + 0x12) = (short)param_1[2];
  }
  return;
}



// FUNCTION 1450a4de0 FUN_1450a4de0 body=203 status=ok
// SIG undefined FUN_1450a4de0(void)

void FUN_1450a4de0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  fVar4 = *(float *)(lVar1 + 0x88) * 0.05;
  if ((fVar4 < -37.0) || (37.0 < fVar4)) {
    fVar4 = 0.0;
  }
  else {
    uVar3 = (uint)(longlong)(fVar4 * 27866352.0 + 1.0653532e+09);
    fVar4 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
    fVar4 = ((fVar4 * 0.32518977 + 0.020805772) * fVar4 + 0.65304345) * (float)(uVar3 & 0xff800000);
  }
  *(float *)(param_1 + 0x10) = fVar4 * *(float *)(lVar1 + 0x100);
  if ((*(byte *)(lVar1 + 0x170) & 8) != 0) {
    iVar2 = FUN_1450e7200(lVar1);
    if (iVar2 != 0) {
      thunk_FUN_14507c840(lVar1,lVar1 + 0x1a8);
      return;
    }
  }
  return;
}



// FUNCTION 1450a4eb0 FUN_1450a4eb0 body=112 status=ok
// SIG undefined FUN_1450a4eb0(void)

longlong FUN_1450a4eb0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  do {
    if (lVar1 == 0) {
      return 0;
    }
    plVar2 = (longlong *)FUN_1453557f0(lVar1);
    if (*plVar2 == param_2) {
      uVar3 = FUN_1453557f0(lVar1);
      lVar4 = FUN_145377010(uVar3);
      if (lVar4 == param_3) {
        return lVar1;
      }
    }
    lVar1 = *(longlong *)(lVar1 + 0x20);
  } while( true );
}



// FUNCTION 1450a4f20 FUN_1450a4f20 body=584 status=ok
// SIG undefined FUN_1450a4f20(void)

float FUN_1450a4f20(undefined8 param_1,longlong *param_2,int param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  float fVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float local_res10 [2];
  undefined4 local_88;
  float local_84;
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  
  FUN_145352940(param_2,&local_80);
  if (local_80 == (longlong *)(*param_2 + (ulonglong)*(uint *)(param_2 + 1) * 8)) {
    return 0.0;
  }
  cVar4 = *(char *)(*local_80 + 0xc);
  if (cVar4 == '\x03') {
    fVar6 = 1.0;
  }
  else {
    fVar6 = 0.0;
    if (cVar4 != '\x05') {
      cVar4 = '\x02';
    }
  }
  do {
    puVar1 = (undefined4 *)*local_80;
    if (puVar1[2] != param_3) {
      return fVar6;
    }
    local_res10[0] = 0.0;
    local_78 = *puVar1;
    uStack_74 = CONCAT31(uStack_74._1_3_,*(undefined1 *)((longlong)puVar1 + 0xd));
    FUN_14507fa00(param_1,CONCAT44(uStack_74,local_78),param_4,local_res10,0);
    fVar3 = local_res10[0];
    lVar2 = *local_80;
    if (local_res10[0] == *(float *)(lVar2 + 0x30)) {
      fVar5 = *(float *)(lVar2 + 0x38);
LAB_1450a504c:
      if (fVar5 == 3.4028235e+38) goto LAB_1450a5052;
    }
    else {
      if (local_res10[0] == *(float *)(lVar2 + 0x34)) {
        fVar5 = *(float *)(lVar2 + 0x3c);
        goto LAB_1450a504c;
      }
LAB_1450a5052:
      if (*(longlong *)(lVar2 + 0x18) == 0) {
        fVar5 = 0.0;
      }
      else {
        local_88 = *(undefined4 *)(lVar2 + 0x28);
        local_84 = 0.0;
        FUN_1450737c0(lVar2 + 0x18,local_res10[0],&local_88,&local_84);
        *(undefined4 *)(lVar2 + 0x28) = local_88;
        fVar5 = local_84;
      }
      *(float *)(lVar2 + 0x30 + (ulonglong)*(byte *)(lVar2 + 0x14) * 4) = fVar3;
      *(float *)(lVar2 + 0x38 + (ulonglong)*(byte *)(lVar2 + 0x14) * 4) = fVar5;
      *(byte *)(lVar2 + 0x14) = *(byte *)(lVar2 + 0x14) ^ 1;
    }
    if (cVar4 == '\x02') {
      fVar5 = fVar6 * 1.0 + fVar5;
    }
    else if (cVar4 == '\x03') {
      fVar5 = fVar5 * fVar6 + 0.0;
    }
    else if (cVar4 == '\x05') {
      if (fVar5 <= fVar6) {
        fVar5 = fVar6;
      }
    }
    else {
      fVar5 = fVar6 * 1.0 + 0.0;
    }
    local_80 = local_80 + 1;
    fVar6 = fVar5;
    if (local_80 == (longlong *)(*param_2 + (ulonglong)*(uint *)(param_2 + 1) * 8)) {
      return fVar5;
    }
  } while( true );
}



// FUNCTION 1450a5170 FUN_1450a5170 body=422 status=ok
// SIG undefined FUN_1450a5170(void)

byte FUN_1450a5170(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 uVar7;
  undefined4 local_res8 [2];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined1 local_28;
  undefined8 local_20;
  
  pbVar6 = (byte *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_20 = 0;
  local_30 = 0xff;
  local_28 = 0xff;
  if ((*(ulonglong **)(param_1 + 0x58) == (ulonglong *)0x0) ||
     ((**(ulonglong **)(param_1 + 0x58) >> 0x22 & 1) == 0)) {
    pbVar2 = *(byte **)(param_1 + 0x90);
    local_res8[0] = DAT_14c72f4dc;
    pbVar5 = pbVar6;
    if (pbVar2 != (byte *)0x0) {
      pbVar4 = pbVar6;
      do {
        uVar3 = (int)pbVar4 + 1;
        if (((byte *)(ulonglong)uVar3)[(longlong)pbVar2] == 0x1b) {
          pbVar5 = pbVar2 + (longlong)pbVar4 * 4 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc);
          break;
        }
        pbVar4 = (byte *)(ulonglong)uVar3;
      } while (uVar3 < *pbVar2);
    }
    pbVar2 = (byte *)local_res8;
    if (pbVar5 != (byte *)0x0) {
      pbVar2 = pbVar5;
    }
    uVar7 = *(undefined4 *)pbVar2;
  }
  else {
    uVar7 = FUN_1450a4f20(g_pGameSyncMgr,param_1 + 0x48,0x22,&local_48);
  }
  *param_2 = uVar7;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0xff;
  local_28 = 0xff;
  local_20 = 0;
  if ((*(ulonglong **)(param_1 + 0x58) == (ulonglong *)0x0) ||
     ((**(ulonglong **)(param_1 + 0x58) >> 0x24 & 1) == 0)) {
    pbVar2 = *(byte **)(param_1 + 0x90);
    local_res8[0] = DAT_14c72f4e0;
    if (pbVar2 != (byte *)0x0) {
      pbVar5 = pbVar6;
      do {
        uVar3 = (int)pbVar5 + 1;
        if (pbVar2[uVar3] == 0x1c) {
          pbVar6 = pbVar2 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc) + (longlong)pbVar5 * 4;
          break;
        }
        pbVar5 = (byte *)(ulonglong)uVar3;
      } while (uVar3 < *pbVar2);
    }
    pbVar2 = (byte *)local_res8;
    if (pbVar6 != (byte *)0x0) {
      pbVar2 = pbVar6;
    }
    uVar7 = *(undefined4 *)pbVar2;
  }
  else {
    uVar7 = FUN_1450a4f20(g_pGameSyncMgr,param_1 + 0x48,0x24,&local_48);
  }
  *param_3 = uVar7;
  bVar1 = *(byte *)(param_1 + 0x19c);
  *(byte *)(param_1 + 0x19c) = bVar1 & 0xdf;
  return bVar1 >> 5 & 1;
}



// FUNCTION 1450a5320 FUN_1450a5320 body=241 status=ok
// SIG undefined FUN_1450a5320(void)

byte FUN_1450a5320(longlong param_1,undefined4 *param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined4 local_res8 [2];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  pbVar5 = (byte *)0x0;
  local_20 = 0xff;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0xff;
  if ((*(ulonglong **)(param_1 + 0x58) == (ulonglong *)0x0) ||
     ((**(ulonglong **)(param_1 + 0x58) >> 0x23 & 1) == 0)) {
    pbVar2 = *(byte **)(param_1 + 0x90);
    local_res8[0] = DAT_14c72f4e4;
    if (pbVar2 != (byte *)0x0) {
      pbVar3 = pbVar5;
      do {
        uVar4 = (int)pbVar3 + 1;
        if (((byte *)(ulonglong)uVar4)[(longlong)pbVar2] == 0x1d) {
          pbVar5 = pbVar2 + (longlong)pbVar3 * 4 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc);
          break;
        }
        pbVar3 = (byte *)(ulonglong)uVar4;
      } while (uVar4 < *pbVar2);
    }
    pbVar2 = (byte *)local_res8;
    if (pbVar5 != (byte *)0x0) {
      pbVar2 = pbVar5;
    }
    uVar6 = *(undefined4 *)pbVar2;
  }
  else {
    uVar6 = FUN_1450a4f20(g_pGameSyncMgr,param_1 + 0x48,0x23,&local_38);
  }
  *param_2 = uVar6;
  *param_3 = *(byte *)(param_1 + 0x19c) >> 3 & 1;
  bVar1 = *(byte *)(param_1 + 0x19c);
  *(byte *)(param_1 + 0x19c) = bVar1 & 0xef;
  return bVar1 >> 4 & 1;
}



// FUNCTION 1450a5420 FUN_1450a5420 body=212 status=ok
// SIG undefined FUN_1450a5420(void)

void FUN_1450a5420(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  uint uVar4;
  undefined8 *_Dst;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  _Dst = DAT_14c79c050;
  uVar6 = (ulonglong)DAT_14c79c058;
  puVar1 = DAT_14c79c050 + uVar6;
  uVar4 = DAT_14c79c058;
  while (DAT_14c79c058 = uVar4, _Dst != puVar1) {
    uVar2 = *_Dst;
    DAT_14c79c058 = (uint)uVar6;
    uVar5 = DAT_14c79c058 - 1;
    if (_Dst < DAT_14c79c050 + uVar5) {
      DAT_14c79c058 = uVar4;
      memmove(_Dst,_Dst + 1,(ulonglong)((int)(DAT_14c79c050 + uVar5) - (int)_Dst & 0xfffffff8));
    }
    DAT_14c79c058 = DAT_14c79c058 - 1;
    FUN_1450a4b50(uVar2,0);
    uVar6 = (ulonglong)DAT_14c79c058;
    uVar4 = DAT_14c79c058;
    puVar1 = DAT_14c79c050 + uVar6;
  }
  lVar7 = (longlong)(DAT_14c79c048 + -1);
  if (-1 < DAT_14c79c048 + -1) {
    do {
      pvVar3 = *(void **)(DAT_14c79c040 + lVar7 * 8);
      if (pvVar3 != (void *)0x0) {
        FUN_1450a3360(pvVar3);
        AK::MemoryMgr::Free(5,pvVar3);
      }
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  DAT_14c79c048 = 0;
  FUN_1453716f0();
  return;
}



// FUNCTION 1450a5500 FUN_1450a5500 body=391 status=ok
// SIG undefined FUN_1450a5500(void)

int FUN_1450a5500(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong lVar5;
  uint uVar6;
  int *piVar7;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x328) != 0) {
    for (plVar3 = DAT_14c79c050; plVar3 != DAT_14c79c050 + DAT_14c79c058; plVar3 = plVar3 + 1) {
      lVar5 = *plVar3;
      piVar7 = (int *)(*(longlong *)(lVar5 + 8) + 0x310);
      if (*(longlong *)(lVar5 + 8) == 0) {
        piVar7 = (int *)&DAT_00000328;
      }
      if ((*piVar7 == *(int *)(lVar1 + 0x328)) && (*(longlong *)(lVar5 + 0xf0) == 0)) {
        FUN_1450cf250(lVar5,lVar1,0);
        FUN_1450eb380(lVar1);
        return 5;
      }
    }
  }
  pvVar4 = AK::MemoryMgr::Malloc(5,0x170);
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_1450cc790(pvVar4), lVar5 != 0)) {
    iVar2 = FUN_1450cf250(lVar5,lVar1,1);
    if (iVar2 == 0x3f) {
      *(undefined8 *)(lVar5 + 0x70) = 0;
      lVar1 = lVar5;
      if (DAT_14c7fdcc8 != 0) {
        *(longlong *)(DAT_14c7fdcc0 + 0x70) = lVar5;
        lVar1 = DAT_14c7fdcc8;
      }
      DAT_14c7fdcc8 = lVar1;
      iVar2 = 1;
      DAT_14c7fdcc0 = lVar5;
    }
    else if (iVar2 == 1) {
      iVar2 = FUN_1450a6a60(lVar5,lVar1);
      uVar6 = 0;
      if (iVar2 == 1) {
        uVar6 = 0x100;
      }
      *(uint *)((longlong)param_1 + 0xc) = uVar6 | *(uint *)((longlong)param_1 + 0xc) & 0xfffffeff;
    }
    else {
      FUN_1450a4b50(lVar5,iVar2 != 3);
    }
    return iVar2;
  }
  FUN_1450eb2f0(lVar1,1);
  return 2;
}



// FUNCTION 1450a5690 FUN_1450a5690 body=157 status=ok
// SIG undefined FUN_1450a5690(void)

longlong FUN_1450a5690(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  for (plVar2 = DAT_14c79c050; plVar2 != DAT_14c79c050 + DAT_14c79c058; plVar2 = plVar2 + 1) {
    lVar1 = *plVar2;
    if (((*(longlong *)(lVar1 + 0xe8) != 0) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0xe8) + 0x18) == lVar3)) ||
       ((*(char *)((longlong)param_1 + 0xc) == '\x04' &&
        ((*(longlong *)(lVar1 + 0xf0) != 0 &&
         (*(longlong *)(*(longlong *)(lVar1 + 0xf0) + 0x18) == lVar3)))))) {
      if (*(int *)(lVar1 + 0x100) != 0) {
        *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) | 0x100;
      }
      return lVar1;
    }
  }
  lVar1 = *(longlong *)(lVar3 + 0x2a8);
  if (lVar1 == 0) {
    return 0;
  }
  if ((*(longlong *)(lVar1 + 0xe8) != 0) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0xe8) + 0x18) == lVar3)) {
    return lVar1;
  }
  lVar3 = 0;
  if (*(char *)((longlong)param_1 + 0xc) == '\x04') {
    lVar3 = lVar1;
  }
  return lVar3;
}



// FUNCTION 1450a5730 FUN_1450a5730 body=171 status=ok
// SIG undefined FUN_1450a5730(void)

undefined8 FUN_1450a5730(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_1450ce7e0(param_2);
  if ((int)uVar4 == 0x3f) {
    return uVar4;
  }
  lVar1 = 0;
  lVar2 = DAT_14c7fdcc8;
  do {
    if (lVar2 == 0) {
LAB_1450a57a9:
      if ((int)uVar4 == 1) {
        uVar4 = FUN_1450a6a60(param_2,param_1);
        return uVar4;
      }
      FUN_1450a4b50(param_2,1);
      return 2;
    }
    if (lVar2 == param_2) {
      lVar3 = *(longlong *)(lVar2 + 0x70);
      if (lVar2 != DAT_14c7fdcc8) {
        *(longlong *)(lVar1 + 0x70) = *(longlong *)(lVar2 + 0x70);
        lVar3 = DAT_14c7fdcc8;
      }
      DAT_14c7fdcc8 = lVar3;
      if (lVar2 == DAT_14c7fdcc0) {
        DAT_14c7fdcc0 = lVar1;
      }
      goto LAB_1450a57a9;
    }
    lVar1 = lVar2;
    lVar2 = *(longlong *)(lVar2 + 0x70);
  } while( true );
}



// FUNCTION 1450a57e0 FUN_1450a57e0 body=603 status=ok
// SIG undefined FUN_1450a57e0(void)

void FUN_1450a57e0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  longlong *plVar12;
  undefined4 local_res8 [2];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  
  bVar3 = false;
  bVar2 = false;
  local_res8[0] = 0;
  lVar4 = *(longlong *)(param_1 + 8);
  lVar9 = lVar4;
  if (lVar4 == 0) {
    lVar9 = 0x18;
  }
  lVar9 = FUN_1450e71e0(lVar9);
  if (lVar9 == 0) {
    lVar9 = FUN_1450a1b90();
    if (lVar9 != 0) {
      puVar10 = (undefined8 *)(lVar4 + 8);
      if (lVar4 == 0) {
        puVar10 = (undefined8 *)&DAT_00000020;
      }
      lVar9 = 0;
      uVar6 = *puVar10;
      goto LAB_1450a59db;
    }
  }
  else {
    puVar10 = (undefined8 *)(lVar4 + 8);
    pbVar11 = (byte *)(lVar4 + 0x170);
    if (lVar4 == 0) {
      puVar10 = (undefined8 *)&DAT_00000020;
      pbVar11 = &DAT_00000188;
    }
    uVar6 = *puVar10;
    if ((*pbVar11 & 8) == 0) {
LAB_1450a59db:
      FUN_145376ce0(local_88,lVar9,uVar6);
      uVar6 = FUN_145376d60(local_40,local_88);
      FUN_1450a9910(uVar6,param_1,0);
      FUN_145376d90(local_88);
      return;
    }
    lVar4 = FUN_1450d2450(uVar6);
    if (*(char *)(lVar4 + 0xe0) == '\0') {
      uVar6 = FUN_144d4eb60();
      lVar4 = FUN_144d4eb00(uVar6);
    }
    else {
      lVar4 = lVar4 + 0x20;
    }
    plVar12 = *(longlong **)(lVar4 + 0x40);
    if (plVar12 != plVar12 + *(uint *)(lVar4 + 0x48)) {
      do {
        lVar1 = *plVar12;
        lVar5 = FUN_1450a4eb0(param_1,lVar9,lVar1);
        if (lVar5 == 0) {
          lVar8 = 0;
          bVar2 = true;
          uVar6 = FUN_145376e10(local_70,lVar9,lVar1);
LAB_1450a590b:
          FUN_145376d60(local_88,uVar6);
          if (bVar2) {
            bVar2 = false;
            FUN_145376d90(local_70);
          }
          if (bVar3) {
            bVar3 = false;
            FUN_145376d90(local_58);
          }
          lVar7 = FUN_145377010(local_88);
          if (lVar7 == lVar1) {
            uVar6 = FUN_145376d60(local_40,local_88);
            lVar8 = FUN_1450a6b40(uVar6,local_res8);
          }
          if ((lVar5 == 0) && (lVar8 != 0)) {
            FUN_145389de0(param_1,lVar8,0);
          }
          FUN_145376d90(local_88);
        }
        else {
          lVar8 = *(longlong *)(lVar5 + 0x158);
          if ((*(byte *)(lVar8 + 0x1c4) & 0x10) != 0) {
            bVar3 = true;
            uVar6 = FUN_145376ce0(local_58,lVar9,*(undefined8 *)(lVar8 + 0x80));
            goto LAB_1450a590b;
          }
        }
        plVar12 = plVar12 + 1;
      } while (plVar12 !=
               (longlong *)(*(longlong *)(lVar4 + 0x40) + (ulonglong)*(uint *)(lVar4 + 0x48) * 8));
    }
  }
  return;
}



// FUNCTION 1450a5a40 FUN_1450a5a40 body=401 status=ok
// SIG undefined FUN_1450a5a40(void)

void FUN_1450a5a40(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong local_28;
  longlong lStack_20;
  undefined1 local_18 [16];
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 != 0) {
    if ((*(byte *)(lVar4 + 0x170) & 8) == 0) {
      local_28 = *(longlong *)(param_1 + 0x38);
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 0x58);
      lStack_20 = 0;
      if (local_28 != 0) {
        do {
          if ((*(int *)(local_28 + 0x194) == 0) && (*(longlong *)(local_28 + 0x170) != lVar4)) {
            plVar6 = (longlong *)FUN_145389f70(param_1,local_18,&local_28);
            lVar7 = *plVar6;
            lStack_20 = plVar6[1];
          }
          else {
            lVar7 = *(longlong *)(local_28 + 0x20);
            lStack_20 = local_28;
          }
          local_28 = lVar7;
        } while (lVar7 != 0);
        return;
      }
    }
    else {
      lVar4 = FUN_1450d2450(*(longlong *)(lVar4 + 8));
      if (*(char *)(lVar4 + 0xe0) == '\0') {
        uVar5 = FUN_144d4eb60();
        lVar4 = FUN_144d4eb00(uVar5);
      }
      else {
        lVar4 = lVar4 + 0x20;
      }
      lStack_20 = 0;
      lVar7 = *(longlong *)(param_1 + 0x38);
      while (local_28 = lVar7, local_28 != 0) {
        if (*(int *)(local_28 + 0x194) == 0) {
          uVar8 = *(uint *)(lVar4 + 0x48);
          if (uVar8 != 0) {
            iVar9 = 0;
            do {
              iVar3 = (uVar8 >> 1) + iVar9;
              uVar1 = *(ulonglong *)(*(longlong *)(lVar4 + 0x40) + (longlong)iVar3 * 8);
              if (uVar1 == *(ulonglong *)(local_28 + 0x170)) {
                if (*(longlong *)(lVar4 + 0x40) + (longlong)iVar3 * 8 != 0) goto LAB_1450a5b34;
                break;
              }
              iVar3 = iVar3 + 1;
              uVar2 = uVar8 - 1;
              if (*(ulonglong *)(local_28 + 0x170) <= uVar1) {
                iVar3 = iVar9;
                uVar2 = uVar8;
              }
              uVar8 = uVar2 >> 1;
              iVar9 = iVar3;
            } while (uVar8 != 0);
          }
          plVar6 = (longlong *)FUN_145389f70(param_1,local_18,&local_28);
          lStack_20 = plVar6[1];
          lVar7 = *plVar6;
        }
        else {
LAB_1450a5b34:
          lVar7 = *(longlong *)(local_28 + 0x20);
          lStack_20 = local_28;
        }
      }
    }
  }
  return;
}



// FUNCTION 1450a5be0 FUN_1450a5be0 body=21 status=ok
// SIG undefined FUN_1450a5be0(void)

void FUN_1450a5be0(byte param_1)

{
  if (DAT_14c79c038 != 2) {
    DAT_14c79c038 = param_1 + 1;
  }
  return;
}



// FUNCTION 1450a5c00 FUN_1450a5c00 body=550 status=ok
// SIG undefined FUN_1450a5c00(void)

void FUN_1450a5c00(void)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  uint uVar12;
  
  if (DAT_14c79c038 != 0) {
    puVar11 = DAT_14c79c040;
    if (DAT_14c79c040 != DAT_14c79c040 + DAT_14c79c048) {
      do {
        plVar4 = (longlong *)*puVar11;
        if (DAT_14c79c038 == 1) {
          FUN_1450a5a40(plVar4);
          lVar7 = plVar4[7];
          iVar10 = 0;
          lVar6 = lVar7;
          if (lVar7 == 0) {
LAB_1450a5ca9:
            if (((plVar4[0xe] == 0) || (*(longlong *)(plVar4[0xe] + 0x80) == 0)) &&
               (lVar7 = FUN_1450a1a60(plVar4 + 0xe), lVar7 != 0)) {
              uVar2 = *(uint *)(lVar7 + 0x60);
              uVar12 = uVar2 >> 8 & 0xf;
              if (uVar12 == 3) {
                uVar3 = *(uint *)(plVar4 + 0x2d);
                if (((uVar2 & 0xff) == (uVar3 & 0xff)) && ((uVar3 & 0xf00) == 0x300)) {
LAB_1450a5d35:
                  if (((uVar3 ^ uVar2) & 0xfffff000) == 0) goto LAB_1450a5d37;
                }
              }
              else {
                puVar8 = (uint *)(**(code **)(*plVar4 + 0x68))(plVar4);
                uVar3 = *puVar8;
                if (((uVar2 & 0xff) == (uVar3 & 0xff)) && (uVar12 == (uVar3 >> 8 & 0xf)))
                goto LAB_1450a5d35;
              }
            }
            goto LAB_1450a5d44;
          }
          do {
            plVar1 = (longlong *)(lVar6 + 0x20);
            iVar9 = iVar10 + 1;
            if (*(int *)(lVar6 + 0x194) != 0) {
              iVar9 = iVar10;
            }
            lVar6 = *plVar1;
            iVar10 = iVar9;
          } while (*plVar1 != 0);
          if (iVar9 == 0) {
            if (lVar7 != 0) goto LAB_1450a5d44;
            goto LAB_1450a5ca9;
          }
LAB_1450a5d37:
          *(byte *)((longlong)plVar4 + 0x1c4) = *(byte *)((longlong)plVar4 + 0x1c4) | 0x10;
          puVar11 = puVar11 + 1;
        }
        else {
LAB_1450a5d44:
          if (plVar4 != (longlong *)0x0) {
            FUN_1450a3360(plVar4);
            AK::MemoryMgr::Free(5,plVar4);
          }
          if (puVar11 < DAT_14c79c040 + (DAT_14c79c048 - 1)) {
            memmove(puVar11,puVar11 + 1,
                    (ulonglong)
                    ((int)(DAT_14c79c040 + (DAT_14c79c048 - 1)) - (int)puVar11 & 0xfffffff8));
          }
          DAT_14c79c048 = DAT_14c79c048 - 1;
          DAT_14c79c029 = 1;
        }
      } while (puVar11 != DAT_14c79c040 + DAT_14c79c048);
    }
    puVar11 = DAT_14c79c050;
    if (DAT_14c79c050 != DAT_14c79c050 + DAT_14c79c058) {
      do {
        uVar5 = *puVar11;
        FUN_1450a5a40(uVar5);
        FUN_1450a57e0(uVar5);
        puVar11 = puVar11 + 1;
      } while (puVar11 != DAT_14c79c050 + DAT_14c79c058);
    }
    DAT_14c79c038 = 0;
  }
  return;
}



// FUNCTION 1450a5e30 FUN_1450a5e30 body=231 status=ok
// SIG undefined FUN_1450a5e30(void)

void FUN_1450a5e30(int param_1,int *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 local_18;
  undefined2 local_14;
  int local_10;
  
  if ((*param_2 == 5) || (*param_2 - 0x2bU < 3)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  plVar5 = DAT_14c79c040;
  if (DAT_14c79c040 != DAT_14c79c040 + DAT_14c79c048) {
    do {
      lVar1 = *plVar5;
      if (*(longlong *)(lVar1 + 0x70) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(longlong *)(lVar1 + 0x70) + 0x20);
      }
      if ((iVar4 == param_1) && (plVar2 = *(longlong **)(lVar1 + 8), plVar2 != (longlong *)0x0)) {
        if (bVar3) {
          local_10 = param_2[1];
          local_18 = 0;
          local_14 = 0x101;
          (**(code **)(*plVar2 + 0x18))(plVar2,&local_18,*param_2,param_2[3],param_2[4]);
        }
        else {
          (**(code **)(*plVar2 + 0x20))(plVar2,CONCAT71((int7)((ulonglong)lVar1 >> 8),1),*param_2);
        }
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != DAT_14c79c040 + DAT_14c79c048);
  }
  return;
}



// FUNCTION 1450a5f20 FUN_1450a5f20 body=133 status=ok
// SIG undefined FUN_1450a5f20(void)

void FUN_1450a5f20(int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)DAT_14c79c048;
  plVar4 = DAT_14c79c040;
  plVar5 = DAT_14c79c040;
  if (DAT_14c79c040 != DAT_14c79c040 + uVar6) {
    do {
      lVar1 = *(longlong *)(*plVar4 + 0x70);
      if (lVar1 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(lVar1 + 0x20);
      }
      if ((iVar3 == param_1) && (plVar2 = *(longlong **)(*plVar4 + 8), plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x20))(plVar2,0,5);
        uVar6 = (ulonglong)DAT_14c79c048;
        plVar5 = DAT_14c79c040;
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar5 + uVar6);
  }
  return;
}



// FUNCTION 1450a5fb0 FUN_1450a5fb0 body=138 status=ok
// SIG undefined FUN_1450a5fb0(void)

void FUN_1450a5fb0(int param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)DAT_14c79c048;
  plVar2 = DAT_14c79c040;
  plVar4 = DAT_14c79c040;
  if (DAT_14c79c040 != DAT_14c79c040 + uVar5) {
    do {
      lVar1 = *plVar2;
      if (*(longlong *)(lVar1 + 0x70) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(longlong *)(lVar1 + 0x70) + 0x20);
      }
      if (iVar3 == param_1) {
        *(byte *)(lVar1 + 0x98) = *(byte *)(lVar1 + 0x98) & 0xfd | param_2 * '\x02';
        uVar5 = (ulonglong)DAT_14c79c048;
        plVar4 = DAT_14c79c040;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar4 + uVar5);
  }
  return;
}



// FUNCTION 1450a6040 FUN_1450a6040 body=154 status=ok
// SIG undefined FUN_1450a6040(void)

void FUN_1450a6040(int param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)DAT_14c79c048;
  plVar3 = DAT_14c79c040;
  plVar4 = DAT_14c79c040;
  if (DAT_14c79c040 != DAT_14c79c040 + uVar5) {
    do {
      lVar1 = *plVar3;
      if (*(longlong *)(lVar1 + 0x70) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(longlong *)(lVar1 + 0x70) + 0x20);
      }
      if (iVar2 == param_1) {
        *(byte *)(lVar1 + 0x98) =
             (param_2 << 2 ^ *(byte *)(lVar1 + 0x98)) & 0x7c ^ *(byte *)(lVar1 + 0x98);
        FUN_14537b0b0(lVar1);
        uVar5 = (ulonglong)DAT_14c79c048;
        plVar4 = DAT_14c79c040;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar4 + uVar5);
  }
  return;
}



// FUNCTION 1450a60e0 FUN_1450a60e0 body=172 status=ok
// SIG undefined FUN_1450a60e0(void)

void FUN_1450a60e0(int param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  
  plVar4 = DAT_14c79c040;
  if (DAT_14c79c040 != DAT_14c79c040 + DAT_14c79c048) {
    do {
      lVar1 = *plVar4;
      if (*(longlong *)(lVar1 + 0x70) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(longlong *)(lVar1 + 0x70) + 0x20);
      }
      if ((iVar3 == param_1) &&
         ((param_4 == 0 ||
          (lVar2 = FUN_145377010(lVar1 + 0x70), lVar2 == *(longlong *)(param_4 + 0x58))))) {
        FUN_14537a9d0(lVar1,param_2,param_3);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != DAT_14c79c040 + DAT_14c79c048);
  }
  return;
}



// FUNCTION 1450a6190 FUN_1450a6190 body=178 status=ok
// SIG undefined FUN_1450a6190(void)

void FUN_1450a6190(int param_1,byte param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  
  plVar4 = DAT_14c79c040;
  if (DAT_14c79c040 != DAT_14c79c040 + DAT_14c79c048) {
    do {
      lVar1 = *plVar4;
      if (*(longlong *)(lVar1 + 0x70) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(longlong *)(lVar1 + 0x70) + 0x20);
      }
      if ((iVar3 == param_1) &&
         ((param_3 == 0 ||
          (lVar2 = FUN_145377010(lVar1 + 0x70), lVar2 == *(longlong *)(param_3 + 0x58))))) {
        FUN_14537a700(lVar1,1 << (param_2 & 0x1f));
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != DAT_14c79c040 + DAT_14c79c048);
  }
  return;
}



// FUNCTION 1450a6250 FUN_1450a6250 body=158 status=ok
// SIG undefined FUN_1450a6250(void)

void FUN_1450a6250(int param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)DAT_14c79c048;
  plVar3 = DAT_14c79c040;
  plVar4 = DAT_14c79c040;
  if (DAT_14c79c040 != DAT_14c79c040 + uVar5) {
    do {
      lVar1 = *(longlong *)(*plVar3 + 0x70);
      if (lVar1 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(lVar1 + 0x20);
      }
      if ((iVar2 == param_1) && (lVar1 = *(longlong *)(*plVar3 + 8), lVar1 != 0)) {
        FUN_1450e6b50(lVar1,param_2,param_3);
        uVar5 = (ulonglong)DAT_14c79c048;
        plVar4 = DAT_14c79c040;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar4 + uVar5);
  }
  return;
}



// FUNCTION 1450a62f0 FUN_1450a62f0 body=134 status=ok
// SIG undefined FUN_1450a62f0(void)

void FUN_1450a62f0(int param_1,byte param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)DAT_14c79c048;
  plVar3 = DAT_14c79c040;
  plVar4 = DAT_14c79c040;
  if (DAT_14c79c040 != DAT_14c79c040 + uVar5) {
    do {
      lVar1 = *(longlong *)(*plVar3 + 0x70);
      if (lVar1 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(lVar1 + 0x20);
      }
      if (iVar2 == param_1) {
        FUN_14537a700(*plVar3,1 << (param_2 & 0x1f));
        uVar5 = (ulonglong)DAT_14c79c048;
        plVar4 = DAT_14c79c040;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar4 + uVar5);
  }
  return;
}



// FUNCTION 1450a6380 FUN_1450a6380 body=20 status=ok
// SIG undefined FUN_1450a6380(void)

void FUN_1450a6380(void)

{
  if (DAT_14c79c038 != 2) {
    DAT_14c79c038 = 2;
  }
  return;
}



// FUNCTION 1450a63a0 FUN_1450a63a0 body=89 status=ok
// SIG undefined FUN_1450a63a0(void)

void FUN_1450a63a0(int param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  
  for (lVar1 = DAT_14c79bfa0; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x28)) {
    if ((*(int *)(lVar1 + 0x38) == param_1) && (*(int *)(lVar1 + 0x30) == param_2)) {
      FUN_14509f2f0(lVar1,param_3);
    }
  }
  return;
}



// FUNCTION 1450a6430 FUN_1450a6430 body=132 status=ok
// SIG undefined FUN_1450a6430(void)

ulonglong FUN_1450a6430(void)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  FUN_145387cb0();
  FUN_145380ae0();
  bVar1 = AK::MemoryMgr::IsInitialized();
  if ((bVar1) && (AK::IAkStreamMgr::m_pStreamMgr != (IAkStreamMgr *)0x0)) {
    uVar3 = FUN_1450ab410();
    if ((int)uVar3 == 1) {
      uVar3 = FUN_145088b70(DAT_14c7910f8);
      if ((int)uVar3 == 1) {
        uVar3 = FUN_145370f80();
        if ((int)uVar3 == 1) {
          FUN_1450911b0();
          uVar3 = FUN_1450a0f00();
          if ((int)uVar3 == 1) {
            uVar2 = FUN_14538c940(&DAT_14c79c060,0x40,0x40);
            uVar4 = 1;
            if (uVar2 != 1) {
              uVar4 = uVar2;
            }
            return (ulonglong)uVar4;
          }
        }
      }
    }
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}



// FUNCTION 1450a64c0 FUN_1450a64c0 body=171 status=ok
// SIG undefined FUN_1450a64c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1450a64c0(void)

{
  FUN_145091200();
  if (DAT_14c79c098 != (void *)0x0) {
    DAT_14c79c0a0 = 0;
    AK::MemoryMgr::Free(5,DAT_14c79c098);
    DAT_14c79c098 = (void *)0x0;
    _DAT_14c79c0a4 = 0;
  }
  FUN_145371000();
  if (DAT_14c79c040 != (void *)0x0) {
    DAT_14c79c048 = 0;
    AK::MemoryMgr::Free(5,DAT_14c79c040);
    DAT_14c79c040 = (void *)0x0;
    _DAT_14c79c04c = 0;
  }
  if (DAT_14c79c050 != (void *)0x0) {
    DAT_14c79c058 = 0;
    AK::MemoryMgr::Free(5,DAT_14c79c050);
    DAT_14c79c050 = (void *)0x0;
    _DAT_14c79c05c = 0;
  }
  FUN_14538c9c0(&DAT_14c79c060);
  FUN_145088cc0();
  FUN_145372e30();
  FUN_1450ab460();
  return;
}



// FUNCTION 1450a6570 FUN_1450a6570 body=286 status=ok
// SIG undefined FUN_1450a6570(void)

undefined8 FUN_1450a6570(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *local_res8;
  undefined8 *local_res10;
  undefined1 local_18 [16];
  
  if ((DAT_14c79bf68 == 2) && (DAT_14c72f2c0 == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  if (*(int *)(DAT_14c791050 + 8) != 0) {
    QueryPerformanceCounter((LARGE_INTEGER *)(DAT_14c791050 + 0x48));
  }
  FUN_1453714a0(DAT_14c72f434);
  FUN_1450a7350();
  FUN_1450c7fe0();
  for (lVar1 = DAT_14c79bfa0; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x28)) {
    FUN_14509ebf0(lVar1);
  }
  lVar1 = FUN_1450a7790(local_18,uVar2);
  local_res8 = (undefined8 *)0xffffffffffffffff;
  FUN_145072680(&local_res10,&local_res8,0x10,8,"CAkLEngine::SoftwarePerformEpilogue",0,1);
  if (local_res10 != (undefined8 *)0x0) {
    *local_res10 = &PTR_FUN_149c26878;
    *(undefined1 *)(local_res10 + 1) = local_res8._0_1_;
  }
  local_res10 = local_res8;
  local_res8 = (undefined8 *)0xffffffffffffffff;
  FUN_145071ba0(param_1,&local_res10,1,*(undefined8 *)(lVar1 + 8));
  return param_1;
}



// FUNCTION 1450a6690 FUN_1450a6690 body=893 status=ok
// SIG undefined FUN_1450a6690(void)

void * FUN_1450a6690(longlong *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  void *pvVar5;
  undefined8 uVar6;
  longlong *_Dst;
  uint uVar7;
  ulonglong uVar8;
  float fVar9;
  char local_res10 [8];
  float local_res18 [2];
  float local_res20 [2];
  undefined1 local_48 [32];
  
  if (param_2 != (void *)0x0) goto LAB_1450a6815;
  lVar3 = FUN_1450a1a60();
  if (lVar3 == 0) goto LAB_1450a6714;
  uVar1 = *(uint *)(lVar3 + 0x60) & 0xf00;
  if ((0x300 < uVar1) || (((char)*(uint *)(lVar3 + 0x60) == '\0' && (uVar1 != 0x300))))
  goto LAB_1450a6714;
  local_res10[0] = '\0';
  param_2 = (void *)FUN_1450a0610(lVar3,local_res10);
  if (local_res10[0] == '\0') {
    if (param_2 != (void *)0x0) goto LAB_1450a6815;
  }
  else {
    if (param_2 == (void *)0x0) goto LAB_1450a6714;
    iVar2 = FUN_1450a99d0(&DAT_14c79c040,param_2);
    if (iVar2 != 1) {
      FUN_1450a0760(lVar3);
      goto LAB_1450a6714;
    }
    uVar8 = 0;
    uVar1 = DAT_14c79c048;
    if (DAT_14c79c048 != 0) {
      do {
        pvVar5 = (void *)DAT_14c79c040[uVar8];
        if ((((pvVar5 != param_2) && (*(longlong *)((longlong)pvVar5 + 0x38) == 0)) &&
            ((*(longlong *)((longlong)pvVar5 + 0x70) == 0 ||
             (*(longlong *)(*(longlong *)((longlong)pvVar5 + 0x70) + 0x80) == 0)))) &&
           (lVar4 = FUN_1450a1a60(), uVar1 = DAT_14c79c048, lVar4 == lVar3)) {
          iVar2 = FUN_145389de0(pvVar5,param_2,0);
          if (iVar2 != 1) {
            FUN_1450a0760(lVar3);
            for (_Dst = DAT_14c79c040;
                (_Dst != DAT_14c79c040 + DAT_14c79c048 && ((void *)*_Dst != param_2));
                _Dst = _Dst + 1) {
            }
            if (_Dst != DAT_14c79c040 + DAT_14c79c048) {
              if (_Dst < DAT_14c79c040 + (DAT_14c79c048 - 1)) {
                memmove(_Dst,_Dst + 1,
                        (ulonglong)
                        ((int)(DAT_14c79c040 + (DAT_14c79c048 - 1)) - (int)_Dst & 0xfffffff8));
              }
              DAT_14c79c048 = DAT_14c79c048 - 1;
            }
            goto LAB_1450a6714;
          }
          break;
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 < uVar1);
    }
LAB_1450a6815:
    if (*param_1 == 0) {
      FUN_145376d90(param_1);
      return param_2;
    }
  }
  if ((*param_1 == 0) || ((*(uint *)(*param_1 + 0x98) & 0xe0000) == 0)) {
    pvVar5 = AK::MemoryMgr::Malloc(5,0x1c8);
    if (pvVar5 == (void *)0x0) goto LAB_1450a6714;
    FUN_14537d560(pvVar5);
    *(byte *)((longlong)pvVar5 + 0x1c4) = *(byte *)((longlong)pvVar5 + 0x1c4) & 0xe8;
    *(undefined4 *)((longlong)pvVar5 + 0x1c0) = 0xffffffff;
  }
  else {
    pvVar5 = AK::MemoryMgr::Malloc(5,0x1e0);
    if (pvVar5 == (void *)0x0) {
LAB_1450a6714:
      FUN_145376d90(param_1);
      return (void *)0x0;
    }
    lVar3 = *param_1;
    FUN_14537d560(pvVar5);
    *(undefined4 *)((longlong)pvVar5 + 0x1c0) = 0xffffffff;
    *(undefined4 *)((longlong)pvVar5 + 0x1c8) = 0xc5800000;
    *(byte *)((longlong)pvVar5 + 0x1c4) = *(byte *)((longlong)pvVar5 + 0x1c4) & 0xec | 4;
    *(undefined4 *)((longlong)pvVar5 + 0x1cc) = 0xc5800000;
    *(undefined4 *)((longlong)pvVar5 + 0x1d0) = 0xc5800000;
    *(undefined4 *)((longlong)pvVar5 + 0x1d4) = 0;
    FUN_1450a5170(lVar3,(longlong)pvVar5 + 0x1d8,local_res18);
    *(float *)((longlong)pvVar5 + 0x1dc) = 1.0 - 1.0 / local_res18[0];
    FUN_1450a5320(lVar3,local_res20,local_res18);
    *(byte *)((longlong)pvVar5 + 0x1c4) =
         (local_res18[0]._0_1_ & 1) << 3 | *(byte *)((longlong)pvVar5 + 0x1c4) & 0xf7;
    if (local_res20[0] <= 0.0) {
      *(undefined4 *)((longlong)pvVar5 + 0x1d4) = 0;
    }
    else {
      fVar9 = expf((float)(int)-(uint)DAT_14c72f434 / ((float)DAT_14c72f42c * local_res20[0]));
      *(float *)((longlong)pvVar5 + 0x1d4) = fVar9;
    }
  }
  uVar6 = FUN_145376d60(local_48,param_1);
  iVar2 = FUN_1450a8cc0(pvVar5,uVar6,param_2);
  if ((iVar2 != 1) || (iVar2 = FUN_1450a99d0(&DAT_14c79c040,pvVar5), iVar2 != 1)) {
    FUN_1450a3360(pvVar5);
    AK::MemoryMgr::Free(5,pvVar5);
    pvVar5 = (void *)0x0;
  }
  FUN_145376d90(param_1);
  return pvVar5;
}



// FUNCTION 1450a6a10 FUN_1450a6a10 body=80 status=ok
// SIG undefined FUN_1450a6a10(void)

longlong FUN_1450a6a10(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (DAT_14c79c040 != DAT_14c79c040 + DAT_14c79c048) {
    plVar2 = DAT_14c79c040;
    do {
      lVar1 = *plVar2;
      if (((*(longlong *)(lVar1 + 0x70) == *param_1) && (*(longlong *)(lVar1 + 0x78) == param_1[1]))
         && (*(longlong *)(lVar1 + 0x80) == param_1[2])) {
        return lVar1;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != DAT_14c79c040 + DAT_14c79c048);
  }
  return 0;
}



// FUNCTION 1450a6a60 FUN_1450a6a60 body=220 status=ok
// SIG undefined FUN_1450a6a60(void)

undefined8 FUN_1450a6a60(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  
  if (((~*(byte *)(param_1 + 0x60) & 1) != 0) || (iVar1 = FUN_1450ce140(), iVar1 == 1)) {
    plVar3 = DAT_14c79c050;
    if (DAT_14c79c050 != DAT_14c79c050 + DAT_14c79c058) {
      do {
        iVar1 = (**(code **)(**(longlong **)(*plVar3 + 0xe8) + 0xe8))();
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0xe8) + 0xe8))();
        if (iVar2 <= iVar1) break;
        plVar3 = plVar3 + 1;
      } while (plVar3 != DAT_14c79c050 + DAT_14c79c058);
    }
    plVar3 = (longlong *)
             FUN_1450a96d0(&DAT_14c79c050,
                           (longlong)plVar3 - (longlong)DAT_14c79c050 >> 3 & 0xffffffff);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = param_1;
      FUN_1450a57e0(param_1);
      return 1;
    }
  }
  FUN_1450a4b50(param_1,1);
  return 2;
}



// FUNCTION 1450a6b40 FUN_1450a6b40 body=885 status=ok
// SIG undefined FUN_1450a6b40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1450a6b40(longlong *param_1,undefined1 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ulonglong *puVar5;
  longlong lVar6;
  void *pvVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  bool bVar20;
  char local_res10 [8];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [32];
  longlong local_88 [3];
  undefined1 local_70 [24];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  
  puVar17 = auStack_a8;
  *param_2 = 0;
  uVar19 = 0;
  uVar14 = uVar19;
  if (DAT_14c79c040 != DAT_14c79c040 + DAT_14c79c048) {
    puVar5 = DAT_14c79c040;
    do {
      uVar14 = *puVar5;
      if (((*(longlong *)(uVar14 + 0x70) == *param_1) &&
          (*(longlong *)(uVar14 + 0x78) == param_1[1])) &&
         (*(longlong *)(uVar14 + 0x80) == param_1[2])) {
        bVar20 = true;
        if (uVar14 == 0) goto LAB_1450a6bff;
        puVar16 = auStack_a8;
        if (((*(byte *)(uVar14 + 0x1c4) & 0x10) == 0) ||
           ((*(longlong *)(uVar14 + 8) != 0 &&
            (puVar16 = auStack_a8,
            *(char *)(*(longlong *)(*(longlong *)(uVar14 + 8) + 8) + 100) == '\0'))))
        goto LAB_1450a6e87;
        break;
      }
      puVar5 = puVar5 + 1;
      uVar14 = uVar19;
    } while (puVar5 != DAT_14c79c040 + DAT_14c79c048);
  }
  bVar20 = uVar14 == 0;
LAB_1450a6bff:
  *param_2 = bVar20;
  uStack_b0 = 0x1450a6c10;
  FUN_145376e50(param_1,local_88);
  if (local_88[0] == 0) {
    if (uVar14 == 0) {
      uStack_b0 = 0x1450a6e65;
      uVar11 = FUN_145376d60(local_40,param_1);
      lVar15 = 0;
LAB_1450a6e67:
      uStack_b0 = 0x1450a6e6f;
      uVar14 = FUN_1450a6690(uVar11,lVar15);
      puVar16 = auStack_a8;
      goto LAB_1450a6e72;
    }
  }
  else {
    uStack_b0 = 0x1450a6c23;
    cVar3 = FUN_1450d4a90(*param_1);
    if (cVar3 == '\0') {
      uStack_b0 = 0x1450a6e27;
      uVar11 = FUN_145376d60(local_58,local_88);
      uStack_b0 = 0x1450a6e36;
      lVar15 = FUN_1450a6b40(uVar11,local_res10);
      puVar16 = auStack_a8;
      if (lVar15 != 0) {
        puVar17 = auStack_a8;
        if (uVar14 == 0) {
          uStack_b0 = 0x1450a6e4f;
          uVar11 = FUN_145376d60(local_70,param_1);
          goto LAB_1450a6e67;
        }
        goto LAB_1450a6e77;
      }
    }
    else {
      lVar15 = param_1[2];
      puVar16 = auStack_a8;
      if (lVar15 != 0) {
        uStack_b0 = 0x1450a6c3f;
        lVar6 = FUN_1450d2450(lVar15);
        if (*(char *)(lVar6 + 0xe0) == '\0') {
          uStack_b0 = 0x1450a6c53;
          uVar11 = FUN_144d4eb60();
          uStack_b0 = 0x1450a6c5b;
          lVar6 = FUN_144d4eb00(uVar11);
        }
        else {
          lVar6 = lVar6 + 0x20;
        }
        puVar16 = auStack_a8;
        if (*(int *)(lVar6 + 0x48) != 0) {
          if (*(longlong *)(lVar15 + 8) == 0) {
            uStack_b0 = 0x1450a6c7b;
            pvVar7 = AK::MemoryMgr::Malloc(4,0x80);
            puVar16 = auStack_a8;
            if (pvVar7 != (void *)0x0) {
              uStack_b0 = 0x1450a6c8c;
              plVar8 = (longlong *)FUN_1450d2ae0(pvVar7);
              puVar16 = auStack_a8;
              if (plVar8 != (longlong *)0x0) {
                *(longlong **)(lVar15 + 8) = plVar8;
                plVar8[1] = lVar15;
                uStack_b0 = 0x1450a6cae;
                iVar4 = (**(code **)(*plVar8 + 8))(plVar8,*(undefined8 *)(lVar15 + 0x58));
                if (iVar4 == 1) goto LAB_1450a6cd4;
                uStack_b0 = 0x1450a6cbe;
                (**(code **)*plVar8)(plVar8,0);
                uStack_b0 = 0x1450a6ccb;
                AK::MemoryMgr::Free(4,plVar8);
                *(undefined8 *)(lVar15 + 8) = 0;
                puVar16 = auStack_a8;
              }
            }
          }
          else {
LAB_1450a6cd4:
            uVar1 = (ulonglong)*(uint *)(lVar6 + 0x48) * 8;
            uVar9 = uVar1 + 0xf;
            if (uVar9 <= uVar1) {
              uVar9 = 0xffffffffffffff0;
            }
            uStack_b0 = 0x1450a6cfc;
            plVar8 = *(longlong **)(lVar6 + 0x40);
            lVar15 = -(uVar9 & 0xfffffffffffffff0);
            puVar17 = auStack_a8 + lVar15;
            puVar18 = (undefined8 *)((longlong)local_88 + lVar15);
            puVar16 = auStack_a8 + lVar15;
            if (plVar8 != plVar8 + *(uint *)(lVar6 + 0x48)) {
              do {
                lVar12 = local_88[0];
                lVar10 = *plVar8;
                *(undefined8 *)(auStack_a8 + lVar15 + -8) = 0x1450a6d30;
                FUN_145376e10(local_70,lVar12,lVar10);
                *(undefined8 *)(auStack_a8 + lVar15 + -8) = 0x1450a6d39;
                lVar10 = FUN_145377010(local_70);
                uVar9 = uVar19;
                if (lVar10 == *plVar8) {
                  *(undefined8 *)(auStack_a8 + lVar15 + -8) = 0x1450a6d4b;
                  uVar11 = FUN_145376d60(local_58,local_70);
                  *(undefined8 *)(auStack_a8 + lVar15 + -8) = 0x1450a6d5a;
                  lVar12 = FUN_1450a6b40(uVar11,local_res10);
                  lVar10 = local_88[0];
                  if (lVar12 != 0) {
                    if ((uVar14 != 0) && (local_res10[0] == '\0')) {
                      lVar2 = *plVar8;
                      *(undefined8 *)(auStack_a8 + lVar15 + -8) = 0x1450a6d7f;
                      lVar10 = FUN_1450a4eb0(uVar14,lVar10,lVar2);
                      if (lVar10 != 0) goto LAB_1450a6d8e;
                    }
                    uVar9 = (ulonglong)((int)uVar19 + 1);
                    puVar18[uVar19] = lVar12;
                  }
                }
LAB_1450a6d8e:
                *(undefined8 *)(auStack_a8 + lVar15 + -8) = 0x1450a6d97;
                FUN_145376d90(local_70);
                plVar8 = plVar8 + 1;
                uVar19 = uVar9;
              } while (plVar8 != (longlong *)
                                 (*(longlong *)(lVar6 + 0x40) +
                                 (ulonglong)*(uint *)(lVar6 + 0x48) * 8));
              iVar4 = (int)uVar9;
              puVar16 = auStack_a8 + lVar15;
              if (iVar4 != 0) {
                if (uVar14 == 0) {
                  *(undefined8 *)(auStack_a8 + lVar15 + -8) = 0x1450a6dca;
                  uVar13 = FUN_145376d60(local_58,param_1);
                  uVar11 = *puVar18;
                  *(undefined8 *)(auStack_a8 + lVar15 + -8) = 0x1450a6dd5;
                  uVar14 = FUN_1450a6690(uVar13,uVar11);
                  puVar18 = (undefined8 *)((longlong)local_88 + lVar15 + 8);
                  if (uVar14 == 0) goto LAB_1450a6e7e;
                  uVar9 = (ulonglong)(iVar4 - 1);
                  puVar17 = auStack_a8 + lVar15;
                  if (iVar4 == 1) goto LAB_1450a6e77;
                }
                do {
                  uVar11 = *puVar18;
                  *(undefined8 *)(auStack_a8 + lVar15 + -8) = 0x1450a6e0e;
                  FUN_145389de0(uVar14,uVar11,0);
                  puVar18 = puVar18 + 1;
                  uVar9 = uVar9 - 1;
                  puVar16 = auStack_a8 + lVar15;
                } while (uVar9 != 0);
              }
            }
          }
        }
      }
    }
LAB_1450a6e72:
    puVar17 = puVar16;
    if (uVar14 == 0) goto LAB_1450a6e7e;
  }
LAB_1450a6e77:
  *(byte *)(uVar14 + 0x1c4) = *(byte *)(uVar14 + 0x1c4) & 0xef;
LAB_1450a6e7e:
  *(undefined8 *)(puVar17 + -8) = 0x1450a6e87;
  FUN_145376d90(local_88);
  puVar16 = puVar17;
LAB_1450a6e87:
  *(undefined8 *)(puVar16 + -8) = 0x1450a6e8f;
  FUN_145376d90(param_1);
  return uVar14;
}



// FUNCTION 1450a6ec0 FUN_1450a6ec0 body=12 status=ok
// SIG undefined FUN_1450a6ec0(void)

void FUN_1450a6ec0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_1450a9800(param_1,*param_2,param_3,*(undefined4 *)(param_2 + 2));
  return;
}



// FUNCTION 1450a6ed0 FUN_1450a6ed0 body=487 status=ok
// SIG undefined FUN_1450a6ed0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1450a6ed0(ulonglong *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  int *_Dst;
  undefined8 *_Dst_00;
  uint *puVar9;
  size_t sVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  undefined8 auStack_60 [5];
  
  lVar14 = (longlong)(int)param_4;
  uVar13 = lVar14 * 4 + 0xf;
  if (uVar13 <= (ulonglong)(lVar14 * 4)) {
    uVar13 = 0xffffffffffffff0;
  }
  uVar13 = uVar13 & 0xfffffffffffffff0;
  auStack_60[0] = 0x1450a6f29;
  lVar4 = -uVar13;
  uVar15 = 0;
  puVar9 = (uint *)(&stack0xffffffffffffffc8 + lVar4);
  if (0 < (int)param_4) {
    lVar8 = 0;
    uVar16 = param_3;
    do {
      uVar3 = *(undefined8 *)(*param_1 + (ulonglong)uVar16 * 8);
      *(undefined8 *)((longlong)auStack_60 + lVar4) = 0x1450a6f63;
      uVar13 = FUN_145389da0(uVar3,param_2);
      uVar6 = (uint)uVar13;
      puVar9[lVar8] = uVar6;
      if (uVar15 < uVar6) {
        uVar15 = uVar6;
      }
      uVar16 = uVar16 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < lVar14);
    uVar12 = (ulonglong)param_4;
    if (uVar15 != 0) {
      sVar10 = lVar14 * 8;
      uVar13 = sVar10 + 0xf;
      if (uVar13 <= sVar10) {
        uVar13 = 0xffffffffffffff0;
      }
      *(undefined8 *)((longlong)auStack_60 + lVar4) = 0x1450a6fac;
      lVar14 = -(uVar13 & 0xfffffffffffffff0);
      uVar13 = *param_1;
      _Dst_00 = (undefined8 *)(&stack0xffffffffffffffc8 + lVar14 + lVar4);
      *(undefined8 *)((longlong)auStack_60 + lVar14 + lVar4) = 0x1450a6fc7;
      memcpy(_Dst_00,(void *)(uVar13 + (ulonglong)param_3 * 8),sVar10);
      sVar10 = (ulonglong)(uVar15 + 1) * 4;
      uVar13 = sVar10 + 0xf;
      if (uVar13 <= sVar10) {
        uVar13 = 0xffffffffffffff0;
      }
      *(undefined8 *)((longlong)auStack_60 + lVar14 + lVar4) = 0x1450a6fe4;
      lVar8 = -(uVar13 & 0xfffffffffffffff0);
      uVar13 = sVar10 + 0xf;
      _Dst = (int *)(&stack0xffffffffffffffc8 + lVar8 + lVar14 + lVar4);
      if (uVar13 <= sVar10) {
        uVar13 = 0xffffffffffffff0;
      }
      *(undefined8 *)((longlong)auStack_60 + lVar8 + lVar14 + lVar4) = 0x1450a7001;
      lVar5 = -(uVar13 & 0xfffffffffffffff0);
      puVar1 = (undefined4 *)(&stack0xffffffffffffffc8 + lVar5 + lVar8 + lVar14 + lVar4);
      *(undefined8 *)((longlong)auStack_60 + lVar5 + lVar8 + lVar14 + lVar4) = 0x1450a7013;
      memset(_Dst,0,sVar10);
      puVar7 = puVar9;
      uVar13 = uVar12;
      if (0 < (int)param_4) {
        do {
          _Dst[*puVar7] = _Dst[*puVar7] + 1;
          uVar13 = uVar13 - 1;
          puVar7 = puVar7 + 1;
        } while (uVar13 != 0);
      }
      uVar16 = uVar15 + 1;
      *puVar1 = 0;
      if (1 < uVar16) {
        uVar13 = (ulonglong)uVar15;
        lVar11 = (longlong)puVar1 - (longlong)_Dst;
        puVar7 = (uint *)(&stack0xffffffffffffffcc + lVar5 + lVar8 + lVar14 + lVar4);
        do {
          uVar16 = *(int *)(lVar11 + (longlong)_Dst) + *_Dst;
          _Dst = _Dst + 1;
          *puVar7 = uVar16;
          uVar13 = uVar13 - 1;
          puVar7 = puVar7 + 1;
        } while (uVar13 != 0);
      }
      uVar13 = (ulonglong)uVar16;
      if (0 < (int)param_4) {
        do {
          uVar15 = *puVar9;
          puVar9 = puVar9 + 1;
          uVar3 = *_Dst_00;
          _Dst_00 = _Dst_00 + 1;
          iVar2 = puVar1[uVar15];
          puVar1[uVar15] = iVar2 + 1;
          uVar13 = *param_1;
          *(undefined8 *)(uVar13 + (ulonglong)(iVar2 + param_3) * 8) = uVar3;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      return CONCAT71((int7)(uVar13 >> 8),1);
    }
  }
  return uVar13 & 0xffffffffffffff00;
}



// FUNCTION 1450a70c0 FUN_1450a70c0 body=173 status=ok
// SIG undefined FUN_1450a70c0(void)

void FUN_1450a70c0(void)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)DAT_14c79c048;
  plVar2 = DAT_14c79c040;
  plVar4 = DAT_14c79c040;
  if (DAT_14c79c040 != DAT_14c79c040 + uVar5) {
    do {
      if (*(longlong *)(*plVar2 + 8) != 0) {
        pbVar1 = (byte *)(*(longlong *)(*plVar2 + 8) + 0x208);
        *pbVar1 = *pbVar1 & 0xfe;
        uVar5 = (ulonglong)DAT_14c79c048;
        plVar4 = DAT_14c79c040;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar4 + uVar5);
  }
  uVar5 = (ulonglong)DAT_14c79c058;
  if (DAT_14c79c050 != DAT_14c79c050 + uVar5) {
    plVar2 = DAT_14c79c050;
    plVar4 = DAT_14c79c050;
    do {
      lVar3 = *(longlong *)(*plVar2 + 8) + -0x18;
      if (*(longlong *)(*plVar2 + 8) == 0) {
        lVar3 = 0;
      }
      if (lVar3 != 0) {
        *(byte *)(lVar3 + 0x220) = *(byte *)(lVar3 + 0x220) & 0xfe;
        uVar5 = (ulonglong)DAT_14c79c058;
        plVar4 = DAT_14c79c050;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar4 + uVar5);
  }
  return;
}



// FUNCTION 1450a7170 FUN_1450a7170 body=475 status=ok
// SIG undefined FUN_1450a7170(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1450a7170(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint local_res8;
  ulonglong local_res10;
  undefined8 auStack_80 [5];
  longlong local_58 [3];
  
  local_res10 = (ulonglong)DAT_14c79c058;
  uVar15 = 0;
  local_res8 = 0;
  uVar2 = local_res10 * 8;
  uVar10 = uVar2 + 0xf;
  if (uVar10 <= uVar2) {
    uVar10 = 0xffffffffffffff0;
  }
  auStack_80[0] = 0x1450a71c4;
  lVar7 = -(uVar10 & 0xfffffffffffffff0);
  uVar10 = uVar2 + 0xf;
  if (uVar10 <= uVar2) {
    uVar10 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_80 + lVar7) = 0x1450a71e5;
  lVar8 = -(uVar10 & 0xfffffffffffffff0);
  lVar3 = (longlong)local_58 + lVar8 + lVar7;
  if (DAT_14c79c058 != 0) {
    lVar14 = 0;
    do {
      lVar13 = 0;
      lVar5 = *(longlong *)(DAT_14c79c050 + lVar14);
      plVar1 = (longlong *)(lVar5 + 0x128);
      iVar11 = *(int *)(lVar5 + 0x158);
      if (((iVar11 == 0x2d) || (iVar11 == 0x11)) && (*plVar1 != 0)) {
        uVar4 = *(ushort *)(lVar5 + 0x138);
        uVar10 = (ulonglong)*(byte *)(lVar5 + 0x130);
        uVar9 = *(ushort *)(lVar5 + 0x13a);
        if (uVar4 <= *(ushort *)(lVar5 + 0x13a)) {
          uVar9 = uVar4;
        }
        iVar12 = (uint)uVar4 - (uint)uVar9;
        if (iVar12 != 0) {
          if (*(byte *)(lVar5 + 0x130) != 0) {
            do {
              uVar4 = *(ushort *)(lVar5 + 0x138);
              lVar6 = *plVar1;
              *(undefined8 *)((longlong)auStack_80 + lVar8 + lVar7) = 0x1450a728c;
              memset((void *)(lVar6 + ((ulonglong)uVar4 * lVar13 + (ulonglong)(uint)uVar9) * 4),0,
                     (ulonglong)(uint)(iVar12 * 4));
              lVar13 = lVar13 + 1;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
            iVar11 = *(int *)(lVar5 + 0x158);
            uVar15 = local_res8;
          }
          *(undefined2 *)(lVar5 + 0x13a) = *(undefined2 *)(lVar5 + 0x138);
        }
        if ((iVar11 == 0x11) && (0.0 < *(float *)(lVar5 + 0x90))) {
          for (lVar13 = *(longlong *)(lVar5 + 0x38); lVar13 != 0;
              lVar13 = *(longlong *)(lVar13 + 0x20)) {
            *(undefined4 *)(lVar13 + 0xc) = 0;
          }
        }
        *(undefined4 *)(lVar5 + 0x134) = *(undefined4 *)(lVar5 + 0x158);
        *(undefined8 *)((longlong)auStack_80 + lVar8 + lVar7) = 0x1450a72eb;
        FUN_1450cf8a0(lVar5);
        *(undefined8 *)((longlong)auStack_80 + lVar8 + lVar7) = 0x1450a72f6;
        FUN_1450cf910(lVar5,plVar1);
        uVar10 = (ulonglong)uVar15;
        uVar15 = uVar15 + 1;
        *(longlong *)((longlong)local_58 + lVar7 + uVar10 * 8) = lVar5 + 0x88;
        *(longlong **)(lVar3 + uVar10 * 8) = plVar1;
        local_res8 = uVar15;
      }
      lVar14 = lVar14 + 8;
      local_res10 = local_res10 - 1;
    } while (local_res10 != 0);
  }
  *(undefined8 *)((longlong)auStack_80 + lVar8 + lVar7) = 0x1450a7336;
  FUN_145381fb0(uVar15,(longlong)local_58 + lVar7,0,lVar3);
  return;
}



// FUNCTION 1450a7350 FUN_1450a7350 body=1077 status=ok
// SIG undefined FUN_1450a7350(void)

void FUN_1450a7350(void)

{
  byte bVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  int *piVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  uint uStackX_c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined8 local_70;
  
  uVar10 = (ulonglong)DAT_14c79c058;
  plVar2 = DAT_14c79c050;
  plVar4 = DAT_14c79c050;
  if (DAT_14c79c050 != DAT_14c79c050 + uVar10) {
    do {
      if (*(int *)(*plVar4 + 0x100) == 1) {
        FUN_1450cf670();
        uVar10 = (ulonglong)DAT_14c79c058;
        plVar2 = DAT_14c79c050;
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar2 + uVar10);
  }
  FUN_14538d210();
  FUN_1450a88c0();
  puVar8 = (undefined1 *)0x0;
  if (DAT_14c79c048 != 0) {
    do {
      lVar5 = *(longlong *)(DAT_14c79c040 + (longlong)puVar8 * 8);
      bVar1 = *(byte *)(lVar5 + 0x1b4) & 1;
      if ((bVar1 == 0) || ((*(byte *)(lVar5 + 0x1b4) & 2) != 0)) {
        puVar3 = (undefined1 *)0x0;
        if (bVar1 == 0) {
          puVar3 = &DAT_0000000f;
        }
        FUN_14537a700(lVar5,puVar3);
      }
      plVar2 = *(longlong **)(lVar5 + 8);
      if (plVar2 == (longlong *)0x0) {
        *(undefined4 *)(lVar5 + 0x10) = 0x3f800000;
      }
      else if ((*(byte *)(plVar2 + 0x41) & 1) == 0) {
        (**(code **)(*plVar2 + 0x68))(plVar2,0);
        FUN_1450a4de0(lVar5);
      }
      else {
        (**(code **)(*plVar2 + 0x70))(plVar2);
        if ((*(byte *)(plVar2 + 0x41) & 0x10) != 0) {
          (**(code **)(*plVar2 + 0x78))(plVar2);
        }
        FUN_1450a4de0(lVar5);
      }
      if ((*(longlong *)(lVar5 + 8) == 0) || (*(longlong *)(lVar5 + 0x38) == 0)) {
        fVar11 = (float)((*(uint *)(lVar5 + 0x10) & 0x7fffff) + 0x3f800000);
        fVar12 = fVar11 + 1.0;
        *(float *)(lVar5 + 0x14) =
             (((fVar11 * fVar11 * fVar11 - 1.0) * 1.1581186) / (fVar12 * fVar12 * fVar12)) * 20.0 +
             ((float)(*(uint *)(lVar5 + 0x10) >> 0x17 & 0xff) - 127.0) * 6.0206003;
      }
      else {
        FUN_1453895e0(lVar5);
      }
      uVar7 = (int)puVar8 + 1;
      puVar8 = (undefined1 *)(ulonglong)uVar7;
    } while (uVar7 < DAT_14c79c048);
  }
  FUN_1450a88c0();
  plVar2 = DAT_14c79c050;
  if (DAT_14c79c050 != DAT_14c79c050 + DAT_14c79c058) {
    do {
      if (*(int *)(*plVar2 + 0x100) == 1) {
        FUN_1453895e0(*plVar2,1);
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != DAT_14c79c050 + DAT_14c79c058);
  }
  lVar5 = (longlong)(int)(DAT_14c79c048 - 1);
  if (-1 < (int)(DAT_14c79c048 - 1)) {
    do {
      if ((*(byte *)(*(longlong *)(DAT_14c79c040 + lVar5 * 8) + 0x1c4) & 4) != 0) {
        FUN_1450a8e70();
      }
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  if (DAT_14c79c0a0 != 0) {
    fVar11 = -3.4028235e+38;
    iVar9 = *DAT_14c79c098;
    piVar6 = DAT_14c79c098;
    if (DAT_14c79c098 != DAT_14c79c098 + (ulonglong)DAT_14c79c0a0 * 6) {
      do {
        uVar7 = uStackX_c;
        fVar12 = fVar11;
        if (iVar9 != *piVar6) {
          uStackX_c = uStackX_c & 0xffffff00;
          local_90 = 0;
          local_88 = 0;
          local_80 = 0xff;
          local_78 = 0xff;
          local_70 = 0;
          local_98 = 0;
          FUN_14507f370(g_pGameSyncMgr,CONCAT44(uVar7,iVar9) & 0xffffff00ffffffff,&local_98,fVar11,0
                        ,1,0);
          iVar9 = *piVar6;
          fVar12 = -3.4028235e+38;
        }
        fVar11 = (float)piVar6[4];
        FUN_1450a9220();
        if (fVar11 <= fVar12) {
          fVar11 = fVar12;
        }
        piVar6 = piVar6 + 6;
      } while (piVar6 != DAT_14c79c098 + (ulonglong)DAT_14c79c0a0 * 6);
    }
    local_90 = 0;
    local_88 = 0;
    local_80 = 0xff;
    local_78 = 0xff;
    local_70 = 0;
    local_98 = 0;
    FUN_14507f370(g_pGameSyncMgr,CONCAT44(uStackX_c,iVar9) & 0xffffff00ffffffff,&local_98,fVar11,0,1
                  ,0);
    DAT_14c79c0a0 = 0;
  }
  plVar2 = DAT_14c79c050;
  if (DAT_14c79c050 != DAT_14c79c050 + DAT_14c79c058) {
    do {
      if (*(int *)(*plVar2 + 0x100) == 1) {
        FUN_14538a260();
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != DAT_14c79c050 + DAT_14c79c058);
  }
  return;
}



// FUNCTION 1450a7790 FUN_1450a7790 body=610 status=ok
// SIG undefined FUN_1450a7790(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1450a7790(undefined8 param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *local_res18;
  undefined8 *local_res20;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar7;
  undefined8 uVar6;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  plVar5 = DAT_14c79c050;
  if (DAT_14c79c050 != DAT_14c79c050 + DAT_14c79c058) {
    do {
      lVar4 = *plVar5;
      *(undefined4 *)(lVar4 + 0x158) = 0x2c;
      if (((*(int *)(lVar4 + 0x100) == 1) &&
          (cVar2 = FUN_1450cd040(lVar4,lVar4 + 0x128), cVar2 != '\0')) && (param_2 != '\0')) {
        *(undefined2 *)(lVar4 + 0x13a) = 0;
        *(undefined8 *)(lVar4 + 0x140) = 0;
        *(undefined4 *)(lVar4 + 0x148) = 0xffffffff;
        *(undefined4 *)(lVar4 + 0x158) = 0x2b;
      }
      (**(code **)(**(longlong **)(lVar4 + 0xe8) + 0xe8))();
      uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
      plVar5 = plVar5 + 1;
    } while (plVar5 != DAT_14c79c050 + DAT_14c79c058);
  }
  FUN_145071a40(local_48,1);
  FUN_145071a40(local_38,1);
  uVar1 = DAT_14c79c058;
  DAT_14c79c02a = 1;
  if ((param_2 != '\0') && (DAT_14c79c058 != 0)) {
    _DAT_14c79c030 = 0;
    uVar3 = FUN_145071a40(local_88,1);
    uVar6 = CONCAT44(uVar7,uVar1);
    uVar3 = FUN_1450a7cb0(local_78,uVar3,DAT_14c79c050,&DAT_14c79c030,uVar6,10);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    FUN_145071b80(local_48,uVar3);
  }
  lVar4 = FUN_1450721d0(local_68,local_48,2,"ProcessVoices WhenAll",CONCAT44(uVar7,1));
  local_res18 = (undefined8 *)0xffffffffffffffff;
  FUN_145072680(&local_res20,&local_res18,0x10,8,"CAkLEngine::PostRunVpls",0,1);
  if (local_res20 != (undefined8 *)0x0) {
    *local_res20 = &PTR_FUN_149c26838;
  }
  local_res20 = local_res18;
  local_res18 = (undefined8 *)0xffffffffffffffff;
  FUN_145071ba0(local_98,&local_res20,1,*(undefined8 *)(lVar4 + 8));
  if (param_2 == '\0') {
    FUN_145071b50(param_1,local_98);
    return param_1;
  }
  uVar3 = FUN_145071b50(local_58,local_98);
  FUN_1450a7a00(param_1,uVar3);
  return param_1;
}



// FUNCTION 1450a7a00 FUN_1450a7a00 body=681 status=ok
// SIG undefined FUN_1450a7a00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1450a7a00(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  char *_Dst;
  ulonglong uVar5;
  ulonglong _Size;
  undefined8 *local_res18;
  undefined8 *local_res20;
  undefined8 auStack_f0 [5];
  undefined8 uStack_c8;
  undefined4 auStack_c0 [6];
  char local_a8 [8];
  undefined8 local_a0;
  undefined1 local_98 [8];
  longlong local_90;
  uint local_78;
  int local_74;
  longlong local_60;
  uint local_58;
  int local_54;
  longlong local_40;
  
  uVar3 = DAT_14c79c048;
  if ((DAT_14c79c048 == 0) || (DAT_14c79c029 != '\0')) {
    auStack_f0[0] = 0x1450a7c8f;
    FUN_145071b50();
  }
  else {
    uVar5 = (ulonglong)DAT_14c79c048 * 8 + 0xf;
    if (uVar5 <= (ulonglong)DAT_14c79c048 * 8) {
      uVar5 = 0xffffffffffffff0;
    }
    auStack_f0[0] = 0x1450a7a71;
    lVar1 = -(uVar5 & 0xfffffffffffffff0);
    *(undefined4 *)((longlong)&uStack_c8 + lVar1) = 1;
    *(undefined8 *)((longlong)auStack_f0 + lVar1) = 0x1450a7a94;
    FUN_145072530(local_98,local_a8 + lVar1,DAT_14c79c048,"AK BusTask Graph");
    uVar5 = 0;
    if (0 < (int)uVar3) {
      do {
        lVar2 = local_90;
        *(undefined4 *)((longlong)auStack_c0 + lVar1 + 8) = 1;
        *(undefined4 *)((longlong)auStack_c0 + lVar1) = 0;
        *(char **)((longlong)&uStack_c8 + lVar1) = "AK BusTask";
        *(undefined8 *)((longlong)auStack_f0 + lVar1) = 0x1450a7aea;
        FUN_145072680(&local_res18,lVar2 + uVar5 * 8,0x10);
        if (local_res18 != (undefined8 *)0x0) {
          *local_res18 = &PTR_FUN_149c26848;
          *(int *)(local_res18 + 1) = (int)uVar5;
        }
        *(undefined8 *)((longlong)auStack_f0 + lVar1) = 0x1450a7b0d;
        thunk_FUN_145073070(local_98);
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while ((int)uVar4 < (int)uVar3);
    }
    _Size = (ulonglong)uVar3;
    uVar5 = _Size + 0xf;
    if (uVar5 <= _Size) {
      uVar5 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)auStack_f0 + lVar1) = 0x1450a7b3c;
    lVar2 = -(uVar5 & 0xfffffffffffffff0);
    _Dst = local_a8 + lVar2 + lVar1;
    *(undefined8 *)((longlong)auStack_f0 + lVar2 + lVar1) = 0x1450a7b51;
    memset(_Dst,0,_Size);
    *(undefined8 *)((longlong)auStack_f0 + lVar2 + lVar1) = 0x1450a7b61;
    FUN_14538c750(&local_78,&DAT_14c79c060);
    while( true ) {
      *(undefined8 *)((longlong)auStack_f0 + lVar2 + lVar1) = 0x1450a7b80;
      FUN_14538c810(&local_58,&DAT_14c79c060);
      if (((local_60 == local_40) && (local_78 == local_58)) && (local_74 == local_54)) break;
      *(undefined8 *)((longlong)auStack_f0 + lVar2 + lVar1) = 0x1450a7ba5;
      FUN_1450725c0(local_98);
      _Dst[local_78] = '\x01';
      *(undefined8 *)((longlong)auStack_f0 + lVar2 + lVar1) = 0x1450a7bb5;
      FUN_14538c850(&local_78);
    }
    uVar4 = 0;
    if (uVar3 != 0) {
      do {
        if (*_Dst == '\0') {
          *(undefined8 *)((longlong)auStack_f0 + lVar2 + lVar1) = 0x1450a7bd3;
          FUN_1450725e0(local_98,uVar4,param_2);
        }
        uVar4 = uVar4 + 1;
        _Dst = _Dst + 1;
      } while (uVar4 < uVar3);
    }
    *(undefined8 *)((longlong)auStack_f0 + lVar2 + lVar1) = 0x1450a7be9;
    FUN_145072600(local_98,local_a8);
    *(undefined4 *)((longlong)auStack_c0 + lVar2 + lVar1 + 8) = 1;
    *(undefined4 *)((longlong)auStack_c0 + lVar2 + lVar1) = 0;
    local_res18 = (undefined8 *)0xffffffffffffffff;
    *(char **)((longlong)&uStack_c8 + lVar2 + lVar1) = "CAkLEngine::ReleaseBuffersAndFeedbackAsync";
    *(undefined8 *)((longlong)auStack_f0 + lVar2 + lVar1) = 0x1450a7c2d;
    FUN_145072680(&local_res20,&local_res18,0x10);
    if (local_res20 != (undefined8 *)0x0) {
      *local_res20 = &PTR_FUN_149c26888;
      *(undefined1 *)(local_res20 + 1) = local_res18._0_1_;
    }
    local_res20 = local_res18;
    local_res18 = (undefined8 *)0xffffffffffffffff;
    *(undefined8 *)((longlong)auStack_f0 + lVar2 + lVar1) = 0x1450a7c7f;
    FUN_145071ba0(param_1,&local_res20,1,local_a0);
    *(undefined8 *)((longlong)auStack_f0 + lVar2 + lVar1) = 0x1450a7c88;
    FUN_145072580(local_98);
  }
  return param_1;
}



// FUNCTION 1450a7cb0 FUN_1450a7cb0 body=330 status=ok
// SIG undefined FUN_1450a7cb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1450a7cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint *param_4,uint param_5,
             undefined4 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *local_res20;
  undefined8 auStack_a0 [5];
  undefined8 uStack_78;
  undefined4 auStack_70 [6];
  undefined1 local_58 [8];
  longlong local_50;
  
  auStack_a0[0] = 0x1450a7ce0;
  uVar4 = FUN_145072130(1);
  uVar5 = param_5;
  if (uVar4 < param_5) {
    auStack_a0[0] = 0x1450a7cf4;
    uVar5 = FUN_145072130(1);
  }
  uVar8 = (ulonglong)uVar5;
  uVar6 = uVar8 * 8 + 0xf;
  if (uVar6 <= uVar8 * 8) {
    uVar6 = 0xffffffffffffff0;
  }
  auStack_a0[0] = 0x1450a7d23;
  lVar2 = -(uVar6 & 0xfffffffffffffff0);
  *(undefined4 *)((longlong)&uStack_78 + lVar2) = 1;
  *(undefined8 *)((longlong)auStack_a0 + lVar2) = 0x1450a7d46;
  FUN_145072530(local_58,local_58 + lVar2,uVar5,"VoiceGraph");
  LOCK();
  *param_4 = param_5;
  UNLOCK();
  if (uVar5 != 0) {
    lVar7 = 0;
    lVar9 = 0;
    do {
      lVar3 = local_50;
      *(undefined4 *)((longlong)auStack_70 + lVar2 + 8) = 1;
      *(undefined4 *)((longlong)auStack_70 + lVar2) = param_6;
      *(undefined8 *)((longlong)&uStack_78 + lVar2) = 0;
      *(undefined8 *)((longlong)auStack_a0 + lVar2) = 0x1450a7d90;
      FUN_145072680(&local_res20,lVar3 + lVar9,0x18);
      if (local_res20 != (undefined8 *)0x0) {
        *local_res20 = &PTR_FUN_149c26858;
        local_res20[1] = param_4;
        local_res20[2] = param_3;
      }
      uVar1 = *(undefined8 *)(lVar7 + local_50);
      *(undefined8 *)((longlong)auStack_a0 + lVar2) = 0x1450a7dbc;
      thunk_FUN_145073070(local_58,uVar1);
      lVar9 = lVar9 + 8;
      lVar7 = lVar7 + 8;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  *(undefined8 *)((longlong)auStack_a0 + lVar2) = 0x1450a7dda;
  FUN_145072600(local_58,param_1);
  *(undefined8 *)((longlong)auStack_a0 + lVar2) = 0x1450a7de3;
  FUN_145072580(local_58);
  return param_1;
}



// FUNCTION 1450a7e00 FUN_1450a7e00 body=399 status=ok
// SIG undefined FUN_1450a7e00(void)

void FUN_1450a7e00(void)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  longlong *_Dst;
  
  _Dst = DAT_14c79c050;
  if (DAT_14c79c050 != DAT_14c79c050 + DAT_14c79c058) {
    do {
      lVar2 = *_Dst;
      if (*(int *)(lVar2 + 0x158) != 0x2c) {
        if (*(int *)(lVar2 + 0x158) == 0x2e) {
          FUN_1450cfbb0(lVar2,lVar2 + 0x128);
        }
        else {
          FUN_1450ce110();
        }
      }
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xe8) + 0x18);
      pbVar1 = (byte *)(lVar3 + 0x314);
      if ((*(int *)(lVar2 + 0x100) == 2) ||
         (((*pbVar1 & 0x10) != 0 && (*(int *)(lVar3 + 0x388) == -1)))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (((*pbVar1 & 0x40) == 0) || (*(int *)(lVar2 + 0x100) != 1)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (*(int *)(lVar2 + 0x158) == 0x11) {
        if ((!bVar4) && (lVar3 = *(longlong *)(lVar2 + 0xf0), lVar3 != 0)) {
          *(undefined8 *)(lVar2 + 0xf0) = 0;
          FUN_1450cf090(lVar2,0);
          iVar6 = FUN_1450cf390(lVar2,lVar3,1,0);
          if ((iVar6 == 1) && (iVar6 = FUN_1450ce140(lVar2), iVar6 == 1)) {
            FUN_145388e50(lVar3);
            goto LAB_1450a7f14;
          }
        }
LAB_1450a7f0f:
        FUN_1450cca10(lVar2);
      }
      else {
        if ((*(int *)(lVar2 + 0x158) == 2) || (bVar4)) goto LAB_1450a7f0f;
        if (bVar5) {
          FUN_1450cca50(lVar2);
        }
      }
LAB_1450a7f14:
      if (*(int *)(lVar2 + 0x100) == 2) {
        if (_Dst < DAT_14c79c050 + (DAT_14c79c058 - 1)) {
          memmove(_Dst,_Dst + 1,
                  (ulonglong)((int)(DAT_14c79c050 + (DAT_14c79c058 - 1)) - (int)_Dst & 0xfffffff8));
        }
        DAT_14c79c058 = DAT_14c79c058 - 1;
        FUN_1450a4b50(lVar2,0);
      }
      else {
        _Dst = _Dst + 1;
      }
    } while (_Dst != DAT_14c79c050 + DAT_14c79c058);
  }
  return;
}



// FUNCTION 1450a7f90 FUN_1450a7f90 body=691 status=ok
// SIG undefined FUN_1450a7f90(void)

void FUN_1450a7f90(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  short *psVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 local_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_68 [80];
  
  if (*(char *)(param_2 + 0x56a) != '\0') {
    return;
  }
  *(undefined1 *)(param_2 + 0x56a) = 1;
  plVar7 = (longlong *)(param_1 + 0x170);
  if (*(short *)(param_1 + 0x1b0) == 0) {
    iVar8 = 3;
    psVar4 = (short *)(param_1 + 0x164);
    lVar6 = 3;
    do {
      if ((*(char *)((longlong)psVar4 + -5) == '\0') && (*psVar4 == 0)) {
        plVar7 = (longlong *)((longlong)iVar8 * 0x30 + 0xb8 + param_1);
        break;
      }
      iVar8 = iVar8 + -1;
      psVar4 = psVar4 + -0x18;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  if ((int)plVar7[1] == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x568) != '\0') {
    local_a8 = *(undefined4 *)(param_2 + 0x90);
    uStack_a4 = *(undefined4 *)(param_2 + 0x94);
    uStack_a0 = *(undefined8 *)(param_2 + 0x98);
    plVar1 = (longlong *)(param_2 + 0x510);
    FUN_14538d590(local_68,param_2 + 0xa0,param_2 + 0x4e0,plVar1,(longlong *)(param_2 + 0x540),
                  &local_a8);
    uVar9 = 0;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      uVar9 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x20);
    }
    uVar5 = FUN_145377010(param_1 + 0x70);
    FUN_14538d610(local_68,uVar5,uVar9);
    FUN_14538d5d0(local_68,plVar7,param_2 + 0x428);
    FUN_1450a4d40(param_2 + 0x4e0);
    if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
      FUN_1450a4d40(plVar1);
    }
    local_88 = *(longlong *)(param_2 + 0x540);
    uStack_80 = *(undefined8 *)(param_2 + 0x548);
    local_78 = *(undefined8 *)(param_2 + 0x550);
    FUN_14509e400(param_2,param_2 + 0x4e0,plVar1,&local_88,*(undefined8 *)(param_1 + 0x90));
    return;
  }
  if ((int)plVar7[1] == 1) {
    lVar6 = *plVar7;
    uVar2 = *(uint *)(param_2 + 0x60);
    uVar3 = *(uint *)(lVar6 + 8);
    if ((((char)uVar2 == (char)uVar3) && (((uVar2 ^ uVar3) & 0xf00) == 0)) &&
       (((uVar2 ^ uVar3) & 0xfffff000) == 0)) {
      FUN_1450a4d40(lVar6);
      FUN_1450a9400(lVar6,*(undefined4 *)(*(longlong *)(*plVar7 + 0x18) + 0x50),
                    *(undefined4 *)(*(longlong *)(*plVar7 + 0x18) + 0x54),1);
      goto LAB_1450a80e1;
    }
  }
  local_a8 = *(undefined4 *)(param_2 + 0x90);
  uStack_a4 = *(uint *)(param_2 + 0x94);
  uStack_a0 = *(undefined8 *)(param_2 + 0x98);
  lVar6 = param_2 + 0x4e0;
  FUN_14538d590(local_68,param_2 + 0xa0,lVar6,0,0,&local_a8);
  FUN_14538d5d0(local_68,plVar7,param_2 + 0x428);
  FUN_1450a4d40(lVar6);
LAB_1450a80e1:
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  local_78 = 0;
  local_88 = (ulonglong)uStack_a4 << 0x20;
  uStack_80 = 0;
  FUN_14509e400(param_2,lVar6,0,&local_88,*(undefined8 *)(param_1 + 0x90));
  return;
}



// FUNCTION 1450a8250 FUN_1450a8250 body=25 status=ok
// SIG undefined FUN_1450a8250(void)

bool FUN_1450a8250(void)

{
  uint uVar1;
  
  uVar1 = FUN_145072130(1);
  return 1 < uVar1;
}



// FUNCTION 1450a8270 FUN_1450a8270 body=414 status=ok
// SIG undefined FUN_1450a8270(void)

void FUN_1450a8270(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *local_28 [2];
  
  if (DAT_14c79c040 != DAT_14c79c040 + DAT_14c79c048) {
    plVar8 = DAT_14c79c040;
    do {
      lVar3 = *plVar8;
      puVar5 = (undefined8 *)(lVar3 + 0xa8);
      uVar7 = 0;
      do {
        if (*(int *)(puVar5 + 1) != 0) {
          lVar6 = *(longlong *)(*(longlong *)*puVar5 + 0x98);
          if ((lVar6 != 0) &&
             (cVar4 = FUN_14538bec0(lVar6,param_1,*(undefined8 *)(*(longlong *)*puVar5 + 0x90)),
             cVar4 != '\0')) goto LAB_1450a83c7;
        }
        uVar7 = uVar7 + 1;
        puVar5 = puVar5 + 6;
      } while (uVar7 < 4);
      cVar4 = FUN_145377230(lVar3 + 0x70);
      if ((cVar4 != '\0') &&
         (lVar6 = *(longlong *)(lVar3 + 0x1a0),
         lVar6 != lVar6 + (ulonglong)*(uint *)(lVar3 + 0x1a8) * 0x28)) {
LAB_1450a8330:
        if (*(longlong *)(lVar6 + 8) != param_1) goto LAB_1450a8388;
        local_28[0] = (longlong *)0x0;
        FUN_1453771b0(lVar3 + 0x70,local_28);
        cVar4 = FUN_14538bc90(lVar6 + 8,*(undefined8 *)(*(longlong *)(lVar3 + 0x198) + 0x88));
        if (cVar4 != '\0') {
          if (local_28[0] != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_28[0] + 0x14);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_28[0] + 0x18))();
            }
            local_28[0] = (longlong *)0x0;
          }
          goto LAB_1450a8388;
        }
        if (local_28[0] != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_28[0] + 0x14);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_28[0] + 0x18))();
          }
          local_28[0] = (longlong *)0x0;
        }
LAB_1450a83c7:
        FUN_14537ab70(*plVar8);
      }
LAB_1450a83cf:
      plVar8 = plVar8 + 1;
    } while (plVar8 != DAT_14c79c040 + DAT_14c79c048);
  }
  return;
LAB_1450a8388:
  lVar6 = lVar6 + 0x28;
  if (lVar6 == *(longlong *)(lVar3 + 0x1a0) + (ulonglong)*(uint *)(lVar3 + 0x1a8) * 0x28)
  goto LAB_1450a83cf;
  goto LAB_1450a8330;
}



// FUNCTION 1450a8410 FUN_1450a8410 body=409 status=ok
// SIG undefined FUN_1450a8410(void)

void FUN_1450a8410(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *local_28 [2];
  
  if (DAT_14c79c040 != DAT_14c79c040 + DAT_14c79c048) {
    plVar8 = DAT_14c79c040;
    do {
      lVar3 = *plVar8;
      puVar5 = (undefined8 *)(lVar3 + 0xa8);
      uVar7 = 0;
      do {
        if (*(int *)(puVar5 + 1) != 0) {
          lVar6 = *(longlong *)(*(longlong *)*puVar5 + 0x98);
          if ((lVar6 != 0) &&
             (cVar4 = FUN_14538bf40(lVar6,param_1,*(undefined8 *)(*(longlong *)*puVar5 + 0x90),1),
             cVar4 != '\0')) goto LAB_1450a8567;
        }
        uVar7 = uVar7 + 1;
        puVar5 = puVar5 + 6;
      } while (uVar7 < 4);
      cVar4 = FUN_145377230(lVar3 + 0x70);
      if ((cVar4 != '\0') &&
         (lVar6 = *(longlong *)(lVar3 + 0x1a0),
         lVar6 != lVar6 + (ulonglong)*(uint *)(lVar3 + 0x1a8) * 0x28)) {
LAB_1450a84d0:
        if (*(longlong *)(lVar6 + 0x10) != param_1) goto LAB_1450a8528;
        local_28[0] = (longlong *)0x0;
        FUN_1453771b0(lVar3 + 0x70,local_28);
        cVar4 = FUN_14538bc90(lVar6 + 8,*(undefined8 *)(*(longlong *)(lVar3 + 0x198) + 0x88));
        if (cVar4 != '\0') {
          if (local_28[0] != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_28[0] + 0x14);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_28[0] + 0x18))();
            }
            local_28[0] = (longlong *)0x0;
          }
          goto LAB_1450a8528;
        }
        if (local_28[0] != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_28[0] + 0x14);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_28[0] + 0x18))();
          }
          local_28[0] = (longlong *)0x0;
        }
LAB_1450a8567:
        FUN_14537ab70(*plVar8);
      }
LAB_1450a856f:
      plVar8 = plVar8 + 1;
    } while (plVar8 != DAT_14c79c040 + DAT_14c79c048);
  }
  return;
LAB_1450a8528:
  lVar6 = lVar6 + 0x28;
  if (lVar6 == *(longlong *)(lVar3 + 0x1a0) + (ulonglong)*(uint *)(lVar3 + 0x1a8) * 0x28)
  goto LAB_1450a856f;
  goto LAB_1450a84d0;
}



// FUNCTION 1450a85b0 FUN_1450a85b0 body=263 status=ok
// SIG undefined FUN_1450a85b0(void)

undefined8 FUN_1450a85b0(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 *local_res18;
  undefined8 *local_res20;
  undefined1 local_18 [8];
  longlong local_10;
  
  do {
    if ((int)param_2 < 0) {
      FUN_145071a20(param_1);
      return param_1;
    }
    uVar2 = (ulonglong)param_2;
    param_2 = param_2 - 1;
    uVar1 = *(undefined8 *)(DAT_14c79c040 + uVar2 * 8);
    FUN_14537df40(uVar1);
  } while ((DAT_14c79c028 == '\0') || (FUN_14537db00(uVar1,local_18), local_10 == -1));
  local_res18 = (undefined8 *)0xffffffffffffffff;
  FUN_145072680(&local_res20,&local_res18,0x10,8,"CAkLEngine::ReleaseBuffersAndFeedbackAsync",0,1);
  if (local_res20 != (undefined8 *)0x0) {
    *(uint *)(local_res20 + 1) = param_2;
    *local_res20 = &PTR_FUN_149c26898;
  }
  local_res20 = local_res18;
  local_res18 = (undefined8 *)0xffffffffffffffff;
  FUN_145071ba0(param_1,&local_res20,1,local_10);
  return param_1;
}



// FUNCTION 1450a86c0 FUN_1450a86c0 body=177 status=ok
// SIG undefined FUN_1450a86c0(void)

undefined8 FUN_1450a86c0(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  longlong lVar3;
  __uint64 _Var4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = *(int *)((longlong)param_1 + 0xc) + param_2;
  uVar6 = (ulonglong)*(uint *)(param_1 + 1);
  _Var4 = (ulonglong)uVar5 << 4;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar2 = AK::MemoryMgr::Malloc(5,_Var4);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar2)) {
      if (uVar6 != 0) {
        lVar3 = 0;
        do {
          uVar1 = ((undefined8 *)(lVar3 + *param_1))[1];
          *(undefined8 *)(lVar3 + (longlong)pvVar2) = *(undefined8 *)(lVar3 + *param_1);
          ((undefined8 *)(lVar3 + (longlong)pvVar2))[1] = uVar1;
          uVar6 = uVar6 - 1;
          lVar3 = lVar3 + 0x10;
        } while (uVar6 != 0);
      }
      AK::MemoryMgr::Free(5,(void *)*param_1);
    }
  }
  else {
    pvVar2 = AK::MemoryMgr::Realloc(5,(void *)*param_1,_Var4);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar2;
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  return 1;
}



// FUNCTION 1450a8780 FUN_1450a8780 body=311 status=ok
// SIG undefined FUN_1450a8780(void)

void FUN_1450a8780(longlong param_1,int param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  *(byte *)(param_1 + 0x1c4) = *(byte *)(param_1 + 0x1c4) | 1;
  iVar7 = param_2;
  if (param_2 < (int)param_3[2]) {
    iVar7 = (int)param_3[2];
  }
  *(int *)(param_3 + 2) = iVar7;
  *(int *)(param_1 + 0x1c0) = param_2;
  lVar8 = *(longlong *)(param_1 + 0x20);
  if (lVar8 == 0) {
    *(byte *)(param_1 + 0x1c4) = *(byte *)(param_1 + 0x1c4) & 0xfe;
    return;
  }
  do {
    lVar3 = *(longlong *)(lVar8 + 0x150);
    if ((*(byte *)(lVar3 + 0x60) & 4) != 0) {
      uVar1 = *(uint *)(param_3 + 1);
      uVar2 = *(uint *)((longlong)param_3 + 0xc);
      uVar6 = uVar1;
      if (uVar1 < uVar2) {
LAB_1450a880d:
        if (uVar1 < *(uint *)((longlong)param_3 + 0xc)) {
          *(uint *)(param_3 + 1) = uVar6 + 1;
          plVar5 = (longlong *)((ulonglong)uVar6 * 0x10 + *param_3);
          if (plVar5 != (longlong *)0x0) {
            *plVar5 = param_1;
            plVar5[1] = lVar3;
          }
        }
      }
      else {
        iVar7 = (uVar2 >> 1) + uVar2;
        if (uVar2 == 0) {
          iVar7 = 1;
        }
        cVar4 = FUN_1450a86c0(param_3,iVar7);
        if (cVar4 != '\0') {
          uVar6 = *(uint *)(param_3 + 1);
          goto LAB_1450a880d;
        }
      }
      *(uint *)(lVar8 + 0x198) =
           ((uint)*(byte *)(lVar3 + 0x1c4) << 2 ^ *(uint *)(lVar8 + 0x198)) & 4 ^
           *(uint *)(lVar8 + 0x198);
      if ((*(byte *)(lVar3 + 0x1c4) & 1) == 0) {
        if (*(int *)(lVar3 + 0x1c0) <= param_2) {
          FUN_1450a8780(lVar3,param_2 + 1,param_3);
        }
      }
      else {
        *(undefined1 *)((longlong)param_3 + 0x14) = 1;
      }
    }
    lVar8 = *(longlong *)(lVar8 + 0x18);
    if (lVar8 == 0) {
      *(byte *)(param_1 + 0x1c4) = *(byte *)(param_1 + 0x1c4) & 0xfe;
      return;
    }
  } while( true );
}



// FUNCTION 1450a88c0 FUN_1450a88c0 body=1014 status=ok
// SIG undefined FUN_1450a88c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1450a88c0(void)

{
  size_t _Size;
  uint *_Dst;
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  int *piVar14;
  longlong *plVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  undefined8 auStack_70 [4];
  uint uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  char cStack_34;
  
  if (DAT_14c79c029 != '\0') {
    auStack_70[0] = 0x1450a891b;
    memset(DAT_14c79c068,0,(ulonglong)((DAT_14c79c064 * DAT_14c79c060 + 0x1f >> 5) << 2));
    uVar7 = DAT_14c79c048;
    uVar18 = (ulonglong)DAT_14c79c048;
    if (DAT_14c79c048 != 0) {
      plVar9 = DAT_14c79c040;
      uVar12 = uVar18;
      plVar15 = DAT_14c79c040;
      if (DAT_14c79c060 < DAT_14c79c048) {
        auStack_70[0] = 0x1450a8948;
        uVar8 = FUN_14538ca30(&DAT_14c79c060,DAT_14c79c048,DAT_14c79c048);
        plVar9 = DAT_14c79c040;
        plVar15 = DAT_14c79c040;
        if ((int)uVar8 != 1) {
          return uVar8;
        }
      }
      do {
        *(undefined4 *)(*plVar9 + 0x1c0) = 0xffffffff;
        uVar12 = uVar12 - 1;
        plVar9 = plVar9 + 1;
      } while (uVar12 != 0);
      uVar16 = uVar7 * 4;
      local_48 = (longlong *)0x0;
      local_40 = 0;
      if (uVar16 != 0) {
        auStack_70[0] = 0x1450a899b;
        plVar9 = AK::MemoryMgr::Malloc(5,(ulonglong)uVar16 << 4);
        if (plVar9 == (longlong *)0x0) {
          bVar6 = false;
        }
        else {
          if ((local_48 != (longlong *)0x0) && (local_48 != plVar9)) {
            auStack_70[0] = 0x1450a89c1;
            AK::MemoryMgr::Free(5,local_48);
          }
          bVar6 = true;
          local_40 = CONCAT44(uVar16,(uint)local_40);
          local_48 = plVar9;
        }
        if (!bVar6) {
          if (local_48 != (longlong *)0x0) {
            auStack_70[0] = 0x1450a89eb;
            AK::MemoryMgr::Free(5,local_48);
            return 0x34;
          }
          return 0x34;
        }
      }
      cStack_34 = '\0';
      local_38 = 0;
      plVar9 = plVar15;
      uVar12 = uVar18;
      do {
        lVar3 = *plVar9;
        if ((*(longlong *)(lVar3 + 0x38) == 0) &&
           ((*(longlong *)(lVar3 + 0x70) == 0 ||
            (*(longlong *)(*(longlong *)(lVar3 + 0x70) + 0x80) == 0)))) {
          auStack_70[0] = 0x1450a8a26;
          FUN_1450a8780(lVar3,0,&local_48);
        }
        plVar9 = plVar9 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      DAT_14c79c028 = cStack_34;
      uVar12 = uVar18 * 8 + 0xf;
      if (uVar12 <= uVar18 * 8) {
        uVar12 = 0xffffffffffffff0;
      }
      auStack_70[0] = 0x1450a8a66;
      lVar3 = -(uVar12 & 0xfffffffffffffff0);
      lVar20 = (longlong)(local_38 + 1);
      plVar9 = (longlong *)((longlong)&local_48 + lVar3);
      _Size = lVar20 * 4;
      uVar12 = _Size + 0xf;
      if (uVar12 <= _Size) {
        uVar12 = 0xffffffffffffff0;
      }
      *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x1450a8a93;
      lVar5 = -(uVar12 & 0xfffffffffffffff0);
      _Dst = (uint *)((longlong)&local_48 + lVar5 + lVar3);
      *(undefined8 *)((longlong)auStack_70 + lVar5 + lVar3) = 0x1450a8aa5;
      memset(_Dst,0,_Size);
      plVar10 = plVar9;
      uVar12 = uVar18;
      do {
        lVar4 = *(longlong *)(((longlong)plVar15 - (longlong)plVar9) + (longlong)plVar10);
        *plVar10 = lVar4;
        iVar19 = *(int *)(lVar4 + 0x1c0);
        if (-1 < iVar19) {
          _Dst[iVar19] = _Dst[iVar19] + 1;
        }
        plVar10 = plVar10 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      uVar12 = lVar20 * 4 + 0xf;
      if (uVar12 <= (ulonglong)(lVar20 * 4)) {
        uVar12 = 0xffffffffffffff0;
      }
      *(undefined8 *)((longlong)auStack_70 + lVar5 + lVar3) = 0x1450a8af7;
      lVar4 = -(uVar12 & 0xfffffffffffffff0);
      puVar1 = (undefined4 *)((longlong)&local_48 + lVar4 + lVar5 + lVar3);
      *puVar1 = 0;
      if (1 < lVar20) {
        lVar13 = 1;
        puVar11 = _Dst;
        do {
          lVar13 = lVar13 + 1;
          *(uint *)(((longlong)puVar1 - (longlong)_Dst) + 4 + (longlong)puVar11) =
               *(int *)(((longlong)puVar1 - (longlong)_Dst) + (longlong)puVar11) + *puVar11;
          puVar11 = puVar11 + 1;
        } while (lVar13 < lVar20);
      }
      uVar12 = (ulonglong)uVar7;
      do {
        lVar13 = *plVar9;
        if (*(int *)(lVar13 + 0x1c0) < 0) {
          uVar12 = (ulonglong)((int)uVar12 - 1);
          plVar15[uVar12] = lVar13;
        }
        else {
          plVar15[(int)puVar1[*(int *)(lVar13 + 0x1c0)]] = lVar13;
          puVar1[*(int *)(lVar13 + 0x1c0)] = puVar1[*(int *)(lVar13 + 0x1c0)] + 1;
        }
        plVar9 = plVar9 + 1;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
      if ((DAT_14c79c028 != '\0') && (iVar19 = 1, 1 < lVar20)) {
        piVar14 = (int *)((longlong)&local_48 + lVar5 + lVar3 + 4);
        lVar13 = 1;
        do {
          if (1 < *piVar14) {
            uVar2 = *(undefined4 *)((longlong)puVar1 + (-4 - (longlong)_Dst) + (longlong)piVar14);
            *(undefined8 *)((longlong)auStack_70 + lVar4 + lVar5 + lVar3) = 0x1450a8bae;
            FUN_1450a6ed0(&DAT_14c79c040,iVar19,uVar2);
          }
          iVar19 = iVar19 + 1;
          lVar13 = lVar13 + 1;
          piVar14 = piVar14 + 1;
        } while (lVar13 < lVar20);
      }
      plVar15 = local_48;
      plVar9 = DAT_14c79c040;
      plVar10 = local_48;
      uVar16 = (uint)local_40;
      if (local_48 != local_48 + (local_40 & 0xffffffff) * 2) {
        do {
          uVar18 = 0;
          if (0 < (int)uVar7) {
            do {
              if ((plVar9[uVar18] == *plVar15) &&
                 (uVar17 = (int)uVar18 + 1, (int)uVar17 < (int)uVar7)) {
                do {
                  if (plVar9[uVar17] == plVar15[1]) {
                    *(undefined8 *)((longlong)auStack_70 + lVar4 + lVar5 + lVar3) = 0x1450a8c25;
                    FUN_14538ca00(&DAT_14c79c060);
                    plVar9 = DAT_14c79c040;
                    plVar10 = local_48;
                    uVar16 = (uint)local_40;
                    goto LAB_1450a8c33;
                  }
                  uVar17 = uVar17 + 1;
                } while ((int)uVar17 < (int)uVar7);
              }
              uVar17 = (int)uVar18 + 1;
              uVar18 = (ulonglong)uVar17;
            } while ((int)uVar17 < (int)uVar7);
          }
LAB_1450a8c33:
          plVar15 = plVar15 + 2;
        } while (plVar15 != plVar10 + (ulonglong)uVar16 * 2);
      }
      iVar19 = 0;
      while( true ) {
        plVar15 = local_48;
        uVar16 = *_Dst;
        if ((int)(uVar7 - 1) <= (int)(*_Dst - 1)) {
          uVar16 = uVar7;
        }
        if ((int)(uVar16 - 1) <= iVar19) break;
        *(undefined8 *)((longlong)auStack_70 + lVar4 + lVar5 + lVar3) = 0x1450a8c74;
        FUN_14538ca00(&DAT_14c79c060,iVar19,iVar19 + 1);
        iVar19 = iVar19 + 1;
      }
      if (local_48 != (longlong *)0x0) {
        local_40 = local_40 & 0xffffffff00000000;
        *(undefined8 *)((longlong)auStack_70 + lVar4 + lVar5 + lVar3) = 0x1450a8c92;
        AK::MemoryMgr::Free(5,plVar15);
      }
    }
    DAT_14c79c029 = '\0';
  }
  return 1;
}



// FUNCTION 1450a8cc0 FUN_1450a8cc0 body=431 status=ok
// SIG undefined FUN_1450a8cc0(void)

int FUN_1450a8cc0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined1 local_res20 [8];
  undefined1 local_38 [32];
  
  uVar1 = DAT_14c72f434;
  uVar8 = 0;
  lVar4 = FUN_1450a1a60(param_2);
  if (lVar4 == 0) {
    FUN_145376d90();
    return 2;
  }
  puVar5 = (uint *)FUN_1453770e0(param_2,local_res20);
  uVar2 = *puVar5 & 0xf00;
  if ((uVar2 < 0x301) && (((char)*puVar5 != '\0' || (uVar2 == 0x300)))) {
    puVar6 = (undefined4 *)FUN_1453770e0(param_2,local_res20);
    uVar8 = *puVar6;
    goto LAB_1450a8da6;
  }
  puVar5 = (uint *)FUN_1453770e0(param_2,local_res20);
  if ((*puVar5 & 0xf00) == 0) {
    if (param_3 == 0) {
      uVar8 = *(undefined4 *)(lVar4 + 0x60);
    }
    else {
      uVar8 = *(undefined4 *)(param_3 + 0x168);
    }
    goto LAB_1450a8da6;
  }
  puVar5 = (uint *)FUN_1453770e0(param_2,local_res20);
  if ((*puVar5 & 0xf00) == 0xe00) {
    puVar6 = (undefined4 *)(lVar4 + 0x90);
    if (*(char *)(lVar4 + 0x568) == '\0') {
LAB_1450a8da0:
      puVar6 = (undefined4 *)(lVar4 + 0x60);
    }
  }
  else {
    puVar5 = (uint *)FUN_1453770e0(param_2,local_res20);
    if ((*puVar5 & 0xf00) != 0xf00) goto LAB_1450a8da6;
    if (*(char *)(lVar4 + 0x568) == '\0') goto LAB_1450a8da0;
    puVar6 = (undefined4 *)(lVar4 + 0x90);
    if ((char)((ulonglong)*(undefined8 *)(lVar4 + 0x98) >> 0x20) != '\0') {
      uVar8 = 0x3102;
      goto LAB_1450a8da6;
    }
  }
  uVar8 = *puVar6;
LAB_1450a8da6:
  uVar7 = FUN_145376d60(local_38,param_2);
  if (param_3 == 0) {
    iVar3 = FUN_14537d650(param_1,param_1,uVar8,uVar1,uVar7,0);
  }
  else {
    iVar3 = FUN_14537d650(param_1,param_1,uVar8,uVar1,uVar7,param_3);
    if (iVar3 == 1) {
      iVar3 = FUN_145389de0(param_1,param_3,0);
    }
  }
  FUN_145376d90(param_2);
  return iVar3;
}



// FUNCTION 1450a8e70 FUN_1450a8e70 body=941 status=ok
// SIG undefined FUN_1450a8e70(void)

void FUN_1450a8e70(longlong param_1)

{
  float fVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  byte bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_res8 [2];
  float local_res10 [2];
  int local_68 [2];
  undefined8 uStack_60;
  
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uVar4 = FUN_145377010(param_1 + 0x70);
  fVar1 = *(float *)(param_1 + 0x14);
  cVar3 = FUN_1450a5170(uVar2,local_res8,local_res10);
  if (cVar3 == '\0') {
    fVar9 = *(float *)(param_1 + 0x1dc);
  }
  else {
    *(float *)(param_1 + 0x1d8) = local_res8[0];
    fVar9 = 1.0 - 1.0 / local_res10[0];
    *(float *)(param_1 + 0x1dc) = fVar9;
  }
  fVar11 = 0.0;
  fVar8 = (*(float *)(param_1 + 0x1c8) - fVar1) - local_res8[0];
  fVar10 = local_res8[0];
  if (0.0 < fVar8) {
    fVar10 = fVar8 * fVar9 + local_res8[0];
  }
  cVar3 = FUN_1450a5320(uVar2,local_res10,local_res8);
  if (cVar3 != '\0') {
    if (local_res10[0] <= 0.0) {
      *(undefined4 *)(param_1 + 0x1d4) = 0;
    }
    else {
      fVar9 = expf((float)(int)-(uint)DAT_14c72f434 / ((float)DAT_14c72f42c * local_res10[0]));
      *(float *)(param_1 + 0x1d4) = fVar9;
    }
  }
  fVar9 = *(float *)(param_1 + 0x1d4);
  if (local_res8[0]._0_1_ == '\0') {
    fVar8 = fVar10 * 0.05;
    if ((-37.0 <= fVar8) && (fVar8 <= 37.0)) {
      uVar6 = (uint)(longlong)(fVar8 * 27866352.0 + 1.0653532e+09);
      local_res8[0] = (float)((uVar6 & 0x7fffff) + 0x3f800000);
      fVar11 = ((local_res8[0] * 0.32518977 + 0.020805772) * local_res8[0] + 0.65304345) *
               (float)(uVar6 & 0xff800000);
    }
    fVar8 = *(float *)(param_1 + 0x1cc);
    if (fVar8 <= fVar11) {
      *(float *)(param_1 + 0x1cc) = fVar11;
      bVar7 = 0;
      if (fVar8 < fVar11) {
        bVar7 = 2;
      }
      *(byte *)(param_1 + 0x1c4) = bVar7 | *(byte *)(param_1 + 0x1c4) & 0xfd;
      goto LAB_1450a9170;
    }
    local_res8[0] = (1.0 - fVar9) * fVar11 + fVar8 * fVar9;
    *(float *)(param_1 + 0x1cc) = local_res8[0];
    fVar9 = (float)(((uint)local_res8[0] & 0x7fffff) + 0x3f800000);
    fVar8 = fVar9 + 1.0;
    fVar9 = (((fVar9 * fVar9 * fVar9 - 1.0) * 1.1581186) / (fVar8 * fVar8 * fVar8)) * 20.0 +
            ((float)((uint)local_res8[0] >> 0x17 & 0xff) - 127.0) * 6.0206003;
  }
  else {
    fVar8 = *(float *)(param_1 + 0x1cc);
    if (fVar8 <= fVar10) {
      *(float *)(param_1 + 0x1cc) = fVar10;
      bVar7 = 0;
      if (fVar8 < fVar10) {
        bVar7 = 2;
      }
      *(byte *)(param_1 + 0x1c4) = bVar7 | *(byte *)(param_1 + 0x1c4) & 0xfd;
      goto LAB_1450a9170;
    }
    fVar9 = (1.0 - fVar9) * fVar10 + fVar8 * fVar9;
    *(float *)(param_1 + 0x1cc) = fVar9;
  }
  fVar8 = fVar9 - fVar10;
  fVar10 = fVar9;
  if (0.5 <= fVar8) {
    *(byte *)(param_1 + 0x1c4) = *(byte *)(param_1 + 0x1c4) | 2;
  }
LAB_1450a9170:
  *(float *)(param_1 + 0x1d0) = fVar10 + fVar1;
  local_res10[0] = fVar10;
  local_68[0] = FUN_14508e800(uVar2);
  if (local_68[0] != 0) {
    FUN_14508e870(uVar2,local_res10);
    uStack_60 = uVar4;
    lVar5 = FUN_1450a9ba0(&DAT_14c79c098,local_68,local_res8);
    if ((lVar5 != 0) &&
       (*(float *)(lVar5 + 0x10) <= local_res10[0] && local_res10[0] != *(float *)(lVar5 + 0x10))) {
      *(float *)(lVar5 + 0x10) = local_res10[0];
    }
  }
  *(undefined4 *)(param_1 + 0x1c8) = 0xc5800000;
  return;
}



// FUNCTION 1450a9220 FUN_1450a9220 body=159 status=ok
// SIG undefined FUN_1450a9220(void)

void FUN_1450a9220(undefined4 param_1,undefined4 param_2,__uint64 param_3)

{
  undefined4 uStackX_1c;
  CAkRegisteredObj *local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined1 local_28;
  undefined8 local_20;
  
  local_48 = (CAkRegisteredObj *)0x0;
  if (param_3 != 0xffffffffffffffff) {
    local_48 = CAkRegistryMgr::GetObj(g_pRegistryMgr,param_3);
  }
  local_40 = 0;
  local_38 = 0;
  local_30 = 0xff;
  local_28 = 0xff;
  local_20 = 0;
  FUN_14507f370(g_pGameSyncMgr,CONCAT44(uStackX_1c,param_2) & 0xffffff00ffffffff,&local_48,param_1,0
                ,1,0);
  return;
}



// FUNCTION 1450a92c0 FUN_1450a92c0 body=309 status=ok
// SIG undefined FUN_1450a92c0(void)

void FUN_1450a92c0(float *param_1,float param_2,ulonglong param_3)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != 1.0) {
    pfVar1 = param_1 + (param_3 & 0xffffffff);
    if (3 < (uint)param_3) {
      pfVar2 = param_1 + (param_3 & 0xfffffffc);
      for (; param_1 < pfVar2; param_1 = param_1 + 4) {
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
      }
    }
    uVar4 = 0;
    uVar3 = (ulonglong)((longlong)pfVar1 + (3 - (longlong)param_1)) >> 2;
    if (pfVar1 < param_1) {
      uVar3 = uVar4;
    }
    if ((uVar3 != 0) && (0xf < uVar3)) {
      do {
        uVar4 = uVar4 + 0x10;
        *param_1 = *param_1 * param_2;
        param_1[1] = param_1[1] * param_2;
        param_1[2] = param_1[2] * param_2;
        param_1[3] = param_1[3] * param_2;
        param_1[4] = param_1[4] * param_2;
        param_1[5] = param_1[5] * param_2;
        param_1[6] = param_1[6] * param_2;
        param_1[7] = param_1[7] * param_2;
        param_1[8] = param_1[8] * param_2;
        param_1[9] = param_1[9] * param_2;
        param_1[10] = param_1[10] * param_2;
        param_1[0xb] = param_1[0xb] * param_2;
        param_1[0xc] = param_1[0xc] * param_2;
        param_1[0xd] = param_1[0xd] * param_2;
        param_1[0xe] = param_1[0xe] * param_2;
        param_1[0xf] = param_1[0xf] * param_2;
        param_1 = param_1 + 0x10;
      } while (uVar4 < (uVar3 & 0xfffffffffffffff0));
    }
    if (param_1 < pfVar1) {
      if (0xf < ((longlong)pfVar1 + (3 - (longlong)param_1) & 0xfffffffffffffffcU)) {
        do {
          *param_1 = param_2 * *param_1;
          param_1[1] = param_2 * param_1[1];
          param_1[2] = param_2 * param_1[2];
          param_1[3] = param_2 * param_1[3];
          param_1 = param_1 + 4;
        } while (param_1 < pfVar1 + -3);
        if (pfVar1 <= param_1) {
          return;
        }
      }
      do {
        *param_1 = param_2 * *param_1;
        param_1 = param_1 + 1;
      } while (param_1 < pfVar1);
    }
  }
  return;
}



// FUNCTION 1450a9400 FUN_1450a9400 body=528 status=ok
// SIG undefined FUN_1450a9400(void)

void FUN_1450a9400(longlong *param_1,float param_2,float param_3,char param_4)

{
  float *pfVar1;
  float *pfVar2;
  ushort uVar3;
  uint uVar4;
  float *pfVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar4 = *(uint *)(param_1 + 1) & 0xff;
  if ((param_4 == '\0') && ((*(uint *)(param_1 + 1) & 0x8000) != 0)) {
    uVar4 = uVar4 - 1;
  }
  uVar3 = *(ushort *)((longlong)param_1 + 0x12);
  if (uVar4 != 0) {
    lVar6 = 0;
    uVar7 = (ulonglong)uVar4;
    if (param_3 == param_2) {
      do {
        FUN_1450a92c0(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * lVar6 * 4,param_2,uVar3);
        lVar6 = lVar6 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      return;
    }
    do {
      pfVar5 = (float *)(*param_1 + (ulonglong)*(ushort *)(param_1 + 2) * lVar6 * 4);
      pfVar1 = pfVar5 + uVar3;
      if (3 < uVar3) {
        uVar4 = uVar3 & 0xfffffffc;
        pfVar2 = pfVar5 + uVar4;
        fVar9 = (param_3 - param_2) / (float)uVar4;
        fVar12 = fVar9 * 4.0;
        fVar8 = fVar9 + param_2 + fVar9;
        fVar11 = fVar9 + param_2;
        fVar9 = fVar8 + fVar9;
        fVar10 = param_2;
        for (; pfVar5 < pfVar2; pfVar5 = pfVar5 + 4) {
          *pfVar5 = *pfVar5 * fVar10;
          pfVar5[1] = pfVar5[1] * fVar11;
          pfVar5[2] = pfVar5[2] * fVar8;
          pfVar5[3] = pfVar5[3] * fVar9;
          fVar11 = fVar11 + fVar12;
          fVar8 = fVar8 + fVar12;
          fVar9 = fVar9 + fVar12;
          fVar10 = fVar10 + fVar12;
        }
      }
      if (pfVar5 < pfVar1) {
        fVar8 = (param_3 - param_2) / (float)uVar3;
        fVar11 = param_2;
        if (0xf < ((longlong)pfVar1 + (3 - (longlong)pfVar5) & 0xfffffffffffffffcU)) {
          do {
            *pfVar5 = fVar11 * *pfVar5;
            fVar9 = fVar11 + fVar8 + fVar8;
            pfVar5[1] = (fVar11 + fVar8) * pfVar5[1];
            fVar10 = fVar9 + fVar8;
            pfVar5[2] = fVar9 * pfVar5[2];
            fVar11 = fVar10 + fVar8;
            pfVar5[3] = fVar10 * pfVar5[3];
            pfVar5 = pfVar5 + 4;
          } while (pfVar5 < pfVar1 + -3);
          if (pfVar1 <= pfVar5) goto LAB_1450a95e8;
        }
        do {
          *pfVar5 = fVar11 * *pfVar5;
          pfVar5 = pfVar5 + 1;
          fVar11 = fVar11 + fVar8;
        } while (pfVar5 < pfVar1);
      }
LAB_1450a95e8:
      lVar6 = lVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 1450a9610 FUN_1450a9610 body=189 status=ok
// SIG undefined FUN_1450a9610(void)

undefined8 FUN_1450a9610(longlong *param_1)

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
    pvVar4 = AK::MemoryMgr::Malloc(5,_Var6);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        uVar5 = 0;
        if ((ulonglong)uVar2 != 0) {
          do {
            *(undefined8 *)((longlong)pvVar4 + uVar5 * 8) = *(undefined8 *)(*param_1 + uVar5 * 8);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar2);
        }
        AK::MemoryMgr::Free(5,(void *)*param_1);
      }
      goto LAB_1450a96b0;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(5,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_1450a96b0:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450a96d0 FUN_1450a96d0 body=297 status=ok
// SIG undefined FUN_1450a96d0(void)

longlong FUN_1450a96d0(longlong *param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar6 = *(uint *)((longlong)param_1 + 0xc);
  if (uVar1 < uVar6) {
LAB_1450a97a8:
    pvVar2 = (void *)(*param_1 + (ulonglong)param_2 * 8);
    if (param_2 < *(uint *)(param_1 + 1)) {
      memmove((void *)((longlong)pvVar2 + 8),pvVar2,
              (ulonglong)((*(uint *)(param_1 + 1) - param_2) * 8));
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    lVar3 = *param_1 + (ulonglong)param_2 * 8;
  }
  else {
    iVar5 = (uVar6 >> 1) + uVar6;
    if (uVar6 == 0) {
      iVar5 = 1;
    }
    uVar6 = iVar5 + uVar6;
    if ((void *)*param_1 == (void *)0x0) {
      pvVar2 = AK::MemoryMgr::Malloc(5,(ulonglong)uVar6 << 3);
      if (pvVar2 != (void *)0x0) {
        if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar2)) {
          uVar4 = 0;
          if (uVar1 != 0) {
            do {
              *(undefined8 *)((longlong)pvVar2 + uVar4 * 8) = *(undefined8 *)(*param_1 + uVar4 * 8);
              uVar4 = uVar4 + 1;
            } while (uVar4 < uVar1);
          }
          AK::MemoryMgr::Free(5,(void *)*param_1);
        }
        goto LAB_1450a9790;
      }
    }
    else {
      pvVar2 = AK::MemoryMgr::Realloc(5,(void *)*param_1,(ulonglong)uVar6 << 3);
      if (pvVar2 == (void *)0x0) {
        return 0;
      }
LAB_1450a9790:
      *param_1 = (longlong)pvVar2;
      *(uint *)((longlong)param_1 + 0xc) = uVar6;
      if (uVar1 < uVar6) goto LAB_1450a97a8;
    }
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 1450a9800 FUN_1450a9800 body=265 status=ok
// SIG undefined FUN_1450a9800(void)

void FUN_1450a9800(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 local_68 [8];
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  undefined1 local_30 [24];
  
  lVar4 = 0;
  lVar1 = FUN_1450a4eb0(param_3,param_1,param_2);
  if (lVar1 == 0) {
    uVar2 = FUN_145376e10(local_30,param_1,param_2);
    FUN_145376d60(local_60,uVar2);
    puVar5 = local_30;
  }
  else {
    lVar4 = *(longlong *)(lVar1 + 0x158);
    if ((*(byte *)(lVar4 + 0x1c4) & 0x10) == 0) {
      return;
    }
    uVar2 = FUN_145376ce0(local_48,param_1,*(undefined8 *)(lVar4 + 0x80));
    FUN_145376d60(local_60,uVar2);
    puVar5 = local_48;
  }
  FUN_145376d90(puVar5);
  lVar3 = FUN_145377010(local_60);
  if (lVar3 == param_2) {
    uVar2 = FUN_145376d60(local_30,local_60);
    lVar4 = FUN_1450a6b40(uVar2,local_68);
  }
  if ((lVar1 == 0) && (lVar4 != 0)) {
    FUN_145389de0(param_3,lVar4,param_4);
  }
  FUN_145376d90(local_60);
  return;
}



// FUNCTION 1450a9910 FUN_1450a9910 body=185 status=ok
// SIG undefined FUN_1450a9910(void)

void FUN_1450a9910(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res10 [8];
  undefined1 local_38 [32];
  
  lVar4 = *(longlong *)(param_2 + 0x38);
  do {
    if (lVar4 == 0) {
      lVar4 = 0;
LAB_1450a9963:
      uVar2 = FUN_145376d60(local_38,param_1);
      lVar3 = FUN_1450a6b40(uVar2,local_res10);
      if ((lVar4 == 0) && (lVar3 != 0)) {
        FUN_145389de0(param_2,lVar3,param_3);
      }
LAB_1450a9995:
      FUN_145376d90(param_1);
      return;
    }
    plVar1 = (longlong *)FUN_1453557f0(lVar4);
    if (((*plVar1 == *param_1) && (plVar1[1] == param_1[1])) && (plVar1[2] == param_1[2])) {
      if ((lVar4 == 0) || ((*(byte *)(*(longlong *)(lVar4 + 0x158) + 0x1c4) & 0x10) != 0))
      goto LAB_1450a9963;
      goto LAB_1450a9995;
    }
    lVar4 = *(longlong *)(lVar4 + 0x20);
  } while( true );
}



// FUNCTION 1450a99d0 FUN_1450a99d0 body=222 status=ok
// SIG undefined FUN_1450a99d0(void)

undefined8 FUN_1450a99d0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  
  if ((*(longlong *)(param_2 + 0x38) == 0) &&
     ((*(longlong *)(param_2 + 0x70) == 0 ||
      (*(longlong *)(*(longlong *)(param_2 + 0x70) + 0x80) == 0)))) {
    uVar1 = *(uint *)(param_1 + 1);
    if ((*(uint *)((longlong)param_1 + 0xc) <= uVar1) && (cVar2 = FUN_1450a9610(), cVar2 == '\0')) {
      return 2;
    }
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar1) {
      return 2;
    }
    if ((int)param_1[1] != 0) {
      memmove((void *)(*param_1 + 8),(void *)*param_1,(ulonglong)(uint)((int)param_1[1] * 8));
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    param_1 = (longlong *)*param_1;
  }
  else {
    uVar1 = *(uint *)(param_1 + 1);
    if ((*(uint *)((longlong)param_1 + 0xc) <= uVar1) && (cVar2 = FUN_1450a9610(), cVar2 == '\0')) {
      return 2;
    }
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar1) {
      return 2;
    }
    uVar1 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar1 + 1;
    param_1 = (longlong *)(*param_1 + (ulonglong)uVar1 * 8);
  }
  if (param_1 == (longlong *)0x0) {
    return 2;
  }
  *param_1 = param_2;
  DAT_14c79c029 = 1;
  return 1;
}



// FUNCTION 1450a9ab0 FUN_1450a9ab0 body=235 status=ok
// SIG undefined FUN_1450a9ab0(void)

undefined8 FUN_1450a9ab0(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  __uint64 _Var8;
  ulonglong uVar9;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  iVar4 = (uVar2 >> 1) + uVar2;
  if (uVar2 == 0) {
    iVar4 = 1;
  }
  _Var8 = (ulonglong)(iVar4 + uVar2) * 0x18;
  if ((void *)*param_1 == (void *)0x0) {
    puVar7 = AK::MemoryMgr::Malloc(5,_Var8);
    if (puVar7 != (undefined8 *)0x0) {
      if (((undefined8 *)*param_1 != (undefined8 *)0x0) &&
         (puVar6 = puVar7, (undefined8 *)*param_1 != puVar7)) {
        for (; uVar9 != 0; uVar9 = uVar9 - 1) {
          if (puVar6 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar6 + 2) = 0xff7fffff;
          }
          lVar3 = *param_1;
          puVar1 = (undefined8 *)((longlong)puVar6 + (lVar3 - (longlong)puVar7));
          uVar5 = puVar1[1];
          *puVar6 = *puVar1;
          puVar6[1] = uVar5;
          puVar6[2] = *(undefined8 *)((longlong)puVar6 + lVar3 + (0x10 - (longlong)puVar7));
          puVar6 = puVar6 + 3;
        }
        AK::MemoryMgr::Free(5,(void *)*param_1);
      }
      goto LAB_1450a9b7e;
    }
  }
  else {
    puVar7 = AK::MemoryMgr::Realloc(5,(void *)*param_1,_Var8);
    if (puVar7 != (undefined8 *)0x0) {
LAB_1450a9b7e:
      *param_1 = (longlong)puVar7;
      *(uint *)((longlong)param_1 + 0xc) = iVar4 + uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450a9ba0 FUN_1450a9ba0 body=423 status=ok
// SIG undefined FUN_1450a9ba0(void)

undefined8 * FUN_1450a9ba0(longlong *param_1,uint *param_2,undefined1 *param_3)

{
  void *_Src;
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  uVar1 = *param_2;
  uVar9 = *(uint *)(param_1 + 1);
  iVar11 = 0;
  if (uVar9 != 0) {
    do {
      iVar10 = (uVar9 >> 1) + iVar11;
      lVar6 = (longlong)iVar10;
      uVar5 = *(uint *)(*param_1 + lVar6 * 0x18);
      uVar8 = *(ulonglong *)(*param_1 + 8 + lVar6 * 0x18);
      if ((uVar5 == uVar1) && (uVar8 == *(ulonglong *)(param_2 + 2))) {
        *param_3 = 1;
        return (undefined8 *)(*param_1 + lVar6 * 0x18);
      }
      if ((uVar5 < uVar1) || ((uVar5 == uVar1 && (uVar8 < *(ulonglong *)(param_2 + 2))))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      uVar5 = uVar9 - 1;
      iVar10 = iVar10 + 1;
      if (!bVar3) {
        uVar5 = uVar9;
        iVar10 = iVar11;
      }
      iVar11 = iVar10;
      uVar9 = uVar5 >> 1;
    } while (uVar9 != 0);
  }
  *param_3 = 0;
  uVar9 = *(uint *)(param_1 + 1);
  lVar6 = (longlong)iVar11 * 0x18;
  if (*param_1 + lVar6 == 0) {
    if ((*(uint *)((longlong)param_1 + 0xc) <= uVar9) &&
       (cVar4 = FUN_1450a9ab0(param_1), cVar4 == '\0')) {
      return (undefined8 *)0x0;
    }
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar9) {
      return (undefined8 *)0x0;
    }
    puVar7 = (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x18);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    if (puVar7 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *(undefined4 *)(puVar7 + 2) = 0xff7fffff;
  }
  else {
    lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
    uVar8 = (lVar6 >> 2) - (lVar6 >> 0x3f);
    if (((*(uint *)((longlong)param_1 + 0xc) <= uVar9) &&
        (cVar4 = FUN_1450a9ab0(param_1), cVar4 == '\0')) ||
       (*(uint *)((longlong)param_1 + 0xc) <= uVar9)) {
      return (undefined8 *)0x0;
    }
    uVar9 = (uint)uVar8;
    uVar8 = uVar8 & 0xffffffff;
    _Src = (void *)(*param_1 + uVar8 * 0x18);
    if (uVar9 < *(uint *)(param_1 + 1)) {
      memmove((void *)((longlong)_Src + 0x18),_Src,
              (ulonglong)((*(uint *)(param_1 + 1) - uVar9) * 0x18));
    }
    if (_Src != (void *)0x0) {
      *(undefined4 *)((longlong)_Src + 0x10) = 0xff7fffff;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    puVar7 = (undefined8 *)(*param_1 + uVar8 * 0x18);
  }
  if (puVar7 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)(param_2 + 2);
    *puVar7 = *(undefined8 *)param_2;
    puVar7[1] = uVar2;
  }
  return puVar7;
}



// FUNCTION 1450a9d50 FUN_1450a9d50 body=352 status=ok
// SIG undefined FUN_1450a9d50(void)

undefined8 FUN_1450a9d50(undefined8 param_1,undefined8 param_2)

{
  void *_Dst;
  int iVar1;
  void *pvVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  DAT_14c79c02a = 0;
  FUN_1450a7e00();
  for (lVar5 = DAT_14c79bfa0; iVar1 = DAT_14c79bfd0, lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)
      ) {
    if ((*(longlong **)(lVar5 + 0x4d0) != (longlong *)0x0) &&
       (cVar3 = (**(code **)(**(longlong **)(lVar5 + 0x4d0) + 0x48))(), cVar3 != '\0')) {
      (**(code **)(**(longlong **)(lVar5 + 0x4d0) + 0x50))();
      iVar1 = *(int *)(DAT_14c790fd8 + 0x88);
      if ((DAT_14c79bfd0 == 0) || (8 < (uint)(iVar1 - DAT_14c79bfd0))) break;
    }
  }
  DAT_14c79bfd0 = iVar1;
  FUN_1450a1770();
  uVar6 = DAT_14c79c048 - 1;
  if (-1 < (int)uVar6) {
    lVar5 = (longlong)(int)uVar6 * 8;
    uVar4 = DAT_14c79c048;
    do {
      pvVar2 = *(void **)(lVar5 + DAT_14c79c040);
      if (((*(int *)((longlong)pvVar2 + 0x1b8) == 1) ||
          (*(longlong *)((longlong)pvVar2 + 0x20) != 0)) ||
         ((*(byte *)((longlong)pvVar2 + 0x1c4) & 2) != 0)) {
        *(byte *)((longlong)pvVar2 + 0x1c4) = *(byte *)((longlong)pvVar2 + 0x1c4) & 0xfd;
      }
      else {
        _Dst = (void *)(DAT_14c79c040 + (ulonglong)uVar6 * 8);
        if (uVar4 < DAT_14c79c048) {
          memmove(_Dst,(void *)((longlong)_Dst + 8),(ulonglong)((DAT_14c79c048 - uVar6) * 8 - 8));
        }
        DAT_14c79c048 = DAT_14c79c048 - 1;
        FUN_1450a3360(pvVar2);
        AK::MemoryMgr::Free(5,pvVar2);
        DAT_14c79c029 = 1;
      }
      uVar4 = uVar4 - 1;
      lVar5 = lVar5 + -8;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  FUN_145071a20(param_2);
  return param_2;
}



// FUNCTION 1450a9eb0 FUN_1450a9eb0 body=31 status=ok
// SIG undefined FUN_1450a9eb0(void)

undefined8 FUN_1450a9eb0(undefined8 param_1,undefined8 param_2)

{
  FUN_1450a7170();
  FUN_145071a20(param_2);
  return param_2;
}



// FUNCTION 1450a9ed0 FUN_1450a9ed0 body=43 status=ok
// SIG undefined FUN_1450a9ed0(void)

undefined8 * FUN_1450a9ed0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_149c23938;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1450a9f00 FUN_1450a9f00 body=276 status=ok
// SIG undefined FUN_1450a9f00(void)

undefined8 FUN_1450a9f00(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *local_res8;
  undefined8 *local_res10;
  undefined1 local_18 [8];
  longlong local_10;
  
  lVar1 = *(longlong *)(DAT_14c79c040 + (ulonglong)*(uint *)(param_1 + 8) * 8);
  FUN_14537da50(lVar1,local_18);
  if (local_10 != -1) {
    local_res8 = (undefined8 *)0xffffffffffffffff;
    FUN_145072680(&local_res10,&local_res8,0x10,8,"AK BusTask",0,1);
    if (local_res10 != (undefined8 *)0x0) {
      local_res10[1] = lVar1;
      *local_res10 = &PTR_FUN_149c26868;
    }
    local_res10 = local_res8;
    local_res8 = (undefined8 *)0xffffffffffffffff;
    FUN_145071ba0(param_2,&local_res10,1,local_10);
    return param_2;
  }
  FUN_14537dbd0(lVar1);
  if ((*(longlong *)(lVar1 + 0x38) == 0) &&
     ((*(longlong *)(lVar1 + 0x70) == 0 || (*(longlong *)(*(longlong *)(lVar1 + 0x70) + 0x80) == 0))
     )) {
    lVar2 = FUN_1450a1a60();
    if (lVar2 != 0) {
      FUN_1450a7f90(lVar1,lVar2);
    }
  }
  FUN_145071a20(param_2);
  return param_2;
}



// FUNCTION 1450aa020 FUN_1450aa020 body=43 status=ok
// SIG undefined FUN_1450aa020(void)

undefined8 * FUN_1450aa020(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_149c23938;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1450aa050 FUN_1450aa050 body=357 status=ok
// SIG undefined FUN_1450aa050(void)

undefined8 FUN_1450aa050(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
LAB_1450aa080:
  do {
    piVar3 = *(int **)(param_1 + 8);
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 + -1 < 0) {
      FUN_145071a20(param_2);
      return param_2;
    }
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)(iVar2 + -1) * 8);
  } while (*(int *)(lVar4 + 0x158) != 0x2b);
  lVar1 = lVar4 + 0x128;
  uVar8 = 4;
  uVar7 = 4;
LAB_1450aa0d0:
  do {
    uVar6 = (int)uVar8 - 1;
    uVar8 = (ulonglong)uVar6;
    plVar5 = *(longlong **)(lVar4 + 0xb0 + uVar8 * 8);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x78))(plVar5,lVar1);
      iVar2 = *(int *)(lVar4 + 0x158);
      if (iVar2 != 0x2b) break;
    }
    uVar7 = uVar6;
    if (uVar6 == 0) {
LAB_1450aa108:
      FUN_1450cdfa0(lVar4,lVar1);
      if ((*(int *)(lVar4 + 0x158) == 0x2d) || (*(int *)(lVar4 + 0x158) == 0x11)) {
LAB_1450aa128:
        do {
          uVar7 = (uint)uVar8;
          if (3 < uVar7) {
            FUN_1453886f0(lVar4 + 0xd0,lVar1);
            FUN_1450ce090(lVar4,lVar1);
            break;
          }
          plVar5 = *(longlong **)(lVar4 + 0xb0 + uVar8 * 8);
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x80))(plVar5,lVar1);
            iVar2 = *(int *)(lVar4 + 0x158);
            if (iVar2 == 0x2b) goto LAB_1450aa163;
            if ((iVar2 != 0x2d) && (iVar2 != 0x11)) break;
          }
          uVar8 = (ulonglong)(uVar7 + 1);
        } while( true );
      }
      goto LAB_1450aa080;
    }
  } while( true );
  if ((iVar2 == 0x2d) || (iVar2 == 0x11)) {
    uVar8 = (ulonglong)uVar7;
    goto LAB_1450aa128;
  }
  goto LAB_1450aa080;
LAB_1450aa163:
  if (uVar7 != 0) goto LAB_1450aa0d0;
  goto LAB_1450aa108;
}



// FUNCTION 1450aa1c0 FUN_1450aa1c0 body=43 status=ok
// SIG undefined FUN_1450aa1c0(void)

undefined8 * FUN_1450aa1c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_149c23938;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1450aa1f0 FUN_1450aa1f0 body=97 status=ok
// SIG undefined FUN_1450aa1f0(void)

undefined8 FUN_1450aa1f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  FUN_14537dbd0(lVar1);
  if ((*(longlong *)(lVar1 + 0x38) == 0) &&
     ((*(longlong *)(lVar1 + 0x70) == 0 || (*(longlong *)(*(longlong *)(lVar1 + 0x70) + 0x80) == 0))
     )) {
    lVar2 = FUN_1450a1a60();
    if (lVar2 != 0) {
      FUN_1450a7f90(lVar1,lVar2);
    }
  }
  FUN_145071a20(param_2);
  return param_2;
}



// FUNCTION 1450aa260 FUN_1450aa260 body=43 status=ok
// SIG undefined FUN_1450aa260(void)

undefined8 * FUN_1450aa260(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_149c23938;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1450aa290 FUN_1450aa290 body=52 status=ok
// SIG undefined FUN_1450aa290(void)

undefined8 FUN_1450aa290(longlong param_1,undefined8 param_2)

{
  FUN_145072170();
  FUN_1450a9d50(param_1 + 8,param_2);
  FUN_1450721a0();
  return param_2;
}



// FUNCTION 1450aa2d0 FUN_1450aa2d0 body=43 status=ok
// SIG undefined FUN_1450aa2d0(void)

undefined8 * FUN_1450aa2d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_149c23938;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1450aa300 FUN_1450aa300 body=51 status=ok
// SIG undefined FUN_1450aa300(void)

undefined8 FUN_1450aa300(undefined8 param_1,undefined8 param_2)

{
  FUN_145072170();
  DAT_14c79c02a = 0;
  FUN_1450a85b0(param_2,DAT_14c79c048 + -1);
  FUN_1450721a0();
  return param_2;
}



// FUNCTION 1450aa340 FUN_1450aa340 body=43 status=ok
// SIG undefined FUN_1450aa340(void)

undefined8 * FUN_1450aa340(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_149c23938;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1450aa370 FUN_1450aa370 body=51 status=ok
// SIG undefined FUN_1450aa370(void)

undefined8 FUN_1450aa370(longlong param_1,undefined8 param_2)

{
  FUN_145072170();
  FUN_1450a85b0(param_2,*(undefined4 *)(param_1 + 8));
  FUN_1450721a0();
  return param_2;
}



// FUNCTION 1450aa3b0 FUN_1450aa3b0 body=43 status=ok
// SIG undefined FUN_1450aa3b0(void)

undefined8 * FUN_1450aa3b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_149c23938;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1450aa3e0 FUN_1450aa3e0 body=43 status=ok
// SIG undefined FUN_1450aa3e0(void)

undefined8 * FUN_1450aa3e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c268a8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1450aa410 GetDeviceID body=76 status=ok
// SIG uint GetDeviceID(IMMDevice * param_1)

/* unsigned int __cdecl AK::GetDeviceID(struct IMMDevice * __ptr64) */

uint __cdecl AK::GetDeviceID(IMMDevice *param_1)

{
  int iVar1;
  uint uVar2;
  wchar_t *local_res8 [4];
  
                    /* 0x50aa410  81  ?GetDeviceID@AK@@YAIPEAUIMMDevice@@@Z */
  uVar2 = 0xffffffff;
  if (param_1 != (IMMDevice *)0x0) {
    local_res8[0] = (wchar_t *)0x0;
    iVar1 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1,local_res8);
    if ((-1 < iVar1) && (local_res8[0] != (wchar_t *)0x0)) {
      uVar2 = SoundEngine::GetIDFromString(local_res8[0]);
      CoTaskMemFree(local_res8[0]);
    }
  }
  return uVar2;
}



// FUNCTION 1450aa460 GetDeviceIDFromName body=661 status=ok
// SIG uint GetDeviceIDFromName(wchar_t * param_1)

/* unsigned int __cdecl AK::GetDeviceIDFromName(wchar_t * __ptr64) */

uint __cdecl AK::GetDeviceIDFromName(wchar_t *param_1)

{
  longlong *plVar1;
  HRESULT HVar2;
  int iVar3;
  uint uVar4;
  wchar_t *pwVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_res8 [2];
  int local_res10 [2];
  wchar_t *local_res18;
  longlong *local_res20;
  wchar_t *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  wchar_t *pwStack_58;
  undefined8 local_50;
  
                    /* 0x50aa460  82  ?GetDeviceIDFromName@AK@@YAIPEA_W@Z */
  uVar7 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (param_1 == (wchar_t *)0x0) {
    return 0xffffffff;
  }
  HVar2 = CoInitializeEx((LPVOID)0x0,2);
  FUN_1450ab510(&local_70);
  local_68 = (longlong *)0x0;
  if (local_70 != (longlong *)0x0) {
    iVar3 = (**(code **)(*local_70 + 0x18))(local_70,0,0xf,&local_68);
    if (iVar3 < 0) {
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 0x10))(local_68);
        local_68 = (longlong *)0x0;
      }
      if (local_70 != (longlong *)0x0) {
        (**(code **)(*local_70 + 0x10))();
        local_70 = (longlong *)0x0;
      }
    }
    if (local_68 == (longlong *)0x0) {
      uVar6 = 0xffffffff;
      if (local_70 != (longlong *)0x0) {
        (**(code **)(*local_70 + 0x10))();
        local_70 = (longlong *)0x0;
      }
    }
    else {
      local_res8[0] = 0;
      iVar3 = (**(code **)(*local_68 + 0x18))(local_68,local_res8);
      if ((-1 < iVar3) && (uVar9 = 0, local_res8[0] != 0)) {
        do {
          if (uVar7 != 0xffffffff) break;
          local_res20 = (longlong *)0x0;
          iVar3 = (**(code **)(*local_68 + 0x20))(local_68,uVar9,&local_res20);
          plVar1 = local_res20;
          if (-1 < iVar3) {
            local_res18 = (wchar_t *)0x0;
            iVar3 = (**(code **)(*local_res20 + 0x28))(local_res20,&local_res18);
            uVar8 = uVar6;
            if ((iVar3 < 0) || (local_res18 == (wchar_t *)0x0)) {
LAB_1450aa663:
              uVar7 = 0xffffffff;
            }
            else {
              uVar4 = SoundEngine::GetIDFromString(local_res18);
              pwVar5 = wcsstr(local_res18,param_1);
              CoTaskMemFree(local_res18);
              uVar7 = uVar4;
              if (pwVar5 == (wchar_t *)0x0) {
                local_78 = pwVar5;
                iVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,0,&local_78);
                if (iVar3 < 0) goto LAB_1450aa663;
                local_50 = 0;
                local_60 = 0;
                pwStack_58 = (wchar_t *)0x0;
                iVar3 = (**(code **)(*(longlong *)local_78 + 0x28))
                                  (local_78,&DAT_14ab42320,&local_60);
                pwVar5 = (wchar_t *)0x0;
                if ((-1 < iVar3) && (pwStack_58 != (wchar_t *)0x0)) {
                  pwVar5 = wcsstr(pwStack_58,param_1);
                  PropVariantClear((PROPVARIANT *)&local_60);
                }
                (**(code **)(*(longlong *)local_78 + 0x10))();
                uVar7 = 0xffffffff;
                if (pwVar5 != (wchar_t *)0x0) {
                  uVar7 = uVar4;
                }
              }
              if ((uVar7 != 0xffffffff) &&
                 ((**(code **)(*local_res20 + 0x30))(local_res20,local_res10), local_res10[0] != 1))
              {
                uVar8 = uVar7;
                if (uVar6 != 0xffffffff) {
                  uVar8 = uVar6;
                }
                goto LAB_1450aa663;
              }
            }
            (**(code **)(*local_res20 + 0x10))();
            uVar6 = uVar8;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < local_res8[0]);
      }
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 0x10))();
        local_68 = (longlong *)0x0;
      }
      if (local_70 != (longlong *)0x0) {
        (**(code **)(*local_70 + 0x10))();
        local_70 = (longlong *)0x0;
      }
      if (uVar7 != 0xffffffff) {
        uVar6 = uVar7;
      }
    }
  }
  if (-1 < HVar2) {
    CoUninitialize();
  }
  return uVar6;
}



// FUNCTION 1450aa700 GetWindowsDeviceName body=339 status=ok
// SIG wchar_t * GetWindowsDeviceName(int param_1, uint * param_2, AkAudioDeviceState param_3)

/* wchar_t const * __ptr64 __cdecl AK::GetWindowsDeviceName(int,unsigned int & __ptr64,enum
   AkAudioDeviceState) */

wchar_t * __cdecl AK::GetWindowsDeviceName(int param_1,uint *param_2,AkAudioDeviceState param_3)

{
  HRESULT HVar1;
  int iVar2;
  wchar_t *pwVar3;
  longlong *local_res10;
  longlong *local_28;
  longlong *local_20;
  
                    /* 0x50aa700  137
                       ?GetWindowsDeviceName@AK@@YAPEB_WHAEAIW4AkAudioDeviceState@@@Z */
  *param_2 = 0xffffffff;
  pwVar3 = (wchar_t *)0x0;
  HVar1 = CoInitializeEx((LPVOID)0x0,2);
  FUN_1450ab510();
  local_20 = (longlong *)0x0;
  if (local_28 != (longlong *)0x0) {
    iVar2 = (**(code **)(*local_28 + 0x18))(local_28,0,param_3,&local_20);
    if (iVar2 < 0) {
      if (local_20 != (longlong *)0x0) {
        (**(code **)(*local_20 + 0x10))();
        local_20 = (longlong *)0x0;
      }
      if (local_28 != (longlong *)0x0) {
        (**(code **)(*local_28 + 0x10))(local_28);
        local_28 = (longlong *)0x0;
      }
    }
    if (local_20 == (longlong *)0x0) goto LAB_1450aa81c;
    local_res10 = (longlong *)0x0;
    if (param_1 == -1) {
      iVar2 = (**(code **)(*local_28 + 0x20))(local_28,0,1,&local_res10);
    }
    else {
      iVar2 = (**(code **)(*local_20 + 0x20))(local_20,param_1,&local_res10);
    }
    if (-1 < iVar2) {
      pwVar3 = (wchar_t *)FUN_1450ab580(local_res10,param_2);
    }
    if (local_res10 != (longlong *)0x0) {
      (**(code **)(*local_res10 + 0x10))();
    }
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x10))();
    local_20 = (longlong *)0x0;
  }
LAB_1450aa81c:
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))(local_28);
  }
  if (-1 < HVar1) {
    CoUninitialize();
  }
  return pwVar3;
}



// FUNCTION 1450aa860 GetWindowsDeviceCount body=226 status=ok
// SIG uint GetWindowsDeviceCount(AkAudioDeviceState param_1)

/* unsigned int __cdecl AK::GetWindowsDeviceCount(enum AkAudioDeviceState) */

uint __cdecl AK::GetWindowsDeviceCount(AkAudioDeviceState param_1)

{
  int iVar1;
  uint uVar2;
  uint local_res10 [6];
  longlong *local_18;
  longlong *local_10;
  
                    /* 0x50aa860  136  ?GetWindowsDeviceCount@AK@@YAIW4AkAudioDeviceState@@@Z */
  FUN_1450ab510();
  local_10 = (longlong *)0x0;
  if (local_18 != (longlong *)0x0) {
    iVar1 = (**(code **)(*local_18 + 0x18))(local_18,0,param_1,&local_10);
    if (iVar1 < 0) {
      if (local_10 != (longlong *)0x0) {
        (**(code **)(*local_10 + 0x10))();
        local_10 = (longlong *)0x0;
      }
      if (local_18 != (longlong *)0x0) {
        (**(code **)(*local_18 + 0x10))(local_18);
        local_18 = (longlong *)0x0;
      }
    }
    if (local_10 != (longlong *)0x0) {
      local_res10[0] = 0;
      iVar1 = (**(code **)(*local_10 + 0x18))(local_10,local_res10);
      uVar2 = local_res10[0];
      if (-1 < iVar1) goto LAB_1450aa90a;
    }
  }
  uVar2 = 0;
LAB_1450aa90a:
  if (local_10 != (longlong *)0x0) {
    (**(code **)(*local_10 + 0x10))();
    local_10 = (longlong *)0x0;
  }
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x10))(local_18);
  }
  return uVar2;
}



// FUNCTION 1450aa950 GetWindowsDevice body=366 status=ok
// SIG bool GetWindowsDevice(int param_1, uint * param_2, IMMDevice * * param_3, AkAudioDeviceState param_4)

/* bool __cdecl AK::GetWindowsDevice(int,unsigned int & __ptr64,struct IMMDevice * __ptr64 *
   __ptr64,enum AkAudioDeviceState) */

bool __cdecl
AK::GetWindowsDevice(int param_1,uint *param_2,IMMDevice **param_3,AkAudioDeviceState param_4)

{
  int iVar1;
  uint uVar2;
  IMMDevice *local_res10;
  wchar_t *local_res18 [2];
  longlong *local_38;
  longlong *local_30;
  
                    /* 0x50aa950  135
                       ?GetWindowsDevice@AK@@YA_NHAEAIPEAPEAUIMMDevice@@W4AkAudioDeviceState@@@Z */
  *param_2 = 0xffffffff;
  if (param_3 != (IMMDevice **)0x0) {
    *param_3 = (IMMDevice *)0x0;
  }
  FUN_1450ab510(&local_38);
  local_30 = (longlong *)0x0;
  if (local_38 != (longlong *)0x0) {
    iVar1 = (**(code **)(*local_38 + 0x18))(local_38,0,param_4,&local_30);
    if (iVar1 < 0) {
      if (local_30 != (longlong *)0x0) {
        (**(code **)(*local_30 + 0x10))();
        local_30 = (longlong *)0x0;
      }
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x10))(local_38);
        local_38 = (longlong *)0x0;
      }
    }
    if (local_30 != (longlong *)0x0) {
      local_res10 = (IMMDevice *)0x0;
      if (param_1 == -1) {
        iVar1 = (**(code **)(*local_38 + 0x20))(local_38,0,0,&local_res10);
      }
      else {
        iVar1 = (**(code **)(*local_30 + 0x20))(local_30,param_1,&local_res10);
      }
      if (-1 < iVar1) {
        uVar2 = 0xffffffff;
        if (local_res10 != (IMMDevice *)0x0) {
          local_res18[0] = (wchar_t *)0x0;
          iVar1 = (**(code **)(*(longlong *)local_res10 + 0x28))(local_res10,local_res18);
          if ((-1 < iVar1) && (local_res18[0] != (wchar_t *)0x0)) {
            uVar2 = SoundEngine::GetIDFromString(local_res18[0]);
            CoTaskMemFree(local_res18[0]);
          }
        }
        *param_2 = uVar2;
        if ((param_3 == (IMMDevice **)0x0) || (uVar2 == 0xffffffff)) {
          if (local_res10 != (IMMDevice *)0x0) {
            (**(code **)(*(longlong *)local_res10 + 0x10))();
          }
        }
        else {
          *param_3 = local_res10;
        }
      }
    }
  }
  uVar2 = *param_2;
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))();
    local_30 = (longlong *)0x0;
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))(local_38);
  }
  return uVar2 != 0xffffffff;
}



// FUNCTION 1450aaac0 RegisterPluginDLL body=174 status=ok
// SIG AKRESULT RegisterPluginDLL(wchar_t * param_1, wchar_t * param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::RegisterPluginDLL(wchar_t const * __ptr64,wchar_t const *
   __ptr64) */

AKRESULT __cdecl AK::SoundEngine::RegisterPluginDLL(wchar_t *param_1,wchar_t *param_2)

{
  DWORD DVar1;
  AKRESULT AVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  WCHAR local_808 [1028];
  
                    /* 0x50aaac0  234  ?RegisterPluginDLL@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_W0@Z
                        */
  local_808[0] = L'\0';
  FUN_1450a4bc0(local_808,0x400,param_1,param_2);
  hModule = LoadLibraryW(local_808);
  if (hModule != (HMODULE)0x0) {
    pFVar3 = GetProcAddress(hModule,"g_pAKPluginList");
    if (pFVar3 != (FARPROC)0x0) {
      AVar2 = FUN_1450892d0(*(undefined8 *)pFVar3);
      return AVar2;
    }
    return 7;
  }
  DVar1 = GetLastError();
  if (DVar1 == 8) {
    return 0x34;
  }
  if (DVar1 == 0x7e) {
    return 0x42;
  }
  if (DVar1 != 0xc1) {
    return 2;
  }
  return 4;
}



// FUNCTION 1450aab70 GetDeviceSpatialAudioSupport body=570 status=ok
// SIG AKRESULT GetDeviceSpatialAudioSupport(uint param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::GetDeviceSpatialAudioSupport(unsigned int) */

AKRESULT __cdecl AK::SoundEngine::GetDeviceSpatialAudioSupport(uint param_1)

{
  HRESULT HVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  AKRESULT AVar5;
  uint local_res10 [2];
  int local_res18 [2];
  longlong *local_res20;
  IID local_68;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  IID local_40;
  
                    /* 0x50aab70  85
                       ?GetDeviceSpatialAudioSupport@SoundEngine@AK@@YA?AW4AKRESULT@@I@Z */
  uVar4 = 0;
  local_50 = (longlong *)0x0;
  local_40.Data1 = 0xbcde0395;
  local_40.Data2 = 0xe52f;
  local_40.Data3 = 0x467c;
  local_40.Data4[0] = 0x8e;
  local_40.Data4[1] = '=';
  local_40.Data4[2] = 0xc4;
  local_40.Data4[3] = 'W';
  local_40.Data4[4] = 0x92;
  local_40.Data4[5] = 0x91;
  local_40.Data4[6] = 'i';
  local_40.Data4[7] = '.';
  local_68._0_8_ = (wchar_t *)0x4f359614a95664d2;
  local_68.Data4[0] = 0xa7;
  local_68.Data4[1] = 'F';
  local_68.Data4[2] = 0xde;
  local_68.Data4[3] = 0x8d;
  local_68.Data4[4] = 0xb6;
  local_68.Data4[5] = '6';
  local_68.Data4[6] = '\x17';
  local_68.Data4[7] = 0xe6;
  HVar1 = CoCreateInstance(&local_40,(LPUNKNOWN)0x0,0x17,&local_68,&local_50);
  if ((HVar1 < 0) && (local_50 != (longlong *)0x0)) {
    (**(code **)(*local_50 + 0x10))();
    local_50 = (longlong *)0x0;
  }
  local_48 = (longlong *)0x0;
  if (local_50 != (longlong *)0x0) {
    iVar2 = (**(code **)(*local_50 + 0x18))(local_50,0,0xf,&local_48);
    if (iVar2 < 0) {
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x10))(local_48);
        local_48 = (longlong *)0x0;
      }
      if (local_50 != (longlong *)0x0) {
        (**(code **)(*local_50 + 0x10))();
        local_50 = (longlong *)0x0;
      }
    }
    if (local_48 != (longlong *)0x0) {
      local_res10[0] = 0;
      iVar2 = (**(code **)(*local_48 + 0x18))(local_48,local_res10);
      if ((-1 < iVar2) && (local_res20 = (longlong *)0x0, local_res10[0] != 0)) {
        do {
          local_res20 = (longlong *)0x0;
          iVar2 = (**(code **)(*local_48 + 0x20))(local_48,uVar4,&local_res20);
          if ((iVar2 < 0) || (local_res20 == (longlong *)0x0)) break;
          uVar3 = 0xffffffff;
          local_68._0_8_ = (wchar_t *)0x0;
          iVar2 = (**(code **)(*local_res20 + 0x28))(local_res20,&local_68);
          if ((-1 < iVar2) && ((wchar_t *)local_68._0_8_ != (wchar_t *)0x0)) {
            uVar3 = GetIDFromString((wchar_t *)local_68._0_8_);
            CoTaskMemFree((LPVOID)local_68._0_8_);
          }
          if (uVar3 == param_1) {
            if (local_res20 != (longlong *)0x0) {
              AVar5 = 1;
              iVar2 = (**(code **)(*local_res20 + 0x18))(local_res20,&DAT_149c268d0,1,0,&local_58);
              (**(code **)(*local_res20 + 0x10))();
              if ((-1 < iVar2) && (local_58 != (longlong *)0x0)) {
                iVar2 = (**(code **)(*local_58 + 0x28))(local_58,local_res18);
                (**(code **)(*local_58 + 0x10))();
                if ((iVar2 < 0) || (local_res18[0] == 0)) {
                  AVar5 = 4;
                }
                goto LAB_1450aace4;
              }
            }
            break;
          }
          (**(code **)(*local_res20 + 0x10))();
          uVar4 = uVar4 + 1;
          local_res20 = (longlong *)0x0;
        } while (uVar4 < local_res10[0]);
      }
    }
  }
  AVar5 = 2;
LAB_1450aace4:
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))(local_48);
    local_48 = (longlong *)0x0;
  }
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  return AVar5;
}



// FUNCTION 1450aadb0 FUN_1450aadb0 body=136 status=ok
// SIG undefined FUN_1450aadb0(void)

undefined8 FUN_1450aadb0(void)

{
  AkRuntimeEnvironmentMgr *pAVar1;
  undefined8 uVar2;
  
  if ((DAT_14c79c01c == 0) || (DAT_14c791098 == 0)) {
    return 0x1f;
  }
  pAVar1 = AK::AkRuntimeEnvironmentMgr::Instance();
  FUN_145380960(pAVar1);
  if ((char)DAT_14c79c020 == '\0') {
    pAVar1 = AK::AkRuntimeEnvironmentMgr::Instance();
    FUN_145380a70(pAVar1,0xa0);
  }
  FUN_1450cc190(DAT_14c79c01c,DAT_14c791098);
  DAT_14c79c0c0 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  if (DAT_14c79c0c0 == (HANDLE)0x0) {
    return 2;
  }
  uVar2 = FUN_1450a6430();
  return uVar2;
}



// FUNCTION 1450aae40 FUN_1450aae40 body=71 status=ok
// SIG undefined FUN_1450aae40(void)

void FUN_1450aae40(void)

{
  FUN_1450a64c0();
  if (DAT_14c79c0c0 != (HANDLE)0x0) {
    CloseHandle(DAT_14c79c0c0);
  }
  DAT_14c79c0c0 = (HANDLE)0x0;
  if (DAT_14c79c0b8 != 0) {
    FUN_1450a3b00();
    DAT_14c79c0b8 = 0;
  }
  return;
}



// FUNCTION 1450aae90 FUN_1450aae90 body=54 status=ok
// SIG undefined FUN_1450aae90(void)

void FUN_1450aae90(void)

{
  HRESULT HVar1;
  
  if (DAT_14c79c0c8 == 0) {
    HVar1 = CoInitializeEx((LPVOID)0x0,2);
    DAT_14c79c0c8 = (byte)((uint)HVar1 >> 0x1f) ^ 1;
  }
  DAT_14c79c0b8 = FUN_1450a3890();
  return;
}



// FUNCTION 1450aaed0 FUN_1450aaed0 body=64 status=ok
// SIG undefined FUN_1450aaed0(void)

void FUN_1450aaed0(void)

{
  if (DAT_14c79c0b8 != 0) {
    FUN_1450a3b00();
    DAT_14c79c0b8 = 0;
  }
  FUN_1450a1150();
  if (DAT_14c79c0c8 != '\0') {
    CoUninitialize();
    DAT_14c79c0c8 = '\0';
  }
  return;
}



// FUNCTION 1450aaf10 FUN_1450aaf10 body=87 status=ok
// SIG undefined FUN_1450aaf10(void)

void FUN_1450aaf10(undefined8 *param_1)

{
  HWND pHVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  pHVar1 = GetForegroundWindow();
  *param_1 = pHVar1;
  FUN_1450a4ae0(param_1);
  *(undefined4 *)(param_1 + 5) = 0x20000;
  *(undefined2 *)(param_1 + 7) = 4;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 48000;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  return;
}



// FUNCTION 1450aaf70 thunk_FUN_1450a4b20 body=5 status=ok
// SIG undefined thunk_FUN_1450a4b20(void)

void thunk_FUN_1450a4b20(undefined8 *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) & 0xff;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 1450aaf80 FUN_1450aaf80 body=1127 status=ok
// SIG undefined FUN_1450aaf80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1450aaf80(int param_1,uint *param_2,longlong param_3)

{
  uint uVar1;
  longlong *plVar2;
  HRESULT HVar3;
  HRESULT HVar4;
  int iVar5;
  uint uVar6;
  wchar_t *_Src;
  undefined8 uVar7;
  longlong lVar8;
  rsize_t _MaxCount;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint *puVar13;
  uint local_res8;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  uint local_a0 [2];
  longlong *local_98;
  IID local_90;
  HRESULT local_80;
  IID local_78;
  short local_68 [4];
  wchar_t *pwStack_60;
  undefined8 local_58;
  longlong lVar9;
  
  if ((param_1 - 0xaeU & 0xfffffffd) != 0) {
    return 4;
  }
  uVar7 = 2;
  HVar3 = CoInitializeEx((LPVOID)0x0,2);
  uVar1 = *param_2;
  uVar11 = 0;
  uVar10 = 0;
  *param_2 = 0;
  local_b8 = (longlong *)0x0;
  local_90._0_8_ = (wchar_t *)0x467ce52fbcde0395;
  local_90.Data4[0] = 0x8e;
  local_90.Data4[1] = '=';
  local_90.Data4[2] = 0xc4;
  local_90.Data4[3] = 'W';
  local_90.Data4[4] = 0x92;
  local_90.Data4[5] = 0x91;
  local_90.Data4[6] = 'i';
  local_90.Data4[7] = '.';
  local_78._0_8_ = (longlong *)0x4f359614a95664d2;
  local_78.Data4[0] = 0xa7;
  local_78.Data4[1] = 'F';
  local_78.Data4[2] = 0xde;
  local_78.Data4[3] = 0x8d;
  local_78.Data4[4] = 0xb6;
  local_78.Data4[5] = '6';
  local_78.Data4[6] = '\x17';
  local_78.Data4[7] = 0xe6;
  local_80 = HVar3;
  HVar4 = CoCreateInstance(&local_90,(LPUNKNOWN)0x0,0x17,&local_78,&local_b8);
  if ((HVar4 < 0) && (local_b8 != (longlong *)0x0)) {
    (**(code **)(*local_b8 + 0x10))();
    local_b8 = (longlong *)0x0;
  }
  local_b0 = (longlong *)0x0;
  if (local_b8 == (longlong *)0x0) goto LAB_1450ab38a;
  iVar5 = (**(code **)(*local_b8 + 0x18))(local_b8,0,0xf,&local_b0);
  if (iVar5 < 0) {
    if (local_b0 != (longlong *)0x0) {
      (**(code **)(*local_b0 + 0x10))(local_b0);
      local_b0 = (longlong *)0x0;
    }
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
      local_b8 = (longlong *)0x0;
    }
  }
  if (local_b0 == (longlong *)0x0) goto LAB_1450ab38a;
  local_a0[0] = 0;
  iVar5 = (**(code **)(*local_b0 + 0x18))(local_b0,local_a0);
  if (iVar5 < 0) goto LAB_1450ab38a;
  uVar6 = uVar10;
  if (param_1 == 0xb0) {
    uVar6 = 2;
  }
  local_res8 = 0xffffffff;
  uVar12 = 0;
  local_a8 = (longlong *)0x0;
  local_90._0_8_ = (wchar_t *)0x467ce52fbcde0395;
  local_90.Data4[0] = 0x8e;
  local_90.Data4[1] = '=';
  local_90.Data4[2] = 0xc4;
  local_90.Data4[3] = 'W';
  local_90.Data4[4] = 0x92;
  local_90.Data4[5] = 0x91;
  local_90.Data4[6] = 'i';
  local_90.Data4[7] = '.';
  local_78._0_8_ = (longlong *)0x4f359614a95664d2;
  local_78.Data4[0] = 0xa7;
  local_78.Data4[1] = 'F';
  local_78.Data4[2] = 0xde;
  local_78.Data4[3] = 0x8d;
  local_78.Data4[4] = 0xb6;
  local_78.Data4[5] = '6';
  local_78.Data4[6] = '\x17';
  local_78.Data4[7] = 0xe6;
  HVar4 = CoCreateInstance(&local_90,(LPUNKNOWN)0x0,0x17,&local_78,&local_a8);
  if (HVar4 < 0) {
LAB_1450ab1a2:
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
  else if (local_a8 != (longlong *)0x0) {
    local_98 = (longlong *)0x0;
    iVar5 = (**(code **)(*local_a8 + 0x20))(local_a8,0,uVar6,&local_98);
    if (-1 < iVar5) {
      local_res8 = 0xffffffff;
      if (local_98 == (longlong *)0x0) {
        local_res8 = 0xffffffff;
      }
      else {
        local_90._0_8_ = (wchar_t *)0x0;
        iVar5 = (**(code **)(*local_98 + 0x28))(local_98,&local_90);
        if ((-1 < iVar5) && ((wchar_t *)local_90._0_8_ != (wchar_t *)0x0)) {
          local_res8 = AK::SoundEngine::GetIDFromString((wchar_t *)local_90._0_8_);
          CoTaskMemFree((LPVOID)local_90._0_8_);
        }
      }
    }
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 0x10))();
    }
    goto LAB_1450ab1a2;
  }
  if (local_a0[0] != 0) {
    do {
      _Src = (wchar_t *)0x0;
      uVar10 = (uint)uVar11;
      if ((uVar1 <= uVar10) && (HVar3 = local_80, param_3 != 0)) break;
      local_a8 = (longlong *)0x0;
      iVar5 = (**(code **)(*local_b0 + 0x20))(local_b0,uVar12,&local_a8);
      if ((-1 < iVar5) &&
         (iVar5 = (**(code **)(*local_a8 + 0x30))(local_a8,&local_98), plVar2 = local_a8, -1 < iVar5
         )) {
        uVar6 = 0xffffffff;
        if (local_a8 != (longlong *)0x0) {
          local_90._0_8_ = (wchar_t *)0x0;
          iVar5 = (**(code **)(*local_a8 + 0x28))(local_a8,&local_90);
          if ((-1 < iVar5) && ((wchar_t *)local_90._0_8_ != (wchar_t *)0x0)) {
            uVar6 = AK::SoundEngine::GetIDFromString((wchar_t *)local_90._0_8_);
            CoTaskMemFree((LPVOID)local_90._0_8_);
          }
        }
        local_78._0_8_ = (longlong *)0x0;
        iVar5 = (**(code **)(*plVar2 + 0x20))(plVar2,0,&local_78);
        if (-1 < iVar5) {
          if ((longlong *)local_78._0_8_ == (longlong *)0x0) goto LAB_1450ab34c;
          local_58 = 0;
          local_68[0] = 0;
          local_68[1] = 0;
          local_68[2] = 0;
          local_68[3] = 0;
          pwStack_60 = (wchar_t *)0x0;
          iVar5 = (**(code **)(*(longlong *)local_78._0_8_ + 0x28))
                            (local_78._0_8_,&DAT_14ab42320,local_68);
          if (((-1 < iVar5) && (local_68[0] == 0x1f)) && (pwStack_60 != (wchar_t *)0x0)) {
            wcsncpy(&DAT_14c79c0d0,pwStack_60,0x103);
            _DAT_14c79c2d6 = 0;
            _Src = &DAT_14c79c0d0;
          }
          PropVariantClear((PROPVARIANT *)local_68);
        }
        if ((longlong *)local_78._0_8_ != (longlong *)0x0) {
          (**(code **)(*(longlong *)local_78._0_8_ + 0x10))();
        }
        if (_Src != (wchar_t *)0x0) {
          if (param_3 != 0) {
            puVar13 = (uint *)(uVar11 * 0x214 + param_3);
            *puVar13 = uVar6;
            lVar8 = -1;
            do {
              lVar9 = lVar8;
              lVar8 = lVar9 + 1;
            } while (_Src[lVar8] != L'\0');
            _MaxCount = lVar9 + 2;
            if (0x103 < _MaxCount) {
              _MaxCount = 0x103;
            }
            wcsncpy_s((wchar_t *)(puVar13 + 1),0x104,_Src,_MaxCount);
            *(undefined2 *)((longlong)puVar13 + _MaxCount * 2 + 4) = 0;
            puVar13[0x83] = (uint)local_98;
            *(bool *)(puVar13 + 0x84) = uVar6 == local_res8;
          }
          uVar11 = (ulonglong)(uVar10 + 1);
        }
      }
LAB_1450ab34c:
      uVar10 = (uint)uVar11;
      if (local_a8 != (longlong *)0x0) {
        (**(code **)(*local_a8 + 0x10))();
      }
      uVar12 = uVar12 + 1;
      HVar3 = local_80;
    } while (uVar12 < local_a0[0]);
  }
  uVar7 = 1;
  *param_2 = uVar10;
LAB_1450ab38a:
  if (local_b0 != (longlong *)0x0) {
    (**(code **)(*local_b0 + 0x10))(local_b0);
    local_b0 = (longlong *)0x0;
  }
  if (local_b8 != (longlong *)0x0) {
    (**(code **)(*local_b8 + 0x10))();
    local_b8 = (longlong *)0x0;
  }
  if (-1 < HVar3) {
    CoUninitialize();
  }
  return uVar7;
}



// FUNCTION 1450ab3f0 FUN_1450ab3f0 body=23 status=ok
// SIG undefined FUN_1450ab3f0(void)

undefined8 FUN_1450ab3f0(undefined8 param_1)

{
  FUN_1450a6570();
  return param_1;
}



// FUNCTION 1450ab410 FUN_1450ab410 body=70 status=ok
// SIG undefined FUN_1450ab410(void)

undefined8 FUN_1450ab410(void)

{
  DAT_14c79c0b0 = AK::MemoryMgr::Malloc(0x10,8);
  if (DAT_14c79c0b0 != (undefined8 *)0x0) {
    *DAT_14c79c0b0 = &PTR_FUN_149c268b0;
    return 1;
  }
  DAT_14c79c0b0 = (undefined8 *)0x0;
  return 0x34;
}



// FUNCTION 1450ab460 FUN_1450ab460 body=58 status=ok
// SIG undefined FUN_1450ab460(void)

void FUN_1450ab460(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_14c79c0b0;
  if (DAT_14c79c0b0 != (undefined8 *)0x0) {
    (**(code **)*DAT_14c79c0b0)(DAT_14c79c0b0,0);
    AK::MemoryMgr::Free(0x10,puVar1);
  }
  DAT_14c79c0b0 = (undefined8 *)0x0;
  return;
}



// FUNCTION 1450ab4a0 FUN_1450ab4a0 body=49 status=ok
// SIG undefined FUN_1450ab4a0(void)

longlong FUN_1450ab4a0(void)

{
  longlong lVar1;
  
  if (DAT_14c79c0b8 == 0) {
    DAT_14c79c0b8 = FUN_1450a3890();
  }
  lVar1 = DAT_14c79c0b8 + 8;
  if (DAT_14c79c0b8 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1450ab4e0 FUN_1450ab4e0 body=43 status=ok
// SIG undefined FUN_1450ab4e0(void)

undefined8 * FUN_1450ab4e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c268a8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1450ab510 FUN_1450ab510 body=101 status=ok
// SIG undefined FUN_1450ab510(void)

LPVOID * FUN_1450ab510(LPVOID *param_1)

{
  HRESULT HVar1;
  IID local_28;
  IID local_18;
  
  *param_1 = (LPVOID)0x0;
  local_18.Data1 = 0xbcde0395;
  local_18.Data2 = 0xe52f;
  local_18.Data3 = 0x467c;
  local_18.Data4[0] = 0x8e;
  local_18.Data4[1] = '=';
  local_18.Data4[2] = 0xc4;
  local_18.Data4[3] = 'W';
  local_18.Data4[4] = 0x92;
  local_18.Data4[5] = 0x91;
  local_18.Data4[6] = 'i';
  local_18.Data4[7] = '.';
  local_28.Data1 = 0xa95664d2;
  local_28.Data2 = 0x9614;
  local_28.Data3 = 0x4f35;
  local_28.Data4[0] = 0xa7;
  local_28.Data4[1] = 'F';
  local_28.Data4[2] = 0xde;
  local_28.Data4[3] = 0x8d;
  local_28.Data4[4] = 0xb6;
  local_28.Data4[5] = '6';
  local_28.Data4[6] = '\x17';
  local_28.Data4[7] = 0xe6;
  HVar1 = CoCreateInstance(&local_18,(LPUNKNOWN)0x0,0x17,&local_28,param_1);
  if ((HVar1 < 0) && (*param_1 != (longlong *)0x0)) {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    *param_1 = (LPVOID)0x0;
  }
  return param_1;
}



// FUNCTION 1450ab580 FUN_1450ab580 body=249 status=ok
// SIG undefined FUN_1450ab580(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_1450ab580(longlong *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  undefined2 *puVar3;
  wchar_t *local_res8;
  longlong *local_res10;
  short local_38 [4];
  wchar_t *pwStack_30;
  undefined8 local_28;
  
  puVar3 = (undefined2 *)0x0;
  uVar2 = 0xffffffff;
  if (param_1 != (longlong *)0x0) {
    local_res8 = (wchar_t *)0x0;
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1,&local_res8);
    if ((-1 < iVar1) && (local_res8 != (wchar_t *)0x0)) {
      uVar2 = AK::SoundEngine::GetIDFromString(local_res8);
      CoTaskMemFree(local_res8);
    }
  }
  *param_2 = uVar2;
  local_res10 = (longlong *)0x0;
  iVar1 = (**(code **)(*param_1 + 0x20))(param_1,0,&local_res10);
  if (-1 < iVar1) {
    if (local_res10 == (longlong *)0x0) {
      return (undefined2 *)0x0;
    }
    local_28 = 0;
    local_38[0] = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    local_38[3] = 0;
    pwStack_30 = (wchar_t *)0x0;
    iVar1 = (**(code **)(*local_res10 + 0x28))(local_res10,&DAT_14ab42320,local_38);
    if (((-1 < iVar1) && (local_38[0] == 0x1f)) && (pwStack_30 != (wchar_t *)0x0)) {
      wcsncpy(&DAT_14c79c0d0,pwStack_30,0x103);
      _DAT_14c79c2d6 = 0;
      puVar3 = &DAT_14c79c0d0;
    }
    PropVariantClear((PROPVARIANT *)local_38);
  }
  if (local_res10 != (longlong *)0x0) {
    (**(code **)(*local_res10 + 0x10))();
  }
  return puVar3;
}



// FUNCTION 1450ab680 FUN_1450ab680 body=154 status=ok
// SIG undefined FUN_1450ab680(void)

/* WARNING: Removing unreachable block (ram,0x0001450ab6f2) */

longlong FUN_1450ab680(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(param_1 + 0x18);
  iVar5 = 0;
  if (uVar4 != 0) {
    do {
      iVar3 = (uVar4 >> 1) + iVar5;
      uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 8);
      if (uVar1 == param_2) {
        return *(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 8;
      }
      uVar2 = uVar4 - 1;
      iVar3 = iVar3 + 1;
      if (param_2 <= uVar1) {
        uVar2 = uVar4;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      uVar4 = uVar2 >> 1;
    } while (uVar4 != 0);
  }
  return 0;
}



// FUNCTION 1450ab720 FUN_1450ab720 body=152 status=ok
// SIG undefined FUN_1450ab720(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1450ab720(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_1499d1438;
  param_1[3] = DAT_14c7913b0;
  param_1[2] = 0;
  puVar1 = param_1;
  if (DAT_14c7913b8 != (undefined8 *)0x0) {
    *(undefined8 **)((longlong)DAT_14c7913b0 + 0x10) = param_1;
    puVar1 = DAT_14c7913b8;
  }
  DAT_14c7913b8 = puVar1;
  _DAT_14c7913a8 = _DAT_14c7913a8 + 1;
  DAT_14c7913b0 = param_1;
  *param_1 = &PTR_FUN_1499d1448;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  return param_1;
}



// FUNCTION 1450ab7c0 FUN_1450ab7c0 body=281 status=ok
// SIG undefined FUN_1450ab7c0(void)

void FUN_1450ab7c0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong *puVar4;
  int iVar5;
  uint uVar6;
  ulonglong *puVar7;
  int iVar8;
  
  puVar7 = *(ulonglong **)(param_1 + 8);
  if (puVar7 != puVar7 + (ulonglong)*(uint *)(param_1 + 0x10) * 3) {
    do {
      uVar6 = *(uint *)(param_2 + 0x18);
      if (uVar6 != 0) {
        iVar8 = 0;
        do {
          iVar5 = (uVar6 >> 1) + iVar8;
          uVar1 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + (longlong)iVar5 * 8);
          if (uVar1 == *puVar7) {
            if (*(longlong *)(param_2 + 0x10) + (longlong)iVar5 * 8 != 0) {
              puVar7 = puVar7 + 3;
              goto LAB_1450ab89a;
            }
            break;
          }
          iVar5 = iVar5 + 1;
          uVar3 = uVar6 - 1;
          if (*puVar7 <= uVar1) {
            iVar5 = iVar8;
            uVar3 = uVar6;
          }
          uVar6 = uVar3 >> 1;
          iVar8 = iVar5;
        } while (uVar6 != 0);
      }
      if ((void *)puVar7[1] != (void *)0x0) {
        *(undefined4 *)(puVar7 + 2) = 0;
        AK::MemoryMgr::Free(0,(void *)puVar7[1]);
        puVar7[1] = 0;
        *(undefined4 *)((longlong)puVar7 + 0x14) = 0;
      }
      uVar6 = *(uint *)(param_1 + 0x10);
      lVar2 = *(longlong *)(param_1 + 8);
      puVar4 = puVar7;
      while (puVar4 < (ulonglong *)(lVar2 + ((ulonglong)uVar6 * 3 + -3) * 8)) {
        FUN_1450ab8e0(puVar4,puVar4 + 3);
        puVar4 = puVar4 + 3;
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
LAB_1450ab89a:
    } while (puVar7 != (ulonglong *)
                       (*(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0x10) * 0x18));
  }
  return;
}



// FUNCTION 1450ab8e0 FUN_1450ab8e0 body=124 status=ok
// SIG undefined FUN_1450ab8e0(void)

void FUN_1450ab8e0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  if ((void *)param_1[1] != (void *)0x0) {
    *(undefined4 *)(param_1 + 2) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[1]);
    param_1[1] = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



// FUNCTION 1450ab960 FUN_1450ab960 body=52 status=ok
// SIG undefined FUN_1450ab960(void)

undefined8 FUN_1450ab960(undefined8 param_1,ulonglong param_2)

{
  FUN_1450d23d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1450ab9a0 FUN_1450ab9a0 body=125 status=ok
// SIG undefined FUN_1450ab9a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1450ab9a0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149c26958;
  if (param_1[2] != 0) {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
  }
  puVar1 = (undefined8 *)param_1[3];
  puVar2 = (undefined8 *)param_1[2];
  if (param_1 != DAT_14c7913e8) {
    puVar1[2] = (undefined8 *)param_1[2];
    puVar2 = DAT_14c7913e8;
  }
  DAT_14c7913e8 = puVar2;
  if (param_1 == DAT_14c7913e0) {
    DAT_14c7913e0 = puVar1;
  }
  _DAT_14c7913d8 = _DAT_14c7913d8 + -1;
  *param_1 = &PTR_FUN_1499d1428;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1450aba20 FUN_1450aba20 body=200 status=ok
// SIG undefined FUN_1450aba20(void)

undefined8 FUN_1450aba20(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  __uint64 _Var6;
  ulonglong uVar7;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  iVar3 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar3 = 1;
  }
  _Var6 = (ulonglong)(iVar3 + uVar1) * 0xc;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var6);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        if (uVar7 != 0) {
          lVar5 = 0;
          do {
            lVar2 = *param_1;
            *(undefined8 *)(lVar5 + (longlong)pvVar4) = *(undefined8 *)(lVar5 + lVar2);
            *(undefined4 *)(lVar5 + 8 + (longlong)pvVar4) = *(undefined4 *)(lVar5 + 8 + lVar2);
            uVar7 = uVar7 - 1;
            lVar5 = lVar5 + 0xc;
          } while (uVar7 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1450abacb;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_1450abacb:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450abaf0 FUN_1450abaf0 body=186 status=ok
// SIG undefined FUN_1450abaf0(void)

int * FUN_1450abaf0(longlong *param_1,int param_2,undefined8 *param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  ulonglong uVar7;
  
  piVar4 = (int *)*param_1;
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  piVar1 = piVar4 + uVar7 * 3;
  for (; (piVar4 != piVar1 && (*piVar4 != param_2)); piVar4 = piVar4 + 3) {
  }
  piVar6 = (int *)0x0;
  piVar5 = piVar4 + 1;
  if (piVar4 == piVar1) {
    piVar5 = piVar6;
  }
  if (piVar5 == (int *)0x0) {
    if (((uVar7 < *(uint *)((longlong)param_1 + 0xc)) || (cVar3 = FUN_1450aba20(), cVar3 != '\0'))
       && (piVar5 = piVar6, uVar7 < *(uint *)((longlong)param_1 + 0xc))) {
      uVar2 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar2 + 1;
      piVar1 = (int *)(*param_1 + (ulonglong)uVar2 * 0xc);
      if (piVar1 != (int *)0x0) {
        *piVar1 = param_2;
        *(undefined8 *)(piVar1 + 1) = *param_3;
        piVar5 = piVar1 + 1;
      }
    }
  }
  else {
    *(undefined8 *)piVar5 = *param_3;
  }
  return piVar5;
}



// FUNCTION 1450abbb0 FUN_1450abbb0 body=123 status=ok
// SIG undefined FUN_1450abbb0(void)

void FUN_1450abbb0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int *_Dst;
  
  piVar1 = (int *)*param_1;
  _Dst = piVar1;
  if (piVar1 != piVar1 + (ulonglong)*(uint *)(param_1 + 1) * 3) {
    while (*_Dst != param_2) {
      _Dst = _Dst + 3;
      if (_Dst == piVar1 + (ulonglong)*(uint *)(param_1 + 1) * 3) {
        return;
      }
    }
    if (_Dst < piVar1 + (ulonglong)(*(uint *)(param_1 + 1) - 1) * 3) {
      memmove(_Dst,_Dst + 3,
              (ulonglong)
              (uint)((int)(((longlong)(piVar1 + (ulonglong)(*(uint *)(param_1 + 1) - 1) * 3) -
                           (longlong)_Dst) / 0xc) * 0xc));
    }
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + -1;
  }
  return;
}



// FUNCTION 1450abc30 FUN_1450abc30 body=185 status=ok
// SIG undefined FUN_1450abc30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1450abc30(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149c26968;
  if ((void *)param_1[4] != (void *)0x0) {
    *(undefined4 *)(param_1 + 5) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[4]);
    param_1[4] = 0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  *param_1 = &PTR_FUN_149c26958;
  if (param_1[2] != 0) {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
  }
  puVar1 = (undefined8 *)param_1[3];
  puVar2 = (undefined8 *)param_1[2];
  if (param_1 != DAT_14c7913e8) {
    puVar1[2] = (undefined8 *)param_1[2];
    puVar2 = DAT_14c7913e8;
  }
  DAT_14c7913e8 = puVar2;
  if (param_1 == DAT_14c7913e0) {
    DAT_14c7913e0 = puVar1;
  }
  _DAT_14c7913d8 = _DAT_14c7913d8 + -1;
  *param_1 = &PTR_FUN_1499d1428;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1450abcf0 FUN_1450abcf0 body=36 status=ok
// SIG undefined FUN_1450abcf0(void)

undefined8 * FUN_1450abcf0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 1450abd20 FUN_1450abd20 body=53 status=ok
// SIG undefined FUN_1450abd20(void)

void FUN_1450abd20(longlong param_1)

{
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}



// FUNCTION 1450abd60 FUN_1450abd60 body=211 status=ok
// SIG undefined FUN_1450abd60(void)

undefined4 FUN_1450abd60(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar7;
  ulonglong uVar6;
  
  puVar4 = AK::MemoryMgr::Malloc(0,0x80);
  *(undefined8 **)(param_1 + 0x18) = puVar4;
  if (puVar4 == (undefined8 *)0x0) {
    return 0x34;
  }
  *(undefined4 *)(param_1 + 0x20) = 8;
  *(undefined8 **)(param_1 + 0x10) = puVar4;
  uVar6 = 0;
  do {
    puVar7 = puVar4;
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
    *puVar7 = puVar7 + 2;
    puVar4 = puVar7 + 2;
  } while (uVar5 < *(uint *)(param_1 + 0x20));
  *puVar7 = 0;
  DAT_14c79c2e8 = 0;
  if ((DAT_14c79c2e0 < 0x81) && (DAT_14c79c2e4 < 0x80)) {
    cVar2 = FUN_1450adb70(&DAT_14c79c2d8,0x80 - DAT_14c79c2e4);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_1450abe19;
    }
  }
  DAT_14c79c2e0 = 0x80;
  uVar6 = 0;
  do {
    uVar5 = (int)uVar6 + 1;
    *(undefined8 *)(DAT_14c79c2d8 + uVar6 * 8) = 0;
    uVar6 = (ulonglong)uVar5;
  } while (uVar5 < DAT_14c79c2e0);
  bVar1 = true;
LAB_1450abe19:
  uVar3 = 0x34;
  if (bVar1) {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1450abe40 FUN_1450abe40 body=511 status=ok
// SIG undefined FUN_1450abe40(void)

void FUN_1450abe40(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  
  FUN_1450ad3e0();
  puVar7 = (undefined8 *)0x0;
  if (*(uint *)(param_1 + 6) != 0) {
    puVar2 = (undefined8 *)(param_1[5] + (0xfffffffeU % (ulonglong)*(uint *)(param_1 + 6)) * 8);
    puVar4 = (undefined8 *)*puVar2;
    puVar5 = puVar7;
    while (puVar6 = puVar4, puVar6 != (undefined8 *)0x0) {
      if (puVar6[1] == -2) {
        puVar4 = (undefined8 *)puVar6[2];
        if (puVar5 == (undefined8 *)0x0) {
          *puVar2 = *puVar6;
        }
        else {
          *puVar5 = *puVar6;
        }
        AK::MemoryMgr::Free(0,puVar6);
        *(int *)(param_1 + 7) = *(int *)(param_1 + 7) + -1;
        piVar1 = (int *)(puVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        *(undefined1 *)((longlong)puVar4 + 100) = 0;
        if (*piVar1 == 0) {
          FUN_1453550a0();
        }
        if (*(int *)(puVar4 + 0xc) == 0) {
          (**(code **)*puVar4)(puVar4,0);
          AK::MemoryMgr::Free(4,puVar4);
        }
        break;
      }
      puVar5 = puVar6;
      puVar4 = (undefined8 *)*puVar6;
    }
  }
  if (*(int *)(param_1 + 6) != 0) {
    do {
      lVar3 = (longlong)puVar7 * 8;
      puVar2 = *(undefined8 **)(lVar3 + param_1[5]);
      while (puVar2 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)*puVar2;
        AK::MemoryMgr::Free(0,puVar2);
        puVar2 = puVar5;
      }
      uVar8 = (int)puVar7 + 1;
      puVar7 = (undefined8 *)(ulonglong)uVar8;
      *(undefined8 *)(lVar3 + param_1[5]) = 0;
    } while (uVar8 < *(uint *)(param_1 + 6));
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((void *)param_1[5] != (void *)0x0) {
    *(undefined4 *)(param_1 + 6) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[5]);
    param_1[5] = 0;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  while (puVar7 = (undefined8 *)*param_1, puVar7 != (undefined8 *)0x0) {
    *param_1 = *puVar7;
    if (puVar7 == (undefined8 *)param_1[1]) {
      param_1[1] = 0;
    }
    if ((puVar7 < (undefined8 *)param_1[3]) ||
       ((undefined8 *)param_1[3] + (ulonglong)*(uint *)(param_1 + 4) * 2 <= puVar7)) {
      AK::MemoryMgr::Free(0,puVar7);
      *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
    }
    else {
      *puVar7 = param_1[2];
      *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
      param_1[2] = puVar7;
    }
  }
  puVar7 = (undefined8 *)param_1[2];
  while (puVar2 = puVar7, puVar2 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*puVar2;
    if ((puVar2 < (undefined8 *)param_1[3]) ||
       ((undefined8 *)param_1[3] + (ulonglong)*(uint *)(param_1 + 4) * 2 <= puVar2)) {
      AK::MemoryMgr::Free(0,puVar2);
    }
  }
  if ((void *)param_1[3] != (void *)0x0) {
    AK::MemoryMgr::Free(0,(void *)param_1[3]);
    param_1[3] = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (DAT_14c79c2d8 != (void *)0x0) {
    DAT_14c79c2e0 = 0;
    AK::MemoryMgr::Free(0,DAT_14c79c2d8);
    DAT_14c79c2d8 = (void *)0x0;
    DAT_14c79c2e4 = 0;
  }
  return;
}



// FUNCTION 1450ac040 FUN_1450ac040 body=759 status=ok
// SIG undefined FUN_1450ac040(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1450ac040(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  bVar2 = false;
  plVar9 = (longlong *)0x0;
  if (*(uint *)(param_1 + 0x30) == 0) {
LAB_1450ac1ba:
    puVar6 = AK::MemoryMgr::Malloc(4,0x78);
    if (puVar6 == (undefined8 *)0x0) {
      return 2;
    }
    FUN_1453550b0(puVar6,param_2);
    puVar6[0xd] = 0;
    *puVar6 = &PTR_FUN_149c26950;
    puVar6[0xe] = 0;
    if ((*(uint *)(param_1 + 0x30) == 0) ||
       (0.9 < (float)*(uint *)(param_1 + 0x38) / (float)*(uint *)(param_1 + 0x30))) {
      FUN_1450ad850(param_1 + 0x28);
    }
    plVar8 = plVar9;
    if (*(uint *)(param_1 + 0x30) != 0) {
      uVar1 = (param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30);
      for (puVar7 = *(undefined8 **)(*(longlong *)(param_1 + 0x28) + uVar1 * 8);
          puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7) {
        if (puVar7[1] == param_2) {
          plVar8 = puVar7 + 2;
          if (plVar8 != (longlong *)0x0) goto LAB_1450ac296;
          break;
        }
      }
      puVar7 = AK::MemoryMgr::Malloc(0,0x18);
      plVar8 = plVar9;
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + uVar1 * 8);
        puVar7[1] = param_2;
        *(undefined8 **)(*(longlong *)(param_1 + 0x28) + uVar1 * 8) = puVar7;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
        plVar8 = puVar7 + 2;
      }
      if (plVar8 != (longlong *)0x0) {
LAB_1450ac296:
        *plVar8 = (longlong)puVar6;
LAB_1450ac0b9:
        if (puVar6[1] == 0) {
          lVar5 = FUN_1450adc20(puVar6);
          lVar3 = DAT_14c7913b8;
          if (lVar5 != 0) {
            _DAT_14c791448 = 0;
            _DAT_14c791450 = 0;
            _DAT_14c791438 = 0x3f800000;
            _DAT_14c791458 = 0;
            _DAT_14c79143c = 0x3f80000000000000;
            _DAT_14c791430 = 0;
            DAT_14c791440._4_4_ = 0;
            _DAT_14c791460 = 0x3ff3f;
            _DAT_14c791464 = 0x3f800000;
            FUN_1450d2c40(lVar5,&DAT_14c791430,1,0);
            goto LAB_1450ac15d;
          }
        }
        else {
LAB_1450ac15d:
          bVar2 = true;
          lVar3 = DAT_14c7913b8;
        }
        for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x10)) {
          lVar5 = FUN_1450ab680(lVar3 + 0xc0,param_2);
          if ((lVar5 != 0) && (lVar5 = FUN_1450adcc0(puVar6), lVar5 != 0)) {
            bVar2 = true;
          }
        }
        if (bVar2) {
          return 1;
        }
      }
    }
  }
  else {
    for (puVar6 = *(undefined8 **)
                   (*(longlong *)(param_1 + 0x28) +
                   ((param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30)) * 8);
        plVar8 = plVar9, puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6) {
      if (puVar6[1] == param_2) {
        plVar8 = puVar6 + 2;
        break;
      }
    }
    if (plVar8 == (longlong *)0x0) goto LAB_1450ac1ba;
    puVar6 = (undefined8 *)*plVar8;
    if (puVar6 == (undefined8 *)0x0) goto LAB_1450ac2bb;
    if (plVar8 != (longlong *)0x0) goto LAB_1450ac0b9;
  }
  FUN_1450d23d0(puVar6);
  AK::MemoryMgr::Free(4,puVar6);
  if (plVar8 == (longlong *)0x0) {
    return 2;
  }
LAB_1450ac2bb:
  if (*(uint *)(param_1 + 0x30) != 0) {
    uVar1 = (param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30);
    plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x28) + uVar1 * 8);
    while (plVar4 = plVar8, plVar4 != (longlong *)0x0) {
      if (plVar4[1] == param_2) {
        if (plVar9 == (longlong *)0x0) {
          *(longlong *)(*(longlong *)(param_1 + 0x28) + uVar1 * 8) = *plVar4;
        }
        else {
          *plVar9 = *plVar4;
        }
        AK::MemoryMgr::Free(0,plVar4);
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
        return 2;
      }
      plVar9 = plVar4;
      plVar8 = (longlong *)*plVar4;
    }
  }
  return 2;
}



// FUNCTION 1450ac340 FUN_1450ac340 body=164 status=ok
// SIG undefined FUN_1450ac340(void)

void FUN_1450ac340(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (*(uint *)(param_1 + 0x30) != 0) {
    plVar2 = (longlong *)
             (*(longlong *)(param_1 + 0x28) +
             ((param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30)) * 8);
    plVar6 = (longlong *)*plVar2;
    plVar5 = (longlong *)0x0;
    if (plVar6 != (longlong *)0x0) {
      while (plVar6[1] != param_2) {
        plVar3 = (longlong *)*plVar6;
        plVar5 = plVar6;
        plVar6 = plVar3;
        if (plVar3 == (longlong *)0x0) {
          return;
        }
      }
      puVar4 = (undefined8 *)plVar6[2];
      if (plVar5 == (longlong *)0x0) {
        *plVar2 = *plVar6;
      }
      else {
        *plVar5 = *plVar6;
      }
      AK::MemoryMgr::Free(0,plVar6);
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      piVar1 = (int *)(puVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      *(undefined1 *)((longlong)puVar4 + 100) = 0;
      if (*piVar1 == 0) {
        FUN_1453550a0(puVar4);
      }
      if (*(int *)(puVar4 + 0xc) == 0) {
        (**(code **)*puVar4)(puVar4,0);
        AK::MemoryMgr::Free(4,puVar4);
      }
    }
  }
  return;
}



// FUNCTION 1450ac3f0 FUN_1450ac3f0 body=255 status=ok
// SIG undefined FUN_1450ac3f0(void)

undefined8 FUN_1450ac3f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  lVar1 = *(longlong *)(param_2 + 8);
  if (lVar1 != 0) {
    uVar6 = (ulonglong)DAT_14c79c2e0;
    if ((DAT_14c79c2e0 == 0) || (0.9 < (float)DAT_14c79c2e8 / (float)uVar6)) {
      FUN_1450ad9d0(&DAT_14c79c2d8);
      uVar6 = (ulonglong)DAT_14c79c2e0;
    }
    if ((int)uVar6 != 0) {
      uVar4 = ((uint)((ulonglong)lVar1 >> 0x10) & 0xffff ^ (uint)lVar1) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      uVar4 = uVar4 >> 0x10 ^ uVar4;
      uVar6 = (ulonglong)uVar4 % uVar6;
      lVar2 = *(longlong *)(DAT_14c79c2d8 + uVar6 * 8);
      for (lVar3 = lVar2; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x70)) {
        uVar5 = ((uint)((ulonglong)lVar3 >> 0x10) & 0xffff ^ (uint)lVar3) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        if ((uVar5 >> 0x10 ^ uVar5) == uVar4) {
          return 1;
        }
      }
      *(longlong *)(lVar1 + 0x70) = lVar2;
      *(longlong *)(DAT_14c79c2d8 + uVar6 * 8) = lVar1;
      DAT_14c79c2e8 = DAT_14c79c2e8 + 1;
    }
  }
  return 1;
}



// FUNCTION 1450ac4f0 FUN_1450ac4f0 body=198 status=ok
// SIG undefined FUN_1450ac4f0(void)

void FUN_1450ac4f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_2 + 8);
  if (lVar1 != 0) {
    lVar6 = 0;
    if (*(longlong *)(param_2 + 0x18) != 0) {
      *(undefined2 *)(*(longlong *)(param_2 + 0x18) + 0x48) = 0;
    }
    uVar4 = ((uint)((ulonglong)lVar1 >> 0x10) & 0xffff ^ (uint)lVar1) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 ^ uVar4 >> 0x10;
    if (DAT_14c79c2e0 != 0) {
      uVar2 = (ulonglong)uVar4 % (ulonglong)DAT_14c79c2e0;
      lVar1 = *(longlong *)(DAT_14c79c2d8 + uVar2 * 8);
      if (lVar1 != 0) {
        while (lVar3 = lVar1,
              uVar5 = ((uint)((ulonglong)lVar3 >> 0x10) & 0xffff ^ (uint)lVar3) * -0x7a143595,
              uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb, (uVar5 >> 0x10 ^ uVar5) != uVar4) {
          lVar1 = *(longlong *)(lVar3 + 0x70);
          lVar6 = lVar3;
          if (*(longlong *)(lVar3 + 0x70) == 0) {
            return;
          }
        }
        if (lVar3 != 0) {
          if (lVar6 != 0) {
            *(undefined8 *)(lVar6 + 0x70) = *(undefined8 *)(lVar3 + 0x70);
            DAT_14c79c2e8 = DAT_14c79c2e8 + -1;
            return;
          }
          *(undefined8 *)(DAT_14c79c2d8 + uVar2 * 8) = *(undefined8 *)(lVar3 + 0x70);
          DAT_14c79c2e8 = DAT_14c79c2e8 + -1;
        }
      }
    }
  }
  return;
}



// FUNCTION 1450ac5c0 FUN_1450ac5c0 body=83 status=ok
// SIG undefined FUN_1450ac5c0(void)

undefined8 * FUN_1450ac5c0(undefined8 param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)0x0;
  if (*(uint *)(g_pRegistryMgr + 0x30) != 0) {
    for (puVar1 = *(undefined8 **)
                   (*(longlong *)(g_pRegistryMgr + 0x28) +
                   ((param_2 & 0xffffffff) % (ulonglong)*(uint *)(g_pRegistryMgr + 0x30)) * 8);
        puVar2 = puVar3, puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
      if (puVar1[1] == param_2) {
        puVar2 = puVar1 + 2;
        break;
      }
    }
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar2;
    }
  }
  return puVar3;
}



// FUNCTION 1450ac620 FUN_1450ac620 body=216 status=ok
// SIG undefined FUN_1450ac620(void)

undefined8
FUN_1450ac620(longlong param_1,ulonglong param_2,undefined8 param_3,int param_4,undefined1 param_5,
             byte param_6)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (*(uint *)(param_1 + 0x30) == 0) {
    return 2;
  }
  puVar1 = *(undefined8 **)
            (*(longlong *)(param_1 + 0x28) +
            ((param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30)) * 8);
  do {
    if (puVar1 == (undefined8 *)0x0) {
      plVar2 = (longlong *)0x0;
LAB_1450ac670:
      if (plVar2 != (longlong *)0x0) {
        if (((param_6 & 1) != 0) && (*(longlong *)(*plVar2 + 8) != 0)) {
          FUN_1450d2c40(*(longlong *)(*plVar2 + 8),param_3,param_4,param_5);
        }
        if ((((param_6 & 2) != 0) && (param_4 != 0)) && (*(longlong *)(*plVar2 + 0x20) != 0)) {
          FUN_14507a950(*(longlong *)(*plVar2 + 0x20),param_3);
        }
        return 1;
      }
      return 2;
    }
    if (puVar1[1] == param_2) {
      plVar2 = puVar1 + 2;
      goto LAB_1450ac670;
    }
    puVar1 = (undefined8 *)*puVar1;
  } while( true );
}



// FUNCTION 1450ac700 FUN_1450ac700 body=250 status=ok
// SIG undefined FUN_1450ac700(void)

undefined8 FUN_1450ac700(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(uint *)(param_1 + 0x30) == 0) {
    return 2;
  }
  puVar4 = (undefined8 *)0x0;
  for (puVar1 = *(undefined8 **)
                 (*(longlong *)(param_1 + 0x28) +
                 ((param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30)) * 8);
      puVar3 = puVar4, puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    if (puVar1[1] == param_2) {
      puVar3 = puVar1 + 2;
      break;
    }
  }
  if ((puVar3 != (undefined8 *)0x0) && (lVar2 = FUN_1450adcc0(*puVar3), lVar2 != 0)) {
    if ((param_3 == 0xffffffffffffffff) || (param_3 == param_2)) {
      FUN_14507aab0(lVar2);
      return 1;
    }
    if (*(uint *)(param_1 + 0x30) != 0) {
      for (puVar1 = *(undefined8 **)
                     (*(longlong *)(param_1 + 0x28) +
                     ((param_3 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30)) * 8);
          puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
        if (puVar1[1] == param_3) {
          puVar4 = puVar1 + 2;
          break;
        }
      }
      if (puVar4 != (undefined8 *)0x0) {
        FUN_14507a990(lVar2,*puVar4);
        return 1;
      }
    }
  }
  return 2;
}



// FUNCTION 1450ac800 FUN_1450ac800 body=264 status=ok
// SIG undefined FUN_1450ac800(void)

void FUN_1450ac800(longlong param_1,ulonglong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (*(uint *)(param_1 + 0x30) != 0) {
    for (puVar1 = *(undefined8 **)
                   (*(longlong *)(param_1 + 0x28) +
                   ((param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30)) * 8);
        puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
      if (puVar1[1] == param_2) {
        plVar4 = puVar1 + 2;
        goto LAB_1450ac850;
      }
    }
    plVar4 = (longlong *)0x0;
LAB_1450ac850:
    if (((plVar4 != (longlong *)0x0) && (*plVar4 != 0)) && (lVar3 = FUN_1450add60(), lVar3 != 0)) {
      if (param_4 == 0) {
        FUN_1450ad7c0(param_1,param_3);
        FUN_1450d12d0(lVar3,param_3);
      }
      else if (param_4 == 1) {
        FUN_1450ad7c0(param_1,param_3);
        FUN_1450d1310(lVar3,param_3);
      }
      else if (param_4 == 2) {
        FUN_1450d1480(lVar3,param_3);
      }
      FUN_1450a5be0(0);
      lVar2 = *(longlong *)(*plVar4 + 8);
      if (lVar2 != 0) {
        *(uint *)(lVar2 + 0x7c) = *(uint *)(lVar2 + 0x7c) | 1;
        FUN_1450ab7c0(lVar2 + 0x20,lVar3 + 0xc0);
      }
    }
  }
  return;
}



// FUNCTION 1450ac910 FUN_1450ac910 body=457 status=ok
// SIG undefined FUN_1450ac910(void)

void FUN_1450ac910(undefined8 param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong *puVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  int iVar10;
  
  if (param_3 != 2) {
    FUN_1450ad7c0();
  }
  lVar6 = FUN_144d4eb60();
  if (lVar6 != 0) {
    if (param_3 == 0) {
      FUN_1450d12d0(lVar6,param_2);
    }
    else if (param_3 == 1) {
      FUN_1450d1310(lVar6,param_2);
    }
    else if (param_3 == 2) {
      FUN_1450d1480(lVar6,param_2);
    }
    FUN_1450a5be0(0);
    if (DAT_14c791418 != 0) {
      lVar9 = DAT_14c791418;
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar9 + 8) + 0x10);
        if ((lVar1 == 0) || (*(char *)(lVar1 + 0xe0) == '\0')) {
          *(uint *)(lVar9 + 0x7c) = *(uint *)(lVar9 + 0x7c) | 1;
          puVar8 = *(ulonglong **)(lVar9 + 0x28);
          if (puVar8 != puVar8 + (ulonglong)*(uint *)(lVar9 + 0x30) * 3) {
            do {
              uVar7 = *(uint *)(lVar6 + 0xd8);
              if (uVar7 != 0) {
                iVar10 = 0;
                do {
                  iVar5 = (uVar7 >> 1) + iVar10;
                  uVar2 = *(ulonglong *)(*(longlong *)(lVar6 + 0xd0) + (longlong)iVar5 * 8);
                  if (uVar2 == *puVar8) {
                    uVar7 = *(uint *)(lVar9 + 0x30);
                    if (*(longlong *)(lVar6 + 0xd0) + (longlong)iVar5 * 8 != 0) {
                      puVar8 = puVar8 + 3;
                      goto LAB_1450aca8d;
                    }
                    break;
                  }
                  iVar5 = iVar5 + 1;
                  uVar3 = uVar7 - 1;
                  if (*puVar8 <= uVar2) {
                    iVar5 = iVar10;
                    uVar3 = uVar7;
                  }
                  uVar7 = uVar3 >> 1;
                  iVar10 = iVar5;
                } while (uVar7 != 0);
              }
              if ((void *)puVar8[1] != (void *)0x0) {
                *(undefined4 *)(puVar8 + 2) = 0;
                AK::MemoryMgr::Free(0,(void *)puVar8[1]);
                puVar8[1] = 0;
                *(undefined4 *)((longlong)puVar8 + 0x14) = 0;
              }
              uVar7 = *(uint *)(lVar9 + 0x30);
              lVar1 = *(longlong *)(lVar9 + 0x28);
              puVar4 = puVar8;
              while (puVar4 < (ulonglong *)(lVar1 + ((ulonglong)uVar7 * 3 + -3) * 8)) {
                FUN_1450ab8e0(puVar4,puVar4 + 3);
                puVar4 = puVar4 + 3;
              }
              *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + -1;
              uVar7 = *(uint *)(lVar9 + 0x30);
LAB_1450aca8d:
            } while (puVar8 != (ulonglong *)(*(longlong *)(lVar9 + 0x28) + (ulonglong)uVar7 * 0x18))
            ;
          }
        }
        lVar9 = *(longlong *)(lVar9 + 0x10);
      } while (lVar9 != 0);
    }
  }
  return;
}



// FUNCTION 1450acae0 FUN_1450acae0 body=160 status=ok
// SIG undefined FUN_1450acae0(void)

void FUN_1450acae0(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (*(uint *)(param_1 + 0x30) != 0) {
    for (puVar1 = *(undefined8 **)
                   (*(longlong *)(param_1 + 0x28) +
                   ((param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30)) * 8);
        puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
      if (puVar1[1] == param_2) {
        plVar4 = puVar1 + 2;
        goto LAB_1450acb20;
      }
    }
    plVar4 = (longlong *)0x0;
LAB_1450acb20:
    if (((plVar4 != (longlong *)0x0) && (*plVar4 != 0)) &&
       (lVar2 = *(longlong *)(*plVar4 + 0x10), lVar2 != 0)) {
      FUN_1450d1650(lVar2);
      FUN_1450a5be0(0);
      lVar3 = FUN_1450adc20(*plVar4);
      if (lVar3 != 0) {
        *(uint *)(lVar3 + 0x7c) = *(uint *)(lVar3 + 0x7c) | 1;
        FUN_1450ab7c0(lVar3 + 0x20,lVar2 + 0xc0);
      }
    }
  }
  return;
}



// FUNCTION 1450acb80 FUN_1450acb80 body=319 status=ok
// SIG undefined FUN_1450acb80(void)

void FUN_1450acb80(longlong param_1,ulonglong param_2,longlong param_3,uint param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint local_res8 [2];
  
  if (*(uint *)(param_1 + 0x30) != 0) {
    for (puVar5 = *(undefined8 **)
                   (*(longlong *)(param_1 + 0x28) +
                   ((param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30)) * 8);
        puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)*puVar5) {
      if (puVar5[1] == param_2) {
        puVar5 = puVar5 + 2;
        goto LAB_1450acbc6;
      }
    }
    puVar5 = (undefined8 *)0x0;
LAB_1450acbc6:
    if (puVar5 != (undefined8 *)0x0) {
      uVar1 = *puVar5;
      local_res8[0] = param_4;
      lVar3 = FUN_1450add60(uVar1);
      if (lVar3 != 0) {
        uVar7 = 0;
        uVar8 = local_res8[0];
        if (local_res8[0] != 0) {
          do {
            uVar2 = *(ulonglong *)(param_3 + uVar7 * 0x10);
            if ((uVar2 != 0xffffffffffffffff) && (*(uint *)(param_1 + 0x30) != 0)) {
              for (puVar5 = *(undefined8 **)
                             (*(longlong *)(param_1 + 0x28) +
                             ((uVar2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30)) * 8);
                  puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)*puVar5) {
                if (puVar5[1] == uVar2) {
                  puVar5 = puVar5 + 2;
                  goto LAB_1450acc50;
                }
              }
              puVar5 = (undefined8 *)0x0;
LAB_1450acc50:
              if (puVar5 != (undefined8 *)0x0) {
                FUN_1450adcc0(*puVar5);
                uVar8 = local_res8[0];
              }
            }
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
          } while (uVar6 < uVar8);
        }
        FUN_1450d1280(lVar3,param_3,local_res8);
        lVar4 = FUN_1450adc20(uVar1);
        if (lVar4 != 0) {
          *(uint *)(lVar4 + 0x7c) = *(uint *)(lVar4 + 0x7c) | 1;
          FUN_1450ab7c0(lVar4 + 0x20,lVar3 + 0xc0);
        }
      }
    }
  }
  return;
}



// FUNCTION 1450accc0 FUN_1450accc0 body=286 status=ok
// SIG undefined FUN_1450accc0(void)

void FUN_1450accc0(longlong param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (*(uint *)(param_1 + 0x30) != 0) {
    plVar5 = (longlong *)0x0;
    for (puVar1 = *(undefined8 **)
                   (*(longlong *)(param_1 + 0x28) +
                   ((param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30)) * 8);
        plVar4 = plVar5, puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
      if (puVar1[1] == param_2) {
        plVar4 = puVar1 + 2;
        break;
      }
    }
    if ((plVar4 != (longlong *)0x0) && (lVar3 = FUN_1450add60(*plVar4), lVar3 != 0)) {
      if (param_3 == 0xffffffffffffffff) {
        FUN_1450d11d0(lVar3,param_4);
      }
      else {
        if (*(uint *)(param_1 + 0x30) != 0) {
          for (puVar1 = *(undefined8 **)
                         (*(longlong *)(param_1 + 0x28) +
                         ((param_3 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30)) * 8);
              puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
            if (puVar1[1] == param_3) {
              plVar5 = puVar1 + 2;
              break;
            }
          }
          if (plVar5 != (longlong *)0x0) {
            FUN_1450adcc0(*plVar5);
          }
        }
        FUN_1450d1110(lVar3,param_3,param_4);
      }
      lVar2 = *(longlong *)(*plVar4 + 8);
      if (lVar2 != 0) {
        *(uint *)(lVar2 + 0x7c) = *(uint *)(lVar2 + 0x7c) | 1;
        FUN_1450ab7c0(lVar2 + 0x20,lVar3 + 0xc0);
      }
    }
  }
  return;
}



// FUNCTION 1450acde0 FUN_1450acde0 body=140 status=ok
// SIG undefined FUN_1450acde0(void)

undefined8 FUN_1450acde0(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = 2;
  if (*(uint *)(param_1 + 0x30) != 0) {
    for (puVar1 = *(undefined8 **)
                   (*(longlong *)(param_1 + 0x28) +
                   ((param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30)) * 8);
        puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
      if (puVar1[1] == param_2) {
        plVar3 = puVar1 + 2;
        goto LAB_1450ace20;
      }
    }
    plVar3 = (longlong *)0x0;
LAB_1450ace20:
    if (plVar3 != (longlong *)0x0) {
      lVar2 = *(longlong *)(*plVar3 + 8);
      if (lVar2 != 0) {
        *(uint *)(lVar2 + 0x7c) = *(uint *)(lVar2 + 0x7c) | 1;
        uVar4 = 1;
        *(undefined4 *)(lVar2 + 0x78) = param_3;
      }
      if (*(longlong *)(*plVar3 + 0x20) != 0) {
        FUN_14507ab80(*(longlong *)(*plVar3 + 0x20),param_3);
        return 1;
      }
    }
  }
  return uVar4;
}



// FUNCTION 1450ace70 FUN_1450ace70 body=216 status=ok
// SIG undefined FUN_1450ace70(void)

undefined8
FUN_1450ace70(longlong param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4,
             undefined4 param_5)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if (uVar1 != 0) {
    for (puVar4 = *(undefined8 **)
                   (*(longlong *)(param_1 + 0x28) + ((param_2 & 0xffffffff) % (ulonglong)uVar1) * 8)
        ; puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
      if (puVar4[1] == param_2) {
        puVar4 = puVar4 + 2;
        goto LAB_1450acec0;
      }
    }
    puVar4 = (undefined8 *)0x0;
LAB_1450acec0:
    if (puVar4 != (undefined8 *)0x0) {
      uVar3 = *puVar4;
      for (puVar4 = *(undefined8 **)
                     (*(longlong *)(param_1 + 0x28) +
                     ((param_3 & 0xffffffff) % (ulonglong)uVar1) * 8); puVar4 != (undefined8 *)0x0;
          puVar4 = (undefined8 *)*puVar4) {
        if (puVar4[1] == param_3) {
          if (puVar4 + 2 != (undefined8 *)0x0) {
            FUN_1450adcc0(puVar4[2]);
          }
          break;
        }
      }
      lVar2 = FUN_1450adc20(uVar3);
      if (lVar2 != 0) {
        uVar3 = FUN_1450d2db0(lVar2,param_3,param_4,param_5);
        return uVar3;
      }
    }
  }
  return 2;
}



// FUNCTION 1450acf50 FUN_1450acf50 body=205 status=ok
// SIG undefined FUN_1450acf50(void)

undefined8
FUN_1450acf50(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    for (puVar3 = *(undefined8 **)
                   (*(longlong *)(param_1 + 0x28) +
                   ((param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30)) * 8);
        puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
      if (puVar3[1] == param_2) {
        puVar3 = puVar3 + 2;
        goto LAB_1450acf95;
      }
    }
    puVar3 = (undefined8 *)0x0;
LAB_1450acf95:
    if (puVar3 != (undefined8 *)0x0) {
      uVar2 = *puVar3;
      for (puVar3 = *(undefined8 **)
                     (*(longlong *)(param_1 + 0x28) +
                     ((param_3 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30)) * 8);
          puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
        if (puVar3[1] == param_3) {
          if (puVar3 + 2 != (undefined8 *)0x0) {
            FUN_1450adcc0(puVar3[2]);
          }
          break;
        }
      }
      lVar1 = FUN_1450adc20(uVar2);
      if (lVar1 != 0) {
        uVar2 = FUN_1450d2df0(lVar1,param_3,param_4,param_5);
        return uVar2;
      }
    }
  }
  return 2;
}



// FUNCTION 1450ad020 FUN_1450ad020 body=95 status=ok
// SIG undefined FUN_1450ad020(void)

undefined8 * FUN_1450ad020(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  
  if ((param_3 != 0) && (lVar2 = *(longlong *)(param_3 + 0x30), lVar2 != 0)) {
    piVar3 = *(int **)(lVar2 + 0x20);
    piVar1 = piVar3 + (ulonglong)*(uint *)(lVar2 + 0x28) * 3;
    for (; (piVar3 != piVar1 && (*piVar3 != param_4)); piVar3 = piVar3 + 3) {
    }
    piVar4 = piVar3 + 1;
    if (piVar3 == piVar1) {
      piVar4 = (int *)0x0;
    }
    if (piVar4 != (int *)0x0) {
      *param_2 = *(undefined8 *)piVar4;
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1450ad080 FUN_1450ad080 body=83 status=ok
// SIG undefined FUN_1450ad080(void)

int FUN_1450ad080(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1450ade00(param_2);
    if (lVar1 != 0) {
      lVar1 = FUN_1450abaf0(lVar1 + 0x20,param_3,param_4);
      return 2 - (uint)(lVar1 != 0);
    }
  }
  return 2;
}



// FUNCTION 1450ad0e0 FUN_1450ad0e0 body=215 status=ok
// SIG undefined FUN_1450ad0e0(void)

undefined8 FUN_1450ad0e0(undefined8 param_1,int param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  int *_Dst;
  
  lVar2 = DAT_14c7913e8;
  if (param_3 == 0) {
    for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x10)) {
      piVar1 = *(int **)(lVar2 + 0x20);
      for (_Dst = piVar1; _Dst != piVar1 + (ulonglong)*(uint *)(lVar2 + 0x28) * 3; _Dst = _Dst + 3)
      {
        if (*_Dst == param_2) {
          if (_Dst < piVar1 + (ulonglong)(*(uint *)(lVar2 + 0x28) - 1) * 3) {
            memmove(_Dst,_Dst + 3,
                    (ulonglong)
                    (uint)((int)(((longlong)(piVar1 + (ulonglong)(*(uint *)(lVar2 + 0x28) - 1) * 3)
                                 - (longlong)_Dst) / 0xc) * 0xc));
          }
          *(int *)(lVar2 + 0x28) = *(int *)(lVar2 + 0x28) + -1;
          break;
        }
      }
    }
  }
  else if (*(longlong *)(param_3 + 0x30) != 0) {
    FUN_1450abbb0(*(longlong *)(param_3 + 0x30) + 0x20);
    return 1;
  }
  return 1;
}



// FUNCTION 1450ad1c0 GetObj body=67 status=ok
// SIG CAkRegisteredObj * GetObj(CAkRegistryMgr * this, __uint64 param_1)

/* public: class CAkRegisteredObj * __ptr64 __cdecl CAkRegistryMgr::GetObj(unsigned __int64) __ptr64
    */

CAkRegisteredObj * __thiscall CAkRegistryMgr::GetObj(CAkRegistryMgr *this,__uint64 param_1)

{
  undefined8 *puVar1;
  
                    /* 0x50ad1c0  103  ?GetObj@CAkRegistryMgr@@QEAAPEAVCAkRegisteredObj@@_K@Z */
  if (*(uint *)(this + 0x30) != 0) {
    for (puVar1 = *(undefined8 **)
                   (*(longlong *)(this + 0x28) +
                   ((param_1 & 0xffffffff) % (ulonglong)*(uint *)(this + 0x30)) * 8);
        puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
      if (puVar1[1] == param_1) {
        puVar1 = puVar1 + 2;
        goto LAB_1450ad1f1;
      }
    }
    puVar1 = (undefined8 *)0x0;
LAB_1450ad1f1:
    if (puVar1 != (undefined8 *)0x0) {
      return (CAkRegisteredObj *)*puVar1;
    }
  }
  return (CAkRegisteredObj *)0x0;
}



// FUNCTION 1450ad210 GetObjAndAddref body=139 status=ok
// SIG CAkRegisteredObj * GetObjAndAddref(CAkRegistryMgr * this, __uint64 param_1)

/* public: class CAkRegisteredObj * __ptr64 __cdecl CAkRegistryMgr::GetObjAndAddref(unsigned
   __int64) __ptr64 */

CAkRegisteredObj * __thiscall CAkRegistryMgr::GetObjAndAddref(CAkRegistryMgr *this,__uint64 param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  
                    /* 0x50ad210  104
                       ?GetObjAndAddref@CAkRegistryMgr@@QEAAPEAVCAkRegisteredObj@@_K@Z */
  if (*(uint *)(this + 0x30) != 0) {
    for (puVar2 = *(undefined8 **)
                   (*(longlong *)(this + 0x28) +
                   ((param_1 & 0xffffffff) % (ulonglong)*(uint *)(this + 0x30)) * 8);
        puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
      if (puVar2[1] == param_1) {
        plVar4 = puVar2 + 2;
        goto LAB_1450ad247;
      }
    }
    plVar4 = (longlong *)0x0;
LAB_1450ad247:
    if (plVar4 != (longlong *)0x0) {
      lVar3 = *plVar4;
      uVar1 = *(uint *)(lVar3 + 0x60);
      if ((uVar1 < 2) && (*(char *)(lVar3 + 100) != '\0')) {
        *(uint *)(lVar3 + 0x60) = uVar1 + 1;
        if ((1 < uVar1 + 1) || (*(char *)(lVar3 + 100) == '\0')) {
          FUN_145355090(lVar3);
          return (CAkRegisteredObj *)*plVar4;
        }
      }
      else {
        *(uint *)(lVar3 + 0x60) = uVar1 + 1;
      }
      return (CAkRegisteredObj *)*plVar4;
    }
  }
  return (CAkRegisteredObj *)0x0;
}



// FUNCTION 1450ad2a0 FUN_1450ad2a0 body=174 status=ok
// SIG undefined FUN_1450ad2a0(void)

void FUN_1450ad2a0(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uStackX_c;
  
  iVar1 = *(int *)(param_2 + 0x20);
  cVar4 = -(*(char *)(param_2 + 0xd4) >> 7);
  puVar2 = (undefined8 *)*param_1;
  uStackX_c = CONCAT31(uStackX_c._1_3_,cVar4);
  do {
    if (puVar2 == (undefined8 *)0x0) {
LAB_1450ad2ee:
      plVar3 = (longlong *)param_1[2];
      if (plVar3 == (longlong *)0x0) {
        plVar3 = AK::MemoryMgr::Malloc(0,0x10);
        if (plVar3 == (longlong *)0x0) {
          return;
        }
        *plVar3 = param_1[2];
        param_1[2] = (longlong)plVar3;
      }
      if ((undefined8 *)param_1[1] == (undefined8 *)0x0) {
        *param_1 = (longlong)plVar3;
      }
      else {
        *(undefined8 *)param_1[1] = plVar3;
      }
      plVar3 = (longlong *)param_1[2];
      param_1[1] = (longlong)plVar3;
      param_1[2] = *plVar3;
      *plVar3 = 0;
      *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
      *(ulonglong *)(param_1[1] + 8) = CONCAT44(uStackX_c,iVar1);
      return;
    }
    if ((iVar1 == *(int *)(puVar2 + 1)) && (cVar4 == *(char *)((longlong)puVar2 + 0xc))) {
      if (puVar2 != (undefined8 *)&DAT_fffffffffffffff8) {
        return;
      }
      goto LAB_1450ad2ee;
    }
    puVar2 = (undefined8 *)*puVar2;
  } while( true );
}



// FUNCTION 1450ad350 FUN_1450ad350 body=140 status=ok
// SIG undefined FUN_1450ad350(void)

void FUN_1450ad350(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  
  lVar3 = DAT_14c791418;
  do {
    if (lVar3 == 0) {
      return;
    }
    lVar4 = *(longlong *)(*(longlong *)(lVar3 + 8) + 0x10);
    if (lVar4 == 0) {
      lVar4 = FUN_144d4eb60();
    }
    puVar5 = *(ulonglong **)(param_2 + 0x10);
    puVar6 = *(ulonglong **)(lVar4 + 0xd0);
    puVar1 = puVar5 + *(uint *)(param_2 + 0x18);
    if (puVar5 != puVar1) {
      puVar2 = puVar6 + *(uint *)(lVar4 + 0xd8);
      do {
        if (puVar6 == puVar2) break;
        if (*puVar5 == *puVar6) {
          *(uint *)(lVar3 + 0x7c) = *(uint *)(lVar3 + 0x7c) | 1;
          break;
        }
        if (*puVar5 < *puVar6) {
          puVar5 = puVar5 + 1;
        }
        else {
          puVar6 = puVar6 + 1;
        }
      } while (puVar5 != puVar1);
    }
    lVar3 = *(longlong *)(lVar3 + 0x10);
  } while( true );
}



// FUNCTION 1450ad3e0 FUN_1450ad3e0 body=449 status=ok
// SIG undefined FUN_1450ad3e0(void)

void FUN_1450ad3e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uStack_40;
  longlong *local_38;
  longlong *plStack_30;
  longlong *plVar8;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x30) != 0) {
    plVar10 = (longlong *)0x0;
    plVar6 = *(longlong **)*plVar1;
    plVar8 = plVar10;
    while (plVar11 = plVar10, plVar6 == (longlong *)0x0) {
      uVar7 = (int)plVar8 + 1;
      plVar8 = (longlong *)(ulonglong)uVar7;
      if (*(uint *)(param_1 + 0x30) <= uVar7) {
        return;
      }
      plVar6 = (longlong *)((undefined8 *)*plVar1)[(longlong)plVar8];
    }
LAB_1450ad450:
    do {
      puVar3 = (undefined8 *)plVar6[2];
      if ((plVar6[1] == -2) || ((param_2 != 0 && (lVar5 = FUN_1450ab680(), lVar5 != 0)))) {
        local_38 = (longlong *)*plVar6;
        plStack_30 = plVar6;
        if (local_38 == (longlong *)0x0) {
          do {
            uVar7 = (int)plVar8 + 1;
            plVar8 = (longlong *)(ulonglong)uVar7;
            if (*(uint *)(param_1 + 0x30) <= uVar7) goto LAB_1450ad543;
            local_38 = *(longlong **)(*plVar1 + (longlong)plVar8 * 8);
            plVar6 = local_38;
            plStack_30 = plVar10;
            plVar11 = plVar10;
          } while (local_38 == (longlong *)0x0);
          goto LAB_1450ad450;
        }
      }
      else {
        piVar2 = (int *)(puVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        *(undefined1 *)((longlong)puVar3 + 100) = 0;
        if (*piVar2 == 0) {
          FUN_1453550a0();
        }
        if (*(int *)(puVar3 + 0xc) == 0) {
          (**(code **)*puVar3)(puVar3,0);
          AK::MemoryMgr::Free(4,puVar3);
        }
        plVar4 = (longlong *)*plVar6;
        uStack_40 = (uint)plVar8;
        local_38 = plVar4;
        plStack_30 = plVar11;
        if (plVar4 == (longlong *)0x0) {
          plVar9 = plVar8;
          do {
            uStack_40 = (int)plVar9 + 1;
            plVar9 = (longlong *)(ulonglong)uStack_40;
            if (*(uint *)(param_1 + 0x30) <= uStack_40) break;
            plStack_30 = (longlong *)0x0;
            local_38 = *(longlong **)(*plVar1 + (longlong)plVar9 * 8);
          } while (local_38 == (longlong *)0x0);
        }
        if (plVar11 == (longlong *)0x0) {
          *(longlong **)(*plVar1 + (longlong)plVar8 * 8) = plVar4;
        }
        else {
          *plVar11 = (longlong)plVar4;
        }
        AK::MemoryMgr::Free(0,plVar6);
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
        plVar8 = (longlong *)(ulonglong)uStack_40;
      }
LAB_1450ad543:
      plVar6 = local_38;
      plVar11 = plStack_30;
    } while (local_38 != (longlong *)0x0);
  }
  return;
}



// FUNCTION 1450ad5b0 FUN_1450ad5b0 body=231 status=ok
// SIG undefined FUN_1450ad5b0(void)

undefined8 FUN_1450ad5b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  if (*(uint *)(param_1 + 0x30) != 0) {
    uVar5 = 0;
    plVar6 = (longlong *)**(undefined8 **)(param_1 + 0x28);
    while (plVar6 == (longlong *)0x0) {
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      if (*(uint *)(param_1 + 0x30) <= uVar4) goto joined_r0x0001450ad5fb;
      plVar6 = (longlong *)(*(undefined8 **)(param_1 + 0x28))[uVar5];
    }
    do {
      while( true ) {
        if ((1 < *(uint *)(plVar6[2] + 0x60)) || (*(char *)(plVar6[2] + 100) == '\0')) {
          uVar4 = *(uint *)(param_2 + 1);
          lVar2 = plVar6[1];
          if ((*(uint *)((longlong)param_2 + 0xc) <= uVar4) &&
             ((cVar3 = FUN_1450adef0(param_2), cVar3 == '\0' ||
              (*(uint *)((longlong)param_2 + 0xc) <= uVar4)))) {
            return 0x34;
          }
          uVar4 = *(uint *)(param_2 + 1);
          *(uint *)(param_2 + 1) = uVar4 + 1;
          plVar1 = (longlong *)(*param_2 + (ulonglong)uVar4 * 8);
          if (plVar1 == (longlong *)0x0) {
            return 0x34;
          }
          *plVar1 = lVar2;
        }
        plVar6 = (longlong *)*plVar6;
        if (plVar6 != (longlong *)0x0) break;
        do {
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
          if (*(uint *)(param_1 + 0x30) <= uVar4) goto joined_r0x0001450ad5fb;
          plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x28) + uVar5 * 8);
        } while (plVar6 == (longlong *)0x0);
      }
joined_r0x0001450ad5fb:
    } while (plVar6 != (longlong *)0x0);
  }
  return 1;
}



// FUNCTION 1450ad6a0 FUN_1450ad6a0 body=81 status=ok
// SIG undefined FUN_1450ad6a0(void)

ulonglong FUN_1450ad6a0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  if (*(uint *)(param_1 + 0x30) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)
              (*(longlong *)(param_1 + 0x28) +
              ((param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30)) * 8);
    if (plVar1 == (longlong *)0x0) goto LAB_1450ad6ee;
    do {
      if (plVar1[1] == param_2) break;
      plVar1 = (longlong *)*plVar1;
    } while (plVar1 != (longlong *)0x0);
  }
  if ((plVar1 != (longlong *)0x0) &&
     ((1 < *(uint *)(plVar1[2] + 0x60) || (*(char *)(plVar1[2] + 100) == '\0')))) {
    return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
  }
LAB_1450ad6ee:
  return (ulonglong)plVar1 & 0xffffffffffffff00;
}



// FUNCTION 1450ad700 FUN_1450ad700 body=177 status=ok
// SIG undefined FUN_1450ad700(void)

void FUN_1450ad700(void)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  for (lVar3 = DAT_14c7913d0; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x10)) {
    if ((*(longlong *)(lVar3 + 8) != 0) && (*(longlong *)(*(longlong *)(lVar3 + 8) + 8) != 0)) {
      FUN_1450d2d80();
    }
  }
  if (DAT_14c79c2e0 != 0) {
    uVar2 = 0;
    lVar3 = *DAT_14c79c2d8;
    while (lVar3 == 0) {
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      if (DAT_14c79c2e0 <= uVar1) goto joined_r0x0001450ad766;
      lVar3 = DAT_14c79c2d8[uVar2];
    }
    do {
      while( true ) {
        FUN_1450d2d80(lVar3);
        lVar3 = *(longlong *)(lVar3 + 0x70);
        if (lVar3 != 0) break;
        do {
          uVar1 = (int)uVar2 + 1;
          uVar2 = (ulonglong)uVar1;
          if (DAT_14c79c2e0 <= uVar1) goto joined_r0x0001450ad766;
          lVar3 = DAT_14c79c2d8[uVar2];
        } while (lVar3 == 0);
      }
joined_r0x0001450ad766:
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1450ad7c0 FUN_1450ad7c0 body=138 status=ok
// SIG undefined FUN_1450ad7c0(void)

void FUN_1450ad7c0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  
  puVar2 = *(ulonglong **)(param_2 + 0x10);
  if (puVar2 != puVar2 + *(uint *)(param_2 + 0x18)) {
    do {
      if (*(uint *)(param_1 + 0x30) != 0) {
        for (puVar1 = *(undefined8 **)
                       (*(longlong *)(param_1 + 0x28) +
                       ((*puVar2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 0x30)) * 8);
            puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
          if (puVar1[1] == *puVar2) {
            puVar1 = puVar1 + 2;
            goto LAB_1450ad813;
          }
        }
        puVar1 = (undefined8 *)0x0;
LAB_1450ad813:
        if (puVar1 != (undefined8 *)0x0) {
          FUN_1450adcc0(*puVar1);
        }
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != (ulonglong *)
                       (*(longlong *)(param_2 + 0x10) + (ulonglong)*(uint *)(param_2 + 0x18) * 8));
  }
  return;
}



// FUNCTION 1450ad850 FUN_1450ad850 body=378 status=ok
// SIG undefined FUN_1450ad850(void)

undefined8 FUN_1450ad850(longlong *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  
  uVar9 = 0;
  puVar12 = &DAT_149c268e0;
  do {
    uVar1 = *puVar12;
    uVar10 = (ulonglong)uVar1;
    if (param_2 < uVar1) {
      if (uVar1 == 0) {
        return 2;
      }
      uVar9 = *(uint *)(param_1 + 1);
      uVar14 = (ulonglong)uVar9;
      puVar3 = (undefined8 *)*param_1;
      uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
      param_1[1] = 0;
      *param_1 = 0;
      pvVar7 = AK::MemoryMgr::Malloc(0,uVar10 * 8);
      pvVar4 = (void *)*param_1;
      if (pvVar7 == (void *)0x0) {
        if (pvVar4 != (void *)0x0) {
          *(undefined4 *)(param_1 + 1) = 0;
          AK::MemoryMgr::Free(0,pvVar4);
        }
        *param_1 = (longlong)puVar3;
        uVar8 = 2;
        *(uint *)(param_1 + 1) = uVar9;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
      }
      else {
        if ((pvVar4 != (void *)0x0) && (pvVar4 != pvVar7)) {
          AK::MemoryMgr::Free(0,pvVar4);
        }
        *param_1 = (longlong)pvVar7;
        *(uint *)((longlong)param_1 + 0xc) = uVar1;
        uVar11 = uVar10;
        do {
          uVar1 = *(uint *)(param_1 + 1);
          if (uVar1 < uVar11) {
            *(uint *)(param_1 + 1) = uVar1 + 1;
            puVar13 = (undefined8 *)(*param_1 + (ulonglong)uVar1 * 8);
            if (puVar13 != (undefined8 *)0x0) {
              *puVar13 = 0;
              uVar11 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
            }
          }
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        puVar13 = puVar3;
        if (uVar9 != 0) {
          do {
            puVar6 = (undefined8 *)*puVar13;
            while (puVar6 != (undefined8 *)0x0) {
              uVar9 = *(uint *)(param_1 + 1);
              puVar5 = (undefined8 *)*puVar6;
              *puVar6 = *(undefined8 *)
                         (*param_1 + ((ulonglong)*(uint *)(puVar6 + 1) % (ulonglong)uVar9) * 8);
              *(undefined8 **)(*param_1 + ((ulonglong)*(uint *)(puVar6 + 1) % (ulonglong)uVar9) * 8)
                   = puVar6;
              puVar6 = puVar5;
            }
            uVar14 = uVar14 - 1;
            puVar13 = puVar13 + 1;
          } while (uVar14 != 0);
        }
        if (puVar3 != (undefined8 *)0x0) {
          AK::MemoryMgr::Free(0,puVar3);
        }
        uVar8 = 1;
      }
      return uVar8;
    }
    uVar9 = uVar9 + 1;
    puVar12 = puVar12 + 1;
  } while (uVar9 < 0x1b);
  return 2;
}



// FUNCTION 1450ad9d0 FUN_1450ad9d0 body=416 status=ok
// SIG undefined FUN_1450ad9d0(void)

undefined8 FUN_1450ad9d0(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong *plVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  void *pvVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint *puVar15;
  longlong *plVar16;
  ulonglong uVar17;
  
  uVar12 = 0;
  puVar15 = &DAT_149c268e0;
  do {
    uVar3 = *puVar15;
    uVar13 = (ulonglong)uVar3;
    if (param_2 < uVar3) {
      if (uVar3 == 0) {
        return 2;
      }
      uVar4 = *(undefined4 *)((longlong)param_1 + 0xc);
      plVar6 = (longlong *)*param_1;
      uVar12 = *(uint *)(param_1 + 1);
      uVar17 = (ulonglong)uVar12;
      param_1[1] = 0;
      *param_1 = 0;
      pvVar10 = AK::MemoryMgr::Malloc(0,uVar13 * 8);
      pvVar7 = (void *)*param_1;
      if (pvVar10 == (void *)0x0) {
        if (pvVar7 != (void *)0x0) {
          *(undefined4 *)(param_1 + 1) = 0;
          AK::MemoryMgr::Free(0,pvVar7);
        }
        *param_1 = (longlong)plVar6;
        uVar11 = 2;
        *(uint *)(param_1 + 1) = uVar12;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
      }
      else {
        if ((pvVar7 != (void *)0x0) && (pvVar7 != pvVar10)) {
          AK::MemoryMgr::Free(0,pvVar7);
        }
        *param_1 = (longlong)pvVar10;
        *(uint *)((longlong)param_1 + 0xc) = uVar3;
        uVar14 = uVar13;
        do {
          uVar5 = *(uint *)(param_1 + 1);
          if (uVar5 < (uint)uVar13) {
            *(uint *)(param_1 + 1) = uVar5 + 1;
            puVar1 = (undefined8 *)(*param_1 + (ulonglong)uVar5 * 8);
            if (puVar1 != (undefined8 *)0x0) {
              *puVar1 = 0;
              uVar13 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
            }
          }
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
        plVar16 = plVar6;
        if (uVar12 != 0) {
          do {
            lVar9 = *plVar16;
            while (lVar9 != 0) {
              lVar8 = *(longlong *)(lVar9 + 0x70);
              uVar12 = ((uint)((ulonglong)lVar9 >> 0x10) & 0xffff ^ (uint)lVar9) * -0x7a143595;
              uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
              lVar2 = ((ulonglong)(uVar12 >> 0x10 ^ uVar12) % (ulonglong)uVar3) * 8;
              *(undefined8 *)(lVar9 + 0x70) = *(undefined8 *)(lVar2 + *param_1);
              *(longlong *)(lVar2 + *param_1) = lVar9;
              lVar9 = lVar8;
            }
            uVar17 = uVar17 - 1;
            plVar16 = plVar16 + 1;
          } while (uVar17 != 0);
        }
        if (plVar6 != (longlong *)0x0) {
          AK::MemoryMgr::Free(0,plVar6);
        }
        uVar11 = 1;
      }
      return uVar11;
    }
    uVar12 = uVar12 + 1;
    puVar15 = puVar15 + 1;
  } while (uVar12 < 0x1b);
  return 2;
}



// FUNCTION 1450adb70 FUN_1450adb70 body=170 status=ok
// SIG undefined FUN_1450adb70(void)

undefined8 FUN_1450adb70(longlong *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  __uint64 _Var3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = *(int *)((longlong)param_1 + 0xc) + param_2;
  uVar1 = *(uint *)(param_1 + 1);
  _Var3 = (ulonglong)uVar5 << 3;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar2 = AK::MemoryMgr::Malloc(0,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar2)) {
      uVar4 = 0;
      if ((ulonglong)uVar1 != 0) {
        do {
          *(undefined8 *)((longlong)pvVar2 + uVar4 * 8) = *(undefined8 *)(*param_1 + uVar4 * 8);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar2 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar2;
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  return 1;
}



// FUNCTION 1450adc20 FUN_1450adc20 body=147 status=ok
// SIG undefined FUN_1450adc20(void)

longlong * FUN_1450adc20(longlong param_1)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 == (longlong *)0x0) {
    pvVar2 = AK::MemoryMgr::Malloc(4,0x80);
    if (pvVar2 == (void *)0x0) {
      return (longlong *)0x0;
    }
    plVar3 = (longlong *)FUN_1450d2ae0(pvVar2);
    if (plVar3 != (longlong *)0x0) {
      *(longlong **)(param_1 + 8) = plVar3;
      plVar3[1] = param_1;
      iVar1 = (**(code **)(*plVar3 + 8))(plVar3,*(undefined8 *)(param_1 + 0x58));
      if (iVar1 == 1) {
        return plVar3;
      }
      (**(code **)*plVar3)(plVar3,0);
      AK::MemoryMgr::Free(4,plVar3);
      *(undefined8 *)(param_1 + 8) = 0;
    }
    plVar3 = (longlong *)0x0;
  }
  return plVar3;
}



// FUNCTION 1450adcc0 FUN_1450adcc0 body=147 status=ok
// SIG undefined FUN_1450adcc0(void)

longlong * FUN_1450adcc0(longlong param_1)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    pvVar2 = AK::MemoryMgr::Malloc(4,0xa0);
    if (pvVar2 == (void *)0x0) {
      return (longlong *)0x0;
    }
    plVar3 = (longlong *)FUN_1450775f0(pvVar2);
    if (plVar3 != (longlong *)0x0) {
      *(longlong **)(param_1 + 0x20) = plVar3;
      plVar3[1] = param_1;
      iVar1 = (**(code **)(*plVar3 + 8))(plVar3,*(undefined8 *)(param_1 + 0x58));
      if (iVar1 == 1) {
        return plVar3;
      }
      (**(code **)*plVar3)(plVar3,0);
      AK::MemoryMgr::Free(4,plVar3);
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    plVar3 = (longlong *)0x0;
  }
  return plVar3;
}



// FUNCTION 1450add60 FUN_1450add60 body=147 status=ok
// SIG undefined FUN_1450add60(void)

longlong * FUN_1450add60(longlong param_1)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
    pvVar2 = AK::MemoryMgr::Malloc(4,0xf0);
    if (pvVar2 == (void *)0x0) {
      return (longlong *)0x0;
    }
    plVar3 = (longlong *)FUN_1450ab720(pvVar2);
    if (plVar3 != (longlong *)0x0) {
      *(longlong **)(param_1 + 0x10) = plVar3;
      plVar3[1] = param_1;
      iVar1 = (**(code **)(*plVar3 + 8))(plVar3,*(undefined8 *)(param_1 + 0x58));
      if (iVar1 == 1) {
        return plVar3;
      }
      (**(code **)*plVar3)(plVar3,0);
      AK::MemoryMgr::Free(4,plVar3);
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    plVar3 = (longlong *)0x0;
  }
  return plVar3;
}



// FUNCTION 1450ade00 FUN_1450ade00 body=237 status=ok
// SIG undefined FUN_1450ade00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1450ade00(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x30);
  if (plVar4 == (longlong *)0x0) {
    plVar3 = AK::MemoryMgr::Malloc(4,0x30);
    plVar4 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = 0;
      *plVar3 = (longlong)&PTR_FUN_149c26958;
      plVar3[3] = (longlong)DAT_14c7913e0;
      plVar3[2] = 0;
      plVar1 = plVar3;
      if (DAT_14c7913e8 != (longlong *)0x0) {
        DAT_14c7913e0[2] = (longlong)plVar3;
        plVar1 = DAT_14c7913e8;
      }
      DAT_14c7913e8 = plVar1;
      _DAT_14c7913d8 = _DAT_14c7913d8 + 1;
      DAT_14c7913e0 = plVar3;
      *plVar3 = (longlong)&PTR_FUN_149c26968;
      plVar3[4] = 0;
      plVar3[5] = 0;
      *(longlong **)(param_1 + 0x30) = plVar3;
      plVar3[1] = param_1;
      iVar2 = (**(code **)(*plVar3 + 8))(plVar3,*(undefined8 *)(param_1 + 0x58));
      if (iVar2 == 1) {
        return plVar3;
      }
      (**(code **)*plVar3)(plVar3,0);
      AK::MemoryMgr::Free(4,plVar3);
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
  }
  return plVar4;
}



// FUNCTION 1450adef0 FUN_1450adef0 body=186 status=ok
// SIG undefined FUN_1450adef0(void)

undefined8 FUN_1450adef0(longlong *param_1)

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
      goto LAB_1450adf8d;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_1450adf8d:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450adfb0 FUN_1450adfb0 body=52 status=ok
// SIG undefined FUN_1450adfb0(void)

undefined8 FUN_1450adfb0(undefined8 param_1,ulonglong param_2)

{
  FUN_145374b40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1450adff0 FUN_1450adff0 body=77 status=ok
// SIG undefined FUN_1450adff0(void)

undefined4 * FUN_1450adff0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_1 + 4) != 0) {
    FUN_144d4a460();
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  piVar1 = *(int **)(param_2 + 4);
  *(int **)(param_1 + 4) = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  return param_1;
}



// FUNCTION 1450ae040 FUN_1450ae040 body=100 status=ok
// SIG undefined FUN_1450ae040(void)

void FUN_1450ae040(longlong *param_1,uint param_2)

{
  void *_Dst;
  
  _Dst = (void *)(*param_1 + (ulonglong)param_2 * 0x18);
  if (*(longlong *)(*param_1 + 0x10 + (ulonglong)param_2 * 0x18) != 0) {
    FUN_144d4a460();
  }
  if (param_2 + 1 < *(uint *)(param_1 + 1)) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),
            (ulonglong)((*(uint *)(param_1 + 1) - param_2) * 0x18 - 0x18));
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  return;
}



// FUNCTION 1450ae0b0 FUN_1450ae0b0 body=204 status=ok
// SIG undefined FUN_1450ae0b0(void)

undefined8 * FUN_1450ae0b0(undefined4 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(2,0xc0);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_1453734e0(puVar1);
    *puVar1 = &PTR_FUN_149c269a0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 5));
    puVar1[0xe] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x74) = param_1;
    *(undefined4 *)(puVar1 + 10) = 0;
    puVar1[0xb] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    *(undefined1 *)(puVar1 + 0xf) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x7c) = param_2;
    puVar1[0x10] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x11] = 0;
    puVar1[0x14] = 0;
  }
  return puVar1;
}



// FUNCTION 1450ae190 FUN_1450ae190 body=53 status=ok
// SIG undefined FUN_1450ae190(void)

void FUN_1450ae190(longlong param_1,longlong param_2)

{
  uint uVar1;
  
  *(longlong *)(param_1 + 0x58) = param_2;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0x60);
    if ((uVar1 < 2) && (*(char *)(param_2 + 100) != '\0')) {
      *(uint *)(param_2 + 0x60) = uVar1 + 1;
      if ((1 < uVar1 + 1) || (*(char *)(param_2 + 100) == '\0')) {
        FUN_145355090(param_2);
        return;
      }
    }
    else {
      *(uint *)(param_2 + 0x60) = uVar1 + 1;
    }
  }
  return;
}



// FUNCTION 1450ae1d0 FUN_1450ae1d0 body=177 status=ok
// SIG undefined FUN_1450ae1d0(void)

undefined4 FUN_1450ae1d0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_144d4a460();
  }
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0xa0);
  piVar1 = *(int **)(param_1 + 0xa8);
  *(int **)(param_1 + 0x90) = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar2 = FUN_1450af670(param_1,param_2,param_3);
  piVar1 = *(int **)(param_1 + 0xa8);
  if (*param_4 != 0) {
    FUN_144d4a460();
  }
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  *param_4 = (longlong)piVar1;
  return uVar2;
}


