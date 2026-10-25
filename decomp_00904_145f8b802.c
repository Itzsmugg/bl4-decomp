// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145f8b802 FUN_145f8b802 body=211 status=ok
// SIG undefined FUN_145f8b802(void)

undefined8 * FUN_145f8b802(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14a769800;
  param_1[5] = &PTR_LAB_14a769de0;
  param_1[6] = &PTR_LAB_14a769e20;
  *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) & 0xf8;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xfe;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0x4059000000000000;
  param_1[0x5c] = 0x4059000000000000;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0x3ff0000000000000;
  param_1[0x60] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x61) = 1;
  *(undefined1 *)(param_1 + 0x62) = 2;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined2 *)(param_1 + 0x65) = 1;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x66;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 2;
  *(undefined1 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 145f8b8e0 FUN_145f8b8e0 body=211 status=ok
// SIG undefined FUN_145f8b8e0(void)

undefined8 * FUN_145f8b8e0(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ab59910;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 9) = 4;
  *(undefined4 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 10) = 2;
  *(byte *)(param_1 + 0xb) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0x11) = 4;
  *(undefined4 *)(param_1 + 0xe) = 1;
  *(undefined1 *)(param_1 + 0x12) = 2;
  *(byte *)(param_1 + 0x13) = (byte)~DAT_14c9a8754 >> 4 & 2;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x18) = 4;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x19) = 3;
  *(char *)(param_1 + 0x1a) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x1b) = 1;
  FUN_1446f470e((longlong)param_1 + 0xdc,L"Default",1);
  return param_1;
}



// FUNCTION 145f8b9b3 FUN_145f8b9b3 body=68 status=ok
// SIG undefined FUN_145f8b9b3(void)

void FUN_145f8b9b3(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145aba512(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b24d860;
  puVar1[5] = &PTR_LAB_14b24db18;
  puVar1[8] = &PTR_LAB_14b24db30;
  FUN_145f8b9f8(puVar1 + 9);
  return;
}



// FUNCTION 145f8b9f8 FUN_145f8b9f8 body=154 status=ok
// SIG undefined FUN_145f8b9f8(void)

void FUN_145f8b9f8(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b24d5d0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



// FUNCTION 145f8ba9e FUN_145f8ba9e body=211 status=ok
// SIG undefined FUN_145f8ba9e(void)

undefined8 * FUN_145f8ba9e(undefined8 *param_1)

{
  FUN_1458aff94();
  *param_1 = &PTR_FUN_14b4c8490;
  param_1[0x72] = &PTR_LAB_14b4c8b90;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x87) = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  *(undefined1 *)(param_1 + 0x8f) = 0;
  param_1[0x8c] = &PTR_FUN_14a5af930;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined1 *)(param_1 + 0x95) = 0;
  param_1[0x92] = &PTR_FUN_14a5af930;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4e7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4e4) = 0;
  param_1[0xa2] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  return param_1;
}



// FUNCTION 145f8bb72 FUN_145f8bb72 body=103 status=ok
// SIG undefined FUN_145f8bb72(void)

ulonglong FUN_145f8bb72(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145f8bbbc:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145f8bbbc;
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
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 145f8bbee FUN_145f8bbee body=211 status=ok
// SIG undefined FUN_145f8bbee(void)

undefined8 * FUN_145f8bbee(undefined8 *param_1)

{
  FUN_144a0768c();
  FUN_1409e1656(param_1 + 5);
  *param_1 = &PTR_FUN_14b5a6d00;
  param_1[5] = &PTR_FUN_14b5a6fa0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) | 7;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0x3ff0000000000000;
  param_1[0x12] = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  *(undefined2 *)(param_1 + 0x17) = 0x703;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0xffffffff;
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 2;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfa) = 0;
  return param_1;
}



// FUNCTION 145f8bcc2 FUN_145f8bcc2 body=43 status=ok
// SIG undefined FUN_145f8bcc2(void)

undefined8 FUN_145f8bcc2(undefined8 param_1,int param_2)

{
  FUN_145f8bcee();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x138);
  }
  return param_1;
}



// FUNCTION 145f8bcee FUN_145f8bcee body=179 status=ok
// SIG undefined FUN_145f8bcee(void)

