// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14281d16a FUN_14281d16a body=3263 status=ok
// SIG undefined FUN_14281d16a(void)

undefined4 *
FUN_14281d16a(undefined4 *param_1,longlong param_2,longlong *param_3,wchar_t *param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  longlong *plVar8;
  size_t sVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  undefined2 *puVar13;
  ulonglong uVar14;
  bool bVar16;
  undefined1 auStack_848 [32];
  undefined8 *local_828;
  undefined4 *local_818;
  undefined1 local_810 [4];
  undefined1 local_80c [4];
  longlong *local_808 [2];
  longlong *local_7f8 [2];
  longlong local_7e8;
  ulonglong uStack_7e0;
  longlong *local_7d8;
  undefined4 local_7d0;
  wchar_t *local_7c8;
  undefined4 local_7c0;
  longlong *local_7b8;
  undefined4 local_7b0;
  undefined4 local_790;
  char local_78c;
  byte local_778;
  undefined4 local_768;
  undefined1 local_764;
  undefined8 local_760;
  undefined4 uStack_758;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined8 uStack_74c;
  undefined8 local_740;
  undefined4 local_738;
  undefined1 local_730 [768];
  undefined8 local_430;
  undefined8 local_428;
  undefined1 local_420 [256];
  undefined8 local_320;
  undefined8 local_318;
  longlong local_310;
  longlong *local_308;
  longlong *local_300;
  uint local_2f8;
  wchar_t *local_2f0;
  undefined8 local_2e8;
  longlong *plStack_2e0;
  uint local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  longlong local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  char local_2a0;
  longlong local_298;
  longlong local_290;
  wchar_t local_288 [8];
  undefined8 local_278;
  longlong lStack_270;
  longlong *local_268;
  undefined3 uStack_260;
  undefined5 uStack_25d;
  undefined4 local_258;
  undefined4 local_254;
  undefined3 uStack_250;
  undefined2 local_24d;
  undefined1 local_24b;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_21c;
  undefined4 local_214;
  undefined8 local_208;
  undefined4 local_200;
  undefined1 local_1f8;
  int local_1f4;
  undefined1 local_1f0;
  wchar_t *local_1e8;
  wchar_t **local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0;
  undefined7 uStack_1cf;
  undefined1 uStack_1c8;
  undefined8 uStack_1c7;
  undefined4 local_1bc;
  undefined8 local_1b0;
  uint local_1a8;
  longlong local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  longlong local_188;
  ulonglong uStack_180;
  longlong local_178;
  ulonglong uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  longlong local_128;
  undefined4 local_120;
  longlong local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined7 uVar15;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_848;
  local_764 = 0;
  local_740 = 0;
  local_738 = 0;
  local_430 = 0;
  local_428 = 0x400000000;
  local_760 = 0;
  uStack_758 = 0;
  uStack_754 = 0;
  uStack_750 = 0;
  uStack_74c = 0;
  local_320 = 0;
  local_318 = 0x400000000;
  local_300 = (longlong *)0x0;
  local_2f8 = local_2f8 & 0xffffff00;
  local_2e8 = *param_5;
  plStack_2e0 = (longlong *)param_5[1];
  local_2d8 = *(uint *)(param_5 + 2);
  uStack_2d4 = *(undefined4 *)((longlong)param_5 + 0x14);
  uStack_2d0 = *(undefined4 *)(param_5 + 3);
  uStack_2cc = *(undefined4 *)((longlong)param_5 + 0x1c);
  local_2c8 = *(undefined4 *)(param_5 + 4);
  uStack_2c4 = *(undefined4 *)((longlong)param_5 + 0x24);
  uStack_2c0 = *(undefined4 *)(param_5 + 5);
  uStack_2bc = *(undefined4 *)((longlong)param_5 + 0x2c);
  local_2b8 = param_5[6];
  local_2a0 = *(char *)(param_5 + 9);
  if (local_2a0 == '\x01') {
    local_2b0 = param_5[7];
    uStack_2a8 = param_5[8];
  }
  local_298 = param_5[10];
  if (param_5[6] == 0) {
    local_290 = 0;
  }
  else {
    local_290 = *(longlong *)(param_5[6] + 8);
  }
  local_1e8 = local_288;
  local_288[0] = L'\0';
  local_288[1] = L'\0';
  local_288[2] = L'\0';
  local_288[3] = L'\0';
  local_288[4] = L'\0';
  local_288[5] = L'\0';
  local_288[6] = L'\0';
  local_288[7] = L'\0';
  local_278 = 0;
  lStack_270 = 0;
  local_268 = (longlong *)0x0;
  uStack_260 = 0;
  uStack_25d = 0;
  local_258 = 0;
  local_254 = 0;
  uStack_250 = 0;
  local_24d = 0x101;
  local_24b = 0;
  local_228 = 0;
  local_220 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_21c = 0xffffffff00000080;
  local_214 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_1f4 = 0;
  local_1f0 = 0;
  local_1e0 = &local_1e8;
  uStack_1c8 = 0;
  uStack_1c7 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  uStack_1cf = 0;
  local_310 = param_2;
  local_308 = param_3;
  local_2f0 = param_4;
  if (DAT_14c962c00 == '\0') {
    DAT_14c962c00 = '\x01';
    local_828 = &DAT_14c872ce8;
    FUN_14052bb08(DAT_14c872ce0,L"Core.System",L"CanSkipEditorReferencedPackagesWhenCooking",
                  &local_7c8);
  }
  local_1b0 = 0;
  local_1a8 = 0x300;
  if (plStack_2e0 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    lVar11 = *plStack_2e0;
    plVar8 = plStack_2e0;
    if (lVar11 != 0) {
      lVar1 = lVar11 + 8;
      bVar3 = (**(code **)(*(longlong *)(lVar11 + 8) + 0x88))(lVar1);
      local_818 = param_1;
      cVar5 = (**(code **)(*(longlong *)(lVar11 + 8) + 0xb0))(lVar1);
      cVar4 = (**(code **)(*(longlong *)(lVar11 + 8) + 0x98))(lVar1);
      uVar12 = 0x200;
      if (cVar4 != '\0') {
        uVar12 = 0x220;
      }
      local_1a8 = 0x240;
      if (cVar5 == '\0') {
        local_1a8 = uVar12;
      }
      local_1a8 = local_1a8 | (uint)(bVar3 ^ 1) << 8;
      plVar8 = plStack_2e0;
      param_1 = local_818;
    }
  }
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 3;
  local_148 = 0;
  local_140 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_13c = 0xffffffff00000080;
  local_134 = 0;
  local_128 = 0;
  local_120 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_1bc = *(undefined4 *)(local_310 + 0x2c);
  uVar12 = local_2d8 | 0x10000000;
  if (local_2d8 == 0) {
    uVar12 = local_2d8;
  }
  if (plVar8 != (longlong *)0x0) {
    uVar12 = local_2d8;
  }
  if (local_290 != 0) {
    uStack_1c7._0_7_ = CONCAT16(*(undefined1 *)(local_2b8 + 0x11),(undefined6)uStack_1c7);
  }
  local_2d8 = uVar12;
  if (local_308 == (longlong *)0x0) {
    local_308 = (longlong *)FUN_1468c516a(param_2,0);
  }
  local_7c0 = 0;
  if (param_4 != (wchar_t *)0x0) {
    sVar9 = wcslen(param_4);
    local_7c0 = (int)sVar9;
  }
  local_7c8 = param_4;
  FUN_1427b94de(&local_7d8,&local_7c8,&local_7e8);
  local_2f8 = local_7d0;
  uVar12 = local_2f8;
  local_300 = local_7d8;
  local_2f8._0_1_ = (char)local_7d0;
  bVar16 = (char)local_2f8 == '\0';
  local_2f8 = uVar12;
  if (bVar16) {
    local_2f8 = CONCAT31((int3)((uint)local_7d0 >> 8),6);
  }
  iVar7 = 0;
  if (plStack_2e0 == (longlong *)0x0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *plStack_2e0;
  }
  uStack_1c8 = FUN_14688a693(lVar11);
  FUN_140056680(&local_7c8,local_2f0);
  puVar10 = (undefined8 *)FUN_1468722da();
  if (*(int *)(puVar10 + 1) == 0) {
    puVar13 = &DAT_149dfb77a;
  }
  else {
    puVar13 = (undefined2 *)*puVar10;
    iVar7 = *(int *)(puVar10 + 1) + -1;
  }
  cVar5 = FUN_144a38768(&local_7c8,puVar13,iVar7,1);
  if (cVar5 == '\0') {
    FUN_140056680(&local_7d8,local_2f0);
    puVar10 = (undefined8 *)FUN_146872350();
    iVar7 = 0;
    if (*(int *)(puVar10 + 1) == 0) {
      puVar13 = &DAT_149dfb77a;
    }
    else {
      puVar13 = (undefined2 *)*puVar10;
      iVar7 = *(int *)(puVar10 + 1) + -1;
    }
    uVar6 = FUN_144a38768(&local_7d8,puVar13,iVar7,1);
    uStack_1c7 = CONCAT71(uStack_1c7._1_7_,uVar6);
    if (local_7d8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    uStack_1c7 = CONCAT71(uStack_1c7._1_7_,1);
  }
  if (local_7c8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c962c10) && (FUN_144b3d300(&DAT_14c962c10), DAT_14c962c10 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14c962c08 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"s.ProcessPrestreamingRequests",1);
    _Init_thread_footer(&DAT_14c962c10);
  }
  if (DAT_14c962c08 != (longlong *)0x0) {
    iVar7 = (**(code **)(*DAT_14c962c08 + 0xb0))();
    uStack_1c7._0_2_ = CONCAT11(0 < iVar7,(undefined1)uStack_1c7);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c962c20) && (FUN_144b3d300(&DAT_14c962c20), DAT_14c962c20 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14c962c18 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"save.FixupStandaloneFlags",1);
    _Init_thread_footer(&DAT_14c962c20);
  }
  if (DAT_14c962c18 != (longlong *)0x0) {
    iVar7 = (**(code **)(*DAT_14c962c18 + 0xb0))();
    uStack_1c7._0_3_ = CONCAT12(iVar7 != 0,(undefined2)uStack_1c7);
  }
  if (plStack_2e0 == (longlong *)0x0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *plStack_2e0;
  }
  local_828 = (undefined8 *)CONCAT44(local_828._4_4_,uStack_2d4);
  FUN_1468f010a(local_288,param_2,lVar11,&local_300);
  if (plStack_2e0 == (longlong *)0x0) {
    lVar11 = 0;
  }
  else {
    local_258 = *(undefined4 *)(plStack_2e0[1] + 100);
    local_254 = *(undefined4 *)(plStack_2e0[1] + 0x68);
    lVar11 = plStack_2e0[1];
  }
  local_1d8 = local_278;
  local_1d0 = (undefined1)lVar11;
  uStack_1cf = (undefined7)((ulonglong)lVar11 >> 8);
  if (local_298 != 0) {
    FUN_1468f1be8(&local_248);
  }
  lStack_270 = local_290;
  if (local_290 != 0) {
    local_24b = *(undefined1 *)(local_2b8 + 0x12);
  }
  FUN_1468eff42(&local_768);
  uVar2 = DAT_14c872be8;
  uVar15 = (undefined7)((ulonglong)param_2 >> 8);
  uVar14 = CONCAT71(uVar15,uStack_2d0._2_1_);
  FUN_140056680(&local_7c8,local_2f0);
  FUN_14093d9c4(&local_7d8,&local_7c8);
  if (local_7c8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_7e8 = 0;
  uStack_7e0 = 0;
  FUN_140009b9a(local_7f8,&local_7d8);
  local_7c8 = (wchar_t *)CONCAT44(local_7c8._4_4_,4);
  FUN_14023423e(&local_7b8,local_7f8);
  FUN_140056680(local_808,L"CleanFilename");
  FUN_140233eec(&local_7e8,local_808,&local_7c8);
  if (local_808[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_7b8 != (longlong *)0x0) {
    (**(code **)(*local_7b8 + 0x10))();
    local_7b8 = (longlong *)0x0;
    local_7b0 = 0;
  }
  if (local_7f8[0] != (longlong *)0x0) {
    (**(code **)(*local_7f8[0] + 0x10))();
  }
  local_7c8 = L"SavingFile";
  local_7c0 = 10;
  FUN_1446e940c(local_80c,&local_7c8);
  local_7c8 = L"Core";
  local_7c0 = 4;
  FUN_1446e940c(local_810,&local_7c8);
  local_7c8 = L"Saving file: {CleanFilename}...";
  local_7c0 = 0x1f;
  FUN_140208c1e(local_7f8,local_810,local_80c,&local_7c8);
  FUN_14023409e(&local_7c8,local_7f8,1);
  FUN_140233c04(local_808,&local_7c8,&local_7e8);
  if (local_7f8[0] != (longlong *)0x0) {
    (**(code **)(*local_7f8[0] + 0x10))();
  }
  FUN_14010f8af(local_7e8,uStack_7e0 & 0xffffffff);
  if (local_7e8 != 0) {
    FUN_1400020a8();
  }
  if (local_7d8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_828 = (undefined8 *)uVar2;
  FUN_140997f46(&local_7c8,0x41000000,local_808,uVar14 & 0xffffffff);
  FUN_140997a0e(&local_7c8);
  if (local_808[0] != (longlong *)0x0) {
    (**(code **)(*local_808[0] + 0x10))();
  }
  local_790 = 0x40400000;
  local_78c = '\x01';
  local_778 = local_778 & 0xfc | (byte)uStack_2d4 >> 1 & 1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = 0;
    *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
    DAT_14c844840[2] = -1;
    DAT_14c844840[3] = 0;
    DAT_14c844840[4] = 0;
    DAT_14c844840[5] = 0;
    if (DAT_14c844840 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  local_7d8 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_7d0 = 0;
  FUN_140997b30(&local_7c8,0x3f800000,&local_7d8);
  if (local_7d8 != (longlong *)0x0) {
    (**(code **)(*local_7d8 + 0x10))();
  }
  local_768 = 1;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  FUN_140997a5c(&local_7c8);
  if (local_78c == '\x01') {
    local_78c = '\0';
  }
  if (local_7b8 != (longlong *)0x0) {
    (**(code **)(*local_7b8 + 0x10))();
  }
  if (local_7c8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_7c8 + 0x10))();
  }
  plVar8 = local_308;
  if ((uStack_1c7._3_1_ == '\x01') && (local_308 != (longlong *)0x0)) {
    uVar6 = uStack_1c7._4_1_;
    (**(code **)(*local_308 + 0x80))(local_308,CONCAT71(uVar15,uStack_1c7._4_1_) & 0xffffffff);
    local_268 = plVar8;
    local_1f8 = uVar6;
    local_1f4 = local_1f4 + 1;
    local_7c8 = local_288;
    (**(code **)(*plVar8 + 0x78))(plVar8);
  }
  if (local_298 != 0) {
    FUN_1468f1be8(local_298,&local_248);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1468f2760(&local_b8);
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_1468f1e12(&local_108);
  FUN_140195631(local_118,uStack_110 & 0xffffffff);
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  local_120 = 0;
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  FUN_146885354(&local_168);
  FUN_1468f27ed(local_178,uStack_170 & 0xffffffff);
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  FUN_1468f281c(local_188,uStack_180 & 0xffffffff);
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  if (local_1a0 != 0) {
    FUN_1400020a8();
  }
  FUN_1468f00be(local_288);
  if (local_2a0 == '\x01') {
    local_2a0 = '\0';
  }
  FUN_1468f26e4(local_420);
  FUN_1468f2722(local_730);
  if ((local_48 ^ (ulonglong)auStack_848) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14281de2a FUN_14281de2a body=69 status=ok
// SIG undefined FUN_14281de2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14281de2a(void)

{
  _DAT_14c962b78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014281de6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c962b80,1);
  return;
}



// FUNCTION 14281de80 FUN_14281de80 body=1221 status=ok
// SIG undefined FUN_14281de80(void)

void FUN_14281de80(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_118 [32];
  wchar_t *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  wchar_t *local_e0;
  wchar_t *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  ulonglong uStack_80;
  code *local_70;
  undefined1 local_68 [8];
  code *local_60;
  undefined1 local_58 [8];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_88 = 0;
  uStack_80 = 0;
  local_f8 = (wchar_t *)&DAT_14c872bc8;
  FUN_14105aa76(DAT_14c872ce0,L"CookSettings",L"AutomaticOptionalInclusionAssetType",&local_88);
  lVar1 = local_88;
  lVar5 = (longlong)(int)uStack_80;
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    lVar8 = 0;
    do {
      puVar6 = &DAT_149dfb77a;
      if (*(int *)(lVar1 + 8 + lVar8) != 0) {
        puVar6 = *(undefined2 **)(lVar1 + lVar8);
      }
      if (DAT_14c949118 == 0) {
        local_70 = FUN_140631fbe;
        lVar2 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c949118 = lVar2;
        FUN_1446f470e(local_68,L"Class",1);
        local_c0 = &local_70;
        local_c8 = &LAB_146891e90;
        local_d0 = (code *)&LAB_146273097;
        local_e0 = L"Engine";
        local_d8 = (wchar_t *)CONCAT44(local_d8._4_4_,199);
        local_e8 = 0x20;
        local_f0 = 0x10000000;
        local_f8._0_4_ = 8;
        FUN_14574b4b2(lVar2);
        local_90 = DAT_14c951858;
        DAT_14c949118 = lVar2;
        if (DAT_14c951858 == 0) {
          local_50 = FUN_1449e2820;
          local_b0 = FUN_14081d0ea;
          local_b8 = FUN_14081d0ea;
          local_c0 = &local_50;
          local_c8 = &LAB_1468c5283;
          local_d0 = FUN_142809da0;
          local_d8 = L"Engine";
          local_e0 = (wchar_t *)0x400000000;
          local_e8 = CONCAT44(local_e8._4_4_,0x10000000);
          local_f0 = 8;
          local_f8._0_4_ = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar2 = DAT_14c949118;
        local_90 = DAT_14c951858;
        if (DAT_14c948f88 == 0) {
          local_60 = (code *)&DAT_1427db2a2;
          DAT_14c948f88 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          local_a0 = DAT_14c948f88;
          FUN_1446f470e(local_58,L"Struct",1);
          local_c0 = &local_60;
          local_c8 = &LAB_146891313;
          local_d0 = FUN_146272f63;
          local_e0 = L"Engine";
          local_d8 = (wchar_t *)CONCAT44(local_d8._4_4_,199);
          local_e8 = 8;
          local_f0 = 0x10000020;
          local_f8._0_4_ = 8;
          FUN_14574b4b2(local_a0);
          DAT_14c948f88 = local_a0;
          local_98 = DAT_14c927740;
          if (DAT_14c927740 == 0) {
            local_50 = FUN_1449e2820;
            local_b0 = FUN_14081d0ea;
            local_b8 = FUN_14081d0ea;
            local_c0 = &local_50;
            local_c8 = &LAB_146856450;
            local_d0 = FUN_1427b121c;
            local_d8 = L"Engine";
            local_e0 = (wchar_t *)0x0;
            local_e8 = CONCAT44(local_e8._4_4_,0x10000021);
            local_f0 = 8;
            local_f8._0_4_ = 0x28;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
            local_a0 = DAT_14c948f88;
          }
          DAT_14c948f88 = local_a0;
          local_98 = DAT_14c927740;
          uVar3 = FUN_1400163b0();
          local_f8 = L"Struct";
          FUN_14574b446(uVar3,local_a0,local_98,L"/Script/CoreUObject");
        }
        local_f8 = L"Class";
        FUN_14574b446(DAT_14c948f88,lVar2,local_90,L"/Script/CoreUObject");
      }
      lVar2 = FUN_140277b32(DAT_14c949118,0,puVar6,1);
      if (lVar2 != 0) {
        lVar7 = (longlong)(int)DAT_14c962b98;
        DAT_14c962b98 = DAT_14c962b98 + 1;
        if (DAT_14c962b9c < DAT_14c962b98) {
          FUN_140a0062e(&DAT_14c962b90);
        }
        *(longlong *)(DAT_14c962b90 + lVar7 * 8) = lVar2;
      }
      lVar8 = lVar8 + 0x10;
    } while (lVar5 * 0x10 != lVar8);
    uVar4 = uStack_80 & 0xffffffff;
  }
  FUN_1447a1747(local_88,uVar4);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14281e376 FUN_14281e376 body=72 status=ok
// SIG undefined FUN_14281e376(void)

undefined8 FUN_14281e376(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((*(byte *)(*param_2 + 0x1e) & 0x20) == 0) {
    lVar1 = FUN_1468b4bea();
    if (lVar1 == *(longlong *)*param_1) {
      return 1;
    }
  }
  else {
    if (*(longlong *)param_1[1] != 0) {
      return 1;
    }
    *(longlong *)param_1[1] = *param_2;
    param_2 = param_2 + 1;
  }
  *(longlong *)param_1[2] = *param_2;
  return 1;
}



// FUNCTION 14281e3be FUN_14281e3be body=253 status=ok
// SIG undefined FUN_14281e3be(void)

undefined8 FUN_14281e3be(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  undefined2 *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((*(byte *)(*param_2 + 0x1e) & 0x20) != 0) || (lVar1 = FUN_1468b4bea(), lVar1 == param_1[1]))
     && (*(char *)*param_1 == '\0')) {
    *(char *)*param_1 = '\x01';
    FUN_146816218(param_2[4],5,
                  L"%s    ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
                  L"                                                                                                                                                                                                                                                               "
                  + (0xff - (longlong)(int)param_2[3]));
    lVar1 = param_2[4];
    local_30 = *(undefined8 *)(*(longlong *)(param_1[1] + 0x10) + 0x18);
    FUN_1400021e4(&local_30,&local_40);
    local_48 = local_40;
    if (local_38 == 0) {
      local_48 = &DAT_149dfb77a;
    }
    FUN_146816218(lVar1,5,L"%s    ^ This reference is preventing the old %s from being GC\'d ^",
                  L"                                                                                                                                                                                                                                                               "
                  + (0xff - (longlong)(int)param_2[3]));
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 14281e4bc FUN_14281e4bc body=1215 status=ok
// SIG undefined FUN_14281e4bc(void)

void FUN_14281e4bc(ulonglong *param_1,int *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 uVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  DWORD DVar5;
  DWORD DVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 unaff_RBX;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  bool bVar15;
  ulonglong local_2e8;
  longlong local_2e0;
  undefined1 local_2d8;
  longlong local_2d0;
  undefined8 uStack_2c8;
  undefined **local_2c0;
  undefined1 local_2b8 [80];
  longlong *local_268;
  longlong local_248;
  undefined **local_230;
  undefined8 *local_228;
  ulonglong local_220;
  char local_210;
  ulonglong *local_208;
  undefined **local_200;
  undefined ***local_1f8;
  undefined ***local_1f0;
  undefined ****local_1e8;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)local_2b8;
  iVar9 = *param_2;
  uVar1 = *(undefined1 *)((longlong)param_1 + 0x24);
  FUN_1468f161e(&local_2c0,*param_1,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  lVar13 = (longlong)iVar9 * 0x50 + *(longlong *)param_1[2];
  local_2d0 = 0;
  uStack_2c8 = 0;
  iVar10 = (int)param_1[3];
  if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar10);
  }
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else {
    FUN_14079e7a6(&local_2d0);
    iVar10 = (int)param_1[3];
  }
  uVar14 = iVar9 * iVar10;
  uVar11 = iVar10 + uVar14;
  if ((int)(uint)param_1[4] <= (int)(iVar10 + uVar14)) {
    uVar11 = (uint)param_1[4];
  }
  if ((int)uVar14 < (int)uVar11) {
    do {
      lVar12 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
      local_2e8 = *(ulonglong *)(lVar12 + (ulonglong)(uVar14 & 0xffff) * 0x18);
      if (((local_2e8 != 0) &&
          ((*(uint *)(lVar12 + (ulonglong)(uVar14 & 0xffff) * 0x18 + 8) >> 0x1c & 1) == 0)) &&
         ((*(uint *)(local_2e8 + 8) >> 0x1e & 1) == 0)) {
        plVar2 = (longlong *)param_1[1];
        if ((plVar2 == (longlong *)0x0) || ((int)plVar2[1] == *(int *)((longlong)plVar2 + 0x34))) {
LAB_14281e621:
          bVar15 = false;
        }
        else {
          uVar7 = ((uint)(local_2e8 >> 0x14) & 0xffff ^ (uint)(local_2e8 >> 4)) * -0x7a143595;
          uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
          plVar8 = plVar2 + 7;
          if ((longlong *)plVar2[8] != (longlong *)0x0) {
            plVar8 = (longlong *)plVar2[8];
          }
          iVar9 = *(int *)((longlong)plVar8 +
                          (ulonglong)((int)plVar2[9] - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
          if (iVar9 == -1) goto LAB_14281e621;
          do {
            bVar15 = *(ulonglong *)(*plVar2 + (longlong)iVar9 * 0x10) == local_2e8;
            if (bVar15) break;
            iVar9 = *(int *)((longlong)iVar9 * 0x10 + *plVar2 + 8);
          } while (iVar9 != -1);
        }
        plVar2 = (longlong *)*param_1;
        if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
          uVar7 = ((uint)(local_2e8 >> 0x14) & 0xffff ^ (uint)(local_2e8 >> 4)) * -0x7a143595;
          uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
          plVar8 = plVar2 + 7;
          if ((longlong *)plVar2[8] != (longlong *)0x0) {
            plVar8 = (longlong *)plVar2[8];
          }
          iVar9 = *(int *)((longlong)plVar8 +
                          (ulonglong)((int)plVar2[9] - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
          if (iVar9 != -1) {
            do {
              if (*(ulonglong *)(*plVar2 + (longlong)iVar9 * 0x10) == local_2e8) goto LAB_14281e736;
              iVar9 = *(int *)((longlong)iVar9 * 0x10 + *plVar2 + 8);
            } while (iVar9 != -1);
          }
        }
        if (!bVar15) {
          local_210 = '\0';
          local_200 = &PTR_FUN_149e37810;
          local_1f0 = &local_200;
          local_1e8 = &local_1f0;
          local_220 = local_2e8;
          local_1f8 = &local_2c0;
          (**(code **)(**(longlong **)(local_2e8 + 0x10) + 0x2c0))();
          uVar4 = uStack_2c8;
          if (local_210 == '\x01') {
            FUN_1457b12ce(lVar13,&local_200,&local_2e8,0);
          }
          else {
            lVar12 = (longlong)(int)uStack_2c8;
            uVar7 = (int)uStack_2c8 + 1;
            uStack_2c8 = CONCAT44(uStack_2c8._4_4_,uVar7);
            if (uStack_2c8._4_4_ < uVar7) {
              FUN_1447f76d2(&local_2d0,uVar4 & 0xffffffff);
            }
            *(ulonglong *)(local_2d0 + lVar12 * 8) = local_2e8;
          }
        }
      }
LAB_14281e736:
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar11);
  }
  local_2e8 = *param_1;
  local_2e0 = lVar13;
  local_2d8 = uVar1;
  FUN_14002fb26(&local_200);
  FUN_14079e744(&local_2d0);
  piVar3 = DAT_14c950c20;
  local_1f8 = (undefined ***)local_2d0;
  local_1f0 = (undefined ***)CONCAT44(local_1f0._4_4_,(int)uStack_2c8);
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar9 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar9 != 2)) {
    if (iVar9 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      if (DVar5 == DVar6) goto LAB_14281e81d;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(piVar3 + 4);
    while( true ) {
      if (0 < piVar3[1]) {
        (**(code **)(**(longlong **)(piVar3 + 0xe) + 0x20))
                  (*(longlong **)(piVar3 + 0xe),0xffffffff,0);
      }
      EnterCriticalSection(lpCriticalSection);
      if (piVar3[1] == 0) break;
      LeaveCriticalSection(lpCriticalSection);
    }
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
    LeaveCriticalSection(lpCriticalSection);
  }
LAB_14281e81d:
  local_208 = &local_2e8;
  FUN_14281e97c(&local_208,&local_200);
  piVar3 = DAT_14c950c20;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar9 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar9 != 2)) {
    if (iVar9 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      if (DVar5 == DVar6) goto LAB_14281e874;
    }
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
  }
LAB_14281e874:
  FUN_140ea1d7a(&local_200);
  if (local_2d0 != 0) {
    FUN_1400020a8();
  }
  local_230 = &PTR_LAB_149eb0140;
  if (local_228 != (undefined8 *)0x0) {
    (**(code **)*local_228)(local_228,1);
  }
  local_2c0 = &PTR__purecall_149e35f70;
  if (local_268 != (longlong *)0x0) {
    if (*local_268 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_268);
  }
  if (local_248 != 0) {
    if (*(longlong *)(local_248 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_248);
  }
  if ((local_50 ^ (ulonglong)local_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14281e97c FUN_14281e97c body=7869 status=ok
// SIG undefined FUN_14281e97c(void)

void FUN_14281e97c(undefined8 *param_1,ulonglong *param_2)

{
  byte bVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  code *pcVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  ulonglong *puVar12;
  uint uVar13;
  uint uVar14;
  code *pcVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong *puVar23;
  ushort *puVar24;
  ushort *puVar25;
  undefined8 *puVar26;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined8 local_140;
  wchar_t *local_138;
  code *local_130;
  undefined1 *local_128;
  code **local_120;
  code *local_118;
  code *local_110;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong *local_f0;
  ulonglong *local_e8;
  ushort *local_e0;
  ulonglong local_d8;
  ulonglong *local_d0;
  undefined8 local_c8;
  ulonglong *local_c0;
  ulonglong *local_b8;
  longlong *local_b0;
  ulonglong *local_a8;
  undefined ***local_a0;
  undefined **local_98;
  undefined8 *local_90;
  longlong *local_88;
  ulonglong *local_80;
  ulonglong local_78;
  code *local_70;
  undefined8 local_68;
  byte local_60;
  uint local_5c;
  byte local_58;
  uint local_54;
  byte local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *(undefined2 *)(param_2 + 0xf) = 0x100;
  local_b0 = (longlong *)*param_1;
  local_a0 = &local_98;
  local_90 = (undefined8 *)0x0;
  local_98 = &PTR_FUN_149ea89a0;
  *param_2 = DAT_14c948580;
  local_f0 = param_2;
  local_a8 = param_2;
  local_88 = local_b0;
  local_80 = param_2;
  if ((longlong)(int)param_2[8] == 0) {
LAB_14281ec72:
    local_e8 = (ulonglong *)local_f0[1];
    uVar21 = (ulonglong)(uint)local_f0[2];
    local_d0 = local_f0 + 3;
    while ((int)uVar21 == 0) {
LAB_14282076a:
      puVar12 = local_f0;
      if (local_e8 != (ulonglong *)local_f0[1]) {
        FUN_1427e285c(local_d0);
      }
      puVar8 = (ulonglong *)puVar12[5];
      if (puVar8 == (ulonglong *)0x0) {
        uVar21 = (puVar12[3] - puVar12[4]) - 8 >> 3;
        if (((int)uVar21 == 0) ||
           (puVar8 = (ulonglong *)FUN_141716000(local_d0), puVar8 == (ulonglong *)0x0)) {
          local_98 = &PTR_LAB_149eb0140;
          if (local_90 != (undefined8 *)0x0) {
            (**(code **)*local_90)(local_90,1);
          }
          if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          return;
        }
      }
      else {
        puVar12[5] = *puVar8;
        uVar21 = 0x1ef;
      }
      local_e8 = puVar8 + 1;
    }
    puVar12 = local_e8 + (int)uVar21;
    local_c8 = *(undefined8 *)(local_e8[1] + 0x10);
    puVar8 = local_e8;
    local_c0 = puVar12;
LAB_14281ecd3:
    local_100 = *puVar8;
    pcVar6 = *(code **)(local_100 + 0x10);
    pcVar2 = *(code **)(local_100 + 0x20);
    local_b8 = puVar8;
    if (((byte)pcVar6[0xd6] & 0x40) == 0) {
      FUN_1408a750e(pcVar6,0);
    }
    plVar4 = local_b0;
    uVar21 = *(ulonglong *)(pcVar6 + 0x1e8);
    *local_a8 = local_100;
    pcVar5 = (code *)*local_a8;
    if (pcVar5 == (code *)0x0) {
      pcVar5 = (code *)*local_a8;
    }
    if (((pcVar6 != (code *)0x0) && (pcVar5 != (code *)0x0)) &&
       ((pcVar5 != pcVar6 &&
        (plVar3 = (longlong *)*local_b0, (int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34))))) {
      uVar9 = ((uint)((ulonglong)pcVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)pcVar6 >> 4)) *
              -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      plVar11 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[8];
      }
      iVar10 = *(int *)((longlong)plVar11 +
                       (ulonglong)((int)plVar3[9] - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
      if (iVar10 != -1) {
        do {
          if (*(code **)(*plVar3 + (longlong)iVar10 * 0x10) == pcVar6) {
            local_70 = pcVar5;
            if ((*(byte *)(local_b0 + 2) & 1) == 0) goto LAB_14281ee2b;
            if (DAT_14c951858 == 0) {
              local_68 = FUN_1449e2820;
              local_110 = FUN_14081d0ea;
              local_118 = FUN_14081d0ea;
              local_120 = (code **)&local_68;
              local_128 = &LAB_1468c5283;
              local_130 = FUN_142809da0;
              local_138 = L"Engine";
              local_140 = 0x400000000;
              local_148 = 0x10000000;
              local_150 = 8;
              local_158 = 0x50;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
            }
            if ((*(int *)(*(longlong *)(pcVar6 + 0x10) + 0x38) < *(int *)(DAT_14c951858 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(pcVar6 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30))
            goto LAB_14281ee0e;
            goto LAB_14281ef01;
          }
          iVar10 = *(int *)((longlong)iVar10 * 0x10 + *plVar3 + 8);
        } while (iVar10 != -1);
      }
    }
    goto LAB_14281ef35;
  }
  puVar18 = (undefined8 *)param_2[7];
  puVar26 = puVar18 + (int)param_2[8];
LAB_14281ea3f:
  plVar4 = local_b0;
  pcVar6 = (code *)*local_a8;
  if (pcVar6 == (code *)0x0) {
    pcVar6 = (code *)*local_a8;
  }
  pcVar2 = *(code **)*puVar18;
  local_70 = pcVar6;
  if ((((pcVar2 != (code *)0x0) && (pcVar6 != (code *)0x0)) && (pcVar2 != pcVar6)) &&
     (plVar3 = (longlong *)*local_b0, (int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34))) {
    uVar9 = ((uint)((ulonglong)pcVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pcVar2 >> 4)) *
            -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    plVar11 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar3[8];
    }
    iVar10 = *(int *)((longlong)plVar11 +
                     (ulonglong)((int)plVar3[9] - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
    if (iVar10 != -1) {
      do {
        if (*(code **)(*plVar3 + (longlong)iVar10 * 0x10) == pcVar2) {
          if ((*(byte *)(local_b0 + 2) & 1) == 0) goto LAB_14281eb59;
          if (DAT_14c951858 == 0) {
            local_68 = FUN_1449e2820;
            local_110 = FUN_14081d0ea;
            local_118 = FUN_14081d0ea;
            local_128 = &LAB_1468c5283;
            local_130 = FUN_142809da0;
            local_138 = L"Engine";
            local_140 = 0x400000000;
            local_148 = 0x10000000;
            local_150 = 8;
            local_158 = 0x50;
            local_120 = (code **)&local_68;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
          }
          if ((*(int *)(*(longlong *)(pcVar2 + 0x10) + 0x38) < *(int *)(DAT_14c951858 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(pcVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30))
          goto LAB_14281eb3c;
          goto LAB_14281ec22;
        }
        iVar10 = *(int *)((longlong)iVar10 * 0x10 + *plVar3 + 8);
      } while (iVar10 != -1);
    }
  }
  goto LAB_14281ec65;
LAB_14281eb3c:
  do {
    pcVar6 = *(code **)(pcVar6 + 0x20);
  } while (pcVar6 != pcVar2 && pcVar6 != (code *)0x0);
  if (pcVar6 != (code *)0x0) goto LAB_14281ec65;
  goto LAB_14281eb59;
LAB_14281ec22:
  pcVar5 = pcVar6;
  pcVar6 = pcVar5;
  if (*(code **)(pcVar5 + 0x20) != (code *)0x0) goto code_r0x00014281ec31;
  goto LAB_14281ec57;
code_r0x00014281ec31:
  pcVar6 = *(code **)(pcVar5 + 0x20);
  if ((*(uint *)(pcVar5 + 8) >> 0x1c & 1) == 0) goto LAB_14281ec22;
  pcVar6 = (code *)FUN_142840154(pcVar5);
LAB_14281ec57:
  if (pcVar6 == (code *)0x0) {
    pcVar6 = *(code **)(pcVar5 + 0x20);
    goto LAB_14281ec22;
  }
  if (pcVar6 == pcVar2) goto LAB_14281ec65;
LAB_14281eb59:
  FUN_1457b12ce(plVar4[1],&local_68,&local_70,0);
LAB_14281ec65:
  puVar18 = puVar18 + 1;
  if (puVar18 == puVar26) goto LAB_14281ec72;
  goto LAB_14281ea3f;
LAB_14281ee0e:
  do {
    pcVar5 = *(code **)(pcVar5 + 0x20);
  } while (pcVar5 != pcVar6 && pcVar5 != (code *)0x0);
  if (pcVar5 == (code *)0x0) goto LAB_14281ee2b;
  goto LAB_14281ef35;
LAB_14281ef01:
  pcVar15 = pcVar5;
  pcVar5 = pcVar15;
  if (*(code **)(pcVar15 + 0x20) != (code *)0x0) goto code_r0x00014281ef10;
  goto LAB_14281ef27;
code_r0x00014281ef10:
  pcVar5 = *(code **)(pcVar15 + 0x20);
  if ((*(uint *)(pcVar15 + 8) >> 0x1c & 1) == 0) goto LAB_14281ef01;
  pcVar5 = (code *)FUN_142840154(pcVar15);
LAB_14281ef27:
  if (pcVar5 == (code *)0x0) {
    pcVar5 = *(code **)(pcVar15 + 0x20);
    goto LAB_14281ef01;
  }
  if (pcVar5 != pcVar6) {
LAB_14281ee2b:
    FUN_1457b12ce(plVar4[1],&local_68,&local_70,0);
  }
LAB_14281ef35:
  plVar4 = local_b0;
  pcVar6 = (code *)*local_a8;
  if (pcVar6 == (code *)0x0) {
    pcVar6 = (code *)*local_a8;
  }
  local_70 = pcVar6;
  if ((((pcVar2 != (code *)0x0) && (pcVar6 != (code *)0x0)) && (pcVar6 != pcVar2)) &&
     (plVar3 = (longlong *)*local_b0, (int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34))) {
    uVar9 = ((uint)((ulonglong)pcVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pcVar2 >> 4)) *
            -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    plVar11 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar3[8];
    }
    iVar10 = *(int *)((longlong)plVar11 +
                     (ulonglong)((int)plVar3[9] - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
    if (iVar10 != -1) {
      do {
        if (*(code **)(*plVar3 + (longlong)iVar10 * 0x10) == pcVar2) {
          if ((*(byte *)(local_b0 + 2) & 1) == 0) goto LAB_14281f047;
          if (DAT_14c951858 == 0) {
            local_68 = FUN_1449e2820;
            local_110 = FUN_14081d0ea;
            local_118 = FUN_14081d0ea;
            local_120 = (code **)&local_68;
            local_128 = &LAB_1468c5283;
            local_130 = FUN_142809da0;
            local_138 = L"Engine";
            local_140 = 0x400000000;
            local_148 = 0x10000000;
            local_150 = 8;
            local_158 = 0x50;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
          }
          if ((*(int *)(*(longlong *)(pcVar2 + 0x10) + 0x38) < *(int *)(DAT_14c951858 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(pcVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30))
          goto LAB_14281f02a;
          goto LAB_14281f11d;
        }
        iVar10 = *(int *)((longlong)iVar10 * 0x10 + *plVar3 + 8);
      } while (iVar10 != -1);
    }
  }
  goto LAB_14281f151;
LAB_14281f02a:
  do {
    pcVar6 = *(code **)(pcVar6 + 0x20);
  } while (pcVar6 != pcVar2 && pcVar6 != (code *)0x0);
  if (pcVar6 != (code *)0x0) goto LAB_14281f151;
  goto LAB_14281f047;
LAB_14281f11d:
  pcVar5 = pcVar6;
  pcVar6 = pcVar5;
  if (*(code **)(pcVar5 + 0x20) != (code *)0x0) goto code_r0x00014281f12c;
  goto LAB_14281f143;
code_r0x00014281f12c:
  pcVar6 = *(code **)(pcVar5 + 0x20);
  if ((*(uint *)(pcVar5 + 8) >> 0x1c & 1) == 0) goto LAB_14281f11d;
  pcVar6 = (code *)FUN_142840154(pcVar5);
LAB_14281f143:
  if (pcVar6 == (code *)0x0) {
    pcVar6 = *(code **)(pcVar5 + 0x20);
    goto LAB_14281f11d;
  }
  if (pcVar6 == pcVar2) goto LAB_14281f151;
LAB_14281f047:
  FUN_1457b12ce(plVar4[1],&local_68,&local_70,0);
LAB_14281f151:
  if (1 < uVar21) {
    local_f8 = (ulonglong)((uint)uVar21 & 1);
    puVar24 = (ushort *)(uVar21 & 0xfffffffffffffffe);
    local_d8 = local_100;
LAB_14281f17a:
    local_68 = (code *)(ulonglong)
                       (CONCAT24(*puVar24 >> 5,(int)CONCAT71(local_68._1_7_,(char)*puVar24)) &
                       0xffffffffff1f);
    local_60 = (byte)puVar24[1] & 0x1f;
    local_5c = (uint)(puVar24[1] >> 5);
    local_58 = (byte)puVar24[2] & 0x1f;
    local_54 = (uint)(puVar24[2] >> 5);
    local_50 = (byte)puVar24[3] & 0x1f;
    local_4c = (uint)(puVar24[3] >> 5);
    lVar19 = 0;
LAB_14281f1e7:
    plVar4 = local_b0;
    bVar1 = *(byte *)((longlong)&local_68 + lVar19);
    if (0x11 < bVar1) {
      FUN_1400301a6(bVar1,local_100);
      goto switchD_14281f213_caseD_0;
    }
    uVar9 = *(uint *)((longlong)&local_68 + lVar19 + 4);
    puVar12 = (ulonglong *)(local_d8 + (ulonglong)uVar9 * 8);
    puVar25 = puVar24;
    switch(bVar1) {
    case 0:
      goto switchD_14281f213_caseD_0;
    case 1:
      local_d8 = local_d8 + (ulonglong)(uVar9 * 0x800 + 0x800) * 8;
      break;
    case 2:
      uVar22 = *local_a8;
      if (uVar22 == 0) {
        uVar22 = *local_a8;
      }
      uVar21 = *puVar12;
      local_78 = uVar22;
      if ((((uVar21 != 0) && (uVar22 != 0)) && (uVar21 != uVar22)) &&
         (plVar3 = (longlong *)*local_b0, (int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34))) {
        uVar9 = ((uint)(uVar21 >> 0x14) & 0xffff ^ (uint)(uVar21 >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        plVar11 = plVar3 + 7;
        if ((longlong *)plVar3[8] != (longlong *)0x0) {
          plVar11 = (longlong *)plVar3[8];
        }
        iVar10 = *(int *)((longlong)plVar11 +
                         (ulonglong)((int)plVar3[9] - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
        if (iVar10 != -1) {
          do {
            if (*(ulonglong *)(*plVar3 + (longlong)iVar10 * 0x10) == uVar21) {
              if ((*(byte *)(local_b0 + 2) & 1) == 0) goto LAB_14282066e;
              if (DAT_14c951858 == 0) {
                local_70 = FUN_1449e2820;
                local_110 = FUN_14081d0ea;
                local_118 = FUN_14081d0ea;
                local_120 = &local_70;
                local_128 = &LAB_1468c5283;
                local_130 = FUN_142809da0;
                local_138 = L"Engine";
                local_140 = 0x400000000;
                local_148 = 0x10000000;
                local_150 = 8;
                local_158 = 0x50;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
              }
              if ((*(int *)(*(longlong *)(uVar21 + 0x10) + 0x38) < *(int *)(DAT_14c951858 + 0x38))
                 || (*(longlong *)
                      (*(longlong *)(*(longlong *)(uVar21 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30))
              goto LAB_142820393;
              goto LAB_14282063a;
            }
            iVar10 = *(int *)((longlong)iVar10 * 0x10 + *plVar3 + 8);
          } while (iVar10 != -1);
        }
      }
      break;
    case 3:
      if ((longlong)(int)puVar12[1] != 0) {
        puVar8 = (ulonglong *)*puVar12;
        puVar12 = puVar8 + (int)puVar12[1];
LAB_14281f88f:
        plVar4 = local_b0;
        uVar21 = *local_a8;
        if (uVar21 == 0) {
          uVar21 = *local_a8;
        }
        uVar22 = *puVar8;
        local_78 = uVar21;
        if (((uVar22 != 0) && (uVar21 != 0)) &&
           ((uVar22 != uVar21 &&
            (plVar3 = (longlong *)*local_b0, (int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)))))
        {
          uVar9 = ((uint)(uVar22 >> 0x14) & 0xffff ^ (uint)(uVar22 >> 4)) * -0x7a143595;
          uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
          plVar11 = plVar3 + 7;
          if ((longlong *)plVar3[8] != (longlong *)0x0) {
            plVar11 = (longlong *)plVar3[8];
          }
          iVar10 = *(int *)((longlong)plVar11 +
                           (ulonglong)((int)plVar3[9] - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
          if (iVar10 != -1) {
            do {
              if (*(ulonglong *)(*plVar3 + (longlong)iVar10 * 0x10) == uVar22) {
                if ((*(byte *)(local_b0 + 2) & 1) == 0) goto LAB_14281f9a5;
                if (DAT_14c951858 == 0) {
                  local_70 = FUN_1449e2820;
                  local_110 = FUN_14081d0ea;
                  local_118 = FUN_14081d0ea;
                  local_120 = &local_70;
                  local_128 = &LAB_1468c5283;
                  local_130 = FUN_142809da0;
                  local_138 = L"Engine";
                  local_140 = 0x400000000;
                  local_148 = 0x10000000;
                  local_150 = 8;
                  local_158 = 0x50;
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                }
                if ((*(int *)(*(longlong *)(uVar22 + 0x10) + 0x38) < *(int *)(DAT_14c951858 + 0x38))
                   || (*(longlong *)
                        (*(longlong *)(*(longlong *)(uVar22 + 0x10) + 0x30) +
                        (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30))
                goto LAB_14281f988;
                goto LAB_14281fa7b;
              }
              iVar10 = *(int *)((longlong)iVar10 * 0x10 + *plVar3 + 8);
            } while (iVar10 != -1);
          }
        }
        goto LAB_14281faaf;
      }
      break;
    case 4:
      uVar9 = *(uint *)((*(ulonglong *)(puVar24 + 4) & 0xfffffffffffffffe) - 8);
      uVar13 = (int)puVar12[1] * uVar9;
      puVar25 = puVar24 + 4;
      if (uVar13 != 0) {
        lVar20 = (*(ulonglong *)(puVar24 + 4) & 0xfffffffffffffffe) + local_f8;
        uVar21 = *puVar12;
        uVar22 = 0;
        local_e0 = puVar24 + 4;
        do {
          FUN_14282083a(&local_b0,lVar20,uVar21 + uVar22);
          uVar22 = uVar22 + uVar9;
          puVar25 = local_e0;
        } while (uVar13 != uVar22);
      }
      break;
    case 5:
      uVar13 = *(uint *)(puVar24 + 4) >> 0x10;
      uVar9 = (int)puVar12[1] * uVar13;
      puVar25 = puVar24 + 4;
      if (uVar9 != 0) {
        puVar12 = (ulonglong *)((ulonglong)(*(uint *)(puVar24 + 4) & 0xffff) * 8 + *puVar12);
        puVar8 = puVar12 + uVar9;
LAB_14281f56b:
        plVar4 = local_b0;
        uVar21 = *local_a8;
        if (uVar21 == 0) {
          uVar21 = *local_a8;
        }
        uVar22 = *puVar12;
        local_78 = uVar21;
        if ((((uVar22 != 0) && (uVar21 != 0)) && (uVar22 != uVar21)) &&
           (plVar3 = (longlong *)*local_b0, (int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34))) {
          uVar9 = ((uint)(uVar22 >> 0x14) & 0xffff ^ (uint)(uVar22 >> 4)) * -0x7a143595;
          uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
          plVar11 = plVar3 + 7;
          if ((longlong *)plVar3[8] != (longlong *)0x0) {
            plVar11 = (longlong *)plVar3[8];
          }
          iVar10 = *(int *)((longlong)plVar11 +
                           (ulonglong)((int)plVar3[9] - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
          if (iVar10 != -1) {
            do {
              if (*(ulonglong *)(*plVar3 + (longlong)iVar10 * 0x10) == uVar22) {
                if ((*(byte *)(local_b0 + 2) & 1) == 0) goto LAB_14281f681;
                if (DAT_14c951858 == 0) {
                  local_70 = FUN_1449e2820;
                  local_110 = FUN_14081d0ea;
                  local_118 = FUN_14081d0ea;
                  local_120 = &local_70;
                  local_128 = &LAB_1468c5283;
                  local_130 = FUN_142809da0;
                  local_138 = L"Engine";
                  local_140 = 0x400000000;
                  local_148 = 0x10000000;
                  local_150 = 8;
                  local_158 = 0x50;
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                }
                if ((*(int *)(*(longlong *)(uVar22 + 0x10) + 0x38) < *(int *)(DAT_14c951858 + 0x38))
                   || (*(longlong *)
                        (*(longlong *)(*(longlong *)(uVar22 + 0x10) + 0x30) +
                        (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30))
                goto LAB_14281f664;
                goto LAB_14281f75e;
              }
              iVar10 = *(int *)((longlong)iVar10 * 0x10 + *plVar3 + 8);
            } while (iVar10 != -1);
          }
        }
        goto LAB_14281f79a;
      }
      break;
    case 6:
      puVar25 = puVar24 + 4;
      uVar9 = (uint)puVar12[1];
      if ((0 < (int)uVar9) && (uVar9 != *(uint *)((longlong)puVar12 + 0x34))) {
        uVar13 = *(uint *)((*(ulonglong *)(puVar24 + 4) & 0xfffffffffffffffe) - 8);
        lVar20 = (*(ulonglong *)(puVar24 + 4) & 0xfffffffffffffffe) + local_f8;
        uVar21 = *puVar12;
        uVar22 = 0;
        local_e0 = puVar25;
        do {
          puVar8 = (ulonglong *)puVar12[4];
          if ((ulonglong *)puVar12[4] == (ulonglong *)0x0) {
            puVar8 = puVar12 + 2;
          }
          if ((*(uint *)((longlong)puVar8 + (uVar22 >> 5) * 4) >> ((uint)uVar22 & 0x1f) & 1) != 0) {
            FUN_14282083a(&local_b0,lVar20,uVar21);
          }
          uVar14 = (uint)uVar22 + 1;
          uVar22 = (ulonglong)uVar14;
          uVar21 = uVar21 + uVar13;
          puVar25 = local_e0;
        } while (uVar9 != uVar14);
      }
      break;
    case 7:
      if (((*(int *)((longlong)puVar12 + 0xc) != 0) && (uVar9 = (uint)puVar12[1], -1 < (int)uVar9))
         && (((int)uVar9 < DAT_14c9647dc &&
             ((puVar8 = (ulonglong *)
                        ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
              puVar8 != (ulonglong *)0x0 && ((int)puVar8[2] == *(int *)((longlong)puVar12 + 0xc)))))
            )) {
        uVar21 = *puVar8;
        uVar22 = *local_a8;
        if (uVar22 == 0) {
          uVar22 = *local_a8;
        }
        local_78 = uVar22;
        if ((((uVar21 != 0) && (uVar22 != 0)) && (uVar21 != uVar22)) &&
           (plVar3 = (longlong *)*local_b0, (int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34))) {
          uVar9 = ((uint)(uVar21 >> 0x14) & 0xffff ^ (uint)(uVar21 >> 4)) * -0x7a143595;
          uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
          plVar11 = plVar3 + 7;
          if ((longlong *)plVar3[8] != (longlong *)0x0) {
            plVar11 = (longlong *)plVar3[8];
          }
          iVar10 = *(int *)((longlong)plVar11 +
                           (ulonglong)((int)plVar3[9] - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
          if (iVar10 != -1) {
            do {
              if (*(ulonglong *)(*plVar3 + (longlong)iVar10 * 0x10) == uVar21) {
                if ((*(byte *)(local_b0 + 2) & 1) == 0) goto LAB_14282066e;
                if (DAT_14c951858 == 0) {
                  local_70 = FUN_1449e2820;
                  local_110 = FUN_14081d0ea;
                  local_118 = FUN_14081d0ea;
                  local_120 = &local_70;
                  local_128 = &LAB_1468c5283;
                  local_130 = FUN_142809da0;
                  local_138 = L"Engine";
                  local_140 = 0x400000000;
                  local_148 = 0x10000000;
                  local_150 = 8;
                  local_158 = 0x50;
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                }
                if ((*(int *)(*(longlong *)(uVar21 + 0x10) + 0x38) < *(int *)(DAT_14c951858 + 0x38))
                   || (*(longlong *)
                        (*(longlong *)(*(longlong *)(uVar21 + 0x10) + 0x30) +
                        (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30))
                goto LAB_1428203ee;
                goto LAB_142820696;
              }
              iVar10 = *(int *)((longlong)iVar10 * 0x10 + *plVar3 + 8);
            } while (iVar10 != -1);
          }
        }
      }
      break;
    case 8:
      if ((longlong)(int)puVar12[1] != 0) {
        uVar21 = *puVar12;
        uVar22 = (longlong)(int)puVar12[1] * 0x20 + uVar21;
LAB_14281fb3b:
        plVar4 = local_b0;
        if (((*(int *)(uVar21 + 0xc) != 0) && (uVar9 = *(uint *)(uVar21 + 8), -1 < (int)uVar9)) &&
           (((int)uVar9 < DAT_14c9647dc &&
            ((puVar12 = (ulonglong *)
                        ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
             puVar12 != (ulonglong *)0x0 && ((int)puVar12[2] == *(int *)(uVar21 + 0xc))))))) {
          uVar17 = *puVar12;
          uVar7 = *local_a8;
          if (uVar7 == 0) {
            uVar7 = *local_a8;
          }
          local_78 = uVar7;
          if ((((uVar17 != 0) && (uVar7 != 0)) && (uVar17 != uVar7)) &&
             (plVar3 = (longlong *)*local_b0, (int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)))
          {
            uVar9 = ((uint)(uVar17 >> 0x14) & 0xffff ^ (uint)(uVar17 >> 4)) * -0x7a143595;
            uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
            plVar11 = plVar3 + 7;
            if ((longlong *)plVar3[8] != (longlong *)0x0) {
              plVar11 = (longlong *)plVar3[8];
            }
            iVar10 = *(int *)((longlong)plVar11 +
                             (ulonglong)((int)plVar3[9] - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
            if (iVar10 != -1) {
              do {
                if (*(ulonglong *)(*plVar3 + (longlong)iVar10 * 0x10) == uVar17) {
                  if ((*(byte *)(local_b0 + 2) & 1) == 0) goto LAB_14281fc9d;
                  if (DAT_14c951858 == 0) {
                    local_70 = FUN_1449e2820;
                    local_110 = FUN_14081d0ea;
                    local_118 = FUN_14081d0ea;
                    local_120 = &local_70;
                    local_128 = &LAB_1468c5283;
                    local_130 = FUN_142809da0;
                    local_138 = L"Engine";
                    local_140 = 0x400000000;
                    local_148 = 0x10000000;
                    local_150 = 8;
                    local_158 = 0x50;
                    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                  }
                  if ((*(int *)(*(longlong *)(uVar17 + 0x10) + 0x38) <
                       *(int *)(DAT_14c951858 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(uVar17 + 0x10) + 0x30) +
                       (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30))
                  goto LAB_14281fc80;
                  goto LAB_14281fd73;
                }
                iVar10 = *(int *)((longlong)iVar10 * 0x10 + *plVar3 + 8);
              } while (iVar10 != -1);
            }
          }
        }
        goto LAB_14281fdaf;
      }
      break;
    case 9:
      puVar8 = (ulonglong *)*puVar12;
      puVar23 = (ulonglong *)(((longlong)puVar8 >> 0x18) + (longlong)puVar12);
      if (((ulonglong)puVar8 & 1) == 0) {
        puVar23 = puVar8;
      }
      if ((longlong)(int)puVar12[1] != 0) {
        puVar12 = puVar23 + (int)puVar12[1];
LAB_14282005f:
        plVar4 = local_b0;
        uVar21 = *local_a8;
        if (uVar21 == 0) {
          uVar21 = *local_a8;
        }
        uVar22 = *puVar23;
        local_78 = uVar21;
        if ((((uVar22 != 0) && (uVar21 != 0)) && (uVar22 != uVar21)) &&
           (plVar3 = (longlong *)*local_b0, (int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34))) {
          uVar9 = ((uint)(uVar22 >> 0x14) & 0xffff ^ (uint)(uVar22 >> 4)) * -0x7a143595;
          uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
          plVar11 = plVar3 + 7;
          if ((longlong *)plVar3[8] != (longlong *)0x0) {
            plVar11 = (longlong *)plVar3[8];
          }
          iVar10 = *(int *)((longlong)plVar11 +
                           (ulonglong)((int)plVar3[9] - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
          if (iVar10 != -1) {
            do {
              if (*(ulonglong *)(*plVar3 + (longlong)iVar10 * 0x10) == uVar22) {
                if ((*(byte *)(local_b0 + 2) & 1) == 0) goto LAB_142820174;
                if (DAT_14c951858 == 0) {
                  local_70 = FUN_1449e2820;
                  local_110 = FUN_14081d0ea;
                  local_118 = FUN_14081d0ea;
                  local_120 = &local_70;
                  local_128 = &LAB_1468c5283;
                  local_130 = FUN_142809da0;
                  local_138 = L"Engine";
                  local_140 = 0x400000000;
                  local_148 = 0x10000000;
                  local_150 = 8;
                  local_158 = 0x50;
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                }
                if ((*(int *)(*(longlong *)(uVar22 + 0x10) + 0x38) < *(int *)(DAT_14c951858 + 0x38))
                   || (*(longlong *)
                        (*(longlong *)(*(longlong *)(uVar22 + 0x10) + 0x30) +
                        (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30))
                goto LAB_142820157;
                goto LAB_14282024a;
              }
              iVar10 = *(int *)((longlong)iVar10 * 0x10 + *plVar3 + 8);
            } while (iVar10 != -1);
          }
        }
        goto LAB_14282027e;
      }
      break;
    case 10:
      uVar21 = *puVar12;
      uVar22 = ((longlong)uVar21 >> 0x18) + (longlong)puVar12;
      if ((uVar21 & 1) == 0) {
        uVar22 = uVar21;
      }
      uVar9 = *(uint *)((*(ulonglong *)(puVar24 + 4) & 0xfffffffffffffffe) - 8);
      uVar13 = (int)puVar12[1] * uVar9;
      puVar25 = puVar24 + 4;
      if (uVar13 != 0) {
        lVar20 = (*(ulonglong *)(puVar24 + 4) & 0xfffffffffffffffe) + local_f8;
        uVar21 = 0;
        do {
          FUN_14282083a(&local_b0,lVar20,uVar22 + uVar21);
          uVar21 = uVar21 + uVar9;
        } while (uVar13 != uVar21);
      }
      break;
    case 0xb:
      uVar9 = *(uint *)((*(ulonglong *)(puVar24 + 4) & 0xfffffffffffffffe) - 8);
      uVar13 = *(byte *)((longlong)puVar12 + (ulonglong)uVar9) * uVar9;
      puVar25 = puVar24 + 4;
      if (uVar13 != 0) {
        lVar20 = (*(ulonglong *)(puVar24 + 4) & 0xfffffffffffffffe) + local_f8;
        uVar21 = 0;
        do {
          FUN_14282083a(&local_b0,lVar20,(longlong)puVar12 + uVar21);
          uVar21 = uVar21 + uVar9;
        } while (uVar13 != uVar21);
      }
      break;
    case 0xc:
      (*(code *)**(undefined8 **)*puVar12)((undefined8 *)*puVar12,local_a0);
      plVar4 = (longlong *)*puVar12;
      if (*(char *)((longlong)plVar4 + 0x11) == '\x01') {
        if (((ulonglong)plVar4[1] < 9) && (*(byte *)(plVar4 + 2) < 4)) {
          puVar12 = puVar12 + 1;
        }
        else {
          puVar12 = (ulonglong *)puVar12[1];
        }
        (**(code **)(*plVar4 + 8))(plVar4,puVar12,local_a0);
      }
      break;
    case 0xd:
      (**(code **)(puVar24 + 4))(local_100,local_a0);
      goto switchD_14281f213_caseD_0;
    case 0xe:
      (*(code *)(&DAT_14c950070)[(int)uVar9])(local_100,local_a0);
switchD_14281f213_caseD_0:
      puVar12 = local_c0;
      goto LAB_14282070e;
    case 0xf:
      (**(code **)(puVar24 + 4))(puVar12,local_a0);
      puVar25 = puVar24 + 4;
      break;
    case 0x10:
      uVar21 = puVar12[1];
      uVar22 = *local_a8;
      if (uVar22 == 0) {
        uVar22 = *local_a8;
      }
      local_78 = uVar22;
      if ((((uVar21 != 0) && (uVar22 != 0)) && (uVar21 != uVar22)) &&
         (plVar3 = (longlong *)*local_b0, (int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34))) {
        uVar9 = ((uint)(uVar21 >> 0x14) & 0xffff ^ (uint)(uVar21 >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        plVar11 = plVar3 + 7;
        if ((longlong *)plVar3[8] != (longlong *)0x0) {
          plVar11 = (longlong *)plVar3[8];
        }
        iVar10 = *(int *)((longlong)plVar11 +
                         (ulonglong)((int)plVar3[9] - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
        if (iVar10 != -1) {
          do {
            if (*(ulonglong *)(*plVar3 + (longlong)iVar10 * 0x10) == uVar21) {
              if ((*(byte *)(local_b0 + 2) & 1) == 0) goto LAB_14282066e;
              if (DAT_14c951858 == 0) {
                local_70 = FUN_1449e2820;
                local_110 = FUN_14081d0ea;
                local_118 = FUN_14081d0ea;
                local_120 = &local_70;
                local_128 = &LAB_1468c5283;
                local_130 = FUN_142809da0;
                local_138 = L"Engine";
                local_140 = 0x400000000;
                local_148 = 0x10000000;
                local_150 = 8;
                local_158 = 0x50;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
              }
              if ((*(int *)(*(longlong *)(uVar21 + 0x10) + 0x38) < *(int *)(DAT_14c951858 + 0x38))
                 || (*(longlong *)
                      (*(longlong *)(*(longlong *)(uVar21 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30))
              goto LAB_142820344;
              goto LAB_142820609;
            }
            iVar10 = *(int *)((longlong)iVar10 * 0x10 + *plVar3 + 8);
          } while (iVar10 != -1);
        }
      }
      break;
    case 0x11:
      if ((longlong)(int)puVar12[1] != 0) {
        uVar22 = *puVar12;
        uVar21 = uVar22 + (longlong)(int)puVar12[1] * 0x18;
LAB_14281f250:
        plVar4 = local_b0;
        uVar17 = *(ulonglong *)(uVar22 + 8);
        uVar7 = *local_a8;
        if (uVar7 == 0) {
          uVar7 = *local_a8;
        }
        local_78 = uVar7;
        if (((uVar17 != 0) && (uVar7 != 0)) &&
           ((uVar17 != uVar7 &&
            (plVar3 = (longlong *)*local_b0, (int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)))))
        {
          uVar9 = ((uint)(uVar17 >> 0x14) & 0xffff ^ (uint)(uVar17 >> 4)) * -0x7a143595;
          uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
          plVar11 = plVar3 + 7;
          if ((longlong *)plVar3[8] != (longlong *)0x0) {
            plVar11 = (longlong *)plVar3[8];
          }
          iVar10 = *(int *)((longlong)plVar11 +
                           (ulonglong)((int)plVar3[9] - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
          if (iVar10 != -1) {
            do {
              if (*(ulonglong *)(*plVar3 + (longlong)iVar10 * 0x10) == uVar17) {
                if ((*(byte *)(local_b0 + 2) & 1) == 0) goto LAB_14281f366;
                if (DAT_14c951858 == 0) {
                  local_70 = FUN_1449e2820;
                  local_110 = FUN_14081d0ea;
                  local_118 = FUN_14081d0ea;
                  local_120 = &local_70;
                  local_128 = &LAB_1468c5283;
                  local_130 = FUN_142809da0;
                  local_138 = L"Engine";
                  local_140 = 0x400000000;
                  local_148 = 0x10000000;
                  local_150 = 8;
                  local_158 = 0x50;
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                }
                if ((*(int *)(*(longlong *)(uVar17 + 0x10) + 0x38) < *(int *)(DAT_14c951858 + 0x38))
                   || (*(longlong *)
                        (*(longlong *)(*(longlong *)(uVar17 + 0x10) + 0x30) +
                        (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30))
                goto LAB_14281f349;
                goto LAB_14281f43c;
              }
              iVar10 = *(int *)((longlong)iVar10 * 0x10 + *plVar3 + 8);
            } while (iVar10 != -1);
          }
        }
        goto LAB_14281f470;
      }
    }
    goto LAB_1428202f8;
  }
LAB_14282070e:
  local_c8 = *(undefined8 *)(local_b8[2] + 0x10);
  puVar8 = local_b8 + 1;
  if (puVar8 == puVar12) goto LAB_14282076a;
  goto LAB_14281ecd3;
LAB_14281f349:
  do {
    uVar7 = *(ulonglong *)(uVar7 + 0x20);
  } while (uVar7 != uVar17 && uVar7 != 0);
  if (uVar7 != 0) goto LAB_14281f470;
  goto LAB_14281f366;
LAB_14281f43c:
  uVar16 = uVar7;
  uVar7 = uVar16;
  if (*(ulonglong *)(uVar16 + 0x20) != 0) goto code_r0x00014281f44b;
  goto LAB_14281f462;
code_r0x00014281f44b:
  uVar7 = *(ulonglong *)(uVar16 + 0x20);
  if ((*(uint *)(uVar16 + 8) >> 0x1c & 1) == 0) goto LAB_14281f43c;
  uVar7 = FUN_142840154(uVar16);
LAB_14281f462:
  if (uVar7 == 0) {
    uVar7 = *(ulonglong *)(uVar16 + 0x20);
    goto LAB_14281f43c;
  }
  if (uVar7 == uVar17) goto LAB_14281f470;
LAB_14281f366:
  FUN_1457b12ce(plVar4[1],&local_70,&local_78,0);
LAB_14281f470:
  uVar22 = uVar22 + 0x18;
  if (uVar22 == uVar21) goto LAB_1428202f8;
  goto LAB_14281f250;
LAB_142820344:
  do {
    uVar22 = *(ulonglong *)(uVar22 + 0x20);
  } while (uVar22 != uVar21 && uVar22 != 0);
  goto LAB_1428203a7;
LAB_142820609:
  uVar17 = uVar22;
  uVar22 = uVar17;
  if (*(ulonglong *)(uVar17 + 0x20) != 0) goto code_r0x000142820618;
  goto LAB_14282062f;
code_r0x000142820618:
  uVar22 = *(ulonglong *)(uVar17 + 0x20);
  if ((*(uint *)(uVar17 + 8) >> 0x1c & 1) != 0) {
    uVar22 = FUN_142840154(uVar17);
LAB_14282062f:
    if (uVar22 == 0) {
      uVar22 = *(ulonglong *)(uVar17 + 0x20);
      goto LAB_142820609;
    }
    goto LAB_142820665;
  }
  goto LAB_142820609;
LAB_142820157:
  do {
    uVar21 = *(ulonglong *)(uVar21 + 0x20);
  } while (uVar21 != uVar22 && uVar21 != 0);
  if (uVar21 != 0) goto LAB_14282027e;
  goto LAB_142820174;
LAB_14282024a:
  uVar17 = uVar21;
  uVar21 = uVar17;
  if (*(ulonglong *)(uVar17 + 0x20) != 0) goto code_r0x000142820259;
  goto LAB_142820270;
code_r0x000142820259:
  uVar21 = *(ulonglong *)(uVar17 + 0x20);
  if ((*(uint *)(uVar17 + 8) >> 0x1c & 1) == 0) goto LAB_14282024a;
  uVar21 = FUN_142840154(uVar17);
LAB_142820270:
  if (uVar21 == 0) {
    uVar21 = *(ulonglong *)(uVar17 + 0x20);
    goto LAB_14282024a;
  }
  if (uVar21 == uVar22) goto LAB_14282027e;
LAB_142820174:
  FUN_1457b12ce(plVar4[1],&local_70,&local_78,0);
LAB_14282027e:
  puVar23 = puVar23 + 1;
  if (puVar23 == puVar12) goto LAB_1428202f8;
  goto LAB_14282005f;
LAB_14281fc80:
  do {
    uVar7 = *(ulonglong *)(uVar7 + 0x20);
  } while (uVar7 != uVar17 && uVar7 != 0);
  if (uVar7 != 0) goto LAB_14281fdaf;
  goto LAB_14281fc9d;
LAB_14281fd73:
  uVar16 = uVar7;
  uVar7 = uVar16;
  if (*(ulonglong *)(uVar16 + 0x20) != 0) goto code_r0x00014281fd82;
  goto LAB_14281fd99;
code_r0x00014281fd82:
  uVar7 = *(ulonglong *)(uVar16 + 0x20);
  if ((*(uint *)(uVar16 + 8) >> 0x1c & 1) == 0) goto LAB_14281fd73;
  uVar7 = FUN_142840154(uVar16);
LAB_14281fd99:
  if (uVar7 == 0) {
    uVar7 = *(ulonglong *)(uVar16 + 0x20);
    goto LAB_14281fd73;
  }
  if (uVar7 == uVar17) goto LAB_14281fdaf;
LAB_14281fc9d:
  FUN_1457b12ce(plVar4[1],&local_70,&local_78,0);
LAB_14281fdaf:
  uVar21 = uVar21 + 0x20;
  if (uVar21 == uVar22) goto LAB_1428202f8;
  goto LAB_14281fb3b;
LAB_1428203ee:
  do {
    uVar22 = *(ulonglong *)(uVar22 + 0x20);
  } while (uVar22 != uVar21 && uVar22 != 0);
  goto LAB_1428203a7;
LAB_142820696:
  uVar17 = uVar22;
  uVar22 = uVar17;
  if (*(ulonglong *)(uVar17 + 0x20) != 0) goto code_r0x0001428206a5;
  goto LAB_1428206bc;
code_r0x0001428206a5:
  uVar22 = *(ulonglong *)(uVar17 + 0x20);
  if ((*(uint *)(uVar17 + 8) >> 0x1c & 1) != 0) {
    uVar22 = FUN_142840154(uVar17);
LAB_1428206bc:
    if (uVar22 == 0) {
      uVar22 = *(ulonglong *)(uVar17 + 0x20);
      goto LAB_142820696;
    }
    goto LAB_142820665;
  }
  goto LAB_142820696;
LAB_14281f664:
  do {
    uVar21 = *(ulonglong *)(uVar21 + 0x20);
  } while (uVar21 != uVar22 && uVar21 != 0);
  if (uVar21 != 0) goto LAB_14281f79a;
  goto LAB_14281f681;
LAB_14281f75e:
  uVar17 = uVar21;
  uVar21 = uVar17;
  if (*(ulonglong *)(uVar17 + 0x20) != 0) goto code_r0x00014281f76d;
  goto LAB_14281f785;
code_r0x00014281f76d:
  uVar21 = *(ulonglong *)(uVar17 + 0x20);
  if ((*(uint *)(uVar17 + 8) >> 0x1c & 1) == 0) goto LAB_14281f75e;
  uVar21 = FUN_142840154(uVar17);
LAB_14281f785:
  if (uVar21 == 0) {
    uVar21 = *(ulonglong *)(uVar17 + 0x20);
    goto LAB_14281f75e;
  }
  if (uVar21 == uVar22) goto LAB_14281f79a;
LAB_14281f681:
  FUN_1457b12ce(plVar4[1],&local_70,&local_78,0);
LAB_14281f79a:
  puVar12 = puVar12 + uVar13;
  if (puVar12 == puVar8) goto LAB_1428202f8;
  goto LAB_14281f56b;
LAB_14281f988:
  do {
    uVar21 = *(ulonglong *)(uVar21 + 0x20);
  } while (uVar21 != uVar22 && uVar21 != 0);
  if (uVar21 != 0) goto LAB_14281faaf;
  goto LAB_14281f9a5;
LAB_14281fa7b:
  uVar17 = uVar21;
  uVar21 = uVar17;
  if (*(ulonglong *)(uVar17 + 0x20) != 0) goto code_r0x00014281fa8a;
  goto LAB_14281faa1;
code_r0x00014281fa8a:
  uVar21 = *(ulonglong *)(uVar17 + 0x20);
  if ((*(uint *)(uVar17 + 8) >> 0x1c & 1) == 0) goto LAB_14281fa7b;
  uVar21 = FUN_142840154(uVar17);
LAB_14281faa1:
  if (uVar21 == 0) {
    uVar21 = *(ulonglong *)(uVar17 + 0x20);
    goto LAB_14281fa7b;
  }
  if (uVar21 == uVar22) goto LAB_14281faaf;
LAB_14281f9a5:
  FUN_1457b12ce(plVar4[1],&local_70,&local_78,0);
LAB_14281faaf:
  puVar8 = puVar8 + 1;
  if (puVar8 == puVar12) goto LAB_1428202f8;
  goto LAB_14281f88f;
LAB_142820393:
  do {
    uVar22 = *(ulonglong *)(uVar22 + 0x20);
  } while (uVar22 != uVar21 && uVar22 != 0);
LAB_1428203a7:
  if (uVar22 == 0) {
LAB_14282066e:
    FUN_1457b12ce(plVar4[1],&local_70,&local_78,0);
  }
LAB_1428202f8:
  lVar19 = lVar19 + 8;
  puVar24 = puVar25;
  if (lVar19 == 0x20) goto LAB_1428206c3;
  goto LAB_14281f1e7;
LAB_14282063a:
  uVar17 = uVar22;
  uVar22 = uVar17;
  if (*(ulonglong *)(uVar17 + 0x20) != 0) goto code_r0x000142820649;
  goto LAB_142820660;
code_r0x000142820649:
  uVar22 = *(ulonglong *)(uVar17 + 0x20);
  if ((*(uint *)(uVar17 + 8) >> 0x1c & 1) == 0) goto LAB_14282063a;
  uVar22 = FUN_142840154(uVar17);
LAB_142820660:
  if (uVar22 == 0) {
    uVar22 = *(ulonglong *)(uVar17 + 0x20);
    goto LAB_14282063a;
  }
LAB_142820665:
  if (uVar22 == uVar21) goto LAB_1428202f8;
  goto LAB_14282066e;
LAB_1428206c3:
  puVar24 = puVar25 + 4;
  goto LAB_14281f17a;
}



// FUNCTION 14282083a FUN_14282083a body=5856 status=ok
// SIG undefined FUN_14282083a(void)

void FUN_14282083a(longlong *param_1,ulonglong param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong *plVar11;
  ushort *puVar12;
  ushort *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  longlong local_a0;
  ushort *local_98;
  longlong local_90;
  ulonglong local_88;
  longlong local_80;
  ulonglong local_78;
  code *local_70;
  byte local_68 [4];
  uint local_64;
  byte local_60;
  uint local_5c;
  byte local_58;
  uint local_54;
  byte local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_88 = (ulonglong)((uint)param_2 & 1);
  puVar12 = (ushort *)(param_2 & 0xfffffffffffffffe);
  local_80 = param_3;
LAB_142820889:
  local_68[0] = (byte)*puVar12 & 0x1f;
  local_64 = (uint)(*puVar12 >> 5);
  local_60 = (byte)puVar12[1] & 0x1f;
  local_5c = (uint)(puVar12[1] >> 5);
  local_58 = (byte)puVar12[2] & 0x1f;
  local_54 = (uint)(puVar12[2] >> 5);
  local_50 = (byte)puVar12[3] & 0x1f;
  local_4c = (uint)(puVar12[3] >> 5);
  lVar19 = 0;
LAB_1428208f7:
  uVar15 = (ulonglong)local_68[lVar19];
  if (0x11 < uVar15) {
LAB_142821ee8:
    FUN_142821f1b(uVar15);
    goto switchD_14282091e_caseD_0;
  }
  puVar6 = (ulonglong *)(param_3 + (ulonglong)*(uint *)((longlong)&local_64 + lVar19) * 8);
  puVar13 = puVar12;
  switch(uVar15) {
  case 1:
    param_3 = param_3 + (ulonglong)(*(uint *)((longlong)&local_64 + lVar19) * 0x800 + 0x800) * 8;
    break;
  case 2:
    plVar11 = (longlong *)*param_1;
    uVar15 = *(ulonglong *)param_1[1];
    if (uVar15 == 0) {
      uVar15 = *(ulonglong *)param_1[1];
    }
    uVar9 = *puVar6;
    local_78 = uVar15;
    if ((((uVar9 != 0) && (uVar15 != 0)) && (uVar9 != uVar15)) &&
       (plVar1 = (longlong *)*plVar11, (int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34))) {
      uVar3 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      plVar5 = plVar1 + 7;
      if ((longlong *)plVar1[8] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar1[8];
      }
      iVar4 = *(int *)((longlong)plVar5 +
                      (ulonglong)((int)plVar1[9] - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
      if (iVar4 != -1) {
        do {
          if (*(ulonglong *)(*plVar1 + (longlong)iVar4 * 0x10) == uVar9) {
            if ((*(byte *)(plVar11 + 2) & 1) == 0) goto LAB_142821b43;
            if (DAT_14c951858 == 0) {
              local_70 = FUN_1449e2820;
              local_b0 = FUN_14081d0ea;
              local_b8 = FUN_14081d0ea;
              local_c0 = &local_70;
              local_c8 = &LAB_1468c5283;
              local_d0 = FUN_142809da0;
              local_d8 = L"Engine";
              local_e0 = 0x400000000;
              local_e8 = 0x10000000;
              local_f0 = 8;
              local_f8 = 0x50;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
            }
            if ((*(int *)(*(longlong *)(uVar9 + 0x10) + 0x38) < *(int *)(DAT_14c951858 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(uVar9 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30))
            goto LAB_142821b26;
            goto LAB_142821e3f;
          }
          iVar4 = *(int *)((longlong)iVar4 * 0x10 + *plVar1 + 8);
        } while (iVar4 != -1);
      }
    }
    break;
  case 3:
    if ((longlong)(int)puVar6[1] != 0) {
      puVar7 = (ulonglong *)*puVar6;
      puVar6 = puVar7 + (int)puVar6[1];
      local_a0 = lVar19;
LAB_142820fd1:
      plVar11 = (longlong *)*param_1;
      uVar15 = *(ulonglong *)param_1[1];
      if (uVar15 == 0) {
        uVar15 = *(ulonglong *)param_1[1];
      }
      uVar9 = *puVar7;
      local_78 = uVar15;
      if (((uVar9 != 0) && (uVar15 != 0)) &&
         ((uVar9 != uVar15 &&
          (plVar1 = (longlong *)*plVar11, (int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34))))) {
        uVar3 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        plVar5 = plVar1 + 7;
        if ((longlong *)plVar1[8] != (longlong *)0x0) {
          plVar5 = (longlong *)plVar1[8];
        }
        iVar4 = *(int *)((longlong)plVar5 +
                        (ulonglong)((int)plVar1[9] - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
        if (iVar4 != -1) {
          do {
            if (*(ulonglong *)(*plVar1 + (longlong)iVar4 * 0x10) == uVar9) {
              if ((*(byte *)(plVar11 + 2) & 1) == 0) goto LAB_1428210dd;
              if (DAT_14c951858 == 0) {
                local_70 = FUN_1449e2820;
                local_b0 = FUN_14081d0ea;
                local_b8 = FUN_14081d0ea;
                local_c0 = &local_70;
                local_c8 = &LAB_1468c5283;
                local_d0 = FUN_142809da0;
                local_d8 = L"Engine";
                local_e0 = 0x400000000;
                local_e8 = 0x10000000;
                local_f0 = 8;
                local_f8 = 0x50;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
              }
              if ((*(int *)(*(longlong *)(uVar9 + 0x10) + 0x38) < *(int *)(DAT_14c951858 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(uVar9 + 0x10) + 0x30) +
                   (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30))
              goto LAB_1428210c0;
              goto LAB_1428211b4;
            }
            iVar4 = *(int *)((longlong)iVar4 * 0x10 + *plVar1 + 8);
          } while (iVar4 != -1);
        }
      }
      goto LAB_1428211ea;
    }
    break;
  case 4:
    uVar3 = *(uint *)((*(ulonglong *)(puVar12 + 4) & 0xfffffffffffffffe) - 8);
    uVar8 = (int)puVar6[1] * uVar3;
    puVar13 = puVar12 + 4;
    if (uVar8 != 0) {
      lVar16 = (*(ulonglong *)(puVar12 + 4) & 0xfffffffffffffffe) + local_88;
      uVar15 = *puVar6;
      uVar9 = 0;
      local_a0 = lVar19;
      local_98 = puVar12 + 4;
      local_90 = param_3;
      do {
        FUN_14282083a(param_1,lVar16,uVar15 + uVar9);
        uVar9 = uVar9 + uVar3;
        puVar13 = local_98;
        param_3 = local_90;
        lVar19 = local_a0;
      } while (uVar8 != uVar9);
    }
    break;
  case 5:
    uVar8 = *(uint *)(puVar12 + 4) >> 0x10;
    uVar3 = (int)puVar6[1] * uVar8;
    puVar13 = puVar12 + 4;
    if (uVar3 != 0) {
      puVar6 = (ulonglong *)((ulonglong)(*(uint *)(puVar12 + 4) & 0xffff) * 8 + *puVar6);
      puVar7 = puVar6 + uVar3;
      local_a0 = lVar19;
      local_90 = param_3;
LAB_142820cbd:
      plVar11 = (longlong *)*param_1;
      uVar15 = *(ulonglong *)param_1[1];
      if (uVar15 == 0) {
        uVar15 = *(ulonglong *)param_1[1];
      }
      uVar9 = *puVar6;
      local_78 = uVar15;
      if ((((uVar9 != 0) && (uVar15 != 0)) && (uVar9 != uVar15)) &&
         (plVar1 = (longlong *)*plVar11, (int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34))) {
        uVar3 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        plVar5 = plVar1 + 7;
        if ((longlong *)plVar1[8] != (longlong *)0x0) {
          plVar5 = (longlong *)plVar1[8];
        }
        iVar4 = *(int *)((longlong)plVar5 +
                        (ulonglong)((int)plVar1[9] - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
        if (iVar4 != -1) {
          do {
            if (*(ulonglong *)(*plVar1 + (longlong)iVar4 * 0x10) == uVar9) {
              if ((*(byte *)(plVar11 + 2) & 1) == 0) goto LAB_142820dca;
              if (DAT_14c951858 == 0) {
                local_70 = FUN_1449e2820;
                local_b0 = FUN_14081d0ea;
                local_b8 = FUN_14081d0ea;
                local_c0 = &local_70;
                local_c8 = &LAB_1468c5283;
                local_d0 = FUN_142809da0;
                local_d8 = L"Engine";
                local_e0 = 0x400000000;
                local_e8 = 0x10000000;
                local_f0 = 8;
                local_f8 = 0x50;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
              }
              if ((*(int *)(*(longlong *)(uVar9 + 0x10) + 0x38) < *(int *)(DAT_14c951858 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(uVar9 + 0x10) + 0x30) +
                   (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30))
              goto LAB_142820dac;
              goto LAB_142820ea0;
            }
            iVar4 = *(int *)((longlong)iVar4 * 0x10 + *plVar1 + 8);
          } while (iVar4 != -1);
        }
      }
      goto LAB_142820ed6;
    }
    break;
  case 6:
    puVar13 = puVar12 + 4;
    uVar3 = (uint)puVar6[1];
    if ((0 < (int)uVar3) && (uVar3 != *(uint *)((longlong)puVar6 + 0x34))) {
      uVar8 = *(uint *)((*(ulonglong *)(puVar12 + 4) & 0xfffffffffffffffe) - 8);
      lVar16 = (*(ulonglong *)(puVar12 + 4) & 0xfffffffffffffffe) + local_88;
      uVar15 = *puVar6;
      uVar9 = 0;
      local_a0 = lVar19;
      local_98 = puVar13;
      local_90 = param_3;
      do {
        puVar7 = (ulonglong *)puVar6[4];
        if ((ulonglong *)puVar6[4] == (ulonglong *)0x0) {
          puVar7 = puVar6 + 2;
        }
        if ((*(uint *)((longlong)puVar7 + (uVar9 >> 5) * 4) >> ((uint)uVar9 & 0x1f) & 1) != 0) {
          FUN_14282083a(param_1,lVar16,uVar15);
        }
        uVar10 = (uint)uVar9 + 1;
        uVar9 = (ulonglong)uVar10;
        uVar15 = uVar15 + uVar8;
        puVar13 = local_98;
        param_3 = local_90;
        lVar19 = local_a0;
      } while (uVar3 != uVar10);
    }
    break;
  case 7:
    if (((*(int *)((longlong)puVar6 + 0xc) != 0) && (uVar3 = (uint)puVar6[1], -1 < (int)uVar3)) &&
       (((int)uVar3 < DAT_14c9647dc &&
        ((puVar7 = (ulonglong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         puVar7 != (ulonglong *)0x0 && ((int)puVar7[2] == *(int *)((longlong)puVar6 + 0xc))))))) {
      uVar15 = *puVar7;
      plVar11 = (longlong *)*param_1;
      uVar9 = *(ulonglong *)param_1[1];
      if (uVar9 == 0) {
        uVar9 = *(ulonglong *)param_1[1];
      }
      local_78 = uVar9;
      if ((((uVar15 != 0) && (uVar9 != 0)) && (uVar15 != uVar9)) &&
         (plVar1 = (longlong *)*plVar11, (int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34))) {
        uVar3 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        plVar5 = plVar1 + 7;
        if ((longlong *)plVar1[8] != (longlong *)0x0) {
          plVar5 = (longlong *)plVar1[8];
        }
        iVar4 = *(int *)((longlong)plVar5 +
                        (ulonglong)((int)plVar1[9] - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
        if (iVar4 != -1) {
          do {
            if (*(ulonglong *)(*plVar1 + (longlong)iVar4 * 0x10) == uVar15) {
              if ((*(byte *)(plVar11 + 2) & 1) == 0) goto LAB_142821e13;
              if (DAT_14c951858 == 0) {
                local_70 = FUN_1449e2820;
                local_b0 = FUN_14081d0ea;
                local_b8 = FUN_14081d0ea;
                local_c0 = &local_70;
                local_c8 = &LAB_1468c5283;
                local_d0 = FUN_142809da0;
                local_d8 = L"Engine";
                local_e0 = 0x400000000;
                local_e8 = 0x10000000;
                local_f0 = 8;
                local_f8 = 0x50;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
              }
              if ((*(int *)(*(longlong *)(uVar15 + 0x10) + 0x38) < *(int *)(DAT_14c951858 + 0x38))
                 || (*(longlong *)
                      (*(longlong *)(*(longlong *)(uVar15 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30))
              goto LAB_142821ba3;
              goto LAB_142821e90;
            }
            iVar4 = *(int *)((longlong)iVar4 * 0x10 + *plVar1 + 8);
          } while (iVar4 != -1);
        }
      }
    }
    break;
  case 8:
    if ((longlong)(int)puVar6[1] != 0) {
      uVar15 = *puVar6;
      uVar9 = (longlong)(int)puVar6[1] * 0x20 + uVar15;
LAB_14282128f:
      if (((*(int *)(uVar15 + 0xc) != 0) && (uVar3 = *(uint *)(uVar15 + 8), -1 < (int)uVar3)) &&
         (((int)uVar3 < DAT_14c9647dc &&
          ((puVar6 = (ulonglong *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
           puVar6 != (ulonglong *)0x0 && ((int)puVar6[2] == *(int *)(uVar15 + 0xc))))))) {
        uVar14 = *puVar6;
        plVar11 = (longlong *)*param_1;
        uVar2 = *(ulonglong *)param_1[1];
        if (uVar2 == 0) {
          uVar2 = *(ulonglong *)param_1[1];
        }
        local_78 = uVar2;
        if ((((uVar14 != 0) && (uVar2 != 0)) && (uVar14 != uVar2)) &&
           (plVar1 = (longlong *)*plVar11, (int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34))) {
          uVar3 = ((uint)(uVar14 >> 0x14) & 0xffff ^ (uint)(uVar14 >> 4)) * -0x7a143595;
          uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
          plVar5 = plVar1 + 7;
          if ((longlong *)plVar1[8] != (longlong *)0x0) {
            plVar5 = (longlong *)plVar1[8];
          }
          iVar4 = *(int *)((longlong)plVar5 +
                          (ulonglong)((int)plVar1[9] - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
          if (iVar4 != -1) {
            do {
              if (*(ulonglong *)(*plVar1 + (longlong)iVar4 * 0x10) == uVar14) {
                if ((*(byte *)(plVar11 + 2) & 1) == 0) goto LAB_1428213e3;
                if (DAT_14c951858 == 0) {
                  local_70 = FUN_1449e2820;
                  local_b0 = FUN_14081d0ea;
                  local_b8 = FUN_14081d0ea;
                  local_c0 = &local_70;
                  local_c8 = &LAB_1468c5283;
                  local_d0 = FUN_142809da0;
                  local_d8 = L"Engine";
                  local_e0 = 0x400000000;
                  local_e8 = 0x10000000;
                  local_f0 = 8;
                  local_f8 = 0x50;
                  local_a0 = lVar19;
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                  lVar19 = local_a0;
                }
                if ((*(int *)(*(longlong *)(uVar14 + 0x10) + 0x38) < *(int *)(DAT_14c951858 + 0x38))
                   || (*(longlong *)
                        (*(longlong *)(*(longlong *)(uVar14 + 0x10) + 0x30) +
                        (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30))
                goto LAB_1428213c6;
                goto LAB_1428214d0;
              }
              iVar4 = *(int *)((longlong)iVar4 * 0x10 + *plVar1 + 8);
            } while (iVar4 != -1);
          }
        }
      }
      goto LAB_142821516;
    }
    break;
  case 9:
    puVar7 = (ulonglong *)*puVar6;
    puVar17 = (ulonglong *)(((longlong)puVar7 >> 0x18) + (longlong)puVar6);
    if (((ulonglong)puVar7 & 1) == 0) {
      puVar17 = puVar7;
    }
    if ((longlong)(int)puVar6[1] != 0) {
      puVar6 = puVar17 + (int)puVar6[1];
LAB_1428217cc:
      plVar11 = (longlong *)*param_1;
      uVar15 = *(ulonglong *)param_1[1];
      if (uVar15 == 0) {
        uVar15 = *(ulonglong *)param_1[1];
      }
      uVar9 = *puVar17;
      local_78 = uVar15;
      if ((((uVar9 != 0) && (uVar15 != 0)) && (uVar9 != uVar15)) &&
         (plVar1 = (longlong *)*plVar11, (int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34))) {
        uVar3 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        plVar5 = plVar1 + 7;
        if ((longlong *)plVar1[8] != (longlong *)0x0) {
          plVar5 = (longlong *)plVar1[8];
        }
        iVar4 = *(int *)((longlong)plVar5 +
                        (ulonglong)((int)plVar1[9] - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
        if (iVar4 != -1) {
          do {
            if (*(ulonglong *)(*plVar1 + (longlong)iVar4 * 0x10) == uVar9) {
              if ((*(byte *)(plVar11 + 2) & 1) == 0) goto LAB_1428218d8;
              if (DAT_14c951858 == 0) {
                local_70 = FUN_1449e2820;
                local_b0 = FUN_14081d0ea;
                local_b8 = FUN_14081d0ea;
                local_c0 = &local_70;
                local_c8 = &LAB_1468c5283;
                local_d0 = FUN_142809da0;
                local_d8 = L"Engine";
                local_e0 = 0x400000000;
                local_e8 = 0x10000000;
                local_f0 = 8;
                local_f8 = 0x50;
                local_a0 = lVar19;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                lVar19 = local_a0;
              }
              if ((*(int *)(*(longlong *)(uVar9 + 0x10) + 0x38) < *(int *)(DAT_14c951858 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(uVar9 + 0x10) + 0x30) +
                   (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30))
              goto LAB_1428218bb;
              goto LAB_1428219c5;
            }
            iVar4 = *(int *)((longlong)iVar4 * 0x10 + *plVar1 + 8);
          } while (iVar4 != -1);
        }
      }
      goto LAB_142821a0b;
    }
    break;
  case 10:
    uVar15 = *puVar6;
    uVar9 = ((longlong)uVar15 >> 0x18) + (longlong)puVar6;
    if ((uVar15 & 1) == 0) {
      uVar9 = uVar15;
    }
    uVar3 = *(uint *)((*(ulonglong *)(puVar12 + 4) & 0xfffffffffffffffe) - 8);
    uVar8 = (int)puVar6[1] * uVar3;
    puVar13 = puVar12 + 4;
    if (uVar8 != 0) {
      lVar16 = (*(ulonglong *)(puVar12 + 4) & 0xfffffffffffffffe) + local_88;
      uVar15 = 0;
      local_a0 = lVar19;
      local_98 = puVar12 + 4;
      do {
        FUN_14282083a(param_1,lVar16,uVar9 + uVar15);
        uVar15 = uVar15 + uVar3;
        puVar13 = local_98;
        lVar19 = local_a0;
      } while (uVar8 != uVar15);
    }
    break;
  case 0xb:
    uVar3 = *(uint *)((*(ulonglong *)(puVar12 + 4) & 0xfffffffffffffffe) - 8);
    uVar8 = *(byte *)((longlong)puVar6 + (ulonglong)uVar3) * uVar3;
    puVar13 = puVar12 + 4;
    if (uVar8 != 0) {
      lVar16 = (*(ulonglong *)(puVar12 + 4) & 0xfffffffffffffffe) + local_88;
      uVar15 = 0;
      local_a0 = lVar19;
      local_90 = param_3;
      do {
        FUN_14282083a(param_1,lVar16,(longlong)puVar6 + uVar15);
        uVar15 = uVar15 + uVar3;
        param_3 = local_90;
        lVar19 = local_a0;
      } while (uVar8 != uVar15);
    }
    break;
  case 0xc:
    (*(code *)**(undefined8 **)*puVar6)((undefined8 *)*puVar6,param_1[2]);
    plVar11 = (longlong *)*puVar6;
    if (*(char *)((longlong)plVar11 + 0x11) == '\x01') {
      if (((ulonglong)plVar11[1] < 9) && (*(byte *)(plVar11 + 2) < 4)) {
        puVar6 = puVar6 + 1;
      }
      else {
        puVar6 = (ulonglong *)puVar6[1];
      }
      (**(code **)(*plVar11 + 8))(plVar11,puVar6,param_1[2]);
    }
    break;
  case 0xd:
    (**(code **)(puVar12 + 4))(local_80,param_1[2]);
  case 0:
switchD_14282091e_caseD_0:
    if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  case 0xe:
    uVar15 = CONCAT71((int7)((ulonglong)
                             ((longlong)&switchD_14282091e::switchdataD_149eaa56c +
                             (longlong)(int)(&switchD_14282091e::switchdataD_149eaa56c)[uVar15]) >>
                            8),0xe);
    goto LAB_142821ee8;
  case 0xf:
    (**(code **)(puVar12 + 4))(puVar6,param_1[2]);
    puVar13 = puVar12 + 4;
    break;
  case 0x10:
    uVar15 = puVar6[1];
    plVar11 = (longlong *)*param_1;
    uVar9 = *(ulonglong *)param_1[1];
    if (uVar9 == 0) {
      uVar9 = *(ulonglong *)param_1[1];
    }
    local_78 = uVar9;
    if (((uVar15 != 0) && (uVar9 != 0)) &&
       ((uVar15 != uVar9 &&
        (plVar1 = (longlong *)*plVar11, (int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34))))) {
      uVar3 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      plVar5 = plVar1 + 7;
      if ((longlong *)plVar1[8] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar1[8];
      }
      iVar4 = *(int *)((longlong)plVar5 +
                      (ulonglong)((int)plVar1[9] - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
      if (iVar4 != -1) {
        do {
          if (*(ulonglong *)(*plVar1 + (longlong)iVar4 * 0x10) == uVar15) {
            if ((*(byte *)(plVar11 + 2) & 1) == 0) goto LAB_142821e13;
            if (DAT_14c951858 == 0) {
              local_70 = FUN_1449e2820;
              local_b0 = FUN_14081d0ea;
              local_b8 = FUN_14081d0ea;
              local_c0 = &local_70;
              local_c8 = &LAB_1468c5283;
              local_d0 = FUN_142809da0;
              local_d8 = L"Engine";
              local_e0 = 0x400000000;
              local_e8 = 0x10000000;
              local_f0 = 8;
              local_f8 = 0x50;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
            }
            if ((*(int *)(*(longlong *)(uVar15 + 0x10) + 0x38) < *(int *)(DAT_14c951858 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(uVar15 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30))
            goto LAB_142821acf;
            goto LAB_142821ddb;
          }
          iVar4 = *(int *)((longlong)iVar4 * 0x10 + *plVar1 + 8);
        } while (iVar4 != -1);
      }
    }
    break;
  case 0x11:
    if ((longlong)(int)puVar6[1] != 0) {
      uVar15 = *puVar6;
      uVar9 = (longlong)(int)puVar6[1] * 0x18 + uVar15;
LAB_142820952:
      uVar14 = *(ulonglong *)(uVar15 + 8);
      plVar11 = (longlong *)*param_1;
      uVar2 = *(ulonglong *)param_1[1];
      if (uVar2 == 0) {
        uVar2 = *(ulonglong *)param_1[1];
      }
      local_78 = uVar2;
      if ((((uVar14 != 0) && (uVar2 != 0)) && (uVar14 != uVar2)) &&
         (plVar1 = (longlong *)*plVar11, (int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34))) {
        uVar3 = ((uint)(uVar14 >> 0x14) & 0xffff ^ (uint)(uVar14 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        plVar5 = plVar1 + 7;
        if ((longlong *)plVar1[8] != (longlong *)0x0) {
          plVar5 = (longlong *)plVar1[8];
        }
        iVar4 = *(int *)((longlong)plVar5 +
                        (ulonglong)((int)plVar1[9] - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
        if (iVar4 != -1) {
          do {
            if (*(ulonglong *)(*plVar1 + (longlong)iVar4 * 0x10) == uVar14) {
              if ((*(byte *)(plVar11 + 2) & 1) == 0) goto LAB_142820a5e;
              if (DAT_14c951858 == 0) {
                local_70 = FUN_1449e2820;
                local_b0 = FUN_14081d0ea;
                local_b8 = FUN_14081d0ea;
                local_c0 = &local_70;
                local_c8 = &LAB_1468c5283;
                local_d0 = FUN_142809da0;
                local_d8 = L"Engine";
                local_e0 = 0x400000000;
                local_e8 = 0x10000000;
                local_f0 = 8;
                local_f8 = 0x50;
                local_a0 = lVar19;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                lVar19 = local_a0;
              }
              if ((*(int *)(*(longlong *)(uVar14 + 0x10) + 0x38) < *(int *)(DAT_14c951858 + 0x38))
                 || (*(longlong *)
                      (*(longlong *)(*(longlong *)(uVar14 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30))
              goto LAB_142820a41;
              goto LAB_142820b4b;
            }
            iVar4 = *(int *)((longlong)iVar4 * 0x10 + *plVar1 + 8);
          } while (iVar4 != -1);
        }
      }
      goto LAB_142820b91;
    }
  }
  goto LAB_142821e7b;
LAB_142820a41:
  do {
    uVar2 = *(ulonglong *)(uVar2 + 0x20);
  } while (uVar2 != uVar14 && uVar2 != 0);
  if (uVar2 != 0) goto LAB_142820b91;
  goto LAB_142820a5e;
LAB_142820b4b:
  uVar18 = uVar2;
  uVar2 = uVar18;
  if (*(ulonglong *)(uVar18 + 0x20) != 0) goto code_r0x000142820b5a;
  goto LAB_142820b83;
code_r0x000142820b5a:
  uVar2 = *(ulonglong *)(uVar18 + 0x20);
  if ((*(uint *)(uVar18 + 8) >> 0x1c & 1) == 0) goto LAB_142820b4b;
  local_98 = puVar12;
  uVar2 = FUN_142840154(uVar18);
  puVar12 = local_98;
LAB_142820b83:
  if (uVar2 == 0) {
    uVar2 = *(ulonglong *)(uVar18 + 0x20);
    goto LAB_142820b4b;
  }
  if (uVar2 == uVar14) goto LAB_142820b91;
LAB_142820a5e:
  FUN_1457b12ce(plVar11[1],&local_70,&local_78,0);
LAB_142820b91:
  uVar15 = uVar15 + 0x18;
  puVar13 = puVar12;
  if (uVar15 == uVar9) goto LAB_142821e7b;
  goto LAB_142820952;
LAB_142821acf:
  do {
    uVar9 = *(ulonglong *)(uVar9 + 0x20);
  } while (uVar9 != uVar15 && uVar9 != 0);
  goto LAB_142821ae3;
LAB_142821ddb:
  uVar14 = uVar9;
  uVar9 = uVar14;
  if (*(ulonglong *)(uVar14 + 0x20) != 0) goto code_r0x000142821dea;
  goto LAB_142821e09;
code_r0x000142821dea:
  uVar9 = *(ulonglong *)(uVar14 + 0x20);
  if ((*(uint *)(uVar14 + 8) >> 0x1c & 1) != 0) {
    uVar9 = FUN_142840154(uVar14);
LAB_142821e09:
    if (uVar9 == 0) {
      uVar9 = *(ulonglong *)(uVar14 + 0x20);
      goto LAB_142821ddb;
    }
    goto LAB_142821e0e;
  }
  goto LAB_142821ddb;
LAB_1428218bb:
  do {
    uVar15 = *(ulonglong *)(uVar15 + 0x20);
  } while (uVar15 != uVar9 && uVar15 != 0);
  if (uVar15 != 0) goto LAB_142821a0b;
  goto LAB_1428218d8;
LAB_1428219c5:
  uVar14 = uVar15;
  uVar15 = uVar14;
  if (*(ulonglong *)(uVar14 + 0x20) != 0) goto code_r0x0001428219d4;
  goto LAB_1428219fd;
code_r0x0001428219d4:
  uVar15 = *(ulonglong *)(uVar14 + 0x20);
  if ((*(uint *)(uVar14 + 8) >> 0x1c & 1) == 0) goto LAB_1428219c5;
  local_98 = puVar12;
  uVar15 = FUN_142840154(uVar14);
  puVar12 = local_98;
LAB_1428219fd:
  if (uVar15 == 0) {
    uVar15 = *(ulonglong *)(uVar14 + 0x20);
    goto LAB_1428219c5;
  }
  if (uVar15 == uVar9) goto LAB_142821a0b;
LAB_1428218d8:
  FUN_1457b12ce(plVar11[1],&local_70,&local_78,0);
LAB_142821a0b:
  puVar17 = puVar17 + 1;
  puVar13 = puVar12;
  if (puVar17 == puVar6) goto LAB_142821e7b;
  goto LAB_1428217cc;
LAB_1428213c6:
  do {
    uVar2 = *(ulonglong *)(uVar2 + 0x20);
  } while (uVar2 != uVar14 && uVar2 != 0);
  if (uVar2 != 0) goto LAB_142821516;
  goto LAB_1428213e3;
LAB_1428214d0:
  uVar18 = uVar2;
  uVar2 = uVar18;
  if (*(ulonglong *)(uVar18 + 0x20) != 0) goto code_r0x0001428214df;
  goto LAB_142821508;
code_r0x0001428214df:
  uVar2 = *(ulonglong *)(uVar18 + 0x20);
  if ((*(uint *)(uVar18 + 8) >> 0x1c & 1) == 0) goto LAB_1428214d0;
  local_98 = puVar12;
  uVar2 = FUN_142840154(uVar18);
  puVar12 = local_98;
LAB_142821508:
  if (uVar2 == 0) {
    uVar2 = *(ulonglong *)(uVar18 + 0x20);
    goto LAB_1428214d0;
  }
  if (uVar2 == uVar14) goto LAB_142821516;
LAB_1428213e3:
  FUN_1457b12ce(plVar11[1],&local_70,&local_78,0);
LAB_142821516:
  uVar15 = uVar15 + 0x20;
  puVar13 = puVar12;
  if (uVar15 == uVar9) goto LAB_142821e7b;
  goto LAB_14282128f;
LAB_142821ba3:
  do {
    uVar9 = *(ulonglong *)(uVar9 + 0x20);
  } while (uVar9 != uVar15 && uVar9 != 0);
LAB_142821ae3:
  if (uVar9 == 0) {
LAB_142821e13:
    FUN_1457b12ce(plVar11[1],&local_70,&local_78,0);
  }
  goto LAB_142821e7b;
LAB_142821e90:
  uVar14 = uVar9;
  uVar9 = uVar14;
  if (*(ulonglong *)(uVar14 + 0x20) != 0) goto code_r0x000142821e9f;
  goto LAB_142821ebe;
code_r0x000142821e9f:
  uVar9 = *(ulonglong *)(uVar14 + 0x20);
  if ((*(uint *)(uVar14 + 8) >> 0x1c & 1) == 0) goto LAB_142821e90;
  uVar9 = FUN_142840154(uVar14);
LAB_142821ebe:
  if (uVar9 == 0) {
    uVar9 = *(ulonglong *)(uVar14 + 0x20);
    goto LAB_142821e90;
  }
LAB_142821e0e:
  if (uVar9 == uVar15) goto LAB_142821e7b;
  goto LAB_142821e13;
LAB_142820dac:
  do {
    uVar15 = *(ulonglong *)(uVar15 + 0x20);
  } while (uVar15 != uVar9 && uVar15 != 0);
  if (uVar15 != 0) goto LAB_142820ed6;
  goto LAB_142820dca;
LAB_142820ea0:
  uVar14 = uVar15;
  uVar15 = uVar14;
  if (*(ulonglong *)(uVar14 + 0x20) != 0) goto code_r0x000142820eb0;
  goto LAB_142820ec8;
code_r0x000142820eb0:
  uVar15 = *(ulonglong *)(uVar14 + 0x20);
  if ((*(uint *)(uVar14 + 8) >> 0x1c & 1) == 0) goto LAB_142820ea0;
  uVar15 = FUN_142840154(uVar14);
LAB_142820ec8:
  if (uVar15 == 0) {
    uVar15 = *(ulonglong *)(uVar14 + 0x20);
    goto LAB_142820ea0;
  }
  if (uVar15 == uVar9) goto LAB_142820ed6;
LAB_142820dca:
  FUN_1457b12ce(plVar11[1],&local_70,&local_78,0);
LAB_142820ed6:
  puVar6 = puVar6 + uVar8;
  param_3 = local_90;
  lVar19 = local_a0;
  if (puVar6 == puVar7) goto LAB_142821e7b;
  goto LAB_142820cbd;
LAB_1428210c0:
  do {
    uVar15 = *(ulonglong *)(uVar15 + 0x20);
  } while (uVar15 != uVar9 && uVar15 != 0);
  if (uVar15 != 0) goto LAB_1428211ea;
  goto LAB_1428210dd;
LAB_1428211b4:
  uVar14 = uVar15;
  uVar15 = uVar14;
  if (*(ulonglong *)(uVar14 + 0x20) != 0) goto code_r0x0001428211c3;
  goto LAB_1428211dc;
code_r0x0001428211c3:
  uVar15 = *(ulonglong *)(uVar14 + 0x20);
  if ((*(uint *)(uVar14 + 8) >> 0x1c & 1) == 0) goto LAB_1428211b4;
  uVar15 = FUN_142840154(uVar14);
LAB_1428211dc:
  if (uVar15 == 0) {
    uVar15 = *(ulonglong *)(uVar14 + 0x20);
    goto LAB_1428211b4;
  }
  if (uVar15 == uVar9) goto LAB_1428211ea;
LAB_1428210dd:
  FUN_1457b12ce(plVar11[1],&local_70,&local_78,0);
LAB_1428211ea:
  puVar7 = puVar7 + 1;
  lVar19 = local_a0;
  if (puVar7 == puVar6) goto LAB_142821e7b;
  goto LAB_142820fd1;
LAB_142821b26:
  do {
    uVar15 = *(ulonglong *)(uVar15 + 0x20);
  } while (uVar15 != uVar9 && uVar15 != 0);
  if (uVar15 != 0) goto LAB_142821e7b;
  goto LAB_142821b43;
LAB_142821e3f:
  uVar14 = uVar15;
  uVar15 = uVar14;
  if (*(ulonglong *)(uVar14 + 0x20) != 0) goto code_r0x000142821e4e;
  goto LAB_142821e67;
code_r0x000142821e4e:
  uVar15 = *(ulonglong *)(uVar14 + 0x20);
  if ((*(uint *)(uVar14 + 8) >> 0x1c & 1) == 0) goto LAB_142821e3f;
  uVar15 = FUN_142840154(uVar14);
LAB_142821e67:
  if (uVar15 == 0) {
    uVar15 = *(ulonglong *)(uVar14 + 0x20);
    goto LAB_142821e3f;
  }
  if (uVar15 == uVar9) goto LAB_142821e7b;
LAB_142821b43:
  FUN_1457b12ce(plVar11[1],&local_70,&local_78,0);
LAB_142821e7b:
  lVar19 = lVar19 + 8;
  puVar12 = puVar13;
  if (lVar19 == 0x20) goto LAB_142821ec9;
  goto LAB_1428208f7;
LAB_142821ec9:
  puVar12 = puVar13 + 4;
  goto LAB_142820889;
}



// FUNCTION 142821f1b FUN_142821f1b body=46 status=ok
// SIG undefined FUN_142821f1b(void)

void FUN_142821f1b(undefined1 param_1)

{
  FUN_140033559("Runtime\\CoreUObject\\Public\\UObject/FastReferenceCollector.h",0x27c,
                L"Illegal GC struct member type %d at %d",param_1,0);
  return;
}



// FUNCTION 142821f4a FUN_142821f4a body=1157 status=ok
// SIG undefined FUN_142821f4a(void)

void FUN_142821f4a(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  LPCRITICAL_SECTION p_Var5;
  int *piVar6;
  ulonglong uVar7;
  DWORD DVar8;
  DWORD DVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  longlong *local_1c0;
  uint local_1b8;
  longlong local_1b0;
  undefined8 uStack_1a8;
  longlong local_198;
  undefined8 *local_190;
  undefined1 local_188;
  undefined1 local_180 [8];
  longlong local_178;
  undefined4 local_170;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  int local_6c;
  longlong local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_178;
  iVar11 = *param_2;
  local_190 = &local_a0;
  local_80 = 0;
  iVar15 = 0;
  local_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_74 = 0xffffffff00000080;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_188 = *(undefined1 *)((longlong)param_1 + 0x2c);
  local_198 = *param_1;
  local_1b0 = 0;
  uStack_1a8 = 0;
  iVar1 = (int)param_1[4];
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_14079e7a6(&local_1b0);
    iVar15 = (int)param_1[4];
  }
  uVar14 = iVar11 * iVar15;
  uVar16 = iVar15 + uVar14;
  if ((int)*(uint *)(param_1 + 5) <= (int)(iVar15 + uVar14)) {
    uVar16 = *(uint *)(param_1 + 5);
  }
  if ((int)uVar14 < (int)uVar16) {
    lVar13 = DAT_14c9647c8;
    do {
      uVar7 = uStack_1a8;
      lVar2 = *(longlong *)(lVar13 + (ulonglong)(uVar14 >> 0x10) * 8);
      uVar3 = *(ulonglong *)(lVar2 + (ulonglong)(uVar14 & 0xffff) * 0x18);
      if ((uVar3 != 0) &&
         ((*(uint *)(lVar2 + (ulonglong)(uVar14 & 0xffff) * 0x18 + 8) >> 0x1c & 1) == 0)) {
        plVar4 = (longlong *)param_1[1];
        if ((plVar4 != (longlong *)0x0) && ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34))) {
          uVar10 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
          uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
          plVar12 = plVar4 + 7;
          if ((longlong *)plVar4[8] != (longlong *)0x0) {
            plVar12 = (longlong *)plVar4[8];
          }
          iVar11 = *(int *)((longlong)plVar12 +
                           (ulonglong)((int)plVar4[9] - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
          if (iVar11 != -1) {
            do {
              if (*(ulonglong *)(*plVar4 + (longlong)iVar11 * 0x10) == uVar3) goto LAB_14282216b;
              iVar11 = *(int *)((longlong)iVar11 * 0x10 + *plVar4 + 8);
            } while (iVar11 != -1);
          }
        }
        plVar4 = (longlong *)*param_1;
        if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
          uVar10 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
          uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
          plVar12 = plVar4 + 7;
          if ((longlong *)plVar4[8] != (longlong *)0x0) {
            plVar12 = (longlong *)plVar4[8];
          }
          iVar11 = *(int *)((longlong)plVar12 +
                           (ulonglong)((int)plVar4[9] - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
          if (iVar11 != -1) {
            do {
              if (*(ulonglong *)(*plVar4 + (longlong)iVar11 * 0x10) == uVar3) goto LAB_14282216b;
              iVar11 = *(int *)((longlong)iVar11 * 0x10 + *plVar4 + 8);
            } while (iVar11 != -1);
          }
        }
        lVar13 = (longlong)(int)uStack_1a8;
        uVar10 = (int)uStack_1a8 + 1;
        uStack_1a8 = CONCAT44(uStack_1a8._4_4_,uVar10);
        if (uStack_1a8._4_4_ < uVar10) {
          FUN_1447f76d2(&local_1b0,uVar7 & 0xffffffff);
        }
        *(ulonglong *)(local_1b0 + lVar13 * 8) = uVar3;
        lVar13 = DAT_14c9647c8;
      }
LAB_14282216b:
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar16);
  }
  FUN_14002fb26(local_180);
  FUN_14079e744(&local_1b0);
  piVar6 = DAT_14c950c20;
  local_178 = local_1b0;
  local_170 = (int)uStack_1a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar11 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar11 != 2)) {
    if (iVar11 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_142822226;
    }
    p_Var5 = (LPCRITICAL_SECTION)(piVar6 + 4);
    while( true ) {
      if (0 < piVar6[1]) {
        (**(code **)(**(longlong **)(piVar6 + 0xe) + 0x20))
                  (*(longlong **)(piVar6 + 0xe),0xffffffff,0);
      }
      EnterCriticalSection(p_Var5);
      if (piVar6[1] == 0) break;
      LeaveCriticalSection(p_Var5);
    }
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
    LeaveCriticalSection(p_Var5);
  }
LAB_142822226:
  local_1c0 = &local_198;
  FUN_14281e97c(&local_1c0,local_180);
  piVar6 = DAT_14c950c20;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar11 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar11 != 2)) {
    if (iVar11 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14282227a;
    }
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
  }
LAB_14282227a:
  if ((int)uStack_98 != local_6c) {
    p_Var5 = (LPCRITICAL_SECTION)param_1[2];
    EnterCriticalSection(p_Var5);
    plVar4 = (longlong *)param_1[3];
    FUN_1468f14e6(&local_a0,&local_1c0);
    if ((longlong)(int)local_1b8 != 0) {
      iVar11 = (int)plVar4[1];
      *(uint *)(plVar4 + 1) = iVar11 + local_1b8;
      if ((uint)(*(int *)((longlong)plVar4 + 0xc) - iVar11) < local_1b8) {
        FUN_1447f76d2(plVar4,iVar11);
      }
      memmove((void *)((longlong)iVar11 * 8 + *plVar4),local_1c0,(longlong)(int)local_1b8 << 3);
      local_1b8 = 0;
    }
    if (local_1c0 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (p_Var5 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(p_Var5);
    }
  }
  FUN_140ea1d7a(local_180);
  if (local_1b0 != 0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  FUN_140603fbe(&local_a0);
  if ((local_48 ^ (ulonglong)&local_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1428223d0 FUN_1428223d0 body=2263 status=ok
// SIG undefined FUN_1428223d0(void)

void FUN_1428223d0(undefined8 *param_1,ulonglong *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  uint uVar7;
  longlong lVar8;
  ushort *puVar9;
  ushort *puVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ushort *puVar18;
  undefined1 auStack_118 [40];
  ushort *local_f0;
  ulonglong local_e8;
  ulonglong *local_e0;
  ulonglong *local_d8;
  ushort *local_d0;
  ulonglong *local_c8;
  ulonglong *local_c0;
  undefined8 local_b8;
  ulonglong *local_b0;
  ushort *local_a8;
  undefined4 *local_a0;
  ulonglong *local_98;
  undefined ***local_90;
  undefined **local_88;
  undefined8 *local_80;
  undefined4 *local_78;
  ulonglong *local_70;
  byte local_68 [4];
  uint local_64;
  byte local_60;
  uint local_5c;
  byte local_58;
  uint local_54;
  byte local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined2 *)(param_2 + 0xf) = 0x100;
  local_a0 = (undefined4 *)*param_1;
  local_90 = &local_88;
  local_80 = (undefined8 *)0x0;
  local_88 = &PTR_FUN_149eaa0f0;
  *param_2 = DAT_14c948580;
  uVar11 = param_2[8];
  local_e0 = param_2;
  local_98 = param_2;
  local_78 = local_a0;
  local_70 = param_2;
  if ((longlong)(int)uVar11 != 0) {
    uVar17 = param_2[7];
    lVar8 = 0;
    do {
      if (**(ulonglong **)(uVar17 + lVar8) != 0) {
        uVar14 = *local_98;
        if (*local_98 == 0) {
          uVar14 = DAT_14c948580;
        }
        if (**(ulonglong **)(uVar17 + lVar8) != uVar14) {
          FUN_1468f3fb0(*(undefined8 *)(local_a0 + 2),*local_a0);
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)uVar11 * 8 != lVar8);
  }
  local_d8 = (ulonglong *)local_e0[1];
  uVar11 = (ulonglong)(uint)local_e0[2];
  local_c8 = local_e0 + 3;
  do {
    if ((int)uVar11 != 0) {
      puVar6 = local_d8 + (int)uVar11;
      uVar15 = *(undefined8 *)(local_d8[1] + 0x10);
      puVar5 = local_d8;
      local_c0 = puVar6;
      do {
        puVar18 = (ushort *)*puVar5;
        uVar11 = *(ulonglong *)(puVar18 + 8);
        uVar17 = *(ulonglong *)(puVar18 + 0x10);
        uVar14 = *(ulonglong *)(uVar11 + 0x1e8);
        *local_98 = (ulonglong)puVar18;
        if (uVar11 != 0) {
          uVar13 = *local_98;
          if (*local_98 == 0) {
            uVar13 = DAT_14c948580;
          }
          if (uVar13 != uVar11) {
            FUN_1468f3fb0(*(undefined8 *)(local_a0 + 2),*local_a0);
          }
        }
        if (uVar17 != 0) {
          uVar11 = *local_98;
          if (*local_98 == 0) {
            uVar11 = DAT_14c948580;
          }
          if (uVar11 != uVar17) {
            FUN_1468f3fb0(*(undefined8 *)(local_a0 + 2),*local_a0,uVar17);
          }
        }
        if (1 < uVar14) {
          puVar9 = (ushort *)(uVar14 & 0xfffffffffffffffe);
          local_e8 = (ulonglong)((uint)uVar14 & 1);
          local_d0 = puVar18;
          local_b8 = uVar15;
          local_b0 = puVar5;
          do {
            local_68[0] = (byte)*puVar9 & 0x1f;
            local_64 = (uint)(*puVar9 >> 5);
            local_60 = (byte)puVar9[1] & 0x1f;
            local_5c = (uint)(puVar9[1] >> 5);
            local_58 = (byte)puVar9[2] & 0x1f;
            local_54 = (uint)(puVar9[2] >> 5);
            local_50 = (byte)puVar9[3] & 0x1f;
            local_4c = (uint)(puVar9[3] >> 5);
            lVar8 = 0;
            do {
              bVar1 = local_68[lVar8];
              if (0x11 < bVar1) {
                FUN_1400301a6(bVar1,local_d0);
                goto switchD_14282260e_caseD_0;
              }
              uVar2 = *(uint *)((longlong)&local_64 + lVar8);
              puVar6 = (ulonglong *)(puVar18 + (ulonglong)uVar2 * 4);
              puVar10 = puVar9;
              switch(bVar1) {
              case 0:
                goto switchD_14282260e_caseD_0;
              case 1:
                puVar18 = puVar18 + (ulonglong)(uVar2 * 0x800 + 0x800) * 4;
                break;
              case 2:
                uVar11 = *puVar6;
                goto LAB_142822924;
              case 3:
                uVar11 = puVar6[1];
                if ((longlong)(int)uVar11 != 0) {
                  uVar17 = *puVar6;
                  lVar16 = 0;
                  do {
                    if (*(ulonglong *)(uVar17 + lVar16) != 0) {
                      uVar14 = *local_98;
                      if (*local_98 == 0) {
                        uVar14 = DAT_14c948580;
                      }
                      if (*(ulonglong *)(uVar17 + lVar16) != uVar14) {
                        FUN_1468f3fb0(*(undefined8 *)(local_a0 + 2),*local_a0);
                      }
                    }
                    lVar16 = lVar16 + 8;
                  } while ((longlong)(int)uVar11 * 8 != lVar16);
                }
                break;
              case 4:
                uVar2 = *(uint *)((*(ulonglong *)(puVar9 + 4) & 0xfffffffffffffffe) - 8);
                uVar12 = (int)puVar6[1] * uVar2;
                puVar10 = puVar9 + 4;
                if (uVar12 != 0) {
                  lVar16 = (*(ulonglong *)(puVar9 + 4) & 0xfffffffffffffffe) + local_e8;
                  uVar11 = *puVar6;
                  uVar17 = 0;
                  local_f0 = puVar9 + 4;
                  do {
                    FUN_142822ca8(&local_a0,lVar16,uVar11 + uVar17);
                    uVar17 = uVar17 + uVar2;
                    puVar10 = local_f0;
                  } while (uVar12 != uVar17);
                }
                break;
              case 5:
                uVar2 = *(uint *)(puVar9 + 4);
                uVar12 = uVar2 >> 0x10;
                uVar7 = (int)puVar6[1] * uVar12;
                puVar10 = puVar9 + 4;
                if (uVar7 != 0) {
                  uVar11 = *puVar6;
                  lVar16 = 0;
                  local_f0 = puVar18;
                  do {
                    uVar17 = *(ulonglong *)(((uVar2 & 0xffff) << 3) + uVar11 + lVar16);
                    if (uVar17 != 0) {
                      uVar14 = *local_98;
                      if (*local_98 == 0) {
                        uVar14 = DAT_14c948580;
                      }
                      if (uVar17 != uVar14) {
                        FUN_1468f3fb0(*(undefined8 *)(local_a0 + 2),*local_a0);
                      }
                    }
                    lVar16 = lVar16 + (ulonglong)(uVar12 << 3);
                    puVar18 = local_f0;
                  } while ((ulonglong)uVar7 << 3 != lVar16);
                }
                break;
              case 6:
                puVar10 = puVar9 + 4;
                uVar2 = (uint)puVar6[1];
                if ((0 < (int)uVar2) && (uVar2 != *(uint *)((longlong)puVar6 + 0x34))) {
                  uVar12 = *(uint *)((*(ulonglong *)(puVar9 + 4) & 0xfffffffffffffffe) - 8);
                  lVar16 = (*(ulonglong *)(puVar9 + 4) & 0xfffffffffffffffe) + local_e8;
                  uVar11 = *puVar6;
                  uVar7 = 0;
                  local_f0 = puVar18;
                  local_a8 = puVar10;
                  do {
                    puVar5 = (ulonglong *)puVar6[4];
                    if ((ulonglong *)puVar6[4] == (ulonglong *)0x0) {
                      puVar5 = puVar6 + 2;
                    }
                    if ((*(uint *)((longlong)puVar5 + (ulonglong)(uVar7 >> 5) * 4) >> (uVar7 & 0x1f)
                        & 1) != 0) {
                      FUN_142822ca8(&local_a0,lVar16,uVar11);
                    }
                    uVar7 = uVar7 + 1;
                    uVar11 = uVar11 + uVar12;
                    puVar10 = local_a8;
                    puVar18 = local_f0;
                  } while (uVar2 != uVar7);
                }
                break;
              case 7:
                if (((*(int *)((longlong)puVar6 + 0xc) != 0) &&
                    (uVar2 = (uint)puVar6[1], -1 < (int)uVar2)) &&
                   (((int)uVar2 < DAT_14c9647dc &&
                    ((puVar5 = (ulonglong *)
                               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                     puVar5 != (ulonglong *)0x0 &&
                     ((int)puVar5[2] == *(int *)((longlong)puVar6 + 0xc))))))) {
                  uVar11 = *puVar5;
                  goto LAB_142822924;
                }
                break;
              case 8:
                uVar11 = puVar6[1];
                if ((longlong)(int)uVar11 != 0) {
                  uVar17 = *puVar6;
                  lVar16 = 0;
                  do {
                    iVar3 = *(int *)(uVar17 + 0xc + lVar16);
                    if (((((iVar3 != 0) && (uVar2 = *(uint *)(uVar17 + 8 + lVar16), -1 < (int)uVar2)
                          ) && ((int)uVar2 < DAT_14c9647dc)) &&
                        ((puVar6 = (ulonglong *)
                                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                         puVar6 != (ulonglong *)0x0 && ((int)puVar6[2] == iVar3)))) &&
                       (*puVar6 != 0)) {
                      uVar14 = *local_98;
                      if (*local_98 == 0) {
                        uVar14 = DAT_14c948580;
                      }
                      if (*puVar6 != uVar14) {
                        FUN_1468f3fb0(*(undefined8 *)(local_a0 + 2),*local_a0);
                      }
                    }
                    lVar16 = lVar16 + 0x20;
                  } while ((longlong)(int)uVar11 * 0x20 != lVar16);
                }
                break;
              case 9:
                uVar11 = *puVar6;
                uVar17 = ((longlong)uVar11 >> 0x18) + (longlong)puVar6;
                if ((uVar11 & 1) == 0) {
                  uVar17 = uVar11;
                }
                uVar11 = puVar6[1];
                if ((longlong)(int)uVar11 != 0) {
                  lVar16 = 0;
                  do {
                    if (*(ulonglong *)(uVar17 + lVar16) != 0) {
                      uVar14 = *local_98;
                      if (*local_98 == 0) {
                        uVar14 = DAT_14c948580;
                      }
                      if (*(ulonglong *)(uVar17 + lVar16) != uVar14) {
                        FUN_1468f3fb0(*(undefined8 *)(local_a0 + 2),*local_a0);
                      }
                    }
                    lVar16 = lVar16 + 8;
                  } while ((longlong)(int)uVar11 * 8 != lVar16);
                }
                break;
              case 10:
                uVar11 = *puVar6;
                uVar17 = ((longlong)uVar11 >> 0x18) + (longlong)puVar6;
                if ((uVar11 & 1) == 0) {
                  uVar17 = uVar11;
                }
                uVar2 = *(uint *)((*(ulonglong *)(puVar9 + 4) & 0xfffffffffffffffe) - 8);
                uVar12 = (int)puVar6[1] * uVar2;
                puVar10 = puVar9 + 4;
                if (uVar12 != 0) {
                  lVar16 = (*(ulonglong *)(puVar9 + 4) & 0xfffffffffffffffe) + local_e8;
                  uVar11 = 0;
                  local_f0 = puVar9 + 4;
                  do {
                    FUN_142822ca8(&local_a0,lVar16,uVar17 + uVar11);
                    uVar11 = uVar11 + uVar2;
                    puVar10 = local_f0;
                  } while (uVar12 != uVar11);
                }
                break;
              case 0xb:
                uVar2 = *(uint *)((*(ulonglong *)(puVar9 + 4) & 0xfffffffffffffffe) - 8);
                uVar12 = *(byte *)((longlong)puVar6 + (ulonglong)uVar2) * uVar2;
                puVar10 = puVar9 + 4;
                if (uVar12 != 0) {
                  lVar16 = (*(ulonglong *)(puVar9 + 4) & 0xfffffffffffffffe) + local_e8;
                  uVar11 = 0;
                  local_f0 = puVar9 + 4;
                  do {
                    FUN_142822ca8(&local_a0,lVar16,(longlong)puVar6 + uVar11);
                    uVar11 = uVar11 + uVar2;
                    puVar10 = local_f0;
                  } while (uVar12 != uVar11);
                }
                break;
              case 0xc:
                (*(code *)**(undefined8 **)*puVar6)((undefined8 *)*puVar6,local_90);
                plVar4 = (longlong *)*puVar6;
                if (*(char *)((longlong)plVar4 + 0x11) == '\x01') {
                  if (((ulonglong)plVar4[1] < 9) && (*(byte *)(plVar4 + 2) < 4)) {
                    puVar6 = puVar6 + 1;
                  }
                  else {
                    puVar6 = (ulonglong *)puVar6[1];
                  }
                  (**(code **)(*plVar4 + 8))(plVar4,puVar6,local_90);
                }
                break;
              case 0xd:
                (**(code **)(puVar9 + 4))(local_d0,local_90);
                goto switchD_14282260e_caseD_0;
              case 0xe:
                (*(code *)(&DAT_14c950070)[(int)uVar2])(local_d0,local_90);
switchD_14282260e_caseD_0:
                puVar6 = local_c0;
                puVar5 = local_b0;
                goto LAB_142822b7c;
              case 0xf:
                (**(code **)(puVar9 + 4))(puVar6,local_90);
                puVar10 = puVar9 + 4;
                break;
              case 0x10:
                uVar11 = puVar6[1];
LAB_142822924:
                if (uVar11 != 0) {
                  uVar17 = *local_98;
                  if (*local_98 == 0) {
                    uVar17 = DAT_14c948580;
                  }
                  if (uVar11 != uVar17) {
                    FUN_1468f3fb0(*(undefined8 *)(local_a0 + 2),*local_a0);
                  }
                }
                break;
              case 0x11:
                uVar11 = puVar6[1];
                if ((longlong)(int)uVar11 != 0) {
                  uVar17 = *puVar6;
                  lVar16 = 0;
                  do {
                    uVar14 = *(ulonglong *)(uVar17 + 8 + lVar16);
                    if (uVar14 != 0) {
                      uVar13 = *local_98;
                      if (*local_98 == 0) {
                        uVar13 = DAT_14c948580;
                      }
                      if (uVar14 != uVar13) {
                        FUN_1468f3fb0(*(undefined8 *)(local_a0 + 2),*local_a0);
                      }
                    }
                    lVar16 = lVar16 + 0x18;
                  } while ((longlong)(int)uVar11 * 0x18 != lVar16);
                }
              }
              lVar8 = lVar8 + 8;
              puVar9 = puVar10;
            } while (lVar8 != 0x20);
            puVar9 = puVar10 + 4;
          } while( true );
        }
LAB_142822b7c:
        uVar15 = *(undefined8 *)(puVar5[2] + 0x10);
        puVar5 = puVar5 + 1;
      } while (puVar5 != puVar6);
    }
    puVar6 = local_e0;
    if (local_d8 != (ulonglong *)local_e0[1]) {
      FUN_1427e285c(local_c8);
    }
    puVar5 = (ulonglong *)puVar6[5];
    if (puVar5 == (ulonglong *)0x0) {
      uVar11 = (puVar6[3] - puVar6[4]) - 8 >> 3;
      if (((int)uVar11 == 0) ||
         (puVar5 = (ulonglong *)FUN_141716000(local_c8), puVar5 == (ulonglong *)0x0)) {
        local_88 = &PTR_LAB_149eb0140;
        if (local_80 != (undefined8 *)0x0) {
          (**(code **)*local_80)(local_80,1);
        }
        if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      }
    }
    else {
      puVar6[5] = *puVar5;
      uVar11 = 0x1ef;
    }
    local_d8 = puVar5 + 1;
  } while( true );
}



// FUNCTION 142822ca8 FUN_142822ca8 body=1545 status=ok
// SIG undefined FUN_142822ca8(void)

void FUN_142822ca8(undefined8 *param_1,ulonglong param_2,ushort *param_3)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ushort *puVar11;
  ushort *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_b8 [40];
  ushort *local_90;
  ulonglong local_88;
  undefined8 *local_80;
  ushort *local_78;
  ushort *local_70;
  byte local_68 [4];
  uint local_64;
  byte local_60;
  uint local_5c;
  byte local_58;
  uint local_54;
  byte local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar11 = (ushort *)(param_2 & 0xfffffffffffffffe);
  local_88 = (ulonglong)((uint)param_2 & 1);
  local_80 = param_1;
  local_78 = param_3;
  do {
    local_68[0] = (byte)*puVar11 & 0x1f;
    local_64 = (uint)(*puVar11 >> 5);
    local_60 = (byte)puVar11[1] & 0x1f;
    local_5c = (uint)(puVar11[1] >> 5);
    local_58 = (byte)puVar11[2] & 0x1f;
    local_54 = (uint)(puVar11[2] >> 5);
    local_50 = (byte)puVar11[3] & 0x1f;
    local_4c = (uint)(puVar11[3] >> 5);
    lVar7 = 0;
    do {
      if (0x11 < local_68[lVar7]) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
      }
      puVar4 = (ulonglong *)(param_3 + (ulonglong)*(uint *)((longlong)&local_64 + lVar7) * 4);
      puVar12 = puVar11;
      switch(local_68[lVar7]) {
      case 0:
        if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      case 1:
        param_3 = param_3 + (ulonglong)(*(uint *)((longlong)&local_64 + lVar7) * 0x800 + 0x800) * 4;
        break;
      case 2:
        uVar13 = *puVar4;
        goto LAB_14282305a;
      case 3:
        uVar13 = puVar4[1];
        if ((longlong)(int)uVar13 != 0) {
          uVar14 = *puVar4;
          lVar15 = 0;
          do {
            if (*(ulonglong *)(uVar14 + lVar15) != 0) {
              uVar10 = *(ulonglong *)param_1[1];
              if (*(ulonglong *)param_1[1] == 0) {
                uVar10 = DAT_14c948580;
              }
              if (*(ulonglong *)(uVar14 + lVar15) != uVar10) {
                FUN_1468f3fb0(*(undefined8 *)((undefined4 *)*param_1 + 2),*(undefined4 *)*param_1);
              }
            }
            lVar15 = lVar15 + 8;
          } while ((longlong)(int)uVar13 * 8 != lVar15);
        }
        break;
      case 4:
        uVar1 = *(uint *)((*(ulonglong *)(puVar11 + 4) & 0xfffffffffffffffe) - 8);
        uVar6 = (int)puVar4[1] * uVar1;
        if (uVar6 == 0) {
LAB_142822fbb:
          puVar12 = puVar11 + 4;
        }
        else {
          lVar15 = (*(ulonglong *)(puVar11 + 4) & 0xfffffffffffffffe) + local_88;
          uVar13 = *puVar4;
          uVar14 = 0;
          local_90 = puVar11 + 4;
          do {
            FUN_142822ca8(param_1,lVar15,uVar13 + uVar14);
            uVar14 = uVar14 + uVar1;
            puVar12 = local_90;
          } while (uVar6 != uVar14);
        }
        break;
      case 5:
        uVar1 = *(uint *)(puVar11 + 4);
        uVar6 = uVar1 >> 0x10;
        uVar8 = (int)puVar4[1] * uVar6;
        puVar12 = puVar11 + 4;
        if (uVar8 != 0) {
          uVar13 = *puVar4;
          lVar15 = 0;
          do {
            uVar14 = *(ulonglong *)(((uVar1 & 0xffff) << 3) + uVar13 + lVar15);
            if (uVar14 != 0) {
              uVar10 = *(ulonglong *)param_1[1];
              if (*(ulonglong *)param_1[1] == 0) {
                uVar10 = DAT_14c948580;
              }
              if (uVar14 != uVar10) {
                FUN_1468f3fb0(*(undefined8 *)((undefined4 *)*param_1 + 2),*(undefined4 *)*param_1);
              }
            }
            lVar15 = lVar15 + (ulonglong)(uVar6 << 3);
          } while ((ulonglong)uVar8 << 3 != lVar15);
LAB_142823227:
          puVar12 = puVar11 + 4;
        }
        break;
      case 6:
        uVar1 = (uint)puVar4[1];
        if (((int)uVar1 < 1) || (uVar1 == *(uint *)((longlong)puVar4 + 0x34))) goto LAB_142823227;
        uVar6 = *(uint *)((*(ulonglong *)(puVar11 + 4) & 0xfffffffffffffffe) - 8);
        lVar15 = (*(ulonglong *)(puVar11 + 4) & 0xfffffffffffffffe) + local_88;
        uVar13 = *puVar4;
        uVar8 = 0;
        local_90 = param_3;
        local_70 = puVar11 + 4;
        do {
          puVar5 = (ulonglong *)puVar4[4];
          if ((ulonglong *)puVar4[4] == (ulonglong *)0x0) {
            puVar5 = puVar4 + 2;
          }
          if ((*(uint *)((longlong)puVar5 + (ulonglong)(uVar8 >> 5) * 4) >> (uVar8 & 0x1f) & 1) != 0
             ) {
            FUN_142822ca8(local_80,lVar15,uVar13);
          }
          uVar8 = uVar8 + 1;
          uVar13 = uVar13 + uVar6;
          param_1 = local_80;
          param_3 = local_90;
          puVar12 = local_70;
        } while (uVar1 != uVar8);
        break;
      case 7:
        if (((*(int *)((longlong)puVar4 + 0xc) != 0) && (uVar1 = (uint)puVar4[1], -1 < (int)uVar1))
           && (((int)uVar1 < DAT_14c9647dc &&
               ((puVar5 = (ulonglong *)
                          ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                puVar5 != (ulonglong *)0x0 && ((int)puVar5[2] == *(int *)((longlong)puVar4 + 0xc))))
               ))) {
          uVar13 = *puVar5;
          goto LAB_14282305a;
        }
        break;
      case 8:
        uVar13 = puVar4[1];
        if ((longlong)(int)uVar13 != 0) {
          uVar14 = *puVar4;
          lVar15 = 0;
          do {
            iVar2 = *(int *)(uVar14 + 0xc + lVar15);
            if (((((iVar2 != 0) && (uVar1 = *(uint *)(uVar14 + 8 + lVar15), -1 < (int)uVar1)) &&
                 ((int)uVar1 < DAT_14c9647dc)) &&
                ((puVar4 = (ulonglong *)
                           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                 puVar4 != (ulonglong *)0x0 && ((int)puVar4[2] == iVar2)))) && (*puVar4 != 0)) {
              uVar10 = *(ulonglong *)param_1[1];
              if (*(ulonglong *)param_1[1] == 0) {
                uVar10 = DAT_14c948580;
              }
              if (*puVar4 != uVar10) {
                FUN_1468f3fb0(*(undefined8 *)((undefined4 *)*param_1 + 2),*(undefined4 *)*param_1);
              }
            }
            lVar15 = lVar15 + 0x20;
          } while ((longlong)(int)uVar13 * 0x20 != lVar15);
        }
        break;
      case 9:
        uVar13 = *puVar4;
        uVar14 = ((longlong)uVar13 >> 0x18) + (longlong)puVar4;
        if ((uVar13 & 1) == 0) {
          uVar14 = uVar13;
        }
        uVar13 = puVar4[1];
        if ((longlong)(int)uVar13 != 0) {
          lVar15 = 0;
          do {
            if (*(ulonglong *)(uVar14 + lVar15) != 0) {
              uVar10 = *(ulonglong *)param_1[1];
              if (*(ulonglong *)param_1[1] == 0) {
                uVar10 = DAT_14c948580;
              }
              if (*(ulonglong *)(uVar14 + lVar15) != uVar10) {
                FUN_1468f3fb0(*(undefined8 *)((undefined4 *)*param_1 + 2),*(undefined4 *)*param_1);
              }
            }
            lVar15 = lVar15 + 8;
          } while ((longlong)(int)uVar13 * 8 != lVar15);
        }
        break;
      case 10:
        uVar13 = *puVar4;
        uVar14 = ((longlong)uVar13 >> 0x18) + (longlong)puVar4;
        if ((uVar13 & 1) == 0) {
          uVar14 = uVar13;
        }
        uVar1 = *(uint *)((*(ulonglong *)(puVar11 + 4) & 0xfffffffffffffffe) - 8);
        uVar6 = (int)puVar4[1] * uVar1;
        if (uVar6 == 0) goto LAB_142822fbb;
        lVar15 = (*(ulonglong *)(puVar11 + 4) & 0xfffffffffffffffe) + local_88;
        uVar13 = 0;
        local_90 = puVar11 + 4;
        do {
          FUN_142822ca8(param_1,lVar15,uVar14 + uVar13);
          uVar13 = uVar13 + uVar1;
          puVar12 = local_90;
        } while (uVar6 != uVar13);
        break;
      case 0xb:
        uVar1 = *(uint *)((*(ulonglong *)(puVar11 + 4) & 0xfffffffffffffffe) - 8);
        uVar6 = *(byte *)((longlong)puVar4 + (ulonglong)uVar1) * uVar1;
        if (uVar6 == 0) goto LAB_142822fbb;
        lVar15 = (*(ulonglong *)(puVar11 + 4) & 0xfffffffffffffffe) + local_88;
        uVar13 = 0;
        local_90 = puVar11 + 4;
        do {
          FUN_142822ca8(param_1,lVar15,(longlong)puVar4 + uVar13);
          uVar13 = uVar13 + uVar1;
          puVar12 = local_90;
        } while (uVar6 != uVar13);
        break;
      case 0xc:
        (*(code *)**(undefined8 **)*puVar4)((undefined8 *)*puVar4,param_1[2]);
        plVar3 = (longlong *)*puVar4;
        if (*(char *)((longlong)plVar3 + 0x11) == '\x01') {
          if (((ulonglong)plVar3[1] < 9) && (*(byte *)(plVar3 + 2) < 4)) {
            puVar4 = puVar4 + 1;
          }
          else {
            puVar4 = (ulonglong *)puVar4[1];
          }
          (**(code **)(*plVar3 + 8))(plVar3,puVar4,param_1[2]);
        }
        break;
      case 0xd:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
      case 0xe:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
      case 0xf:
        (**(code **)(puVar11 + 4))(puVar4,param_1[2]);
        puVar12 = puVar11 + 4;
        break;
      case 0x10:
        uVar13 = puVar4[1];
LAB_14282305a:
        if (uVar13 != 0) {
          uVar14 = *(ulonglong *)param_1[1];
          if (*(ulonglong *)param_1[1] == 0) {
            uVar14 = DAT_14c948580;
          }
          if (uVar13 != uVar14) {
            FUN_1468f3fb0(*(undefined8 *)((undefined4 *)*param_1 + 2),*(undefined4 *)*param_1);
          }
        }
        break;
      case 0x11:
        uVar13 = puVar4[1];
        if ((longlong)(int)uVar13 != 0) {
          uVar14 = *puVar4;
          lVar15 = 0;
          do {
            uVar10 = *(ulonglong *)(uVar14 + 8 + lVar15);
            if (uVar10 != 0) {
              uVar9 = *(ulonglong *)param_1[1];
              if (*(ulonglong *)param_1[1] == 0) {
                uVar9 = DAT_14c948580;
              }
              if (uVar10 != uVar9) {
                FUN_1468f3fb0(*(undefined8 *)((undefined4 *)*param_1 + 2),*(undefined4 *)*param_1);
              }
            }
            lVar15 = lVar15 + 0x18;
          } while ((longlong)(int)uVar13 * 0x18 != lVar15);
        }
      }
      lVar7 = lVar7 + 8;
      puVar11 = puVar12;
    } while (lVar7 != 0x20);
    puVar11 = puVar12 + 4;
  } while( true );
}



// FUNCTION 1428232ec FUN_1428232ec body=2263 status=ok
// SIG undefined FUN_1428232ec(void)

void FUN_1428232ec(undefined8 *param_1,ulonglong *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  uint uVar7;
  longlong lVar8;
  ushort *puVar9;
  ushort *puVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ushort *puVar18;
  undefined1 auStack_118 [40];
  ushort *local_f0;
  ulonglong local_e8;
  ulonglong *local_e0;
  ulonglong *local_d8;
  ushort *local_d0;
  ulonglong *local_c8;
  ulonglong *local_c0;
  undefined8 local_b8;
  ulonglong *local_b0;
  ushort *local_a8;
  undefined4 *local_a0;
  ulonglong *local_98;
  undefined ***local_90;
  undefined **local_88;
  undefined8 *local_80;
  undefined4 *local_78;
  ulonglong *local_70;
  byte local_68 [4];
  uint local_64;
  byte local_60;
  uint local_5c;
  byte local_58;
  uint local_54;
  byte local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined2 *)(param_2 + 0xf) = 0x100;
  local_a0 = (undefined4 *)*param_1;
  local_90 = &local_88;
  local_80 = (undefined8 *)0x0;
  local_88 = &PTR_FUN_149eaa190;
  *param_2 = DAT_14c948580;
  uVar11 = param_2[8];
  local_e0 = param_2;
  local_98 = param_2;
  local_78 = local_a0;
  local_70 = param_2;
  if ((longlong)(int)uVar11 != 0) {
    uVar17 = param_2[7];
    lVar8 = 0;
    do {
      if (**(ulonglong **)(uVar17 + lVar8) != 0) {
        uVar14 = *local_98;
        if (*local_98 == 0) {
          uVar14 = DAT_14c948580;
        }
        if (**(ulonglong **)(uVar17 + lVar8) != uVar14) {
          FUN_1468f473e(*(undefined8 *)(local_a0 + 2),*local_a0);
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)uVar11 * 8 != lVar8);
  }
  local_d8 = (ulonglong *)local_e0[1];
  uVar11 = (ulonglong)(uint)local_e0[2];
  local_c8 = local_e0 + 3;
  do {
    if ((int)uVar11 != 0) {
      puVar6 = local_d8 + (int)uVar11;
      uVar15 = *(undefined8 *)(local_d8[1] + 0x10);
      puVar5 = local_d8;
      local_c0 = puVar6;
      do {
        puVar18 = (ushort *)*puVar5;
        uVar11 = *(ulonglong *)(puVar18 + 8);
        uVar17 = *(ulonglong *)(puVar18 + 0x10);
        uVar14 = *(ulonglong *)(uVar11 + 0x1e8);
        *local_98 = (ulonglong)puVar18;
        if (uVar11 != 0) {
          uVar13 = *local_98;
          if (*local_98 == 0) {
            uVar13 = DAT_14c948580;
          }
          if (uVar13 != uVar11) {
            FUN_1468f473e(*(undefined8 *)(local_a0 + 2),*local_a0);
          }
        }
        if (uVar17 != 0) {
          uVar11 = *local_98;
          if (*local_98 == 0) {
            uVar11 = DAT_14c948580;
          }
          if (uVar11 != uVar17) {
            FUN_1468f473e(*(undefined8 *)(local_a0 + 2),*local_a0,uVar17);
          }
        }
        if (1 < uVar14) {
          puVar9 = (ushort *)(uVar14 & 0xfffffffffffffffe);
          local_e8 = (ulonglong)((uint)uVar14 & 1);
          local_d0 = puVar18;
          local_b8 = uVar15;
          local_b0 = puVar5;
          do {
            local_68[0] = (byte)*puVar9 & 0x1f;
            local_64 = (uint)(*puVar9 >> 5);
            local_60 = (byte)puVar9[1] & 0x1f;
            local_5c = (uint)(puVar9[1] >> 5);
            local_58 = (byte)puVar9[2] & 0x1f;
            local_54 = (uint)(puVar9[2] >> 5);
            local_50 = (byte)puVar9[3] & 0x1f;
            local_4c = (uint)(puVar9[3] >> 5);
            lVar8 = 0;
            do {
              bVar1 = local_68[lVar8];
              if (0x11 < bVar1) {
                FUN_1400301a6(bVar1,local_d0);
                goto switchD_14282352a_caseD_0;
              }
              uVar2 = *(uint *)((longlong)&local_64 + lVar8);
              puVar6 = (ulonglong *)(puVar18 + (ulonglong)uVar2 * 4);
              puVar10 = puVar9;
              switch(bVar1) {
              case 0:
                goto switchD_14282352a_caseD_0;
              case 1:
                puVar18 = puVar18 + (ulonglong)(uVar2 * 0x800 + 0x800) * 4;
                break;
              case 2:
                uVar11 = *puVar6;
                goto LAB_142823840;
              case 3:
                uVar11 = puVar6[1];
                if ((longlong)(int)uVar11 != 0) {
                  uVar17 = *puVar6;
                  lVar16 = 0;
                  do {
                    if (*(ulonglong *)(uVar17 + lVar16) != 0) {
                      uVar14 = *local_98;
                      if (*local_98 == 0) {
                        uVar14 = DAT_14c948580;
                      }
                      if (*(ulonglong *)(uVar17 + lVar16) != uVar14) {
                        FUN_1468f473e(*(undefined8 *)(local_a0 + 2),*local_a0);
                      }
                    }
                    lVar16 = lVar16 + 8;
                  } while ((longlong)(int)uVar11 * 8 != lVar16);
                }
                break;
              case 4:
                uVar2 = *(uint *)((*(ulonglong *)(puVar9 + 4) & 0xfffffffffffffffe) - 8);
                uVar12 = (int)puVar6[1] * uVar2;
                puVar10 = puVar9 + 4;
                if (uVar12 != 0) {
                  lVar16 = (*(ulonglong *)(puVar9 + 4) & 0xfffffffffffffffe) + local_e8;
                  uVar11 = *puVar6;
                  uVar17 = 0;
                  local_f0 = puVar9 + 4;
                  do {
                    FUN_142823bc4(&local_a0,lVar16,uVar11 + uVar17);
                    uVar17 = uVar17 + uVar2;
                    puVar10 = local_f0;
                  } while (uVar12 != uVar17);
                }
                break;
              case 5:
                uVar2 = *(uint *)(puVar9 + 4);
                uVar12 = uVar2 >> 0x10;
                uVar7 = (int)puVar6[1] * uVar12;
                puVar10 = puVar9 + 4;
                if (uVar7 != 0) {
                  uVar11 = *puVar6;
                  lVar16 = 0;
                  local_f0 = puVar18;
                  do {
                    uVar17 = *(ulonglong *)(((uVar2 & 0xffff) << 3) + uVar11 + lVar16);
                    if (uVar17 != 0) {
                      uVar14 = *local_98;
                      if (*local_98 == 0) {
                        uVar14 = DAT_14c948580;
                      }
                      if (uVar17 != uVar14) {
                        FUN_1468f473e(*(undefined8 *)(local_a0 + 2),*local_a0);
                      }
                    }
                    lVar16 = lVar16 + (ulonglong)(uVar12 << 3);
                    puVar18 = local_f0;
                  } while ((ulonglong)uVar7 << 3 != lVar16);
                }
                break;
              case 6:
                puVar10 = puVar9 + 4;
                uVar2 = (uint)puVar6[1];
                if ((0 < (int)uVar2) && (uVar2 != *(uint *)((longlong)puVar6 + 0x34))) {
                  uVar12 = *(uint *)((*(ulonglong *)(puVar9 + 4) & 0xfffffffffffffffe) - 8);
                  lVar16 = (*(ulonglong *)(puVar9 + 4) & 0xfffffffffffffffe) + local_e8;
                  uVar11 = *puVar6;
                  uVar7 = 0;
                  local_f0 = puVar18;
                  local_a8 = puVar10;
                  do {
                    puVar5 = (ulonglong *)puVar6[4];
                    if ((ulonglong *)puVar6[4] == (ulonglong *)0x0) {
                      puVar5 = puVar6 + 2;
                    }
                    if ((*(uint *)((longlong)puVar5 + (ulonglong)(uVar7 >> 5) * 4) >> (uVar7 & 0x1f)
                        & 1) != 0) {
                      FUN_142823bc4(&local_a0,lVar16,uVar11);
                    }
                    uVar7 = uVar7 + 1;
                    uVar11 = uVar11 + uVar12;
                    puVar10 = local_a8;
                    puVar18 = local_f0;
                  } while (uVar2 != uVar7);
                }
                break;
              case 7:
                if (((*(int *)((longlong)puVar6 + 0xc) != 0) &&
                    (uVar2 = (uint)puVar6[1], -1 < (int)uVar2)) &&
                   (((int)uVar2 < DAT_14c9647dc &&
                    ((puVar5 = (ulonglong *)
                               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                     puVar5 != (ulonglong *)0x0 &&
                     ((int)puVar5[2] == *(int *)((longlong)puVar6 + 0xc))))))) {
                  uVar11 = *puVar5;
                  goto LAB_142823840;
                }
                break;
              case 8:
                uVar11 = puVar6[1];
                if ((longlong)(int)uVar11 != 0) {
                  uVar17 = *puVar6;
                  lVar16 = 0;
                  do {
                    iVar3 = *(int *)(uVar17 + 0xc + lVar16);
                    if (((((iVar3 != 0) && (uVar2 = *(uint *)(uVar17 + 8 + lVar16), -1 < (int)uVar2)
                          ) && ((int)uVar2 < DAT_14c9647dc)) &&
                        ((puVar6 = (ulonglong *)
                                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                         puVar6 != (ulonglong *)0x0 && ((int)puVar6[2] == iVar3)))) &&
                       (*puVar6 != 0)) {
                      uVar14 = *local_98;
                      if (*local_98 == 0) {
                        uVar14 = DAT_14c948580;
                      }
                      if (*puVar6 != uVar14) {
                        FUN_1468f473e(*(undefined8 *)(local_a0 + 2),*local_a0);
                      }
                    }
                    lVar16 = lVar16 + 0x20;
                  } while ((longlong)(int)uVar11 * 0x20 != lVar16);
                }
                break;
              case 9:
                uVar11 = *puVar6;
                uVar17 = ((longlong)uVar11 >> 0x18) + (longlong)puVar6;
                if ((uVar11 & 1) == 0) {
                  uVar17 = uVar11;
                }
                uVar11 = puVar6[1];
                if ((longlong)(int)uVar11 != 0) {
                  lVar16 = 0;
                  do {
                    if (*(ulonglong *)(uVar17 + lVar16) != 0) {
                      uVar14 = *local_98;
                      if (*local_98 == 0) {
                        uVar14 = DAT_14c948580;
                      }
                      if (*(ulonglong *)(uVar17 + lVar16) != uVar14) {
                        FUN_1468f473e(*(undefined8 *)(local_a0 + 2),*local_a0);
                      }
                    }
                    lVar16 = lVar16 + 8;
                  } while ((longlong)(int)uVar11 * 8 != lVar16);
                }
                break;
              case 10:
                uVar11 = *puVar6;
                uVar17 = ((longlong)uVar11 >> 0x18) + (longlong)puVar6;
                if ((uVar11 & 1) == 0) {
                  uVar17 = uVar11;
                }
                uVar2 = *(uint *)((*(ulonglong *)(puVar9 + 4) & 0xfffffffffffffffe) - 8);
                uVar12 = (int)puVar6[1] * uVar2;
                puVar10 = puVar9 + 4;
                if (uVar12 != 0) {
                  lVar16 = (*(ulonglong *)(puVar9 + 4) & 0xfffffffffffffffe) + local_e8;
                  uVar11 = 0;
                  local_f0 = puVar9 + 4;
                  do {
                    FUN_142823bc4(&local_a0,lVar16,uVar17 + uVar11);
                    uVar11 = uVar11 + uVar2;
                    puVar10 = local_f0;
                  } while (uVar12 != uVar11);
                }
                break;
              case 0xb:
                uVar2 = *(uint *)((*(ulonglong *)(puVar9 + 4) & 0xfffffffffffffffe) - 8);
                uVar12 = *(byte *)((longlong)puVar6 + (ulonglong)uVar2) * uVar2;
                puVar10 = puVar9 + 4;
                if (uVar12 != 0) {
                  lVar16 = (*(ulonglong *)(puVar9 + 4) & 0xfffffffffffffffe) + local_e8;
                  uVar11 = 0;
                  local_f0 = puVar9 + 4;
                  do {
                    FUN_142823bc4(&local_a0,lVar16,(longlong)puVar6 + uVar11);
                    uVar11 = uVar11 + uVar2;
                    puVar10 = local_f0;
                  } while (uVar12 != uVar11);
                }
                break;
              case 0xc:
                (*(code *)**(undefined8 **)*puVar6)((undefined8 *)*puVar6,local_90);
                plVar4 = (longlong *)*puVar6;
                if (*(char *)((longlong)plVar4 + 0x11) == '\x01') {
                  if (((ulonglong)plVar4[1] < 9) && (*(byte *)(plVar4 + 2) < 4)) {
                    puVar6 = puVar6 + 1;
                  }
                  else {
                    puVar6 = (ulonglong *)puVar6[1];
                  }
                  (**(code **)(*plVar4 + 8))(plVar4,puVar6,local_90);
                }
                break;
              case 0xd:
                (**(code **)(puVar9 + 4))(local_d0,local_90);
                goto switchD_14282352a_caseD_0;
              case 0xe:
                (*(code *)(&DAT_14c950070)[(int)uVar2])(local_d0,local_90);
switchD_14282352a_caseD_0:
                puVar6 = local_c0;
                puVar5 = local_b0;
                goto LAB_142823a98;
              case 0xf:
                (**(code **)(puVar9 + 4))(puVar6,local_90);
                puVar10 = puVar9 + 4;
                break;
              case 0x10:
                uVar11 = puVar6[1];
LAB_142823840:
                if (uVar11 != 0) {
                  uVar17 = *local_98;
                  if (*local_98 == 0) {
                    uVar17 = DAT_14c948580;
                  }
                  if (uVar11 != uVar17) {
                    FUN_1468f473e(*(undefined8 *)(local_a0 + 2),*local_a0);
                  }
                }
                break;
              case 0x11:
                uVar11 = puVar6[1];
                if ((longlong)(int)uVar11 != 0) {
                  uVar17 = *puVar6;
                  lVar16 = 0;
                  do {
                    uVar14 = *(ulonglong *)(uVar17 + 8 + lVar16);
                    if (uVar14 != 0) {
                      uVar13 = *local_98;
                      if (*local_98 == 0) {
                        uVar13 = DAT_14c948580;
                      }
                      if (uVar14 != uVar13) {
                        FUN_1468f473e(*(undefined8 *)(local_a0 + 2),*local_a0);
                      }
                    }
                    lVar16 = lVar16 + 0x18;
                  } while ((longlong)(int)uVar11 * 0x18 != lVar16);
                }
              }
              lVar8 = lVar8 + 8;
              puVar9 = puVar10;
            } while (lVar8 != 0x20);
            puVar9 = puVar10 + 4;
          } while( true );
        }
LAB_142823a98:
        uVar15 = *(undefined8 *)(puVar5[2] + 0x10);
        puVar5 = puVar5 + 1;
      } while (puVar5 != puVar6);
    }
    puVar6 = local_e0;
    if (local_d8 != (ulonglong *)local_e0[1]) {
      FUN_1427e285c(local_c8);
    }
    puVar5 = (ulonglong *)puVar6[5];
    if (puVar5 == (ulonglong *)0x0) {
      uVar11 = (puVar6[3] - puVar6[4]) - 8 >> 3;
      if (((int)uVar11 == 0) ||
         (puVar5 = (ulonglong *)FUN_141716000(local_c8), puVar5 == (ulonglong *)0x0)) {
        local_88 = &PTR_LAB_149eb0140;
        if (local_80 != (undefined8 *)0x0) {
          (**(code **)*local_80)(local_80,1);
        }
        if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      }
    }
    else {
      puVar6[5] = *puVar5;
      uVar11 = 0x1ef;
    }
    local_d8 = puVar5 + 1;
  } while( true );
}



// FUNCTION 142823bc4 FUN_142823bc4 body=1545 status=ok
// SIG undefined FUN_142823bc4(void)

void FUN_142823bc4(undefined8 *param_1,ulonglong param_2,ushort *param_3)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ushort *puVar11;
  ushort *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_b8 [40];
  ushort *local_90;
  ulonglong local_88;
  undefined8 *local_80;
  ushort *local_78;
  ushort *local_70;
  byte local_68 [4];
  uint local_64;
  byte local_60;
  uint local_5c;
  byte local_58;
  uint local_54;
  byte local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar11 = (ushort *)(param_2 & 0xfffffffffffffffe);
  local_88 = (ulonglong)((uint)param_2 & 1);
  local_80 = param_1;
  local_78 = param_3;
  do {
    local_68[0] = (byte)*puVar11 & 0x1f;
    local_64 = (uint)(*puVar11 >> 5);
    local_60 = (byte)puVar11[1] & 0x1f;
    local_5c = (uint)(puVar11[1] >> 5);
    local_58 = (byte)puVar11[2] & 0x1f;
    local_54 = (uint)(puVar11[2] >> 5);
    local_50 = (byte)puVar11[3] & 0x1f;
    local_4c = (uint)(puVar11[3] >> 5);
    lVar7 = 0;
    do {
      if (0x11 < local_68[lVar7]) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
      }
      puVar4 = (ulonglong *)(param_3 + (ulonglong)*(uint *)((longlong)&local_64 + lVar7) * 4);
      puVar12 = puVar11;
      switch(local_68[lVar7]) {
      case 0:
        if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      case 1:
        param_3 = param_3 + (ulonglong)(*(uint *)((longlong)&local_64 + lVar7) * 0x800 + 0x800) * 4;
        break;
      case 2:
        uVar13 = *puVar4;
        goto LAB_142823f76;
      case 3:
        uVar13 = puVar4[1];
        if ((longlong)(int)uVar13 != 0) {
          uVar14 = *puVar4;
          lVar15 = 0;
          do {
            if (*(ulonglong *)(uVar14 + lVar15) != 0) {
              uVar10 = *(ulonglong *)param_1[1];
              if (*(ulonglong *)param_1[1] == 0) {
                uVar10 = DAT_14c948580;
              }
              if (*(ulonglong *)(uVar14 + lVar15) != uVar10) {
                FUN_1468f473e(*(undefined8 *)((undefined4 *)*param_1 + 2),*(undefined4 *)*param_1);
              }
            }
            lVar15 = lVar15 + 8;
          } while ((longlong)(int)uVar13 * 8 != lVar15);
        }
        break;
      case 4:
        uVar1 = *(uint *)((*(ulonglong *)(puVar11 + 4) & 0xfffffffffffffffe) - 8);
        uVar6 = (int)puVar4[1] * uVar1;
        if (uVar6 == 0) {
LAB_142823ed7:
          puVar12 = puVar11 + 4;
        }
        else {
          lVar15 = (*(ulonglong *)(puVar11 + 4) & 0xfffffffffffffffe) + local_88;
          uVar13 = *puVar4;
          uVar14 = 0;
          local_90 = puVar11 + 4;
          do {
            FUN_142823bc4(param_1,lVar15,uVar13 + uVar14);
            uVar14 = uVar14 + uVar1;
            puVar12 = local_90;
          } while (uVar6 != uVar14);
        }
        break;
      case 5:
        uVar1 = *(uint *)(puVar11 + 4);
        uVar6 = uVar1 >> 0x10;
        uVar8 = (int)puVar4[1] * uVar6;
        puVar12 = puVar11 + 4;
        if (uVar8 != 0) {
          uVar13 = *puVar4;
          lVar15 = 0;
          do {
            uVar14 = *(ulonglong *)(((uVar1 & 0xffff) << 3) + uVar13 + lVar15);
            if (uVar14 != 0) {
              uVar10 = *(ulonglong *)param_1[1];
              if (*(ulonglong *)param_1[1] == 0) {
                uVar10 = DAT_14c948580;
              }
              if (uVar14 != uVar10) {
                FUN_1468f473e(*(undefined8 *)((undefined4 *)*param_1 + 2),*(undefined4 *)*param_1);
              }
            }
            lVar15 = lVar15 + (ulonglong)(uVar6 << 3);
          } while ((ulonglong)uVar8 << 3 != lVar15);
LAB_142824143:
          puVar12 = puVar11 + 4;
        }
        break;
      case 6:
        uVar1 = (uint)puVar4[1];
        if (((int)uVar1 < 1) || (uVar1 == *(uint *)((longlong)puVar4 + 0x34))) goto LAB_142824143;
        uVar6 = *(uint *)((*(ulonglong *)(puVar11 + 4) & 0xfffffffffffffffe) - 8);
        lVar15 = (*(ulonglong *)(puVar11 + 4) & 0xfffffffffffffffe) + local_88;
        uVar13 = *puVar4;
        uVar8 = 0;
        local_90 = param_3;
        local_70 = puVar11 + 4;
        do {
          puVar5 = (ulonglong *)puVar4[4];
          if ((ulonglong *)puVar4[4] == (ulonglong *)0x0) {
            puVar5 = puVar4 + 2;
          }
          if ((*(uint *)((longlong)puVar5 + (ulonglong)(uVar8 >> 5) * 4) >> (uVar8 & 0x1f) & 1) != 0
             ) {
            FUN_142823bc4(local_80,lVar15,uVar13);
          }
          uVar8 = uVar8 + 1;
          uVar13 = uVar13 + uVar6;
          param_1 = local_80;
          param_3 = local_90;
          puVar12 = local_70;
        } while (uVar1 != uVar8);
        break;
      case 7:
        if (((*(int *)((longlong)puVar4 + 0xc) != 0) && (uVar1 = (uint)puVar4[1], -1 < (int)uVar1))
           && (((int)uVar1 < DAT_14c9647dc &&
               ((puVar5 = (ulonglong *)
                          ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                puVar5 != (ulonglong *)0x0 && ((int)puVar5[2] == *(int *)((longlong)puVar4 + 0xc))))
               ))) {
          uVar13 = *puVar5;
          goto LAB_142823f76;
        }
        break;
      case 8:
        uVar13 = puVar4[1];
        if ((longlong)(int)uVar13 != 0) {
          uVar14 = *puVar4;
          lVar15 = 0;
          do {
            iVar2 = *(int *)(uVar14 + 0xc + lVar15);
            if (((((iVar2 != 0) && (uVar1 = *(uint *)(uVar14 + 8 + lVar15), -1 < (int)uVar1)) &&
                 ((int)uVar1 < DAT_14c9647dc)) &&
                ((puVar4 = (ulonglong *)
                           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                 puVar4 != (ulonglong *)0x0 && ((int)puVar4[2] == iVar2)))) && (*puVar4 != 0)) {
              uVar10 = *(ulonglong *)param_1[1];
              if (*(ulonglong *)param_1[1] == 0) {
                uVar10 = DAT_14c948580;
              }
              if (*puVar4 != uVar10) {
                FUN_1468f473e(*(undefined8 *)((undefined4 *)*param_1 + 2),*(undefined4 *)*param_1);
              }
            }
            lVar15 = lVar15 + 0x20;
          } while ((longlong)(int)uVar13 * 0x20 != lVar15);
        }
        break;
      case 9:
        uVar13 = *puVar4;
        uVar14 = ((longlong)uVar13 >> 0x18) + (longlong)puVar4;
        if ((uVar13 & 1) == 0) {
          uVar14 = uVar13;
        }
        uVar13 = puVar4[1];
        if ((longlong)(int)uVar13 != 0) {
          lVar15 = 0;
          do {
            if (*(ulonglong *)(uVar14 + lVar15) != 0) {
              uVar10 = *(ulonglong *)param_1[1];
              if (*(ulonglong *)param_1[1] == 0) {
                uVar10 = DAT_14c948580;
              }
              if (*(ulonglong *)(uVar14 + lVar15) != uVar10) {
                FUN_1468f473e(*(undefined8 *)((undefined4 *)*param_1 + 2),*(undefined4 *)*param_1);
              }
            }
            lVar15 = lVar15 + 8;
          } while ((longlong)(int)uVar13 * 8 != lVar15);
        }
        break;
      case 10:
        uVar13 = *puVar4;
        uVar14 = ((longlong)uVar13 >> 0x18) + (longlong)puVar4;
        if ((uVar13 & 1) == 0) {
          uVar14 = uVar13;
        }
        uVar1 = *(uint *)((*(ulonglong *)(puVar11 + 4) & 0xfffffffffffffffe) - 8);
        uVar6 = (int)puVar4[1] * uVar1;
        if (uVar6 == 0) goto LAB_142823ed7;
        lVar15 = (*(ulonglong *)(puVar11 + 4) & 0xfffffffffffffffe) + local_88;
        uVar13 = 0;
        local_90 = puVar11 + 4;
        do {
          FUN_142823bc4(param_1,lVar15,uVar14 + uVar13);
          uVar13 = uVar13 + uVar1;
          puVar12 = local_90;
        } while (uVar6 != uVar13);
        break;
      case 0xb:
        uVar1 = *(uint *)((*(ulonglong *)(puVar11 + 4) & 0xfffffffffffffffe) - 8);
        uVar6 = *(byte *)((longlong)puVar4 + (ulonglong)uVar1) * uVar1;
        if (uVar6 == 0) goto LAB_142823ed7;
        lVar15 = (*(ulonglong *)(puVar11 + 4) & 0xfffffffffffffffe) + local_88;
        uVar13 = 0;
        local_90 = puVar11 + 4;
        do {
          FUN_142823bc4(param_1,lVar15,(longlong)puVar4 + uVar13);
          uVar13 = uVar13 + uVar1;
          puVar12 = local_90;
        } while (uVar6 != uVar13);
        break;
      case 0xc:
        (*(code *)**(undefined8 **)*puVar4)((undefined8 *)*puVar4,param_1[2]);
        plVar3 = (longlong *)*puVar4;
        if (*(char *)((longlong)plVar3 + 0x11) == '\x01') {
          if (((ulonglong)plVar3[1] < 9) && (*(byte *)(plVar3 + 2) < 4)) {
            puVar4 = puVar4 + 1;
          }
          else {
            puVar4 = (ulonglong *)puVar4[1];
          }
          (**(code **)(*plVar3 + 8))(plVar3,puVar4,param_1[2]);
        }
        break;
      case 0xd:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
      case 0xe:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
      case 0xf:
        (**(code **)(puVar11 + 4))(puVar4,param_1[2]);
        puVar12 = puVar11 + 4;
        break;
      case 0x10:
        uVar13 = puVar4[1];
LAB_142823f76:
        if (uVar13 != 0) {
          uVar14 = *(ulonglong *)param_1[1];
          if (*(ulonglong *)param_1[1] == 0) {
            uVar14 = DAT_14c948580;
          }
          if (uVar13 != uVar14) {
            FUN_1468f473e(*(undefined8 *)((undefined4 *)*param_1 + 2),*(undefined4 *)*param_1);
          }
        }
        break;
      case 0x11:
        uVar13 = puVar4[1];
        if ((longlong)(int)uVar13 != 0) {
          uVar14 = *puVar4;
          lVar15 = 0;
          do {
            uVar10 = *(ulonglong *)(uVar14 + 8 + lVar15);
            if (uVar10 != 0) {
              uVar9 = *(ulonglong *)param_1[1];
              if (*(ulonglong *)param_1[1] == 0) {
                uVar9 = DAT_14c948580;
              }
              if (uVar10 != uVar9) {
                FUN_1468f473e(*(undefined8 *)((undefined4 *)*param_1 + 2),*(undefined4 *)*param_1);
              }
            }
            lVar15 = lVar15 + 0x18;
          } while ((longlong)(int)uVar13 * 0x18 != lVar15);
        }
      }
      lVar7 = lVar7 + 8;
      puVar11 = puVar12;
    } while (lVar7 != 0x20);
    puVar11 = puVar12 + 4;
  } while( true );
}



// FUNCTION 142824208 FUN_142824208 body=2281 status=ok
// SIG undefined FUN_142824208(void)

void FUN_142824208(longlong *param_1,ulonglong *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  uint uVar7;
  longlong lVar8;
  ushort *puVar9;
  ushort *puVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ushort *puVar18;
  undefined1 auStack_118 [40];
  ushort *local_f0;
  ulonglong local_e8;
  ulonglong *local_e0;
  ulonglong *local_d8;
  ushort *local_d0;
  ulonglong *local_c8;
  ulonglong *local_c0;
  undefined8 local_b8;
  ulonglong *local_b0;
  ushort *local_a8;
  longlong local_a0;
  ulonglong *local_98;
  undefined ***local_90;
  undefined **local_88;
  undefined8 *local_80;
  longlong local_78;
  ulonglong *local_70;
  byte local_68 [4];
  uint local_64;
  byte local_60;
  uint local_5c;
  byte local_58;
  uint local_54;
  byte local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined2 *)(param_2 + 0xf) = 0x100;
  local_a0 = *param_1;
  local_90 = &local_88;
  local_80 = (undefined8 *)0x0;
  local_88 = &PTR_FUN_149eaa230;
  *param_2 = DAT_14c948580;
  uVar11 = param_2[8];
  local_e0 = param_2;
  local_98 = param_2;
  local_78 = local_a0;
  local_70 = param_2;
  if ((longlong)(int)uVar11 != 0) {
    uVar17 = param_2[7];
    lVar8 = 0;
    do {
      uVar13 = **(ulonglong **)(uVar17 + lVar8);
      if (uVar13 != 0) {
        uVar14 = *local_98;
        if (*local_98 == 0) {
          uVar14 = DAT_14c948580;
        }
        if (uVar13 != uVar14) {
          FUN_1468f4fce(*(undefined8 *)(local_a0 + 8),uVar13,uVar14,0xc0000000);
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)uVar11 * 8 != lVar8);
  }
  local_d8 = (ulonglong *)local_e0[1];
  uVar11 = (ulonglong)(uint)local_e0[2];
  local_c8 = local_e0 + 3;
  do {
    if ((int)uVar11 != 0) {
      puVar6 = local_d8 + (int)uVar11;
      uVar15 = *(undefined8 *)(local_d8[1] + 0x10);
      puVar5 = local_d8;
      local_c0 = puVar6;
      do {
        puVar18 = (ushort *)*puVar5;
        uVar11 = *(ulonglong *)(puVar18 + 8);
        uVar17 = *(ulonglong *)(puVar18 + 0x10);
        uVar13 = *(ulonglong *)(uVar11 + 0x1e8);
        *local_98 = (ulonglong)puVar18;
        if (uVar11 != 0) {
          uVar14 = *local_98;
          if (*local_98 == 0) {
            uVar14 = DAT_14c948580;
          }
          if (uVar14 != uVar11) {
            FUN_1468f4fce(*(undefined8 *)(local_a0 + 8),uVar11,uVar14,0x40000000);
          }
        }
        if (uVar17 != 0) {
          uVar11 = *local_98;
          if (*local_98 == 0) {
            uVar11 = DAT_14c948580;
          }
          if (uVar11 != uVar17) {
            FUN_1468f4fce(*(undefined8 *)(local_a0 + 8),uVar17,uVar11,0x60000000);
          }
        }
        if (1 < uVar13) {
          puVar9 = (ushort *)(uVar13 & 0xfffffffffffffffe);
          local_e8 = (ulonglong)((uint)uVar13 & 1);
          local_d0 = puVar18;
          local_b8 = uVar15;
          local_b0 = puVar5;
          do {
            local_68[0] = (byte)*puVar9 & 0x1f;
            local_64 = (uint)(*puVar9 >> 5);
            local_60 = (byte)puVar9[1] & 0x1f;
            local_5c = (uint)(puVar9[1] >> 5);
            local_58 = (byte)puVar9[2] & 0x1f;
            local_54 = (uint)(puVar9[2] >> 5);
            local_50 = (byte)puVar9[3] & 0x1f;
            local_4c = (uint)(puVar9[3] >> 5);
            lVar8 = 0;
            do {
              bVar1 = local_68[lVar8];
              if (0x11 < bVar1) {
                FUN_1400301a6(bVar1,local_d0);
                goto switchD_14282444a_caseD_0;
              }
              uVar2 = *(uint *)((longlong)&local_64 + lVar8);
              puVar6 = (ulonglong *)(puVar18 + (ulonglong)uVar2 * 4);
              puVar10 = puVar9;
              switch(bVar1) {
              case 0:
                goto switchD_14282444a_caseD_0;
              case 1:
                puVar18 = puVar18 + (ulonglong)(uVar2 * 0x800 + 0x800) * 4;
                break;
              case 2:
                uVar11 = *puVar6;
                goto LAB_142824764;
              case 3:
                uVar11 = puVar6[1];
                if ((longlong)(int)uVar11 != 0) {
                  uVar17 = *puVar6;
                  lVar16 = 0;
                  do {
                    uVar13 = *(ulonglong *)(uVar17 + lVar16);
                    if (uVar13 != 0) {
                      uVar14 = *local_98;
                      if (*local_98 == 0) {
                        uVar14 = DAT_14c948580;
                      }
                      if (uVar13 != uVar14) {
                        FUN_1468f4fce(*(undefined8 *)(local_a0 + 8),uVar13,uVar14,0);
                      }
                    }
                    lVar16 = lVar16 + 8;
                  } while ((longlong)(int)uVar11 * 8 != lVar16);
                }
                break;
              case 4:
                uVar2 = *(uint *)((*(ulonglong *)(puVar9 + 4) & 0xfffffffffffffffe) - 8);
                uVar12 = (int)puVar6[1] * uVar2;
                puVar10 = puVar9 + 4;
                if (uVar12 != 0) {
                  lVar16 = (*(ulonglong *)(puVar9 + 4) & 0xfffffffffffffffe) + local_e8;
                  uVar11 = *puVar6;
                  uVar17 = 0;
                  local_f0 = puVar9 + 4;
                  do {
                    FUN_142824af2(&local_a0,lVar16,uVar11 + uVar17);
                    uVar17 = uVar17 + uVar2;
                    puVar10 = local_f0;
                  } while (uVar12 != uVar17);
                }
                break;
              case 5:
                uVar2 = *(uint *)(puVar9 + 4);
                uVar12 = uVar2 >> 0x10;
                uVar7 = (int)puVar6[1] * uVar12;
                puVar10 = puVar9 + 4;
                if (uVar7 != 0) {
                  uVar11 = *puVar6;
                  lVar16 = 0;
                  local_f0 = puVar18;
                  do {
                    uVar17 = *(ulonglong *)(((uVar2 & 0xffff) << 3) + uVar11 + lVar16);
                    if (uVar17 != 0) {
                      uVar13 = *local_98;
                      if (*local_98 == 0) {
                        uVar13 = DAT_14c948580;
                      }
                      if (uVar17 != uVar13) {
                        FUN_1468f4fce(*(undefined8 *)(local_a0 + 8),uVar17,uVar13,0);
                      }
                    }
                    lVar16 = lVar16 + (ulonglong)(uVar12 << 3);
                    puVar18 = local_f0;
                  } while ((ulonglong)uVar7 << 3 != lVar16);
                }
                break;
              case 6:
                puVar10 = puVar9 + 4;
                uVar2 = (uint)puVar6[1];
                if ((0 < (int)uVar2) && (uVar2 != *(uint *)((longlong)puVar6 + 0x34))) {
                  uVar12 = *(uint *)((*(ulonglong *)(puVar9 + 4) & 0xfffffffffffffffe) - 8);
                  lVar16 = (*(ulonglong *)(puVar9 + 4) & 0xfffffffffffffffe) + local_e8;
                  uVar11 = *puVar6;
                  uVar7 = 0;
                  local_f0 = puVar18;
                  local_a8 = puVar10;
                  do {
                    puVar5 = (ulonglong *)puVar6[4];
                    if ((ulonglong *)puVar6[4] == (ulonglong *)0x0) {
                      puVar5 = puVar6 + 2;
                    }
                    if ((*(uint *)((longlong)puVar5 + (ulonglong)(uVar7 >> 5) * 4) >> (uVar7 & 0x1f)
                        & 1) != 0) {
                      FUN_142824af2(&local_a0,lVar16,uVar11);
                    }
                    uVar7 = uVar7 + 1;
                    uVar11 = uVar11 + uVar12;
                    puVar10 = local_a8;
                    puVar18 = local_f0;
                  } while (uVar2 != uVar7);
                }
                break;
              case 7:
                if (((*(int *)((longlong)puVar6 + 0xc) != 0) &&
                    (uVar2 = (uint)puVar6[1], -1 < (int)uVar2)) &&
                   (((int)uVar2 < DAT_14c9647dc &&
                    ((puVar5 = (ulonglong *)
                               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                     puVar5 != (ulonglong *)0x0 &&
                     ((int)puVar5[2] == *(int *)((longlong)puVar6 + 0xc))))))) {
                  uVar11 = *puVar5;
                  goto LAB_142824764;
                }
                break;
              case 8:
                uVar11 = puVar6[1];
                if ((longlong)(int)uVar11 != 0) {
                  uVar17 = *puVar6;
                  lVar16 = 0;
                  do {
                    iVar3 = *(int *)(uVar17 + 0xc + lVar16);
                    if (((((iVar3 != 0) && (uVar2 = *(uint *)(uVar17 + 8 + lVar16), -1 < (int)uVar2)
                          ) && ((int)uVar2 < DAT_14c9647dc)) &&
                        ((puVar6 = (ulonglong *)
                                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                         puVar6 != (ulonglong *)0x0 && ((int)puVar6[2] == iVar3)))) &&
                       (uVar13 = *puVar6, uVar13 != 0)) {
                      uVar14 = *local_98;
                      if (*local_98 == 0) {
                        uVar14 = DAT_14c948580;
                      }
                      if (uVar13 != uVar14) {
                        FUN_1468f4fce(*(undefined8 *)(local_a0 + 8),uVar13,uVar14,0);
                      }
                    }
                    lVar16 = lVar16 + 0x20;
                  } while ((longlong)(int)uVar11 * 0x20 != lVar16);
                }
                break;
              case 9:
                uVar11 = *puVar6;
                uVar17 = ((longlong)uVar11 >> 0x18) + (longlong)puVar6;
                if ((uVar11 & 1) == 0) {
                  uVar17 = uVar11;
                }
                uVar11 = puVar6[1];
                if ((longlong)(int)uVar11 != 0) {
                  lVar16 = 0;
                  do {
                    uVar13 = *(ulonglong *)(uVar17 + lVar16);
                    if (uVar13 != 0) {
                      uVar14 = *local_98;
                      if (*local_98 == 0) {
                        uVar14 = DAT_14c948580;
                      }
                      if (uVar13 != uVar14) {
                        FUN_1468f4fce(*(undefined8 *)(local_a0 + 8),uVar13,uVar14,0);
                      }
                    }
                    lVar16 = lVar16 + 8;
                  } while ((longlong)(int)uVar11 * 8 != lVar16);
                }
                break;
              case 10:
                uVar11 = *puVar6;
                uVar17 = ((longlong)uVar11 >> 0x18) + (longlong)puVar6;
                if ((uVar11 & 1) == 0) {
                  uVar17 = uVar11;
                }
                uVar2 = *(uint *)((*(ulonglong *)(puVar9 + 4) & 0xfffffffffffffffe) - 8);
                uVar12 = (int)puVar6[1] * uVar2;
                puVar10 = puVar9 + 4;
                if (uVar12 != 0) {
                  lVar16 = (*(ulonglong *)(puVar9 + 4) & 0xfffffffffffffffe) + local_e8;
                  uVar11 = 0;
                  local_f0 = puVar9 + 4;
                  do {
                    FUN_142824af2(&local_a0,lVar16,uVar17 + uVar11);
                    uVar11 = uVar11 + uVar2;
                    puVar10 = local_f0;
                  } while (uVar12 != uVar11);
                }
                break;
              case 0xb:
                uVar2 = *(uint *)((*(ulonglong *)(puVar9 + 4) & 0xfffffffffffffffe) - 8);
                uVar12 = *(byte *)((longlong)puVar6 + (ulonglong)uVar2) * uVar2;
                puVar10 = puVar9 + 4;
                if (uVar12 != 0) {
                  lVar16 = (*(ulonglong *)(puVar9 + 4) & 0xfffffffffffffffe) + local_e8;
                  uVar11 = 0;
                  local_f0 = puVar9 + 4;
                  do {
                    FUN_142824af2(&local_a0,lVar16,(longlong)puVar6 + uVar11);
                    uVar11 = uVar11 + uVar2;
                    puVar10 = local_f0;
                  } while (uVar12 != uVar11);
                }
                break;
              case 0xc:
                (*(code *)**(undefined8 **)*puVar6)((undefined8 *)*puVar6,local_90);
                plVar4 = (longlong *)*puVar6;
                if (*(char *)((longlong)plVar4 + 0x11) == '\x01') {
                  if (((ulonglong)plVar4[1] < 9) && (*(byte *)(plVar4 + 2) < 4)) {
                    puVar6 = puVar6 + 1;
                  }
                  else {
                    puVar6 = (ulonglong *)puVar6[1];
                  }
                  (**(code **)(*plVar4 + 8))(plVar4,puVar6,local_90);
                }
                break;
              case 0xd:
                (**(code **)(puVar9 + 4))(local_d0,local_90);
                goto switchD_14282444a_caseD_0;
              case 0xe:
                (*(code *)(&DAT_14c950070)[(int)uVar2])(local_d0,local_90);
switchD_14282444a_caseD_0:
                puVar6 = local_c0;
                puVar5 = local_b0;
                goto LAB_1428249be;
              case 0xf:
                (**(code **)(puVar9 + 4))(puVar6,local_90);
                puVar10 = puVar9 + 4;
                break;
              case 0x10:
                uVar11 = puVar6[1];
LAB_142824764:
                if (uVar11 != 0) {
                  uVar17 = *local_98;
                  if (*local_98 == 0) {
                    uVar17 = DAT_14c948580;
                  }
                  if (uVar11 != uVar17) {
                    FUN_1468f4fce(*(undefined8 *)(local_a0 + 8),uVar11,uVar17,0);
                  }
                }
                break;
              case 0x11:
                uVar11 = puVar6[1];
                if ((longlong)(int)uVar11 != 0) {
                  uVar17 = *puVar6;
                  lVar16 = 0;
                  do {
                    uVar13 = *(ulonglong *)(uVar17 + 8 + lVar16);
                    if (uVar13 != 0) {
                      uVar14 = *local_98;
                      if (*local_98 == 0) {
                        uVar14 = DAT_14c948580;
                      }
                      if (uVar13 != uVar14) {
                        FUN_1468f4fce(*(undefined8 *)(local_a0 + 8),uVar13,uVar14,0);
                      }
                    }
                    lVar16 = lVar16 + 0x18;
                  } while ((longlong)(int)uVar11 * 0x18 != lVar16);
                }
              }
              lVar8 = lVar8 + 8;
              puVar9 = puVar10;
            } while (lVar8 != 0x20);
            puVar9 = puVar10 + 4;
          } while( true );
        }
LAB_1428249be:
        uVar15 = *(undefined8 *)(puVar5[2] + 0x10);
        puVar5 = puVar5 + 1;
      } while (puVar5 != puVar6);
    }
    puVar6 = local_e0;
    if (local_d8 != (ulonglong *)local_e0[1]) {
      FUN_1427e285c(local_c8);
    }
    puVar5 = (ulonglong *)puVar6[5];
    if (puVar5 == (ulonglong *)0x0) {
      uVar11 = (puVar6[3] - puVar6[4]) - 8 >> 3;
      if (((int)uVar11 == 0) ||
         (puVar5 = (ulonglong *)FUN_141716000(local_c8), puVar5 == (ulonglong *)0x0)) {
        local_88 = &PTR_LAB_149eb0140;
        if (local_80 != (undefined8 *)0x0) {
          (**(code **)*local_80)(local_80,1);
        }
        if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      }
    }
    else {
      puVar6[5] = *puVar5;
      uVar11 = 0x1ef;
    }
    local_d8 = puVar5 + 1;
  } while( true );
}



// FUNCTION 142824af2 FUN_142824af2 body=1551 status=ok
// SIG undefined FUN_142824af2(void)

void FUN_142824af2(longlong *param_1,ulonglong param_2,ushort *param_3)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ushort *puVar11;
  ushort *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_b8 [40];
  ushort *local_90;
  ulonglong local_88;
  longlong *local_80;
  ushort *local_78;
  ushort *local_70;
  byte local_68 [4];
  uint local_64;
  byte local_60;
  uint local_5c;
  byte local_58;
  uint local_54;
  byte local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar11 = (ushort *)(param_2 & 0xfffffffffffffffe);
  local_88 = (ulonglong)((uint)param_2 & 1);
  local_80 = param_1;
  local_78 = param_3;
  do {
    local_68[0] = (byte)*puVar11 & 0x1f;
    local_64 = (uint)(*puVar11 >> 5);
    local_60 = (byte)puVar11[1] & 0x1f;
    local_5c = (uint)(puVar11[1] >> 5);
    local_58 = (byte)puVar11[2] & 0x1f;
    local_54 = (uint)(puVar11[2] >> 5);
    local_50 = (byte)puVar11[3] & 0x1f;
    local_4c = (uint)(puVar11[3] >> 5);
    lVar7 = 0;
    do {
      if (0x11 < local_68[lVar7]) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
      }
      puVar4 = (ulonglong *)(param_3 + (ulonglong)*(uint *)((longlong)&local_64 + lVar7) * 4);
      puVar12 = puVar11;
      switch(local_68[lVar7]) {
      case 0:
        if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      case 1:
        param_3 = param_3 + (ulonglong)(*(uint *)((longlong)&local_64 + lVar7) * 0x800 + 0x800) * 4;
        break;
      case 2:
        uVar13 = *puVar4;
        goto LAB_142824ea8;
      case 3:
        uVar13 = puVar4[1];
        if ((longlong)(int)uVar13 != 0) {
          uVar14 = *puVar4;
          lVar15 = 0;
          do {
            uVar9 = *(ulonglong *)(uVar14 + lVar15);
            if (uVar9 != 0) {
              uVar10 = *(ulonglong *)param_1[1];
              if (*(ulonglong *)param_1[1] == 0) {
                uVar10 = DAT_14c948580;
              }
              if (uVar9 != uVar10) {
                FUN_1468f4fce(*(undefined8 *)(*param_1 + 8),uVar9,uVar10,0);
              }
            }
            lVar15 = lVar15 + 8;
          } while ((longlong)(int)uVar13 * 8 != lVar15);
        }
        break;
      case 4:
        uVar1 = *(uint *)((*(ulonglong *)(puVar11 + 4) & 0xfffffffffffffffe) - 8);
        uVar6 = (int)puVar4[1] * uVar1;
        if (uVar6 == 0) {
LAB_142824e08:
          puVar12 = puVar11 + 4;
        }
        else {
          lVar15 = (*(ulonglong *)(puVar11 + 4) & 0xfffffffffffffffe) + local_88;
          uVar13 = *puVar4;
          uVar14 = 0;
          local_90 = puVar11 + 4;
          do {
            FUN_142824af2(param_1,lVar15,uVar13 + uVar14);
            uVar14 = uVar14 + uVar1;
            puVar12 = local_90;
          } while (uVar6 != uVar14);
        }
        break;
      case 5:
        uVar1 = *(uint *)(puVar11 + 4);
        uVar6 = uVar1 >> 0x10;
        uVar8 = (int)puVar4[1] * uVar6;
        puVar12 = puVar11 + 4;
        if (uVar8 != 0) {
          uVar13 = *puVar4;
          lVar15 = 0;
          do {
            uVar14 = *(ulonglong *)(((uVar1 & 0xffff) << 3) + uVar13 + lVar15);
            if (uVar14 != 0) {
              uVar9 = *(ulonglong *)param_1[1];
              if (*(ulonglong *)param_1[1] == 0) {
                uVar9 = DAT_14c948580;
              }
              if (uVar14 != uVar9) {
                FUN_1468f4fce(*(undefined8 *)(*param_1 + 8),uVar14,uVar9,0);
              }
            }
            lVar15 = lVar15 + (ulonglong)(uVar6 << 3);
          } while ((ulonglong)uVar8 << 3 != lVar15);
LAB_142825077:
          puVar12 = puVar11 + 4;
        }
        break;
      case 6:
        uVar1 = (uint)puVar4[1];
        if (((int)uVar1 < 1) || (uVar1 == *(uint *)((longlong)puVar4 + 0x34))) goto LAB_142825077;
        uVar6 = *(uint *)((*(ulonglong *)(puVar11 + 4) & 0xfffffffffffffffe) - 8);
        lVar15 = (*(ulonglong *)(puVar11 + 4) & 0xfffffffffffffffe) + local_88;
        uVar13 = *puVar4;
        uVar8 = 0;
        local_90 = param_3;
        local_70 = puVar11 + 4;
        do {
          puVar5 = (ulonglong *)puVar4[4];
          if ((ulonglong *)puVar4[4] == (ulonglong *)0x0) {
            puVar5 = puVar4 + 2;
          }
          if ((*(uint *)((longlong)puVar5 + (ulonglong)(uVar8 >> 5) * 4) >> (uVar8 & 0x1f) & 1) != 0
             ) {
            FUN_142824af2(local_80,lVar15,uVar13);
          }
          uVar8 = uVar8 + 1;
          uVar13 = uVar13 + uVar6;
          param_1 = local_80;
          param_3 = local_90;
          puVar12 = local_70;
        } while (uVar1 != uVar8);
        break;
      case 7:
        if (((*(int *)((longlong)puVar4 + 0xc) != 0) && (uVar1 = (uint)puVar4[1], -1 < (int)uVar1))
           && (((int)uVar1 < DAT_14c9647dc &&
               ((puVar5 = (ulonglong *)
                          ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                puVar5 != (ulonglong *)0x0 && ((int)puVar5[2] == *(int *)((longlong)puVar4 + 0xc))))
               ))) {
          uVar13 = *puVar5;
          goto LAB_142824ea8;
        }
        break;
      case 8:
        uVar13 = puVar4[1];
        if ((longlong)(int)uVar13 != 0) {
          uVar14 = *puVar4;
          lVar15 = 0;
          do {
            iVar2 = *(int *)(uVar14 + 0xc + lVar15);
            if (((((iVar2 != 0) && (uVar1 = *(uint *)(uVar14 + 8 + lVar15), -1 < (int)uVar1)) &&
                 ((int)uVar1 < DAT_14c9647dc)) &&
                ((puVar4 = (ulonglong *)
                           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                 puVar4 != (ulonglong *)0x0 && ((int)puVar4[2] == iVar2)))) &&
               (uVar9 = *puVar4, uVar9 != 0)) {
              uVar10 = *(ulonglong *)param_1[1];
              if (*(ulonglong *)param_1[1] == 0) {
                uVar10 = DAT_14c948580;
              }
              if (uVar9 != uVar10) {
                FUN_1468f4fce(*(undefined8 *)(*param_1 + 8),uVar9,uVar10,0);
              }
            }
            lVar15 = lVar15 + 0x20;
          } while ((longlong)(int)uVar13 * 0x20 != lVar15);
        }
        break;
      case 9:
        uVar13 = *puVar4;
        uVar14 = ((longlong)uVar13 >> 0x18) + (longlong)puVar4;
        if ((uVar13 & 1) == 0) {
          uVar14 = uVar13;
        }
        uVar13 = puVar4[1];
        if ((longlong)(int)uVar13 != 0) {
          lVar15 = 0;
          do {
            uVar9 = *(ulonglong *)(uVar14 + lVar15);
            if (uVar9 != 0) {
              uVar10 = *(ulonglong *)param_1[1];
              if (*(ulonglong *)param_1[1] == 0) {
                uVar10 = DAT_14c948580;
              }
              if (uVar9 != uVar10) {
                FUN_1468f4fce(*(undefined8 *)(*param_1 + 8),uVar9,uVar10,0);
              }
            }
            lVar15 = lVar15 + 8;
          } while ((longlong)(int)uVar13 * 8 != lVar15);
        }
        break;
      case 10:
        uVar13 = *puVar4;
        uVar14 = ((longlong)uVar13 >> 0x18) + (longlong)puVar4;
        if ((uVar13 & 1) == 0) {
          uVar14 = uVar13;
        }
        uVar1 = *(uint *)((*(ulonglong *)(puVar11 + 4) & 0xfffffffffffffffe) - 8);
        uVar6 = (int)puVar4[1] * uVar1;
        if (uVar6 == 0) goto LAB_142824e08;
        lVar15 = (*(ulonglong *)(puVar11 + 4) & 0xfffffffffffffffe) + local_88;
        uVar13 = 0;
        local_90 = puVar11 + 4;
        do {
          FUN_142824af2(param_1,lVar15,uVar14 + uVar13);
          uVar13 = uVar13 + uVar1;
          puVar12 = local_90;
        } while (uVar6 != uVar13);
        break;
      case 0xb:
        uVar1 = *(uint *)((*(ulonglong *)(puVar11 + 4) & 0xfffffffffffffffe) - 8);
        uVar6 = *(byte *)((longlong)puVar4 + (ulonglong)uVar1) * uVar1;
        if (uVar6 == 0) goto LAB_142824e08;
        lVar15 = (*(ulonglong *)(puVar11 + 4) & 0xfffffffffffffffe) + local_88;
        uVar13 = 0;
        local_90 = puVar11 + 4;
        do {
          FUN_142824af2(param_1,lVar15,(longlong)puVar4 + uVar13);
          uVar13 = uVar13 + uVar1;
          puVar12 = local_90;
        } while (uVar6 != uVar13);
        break;
      case 0xc:
        (*(code *)**(undefined8 **)*puVar4)((undefined8 *)*puVar4,param_1[2]);
        plVar3 = (longlong *)*puVar4;
        if (*(char *)((longlong)plVar3 + 0x11) == '\x01') {
          if (((ulonglong)plVar3[1] < 9) && (*(byte *)(plVar3 + 2) < 4)) {
            puVar4 = puVar4 + 1;
          }
          else {
            puVar4 = (ulonglong *)puVar4[1];
          }
          (**(code **)(*plVar3 + 8))(plVar3,puVar4,param_1[2]);
        }
        break;
      case 0xd:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
      case 0xe:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
      case 0xf:
        (**(code **)(puVar11 + 4))(puVar4,param_1[2]);
        puVar12 = puVar11 + 4;
        break;
      case 0x10:
        uVar13 = puVar4[1];
LAB_142824ea8:
        if (uVar13 != 0) {
          uVar14 = *(ulonglong *)param_1[1];
          if (*(ulonglong *)param_1[1] == 0) {
            uVar14 = DAT_14c948580;
          }
          if (uVar13 != uVar14) {
            FUN_1468f4fce(*(undefined8 *)(*param_1 + 8),uVar13,uVar14,0);
          }
        }
        break;
      case 0x11:
        uVar13 = puVar4[1];
        if ((longlong)(int)uVar13 != 0) {
          uVar14 = *puVar4;
          lVar15 = 0;
          do {
            uVar9 = *(ulonglong *)(uVar14 + 8 + lVar15);
            if (uVar9 != 0) {
              uVar10 = *(ulonglong *)param_1[1];
              if (*(ulonglong *)param_1[1] == 0) {
                uVar10 = DAT_14c948580;
              }
              if (uVar9 != uVar10) {
                FUN_1468f4fce(*(undefined8 *)(*param_1 + 8),uVar9,uVar10,0);
              }
            }
            lVar15 = lVar15 + 0x18;
          } while ((longlong)(int)uVar13 * 0x18 != lVar15);
        }
      }
      lVar7 = lVar7 + 8;
      puVar11 = puVar12;
    } while (lVar7 != 0x20);
    puVar11 = puVar12 + 4;
  } while( true );
}



// FUNCTION 14282513c FUN_14282513c body=54 status=ok
// SIG undefined FUN_14282513c(void)

ulonglong FUN_14282513c(undefined8 *param_1,longlong *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  param_2 = (longlong *)*param_2;
  uVar2 = (**(code **)(*param_2 + 0x1c0))(param_2);
  bVar1 = (longlong *)*param_1 != param_2 & (byte)uVar2;
  if (bVar1 == 1) {
    *(undefined1 *)param_1[1] = 0;
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),bVar1) ^ 1;
}



// FUNCTION 142825172 FUN_142825172 body=461 status=ok
// SIG undefined FUN_142825172(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142825172(void)

{
  uint uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145d33778();
  atexit(FUN_14281b464);
  local_48 = 0;
  FUN_141471170(&DAT_14c962b50,L"ref.AllowParallelCollection",&DAT_14c75ecb4,
                L"Used to control parallel reference collection.");
  atexit(FUN_14281d0df);
  local_48 = 0;
  FUN_14153156c(&DAT_14c962b68,L"UObject.UseSerializeToFindWeakReferencers",&DAT_14c75ecb8,
                L"If true use Serialize routines to find objects that are referencing only via weak references - set to false to only use GC schema for reference finding"
               );
  atexit(FUN_14281d124);
  local_48 = 0;
  FUN_141471170(&DAT_14c962b78,L"save.FixupStandaloneFlags",&DAT_14c962b88,
                L"If non-zero, when the UAsset of a package is missing RF_Standalone, the flag is added. If zero, the flags are not changed and the save fails."
               );
  atexit(FUN_14281de2a);
  DAT_14c962b90 = 0;
  _DAT_14c962b98 = 0;
  atexit((_func_5014 *)&LAB_14281de6f);
  _DAT_14c962ba8 = 0;
  local_40 = "World";
  local_38 = 5;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14c962bb0 = (ulonglong)uVar1;
  local_40 = "Level";
  local_38 = 5;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14c962bb8 = (ulonglong)uVar1;
  local_40 = "PrestreamPackage";
  local_38 = 0x10;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14c962bc0 = (ulonglong)uVar1;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c962bc8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c962bc8,4000);
  atexit((_func_5014 *)&LAB_14281e346);
  DAT_14c962bf0 = 0;
  uRam000000014c962bf8 = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    atexit((_func_5014 *)&LAB_14281e354);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 142825340 FUN_142825340 body=69 status=ok
// SIG undefined FUN_142825340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142825340(void)

{
  _DAT_14c962c28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142825382. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c962c30,1);
  return;
}



// FUNCTION 142825385 FUN_142825385 body=69 status=ok
// SIG undefined FUN_142825385(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142825385(void)

{
  _DAT_14c962c40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428253c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c962c48,1);
  return;
}



// FUNCTION 1428253ca FUN_1428253ca body=69 status=ok
// SIG undefined FUN_1428253ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428253ca(void)

{
  _DAT_14c962c58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014282540c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c962c60,1);
  return;
}



// FUNCTION 14282540f FUN_14282540f body=49 status=ok
// SIG undefined FUN_14282540f(void)

void FUN_14282540f(void)

{
  FUN_144760e21(DAT_14c963468,DAT_14c963470);
  if (DAT_14c963468 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142825440 FUN_142825440 body=49 status=ok
// SIG undefined FUN_142825440(void)

void FUN_142825440(void)

{
  FUN_144760e21(DAT_14c963480,DAT_14c963488);
  if (DAT_14c963480 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142825471 FUN_142825471 body=49 status=ok
// SIG undefined FUN_142825471(void)

void FUN_142825471(void)

{
  FUN_144760e21(DAT_14c963498,DAT_14c9634a0);
  if (DAT_14c963498 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1428254a2 FUN_1428254a2 body=69 status=ok
// SIG undefined FUN_1428254a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428254a2(void)

{
  _DAT_14c9634b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428254e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9634b8,1);
  return;
}



// FUNCTION 1428254e7 FUN_1428254e7 body=69 status=ok
// SIG undefined FUN_1428254e7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428254e7(void)

{
  _DAT_14c9634c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142825529. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9634c8,1);
  return;
}



// FUNCTION 14282556a FUN_14282556a body=122 status=ok
// SIG undefined FUN_14282556a(void)

void FUN_14282556a(undefined8 param_1,longlong param_2,int *param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 != 2) {
      if (iVar1 != 1) goto LAB_1428255a7;
      DVar2 = FUN_140ad26c0();
      DVar3 = GetCurrentThreadId();
      if (DVar2 != DVar3) goto LAB_1428255a7;
    }
  }
  FUN_14282d110(&DAT_14c963468,param_1,param_2,param_3);
LAB_1428255a7:
  if (*param_3 == 7) {
    *(undefined1 *)(param_2 + 0xa1) = 1;
  }
  return;
}



// FUNCTION 1428255e4 FUN_1428255e4 body=19 status=ok
// SIG undefined FUN_1428255e4(void)

void FUN_1428255e4(undefined1 *param_1)

{
  *param_1 = DAT_14c872b88;
  DAT_14c872b88 = 1;
  return;
}



// FUNCTION 1428255f8 FUN_1428255f8 body=9 status=ok
// SIG undefined FUN_1428255f8(void)

void FUN_1428255f8(undefined1 *param_1)

{
  DAT_14c872b88 = *param_1;
  return;
}



// FUNCTION 142825602 FUN_142825602 body=776 status=ok
// SIG undefined FUN_142825602(void)

void FUN_142825602(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_2d8 [32];
  undefined2 *local_2b8;
  undefined2 *local_2b0;
  longlong local_2a8;
  undefined2 *local_2a0;
  undefined2 *local_298;
  undefined8 uStack_290;
  undefined2 *local_288;
  undefined8 uStack_280;
  undefined2 *local_278;
  int local_270;
  undefined8 local_268;
  undefined8 *local_260;
  undefined8 *local_258;
  ulonglong *local_250;
  char local_248;
  undefined8 local_240;
  undefined2 local_238 [252];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  if (param_3 == '\x02') {
    FUN_1468fa302(param_1,&local_278);
    puVar5 = local_278;
    if (local_270 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar3 = *(longlong *)(lVar1 + 0x60);
    local_288 = (undefined2 *)0x0;
    uStack_280 = 0;
    FUN_14005eb28(&local_288,0x80);
    local_260 = &local_240;
    local_248 = '\0';
    local_250 = &local_40;
    if (lVar1 == 0) {
      local_258 = (undefined8 *)local_238;
      local_240 = 0x65006e006f004e;
    }
    else {
      local_298 = *(undefined2 **)(*(longlong *)(lVar1 + 0x10) + 0x18);
      local_258 = local_260;
      FUN_14005eb5c(&local_298,&local_260);
      if (local_250 <= (ulonglong *)((longlong)local_258 + 2)) {
        FUN_140213274(&local_260,1);
      }
      *(undefined2 *)local_258 = 0x20;
      local_258 = (undefined8 *)((longlong)local_258 + 2);
      FUN_144750bde(lVar1,0,&local_260);
    }
    FUN_1400020e8(&local_288,local_260,(ulonglong)((longlong)local_258 - (longlong)local_260) >> 1);
    if (local_248 == '\x01') {
      FUN_1400020a8(local_260);
    }
    puVar4 = local_288;
    if ((int)uStack_280 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    lVar1 = *(longlong *)(param_1 + 0x18);
    local_298 = (undefined2 *)0x0;
    uStack_290 = 0;
    FUN_14005eb28(&local_298,0x80);
    local_260 = &local_240;
    local_248 = '\0';
    if (lVar1 == 0) {
      local_258 = (undefined8 *)local_238;
      local_240 = 0x65006e006f004e;
      local_250 = &local_40;
    }
    else {
      local_268 = *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x18);
      local_258 = local_260;
      local_250 = &local_40;
      FUN_14005eb5c(&local_268,&local_260);
      if (local_250 <= (ulonglong *)((longlong)local_258 + 2)) {
        FUN_140213274(&local_260,1);
      }
      *(undefined2 *)local_258 = 0x20;
      local_258 = (undefined8 *)((longlong)local_258 + 2);
      FUN_144750bde(lVar1,0,&local_260);
    }
    FUN_1400020e8(&local_298,local_260,(ulonglong)((longlong)local_258 - (longlong)local_260) >> 1);
    if (local_248 == '\x01') {
      FUN_1400020a8(local_260);
    }
    local_2b8 = local_298;
    if ((int)uStack_290 == 0) {
      local_2b8 = &DAT_149dfb77a;
    }
    local_2b0 = puVar4;
    local_2a8 = lVar2 - lVar3;
    local_2a0 = puVar5;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/ScriptCore.cpp",0x2c4,
                  L"%s\r\n\t%s\r\n\t%s:%04X\r\n\t%s",param_2);
    if (local_298 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_288 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_278 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142825930 FUN_142825930 body=2194 status=ok
// SIG undefined FUN_142825930(void)

void FUN_142825930(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_208 [32];
  wchar_t *local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  wchar_t *local_1d0;
  wchar_t *local_1c8;
  code *local_1c0;
  undefined1 *local_1b8;
  code ***local_1b0;
  code *local_1a8;
  code *local_1a0;
  longlong local_190;
  undefined1 local_188 [4];
  undefined1 local_184 [4];
  longlong *local_180 [2];
  undefined8 local_170;
  longlong *local_168;
  longlong local_160 [2];
  longlong *local_150 [2];
  code **local_140 [2];
  longlong *local_130 [2];
  longlong local_120 [2];
  longlong *local_110 [2];
  longlong *local_100;
  undefined4 local_f8;
  int local_f0 [2];
  longlong *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  code **local_c8;
  ulonglong *local_c0;
  longlong local_b8;
  undefined4 local_b0;
  code **local_a8;
  undefined4 local_a0 [2];
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar11 = **(longlong **)(param_2 + 0x20);
  *(longlong **)(param_2 + 0x20) = *(longlong **)(param_2 + 0x20) + 1;
  *(longlong *)(param_2 + 0x30) = lVar11;
  if (lVar11 == 0) {
LAB_142825a2e:
    FUN_140056680(local_120,&DAT_149e01fe8);
  }
  else {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      lVar7 = FUN_1407c67d0();
      if (lVar7 != 0) {
        lVar7 = FUN_140005490(*(undefined8 *)(param_1 + 0x10),1);
        *(longlong *)(param_2 + 0x38) = *(int *)(lVar11 + 0x44) + lVar7;
        *(longlong *)(param_2 + 0x40) = lVar7;
        if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_208);
        }
        goto LAB_142825dee;
      }
    }
    if (DAT_14c949118 == 0) {
      local_140[0] = (code **)FUN_140631fbe;
      if (DAT_14c963f04 == '\0') {
        uVar8 = FUN_140011aa6();
        lVar7 = FUN_140011c0e(uVar8,0x250,8);
      }
      else {
        lVar7 = FUN_14001cc68(0x250,8);
      }
      DAT_14c949118 = lVar7;
      FUN_1446f470e(&local_d8,L"Class",1);
      local_1b0 = local_140;
      local_1b8 = &LAB_146891e90;
      local_1c0 = (code *)&LAB_146273097;
      local_1d0 = L"Engine";
      local_1c8 = (wchar_t *)CONCAT44(local_1c8._4_4_,199);
      local_1d8 = 0x20;
      local_1e0 = 0x10000000;
      local_1e8._0_4_ = 8;
      FUN_14574b4b2(lVar7);
      DAT_14c949118 = lVar7;
      if (DAT_14c951858 == 0) {
        local_1b0 = &local_a8;
        local_a8 = (code **)FUN_1449e2820;
        local_1a0 = FUN_14081d0ea;
        local_1a8 = FUN_14081d0ea;
        local_1b8 = &LAB_1468c5283;
        local_1c0 = FUN_142809da0;
        local_1c8 = L"Engine";
        local_1d0 = (wchar_t *)0x400000000;
        local_1d8 = CONCAT44(local_1d8._4_4_,0x10000000);
        local_1e0 = 8;
        local_1e8._0_4_ = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar4 = DAT_14c951858;
      lVar7 = DAT_14c949118;
      if (DAT_14c948f88 == 0) {
        local_c8 = (code **)&DAT_1427db2a2;
        if (DAT_14c963f04 == '\0') {
          uVar8 = FUN_140011aa6();
          lVar9 = FUN_140011c0e(uVar8,0x250,8);
        }
        else {
          lVar9 = FUN_14001cc68(0x250,8);
        }
        DAT_14c948f88 = lVar9;
        FUN_1446f470e(&local_b8,L"Struct",1);
        local_1b0 = &local_c8;
        local_1b8 = &LAB_146891313;
        local_1c0 = FUN_146272f63;
        local_1d0 = L"Engine";
        local_1c8 = (wchar_t *)CONCAT44(local_1c8._4_4_,199);
        local_1d8 = 8;
        local_1e0 = 0x10000020;
        local_1e8._0_4_ = 8;
        FUN_14574b4b2(lVar9);
        local_190 = DAT_14c927740;
        DAT_14c948f88 = lVar9;
        if (DAT_14c927740 == 0) {
          local_1b0 = &local_a8;
          local_a8 = (code **)FUN_1449e2820;
          local_1a0 = FUN_14081d0ea;
          local_1a8 = FUN_14081d0ea;
          local_1b8 = &LAB_146856450;
          local_1c0 = FUN_1427b121c;
          local_1c8 = L"Engine";
          local_1d0 = (wchar_t *)0x0;
          local_1d8 = CONCAT44(local_1d8._4_4_,0x10000021);
          local_1e0 = 8;
          local_1e8._0_4_ = 0x28;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        lVar9 = DAT_14c948f88;
        local_190 = DAT_14c927740;
        uVar8 = FUN_1400163b0();
        local_1e8 = L"Struct";
        FUN_14574b446(uVar8,lVar9,local_190,L"/Script/CoreUObject");
      }
      local_1e8 = L"Class";
      FUN_14574b446(DAT_14c948f88,lVar7,lVar4,L"/Script/CoreUObject");
    }
    if (((*(ulonglong *)(lVar11 + 0x10) & 1) == 0) ||
       (uVar10 = *(ulonglong *)(lVar11 + 0x10) & 0xfffffffffffffffe, uVar10 == 0))
    goto LAB_142825a2e;
    if ((*(int *)(*(longlong *)(uVar10 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar10 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) goto LAB_142825a2e;
    local_a8 = *(code ***)(uVar10 + 0x18);
    FUN_1400021e4(&local_a8,local_120);
  }
  FUN_140233b1a(local_110,local_120);
  if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_142825a88:
    FUN_140056680(local_140,&DAT_149e01fe8);
  }
  else {
    lVar7 = FUN_1407c67d0();
    if (lVar7 == 0) goto LAB_142825a88;
    local_a8 = *(code ***)(lVar7 + 0x18);
    FUN_1400021e4(&local_a8,local_140);
  }
  FUN_140233b1a(local_130,local_140);
  if (lVar11 == 0) {
    FUN_140056680(local_160,&DAT_149e62e78);
  }
  else {
    FUN_1400021e4(lVar11 + 0x20,local_160);
  }
  FUN_140233b1a(local_150,local_160);
  local_a8 = (code **)0x149eab3ce;
  local_a0[0] = 0x15;
  FUN_1446e940c(local_184,&local_a8);
  local_a8 = (code **)0x149eab014;
  local_a0[0] = 10;
  FUN_1446e940c(local_188,&local_a8);
  local_a8 = (code **)0x149eab2a8;
  local_a0[0] = 0x92;
  FUN_140208c1e(local_180,local_188,local_184,&local_a8);
  FUN_14023409e(&local_170,local_180,1);
  local_a8 = (code **)CONCAT44(local_a8._4_4_,4);
  FUN_14023423e(local_98,local_150);
  local_88 = 4;
  FUN_14023423e(local_78,local_130);
  local_68 = 4;
  FUN_14023423e(local_58,local_110);
  local_c0 = &local_48;
  local_c8 = (code **)&local_a8;
  FUN_14010d304(&local_b8);
  local_d8 = local_170;
  local_d0 = local_168;
  if (local_168 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_168 + 1) = (int)local_168[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(&local_100,&local_d8,&local_b8);
  FUN_14007f2db(local_b8,local_b0);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  lVar11 = 0x50;
  do {
    plVar3 = *(longlong **)((longlong)local_a0 + lVar11 + -8);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
      *(undefined8 *)((longlong)local_a0 + lVar11 + -8) = 0;
      *(undefined4 *)((longlong)local_a0 + lVar11) = 0;
    }
    lVar11 = lVar11 + -0x20;
  } while (lVar11 != -0x10);
  if (local_168 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_168 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_168)(local_168);
      LOCK();
      piVar1 = (int *)((longlong)local_168 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_168 + 0x10))(local_168);
      }
    }
  }
  if (local_150[0] != (longlong *)0x0) {
    (**(code **)(*local_150[0] + 0x10))();
  }
  if (local_130[0] != (longlong *)0x0) {
    (**(code **)(*local_130[0] + 0x10))();
  }
  if (local_110[0] != (longlong *)0x0) {
    (**(code **)(*local_110[0] + 0x10))();
  }
  local_f0[0] = 3;
  local_e8 = local_100;
  if (local_100 == (longlong *)0x0) {
    local_e0 = local_f8;
  }
  else {
    (**(code **)(*local_100 + 8))(local_100);
    local_e0 = local_f8;
    (**(code **)(*local_100 + 0x10))(local_100);
  }
  if (local_180[0] != (longlong *)0x0) {
    (**(code **)(*local_180[0] + 0x10))();
  }
  if (local_160[0] != 0) {
    FUN_1400020a8();
  }
  if (local_140[0] != (code **)0x0) {
    FUN_1400020a8();
  }
  if (local_120[0] != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c86a9f8 == '\x01') {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar2 == 2) goto LAB_142825f57;
    if (iVar2 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      if (DVar5 == DVar6) goto LAB_142825f57;
    }
  }
  else {
LAB_142825f57:
    FUN_14282d110(&DAT_14c963468,param_1,param_2,local_f0);
    if (local_f0[0] == 7) {
      *(undefined1 *)(param_2 + 0xa1) = 1;
    }
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 0x10))();
  }
LAB_142825dee:
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428261e6 FUN_1428261e6 body=621 status=ok
// SIG undefined FUN_1428261e6(void)

void FUN_1428261e6(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  longlong *local_60;
  undefined4 local_58;
  wchar_t *local_50;
  longlong *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = **(longlong **)(param_2 + 0x20);
  *(longlong **)(param_2 + 0x20) = *(longlong **)(param_2 + 0x20) + 1;
  *(longlong *)(param_2 + 0x30) = lVar2;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  lVar6 = 0;
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    lVar6 = param_1;
  }
  if (lVar2 == 0) {
LAB_142826263:
    local_50 = L"MissingPropertyDefaultObject";
    local_48._0_4_ = 0x1c;
    FUN_1446e940c(local_64,&local_50);
    local_50 = L"ScriptCore";
    local_48._0_4_ = 10;
    FUN_1446e940c(local_68,&local_50);
    local_50 = 
    L"Attempted to access a missing property on a CDO. If this is a packaged/cooked build, are you attempting to use an editor-only property?"
    ;
    local_48 = (longlong *)CONCAT44(local_48._4_4_,0x87);
  }
  else {
    if (lVar6 != 0) {
      uVar5 = *(ulonglong *)(lVar2 + 0x10) & 0xfffffffffffffffe;
      iVar1 = *(int *)(uVar5 + 0x38);
      if ((iVar1 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
          uVar5 + 0x30)) {
        *(longlong *)(param_2 + 0x38) = *(int *)(lVar2 + 0x44) + lVar6;
        *(longlong *)(param_2 + 0x40) = lVar6;
        if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
        }
        goto LAB_1428263bd;
      }
      goto LAB_142826263;
    }
    local_50 = L"AccessNoneDefaultObject";
    local_48._0_4_ = 0x17;
    FUN_1446e940c(local_64,&local_50);
    local_50 = L"ScriptCore";
    local_48._0_4_ = 10;
    FUN_1446e940c(local_68,&local_50);
    local_50 = L"Accessed None attempting to read a default property";
    local_48 = (longlong *)CONCAT44(local_48._4_4_,0x33);
  }
  FUN_140208c1e(&local_60,local_68,local_64,&local_50);
  local_50 = (wchar_t *)CONCAT44(local_50._4_4_,3);
  local_48 = local_60;
  if (local_60 == (longlong *)0x0) {
    local_40 = local_58;
  }
  else {
    (**(code **)(*local_60 + 8))();
    local_40 = local_58;
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_142826441;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_142826441;
    }
  }
  else {
LAB_142826441:
    FUN_14282d110(&DAT_14c963468,param_1,param_2,&local_50);
    if ((int)local_50 == 7) {
      *(undefined1 *)(param_2 + 0xa1) = 1;
    }
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
LAB_1428263bd:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142826470 FUN_142826470 body=1500 status=ok
// SIG undefined FUN_142826470(void)

void FUN_142826470(undefined8 param_1,longlong param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  longlong lVar5;
  uint *puVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined *puVar11;
  bool bVar12;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  code *local_100;
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  longlong *local_f0 [2];
  undefined8 local_e0;
  longlong *local_d8;
  longlong local_d0 [2];
  longlong *local_c0 [2];
  longlong *local_b0;
  undefined4 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  wchar_t **local_88;
  ulonglong *local_80;
  longlong *local_78;
  undefined4 local_70;
  wchar_t *local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_a0 = (longlong *)0x0;
  pbVar4 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar4 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar4])(param_1,param_2,&local_a0);
  plVar10 = local_a0;
  if ((local_a0 != (longlong *)0x0) && ((*(uint *)(local_a0 + 1) >> 0x1e & 1) == 0)) {
    lVar9 = local_a0[0x22];
    if (lVar9 == 0) {
      (**(code **)(*local_a0 + 1000))(local_a0);
      lVar9 = plVar10[0x22];
    }
    lVar5 = *(longlong *)(param_2 + 0x20);
    *(longlong *)(param_2 + 0x20) = lVar5 + 0xd;
    (*(code *)(&DAT_14c962c70)[*(byte *)(lVar5 + 0xc)])(lVar9,param_2,param_3);
    goto LAB_14282691f;
  }
  if (*(longlong *)(param_2 + 0x30) == 0) {
    local_68 = L"AccessedNoneClassUnknownProperty";
    local_60._0_4_ = 0x20;
    FUN_1446e940c(&local_88,&local_68);
    local_68 = L"ScriptCore";
    local_60._0_4_ = 10;
    FUN_1446e940c(&local_98,&local_68);
    local_68 = L"Accessed None reading a Class";
    local_60 = (longlong *)CONCAT44(local_60._4_4_,0x1d);
    FUN_140208c1e(&local_78,&local_98,&local_88,&local_68);
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,3);
    local_60 = local_78;
    if (local_78 == (longlong *)0x0) {
      local_58 = local_70;
    }
    else {
      (**(code **)(*local_78 + 8))();
      local_58 = local_70;
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))();
      }
    }
  }
  else {
    FUN_1400021e4(*(longlong *)(param_2 + 0x30) + 0x20,local_d0);
    FUN_140233b1a(local_c0,local_d0);
    local_68 = L"AccessedNoneClass";
    local_60._0_4_ = 0x11;
    FUN_1446e940c(local_f4,&local_68);
    local_68 = L"ScriptCore";
    local_60._0_4_ = 10;
    FUN_1446e940c(local_f8,&local_68);
    local_68 = L"Accessed None trying to read Class from property {0}";
    local_60 = (longlong *)CONCAT44(local_60._4_4_,0x34);
    FUN_140208c1e(local_f0,local_f8,local_f4,&local_68);
    FUN_14023409e(&local_e0,local_f0,1);
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
    FUN_14023423e(&local_58,local_c0);
    local_80 = &local_48;
    local_88 = &local_68;
    FUN_14010d304(&local_78);
    local_98 = local_e0;
    local_90 = local_d8;
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_b0,&local_98,&local_78);
    FUN_14007f2db(local_78);
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if ((longlong *)CONCAT44(uStack_54,local_58) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_54,local_58) + 0x10))();
    }
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_d8 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar1 = (int *)((longlong)local_d8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_d8 + 0x10))(local_d8);
        }
      }
    }
    if (local_c0[0] != (longlong *)0x0) {
      (**(code **)(*local_c0[0] + 0x10))();
    }
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,3);
    local_60 = local_b0;
    if (local_b0 == (longlong *)0x0) {
      local_58 = local_a8;
    }
    else {
      (**(code **)(*local_b0 + 8))(local_b0);
      local_58 = local_a8;
      (**(code **)(*local_b0 + 0x10))(local_b0);
    }
    if (local_f0[0] != (longlong *)0x0) {
      (**(code **)(*local_f0[0] + 0x10))();
    }
    if (local_d0[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar2 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar2 != 2)) {
    if (iVar2 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1428269dc;
    }
  }
  else {
LAB_1428269dc:
    FUN_14282d110(&DAT_14c963468,param_1,param_2,&local_68);
    if ((int)local_68 == 7) {
      *(undefined1 *)(param_2 + 0xa1) = 1;
    }
  }
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x10))();
  }
  puVar6 = *(uint **)(param_2 + 0x20);
  uVar3 = *puVar6;
  *(uint **)(param_2 + 0x20) = puVar6 + 1;
  plVar10 = *(longlong **)(puVar6 + 1);
  *(uint **)(param_2 + 0x20) = puVar6 + 3;
  *(longlong **)(param_2 + 0x30) = plVar10;
  if (plVar10 == (longlong *)0x0) {
LAB_142826889:
    plVar10 = (longlong *)0x0;
  }
  else {
    puVar11 = (undefined *)plVar10[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
      local_108 = FUN_140342cba();
      local_100 = FUN_1468c7f1e;
      local_110 = 0;
      local_118 = 0x8001;
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
    if (DAT_14c951a40 == 0) {
      bVar12 = puVar11 != (undefined *)0x0;
      if (puVar11 != &DAT_14c951a38 && bVar12) {
        do {
          puVar11 = *(undefined **)(puVar11 + 0x30);
          bVar12 = puVar11 != (undefined *)0x0;
          if (puVar11 == &DAT_14c951a38) break;
        } while (puVar11 != (undefined *)0x0);
      }
      if (!bVar12) goto LAB_142826889;
    }
    else if ((*(ulonglong *)(puVar11 + 0x18) & DAT_14c951a40) == 0) goto LAB_142826889;
  }
  *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + (ulonglong)uVar3;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if ((param_3 != (void *)0x0) && (plVar10 != (longlong *)0x0)) {
    if ((~plVar10[7] & 0x1000000200U) == 0) {
      memset(param_3,0,(longlong)*(int *)((longlong)plVar10 + 0x34));
    }
    else {
      (**(code **)(*plVar10 + 0x140))(plVar10,param_3);
    }
  }
LAB_14282691f:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142826a4e FUN_142826a4e body=484 status=ok
// SIG undefined FUN_142826a4e(void)

void FUN_142826a4e(undefined8 param_1,longlong param_2)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  int local_38 [2];
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)DAT_14c963470 != 0) {
    lVar4 = 0;
    do {
      if ((*(int *)(DAT_14c963468 + 8 + lVar4) != 0) && (*(longlong *)(DAT_14c963468 + lVar4) != 0))
      {
        local_38[0] = 0;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
          DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
          DAT_14c844840[1] = 0;
          *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
          DAT_14c844840[2] = -1;
          DAT_14c844840[3] = 0;
          DAT_14c844840[4] = 0;
          DAT_14c844840[5] = 0;
          if (DAT_14c844840 != (longlong *)0x0) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
            UNLOCK();
          }
          DAT_14c844848 = 0;
          atexit(FUN_142760bef);
          _Init_thread_footer(&DAT_14c844850);
        }
        local_30 = DAT_14c844840;
        if (DAT_14c844840 != (longlong *)0x0) {
          if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*DAT_14c844840 + 8))();
          }
        }
        local_28 = 0;
        if ((DAT_14c86a9f8 == '\x01') &&
           (iVar1 = *(int *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0xc60), iVar1 != 2)) {
          if (iVar1 == 1) {
            DVar2 = FUN_140ad26c0();
            DVar3 = GetCurrentThreadId();
            if (DVar2 == DVar3) goto LAB_142826c17;
          }
        }
        else {
LAB_142826c17:
          FUN_14282d110(&DAT_14c963468,param_1,param_2,local_38);
        }
        if (local_38[0] == 7) {
          *(undefined1 *)(param_2 + 0xa1) = 1;
        }
        if (local_30 != (longlong *)0x0) {
          (**(code **)(*local_30 + 0x10))();
        }
        break;
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)DAT_14c963470 * 0x10 != lVar4);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142826c34 FUN_142826c34 body=484 status=ok
// SIG undefined FUN_142826c34(void)

void FUN_142826c34(undefined8 param_1,longlong param_2)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  int local_38 [2];
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)DAT_14c963470 != 0) {
    lVar4 = 0;
    do {
      if ((*(int *)(DAT_14c963468 + 8 + lVar4) != 0) && (*(longlong *)(DAT_14c963468 + lVar4) != 0))
      {
        local_38[0] = 1;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
          DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
          DAT_14c844840[1] = 0;
          *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
          DAT_14c844840[2] = -1;
          DAT_14c844840[3] = 0;
          DAT_14c844840[4] = 0;
          DAT_14c844840[5] = 0;
          if (DAT_14c844840 != (longlong *)0x0) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
            UNLOCK();
          }
          DAT_14c844848 = 0;
          atexit(FUN_142760bef);
          _Init_thread_footer(&DAT_14c844850);
        }
        local_30 = DAT_14c844840;
        if (DAT_14c844840 != (longlong *)0x0) {
          if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*DAT_14c844840 + 8))();
          }
        }
        local_28 = 0;
        if ((DAT_14c86a9f8 == '\x01') &&
           (iVar1 = *(int *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0xc60), iVar1 != 2)) {
          if (iVar1 == 1) {
            DVar2 = FUN_140ad26c0();
            DVar3 = GetCurrentThreadId();
            if (DVar2 == DVar3) goto LAB_142826dfd;
          }
        }
        else {
LAB_142826dfd:
          FUN_14282d110(&DAT_14c963468,param_1,param_2,local_38);
        }
        if (local_38[0] == 7) {
          *(undefined1 *)(param_2 + 0xa1) = 1;
        }
        if (local_30 != (longlong *)0x0) {
          (**(code **)(*local_30 + 0x10))();
        }
        break;
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)DAT_14c963470 * 0x10 != lVar4);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142826e1a FUN_142826e1a body=484 status=ok
// SIG undefined FUN_142826e1a(void)

void FUN_142826e1a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  int local_38 [2];
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)DAT_14c963470 != 0) {
    lVar4 = 0;
    do {
      if ((*(int *)(DAT_14c963468 + 8 + lVar4) != 0) && (*(longlong *)(DAT_14c963468 + lVar4) != 0))
      {
        local_38[0] = 2;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
          DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
          DAT_14c844840[1] = 0;
          *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
          DAT_14c844840[2] = -1;
          DAT_14c844840[3] = 0;
          DAT_14c844840[4] = 0;
          DAT_14c844840[5] = 0;
          if (DAT_14c844840 != (longlong *)0x0) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
            UNLOCK();
          }
          DAT_14c844848 = 0;
          atexit(FUN_142760bef);
          _Init_thread_footer(&DAT_14c844850);
        }
        local_30 = DAT_14c844840;
        if (DAT_14c844840 != (longlong *)0x0) {
          if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*DAT_14c844840 + 8))();
          }
        }
        local_28 = 0;
        if ((DAT_14c86a9f8 == '\x01') &&
           (iVar1 = *(int *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0xc60), iVar1 != 2)) {
          if (iVar1 == 1) {
            DVar2 = FUN_140ad26c0();
            DVar3 = GetCurrentThreadId();
            if (DVar2 == DVar3) goto LAB_142826fe3;
          }
        }
        else {
LAB_142826fe3:
          FUN_14282d110(&DAT_14c963468,param_1,param_2,local_38);
        }
        if (local_38[0] == 7) {
          *(undefined1 *)(param_2 + 0xa1) = 1;
        }
        if (local_30 != (longlong *)0x0) {
          (**(code **)(*local_30 + 0x10))();
        }
        break;
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)DAT_14c963470 * 0x10 != lVar4);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14282701e FUN_14282701e body=218 status=ok
// SIG undefined FUN_14282701e(void)

void FUN_14282701e(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar3 = *(undefined2 **)(param_2 + 0x20);
  uVar2 = *puVar3;
  *(longlong *)(param_2 + 0x20) = (longlong)puVar3 + 3;
  cVar1 = *(char *)(puVar3 + 1);
  local_2c = 0;
  *(undefined2 **)(param_2 + 0x20) = puVar3 + 2;
  (*(code *)(&DAT_14c962c70)[*(byte *)((longlong)puVar3 + 3)])
            (*(undefined8 *)(param_2 + 0x18),param_2,&local_2c);
  if (local_2c == 0) {
    FUN_1468fa302(param_2,&local_40);
    puVar3 = local_40;
    if (local_38 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_140047918(param_2,&DAT_149e0625e,puVar3);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (cVar1 != '\0') {
      FUN_146816218(param_2,2,L"Assertion failed, line %i",uVar2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1428270fa FUN_1428270fa body=79 status=ok
// SIG undefined FUN_1428270fa(void)

void FUN_1428270fa(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = **(undefined4 **)(param_2 + 0x20);
  *(undefined4 **)(param_2 + 0x20) = *(undefined4 **)(param_2 + 0x20) + 1;
  iVar2 = *(int *)(param_2 + 0x70);
  *(uint *)(param_2 + 0x70) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x74) < iVar2 + 1U) {
    FUN_140694806(param_2 + 0x48,iVar2);
  }
  lVar3 = param_2 + 0x48;
  if (*(longlong *)(param_2 + 0x68) != 0) {
    lVar3 = *(longlong *)(param_2 + 0x68);
  }
  *(undefined4 *)(lVar3 + (longlong)iVar2 * 4) = uVar1;
  return;
}



// FUNCTION 14282714a FUN_14282714a body=75 status=ok
// SIG undefined FUN_14282714a(void)

void FUN_14282714a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_2 + 0x70);
  if ((longlong)iVar1 == 0) {
    FUN_146816218(param_2,2,L"Tried to pop from an empty flow stack");
  }
  else {
    lVar3 = param_2 + 0x48;
    if (*(longlong *)(param_2 + 0x68) != 0) {
      lVar3 = *(longlong *)(param_2 + 0x68);
    }
    iVar2 = *(int *)(lVar3 + -4 + (longlong)iVar1 * 4);
    *(int *)(param_2 + 0x70) = iVar1 + -1;
    *(longlong *)(param_2 + 0x20) =
         (longlong)iVar2 + *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x60);
  }
  return;
}



// FUNCTION 142827196 FUN_142827196 body=167 status=ok
// SIG undefined FUN_142827196(void)

void FUN_142827196(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  longlong lVar4;
  undefined1 auStack_48 [47];
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = '\0';
  pbVar3 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar3 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar3])(*(undefined8 *)(param_2 + 0x18),param_2,&local_19);
  if (local_19 == '\0') {
    iVar1 = *(int *)(param_2 + 0x70);
    if ((longlong)iVar1 == 0) {
      FUN_146816218(param_2,2,L"Tried to pop from an empty flow stack");
    }
    else {
      lVar4 = param_2 + 0x48;
      if (*(longlong *)(param_2 + 0x68) != 0) {
        lVar4 = *(longlong *)(param_2 + 0x68);
      }
      iVar2 = *(int *)(lVar4 + -4 + (longlong)iVar1 * 4);
      *(int *)(param_2 + 0x70) = iVar1 + -1;
      *(longlong *)(param_2 + 0x20) =
           (longlong)iVar2 + *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x60);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14282723e FUN_14282723e body=2424 status=ok
// SIG undefined FUN_14282723e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14282723e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ushort *puVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  DWORD DVar13;
  DWORD DVar14;
  undefined1 *_Dst;
  uint uVar15;
  undefined1 *puVar16;
  longlong lVar17;
  longlong lVar18;
  byte *pbVar19;
  bool bVar20;
  bool bVar21;
  undefined8 auStack_180 [4];
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  longlong local_150;
  longlong local_148;
  void *local_140;
  longlong *local_138;
  undefined8 local_130;
  undefined8 local_128;
  uint local_11c;
  longlong local_118;
  undefined8 local_110;
  longlong *local_108;
  longlong *local_100 [2];
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  longlong *local_e8 [2];
  undefined8 local_d8;
  longlong *local_d0;
  longlong local_c8 [2];
  longlong *local_b8 [2];
  longlong *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  longlong *local_90;
  wchar_t **local_88;
  ulonglong *local_80;
  longlong local_78;
  undefined4 local_70;
  wchar_t *local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_d8;
  puVar4 = *(ushort **)(param_2 + 0x20);
  uVar3 = *puVar4;
  *(ushort **)(param_2 + 0x20) = puVar4 + 1;
  local_150 = (longlong)*(int *)(puVar4 + 1);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(longlong *)(param_2 + 0x20) = (longlong)puVar4 + 7;
  auStack_180[0] = 0x1428272c0;
  local_130 = param_3;
  local_128 = param_1;
  (*(code *)(&DAT_14c962c70)[(byte)puVar4[3]])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  plVar5 = *(longlong **)(param_2 + 0x30);
  lVar17 = *(longlong *)(param_2 + 0x38);
  local_118 = param_2;
  if (lVar17 == 0) {
    local_148 = lVar17;
    if (plVar5 == (longlong *)0x0) {
      auStack_180[0] = 0x142827309;
      FUN_140056680(local_c8,&DAT_149e01fe8);
    }
    else {
      auStack_180[0] = 0x1428272f3;
      FUN_1400021e4(plVar5 + 4,local_c8);
    }
    auStack_180[0] = 0x142827321;
    FUN_140233b1a(local_b8,local_c8);
    local_68 = L"SwitchValueIndex";
    local_60._0_4_ = 0x10;
    auStack_180[0] = 0x14282734f;
    FUN_1446e940c(local_ec,&local_68);
    local_68 = L"ScriptCore";
    local_60._0_4_ = 10;
    auStack_180[0] = 0x14282737d;
    FUN_1446e940c(local_f0,&local_68);
    local_68 = L"Switch statement failed to read property for index value for index property {0}";
    local_60 = (longlong *)CONCAT44(local_60._4_4_,0x4f);
    auStack_180[0] = 0x1428273af;
    FUN_140208c1e(local_e8,local_f0,local_ec,&local_68);
    auStack_180[0] = 0x1428273c0;
    FUN_14023409e(&local_d8,local_e8,1);
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
    auStack_180[0] = 0x1428273df;
    FUN_14023423e(&local_58,local_b8);
    local_80 = &local_48;
    auStack_180[0] = 0x142827402;
    local_88 = &local_68;
    FUN_14010d304(&local_78);
    local_98 = local_d8;
    local_90 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    auStack_180[0] = 0x142827437;
    FUN_14010c016(&local_a8,&local_98,&local_78);
    auStack_180[0] = 0x14282744a;
    FUN_14007f2db(local_78,local_70);
    if (local_78 != 0) {
      auStack_180[0] = 0x14282745f;
      FUN_1400020a8();
    }
    lVar17 = local_148;
    if ((longlong *)CONCAT44(uStack_54,local_58) != (longlong *)0x0) {
      auStack_180[0] = 0x14282747d;
      (**(code **)(*(longlong *)CONCAT44(uStack_54,local_58) + 0x10))();
    }
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        auStack_180[0] = 0x14282749f;
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)local_d0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          auStack_180[0] = 0x1428274b9;
          (**(code **)(*local_d0 + 0x10))(local_d0);
        }
      }
    }
    if (local_b8[0] != (longlong *)0x0) {
      auStack_180[0] = 0x1428274d0;
      (**(code **)(*local_b8[0] + 0x10))();
    }
    plVar1 = local_a8;
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,5);
    local_60 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      local_58 = local_a0;
    }
    else {
      auStack_180[0] = 0x1428274f6;
      (**(code **)(*local_a8 + 8))(local_a8);
      local_58 = local_a0;
      auStack_180[0] = 0x142827511;
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    if (local_e8[0] != (longlong *)0x0) {
      auStack_180[0] = 0x142827537;
      (**(code **)(*local_e8[0] + 0x10))();
    }
    if (local_c8[0] != 0) {
      auStack_180[0] = 0x142827551;
      FUN_1400020a8();
    }
    if ((DAT_14c86a9f8 == '\x01') &&
       (iVar11 = *(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         ), iVar11 != 2)) {
      if (iVar11 == 1) {
        auStack_180[0] = 0x142827b72;
        DVar13 = FUN_140ad26c0();
        auStack_180[0] = 0x142827b82;
        DVar14 = GetCurrentThreadId();
        if (DVar13 == DVar14) goto LAB_142827b92;
      }
    }
    else {
LAB_142827b92:
      auStack_180[0] = 0x142827bae;
      FUN_14282d110(&DAT_14c963468,local_128,local_118,&local_68);
    }
    if ((int)local_68 == 7) {
      *(undefined1 *)(local_118 + 0xa1) = 1;
    }
    if (local_60 != (longlong *)0x0) {
      auStack_180[0] = 0x1428275b1;
      (**(code **)(*local_60 + 0x10))();
    }
  }
  puVar16 = auStack_158;
  if (*(int *)((longlong)plVar5 + 0x34) == 0 || (int)plVar5[6] == 0) {
LAB_14282760b:
    _Dst = (undefined1 *)0x0;
  }
  else {
    auStack_180[0] = 0x1428275d9;
    iVar11 = (**(code **)(*plVar5 + 0x178))(plVar5);
    lVar18 = (longlong)*(int *)((longlong)plVar5 + 0x34) * (longlong)(int)plVar5[6];
    iVar12 = (int)lVar18;
    if (iVar11 < 0x11) {
      if (iVar12 == 0) goto LAB_14282760b;
      uStack_160 = 0x142827603;
      lVar18 = -(lVar18 + 0x1eU & 0xfffffffffffffff0);
      puVar16 = auStack_158 + lVar18;
      _Dst = auStack_158 + lVar18;
    }
    else {
      auStack_180[0] = 0x14282761f;
      iVar11 = (**(code **)(*plVar5 + 0x178))(plVar5);
      uStack_160 = 0x142827637;
      lVar18 = -((longlong)(iVar11 + iVar12 + -1) + 0xfU & 0xfffffffffffffff0);
      puVar16 = auStack_158 + lVar18;
      pcVar6 = *(code **)(*plVar5 + 0x178);
      *(undefined8 *)((longlong)auStack_180 + lVar18) = 0x14282764d;
      iVar11 = (*pcVar6)(plVar5);
      pcVar6 = *(code **)(*plVar5 + 0x178);
      *(undefined8 *)((longlong)auStack_180 + lVar18) = 0x142827669;
      iVar12 = (*pcVar6)(plVar5);
      _Dst = (undefined1 *)((longlong)-iVar12 & (ulonglong)(auStack_158 + iVar11 + lVar18 + -1));
    }
  }
  local_140 = _Dst;
  if ((*(byte *)((longlong)plVar5 + 0x39) & 2) == 0) {
    pcVar6 = *(code **)(*plVar5 + 0x160);
    *(undefined8 *)(puVar16 + -0x28) = 0x142827690;
    (*pcVar6)(plVar5);
  }
  else {
    iVar11 = *(int *)((longlong)plVar5 + 0x34);
    lVar18 = plVar5[6];
    *(undefined8 *)(puVar16 + -0x28) = 0x1428276ac;
    memset(_Dst,0,(longlong)(int)lVar18 * (longlong)iVar11);
  }
  pvVar9 = local_140;
  local_138 = plVar5;
  if (uVar3 == 0) {
    bVar20 = false;
    lVar18 = local_118;
  }
  else {
    pbVar19 = *(byte **)(local_118 + 0x20);
    bVar20 = true;
    uVar15 = 1;
    local_11c = (uint)uVar3;
    do {
      lVar18 = local_118;
      uVar7 = *(undefined8 *)(local_118 + 0x18);
      *(byte **)(local_118 + 0x20) = pbVar19 + 1;
      pcVar6 = (code *)(&DAT_14c962c70)[*pbVar19];
      *(undefined8 *)(puVar16 + -0x28) = 0x142827701;
      (*pcVar6)(uVar7,lVar18,pvVar9);
      plVar5 = local_138;
      iVar11 = **(int **)(lVar18 + 0x20);
      *(int **)(lVar18 + 0x20) = *(int **)(lVar18 + 0x20) + 1;
      if (lVar17 != 0) {
        pcVar6 = *(code **)(*local_138 + 200);
        *(undefined8 *)(puVar16 + -0x28) = 0x142827735;
        cVar10 = (*pcVar6)(plVar5,lVar17,pvVar9,0);
        lVar18 = local_118;
        uVar7 = local_130;
        if (cVar10 != '\0') {
          uVar8 = *(undefined8 *)(local_118 + 0x18);
          pbVar19 = *(byte **)(local_118 + 0x20);
          *(byte **)(local_118 + 0x20) = pbVar19 + 1;
          pcVar6 = (code *)(&DAT_14c962c70)[*pbVar19];
          *(undefined8 *)(puVar16 + -0x28) = 0x1428277a1;
          (*pcVar6)(uVar8,lVar18,uVar7);
          break;
        }
      }
      pbVar19 = (byte *)((longlong)iVar11 + *(longlong *)(*(longlong *)(local_118 + 0x10) + 0x60));
      *(byte **)(local_118 + 0x20) = pbVar19;
      bVar20 = uVar15 < local_11c;
      bVar21 = uVar15 != uVar3;
      lVar18 = local_118;
      uVar15 = uVar15 + 1;
    } while (bVar21);
  }
  plVar5 = local_138;
  pvVar9 = local_140;
  if ((*(byte *)((longlong)local_138 + 0x3c) & 0x10) == 0) {
    pcVar6 = *(code **)(*local_138 + 0x148);
    *(undefined8 *)(puVar16 + -0x28) = 0x1428277c3;
    (*pcVar6)(plVar5,pvVar9);
    lVar18 = local_118;
  }
  if (bVar20) {
    *(longlong *)(lVar18 + 0x20) = local_150 + *(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x60);
    goto LAB_142827acf;
  }
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 *)(puVar16 + -0x28) = 0x142827817;
    FUN_140056680(local_c8,&DAT_149e01fe8);
  }
  else {
    *(undefined8 *)(puVar16 + -0x28) = 0x142827801;
    FUN_1400021e4(plVar5 + 4,local_c8);
  }
  *(undefined8 *)(puVar16 + -0x28) = 0x14282782f;
  FUN_140233b1a(local_100,local_c8);
  local_68 = L"SwitchValueOutOfBounds";
  local_60._0_4_ = 0x16;
  *(undefined8 *)(puVar16 + -0x28) = 0x14282785b;
  FUN_1446e940c(local_ec,&local_68);
  local_68 = L"ScriptCore";
  local_60._0_4_ = 10;
  *(undefined8 *)(puVar16 + -0x28) = 0x142827887;
  FUN_1446e940c(local_f0,&local_68);
  local_68 = L"Switch statement failed to match case for index property {0}";
  local_60 = (longlong *)CONCAT44(local_60._4_4_,0x3c);
  *(undefined8 *)(puVar16 + -0x28) = 0x1428278ba;
  FUN_140208c1e(local_e8,local_f0,local_ec,&local_68);
  *(undefined8 *)(puVar16 + -0x28) = 0x1428278cc;
  FUN_14023409e(&local_110,local_e8,1);
  local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
  *(undefined8 *)(puVar16 + -0x28) = 0x1428278eb;
  FUN_14023423e(&local_58,local_100);
  local_80 = &local_48;
  local_88 = &local_68;
  *(undefined8 *)(puVar16 + -0x28) = 0x14282790e;
  FUN_14010d304(&local_78);
  local_98 = local_110;
  local_90 = local_108;
  if (local_108 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_108 + 1) = (int)local_108[1] + 1;
    UNLOCK();
  }
  *(undefined8 *)(puVar16 + -0x28) = 0x142827942;
  FUN_14010c016(&local_a8,&local_98,&local_78);
  lVar17 = local_78;
  *(undefined8 *)(puVar16 + -0x28) = 0x142827955;
  FUN_14007f2db(lVar17,local_70);
  if (local_78 != 0) {
    *(undefined8 *)(puVar16 + -0x28) = 0x14282796a;
    FUN_1400020a8();
  }
  if ((longlong *)CONCAT44(uStack_54,local_58) != (longlong *)0x0) {
    pcVar6 = *(code **)(*(longlong *)CONCAT44(uStack_54,local_58) + 0x10);
    *(undefined8 *)(puVar16 + -0x28) = 0x142827984;
    (*pcVar6)();
  }
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_108 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      pcVar6 = *(code **)*local_108;
      *(undefined8 *)(puVar16 + -0x28) = 0x1428279a4;
      (*pcVar6)(local_108);
      LOCK();
      piVar2 = (int *)((longlong)local_108 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        pcVar6 = *(code **)(*local_108 + 0x10);
        *(undefined8 *)(puVar16 + -0x28) = 0x1428279bc;
        (*pcVar6)(local_108);
      }
    }
  }
  if (local_100[0] != (longlong *)0x0) {
    pcVar6 = *(code **)(*local_100[0] + 0x10);
    *(undefined8 *)(puVar16 + -0x28) = 0x1428279d3;
    (*pcVar6)();
  }
  local_68 = (wchar_t *)CONCAT44(local_68._4_4_,5);
  local_60 = local_a8;
  if (local_a8 == (longlong *)0x0) {
    local_58 = local_a0;
  }
  else {
    pcVar6 = *(code **)(*local_a8 + 8);
    *(undefined8 *)(puVar16 + -0x28) = 0x1428279f8;
    (*pcVar6)(local_a8);
    local_58 = local_a0;
    pcVar6 = *(code **)(*local_a8 + 0x10);
    *(undefined8 *)(puVar16 + -0x28) = 0x142827a12;
    (*pcVar6)(local_a8);
  }
  if (local_e8[0] != (longlong *)0x0) {
    pcVar6 = *(code **)(*local_e8[0] + 0x10);
    *(undefined8 *)(puVar16 + -0x28) = 0x142827a38;
    (*pcVar6)();
  }
  if (local_c8[0] != 0) {
    *(undefined8 *)(puVar16 + -0x28) = 0x142827a52;
    FUN_1400020a8();
  }
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar11 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar11 != 2)) {
    if (iVar11 == 1) {
      *(undefined8 *)(puVar16 + -0x28) = 0x142827b0d;
      DVar13 = FUN_140ad26c0();
      *(undefined8 *)(puVar16 + -0x28) = 0x142827b1d;
      DVar14 = GetCurrentThreadId();
      if (DVar13 == DVar14) goto LAB_142827b2d;
    }
  }
  else {
LAB_142827b2d:
    lVar17 = local_118;
    uVar7 = local_128;
    *(undefined8 *)(puVar16 + -0x28) = 0x142827b4c;
    FUN_14282d110(&DAT_14c963468,uVar7,lVar17,&local_68);
    if ((int)local_68 == 7) {
      *(undefined1 *)(local_118 + 0xa1) = 1;
    }
  }
  lVar17 = local_118;
  uVar8 = local_130;
  uVar7 = *(undefined8 *)(local_118 + 0x18);
  pbVar19 = *(byte **)(local_118 + 0x20);
  *(byte **)(local_118 + 0x20) = pbVar19 + 1;
  pcVar6 = (code *)(&DAT_14c962c70)[*pbVar19];
  *(undefined8 *)(puVar16 + -0x28) = 0x142827ab4;
  (*pcVar6)(uVar7,lVar17,uVar8);
  if (local_60 != (longlong *)0x0) {
    pcVar6 = *(code **)(*local_60 + 0x10);
    *(undefined8 *)(puVar16 + -0x28) = 0x142827acb;
    (*pcVar6)();
  }
LAB_142827acf:
  if ((local_48 ^ (ulonglong)&local_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar16 + -0x28) = &UNK_142827aff;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142827bbc FUN_142827bbc body=2226 status=ok
// SIG undefined FUN_142827bbc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142827bbc(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  ulonglong *puVar7;
  undefined *puVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong lVar11;
  undefined2 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined *local_1b8;
  code *local_1b0;
  undefined1 local_1a0 [4];
  undefined1 local_19c [4];
  longlong *local_198 [2];
  undefined8 local_188;
  longlong *local_180;
  undefined8 local_178;
  longlong *plStack_170;
  longlong *local_168 [2];
  undefined2 *local_158;
  int local_150;
  longlong local_148 [2];
  longlong *local_138 [2];
  undefined8 local_128;
  longlong *plStack_120;
  longlong *local_118 [2];
  longlong *local_108;
  undefined4 local_100;
  int local_f4;
  undefined8 local_f0;
  longlong *local_e8;
  wchar_t **local_e0;
  ulonglong *local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  wchar_t *local_c0;
  longlong *local_b8;
  undefined4 local_b0 [4];
  undefined4 local_a0;
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined1 local_70 [16];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar6 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar6 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar6])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  if (*(longlong *)(param_2 + 0x38) == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9634f0) && (FUN_144b3d300(&DAT_14c9634f0), DAT_14c9634f0 == -1)) {
      local_c0 = L"ArrayGetRefException";
      local_b8._0_4_ = 0x14;
      FUN_1446e940c(&local_e0,&local_c0);
      local_c0 = L"ScriptCore";
      local_b8._0_4_ = 10;
      FUN_1446e940c(&local_f0,&local_c0);
      local_c0 = L"Attempt to assign variable through None";
      local_b8 = (longlong *)CONCAT44(local_b8._4_4_,0x27);
      FUN_140208c1e(&local_d0,&local_f0,&local_e0,&local_c0);
      DAT_14c9634d8 = 3;
      DAT_14c9634e0 = local_d0;
      if (local_d0 == (longlong *)0x0) {
        _DAT_14c9634e8 = local_c8;
      }
      else {
        (**(code **)(*local_d0 + 8))();
        _DAT_14c9634e8 = local_c8;
        if (local_d0 != (longlong *)0x0) {
          (**(code **)(*local_d0 + 0x10))();
        }
      }
      atexit((_func_5014 *)&LAB_14282846f);
      _Init_thread_footer(&DAT_14c9634f0);
    }
    if ((DAT_14c86a9f8 == '\x01') &&
       (iVar5 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar5 != 2)) {
      if (iVar5 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        if (DVar9 == DVar10) goto LAB_1428283d7;
      }
    }
    else {
LAB_1428283d7:
      FUN_14282d110(&DAT_14c963468,param_1,param_2,&DAT_14c9634d8);
    }
    if (DAT_14c9634d8 == 7) {
      *(undefined1 *)(param_2 + 0xa1) = 1;
    }
  }
  lVar11 = *(longlong *)(param_2 + 0x30);
  puVar7 = *(ulonglong **)(param_2 + 0x38);
  if (lVar11 == 0) {
    lVar14 = 0;
  }
  else {
    puVar8 = *(undefined **)(lVar11 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_1b8 = (undefined *)FUN_140342cba();
        local_1b0 = FUN_1468c7f1e;
        local_1c0 = 0;
        local_1c8 = 0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      local_1b0 = FUN_140b31576;
      local_1b8 = &DAT_14c951a38;
      local_1c0 = 0;
      local_1c8 = 0x208001;
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
    }
    lVar14 = 0;
    if (puVar8 == &DAT_14c951a90) {
      lVar14 = lVar11;
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar6 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar6])(*(undefined8 *)(param_2 + 0x18),param_2,&local_f4);
  if (lVar14 == 0) {
    *(undefined1 *)(param_2 + 0xa0) = 1;
    goto LAB_1428281a0;
  }
  bVar4 = *(byte *)(lVar14 + 0x70);
  (**(code **)(**(longlong **)(lVar14 + 0x78) + 0x178))();
  iVar5 = *(int *)(*(longlong *)(lVar14 + 0x78) + 0x34);
  *(longlong *)(param_2 + 0x30) = *(longlong *)(lVar14 + 0x78);
  if ((-1 < (longlong)local_f4) && (local_f4 < (int)puVar7[1])) {
    if ((bVar4 & 1) == 0) {
      uVar13 = *puVar7;
    }
    else {
      uVar13 = *puVar7;
      if ((uVar13 & 1) != 0) {
        uVar13 = ((longlong)uVar13 >> 0x18) + (longlong)puVar7;
      }
    }
    lVar11 = (longlong)local_f4 * (longlong)iVar5;
    *(ulonglong *)(param_2 + 0x38) = uVar13 + lVar11;
    *(undefined8 *)(param_2 + 0x40) = 0;
    if (param_3 != 0) {
      if ((int)puVar7[1] == 0) {
        lVar11 = 0;
      }
      else {
        if ((bVar4 & 1) == 0) {
          uVar13 = *puVar7;
        }
        else {
          uVar13 = *puVar7;
          if ((uVar13 & 1) != 0) {
            uVar13 = (longlong)puVar7 + ((longlong)uVar13 >> 0x18);
          }
        }
        lVar11 = uVar13 + lVar11;
      }
      (**(code **)(**(longlong **)(lVar14 + 0x78) + 0x118))
                (*(longlong **)(lVar14 + 0x78),param_3,lVar11);
    }
    goto LAB_1428281a0;
  }
  *(longlong *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  local_128 = 0;
  plStack_120 = (longlong *)0x0;
  FUN_1413a454c(local_118,(int)puVar7[1],0);
  FUN_1400021e4(lVar14 + 0x20,&local_158);
  puVar12 = local_158;
  if (local_150 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  FUN_140056680(local_148,puVar12);
  FUN_140233b1a(local_138,local_148);
  local_178 = 0;
  plStack_170 = (longlong *)0x0;
  FUN_1413a454c(local_168,local_f4,0);
  local_c0 = L"ArrayGetOutofBounds";
  local_b8._0_4_ = 0x13;
  FUN_1446e940c(local_19c,&local_c0);
  local_c0 = L"ScriptCore";
  local_b8._0_4_ = 10;
  FUN_1446e940c(local_1a0,&local_c0);
  local_c0 = L"Attempted to access index {0} from array {1} of length {2}!";
  local_b8 = (longlong *)CONCAT44(local_b8._4_4_,0x3b);
  FUN_140208c1e(local_198,local_1a0,local_19c,&local_c0);
  FUN_14023409e(&local_188,local_198,1);
  local_c0 = (wchar_t *)CONCAT44(local_c0._4_4_,4);
  FUN_14023423e(local_b0,local_168);
  local_a0 = 4;
  FUN_14023423e(local_90,local_138);
  local_80 = 4;
  FUN_14023423e(local_70,local_118);
  local_d8 = local_60;
  local_e0 = &local_c0;
  FUN_14010d304(&local_d0);
  local_f0 = local_188;
  local_e8 = local_180;
  if (local_180 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_180 + 1) = (int)local_180[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(&local_108,&local_f0,&local_d0);
  FUN_14007f2db(local_d0,local_c8);
  if (local_d0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  lVar11 = 0x50;
  do {
    if (*(longlong **)((longlong)&local_c0 + lVar11) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)&local_c0 + lVar11) + 0x10))();
      *(undefined8 *)((longlong)&local_c0 + lVar11) = 0;
      *(undefined4 *)((longlong)local_b0 + lVar11 + -8) = 0;
    }
    lVar11 = lVar11 + -0x20;
  } while (lVar11 != -0x10);
  if (local_180 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_180 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar2 = (int *)((longlong)local_180 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_180 + 0x10))(local_180);
      }
    }
  }
  if (local_168[0] != (longlong *)0x0) {
    (**(code **)(*local_168[0] + 0x10))();
  }
  if (local_138[0] != (longlong *)0x0) {
    (**(code **)(*local_138[0] + 0x10))();
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  local_c0 = (wchar_t *)CONCAT44(local_c0._4_4_,3);
  local_b8 = local_108;
  if (local_108 == (longlong *)0x0) {
    local_b0[0] = local_100;
  }
  else {
    (**(code **)(*local_108 + 8))(local_108);
    local_b0[0] = local_100;
    (**(code **)(*local_108 + 0x10))(local_108);
  }
  if (local_198[0] != (longlong *)0x0) {
    (**(code **)(*local_198[0] + 0x10))();
  }
  plVar1 = plStack_170;
  if (plStack_170 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_170 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_170)(plStack_170);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (local_148[0] != 0) {
    FUN_1400020a8();
  }
  if (local_158 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = plStack_120;
  if (plStack_120 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_120 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_120)(plStack_120);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar5 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar5 != 2)) {
    if (iVar5 == 1) {
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_14282839d;
    }
  }
  else {
LAB_14282839d:
    FUN_14282d110(&DAT_14c963468,param_1,param_2,&local_c0);
  }
  if ((int)local_c0 == 7) {
    *(undefined1 *)(param_2 + 0xa1) = 1;
  }
  if (local_b8 != (longlong *)0x0) {
    (**(code **)(*local_b8 + 0x10))();
  }
LAB_1428281a0:
  if ((local_60[0] ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142828484 FUN_142828484 body=1854 status=ok
// SIG undefined FUN_142828484(void)

void FUN_142828484(undefined8 param_1,longlong param_2)

{
  int iVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  wchar_t **_Dst;
  longlong *plVar10;
  undefined *puVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  code *local_80;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  longlong *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  longlong *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar2 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar2 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar2])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  lVar9 = *(longlong *)(param_2 + 0x38);
  if (lVar9 == 0) {
    local_58 = L"LetObjAccessNone";
    local_50._0_4_ = 0x10;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = L"ScriptCore";
    local_50._0_4_ = 10;
    FUN_1446e940c(local_70,&local_58);
    local_58 = L"Accessed None attempting to assign variable on an object";
    local_50 = (longlong *)CONCAT44(local_50._4_4_,0x38);
    FUN_140208c1e(&local_68,local_70,local_6c,&local_58);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,3);
    local_50 = local_68;
    if (local_68 == (longlong *)0x0) {
      local_48 = local_60;
    }
    else {
      (**(code **)(*local_68 + 8))();
      local_48 = local_60;
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
    if ((DAT_14c86a9f8 == '\x01') &&
       (iVar1 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar1 != 2)) {
      if (iVar1 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_142828a39;
      }
    }
    else {
LAB_142828a39:
      FUN_14282d110(&DAT_14c963468,param_1,param_2,&local_58);
    }
    if ((int)local_58 == 7) {
      *(undefined1 *)(param_2 + 0xa1) = 1;
    }
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
    }
    lVar9 = *(longlong *)(param_2 + 0x38);
  }
  plVar10 = *(longlong **)(param_2 + 0x30);
  lVar3 = *(longlong *)(param_2 + 0x40);
  if (plVar10 != (longlong *)0x0) {
    puVar11 = (undefined *)plVar10[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_88 = (undefined *)FUN_140342cba();
        local_80 = FUN_1468c7f1e;
        local_90 = 0;
        local_98 = 0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      local_80 = FUN_1468d96f0;
      local_88 = &DAT_14c951a38;
      local_90 = 0;
      local_98 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
    if (DAT_14c951c80 == 0) {
      bVar12 = puVar11 != (undefined *)0x0;
      if (puVar11 != &DAT_14c951c78 && bVar12) {
        do {
          puVar11 = *(undefined **)(puVar11 + 0x30);
          bVar12 = puVar11 != (undefined *)0x0;
          if (puVar11 == &DAT_14c951c78) break;
        } while (puVar11 != (undefined *)0x0);
      }
      if (bVar12) goto LAB_1428286be;
    }
    else if ((*(ulonglong *)(puVar11 + 0x18) & DAT_14c951c80) != 0) goto LAB_1428286be;
    lVar4 = *(longlong *)(param_2 + 0x30);
    if (lVar4 != 0) {
      puVar11 = *(undefined **)(lVar4 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1))
      {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          local_88 = (undefined *)FUN_140342cba();
          local_80 = FUN_1468c7f1e;
          local_90 = 0;
          local_98 = 0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        local_80 = FUN_140b31576;
        local_88 = &DAT_14c951a38;
        local_90 = 0;
        local_98 = 0x208001;
        FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
        atexit(FUN_14280cbf7);
        _Init_thread_footer(&DAT_14c951ae0);
      }
      if ((puVar11 == &DAT_14c951a90) &&
         (plVar5 = *(longlong **)(lVar4 + 0x78), plVar5 != (longlong *)0x0)) {
        puVar11 = (undefined *)plVar5[1];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951cc8) &&
           (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
            local_88 = (undefined *)FUN_140342cba();
            local_80 = FUN_1468c7f1e;
            local_90 = 0;
            local_98 = 0x8001;
            FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
            atexit(FUN_14280c819);
            _Init_thread_footer(&DAT_14c951a88);
          }
          local_80 = FUN_1468d96f0;
          local_88 = &DAT_14c951a38;
          local_90 = 0;
          local_98 = 0x4008001;
          FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
          atexit(FUN_14281144d);
          _Init_thread_footer(&DAT_14c951cc8);
        }
        if (DAT_14c951c80 == 0) {
          bVar12 = puVar11 != (undefined *)0x0;
          if (puVar11 != &DAT_14c951c78 && bVar12) {
            do {
              puVar11 = *(undefined **)(puVar11 + 0x30);
              bVar12 = puVar11 != (undefined *)0x0;
              if (puVar11 == &DAT_14c951c78) break;
            } while (puVar11 != (undefined *)0x0);
          }
        }
        else {
          bVar12 = (*(ulonglong *)(puVar11 + 0x18) & DAT_14c951c80) != 0;
        }
        plVar10 = (longlong *)0x0;
        if (bVar12) {
          plVar10 = plVar5;
        }
        goto LAB_1428286be;
      }
    }
  }
  plVar10 = (longlong *)0x0;
LAB_1428286be:
  local_58 = (wchar_t *)0x0;
  pbVar2 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar2 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar2])(*(undefined8 *)(param_2 + 0x18),param_2,&local_58);
  if (lVar9 != 0) {
    cVar6 = (**(code **)(*plVar10 + 0x80))(plVar10);
    if (cVar6 == '\0') {
      if ((local_58 != (wchar_t *)0x0) || ((*(byte *)((longlong)plVar10 + 0x39) & 0x10) == 0)) {
        (**(code **)(*plVar10 + 0x1f0))(plVar10,lVar9);
      }
    }
    else {
      cVar6 = (**(code **)(*plVar10 + 0x80))(plVar10);
      if (cVar6 == '\0') {
        _Dst = (wchar_t **)(lVar3 + *(int *)((longlong)plVar10 + 0x44));
        if (_Dst != &local_58) {
          if ((*(byte *)((longlong)plVar10 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar10 + 0x100))(plVar10,_Dst,&local_58,(int)plVar10[6]);
          }
          else {
            memcpy(_Dst,&local_58,
                   (longlong)(int)plVar10[6] * (longlong)*(int *)((longlong)plVar10 + 0x34));
          }
        }
      }
      else {
        (**(code **)(*plVar10 + 0x98))(plVar10,lVar3,&local_58);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142828bc4 FUN_142828bc4 body=2036 status=ok
// SIG undefined FUN_142828bc4(void)

void FUN_142828bc4(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  int iVar10;
  uint *_Dst;
  longlong *plVar11;
  undefined *puVar12;
  bool bVar13;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  code *local_80;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  wchar_t *local_58;
  longlong *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar1 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar1])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  lVar9 = *(longlong *)(param_2 + 0x38);
  if (lVar9 == 0) {
    local_58 = L"LetWeakObjAccessNone";
    local_50._0_4_ = 0x14;
    FUN_1446e940c(local_6c,&local_58);
    local_58 = L"ScriptCore";
    local_50._0_4_ = 10;
    FUN_1446e940c(local_70,&local_58);
    local_58 = L"Accessed None attempting to assign variable on a weakly referenced object";
    local_50 = (longlong *)CONCAT44(local_50._4_4_,0x49);
    FUN_140208c1e(&local_68,local_70,local_6c,&local_58);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,3);
    local_50 = (longlong *)CONCAT44(iStack_64,local_68);
    if (local_50 == (longlong *)0x0) {
      local_48 = local_60;
    }
    else {
      (**(code **)(*local_50 + 8))();
      local_48 = local_60;
      if ((longlong *)CONCAT44(iStack_64,local_68) != (longlong *)0x0) {
        (**(code **)(*(longlong *)CONCAT44(iStack_64,local_68) + 0x10))();
      }
    }
    if ((DAT_14c86a9f8 == '\x01') &&
       (iVar6 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar6 != 2)) {
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_142829208;
      }
    }
    else {
LAB_142829208:
      FUN_14282d110(&DAT_14c963468,param_1,param_2,&local_58);
    }
    if ((int)local_58 == 7) {
      *(undefined1 *)(param_2 + 0xa1) = 1;
    }
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
    }
    lVar9 = *(longlong *)(param_2 + 0x38);
  }
  plVar11 = *(longlong **)(param_2 + 0x30);
  lVar2 = *(longlong *)(param_2 + 0x40);
  if (plVar11 != (longlong *)0x0) {
    puVar12 = (undefined *)plVar11[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_88 = (undefined *)FUN_140342cba();
        local_80 = FUN_1468c7f1e;
        local_90 = 0;
        local_98 = 0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      local_80 = FUN_1468d96f0;
      local_88 = &DAT_14c951a38;
      local_90 = 0;
      local_98 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
    if (DAT_14c951c80 == 0) {
      bVar13 = puVar12 != (undefined *)0x0;
      if (puVar12 != &DAT_14c951c78 && bVar13) {
        do {
          puVar12 = *(undefined **)(puVar12 + 0x30);
          bVar13 = puVar12 != (undefined *)0x0;
          if (puVar12 == &DAT_14c951c78) break;
        } while (puVar12 != (undefined *)0x0);
      }
      if (bVar13) goto LAB_142828dfe;
    }
    else if ((*(ulonglong *)(puVar12 + 0x18) & DAT_14c951c80) != 0) goto LAB_142828dfe;
    lVar3 = *(longlong *)(param_2 + 0x30);
    if (lVar3 != 0) {
      puVar12 = *(undefined **)(lVar3 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1))
      {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          local_88 = (undefined *)FUN_140342cba();
          local_80 = FUN_1468c7f1e;
          local_90 = 0;
          local_98 = 0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        local_80 = FUN_140b31576;
        local_88 = &DAT_14c951a38;
        local_90 = 0;
        local_98 = 0x208001;
        FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
        atexit(FUN_14280cbf7);
        _Init_thread_footer(&DAT_14c951ae0);
      }
      if ((puVar12 == &DAT_14c951a90) &&
         (plVar4 = *(longlong **)(lVar3 + 0x78), plVar4 != (longlong *)0x0)) {
        puVar12 = (undefined *)plVar4[1];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951cc8) &&
           (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
            local_88 = (undefined *)FUN_140342cba();
            local_80 = FUN_1468c7f1e;
            local_90 = 0;
            local_98 = 0x8001;
            FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
            atexit(FUN_14280c819);
            _Init_thread_footer(&DAT_14c951a88);
          }
          local_80 = FUN_1468d96f0;
          local_88 = &DAT_14c951a38;
          local_90 = 0;
          local_98 = 0x4008001;
          FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
          atexit(FUN_14281144d);
          _Init_thread_footer(&DAT_14c951cc8);
        }
        if (DAT_14c951c80 == 0) {
          bVar13 = puVar12 != (undefined *)0x0;
          if (puVar12 != &DAT_14c951c78 && bVar13) {
            do {
              puVar12 = *(undefined **)(puVar12 + 0x30);
              bVar13 = puVar12 != (undefined *)0x0;
              if (puVar12 == &DAT_14c951c78) break;
            } while (puVar12 != (undefined *)0x0);
          }
        }
        else {
          bVar13 = (*(ulonglong *)(puVar12 + 0x18) & DAT_14c951c80) != 0;
        }
        plVar11 = (longlong *)0x0;
        if (bVar13) {
          plVar11 = plVar4;
        }
        goto LAB_142828dfe;
      }
    }
  }
  plVar11 = (longlong *)0x0;
LAB_142828dfe:
  local_58 = (wchar_t *)0x0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar1 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar1])(*(undefined8 *)(param_2 + 0x18),param_2);
  if (lVar9 != 0) {
    cVar5 = (**(code **)(*plVar11 + 0x80))(plVar11);
    if (cVar5 == '\0') {
      if ((local_58 != (wchar_t *)0x0) || ((*(byte *)((longlong)plVar11 + 0x39) & 0x10) == 0)) {
        (**(code **)(*plVar11 + 0x1f0))(plVar11,lVar9);
      }
    }
    else {
      iStack_64 = 0;
      if (local_58 == (wchar_t *)0x0) {
        local_68 = 0;
        iVar6 = 0;
      }
      else {
        local_68 = *(uint *)(local_58 + 6);
        if ((int)local_68 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((local_68 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_68 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar6 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar13 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar13) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar6 = *(int *)(lVar9 + 0x10);
          bVar13 = iVar6 == 0;
          if (bVar13) {
            *(int *)(lVar9 + 0x10) = iVar10;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar13) {
            iVar6 = iVar10;
          }
        }
      }
      iStack_64 = iVar6;
      cVar5 = (**(code **)(*plVar11 + 0x80))(plVar11);
      if (cVar5 == '\0') {
        _Dst = (uint *)(lVar2 + *(int *)((longlong)plVar11 + 0x44));
        if (_Dst != &local_68) {
          if ((*(byte *)((longlong)plVar11 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar11 + 0x100))(plVar11,_Dst,&local_68,(int)plVar11[6]);
          }
          else {
            memcpy(_Dst,&local_68,
                   (longlong)(int)plVar11[6] * (longlong)*(int *)((longlong)plVar11 + 0x34));
          }
        }
      }
      else {
        (**(code **)(*plVar11 + 0x98))(plVar11,lVar2,&local_68);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142829579 FUN_142829579 body=69 status=ok
// SIG undefined FUN_142829579(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142829579(void)

{
  _DAT_14c963d00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428295bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c963d08,1);
  return;
}



// FUNCTION 1428295be FUN_1428295be body=30 status=ok
// SIG undefined FUN_1428295be(void)

undefined8 FUN_1428295be(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x128))(param_2,param_1);
  return 1;
}



// FUNCTION 1428295dc FUN_1428295dc body=34 status=ok
// SIG undefined FUN_1428295dc(void)

undefined8 FUN_1428295dc(undefined8 param_1,longlong *param_2)

{
  (**(code **)(**(longlong **)(*param_2 + 8) + 0x128))(*(longlong **)(*param_2 + 8),param_1);
  return 1;
}



// FUNCTION 1428295fe FUN_1428295fe body=169 status=ok
// SIG undefined FUN_1428295fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428295fe(void)

{
  _DAT_14c963d58 = 0;
  if (DAT_14c963d50 != 0) {
    FUN_1400020a8();
  }
  _DAT_14c963d18 = 0;
  if (DAT_14c963d1c != 0) {
    FUN_14472eb64(&DAT_14c963d10,0);
  }
  _DAT_14c963d40 = 0xffffffff;
  _DAT_14c963d38 = 0;
  if (0x80 < DAT_14c963d3c) {
    DAT_14c963d3c = 0x80;
    FUN_1446efbd8(&DAT_14c963d20,0);
  }
  if (DAT_14c963d30 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c963d10 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1428296c1 FUN_1428296c1 body=41 status=ok
// SIG undefined FUN_1428296c1(void)

void FUN_1428296c1(void)

{
  DAT_14c963dd0 = 0;
  if (DAT_14c963dc8 != 0) {
    FUN_1400020a8();
  }
  FUN_146174f70();
  return;
}



// FUNCTION 1428296ea FUN_1428296ea body=41 status=ok
// SIG undefined FUN_1428296ea(void)

void FUN_1428296ea(void)

{
  DAT_14c963e20 = 0;
  if (DAT_14c963e18 != 0) {
    FUN_1400020a8();
  }
  FUN_145d61e1a();
  return;
}



// FUNCTION 142829713 FUN_142829713 body=69 status=ok
// SIG undefined FUN_142829713(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142829713(void)

{
  _DAT_14c963e28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142829755. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c963e30,1);
  return;
}



// FUNCTION 142829758 FUN_142829758 body=45 status=ok
// SIG undefined FUN_142829758(void)

void FUN_142829758(void)

{
  if (DAT_14c963e70 != (longlong *)0x0) {
    (**(code **)(*DAT_14c963e70 + 8))(DAT_14c963e70,1);
  }
  DAT_14c963e70 = (longlong *)0x0;
  return;
}



// FUNCTION 142829786 FUN_142829786 body=136 status=ok
// SIG undefined FUN_142829786(void)

void FUN_142829786(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 8) + -1;
  if (*(int *)(param_2 + 8) == 0) {
    iVar1 = 0;
  }
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  return;
}



// FUNCTION 14282980e FUN_14282980e body=45 status=ok
// SIG undefined FUN_14282980e(void)

void FUN_14282980e(void)

{
  if (DAT_14c963ec8 != (longlong *)0x0) {
    (**(code **)(*DAT_14c963ec8 + 8))(DAT_14c963ec8,1);
  }
  DAT_14c963ec8 = (longlong *)0x0;
  return;
}



// FUNCTION 142829854 FUN_142829854 body=332 status=ok
// SIG undefined FUN_142829854(void)

void FUN_142829854(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  int iVar6;
  
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    plVar1 = (longlong *)param_1[1];
    plVar3 = (longlong *)*plVar1;
    if (*(code **)(*plVar3 + 0x50) != FUN_144828418) {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))();
    }
    FUN_1447a1fc0(plVar3);
    plVar1 = (longlong *)*plVar1;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    if (pcVar2 == FUN_14482841c) {
      plVar3 = plVar1 + 3;
      if (plVar1[5] != 0) {
        plVar3 = (longlong *)(plVar1[5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      plVar3 = plVar1 + 2;
    }
    else {
      plVar3 = (longlong *)(*pcVar2)(plVar1);
    }
    uVar4 = *param_1;
    iVar6 = (int)plVar3[1] + -1;
    if ((int)plVar3[1] == 0) {
      iVar6 = 0;
    }
    puVar5 = (undefined2 *)*plVar3;
  }
  else {
    FUN_1400020e8(*param_1,&DAT_149e01f5a,1);
    plVar1 = (longlong *)param_1[1];
    plVar3 = (longlong *)*plVar1;
    if (*(code **)(*plVar3 + 0x50) != FUN_144828418) {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x50))();
    }
    FUN_1447a1fc0(plVar3);
    plVar1 = (longlong *)*plVar1;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    if (pcVar2 == FUN_14482841c) {
      plVar3 = plVar1 + 3;
      if (plVar1[5] != 0) {
        plVar3 = (longlong *)(plVar1[5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      plVar3 = plVar1 + 2;
    }
    else {
      plVar3 = (longlong *)(*pcVar2)(plVar1);
    }
    iVar6 = (int)plVar3[1] + -1;
    if ((int)plVar3[1] == 0) {
      iVar6 = 0;
    }
    FUN_1400020e8(*param_1,*plVar3,iVar6);
    uVar4 = *param_1;
    puVar5 = &DAT_149e01f5a;
    iVar6 = 1;
  }
  FUN_1400020e8(uVar4,puVar5,iVar6);
  return;
}



// FUNCTION 1428299a0 FUN_1428299a0 body=742 status=ok
// SIG undefined FUN_1428299a0(void)

ushort * FUN_1428299a0(longlong param_1,int *param_2,int *param_3,undefined4 param_4,
                      undefined8 param_5)

{
  wint_t *pwVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  ulonglong uVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ushort *puVar12;
  undefined1 auStack_78 [32];
  char *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c963ef0) && (FUN_144b3d300(&DAT_14c963ef0), DAT_14c963ef0 == -1)) {
    local_58 = "PackageName";
    local_50 = 0xb;
    local_4c = 0;
    uVar5 = FUN_14001a6c0(&local_58,1);
    DAT_14c963ee8 = (char *)(ulonglong)uVar5;
    _Init_thread_footer(&DAT_14c963ef0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c963f00) && (FUN_144b3d300(&DAT_14c963f00), DAT_14c963f00 == -1)) {
    local_58 = "AssetName";
    local_50 = 9;
    local_4c = 0;
    uVar5 = FUN_14001a6c0(&local_58,1);
    DAT_14c963ef8 = (char *)(ulonglong)uVar5;
    _Init_thread_footer(&DAT_14c963f00);
  }
  lVar9 = param_1 + -2;
  do {
    lVar8 = lVar9;
    lVar9 = lVar8 + 2;
    if (0x3f < *(ushort *)(lVar8 + 2)) break;
  } while ((1L << ((byte)*(ushort *)(lVar8 + 2) & 0x3f) & 0x100000200U) != 0);
  uVar6 = 0xffffffff;
  puVar4 = (ushort *)(lVar8 + -2);
  do {
    puVar12 = puVar4;
    uVar2 = puVar12[2];
    uVar10 = 1L << ((byte)uVar2 & 0x3f);
    uVar11 = uVar10 & 0x2000410000000001;
    if (0x3f < uVar2) {
      uVar11 = 0;
    }
    uVar10 = (ulonglong)((uint)uVar10 & 0x8000000);
    if ((uVar2 & 0xffc0) != 0x40) {
      uVar10 = 0;
    }
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
    puVar4 = puVar12 + 1;
  } while (uVar10 == 0 && uVar11 == 0);
  puVar4 = puVar12 + 2;
  if (uVar2 != 0) {
    if (0 < (int)uVar5) {
      do {
        iVar3 = (int)uVar6;
        uVar2 = *(ushort *)(lVar8 + uVar6 * 2);
        if ((0x3f < uVar2) || ((1L << ((byte)uVar2 & 0x3f) & 0x100000200U) == 0))
        goto LAB_142829ad1;
        uVar6 = (ulonglong)(iVar3 - 1);
      } while (1 < iVar3);
      uVar6 = 0;
    }
LAB_142829ad1:
    FUN_1446f82e2(&local_58,uVar6,lVar9,1);
    piVar7 = (int *)0x0;
    if (local_58 == DAT_14c963ef8) {
      piVar7 = param_3;
    }
    if (local_58 == DAT_14c963ee8) {
      piVar7 = param_2;
    }
    if (piVar7 != (int *)0x0) {
      puVar12 = puVar12 + 1;
      if (*piVar7 == -1) {
        do {
          puVar4 = puVar12;
          puVar12 = puVar4 + 1;
          iVar3 = iswspace(puVar4[1]);
        } while (iVar3 != 0);
        if (*puVar12 == 0x3d) {
          do {
            pwVar1 = puVar12 + 1;
            puVar12 = puVar12 + 1;
            iVar3 = iswspace(*pwVar1);
          } while (iVar3 != 0);
          if ((0x2c < (ulonglong)*puVar12) ||
             (puVar4 = puVar12, (0x120000000001U >> ((ulonglong)*puVar12 & 0x3f) & 1) == 0)) {
            piVar7[0] = 0;
            piVar7[1] = 0;
            puVar4 = (ushort *)FUN_1468fe785(puVar12,piVar7,param_4);
            if (puVar4 == (ushort *)0x0) {
              puVar4 = puVar12;
            }
          }
        }
        else {
          puVar4 = puVar4 + 2;
          FUN_146816218(param_5,3,L"Missing \'=\' in default properties assignment: %s",lVar9);
        }
      }
      else {
        FUN_146816218(param_5,3,L"redundant data: %s",lVar9);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar4;
}



// FUNCTION 142829c87 FUN_142829c87 body=57 status=ok
// SIG undefined FUN_142829c87(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142829c87(void)

{
  _DAT_14c963f08 = &PTR_FUN_149eae330;
  FUN_145a1c1b6(&DAT_14c963f08);
  if (DAT_14c963f10 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142829cc0 FUN_142829cc0 body=69 status=ok
// SIG undefined FUN_142829cc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142829cc0(void)

{
  _DAT_14c963f38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142829d02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c963f40,1);
  return;
}



// FUNCTION 142829d0a FUN_142829d0a body=555 status=ok
// SIG undefined FUN_142829d0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142829d0a(int *param_1)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50 [2];
  longlong *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  if (DAT_14c872bd8 == '\0') {
    FUN_14118da67(0,1);
    FUN_1427dc87c();
    if (DAT_14c75b114 == '\x01') {
      if (DAT_14c927740 == 0) {
        local_70 = local_50;
        local_50[0] = FUN_1449e2820;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_14081d0ea;
        local_78 = &LAB_146856450;
        local_80 = FUN_1427b121c;
        local_88 = L"Engine";
        local_90 = 0;
        local_98 = 0x10000021;
        local_a0 = 8;
        local_a8 = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      }
      local_a8 = 0;
      FUN_146123bc0(local_50,DAT_14c927740,0,0);
      if (local_40 != (longlong *)0x0) {
        do {
          plVar2 = (longlong *)*local_40;
          cVar3 = (**(code **)(*plVar2 + 0x1d0))(plVar2);
          uVar1 = *(uint *)((longlong)plVar2 + 0xc);
          if (cVar3 == '\0') {
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar5 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
              if ((*(uint *)(lVar5 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x1e & 1) != 0) {
                lVar5 = lVar5 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_142829e5f:
                FUN_14482b126(lVar5,0x40000000);
              }
            }
            else if ((_DAT_00000008 >> 0x1e & 1) != 0) {
              lVar5 = 0;
              goto LAB_142829e5f;
            }
          }
          else {
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar5 = 0;
            }
            FUN_1447f71cc(lVar5,0x40000000);
          }
          FUN_1427b9a5c(local_50);
        } while (local_40 != (longlong *)0x0);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(local_50[0] + 0x30));
      FUN_140011aa6();
    }
  }
  iVar4 = param_1[1] + 1;
  if (param_1[1] + 1 <= *param_1) {
    iVar4 = *param_1;
  }
  *param_1 = iVar4;
  *(undefined1 *)(param_1 + 3) = 0;
  DAT_14c75b114 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142829f36 FUN_142829f36 body=214 status=ok
// SIG undefined FUN_142829f36(void)

void FUN_142829f36(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  uVar1 = *(uint *)(param_2 + 0xc);
  if ((int)uVar1 < *(int *)(param_1 + 0x24)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar1 >> 0x10) * 8));
  }
  else {
    plVar3 = (longlong *)0x0;
  }
  if (*plVar3 != param_2) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x1c3,
                  L"Removing object (0x%016llx) at index %d but the index points to a different object (0x%016llx)!"
                  ,param_2,uVar1,*plVar3);
  }
  if ((*(ushort *)((longlong)plVar3 + 10) & 0x6e50) != 0) {
    FUN_14482b126(plVar3,0x4e500000);
  }
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = 0;
  *(undefined4 *)(param_2 + 0xc) = 0xffffffff;
  if (((*(int *)(param_1 + 4) < (int)uVar1) && (DAT_14c872a72 == '\0')) &&
     (*(char *)(param_1 + 0xb4) == '\x01')) {
    iVar2 = *(int *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x60) = iVar2 + 1U;
    if (*(uint *)(param_1 + 100) < iVar2 + 1U) {
      FUN_1446f48e2((longlong *)(param_1 + 0x58),iVar2);
    }
    *(uint *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar2 * 4) = uVar1;
  }
  return;
}



// FUNCTION 14282a00c FUN_14282a00c body=69 status=ok
// SIG undefined FUN_14282a00c(void)

undefined8 FUN_14282a00c(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(param_2 + 0xc);
  if ((ulonglong)uVar1 != 0xffffffff) {
    uVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x24))) {
      lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar1 >> 0x10) * 8) +
               ((ulonglong)uVar1 & 0xffff) * 0x18);
      uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar2 == param_2 && lVar2 != 0);
    }
    return uVar3;
  }
  return 0;
}



// FUNCTION 14282a052 FUN_14282a052 body=4914 status=ok
// SIG undefined FUN_14282a052(void)

void FUN_14282a052(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  uint *puVar15;
  ulonglong uVar16;
  byte bVar17;
  int *piVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  code **ppcVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  code *pcVar25;
  code *pcVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  longlong lVar30;
  code *pcVar31;
  uint uVar32;
  ulonglong uVar33;
  code *pcVar34;
  int iVar35;
  ulonglong uVar36;
  uint uVar37;
  code *pcVar38;
  code *pcVar39;
  int iVar40;
  code *pcVar41;
  code *pcVar42;
  code *pcVar43;
  bool bVar44;
  float fVar45;
  undefined1 auStack_478 [32];
  wchar_t *local_458;
  undefined4 local_450;
  undefined8 local_448;
  wchar_t *local_440;
  wchar_t *local_438;
  code *local_430;
  undefined1 *local_428;
  code **local_420;
  code *local_418;
  code *local_410;
  longlong local_408;
  longlong local_400;
  longlong local_3f8;
  longlong local_3f0;
  code *local_3e8;
  undefined8 uStack_3e0;
  code *local_3d0;
  longlong local_3c8;
  undefined8 uStack_3c0;
  uint local_3b8 [4];
  uint *local_3a8;
  uint local_3a0;
  uint local_39c;
  int iStack_398;
  int local_394;
  undefined1 local_390 [8];
  undefined1 *local_388;
  int local_380;
  code *local_378;
  code *local_370;
  undefined4 local_368 [188];
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_478;
  iVar22 = *(int *)(param_1 + 0x24);
  uVar33 = 0;
  if (0 < iVar22) {
    uVar33 = 0;
    uVar16 = 0;
    do {
      lVar29 = *(longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 0x10) + (uVar16 >> 0x10) * 8) +
                (uVar16 & 0xffff) * 0x18);
      if (lVar29 != 0) {
        if (DAT_14c949118 == 0) {
          local_3d0 = FUN_140631fbe;
          if (DAT_14c963f04 == '\0') {
            uVar14 = FUN_140011aa6();
            DAT_14c949118 = FUN_140011c0e(uVar14,0x250,8);
          }
          else {
            DAT_14c949118 = FUN_14001cc68(0x250,8);
          }
          local_400 = DAT_14c949118;
          FUN_1446f470e(&local_3e8,L"Class",1);
          local_420 = &local_3d0;
          local_428 = &LAB_146891e90;
          local_430 = (code *)&LAB_146273097;
          local_440 = L"Engine";
          local_438 = (wchar_t *)CONCAT44(local_438._4_4_,199);
          local_448 = 0x20;
          local_450 = 0x10000000;
          local_458._0_4_ = 8;
          FUN_14574b4b2(local_400);
          DAT_14c949118 = local_400;
          local_3f0 = DAT_14c951858;
          if (DAT_14c951858 == 0) {
            local_378 = FUN_1449e2820;
            local_410 = FUN_14081d0ea;
            local_418 = FUN_14081d0ea;
            local_420 = &local_378;
            local_428 = &LAB_1468c5283;
            local_430 = FUN_142809da0;
            local_438 = L"Engine";
            local_440 = (wchar_t *)0x400000000;
            local_448 = CONCAT44(local_448._4_4_,0x10000000);
            local_450 = 8;
            local_458._0_4_ = 0x50;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
            local_400 = DAT_14c949118;
          }
          DAT_14c949118 = local_400;
          local_3f0 = DAT_14c951858;
          if (DAT_14c948f88 == 0) {
            local_78 = (code *)&DAT_1427db2a2;
            if (DAT_14c963f04 == '\0') {
              uVar14 = FUN_140011aa6();
              DAT_14c948f88 = FUN_140011c0e(uVar14,0x250,8);
            }
            else {
              DAT_14c948f88 = FUN_14001cc68(0x250,8);
            }
            local_408 = DAT_14c948f88;
            FUN_1446f470e(&local_3c8,L"Struct",1);
            local_420 = (code **)&local_78;
            local_428 = &LAB_146891313;
            local_430 = FUN_146272f63;
            local_440 = L"Engine";
            local_438 = (wchar_t *)CONCAT44(local_438._4_4_,199);
            local_448 = 8;
            local_450 = 0x10000020;
            local_458._0_4_ = 8;
            FUN_14574b4b2(local_408);
            DAT_14c948f88 = local_408;
            local_3f8 = DAT_14c927740;
            if (DAT_14c927740 == 0) {
              local_378 = FUN_1449e2820;
              local_410 = FUN_14081d0ea;
              local_418 = FUN_14081d0ea;
              local_420 = &local_378;
              local_428 = &LAB_146856450;
              local_430 = FUN_1427b121c;
              local_438 = L"Engine";
              local_440 = (wchar_t *)0x0;
              local_448 = CONCAT44(local_448._4_4_,0x10000021);
              local_450 = 8;
              local_458._0_4_ = 0x28;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
              local_408 = DAT_14c948f88;
            }
            DAT_14c948f88 = local_408;
            local_3f8 = DAT_14c927740;
            uVar14 = FUN_1400163b0();
            local_458 = L"Struct";
            FUN_14574b446(uVar14,local_408,local_3f8,L"/Script/CoreUObject");
          }
          local_458 = L"Class";
          FUN_14574b446(DAT_14c948f88,local_400,local_3f0,L"/Script/CoreUObject");
        }
        lVar29 = *(longlong *)(lVar29 + 0x10);
        if (*(int *)(lVar29 + 0x38) < *(int *)(DAT_14c949118 + 0x38)) {
          bVar44 = false;
        }
        else {
          bVar44 = *(longlong *)
                    (*(longlong *)(lVar29 + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) ==
                   DAT_14c949118 + 0x30;
        }
        uVar33 = (ulonglong)((int)uVar33 + (uint)bVar44);
        iVar22 = *(int *)(param_1 + 0x24);
      }
      uVar27 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar27;
    } while ((int)uVar27 < iVar22);
  }
  local_3a8 = (uint *)0x0;
  local_3a0 = 0;
  local_3c8 = 0;
  uStack_3c0 = 0;
  local_39c = 0x80;
  iStack_398 = -1;
  local_394 = 0;
  local_388 = (undefined1 *)0x0;
  local_380 = 0;
  uVar27 = (uint)uVar33;
  if (uVar27 != 0) {
    if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar27);
    }
    FUN_1446f4a44(&local_3c8);
    iVar22 = (int)uStack_3c0;
    lVar29 = (longlong)(int)uStack_3c0;
    uStack_3c0 = CONCAT44(uStack_3c0._4_4_,(int)uStack_3c0 + uVar27);
    if ((uint)(uStack_3c0._4_4_ - iVar22) < uVar27) {
      FUN_1447711aa(&local_3c8);
    }
    if (iVar22 < (int)uVar27) {
      piVar18 = (int *)(uVar33 * 0x20 + local_3c8 + -0x1c);
      do {
        uVar16 = uVar33 - 1;
        if (local_394 == 0) {
          iVar22 = (int)uVar16;
        }
        else {
          iVar22 = (int)uVar33 + -1;
          *(int *)(local_3c8 + (longlong)iStack_398 * 0x20) = iVar22;
        }
        piVar18[-1] = -1;
        iVar12 = -1;
        if (0 < local_394) {
          iVar12 = iStack_398;
        }
        *piVar18 = iVar12;
        local_394 = local_394 + 1;
        piVar18 = piVar18 + -8;
        uVar33 = uVar16;
        iStack_398 = iVar22;
      } while (lVar29 < (longlong)uVar16);
    }
    uVar28 = uVar27 + 0x1f >> 5;
    puVar15 = local_3a8;
    local_3a0 = uVar27;
    if (local_39c + 0x1f >> 5 < uVar28) {
      puVar15 = (uint *)0x0;
      if (local_3a8 != (uint *)0x0 || 0x80 < uVar27) {
        if (0x80 < uVar27) {
          puVar15 = (uint *)(ulonglong)uVar28;
        }
        FUN_1446efa72(&local_3a8,0,puVar15,4);
        puVar15 = local_3a8;
      }
      local_39c = uVar27 + 0x1f & 0xffffffe0;
    }
    if (puVar15 == (uint *)0x0) {
      puVar15 = local_3b8;
    }
    if (uVar27 < 0x101) {
      uVar28 = uVar28 + (uVar28 == 0);
    }
    memset(puVar15,0,(ulonglong)(uVar28 << 2));
    uVar28 = local_3a0 + 0x1f;
    if (-1 < (int)local_3a0) {
      uVar28 = local_3a0;
    }
    if ((int)local_3a0 % 0x20 != 0) {
      puVar15 = local_3b8;
      if (local_3a8 != (uint *)0x0) {
        puVar15 = local_3a8;
      }
      bVar17 = -(char)((int)local_3a0 % 0x20);
      puVar15[(int)uVar28 >> 5] = (puVar15[(int)uVar28 >> 5] << (bVar17 & 0x1f)) >> (bVar17 & 0x1f);
    }
    iVar22 = 1;
    if (3 < uVar27) {
      uVar27 = (uVar27 | 1) + 0xe;
      iVar22 = 0x1f;
      if (uVar27 != 0) {
        for (; uVar27 >> iVar22 == 0; iVar22 = iVar22 + -1) {
        }
      }
      iVar22 = 1 << ((byte)iVar22 & 0x1f);
    }
    if ((local_380 == 0) || (local_380 < iVar22)) {
      local_380 = iVar22;
      FUN_14282d2a8();
    }
  }
  iVar22 = *(int *)(param_1 + 0x24);
  if (0 < iVar22) {
    uVar33 = 0;
    do {
      iVar12 = iStack_398;
      uVar16 = uStack_3c0;
      lVar29 = *(longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 0x10) + (uVar33 >> 0x10) * 8) +
                (uVar33 & 0xffff) * 0x18);
      if (lVar29 != 0) {
        uVar4 = *(ulonglong *)(lVar29 + 0x10);
        uVar27 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
        uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
        uVar27 = uVar27 >> 0x10 ^ uVar27;
        iVar22 = (int)uStack_3c0;
        if ((int)uStack_3c0 != local_394) {
          puVar19 = local_388;
          if (local_388 == (undefined1 *)0x0) {
            puVar19 = local_390;
          }
          iVar35 = *(int *)(puVar19 + (ulonglong)(local_380 - 1U & uVar27) * 4);
          while (iVar35 != -1) {
            lVar29 = local_3c8 + (longlong)iVar35 * 0x20;
            if (*(ulonglong *)(local_3c8 + (longlong)iVar35 * 0x20) == uVar4) {
              if (lVar29 != 0) goto LAB_14282a9fb;
              break;
            }
            iVar35 = *(int *)(lVar29 + 0x18);
          }
        }
        if (local_394 == 0) {
          uStack_3c0 = CONCAT44(uStack_3c0._4_4_,(int)uStack_3c0 + 1);
          if (uStack_3c0._4_4_ == iVar22) {
            FUN_1447711aa(&local_3c8,uVar16 & 0xffffffff);
          }
          uVar28 = local_3a0;
          if (local_3a0 == 0) {
            iVar12 = -1;
          }
          else {
            iVar12 = local_3a0 + 0x1e;
            if (-1 < (int)(local_3a0 - 1)) {
              iVar12 = local_3a0 - 1;
            }
            iVar12 = iVar12 >> 5;
          }
          uVar37 = local_3a0 + 1;
          uVar32 = local_3a0 + 0x1f;
          if (-1 < (int)local_3a0) {
            uVar32 = local_3a0;
          }
          if ((int)uVar32 >> 5 == iVar12) {
            local_3a0 = uVar37;
          }
          else {
            if ((int)local_39c <= (int)local_3a0) {
              if (local_3a0 + 0x20 < 0xa0) {
                local_39c = 0x80;
              }
              else {
                uVar37 = local_3a0 + 0x20 >> 5;
                if (local_39c + 0x1f < 0xa0) {
                  uVar23 = 4;
                  if (4 < uVar37) {
                    uVar23 = uVar37;
                  }
                }
                else {
                  uVar23 = uVar37 + (uVar37 * 3 >> 3) + 0x10;
                }
                uVar16 = (ulonglong)(uVar23 * 4);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                    uVar13 = (uint)(uVar16 + 0xf);
                    if (uVar23 < 0x1ffd) {
                      uVar16 = (ulonglong)
                               (ushort)(&DAT_14c841d90)
                                       [0x32 - (byte)(&DAT_14c841e00)[uVar16 + 0xf >> 4]];
                    }
                    else {
                      uVar20 = (ulonglong)(uVar13 & 0xfffffff0);
                      if (uVar20 < 0x7ff1) {
                        bVar17 = (&DAT_14c841e00)[uVar13 >> 4];
                        uVar24 = 0x32;
                        if (0x32 < bVar17) {
                          uVar24 = (ulonglong)bVar17;
                        }
                        uVar36 = 0x32 - (ulonglong)bVar17;
                        do {
                          uVar16 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar36 & 0xffffffff];
                          if (((&DAT_14c841d90)[uVar36 & 0xffffffff] & 0xf) == 0)
                          goto LAB_14282ab9f;
                          lVar29 = uVar24 + 1 + uVar36;
                          uVar36 = uVar36 - 1;
                        } while (lVar29 != 0x33);
                      }
                      uVar16 = (ulonglong)DAT_14c841df8;
                      if (DAT_14c841df8 < 0x11) {
                        uVar16 = 0x10;
                      }
                      uVar16 = -uVar16 & (uVar20 + uVar16) - 1;
                    }
                  }
                  else {
                    uVar16 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar16,0);
                  }
                }
LAB_14282ab9f:
                iVar12 = (int)(uVar16 >> 2);
                local_39c = iVar12 << 5;
                if (iVar12 < (int)uVar37) {
                  local_39c = 0xffffffe0;
                }
              }
              FUN_1446efbd8(local_3b8,local_3a0);
              uVar37 = local_3a0 + 1;
            }
            uVar23 = uVar37 + 0x1f;
            if (-1 < (int)uVar37) {
              uVar23 = uVar37;
            }
            local_3a0 = uVar37;
            if ((int)uVar37 % 0x20 != 0) {
              puVar15 = local_3a8;
              if (local_3a8 == (uint *)0x0) {
                puVar15 = local_3b8;
              }
              bVar17 = -(char)((int)uVar37 % 0x20);
              puVar15[(int)uVar23 >> 5] =
                   (puVar15[(int)uVar23 >> 5] << (bVar17 & 0x1f)) >> (bVar17 & 0x1f);
            }
          }
          lVar29 = (longlong)iVar22;
          puVar15 = local_3a8;
          if (local_3a8 == (uint *)0x0) {
            puVar15 = local_3b8;
          }
          bVar17 = (byte)uVar28 & 0x1f;
          puVar15[(int)uVar32 >> 5] =
               puVar15[(int)uVar32 >> 5] & (-2 << bVar17 | 0xfffffffeU >> 0x20 - bVar17);
        }
        else {
          lVar29 = (longlong)iStack_398;
          iStack_398 = *(int *)(local_3c8 + 4 + lVar29 * 0x20);
          local_394 = local_394 + -1;
          iVar22 = iVar12;
          if (local_394 != 0) {
            *(undefined4 *)(local_3c8 + (longlong)iStack_398 * 0x20) = 0xffffffff;
          }
        }
        uVar28 = 1 << ((byte)iVar22 & 0x1f);
        puVar15 = local_3a8;
        if (local_3a8 == (uint *)0x0) {
          puVar15 = local_3b8;
        }
        iVar12 = iVar22 + 0x1f;
        if (-1 < iVar22) {
          iVar12 = iVar22;
        }
        puVar15[iVar12 >> 5] = puVar15[iVar12 >> 5] | uVar28;
        iVar35 = 1;
        lVar29 = lVar29 * 0x20;
        puVar1 = (undefined4 *)(local_3c8 + lVar29);
        *(ulonglong *)(local_3c8 + lVar29) = uVar4;
        puVar3 = (undefined8 *)(local_3c8 + 8 + lVar29);
        *puVar3 = 0;
        puVar3[1] = 0;
        *(undefined4 *)(local_3c8 + 0x18 + lVar29) = 0xffffffff;
        uVar37 = (int)uStack_3c0 - local_394;
        if (uVar37 != 1) {
          if ((int)uStack_3c0 != local_394) {
            puVar19 = local_388;
            if (local_388 == (undefined1 *)0x0) {
              puVar19 = local_390;
            }
            iVar40 = *(int *)(puVar19 + (ulonglong)(local_380 - 1U & uVar27) * 4);
            while (iVar40 != -1) {
              puVar2 = (undefined4 *)(local_3c8 + (longlong)iVar40 * 0x20);
              if (*(ulonglong *)(local_3c8 + (longlong)iVar40 * 0x20) == uVar4) {
                uVar5 = *puVar1;
                uVar6 = puVar1[1];
                uVar7 = puVar1[2];
                uVar8 = puVar1[3];
                *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar1 + 4);
                *puVar2 = uVar5;
                puVar2[1] = uVar6;
                puVar2[2] = uVar7;
                puVar2[3] = uVar8;
                if (local_394 != 0) {
                  *(int *)(local_3c8 + (longlong)iStack_398 * 0x20) = iVar22;
                }
                *(undefined4 *)(local_3c8 + lVar29) = 0xffffffff;
                iVar35 = -1;
                if (0 < local_394) {
                  iVar35 = iStack_398;
                }
                *(int *)(local_3c8 + 4 + lVar29) = iVar35;
                iStack_398 = iVar22;
                local_394 = local_394 + 1;
                puVar15 = local_3a8;
                if (local_3a8 == (uint *)0x0) {
                  puVar15 = local_3b8;
                }
                puVar15[iVar12 >> 5] = puVar15[iVar12 >> 5] & (uVar28 ^ 0xffffffff);
                goto LAB_14282a9eb;
              }
              iVar40 = puVar2[6];
            }
          }
          if (3 < uVar37) {
            uVar16 = (ulonglong)(uVar37 & 0xfffffffe) + 0xf;
            lVar30 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar30 == 0; lVar30 = lVar30 + -1) {
              }
            }
            iVar35 = 1 << ((byte)lVar30 & 0x1f);
          }
        }
        if (((int)uVar37 < 1) || (iVar35 <= local_380)) {
          uVar27 = local_380 - 1U & uVar27;
          puVar1[7] = uVar27;
          puVar19 = local_388;
          if (local_388 == (undefined1 *)0x0) {
            puVar19 = local_390;
          }
          puVar1[6] = *(undefined4 *)
                       (puVar19 + ((longlong)local_380 - 1U & (longlong)(int)uVar27) * 4);
          puVar19 = local_388;
          if (local_388 == (undefined1 *)0x0) {
            puVar19 = local_390;
          }
          *(int *)(puVar19 + ((longlong)local_380 - 1U & (longlong)(int)uVar27) * 4) = iVar22;
        }
        else {
          local_380 = iVar35;
          FUN_14282d2a8(&local_3c8);
        }
LAB_14282a9eb:
        lVar29 = local_3c8 + lVar29;
LAB_14282a9fb:
        *(ulonglong *)(lVar29 + 8) = uVar4;
        *(int *)(lVar29 + 0x10) = *(int *)(lVar29 + 0x10) + 1;
        iVar22 = *(int *)(param_1 + 0x24);
      }
      uVar27 = (int)uVar33 + 1;
      uVar33 = (ulonglong)uVar27;
    } while ((int)uVar27 < iVar22);
  }
  local_3e8 = (code *)0x0;
  uStack_3e0 = 0;
  iVar22 = (int)uStack_3c0 - local_394;
  if (iVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar22);
  }
  if (iVar22 != 0) {
    FUN_14282d53c(&local_3e8);
  }
  if (local_3a0 == 0) {
    uVar16 = 1;
    uVar33 = 0;
    iVar22 = 0;
    uVar27 = 0;
  }
  else {
    puVar15 = local_3a8;
    if (local_3a8 == (uint *)0x0) {
      puVar15 = local_3b8;
    }
    uVar27 = *puVar15;
    if (uVar27 == 0) {
      iVar22 = local_3a0 + 0x1e;
      if (-1 < (int)(local_3a0 - 1)) {
        iVar22 = local_3a0 - 1;
      }
      uVar33 = 0;
      uVar16 = (ulonglong)(uint)(iVar22 >> 5);
      if (iVar22 >> 5 < 1) {
        uVar16 = uVar33;
      }
      iVar22 = 0;
      do {
        if (uVar16 == uVar33) goto LAB_14282ae68;
        iVar22 = iVar22 + 0x20;
        uVar27 = puVar15[uVar33 + 1];
        uVar33 = uVar33 + 1;
      } while (uVar27 == 0);
    }
    else {
      uVar33 = 0;
      iVar22 = 0;
    }
    uVar16 = (ulonglong)(-uVar27 & uVar27);
    uVar4 = uVar16 * 2 + 1;
    lVar29 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    uVar27 = (iVar22 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
    if ((int)local_3a0 <= (int)uVar27) {
      uVar27 = local_3a0;
    }
  }
  if ((int)uVar27 < (int)local_3a0) {
    uVar28 = 0xffffffff;
    do {
      lVar29 = local_3c8;
      uVar4 = uStack_3e0;
      lVar30 = (longlong)(int)uStack_3e0;
      uVar37 = (int)uStack_3e0 + 1;
      uStack_3e0 = CONCAT44(uStack_3e0._4_4_,uVar37);
      if (uStack_3e0._4_4_ < uVar37) {
        FUN_14282d60c(&local_3e8,uVar4 & 0xffffffff);
      }
      lVar29 = (longlong)(int)uVar27 * 0x20 + lVar29;
      uVar5 = *(undefined4 *)(lVar29 + 0xc);
      uVar6 = *(undefined4 *)(lVar29 + 0x10);
      uVar7 = *(undefined4 *)(lVar29 + 0x14);
      pcVar38 = local_3e8 + lVar30 * 0x10;
      *(undefined4 *)pcVar38 = *(undefined4 *)(lVar29 + 8);
      *(undefined4 *)(pcVar38 + 4) = uVar5;
      *(undefined4 *)(pcVar38 + 8) = uVar6;
      *(undefined4 *)(pcVar38 + 0xc) = uVar7;
      uVar28 = uVar28 & ~(uint)uVar16;
      puVar15 = local_3a8;
      if (local_3a8 == (uint *)0x0) {
        puVar15 = local_3b8;
      }
      iVar12 = (int)uVar33;
      lVar29 = (longlong)iVar12;
      uVar27 = puVar15[lVar29] & uVar28;
      if (uVar27 == 0) {
        iVar35 = local_3a0 + 0x1e;
        if (-1 < (int)(local_3a0 - 1)) {
          iVar35 = local_3a0 - 1;
        }
        iVar35 = iVar35 >> 5;
        iVar40 = iVar35;
        if (iVar35 < iVar12) {
          iVar40 = iVar12;
        }
        if (iVar35 <= iVar12) break;
        lVar30 = 0;
        while( true ) {
          iVar22 = iVar22 + 0x20;
          uVar27 = puVar15[lVar29 + lVar30 + 1];
          if (uVar27 != 0) break;
          lVar30 = lVar30 + 1;
          if (iVar40 - lVar29 == lVar30) goto LAB_14282ae68;
        }
        uVar33 = (ulonglong)(iVar12 + (int)lVar30 + 1);
        uVar28 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar27 & uVar27);
      uVar4 = uVar16 * 2 + 1;
      lVar29 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      uVar27 = (iVar22 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
    } while ((int)uVar27 < (int)local_3a0);
  }
LAB_14282ae68:
  pcVar38 = local_3e8;
  iVar22 = (int)uStack_3e0;
  lVar29 = (longlong)(int)uStack_3e0;
  if (1 < lVar29) {
    memset(local_368,0,0x2f0);
    local_378 = pcVar38;
    local_370 = pcVar38 + lVar29 * 0x10 + -0x10;
    fVar45 = logf((float)iVar22);
    local_368[0] = (int)(longlong)(fVar45 + fVar45);
    ppcVar21 = &local_378;
    do {
      pcVar26 = *ppcVar21;
      pcVar34 = ppcVar21[1];
      iVar22 = *(int *)(ppcVar21 + 2);
      iVar12 = (int)((ulonglong)((longlong)pcVar34 - (longlong)pcVar26) >> 4);
      uVar27 = iVar12 + 1;
      pcVar31 = pcVar26;
      pcVar38 = pcVar34;
      if (iVar22 != 0) {
LAB_14282aefd:
        if (8 < (int)uVar27) {
          uVar14 = *(undefined8 *)(pcVar26 + (ulonglong)(uVar27 >> 1) * 0x10);
          uVar9 = *(undefined8 *)(pcVar26 + (ulonglong)(uVar27 >> 1) * 0x10 + 8);
          uVar10 = *(undefined8 *)(pcVar26 + 8);
          *(undefined8 *)(pcVar26 + (ulonglong)(uVar27 >> 1) * 0x10) = *(undefined8 *)pcVar26;
          *(undefined8 *)(pcVar26 + (ulonglong)(uVar27 >> 1) * 0x10 + 8) = uVar10;
          *(undefined8 *)pcVar26 = uVar14;
          *(undefined8 *)(pcVar26 + 8) = uVar9;
          pcVar41 = pcVar38 + 0x10;
          pcVar25 = pcVar26;
          do {
            pcVar11 = pcVar25 + 0x10;
            pcVar39 = pcVar25 + 0x10;
            do {
              pcVar25 = pcVar39;
              pcVar43 = pcVar11;
              if (pcVar38 < pcVar25) break;
              pcVar11 = pcVar43 + 0x10;
              pcVar39 = pcVar25 + 0x10;
            } while (*(int *)(pcVar26 + 8) <= *(int *)(pcVar25 + 8));
            pcVar11 = pcVar41 + -0x20;
            do {
              pcVar39 = pcVar41;
              pcVar42 = pcVar11;
              pcVar41 = pcVar39 + -0x10;
              if (pcVar41 <= pcVar26) break;
              pcVar11 = pcVar42 + -0x10;
            } while (*(int *)(pcVar39 + -8) <= *(int *)(pcVar26 + 8));
            if (pcVar41 < pcVar25) goto LAB_14282afaa;
            uVar14 = *(undefined8 *)pcVar25;
            uVar9 = *(undefined8 *)(pcVar25 + 8);
            uVar10 = *(undefined8 *)(pcVar39 + -8);
            *(undefined8 *)pcVar25 = *(undefined8 *)pcVar41;
            *(undefined8 *)(pcVar25 + 8) = uVar10;
            *(undefined8 *)pcVar41 = uVar14;
            *(undefined8 *)(pcVar39 + -8) = uVar9;
          } while( true );
        }
        for (; pcVar34 = pcVar26, pcVar31 = pcVar26, pcVar26 < pcVar38; pcVar38 = pcVar38 + -0x10) {
          while (pcVar41 = pcVar34, pcVar34 = pcVar31 + 0x10, pcVar34 <= pcVar38) {
            pcVar25 = pcVar31 + 0x18;
            pcVar31 = pcVar34;
            if (*(int *)(pcVar41 + 8) <= *(int *)pcVar25) {
              pcVar34 = pcVar41;
            }
          }
          local_78 = *(code **)pcVar41;
          uStack_70 = *(undefined8 *)(pcVar41 + 8);
          pcVar34 = local_78;
          uVar9 = uStack_70;
          uVar14 = *(undefined8 *)(pcVar38 + 8);
          *(undefined8 *)pcVar41 = *(undefined8 *)pcVar38;
          *(undefined8 *)(pcVar41 + 8) = uVar14;
          local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          *(undefined4 *)pcVar38 = (undefined4)local_78;
          *(undefined4 *)(pcVar38 + 4) = local_78._4_4_;
          *(undefined4 *)(pcVar38 + 8) = (undefined4)uStack_70;
          *(undefined4 *)(pcVar38 + 0xc) = uStack_70._4_4_;
          local_78 = pcVar34;
          uStack_70 = uVar9;
        }
        goto LAB_14282b270;
      }
LAB_14282b055:
      if (uVar27 != 0) {
        iVar22 = (iVar12 - (iVar12 + -1 >> 0x1f)) + -1 >> 1;
        iVar12 = iVar22;
joined_r0x00014282b07c:
        do {
          iVar35 = iVar22 * 2 + 1;
          if (iVar35 < (int)uVar27) {
            iVar40 = iVar22 * 2 + 2;
            if ((iVar40 < (int)uVar27) &&
               (*(int *)(pcVar26 + ((longlong)iVar40 * 2 + 1) * 8) <=
                *(int *)(pcVar26 + ((longlong)iVar35 * 2 + 1) * 8))) {
              iVar35 = iVar40;
            }
            if (*(int *)(pcVar26 + ((longlong)iVar35 * 2 + 1) * 8) <
                *(int *)(pcVar26 + ((longlong)iVar22 * 2 + 1) * 8)) {
              pcVar34 = pcVar26 + (longlong)iVar22 * 0x10;
              pcVar31 = pcVar26 + (longlong)iVar35 * 0x10;
              local_78 = *(code **)pcVar34;
              uStack_70 = *(undefined8 *)(pcVar34 + 8);
              pcVar38 = local_78;
              uVar9 = uStack_70;
              uVar14 = *(undefined8 *)(pcVar31 + 8);
              *(undefined8 *)pcVar34 = *(undefined8 *)pcVar31;
              *(undefined8 *)(pcVar34 + 8) = uVar14;
              local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
              uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
              *(undefined4 *)pcVar31 = (undefined4)local_78;
              *(undefined4 *)(pcVar31 + 4) = local_78._4_4_;
              *(undefined4 *)(pcVar31 + 8) = (undefined4)uStack_70;
              *(undefined4 *)(pcVar31 + 0xc) = uStack_70._4_4_;
              iVar22 = iVar35;
              local_78 = pcVar38;
              uStack_70 = uVar9;
              goto joined_r0x00014282b07c;
            }
          }
          bVar44 = iVar12 != 0;
          iVar22 = iVar12 + -1;
          iVar12 = iVar22;
        } while (bVar44);
        if (1 < (int)uVar27) {
          uVar33 = (ulonglong)uVar27 - 1;
          local_78 = *(code **)pcVar26;
          uStack_70 = *(undefined8 *)(pcVar26 + 8);
          pcVar34 = local_78;
          uVar9 = uStack_70;
          uVar14 = *(undefined8 *)(pcVar26 + uVar33 * 0x10 + 8);
          *(undefined8 *)pcVar26 = *(undefined8 *)(pcVar26 + uVar33 * 0x10);
          *(undefined8 *)(pcVar26 + 8) = uVar14;
          local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          pcVar38 = pcVar26 + uVar33 * 0x10;
          *(undefined4 *)pcVar38 = (undefined4)local_78;
          *(undefined4 *)(pcVar38 + 4) = local_78._4_4_;
          *(undefined4 *)(pcVar38 + 8) = (undefined4)uStack_70;
          *(undefined4 *)(pcVar38 + 0xc) = uStack_70._4_4_;
          local_78 = pcVar34;
          uStack_70 = uVar9;
          if (uVar27 != 2) {
            do {
              iVar22 = 0;
              iVar35 = 1;
              iVar12 = 0;
              do {
                iVar22 = iVar22 + 2;
                iVar40 = iVar35;
                if (((longlong)iVar22 < (longlong)uVar33) &&
                   (*(int *)(pcVar26 + ((longlong)iVar22 * 2 + 1) * 8) <=
                    *(int *)(pcVar26 + ((longlong)iVar35 * 2 + 1) * 8))) {
                  iVar40 = iVar22;
                }
                if (*(int *)(pcVar26 + ((longlong)iVar12 * 2 + 1) * 8) <=
                    *(int *)(pcVar26 + ((longlong)iVar40 * 2 + 1) * 8)) break;
                pcVar38 = pcVar26 + (longlong)iVar12 * 0x10;
                pcVar34 = pcVar26 + (longlong)iVar40 * 0x10;
                uVar14 = *(undefined8 *)pcVar38;
                uVar9 = *(undefined8 *)(pcVar38 + 8);
                uVar10 = *(undefined8 *)(pcVar34 + 8);
                *(undefined8 *)pcVar38 = *(undefined8 *)pcVar34;
                *(undefined8 *)(pcVar38 + 8) = uVar10;
                *(undefined8 *)pcVar34 = uVar14;
                *(undefined8 *)(pcVar34 + 8) = uVar9;
                iVar22 = iVar40 * 2;
                iVar35 = iVar40 * 2 + 1;
                iVar12 = iVar40;
              } while ((longlong)iVar35 < (longlong)uVar33);
              uVar16 = uVar33 - 1;
              local_78 = *(code **)pcVar26;
              uStack_70 = *(undefined8 *)(pcVar26 + 8);
              pcVar34 = local_78;
              uVar9 = uStack_70;
              uVar14 = *(undefined8 *)(pcVar26 + uVar16 * 0x10 + 8);
              *(undefined8 *)pcVar26 = *(undefined8 *)(pcVar26 + uVar16 * 0x10);
              *(undefined8 *)(pcVar26 + 8) = uVar14;
              local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
              uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
              pcVar38 = pcVar26 + uVar16 * 0x10;
              *(undefined4 *)pcVar38 = (undefined4)local_78;
              *(undefined4 *)(pcVar38 + 4) = local_78._4_4_;
              *(undefined4 *)(pcVar38 + 8) = (undefined4)uStack_70;
              *(undefined4 *)(pcVar38 + 0xc) = uStack_70._4_4_;
              bVar44 = 2 < uVar33;
              uVar33 = uVar16;
              local_78 = pcVar34;
              uStack_70 = uVar9;
            } while (bVar44);
          }
        }
      }
LAB_14282b270:
      ppcVar21 = ppcVar21 + -3;
    } while (&local_378 <= ppcVar21);
  }
  if (local_3e8 != (code *)0x0) {
    FUN_1400020a8(local_3e8);
  }
  local_380 = 0;
  if (local_388 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar33 = uStack_3c0 >> 0x20;
  uStack_3c0 = uStack_3c0 & 0xffffffff00000000;
  if ((int)uVar33 != 0) {
    FUN_1446f4a44(&local_3c8,0);
  }
  iStack_398 = 0xffffffff;
  local_394 = 0;
  local_3a0 = 0;
  if (0x80 < local_39c) {
    local_39c = 0x80;
    FUN_1446efbd8(local_3b8,0);
  }
  if (local_3a8 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_3c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_478) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14282afaa:
  local_78 = *(code **)pcVar26;
  uStack_70 = *(undefined8 *)(pcVar26 + 8);
  pcVar11 = local_78;
  uVar9 = uStack_70;
  uVar14 = *(undefined8 *)(pcVar39 + -8);
  *(undefined8 *)pcVar26 = *(undefined8 *)pcVar41;
  *(undefined8 *)(pcVar26 + 8) = uVar14;
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  *(undefined4 *)pcVar41 = (undefined4)local_78;
  *(undefined4 *)(pcVar39 + -0xc) = local_78._4_4_;
  *(undefined4 *)(pcVar39 + -8) = (undefined4)uStack_70;
  *(undefined4 *)(pcVar39 + -4) = uStack_70._4_4_;
  iVar22 = iVar22 + -1;
  pcVar39 = pcVar39 + -0x20;
  local_78 = pcVar11;
  uStack_70 = uVar9;
  if ((longlong)pcVar42 - (longlong)pcVar31 < (longlong)pcVar34 - (longlong)pcVar43) {
    if (pcVar25 < pcVar38) {
      *ppcVar21 = pcVar25;
      ppcVar21[1] = pcVar38;
      *(int *)(ppcVar21 + 2) = iVar22;
      ppcVar21 = ppcVar21 + 3;
    }
    pcVar43 = pcVar26;
    pcVar34 = pcVar42;
    if (pcVar41 <= pcVar26 + 0x10) goto LAB_14282b270;
  }
  else {
    if (pcVar26 + 0x10 < pcVar41) {
      *ppcVar21 = pcVar26;
      ppcVar21[1] = pcVar39;
      *(int *)(ppcVar21 + 2) = iVar22;
      ppcVar21 = ppcVar21 + 3;
    }
    pcVar26 = pcVar25;
    pcVar39 = pcVar38;
    pcVar34 = pcVar38;
    if (pcVar38 <= pcVar25) goto LAB_14282b270;
  }
  iVar12 = (int)((ulonglong)((longlong)pcVar34 - (longlong)pcVar43) >> 4);
  uVar27 = iVar12 + 1;
  pcVar31 = pcVar43;
  pcVar38 = pcVar39;
  if (iVar22 == 0) goto LAB_14282b055;
  goto LAB_14282aefd;
}



// FUNCTION 14282b386 FUN_14282b386 body=69 status=ok
// SIG undefined FUN_14282b386(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14282b386(void)

{
  _DAT_14c963f48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014282b3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c963f50,1);
  return;
}



// FUNCTION 14282b3cc FUN_14282b3cc body=68 status=ok
// SIG undefined FUN_14282b3cc(void)

void FUN_14282b3cc(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_1400f9b98();
  *(undefined8 *)(param_1 + 0x18) = param_2;
  if (param_3 != 0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_3);
    }
    *(longlong *)(param_1 + 0x20) = param_3;
  }
  FUN_1400f8a51(param_1);
  return;
}



// FUNCTION 14282b410 FUN_14282b410 body=321 status=ok
// SIG undefined FUN_14282b410(void)

void FUN_14282b410(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(param_2 + 0x18);
    do {
      local_78 = *puVar2;
      FUN_14058d408(puVar2[-3],puVar2[-2],param_1,puVar2[-1]);
      puVar2 = puVar2 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  if (param_5 != 0) {
    puVar2 = (undefined8 *)(param_4 + 0x18);
    do {
      FUN_1406fe729(puVar2[-3],param_1,puVar2[-1],*puVar2);
      if ((code *)puVar2[-2] != (code *)0x0) {
        uVar1 = (*(code *)puVar2[-2])();
        FUN_1446f470e(&local_60,puVar2[-1],1);
        FUN_1446f470e(&local_68,param_1,1);
        local_58 = local_68;
        local_50 = local_60;
        FUN_1427dc50a(&local_58,uVar1);
      }
      puVar2 = puVar2 + 5;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  if (param_7 != 0) {
    puVar2 = (undefined8 *)(param_6 + 0x10);
    do {
      FUN_14098d3d2(puVar2[-2],param_1,puVar2[-1],*puVar2);
      puVar2 = puVar2 + 4;
      param_7 = param_7 + -1;
    } while (param_7 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14282b552 FUN_14282b552 body=142 status=ok
// SIG undefined FUN_14282b552(void)

void FUN_14282b552(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_14282d0a2(&local_38);
  if (0 < (int)uStack_30) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      FUN_140aa7318(*(undefined8 *)(local_38 + lVar2),0);
      FUN_14282d0a2(&local_38);
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x10;
    } while (lVar1 < (int)uStack_30);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14282b5e1 FUN_14282b5e1 body=69 status=ok
// SIG undefined FUN_14282b5e1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14282b5e1(void)

{
  _DAT_14c963f78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014282b623. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c963f80,1);
  return;
}



// FUNCTION 14282b626 FUN_14282b626 body=69 status=ok
// SIG undefined FUN_14282b626(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14282b626(void)

{
  _DAT_14c963f90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014282b668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c963f98,1);
  return;
}



// FUNCTION 14282b66b FUN_14282b66b body=69 status=ok
// SIG undefined FUN_14282b66b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14282b66b(void)

{
  _DAT_14c963fa8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014282b6ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c963fb0,1);
  return;
}



// FUNCTION 14282b6b0 FUN_14282b6b0 body=263 status=ok
// SIG undefined FUN_14282b6b0(void)

void FUN_14282b6b0(void)

{
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined1 local_39;
  undefined4 local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  DAT_14c75ecdc = TlsAlloc();
  local_34 = 0;
  local_38 = 0x200000;
  local_39 = 0;
  local_48 = &DAT_14c872ce8;
  FUN_1414d73b6(DAT_14c872ce0,L"/Script/Engine.GarbageCollectionSettings",
                L"gc.MaxObjectsNotConsideredByGC",&local_34);
  local_48 = &DAT_14c872ce8;
  FUN_1414d73b6(DAT_14c872ce0,L"/Script/Engine.GarbageCollectionSettings",L"gc.MaxObjectsInGame",
                &local_38);
  local_48 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"/Script/Engine.GarbageCollectionSettings",
                L"gc.PreAllocateUObjectArray",&local_39);
  if (local_34 == 0) {
    DAT_14c963f04 = 1;
  }
  FUN_1456d04de(&DAT_14c9647b8,local_38,local_34,local_39);
  FUN_1428094a0();
  FUN_1427d61d1();
  DAT_14c963ff1 = 1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_14282b552();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14282b7b8 FUN_14282b7b8 body=135 status=ok
// SIG undefined FUN_14282b7b8(void)

ulonglong FUN_14282b7b8(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((*(uint *)(param_1 + 8) & 0x40) == 0) {
LAB_14282b7c9:
    lVar3 = param_1;
    lVar2 = lVar3;
    if (*(longlong *)(lVar3 + 0x20) != 0) goto code_r0x00014282b7d8;
    goto LAB_14282b7e3;
  }
LAB_14282b7f9:
  return uVar4 & 0xffffffff;
code_r0x00014282b7d8:
  param_1 = *(longlong *)(lVar3 + 0x20);
  if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) goto LAB_14282b7c9;
  lVar2 = FUN_142840154(lVar3);
LAB_14282b7e3:
  if (lVar2 == 0) {
    param_1 = *(longlong *)(lVar3 + 0x20);
    goto LAB_14282b7c9;
  }
  if (DAT_14c872bf0 == '\0') {
    (*(code *)PTR_FUN_14c758760)();
    uVar4 = 0;
  }
  else {
    bVar1 = *(byte *)(lVar2 + 0x28);
    if ((bVar1 & 1) == 0) {
      FUN_14116d61c(lVar2,1);
    }
    FUN_146900610(&DAT_14c951be0,lVar2,
                  (uint)CONCAT71((int7)((ulonglong)lVar3 >> 8),bVar1) & 0xffffff01);
  }
  goto LAB_14282b7f9;
}



// FUNCTION 14282b840 FUN_14282b840 body=5376 status=ok
// SIG undefined FUN_14282b840(void)

void FUN_14282b840(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  LARGE_INTEGER LVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  int iVar16;
  ushort uVar17;
  int iVar18;
  ushort uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined1 auStack_198 [32];
  wchar_t *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  wchar_t *local_160;
  wchar_t *local_158;
  code *local_150;
  undefined1 *local_148;
  code **local_140;
  code *local_138;
  code *local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  uint local_108;
  int local_104;
  ulonglong local_100;
  longlong local_f8;
  ulonglong local_f0;
  uint *local_e8;
  longlong *local_e0;
  uint *local_d8;
  ulonglong local_d0;
  undefined2 *local_c8;
  undefined8 uStack_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  code *local_98;
  undefined1 local_90 [8];
  LARGE_INTEGER local_88;
  code **local_80;
  code *local_78;
  undefined1 local_70 [8];
  undefined2 **local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  local_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  uVar1 = *(uint *)(param_1 + 0x30);
  if (uVar1 == 0) {
    uVar6 = 1;
    uVar24 = 0;
    iVar12 = 0;
    uVar3 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 0x18);
    }
    uVar3 = *puVar4;
    if (uVar3 == 0) {
      iVar12 = uVar1 + 0x1e;
      if (-1 < (int)(uVar1 - 1)) {
        iVar12 = uVar1 - 1;
      }
      uVar24 = 0;
      uVar6 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar6 = uVar24;
      }
      iVar12 = 0;
      do {
        if (uVar6 == uVar24) goto LAB_14282b90c;
        iVar12 = iVar12 + 0x20;
        uVar3 = puVar4[uVar24 + 1];
        uVar24 = uVar24 + 1;
      } while (uVar3 == 0);
    }
    else {
      uVar24 = 0;
      iVar12 = 0;
    }
    uVar6 = (ulonglong)(-uVar3 & uVar3);
    uVar11 = uVar6 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar3 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if ((int)uVar1 <= (int)uVar3) {
      uVar3 = uVar1;
    }
  }
  if (uVar3 != uVar1) {
    uVar20 = 0xffffffff;
    local_100 = (ulonglong)uVar1;
    local_f8 = param_1;
    local_d8 = (uint *)(param_1 + 0x18);
    do {
      lVar14 = *(longlong *)(local_f8 + 8);
      lVar25 = (longlong)(int)uVar3 * 0x60;
      local_110 = lVar14 + lVar25;
      local_e0 = (longlong *)(lVar14 + lVar25 + 8);
      local_e8 = (uint *)(lVar14 + 0x18 + lVar25);
      uVar1 = local_e8[6];
      uVar22 = 0;
      uVar11 = 1;
      iVar13 = 0;
      uVar3 = 0;
      local_108 = uVar20;
      local_104 = iVar12;
      local_f0 = uVar6;
      local_d0 = uVar24;
      if (uVar1 != 0) {
        puVar4 = *(uint **)(local_110 + 0x28);
        if (*(uint **)(local_110 + 0x28) == (uint *)0x0) {
          puVar4 = local_e8;
        }
        uVar3 = *puVar4;
        if (uVar3 == 0) {
          iVar12 = uVar1 + 0x1e;
          if (-1 < (int)(uVar1 - 1)) {
            iVar12 = uVar1 - 1;
          }
          uVar22 = 0;
          uVar6 = (ulonglong)(uint)(iVar12 >> 5);
          if (iVar12 >> 5 < 1) {
            uVar6 = 0;
          }
          iVar13 = 0;
          do {
            if (uVar6 == uVar22) goto LAB_14282bbae;
            iVar13 = iVar13 + 0x20;
            uVar3 = puVar4[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar3 == 0);
        }
        else {
          uVar22 = 0;
        }
        uVar11 = (ulonglong)(-uVar3 & uVar3);
        uVar6 = uVar11 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar3 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if ((int)uVar1 <= (int)uVar3) {
          uVar3 = uVar1;
        }
      }
      if (uVar3 != uVar1) {
        uVar20 = 0xffffffff;
        do {
          puVar15 = (undefined8 *)((longlong)(int)uVar3 * 0x18 + *local_e0);
          FUN_1400b22c2(&local_88,&DAT_149dfc0cb);
          iVar12 = (int)local_80 + -1;
          if ((int)local_80 == 0) {
            iVar12 = 0;
          }
          LVar7.QuadPart = (LONGLONG)&DAT_149dfb77a;
          if ((int)local_80 != 0) {
            LVar7 = local_88;
          }
          uStack_170 = CONCAT44(uStack_170._4_4_,0xffffffff);
          local_178 = (wchar_t *)((ulonglong)local_178 & 0xffffffff00000000);
          iVar12 = FUN_1447ee042(puVar15,LVar7.QuadPart,iVar12);
          if ((code *)local_88.QuadPart != (code *)0x0) {
            FUN_1400020a8();
          }
          if (iVar12 == -1) {
            FUN_140056680(&local_88,L"/Script/");
            FUN_140056680(&local_c8,L"/Game/");
            uVar3 = (int)local_80 - 1;
            if ((int)local_80 == 0) {
              uVar3 = 0;
            }
            LVar7.QuadPart = (LONGLONG)&DAT_149dfb77a;
            if ((int)local_80 != 0) {
              LVar7 = local_88;
            }
            if ((int)uVar3 < 1) {
LAB_14282bf99:
              puVar9 = local_c8;
              uVar3 = (int)uStack_c0 - 1;
              if ((int)uStack_c0 == 0) {
                puVar9 = &DAT_149dfb77a;
                uVar3 = 0;
              }
              if ((int)uVar3 < 1) goto LAB_14282c0f6;
              puVar8 = &DAT_149dfb77a;
              if (*(int *)(puVar15 + 1) != 0) {
                puVar8 = (undefined2 *)*puVar15;
              }
              uVar6 = (ulonglong)uVar3;
              lVar14 = 0;
              while( true ) {
                uVar17 = *(ushort *)((longlong)puVar8 + lVar14);
                uVar24 = (ulonglong)uVar17;
                uVar19 = *(ushort *)((longlong)puVar9 + lVar14);
                if (uVar17 != uVar19) break;
                if (uVar17 == 0) goto LAB_14282c034;
LAB_14282bff8:
                uVar6 = uVar6 - 1;
                if (uVar6 == 0) goto LAB_14282c034;
                lVar14 = lVar14 + 2;
              }
              if ((uVar19 | uVar17) < 0x80) {
                uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
                uVar21 = (ulonglong)uVar19;
                uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
                if ((&DAT_149e05da0)[uVar24] == (&DAT_149e05da0)[uVar21]) goto LAB_14282bff8;
              }
              if (uVar17 != uVar19) goto LAB_14282c0f6;
LAB_14282c034:
              puVar9 = &DAT_149dfb77a;
              if (*(int *)(puVar15 + 1) != 0) {
                puVar9 = (undefined2 *)*puVar15;
              }
              if (DAT_14c949118 == 0) {
                local_98 = FUN_140631fbe;
                if (DAT_14c963f04 == '\0') {
                  uVar5 = FUN_140011aa6();
                  lVar14 = FUN_140011c0e(uVar5,0x250,8);
                }
                else {
                  lVar14 = FUN_14001cc68(0x250,8);
                }
                DAT_14c949118 = lVar14;
                FUN_1446f470e(local_90,L"Class",1);
                local_140 = &local_98;
                local_148 = &LAB_146891e90;
                local_150 = (code *)&LAB_146273097;
                local_160 = L"Engine";
                local_158 = (wchar_t *)CONCAT44(local_158._4_4_,199);
                local_168 = 0x20;
                uStack_170._0_4_ = 0x10000000;
                local_178._0_4_ = 8;
                FUN_14574b4b2(lVar14);
                DAT_14c949118 = lVar14;
                if (DAT_14c951858 == 0) {
                  local_68 = (undefined2 **)FUN_1449e2820;
                  local_130 = FUN_14081d0ea;
                  local_138 = FUN_14081d0ea;
                  local_140 = (code **)&local_68;
                  local_148 = &LAB_1468c5283;
                  local_150 = FUN_142809da0;
                  local_158 = L"Engine";
                  local_160 = (wchar_t *)0x400000000;
                  local_168 = CONCAT44(local_168._4_4_,0x10000000);
                  uStack_170._0_4_ = 8;
                  local_178._0_4_ = 0x50;
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                }
                lVar25 = DAT_14c951858;
                lVar14 = DAT_14c949118;
                if (DAT_14c948f88 == 0) {
                  local_78 = (code *)&DAT_1427db2a2;
                  if (DAT_14c963f04 == '\0') {
                    uVar5 = FUN_140011aa6();
                    DAT_14c948f88 = FUN_140011c0e(uVar5,0x250,8);
                  }
                  else {
                    DAT_14c948f88 = FUN_14001cc68(0x250,8);
                  }
                  local_120 = DAT_14c948f88;
                  FUN_1446f470e(local_70,L"Struct",1);
                  local_140 = &local_78;
                  local_148 = &LAB_146891313;
                  local_150 = FUN_146272f63;
                  local_160 = L"Engine";
                  local_158 = (wchar_t *)CONCAT44(local_158._4_4_,199);
                  local_168 = 8;
                  uStack_170._0_4_ = 0x10000020;
                  local_178._0_4_ = 8;
                  FUN_14574b4b2(local_120);
                  DAT_14c948f88 = local_120;
                  local_128 = DAT_14c927740;
                  if (DAT_14c927740 == 0) {
                    local_68 = (undefined2 **)FUN_1449e2820;
                    local_130 = FUN_14081d0ea;
                    local_138 = FUN_14081d0ea;
                    local_140 = (code **)&local_68;
                    local_148 = &LAB_146856450;
                    local_150 = FUN_1427b121c;
                    local_158 = L"Engine";
                    local_160 = (wchar_t *)0x0;
                    local_168 = CONCAT44(local_168._4_4_,0x10000021);
                    uStack_170._0_4_ = 8;
                    local_178._0_4_ = 0x28;
                    FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
                    local_120 = DAT_14c948f88;
                  }
                  DAT_14c948f88 = local_120;
                  local_128 = DAT_14c927740;
                  uVar5 = FUN_1400163b0();
                  local_178 = L"Struct";
                  FUN_14574b446(uVar5,local_120,local_128,L"/Script/CoreUObject");
                }
                local_178 = L"Class";
                FUN_14574b446(DAT_14c948f88,lVar14,lVar25,L"/Script/CoreUObject");
              }
              local_160 = (wchar_t *)0x0;
              uStack_170 = 0;
              local_168 = CONCAT71(local_168._1_7_,1);
              local_178 = (wchar_t *)((ulonglong)local_178 & 0xffffffff00000000);
              lVar14 = FUN_1412ecd05(DAT_14c949118,0,puVar9,0);
            }
            else {
              puVar9 = &DAT_149dfb77a;
              if (*(int *)(puVar15 + 1) != 0) {
                puVar9 = (undefined2 *)*puVar15;
              }
              uVar6 = (ulonglong)uVar3;
              lVar14 = 0;
              while( true ) {
                uVar17 = *(ushort *)((longlong)puVar9 + lVar14);
                uVar24 = (ulonglong)uVar17;
                uVar19 = *(ushort *)(LVar7.QuadPart + lVar14);
                if (uVar17 != uVar19) break;
                if (uVar17 == 0) goto LAB_14282c079;
LAB_14282bf59:
                uVar6 = uVar6 - 1;
                if (uVar6 == 0) goto LAB_14282c079;
                lVar14 = lVar14 + 2;
              }
              if ((uVar19 | uVar17) < 0x80) {
                uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
                uVar21 = (ulonglong)uVar19;
                uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
                if ((&DAT_149e05da0)[uVar24] == (&DAT_149e05da0)[uVar21]) goto LAB_14282bf59;
              }
              if (uVar17 != uVar19) goto LAB_14282bf99;
LAB_14282c079:
              puVar9 = &DAT_149dfb77a;
              if (*(int *)(puVar15 + 1) != 0) {
                puVar9 = (undefined2 *)*puVar15;
              }
              if (DAT_14c949118 == 0) {
                local_98 = FUN_140631fbe;
                if (DAT_14c963f04 == '\0') {
                  uVar5 = FUN_140011aa6();
                  lVar14 = FUN_140011c0e(uVar5,0x250,8);
                }
                else {
                  lVar14 = FUN_14001cc68(0x250,8);
                }
                DAT_14c949118 = lVar14;
                FUN_1446f470e(local_90,L"Class",1);
                local_140 = &local_98;
                local_148 = &LAB_146891e90;
                local_150 = (code *)&LAB_146273097;
                local_160 = L"Engine";
                local_158 = (wchar_t *)CONCAT44(local_158._4_4_,199);
                local_168 = 0x20;
                uStack_170 = CONCAT44(uStack_170._4_4_,0x10000000);
                local_178._0_4_ = 8;
                FUN_14574b4b2(lVar14);
                local_120 = DAT_14c951858;
                DAT_14c949118 = lVar14;
                if (DAT_14c951858 == 0) {
                  local_68 = (undefined2 **)FUN_1449e2820;
                  local_130 = FUN_14081d0ea;
                  local_138 = FUN_14081d0ea;
                  local_140 = (code **)&local_68;
                  local_148 = &LAB_1468c5283;
                  local_150 = FUN_142809da0;
                  local_158 = L"Engine";
                  local_160 = (wchar_t *)0x400000000;
                  local_168 = CONCAT44(local_168._4_4_,0x10000000);
                  uStack_170 = CONCAT44(uStack_170._4_4_,8);
                  local_178._0_4_ = 0x50;
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                }
                lVar14 = DAT_14c949118;
                local_120 = DAT_14c951858;
                if (DAT_14c948f88 == 0) {
                  local_78 = (code *)&DAT_1427db2a2;
                  if (DAT_14c963f04 == '\0') {
                    uVar5 = FUN_140011aa6();
                    DAT_14c948f88 = FUN_140011c0e(uVar5,0x250,8);
                  }
                  else {
                    DAT_14c948f88 = FUN_14001cc68(0x250,8);
                  }
                  local_128 = DAT_14c948f88;
                  FUN_1446f470e(local_70,L"Struct",1);
                  local_140 = &local_78;
                  local_148 = &LAB_146891313;
                  local_150 = FUN_146272f63;
                  local_160 = L"Engine";
                  local_158 = (wchar_t *)CONCAT44(local_158._4_4_,199);
                  local_168 = 8;
                  uStack_170 = CONCAT44(uStack_170._4_4_,0x10000020);
                  local_178._0_4_ = 8;
                  FUN_14574b4b2(local_128);
                  DAT_14c948f88 = local_128;
                  local_118 = DAT_14c927740;
                  if (DAT_14c927740 == 0) {
                    local_68 = (undefined2 **)FUN_1449e2820;
                    local_130 = FUN_14081d0ea;
                    local_138 = FUN_14081d0ea;
                    local_140 = (code **)&local_68;
                    local_148 = &LAB_146856450;
                    local_150 = FUN_1427b121c;
                    local_158 = L"Engine";
                    local_160 = (wchar_t *)0x0;
                    local_168 = CONCAT44(local_168._4_4_,0x10000021);
                    uStack_170 = CONCAT44(uStack_170._4_4_,8);
                    local_178._0_4_ = 0x28;
                    FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
                    local_128 = DAT_14c948f88;
                  }
                  DAT_14c948f88 = local_128;
                  local_118 = DAT_14c927740;
                  uVar5 = FUN_1400163b0();
                  local_178 = L"Struct";
                  FUN_14574b446(uVar5,local_128,local_118,L"/Script/CoreUObject");
                }
                local_178 = L"Class";
                FUN_14574b446(DAT_14c948f88,lVar14,local_120,L"/Script/CoreUObject");
              }
              local_178 = (wchar_t *)0x0;
              lVar14 = FUN_140277cc4(DAT_14c949118,puVar9,0xe,0);
            }
            uVar6 = uStack_a0;
            if ((lVar14 != 0) && ((*(byte *)(lVar14 + 0xd4) & 4) != 0)) {
              iVar12 = (int)uStack_a0;
              uVar3 = (int)uStack_a0 + 1;
              uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar3);
              puVar15 = local_a8;
              if (uStack_a0._4_4_ < uVar3) {
                FUN_1469006c0(&local_a8,uVar6 & 0xffffffff);
                puVar15 = local_a8;
              }
LAB_14282c0ea:
              puVar15[iVar12] = lVar14;
            }
          }
          else {
            iVar18 = *(int *)(puVar15 + 1);
            puVar9 = &DAT_149dfb77a;
            if (iVar18 != 0) {
              puVar9 = (undefined2 *)*puVar15;
            }
            iVar16 = iVar18 + -1;
            if (iVar18 == 0) {
              iVar16 = 0;
            }
            if (iVar12 < iVar16) {
              iVar16 = iVar12;
            }
            if (iVar16 < 1) {
              iVar16 = 0;
            }
            FUN_14006620a(&local_88,puVar9,iVar16);
            iVar18 = *(int *)(puVar15 + 1);
            puVar9 = &DAT_149dfb77a;
            if (iVar18 != 0) {
              puVar9 = (undefined2 *)*puVar15;
            }
            uVar3 = iVar18 - 1;
            if (iVar18 == 0) {
              uVar3 = 0;
            }
            uVar23 = iVar12 + 1U;
            if ((int)uVar3 <= (int)(iVar12 + 1U)) {
              uVar23 = uVar3;
            }
            if ((int)uVar23 < 1) {
              uVar23 = 0;
            }
            FUN_14006620a(&local_c8,puVar9 + uVar23,uVar3 - uVar23);
            puVar9 = &DAT_149dfb77a;
            if ((int)uStack_c0 != 0) {
              puVar9 = local_c8;
            }
            if (DAT_14c949118 == 0) {
              local_98 = FUN_140631fbe;
              if (DAT_14c963f04 == '\0') {
                uVar5 = FUN_140011aa6();
                lVar14 = FUN_140011c0e(uVar5,0x250,8);
              }
              else {
                lVar14 = FUN_14001cc68(0x250,8);
              }
              DAT_14c949118 = lVar14;
              FUN_1446f470e(local_90,L"Class",1);
              local_140 = &local_98;
              local_148 = &LAB_146891e90;
              local_150 = (code *)&LAB_146273097;
              local_160 = L"Engine";
              local_158 = (wchar_t *)CONCAT44(local_158._4_4_,199);
              local_168 = 0x20;
              uStack_170 = CONCAT44(uStack_170._4_4_,0x10000000);
              local_178._0_4_ = 8;
              FUN_14574b4b2(lVar14);
              local_120 = DAT_14c951858;
              DAT_14c949118 = lVar14;
              if (DAT_14c951858 == 0) {
                local_68 = (undefined2 **)FUN_1449e2820;
                local_130 = FUN_14081d0ea;
                local_138 = FUN_14081d0ea;
                local_140 = (code **)&local_68;
                local_148 = &LAB_1468c5283;
                local_150 = FUN_142809da0;
                local_158 = L"Engine";
                local_160 = (wchar_t *)0x400000000;
                local_168 = CONCAT44(local_168._4_4_,0x10000000);
                uStack_170 = CONCAT44(uStack_170._4_4_,8);
                local_178._0_4_ = 0x50;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
              }
              lVar14 = DAT_14c949118;
              local_120 = DAT_14c951858;
              if (DAT_14c948f88 == 0) {
                local_78 = (code *)&DAT_1427db2a2;
                if (DAT_14c963f04 == '\0') {
                  uVar5 = FUN_140011aa6();
                  DAT_14c948f88 = FUN_140011c0e(uVar5,0x250,8);
                }
                else {
                  DAT_14c948f88 = FUN_14001cc68(0x250,8);
                }
                local_128 = DAT_14c948f88;
                FUN_1446f470e(local_70,L"Struct",1);
                local_140 = &local_78;
                local_148 = &LAB_146891313;
                local_150 = FUN_146272f63;
                local_160 = L"Engine";
                local_158 = (wchar_t *)CONCAT44(local_158._4_4_,199);
                local_168 = 8;
                uStack_170 = CONCAT44(uStack_170._4_4_,0x10000020);
                local_178._0_4_ = 8;
                FUN_14574b4b2(local_128);
                DAT_14c948f88 = local_128;
                local_118 = DAT_14c927740;
                if (DAT_14c927740 == 0) {
                  local_68 = (undefined2 **)FUN_1449e2820;
                  local_130 = FUN_14081d0ea;
                  local_138 = FUN_14081d0ea;
                  local_140 = (code **)&local_68;
                  local_148 = &LAB_146856450;
                  local_150 = FUN_1427b121c;
                  local_158 = L"Engine";
                  local_160 = (wchar_t *)0x0;
                  local_168 = CONCAT44(local_168._4_4_,0x10000021);
                  uStack_170 = CONCAT44(uStack_170._4_4_,8);
                  local_178._0_4_ = 0x28;
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
                  local_128 = DAT_14c948f88;
                }
                DAT_14c948f88 = local_128;
                local_118 = DAT_14c927740;
                uVar5 = FUN_1400163b0();
                local_178 = L"Struct";
                FUN_14574b446(uVar5,local_128,local_118,L"/Script/CoreUObject");
              }
              local_178 = L"Class";
              FUN_14574b446(DAT_14c948f88,lVar14,local_120,L"/Script/CoreUObject");
            }
            local_178 = L"UGameFeatureData::ReloadConfigs";
            lVar14 = FUN_140277cc4(DAT_14c949118,puVar9,0xc,2);
            if ((lVar14 != 0) && ((*(byte *)(lVar14 + 0xd4) & 4) != 0)) {
              LVar7.QuadPart = (LONGLONG)&DAT_149dfb77a;
              if ((int)local_80 != 0) {
                LVar7 = local_88;
              }
              local_178 = L"UObjectBaseUtility::ReloadObjectsFromModifiedConfigSections";
              lVar14 = FUN_140277cc4(lVar14,LVar7.QuadPart,2,3);
              uVar6 = uStack_b0;
              if ((lVar14 != 0) && ((*(uint *)(lVar14 + 8) >> 0x1e & 1) == 0)) {
                iVar12 = (int)uStack_b0;
                uVar3 = (int)uStack_b0 + 1;
                uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar3);
                puVar15 = local_b8;
                if (uStack_b0._4_4_ < uVar3) {
                  FUN_1447f76d2(&local_b8,uVar6 & 0xffffffff);
                  puVar15 = local_b8;
                }
                goto LAB_14282c0ea;
              }
            }
          }
LAB_14282c0f6:
          if (local_c8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if ((code *)local_88.QuadPart != (code *)0x0) {
            FUN_1400020a8();
          }
          uVar20 = uVar20 & ~(uint)uVar11;
          puVar4 = *(uint **)(local_110 + 0x28);
          if (*(uint **)(local_110 + 0x28) == (uint *)0x0) {
            puVar4 = local_e8;
          }
          uVar23 = *(uint *)(local_110 + 0x30);
          iVar12 = (int)uVar22;
          lVar14 = (longlong)iVar12;
          uVar3 = puVar4[lVar14] & uVar20;
          if (uVar3 == 0) {
            iVar18 = uVar23 + 0x1e;
            if (-1 < (int)(uVar23 - 1)) {
              iVar18 = uVar23 - 1;
            }
            iVar18 = iVar18 >> 5;
            iVar13 = iVar13 + 0x20;
            iVar16 = iVar18;
            if (iVar18 < iVar12) {
              iVar16 = iVar12;
            }
            if (iVar12 < iVar18) {
              lVar25 = 0;
              do {
                uVar3 = puVar4[lVar14 + lVar25 + 1];
                if (uVar3 != 0) {
                  uVar22 = (ulonglong)(iVar12 + (int)lVar25 + 1);
                  uVar20 = 0xffffffff;
                  goto LAB_14282c19d;
                }
                iVar13 = iVar13 + 0x20;
                lVar25 = lVar25 + 1;
              } while (iVar16 - lVar14 != lVar25);
              uVar20 = 0xffffffff;
              lVar14 = (longlong)iVar16;
            }
            uVar22 = lVar14 + 1U & 0xffffffff;
            uVar3 = uVar23;
          }
          else {
LAB_14282c19d:
            uVar11 = (ulonglong)(-uVar3 & uVar3);
            uVar6 = uVar11 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar6 != 0) {
              for (; uVar6 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            uVar3 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
            if ((int)uVar23 <= (int)uVar3) {
              uVar3 = uVar23;
            }
          }
        } while (uVar3 != uVar1);
      }
LAB_14282bbae:
      uVar5 = FUN_145857cde();
      FUN_1400021e4(local_110,&local_88);
      FUN_146900746(uVar5,&local_88,local_e0);
      if ((code *)local_88.QuadPart != (code *)0x0) {
        FUN_1400020a8();
      }
      uVar20 = local_108 & ~(uint)local_f0;
      puVar4 = *(uint **)(local_f8 + 0x28);
      if (*(uint **)(local_f8 + 0x28) == (uint *)0x0) {
        puVar4 = local_d8;
      }
      uVar1 = *(uint *)(local_f8 + 0x30);
      iVar13 = (int)local_d0;
      lVar14 = (longlong)iVar13;
      uVar3 = puVar4[lVar14] & uVar20;
      uVar24 = local_d0;
      iVar12 = local_104;
      if (uVar3 == 0) {
        iVar18 = uVar1 + 0x1e;
        if (-1 < (int)(uVar1 - 1)) {
          iVar18 = uVar1 - 1;
        }
        iVar18 = iVar18 >> 5;
        iVar12 = local_104 + 0x20;
        iVar16 = iVar18;
        if (iVar18 < iVar13) {
          iVar16 = iVar13;
        }
        if (iVar13 < iVar18) {
          lVar25 = 0;
          do {
            uVar3 = puVar4[lVar14 + lVar25 + 1];
            if (uVar3 != 0) {
              uVar24 = (ulonglong)(iVar13 + (int)lVar25 + 1);
              uVar20 = 0xffffffff;
              goto LAB_14282bca8;
            }
            iVar12 = iVar12 + 0x20;
            lVar25 = lVar25 + 1;
          } while (iVar16 - lVar14 != lVar25);
          uVar20 = 0xffffffff;
          iVar13 = iVar16;
        }
        uVar24 = (ulonglong)(iVar13 + 1);
        uVar6 = local_f0;
        uVar3 = uVar1;
      }
      else {
LAB_14282bca8:
        uVar6 = (ulonglong)(-uVar3 & uVar3);
        uVar11 = uVar6 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar3 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if ((int)uVar1 <= (int)uVar3) {
          uVar3 = uVar1;
        }
      }
    } while (uVar3 != (uint)local_100);
  }
LAB_14282b90c:
  QueryPerformanceCounter(&local_88);
  if ((longlong)(int)uStack_a0 != 0) {
    puVar15 = local_a8 + (int)uStack_a0;
    puVar10 = local_a8;
    do {
      local_c8 = (undefined2 *)0x0;
      uStack_c0 = 0;
      local_68 = &local_c8;
      local_88.QuadPart = (LONGLONG)FUN_142840874;
      local_178 = (wchar_t *)((ulonglong)local_178 & 0xffffffff00000000);
      local_80 = (code **)&local_68;
      FUN_140245161(*puVar10,&local_88,1,0);
      puVar9 = local_c8;
      lVar14 = (longlong)(int)uStack_c0;
      if (lVar14 != 0) {
        lVar25 = 0;
        do {
          lVar2 = *(longlong *)((longlong)puVar9 + lVar25);
          if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
            local_178 = (wchar_t *)0x0;
            uStack_170 = 0;
            FUN_1400033ba(lVar2,0,0);
          }
          lVar25 = lVar25 + 8;
        } while (lVar14 * 8 != lVar25);
      }
      if (local_c8 != (undefined2 *)0x0) {
        FUN_1400020a8(local_c8);
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar15);
  }
  puVar15 = local_b8;
  lVar14 = (longlong)(int)uStack_b0;
  if (lVar14 != 0) {
    lVar25 = 0;
    do {
      local_178 = (wchar_t *)0x0;
      uStack_170 = 0;
      FUN_1400033ba(*(undefined8 *)((longlong)puVar15 + lVar25),0,0,9);
      lVar25 = lVar25 + 8;
    } while (lVar14 * 8 != lVar25);
  }
  if (local_b8 != (undefined8 *)0x0) {
    FUN_1400020a8(local_b8);
  }
  if (local_a8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14282cd41 FUN_14282cd41 body=69 status=ok
// SIG undefined FUN_14282cd41(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14282cd41(void)

{
  _DAT_14c963fc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014282cd83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c963fc8,1);
  return;
}



// FUNCTION 14282cd86 FUN_14282cd86 body=69 status=ok
// SIG undefined FUN_14282cd86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14282cd86(void)

{
  _DAT_14c963fd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014282cdc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c963fd8,1);
  return;
}



// FUNCTION 14282cdcb FUN_14282cdcb body=69 status=ok
// SIG undefined FUN_14282cdcb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14282cdcb(void)

{
  _DAT_14c963fe0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014282ce0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c963fe8,1);
  return;
}



// FUNCTION 14282ce10 caseD_c body=616 status=ok
// SIG undefined caseD_c(void)

void switchD_143c3d4dc::caseD_c(longlong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong *local_170;
  undefined4 local_168;
  undefined4 local_160 [2];
  longlong local_158;
  longlong local_150;
  undefined4 *local_148;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined4 local_130;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)&local_138;
  uVar3 = *(uint *)(param_1 + 0xc);
  if ((int)uVar3 < DAT_14c9647dc) {
    lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
  }
  else {
    lVar9 = 0;
  }
  if ((*(int *)(lVar9 + 0xc) == 0) && ((*(uint *)(lVar9 + 8) >> 0x18 & 1) == 0)) {
    uVar3 = FUN_141313e12(&DAT_14c9640e8);
    lVar8 = DAT_14c9640e8;
    lVar6 = DAT_14c9640e8 + (longlong)(int)uVar3 * 0x50;
    plVar7 = (longlong *)(lVar6 + 8);
    if (*(int *)(lVar6 + 0x14) < 0x40) {
      FUN_14481578e(plVar7,0x40);
    }
    lVar8 = lVar8 + (longlong)(int)uVar3 * 0x50;
    lVar6 = param_1;
LAB_14282cecc:
    lVar5 = lVar6;
    local_150 = lVar5;
    if (*(longlong *)(lVar5 + 0x20) != 0) goto code_r0x00014282cedb;
    goto LAB_14282ceed;
  }
  goto LAB_14282d04b;
code_r0x00014282cedb:
  lVar6 = *(longlong *)(lVar5 + 0x20);
  if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) goto LAB_14282cecc;
  local_150 = FUN_142840154(lVar5);
LAB_14282ceed:
  if (local_150 == 0) {
    lVar6 = *(longlong *)(lVar5 + 0x20);
    goto LAB_14282cecc;
  }
  local_160[0] = *(undefined4 *)(param_1 + 0xc);
  local_158 = lVar8;
  FUN_14002fb26(local_140);
  local_170 = (longlong *)0x0;
  local_168 = 1;
  FUN_14010590e(&local_170,1,0);
  *local_170 = param_1;
  FUN_14079e744(&local_170);
  local_138 = local_170;
  local_130 = local_168;
  local_148 = local_160;
  FUN_14282d85c(&local_148,local_140);
  *(uint *)(lVar9 + 0xc) = ~uVar3;
  do {
    uVar1 = *(uint *)(lVar9 + 8);
    if ((uVar1 >> 0x18 & 1) != 0) break;
    LOCK();
    bVar10 = uVar1 == *(uint *)(lVar9 + 8);
    if (bVar10) {
      *(uint *)(lVar9 + 8) = uVar1 | 0x1000000;
    }
    UNLOCK();
  } while (!bVar10);
  iVar2 = *(int *)(lVar8 + 0x10);
  iVar4 = 1;
  if (1 < DAT_14c75ecd4) {
    iVar4 = DAT_14c75ecd4;
  }
  if (iVar2 < iVar4) {
    if (iVar2 != 0) {
      lVar9 = *plVar7;
      lVar6 = 0;
      do {
        uVar1 = *(uint *)(lVar9 + lVar6);
        *(undefined4 *)
         (*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8) + 0xc +
         (ulonglong)(uVar1 & 0xffff) * 0x18) = 0;
        lVar6 = lVar6 + 4;
      } while ((longlong)iVar2 * 4 != lVar6);
    }
    FUN_140d631ae(&DAT_14c9640e8,uVar3);
  }
  else {
    FUN_144958a06(*(undefined8 *)(lVar8 + 8));
    FUN_144958a06(*(undefined8 *)(lVar8 + 0x18),*(undefined4 *)(lVar8 + 0x20));
    FUN_144958a06(*(undefined8 *)(lVar8 + 0x28),*(undefined4 *)(lVar8 + 0x30));
  }
  if (local_170 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_140ea1d7a(local_140);
LAB_14282d04b:
  if ((local_50 ^ (ulonglong)&local_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14282d079 FUN_14282d079 body=41 status=ok
// SIG undefined FUN_14282d079(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14282d079(void)

{
  _DAT_14c964040 = 0;
  if (DAT_14c964038 != 0) {
    FUN_1400020a8();
  }
  FUN_145d383c2();
  return;
}



// FUNCTION 14282d0a2 FUN_14282d0a2 body=109 status=ok
// SIG undefined FUN_14282d0a2(void)

void FUN_14282d0a2(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  puVar6 = DAT_14c963f68;
  DAT_14c963f68 = (undefined4 *)0x0;
  DAT_14c963f60 = 0;
  while (puVar6 != (undefined4 *)0x0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_146276950(param_1,iVar2);
    }
    uVar3 = puVar6[1];
    uVar4 = puVar6[2];
    uVar5 = puVar6[3];
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar2 * 0x10);
    *puVar1 = *puVar6;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    puVar1 = *(undefined4 **)(puVar6 + 2);
    FUN_1400020a8(puVar6);
    puVar6 = puVar1;
  }
  return;
}



// FUNCTION 14282d110 FUN_14282d110 body=187 status=ok
// SIG undefined FUN_14282d110(void)

void FUN_14282d110(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14282d1b3;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14282d1b3:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14282d1cc FUN_14282d1cc body=200 status=ok
// SIG undefined FUN_14282d1cc(void)

void FUN_14282d1cc(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar1 = (int)param_2[1];
  uVar3 = uVar2 + iVar1;
  if (uVar2 < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_140e83416(param_1,uVar3);
    iVar1 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar1)) {
      *(int *)(param_1 + 0x48) = iVar1;
      FUN_14482b9e8(param_1);
    }
    iVar1 = (int)param_2[1];
  }
  if (iVar1 != 0) {
    lVar4 = *param_2;
    lVar5 = (longlong)iVar1 << 4;
    do {
      FUN_14482b35e(param_1,local_2c,lVar4,0);
      lVar4 = lVar4 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14282d2a8 FUN_14282d2a8 body=659 status=ok
// SIG undefined FUN_14282d2a8(void)

void FUN_14282d2a8(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 0) {
    return;
  }
  plVar1 = param_1 + 7;
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_14282d323;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_14282d323:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar4 = 0;
    iVar12 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x20;
      uVar2 = ((uint)(*(ulonglong *)(lVar6 + lVar13) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar13) >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x1c + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x18 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 14282d53c FUN_14282d53c body=208 status=ok
// SIG undefined FUN_14282d53c(void)

void FUN_14282d53c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x800) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 14282d60c FUN_14282d60c body=262 status=ok
// SIG undefined FUN_14282d60c(void)

void FUN_14282d60c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14282d752 FUN_14282d752 body=190 status=ok
// SIG undefined FUN_14282d752(void)

void FUN_14282d752(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14c9646a0;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14c9646ac = DAT_14c9646ac + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14c964698 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14c964698 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2), cVar3 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14c9646ac = DAT_14c9646ac + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_14282d7f7;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14c9646ac = DAT_14c9646ac + -1;
LAB_14282d7f7:
  FUN_14474d06a(&DAT_14c964698,0);
  return;
}



// FUNCTION 14282d822 FUN_14282d822 body=56 status=ok
// SIG undefined FUN_14282d822(void)

void FUN_14282d822(void)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [8];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_145d3c136(local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14282d85c FUN_14282d85c body=12206 status=ok
// SIG undefined FUN_14282d85c(void)

void FUN_14282d85c(undefined8 *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  ushort *puVar12;
  longlong *plVar13;
  ushort *puVar14;
  longlong *plVar15;
  uint uVar16;
  ulonglong uVar17;
  uint *puVar18;
  longlong *plVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  longlong *plVar24;
  longlong lVar25;
  longlong lVar26;
  uint uVar27;
  ushort *puVar28;
  longlong lVar29;
  longlong lVar30;
  ushort *puVar31;
  undefined1 auStack_198 [32];
  longlong *local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  wchar_t *local_158;
  code *local_150;
  undefined1 *local_148;
  code **local_140;
  code *local_138;
  code *local_130;
  longlong local_120;
  longlong local_118;
  longlong *local_110;
  ushort *local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong local_f0;
  ulonglong local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  int *local_b0;
  longlong *local_a8;
  undefined ***local_a0;
  undefined **local_98;
  undefined8 *local_90;
  int *local_88;
  longlong *local_80;
  int local_74;
  code *local_70;
  undefined8 local_68;
  byte local_60;
  uint local_5c;
  byte local_58;
  uint local_54;
  byte local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  *(undefined2 *)(param_2 + 0xf) = 0x100;
  local_b0 = (int *)*param_1;
  local_a0 = &local_98;
  local_90 = (undefined8 *)0x0;
  local_98 = &PTR_FUN_149eae620;
  *param_2 = DAT_14c948580;
  local_e0 = param_2;
  local_a8 = param_2;
  local_88 = local_b0;
  local_80 = param_2;
  if ((longlong)(int)param_2[8] == 0) {
LAB_14282dc95:
    local_d8 = (longlong *)local_e0[1];
    uVar20 = (ulonglong)*(uint *)(local_e0 + 2);
    local_d0 = local_e0 + 3;
    while ((int)uVar20 == 0) {
LAB_142830741:
      plVar15 = local_e0;
      if (local_d8 != (longlong *)local_e0[1]) {
        FUN_1427e285c(local_d0);
      }
      plVar13 = (longlong *)plVar15[5];
      if (plVar13 == (longlong *)0x0) {
        uVar20 = (plVar15[3] - plVar15[4]) - 8U >> 3;
        if (((int)uVar20 == 0) ||
           (plVar13 = (longlong *)FUN_141716000(local_d0), plVar13 == (longlong *)0x0)) {
          local_98 = &PTR_LAB_149eb0140;
          if (local_90 != (undefined8 *)0x0) {
            (**(code **)*local_90)(local_90,1);
          }
          if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          return;
        }
      }
      else {
        plVar15[5] = *plVar13;
        uVar20 = 0x1ef;
      }
      local_d8 = plVar13 + 1;
    }
    local_c8 = local_d8 + (int)uVar20;
    uVar22 = *(undefined8 *)(local_d8[1] + 0x10);
    plVar15 = local_d8;
LAB_14282dcea:
    lVar26 = *plVar15;
    puVar31 = *(ushort **)(lVar26 + 0x10);
    plVar13 = *(longlong **)(lVar26 + 0x20);
    local_c0 = uVar22;
    local_b8 = plVar15;
    if ((puVar31[0x6b] & 0x40) == 0) {
      FUN_1408a750e(puVar31,0);
    }
    plVar15 = local_a8;
    piVar3 = local_b0;
    uVar20 = *(ulonglong *)(puVar31 + 0xf4);
    *local_a8 = lVar26;
    lVar7 = DAT_14c9640e8;
    local_f0 = lVar26;
    if (puVar31 != (ushort *)0x0) {
      uVar6 = *(uint *)(puVar31 + 6);
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar26 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar26 = 0;
      }
      if (*(int *)(lVar26 + 0xc) == *local_b0) goto LAB_14282df21;
      puVar18 = (uint *)(puVar31 + 6);
      if ((*(uint *)(lVar26 + 8) & 0x1000000) != 0 || *(int *)(lVar26 + 0xc) != 0) {
        if ((*(uint *)(lVar26 + 8) >> 0x18 & 1) == 0) {
          puVar18 = (uint *)(lVar26 + 0xc);
        }
        uVar6 = *puVar18;
        local_68 = (code *)CONCAT44(local_68._4_4_,uVar6);
        if ((int)uVar6 < DAT_14c9647dc) {
          lVar26 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
        }
        else {
          lVar26 = 0;
        }
        lVar26 = ~(longlong)*(int *)(lVar26 + 0xc) * 0x50;
        FUN_1449e3bb0(*(longlong *)(local_b0 + 2) + 0x18,&local_68);
        FUN_1449e3bb0(lVar7 + lVar26 + 0x38,piVar3);
        lVar25 = (longlong)*(int *)(lVar7 + lVar26 + 0x20);
        if (lVar25 != 0) {
          lVar29 = *(longlong *)(lVar7 + 0x18 + lVar26);
          lVar30 = 0;
          do {
            iVar2 = *(int *)(lVar29 + lVar30);
            local_70 = (code *)CONCAT44(local_70._4_4_,iVar2);
            if (iVar2 != *piVar3) {
              FUN_1449e3bb0(*(longlong *)(piVar3 + 2) + 0x18,&local_70);
            }
            lVar30 = lVar30 + 4;
          } while (lVar25 * 4 != lVar30);
        }
        lVar25 = (longlong)*(int *)(lVar7 + lVar26 + 0x30);
        if (lVar25 != 0) {
          lVar26 = *(longlong *)(lVar7 + lVar26 + 0x28);
          lVar7 = 0;
          do {
            local_70 = (code *)CONCAT44(local_70._4_4_,*(undefined4 *)(lVar26 + lVar7));
            FUN_1449e3bb0(*(longlong *)(piVar3 + 2) + 0x28,&local_70);
            lVar7 = lVar7 + 4;
          } while (lVar25 * 4 != lVar7);
        }
        goto LAB_14282df21;
      }
      if ((int)uVar6 <= DAT_14c9647bc) goto LAB_14282df21;
      cVar4 = (**(code **)(*(longlong *)puVar31 + 0x28))(puVar31);
      if (cVar4 == '\0') {
        uVar6 = *puVar18;
LAB_14282df05:
        local_68 = (code *)CONCAT44(local_68._4_4_,uVar6);
        FUN_144aa221c(*(longlong *)(piVar3 + 2) + 0x28,&local_68);
        goto LAB_14282df21;
      }
      uVar6 = *(uint *)(puVar31 + 6);
      if ((*(uint *)(puVar31 + 4) & 0x1400) != 0) goto LAB_14282df05;
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) != 0) goto LAB_14282df05;
      puVar28 = *(ushort **)(piVar3 + 4);
      if (DAT_14c951858 == 0) {
        local_68 = FUN_1449e2820;
        local_130 = FUN_14081d0ea;
        local_138 = FUN_14081d0ea;
        local_140 = (code **)&local_68;
        local_148 = &LAB_1468c5283;
        local_150 = FUN_142809da0;
        local_158 = L"Engine";
        local_160 = 0x400000000;
        local_168 = 0x10000000;
        local_170 = 8;
        local_178 = (longlong *)CONCAT44(local_178._4_4_,0x50);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      puVar14 = puVar31;
      if ((*(int *)(DAT_14c951858 + 0x38) <= *(int *)(*(longlong *)(puVar28 + 8) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(puVar28 + 8) + 0x30) +
           (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) == DAT_14c951858 + 0x30)) {
        if (puVar28 != puVar31) {
LAB_142830644:
          puVar12 = puVar14;
          puVar14 = puVar12;
          if (*(ushort **)(puVar12 + 0x10) != (ushort *)0x0) goto code_r0x000142830653;
          goto LAB_142830671;
        }
        goto LAB_14283067b;
      }
      do {
        puVar14 = *(ushort **)(puVar14 + 0x10);
      } while (puVar14 != puVar28 && puVar14 != (ushort *)0x0);
      if ((puVar28 != (ushort *)0x0) && (puVar14 == (ushort *)0x0)) goto LAB_14283067b;
      goto LAB_1428306a4;
    }
    goto LAB_14282df21;
  }
  puVar28 = (ushort *)param_2[7];
  puVar31 = puVar28 + (longlong)(int)param_2[8] * 4;
  local_108 = puVar31;
LAB_14282d903:
  plVar11 = local_a8;
  piVar3 = local_b0;
  lVar26 = DAT_14c9640e8;
  plVar15 = *(longlong **)puVar28;
  plVar13 = (longlong *)*plVar15;
  if (plVar13 != (longlong *)0x0) {
    uVar6 = *(uint *)((longlong)plVar13 + 0xc);
    if ((int)uVar6 < DAT_14c9647dc) {
      plVar19 = (longlong *)
                ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
    }
    else {
      plVar19 = (longlong *)0x0;
    }
    if (*(int *)((longlong)plVar19 + 0xc) == *local_b0) goto LAB_14282db2b;
    if ((*(uint *)(plVar19 + 1) & 0x1000000) != 0 || *(int *)((longlong)plVar19 + 0xc) != 0) {
      if ((*(uint *)(plVar19 + 1) >> 0x18 & 1) != 0) {
        plVar19 = plVar13;
      }
      uVar6 = *(uint *)((longlong)plVar19 + 0xc);
      local_68 = (code *)CONCAT44(local_68._4_4_,uVar6);
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      lVar25 = ~(longlong)*(int *)(lVar7 + 0xc) * 0x50;
      FUN_1449e3bb0(*(longlong *)(local_b0 + 2) + 0x18,&local_68);
      FUN_1449e3bb0(lVar26 + lVar25 + 0x38,piVar3);
      lVar7 = (longlong)*(int *)(lVar26 + lVar25 + 0x20);
      if (lVar7 != 0) {
        lVar29 = *(longlong *)(lVar26 + 0x18 + lVar25);
        lVar30 = 0;
        do {
          iVar2 = *(int *)(lVar29 + lVar30);
          local_70 = (code *)CONCAT44(local_70._4_4_,iVar2);
          if (iVar2 != *piVar3) {
            FUN_1449e3bb0(*(longlong *)(piVar3 + 2) + 0x18,&local_70);
          }
          lVar30 = lVar30 + 4;
        } while (lVar7 * 4 != lVar30);
      }
      lVar7 = (longlong)*(int *)(lVar26 + lVar25 + 0x30);
      puVar31 = local_108;
      if (lVar7 != 0) {
        lVar26 = *(longlong *)(lVar26 + lVar25 + 0x28);
        lVar25 = 0;
        do {
          local_70 = (code *)CONCAT44(local_70._4_4_,*(undefined4 *)(lVar26 + lVar25));
          FUN_1449e3bb0(*(longlong *)(piVar3 + 2) + 0x28,&local_70);
          lVar25 = lVar25 + 4;
          puVar31 = local_108;
        } while (lVar7 * 4 != lVar25);
      }
      goto LAB_14282db2b;
    }
    if ((int)uVar6 <= DAT_14c9647bc) goto LAB_14282db2b;
    cVar4 = (**(code **)(*plVar13 + 0x28))();
    lVar26 = *plVar15;
    if ((cVar4 != '\0') && ((*(uint *)(lVar26 + 8) & 0x1400) == 0)) {
      uVar6 = *(uint *)(lVar26 + 0xc);
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) != 0) goto LAB_14282db0c;
      lVar7 = *(longlong *)(piVar3 + 4);
      if (DAT_14c951858 == 0) {
        local_68 = FUN_1449e2820;
        local_130 = FUN_14081d0ea;
        local_138 = FUN_14081d0ea;
        local_140 = (code **)&local_68;
        local_148 = &LAB_1468c5283;
        local_150 = FUN_142809da0;
        local_158 = L"Engine";
        local_160 = 0x400000000;
        local_168 = 0x10000000;
        local_170 = 8;
        local_178 = (longlong *)CONCAT44(local_178._4_4_,0x50);
        local_118 = *(longlong *)(piVar3 + 4);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        lVar7 = local_118;
      }
      if ((*(int *)(DAT_14c951858 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) == DAT_14c951858 + 0x30)) {
        if (lVar7 != lVar26) {
LAB_14282dc21:
          lVar25 = lVar26;
          lVar26 = lVar25;
          if (*(longlong *)(lVar25 + 0x20) != 0) goto code_r0x00014282dc30;
          goto LAB_14282dc54;
        }
        goto LAB_14282dc5e;
      }
      do {
        lVar26 = *(longlong *)(lVar26 + 0x20);
      } while (lVar26 != lVar7 && lVar26 != 0);
      if ((lVar7 != 0) && (lVar26 == 0)) goto LAB_14282dc5e;
      goto LAB_14282dc78;
    }
LAB_14282db0c:
    lVar7 = *(longlong *)(piVar3 + 2);
    uVar5 = *(undefined4 *)(lVar26 + 0xc);
    goto LAB_14282db17;
  }
  goto LAB_14282db2b;
code_r0x00014282dc30:
  lVar26 = *(longlong *)(lVar25 + 0x20);
  if ((*(uint *)(lVar25 + 8) >> 0x1c & 1) == 0) goto LAB_14282dc21;
  local_118 = lVar7;
  lVar26 = FUN_142840154();
  lVar7 = local_118;
LAB_14282dc54:
  if (lVar26 == 0) {
    lVar26 = *(longlong *)(lVar25 + 0x20);
    goto LAB_14282dc21;
  }
  if (lVar26 != lVar7) {
LAB_14282dc5e:
    if (*plVar15 != *(longlong *)(piVar3 + 4)) {
      lVar7 = *(longlong *)(piVar3 + 2);
      uVar5 = *(undefined4 *)(*plVar15 + 0xc);
LAB_14282db17:
      local_68 = (code *)CONCAT44(local_68._4_4_,uVar5);
      FUN_144aa221c(lVar7 + 0x28,&local_68);
      goto LAB_14282db2b;
    }
  }
LAB_14282dc78:
  local_178 = plVar11;
  FUN_142831002(piVar3,*(undefined4 *)(*plVar15 + 0xc),plVar19);
LAB_14282db2b:
  puVar28 = puVar28 + 4;
  if (puVar28 == puVar31) goto LAB_14282dc95;
  goto LAB_14282d903;
code_r0x000142830653:
  puVar14 = *(ushort **)(puVar12 + 0x10);
  if ((*(uint *)(puVar12 + 4) >> 0x1c & 1) == 0) goto LAB_142830644;
  local_108 = puVar12;
  puVar12 = (ushort *)FUN_142840154();
  puVar14 = local_108;
LAB_142830671:
  if (puVar12 == (ushort *)0x0) {
    puVar14 = *(ushort **)(puVar14 + 0x10);
    goto LAB_142830644;
  }
  if (puVar12 == puVar28) {
LAB_1428306a4:
    local_178 = plVar15;
    FUN_142831002(piVar3,*(undefined4 *)(puVar31 + 6),lVar26,puVar31);
  }
  else {
LAB_14283067b:
    if (*(ushort **)(piVar3 + 4) == puVar31) goto LAB_1428306a4;
    local_68 = (code *)CONCAT44(local_68._4_4_,*puVar18);
    FUN_144aa221c(*(longlong *)(piVar3 + 2) + 0x28,&local_68);
  }
LAB_14282df21:
  plVar15 = local_a8;
  piVar3 = local_b0;
  lVar26 = DAT_14c9640e8;
  if (plVar13 == (longlong *)0x0) goto LAB_14282e10f;
  uVar6 = *(uint *)((longlong)plVar13 + 0xc);
  if ((int)uVar6 < DAT_14c9647dc) {
    lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
  }
  else {
    lVar7 = 0;
  }
  if (*(int *)(lVar7 + 0xc) == *local_b0) goto LAB_14282e10f;
  puVar18 = (uint *)((longlong)plVar13 + 0xc);
  if ((*(uint *)(lVar7 + 8) & 0x1000000) != 0 || *(int *)(lVar7 + 0xc) != 0) {
    if ((*(uint *)(lVar7 + 8) >> 0x18 & 1) == 0) {
      puVar18 = (uint *)(lVar7 + 0xc);
    }
    uVar6 = *puVar18;
    local_68 = (code *)CONCAT44(local_68._4_4_,uVar6);
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    lVar25 = ~(longlong)*(int *)(lVar7 + 0xc) * 0x50;
    FUN_1449e3bb0(*(longlong *)(local_b0 + 2) + 0x18,&local_68);
    FUN_1449e3bb0(lVar26 + lVar25 + 0x38,piVar3);
    lVar7 = (longlong)*(int *)(lVar26 + lVar25 + 0x20);
    if (lVar7 != 0) {
      lVar29 = *(longlong *)(lVar26 + 0x18 + lVar25);
      lVar30 = 0;
      do {
        iVar2 = *(int *)(lVar29 + lVar30);
        local_70 = (code *)CONCAT44(local_70._4_4_,iVar2);
        if (iVar2 != *piVar3) {
          FUN_1449e3bb0(*(longlong *)(piVar3 + 2) + 0x18,&local_70);
        }
        lVar30 = lVar30 + 4;
      } while (lVar7 * 4 != lVar30);
    }
    lVar7 = (longlong)*(int *)(lVar26 + lVar25 + 0x30);
    if (lVar7 != 0) {
      lVar26 = *(longlong *)(lVar26 + lVar25 + 0x28);
      lVar25 = 0;
      do {
        local_70 = (code *)CONCAT44(local_70._4_4_,*(undefined4 *)(lVar26 + lVar25));
        FUN_1449e3bb0(*(longlong *)(piVar3 + 2) + 0x28,&local_70);
        lVar25 = lVar25 + 4;
      } while (lVar7 * 4 != lVar25);
    }
    goto LAB_14282e10f;
  }
  if ((int)uVar6 <= DAT_14c9647bc) goto LAB_14282e10f;
  cVar4 = (**(code **)(*plVar13 + 0x28))(plVar13);
  if (cVar4 == '\0') {
    uVar6 = *puVar18;
  }
  else {
    uVar6 = *(uint *)((longlong)plVar13 + 0xc);
    if ((*(uint *)(plVar13 + 1) & 0x1400) == 0) {
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar26 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar26 = 0;
      }
      if ((*(uint *)(lVar26 + 8) >> 0x1e & 1) == 0) {
        plVar11 = *(longlong **)(piVar3 + 4);
        if (DAT_14c951858 == 0) {
          local_68 = FUN_1449e2820;
          local_130 = FUN_14081d0ea;
          local_138 = FUN_14081d0ea;
          local_140 = (code **)&local_68;
          local_148 = &LAB_1468c5283;
          local_150 = FUN_142809da0;
          local_158 = L"Engine";
          local_160 = 0x400000000;
          local_168 = 0x10000000;
          local_170 = 8;
          local_178 = (longlong *)CONCAT44(local_178._4_4_,0x50);
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        plVar19 = plVar13;
        if ((*(int *)(plVar11[2] + 0x38) < *(int *)(DAT_14c951858 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) !=
            DAT_14c951858 + 0x30)) {
          do {
            plVar19 = (longlong *)plVar19[4];
          } while (plVar19 != plVar11 && plVar19 != (longlong *)0x0);
          if ((plVar11 == (longlong *)0x0) || (plVar19 != (longlong *)0x0)) goto LAB_14283071e;
        }
        else if (plVar11 != plVar13) {
LAB_1428306c5:
          plVar8 = plVar19;
          plVar19 = plVar8;
          if ((longlong *)plVar8[4] != (longlong *)0x0) goto code_r0x0001428306d4;
          goto LAB_1428306e7;
        }
        goto LAB_1428306f8;
      }
    }
  }
  local_68 = (code *)CONCAT44(local_68._4_4_,uVar6);
  FUN_144aa221c(*(longlong *)(piVar3 + 2) + 0x28,&local_68);
  goto LAB_14282e10f;
code_r0x0001428306d4:
  plVar19 = (longlong *)plVar8[4];
  if ((*(uint *)(plVar8 + 1) >> 0x1c & 1) == 0) goto LAB_1428306c5;
  plVar19 = (longlong *)FUN_142840154(plVar8);
LAB_1428306e7:
  if (plVar19 == (longlong *)0x0) {
    plVar19 = (longlong *)plVar8[4];
    goto LAB_1428306c5;
  }
  if (plVar19 != plVar11) {
LAB_1428306f8:
    if (*(longlong **)(piVar3 + 4) != plVar13) {
      local_68 = (code *)CONCAT44(local_68._4_4_,*puVar18);
      FUN_144aa221c(*(longlong *)(piVar3 + 2) + 0x28,&local_68);
      goto LAB_14282e10f;
    }
  }
LAB_14283071e:
  local_178 = plVar15;
  FUN_142831002(piVar3,*(undefined4 *)((longlong)plVar13 + 0xc),lVar7,plVar13);
LAB_14282e10f:
  if (1 < uVar20) {
    local_e8 = (ulonglong)((uint)uVar20 & 1);
    local_108 = (ushort *)(uVar20 & 0xfffffffffffffffe);
    lVar26 = local_f0;
LAB_14282e132:
    local_68 = (code *)(ulonglong)
                       (CONCAT24(*local_108 >> 5,(int)CONCAT71(local_68._1_7_,(char)*local_108)) &
                       0xffffffffff1f);
    local_60 = (byte)local_108[1] & 0x1f;
    local_5c = (uint)(local_108[1] >> 5);
    local_58 = (byte)local_108[2] & 0x1f;
    local_54 = (uint)(local_108[2] >> 5);
    local_50 = (byte)local_108[3] & 0x1f;
    local_4c = (uint)(local_108[3] >> 5);
    lVar7 = 0;
LAB_14282e1ac:
    plVar15 = local_a8;
    piVar3 = local_b0;
    lVar25 = DAT_14c9640e8;
    bVar1 = *(byte *)((longlong)&local_68 + lVar7);
    if (0x11 < bVar1) {
      FUN_14003030a(bVar1,local_f0);
      goto switchD_14282e1d0_caseD_0;
    }
    uVar6 = *(uint *)((longlong)&local_68 + lVar7 + 4);
    puVar21 = (ulonglong *)(lVar26 + (ulonglong)uVar6 * 8);
    puVar31 = local_108;
    switch(bVar1) {
    case 0:
      goto switchD_14282e1d0_caseD_0;
    case 1:
      lVar26 = lVar26 + (ulonglong)(uVar6 * 0x800 + 0x800) * 8;
      break;
    case 2:
      plVar13 = (longlong *)*puVar21;
      if (plVar13 == (longlong *)0x0) break;
      uVar6 = *(uint *)((longlong)plVar13 + 0xc);
      if ((int)uVar6 < DAT_14c9647dc) {
        plVar11 = (longlong *)
                  ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
      }
      else {
        plVar11 = (longlong *)0x0;
      }
      if (*(int *)((longlong)plVar11 + 0xc) == *local_b0) break;
      if ((*(uint *)(plVar11 + 1) & 0x1000000) != 0 || *(int *)((longlong)plVar11 + 0xc) != 0) {
        if ((*(uint *)(plVar11 + 1) >> 0x18 & 1) != 0) {
          plVar11 = plVar13;
        }
        uVar6 = *(uint *)((longlong)plVar11 + 0xc);
        local_70 = (code *)CONCAT44(local_70._4_4_,uVar6);
        if ((int)uVar6 < DAT_14c9647dc) {
          lVar29 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
        }
        else {
          lVar29 = 0;
        }
        lVar29 = ~(longlong)*(int *)(lVar29 + 0xc) * 0x50;
        local_120 = lVar7;
        local_118 = lVar26;
        FUN_1449e3bb0(*(longlong *)(local_b0 + 2) + 0x18,&local_70);
        FUN_1449e3bb0(lVar25 + lVar29 + 0x38,piVar3);
        lVar26 = (longlong)*(int *)(lVar25 + lVar29 + 0x20);
        if (lVar26 != 0) {
          lVar7 = *(longlong *)(lVar25 + 0x18 + lVar29);
          lVar30 = 0;
          do {
            local_74 = *(int *)(lVar7 + lVar30);
            if (local_74 != *piVar3) {
              FUN_1449e3bb0(*(longlong *)(piVar3 + 2) + 0x18,&local_74);
            }
            lVar30 = lVar30 + 4;
          } while (lVar26 * 4 != lVar30);
        }
        lVar30 = (longlong)*(int *)(lVar25 + lVar29 + 0x30);
        lVar7 = local_120;
        lVar26 = local_118;
        puVar31 = local_108;
        if (lVar30 != 0) {
          lVar25 = *(longlong *)(lVar25 + lVar29 + 0x28);
          lVar29 = 0;
          do {
            local_74 = *(int *)(lVar25 + lVar29);
            FUN_1449e3bb0(*(longlong *)(piVar3 + 2) + 0x28,&local_74);
            lVar29 = lVar29 + 4;
            lVar7 = local_120;
            lVar26 = local_118;
            puVar31 = local_108;
          } while (lVar30 * 4 != lVar29);
        }
        break;
      }
      local_120 = lVar7;
      if ((int)uVar6 <= DAT_14c9647bc) break;
      cVar4 = (**(code **)(*plVar13 + 0x28))();
      plVar13 = (longlong *)*puVar21;
      if ((cVar4 != '\0') && ((*(uint *)(plVar13 + 1) & 0x1400) == 0)) {
        uVar6 = *(uint *)((longlong)plVar13 + 0xc);
        if ((int)uVar6 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) != 0) goto LAB_14282fef2;
        plVar19 = *(longlong **)(piVar3 + 4);
        if (DAT_14c951858 == 0) {
          local_70 = FUN_1449e2820;
          local_130 = FUN_14081d0ea;
          local_138 = FUN_14081d0ea;
          local_148 = &LAB_1468c5283;
          local_150 = FUN_142809da0;
          local_158 = L"Engine";
          local_160 = 0x400000000;
          local_168 = 0x10000000;
          local_170 = 8;
          local_178 = (longlong *)CONCAT44(local_178._4_4_,0x50);
          local_140 = &local_70;
          local_110 = *(longlong **)(piVar3 + 4);
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
          plVar19 = local_110;
        }
        if ((*(int *)(DAT_14c951858 + 0x38) <= *(int *)(plVar19[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar19[2] + 0x30) + (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) ==
            DAT_14c951858 + 0x30)) {
          if (plVar19 != plVar13) {
LAB_14283028f:
            local_118 = lVar26;
            plVar8 = plVar13;
            plVar13 = plVar8;
            if ((longlong *)plVar8[4] != (longlong *)0x0) goto code_r0x00014283029f;
            goto LAB_1428302b7;
          }
          goto LAB_1428302c9;
        }
        do {
          plVar13 = (longlong *)plVar13[4];
        } while (plVar13 != plVar19 && plVar13 != (longlong *)0x0);
        if ((plVar19 != (longlong *)0x0) && (plVar13 == (longlong *)0x0)) goto LAB_1428302c9;
        goto LAB_1428302e2;
      }
LAB_14282fef2:
      lVar7 = *(longlong *)(piVar3 + 2);
      uVar5 = *(undefined4 *)((longlong)plVar13 + 0xc);
      goto LAB_14282feff;
    case 3:
      if ((longlong)(int)puVar21[1] != 0) {
        plVar13 = (longlong *)*puVar21;
        plVar15 = plVar13 + (int)puVar21[1];
        local_120 = lVar7;
        local_118 = lVar26;
        local_110 = plVar15;
LAB_14282eb26:
        plVar19 = local_a8;
        piVar3 = local_b0;
        lVar26 = DAT_14c9640e8;
        plVar11 = (longlong *)*plVar13;
        if (plVar11 != (longlong *)0x0) {
          uVar6 = *(uint *)((longlong)plVar11 + 0xc);
          if ((int)uVar6 < DAT_14c9647dc) {
            plVar8 = (longlong *)
                     ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
          }
          else {
            plVar8 = (longlong *)0x0;
          }
          if (*(int *)((longlong)plVar8 + 0xc) == *local_b0) goto LAB_14282ed4e;
          if ((*(uint *)(plVar8 + 1) & 0x1000000) != 0 || *(int *)((longlong)plVar8 + 0xc) != 0) {
            if ((*(uint *)(plVar8 + 1) >> 0x18 & 1) != 0) {
              plVar8 = plVar11;
            }
            uVar6 = *(uint *)((longlong)plVar8 + 0xc);
            local_70 = (code *)CONCAT44(local_70._4_4_,uVar6);
            if ((int)uVar6 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            lVar25 = ~(longlong)*(int *)(lVar7 + 0xc) * 0x50;
            FUN_1449e3bb0(*(longlong *)(local_b0 + 2) + 0x18,&local_70);
            FUN_1449e3bb0(lVar26 + lVar25 + 0x38,piVar3);
            lVar7 = (longlong)*(int *)(lVar26 + lVar25 + 0x20);
            if (lVar7 != 0) {
              lVar29 = *(longlong *)(lVar26 + 0x18 + lVar25);
              lVar30 = 0;
              do {
                local_74 = *(int *)(lVar29 + lVar30);
                if (local_74 != *piVar3) {
                  FUN_1449e3bb0(*(longlong *)(piVar3 + 2) + 0x18,&local_74);
                }
                lVar30 = lVar30 + 4;
              } while (lVar7 * 4 != lVar30);
            }
            lVar7 = (longlong)*(int *)(lVar26 + lVar25 + 0x30);
            plVar15 = local_110;
            if (lVar7 != 0) {
              lVar26 = *(longlong *)(lVar26 + lVar25 + 0x28);
              lVar25 = 0;
              do {
                local_74 = *(int *)(lVar26 + lVar25);
                FUN_1449e3bb0(*(longlong *)(piVar3 + 2) + 0x28,&local_74);
                lVar25 = lVar25 + 4;
                plVar15 = local_110;
              } while (lVar7 * 4 != lVar25);
            }
            goto LAB_14282ed4e;
          }
          if ((int)uVar6 <= DAT_14c9647bc) goto LAB_14282ed4e;
          cVar4 = (**(code **)(*plVar11 + 0x28))();
          plVar11 = (longlong *)*plVar13;
          if ((cVar4 != '\0') && ((*(uint *)(plVar11 + 1) & 0x1400) == 0)) {
            uVar6 = *(uint *)((longlong)plVar11 + 0xc);
            if ((int)uVar6 < DAT_14c9647dc) {
              lVar26 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
            }
            else {
              lVar26 = 0;
            }
            if ((*(uint *)(lVar26 + 8) >> 0x1e & 1) != 0) goto LAB_14282ed33;
            plVar24 = *(longlong **)(piVar3 + 4);
            if (DAT_14c951858 == 0) {
              local_70 = FUN_1449e2820;
              local_130 = FUN_14081d0ea;
              local_138 = FUN_14081d0ea;
              local_148 = &LAB_1468c5283;
              local_150 = FUN_142809da0;
              local_158 = L"Engine";
              local_160 = 0x400000000;
              local_168 = 0x10000000;
              local_170 = 8;
              local_178 = (longlong *)CONCAT44(local_178._4_4_,0x50);
              local_140 = &local_70;
              local_100 = *(longlong **)(piVar3 + 4);
              FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
              plVar24 = local_100;
            }
            if ((*(int *)(DAT_14c951858 + 0x38) <= *(int *)(plVar24[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar24[2] + 0x30) + (longlong)*(int *)(DAT_14c951858 + 0x38) * 8)
                == DAT_14c951858 + 0x30)) {
              if (plVar24 != plVar11) {
LAB_14282ee3c:
                plVar9 = plVar11;
                plVar11 = plVar9;
                if ((longlong *)plVar9[4] != (longlong *)0x0) goto code_r0x00014282ee4b;
                goto LAB_14282ee6f;
              }
              goto LAB_14282ee79;
            }
            do {
              plVar11 = (longlong *)plVar11[4];
            } while (plVar11 != plVar24 && plVar11 != (longlong *)0x0);
            if ((plVar24 != (longlong *)0x0) && (plVar11 == (longlong *)0x0)) goto LAB_14282ee79;
            goto LAB_14282ee92;
          }
LAB_14282ed33:
          lVar26 = *(longlong *)(piVar3 + 2);
          uVar5 = *(undefined4 *)((longlong)plVar11 + 0xc);
          goto LAB_14282ed3f;
        }
        goto LAB_14282ed4e;
      }
      break;
    case 4:
      puVar10 = (ulonglong *)(local_108 + 4);
      local_108 = local_108 + 4;
      uVar6 = *(uint *)((*puVar10 & 0xfffffffffffffffe) - 8);
      uVar27 = (int)puVar21[1] * uVar6;
      puVar31 = local_108;
      if (uVar27 != 0) {
        lVar25 = (*puVar10 & 0xfffffffffffffffe) + local_e8;
        uVar20 = *puVar21;
        uVar17 = 0;
        local_118 = lVar26;
        do {
          FUN_142831b17(&local_b0,lVar25,uVar20 + uVar17);
          uVar17 = uVar17 + uVar6;
          lVar26 = local_118;
          puVar31 = local_108;
        } while (uVar27 != uVar17);
      }
      break;
    case 5:
      puVar18 = (uint *)(local_108 + 4);
      local_108 = local_108 + 4;
      uVar27 = *puVar18 >> 0x10;
      uVar6 = (int)puVar21[1] * uVar27;
      local_120 = lVar7;
      puVar31 = local_108;
      if (uVar6 != 0) {
        plVar13 = (longlong *)((ulonglong)(*puVar18 & 0xffff) * 8 + *puVar21);
        plVar15 = plVar13 + uVar6;
        local_118 = lVar26;
        local_110 = plVar15;
LAB_14282e709:
        plVar19 = local_a8;
        piVar3 = local_b0;
        lVar26 = DAT_14c9640e8;
        plVar11 = (longlong *)*plVar13;
        if (plVar11 != (longlong *)0x0) {
          uVar6 = *(uint *)((longlong)plVar11 + 0xc);
          if ((int)uVar6 < DAT_14c9647dc) {
            plVar8 = (longlong *)
                     ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
          }
          else {
            plVar8 = (longlong *)0x0;
          }
          if (*(int *)((longlong)plVar8 + 0xc) == *local_b0) goto LAB_14282e939;
          if ((*(uint *)(plVar8 + 1) & 0x1000000) != 0 || *(int *)((longlong)plVar8 + 0xc) != 0) {
            if ((*(uint *)(plVar8 + 1) >> 0x18 & 1) != 0) {
              plVar8 = plVar11;
            }
            uVar6 = *(uint *)((longlong)plVar8 + 0xc);
            local_70 = (code *)CONCAT44(local_70._4_4_,uVar6);
            if ((int)uVar6 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            lVar25 = ~(longlong)*(int *)(lVar7 + 0xc) * 0x50;
            FUN_1449e3bb0(*(longlong *)(local_b0 + 2) + 0x18,&local_70);
            FUN_1449e3bb0(lVar26 + lVar25 + 0x38,piVar3);
            lVar7 = (longlong)*(int *)(lVar26 + lVar25 + 0x20);
            if (lVar7 != 0) {
              lVar29 = *(longlong *)(lVar26 + 0x18 + lVar25);
              lVar30 = 0;
              do {
                local_74 = *(int *)(lVar29 + lVar30);
                if (local_74 != *piVar3) {
                  FUN_1449e3bb0(*(longlong *)(piVar3 + 2) + 0x18,&local_74);
                }
                lVar30 = lVar30 + 4;
              } while (lVar7 * 4 != lVar30);
            }
            lVar7 = (longlong)*(int *)(lVar26 + lVar25 + 0x30);
            plVar15 = local_110;
            if (lVar7 != 0) {
              lVar26 = *(longlong *)(lVar26 + lVar25 + 0x28);
              lVar25 = 0;
              do {
                local_74 = *(int *)(lVar26 + lVar25);
                FUN_1449e3bb0(*(longlong *)(piVar3 + 2) + 0x28,&local_74);
                lVar25 = lVar25 + 4;
                plVar15 = local_110;
              } while (lVar7 * 4 != lVar25);
            }
            goto LAB_14282e939;
          }
          if ((int)uVar6 <= DAT_14c9647bc) goto LAB_14282e939;
          cVar4 = (**(code **)(*plVar11 + 0x28))();
          plVar11 = (longlong *)*plVar13;
          if ((cVar4 != '\0') && ((*(uint *)(plVar11 + 1) & 0x1400) == 0)) {
            uVar6 = *(uint *)((longlong)plVar11 + 0xc);
            if ((int)uVar6 < DAT_14c9647dc) {
              lVar26 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
            }
            else {
              lVar26 = 0;
            }
            if ((*(uint *)(lVar26 + 8) >> 0x1e & 1) != 0) goto LAB_14282e91e;
            plVar24 = *(longlong **)(piVar3 + 4);
            if (DAT_14c951858 == 0) {
              local_70 = FUN_1449e2820;
              local_130 = FUN_14081d0ea;
              local_138 = FUN_14081d0ea;
              local_148 = &LAB_1468c5283;
              local_150 = FUN_142809da0;
              local_158 = L"Engine";
              local_160 = 0x400000000;
              local_168 = 0x10000000;
              local_170 = 8;
              local_178 = (longlong *)CONCAT44(local_178._4_4_,0x50);
              local_140 = &local_70;
              local_100 = *(longlong **)(piVar3 + 4);
              local_f8 = plVar11;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
              plVar11 = local_f8;
              plVar24 = local_100;
            }
            if ((*(int *)(DAT_14c951858 + 0x38) <= *(int *)(plVar24[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar24[2] + 0x30) + (longlong)*(int *)(DAT_14c951858 + 0x38) * 8)
                == DAT_14c951858 + 0x30)) {
              if (plVar24 != plVar11) {
LAB_14282ea37:
                plVar9 = plVar11;
                plVar11 = plVar9;
                if ((longlong *)plVar9[4] != (longlong *)0x0) goto code_r0x00014282ea46;
                goto LAB_14282ea7c;
              }
              goto LAB_14282ea86;
            }
            do {
              plVar11 = (longlong *)plVar11[4];
            } while (plVar11 != plVar24 && plVar11 != (longlong *)0x0);
            if ((plVar24 != (longlong *)0x0) && (plVar11 == (longlong *)0x0)) goto LAB_14282ea86;
            goto LAB_14282eaa0;
          }
LAB_14282e91e:
          lVar26 = *(longlong *)(piVar3 + 2);
          uVar5 = *(undefined4 *)((longlong)plVar11 + 0xc);
          goto LAB_14282e92a;
        }
        goto LAB_14282e939;
      }
      break;
    case 6:
      puVar31 = local_108 + 4;
      uVar6 = (uint)puVar21[1];
      if ((0 < (int)uVar6) && (uVar6 != *(uint *)((longlong)puVar21 + 0x34))) {
        uVar27 = *(uint *)((*(ulonglong *)(local_108 + 4) & 0xfffffffffffffffe) - 8);
        lVar25 = (*(ulonglong *)(local_108 + 4) & 0xfffffffffffffffe) + local_e8;
        uVar20 = *puVar21;
        uVar16 = 0;
        local_120 = lVar7;
        local_118 = lVar26;
        do {
          puVar10 = (ulonglong *)puVar21[4];
          if ((ulonglong *)puVar21[4] == (ulonglong *)0x0) {
            puVar10 = puVar21 + 2;
          }
          if ((*(uint *)((longlong)puVar10 + (ulonglong)(uVar16 >> 5) * 4) >> (uVar16 & 0x1f) & 1)
              != 0) {
            FUN_142831b17(&local_b0,lVar25,uVar20);
          }
          uVar16 = uVar16 + 1;
          uVar20 = uVar20 + uVar27;
          lVar7 = local_120;
          lVar26 = local_118;
        } while (uVar6 != uVar16);
      }
      break;
    case 7:
      if ((((*(int *)((longlong)puVar21 + 0xc) == 0) ||
           (uVar6 = (uint)puVar21[1], DAT_14c9647dc <= (int)uVar6 || (int)uVar6 < 0)) ||
          (puVar23 = (undefined8 *)
                     ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
          puVar23 == (undefined8 *)0x0)) ||
         ((*(int *)(puVar23 + 2) != *(int *)((longlong)puVar21 + 0xc) ||
          (plVar15 = (longlong *)*puVar23, plVar15 == (longlong *)0x0)))) break;
      uVar6 = *(uint *)((longlong)plVar15 + 0xc);
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar29 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar29 = 0;
      }
      if (*(int *)(lVar29 + 0xc) == *local_b0) break;
      puVar18 = (uint *)((longlong)plVar15 + 0xc);
      if ((*(uint *)(lVar29 + 8) & 0x1000000) != 0 || *(int *)(lVar29 + 0xc) != 0) {
        if ((*(uint *)(lVar29 + 8) >> 0x18 & 1) == 0) {
          puVar18 = (uint *)(lVar29 + 0xc);
        }
        uVar6 = *puVar18;
        local_70 = (code *)CONCAT44(local_70._4_4_,uVar6);
        if ((int)uVar6 < DAT_14c9647dc) {
          lVar29 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
        }
        else {
          lVar29 = 0;
        }
        lVar29 = ~(longlong)*(int *)(lVar29 + 0xc) * 0x50;
        local_120 = lVar7;
        local_118 = lVar26;
        FUN_1449e3bb0(*(longlong *)(local_b0 + 2) + 0x18,&local_70);
        FUN_1449e3bb0(lVar25 + lVar29 + 0x38,piVar3);
        lVar26 = (longlong)*(int *)(lVar25 + lVar29 + 0x20);
        if (lVar26 != 0) {
          lVar7 = *(longlong *)(lVar25 + 0x18 + lVar29);
          lVar30 = 0;
          do {
            local_74 = *(int *)(lVar7 + lVar30);
            if (local_74 != *piVar3) {
              FUN_1449e3bb0(*(longlong *)(piVar3 + 2) + 0x18,&local_74);
            }
            lVar30 = lVar30 + 4;
          } while (lVar26 * 4 != lVar30);
        }
        lVar30 = (longlong)*(int *)(lVar25 + lVar29 + 0x30);
        lVar7 = local_120;
        lVar26 = local_118;
        puVar31 = local_108;
        if (lVar30 != 0) {
          lVar25 = *(longlong *)(lVar25 + lVar29 + 0x28);
          lVar29 = 0;
          do {
            local_74 = *(int *)(lVar25 + lVar29);
            FUN_1449e3bb0(*(longlong *)(piVar3 + 2) + 0x28,&local_74);
            lVar29 = lVar29 + 4;
            lVar7 = local_120;
            lVar26 = local_118;
            puVar31 = local_108;
          } while (lVar30 * 4 != lVar29);
        }
        break;
      }
      local_120 = lVar7;
      if ((int)uVar6 <= DAT_14c9647bc) break;
      local_110 = local_a8;
      cVar4 = (**(code **)(*plVar15 + 0x28))(plVar15);
      if (cVar4 == '\0') goto LAB_14282fd52;
      uVar6 = *(uint *)((longlong)plVar15 + 0xc);
      if ((*(uint *)(plVar15 + 1) & 0x1400) == 0) {
        if ((int)uVar6 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) != 0) goto LAB_14282fd54;
        plVar13 = *(longlong **)(piVar3 + 4);
        if (DAT_14c951858 == 0) {
          local_70 = FUN_1449e2820;
          local_130 = FUN_14081d0ea;
          local_138 = FUN_14081d0ea;
          local_148 = &LAB_1468c5283;
          local_150 = FUN_142809da0;
          local_158 = L"Engine";
          local_160 = 0x400000000;
          local_168 = 0x10000000;
          local_170 = 8;
          local_178 = (longlong *)CONCAT44(local_178._4_4_,0x50);
          local_140 = &local_70;
          local_100 = *(longlong **)(piVar3 + 4);
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
          plVar13 = local_100;
        }
        plVar11 = plVar15;
        if ((*(int *)(DAT_14c951858 + 0x38) <= *(int *)(plVar13[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) ==
            DAT_14c951858 + 0x30)) {
          plVar19 = local_110;
          if (plVar13 != plVar15) {
LAB_142830303:
            local_118 = lVar26;
            plVar8 = plVar11;
            plVar11 = plVar8;
            if ((longlong *)plVar8[4] != (longlong *)0x0) goto code_r0x000142830312;
            goto LAB_142830333;
          }
          goto LAB_142830254;
        }
        do {
          plVar11 = (longlong *)plVar11[4];
        } while (plVar11 != plVar13 && plVar11 != (longlong *)0x0);
LAB_14282ff96:
        plVar19 = local_110;
        if ((plVar13 != (longlong *)0x0) && (plVar11 == (longlong *)0x0)) goto LAB_142830254;
        goto LAB_142830270;
      }
LAB_14282fd54:
      lVar7 = *(longlong *)(piVar3 + 2);
      local_70 = (code *)CONCAT44(local_70._4_4_,uVar6);
      goto LAB_14282fd63;
    case 8:
      local_118 = lVar26;
      if ((longlong)(int)puVar21[1] != 0) {
        uVar20 = *puVar21;
        uVar17 = (longlong)(int)puVar21[1] * 0x20 + uVar20;
        local_120 = lVar7;
LAB_14282ef55:
        piVar3 = local_b0;
        lVar26 = DAT_14c9640e8;
        if ((((*(int *)(uVar20 + 0xc) != 0) &&
             (uVar6 = *(uint *)(uVar20 + 8), (int)uVar6 < DAT_14c9647dc && -1 < (int)uVar6)) &&
            (puVar23 = (undefined8 *)
                       ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
            puVar23 != (undefined8 *)0x0)) &&
           ((*(int *)(puVar23 + 2) == *(int *)(uVar20 + 0xc) &&
            (plVar15 = (longlong *)*puVar23, plVar15 != (longlong *)0x0)))) {
          uVar6 = *(uint *)((longlong)plVar15 + 0xc);
          if ((int)uVar6 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          if (*(int *)(lVar7 + 0xc) == *local_b0) goto LAB_14282f189;
          puVar18 = (uint *)((longlong)plVar15 + 0xc);
          if ((*(uint *)(lVar7 + 8) & 0x1000000) != 0 || *(int *)(lVar7 + 0xc) != 0) {
            if ((*(uint *)(lVar7 + 8) >> 0x18 & 1) == 0) {
              puVar18 = (uint *)(lVar7 + 0xc);
            }
            uVar6 = *puVar18;
            local_70 = (code *)CONCAT44(local_70._4_4_,uVar6);
            if ((int)uVar6 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            lVar25 = ~(longlong)*(int *)(lVar7 + 0xc) * 0x50;
            FUN_1449e3bb0(*(longlong *)(local_b0 + 2) + 0x18,&local_70);
            FUN_1449e3bb0(lVar26 + lVar25 + 0x38,piVar3);
            lVar7 = (longlong)*(int *)(lVar26 + lVar25 + 0x20);
            if (lVar7 != 0) {
              lVar29 = *(longlong *)(lVar26 + 0x18 + lVar25);
              lVar30 = 0;
              do {
                local_74 = *(int *)(lVar29 + lVar30);
                if (local_74 != *piVar3) {
                  FUN_1449e3bb0(*(longlong *)(piVar3 + 2) + 0x18,&local_74);
                }
                lVar30 = lVar30 + 4;
              } while (lVar7 * 4 != lVar30);
            }
            lVar7 = (longlong)*(int *)(lVar26 + lVar25 + 0x30);
            if (lVar7 != 0) {
              lVar26 = *(longlong *)(lVar26 + lVar25 + 0x28);
              lVar25 = 0;
              do {
                local_74 = *(int *)(lVar26 + lVar25);
                FUN_1449e3bb0(*(longlong *)(piVar3 + 2) + 0x28,&local_74);
                lVar25 = lVar25 + 4;
              } while (lVar7 * 4 != lVar25);
            }
            goto LAB_14282f189;
          }
          if ((int)uVar6 <= DAT_14c9647bc) goto LAB_14282f189;
          local_110 = local_a8;
          cVar4 = (**(code **)(*plVar15 + 0x28))(plVar15);
          if (cVar4 != '\0') {
            uVar6 = *(uint *)((longlong)plVar15 + 0xc);
            if ((*(uint *)(plVar15 + 1) & 0x1400) != 0) goto LAB_14282f172;
            if ((int)uVar6 < DAT_14c9647dc) {
              lVar26 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
            }
            else {
              lVar26 = 0;
            }
            if ((*(uint *)(lVar26 + 8) >> 0x1e & 1) != 0) goto LAB_14282f172;
            plVar13 = *(longlong **)(piVar3 + 4);
            if (DAT_14c951858 == 0) {
              local_70 = FUN_1449e2820;
              local_130 = FUN_14081d0ea;
              local_138 = FUN_14081d0ea;
              local_148 = &LAB_1468c5283;
              local_150 = FUN_142809da0;
              local_158 = L"Engine";
              local_160 = 0x400000000;
              local_168 = 0x10000000;
              local_170 = 8;
              local_178 = (longlong *)CONCAT44(local_178._4_4_,0x50);
              local_140 = &local_70;
              local_100 = *(longlong **)(piVar3 + 4);
              FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
              plVar13 = local_100;
            }
            plVar11 = plVar15;
            plVar19 = local_110;
            if ((*(int *)(DAT_14c951858 + 0x38) <= *(int *)(plVar13[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(DAT_14c951858 + 0x38) * 8)
                == DAT_14c951858 + 0x30)) {
              if (plVar13 != plVar15) {
LAB_14282f2d5:
                plVar8 = plVar11;
                plVar11 = plVar8;
                if ((longlong *)plVar8[4] != (longlong *)0x0) goto code_r0x00014282f2e4;
                goto LAB_14282f31a;
              }
              goto LAB_14282f324;
            }
            do {
              plVar11 = (longlong *)plVar11[4];
            } while (plVar11 != plVar13 && plVar11 != (longlong *)0x0);
            if ((plVar13 != (longlong *)0x0) && (plVar11 == (longlong *)0x0)) goto LAB_14282f324;
            goto LAB_14282f341;
          }
          uVar6 = *puVar18;
LAB_14282f172:
          lVar26 = *(longlong *)(piVar3 + 2);
          local_70 = (code *)CONCAT44(local_70._4_4_,uVar6);
          goto LAB_14282f181;
        }
        goto LAB_14282f189;
      }
      break;
    case 9:
      plVar15 = (longlong *)*puVar21;
      plVar13 = (longlong *)(((longlong)plVar15 >> 0x18) + (longlong)puVar21);
      if (((ulonglong)plVar15 & 1) == 0) {
        plVar13 = plVar15;
      }
      local_120 = lVar7;
      if ((longlong)(int)puVar21[1] != 0) {
        plVar15 = plVar13 + (int)puVar21[1];
        local_118 = lVar26;
LAB_14282f511:
        plVar19 = local_a8;
        piVar3 = local_b0;
        lVar26 = DAT_14c9640e8;
        plVar11 = (longlong *)*plVar13;
        if (plVar11 != (longlong *)0x0) {
          uVar6 = *(uint *)((longlong)plVar11 + 0xc);
          if ((int)uVar6 < DAT_14c9647dc) {
            plVar8 = (longlong *)
                     ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
          }
          else {
            plVar8 = (longlong *)0x0;
          }
          if (*(int *)((longlong)plVar8 + 0xc) == *local_b0) goto LAB_14282f738;
          if ((*(uint *)(plVar8 + 1) & 0x1000000) != 0 || *(int *)((longlong)plVar8 + 0xc) != 0) {
            if ((*(uint *)(plVar8 + 1) >> 0x18 & 1) != 0) {
              plVar8 = plVar11;
            }
            uVar6 = *(uint *)((longlong)plVar8 + 0xc);
            local_70 = (code *)CONCAT44(local_70._4_4_,uVar6);
            if ((int)uVar6 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            lVar25 = ~(longlong)*(int *)(lVar7 + 0xc) * 0x50;
            FUN_1449e3bb0(*(longlong *)(local_b0 + 2) + 0x18,&local_70);
            FUN_1449e3bb0(lVar26 + lVar25 + 0x38,piVar3);
            lVar7 = (longlong)*(int *)(lVar26 + lVar25 + 0x20);
            if (lVar7 != 0) {
              lVar29 = *(longlong *)(lVar26 + 0x18 + lVar25);
              lVar30 = 0;
              do {
                local_74 = *(int *)(lVar29 + lVar30);
                if (local_74 != *piVar3) {
                  FUN_1449e3bb0(*(longlong *)(piVar3 + 2) + 0x18,&local_74);
                }
                lVar30 = lVar30 + 4;
              } while (lVar7 * 4 != lVar30);
            }
            lVar7 = (longlong)*(int *)(lVar26 + lVar25 + 0x30);
            if (lVar7 != 0) {
              lVar26 = *(longlong *)(lVar26 + lVar25 + 0x28);
              lVar25 = 0;
              do {
                local_74 = *(int *)(lVar26 + lVar25);
                FUN_1449e3bb0(*(longlong *)(piVar3 + 2) + 0x28,&local_74);
                lVar25 = lVar25 + 4;
              } while (lVar7 * 4 != lVar25);
            }
            goto LAB_14282f738;
          }
          if ((int)uVar6 <= DAT_14c9647bc) goto LAB_14282f738;
          cVar4 = (**(code **)(*plVar11 + 0x28))();
          plVar11 = (longlong *)*plVar13;
          if ((cVar4 != '\0') && ((*(uint *)(plVar11 + 1) & 0x1400) == 0)) {
            uVar6 = *(uint *)((longlong)plVar11 + 0xc);
            if ((int)uVar6 < DAT_14c9647dc) {
              lVar26 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
            }
            else {
              lVar26 = 0;
            }
            if ((*(uint *)(lVar26 + 8) >> 0x1e & 1) != 0) goto LAB_14282f71d;
            plVar24 = *(longlong **)(piVar3 + 4);
            if (DAT_14c951858 == 0) {
              local_70 = FUN_1449e2820;
              local_130 = FUN_14081d0ea;
              local_138 = FUN_14081d0ea;
              local_148 = &LAB_1468c5283;
              local_150 = FUN_142809da0;
              local_158 = L"Engine";
              local_160 = 0x400000000;
              local_168 = 0x10000000;
              local_170 = 8;
              local_178 = (longlong *)CONCAT44(local_178._4_4_,0x50);
              local_140 = &local_70;
              local_110 = *(longlong **)(piVar3 + 4);
              FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
              plVar24 = local_110;
            }
            if ((*(int *)(DAT_14c951858 + 0x38) <= *(int *)(plVar24[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar24[2] + 0x30) + (longlong)*(int *)(DAT_14c951858 + 0x38) * 8)
                == DAT_14c951858 + 0x30)) {
              if (plVar24 != plVar11) {
LAB_14282f826:
                plVar9 = plVar11;
                plVar11 = plVar9;
                if ((longlong *)plVar9[4] != (longlong *)0x0) goto code_r0x00014282f835;
                goto LAB_14282f859;
              }
              goto LAB_14282f863;
            }
            do {
              plVar11 = (longlong *)plVar11[4];
            } while (plVar11 != plVar24 && plVar11 != (longlong *)0x0);
            if ((plVar24 != (longlong *)0x0) && (plVar11 == (longlong *)0x0)) goto LAB_14282f863;
            goto LAB_14282f87c;
          }
LAB_14282f71d:
          lVar26 = *(longlong *)(piVar3 + 2);
          uVar5 = *(undefined4 *)((longlong)plVar11 + 0xc);
          goto LAB_14282f729;
        }
        goto LAB_14282f738;
      }
      break;
    case 10:
      puVar10 = (ulonglong *)(local_108 + 4);
      local_108 = local_108 + 4;
      uVar20 = *puVar21;
      uVar17 = ((longlong)uVar20 >> 0x18) + (longlong)puVar21;
      if ((uVar20 & 1) == 0) {
        uVar17 = uVar20;
      }
      uVar6 = *(uint *)((*puVar10 & 0xfffffffffffffffe) - 8);
      uVar27 = (int)puVar21[1] * uVar6;
      local_120 = lVar7;
      puVar31 = local_108;
      if (uVar27 != 0) {
        lVar25 = (*puVar10 & 0xfffffffffffffffe) + local_e8;
        uVar20 = 0;
        local_118 = lVar26;
        do {
          FUN_142831b17(&local_b0,lVar25,uVar17 + uVar20);
          uVar20 = uVar20 + uVar6;
          lVar7 = local_120;
          lVar26 = local_118;
          puVar31 = local_108;
        } while (uVar27 != uVar20);
      }
      break;
    case 0xb:
      puVar10 = (ulonglong *)(local_108 + 4);
      local_108 = local_108 + 4;
      uVar6 = *(uint *)((*puVar10 & 0xfffffffffffffffe) - 8);
      uVar27 = *(byte *)((longlong)puVar21 + (ulonglong)uVar6) * uVar6;
      puVar31 = local_108;
      if (uVar27 != 0) {
        lVar25 = (*puVar10 & 0xfffffffffffffffe) + local_e8;
        uVar20 = 0;
        local_118 = lVar26;
        do {
          FUN_142831b17(&local_b0,lVar25,(longlong)puVar21 + uVar20);
          uVar20 = uVar20 + uVar6;
          lVar26 = local_118;
          puVar31 = local_108;
        } while (uVar27 != uVar20);
      }
      break;
    case 0xc:
      (*(code *)**(undefined8 **)*puVar21)((undefined8 *)*puVar21,local_a0);
      plVar15 = (longlong *)*puVar21;
      puVar31 = local_108;
      if (*(char *)((longlong)plVar15 + 0x11) == '\x01') {
        if (((ulonglong)plVar15[1] < 9) && (*(byte *)(plVar15 + 2) < 4)) {
          puVar21 = puVar21 + 1;
        }
        else {
          puVar21 = (ulonglong *)puVar21[1];
        }
        (**(code **)(*plVar15 + 8))(plVar15,puVar21,local_a0);
        puVar31 = local_108;
      }
      break;
    case 0xd:
      (**(code **)(local_108 + 4))(local_f0,local_a0);
      goto switchD_14282e1d0_caseD_0;
    case 0xe:
      (*(code *)(&DAT_14c950070)[(int)uVar6])(local_f0,local_a0);
      goto switchD_14282e1d0_caseD_0;
    case 0xf:
      puVar31 = local_108 + 4;
      (**(code **)(local_108 + 4))(puVar21,local_a0);
      break;
    case 0x10:
      plVar15 = (longlong *)puVar21[1];
      if (plVar15 != (longlong *)0x0) {
        uVar6 = *(uint *)((longlong)plVar15 + 0xc);
        if ((int)uVar6 < DAT_14c9647dc) {
          lVar29 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
        }
        else {
          lVar29 = 0;
        }
        if (*(int *)(lVar29 + 0xc) != *local_b0) {
          puVar18 = (uint *)((longlong)plVar15 + 0xc);
          if ((*(uint *)(lVar29 + 8) & 0x1000000) == 0 && *(int *)(lVar29 + 0xc) == 0) {
            local_120 = lVar7;
            if (DAT_14c9647bc < (int)uVar6) {
              local_110 = local_a8;
              cVar4 = (**(code **)(*plVar15 + 0x28))(plVar15);
              if (cVar4 != '\0') {
                uVar6 = *(uint *)((longlong)plVar15 + 0xc);
                if ((*(uint *)(plVar15 + 1) & 0x1400) == 0) {
                  if ((int)uVar6 < DAT_14c9647dc) {
                    lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
                  }
                  else {
                    lVar7 = 0;
                  }
                  if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0) {
                    plVar13 = *(longlong **)(piVar3 + 4);
                    if (DAT_14c951858 == 0) {
                      local_70 = FUN_1449e2820;
                      local_130 = FUN_14081d0ea;
                      local_138 = FUN_14081d0ea;
                      local_148 = &LAB_1468c5283;
                      local_150 = FUN_142809da0;
                      local_158 = L"Engine";
                      local_160 = 0x400000000;
                      local_168 = 0x10000000;
                      local_170 = 8;
                      local_178 = (longlong *)CONCAT44(local_178._4_4_,0x50);
                      local_140 = &local_70;
                      local_100 = *(longlong **)(piVar3 + 4);
                      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288)
                      ;
                      plVar13 = local_100;
                    }
                    plVar11 = plVar15;
                    if ((*(int *)(plVar13[2] + 0x38) < *(int *)(DAT_14c951858 + 0x38)) ||
                       (*(longlong *)
                         (*(longlong *)(plVar13[2] + 0x30) +
                         (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30)) {
                      do {
                        plVar11 = (longlong *)plVar11[4];
                      } while (plVar11 != plVar13 && plVar11 != (longlong *)0x0);
                      goto LAB_14282ff96;
                    }
                    plVar19 = local_110;
                    if (plVar13 != plVar15) {
LAB_14283020b:
                      local_118 = lVar26;
                      plVar8 = plVar11;
                      plVar11 = plVar8;
                      if ((longlong *)plVar8[4] != (longlong *)0x0) goto code_r0x00014283021a;
                      goto LAB_14283023b;
                    }
                    goto LAB_142830254;
                  }
                }
                goto LAB_14282fd54;
              }
LAB_14282fd52:
              uVar6 = *puVar18;
              goto LAB_14282fd54;
            }
          }
          else {
            if ((*(uint *)(lVar29 + 8) >> 0x18 & 1) == 0) {
              puVar18 = (uint *)(lVar29 + 0xc);
            }
            uVar6 = *puVar18;
            local_70 = (code *)CONCAT44(local_70._4_4_,uVar6);
            if ((int)uVar6 < DAT_14c9647dc) {
              lVar29 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
            }
            else {
              lVar29 = 0;
            }
            lVar29 = ~(longlong)*(int *)(lVar29 + 0xc) * 0x50;
            local_120 = lVar7;
            local_118 = lVar26;
            FUN_1449e3bb0(*(longlong *)(local_b0 + 2) + 0x18,&local_70);
            FUN_1449e3bb0(lVar25 + lVar29 + 0x38,piVar3);
            lVar26 = (longlong)*(int *)(lVar25 + lVar29 + 0x20);
            if (lVar26 != 0) {
              lVar7 = *(longlong *)(lVar25 + 0x18 + lVar29);
              lVar30 = 0;
              do {
                local_74 = *(int *)(lVar7 + lVar30);
                if (local_74 != *piVar3) {
                  FUN_1449e3bb0(*(longlong *)(piVar3 + 2) + 0x18,&local_74);
                }
                lVar30 = lVar30 + 4;
              } while (lVar26 * 4 != lVar30);
            }
            lVar30 = (longlong)*(int *)(lVar25 + lVar29 + 0x30);
            lVar7 = local_120;
            lVar26 = local_118;
            puVar31 = local_108;
            if (lVar30 != 0) {
              lVar25 = *(longlong *)(lVar25 + lVar29 + 0x28);
              lVar29 = 0;
              do {
                local_74 = *(int *)(lVar25 + lVar29);
                FUN_1449e3bb0(*(longlong *)(piVar3 + 2) + 0x28,&local_74);
                lVar29 = lVar29 + 4;
                lVar7 = local_120;
                lVar26 = local_118;
                puVar31 = local_108;
              } while (lVar30 * 4 != lVar29);
            }
          }
        }
      }
      break;
    case 0x11:
      if ((longlong)(int)puVar21[1] != 0) {
        uVar17 = *puVar21;
        uVar20 = uVar17 + (longlong)(int)puVar21[1] * 0x18;
        local_120 = lVar7;
        local_118 = lVar26;
LAB_14282e208:
        piVar3 = local_b0;
        lVar26 = DAT_14c9640e8;
        plVar15 = *(longlong **)(uVar17 + 8);
        if (plVar15 != (longlong *)0x0) {
          uVar6 = *(uint *)((longlong)plVar15 + 0xc);
          if ((int)uVar6 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          if (*(int *)(lVar7 + 0xc) == *local_b0) goto LAB_14282e3f6;
          puVar18 = (uint *)((longlong)plVar15 + 0xc);
          if ((*(uint *)(lVar7 + 8) & 0x1000000) != 0 || *(int *)(lVar7 + 0xc) != 0) {
            if ((*(uint *)(lVar7 + 8) >> 0x18 & 1) == 0) {
              puVar18 = (uint *)(lVar7 + 0xc);
            }
            uVar6 = *puVar18;
            local_70 = (code *)CONCAT44(local_70._4_4_,uVar6);
            if ((int)uVar6 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            lVar25 = ~(longlong)*(int *)(lVar7 + 0xc) * 0x50;
            FUN_1449e3bb0(*(longlong *)(local_b0 + 2) + 0x18,&local_70);
            FUN_1449e3bb0(lVar26 + lVar25 + 0x38,piVar3);
            lVar7 = (longlong)*(int *)(lVar26 + lVar25 + 0x20);
            if (lVar7 != 0) {
              lVar29 = *(longlong *)(lVar26 + 0x18 + lVar25);
              lVar30 = 0;
              do {
                local_74 = *(int *)(lVar29 + lVar30);
                if (local_74 != *piVar3) {
                  FUN_1449e3bb0(*(longlong *)(piVar3 + 2) + 0x18,&local_74);
                }
                lVar30 = lVar30 + 4;
              } while (lVar7 * 4 != lVar30);
            }
            lVar7 = (longlong)*(int *)(lVar26 + lVar25 + 0x30);
            if (lVar7 != 0) {
              lVar26 = *(longlong *)(lVar26 + lVar25 + 0x28);
              lVar25 = 0;
              do {
                local_74 = *(int *)(lVar26 + lVar25);
                FUN_1449e3bb0(*(longlong *)(piVar3 + 2) + 0x28,&local_74);
                lVar25 = lVar25 + 4;
              } while (lVar7 * 4 != lVar25);
            }
            goto LAB_14282e3f6;
          }
          if ((int)uVar6 <= DAT_14c9647bc) goto LAB_14282e3f6;
          local_110 = local_a8;
          cVar4 = (**(code **)(*plVar15 + 0x28))(plVar15);
          if (cVar4 != '\0') {
            uVar6 = *(uint *)((longlong)plVar15 + 0xc);
            if ((*(uint *)(plVar15 + 1) & 0x1400) != 0) goto LAB_14282e3df;
            if ((int)uVar6 < DAT_14c9647dc) {
              lVar26 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
            }
            else {
              lVar26 = 0;
            }
            if ((*(uint *)(lVar26 + 8) >> 0x1e & 1) != 0) goto LAB_14282e3df;
            plVar13 = *(longlong **)(piVar3 + 4);
            if (DAT_14c951858 == 0) {
              local_70 = FUN_1449e2820;
              local_130 = FUN_14081d0ea;
              local_138 = FUN_14081d0ea;
              local_148 = &LAB_1468c5283;
              local_150 = FUN_142809da0;
              local_158 = L"Engine";
              local_160 = 0x400000000;
              local_168 = 0x10000000;
              local_170 = 8;
              local_178 = (longlong *)CONCAT44(local_178._4_4_,0x50);
              local_140 = &local_70;
              local_100 = *(longlong **)(piVar3 + 4);
              FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
              plVar13 = local_100;
            }
            plVar11 = plVar15;
            plVar19 = local_110;
            if ((*(int *)(DAT_14c951858 + 0x38) <= *(int *)(plVar13[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(DAT_14c951858 + 0x38) * 8)
                == DAT_14c951858 + 0x30)) {
              if (plVar13 != plVar15) {
LAB_14282e542:
                plVar8 = plVar11;
                plVar11 = plVar8;
                if ((longlong *)plVar8[4] != (longlong *)0x0) goto code_r0x00014282e551;
                goto LAB_14282e587;
              }
              goto LAB_14282e591;
            }
            do {
              plVar11 = (longlong *)plVar11[4];
            } while (plVar11 != plVar13 && plVar11 != (longlong *)0x0);
            if ((plVar13 != (longlong *)0x0) && (plVar11 == (longlong *)0x0)) goto LAB_14282e591;
            goto LAB_14282e5af;
          }
          uVar6 = *puVar18;
LAB_14282e3df:
          lVar26 = *(longlong *)(piVar3 + 2);
          local_70 = (code *)CONCAT44(local_70._4_4_,uVar6);
          goto LAB_14282e3ee;
        }
        goto LAB_14282e3f6;
      }
    }
    goto LAB_14282fc72;
  }
switchD_14282e1d0_caseD_0:
  uVar22 = *(undefined8 *)(local_b8[2] + 0x10);
  plVar15 = local_b8 + 1;
  if (plVar15 == local_c8) goto LAB_142830741;
  goto LAB_14282dcea;
code_r0x00014282e551:
  plVar11 = (longlong *)plVar8[4];
  if ((*(uint *)(plVar8 + 1) >> 0x1c & 1) == 0) goto LAB_14282e542;
  local_100 = plVar13;
  local_f8 = plVar8;
  plVar8 = (longlong *)FUN_142840154();
  plVar11 = local_f8;
  plVar19 = local_110;
  plVar13 = local_100;
LAB_14282e587:
  if (plVar8 == (longlong *)0x0) {
    plVar11 = (longlong *)plVar11[4];
    goto LAB_14282e542;
  }
  if (plVar8 != plVar13) {
LAB_14282e591:
    if (plVar15 != *(longlong **)(piVar3 + 4)) {
      lVar26 = *(longlong *)(piVar3 + 2);
      local_70 = (code *)CONCAT44(local_70._4_4_,*puVar18);
LAB_14282e3ee:
      FUN_144aa221c(lVar26 + 0x28,&local_70);
      goto LAB_14282e3f6;
    }
  }
LAB_14282e5af:
  local_178 = plVar19;
  FUN_142831002(piVar3,*(undefined4 *)((longlong)plVar15 + 0xc),lVar7,plVar15);
LAB_14282e3f6:
  uVar17 = uVar17 + 0x18;
  lVar7 = local_120;
  lVar26 = local_118;
  puVar31 = local_108;
  if (uVar17 == uVar20) goto LAB_14282fc72;
  goto LAB_14282e208;
code_r0x00014283021a:
  plVar11 = (longlong *)plVar8[4];
  lVar26 = local_118;
  if ((*(uint *)(plVar8 + 1) >> 0x1c & 1) != 0) {
    plVar11 = (longlong *)FUN_142840154(plVar8);
    plVar19 = local_110;
LAB_14283023b:
    if (plVar11 == (longlong *)0x0) {
      plVar11 = (longlong *)plVar8[4];
      lVar26 = local_118;
      goto LAB_14283020b;
    }
    goto LAB_142830240;
  }
  goto LAB_14283020b;
code_r0x00014282f835:
  plVar11 = (longlong *)plVar9[4];
  if ((*(uint *)(plVar9 + 1) >> 0x1c & 1) == 0) goto LAB_14282f826;
  local_110 = plVar24;
  plVar11 = (longlong *)FUN_142840154();
  plVar24 = local_110;
LAB_14282f859:
  if (plVar11 == (longlong *)0x0) {
    plVar11 = (longlong *)plVar9[4];
    goto LAB_14282f826;
  }
  if (plVar11 != plVar24) {
LAB_14282f863:
    if (*plVar13 != *(longlong *)(piVar3 + 4)) {
      lVar26 = *(longlong *)(piVar3 + 2);
      uVar5 = *(undefined4 *)(*plVar13 + 0xc);
LAB_14282f729:
      local_70 = (code *)CONCAT44(local_70._4_4_,uVar5);
      FUN_144aa221c(lVar26 + 0x28,&local_70);
      goto LAB_14282f738;
    }
  }
LAB_14282f87c:
  local_178 = plVar19;
  FUN_142831002(piVar3,*(undefined4 *)(*plVar13 + 0xc),plVar8);
LAB_14282f738:
  plVar13 = plVar13 + 1;
  lVar7 = local_120;
  lVar26 = local_118;
  puVar31 = local_108;
  if (plVar13 == plVar15) goto LAB_14282fc72;
  goto LAB_14282f511;
code_r0x00014282f2e4:
  plVar11 = (longlong *)plVar8[4];
  if ((*(uint *)(plVar8 + 1) >> 0x1c & 1) == 0) goto LAB_14282f2d5;
  local_100 = plVar13;
  local_f8 = plVar8;
  plVar8 = (longlong *)FUN_142840154();
  plVar11 = local_f8;
  plVar19 = local_110;
  plVar13 = local_100;
LAB_14282f31a:
  if (plVar8 == (longlong *)0x0) {
    plVar11 = (longlong *)plVar11[4];
    goto LAB_14282f2d5;
  }
  if (plVar8 != plVar13) {
LAB_14282f324:
    if (plVar15 != *(longlong **)(piVar3 + 4)) {
      lVar26 = *(longlong *)(piVar3 + 2);
      local_70 = (code *)CONCAT44(local_70._4_4_,*puVar18);
LAB_14282f181:
      FUN_144aa221c(lVar26 + 0x28,&local_70);
      goto LAB_14282f189;
    }
  }
LAB_14282f341:
  local_178 = plVar19;
  FUN_142831002(piVar3,*(undefined4 *)((longlong)plVar15 + 0xc),lVar7,plVar15);
LAB_14282f189:
  uVar20 = uVar20 + 0x20;
  lVar7 = local_120;
  lVar26 = local_118;
  puVar31 = local_108;
  if (uVar20 == uVar17) goto LAB_14282fc72;
  goto LAB_14282ef55;
code_r0x000142830312:
  plVar11 = (longlong *)plVar8[4];
  lVar26 = local_118;
  if ((*(uint *)(plVar8 + 1) >> 0x1c & 1) == 0) goto LAB_142830303;
  plVar11 = (longlong *)FUN_142840154(plVar8);
  plVar19 = local_110;
LAB_142830333:
  if (plVar11 == (longlong *)0x0) {
    plVar11 = (longlong *)plVar8[4];
    lVar26 = local_118;
    goto LAB_142830303;
  }
LAB_142830240:
  lVar26 = local_118;
  if (plVar11 != plVar13) {
LAB_142830254:
    if (plVar15 != *(longlong **)(piVar3 + 4)) {
      lVar7 = *(longlong *)(piVar3 + 2);
      local_70 = (code *)CONCAT44(local_70._4_4_,*puVar18);
LAB_14282fd63:
      FUN_144aa221c(lVar7 + 0x28,&local_70);
      lVar7 = local_120;
      puVar31 = local_108;
      goto LAB_14282fc72;
    }
  }
LAB_142830270:
  local_178 = plVar19;
  FUN_142831002(piVar3,*(undefined4 *)((longlong)plVar15 + 0xc),lVar29,plVar15);
  lVar7 = local_120;
  puVar31 = local_108;
  goto LAB_14282fc72;
code_r0x00014282ea46:
  plVar11 = (longlong *)plVar9[4];
  if ((*(uint *)(plVar9 + 1) >> 0x1c & 1) == 0) goto LAB_14282ea37;
  local_100 = plVar24;
  local_f8 = plVar9;
  plVar9 = (longlong *)FUN_142840154(plVar9);
  plVar11 = local_f8;
  plVar24 = local_100;
LAB_14282ea7c:
  if (plVar9 == (longlong *)0x0) {
    plVar11 = (longlong *)plVar11[4];
    goto LAB_14282ea37;
  }
  if (plVar9 != plVar24) {
LAB_14282ea86:
    if (*plVar13 != *(longlong *)(piVar3 + 4)) {
      lVar26 = *(longlong *)(piVar3 + 2);
      uVar5 = *(undefined4 *)(*plVar13 + 0xc);
LAB_14282e92a:
      local_70 = (code *)CONCAT44(local_70._4_4_,uVar5);
      FUN_144aa221c(lVar26 + 0x28,&local_70);
      goto LAB_14282e939;
    }
  }
LAB_14282eaa0:
  local_178 = plVar19;
  FUN_142831002(piVar3,*(undefined4 *)(*plVar13 + 0xc),plVar8);
LAB_14282e939:
  plVar13 = plVar13 + uVar27;
  lVar7 = local_120;
  lVar26 = local_118;
  puVar31 = local_108;
  if (plVar13 == plVar15) goto LAB_14282fc72;
  goto LAB_14282e709;
code_r0x00014282ee4b:
  plVar11 = (longlong *)plVar9[4];
  if ((*(uint *)(plVar9 + 1) >> 0x1c & 1) == 0) goto LAB_14282ee3c;
  local_100 = plVar24;
  plVar11 = (longlong *)FUN_142840154();
  plVar24 = local_100;
LAB_14282ee6f:
  if (plVar11 == (longlong *)0x0) {
    plVar11 = (longlong *)plVar9[4];
    goto LAB_14282ee3c;
  }
  if (plVar11 != plVar24) {
LAB_14282ee79:
    if (*plVar13 != *(longlong *)(piVar3 + 4)) {
      lVar26 = *(longlong *)(piVar3 + 2);
      uVar5 = *(undefined4 *)(*plVar13 + 0xc);
LAB_14282ed3f:
      local_70 = (code *)CONCAT44(local_70._4_4_,uVar5);
      FUN_144aa221c(lVar26 + 0x28,&local_70);
      goto LAB_14282ed4e;
    }
  }
LAB_14282ee92:
  local_178 = plVar19;
  FUN_142831002(piVar3,*(undefined4 *)(*plVar13 + 0xc),plVar8);
LAB_14282ed4e:
  plVar13 = plVar13 + 1;
  lVar7 = local_120;
  lVar26 = local_118;
  puVar31 = local_108;
  if (plVar13 == plVar15) goto LAB_14282fc72;
  goto LAB_14282eb26;
code_r0x00014283029f:
  plVar13 = (longlong *)plVar8[4];
  lVar26 = local_118;
  if ((*(uint *)(plVar8 + 1) >> 0x1c & 1) == 0) goto LAB_14283028f;
  plVar13 = (longlong *)FUN_142840154(plVar8);
LAB_1428302b7:
  lVar26 = local_118;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)plVar8[4];
    goto LAB_14283028f;
  }
  if (plVar13 != plVar19) {
LAB_1428302c9:
    if (*puVar21 != *(ulonglong *)(piVar3 + 4)) {
      lVar7 = *(longlong *)(piVar3 + 2);
      uVar5 = *(undefined4 *)(*puVar21 + 0xc);
LAB_14282feff:
      local_70 = (code *)CONCAT44(local_70._4_4_,uVar5);
      FUN_144aa221c(lVar7 + 0x28,&local_70);
      lVar7 = local_120;
      puVar31 = local_108;
      goto LAB_14282fc72;
    }
  }
LAB_1428302e2:
  local_178 = plVar15;
  FUN_142831002(piVar3,*(undefined4 *)(*puVar21 + 0xc),plVar11);
  lVar7 = local_120;
  puVar31 = local_108;
LAB_14282fc72:
  local_108 = puVar31;
  lVar7 = lVar7 + 8;
  if (lVar7 == 0x20) goto LAB_14283033e;
  goto LAB_14282e1ac;
LAB_14283033e:
  local_108 = local_108 + 4;
  goto LAB_14282e132;
}



// FUNCTION 142830814 FUN_142830814 body=943 status=ok
// SIG undefined FUN_142830814(void)

void FUN_142830814(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  int local_4c;
  code *local_48;
  ulonglong local_40;
  
  lVar11 = DAT_14c9640e8;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar2 = (longlong *)*param_2;
  if (plVar2 == (longlong *)0x0) goto LAB_142830a59;
  piVar3 = *(int **)(param_1 + 0x10);
  uVar1 = *(uint *)((longlong)plVar2 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    plVar8 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  }
  else {
    plVar8 = (longlong *)0x0;
  }
  if (*(int *)((longlong)plVar8 + 0xc) == *piVar3) goto LAB_142830a59;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  if ((*(uint *)(plVar8 + 1) & 0x1000000) != 0 || *(int *)((longlong)plVar8 + 0xc) != 0) {
    if ((*(uint *)(plVar8 + 1) >> 0x18 & 1) != 0) {
      plVar8 = plVar2;
    }
    uVar1 = *(uint *)((longlong)plVar8 + 0xc);
    local_48 = (code *)CONCAT44(local_48._4_4_,uVar1);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    lVar9 = ~(longlong)*(int *)(lVar7 + 0xc) * 0x50;
    lVar7 = DAT_14c9640e8 + lVar9;
    FUN_1449e3bb0(*(longlong *)(piVar3 + 2) + 0x18,&local_48);
    lVar10 = lVar11 + lVar9;
    FUN_1449e3bb0(lVar10 + 0x38,piVar3);
    lVar10 = (longlong)*(int *)(lVar10 + 0x20);
    if (lVar10 != 0) {
      lVar11 = *(longlong *)(lVar11 + 0x18 + lVar9);
      lVar9 = 0;
      do {
        local_4c = *(int *)(lVar11 + lVar9);
        if (local_4c != *piVar3) {
          FUN_1449e3bb0(*(longlong *)(piVar3 + 2) + 0x18,&local_4c);
        }
        lVar9 = lVar9 + 4;
      } while (lVar10 * 4 != lVar9);
    }
    lVar11 = (longlong)*(int *)(lVar7 + 0x30);
    if (lVar11 != 0) {
      lVar7 = *(longlong *)(lVar7 + 0x28);
      lVar10 = 0;
      do {
        local_4c = *(int *)(lVar7 + lVar10);
        FUN_1449e3bb0(*(longlong *)(piVar3 + 2) + 0x28,&local_4c);
        lVar10 = lVar10 + 4;
      } while (lVar11 * 4 != lVar10);
    }
    goto LAB_142830a59;
  }
  if ((int)uVar1 <= DAT_14c9647bc) goto LAB_142830a59;
  cVar5 = (**(code **)(*plVar2 + 0x28))();
  lVar11 = *param_2;
  if ((cVar5 != '\0') && ((*(uint *)(lVar11 + 8) & 0x1400) == 0)) {
    uVar1 = *(uint *)(lVar11 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0) {
      lVar7 = *(longlong *)(piVar3 + 4);
      if (DAT_14c951858 == 0) {
        local_70 = &local_48;
        local_48 = FUN_1449e2820;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_14081d0ea;
        local_78 = &LAB_1468c5283;
        local_80 = FUN_142809da0;
        local_88 = L"Engine";
        local_90 = 0x400000000;
        local_98 = 0x10000000;
        local_a0 = 8;
        local_a8 = CONCAT44(local_a8._4_4_,0x50);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14c951858 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30)) {
        do {
          lVar11 = *(longlong *)(lVar11 + 0x20);
        } while (lVar11 != lVar7 && lVar11 != 0);
        if (lVar7 == 0 || lVar11 != 0) goto LAB_142830b9d;
      }
      else if (lVar7 != lVar11) {
LAB_142830b58:
        lVar10 = lVar11;
        lVar11 = lVar10;
        if (*(longlong *)(lVar10 + 0x20) != 0) goto code_r0x000142830b68;
        goto LAB_142830b7a;
      }
      goto LAB_142830b84;
    }
  }
  lVar7 = *(longlong *)(piVar3 + 2);
  uVar6 = *(undefined4 *)(lVar11 + 0xc);
  goto LAB_142830a4a;
code_r0x000142830b68:
  lVar11 = *(longlong *)(lVar10 + 0x20);
  if ((*(uint *)(lVar10 + 8) >> 0x1c & 1) == 0) goto LAB_142830b58;
  lVar11 = FUN_142840154(lVar10);
LAB_142830b7a:
  if (lVar11 == 0) {
    lVar11 = *(longlong *)(lVar10 + 0x20);
    goto LAB_142830b58;
  }
  if (lVar11 == lVar7) goto LAB_142830b9d;
LAB_142830b84:
  if (*param_2 == *(longlong *)(piVar3 + 4)) {
LAB_142830b9d:
    local_a8 = uVar4;
    FUN_142831002(piVar3,*(undefined4 *)(*param_2 + 0xc),plVar8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_c8);
  }
  lVar7 = *(longlong *)(piVar3 + 2);
  uVar6 = *(undefined4 *)(*param_2 + 0xc);
LAB_142830a4a:
  local_48 = (code *)CONCAT44(local_48._4_4_,uVar6);
  FUN_144aa221c(lVar7 + 0x28);
LAB_142830a59:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142830bca FUN_142830bca body=1079 status=ok
// SIG undefined FUN_142830bca(void)

void FUN_142830bca(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  int local_54;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((int)param_3 < 1) {
LAB_142830fd4:
    if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  uVar12 = (ulonglong)param_3;
  uVar10 = 0;
  local_70 = uVar12;
  local_68 = param_1;
  local_60 = param_2;
LAB_142830c23:
  lVar9 = DAT_14c9640e8;
  plVar2 = *(longlong **)(param_2 + uVar10 * 8);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = *(uint *)((longlong)plVar2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      plVar13 = (longlong *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    }
    else {
      plVar13 = (longlong *)0x0;
    }
    piVar3 = *(int **)(param_1 + 0x10);
    if (*(int *)((longlong)plVar13 + 0xc) == *piVar3) goto LAB_142830e58;
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    if ((*(uint *)(plVar13 + 1) & 0x1000000) != 0 || *(int *)((longlong)plVar13 + 0xc) != 0) {
      if ((*(uint *)(plVar13 + 1) >> 0x18 & 1) != 0) {
        plVar13 = plVar2;
      }
      uVar1 = *(uint *)((longlong)plVar13 + 0xc);
      local_50 = (code *)CONCAT44(local_50._4_4_,uVar1);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      lVar8 = ~(longlong)*(int *)(lVar8 + 0xc) * 0x50;
      FUN_1449e3bb0(*(longlong *)(piVar3 + 2) + 0x18,&local_50);
      FUN_1449e3bb0(lVar9 + lVar8 + 0x38,piVar3);
      lVar14 = (longlong)*(int *)(lVar9 + lVar8 + 0x20);
      if (lVar14 != 0) {
        lVar5 = *(longlong *)(lVar9 + 0x18 + lVar8);
        lVar11 = 0;
        do {
          local_54 = *(int *)(lVar5 + lVar11);
          if (local_54 != *piVar3) {
            FUN_1449e3bb0(*(longlong *)(piVar3 + 2) + 0x18,&local_54);
          }
          lVar11 = lVar11 + 4;
        } while (lVar14 * 4 != lVar11);
      }
      lVar14 = (longlong)*(int *)(lVar9 + lVar8 + 0x30);
      param_2 = local_60;
      param_1 = local_68;
      uVar12 = local_70;
      if (lVar14 != 0) {
        lVar9 = *(longlong *)(lVar9 + lVar8 + 0x28);
        lVar8 = 0;
        do {
          local_54 = *(int *)(lVar9 + lVar8);
          FUN_1449e3bb0(*(longlong *)(piVar3 + 2) + 0x28,&local_54);
          lVar8 = lVar8 + 4;
          param_2 = local_60;
          param_1 = local_68;
          uVar12 = local_70;
        } while (lVar14 * 4 != lVar8);
      }
      goto LAB_142830e58;
    }
    if ((int)uVar1 <= DAT_14c9647bc) goto LAB_142830e58;
    cVar6 = (**(code **)(*plVar2 + 0x28))();
    lVar9 = *(longlong *)(param_2 + uVar10 * 8);
    if ((cVar6 != '\0') && ((*(uint *)(lVar9 + 8) & 0x1400) == 0)) {
      uVar1 = *(uint *)(lVar9 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      if ((*(uint *)(lVar8 + 8) >> 0x1e & 1) != 0) goto LAB_142830e38;
      lVar8 = *(longlong *)(piVar3 + 4);
      if (DAT_14c951858 == 0) {
        local_50 = FUN_1449e2820;
        local_90 = FUN_14081d0ea;
        local_98 = FUN_14081d0ea;
        local_a0 = &local_50;
        local_a8 = &LAB_1468c5283;
        local_b0 = FUN_142809da0;
        local_b8 = L"Engine";
        local_c0 = 0x400000000;
        local_c8 = 0x10000000;
        local_d0 = 8;
        local_d8 = CONCAT44(local_d8._4_4_,0x50);
        local_80 = lVar9;
        local_78 = *(longlong *)(piVar3 + 4);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        lVar9 = local_80;
        lVar8 = local_78;
      }
      if ((*(int *)(DAT_14c951858 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) == DAT_14c951858 + 0x30)) {
        if (lVar8 != lVar9) {
LAB_142830f57:
          lVar14 = lVar9;
          lVar9 = lVar14;
          if (*(longlong *)(lVar14 + 0x20) != 0) goto code_r0x000142830f66;
          goto LAB_142830f93;
        }
        goto LAB_142830f9d;
      }
      do {
        lVar9 = *(longlong *)(lVar9 + 0x20);
      } while (lVar9 != lVar8 && lVar9 != 0);
      if ((lVar8 != 0) && (lVar9 == 0)) goto LAB_142830f9d;
      goto LAB_142830fb7;
    }
LAB_142830e38:
    lVar8 = *(longlong *)(piVar3 + 2);
    uVar7 = *(undefined4 *)(lVar9 + 0xc);
    goto LAB_142830e44;
  }
  goto LAB_142830e58;
code_r0x000142830f66:
  lVar9 = *(longlong *)(lVar14 + 0x20);
  if ((*(uint *)(lVar14 + 8) >> 0x1c & 1) == 0) goto LAB_142830f57;
  local_80 = lVar14;
  local_78 = lVar8;
  lVar14 = FUN_142840154(lVar14);
  lVar9 = local_80;
  lVar8 = local_78;
LAB_142830f93:
  if (lVar14 == 0) {
    lVar9 = *(longlong *)(lVar9 + 0x20);
    goto LAB_142830f57;
  }
  if (lVar14 != lVar8) {
LAB_142830f9d:
    lVar9 = *(longlong *)(param_2 + uVar10 * 8);
    if (lVar9 != *(longlong *)(piVar3 + 4)) {
      lVar8 = *(longlong *)(piVar3 + 2);
      uVar7 = *(undefined4 *)(lVar9 + 0xc);
LAB_142830e44:
      local_50 = (code *)CONCAT44(local_50._4_4_,uVar7);
      FUN_144aa221c(lVar8 + 0x28,&local_50);
      goto LAB_142830e58;
    }
  }
LAB_142830fb7:
  local_d8 = uVar4;
  FUN_142831002(piVar3,*(undefined4 *)(*(longlong *)(param_2 + uVar10 * 8) + 0xc),plVar13);
LAB_142830e58:
  uVar10 = uVar10 + 1;
  if (uVar10 == uVar12) goto LAB_142830fd4;
  goto LAB_142830c23;
}



// FUNCTION 142831002 FUN_142831002 body=2836 status=ok
// SIG undefined FUN_142831002(void)

void FUN_142831002(int *param_1,int param_2,longlong param_3,longlong param_4,longlong param_5)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  int local_54;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((*param_1 == param_2) || (*(int *)(param_3 + 0xc) != 0)) ||
     (uVar5 = *(uint *)(param_4 + 0xc), (int)uVar5 <= DAT_14c9647bc)) goto LAB_142831648;
  if ((int)uVar5 < DAT_14c9647dc) {
    lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
  }
  else {
    lVar7 = 0;
  }
  if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) != 0) goto LAB_142831648;
  **(longlong **)(param_5 + 0x18) = param_4;
  lVar7 = *(longlong *)(param_5 + 0x18) + 8;
  *(longlong *)(param_5 + 0x18) = lVar7;
  if (lVar7 == *(longlong *)(param_5 + 0x20) + 0xf80) {
    FUN_141715f94(param_5 + 0x18);
  }
  *(int *)(param_3 + 0xc) = *param_1;
  lVar7 = *(longlong *)(param_1 + 2);
  iVar1 = *(int *)(lVar7 + 0x10);
  *(uint *)(lVar7 + 0x10) = iVar1 + 1U;
  if (*(uint *)(lVar7 + 0x14) < iVar1 + 1U) {
    FUN_1446f48e2((longlong *)(lVar7 + 8),iVar1);
  }
  *(int *)(*(longlong *)(lVar7 + 8) + (longlong)iVar1 * 4) = param_2;
  lVar7 = DAT_14c9640e8;
  plVar2 = *(longlong **)(param_4 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    uVar5 = *(uint *)((longlong)plVar2 + 0xc);
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    if (*(int *)(lVar11 + 0xc) != *param_1) {
      puVar10 = (uint *)((longlong)plVar2 + 0xc);
      if ((*(uint *)(lVar11 + 8) & 0x1000000) == 0 && *(int *)(lVar11 + 0xc) == 0) {
        if (DAT_14c9647bc < (int)uVar5) {
          cVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
          if (cVar4 == '\0') {
            uVar5 = *puVar10;
          }
          else {
            uVar5 = *(uint *)((longlong)plVar2 + 0xc);
            if ((*(uint *)(plVar2 + 1) & 0x1400) == 0) {
              if ((int)uVar5 < DAT_14c9647dc) {
                lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
              }
              else {
                lVar7 = 0;
              }
              if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0) {
                plVar3 = *(longlong **)(param_1 + 4);
                if (DAT_14c951858 == 0) {
                  local_70 = &local_50;
                  local_50 = FUN_1449e2820;
                  local_60 = FUN_14081d0ea;
                  local_68 = FUN_14081d0ea;
                  local_78 = &LAB_1468c5283;
                  local_80 = FUN_142809da0;
                  local_88 = L"Engine";
                  local_90 = 0x400000000;
                  local_98 = 0x10000000;
                  local_a0 = 8;
                  local_a8 = CONCAT44(local_a8._4_4_,0x50);
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                }
                plVar6 = plVar2;
                if ((*(int *)(plVar3[2] + 0x38) < *(int *)(DAT_14c951858 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14c951858 + 0x38) * 8
                     ) != DAT_14c951858 + 0x30)) {
                  do {
                    plVar6 = (longlong *)plVar6[4];
                  } while (plVar6 != plVar3 && plVar6 != (longlong *)0x0);
                  if ((plVar3 == (longlong *)0x0) || (plVar6 != (longlong *)0x0))
                  goto LAB_142831a2d;
                }
                else if (plVar3 != plVar2) {
LAB_1428319e4:
                  plVar8 = plVar6;
                  plVar6 = plVar8;
                  if ((longlong *)plVar8[4] != (longlong *)0x0) goto code_r0x0001428319f3;
                  goto LAB_142831a05;
                }
                goto LAB_142831a0f;
              }
            }
          }
          lVar7 = *(longlong *)(param_1 + 2);
          local_50 = (code *)CONCAT44(local_50._4_4_,uVar5);
          goto LAB_1428312af;
        }
      }
      else {
        if ((*(uint *)(lVar11 + 8) >> 0x18 & 1) == 0) {
          puVar10 = (uint *)(lVar11 + 0xc);
        }
        uVar5 = *puVar10;
        local_50 = (code *)CONCAT44(local_50._4_4_,uVar5);
        if ((int)uVar5 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
        }
        else {
          lVar11 = 0;
        }
        lVar9 = ~(longlong)*(int *)(lVar11 + 0xc) * 0x50;
        lVar12 = DAT_14c9640e8 + lVar9;
        FUN_1449e3bb0(*(longlong *)(param_1 + 2) + 0x18,&local_50);
        lVar11 = lVar9 + 0x38 + lVar7;
        FUN_1449e3bb0(lVar11,param_1);
        lVar11 = (longlong)*(int *)(lVar11 + -0x18);
        if (lVar11 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x18 + lVar9);
          lVar9 = 0;
          do {
            local_54 = *(int *)(lVar7 + lVar9);
            if (local_54 != *param_1) {
              FUN_1449e3bb0(*(longlong *)(param_1 + 2) + 0x18,&local_54);
            }
            lVar9 = lVar9 + 4;
          } while (lVar11 * 4 != lVar9);
        }
        lVar7 = (longlong)*(int *)(lVar12 + 0x30);
        if (lVar7 != 0) {
          lVar11 = *(longlong *)(lVar12 + 0x28);
          lVar9 = 0;
          do {
            local_54 = *(int *)(lVar11 + lVar9);
            FUN_1449e3bb0(*(longlong *)(param_1 + 2) + 0x28,&local_54);
            lVar9 = lVar9 + 4;
          } while (lVar7 * 4 != lVar9);
        }
      }
    }
  }
  goto LAB_1428312b4;
code_r0x000142831a5b:
  plVar6 = (longlong *)plVar8[4];
  if ((*(uint *)(plVar8 + 1) >> 0x1c & 1) == 0) goto LAB_142831a4c;
  plVar6 = (longlong *)FUN_142840154(plVar8);
LAB_142831a6d:
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)plVar8[4];
    goto LAB_142831a4c;
  }
  if (plVar6 != plVar3) goto LAB_142831a77;
  goto LAB_142831a95;
code_r0x000142831ac3:
  plVar6 = (longlong *)plVar8[4];
  if ((*(uint *)(plVar8 + 1) >> 0x1c & 1) == 0) goto LAB_142831ab4;
  plVar6 = (longlong *)FUN_142840154(plVar8);
LAB_142831ad5:
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)plVar8[4];
    goto LAB_142831ab4;
  }
  if (plVar6 != plVar3) goto LAB_142831adf;
  goto LAB_142831afc;
code_r0x0001428319f3:
  plVar6 = (longlong *)plVar8[4];
  if ((*(uint *)(plVar8 + 1) >> 0x1c & 1) == 0) goto LAB_1428319e4;
  plVar6 = (longlong *)FUN_142840154(plVar8);
LAB_142831a05:
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)plVar8[4];
    goto LAB_1428319e4;
  }
  if (plVar6 != plVar3) {
LAB_142831a0f:
    if (plVar2 != *(longlong **)(param_1 + 4)) {
      lVar7 = *(longlong *)(param_1 + 2);
      local_50 = (code *)CONCAT44(local_50._4_4_,*puVar10);
LAB_1428312af:
      FUN_144aa221c(lVar7 + 0x28);
      goto LAB_1428312b4;
    }
  }
LAB_142831a2d:
  local_a8 = param_5;
  FUN_142831002(param_1,*(undefined4 *)((longlong)plVar2 + 0xc),lVar11,plVar2);
LAB_1428312b4:
  lVar7 = DAT_14c9640e8;
  plVar2 = *(longlong **)(param_4 + 0x10);
  if ((*(byte *)((longlong)plVar2 + 0xd4) & 0x80) != 0) goto LAB_142831648;
  if (plVar2 != (longlong *)0x0) {
    uVar5 = *(uint *)((longlong)plVar2 + 0xc);
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    if (*(int *)(lVar11 + 0xc) != *param_1) {
      puVar10 = (uint *)((longlong)plVar2 + 0xc);
      if ((*(uint *)(lVar11 + 8) & 0x1000000) == 0 && *(int *)(lVar11 + 0xc) == 0) {
        if (DAT_14c9647bc < (int)uVar5) {
          cVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
          if (cVar4 == '\0') {
            uVar5 = *puVar10;
LAB_142831474:
            lVar7 = *(longlong *)(param_1 + 2);
            local_50 = (code *)CONCAT44(local_50._4_4_,uVar5);
          }
          else {
            uVar5 = *(uint *)((longlong)plVar2 + 0xc);
            if ((*(uint *)(plVar2 + 1) & 0x1400) != 0) goto LAB_142831474;
            if ((int)uVar5 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) != 0) goto LAB_142831474;
            plVar3 = *(longlong **)(param_1 + 4);
            if (DAT_14c951858 == 0) {
              local_70 = &local_50;
              local_50 = FUN_1449e2820;
              local_60 = FUN_14081d0ea;
              local_68 = FUN_14081d0ea;
              local_78 = &LAB_1468c5283;
              local_80 = FUN_142809da0;
              local_88 = L"Engine";
              local_90 = 0x400000000;
              local_98 = 0x10000000;
              local_a0 = 8;
              local_a8 = CONCAT44(local_a8._4_4_,0x50);
              FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
            }
            plVar6 = plVar2;
            if ((*(int *)(plVar3[2] + 0x38) < *(int *)(DAT_14c951858 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) !=
                DAT_14c951858 + 0x30)) {
              do {
                plVar6 = (longlong *)plVar6[4];
              } while (plVar6 != plVar3 && plVar6 != (longlong *)0x0);
              if ((plVar3 != (longlong *)0x0) && (plVar6 == (longlong *)0x0)) goto LAB_142831a77;
LAB_142831a95:
              local_a8 = param_5;
              FUN_142831002(param_1,*(undefined4 *)((longlong)plVar2 + 0xc),lVar11,plVar2);
              goto LAB_142831488;
            }
            if (plVar3 != plVar2) {
LAB_142831a4c:
              plVar8 = plVar6;
              plVar6 = plVar8;
              if ((longlong *)plVar8[4] != (longlong *)0x0) goto code_r0x000142831a5b;
              goto LAB_142831a6d;
            }
LAB_142831a77:
            if (plVar2 == *(longlong **)(param_1 + 4)) goto LAB_142831a95;
            lVar7 = *(longlong *)(param_1 + 2);
            local_50 = (code *)CONCAT44(local_50._4_4_,*puVar10);
          }
          FUN_144aa221c(lVar7 + 0x28);
        }
      }
      else {
        if ((*(uint *)(lVar11 + 8) >> 0x18 & 1) == 0) {
          puVar10 = (uint *)(lVar11 + 0xc);
        }
        uVar5 = *puVar10;
        local_50 = (code *)CONCAT44(local_50._4_4_,uVar5);
        if ((int)uVar5 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
        }
        else {
          lVar11 = 0;
        }
        lVar9 = ~(longlong)*(int *)(lVar11 + 0xc) * 0x50;
        lVar12 = DAT_14c9640e8 + lVar9;
        FUN_1449e3bb0(*(longlong *)(param_1 + 2) + 0x18,&local_50);
        lVar11 = lVar9 + 0x38 + lVar7;
        FUN_1449e3bb0(lVar11,param_1);
        lVar11 = (longlong)*(int *)(lVar11 + -0x18);
        if (lVar11 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x18 + lVar9);
          lVar9 = 0;
          do {
            local_54 = *(int *)(lVar7 + lVar9);
            if (local_54 != *param_1) {
              FUN_1449e3bb0(*(longlong *)(param_1 + 2) + 0x18,&local_54);
            }
            lVar9 = lVar9 + 4;
          } while (lVar11 * 4 != lVar9);
        }
        lVar7 = (longlong)*(int *)(lVar12 + 0x30);
        if (lVar7 != 0) {
          lVar11 = *(longlong *)(lVar12 + 0x28);
          lVar9 = 0;
          do {
            local_54 = *(int *)(lVar11 + lVar9);
            FUN_1449e3bb0(*(longlong *)(param_1 + 2) + 0x28,&local_54);
            lVar9 = lVar9 + 4;
          } while (lVar7 * 4 != lVar9);
        }
      }
    }
  }
LAB_142831488:
  lVar7 = DAT_14c9640e8;
  plVar2 = *(longlong **)(*(longlong *)(param_4 + 0x10) + 0x20);
  if (plVar2 == (longlong *)0x0) goto LAB_142831648;
  uVar5 = *(uint *)((longlong)plVar2 + 0xc);
  if ((int)uVar5 < DAT_14c9647dc) {
    lVar11 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
  }
  else {
    lVar11 = 0;
  }
  if (*(int *)(lVar11 + 0xc) == *param_1) goto LAB_142831648;
  puVar10 = (uint *)((longlong)plVar2 + 0xc);
  if ((*(uint *)(lVar11 + 8) & 0x1000000) != 0 || *(int *)(lVar11 + 0xc) != 0) {
    if ((*(uint *)(lVar11 + 8) >> 0x18 & 1) == 0) {
      puVar10 = (uint *)(lVar11 + 0xc);
    }
    uVar5 = *puVar10;
    local_50 = (code *)CONCAT44(local_50._4_4_,uVar5);
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    lVar12 = ~(longlong)*(int *)(lVar11 + 0xc) * 0x50;
    lVar11 = DAT_14c9640e8 + lVar12;
    FUN_1449e3bb0(*(longlong *)(param_1 + 2) + 0x18,&local_50);
    lVar9 = lVar7 + lVar12;
    FUN_1449e3bb0(lVar9 + 0x38,param_1);
    lVar9 = (longlong)*(int *)(lVar9 + 0x20);
    if (lVar9 != 0) {
      lVar7 = *(longlong *)(lVar7 + 0x18 + lVar12);
      lVar12 = 0;
      do {
        local_54 = *(int *)(lVar7 + lVar12);
        if (local_54 != *param_1) {
          FUN_1449e3bb0(*(longlong *)(param_1 + 2) + 0x18,&local_54);
        }
        lVar12 = lVar12 + 4;
      } while (lVar9 * 4 != lVar12);
    }
    lVar7 = (longlong)*(int *)(lVar11 + 0x30);
    if (lVar7 != 0) {
      lVar11 = *(longlong *)(lVar11 + 0x28);
      lVar9 = 0;
      do {
        local_54 = *(int *)(lVar11 + lVar9);
        FUN_1449e3bb0(*(longlong *)(param_1 + 2) + 0x28,&local_54);
        lVar9 = lVar9 + 4;
      } while (lVar7 * 4 != lVar9);
    }
    goto LAB_142831648;
  }
  if ((int)uVar5 <= DAT_14c9647bc) goto LAB_142831648;
  cVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
  if (cVar4 == '\0') {
    uVar5 = *puVar10;
LAB_142831634:
    lVar7 = *(longlong *)(param_1 + 2);
    local_50 = (code *)CONCAT44(local_50._4_4_,uVar5);
  }
  else {
    uVar5 = *(uint *)((longlong)plVar2 + 0xc);
    if ((*(uint *)(plVar2 + 1) & 0x1400) != 0) goto LAB_142831634;
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) != 0) goto LAB_142831634;
    plVar3 = *(longlong **)(param_1 + 4);
    if (DAT_14c951858 == 0) {
      local_70 = &local_50;
      local_50 = FUN_1449e2820;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1468c5283;
      local_80 = FUN_142809da0;
      local_88 = L"Engine";
      local_90 = 0x400000000;
      local_98 = 0x10000000;
      local_a0 = 8;
      local_a8 = CONCAT44(local_a8._4_4_,0x50);
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    plVar6 = plVar2;
    if ((*(int *)(plVar3[2] + 0x38) < *(int *)(DAT_14c951858 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) !=
        DAT_14c951858 + 0x30)) {
      do {
        plVar6 = (longlong *)plVar6[4];
      } while (plVar6 != plVar3 && plVar6 != (longlong *)0x0);
      if ((plVar3 != (longlong *)0x0) && (plVar6 == (longlong *)0x0)) goto LAB_142831adf;
LAB_142831afc:
      local_a8 = param_5;
      FUN_142831002(param_1,*(undefined4 *)((longlong)plVar2 + 0xc),lVar11,plVar2);
      goto LAB_142831648;
    }
    if (plVar3 != plVar2) {
LAB_142831ab4:
      plVar8 = plVar6;
      plVar6 = plVar8;
      if ((longlong *)plVar8[4] != (longlong *)0x0) goto code_r0x000142831ac3;
      goto LAB_142831ad5;
    }
LAB_142831adf:
    if (plVar2 == *(longlong **)(param_1 + 4)) goto LAB_142831afc;
    lVar7 = *(longlong *)(param_1 + 2);
    local_50 = (code *)CONCAT44(local_50._4_4_,*puVar10);
  }
  FUN_144aa221c(lVar7 + 0x28);
LAB_142831648:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142831b17 FUN_142831b17 body=8810 status=ok
// SIG undefined FUN_142831b17(void)

void FUN_142831b17(undefined8 *param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ushort *puVar5;
  ulonglong uVar6;
  ushort *puVar7;
  ulonglong *puVar8;
  ushort *puVar9;
  int *piVar10;
  longlong lVar11;
  ushort *puVar12;
  uint *puVar13;
  ushort *puVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  ushort *puVar19;
  longlong *plVar20;
  longlong lVar21;
  ushort *puVar22;
  longlong *plVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong *puVar26;
  undefined1 auStack_138 [32];
  ushort *local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  wchar_t *local_f8;
  code *local_f0;
  undefined1 *local_e8;
  code **local_e0;
  code *local_d8;
  code *local_d0;
  longlong local_c8;
  longlong local_c0;
  ushort *local_b8;
  ushort *local_b0;
  undefined8 *local_a8;
  ushort *local_a0;
  ushort *local_98;
  ushort *local_90;
  ulonglong local_88;
  longlong local_80;
  int local_74;
  code *local_70;
  byte local_68 [4];
  uint local_64;
  byte local_60;
  uint local_5c;
  byte local_58;
  uint local_54;
  byte local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_88 = (ulonglong)((uint)param_2 & 1);
  local_a0 = (ushort *)(param_2 & 0xfffffffffffffffe);
  local_a8 = param_1;
  local_80 = param_3;
LAB_142831b72:
  local_68[0] = (byte)*local_a0 & 0x1f;
  local_64 = (uint)(*local_a0 >> 5);
  local_60 = (byte)local_a0[1] & 0x1f;
  local_5c = (uint)(local_a0[1] >> 5);
  local_58 = (byte)local_a0[2] & 0x1f;
  local_54 = (uint)(local_a0[2] >> 5);
  local_50 = (byte)local_a0[3] & 0x1f;
  local_4c = (uint)(local_a0[3] >> 5);
  lVar21 = 0;
LAB_142831be4:
  puVar18 = local_a8;
  puVar14 = DAT_14c9640e8;
  uVar4 = (ulonglong)local_68[lVar21];
  if (0x11 < uVar4) {
LAB_142833d4f:
    FUN_142833d82(uVar4);
    goto switchD_142831c0b_caseD_0;
  }
  puVar26 = (ulonglong *)(param_3 + (ulonglong)*(uint *)((longlong)&local_64 + lVar21) * 8);
  puVar9 = local_a0;
  switch(uVar4) {
  case 1:
    param_3 = param_3 + (ulonglong)(*(uint *)((longlong)&local_64 + lVar21) * 0x800 + 0x800) * 8;
    break;
  case 2:
    plVar20 = (longlong *)*puVar26;
    if (plVar20 == (longlong *)0x0) break;
    uVar24 = *(uint *)((longlong)plVar20 + 0xc);
    if ((int)uVar24 < DAT_14c9647dc) {
      plVar23 = (longlong *)
                ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8));
    }
    else {
      plVar23 = (longlong *)0x0;
    }
    piVar10 = (int *)*param_1;
    local_c8 = lVar21;
    local_c0 = param_3;
    if (*(int *)((longlong)plVar23 + 0xc) == *piVar10) break;
    puVar12 = (ushort *)param_1[1];
    if ((*(uint *)(plVar23 + 1) & 0x1000000) != 0 || *(int *)((longlong)plVar23 + 0xc) != 0) {
      if ((*(uint *)(plVar23 + 1) >> 0x18 & 1) != 0) {
        plVar23 = plVar20;
      }
      uVar24 = *(uint *)((longlong)plVar23 + 0xc);
      local_70 = (code *)CONCAT44(local_70._4_4_,uVar24);
      if ((int)uVar24 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      uVar4 = ~(longlong)*(int *)(lVar11 + 0xc);
      FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_70);
      FUN_1449e3bb0(puVar14 + uVar4 * 0x28 + 0x1c,piVar10);
      iVar1 = *(int *)(puVar14 + uVar4 * 0x28 + 0x10);
      if ((longlong)iVar1 != 0) {
        lVar21 = *(longlong *)(puVar14 + uVar4 * 0x28 + 0xc);
        lVar11 = 0;
        do {
          local_74 = *(int *)(lVar21 + lVar11);
          if (local_74 != *piVar10) {
            FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_74);
          }
          lVar11 = lVar11 + 4;
        } while ((longlong)iVar1 * 4 != lVar11);
      }
      iVar1 = *(int *)(puVar14 + uVar4 * 0x28 + 0x18);
      param_3 = local_c0;
      param_1 = local_a8;
      lVar21 = local_c8;
      puVar9 = local_a0;
      if ((longlong)iVar1 != 0) {
        lVar11 = *(longlong *)(puVar14 + uVar4 * 0x28 + 0x14);
        lVar15 = 0;
        do {
          local_74 = *(int *)(lVar11 + lVar15);
          FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x28,&local_74);
          lVar15 = lVar15 + 4;
          param_3 = local_c0;
          param_1 = local_a8;
          lVar21 = local_c8;
          puVar9 = local_a0;
        } while ((longlong)iVar1 * 4 != lVar15);
      }
      break;
    }
    if ((int)uVar24 <= DAT_14c9647bc) break;
    cVar2 = (**(code **)(*plVar20 + 0x28))();
    uVar4 = *puVar26;
    if ((cVar2 != '\0') && ((*(uint *)(uVar4 + 8) & 0x1400) == 0)) {
      uVar24 = *(uint *)(uVar4 + 0xc);
      if ((int)uVar24 < DAT_14c9647dc) {
        lVar21 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
      }
      else {
        lVar21 = 0;
      }
      if ((*(uint *)(lVar21 + 8) >> 0x1e & 1) != 0) goto LAB_142833907;
      uVar25 = *(ulonglong *)(piVar10 + 4);
      if (DAT_14c951858 == 0) {
        local_70 = FUN_1449e2820;
        local_d0 = FUN_14081d0ea;
        local_d8 = FUN_14081d0ea;
        local_e0 = &local_70;
        local_e8 = &LAB_1468c5283;
        local_f0 = FUN_142809da0;
        local_f8 = L"Engine";
        local_100 = 0x400000000;
        local_108 = 0x10000000;
        local_110 = 8;
        local_118 = (ushort *)CONCAT44(local_118._4_4_,0x50);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      if ((*(int *)(DAT_14c951858 + 0x38) <= *(int *)(*(longlong *)(uVar25 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar25 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) == DAT_14c951858 + 0x30)) {
        if (uVar25 != uVar4) {
LAB_142833c7b:
          uVar6 = uVar4;
          uVar4 = uVar6;
          if (*(ulonglong *)(uVar6 + 0x20) != 0) goto code_r0x000142833c8a;
          goto LAB_142833ca1;
        }
        goto LAB_142833cab;
      }
      do {
        uVar4 = *(ulonglong *)(uVar4 + 0x20);
      } while (uVar4 != uVar25 && uVar4 != 0);
      if ((uVar25 != 0) && (uVar4 == 0)) goto LAB_142833cab;
      goto LAB_142833cc6;
    }
LAB_142833907:
    lVar21 = *(longlong *)(piVar10 + 2) + 0x28;
    uVar24 = *(uint *)(uVar4 + 0xc);
    goto LAB_142833914;
  case 3:
    if ((longlong)(int)puVar26[1] != 0) {
      puVar22 = (ushort *)*puVar26;
      puVar14 = puVar22 + (longlong)(int)puVar26[1] * 4;
      local_c8 = lVar21;
      local_c0 = param_3;
      local_b8 = puVar14;
LAB_142832591:
      puVar9 = DAT_14c9640e8;
      plVar23 = *(longlong **)puVar22;
      if (plVar23 != (longlong *)0x0) {
        uVar24 = *(uint *)((longlong)plVar23 + 0xc);
        if ((int)uVar24 < DAT_14c9647dc) {
          plVar20 = (longlong *)
                    ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8));
        }
        else {
          plVar20 = (longlong *)0x0;
        }
        piVar10 = (int *)*param_1;
        if (*(int *)((longlong)plVar20 + 0xc) == *piVar10) goto LAB_1428327bd;
        puVar12 = (ushort *)param_1[1];
        if ((*(uint *)(plVar20 + 1) & 0x1000000) != 0 || *(int *)((longlong)plVar20 + 0xc) != 0) {
          if ((*(uint *)(plVar20 + 1) >> 0x18 & 1) != 0) {
            plVar20 = plVar23;
          }
          uVar24 = *(uint *)((longlong)plVar20 + 0xc);
          local_70 = (code *)CONCAT44(local_70._4_4_,uVar24);
          if ((int)uVar24 < DAT_14c9647dc) {
            lVar21 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
          }
          else {
            lVar21 = 0;
          }
          uVar4 = ~(longlong)*(int *)(lVar21 + 0xc);
          FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_70);
          FUN_1449e3bb0(puVar9 + uVar4 * 0x28 + 0x1c,piVar10);
          iVar1 = *(int *)(puVar9 + uVar4 * 0x28 + 0x10);
          if ((longlong)iVar1 != 0) {
            lVar21 = *(longlong *)(puVar9 + uVar4 * 0x28 + 0xc);
            lVar11 = 0;
            do {
              local_74 = *(int *)(lVar21 + lVar11);
              if (local_74 != *piVar10) {
                FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_74);
              }
              lVar11 = lVar11 + 4;
            } while ((longlong)iVar1 * 4 != lVar11);
          }
          iVar1 = *(int *)(puVar9 + uVar4 * 0x28 + 0x18);
          param_1 = local_a8;
          puVar14 = local_b8;
          if ((longlong)iVar1 != 0) {
            lVar21 = *(longlong *)(puVar9 + uVar4 * 0x28 + 0x14);
            lVar11 = 0;
            do {
              local_74 = *(int *)(lVar21 + lVar11);
              FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x28,&local_74);
              lVar11 = lVar11 + 4;
              param_1 = local_a8;
              puVar14 = local_b8;
            } while ((longlong)iVar1 * 4 != lVar11);
          }
          goto LAB_1428327bd;
        }
        if ((int)uVar24 <= DAT_14c9647bc) goto LAB_1428327bd;
        cVar2 = (**(code **)(*plVar23 + 0x28))();
        puVar9 = *(ushort **)puVar22;
        if ((cVar2 != '\0') && ((*(uint *)(puVar9 + 4) & 0x1400) == 0)) {
          uVar24 = *(uint *)(puVar9 + 6);
          if ((int)uVar24 < DAT_14c9647dc) {
            lVar21 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
          }
          else {
            lVar21 = 0;
          }
          if ((*(uint *)(lVar21 + 8) >> 0x1e & 1) != 0) goto LAB_14283279e;
          puVar7 = *(ushort **)(piVar10 + 4);
          if (DAT_14c951858 == 0) {
            local_70 = FUN_1449e2820;
            local_d0 = FUN_14081d0ea;
            local_d8 = FUN_14081d0ea;
            local_e0 = &local_70;
            local_e8 = &LAB_1468c5283;
            local_f0 = FUN_142809da0;
            local_f8 = L"Engine";
            local_100 = 0x400000000;
            local_108 = 0x10000000;
            local_110 = 8;
            local_118 = (ushort *)CONCAT44(local_118._4_4_,0x50);
            local_b0 = *(ushort **)(piVar10 + 4);
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
            puVar7 = local_b0;
          }
          if ((*(int *)(DAT_14c951858 + 0x38) <= *(int *)(*(longlong *)(puVar7 + 8) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(puVar7 + 8) + 0x30) +
               (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) == DAT_14c951858 + 0x30)) {
            if (puVar7 != puVar9) {
LAB_1428328b3:
              puVar19 = puVar9;
              puVar9 = puVar19;
              if (*(ushort **)(puVar19 + 0x10) != (ushort *)0x0) goto code_r0x0001428328c2;
              goto LAB_1428328e6;
            }
            goto LAB_1428328f0;
          }
          do {
            puVar9 = *(ushort **)(puVar9 + 0x10);
          } while (puVar9 != puVar7 && puVar9 != (ushort *)0x0);
          if ((puVar7 != (ushort *)0x0) && (puVar9 == (ushort *)0x0)) goto LAB_1428328f0;
          goto LAB_142832909;
        }
LAB_14283279e:
        lVar21 = *(longlong *)(piVar10 + 2);
        uVar3 = *(undefined4 *)(puVar9 + 6);
        goto LAB_1428327a9;
      }
      goto LAB_1428327bd;
    }
    break;
  case 4:
    puVar8 = (ulonglong *)(local_a0 + 4);
    local_a0 = local_a0 + 4;
    uVar24 = *(uint *)((*puVar8 & 0xfffffffffffffffe) - 8);
    uVar17 = (int)puVar26[1] * uVar24;
    param_1 = puVar18;
    local_c8 = lVar21;
    local_c0 = param_3;
    puVar9 = local_a0;
    if (uVar17 != 0) {
      lVar11 = (*puVar8 & 0xfffffffffffffffe) + local_88;
      uVar4 = *puVar26;
      uVar25 = 0;
      do {
        FUN_142831b17(puVar18,lVar11,uVar4 + uVar25);
        uVar25 = uVar25 + uVar24;
        param_3 = local_c0;
        lVar21 = local_c8;
        puVar9 = local_a0;
      } while (uVar17 != uVar25);
    }
    break;
  case 5:
    puVar13 = (uint *)(local_a0 + 4);
    local_a0 = local_a0 + 4;
    uVar24 = *puVar13 >> 0x10;
    puVar14 = (ushort *)(ulonglong)uVar24;
    uVar24 = (int)puVar26[1] * uVar24;
    puVar9 = local_a0;
    if (uVar24 != 0) {
      puVar22 = (ushort *)((ulonglong)(*puVar13 & 0xffff) * 8 + *puVar26);
      puVar12 = puVar22 + (ulonglong)uVar24 * 4;
      local_c8 = lVar21;
      local_c0 = param_3;
      local_b8 = puVar14;
      local_b0 = puVar12;
LAB_14283215c:
      puVar9 = DAT_14c9640e8;
      plVar23 = *(longlong **)puVar22;
      if (plVar23 != (longlong *)0x0) {
        uVar24 = *(uint *)((longlong)plVar23 + 0xc);
        if ((int)uVar24 < DAT_14c9647dc) {
          plVar20 = (longlong *)
                    ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8));
        }
        else {
          plVar20 = (longlong *)0x0;
        }
        piVar10 = (int *)*param_1;
        if (*(int *)((longlong)plVar20 + 0xc) == *piVar10) goto LAB_142832392;
        puVar7 = (ushort *)param_1[1];
        if ((*(uint *)(plVar20 + 1) & 0x1000000) != 0 || *(int *)((longlong)plVar20 + 0xc) != 0) {
          if ((*(uint *)(plVar20 + 1) >> 0x18 & 1) != 0) {
            plVar20 = plVar23;
          }
          uVar24 = *(uint *)((longlong)plVar20 + 0xc);
          local_70 = (code *)CONCAT44(local_70._4_4_,uVar24);
          if ((int)uVar24 < DAT_14c9647dc) {
            lVar21 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
          }
          else {
            lVar21 = 0;
          }
          uVar4 = ~(longlong)*(int *)(lVar21 + 0xc);
          FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_70);
          FUN_1449e3bb0(puVar9 + uVar4 * 0x28 + 0x1c,piVar10);
          iVar1 = *(int *)(puVar9 + uVar4 * 0x28 + 0x10);
          if ((longlong)iVar1 != 0) {
            lVar21 = *(longlong *)(puVar9 + uVar4 * 0x28 + 0xc);
            lVar11 = 0;
            do {
              local_74 = *(int *)(lVar21 + lVar11);
              if (local_74 != *piVar10) {
                FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_74);
              }
              lVar11 = lVar11 + 4;
            } while ((longlong)iVar1 * 4 != lVar11);
          }
          iVar1 = *(int *)(puVar9 + uVar4 * 0x28 + 0x18);
          puVar12 = local_b0;
          param_1 = local_a8;
          puVar14 = local_b8;
          if ((longlong)iVar1 != 0) {
            lVar21 = *(longlong *)(puVar9 + uVar4 * 0x28 + 0x14);
            lVar11 = 0;
            do {
              local_74 = *(int *)(lVar21 + lVar11);
              FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x28,&local_74);
              lVar11 = lVar11 + 4;
              puVar12 = local_b0;
              param_1 = local_a8;
              puVar14 = local_b8;
            } while ((longlong)iVar1 * 4 != lVar11);
          }
          goto LAB_142832392;
        }
        if ((int)uVar24 <= DAT_14c9647bc) goto LAB_142832392;
        cVar2 = (**(code **)(*plVar23 + 0x28))();
        puVar9 = *(ushort **)puVar22;
        if ((cVar2 != '\0') && ((*(uint *)(puVar9 + 4) & 0x1400) == 0)) {
          uVar24 = *(uint *)(puVar9 + 6);
          if ((int)uVar24 < DAT_14c9647dc) {
            lVar21 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
          }
          else {
            lVar21 = 0;
          }
          if ((*(uint *)(lVar21 + 8) >> 0x1e & 1) != 0) goto LAB_142832372;
          puVar19 = *(ushort **)(piVar10 + 4);
          if (DAT_14c951858 == 0) {
            local_70 = FUN_1449e2820;
            local_d0 = FUN_14081d0ea;
            local_d8 = FUN_14081d0ea;
            local_e0 = &local_70;
            local_e8 = &LAB_1468c5283;
            local_f0 = FUN_142809da0;
            local_f8 = L"Engine";
            local_100 = 0x400000000;
            local_108 = 0x10000000;
            local_110 = 8;
            local_118 = (ushort *)CONCAT44(local_118._4_4_,0x50);
            local_98 = *(ushort **)(piVar10 + 4);
            local_90 = puVar9;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
            puVar9 = local_90;
            puVar19 = local_98;
          }
          if ((*(int *)(DAT_14c951858 + 0x38) <= *(int *)(*(longlong *)(puVar19 + 8) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(puVar19 + 8) + 0x30) +
               (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) == DAT_14c951858 + 0x30)) {
            if (puVar19 != puVar9) {
LAB_142832499:
              puVar5 = puVar9;
              puVar9 = puVar5;
              if (*(ushort **)(puVar5 + 0x10) != (ushort *)0x0) goto code_r0x0001428324a8;
              goto LAB_1428324de;
            }
            goto LAB_1428324e8;
          }
          do {
            puVar9 = *(ushort **)(puVar9 + 0x10);
          } while (puVar9 != puVar19 && puVar9 != (ushort *)0x0);
          if ((puVar19 != (ushort *)0x0) && (puVar9 == (ushort *)0x0)) goto LAB_1428324e8;
          goto LAB_142832502;
        }
LAB_142832372:
        lVar21 = *(longlong *)(piVar10 + 2);
        uVar3 = *(undefined4 *)(puVar9 + 6);
        goto LAB_14283237e;
      }
      goto LAB_142832392;
    }
    break;
  case 6:
    puVar9 = local_a0 + 4;
    uVar24 = (uint)puVar26[1];
    param_1 = puVar18;
    if ((0 < (int)uVar24) && (uVar24 != *(uint *)((longlong)puVar26 + 0x34))) {
      uVar17 = *(uint *)((*(ulonglong *)(local_a0 + 4) & 0xfffffffffffffffe) - 8);
      lVar11 = (*(ulonglong *)(local_a0 + 4) & 0xfffffffffffffffe) + local_88;
      uVar4 = *puVar26;
      uVar25 = 0;
      local_c8 = lVar21;
      local_c0 = param_3;
      local_b8 = puVar9;
      do {
        puVar8 = (ulonglong *)puVar26[4];
        if ((ulonglong *)puVar26[4] == (ulonglong *)0x0) {
          puVar8 = puVar26 + 2;
        }
        if ((*(uint *)((longlong)puVar8 + (uVar25 >> 5) * 4) >> ((uint)uVar25 & 0x1f) & 1) != 0) {
          FUN_142831b17(local_a8,lVar11,uVar4);
        }
        uVar16 = (uint)uVar25 + 1;
        uVar25 = (ulonglong)uVar16;
        uVar4 = uVar4 + uVar17;
      } while (uVar24 != uVar16);
      local_a0 = local_b8;
      param_3 = local_c0;
      param_1 = local_a8;
      lVar21 = local_c8;
      puVar9 = local_a0;
    }
    break;
  case 7:
    if ((((*(int *)((longlong)puVar26 + 0xc) == 0) ||
         (uVar24 = (uint)puVar26[1], DAT_14c9647dc <= (int)uVar24 || (int)uVar24 < 0)) ||
        (puVar18 = (undefined8 *)
                   ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8)),
        puVar18 == (undefined8 *)0x0)) ||
       ((*(int *)(puVar18 + 2) != *(int *)((longlong)puVar26 + 0xc) ||
        (puVar22 = (ushort *)*puVar18, local_c8 = lVar21, local_c0 = param_3,
        puVar22 == (ushort *)0x0)))) break;
    uVar24 = *(uint *)(puVar22 + 6);
    if ((int)uVar24 < DAT_14c9647dc) {
      plVar23 = (longlong *)
                ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8));
    }
    else {
      plVar23 = (longlong *)0x0;
    }
    piVar10 = (int *)*param_1;
    if (*(int *)((longlong)plVar23 + 0xc) == *piVar10) break;
    puVar12 = (ushort *)param_1[1];
    puVar13 = (uint *)(puVar22 + 6);
    if ((*(uint *)(plVar23 + 1) & 0x1000000) != 0 || *(int *)((longlong)plVar23 + 0xc) != 0) {
      if ((*(uint *)(plVar23 + 1) >> 0x18 & 1) == 0) {
        puVar13 = (uint *)((longlong)plVar23 + 0xc);
      }
      uVar24 = *puVar13;
      local_70 = (code *)CONCAT44(local_70._4_4_,uVar24);
      if ((int)uVar24 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      uVar4 = ~(longlong)*(int *)(lVar11 + 0xc);
      FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_70);
      FUN_1449e3bb0(puVar14 + uVar4 * 0x28 + 0x1c,piVar10);
      iVar1 = *(int *)(puVar14 + uVar4 * 0x28 + 0x10);
      if ((longlong)iVar1 != 0) {
        lVar21 = *(longlong *)(puVar14 + uVar4 * 0x28 + 0xc);
        lVar11 = 0;
        do {
          local_74 = *(int *)(lVar21 + lVar11);
          if (local_74 != *piVar10) {
            FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_74);
          }
          lVar11 = lVar11 + 4;
        } while ((longlong)iVar1 * 4 != lVar11);
      }
      iVar1 = *(int *)(puVar14 + uVar4 * 0x28 + 0x18);
      param_3 = local_c0;
      param_1 = local_a8;
      lVar21 = local_c8;
      puVar9 = local_a0;
      if ((longlong)iVar1 != 0) {
        lVar11 = *(longlong *)(puVar14 + uVar4 * 0x28 + 0x14);
        lVar15 = 0;
        do {
          local_74 = *(int *)(lVar11 + lVar15);
          FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x28,&local_74);
          lVar15 = lVar15 + 4;
          param_3 = local_c0;
          param_1 = local_a8;
          lVar21 = local_c8;
          puVar9 = local_a0;
        } while ((longlong)iVar1 * 4 != lVar15);
      }
      break;
    }
    if ((int)uVar24 <= DAT_14c9647bc) break;
    cVar2 = (**(code **)(*(longlong *)puVar22 + 0x28))(puVar22);
    if (cVar2 == '\0') goto LAB_14283377b;
    uVar24 = *(uint *)(puVar22 + 6);
    if ((*(uint *)(puVar22 + 4) & 0x1400) == 0) {
      if ((int)uVar24 < DAT_14c9647dc) {
        lVar21 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
      }
      else {
        lVar21 = 0;
      }
      if ((*(uint *)(lVar21 + 8) >> 0x1e & 1) != 0) goto LAB_14283377d;
      puVar14 = *(ushort **)(piVar10 + 4);
      if (DAT_14c951858 == 0) {
        local_70 = FUN_1449e2820;
        local_d0 = FUN_14081d0ea;
        local_d8 = FUN_14081d0ea;
        local_e0 = &local_70;
        local_e8 = &LAB_1468c5283;
        local_f0 = FUN_142809da0;
        local_f8 = L"Engine";
        local_100 = 0x400000000;
        local_108 = 0x10000000;
        local_110 = 8;
        local_118 = (ushort *)CONCAT44(local_118._4_4_,0x50);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      puVar9 = puVar22;
      if ((*(int *)(DAT_14c951858 + 0x38) <= *(int *)(*(longlong *)(puVar14 + 8) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(puVar14 + 8) + 0x30) +
           (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) == DAT_14c951858 + 0x30)) {
        if (puVar14 != puVar22) {
LAB_142833ce6:
          puVar7 = puVar9;
          puVar9 = puVar7;
          if (*(ushort **)(puVar7 + 0x10) != (ushort *)0x0) goto code_r0x000142833cf5;
          goto LAB_142833d16;
        }
        goto LAB_142833c4d;
      }
      do {
        puVar9 = *(ushort **)(puVar9 + 0x10);
      } while (puVar9 != puVar14 && puVar9 != (ushort *)0x0);
LAB_1428339b6:
      if ((puVar14 != (ushort *)0x0) && (puVar9 == (ushort *)0x0)) goto LAB_142833c4d;
      goto LAB_142833c62;
    }
LAB_14283377d:
    lVar21 = *(longlong *)(piVar10 + 2) + 0x28;
    local_70 = (code *)CONCAT44(local_70._4_4_,uVar24);
    goto LAB_14283391b;
  case 8:
    if ((longlong)(int)puVar26[1] != 0) {
      uVar4 = *puVar26;
      uVar25 = (longlong)(int)puVar26[1] * 0x20 + uVar4;
      local_c8 = lVar21;
      local_c0 = param_3;
LAB_1428329b5:
      puVar14 = DAT_14c9640e8;
      if ((((*(int *)(uVar4 + 0xc) != 0) &&
           (uVar24 = *(uint *)(uVar4 + 8), (int)uVar24 < DAT_14c9647dc && -1 < (int)uVar24)) &&
          (puVar18 = (undefined8 *)
                     ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8)),
          puVar18 != (undefined8 *)0x0)) &&
         ((*(int *)(puVar18 + 2) == *(int *)(uVar4 + 0xc) &&
          (puVar9 = (ushort *)*puVar18, puVar9 != (ushort *)0x0)))) {
        uVar24 = *(uint *)(puVar9 + 6);
        if ((int)uVar24 < DAT_14c9647dc) {
          lVar21 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
        }
        else {
          lVar21 = 0;
        }
        piVar10 = (int *)*param_1;
        if (*(int *)(lVar21 + 0xc) == *piVar10) goto LAB_142832bf3;
        puVar13 = (uint *)(puVar9 + 6);
        if ((*(uint *)(lVar21 + 8) & 0x1000000) != 0 || *(int *)(lVar21 + 0xc) != 0) {
          if ((*(uint *)(lVar21 + 8) >> 0x18 & 1) == 0) {
            puVar13 = (uint *)(lVar21 + 0xc);
          }
          uVar24 = *puVar13;
          local_70 = (code *)CONCAT44(local_70._4_4_,uVar24);
          if ((int)uVar24 < DAT_14c9647dc) {
            lVar21 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
          }
          else {
            lVar21 = 0;
          }
          uVar6 = ~(longlong)*(int *)(lVar21 + 0xc);
          FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_70);
          local_b8 = puVar14;
          FUN_1449e3bb0(puVar14 + uVar6 * 0x28 + 0x1c,piVar10);
          iVar1 = *(int *)(puVar14 + uVar6 * 0x28 + 0x10);
          if ((longlong)iVar1 != 0) {
            lVar21 = *(longlong *)(local_b8 + uVar6 * 0x28 + 0xc);
            lVar11 = 0;
            do {
              local_74 = *(int *)(lVar21 + lVar11);
              if (local_74 != *piVar10) {
                FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_74);
              }
              lVar11 = lVar11 + 4;
            } while ((longlong)iVar1 * 4 != lVar11);
          }
          iVar1 = *(int *)(local_b8 + uVar6 * 0x28 + 0x18);
          param_1 = local_a8;
          if ((longlong)iVar1 != 0) {
            lVar21 = *(longlong *)(local_b8 + uVar6 * 0x28 + 0x14);
            lVar11 = 0;
            do {
              local_74 = *(int *)(lVar21 + lVar11);
              FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x28,&local_74);
              lVar11 = lVar11 + 4;
              param_1 = local_a8;
            } while ((longlong)iVar1 * 4 != lVar11);
          }
          goto LAB_142832bf3;
        }
        if ((int)uVar24 <= DAT_14c9647bc) goto LAB_142832bf3;
        local_b8 = (ushort *)param_1[1];
        cVar2 = (**(code **)(*(longlong *)puVar9 + 0x28))(puVar9);
        if (cVar2 != '\0') {
          uVar24 = *(uint *)(puVar9 + 6);
          if ((*(uint *)(puVar9 + 4) & 0x1400) != 0) goto LAB_142832bd7;
          if ((int)uVar24 < DAT_14c9647dc) {
            lVar11 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
          }
          else {
            lVar11 = 0;
          }
          if ((*(uint *)(lVar11 + 8) >> 0x1e & 1) != 0) goto LAB_142832bd7;
          puVar14 = *(ushort **)(piVar10 + 4);
          if (DAT_14c951858 == 0) {
            local_70 = FUN_1449e2820;
            local_d0 = FUN_14081d0ea;
            local_d8 = FUN_14081d0ea;
            local_e0 = &local_70;
            local_e8 = &LAB_1468c5283;
            local_f0 = FUN_142809da0;
            local_f8 = L"Engine";
            local_100 = 0x400000000;
            local_108 = 0x10000000;
            local_110 = 8;
            local_118 = (ushort *)CONCAT44(local_118._4_4_,0x50);
            local_b0 = *(ushort **)(piVar10 + 4);
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
            puVar14 = local_b0;
          }
          puVar22 = puVar9;
          puVar12 = local_b8;
          if ((*(int *)(DAT_14c951858 + 0x38) <= *(int *)(*(longlong *)(puVar14 + 8) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(puVar14 + 8) + 0x30) +
               (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) == DAT_14c951858 + 0x30)) {
            if (puVar14 != puVar9) {
LAB_142832d47:
              puVar7 = puVar22;
              puVar22 = puVar7;
              if (*(ushort **)(puVar7 + 0x10) != (ushort *)0x0) goto code_r0x000142832d56;
              goto LAB_142832d8c;
            }
            goto LAB_142832d96;
          }
          do {
            puVar22 = *(ushort **)(puVar22 + 0x10);
          } while (puVar22 != puVar14 && puVar22 != (ushort *)0x0);
          if ((puVar14 != (ushort *)0x0) && (puVar22 == (ushort *)0x0)) goto LAB_142832d96;
          goto LAB_142832db2;
        }
        uVar24 = *puVar13;
LAB_142832bd7:
        lVar21 = *(longlong *)(piVar10 + 2);
        local_70 = (code *)CONCAT44(local_70._4_4_,uVar24);
        goto LAB_142832be6;
      }
      goto LAB_142832bf3;
    }
    break;
  case 9:
    puVar14 = (ushort *)*puVar26;
    puVar22 = (ushort *)(((longlong)puVar14 >> 0x18) + (longlong)puVar26);
    if (((ulonglong)puVar14 & 1) == 0) {
      puVar22 = puVar14;
    }
    if ((longlong)(int)puVar26[1] != 0) {
      puVar14 = puVar22 + (longlong)(int)puVar26[1] * 4;
      local_c8 = lVar21;
      local_c0 = param_3;
      local_b8 = puVar14;
LAB_142832f8b:
      puVar9 = DAT_14c9640e8;
      plVar23 = *(longlong **)puVar22;
      if (plVar23 != (longlong *)0x0) {
        uVar24 = *(uint *)((longlong)plVar23 + 0xc);
        if ((int)uVar24 < DAT_14c9647dc) {
          plVar20 = (longlong *)
                    ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8));
        }
        else {
          plVar20 = (longlong *)0x0;
        }
        piVar10 = (int *)*param_1;
        if (*(int *)((longlong)plVar20 + 0xc) == *piVar10) goto LAB_1428331b2;
        puVar12 = (ushort *)param_1[1];
        if ((*(uint *)(plVar20 + 1) & 0x1000000) != 0 || *(int *)((longlong)plVar20 + 0xc) != 0) {
          if ((*(uint *)(plVar20 + 1) >> 0x18 & 1) != 0) {
            plVar20 = plVar23;
          }
          uVar24 = *(uint *)((longlong)plVar20 + 0xc);
          local_70 = (code *)CONCAT44(local_70._4_4_,uVar24);
          if ((int)uVar24 < DAT_14c9647dc) {
            lVar21 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
          }
          else {
            lVar21 = 0;
          }
          uVar4 = ~(longlong)*(int *)(lVar21 + 0xc);
          FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_70);
          FUN_1449e3bb0(puVar9 + uVar4 * 0x28 + 0x1c,piVar10);
          iVar1 = *(int *)(puVar9 + uVar4 * 0x28 + 0x10);
          if ((longlong)iVar1 != 0) {
            lVar21 = *(longlong *)(puVar9 + uVar4 * 0x28 + 0xc);
            lVar11 = 0;
            do {
              local_74 = *(int *)(lVar21 + lVar11);
              if (local_74 != *piVar10) {
                FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_74);
              }
              lVar11 = lVar11 + 4;
            } while ((longlong)iVar1 * 4 != lVar11);
          }
          iVar1 = *(int *)(puVar9 + uVar4 * 0x28 + 0x18);
          puVar14 = local_b8;
          param_1 = local_a8;
          if ((longlong)iVar1 != 0) {
            lVar21 = *(longlong *)(puVar9 + uVar4 * 0x28 + 0x14);
            lVar11 = 0;
            do {
              local_74 = *(int *)(lVar21 + lVar11);
              FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x28,&local_74);
              lVar11 = lVar11 + 4;
              puVar14 = local_b8;
              param_1 = local_a8;
            } while ((longlong)iVar1 * 4 != lVar11);
          }
          goto LAB_1428331b2;
        }
        if ((int)uVar24 <= DAT_14c9647bc) goto LAB_1428331b2;
        cVar2 = (**(code **)(*plVar23 + 0x28))();
        puVar9 = *(ushort **)puVar22;
        if ((cVar2 != '\0') && ((*(uint *)(puVar9 + 4) & 0x1400) == 0)) {
          uVar24 = *(uint *)(puVar9 + 6);
          if ((int)uVar24 < DAT_14c9647dc) {
            lVar21 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
          }
          else {
            lVar21 = 0;
          }
          if ((*(uint *)(lVar21 + 8) >> 0x1e & 1) != 0) goto LAB_142833193;
          puVar7 = *(ushort **)(piVar10 + 4);
          if (DAT_14c951858 == 0) {
            local_70 = FUN_1449e2820;
            local_d0 = FUN_14081d0ea;
            local_d8 = FUN_14081d0ea;
            local_e0 = &local_70;
            local_e8 = &LAB_1468c5283;
            local_f0 = FUN_142809da0;
            local_f8 = L"Engine";
            local_100 = 0x400000000;
            local_108 = 0x10000000;
            local_110 = 8;
            local_118 = (ushort *)CONCAT44(local_118._4_4_,0x50);
            local_b0 = *(ushort **)(piVar10 + 4);
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
            puVar7 = local_b0;
          }
          if ((*(int *)(DAT_14c951858 + 0x38) <= *(int *)(*(longlong *)(puVar7 + 8) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(puVar7 + 8) + 0x30) +
               (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) == DAT_14c951858 + 0x30)) {
            if (puVar7 != puVar9) {
LAB_1428332a8:
              puVar19 = puVar9;
              puVar9 = puVar19;
              if (*(ushort **)(puVar19 + 0x10) != (ushort *)0x0) goto code_r0x0001428332b7;
              goto LAB_1428332db;
            }
            goto LAB_1428332e5;
          }
          do {
            puVar9 = *(ushort **)(puVar9 + 0x10);
          } while (puVar9 != puVar7 && puVar9 != (ushort *)0x0);
          if ((puVar7 != (ushort *)0x0) && (puVar9 == (ushort *)0x0)) goto LAB_1428332e5;
          goto LAB_1428332fe;
        }
LAB_142833193:
        lVar21 = *(longlong *)(piVar10 + 2);
        uVar3 = *(undefined4 *)(puVar9 + 6);
        goto LAB_14283319e;
      }
      goto LAB_1428331b2;
    }
    break;
  case 10:
    puVar8 = (ulonglong *)(local_a0 + 4);
    local_a0 = local_a0 + 4;
    uVar4 = *puVar26;
    uVar25 = ((longlong)uVar4 >> 0x18) + (longlong)puVar26;
    if ((uVar4 & 1) == 0) {
      uVar25 = uVar4;
    }
    uVar24 = *(uint *)((*puVar8 & 0xfffffffffffffffe) - 8);
    uVar17 = (int)puVar26[1] * uVar24;
    param_1 = puVar18;
    local_c8 = lVar21;
    local_c0 = param_3;
    puVar9 = local_a0;
    if (uVar17 != 0) {
      lVar11 = (*puVar8 & 0xfffffffffffffffe) + local_88;
      uVar4 = 0;
      do {
        FUN_142831b17(puVar18,lVar11,uVar25 + uVar4);
        uVar4 = uVar4 + uVar24;
        param_3 = local_c0;
        lVar21 = local_c8;
        puVar9 = local_a0;
      } while (uVar17 != uVar4);
    }
    break;
  case 0xb:
    puVar8 = (ulonglong *)(local_a0 + 4);
    local_a0 = local_a0 + 4;
    uVar24 = *(uint *)((*puVar8 & 0xfffffffffffffffe) - 8);
    uVar17 = *(byte *)((longlong)puVar26 + (ulonglong)uVar24) * uVar24;
    param_1 = puVar18;
    local_c8 = lVar21;
    local_c0 = param_3;
    puVar9 = local_a0;
    if (uVar17 != 0) {
      lVar11 = (*puVar8 & 0xfffffffffffffffe) + local_88;
      uVar4 = 0;
      do {
        FUN_142831b17(puVar18,lVar11,(longlong)puVar26 + uVar4);
        uVar4 = uVar4 + uVar24;
        param_3 = local_c0;
        lVar21 = local_c8;
        puVar9 = local_a0;
      } while (uVar17 != uVar4);
    }
    break;
  case 0xc:
    (*(code *)**(undefined8 **)*puVar26)((undefined8 *)*puVar26,param_1[2]);
    plVar23 = (longlong *)*puVar26;
    puVar9 = local_a0;
    if (*(char *)((longlong)plVar23 + 0x11) == '\x01') {
      if (((ulonglong)plVar23[1] < 9) && (*(byte *)(plVar23 + 2) < 4)) {
        puVar26 = puVar26 + 1;
      }
      else {
        puVar26 = (ulonglong *)puVar26[1];
      }
      (**(code **)(*plVar23 + 8))(plVar23,puVar26,param_1[2]);
      puVar9 = local_a0;
    }
    break;
  case 0xd:
    (**(code **)(local_a0 + 4))(local_80,param_1[2]);
  case 0:
switchD_142831c0b_caseD_0:
    if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  case 0xe:
    uVar4 = CONCAT71((int7)((ulonglong)
                            ((longlong)&switchD_142831c0b::switchdataD_149eae97c +
                            (longlong)(int)(&switchD_142831c0b::switchdataD_149eae97c)[uVar4]) >> 8)
                     ,0xe);
    goto LAB_142833d4f;
  case 0xf:
    puVar9 = local_a0 + 4;
    (**(code **)(local_a0 + 4))(puVar26,param_1[2]);
    break;
  case 0x10:
    puVar22 = (ushort *)puVar26[1];
    local_c8 = lVar21;
    local_c0 = param_3;
    if (puVar22 != (ushort *)0x0) {
      uVar24 = *(uint *)(puVar22 + 6);
      if ((int)uVar24 < DAT_14c9647dc) {
        plVar23 = (longlong *)
                  ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8));
      }
      else {
        plVar23 = (longlong *)0x0;
      }
      piVar10 = (int *)*param_1;
      if (*(int *)((longlong)plVar23 + 0xc) != *piVar10) {
        puVar12 = (ushort *)param_1[1];
        puVar13 = (uint *)(puVar22 + 6);
        if ((*(uint *)(plVar23 + 1) & 0x1000000) == 0 && *(int *)((longlong)plVar23 + 0xc) == 0) {
          if (DAT_14c9647bc < (int)uVar24) {
            cVar2 = (**(code **)(*(longlong *)puVar22 + 0x28))(puVar22);
            if (cVar2 != '\0') {
              uVar24 = *(uint *)(puVar22 + 6);
              if ((*(uint *)(puVar22 + 4) & 0x1400) == 0) {
                if ((int)uVar24 < DAT_14c9647dc) {
                  lVar21 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
                }
                else {
                  lVar21 = 0;
                }
                if ((*(uint *)(lVar21 + 8) >> 0x1e & 1) == 0) {
                  puVar14 = *(ushort **)(piVar10 + 4);
                  if (DAT_14c951858 == 0) {
                    local_70 = FUN_1449e2820;
                    local_d0 = FUN_14081d0ea;
                    local_d8 = FUN_14081d0ea;
                    local_e0 = &local_70;
                    local_e8 = &LAB_1468c5283;
                    local_f0 = FUN_142809da0;
                    local_f8 = L"Engine";
                    local_100 = 0x400000000;
                    local_108 = 0x10000000;
                    local_110 = 8;
                    local_118 = (ushort *)CONCAT44(local_118._4_4_,0x50);
                    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                  }
                  puVar9 = puVar22;
                  if ((*(int *)(*(longlong *)(puVar14 + 8) + 0x38) < *(int *)(DAT_14c951858 + 0x38))
                     || (*(longlong *)
                          (*(longlong *)(*(longlong *)(puVar14 + 8) + 0x30) +
                          (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30)) {
                    do {
                      puVar9 = *(ushort **)(puVar9 + 0x10);
                    } while (puVar9 != puVar14 && puVar9 != (ushort *)0x0);
                    goto LAB_1428339b6;
                  }
                  if (puVar14 != puVar22) {
LAB_142833c13:
                    puVar7 = puVar9;
                    puVar9 = puVar7;
                    if (*(ushort **)(puVar7 + 0x10) != (ushort *)0x0) goto code_r0x000142833c22;
                    goto LAB_142833c43;
                  }
                  goto LAB_142833c4d;
                }
              }
              goto LAB_14283377d;
            }
LAB_14283377b:
            uVar24 = *puVar13;
            goto LAB_14283377d;
          }
        }
        else {
          if ((*(uint *)(plVar23 + 1) >> 0x18 & 1) == 0) {
            puVar13 = (uint *)((longlong)plVar23 + 0xc);
          }
          uVar24 = *puVar13;
          local_70 = (code *)CONCAT44(local_70._4_4_,uVar24);
          if ((int)uVar24 < DAT_14c9647dc) {
            lVar11 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
          }
          else {
            lVar11 = 0;
          }
          uVar4 = ~(longlong)*(int *)(lVar11 + 0xc);
          FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_70);
          FUN_1449e3bb0(puVar14 + uVar4 * 0x28 + 0x1c,piVar10);
          iVar1 = *(int *)(puVar14 + uVar4 * 0x28 + 0x10);
          if ((longlong)iVar1 != 0) {
            lVar21 = *(longlong *)(puVar14 + uVar4 * 0x28 + 0xc);
            lVar11 = 0;
            do {
              local_74 = *(int *)(lVar21 + lVar11);
              if (local_74 != *piVar10) {
                FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_74);
              }
              lVar11 = lVar11 + 4;
            } while ((longlong)iVar1 * 4 != lVar11);
          }
          iVar1 = *(int *)(puVar14 + uVar4 * 0x28 + 0x18);
          param_3 = local_c0;
          param_1 = local_a8;
          lVar21 = local_c8;
          puVar9 = local_a0;
          if ((longlong)iVar1 != 0) {
            lVar11 = *(longlong *)(puVar14 + uVar4 * 0x28 + 0x14);
            lVar15 = 0;
            do {
              local_74 = *(int *)(lVar11 + lVar15);
              FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x28,&local_74);
              lVar15 = lVar15 + 4;
              param_3 = local_c0;
              param_1 = local_a8;
              lVar21 = local_c8;
              puVar9 = local_a0;
            } while ((longlong)iVar1 * 4 != lVar15);
          }
        }
      }
    }
    break;
  case 0x11:
    if ((longlong)(int)puVar26[1] != 0) {
      puVar22 = (ushort *)*puVar26;
      puVar14 = puVar22 + (longlong)(int)puVar26[1] * 0xc;
      local_c8 = lVar21;
      local_c0 = param_3;
      local_b8 = puVar14;
LAB_142831c48:
      puVar12 = DAT_14c9640e8;
      puVar9 = *(ushort **)(puVar22 + 4);
      if (puVar9 != (ushort *)0x0) {
        uVar24 = *(uint *)(puVar9 + 6);
        if ((int)uVar24 < DAT_14c9647dc) {
          lVar21 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
        }
        else {
          lVar21 = 0;
        }
        piVar10 = (int *)*param_1;
        if (*(int *)(lVar21 + 0xc) == *piVar10) goto LAB_142831e3a;
        puVar13 = (uint *)(puVar9 + 6);
        if ((*(uint *)(lVar21 + 8) & 0x1000000) != 0 || *(int *)(lVar21 + 0xc) != 0) {
          if ((*(uint *)(lVar21 + 8) >> 0x18 & 1) == 0) {
            puVar13 = (uint *)(lVar21 + 0xc);
          }
          uVar24 = *puVar13;
          local_70 = (code *)CONCAT44(local_70._4_4_,uVar24);
          if ((int)uVar24 < DAT_14c9647dc) {
            lVar21 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
          }
          else {
            lVar21 = 0;
          }
          uVar4 = ~(longlong)*(int *)(lVar21 + 0xc);
          FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_70);
          FUN_1449e3bb0(puVar12 + uVar4 * 0x28 + 0x1c,piVar10);
          iVar1 = *(int *)(puVar12 + uVar4 * 0x28 + 0x10);
          if ((longlong)iVar1 != 0) {
            lVar21 = *(longlong *)(puVar12 + uVar4 * 0x28 + 0xc);
            lVar11 = 0;
            do {
              local_74 = *(int *)(lVar21 + lVar11);
              if (local_74 != *piVar10) {
                FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x18,&local_74);
              }
              lVar11 = lVar11 + 4;
            } while ((longlong)iVar1 * 4 != lVar11);
          }
          iVar1 = *(int *)(puVar12 + uVar4 * 0x28 + 0x18);
          puVar14 = local_b8;
          param_1 = local_a8;
          if ((longlong)iVar1 != 0) {
            lVar21 = *(longlong *)(puVar12 + uVar4 * 0x28 + 0x14);
            lVar11 = 0;
            do {
              local_74 = *(int *)(lVar21 + lVar11);
              FUN_1449e3bb0(*(longlong *)(piVar10 + 2) + 0x28,&local_74);
              lVar11 = lVar11 + 4;
              puVar14 = local_b8;
              param_1 = local_a8;
            } while ((longlong)iVar1 * 4 != lVar11);
          }
          goto LAB_142831e3a;
        }
        if ((int)uVar24 <= DAT_14c9647bc) goto LAB_142831e3a;
        local_b0 = (ushort *)param_1[1];
        cVar2 = (**(code **)(*(longlong *)puVar9 + 0x28))(puVar9);
        if (cVar2 != '\0') {
          uVar24 = *(uint *)(puVar9 + 6);
          if ((*(uint *)(puVar9 + 4) & 0x1400) != 0) goto LAB_142831e1e;
          if ((int)uVar24 < DAT_14c9647dc) {
            lVar11 = (ulonglong)((uVar24 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8);
          }
          else {
            lVar11 = 0;
          }
          if ((*(uint *)(lVar11 + 8) >> 0x1e & 1) != 0) goto LAB_142831e1e;
          puVar12 = *(ushort **)(piVar10 + 4);
          if (DAT_14c951858 == 0) {
            local_70 = FUN_1449e2820;
            local_d0 = FUN_14081d0ea;
            local_d8 = FUN_14081d0ea;
            local_e0 = &local_70;
            local_e8 = &LAB_1468c5283;
            local_f0 = FUN_142809da0;
            local_f8 = L"Engine";
            local_100 = 0x400000000;
            local_108 = 0x10000000;
            local_110 = 8;
            local_118 = (ushort *)CONCAT44(local_118._4_4_,0x50);
            local_98 = *(ushort **)(piVar10 + 4);
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
            puVar12 = local_98;
          }
          puVar7 = puVar9;
          puVar19 = local_b0;
          if ((*(int *)(DAT_14c951858 + 0x38) <= *(int *)(*(longlong *)(puVar12 + 8) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(puVar12 + 8) + 0x30) +
               (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) == DAT_14c951858 + 0x30)) {
            if (puVar12 != puVar9) {
LAB_142831f8e:
              puVar5 = puVar7;
              puVar7 = puVar5;
              if (*(ushort **)(puVar5 + 0x10) != (ushort *)0x0) goto code_r0x000142831f9d;
              goto LAB_142831fd3;
            }
            goto LAB_142831fdd;
          }
          do {
            puVar7 = *(ushort **)(puVar7 + 0x10);
          } while (puVar7 != puVar12 && puVar7 != (ushort *)0x0);
          if ((puVar12 != (ushort *)0x0) && (puVar7 == (ushort *)0x0)) goto LAB_142831fdd;
          goto LAB_142831ff9;
        }
        uVar24 = *puVar13;
LAB_142831e1e:
        lVar21 = *(longlong *)(piVar10 + 2);
        local_70 = (code *)CONCAT44(local_70._4_4_,uVar24);
        goto LAB_142831e2d;
      }
      goto LAB_142831e3a;
    }
  }
  goto LAB_142833939;
code_r0x000142831f9d:
  puVar7 = *(ushort **)(puVar5 + 0x10);
  if ((*(uint *)(puVar5 + 4) >> 0x1c & 1) == 0) goto LAB_142831f8e;
  local_98 = puVar12;
  local_90 = puVar5;
  puVar5 = (ushort *)FUN_142840154();
  puVar7 = local_90;
  puVar19 = local_b0;
  puVar12 = local_98;
LAB_142831fd3:
  if (puVar5 == (ushort *)0x0) {
    puVar7 = *(ushort **)(puVar7 + 0x10);
    goto LAB_142831f8e;
  }
  if (puVar5 != puVar12) {
LAB_142831fdd:
    if (puVar9 != *(ushort **)(piVar10 + 4)) {
      lVar21 = *(longlong *)(piVar10 + 2);
      local_70 = (code *)CONCAT44(local_70._4_4_,*puVar13);
LAB_142831e2d:
      FUN_144aa221c(lVar21 + 0x28,&local_70);
      goto LAB_142831e3a;
    }
  }
LAB_142831ff9:
  local_118 = puVar19;
  FUN_142831002(piVar10,*(undefined4 *)(puVar9 + 6),lVar21,puVar9);
LAB_142831e3a:
  puVar22 = puVar22 + 0xc;
  param_3 = local_c0;
  lVar21 = local_c8;
  puVar9 = local_a0;
  if (puVar22 == puVar14) goto LAB_142833939;
  goto LAB_142831c48;
code_r0x000142833c22:
  puVar9 = *(ushort **)(puVar7 + 0x10);
  if ((*(uint *)(puVar7 + 4) >> 0x1c & 1) != 0) {
    local_b8 = puVar14;
    puVar9 = (ushort *)FUN_142840154(puVar7);
    puVar14 = local_b8;
LAB_142833c43:
    if (puVar9 == (ushort *)0x0) {
      puVar9 = *(ushort **)(puVar7 + 0x10);
      goto LAB_142833c13;
    }
    goto LAB_142833c48;
  }
  goto LAB_142833c13;
code_r0x0001428332b7:
  puVar9 = *(ushort **)(puVar19 + 0x10);
  if ((*(uint *)(puVar19 + 4) >> 0x1c & 1) == 0) goto LAB_1428332a8;
  local_b0 = puVar7;
  puVar9 = (ushort *)FUN_142840154();
  puVar7 = local_b0;
LAB_1428332db:
  if (puVar9 == (ushort *)0x0) {
    puVar9 = *(ushort **)(puVar19 + 0x10);
    goto LAB_1428332a8;
  }
  if (puVar9 != puVar7) {
LAB_1428332e5:
    if (*(longlong *)puVar22 != *(longlong *)(piVar10 + 4)) {
      lVar21 = *(longlong *)(piVar10 + 2);
      uVar3 = *(undefined4 *)(*(longlong *)puVar22 + 0xc);
LAB_14283319e:
      local_70 = (code *)CONCAT44(local_70._4_4_,uVar3);
      FUN_144aa221c(lVar21 + 0x28,&local_70);
      goto LAB_1428331b2;
    }
  }
LAB_1428332fe:
  local_118 = puVar12;
  FUN_142831002(piVar10,*(undefined4 *)(*(longlong *)puVar22 + 0xc),plVar20);
LAB_1428331b2:
  puVar22 = puVar22 + 4;
  param_3 = local_c0;
  lVar21 = local_c8;
  puVar9 = local_a0;
  if (puVar22 == puVar14) goto LAB_142833939;
  goto LAB_142832f8b;
code_r0x000142832d56:
  puVar22 = *(ushort **)(puVar7 + 0x10);
  if ((*(uint *)(puVar7 + 4) >> 0x1c & 1) == 0) goto LAB_142832d47;
  local_b0 = puVar14;
  local_98 = puVar7;
  puVar7 = (ushort *)FUN_142840154();
  puVar22 = local_98;
  puVar12 = local_b8;
  puVar14 = local_b0;
LAB_142832d8c:
  if (puVar7 == (ushort *)0x0) {
    puVar22 = *(ushort **)(puVar22 + 0x10);
    goto LAB_142832d47;
  }
  if (puVar7 != puVar14) {
LAB_142832d96:
    if (puVar9 != *(ushort **)(piVar10 + 4)) {
      lVar21 = *(longlong *)(piVar10 + 2);
      local_70 = (code *)CONCAT44(local_70._4_4_,*puVar13);
LAB_142832be6:
      FUN_144aa221c(lVar21 + 0x28,&local_70);
      goto LAB_142832bf3;
    }
  }
LAB_142832db2:
  local_118 = puVar12;
  FUN_142831002(piVar10,*(undefined4 *)(puVar9 + 6),lVar21,puVar9);
LAB_142832bf3:
  uVar4 = uVar4 + 0x20;
  param_3 = local_c0;
  lVar21 = local_c8;
  puVar9 = local_a0;
  if (uVar4 == uVar25) goto LAB_142833939;
  goto LAB_1428329b5;
code_r0x000142833cf5:
  puVar9 = *(ushort **)(puVar7 + 0x10);
  if ((*(uint *)(puVar7 + 4) >> 0x1c & 1) == 0) goto LAB_142833ce6;
  local_b8 = puVar14;
  puVar9 = (ushort *)FUN_142840154(puVar7);
  puVar14 = local_b8;
LAB_142833d16:
  if (puVar9 == (ushort *)0x0) {
    puVar9 = *(ushort **)(puVar7 + 0x10);
    goto LAB_142833ce6;
  }
LAB_142833c48:
  if (puVar9 != puVar14) {
LAB_142833c4d:
    if (puVar22 != *(ushort **)(piVar10 + 4)) {
      lVar21 = *(longlong *)(piVar10 + 2) + 0x28;
      uVar24 = *puVar13;
      goto LAB_142833914;
    }
  }
LAB_142833c62:
  uVar3 = *(undefined4 *)(puVar22 + 6);
  local_118 = puVar12;
  goto LAB_142833cd8;
code_r0x0001428324a8:
  puVar9 = *(ushort **)(puVar5 + 0x10);
  if ((*(uint *)(puVar5 + 4) >> 0x1c & 1) == 0) goto LAB_142832499;
  local_98 = puVar19;
  local_90 = puVar5;
  puVar5 = (ushort *)FUN_142840154(puVar5);
  puVar9 = local_90;
  puVar19 = local_98;
LAB_1428324de:
  if (puVar5 == (ushort *)0x0) {
    puVar9 = *(ushort **)(puVar9 + 0x10);
    goto LAB_142832499;
  }
  if (puVar5 != puVar19) {
LAB_1428324e8:
    if (*(longlong *)puVar22 != *(longlong *)(piVar10 + 4)) {
      lVar21 = *(longlong *)(piVar10 + 2);
      uVar3 = *(undefined4 *)(*(longlong *)puVar22 + 0xc);
LAB_14283237e:
      local_70 = (code *)CONCAT44(local_70._4_4_,uVar3);
      FUN_144aa221c(lVar21 + 0x28,&local_70);
      goto LAB_142832392;
    }
  }
LAB_142832502:
  local_118 = puVar7;
  FUN_142831002(piVar10,*(undefined4 *)(*(longlong *)puVar22 + 0xc),plVar20);
LAB_142832392:
  puVar22 = puVar22 + (longlong)puVar14 * 4;
  param_3 = local_c0;
  lVar21 = local_c8;
  puVar9 = local_a0;
  if (puVar22 == puVar12) goto LAB_142833939;
  goto LAB_14283215c;
code_r0x0001428328c2:
  puVar9 = *(ushort **)(puVar19 + 0x10);
  if ((*(uint *)(puVar19 + 4) >> 0x1c & 1) == 0) goto LAB_1428328b3;
  local_b0 = puVar7;
  puVar9 = (ushort *)FUN_142840154();
  puVar7 = local_b0;
LAB_1428328e6:
  if (puVar9 == (ushort *)0x0) {
    puVar9 = *(ushort **)(puVar19 + 0x10);
    goto LAB_1428328b3;
  }
  if (puVar9 != puVar7) {
LAB_1428328f0:
    if (*(longlong *)puVar22 != *(longlong *)(piVar10 + 4)) {
      lVar21 = *(longlong *)(piVar10 + 2);
      uVar3 = *(undefined4 *)(*(longlong *)puVar22 + 0xc);
LAB_1428327a9:
      local_70 = (code *)CONCAT44(local_70._4_4_,uVar3);
      FUN_144aa221c(lVar21 + 0x28,&local_70);
      goto LAB_1428327bd;
    }
  }
LAB_142832909:
  local_118 = puVar12;
  FUN_142831002(piVar10,*(undefined4 *)(*(longlong *)puVar22 + 0xc),plVar20);
LAB_1428327bd:
  puVar22 = puVar22 + 4;
  param_3 = local_c0;
  lVar21 = local_c8;
  puVar9 = local_a0;
  if (puVar22 == puVar14) goto LAB_142833939;
  goto LAB_142832591;
code_r0x000142833c8a:
  uVar4 = *(ulonglong *)(uVar6 + 0x20);
  if ((*(uint *)(uVar6 + 8) >> 0x1c & 1) == 0) goto LAB_142833c7b;
  uVar4 = FUN_142840154(uVar6);
LAB_142833ca1:
  if (uVar4 == 0) {
    uVar4 = *(ulonglong *)(uVar6 + 0x20);
    goto LAB_142833c7b;
  }
  if (uVar4 != uVar25) {
LAB_142833cab:
    if (*puVar26 != *(ulonglong *)(piVar10 + 4)) {
      lVar21 = *(longlong *)(piVar10 + 2) + 0x28;
      uVar24 = *(uint *)(*puVar26 + 0xc);
LAB_142833914:
      local_70 = (code *)CONCAT44(local_70._4_4_,uVar24);
LAB_14283391b:
      FUN_144aa221c(lVar21,&local_70);
      param_3 = local_c0;
      lVar21 = local_c8;
      puVar9 = local_a0;
      goto LAB_142833939;
    }
  }
LAB_142833cc6:
  puVar22 = (ushort *)*puVar26;
  uVar3 = *(undefined4 *)(puVar22 + 6);
  local_118 = puVar12;
LAB_142833cd8:
  FUN_142831002(piVar10,uVar3,plVar23,puVar22);
  param_3 = local_c0;
  lVar21 = local_c8;
  puVar9 = local_a0;
LAB_142833939:
  local_a0 = puVar9;
  lVar21 = lVar21 + 8;
  if (lVar21 == 0x20) goto LAB_142833d21;
  goto LAB_142831be4;
LAB_142833d21:
  local_a0 = local_a0 + 4;
  goto LAB_142831b72;
}



// FUNCTION 142833d82 FUN_142833d82 body=46 status=ok
// SIG undefined FUN_142833d82(void)

void FUN_142833d82(undefined1 param_1)

{
  FUN_140033559("Runtime\\CoreUObject\\Public\\UObject/FastReferenceCollector.h",0x27c,
                L"Illegal GC struct member type %d at %d",param_1,0);
  return;
}



// FUNCTION 142833db0 FUN_142833db0 body=35804 status=FAIL
// SIG undefined FUN_142833db0(void)
/* DECOMPILE FAILED */

// FUNCTION 14283c990 FUN_14283c990 body=69 status=ok
// SIG undefined FUN_14283c990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14283c990(void)

{
  _DAT_14c964118 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014283c9d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c964120,1);
  return;
}



// FUNCTION 14283c9d5 FUN_14283c9d5 body=69 status=ok
// SIG undefined FUN_14283c9d5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14283c9d5(void)

{
  _DAT_14c964128 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014283ca17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c964130,1);
  return;
}



// FUNCTION 14283ca1a FUN_14283ca1a body=49 status=ok
// SIG undefined FUN_14283ca1a(void)

void FUN_14283ca1a(void)

{
  FUN_144760e21(DAT_14c964140,DAT_14c964148);
  if (DAT_14c964140 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14283ca4b FUN_14283ca4b body=49 status=ok
// SIG undefined FUN_14283ca4b(void)

void FUN_14283ca4b(void)

{
  FUN_144760e21(DAT_14c964158,DAT_14c964160);
  if (DAT_14c964158 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14283ca7c FUN_14283ca7c body=49 status=ok
// SIG undefined FUN_14283ca7c(void)

void FUN_14283ca7c(void)

{
  FUN_144760e21(DAT_14c964170,DAT_14c964178);
  if (DAT_14c964170 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14283caad FUN_14283caad body=49 status=ok
// SIG undefined FUN_14283caad(void)

void FUN_14283caad(void)

{
  FUN_144760e21(DAT_14c9646e0,DAT_14c9646e8);
  if (DAT_14c9646e0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14283cade FUN_14283cade body=49 status=ok
// SIG undefined FUN_14283cade(void)

void FUN_14283cade(void)

{
  FUN_144760e21(DAT_14c964188,DAT_14c964190);
  if (DAT_14c964188 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14283cb0f FUN_14283cb0f body=49 status=ok
// SIG undefined FUN_14283cb0f(void)

void FUN_14283cb0f(void)

{
  FUN_144760e21(DAT_14c964788,DAT_14c964790);
  if (DAT_14c964788 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14283cb40 FUN_14283cb40 body=49 status=ok
// SIG undefined FUN_14283cb40(void)

void FUN_14283cb40(void)

{
  FUN_144760e21(DAT_14c9641a0,DAT_14c9641a8);
  if (DAT_14c9641a0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14283cb71 FUN_14283cb71 body=49 status=ok
// SIG undefined FUN_14283cb71(void)

void FUN_14283cb71(void)

{
  FUN_144760e21(DAT_14c964698,DAT_14c9646a0);
  if (DAT_14c964698 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14283cba2 FUN_14283cba2 body=91 status=ok
// SIG undefined FUN_14283cba2(void)

void FUN_14283cba2(void)

{
  if (DAT_14c9641c0 != 0) {
    if (DAT_14c9641b8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c9641b8)(DAT_14c9641b8,0);
    FUN_1446efa72(&DAT_14c9641b8,0,0,0x10);
    DAT_14c9641c0 = 0;
  }
  if (DAT_14c9641b8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14283cbfd FUN_14283cbfd body=49 status=ok
// SIG undefined FUN_14283cbfd(void)

void FUN_14283cbfd(void)

{
  FUN_144760e21(DAT_14c9646b0,DAT_14c9646b8);
  if (DAT_14c9646b0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14283cc2e FUN_14283cc2e body=49 status=ok
// SIG undefined FUN_14283cc2e(void)

void FUN_14283cc2e(void)

{
  FUN_144760e21(DAT_14c964770,DAT_14c964778);
  if (DAT_14c964770 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14283cc5f FUN_14283cc5f body=91 status=ok
// SIG undefined FUN_14283cc5f(void)

void FUN_14283cc5f(void)

{
  if (DAT_14c9641d0 != 0) {
    if (DAT_14c9641c8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c9641c8)(DAT_14c9641c8,0);
    FUN_1446efa72(&DAT_14c9641c8,0,0,0x10);
    DAT_14c9641d0 = 0;
  }
  if (DAT_14c9641c8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14283ccba FUN_14283ccba body=49 status=ok
// SIG undefined FUN_14283ccba(void)

void FUN_14283ccba(void)

{
  FUN_144760e21(DAT_14c9641d8,DAT_14c9641e0);
  if (DAT_14c9641d8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14283cceb FUN_14283cceb body=49 status=ok
// SIG undefined FUN_14283cceb(void)

void FUN_14283cceb(void)

{
  FUN_144760e21(DAT_14c9641f8,DAT_14c964200);
  if (DAT_14c9641f8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14283cd1c FUN_14283cd1c body=49 status=ok
// SIG undefined FUN_14283cd1c(void)

void FUN_14283cd1c(void)

{
  FUN_144760e21(DAT_14c964218,DAT_14c964220);
  if (DAT_14c964218 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14283cd4d FUN_14283cd4d body=49 status=ok
// SIG undefined FUN_14283cd4d(void)

void FUN_14283cd4d(void)

{
  FUN_144760e21(DAT_14c964238,DAT_14c964240);
  if (DAT_14c964238 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14283cd7e FUN_14283cd7e body=49 status=ok
// SIG undefined FUN_14283cd7e(void)

void FUN_14283cd7e(void)

{
  FUN_144760e21(DAT_14c964258,DAT_14c964260);
  if (DAT_14c964258 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14283cdaf FUN_14283cdaf body=49 status=ok
// SIG undefined FUN_14283cdaf(void)

void FUN_14283cdaf(void)

{
  FUN_144760e21(DAT_14c9646f8,DAT_14c964700);
  if (DAT_14c9646f8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14283cde0 FUN_14283cde0 body=49 status=ok
// SIG undefined FUN_14283cde0(void)

void FUN_14283cde0(void)

{
  FUN_144760e21(DAT_14c964740,DAT_14c964748);
  if (DAT_14c964740 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14283ce11 FUN_14283ce11 body=49 status=ok
// SIG undefined FUN_14283ce11(void)

void FUN_14283ce11(void)

{
  FUN_144760e21(DAT_14c964758,DAT_14c964760);
  if (DAT_14c964758 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14283ce42 FUN_14283ce42 body=49 status=ok
// SIG undefined FUN_14283ce42(void)

void FUN_14283ce42(void)

{
  FUN_144760e21(DAT_14c9646c8,DAT_14c9646d0);
  if (DAT_14c9646c8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14283ce73 FUN_14283ce73 body=49 status=ok
// SIG undefined FUN_14283ce73(void)

void FUN_14283ce73(void)

{
  FUN_144760e21(DAT_14c964278,DAT_14c964280);
  if (DAT_14c964278 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14283cea4 FUN_14283cea4 body=49 status=ok
// SIG undefined FUN_14283cea4(void)

void FUN_14283cea4(void)

{
  FUN_144760e21(DAT_14c964290,DAT_14c964298);
  if (DAT_14c964290 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14283ced5 FUN_14283ced5 body=49 status=ok
// SIG undefined FUN_14283ced5(void)

void FUN_14283ced5(void)

{
  FUN_144760e21(DAT_14c9647a0,DAT_14c9647a8);
  if (DAT_14c9647a0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14283cf06 FUN_14283cf06 body=49 status=ok
// SIG undefined FUN_14283cf06(void)

void FUN_14283cf06(void)

{
  FUN_144760e21(DAT_14c9642a8,DAT_14c9642b0);
  if (DAT_14c9642a8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14283cf37 FUN_14283cf37 body=91 status=ok
// SIG undefined FUN_14283cf37(void)

void FUN_14283cf37(void)

{
  if (DAT_14c9642c8 != 0) {
    if (DAT_14c9642c0 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c9642c0)(DAT_14c9642c0,0);
    FUN_1446efa72(&DAT_14c9642c0,0,0,0x10);
    DAT_14c9642c8 = 0;
  }
  if (DAT_14c9642c0 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14283cf92 FUN_14283cf92 body=91 status=ok
// SIG undefined FUN_14283cf92(void)

void FUN_14283cf92(void)

{
  if (DAT_14c964690 != 0) {
    if (DAT_14c964688 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c964688)(DAT_14c964688,0);
    FUN_1446efa72(&DAT_14c964688,0,0,0x10);
    DAT_14c964690 = 0;
  }
  if (DAT_14c964688 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14283cfed FUN_14283cfed body=49 status=ok
// SIG undefined FUN_14283cfed(void)

void FUN_14283cfed(void)

{
  FUN_144760e21(DAT_14c964710,DAT_14c964718);
  if (DAT_14c964710 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14283d01e FUN_14283d01e body=91 status=ok
// SIG undefined FUN_14283d01e(void)

void FUN_14283d01e(void)

{
  if (DAT_14c964680 != 0) {
    if (DAT_14c964678 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c964678)(DAT_14c964678,0);
    FUN_1446efa72(&DAT_14c964678,0,0,0x10);
    DAT_14c964680 = 0;
  }
  if (DAT_14c964678 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14283d079 FUN_14283d079 body=187 status=ok
// SIG undefined FUN_14283d079(void)

void FUN_14283d079(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c964670) {
    FUN_144b3d300(&DAT_14c964670);
    if (DAT_14c964670 == -1) {
      FUN_145794a58(&DAT_14c964408);
      atexit((_func_5014 *)&LAB_142840318);
      _Init_thread_footer(&DAT_14c964670);
    }
  }
  FUN_140163a0e(&DAT_14c964408,param_1,param_2,param_3,param_4,0,param_5,param_6);
  return;
}



// FUNCTION 14283d134 FUN_14283d134 body=68 status=ok
// SIG undefined FUN_14283d134(void)

void FUN_14283d134(undefined8 param_1,undefined4 param_2,float param_3)

{
  (**(code **)(*DAT_14c948aa0 + 0x38))(DAT_14c948aa0,1,param_2,(double)param_3);
  if (DAT_14c9640dc != 0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0x38b,
                  L"Duplicate native registered: %i");
  }
  return;
}



// FUNCTION 14283d178 FUN_14283d178 body=78 status=ok
// SIG undefined FUN_14283d178(void)

byte FUN_14283d178(undefined8 param_1,uint param_2)

{
  byte bVar1;
  
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  bVar1 = FUN_14054d46e(&DAT_14c846b20,L"TREATLOADWARNINGSASERRORS");
  return bVar1 | (param_2 & 0x2002) == 0;
}



// FUNCTION 14283d1c6 FUN_14283d1c6 body=611 status=ok
// SIG undefined FUN_14283d1c6(void)

undefined8 * FUN_14283d1c6(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  void *_Src;
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined4 local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_3 == 0) && (param_3 = FUN_1462769f3(param_2), param_3 == 0)) {
    *param_1 = 0;
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 != 0) {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    local_70 = 0xffffffff;
    local_78 = local_78 & 0xffffffff00000000;
    iVar1 = FUN_1447ee042(param_2,&DAT_149e31048,1,0);
    uVar2 = *(int *)(param_2 + 1) - 1;
    if (*(int *)(param_2 + 1) == 0) {
      puVar5 = &DAT_149dfb77a;
      uVar2 = 0;
    }
    else {
      puVar5 = (undefined2 *)*param_2;
    }
    uVar8 = iVar1 + 1U;
    if ((int)uVar2 <= (int)(iVar1 + 1U)) {
      uVar8 = uVar2;
    }
    if ((int)uVar8 < 1) {
      uVar8 = 0;
    }
    FUN_14006620a(&local_58,puVar5 + uVar8,uVar2 - uVar8);
    local_70 = 0xffffffff;
    local_78 = CONCAT44(local_78._4_4_,1);
    uVar2 = FUN_1447ee042(&local_58,&DAT_149e0635c,1,0);
    if (uVar2 == 0xffffffff) {
      puVar7 = &DAT_149dfb77a;
      puVar5 = (undefined2 *)0x0;
    }
    else {
      puVar5 = local_58;
      if (local_50 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      uVar8 = local_50 - 1;
      if (local_50 == 0) {
        uVar8 = 0;
      }
      uVar3 = uVar2 + 1;
      if ((int)uVar8 <= (int)(uVar2 + 1)) {
        uVar3 = uVar8;
      }
      uVar4 = (ulonglong)uVar3;
      if ((int)uVar3 < 1) {
        uVar4 = 0;
      }
      FUN_14006620a(&local_68,puVar5 + uVar4,uVar8 - (int)uVar4);
      uVar8 = local_50 - 1;
      if (local_50 == 0) {
        uVar8 = 0;
      }
      if ((int)uVar8 <= (int)uVar2) {
        uVar2 = uVar8;
      }
      uVar4 = (ulonglong)uVar2;
      if ((int)uVar2 < 1) {
        uVar4 = 0;
      }
      uVar8 = uVar8 - (int)uVar4;
      if (0 < (int)uVar8) {
        iVar1 = local_50 - (uVar8 + (int)uVar4);
        if (iVar1 != 0) {
          memmove(local_58 + uVar4,local_58 + uVar4 + uVar8,(longlong)iVar1 * 2);
        }
        local_50 = local_50 - uVar8;
      }
      puVar5 = local_68;
      puVar7 = &DAT_149dfb77a;
      if (local_60 != 0) {
        puVar7 = local_68;
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    puVar6 = local_58;
    if (local_50 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    local_78 = param_3;
    FUN_1449da20c(DAT_14c872ce0,puVar6,puVar7,param_1);
    if (puVar5 != (undefined2 *)0x0) {
      FUN_1400020a8(puVar5);
    }
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14283d42c FUN_14283d42c body=204 status=ok
// SIG undefined FUN_14283d42c(void)

void FUN_14283d42c(undefined8 *param_1,wchar_t *param_2)

{
  char cVar1;
  size_t sVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined1 local_38;
  undefined8 local_30;
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_2;
  if (param_2 == (wchar_t *)0x0) {
    local_20 = 0;
  }
  else {
    sVar2 = wcslen(param_2);
    local_20 = (int)sVar2;
  }
  cVar1 = FUN_1468716aa(&local_28,0);
  if (cVar1 == '\0') {
    lVar4 = param_1[1];
    if (lVar4 + 1U < 2) {
      local_48 = 0;
      FUN_140277cc4(*param_1,param_2,8,0);
      goto LAB_14283d4db;
    }
    uVar3 = *param_1;
  }
  else {
    uVar3 = *param_1;
    if (*(char *)(param_1 + 2) == '\x01') {
      local_30 = 0;
      local_38 = 1;
      local_48 = local_48 & 0xffffffff00000000;
      FUN_1412ecd05(uVar3,0,param_2);
      goto LAB_14283d4db;
    }
    lVar4 = 0;
  }
  FUN_140277b32(uVar3,lVar4,param_2,0);
LAB_14283d4db:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14283d4f9 FUN_14283d4f9 body=1926 status=ok
// SIG undefined FUN_14283d4f9(void)

longlong FUN_14283d4f9(longlong param_1,longlong param_2,wchar_t *param_3,uint param_4,char param_5,
                      ulonglong param_6)

{
  uint uVar1;
  wchar_t *pwVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  code *pcVar10;
  undefined2 *puVar11;
  undefined1 auStack_738 [32];
  undefined8 local_718;
  ulonglong local_710;
  undefined4 local_708;
  undefined8 local_700;
  wchar_t *local_6f8;
  code *local_6f0;
  undefined1 *local_6e8;
  code **local_6e0;
  code *local_6d8;
  code *local_6d0;
  wchar_t *local_6c8;
  undefined8 local_6c0;
  undefined2 *local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 local_6a0;
  longlong local_698;
  undefined8 local_690;
  undefined2 *local_688;
  undefined2 *local_680;
  code **local_678;
  char local_670;
  undefined2 local_668 [512];
  code *local_268;
  code *local_260;
  code *local_258;
  char local_250;
  undefined1 local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_738;
  local_670 = '\0';
  local_678 = &local_268;
  local_698 = param_2;
  local_688 = local_668;
  local_680 = local_668;
  if (param_3 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_3);
    iVar9 = (int)sVar3;
    if (iVar9 < 0x200) {
      if (iVar9 == 0) goto LAB_14283d5a4;
    }
    else {
      FUN_140213274(&local_688,(longlong)iVar9);
    }
    puVar11 = local_680;
    memcpy(local_680,param_3,(longlong)(sVar3 << 0x20) >> 0x1f);
    local_680 = puVar11 + iVar9;
  }
LAB_14283d5a4:
  pwVar4 = wcsstr(param_3,L".");
  local_710 = param_6;
  local_718 = CONCAT44(local_718._4_4_,param_4) & 0xffffffff00102086;
  FUN_144922754(&local_698,&local_688,1,0);
  lVar7 = local_698;
  if (local_698 == 0) goto LAB_14283d938;
  lVar6 = lVar7;
  if (param_5 != '\x01' || pwVar4 == (wchar_t *)0x0) {
LAB_14283d666:
    lVar5 = lVar6;
    lVar6 = lVar5;
    if (*(longlong *)(lVar5 + 0x20) != 0) goto code_r0x00014283d675;
    goto LAB_14283d687;
  }
  *local_680 = 0;
  FUN_1446f470e(&local_6a0,local_688,1);
  local_710 = local_710 & 0xffffffff00000000;
  local_718 = local_718 & 0xffffffff00000000;
  lVar5 = FUN_140be85e0(param_1,lVar7,local_6a0,0);
  if ((lVar5 == 0) || ((*(uint *)(lVar5 + 8) & 0x8003400) != 0)) goto LAB_14283d666;
  goto LAB_14283dade;
code_r0x00014283d6b1:
  lVar7 = *(longlong *)(lVar6 + 0x20);
  pwVar2 = local_6c8;
  if ((*(uint *)(lVar6 + 8) >> 0x1c & 1) == 0) goto LAB_14283d6a1;
  lVar7 = FUN_142840154(lVar6);
LAB_14283d6c3:
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(lVar6 + 0x20);
    pwVar2 = local_6c8;
    goto LAB_14283d6a1;
  }
  local_6b8 = *(undefined2 **)(lVar7 + 0x18);
  FUN_1400021e4(&local_6b8,&local_268);
  pcVar10 = local_268;
  if ((uint)local_260 == 0) {
    pcVar10 = (code *)&DAT_149dfb77a;
  }
  local_718 = param_6;
  FUN_1402791b4(0,pcVar10,param_4 & 0xffffffef,0);
  param_3 = local_6c8;
  lVar7 = local_698;
  if (local_268 != (code *)0x0) {
    FUN_1400020a8();
    param_3 = local_6c8;
    lVar7 = local_698;
  }
  goto LAB_14283d753;
code_r0x00014283d675:
  lVar6 = *(longlong *)(lVar5 + 0x20);
  if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) goto LAB_14283d666;
  lVar6 = FUN_142840154(lVar5);
LAB_14283d687:
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(lVar5 + 0x20);
    goto LAB_14283d666;
  }
  pwVar2 = param_3;
  if ((*(byte *)(lVar6 + 0x2c) & 0x10) == 0) {
LAB_14283d6a1:
    local_6c8 = pwVar2;
    lVar6 = lVar7;
    lVar7 = lVar6;
    if (*(longlong *)(lVar6 + 0x20) != 0) goto code_r0x00014283d6b1;
    goto LAB_14283d6c3;
  }
LAB_14283d753:
  *local_680 = 0;
  FUN_1446f470e(&local_6a8,local_688,1);
  local_710 = local_710 & 0xffffffff00000000;
  local_718 = local_718 & 0xffffffff00000000;
  lVar5 = FUN_140be85e0(param_1,lVar7,local_6a8,0);
  if ((lVar5 == 0) || (DAT_14c872ba8 == '\0')) {
    if (lVar5 == 0) {
      if ((param_4 >> 0x10 & 1) == 0) {
        *local_680 = 0;
        FUN_1446f470e(&local_6c0,local_688,1);
        uVar8 = FUN_140007dea();
        local_710 = local_710 & 0xffffffff00000000;
        local_718 = local_718 & 0xffffffff00000000;
        lVar7 = FUN_140be85e0(uVar8,lVar7,local_6c0,0);
        if ((lVar7 != 0) && (lVar6 = *(longlong *)(lVar7 + 0x28), lVar6 != 0)) {
          lVar5 = param_1;
          if ((param_1 == 0) && (lVar5 = DAT_14c927740, DAT_14c927740 == 0)) {
            local_6e0 = &local_268;
            local_268 = FUN_1449e2820;
            local_6d0 = FUN_14081d0ea;
            local_6d8 = FUN_14081d0ea;
            local_6e8 = &LAB_146856450;
            local_6f0 = FUN_1427b121c;
            local_6f8 = L"Engine";
            local_700 = 0;
            local_708 = 0x10000021;
            local_710 = CONCAT44(local_710._4_4_,8);
            local_718 = CONCAT44(local_718._4_4_,0x28);
            FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
            lVar5 = DAT_14c927740;
          }
          lVar6 = *(longlong *)(lVar6 + 0x10);
          if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
             (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30)) {
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar7);
              FUN_1456cec3c(*(undefined8 *)(lVar7 + 0x28));
            }
            lVar5 = *(longlong *)(lVar7 + 0x28);
            goto LAB_14283dae7;
          }
        }
      }
LAB_14283d938:
      lVar5 = 0;
      iVar9 = 0;
      if (pwVar4 != (wchar_t *)0x0) goto LAB_14283dae7;
      if (param_3 != (wchar_t *)0x0) {
        sVar3 = wcslen(param_3);
        iVar9 = (int)sVar3;
      }
      local_680 = local_688;
      lVar7 = (longlong)iVar9;
      if (local_678 <= local_688 + lVar7) {
        FUN_140213274(&local_688,lVar7);
      }
      puVar11 = local_680;
      if (iVar9 != 0) {
        memcpy(local_680,param_3,lVar7 * 2);
        local_680 = puVar11 + lVar7;
      }
      if (local_678 <= local_680 + 1) {
        FUN_140213274(&local_688,1);
      }
      *local_680 = 0x2e;
      local_680 = local_680 + 1;
      FUN_141710b2a(&local_268,param_3);
      pcVar10 = local_268;
      uVar1 = (uint)local_260;
      iVar9 = (uint)local_260 - 1;
      if ((uint)local_260 == 0) {
        iVar9 = 0;
      }
      lVar7 = (longlong)iVar9;
      if (local_678 <= local_680 + lVar7) {
        FUN_140213274(&local_688,lVar7);
      }
      puVar11 = local_680;
      if (1 < uVar1) {
        memcpy(local_680,pcVar10,lVar7 * 2);
        local_680 = puVar11 + lVar7;
      }
      if (local_268 != (code *)0x0) {
        FUN_1400020a8();
      }
      *local_680 = 0;
      local_710 = param_6;
      local_718 = CONCAT71(local_718._1_7_,param_5);
      lVar5 = FUN_14283d4f9(param_1,local_698,local_688,param_4);
      if (lVar5 == 0) {
        lVar5 = 0;
        goto LAB_14283dae7;
      }
    }
  }
  else if ((*(uint *)(lVar5 + 8) & 0x8003400) != 0) {
    if (*(longlong *)(lVar5 + 0x10) == 0) {
      FUN_140056680(&local_6b8,&DAT_149e01fe8);
    }
    else {
      local_6b8 = (undefined2 *)0x0;
      uStack_6b0 = 0;
      FUN_14005eb28(&local_6b8,0x80);
      local_268 = (code *)local_248;
      local_250 = '\0';
      local_258 = (code *)&local_48;
      local_690 = *(undefined8 *)(*(longlong *)(lVar5 + 0x10) + 0x18);
      local_260 = local_268;
      FUN_14005eb5c(&local_690,&local_268);
      if (local_258 <= local_260 + 2) {
        FUN_140213274(&local_268,1);
      }
      *(undefined2 *)local_260 = 0x20;
      local_260 = local_260 + 2;
      FUN_144750bde(lVar5,0,&local_268);
      FUN_1400020e8(&local_6b8,local_268,(ulonglong)((longlong)local_260 - (longlong)local_268) >> 1
                   );
      if (local_250 == '\x01') {
        FUN_1400020a8(local_268);
      }
    }
    puVar11 = local_6b8;
    if ((int)uStack_6b0 == 0) {
      puVar11 = &DAT_149dfb77a;
    }
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0x5a2,
                  L"Return an object still needing load from StaticLoadObjectInternal %s",puVar11);
    if (local_6b8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14283dade:
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(lVar5);
  }
LAB_14283dae7:
  if (local_670 == '\x01') {
    FUN_1400020a8(local_688);
  }
  if ((local_48 ^ (ulonglong)auStack_738) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 14283dc80 FUN_14283dc80 body=3531 status=ok
// SIG undefined FUN_14283dc80(void)

PVOID FUN_14283dc80(PVOID param_1,longlong *param_2,uint param_3,LARGE_INTEGER param_4,
                   ulonglong param_5,undefined8 param_6)

{
  int *piVar1;
  PSRWLOCK pRVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  DWORD DVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  DWORD DVar13;
  DWORD DVar14;
  LPVOID lpTlsValue;
  longlong *plVar15;
  LARGE_INTEGER LVar16;
  PVOID pvVar17;
  PVOID pvVar18;
  PVOID pvVar19;
  LARGE_INTEGER LVar20;
  longlong lVar21;
  longlong lVar22;
  LARGE_INTEGER LVar23;
  bool bVar24;
  undefined1 auStack_1d8 [32];
  ulonglong local_1b8;
  LARGE_INTEGER *local_1b0;
  LARGE_INTEGER local_1a8;
  undefined8 local_1a0;
  wchar_t *local_198;
  code *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  code *local_178;
  code *local_170;
  char local_159;
  longlong local_158 [2];
  undefined1 local_148 [16];
  longlong local_130;
  undefined1 local_128 [16];
  undefined4 local_118;
  undefined8 local_114;
  undefined8 local_108;
  uint local_100;
  LARGE_INTEGER local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  int local_e8;
  undefined1 local_d8 [16];
  longlong local_c8;
  char local_78;
  undefined1 local_68 [16];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (*param_2 != 0) {
    DVar13 = DAT_14c75ec34;
    if (DAT_14c75ec34 == 0xffffffff) {
      DVar13 = TlsAlloc();
      DVar14 = 0xffffffff;
      LOCK();
      bVar24 = DAT_14c75ec34 != 0xffffffff;
      DVar7 = DVar13;
      if (bVar24) {
        DVar14 = DAT_14c75ec34;
        DVar7 = DAT_14c75ec34;
      }
      DAT_14c75ec34 = DVar7;
      UNLOCK();
      if (bVar24) {
        TlsFree(DVar13);
        DVar13 = DVar14;
      }
    }
    lpTlsValue = TlsGetValue(DVar13);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
      FUN_141073f92(lpTlsValue);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(DVar13,lpTlsValue);
    }
    if ((DAT_14c948aa0 == (longlong *)0x0) ||
       (cVar8 = (**(code **)(*DAT_14c948aa0 + 0x20))(), cVar8 == '\0')) {
      local_78 = '\0';
      if ((longlong)DAT_14c8687a8 != 0) {
        lVar21 = 0;
        do {
          if ((*(int *)(DAT_14c8687a0 + 8 + lVar21) != 0) &&
             (*(longlong *)(DAT_14c8687a0 + lVar21) != 0)) {
            FUN_1468750d6(param_2,local_68);
            FUN_1411f311e(&DAT_14c8687a0,local_68);
            if (local_68._0_8_ != 0) {
              FUN_1400020a8();
            }
            break;
          }
          lVar21 = lVar21 + 0x10;
        } while ((longlong)DAT_14c8687a8 * 0x10 != lVar21);
      }
      LVar23 = (LARGE_INTEGER)((LARGE_INTEGER *)((longlong)lpTlsValue + 0x58))->QuadPart;
      if ((int *)LVar23.QuadPart != (int *)0x0) {
        *(int *)LVar23 = *(int *)LVar23 + 1;
      }
      FUN_1400021e4(param_2,local_68);
      FUN_14283ea4c(LVar23.QuadPart);
      if (local_68._0_8_ != 0) {
        FUN_1400020a8();
      }
      if (local_78 == '\x01') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
          DAT_14c844840 = (PSRWLOCK)FUN_14001cc68(0x30,0x10);
          DAT_14c844840[1].Ptr = (PVOID)0x0;
          DAT_14c844840->Ptr = &PTR_FUN_149e19310;
          DAT_14c844840[2].Ptr = (PVOID)0xffffffffffffffff;
          *(undefined1 (*) [16])(DAT_14c844840 + 3) = (undefined1  [16])0x0;
          DAT_14c844840[5].Ptr = (PVOID)0x0;
          if (DAT_14c844840 != (PSRWLOCK)0x0) {
            LOCK();
            *(int *)&DAT_14c844840[1].Ptr = *(int *)&DAT_14c844840[1].Ptr + 1;
            UNLOCK();
          }
          DAT_14c844848 = 0;
          atexit(FUN_142760bef);
          _Init_thread_footer(&DAT_14c844850);
        }
        local_68._0_8_ = DAT_14c844840;
        if (DAT_14c844840 != (PSRWLOCK)0x0) {
          pcVar3 = *(code **)((longlong)DAT_14c844840->Ptr + 8);
          if (pcVar3 == FUN_144907e24) {
            LOCK();
            *(int *)&DAT_14c844840[1].Ptr = *(int *)&DAT_14c844840[1].Ptr + 1;
            UNLOCK();
          }
          else {
            (*pcVar3)();
          }
        }
        local_68._8_4_ = 0;
        FUN_140997b30(local_d8,0x41f00000,local_68);
        if ((longlong *)local_68._0_8_ != (longlong *)0x0) {
          (**(code **)(*(longlong *)local_68._0_8_ + 0x10))();
        }
      }
      local_148 = (undefined1  [16])0x0;
      QueryPerformanceCounter((LARGE_INTEGER *)local_68);
      local_68._0_8_ = LVar23.QuadPart;
      local_1a0 = param_6;
      local_1b8 = param_5;
      local_1b0 = (LARGE_INTEGER *)local_68;
      local_1a8 = param_4;
      LVar16.QuadPart = FUN_1468b62ed(param_1,param_2,param_3,0);
      uVar6 = local_68._0_8_;
      if ((int *)local_68._0_8_ != (int *)0x0 && LVar23.QuadPart != local_68._0_8_) {
        *(int *)(LVar23.QuadPart + 0xc) = *(int *)(LVar23.QuadPart + 0xc) + -1;
        *(int *)local_68._0_8_ = *(int *)local_68._0_8_ + 1;
        if ((int *)LVar23.QuadPart != (int *)0x0) {
          FUN_14112dd4c(LVar23.QuadPart);
        }
        piVar1 = (int *)(uVar6 + 0xc);
        *piVar1 = *piVar1 + 1;
        LVar23 = (LARGE_INTEGER)uVar6;
      }
      if ((PSRWLOCK)LVar16.QuadPart == (PSRWLOCK)0x0) {
        FUN_140442f61(LVar23.QuadPart,local_148);
        param_1 = (PVOID)0x0;
      }
      else {
        param_1 = ((PSRWLOCK)(LVar16.QuadPart + 0xa0))->Ptr;
        if ((*(uint *)((longlong)param_1 + 8) >> 0x13 & 1) == 0) {
          if ((param_3 >> 0x11 & 1) != 0) {
            *(byte *)((longlong)param_1 + 0x2c) = *(byte *)((longlong)param_1 + 0x2c) | 0x20;
          }
          *(longlong *)((longlong)param_1 + 0x38) = *param_2;
          *(char *)((longlong)param_1 + 0x40) = (char)param_2[1];
          local_68._0_8_ =
               *(undefined8 *)((longlong)((PSRWLOCK)(LVar16.QuadPart + 0xa0))->Ptr + 0x18);
          FUN_1400021e4(local_68,&local_f8);
          LVar20 = local_f8;
          if (iStack_f0 == 0) {
            LVar20.QuadPart = (LONGLONG)&DAT_149dfb77a;
          }
          cVar8 = FUN_140d2d64c(LVar20.QuadPart,local_68,0);
          if ((PSRWLOCK)local_f8.QuadPart != (PSRWLOCK)0x0) {
            FUN_1400020a8();
          }
          if (cVar8 != '\0') {
            FUN_1468b6116(LVar16.QuadPart);
          }
          if (local_78 == '\x01') {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
            {
              DAT_14c844840 = (PSRWLOCK)FUN_14001cc68(0x30,0x10);
              DAT_14c844840[1].Ptr = (PVOID)0x0;
              DAT_14c844840->Ptr = &PTR_FUN_149e19310;
              DAT_14c844840[2].Ptr = (PVOID)0xffffffffffffffff;
              *(undefined1 (*) [16])(DAT_14c844840 + 3) = (undefined1  [16])0x0;
              DAT_14c844840[5].Ptr = (PVOID)0x0;
              if (DAT_14c844840 != (PSRWLOCK)0x0) {
                LOCK();
                *(int *)&DAT_14c844840[1].Ptr = *(int *)&DAT_14c844840[1].Ptr + 1;
                UNLOCK();
              }
              DAT_14c844848 = 0;
              atexit(FUN_142760bef);
              _Init_thread_footer(&DAT_14c844850);
            }
            local_f8.QuadPart = (LONGLONG)DAT_14c844840;
            if (DAT_14c844840 != (PSRWLOCK)0x0) {
              pcVar3 = *(code **)((longlong)DAT_14c844840->Ptr + 8);
              if (pcVar3 == FUN_144907e24) {
                LOCK();
                *(int *)&DAT_14c844840[1].Ptr = *(int *)&DAT_14c844840[1].Ptr + 1;
                UNLOCK();
              }
              else {
                (*pcVar3)();
              }
            }
            iStack_f0 = 0;
            FUN_140997b30(local_d8,0x41f00000,&local_f8);
            if ((PSRWLOCK)local_f8.QuadPart != (PSRWLOCK)0x0) {
              (**(code **)((longlong)*(PVOID *)local_f8 + 0x10))();
            }
          }
          if ((param_3 & 0x100010) == 0) {
            if ((PSRWLOCK)param_4.QuadPart == (PSRWLOCK)0x0) {
              param_4.QuadPart = LVar16.QuadPart;
            }
            pvVar18 = ((PSRWLOCK)(param_4.QuadPart + 0x2b0))->Ptr;
            pRVar2 = (PSRWLOCK)(LVar16.QuadPart + 0x240);
            local_159 = cVar8;
            if (pvVar18 != (PVOID)0x0) {
              pcVar3 = *(code **)((longlong)pRVar2->Ptr + 0x228);
              if (pcVar3 == FUN_144a610a4) {
                pvVar19 = ((PSRWLOCK)(LVar16.QuadPart + 0x2b8))->Ptr;
                if (pvVar19 == (PVOID)0x0) {
                  pvVar19 = (PVOID)FUN_14001cc68(0x58,0x10);
                  *(undefined8 *)((longlong)pvVar19 + 0x40) = 0;
                  *(undefined8 *)((longlong)pvVar19 + 0x48) = 0x800000000;
                  *(undefined4 *)((longlong)pvVar19 + 0x50) = 0;
                  ((PSRWLOCK)(LVar16.QuadPart + 0x2b8))->Ptr = pvVar19;
                  iVar10 = 0;
                  uVar11 = 8;
                }
                else {
                  iVar10 = *(int *)((longlong)pvVar19 + 0x48);
                  uVar11 = *(uint *)((longlong)pvVar19 + 0x4c);
                }
                *(uint *)((longlong)pvVar19 + 0x48) = iVar10 + 1U;
                if (uVar11 < iVar10 + 1U) {
                  FUN_140b4c3de(pvVar19,iVar10);
                }
                pvVar17 = *(PVOID *)((longlong)pvVar19 + 0x40);
                if (*(PVOID *)((longlong)pvVar19 + 0x40) == (PVOID)0x0) {
                  pvVar17 = pvVar19;
                }
                *(PVOID *)((longlong)pvVar17 + (longlong)iVar10 * 8) = pvVar18;
                iVar10 = *(int *)((longlong)pvVar19 + 0x50) + 1;
                do {
                  iVar12 = iVar10;
                  iVar10 = 1;
                } while (iVar12 == 0);
                *(int *)((longlong)pvVar19 + 0x50) = iVar12;
                ((PSRWLOCK)(LVar16.QuadPart + 0x2b0))->Ptr = pvVar18;
              }
              else {
                (*pcVar3)(pRVar2,pvVar18,
                          (uint)((ulonglong)*(undefined8 *)((longlong)pvVar18 + 0x38) >> 0x23) & 1);
              }
            }
            FUN_142800a72(LVar16.QuadPart,DAT_14c872ba8);
            cVar8 = local_159;
            if (((((PSRWLOCK)(LVar16.QuadPart + 0x398))->Ptr == (PVOID)0x0) &&
                (*(int *)(LVar23.QuadPart + 0xc) == 1)) &&
               (cVar9 = (*(code *)PTR_FUN_14c758760)(), cVar9 != '\0')) {
              local_158[0] = *(longlong *)
                              ((longlong)((PSRWLOCK)(LVar16.QuadPart + 0xa0))->Ptr + 0x18);
              FUN_1400021e4(local_158,&local_f8);
              FUN_1411e42ef(&local_f8,0);
              if ((PSRWLOCK)local_f8.QuadPart != (PSRWLOCK)0x0) {
                FUN_1400020a8();
              }
            }
            if (pvVar18 != (PVOID)0x0) {
              pcVar3 = *(code **)((longlong)pRVar2->Ptr + 0x230);
              if (pcVar3 == (code *)&LAB_1449b19a2) {
                pvVar18 = ((PSRWLOCK)(LVar16.QuadPart + 0x2b8))->Ptr;
                *(int *)((longlong)pvVar18 + 0x48) = *(int *)((longlong)pvVar18 + 0x48) + -1;
                iVar10 = *(int *)((longlong)pvVar18 + 0x50) + 1;
                do {
                  iVar12 = iVar10;
                  iVar10 = 1;
                } while (iVar12 == 0);
                *(int *)((longlong)pvVar18 + 0x50) = iVar12;
                pvVar18 = ((PSRWLOCK)(LVar16.QuadPart + 0x2b8))->Ptr;
                if ((longlong)*(int *)((longlong)pvVar18 + 0x48) < 1) {
                  pvVar18 = (PVOID)0x0;
                }
                else {
                  pvVar19 = *(PVOID *)((longlong)pvVar18 + 0x40);
                  if (*(PVOID *)((longlong)pvVar18 + 0x40) == (PVOID)0x0) {
                    pvVar19 = pvVar18;
                  }
                  pvVar18 = *(PVOID *)((longlong)pvVar19 +
                                      (longlong)*(int *)((longlong)pvVar18 + 0x48) * 8 + -8);
                }
                ((PSRWLOCK)(LVar16.QuadPart + 0x2b0))->Ptr = pvVar18;
              }
              else {
                (*pcVar3)(pRVar2,pvVar18,
                          (uint)((ulonglong)*(undefined8 *)((longlong)pvVar18 + 0x38) >> 0x23) & 1);
              }
            }
          }
          if (local_78 == '\x01') {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
            {
              DAT_14c844840 = (PSRWLOCK)FUN_14001cc68(0x30,0x10);
              DAT_14c844840[1].Ptr = (PVOID)0x0;
              DAT_14c844840->Ptr = &PTR_FUN_149e19310;
              DAT_14c844840[2].Ptr = (PVOID)0xffffffffffffffff;
              *(undefined1 (*) [16])(DAT_14c844840 + 3) = (undefined1  [16])0x0;
              DAT_14c844840[5].Ptr = (PVOID)0x0;
              if (DAT_14c844840 != (PSRWLOCK)0x0) {
                LOCK();
                *(int *)&DAT_14c844840[1].Ptr = *(int *)&DAT_14c844840[1].Ptr + 1;
                UNLOCK();
              }
              DAT_14c844848 = 0;
              atexit(FUN_142760bef);
              _Init_thread_footer(&DAT_14c844850);
            }
            local_f8.QuadPart = (LONGLONG)DAT_14c844840;
            if (DAT_14c844840 != (PSRWLOCK)0x0) {
              pcVar3 = *(code **)((longlong)DAT_14c844840->Ptr + 8);
              if (pcVar3 == FUN_144907e24) {
                LOCK();
                *(int *)&DAT_14c844840[1].Ptr = *(int *)&DAT_14c844840[1].Ptr + 1;
                UNLOCK();
              }
              else {
                (*pcVar3)();
              }
            }
            iStack_f0 = 0;
            FUN_140997b30(local_d8,0x41f00000,&local_f8);
            if ((PSRWLOCK)local_f8.QuadPart != (PSRWLOCK)0x0) {
              (**(code **)((longlong)*(PVOID *)local_f8 + 0x10))();
            }
          }
          FUN_1468b83aa(LVar16.QuadPart,0);
          FUN_140442f61(LVar23.QuadPart,local_148);
          *(uint *)((longlong)param_1 + 0x2c) =
               (*(byte *)(LVar16.QuadPart + 0x26a) & 1) << 0x12 |
               *(uint *)((longlong)param_1 + 0x2c) & 0xfffbffff;
          if (cVar8 != '\0') {
            FUN_1468b6178(LVar16.QuadPart,&local_f8);
            auVar5._8_4_ = iStack_f0;
            auVar5._0_8_ = local_f8.QuadPart;
            auVar5._12_4_ = uStack_ec;
            if ((local_68 != auVar5 || local_e8 != (int)local_58) &&
               (FUN_1427b95fe((PSRWLOCK)(LVar16.QuadPart + 0x318),local_158,0), local_158[0] != 0))
            {
              FUN_1400020a8();
            }
          }
          cVar8 = (*(code *)PTR_FUN_14c758760)();
          if ((cVar8 == '\0') && (DAT_14c9642d0 == 0)) {
            if (param_1 != (PVOID)0x0) {
              if (((PSRWLOCK)(LVar16.QuadPart + 0x328))->Ptr != (PVOID)0x0) {
                FUN_1468b6d7e(param_1);
              }
              if ((*(longlong *)((longlong)param_1 + 0x48) != 0) &&
                 (*(longlong *)(*(longlong *)((longlong)param_1 + 0x48) + 0x20) != 0)) {
                *(undefined1 *)(LVar16.QuadPart + 0x2e4) = 1;
                puVar4 = ((PSRWLOCK)(LVar16.QuadPart + 0x328))->Ptr;
                if (puVar4 != (undefined8 *)0x0) {
                  (**(code **)*puVar4)(puVar4,1);
                  ((PSRWLOCK)(LVar16.QuadPart + 0x328))->Ptr = (PVOID)0x0;
                }
                *(undefined1 *)(LVar16.QuadPart + 0x2e4) = 0;
              }
            }
          }
          else {
            local_f8.QuadPart = LVar16.QuadPart;
            FUN_146902730((int *)(LVar23.QuadPart + 0x20));
          }
          if ((param_3 & 0x100010) == 0) {
            FUN_144757f48(param_1,0x80000);
          }
        }
        else {
          FUN_140442f61(LVar23.QuadPart,local_148);
          if ((*(byte *)(LVar16.QuadPart + 0x26a) & 1) == 0) {
            uVar11 = *(uint *)((longlong)param_1 + 0x2c) & 0xfffbffff;
          }
          else {
            uVar11 = *(uint *)((longlong)param_1 + 0x2c) | 0x40000;
          }
          *(uint *)((longlong)param_1 + 0x2c) = uVar11;
        }
      }
      if (local_148._0_8_ != 0) {
        FUN_1400020a8();
      }
      if ((int *)LVar23.QuadPart != (int *)0x0) {
        FUN_14112dd4c(LVar23.QuadPart);
      }
      FUN_146885952(local_d8);
      goto LAB_14283deae;
    }
    plVar15 = (longlong *)((longlong)param_1 + 0x18);
    if (param_1 == (PVOID)0x0) {
      plVar15 = param_2;
    }
    lVar21 = *plVar15;
    local_148._0_8_ = lVar21;
    if (lVar21 != 0) {
      if ((DAT_14c86a9f8 == '\x01') &&
         (iVar10 = *(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0xc60), iVar10 != 2)) {
        if (iVar10 == 1) {
          DVar13 = FUN_140ad26c0();
          DVar14 = GetCurrentThreadId();
          if (DVar13 == DVar14) goto LAB_14283e997;
        }
      }
      else {
LAB_14283e997:
        if ((longlong)DAT_14c8687a8 != 0) {
          lVar22 = 0;
          do {
            if ((*(int *)(DAT_14c8687a0 + 8 + lVar22) != 0) &&
               (*(longlong *)(DAT_14c8687a0 + lVar22) != 0)) {
              FUN_1400021e4(local_148,local_d8);
              FUN_1411f311e(&DAT_14c8687a0,local_d8);
              if (local_d8._0_8_ != 0) {
                FUN_1400020a8();
              }
              break;
            }
            lVar22 = lVar22 + 0x10;
          } while ((longlong)DAT_14c8687a8 * 0x10 != lVar22);
        }
      }
      *(int *)((longlong)lpTlsValue + 0x24) = *(int *)((longlong)lpTlsValue + 0x24) + 1;
      local_128 = (undefined1  [16])0x0;
      local_118 = 0;
      local_114 = 0x7fffffffffffffff;
      local_108 = param_6;
      local_130 = lVar21;
      local_100 = param_3;
      iVar10 = FUN_1427d6502(param_2);
      if (iVar10 != -1) {
        FUN_1411e4270(iVar10);
      }
      *(int *)((longlong)lpTlsValue + 0x24) = *(int *)((longlong)lpTlsValue + 0x24) + -1;
      if (param_1 != (PVOID)0x0) goto LAB_14283deae;
      if (DAT_14c951858 == 0) {
        local_180 = local_d8;
        local_d8._0_8_ = FUN_1449e2820;
        local_170 = FUN_14081d0ea;
        local_178 = FUN_14081d0ea;
        local_188 = &LAB_1468c5283;
        local_190 = FUN_142809da0;
        local_198 = L"Engine";
        local_1a0 = 0x400000000;
        local_1a8.s.LowPart = 0x10000000;
        local_1b0 = (LARGE_INTEGER *)CONCAT44(local_1b0._4_4_,8);
        local_1b8 = CONCAT44(local_1b8._4_4_,0x50);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      local_1b0 = (LARGE_INTEGER *)((ulonglong)local_1b0 & 0xffffffff00000000);
      local_1b8 = local_1b8 & 0xffffffff00000000;
      param_1 = (PVOID)FUN_140be85e0(DAT_14c951858,0,lVar21,0);
      DVar13 = DAT_14c949610;
      if (param_1 != (PVOID)0x0) goto LAB_14283deae;
      local_68 = (undefined1  [16])0x0;
      local_58 = local_148._0_8_;
      local_f8.QuadPart = (LONGLONG)&DAT_14c949608;
      iStack_f0 = CONCAT31(iStack_f0._1_3_,1);
      if ((DAT_14c949610 == 0) || (DVar14 = GetCurrentThreadId(), DVar13 != DVar14)) {
        AcquireSRWLockShared((PSRWLOCK)&DAT_14c949608);
      }
      else {
        DAT_14c949614 = DAT_14c949614 + 1;
      }
      local_d8 = (undefined1  [16])0x0;
      local_c8 = 0;
      local_1b0 = &local_f8;
      local_1b8 = local_1b8 & 0xffffffff00000000;
      FUN_140159c68(0x40,local_68,local_d8,0);
      LVar23 = local_f8;
      if ((char)iStack_f0 == '\x01') {
        if (*(int *)(local_f8.QuadPart + 0xc) < 1) {
          ReleaseSRWLockShared((PSRWLOCK)local_f8);
        }
        else {
          GetCurrentThreadId();
          *(int *)(LVar23.QuadPart + 0xc) = *(int *)(LVar23.QuadPart + 0xc) + -1;
        }
      }
      lVar21 = local_c8;
      if (local_c8 != local_148._0_8_) {
        if (DAT_14c951858 == 0) {
          local_68._0_8_ = FUN_1449e2820;
          local_170 = FUN_14081d0ea;
          local_178 = FUN_14081d0ea;
          local_188 = &LAB_1468c5283;
          local_190 = FUN_142809da0;
          local_198 = L"Engine";
          local_1a0 = 0x400000000;
          local_1a8.s.LowPart = 0x10000000;
          local_1b0 = (LARGE_INTEGER *)CONCAT44(local_1b0._4_4_,8);
          local_1b8 = CONCAT44(local_1b8._4_4_,0x50);
          local_180 = local_68;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        local_1b0 = (LARGE_INTEGER *)((ulonglong)local_1b0 & 0xffffffff00000000);
        local_1b8 = local_1b8 & 0xffffffff00000000;
        param_1 = (PVOID)FUN_140be85e0(DAT_14c951858,0,lVar21,0);
        goto LAB_14283deae;
      }
    }
  }
  param_1 = (PVOID)0x0;
LAB_14283deae:
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14283ea4c FUN_14283ea4c body=194 status=ok
// SIG undefined FUN_14283ea4c(void)

void FUN_14283ea4c(longlong param_1)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0xc) < 1) {
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if (cVar2 == '\0') {
      (*(code *)PTR_FUN_14c75b118)();
      if (DAT_14c948aa0 != (longlong *)0x0) {
        local_28 = 0;
        local_20 = 0;
        (**(code **)(*DAT_14c948aa0 + 0x60))();
      }
    }
  }
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 != 2) {
      if (iVar1 != 1) goto LAB_14283eacb;
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 != DVar4) goto LAB_14283eacb;
    }
  }
  cVar2 = (*(code *)PTR_FUN_14c758760)();
  if (cVar2 == '\0') {
    DAT_14c9642d0 = DAT_14c9642d0 + 1;
  }
LAB_14283eacb:
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14283eb0f FUN_14283eb0f body=200 status=ok
// SIG undefined FUN_14283eb0f(void)

void FUN_14283eb0f(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  longlong local_60;
  int local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_3 >> 0x11 & 1) != 0) {
    FUN_1468750d6(param_2);
    local_50 = local_60;
    local_48 = local_58 + -1;
    if (local_58 == 0) {
      local_48 = 0;
    }
    cVar1 = FUN_1468728ae();
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (cVar1 == '\0') {
      param_3 = param_3 & 0xfffdffff;
    }
  }
  local_70 = param_5;
  local_78 = param_4;
  FUN_14283dc80(param_1,param_2,param_3,0);
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14283ebd8 FUN_14283ebd8 body=10 status=ok
// SIG undefined FUN_14283ebd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14283ebd8(undefined8 param_1)

{
  _DAT_14c9642e4 = _DAT_14c9642e4 + 1;
  return param_1;
}



// FUNCTION 14283ebe2 FUN_14283ebe2 body=7 status=ok
// SIG undefined FUN_14283ebe2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14283ebe2(void)

{
  _DAT_14c9642e4 = _DAT_14c9642e4 + -1;
  return;
}



// FUNCTION 14283ebea FUN_14283ebea body=117 status=ok
// SIG undefined FUN_14283ebea(void)

undefined4 FUN_14283ebea(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
  iVar3 = iVar1 + 0xffff;
  if (-1 < iVar1) {
    iVar3 = iVar1;
  }
  uVar4 = 0xffffffff;
  if ((iVar3 >> 0x10 < DAT_14c964390) &&
     (lVar2 = *(longlong *)(DAT_14c964388 + 8 + (longlong)(iVar3 >> 0x10) * 0x10), lVar2 != 0)) {
    uVar4 = *(undefined4 *)(lVar2 + 8 + (longlong)(iVar1 % 0x10000) * 0x10);
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
  return uVar4;
}



// FUNCTION 14283ec60 caseD_11 body=1 status=ok
// SIG undefined caseD_11(void)

void switchD_143c3d4dc::caseD_11(void)

{
  return;
}



// FUNCTION 14283ec61 FUN_14283ec61 body=69 status=ok
// SIG undefined FUN_14283ec61(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14283ec61(void)

{
  _DAT_14c9642f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014283eca3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9642f8,1);
  return;
}



// FUNCTION 14283eca6 FUN_14283eca6 body=1645 status=ok
// SIG undefined FUN_14283eca6(void)

void FUN_14283eca6(ulonglong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong *puVar16;
  longlong *plVar17;
  byte bVar18;
  int iVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined8 *puStack_120;
  longlong *local_118;
  ulonglong *local_110;
  undefined8 local_108;
  undefined6 uStack_100;
  undefined2 uStack_fa;
  undefined6 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  longlong local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  longlong local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar10 = *param_1;
  if (uVar10 == 0) goto LAB_14283f155;
  uVar14 = *(uint *)(uVar10 + 8);
  local_118 = *(longlong **)(uVar10 + 0x10);
  plVar21 = (longlong *)local_118[8];
  if (*(char *)((longlong)param_1 + 0x13) == '\x01') {
    uVar8 = param_1[1];
    if (((*(uint *)(uVar10 + 8) >> 0x16 & 1) != 0) && ((*(uint *)(uVar8 + 8) & 0x10) != 0)) {
      puStack_120 = (undefined8 *)0x0;
      local_128 = local_128 & 0xffffffffffffff00;
      uVar8 = FUN_1402aad87(local_118,*(undefined8 *)(uVar10 + 0x20),*(undefined8 *)(uVar10 + 0x18),
                            *(undefined4 *)(uVar10 + 8));
      param_1[1] = uVar8;
    }
    if (*(int *)(*(longlong *)(uVar8 + 0x10) + 0xd4) < 0) {
      uVar10 = (ulonglong)(int)param_1[0x37];
      if (0 < (longlong)uVar10) {
        puVar11 = param_1 + 0x26;
        iVar19 = -(int)param_1[0x37];
        lVar15 = uVar10 << 4;
        local_110 = puVar11;
        do {
          puVar16 = (ulonglong *)param_1[0x36];
          if ((ulonglong *)param_1[0x36] == (ulonglong *)0x0) {
            puVar16 = puVar11;
          }
          lVar20 = *(longlong *)((longlong)puVar16 + lVar15 + -0x10);
          uVar9 = *(undefined8 *)(lVar20 + 0x18);
          lVar20 = FUN_144938c96(*(undefined8 *)(lVar20 + 0x20));
          lVar20 = FUN_1468915d4(*(undefined8 *)(lVar20 + 0x10),uVar9);
          puVar11 = local_110;
          if (lVar20 == 0) {
            uVar7 = (uint)param_1[0x37];
            if (uVar10 != uVar7) {
              iVar4 = iVar19 + uVar7;
              if (0 < (int)(iVar19 + uVar7)) {
                iVar4 = 1;
              }
              puVar16 = (ulonglong *)param_1[0x36];
              if ((ulonglong *)param_1[0x36] == (ulonglong *)0x0) {
                puVar16 = local_110;
              }
              memmove((void *)((longlong)puVar16 + lVar15 + -0x10),
                      puVar16 + (longlong)(int)(uVar7 - iVar4) * 2,(longlong)iVar4 << 4);
              uVar7 = (uint)param_1[0x37];
            }
            *(uint *)(param_1 + 0x37) = uVar7 - 1;
            FUN_146903f94(puVar11);
          }
          else {
            *(longlong *)((longlong)puVar16 + lVar15 + -8) = lVar20;
          }
          iVar19 = iVar19 + 1;
          lVar15 = lVar15 + -0x10;
          bVar3 = 1 < uVar10;
          uVar10 = uVar10 - 1;
        } while (bVar3);
      }
    }
  }
  uVar14 = uVar14 & 0x10;
  if (*(char *)((longlong)param_1 + 0x11) == '\x01') {
    if ((uVar14 == 0) ||
       (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0xc88) == '\x01')) {
      plVar21 = local_118;
    }
    if (plVar21 == (longlong *)0x0) {
      plVar21 = local_118;
    }
    uVar10 = param_1[1];
    if (uVar10 == 0) {
      uVar10 = plVar21[0x22];
    }
    FUN_14283f314(*param_1,plVar21,uVar10,(char)param_1[2]);
  }
  if ((param_1[3] == 0) || ((*(byte *)(param_1[3] + 0x10) & 1) == 0)) {
    bVar18 = *(byte *)((longlong)param_1 + 0x13);
    bVar3 = true;
  }
  else {
    bVar3 = false;
    bVar18 = 0;
  }
  if (0 < (int)param_1[0x37]) {
    lVar20 = 8;
    lVar15 = 0;
    do {
      puVar11 = (ulonglong *)param_1[0x36];
      if ((ulonglong *)param_1[0x36] == (ulonglong *)0x0) {
        puVar11 = param_1 + 0x26;
      }
      lVar2 = *(longlong *)((longlong)puVar11 + lVar20 + -8);
      FUN_14283f314(lVar2,*(undefined8 *)(*(longlong *)((longlong)puVar11 + lVar20) + 0x10),
                    *(longlong *)((longlong)puVar11 + lVar20),0);
      if ((bVar3) && ((*(uint *)(lVar2 + 8) >> 10 & 1) == 0)) {
        bVar18 = 1;
      }
      lVar15 = lVar15 + 1;
      lVar20 = lVar20 + 0x10;
    } while (lVar15 < (int)param_1[0x37]);
  }
  plVar17 = local_118;
  lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  plVar21 = *(longlong **)(lVar15 + 0xdc0);
  if (plVar21 != (longlong *)0x0) {
    plVar12 = (longlong *)(lVar15 + 0xdc0);
    (**(code **)(*plVar21 + 8))();
    puVar13 = (undefined8 *)*plVar12;
    if (puVar13 != (undefined8 *)0x0) {
      (**(code **)*puVar13)(puVar13,1);
    }
    *plVar12 = 0;
  }
  if (((*(uint *)(*param_1 + 8) >> 10 & 1) == 0) || (*(char *)((longlong)param_1 + 0x13) == '\x01'))
  {
    if ((uVar14 != 0) || ((*(byte *)((longlong)plVar17 + 0xd5) & 4) != 0)) {
      local_128 = 0;
      puStack_120 = (undefined8 *)0x0;
      FUN_1400033ba(*param_1,0,0,uVar14 >> 4);
    }
    if (!bVar3) goto LAB_14283ee7e;
    bVar5 = 1;
    if ((plVar17[0x22] != 0) && (plVar17[0x22] == param_1[1])) {
      bVar5 = (*(byte *)((longlong)plVar17 + 0xd6) & 4) >> 2;
    }
    if ((uVar14 != 0) && (*(char *)((longlong)param_1 + 0x11) != '\x01')) goto LAB_14283ee7e;
    bVar5 = *(byte *)((longlong)plVar17 + 0xd6) >> 7 & bVar5;
  }
  else {
LAB_14283ee7e:
    bVar5 = 0;
  }
  pcVar1 = (code *)param_1[0x3a];
  if (pcVar1 != (code *)0x0) {
    puVar11 = param_1 + 0x3e;
    if ((ulonglong *)param_1[0x3c] != (ulonglong *)0x0) {
      puVar11 = (ulonglong *)param_1[0x3c];
    }
    uVar9 = (**(code **)(*puVar11 + 8))();
    (*pcVar1)(uVar9);
  }
  if (bVar5 != 0 || (bVar18 & 1) != 0) {
    local_d0 = 0;
    local_c8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_108 = 0;
    uStack_100 = 0;
    uStack_fa = 0;
    uStack_f8 = 0;
    local_c4 = 0xffffffff00000080;
    local_bc = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_80 = 0;
    local_78 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_74 = 0xffffffff00000080;
    local_6c = 0;
    local_60 = 0;
    local_58 = 0;
    puVar13 = (undefined8 *)param_1[3];
    if ((undefined8 *)param_1[3] == (undefined8 *)0x0) {
      puVar13 = &local_108;
    }
    FUN_14050314a(puVar13,*param_1,param_1[1]);
    puVar11 = (ulonglong *)param_1[0x36];
    if ((ulonglong *)param_1[0x36] == (ulonglong *)0x0) {
      puVar11 = param_1 + 0x26;
    }
    uVar10 = param_1[0x37];
    if ((longlong)(int)uVar10 != 0) {
      lVar15 = 0;
      do {
        FUN_14050314a(puVar13,*(undefined8 *)((longlong)puVar11 + lVar15),
                      *(undefined8 *)((longlong)puVar11 + lVar15 + 8));
        lVar15 = lVar15 + 0x10;
      } while ((longlong)(int)uVar10 * 0x10 != lVar15);
    }
    plVar17 = local_118;
    if (bVar5 != 0) {
      uVar8 = *param_1;
      uVar10 = param_1[1];
      if (uVar10 == 0) {
        uVar10 = FUN_144938c96(uVar8);
        uVar8 = *param_1;
        if (uVar10 != 0) goto LAB_14283efa0;
        uVar10 = 0;
        uVar9 = 0;
      }
      else {
LAB_14283efa0:
        uVar9 = *(undefined8 *)(uVar10 + 0x10);
      }
      local_128 = uVar8;
      puStack_120 = puVar13;
      FUN_14019af10(plVar17,uVar8,uVar10,uVar9);
    }
    if (((bVar18 & 1) != 0) && (iVar19 = (int)param_1[0x37], 0 < iVar19)) {
      lVar20 = 8;
      lVar15 = 0;
      do {
        puVar11 = (ulonglong *)param_1[0x36];
        if ((ulonglong *)param_1[0x36] == (ulonglong *)0x0) {
          puVar11 = param_1 + 0x26;
        }
        uVar10 = *(ulonglong *)((longlong)puVar11 + lVar20 + -8);
        if (((*(uint *)(uVar10 + 8) >> 10 & 1) == 0) ||
           (*(char *)((longlong)param_1 + 0x13) == '\x01')) {
          local_128 = uVar10;
          puStack_120 = puVar13;
          FUN_14019af10(*(undefined8 *)(uVar10 + 0x10),uVar10,
                        *(longlong *)((longlong)puVar11 + lVar20),
                        *(undefined8 *)(*(longlong *)((longlong)puVar11 + lVar20) + 0x10));
          iVar19 = (int)param_1[0x37];
        }
        lVar15 = lVar15 + 1;
        lVar20 = lVar20 + 0x10;
      } while (lVar15 < iVar19);
    }
    local_58 = 0;
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    FUN_1401be552(&local_a0);
    local_a8 = 0;
    if (local_b0 != 0) {
      FUN_1400020a8();
    }
    FUN_1401be51a(&local_f0);
  }
  if (0 < (int)param_1[0x37]) {
    lVar15 = 0;
    lVar20 = 0;
    do {
      puVar11 = (ulonglong *)param_1[0x36];
      if ((ulonglong *)param_1[0x36] == (ulonglong *)0x0) {
        puVar11 = param_1 + 0x26;
      }
      (**(code **)(**(longlong **)((longlong)puVar11 + lVar15) + 0x58))();
      lVar20 = lVar20 + 1;
      lVar15 = lVar15 + 0x10;
    } while (lVar20 < (int)param_1[0x37]);
  }
  if ((longlong)(int)param_1[0x43] != 0) {
    lVar15 = (longlong)(int)param_1[0x43] << 6;
    plVar21 = (longlong *)(param_1[0x42] + 0x20);
    do {
      pcVar1 = (code *)plVar21[-4];
      if (pcVar1 != (code *)0x0) {
        plVar12 = (longlong *)plVar21[-2];
        if ((longlong *)plVar21[-2] == (longlong *)0x0) {
          plVar12 = plVar21;
        }
        uVar9 = (**(code **)(*plVar12 + 8))();
        (*pcVar1)(uVar9);
      }
      plVar21 = plVar21 + 8;
      lVar15 = lVar15 + -0x40;
    } while (lVar15 != 0);
  }
  (**(code **)(*(longlong *)*param_1 + 0x50))();
  (**(code **)(*plVar17 + 0x360))(plVar17,*param_1,param_1[3]);
  plVar21 = (longlong *)*param_1;
  if (((((*(uint *)(plVar21 + 1) >> 10 & 1) == 0) || (*(char *)((longlong)param_1 + 0x13) == '\x01')
       ) && ((param_1[3] == 0 || ((*(byte *)(param_1[3] + 0x10) & 1) == 0)))) &&
     (cVar6 = FUN_1400439fc(plVar21,0,&local_108), cVar6 != '\0')) {
    (**(code **)(*plVar21 + 0x268))(plVar21);
  }
  FUN_14472eae2(*param_1,0x200);
  *param_1 = 0;
LAB_14283f155:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14283f314 FUN_14283f314 body=1002 status=ok
// SIG undefined FUN_14283f314(void)

void FUN_14283f314(longlong param_1,longlong *param_2,longlong param_3,byte param_4)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  void *pvVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  byte bVar10;
  longlong local_50;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951808) && (FUN_144b3d300(&DAT_14c951808), DAT_14c951808 == -1)) {
    FUN_145dfc00c(&DAT_14c951778);
    atexit((_func_5014 *)&LAB_142809c19);
    _Init_thread_footer(&DAT_14c951808);
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  bVar10 = (*(uint *)((longlong)plVar2 + 0xd4) & 0x10000080) == 0;
  bVar9 = (param_4 ^ 1) & plVar2 == param_2;
  if (bVar9 == 1 && !(bool)bVar10) {
    if (param_3 != 0) {
      if (plVar2[0x22] == param_3) {
        for (plVar2 = (longlong *)plVar2[0x11]; plVar2 != (longlong *)0x0;
            plVar2 = (longlong *)plVar2[0xc]) {
          uVar3 = plVar2[7];
          if ((uVar3 & 0x800000202000) == 0 || (uVar3 & 0x8000080000) == 0) {
            iVar1 = *(int *)((longlong)plVar2 + 0x44);
            if (((param_2 == (longlong *)0x0) ||
                (*(int *)((longlong)plVar2 + 0x34) * (int)plVar2[6] + iVar1 <= (int)param_2[0xb]))
               && (param_1 != param_3)) {
              pvVar5 = (void *)(param_3 + iVar1);
              pvVar6 = (void *)(iVar1 + param_1);
              if (((uint)uVar3 >> 0x1e & 1) == 0) {
                (**(code **)(*plVar2 + 0x100))(plVar2,pvVar6,pvVar5);
              }
              else {
                memcpy(pvVar6,pvVar5,
                       (longlong)*(int *)((longlong)plVar2 + 0x34) * (longlong)(int)plVar2[6]);
              }
            }
          }
        }
      }
      else {
        for (plVar2 = (longlong *)plVar2[0xe]; plVar2 != (longlong *)0x0;
            plVar2 = (longlong *)plVar2[9]) {
          uVar3 = plVar2[7];
          if ((uVar3 & 0x800000202000) == 0 || (uVar3 & 0x8000080000) == 0) {
            iVar1 = *(int *)((longlong)plVar2 + 0x44);
            if (((param_2 == (longlong *)0x0) ||
                (*(int *)((longlong)plVar2 + 0x34) * (int)plVar2[6] + iVar1 <= (int)param_2[0xb]))
               && (param_1 != param_3)) {
              pvVar5 = (void *)(param_3 + iVar1);
              pvVar6 = (void *)(iVar1 + param_1);
              if (((uint)uVar3 >> 0x1e & 1) == 0) {
                (**(code **)(*plVar2 + 0x100))(plVar2,pvVar6,pvVar5);
              }
              else {
                memcpy(pvVar6,pvVar5,
                       (longlong)*(int *)((longlong)plVar2 + 0x34) * (longlong)(int)plVar2[6]);
              }
            }
          }
        }
      }
    }
  }
  else {
    param_4 = (*(uint *)(param_1 + 8) >> 10 & 1) == 0 & param_4;
    bVar9 = bVar9 & plVar2[0x22] == param_3;
    if (param_4 == 0) {
      local_50 = 0;
    }
    else {
      local_50 = param_2[0x22];
      if (local_50 == 0) {
        (**(code **)(*param_2 + 1000))(param_2);
        local_50 = param_2[0x22];
      }
    }
    plVar4 = plVar2 + 0xe;
    if (bVar9 != 0) {
      plVar4 = plVar2 + 0x11;
    }
    plVar4 = (longlong *)*plVar4;
    if (plVar4 != (longlong *)0x0) {
      lVar8 = 0x48;
      if (bVar9 != 0) {
        lVar8 = 0x60;
      }
      do {
        if ((bVar10 & 1) == 0) {
          bVar10 = 0;
        }
        else {
          bVar10 = FUN_144aa15b0(plVar4,param_1);
        }
        uVar3 = plVar4[7];
        if ((uVar3 & 0x800000202000) == 0 || (uVar3 & 0x8000080000) == 0) {
          lVar7 = (longlong)*(int *)((longlong)plVar4 + 0x44);
          if ((uVar3 & 0x800000202000) == 0 || param_4 != 1) {
            iVar1 = (int)plVar4[6];
            if (((param_2 == (longlong *)0x0) ||
                (*(int *)((longlong)plVar4 + 0x34) * iVar1 + *(int *)((longlong)plVar4 + 0x44) <=
                 (int)param_2[0xb])) && (param_1 != param_3)) {
              pvVar5 = (void *)(param_3 + lVar7);
              if (((uint)uVar3 >> 0x1e & 1) != 0) goto LAB_14283f5d1;
              (**(code **)(*plVar4 + 0x100))(plVar4);
            }
          }
          else if (local_50 != param_1) {
            pvVar5 = (void *)(local_50 + lVar7);
            if (((uint)uVar3 >> 0x1e & 1) == 0) {
              (**(code **)(*plVar4 + 0x100))(plVar4,lVar7 + param_1,pvVar5,(int)plVar4[6]);
            }
            else {
              iVar1 = (int)plVar4[6];
LAB_14283f5d1:
              memcpy((void *)(lVar7 + param_1),pvVar5,
                     (longlong)iVar1 * (longlong)*(int *)((longlong)plVar4 + 0x34));
            }
          }
        }
        plVar4 = *(longlong **)((longlong)plVar4 + lVar8);
      } while (plVar4 != (longlong *)0x0);
    }
    if (bVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014283f613. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x370))(plVar2,param_1,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 14283f6fe FUN_14283f6fe body=370 status=ok
// SIG undefined FUN_14283f6fe(void)

void FUN_14283f6fe(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD dwTlsIndex;
  DWORD DVar4;
  LPVOID lpTlsValue;
  LPCWSTR lpOutputString;
  undefined2 *puVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  LPCWSTR local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  dwTlsIndex = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar4 = 0xffffffff;
    LOCK();
    bVar6 = DAT_14c75ec34 != 0xffffffff;
    DVar3 = dwTlsIndex;
    if (bVar6) {
      DVar4 = DAT_14c75ec34;
      DVar3 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar3;
    UNLOCK();
    if (bVar6) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar4;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(lpTlsValue);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  if (((*(int *)((longlong)lpTlsValue + 0x18) == 0) ||
      (plVar1 = *(longlong **)
                 (*(longlong *)((longlong)lpTlsValue + 0x10) +
                 (longlong)(*(int *)((longlong)lpTlsValue + 0x18) + -1) * 8),
      plVar1 == (longlong *)0x0)) || (lVar2 = *(longlong *)(*plVar1 + 0x10), lVar2 == 0)) {
    FUN_140002266(&local_38,L"CDO Constructor (%s): Failed to find %s\n",L"Unknown",param_1);
  }
  else {
    local_28 = *(undefined8 *)(lVar2 + 0x18);
    FUN_1400021e4(&local_28,&local_48);
    puVar5 = local_48;
    if (local_40 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_38,L"CDO Constructor (%s): Failed to find %s\n",puVar5,param_1);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  lpOutputString = local_38;
  if (local_30 == 0) {
    lpOutputString = L"";
  }
  OutputDebugStringW(lpOutputString);
  if (local_38 != (LPCWSTR)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14283f871 FUN_14283f871 body=49 status=ok
// SIG undefined FUN_14283f871(void)

void FUN_14283f871(void)

{
  FUN_144760e21(DAT_14c964308,DAT_14c964310);
  if (DAT_14c964308 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14283f8a2 FUN_14283f8a2 body=49 status=ok
// SIG undefined FUN_14283f8a2(void)

void FUN_14283f8a2(void)

{
  FUN_144760e21(DAT_14c964728,DAT_14c964730);
  if (DAT_14c964728 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14283f8d8 FUN_14283f8d8 body=47 status=ok
// SIG undefined FUN_14283f8d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14283f8d8(void)

{
  _DAT_14c964368 = 0;
  if (DAT_14c964360 != 0) {
    FUN_1400020a8();
  }
  FUN_1400dcd30(&DAT_14c964320);
  return;
}



// FUNCTION 14283f907 FUN_14283f907 body=230 status=ok
// SIG undefined FUN_14283f907(void)

void FUN_14283f907(void)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c964670) {
    FUN_144b3d300(&DAT_14c964670);
    if (DAT_14c964670 == -1) {
      FUN_145794a58(&DAT_14c964408);
      atexit((_func_5014 *)&LAB_142840318);
      _Init_thread_footer(&DAT_14c964670);
    }
  }
  if ((DAT_14c949800 & 1) == 0) goto LAB_14283f966;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 != 2) {
      if (iVar1 == 1) {
        DVar2 = FUN_140ad26c0();
        DVar3 = GetCurrentThreadId();
        if (DVar2 == DVar3) goto LAB_14283f9dc;
      }
LAB_14283f966:
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c964408);
      FUN_14283f9ee(&DAT_14c964408);
                    /* WARNING: Could not recover jumptable at 0x00014283f986. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c964408);
      return;
    }
  }
LAB_14283f9dc:
  FUN_14283f9ee(&DAT_14c964408);
  return;
}



// FUNCTION 14283f9ee FUN_14283f9ee body=158 status=ok
// SIG undefined FUN_14283f9ee(void)

void FUN_14283f9ee(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  int local_60;
  LARGE_INTEGER *local_58;
  undefined8 local_48;
  code *local_40;
  undefined8 *local_38;
  LARGE_INTEGER local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  lVar1 = DAT_14c82b500;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  QueryPerformanceCounter(&local_30);
  local_60 = (lVar1 == 0) + 2;
  local_38 = &local_48;
  local_30.QuadPart = 0;
  local_28 = 0;
  local_40 = FUN_141535c22;
  local_58 = &local_30;
  local_48 = param_1;
  FUN_1401f8d10(L"ParallelFor Task",7,1);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14283fa92 FUN_14283fa92 body=69 status=ok
// SIG undefined FUN_14283fa92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14283fa92(void)

{
  _DAT_14c964370 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014283fad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c964378,1);
  return;
}



// FUNCTION 14283fad7 FUN_14283fad7 body=293 status=ok
// SIG undefined FUN_14283fad7(void)

void FUN_14283fad7(longlong param_1)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_1410f9880(param_1,0);
  if (cVar1 == '\0') {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectHash.cpp",0x31,
                  L"IsValidLowLevelFast failure");
  }
  cVar1 = FUN_140432338(param_1);
  if (cVar1 == '\0') {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectHash.cpp",0x32,L"IsValid failure");
  }
  if ((*(longlong *)(param_1 + 0x20) != 0) &&
     (cVar1 = FUN_1410f9880(*(longlong *)(param_1 + 0x20),0), cVar1 == '\0')) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectHash.cpp",0x34,
                  L"Outer IsValidLowLevelFast failure");
  }
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (cVar1 = FUN_1410f9880(*(longlong *)(param_1 + 0x10),0), cVar1 == '\0')) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectHash.cpp",0x36,
                  L"Class IsvalidLowLevelFast failure");
  }
  FUN_144750a86(param_1,&local_28,0,0);
  puVar2 = local_28;
  if (local_20 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectHash.cpp",0x38,
                L"Unidentified failure for object %s, hash itself may be corrupted or buggy.",puVar2
               );
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14283fbfd FUN_14283fbfd body=1342 status=ok
// SIG undefined FUN_14283fbfd(void)

void FUN_14283fbfd(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  int iVar19;
  longlong lVar20;
  uint *puVar21;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  uint *local_70;
  longlong *local_68;
  undefined1 local_5c [4];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c964670) && (FUN_144b3d300(&DAT_14c964670), DAT_14c964670 == -1)) {
    FUN_145794a58(&DAT_14c964408);
    atexit((_func_5014 *)&LAB_142840318);
    _Init_thread_footer(&DAT_14c964670);
  }
  if ((DAT_14c949800 & 1) == 0) {
LAB_14283fcb5:
    lpCriticalSection = (LPCRITICAL_SECTION)&DAT_14c964408;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c964408);
    bVar2 = false;
  }
  else {
    bVar2 = true;
    if ((DAT_14c86a9f8 == '\x01') &&
       (iVar12 = *(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         ), iVar12 != 2)) {
      if (iVar12 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        if (DVar4 == DVar5) goto LAB_14284014d;
      }
      goto LAB_14283fcb5;
    }
LAB_14284014d:
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_50 = param_1;
  puVar6 = (ulonglong *)FUN_146902d56(uVar3 >> 0x10 ^ uVar3);
  plVar9 = (longlong *)*puVar6;
  *puVar6 = (ulonglong)param_2;
  if (plVar9 == param_2) goto LAB_14283fd08;
  if (plVar9 != (longlong *)0x0) {
    uVar3 = ((uint)((ulonglong)plVar9 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar9 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    local_50 = plVar9;
    plVar7 = (longlong *)FUN_14690317c(&DAT_14c9645d0,uVar3 >> 0x10 ^ uVar3);
    plVar9 = (longlong *)plVar7[1];
    if ((longlong *)*plVar7 == (longlong *)0x0 && plVar9 != (longlong *)0x0) {
      iVar12 = FUN_144b00eaa(plVar9);
      if ((int)plVar9[1] - *(int *)((longlong)plVar9 + 0x34) < 3) {
        puVar18 = (uint *)(plVar9 + 2);
        iVar16 = (int)plVar9[5];
        uVar3 = 0xfffffffe;
        iVar14 = 0;
        if (iVar16 == 0) {
          iVar16 = 0;
          iVar13 = 0;
        }
        else {
          puVar21 = (uint *)plVar9[4];
          if ((uint *)plVar9[4] == (uint *)0x0) {
            puVar21 = puVar18;
          }
          uVar17 = *puVar21;
          local_78 = iVar12;
          local_70 = puVar18;
          if (uVar17 == 0) {
            iVar14 = iVar16 + 0x1e;
            if (-1 < iVar16 + -1) {
              iVar14 = iVar16 + -1;
            }
            uVar8 = 0;
            uVar15 = (ulonglong)(uint)(iVar14 >> 5);
            if (iVar14 >> 5 < 1) {
              uVar15 = uVar8;
            }
            iVar14 = (int)uVar15 + 1;
            iVar13 = (int)uVar15 * 0x20 + 0x20;
            iVar19 = 0;
            do {
              local_74 = iVar14;
              if (uVar15 == uVar8) goto LAB_14283fea8;
              iVar19 = iVar19 + 0x20;
              uVar17 = puVar21[uVar8 + 1];
              uVar8 = uVar8 + 1;
            } while (uVar17 == 0);
            iVar14 = (int)uVar8;
          }
          else {
            iVar19 = 0;
            iVar14 = 0;
          }
          uVar15 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
          lVar20 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          iVar13 = (iVar19 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          if (iVar13 < iVar16) {
            iVar16 = iVar13;
          }
          uVar3 = ~(-uVar17 & uVar17);
          iVar13 = iVar19;
        }
LAB_14283fea8:
        *plVar7 = *(longlong *)(*plVar9 + (longlong)iVar16 * 0x10);
        if ((uint *)plVar9[4] != (uint *)0x0) {
          puVar18 = (uint *)plVar9[4];
        }
        iVar16 = (int)plVar9[5];
        lVar20 = (longlong)iVar14;
        uVar3 = uVar3 & puVar18[lVar20];
        if (uVar3 == 0) {
          iVar19 = iVar16 + 0x1e;
          if (-1 < iVar16 + -1) {
            iVar19 = iVar16 + -1;
          }
          iVar11 = iVar19 >> 5;
          if (iVar19 >> 5 < iVar14) {
            iVar11 = iVar14;
          }
          do {
            if (iVar11 == lVar20) goto LAB_14283ff22;
            iVar13 = iVar13 + 0x20;
            uVar3 = puVar18[lVar20 + 1];
            lVar20 = lVar20 + 1;
          } while (uVar3 == 0);
        }
        uVar15 = (ulonglong)(-uVar3 & uVar3) * 2 + 1;
        lVar20 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar14 = (iVar13 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if (iVar14 < iVar16) {
          iVar16 = iVar14;
        }
LAB_14283ff22:
        plVar7[1] = *(longlong *)(*plVar9 + (longlong)iVar16 * 0x10);
        *(undefined4 *)(plVar9 + 9) = 0;
        if (plVar9[8] != 0) {
          FUN_1400020a8();
        }
        FUN_1400dcd30(plVar9);
        FUN_1400020a8(plVar9);
      }
      if (iVar12 != 1) {
LAB_14283ff5f:
        FUN_14283fad7(param_1);
      }
    }
    else {
      if (plVar9 != param_1) {
        if ((longlong *)*plVar7 != param_1) goto LAB_14283ff5f;
        *plVar7 = (longlong)plVar9;
      }
      plVar7[1] = 0;
    }
    lVar20 = plVar7[1];
    if (*plVar7 == 0 && lVar20 != 0) {
      iVar12 = *(int *)(lVar20 + 8) - *(int *)(lVar20 + 0x34);
    }
    else {
      iVar12 = ((*plVar7 != 0) + 1) - (uint)(lVar20 == 0);
    }
    if (iVar12 == 0) {
      FUN_146903574(&DAT_14c9645d0,local_50);
    }
  }
  uVar3 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_68 = param_2;
  plVar9 = (longlong *)FUN_14690317c(&DAT_14c9645d0,uVar3 >> 0x10 ^ uVar3);
  lVar20 = *plVar9;
  lVar1 = plVar9[1];
  if (lVar20 == 0 && lVar1 != 0) {
    local_50 = param_1;
    FUN_144aa2282(lVar1,&local_58,&local_50,0);
  }
  else if (lVar20 == 0 || lVar1 == 0) {
    if (lVar20 == 0) {
      *plVar9 = (longlong)param_1;
      local_50 = param_1;
    }
    else {
      plVar9[1] = (longlong)param_1;
      local_50 = param_1;
    }
  }
  else {
    local_50 = param_1;
    puVar10 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    puVar10[4] = 0;
    *(undefined4 *)(puVar10 + 5) = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    *(undefined8 *)((longlong)puVar10 + 0x2c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar10 + 0x34) = 0;
    puVar10[8] = 0;
    *(undefined4 *)(puVar10 + 9) = 0;
    local_58 = lVar20;
    FUN_1402972e2(puVar10,local_5c,&local_58,0);
    local_58 = plVar9[1];
    FUN_1402972e2(puVar10,local_5c,&local_58,0);
    FUN_144aa2282(puVar10,&local_58,&local_50,0);
    *plVar9 = 0;
    plVar9[1] = (longlong)puVar10;
  }
LAB_14283fd08:
  FUN_144757f48(param_1,0x10000000);
  if (!bVar2) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142840154 FUN_142840154 body=395 status=ok
// SIG undefined FUN_142840154(void)

ulonglong FUN_142840154(ulonglong param_1)

{
  ulonglong *puVar1;
  bool bVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD DVar5;
  int iVar6;
  undefined *puVar7;
  ulonglong uVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c964670) && (FUN_144b3d300(&DAT_14c964670), DAT_14c964670 == -1)) {
    FUN_145794a58(&DAT_14c964408);
    atexit((_func_5014 *)&LAB_142840318);
    _Init_thread_footer(&DAT_14c964670);
  }
  if ((DAT_14c949800 & 1) == 0) {
LAB_1428401c8:
    lpCriticalSection = (LPCRITICAL_SECTION)&DAT_14c964408;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c964408);
    bVar2 = false;
  }
  else {
    bVar2 = true;
    if ((DAT_14c86a9f8 == '\x01') &&
       (iVar6 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar6 != 2)) {
      if (iVar6 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        if (DVar4 == DVar5) goto LAB_1428402d8;
      }
      goto LAB_1428401c8;
    }
LAB_1428402d8:
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  if (DAT_14c964628 != DAT_14c964654) {
    uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    puVar7 = &DAT_14c964658;
    if (DAT_14c964660 != (undefined *)0x0) {
      puVar7 = DAT_14c964660;
    }
    iVar6 = *(int *)(puVar7 + (ulonglong)(DAT_14c964668 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (iVar6 != -1) {
      uVar8 = 0;
      do {
        puVar1 = (ulonglong *)(DAT_14c964620 + (longlong)iVar6 * 0x18);
        if (*puVar1 == param_1) {
          if (puVar1 == (ulonglong *)0x0) goto LAB_142840265;
          uVar8 = puVar1[1];
          break;
        }
        iVar6 = (int)puVar1[2];
      } while (iVar6 != -1);
      goto LAB_142840267;
    }
  }
LAB_142840265:
  uVar8 = 0;
LAB_142840267:
  if (!bVar2) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return uVar8;
}



// FUNCTION 1428402eb FUN_1428402eb body=45 status=ok
// SIG undefined FUN_1428402eb(void)

void FUN_1428402eb(void)

{
  if (DAT_14c9643e8 != (longlong *)0x0) {
    (**(code **)(*DAT_14c9643e8 + 8))(DAT_14c9643e8,1);
  }
  DAT_14c9643e8 = (longlong *)0x0;
  return;
}



// FUNCTION 14284031e FUN_14284031e body=136 status=ok
// SIG undefined FUN_14284031e(void)

void FUN_14284031e(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1428403a6 FUN_1428403a6 body=136 status=ok
// SIG undefined FUN_1428403a6(void)

void FUN_1428403a6(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14284042e FUN_14284042e body=122 status=ok
// SIG undefined FUN_14284042e(void)

void FUN_14284042e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 1428404a8 FUN_1428404a8 body=138 status=ok
// SIG undefined FUN_1428404a8(void)

void FUN_1428404a8(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 142840535 FUN_142840535 body=83 status=ok
// SIG undefined FUN_142840535(void)

void FUN_142840535(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  for (lVar1 = *(longlong *)(param_2 + 0x78); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x50)) {
    FUN_1405a0337(param_1,lVar1,param_3,param_4);
  }
  return;
}



// FUNCTION 142840588 FUN_142840588 body=83 status=ok
// SIG undefined FUN_142840588(void)

void FUN_142840588(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  for (lVar1 = *(longlong *)(param_2 + 0x78); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x50)) {
    FUN_146904255(param_1,lVar1,param_3,param_4);
  }
  return;
}



// FUNCTION 1428405db FUN_1428405db body=83 status=ok
// SIG undefined FUN_1428405db(void)

void FUN_1428405db(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  for (lVar1 = *(longlong *)(param_2 + 0x78); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x50)) {
    FUN_1449c252b(param_1,lVar1,param_3,param_4);
  }
  return;
}



// FUNCTION 14284062e FUN_14284062e body=83 status=ok
// SIG undefined FUN_14284062e(void)

void FUN_14284062e(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  for (lVar1 = *(longlong *)(param_2 + 0x78); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x50)) {
    FUN_146904af0(param_1,lVar1,param_3,param_4);
  }
  return;
}



// FUNCTION 142840681 FUN_142840681 body=83 status=ok
// SIG undefined FUN_142840681(void)

void FUN_142840681(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  for (lVar1 = *(longlong *)(param_2 + 0x78); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x50)) {
    FUN_146904255(param_1,lVar1,param_3,param_4);
  }
  return;
}



// FUNCTION 1428406d4 FUN_1428406d4 body=83 status=ok
// SIG undefined FUN_1428406d4(void)

void FUN_1428406d4(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  for (lVar1 = *(longlong *)(param_2 + 0x78); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x50)) {
    FUN_146904af0(param_1,lVar1,param_3,param_4);
  }
  return;
}



// FUNCTION 142840727 FUN_142840727 body=124 status=ok
// SIG undefined FUN_142840727(void)

void FUN_142840727(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x78);
  if ((*(byte *)(param_2 + 0xb0) & 0x40) != 0) {
    pcVar1 = (code *)(**(code **)(**(longlong **)(param_2 + 0xb8) + 0x88))();
    (*pcVar1)(param_3,param_1);
    lVar2 = *(longlong *)(param_2 + 0x78);
  }
  for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x50)) {
    FUN_146905400(param_1,lVar2,param_3,param_4);
  }
  return;
}



// FUNCTION 1428407a3 FUN_1428407a3 body=124 status=ok
// SIG undefined FUN_1428407a3(void)

void FUN_1428407a3(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x78);
  if ((*(byte *)(param_2 + 0xb0) & 0x40) != 0) {
    pcVar1 = (code *)(**(code **)(**(longlong **)(param_2 + 0xb8) + 0x88))();
    (*pcVar1)(param_3,param_1);
    lVar2 = *(longlong *)(param_2 + 0x78);
  }
  for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x50)) {
    FUN_146905c9b(param_1,lVar2,param_3,param_4);
  }
  return;
}



// FUNCTION 14284083c FUN_14284083c body=55 status=ok
// SIG undefined FUN_14284083c(void)

undefined8 FUN_14284083c(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1447f76d2(param_1,iVar1);
  }
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = uVar2;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 142840874 FUN_142840874 body=53 status=ok
// SIG undefined FUN_142840874(void)

void FUN_142840874(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1447f76d2(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 1428408a9 FUN_1428408a9 body=1315 status=ok
// SIG undefined FUN_1428408a9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428408a9(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_141471170(&DAT_14c964118,L"s.AllowUnversionedContentInEditor",&DAT_14c964110,
                L"If true, allows unversioned content to be loaded by the editor.");
  atexit(FUN_14283c990);
  local_48 = 0;
  FUN_14153156c(&DAT_14c964128,L"s.AllowParseObjectLoading",&DAT_14c75ece8,
                L"If true, allows ParseObject to load fully qualified objects if needed and requested."
               );
  atexit(FUN_14283c9d5);
  DAT_14c964140 = 0;
  _DAT_14c964148 = 0;
  _DAT_14c964150 = 2;
  atexit(FUN_14283ca1a);
  DAT_14c964158 = 0;
  _DAT_14c964160 = 0;
  _DAT_14c964168 = 2;
  atexit(FUN_14283ca4b);
  DAT_14c964170 = 0;
  _DAT_14c964178 = 0;
  _DAT_14c964180 = 2;
  atexit(FUN_14283ca7c);
  DAT_14c9646e0 = 0;
  _DAT_14c9646e8 = 0;
  _DAT_14c9646f0 = 2;
  atexit(FUN_14283caad);
  DAT_14c964188 = 0;
  _DAT_14c964190 = 0;
  _DAT_14c964198 = 2;
  atexit(FUN_14283cade);
  DAT_14c964788 = 0;
  _DAT_14c964790 = 0;
  _DAT_14c964798 = 2;
  atexit(FUN_14283cb0f);
  DAT_14c9641a0 = 0;
  _DAT_14c9641a8 = 0;
  _DAT_14c9641b0 = 2;
  atexit(FUN_14283cb40);
  DAT_14c964698 = 0;
  _DAT_14c9646a0 = 0;
  _DAT_14c9646a8 = 2;
  atexit(FUN_14283cb71);
  DAT_14c9641b8 = 0;
  DAT_14c9641c0 = 0;
  atexit(FUN_14283cba2);
  DAT_14c9646b0 = 0;
  _DAT_14c9646b8 = 0;
  _DAT_14c9646c0 = 2;
  atexit(FUN_14283cbfd);
  DAT_14c964770 = 0;
  _DAT_14c964778 = 0;
  _DAT_14c964780 = 2;
  atexit(FUN_14283cc2e);
  DAT_14c9641c8 = 0;
  DAT_14c9641d0 = 0;
  atexit(FUN_14283cc5f);
  DAT_14c9646f8 = 0;
  _DAT_14c964700 = 0;
  _DAT_14c964708 = 2;
  atexit(FUN_14283cdaf);
  DAT_14c964740 = 0;
  _DAT_14c964748 = 0;
  _DAT_14c964750 = 2;
  atexit(FUN_14283cde0);
  DAT_14c964758 = 0;
  _DAT_14c964760 = 0;
  _DAT_14c964768 = 2;
  atexit(FUN_14283ce11);
  DAT_14c9646c8 = 0;
  _DAT_14c9646d0 = 0;
  _DAT_14c9646d8 = 2;
  atexit(FUN_14283ce42);
  DAT_14c964278 = 0;
  _DAT_14c964280 = 0;
  _DAT_14c964288 = 2;
  atexit(FUN_14283ce73);
  DAT_14c964290 = 0;
  _DAT_14c964298 = 0;
  _DAT_14c9642a0 = 2;
  atexit(FUN_14283cea4);
  DAT_14c9647a0 = 0;
  _DAT_14c9647a8 = 0;
  _DAT_14c9647b0 = 2;
  atexit(FUN_14283ced5);
  DAT_14c9642a8 = 0;
  _DAT_14c9642b0 = 0;
  _DAT_14c9642b8 = 2;
  atexit(FUN_14283cf06);
  DAT_14c9642c0 = 0;
  DAT_14c9642c8 = 0;
  atexit(FUN_14283cf37);
  DAT_14c964688 = 0;
  DAT_14c964690 = 0;
  atexit(FUN_14283cf92);
  DAT_14c964710 = 0;
  _DAT_14c964718 = 0;
  _DAT_14c964720 = 2;
  atexit(FUN_14283cfed);
  DAT_14c964678 = 0;
  DAT_14c964680 = 0;
  atexit(FUN_14283d01e);
  FUN_1446f470e(&DAT_14c9642e8,L"UniqueObjectNameForCooking",1);
  local_48 = 0;
  FUN_141471170(&DAT_14c9642f0,L"gc.VerifyUObjectsAreNotFGCObjects",&DAT_14c75ecec,
                L"If true, the engine will throw a warning when it detects a UObject-derived class which also derives from FGCObject or any of its members is derived from FGCObject"
               );
  atexit(FUN_14283ec61);
  DAT_14c964308 = 0;
  _DAT_14c964310 = 0;
  _DAT_14c964318 = 2;
  atexit(FUN_14283f871);
  DAT_14c964728 = 0;
  _DAT_14c964730 = 0;
  _DAT_14c964738 = 2;
  atexit(FUN_14283f8a2);
  FUN_1468fee68(&DAT_14c9647b8);
  atexit((_func_5014 *)&LAB_14283f8d3);
  DAT_14c964340 = 0;
  DAT_14c964348 = 0;
  DAT_14c964320 = 0;
  uRam000000014c964328 = 0;
  _DAT_14c96434c = 0xffffffff00000080;
  _DAT_14c964354 = 0;
  DAT_14c964360 = 0;
  _DAT_14c964368 = 0;
  atexit(FUN_14283f8d8);
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,2,0x10);
  local_38 = 2;
  *local_40 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_40[2] = lVar2;
  *local_40 = &PTR_FUN_149e00260;
  local_40[3] = &LAB_14283fa8d;
  local_48 = 0;
  FUN_1415c7246(&DAT_14c964370,L"ShrinkUObjectHashTables",L"Shrinks all of the UObject hash tables."
                ,&local_40);
  if (local_38 != 0) {
    if (local_40 == (undefined8 *)0x0) goto LAB_142840d48;
    (**(code **)*local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
  }
  if (local_40 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_142840d48:
  atexit(FUN_14283fa92);
  _DAT_14c964380 = &PTR_FUN_149eb5d60;
  DAT_14c964388 = 0;
  _DAT_14c964390 = 0;
  _DAT_14c964398 = 0;
  uRam000000014c9643a0 = 0;
  InitializeSRWLock((PSRWLOCK)&DAT_14c9643a8);
  atexit((_func_5014 *)&LAB_1428402df);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142840dd0 FUN_142840dd0 body=49 status=ok
// SIG undefined FUN_142840dd0(void)

void FUN_142840dd0(void)

{
  FUN_144760e21(DAT_14c9648f8,DAT_14c964900);
  if (DAT_14c9648f8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142840e01 FUN_142840e01 body=55 status=ok
// SIG undefined FUN_142840e01(void)

void FUN_142840e01(void)

{
  undefined8 uVar1;
  
  if (DAT_14c964918 == 0) {
    uVar1 = FUN_140e8dd8e();
    DAT_14c964918 = FUN_14171c317(FUN_146276e1b,uVar1,L"EVerseEffectSet");
  }
  return;
}



// FUNCTION 142840e70 FUN_142840e70 body=116 status=ok
// SIG undefined FUN_142840e70(void)

longlong FUN_142840e70(longlong param_1,char *param_2)

{
  longlong lVar1;
  size_t sVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if (param_2 == (char *)0x0) {
    iVar5 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    iVar5 = (int)sVar2;
  }
  lVar4 = (longlong)iVar5;
  if (*(ulonglong *)(param_1 + 0x10) <= (ulonglong)(lVar4 * 2 + *(longlong *)(param_1 + 8))) {
    FUN_140213274(param_1,lVar4);
  }
  if (iVar5 != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    if (0 < iVar5) {
      lVar3 = 0;
      do {
        *(short *)(lVar1 + lVar3 * 2) = (short)param_2[lVar3];
        lVar3 = lVar3 + 1;
      } while (lVar4 != lVar3);
    }
    *(longlong *)(param_1 + 8) = lVar1 + lVar4 * 2;
  }
  return param_1;
}



// FUNCTION 142840ee4 FUN_142840ee4 body=182 status=ok
// SIG undefined FUN_142840ee4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142840ee4(void)

{
  FUN_14282b410(L"/Script/CoreUObject",&PTR_FUN_149eb6f90,1,&PTR_FUN_149eb6ef0,4,0,0);
  FUN_1446f470e(&DAT_14c9648e8,L"$InitCDO",1);
  FUN_1446f470e(&DAT_14c9648f0,L"$StructPaddingDummy",1);
  DAT_14c9648f8 = 0;
  _DAT_14c964900 = 0;
  _DAT_14c964908 = 2;
  atexit(FUN_142840dd0);
  FUN_14098d3d2(FUN_142840e01,L"/Script/CoreUObject",L"EVerseEffectSet",&DAT_14c964910);
  return;
}



// FUNCTION 142840fec FUN_142840fec body=4086 status=ok
// SIG undefined FUN_142840fec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142840fec(longlong *param_1,uint param_2,double *param_3,uint param_4,
                       longlong *param_5)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  longlong lVar3;
  ulonglong extraout_RAX;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar8;
  double *pdVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  double *pdVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar26;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
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
  double dVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar55;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar56;
  double dVar57;
  double dVar58;
  undefined1 auStack_338 [32];
  double local_318;
  double dStack_310;
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
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
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178 [4];
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  double *pdVar7;
  
  pdVar9 = (double *)(ulonglong)param_4;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  uVar11 = (ulonglong)(int)param_1[1];
  lVar8 = *param_1;
  uVar12 = (ulonglong)(int)param_2;
  lVar14 = uVar12 * 0xe0;
  lVar3 = (uVar11 - 1) * 0xe0;
  pdVar7 = (double *)(lVar8 + 0x20 + lVar3);
  pdVar13 = (double *)(lVar8 + 0x20 + lVar14);
  dVar45 = *pdVar13;
  dVar17 = *(double *)(lVar8 + 0x30 + lVar14);
  local_2f8 = *(double *)(lVar8 + 0x30 + lVar3) - dVar17;
  dVar46 = *pdVar7 - dVar45;
  dVar47 = pdVar7[1] - pdVar13[1];
  dVar17 = param_3[2] - dVar17;
  dVar51 = param_3[1] - *(double *)(lVar8 + 0x28 + lVar14);
  dVar45 = *param_3 - dVar45;
  dVar15 = local_2f8 * local_2f8 + dVar46 * dVar46 + dVar47 * dVar47;
  if (9.99999993922529e-09 < dVar15) {
    dVar15 = 1.0 / SQRT(dVar15);
    dVar46 = dVar46 * dVar15;
    dVar47 = dVar47 * dVar15;
    local_2f8 = local_2f8 * dVar15;
  }
  dVar15 = dVar17 * dVar17 + dVar45 * dVar45 + dVar51 * dVar51;
  if (9.99999993922529e-09 < dVar15) {
    dVar15 = 1.0 / SQRT(dVar15);
    dVar45 = dVar45 * dVar15;
    dVar51 = dVar51 * dVar15;
    dVar17 = dVar17 * dVar15;
  }
  dVar56 = (double)(*(float *)(*param_5 + uVar12 * 4) * 0.017453292);
  dVar16 = local_2f8 * dVar17 + dVar46 * dVar45 + dVar47 * dVar51;
  dVar15 = dVar16;
  if (1.0 <= dVar16) {
    dVar15 = 1.0;
  }
  dVar15 = acos((double)(-(ulonglong)(dVar16 < -1.0) & 0xbff0000000000000 |
                        ~-(ulonglong)(dVar16 < -1.0) & (ulonglong)dVar15));
  dVar16 = (double)FUN_144719204(dVar56 + dVar56,0x4076800000000000);
  dVar44 = (double)(~-(ulonglong)(dVar16 < 0.0) & (ulonglong)dVar16 |
                   (ulonglong)(dVar16 + 360.0) & -(ulonglong)(dVar16 < 0.0)) * 0.5;
  local_318 = dVar56;
  dVar16 = (double)FUN_144719204(dVar44 - dVar56,0x4076800000000000);
  dVar56 = (double)(~-(ulonglong)(dVar16 < 0.0) & (ulonglong)dVar16 |
                   (ulonglong)(dVar16 + 360.0) & -(ulonglong)(dVar16 < 0.0));
  dVar16 = (double)FUN_144719204(dVar15 - dVar56,0x4076800000000000);
  dVar16 = (double)(~-(ulonglong)(dVar16 < 0.0) & (ulonglong)dVar16 |
                   (ulonglong)(dVar16 + 360.0) & -(ulonglong)(dVar16 < 0.0));
  dVar16 = (double)(~-(ulonglong)(180.0 < dVar16) & (ulonglong)dVar16 |
                   (ulonglong)(dVar16 + -360.0) & -(ulonglong)(180.0 < dVar16));
  if (dVar16 <= dVar44) {
    if (dVar16 < -dVar44) {
      dVar15 = dVar56 - dVar44;
    }
  }
  else {
    dVar15 = dVar44 + dVar56;
  }
  pdVar13 = (double *)(lVar8 + lVar14);
  dVar15 = (double)FUN_144719204(dVar15);
  dVar15 = (double)(~-(ulonglong)(dVar15 < 0.0) & (ulonglong)dVar15 |
                   (ulonglong)(dVar15 + 360.0) & -(ulonglong)(dVar15 < 0.0));
  dVar15 = (double)(~-(ulonglong)(180.0 < dVar15) & (ulonglong)dVar15 |
                   (ulonglong)(dVar15 + -360.0) & -(ulonglong)(180.0 < dVar15));
  bVar5 = (byte)param_4 ^ 1 | ABS(dVar15) <= 0.0001;
  pdVar7 = (double *)(ulonglong)CONCAT31((int3)(param_4 >> 8),bVar5);
  if (bVar5 == 0) {
    if (pdVar13[0x1b] <= local_318 && local_318 != pdVar13[0x1b]) {
LAB_142841399:
      if ((byte)param_4 != 0) {
        dVar16 = pdVar13[0x1b];
        dVar56 = dVar15 + dVar16;
        if (local_318 < dVar56) {
          dVar15 = local_318 - dVar16;
          if (dVar15 <= 0.0001) goto LAB_14284144c;
          dVar56 = dVar16 + dVar15;
        }
        pdVar13[0x1b] = dVar56;
      }
      dVar16 = dVar46 * dVar51 - dVar45 * dVar47;
      dVar45 = local_2f8 * dVar45 - dVar17 * dVar46;
      dVar46 = dVar47 * dVar17 - dVar51 * local_2f8;
      dVar17 = dVar16 * dVar16 + dVar46 * dVar46 + dVar45 * dVar45;
      if (0.0 < dVar17) {
        if (9.99999993922529e-09 < dVar17) {
          dVar17 = 1.0 / SQRT(dVar17);
          dVar46 = dVar46 * dVar17;
          dVar45 = dVar45 * dVar17;
          dVar16 = dVar16 * dVar17;
        }
        dVar17 = sin(dVar15 * 0.5);
        dVar56 = cos(dVar15 * 0.5);
        auVar28 = _DAT_149934d80;
        dVar46 = dVar46 * dVar17;
        dVar45 = dVar45 * dVar17;
        dVar16 = dVar16 * dVar17;
        dVar17 = *pdVar13;
        dVar15 = pdVar13[1];
        dVar47 = pdVar13[2];
        dVar51 = pdVar13[3];
        dVar44 = dVar15 * dVar16 * -1.0 + dVar47 * dVar45 + dVar46 * dVar51 * 1.0 + dVar17 * dVar56;
        dVar26 = dVar17 * dVar16 * 1.0 + dVar51 * dVar45 + dVar46 * dVar47 * -1.0 + dVar15 * dVar56;
        dVar27 = dVar51 * dVar16 * 1.0 +
                 ((dVar46 * dVar15 * 1.0 + dVar56 * dVar47) - dVar17 * dVar45);
        dVar17 = dVar47 * dVar16 * -1.0 +
                 ((dVar46 * dVar17 * -1.0 + dVar56 * dVar51) - dVar15 * dVar45);
        dVar45 = dVar27 * dVar27 + dVar44 * dVar44;
        dVar15 = dVar17 * dVar17 + dVar26 * dVar26;
        auVar53._0_8_ = dVar45 + dVar15;
        auVar53._8_8_ = dVar45 + dVar15;
        auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar53._8_8_);
        auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar53._0_8_);
        auVar32 = sqrtpd(auVar53,auVar53);
        uVar40 = (undefined4)DAT_149934d80;
        uVar41 = DAT_149934d80._4_4_;
        uVar42 = DAT_149934d80._8_4_;
        uVar43 = DAT_149934d80._12_4_;
        auVar32 = divpd(_DAT_149934d80,auVar32);
        auVar23._0_8_ = auVar32._0_8_ * dVar27;
        auVar23._8_8_ = auVar32._8_8_ * dVar17;
        auVar33 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar23,auVar33);
        *pdVar13 = (double)((ulonglong)(dVar44 * auVar32._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar53._0_8_));
        pdVar13[1] = (double)((ulonglong)(dVar26 * auVar32._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar53._8_8_));
        *(undefined1 (*) [16])(pdVar13 + 2) = auVar33;
        uVar4 = extraout_RAX;
        if (0 < (int)param_2) {
          FUN_1449437a2(pdVar13,local_178,*param_1 + (ulonglong)param_2 * 0xe0 + -0xe0);
          pdVar9 = local_178;
          pdVar7 = pdVar13 + 0xc;
          for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
            *pdVar7 = *pdVar9;
            pdVar9 = pdVar9 + 1;
            pdVar7 = pdVar7 + 1;
          }
          dVar17 = pdVar13[0xc];
          dVar45 = pdVar13[0xd];
          dVar15 = pdVar13[0xe];
          dVar46 = pdVar13[0xf];
          dVar47 = dVar15 * dVar15 + dVar17 * dVar17;
          dVar51 = dVar46 * dVar46 + dVar45 * dVar45;
          auVar34._0_8_ = dVar47 + dVar51;
          auVar34._8_8_ = dVar47 + dVar51;
          auVar32._8_8_ = -(ulonglong)(1e-08 <= auVar34._8_8_);
          auVar32._0_8_ = -(ulonglong)(1e-08 <= auVar34._0_8_);
          auVar33 = sqrtpd(auVar34,auVar34);
          auVar33 = divpd(auVar28,auVar33);
          auVar28._0_8_ = auVar33._0_8_ * dVar15;
          auVar28._8_8_ = auVar33._8_8_ * dVar46;
          auVar28 = blendvpd(_DAT_149935300,auVar28,auVar32);
          pdVar13[0xc] = (double)((ulonglong)(dVar17 * auVar33._0_8_) &
                                 -(ulonglong)(1e-08 <= auVar34._0_8_));
          pdVar13[0xd] = (double)((ulonglong)(dVar45 * auVar33._8_8_) &
                                 -(ulonglong)(1e-08 <= auVar34._8_8_));
          *(undefined1 (*) [16])(pdVar13 + 0xe) = auVar28;
          pdVar7 = (double *)0x0;
          uVar4 = uVar11;
        }
        uVar10 = CONCAT71((int7)((ulonglong)pdVar9 >> 8),1);
        if ((int)param_2 < (int)(uVar11 - 1)) {
          dVar17 = *pdVar13;
          dVar45 = pdVar13[1];
          auVar28 = *(undefined1 (*) [16])(pdVar13 + 2);
          auVar33 = *(undefined1 (*) [16])(pdVar13 + 10);
          lVar8 = ~uVar12 + uVar11;
          lVar14 = lVar14 + 400;
          auVar53 = *(undefined1 (*) [16])(pdVar13 + 8);
          dVar15 = pdVar13[4];
          dVar46 = pdVar13[5];
          dVar47 = pdVar13[6];
          dVar51 = pdVar13[7];
          do {
            lVar3 = *param_1;
            pdVar13 = (double *)(lVar3 + -0x50 + lVar14);
            dVar16 = *pdVar13;
            dVar56 = pdVar13[1];
            pdVar13 = (double *)(lVar3 + -0x40 + lVar14);
            dVar44 = *pdVar13;
            dVar26 = pdVar13[1];
            pauVar1 = (undefined1 (*) [16])(lVar3 + -0x30 + lVar14);
            local_2e8 = *pauVar1;
            pdVar13 = (double *)(lVar3 + -0x20 + lVar14);
            local_2d8 = *pdVar13;
            dStack_2d0 = pdVar13[1];
            local_2b8 = *(undefined1 (*) [16])(lVar3 + -0x10 + lVar14);
            local_2c8 = *(undefined1 (*) [16])(lVar3 + lVar14);
            auVar32 = minpd(local_2b8,auVar53);
            auVar23 = minpd(local_2c8,auVar33);
            auVar19._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
            auVar19._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
            uVar2 = movmskpd((int)uVar4,auVar19);
            uVar4 = (ulonglong)uVar2;
            auVar24._8_8_ = -(ulonglong)(auVar23._8_8_ < 0.0);
            auVar24._0_8_ = -(ulonglong)(auVar23._0_8_ < 0.0);
            uVar6 = movmskpd((int)pdVar7,auVar24);
            dVar49 = auVar28._0_8_;
            dVar50 = auVar28._8_8_;
            local_318 = auVar53._0_8_;
            dStack_310 = auVar53._8_8_;
            dVar27 = auVar33._0_8_;
            dVar39 = auVar33._8_8_;
            local_2f8 = dVar47;
            dStack_2f0 = dVar51;
            if ((uVar6 & 0x3fffffff) == 0 && uVar2 == 0) {
              dVar55 = *(double *)*pauVar1 * local_318;
              dVar37 = *(double *)(*pauVar1 + 8) * dStack_310;
              local_2d8 = local_2d8 * dVar27;
              dStack_2d0 = dStack_2d0 * dVar39;
              dVar18 = dVar37 * dVar17 - dVar45 * dVar55;
              dVar38 = local_2d8 * dVar45 - dVar49 * dVar37;
              dVar52 = dVar55 * dVar49 - dVar17 * local_2d8;
              dVar48 = dStack_2d0 * dVar50 - dVar50 * dStack_2d0;
              dVar38 = dVar38 + dVar38;
              dVar52 = dVar52 + dVar52;
              dVar18 = dVar18 + dVar18;
              dVar48 = dVar48 + dVar48;
              dVar57 = dVar56 * dVar49 * -1.0 +
                       dVar44 * dVar45 + dVar17 * dVar26 * 1.0 + dVar50 * dVar16;
              dVar58 = dVar16 * dVar49 * 1.0 +
                       dVar26 * dVar45 + dVar17 * dVar44 * -1.0 + dVar50 * dVar56;
              auVar54._0_8_ =
                   dVar26 * dVar49 * 1.0 +
                   ((dVar17 * dVar56 * 1.0 + dVar50 * dVar44) - dVar45 * dVar16);
              auVar54._8_8_ =
                   dVar44 * dVar49 * -1.0 +
                   ((dVar17 * dVar16 * -1.0 + dVar50 * dVar26) - dVar45 * dVar56);
              uVar40 = 0;
              uVar41 = 0x3ff00000;
              uVar42 = 0;
              uVar43 = 0x3ff00000;
              dVar16 = dVar15 + (dVar18 * dVar45 - dVar49 * dVar52) + dVar50 * dVar38 + dVar55;
              dVar56 = dVar46 + (dVar38 * dVar49 - dVar18 * dVar17) + dVar50 * dVar52 + dVar37;
              dVar47 = dVar47 + (dVar52 * dVar17 - dVar45 * dVar38) + dVar50 * dVar18 + local_2d8;
              dVar51 = dVar51 + (dVar48 * dVar50 - dVar48 * dVar50) + dVar50 * dVar48 + dStack_2d0;
              auVar36._0_8_ = local_318 * (double)local_2b8._0_8_;
              auVar36._8_8_ = dStack_310 * (double)local_2b8._8_8_;
              local_308._8_8_ = dVar39 * (double)local_2c8._8_8_;
              local_308._0_8_ = dVar27 * (double)local_2c8._0_8_;
              pdVar7 = (double *)0x0;
              auVar33 = local_308;
              local_318 = dVar15;
              dStack_310 = dVar46;
              local_2e8 = auVar53;
            }
            else {
              dVar48 = dVar45 + dVar45;
              dVar52 = dVar49 + dVar49;
              dVar51 = dVar17 * (dVar17 + dVar17);
              dVar55 = (dVar17 + dVar17) * dVar50;
              local_1d8 = (dVar48 * dVar17 - dVar52 * dVar50) * dStack_310;
              dStack_1b0 = (dVar52 * dVar45 - dVar55) * dVar27;
              dStack_1d0 = ((double)CONCAT44(uVar43,uVar42) - (dVar49 * dVar52 + dVar51)) *
                           dStack_310;
              local_1b8 = (dVar48 * dVar50 + dVar17 * dVar52) * dVar27;
              dVar18 = (dVar48 * dVar17 + dVar52 * dVar50) * local_318;
              local_1c8 = (dVar52 * dVar45 + dVar55) * dStack_310;
              local_1f8._8_4_ = SUB84(dVar18,0);
              local_1f8._0_8_ =
                   ((double)CONCAT44(uVar41,uVar40) - (dVar49 * dVar52 + dVar45 * dVar48)) *
                   local_318;
              local_1f8._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
              local_1e8 = (dVar17 * dVar52 - dVar48 * dVar50) * local_318;
              uStack_1e0 = 0;
              local_1a8 = (1.0 - (dVar51 + dVar45 * dVar48)) * dVar27;
              local_308._8_8_ = dVar39 * (double)local_2c8._8_8_;
              local_308._0_8_ = dVar27 * (double)local_2c8._0_8_;
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              uStack_180 = 0x3ff0000000000000;
              dVar45 = dVar56 + dVar56;
              dVar51 = dVar44 + dVar44;
              dVar17 = dVar16 * (dVar16 + dVar16);
              local_228 = (1.0 - (dVar17 + dVar56 * dVar45)) * (double)local_2c8._0_8_;
              dVar27 = (dVar16 + dVar16) * dVar26;
              local_238 = (dVar45 * dVar26 + dVar16 * dVar51) * (double)local_2c8._0_8_;
              local_258 = (dVar45 * dVar16 - dVar51 * dVar26) * (double)local_2b8._8_8_;
              dStack_230 = (dVar51 * dVar56 - dVar27) * (double)local_2c8._0_8_;
              local_318 = local_318 * (double)local_2b8._0_8_;
              dStack_310 = dStack_310 * (double)local_2b8._8_8_;
              local_278 = (1.0 - (dVar44 * dVar51 + dVar56 * dVar45)) * (double)local_2b8._0_8_;
              dStack_250 = (1.0 - (dVar44 * dVar51 + dVar17)) * (double)local_2b8._8_8_;
              dStack_270 = (dVar45 * dVar16 + dVar51 * dVar26) * (double)local_2b8._0_8_;
              local_248 = (dVar51 * dVar56 + dVar27) * (double)local_2b8._8_8_;
              local_268 = (dVar16 * dVar51 - dVar45 * dVar26) * (double)local_2b8._0_8_;
              uStack_260 = 0;
              uStack_240 = 0;
              uStack_220 = 0;
              uStack_200 = 0x3ff0000000000000;
              local_2a8 = dVar16;
              dStack_2a0 = dVar56;
              local_218 = *(double *)*pauVar1;
              dStack_210 = *(double *)(*pauVar1 + 8);
              local_208 = local_2d8;
              local_198 = dVar15;
              dStack_190 = dVar46;
              local_188 = dVar47;
              FUN_1447fea8d(local_178,&local_278,local_1f8);
              auVar33 = local_308;
              auVar28 = _DAT_149934d80;
              dVar45 = local_178[2] * local_178[2] +
                       local_178[0] * local_178[0] + local_178[1] * local_178[1];
              dVar15 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
              dVar17 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
              uVar11 = -(ulonglong)(0.0 <= dVar45 + -9.99999993922529e-09);
              dVar45 = (double)(~uVar11 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar45)) & uVar11);
              uVar11 = -(ulonglong)(0.0 <= dVar15 + -9.99999993922529e-09);
              dVar15 = (double)(~uVar11 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar15)) & uVar11);
              uVar11 = -(ulonglong)(0.0 <= dVar17 + -9.99999993922529e-09);
              dVar17 = (double)(~uVar11 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar17)) & uVar11);
              auVar20._8_8_ = -(ulonglong)(0.0 <= dStack_310);
              auVar20._0_8_ = -(ulonglong)(0.0 <= local_318);
              auVar53 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar20);
              uVar11 = -(ulonglong)(0.0 <= local_308._0_8_);
              dVar46 = (double)(~uVar11 & 0xbff0000000000000 |
                               (ulonglong)((uint)(uVar11 >> 0x20) & 0x3ff00000) << 0x20);
              dVar47 = auVar53._0_8_;
              local_178[0] = local_178[0] * dVar45 * dVar47;
              local_178[1] = local_178[1] * dVar45 * dVar47;
              local_178[2] = dVar45 * local_178[2] * dVar47;
              dVar45 = auVar53._8_8_;
              local_148 = dVar15 * local_148 * dVar45;
              local_150 = local_150 * dVar15 * dVar45;
              local_158 = dVar45 * local_158 * dVar15;
              local_128 = dVar17 * local_128 * dVar46;
              local_130 = local_130 * dVar17 * dVar46;
              local_138 = dVar46 * local_138 * dVar17;
              uVar40 = (undefined4)DAT_149934d80;
              uVar41 = DAT_149934d80._4_4_;
              uVar42 = DAT_149934d80._8_4_;
              uVar43 = DAT_149934d80._12_4_;
              pdVar7 = &local_298;
              uVar4 = FUN_14481fd10(&local_298,local_178);
              dVar17 = local_288 * local_288 + local_298 * local_298;
              dVar45 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
              auVar29._0_8_ = dVar17 + dVar45;
              auVar29._8_8_ = dVar17 + dVar45;
              auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
              auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
              auVar53 = sqrtpd(auVar29,auVar29);
              auVar28 = divpd(auVar28,auVar53);
              auVar35._0_8_ = auVar28._0_8_ * local_288;
              auVar35._8_8_ = auVar28._8_8_ * dStack_280;
              auVar54 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar35,auVar21);
              dVar57 = (double)((ulonglong)(local_298 * auVar28._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_));
              dVar58 = (double)((ulonglong)(dStack_290 * auVar28._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_));
              dVar51 = 0.0;
              auVar36._8_8_ = dStack_310;
              auVar36._0_8_ = local_318;
              dVar16 = local_118;
              dVar56 = dStack_110;
              dVar47 = local_108;
            }
            pdVar13 = (double *)(lVar3 + -0x90 + lVar14);
            *pdVar13 = dVar16;
            pdVar13[1] = dVar56;
            pdVar13 = (double *)(lVar3 + -0x80 + lVar14);
            *pdVar13 = dVar47;
            pdVar13[1] = dVar51;
            *(undefined1 (*) [16])(lVar3 + -0x70 + lVar14) = auVar36;
            *(undefined1 (*) [16])(lVar3 + -0x60 + lVar14) = auVar33;
            dVar15 = auVar54._0_8_;
            dVar46 = auVar54._8_8_;
            dVar17 = dVar15 * dVar15 + dVar57 * dVar57;
            dVar45 = dVar46 * dVar46 + dVar58 * dVar58;
            auVar25._0_8_ = dVar17 + dVar45;
            auVar25._8_8_ = dVar17 + dVar45;
            auVar22._8_8_ = -(ulonglong)(1e-08 <= auVar25._8_8_);
            auVar22._0_8_ = -(ulonglong)(1e-08 <= auVar25._0_8_);
            auVar28 = sqrtpd(auVar25,auVar25);
            auVar30._4_4_ = uVar41;
            auVar30._0_4_ = uVar40;
            auVar30._12_4_ = uVar43;
            auVar30._8_4_ = uVar42;
            auVar28 = divpd(auVar30,auVar28);
            auVar31._0_8_ = auVar28._0_8_ * dVar15;
            auVar31._8_8_ = auVar28._8_8_ * dVar46;
            dVar17 = (double)((ulonglong)(dVar57 * auVar28._0_8_) &
                             -(ulonglong)(1e-08 <= auVar25._0_8_));
            dVar45 = (double)((ulonglong)(dVar58 * auVar28._8_8_) &
                             -(ulonglong)(1e-08 <= auVar25._8_8_));
            auVar28 = blendvpd(_DAT_149935300,auVar31,auVar22);
            pdVar13 = (double *)(lVar3 + -0xb0 + lVar14);
            *pdVar13 = dVar17;
            pdVar13[1] = dVar45;
            *(undefined1 (*) [16])(lVar3 + -0xa0 + lVar14) = auVar28;
            lVar14 = lVar14 + 0xe0;
            lVar8 = lVar8 + -1;
            auVar53 = auVar36;
            dVar15 = dVar16;
            dVar46 = dVar56;
          } while (lVar8 != 0);
        }
        goto LAB_14284144e;
      }
    }
  }
  else if (0.0001 < ABS(dVar15)) goto LAB_142841399;
LAB_14284144c:
  uVar10 = 0;
LAB_14284144e:
  if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 142841fe3 FUN_142841fe3 body=55 status=ok
// SIG undefined FUN_142841fe3(void)

void FUN_142841fe3(void)

{
  undefined8 uVar1;
  
  if (DAT_14c964a70 == 0) {
    uVar1 = FUN_140f6e891();
    DAT_14c964a70 = FUN_14171c317(FUN_146277657,uVar1,L"EConstraintType");
  }
  return;
}



// FUNCTION 14284201a FUN_14284201a body=55 status=ok
// SIG undefined FUN_14284201a(void)

void FUN_14284201a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c964aa0 == 0) {
    uVar1 = FUN_140f6e891();
    DAT_14c964aa0 = FUN_14171c317(FUN_146277717,uVar1,L"ETransformConstraintType");
  }
  return;
}



// FUNCTION 142842051 FUN_142842051 body=55 status=ok
// SIG undefined FUN_142842051(void)

void FUN_142842051(void)

{
  undefined8 uVar1;
  
  if (DAT_14c964b18 == 0) {
    uVar1 = FUN_140f6e891();
    DAT_14c964b18 = FUN_14171c317(FUN_14171c8fe,uVar1,L"EEulerRotationOrder");
  }
  return;
}



// FUNCTION 142842088 FUN_142842088 body=578 status=ok
// SIG undefined FUN_142842088(void)

void FUN_142842088(double *param_1,float param_2,float param_3,float param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  
  if ((0.0001 < param_2) && (0.0001 <= ABS(1.0 - param_3))) {
    dVar1 = param_5[2] - param_1[2];
    dVar7 = param_5[1] - param_1[1];
    dVar2 = *param_5 - *param_1;
    fVar9 = (float)SQRT(dVar1 * dVar1 + dVar2 * dVar2 + dVar7 * dVar7);
    dVar3 = DAT_14c8464f0;
    dVar4 = DAT_14c8464e8;
    dVar6 = DAT_14c8464e0;
    if (1e-08 < fVar9) {
      dVar6 = (double)(1.0 / fVar9);
      dVar3 = dVar1 * dVar6;
      dVar4 = dVar7 * dVar6;
      dVar6 = dVar2 * dVar6;
    }
    fVar8 = 1.0;
    if (param_3 <= 1.0) {
      fVar8 = param_3;
    }
    fVar8 = (1.0 - fVar8) * param_2;
    if (0.0001 < fVar8) {
      fVar5 = fVar9 - (param_2 - fVar8);
      if (0.0001 < fVar5) {
        fVar5 = expf(-fVar5 / fVar8);
        fVar8 = (1.0 - fVar5) * fVar8 + (param_2 - fVar8);
        fVar5 = param_4;
        if (1.0 <= param_4) {
          fVar5 = 1.0;
        }
        if (fVar5 <= 0.0) {
          fVar5 = 0.0;
        }
        if (fVar5 < 1.0) {
          if (param_2 <= fVar9) {
            fVar9 = param_2;
          }
          fVar8 = param_4 * (fVar8 - fVar9) + fVar9;
        }
        dVar7 = (double)fVar8;
        dVar1 = param_1[2];
        dVar2 = param_1[1];
        *param_5 = dVar6 * dVar7 + *param_1;
        param_5[1] = dVar4 * dVar7 + dVar2;
        param_5[2] = dVar3 * dVar7 + dVar1;
      }
    }
  }
  return;
}



// FUNCTION 142842408 FUN_142842408 body=36 status=ok
// SIG undefined FUN_142842408(void)

undefined8 FUN_142842408(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14284242c FUN_14284242c body=549 status=ok
// SIG undefined FUN_14284242c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14284242c(void)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimationCore",0,0,&PTR_FUN_149eb78d0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimationCore",0,0,&PTR_FUN_149eb79e0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/AnimationCore",0,0,&PTR_FUN_149eb7e70);
  local_58 = 0x8000000149eb7ee8;
  local_44 = 0xd;
  local_50 = FUN_14577453c();
  local_4c = 1;
  FUN_14171c728(&DAT_14c9649b8,&local_58);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/AnimationCore",&PTR_FUN_149eb8330,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimationCore",0,0,&PTR_FUN_149eb83c0);
  ppuStack_70 = &PTR_FUN_149eb95a0;
  uStack_68 = 2;
  local_78 = 10;
  FUN_14282b410(L"/Script/AnimationCore",0,0,&PTR_FUN_149eb95e0);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_149eb9960;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimationCore",0,0,&PTR_FUN_149eb9980);
  _DAT_14c964b60 = 0;
  _DAT_14c964b68 = 0;
  _DAT_14c964b50 = 0;
  _DAT_14c964b58 = 0;
  DAT_14c964b40 = 0;
  DAT_14c964b48 = 0;
  _DAT_14c964b70 = 0x3ff0000000000000;
  _DAT_14c964b78 = 0x3ff0000000000000;
  _DAT_14c964b80 = 0x3ff0000000000000;
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimationCore",0,0,&PTR_FUN_149eb9a10);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/AnimationCore",0,0,&PTR_FUN_149eb9b40);
  _DAT_14c964bd0 = 0;
  _DAT_14c964bc0 = 0;
  uRam000000014c964bc8 = 0;
  _DAT_14c964be0 = DAT_14c8463d0;
  uRam000000014c964be8 = DAT_14c8463d8;
  _DAT_14c964bf0 = (undefined4)DAT_14c8463e0;
  uRam000000014c964bf4 = DAT_14c8463e0._4_4_;
  uRam000000014c964bf8 = (undefined4)DAT_14c8463e8;
  uRam000000014c964bfc = DAT_14c8463e8._4_4_;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142842654 FUN_142842654 body=57 status=ok
// SIG undefined FUN_142842654(void)

void FUN_142842654(void)

{
  undefined8 uVar1;
  
  if (DAT_14c964c28 == 0) {
    uVar1 = FUN_145c5ab6f();
    DAT_14c964c28 = FUN_14171c317(FUN_146277e85,uVar1,L"EControllerHand");
  }
  return;
}



// FUNCTION 14284268d FUN_14284268d body=57 status=ok
// SIG undefined FUN_14284268d(void)

void FUN_14284268d(void)

{
  undefined8 uVar1;
  
  if (DAT_14c964c58 == 0) {
    uVar1 = FUN_145c5ab6f();
    DAT_14c964c58 = FUN_14171c317(FUN_14171c9ee,uVar1,L"ETouchIndex");
  }
  return;
}



// FUNCTION 1428426c6 FUN_1428426c6 body=57 status=ok
// SIG undefined FUN_1428426c6(void)

void FUN_1428426c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14c964c70 == 0) {
    uVar1 = FUN_145c5ab6f();
    DAT_14c964c70 = FUN_14171c317(FUN_146277ee6,uVar1,L"EConsoleForGamepadLabels");
  }
  return;
}



// FUNCTION 1428426ff FUN_1428426ff body=57 status=ok
// SIG undefined FUN_1428426ff(void)

void FUN_1428426ff(void)

{
  undefined8 uVar1;
  
  if (DAT_14c964c88 == 0) {
    uVar1 = FUN_145c5ab6f();
    DAT_14c964c88 = FUN_14171c317(FUN_146277f15,uVar1,L"ETouchType");
  }
  return;
}



// FUNCTION 142842738 FUN_142842738 body=59 status=ok
// SIG undefined FUN_142842738(void)

void FUN_142842738(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c966e78;
  if (DAT_14c966e78 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c966e78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842773 FUN_142842773 body=59 status=ok
// SIG undefined FUN_142842773(void)

void FUN_142842773(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964cc0;
  if (DAT_14c964cc0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964cc0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001428427a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428427ae FUN_1428427ae body=59 status=ok
// SIG undefined FUN_1428427ae(void)

void FUN_1428427ae(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964cd8;
  if (DAT_14c964cd8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964cd8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001428427de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428427e9 FUN_1428427e9 body=59 status=ok
// SIG undefined FUN_1428427e9(void)

void FUN_1428427e9(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964cf0;
  if (DAT_14c964cf0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964cf0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842819. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842824 FUN_142842824 body=59 status=ok
// SIG undefined FUN_142842824(void)

void FUN_142842824(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964d08;
  if (DAT_14c964d08 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964d08 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14284285f FUN_14284285f body=59 status=ok
// SIG undefined FUN_14284285f(void)

void FUN_14284285f(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964d20;
  if (DAT_14c964d20 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964d20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014284288f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14284289a FUN_14284289a body=59 status=ok
// SIG undefined FUN_14284289a(void)

void FUN_14284289a(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964d38;
  if (DAT_14c964d38 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964d38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001428428ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428428d5 FUN_1428428d5 body=59 status=ok
// SIG undefined FUN_1428428d5(void)

void FUN_1428428d5(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c966ea8;
  if (DAT_14c966ea8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c966ea8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842905. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842910 FUN_142842910 body=59 status=ok
// SIG undefined FUN_142842910(void)

void FUN_142842910(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c966fb0;
  if (DAT_14c966fb0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c966fb0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14284294b FUN_14284294b body=59 status=ok
// SIG undefined FUN_14284294b(void)

void FUN_14284294b(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c966fc8;
  if (DAT_14c966fc8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c966fc8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014284297b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842986 FUN_142842986 body=59 status=ok
// SIG undefined FUN_142842986(void)

void FUN_142842986(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964d50;
  if (DAT_14c964d50 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964d50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001428429b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428429c1 FUN_1428429c1 body=59 status=ok
// SIG undefined FUN_1428429c1(void)

void FUN_1428429c1(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964d68;
  if (DAT_14c964d68 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964d68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001428429f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428429fc FUN_1428429fc body=59 status=ok
// SIG undefined FUN_1428429fc(void)

void FUN_1428429fc(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c966f50;
  if (DAT_14c966f50 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c966f50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842a37 FUN_142842a37 body=59 status=ok
// SIG undefined FUN_142842a37(void)

void FUN_142842a37(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964d80;
  if (DAT_14c964d80 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964d80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842a67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842a72 FUN_142842a72 body=59 status=ok
// SIG undefined FUN_142842a72(void)

void FUN_142842a72(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964d98;
  if (DAT_14c964d98 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964d98 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842aa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842aad FUN_142842aad body=59 status=ok
// SIG undefined FUN_142842aad(void)

void FUN_142842aad(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964db0;
  if (DAT_14c964db0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964db0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842add. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842ae8 FUN_142842ae8 body=59 status=ok
// SIG undefined FUN_142842ae8(void)

void FUN_142842ae8(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964dc8;
  if (DAT_14c964dc8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964dc8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842b23 FUN_142842b23 body=59 status=ok
// SIG undefined FUN_142842b23(void)

void FUN_142842b23(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964de0;
  if (DAT_14c964de0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964de0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842b53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842b5e FUN_142842b5e body=59 status=ok
// SIG undefined FUN_142842b5e(void)

void FUN_142842b5e(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964df8;
  if (DAT_14c964df8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964df8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842b8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842b99 FUN_142842b99 body=59 status=ok
// SIG undefined FUN_142842b99(void)

void FUN_142842b99(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964e10;
  if (DAT_14c964e10 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964e10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842bc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842bd4 FUN_142842bd4 body=59 status=ok
// SIG undefined FUN_142842bd4(void)

void FUN_142842bd4(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964e28;
  if (DAT_14c964e28 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964e28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842c0f FUN_142842c0f body=59 status=ok
// SIG undefined FUN_142842c0f(void)

void FUN_142842c0f(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964e40;
  if (DAT_14c964e40 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964e40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842c3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842c4a FUN_142842c4a body=59 status=ok
// SIG undefined FUN_142842c4a(void)

void FUN_142842c4a(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964e58;
  if (DAT_14c964e58 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964e58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842c7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842c85 FUN_142842c85 body=59 status=ok
// SIG undefined FUN_142842c85(void)

void FUN_142842c85(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964e70;
  if (DAT_14c964e70 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964e70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842cb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842cc0 FUN_142842cc0 body=59 status=ok
// SIG undefined FUN_142842cc0(void)

void FUN_142842cc0(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964e88;
  if (DAT_14c964e88 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964e88 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842cfb FUN_142842cfb body=59 status=ok
// SIG undefined FUN_142842cfb(void)

void FUN_142842cfb(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964ea0;
  if (DAT_14c964ea0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964ea0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842d2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842d36 FUN_142842d36 body=59 status=ok
// SIG undefined FUN_142842d36(void)

void FUN_142842d36(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964eb8;
  if (DAT_14c964eb8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964eb8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842d66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842d71 FUN_142842d71 body=59 status=ok
// SIG undefined FUN_142842d71(void)

void FUN_142842d71(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964ed0;
  if (DAT_14c964ed0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964ed0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842da1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842dac FUN_142842dac body=59 status=ok
// SIG undefined FUN_142842dac(void)

void FUN_142842dac(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c966f68;
  if (DAT_14c966f68 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c966f68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842de7 FUN_142842de7 body=59 status=ok
// SIG undefined FUN_142842de7(void)

void FUN_142842de7(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964ee8;
  if (DAT_14c964ee8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964ee8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842e17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842e22 FUN_142842e22 body=59 status=ok
// SIG undefined FUN_142842e22(void)

void FUN_142842e22(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964f00;
  if (DAT_14c964f00 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964f00 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842e52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842e5d FUN_142842e5d body=59 status=ok
// SIG undefined FUN_142842e5d(void)

void FUN_142842e5d(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964f18;
  if (DAT_14c964f18 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964f18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842e8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842e98 FUN_142842e98 body=59 status=ok
// SIG undefined FUN_142842e98(void)

void FUN_142842e98(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964f30;
  if (DAT_14c964f30 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964f30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842ed3 FUN_142842ed3 body=59 status=ok
// SIG undefined FUN_142842ed3(void)

void FUN_142842ed3(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964f48;
  if (DAT_14c964f48 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964f48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842f03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842f0e FUN_142842f0e body=59 status=ok
// SIG undefined FUN_142842f0e(void)

void FUN_142842f0e(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964f60;
  if (DAT_14c964f60 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964f60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842f3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842f49 FUN_142842f49 body=59 status=ok
// SIG undefined FUN_142842f49(void)

void FUN_142842f49(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964f78;
  if (DAT_14c964f78 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964f78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842f79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842f84 FUN_142842f84 body=59 status=ok
// SIG undefined FUN_142842f84(void)

void FUN_142842f84(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964f90;
  if (DAT_14c964f90 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964f90 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842fbf FUN_142842fbf body=59 status=ok
// SIG undefined FUN_142842fbf(void)

void FUN_142842fbf(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964fa8;
  if (DAT_14c964fa8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964fa8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142842fef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142842ffa FUN_142842ffa body=59 status=ok
// SIG undefined FUN_142842ffa(void)

void FUN_142842ffa(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964fc0;
  if (DAT_14c964fc0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964fc0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014284302a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142843035 FUN_142843035 body=59 status=ok
// SIG undefined FUN_142843035(void)

void FUN_142843035(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c966f98;
  if (DAT_14c966f98 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c966f98 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142843065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142843070 FUN_142843070 body=59 status=ok
// SIG undefined FUN_142843070(void)

void FUN_142843070(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964fd8;
  if (DAT_14c964fd8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964fd8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001428430a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428430ab FUN_1428430ab body=59 status=ok
// SIG undefined FUN_1428430ab(void)

void FUN_1428430ab(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c966ed8;
  if (DAT_14c966ed8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c966ed8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001428430db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428430e6 FUN_1428430e6 body=59 status=ok
// SIG undefined FUN_1428430e6(void)

void FUN_1428430e6(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c966f08;
  if (DAT_14c966f08 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c966f08 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142843116. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142843121 FUN_142843121 body=59 status=ok
// SIG undefined FUN_142843121(void)

void FUN_142843121(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c964ff0;
  if (DAT_14c964ff0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c964ff0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142843151. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14284315c FUN_14284315c body=59 status=ok
// SIG undefined FUN_14284315c(void)

void FUN_14284315c(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c965008;
  if (DAT_14c965008 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c965008 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014284318c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142843197 FUN_142843197 body=59 status=ok
// SIG undefined FUN_142843197(void)

void FUN_142843197(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c965020;
  if (DAT_14c965020 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c965020 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001428431c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428431d2 FUN_1428431d2 body=59 status=ok
// SIG undefined FUN_1428431d2(void)

void FUN_1428431d2(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c965038;
  if (DAT_14c965038 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c965038 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142843202. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14284320d FUN_14284320d body=59 status=ok
// SIG undefined FUN_14284320d(void)

void FUN_14284320d(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c965050;
  if (DAT_14c965050 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c965050 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014284323d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142843248 FUN_142843248 body=59 status=ok
// SIG undefined FUN_142843248(void)

void FUN_142843248(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c965068;
  if (DAT_14c965068 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c965068 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142843278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142843283 FUN_142843283 body=59 status=ok
// SIG undefined FUN_142843283(void)

void FUN_142843283(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c965080;
  if (DAT_14c965080 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c965080 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001428432b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428432be FUN_1428432be body=59 status=ok
// SIG undefined FUN_1428432be(void)

void FUN_1428432be(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c965098;
  if (DAT_14c965098 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c965098 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001428432ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428432f9 FUN_1428432f9 body=59 status=ok
// SIG undefined FUN_1428432f9(void)

void FUN_1428432f9(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c9650b0;
  if (DAT_14c9650b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c9650b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142843329. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142843334 FUN_142843334 body=59 status=ok
// SIG undefined FUN_142843334(void)

void FUN_142843334(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c9650c8;
  if (DAT_14c9650c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c9650c8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142843364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14284336f FUN_14284336f body=59 status=ok
// SIG undefined FUN_14284336f(void)

void FUN_14284336f(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c9650e0;
  if (DAT_14c9650e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c9650e0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014284339f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428433aa FUN_1428433aa body=59 status=ok
// SIG undefined FUN_1428433aa(void)

void FUN_1428433aa(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c9650f8;
  if (DAT_14c9650f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c9650f8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001428433da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428433e5 FUN_1428433e5 body=59 status=ok
// SIG undefined FUN_1428433e5(void)

void FUN_1428433e5(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c965110;
  if (DAT_14c965110 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c965110 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142843415. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142843420 FUN_142843420 body=59 status=ok
// SIG undefined FUN_142843420(void)

void FUN_142843420(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c965128;
  if (DAT_14c965128 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c965128 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142843450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14284345b FUN_14284345b body=59 status=ok
// SIG undefined FUN_14284345b(void)

void FUN_14284345b(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c965140;
  if (DAT_14c965140 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c965140 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014284348b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142843496 FUN_142843496 body=59 status=ok
// SIG undefined FUN_142843496(void)

void FUN_142843496(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c965158;
  if (DAT_14c965158 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c965158 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001428434c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428434d1 FUN_1428434d1 body=59 status=ok
// SIG undefined FUN_1428434d1(void)

void FUN_1428434d1(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c965170;
  if (DAT_14c965170 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c965170 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142843501. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14284350c FUN_14284350c body=59 status=ok
// SIG undefined FUN_14284350c(void)

void FUN_14284350c(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c966ef0;
  if (DAT_14c966ef0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c966ef0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014284353c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142843547 FUN_142843547 body=59 status=ok
// SIG undefined FUN_142843547(void)

void FUN_142843547(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c966fe0;
  if (DAT_14c966fe0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c966fe0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142843577. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142843582 FUN_142843582 body=59 status=ok
// SIG undefined FUN_142843582(void)

void FUN_142843582(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c966ec0;
  if (DAT_14c966ec0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c966ec0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001428435b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428435bd FUN_1428435bd body=59 status=ok
// SIG undefined FUN_1428435bd(void)

void FUN_1428435bd(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c966f38;
  if (DAT_14c966f38 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c966f38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001428435ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428435f8 FUN_1428435f8 body=59 status=ok
// SIG undefined FUN_1428435f8(void)

void FUN_1428435f8(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c966f20;
  if (DAT_14c966f20 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c966f20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142843628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142843633 FUN_142843633 body=59 status=ok
// SIG undefined FUN_142843633(void)

void FUN_142843633(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c965188;
  if (DAT_14c965188 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c965188 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142843663. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14284366e FUN_14284366e body=59 status=ok
// SIG undefined FUN_14284366e(void)

void FUN_14284366e(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c9651a0;
  if (DAT_14c9651a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c9651a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014284369e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428436a9 FUN_1428436a9 body=59 status=ok
// SIG undefined FUN_1428436a9(void)

void FUN_1428436a9(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c9651b8;
  if (DAT_14c9651b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c9651b8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001428436d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428436e4 FUN_1428436e4 body=59 status=ok
// SIG undefined FUN_1428436e4(void)

void FUN_1428436e4(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c9651d0;
  if (DAT_14c9651d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c9651d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142843714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14284371f FUN_14284371f body=59 status=ok
// SIG undefined FUN_14284371f(void)

void FUN_14284371f(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c9651e8;
  if (DAT_14c9651e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c9651e8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014284374f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}


