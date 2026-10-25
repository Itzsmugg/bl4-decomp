// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145c7627c FUN_145c7627c body=258 status=ok
// SIG undefined FUN_145c7627c(void)

void FUN_145c7627c(void)

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
              0x110) < DAT_14c9f69c8) {
    FUN_144b3d300(&DAT_14c9f69c8);
    if (DAT_14c9f69c8 == -1) {
      FUN_145c76380(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLumenFrontLayerTranslucencyGBufferParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x1a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f6948,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d58d25);
      _Init_thread_footer(&DAT_14c9f69c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c76380 FUN_145c76380 body=226 status=ok
// SIG undefined FUN_145c76380(void)

longlong * FUN_145c76380(longlong *param_1)

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
  pcVar13 = FUN_1462ddbd4;
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



// FUNCTION 145c76468 FUN_145c76468 body=132 status=ok
// SIG undefined FUN_145c76468(void)

undefined1 * FUN_145c76468(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FrontLayerTranslucencyNormal";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145c76464;
}



// FUNCTION 145c764ec FUN_145c764ec body=146 status=ok
// SIG undefined FUN_145c764ec(void)

code * FUN_145c764ec(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c7657e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FilmGrain";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FFSRPassParameters_Grain";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000006c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cc27e18;
  return FUN_1498061fe;
}



// FUNCTION 145c7657e FUN_145c7657e body=258 status=ok
// SIG undefined FUN_145c7657e(void)

void FUN_145c7657e(void)

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
              0x110) < DAT_14cc27e98) {
    FUN_144b3d300(&DAT_14cc27e98);
    if (DAT_14cc27e98 == -1) {
      FUN_145c76682(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FFSRPassParameters_Grain";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x4f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc27e18,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14463e50e);
      _Init_thread_footer(&DAT_14cc27e98);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c76682 FUN_145c76682 body=226 status=ok
// SIG undefined FUN_145c76682(void)

longlong * FUN_145c76682(longlong *param_1)

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
  pcVar13 = FUN_14675ed42;
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



// FUNCTION 145c7676a FUN_145c7676a body=132 status=ok
// SIG undefined FUN_145c7676a(void)

undefined1 * FUN_145c7676a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GrainRandomFull";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145c76766;
}



// FUNCTION 145c76818 FUN_145c76818 body=95 status=ok
// SIG undefined FUN_145c76818(void)

undefined8 * FUN_145c76818(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *param_1 = &PTR_FUN_14b60c3d0;
  return param_1;
}



// FUNCTION 145c76878 FUN_145c76878 body=247 status=ok
// SIG undefined FUN_145c76878(void)

void FUN_145c76878(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 1) = 0xffffffff;
    lVar1 = *(longlong *)(param_2 + 0x10);
    *(undefined8 **)(param_2 + 0x10) = puVar2;
    if (lVar1 != 0) {
      FUN_1400020a8();
      puVar2 = *(undefined8 **)(param_2 + 0x10);
    }
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8);
    **(undefined8 **)(param_2 + 0x10) = **(undefined8 **)(param_1 + 0x10);
  }
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)(param_2 + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_1 + 0x40);
  *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_1 + 0x58);
  FUN_145c76970(param_2 + 0x60,param_1 + 0x60);
  *(undefined2 *)(param_2 + 0xb0) = *(undefined2 *)(param_1 + 0xb0);
  *(undefined2 *)(param_2 + 0xb2) = *(undefined2 *)(param_1 + 0xb2);
  FUN_140bb2e20(param_2 + 0xc0,param_1 + 0xc0);
  *(undefined8 *)(param_2 + 0x110) = *(undefined8 *)(param_1 + 0x110);
  *(undefined1 *)(param_2 + 0x11c) = *(undefined1 *)(param_1 + 0x11c);
  return;
}



// FUNCTION 145c76970 FUN_145c76970 body=122 status=ok
// SIG undefined FUN_145c76970(void)

longlong FUN_145c76970(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_145c769ea(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145c769ea FUN_145c769ea body=289 status=ok
// SIG undefined FUN_145c769ea(void)

longlong * FUN_145c769ea(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    uVar2 = *(uint *)(param_2 + 1);
    FUN_145c1fc54(param_1,(ulonglong)uVar2);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar2) {
      FUN_140044672(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar2) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar7 = 0;
      uVar6 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar7) = *(undefined4 *)(lVar3 + lVar7);
          *(undefined4 *)(lVar4 + 4 + lVar7) = *(undefined4 *)(lVar3 + 4 + lVar7);
        }
        else {
          *(undefined8 *)(lVar4 + lVar7) = *(undefined8 *)(lVar3 + lVar7);
          *(undefined ***)(lVar4 + 8 + lVar7) = &PTR_FUN_14a184370;
          bVar1 = *(byte *)(lVar3 + 0x20 + lVar7);
          *(byte *)(lVar4 + 0x20 + lVar7) = bVar1;
          (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar1])
                    (lVar4 + 0x10 + lVar7,lVar3 + 0x10 + lVar7);
          *(undefined8 *)(lVar4 + 0x28 + lVar7) = *(undefined8 *)(lVar3 + 0x28 + lVar7);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x30;
      } while (uVar2 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 145c76b0c FUN_145c76b0c body=154 status=ok
// SIG undefined FUN_145c76b0c(void)

void FUN_145c76b0c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  switchD_143c3d4dc::caseD_1d();
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) & 0x10) != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar2 = FUN_1459efc60();
    if (lVar1 == lVar2) {
      DAT_14cb81c90 = 0;
      if (DAT_14cb81c94 != 0) {
        FUN_145c76bc6();
      }
      if ((DAT_14c9a3b60 != 0) && (DAT_14c9a3b58 != (undefined8 *)0x0)) {
        (**(code **)*DAT_14c9a3b58)(DAT_14c9a3b58,0);
        FUN_1446efa72(&DAT_14c9a3b58,0,0,0x10);
        DAT_14c9a3b60 = 0;
      }
      FUN_145c76c06(DAT_14cb81c98);
      DAT_14cb81c98 = 0;
    }
  }
  return;
}



// FUNCTION 145c76ba6 FUN_145c76ba6 body=31 status=ok
// SIG undefined FUN_145c76ba6(void)

undefined8 FUN_145c76ba6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c76bc6 FUN_145c76bc6 body=64 status=ok
// SIG undefined FUN_145c76bc6(void)

void FUN_145c76bc6(void)

{
  if (DAT_14cb81c94 != 0) {
    DAT_14cb81c94 = 0;
    FUN_1446f8d3c(&DAT_14cb81c88,DAT_14cb81c90,0,8,8);
  }
  return;
}



// FUNCTION 145c76c06 FUN_145c76c06 body=108 status=ok
// SIG undefined FUN_145c76c06(void)

void FUN_145c76c06(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  FUN_140d8b835();
  if (DAT_14c9a3b78 < 1) {
    return;
  }
  uVar3 = 0;
  bVar1 = false;
  do {
    uVar3 = (ulonglong)(int)uVar3;
    plVar2 = (longlong *)(uVar3 * 0x18 + DAT_14c9a3b70);
    while (*plVar2 != param_1) {
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 3;
      if ((longlong)DAT_14c9a3b78 <= (longlong)uVar3) {
        if (!bVar1) {
          return;
        }
        goto LAB_145c76c4c;
      }
    }
    FUN_145c76d2e(uVar3 & 0xffffffff);
    bVar1 = true;
  } while ((int)uVar3 < DAT_14c9a3b78);
LAB_145c76c4c:
  FUN_145c76c72();
  return;
}



// FUNCTION 145c76c72 FUN_145c76c72 body=76 status=ok
// SIG undefined FUN_145c76c72(void)

void FUN_145c76c72(void)

{
  int iVar1;
  
  iVar1 = FUN_145c76cbe(DAT_14c9a3b78,DAT_14c9a3b7c);
  if (iVar1 != DAT_14c9a3b7c) {
    DAT_14c9a3b7c = iVar1;
    FUN_1446f8d3c(&DAT_14c9a3b70,DAT_14c9a3b78,iVar1,0x18,8);
  }
  return;
}



// FUNCTION 145c76cbe FUN_145c76cbe body=111 status=ok
// SIG undefined FUN_145c76cbe(void)

ulonglong FUN_145c76cbe(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x18) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 145c76d2e FUN_145c76d2e body=115 status=ok
// SIG undefined FUN_145c76d2e(void)

void FUN_145c76d2e(uint param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = DAT_14c9a3b70;
  FUN_1449db362(DAT_14c9a3b70 + (longlong)(int)param_1 * 0x18 + 8);
  iVar2 = ~param_1 + DAT_14c9a3b78;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)(lVar1 + (longlong)(int)param_1 * 0x18),
            (void *)(lVar1 + (longlong)(DAT_14c9a3b78 - iVar3) * 0x18),(longlong)iVar3 * 0x18);
  }
  DAT_14c9a3b78 = DAT_14c9a3b78 + -1;
  return;
}



// FUNCTION 145c76da2 FUN_145c76da2 body=159 status=ok
// SIG undefined FUN_145c76da2(void)