void FUN_145f8bcee(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8ac040;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_140fa9dd4(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_140fa9dd4(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_140fa9dd4(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145f8bda2 FUN_145f8bda2 body=254 status=ok
// SIG undefined FUN_145f8bda2(void)

undefined8 *
FUN_145f8bda2(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_LAB_14ba46e70;
  QueryPerformanceCounter(&local_48);
  param_1[1] = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
  *param_1 = &PTR_LAB_14ba46e30;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14ba45680;
  param_1[5] = param_2;
  param_1[6] = param_3;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  FUN_1459ae89c(param_1 + 10,param_4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xc] = &PTR_LAB_14ba456c0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_145f8bea2(param_1 + 0xc,param_1);
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8bea2 FUN_145f8bea2 body=78 status=ok
// SIG undefined FUN_145f8bea2(void)

void FUN_145f8bea2(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      SteamAPI_UnregisterCallback(param_1);
    }
    *(longlong *)(param_1 + 0x10) = param_2;
    *(undefined1 **)(param_1 + 0x18) = &LAB_14136b454;
                    /* WARNING: Could not recover jumptable at 0x000145f8bed6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SteamAPI_RegisterCallback(param_1,0x1f9);
    return;
  }
  return;
}



// FUNCTION 145f8bef0 FUN_145f8bef0 body=205 status=ok
// SIG undefined FUN_145f8bef0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f8bef0(void)

{
  if ((DAT_14c9c7397 & 2) == 0) {
    DAT_14c9c7397 = DAT_14c9c7397 | 2;
    _DAT_14c9c7338 = L"FComputeCulledObjectStartOffsetCS";
    _DAT_14c9c7350 = FUN_146826540;
    _DAT_14c9c7358 = FUN_146825d77;
    _DAT_14c9c7360 = FUN_146825fd6;
    _DAT_14c9c7368 = FUN_1407e02ea;
    _DAT_14c9c7370 = FUN_146826273;
    _DAT_14c9c7348 = FUN_14714f794;
    _DAT_14c9c7388 = 0xffffffff000000e0;
    _DAT_14c9c7390 = 8;
    DAT_14c9c7394 = 0;
    _DAT_14c9c7378 = &LAB_14714f7be;
    FUN_145f8bfbe();
    FUN_1407e00cc(&DAT_14c9c7330);
    return;
  }
  return;
}



// FUNCTION 145f8bfbe FUN_145f8bfbe body=123 status=ok
// SIG undefined FUN_145f8bfbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f8bfbe(void)

{
  _DAT_14c9c97d8 = L"BASE";
  DAT_14c9c9802 = 4;
  _DAT_14c9c97e0 = FUN_140b35ae4();
  _DAT_14c9c97e8 = DAT_14c9c7340;
  _DAT_14c9c97f0 = &LAB_14682652b;
  DAT_14c9c7340 = &DAT_14c9c97d8;
  DAT_14c9c7395 = DAT_14c9c7395 + '\x01';
  _DAT_14c9c97f8 = 0x100000000;
  if (*(char *)(_DAT_14c9c97e0 + 100) != '\0') {
    DAT_14c9c7396 = DAT_14c9c7396 + '\x01';
  }
  return;
}



// FUNCTION 145f8c03a FUN_145f8c03a body=232 status=ok
// SIG undefined FUN_145f8c03a(void)

longlong * FUN_145f8c03a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_1462c11c6;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f8c128 FUN_145f8c128 body=205 status=ok
// SIG undefined FUN_145f8c128(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f8c128(void)

{
  if ((DAT_14c9ee7bf & 2) == 0) {
    DAT_14c9ee7bf = DAT_14c9ee7bf | 2;
    _DAT_14c9ee760 = L"FClearProbeIndirectionCS";
    _DAT_14c9ee778 = FUN_146826540;
    _DAT_14c9ee780 = FUN_146825d77;
    _DAT_14c9ee788 = FUN_146825fd6;
    _DAT_14c9ee790 = FUN_1407e02ea;
    _DAT_14c9ee798 = FUN_146826273;
    _DAT_14c9ee770 = FUN_1471df3c0;
    _DAT_14c9ee7b0 = 0xffffffff000000e0;
    _DAT_14c9ee7b8 = 8;
    DAT_14c9ee7bc = 0;
    _DAT_14c9ee7a0 = &LAB_1471df3ea;
    FUN_145f8c1f6();
    FUN_1407e00cc(&DAT_14c9ee758);
    return;
  }
  return;
}



// FUNCTION 145f8c1f6 FUN_145f8c1f6 body=123 status=ok
// SIG undefined FUN_145f8c1f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f8c1f6(void)

{
  _DAT_14c9f1b80 = L"BASE";
  DAT_14c9f1baa = 4;
  _DAT_14c9f1b88 = FUN_140b35ae4();
  _DAT_14c9f1b90 = DAT_14c9ee768;
  _DAT_14c9f1b98 = &LAB_14682652b;
  DAT_14c9ee768 = &DAT_14c9f1b80;
  DAT_14c9ee7bd = DAT_14c9ee7bd + '\x01';
  _DAT_14c9f1ba0 = 0x100000000;
  if (*(char *)(_DAT_14c9f1b88 + 100) != '\0') {
    DAT_14c9ee7be = DAT_14c9ee7be + '\x01';
  }
  return;
}



// FUNCTION 145f8c272 FUN_145f8c272 body=232 status=ok
// SIG undefined FUN_145f8c272(void)

longlong * FUN_145f8c272(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_1462d9032;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f8c360 FUN_145f8c360 body=205 status=ok
// SIG undefined FUN_145f8c360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f8c360(void)

{
  if ((DAT_14ca011e7 & 2) == 0) {
    DAT_14ca011e7 = DAT_14ca011e7 | 2;
    _DAT_14ca01188 = L"FClearTracesCS";
    _DAT_14ca011a0 = FUN_146826540;
    _DAT_14ca011a8 = FUN_146825d77;
    _DAT_14ca011b0 = FUN_146825fd6;
    _DAT_14ca011b8 = FUN_1407e02ea;
    _DAT_14ca011c0 = FUN_146826273;
    _DAT_14ca01198 = FUN_147220da6;
    _DAT_14ca011d8 = 0xffffffff000000e0;
    _DAT_14ca011e0 = 8;
    DAT_14ca011e4 = 0;
    _DAT_14ca011c8 = &LAB_147220dd0;
    FUN_145f8c42e();
    FUN_1407e00cc(&DAT_14ca01180);
    return;
  }
  return;
}



// FUNCTION 145f8c42e FUN_145f8c42e body=123 status=ok
// SIG undefined FUN_145f8c42e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f8c42e(void)

{
  _DAT_14ca07808 = L"BASE";
  DAT_14ca07832 = 4;
  _DAT_14ca07810 = FUN_140b35ae4();
  _DAT_14ca07818 = DAT_14ca01190;
  _DAT_14ca07820 = &LAB_14682652b;
  DAT_14ca01190 = &DAT_14ca07808;
  DAT_14ca011e5 = DAT_14ca011e5 + '\x01';
  _DAT_14ca07828 = 0x100000000;
  if (*(char *)(_DAT_14ca07810 + 100) != '\0') {
    DAT_14ca011e6 = DAT_14ca011e6 + '\x01';
  }
  return;
}



// FUNCTION 145f8c4aa FUN_145f8c4aa body=232 status=ok
// SIG undefined FUN_145f8c4aa(void)

longlong * FUN_145f8c4aa(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_1462e7d5e;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f8c598 FUN_145f8c598 body=205 status=ok
// SIG undefined FUN_145f8c598(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f8c598(void)

{
  if ((DAT_14ca2fc0f & 2) == 0) {
    DAT_14ca2fc0f = DAT_14ca2fc0f | 2;
    _DAT_14ca2fbb0 = L"FSubsurfaceInitValueBufferCS";
    _DAT_14ca2fbc8 = FUN_146826540;
    _DAT_14ca2fbd0 = FUN_146825d77;
    _DAT_14ca2fbd8 = FUN_146825fd6;
    _DAT_14ca2fbe0 = FUN_1407e02ea;
    _DAT_14ca2fbe8 = FUN_146826273;
    _DAT_14ca2fbc0 = FUN_147299618;
    _DAT_14ca2fc00 = 0xffffffff000000e0;
    _DAT_14ca2fc08 = 8;
    DAT_14ca2fc0c = 0;
    _DAT_14ca2fbf0 = &LAB_147299644;
    FUN_145f8c666();
    FUN_1407e00cc(&DAT_14ca2fba8);
    return;
  }
  return;
}



// FUNCTION 145f8c666 FUN_145f8c666 body=123 status=ok
// SIG undefined FUN_145f8c666(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f8c666(void)

{
  _DAT_14ca34bc0 = L"BASE";
  DAT_14ca34bea = 4;
  _DAT_14ca34bc8 = FUN_140b35ae4();
  _DAT_14ca34bd0 = DAT_14ca2fbb8;
  _DAT_14ca34bd8 = &LAB_14682652b;
  DAT_14ca2fbb8 = &DAT_14ca34bc0;
  DAT_14ca2fc0d = DAT_14ca2fc0d + '\x01';
  _DAT_14ca34be0 = 0x100000000;
  if (*(char *)(_DAT_14ca34bc8 + 100) != '\0') {
    DAT_14ca2fc0e = DAT_14ca2fc0e + '\x01';
  }
  return;
}



// FUNCTION 145f8c6e2 FUN_145f8c6e2 body=232 status=ok
// SIG undefined FUN_145f8c6e2(void)

longlong * FUN_145f8c6e2(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_1462fdea8;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f8c7d0 FUN_145f8c7d0 body=205 status=ok
// SIG undefined FUN_145f8c7d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f8c7d0(void)

{
  if ((DAT_14ca42fbf & 2) == 0) {
    DAT_14ca42fbf = DAT_14ca42fbf | 2;
    _DAT_14ca42f60 = L"FRenderRealTimeReflectionHeightFogVS";
    _DAT_14ca42f78 = FUN_146826540;
    _DAT_14ca42f80 = FUN_146825d77;
    _DAT_14ca42f88 = FUN_146825fd6;
    _DAT_14ca42f90 = FUN_1407e02ea;
    _DAT_14ca42f98 = FUN_146826273;
    _DAT_14ca42f70 = FUN_1472c7488;
    _DAT_14ca42fb0 = 0xffffffff000000e0;
    _DAT_14ca42fb8 = 8;
    DAT_14ca42fbc = 0;
    _DAT_14ca42fa0 = &LAB_1472c74b2;
    FUN_145f8c89e();
    FUN_1407e00cc(&DAT_14ca42f58);
    return;
  }
  return;
}



// FUNCTION 145f8c89e FUN_145f8c89e body=123 status=ok
// SIG undefined FUN_145f8c89e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f8c89e(void)

{
  _DAT_14ca44b20 = L"BASE";
  DAT_14ca44b4a = 4;
  _DAT_14ca44b28 = FUN_140b35ae4();
  _DAT_14ca44b30 = DAT_14ca42f68;
  _DAT_14ca44b38 = &LAB_14682652b;
  DAT_14ca42f68 = &DAT_14ca44b20;
  DAT_14ca42fbd = DAT_14ca42fbd + '\x01';
  _DAT_14ca44b40 = 0x100000000;
  if (*(char *)(_DAT_14ca44b28 + 100) != '\0') {
    DAT_14ca42fbe = DAT_14ca42fbe + '\x01';
  }
  return;
}



// FUNCTION 145f8c91a FUN_145f8c91a body=232 status=ok
// SIG undefined FUN_145f8c91a(void)

longlong * FUN_145f8c91a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_146304a20;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f8ca08 FUN_145f8ca08 body=205 status=ok
// SIG undefined FUN_145f8ca08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f8ca08(void)

{
  if ((DAT_14ca5cc57 & 2) == 0) {
    DAT_14ca5cc57 = DAT_14ca5cc57 | 2;
    _DAT_14ca5cbf8 = L"FRenderSkyAtmosphereVS";
    _DAT_14ca5cc10 = FUN_146826540;
    _DAT_14ca5cc18 = FUN_146825d77;
    _DAT_14ca5cc20 = FUN_146825fd6;
    _DAT_14ca5cc28 = FUN_1407e02ea;
    _DAT_14ca5cc30 = FUN_146826273;
    _DAT_14ca5cc08 = FUN_147315af4;
    _DAT_14ca5cc48 = 0xffffffff000000e0;
    _DAT_14ca5cc50 = 8;
    DAT_14ca5cc54 = 0;
    _DAT_14ca5cc38 = &LAB_147315b1e;
    FUN_145f8cad6();
    FUN_1407e00cc(&DAT_14ca5cbf0);
    return;
  }
  return;
}



// FUNCTION 145f8cad6 FUN_145f8cad6 body=123 status=ok
// SIG undefined FUN_145f8cad6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f8cad6(void)

{
  _DAT_14ca5f970 = L"BASE";
  DAT_14ca5f99a = 4;
  _DAT_14ca5f978 = FUN_140b35ae4();
  _DAT_14ca5f980 = DAT_14ca5cc00;
  _DAT_14ca5f988 = &LAB_14682652b;
  DAT_14ca5cc00 = &DAT_14ca5f970;
  DAT_14ca5cc55 = DAT_14ca5cc55 + '\x01';
  _DAT_14ca5f990 = 0x100000000;
  if (*(char *)(_DAT_14ca5f978 + 100) != '\0') {
    DAT_14ca5cc56 = DAT_14ca5cc56 + '\x01';
  }
  return;
}



// FUNCTION 145f8cb52 FUN_145f8cb52 body=232 status=ok
// SIG undefined FUN_145f8cb52(void)

longlong * FUN_145f8cb52(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_14630b566;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f8cc40 FUN_145f8cc40 body=205 status=ok
// SIG undefined FUN_145f8cc40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f8cc40(void)

{
  if ((DAT_14caff8ef & 2) == 0) {
    DAT_14caff8ef = DAT_14caff8ef | 2;
    _DAT_14caff890 = L"FClearStreamingRequestCount_CS";
    _DAT_14caff8a8 = FUN_146826540;
    _DAT_14caff8b0 = FUN_146825d77;
    _DAT_14caff8b8 = FUN_146825fd6;
    _DAT_14caff8c0 = FUN_1407e02ea;
    _DAT_14caff8c8 = FUN_146826273;
    _DAT_14caff8a0 = FUN_147ccc774;
    _DAT_14caff8e0 = 0xffffffff000000e0;
    _DAT_14caff8e8 = 8;
    DAT_14caff8ec = 0;
    _DAT_14caff8d0 = &LAB_147ccc79e;
    FUN_145f8cd0e();
    FUN_1407e00cc(&DAT_14caff888);
    return;
  }
  return;
}



// FUNCTION 145f8cd0e FUN_145f8cd0e body=123 status=ok
// SIG undefined FUN_145f8cd0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f8cd0e(void)

{
  _DAT_14cb00268 = L"BASE";
  DAT_14cb00292 = 4;
  _DAT_14cb00270 = FUN_140b35ae4();
  _DAT_14cb00278 = DAT_14caff898;
  _DAT_14cb00280 = &LAB_14682652b;
  DAT_14caff898 = &DAT_14cb00268;
  DAT_14caff8ed = DAT_14caff8ed + '\x01';
  _DAT_14cb00288 = 0x100000000;
  if (*(char *)(_DAT_14cb00270 + 100) != '\0') {
    DAT_14caff8ee = DAT_14caff8ee + '\x01';
  }
  return;
}



// FUNCTION 145f8cd8a FUN_145f8cd8a body=232 status=ok
// SIG undefined FUN_145f8cd8a(void)

longlong * FUN_145f8cd8a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_1463fca1c;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f8ce78 FUN_145f8ce78 body=65 status=ok
// SIG undefined FUN_145f8ce78(void)

void FUN_145f8ce78(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14cc24408;
  if (DAT_14cc24408 != 0) {
    *(undefined4 *)(DAT_14cc24408 + 0x48) = 0;
    if (*(longlong *)(lVar1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_145f8ceba(lVar1);
    DAT_14cc24408 = 0;
  }
  return;
}



// FUNCTION 145f8ceba FUN_145f8ceba body=53 status=ok
// SIG undefined FUN_145f8ceba(void)

void FUN_145f8ceba(longlong *param_1)

{
  FUN_145f8cef0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145f8cef0 FUN_145f8cef0 body=326 status=ok
// SIG undefined FUN_145f8cef0(void)

void FUN_145f8cef0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
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
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
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
      puVar2 = *(undefined8 **)(*local_68 + 8 + (longlong)iStack_4c * 0x18);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145f8d037 FUN_145f8d037 body=63 status=ok
// SIG undefined FUN_145f8d037(void)

void FUN_145f8d037(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145f8d076 FUN_145f8d076 body=143 status=ok
// SIG undefined FUN_145f8d076(void)

void FUN_145f8d076(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*param_2 != 0) {
    iVar3 = *(int *)(param_1 + 0x118);
    *(uint *)(param_1 + 0x118) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x11c) < iVar3 + 1U) {
      FUN_145f8d106((longlong *)(param_1 + 0x110),iVar3);
    }
    lVar4 = *(longlong *)(param_1 + 0x110);
    *(longlong *)(lVar4 + (longlong)iVar3 * 0x10) = *param_2;
    lVar5 = param_2[1];
    *(longlong *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
  }
  plVar6 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x000145f8d101. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145f8d106 FUN_145f8d106 body=132 status=ok
// SIG undefined FUN_145f8d106(void)

void FUN_145f8d106(longlong param_1,int param_2)

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



// FUNCTION 145f8d1ac FUN_145f8d1ac body=21 status=ok
// SIG undefined FUN_145f8d1ac(void)

undefined8 FUN_145f8d1ac(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145f8d1c2 FUN_145f8d1c2 body=114 status=ok
// SIG undefined FUN_145f8d1c2(void)

void FUN_145f8d1c2(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  iVar1 = FUN_1459b6cd8(param_1 + 0x5a0,&local_28);
  if (0 < iVar1) {
    FUN_145f8d236(param_1,param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8d236 FUN_145f8d236 body=198 status=ok
// SIG undefined FUN_145f8d236(void)

void FUN_145f8d236(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140b7090e(param_1,&local_28,param_2);
  if (local_28 != 0) {
    local_38 = local_28;
    local_30 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    FUN_1415a7d50(param_1,&local_38);
    plVar2 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar3 = (int *)((longlong)local_20 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8d2fe FUN_145f8d2fe body=104 status=ok
// SIG undefined FUN_145f8d2fe(void)

void FUN_145f8d2fe(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145f8d368();
  FUN_145f8d4c4(*(longlong *)(param_1 + 0x1b0) + 0x328,&local_20,param_1);
  *(undefined8 *)(param_1 + 0x2c8) = local_20;
  FUN_145f8d5ba(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8d368 FUN_145f8d368 body=41 status=ok
// SIG undefined FUN_145f8d368(void)

void FUN_145f8d368(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [40];
  undefined1 auStack_10 [8];
  ulonglong uStack_8;
  
  if (((*(longlong *)(param_1 + 0x1b0) == 0) ||
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x1e0), lVar1 == 0)) ||
     (lVar1 = *(longlong *)(lVar1 + 0x68), lVar1 == 0)) {
    return;
  }
  uStack_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_1 != 0) {
    FUN_145f8d3de(param_1 + 0x28,auStack_10,lVar1);
  }
  if ((uStack_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8d392 FUN_145f8d392 body=74 status=ok
// SIG undefined FUN_145f8d392(void)

void FUN_145f8d392(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [8];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_2 != 0) {
    FUN_145f8d3de(param_2 + 0x28,local_10,param_1);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8d3de FUN_145f8d3de body=228 status=ok
// SIG undefined FUN_145f8d3de(void)

undefined8 FUN_145f8d3de(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b3fdf50;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14b4106e0;
  local_38[3] = param_3;
  local_38[4] = FUN_1461599fc;
  FUN_145a0b054(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8d4c4 FUN_145f8d4c4 body=244 status=ok
// SIG undefined FUN_145f8d4c4(void)

undefined8 FUN_145f8d4c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b991970;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b9dcf00;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_14621800c;
  FUN_145eb4b7a(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8d5ba FUN_145f8d5ba body=681 status=ok
// SIG undefined FUN_145f8d5ba(void)

void FUN_145f8d5ba(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined2 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_288 [40];
  longlong local_260;
  void *local_258;
  int local_250;
  undefined4 local_24c;
  byte *local_248;
  longlong *local_240;
  undefined8 *local_238;
  ulonglong uStack_230;
  undefined1 local_228 [24];
  longlong local_210;
  undefined2 *local_200;
  int local_1f8 [20];
  undefined1 local_1a8;
  undefined1 local_178 [72];
  longlong local_130;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_238 = (undefined8 *)0x0;
  uStack_230 = 0;
  plVar5 = (longlong *)FUN_14054d1d4();
  FUN_145f8d864(&local_200);
  puVar9 = local_200;
  if (local_1f8[0] == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  (**(code **)(*plVar5 + 0x70))(plVar5,&local_238,puVar9,&DAT_14a174bd4);
  if (local_200 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = 0;
  if ((longlong)(int)uStack_230 != 0) {
    lVar11 = (longlong)(int)uStack_230 << 4;
    local_260 = param_1 + 0x358;
    puVar7 = local_238;
    do {
      local_258 = (void *)0x0;
      local_250 = *(int *)(puVar7 + 1);
      lVar10 = (longlong)local_250;
      _Src = (void *)*puVar7;
      if (lVar10 == 0) {
        local_24c = 0;
      }
      else {
        FUN_1446dd670(&local_258,local_250,0);
        memcpy(local_258,_Src,lVar10 * 2);
      }
      FUN_148effb24(&local_248,&local_258);
      if ((local_248 != (byte *)0x0) && ((*local_248 & 0x6b) == 3)) {
        FUN_141073488(&local_200);
        FUN_14000bbd8(local_228,puVar7,0);
        FUN_1404e49fa(local_1f8,local_228);
        if (local_210 != 0) {
          FUN_1400020a8();
        }
        FUN_1447715ec(local_178,local_1f8);
        local_1a8 = 3;
        FUN_141073756(&local_200,param_1);
        if (local_130 != 0) {
          uVar4 = (uint)((ulonglong)local_130 >> 0x10);
          uVar8 = (uint)local_130 & 0xffff;
          plVar5 = (longlong *)
                   FUN_148f034cc(local_260,
                                 ((uint)local_130 << 0x10 | uVar8) +
                                 (int)((ulonglong)local_130 >> 0x20) +
                                 (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4));
          iVar3 = (int)plVar5[1];
          *(uint *)(plVar5 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)plVar5 + 0xc) < iVar3 + 1U) {
            FUN_148d9af60(plVar5,iVar3);
          }
          FUN_14112ded2((longlong)iVar3 * 0x1b8 + *plVar5,&local_200);
        }
        FUN_141072d6a(&local_200);
      }
      plVar5 = local_240;
      if (local_240 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_240 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_240)(local_240);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      puVar7 = puVar7 + 2;
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
    uVar6 = uStack_230 & 0xffffffff;
  }
  FUN_1447a1747(local_238,uVar6);
  if (local_238 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145f8d864 FUN_145f8d864 body=127 status=ok
// SIG undefined FUN_145f8d864(void)

undefined8 FUN_145f8d864(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140f7cd62(&local_28);
  FUN_1412cfe60(param_1,&local_28,(local_20 == 0) + '\n');
  FUN_1401aebe8(param_1,L"DemoSaves",9);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8d8ec FUN_145f8d8ec body=215 status=ok
// SIG undefined FUN_145f8d8ec(void)

undefined8 * FUN_145f8d8ec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140da6ea8(param_1,uVar1);
  *param_1 = &PTR_FUN_14a1df130;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 8) = 0x3c;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  param_1[9] = 0xa000000001;
  param_1[10] = 0x40d3880000000000;
  param_1[0xb] = 0x40d3880000000000;
  param_1[0xc] = 0x41086a0000000000;
  param_1[0xd] = 0x3fb999999999999a;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f847ae147ae147b;
  param_1[0x10] = 0x3fb999999999999a;
  param_1[0x11] = 0x3fe6666666666666;
  param_1[0x12] = 0x3f91111111111111;
  *(undefined4 *)(param_1 + 0x13) = 3;
  param_1[0x14] = 0x4024000000000000;
  return param_1;
}



// FUNCTION 145f8d9c3 FUN_145f8d9c3 body=44 status=ok
// SIG undefined FUN_145f8d9c3(void)

void FUN_145f8d9c3(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xb8,0x10);
  FUN_145f8d9f0(uVar1);
  DAT_14c9abe40 = uVar1;
  return;
}



// FUNCTION 145f8d9f0 FUN_145f8d9f0 body=178 status=ok
// SIG undefined FUN_145f8d9f0(void)

undefined8 * FUN_145f8d9f0(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  FUN_1446f470e(local_20,L"FDCollisionStreamer::Chunks",1);
  param_1[2] = 0;
  param_1[1] = &PTR_LAB_14a1e3950;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8daa4 FUN_145f8daa4 body=205 status=ok
// SIG undefined FUN_145f8daa4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f8daa4(void)

{
  if ((DAT_14c9e977f & 2) == 0) {
    DAT_14c9e977f = DAT_14c9e977f | 2;
    _DAT_14c9e9720 = L"FDeferredLightHairVS";
    _DAT_14c9e9738 = FUN_146826540;
    _DAT_14c9e9740 = FUN_146825d77;
    _DAT_14c9e9748 = FUN_146825fd6;
    _DAT_14c9e9750 = FUN_1407e02ea;
    _DAT_14c9e9758 = FUN_146826273;
    _DAT_14c9e9730 = FUN_1471d2b72;
    _DAT_14c9e9770 = 0xffffffff000000e0;
    _DAT_14c9e9778 = 8;
    DAT_14c9e977c = 0;
    _DAT_14c9e9760 = &LAB_1471d2b9c;
    FUN_145f8db72();
    FUN_1407e00cc(&DAT_14c9e9718);
    return;
  }
  return;
}



// FUNCTION 145f8db72 FUN_145f8db72 body=123 status=ok
// SIG undefined FUN_145f8db72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f8db72(void)

{
  _DAT_14c9eb880 = L"BASE";
  DAT_14c9eb8aa = 4;
  _DAT_14c9eb888 = FUN_140b35ae4();
  _DAT_14c9eb890 = DAT_14c9e9728;
  _DAT_14c9eb898 = &LAB_14682652b;
  DAT_14c9e9728 = &DAT_14c9eb880;
  DAT_14c9e977d = DAT_14c9e977d + '\x01';
  _DAT_14c9eb8a0 = 0x100000000;
  if (*(char *)(_DAT_14c9eb888 + 100) != '\0') {
    DAT_14c9e977e = DAT_14c9e977e + '\x01';
  }
  return;
}



// FUNCTION 145f8dbee FUN_145f8dbee body=261 status=ok
// SIG undefined FUN_145f8dbee(void)

void FUN_145f8dbee(void)

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
              0x110) < DAT_14c9ea820) {
    FUN_144b3d300(&DAT_14c9ea820);
    if (DAT_14c9ea820 == -1) {
      FUN_145f8dcf4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x34b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ea7a0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf48a1);
      _Init_thread_footer(&DAT_14c9ea820);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8dcf4 FUN_145f8dcf4 body=232 status=ok
// SIG undefined FUN_145f8dcf4(void)

longlong * FUN_145f8dcf4(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_1462d5c64;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f8dde2 FUN_145f8dde2 body=226 status=ok
// SIG undefined FUN_145f8dde2(void)

longlong * FUN_145f8dde2(longlong *param_1)

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
  pcVar13 = FUN_1462f1928;
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
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8dec6 FUN_145f8dec6 body=130 status=ok
// SIG undefined FUN_145f8dec6(void)

undefined1 * FUN_145f8dec6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutQueueState";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer< FQueueState >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x495;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147258f2a;
}



// FUNCTION 145f8df48 FUN_145f8df48 body=138 status=ok
// SIG undefined FUN_145f8df48(void)

code * FUN_145f8df48(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxNodes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000498;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f8dfd2;
}



// FUNCTION 145f8dfd2 FUN_145f8dfd2 body=138 status=ok
// SIG undefined FUN_145f8dfd2(void)

code * FUN_145f8dfd2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutNodeCullArgs1";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000497;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147258ea0;
}



// FUNCTION 145f8e068 FUN_145f8e068 body=424 status=ok
// SIG undefined FUN_145f8e068(void)

undefined8 * FUN_145f8e068(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  ulonglong local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140312256();
  *param_1 = &PTR_FUN_14a4157f0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0x3c23d70a;
  *(undefined2 *)(param_1 + 0x75) = 1;
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0x3f800000;
  FUN_1446f470e(&local_28,L"PostProcessComponent0",1);
  uVar1 = FUN_1458da770();
  local_40 = local_40 & 0xffffffffffffff00;
  local_48 = CONCAT31(local_48._1_3_,1);
  lVar2 = FUN_14048696c(param_1,local_28,uVar1,uVar1);
  param_1[0x8d] = lVar2;
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  param_1[0x39] = lVar2;
  uVar1 = FUN_14085eb5a();
  local_30 = 0;
  local_40 = 0;
  local_38 = 1;
  local_48 = 0;
  lVar2 = FUN_1412ecd05(uVar1,0,L"/Engine/EngineDebugMaterials/VolumeToRender",0);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x72] = lVar2;
  uVar1 = FUN_1402d2740();
  lVar3 = 0;
  local_30 = 0;
  local_40 = 0;
  local_38 = 1;
  local_48 = 0;
  lVar2 = FUN_1412ecd05(uVar1,0,L"/Engine/EngineDebugMaterials/M_VolumeRenderSphereTracePP",0);
  if (lVar2 != 0) {
    lVar3 = FUN_1415a833e(lVar2);
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
  }
  param_1[0x73] = lVar3;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8e21c FUN_145f8e21c body=270 status=ok
// SIG undefined FUN_145f8e21c(void)

undefined8 * FUN_145f8e21c(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a660160;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd1) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebba8) {
    FUN_144b3d300(&DAT_14caebba8);
    if (DAT_14caebba8 == -1) {
      FUN_1415a8348();
      atexit((_func_5014 *)&LAB_14356efb9);
      _Init_thread_footer(&DAT_14caebba8);
    }
  }
  *(undefined4 *)(param_1 + 0x26) = 0x41700000;
  param_1[0x2c] = 0x143160000;
  *(undefined4 *)(param_1 + 0x2d) = 0x40400000;
  return param_1;
}



// FUNCTION 145f8e32a FUN_145f8e32a body=115 status=ok
// SIG undefined FUN_145f8e32a(void)

undefined8 * FUN_145f8e32a(undefined8 *param_1)

{
  FUN_1409e1656();
  *param_1 = &PTR_FUN_14aa61cc0;
  param_1[1] = &PTR_FUN_14aa61d10;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 145f8e39e FUN_145f8e39e body=40 status=ok
// SIG undefined FUN_145f8e39e(void)

undefined8 FUN_145f8e39e(undefined8 param_1,int param_2)

{
  FUN_145f8e3c6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145f8e3c6 FUN_145f8e3c6 body=183 status=ok
// SIG undefined FUN_145f8e3c6(void)

void FUN_145f8e3c6(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14af0a7e0;
  param_1[6] = &PTR_FUN_14af0aac0;
  FUN_144760e21(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    plVar1 = param_1 + 0xc;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145f8e47e FUN_145f8e47e body=313 status=ok
// SIG undefined FUN_145f8e47e(void)

void FUN_145f8e47e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  int local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    FUN_148cd348e(param_2,0);
  }
  local_3c = 0xffffffff;
  local_40 = -1;
  lVar1 = FUN_14011c349();
  FUN_140ae5c1d(lVar1 + 0x78,&local_3c,&local_40);
  iVar4 = (local_40 + 1) - local_3c;
  if (iVar4 != 0) {
    uVar5 = (ulonglong)(iVar4 + (uint)(iVar4 == 0));
    uVar3 = local_3c;
    do {
      if (((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(param_1 + 0x78f0))) &&
         (lVar1 = (ulonglong)uVar3 * 0x48 + *(longlong *)(param_1 + 0x78e8), lVar1 != 0)) {
        if (*(longlong **)(lVar1 + 0x28) != (longlong *)0x0 && *(longlong *)(lVar1 + 0x20) != 0) {
          lVar1 = (**(code **)(**(longlong **)(lVar1 + 0x28) + 8))();
          if (lVar1 != 0) {
            lVar2 = FUN_144a7d050();
            if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
              iVar4 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar4 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
                FUN_145f8e5b8(param_2,iVar4);
              }
              *(longlong *)(*param_2 + (longlong)iVar4 * 8) = lVar1;
            }
          }
        }
      }
      uVar3 = uVar3 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8e5b8 FUN_145f8e5b8 body=132 status=ok
// SIG undefined FUN_145f8e5b8(void)

void FUN_145f8e5b8(longlong param_1,int param_2)

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



// FUNCTION 145f8e642 FUN_145f8e642 body=381 status=ok
// SIG undefined FUN_145f8e642(void)

void FUN_145f8e642(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  float fVar3;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined1 local_68 [8];
  longlong local_60;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *param_1;
  local_44 = 0x3f800000;
  local_48 = 0x3f800000;
  local_4c = 0x3f800000;
  local_78 = &DAT_14c872ce8;
  FUN_14153841e(DAT_14c872ce0,L"SonyController",L"DSPadSpeakerGain");
  local_78 = &DAT_14c872ce8;
  FUN_14153841e(DAT_14c872ce0,L"SonyController",L"DSHeadphonesGain",&local_48);
  local_78 = &DAT_14c872ce8;
  FUN_14153841e(DAT_14c872ce0,L"SonyController",L"DSMicrophoneGain",&local_4c);
  if (DAT_14cb0d2b0 == 0) {
    fVar3 = 1.0;
  }
  else {
    FUN_1415a83ee(DAT_14cb0d2b0,local_68);
    cVar2 = FUN_140e510c6(local_68);
    if (cVar2 == '\0') {
      fVar3 = 1.0;
    }
    else {
      fVar3 = *(float *)(local_60 + 0x498);
      if (1.0 <= fVar3) {
        fVar3 = 1.0;
      }
      if (fVar3 <= 1.1754944e-38) {
        fVar3 = 1.1754944e-38;
      }
      fVar3 = 1.0 / fVar3;
    }
    FUN_14051bf10(local_68);
  }
  *(undefined4 *)(lVar1 + 0xb08) = local_44;
  *(undefined4 *)(lVar1 + 0xb0c) = local_48;
  *(undefined4 *)(lVar1 + 0xb10) = local_4c;
  *(float *)(lVar1 + 0xdb0) = fVar3;
  *(undefined4 *)(lVar1 + 0xb14) = 0x1010101;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8e7c0 FUN_145f8e7c0 body=232 status=ok
// SIG undefined FUN_145f8e7c0(void)

void FUN_145f8e7c0(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140c2cbec(param_1 + 0x203,param_1);
  FUN_145907e2a(param_1 + 0x204,param_1);
  FUN_1403d8a98(param_1,param_2);
  lVar5 = FUN_1447210f0(param_1);
  if ((lVar5 != 0) && (FUN_145cff6ec(&local_28,lVar5), local_20 != (longlong *)0x0)) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_20;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_28 != 0) {
        FUN_145f8e8ba(local_28,param_1);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145f8e8ba FUN_145f8e8ba body=571 status=ok
// SIG undefined FUN_145f8e8ba(void)

void FUN_145f8e8ba(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x38);
  lVar7 = param_1 + 0x48;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar10 = 0;
  iVar5 = 0;
  local_60 = lVar7;
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_1449c0562(&local_68);
    iVar5 = *(int *)(param_1 + 0x60);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar1;
  if ((iStack_54 != iVar5) || (local_60 != lVar7)) {
    iVar10 = 0;
    do {
      do {
        lVar11 = *local_90;
        lVar8 = (longlong)iStack_74;
        local_68 = 0;
        FUN_14485c47a(&local_68,param_2);
        iVar6 = FUN_148e09958(lVar11 + lVar8 * 0x20 + 8,&local_68);
        iVar10 = iVar10 + iVar6;
        local_78 = local_78 & ~local_88._4_4_;
        FUN_1449c0562(&local_88);
      } while (iStack_74 != iVar5);
    } while ((local_80 != lVar7) || (local_90 != plVar1));
  }
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x20);
    lVar11 = (longlong)*(int *)(param_1 + 0x28) << 3;
    do {
      cVar4 = FUN_145f8eaf6(lVar7,param_2);
      if (cVar4 != '\0') {
        local_68 = 0;
        FUN_14485c47a(&local_68,param_2);
        local_90 = &local_68;
        iVar5 = FUN_145f8eb70(param_1 + 0x20);
        iVar10 = iVar5 + iVar10;
        if (((*(int *)(param_1 + 0x28) == 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
           (lVar7 = FUN_14479d2ce(param_1 + 8), lVar7 != 0)) {
          puVar2 = (undefined8 *)(param_1 + 0x30);
          if (*(longlong *)(lVar7 + 0x1f0) == 0) {
            puVar9 = (undefined8 *)(lVar7 + 0x458);
          }
          else {
            puVar9 = (undefined8 *)(*(longlong *)(lVar7 + 0x1f0) + 0xf0);
          }
          uVar3 = *puVar9;
          lVar7 = FUN_144a61814(uVar3,puVar2);
          if (lVar7 != 0) {
            FUN_1405a424c(uVar3,*puVar2);
          }
          *puVar2 = 0;
        }
        break;
      }
      lVar7 = lVar7 + 8;
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
  }
  if (0 < iVar10) {
    FUN_140e61a54(param_1);
  }
  FUN_145f8ecc4(param_1);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145f8eaf6 FUN_145f8eaf6 body=120 status=ok
// SIG undefined FUN_145f8eaf6(void)

ulonglong FUN_145f8eaf6(int *param_1)

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



// FUNCTION 145f8eb70 FUN_145f8eb70 body=283 status=ok
// SIG undefined FUN_145f8eb70(void)

int FUN_145f8eb70(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  
  iVar9 = (int)param_1[1];
  lVar10 = (longlong)iVar9;
  if (lVar10 == 0) {
    iVar9 = 0;
  }
  else {
    lVar1 = *param_1;
    bVar4 = FUN_145f8ec8c(lVar1,*param_2);
    lVar8 = lVar1 + 8;
    iVar6 = 0;
    iVar13 = 0;
    do {
      lVar12 = (longlong)iVar13;
      iVar2 = iVar13 + 1;
      if (iVar13 + 1 < iVar9) {
        iVar2 = iVar9;
      }
      lVar7 = lVar8 + lVar12 * 8;
      lVar11 = lVar12;
      iVar14 = iVar13;
      do {
        lVar11 = lVar11 + 1;
        iVar3 = iVar2;
        if (lVar10 <= lVar11) break;
        bVar5 = FUN_145f8ec8c(lVar7,*param_2,iVar14,lVar11,lVar8,iVar14,lVar7);
        iVar13 = iVar13 + 1;
        lVar7 = lVar7 + 8;
        iVar3 = iVar13;
      } while ((bVar4 & 1) == bVar5);
      iVar13 = iVar3;
      if ((bVar4 & 1) == 0) {
        if (iVar6 != iVar14) {
          memmove((void *)(lVar1 + (longlong)iVar6 * 8),(void *)(lVar1 + lVar12 * 8),
                  (longlong)(iVar13 - iVar14) << 3);
        }
        iVar6 = iVar6 + (iVar13 - iVar14);
      }
      bVar4 = bVar4 ^ 1;
    } while (lVar11 < lVar10);
    *(int *)(param_1 + 1) = iVar6;
    iVar9 = iVar9 - iVar6;
  }
  return iVar9;
}



// FUNCTION 145f8ec8c FUN_145f8ec8c body=55 status=ok
// SIG undefined FUN_145f8ec8c(void)

ulonglong FUN_145f8ec8c(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 145f8ecc4 FUN_145f8ecc4 body=671 status=ok
// SIG undefined FUN_145f8ecc4(void)

void FUN_145f8ecc4(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_d8 [44];
  uint local_ac;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)(param_1 + 0x38);
  local_78 = 0;
  uStack_70 = 0;
  lVar12 = param_1 + 0x48;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar13 = 0;
  local_60 = lVar12;
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_1449c0562(&local_68);
    iVar13 = *(int *)(param_1 + 0x60);
  }
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_80 = local_50;
  local_7c = local_4c;
  local_98 = local_68;
  local_90 = local_60;
  local_a0 = plVar1;
  if ((iStack_54 != iVar13) || (local_60 != lVar12)) {
    do {
      lVar11 = *local_a0;
      lVar9 = (longlong)iStack_84 * 0x20;
      puVar2 = (undefined8 *)(lVar11 + lVar9);
      iVar6 = *(int *)(lVar11 + 0x10 + lVar9);
      if (0 < iVar6) {
        local_a8 = (longlong *)(lVar11 + lVar9 + 8);
        lVar11 = 0;
        bVar10 = false;
        do {
          local_ac = ~(uint)lVar11;
          while( true ) {
            lVar9 = lVar11 * 8 + *local_a8;
            cVar4 = FUN_144729dda(lVar9);
            if ((((cVar4 != '\0') && (lVar7 = FUN_14479d2ce(lVar9), lVar7 != 0)) &&
                ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0)) &&
               (lVar9 = FUN_14479d2ce(lVar9), (*(byte *)(lVar9 + 0x65) & 0x18) == 0x10)) break;
            iVar6 = *(int *)(puVar2 + 2);
            iVar8 = iVar6 + local_ac;
            if (iVar8 != 0) {
              iVar14 = 1;
              if (iVar8 < 1) {
                iVar14 = iVar8;
              }
              memmove((void *)(puVar2[1] + lVar11 * 8),
                      (void *)(puVar2[1] + (longlong)(iVar6 - iVar14) * 8),(longlong)iVar14 << 3);
              iVar6 = *(int *)(puVar2 + 2);
            }
            *(int *)(puVar2 + 2) = iVar6 + -1;
            bVar10 = true;
            if (iVar6 + -1 <= lVar11) goto LAB_145f8eecd;
          }
          lVar11 = lVar11 + 1;
          iVar6 = *(int *)(puVar2 + 2);
        } while (lVar11 < iVar6);
        if (bVar10) {
LAB_145f8eecd:
          FUN_148e12a88(local_a8);
          iVar6 = *(int *)(puVar2 + 2);
        }
      }
      uVar3 = uStack_70;
      if (iVar6 == 0) {
        lVar11 = (longlong)(int)uStack_70;
        uVar5 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
        if (uStack_70._4_4_ < uVar5) {
          FUN_145a5d3ba(&local_78,uVar3 & 0xffffffff);
        }
        *(undefined8 *)(local_78 + lVar11 * 8) = *puVar2;
      }
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
      lVar11 = local_78;
    } while (((iStack_84 != iVar13) || (local_90 != lVar12)) || (local_a0 != plVar1));
    lVar12 = (longlong)(int)uStack_70;
    if (lVar12 != 0) {
      lVar9 = 0;
      do {
        FUN_148e13212(plVar1,*(undefined8 *)(lVar11 + lVar9));
        lVar9 = lVar9 + 8;
      } while (lVar12 * 8 != lVar9);
    }
    if (local_78 != 0) {
      FUN_1400020a8(local_78);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145f8ef64 FUN_145f8ef64 body=129 status=ok
// SIG undefined FUN_145f8ef64(void)

void FUN_145f8ef64(longlong param_1)

{
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14485c47a(param_1 + 0x28);
  local_38 = FUN_145aff744;
  local_30 = 0;
  FUN_145f8efe6(local_28,param_1);
  FUN_14127be6a(&DAT_14cbd0b78,&local_38,local_28);
  FUN_1449db362(local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8efe6 FUN_145f8efe6 body=428 status=ok
// SIG undefined FUN_145f8efe6(void)

longlong * FUN_145f8efe6(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_145f8f0c6:
    *puVar5 = &PTR_LAB_14b961ce0;
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
    *puVar5 = &PTR_FUN_14b9997c0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145f8f0c6;
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
    *puVar5 = &PTR_LAB_14b961ce0;
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
    *puVar5 = &PTR_FUN_14b9997c0;
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



// FUNCTION 145f8f192 FUN_145f8f192 body=26 status=ok
// SIG undefined FUN_145f8f192(void)

undefined8 FUN_145f8f192(longlong param_1,undefined8 param_2)

{
  FUN_145f8f1ac(param_1 + 0x18);
  return param_2;
}



// FUNCTION 145f8f1ac FUN_145f8f1ac body=422 status=ok
// SIG undefined FUN_145f8f1ac(void)

longlong * FUN_145f8f1ac(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb71d98 != (longlong *)0x0 && DAT_14cb71da0 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb71d98 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cb71d98;
    if (DAT_14cb71da0 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_38);
    goto LAB_145f8f27d;
  }
  lVar3 = FUN_14001cc68(0x70,0x10);
  FUN_145f8f354(lVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b3ece90;
  plVar4[2] = lVar3;
  local_30 = plVar4;
  if (lVar3 == 0) {
    local_38 = 0;
    goto LAB_145f8f27d;
  }
  local_38 = lVar3;
  if (((*(longlong *)(lVar3 + 0x10) != 0) && (*(longlong *)(lVar3 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar3 + 0x18) + 8))) goto LAB_145f8f27d;
  if (plVar4 == (longlong *)0x0) {
    *(longlong *)(lVar3 + 0x10) = lVar3;
    plVar5 = *(longlong **)(lVar3 + 0x18);
    if (plVar5 != (longlong *)0x0) {
LAB_145f8f2f8:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      *(longlong **)(lVar3 + 0x18) = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_145f8f273;
    }
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong *)(lVar3 + 0x10) = lVar3;
    if (*(longlong **)(lVar3 + 0x18) != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(lVar3 + 0x18);
      if (plVar5 != (longlong *)0x0) goto LAB_145f8f2f8;
      *(longlong **)(lVar3 + 0x18) = plVar4;
    }
LAB_145f8f273:
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_145f8f27d:
  *param_2 = local_38;
  param_2[1] = (longlong)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145f8f354 FUN_145f8f354 body=221 status=ok
// SIG undefined FUN_145f8f354(void)

undefined8 * FUN_145f8f354(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b3ee630;
  *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) & 0x80 | 8;
  *(undefined1 *)((longlong)param_1 + 0x2b) = 1;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[4] = &PTR_FUN_14a1b6cf0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  FUN_1446efa72(param_1 + 9,0,3,0x10);
  *(undefined4 *)(param_1 + 10) = 3;
  puVar1 = (undefined8 *)param_1[9];
  *puVar1 = &PTR_LAB_149e01f80;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14b3eee80;
  puVar1[3] = param_1;
  puVar1[4] = FUN_1449bd63c;
  *(undefined4 *)(puVar1 + 5) = 0;
  return param_1;
}



// FUNCTION 145f8f432 FUN_145f8f432 body=246 status=ok
// SIG undefined FUN_145f8f432(void)

undefined8 *
FUN_145f8f432(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = 1;
  *puVar4 = &PTR_FUN_14b47b0e0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063ee94(puVar4 + 4);
  local_48 = uVar3;
  local_40 = uVar1;
  FUN_145f8f52a(uVar5,param_3);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8f52a FUN_145f8f52a body=423 status=ok
// SIG undefined FUN_145f8f52a(void)

void FUN_145f8f52a(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145f8f600:
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b9cc5c0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145f8f600;
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
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b9cc5c0;
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
                    /* WARNING: Could not recover jumptable at 0x000145f8f6b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145f8f6d2 FUN_145f8f6d2 body=226 status=ok
// SIG undefined FUN_145f8f6d2(void)

longlong * FUN_145f8f6d2(longlong *param_1)

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
  pcVar13 = FUN_1462f1df2;
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
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8f7b6 FUN_145f8f7b6 body=132 status=ok
// SIG undefined FUN_145f8f7b6(void)

undefined1 * FUN_145f8f7b6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutRasterBinArgsSWHW";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147259b9c;
}



// FUNCTION 145f8f83a FUN_145f8f83a body=138 status=ok
// SIG undefined FUN_145f8f83a(void)

code * FUN_145f8f83a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FinalizeMode";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1400000548;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147259b12;
}



// FUNCTION 145f8f8c4 FUN_145f8f8c4 body=138 status=ok
// SIG undefined FUN_145f8f8c4(void)

code * FUN_145f8f8c4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenderFlags";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000549;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f8f83a;
}



// FUNCTION 145f8f94e FUN_145f8f94e body=226 status=ok
// SIG undefined FUN_145f8f94e(void)

longlong * FUN_145f8f94e(longlong *param_1)

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
  pcVar13 = FUN_146305cb4;
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
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8fa32 FUN_145f8fa32 body=132 status=ok
// SIG undefined FUN_145f8fa32(void)

undefined1 * FUN_145f8fa32(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumIndirectArgs";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x132;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472dbccc;
}



// FUNCTION 145f8fab6 FUN_145f8fab6 body=138 status=ok
// SIG undefined FUN_145f8fab6(void)

code * FUN_145f8fab6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DimClearValue";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000134;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f8fb40;
}



// FUNCTION 145f8fb40 FUN_145f8fb40 body=138 status=ok
// SIG undefined FUN_145f8fb40(void)

code * FUN_145f8fb40(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectArgStride";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000133;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f8fa32;
}



// FUNCTION 145f8fbd2 FUN_145f8fbd2 body=438 status=ok
// SIG undefined FUN_145f8fbd2(void)

undefined8 * FUN_145f8fbd2(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14130a082();
  *param_1 = &PTR_FUN_14aeab700;
  param_1[8] = 0;
  param_1[10] = 0;
  local_98 = param_1[8];
  local_50 = param_1[9];
  local_88 = (longlong *)param_1[10];
  local_40 = param_1[0xb];
  local_38 = param_1[0xc];
  uStack_30 = param_1[0xd];
  local_28 = param_1[0xe];
  uStack_20 = param_1[0xf];
  uVar1 = local_28;
  uVar2 = uStack_20;
  local_48 = local_88;
  local_58 = local_98;
  param_1[0xe] = CONCAT44(uStack_64,local_68);
  param_1[0xf] = CONCAT44(uStack_5c,uStack_60);
  param_1[0xc] = &PTR_LAB_14aeb56e0;
  param_1[0xd] = &LAB_143b4de1a;
  param_1[10] = 0;
  param_1[0xb] = uStack_80;
  param_1[8] = FUN_14841bf2a;
  param_1[9] = uStack_90;
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = local_38;
  uStack_70 = uStack_30;
  uStack_90 = local_50;
  uStack_80 = local_40;
  local_28 = uVar1;
  uStack_20 = uVar2;
  if (local_98 != 0) {
    plVar3 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar3 = &local_78;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  *param_1 = &PTR_FUN_14aeabb80;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f8fd8a FUN_145f8fd8a body=37 status=ok
// SIG undefined FUN_145f8fd8a(void)

void FUN_145f8fd8a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x2c8);
  FUN_145f8fdb0(param_2);
  return;
}



// FUNCTION 145f8fdb0 FUN_145f8fdb0 body=410 status=ok
// SIG undefined FUN_145f8fdb0(void)

undefined8 * FUN_145f8fdb0(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14b081e20;
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
  FUN_1400b22c2(param_1 + 0x13,"Stamps");
  *(undefined4 *)(param_1 + 0x15) = 0x44e10000;
  param_1[0x16] = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  *(undefined2 *)(param_1 + 0x36) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  return param_1;
}



// FUNCTION 145f8ff4a FUN_145f8ff4a body=292 status=ok
// SIG undefined FUN_145f8ff4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f8ff4a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d15b8) {
    FUN_144b3d300(&DAT_14c9d15b8);
    if (DAT_14c9d15b8 == -1) {
      FUN_145f901b8();
      FUN_145f9006e();
      FUN_140db5666(&DAT_14c9d1510,0,&DAT_14c9d14a8,L"FHairStrandsShadowDepthInjectionPS",
                    L"/Engine/Private/HairStrands/HairStrandsVoxelRasterCompute.usf",L"MainPS",3,1,
                    FUN_14716bd52,FUN_14716bcf2,FUN_1462c5e42,&LAB_14716bcee,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9d42d8);
      _DAT_14c9d1510 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c36c55);
      _Init_thread_footer(&DAT_14c9d15b8);
    }
  }
  return &DAT_14c9d1510;
}



// FUNCTION 145f9006e FUN_145f9006e body=205 status=ok
// SIG undefined FUN_145f9006e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f9006e(void)

{
  if ((DAT_14c9d150f & 2) == 0) {
    DAT_14c9d150f = DAT_14c9d150f | 2;
    _DAT_14c9d14b0 = L"FHairStrandsShadowDepthInjectionPS";
    _DAT_14c9d14c8 = FUN_146826540;
    _DAT_14c9d14d0 = FUN_146825d77;
    _DAT_14c9d14d8 = FUN_146825fd6;
    _DAT_14c9d14e0 = FUN_1407e02ea;
    _DAT_14c9d14e8 = FUN_146826273;
    _DAT_14c9d14c0 = FUN_14716bcbe;
    _DAT_14c9d1500 = 0xffffffff000000e0;
    _DAT_14c9d1508 = 8;
    DAT_14c9d150c = 0;
    _DAT_14c9d14f0 = &LAB_14716bcea;
    FUN_145f9013c();
    FUN_1407e00cc(&DAT_14c9d14a8);
    return;
  }
  return;
}



// FUNCTION 145f9013c FUN_145f9013c body=123 status=ok
// SIG undefined FUN_145f9013c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f9013c(void)

{
  _DAT_14c9d4fc8 = L"BASE";
  DAT_14c9d4ff2 = 4;
  _DAT_14c9d4fd0 = FUN_140b35ae4();
  _DAT_14c9d4fd8 = DAT_14c9d14b8;
  _DAT_14c9d4fe0 = &LAB_14682652b;
  DAT_14c9d14b8 = &DAT_14c9d4fc8;
  DAT_14c9d150d = DAT_14c9d150d + '\x01';
  _DAT_14c9d4fe8 = 0x100000000;
  if (*(char *)(_DAT_14c9d4fd0 + 100) != '\0') {
    DAT_14c9d150e = DAT_14c9d150e + '\x01';
  }
  return;
}



// FUNCTION 145f901b8 FUN_145f901b8 body=261 status=ok
// SIG undefined FUN_145f901b8(void)

void FUN_145f901b8(void)

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
              0x110) < DAT_14c9d4358) {
    FUN_144b3d300(&DAT_14c9d4358);
    if (DAT_14c9d4358 == -1) {
      FUN_145f902be(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x4c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d42d8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4d6b7);
      _Init_thread_footer(&DAT_14c9d4358);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f902be FUN_145f902be body=232 status=ok
// SIG undefined FUN_145f902be(void)

longlong * FUN_145f902be(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_145dcf03c;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f903ac FUN_145f903ac body=292 status=ok
// SIG undefined FUN_145f903ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f903ac(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d16e0) {
    FUN_144b3d300(&DAT_14c9d16e0);
    if (DAT_14c9d16e0 == -1) {
      FUN_145f9061a();
      FUN_145f904d0();
      FUN_140db5666(&DAT_14c9d1638,0,&DAT_14c9d15d0,L"FHairStrandsShadowDepthInjectionVS",
                    L"/Engine/Private/HairStrands/HairStrandsVoxelRasterCompute.usf",L"MainVS",0,1,
                    FUN_14716be70,FUN_14716be10,FUN_1462c5e78,&LAB_14716be0c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9d43e8);
      _DAT_14c9d1638 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c36c61);
      _Init_thread_footer(&DAT_14c9d16e0);
    }
  }
  return &DAT_14c9d1638;
}



// FUNCTION 145f904d0 FUN_145f904d0 body=205 status=ok
// SIG undefined FUN_145f904d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f904d0(void)

{
  if ((DAT_14c9d1637 & 2) == 0) {
    DAT_14c9d1637 = DAT_14c9d1637 | 2;
    _DAT_14c9d15d8 = L"FHairStrandsShadowDepthInjectionVS";
    _DAT_14c9d15f0 = FUN_146826540;
    _DAT_14c9d15f8 = FUN_146825d77;
    _DAT_14c9d1600 = FUN_146825fd6;
    _DAT_14c9d1608 = FUN_1407e02ea;
    _DAT_14c9d1610 = FUN_146826273;
    _DAT_14c9d15e8 = FUN_14716bddc;
    _DAT_14c9d1628 = 0xffffffff000000e0;
    _DAT_14c9d1630 = 8;
    DAT_14c9d1634 = 0;
    _DAT_14c9d1618 = &LAB_14716be08;
    FUN_145f9059e();
    FUN_1407e00cc(&DAT_14c9d15d0);
    return;
  }
  return;
}



// FUNCTION 145f9059e FUN_145f9059e body=123 status=ok
// SIG undefined FUN_145f9059e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f9059e(void)

{
  _DAT_14c9d4ff8 = L"BASE";
  DAT_14c9d5022 = 4;
  _DAT_14c9d5000 = FUN_140b35ae4();
  _DAT_14c9d5008 = DAT_14c9d15e0;
  _DAT_14c9d5010 = &LAB_14682652b;
  DAT_14c9d15e0 = &DAT_14c9d4ff8;
  DAT_14c9d1635 = DAT_14c9d1635 + '\x01';
  _DAT_14c9d5018 = 0x100000000;
  if (*(char *)(_DAT_14c9d5000 + 100) != '\0') {
    DAT_14c9d1636 = DAT_14c9d1636 + '\x01';
  }
  return;
}



// FUNCTION 145f9061a FUN_145f9061a body=261 status=ok
// SIG undefined FUN_145f9061a(void)

void FUN_145f9061a(void)

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
              0x110) < DAT_14c9d4468) {
    FUN_144b3d300(&DAT_14c9d4468);
    if (DAT_14c9d4468 == -1) {
      FUN_145f90720(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x42;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d43e8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4d6cf);
      _Init_thread_footer(&DAT_14c9d4468);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f90720 FUN_145f90720 body=232 status=ok
// SIG undefined FUN_145f90720(void)

longlong * FUN_145f90720(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_1462c8086;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f9080e FUN_145f9080e body=292 status=ok
// SIG undefined FUN_145f9080e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f9080e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d1c60) {
    FUN_144b3d300(&DAT_14c9d1c60);
    if (DAT_14c9d1c60 == -1) {
      FUN_145f90a7c();
      FUN_145f90932();
      FUN_140db5666(&DAT_14c9d1bb8,0,&DAT_14c9d1b50,L"FHairEnvironmentLightingVS",
                    L"/Engine/Private/HairStrands/HairStrandsEnvironmentLighting.usf",L"MainVS",0,1,
                    FUN_14716c3b2,FUN_14716c352,FUN_1462c5f1a,&LAB_14716c34e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9d4690);
      _DAT_14c9d1bb8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c38ee7);
      _Init_thread_footer(&DAT_14c9d1c60);
    }
  }
  return &DAT_14c9d1bb8;
}



// FUNCTION 145f90932 FUN_145f90932 body=205 status=ok
// SIG undefined FUN_145f90932(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f90932(void)

{
  if ((DAT_14c9d1bb7 & 2) == 0) {
    DAT_14c9d1bb7 = DAT_14c9d1bb7 | 2;
    _DAT_14c9d1b58 = L"FHairEnvironmentLightingVS";
    _DAT_14c9d1b70 = FUN_146826540;
    _DAT_14c9d1b78 = FUN_146825d77;
    _DAT_14c9d1b80 = FUN_146825fd6;
    _DAT_14c9d1b88 = FUN_1407e02ea;
    _DAT_14c9d1b90 = FUN_146826273;
    _DAT_14c9d1b68 = FUN_14716c31e;
    _DAT_14c9d1ba8 = 0xffffffff000000e0;
    _DAT_14c9d1bb0 = 8;
    DAT_14c9d1bb4 = 0;
    _DAT_14c9d1b98 = &LAB_14716c34a;
    FUN_145f90a00();
    FUN_1407e00cc(&DAT_14c9d1b50);
    return;
  }
  return;
}



// FUNCTION 145f90a00 FUN_145f90a00 body=123 status=ok
// SIG undefined FUN_145f90a00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f90a00(void)

{
  _DAT_14c9d50b8 = L"BASE";
  DAT_14c9d50e2 = 4;
  _DAT_14c9d50c0 = FUN_140b35ae4();
  _DAT_14c9d50c8 = DAT_14c9d1b60;
  _DAT_14c9d50d0 = &LAB_14682652b;
  DAT_14c9d1b60 = &DAT_14c9d50b8;
  DAT_14c9d1bb5 = DAT_14c9d1bb5 + '\x01';
  _DAT_14c9d50d8 = 0x100000000;
  if (*(char *)(_DAT_14c9d50c0 + 100) != '\0') {
    DAT_14c9d1bb6 = DAT_14c9d1bb6 + '\x01';
  }
  return;
}



// FUNCTION 145f90a7c FUN_145f90a7c body=261 status=ok
// SIG undefined FUN_145f90a7c(void)

void FUN_145f90a7c(void)

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
              0x110) < DAT_14c9d4710) {
    FUN_144b3d300(&DAT_14c9d4710);
    if (DAT_14c9d4710 == -1) {
      FUN_145f90b82(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0xd8;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d4690,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4d717);
      _Init_thread_footer(&DAT_14c9d4710);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f90b82 FUN_145f90b82 body=232 status=ok
// SIG undefined FUN_145f90b82(void)

longlong * FUN_145f90b82(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_1462c8e52;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f90c70 FUN_145f90c70 body=292 status=ok
// SIG undefined FUN_145f90c70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f90c70(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9dedb0) {
    FUN_144b3d300(&DAT_14c9dedb0);
    if (DAT_14c9dedb0 == -1) {
      FUN_145f90ede();
      FUN_145f90d94();
      FUN_140db5666(&DAT_14c9ded08,0,&DAT_14c9deca0,L"FHeterogeneousVolumesSparseVoxelsHitGroup",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesHardwareRayTracing.usf"
                    ,
                    L"closesthit=SparseVoxelsClosestHitShader anyhit=SparseVoxelsAnyHitShader intersection=SparseVoxelsIntersectionShader"
                    ,8,1,FUN_14719bb50,FUN_14719bb0c,&LAB_145c6e82e,&LAB_14719bb08,&LAB_14719bb02,
                    &LAB_14712ac08,0xe0,&DAT_14c9e0ad0);
      _DAT_14c9ded08 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c9a346);
      _Init_thread_footer(&DAT_14c9dedb0);
    }
  }
  return &DAT_14c9ded08;
}



// FUNCTION 145f90d94 FUN_145f90d94 body=205 status=ok
// SIG undefined FUN_145f90d94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f90d94(void)

{
  if ((DAT_14c9ded07 & 2) == 0) {
    DAT_14c9ded07 = DAT_14c9ded07 | 2;
    _DAT_14c9deca8 = L"FHeterogeneousVolumesSparseVoxelsHitGroup";
    _DAT_14c9decc0 = FUN_146826540;
    _DAT_14c9decc8 = FUN_146825d77;
    _DAT_14c9decd0 = FUN_146825fd6;
    _DAT_14c9decd8 = FUN_1407e02ea;
    _DAT_14c9dece0 = FUN_146826273;
    _DAT_14c9decb8 = FUN_14719bad4;
    _DAT_14c9decf8 = 0xffffffff000000e0;
    _DAT_14c9ded00 = 8;
    DAT_14c9ded04 = 0;
    _DAT_14c9dece8 = &LAB_14719bafe;
    FUN_145f90e62();
    FUN_1407e00cc(&DAT_14c9deca0);
    return;
  }
  return;
}



// FUNCTION 145f90e62 FUN_145f90e62 body=123 status=ok
// SIG undefined FUN_145f90e62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f90e62(void)

{
  _DAT_14c9e1a48 = L"BASE";
  DAT_14c9e1a72 = 4;
  _DAT_14c9e1a50 = FUN_140b35ae4();
  _DAT_14c9e1a58 = DAT_14c9decb0;
  _DAT_14c9e1a60 = &LAB_14682652b;
  DAT_14c9decb0 = &DAT_14c9e1a48;
  DAT_14c9ded05 = DAT_14c9ded05 + '\x01';
  _DAT_14c9e1a68 = 0x100000000;
  if (*(char *)(_DAT_14c9e1a50 + 100) != '\0') {
    DAT_14c9ded06 = DAT_14c9ded06 + '\x01';
  }
  return;
}



// FUNCTION 145f90ede FUN_145f90ede body=261 status=ok
// SIG undefined FUN_145f90ede(void)

void FUN_145f90ede(void)

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
              0x110) < DAT_14c9e0b50) {
    FUN_144b3d300(&DAT_14c9e0b50);
    if (DAT_14c9e0b50 == -1) {
      FUN_145f90fe4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x110;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e0ad0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ca0e75);
      _Init_thread_footer(&DAT_14c9e0b50);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f90fe4 FUN_145f90fe4 body=232 status=ok
// SIG undefined FUN_145f90fe4(void)

longlong * FUN_145f90fe4(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_1462cf4b4;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f910d2 FUN_145f910d2 body=292 status=ok
// SIG undefined FUN_145f910d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f910d2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e2198) {
    FUN_144b3d300(&DAT_14c9e2198);
    if (DAT_14c9e2198 == -1) {
      FUN_145f91340();
      FUN_145f911f6();
      FUN_140db5666(&DAT_14c9e20f0,0,&DAT_14c9e2088,L"FClearAllocator",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesSparseVoxelPipeline.usf"
                    ,L"ClearAllocator",5,1,FUN_1471b5c3e,FUN_1471b5bde,&LAB_1471b5ba2,&LAB_1471b5b9e
                    ,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e5a08);
      _DAT_14c9e20f0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cab23d);
      _Init_thread_footer(&DAT_14c9e2198);
    }
  }
  return &DAT_14c9e20f0;
}



// FUNCTION 145f911f6 FUN_145f911f6 body=205 status=ok
// SIG undefined FUN_145f911f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f911f6(void)

{
  if ((DAT_14c9e20ef & 2) == 0) {
    DAT_14c9e20ef = DAT_14c9e20ef | 2;
    _DAT_14c9e2090 = L"FClearAllocator";
    _DAT_14c9e20a8 = FUN_146826540;
    _DAT_14c9e20b0 = FUN_146825d77;
    _DAT_14c9e20b8 = FUN_146825fd6;
    _DAT_14c9e20c0 = FUN_1407e02ea;
    _DAT_14c9e20c8 = FUN_146826273;
    _DAT_14c9e20a0 = FUN_1471b5b70;
    _DAT_14c9e20e0 = 0xffffffff000000e0;
    _DAT_14c9e20e8 = 8;
    DAT_14c9e20ec = 0;
    _DAT_14c9e20d0 = &LAB_1471b5b9a;
    FUN_145f912c4();
    FUN_1407e00cc(&DAT_14c9e2088);
    return;
  }
  return;
}



// FUNCTION 145f912c4 FUN_145f912c4 body=123 status=ok
// SIG undefined FUN_145f912c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f912c4(void)

{
  _DAT_14c9e6bc0 = L"BASE";
  DAT_14c9e6bea = 4;
  _DAT_14c9e6bc8 = FUN_140b35ae4();
  _DAT_14c9e6bd0 = DAT_14c9e2098;
  _DAT_14c9e6bd8 = &LAB_14682652b;
  DAT_14c9e2098 = &DAT_14c9e6bc0;
  DAT_14c9e20ed = DAT_14c9e20ed + '\x01';
  _DAT_14c9e6be0 = 0x100000000;
  if (*(char *)(_DAT_14c9e6bc8 + 100) != '\0') {
    DAT_14c9e20ee = DAT_14c9e20ee + '\x01';
  }
  return;
}



// FUNCTION 145f91340 FUN_145f91340 body=261 status=ok
// SIG undefined FUN_145f91340(void)

void FUN_145f91340(void)

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
              0x110) < DAT_14c9e5a88) {
    FUN_144b3d300(&DAT_14c9e5a88);
    if (DAT_14c9e5a88 == -1) {
      FUN_145f91446(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x5a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e5a08,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cccefe);
      _Init_thread_footer(&DAT_14c9e5a88);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f91446 FUN_145f91446 body=232 status=ok
// SIG undefined FUN_145f91446(void)

longlong * FUN_145f91446(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_1462d15e8;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f91534 FUN_145f91534 body=292 status=ok
// SIG undefined FUN_145f91534(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f91534(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e7910) {
    FUN_144b3d300(&DAT_14c9e7910);
    if (DAT_14c9e7910 == -1) {
      FUN_145f917a2();
      FUN_145f91658();
      FUN_140db5666(&DAT_14c9e7868,0,&DAT_14c9e7800,L"FInstanceCullingOcclusionQueryPS",
                    L"/Engine/Private/InstanceCulling/InstanceCullingOcclusionQuery.usf",L"MainPS",3
                    ,1,FUN_1471d04d6,FUN_1471d0476,&LAB_1471d045e,&LAB_1471d045a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9e9d78);
      _DAT_14c9e7868 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cdba7c);
      _Init_thread_footer(&DAT_14c9e7910);
    }
  }
  return &DAT_14c9e7868;
}



// FUNCTION 145f91658 FUN_145f91658 body=205 status=ok
// SIG undefined FUN_145f91658(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f91658(void)

{
  if ((DAT_14c9e7867 & 2) == 0) {
    DAT_14c9e7867 = DAT_14c9e7867 | 2;
    _DAT_14c9e7808 = L"FInstanceCullingOcclusionQueryPS";
    _DAT_14c9e7820 = FUN_146826540;
    _DAT_14c9e7828 = FUN_146825d77;
    _DAT_14c9e7830 = FUN_146825fd6;
    _DAT_14c9e7838 = FUN_1407e02ea;
    _DAT_14c9e7840 = FUN_146826273;
    _DAT_14c9e7818 = FUN_1471d042c;
    _DAT_14c9e7858 = 0xffffffff000000e0;
    _DAT_14c9e7860 = 8;
    DAT_14c9e7864 = 0;
    _DAT_14c9e7848 = &LAB_1471d0456;
    FUN_145f91726();
    FUN_1407e00cc(&DAT_14c9e7800);
    return;
  }
  return;
}



// FUNCTION 145f91726 FUN_145f91726 body=123 status=ok
// SIG undefined FUN_145f91726(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f91726(void)

{
  _DAT_14c9eaf58 = L"BASE";
  DAT_14c9eaf82 = 4;
  _DAT_14c9eaf60 = FUN_140b35ae4();
  _DAT_14c9eaf68 = DAT_14c9e7810;
  _DAT_14c9eaf70 = &LAB_14682652b;
  DAT_14c9e7810 = &DAT_14c9eaf58;
  DAT_14c9e7865 = DAT_14c9e7865 + '\x01';
  _DAT_14c9eaf78 = 0x100000000;
  if (*(char *)(_DAT_14c9eaf60 + 100) != '\0') {
    DAT_14c9e7866 = DAT_14c9e7866 + '\x01';
  }
  return;
}



// FUNCTION 145f917a2 FUN_145f917a2 body=261 status=ok
// SIG undefined FUN_145f917a2(void)

void FUN_145f917a2(void)

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
              0x110) < DAT_14c9e9df8) {
    FUN_144b3d300(&DAT_14c9e9df8);
    if (DAT_14c9e9df8 == -1) {
      FUN_145f918a8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0xb9;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e9d78,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf42ad);
      _Init_thread_footer(&DAT_14c9e9df8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f918a8 FUN_145f918a8 body=232 status=ok
// SIG undefined FUN_145f918a8(void)

longlong * FUN_145f918a8(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_1462d4d68;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f91996 FUN_145f91996 body=292 status=ok
// SIG undefined FUN_145f91996(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f91996(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca013b8) {
    FUN_144b3d300(&DAT_14ca013b8);
    if (DAT_14ca013b8 == -1) {
      FUN_145f91c04();
      FUN_145f91aba();
      FUN_140db5666(&DAT_14ca01310,0,&DAT_14ca012a8,L"FClearLightSampleTracesCS",
                    L"/Engine/Private/Lumen/LumenScreenProbeTracing.usf",L"ClearLightSampleTracesCS"
                    ,5,1,FUN_147220efe,FUN_147220e9e,&LAB_1462e7332,&LAB_147220e9a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca05bd0);
      _DAT_14ca01310 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142db08d4);
      _Init_thread_footer(&DAT_14ca013b8);
    }
  }
  return &DAT_14ca01310;
}



// FUNCTION 145f91aba FUN_145f91aba body=205 status=ok
// SIG undefined FUN_145f91aba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f91aba(void)

{
  if ((DAT_14ca0130f & 2) == 0) {
    DAT_14ca0130f = DAT_14ca0130f | 2;
    _DAT_14ca012b0 = L"FClearLightSampleTracesCS";
    _DAT_14ca012c8 = FUN_146826540;
    _DAT_14ca012d0 = FUN_146825d77;
    _DAT_14ca012d8 = FUN_146825fd6;
    _DAT_14ca012e0 = FUN_1407e02ea;
    _DAT_14ca012e8 = FUN_146826273;
    _DAT_14ca012c0 = FUN_147220e6c;
    _DAT_14ca01300 = 0xffffffff000000e0;
    _DAT_14ca01308 = 8;
    DAT_14ca0130c = 0;
    _DAT_14ca012f0 = &LAB_147220e96;
    FUN_145f91b88();
    FUN_1407e00cc(&DAT_14ca012a8);
    return;
  }
  return;
}



// FUNCTION 145f91b88 FUN_145f91b88 body=123 status=ok
// SIG undefined FUN_145f91b88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f91b88(void)

{
  _DAT_14ca07838 = L"BASE";
  DAT_14ca07862 = 4;
  _DAT_14ca07840 = FUN_140b35ae4();
  _DAT_14ca07848 = DAT_14ca012b8;
  _DAT_14ca07850 = &LAB_14682652b;
  DAT_14ca012b8 = &DAT_14ca07838;
  DAT_14ca0130d = DAT_14ca0130d + '\x01';
  _DAT_14ca07858 = 0x100000000;
  if (*(char *)(_DAT_14ca07840 + 100) != '\0') {
    DAT_14ca0130e = DAT_14ca0130e + '\x01';
  }
  return;
}



// FUNCTION 145f91c04 FUN_145f91c04 body=261 status=ok
// SIG undefined FUN_145f91c04(void)

void FUN_145f91c04(void)

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
              0x110) < DAT_14ca05c50) {
    FUN_144b3d300(&DAT_14ca05c50);
    if (DAT_14ca05c50 == -1) {
      FUN_145f91d0a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0xa1;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca05bd0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd300d);
      _Init_thread_footer(&DAT_14ca05c50);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f91d0a FUN_145f91d0a body=232 status=ok
// SIG undefined FUN_145f91d0a(void)

longlong * FUN_145f91d0a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_1462e7de6;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f91df8 FUN_145f91df8 body=292 status=ok
// SIG undefined FUN_145f91df8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f91df8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca39b00) {
    FUN_144b3d300(&DAT_14ca39b00);
    if (DAT_14ca39b00 == -1) {
      FUN_145f92066();
      FUN_145f91f1c();
      FUN_140db5666(&DAT_14ca39a58,0,&DAT_14ca399f0,L"FRayTracingDebugInstanceOverlapPS",
                    L"/Engine/Private/RayTracing/RayTracingDebugInstanceOverlap.usf",
                    L"InstanceOverlapMainPS",3,1,FUN_1472b216e,FUN_1472b210e,&LAB_146300dec,
                    &LAB_1472b210a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca3ec98);
      _DAT_14ca39a58 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f65bc4);
      _Init_thread_footer(&DAT_14ca39b00);
    }
  }
  return &DAT_14ca39a58;
}



// FUNCTION 145f91f1c FUN_145f91f1c body=205 status=ok
// SIG undefined FUN_145f91f1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f91f1c(void)

{
  if ((DAT_14ca39a57 & 2) == 0) {
    DAT_14ca39a57 = DAT_14ca39a57 | 2;
    _DAT_14ca399f8 = L"FRayTracingDebugInstanceOverlapPS";
    _DAT_14ca39a10 = FUN_146826540;
    _DAT_14ca39a18 = FUN_146825d77;
    _DAT_14ca39a20 = FUN_146825fd6;
    _DAT_14ca39a28 = FUN_1407e02ea;
    _DAT_14ca39a30 = FUN_146826273;
    _DAT_14ca39a08 = FUN_1472b20dc;
    _DAT_14ca39a48 = 0xffffffff000000e0;
    _DAT_14ca39a50 = 8;
    DAT_14ca39a54 = 0;
    _DAT_14ca39a38 = &LAB_1472b2106;
    FUN_145f91fea();
    FUN_1407e00cc(&DAT_14ca399f0);
    return;
  }
  return;
}



// FUNCTION 145f91fea FUN_145f91fea body=123 status=ok
// SIG undefined FUN_145f91fea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f91fea(void)

{
  _DAT_14ca3f6b0 = L"BASE";
  DAT_14ca3f6da = 4;
  _DAT_14ca3f6b8 = FUN_140b35ae4();
  _DAT_14ca3f6c0 = DAT_14ca39a00;
  _DAT_14ca3f6c8 = &LAB_14682652b;
  DAT_14ca39a00 = &DAT_14ca3f6b0;
  DAT_14ca39a55 = DAT_14ca39a55 + '\x01';
  _DAT_14ca3f6d0 = 0x100000000;
  if (*(char *)(_DAT_14ca3f6b8 + 100) != '\0') {
    DAT_14ca39a56 = DAT_14ca39a56 + '\x01';
  }
  return;
}



// FUNCTION 145f92066 FUN_145f92066 body=261 status=ok
// SIG undefined FUN_145f92066(void)

void FUN_145f92066(void)

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
              0x110) < DAT_14ca3ed18) {
    FUN_144b3d300(&DAT_14ca3ed18);
    if (DAT_14ca3ed18 == -1) {
      FUN_145f9216c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x1c1;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca3ec98,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f6f726);
      _Init_thread_footer(&DAT_14ca3ed18);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9216c FUN_145f9216c body=232 status=ok
// SIG undefined FUN_145f9216c(void)

longlong * FUN_145f9216c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_146301bf6;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f9225a FUN_145f9225a body=292 status=ok
// SIG undefined FUN_145f9225a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f9225a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca40ce8) {
    FUN_144b3d300(&DAT_14ca40ce8);
    if (DAT_14ca40ce8 == -1) {
      FUN_145f924c8();
      FUN_145f9237e();
      FUN_140db5666(&DAT_14ca40c40,0,&DAT_14ca40bd8,L"FOcclusionCS",
                    L"/Engine/Private/RayTracing/RayTracingOcclusionRGS.usf",L"OcclusionCS",5,0x60,
                    FUN_1472c4274,FUN_1472c4214,&LAB_142f7cb6e,&LAB_1472c4210,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca43660);
      _DAT_14ca40c40 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f7cbb4);
      _Init_thread_footer(&DAT_14ca40ce8);
    }
  }
  return &DAT_14ca40c40;
}



// FUNCTION 145f9237e FUN_145f9237e body=205 status=ok
// SIG undefined FUN_145f9237e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f9237e(void)

{
  if ((DAT_14ca40c3f & 2) == 0) {
    DAT_14ca40c3f = DAT_14ca40c3f | 2;
    _DAT_14ca40be0 = L"FOcclusionCS";
    _DAT_14ca40bf8 = FUN_146826540;
    _DAT_14ca40c00 = FUN_146825d77;
    _DAT_14ca40c08 = FUN_146825fd6;
    _DAT_14ca40c10 = FUN_1407e02ea;
    _DAT_14ca40c18 = FUN_146826273;
    _DAT_14ca40bf0 = FUN_1472c41e2;
    _DAT_14ca40c30 = 0xffffffff000000e0;
    _DAT_14ca40c38 = 8;
    DAT_14ca40c3c = 0;
    _DAT_14ca40c20 = &LAB_1472c420c;
    FUN_145f9244c();
    FUN_1407e00cc(&DAT_14ca40bd8);
    return;
  }
  return;
}



// FUNCTION 145f9244c FUN_145f9244c body=123 status=ok
// SIG undefined FUN_145f9244c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f9244c(void)

{
  _DAT_14ca44588 = L"BASE";
  DAT_14ca445b2 = 4;
  _DAT_14ca44590 = FUN_140b35ae4();
  _DAT_14ca44598 = DAT_14ca40be8;
  _DAT_14ca445a0 = &LAB_14682652b;
  DAT_14ca40be8 = &DAT_14ca44588;
  DAT_14ca40c3d = DAT_14ca40c3d + '\x01';
  _DAT_14ca445a8 = 0x100000000;
  if (*(char *)(_DAT_14ca44590 + 100) != '\0') {
    DAT_14ca40c3e = DAT_14ca40c3e + '\x01';
  }
  return;
}



// FUNCTION 145f924c8 FUN_145f924c8 body=261 status=ok
// SIG undefined FUN_145f924c8(void)

void FUN_145f924c8(void)

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
              0x110) < DAT_14ca436e0) {
    FUN_144b3d300(&DAT_14ca436e0);
    if (DAT_14ca436e0 == -1) {
      FUN_145f925ce(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x230;
      local_58 = 0x121;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca43660,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142faf9f8);
      _Init_thread_footer(&DAT_14ca436e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f925ce FUN_145f925ce body=232 status=ok
// SIG undefined FUN_145f925ce(void)

longlong * FUN_145f925ce(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_1463034fe;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f926bc FUN_145f926bc body=292 status=ok
// SIG undefined FUN_145f926bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f926bc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca45f98) {
    FUN_144b3d300(&DAT_14ca45f98);
    if (DAT_14ca45f98 == -1) {
      FUN_145f9292a();
      FUN_145f927e0();
      FUN_140db5666(&DAT_14ca45ef0,0,&DAT_14ca45e88,L"FOcclusionFeedbackPS",
                    L"/Engine/Private/OcclusionFeedbackShaders.usf",L"MainPS",3,2,FUN_1472daec0,
                    FUN_1472dae60,&LAB_1472dae48,&LAB_1472dae44,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca46fe8);
      _DAT_14ca45ef0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142fe08f2);
      _Init_thread_footer(&DAT_14ca45f98);
    }
  }
  return &DAT_14ca45ef0;
}



// FUNCTION 145f927e0 FUN_145f927e0 body=205 status=ok
// SIG undefined FUN_145f927e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f927e0(void)

{
  if ((DAT_14ca45eef & 2) == 0) {
    DAT_14ca45eef = DAT_14ca45eef | 2;
    _DAT_14ca45e90 = L"FOcclusionFeedbackPS";
    _DAT_14ca45ea8 = FUN_146826540;
    _DAT_14ca45eb0 = FUN_146825d77;
    _DAT_14ca45eb8 = FUN_146825fd6;
    _DAT_14ca45ec0 = FUN_1407e02ea;
    _DAT_14ca45ec8 = FUN_146826273;
    _DAT_14ca45ea0 = FUN_1472dae16;
    _DAT_14ca45ee0 = 0xffffffff000000e0;
    _DAT_14ca45ee8 = 8;
    DAT_14ca45eec = 0;
    _DAT_14ca45ed0 = &LAB_1472dae40;
    FUN_145f928ae();
    FUN_1407e00cc(&DAT_14ca45e88);
    return;
  }
  return;
}



// FUNCTION 145f928ae FUN_145f928ae body=123 status=ok
// SIG undefined FUN_145f928ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f928ae(void)

{
  _DAT_14ca47320 = L"BASE";
  DAT_14ca4734a = 4;
  _DAT_14ca47328 = FUN_140b35ae4();
  _DAT_14ca47330 = DAT_14ca45e98;
  _DAT_14ca47338 = &LAB_14682652b;
  DAT_14ca45e98 = &DAT_14ca47320;
  DAT_14ca45eed = DAT_14ca45eed + '\x01';
  _DAT_14ca47340 = 0x100000000;
  if (*(char *)(_DAT_14ca47328 + 100) != '\0') {
    DAT_14ca45eee = DAT_14ca45eee + '\x01';
  }
  return;
}



// FUNCTION 145f9292a FUN_145f9292a body=261 status=ok
// SIG undefined FUN_145f9292a(void)

void FUN_145f9292a(void)

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
              0x110) < DAT_14ca47068) {
    FUN_144b3d300(&DAT_14ca47068);
    if (DAT_14ca47068 == -1) {
      FUN_145f92a30(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x733;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca46fe8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fea768);
      _Init_thread_footer(&DAT_14ca47068);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f92a30 FUN_145f92a30 body=232 status=ok
// SIG undefined FUN_145f92a30(void)

longlong * FUN_145f92a30(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_146306388;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f92b1e FUN_145f92b1e body=292 status=ok
// SIG undefined FUN_145f92b1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f92b1e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4d698) {
    FUN_144b3d300(&DAT_14ca4d698);
    if (DAT_14ca4d698 == -1) {
      FUN_145f92d8c();
      FUN_145f92c42();
      FUN_140db5666(&DAT_14ca4d5f0,0,&DAT_14ca4d588,L"FShaderPrintClearCounterCS",
                    L"/Engine/Private/ShaderPrintDraw.usf",L"ClearCounterCS",5,1,FUN_1472eaaca,
                    FUN_1472eaa6a,&LAB_1472eaa40,&LAB_1472eaa3c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca55e30);
      _DAT_14ca4d5f0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14303e986);
      _Init_thread_footer(&DAT_14ca4d698);
    }
  }
  return &DAT_14ca4d5f0;
}



// FUNCTION 145f92c42 FUN_145f92c42 body=205 status=ok
// SIG undefined FUN_145f92c42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f92c42(void)

{
  if ((DAT_14ca4d5ef & 2) == 0) {
    DAT_14ca4d5ef = DAT_14ca4d5ef | 2;
    _DAT_14ca4d590 = L"FShaderPrintClearCounterCS";
    _DAT_14ca4d5a8 = FUN_146826540;
    _DAT_14ca4d5b0 = FUN_146825d77;
    _DAT_14ca4d5b8 = FUN_146825fd6;
    _DAT_14ca4d5c0 = FUN_1407e02ea;
    _DAT_14ca4d5c8 = FUN_146826273;
    _DAT_14ca4d5a0 = FUN_1472eaa0c;
    _DAT_14ca4d5e0 = 0xffffffff000000e0;
    _DAT_14ca4d5e8 = 8;
    DAT_14ca4d5ec = 0;
    _DAT_14ca4d5d0 = &LAB_1472eaa38;
    FUN_145f92d10();
    FUN_1407e00cc(&DAT_14ca4d588);
    return;
  }
  return;
}



// FUNCTION 145f92d10 FUN_145f92d10 body=123 status=ok
// SIG undefined FUN_145f92d10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f92d10(void)

{
  _DAT_14ca56918 = L"BASE";
  DAT_14ca56942 = 4;
  _DAT_14ca56920 = FUN_140b35ae4();
  _DAT_14ca56928 = DAT_14ca4d598;
  _DAT_14ca56930 = &LAB_14682652b;
  DAT_14ca4d598 = &DAT_14ca56918;
  DAT_14ca4d5ed = DAT_14ca4d5ed + '\x01';
  _DAT_14ca56938 = 0x100000000;
  if (*(char *)(_DAT_14ca56920 + 100) != '\0') {
    DAT_14ca4d5ee = DAT_14ca4d5ee + '\x01';
  }
  return;
}



// FUNCTION 145f92d8c FUN_145f92d8c body=261 status=ok
// SIG undefined FUN_145f92d8c(void)

void FUN_145f92d8c(void)

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
              0x110) < DAT_14ca55eb0) {
    FUN_144b3d300(&DAT_14ca55eb0);
    if (DAT_14ca55eb0 == -1) {
      FUN_145f92e92(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x1b8;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca55e30,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14305d7bd);
      _Init_thread_footer(&DAT_14ca55eb0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f92e92 FUN_145f92e92 body=232 status=ok
// SIG undefined FUN_145f92e92(void)

longlong * FUN_145f92e92(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_146307a18;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f92f80 FUN_145f92f80 body=292 status=ok
// SIG undefined FUN_145f92f80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f92f80(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca54600) {
    FUN_144b3d300(&DAT_14ca54600);
    if (DAT_14ca54600 == -1) {
      FUN_145f931ee();
      FUN_145f930a4();
      FUN_140db5666(&DAT_14ca54558,0,&DAT_14ca544f0,L"FWholeSceneDirectionalShadowStencilVS",
                    L"/Engine/Private/ShadowProjectionVertexShader.usf",
                    L"WholeSceneDirectionalShadowStencilVS",0,1,FUN_1472f44ea,FUN_1472f448a,
                    &LAB_1472f4486,&LAB_1472f4482,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca56740)
      ;
      _DAT_14ca54558 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14304a7cf);
      _Init_thread_footer(&DAT_14ca54600);
    }
  }
  return &DAT_14ca54558;
}



// FUNCTION 145f930a4 FUN_145f930a4 body=205 status=ok
// SIG undefined FUN_145f930a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f930a4(void)

{
  if ((DAT_14ca54557 & 2) == 0) {
    DAT_14ca54557 = DAT_14ca54557 | 2;
    _DAT_14ca544f8 = L"FWholeSceneDirectionalShadowStencilVS";
    _DAT_14ca54510 = FUN_146826540;
    _DAT_14ca54518 = FUN_146825d77;
    _DAT_14ca54520 = FUN_146825fd6;
    _DAT_14ca54528 = FUN_1407e02ea;
    _DAT_14ca54530 = FUN_146826273;
    _DAT_14ca54508 = FUN_1472f4452;
    _DAT_14ca54548 = 0xffffffff000000e0;
    _DAT_14ca54550 = 8;
    DAT_14ca54554 = 0;
    _DAT_14ca54538 = &LAB_1472f447e;
    FUN_145f93172();
    FUN_1407e00cc(&DAT_14ca544f0);
    return;
  }
  return;
}



// FUNCTION 145f93172 FUN_145f93172 body=123 status=ok
// SIG undefined FUN_145f93172(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f93172(void)

{
  _DAT_14ca5aed0 = L"BASE";
  DAT_14ca5aefa = 4;
  _DAT_14ca5aed8 = FUN_140b35ae4();
  _DAT_14ca5aee0 = DAT_14ca54500;
  _DAT_14ca5aee8 = &LAB_14682652b;
  DAT_14ca54500 = &DAT_14ca5aed0;
  DAT_14ca54555 = DAT_14ca54555 + '\x01';
  _DAT_14ca5aef0 = 0x100000000;
  if (*(char *)(_DAT_14ca5aed8 + 100) != '\0') {
    DAT_14ca54556 = DAT_14ca54556 + '\x01';
  }
  return;
}



// FUNCTION 145f931ee FUN_145f931ee body=261 status=ok
// SIG undefined FUN_145f931ee(void)

void FUN_145f931ee(void)

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
              0x110) < DAT_14ca567c0) {
    FUN_144b3d300(&DAT_14ca567c0);
    if (DAT_14ca567c0 == -1) {
      FUN_145f932f4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x393;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca56740,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143061ce9);
      _Init_thread_footer(&DAT_14ca567c0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f932f4 FUN_145f932f4 body=232 status=ok
// SIG undefined FUN_145f932f4(void)

longlong * FUN_145f932f4(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_146308aca;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f933e2 FUN_145f933e2 body=292 status=ok
// SIG undefined FUN_145f933e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f933e2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5d7c0) {
    FUN_144b3d300(&DAT_14ca5d7c0);
    if (DAT_14ca5d7c0 == -1) {
      FUN_145f93650();
      FUN_145f93506();
      FUN_140db5666(&DAT_14ca5d718,0,&DAT_14ca5d6b0,L"FVisualizeSparseVolumeTextureVS",
                    L"/Engine/Private/SparseVolumeTexture/VisualizeSparseVolumeTexture.usf",
                    L"VisualizeSparseVolumeTextureVS",0,1,FUN_147316e2c,FUN_147316dcc,&LAB_147316db0
                    ,&LAB_147316dac,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca5f0d8);
      _DAT_14ca5d718 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430970ad);
      _Init_thread_footer(&DAT_14ca5d7c0);
    }
  }
  return &DAT_14ca5d718;
}



// FUNCTION 145f93506 FUN_145f93506 body=205 status=ok
// SIG undefined FUN_145f93506(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f93506(void)

{
  if ((DAT_14ca5d717 & 2) == 0) {
    DAT_14ca5d717 = DAT_14ca5d717 | 2;
    _DAT_14ca5d6b8 = L"FVisualizeSparseVolumeTextureVS";
    _DAT_14ca5d6d0 = FUN_146826540;
    _DAT_14ca5d6d8 = FUN_146825d77;
    _DAT_14ca5d6e0 = FUN_146825fd6;
    _DAT_14ca5d6e8 = FUN_1407e02ea;
    _DAT_14ca5d6f0 = FUN_146826273;
    _DAT_14ca5d6c8 = FUN_147316d7e;
    _DAT_14ca5d708 = 0xffffffff000000e0;
    _DAT_14ca5d710 = 8;
    DAT_14ca5d714 = 0;
    _DAT_14ca5d6f8 = &LAB_147316da8;
    FUN_145f935d4();
    FUN_1407e00cc(&DAT_14ca5d6b0);
    return;
  }
  return;
}



// FUNCTION 145f935d4 FUN_145f935d4 body=123 status=ok
// SIG undefined FUN_145f935d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f935d4(void)

{
  _DAT_14ca5fb28 = L"BASE";
  DAT_14ca5fb52 = 4;
  _DAT_14ca5fb30 = FUN_140b35ae4();
  _DAT_14ca5fb38 = DAT_14ca5d6c0;
  _DAT_14ca5fb40 = &LAB_14682652b;
  DAT_14ca5d6c0 = &DAT_14ca5fb28;
  DAT_14ca5d715 = DAT_14ca5d715 + '\x01';
  _DAT_14ca5fb48 = 0x100000000;
  if (*(char *)(_DAT_14ca5fb30 + 100) != '\0') {
    DAT_14ca5d716 = DAT_14ca5d716 + '\x01';
  }
  return;
}



// FUNCTION 145f93650 FUN_145f93650 body=261 status=ok
// SIG undefined FUN_145f93650(void)

void FUN_145f93650(void)

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
              0x110) < DAT_14ca5f158) {
    FUN_144b3d300(&DAT_14ca5f158);
    if (DAT_14ca5f158 == -1) {
      FUN_145f93756(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x1c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5f0d8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14309e863);
      _Init_thread_footer(&DAT_14ca5f158);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f93756 FUN_145f93756 body=232 status=ok
// SIG undefined FUN_145f93756(void)

longlong * FUN_145f93756(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_14630c920;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f93844 FUN_145f93844 body=292 status=ok
// SIG undefined FUN_145f93844(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f93844(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caad7b0) {
    FUN_144b3d300(&DAT_14caad7b0);
    if (DAT_14caad7b0 == -1) {
      FUN_145f93ab2();
      FUN_145f93968();
      FUN_140db5666(&DAT_14caad708,0,&DAT_14caad6a0,L"FSlateMaskingVS",
                    L"/Engine/Private/SlateMaskingShader.usf",L"MainVS",0,1,FUN_14750f0f2,
                    FUN_14750f092,&LAB_14750f08e,&LAB_14750f08a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cab0660);
      _DAT_14caad708 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c5fa7);
      _Init_thread_footer(&DAT_14caad7b0);
    }
  }
  return &DAT_14caad708;
}



// FUNCTION 145f93968 FUN_145f93968 body=205 status=ok
// SIG undefined FUN_145f93968(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f93968(void)

{
  if ((DAT_14caad707 & 2) == 0) {
    DAT_14caad707 = DAT_14caad707 | 2;
    _DAT_14caad6a8 = L"FSlateMaskingVS";
    _DAT_14caad6c0 = FUN_146826540;
    _DAT_14caad6c8 = FUN_146825d77;
    _DAT_14caad6d0 = FUN_146825fd6;
    _DAT_14caad6d8 = FUN_1407e02ea;
    _DAT_14caad6e0 = FUN_146826273;
    _DAT_14caad6b8 = FUN_14750f05c;
    _DAT_14caad6f8 = 0xffffffff000000e0;
    _DAT_14caad700 = 8;
    DAT_14caad704 = 0;
    _DAT_14caad6e8 = &LAB_14750f086;
    FUN_145f93a36();
    FUN_1407e00cc(&DAT_14caad6a0);
    return;
  }
  return;
}



// FUNCTION 145f93a36 FUN_145f93a36 body=123 status=ok
// SIG undefined FUN_145f93a36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f93a36(void)

{
  _DAT_14cab0f30 = L"BASE";
  DAT_14cab0f5a = 4;
  _DAT_14cab0f38 = FUN_140b35ae4();
  _DAT_14cab0f40 = DAT_14caad6b0;
  _DAT_14cab0f48 = &LAB_14682652b;
  DAT_14caad6b0 = &DAT_14cab0f30;
  DAT_14caad705 = DAT_14caad705 + '\x01';
  _DAT_14cab0f50 = 0x100000000;
  if (*(char *)(_DAT_14cab0f38 + 100) != '\0') {
    DAT_14caad706 = DAT_14caad706 + '\x01';
  }
  return;
}



// FUNCTION 145f93ab2 FUN_145f93ab2 body=261 status=ok
// SIG undefined FUN_145f93ab2(void)

void FUN_145f93ab2(void)

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
              0x110) < DAT_14cab06e0) {
    FUN_144b3d300(&DAT_14cab06e0);
    if (DAT_14cab06e0 == -1) {
      FUN_145f93bb8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x121;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cab0660,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1432c72ee);
      _Init_thread_footer(&DAT_14cab06e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f93bb8 FUN_145f93bb8 body=232 status=ok
// SIG undefined FUN_145f93bb8(void)

longlong * FUN_145f93bb8(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_1463375ec;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f93ca6 FUN_145f93ca6 body=80 status=ok
// SIG undefined FUN_145f93ca6(void)

void FUN_145f93ca6(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_145f93cf8(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f93cf8 FUN_145f93cf8 body=150 status=ok
// SIG undefined FUN_145f93cf8(void)

void FUN_145f93cf8(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_20;
  uint local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  uVar3 = (ulonglong)((uint *)*param_3)[1];
  local_20 = 0;
  local_18 = 0;
  if ((uVar3 != 0xffffffff) &&
     (puVar4 = (undefined8 *)(uVar3 + lVar1), local_18 = 0, puVar4 != (undefined8 *)0x0)) {
    local_20 = *puVar4;
    local_18 = (uint)*(byte *)((longlong)puVar4 + 0x1c);
  }
  uVar3 = (ulonglong)*(uint *)*param_3;
  lVar2 = 0;
  if (uVar3 != 0xffffffff) {
    lVar2 = *(longlong *)(lVar1 + 0x20) + uVar3;
  }
  local_38 = (undefined4)*param_2;
  uStack_34 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_30 = (undefined4)param_2[1];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_145f93d90(local_38,&local_38,lVar2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f93d90 FUN_145f93d90 body=507 status=ok
// SIG undefined FUN_145f93d90(void)

void FUN_145f93d90(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined2 local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = param_3;
  local_c0 = param_4;
  if (0 < *(int *)(param_1 + 2)) {
    lVar9 = (longlong)(int)param_2[1] * 0x28 + *(longlong *)(*param_2 + 8);
    lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
    lVar8 = 0;
    do {
      uVar2 = *(uint *)(param_1 + 4);
      uVar1 = *(ushort *)(param_1[1] + lVar8 * 4);
      FUN_145f9403c(*param_1,&local_70,uVar1);
      if ((((((uVar2 >> ((uint)lVar8 & 0x1f) & 1) != 0) && (uVar1 != 0xffff)) &&
           ((int)(uint)uVar1 < *(int *)(lVar9 + 0x20))) &&
          ((*(uint *)(lVar9 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0)) &&
         (((CONCAT44(uStack_6c,local_70) != 0 || (CONCAT44(uStack_64,uStack_68) != 0)) ||
          ((CONCAT44(uStack_5c,local_60) != 0 ||
           ((CONCAT44(uStack_54,uStack_58) != 0 || (local_50 != 0)))))))) {
        if (*(ushort *)(lVar4 + 0xc) != 0) {
          puVar10 = *(undefined8 **)(lVar4 + 0x28);
          lVar6 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
          do {
            if (*(ushort *)((longlong)puVar10 + 0x1e) == uVar1) goto LAB_145f93ea0;
            puVar10 = puVar10 + 4;
            lVar6 = lVar6 + -0x20;
          } while (lVar6 != 0);
        }
        puVar10 = (undefined8 *)0x0;
LAB_145f93ea0:
        uVar5 = param_1[3];
        iVar3 = *(int *)(lVar4 + 0x14);
        if (iVar3 == 1) {
          AcquireSRWLockExclusive((PSRWLOCK)(puVar10 + 1));
        }
        LOCK();
        *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
        UNLOCK();
        local_d0 = *(undefined2 *)(param_1[1] + 2 + lVar8 * 4);
        local_88 = *local_c0;
        uStack_80 = local_c0[1];
        local_98 = local_50;
        local_a8 = local_60;
        uStack_a4 = uStack_5c;
        uStack_a0 = uStack_58;
        uStack_9c = uStack_54;
        local_b8 = local_70;
        uStack_b4 = uStack_6c;
        uStack_b0 = uStack_68;
        uStack_ac = uStack_64;
        local_d8 = &local_88;
        FUN_145f93f8c(lVar4,&local_b8,local_c8,*puVar10);
        if (puVar10 != (undefined8 *)0x0) {
          uVar7 = puVar10[2];
          if ((ulonglong)puVar10[2] < uVar5) {
            uVar7 = uVar5;
          }
          puVar10[2] = uVar7;
          LOCK();
          *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + -1;
          UNLOCK();
          if (iVar3 == 1) {
            ReleaseSRWLockExclusive((PSRWLOCK)(puVar10 + 1));
          }
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 2));
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145f93f8c FUN_145f93f8c body=176 status=ok
// SIG undefined FUN_145f93f8c(void)

void FUN_145f93f8c(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong *param_5,ushort param_6)

{
  ulonglong uVar1;
  
  if (*param_5 == 0) {
    if (*(short *)(param_1 + 0xe) != 0) {
      uVar1 = 0;
      do {
        FUN_1476629dc(param_2,*(undefined2 *)(param_3 + 2 + uVar1 * 4),param_4);
        uVar1 = uVar1 + 1;
        param_4 = param_4 + 8;
      } while (uVar1 < *(ushort *)(param_1 + 0xe));
    }
  }
  else if (*(short *)(param_1 + 0xe) != 0) {
    uVar1 = 0;
    do {
      FUN_145f942b0(param_2,*(undefined2 *)(param_3 + 2 + uVar1 * 4),
                    *(undefined8 *)
                     ((ulonglong)param_6 +
                     (longlong)(int)uVar1 * (longlong)(int)param_5[1] + *param_5),param_4);
      uVar1 = uVar1 + 1;
      param_4 = param_4 + 8;
    } while (uVar1 < *(ushort *)(param_1 + 0xe));
  }
  return;
}



// FUNCTION 145f9403c FUN_145f9403c body=628 status=ok
// SIG undefined FUN_145f9403c(void)

void FUN_145f9403c(longlong *param_1,undefined8 *param_2,ushort param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  uVar2 = *(uint *)(param_1 + 1);
  lVar3 = *param_1;
  uVar6 = 0;
  uVar7 = uVar2;
  if (0 < (int)uVar2) {
    do {
      uVar1 = (uVar7 >> 1) + uVar6;
      if (*(ushort *)(lVar3 + (ulonglong)uVar1 * 0x18) < param_3) {
        uVar6 = uVar1 + (uVar7 & 1);
      }
      bVar4 = 1 < uVar7;
      uVar7 = uVar7 >> 1;
    } while (bVar4);
  }
  if ((((int)uVar6 < (int)uVar2) && (*(ushort *)(lVar3 + (ulonglong)uVar6 * 0x18) <= param_3)) &&
     (puVar5 = (undefined8 *)(lVar3 + (ulonglong)uVar6 * 0x18 + 8), puVar5 != (undefined8 *)0x0)) {
    *param_2 = *puVar5;
  }
  uVar2 = *(uint *)(param_1 + 3);
  lVar3 = param_1[2];
  uVar7 = 0;
  if (0 < (int)uVar2) {
    uVar7 = 0;
    uVar6 = uVar2;
    do {
      uVar1 = (uVar6 >> 1) + uVar7;
      if (*(ushort *)(lVar3 + (ulonglong)uVar1 * 0x18) < param_3) {
        uVar7 = uVar1 + (uVar6 & 1);
      }
      bVar4 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar4);
  }
  if ((((int)uVar7 < (int)uVar2) && (*(ushort *)(lVar3 + (ulonglong)uVar7 * 0x18) <= param_3)) &&
     (puVar5 = (undefined8 *)(lVar3 + (ulonglong)uVar7 * 0x18 + 8), puVar5 != (undefined8 *)0x0)) {
    param_2[1] = *puVar5;
  }
  uVar2 = *(uint *)(param_1 + 5);
  lVar3 = param_1[4];
  uVar7 = 0;
  if (0 < (int)uVar2) {
    uVar7 = 0;
    uVar6 = uVar2;
    do {
      uVar1 = (uVar6 >> 1) + uVar7;
      if (*(ushort *)(lVar3 + (ulonglong)uVar1 * 0x18) < param_3) {
        uVar7 = uVar1 + (uVar6 & 1);
      }
      bVar4 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar4);
  }
  if ((((int)uVar7 < (int)uVar2) && (*(ushort *)(lVar3 + (ulonglong)uVar7 * 0x18) <= param_3)) &&
     (puVar5 = (undefined8 *)(lVar3 + (ulonglong)uVar7 * 0x18 + 8), puVar5 != (undefined8 *)0x0)) {
    param_2[2] = *puVar5;
  }
  uVar2 = *(uint *)(param_1 + 7);
  lVar3 = param_1[6];
  uVar7 = 0;
  if (0 < (int)uVar2) {
    uVar7 = 0;
    uVar6 = uVar2;
    do {
      uVar1 = (uVar6 >> 1) + uVar7;
      if (*(ushort *)(lVar3 + (ulonglong)uVar1 * 0x20) < param_3) {
        uVar7 = uVar1 + (uVar6 & 1);
      }
      bVar4 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar4);
  }
  if ((((int)uVar7 < (int)uVar2) && (*(ushort *)(lVar3 + (ulonglong)uVar7 * 0x20) <= param_3)) &&
     (puVar5 = (undefined8 *)(lVar3 + (ulonglong)uVar7 * 0x20 + 8), puVar5 != (undefined8 *)0x0)) {
    param_2[3] = *puVar5;
  }
  uVar2 = *(uint *)(param_1 + 9);
  lVar3 = param_1[8];
  uVar7 = 0;
  if (0 < (int)uVar2) {
    uVar7 = 0;
    uVar6 = uVar2;
    do {
      uVar1 = (uVar6 >> 1) + uVar7;
      if (*(ushort *)(lVar3 + (ulonglong)uVar1 * 0x18) < param_3) {
        uVar7 = uVar1 + (uVar6 & 1);
      }
      bVar4 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar4);
  }
  if ((((int)uVar7 < (int)uVar2) && (*(ushort *)(lVar3 + (ulonglong)uVar7 * 0x18) <= param_3)) &&
     (puVar5 = (undefined8 *)(lVar3 + (ulonglong)uVar7 * 0x18 + 8), puVar5 != (undefined8 *)0x0)) {
    param_2[4] = *puVar5;
  }
  return;
}



// FUNCTION 145f942b0 FUN_145f942b0 body=585 status=ok
// SIG undefined FUN_145f942b0(void)

void FUN_145f942b0(longlong *param_1,uint param_2,double param_3,double *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  int local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *param_1;
  fVar14 = 0.0;
  uVar12 = 0;
  uVar13 = 0;
  param_2 = param_2 & 0xffff;
  uVar7 = 0;
  uVar8 = 0;
  fVar11 = 0.0;
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + (ulonglong)(param_2 << 4));
    uVar7 = (undefined4)uVar1;
    uVar8 = (undefined4)((ulonglong)uVar1 >> 0x20);
    fVar11 = *(float *)(lVar2 + 8 + (ulonglong)(param_2 << 4));
  }
  dVar3 = (double)CONCAT44(uVar8,uVar7);
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + (ulonglong)(param_2 << 4));
    uVar12 = (undefined4)uVar1;
    uVar13 = (undefined4)((ulonglong)uVar1 >> 0x20);
    fVar14 = *(float *)(lVar2 + 8 + (ulonglong)(param_2 << 4));
  }
  lVar2 = param_1[2];
  dVar6 = 0.0;
  fVar15 = 0.0;
  fVar16 = 0.0;
  uVar9 = 0;
  uVar10 = 0;
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + (ulonglong)(param_2 << 4));
    uVar9 = (undefined4)uVar1;
    uVar10 = (undefined4)((ulonglong)uVar1 >> 0x20);
    fVar16 = *(float *)(lVar2 + 8 + (ulonglong)(param_2 << 4));
  }
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    dVar6 = *(double *)(lVar2 + (ulonglong)(param_2 << 4));
    fVar15 = *(float *)(lVar2 + 8 + (ulonglong)(param_2 << 4));
  }
  dVar4 = (double)CONCAT44(uVar10,uVar9) + dVar6;
  FUN_145f944fa(dVar6,&local_a0);
  fVar5 = fVar11 + fVar14;
  if ((fVar5 != 0.0) || (NAN(fVar5))) {
    dVar6 = (double)fVar14 * param_3 + (double)CONCAT44(uVar13,uVar12);
    if ((fVar14 == 0.0) && (!NAN(fVar14))) {
      dVar6 = (double)CONCAT44(uVar13,uVar12);
    }
    if (0.0 < fVar11 && fVar11 < 1.0) {
      dVar3 = (double)CONCAT44(uVar8,uVar7) + param_3 * (double)(1.0 - fVar11);
      fVar5 = fVar5 + (1.0 - fVar11);
    }
    param_3 = (dVar3 + dVar6) / (double)fVar5 + dVar4;
  }
  else if ((fVar16 + fVar15 != 0.0) || (NAN(fVar16 + fVar15))) {
    param_3 = param_3 + dVar4;
  }
  *param_4 = param_3;
  if (0 < local_98) {
    FUN_14766295a(&local_a0,param_4);
  }
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145f944fa FUN_145f944fa body=106 status=ok
// SIG undefined FUN_145f944fa(void)

undefined8 * FUN_145f944fa(longlong param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  ulonglong uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    uVar3 = (ulonglong)((param_3 & 0xffff) << 4);
    *param_2 = 0;
    iVar1 = *(int *)(lVar2 + 8 + uVar3);
    _Src = *(void **)(lVar2 + uVar3);
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_147664dc0(param_2,iVar1);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 << 5);
    }
  }
  return param_2;
}



// FUNCTION 145f94564 FUN_145f94564 body=292 status=ok
// SIG undefined FUN_145f94564(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f94564(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf4d80) {
    FUN_144b3d300(&DAT_14caf4d80);
    if (DAT_14caf4d80 == -1) {
      FUN_145f947d2();
      FUN_145f94688();
      FUN_140db5666(&DAT_14caf4cd8,0,&DAT_14caf4c70,L"FParticleSimVisualizeVS",
                    L"/Engine/Private/ParticleSimVisualizeShader.usf",L"VertexMain",0,1,
                    FUN_147c0ffbc,FUN_147c0ff5c,&LAB_147c0ff58,&LAB_147c0ff54,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14caf5400);
      _DAT_14caf4cd8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1435d2a4c);
      _Init_thread_footer(&DAT_14caf4d80);
    }
  }
  return &DAT_14caf4cd8;
}



// FUNCTION 145f94688 FUN_145f94688 body=205 status=ok
// SIG undefined FUN_145f94688(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f94688(void)

{
  if ((DAT_14caf4cd7 & 2) == 0) {
    DAT_14caf4cd7 = DAT_14caf4cd7 | 2;
    _DAT_14caf4c78 = L"FParticleSimVisualizeVS";
    _DAT_14caf4c90 = FUN_146826540;
    _DAT_14caf4c98 = FUN_146825d77;
    _DAT_14caf4ca0 = FUN_146825fd6;
    _DAT_14caf4ca8 = FUN_1407e02ea;
    _DAT_14caf4cb0 = FUN_146826273;
    _DAT_14caf4c88 = FUN_147c0ff26;
    _DAT_14caf4cc8 = 0xffffffff000000e0;
    _DAT_14caf4cd0 = 8;
    DAT_14caf4cd4 = 0;
    _DAT_14caf4cb8 = &LAB_147c0ff50;
    FUN_145f94756();
    FUN_1407e00cc(&DAT_14caf4c70);
    return;
  }
  return;
}



// FUNCTION 145f94756 FUN_145f94756 body=123 status=ok
// SIG undefined FUN_145f94756(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f94756(void)

{
  _DAT_14caf5908 = L"BASE";
  DAT_14caf5932 = 4;
  _DAT_14caf5910 = FUN_140b35ae4();
  _DAT_14caf5918 = DAT_14caf4c80;
  _DAT_14caf5920 = &LAB_14682652b;
  DAT_14caf4c80 = &DAT_14caf5908;
  DAT_14caf4cd5 = DAT_14caf4cd5 + '\x01';
  _DAT_14caf5928 = 0x100000000;
  if (*(char *)(_DAT_14caf5910 + 100) != '\0') {
    DAT_14caf4cd6 = DAT_14caf4cd6 + '\x01';
  }
  return;
}



// FUNCTION 145f947d2 FUN_145f947d2 body=261 status=ok
// SIG undefined FUN_145f947d2(void)

void FUN_145f947d2(void)

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
              0x110) < DAT_14caf5480) {
    FUN_144b3d300(&DAT_14caf5480);
    if (DAT_14caf5480 == -1) {
      FUN_145f948d8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x7bd;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caf5400,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1435df538);
      _Init_thread_footer(&DAT_14caf5480);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f948d8 FUN_145f948d8 body=232 status=ok
// SIG undefined FUN_145f948d8(void)

longlong * FUN_145f948d8(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_145f621d8;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f949c6 FUN_145f949c6 body=292 status=ok
// SIG undefined FUN_145f949c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f949c6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfbe70) {
    FUN_144b3d300(&DAT_14cbfbe70);
    if (DAT_14cbfbe70 == -1) {
      FUN_145f94c34();
      FUN_145f94aea();
      FUN_140db5666(&DAT_14cbfbdc8,0,&DAT_14cbfbd60,L"FHairFollicleMaskPS",
                    L"/Engine/Private/HairStrands/HairStrandsFollicleMask.usf",L"MainPS",3,1,
                    FUN_14909bff8,FUN_14909bf98,&LAB_14667c924,&LAB_14909bf94,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cbfd160);
      _DAT_14cbfbdc8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144444073);
      _Init_thread_footer(&DAT_14cbfbe70);
    }
  }
  return &DAT_14cbfbdc8;
}



// FUNCTION 145f94aea FUN_145f94aea body=205 status=ok
// SIG undefined FUN_145f94aea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f94aea(void)

{
  if ((DAT_14cbfbdc7 & 2) == 0) {
    DAT_14cbfbdc7 = DAT_14cbfbdc7 | 2;
    _DAT_14cbfbd68 = L"FHairFollicleMaskPS";
    _DAT_14cbfbd80 = FUN_146826540;
    _DAT_14cbfbd88 = FUN_146825d77;
    _DAT_14cbfbd90 = FUN_146825fd6;
    _DAT_14cbfbd98 = FUN_1407e02ea;
    _DAT_14cbfbda0 = FUN_146826273;
    _DAT_14cbfbd78 = FUN_14909bf66;
    _DAT_14cbfbdb8 = 0xffffffff000000e0;
    _DAT_14cbfbdc0 = 8;
    DAT_14cbfbdc4 = 0;
    _DAT_14cbfbda8 = &LAB_14909bf90;
    FUN_145f94bb8();
    FUN_1407e00cc(&DAT_14cbfbd60);
    return;
  }
  return;
}



// FUNCTION 145f94bb8 FUN_145f94bb8 body=123 status=ok
// SIG undefined FUN_145f94bb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f94bb8(void)

{
  _DAT_14cbfd9c8 = L"BASE";
  DAT_14cbfd9f2 = 4;
  _DAT_14cbfd9d0 = FUN_140b35ae4();
  _DAT_14cbfd9d8 = DAT_14cbfbd70;
  _DAT_14cbfd9e0 = &LAB_14682652b;
  DAT_14cbfbd70 = &DAT_14cbfd9c8;
  DAT_14cbfbdc5 = DAT_14cbfbdc5 + '\x01';
  _DAT_14cbfd9e8 = 0x100000000;
  if (*(char *)(_DAT_14cbfd9d0 + 100) != '\0') {
    DAT_14cbfbdc6 = DAT_14cbfbdc6 + '\x01';
  }
  return;
}



// FUNCTION 145f94c34 FUN_145f94c34 body=261 status=ok
// SIG undefined FUN_145f94c34(void)

void FUN_145f94c34(void)

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
              0x110) < DAT_14cbfd1e0) {
    FUN_144b3d300(&DAT_14cbfd1e0);
    if (DAT_14cbfd1e0 == -1) {
      FUN_145f94d3a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x2fe;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfd160,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1444499c9);
      _Init_thread_footer(&DAT_14cbfd1e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f94d3a FUN_145f94d3a body=232 status=ok
// SIG undefined FUN_145f94d3a(void)

longlong * FUN_145f94d3a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_145d3d988;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f94e28 FUN_145f94e28 body=292 status=ok
// SIG undefined FUN_145f94e28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f94e28(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfbf98) {
    FUN_144b3d300(&DAT_14cbfbf98);
    if (DAT_14cbfbf98 == -1) {
      FUN_145f95096();
      FUN_145f94f4c();
      FUN_140db5666(&DAT_14cbfbef0,0,&DAT_14cbfbe88,L"FHairFollicleMaskVS",
                    L"/Engine/Private/HairStrands/HairStrandsFollicleMask.usf",L"MainVS",0,2,
                    FUN_14909c0be,FUN_14909c05e,&LAB_14667c932,&LAB_14909c05a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cbfd270);
      _DAT_14cbfbef0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14444407f);
      _Init_thread_footer(&DAT_14cbfbf98);
    }
  }
  return &DAT_14cbfbef0;
}



// FUNCTION 145f94f4c FUN_145f94f4c body=205 status=ok
// SIG undefined FUN_145f94f4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f94f4c(void)

{
  if ((DAT_14cbfbeef & 2) == 0) {
    DAT_14cbfbeef = DAT_14cbfbeef | 2;
    _DAT_14cbfbe90 = L"FHairFollicleMaskVS";
    _DAT_14cbfbea8 = FUN_146826540;
    _DAT_14cbfbeb0 = FUN_146825d77;
    _DAT_14cbfbeb8 = FUN_146825fd6;
    _DAT_14cbfbec0 = FUN_1407e02ea;
    _DAT_14cbfbec8 = FUN_146826273;
    _DAT_14cbfbea0 = FUN_14909c02c;
    _DAT_14cbfbee0 = 0xffffffff000000e0;
    _DAT_14cbfbee8 = 8;
    DAT_14cbfbeec = 0;
    _DAT_14cbfbed0 = &LAB_14909c056;
    FUN_145f9501a();
    FUN_1407e00cc(&DAT_14cbfbe88);
    return;
  }
  return;
}



// FUNCTION 145f9501a FUN_145f9501a body=123 status=ok
// SIG undefined FUN_145f9501a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f9501a(void)

{
  _DAT_14cbfd9f8 = L"BASE";
  DAT_14cbfda22 = 4;
  _DAT_14cbfda00 = FUN_140b35ae4();
  _DAT_14cbfda08 = DAT_14cbfbe98;
  _DAT_14cbfda10 = &LAB_14682652b;
  DAT_14cbfbe98 = &DAT_14cbfd9f8;
  DAT_14cbfbeed = DAT_14cbfbeed + '\x01';
  _DAT_14cbfda18 = 0x100000000;
  if (*(char *)(_DAT_14cbfda00 + 100) != '\0') {
    DAT_14cbfbeee = DAT_14cbfbeee + '\x01';
  }
  return;
}



// FUNCTION 145f95096 FUN_145f95096 body=261 status=ok
// SIG undefined FUN_145f95096(void)

void FUN_145f95096(void)

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
              0x110) < DAT_14cbfd2f0) {
    FUN_144b3d300(&DAT_14cbfd2f0);
    if (DAT_14cbfd2f0 == -1) {
      FUN_145f9519c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x2f4;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfd270,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1444499e1);
      _Init_thread_footer(&DAT_14cbfd2f0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f9519c FUN_145f9519c body=232 status=ok
// SIG undefined FUN_145f9519c(void)

longlong * FUN_145f9519c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_14667e140;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f9528a FUN_145f9528a body=165 status=ok
// SIG undefined FUN_145f9528a(void)

undefined8 FUN_145f9528a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = FUN_14001cc68(0x330,0x10);
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_145f95330(uVar4,param_1 + 0x28,&local_30);
  plVar3 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f95330 FUN_145f95330 body=956 status=ok
// SIG undefined FUN_145f95330(void)

undefined8 * FUN_145f95330(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_98 [40];
  code *local_70;
  undefined4 local_68;
  undefined1 local_60 [8];
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR__purecall_14aa98180;
  FUN_145f95a88(param_1 + 1);
  *param_1 = &PTR_LAB_14aa95320;
  param_1[1] = &PTR_FUN_14aa95340;
  param_1[3] = &PTR_FUN_14aa95530;
  param_1[0x19] = &PTR_FUN_14aa95560;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  memset(param_1 + 0x1f,0,0x88);
  *(undefined4 *)(param_1 + 0x30) = 0x20702;
  *(undefined1 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = 0xffffffffffffffff;
  FUN_14570e3a0(param_1 + 0x3c);
  param_1[0x43] = 0xffffffffffffffff;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  uVar7 = FUN_14001cc68(0x40,0x10);
  FUN_145f95860(uVar7);
  param_1[0x47] = uVar7;
  puVar8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar8[1] = &DAT_100000001;
  *puVar8 = &PTR_LAB_14aa99170;
  puVar8[2] = uVar7;
  param_1[0x48] = puVar8;
  param_1[0x49] = *param_3;
  lVar3 = param_3[1];
  param_1[0x4a] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined8 *)((longlong)param_1 + 0x274) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined2 *)((longlong)param_1 + 0x27c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x27e) = 0;
  if (*param_3 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(*param_3 + 0x2c0) ^ 1;
  }
  *(byte *)((longlong)param_1 + 0x27f) = bVar5;
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined1 *)((longlong)param_1 + 0x282) = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(undefined2 *)(param_1 + 0x53) = 0;
  *(undefined1 *)((longlong)param_1 + 0x29a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2ac) = 0x12;
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(undefined2 *)((longlong)param_1 + 0x30c) = 0;
  param_1[0x62] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[99] = DAT_14c967818;
  param_1[100] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x65) = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 0x10;
  *(undefined8 *)((longlong)param_1 + 0xbc) = DAT_14cb08720;
  uVar7 = FUN_14001cc68(0x28,0x10);
  local_58 = 0;
  FUN_145f957dc(uVar7,&local_58,0,0);
  param_1[0x5d] = uVar7;
  if (param_2 != (longlong *)0x0) {
    uVar6 = (**(code **)(*param_2 + 400))(param_2);
    *(undefined1 *)((longlong)param_1 + 0x27d) = uVar6;
  }
  if (DAT_14c98e618 != 0) {
    local_70 = FUN_147d257e8;
    local_68 = 0;
    FUN_145f956ee(*(longlong *)(DAT_14c98e618 + 0x20) + 0x30,local_60,param_1,&local_70);
    local_70 = (code *)&LAB_147d25866;
    local_68 = 0;
    FUN_145f956ee(*(longlong *)(DAT_14c98e618 + 0x20) + 0x48,local_60,param_1,&local_70);
    local_70 = FUN_147d2586c;
    local_68 = 0;
    FUN_145f956ee(*(longlong *)(DAT_14c98e618 + 0x20) + 0x60,local_60,param_1,&local_70);
  }
  plVar4 = (longlong *)param_3[1];
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
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f956ee FUN_145f956ee body=237 status=ok
// SIG undefined FUN_145f956ee(void)

undefined8
FUN_145f956ee(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
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
  local_40 = 3;
  *local_48 = &PTR_LAB_14aa9a7d0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14aa99190;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_14586669c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f957dc FUN_145f957dc body=131 status=ok
// SIG undefined FUN_145f957dc(void)

undefined8 *
FUN_145f957dc(undefined8 *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  *param_1 = &PTR__purecall_14a453170;
  lVar3 = *param_2;
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  FUN_144a7f8ec(param_1 + 2);
  *param_1 = &PTR_LAB_14a5aad00;
  param_1[2] = &PTR_FUN_14a5aad30;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_4;
  if (*param_2 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_2 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  return param_1;
}



// FUNCTION 145f95860 FUN_145f95860 body=181 status=ok
// SIG undefined FUN_145f95860(void)

undefined8 * FUN_145f95860(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14aa94ff0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  FUN_145db65c4(puVar1);
  *puVar1 = &PTR_FUN_14aa980b0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  param_1[5] = puVar1;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  if (DAT_14cb0e288 != 0) {
    uVar2 = FUN_145f95916();
    FUN_145f959a2(uVar2,local_38,param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f95916 FUN_145f95916 body=139 status=ok
// SIG undefined FUN_145f95916(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145f95916(longlong *param_1)

{
  if (*param_1 != 0) {
    return (undefined8 *)(*param_1 + 0x40);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0e2a8) {
    FUN_144b3d300(&DAT_14cb0e2a8);
    if (DAT_14cb0e2a8 == -1) {
      DAT_14cb0e290 = 0;
      _DAT_14cb0e298 = 0;
      _DAT_14cb0e2a0 = 2;
      atexit(FUN_1437746b4);
      _Init_thread_footer(&DAT_14cb0e2a8);
    }
  }
  return &DAT_14cb0e290;
}



// FUNCTION 145f959a2 FUN_145f959a2 body=228 status=ok
// SIG undefined FUN_145f959a2(void)

undefined8 FUN_145f959a2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_149ee9c60;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14aa98f40;
  local_38[3] = param_3;
  local_38[4] = FUN_1436e9b90;
  FUN_145951372(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f95a88 FUN_145f95a88 body=418 status=ok
// SIG undefined FUN_145f95a88(void)

undefined8 * FUN_145f95a88(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  *param_1 = &PTR_LAB_14aaddc20;
  param_1[2] = &PTR_LAB_14aadde10;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[7] = &PTR__purecall_14aadff38;
  param_1[8] = &PTR_LAB_14aadd7d0;
  param_1[9] = 0;
  param_1[10] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  FUN_1405bceb4(param_1 + 10);
  param_1[7] = &PTR_FUN_14aaddfe8;
  param_1[8] = &PTR_FUN_14aaddff0;
  param_1[10] = &PTR_FUN_14aade070;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = DAT_14cb0d284;
  uVar2 = *(uint *)(param_1 + 0x16) & 0xffffffc9;
  *(uint *)(param_1 + 0x16) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x15) = 5;
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    bVar1 = (**(code **)(*(longlong *)param_1[6] + 0x110))();
    uVar4 = (uint)bVar1;
    uVar2 = *(uint *)(param_1 + 0x16);
  }
  *(uint *)(param_1 + 0x16) = uVar2 & 0xfffffffe | uVar4;
  uVar3 = thunk_FUN_145c581c1();
  FUN_140002266(&local_40,L"Build: %s",uVar3);
  if (param_1 + 4 == &local_40) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = local_40;
    *(undefined4 *)(param_1 + 5) = local_38;
    *(undefined4 *)((longlong)param_1 + 0x2c) = local_34;
  }
  *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) & 0xf7;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f95c2c FUN_145f95c2c body=908 status=ok
// SIG undefined FUN_145f95c2c(void)

void FUN_145f95c2c(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  undefined1 local_71;
  uint local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  uint uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_70 = local_70 & 0xffffff00;
  uStack_6c = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0xf00000d0;
  local_50 = 0;
  local_48 = 0;
  uStack_44 = uStack_44 & 0xffffff00;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_71 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_71);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_71);
  }
  local_78 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_7c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  iVar1 = local_7c;
  local_80 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_84 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_d0 = CONCAT44(uStack_6c,local_70);
  local_c8 = uStack_68;
  local_c0 = local_60;
  local_b8 = local_58;
  local_b0 = 0;
  local_a8 = local_48;
  uStack_a4 = uStack_44;
  uStack_a0 = (undefined4)uStack_40;
  uStack_9c = uStack_40._4_4_;
  local_98 = (undefined4)uStack_38;
  uStack_94 = uStack_38._4_4_;
  uStack_90 = (undefined4)uStack_30;
  uStack_8c = uStack_30._4_4_;
  local_d8 = local_84 != 0;
  local_e8 = iVar1 != 0;
  local_e0 = local_80;
  FUN_1415a852e(local_28,&local_d0,local_71,local_78);
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f95fba FUN_145f95fba body=301 status=ok
// SIG undefined FUN_145f95fba(void)

longlong * FUN_145f95fba(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d0))();
  plVar3 = (longlong *)FUN_14001cc68(0x8a0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b989ff0;
  plVar5 = plVar3 + 2;
  FUN_145f961a4(plVar5,uVar2);
  local_40 = plVar5;
  local_38 = plVar3;
  FUN_145f960ea(&local_40,plVar5);
  *(longlong **)(param_1 + 0x170) = plVar5;
  plVar4 = *(longlong **)(param_1 + 0x178);
  if (plVar4 != plVar3) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0x178);
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x178) = plVar3;
    plVar3 = local_38;
    plVar5 = local_40;
  }
  plVar4 = local_38;
  *param_2 = (longlong)plVar5;
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_38 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f960ea FUN_145f960ea body=186 status=ok
// SIG undefined FUN_145f960ea(void)

void FUN_145f960ea(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x620) != 0) && (*(longlong *)(param_2 + 0x628) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x628) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x620) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x628);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x620) = param_2;
    if (*(longlong **)(param_2 + 0x628) == plVar2) goto LAB_145f96135;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x628);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x628) = plVar2;
      goto LAB_145f96135;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x628) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145f96135:
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
                    /* WARNING: Could not recover jumptable at 0x000145f961a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145f961a4 FUN_145f961a4 body=1120 status=ok
// SIG undefined FUN_145f961a4(void)

undefined8 * FUN_145f961a4(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  longlong **local_78;
  undefined1 local_70;
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14b98e6b0;
  plVar3 = (longlong *)FUN_14001cc68(0x1b8,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b990e40;
  plVar4 = plVar3 + 2;
  FUN_145f96612(plVar4,param_1);
  plVar3[2] = (longlong)&PTR_FUN_14b98d8f0;
  local_48 = plVar4;
  local_40 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_1446f470e(&local_50,L"SocialGroup",1);
    local_78 = &local_48;
    local_70 = 1;
    FUN_145f967d6(param_1,param_2,local_50,1);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_1446f470e(&local_50,L"SocialGroup",1);
    local_78 = &local_48;
    local_70 = 1;
    FUN_145f967d6(param_1,param_2,local_50,1);
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  *param_1 = &PTR_FUN_14b98e6b0;
  param_1[0xc6] = 0;
  *(undefined4 *)(param_1 + 199) = 0;
  param_1[200] = 0;
  *(undefined4 *)(param_1 + 0xc9) = 0;
  param_1[0xca] = 0;
  *(undefined4 *)(param_1 + 0xcb) = 0;
  param_1[0xcc] = 0;
  *(undefined4 *)(param_1 + 0xcd) = 0;
  param_1[0xce] = 0;
  *(undefined4 *)(param_1 + 0xcf) = 0;
  param_1[0xd0] = 0;
  *(undefined4 *)(param_1 + 0xd1) = 0;
  param_1[0xd2] = 0;
  *(undefined4 *)(param_1 + 0xd3) = 0;
  param_1[0xd4] = 0;
  *(undefined4 *)(param_1 + 0xd5) = 0;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0;
  param_1[0xd8] = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0;
  param_1[0xda] = 0;
  *(undefined4 *)(param_1 + 0xdb) = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 1;
  *(undefined4 *)(param_1 + 0xdf) = 0;
  *(undefined4 *)(param_1 + 0xe2) = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x72c) = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  *(undefined4 *)(param_1 + 0xe9) = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  *(undefined1 *)(param_1 + 0xe5) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
  param_1[0xed] = 0;
  *(undefined4 *)(param_1 + 0xee) = 0;
  param_1[0xf5] = 0;
  *(undefined4 *)(param_1 + 0xf6) = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7bc) = 0;
  param_1[0xf9] = 0;
  *(undefined4 *)(param_1 + 0xfa) = 0;
  param_1[0xff] = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x804) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x80c) = 0;
  param_1[0x103] = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  param_1[0x109] = 0;
  *(undefined4 *)(param_1 + 0x10a) = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  *(undefined8 *)((longlong)param_1 + 0x854) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x85c) = 0;
  param_1[0x10d] = 0;
  *(undefined4 *)(param_1 + 0x10e) = 0;
  param_1[0x10f] = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x884) = 0;
  plVar3 = (longlong *)FUN_14001cc68(0x380,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b990e60;
  plVar4 = plVar3 + 2;
  FUN_145f966b8(plVar4,param_1);
  local_60 = plVar4;
  local_58 = plVar3;
  FUN_1415a8750(&local_60,plVar4);
  if (plVar3 == (longlong *)0x0) {
    param_1[0xef] = 0x10;
    plVar4 = (longlong *)param_1[0xf0];
    if (plVar4 == (longlong *)0x0) goto LAB_145f9649a;
    param_1[0xf0] = 0;
LAB_145f9657a:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_145f9649a;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    param_1[0xef] = plVar4;
    plVar4 = (longlong *)param_1[0xf0];
    if (plVar3 != plVar4) {
      param_1[0xf0] = plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_145f9649a;
      goto LAB_145f9657a;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_145f9649a;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_145f9649a:
  plVar4 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_58 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  FUN_145f96606(param_1,&DAT_14cbcf488);
  FUN_145f96606(param_1,&DAT_14cbcf498);
  FUN_145f96606(param_1,&DAT_14cbcf4a8);
  FUN_145f96606(param_1,&DAT_14cbce9f0);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f96606 FUN_145f96606 body=12 status=ok
// SIG undefined FUN_145f96606(void)

void FUN_145f96606(longlong param_1)

{
  FUN_1412fabe8(param_1 + 0x3d0);
  return;
}



// FUNCTION 145f96612 FUN_145f96612 body=165 status=ok
// SIG undefined FUN_145f96612(void)

undefined8 * FUN_145f96612(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_LAB_14b4f51f0;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_14b4c3b18;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_145ad316c(param_1 + 8);
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 9999;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  return param_1;
}



// FUNCTION 145f966b8 FUN_145f966b8 body=285 status=ok
// SIG undefined FUN_145f966b8(void)

undefined8 * FUN_145f966b8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0x6000;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = &PTR_FUN_14b4c3b18;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  FUN_145ad316c(param_1 + 0x40);
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 9999;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x6c] = 0;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  return param_1;
}



// FUNCTION 145f967d6 FUN_145f967d6 body=531 status=ok
// SIG undefined FUN_145f967d6(void)

undefined8 *
FUN_145f967d6(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined8 *param_5,undefined1 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined1 local_50;
  longlong local_40 [2];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = *param_5;
  local_28 = param_5[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  local_50 = param_6;
  local_58 = &local_30;
  FUN_1415a87f2(param_1,param_2,param_3,param_4 + 0x100);
  *param_1 = &PTR_FUN_14b4f3e50;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x95) = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0;
  param_1[0xa2] = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0;
  param_1[0xaa] = 0;
  *(undefined4 *)(param_1 + 0xab) = 0;
  param_1[0xac] = 0;
  *(undefined4 *)(param_1 + 0xad) = 0;
  param_1[0xae] = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0;
  param_1[0xb0] = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0;
  param_1[0xb2] = 0;
  *(undefined4 *)(param_1 + 0xb3) = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x53c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x544) = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5d4) = 0;
  param_1[0xbc] = 0;
  *(undefined4 *)(param_1 + 0xbd) = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  *(undefined4 *)(param_1 + 0xc3) = 0x40a00000;
  FUN_140056680(local_40,L"GbxSocialParty");
  uVar4 = FUN_1413da074(local_40);
  param_1[0xbe] = uVar4;
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  plVar3 = (longlong *)param_5[1];
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f969ea FUN_145f969ea body=84 status=ok
// SIG undefined FUN_145f969ea(void)

void FUN_145f969ea(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_145f96a40(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f96a40 FUN_145f96a40 body=83 status=ok
// SIG undefined FUN_145f96a40(void)

void FUN_145f96a40(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[4]);
  FUN_140dba9e6(*param_1,param_2[0x10]);
  if (*(char *)(param_2 + 0x1f) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1e]);
  }
  FUN_140dba9e6(*param_1,param_2[0x2a]);
  return;
}



// FUNCTION 145f96a94 FUN_145f96a94 body=92 status=ok
// SIG undefined FUN_145f96a94(void)

void FUN_145f96a94(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a9ff630;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1415a8b92(param_1 + 3);
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 145f96af0 FUN_145f96af0 body=232 status=ok
// SIG undefined FUN_145f96af0(void)

void FUN_145f96af0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78 [56];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = param_1[3];
  lVar1 = param_1[2];
  for (lVar4 = lVar1; lVar4 != lVar2; lVar4 = lVar4 + 0x48) {
    plVar3 = *(longlong **)(lVar4 + 0x40);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x20))(plVar3,(longlong *)(lVar4 + 8) != plVar3);
      *(undefined8 *)(lVar4 + 0x40) = 0;
    }
  }
  param_1[3] = lVar1;
  local_40 = 0;
  FUN_145f96bda(local_78,param_2);
  FUN_145f96c2c(param_1 + 1,local_78);
  (**(code **)(*param_1 + 0x10))(*param_1,4,param_1 + 1,FUN_143f8403c);
  plVar3 = (longlong *)param_2[7];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != param_2);
    param_2[7] = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f96bda FUN_145f96bda body=81 status=ok
// SIG undefined FUN_145f96bda(void)

void FUN_145f96bda(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    if (plVar1 == param_2) {
      uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1);
      *(undefined8 *)(param_1 + 0x38) = uVar2;
      plVar1 = (longlong *)param_2[7];
      if (plVar1 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    }
    else {
      *(longlong **)(param_1 + 0x38) = plVar1;
    }
    param_2[7] = 0;
  }
  return;
}



// FUNCTION 145f96c2c FUN_145f96c2c body=168 status=ok
// SIG undefined FUN_145f96c2c(void)

void FUN_145f96c2c(int *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  int local_78 [2];
  longlong local_70 [7];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[0] = *param_1;
  local_38 = (longlong *)0x0;
  FUN_145f96bda(local_70);
  FUN_145f96cd6(param_1 + 2,local_78);
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x20))(local_38,local_38 != local_70);
  }
  *param_1 = *param_1 + 1;
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    param_2[7] = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f96cd6 FUN_145f96cd6 body=77 status=ok
// SIG undefined FUN_145f96cd6(void)

void FUN_145f96cd6(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != *(undefined4 **)(param_1 + 0x10)) {
    *puVar1 = *param_2;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    FUN_145f96bda(puVar1 + 2,param_2 + 2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x48;
    return;
  }
  FUN_148adfd9a(param_1);
  return;
}



// FUNCTION 145f96d24 FUN_145f96d24 body=102 status=ok
// SIG undefined FUN_145f96d24(void)

ulonglong FUN_145f96d24(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145f96d6d:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145f96d6d;
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
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 145f96d8a FUN_145f96d8a body=65 status=ok
// SIG undefined FUN_145f96d8a(void)

void FUN_145f96d8a(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  local_38 = 0;
  FUN_140f73374();
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f96dd4 FUN_145f96dd4 body=216 status=ok
// SIG undefined FUN_145f96dd4(void)

undefined8 * FUN_145f96dd4(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14ba54340;
  param_1[5] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 6) = 0;
  FUN_1405bceb4(param_1 + 5);
  param_1[5] = &PTR_FUN_14ba59760;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0x100;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 2;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x22] = 2;
  return param_1;
}



// FUNCTION 145f96eb4 FUN_145f96eb4 body=215 status=ok
// SIG undefined FUN_145f96eb4(void)

undefined8 * FUN_145f96eb4(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bec7ab0;
  *(undefined1 *)(param_1 + 5) = 1;
  FUN_144757f48(param_1,8);
  *param_1 = &PTR_FUN_14becb120;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_1446f470e(&local_28,L"Effector",1);
  uVar1 = FUN_145989374();
  local_38 = 1;
  local_30 = 0;
  lVar2 = FUN_14048696c(param_1,local_28,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[8] = lVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f96f8c FUN_145f96f8c body=205 status=ok
// SIG undefined FUN_145f96f8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f96f8c(void)

{
  if ((DAT_14ca8ca6f & 2) == 0) {
    DAT_14ca8ca6f = DAT_14ca8ca6f | 2;
    _DAT_14ca8ca10 = L"FClearMessageBufferCS";
    _DAT_14ca8ca28 = FUN_146826540;
    _DAT_14ca8ca30 = FUN_146825d77;
    _DAT_14ca8ca38 = FUN_146825fd6;
    _DAT_14ca8ca40 = FUN_1407e02ea;
    _DAT_14ca8ca48 = FUN_146826273;
    _DAT_14ca8ca20 = FUN_14741cda4;
    _DAT_14ca8ca60 = 0xffffffff000000e0;
    _DAT_14ca8ca68 = 8;
    DAT_14ca8ca6c = 0;
    _DAT_14ca8ca50 = &LAB_14741cdd0;
    FUN_145f9705a();
    FUN_1407e00cc(&DAT_14ca8ca08);
    return;
  }
  return;
}



// FUNCTION 145f9705a FUN_145f9705a body=133 status=ok
// SIG undefined FUN_145f9705a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f9705a(void)

{
  _DAT_14ca944e8 = L"BASE";
  DAT_14ca94512 = 4;
  FUN_140b35ae4();
  _DAT_14ca944f8 = DAT_14ca8ca18;
  _DAT_14ca944f0 = &DAT_14ca8c6c8;
  _DAT_14ca94500 = &LAB_14682652b;
  DAT_14ca8ca18 = &DAT_14ca944e8;
  DAT_14ca8ca6d = DAT_14ca8ca6d + '\x01';
  _DAT_14ca94508 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8ca6e = DAT_14ca8ca6e + '\x01';
  }
  return;
}



// FUNCTION 145f970e0 FUN_145f970e0 body=232 status=ok
// SIG undefined FUN_145f970e0(void)

longlong * FUN_145f970e0(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_14631c8aa;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f971ce FUN_145f971ce body=810 status=ok
// SIG undefined FUN_145f971ce(void)

longlong * FUN_145f971ce(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)FUN_14001cc68(0x528,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b99ec70;
  plVar6 = plVar3 + 2;
  FUN_145f9759c(plVar6);
  lVar5 = param_3[3];
  plVar2 = (longlong *)param_3[4];
  local_48 = plVar6;
  local_40 = plVar3;
  if (plVar2 == (longlong *)0x0) {
    plVar3[0x88] = lVar5;
    plVar6 = (longlong *)plVar3[0x89];
    if (plVar6 != (longlong *)0x0) {
      plVar3[0x89] = 0;
LAB_145f97428:
      LOCK();
      plVar3 = plVar6 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      if (plVar2 != (longlong *)0x0) goto LAB_145f9727d;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    plVar3[0x88] = lVar5;
    plVar6 = (longlong *)plVar3[0x89];
    if (plVar2 == plVar6) {
      LOCK();
      plVar6 = plVar2 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    else {
      plVar3[0x89] = (longlong)plVar2;
      if (plVar6 != (longlong *)0x0) goto LAB_145f97428;
    }
LAB_145f9727d:
    LOCK();
    plVar6 = plVar2 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  lVar5 = *(longlong *)(param_3[1] + 0x40);
  if (lVar5 != 0) {
    lVar4 = FUN_144a2f878();
    plVar6 = local_48;
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar5);
      }
      goto LAB_145f972d3;
    }
  }
  lVar5 = 0;
  plVar6 = local_48;
LAB_145f972d3:
  plVar6[0x85] = lVar5;
  *(undefined1 *)(plVar6 + 0x17) = *(undefined1 *)(param_1 + 0x70);
  lVar5 = FUN_14112c5dc(param_3[1]);
  if (lVar5 != 0) {
    FUN_1415a8e3c(lVar5 + 0x1808,&local_78,&DAT_14cbc3cb0);
    plVar6[0x97] = local_68;
    *(undefined4 *)(plVar6 + 0x95) = (undefined4)local_78;
    *(undefined4 *)((longlong)plVar6 + 0x4ac) = local_78._4_4_;
    *(undefined4 *)(plVar6 + 0x96) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)plVar6 + 0x4b4) = uStack_70._4_4_;
    if (plVar6 + 0x95 != &local_78) {
      plVar6[0x98] = local_60;
      local_60 = 0;
      plVar2 = (longlong *)plVar6[0x99];
      plVar6[0x99] = (longlong)local_58;
      local_58 = (longlong *)0x0;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
    }
    if (local_58 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_145f974f9(*param_3,&local_48,param_1 + 0x58);
  plVar6 = local_40;
  *param_2 = (longlong)local_48;
  param_2[1] = (longlong)local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_40 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145f974f9 FUN_145f974f9 body=162 status=ok
// SIG undefined FUN_145f974f9(void)

void FUN_145f974f9(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
    local_20 = *param_2 + 0x70;
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



// FUNCTION 145f9759c FUN_145f9759c body=323 status=ok
// SIG undefined FUN_145f9759c(void)

undefined8 * FUN_145f9759c(undefined8 *param_1)

{
  FUN_1413ea01e();
  *param_1 = &PTR_FUN_14b24d660;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  param_1[0xe] = &PTR_LAB_14b242fd0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xf8;
  param_1[0x12] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  FUN_1405bceb4(param_1 + 0x12);
  *param_1 = &PTR_FUN_14b648a00;
  param_1[0xe] = &PTR_FUN_14b648a70;
  param_1[0x12] = &PTR_FUN_14b648a90;
  param_1[0x18] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb1) = 0;
  FUN_141028572(param_1 + 0x19);
  FUN_141028572((longlong)param_1 + 0xd4);
  FUN_145926a7c(param_1 + 0x1c);
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  *(undefined8 *)((longlong)param_1 + 0x442) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44a) = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  FUN_1415a8e58(param_1 + 0x95);
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4ec) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x50c) = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(byte *)(param_1 + 0xa2) = *(byte *)(param_1 + 0xa2) & 0xfe;
  return param_1;
}



// FUNCTION 145f976e0 FUN_145f976e0 body=138 status=ok
// SIG undefined FUN_145f976e0(void)

void FUN_145f976e0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((byte *)*param_4 != (byte *)0x0) && ((*(byte *)*param_4 & 3) != 0)) {
    lVar1 = (**(code **)(*param_1 + 0x180))();
    if (lVar1 != 0) {
      lVar1 = FUN_1400f6f32(lVar1);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x68) != 0)) {
        lVar1 = FUN_140bccd38(*(longlong *)(lVar1 + 0x68),param_2 + 0x18);
        if (lVar1 != 0) {
          lVar2 = FUN_14030d4a0();
          if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
            FUN_1415a8e6e(lVar1,param_4);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 145f9776a FUN_145f9776a body=61 status=ok
// SIG undefined FUN_145f9776a(void)

void FUN_145f9776a(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_145f977a8(param_1);
    return;
  }
  FUN_1456d172d(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 145f977a8 FUN_145f977a8 body=69 status=ok
// SIG undefined FUN_145f977a8(void)

void FUN_145f977a8(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1456d172d(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140179e18(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 145f977f8 FUN_145f977f8 body=227 status=ok
// SIG undefined FUN_145f977f8(void)

undefined8 * FUN_145f977f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_1405ba846();
  *param_1 = &PTR_FUN_14a89dfc0;
  puVar1 = param_1 + 0x79;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  (**(code **)(*(longlong *)param_1[0x75] + 0x728))((longlong *)param_1[0x75],DAT_14cad0f30,1);
  *(byte *)(param_1[0x75] + 0x2d3) = *(byte *)(param_1[0x75] + 0x2d3) | 4;
  iVar2 = *(int *)(param_1 + 0x7a);
  *(uint *)(param_1 + 0x7a) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x3d4) < iVar2 + 1U) {
    FUN_145f978dc(puVar1,iVar2);
  }
  *(undefined8 *)(param_1[0x79] + (longlong)iVar2 * 8) = 0;
  iVar2 = *(int *)(param_1 + 0x7a);
  *(uint *)(param_1 + 0x7a) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x3d4) < iVar2 + 1U) {
    FUN_145f978dc(puVar1,iVar2);
  }
  *(undefined8 *)(param_1[0x79] + (longlong)iVar2 * 8) = 0x461c4000;
  *(byte *)(param_1 + 0x7b) = *(byte *)(param_1 + 0x7b) | 3;
  lVar3 = FUN_145f97960();
  if (lVar3 != 0) {
    FUN_147a3ca9a(puVar1,lVar3 + 0x30);
  }
  return param_1;
}



// FUNCTION 145f978dc FUN_145f978dc body=132 status=ok
// SIG undefined FUN_145f978dc(void)

void FUN_145f978dc(longlong param_1,int param_2)

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



// FUNCTION 145f97960 FUN_145f97960 body=303 status=ok
// SIG undefined FUN_145f97960(void)

longlong FUN_145f97960(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  lVar5 = DAT_14cb0d2b0;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb0d2b0 == 0) {
    local_28 = (undefined2 *)0x0;
    uStack_20 = 0;
    local_48 = &DAT_14c872ce8;
    cVar3 = FUN_1449da20c(DAT_14c872ce0,L"/Script/Engine.Engine",L"DefaultCullDistanceDataName");
    if (cVar3 == '\0') {
      lVar5 = 0;
    }
    else {
      puVar7 = local_28;
      if ((int)uStack_20 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      uVar4 = FUN_145b5612a();
      local_30 = 0;
      local_40 = 0;
      local_38 = 1;
      local_48 = (undefined8 *)((ulonglong)local_48 & 0xffffffff00000000);
      lVar5 = FUN_1412ecd05(uVar4,0,puVar7,0);
    }
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_145f979c2;
  }
  if (*(longlong *)(DAT_14cb0d2b0 + 0x12e8) != 0) {
    lVar6 = FUN_145b5612a();
    lVar1 = *(longlong *)(lVar5 + 0x12e8);
    if (lVar1 != 0) {
      lVar5 = 0;
      if ((lVar6 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_145f979c2;
      if (*(int *)(lVar6 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar5 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30) {
          lVar5 = lVar1;
        }
        goto LAB_145f979c2;
      }
    }
  }
  lVar5 = 0;
LAB_145f979c2:
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 145f97a90 FUN_145f97a90 body=279 status=ok
// SIG undefined FUN_145f97a90(void)

undefined4 * FUN_145f97a90(longlong param_1,undefined4 *param_2,undefined8 param_3)

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
  FUN_145f97d44(param_1,local_48);
  FUN_145f97c48(param_3,local_40);
  local_40[0x1a] = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = *local_40;
  cVar2 = FUN_145f97ba8(param_1,uVar4,local_40,&local_4c);
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
      local_40[0x1b] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[0x1a] =
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
      FUN_145f97e28(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f97ba8 FUN_145f97ba8 body=160 status=ok
// SIG undefined FUN_145f97ba8(void)

undefined8 FUN_145f97ba8(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x70);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x70) == *param_3) {
          FUN_145f97cf4((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x68);
          FUN_145818c74(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x68);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145f97c48 FUN_145f97c48 body=171 status=ok
// SIG undefined FUN_145f97c48(void)

undefined4 * FUN_145f97c48(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff00000000;
  *param_2 = *(undefined4 *)*param_1;
  *(undefined8 *)(param_2 + 2) = 0;
  local_70 = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  local_68 = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  local_60 = 0;
  uStack_58 = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  local_50 = 0;
  uStack_48 = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  local_38 = 0;
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0xffffffff00000000;
  FUN_145f97cf4(&local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f97cf4 FUN_145f97cf4 body=80 status=ok
// SIG undefined FUN_145f97cf4(void)

void FUN_145f97cf4(longlong *param_1)

{
  FUN_14127b1cd(param_1[9],(int)param_1[10]);
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14154e5cc(param_1 + 2);
  FUN_140cb1696(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145f97d44 FUN_145f97d44 body=227 status=ok
// SIG undefined FUN_145f97d44(void)

int * FUN_145f97d44(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140275bcc(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x70);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x70) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x70 + *param_1;
  return param_2;
}



// FUNCTION 145f97e28 FUN_145f97e28 body=428 status=ok
// SIG undefined FUN_145f97e28(void)

void FUN_145f97e28(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x70;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x6c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x68 + lVar7) =
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



// FUNCTION 145f97fd6 FUN_145f97fd6 body=344 status=ok
// SIG undefined FUN_145f97fd6(void)

undefined8 *
FUN_145f97fd6(longlong param_1,undefined8 *param_2,longlong *param_3,longlong param_4,byte param_5,
             ulonglong *param_6)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  longlong *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  byte local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38;
  byte local_37;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  bVar1 = (byte)param_6[1];
  uVar3 = local_28;
  if (bVar1 == 1) {
    uVar3 = *param_6;
  }
  if (((((bVar1 & (longlong)uVar3 < 0) == 0) && ((~param_5 & bVar1) == 0)) && (-1 < param_4)) &&
     (lVar2 = *param_3, lVar2 != 0)) {
    local_88 = (longlong *)param_3[2];
    param_3[2] = 0;
    local_78 = (undefined4)param_3[4];
    uStack_74 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_70 = (undefined4)param_3[5];
    uStack_6c = *(undefined4 *)((longlong)param_3 + 0x2c);
    local_68 = (undefined4)param_3[6];
    uStack_64 = *(undefined4 *)((longlong)param_3 + 0x34);
    uStack_60 = (undefined4)param_3[7];
    uStack_5c = *(undefined4 *)((longlong)param_3 + 0x3c);
    *param_3 = 0;
    if (bVar1 != 0) {
      local_58 = uVar3;
    }
    local_40 = 0;
    local_38 = 0;
    local_37 = param_5;
    local_98[0] = lVar2;
    local_50 = bVar1;
    local_48 = param_4;
    FUN_1410982c4(param_1 + 0x30,param_2,local_98);
    if (local_50 == 1) {
      local_50 = 0;
    }
    if (local_98[0] != 0) {
      plVar4 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar4 = (longlong *)&local_78;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  else {
    *param_2 = 0;
  }
  FUN_145f98130(param_1);
  if ((char)param_6[1] == '\x01') {
    *(undefined1 *)(param_6 + 1) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f98130 FUN_145f98130 body=151 status=ok
// SIG undefined FUN_145f98130(void)

byte FUN_145f98130(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  
  if (*(int *)(param_1 + 0x548) == 0) {
    pbVar1 = (byte *)(param_1 + 0x54f);
    LOCK();
    bVar3 = *(char *)(param_1 + 0x54f) == '\0';
    if (bVar3) {
      *(char *)(param_1 + 0x54f) = '\x01';
    }
    UNLOCK();
    if (!bVar3) {
      FUN_1447d2058();
    }
    if (*(int *)(param_1 + 0x548) == 0) {
      LOCK();
      *(undefined1 *)(param_1 + 0x54e) = 1;
      UNLOCK();
    }
    else {
      LOCK();
      bVar2 = *(byte *)(param_1 + 0x21);
      *(byte *)(param_1 + 0x21) = 1;
      UNLOCK();
      if ((bVar2 & 3) == 2) {
        FUN_1415a93f6();
      }
    }
    LOCK();
    bVar2 = *pbVar1;
    bVar3 = bVar2 == 1;
    if (bVar3) {
      *pbVar1 = 0;
      bVar2 = 1;
    }
    UNLOCK();
    if (!bVar3) {
      bVar2 = FUN_14008cdb0(pbVar1);
      return bVar2;
    }
  }
  else {
    LOCK();
    bVar2 = *(byte *)(param_1 + 0x21);
    *(byte *)(param_1 + 0x21) = 1;
    UNLOCK();
    bVar2 = bVar2 & 3;
    if (bVar2 == 2) {
      bVar2 = FUN_1415a93f6(param_1 + 0x21);
      return bVar2;
    }
  }
  return bVar2;
}



// FUNCTION 145f981c8 FUN_145f981c8 body=138 status=ok
// SIG undefined FUN_145f981c8(void)

code * FUN_145f981c8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTexture1";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000004ab;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147343eba;
}



// FUNCTION 145f98252 FUN_145f98252 body=138 status=ok
// SIG undefined FUN_145f98252(void)

code * FUN_145f98252(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutCompressTexture0_128bit";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<uint4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x88000004b2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147343c92;
}



// FUNCTION 145f982dc FUN_145f982dc body=138 status=ok
// SIG undefined FUN_145f982dc(void)

code * FUN_145f982dc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutCompressTexture0_64bit";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000004af;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147343d1c;
}



// FUNCTION 145f98372 FUN_145f98372 body=214 status=ok
// SIG undefined FUN_145f98372(void)

undefined8 * FUN_145f98372(undefined8 *param_1)

{
  FUN_14480568a();
  *param_1 = &PTR_FUN_14a5a6d00;
  param_1[5] = &PTR_FUN_14a5a7700;
  param_1[6] = &PTR_LAB_14a5a7740;
  param_1[0x55] = &PTR_FUN_14a5a7790;
  param_1[0x56] = &PTR_FUN_14a5a7810;
  param_1[0x57] = &PTR_FUN_14a5a7820;
  param_1[0xc4] = &PTR_LAB_14a5a7850;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  *(undefined4 *)(param_1 + 199) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x63c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x63d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x645) = 0;
  *(undefined4 *)((longlong)param_1 + 0x64c) = 0;
  param_1[0xca] = 2;
  param_1[0xcb] = &DAT_3f8000003f800000;
  param_1[0xcc] = &DAT_3f8000003f800000;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  *(undefined4 *)(param_1 + 0xcf) = 2;
  *(undefined4 *)((longlong)param_1 + 0x69c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x694) = 0;
  *(undefined8 *)((longlong)param_1 + 0x67c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x684) = 0;
  return param_1;
}



// FUNCTION 145f98448 FUN_145f98448 body=40 status=ok
// SIG undefined FUN_145f98448(void)

undefined8 FUN_145f98448(undefined8 param_1,int param_2)

{
  FUN_145f98470();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145f98470 FUN_145f98470 body=235 status=ok
// SIG undefined FUN_145f98470(void)

void FUN_145f98470(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac1a660;
  param_1[5] = &PTR_FUN_14ac1ab00;
  param_1[6] = &PTR_LAB_14ac1ab40;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x32) = 0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_145f9855c(param_1 + 0x29);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 145f9855c FUN_145f9855c body=53 status=ok
// SIG undefined FUN_145f9855c(void)

void FUN_145f9855c(longlong *param_1)

{
  FUN_145f98592();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145f98592 FUN_145f98592 body=346 status=ok
// SIG undefined FUN_145f98592(void)

void FUN_145f98592(longlong *param_1)

{
  longlong *plVar1;
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
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
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
      if (*(longlong *)(*local_68 + 0x10 + (longlong)iStack_4c * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145f986f6 FUN_145f986f6 body=217 status=ok
// SIG undefined FUN_145f986f6(void)

undefined8 * FUN_145f986f6(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14ae62d60;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 2;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x22) = 2;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x27] = 2;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0xffffffffffffffff;
  return param_1;
}



// FUNCTION 145f987d0 FUN_145f987d0 body=40 status=ok
// SIG undefined FUN_145f987d0(void)

undefined8 FUN_145f987d0(undefined8 param_1,int param_2)

{
  FUN_145f987f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145f987f8 FUN_145f987f8 body=185 status=ok
// SIG undefined FUN_145f987f8(void)

void FUN_145f987f8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae45af0;
  param_1[5] = &PTR_FUN_14ae45e30;
  plVar3 = (longlong *)param_1[0xbc];
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
  plVar3 = (longlong *)param_1[0xba];
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
  FUN_1449db362(param_1 + 0xb5);
  FUN_1449db362(param_1 + 0xb3);
  if (param_1[0xb1] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0xaf);
  FUN_140f8610c(param_1);
  return;
}



// FUNCTION 145f988bc FUN_145f988bc body=214 status=ok
// SIG undefined FUN_145f988bc(void)

undefined8 * FUN_145f988bc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1413d1192();
  param_1[0x21] = &DAT_3f8000003f800000;
  param_1[0x22] = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(undefined1 **)((longlong)param_1 + 0x11c) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x124) = &DAT_3f8000003f800000;
  *(undefined2 *)((longlong)param_1 + 300) = 0;
  param_1[0x26] = &DAT_3f8000003f800000;
  param_1[0x27] = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  *(undefined1 *)(param_1 + 0x29) = 1;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0x4000000040000000;
  *param_1 = &PTR_FUN_14aec0480;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x2d] = DAT_14c8464e0;
  param_1[0x2e] = uVar1;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0x3ff0000000000000;
  param_1[0x33] = 0;
  param_1[0x34] = 0x3ff0000000000000;
  param_1[0x35] = 0;
  *(undefined1 *)(param_1 + 0x36) = 1;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  return param_1;
}



// FUNCTION 145f98992 FUN_145f98992 body=52 status=ok
// SIG undefined FUN_145f98992(void)

void FUN_145f98992(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x360);
  memset(_Dst,0,0x360);
  FUN_145f989c6(_Dst);
  return;
}



// FUNCTION 145f989c6 FUN_145f989c6 body=173 status=ok
// SIG undefined FUN_145f989c6(void)

undefined8 * FUN_145f989c6(undefined8 *param_1)

{
  FUN_140e8cfb8();
  *param_1 = &PTR_FUN_14b9d1040;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x301) = 0;
  *(undefined1 *)(param_1 + 0x62) = 1;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x69) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x34c) = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x6b] = 0;
  return param_1;
}



// FUNCTION 145f98a74 FUN_145f98a74 body=205 status=ok
// SIG undefined FUN_145f98a74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f98a74(void)

{
  if ((DAT_14ca8bf1f & 2) == 0) {
    DAT_14ca8bf1f = DAT_14ca8bf1f | 2;
    _DAT_14ca8bec0 = L"FGenerateMipsIndirectCS";
    _DAT_14ca8bed8 = FUN_146826540;
    _DAT_14ca8bee0 = FUN_146825d77;
    _DAT_14ca8bee8 = FUN_146825fd6;
    _DAT_14ca8bef0 = FUN_1407e02ea;
    _DAT_14ca8bef8 = FUN_146826273;
    _DAT_14ca8bed0 = FUN_14741c07c;
    _DAT_14ca8bf10 = 0xffffffff000000e0;
    _DAT_14ca8bf18 = 8;
    DAT_14ca8bf1c = 0;
    _DAT_14ca8bf00 = &LAB_14741c0a8;
    FUN_145f98b42();
    FUN_1407e00cc(&DAT_14ca8beb8);
    return;
  }
  return;
}



// FUNCTION 145f98b42 FUN_145f98b42 body=133 status=ok
// SIG undefined FUN_145f98b42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f98b42(void)

{
  _DAT_14ca94370 = L"BASE";
  DAT_14ca9439a = 4;
  FUN_140b35ae4();
  _DAT_14ca94380 = DAT_14ca8bec8;
  _DAT_14ca94378 = &DAT_14ca8c6c8;
  _DAT_14ca94388 = &LAB_14682652b;
  DAT_14ca8bec8 = &DAT_14ca94370;
  DAT_14ca8bf1d = DAT_14ca8bf1d + '\x01';
  _DAT_14ca94390 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8bf1e = DAT_14ca8bf1e + '\x01';
  }
  return;
}



// FUNCTION 145f98bc8 FUN_145f98bc8 body=226 status=ok
// SIG undefined FUN_145f98bc8(void)

longlong * FUN_145f98bc8(longlong *param_1)

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
  pcVar13 = FUN_14631c7a0;
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
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f98cac FUN_145f98cac body=130 status=ok
// SIG undefined FUN_145f98cac(void)

undefined1 * FUN_145f98cac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TexelSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147422ef0;
}



// FUNCTION 145f98d2e FUN_145f98d2e body=138 status=ok
// SIG undefined FUN_145f98d2e(void)

code * FUN_145f98d2e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MipInSRV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000070;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f98cac;
}



// FUNCTION 145f98db8 FUN_145f98db8 body=138 status=ok
// SIG undefined FUN_145f98db8(void)

code * FUN_145f98db8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MipSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000072;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147422e66;
}


