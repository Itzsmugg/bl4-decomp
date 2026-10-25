// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1460458e6 FUN_1460458e6 body=284 status=ok
// SIG undefined FUN_1460458e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460458e6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb06990) {
    FUN_144b3d300(&DAT_14cb06990);
    if (DAT_14cb06990 == -1) {
      FUN_146045a02();
      FUN_140db5666(&DAT_14cb068e8,0,&DAT_14cb06880,L"FSimpleElementHitProxyPS",
                    L"/Engine/Private/SimpleElementHitProxyPixelShader.usf",L"Main",3,1,
                    FUN_147d14606,FUN_147d145de,&LAB_147d145c6,&LAB_147d145c2,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe8,0);
      _DAT_14cb068e8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1436b0b5c);
      _Init_thread_footer(&DAT_14cb06990);
    }
  }
  return &DAT_14cb068e8;
}



// FUNCTION 146045a02 FUN_146045a02 body=211 status=ok
// SIG undefined FUN_146045a02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146045a02(void)

{
  if ((DAT_14cb068e7 & 2) == 0) {
    DAT_14cb068e7 = DAT_14cb068e7 | 2;
    _DAT_14cb06888 = L"FSimpleElementHitProxyPS";
    _DAT_14cb068a0 = FUN_146826540;
    _DAT_14cb068a8 = FUN_146825d77;
    _DAT_14cb068b0 = FUN_146825fd6;
    _DAT_14cb068b8 = FUN_1407e02ea;
    _DAT_14cb068c0 = FUN_146826273;
    _DAT_14cb06898 = FUN_147d14594;
    _DAT_14cb068d8 = 0xffffffff000000e8;
    _DAT_14cb068e0 = 8;
    DAT_14cb068e4 = 0;
    _DAT_14cb068c8 = &LAB_147d145be;
    FUN_146045b52();
    FUN_146045ad6();
    FUN_1407e00cc(&DAT_14cb06880);
  }
  return &DAT_14cb06880;
}



// FUNCTION 146045ad6 FUN_146045ad6 body=123 status=ok
// SIG undefined FUN_146045ad6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146045ad6(void)

{
  _DAT_14cb076a0 = L"BASE";
  DAT_14cb076ca = 4;
  _DAT_14cb076a8 = FUN_140b35ae4();
  _DAT_14cb076b0 = DAT_14cb06890;
  _DAT_14cb076b8 = &LAB_14682652b;
  DAT_14cb06890 = &DAT_14cb076a0;
  DAT_14cb068e5 = DAT_14cb068e5 + '\x01';
  _DAT_14cb076c0 = 0x100000000;
  if (*(char *)(_DAT_14cb076a8 + 100) != '\0') {
    DAT_14cb068e6 = DAT_14cb068e6 + '\x01';
  }
  return;
}



// FUNCTION 146045b52 FUN_146045b52 body=216 status=ok
// SIG undefined FUN_146045b52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146045b52(void)

{
  _DAT_14cb07380 = L"InTextureSampler";
  DAT_14cb073aa = FUN_140850cc5();
  _DAT_14cb07388 = FUN_140fb78d0();
  _DAT_14cb07398 = &LAB_14682652b;
  _DAT_14cb073a0 = 0x1000000e4;
  _DAT_14cb073a8 = 0;
  _DAT_14cb07390 = DAT_14cb06890;
  DAT_14cb06890 = &DAT_14cb07380;
  _DAT_14cb07350 = L"InTexture";
  DAT_14cb0737a = FUN_140850cc5();
  _DAT_14cb07358 = FUN_140fb78d0();
  _DAT_14cb07368 = &LAB_14682652b;
  _DAT_14cb07370 = 0x1000000e0;
  _DAT_14cb07378 = 0;
  _DAT_14cb07360 = DAT_14cb06890;
  DAT_14cb06890 = &DAT_14cb07350;
  return;
}



// FUNCTION 146045c36 FUN_146045c36 body=266 status=ok
// SIG undefined FUN_146045c36(void)

undefined8 * FUN_146045c36(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14130c032();
  *param_1 = &PTR_FUN_14abf11b0;
  param_1[5] = &PTR_LAB_14abf14e0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x84) = 0xffff;
  *(undefined4 *)(param_1 + 0x11) = 0;
  FUN_1400b22c2(&local_28,&DAT_14a589630);
  if (param_1 + 6 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_28;
    *(undefined4 *)(param_1 + 7) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_1c;
  }
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 3;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x84) = 0xffff;
  *(undefined4 *)(param_1 + 0x11) = 0xbf800000;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf8;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffc0 | 8;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146045d4c FUN_146045d4c body=267 status=ok
// SIG undefined FUN_146045d4c(void)

undefined8 * FUN_146045d4c(undefined8 *param_1)

{
  FUN_1461b4e4a();
  *param_1 = &PTR_FUN_14b107370;
  param_1[0x72] = &PTR_FUN_14b1079b0;
  param_1[0x73] = &PTR_FUN_14b107a20;
  param_1[0x74] = &PTR_FUN_14b107a50;
  param_1[0x75] = &PTR_FUN_14b107a80;
  param_1[0x76] = &PTR_FUN_14b107af0;
  param_1[0x77] = &PTR_FUN_14b107b20;
  param_1[0x78] = &PTR_FUN_14b107b60;
  param_1[0x79] = &PTR_FUN_14b107b78;
  param_1[0x7a] = &PTR_FUN_14b107b90;
  param_1[0x7b] = &PTR_FUN_14b107be0;
  param_1[0x7c] = &PTR_FUN_14b107c00;
  param_1[0x7d] = &PTR_FUN_14b107ca0;
  param_1[0x26b] = &PTR_FUN_14b107cc0;
  FUN_1411c3dfa(param_1 + 0x26e);
  param_1[0x26e] = &PTR_FUN_14b10dd20;
  param_1[0x2b2] = 0xffffffff00000001;
  param_1[0x2b3] = 0;
  param_1[0x2b4] = 0;
  return param_1;
}



// FUNCTION 146045e58 FUN_146045e58 body=37 status=ok
// SIG undefined FUN_146045e58(void)

void FUN_146045e58(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000146045e79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 146045e7e FUN_146045e7e body=108 status=ok
// SIG undefined FUN_146045e7e(void)

void FUN_146045e7e(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar1 != 0) {
    FUN_1447683ea(local_20,&DAT_14cbdee00,1);
    FUN_1403ca8ec(lVar1 + 0x3c0,local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146045eec FUN_146045eec body=394 status=ok
// SIG undefined FUN_146045eec(void)

void FUN_146045eec(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x30);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 0x180))(plVar2);
    if (lVar3 != 0) {
      local_98 = (undefined8 *)0x0;
      local_90 = 0;
      FUN_1446efa72(&local_98,0,3,0x10);
      local_90 = 3;
      *local_98 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_98[2] = lVar5;
      *local_98 = &PTR_FUN_14b9cc550;
      local_98[3] = param_1;
      local_98[4] = FUN_145d22740;
      *(undefined4 *)(local_98 + 5) = 0;
      uVar4 = FUN_144a88394(lVar3);
      local_88 = 0;
      local_80 = 0;
      FUN_14487d8d8(&local_88,&local_98);
      local_48 = 1;
      local_a0 = 0xbf800000;
      local_a8 = 0;
      FUN_1406f3fee(uVar4,param_1 + 0x2b0,&local_88,0x40400000);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      FUN_1449db362(&local_98);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_c8);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    FUN_145d22740(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146046086 FUN_146046086 body=40 status=ok
// SIG undefined FUN_146046086(void)

undefined8 FUN_146046086(undefined8 param_1,int param_2)

{
  FUN_1460460ae();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1460460ae FUN_1460460ae body=238 status=ok
// SIG undefined FUN_1460460ae(void)

void FUN_1460460ae(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc4df10;
  FUN_145936a30(param_1 + 0x2e);
  FUN_140fed6e2(param_1 + 0x2a);
  FUN_140fed6e2(param_1 + 0x26);
  FUN_140fed6e2(param_1 + 0x22);
  FUN_140fed6e2(param_1 + 0x1e);
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140fed60e(param_1);
  return;
}



// FUNCTION 14604619c FUN_14604619c body=292 status=ok
// SIG undefined FUN_14604619c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14604619c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e7b88) {
    FUN_144b3d300(&DAT_14c9e7b88);
    if (DAT_14c9e7b88 == -1) {
      FUN_14604640a();
      FUN_1460462c0();
      FUN_140db5666(&DAT_14c9e7ae0,0,&DAT_14c9e7a78,L"FInstanceCullingOcclusionQueryDebugPS",
                    L"/Engine/Private/InstanceCulling/InstanceCullingOcclusionQuery.usf",
                    L"DebugMainPS",3,1,FUN_1471d0718,FUN_1471d06b8,&LAB_1471d06a0,&LAB_1471d069c,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e9ec8);
      _DAT_14c9e7ae0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cddb1e);
      _Init_thread_footer(&DAT_14c9e7b88);
    }
  }
  return &DAT_14c9e7ae0;
}



// FUNCTION 1460462c0 FUN_1460462c0 body=205 status=ok
// SIG undefined FUN_1460462c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460462c0(void)

{
  if ((DAT_14c9e7adf & 2) == 0) {
    DAT_14c9e7adf = DAT_14c9e7adf | 2;
    _DAT_14c9e7a80 = L"FInstanceCullingOcclusionQueryDebugPS";
    _DAT_14c9e7a98 = FUN_146826540;
    _DAT_14c9e7aa0 = FUN_146825d77;
    _DAT_14c9e7aa8 = FUN_146825fd6;
    _DAT_14c9e7ab0 = FUN_1407e02ea;
    _DAT_14c9e7ab8 = FUN_146826273;
    _DAT_14c9e7a90 = FUN_1471d066e;
    _DAT_14c9e7ad0 = 0xffffffff000000e0;
    _DAT_14c9e7ad8 = 8;
    DAT_14c9e7adc = 0;
    _DAT_14c9e7ac0 = &LAB_1471d0698;
    FUN_14604638e();
    FUN_1407e00cc(&DAT_14c9e7a78);
    return;
  }
  return;
}



// FUNCTION 14604638e FUN_14604638e body=123 status=ok
// SIG undefined FUN_14604638e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604638e(void)

{
  _DAT_14c9eb0b0 = L"BASE";
  DAT_14c9eb0da = 4;
  _DAT_14c9eb0b8 = FUN_140b35ae4();
  _DAT_14c9eb0c0 = DAT_14c9e7a88;
  _DAT_14c9eb0c8 = &LAB_14682652b;
  DAT_14c9e7a88 = &DAT_14c9eb0b0;
  DAT_14c9e7add = DAT_14c9e7add + '\x01';
  _DAT_14c9eb0d0 = 0x100000000;
  if (*(char *)(_DAT_14c9eb0b8 + 100) != '\0') {
    DAT_14c9e7ade = DAT_14c9e7ade + '\x01';
  }
  return;
}



// FUNCTION 14604640a FUN_14604640a body=263 status=ok
// SIG undefined FUN_14604640a(void)

void FUN_14604640a(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e9f48) {
    FUN_144b3d300(&DAT_14c9e9f48);
    if (DAT_14c9e9f48 == -1) {
      FUN_146046512(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x37f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e9ec8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf476d);
      _Init_thread_footer(&DAT_14c9e9f48);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146046512 FUN_146046512 body=228 status=ok
// SIG undefined FUN_146046512(void)

longlong * FUN_146046512(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1471d4708;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1460465f8 FUN_1460465f8 body=292 status=ok
// SIG undefined FUN_1460465f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460465f8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca03898) {
    FUN_144b3d300(&DAT_14ca03898);
    if (DAT_14ca03898 == -1) {
      FUN_146046866();
      FUN_14604671c();
      FUN_140db5666(&DAT_14ca037f0,0,&DAT_14ca03788,L"FVisualizeTracesPS",
                    L"/Engine/Private/Lumen/LumenVisualize.usf",L"VisualizeTracesPS",3,1,
                    FUN_147222c8e,FUN_147222c2e,&LAB_1462e742e,&LAB_147222c2a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca06a28);
      _DAT_14ca037f0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dc269d);
      _Init_thread_footer(&DAT_14ca03898);
    }
  }
  return &DAT_14ca037f0;
}



// FUNCTION 14604671c FUN_14604671c body=205 status=ok
// SIG undefined FUN_14604671c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604671c(void)

{
  if ((DAT_14ca037ef & 2) == 0) {
    DAT_14ca037ef = DAT_14ca037ef | 2;
    _DAT_14ca03790 = L"FVisualizeTracesPS";
    _DAT_14ca037a8 = FUN_146826540;
    _DAT_14ca037b0 = FUN_146825d77;
    _DAT_14ca037b8 = FUN_146825fd6;
    _DAT_14ca037c0 = FUN_1407e02ea;
    _DAT_14ca037c8 = FUN_146826273;
    _DAT_14ca037a0 = FUN_147222bfc;
    _DAT_14ca037e0 = 0xffffffff000000e0;
    _DAT_14ca037e8 = 8;
    DAT_14ca037ec = 0;
    _DAT_14ca037d0 = &LAB_147222c26;
    FUN_1460467ea();
    FUN_1407e00cc(&DAT_14ca03788);
    return;
  }
  return;
}



// FUNCTION 1460467ea FUN_1460467ea body=123 status=ok
// SIG undefined FUN_1460467ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460467ea(void)

{
  _DAT_14ca07e80 = L"BASE";
  DAT_14ca07eaa = 4;
  _DAT_14ca07e88 = FUN_140b35ae4();
  _DAT_14ca07e90 = DAT_14ca03798;
  _DAT_14ca07e98 = &LAB_14682652b;
  DAT_14ca03798 = &DAT_14ca07e80;
  DAT_14ca037ed = DAT_14ca037ed + '\x01';
  _DAT_14ca07ea0 = 0x100000000;
  if (*(char *)(_DAT_14ca07e88 + 100) != '\0') {
    DAT_14ca037ee = DAT_14ca037ee + '\x01';
  }
  return;
}



// FUNCTION 146046866 FUN_146046866 body=263 status=ok
// SIG undefined FUN_146046866(void)

void FUN_146046866(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca06aa8) {
    FUN_144b3d300(&DAT_14ca06aa8);
    if (DAT_14ca06aa8 == -1) {
      FUN_14604696e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x1c8;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca06a28,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd3aa3);
      _Init_thread_footer(&DAT_14ca06aa8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14604696e FUN_14604696e body=228 status=ok
// SIG undefined FUN_14604696e(void)

longlong * FUN_14604696e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14722ccee;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146046a54 FUN_146046a54 body=292 status=ok
// SIG undefined FUN_146046a54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146046a54(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa2a38) {
    FUN_144b3d300(&DAT_14caa2a38);
    if (DAT_14caa2a38 == -1) {
      FUN_146046cc2();
      FUN_146046b78();
      FUN_140db5666(&DAT_14caa2990,0,&DAT_14caa2928,L"FMarkValidityPS",
                    L"/Engine/Private/Landscape/LandscapeEditLayersUtils.usf",L"MarkValidityPS",3,1,
                    FUN_14745e598,FUN_14745e53c,&LAB_1463248ec,&LAB_14745e538,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14caa4750);
      _DAT_14caa2990 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14324e028);
      _Init_thread_footer(&DAT_14caa2a38);
    }
  }
  return &DAT_14caa2990;
}



// FUNCTION 146046b78 FUN_146046b78 body=205 status=ok
// SIG undefined FUN_146046b78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146046b78(void)

{
  if ((DAT_14caa298f & 2) == 0) {
    DAT_14caa298f = DAT_14caa298f | 2;
    _DAT_14caa2930 = L"FMarkValidityPS";
    _DAT_14caa2948 = FUN_146826540;
    _DAT_14caa2950 = FUN_146825d77;
    _DAT_14caa2958 = FUN_146825fd6;
    _DAT_14caa2960 = FUN_1407e02ea;
    _DAT_14caa2968 = FUN_146826273;
    _DAT_14caa2940 = FUN_14745e50a;
    _DAT_14caa2980 = 0xffffffff000000e0;
    _DAT_14caa2988 = 8;
    DAT_14caa298c = 0;
    _DAT_14caa2970 = &LAB_14745e534;
    FUN_146046c46();
    FUN_1407e00cc(&DAT_14caa2928);
    return;
  }
  return;
}



// FUNCTION 146046c46 FUN_146046c46 body=123 status=ok
// SIG undefined FUN_146046c46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146046c46(void)

{
  _DAT_14caa5808 = L"BASE";
  DAT_14caa5832 = 4;
  _DAT_14caa5810 = FUN_140b35ae4();
  _DAT_14caa5818 = DAT_14caa2938;
  _DAT_14caa5820 = &LAB_14682652b;
  DAT_14caa2938 = &DAT_14caa5808;
  DAT_14caa298d = DAT_14caa298d + '\x01';
  _DAT_14caa5828 = 0x100000000;
  if (*(char *)(_DAT_14caa5810 + 100) != '\0') {
    DAT_14caa298e = DAT_14caa298e + '\x01';
  }
  return;
}



// FUNCTION 146046cc2 FUN_146046cc2 body=263 status=ok
// SIG undefined FUN_146046cc2(void)