void FUN_145c76da2(longlong *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad4a58);
  uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  piVar2 = (int *)FUN_145c76e42(&DAT_14cad4a08,uVar1 >> 0x10 ^ uVar1,&local_20);
  *piVar2 = *piVar2 + 1;
  switchD_143c3d4dc::caseD_1f(param_1);
  (**(code **)(*param_1 + 0x2a8))(param_1);
  FUN_14150fbd6(&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c76e42 FUN_145c76e42 body=185 status=ok
// SIG undefined FUN_145c76e42(void)

longlong * FUN_145c76e42(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_145c76ed1;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_145c76efc(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_145c76ed1:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 145c76efc FUN_145c76efc body=274 status=ok
// SIG undefined FUN_145c76efc(void)

undefined4 * FUN_145c76efc(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145c77092(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  *(undefined4 *)(local_40 + 1) = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar1 = FUN_145c77010(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_145c77178(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c77010 FUN_145c77010 body=130 status=ok
// SIG undefined FUN_145c77010(void)

undefined8 FUN_145c77010(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_145c0f760((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145c77092 FUN_145c77092 body=229 status=ok
// SIG undefined FUN_145c77092(void)

int * FUN_145c77092(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 145c77178 FUN_145c77178 body=483 status=ok
// SIG undefined FUN_145c77178(void)

void FUN_145c77178(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c7735c FUN_145c7735c body=258 status=ok
// SIG undefined FUN_145c7735c(void)

void FUN_145c7735c(void)

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
              0x110) < DAT_14ca18560) {
    FUN_144b3d300(&DAT_14ca18560);
    if (DAT_14ca18560 == -1) {
      FUN_1415909ac(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FRasterizePassParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x5c0;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca184e0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e2772f);
      _Init_thread_footer(&DAT_14ca18560);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c77460 FUN_145c77460 body=205 status=ok
// SIG undefined FUN_145c77460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c77460(void)

{
  if ((DAT_14ca160bf & 2) == 0) {
    DAT_14ca160bf = DAT_14ca160bf | 2;
    _DAT_14ca16060 = L"FMicropolyRasterizeCS";
    _DAT_14ca16078 = FUN_146826540;
    _DAT_14ca16080 = FUN_146825d77;
    _DAT_14ca16088 = FUN_146825fd6;
    _DAT_14ca16090 = FUN_1407e02ea;
    _DAT_14ca16098 = FUN_146826273;
    _DAT_14ca16070 = FUN_14725404c;
    _DAT_14ca160b0 = 0xffffffff000000f8;
    _DAT_14ca160b8 = 8;
    DAT_14ca160bc = 0;
    _DAT_14ca160a0 = &LAB_147254084;
    FUN_145c7752e();
    FUN_1407e00cc(&DAT_14ca16058);
    return;
  }
  return;
}



// FUNCTION 145c7752e FUN_145c7752e body=123 status=ok
// SIG undefined FUN_145c7752e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c7752e(void)

{
  _DAT_14ca19400 = L"BASE";
  DAT_14ca1942a = 4;
  _DAT_14ca19408 = FUN_141526006();
  _DAT_14ca19410 = DAT_14ca16068;
  _DAT_14ca19418 = &LAB_14682652b;
  DAT_14ca16068 = &DAT_14ca19400;
  DAT_14ca160bd = DAT_14ca160bd + '\x01';
  _DAT_14ca19420 = 0x100000000;
  if (*(char *)(_DAT_14ca19408 + 100) != '\0') {
    DAT_14ca160be = DAT_14ca160be + '\x01';
  }
  return;
}



// FUNCTION 145c775aa FUN_145c775aa body=146 status=ok
// SIG undefined FUN_145c775aa(void)

code * FUN_145c775aa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_144a8c09c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SkyAtmosphere";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSkyAtmosphereInternalCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000002a5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca5cb58;
  return FUN_14630ba58;
}



// FUNCTION 145c7763c FUN_145c7763c body=136 status=ok
// SIG undefined FUN_145c7763c(void)

code * FUN_145c7763c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TransmittanceSampleCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000000fc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14731965c;
}



// FUNCTION 145c776c4 FUN_145c776c4 body=138 status=ok
// SIG undefined FUN_145c776c4(void)

code * FUN_145c776c4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MultiScatteringSampleCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x84000000fd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145c7763c;
}



// FUNCTION 145c7774e FUN_145c7774e body=138 status=ok
// SIG undefined FUN_145c7774e(void)

code * FUN_145c7774e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CameraAerialPerspectiveVolumeDepthSliceLengthKm";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x38000000f4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14731990e;
}



// FUNCTION 145c777d8 FUN_145c777d8 body=2304 status=ok
// SIG undefined FUN_145c777d8(void)

undefined8 * FUN_145c777d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [36];
  undefined4 local_84;
  longlong *local_80;
  undefined8 *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined4 *local_60;
  longlong **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = &PTR_FUN_14b439d90;
  param_1[0xb] = 0x100000000;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x119) = 0;
  *(undefined8 *)((longlong)param_1 + 0x121) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0x29) = 1;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2c] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined2 *)(param_1 + 0x42) = 1;
  param_1[0x5a] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b1) = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0;
  param_1[0x5b] = 0x4680000046800000;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x374) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x37c) = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  local_78 = (undefined8 *)0x0;
  uStack_70 = 1;
  uStack_6c = 0;
  FUN_145c780da(&local_78,0);
  uVar4 = uStack_70;
  *(undefined4 *)local_78 = 3;
  *(undefined8 *)((longlong)local_78 + 4) = 0;
  *(undefined1 *)((longlong)local_78 + 0xc) = 0;
  lVar7 = (longlong)(int)uStack_70;
  uStack_70 = uStack_70 + 1;
  if (uStack_6c < uStack_70) {
    FUN_145c780da(&local_78,uVar4);
  }
  uVar4 = uStack_70;
  puVar1 = param_1 + 0x73;
  local_78[lVar7 * 2] = 0xc00000006;
  *(undefined4 *)(local_78 + lVar7 * 2 + 1) = 0;
  *(undefined1 *)((longlong)local_78 + (lVar7 * 4 + 3) * 4) = 0;
  lVar7 = (longlong)(int)uStack_70;
  uStack_70 = uStack_70 + 1;
  if (uStack_6c < uStack_70) {
    FUN_145c780da(&local_78,uVar4);
  }
  local_78[lVar7 * 2] = 0x1000000004;
  *(undefined4 *)(local_78 + lVar7 * 2 + 1) = 0;
  *(undefined1 *)((longlong)local_78 + (lVar7 * 4 + 3) * 4) = 0;
  plVar5 = (longlong *)FUN_14001cc68(0x30,0x10);
  FUN_145c78160(plVar5,&local_78);
  local_80 = plVar5;
  (**(code **)(*plVar5 + 8))(plVar5,&DAT_14ca85100);
  local_84 = 0;
  local_60 = &local_84;
  local_58 = &local_80;
  FUN_145c78300(puVar1,local_4c);
  if (local_80 != (longlong *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if (local_78 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_78 = (undefined8 *)0x0;
  uVar2 = *(undefined4 *)(param_1 + 0xb);
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x5c);
  uStack_70 = 1;
  uStack_6c = 0;
  FUN_145c780da(&local_78,0);
  uVar4 = uStack_70;
  *local_78 = 4;
  *(undefined4 *)(local_78 + 1) = uVar2;
  *(undefined1 *)((longlong)local_78 + 0xc) = 0;
  lVar7 = (longlong)(int)uStack_70;
  uStack_70 = uStack_70 + 1;
  if (uStack_6c < uStack_70) {
    FUN_145c780da(&local_78,uVar4);
  }
  local_78[lVar7 * 2] = 6;
  *(undefined4 *)(local_78 + lVar7 * 2 + 1) = uVar3;
  *(undefined1 *)((longlong)local_78 + lVar7 * 0x10 + 0xc) = 1;
  plVar5 = (longlong *)FUN_14001cc68(0x30,0x10);
  FUN_145c78160(plVar5,&local_78);
  local_80 = plVar5;
  (**(code **)(*plVar5 + 8))(plVar5,&DAT_14ca85100);
  local_84 = 1;
  local_60 = &local_84;
  local_58 = &local_80;
  FUN_145c78300(puVar1,local_4c);
  if (local_80 != (longlong *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if (local_78 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_78 = (undefined8 *)0x0;
  uVar2 = *(undefined4 *)(param_1 + 0xb);
  uStack_70 = 1;
  uStack_6c = 0;
  FUN_145c780da(&local_78,0);
  uVar4 = uStack_70;
  *local_78 = 3;
  *(undefined4 *)(local_78 + 1) = uVar2;
  *(undefined1 *)((longlong)local_78 + 0xc) = 0;
  lVar7 = (longlong)(int)uStack_70;
  uStack_70 = uStack_70 + 1;
  if (uStack_6c < uStack_70) {
    FUN_145c780da(&local_78,uVar4);
  }
  uVar4 = uStack_70;
  local_78[lVar7 * 2] = 0xc00000006;
  *(undefined4 *)(local_78 + lVar7 * 2 + 1) = uVar2;
  *(undefined1 *)((longlong)local_78 + lVar7 * 0x10 + 0xc) = 0;
  lVar7 = (longlong)(int)uStack_70;
  uStack_70 = uStack_70 + 1;
  if (uStack_6c < uStack_70) {
    FUN_145c780da(&local_78,uVar4);
  }
  uVar4 = uStack_70;
  local_78[lVar7 * 2] = 0x1000000004;
  *(undefined4 *)(local_78 + lVar7 * 2 + 1) = uVar2;
  *(undefined1 *)((longlong)local_78 + lVar7 * 0x10 + 0xc) = 0;
  lVar7 = (longlong)(int)uStack_70;
  uStack_70 = uStack_70 + 1;
  if (uStack_6c < uStack_70) {
    FUN_145c780da(&local_78,uVar4);
  }
  local_78[lVar7 * 2] = 0x2000000004;
  *(undefined4 *)(local_78 + lVar7 * 2 + 1) = uVar2;
  *(undefined1 *)((longlong)local_78 + lVar7 * 0x10 + 0xc) = 0;
  plVar5 = (longlong *)FUN_14001cc68(0x30,0x10);
  FUN_145c78160(plVar5,&local_78);
  local_80 = plVar5;
  (**(code **)(*plVar5 + 8))(plVar5,&DAT_14ca85100);
  local_84 = 3;
  local_60 = &local_84;
  local_58 = &local_80;
  FUN_145c78300(puVar1,local_4c);
  if (local_80 != (longlong *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if (local_78 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_78 = (undefined8 *)0x0;
  uVar2 = *(undefined4 *)(param_1 + 0xb);
  uStack_70 = 1;
  uStack_6c = 0;
  FUN_145c780da(&local_78,0);
  uVar4 = uStack_70;
  *local_78 = 4;
  *(undefined4 *)(local_78 + 1) = uVar2;
  *(undefined1 *)((longlong)local_78 + 0xc) = 0;
  lVar7 = (longlong)(int)uStack_70;
  uStack_70 = uStack_70 + 1;
  if (uStack_6c < uStack_70) {
    FUN_145c780da(&local_78,uVar4);
  }
  uVar4 = uStack_70;
  local_78[lVar7 * 2] = 0x1000000004;
  *(undefined4 *)(local_78 + lVar7 * 2 + 1) = uVar2;
  *(undefined1 *)((longlong)local_78 + lVar7 * 0x10 + 0xc) = 0;
  lVar7 = (longlong)(int)uStack_70;
  uStack_70 = uStack_70 + 1;
  if (uStack_6c < uStack_70) {
    FUN_145c780da(&local_78,uVar4);
  }
  uVar4 = uStack_70;
  local_78[lVar7 * 2] = 0x2000000002;
  *(undefined4 *)(local_78 + lVar7 * 2 + 1) = uVar2;
  *(undefined1 *)((longlong)local_78 + lVar7 * 0x10 + 0xc) = 0;
  lVar7 = (longlong)(int)uStack_70;
  uStack_70 = uStack_70 + 1;
  if (uStack_6c < uStack_70) {
    FUN_145c780da(&local_78,uVar4);
  }
  uVar4 = uStack_70;
  local_78[lVar7 * 2] = 0x2800000002;
  *(undefined4 *)(local_78 + lVar7 * 2 + 1) = uVar2;
  *(undefined1 *)((longlong)local_78 + lVar7 * 0x10 + 0xc) = 0;
  lVar7 = (longlong)(int)uStack_70;
  uStack_70 = uStack_70 + 1;
  if (uStack_6c < uStack_70) {
    FUN_145c780da(&local_78,uVar4);
  }
  local_78[lVar7 * 2] = 0x3000000006;
  *(undefined4 *)(local_78 + lVar7 * 2 + 1) = uVar2;
  *(undefined1 *)((longlong)local_78 + lVar7 * 0x10 + 0xc) = 0;
  plVar5 = (longlong *)FUN_14001cc68(0x30,0x10);
  FUN_145c78160(plVar5,&local_78);
  local_80 = plVar5;
  (**(code **)(*plVar5 + 8))(plVar5,&DAT_14ca85100);
  local_84 = 4;
  local_60 = &local_84;
  local_58 = &local_80;
  FUN_145c78300(puVar1,local_4c);
  if (local_80 != (longlong *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if (local_78 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_145c78870(param_1 + 0x4a);
  FUN_145c788ea(param_1 + 0x4d);
  FUN_145c7871a(param_1);
  if (0 < *(int *)(param_1 + 0x4b)) {
    lVar7 = 0;
    do {
      *(undefined4 *)(param_1[0x4a] + lVar7 * 4) = 0xffffffff;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x4b));
  }
  if (0 < *(int *)(param_1 + 0x4e)) {
    lVar7 = 0;
    do {
      *(undefined4 *)(param_1[0x4d] + lVar7 * 4) = 0xffffffff;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x4e));
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  lVar6 = FUN_14001cc68(0x90,0x10);
  FUN_140596aa6(lVar6,1);
  lVar7 = param_1[0x50];
  if ((lVar7 != lVar6) && (param_1[0x50] = lVar6, lVar7 != 0)) {
    FUN_14058c1a6(lVar7);
    FUN_1400020a8(lVar7);
  }
  if ((*(longlong *)(&DAT_14ca814b0 + (ulonglong)DAT_14ca85550 * 0x3c) == DAT_14ca838f8) ||
     (*(longlong *)(&DAT_14ca814b0 + (ulonglong)DAT_14ca85550 * 0x3c) == DAT_14ca80040)) {
    FUN_143e71998(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c780da FUN_145c780da body=132 status=ok
// SIG undefined FUN_145c780da(void)

void FUN_145c780da(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145c78160 FUN_145c78160 body=107 status=ok
// SIG undefined FUN_145c78160(void)

undefined8 * FUN_145c78160(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  FUN_144a7f8ec();
  *param_1 = &PTR_FUN_14b43b240;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_145c781cc(param_1 + 3,iVar1);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 << 4);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



// FUNCTION 145c781cc FUN_145c781cc body=88 status=ok
// SIG undefined FUN_145c781cc(void)

void FUN_145c781cc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 145c78224 FUN_145c78224 body=218 status=ok
// SIG undefined FUN_145c78224(void)

void FUN_145c78224(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined1 local_b0 [136];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_28 = 0x1100000000;
  (**(code **)(*param_1 + 0x30))(param_1,local_b0);
  (**(code **)(*DAT_14ca83900 + 0x68))(DAT_14ca83900,&local_b8,local_b0);
  param_1 = param_1 + 2;
  if (param_1 != &local_b8) {
    lVar3 = *param_1;
    *param_1 = local_b8;
    local_b8 = 0;
    if (lVar3 == 0) goto LAB_145c7829c;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_b8 != 0) {
    LOCK();
    puVar1 = (uint *)(local_b8 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_145c7829c:
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c78300 FUN_145c78300 body=293 status=ok
// SIG undefined FUN_145c78300(void)

undefined4 * FUN_145c78300(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145c784c2(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(uint *)*param_3;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  *puVar1 = 0;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_145c78426(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14150fd72(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c78426 FUN_145c78426 body=156 status=ok
// SIG undefined FUN_145c78426(void)

undefined8 FUN_145c78426(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*piVar1 == *param_3) {
          puVar2 = *(undefined8 **)(piVar1 + 2);
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
          }
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = *param_3;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1489c1762(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 145c784c2 FUN_145c784c2 body=243 status=ok
// SIG undefined FUN_145c784c2(void)

int * FUN_145c784c2(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 145c785b6 FUN_145c785b6 body=355 status=ok
// SIG undefined FUN_145c785b6(void)

void FUN_145c785b6(longlong param_1,longlong param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  ushort local_50 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  iVar3 = *(int *)(param_1 + 0x20);
  if (0 < (longlong)iVar3) {
    lVar10 = *(longlong *)(param_1 + 0x18);
    lVar7 = 0;
    iVar8 = 0;
    do {
      uVar9 = *(int *)(lVar10 + lVar7) - 1;
      if ((uVar9 < 6) && ((0x2fU >> (uVar9 & 0x1f) & 1) != 0)) {
        iVar8 = *(int *)(&DAT_14b43bb10 + (ulonglong)uVar9 * 4);
      }
      *(int *)(local_50 + (ulonglong)*(uint *)(lVar10 + 8 + lVar7) * 2) =
           *(int *)(local_50 + (ulonglong)*(uint *)(lVar10 + 8 + lVar7) * 2) + iVar8;
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar7);
    lVar7 = 0xc;
    uVar9 = 0;
    lVar10 = 0;
    local_68 = param_1;
    local_60 = param_2;
    do {
      lVar5 = *(longlong *)(param_1 + 0x18);
      bVar1 = *(byte *)(lVar5 + lVar7);
      uVar11 = (ulonglong)*(uint *)(lVar5 + -4 + lVar7);
      uVar2 = local_50[uVar11 * 2];
      uVar6 = *(uint *)(lVar5 + -0xc + lVar7);
      uVar4 = *(uint *)(lVar5 + -8 + lVar7);
      iVar3 = *(int *)(param_2 + 0x88);
      *(uint *)(param_2 + 0x88) = iVar3 + 1U;
      if (*(uint *)(param_2 + 0x8c) < iVar3 + 1U) {
        local_58 = (ulonglong)uVar6;
        FUN_14738ac8a(param_2,iVar3);
        uVar6 = (uint)local_58;
        param_2 = local_60;
        param_1 = local_68;
      }
      *(ulonglong *)(param_2 + (longlong)iVar3 * 8) =
           uVar11 & 0xff |
           (ulonglong)((uVar4 & 0xff) << 8) |
           (ulonglong)((uVar6 & 0xff) << 0x10) |
           (ulonglong)uVar9 | (ulonglong)uVar2 << 0x20 | (ulonglong)bVar1 << 0x30;
      lVar10 = lVar10 + 1;
      uVar9 = uVar9 + 0x1000000;
      lVar7 = lVar7 + 0x10;
    } while (lVar10 < *(int *)(param_1 + 0x20));
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c7871a FUN_145c7871a body=103 status=ok
// SIG undefined FUN_145c7871a(void)

void FUN_145c7871a(longlong param_1)

{
  longlong lVar1;
  
  FUN_145c78782(param_1 + 0x228,*(undefined2 *)(param_1 + 0x210));
  FUN_145c78782(param_1 + 0x238,*(undefined2 *)(param_1 + 0x210));
  if (0 < *(int *)(param_1 + 0x230)) {
    lVar1 = 0;
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0x238) + lVar1 * 4) = 0xffffffff;
      *(undefined4 *)(*(longlong *)(param_1 + 0x228) + lVar1 * 4) = 0xffffffff;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x230));
  }
  return;
}



// FUNCTION 145c78782 FUN_145c78782 body=105 status=ok
// SIG undefined FUN_145c78782(void)

void FUN_145c78782(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_145c787ec(param_1);
    }
    memset((void *)((longlong)iVar1 * 4 + *param_1),0,(longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_1489c190c(param_1);
  return;
}



// FUNCTION 145c787ec FUN_145c787ec body=132 status=ok
// SIG undefined FUN_145c787ec(void)

void FUN_145c787ec(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145c78870 FUN_145c78870 body=122 status=ok
// SIG undefined FUN_145c78870(void)

void FUN_145c78870(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 5) {
    *(undefined4 *)(param_1 + 1) = 5;
    uVar2 = 5 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_145c78964(param_1,iVar1);
    }
    memset((void *)((longlong)iVar1 * 4 + *param_1),(int)CONCAT71((uint7)(uint3)(uVar2 >> 8),0xff),
           (ulonglong)uVar2 << 2);
    return;
  }
  if (iVar1 == 5) {
    return;
  }
  *(undefined4 *)(param_1 + 1) = 5;
  FUN_1489c17d4(param_1);
  return;
}



// FUNCTION 145c788ea FUN_145c788ea body=122 status=ok
// SIG undefined FUN_145c788ea(void)

void FUN_145c788ea(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 5) {
    *(undefined4 *)(param_1 + 1) = 5;
    uVar2 = 5 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_145c789e8(param_1,iVar1);
    }
    memset((void *)((longlong)iVar1 * 4 + *param_1),(int)CONCAT71((uint7)(uint3)(uVar2 >> 8),0xff),
           (ulonglong)uVar2 << 2);
    return;
  }
  if (iVar1 == 5) {
    return;
  }
  *(undefined4 *)(param_1 + 1) = 5;
  FUN_1489c1870(param_1);
  return;
}



// FUNCTION 145c78964 FUN_145c78964 body=132 status=ok
// SIG undefined FUN_145c78964(void)

void FUN_145c78964(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145c789e8 FUN_145c789e8 body=132 status=ok
// SIG undefined FUN_145c789e8(void)

void FUN_145c789e8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145c78a6c FUN_145c78a6c body=182 status=ok
// SIG undefined FUN_145c78a6c(void)

undefined8
FUN_145c78a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [39];
  undefined1 local_51;
  code *local_50;
  undefined1 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = &local_51;
  local_50 = FUN_146271634;
  lVar2 = FUN_144a773aa(&local_50,&DAT_14c75ebfc);
  iVar1 = *(int *)(lVar2 + 0x18);
  lVar3 = (longlong)iVar1;
  *(uint *)(lVar2 + 0x18) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x1c) < iVar1 + 1U) {
    FUN_145c78b24((longlong *)(lVar2 + 0x10),iVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 0x10);
  *(undefined8 *)(lVar2 + lVar3 * 0x14) = param_2;
  *(undefined8 *)(lVar2 + 8 + lVar3 * 0x14) = param_3;
  *(undefined1 *)(lVar2 + 0x10 + lVar3 * 0x14) = param_4;
  *(undefined1 *)(lVar2 + 0x11 + lVar3 * 0x14) = param_5;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c78b24 FUN_145c78b24 body=147 status=ok
// SIG undefined FUN_145c78b24(void)

void FUN_145c78b24(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145c78bb8 FUN_145c78bb8 body=152 status=ok
// SIG undefined FUN_145c78bb8(void)

void FUN_145c78bb8(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    FUN_145c78c50(lVar2);
    FUN_1400020a8(lVar2);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 != 0) {
    FUN_145c78c50(lVar2);
    FUN_1400020a8(lVar2);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1402df4ac(param_1);
    puVar3 = *(undefined8 **)(param_1 + 0x1a8);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x1a8) = 0;
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145c78c45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar3)(puVar3,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c78c50 FUN_145c78c50 body=68 status=ok
// SIG undefined FUN_145c78c50(void)

void FUN_145c78c50(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined1 *)(param_1 + 0x18) = 1;
  SetEvent(*(HANDLE *)(param_1 + 0x20));
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))();
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x000145c78c8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseHandle(*(HANDLE *)(param_1 + 0x20));
  return;
}



// FUNCTION 145c78c94 FUN_145c78c94 body=67 status=ok
// SIG undefined FUN_145c78c94(void)

void FUN_145c78c94(void)

{
  if (DAT_14caa27f8 != 0) {
    FUN_1400020a8();
  }
  FUN_145c78cd7(DAT_14caa27d8,DAT_14caa27e0);
  if (DAT_14caa27d8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c78cd7 FUN_145c78cd7 body=43 status=ok
// SIG undefined FUN_145c78cd7(void)

void FUN_145c78cd7(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14745c5ca(param_1);
    param_1 = param_1 + 0x150;
  }
  return;
}



// FUNCTION 145c78d02 FUN_145c78d02 body=38 status=ok
// SIG undefined FUN_145c78d02(void)

undefined8 FUN_145c78d02(undefined8 param_1,int param_2)

{
  FUN_145c78d28();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c78d28 FUN_145c78d28 body=72 status=ok
// SIG undefined FUN_145c78d28(void)

void FUN_145c78d28(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  FUN_144a4509c(param_1 + 2);
  *param_1 = &PTR__purecall_14a453170;
  if (param_1[1] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[1] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 145c78d78 FUN_145c78d78 body=102 status=ok
// SIG undefined FUN_145c78d78(void)

undefined8 * FUN_145c78d78(undefined8 *param_1)

{
  FUN_145a4ff4a();
  *param_1 = &PTR_FUN_14a5b35e0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_1446f470e(param_1 + 0x19,&DAT_149e01fe8,1);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(byte *)((longlong)param_1 + 0x52) = *(byte *)((longlong)param_1 + 0x52) & 0xfe;
  return param_1;
}



// FUNCTION 145c78df4 FUN_145c78df4 body=99 status=ok
// SIG undefined FUN_145c78df4(void)

undefined8 * FUN_145c78df4(undefined8 *param_1)

{
  FUN_1405ba846();
  *param_1 = &PTR_FUN_14a70b170;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  (**(code **)(*(longlong *)param_1[0x75] + 0x728))((longlong *)param_1[0x75],DAT_14cad0f30,1);
  *(byte *)((longlong)param_1 + 0x39c) = *(byte *)((longlong)param_1 + 0x39c) | 1;
  *(undefined4 *)((longlong)param_1 + 0x394) = 0xff19785a;
  return param_1;
}



// FUNCTION 145c78e58 FUN_145c78e58 body=40 status=ok
// SIG undefined FUN_145c78e58(void)

undefined8 FUN_145c78e58(undefined8 param_1,int param_2)

{
  FUN_14150ff7a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c78e80 FUN_145c78e80 body=40 status=ok
// SIG undefined FUN_145c78e80(void)

undefined8 FUN_145c78e80(undefined8 param_1,int param_2)

{
  FUN_14150ffc0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c78ea8 FUN_145c78ea8 body=165 status=ok
// SIG undefined FUN_145c78ea8(void)

void FUN_145c78ea8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xc0);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0x1e) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined8 *)((longlong)param_2 + 0x29) = 0;
  *(undefined8 *)((longlong)param_2 + 0x31) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0xffffffff;
  *param_2 = &PTR_FUN_14ac65680;
  param_2[8] = 0;
  *(undefined2 *)(param_2 + 0xc) = 4;
  *(undefined4 *)(param_2 + 9) = 0x3f800000;
  *(undefined1 *)(param_2 + 0xd) = 3;
  *(char *)(param_2 + 0xe) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_2[0xf] = 0;
  *(undefined1 *)(param_2 + 0x10) = 0;
  param_2[0x11] = 0;
  *(undefined2 *)(param_2 + 0x15) = 0;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  return;
}



// FUNCTION 145c78f4e FUN_145c78f4e body=21 status=ok
// SIG undefined FUN_145c78f4e(void)

undefined8 FUN_145c78f4e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145c78f64 FUN_145c78f64 body=56 status=ok
// SIG undefined FUN_145c78f64(void)

void FUN_145c78f64(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_144a7e30a();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  FUN_145c78f9c(lVar2);
  return;
}



// FUNCTION 145c78f9c FUN_145c78f9c body=183 status=ok
// SIG undefined FUN_145c78f9c(void)

void FUN_145c78f9c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_138 [40];
  undefined1 local_110 [248];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1413e28b0(local_110);
  lVar2 = FUN_145c79054(local_110,param_1 + 0x2d0);
  lVar1 = DAT_14cb25be0;
  if (lVar2 == 0) {
    if ((DAT_14cb25be0 != 0) && (lVar1 = lVar2, DAT_14c872a72 == '\0')) {
      FUN_140113f48();
    }
  }
  else if (DAT_14cb25be0 != lVar2) {
    if ((DAT_14cb25be0 != 0) && (DAT_14c872a72 == '\0')) {
      FUN_140113f48();
    }
    FUN_1401924dc(lVar2);
    lVar1 = lVar2;
  }
  DAT_14cb25be0 = lVar1;
  FUN_140f77756(local_110);
  if ((local_18 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c79054 FUN_145c79054 body=69 status=ok
// SIG undefined FUN_145c79054(void)

longlong FUN_145c79054(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_141498c8a(param_1,param_2,0,0);
  if (lVar1 != 0) {
    lVar2 = FUN_1459ebe96();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 145c790a4 FUN_145c790a4 body=98 status=ok
// SIG undefined FUN_145c790a4(void)

undefined8 * FUN_145c790a4(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ad0f6f0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_1412e3d1e(&local_28);
  *(undefined4 *)(param_1 + 5) = local_28;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_24;
  *(undefined4 *)(param_1 + 6) = uStack_20;
  *(undefined4 *)((longlong)param_1 + 0x34) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c79110 FUN_145c79110 body=102 status=ok
// SIG undefined FUN_145c79110(void)

undefined8 * FUN_145c79110(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_140e3eac6();
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  *param_1 = &PTR_FUN_14ad74cb0;
  param_1[6] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  uVar1 = FUN_144830b78((longlong)param_1 + 0x44,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar1;
  param_1[6] = &PTR_FUN_14ad6ad70;
  *(undefined4 *)(param_1 + 7) = 1;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 145c79176 FUN_145c79176 body=40 status=ok
// SIG undefined FUN_145c79176(void)

undefined8 FUN_145c79176(undefined8 param_1,int param_2)

{
  FUN_141510006();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c7919e FUN_145c7919e body=40 status=ok
// SIG undefined FUN_145c7919e(void)

undefined8 FUN_145c7919e(undefined8 param_1,int param_2)

{
  FUN_145c791c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c791c6 FUN_145c791c6 body=70 status=ok
// SIG undefined FUN_145c791c6(void)

void FUN_145c791c6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aecf6d0;
  param_1[5] = &PTR_FUN_14aecf970;
  FUN_144760e21(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_145933e42(param_1);
  return;
}



// FUNCTION 145c79214 FUN_145c79214 body=102 status=ok
// SIG undefined FUN_145c79214(void)

undefined8 * FUN_145c79214(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14007ca06();
  FUN_1405ba846(param_1,uVar2);
  *param_1 = &PTR_FUN_14afb3be0;
  plVar1 = (longlong *)param_1[0x75];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x730))(plVar1,0);
    (**(code **)(*plVar1 + 0x940))(plVar1,0);
    *(undefined1 *)((longlong)plVar1 + 0x2eb) = 0;
  }
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) & 0xfc | 2;
  return param_1;
}



// FUNCTION 145c7927a FUN_145c7927a body=40 status=ok
// SIG undefined FUN_145c7927a(void)

undefined8 FUN_145c7927a(undefined8 param_1,int param_2)

{
  FUN_145c792a2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c792a2 FUN_145c792a2 body=70 status=ok
// SIG undefined FUN_145c792a2(void)

void FUN_145c792a2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14afb0dd0;
  param_1[6] = &PTR_FUN_14afb1070;
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c792e8 FUN_145c792e8 body=40 status=ok
// SIG undefined FUN_145c792e8(void)

undefined8 FUN_145c792e8(undefined8 param_1,int param_2)

{
  FUN_145c79310();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c79310 FUN_145c79310 body=70 status=ok
// SIG undefined FUN_145c79310(void)

void FUN_145c79310(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14afb26f0;
  param_1[6] = &PTR_FUN_14afb2990;
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c79356 FUN_145c79356 body=40 status=ok
// SIG undefined FUN_145c79356(void)

undefined8 FUN_145c79356(undefined8 param_1,int param_2)

{
  FUN_145c7937e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c7937e FUN_145c7937e body=70 status=ok
// SIG undefined FUN_145c7937e(void)

void FUN_145c7937e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb6bf10;
  FUN_1449db362(param_1 + 9);
  FUN_1449db362(param_1 + 7);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c793c4 FUN_145c793c4 body=879 status=ok
// SIG undefined FUN_145c793c4(void)

undefined4 * FUN_145c793c4(longlong param_1,undefined4 *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 *local_c0;
  double local_b0;
  double dStack_a8;
  double local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68 = *(double *)(param_1 + 0x678);
  local_78 = *(double *)(param_1 + 0x668);
  uStack_70 = *(double *)(param_1 + 0x670);
  cVar1 = FUN_1415100ba(param_3);
  lVar2 = *(longlong *)(param_1 + 0x80);
  if ((cVar1 == '\x01') && (*(char *)(lVar2 + 0x338) != '\0')) {
    local_c8 = *(undefined4 *)(lVar2 + 0x330);
    FUN_148936e52(lVar2 + 0x338,param_2,&local_78,*(undefined4 *)(param_1 + 0x660));
  }
  else {
    local_88 = *(undefined8 *)(param_3 + 0x50);
    local_98 = *(undefined8 *)(param_3 + 0x40);
    uStack_90 = *(undefined8 *)(param_3 + 0x48);
    if ((*(byte *)(lVar2 + 0x334) & 2) == 0) {
      dVar7 = (double)-(float)(*(double *)(param_1 + 0x678) * *(double *)(param_3 + 0x50) +
                              *(double *)(param_1 + 0x668) * *(double *)(param_3 + 0x40) +
                              *(double *)(param_1 + 0x670) * *(double *)(param_3 + 0x48));
      dVar5 = *(double *)(param_3 + 0x50) * dVar7;
      dVar3 = *(double *)(param_3 + 0x48) * dVar7;
      dVar7 = *(double *)(param_3 + 0x40) * dVar7;
      dVar8 = (double)(1.0 - *(float *)(lVar2 + 0x32c));
      fVar9 = *(float *)(lVar2 + 0x330);
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      dVar4 = (double)fVar9;
      local_68 = dVar5 * dVar4 + (local_68 + dVar5) * dVar8;
      uStack_70 = dVar3 * dVar4 + (uStack_70 + dVar3) * dVar8;
      local_78 = dVar7 * dVar4 + (local_78 + dVar7) * dVar8;
      dVar3 = local_68 * local_68 + local_78 * local_78 + uStack_70 * uStack_70;
      dVar8 = SQRT(dVar3);
      dVar7 = (double)*(float *)(param_1 + 0x684);
      if ((dVar7 < dVar8) || (dVar7 = (double)*(float *)(param_1 + 0x680), dVar8 < dVar7)) {
        if (((dVar3 != 1.0) || (dVar4 = uStack_70, dVar6 = local_68, dVar5 = local_78, NAN(dVar3)))
           && (dVar4 = DAT_14c8464e8, dVar6 = DAT_14c8464f0, dVar5 = DAT_14c8464e0,
              9.99999993922529e-09 <= dVar3)) {
          dVar8 = 1.0 / dVar8;
          dVar4 = uStack_70 * dVar8;
          dVar6 = local_68 * dVar8;
          dVar5 = local_78 * dVar8;
        }
        local_68 = dVar6 * dVar7;
        uStack_70 = dVar4 * dVar7;
        local_78 = dVar5 * dVar7;
      }
    }
    else {
      local_c8 = *(undefined4 *)(lVar2 + 0x330);
      local_c0 = &local_98;
      FUN_148936eb8(&local_b0,&local_78,param_3,*(undefined4 *)(lVar2 + 0x32c));
      local_68 = local_a0;
      local_78 = local_b0;
      uStack_70 = dStack_a8;
      lVar2 = *(longlong *)(param_1 + 0x80);
    }
    if ((cVar1 == '\x01') && (*(char *)(lVar2 + 0x340) != '\0')) {
      local_c8 = *(undefined4 *)(param_1 + 0x660);
      FUN_148936b10(lVar2 + 0x340,&local_b0,&local_78,&local_98);
      local_68 = local_a0;
      local_78 = local_b0;
      uStack_70 = dStack_a8;
    }
    *(double *)(param_2 + 4) = local_68;
    *param_2 = (undefined4)local_78;
    param_2[1] = local_78._4_4_;
    param_2[2] = (undefined4)uStack_70;
    param_2[3] = uStack_70._4_4_;
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145c7973c FUN_145c7973c body=322 status=ok
// SIG undefined FUN_145c7973c(void)

undefined8 * FUN_145c7973c(undefined8 *param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14b2570c0;
  param_1[0x2f] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x27) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  local_28 = FUN_145909d48();
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_28);
  }
  FUN_1446ddc76(&local_30,"EventProp",1);
  FUN_141446502(param_1 + 0x28,local_30,&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c7988a FUN_145c7988a body=1832 status=ok
// SIG undefined FUN_145c7988a(void)

undefined8 * FUN_145c7988a(undefined8 *param_1)

{
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  longlong *local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  longlong *local_60;
  undefined4 local_58;
  wchar_t *local_50;
  longlong *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_140b4b170();
  *param_1 = &PTR_FUN_14a92ee70;
  local_50 = L"GetOutOfBoundsWarning";
  local_48._0_4_ = 0x15;
  FUN_1446e940c(local_64,&local_50);
  local_50 = L"UKismetArrayLibrary";
  local_48 = (longlong *)CONCAT44(local_48._4_4_,0x13);
  FUN_1446e940c(local_68,&local_50);
  FUN_140208bae(&local_60,local_68,local_64,L"Array read access out of bounds");
  local_50 = DAT_14cae5328;
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
  FUN_145c79fb4(&local_50);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  local_50 = L"SetOutOfBoundsWarning";
  local_48._0_4_ = 0x15;
  FUN_1446e940c(local_64,&local_50);
  local_50 = L"UKismetArrayLibrary";
  local_48 = (longlong *)CONCAT44(local_48._4_4_,0x13);
  FUN_1446e940c(local_68,&local_50);
  FUN_140208bae(&local_78,local_68,local_64,L"Array assignment access out of bounds");
  local_50 = DAT_14cae5330;
  local_48 = local_78;
  if (local_78 == (longlong *)0x0) {
    local_40 = local_70;
  }
  else {
    (**(code **)(*local_78 + 8))();
    local_40 = local_70;
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  FUN_145c79fb4(&local_50);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  local_50 = L"InsertOutOfBoundsWarning";
  local_48._0_4_ = 0x18;
  FUN_1446e940c(local_64,&local_50);
  local_50 = L"UKismetArrayLibrary";
  local_48 = (longlong *)CONCAT44(local_48._4_4_,0x13);
  FUN_1446e940c(local_68,&local_50);
  FUN_140208bae(&local_88,local_68,local_64,L"Array insertion out of bounds");
  local_50 = DAT_14cae5338;
  local_48 = local_88;
  if (local_88 == (longlong *)0x0) {
    local_40 = local_80;
  }
  else {
    (**(code **)(*local_88 + 8))();
    local_40 = local_80;
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x10))();
    }
  }
  FUN_145c79fb4(&local_50);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  local_50 = L"RemoveOutOfBoundsWarning";
  local_48._0_4_ = 0x18;
  FUN_1446e940c(local_64,&local_50);
  local_50 = L"UKismetArrayLibrary";
  local_48 = (longlong *)CONCAT44(local_48._4_4_,0x13);
  FUN_1446e940c(local_68,&local_50);
  FUN_140208bae(&local_98,local_68,local_64,L"Array removal out of bounds");
  local_50 = DAT_14cae5340;
  local_48 = local_98;
  if (local_98 == (longlong *)0x0) {
    local_40 = local_90;
  }
  else {
    (**(code **)(*local_98 + 8))();
    local_40 = local_90;
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 0x10))();
    }
  }
  FUN_145c79fb4(&local_50);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  local_50 = L"ResizeArrayNegativeWarning";
  local_48._0_4_ = 0x1a;
  FUN_1446e940c(local_64,&local_50);
  local_50 = L"UKismetArrayLibrary";
  local_48 = (longlong *)CONCAT44(local_48._4_4_,0x13);
  FUN_1446e940c(local_68,&local_50);
  FUN_140208bae(&local_a8,local_68,local_64,L"Array resized to negative size");
  local_50 = DAT_14cae5348;
  local_48 = local_a8;
  if (local_a8 == (longlong *)0x0) {
    local_40 = local_a0;
  }
  else {
    (**(code **)(*local_a8 + 8))();
    local_40 = local_a0;
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
  FUN_145c79fb4(&local_50);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  local_50 = L"SwapElementsInArrayWarning";
  local_48._0_4_ = 0x1a;
  FUN_1446e940c(local_64,&local_50);
  local_50 = L"UKismetArrayLibrary";
  local_48 = (longlong *)CONCAT44(local_48._4_4_,0x13);
  FUN_1446e940c(local_68,&local_50);
  FUN_140208bae(&local_b8,local_68,local_64,L"Array swap access out of bounds");
  local_50 = DAT_14cae5350;
  local_48 = local_b8;
  if (local_b8 == (longlong *)0x0) {
    local_40 = local_b0;
  }
  else {
    (**(code **)(*local_b8 + 8))();
    local_40 = local_b0;
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
  }
  FUN_145c79fb4(&local_50);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  local_50 = L"RandomAccessToEmptyArrayWarning";
  local_48._0_4_ = 0x1f;
  FUN_1446e940c(local_64,&local_50);
  local_50 = L"UKismetArrayLibrary";
  local_48 = (longlong *)CONCAT44(local_48._4_4_,0x13);
  FUN_1446e940c(local_68,&local_50);
  FUN_140208bae(&local_c8,local_68,local_64,L"Random access to empty array");
  local_50 = DAT_14cae5358;
  local_48 = local_c8;
  if (local_c8 == (longlong *)0x0) {
    local_40 = local_c0;
  }
  else {
    (**(code **)(*local_c8 + 8))();
    local_40 = local_c0;
    if (local_c8 != (longlong *)0x0) {
      (**(code **)(*local_c8 + 0x10))();
    }
  }
  FUN_145c79fb4(&local_50);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  local_50 = L"ReachedMaximumContainerSizeWarning";
  local_48._0_4_ = 0x22;
  FUN_1446e940c(local_64,&local_50);
  local_50 = L"UKismetArrayLibrary";
  local_48 = (longlong *)CONCAT44(local_48._4_4_,0x13);
  FUN_1446e940c(local_68,&local_50);
  FUN_140208bae(&local_d8,local_68,local_64,L"Container has reached maximum size");
  local_50 = DAT_14cae7098;
  local_48 = local_d8;
  if (local_d8 == (longlong *)0x0) {
    local_40 = local_d0;
  }
  else {
    (**(code **)(*local_d8 + 8))();
    local_40 = local_d0;
    if (local_d8 != (longlong *)0x0) {
      (**(code **)(*local_d8 + 0x10))();
    }
  }
  FUN_145c79fb4(&local_50);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c79fb4 FUN_145c79fb4 body=95 status=ok
// SIG undefined FUN_145c79fb4(void)

void FUN_145c79fb4(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = DAT_14c947bb0;
  lVar4 = (longlong)(int)DAT_14c947bb0;
  DAT_14c947bb0 = DAT_14c947bb0 + 1;
  if (DAT_14c947bb4 < DAT_14c947bb0) {
    FUN_145c7a014(iVar3);
  }
  puVar1 = (undefined8 *)(DAT_14c947ba8 + lVar4 * 0x18);
  *puVar1 = *param_1;
  plVar2 = (longlong *)param_1[1];
  puVar1[1] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 2);
  return;
}



// FUNCTION 145c7a014 FUN_145c7a014 body=159 status=ok
// SIG undefined FUN_145c7a014(void)

void FUN_145c7a014(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = DAT_14c947bb0;
  if (param_1 <= (int)DAT_14c947bb0) {
    if (DAT_14c947bb4 == 0) {
      uVar2 = 4;
      if (4 < DAT_14c947bb0) {
        uVar2 = DAT_14c947bb0;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)DAT_14c947bb0 * 3) >> 3) + (longlong)(int)DAT_14c947bb0 +
              0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    DAT_14c947bb4 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14c947ba8,param_1,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145c7a0b4 FUN_145c7a0b4 body=40 status=ok
// SIG undefined FUN_145c7a0b4(void)

undefined8 FUN_145c7a0b4(undefined8 param_1,int param_2)

{
  FUN_145c7a0dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c7a0dc FUN_145c7a0dc body=138 status=ok
// SIG undefined FUN_145c7a0dc(void)

void FUN_145c7a0dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac96070;
  FUN_145c7a166(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c7a166 FUN_145c7a166 body=43 status=ok
// SIG undefined FUN_145c7a166(void)

void FUN_145c7a166(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1474b9178(param_1);
    param_1 = param_1 + 0xb0;
  }
  return;
}



// FUNCTION 145c7a192 FUN_145c7a192 body=205 status=ok
// SIG undefined FUN_145c7a192(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c7a192(void)

{
  if ((DAT_14cb8e607 & 2) == 0) {
    DAT_14cb8e607 = DAT_14cb8e607 | 2;
    _DAT_14cb8e5a8 = L"FRenoirStandardVS";
    _DAT_14cb8e5c0 = FUN_146826540;
    _DAT_14cb8e5c8 = FUN_146825d77;
    _DAT_14cb8e5d0 = FUN_146825fd6;
    _DAT_14cb8e5d8 = FUN_1407e02ea;
    _DAT_14cb8e5e0 = FUN_146826273;
    _DAT_14cb8e5b8 = FUN_1489c0514;
    _DAT_14cb8e5f8 = 0xffffffff000000e8;
    _DAT_14cb8e600 = 8;
    DAT_14cb8e604 = 0;
    _DAT_14cb8e5e8 = &LAB_1489c053e;
    FUN_145c7a260();
    FUN_1407e00cc(&DAT_14cb8e5a0);
    return;
  }
  return;
}



// FUNCTION 145c7a260 FUN_145c7a260 body=133 status=ok
// SIG undefined FUN_145c7a260(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c7a260(void)

{
  _DAT_14cb8fc30 = L"BASE";
  DAT_14cb8fc5a = 4;
  FUN_145c7a2e6();
  _DAT_14cb8fc40 = DAT_14cb8e5b0;
  _DAT_14cb8fc38 = &DAT_14cb8fc60;
  _DAT_14cb8fc48 = &LAB_14682652b;
  DAT_14cb8e5b0 = &DAT_14cb8fc30;
  DAT_14cb8e605 = DAT_14cb8e605 + '\x01';
  _DAT_14cb8fc50 = 0x100000000;
  if (DAT_14cb8fcc4 != '\0') {
    DAT_14cb8e606 = DAT_14cb8e606 + '\x01';
  }
  return;
}



// FUNCTION 145c7a2e6 FUN_145c7a2e6 body=308 status=ok
// SIG undefined FUN_145c7a2e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c7a2e6(void)

{
  if ((DAT_14cb8fcc7 & 2) != 0) {
    return;
  }
  DAT_14cb8fcc7 = DAT_14cb8fcc7 | 2;
  _DAT_14cb8fc68 = L"FCohShaderVS";
  _DAT_14cb8fc80 = FUN_146826540;
  _DAT_14cb8fc88 = FUN_146825d77;
  _DAT_14cb8fc90 = FUN_146825fd6;
  _DAT_14cb8fc98 = FUN_1407e02ea;
  _DAT_14cb8fca0 = FUN_146826273;
  _DAT_14cb8fc78 = FUN_1489c208c;
  _DAT_14cb8fcb8 = 0xffffffff000000e8;
  _DAT_14cb8fcc0 = 8;
  DAT_14cb8fcc4 = 0;
  _DAT_14cb8fca8 = &LAB_1489c20b6;
  _DAT_14cb8fcc8 = L"Data_VS";
  DAT_14cb8fcf2 = FUN_140850cc5();
  _DAT_14cb8fcd0 = FUN_140ec6960();
  _DAT_14cb8fce0 = &LAB_14682652b;
  _DAT_14cb8fce8 = 0x1000000e0;
  _DAT_14cb8fcf0 = 0;
  _DAT_14cb8fcd8 = DAT_14cb8fc70;
  DAT_14cb8fc70 = &DAT_14cb8fcc8;
  FUN_145c7a41a();
  FUN_1407e00cc(&DAT_14cb8fc60);
  return;
}



// FUNCTION 145c7a41a FUN_145c7a41a body=123 status=ok
// SIG undefined FUN_145c7a41a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c7a41a(void)

{
  _DAT_14cb8fcf8 = L"BASE";
  DAT_14cb8fd22 = 4;
  _DAT_14cb8fd00 = FUN_140b35ae4();
  _DAT_14cb8fd08 = DAT_14cb8fc70;
  _DAT_14cb8fd10 = &LAB_14682652b;
  DAT_14cb8fc70 = &DAT_14cb8fcf8;
  DAT_14cb8fcc5 = DAT_14cb8fcc5 + '\x01';
  _DAT_14cb8fd18 = 0x100000000;
  if (*(char *)(_DAT_14cb8fd00 + 100) != '\0') {
    DAT_14cb8fcc6 = DAT_14cb8fcc6 + '\x01';
  }
  return;
}



// FUNCTION 145c7a496 FUN_145c7a496 body=62 status=ok
// SIG undefined FUN_145c7a496(void)

void FUN_145c7a496(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145c7a5b4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 145c7a4d4 FUN_145c7a4d4 body=63 status=ok
// SIG undefined FUN_145c7a4d4(void)

longlong FUN_145c7a4d4(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145c7a712(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_145c7a513(lVar2);
  return lVar2;
}



// FUNCTION 145c7a513 FUN_145c7a513 body=15 status=ok
// SIG undefined FUN_145c7a513(void)

void FUN_145c7a513(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 145c7a522 FUN_145c7a522 body=93 status=ok
// SIG undefined FUN_145c7a522(void)

undefined8 * FUN_145c7a522(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145862306(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145c7a624(param_1,iVar1);
      FUN_145c7a57f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145c7a57f FUN_145c7a57f body=52 status=ok
// SIG undefined FUN_145c7a57f(void)

void FUN_145c7a57f(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 145c7a5b4 FUN_145c7a5b4 body=111 status=ok
// SIG undefined FUN_145c7a5b4(void)

ulonglong FUN_145c7a5b4(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x18) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 145c7a624 FUN_145c7a624 body=115 status=ok
// SIG undefined FUN_145c7a624(void)

void FUN_145c7a624(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145c7a698 FUN_145c7a698 body=122 status=ok
// SIG undefined FUN_145c7a698(void)

void FUN_145c7a698(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *_Dst;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x18);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x18);
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)(int)(~param_2 + iVar5) * 0x18);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 145c7a712 FUN_145c7a712 body=147 status=ok
// SIG undefined FUN_145c7a712(void)

void FUN_145c7a712(longlong param_1,int param_2)

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



// FUNCTION 145c7a7a6 FUN_145c7a7a6 body=134 status=ok
// SIG undefined FUN_145c7a7a6(void)

undefined4 FUN_145c7a7a6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_14054d46e(param_3,L"NoPak");
  if (cVar1 == '\0') {
    local_28 = 0;
    uStack_20 = 0;
    FUN_1415102e0(&local_28);
    uVar2 = FUN_145c7a82e(param_2,&local_28);
    FUN_1447a1747(local_28,uStack_20 & 0xffffffff);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar2 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c7a82e FUN_145c7a82e body=159 status=ok
// SIG undefined FUN_145c7a82e(void)

bool FUN_145c7a82e(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140056680(local_48,L"*.pak");
  FUN_145c7a8ce(param_1,param_2,local_48,&local_38);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  iVar1 = (int)uStack_30;
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 0 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c7a8ce FUN_145c7a8ce body=147 status=ok
// SIG undefined FUN_145c7a8ce(void)

void FUN_145c7a8ce(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  undefined2 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < (int)param_2[1]) {
    lVar3 = 8;
    lVar2 = 0;
    do {
      puVar1 = &DAT_149dfb77a;
      if (*(int *)(*param_2 + lVar3) != 0) {
        puVar1 = *(undefined2 **)(*param_2 + -8 + lVar3);
      }
      FUN_145c7a962(param_1,puVar1,param_3,param_4);
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar2 < (int)param_2[1]);
  }
  if (*(int *)(param_4 + 8) == 0) {
    FUN_1447f69b6(&DAT_14c872c98);
    return;
  }
  return;
}



// FUNCTION 145c7a962 FUN_145c7a962 body=286 status=ok
// SIG undefined FUN_145c7a962(void)

void FUN_145c7a962(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_98 [40];
  undefined **local_70;
  undefined1 local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_48 = FUN_14054d46e(&DAT_14c846b20,L"SkipOptionalPakFiles");
  local_68 = 0;
  local_70 = &PTR_FUN_14a1618e0;
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_3 + 1);
  lVar1 = (longlong)local_50;
  _Src = (void *)*param_3;
  local_60 = param_4;
  if (lVar1 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar1 * 2);
  }
  (**(code **)(*param_1 + 0x1a8))(param_1,param_2,&local_70);
  local_70 = &PTR_FUN_14a1618e0;
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c7aa82 FUN_145c7aa82 body=40 status=ok
// SIG undefined FUN_145c7aa82(void)

undefined8 FUN_145c7aa82(undefined8 param_1,int param_2)

{
  FUN_145c7aaaa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c7aaaa FUN_145c7aaaa body=229 status=ok
// SIG undefined FUN_145c7aaaa(void)

void FUN_145c7aaaa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f24960;
  FUN_145c7ab8f(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_145c7ab8f(param_1[0x20],*(undefined4 *)(param_1 + 0x21));
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c7ab8f FUN_145c7ab8f body=63 status=ok
// SIG undefined FUN_145c7ab8f(void)

void FUN_145c7ab8f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c7abce FUN_145c7abce body=115 status=ok
// SIG undefined FUN_145c7abce(void)

undefined8 FUN_145c7abce(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  local_28 = *(longlong *)(param_2 + 4);
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_145c7ac42(param_1,*(undefined8 *)(param_2 + 2),&local_28,uVar1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c7ac42 FUN_145c7ac42 body=131 status=ok
// SIG undefined FUN_145c7ac42(void)

undefined4 *
FUN_145c7ac42(undefined4 *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *param_1 = param_4;
  *(undefined1 *)(param_1 + 0x16) = 0;
  local_28 = param_2;
  FUN_140244552(param_1 + 2,&local_28,&local_30);
  FUN_145c7acc6(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c7acc6 FUN_145c7acc6 body=416 status=ok
// SIG undefined FUN_145c7acc6(void)

void FUN_145c7acc6(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  char *pcVar3;
  uint *puVar4;
  char cVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  byte local_49;
  
  lVar11 = (longlong)(int)param_1[6];
  if ((int)(param_1[8] + 1) < (int)(param_1[0x10] + param_1[6])) {
    lVar2 = *(longlong *)(param_1 + 2);
    lVar10 = (longlong)(int)param_1[8] + 1;
    do {
      lVar9 = lVar11;
      puVar4 = param_1 + 0xe;
      if (lVar10 < lVar11) {
        lVar9 = 0;
        puVar4 = param_1 + 4;
      }
      lVar9 = *(longlong *)(*(longlong *)puVar4 + lVar9 * -8 + lVar10 * 8);
      param_1[10] = param_1[10] + 1;
      if (((lVar9 != 0) && (lVar6 = FUN_144a79cc8(lVar9), lVar6 != 0)) &&
         ((uVar1 = *param_1, (uVar1 & 1) == 0 || ((*(uint *)(lVar9 + 8) >> 0x1e & 1) == 0)))) {
        if ((uVar1 & 2) != 0) {
          cVar5 = FUN_144affb44(lVar9);
          if (cVar5 == '\0') goto LAB_145c7ad78;
          uVar1 = *param_1;
        }
        if ((uVar1 & 4) != 0) {
          if (((*(byte *)(lVar6 + 0x240) & 0x20) == 0) ||
             (local_49 = 1, (*(byte *)(lVar6 + 0x242) & 8) != 0)) {
            local_49 = 1;
            if ((*(byte *)(lVar6 + 0x241) & 0x20) == 0) {
              local_49 = (*(byte *)(lVar6 + 0x241) & 0x40) >> 6;
            }
          }
          pcVar3 = *(char **)(lVar6 + 0x2e8);
          if (*(longlong *)(lVar6 + 0xc0) == 0) {
            pcVar7 = (char *)0x0;
          }
          else {
            pcVar7 = (char *)FUN_144a8afea();
          }
          if (pcVar3 == (char *)0x0) {
            bVar12 = true;
          }
          else {
            bVar12 = *pcVar3 == '\x02';
          }
          if ((local_49 & ((pcVar7 == (char *)0x0 || pcVar3 == pcVar7) | bVar12)) != 1)
          goto LAB_145c7ad78;
        }
        lVar8 = FUN_144a8afe2(lVar6);
        if (lVar8 == lVar2) {
          if (*(longlong *)(lVar2 + 0x30) == lVar6) {
LAB_145c7ae51:
            *(longlong *)(param_1 + 0xc) = lVar9;
            param_1[8] = (uint)lVar10;
            return;
          }
          lVar6 = FUN_14059e8cc();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) goto LAB_145c7ae51;
        }
      }
LAB_145c7ad78:
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)param_1[0x10] + lVar11);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 145c7ae66 FUN_145c7ae66 body=116 status=ok
// SIG undefined FUN_145c7ae66(void)

void FUN_145c7ae66(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_145c7aedc(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148cdd1a2(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145c7aedc FUN_145c7aedc body=132 status=ok
// SIG undefined FUN_145c7aedc(void)

void FUN_145c7aedc(longlong param_1,int param_2)

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



// FUNCTION 145c7af60 FUN_145c7af60 body=29 status=ok
// SIG undefined FUN_145c7af60(void)

void FUN_145c7af60(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145c7af7e FUN_145c7af7e body=54 status=ok
// SIG undefined FUN_145c7af7e(void)

undefined8 * FUN_145c7af7e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9d2bf0;
  FUN_1461c6b46(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c7afb4 FUN_145c7afb4 body=278 status=ok
// SIG undefined FUN_145c7afb4(void)

longlong * FUN_145c7afb4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x98,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b42dfa0;
  plVar1 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  *(undefined4 *)(plVar4 + 7) = 2;
  *(undefined8 *)((longlong)plVar4 + 0x3c) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x44) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x4c) = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b42dfc0;
  plVar4[0xf] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = 0;
  plVar4[0x12] = 0;
  lVar5 = FUN_140f7223e(param_1 + 8);
  plVar4[0x11] = lVar5;
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_145c7b0ce(&local_38,plVar1);
  plVar3 = local_30;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c7b0ce FUN_145c7b0ce body=162 status=ok
// SIG undefined FUN_145c7b0ce(void)

void FUN_145c7b0ce(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145c7b10d;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145c7b10d;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145c7b10d:
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
                    /* WARNING: Could not recover jumptable at 0x000145c7b16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145c7b170 FUN_145c7b170 body=318 status=ok
// SIG undefined FUN_145c7b170(void)

undefined8 FUN_145c7b170(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_2 + 0x20) == 0) {
    uVar7 = 0;
  }
  else {
    plVar8 = *(longlong **)(param_2 + 0x18);
    lVar9 = (longlong)*(int *)(param_2 + 0x20) * 0x18;
    uVar7 = 0;
    do {
      lVar5 = plVar8[1];
      if (lVar5 == 0) {
        uVar3 = FUN_145764ed6();
        lVar5 = FUN_14477b664(uVar3);
        plVar8[1] = lVar5;
      }
      lVar4 = plVar8[2];
      if (lVar4 == 0) {
        if ((lVar5 != 0) && (*plVar8 != 0)) {
          plVar1 = *(longlong **)(lVar5 + 0xb8);
          if (plVar1 != (longlong *)0x0) {
            cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
            if (cVar2 != '\0') {
              uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
              lVar4 = FUN_144aff482(uVar3,plVar8);
              plVar8[2] = lVar4;
              if (lVar4 != 0) goto LAB_145c7b224;
              goto LAB_145c7b251;
            }
          }
          plVar8[2] = 0;
        }
      }
      else {
LAB_145c7b224:
        if (*(char *)(lVar4 + 0x30) == '\x01') {
          puVar6 = &DAT_14c9485f0;
          if (*(undefined4 **)(lVar4 + 8) != (undefined4 *)0x0) {
            puVar6 = *(undefined4 **)(lVar4 + 8);
          }
          uVar7 = 1;
          FUN_1447325ac(puVar6,local_48,1);
          FUN_145c7b2b0(param_1 + 0x38,local_48);
        }
      }
LAB_145c7b251:
      plVar8 = plVar8 + 3;
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c7b2b0 FUN_145c7b2b0 body=110 status=ok
// SIG undefined FUN_145c7b2b0(void)

void FUN_145c7b2b0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  GUID local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = FUN_145c7b320();
  iVar1 = *(int *)(lVar5 + 0xc);
  iVar2 = *(int *)(lVar5 + 8);
  iVar3 = *(int *)(lVar5 + 0x10);
  iVar4 = *(int *)(lVar5 + 0x14);
  local_38.Data1 = 0;
  local_38.Data2 = 0;
  local_38.Data3 = 0;
  local_38.Data4[0] = '\0';
  local_38.Data4[1] = '\0';
  local_38.Data4[2] = '\0';
  local_38.Data4[3] = '\0';
  local_38.Data4[4] = '\0';
  local_38.Data4[5] = '\0';
  local_38.Data4[6] = '\0';
  local_38.Data4[7] = '\0';
  CoCreateGuid(&local_38);
  *(ulong *)(lVar5 + 8) = local_38.Data1;
  *(undefined4 *)(lVar5 + 0xc) = local_38._4_4_;
  *(undefined4 *)(lVar5 + 0x10) = local_38.Data4._0_4_;
  *(undefined4 *)(lVar5 + 0x14) = local_38.Data4._4_4_;
  if (iVar4 != 0 || ((iVar1 != 0 || iVar2 != 0) || iVar3 != 0)) {
    *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c7b320 FUN_145c7b320 body=134 status=ok
// SIG undefined FUN_145c7b320(void)

longlong * FUN_145c7b320(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar4 = (longlong *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  lVar5 = (longlong)iVar2;
  if (lVar5 != 0) {
    lVar6 = lVar5 * 0x1c;
    plVar3 = plVar4;
    do {
      if (*plVar3 == *param_2) {
        if (plVar3 != (longlong *)0x0) {
          return plVar3;
        }
        break;
      }
      plVar3 = (longlong *)((longlong)plVar3 + 0x1c);
      lVar6 = lVar6 + -0x1c;
    } while (lVar6 != 0);
  }
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_145c7b3a6(param_1,iVar2);
    plVar4 = (longlong *)*param_1;
  }
  lVar5 = lVar5 * 0x1c;
  *(longlong *)((longlong)plVar4 + lVar5) = *param_2;
  puVar1 = (undefined8 *)((longlong)plVar4 + lVar5 + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)((longlong)plVar4 + lVar5 + 0x18) = 0;
  return (longlong *)((longlong)plVar4 + lVar5);
}



// FUNCTION 145c7b3a6 FUN_145c7b3a6 body=153 status=ok
// SIG undefined FUN_145c7b3a6(void)

void FUN_145c7b3a6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1c,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1c)) {
      uVar5 = uVar4 / 0x1c & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145c7b440 FUN_145c7b440 body=237 status=ok
// SIG undefined FUN_145c7b440(void)

void FUN_145c7b440(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  cVar3 = (**(code **)(*param_1 + 0x2b8))();
  if (cVar3 != '\0') {
    FUN_14135822a(param_1,2);
    lVar1 = param_1[0x20];
    lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    if (*(longlong *)(lVar4 + 0x1f0) == 0) {
      puVar5 = (undefined8 *)(lVar4 + 0x458);
    }
    else {
      puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar5;
    lVar4 = FUN_144a61814(uVar2,param_1 + 0x20);
    if (lVar4 != 0) {
      FUN_1405a424c(uVar2,param_1[0x20]);
    }
    param_1[0x20] = 0;
    lVar4 = FUN_144a61814(uVar2,param_1 + 0x1f);
    if (lVar4 != 0) {
      FUN_1405a424c(uVar2,param_1[0x1f]);
    }
    param_1[0x1f] = 0;
    FUN_145c7b52e(param_1,1);
    FUN_140898514(param_1 + 0xb,CONCAT71((int7)((ulonglong)uVar2 >> 8),lVar1 == 0) & 0xffffffff);
    return;
  }
  return;
}



// FUNCTION 145c7b52e FUN_145c7b52e body=317 status=ok
// SIG undefined FUN_145c7b52e(void)

void FUN_145c7b52e(longlong *param_1,char param_2)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if ((param_2 != '\0') && (param_1[0x20] != 0)) {
    plVar2 = param_1 + 0x20;
    lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    if (*(longlong *)(lVar4 + 0x1f0) == 0) {
      puVar5 = (undefined8 *)(lVar4 + 0x458);
    }
    else {
      puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
    }
    uVar3 = *puVar5;
    lVar4 = FUN_144a61814(uVar3,plVar2);
    if (lVar4 != 0) {
      FUN_1405a424c(uVar3,*plVar2);
    }
    *plVar2 = 0;
  }
  param_1[0x28] = -0x4010000000000000;
  *(undefined4 *)(param_1 + 0x29) = 0;
  if ((char)param_1[0x27] != '\0') {
    if ((*(longlong *)(param_1[6] + 0xb38) != 0) &&
       (plVar2 = *(longlong **)(param_1[6] + 0xb40), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))();
    }
    *(undefined1 *)(param_1 + 0x27) = 0;
  }
  if (0.0 < *(float *)((longlong)param_1 + 0xec)) {
    lVar4 = param_1[6];
    bVar1 = *(byte *)(lVar4 + 0xbd8);
    if (((int)(uint)bVar1 < *(int *)(lVar4 + 0xbf0)) &&
       (lVar4 = *(longlong *)
                 (*(longlong *)(lVar4 + 0xbe8) + 0x40 +
                 (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), lVar4 != 0)) {
      *(undefined4 *)(lVar4 + 0xc0) = 0xbf800000;
    }
    *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  }
  if (((*(byte *)(param_1 + 0x1b) & 1) != 0) && (*(char *)((longlong)param_1 + 0x14c) == -1)) {
    FUN_141131c98(param_1);
    return;
  }
  return;
}



// FUNCTION 145c7b66c FUN_145c7b66c body=40 status=ok
// SIG undefined FUN_145c7b66c(void)

undefined8 FUN_145c7b66c(undefined8 param_1,int param_2)

{
  FUN_145c7b694();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c7b694 FUN_145c7b694 body=71 status=ok
// SIG undefined FUN_145c7b694(void)

void FUN_145c7b694(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a17c930;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_141237848(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c7b6e6 FUN_145c7b6e6 body=100 status=ok
// SIG undefined FUN_145c7b6e6(void)

undefined8 * FUN_145c7b6e6(undefined8 *param_1)

{
  char cVar1;
  
  FUN_1406ed334();
  *param_1 = &PTR_FUN_14a46d8e0;
  param_1[0x1f] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  if (((*(uint *)(param_1 + 1) >> 9 & 1) != 0) || (cVar1 = FUN_145c40fca(param_1,1), cVar1 != '\0'))
  {
    param_1[0x13] = 2;
    param_1[0x14] = 2;
  }
  return param_1;
}



// FUNCTION 145c7b756 FUN_145c7b756 body=47 status=ok
// SIG undefined FUN_145c7b756(void)

void FUN_145c7b756(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14494321d(0x168);
  memset(_Dst,0,0x168);
  FUN_145c7b786(_Dst);
  return;
}



// FUNCTION 145c7b786 FUN_145c7b786 body=184 status=ok
// SIG undefined FUN_145c7b786(void)

undefined8 * FUN_145c7b786(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a588e80;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_LAB_14a588d80;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xc),4000);
  param_1[0x11] = 0x8000000000000000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_145c7b83e(param_1 + 0x19);
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 2;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  return param_1;
}



// FUNCTION 145c7b83e FUN_145c7b83e body=91 status=ok
// SIG undefined FUN_145c7b83e(void)

undefined8 * FUN_145c7b83e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_LAB_14a588dc0;
  param_1[1] = &PTR_FUN_14a588df0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar1 = FUN_1405d8a54(1);
  param_1[0xc] = uVar1;
  return param_1;
}



// FUNCTION 145c7b8a4 FUN_145c7b8a4 body=100 status=ok
// SIG undefined FUN_145c7b8a4(void)

undefined8 * FUN_145c7b8a4(undefined8 *param_1)

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
  param_1[0x16] = 0;
  *param_1 = &PTR_FUN_14a6a44b0;
  memset(param_1 + 0x18,0,0xf0);
  return param_1;
}



// FUNCTION 145c7b914 FUN_145c7b914 body=100 status=ok
// SIG undefined FUN_145c7b914(void)

undefined8 * FUN_145c7b914(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a7ff4e0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_14020fad6(param_1 + 5,L"BBGeneric");
  FUN_14020fad6(param_1 + 7,L"BrushBuilderName_Generic");
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 1;
  return param_1;
}



// FUNCTION 145c7b978 FUN_145c7b978 body=40 status=ok
// SIG undefined FUN_145c7b978(void)

undefined8 FUN_145c7b978(undefined8 param_1,int param_2)

{
  FUN_145c7b9a0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c7b9a0 FUN_145c7b9a0 body=71 status=ok
// SIG undefined FUN_145c7b9a0(void)

void FUN_145c7b9a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aaa1450;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14aa9f670;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c7b9e8 FUN_145c7b9e8 body=40 status=ok
// SIG undefined FUN_145c7b9e8(void)

undefined8 FUN_145c7b9e8(undefined8 param_1,int param_2)

{
  FUN_145c7ba10();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c7ba10 FUN_145c7ba10 body=319 status=ok
// SIG undefined FUN_145c7ba10(void)

void FUN_145c7ba10(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14aefaa40;
  param_1[5] = &PTR_FUN_14aefb610;
  param_1[6] = &PTR_LAB_14aefb650;
  param_1[0x55] = &PTR_FUN_14aefb6a0;
  param_1[0x56] = &PTR_FUN_14aefb720;
  param_1[0x57] = &PTR_FUN_14aefb730;
  param_1[0xca] = &PTR_FUN_14aefb760;
  param_1[0xcb] = &PTR_FUN_14aefb770;
  param_1[0xcc] = &PTR_FUN_14aefb790;
  param_1[0xcd] = &PTR_FUN_14aefb7b0;
  if (param_1[0xf6] != 0) {
    FUN_1400020a8();
  }
  FUN_145c7bb50(param_1 + 0xe7);
  lVar1 = param_1[0xe6];
  if (lVar1 != 0) {
    FUN_145c7bc0a(lVar1);
    FUN_1400020a8(lVar1);
  }
  lVar1 = param_1[0xe5];
  if (lVar1 != 0) {
    FUN_145820e5c(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (param_1[0xda] != 0) {
    plVar2 = param_1 + 0xde;
    if ((longlong *)param_1[0xdc] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0xdc];
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FUN_144760e21(param_1[0xd7],*(undefined4 *)(param_1 + 0xd8));
  if (param_1[0xd7] != 0) {
    FUN_1400020a8();
  }
  FUN_145bfa934(param_1);
  return;
}



// FUNCTION 145c7bb50 FUN_145c7bb50 body=69 status=ok
// SIG undefined FUN_145c7bb50(void)

void FUN_145c7bb50(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_145c7bb96(param_1 + 0x10);
  FUN_145c7bbcc(param_1);
  return;
}



// FUNCTION 145c7bb96 FUN_145c7bb96 body=53 status=ok
// SIG undefined FUN_145c7bb96(void)

void FUN_145c7bb96(longlong *param_1)

{
  FUN_145c7bc9a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c7bbcc FUN_145c7bbcc body=62 status=ok
// SIG undefined FUN_145c7bbcc(void)

void FUN_145c7bbcc(longlong *param_1)

{
  FUN_145c7bc50();
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c7bc0a FUN_145c7bc0a body=70 status=ok
// SIG undefined FUN_145c7bc0a(void)

void FUN_145c7bc0a(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(param_1 + 2);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c7bc50 FUN_145c7bc50 body=74 status=ok
// SIG undefined FUN_145c7bc50(void)

void FUN_145c7bc50(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4 * 8);
      if (lVar2 != 0) {
        if (*(longlong *)(lVar2 + 8) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  return;
}



// FUNCTION 145c7bc9a FUN_145c7bc9a body=90 status=ok
// SIG undefined FUN_145c7bc9a(void)

void FUN_145c7bc9a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145c7bcf4 FUN_145c7bcf4 body=40 status=ok
// SIG undefined FUN_145c7bcf4(void)

undefined8 FUN_145c7bcf4(undefined8 param_1,int param_2)

{
  FUN_145c7bd1c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c7bd1c FUN_145c7bd1c body=71 status=ok
// SIG undefined FUN_145c7bd1c(void)

void FUN_145c7bd1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4bac20;
  param_1[0x1f] = &PTR_LAB_14a4baf90;
  param_1[0x20] = &PTR_LAB_14a4bafc0;
  FUN_1404dbc70(param_1 + 0x21);
  FUN_1404db908(param_1);
  return;
}



// FUNCTION 145c7bd64 FUN_145c7bd64 body=63 status=ok
// SIG undefined FUN_145c7bd64(void)

longlong FUN_145c7bd64(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145c7bdb0(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xc + *param_1;
  FUN_145c7bda3(lVar2);
  return lVar2;
}



// FUNCTION 145c7bda3 FUN_145c7bda3 body=12 status=ok
// SIG undefined FUN_145c7bda3(void)

void FUN_145c7bda3(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}



// FUNCTION 145c7bdb0 FUN_145c7bdb0 body=147 status=ok
// SIG undefined FUN_145c7bdb0(void)

void FUN_145c7bdb0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145c7be44 FUN_145c7be44 body=103 status=ok
// SIG undefined FUN_145c7be44(void)

ulonglong FUN_145c7be44(longlong param_1)

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
LAB_145c7be8e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145c7be8e;
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



// FUNCTION 145c7beb4 FUN_145c7beb4 body=103 status=ok
// SIG undefined FUN_145c7beb4(void)

ulonglong FUN_145c7beb4(longlong param_1)

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
LAB_145c7befe:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145c7befe;
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



// FUNCTION 145c7bf24 FUN_145c7bf24 body=103 status=ok
// SIG undefined FUN_145c7bf24(void)

ulonglong FUN_145c7bf24(longlong param_1)

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
LAB_145c7bf6e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145c7bf6e;
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



// FUNCTION 145c7bf94 FUN_145c7bf94 body=117 status=ok
// SIG undefined FUN_145c7bf94(void)

undefined8 * FUN_145c7bf94(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 3);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 3) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  uVar3 = param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_145c7c00a(param_1 + 4,iVar1);
    FUN_14151051e(param_1[4],uVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 145c7c00a FUN_145c7c00a body=88 status=ok
// SIG undefined FUN_145c7c00a(void)

void FUN_145c7c00a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 6,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 6)) {
    uVar3 = uVar1 >> 6 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x40,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 145c7c062 FUN_145c7c062 body=40 status=ok
// SIG undefined FUN_145c7c062(void)

undefined8 FUN_145c7c062(undefined8 param_1,int param_2)

{
  FUN_14151060e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c7c092 FUN_145c7c092 body=214 status=ok
// SIG undefined FUN_145c7c092(void)

undefined8 * FUN_145c7c092(undefined8 *param_1)

{
  FUN_140fa737e();
  *param_1 = &PTR_FUN_14b836660;
  param_1[6] = &PTR_FUN_14b836920;
  param_1[7] = &PTR_LAB_14b8369b0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0xffffffff;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return param_1;
}



// FUNCTION 145c7c168 FUN_145c7c168 body=337 status=ok
// SIG undefined FUN_145c7c168(void)

void FUN_145c7c168(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145c7c2ca();
  if (param_2 != 0) {
    lVar2 = FUN_140e85284();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      FUN_14485c47a(param_1 + 0x50,param_2);
      if ((*(byte *)(param_2 + 0x65) & 0x18) == 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
      uVar3 = FUN_14479d2ce(param_1 + 0x58);
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,3,0x10);
      puVar1 = local_30;
      local_28 = 3;
      *local_30 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_30[2] = lVar4;
      *local_30 = &PTR_FUN_14b95edd0;
      local_30[3] = 0;
      FUN_14485c47a(local_30 + 3,uVar3);
      puVar1[4] = uVar3;
      FUN_1448b6402(param_2 + 0x350,local_38,&local_30);
      FUN_1449db362(&local_30);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c7c2ca FUN_145c7c2ca body=80 status=ok
// SIG undefined FUN_145c7c2ca(void)

void FUN_145c7c2ca(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x50);
  if (lVar1 != 0) {
    lVar2 = FUN_140d4a076(lVar1);
    if (lVar2 != 0) {
      FUN_141510656(lVar2,1);
    }
    FUN_145c7c31a(lVar1);
  }
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x73) = 0;
  return;
}



// FUNCTION 145c7c31a FUN_145c7c31a body=70 status=ok
// SIG undefined FUN_145c7c31a(void)

void FUN_145c7c31a(longlong param_1)

{
  undefined1 uVar1;
  
  if ((((*(longlong *)(param_1 + 0x1848) != 0) && (*(char *)(param_1 + 0x178) == '\x03')) &&
      (*(char *)(param_1 + 0x1842) == '\0')) && ((*(byte *)(param_1 + 0x65) & 2) == 0)) {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x1848) + 0xc00);
    if ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0) {
      *(undefined1 *)(param_1 + 0x1842) = 1;
      *(undefined1 *)(param_1 + 0x1841) = uVar1;
      FUN_1410e896a();
      return;
    }
  }
  return;
}



// FUNCTION 145c7c360 FUN_145c7c360 body=696 status=ok
// SIG undefined FUN_145c7c360(void)

void FUN_145c7c360(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 local_60 [8];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = FUN_14479d2ce(param_1 + 0x50);
  if (lVar3 != 0) {
    local_68 = lVar3;
    lVar4 = FUN_140d4a0e8(lVar3);
    if (lVar4 != 0) {
      uVar5 = FUN_140d4a22a();
      lVar4 = FUN_140d4a0a6(lVar4,uVar5);
      if (lVar4 != 0) {
        FUN_14485c47a(param_1 + 0x48,lVar4);
        cVar1 = *(char *)(param_1 + 0x6a);
        if (cVar1 == '\0') {
          FUN_145c7c644(lVar4,0);
        }
        else if (cVar1 == '\x01') {
          FUN_148cd4e9e(param_1);
        }
        else if (cVar1 == '\x03') {
          FUN_148cd4ada(param_1);
        }
      }
    }
    FUN_140457ffc(lVar3 + 0x350,param_1);
    plVar6 = (longlong *)FUN_14479d2ce(param_1 + 0x58);
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar2 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_58[2] = lVar7;
    *local_58 = &PTR_FUN_14b95ee40;
    local_58[3] = 0;
    FUN_14485c47a(local_58 + 3,plVar6);
    puVar2[4] = plVar6;
    FUN_1448b6402(lVar3 + 0x15a0,local_60,&local_58);
    FUN_1449db362(&local_58);
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar2 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_58[2] = lVar7;
    *local_58 = &PTR_FUN_14b95eeb0;
    local_58[3] = 0;
    FUN_14485c47a(local_58 + 3,plVar6);
    puVar2[4] = plVar6;
    FUN_1448b6402(lVar3 + 0x15c8,local_60,&local_58);
    FUN_1449db362(&local_58);
    *(undefined1 *)(param_1 + 0x69) = 0;
    if (plVar6 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar6 + 0x5d8))(plVar6);
      if (lVar3 != 0) {
        lVar4 = FUN_144a5dd5e();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          FUN_145c7c61a(lVar3,local_68);
        }
      }
    }
    FUN_1447f69b6(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c7c61a FUN_145c7c61a body=42 status=ok
// SIG undefined FUN_145c7c61a(void)

void FUN_145c7c61a(longlong *param_1,longlong param_2)

{
  if (param_2 != 0 && param_1[0x162] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000145c7c640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1040))();
    return;
  }
  return;
}



// FUNCTION 145c7c644 FUN_145c7c644 body=12 status=ok
// SIG undefined FUN_145c7c644(void)

void FUN_145c7c644(longlong param_1)

{
  FUN_145807268(param_1 + 0xa0);
  return;
}



// FUNCTION 145c7c65a FUN_145c7c65a body=146 status=ok
// SIG undefined FUN_145c7c65a(void)

void FUN_145c7c65a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b634dd0;
  plVar3 = (longlong *)param_1[0x3d];
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
  *(undefined4 *)(param_1 + 0x39) = 0;
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_145c7c6ec(param_1 + 0x30);
  plVar3 = (longlong *)param_1[0x2f];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_145a38fa8(param_1);
  return;
}



// FUNCTION 145c7c6ec FUN_145c7c6ec body=55 status=ok
// SIG undefined FUN_145c7c6ec(void)

void FUN_145c7c6ec(longlong *param_1)

{
  FUN_145c7c724(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c7c724 FUN_145c7c724 body=123 status=ok
// SIG undefined FUN_145c7c724(void)

void FUN_145c7c724(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145c7c7a0 FUN_145c7c7a0 body=40 status=ok
// SIG undefined FUN_145c7c7a0(void)

undefined8 FUN_145c7c7a0(undefined8 param_1,int param_2)

{
  FUN_145c7c7c8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c7c7c8 FUN_145c7c7c8 body=71 status=ok
// SIG undefined FUN_145c7c7c8(void)

void FUN_145c7c7c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc477e0;
  FUN_140fed6e2(param_1 + 0x10);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140fed60e(param_1);
  return;
}



// FUNCTION 145c7c810 FUN_145c7c810 body=40 status=ok
// SIG undefined FUN_145c7c810(void)

undefined8 FUN_145c7c810(undefined8 param_1,int param_2)

{
  FUN_145c7c838();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c7c838 FUN_145c7c838 body=74 status=ok
// SIG undefined FUN_145c7c838(void)

void FUN_145c7c838(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14afa9fc0;
  param_1[6] = &PTR_FUN_14afaa2a0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  lVar1 = param_1[8];
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  FUN_1410891e4(param_1);
  return;
}



// FUNCTION 145c7c882 FUN_145c7c882 body=30 status=ok
// SIG undefined FUN_145c7c882(void)

void FUN_145c7c882(longlong param_1)

{
  FUN_145c7c8a0(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145c7c8a0 FUN_145c7c8a0 body=286 status=ok
// SIG undefined FUN_145c7c8a0(void)

void FUN_145c7c8a0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
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
  iVar2 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
    iVar2 = (int)param_1[5];
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if ((iStack_34 != iVar2) || (local_40 != plVar1)) {
    do {
      do {
        FUN_141510714(*local_70 + (longlong)iStack_54 * 0xd8 + 0x98);
        local_58 = local_58 & ~local_68._4_4_;
        FUN_1449c0562(&local_68);
      } while (iStack_54 != iVar2);
    } while ((local_60 != plVar1) || (local_70 != param_1));
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_145c7c9c0(param_1);
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c7c9c0 FUN_145c7c9c0 body=53 status=ok
// SIG undefined FUN_145c7c9c0(void)

void FUN_145c7c9c0(longlong *param_1)

{
  FUN_145c7c9f6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c7c9f6 FUN_145c7c9f6 body=321 status=ok
// SIG undefined FUN_145c7c9f6(void)

void FUN_145c7c9f6(longlong *param_1)

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
      (*(code *)**(undefined8 **)(*local_68 + (longlong)iStack_4c * 0xd8))
                (*local_68 + (longlong)iStack_4c * 0xd8,0);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_145880e08(param_1,0);
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



// FUNCTION 145c7cb38 FUN_145c7cb38 body=40 status=ok
// SIG undefined FUN_145c7cb38(void)

undefined8 FUN_145c7cb38(undefined8 param_1,int param_2)

{
  FUN_145c7cb60();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c7cb60 FUN_145c7cb60 body=131 status=ok
// SIG undefined FUN_145c7cb60(void)

void FUN_145c7cb60(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14afaa830;
  plVar1 = param_1 + 0x19;
  if ((*(int *)(param_1 + 0x1a) != 0) && ((longlong *)*plVar1 != (longlong *)0x0)) {
    (**(code **)(*(longlong *)*plVar1 + 0x60))();
    if ((*(int *)(param_1 + 0x1a) != 0) &&
       (puVar2 = (undefined8 *)*plVar1, puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x1a) = 0;
    }
  }
  FUN_1449db362(plVar1);
  FUN_145c7cbe4(param_1 + 0x13);
  return;
}



// FUNCTION 145c7cbe4 FUN_145c7cbe4 body=102 status=ok
// SIG undefined FUN_145c7cbe4(void)

void FUN_145c7cbe4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
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
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000145c7cc25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c7cc4a FUN_145c7cc4a body=40 status=ok
// SIG undefined FUN_145c7cc4a(void)

undefined8 FUN_145c7cc4a(undefined8 param_1,int param_2)

{
  FUN_145c7cc72();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c7cc72 FUN_145c7cc72 body=260 status=ok
// SIG undefined FUN_145c7cc72(void)

void FUN_145c7cc72(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a46a1a0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  FUN_145c7cd76(param_1 + 0x39);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_145c7cdac(param_1 + 0x2f);
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_145c7cde2(param_1 + 0x25);
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_145c7ce18(param_1 + 0x1b);
  FUN_145c7ce4e(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_145c7ce84(param_1 + 10);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c7cd76 FUN_145c7cd76 body=53 status=ok
// SIG undefined FUN_145c7cd76(void)

void FUN_145c7cd76(longlong *param_1)

{
  FUN_141510c16();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c7cdac FUN_145c7cdac body=53 status=ok
// SIG undefined FUN_145c7cdac(void)

void FUN_145c7cdac(longlong *param_1)

{
  FUN_14151113c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c7cde2 FUN_145c7cde2 body=53 status=ok
// SIG undefined FUN_145c7cde2(void)

void FUN_145c7cde2(longlong *param_1)

{
  FUN_141510f84();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c7ce18 FUN_145c7ce18 body=53 status=ok
// SIG undefined FUN_145c7ce18(void)

void FUN_145c7ce18(longlong *param_1)

{
  FUN_145c7cf14();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c7ce4e FUN_145c7ce4e body=53 status=ok
// SIG undefined FUN_145c7ce4e(void)

void FUN_145c7ce4e(longlong *param_1)

{
  FUN_141510dcc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c7ce84 FUN_145c7ce84 body=53 status=ok
// SIG undefined FUN_145c7ce84(void)

void FUN_145c7ce84(longlong *param_1)

{
  FUN_145c7ceba();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c7ceba FUN_145c7ceba body=89 status=ok
// SIG undefined FUN_145c7ceba(void)

void FUN_145c7ceba(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
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



// FUNCTION 145c7cf14 FUN_145c7cf14 body=337 status=ok
// SIG undefined FUN_145c7cf14(void)

void FUN_145c7cf14(longlong *param_1)

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
      FUN_140a31f9c(*local_68 + (longlong)iStack_4c * 0x150 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_145c7d066(param_1);
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



// FUNCTION 145c7d066 FUN_145c7d066 body=48 status=ok
// SIG undefined FUN_145c7d066(void)

void FUN_145c7d066(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x150,8);
  }
  return;
}



// FUNCTION 145c7d096 FUN_145c7d096 body=115 status=ok
// SIG undefined FUN_145c7d096(void)

void FUN_145c7d096(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x170,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x170)) {
      uVar2 = uVar1 / 0x170 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x170,8);
  }
  return;
}



// FUNCTION 145c7d10a FUN_145c7d10a body=22 status=ok
// SIG undefined FUN_145c7d10a(void)

undefined8 FUN_145c7d10a(undefined8 param_1,undefined8 param_2)

{
  FUN_145c7d120();
  return param_2;
}



// FUNCTION 145c7d120 FUN_145c7d120 body=1003 status=ok
// SIG undefined FUN_145c7d120(void)

undefined8 FUN_145c7d120(longlong param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  longlong *plVar1;
  void *_Src;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  void *local_70;
  int local_68;
  undefined2 *local_60;
  undefined8 uStack_58;
  undefined2 *local_50;
  int iStack_48;
  int iStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x70) == 0) {
    FUN_140056680(param_2,L"{multicast delegate type}");
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
  }
  local_50 = *(undefined2 **)(*(longlong *)(param_1 + 0x70) + 0x18);
  FUN_1400021e4(&local_50,&local_60);
  FUN_140056680(&local_70);
  uVar6 = local_68 - 1;
  if (local_68 == 0) {
    uVar6 = 0;
  }
  uVar8 = (int)uStack_58 - 1;
  if ((int)uStack_58 == 0) {
    uVar8 = 0;
  }
  uVar2 = uVar8 - uVar6;
  if ((int)uVar8 <= (int)(uVar8 - uVar6)) {
    uVar2 = uVar8;
  }
  uVar3 = (ulonglong)uVar2;
  if ((int)uVar2 < 1) {
    uVar3 = 0;
  }
  uVar8 = uVar8 - (int)uVar3;
  if ((int)uVar6 < (int)uVar8) {
    uVar8 = uVar6;
  }
  iVar10 = (int)uStack_58;
  if (0 < (int)uVar8) {
    iVar10 = (int)uStack_58 - (uVar8 + (int)uVar3);
    if (iVar10 != 0) {
      memmove(local_60 + uVar3,local_60 + uVar3 + uVar8,(longlong)iVar10 * 2);
    }
    iVar10 = (int)uStack_58 - uVar8;
  }
  puVar9 = local_60;
  local_50 = local_60;
  iStack_44 = uStack_58._4_4_;
  local_60 = (undefined2 *)0x0;
  uStack_58 = 0;
  iStack_48 = iVar10;
  if ((local_70 != (void *)0x0) && (FUN_1400020a8(), local_60 != (undefined2 *)0x0)) {
    FUN_1400020a8();
  }
  lVar4 = FUN_14570ab3e(*(undefined8 *)(param_1 + 0x70));
  uVar6 = *(uint *)(*(longlong *)(param_1 + 0x70) + 0xc);
  if ((int)uVar6 < DAT_14c9647dc) {
    lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
  }
  else {
    lVar7 = 0;
  }
  if (((char)param_4 < '\0') && ((*(uint *)(lVar7 + 8) & 0x2000000) != 0)) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x20);
    if (plVar1 != (longlong *)0x0) {
      lVar4 = FUN_1449e2fb2();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        puVar11 = puVar9;
        if (iVar10 == 0) {
          puVar11 = &DAT_149dfb77a;
        }
        local_70 = (void *)plVar1[3];
        FUN_1400021e4(&local_70,&local_60);
        puVar12 = &DAT_149dfb77a;
        if ((int)uStack_58 != 0) {
          puVar12 = local_60;
        }
        uVar5 = (**(code **)(*plVar1 + 0x308))(plVar1);
        local_78 = puVar11;
        FUN_140002266(param_2,L"%s%s::F%s",uVar5,puVar12);
        if (local_60 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_145c7d2b8;
      }
    }
  }
  else {
    if ((lVar4 != 0 && (char)param_4 < '\0') && ((*(byte *)(lVar4 + 0xd4) & 0x80) == 0)) {
      FUN_1468f9fe9(&local_60,&local_50,0,&DAT_149dfb77a);
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_50 = local_60;
      iStack_48 = (int)uStack_58;
      iStack_44 = uStack_58._4_4_;
      local_60 = *(undefined2 **)(lVar4 + 0x18);
      FUN_1400021e4(&local_60,&local_70);
      FUN_1468f9fe9(&local_60,&local_70,0,&DAT_149dfb77a);
      if (local_70 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar9 = &DAT_149dfb77a;
      if ((int)uStack_58 != 0) {
        puVar9 = local_60;
      }
      puVar11 = &DAT_149dfb77a;
      if (iStack_48 != 0) {
        puVar11 = local_50;
      }
      FUN_140002266(&local_70,L"%s__%s",puVar11,puVar9);
      _Src = local_70;
      iStack_48 = local_68;
      if (local_68 == 0 && iStack_44 == 0) {
        iStack_44 = 0;
      }
      else {
        FUN_1446dd670(&local_50,local_68);
        if (local_68 != 0) {
          memcpy(local_50,_Src,(longlong)local_68 * 2);
        }
      }
      if (local_70 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_60 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    if ((param_4 & 8) != 0) {
      FUN_1400020e8(&local_50,L"__MulticastDelegate",0x13);
    }
  }
  FUN_140056680(&local_60,&DAT_149e25bf0);
  FUN_144a7dea0(param_2,&local_60,&local_50);
  puVar9 = local_50;
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
    puVar9 = local_50;
  }
LAB_145c7d2b8:
  if (puVar9 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar9);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c7d50e FUN_145c7d50e body=216 status=ok
// SIG undefined FUN_145c7d50e(void)

void FUN_145c7d50e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(longlong **)*param_2;
  local_30 = (longlong *)((undefined8 *)*param_2)[1];
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  uVar4 = (**(code **)(*local_38 + 0x40))();
  iVar5 = FUN_140b6c20e(param_1 + 0x6e,uVar4,&local_38);
  plVar3 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (iVar5 == -1) {
    if (param_1[0x24] != 0) {
      FUN_145c7d5e8(param_1[0x24],param_2);
    }
    FUN_145c7d76c(param_1);
    (**(code **)(*param_1 + 0x60))(param_1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c7d5e8 FUN_145c7d5e8 body=185 status=ok
// SIG undefined FUN_145c7d5e8(void)

void FUN_145c7d5e8(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_1414e62ca(*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    local_38 = 0;
    uStack_30 = 0;
    FUN_14101cdd4(*param_2 + 0x20,&DAT_14cb977e0,&local_38);
    if (1 < (int)uStack_30) {
      cVar1 = FUN_145c7d6a2(param_1,&local_38);
      if (cVar1 == '\0') {
        FUN_145c7de4a(param_1,param_2);
      }
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  cVar1 = FUN_145c6571c(param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_145c65e6c(param_2);
    if (cVar1 != '\0') {
      FUN_145c65b22(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c7d6a2 FUN_145c7d6a2 body=200 status=ok
// SIG undefined FUN_145c7d6a2(void)

undefined8 FUN_145c7d6a2(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (1 < *(int *)(param_2 + 1)) {
    puVar4 = DAT_14cb97930;
    if (DAT_14cb97938 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140002266(local_38,L"%s.%s",puVar4,*param_2);
    local_48 = 0;
    uStack_40 = 0;
    bVar2 = FUN_14101cdd4(*(longlong *)(param_1 + 8) + 0x80,local_38,&local_48);
    bVar1 = 1 < (int)uStack_40;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    if ((bVar2 & bVar1) != 0) {
      uVar3 = 1;
      goto LAB_145c7d746;
    }
  }
  uVar3 = 0;
LAB_145c7d746:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 145c7d76c FUN_145c7d76c body=1092 status=ok
// SIG undefined FUN_145c7d76c(void)

void FUN_145c7d76c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  longlong *plVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined4 local_d0;
  longlong local_c8 [5];
  undefined8 local_a0;
  undefined4 local_98;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14101cf30(param_1,&local_88);
  if ((longlong)(int)local_80 == 0) {
    uVar10 = 0;
    bVar16 = false;
  }
  else {
    plVar15 = local_88 + (longlong)(int)local_80 * 2;
    iVar6 = 1;
    plVar14 = local_88;
    do {
      lVar12 = *plVar14;
      plVar4 = (longlong *)plVar14[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_c8[2] = 0;
      local_c8[3] = 0;
      cVar5 = FUN_14101cdd4(lVar12 + 0x20,&DAT_14cb97680,local_c8 + 2);
      if (cVar5 == '\0') {
        bVar13 = 1;
      }
      else {
        iVar6 = FUN_145c7dbb1(local_c8 + 2);
        bVar13 = (byte)iVar6;
      }
      if (local_c8[2] != 0) {
        FUN_1400020a8();
      }
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
      plVar14 = plVar14 + 2;
    } while ((bVar13 & plVar14 != plVar15) != 0);
    uVar10 = local_80 & 0xffffffff;
    bVar16 = iVar6 == 0;
  }
  FUN_14101cee4(local_88,uVar10);
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (bVar16) {
    uVar9 = 0;
    lVar12 = local_70;
  }
  else {
    plVar14 = (longlong *)(param_1 + 0x428);
    lVar3 = param_1 + 0x438;
    local_c8[2] = 0x100000000;
    local_c8[4] = 0xffffffff;
    local_a0 = (longlong *)((ulonglong)local_a0 & 0xffffffff00000000);
    iVar6 = 0;
    local_c8[3] = lVar3;
    if (*(int *)(param_1 + 0x450) != 0) {
      FUN_1449c0562(local_c8 + 2);
      iVar6 = *(int *)(param_1 + 0x450);
    }
    local_70 = local_c8[4];
    lVar12 = local_70;
    local_68 = (undefined4)local_a0;
    local_64 = local_a0._4_4_;
    local_80 = local_c8[2];
    local_78 = local_c8[3];
    local_70._4_4_ = (int)((ulonglong)local_c8[4] >> 0x20);
    local_88 = plVar14;
    if ((local_70._4_4_ != iVar6) || (uVar9 = 1, local_c8[3] != lVar3)) {
      uVar9 = 1;
      iVar8 = local_70._4_4_;
      local_70 = lVar12;
      do {
        lVar12 = *local_88;
        lVar11 = (longlong)iVar8 * 0x30;
        local_c8[2] = *(ulonglong *)(lVar12 + lVar11);
        local_c8[3] = *(longlong *)(lVar12 + 8 + lVar11);
        if (local_c8[3] != 0) {
          LOCK();
          *(int *)(local_c8[3] + 8) = *(int *)(local_c8[3] + 8) + 1;
          UNLOCK();
        }
        lVar12 = lVar12 + lVar11;
        local_c8[4] = *(longlong *)(lVar12 + 0x10);
        local_a0 = *(longlong **)(lVar12 + 0x18);
        if (local_a0 == (longlong *)0x0) {
          local_98 = *(undefined4 *)(lVar12 + 0x20);
LAB_145c7db7b:
          bVar16 = true;
          plVar15 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
          UNLOCK();
          local_98 = *(undefined4 *)(lVar12 + 0x20);
          if (local_a0 == (longlong *)0x0) goto LAB_145c7db7b;
          LOCK();
          *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
          UNLOCK();
          bVar16 = false;
          plVar15 = local_a0;
        }
        local_c8[0] = 0;
        local_c8[1] = 0;
        cVar5 = FUN_14101cdd4(local_c8[4] + 0x20,&DAT_14cb97680,local_c8);
        if (cVar5 == '\0') {
          cVar5 = '\x01';
        }
        else {
          uVar9 = FUN_145c7dbb1(local_c8);
          cVar5 = (char)uVar9;
        }
        if (local_c8[0] != 0) {
          FUN_1400020a8();
        }
        if (!bVar16) {
          LOCK();
          plVar4 = plVar15 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        FUN_145c7dde4(local_c8 + 2);
        lVar12 = local_70;
        if (cVar5 == '\0') break;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar8 = local_70._4_4_;
      } while (((local_70._4_4_ != iVar6) || (local_78 != lVar3)) ||
              (lVar12 = local_70, local_88 != plVar14));
    }
  }
  local_70 = lVar12;
  lVar12 = *(longlong *)(param_1 + 0x60);
  if (lVar12 != 0) {
    uVar7 = *(undefined4 *)(lVar12 + 0x58);
    local_d8 = (undefined8 *)0x0;
    local_d0 = 0;
    FUN_1446efa72(&local_d8,0,3,0x10);
    local_d0 = 3;
    *local_d8 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_d8[2] = lVar11;
    *local_d8 = &PTR_FUN_14b4f1b10;
    local_d8[3] = param_1;
    *(undefined4 *)(local_d8 + 4) = uVar7;
    uVar7 = FUN_1414e62ca(param_1);
    FUN_145c7dc74(lVar12,uVar9,uVar7,&local_d8);
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c7dbb1 FUN_145c7dbb1 body=195 status=ok
// SIG undefined FUN_145c7dbb1(void)

bool FUN_145c7dbb1(undefined8 *param_1)

{
  longlong lVar1;
  undefined2 *puVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ushort uVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  
  if (*(int *)(param_1 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_1;
  }
  lVar1 = 0;
  while( true ) {
    uVar3 = *(ushort *)((longlong)puVar2 + lVar1);
    uVar6 = (ulonglong)uVar3;
    uVar7 = *(ushort *)((longlong)L"Enabled" + lVar1);
    if (uVar3 != uVar7) break;
    if (uVar3 == 0) {
      return true;
    }
LAB_145c7dbe8:
    lVar1 = lVar1 + 2;
  }
  if ((uVar7 | uVar3) < 0x80) {
    uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    uVar9 = (ulonglong)uVar7;
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar9]) goto LAB_145c7dbe8;
  }
  bVar10 = true;
  if (uVar3 != uVar7) {
    lVar1 = 0;
    while( true ) {
      uVar3 = *(ushort *)((longlong)puVar2 + lVar1);
      uVar4 = (uint)uVar3;
      uVar7 = *(ushort *)((longlong)L"/Disabled" + lVar1 + 2);
      uVar8 = (uint)uVar7;
      if (uVar3 != uVar7) {
        if ((uVar7 | uVar3) < 0x80) {
          uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar3];
          uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar7];
          if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar7]) goto LAB_145c7dc3e;
        }
        iVar5 = uVar4 - uVar8;
        goto LAB_145c7dc6a;
      }
      if (uVar3 == 0) break;
LAB_145c7dc3e:
      lVar1 = lVar1 + 2;
    }
    iVar5 = 0;
LAB_145c7dc6a:
    bVar10 = iVar5 != 0;
  }
  return bVar10;
}



// FUNCTION 145c7dc74 FUN_145c7dc74 body=367 status=ok
// SIG undefined FUN_145c7dc74(void)

void FUN_145c7dc74(longlong param_1,int param_2,char param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined1 *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(int *)(param_1 + 0x58) == param_2) || (*(int *)(param_1 + 0x58) = param_2, param_3 == '\0')
     ) {
    if (((int)param_4[1] != 0) && (plVar1 = (longlong *)*param_4, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x60))(plVar1,1);
    }
  }
  else {
    local_98 = 0;
    local_90 = 0;
    local_a0 = param_1;
    FUN_14114e6dc(&local_98,param_4);
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    FUN_1446efa72(&local_88,0,3,0x10);
    local_80 = 3;
    *local_88 = &PTR_LAB_149e06450;
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
    local_88[2] = lVar3;
    *local_88 = &PTR_FUN_14b4f1c80;
    local_88[3] = local_a0;
    local_88[4] = local_98;
    local_98 = 0;
    *(undefined4 *)(local_88 + 5) = local_90;
    local_90 = 0;
    local_68 = 0;
    local_58 = &PTR_LAB_14b4f1cf0;
    local_78[0] = &LAB_143f420e0;
    local_50 = param_1;
    FUN_145c66056(param_1,local_78,0,&local_88);
    FUN_1449db362(&local_98);
  }
  FUN_1449db362(param_4);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c7dde4 FUN_145c7dde4 body=101 status=ok
// SIG undefined FUN_145c7dde4(void)

void FUN_145c7dde4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000145c7de45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c7de4a FUN_145c7de4a body=522 status=ok
// SIG undefined FUN_145c7de4a(void)

void FUN_145c7de4a(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  undefined8 uStack_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar5 = FUN_1414e62ca(*(undefined8 *)(param_1 + 8));
  if (cVar5 == '\0') goto LAB_145c7dfab;
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  FUN_14101cdd4(*param_2 + 0x20,&DAT_14cb977e0,&local_48);
  puVar8 = &DAT_149dfb77a;
  if ((int)uStack_40 != 0) {
    puVar8 = local_48;
  }
  puVar7 = &DAT_149dfb77a;
  if (DAT_14cb97938 != 0) {
    puVar7 = DAT_14cb97930;
  }
  FUN_140002266(local_38,L"%s.%s",puVar7,puVar8);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)*param_2;
  plVar6 = (longlong *)((undefined8 *)*param_2)[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_48);
  FUN_141511334(*(undefined8 *)(param_1 + 8),local_38,&local_48);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (plVar6 != (longlong *)0x0) {
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
  }
  cVar5 = FUN_145c65e6c(param_2);
  if (cVar5 != '\0') {
    uVar4 = *(undefined8 *)*param_2;
    plVar3 = (longlong *)((undefined8 *)*param_2)[1];
    if (plVar3 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x160) = uVar4;
      plVar6 = *(longlong **)(param_1 + 0x168);
      if (plVar6 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x168) = 0;
LAB_145c7e00a:
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
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
        if (plVar3 != (longlong *)0x0) goto LAB_145c7df92;
      }
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *(undefined8 *)(param_1 + 0x160) = uVar4;
      plVar6 = *(longlong **)(param_1 + 0x168);
      if (plVar3 == plVar6) {
        LOCK();
        plVar6 = plVar3 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      else {
        *(longlong **)(param_1 + 0x168) = plVar3;
        if (plVar6 != (longlong *)0x0) goto LAB_145c7e00a;
      }
LAB_145c7df92:
      LOCK();
      plVar6 = plVar3 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
LAB_145c7dfab:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c7e056 FUN_145c7e056 body=414 status=ok
// SIG undefined FUN_145c7e056(void)

void FUN_145c7e056(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 0x110);
  cVar3 = FUN_144a8e69e(plVar1);
  if (cVar3 != '\0') {
    lVar5 = *plVar1;
    if (*(int *)(lVar5 + 0x58) != 0) {
      puVar2 = *(undefined8 **)(lVar5 + 0x50);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,0);
        FUN_1446efa72((longlong *)(lVar5 + 0x50),0,0,0x10);
        *(undefined4 *)(lVar5 + 0x58) = 0;
        lVar5 = *plVar1;
      }
    }
    if (*(int *)(lVar5 + 0x68) != 0) {
      puVar2 = *(undefined8 **)(lVar5 + 0x60);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,0);
        FUN_1446efa72((longlong *)(lVar5 + 0x60),0,0,0x10);
        *(undefined4 *)(lVar5 + 0x68) = 0;
        lVar5 = *plVar1;
      }
    }
    if (*(int *)(lVar5 + 0x78) != 0) {
      puVar2 = *(undefined8 **)(lVar5 + 0x70);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,0);
        FUN_1446efa72((longlong *)(lVar5 + 0x70),0,0,0x10);
        *(undefined4 *)(lVar5 + 0x78) = 0;
        lVar5 = *plVar1;
      }
    }
    if (*(int *)(lVar5 + 0x88) != 0) {
      puVar2 = *(undefined8 **)(lVar5 + 0x80);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,0);
        FUN_1446efa72((longlong *)(lVar5 + 0x80),0,0,0x10);
        *(undefined4 *)(lVar5 + 0x88) = 0;
      }
    }
    uVar4 = FUN_14479d2ce(param_1 + 0x30);
    lVar5 = FUN_145c7e216(uVar4);
    if (lVar5 != 0) {
      FUN_141505908(local_38,plVar1);
      FUN_145c7e324(lVar5,local_38);
      local_40 = 0;
      FUN_1403c75f4(plVar1,&local_40);
      FUN_144a61ac8(&local_40);
    }
  }
  FUN_1408f578a(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c7e1f6 FUN_145c7e1f6 body=31 status=ok
// SIG undefined FUN_145c7e1f6(void)

undefined8 FUN_145c7e1f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c7e216 FUN_145c7e216 body=24 status=ok
// SIG undefined FUN_145c7e216(void)

undefined8 FUN_145c7e216(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  longlong lStack_18;
  ulonglong uStack_10;
  
  if ((param_1 == 0) || (lVar1 = *(longlong *)(param_1 + 0x1f0), lVar1 == 0)) {
    return 0;
  }
  uStack_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lStack_18 = FUN_145978bf0();
  if ((lStack_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lStack_18);
  }
  uVar2 = FUN_145c7e2d8(lVar1 + 0x100,&lStack_18);
  if ((uStack_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c7e22e FUN_145c7e22e body=31 status=ok
// SIG undefined FUN_145c7e22e(void)

undefined8 FUN_145c7e22e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c7e24e FUN_145c7e24e body=31 status=ok
// SIG undefined FUN_145c7e24e(void)

undefined8 FUN_145c7e24e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c7e26e FUN_145c7e26e body=105 status=ok
// SIG undefined FUN_145c7e26e(void)

void FUN_145c7e26e(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145978bf0();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_145c7e2d8(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c7e2d8 FUN_145c7e2d8 body=76 status=ok
// SIG undefined FUN_145c7e2d8(void)

void FUN_145c7e2d8(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145978bf0();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_145c7e315;
    }
  }
  lVar2 = 0;
LAB_145c7e315:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 145c7e324 FUN_145c7e324 body=599 status=ok
// SIG undefined FUN_145c7e324(void)

void FUN_145c7e324(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_a8 [40];
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 0x40);
  lVar6 = (longlong)iVar2;
  if (lVar6 != 0) {
    local_70 = (longlong *)*plVar1;
    local_58 = (longlong *)*local_70;
    if (((local_58 == (longlong *)0x0) || (local_70[1] == -1)) || (*local_58 != local_70[1])) {
      local_58 = (longlong *)0x0;
      local_80 = 0;
    }
    else {
      *(int *)(local_58 + 0x21) = (int)local_58[0x21] + 1;
      local_80 = (uint)CONCAT71((int7)((ulonglong)local_58 >> 8),1);
    }
    FUN_144a61ac8(&local_58);
    local_60 = local_70 + 3;
    local_7c = 0;
    local_74 = 0;
    do {
      local_68 = (longlong)local_74;
      iVar5 = local_74 + 1;
      local_78 = iVar5;
      if (iVar5 < iVar2) {
        local_78 = iVar2;
      }
      lVar8 = local_68 + 1;
      bVar3 = lVar8 < lVar6;
      iVar4 = local_78;
      if (lVar8 < lVar6) {
        plVar7 = local_60 + local_68 * 2;
        do {
          local_58 = (longlong *)plVar7[-1];
          iVar4 = iVar5;
          if (((local_58 == (longlong *)0x0) || (*plVar7 == -1)) || (*local_58 != *plVar7)) {
            local_58 = (longlong *)0x0;
            FUN_144a61ac8(&local_58);
            if ((local_80 & 1) != 0) break;
          }
          else {
            *(int *)(local_58 + 0x21) = (int)local_58[0x21] + 1;
            FUN_144a61ac8(&local_58);
            if ((local_80 & 1) == 0) break;
          }
          lVar8 = lVar8 + 1;
          iVar5 = iVar5 + 1;
          plVar7 = plVar7 + 2;
          bVar3 = lVar8 < lVar6;
          iVar4 = local_78;
        } while (lVar8 < lVar6);
      }
      local_78 = iVar4;
      iVar5 = local_78 - local_74;
      if ((local_80 & 1) == 0) {
        FUN_141347b7f(local_70 + local_68 * 2,iVar5);
      }
      else {
        if (local_7c != local_74) {
          memmove(local_70 + (longlong)local_7c * 2,local_70 + local_68 * 2,(longlong)iVar5 << 4);
        }
        local_7c = local_7c + iVar5;
      }
      local_80 = local_80 ^ 1;
      local_74 = local_78;
    } while (bVar3);
    *(int *)(param_1 + 0x40) = local_7c;
  }
  FUN_141511eda(&local_58,param_2);
  iVar2 = *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x44) < iVar2 + 1U) {
    FUN_141511ef8(plVar1,iVar2);
  }
  lVar6 = *plVar1;
  lVar8 = (longlong)iVar2 * 0x10;
  *(undefined8 *)(lVar6 + lVar8) = 0;
  *(undefined8 *)(lVar6 + 8 + lVar8) = 0xffffffffffffffff;
  *(longlong **)(lVar6 + lVar8) = local_58;
  *(undefined8 *)(lVar6 + 8 + lVar8) = local_50;
  FUN_144a61ac8(param_2);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c7e57c FUN_145c7e57c body=38 status=ok
// SIG undefined FUN_145c7e57c(void)

undefined8 FUN_145c7e57c(undefined8 param_1,int param_2)

{
  FUN_145c7e5a2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c7e5a2 FUN_145c7e5a2 body=201 status=ok
// SIG undefined FUN_145c7e5a2(void)

void FUN_145c7e5a2(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  *param_1 = &PTR_LAB_14a1e7f80;
  iVar1 = *(int *)(param_1 + 0x14);
  if ((longlong)iVar1 != 0) {
    lVar2 = param_1[0x13];
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar2 + lVar4);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)((longlong)param_1 + 0xa4) != 0) {
    FUN_145c7e66c(param_1 + 0x13,0);
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (*(int *)((longlong)param_1 + 0xb4) != 0) {
    FUN_145c7e66c(param_1 + 0x15,0);
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x000145c7e656. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
  return;
}



// FUNCTION 145c7e66c FUN_145c7e66c body=95 status=ok
// SIG undefined FUN_145c7e66c(void)

void FUN_145c7e66c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 145c7e6cc FUN_145c7e6cc body=134 status=ok
// SIG undefined FUN_145c7e6cc(void)

void FUN_145c7e6cc(longlong param_1)

{
  wchar_t *pwVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    pwVar1 = L"UserNotLoggedIn";
    if (*(char *)(param_1 + 0x38) != '\0') {
      pwVar1 = L"";
    }
    FUN_140056680(local_28,pwVar1);
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x228))
              (*(longlong **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined1 *)(param_1 + 0x38),local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c7e760 FUN_145c7e760 body=187 status=ok
// SIG undefined FUN_145c7e760(void)

void FUN_145c7e760(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

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
        goto LAB_145c7e803;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145c7e803:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145c7e81c FUN_145c7e81c body=40 status=ok
// SIG undefined FUN_145c7e81c(void)

undefined8 FUN_145c7e81c(undefined8 param_1,int param_2)

{
  FUN_145c7e844();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c7e844 FUN_145c7e844 body=476 status=ok
// SIG undefined FUN_145c7e844(void)

void FUN_145c7e844(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba8fa00;
  param_1[5] = &PTR_FUN_14ba8fca0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_145c7ead4(param_1[0x20],*(undefined4 *)(param_1 + 0x21));
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_145c7ea20(param_1[0x1e],*(undefined4 *)(param_1 + 0x1f));
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_145c7eb13(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_145c7eb52(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_145c7ea76(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145c7ea4b(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145c7eaa3(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c7ea20 FUN_145c7ea20 body=43 status=ok
// SIG undefined FUN_145c7ea20(void)

void FUN_145c7ea20(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1490713ee(param_1);
    param_1 = param_1 + 0x690;
  }
  return;
}



// FUNCTION 145c7ea4b FUN_145c7ea4b body=43 status=ok
// SIG undefined FUN_145c7ea4b(void)

void FUN_145c7ea4b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_149071688(param_1);
    param_1 = param_1 + 0x2e8;
  }
  return;
}



// FUNCTION 145c7ea76 FUN_145c7ea76 body=45 status=ok
// SIG undefined FUN_145c7ea76(void)

void FUN_145c7ea76(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 145c7eaa3 FUN_145c7eaa3 body=49 status=ok
// SIG undefined FUN_145c7eaa3(void)

void FUN_145c7eaa3(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c7ead4 FUN_145c7ead4 body=63 status=ok
// SIG undefined FUN_145c7ead4(void)

void FUN_145c7ead4(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c7eb13 FUN_145c7eb13 body=63 status=ok
// SIG undefined FUN_145c7eb13(void)

void FUN_145c7eb13(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x70);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-10] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c7eb52 FUN_145c7eb52 body=69 status=ok
// SIG undefined FUN_145c7eb52(void)

void FUN_145c7eb52(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x90);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0xb] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c7eb98 FUN_145c7eb98 body=194 status=ok
// SIG undefined FUN_145c7eb98(void)

void FUN_145c7eb98(longlong *param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  
  FUN_144a8c35e();
  (**(code **)(*param_1 + 0x3b0))(param_1,1);
  param_1[0x105] = DAT_14c872be0;
  plVar1 = param_1 + 0x108;
  *(undefined4 *)(param_1 + 0x109) = 0;
  if (*(int *)((longlong)param_1 + 0x84c) < 0) {
    FUN_14892e9a4(plVar1);
  }
  lVar9 = param_1[0x107];
  if ((longlong)(int)lVar9 != 0) {
    lVar5 = param_1[0x106];
    lVar10 = 0;
    do {
      iVar4 = (int)param_1[0x109];
      *(uint *)(param_1 + 0x109) = iVar4 + 1U;
      if (*(uint *)((longlong)param_1 + 0x84c) < iVar4 + 1U) {
        FUN_14892e9d4(plVar1,iVar4);
      }
      puVar2 = (undefined4 *)(lVar5 + lVar10);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      puVar3 = (undefined4 *)(*plVar1 + (longlong)iVar4 * 0x10);
      *puVar3 = *puVar2;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      lVar10 = lVar10 + 0x18;
    } while ((longlong)(int)lVar9 * 0x18 != lVar10);
  }
  return;
}



// FUNCTION 145c7ec5a FUN_145c7ec5a body=40 status=ok
// SIG undefined FUN_145c7ec5a(void)

undefined8 FUN_145c7ec5a(undefined8 param_1,int param_2)

{
  FUN_145c7ec82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c7ec82 FUN_145c7ec82 body=315 status=ok
// SIG undefined FUN_145c7ec82(void)

void FUN_145c7ec82(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aece700;
  FUN_145c7edbd(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
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
  FUN_144760e21(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c7edbd FUN_145c7edbd body=91 status=ok
// SIG undefined FUN_145c7edbd(void)

void FUN_145c7edbd(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x40);
    do {
      if (plVar2[4] != 0) {
        plVar1 = plVar2 + 8;
        if ((longlong *)plVar2[6] != (longlong *)0x0) {
          plVar1 = (longlong *)plVar2[6];
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 0x2c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c7ee18 FUN_145c7ee18 body=132 status=ok
// SIG undefined FUN_145c7ee18(void)

void FUN_145c7ee18(longlong param_1,int param_2)

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



// FUNCTION 145c7ee9e FUN_145c7ee9e body=250 status=ok
// SIG undefined FUN_145c7ee9e(void)

void FUN_145c7ee9e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = (int)param_2[1];
    if (iVar2 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    iVar2 = FUN_144a49b4a(iVar1,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      iVar1 = (int)param_2[1];
LAB_145c7ef0d:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x20);
      iVar2 = *(int *)(*param_1 + 8 + (longlong)iVar2 * 0x20);
      if (iVar2 == iVar1) {
        if (1 < iVar1) {
          lVar5 = 0;
          do {
            uVar7 = *(ushort *)(*plVar3 + lVar5);
            uVar8 = (ulonglong)uVar7;
            uVar6 = *(ushort *)(*param_2 + lVar5);
            if (uVar7 == uVar6) {
              if (uVar7 == 0) break;
            }
            else {
              if (0x7f < (uVar6 | uVar7)) goto LAB_145c7ef63;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar9 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar9]) goto LAB_145c7ef63;
            }
            lVar5 = lVar5 + 2;
          } while( true );
        }
        goto LAB_145c7ef86;
      }
      if (iVar2 + iVar1 == 1) goto LAB_145c7ef86;
      goto LAB_145c7ef69;
    }
  }
  return;
LAB_145c7ef63:
  if (uVar7 == uVar6) {
LAB_145c7ef86:
    FUN_145c7ef98(param_1);
    return;
  }
LAB_145c7ef69:
  iVar2 = (int)plVar3[3];
  if (iVar2 == -1) {
    return;
  }
  goto LAB_145c7ef0d;
}



// FUNCTION 145c7ef98 FUN_145c7ef98 body=89 status=ok
// SIG undefined FUN_145c7ef98(void)

void FUN_145c7ef98(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_145c7eff2();
  return;
}



// FUNCTION 145c7eff2 FUN_145c7eff2 body=51 status=ok
// SIG undefined FUN_145c7eff2(void)

void FUN_145c7eff2(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_145c7f026(param_1,param_2);
  return;
}



// FUNCTION 145c7f026 FUN_145c7f026 body=112 status=ok
// SIG undefined FUN_145c7f026(void)

void FUN_145c7f026(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 145c7f096 FUN_145c7f096 body=40 status=ok
// SIG undefined FUN_145c7f096(void)

undefined8 FUN_145c7f096(undefined8 param_1,int param_2)

{
  FUN_145c7f0be();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c7f0be FUN_145c7f0be body=112 status=ok
// SIG undefined FUN_145c7f0be(void)

void FUN_145c7f0be(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4c8490;
  param_1[0x72] = &PTR_LAB_14b4c8b90;
  FUN_145c7f12e(param_1 + 0x8c);
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x88);
  FUN_1449db362(param_1 + 0x86);
  FUN_1449db362(param_1 + 0x84);
  FUN_1458da08e(param_1);
  return;
}



// FUNCTION 145c7f12e FUN_145c7f12e body=80 status=ok
// SIG undefined FUN_145c7f12e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c7f12e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_145c7f17e(param_1 + 6);
  *param_1 = &PTR_FUN_14a5af930;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a184370;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 3)) {
  case 1:
    return;
  case 2:
    param_1[1] = switchD_1458da17c::caseD_0;
    param_1[2] = (undefined *)0x1470afba2;
    LOCK();
    FUN_1470afba4 = FUN_1470afba4 + 1;
    UNLOCK();
    return;
  case 3:
    *(undefined4 *)(param_1 + 1) = 0x4053b5c6;
    return;
  }
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x00014053b5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c7f17e FUN_145c7f17e body=103 status=ok
// SIG undefined FUN_145c7f17e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c7f17e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a5af930;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a184370;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 3)) {
  case 1:
    return;
  case 2:
    param_1[1] = switchD_1458da17c::caseD_0;
    param_1[2] = (undefined *)0x1470afba2;
    LOCK();
    FUN_1470afba4 = FUN_1470afba4 + 1;
    UNLOCK();
    return;
  case 3:
    *(undefined4 *)(param_1 + 1) = 0x4053b5c6;
    return;
  }
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x00014053b5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c7f1e6 FUN_145c7f1e6 body=239 status=ok
// SIG undefined FUN_145c7f1e6(void)

void FUN_145c7f1e6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145c7f2d6(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c7f2d6 FUN_145c7f2d6 body=660 status=ok
// SIG undefined FUN_145c7f2d6(void)

void FUN_145c7f2d6(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  code *local_60;
  undefined4 local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_141512256(param_1 + 0x7c0);
  FUN_141512256(param_1 + 0x7b0);
  lVar4 = FUN_14151233a();
  if (lVar4 == 0) {
    if (param_3 != 0) {
      lVar4 = FUN_1402095ca();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
        iVar1 = *(int *)(param_3 + 0x1ec0);
        if ((longlong)iVar1 != 0) {
          lVar4 = *(longlong *)(param_3 + 0x1eb8);
          lVar8 = 0;
          do {
            if ((*(int *)(lVar4 + 8 + lVar8) != 0) &&
               (plVar2 = *(longlong **)(lVar4 + lVar8), plVar2 != (longlong *)0x0)) {
              cVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
              if (cVar3 != '\0') goto LAB_145c7f34f;
            }
            lVar8 = lVar8 + 0x10;
          } while ((longlong)iVar1 * 0x10 != lVar8);
        }
        local_60 = FUN_145c7f56c;
        local_58 = 0;
        FUN_148d2200e(param_3 + 0x1eb8,local_50,param_1);
      }
    }
  }
  else {
    lVar8 = FUN_140cf8aa6(lVar4);
    FUN_145c7f56c(param_1,0,lVar4);
    cVar3 = FUN_1449ce79a(lVar4);
    if (lVar8 != 0 && cVar3 == '\x01') {
      local_60 = (code *)0x0;
      FUN_14485c47a(&local_60,lVar8);
      lVar5 = FUN_148d2de7e(param_1 + 0x760,(uint)((ulonglong)local_60 >> 0x20) ^ (uint)local_60,
                            &local_60);
      if ((longlong)*(int *)(param_1 + 0x7c8) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x7c0);
        lVar6 = (longlong)*(int *)(param_1 + 0x7c8) << 3;
        do {
          cVar3 = FUN_14088ccfe(lVar7,lVar8);
          if (cVar3 != '\0') goto LAB_145c7f45e;
          lVar7 = lVar7 + 8;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
      local_60 = (code *)0x0;
      FUN_14485c47a(&local_60,lVar8);
      iVar1 = *(int *)(param_1 + 0x7c8);
      *(uint *)(param_1 + 0x7c8) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x7cc) < iVar1 + 1U) {
        FUN_145dce618(param_1 + 0x7c0,iVar1);
      }
      *(code **)(*(longlong *)(param_1 + 0x7c0) + (longlong)iVar1 * 8) = local_60;
      if (*(char *)(param_1 + 0x848) == '\x02') {
        FUN_148d2210e(param_1,lVar8);
      }
LAB_145c7f45e:
      FUN_14412497a(param_1,lVar4,lVar5);
      FUN_144124014(param_1,lVar8);
      if (param_2 != 0) {
        lVar4 = FUN_140fe7df8();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          local_60 = (code *)0x0;
          FUN_14485c47a(&local_60,param_2);
          FUN_148d2e3be(lVar5 + 0x10,&local_60);
        }
      }
    }
  }
LAB_145c7f34f:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c7f56c FUN_145c7f56c body=549 status=ok
// SIG undefined FUN_145c7f56c(void)

void FUN_145c7f56c(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 != 0) {
    FUN_140457ffc(param_2 + 0x1eb8,param_1);
  }
  if (param_3 != 0) {
    plVar1 = (longlong *)(param_1 + 0x760);
    lVar2 = param_1 + 0x770;
    local_68 = (undefined8 *)&DAT_100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    iVar7 = 0;
    local_60 = lVar2;
    if (*(int *)(param_1 + 0x788) != 0) {
      FUN_1449c0562(&local_68);
      iVar7 = *(int *)(param_1 + 0x788);
    }
    local_78 = local_58;
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_88 = local_68;
    local_80 = local_60;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar5 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar7) || (local_78 = uVar4, local_60 != lVar2)) {
      do {
        local_78 = uVar4;
        lVar6 = *local_90;
        lVar3 = lVar6 + (longlong)iVar5 * 0x48;
        local_a0 = FUN_14479d2ce(lVar3);
        if ((local_a0 != 0) &&
           ((*(char *)(lVar6 + 0x39 + (longlong)iVar5 * 0x48) != '\0' &&
            (lVar6 = FUN_140cf8aa6(param_3), local_a0 == lVar6)))) {
          *(undefined1 *)(lVar3 + 0x39) = 0;
          *(undefined4 *)(lVar3 + 0x10) = 0;
          if (*(int *)(lVar3 + 0x14) != 0) {
            FUN_148d2e4f6(lVar3 + 8);
          }
          *(undefined4 *)(lVar3 + 0x20) = 0;
          if (*(int *)(lVar3 + 0x24) != 0) {
            FUN_148d2e4f6(lVar3 + 0x18);
          }
          lVar2 = local_a0;
          local_98 = 0;
          FUN_14485c47a(&local_98,local_a0);
          local_68 = &local_98;
          FUN_145ac1ff8(param_1 + 0x7c0,&local_68);
          local_98 = 0;
          FUN_14485c47a(&local_98,lVar2);
          local_68 = &local_98;
          FUN_145ac1ff8(param_1 + 0x7b0,&local_68);
          FUN_141118b96(param_1);
          break;
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar5 = local_78._4_4_;
        uVar4 = local_78;
      } while (((local_78._4_4_ != iVar7) || (local_80 != lVar2)) || (local_90 != plVar1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c7f792 FUN_145c7f792 body=246 status=ok
// SIG undefined FUN_145c7f792(void)

undefined8 *
FUN_145c7f792(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  FUN_145c7f88a(uVar5,param_3);
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



// FUNCTION 145c7f88a FUN_145c7f88a body=423 status=ok
// SIG undefined FUN_145c7f88a(void)

void FUN_145c7f88a(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_145c7f960:
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
    *puVar5 = &PTR_FUN_14b9d2b80;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145c7f960;
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
    *puVar5 = &PTR_FUN_14b9d2b80;
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
                    /* WARNING: Could not recover jumptable at 0x000145c7fa19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c7fa32 FUN_145c7fa32 body=346 status=ok
// SIG undefined FUN_145c7fa32(void)

void FUN_145c7fa32(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong local_68;
  undefined1 local_5c [12];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar6 = (longlong)*(int *)(param_1 + 0x38) * 0xa8;
    lVar7 = *(longlong *)(param_1 + 0x30) + 0x48;
    local_68 = param_1 + 0x78;
    do {
      lVar3 = FUN_1404101e2(lVar7 + -0x40);
      if (lVar3 == param_3) {
        puVar1 = (undefined8 *)(lVar7 + -0x10);
        cVar2 = FUN_145c7fb8e(puVar1,param_2);
        if (cVar2 != '\0') {
          if (*(longlong *)(lVar7 + 0x48) != 0) {
            plVar4 = (longlong *)FUN_14479d2ce(local_68);
            if (plVar4 == (longlong *)0x0) {
              uVar5 = 0;
            }
            else {
              uVar5 = (**(code **)(*plVar4 + 0x180))(plVar4);
            }
            local_70 = *(undefined8 *)(lVar7 + 0x48);
            lVar3 = FUN_140149a73(uVar5,0);
            if (lVar3 != 0) {
              FUN_140825b72(puVar1,local_70,lVar3,0);
            }
            *(undefined8 *)(lVar7 + 0x48) = 0;
          }
          *(undefined4 *)(lVar7 + -8) = *(undefined4 *)(param_2 + 1);
          *puVar1 = *param_2;
          FUN_1447715ec(lVar7,param_2 + 2);
          local_50 = *(undefined8 *)(lVar7 + -0x18);
          FUN_1401533ba(local_5c,&local_50,1);
          FUN_144928d62(lVar7,5,local_5c);
        }
      }
      lVar7 = lVar7 + 0xa8;
      lVar6 = lVar6 + -0xa8;
    } while (lVar6 != 0);
  }
  FUN_1405a453e(param_1);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c7fb8e FUN_145c7fb8e body=16 status=ok
// SIG undefined FUN_145c7fb8e(void)

byte FUN_145c7fb8e(void)

{
  byte bVar1;
  
  bVar1 = FUN_14493b798();
  return bVar1 ^ 1;
}



// FUNCTION 145c7fb9e FUN_145c7fb9e body=100 status=ok
// SIG undefined FUN_145c7fb9e(void)

void FUN_145c7fb9e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  plVar3 = *(longlong **)(param_1 + 0x70);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145c7fbfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c7fc02 FUN_145c7fc02 body=42 status=ok
// SIG undefined FUN_145c7fc02(void)

void FUN_145c7fc02(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_145c7fc2c(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 145c7fc2c FUN_145c7fc2c body=245 status=ok
// SIG undefined FUN_145c7fc2c(void)

void FUN_145c7fc2c(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar4 = param_1[1];
  if (*(int *)(lVar4 + 0x20) != 0) {
    puVar1 = *(undefined8 **)(lVar4 + 0x18);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72((longlong *)(lVar4 + 0x18),0,0,0x10);
      *(undefined4 *)(lVar4 + 0x20) = 0;
      lVar4 = param_1[1];
    }
  }
  if (*(int *)(lVar4 + 0x10) != 0) {
    puVar1 = *(undefined8 **)(lVar4 + 8);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72((longlong *)(lVar4 + 8),0,0,0x10);
      *(undefined4 *)(lVar4 + 0x10) = 0;
    }
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
  }
  FUN_1446ddc76(&local_28,"CoherentRenderingPlugin",1);
  uVar2 = FUN_144a52528();
  plVar3 = (longlong *)FUN_1401e3324(uVar2,local_28);
  (**(code **)(*plVar3 + 0x70))(plVar3);
  (**(code **)(*plVar3 + 0x50))(plVar3);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c7fd22 FUN_145c7fd22 body=31 status=ok
// SIG undefined FUN_145c7fd22(void)

undefined8 FUN_145c7fd22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c7fd42 FUN_145c7fd42 body=261 status=ok
// SIG undefined FUN_145c7fd42(void)

void FUN_145c7fd42(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + -0x3950) == '\x03') {
    if (param_2 != '\0') {
      lVar1 = *(longlong *)(param_1 + 15000);
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
      }
      local_40 = 0;
      FUN_14485c47a(&local_40,lVar1);
      FUN_145c7fe60(param_1 + 0x1a88,local_40);
    }
    *(undefined8 *)(param_1 + 15000) = 0;
    *(char *)(param_1 + 0x3a96) = param_2;
    FUN_144a62f0c(param_1 + -0x3ac8,*(undefined8 *)(param_1 + -0x3aa0),0x41);
    FUN_144a62f0c(param_1 + -0x3ac8,*(undefined8 *)(param_1 + -0x3aa0),0x42);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c7fe60 FUN_145c7fe60 body=162 status=ok
// SIG undefined FUN_145c7fe60(void)

void FUN_145c7fe60(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_145c7feed;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145c7feed:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145c7ff02 FUN_145c7ff02 body=259 status=ok
// SIG undefined FUN_145c7ff02(void)

void FUN_145c7ff02(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144729dda(param_1 + 0x54);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x54);
    if (*(longlong *)(lVar2 + 0x40) == 0) {
      plVar3 = (longlong *)(lVar2 + 0x28);
    }
    else {
      plVar3 = (longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x40) + 0x238) + 8);
    }
    if ((longlong *)*plVar3 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*(longlong *)*plVar3 + 0x210))();
      if (plVar3 != (longlong *)0x0) {
        local_38 = FUN_145c80006(plVar3,param_1);
        (**(code **)(*plVar3 + 0x288))(plVar3,&local_28,param_1,"scrollposx");
        *(undefined8 *)(param_1 + 0x148) = local_28;
        local_38 = FUN_145c80006(plVar3,param_1);
        (**(code **)(*plVar3 + 0x288))(plVar3,&local_28,param_1,"iconentries");
        *(undefined8 *)(param_1 + 0x150) = local_28;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c80006 FUN_145c80006 body=83 status=ok
// SIG undefined FUN_145c80006(void)

void FUN_145c80006(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x88))();
  (**(code **)(*param_1 + 0x80))(param_1,4);
  FUN_145c80059(param_1,param_2);
  (**(code **)(*param_1 + 0x80))(param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000145c80055. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1);
  return;
}



// FUNCTION 145c80059 FUN_145c80059 body=105 status=ok
// SIG undefined FUN_145c80059(void)

void FUN_145c80059(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  (**(code **)(*param_1 + 0x28))();
  if (param_2 == 0) {
    uVar1 = FUN_145c800c2();
    FUN_1401e1be1(param_1,0,uVar1);
  }
  else {
    (**(code **)(*param_1 + 0x28))(param_1);
    uVar1 = FUN_145c800c2();
    FUN_1401e1be1(param_1,param_2,uVar1);
    (**(code **)(*param_1 + 0x48))(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x000145c800ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
  return;
}



// FUNCTION 145c800c2 FUN_145c800c2 body=55 status=ok
// SIG undefined FUN_145c800c2(void)

void FUN_145c800c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb7968 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb7968 = FUN_140002ddd(FUN_1466039ed,uVar1,L"OakUIData_Compass");
  }
  return;
}



// FUNCTION 145c800fa FUN_145c800fa body=186 status=ok
// SIG undefined FUN_145c800fa(void)

undefined8 * FUN_145c800fa(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    lVar1 = FUN_144a2f878();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_48 = FUN_145d71f2a;
      local_40 = 0;
      FUN_145c801b6(local_38,param_1);
      FUN_140feff30(param_3 + 0x3fa8,param_2,local_38);
      FUN_1449db362(local_38);
      goto LAB_145c80188;
    }
  }
  *param_2 = 0;
LAB_145c80188:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c801b6 FUN_145c801b6 body=428 status=ok
// SIG undefined FUN_145c801b6(void)

longlong * FUN_145c801b6(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar6 = *(longlong **)(param_2 + 0x48);
  if (plVar6 == (longlong *)0x0) {
LAB_145c80296:
    *puVar5 = &PTR_LAB_149e35290;
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
    *puVar5 = &PTR_FUN_14b99ca50;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145c80296;
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
    uVar7 = *(undefined8 *)(param_2 + 0x40);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e35290;
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
    *puVar5 = &PTR_FUN_14b99ca50;
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



// FUNCTION 145c80362 FUN_145c80362 body=206 status=ok
// SIG undefined FUN_145c80362(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c80362(void)

{
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  undefined *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  DAT_14c99d911 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c99d918);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c99d918,4000);
  DAT_14c99d940 = 0;
  DAT_14c99d948 = 0;
  _DAT_14c99d950 = 0;
  FUN_145c80432(&DAT_14c99d958);
  DAT_14c99de20 = 0;
  DAT_14c99de30 = 0;
  DAT_14c99de40 = 0;
  _DAT_14c99de70 = 0x502;
  local_48 = 0;
  local_38 = &PTR_LAB_149fc99e0;
  local_30 = &DAT_14c99d910;
  local_58 = &LAB_14614675a;
  FUN_141293f6e(&DAT_14c99d910,2);
  DAT_14c99d911 = 1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c80432 FUN_145c80432 body=413 status=ok
// SIG undefined FUN_145c80432(void)

undefined8 * FUN_145c80432(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined8 *)((longlong)param_1 + 0x25d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x265) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x4e] = param_1;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_145c805d0(param_1 + 0x59);
  return param_1;
}



// FUNCTION 145c805d0 FUN_145c805d0 body=275 status=ok
// SIG undefined FUN_145c805d0(void)

void FUN_145c805d0(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  return;
}



// FUNCTION 145c806e4 FUN_145c806e4 body=1026 status=ok
// SIG undefined FUN_145c806e4(void)

void FUN_145c806e4(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined1 local_130;
  undefined4 local_128;
  undefined1 local_120;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  uint uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  int local_a8;
  undefined4 local_a4;
  int local_a0;
  int local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_79;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  uint uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_78 = local_78 & 0xffffff00;
  uStack_74 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0xf00000d0;
  local_58 = 0;
  local_50 = 0;
  uStack_4c = uStack_4c & 0xffffff00;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_79 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_79);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_79);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_9c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  iVar2 = local_9c;
  local_a0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  iVar1 = local_a0;
  local_a4 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a4);
  }
  local_a8 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c8 = local_98;
  uStack_c0 = uStack_90;
  local_b8 = local_88;
  local_110 = CONCAT44(uStack_74,local_78);
  local_108 = uStack_70;
  local_100 = local_68;
  local_f8 = local_60;
  local_f0 = 0;
  local_e8 = local_50;
  uStack_e4 = uStack_4c;
  uStack_e0 = (undefined4)uStack_48;
  uStack_dc = uStack_48._4_4_;
  local_d8 = (undefined4)uStack_40;
  uStack_d4 = uStack_40._4_4_;
  uStack_d0 = (undefined4)uStack_38;
  uStack_cc = uStack_38._4_4_;
  local_120 = local_a8 != 0;
  local_130 = iVar1 != 0;
  local_138 = iVar2 != 0;
  local_128 = local_a4;
  FUN_141512486(local_30,&local_110,local_79);
  if ((local_28 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c80ae8 FUN_145c80ae8 body=40 status=ok
// SIG undefined FUN_145c80ae8(void)

undefined8 FUN_145c80ae8(undefined8 param_1,int param_2)

{
  FUN_145c80b10();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}