void FUN_146046cc2(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa47d0) {
    FUN_144b3d300(&DAT_14caa47d0);
    if (DAT_14caa47d0 == -1) {
      FUN_146046dca(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x2c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa4750,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14324e160);
      _Init_thread_footer(&DAT_14caa47d0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146046dca FUN_146046dca body=228 status=ok
// SIG undefined FUN_146046dca(void)

longlong * FUN_146046dca(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14745f6aa;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146046eb0 FUN_146046eb0 body=292 status=ok
// SIG undefined FUN_146046eb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146046eb0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caad8d8) {
    FUN_144b3d300(&DAT_14caad8d8);
    if (DAT_14caad8d8 == -1) {
      FUN_14604711e();
      FUN_146046fd4();
      FUN_140db5666(&DAT_14caad830,0,&DAT_14caad7c8,L"FSlateMaskingPS",
                    L"/Engine/Private/SlateMaskingShader.usf",L"MainPS",3,1,FUN_14750f1bc,
                    FUN_14750f15c,&LAB_14750f158,&LAB_14750f154,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cab0a20);
      _DAT_14caad830 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c5fb3);
      _Init_thread_footer(&DAT_14caad8d8);
    }
  }
  return &DAT_14caad830;
}



// FUNCTION 146046fd4 FUN_146046fd4 body=205 status=ok
// SIG undefined FUN_146046fd4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146046fd4(void)

{
  if ((DAT_14caad82f & 2) == 0) {
    DAT_14caad82f = DAT_14caad82f | 2;
    _DAT_14caad7d0 = L"FSlateMaskingPS";
    _DAT_14caad7e8 = FUN_146826540;
    _DAT_14caad7f0 = FUN_146825d77;
    _DAT_14caad7f8 = FUN_146825fd6;
    _DAT_14caad800 = FUN_1407e02ea;
    _DAT_14caad808 = FUN_146826273;
    _DAT_14caad7e0 = FUN_14750f126;
    _DAT_14caad820 = 0xffffffff000000e0;
    _DAT_14caad828 = 8;
    DAT_14caad82c = 0;
    _DAT_14caad810 = &LAB_14750f150;
    FUN_1460470a2();
    FUN_1407e00cc(&DAT_14caad7c8);
    return;
  }
  return;
}



// FUNCTION 1460470a2 FUN_1460470a2 body=123 status=ok
// SIG undefined FUN_1460470a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460470a2(void)

{
  _DAT_14cab0f60 = L"BASE";
  DAT_14cab0f8a = 4;
  _DAT_14cab0f68 = FUN_140b35ae4();
  _DAT_14cab0f70 = DAT_14caad7d8;
  _DAT_14cab0f78 = &LAB_14682652b;
  DAT_14caad7d8 = &DAT_14cab0f60;
  DAT_14caad82d = DAT_14caad82d + '\x01';
  _DAT_14cab0f80 = 0x100000000;
  if (*(char *)(_DAT_14cab0f68 + 100) != '\0') {
    DAT_14caad82e = DAT_14caad82e + '\x01';
  }
  return;
}



// FUNCTION 14604711e FUN_14604711e body=263 status=ok
// SIG undefined FUN_14604711e(void)

void FUN_14604711e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab0aa0) {
    FUN_144b3d300(&DAT_14cab0aa0);
    if (DAT_14cab0aa0 == -1) {
      FUN_146047226(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 300;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cab0a20,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1432c7d85);
      _Init_thread_footer(&DAT_14cab0aa0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146047226 FUN_146047226 body=228 status=ok
// SIG undefined FUN_146047226(void)

longlong * FUN_146047226(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_147511a54;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14604730c FUN_14604730c body=150 status=ok
// SIG undefined FUN_14604730c(void)

ulonglong FUN_14604730c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 == (longlong *)0x0) {
LAB_146047386:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146047386;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x38);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      local_20 = lVar4;
      FUN_1460473a4(param_1 + 8,param_1 + 0x48);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1460473a4 FUN_1460473a4 body=176 status=ok
// SIG undefined FUN_1460473a4(void)

void FUN_1460473a4(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)(param_2 + 1);
  pcVar2 = (code *)*param_2;
  lVar3 = *param_3;
  local_60 = *param_1;
  local_58 = *(undefined4 *)(param_1 + 1);
  uStack_54 = *(undefined4 *)((longlong)param_1 + 0xc);
  uStack_50 = *(undefined4 *)(param_1 + 2);
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_48 = (void *)0x0;
  local_40 = *(int *)(param_1 + 4);
  lVar4 = (longlong)local_40;
  _Src = (void *)param_1[3];
  if (lVar4 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar4 * 2);
  }
  (*pcVar2)(lVar3 + iVar1,&local_60);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146047460 FUN_146047460 body=546 status=ok
// SIG undefined FUN_146047460(void)

undefined8 * FUN_146047460(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b4d4fd0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0xff7fffff7f7fffff;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  FUN_140212f8e(param_1 + 0x18);
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 2;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined2 *)(param_1 + 0x50) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0x403e000000000000;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x37c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x36c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x374) = 0;
  return param_1;
}



// FUNCTION 14604768a FUN_14604768a body=549 status=ok
// SIG undefined FUN_14604768a(void)

undefined8 * FUN_14604768a(undefined8 *param_1)

{
  FUN_140fa737e();
  *param_1 = &PTR_FUN_14b835930;
  param_1[6] = &PTR_FUN_14b835bf0;
  param_1[7] = &PTR_LAB_14b835c80;
  memset(param_1 + 0xb,0,0xd1);
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  FUN_14485c47a(param_1 + 0x28,0);
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2e4) = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x6d] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  FUN_144a5dc74(param_1 + 0x6e);
  FUN_144a5dc74(param_1 + 0x70);
  FUN_144a5dc74(param_1 + 0x72);
  FUN_144a5dc74(param_1 + 0x74);
  FUN_144a5dc74(param_1 + 0x76);
  FUN_144a5dc74(param_1 + 0x78);
  FUN_144a5dc74(param_1 + 0x7a);
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 3;
  return param_1;
}



// FUNCTION 1460478b0 FUN_1460478b0 body=287 status=ok
// SIG undefined FUN_1460478b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460478b0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3af78) {
    FUN_144b3d300(&DAT_14ca3af78);
    if (DAT_14ca3af78 == -1) {
      FUN_1460479d0();
      FUN_140db5666(&DAT_14ca3aed0,1,&DAT_14ca3ae68,L"FLightFunctionRayTracingShader",
                    L"/Engine/Private/RayTracing/RayTracingLightingMS.usf",L"RayTracingLightingMS",7
                    ,1,FUN_1472b6170,FUN_1472b6148,&LAB_1417758fe,&LAB_1472b6144,&LAB_1472b613e,
                    &LAB_1472b611e,0x100,0);
      _DAT_14ca3aed0 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_142f6a6e9);
      _Init_thread_footer(&DAT_14ca3af78);
    }
  }
  return &DAT_14ca3aed0;
}



// FUNCTION 1460479d0 FUN_1460479d0 body=210 status=ok
// SIG undefined FUN_1460479d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460479d0(void)

{
  if ((DAT_14ca3aecf & 2) == 0) {
    DAT_14ca3aecf = DAT_14ca3aecf | 2;
    _DAT_14ca3ae70 = L"FLightFunctionRayTracingShader";
    _DAT_14ca3ae88 = FUN_146826540;
    _DAT_14ca3ae90 = FUN_146825d77;
    _DAT_14ca3ae98 = FUN_146825fd6;
    _DAT_14ca3aea0 = FUN_1407e02ea;
    _DAT_14ca3aea8 = FUN_146826273;
    _DAT_14ca3ae80 = FUN_1472b60e4;
    _DAT_14ca3aec0 = 0xffffffff00000100;
    _DAT_14ca3aec8 = 8;
    DAT_14ca3aecc = 0;
    _DAT_14ca3aeb0 = &LAB_1472b611a;
    FUN_146047b1e();
    FUN_146047aa2();
    FUN_1407e00cc(&DAT_14ca3ae68);
    return;
  }
  return;
}



// FUNCTION 146047aa2 FUN_146047aa2 body=123 status=ok
// SIG undefined FUN_146047aa2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146047aa2(void)

{
  _DAT_14ca3f9d8 = L"BASE";
  DAT_14ca3fa02 = 4;
  _DAT_14ca3f9e0 = FUN_141526006();
  _DAT_14ca3f9e8 = DAT_14ca3ae78;
  _DAT_14ca3f9f0 = &LAB_14682652b;
  DAT_14ca3ae78 = &DAT_14ca3f9d8;
  DAT_14ca3aecd = DAT_14ca3aecd + '\x01';
  _DAT_14ca3f9f8 = 0x100000000;
  if (*(char *)(_DAT_14ca3f9e0 + 100) != '\0') {
    DAT_14ca3aece = DAT_14ca3aece + '\x01';
  }
  return;
}



// FUNCTION 146047b1e FUN_146047b1e body=216 status=ok
// SIG undefined FUN_146047b1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146047b1e(void)

{
  _DAT_14ca3f2e8 = L"LightDataPacked";
  DAT_14ca3f312 = FUN_140850cc5();
  _DAT_14ca3f2f0 = FUN_14106a12a();
  _DAT_14ca3f300 = &LAB_14682652b;
  _DAT_14ca3f308 = 0x1000000fa;
  _DAT_14ca3f310 = 0;
  _DAT_14ca3f2f8 = DAT_14ca3ae78;
  DAT_14ca3ae78 = &DAT_14ca3f2e8;
  _DAT_14ca3f2b8 = L"LightMaterialsParameter";
  DAT_14ca3f2e2 = FUN_140850cc5();
  _DAT_14ca3f2c0 = FUN_14106a12a();
  _DAT_14ca3f2d0 = &LAB_14682652b;
  _DAT_14ca3f2d8 = 0x1000000f8;
  _DAT_14ca3f2e0 = 0;
  _DAT_14ca3f2c8 = DAT_14ca3ae78;
  DAT_14ca3ae78 = &DAT_14ca3f2b8;
  return;
}



// FUNCTION 146047bf6 FUN_146047bf6 body=287 status=ok
// SIG undefined FUN_146047bf6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146047bf6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb911a0) {
    FUN_144b3d300(&DAT_14cb911a0);
    if (DAT_14cb911a0 == -1) {
      FUN_146047d16();
      FUN_140db5666(&DAT_14cb910f8,1,&DAT_14cb91090,L"FCohMaterialShaderVS",
                    L"/Plugin/CoherentRenderingPlugin/Private/CohCustomMaterialShaders.usf",
                    L"MainVS_CohMaterial",0,1,FUN_1489e0440,FUN_1489e0418,&LAB_143e9723e,
                    &LAB_1489e0414,&LAB_14712ac0c,&LAB_14712ac08,0x108,0);
      _DAT_14cb910f8 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_143e97246);
      _Init_thread_footer(&DAT_14cb911a0);
    }
  }
  return &DAT_14cb910f8;
}



// FUNCTION 146047d16 FUN_146047d16 body=210 status=ok
// SIG undefined FUN_146047d16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146047d16(void)

{
  if ((DAT_14cb910f7 & 2) == 0) {
    DAT_14cb910f7 = DAT_14cb910f7 | 2;
    _DAT_14cb91098 = L"FCohMaterialShaderVS";
    _DAT_14cb910b0 = FUN_146826540;
    _DAT_14cb910b8 = FUN_146825d77;
    _DAT_14cb910c0 = FUN_146825fd6;
    _DAT_14cb910c8 = FUN_1407e02ea;
    _DAT_14cb910d0 = FUN_146826273;
    _DAT_14cb910a8 = FUN_1489e03da;
    _DAT_14cb910e8 = 0xffffffff00000108;
    _DAT_14cb910f0 = 8;
    DAT_14cb910f4 = 0;
    _DAT_14cb910d8 = &LAB_1489e0410;
    FUN_146047e64();
    FUN_146047de8();
    FUN_1407e00cc(&DAT_14cb91090);
    return;
  }
  return;
}



// FUNCTION 146047de8 FUN_146047de8 body=123 status=ok
// SIG undefined FUN_146047de8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146047de8(void)

{
  _DAT_14cb91378 = L"BASE";
  DAT_14cb913a2 = 4;
  _DAT_14cb91380 = FUN_141526006();
  _DAT_14cb91388 = DAT_14cb910a0;
  _DAT_14cb91390 = &LAB_14682652b;
  DAT_14cb910a0 = &DAT_14cb91378;
  DAT_14cb910f5 = DAT_14cb910f5 + '\x01';
  _DAT_14cb91398 = 0x100000000;
  if (*(char *)(_DAT_14cb91380 + 100) != '\0') {
    DAT_14cb910f6 = DAT_14cb910f6 + '\x01';
  }
  return;
}



// FUNCTION 146047e64 FUN_146047e64 body=216 status=ok
// SIG undefined FUN_146047e64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146047e64(void)

{
  _DAT_14cb91320 = L"CohCustomEffectVS_UVScaleBias";
  DAT_14cb9134a = FUN_140850cc5();
  _DAT_14cb91328 = FUN_140ec6960();
  _DAT_14cb91338 = &LAB_14682652b;
  _DAT_14cb91340 = 0x1000000fe;
  _DAT_14cb91348 = 0;
  _DAT_14cb91330 = DAT_14cb910a0;
  DAT_14cb910a0 = &DAT_14cb91320;
  _DAT_14cb912f0 = L"CohCustomEffectVS_PositionTransform";
  DAT_14cb9131a = FUN_140850cc5();
  _DAT_14cb912f8 = FUN_140ec6960();
  _DAT_14cb91308 = &LAB_14682652b;
  _DAT_14cb91310 = 0x1000000f8;
  _DAT_14cb91318 = 0;
  _DAT_14cb91300 = DAT_14cb910a0;
  DAT_14cb910a0 = &DAT_14cb912f0;
  return;
}



// FUNCTION 146047f3c FUN_146047f3c body=53 status=ok
// SIG undefined FUN_146047f3c(void)

void FUN_146047f3c(longlong *param_1)

{
  FUN_146047f72();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146047f72 FUN_146047f72 body=364 status=ok
// SIG undefined FUN_146047f72(void)

void FUN_146047f72(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_145852fa4(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460480e0 FUN_1460480e0 body=152 status=ok
// SIG undefined FUN_1460480e0(void)

void FUN_1460480e0(longlong param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x2c0) == 0) {
    local_48 = &LAB_1414dfb86;
    local_40 = 0;
    FUN_14604827c(local_38,param_1);
    FUN_14604817a(param_2 + 0x38,&local_48,local_38);
    FUN_1449db362(local_38);
    *(undefined1 **)(param_1 + 0x2c0) = local_48;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14604817a FUN_14604817a body=216 status=ok
// SIG undefined FUN_14604817a(void)

undefined8 * FUN_14604817a(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14604827c FUN_14604827c body=428 status=ok
// SIG undefined FUN_14604827c(void)

longlong * FUN_14604827c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14604835c:
    *puVar5 = &PTR_LAB_14b528d00;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b528c90;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14604835c;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b528d00;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b528c90;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 146048428 FUN_146048428 body=349 status=ok
// SIG undefined FUN_146048428(void)

void FUN_146048428(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  memset(param_2,0,0x158);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0x1e) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0xffffffff;
  *param_2 = &PTR_FUN_14ac688f0;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  param_2[8] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_2 + 0xb) = 0x44fa0000;
  param_2[0xd] = 0;
  *(undefined1 *)(param_2 + 0xe) = 0;
  param_2[0xc] = &PTR_FUN_14a1a0a60;
  *(undefined8 *)((longlong)param_2 + 0x94) = 0;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(undefined8 *)((longlong)param_2 + 0x81) = 0;
  *(undefined8 *)((longlong)param_2 + 0x89) = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x17] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_2[0x15] = DAT_14c8464f8;
  param_2[0x16] = uVar1;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined4 *)(param_2 + 0x1a) = 0;
  uVar1 = DAT_14c8464e8;
  param_2[0x1b] = DAT_14c8464e0;
  param_2[0x1c] = uVar1;
  param_2[0x1d] = DAT_14c8464f0;
  *(undefined1 *)(param_2 + 0x1e) = 0;
  param_2[0x20] = DAT_14c9ab028;
  *(undefined1 *)(param_2 + 0x21) = 2;
  param_2[0x1f] = &PTR_FUN_14a1a0a20;
  param_2[0x22] = 0;
  param_2[0x24] = 0;
  *(undefined1 *)(param_2 + 0x25) = 0;
  param_2[0x23] = &PTR_FUN_14a1a0a00;
  *(undefined2 *)(param_2 + 0x26) = 1;
  param_2[0x28] = 0;
  *(undefined1 *)(param_2 + 0x29) = 0;
  param_2[0x27] = &PTR_FUN_14a1a0a00;
  *(undefined2 *)(param_2 + 0x2a) = 1;
  return;
}



// FUNCTION 146048586 FUN_146048586 body=138 status=ok
// SIG undefined FUN_146048586(void)

void FUN_146048586(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_1 + 0x70) != 0) && (iVar1 = FUN_1415c6332(), 0 < iVar1)) {
    iVar1 = 0;
    do {
      lVar3 = FUN_14574ef0a(*(undefined8 *)(param_1 + 0x70),iVar1);
      lVar3 = *(longlong *)(lVar3 + 0xc0);
      if (lVar3 != 0) {
        lVar4 = FUN_1411bcd44();
        lVar3 = *(longlong *)(lVar3 + 0x10);
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) {
          FUN_146048610(param_1,param_2,param_3);
        }
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_1415c6332(*(undefined8 *)(param_1 + 0x70));
    } while (iVar1 < iVar2);
  }
  return;
}



// FUNCTION 146048610 FUN_146048610 body=814 status=ok
// SIG undefined FUN_146048610(void)

void FUN_146048610(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  void *pvVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  void *local_98;
  int local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  void *local_70;
  int local_68;
  void *local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14604893f(&local_60);
  if (local_58 == 0) {
    uVar8 = FUN_140355b7c();
    local_58 = FUN_14477b664(uVar8);
  }
  if (local_50 == 0) {
    if (local_58 != 0 && local_60 != (void *)0x0) {
      plVar7 = *(longlong **)(local_58 + 0xb8);
      if ((plVar7 == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar6 == '\0')) {
        local_50 = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar7 + 0x110))(plVar7);
        local_50 = FUN_144aff482(uVar8,&local_60);
        if (local_50 != 0) goto LAB_146048666;
      }
    }
    plVar7 = (longlong *)thunk_FUN_14050fd64();
    puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x570))(plVar7);
    local_98 = (void *)0x0;
    local_90 = *(int *)(puVar9 + 1);
    lVar10 = (longlong)local_90;
    pvVar3 = (void *)*puVar9;
    if (lVar10 == 0) goto LAB_1460486fb;
    FUN_1401b309e(&local_98,local_90,0);
    memcpy(local_98,pvVar3,lVar10 << 3);
    pvVar5 = local_98;
    lVar10 = (longlong)local_90;
    pvVar3 = local_98;
    if (lVar10 != 0) {
      lVar13 = 0;
      do {
        local_a0 = *(undefined8 *)((longlong)pvVar5 + lVar13);
        FUN_146048b48(DAT_14cbd1298,&local_88,param_1,&local_a0);
        if (CONCAT44(uStack_7c,local_80) != 0) {
          iVar2 = (int)param_3[1];
          lVar11 = (longlong)iVar2;
          *(uint *)(param_3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
            FUN_146048ab4(param_3,iVar2);
          }
          pvVar3 = local_70;
          lVar4 = *param_3;
          *(undefined8 *)(lVar4 + lVar11 * 0x28) = local_88;
          puVar1 = (undefined4 *)(lVar4 + 8 + lVar11 * 0x28);
          *puVar1 = local_80;
          puVar1[1] = uStack_7c;
          puVar1[2] = uStack_78;
          puVar1[3] = uStack_74;
          *(undefined8 *)(lVar4 + 0x18 + lVar11 * 0x28) = 0;
          lVar12 = (longlong)local_68;
          *(int *)(lVar4 + 0x20 + lVar11 * 0x28) = local_68;
          if (lVar12 == 0) {
            *(undefined4 *)(lVar4 + lVar11 * 0x28 + 0x24) = 0;
          }
          else {
            puVar9 = (undefined8 *)(lVar4 + lVar11 * 0x28 + 0x18);
            FUN_1446dd670(puVar9,local_68,0);
            memcpy((void *)*puVar9,pvVar3,lVar12 * 2);
          }
        }
        if (local_70 != (void *)0x0) {
          FUN_1400020a8();
        }
        lVar13 = lVar13 + 8;
        pvVar3 = local_98;
      } while (lVar10 * 8 != lVar13);
    }
  }
  else {
LAB_146048666:
    local_98 = local_60;
    FUN_146048b48(DAT_14cbd1298,&local_88,param_1);
    pvVar3 = local_70;
    if (CONCAT44(uStack_7c,local_80) != 0) {
      iVar2 = (int)param_3[1];
      lVar10 = (longlong)iVar2;
      *(uint *)(param_3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
        FUN_146048ab4(param_3,iVar2);
      }
      pvVar3 = local_70;
      lVar13 = *param_3;
      *(undefined8 *)(lVar13 + lVar10 * 0x28) = local_88;
      puVar1 = (undefined4 *)(lVar13 + 8 + lVar10 * 0x28);
      *puVar1 = local_80;
      puVar1[1] = uStack_7c;
      puVar1[2] = uStack_78;
      puVar1[3] = uStack_74;
      *(undefined8 *)(lVar13 + 0x18 + lVar10 * 0x28) = 0;
      *(int *)(lVar13 + 0x20 + lVar10 * 0x28) = local_68;
      if ((longlong)local_68 == 0) {
        *(undefined4 *)(lVar13 + lVar10 * 0x28 + 0x24) = 0;
      }
      else {
        puVar9 = (undefined8 *)(lVar13 + lVar10 * 0x28 + 0x18);
        FUN_1446dd670(puVar9,local_68,0);
        memcpy((void *)*puVar9,pvVar3,(longlong)local_68 * 2);
        pvVar3 = local_70;
      }
    }
  }
  if (pvVar3 != (void *)0x0) {
    FUN_1400020a8(pvVar3);
  }
LAB_1460486fb:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14604893f FUN_14604893f body=121 status=ok
// SIG undefined FUN_14604893f(void)

undefined8 * FUN_14604893f(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1460489ff(param_2);
  if (lVar2 != 0) {
    lVar3 = FUN_140082f10();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      lVar2 = FUN_1403b0700(lVar2);
      cVar1 = FUN_1415c6336(lVar2);
      if (cVar1 != '\0') {
        FUN_1460489b8(param_1,lVar2 + 0x38);
        return param_1;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1460489b8 FUN_1460489b8 body=71 status=ok
// SIG undefined FUN_1460489b8(void)

undefined8 * FUN_1460489b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1460489ff FUN_1460489ff body=180 status=ok
// SIG undefined FUN_1460489ff(void)

longlong FUN_1460489ff(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong *local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    FUN_144a7d35a(param_1,&local_28);
    if (-1 < (int)local_20) {
      lVar5 = 0;
      do {
        if ((int)local_28[1] <= (int)local_20) goto LAB_146048a7f;
        plVar4 = (longlong *)FUN_14479d2ce((ulonglong)local_20 * 8 + *local_28);
        if ((plVar4 != (longlong *)0x0) && ((*(byte *)(plVar4 + 0x84) & 2) != 0)) {
          cVar3 = (**(code **)(*plVar4 + 0x6c8))(plVar4);
          if (cVar3 != '\0') {
            cVar3 = FUN_141107632(plVar4);
            if (cVar3 != '\0') {
              lVar5 = plVar4[0x73];
              goto LAB_146048a7f;
            }
          }
        }
        uVar1 = local_20 + 1;
        bVar2 = -2 < (int)local_20;
        local_20 = uVar1;
      } while (bVar2);
    }
  }
  lVar5 = 0;
LAB_146048a7f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146048ab4 FUN_146048ab4 body=147 status=ok
// SIG undefined FUN_146048ab4(void)

void FUN_146048ab4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146048b48 FUN_146048b48 body=589 status=ok
// SIG undefined FUN_146048b48(void)

undefined8 *
FUN_146048b48(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400bbfc4(local_58,param_3);
  uVar12 = (uint)local_58._8_8_ & 0xffff;
  uVar11 = (uint)local_58._0_8_ & 0xffff;
  uVar11 = ((uint)local_58._0_8_ << 0x10 | uVar11) + SUB84(local_58._0_8_,4) +
           (SUB84(local_58._0_8_,2) << 0x13 | SUB84(local_58._0_8_,2) & 0xffff) + (uVar11 >> 4);
  uVar13 = 0;
  uVar4 = FUN_144a78877(0,(uVar11 >> 2) +
                          ((uint)local_58._8_8_ << 0x10 | uVar12) + SUB84(local_58._8_8_,4) +
                          (SUB84(local_58._8_8_,2) << 0x13 | SUB84(local_58._8_8_,2) & 0xffff) +
                          (uVar12 >> 4) + uVar11 * 0x40 + 0x9e3779b9 ^ uVar11);
  puVar9 = local_48;
  if (local_40 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  uVar7 = (ulonglong)(local_40 - 1);
  if (local_40 == 0) {
    uVar7 = uVar13;
  }
  uVar5 = FUN_144a49b4a(uVar7,puVar9);
  uVar4 = FUN_144a78877(uVar4,uVar5);
  iVar6 = FUN_1415c634e((longlong *)(param_1 + 0x390),uVar4,local_58);
  if (iVar6 != -1) {
    uVar13 = (longlong)iVar6 * 0x78 + *(longlong *)(param_1 + 0x390);
  }
  plVar10 = (longlong *)(uVar13 + 0x20);
  if (uVar13 == 0) {
    plVar10 = (longlong *)0x0;
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((plVar10 != (longlong *)0x0) && ((int)plVar10[1] != *(int *)((longlong)plVar10 + 0x34))) {
    lVar2 = *param_4;
    uVar11 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar12 = (uint)lVar2 & 0xffff;
    plVar8 = plVar10 + 7;
    if ((longlong *)plVar10[8] != (longlong *)0x0) {
      plVar8 = (longlong *)plVar10[8];
    }
    iVar6 = *(int *)((longlong)plVar8 +
                    (ulonglong)
                    ((int)plVar10[9] - 1U &
                    (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar12) +
                    (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar12 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar1 = *plVar10 + (longlong)iVar6 * 0x38;
        if (*(longlong *)(*plVar10 + (longlong)iVar6 * 0x38) == lVar2) {
          if (lVar1 != 0) {
            *param_2 = *(undefined8 *)(lVar1 + 8);
            uVar4 = *(undefined4 *)(lVar1 + 0x14);
            uVar5 = *(undefined4 *)(lVar1 + 0x18);
            uVar3 = *(undefined4 *)(lVar1 + 0x1c);
            *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x10);
            *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
            *(undefined4 *)(param_2 + 2) = uVar5;
            *(undefined4 *)((longlong)param_2 + 0x14) = uVar3;
            param_2[3] = 0;
            iVar6 = *(int *)(lVar1 + 0x28);
            _Src = *(void **)(lVar1 + 0x20);
            *(int *)(param_2 + 4) = iVar6;
            if ((longlong)iVar6 == 0) {
              *(undefined4 *)((longlong)param_2 + 0x24) = 0;
            }
            else {
              FUN_1446dd670(param_2 + 3,iVar6,0);
              memcpy((void *)param_2[3],_Src,(longlong)iVar6 * 2);
            }
            goto LAB_146048d22;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x30);
      } while (iVar6 != -1);
    }
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
LAB_146048d22:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146048d96 FUN_146048d96 body=323 status=ok
// SIG undefined FUN_146048d96(void)

void FUN_146048d96(longlong param_1)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146048eda();
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14591aa10();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
      FUN_148aaa1ae(*(longlong *)(lVar1 + 0x30),DAT_14cbcdf30);
    }
  }
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d0))();
  if (lVar1 != 0) {
    lVar1 = FUN_140b64196(lVar1);
    if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x50) != 0)) {
      FUN_146048f14(*(longlong *)(param_1 + 0x50),&local_48);
      _Src = local_48;
      local_38 = (void *)0x0;
      local_30 = local_40;
      if ((longlong)local_40 == 0) {
        local_2c = 0;
      }
      else {
        FUN_1446dd670(&local_38,local_40,0);
        memcpy(local_38,_Src,(longlong)local_40 * 2);
      }
      if (local_48 != (void *)0x0) {
        FUN_1400020a8(local_48);
      }
      FUN_1415c6426(lVar1,&local_38);
      if (local_38 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146048eda FUN_146048eda body=58 status=ok
// SIG undefined FUN_146048eda(void)

void FUN_146048eda(longlong param_1)

{
  if (*(int *)(param_1 + 0x6c) != -1) {
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0xffffffff00000000;
  }
  return;
}



// FUNCTION 146048f14 FUN_146048f14 body=178 status=ok
// SIG undefined FUN_146048f14(void)

undefined8 * FUN_146048f14(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  undefined1 auStack_58 [40];
  void *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_14119d664(*(longlong *)(param_1 + 0x60),&local_30);
    _Src = local_30;
    *param_2 = 0;
    *(int *)(param_2 + 1) = local_28;
    if ((longlong)local_28 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,local_28,0);
      memcpy((void *)*param_2,_Src,(longlong)local_28 * 2);
    }
    if (local_30 != (void *)0x0) {
      FUN_1400020a8(local_30);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146048fc8 FUN_146048fc8 body=498 status=ok
// SIG undefined FUN_146048fc8(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffb8 : 0x0001460491b0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_146048fc8(longlong param_1,char *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_1c8 [40];
  undefined1 local_1a0 [16];
  undefined8 local_190;
  int local_188;
  undefined4 local_184;
  undefined1 local_180 [256];
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_80 = 0;
  if (param_2 == (char *)0x0) {
    local_78 = 0;
    local_70 = 0;
  }
  else {
    sVar3 = strlen(param_2);
    FUN_1446e6fe8(local_180,param_2,sVar3 & 0xffffffff,1);
  }
  FUN_140056680(local_1a0,local_78);
  local_190 = 0;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  local_188 = iVar1;
  if (iVar1 == 0) {
    local_184 = 0;
  }
  else {
    FUN_146049370(&local_190,iVar1,0);
    FUN_1460491f6(local_190,uVar2,iVar1);
  }
  local_68 = (undefined1 *)0x0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *puVar4 = &PTR_FUN_14b9c6230;
  FUN_1460492fe(puVar4 + 1,local_1a0);
  if (puVar4 == (undefined8 *)&DAT_fffffffffffffff8) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar6 = &LAB_1461ea656;
    local_68 = &LAB_1461ea656;
  }
  puVar5 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar5 = 0;
  puVar5[2] = puVar6;
  puVar5[4] = puVar4;
  local_58 = 0;
  *(undefined4 *)(puVar5 + 8) = local_38;
  *(undefined4 *)((longlong)puVar5 + 0x44) = uStack_34;
  *(undefined4 *)(puVar5 + 9) = uStack_30;
  *(undefined4 *)((longlong)puVar5 + 0x4c) = uStack_2c;
  *(undefined4 *)(puVar5 + 6) = local_48;
  *(undefined4 *)((longlong)puVar5 + 0x34) = uStack_44;
  *(undefined4 *)(puVar5 + 7) = uStack_40;
  *(undefined4 *)((longlong)puVar5 + 0x3c) = uStack_3c;
  if (puVar4 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_68 = (undefined1 *)0x0;
  }
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    puVar4 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar5;
    UNLOCK();
    LOCK();
    *puVar4 = puVar5;
    UNLOCK();
    if (local_68 != (undefined1 *)0x0) {
      (**(code **)(CONCAT44(uStack_44,local_48) + 0x10))();
    }
  }
  FUN_1460491bc(local_1a0);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460491bc FUN_1460491bc body=58 status=ok
// SIG undefined FUN_1460491bc(void)

void FUN_1460491bc(longlong *param_1)

{
  FUN_14580f9f9(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1460491f6 FUN_1460491f6 body=52 status=ok
// SIG undefined FUN_1460491f6(void)

void FUN_1460491f6(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14604922a(param_1,param_2);
    param_1 = param_1 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return;
}



// FUNCTION 14604922a FUN_14604922a body=211 status=ok
// SIG undefined FUN_14604922a(void)

undefined8 * FUN_14604922a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = *param_2;
  uVar7 = param_2[1];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 3);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  *param_1 = uVar6;
  param_1[1] = uVar7;
  param_1[4] = param_2[4];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar4 = *(undefined4 *)(param_2 + 6);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 6) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar5;
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 8);
  pvVar2 = (void *)param_2[7];
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 10);
  pvVar2 = (void *)param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 9,iVar1,0);
    memcpy((void *)param_1[9],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)((longlong)param_1 + 0x5c) = *(undefined1 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  return param_1;
}



// FUNCTION 1460492fe FUN_1460492fe body=113 status=ok
// SIG undefined FUN_1460492fe(void)

undefined8 * FUN_1460492fe(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_146049370(param_1 + 2,iVar1,0);
    FUN_1460491f6(param_1[2],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 146049370 FUN_146049370 body=115 status=ok
// SIG undefined FUN_146049370(void)

void FUN_146049370(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x60,8);
    iVar2 = (int)(uVar1 / 0x60);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x60,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1460493e4 FUN_1460493e4 body=133 status=ok
// SIG undefined FUN_1460493e4(void)

longlong FUN_1460493e4(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14604946a();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x40;
    if (lVar3 + lVar2 != 0) goto LAB_146049431;
  }
  local_30 = param_3;
  FUN_146049534(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 << 6;
LAB_146049431:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + lVar3 + 0x10;
}



// FUNCTION 14604946a FUN_14604946a body=202 status=ok
// SIG undefined FUN_14604946a(void)

int FUN_14604946a(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1460494b4:
      lVar10 = (longlong)iVar1 * 0x40;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_14604950c;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_14604950c;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_146049525;
    }
  }
  return -1;
LAB_14604950c:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_146049525:
  iVar1 = *(int *)(lVar4 + 0x38 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1460494b4;
}



// FUNCTION 146049534 FUN_146049534 body=312 status=ok
// SIG undefined FUN_146049534(void)

undefined4 * FUN_146049534(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78 [2];
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1460497a8(param_1,local_78);
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 0;
  FUN_146049706(local_70,*param_4,&local_68);
  FUN_14575a8d6(&local_68);
  *(undefined4 *)(local_70 + 0x38) = 0xffffffff;
  cVar1 = FUN_14604966e(param_1,param_3,local_70,local_78);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_70 + 0x3c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_70 + 0x38) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_78[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14604988e(param_1);
    }
  }
  *param_2 = local_78[0];
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14604966e FUN_14604966e body=152 status=ok
// SIG undefined FUN_14604966e(void)

undefined8 FUN_14604966e(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong *plVar2;
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
  int iVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar15 = FUN_14604946a(), iVar15 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar15 * 0x40);
    plVar2 = (longlong *)(*param_1 + (longlong)iVar15 * 0x40);
    FUN_14575a8d6(plVar2 + 2);
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    uVar11 = param_3[8];
    uVar12 = param_3[9];
    uVar13 = param_3[10];
    uVar14 = param_3[0xb];
    *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
    puVar1[8] = uVar11;
    puVar1[9] = uVar12;
    puVar1[10] = uVar13;
    puVar1[0xb] = uVar14;
    puVar1[4] = uVar7;
    puVar1[5] = uVar8;
    puVar1[6] = uVar9;
    puVar1[7] = uVar10;
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_14747d976(param_1,*param_4);
    *param_4 = iVar15;
    return 1;
  }
  return 0;
}



// FUNCTION 146049706 FUN_146049706 body=161 status=ok
// SIG undefined FUN_146049706(void)

undefined8 * FUN_146049706(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
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
  param_1[2] = 0;
  param_1[2] = *param_3;
  *param_3 = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  param_1[4] = 0;
  param_1[4] = param_3[2];
  param_3[2] = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 3);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_3 + 0x1c);
  param_3[3] = 0;
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_3 + 4);
  return param_1;
}



// FUNCTION 1460497a8 FUN_1460497a8 body=230 status=ok
// SIG undefined FUN_1460497a8(void)

int * FUN_1460497a8(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 14604988e FUN_14604988e body=485 status=ok
// SIG undefined FUN_14604988e(void)

void FUN_14604988e(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x40;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x3c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146049a74 FUN_146049a74 body=1185 status=ok
// SIG undefined FUN_146049a74(void)

longlong * FUN_146049a74(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_128 [40];
  longlong local_100;
  longlong *local_f8;
  longlong local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined1 *local_80;
  undefined4 local_78;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  cVar6 = (**(code **)(*(longlong *)*param_3 + 0x50))();
  if ((cVar6 != '\0') && (lVar7 = (**(code **)(*(longlong *)*param_3 + 8))(), lVar7 != 0)) {
    lVar8 = FUN_144a2f878();
    if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
        == lVar8 + 0x30)) {
      local_c0 = FUN_140cf8aa6(lVar7);
      plVar9 = (longlong *)FUN_14001cc68(0x70,0x10);
      plVar9[1] = (longlong)&DAT_100000001;
      *plVar9 = (longlong)&PTR_FUN_14b99e720;
      local_c8 = plVar9 + 2;
      plVar9[2] = 0;
      plVar9[3] = 0;
      plVar9[4] = 0;
      plVar9[5] = 0;
      plVar9[6] = 0;
      plVar9[7] = 0;
      plVar9[8] = 0;
      plVar9[9] = 0;
      plVar9[10] = 0;
      plVar9[0xb] = 0;
      plVar9[0xc] = 0;
      plVar9[0xd] = 0;
      FUN_1413ea01e();
      plVar9[2] = (longlong)&PTR_FUN_14b647170;
      plVar9[0xc] = 0;
      plVar9[0xd] = 0;
      if (0 < *(int *)(param_1 + 0x38)) {
        local_d0 = plVar9 + 0xc;
        lVar8 = 0x80;
        lVar14 = 0;
        local_d8 = lVar7 + 0x3a20;
        local_100 = lVar7;
        local_f8 = param_2;
        local_f0 = param_1;
        do {
          lVar5 = *(longlong *)(param_1 + 0x30);
          lVar3 = lVar8 + lVar5;
          lVar15 = lVar3 + -0x80;
          if (*(char *)(lVar3 + -0x20) == '\x01') {
            uVar11 = (**(code **)(*(longlong *)(lVar7 + 0x3a20) + 0x10))(local_d8);
            uVar12 = FUN_14011c2be(lVar8 + lVar5 + -0x18);
            local_a8 = 0;
            uStack_a0 = 0;
            local_8c = 0xff;
            local_90 = 0;
            local_98 = 0;
            FUN_14493679e(uVar11,&local_a8,uVar12,1);
            plVar10 = (longlong *)FUN_14001cc68(0xc0,0x10);
            plVar10[1] = (longlong)&DAT_100000001;
            *plVar10 = (longlong)&PTR_FUN_14b99b730;
            plVar13 = plVar10 + 2;
            FUN_14604a1ec(plVar13,lVar15,&local_a8);
            local_e8 = plVar10;
            local_e0 = plVar13;
            local_b8 = plVar13;
            local_b0 = plVar10;
            FUN_14604a280(&local_b8,plVar13);
            cVar6 = FUN_14486ea84(&local_a8);
            if (cVar6 != '\0') {
              lVar7 = FUN_14008e0ae(&local_a8);
              local_80 = &LAB_148de3e0c;
              local_78 = 0;
              FUN_14604a322(&local_70,&local_b8,&local_80);
              FUN_140e2bd22(lVar7 + 0x138,&local_80,&local_70);
              FUN_1449db362(&local_70);
            }
            plVar10 = local_b0;
            local_70 = local_e0;
            local_68 = local_e8;
            plVar13 = local_e0;
            if (local_e8 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
              UNLOCK();
              if (local_b0 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_b0 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_b0)(local_b0);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar10 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  plVar13 = local_70;
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar10 + 0x10))(plVar10);
                    plVar13 = local_70;
                  }
                }
              }
            }
          }
          else {
            plVar10 = (longlong *)FUN_14001cc68(0xa0,0x10);
            FUN_146049fa0(plVar10,lVar15);
            plVar13 = plVar10 + 2;
            local_70 = plVar13;
            local_68 = plVar10;
            FUN_14604a14a(&local_70,plVar13);
          }
          param_1 = local_f0;
          FUN_1458f8bd2(plVar13,local_c0);
          plVar10 = local_d0;
          iVar4 = (int)plVar9[0xd];
          *(uint *)(plVar9 + 0xd) = iVar4 + 1U;
          if (*(uint *)((longlong)plVar9 + 0x6c) < iVar4 + 1U) {
            FUN_146049f1c(local_d0,iVar4);
          }
          param_2 = local_f8;
          lVar7 = local_100;
          lVar3 = *plVar10;
          *(longlong **)(lVar3 + (longlong)iVar4 * 0x10) = plVar13;
          *(longlong **)(lVar3 + 8 + (longlong)iVar4 * 0x10) = local_68;
          if (local_68 == (longlong *)0x0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_68 + 1) = (int)local_68[1] + 1;
            UNLOCK();
            plVar13 = local_68;
          }
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = 0;
          FUN_14604a0a6(*param_3,&local_70,*(longlong *)(param_1 + 0x30) + lVar8,&local_a8);
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar10 = plVar13 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
          }
          lVar14 = lVar14 + 1;
          lVar8 = lVar8 + 0x98;
        } while (lVar14 < *(int *)(param_1 + 0x38));
      }
      *param_2 = (longlong)local_c8;
      param_2[1] = (longlong)plVar9;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar13 = plVar9 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
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
      if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_128);
}



// FUNCTION 146049f1c FUN_146049f1c body=132 status=ok
// SIG undefined FUN_146049f1c(void)

void FUN_146049f1c(longlong param_1,int param_2)

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



// FUNCTION 146049fa0 FUN_146049fa0 body=125 status=ok
// SIG undefined FUN_146049fa0(void)

undefined8 * FUN_146049fa0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b99b860;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  iVar1 = DAT_14c7640cc + 1;
  *(int *)(param_1 + 6) = DAT_14c7640cc;
  DAT_14c7640cc = iVar1;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xf0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf8;
  param_1[2] = &PTR_FUN_14b99b790;
  param_1[7] = &PTR_FUN_14b99b7b0;
  FUN_14604a01e(param_1 + 0xd,param_2 + 0x28);
  return param_1;
}



// FUNCTION 14604a01e FUN_14604a01e body=136 status=ok
// SIG undefined FUN_14604a01e(void)

undefined2 * FUN_14604a01e(undefined2 *param_1,undefined2 *param_2)

{
  char cVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 4);
  *(char *)(param_1 + 4) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xe);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  uVar5 = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0xe) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  *(undefined4 *)(param_1 + 0x12) = uVar5;
  *(undefined8 *)(param_1 + 0x14) = 0;
  iVar2 = *(int *)(param_2 + 0x18);
  _Src = *(void **)(param_2 + 0x14);
  *(int *)(param_1 + 0x18) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x1a) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x14,iVar2,0);
    memcpy(*(void **)(param_1 + 0x14),_Src,(longlong)iVar2 * 2);
  }
  return param_1;
}



// FUNCTION 14604a0a6 FUN_14604a0a6 body=162 status=ok
// SIG undefined FUN_14604a0a6(void)

void FUN_14604a0a6(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_4 = (longlong *)*param_4;
  if ((param_4 != (longlong *)0x0) || (param_4 = (longlong *)*param_3, param_4 != (longlong *)0x0))
  {
    local_20 = *param_2 + 0x28;
    if (*param_2 == 0) {
      local_20 = 0;
    }
    local_18 = (longlong *)param_2[1];
    if (local_18 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = (int)local_18[1] + 1;
      UNLOCK();
    }
    (**(code **)(*param_4 + 0x18))(param_4,param_1,&local_20);
    plVar3 = local_18;
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14604a14a FUN_14604a14a body=162 status=ok
// SIG undefined FUN_14604a14a(void)

void FUN_14604a14a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x48) != 0) && (*(longlong *)(param_2 + 0x50) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x50) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x48) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x50);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x48) = param_2;
    if (*(longlong **)(param_2 + 0x50) == plVar2) goto LAB_14604a189;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x50);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x50) = plVar2;
      goto LAB_14604a189;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x50) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14604a189:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014604a1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14604a1ec FUN_14604a1ec body=147 status=ok
// SIG undefined FUN_14604a1ec(void)

undefined8 * FUN_14604a1ec(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar4 = DAT_14c7640cc + 1;
  *(int *)(param_1 + 4) = DAT_14c7640cc;
  DAT_14c7640cc = iVar4;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) & 0xf0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xf8;
  *param_1 = &PTR_FUN_14b99b790;
  param_1[5] = &PTR_FUN_14b99b7b0;
  FUN_14604a01e(param_1 + 0xb,param_2 + 0x28);
  *param_1 = &PTR_FUN_14b99b750;
  param_1[5] = &PTR_FUN_14b99b770;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  param_1[0x12] = *param_3;
  param_1[0x13] = uVar1;
  param_1[0x14] = uVar2;
  param_1[0x15] = uVar3;
  return param_1;
}



// FUNCTION 14604a280 FUN_14604a280 body=162 status=ok
// SIG undefined FUN_14604a280(void)

void FUN_14604a280(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x48) != 0) && (*(longlong *)(param_2 + 0x50) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x50) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x48) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x50);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x48) = param_2;
    if (*(longlong **)(param_2 + 0x50) == plVar2) goto LAB_14604a2bf;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x50);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x50) = plVar2;
      goto LAB_14604a2bf;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x50) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14604a2bf:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014604a31e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14604a322 FUN_14604a322 body=300 status=ok
// SIG undefined FUN_14604a322(void)

longlong * FUN_14604a322(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14b3f7900;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99b7f0;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b3f7900;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b99b7f0;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  return param_1;
}



// FUNCTION 14604a44e FUN_14604a44e body=78 status=ok
// SIG undefined FUN_14604a44e(void)

undefined8 FUN_14604a44e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = Ordinal_1(*(undefined8 *)(param_1 + 0x28),0,0);
  if (lVar1 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x168))
                      (*(longlong **)(param_1 + 0x40),lVar1,*(undefined4 *)(param_1 + 8),param_2,
                       param_1 + 0x20);
  }
  return uVar2;
}



// FUNCTION 14604a49c FUN_14604a49c body=133 status=ok
// SIG undefined FUN_14604a49c(void)

void FUN_14604a49c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a973880;
  param_1[1] = &PTR_FUN_14a9738c0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14604a522(param_1 + 3);
  param_1[1] = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 1);
  return;
}



// FUNCTION 14604a522 FUN_14604a522 body=53 status=ok
// SIG undefined FUN_14604a522(void)

void FUN_14604a522(longlong *param_1)

{
  FUN_14604a558();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14604a558 FUN_14604a558 body=373 status=ok
// SIG undefined FUN_14604a558(void)

void FUN_14604a558(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x30;
      FUN_147b4ac21(*(undefined8 *)(lVar2 + 0x18 + lVar3),*(undefined4 *)(lVar2 + 0x20 + lVar3));
      if (*(longlong *)(lVar2 + 0x18 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14604a6ce FUN_14604a6ce body=127 status=ok
// SIG undefined FUN_14604a6ce(void)

void FUN_14604a6ce(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar2 = DAT_14cb1eb10;
  uVar3 = (uint)DAT_14cb1ead4;
  uVar6 = (ulonglong)DAT_14cb1eb10;
  if (DAT_14cb1eb10 < uVar3) {
    lVar5 = (longlong)(int)DAT_14cb1eb10;
    uVar4 = DAT_14cb1eb14 - DAT_14cb1eb10;
    DAT_14cb1eb10 = uVar3;
    if (uVar4 < (uint)((ulonglong)uVar3 - lVar5)) {
      FUN_14604a74e(uVar2);
    }
    memset((void *)(uVar6 * 0xc + DAT_14cb1eb08),0,((ulonglong)uVar3 - lVar5) * 0xc);
  }
  lVar5 = DAT_14cb1eb08;
  bVar1 = *param_1;
  *(byte *)(DAT_14cb1eb08 + (ulonglong)bVar1 * 0xc) = bVar1;
  *(undefined8 *)(lVar5 + 4 + (ulonglong)bVar1 * 0xc) = *(undefined8 *)(param_1 + 4);
  return;
}



// FUNCTION 14604a74e FUN_14604a74e body=153 status=ok
// SIG undefined FUN_14604a74e(void)

void FUN_14604a74e(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = DAT_14cb1eb10;
  uVar2 = (ulonglong)DAT_14cb1eb10;
  if (param_1 <= (int)DAT_14cb1eb10) {
    if (DAT_14cb1eb14 == 0) {
      uVar2 = 4;
      if (4 < DAT_14cb1eb10) {
        uVar2 = (ulonglong)DAT_14cb1eb10;
      }
    }
    else {
      uVar2 = (uVar2 * 3 >> 3) + uVar2 + 0x10;
    }
    uVar2 = FUN_144a3809e(uVar2 * 0xc,4);
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar2 / 0xc)) {
      uVar3 = uVar2 / 0xc & 0xffffffff;
    }
    DAT_14cb1eb14 = (int)uVar3;
    FUN_1446f8d3c(&DAT_14cb1eb08,param_1,uVar3,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar2);
}



// FUNCTION 14604a7f2 FUN_14604a7f2 body=268 status=ok
// SIG undefined FUN_14604a7f2(void)

undefined8 * FUN_14604a7f2(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1413f708e();
  *param_1 = &PTR_FUN_14abfa2c0;
  param_1[5] = &PTR_FUN_14abfa5e0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x12) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  FUN_1400b22c2(&local_28,"Set Tag Cooldown");
  if (param_1 + 6 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_28;
    *(undefined4 *)(param_1 + 7) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_1c;
  }
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x12) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x40a00000;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14604a900 FUN_14604a900 body=169 status=ok
// SIG undefined FUN_14604a900(void)

void FUN_14604a900(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14604a9aa(&local_2c,local_1c != 0);
  *param_3 = local_2c;
  param_3[1] = uStack_28;
  param_3[2] = uStack_24;
  param_3[3] = uStack_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14604a9aa FUN_14604a9aa body=40 status=ok
// SIG undefined FUN_14604a9aa(void)

void FUN_14604a9aa(undefined1 *param_1,byte param_2)

{
  undefined8 *puVar1;
  
  *param_1 = 1;
  puVar1 = &DAT_14cb7c580;
  if (param_2 != 0) {
    puVar1 = &DAT_14cb7c588;
  }
  *(uint *)(param_1 + 0xc) = (uint)param_2;
  *(undefined8 *)(param_1 + 4) = *puVar1;
  return;
}



// FUNCTION 14604a9de FUN_14604a9de body=269 status=ok
// SIG undefined FUN_14604a9de(void)

undefined8 * FUN_14604a9de(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  FUN_140312256();
  *param_1 = &PTR_FUN_14b0c8e60;
  param_1[0x72] = &PTR_FUN_14b0c94a0;
  param_1[0x73] = &PTR_FUN_14b0c94d0;
  param_1[0x74] = &PTR_FUN_14b0c9540;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 2;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0;
  param_1[0x85] = 2;
  uVar1 = DAT_14cb7e0d0;
  uVar2 = FUN_144a799b0();
  plVar3 = (longlong *)FUN_14048696c(param_1,uVar1,uVar2,uVar2,0,1);
  if ((plVar3 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    param_1[0x39] = plVar3;
    if (plVar3 == (longlong *)0x0) {
      return param_1;
    }
  }
  else {
    FUN_1456cec3c(plVar3);
    param_1[0x39] = plVar3;
  }
  (**(code **)(*plVar3 + 0x588))(plVar3,0);
  return param_1;
}



// FUNCTION 14604aaec FUN_14604aaec body=67 status=ok
// SIG undefined FUN_14604aaec(void)

void FUN_14604aaec(longlong *param_1)

{
  if (*(int *)((longlong)param_1 + 0x3c) < 1) {
    *(byte *)((longlong)param_1 + 0x89) = *(byte *)((longlong)param_1 + 0x89) | 2;
  }
  else if ((*(byte *)(param_1 + 0x11) & 0x82) == 0) {
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 0x80;
    (**(code **)(*param_1 + 0x68))(param_1);
    FUN_140f97840(param_1);
    return;
  }
  return;
}



// FUNCTION 14604ab30 FUN_14604ab30 body=429 status=ok
// SIG undefined FUN_14604ab30(void)

undefined8 * FUN_14604ab30(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 == (longlong *)0x0) {
LAB_14604ac94:
    *param_2 = 0;
  }
  else {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_14604ac94;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 0x38);
    if (lVar4 == 0) {
      *param_2 = 0;
    }
    else {
      local_50 = (undefined8 *)0x0;
      local_48 = 0;
      FUN_1446efa72(&local_50,0,2,0x10);
      local_48 = 2;
      *local_50 = &PTR_LAB_149e06450;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar6 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar6 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar6;
      local_50[2] = lVar8;
      *local_50 = &PTR_FUN_14b95ef40;
      local_50[3] = param_1;
      FUN_14604ad5c(lVar4,&local_58,&local_50);
      *(undefined8 *)(param_1 + 0x30) = local_58;
      FUN_1449db362(&local_50);
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
    if (lVar4 != 0) {
      local_50 = (undefined8 *)0x0;
      local_48 = 0;
      FUN_14604acde(&local_50,param_3);
      FUN_14604aeba(param_1 + 0x18,param_2,&local_50);
      FUN_1449db362(&local_50);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14604acde FUN_14604acde body=124 status=ok
// SIG undefined FUN_14604acde(void)

void FUN_14604acde(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14604ad5c FUN_14604ad5c body=202 status=ok
// SIG undefined FUN_14604ad5c(void)

undefined8 * FUN_14604ad5c(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  
  cVar4 = (**(code **)(*param_1 + 0x58))();
  if (((cVar4 != '\0') && (cVar4 = FUN_140373de4(param_1), cVar4 != '\0')) &&
     (cVar4 = FUN_144729dda(param_1 + 4), cVar4 != '\0')) {
    iVar2 = (int)param_1[0xd];
    *(uint *)(param_1 + 0xd) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x6c) < iVar2 + 1U) {
      FUN_14604ae26(param_1 + 0xc,iVar2);
    }
    puVar1 = (undefined8 *)(param_1[0xc] + (longlong)iVar2 * 0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    FUN_144a450dc(puVar1 + 1,param_3);
    lVar5 = (longlong)((int)param_1[0xd] + -1);
    if ((*(int *)(param_1[0xc] + 0x10 + lVar5 * 0x18) != 0) &&
       (plVar3 = *(longlong **)(param_1[0xc] + lVar5 * 0x18 + 8), plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x38))(plVar3,param_2);
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14604ae26 FUN_14604ae26 body=147 status=ok
// SIG undefined FUN_14604ae26(void)

void FUN_14604ae26(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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



// FUNCTION 14604aeba FUN_14604aeba body=216 status=ok
// SIG undefined FUN_14604aeba(void)

undefined8 * FUN_14604aeba(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14604af94 FUN_14604af94 body=262 status=ok
// SIG undefined FUN_14604af94(void)

void FUN_14604af94(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_141237e80();
  lVar1 = FUN_140059518(param_1 + 0x14);
  if (lVar1 != 0) {
    lVar2 = FUN_1400b6e86(lVar1);
    if (lVar2 != 0) {
      lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x30) + 0x18))(lVar2 + 0x30);
      if (lVar2 != 0) {
        lVar3 = FUN_1410c44e8();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          FUN_14604b11a(&local_38);
          FUN_14604b09c(lVar2 + 0x120,param_1 + -0x30,local_38);
        }
      }
    }
    lVar1 = FUN_14120f7e6(lVar1);
    if (lVar1 != 0) {
      local_50 = FUN_145840616;
      local_48 = 0;
      FUN_14604b1e0(lVar1 + 0xb0,&local_40,param_1 + -0x30);
      *(undefined8 *)(param_1 + 0x78) = local_40;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14604b09c FUN_14604b09c body=125 status=ok
// SIG undefined FUN_14604b09c(void)

void FUN_14604b09c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_38 = (undefined4)local_48;
  uStack_34 = local_48._4_4_;
  uStack_30 = (undefined4)uStack_40;
  uStack_2c = uStack_40._4_4_;
  FUN_1403350f6(param_1);
  FUN_144a7b126(param_1,&local_21,1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14604b11a FUN_14604b11a body=196 status=ok
// SIG undefined FUN_14604b11a(void)

undefined8 * FUN_14604b11a(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  wchar_t local_58 [36];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd8048) {
    FUN_144b3d300(&DAT_14cbd8048);
    if (DAT_14cbd8048 == -1) {
      builtin_wcsncpy(local_58 + 0x10,L"ettingsApplied",0xf);
      builtin_wcsncpy(local_58 + 8,L"edInputS",8);
      builtin_wcsncpy(local_58,L"OnEnhanc",8);
      FUN_1446f470e(&DAT_14cbd8040,local_58,1);
      _Init_thread_footer(&DAT_14cbd8048);
    }
  }
  *param_1 = DAT_14cbd8040;
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14604b1e0 FUN_14604b1e0 body=254 status=ok
// SIG undefined FUN_14604b1e0(void)

undefined8
FUN_14604b1e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b53f0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14604b2ea FUN_14604b2ea body=362 status=ok
// SIG undefined FUN_14604b2ea(void)

undefined8 * FUN_14604b2ea(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446f470e(&local_30,L"LightComponent0",1);
  uVar2 = FUN_141331fc4();
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,uVar2,0);
  FUN_140c80f9c(param_1,param_2);
  *param_1 = &PTR_FUN_14a5e8550;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae9280) {
    FUN_144b3d300(&DAT_14cae9280);
    if (DAT_14cae9280 == -1) {
      FUN_1415c6b3a();
      atexit((_func_5014 *)&LAB_14355fe8d);
      _Init_thread_footer(&DAT_14cae9280);
    }
  }
  plVar1 = (longlong *)param_1[0x72];
  *(undefined1 *)((longlong)plVar1 + 0x1fb) = 1;
  local_48 = 0xc047000000000000;
  local_40 = 0;
  uStack_38 = 0;
  local_68 = 0;
  FUN_14020f75c(plVar1,&local_48,0,0);
  local_60 = 0x4004000000000000;
  local_58 = 0x4004000000000000;
  local_50 = 0x4004000000000000;
  (**(code **)(*plVar1 + 0x478))(plVar1);
  if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar1);
  }
  param_1[0x39] = plVar1;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14604b460 FUN_14604b460 body=549 status=ok
// SIG undefined FUN_14604b460(void)

undefined8 * FUN_14604b460(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b374370;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 2;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ac) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x19200;
  param_1[0x17] = "progress_graph";
  lVar4 = FUN_140e2014e();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_60,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_60;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_5c;
    *(undefined4 *)(param_1 + 0x5c) = uStack_58;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_54;
    if (param_1 + 0x5b == (undefined8 *)&local_60) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_50;
      local_50 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_48;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_44;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_14604b590;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_14604b590:
  FUN_1400b22c2(local_70,"GbxProgress.Progress Graphs");
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14604b686 FUN_14604b686 body=141 status=ok
// SIG undefined FUN_14604b686(void)

void FUN_14604b686(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_14604b714(param_1 + 9);
  FUN_144959b6a(param_1[7],(int)param_1[8]);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_141175adb(param_1[5],(int)param_1[6]);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14604b714 FUN_14604b714 body=55 status=ok
// SIG undefined FUN_14604b714(void)

void FUN_14604b714(longlong *param_1)

{
  FUN_14604b74c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14604b74c FUN_14604b74c body=363 status=ok
// SIG undefined FUN_14604b74c(void)

void FUN_14604b74c(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_1449db362(*local_70 + (longlong)iStack_54 * 0x20 + 8);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14604b8ba FUN_14604b8ba body=292 status=ok
// SIG undefined FUN_14604b8ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14604b8ba(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca89498) {
    FUN_144b3d300(&DAT_14ca89498);
    if (DAT_14ca89498 == -1) {
      FUN_14604bb32();
      FUN_14604b9de();
      FUN_140db5666(&DAT_14ca893f0,0,&DAT_14ca89388,L"FInstancedScreenVertexShaderVS",
                    L"/Engine/Private/Tools/FullscreenVertexShader.usf",L"MainVS",0,1,FUN_1474194ce,
                    FUN_1474194a6,FUN_14631bb38,&LAB_1474194a2,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca91268);
      _DAT_14ca893f0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f21c0);
      _Init_thread_footer(&DAT_14ca89498);
    }
  }
  return &DAT_14ca893f0;
}



// FUNCTION 14604b9de FUN_14604b9de body=205 status=ok
// SIG undefined FUN_14604b9de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604b9de(void)

{
  if ((DAT_14ca893ef & 2) == 0) {
    DAT_14ca893ef = DAT_14ca893ef | 2;
    _DAT_14ca89390 = L"FInstancedScreenVertexShaderVS";
    _DAT_14ca893a8 = FUN_146826540;
    _DAT_14ca893b0 = FUN_146825d77;
    _DAT_14ca893b8 = FUN_146825fd6;
    _DAT_14ca893c0 = FUN_1407e02ea;
    _DAT_14ca893c8 = FUN_146826273;
    _DAT_14ca893a0 = FUN_147419472;
    _DAT_14ca893e0 = 0xffffffff000000e0;
    _DAT_14ca893e8 = 8;
    DAT_14ca893ec = 0;
    _DAT_14ca893d0 = &LAB_14741949e;
    FUN_14604baac();
    FUN_1407e00cc(&DAT_14ca89388);
    return;
  }
  return;
}



// FUNCTION 14604baac FUN_14604baac body=133 status=ok
// SIG undefined FUN_14604baac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604baac(void)

{
  _DAT_14ca93c80 = L"BASE";
  DAT_14ca93caa = 4;
  FUN_145e0d8e0();
  _DAT_14ca93c90 = DAT_14ca89398;
  _DAT_14ca93c88 = &DAT_14ca89260;
  _DAT_14ca93c98 = &LAB_14682652b;
  DAT_14ca89398 = &DAT_14ca93c80;
  DAT_14ca893ed = DAT_14ca893ed + '\x01';
  _DAT_14ca93ca0 = 0x100000000;
  if (DAT_14ca892c4 != '\0') {
    DAT_14ca893ee = DAT_14ca893ee + '\x01';
  }
  return;
}



// FUNCTION 14604bb32 FUN_14604bb32 body=263 status=ok
// SIG undefined FUN_14604bb32(void)

void FUN_14604bb32(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca912e8) {
    FUN_144b3d300(&DAT_14ca912e8);
    if (DAT_14ca912e8 == -1) {
      FUN_14604bc3a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x86;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca91268,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f878e);
      _Init_thread_footer(&DAT_14ca912e8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14604bc3a FUN_14604bc3a body=228 status=ok
// SIG undefined FUN_14604bc3a(void)

longlong * FUN_14604bc3a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_147422b38;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14604bd20 FUN_14604bd20 body=30 status=ok
// SIG undefined FUN_14604bd20(void)

undefined8 FUN_14604bd20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3,param_4,*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 14604bd3e FUN_14604bd3e body=279 status=ok
// SIG undefined FUN_14604bd3e(void)

void FUN_14604bd3e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = param_4;
  cVar4 = FUN_144729dda();
  if (cVar4 != '\0') {
    uVar6 = FUN_14479d2ce(&local_30);
    lVar7 = FUN_144a7af92(uVar6);
    if (lVar7 != 0) {
      FUN_1404d1e78(&local_40,lVar7);
      if (((local_40 != 0) && (local_38 != (longlong *)0x0)) && (0 < (int)local_38[1])) {
        iVar5 = (int)local_38[1];
        do {
          if (iVar5 == 0) {
            plVar8 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar3 = (int)local_38[1];
          bVar9 = iVar5 == iVar3;
          if (bVar9) {
            *(int *)(local_38 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
          plVar8 = local_38;
        } while (!bVar9);
        lVar7 = 0;
        if (plVar8 != (longlong *)0x0) {
          lVar7 = local_40;
        }
        FUN_1403a0728(param_1 + 0x38,&local_48);
        if (*(longlong *)(lVar7 + 0x430) != local_48) {
          FUN_14604be56(lVar7);
        }
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
      }
      if (local_38 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_38 + 0x10))();
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14604be56 FUN_14604be56 body=61 status=ok
// SIG undefined FUN_14604be56(void)

void FUN_14604be56(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x428) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x420);
    lVar2 = (longlong)*(int *)(param_1 + 0x428) * 0xc;
    do {
      if (*plVar1 == param_2) {
        if (plVar1 == (longlong *)0x0) {
          return;
        }
        FUN_1457d922a(param_1,(int)plVar1[1],CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
        return;
      }
      plVar1 = (longlong *)((longlong)plVar1 + 0xc);
      lVar2 = lVar2 + -0xc;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 14604be93 FUN_14604be93 body=244 status=ok
// SIG undefined FUN_14604be93(void)

void FUN_14604be93(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = param_4;
  cVar4 = FUN_1412b46ca(param_1 + 0x38);
  if ((cVar4 == '\0') && (cVar4 = FUN_144729dda(&local_18), cVar4 != '\0')) {
    uVar6 = FUN_14479d2ce(&local_18);
    lVar7 = FUN_144a7af92(uVar6);
    if (lVar7 != 0) {
      FUN_1404d1e78(&local_28,lVar7);
      if (((local_28 != 0) && (local_20 != (longlong *)0x0)) && (0 < (int)local_20[1])) {
        iVar5 = (int)local_20[1];
        do {
          if (iVar5 == 0) {
            plVar8 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar3 = (int)local_20[1];
          bVar9 = iVar5 == iVar3;
          if (bVar9) {
            *(int *)(local_20 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
          plVar8 = local_20;
        } while (!bVar9);
        lVar7 = 0;
        if (plVar8 != (longlong *)0x0) {
          lVar7 = local_28;
        }
        FUN_14604bf88(lVar7);
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
      }
      if (local_20 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))();
        }
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14604bf88 FUN_14604bf88 body=787 status=ok
// SIG undefined FUN_14604bf88(void)

void FUN_14604bf88(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined1 auStack_118 [40];
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong uStack_b0;
  uint local_a8;
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  ulonglong uStack_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar6 = local_80;
  if (*(char *)(param_1 + 0x298) == '\x01') {
    local_f0 = (longlong *)(param_1 + 0x448);
    local_e8 = param_1 + 0x458;
    local_c8 = 0x100000000;
    local_b8 = 0xffffffff;
    uStack_b0 = uStack_b0 & 0xffffffff00000000;
    uStack_c0 = local_e8;
    if (*(int *)(param_1 + 0x470) == 0) {
      iVar11 = 0;
    }
    else {
      FUN_1449c0562(&local_c8);
      iVar11 = *(int *)(param_1 + 0x470);
    }
    local_80 = local_b8;
    uVar6 = local_80;
    uStack_78 = uStack_b0;
    local_90 = (undefined4)local_c8;
    uStack_8c = local_c8._4_4_;
    uStack_88 = (undefined4)uStack_c0;
    uStack_84 = uStack_c0._4_4_;
    local_98 = local_f0;
    local_80._4_4_ = (int)(local_b8 >> 0x20);
    if ((local_80._4_4_ != iVar11) || (uStack_c0 != local_e8)) {
      local_e0 = (longlong *)(param_1 + 0x4e8);
      iVar8 = local_80._4_4_;
      local_80 = uVar6;
      do {
        uVar6 = local_b8;
        if (*(longlong *)(*local_98 + 8 + (longlong)iVar8 * 0x20) != 0) {
          puVar12 = (undefined8 *)(*local_98 + (longlong)iVar8 * 0x20);
          uStack_c0 = 0;
          uStack_b0 = 0x4120000000000000;
          local_a8 = local_a8 & 0xffffff00;
          local_c8 = *(undefined8 *)(puVar12[1] + 0x20);
          local_b8 = local_b8 & 0xffffff0000000000;
          uVar5 = local_b8;
          lVar10 = puVar12[1];
          if (&local_c8 != (undefined8 *)(lVar10 + 0x28)) {
            *(uint *)(lVar10 + 0x48) = local_a8;
            *(undefined4 *)(lVar10 + 0x38) = 0;
            *(undefined1 *)(lVar10 + 0x3c) = 0;
            local_b8._5_2_ = SUB82(uVar6,5);
            *(undefined2 *)(lVar10 + 0x3d) = local_b8._5_2_;
            local_b8._7_1_ = SUB81(uVar6,7);
            *(undefined1 *)(lVar10 + 0x3f) = local_b8._7_1_;
            *(undefined8 *)(lVar10 + 0x40) = 0x4120000000000000;
            *(undefined8 *)(lVar10 + 0x28) = local_c8;
            *(undefined8 *)(lVar10 + 0x30) = 0;
            *(undefined1 *)(lVar10 + 0x4c) = 1;
            lVar10 = puVar12[1];
          }
          *(undefined4 *)(lVar10 + 0x50) = 0;
          lVar10 = puVar12[1];
          if (*(char *)(lVar10 + 0x58) == '\x01') {
            *(undefined1 *)(lVar10 + 0x58) = 0;
            lVar10 = puVar12[1];
          }
          iVar8 = *(int *)(lVar10 + 0x10);
          local_b8 = uVar5;
          if ((longlong)iVar8 == 0) {
            uVar13 = 0;
          }
          else {
            lVar10 = *(longlong *)(lVar10 + 8);
            lVar9 = 0;
            do {
              puVar1 = (undefined4 *)(lVar10 + lVar9);
              local_d8 = *puVar1;
              uStack_d4 = puVar1[1];
              uStack_d0 = puVar1[2];
              uStack_cc = puVar1[3];
              plVar3 = *(longlong **)(puVar1 + 2);
              if (plVar3 != (longlong *)0x0) {
                cVar7 = FUN_144729dda(&local_d8);
                if (cVar7 != '\0') {
                  (**(code **)(*plVar3 + 0x40))(plVar3,&local_c8);
                }
              }
              lVar9 = lVar9 + 0x10;
            } while ((longlong)iVar8 * 0x10 != lVar9);
            uVar13 = (undefined4)local_b8;
          }
          uVar4 = local_c8;
          uVar2 = *puVar12;
          iVar8 = *(int *)(param_1 + 0x4f0);
          lVar10 = (longlong)iVar8;
          *(uint *)(param_1 + 0x4f0) = iVar8 + 1U;
          if (*(uint *)(param_1 + 0x4f4) < iVar8 + 1U) {
            FUN_1457d97f6(local_e0,iVar8);
          }
          lVar9 = *local_e0;
          *(undefined8 *)(lVar9 + lVar10 * 0x14) = uVar2;
          *(undefined8 *)(lVar9 + 8 + lVar10 * 0x14) = uVar4;
          *(undefined4 *)(lVar9 + 0x10 + lVar10 * 0x14) = uVar13;
        }
        local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_8c);
        FUN_1449c0562(&local_90);
        iVar8 = local_80._4_4_;
        uVar6 = local_80;
      } while (local_98 != local_f0 ||
               (CONCAT44(uStack_84,uStack_88) != local_e8 || local_80._4_4_ != iVar11));
    }
  }
  local_80 = uVar6;
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14604c29c FUN_14604c29c body=25 status=ok
// SIG undefined FUN_14604c29c(void)

void FUN_14604c29c(void)

{
  FUN_14604c2b6();
  atexit((_func_5014 *)&LAB_142b8dc2b);
  return;
}



// FUNCTION 14604c2b6 FUN_14604c2b6 body=248 status=ok
// SIG undefined FUN_14604c2b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604c2b6(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9b7a20 = 0xffffffff;
  _DAT_14c9b7a24 = 0x105;
  DAT_14c9b7a26 = 0;
  _DAT_14c9b7a18 = &PTR_FUN_14a1f6000;
  DAT_14c9b7a28 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f2334(&local_18);
    lVar3 = DAT_14c9b7a28;
    DAT_14c9b7a28 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9b7a18,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604c3b6 FUN_14604c3b6 body=25 status=ok
// SIG undefined FUN_14604c3b6(void)

void FUN_14604c3b6(void)

{
  FUN_14604c3d0();
  atexit((_func_5014 *)&LAB_142b8dc37);
  return;
}



// FUNCTION 14604c3d0 FUN_14604c3d0 body=248 status=ok
// SIG undefined FUN_14604c3d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604c3d0(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9b7a38 = 0xffffffff;
  _DAT_14c9b7a3c = 0x105;
  DAT_14c9b7a3e = 0;
  _DAT_14c9b7a30 = &PTR_FUN_14a1f6030;
  DAT_14c9b7a40 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f243e(&local_18);
    lVar3 = DAT_14c9b7a40;
    DAT_14c9b7a40 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9b7a30,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604c4d0 FUN_14604c4d0 body=25 status=ok
// SIG undefined FUN_14604c4d0(void)

void FUN_14604c4d0(void)

{
  FUN_14604c4ea();
  atexit((_func_5014 *)&LAB_142b8dc7f);
  return;
}



// FUNCTION 14604c4ea FUN_14604c4ea body=248 status=ok
// SIG undefined FUN_14604c4ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604c4ea(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9b7a50 = 0xffffffff;
  _DAT_14c9b7a54 = 0x105;
  DAT_14c9b7a56 = 0;
  _DAT_14c9b7a48 = &PTR_FUN_14a1f6060;
  DAT_14c9b7a58 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f2a7a(&local_18);
    lVar3 = DAT_14c9b7a58;
    DAT_14c9b7a58 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9b7a48,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604c5ea FUN_14604c5ea body=25 status=ok
// SIG undefined FUN_14604c5ea(void)

void FUN_14604c5ea(void)

{
  FUN_14604c604();
  atexit((_func_5014 *)&LAB_142b8dcf7);
  return;
}



// FUNCTION 14604c604 FUN_14604c604 body=248 status=ok
// SIG undefined FUN_14604c604(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604c604(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9b7ac8 = 0xffffffff;
  _DAT_14c9b7acc = 0x105;
  DAT_14c9b7ace = 0;
  _DAT_14c9b7ac0 = &PTR_FUN_14a1f6150;
  DAT_14c9b7ad0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f2c8e(&local_18);
    lVar3 = DAT_14c9b7ad0;
    DAT_14c9b7ad0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9b7ac0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604c704 FUN_14604c704 body=25 status=ok
// SIG undefined FUN_14604c704(void)

void FUN_14604c704(void)

{
  FUN_14604c71e();
  atexit((_func_5014 *)&LAB_142b8dd93);
  return;
}



// FUNCTION 14604c71e FUN_14604c71e body=248 status=ok
// SIG undefined FUN_14604c71e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604c71e(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9b7ba0 = 0xffffffff;
  _DAT_14c9b7ba4 = 0x105;
  DAT_14c9b7ba6 = 0;
  _DAT_14c9b7b98 = &PTR_FUN_14a1f6520;
  DAT_14c9b7ba8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f2d98(&local_18);
    lVar3 = DAT_14c9b7ba8;
    DAT_14c9b7ba8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9b7b98,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604c81e FUN_14604c81e body=25 status=ok
// SIG undefined FUN_14604c81e(void)

void FUN_14604c81e(void)

{
  FUN_14604c838();
  atexit((_func_5014 *)&LAB_142b8ddcf);
  return;
}



// FUNCTION 14604c838 FUN_14604c838 body=248 status=ok
// SIG undefined FUN_14604c838(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604c838(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9b7bd0 = 0xffffffff;
  _DAT_14c9b7bd4 = 0x105;
  DAT_14c9b7bd6 = 0;
  _DAT_14c9b7bc8 = &PTR_FUN_14a1f6800;
  DAT_14c9b7bd8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f30b6(&local_18);
    lVar3 = DAT_14c9b7bd8;
    DAT_14c9b7bd8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9b7bc8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604c938 FUN_14604c938 body=25 status=ok
// SIG undefined FUN_14604c938(void)

void FUN_14604c938(void)

{
  FUN_14604c952();
  atexit((_func_5014 *)&LAB_142bc025d);
  return;
}



// FUNCTION 14604c952 FUN_14604c952 body=248 status=ok
// SIG undefined FUN_14604c952(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604c952(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3050 = 0xffffffff;
  _DAT_14c9c3054 = 0x105;
  DAT_14c9c3056 = 0;
  _DAT_14c9c3048 = &PTR_FUN_14a201a10;
  DAT_14c9c3058 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f31c0(&local_18);
    lVar3 = DAT_14c9c3058;
    DAT_14c9c3058 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3048,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604ca52 FUN_14604ca52 body=25 status=ok
// SIG undefined FUN_14604ca52(void)

void FUN_14604ca52(void)

{
  FUN_14604ca6c();
  atexit((_func_5014 *)&LAB_142bc0305);
  return;
}



// FUNCTION 14604ca6c FUN_14604ca6c body=248 status=ok
// SIG undefined FUN_14604ca6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604ca6c(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3188 = 0xffffffff;
  _DAT_14c9c318c = 0x105;
  DAT_14c9c318e = 0;
  _DAT_14c9c3180 = &PTR_FUN_14a201de0;
  DAT_14c9c3190 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f33d4(&local_18);
    lVar3 = DAT_14c9c3190;
    DAT_14c9c3190 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3180,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604cb6c FUN_14604cb6c body=25 status=ok
// SIG undefined FUN_14604cb6c(void)

void FUN_14604cb6c(void)

{
  FUN_14604cb86();
  atexit((_func_5014 *)&LAB_142bc0311);
  return;
}



// FUNCTION 14604cb86 FUN_14604cb86 body=248 status=ok
// SIG undefined FUN_14604cb86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604cb86(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c31a0 = 0xffffffff;
  _DAT_14c9c31a4 = 0x105;
  DAT_14c9c31a6 = 0;
  _DAT_14c9c3198 = &PTR_FUN_14a201e10;
  DAT_14c9c31a8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f34de(&local_18);
    lVar3 = DAT_14c9c31a8;
    DAT_14c9c31a8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3198,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604cc86 FUN_14604cc86 body=25 status=ok
// SIG undefined FUN_14604cc86(void)

void FUN_14604cc86(void)

{
  FUN_14604cca0();
  atexit((_func_5014 *)&LAB_142bc031d);
  return;
}



// FUNCTION 14604cca0 FUN_14604cca0 body=248 status=ok
// SIG undefined FUN_14604cca0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604cca0(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c31b8 = 0xffffffff;
  _DAT_14c9c31bc = 0x105;
  DAT_14c9c31be = 0;
  _DAT_14c9c31b0 = &PTR_FUN_14a201e40;
  DAT_14c9c31c0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f35e8(&local_18);
    lVar3 = DAT_14c9c31c0;
    DAT_14c9c31c0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c31b0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604cda0 FUN_14604cda0 body=25 status=ok
// SIG undefined FUN_14604cda0(void)

void FUN_14604cda0(void)

{
  FUN_14604cdba();
  atexit((_func_5014 *)&LAB_142bc0329);
  return;
}



// FUNCTION 14604cdba FUN_14604cdba body=248 status=ok
// SIG undefined FUN_14604cdba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604cdba(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c31d0 = 0xffffffff;
  _DAT_14c9c31d4 = 0x105;
  DAT_14c9c31d6 = 0;
  _DAT_14c9c31c8 = &PTR_FUN_14a201e70;
  DAT_14c9c31d8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f36f2(&local_18);
    lVar3 = DAT_14c9c31d8;
    DAT_14c9c31d8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c31c8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604ceba FUN_14604ceba body=25 status=ok
// SIG undefined FUN_14604ceba(void)

void FUN_14604ceba(void)

{
  FUN_14604ced4();
  atexit((_func_5014 *)&LAB_142bc0335);
  return;
}



// FUNCTION 14604ced4 FUN_14604ced4 body=248 status=ok
// SIG undefined FUN_14604ced4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604ced4(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c31e8 = 0xffffffff;
  _DAT_14c9c31ec = 0x105;
  DAT_14c9c31ee = 0;
  _DAT_14c9c31e0 = &PTR_FUN_14a201ea0;
  DAT_14c9c31f0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f37fc(&local_18);
    lVar3 = DAT_14c9c31f0;
    DAT_14c9c31f0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c31e0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604cfd4 FUN_14604cfd4 body=25 status=ok
// SIG undefined FUN_14604cfd4(void)

void FUN_14604cfd4(void)

{
  FUN_14604cfee();
  atexit((_func_5014 *)&LAB_142bc0341);
  return;
}



// FUNCTION 14604cfee FUN_14604cfee body=248 status=ok
// SIG undefined FUN_14604cfee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604cfee(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3200 = 0xffffffff;
  _DAT_14c9c3204 = 0x105;
  DAT_14c9c3206 = 0;
  _DAT_14c9c31f8 = &PTR_FUN_14a201ed0;
  DAT_14c9c3208 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f3906(&local_18);
    lVar3 = DAT_14c9c3208;
    DAT_14c9c3208 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c31f8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604d0ee FUN_14604d0ee body=25 status=ok
// SIG undefined FUN_14604d0ee(void)

void FUN_14604d0ee(void)

{
  FUN_14604d108();
  atexit((_func_5014 *)&LAB_142bc034d);
  return;
}



// FUNCTION 14604d108 FUN_14604d108 body=248 status=ok
// SIG undefined FUN_14604d108(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604d108(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3218 = 0xffffffff;
  _DAT_14c9c321c = 0x105;
  DAT_14c9c321e = 0;
  _DAT_14c9c3210 = &PTR_FUN_14a201f00;
  DAT_14c9c3220 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f3a10(&local_18);
    lVar3 = DAT_14c9c3220;
    DAT_14c9c3220 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3210,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604d208 FUN_14604d208 body=25 status=ok
// SIG undefined FUN_14604d208(void)

void FUN_14604d208(void)

{
  FUN_14604d222();
  atexit((_func_5014 *)&LAB_142bc0359);
  return;
}



// FUNCTION 14604d222 FUN_14604d222 body=248 status=ok
// SIG undefined FUN_14604d222(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604d222(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3230 = 0xffffffff;
  _DAT_14c9c3234 = 0x105;
  DAT_14c9c3236 = 0;
  _DAT_14c9c3228 = &PTR_FUN_14a201f30;
  DAT_14c9c3238 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f3b1a(&local_18);
    lVar3 = DAT_14c9c3238;
    DAT_14c9c3238 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3228,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604d322 FUN_14604d322 body=25 status=ok
// SIG undefined FUN_14604d322(void)

void FUN_14604d322(void)

{
  FUN_14604d33c();
  atexit((_func_5014 *)&LAB_142bc0365);
  return;
}



// FUNCTION 14604d33c FUN_14604d33c body=248 status=ok
// SIG undefined FUN_14604d33c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604d33c(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3248 = 0xffffffff;
  _DAT_14c9c324c = 0x105;
  DAT_14c9c324e = 0;
  _DAT_14c9c3240 = &PTR_FUN_14a201f60;
  DAT_14c9c3250 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f3c24(&local_18);
    lVar3 = DAT_14c9c3250;
    DAT_14c9c3250 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3240,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604d43c FUN_14604d43c body=25 status=ok
// SIG undefined FUN_14604d43c(void)

void FUN_14604d43c(void)

{
  FUN_14604d456();
  atexit((_func_5014 *)&LAB_142bc0371);
  return;
}



// FUNCTION 14604d456 FUN_14604d456 body=248 status=ok
// SIG undefined FUN_14604d456(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604d456(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3260 = 0xffffffff;
  _DAT_14c9c3264 = 0x105;
  DAT_14c9c3266 = 0;
  _DAT_14c9c3258 = &PTR_FUN_14a201f90;
  DAT_14c9c3268 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f3d2e(&local_18);
    lVar3 = DAT_14c9c3268;
    DAT_14c9c3268 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3258,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604d556 FUN_14604d556 body=25 status=ok
// SIG undefined FUN_14604d556(void)

void FUN_14604d556(void)

{
  FUN_14604d570();
  atexit((_func_5014 *)&LAB_142bc037d);
  return;
}



// FUNCTION 14604d570 FUN_14604d570 body=248 status=ok
// SIG undefined FUN_14604d570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604d570(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3278 = 0xffffffff;
  _DAT_14c9c327c = 0x105;
  DAT_14c9c327e = 0;
  _DAT_14c9c3270 = &PTR_FUN_14a201fc0;
  DAT_14c9c3280 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f3e38(&local_18);
    lVar3 = DAT_14c9c3280;
    DAT_14c9c3280 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3270,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604d670 FUN_14604d670 body=25 status=ok
// SIG undefined FUN_14604d670(void)

void FUN_14604d670(void)

{
  FUN_14604d68a();
  atexit((_func_5014 *)&LAB_142bc0389);
  return;
}



// FUNCTION 14604d68a FUN_14604d68a body=248 status=ok
// SIG undefined FUN_14604d68a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604d68a(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3290 = 0xffffffff;
  _DAT_14c9c3294 = 0x105;
  DAT_14c9c3296 = 0;
  _DAT_14c9c3288 = &PTR_FUN_14a201ff0;
  DAT_14c9c3298 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f3f42(&local_18);
    lVar3 = DAT_14c9c3298;
    DAT_14c9c3298 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3288,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604d78a FUN_14604d78a body=25 status=ok
// SIG undefined FUN_14604d78a(void)

void FUN_14604d78a(void)

{
  FUN_14604d7a4();
  atexit((_func_5014 *)&LAB_142bc0395);
  return;
}



// FUNCTION 14604d7a4 FUN_14604d7a4 body=248 status=ok
// SIG undefined FUN_14604d7a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604d7a4(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c32a8 = 0xffffffff;
  _DAT_14c9c32ac = 0x105;
  DAT_14c9c32ae = 0;
  _DAT_14c9c32a0 = &PTR_FUN_14a202020;
  DAT_14c9c32b0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f404c(&local_18);
    lVar3 = DAT_14c9c32b0;
    DAT_14c9c32b0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c32a0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604d8a4 FUN_14604d8a4 body=25 status=ok
// SIG undefined FUN_14604d8a4(void)

void FUN_14604d8a4(void)

{
  FUN_14604d8be();
  atexit((_func_5014 *)&LAB_142bc03a1);
  return;
}



// FUNCTION 14604d8be FUN_14604d8be body=248 status=ok
// SIG undefined FUN_14604d8be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604d8be(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c32c0 = 0xffffffff;
  _DAT_14c9c32c4 = 0x105;
  DAT_14c9c32c6 = 0;
  _DAT_14c9c32b8 = &PTR_FUN_14a202050;
  DAT_14c9c32c8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f4156(&local_18);
    lVar3 = DAT_14c9c32c8;
    DAT_14c9c32c8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c32b8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604d9be FUN_14604d9be body=25 status=ok
// SIG undefined FUN_14604d9be(void)

void FUN_14604d9be(void)

{
  FUN_14604d9d8();
  atexit((_func_5014 *)&LAB_142bc03ad);
  return;
}



// FUNCTION 14604d9d8 FUN_14604d9d8 body=248 status=ok
// SIG undefined FUN_14604d9d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604d9d8(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c32d8 = 0xffffffff;
  _DAT_14c9c32dc = 0x105;
  DAT_14c9c32de = 0;
  _DAT_14c9c32d0 = &PTR_FUN_14a202080;
  DAT_14c9c32e0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f4260(&local_18);
    lVar3 = DAT_14c9c32e0;
    DAT_14c9c32e0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c32d0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604dad8 FUN_14604dad8 body=25 status=ok
// SIG undefined FUN_14604dad8(void)

void FUN_14604dad8(void)

{
  FUN_14604daf2();
  atexit((_func_5014 *)&LAB_142bc03b9);
  return;
}



// FUNCTION 14604daf2 FUN_14604daf2 body=248 status=ok
// SIG undefined FUN_14604daf2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604daf2(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c32f0 = 0xffffffff;
  _DAT_14c9c32f4 = 0x105;
  DAT_14c9c32f6 = 0;
  _DAT_14c9c32e8 = &PTR_FUN_14a2020b0;
  DAT_14c9c32f8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f436a(&local_18);
    lVar3 = DAT_14c9c32f8;
    DAT_14c9c32f8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c32e8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604dbf2 FUN_14604dbf2 body=25 status=ok
// SIG undefined FUN_14604dbf2(void)

void FUN_14604dbf2(void)

{
  FUN_14604dc0c();
  atexit((_func_5014 *)&LAB_142bc03c5);
  return;
}



// FUNCTION 14604dc0c FUN_14604dc0c body=248 status=ok
// SIG undefined FUN_14604dc0c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604dc0c(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3308 = 0xffffffff;
  _DAT_14c9c330c = 0x105;
  DAT_14c9c330e = 0;
  _DAT_14c9c3300 = &PTR_FUN_14a2020e0;
  DAT_14c9c3310 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f4474(&local_18);
    lVar3 = DAT_14c9c3310;
    DAT_14c9c3310 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3300,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604dd0c FUN_14604dd0c body=25 status=ok
// SIG undefined FUN_14604dd0c(void)

void FUN_14604dd0c(void)

{
  FUN_14604dd26();
  atexit((_func_5014 *)&LAB_142bc03d1);
  return;
}



// FUNCTION 14604dd26 FUN_14604dd26 body=248 status=ok
// SIG undefined FUN_14604dd26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604dd26(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3320 = 0xffffffff;
  _DAT_14c9c3324 = 0x105;
  DAT_14c9c3326 = 0;
  _DAT_14c9c3318 = &PTR_FUN_14a202110;
  DAT_14c9c3328 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f457e(&local_18);
    lVar3 = DAT_14c9c3328;
    DAT_14c9c3328 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3318,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604de26 FUN_14604de26 body=25 status=ok
// SIG undefined FUN_14604de26(void)

void FUN_14604de26(void)

{
  FUN_14604de40();
  atexit((_func_5014 *)&LAB_142bc03dd);
  return;
}



// FUNCTION 14604de40 FUN_14604de40 body=248 status=ok
// SIG undefined FUN_14604de40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604de40(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3338 = 0xffffffff;
  _DAT_14c9c333c = 0x105;
  DAT_14c9c333e = 0;
  _DAT_14c9c3330 = &PTR_FUN_14a202140;
  DAT_14c9c3340 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f4688(&local_18);
    lVar3 = DAT_14c9c3340;
    DAT_14c9c3340 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3330,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604df40 FUN_14604df40 body=25 status=ok
// SIG undefined FUN_14604df40(void)

void FUN_14604df40(void)

{
  FUN_14604df5a();
  atexit((_func_5014 *)&LAB_142bc03e9);
  return;
}



// FUNCTION 14604df5a FUN_14604df5a body=248 status=ok
// SIG undefined FUN_14604df5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604df5a(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3350 = 0xffffffff;
  _DAT_14c9c3354 = 0x105;
  DAT_14c9c3356 = 0;
  _DAT_14c9c3348 = &PTR_FUN_14a202170;
  DAT_14c9c3358 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f4792(&local_18);
    lVar3 = DAT_14c9c3358;
    DAT_14c9c3358 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3348,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604e05a FUN_14604e05a body=25 status=ok
// SIG undefined FUN_14604e05a(void)

void FUN_14604e05a(void)

{
  FUN_14604e074();
  atexit((_func_5014 *)&LAB_142bc03f5);
  return;
}



// FUNCTION 14604e074 FUN_14604e074 body=248 status=ok
// SIG undefined FUN_14604e074(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604e074(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3368 = 0xffffffff;
  _DAT_14c9c336c = 0x105;
  DAT_14c9c336e = 0;
  _DAT_14c9c3360 = &PTR_FUN_14a2021a0;
  DAT_14c9c3370 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f489c(&local_18);
    lVar3 = DAT_14c9c3370;
    DAT_14c9c3370 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3360,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604e174 FUN_14604e174 body=25 status=ok
// SIG undefined FUN_14604e174(void)

void FUN_14604e174(void)

{
  FUN_14604e18e();
  atexit((_func_5014 *)&LAB_142bc0401);
  return;
}



// FUNCTION 14604e18e FUN_14604e18e body=248 status=ok
// SIG undefined FUN_14604e18e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604e18e(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3380 = 0xffffffff;
  _DAT_14c9c3384 = 0x105;
  DAT_14c9c3386 = 0;
  _DAT_14c9c3378 = &PTR_FUN_14a2021d0;
  DAT_14c9c3388 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f49a6(&local_18);
    lVar3 = DAT_14c9c3388;
    DAT_14c9c3388 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3378,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604e28e FUN_14604e28e body=25 status=ok
// SIG undefined FUN_14604e28e(void)

void FUN_14604e28e(void)

{
  FUN_14604e2a8();
  atexit((_func_5014 *)&LAB_142bc040d);
  return;
}



// FUNCTION 14604e2a8 FUN_14604e2a8 body=248 status=ok
// SIG undefined FUN_14604e2a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604e2a8(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3398 = 0xffffffff;
  _DAT_14c9c339c = 0x105;
  DAT_14c9c339e = 0;
  _DAT_14c9c3390 = &PTR_FUN_14a202200;
  DAT_14c9c33a0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f4ab0(&local_18);
    lVar3 = DAT_14c9c33a0;
    DAT_14c9c33a0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3390,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604e3a8 FUN_14604e3a8 body=25 status=ok
// SIG undefined FUN_14604e3a8(void)

void FUN_14604e3a8(void)

{
  FUN_14604e3c2();
  atexit((_func_5014 *)&LAB_142bc0419);
  return;
}



// FUNCTION 14604e3c2 FUN_14604e3c2 body=248 status=ok
// SIG undefined FUN_14604e3c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604e3c2(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c33b0 = 0xffffffff;
  _DAT_14c9c33b4 = 0x105;
  DAT_14c9c33b6 = 0;
  _DAT_14c9c33a8 = &PTR_FUN_14a202230;
  DAT_14c9c33b8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f4bba(&local_18);
    lVar3 = DAT_14c9c33b8;
    DAT_14c9c33b8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c33a8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604e4c2 FUN_14604e4c2 body=25 status=ok
// SIG undefined FUN_14604e4c2(void)

void FUN_14604e4c2(void)

{
  FUN_14604e4dc();
  atexit((_func_5014 *)&LAB_142bc0425);
  return;
}



// FUNCTION 14604e4dc FUN_14604e4dc body=248 status=ok
// SIG undefined FUN_14604e4dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604e4dc(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c33c8 = 0xffffffff;
  _DAT_14c9c33cc = 0x105;
  DAT_14c9c33ce = 0;
  _DAT_14c9c33c0 = &PTR_FUN_14a202260;
  DAT_14c9c33d0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f4cc4(&local_18);
    lVar3 = DAT_14c9c33d0;
    DAT_14c9c33d0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c33c0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604e5dc FUN_14604e5dc body=25 status=ok
// SIG undefined FUN_14604e5dc(void)

void FUN_14604e5dc(void)

{
  FUN_14604e5f6();
  atexit((_func_5014 *)&LAB_142bc0431);
  return;
}



// FUNCTION 14604e5f6 FUN_14604e5f6 body=248 status=ok
// SIG undefined FUN_14604e5f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604e5f6(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c33e0 = 0xffffffff;
  _DAT_14c9c33e4 = 0x105;
  DAT_14c9c33e6 = 0;
  _DAT_14c9c33d8 = &PTR_FUN_14a202290;
  DAT_14c9c33e8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f4dce(&local_18);
    lVar3 = DAT_14c9c33e8;
    DAT_14c9c33e8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c33d8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604e6f6 FUN_14604e6f6 body=25 status=ok
// SIG undefined FUN_14604e6f6(void)

void FUN_14604e6f6(void)

{
  FUN_14604e710();
  atexit((_func_5014 *)&LAB_142bc043d);
  return;
}



// FUNCTION 14604e710 FUN_14604e710 body=248 status=ok
// SIG undefined FUN_14604e710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604e710(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c33f8 = 0xffffffff;
  _DAT_14c9c33fc = 0x105;
  DAT_14c9c33fe = 0;
  _DAT_14c9c33f0 = &PTR_FUN_14a2022c0;
  DAT_14c9c3400 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f4ed8(&local_18);
    lVar3 = DAT_14c9c3400;
    DAT_14c9c3400 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c33f0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604e810 FUN_14604e810 body=25 status=ok
// SIG undefined FUN_14604e810(void)

void FUN_14604e810(void)

{
  FUN_14604e82a();
  atexit((_func_5014 *)&LAB_142bc0449);
  return;
}



// FUNCTION 14604e82a FUN_14604e82a body=248 status=ok
// SIG undefined FUN_14604e82a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604e82a(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3410 = 0xffffffff;
  _DAT_14c9c3414 = 0x105;
  DAT_14c9c3416 = 0;
  _DAT_14c9c3408 = &PTR_FUN_14a2022f0;
  DAT_14c9c3418 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f4fe2(&local_18);
    lVar3 = DAT_14c9c3418;
    DAT_14c9c3418 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3408,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604e92a FUN_14604e92a body=25 status=ok
// SIG undefined FUN_14604e92a(void)

void FUN_14604e92a(void)

{
  FUN_14604e944();
  atexit((_func_5014 *)&LAB_142bc0455);
  return;
}



// FUNCTION 14604e944 FUN_14604e944 body=248 status=ok
// SIG undefined FUN_14604e944(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604e944(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3428 = 0xffffffff;
  _DAT_14c9c342c = 0x105;
  DAT_14c9c342e = 0;
  _DAT_14c9c3420 = &PTR_FUN_14a202320;
  DAT_14c9c3430 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f50ec(&local_18);
    lVar3 = DAT_14c9c3430;
    DAT_14c9c3430 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3420,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604ea44 FUN_14604ea44 body=25 status=ok
// SIG undefined FUN_14604ea44(void)

void FUN_14604ea44(void)

{
  FUN_14604ea5e();
  atexit((_func_5014 *)&LAB_142bc0461);
  return;
}



// FUNCTION 14604ea5e FUN_14604ea5e body=248 status=ok
// SIG undefined FUN_14604ea5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604ea5e(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3440 = 0xffffffff;
  _DAT_14c9c3444 = 0x105;
  DAT_14c9c3446 = 0;
  _DAT_14c9c3438 = &PTR_FUN_14a202350;
  DAT_14c9c3448 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f51f6(&local_18);
    lVar3 = DAT_14c9c3448;
    DAT_14c9c3448 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3438,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604eb5e FUN_14604eb5e body=25 status=ok
// SIG undefined FUN_14604eb5e(void)

void FUN_14604eb5e(void)

{
  FUN_14604eb78();
  atexit((_func_5014 *)&LAB_142bc046d);
  return;
}



// FUNCTION 14604eb78 FUN_14604eb78 body=248 status=ok
// SIG undefined FUN_14604eb78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604eb78(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3458 = 0xffffffff;
  _DAT_14c9c345c = 0x105;
  DAT_14c9c345e = 0;
  _DAT_14c9c3450 = &PTR_FUN_14a202380;
  DAT_14c9c3460 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f5300(&local_18);
    lVar3 = DAT_14c9c3460;
    DAT_14c9c3460 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3450,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604ec78 FUN_14604ec78 body=25 status=ok
// SIG undefined FUN_14604ec78(void)

void FUN_14604ec78(void)

{
  FUN_14604ec92();
  atexit((_func_5014 *)&LAB_142bc0479);
  return;
}



// FUNCTION 14604ec92 FUN_14604ec92 body=248 status=ok
// SIG undefined FUN_14604ec92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604ec92(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3470 = 0xffffffff;
  _DAT_14c9c3474 = 0x105;
  DAT_14c9c3476 = 0;
  _DAT_14c9c3468 = &PTR_FUN_14a2023b0;
  DAT_14c9c3478 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f540a(&local_18);
    lVar3 = DAT_14c9c3478;
    DAT_14c9c3478 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3468,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604ed92 FUN_14604ed92 body=25 status=ok
// SIG undefined FUN_14604ed92(void)

void FUN_14604ed92(void)

{
  FUN_14604edac();
  atexit((_func_5014 *)&LAB_142bc0485);
  return;
}



// FUNCTION 14604edac FUN_14604edac body=248 status=ok
// SIG undefined FUN_14604edac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604edac(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3488 = 0xffffffff;
  _DAT_14c9c348c = 0x105;
  DAT_14c9c348e = 0;
  _DAT_14c9c3480 = &PTR_FUN_14a2023e0;
  DAT_14c9c3490 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f5514(&local_18);
    lVar3 = DAT_14c9c3490;
    DAT_14c9c3490 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3480,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604eeac FUN_14604eeac body=25 status=ok
// SIG undefined FUN_14604eeac(void)

void FUN_14604eeac(void)

{
  FUN_14604eec6();
  atexit((_func_5014 *)&LAB_142bc0491);
  return;
}



// FUNCTION 14604eec6 FUN_14604eec6 body=248 status=ok
// SIG undefined FUN_14604eec6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604eec6(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c34a0 = 0xffffffff;
  _DAT_14c9c34a4 = 0x105;
  DAT_14c9c34a6 = 0;
  _DAT_14c9c3498 = &PTR_FUN_14a202410;
  DAT_14c9c34a8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f561e(&local_18);
    lVar3 = DAT_14c9c34a8;
    DAT_14c9c34a8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3498,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604efc6 FUN_14604efc6 body=25 status=ok
// SIG undefined FUN_14604efc6(void)

void FUN_14604efc6(void)

{
  FUN_14604efe0();
  atexit((_func_5014 *)&LAB_142bc049d);
  return;
}



// FUNCTION 14604efe0 FUN_14604efe0 body=248 status=ok
// SIG undefined FUN_14604efe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604efe0(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c34b8 = 0xffffffff;
  _DAT_14c9c34bc = 0x105;
  DAT_14c9c34be = 0;
  _DAT_14c9c34b0 = &PTR_FUN_14a202440;
  DAT_14c9c34c0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f5728(&local_18);
    lVar3 = DAT_14c9c34c0;
    DAT_14c9c34c0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c34b0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604f0e0 FUN_14604f0e0 body=25 status=ok
// SIG undefined FUN_14604f0e0(void)

void FUN_14604f0e0(void)

{
  FUN_14604f0fa();
  atexit((_func_5014 *)&LAB_142bc04a9);
  return;
}



// FUNCTION 14604f0fa FUN_14604f0fa body=248 status=ok
// SIG undefined FUN_14604f0fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604f0fa(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c34d0 = 0xffffffff;
  _DAT_14c9c34d4 = 0x105;
  DAT_14c9c34d6 = 0;
  _DAT_14c9c34c8 = &PTR_FUN_14a202470;
  DAT_14c9c34d8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f5832(&local_18);
    lVar3 = DAT_14c9c34d8;
    DAT_14c9c34d8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c34c8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604f1fa FUN_14604f1fa body=25 status=ok
// SIG undefined FUN_14604f1fa(void)

void FUN_14604f1fa(void)

{
  FUN_14604f214();
  atexit((_func_5014 *)&LAB_142bc04b5);
  return;
}



// FUNCTION 14604f214 FUN_14604f214 body=248 status=ok
// SIG undefined FUN_14604f214(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604f214(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c34e8 = 0xffffffff;
  _DAT_14c9c34ec = 0x105;
  DAT_14c9c34ee = 0;
  _DAT_14c9c34e0 = &PTR_FUN_14a2024a0;
  DAT_14c9c34f0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f593c(&local_18);
    lVar3 = DAT_14c9c34f0;
    DAT_14c9c34f0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c34e0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604f314 FUN_14604f314 body=25 status=ok
// SIG undefined FUN_14604f314(void)

void FUN_14604f314(void)

{
  FUN_14604f32e();
  atexit((_func_5014 *)&LAB_142bc04c1);
  return;
}



// FUNCTION 14604f32e FUN_14604f32e body=248 status=ok
// SIG undefined FUN_14604f32e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604f32e(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3500 = 0xffffffff;
  _DAT_14c9c3504 = 0x105;
  DAT_14c9c3506 = 0;
  _DAT_14c9c34f8 = &PTR_FUN_14a2024d0;
  DAT_14c9c3508 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f5a46(&local_18);
    lVar3 = DAT_14c9c3508;
    DAT_14c9c3508 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c34f8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604f42e FUN_14604f42e body=25 status=ok
// SIG undefined FUN_14604f42e(void)

void FUN_14604f42e(void)

{
  FUN_14604f448();
  atexit((_func_5014 *)&LAB_142bc04cd);
  return;
}



// FUNCTION 14604f448 FUN_14604f448 body=248 status=ok
// SIG undefined FUN_14604f448(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604f448(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3518 = 0xffffffff;
  _DAT_14c9c351c = 0x105;
  DAT_14c9c351e = 0;
  _DAT_14c9c3510 = &PTR_FUN_14a202500;
  DAT_14c9c3520 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f5b50(&local_18);
    lVar3 = DAT_14c9c3520;
    DAT_14c9c3520 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3510,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604f548 FUN_14604f548 body=25 status=ok
// SIG undefined FUN_14604f548(void)

void FUN_14604f548(void)

{
  FUN_14604f562();
  atexit((_func_5014 *)&LAB_142bc04d9);
  return;
}



// FUNCTION 14604f562 FUN_14604f562 body=248 status=ok
// SIG undefined FUN_14604f562(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604f562(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3530 = 0xffffffff;
  _DAT_14c9c3534 = 0x105;
  DAT_14c9c3536 = 0;
  _DAT_14c9c3528 = &PTR_FUN_14a202530;
  DAT_14c9c3538 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f5c5a(&local_18);
    lVar3 = DAT_14c9c3538;
    DAT_14c9c3538 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3528,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604f662 FUN_14604f662 body=25 status=ok
// SIG undefined FUN_14604f662(void)

void FUN_14604f662(void)

{
  FUN_14604f67c();
  atexit((_func_5014 *)&LAB_142bc04e5);
  return;
}



// FUNCTION 14604f67c FUN_14604f67c body=248 status=ok
// SIG undefined FUN_14604f67c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604f67c(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3548 = 0xffffffff;
  _DAT_14c9c354c = 0x105;
  DAT_14c9c354e = 0;
  _DAT_14c9c3540 = &PTR_FUN_14a202560;
  DAT_14c9c3550 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f5d64(&local_18);
    lVar3 = DAT_14c9c3550;
    DAT_14c9c3550 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3540,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604f77c FUN_14604f77c body=25 status=ok
// SIG undefined FUN_14604f77c(void)

void FUN_14604f77c(void)

{
  FUN_14604f796();
  atexit((_func_5014 *)&LAB_142bc04f1);
  return;
}



// FUNCTION 14604f796 FUN_14604f796 body=248 status=ok
// SIG undefined FUN_14604f796(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604f796(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3560 = 0xffffffff;
  _DAT_14c9c3564 = 0x105;
  DAT_14c9c3566 = 0;
  _DAT_14c9c3558 = &PTR_FUN_14a202590;
  DAT_14c9c3568 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f5e6e(&local_18);
    lVar3 = DAT_14c9c3568;
    DAT_14c9c3568 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3558,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604f896 FUN_14604f896 body=25 status=ok
// SIG undefined FUN_14604f896(void)

void FUN_14604f896(void)

{
  FUN_14604f8b0();
  atexit((_func_5014 *)&LAB_142bc04fd);
  return;
}



// FUNCTION 14604f8b0 FUN_14604f8b0 body=248 status=ok
// SIG undefined FUN_14604f8b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604f8b0(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3578 = 0xffffffff;
  _DAT_14c9c357c = 0x105;
  DAT_14c9c357e = 0;
  _DAT_14c9c3570 = &PTR_FUN_14a2025c0;
  DAT_14c9c3580 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f5f78(&local_18);
    lVar3 = DAT_14c9c3580;
    DAT_14c9c3580 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3570,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604f9b0 FUN_14604f9b0 body=25 status=ok
// SIG undefined FUN_14604f9b0(void)

void FUN_14604f9b0(void)

{
  FUN_14604f9ca();
  atexit((_func_5014 *)&LAB_142bc0509);
  return;
}



// FUNCTION 14604f9ca FUN_14604f9ca body=248 status=ok
// SIG undefined FUN_14604f9ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604f9ca(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3590 = 0xffffffff;
  _DAT_14c9c3594 = 0x105;
  DAT_14c9c3596 = 0;
  _DAT_14c9c3588 = &PTR_FUN_14a2025f0;
  DAT_14c9c3598 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f6082(&local_18);
    lVar3 = DAT_14c9c3598;
    DAT_14c9c3598 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3588,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604faca FUN_14604faca body=25 status=ok
// SIG undefined FUN_14604faca(void)

void FUN_14604faca(void)

{
  FUN_14604fae4();
  atexit((_func_5014 *)&LAB_142bc0515);
  return;
}



// FUNCTION 14604fae4 FUN_14604fae4 body=248 status=ok
// SIG undefined FUN_14604fae4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604fae4(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c35a8 = 0xffffffff;
  _DAT_14c9c35ac = 0x105;
  DAT_14c9c35ae = 0;
  _DAT_14c9c35a0 = &PTR_FUN_14a202620;
  DAT_14c9c35b0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f618c(&local_18);
    lVar3 = DAT_14c9c35b0;
    DAT_14c9c35b0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c35a0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604fbe4 FUN_14604fbe4 body=25 status=ok
// SIG undefined FUN_14604fbe4(void)

void FUN_14604fbe4(void)

{
  FUN_14604fbfe();
  atexit((_func_5014 *)&LAB_142bc0521);
  return;
}



// FUNCTION 14604fbfe FUN_14604fbfe body=248 status=ok
// SIG undefined FUN_14604fbfe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604fbfe(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c35c0 = 0xffffffff;
  _DAT_14c9c35c4 = 0x105;
  DAT_14c9c35c6 = 0;
  _DAT_14c9c35b8 = &PTR_FUN_14a202650;
  DAT_14c9c35c8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f6296(&local_18);
    lVar3 = DAT_14c9c35c8;
    DAT_14c9c35c8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c35b8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604fcfe FUN_14604fcfe body=25 status=ok
// SIG undefined FUN_14604fcfe(void)

void FUN_14604fcfe(void)

{
  FUN_14604fd18();
  atexit((_func_5014 *)&LAB_142bc052d);
  return;
}



// FUNCTION 14604fd18 FUN_14604fd18 body=248 status=ok
// SIG undefined FUN_14604fd18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604fd18(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c35d8 = 0xffffffff;
  _DAT_14c9c35dc = 0x105;
  DAT_14c9c35de = 0;
  _DAT_14c9c35d0 = &PTR_FUN_14a202680;
  DAT_14c9c35e0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f63a0(&local_18);
    lVar3 = DAT_14c9c35e0;
    DAT_14c9c35e0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c35d0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604fe18 FUN_14604fe18 body=25 status=ok
// SIG undefined FUN_14604fe18(void)

void FUN_14604fe18(void)

{
  FUN_14604fe32();
  atexit((_func_5014 *)&LAB_142bc0539);
  return;
}



// FUNCTION 14604fe32 FUN_14604fe32 body=248 status=ok
// SIG undefined FUN_14604fe32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604fe32(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c35f0 = 0xffffffff;
  _DAT_14c9c35f4 = 0x105;
  DAT_14c9c35f6 = 0;
  _DAT_14c9c35e8 = &PTR_FUN_14a2026b0;
  DAT_14c9c35f8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f64aa(&local_18);
    lVar3 = DAT_14c9c35f8;
    DAT_14c9c35f8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c35e8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14604ff32 FUN_14604ff32 body=25 status=ok
// SIG undefined FUN_14604ff32(void)

void FUN_14604ff32(void)

{
  FUN_14604ff4c();
  atexit((_func_5014 *)&LAB_142bc0545);
  return;
}



// FUNCTION 14604ff4c FUN_14604ff4c body=248 status=ok
// SIG undefined FUN_14604ff4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14604ff4c(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3608 = 0xffffffff;
  _DAT_14c9c360c = 0x105;
  DAT_14c9c360e = 0;
  _DAT_14c9c3600 = &PTR_FUN_14a2026e0;
  DAT_14c9c3610 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f65b4(&local_18);
    lVar3 = DAT_14c9c3610;
    DAT_14c9c3610 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3600,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14605004c FUN_14605004c body=25 status=ok
// SIG undefined FUN_14605004c(void)

void FUN_14605004c(void)

{
  FUN_146050066();
  atexit((_func_5014 *)&LAB_142bc0551);
  return;
}



// FUNCTION 146050066 FUN_146050066 body=248 status=ok
// SIG undefined FUN_146050066(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146050066(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3620 = 0xffffffff;
  _DAT_14c9c3624 = 0x105;
  DAT_14c9c3626 = 0;
  _DAT_14c9c3618 = &PTR_FUN_14a202710;
  DAT_14c9c3628 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f66be(&local_18);
    lVar3 = DAT_14c9c3628;
    DAT_14c9c3628 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3618,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146050166 FUN_146050166 body=25 status=ok
// SIG undefined FUN_146050166(void)

void FUN_146050166(void)

{
  FUN_146050180();
  atexit((_func_5014 *)&LAB_142bc055d);
  return;
}



// FUNCTION 146050180 FUN_146050180 body=248 status=ok
// SIG undefined FUN_146050180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146050180(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3638 = 0xffffffff;
  _DAT_14c9c363c = 0x105;
  DAT_14c9c363e = 0;
  _DAT_14c9c3630 = &PTR_FUN_14a202740;
  DAT_14c9c3640 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f67c8(&local_18);
    lVar3 = DAT_14c9c3640;
    DAT_14c9c3640 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3630,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146050280 FUN_146050280 body=25 status=ok
// SIG undefined FUN_146050280(void)

void FUN_146050280(void)

{
  FUN_14605029a();
  atexit((_func_5014 *)&LAB_142bc0569);
  return;
}



// FUNCTION 14605029a FUN_14605029a body=248 status=ok
// SIG undefined FUN_14605029a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14605029a(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3650 = 0xffffffff;
  _DAT_14c9c3654 = 0x105;
  DAT_14c9c3656 = 0;
  _DAT_14c9c3648 = &PTR_FUN_14a202770;
  DAT_14c9c3658 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f68d2(&local_18);
    lVar3 = DAT_14c9c3658;
    DAT_14c9c3658 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3648,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14605039a FUN_14605039a body=25 status=ok
// SIG undefined FUN_14605039a(void)

void FUN_14605039a(void)

{
  FUN_1460503b4();
  atexit((_func_5014 *)&LAB_142bc0575);
  return;
}



// FUNCTION 1460503b4 FUN_1460503b4 body=248 status=ok
// SIG undefined FUN_1460503b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460503b4(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3668 = 0xffffffff;
  _DAT_14c9c366c = 0x105;
  DAT_14c9c366e = 0;
  _DAT_14c9c3660 = &PTR_FUN_14a2027a0;
  DAT_14c9c3670 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f69dc(&local_18);
    lVar3 = DAT_14c9c3670;
    DAT_14c9c3670 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3660,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1460504b4 FUN_1460504b4 body=25 status=ok
// SIG undefined FUN_1460504b4(void)

void FUN_1460504b4(void)

{
  FUN_1460504ce();
  atexit((_func_5014 *)&LAB_142bc0581);
  return;
}



// FUNCTION 1460504ce FUN_1460504ce body=248 status=ok
// SIG undefined FUN_1460504ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460504ce(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3680 = 0xffffffff;
  _DAT_14c9c3684 = 0x105;
  DAT_14c9c3686 = 0;
  _DAT_14c9c3678 = &PTR_FUN_14a2027d0;
  DAT_14c9c3688 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f6ae6(&local_18);
    lVar3 = DAT_14c9c3688;
    DAT_14c9c3688 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3678,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1460505ce FUN_1460505ce body=25 status=ok
// SIG undefined FUN_1460505ce(void)

void FUN_1460505ce(void)

{
  FUN_1460505e8();
  atexit((_func_5014 *)&LAB_142bc058d);
  return;
}



// FUNCTION 1460505e8 FUN_1460505e8 body=248 status=ok
// SIG undefined FUN_1460505e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460505e8(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3698 = 0xffffffff;
  _DAT_14c9c369c = 0x105;
  DAT_14c9c369e = 0;
  _DAT_14c9c3690 = &PTR_FUN_14a202800;
  DAT_14c9c36a0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f6bf0(&local_18);
    lVar3 = DAT_14c9c36a0;
    DAT_14c9c36a0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3690,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1460506e8 FUN_1460506e8 body=25 status=ok
// SIG undefined FUN_1460506e8(void)

void FUN_1460506e8(void)

{
  FUN_146050702();
  atexit((_func_5014 *)&LAB_142bc0599);
  return;
}



// FUNCTION 146050702 FUN_146050702 body=248 status=ok
// SIG undefined FUN_146050702(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146050702(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c36b0 = 0xffffffff;
  _DAT_14c9c36b4 = 0x105;
  DAT_14c9c36b6 = 0;
  _DAT_14c9c36a8 = &PTR_FUN_14a202830;
  DAT_14c9c36b8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f6cfa(&local_18);
    lVar3 = DAT_14c9c36b8;
    DAT_14c9c36b8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c36a8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146050802 FUN_146050802 body=25 status=ok
// SIG undefined FUN_146050802(void)

void FUN_146050802(void)

{
  FUN_14605081c();
  atexit((_func_5014 *)&LAB_142bc05a5);
  return;
}



// FUNCTION 14605081c FUN_14605081c body=248 status=ok
// SIG undefined FUN_14605081c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14605081c(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c36c8 = 0xffffffff;
  _DAT_14c9c36cc = 0x105;
  DAT_14c9c36ce = 0;
  _DAT_14c9c36c0 = &PTR_FUN_14a202860;
  DAT_14c9c36d0 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f6e04(&local_18);
    lVar3 = DAT_14c9c36d0;
    DAT_14c9c36d0 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c36c0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14605091c FUN_14605091c body=25 status=ok
// SIG undefined FUN_14605091c(void)

void FUN_14605091c(void)

{
  FUN_146050936();
  atexit((_func_5014 *)&LAB_142bc05b1);
  return;
}



// FUNCTION 146050936 FUN_146050936 body=248 status=ok
// SIG undefined FUN_146050936(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146050936(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c36e0 = 0xffffffff;
  _DAT_14c9c36e4 = 0x105;
  DAT_14c9c36e6 = 0;
  _DAT_14c9c36d8 = &PTR_FUN_14a202890;
  DAT_14c9c36e8 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f6f0e(&local_18);
    lVar3 = DAT_14c9c36e8;
    DAT_14c9c36e8 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c36d8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146050a36 FUN_146050a36 body=25 status=ok
// SIG undefined FUN_146050a36(void)

void FUN_146050a36(void)

{
  FUN_146050a50();
  atexit((_func_5014 *)&LAB_142bc05bd);
  return;
}



// FUNCTION 146050a50 FUN_146050a50 body=248 status=ok
// SIG undefined FUN_146050a50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146050a50(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c36f8 = 0xffffffff;
  _DAT_14c9c36fc = 0x105;
  DAT_14c9c36fe = 0;
  _DAT_14c9c36f0 = &PTR_FUN_14a2028c0;
  DAT_14c9c3700 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f7018(&local_18);
    lVar3 = DAT_14c9c3700;
    DAT_14c9c3700 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c36f0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 146050b50 FUN_146050b50 body=25 status=ok
// SIG undefined FUN_146050b50(void)

void FUN_146050b50(void)

{
  FUN_146050b6a();
  atexit((_func_5014 *)&LAB_142bc05c9);
  return;
}



// FUNCTION 146050b6a FUN_146050b6a body=248 status=ok
// SIG undefined FUN_146050b6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146050b6a(void)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  _DAT_14c9c3710 = 0xffffffff;
  _DAT_14c9c3714 = 0x105;
  DAT_14c9c3716 = 0;
  _DAT_14c9c3708 = &PTR_FUN_14a2028f0;
  DAT_14c9c3718 = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    FUN_1415f7122(&local_18);
    lVar3 = DAT_14c9c3718;
    DAT_14c9c3718 = local_18;
    local_18 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_18 != 0) {
        LOCK();
        puVar1 = (uint *)(local_18 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140308182(&DAT_14c9c3708,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}


