// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1412de1de FUN_1412de1de body=213 status=ok
// SIG undefined FUN_1412de1de(void)

void FUN_1412de1de(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x10;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0xc0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x170;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x220;
  FUN_1412de2b4(param_1 + 0x630,param_2);
  return;
}



// FUNCTION 1412de2b4 FUN_1412de2b4 body=447 status=ok
// SIG undefined FUN_1412de2b4(void)

void FUN_1412de2b4(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x10;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0xc0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x170;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x220;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x2d0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x380;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x430;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x4e0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x590;
  return;
}



// FUNCTION 1412de474 FUN_1412de474 body=277 status=ok
// SIG undefined FUN_1412de474(void)

undefined8 FUN_1412de474(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1412de583;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1412de583;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1412de583:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1412de531;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_1412de531;
    }
  }
  uVar6 = 0;
LAB_1412de531:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412de590 FUN_1412de590 body=369 status=ok
// SIG undefined FUN_1412de590(void)

void FUN_1412de590(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x3c08);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 < 0x81) {
    uVar6 = 0x80;
  }
  else {
    lVar3 = (longlong)(int)uVar2;
    if (0x80 < *(uint *)(param_1 + 0x3c0c)) {
      lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
    }
    uVar4 = lVar3 * 0x78;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar6 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
        }
        else {
          if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar1 = (&DAT_14c841e00)[uVar6 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar1) {
              uVar5 = (ulonglong)bVar1;
            }
            uVar7 = 0x32 - (ulonglong)bVar1;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1412de628;
              lVar3 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar3 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar6 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_1412de628:
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 / 0x78)) {
      uVar6 = uVar4 / 0x78 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x3c0c) = (int)uVar6;
  FUN_1412de702(param_1,param_2,uVar6,0x78);
  return;
}



// FUNCTION 1412de702 FUN_1412de702 body=148 status=ok
// SIG undefined FUN_1412de702(void)

void FUN_1412de702(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x3c00);
  if ((uint)param_3 < 0x81) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x78);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x3c00,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x3c00),param_1,(longlong)param_2 * 0x78);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x3c00,param_2,param_3,param_4);
  return;
}



// FUNCTION 1412de796 FUN_1412de796 body=136 status=ok
// SIG undefined FUN_1412de796(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412de796(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b1a53d0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x0001412de810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1412de81e FUN_1412de81e body=8 status=ok
// SIG undefined FUN_1412de81e(void)

undefined8 FUN_1412de81e(void)

{
  return DAT_14cb70c58;
}



// FUNCTION 1412de826 FUN_1412de826 body=73 status=ok
// SIG undefined FUN_1412de826(void)

void FUN_1412de826(longlong *param_1)

{
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  param_1[3] = (longlong)&PTR_FUN_14b8194d0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1412de870 FUN_1412de870 body=177 status=ok
// SIG undefined FUN_1412de870(void)

void FUN_1412de870(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (DAT_14c963ff1 == '\x01') {
    uVar5 = *(uint *)(param_2 + 0x18) >> 2 & 4;
    FUN_1412de922();
    uVar3 = (1 < DAT_14c9a4008) + 2;
    if (*(longlong *)(param_2 + 8) == 0) {
      uVar3 = (uint)(1 < DAT_14c9a4008);
    }
    uVar7 = 0;
    do {
      if (((((uint)uVar7 & 4) == uVar5) && (uVar7 == (uVar3 + uVar5 & (uint)uVar7))) &&
         (lVar4 = (longlong)*(int *)(param_1 + 0x68 + uVar7 * 0x18), lVar4 != 0)) {
        plVar1 = (longlong *)(param_1 + 0x60 + uVar7 * 0x18);
        lVar2 = *plVar1;
        lVar6 = 0;
        do {
          if ((*(int *)(lVar2 + 8 + lVar6) != 0) && (*(longlong *)(lVar2 + lVar6) != 0)) {
            FUN_1458bad36(plVar1,param_2);
            break;
          }
          lVar6 = lVar6 + 0x10;
        } while (lVar4 * 0x10 != lVar6);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != 7);
  }
  return;
}



// FUNCTION 1412de922 FUN_1412de922 body=106 status=ok
// SIG undefined FUN_1412de922(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1412de922(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a4010) {
    FUN_144b3d300(&DAT_14c9a4010);
    if (DAT_14c9a4010 == -1) {
      DAT_14c9a4000 = 0;
      _DAT_14c9a4008 = 0;
      atexit((_func_5014 *)&LAB_142b2fe06);
      _Init_thread_footer(&DAT_14c9a4010);
    }
  }
  return &DAT_14c9a4000;
}



// FUNCTION 1412de98c FUN_1412de98c body=2054 status=ok
// SIG undefined FUN_1412de98c(void)

void FUN_1412de98c(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_598 [32];
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_568;
  code *local_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 local_520;
  undefined4 local_518;
  undefined8 local_514;
  undefined4 local_50c;
  undefined8 local_500;
  undefined4 local_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4d0;
  undefined4 local_4c8;
  undefined8 local_4c4;
  undefined4 local_4bc;
  undefined8 local_4b0;
  undefined4 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_470;
  undefined4 local_468;
  undefined8 local_464;
  undefined4 local_45c;
  undefined8 local_450;
  undefined4 local_448;
  undefined1 local_440;
  undefined4 local_418;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_350;
  undefined4 local_348;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_294;
  undefined4 local_28c;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_244;
  undefined4 local_23c;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c0;
  undefined4 local_198;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_598;
  local_2a0 = 0;
  local_298 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b8 = 0;
  local_294 = 0xffffffff00000080;
  local_28c = 0;
  local_280 = 0;
  local_278 = 0;
  local_250 = 0;
  local_248 = 0;
  local_270 = 0;
  uStack_268 = 0;
  local_244 = 0xffffffff00000080;
  local_23c = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0xffffffff00000000;
  local_1f0 = 0;
  local_1e8 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_1e4 = 0xffffffff00000080;
  local_1dc = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_198 = 0;
  local_170 = 0;
  local_168 = 0x200000000;
  local_158 = 0;
  local_150 = 0x2000000000;
  uStack_148 = 0xffffffff;
  local_138 = 0;
  local_130 = 0;
  local_108 = 0;
  local_100 = 0x200000000;
  local_f0 = 0;
  local_e8 = 0x2000000000;
  uStack_e0 = 0xffffffff;
  local_d0 = 0;
  local_c8 = 0;
  local_a0 = 0;
  local_98 = 0x200000000;
  local_88 = 0;
  local_80 = 0x2000000000;
  uStack_78 = 0xffffffff;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c8);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2c8);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2c8);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_2c8 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c8);
    }
  }
  puVar6 = *(undefined8 **)(param_2 + 0x38);
  local_520 = 0;
  local_518 = 0;
  local_548 = 0;
  uStack_540 = 0;
  local_538 = 0;
  local_514 = 0xffffffff00000080;
  local_50c = 0;
  local_500 = 0;
  local_4f8 = 0;
  local_4d0 = 0;
  local_4c8 = 0;
  local_4f0 = 0;
  uStack_4e8 = 0;
  local_4c4 = 0xffffffff00000080;
  local_4bc = 0;
  local_4b0 = 0;
  local_4a8 = 0;
  local_4a0 = 0;
  local_498 = 0xffffffff00000000;
  local_470 = 0;
  local_468 = 0;
  local_490 = 0;
  uStack_488 = 0;
  local_464 = 0xffffffff00000080;
  local_45c = 0;
  local_450 = 0;
  local_448 = 0;
  local_440 = 0;
  local_418 = 0;
  local_3f0 = 0;
  local_3e8 = 0x200000000;
  local_3d8 = 0;
  local_3d0 = 0x2000000000;
  uStack_3c8 = 0xffffffff;
  local_3b8 = 0;
  local_3b0 = 0;
  local_388 = 0;
  local_380 = 0x200000000;
  local_370 = 0;
  local_368 = 0x2000000000;
  uStack_360 = 0xffffffff;
  local_350 = 0;
  local_348 = 0;
  local_320 = 0;
  local_318 = 0x200000000;
  local_308 = 0;
  local_300 = 0x2000000000;
  uStack_2f8 = 0xffffffff;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  *(longlong *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_548);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_548);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_548);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_548 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_548);
    }
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  local_550 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_568 = FUN_1446ddbd2();
      local_560 = FUN_1409e12a0;
      local_570 = 0;
      local_578 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_550);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_550);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_550);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_550 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_550);
    }
  }
  local_558 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_568 = FUN_1446ddbd2();
      local_560 = FUN_1468d96f0;
      local_570 = 0;
      local_578 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_558);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_558);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_558);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_558 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_558);
    }
  }
  uVar4 = local_550;
  uVar2 = local_558;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = &local_548;
  }
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = &local_2c8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14054d68c(puVar5,puVar6);
  FUN_1412df193(puVar5,uVar4,uVar2);
  local_548 = 0;
  FUN_14076ba36(&uStack_540);
  local_2c8 = 0;
  FUN_14076ba36(&uStack_2c0);
  if ((local_50 ^ (ulonglong)auStack_598) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412df193 FUN_1412df193 body=736 status=ok
// SIG undefined FUN_1412df193(void)

void FUN_1412df193(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  code *pcVar2;
  uint uVar3;
  byte bVar4;
  longlong *plVar5;
  uint *puVar6;
  longlong lVar7;
  int iVar8;
  longlong *_Dst;
  uint uVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  uint local_48;
  int iStack_44;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar9 = (uint)param_2 & 0xffff;
    lVar7 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x48);
    }
    iVar10 = *(int *)(lVar7 + (ulonglong)
                              (*(int *)(param_1 + 0x50) - 1U &
                              (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar9) +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar10 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar10 * 0x48);
        if (*plVar1 == param_2) {
          if ((((ulonglong)(plVar1 + 1) & 0xfffffffffffffff7) != 0) && ((char)plVar1[7] == '\a')) {
            local_30 = 8;
            iStack_44 = 0;
            if (param_3 == 0) {
              local_48 = 0;
              iVar10 = 0;
            }
            else {
              local_48 = *(uint *)(param_3 + 0xc);
              if ((int)local_48 < DAT_14c9647dc) {
                lVar7 = (ulonglong)((local_48 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_48 >> 0x10) * 8);
              }
              else {
                lVar7 = 0;
              }
              iVar10 = *(int *)(lVar7 + 0x10);
              if (*(int *)(lVar7 + 0x10) == 0) {
                LOCK();
                iVar10 = DAT_14c964868 + 1;
                UNLOCK();
                iVar8 = DAT_14c964868 + 1;
                bVar11 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar10;
                if (bVar11) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar8);
                }
                LOCK();
                iVar10 = *(int *)(lVar7 + 0x10);
                bVar11 = iVar10 == 0;
                if (bVar11) {
                  *(int *)(lVar7 + 0x10) = iVar8;
                  iVar10 = 0;
                }
                UNLOCK();
                if (bVar11) {
                  iVar10 = iVar8;
                }
              }
            }
            local_28 = 7;
            _Dst = plVar1 + 2;
            iStack_44 = iVar10;
            if (*(byte *)(plVar1 + 6) == 7) {
              if (local_30 < 0x19) {
                puVar6 = &local_48;
              }
              else {
                puVar6 = (uint *)CONCAT44(iVar10,local_48);
              }
              if (0x18 < *(ushort *)(plVar1 + 5)) {
                _Dst = (longlong *)*_Dst;
              }
              if (DAT_14c9a8da0 == (code *)0x0) {
                memcpy(_Dst,puVar6,(longlong)DAT_14c9a8cf0);
              }
              else {
                (*DAT_14c9a8da0)(_Dst);
              }
            }
            else {
              pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                                 (ulonglong)((uint)*(byte *)(plVar1 + 6) * 0x120));
              if (pcVar2 != (code *)0x0) {
                plVar5 = _Dst;
                if (0x18 < *(ushort *)(plVar1 + 5)) {
                  plVar5 = (longlong *)*_Dst;
                }
                (*pcVar2)(plVar5);
              }
              if (0x18 < *(ushort *)(plVar1 + 5)) {
                FUN_1400020a8(*_Dst);
              }
              *(ushort *)(plVar1 + 5) = local_30;
              if (local_30 < 0x19) {
                puVar6 = &local_48;
              }
              else {
                plVar5 = (longlong *)FUN_14001cc68(local_30,0);
                *_Dst = (longlong)plVar5;
                puVar6 = (uint *)CONCAT44(iStack_44,local_48);
                _Dst = plVar5;
              }
              if (DAT_14c9a8d90 == (code *)0x0) {
                memcpy(_Dst,puVar6,(longlong)DAT_14c9a8cf0);
                bVar4 = 7;
              }
              else {
                (*DAT_14c9a8d90)(_Dst);
                bVar4 = local_28;
              }
              *(byte *)(plVar1 + 6) = bVar4;
            }
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
            if (pcVar2 != (code *)0x0) {
              if (local_30 < 0x19) {
                puVar6 = &local_48;
              }
              else {
                puVar6 = (uint *)CONCAT44(iStack_44,local_48);
              }
              (*pcVar2)(puVar6);
            }
            if (0x18 < local_30) {
              FUN_1400020a8(CONCAT44(iStack_44,local_48));
            }
          }
          break;
        }
        iVar10 = (int)plVar1[8];
      } while (iVar10 != -1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412df474 FUN_1412df474 body=18 status=ok
// SIG undefined FUN_1412df474(void)

undefined8 * FUN_1412df474(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 1412df486 FUN_1412df486 body=122 status=ok
// SIG undefined FUN_1412df486(void)

undefined8 * FUN_1412df486(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[1] = param_2[1];
  if (DAT_14ca98538 == (longlong *)0x0) {
    DAT_14ca98538 = (longlong *)FUN_14001cc68(0x10,0x10);
    *DAT_14ca98538 = 0;
    DAT_14ca98538[1] = 0;
  }
  plVar2 = DAT_14ca98538;
  iVar1 = (int)DAT_14ca98538[1];
  *(uint *)(DAT_14ca98538 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_1458bb626(plVar2,iVar1);
  }
  *(undefined8 **)(*plVar2 + (longlong)iVar1 * 8) = param_1;
  return param_1;
}



// FUNCTION 1412df500 FUN_1412df500 body=40 status=ok
// SIG undefined FUN_1412df500(void)

undefined8 FUN_1412df500(undefined8 param_1,int param_2)

{
  FUN_1412df528();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1412df528 FUN_1412df528 body=589 status=ok
// SIG undefined FUN_1412df528(void)

void FUN_1412df528(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9261b0;
  param_1[0x72] = &PTR_FUN_14b926840;
  param_1[0x73] = &PTR_FUN_14b926860;
  param_1[0x74] = &PTR_FUN_14b926890;
  param_1[0x75] = &PTR_FUN_14b9268a0;
  param_1[0x76] = &PTR_FUN_14b926910;
  param_1[0x77] = &PTR_FUN_14b926940;
  param_1[0x78] = &PTR_FUN_14b926970;
  param_1[0x7f] = &PTR_FUN_14b926a20;
  param_1[0x80] = &PTR_FUN_14b926a90;
  param_1[0x81] = &PTR_FUN_14b926b00;
  param_1[0x82] = &PTR_FUN_14b926b30;
  param_1[0x83] = &PTR_FUN_14b926b70;
  param_1[0x84] = &PTR_FUN_14b926c10;
  param_1[0x85] = &PTR_FUN_14b926c30;
  param_1[0x89] = &PTR_FUN_14b926c50;
  param_1[0x8a] = &PTR_FUN_14b926d10;
  param_1[0x8b] = &PTR_FUN_14b926d90;
  param_1[0x8c] = &PTR_FUN_14b926de0;
  param_1[0x8d] = &PTR_FUN_14b926e20;
  param_1[0x8e] = &PTR_FUN_14b926e40;
  param_1[0x8f] = &PTR_FUN_14b926e60;
  param_1[0x90] = &PTR_FUN_14b926e80;
  param_1[0x91] = &PTR_FUN_14b926ea0;
  param_1[0x92] = &PTR_FUN_14b926ec0;
  param_1[0x93] = &PTR_FUN_14b926ee0;
  param_1[0x94] = &PTR_FUN_14b926f00;
  param_1[0x95] = &PTR_FUN_14b926f20;
  param_1[0x96] = &PTR_FUN_14b926f40;
  param_1[0x34b] = &PTR_FUN_14b926f60;
  param_1[0x352] = &PTR_FUN_14b926f70;
  param_1[0x353] = &PTR_FUN_14b926fb0;
  param_1[0x354] = &PTR_FUN_14b926ff0;
  param_1[0x355] = &PTR_FUN_14b927040;
  param_1[0x356] = &PTR_FUN_14b927070;
  param_1[0x359] = &PTR_FUN_14b9270b0;
  param_1[0x35a] = &PTR_FUN_14b9270c0;
  param_1[0x35b] = &PTR_FUN_14b9270f0;
  param_1[0x35c] = &PTR_FUN_14b927190;
  param_1[0x4bf] = &PTR_FUN_14b9271b0;
  FUN_1412df776(param_1 + 0x4e0);
  FUN_14102816a(param_1);
  return;
}



// FUNCTION 1412df776 FUN_1412df776 body=83 status=ok
// SIG undefined FUN_1412df776(void)

void FUN_1412df776(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b92b3f0;
  if (param_1[8] == 0) {
    *param_1 = &PTR_FUN_14b5ecc40;
  }
  else {
    FUN_140872868(param_1);
    *param_1 = &PTR_FUN_14b5ecc40;
    if (param_1[8] != 0) {
      FUN_140872868(param_1);
    }
  }
  FUN_140639928(param_1);
  return;
}



// FUNCTION 1412df7ca FUN_1412df7ca body=228 status=ok
// SIG undefined FUN_1412df7ca(void)

longlong FUN_1412df7ca(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb20ce8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_147f149ff;
    local_40 = &LAB_146430de1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x6f0;
    FUN_14081cfa3(L"/Script/GbxAI",L"CoverSlotComponent",&DAT_14cb20ce8,FUN_146430dba);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb20ce8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412df8b0 FUN_1412df8b0 body=1217 status=ok
// SIG undefined FUN_1412df8b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1412df8b0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar7 = (longlong *)(**(code **)(*(longlong *)*param_3 + 8))();
  if (plVar7 == (longlong *)0x0) {
LAB_1412dfbfb:
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  uVar8 = FUN_1412dfd94();
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar8);
  if (plVar7 == (longlong *)0x0) goto LAB_1412dfbfb;
  uVar8 = FUN_1412dfd94();
  plVar9 = (longlong *)FUN_144718840(plVar7,uVar8);
  if (((plVar7 == plVar9) || (plVar9 == (longlong *)0x0)) ||
     (plVar7 = (longlong *)(**(code **)(*plVar9 + 0x18))(plVar9), plVar7 == (longlong *)0x0))
  goto LAB_1412dfbfb;
  bVar2 = *(byte *)(param_1 + 0x10);
  lVar4 = plVar7[4];
  plVar9 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14b99fe70;
  plVar9[3] = 0;
  plVar9[4] = 0;
  *(undefined8 *)((longlong)plVar9 + 0x24) = 0;
  *(undefined8 *)((longlong)plVar9 + 0x2c) = 0;
  *(byte *)(plVar9 + 7) = (lVar4 == 0 ^ bVar2) * '\x02';
  plVar14 = plVar9 + 2;
  *plVar14 = (longlong)&PTR_FUN_14b99fe90;
  *(byte *)(plVar9 + 8) = bVar2;
  if (plVar14 != (longlong *)0x0) {
    if (plVar9 == (longlong *)0x0) {
      _DAT_00000018 = 0x10;
      plVar13 = (longlong *)&DAT_00000020;
      plVar10 = _DAT_00000020;
      if (_DAT_00000020 != (longlong *)0x0) {
LAB_1412dfc36:
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
        *plVar13 = (longlong)plVar9;
        if (plVar9 != (longlong *)0x0) goto LAB_1412df9cd;
      }
    }
    else {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      plVar9[3] = (longlong)plVar14;
      if ((longlong *)plVar9[4] != plVar9) {
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar9[4] != (longlong *)0x0) {
          plVar13 = plVar9 + 4;
          plVar10 = (longlong *)plVar9[4];
          goto LAB_1412dfc36;
        }
        plVar9[4] = (longlong)plVar9;
      }
LAB_1412df9cd:
      LOCK();
      plVar13 = plVar9 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,4,0x10);
  local_48 = 4;
  if (plVar9 == (longlong *)0x0) {
    *local_50 = (longlong)&PTR_LAB_14b95fed0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_50[2] = lVar11;
    *local_50 = (longlong)&PTR_FUN_14b99feb0;
    local_50[3] = 0x10;
    local_50[4] = 0;
    local_50[5] = (longlong)&LAB_140d28b12;
    *(undefined4 *)(local_50 + 6) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    *local_50 = (longlong)&PTR_LAB_14b95fed0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_50[2] = lVar11;
    *local_50 = (longlong)&PTR_FUN_14b99feb0;
    local_50[3] = (longlong)plVar14;
    local_50[4] = (longlong)plVar9;
    LOCK();
    *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
    UNLOCK();
    local_50[5] = (longlong)&LAB_140d28b12;
    *(undefined4 *)(local_50 + 6) = 0;
    LOCK();
    plVar13 = plVar9 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (((local_48 == 0) || (local_50 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*local_50 + 0x30))(), cVar5 == '\0')) {
    if (local_48 != 0) {
      if (local_50 == (longlong *)0x0) goto LAB_1412dfb2b;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_1412dfb15;
    }
  }
  else {
    if (*(int *)((longlong)plVar7 + 0x14) < 1) {
      iVar3 = (int)plVar7[1];
      iVar6 = (int)plVar7[2] + -1;
      *(int *)(plVar7 + 2) = iVar6;
      if (iVar6 <= iVar3) {
        iVar6 = iVar3;
        if (0 < iVar3) {
          iVar12 = 0;
          do {
            if (((*(int *)(*plVar7 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                (plVar13 = *(longlong **)(*plVar7 + (longlong)iVar12 * 0x10),
                plVar13 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar13 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar7,iVar12);
              FUN_14005b248(plVar7);
            }
            else {
              iVar12 = iVar12 + 1;
            }
            iVar6 = (int)plVar7[1];
          } while (iVar12 < iVar6);
        }
        iVar12 = 2;
        if (2 < iVar6 * 2) {
          iVar12 = iVar6 * 2;
        }
        *(int *)(plVar7 + 2) = iVar12;
        if ((iVar12 < iVar3) && (*(int *)((longlong)plVar7 + 0xc) != iVar6)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x38))(local_50,local_40);
    }
    iVar3 = (int)plVar7[1];
    *(uint *)(plVar7 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)plVar7 + 0xc) < iVar3 + 1U) {
      FUN_1447a71f6(plVar7,iVar3);
    }
    lVar4 = *plVar7;
    lVar11 = (longlong)iVar3 * 0x10;
    *(undefined8 *)(lVar4 + lVar11) = 0;
    *(undefined4 *)(lVar4 + 8 + lVar11) = 0;
    *(longlong **)(lVar4 + lVar11) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar4 + 8 + lVar11) = local_48;
LAB_1412dfb15:
    local_48 = 0;
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1412dfb2b:
  *param_2 = plVar14;
  param_2[1] = plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar9 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1412dfd94 FUN_1412dfd94 body=228 status=ok
// SIG undefined FUN_1412dfd94(void)

longlong FUN_1412dfd94(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbc0ad8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148cbf273;
    local_40 = FUN_14661878c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"VehicleDriver",&DAT_14cbc0ad8,&DAT_148cbf272);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbc0ad8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412dfe7a FUN_1412dfe7a body=88 status=ok
// SIG undefined FUN_1412dfe7a(void)

undefined8 * FUN_1412dfe7a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1412dfed2(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1412dfed2 FUN_1412dfed2 body=317 status=ok
// SIG undefined FUN_1412dfed2(void)

void FUN_1412dfed2(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1412dff40;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_1412dff40:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1412e0010 FUN_1412e0010 body=1172 status=ok
// SIG undefined FUN_1412e0010(void)

void FUN_1412e0010(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  longlong *plVar3;
  PSRWLOCK SRWLock_00;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  char cVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  int iVar10;
  byte bVar11;
  undefined8 unaff_RBP;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined2 *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  code **local_130;
  undefined1 *local_128;
  code *local_120;
  code *local_118;
  longlong *local_110;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (*param_2 == 0) goto LAB_1412e02b5;
  if ((longlong)(int)param_2[3] != 0) {
    lVar13 = 0;
    do {
      if (*(longlong *)(param_2[2] + lVar13) == 0) goto LAB_1412e02b5;
      lVar13 = lVar13 + 8;
    } while ((longlong)(int)param_2[3] * 8 != lVar13);
  }
  uVar12 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),*(undefined1 *)(*param_2 + 0x368)) &
           0xffffffffffffff10;
  bVar11 = (byte)uVar12 >> 4 & *(byte *)(param_3 + 1);
  lVar13 = *(longlong *)(param_1 + 0x20);
  if (lVar13 == 0) {
LAB_1412e0445:
    uVar9 = (undefined4)CONCAT71((int7)(uVar12 >> 8),bVar11);
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_130 = &local_118;
      local_118 = FUN_141030f22;
      local_120 = FUN_14081d0ea;
      local_128 = &LAB_1459f2e4c;
      local_138 = &LAB_148c39de3;
      local_140 = &LAB_1457a9eb2;
      local_148 = &DAT_149e063b2;
      local_150 = 0;
      local_158 = 0x10000004;
      local_160 = 0x10;
      local_168 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38))
    goto LAB_1412e0445;
    lVar4 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30);
    lVar5 = *(longlong *)(lVar4 + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8);
    uVar9 = (undefined4)
            CONCAT71((int7)((ulonglong)lVar4 >> 8),lVar5 != DAT_14cbadd90 + 0x30 & bVar11);
    if ((lVar5 == DAT_14cbadd90 + 0x30) && (bVar11 == 1)) {
      uVar9 = FUN_1412e04a6(lVar13,param_2);
    }
  }
  FUN_1412e07b8(param_1,uVar9);
  FUN_1449027d0(param_1,&local_118);
  lVar13 = *(longlong *)(local_118 + 0xe0);
  SRWLock = (PSRWLOCK)(lVar13 + 0x638);
  AcquireSRWLockShared(SRWLock);
  plVar1 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_110 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  cVar7 = FUN_140991644(lVar13 + 0x218,param_2);
  if ((cVar7 == '\0') || (cVar7 = FUN_140991644(param_1 + 0x68), cVar7 == '\0')) {
    FUN_1407b25f0(param_1 + 0x68,param_2);
    FUN_140bad218(param_1,&local_118,param_1 + 0x68);
    FUN_140a6a9d4(param_1 + 0x140);
    FUN_140368b56(&local_118);
    *(undefined1 *)(param_1 + 0x220) = 1;
    if ((undefined4 *)(param_1 + 0x218) != param_3) {
      if (*(char *)(param_3 + 1) == '\x01') {
        *(undefined4 *)(param_1 + 0x218) = *param_3;
        uVar8 = 1;
      }
      else {
        if (*(char *)(param_1 + 0x21c) != '\x01') goto LAB_1412e01a3;
        uVar8 = 0;
      }
      *(undefined1 *)(param_1 + 0x21c) = uVar8;
    }
  }
LAB_1412e01a3:
  if (*(longlong *)(param_1 + 0x140) != 0) {
    if ((longlong)*(int *)(param_1 + 0x158) != 0) {
      lVar13 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x150) + lVar13) == 0) goto LAB_1412e02ac;
        lVar13 = lVar13 + 8;
      } while ((longlong)*(int *)(param_1 + 0x158) * 8 != lVar13);
    }
    if (*(longlong *)(param_1 + 0x148) != 0) {
      FUN_140bb46a8(param_1,&local_118);
      pcVar6 = local_118;
      SRWLock_00 = (PSRWLOCK)(local_118 + 0x638);
      AcquireSRWLockExclusive(SRWLock_00);
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_110 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar2 = (int *)((longlong)local_110 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_110 + 0x10))(local_110);
          }
        }
      }
      if (pcVar6[0x430] == (code)0x0) {
        iVar10 = *(int *)(pcVar6 + 0x434) + 1;
LAB_1412e023d:
        pcVar6[0x430] = (code)0x1;
        *(int *)(pcVar6 + 0x434) = iVar10;
      }
      else if (*(int *)(pcVar6 + 0x434) == 0) {
        iVar10 = 1;
        goto LAB_1412e023d;
      }
      lVar13 = FUN_1400d7050(param_1 + 0x30);
      if (lVar13 != 0) {
        if (DAT_14cbadd90 == 0) {
          local_118 = FUN_141030f22;
          local_120 = FUN_14081d0ea;
          local_128 = &LAB_1459f2e4c;
          local_138 = &LAB_148c39de3;
          local_140 = &LAB_1457a9eb2;
          local_148 = &DAT_149e063b2;
          local_150 = 0;
          local_158 = 0x10000004;
          local_160 = 0x10;
          local_168 = 0x3de0;
          local_130 = &local_118;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
          FUN_1403ca8ec(lVar13 + 0xd98,&DAT_14cbd9600);
        }
      }
      ReleaseSRWLockExclusive(SRWLock_00);
    }
  }
LAB_1412e02ac:
  ReleaseSRWLockShared(SRWLock);
LAB_1412e02b5:
  if ((local_40 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412e04a6 FUN_1412e04a6 body=139 status=ok
// SIG undefined FUN_1412e04a6(void)

ulonglong FUN_1412e04a6(ulonglong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = FUN_14011c349();
  local_20 = *(undefined8 *)(lVar2 + 0x48);
  lVar2 = FUN_140254f32(param_1);
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    if ((*(byte *)(*param_2 + 0x368) & 4) != 0) {
      local_20 = CONCAT44(local_20._4_4_,0xffffffff);
      param_1 = 0;
      cVar1 = FUN_1412e0532(lVar2,param_2,&local_20,0);
      if (cVar1 == '\0') goto LAB_1412e050e;
    }
    param_1 = CONCAT71((int7)(param_1 >> 8),1);
  }
LAB_1412e050e:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412e0532 FUN_1412e0532 body=644 status=ok
// SIG undefined FUN_1412e0532(void)

ulonglong FUN_1412e0532(longlong param_1,longlong *param_2,int *param_3,char param_4)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  ulonglong uVar7;
  int *piVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined7 uVar11;
  undefined1 auStack_168 [40];
  int local_140 [2];
  undefined1 local_138 [16];
  longlong local_128;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*(int *)(*(longlong *)(param_1 + 0xa0) + 0x120) == 0) {
LAB_1412e0687:
    uVar7 = 0;
    goto LAB_1412e0610;
  }
  bVar2 = *(byte *)(*param_2 + 0x239);
  local_140[0] = 0;
  FUN_1406fd608(local_138);
  local_60 = (undefined8 *)0x0;
  if (DAT_14cb84a98 == 0) {
    DAT_14cb84a98 = 1;
  }
  local_50 = 0;
  local_58 = 1;
  plVar4 = *(longlong **)(param_1 + 0x150);
  local_140[0] = DAT_14cb84a98;
  if (plVar4 == (longlong *)0x0) {
    DAT_14cb84a98 = DAT_14cb84a98 + 1;
    FUN_140368b56(local_138);
  }
  else {
    DAT_14cb84a98 = DAT_14cb84a98 + 1;
    cVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,local_140);
    if (local_60 != (undefined8 *)0x0) {
      (**(code **)*local_60)(local_60,1);
    }
    FUN_140368b56(local_138);
    if (cVar6 == '\0') goto LAB_1412e0687;
  }
  uVar11 = (undefined7)((ulonglong)local_138 >> 8);
  uVar7 = CONCAT71(uVar11,1);
  if (((bVar2 == 0) || (*(char *)(param_1 + 0x138) != '\0')) ||
     ((int)((uint)bVar2 + *(int *)(param_1 + 0x9c)) <= *(int *)(param_1 + 0x94) || param_4 != '\0'))
  goto LAB_1412e0610;
  FUN_1447a97f4(local_140,*param_2 + 0x210);
  uVar7 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0xa0) + 0x120);
  if (0 < (longlong)uVar7) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x118);
    uVar10 = 0;
    do {
      lVar1 = lVar5 + uVar10 * 0x150;
      if (*(int *)(lVar5 + 0x110 + uVar10 * 0x150) == local_140[0]) {
LAB_1412e06d8:
        if (*(uint *)(lVar1 + 0xf8) < *(uint *)(lVar1 + 0x138)) goto LAB_1412e07b2;
      }
      else if ((*(int *)(lVar1 + 0x108) != -1) && (*(longlong *)(lVar1 + 0x18) != 0)) {
        if ((longlong)*(int *)(lVar1 + 0x30) != 0) {
          lVar9 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar1 + 0x28) + lVar9) == 0) goto LAB_1412e06ec;
            lVar9 = lVar9 + 8;
          } while ((longlong)*(int *)(lVar1 + 0x30) * 8 != lVar9);
        }
        if (*(int *)(*(longlong *)(lVar1 + 0x18) + 0x210) == local_140[0]) goto LAB_1412e06d8;
      }
LAB_1412e06ec:
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar7);
    if (*param_3 != -1) {
      piVar8 = (int *)(lVar5 + 0xf8);
      uVar10 = 0;
      do {
        if (((piVar8[4] == *param_3) &&
            (((iVar3 = piVar8[6], iVar3 == 0 || iVar3 == local_140[0] || (piVar8[7] == 0)) ||
             (iVar3 == DAT_14c948000)))) && (*piVar8 - 1U < (uint)piVar8[0x10])) goto LAB_1412e07b2;
        uVar10 = uVar10 + 1;
        piVar8 = piVar8 + 0x54;
      } while (uVar10 < uVar7);
    }
  }
  uVar7 = 0;
  goto LAB_1412e079a;
LAB_1412e07b2:
  uVar7 = CONCAT71(uVar11,1);
LAB_1412e079a:
  if (local_128 != 0) {
    FUN_1400020a8();
  }
LAB_1412e0610:
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1412e07b8 FUN_1412e07b8 body=493 status=ok
// SIG undefined FUN_1412e07b8(void)

void FUN_1412e07b8(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  code *pcVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140d128b6(param_1,&local_48);
  pcVar3 = local_48;
  SRWLock = (PSRWLOCK)(local_48 + 0x638);
  AcquireSRWLockExclusive(SRWLock);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if (pcVar3[0x430] == (code)0x0) {
    iVar4 = *(int *)(pcVar3 + 0x434) + 1;
  }
  else {
    if (*(int *)(pcVar3 + 0x434) != 0) goto LAB_1412e0838;
    iVar4 = 1;
  }
  pcVar3[0x430] = (code)0x1;
  *(int *)(pcVar3 + 0x434) = iVar4;
LAB_1412e0838:
  FUN_140d12946(param_1,param_2);
  lVar5 = FUN_1400d7050(param_1 + 0x30);
  if (lVar5 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_48 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1459f2e4c;
      local_68 = &LAB_148c39de3;
      local_70 = &LAB_1457a9eb2;
      local_78 = &DAT_149e063b2;
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x3de0;
      local_60 = &local_48;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    iVar4 = *(int *)(DAT_14cbadd90 + 0x38);
    if ((iVar4 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar4 * 8) ==
        DAT_14cbadd90 + 0x30)) {
      FUN_140898514(lVar5 + 0x3da0,CONCAT71((int7)(int3)((uint)iVar4 >> 8),1));
      FUN_1403ca8ec(lVar5 + 0xd98,&DAT_14cbd95f0);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001412e08cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive(SRWLock);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412e09a6 FUN_1412e09a6 body=57 status=ok
// SIG undefined FUN_1412e09a6(void)

void FUN_1412e09a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a3a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a3a8 = FUN_140002ddd(FUN_1464c9056,uVar1,L"GbxBodyNodeState_AttachableRoot");
  }
  return;
}



// FUNCTION 1412e09e0 FUN_1412e09e0 body=106 status=ok
// SIG undefined FUN_1412e09e0(void)

undefined8 FUN_1412e09e0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  FUN_140880c0c();
  lVar2 = FUN_1447210f0(param_1[7]);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x6d0);
  }
  param_1[0x28] = lVar2;
  FUN_140880f34(param_1);
  lVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  if (lVar2 != 0) {
    cVar1 = FUN_1408838b6(param_1,lVar2,0,1);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x29) = 1;
    }
  }
  return 0;
}



// FUNCTION 1412e0a52 FUN_1412e0a52 body=772 status=ok
// SIG undefined FUN_1412e0a52(void)

undefined8 * FUN_1412e0a52(undefined8 *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined1 auStack_68 [40];
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  memset(param_1,0,0x198);
  FUN_140c2310e(param_1);
  *param_1 = &PTR_FUN_14b486ab0;
  *(undefined2 *)(param_1 + 0x33) = 0x101;
  param_1[0x34] = 0;
  *(undefined2 *)(param_1 + 0x38) = 4;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x39) = 1;
  bVar1 = DAT_14c9a8634;
  *(bool *)(param_1 + 0x3a) = (DAT_14c9a8634 & 0x20) == 0;
  param_1[0x3b] = 0;
  *(undefined2 *)(param_1 + 0x3f) = 4;
  *(undefined4 *)(param_1 + 0x3c) = 0x40200000;
  *(undefined1 *)(param_1 + 0x40) = 3;
  *(char *)(param_1 + 0x41) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x42] = 0;
  *(undefined2 *)(param_1 + 0x46) = 4;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined1 *)(param_1 + 0x47) = 1;
  *(bool *)(param_1 + 0x48) = (bVar1 & 0x20) == 0;
  param_1[0x49] = 0;
  *(undefined2 *)(param_1 + 0x4d) = 4;
  *(undefined4 *)(param_1 + 0x4a) = 0x40200000;
  *(undefined1 *)(param_1 + 0x4e) = 3;
  *(char *)(param_1 + 0x4f) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x54) = 1;
  *(undefined2 *)(param_1 + 0x55) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  FUN_140440628(param_1 + 0x57,&DAT_14cb94c70,0);
  local_40 = "DE_Callout_TakeCover";
  local_38 = 0x14;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  param_1[0x5e] = (ulonglong)uVar2;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined1 *)(param_1 + 0x61) = 4;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined8 *)((longlong)param_1 + 0x344) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34c) = 0;
  param_1[0x6b] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x394) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x39c) = 0;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0xffffffff00000000;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3fc) = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0x200000000;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0x20;
  *(undefined4 *)(param_1 + 0x92) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x95) = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0x200000000;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4f4) = 0x20;
  *(undefined4 *)(param_1 + 0x9f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4fc) = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0x200000000;
  param_1[0xaa] = 0;
  *(undefined4 *)(param_1 + 0xab) = 0;
  *(undefined4 *)((longlong)param_1 + 0x55c) = 0x20;
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x564) = 0;
  param_1[0xae] = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0;
  param_1[0xb0] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412e0d58 FUN_1412e0d58 body=164 status=ok
// SIG undefined FUN_1412e0d58(void)

void FUN_1412e0d58(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    FUN_1400ee60a(*param_1 + 0x38,(longlong)param_1 + 0x2c);
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  }
  FUN_1412e0dfc(param_1);
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
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



// FUNCTION 1412e0dfc FUN_1412e0dfc body=398 status=ok
// SIG undefined FUN_1412e0dfc(void)

void FUN_1412e0dfc(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  return;
}



// FUNCTION 1412e0f8a FUN_1412e0f8a body=392 status=ok
// SIG undefined FUN_1412e0f8a(void)

undefined8 FUN_1412e0f8a(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = 0;
  local_58 = param_2;
  if ((param_2 != 0) && (param_3 != 0)) {
    if ((*(uint *)(param_3 + 8) >> 0x1e & 1) == 0) {
      if ((longlong)*(int *)(param_1 + 0x30) != 0) {
        plVar4 = *(longlong **)(param_1 + 0x28);
        lVar3 = (longlong)*(int *)(param_1 + 0x30) * 0x30;
        do {
          if (*plVar4 == param_2) {
            if (plVar4 != (longlong *)0x0) goto LAB_1412e100e;
            break;
          }
          plVar4 = plVar4 + 6;
          lVar3 = lVar3 + -0x30;
        } while (lVar3 != 0);
      }
      plVar4 = (longlong *)FUN_1458be766(param_1 + 0x28);
      *plVar4 = param_2;
LAB_1412e100e:
      if ((longlong)(int)plVar4[2] != 0) {
        lVar3 = plVar4[1];
        lVar6 = (longlong)(int)plVar4[2] << 4;
        do {
          cVar2 = FUN_14069eaf4(lVar3,param_3);
          if (cVar2 != '\0') {
            if (lVar3 != 0) goto LAB_1412e110f;
            break;
          }
          lVar3 = lVar3 + 0x10;
          lVar6 = lVar6 + -0x10;
        } while (lVar6 != 0);
      }
      iVar1 = (int)plVar4[2];
      *(uint *)(plVar4 + 2) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar4 + 0x14) < iVar1 + 1U) {
        FUN_1458be86e(plVar4 + 1,iVar1);
      }
      lVar3 = plVar4[1];
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      FUN_14485c47a(lVar6 + lVar3,param_3);
      *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
      FUN_1458be956(local_50,param_1,&local_58);
      FUN_14490d954(param_3 + 0x2b8,&local_60,local_50);
      FUN_1449db362(local_50);
      *(undefined8 *)(lVar3 + 8 + lVar6) = local_60;
      FUN_1458be7c2(plVar4 + 3,0,param_3);
      uVar5 = 1;
    }
    else {
LAB_1412e110f:
      uVar5 = 0;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1412e1114 FUN_1412e1114 body=741 status=ok
// SIG undefined FUN_1412e1114(void)

void FUN_1412e1114(longlong param_1,char param_2,longlong param_3,ulonglong param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  bool bVar20;
  
  if (param_3 != 0) {
    if ((longlong)*(int *)(param_1 + 0x68) != 0) {
      puVar12 = *(uint **)(param_1 + 0x60);
      lVar19 = (longlong)*(int *)(param_1 + 0x68) * 0x18;
      do {
        cVar5 = FUN_14069eaf4(puVar12,param_3);
        if (cVar5 != '\0') goto LAB_1412e1164;
        puVar12 = puVar12 + 6;
        lVar19 = lVar19 + -0x18;
      } while (lVar19 != 0);
    }
    puVar12 = (uint *)0x0;
LAB_1412e1164:
    plVar1 = (longlong *)(param_1 + 0x60);
    if (param_2 == '\0' && puVar12 == (uint *)0x0) {
      iVar2 = *(int *)(param_1 + 0x68);
      *(uint *)(param_1 + 0x68) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x6c) < iVar2 + 1U) {
        FUN_1412e1408(plVar1,iVar2);
      }
      puVar12 = (uint *)(*plVar1 + (longlong)iVar2 * 0x18);
      FUN_1412e13f9(puVar12);
      uVar8 = *(uint *)(param_3 + 0xc);
      *puVar12 = uVar8;
      if ((int)uVar8 < DAT_14c9647dc) {
        lVar19 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
      }
      else {
        lVar19 = 0;
      }
      uVar8 = *(uint *)(lVar19 + 0x10);
      if (*(uint *)(lVar19 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        uVar18 = DAT_14c964868 + 1;
        bVar20 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar20) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar18);
        }
        LOCK();
        uVar8 = *(uint *)(lVar19 + 0x10);
        bVar20 = uVar8 == 0;
        if (bVar20) {
          *(uint *)(lVar19 + 0x10) = uVar18;
          uVar8 = 0;
        }
        UNLOCK();
        if (bVar20) {
          uVar8 = uVar18;
        }
      }
      puVar12[1] = uVar8;
    }
    if (puVar12 != (uint *)0x0) {
      if (param_2 == '\x01') {
        uVar11 = ~param_4 & *(ulonglong *)(puVar12 + 2);
        *(ulonglong *)(puVar12 + 2) = uVar11;
        if ((longlong)*(int *)(param_1 + 0x58) != 0) {
          lVar19 = (longlong)*(int *)(param_1 + 0x58) * 0x18;
          do {
            FUN_140ce02b0();
            lVar19 = lVar19 + -0x18;
          } while (lVar19 != 0);
          uVar11 = *(ulonglong *)(puVar12 + 2);
        }
        if (uVar11 == 0) {
          puVar12[0] = 0;
          puVar12[1] = 0;
          iVar2 = *(int *)(param_1 + 0x68);
          lVar19 = (longlong)iVar2;
          if (lVar19 != 0) {
            lVar3 = *plVar1;
            iVar10 = 0;
            bVar6 = FUN_14079e1ea(lVar3,0);
            iVar15 = 0;
            do {
              lVar13 = (longlong)iVar15;
              iVar4 = iVar15 + 1;
              if (iVar15 + 1 < iVar2) {
                iVar4 = iVar2;
              }
              lVar9 = lVar3 + 0x18 + lVar13 * 0x18;
              iVar17 = iVar15;
              lVar14 = lVar13;
              do {
                lVar14 = lVar14 + 1;
                iVar16 = iVar4;
                if (lVar19 <= lVar14) break;
                bVar7 = FUN_14079e1ea(lVar9,0);
                iVar17 = iVar17 + 1;
                lVar9 = lVar9 + 0x18;
                iVar16 = iVar17;
              } while ((bVar6 & 1) == bVar7);
              if ((bVar6 & 1) == 0) {
                if (iVar10 != iVar15) {
                  memmove((void *)(lVar3 + (longlong)iVar10 * 0x18),(void *)(lVar3 + lVar13 * 0x18),
                          (longlong)(iVar16 - iVar15) * 0x18);
                }
                iVar10 = iVar10 + (iVar16 - iVar15);
              }
              iVar15 = iVar16;
              bVar6 = bVar6 ^ 1;
            } while (lVar14 < lVar19);
            *(int *)(param_1 + 0x68) = iVar10;
          }
        }
      }
      else if (param_2 == '\0') {
        *(ulonglong *)(puVar12 + 2) = *(ulonglong *)(puVar12 + 2) | param_4;
        if ((longlong)*(int *)(param_1 + 0x58) != 0) {
          lVar19 = (longlong)*(int *)(param_1 + 0x58) * 0x18;
          do {
            FUN_140ce02b0();
            lVar19 = lVar19 + -0x18;
          } while (lVar19 != 0);
        }
      }
    }
  }
  return;
}



// FUNCTION 1412e13f9 FUN_1412e13f9 body=15 status=ok
// SIG undefined FUN_1412e13f9(void)

void FUN_1412e13f9(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 1412e1408 FUN_1412e1408 body=370 status=ok
// SIG undefined FUN_1412e1408(void)

void FUN_1412e1408(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x18;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1412e1491;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1412e1491:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1412e157a FUN_1412e157a body=982 status=ok
// SIG undefined FUN_1412e157a(void)

void FUN_1412e157a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  size_t sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint *puVar16;
  longlong *plVar17;
  wchar_t *_Str;
  longlong lVar18;
  int iVar19;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  longlong *local_150;
  uint local_144;
  ulonglong local_140;
  uint *local_138;
  undefined4 local_12c;
  byte *local_128;
  longlong *plStack_120;
  int local_10c;
  undefined8 *local_108;
  undefined4 *local_100;
  longlong local_f0;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    local_128 = (byte *)0x0;
    plStack_120 = (longlong *)0x0;
    uVar11 = 0;
    FUN_14009b010(&local_128,3,0);
    uVar4 = *(uint *)(param_1 + 5);
    if (uVar4 == 0) {
      uVar14 = 1;
      uVar5 = 0;
      iVar19 = 0;
    }
    else {
      puVar6 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 2);
      }
      uVar5 = *puVar6;
      if (uVar5 == 0) {
        iVar19 = uVar4 + 0x1e;
        if (-1 < (int)(uVar4 - 1)) {
          iVar19 = uVar4 - 1;
        }
        uVar11 = 0;
        uVar14 = (ulonglong)(uint)(iVar19 >> 5);
        if (iVar19 >> 5 < 1) {
          uVar14 = uVar11;
        }
        iVar19 = 0;
        do {
          if (uVar14 == uVar11) goto LAB_1412e1819;
          iVar19 = iVar19 + 0x20;
          uVar5 = puVar6[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar5 == 0);
      }
      else {
        uVar11 = 0;
        iVar19 = 0;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar3 = uVar14 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      uVar5 = (iVar19 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if ((int)uVar4 <= (int)uVar5) {
        uVar5 = uVar4;
      }
    }
    if (uVar5 != uVar4) {
      uVar12 = 0xffffffff;
      local_150 = param_2;
      local_140 = (ulonglong)uVar4;
      local_138 = (uint *)(param_1 + 2);
      do {
        plVar17 = &DAT_14c9a1288;
        if ((local_128 != (byte *)0x0) && (plVar17 = &DAT_14c9a1288, (*local_128 & 2) != 0)) {
          plVar17 = (longlong *)(*(longlong *)(local_128 + 8) + 0x18);
        }
        lVar18 = (longlong)(int)uVar5 * 0x20 + *param_1;
        local_12c = 1;
        local_144 = uVar12;
        FUN_1446dcdd4(&local_70,lVar18);
        local_100 = &local_12c;
        local_108 = &local_70;
        FUN_1412e1952(plVar17,&local_10c,&local_108,0);
        lVar13 = (longlong)local_10c;
        lVar15 = *plVar17;
        if (*(int *)(lVar18 + 0x10) == 0) {
          _Str = L"";
LAB_1412e1702:
          local_88 = 0;
          sVar7 = wcslen(_Str);
          FUN_1449b853c(&local_108,_Str,sVar7 & 0xffffffff,1);
        }
        else {
          _Str = *(wchar_t **)(lVar18 + 8);
          local_88 = 0;
          if (_Str != (wchar_t *)0x0) goto LAB_1412e1702;
          local_80 = 0;
          local_78 = 0;
        }
        puVar6 = local_138;
        param_2 = local_150;
        lVar15 = *(longlong *)(lVar15 + lVar13 * 0x40 + 0x28);
        if ((lVar15 != 0) && ((*(byte *)(lVar15 + 1) & 2) == 0)) {
          FUN_140126aca(lVar15,local_80);
        }
        uVar12 = local_144;
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        uVar12 = uVar12 & ~(uint)uVar14;
        puVar16 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar16 = puVar6;
        }
        uVar4 = *(uint *)(param_1 + 5);
        iVar10 = (int)uVar11;
        lVar15 = (longlong)iVar10;
        uVar5 = puVar16[lVar15] & uVar12;
        if (uVar5 == 0) {
          iVar8 = uVar4 + 0x1e;
          if (-1 < (int)(uVar4 - 1)) {
            iVar8 = uVar4 - 1;
          }
          iVar8 = iVar8 >> 5;
          iVar19 = iVar19 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar10) {
            iVar9 = iVar10;
          }
          if (iVar10 < iVar8) {
            lVar13 = 0;
            do {
              uVar5 = puVar16[lVar15 + lVar13 + 1];
              if (uVar5 != 0) {
                uVar11 = (ulonglong)(iVar10 + (int)lVar13 + 1);
                uVar12 = 0xffffffff;
                goto LAB_1412e17e0;
              }
              iVar19 = iVar19 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar9 - lVar15 != lVar13);
            uVar12 = 0xffffffff;
            iVar10 = iVar9;
          }
          uVar11 = (ulonglong)(iVar10 + 1);
          param_2 = local_150;
          uVar5 = uVar4;
        }
        else {
LAB_1412e17e0:
          uVar14 = (ulonglong)(-uVar5 & uVar5);
          uVar3 = uVar14 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          uVar5 = (iVar19 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if ((int)uVar4 <= (int)uVar5) {
            uVar5 = uVar4;
          }
        }
      } while (uVar5 != (uint)local_140);
    }
LAB_1412e1819:
    local_68 = DAT_14cbcf688;
    local_70 = DAT_14cbcf680;
    FUN_1448075d0(&local_108);
    if (*param_2 != 0) {
      local_158 = 0;
      FUN_14014191c(*param_2,&local_108,&local_128,0);
    }
    if (local_f0 != 0) {
      FUN_1400020a8();
    }
    plVar17 = plStack_120;
    if (plStack_120 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_120 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_120)(plStack_120);
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
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412e1952 FUN_1412e1952 body=566 status=ok
// SIG undefined FUN_1412e1952(void)

uint * FUN_1412e1952(longlong *param_1,uint *param_2,undefined8 *param_3,char *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong *plVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  uint uVar24;
  char cVar25;
  undefined1 auStack_98 [32];
  longlong *local_78;
  uint local_70 [2];
  uint *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1449c02b2(param_1,local_70);
  uVar5 = *param_3;
  puVar6 = (undefined4 *)param_3[1];
  puVar3 = local_68;
  puVar3[0] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  local_68[4] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  FUN_1404e49fa(local_68,uVar5);
  uVar4 = *puVar6;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  FUN_14009b010(local_68 + 10,uVar4,0);
  local_68[0xe] = 0xffffffff;
  uVar21 = *local_68;
  if (1 < (uint)((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c))) {
    plVar20 = param_1 + 8;
    if ((longlong *)param_1[9] != (longlong *)0x0) {
      plVar20 = (longlong *)param_1[9];
    }
    uVar24 = *(uint *)((longlong)plVar20 + (ulonglong)((int)param_1[10] - 1U & uVar21) * 4);
    if (uVar24 != 0xffffffff) {
      do {
        puVar3 = (uint *)(*param_1 + (longlong)(int)uVar24 * 0x40);
        if (*(uint *)(*param_1 + (longlong)(int)uVar24 * 0x40) == uVar21) {
          plVar20 = *(longlong **)(puVar3 + 0xc);
          if (plVar20 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar20 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              local_78 = plVar20;
              (**(code **)*plVar20)(plVar20);
              LOCK();
              piVar2 = (int *)((longlong)local_78 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_78 + 0x10))();
              }
            }
          }
          if (*(longlong *)(puVar3 + 6) != 0) {
            FUN_1400020a8();
          }
          uVar19 = *local_68;
          uVar8 = local_68[1];
          uVar9 = local_68[2];
          uVar10 = local_68[3];
          uVar11 = local_68[4];
          uVar12 = local_68[5];
          uVar13 = local_68[6];
          uVar14 = local_68[7];
          uVar15 = local_68[8];
          uVar16 = local_68[9];
          uVar17 = local_68[10];
          uVar18 = local_68[0xb];
          *(undefined8 *)(puVar3 + 0xc) = *(undefined8 *)(local_68 + 0xc);
          puVar3[8] = uVar15;
          puVar3[9] = uVar16;
          puVar3[10] = uVar17;
          puVar3[0xb] = uVar18;
          puVar3[4] = uVar11;
          puVar3[5] = uVar12;
          puVar3[6] = uVar13;
          puVar3[7] = uVar14;
          *puVar3 = uVar19;
          puVar3[1] = uVar8;
          puVar3[2] = uVar9;
          puVar3[3] = uVar10;
          FUN_140458984(param_1,local_70[0],1);
          cVar25 = '\x01';
          goto LAB_1412e1a39;
        }
        uVar24 = puVar3[0xe];
      } while (uVar24 != 0xffffffff);
    }
  }
  cVar25 = '\0';
  uVar24 = local_70[0];
LAB_1412e1a39:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar25;
  }
  if (cVar25 == '\0') {
    uVar19 = (int)param_1[2] - *(int *)((longlong)param_1 + 0x3c);
    iVar23 = 1;
    if (3 < uVar19) {
      uVar22 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar23 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar19 < 1) || (iVar23 <= (int)param_1[10])) {
      uVar21 = (int)param_1[10] - 1U & uVar21;
      local_68[0xf] = uVar21;
      plVar20 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar20 = param_1 + 8;
      }
      local_68[0xe] =
           *(uint *)((longlong)plVar20 +
                    ((longlong)(int)param_1[10] - 1U & (longlong)(int)uVar21) * 4);
      plVar20 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar20 = param_1 + 8;
      }
      *(uint *)((longlong)plVar20 + ((longlong)(int)param_1[10] - 1U & (longlong)(int)uVar21) * 4) =
           uVar24;
    }
    else {
      *(int *)(param_1 + 10) = iVar23;
      FUN_1446eb800(param_1);
    }
  }
  *param_2 = uVar24;
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1412e1b8a FUN_1412e1b8a body=63 status=ok
// SIG undefined FUN_1412e1b8a(void)

undefined1 FUN_1412e1b8a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1412e1bca(param_2,param_3);
    param_3 = param_3 + 0x220;
    param_2 = param_2 + 0x220;
  }
  return 1;
}



// FUNCTION 1412e1bca FUN_1412e1bca body=1058 status=ok
// SIG undefined FUN_1412e1bca(void)

longlong FUN_1412e1bca(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if ((*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8)) ||
     (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10))) {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  lVar7 = *(longlong *)(param_2 + 0x20);
  if (DAT_14c950c29 == 1) {
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_14689c22e();
      lVar7 = *(longlong *)(param_2 + 0x20);
    }
  }
  bVar6 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x20) = lVar7;
  lVar7 = *(longlong *)(param_2 + 0x28);
  if ((bVar6 & 1) != 0) {
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_14689c22e();
      lVar7 = *(longlong *)(param_2 + 0x28);
      bVar6 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x28) = lVar7;
  puVar8 = (undefined8 *)(param_2 + 0x30);
  puVar9 = (undefined8 *)(param_1 + 0x30);
  for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  lVar7 = *(longlong *)(param_2 + 0x80);
  if ((bVar6 & 1) != 0) {
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_14689c22e();
      lVar7 = *(longlong *)(param_2 + 0x80);
      bVar6 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x80) = lVar7;
  lVar7 = *(longlong *)(param_2 + 0x88);
  if ((bVar6 & 1) != 0) {
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_14689c22e();
      lVar7 = *(longlong *)(param_2 + 0x88);
      bVar6 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x88) = lVar7;
  puVar8 = (undefined8 *)(param_2 + 0x90);
  puVar9 = (undefined8 *)(param_1 + 0x90);
  for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  lVar7 = *(longlong *)(param_2 + 0xe8);
  if ((bVar6 & 1) != 0) {
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_14689c22e();
      lVar7 = *(longlong *)(param_2 + 0xe8);
      bVar6 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0xe8) = lVar7;
  lVar7 = *(longlong *)(param_2 + 0xf0);
  if ((bVar6 & 1) != 0) {
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_14689c22e();
      lVar7 = *(longlong *)(param_2 + 0xf0);
    }
  }
  *(longlong *)(param_1 + 0xf0) = lVar7;
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  if ((*(longlong *)(param_1 + 0x100) != *(longlong *)(param_2 + 0x100)) ||
     (*(int *)(param_1 + 0x108) != *(int *)(param_2 + 0x108))) {
    *(longlong *)(param_1 + 0x100) = *(longlong *)(param_2 + 0x100);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  if (param_1 != param_2) {
    lVar7 = param_2 + 0x118;
    if (*(longlong *)(param_2 + 0x148) != 0) {
      lVar7 = *(longlong *)(param_2 + 0x148);
    }
    FUN_1400709d4(param_1 + 0x118,lVar7,*(undefined4 *)(param_2 + 0x150),
                  *(undefined4 *)(param_1 + 0x154));
  }
  lVar7 = *(longlong *)(param_2 + 0x158);
  if (DAT_14c950c29 == 1) {
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_14689c22e();
      lVar7 = *(longlong *)(param_2 + 0x158);
    }
  }
  *(longlong *)(param_1 + 0x158) = lVar7;
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  if ((*(longlong *)(param_1 + 0x178) != *(longlong *)(param_2 + 0x178)) ||
     (*(int *)(param_1 + 0x180) != *(int *)(param_2 + 0x180))) {
    *(longlong *)(param_1 + 0x178) = *(longlong *)(param_2 + 0x178);
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  uVar4 = *(undefined8 *)(param_2 + 400);
  uVar5 = *(undefined8 *)(param_2 + 0x198);
  uVar1 = *(undefined4 *)(param_2 + 0x1a4);
  uVar2 = *(undefined4 *)(param_2 + 0x1a8);
  uVar3 = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  *(undefined4 *)(param_1 + 0x1a8) = uVar2;
  *(undefined4 *)(param_1 + 0x1ac) = uVar3;
  *(undefined8 *)(param_1 + 400) = uVar4;
  *(undefined8 *)(param_1 + 0x198) = uVar5;
  if ((*(longlong *)(param_1 + 0x1b0) != *(longlong *)(param_2 + 0x1b0)) ||
     (*(int *)(param_1 + 0x1b8) != *(int *)(param_2 + 0x1b8))) {
    *(longlong *)(param_1 + 0x1b0) = *(longlong *)(param_2 + 0x1b0);
    *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
    *(undefined8 *)(param_1 + 0x1c0) = 0;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x1cc);
  uVar2 = *(undefined4 *)(param_2 + 0x1d0);
  uVar3 = *(undefined4 *)(param_2 + 0x1d4);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1cc) = uVar1;
  *(undefined4 *)(param_1 + 0x1d0) = uVar2;
  *(undefined4 *)(param_1 + 0x1d4) = uVar3;
  (**(code **)(*(longlong *)(param_1 + 0x1d8) + 0x20))(param_1 + 0x1d8,0);
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_2 + 0x1e0);
  FUN_1406022fe(param_1 + 0x1e8,param_2 + 0x1e8);
  FUN_1403e0f94(param_1 + 0x1f8,param_2 + 0x1f8);
  *(undefined2 *)(param_1 + 0x208) = *(undefined2 *)(param_2 + 0x208);
  lVar7 = *(longlong *)(param_2 + 0x210);
  if (DAT_14c950c29 == 1) {
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_14689c22e();
      lVar7 = *(longlong *)(param_2 + 0x210);
    }
  }
  *(longlong *)(param_1 + 0x210) = lVar7;
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
  return param_1;
}



// FUNCTION 1412e1fec FUN_1412e1fec body=206 status=ok
// SIG undefined FUN_1412e1fec(void)

ulonglong FUN_1412e1fec(uint param_1,byte param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined7 uVar6;
  ulonglong uVar7;
  
  lVar2 = DAT_14ca97170;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar7 = 0;
  }
  else if (iVar1 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar7 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar7 = 1;
  }
  if (((*(int *)(lVar2 + uVar7 * 4) < 1) ||
      (cVar3 = FUN_144b1cdc5((ulonglong)param_1), cVar3 == '\0')) ||
     ((uVar7 = (ulonglong)param_1 & 0xffff, (int)(&DAT_14ca814b8)[uVar7 * 0xf] < 3 ||
      (lVar2 = *(longlong *)(&DAT_14ca814b0 + uVar7 * 0x3c), lVar2 == DAT_14ca81498)))) {
    return 0;
  }
  uVar6 = (undefined7)((ulonglong)lVar2 >> 8);
  if ((param_2 & lVar2 != DAT_14ca838f8) != 1) {
    return CONCAT71(uVar6,lVar2 != DAT_14ca838f8);
  }
  if ((*(byte *)(&DAT_14ca814c8 + uVar7 * 0xf) & 4) != 0) {
    return CONCAT71(uVar6,1);
  }
  return (ulonglong)param_3 & 0xffffffffffffff01;
}



// FUNCTION 1412e20ba FUN_1412e20ba body=211 status=ok
// SIG undefined FUN_1412e20ba(void)

undefined8 * FUN_1412e20ba(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b7f16b0;
  param_1[0x72] = &PTR_LAB_14b7f1cf0;
  param_1[0x73] = &PTR_LAB_14b7f1d10;
  param_1[0x74] = &PTR_LAB_14b7f1d80;
  param_1[0x75] = &PTR_LAB_14b7f1db0;
  param_1[0x76] = &PTR_LAB_14b7f1e00;
  param_1[0xd6] = &PTR_LAB_14b7f1e30;
  if (*(char *)(param_1 + 0xe1) == '\x01') {
    *(undefined1 *)(param_1 + 0xe1) = 0;
  }
  FUN_144760e21(param_1[0xd9],*(undefined4 *)(param_1 + 0xda));
  if (param_1[0xd9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd7] != 0) {
    FUN_1400020a8();
  }
  FUN_1412e218e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1412e218e FUN_1412e218e body=299 status=ok
// SIG undefined FUN_1412e218e(void)

void FUN_1412e218e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3cc230;
  param_1[0x72] = &PTR_FUN_14b3cc870;
  param_1[0x73] = &PTR_FUN_14b3cc890;
  param_1[0x74] = &PTR_FUN_14b3cc900;
  param_1[0x75] = &PTR_FUN_14b3cc930;
  param_1[0x76] = &PTR_FUN_14b3cc980;
  if (param_1[0xd1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xcf] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xcd];
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
  FUN_1403d7b38(param_1 + 0xbe);
  plVar3 = (longlong *)param_1[0xbd];
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
  param_1[0x78] = &PTR_FUN_14b3ccfc0;
  if (param_1[0x80] != 0) {
    FUN_140872868(param_1 + 0x78);
  }
  FUN_1403d7c6c(param_1 + 0x78);
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 1412e22ba FUN_1412e22ba body=863 status=ok
// SIG undefined FUN_1412e22ba(void)

void FUN_1412e22ba(longlong param_1,float param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  
  FUN_1412e29a6();
  FUN_1412e261a(param_1,param_3);
  if (((((param_3 != 0) && (-1 < *(char *)(param_3 + 0x14c))) && (*(int *)(param_1 + 0x35c) != 0))
      && ((uVar1 = *(uint *)(param_1 + 0x358), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) &&
     ((lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0 &&
      ((*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x35c) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))))) {
    lVar3 = FUN_1447e736e(param_1 + 800);
    if (lVar3 == 0) {
      lVar3 = param_1 + 0x2a0;
    }
    else {
      lVar3 = FUN_1447e736e(param_1 + 800);
      lVar3 = lVar3 + 0x30;
    }
    lVar2 = FUN_1447e736e(param_1 + 0x270);
    if (lVar2 == 0) {
      lVar2 = param_1 + 0x1f0;
    }
    else {
      lVar2 = FUN_1447e736e(param_1 + 0x270);
      lVar2 = lVar2 + 0x30;
    }
    if ((lVar3 != 0) && (lVar2 != 0)) {
      FUN_1412e26e6(param_1,param_3);
      fVar4 = (float)FUN_1448c9f94(lVar3);
      fVar5 = (float)FUN_1448c9f94(lVar2);
      dVar7 = (double)FUN_144719204((int)*(undefined8 *)(param_3 + 0x48));
      dVar7 = (double)(~-(ulonglong)(dVar7 < 0.0) & (ulonglong)dVar7 |
                      (ulonglong)(dVar7 + 360.0) & -(ulonglong)(dVar7 < 0.0));
      fVar6 = (float)(double)(~-(ulonglong)(180.0 < dVar7) & (ulonglong)dVar7 |
                             (ulonglong)(dVar7 + -360.0) & -(ulonglong)(180.0 < dVar7));
      if (*(char *)(param_1 + 0x34c) == '\x01') {
        fVar8 = fVar6;
        if (fVar4 <= fVar6) {
          fVar8 = fVar4;
        }
        fVar4 = fVar8;
        *(float *)(param_1 + 0x350) = fVar4;
        fVar8 = fVar6;
        if (fVar6 <= fVar5) {
          fVar8 = fVar5;
        }
        *(float *)(param_1 + 0x354) = fVar8;
        *(undefined1 *)(param_1 + 0x34c) = 0;
      }
      else {
        fVar8 = *(float *)(param_1 + 0x348);
        if (fVar8 <= 0.0) {
          *(float *)(param_1 + 0x350) = fVar4;
        }
        else {
          fVar9 = fVar4 - *(float *)(param_1 + 0x350);
          if (1e-08 <= fVar9 * fVar9) {
            fVar4 = fVar8 * param_2;
            if (1.0 <= fVar4) {
              fVar4 = 1.0;
            }
            if (fVar4 <= 0.0) {
              fVar4 = 0.0;
            }
            fVar4 = *(float *)(param_1 + 0x350) + fVar9 * fVar4;
          }
          *(float *)(param_1 + 0x350) = fVar4;
          fVar9 = fVar5 - *(float *)(param_1 + 0x354);
          if (1e-08 <= fVar9 * fVar9) {
            fVar8 = fVar8 * param_2;
            if (1.0 <= fVar8) {
              fVar8 = 1.0;
            }
            if (fVar8 <= 0.0) {
              fVar8 = 0.0;
            }
            fVar5 = *(float *)(param_1 + 0x354) + fVar8 * fVar9;
          }
        }
        *(float *)(param_1 + 0x354) = fVar5;
        fVar8 = fVar5;
      }
      if (fVar8 <= fVar6) {
        fVar6 = fVar8;
      }
      if (fVar6 <= fVar4) {
        fVar6 = fVar4;
      }
      *(double *)(param_3 + 0x48) = (double)fVar6;
      dVar7 = *(double *)(param_3 + 0xa0);
      fVar4 = (float)((double)fVar6 + dVar7);
      if (*(float *)(param_1 + 0x354) < fVar4) {
        dVar7 = dVar7 - (double)(fVar4 - *(float *)(param_1 + 0x354));
      }
      else {
        if (*(float *)(param_1 + 0x350) <= fVar4) {
          return;
        }
        dVar7 = dVar7 + (double)(*(float *)(param_1 + 0x350) - fVar4);
      }
      *(double *)(param_3 + 0xa0) = dVar7;
    }
  }
  return;
}



// FUNCTION 1412e261a FUN_1412e261a body=203 status=ok
// SIG undefined FUN_1412e261a(void)

void FUN_1412e261a(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (((param_2 == 0) || (lVar2 = *(longlong *)(param_2 + 0x28), lVar2 == 0)) ||
     (*(longlong *)(lVar2 + 0xe0) == 0)) {
    return;
  }
  if (((((*(int *)(param_1 + 0x35c) != 0) && (uVar1 = *(uint *)(param_1 + 0x358), -1 < (int)uVar1))
       && (((int)uVar1 < DAT_14c9647dc &&
           ((plVar6 = (longlong *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
            plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(param_1 + 0x35c))))))) &&
      ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) && (*(longlong *)(lVar2 + 0xe0) == *plVar6)) {
    return;
  }
  lVar4 = FUN_144a78b9e();
  lVar2 = *(longlong *)(lVar2 + 0xe0);
  if (lVar2 != 0) {
    lVar5 = 0;
    if ((lVar4 == 0) || (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 == 0)) goto LAB_1412e26d3;
    if (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38)) {
      lVar5 = 0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        lVar5 = lVar2;
      }
      goto LAB_1412e26d3;
    }
  }
  lVar5 = 0;
LAB_1412e26d3:
  FUN_14485c47a((uint *)(param_1 + 0x358),lVar5);
  return;
}



// FUNCTION 1412e26e6 FUN_1412e26e6 body=704 status=ok
// SIG undefined FUN_1412e26e6(void)

void FUN_1412e26e6(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  
  if ((((*(longlong *)(param_2 + 0x28) != 0) && (*(int *)(param_1 + 0x35c) != 0)) &&
      (uVar4 = *(uint *)(param_1 + 0x358), -1 < (int)uVar4)) &&
     ((((int)uVar4 < DAT_14c9647dc &&
       (plVar6 = (longlong *)
                 ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
       plVar6 != (longlong *)0x0)) &&
      (((int)plVar6[2] == *(int *)(param_1 + 0x35c) && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))
      ))) {
    if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
      lVar5 = *plVar6;
    }
    else {
      lVar5 = 0;
    }
    lVar5 = *(longlong *)(lVar5 + 0x11e8);
    if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x555) & 3) == 1)) {
      dVar1 = *(double *)(lVar5 + 0x500);
      dVar2 = *(double *)(lVar5 + 0x508);
      dVar3 = *(double *)(lVar5 + 0x510);
      dVar8 = (double)FUN_144719204(*(undefined8 *)(param_2 + 0x48),0x4076800000000000);
      dVar9 = (double)FUN_144719204(*(undefined8 *)(param_2 + 0x50),0x4076800000000000);
      dVar10 = sin(dVar8 * 0.017453292519943295);
      dVar11 = cos(dVar8 * 0.017453292519943295);
      dVar8 = sin(dVar9 * 0.017453292519943295);
      dVar9 = cos(dVar9 * 0.017453292519943295);
      dVar8 = dVar8 * dVar11;
      dVar9 = dVar9 * dVar11;
      dVar11 = dVar9 * dVar9 + dVar8 * dVar8;
      if ((dVar11 != 1.0) || (NAN(dVar11))) {
        dVar14 = DAT_14c8464f0;
        dVar12 = DAT_14c8464e0;
        dVar10 = DAT_14c8464e8;
        if (9.99999993922529e-09 <= dVar11) {
          dVar14 = 0.0;
          dVar12 = dVar9 * (1.0 / SQRT(dVar11));
          dVar10 = dVar8 * (1.0 / SQRT(dVar11));
        }
      }
      else {
        dVar14 = (double)(-(ulonglong)(dVar10 == 0.0) & (ulonglong)dVar10);
        dVar12 = dVar9;
        dVar10 = dVar8;
      }
      if (((9.999999747378752e-05 < ABS(dVar12)) || (9.999999747378752e-05 < ABS(dVar10))) ||
         (9.999999747378752e-05 < ABS(dVar14))) {
        fVar7 = (float)(dVar14 * dVar3 + dVar12 * dVar1 + dVar2 * dVar10);
      }
      else {
        fVar7 = 0.0;
      }
      fVar13 = fVar7;
      if (1.0 <= fVar7) {
        fVar13 = 1.0;
      }
      asinf((float)(~-(uint)(fVar7 < -1.0) & (uint)fVar13 | -(uint)(fVar7 < -1.0) & 0xbf800000));
    }
  }
  return;
}



// FUNCTION 1412e29a6 FUN_1412e29a6 body=2473 status=ok
// SIG undefined FUN_1412e29a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412e29a6(longlong *param_1,undefined4 param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  byte bVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar32;
  double dVar33;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar34;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  double local_180;
  undefined1 local_178 [16];
  double local_168;
  double dStack_160;
  undefined1 local_158 [16];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined1 local_128 [16];
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((param_3 == 0) || (*(char *)((longlong)param_1 + 0x1e1) != '\0')) goto LAB_1412e2a37;
  local_180 = (double)CONCAT44(local_180._4_4_,param_2);
  (**(code **)(*param_1 + 0x78))(param_1,&local_e8);
  auVar15 = _DAT_1499387d0;
  auVar1._8_8_ = dStack_e0;
  auVar1._0_8_ = local_e8;
  dVar29 = (double)DAT_1499387d0;
  dVar34 = DAT_1499387d0._8_8_;
  auVar14 = divpd(auVar1,_DAT_1499387d0);
  auVar21._8_8_ = 0;
  auVar21._0_8_ = local_d8;
  auVar22 = divpd(auVar21,_DAT_1499387d0);
  auVar14 = roundpd(auVar14,auVar14,3);
  auVar22 = roundpd(auVar22,auVar22,3);
  dVar13 = (local_e8 - auVar14._0_8_ * dVar29) * 0.008726646259971648;
  dVar12 = (dStack_e0 - auVar14._8_8_ * dVar34) * 0.008726646259971648;
  dVar27 = (local_d8 - auVar22._0_8_ * dVar29) * 0.008726646259971648;
  dVar32 = (0.0 - auVar22._8_8_ * dVar34) * 0.008726646259971648;
  dVar5 = sin(dVar13);
  dVar6 = sin(dVar12);
  dVar7 = sin(dVar27);
  sin(dVar32);
  dVar8 = cos(dVar13);
  dVar9 = cos(dVar12);
  dVar10 = cos(dVar27);
  cos(dVar32);
  dVar13 = -(dVar9 * dVar5 * dVar7) + dVar6 * dVar8 * dVar10;
  dVar12 = dVar6 * dVar5 * dVar7 + dVar9 * dVar8 * dVar10;
  dVar27 = dVar5 * dVar6 * dVar10 - dVar8 * dVar9 * dVar7;
  dVar6 = -(dVar5 * dVar9 * dVar10) - dVar8 * dVar6 * dVar7;
  local_178._8_4_ = SUB84(dVar12,0);
  local_178._0_8_ = dVar13;
  local_178._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  dVar13 = dVar13 * -1.0;
  dVar12 = dVar12 * 1.0;
  auVar14 = *(undefined1 (*) [16])(param_3 + 0x48);
  auVar22 = divpd(auVar14,auVar15);
  auVar23._8_8_ = 0;
  auVar23._0_8_ = *(double *)(param_3 + 0x58);
  auVar24 = divpd(auVar23,auVar15);
  auVar15 = roundpd(auVar22,auVar22,3);
  auVar22 = roundpd(auVar24,auVar24,3);
  dVar9 = (auVar14._0_8_ - auVar15._0_8_ * dVar29) * 0.008726646259971648;
  dVar10 = (auVar14._8_8_ - auVar15._8_8_ * dVar34) * 0.008726646259971648;
  dVar29 = (*(double *)(param_3 + 0x58) - auVar22._0_8_ * dVar29) * 0.008726646259971648;
  dVar34 = (0.0 - auVar22._8_8_ * dVar34) * 0.008726646259971648;
  dVar5 = sin(dVar9);
  dVar7 = sin(dVar10);
  dVar8 = sin(dVar29);
  sin(dVar34);
  dVar9 = cos(dVar9);
  dVar10 = cos(dVar10);
  dVar32 = cos(dVar29);
  cos(dVar34);
  auVar1 = _DAT_1499387d0;
  dVar29 = (double)DAT_1499387d0;
  dVar34 = DAT_1499387d0._8_8_;
  dVar28 = -(dVar10 * dVar5 * dVar8) + dVar7 * dVar9 * dVar32;
  dVar33 = dVar7 * dVar5 * dVar8 + dVar10 * dVar9 * dVar32;
  dVar11 = dVar5 * dVar7 * dVar32 - dVar9 * dVar10 * dVar8;
  dVar5 = -(dVar5 * dVar10 * dVar32) - dVar9 * dVar7 * dVar8;
  local_108 = dVar5 * dVar13 * -1.0 + ((dVar12 * dVar11 - dVar27 * dVar33 * 1.0) - dVar28 * dVar6);
  dStack_100 = dVar11 * dVar13 * 1.0 + ((dVar12 * dVar5 - dVar27 * dVar28 * -1.0) - dVar33 * dVar6);
  local_f8 = dVar33 * dVar13 * 1.0 + dVar11 * dVar6 + (dVar12 * dVar28 - dVar27 * dVar5 * 1.0);
  dStack_f0 = dVar28 * dVar13 * -1.0 + dVar5 * dVar6 + (dVar12 * dVar33 - dVar27 * dVar11 * -1.0);
  FUN_1448052ee(&local_108,local_128);
  auVar14 = divpd(local_128,auVar1);
  auVar25._8_8_ = 0;
  auVar25._0_8_ = local_118;
  auVar15 = divpd(auVar25,auVar1);
  auVar14 = roundpd(auVar14,auVar14,3);
  auVar15 = roundpd(auVar15,auVar15,3);
  dVar13 = local_128._0_8_ - auVar14._0_8_ * dVar29;
  dVar12 = local_128._8_8_ - auVar14._8_8_ * dVar34;
  local_118 = local_118 - auVar15._0_8_ * dVar29;
  dVar5 = 0.0 - auVar15._8_8_ * dVar34;
  auVar26._0_8_ = dVar13 + dVar29;
  auVar26._8_8_ = dVar12 + dVar34;
  auVar30._0_8_ = local_118 + dVar29;
  auVar30._8_8_ = dVar5 + dVar34;
  auVar16._8_8_ = -(ulonglong)(0.0 <= dVar12);
  auVar16._0_8_ = -(ulonglong)(0.0 <= dVar13);
  auVar14._8_4_ = SUB84(dVar12,0);
  auVar14._0_8_ = dVar13;
  auVar14._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  auVar14 = blendvpd(auVar26,auVar14,auVar16);
  auVar17._8_8_ = -(ulonglong)(0.0 <= dVar5);
  auVar17._0_8_ = -(ulonglong)(0.0 <= local_118);
  auVar22._8_4_ = SUB84(dVar5,0);
  auVar22._0_8_ = local_118;
  auVar22._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar22 = blendvpd(auVar30,auVar22,auVar17);
  dVar13 = auVar14._8_8_ + -360.0;
  dVar12 = auVar22._8_8_ + 0.0;
  auVar18._8_8_ = -(ulonglong)(180.0 < auVar14._8_8_);
  auVar18._0_8_ = -(ulonglong)(180.0 < auVar14._0_8_);
  auVar15._8_4_ = SUB84(dVar13,0);
  auVar15._0_8_ = auVar14._0_8_ + -360.0;
  auVar15._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  local_128 = blendvpd(auVar14,auVar15,auVar18);
  auVar19._8_8_ = -(ulonglong)(180.0 < auVar22._8_8_);
  auVar19._0_8_ = -(ulonglong)(180.0 < auVar22._0_8_);
  auVar24._8_4_ = SUB84(dVar12,0);
  auVar24._0_8_ = auVar22._0_8_ + -360.0;
  auVar24._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  auVar14 = blendvpd(auVar22,auVar24,auVar19);
  dVar13 = local_128._8_8_;
  if ((char)param_1[0x3c] == '\0') {
    bVar2 = *(byte *)(param_1 + 4);
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x1e4) =
         *(undefined4 *)(*(longlong *)(param_3 + 0x28) + 0x28);
    bVar2 = *(byte *)(param_1 + 4);
    if (bVar2 == 1) {
      fVar4 = (float)local_128._0_8_;
      *(undefined1 *)((longlong)param_1 + 0xec) = 0;
      fVar3 = *(float *)((longlong)param_1 + 0x24);
      if (fVar3 <= fVar4) {
        fVar3 = *(float *)(param_1 + 5);
        if (fVar4 <= fVar3) {
          *(undefined1 *)((longlong)param_1 + 0xec) = 1;
          goto LAB_1412e321a;
        }
        *(float *)(param_1 + 0x1f) = fVar3;
        *(undefined4 *)((longlong)param_1 + 0xf4) = 0xc3b40000;
      }
      else {
        *(float *)((longlong)param_1 + 0xf4) = fVar3;
        *(undefined4 *)(param_1 + 0x1f) = 0x43b40000;
      }
      *(float *)(param_1 + 0x1e) = fVar3;
    }
LAB_1412e321a:
    if ((char)param_1[0x20] == '\x01') {
      *(undefined1 *)((longlong)param_1 + 0x1cc) = 0;
      fVar3 = *(float *)((longlong)param_1 + 0x104);
      if (fVar3 <= (float)dVar13) {
        fVar3 = *(float *)(param_1 + 0x21);
        if ((float)dVar13 <= fVar3) {
          *(undefined1 *)((longlong)param_1 + 0x1cc) = 1;
          goto LAB_1412e2edf;
        }
        *(float *)(param_1 + 0x3b) = fVar3;
        *(undefined4 *)((longlong)param_1 + 0x1d4) = 0xc3b40000;
      }
      else {
        *(float *)((longlong)param_1 + 0x1d4) = fVar3;
        *(undefined4 *)(param_1 + 0x3b) = 0x43b40000;
      }
      *(float *)(param_1 + 0x3a) = fVar3;
    }
  }
LAB_1412e2edf:
  *(undefined1 *)((longlong)param_1 + 0x1e1) = 1;
  if (((bVar2 & 1) != 0) && (*(char *)((longlong)param_1 + 0xec) == '\0')) {
    if ((*(byte *)(param_1 + 3) & 2) != 0) {
      *(undefined8 *)(*(longlong *)(param_3 + 0x28) + 0x30) = 0;
    }
    local_198 = *(undefined4 *)(*(longlong *)(param_3 + 0x28) + 0x28);
    local_190 = local_180._0_4_;
    fVar3 = (float)FUN_1412e3350(param_1,(float)local_128._0_8_,param_1 + 4,
                                 (float)*(double *)(*(longlong *)(param_3 + 0x28) + 0x30));
    local_128._0_8_ = (double)fVar3;
    if (*(char *)((longlong)param_1 + 0xec) == '\0') {
      *(byte *)(param_3 + 0x14c) = *(byte *)(param_3 + 0x14c) | 0x80;
      *(undefined1 *)((longlong)param_1 + 0x1e1) = 0;
    }
  }
  if (((char)param_1[0x20] == '\x01') && (*(char *)((longlong)param_1 + 0x1cc) == '\0')) {
    if ((*(byte *)(param_1 + 3) & 2) != 0) {
      *(undefined8 *)(*(longlong *)(param_3 + 0x28) + 0x38) = 0;
    }
    local_198 = *(undefined4 *)(*(longlong *)(param_3 + 0x28) + 0x28);
    local_190 = local_180._0_4_;
    fVar3 = (float)FUN_1412e3350(param_1,(float)dVar13,param_1 + 0x20,
                                 (float)*(double *)(*(longlong *)(param_3 + 0x28) + 0x38));
    dVar13 = (double)fVar3;
    local_128._8_8_ = dVar13;
    if (*(char *)((longlong)param_1 + 0x1cc) == '\0') {
      *(byte *)(param_3 + 0x14d) = *(byte *)(param_3 + 0x14d) | 1;
      *(undefined1 *)((longlong)param_1 + 0x1e1) = 0;
    }
  }
  local_180 = *(double *)(param_3 + 0x58);
  auVar31._0_8_ = auVar14._0_8_;
  auVar31._8_8_ = 0;
  auVar20._8_8_ = dVar13;
  auVar20._0_8_ = local_128._0_8_;
  auVar14 = divpd(auVar20,auVar1);
  auVar15 = divpd(auVar31,auVar1);
  auVar14 = roundpd(auVar14,auVar14,3);
  auVar15 = roundpd(auVar15,auVar15,3);
  dVar12 = ((double)local_128._0_8_ - auVar14._0_8_ * dVar29) * 0.008726646259971648;
  dVar13 = (dVar13 - auVar14._8_8_ * dVar34) * 0.008726646259971648;
  dVar29 = (auVar31._0_8_ - auVar15._0_8_ * dVar29) * 0.008726646259971648;
  dVar34 = (0.0 - auVar15._8_8_ * dVar34) * 0.008726646259971648;
  dVar5 = sin(dVar12);
  dVar7 = sin(dVar13);
  dVar8 = sin(dVar29);
  sin(dVar34);
  dVar12 = cos(dVar12);
  dVar13 = cos(dVar13);
  dVar9 = cos(dVar29);
  cos(dVar34);
  dVar29 = -(dVar13 * dVar5 * dVar8) + dVar7 * dVar12 * dVar9;
  dVar34 = dVar7 * dVar5 * dVar8 + dVar13 * dVar12 * dVar9;
  dVar10 = dVar5 * dVar7 * dVar9 - dVar12 * dVar13 * dVar8;
  dVar12 = -(dVar5 * dVar13 * dVar9) - dVar12 * dVar7 * dVar8;
  local_168 = dVar12 * (double)local_178._0_8_ * -1.0 +
              dVar27 * dVar34 * 1.0 + (double)local_178._8_8_ * dVar10 + dVar6 * dVar29;
  dStack_160 = dVar10 * (double)local_178._0_8_ * 1.0 +
               dVar27 * dVar29 * -1.0 + (double)local_178._8_8_ * dVar12 + dVar6 * dVar34;
  dVar13 = dVar29 * (double)local_178._0_8_ * -1.0 +
           ((dVar27 * dVar10 * -1.0 + (double)local_178._8_8_ * dVar34) - dVar12 * dVar6);
  local_158._8_4_ = SUB84(dVar13,0);
  local_158._0_8_ =
       dVar34 * (double)local_178._0_8_ * 1.0 +
       ((dVar27 * dVar12 * 1.0 + (double)local_178._8_8_ * dVar29) - dVar10 * dVar6);
  local_158._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  FUN_1448052ee(&local_168,&local_140);
  *(undefined8 *)(param_3 + 0x58) = local_130;
  *(undefined8 *)(param_3 + 0x48) = local_140;
  *(undefined8 *)(param_3 + 0x50) = uStack_138;
  if ((((*(double *)(param_3 + 0x58) != 0.0) || (NAN(*(double *)(param_3 + 0x58)))) &&
      (local_180 == 0.0)) &&
     (((!NAN(local_180) && (ABS(local_e8) <= 1e-08)) && (ABS(local_d8) <= 1e-08)))) {
    *(undefined8 *)(param_3 + 0x58) = 0;
  }
  *(undefined1 *)(param_1 + 0x3c) = 0;
LAB_1412e2a37:
  if ((local_d0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412e3350 FUN_1412e3350 body=829 status=ok
// SIG undefined FUN_1412e3350(void)

undefined8
FUN_1412e3350(longlong param_1,undefined8 param_2,longlong param_3,float param_4,float param_5,
             float param_6)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  
  uVar6 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar5 = (float)param_2;
  if ((fVar5 < *(float *)(param_3 + 0xd4)) || (*(float *)(param_3 + 0xd8) < fVar5)) {
    if ((1e-08 < ABS(param_4)) && ((*(uint *)(param_1 + 0x18) & 1) != 0)) {
      dVar4 = (double)FUN_144719204(SUB84((double)(*(float *)(param_3 + 0xd0) - fVar5),0));
      dVar4 = (double)(~-(ulonglong)(dVar4 < 0.0) & (ulonglong)dVar4 |
                      (ulonglong)(dVar4 + 360.0) & -(ulonglong)(dVar4 < 0.0));
      if ((double)(~-(ulonglong)(180.0 < dVar4) & (ulonglong)dVar4 |
                  (ulonglong)(dVar4 + -360.0) & -(ulonglong)(180.0 < dVar4)) * (double)param_4 < 0.0
         ) goto LAB_1412e3681;
    }
    param_5 = param_5 - *(float *)(param_1 + 0x1e4);
    fVar2 = *(float *)(param_3 + 200);
    if (fVar2 <= param_5) {
      if ((param_6 != 0.0) || (NAN(param_6))) {
        if ((*(float *)(param_3 + 0xd0) != fVar5) || (NAN(*(float *)(param_3 + 0xd0)) || NAN(fVar5))
           ) {
          fVar7 = *(float *)(param_3 + 0x10);
          lVar1 = FUN_1447e736e(param_3 + 0xa0);
          if (lVar1 == 0) {
            lVar1 = param_3 + 0x20;
          }
          else {
            lVar1 = FUN_1447e736e(param_3 + 0xa0);
            lVar1 = lVar1 + 0x30;
          }
          if ((lVar1 != 0) && (*(int *)(lVar1 + 0x78) != 0)) {
            fVar3 = (float)FUN_1448c9f94(lVar1);
            fVar7 = fVar7 * fVar3;
          }
          if ((param_5 - fVar2 <= 0.0) || (0.0 < fVar7)) {
            dVar4 = (double)FUN_144719204(SUB84((double)(*(float *)(param_3 + 0xd0) - fVar5),0),
                                          0x4076800000000000);
            dVar4 = (double)(~-(ulonglong)(dVar4 < 0.0) & (ulonglong)dVar4 |
                            (ulonglong)(dVar4 + 360.0) & -(ulonglong)(dVar4 < 0.0));
            fVar2 = (float)(double)(~-(ulonglong)(180.0 < dVar4) & (ulonglong)dVar4 |
                                   (ulonglong)(dVar4 + -360.0) & -(ulonglong)(180.0 < dVar4));
            if (1.0 < ABS(fVar2)) {
              fVar7 = fVar7 * param_6;
              if (*(char *)(param_3 + 0xd) == '\x01') {
                if (fVar7 <= fVar2) {
                  fVar2 = fVar7;
                }
                if (fVar2 <= -fVar7) {
                  fVar2 = -fVar7;
                }
              }
              else {
                if (1.0 <= fVar7) {
                  fVar7 = 1.0;
                }
                if (fVar7 <= 0.0) {
                  fVar7 = 0.0;
                }
                fVar2 = fVar2 * fVar7;
              }
              dVar4 = (double)FUN_144719204(SUB84((double)(fVar2 + fVar5),0));
              dVar4 = (double)(~-(ulonglong)(dVar4 < 0.0) & (ulonglong)dVar4 |
                              (ulonglong)(dVar4 + 360.0) & -(ulonglong)(dVar4 < 0.0));
              fVar5 = (float)(double)(~-(ulonglong)(180.0 < dVar4) & (ulonglong)dVar4 |
                                     (ulonglong)(dVar4 + -360.0) & -(ulonglong)(180.0 < dVar4));
              goto LAB_1412e3554;
            }
          }
          fVar5 = *(float *)(param_3 + 0xd0);
          uVar6 = 0;
        }
      }
    }
LAB_1412e3554:
    if (((fVar5 < *(float *)(param_3 + 0xd4)) || (*(float *)(param_3 + 0xd8) < fVar5)) &&
       (1.0 < ABS(fVar5 - *(float *)(param_3 + 0xd0)))) goto LAB_1412e3591;
  }
LAB_1412e3681:
  *(undefined1 *)(param_3 + 0xcc) = 1;
LAB_1412e3591:
  return CONCAT44(uVar6,fVar5);
}



// FUNCTION 1412e368e FUN_1412e368e body=873 status=ok
// SIG undefined FUN_1412e368e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_1412e368e(longlong param_1,undefined1 (*param_2) [16],longlong param_3)

{
  longlong lVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  int iVar6;
  double *pdVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *(longlong *)(param_3 + 0x28);
  uVar5 = *(undefined8 *)(lVar1 + 0xb8);
  *(undefined8 *)*param_2 = *(undefined8 *)(lVar1 + 0xb0);
  *(undefined8 *)(*param_2 + 8) = uVar5;
  *(undefined8 *)param_2[1] = *(undefined8 *)(lVar1 + 0xc0);
  auVar18 = *param_2;
  dVar10 = (double)DAT_1499387d0;
  dVar2 = DAT_1499387d0._8_8_;
  auVar11 = divpd(auVar18,_DAT_1499387d0);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = *(double *)param_2[1];
  auVar15 = divpd(auVar14,_DAT_1499387d0);
  auVar11 = roundpd(auVar11,auVar11,3);
  auVar15 = roundpd(auVar15,auVar15,3);
  dVar19 = auVar18._0_8_ - auVar11._0_8_ * dVar10;
  dVar20 = auVar18._8_8_ - auVar11._8_8_ * dVar2;
  dVar21 = *(double *)param_2[1] - auVar15._0_8_ * dVar10;
  dVar22 = 0.0 - auVar15._8_8_ * dVar2;
  auVar25._0_8_ = dVar19 + dVar10;
  auVar25._8_8_ = dVar20 + dVar2;
  auVar17._0_8_ = dVar10 + dVar21;
  auVar17._8_8_ = dVar2 + dVar22;
  auVar15._8_8_ = -(ulonglong)(0.0 <= dVar20);
  auVar15._0_8_ = -(ulonglong)(0.0 <= dVar19);
  auVar18._8_8_ = dVar20;
  auVar18._0_8_ = dVar19;
  auVar15 = blendvpd(auVar25,auVar18,auVar15);
  auVar12._8_8_ = -(ulonglong)(0.0 <= dVar22);
  auVar12._0_8_ = -(ulonglong)(0.0 <= dVar21);
  auVar11._8_8_ = dVar22;
  auVar11._0_8_ = dVar21;
  auVar18 = blendvpd(auVar17,auVar11,auVar12);
  auVar16._0_8_ = auVar15._0_8_ + -360.0;
  auVar16._8_8_ = auVar15._8_8_ + -360.0;
  auVar13._8_8_ = -(ulonglong)(180.0 < auVar15._8_8_);
  auVar13._0_8_ = -(ulonglong)(180.0 < auVar15._0_8_);
  auVar11 = blendvpd(auVar15,auVar16,auVar13);
  *param_2 = auVar11;
  dVar10 = auVar18._0_8_;
  *(ulonglong *)param_2[1] =
       ~-(ulonglong)(180.0 < dVar10) & (ulonglong)dVar10 |
       (ulonglong)(dVar10 + -360.0) & -(ulonglong)(180.0 < dVar10);
  if ((((*(longlong *)(lVar1 + 0xe0) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xe0) + 0x1c8), lVar1 != 0)) &&
      (lVar1 = *(longlong *)(lVar1 + 0x120), lVar1 != 0)) &&
     (dVar10 = *(double *)(lVar1 + 0xa8), dVar10 != 0.0)) {
    lVar1 = *(longlong *)((longlong)dVar10 + 0x1c8);
    if (lVar1 == 0) {
      uVar23 = SUB84(DAT_14c846500,0);
      uVar24 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
    }
    else {
      dVar2 = *(double *)(lVar1 + 0x240);
      dVar19 = *(double *)(lVar1 + 0x248);
      dVar20 = *(double *)(lVar1 + 0x250);
      dVar21 = *(double *)(lVar1 + 600);
      pdVar7 = *(double **)(lVar1 + 0x228);
      lVar9 = param_1;
      local_a8 = dVar2;
      dStack_a0 = dVar19;
      local_98 = dVar20;
      dStack_90 = dVar21;
      if (pdVar7 == (double *)0x0) {
        lVar9 = 0x40;
        pdVar7 = (double *)FUN_14001cc68(0x40,0x10);
        dVar10 = DAT_14c8463d8;
        *pdVar7 = DAT_14c8463d0;
        pdVar7[1] = dVar10;
        dVar10 = DAT_14c8463e8;
        pdVar7[2] = DAT_14c8463e0;
        pdVar7[3] = dVar10;
        dVar10 = DAT_14c846500;
        pdVar7[4] = DAT_14c8464f8;
        pdVar7[5] = dVar10;
        dVar10 = DAT_14c846508;
        pdVar7[6] = DAT_14c846508;
        *(double **)(lVar1 + 0x228) = pdVar7;
      }
      auVar3._8_4_ = (int)-(ulonglong)(dVar19 != pdVar7[1]);
      auVar3._0_8_ = -(ulonglong)(dVar2 != *pdVar7);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar19 != pdVar7[1]) >> 0x20);
      iVar6 = movmskpd(SUB84(dVar10,0),auVar3);
      auVar4._8_4_ = (int)-(ulonglong)(dVar21 != pdVar7[3]);
      auVar4._0_8_ = -(ulonglong)(dVar20 != pdVar7[2]);
      auVar4._12_4_ = (int)(-(ulonglong)(dVar21 != pdVar7[3]) >> 0x20);
      uVar8 = movmskpd((int)lVar9,auVar4);
      if ((uVar8 & 0x3fffffff) != 0 || iVar6 != 0) {
        pdVar7[2] = local_98;
        pdVar7[3] = dStack_90;
        *pdVar7 = local_a8;
        pdVar7[1] = dStack_a0;
        FUN_1448052ee(&local_a8,&local_88);
        pdVar7[6] = local_78;
        pdVar7[4] = local_88;
        pdVar7[5] = dStack_80;
      }
      uVar23 = SUB84(pdVar7[5],0);
      uVar24 = (undefined4)((ulonglong)pdVar7[5] >> 0x20);
    }
    if ((*(char *)(param_1 + 0x20) == '\x01') && (*(char *)(param_1 + 0x2c) == '\x01')) {
      dVar10 = (double)FUN_144719204();
      dVar10 = (double)(~-(ulonglong)(dVar10 < 0.0) & (ulonglong)dVar10 |
                       (ulonglong)(dVar10 + 360.0) & -(ulonglong)(dVar10 < 0.0));
      *(double *)*param_2 =
           (double)(~-(ulonglong)(180.0 < dVar10) & (ulonglong)dVar10 |
                   (ulonglong)(dVar10 + -360.0) & -(ulonglong)(180.0 < dVar10)) + auVar11._0_8_;
    }
    if ((*(char *)(param_1 + 0x100) == '\x01') && (*(char *)(param_1 + 0x10c) == '\x01')) {
      dVar10 = (double)FUN_144719204(CONCAT44(uVar24,uVar23));
      dVar10 = (double)(~-(ulonglong)(dVar10 < 0.0) & (ulonglong)dVar10 |
                       (ulonglong)(dVar10 + 360.0) & -(ulonglong)(dVar10 < 0.0));
      *(double *)(*param_2 + 8) =
           (double)(~-(ulonglong)(180.0 < dVar10) & (ulonglong)dVar10 |
                   (ulonglong)(dVar10 + -360.0) & -(ulonglong)(180.0 < dVar10)) + auVar11._8_8_;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412e39f8 FUN_1412e39f8 body=122 status=ok
// SIG undefined FUN_1412e39f8(void)

void FUN_1412e39f8(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x308) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x300) = 0;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0xb3) = 0;
    FUN_1412e3a72(param_1);
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 1412e3a72 FUN_1412e3a72 body=345 status=ok
// SIG undefined FUN_1412e3a72(void)

void FUN_1412e3a72(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x344) == '\x01') {
    if (*(char *)(param_1 + 0x346) == '\x01') {
      *(undefined1 *)(param_1 + 0x345) = 1;
    }
    else {
      lVar3 = FUN_1407f4ede(param_1);
      if (lVar3 != 0) {
        lVar4 = FUN_1407f4df8();
        if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
           (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c))) {
          uVar2 = (uint)((ulonglong)DAT_14cbdf468 >> 0x10);
          uVar5 = (uint)DAT_14cbdf468 & 0xffff;
          lVar3 = param_1 + 0x110;
          if (*(longlong *)(param_1 + 0x118) != 0) {
            lVar3 = *(longlong *)(param_1 + 0x118);
          }
          iVar6 = *(int *)(lVar3 + (ulonglong)
                                   (*(int *)(param_1 + 0x120) - 1U &
                                   (int)((ulonglong)DAT_14cbdf468 >> 0x20) +
                                   ((uint)DAT_14cbdf468 << 0x10 | uVar5) +
                                   (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
          if (iVar6 != -1) {
            do {
              plVar1 = (longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar6 * 0x18);
              if (*plVar1 == DAT_14cbdf468) {
                if ((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) {
                  local_20 = 0;
                  FUN_14485c47a(&local_20,plVar1[1]);
                  FUN_1412e3bcc(param_1,local_20);
                  *(undefined1 *)(param_1 + 0x344) = 0;
                }
                break;
              }
              iVar6 = (int)plVar1[2];
            } while (iVar6 != -1);
          }
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



// FUNCTION 1412e3bcc FUN_1412e3bcc body=265 status=ok
// SIG undefined FUN_1412e3bcc(void)

/* WARNING: Removing unreachable block (ram,0x000145a991e8) */
/* WARNING: Removing unreachable block (ram,0x000145a991f4) */
/* WARNING: Removing unreachable block (ram,0x000145a991fd) */
/* WARNING: Removing unreachable block (ram,0x000145a99208) */
/* WARNING: Removing unreachable block (ram,0x000145a99216) */
/* WARNING: Removing unreachable block (ram,0x000145a9921b) */
/* WARNING: Removing unreachable block (ram,0x000145a99228) */
/* WARNING: Removing unreachable block (ram,0x000145a9923f) */

undefined8 FUN_1412e3bcc(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if ((((*(int *)(param_1 + 0x34) != 0) && (uVar1 = *(uint *)(param_1 + 0x30), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0x34))) &&
      ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar4;
    }
    else {
      lVar3 = 0;
    }
    if (*(longlong *)(lVar3 + 0x598) != 0) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar4;
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar6 = *plVar4;
      }
      else {
        lVar6 = 0;
      }
      if (*(int *)(lVar6 + 0x374) != 0) {
        uVar1 = *(uint *)(lVar6 + 0x370);
        if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) {
          return 0;
        }
        puVar5 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((((puVar5 != (undefined8 *)0x0) && (*(int *)(puVar5 + 2) == *(int *)(lVar6 + 0x374))) &&
            ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)) &&
           ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)) {
          uVar2 = FUN_145a991da(*(undefined8 *)(lVar3 + 0x598),*puVar5);
          return uVar2;
        }
      }
      uVar2 = FUN_145a991da(*(undefined8 *)(lVar3 + 0x598),0);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1412e3cd5 FUN_1412e3cd5 body=73 status=ok
// SIG undefined FUN_1412e3cd5(void)

void FUN_1412e3cd5(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1412e3d1e FUN_1412e3d1e body=29 status=ok
// SIG undefined FUN_1412e3d1e(void)

GUID * FUN_1412e3d1e(GUID *param_1)

{
  param_1->Data1 = 0;
  param_1->Data2 = 0;
  param_1->Data3 = 0;
  param_1->Data4[0] = '\0';
  param_1->Data4[1] = '\0';
  param_1->Data4[2] = '\0';
  param_1->Data4[3] = '\0';
  param_1->Data4[4] = '\0';
  param_1->Data4[5] = '\0';
  param_1->Data4[6] = '\0';
  param_1->Data4[7] = '\0';
  CoCreateGuid(param_1);
  return param_1;
}



// FUNCTION 1412e3d3b FUN_1412e3d3b body=45 status=ok
// SIG undefined FUN_1412e3d3b(void)

void FUN_1412e3d3b(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1412e3d68 FUN_1412e3d68 body=8 status=ok
// SIG undefined FUN_1412e3d68(void)

longlong FUN_1412e3d68(longlong param_1)

{
  return param_1 + 0x4f8;
}



// FUNCTION 1412e3d70 FUN_1412e3d70 body=142 status=ok
// SIG undefined FUN_1412e3d70(void)

longlong FUN_1412e3d70(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14088c73e();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x20;
    if (lVar3 + lVar2 != 0) goto LAB_1412e3dd9;
  }
  local_38 = 0;
  local_30 = param_3;
  FUN_1458c07dc(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 << 5;
LAB_1412e3dd9:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412e3e00 FUN_1412e3e00 body=358 status=ok
// SIG undefined FUN_1412e3e00(void)

undefined4 *
FUN_1412e3e00(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1412e400a(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar3;
  *(undefined4 *)(local_40 + 2) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar5;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar11 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar8 = (uint)uVar2 & 0xffff;
  uVar11 = ((uint)uVar2 << 0x10 | uVar8) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar8 >> 4);
  local_58 = param_4;
  cVar6 = FUN_1412e3f68(param_1,uVar11,local_40);
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar8 < 4) {
      iVar9 = 1;
    }
    else {
      uVar7 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      *(uint *)((longlong)local_40 + 0x1c) = uVar11;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1412e41f0(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412e3f68 FUN_1412e3f68 body=161 status=ok
// SIG undefined FUN_1412e3f68(void)

void FUN_1412e3f68(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_146968b02((int)lVar4,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          break;
        }
        iVar8 = puVar1[6];
        uVar6 = 0;
      } while (iVar8 != -1);
      goto LAB_1412e3fd2;
    }
  }
  uVar6 = 0;
LAB_1412e3fd2:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 1412e400a FUN_1412e400a body=485 status=ok
// SIG undefined FUN_1412e400a(void)

int * FUN_1412e400a(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1405b363e(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x20);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x20) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1412e41f0 FUN_1412e41f0 body=610 status=ok
// SIG undefined FUN_1412e41f0(void)

void FUN_1412e41f0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7 * 0x20;
        uVar2 = *(undefined8 *)(lVar14 + lVar13);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x1c + lVar13) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x18 + lVar13) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_1412e43ec;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_1412e43ec:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412e4454 FUN_1412e4454 body=202 status=ok
// SIG undefined FUN_1412e4454(void)

void FUN_1412e4454(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)FUN_1412e4522();
  if (plVar1 != (longlong *)0x0) {
    local_48 = param_1[3];
    local_40 = &local_48;
    FUN_1408ff3be(plVar1 + 0xe);
    if (*(char *)((longlong)param_1 + 0x71) == '\x01') {
      (**(code **)(*plVar1 + 0x420))(plVar1,0);
    }
    else {
      (**(code **)(*plVar1 + 0x2b0))(plVar1);
    }
  }
  (**(code **)(*param_1 + 0x2d8))(param_1,param_2,param_3,0);
  local_58 = param_5;
  FUN_140bc0c12(param_1,param_2,param_3,param_4);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412e4522 FUN_1412e4522 body=199 status=ok
// SIG undefined FUN_1412e4522(void)

longlong ** FUN_1412e4522(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong **pplVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    pplVar3 = &local_38;
    local_38 = (longlong *)0x0;
    uStack_30 = 0;
    FUN_1407329d4(param_2,0,pplVar3);
    bVar1 = true;
    if ((longlong)(int)uStack_30 != 0) {
      plVar2 = local_38;
      do {
        pplVar3 = (longlong **)*plVar2;
        if (((pplVar3 != (longlong **)0x0) && (*(longlong *)(param_1 + 0x18) != 0)) &&
           ((longlong)*(int *)(pplVar3 + 0xf) != 0)) {
          lVar4 = 0;
          do {
            if (*(longlong *)((longlong)pplVar3[0xe] + lVar4) == *(longlong *)(param_1 + 0x18)) {
              bVar1 = false;
              goto LAB_1412e45b4;
            }
            lVar4 = lVar4 + 8;
          } while ((longlong)*(int *)(pplVar3 + 0xf) * 8 != lVar4);
        }
        plVar2 = plVar2 + 1;
      } while (plVar2 != local_38 + (int)uStack_30);
    }
LAB_1412e45b4:
    if (local_38 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (!bVar1) goto LAB_1412e45c2;
  }
  pplVar3 = (longlong **)0x0;
LAB_1412e45c2:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pplVar3;
}



// FUNCTION 1412e45f2 FUN_1412e45f2 body=553 status=ok
// SIG undefined FUN_1412e45f2(void)

undefined8 * FUN_1412e45f2(undefined8 *param_1)

{
  longlong *plVar1;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b313d00;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
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
  }
  plVar1 = DAT_14c844840;
  param_1[5] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 6) = DAT_14c844848;
  param_1[7] = &DAT_3f8000003f800000;
  param_1[8] = &DAT_3f8000003f800000;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x42aa0000;
  *(undefined1 *)((longlong)param_1 + 0xd4) = 1;
  param_1[0x1b] = &DAT_3f8000003f800000;
  param_1[0x1c] = &DAT_3f8000003f800000;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x27) = 10;
  *(undefined1 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x28] = 0x3f80000000000000;
  *(undefined2 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0xf00d1e03;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined8 *)((longlong)param_1 + 0x189) = 0;
  *(undefined8 *)((longlong)param_1 + 0x191) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0xf00000d0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0x3f800000;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  return param_1;
}



// FUNCTION 1412e481c FUN_1412e481c body=28 status=ok
// SIG undefined FUN_1412e481c(void)

undefined4 FUN_1412e481c(longlong param_1)

{
  if (*(int *)(param_1 + 0x2d8) != 0) {
    return *(undefined4 *)
            (*(longlong *)(param_1 + 0x2d0) + (longlong)(*(int *)(param_1 + 0x2d8) + -1) * 4);
  }
  return 0;
}



// FUNCTION 1412e4838 FUN_1412e4838 body=210 status=ok
// SIG undefined FUN_1412e4838(void)

void FUN_1412e4838(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  float fVar3;
  
  FUN_1412e490a();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cb60);
  iVar2 = FUN_1448332aa(param_2,&DAT_149e3cb60);
  if (iVar2 < 0x11) {
    *(byte *)((longlong)param_1 + 0x15b) = *(byte *)((longlong)param_1 + 0x15a) & 4 | 2;
  }
  iVar2 = FUN_1448332aa(param_2,&DAT_149e3cb60);
  if (iVar2 < 0x21) {
    cVar1 = (**(code **)(*param_1 + 0x3b8))(param_1);
    if (*(float *)(param_1 + 0x27) <= 0.0009999999) {
      if (((byte)(cVar1 - 9U) < 2) || ((*(byte *)((longlong)param_1 + 0x15a) & 1) != 0)) {
        fVar3 = 0.0;
      }
      else {
        fVar3 = 1.2;
      }
    }
    else {
      fVar3 = *(float *)(param_1 + 0x27) + -1.0;
    }
    if ((*(char *)((longlong)param_1 + 0x15b) == '\x02') && (0.0001 < ABS(fVar3))) {
      *(undefined1 *)((longlong)param_1 + 0x15b) = 3;
      *(byte *)((longlong)param_1 + 0xfe) = *(byte *)((longlong)param_1 + 0xfe) | 1;
    }
  }
  return;
}



// FUNCTION 1412e490a FUN_1412e490a body=151 status=ok
// SIG undefined FUN_1412e490a(void)

void FUN_1412e490a(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  switchD_143c3d4dc::caseD_20(param_1);
  FUN_140562eea(&local_1a8,param_2,0,&DAT_14c896044);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412e49a2 FUN_1412e49a2 body=1328 status=ok
// SIG undefined FUN_1412e49a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1412e49a2(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined1 *local_a0;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_80 = param_2;
  FUN_1412e4f8c(param_3[2],local_68,&DAT_14cb8c368);
  plVar4 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b428c90;
  local_88 = plVar4 + 2;
  plVar4[8] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  *(undefined8 *)((longlong)plVar4 + 0x31) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x39) = 0;
  *(undefined4 *)((longlong)plVar4 + 0x44) = 0xffffffff;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 2;
  plVar4[2] = (longlong)&PTR_FUN_14b24d540;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    local_90 = plVar4 + 0xc;
    lVar12 = 0;
    uVar9 = 0;
    do {
      plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0xf0 + lVar12);
      if (plVar11 == (longlong *)0x0) {
        local_58 = (longlong *)param_3[3];
        local_50 = (longlong *)param_3[4];
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        plVar5 = (longlong *)FUN_14001cc68(0xb8,0x10);
        plVar5[1] = (longlong)&DAT_100000001;
        *plVar5 = (longlong)&PTR_FUN_14b428cb0;
        FUN_1412e4ed4(plVar5 + 2,uVar9 & 0xffffffff,&local_58,local_68);
        plVar11 = plVar5 + 2;
        plVar6 = local_50;
        if ((plVar11 == (longlong *)0x0) ||
           (((plVar5[0xb] != 0 && (plVar5[0xc] != 0)) && (0 < *(int *)(plVar5[0xc] + 8))))) {
          if (plVar5 != (longlong *)0x0) goto LAB_1412e4b2c;
        }
        else if (plVar5 == (longlong *)0x0) {
          _DAT_00000058 = 0x10;
          plVar10 = (longlong *)&DAT_00000060;
          plVar7 = _DAT_00000060;
          if (_DAT_00000060 != (longlong *)0x0) {
LAB_1412e4e02:
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))();
            }
            *plVar10 = (longlong)plVar5;
            plVar6 = local_50;
            if (plVar5 != (longlong *)0x0) goto LAB_1412e4b21;
          }
        }
        else {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          plVar5[0xb] = (longlong)plVar11;
          if ((longlong *)plVar5[0xc] != plVar5) {
            LOCK();
            *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
            UNLOCK();
            if ((longlong *)plVar5[0xc] != (longlong *)0x0) {
              plVar10 = plVar5 + 0xc;
              plVar7 = (longlong *)plVar5[0xc];
              goto LAB_1412e4e02;
            }
            plVar5[0xc] = (longlong)plVar5;
          }
LAB_1412e4b21:
          LOCK();
          plVar6 = plVar5 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
LAB_1412e4b2c:
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          plVar6 = local_50;
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar6 = local_50;
            if (*piVar1 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
              plVar6 = local_50;
            }
          }
        }
      }
      else {
        local_78 = param_3[3];
        local_70 = (longlong *)param_3[4];
        if (local_70 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_70 + 1) = (int)local_70[1] + 1;
          UNLOCK();
        }
        local_a0 = local_68;
        local_a8 = &local_78;
        (**(code **)(*plVar11 + 0x10))(plVar11,&local_58,param_3,uVar9 & 0xffffffff);
        plVar5 = local_50;
        plVar11 = local_58;
        local_58 = (longlong *)0x0;
        plVar6 = local_70;
        if (local_50 != (longlong *)0x0) {
          local_50 = (longlong *)0x0;
        }
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar6 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
      if (plVar11 == (longlong *)0x0) {
        if (plVar5 != (longlong *)0x0) goto LAB_1412e4c03;
      }
      else {
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        iVar2 = (int)plVar4[0xd];
        *(uint *)(plVar4 + 0xd) = iVar2 + 1U;
        if (*(uint *)((longlong)plVar4 + 0x6c) < iVar2 + 1U) {
          FUN_1412e507c(local_90,iVar2);
        }
        lVar3 = *local_90;
        *(longlong **)(lVar3 + (longlong)iVar2 * 0x10) = plVar11;
        *(longlong **)(lVar3 + 8 + (longlong)iVar2 * 0x10) = plVar5;
        if (plVar5 == (longlong *)0x0) {
          uVar8 = *param_3;
          plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0xd8 + lVar12);
          if ((plVar6 != (longlong *)0x0) ||
             (plVar6 = *(longlong **)(param_1 + 0x40), plVar6 != (longlong *)0x0))
          goto LAB_1412e4bd4;
LAB_1412e4bf3:
          if (plVar5 == (longlong *)0x0) goto LAB_1412e4c0e;
        }
        else {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          LOCK();
          plVar6 = plVar5 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
          lVar3 = *(longlong *)(param_1 + 0x30);
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          uVar8 = *param_3;
          plVar6 = *(longlong **)(lVar3 + 0xd8 + lVar12);
          if ((plVar6 != (longlong *)0x0) ||
             (plVar6 = *(longlong **)(param_1 + 0x40), plVar6 != (longlong *)0x0)) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
LAB_1412e4bd4:
            local_58 = plVar11;
            local_50 = plVar5;
            (**(code **)(*plVar6 + 0x18))(plVar6,uVar8,&local_58);
            plVar11 = local_50;
            if (local_50 != (longlong *)0x0) {
              LOCK();
              plVar6 = local_50 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
                (**(code **)*local_50)(local_50);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                }
              }
            }
            goto LAB_1412e4bf3;
          }
        }
        LOCK();
        plVar11 = plVar5 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
LAB_1412e4c03:
        LOCK();
        plVar11 = plVar5 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
LAB_1412e4c0e:
      uVar9 = uVar9 + 1;
      lVar12 = lVar12 + 0x108;
    } while ((longlong)uVar9 < (longlong)*(int *)(param_1 + 0x38));
  }
  plVar11 = local_80;
  *local_80 = (longlong)local_88;
  local_80[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_60 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar11;
}



// FUNCTION 1412e4ed4 FUN_1412e4ed4 body=184 status=ok
// SIG undefined FUN_1412e4ed4(void)

void FUN_1412e4ed4(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_LAB_14b242fd0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xf8;
  param_1[4] = &PTR_LAB_14b42a8c0;
  param_1[5] = *param_4;
  lVar1 = param_4[1];
  param_1[6] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_14b42a880;
  param_1[4] = &PTR_FUN_14b42a8a0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 2;
  param_1[0x10] = *param_3;
  lVar1 = param_3[1];
  param_1[0x11] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x12) = param_2;
  *(undefined1 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x13] = 0x100000000;
  param_1[0x14] = 0;
  return;
}



// FUNCTION 1412e4f8c FUN_1412e4f8c body=178 status=ok
// SIG undefined FUN_1412e4f8c(void)

longlong * FUN_1412e4f8c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406eeb88(param_1,&local_28);
  if (local_28 != 0) {
    uVar4 = FUN_1412e5042();
    cVar3 = FUN_1448093f4(local_28,uVar4);
    if (cVar3 != '\0') {
      *param_2 = local_28;
      param_2[1] = (longlong)local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      goto LAB_1412e4fe2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1412e4fe2:
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412e5042 FUN_1412e5042 body=57 status=ok
// SIG undefined FUN_1412e5042(void)

void FUN_1412e5042(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65e50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65e50 = FUN_140002ddd(FUN_14650d8a6,uVar1,L"GbxSkillTickableManager");
  }
  return;
}



// FUNCTION 1412e507c FUN_1412e507c body=269 status=ok
// SIG undefined FUN_1412e507c(void)

void FUN_1412e507c(longlong param_1,int param_2)

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



// FUNCTION 1412e518a FUN_1412e518a body=22 status=ok
// SIG undefined FUN_1412e518a(void)

undefined8 FUN_1412e518a(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb8df08;
  if (DAT_14cb8df08 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb8df08 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb8df08 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb8df08[0x3a] <= *(int *)((longlong)DAT_14cb8df08 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb8df08 + 0x300))(DAT_14cb8df08);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 1412e51a0 FUN_1412e51a0 body=322 status=ok
// SIG undefined FUN_1412e51a0(void)

undefined8 FUN_1412e51a0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1412e52dc;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1412e52dc;
    }
    FUN_140192332(param_1 + 0x18,&local_58,0);
  }
  else {
LAB_1412e52dc:
    local_58 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1412e527f;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_1412e527f;
    }
  }
  uVar6 = 0;
LAB_1412e527f:
  if ((local_58 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_58);
  }
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412e52e4 FUN_1412e52e4 body=402 status=ok
// SIG undefined FUN_1412e52e4(void)

void FUN_1412e52e4(longlong param_1,undefined8 param_2,float param_3,float param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [40];
  char local_60;
  undefined7 uStack_5f;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = FUN_1409715bc();
  cVar4 = FUN_14011bf50(uVar5);
  if (cVar4 != '\0') {
    FUN_1403adc5e(&local_60,uVar5);
    lVar3 = *(longlong *)(CONCAT71(uStack_5f,local_60) + 0xa0);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 200));
    *(int *)(lVar3 + 0xc0) = *(int *)(lVar3 + 0xc0) + 1;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)local_58 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_58 + 0x10))(local_58);
        }
      }
    }
    cVar4 = FUN_140280fd6(param_2,param_1 + 0x58);
    if (cVar4 != '\0') {
      if (((*(float *)(lVar3 + 8) != param_3) || (NAN(*(float *)(lVar3 + 8)) || NAN(param_3))) ||
         (*(int *)(lVar3 + 0xc) == 0)) {
        *(float *)(lVar3 + 8) = param_3;
        *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
      }
      if (*(int *)(lVar3 + 0x14) == 0 || param_4 != *(float *)(lVar3 + 0x10)) {
        *(float *)(lVar3 + 0x10) = param_4;
        *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
      }
      local_60 = '\x04';
      uVar5 = FUN_140280ec4(param_2);
      cVar4 = FUN_140280f4a(uVar5,&local_60);
      if (cVar4 != '\0') {
        if ((local_60 != *(char *)(lVar3 + 0x28)) || (*(int *)(lVar3 + 0x2c) == 0)) {
          *(char *)(lVar3 + 0x28) = local_60;
          *(int *)(lVar3 + 0x2c) = *(int *)(lVar3 + 0x2c) + 1;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_88);
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412e5496 FUN_1412e5496 body=4183 status=ok
// SIG undefined FUN_1412e5496(void)

undefined8
FUN_1412e5496(longlong param_1,longlong param_2,double *param_3,double *param_4,double param_5,
             double *param_6,double *param_7,double *param_8,double param_9,double *param_10,
             double param_11)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  double *pdVar8;
  float *pfVar9;
  ulonglong uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  uint uVar29;
  undefined1 auStack_408 [32];
  double *local_3e8;
  double *local_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  double local_3b8;
  double local_3b0;
  double local_3a8;
  double local_3a0;
  double local_398;
  double local_390;
  double local_388;
  double local_380;
  double local_378;
  double local_370;
  double local_368;
  double local_360;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  double local_270;
  double local_268;
  double local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  double local_238 [5];
  double local_210;
  double local_208 [11];
  double local_1b0;
  double local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_408;
  local_3c0 = param_3[6];
  local_3c8 = param_3[4];
  local_3d0 = param_3[5];
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0.0;
  uStack_110 = 0;
  local_128 = 0.0;
  dStack_120 = 0.0;
  local_138 = 0.0;
  dStack_130 = 0.0;
  local_148 = 0.0;
  dStack_140 = 0.0;
  local_158 = 0.0;
  dStack_150 = 0.0;
  local_160 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_208[9] = 0.0;
  local_208[7] = 0.0;
  local_208[8] = 0.0;
  local_208[5] = 0.0;
  local_208[6] = 0.0;
  local_208[3] = 0.0;
  local_208[4] = 0.0;
  local_208[1] = 0.0;
  local_208[2] = 0.0;
  local_238[2] = -1.0;
  local_238[3] = -1.0;
  local_238[0] = -1.0;
  local_238[1] = -1.0;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0;
  local_328 = *param_3;
  dStack_320 = param_3[1];
  local_338 = param_3[2];
  dStack_330 = param_3[3];
  dVar17 = -local_328;
  uVar27 = SUB84(local_328,0);
  uVar28 = (undefined4)((ulonglong)dVar17 >> 0x20);
  dVar16 = -dStack_320;
  uVar23 = SUB84(dStack_320,0);
  uVar29 = (uint)((ulonglong)dVar16 >> 0x20);
  dVar22 = local_338 * -1.0;
  uVar12 = SUB84(dStack_330 * 1.0,0);
  uVar13 = (uint)((ulonglong)(dStack_330 * 1.0) >> 0x20);
  local_348._8_4_ = uVar12;
  local_348._0_8_ = dVar22;
  local_348._12_4_ = uVar13;
  dVar20 = param_10[2];
  dVar14 = *param_10;
  dVar18 = param_10[1];
  local_208[10] = 0.0;
  if ((longlong)*(int *)(param_1 + 0x38) < 1) {
    local_1b0 = 0.0;
    local_1a8 = 0.0;
  }
  else {
    pfVar9 = (float *)(*(longlong *)(param_1 + 0x30) + 8);
    uVar7 = 0xffffffff;
    fVar24 = -3.4028235e+38;
    uVar10 = 0;
    do {
      fVar25 = *pfVar9 * (float)dVar20 + pfVar9[-2] * (float)dVar14 + pfVar9[-1] * (float)dVar18;
      if (fVar24 < fVar25) {
        uVar7 = uVar10 & 0xffffffff;
        fVar24 = fVar25;
      }
      uVar10 = uVar10 + 1;
      pfVar9 = pfVar9 + 3;
    } while ((longlong)*(int *)(param_1 + 0x38) != uVar10);
    local_1b0 = 0.0;
    local_1a8 = 0.0;
    if ((int)uVar7 != -1) {
      pfVar9 = (float *)(*(longlong *)(param_1 + 0x30) + (longlong)(int)uVar7 * 0xc);
      if ((param_9 != 0.0) || (NAN(param_9))) {
        dVar19 = 1.0 / SQRT(dVar20 * dVar20 + dVar14 * dVar14 + dVar18 * dVar18);
        local_1a8 = (double)((float)(dVar20 * dVar19 * param_9) + pfVar9[2]);
        local_1b0 = (double)((float)(dVar18 * dVar19 * param_9) + pfVar9[1]);
        local_208[10] = (double)((float)(dVar19 * dVar14 * param_9) + *pfVar9);
      }
      else {
        local_1a8 = (double)pfVar9[2];
        local_1b0 = (double)pfVar9[1];
        local_208[10] = (double)*pfVar9;
      }
    }
  }
  dVar1 = dVar16 * dVar14 - dVar17 * dVar18;
  dVar19 = dVar17 * dVar20 - dVar22 * dVar14;
  dVar2 = dVar18 * dVar22 - dVar16 * dVar20;
  dVar1 = dVar1 + dVar1;
  dVar19 = dVar19 + dVar19;
  dVar2 = dVar2 + dVar2;
  dVar4 = local_348._8_8_;
  local_2a8._8_4_ = uVar12;
  local_2a8._0_8_ = dVar4;
  local_2a8._12_4_ = uVar13;
  local_2b8._8_4_ = SUB84(dVar16,0);
  local_2b8._0_8_ = -dVar16;
  local_2b8._12_4_ = uVar29 ^ 0x80000000;
  dVar15 = (dVar17 * dVar19 - dVar2 * dVar16) + (dVar4 * dVar1 - dVar20);
  local_288._8_4_ = uVar23;
  local_288._0_8_ = dVar16;
  local_288._12_4_ = uVar29;
  local_2c8._8_4_ = SUB84(dVar16,0);
  local_2c8._0_8_ = -dVar17;
  local_2c8._12_4_ = uVar29 ^ 0x80000000;
  dVar20 = (dVar22 * dVar2 - dVar1 * dVar17) + (dVar4 * dVar19 - dVar18);
  local_2d8._8_4_ = uVar12;
  local_2d8._0_8_ = -dVar22;
  local_2d8._12_4_ = uVar13 ^ 0x80000000;
  dVar14 = (dVar16 * dVar1 - dVar19 * dVar22) + (dVar4 * dVar2 - dVar14);
  dVar18 = dVar15 * dVar15 + dVar14 * dVar14 + dVar20 * dVar20;
  if (dVar18 <= 2.2250738585072014e-308) {
    dVar20 = *(double *)(param_2 + 0x20);
    dVar22 = *(double *)(param_2 + 0x28);
    dVar16 = *(double *)(param_2 + 0x30);
  }
  else {
    dVar18 = SQRT(dVar18);
    dVar19 = *(double *)(param_2 + 0x10) + param_11;
    dVar16 = (dVar15 / dVar18) * dVar19 + *(double *)(param_2 + 0x30);
    dVar22 = (dVar20 / dVar18) * dVar19 + *(double *)(param_2 + 0x28);
    dVar20 = dVar19 * (dVar14 / dVar18) + *(double *)(param_2 + 0x20);
  }
  uVar26 = (uint)((ulonglong)dStack_320 >> 0x20);
  local_2f8._8_4_ = uVar23;
  local_2f8._0_8_ = -dStack_320;
  local_2f8._12_4_ = uVar26 ^ 0x80000000;
  dVar14 = local_328 * dVar22 - dVar20 * dStack_320;
  local_308._8_4_ = uVar23;
  local_308._0_8_ = -local_328;
  local_308._12_4_ = uVar26 ^ 0x80000000;
  dVar18 = local_338 * dVar20 - dVar16 * local_328;
  uVar13 = (uint)((ulonglong)dStack_330 >> 0x20);
  local_298._8_4_ = SUB84(dStack_330,0);
  local_298._0_8_ = -local_338;
  local_298._12_4_ = uVar13 ^ 0x80000000;
  dVar19 = dStack_320 * dVar16 - dVar22 * local_338;
  dVar14 = dVar14 + dVar14;
  dVar18 = dVar18 + dVar18;
  dVar19 = dVar19 + dVar19;
  local_318._8_4_ = SUB84(dStack_330,0);
  local_318._0_8_ = dStack_330;
  local_318._12_4_ = uVar13;
  local_2e8._8_4_ = uVar23;
  local_2e8._0_8_ = dStack_320;
  local_2e8._12_4_ = uVar26;
  local_208[0] = (local_328 * dVar18 - dVar19 * dStack_320) + dStack_330 * dVar14 + dVar16;
  local_210 = (local_338 * dVar19 - dVar14 * local_328) + dStack_330 * dVar18 + dVar22;
  local_238[4] = (dStack_320 * dVar14 - dVar18 * local_338) + dStack_330 * dVar19 + dVar20;
  iVar11 = 0;
  local_390 = 0.0;
  local_398 = 0.0;
  local_3a0 = 0.0;
  dVar22 = 1.79769313486232e+308;
  local_3d8 = 0.0;
  local_358._8_4_ = uVar23;
  local_358._0_8_ = dVar17;
  local_358._12_4_ = uVar29;
  dVar14 = local_3c0 - (local_1a8 - local_208[0]);
  dVar18 = local_3d0 - (local_1b0 - local_210);
  dVar20 = local_3c8 - (local_208[10] - local_238[4]);
  local_3b8 = local_3c0;
  local_3b0 = local_3d0;
  local_3a8 = local_3c8;
  while (iVar11 != 0x20) {
    dVar17 = 0.0;
    if ((longlong)*(int *)(param_1 + 0x38) < 1) {
      local_378 = 0.0;
      local_370 = 0.0;
    }
    else {
      pfVar9 = (float *)(*(longlong *)(param_1 + 0x30) + 8);
      uVar7 = 0xffffffff;
      uVar10 = 0;
      fVar24 = -3.4028235e+38;
      do {
        fVar25 = *pfVar9 * (float)dVar14 + pfVar9[-2] * (float)dVar20 + pfVar9[-1] * (float)dVar18;
        if (fVar24 < fVar25) {
          uVar7 = uVar10 & 0xffffffff;
          fVar24 = fVar25;
        }
        uVar10 = uVar10 + 1;
        pfVar9 = pfVar9 + 3;
      } while ((longlong)*(int *)(param_1 + 0x38) != uVar10);
      local_378 = 0.0;
      local_370 = 0.0;
      if ((int)uVar7 != -1) {
        pfVar9 = (float *)(*(longlong *)(param_1 + 0x30) + (longlong)(int)uVar7 * 0xc);
        if ((param_9 != 0.0) || (NAN(param_9))) {
          dVar17 = 1.0 / SQRT(dVar14 * dVar14 + dVar20 * dVar20 + dVar18 * dVar18);
          local_370 = (double)((float)(dVar14 * dVar17 * param_9) + pfVar9[2]);
          local_378 = (double)((float)(dVar18 * dVar17 * param_9) + pfVar9[1]);
          dVar17 = (double)((float)(dVar17 * dVar20 * param_9) + *pfVar9);
        }
        else {
          local_370 = (double)pfVar9[2];
          local_378 = (double)pfVar9[1];
          dVar17 = (double)*pfVar9;
        }
      }
    }
    dVar2 = (double)local_288._0_8_ * dVar20 - (double)CONCAT44(uVar28,uVar27) * dVar18;
    dVar19 = (double)CONCAT44(uVar28,uVar27) * dVar14 - (double)local_348._0_8_ * dVar20;
    dVar16 = (double)local_348._0_8_ * dVar18 - (double)local_288._0_8_ * dVar14;
    dVar2 = dVar2 + dVar2;
    dVar19 = dVar19 + dVar19;
    dVar16 = dVar16 + dVar16;
    dVar1 = (double)CONCAT44(uVar28,uVar27) * dVar19 + dVar16 * (double)local_2b8._0_8_ +
            ((double)local_2a8._0_8_ * dVar2 - dVar14);
    dVar4 = dVar2 * (double)local_2c8._0_8_ + (double)local_348._0_8_ * dVar16 +
            ((double)local_2a8._0_8_ * dVar19 - dVar18);
    dVar19 = dVar19 * (double)local_2d8._0_8_ + (double)local_288._0_8_ * dVar2 +
             ((double)local_2a8._0_8_ * dVar16 - dVar20);
    dVar16 = dVar1 * dVar1 + dVar19 * dVar19 + dVar4 * dVar4;
    if (dVar16 <= 2.2250738585072014e-308) {
      dVar16 = *(double *)(param_2 + 0x20);
      dVar1 = *(double *)(param_2 + 0x28);
      dVar2 = *(double *)(param_2 + 0x30);
    }
    else {
      dVar16 = SQRT(dVar16);
      dVar15 = *(double *)(param_2 + 0x10) + param_11;
      dVar2 = (dVar1 / dVar16) * dVar15 + *(double *)(param_2 + 0x30);
      dVar1 = (dVar4 / dVar16) * dVar15 + *(double *)(param_2 + 0x28);
      dVar16 = dVar15 * (dVar19 / dVar16) + *(double *)(param_2 + 0x20);
    }
    dVar19 = local_328 * dVar1 + dVar16 * (double)local_2f8._0_8_;
    dVar3 = local_338 * dVar16 + dVar2 * (double)local_308._0_8_;
    dVar15 = (double)local_2e8._0_8_ * dVar2 + dVar1 * (double)local_298._0_8_;
    dVar19 = dVar19 + dVar19;
    dVar3 = dVar3 + dVar3;
    dVar15 = dVar15 + dVar15;
    dVar4 = local_328 * dVar3 + dVar15 * (double)local_2f8._0_8_ +
            (double)local_318._0_8_ * dVar19 + dVar2;
    dVar1 = dVar19 * (double)local_308._0_8_ + local_338 * dVar15 +
            (double)local_318._0_8_ * dVar3 + dVar1;
    dVar16 = dVar3 * (double)local_298._0_8_ + (double)local_2e8._0_8_ * dVar19 +
             (double)local_318._0_8_ * dVar15 + dVar16;
    dVar3 = local_370 - dVar4;
    dVar19 = local_378 - dVar1;
    lVar5 = (longlong)(int)local_258;
    local_238[lVar5 * 3 + 0x10] = dVar17;
    dVar17 = dVar17 - dVar16;
    local_238[lVar5 * 3 + 0x11] = local_378;
    dVar2 = local_3b8 - dVar3;
    local_238[lVar5 * 3 + 0x12] = local_370;
    dVar15 = local_3b0 - dVar19;
    local_238[lVar5 * 3 + 4] = dVar16;
    dVar21 = local_3a8 - dVar17;
    local_238[lVar5 * 3 + 5] = dVar1;
    local_238[lVar5 * 3 + 6] = dVar4;
    dVar16 = dVar14 * dVar2 + dVar20 * dVar21 + dVar18 * dVar15;
    *(int *)((longlong)&local_258 + lVar5 * 4 + 4) = (int)local_258;
    uVar12 = SUB84(dVar22,0);
    uVar23 = (undefined4)((ulonglong)dVar22 >> 0x20);
    local_388 = dVar22;
    local_380 = dVar20;
    local_368 = dVar18;
    local_360 = dVar14;
    if (0.0 < dVar16) {
      dVar22 = dVar14 * param_4[2] + dVar20 * *param_4 + dVar18 * param_4[1];
      if (dVar22 < 0.0) {
        dVar22 = local_3d8 - dVar16 / dVar22;
        if (dVar22 <= local_3d8) goto LAB_1412e613f;
        if (dVar22 <= param_5) {
          dVar4 = param_4[2] * dVar22 + local_3c0;
          dVar16 = param_4[1] * dVar22 + local_3d0;
          dVar1 = *param_4 * dVar22 + local_3c8;
          local_3b8 = dVar4 - local_3b8;
          local_3b0 = dVar16 - local_3b0;
          local_3a8 = dVar1 - local_3a8;
          local_158 = local_158 + local_3a8;
          dStack_150 = dStack_150 + local_3b0;
          local_148 = local_148 + local_3b8;
          dStack_140 = dStack_140 + local_3a8;
          local_138 = local_138 + local_3b0;
          dStack_130 = dStack_130 + local_3b8;
          local_128 = local_3a8 + local_128;
          dStack_120 = local_3b0 + dStack_120;
          local_118 = local_3b8 + local_118;
          dVar2 = dVar4 - dVar3;
          dVar15 = dVar16 - dVar19;
          dVar21 = dVar1 - dVar17;
          uVar12 = 0xffffffff;
          uVar23 = 0x7fefffff;
          local_3d8 = dVar22;
          local_3b8 = dVar4;
          local_3b0 = dVar16;
          local_3a8 = dVar1;
          local_3a0 = dVar14;
          local_398 = dVar18;
          local_390 = dVar20;
          goto LAB_1412e6114;
        }
      }
      uVar6 = 0;
      goto LAB_1412e6309;
    }
LAB_1412e6114:
    local_258 = CONCAT44(local_258._4_4_,(int)local_258 + 1);
    local_238[lVar5 * 3 + 0x1c] = dVar21;
    local_238[lVar5 * 3 + 0x1d] = dVar15;
    local_238[lVar5 * 3 + 0x1e] = dVar2;
    dVar22 = local_3d8;
LAB_1412e613f:
    local_3d8 = dVar22;
    uVar27 = local_358._0_4_;
    uVar28 = local_358._4_4_;
    local_3e8 = local_238 + 0x10;
    local_3e0 = local_238 + 4;
    FUN_1449162b1(&local_270,local_238 + 0x1c);
    dVar22 = local_260 * local_260 + local_270 * local_270 + local_268 * local_268;
    if ((dVar22 < 1e-06) ||
       (iVar11 = iVar11 + 1, dVar14 = local_260, dVar18 = local_268, dVar20 = local_270,
       (double)CONCAT44(uVar23,uVar12) <= dVar22)) break;
  }
  *param_6 = local_3d8;
  uVar6 = 1;
  dVar20 = 0.0;
  if (0.0 < local_3d8) {
    dVar14 = 1.0 / SQRT(local_3a0 * local_3a0 + local_390 * local_390 + local_398 * local_398);
    *param_8 = dVar14 * local_390;
    param_8[1] = local_398 * dVar14;
    param_8[2] = local_3a0 * dVar14;
    dVar18 = 0.0;
    dVar14 = 0.0;
    if (0 < (longlong)(int)local_258) {
      pdVar8 = local_238 + 6;
      lVar5 = 0;
      dVar20 = 0.0;
      dVar14 = 0.0;
      do {
        dVar22 = local_238[lVar5];
        dVar20 = dVar20 + *pdVar8 * dVar22;
        dVar18 = dVar18 + pdVar8[-1] * dVar22;
        dVar14 = dVar14 + dVar22 * pdVar8[-2];
        lVar5 = lVar5 + 1;
        pdVar8 = pdVar8 + 3;
      } while ((int)local_258 != lVar5);
    }
    dVar22 = param_4[2];
    dVar17 = param_4[1];
    *param_7 = local_3c8 + local_3d8 * *param_4 + dVar14;
    param_7[1] = local_3d0 + dVar17 * local_3d8 + dVar18;
    param_7[2] = local_3c0 + dVar22 * local_3d8 + dVar20;
  }
LAB_1412e6309:
  if ((local_f0 ^ (ulonglong)auStack_408) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412e64ee thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412e64f4 FUN_1412e64f4 body=324 status=ok
// SIG undefined FUN_1412e64f4(void)

undefined4 * FUN_1412e64f4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1412e66fa(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(uint *)*param_3;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  *puVar1 = 0;
  local_40[4] = *(uint *)(puVar1 + 1);
  local_40[5] = *(uint *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = *local_40;
  local_58 = 0;
  cVar2 = FUN_1412e663a(param_1,uVar4,local_40);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[7] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1412e68e0(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412e663a FUN_1412e663a body=191 status=ok
// SIG undefined FUN_1412e663a(void)

void FUN_1412e663a(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_14691d8c2(param_1,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          break;
        }
        iVar8 = piVar1[6];
        uVar6 = 0;
      } while (iVar8 != -1);
      goto LAB_1412e66ab;
    }
  }
  uVar6 = 0;
LAB_1412e66ab:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 1412e66fa FUN_1412e66fa body=485 status=ok
// SIG undefined FUN_1412e66fa(void)

int * FUN_1412e66fa(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1447711aa(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x20);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x20) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1412e68e0 FUN_1412e68e0 body=431 status=ok
// SIG undefined FUN_1412e68e0(void)

void FUN_1412e68e0(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 1412e6a90 FUN_1412e6a90 body=366 status=ok
// SIG undefined FUN_1412e6a90(void)

undefined4 *
FUN_1412e6a90(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60 [2];
  undefined8 *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1412e6e32(param_1,local_60);
  iVar5 = 1;
  FUN_1412e6c00(&local_50,1);
  uVar1 = *(undefined8 *)*param_3;
  *local_58 = uVar1;
  local_58[1] = CONCAT44(uStack_4c,local_50);
  *(undefined4 *)(local_58 + 2) = 0xffffffff;
  local_50 = local_60[0];
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_68 = param_4;
  cVar2 = FUN_1412e6d66(param_1,uVar7,local_58,&local_50);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_58 + 0x14) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_58 + 2) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_50;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1412e789a(param_1);
    }
  }
  *param_2 = local_50;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412e6c00 FUN_1412e6c00 body=117 status=ok
// SIG undefined FUN_1412e6c00(void)

longlong * FUN_1412e6c00(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = 0;
  lVar2 = FUN_14001cc68(0x90,0x10);
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0x100000000;
  FUN_1412e6c76(lVar2,param_2,1);
  lVar1 = *param_1;
  *param_1 = lVar2;
  if (lVar1 != 0) {
    FUN_1411db51e(lVar1);
    FUN_1400020a8(lVar1);
  }
  return param_1;
}



// FUNCTION 1412e6c76 FUN_1412e6c76 body=159 status=ok
// SIG undefined FUN_1412e6c76(void)

void FUN_1412e6c76(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x88) = param_2;
    if ((uint)(*(int *)(param_1 + 0x8c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f92046(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar2 = param_1;
    }
    FUN_1412e6d16((longlong)iVar1 * 0x80 + lVar2,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146f920d2(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146f92148(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1412e6d16 FUN_1412e6d16 body=80 status=ok
// SIG undefined FUN_1412e6d16(void)

void FUN_1412e6d16(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x78);
    do {
      *(undefined8 *)(puVar1 + -0x1a) = 0;
      *(undefined8 *)(puVar1 + -0x18) = 0x8000000000;
      *(undefined8 *)(puVar1 + -0xe) = 0;
      puVar1[-0xc] = 0;
      *(undefined8 *)(puVar1 + -0x16) = 0;
      *(undefined8 *)(puVar1 + -0x14) = 0;
      *(undefined8 *)(puVar1 + -0xb) = 0xffffffff00000080;
      puVar1[-9] = 0;
      *(undefined8 *)(puVar1 + -6) = 0;
      puVar1[-4] = 0;
      puVar1[-2] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1412e6d66 FUN_1412e6d66 body=203 status=ok
// SIG undefined FUN_1412e6d66(void)

void FUN_1412e6d66(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
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
          lVar1 = plVar5[1];
          if (lVar1 != 0) {
            FUN_1411db51e(lVar1);
            FUN_1400020a8(lVar1);
          }
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar1 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)*param_3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar2;
          *(int *)(plVar5 + 1) = (int)lVar1;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar3;
          FUN_146f98c6e(param_1,*param_4,1);
          *param_4 = iVar6;
          uVar4 = 1;
          break;
        }
        iVar6 = (int)plVar5[2];
        uVar4 = 0;
      } while (iVar6 != -1);
      goto LAB_1412e6ddc;
    }
  }
  uVar4 = 0;
LAB_1412e6ddc:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar4;
  }
  return;
}



// FUNCTION 1412e6e32 FUN_1412e6e32 body=489 status=ok
// SIG undefined FUN_1412e6e32(void)

int * FUN_1412e6e32(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_14482b872(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1412e701c FUN_1412e701c body=242 status=ok
// SIG undefined FUN_1412e701c(void)

longlong *
FUN_1412e701c(longlong *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
             undefined4 param_5,int param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *(undefined4 *)(puVar2 + 1) = 4;
  if (param_6 < 1) {
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined4 *)(puVar2 + 2) = param_5;
    *(undefined4 *)((longlong)puVar2 + 0x14) = param_4;
    *puVar2 = &PTR_FUN_149fa7ae0;
    puVar2[6] = 0;
    puVar2[7] = 0x100000000;
    *(undefined4 *)(puVar2 + 8) = *param_3;
    FUN_146f86f1e(puVar2,param_2);
  }
  else {
    *(int *)((longlong)puVar2 + 0xc) = param_6;
    *(undefined4 *)(puVar2 + 2) = param_5;
    *(undefined4 *)((longlong)puVar2 + 0x14) = param_4;
    *puVar2 = &PTR_FUN_149fa7a50;
    puVar2[6] = 0;
    puVar2[7] = 0x100000000;
    *(undefined4 *)(puVar2 + 8) = *param_3;
    FUN_1412e710e(puVar2,param_2);
  }
  puVar1 = (undefined8 *)*param_1;
  *param_1 = (longlong)puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 1412e710e FUN_1412e710e body=212 status=ok
// SIG undefined FUN_1412e710e(void)

void FUN_1412e710e(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  lVar1 = param_1 + 0x18;
  iVar6 = *(int *)(param_1 + 0x38);
  if (param_2 < iVar6) {
    FUN_146f869da(lVar1,param_2,1);
    return;
  }
  if (iVar6 < param_2) {
    do {
      *(uint *)(param_1 + 0x38) = iVar6 + 1U;
      if (*(uint *)(param_1 + 0x3c) < iVar6 + 1U) {
        FUN_146f8679a(lVar1,iVar6);
      }
      lVar4 = *(longlong *)(param_1 + 0x30);
      if (*(longlong *)(param_1 + 0x30) == 0) {
        lVar4 = lVar1;
      }
      lVar5 = (longlong)iVar6;
      iVar6 = *(int *)(param_1 + 0xc);
      puVar2 = (undefined8 *)(lVar4 + lVar5 * 0x18);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(int *)(lVar4 + 0x10 + lVar5 * 0x18) = iVar6;
      iVar3 = *(int *)(param_1 + 0x10);
      iVar6 = iVar6 * iVar3;
      if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar6);
      }
      lVar4 = lVar4 + lVar5 * 0x18;
      if (iVar6 != 0) {
        FUN_14481578e(lVar4);
      }
      if (0 < iVar3) {
        FUN_146f8621c(lVar4,iVar3 + -1,param_1 + 0x40);
      }
      iVar6 = *(int *)(param_1 + 0x38);
    } while (iVar6 < param_2);
  }
  return;
}



// FUNCTION 1412e71e2 FUN_1412e71e2 body=362 status=ok
// SIG undefined FUN_1412e71e2(void)

undefined4 *
FUN_1412e71e2(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1412e740e(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = *local_40;
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_1412e734e(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1412e75ea(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412e734e FUN_1412e734e body=192 status=ok
// SIG undefined FUN_1412e734e(void)

void FUN_1412e734e(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 uVar5;
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
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          puVar1 = (undefined8 *)plVar6[1];
          if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
          }
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)*param_3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar2;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar3;
          FUN_146f9145c(param_1,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_1412e737c;
    }
  }
  uVar5 = 0;
LAB_1412e737c:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 1412e740e FUN_1412e740e body=476 status=ok
// SIG undefined FUN_1412e740e(void)

int * FUN_1412e740e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_14482b872(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1412e75ea FUN_1412e75ea body=688 status=ok
// SIG undefined FUN_1412e75ea(void)

void FUN_1412e75ea(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar10 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_1412e7650;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar10 != uVar3);
LAB_1412e7650:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar16 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar16 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar16 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar14 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar13[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar16) {
      iVar16 = iVar7;
    }
  }
  if (iVar16 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar15 = (longlong)iVar16;
      uVar2 = *(undefined8 *)(lVar9 + lVar15 * 0x18);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x14 + lVar15 * 0x18) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x10 + lVar15 * 0x18) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar16;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar16 = (int)uVar4;
      lVar9 = (longlong)iVar16;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar16) {
          iVar12 = iVar16;
        }
        if (iVar11 <= iVar16) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar15 + 1];
          if (uVar3 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar12 - lVar9 == lVar15) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar16 + (int)lVar15 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar7);
  }
  return;
}



// FUNCTION 1412e789a FUN_1412e789a body=482 status=ok
// SIG undefined FUN_1412e789a(void)

void FUN_1412e789a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1412e7a7e FUN_1412e7a7e body=318 status=ok
// SIG undefined FUN_1412e7a7e(void)

void FUN_1412e7a7e(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  
  iVar9 = *(int *)((longlong)param_1 + 0xc);
  FUN_1412e7bc0(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar9 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_146f9eab4(param_1,0);
  }
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  param_1[2] = param_2;
  lVar5 = *(longlong *)(param_3 + 0x80);
  if (*(longlong *)(param_3 + 0x80) == 0) {
    lVar5 = param_3;
  }
  uVar3 = 1;
  if (*(int *)(lVar5 + 0x28) != *(int *)(lVar5 + 0x54)) {
    uVar2 = (uint)((ulonglong)param_4 >> 0x10);
    uVar8 = (uint)param_4 & 0xffff;
    lVar7 = lVar5 + 0x58;
    if (*(longlong *)(lVar5 + 0x60) != 0) {
      lVar7 = *(longlong *)(lVar5 + 0x60);
    }
    iVar9 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar5 + 0x68) - 1U &
                             (int)((ulonglong)param_4 >> 0x20) + ((uint)param_4 << 0x10 | uVar8) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar5 + 0x20) + (longlong)iVar9 * 0x18);
        if (*plVar1 == param_4) {
          plVar6 = (longlong *)0x0;
          if ((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) {
            plVar6 = (longlong *)plVar1[1];
            if ((int)plVar6[1] != 4) goto LAB_1412e7b8d;
            uVar3 = *(undefined4 *)((longlong)plVar6 + 0xc);
          }
          break;
        }
        iVar9 = (int)plVar1[2];
        plVar6 = (longlong *)0x0;
      } while (iVar9 != -1);
      goto LAB_1412e7b57;
    }
  }
LAB_1412e7b8d:
  plVar6 = (longlong *)0x0;
LAB_1412e7b57:
  param_1[3] = plVar6;
  *(undefined4 *)(param_1 + 4) = uVar3;
  iVar4 = (**(code **)(*plVar6 + 0x68))();
  iVar9 = *(int *)(param_1[2] + 0x88);
  if (iVar4 < *(int *)(param_1[2] + 0x88)) {
    iVar9 = iVar4;
  }
  FUN_1412e7bec(param_1,iVar9,1);
  *(undefined1 *)((longlong)param_1 + 0x35) = 1;
  return;
}



// FUNCTION 1412e7bc0 FUN_1412e7bc0 body=43 status=ok
// SIG undefined FUN_1412e7bc0(void)

void FUN_1412e7bc0(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1412e7de4(param_1);
    param_1 = param_1 + 0xb0;
  }
  return;
}



// FUNCTION 1412e7bec FUN_1412e7bec body=231 status=ok
// SIG undefined FUN_1412e7bec(void)

void FUN_1412e7bec(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_1412e7cd4(param_1,iVar1);
    }
    if (uVar3 != 0) {
      puVar2 = (undefined4 *)((longlong)iVar1 * 0xb0 + *param_1 + 0xa8);
      do {
        *(undefined8 *)(puVar2 + -0x1e) = 0;
        puVar2[-0x1c] = 0;
        *(undefined8 *)(puVar2 + -0x2a) = 0;
        *(undefined8 *)(puVar2 + -0x28) = 0;
        *(undefined8 *)(puVar2 + -0x26) = 0;
        *(undefined8 *)(puVar2 + -0x24) = 0;
        *(undefined8 *)(puVar2 + -0x1b) = 0xffffffff00000080;
        puVar2[-0x19] = 0;
        *(undefined8 *)(puVar2 + -0x16) = 0;
        puVar2[-0x14] = 0;
        *(undefined8 *)(puVar2 + -10) = 0;
        puVar2[-8] = 0;
        *(undefined8 *)(puVar2 + -0x12) = 0;
        *(undefined8 *)(puVar2 + -0x10) = 0;
        *(undefined8 *)(puVar2 + -7) = 0xffffffff00000080;
        puVar2[-5] = 0;
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2 = puVar2 + 0x2c;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146f9eb24(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146f9eb86(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1412e7cd4 FUN_1412e7cd4 body=271 status=ok
// SIG undefined FUN_1412e7cd4(void)

void FUN_1412e7cd4(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0xb0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb0)) {
      uVar5 = uVar4 / 0xb0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1412e7de4 FUN_1412e7de4 body=354 status=ok
// SIG undefined FUN_1412e7de4(void)

void FUN_1412e7de4(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (*(int *)((longlong)param_1 + 0x6c) != 0) {
    FUN_1447a08a2(param_1 + 0xc,0);
  }
  param_1[0x12] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x8c)) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80;
    FUN_1446efbd8(param_1 + 0xe,0);
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_1447a08a2(param_1 + 2,0);
  }
  param_1[8] = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x3c)) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
    FUN_1446efbd8(param_1 + 4,0);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1412e7f46(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1412e7f46 FUN_1412e7f46 body=40 status=ok
// SIG undefined FUN_1412e7f46(void)

void FUN_1412e7f46(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146f928da(param_1);
    param_1 = param_1 + 0x58;
  }
  return;
}



// FUNCTION 1412e7f6e FUN_1412e7f6e body=73 status=ok
// SIG undefined FUN_1412e7f6e(void)

undefined8 * FUN_1412e7f6e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b345010;
  FUN_1400fd473(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1412e7fce FUN_1412e7fce body=174 status=ok
// SIG undefined FUN_1412e7fce(void)

void FUN_1412e7fce(longlong *param_1)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)((longlong)param_1 + 0x1151) & 1) == 0) {
    FUN_1446f470e(local_20,L"OnRep_StartFuse",1);
    FUN_140721fbe(param_1 + 0x265,local_20);
  }
  else if (0.0 < *(float *)((longlong)param_1 + 0xee4)) {
    if (((char)param_1[0x2f] == '\x03') || ((*(byte *)(param_1 + 0xc) & 1) != 0)) {
      *(byte *)(param_1 + 0x1db) = *(byte *)(param_1 + 0x1db) | 4;
      (**(code **)(*param_1 + 0x388))(param_1);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412e8090 FUN_1412e8090 body=1944 status=ok
// SIG undefined FUN_1412e8090(void)

void FUN_1412e8090(ulonglong param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined4 local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined1 local_128;
  longlong *local_120;
  longlong local_118;
  longlong *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  int local_c8;
  undefined8 *local_c0;
  int local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  ulonglong local_a8;
  ulonglong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_80;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*(longlong *)(param_1 + 0xe10) == 0) goto LAB_1412e84a1;
  lVar8 = FUN_1402d1dc0(*(longlong *)(param_1 + 0xe10) + 0x610);
  local_d0 = 0;
  local_c8 = 0;
  plVar9 = (longlong *)FUN_140b51ce6();
  if (plVar9 != (longlong *)0x0) {
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_a8 = param_1;
    lVar12 = (**(code **)(*plVar9 + 0x20))(plVar9,&local_a8,&local_d0,0);
    if (lVar12 != 0) {
      lVar8 = lVar12;
    }
  }
  lVar12 = *(longlong *)(param_1 + 0xe10);
  local_d8 = *(undefined8 *)(lVar12 + 0x678);
  local_148 = &local_e8;
  local_e8 = *(undefined8 *)(lVar12 + 0x668);
  uStack_e0 = *(undefined8 *)(lVar12 + 0x670);
  local_108 = *(undefined4 *)(lVar12 + 0x650);
  uStack_104 = *(undefined4 *)(lVar12 + 0x654);
  uStack_100 = *(undefined4 *)(lVar12 + 0x658);
  uStack_fc = *(undefined4 *)(lVar12 + 0x65c);
  local_f8 = *(undefined8 *)(lVar12 + 0x660);
  local_128 = 1;
  local_138 = 1;
  local_130 = 0;
  local_140 = 2;
  lVar8 = FUN_140a44468(lVar8,*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(lVar12 + 0x680));
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar8);
  }
  *(longlong *)(param_1 + 0x1190) = lVar8;
  if (0 < local_c8) {
    local_a8 = local_a8 & 0xffffffffffffff00;
    local_80 = 0;
    FUN_1456bb102(&local_a8,param_1);
    FUN_140e99737(*(undefined8 *)(param_1 + 0x1190),&local_d0,&local_a8);
    FUN_144a5ac3a(&local_a8);
  }
  lVar8 = *(longlong *)(param_1 + 0xe10);
  lVar12 = *(longlong *)(lVar8 + 0x548);
  if (lVar12 == 0) {
    uVar10 = FUN_140067708();
    lVar12 = FUN_14477b664(uVar10);
    *(longlong *)(lVar8 + 0x548) = lVar12;
  }
  if (*(longlong *)(lVar8 + 0x550) == 0) {
    if ((lVar12 == 0) || (*(longlong *)(lVar8 + 0x540) == 0)) goto LAB_1412e84a1;
    plVar9 = *(longlong **)(lVar12 + 0xb8);
    if ((plVar9 == (longlong *)0x0) ||
       (cVar7 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar7 == '\0')) {
      *(undefined8 *)(lVar8 + 0x550) = 0;
      goto LAB_1412e84a1;
    }
    uVar10 = (**(code **)(*plVar9 + 0x110))(plVar9);
    lVar12 = FUN_144aff482(uVar10,(longlong *)(lVar8 + 0x540));
    *(longlong *)(lVar8 + 0x550) = lVar12;
    if (lVar12 == 0) goto LAB_1412e84a1;
  }
  (**(code **)(*(longlong *)(param_1 + 0x3d8) + 0x10))(param_1 + 0x3d8,&local_118);
  if ((local_118 != 0) && (FUN_1403c747e(local_118,&local_120,0), local_120 != (longlong *)0x0)) {
    local_148 = (undefined8 *)((ulonglong)local_148 & 0xffffffff00000000);
    FUN_14071ab80(local_120,&local_a8,*(longlong *)(param_1 + 0xe10) + 0x540,param_1);
    *(ulonglong *)(param_1 + 0xef8) = local_a8;
    *(ulonglong *)(param_1 + 0xf00) = local_a0;
    *(ulonglong *)(param_1 + 0xf08) = CONCAT44(uStack_94,local_98);
    lVar8 = *(longlong *)(param_1 + 0xe10);
    lVar12 = *(longlong *)(lVar8 + 0x578);
    if (lVar12 == 0) {
      uVar10 = FUN_1407f787c();
      lVar12 = FUN_14477b664(uVar10);
      *(longlong *)(lVar8 + 0x578) = lVar12;
    }
    if (*(longlong *)(lVar8 + 0x580) == 0) {
      if ((*(longlong *)(lVar8 + 0x570) != 0) && (lVar12 != 0)) {
        plVar9 = *(longlong **)(lVar12 + 0xb8);
        if ((plVar9 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar7 == '\0')) {
          *(undefined8 *)(lVar8 + 0x580) = 0;
        }
        else {
          uVar10 = (**(code **)(*plVar9 + 0x110))(plVar9);
          lVar12 = FUN_144aff482(uVar10,(longlong *)(lVar8 + 0x570));
          *(longlong *)(lVar8 + 0x580) = lVar12;
          if (lVar12 != 0) goto LAB_1412e827b;
        }
      }
    }
    else {
LAB_1412e827b:
      if (0.0 < *(float *)(param_1 + 0xee4)) {
        lVar8 = FUN_1447210f0(param_1);
        plVar9 = local_120;
        *(float *)(param_1 + 0xee8) = (float)*(double *)(lVar8 + 0x6d0);
        fVar2 = *(float *)(param_1 + 0xee4);
        fVar3 = *(float *)(param_1 + 0xeec);
        lVar8 = *(longlong *)(param_1 + 0xe10);
        lVar12 = *(longlong *)(lVar8 + 0x578);
        if (lVar12 == 0) {
          uVar10 = FUN_1407f787c();
          lVar12 = FUN_14477b664(uVar10);
          *(longlong *)(lVar8 + 0x578) = lVar12;
        }
        lVar11 = *(longlong *)(lVar8 + 0x580);
        if (((lVar11 == 0) && (lVar11 = 0, lVar12 != 0)) && (*(longlong *)(lVar8 + 0x570) != 0)) {
          plVar5 = *(longlong **)(lVar12 + 0xb8);
          if ((plVar5 == (longlong *)0x0) ||
             (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
            lVar11 = 0;
          }
          else {
            uVar10 = (**(code **)(*plVar5 + 0x110))(plVar5);
            lVar11 = FUN_144aff482(uVar10,(longlong *)(lVar8 + 0x570));
          }
          *(longlong *)(lVar8 + 0x580) = lVar11;
        }
        local_148 = (undefined8 *)((ulonglong)local_148 & 0xffffffffffffff00);
        FUN_1447997cc(plVar9,lVar11,(fVar2 / fVar2) * fVar3,0);
        uVar10 = FUN_1401b4c98(param_1);
        local_c0 = (undefined8 *)0x0;
        local_b8 = 0;
        FUN_1446efa72(&local_c0,0,3,0x10);
        puVar6 = local_c0;
        local_b8 = 3;
        *local_c0 = &PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 1;
        lVar8 = DAT_14c758608 + 1;
        if (lVar12 == 0) {
          LOCK();
          UNLOCK();
          lVar12 = DAT_14c758608 + 2;
          lVar8 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar8;
        local_c0[2] = lVar12;
        *local_c0 = &PTR_FUN_14b4225a0;
        local_c0[3] = 0;
        iVar13 = 0;
        if (param_1 != 0) {
          uVar4 = *(uint *)(param_1 + 0xc);
          *(uint *)(local_c0 + 3) = uVar4;
          if ((int)uVar4 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
          }
          else {
            lVar8 = 0;
          }
          iVar13 = *(int *)(lVar8 + 0x10);
          if (*(int *)(lVar8 + 0x10) == 0) {
            LOCK();
            iVar13 = DAT_14c964868 + 1;
            UNLOCK();
            iVar14 = DAT_14c964868 + 1;
            bVar15 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar13;
            if (bVar15) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar14);
            }
            LOCK();
            iVar13 = *(int *)(lVar8 + 0x10);
            bVar15 = iVar13 == 0;
            if (bVar15) {
              *(int *)(lVar8 + 0x10) = iVar14;
              iVar13 = 0;
            }
            UNLOCK();
            if (bVar15) {
              iVar13 = iVar14;
            }
          }
        }
        *(int *)((longlong)puVar6 + 0x1c) = iVar13;
        puVar6[4] = FUN_1408f3492;
        *(undefined4 *)(puVar6 + 5) = 0;
        local_a8 = 0;
        local_a0 = local_a0 & 0xffffffff00000000;
        FUN_14487d8d8(&local_a8,&local_c0);
        local_68 = 1;
        local_148 = (undefined8 *)local_b0;
        local_b0[0] = 1;
        local_ac = 0xbf800000;
        FUN_1406f4044(uVar10,param_1 + 0xef0,&local_a8,0x3cf5c28f);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
        if (local_b8 != 0) {
          if (local_c0 == (undefined8 *)0x0) goto LAB_1412e8459;
          (**(code **)*local_c0)(local_c0,0);
          FUN_1446efa72(&local_c0,0,0,0x10);
          local_b8 = 0;
        }
        if (local_c0 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
LAB_1412e8459:
    if (((local_120 != (longlong *)0x0) &&
        (*(int *)(local_120 + 0x21) = (int)local_120[0x21] + -1, (int)local_120[0x26] < 1)) &&
       (FUN_1400847bc(local_120 + 0x17,0), (int)local_120[0x21] == 0)) {
      FUN_140087e46(local_120);
      if (*local_120 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_1412e848d;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_120);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_120);
      }
    }
  }
LAB_1412e848d:
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_110 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar1 = (int *)((longlong)local_110 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_110 + 0x10))(local_110);
      }
    }
  }
LAB_1412e84a1:
  if ((local_50 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412e8829 FUN_1412e8829 body=2267 status=ok
// SIG undefined FUN_1412e8829(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412e8829(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  byte param_5,undefined8 param_6,undefined8 param_7)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  undefined2 *puVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 uStack_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 *local_88;
  uint local_80;
  longlong *local_78;
  uint local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar8 = FUN_1409e01db(param_3);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar9 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,param_2,0);
  if (plVar9 == (longlong *)0x0) {
    local_a8 = (longlong *)0x0;
    uStack_a0 = 0;
    local_b8 = &DAT_14c872b28;
    FUN_14105aa76(DAT_14c872ce0,L"DeviceProfileManager",L"CVarPrefixDummyVariableUpdate");
    FUN_140056680(&local_78,param_2);
    if ((longlong)(int)uStack_a0 != 0) {
      plVar9 = (longlong *)&DAT_149dfb77a;
      if (local_70 != 0) {
        plVar9 = local_78;
      }
      plVar15 = local_a8;
LAB_1412e897c:
      iVar7 = (int)plVar15[1];
      uVar6 = iVar7 - 1;
      if (iVar7 == 0) {
        uVar6 = 0;
      }
      if (0 < (int)uVar6) {
        puVar18 = &DAT_149dfb77a;
        if (iVar7 != 0) {
          puVar18 = (undefined2 *)*plVar15;
        }
        uVar10 = (ulonglong)uVar6;
        lVar17 = 0;
        do {
          uVar2 = *(ushort *)((longlong)plVar9 + lVar17);
          uVar3 = *(ushort *)((longlong)puVar18 + lVar17);
          if (uVar2 == uVar3) {
            if (uVar2 == 0) goto LAB_1412e89ff;
          }
          else {
            if (0x7f < (uVar3 | uVar2)) {
              iVar7 = (uint)uVar2 - (uint)uVar3;
              goto LAB_1412e89e7;
            }
            if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) goto code_r0x0001412e89e4;
          }
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_1412e89ff;
          lVar17 = lVar17 + 2;
        } while( true );
      }
      goto LAB_1412e89ec;
    }
LAB_1412e8b41:
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    local_b8 = (undefined8 *)(CONCAT44(local_b8._4_4_,param_4) | 0x18);
    (**(code **)(*DAT_14c8407a8 + 8))(DAT_14c8407a8,param_2,uVar8,L"IAmNoRealVariable");
LAB_1412e8b73:
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_a8,uStack_a0 & 0xffffffff);
    local_78 = local_a8;
  }
  else {
    bVar4 = (**(code **)(*plVar9 + 0x18))(plVar9);
    if (((param_4 == 0x1000000) &&
        (uVar10 = (**(code **)(*plVar9 + 0x18))(plVar9), (uVar10 & 0x40) == 0)) &&
       (cVar5 = (**(code **)(*plVar9 + 0x18))(plVar9), -1 < cVar5)) goto LAB_1412e902f;
    if ((bVar4 & (param_5 ^ 1)) == 0) {
      lVar17 = *plVar9;
      uVar6 = param_4;
      if (param_4 == 0xff000000) {
        uVar6 = (**(code **)(lVar17 + 0x18))(plVar9);
        lVar17 = *plVar9;
        uVar6 = uVar6 & 0xff000000;
      }
      (**(code **)(lVar17 + 0x98))(plVar9,uVar8,uVar6,param_7);
    }
    uVar6 = (**(code **)(*plVar9 + 0x18))(plVar9);
    if ((param_4 != 0xa000000) || ((uVar6 & 0x2000) == 0)) goto LAB_1412e902f;
    FUN_140056680(&local_78,param_2);
    FUN_140056680(&local_88,uVar8);
    plVar9 = local_78;
    local_a8 = (longlong *)0x0;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,local_70);
    if ((longlong)(int)local_70 == 0) {
      uStack_a0 = (ulonglong)local_70;
    }
    else {
      FUN_1446dd670(&local_a8,local_70,0);
      memcpy(local_a8,plVar9,(longlong)(int)local_70 * 2);
    }
    puVar11 = local_88;
    local_98 = (void *)0x0;
    lVar17 = (longlong)(int)local_80;
    local_90 = CONCAT44(local_90._4_4_,local_80);
    if (lVar17 == 0) {
      local_90 = (ulonglong)local_80;
    }
    else {
      FUN_1446dd670(&local_98,local_80,0);
      memcpy(local_98,puVar11,lVar17 * 2);
    }
    puVar11 = TlsGetValue(DAT_14c896140);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar11 = 0;
      puVar11[1] = 0;
      *(undefined4 *)(puVar11 + 2) = 0;
      TlsSetValue(DAT_14c896140,puVar11);
    }
    puVar13 = (undefined8 *)puVar11[1];
    if (puVar13 == (undefined8 *)0x0) {
      puVar13 = (undefined8 *)*puVar11;
      if (puVar13 == (undefined8 *)0x0) {
        uVar6 = (uint)DAT_14c896180;
        plVar9 = DAT_14c896180;
        while (DAT_14c896180 = plVar9, local_68 = plVar9, ((ulonglong)plVar9 & 0x3ffffff) != 0) {
          local_b0 = (longlong *)(((ulonglong)plVar9 & 0xfffffffffc000000) + 0x4000000);
          if ((ulonglong)local_b0 >> 0x1a < (ulonglong)plVar9 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          uVar10 = (ulonglong)((uVar6 & 0x3ffffff) >> 0xe);
          uVar19 = (ulonglong)((uint)plVar9 & 0x3fff);
          local_b0 = (longlong *)
                     ((ulonglong)local_b0 & 0xfffffffffc000000 |
                     (ulonglong)
                     *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar10 * 8) + 0x10 + uVar19 * 0x18));
          LOCK();
          bVar20 = local_68 == DAT_14c896180;
          plVar9 = local_b0;
          if (!bVar20) {
            plVar9 = DAT_14c896180;
          }
          DAT_14c896180 = plVar9;
          UNLOCK();
          if (bVar20) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar10 * 8) + uVar19 * 0x18 + 0x10) = 0;
            puVar13 = *(undefined8 **)
                       (*(longlong *)(&DAT_14c833b00 + uVar10 * 8) + 8 +
                       (ulonglong)(uVar6 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar6 & 0x3ffffff);
            puVar11[1] = puVar13;
            if (puVar13 != (undefined8 *)0x0) goto LAB_1412e8dec;
            goto LAB_1412e909d;
          }
          uVar6 = (uint)DAT_14c896180;
          plVar9 = DAT_14c896180;
        }
        puVar11[1] = 0;
LAB_1412e909d:
        puVar13 = (undefined8 *)FUN_14001cc68(0x10000,0);
        puVar11[1] = puVar13;
        iVar7 = 0xff;
        puVar14 = puVar13;
        do {
          puVar12 = puVar14 + 0x20;
          *puVar14 = puVar12;
          iVar7 = iVar7 + -1;
          puVar14 = puVar12;
        } while (iVar7 != 0);
      }
      else {
        puVar11[1] = puVar13;
        puVar12 = puVar11;
      }
      *puVar12 = 0;
LAB_1412e8dec:
      *(undefined4 *)(puVar11 + 2) = 0x100;
      iVar7 = 0xff;
    }
    else {
      iVar7 = *(int *)(puVar11 + 2) + -1;
    }
    puVar11[1] = *puVar13;
    *(int *)(puVar11 + 2) = iVar7;
    *puVar13 = UE::Tasks::Private::FTaskBase::vftable;
    puVar13[1] = &DAT_100000002;
    puVar13[2] = 0;
    *(undefined4 *)(puVar13 + 3) = 0;
    *(undefined4 *)(puVar13 + 4) = 0xffffffff;
    puVar13[6] = 0;
    puVar13[7] = 0x100000000;
    *(undefined1 *)(puVar13 + 8) = 1;
    puVar13[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    puVar13[0xf] = 0;
    puVar13[0x10] = 0xe800000000000020;
    puVar13[0x12] = 0;
    puVar13[0x13] = 0x100000000;
    *(undefined2 *)(puVar13 + 0x14) = 0;
    LOCK();
    bVar20 = *(char *)(puVar13 + 8) == '\x01';
    if (bVar20) {
      *(char *)(puVar13 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar20) {
      FUN_14008cdb0(puVar13 + 8);
    }
    *puVar13 = &PTR_FUN_149e30688;
    if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
    }
    puVar13[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar13[9] = puVar13;
    puVar13[10] = puVar13;
    lVar17 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar17 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar17 + 0x30);
    }
    puVar13[0xf] = uVar8;
    puVar13[0x10] = 0xe000005278af8080;
    *(undefined4 *)((longlong)puVar13 + 0x1c) = 0;
    puVar13[0x15] = local_a8;
    local_a8 = (longlong *)0x0;
    *(int *)(puVar13 + 0x16) = (int)uStack_a0;
    *(undefined4 *)((longlong)puVar13 + 0xb4) = uStack_a0._4_4_;
    uStack_a0 = 0;
    puVar13[0x17] = local_98;
    local_98 = (void *)0x0;
    *(undefined4 *)(puVar13 + 0x18) = (undefined4)local_90;
    *(undefined4 *)((longlong)puVar13 + 0xc4) = local_90._4_4_;
    local_90 = 0;
    *puVar13 = &PTR_FUN_149e30678;
    LOCK();
    _DAT_14c8670d0 = _DAT_14c8670d0 + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)puVar13 + 0xc) = *(int *)((longlong)puVar13 + 0xc) + 1;
    UNLOCK();
    puVar13[2] = &DAT_14c8670c8;
    local_68 = (longlong *)CONCAT71(local_68._1_7_,1);
    FUN_1447439e4(puVar13);
    if (puVar13 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar13 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar13)(puVar13,1);
      }
    }
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_a8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1412e902f:
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x0001412e89e4:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_1412e89e7:
  if (iVar7 != 0) {
LAB_1412e89ec:
    plVar15 = plVar15 + 2;
    if (plVar15 == local_a8 + (longlong)(int)uStack_a0 * 2) goto LAB_1412e8b41;
    goto LAB_1412e897c;
  }
LAB_1412e89ff:
  local_68 = (longlong *)0x0;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar9 = DAT_14c8407a8;
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,3,0x10);
  local_80 = 3;
  *local_88 = &PTR_LAB_149e30720;
  LOCK();
  UNLOCK();
  lVar16 = DAT_14c758608 + 1;
  lVar17 = DAT_14c758608 + 1;
  if (lVar16 == 0) {
    LOCK();
    UNLOCK();
    lVar16 = DAT_14c758608 + 2;
    lVar17 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar17;
  local_88[2] = lVar16;
  *local_88 = &PTR_FUN_149e306b0;
  local_88[3] = param_2;
  local_88[4] = &local_68;
  (**(code **)(*plVar9 + 0xe0))(plVar9,&local_88,param_2);
  if (local_80 != 0) {
    if (local_88 == (undefined8 *)0x0) goto LAB_1412e8af3;
    (**(code **)*local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    local_80 = 0;
  }
  if (local_88 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1412e8af3:
  if (local_68 != (longlong *)0x0) {
    bVar4 = (**(code **)(*local_68 + 0x18))();
    plVar9 = local_68;
    if ((bVar4 & (param_5 ^ 1)) == 0) {
      lVar17 = *local_68;
      if (param_4 == 0xff000000) {
        param_4 = (**(code **)(lVar17 + 0x18))(local_68);
        param_4 = param_4 & 0xff000000;
        lVar17 = *plVar9;
      }
      (**(code **)(lVar17 + 0x98))(plVar9,uVar8,param_4,0);
    }
    goto LAB_1412e8b73;
  }
  goto LAB_1412e8b41;
}



// FUNCTION 1412e9105 FUN_1412e9105 body=60 status=ok
// SIG undefined FUN_1412e9105(void)

void FUN_1412e9105(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1412e9142(param_1,param_2);
    param_1 = param_1 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return;
}



// FUNCTION 1412e9142 FUN_1412e9142 body=311 status=ok
// SIG undefined FUN_1412e9142(void)

undefined8 * FUN_1412e9142(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar2 = FUN_14477b664(param_2[1]);
  uVar2 = FUN_14477b664(uVar2);
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[3] = param_2[3];
  uVar2 = FUN_14477b664(param_2[4]);
  uVar2 = FUN_14477b664(uVar2);
  param_1[4] = uVar2;
  param_1[5] = param_2[5];
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  _Src = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],_Src,(longlong)iVar1 << 3);
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  FUN_14141da3a(param_1 + 9,param_2 + 9);
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  FUN_1438a2406(param_1 + 0x15,param_2 + 0x15);
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  return param_1;
}



// FUNCTION 1412e927a FUN_1412e927a body=221 status=ok
// SIG undefined FUN_1412e927a(void)

longlong FUN_1412e927a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb3a638 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1481118e5;
    local_40 = FUN_14646ded6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraDataChannel",&DAT_14cb3a638,&DAT_1481118e4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb3a638;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412e9358 FUN_1412e9358 body=176 status=ok
// SIG undefined FUN_1412e9358(void)

void FUN_1412e9358(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    bVar4 = true;
    if (iVar1 != 0) {
      lVar6 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + lVar6);
        lVar3 = *(longlong *)(lVar2 + 0x50);
        iVar5 = 0;
        if ((lVar3 != 0) && (iVar5 = 0x7fffffff, *(char *)(lVar3 + 8) == '\x01')) {
          iVar5 = *(int *)(lVar3 + 0xc);
        }
        if (*(int *)(lVar2 + 0x94) < iVar5) {
          bVar4 = false;
          break;
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
  }
  else {
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    else {
      lVar6 = 0;
      iVar5 = 0;
      do {
        iVar5 = iVar5 + *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + lVar6) + 0x94);
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
    bVar4 = *(int *)(param_1 + 0x3c) <= iVar5;
  }
  if ((((bool)*(char *)(param_1 + 0x30) != bVar4) &&
      (*(bool *)(param_1 + 0x30) = bVar4, *(int *)(param_1 + 0x20) != 0)) &&
     (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001412e93b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))();
    return;
  }
  return;
}



// FUNCTION 1412e9408 FUN_1412e9408 body=8 status=ok
// SIG undefined FUN_1412e9408(void)

void FUN_1412e9408(longlong param_1)

{
  *(byte *)(param_1 + 0x8e) = *(byte *)(param_1 + 0x8e) | 8;
  return;
}



// FUNCTION 1412e9410 FUN_1412e9410 body=120 status=ok
// SIG undefined FUN_1412e9410(void)

void FUN_1412e9410(longlong param_1,char param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x85) != param_2) {
    *(char *)(param_1 + 0x85) = param_2;
    lVar1 = *(longlong *)(param_1 + 0x90);
    if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0x65) & 2) == 0)) &&
       (lVar1 = *(longlong *)(lVar1 + 0xf48), lVar1 != 0)) {
      lVar1 = (**(code **)(*(longlong *)(lVar1 + 0x10e0) + 0x58))(lVar1 + 0x10e0,&DAT_14cb8d438);
      if (lVar1 != 0) {
        FUN_1406c6e60(lVar1 + 0x1288);
        FUN_140a87c14(lVar1 + 0x1288,0,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1412e9488 FUN_1412e9488 body=297 status=ok
// SIG undefined FUN_1412e9488(void)

undefined8 FUN_1412e9488(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1412e95aa;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1412e95aa;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_1412e95aa:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1412e9555;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_1412e9555;
    }
  }
  uVar6 = 0;
LAB_1412e9555:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412e95b2 FUN_1412e95b2 body=466 status=ok
// SIG undefined FUN_1412e95b2(void)

void FUN_1412e95b2(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  undefined8 *local_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_2 + 0x68) == DAT_14cb8c168) {
    lVar2 = *(longlong *)(param_2 + 0x78);
    local_80 = lVar2;
    FUN_1458c4ac6();
    if (lVar2 == DAT_14cb8c178) {
      lVar2 = *(longlong *)(param_1 + 0xb0);
      if ((lVar2 != 0) || (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)) {
        if (*(longlong *)(lVar2 + 0x1f0) == 0) {
          puVar3 = (undefined8 *)(lVar2 + 0x458);
        }
        else {
          puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
        }
        uVar1 = *puVar3;
        local_90 = (undefined8 *)0x0;
        local_88 = 0;
        FUN_1446efa72(&local_90,0,3,0x10);
        puVar3 = local_90;
        local_88 = 3;
        *local_90 = &PTR_LAB_14a1c8830;
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
        local_90[2] = lVar4;
        *local_90 = &PTR_FUN_14b42e180;
        local_90[3] = 0;
        FUN_14485c47a(local_90 + 3,param_1);
        puVar3[4] = param_1;
        local_78 = 0;
        local_70 = 0;
        FUN_14487d8d8(&local_78,&local_90);
        local_38 = 1;
        FUN_14016fdb0(uVar1,local_98,&local_78);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_38])(&local_78);
        FUN_1449db362(&local_90);
      }
    }
    else if ((lVar2 == DAT_14cb8c170) && (lVar2 = *(longlong *)(param_1 + 0xa8), lVar2 != 0)) {
      FUN_1406966b6(lVar2,&DAT_14cb8c168,1);
      FUN_1405e47c6(lVar2,0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412e9786 FUN_1412e9786 body=25 status=ok
// SIG undefined FUN_1412e9786(void)

undefined8 FUN_1412e9786(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1412e97a0 FUN_1412e97a0 body=281 status=ok
// SIG undefined FUN_1412e97a0(void)

void FUN_1412e97a0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  undefined1 local_98 [16];
  undefined1 *local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(char *)(param_1 + 0xd9) == '\0') && (*(int *)(param_1 + 0x114) < *(int *)(param_1 + 0xe8)))
  {
    lVar2 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x48))(param_1 + 0x30);
    if (lVar2 != 0) {
      *(undefined1 *)(param_1 + 0xd9) = 1;
      if (*(longlong *)(lVar2 + 0x1f0) == 0) {
        puVar3 = (undefined8 *)(lVar2 + 0x458);
      }
      else {
        puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
      }
      uVar1 = *puVar3;
      local_88 = &LAB_145784428;
      local_80 = 0;
      FUN_1458c4e24(local_98,param_1,&local_88);
      local_88 = (undefined1 *)0x0;
      local_80 = 0;
      FUN_14487d8d8(&local_88,local_98);
      local_48 = 1;
      FUN_14016fdb0(uVar1,local_a0,&local_88);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      FUN_1449db362(local_98);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412e98ba FUN_1412e98ba body=612 status=ok
// SIG undefined FUN_1412e98ba(void)

int * FUN_1412e98ba(longlong *param_1,int *param_2,ulonglong *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
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
  int iVar17;
  int iVar18;
  longlong *plVar19;
  ulonglong uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar22 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar22 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar22) {
      FUN_1447030e2(param_1,iVar22);
    }
    lVar24 = (longlong)iVar22;
    iVar17 = FUN_144a54ea4(param_1 + 2,1);
    plVar19 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar19 = param_1 + 2;
    }
    iVar18 = iVar17 + 0x1f;
    if (-1 < iVar17) {
      iVar18 = iVar17;
    }
    bVar5 = (byte)iVar17 & 0x1f;
    puVar1 = (uint *)((longlong)plVar19 + (longlong)(iVar18 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar22 = (int)param_1[6];
    lVar24 = (longlong)iVar22;
    iVar17 = *(int *)(*param_1 + 4 + lVar24 * 0x38);
    *(int *)(param_1 + 6) = iVar17;
    iVar18 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar18;
    if (iVar18 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar17 * 0x38) = 0xffffffff;
    }
  }
  plVar19 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar19 = (longlong *)param_1[4];
  }
  iVar17 = iVar22 + 0x1f;
  if (-1 < iVar22) {
    iVar17 = iVar22;
  }
  puVar1 = (uint *)((longlong)plVar19 + (longlong)(iVar17 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar22 & 0x1f);
  iVar17 = 1;
  lVar25 = *param_1;
  lVar24 = lVar24 * 0x38;
  puVar2 = (undefined4 *)(lVar25 + lVar24);
  uVar20 = *param_3;
  *(ulonglong *)(lVar25 + lVar24) = uVar20;
  puVar3 = (undefined8 *)(lVar25 + 8 + lVar24);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3 = (undefined8 *)(lVar25 + 0x18 + lVar24);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined2 *)(lVar25 + 0x28 + lVar24) = 0x100;
  *(undefined4 *)(lVar25 + 0x30 + lVar24) = 0xffffffff;
  uVar21 = ((uint)(uVar20 >> 0x14) & 0xffff ^ (uint)(uVar20 >> 4)) * -0x7a143595;
  uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
  uVar21 = uVar21 >> 0x10 ^ uVar21;
  uVar23 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar23 != 1) {
    local_50 = uVar20;
    iVar18 = FUN_1412e9b20(param_1,uVar21);
    if (iVar18 != -1) {
      lVar24 = *param_1;
      lVar25 = (longlong)iVar18 * 0x38;
      FUN_1412e9b6e(lVar24 + lVar25);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      uVar10 = puVar2[4];
      uVar11 = puVar2[5];
      uVar12 = puVar2[6];
      uVar13 = puVar2[7];
      uVar14 = puVar2[9];
      uVar15 = puVar2[10];
      uVar16 = puVar2[0xb];
      puVar4 = (undefined4 *)(lVar24 + 0x20 + lVar25);
      *puVar4 = puVar2[8];
      puVar4[1] = uVar14;
      puVar4[2] = uVar15;
      puVar4[3] = uVar16;
      puVar2 = (undefined4 *)(lVar24 + 0x10 + lVar25);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      puVar2[2] = uVar12;
      puVar2[3] = uVar13;
      puVar2 = (undefined4 *)(lVar24 + lVar25);
      *puVar2 = uVar6;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      FUN_1458c5300(param_1,iVar22);
      goto LAB_1412e9a5f;
    }
    if (3 < uVar23) {
      uVar20 = (ulonglong)(uVar23 & 0xfffffffe) + 0xf;
      lVar24 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      iVar17 = 1 << ((byte)lVar24 & 0x1f);
    }
  }
  iVar18 = iVar22;
  if (((int)uVar23 < 1) || (iVar17 <= (int)param_1[9])) {
    uVar21 = (int)param_1[9] - 1U & uVar21;
    puVar2[0xd] = uVar21;
    plVar19 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar19 = param_1 + 7;
    }
    puVar2[0xc] = *(undefined4 *)
                   ((longlong)plVar19 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar21) * 4
                   );
    plVar19 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar19 = param_1 + 7;
    }
    *(int *)((longlong)plVar19 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar21) * 4) =
         iVar22;
  }
  else {
    *(int *)(param_1 + 9) = iVar17;
    FUN_1412e9bba(param_1);
  }
LAB_1412e9a5f:
  *param_2 = iVar18;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412e9b20 FUN_1412e9b20 body=77 status=ok
// SIG undefined FUN_1412e9b20(void)

int FUN_1412e9b20(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x38) == *param_3) {
          return iVar1;
        }
        iVar1 = *(int *)(*param_1 + 0x30 + (longlong)iVar1 * 0x38);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1412e9b6e FUN_1412e9b6e body=76 status=ok
// SIG undefined FUN_1412e9b6e(void)

void FUN_1412e9b6e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1412e9bba FUN_1412e9bba body=483 status=ok
// SIG undefined FUN_1412e9bba(void)

void FUN_1412e9bba(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
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
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar6 = (longlong)iVar4 * 0x38;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x34 + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x30 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 1412e9d9e FUN_1412e9d9e body=213 status=ok
// SIG undefined FUN_1412e9d9e(void)

undefined8 FUN_1412e9d9e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar2 = **(longlong **)(param_1 + 0x58);
  if (lVar2 == 0) {
    puVar4 = (undefined8 *)FUN_14001cc68(0xa8,0x10);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    *puVar4 = &PTR_LAB_14aa2b280;
    puVar4[9] = 0xffffffff00000000;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x14] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    iVar1 = *(int *)(param_1 + 0x68);
    *(uint *)(param_1 + 0x68) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x6c) < iVar1 + 1U) {
      FUN_1458c5934(param_1 + 0x60,iVar1);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x60) + (longlong)iVar1 * 8) = puVar4;
    uVar5 = *(undefined8 *)
             (*(longlong *)(param_1 + 0x60) + (longlong)(*(int *)(param_1 + 0x68) + -1) * 8);
  }
  else {
    uVar5 = *(undefined8 *)(lVar2 + 8);
    lVar3 = *(longlong *)(param_1 + 0x58);
    *(longlong *)(param_1 + 0x58) = lVar2;
    *(undefined8 *)(lVar2 + 8) = 0;
    if (lVar3 != 0) {
      FUN_1400020a8();
    }
  }
  return uVar5;
}



// FUNCTION 1412e9e8a FUN_1412e9e8a body=812 status=ok
// SIG undefined FUN_1412e9e8a(void)

void FUN_1412e9e8a(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  uint *puVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined1 auStack_88 [40];
  uint *local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar14 = (uint *)(param_1 + 0x2b58);
  iVar2 = *(int *)(param_1 + 0x2b70);
  if (iVar2 == 0) {
    uVar16 = 1;
    uVar19 = 0;
    iVar5 = 0;
    iVar15 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x2b68);
    if (*(uint **)(param_1 + 0x2b68) == (uint *)0x0) {
      puVar6 = puVar14;
    }
    uVar20 = *puVar6;
    if (uVar20 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar19 = 0;
      uVar16 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar16 = uVar19;
      }
      iVar15 = 0;
      do {
        if (uVar16 == uVar19) goto LAB_1412ea0e3;
        iVar15 = iVar15 + 0x20;
        uVar20 = puVar6[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar20 == 0);
    }
    else {
      uVar19 = 0;
      iVar15 = 0;
    }
    uVar16 = (ulonglong)(-uVar20 & uVar20);
    uVar1 = uVar16 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar5 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar20 = 0xffffffff;
    do {
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x2b48) + 4 + (longlong)iVar5 * 0x14);
      if (iVar3 != 0) {
        puVar6 = (uint *)(*(longlong *)(param_1 + 0x2b48) + (longlong)iVar5 * 0x14);
        uVar11 = *puVar6;
        if ((((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) &&
            (puVar12 = (undefined8 *)
                       ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
            puVar12 != (undefined8 *)0x0)) &&
           ((*(int *)(puVar12 + 2) == iVar3 && ((*(uint *)(puVar12 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(puVar12 + 1) & 0x10200000) == 0) {
            plVar10 = (longlong *)*puVar12;
          }
          else {
            plVar10 = (longlong *)0x0;
          }
          cVar4 = (**(code **)(*plVar10 + 0x6c8))();
          if (cVar4 != '\0') {
            if ((puVar6[1] == 0) || (uVar11 = *puVar6, (int)uVar11 < 0)) {
LAB_1412ea173:
              uVar13 = 0;
            }
            else {
              uVar13 = 0;
              if ((int)uVar11 < DAT_14c9647dc) {
                puVar12 = (undefined8 *)
                          ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
                if (((puVar12 == (undefined8 *)0x0) || (*(uint *)(puVar12 + 2) != puVar6[1])) ||
                   ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) goto LAB_1412ea173;
                uVar13 = *puVar12;
              }
            }
            local_60 = puVar14;
            if ((char)puVar6[2] == '\x01') {
              local_58 = param_1 + 0x28c0;
              local_50 = 0;
              FUN_14485c47a(&local_50,uVar13);
              puVar7 = (undefined1 *)
                       FUN_141121064(local_58,(uint)((ulonglong)local_50 >> 0x20) ^ (uint)local_50,
                                     &local_50);
              FUN_14112155a(param_1,uVar13,*puVar7);
              FUN_1412ea7ae(param_1,uVar13);
              puVar14 = local_60;
            }
            else {
              FUN_1412ea1b8(param_1,uVar13);
              puVar14 = local_60;
            }
          }
        }
      }
      uVar20 = uVar20 & ~(uint)uVar16;
      puVar6 = *(uint **)(param_1 + 0x2b68);
      if (*(uint **)(param_1 + 0x2b68) == (uint *)0x0) {
        puVar6 = puVar14;
      }
      iVar3 = *(int *)(param_1 + 0x2b70);
      iVar5 = (int)uVar19;
      lVar17 = (longlong)iVar5;
      uVar11 = puVar6[lVar17] & uVar20;
      if (uVar11 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar5) {
          iVar9 = iVar5;
        }
        if (iVar5 < iVar8) {
          lVar18 = 0;
          do {
            uVar11 = puVar6[lVar17 + lVar18 + 1];
            if (uVar11 != 0) {
              uVar19 = (ulonglong)(iVar5 + (int)lVar18 + 1);
              uVar20 = 0xffffffff;
              goto LAB_1412ea0b7;
            }
            iVar15 = iVar15 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar9 - lVar17 != lVar18);
          uVar20 = 0xffffffff;
          iVar5 = iVar9;
        }
        uVar19 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar3;
      }
      else {
LAB_1412ea0b7:
        uVar16 = (ulonglong)(-uVar11 & uVar11);
        uVar1 = uVar16 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar5 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
LAB_1412ea0e3:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412ea1b8 FUN_1412ea1b8 body=1336 status=ok
// SIG undefined FUN_1412ea1b8(void)

void FUN_1412ea1b8(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  double *pdVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  longlong local_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_50;
  double dStack_48;
  double local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 0) goto LAB_1412ea547;
  uVar1 = *(uint *)(param_2 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar10 = 0;
  }
  plVar5 = (longlong *)(param_1 + 0x2808);
  uVar3 = *(uint *)(lVar10 + 0x10);
  if (*(uint *)(lVar10 + 0x10) == 0) {
    LOCK();
    iVar2 = DAT_14c964868 + 1;
    UNLOCK();
    uVar8 = DAT_14c964868 + 1;
    bVar11 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar2;
    if (bVar11) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar8);
    }
    LOCK();
    uVar3 = *(uint *)(lVar10 + 0x10);
    bVar11 = uVar3 == 0;
    if (bVar11) {
      *(uint *)(lVar10 + 0x10) = uVar8;
      uVar3 = 0;
    }
    UNLOCK();
    if (bVar11) {
      uVar3 = uVar8;
    }
  }
  local_78 = CONCAT44(uVar3,uVar1);
  iVar2 = FUN_1412ea6f2(plVar5,uVar1 ^ uVar3);
  if (iVar2 == -1) goto LAB_1412ea547;
  uVar1 = *(uint *)(param_2 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar10 = 0;
  }
  uVar3 = *(uint *)(lVar10 + 0x10);
  if (*(uint *)(lVar10 + 0x10) == 0) {
    LOCK();
    iVar2 = DAT_14c964868 + 1;
    UNLOCK();
    uVar8 = DAT_14c964868 + 1;
    bVar11 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar2;
    if (bVar11) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar8);
    }
    LOCK();
    uVar3 = *(uint *)(lVar10 + 0x10);
    bVar11 = uVar3 == 0;
    if (bVar11) {
      *(uint *)(lVar10 + 0x10) = uVar8;
      uVar3 = 0;
    }
    UNLOCK();
    if (bVar11) {
      uVar3 = uVar8;
    }
  }
  local_78 = CONCAT44(uVar3,uVar1);
  iVar2 = FUN_1412ea6f2(plVar5,uVar1 ^ uVar3);
  if (iVar2 == -1) {
    lVar10 = 0;
  }
  else {
    lVar10 = (longlong)iVar2 * 0x18 + *plVar5;
  }
  if (((((*(int *)(lVar10 + 0xc) == 0) || (uVar1 = *(uint *)(lVar10 + 8), (int)uVar1 < 0)) ||
       (DAT_14c9647dc <= (int)uVar1)) ||
      ((lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar9 == 0 ||
       (*(int *)(lVar9 + 0x10) != *(int *)(lVar10 + 0xc))))) ||
     ((*(uint *)(lVar9 + 8) & 0x10200000) != 0)) goto LAB_1412ea547;
  uVar1 = *(uint *)(param_2 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar10 = 0;
  }
  uVar3 = *(uint *)(lVar10 + 0x10);
  if (*(uint *)(lVar10 + 0x10) == 0) {
    LOCK();
    iVar2 = DAT_14c964868 + 1;
    UNLOCK();
    uVar8 = DAT_14c964868 + 1;
    bVar11 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar2;
    if (bVar11) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar8);
    }
    LOCK();
    uVar3 = *(uint *)(lVar10 + 0x10);
    bVar11 = uVar3 == 0;
    if (bVar11) {
      *(uint *)(lVar10 + 0x10) = uVar8;
      uVar3 = 0;
    }
    UNLOCK();
    if (bVar11) {
      uVar3 = uVar8;
    }
  }
  local_78 = CONCAT44(uVar3,uVar1);
  iVar2 = FUN_1412ea6f2(plVar5,uVar1 ^ uVar3);
  if (iVar2 == -1) {
    lVar10 = 0;
  }
  else {
    lVar10 = (longlong)iVar2 * 0x18 + *plVar5;
  }
  if (*(int *)(lVar10 + 0xc) == 0) {
LAB_1412ea571:
    lVar9 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar10 + 8);
    lVar9 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar4 == (longlong *)0x0) ||
         (((int)plVar4[2] != *(int *)(lVar10 + 0xc) || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)))
         ) goto LAB_1412ea571;
      lVar9 = *plVar4;
    }
  }
  lVar10 = *(longlong *)(param_1 + 0x1c8);
  if (lVar10 == 0) {
    pdVar7 = (double *)&DAT_14c8464e0;
    uVar12 = (undefined4)DAT_14c8464f0;
    uVar13 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar12 = (undefined4)*(undefined8 *)(lVar10 + 0x270);
    uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x270) >> 0x20);
    pdVar7 = (double *)(lVar10 + 0x260);
  }
  plVar4 = *(longlong **)(lVar9 + 0x1c8);
  if (plVar4 != (longlong *)0x0) {
    local_50 = *pdVar7 - (double)plVar4[0x4c];
    dStack_48 = pdVar7[1] - (double)plVar4[0x4d];
    local_40 = (double)CONCAT44(uVar13,uVar12) - (double)plVar4[0x4e];
    local_78 = plVar4[0x48];
    lStack_70 = plVar4[0x49];
    local_68 = (undefined4)plVar4[0x4a];
    uStack_64 = *(undefined4 *)((longlong)plVar4 + 0x254);
    uStack_60 = (undefined4)plVar4[0x4b];
    uStack_5c = *(undefined4 *)((longlong)plVar4 + 0x25c);
    local_88 = 0;
    local_90 = 0;
    local_98 = 0;
    (**(code **)(*plVar4 + 0x510))(plVar4,&local_50,&local_78,0);
  }
  uVar1 = *(uint *)(param_2 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar10 = 0;
  }
  uVar3 = *(uint *)(lVar10 + 0x10);
  if (*(uint *)(lVar10 + 0x10) == 0) {
    LOCK();
    iVar2 = DAT_14c964868 + 1;
    UNLOCK();
    uVar8 = DAT_14c964868 + 1;
    bVar11 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar2;
    if (bVar11) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar8);
    }
    LOCK();
    uVar3 = *(uint *)(lVar10 + 0x10);
    bVar11 = uVar3 == 0;
    if (bVar11) {
      *(uint *)(lVar10 + 0x10) = uVar8;
      uVar3 = 0;
    }
    UNLOCK();
    if (bVar11) {
      uVar3 = uVar8;
    }
  }
  local_78 = CONCAT44(uVar3,uVar1);
  iVar2 = FUN_1412ea6f2(plVar5,uVar1 ^ uVar3);
  if (iVar2 == -1) {
    lVar10 = 0;
  }
  else {
    lVar10 = (longlong)iVar2 * 0x18 + *plVar5;
  }
  if (*(int *)(lVar10 + 0xc) == 0) {
LAB_1412ea578:
    plVar5 = (longlong *)0x0;
  }
  else {
    uVar1 = *(uint *)(lVar10 + 8);
    plVar5 = (longlong *)0x0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)(lVar10 + 0xc) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_1412ea578;
      plVar5 = (longlong *)*puVar6;
    }
  }
  (**(code **)(*plVar5 + 0x330))(plVar5,1);
  FUN_14112155a(param_1,param_2,0);
  *(undefined1 *)(param_1 + 0x2912) = 0;
LAB_1412ea547:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412ea6f2 FUN_1412ea6f2 body=186 status=ok
// SIG undefined FUN_1412ea6f2(void)

int FUN_1412ea6f2(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x18);
        cVar1 = FUN_1407052fc(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1412ea772;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1412ea772:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412ea7ae FUN_1412ea7ae body=3900 status=ok
// SIG undefined FUN_1412ea7ae(void)

void FUN_1412ea7ae(longlong param_1,longlong param_2)

{
  int *piVar1;
  void *pvVar2;
  double dVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  uint local_130;
  uint local_128;
  longlong *local_120;
  wchar_t *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined8 *local_100;
  undefined1 *local_f8;
  code *local_f0;
  undefined8 local_e8;
  longlong lStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 *local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  longlong local_88 [2];
  undefined8 *local_78;
  int local_70;
  undefined1 local_68 [16];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_2 == 0) {
    local_e8._0_4_ = 0;
    uVar6 = 0;
    uVar8 = (uint)local_e8;
  }
  else {
    uVar8 = *(uint *)(param_2 + 0xc);
    local_e8 = (code *)(ulonglong)uVar8;
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar18 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar18 = 0;
    }
    uVar6 = *(uint *)(lVar18 + 0x10);
    if (*(uint *)(lVar18 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      uVar15 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar15);
      }
      LOCK();
      uVar6 = *(uint *)(lVar18 + 0x10);
      bVar19 = uVar6 == 0;
      if (bVar19) {
        *(uint *)(lVar18 + 0x10) = uVar15;
        uVar6 = 0;
      }
      UNLOCK();
      uVar8 = (uint)local_e8;
      if (bVar19) {
        uVar6 = uVar15;
      }
    }
  }
  local_e8._0_4_ = uVar8;
  local_e8 = (code *)CONCAT44(uVar6,(uint)local_e8);
  pcVar9 = (char *)FUN_141121064(param_1 + 0x28c0,uVar6 ^ (uint)local_e8);
  if (*pcVar9 != '\x01') goto LAB_1412eae29;
  if ((((*(int *)(param_1 + 0x266c) == 0) || (uVar6 = *(uint *)(param_1 + 0x2668), (int)uVar6 < 0))
      || (DAT_14c9647dc <= (int)uVar6)) ||
     (((lVar18 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar18 == 0 ||
       (*(int *)(lVar18 + 0x10) != *(int *)(param_1 + 0x266c))) ||
      ((*(uint *)(lVar18 + 8) & 0x10200000) != 0)))) {
    local_e8 = (code *)0x0;
    lStack_e0 = 0;
    FUN_1410c6c64(param_1,&local_e8);
    if ((longlong)(int)lStack_e0 != 0) {
      lVar18 = 0;
      do {
        lVar17 = *(longlong *)(local_e8 + lVar18);
        if (*(longlong *)(lVar17 + 0x2a8) == *(longlong *)(param_1 + 0x28b8)) {
          if (lVar17 == 0) {
            *(undefined4 *)(param_1 + 0x2668) = 0;
            iVar7 = 0;
          }
          else {
            uVar6 = *(uint *)(lVar17 + 0xc);
            *(uint *)(param_1 + 0x2668) = uVar6;
            if ((int)uVar6 < DAT_14c9647dc) {
              lVar18 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
            }
            else {
              lVar18 = 0;
            }
            iVar7 = *(int *)(lVar18 + 0x10);
            if (*(int *)(lVar18 + 0x10) == 0) {
              LOCK();
              iVar7 = DAT_14c964868 + 1;
              UNLOCK();
              iVar16 = DAT_14c964868 + 1;
              bVar19 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar7;
              if (bVar19) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar16);
              }
              LOCK();
              iVar7 = *(int *)(lVar18 + 0x10);
              bVar19 = iVar7 == 0;
              if (bVar19) {
                *(int *)(lVar18 + 0x10) = iVar16;
                iVar7 = 0;
              }
              UNLOCK();
              if (bVar19) {
                iVar7 = iVar16;
              }
            }
          }
          *(int *)(param_1 + 0x266c) = iVar7;
          goto LAB_1412ea955;
        }
        lVar18 = lVar18 + 8;
      } while ((longlong)(int)lStack_e0 * 8 != lVar18);
    }
    iVar7 = *(int *)(param_1 + 0x266c);
LAB_1412ea955:
    if (((iVar7 == 0) || (uVar6 = *(uint *)(param_1 + 0x2668), (int)uVar6 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar6 ||
        (((lVar18 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar18 == 0 ||
          (*(int *)(lVar18 + 0x10) != iVar7)) || ((*(uint *)(lVar18 + 8) & 0x10200000) != 0)))))) {
      *(undefined1 *)(param_1 + 0x2661) = 1;
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    if (local_e8 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (!bVar19 || param_2 == 0) goto LAB_1412eae29;
  }
  else if (param_2 == 0) goto LAB_1412eae29;
  uVar6 = *(uint *)(param_2 + 0xc);
  if ((int)uVar6 < DAT_14c9647dc) {
    lVar18 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
  }
  else {
    lVar18 = 0;
  }
  plVar13 = (longlong *)(param_1 + 0x2808);
  uVar8 = *(uint *)(lVar18 + 0x10);
  if (*(uint *)(lVar18 + 0x10) == 0) {
    LOCK();
    iVar7 = DAT_14c964868 + 1;
    UNLOCK();
    uVar15 = DAT_14c964868 + 1;
    bVar19 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar7;
    if (bVar19) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar15);
    }
    LOCK();
    uVar8 = *(uint *)(lVar18 + 0x10);
    bVar19 = uVar8 == 0;
    if (bVar19) {
      *(uint *)(lVar18 + 0x10) = uVar15;
      uVar8 = 0;
    }
    UNLOCK();
    if (bVar19) {
      uVar8 = uVar15;
    }
  }
  local_e8 = (code *)CONCAT44(uVar8,uVar6);
  iVar7 = FUN_1412ea6f2(plVar13,uVar6 ^ uVar8);
  if (iVar7 == -1) goto LAB_1412eae29;
  uVar6 = *(uint *)(param_2 + 0xc);
  if ((int)uVar6 < DAT_14c9647dc) {
    lVar18 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
  }
  else {
    lVar18 = 0;
  }
  uVar8 = *(uint *)(lVar18 + 0x10);
  if (*(uint *)(lVar18 + 0x10) == 0) {
    LOCK();
    iVar7 = DAT_14c964868 + 1;
    UNLOCK();
    uVar15 = DAT_14c964868 + 1;
    bVar19 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar7;
    if (bVar19) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar15);
    }
    LOCK();
    uVar8 = *(uint *)(lVar18 + 0x10);
    bVar19 = uVar8 == 0;
    if (bVar19) {
      *(uint *)(lVar18 + 0x10) = uVar15;
      uVar8 = 0;
    }
    UNLOCK();
    if (bVar19) {
      uVar8 = uVar15;
    }
  }
  local_e8 = (code *)CONCAT44(uVar8,uVar6);
  iVar7 = FUN_1412ea6f2(plVar13,uVar6 ^ uVar8);
  if (iVar7 == -1) {
    lVar18 = 0;
  }
  else {
    lVar18 = (longlong)iVar7 * 0x18 + *plVar13;
  }
  if (((*(int *)(lVar18 + 0xc) == 0) || (uVar6 = *(uint *)(lVar18 + 8), (int)uVar6 < 0)) ||
     (((DAT_14c9647dc <= (int)uVar6 ||
       ((lVar17 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar17 == 0 ||
        (*(int *)(lVar17 + 0x10) != *(int *)(lVar18 + 0xc))))) ||
      ((*(uint *)(lVar17 + 8) & 0x10200000) != 0)))) goto LAB_1412eae29;
  uVar6 = *(uint *)(param_2 + 0xc);
  if ((int)uVar6 < DAT_14c9647dc) {
    lVar18 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
  }
  else {
    lVar18 = 0;
  }
  iVar7 = *(int *)(lVar18 + 0x10);
  if (*(int *)(lVar18 + 0x10) == 0) {
    LOCK();
    iVar7 = DAT_14c964868 + 1;
    UNLOCK();
    iVar16 = DAT_14c964868 + 1;
    bVar19 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar7;
    if (bVar19) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar16);
    }
    LOCK();
    iVar7 = *(int *)(lVar18 + 0x10);
    bVar19 = iVar7 == 0;
    if (bVar19) {
      *(int *)(lVar18 + 0x10) = iVar16;
      iVar7 = 0;
    }
    UNLOCK();
    if (bVar19) {
      iVar7 = iVar16;
    }
  }
  local_e8 = (code *)CONCAT44(iVar7,uVar6);
  iVar7 = FUN_1412ea6f2(plVar13);
  if (iVar7 == -1) {
    lVar18 = 0;
  }
  else {
    lVar18 = (longlong)iVar7 * 0x18 + *plVar13;
  }
  if (*(int *)(lVar18 + 0xc) == 0) {
LAB_1412eb034:
    lVar17 = 0;
  }
  else {
    uVar6 = *(uint *)(lVar18 + 8);
    lVar17 = 0;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
      plVar10 = (longlong *)
                ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
      if ((plVar10 == (longlong *)0x0) ||
         (((int)plVar10[2] != *(int *)(lVar18 + 0xc) || ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)
          ))) goto LAB_1412eb034;
      lVar17 = *plVar10;
    }
  }
  if (*(int *)(param_1 + 0x266c) == 0) {
LAB_1412eb03b:
    lVar18 = 0;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x2668);
    lVar18 = 0;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
      plVar10 = (longlong *)
                ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
      if ((plVar10 == (longlong *)0x0) ||
         (((int)plVar10[2] != *(int *)(param_1 + 0x266c) ||
          ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_1412eb03b;
      lVar18 = *plVar10;
    }
  }
  plVar10 = *(longlong **)(lVar17 + 0x1c8);
  if (plVar10 != (longlong *)0x0) {
    dVar3 = *(double *)(lVar18 + 0x268) - (double)plVar10[0x4d];
    local_58 = (void *)(*(double *)(lVar18 + 0x270) - (double)plVar10[0x4e]);
    local_68._8_4_ = SUB84(dVar3,0);
    local_68._0_8_ = *(double *)(lVar18 + 0x260) - (double)plVar10[0x4c];
    local_68._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    local_e8 = (code *)plVar10[0x48];
    lStack_e0 = plVar10[0x49];
    local_d8 = (undefined4)plVar10[0x4a];
    uStack_d4 = *(undefined4 *)((longlong)plVar10 + 0x254);
    uStack_d0 = (undefined4)plVar10[0x4b];
    uStack_cc = *(undefined4 *)((longlong)plVar10 + 0x25c);
    local_128 = local_128 & 0xffffff00;
    local_130 = 0;
    local_138 = 0;
    (**(code **)(*plVar10 + 0x510))(plVar10,local_68,&local_e8,0);
  }
  uVar6 = *(uint *)(param_2 + 0xc);
  if ((int)uVar6 < DAT_14c9647dc) {
    lVar18 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
  }
  else {
    lVar18 = 0;
  }
  uVar8 = *(uint *)(lVar18 + 0x10);
  if (*(uint *)(lVar18 + 0x10) == 0) {
    LOCK();
    iVar7 = DAT_14c964868 + 1;
    UNLOCK();
    uVar15 = DAT_14c964868 + 1;
    bVar19 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar7;
    if (bVar19) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar15);
    }
    LOCK();
    uVar8 = *(uint *)(lVar18 + 0x10);
    bVar19 = uVar8 == 0;
    if (bVar19) {
      *(uint *)(lVar18 + 0x10) = uVar15;
      uVar8 = 0;
    }
    UNLOCK();
    if (bVar19) {
      uVar8 = uVar15;
    }
  }
  local_e8 = (code *)CONCAT44(uVar8,uVar6);
  iVar7 = FUN_1412ea6f2(plVar13,uVar6 ^ uVar8);
  if (iVar7 == -1) {
    lVar18 = 0;
  }
  else {
    lVar18 = (longlong)iVar7 * 0x18 + *plVar13;
  }
  if (*(int *)(lVar18 + 0xc) == 0) {
LAB_1412eb042:
    plVar10 = (longlong *)0x0;
  }
  else {
    uVar6 = *(uint *)(lVar18 + 8);
    plVar10 = (longlong *)0x0;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
      if ((puVar11 == (undefined8 *)0x0) ||
         ((*(int *)(puVar11 + 2) != *(int *)(lVar18 + 0xc) ||
          ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_1412eb042;
      plVar10 = (longlong *)*puVar11;
    }
  }
  lVar18 = 0;
  (**(code **)(*plVar10 + 0x330))(plVar10,0);
  uVar6 = *(uint *)(param_2 + 0xc);
  if ((int)uVar6 < DAT_14c9647dc) {
    lVar18 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
  }
  uVar8 = *(uint *)(lVar18 + 0x10);
  if (*(uint *)(lVar18 + 0x10) == 0) {
    LOCK();
    iVar7 = DAT_14c964868 + 1;
    UNLOCK();
    uVar15 = DAT_14c964868 + 1;
    bVar19 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar7;
    if (bVar19) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar15);
    }
    LOCK();
    uVar8 = *(uint *)(lVar18 + 0x10);
    bVar19 = uVar8 == 0;
    if (bVar19) {
      *(uint *)(lVar18 + 0x10) = uVar15;
      uVar8 = 0;
    }
    UNLOCK();
    if (bVar19) {
      uVar8 = uVar15;
    }
  }
  local_e8 = (code *)CONCAT44(uVar8,uVar6);
  iVar7 = FUN_1412ea6f2(plVar13,uVar6 ^ uVar8,&local_e8);
  if (iVar7 == -1) {
    lVar18 = 0;
  }
  else {
    lVar18 = (longlong)iVar7 * 0x18 + *plVar13;
  }
  if (((((*(longlong *)(param_1 + 10000) != 0) && (*(int *)(lVar18 + 0xc) != 0)) &&
       (uVar6 = *(uint *)(lVar18 + 8), -1 < (int)uVar6)) &&
      (((int)uVar6 < DAT_14c9647dc &&
       (plVar13 = (longlong *)
                  ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
       plVar13 != (longlong *)0x0)))) &&
     (((int)plVar13[2] == *(int *)(lVar18 + 0xc) && ((*(uint *)(plVar13 + 1) & 0x10200000) == 0))))
  {
    if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
      lVar18 = *plVar13;
    }
    else {
      lVar18 = 0;
    }
    lVar18 = *(longlong *)(lVar18 + 0x1c8);
    if (lVar18 != 0) {
      if (DAT_14cad2858 == 0) {
        local_e8 = FUN_144a7958c;
        local_f0 = FUN_14081d0ea;
        local_f8 = &LAB_146395584;
        local_108 = &LAB_147a0ba80;
        local_110 = &LAB_14575ccce;
        local_118 = L"Engine";
        local_120 = (longlong *)0x40000000000;
        local_128 = 0x10000004;
        local_130 = 0x10;
        local_138 = CONCAT44(local_138._4_4_,0x1180);
        local_100 = &local_e8;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar18 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) {
        uVar6 = *(uint *)(lVar18 + 0xc);
        if ((int)uVar6 < DAT_14c9647dc) {
          lVar18 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
        }
        else {
          lVar18 = 0;
        }
        iVar7 = *(int *)(lVar18 + 0x10);
        if (iVar7 == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar16 = DAT_14c964868 + 1;
          bVar19 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar19) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar16);
          }
          LOCK();
          iVar7 = *(int *)(lVar18 + 0x10);
          bVar19 = iVar7 == 0;
          if (bVar19) {
            *(int *)(lVar18 + 0x10) = iVar16;
            iVar7 = 0;
          }
          UNLOCK();
          if (bVar19) {
            iVar7 = iVar16;
          }
          if (iVar7 == 0) goto LAB_1412eae22;
        }
        if ((((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) &&
            (lVar18 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar18 != 0))
           && ((*(int *)(lVar18 + 0x10) == iVar7 && ((*(uint *)(lVar18 + 8) & 0x10200000) == 0)))) {
          lVar18 = *(longlong *)(param_1 + 10000);
          lVar17 = FUN_1402d20ea(lVar18 + 0x520);
          if (lVar17 != 0) {
            lVar17 = FUN_14050fd64();
            local_e8 = (code *)CONCAT44(iVar7,uVar6);
            lStack_e0 = *(longlong *)(lVar18 + 0x520);
            local_d8 = *(undefined4 *)(lVar18 + 0x528);
            uStack_d4 = *(undefined4 *)(lVar18 + 0x52c);
            uStack_d0 = *(undefined4 *)(lVar18 + 0x530);
            uStack_cc = *(undefined4 *)(lVar18 + 0x534);
            local_c8 = (void *)0x0;
            local_c0 = *(int *)(lVar18 + 0x540);
            lVar14 = (longlong)local_c0;
            pvVar2 = *(void **)(lVar18 + 0x538);
            if (lVar14 == 0) {
              local_bc = 0;
            }
            else {
              FUN_1446dd670(&local_c8,local_c0,0);
              memcpy(local_c8,pvVar2,lVar14 * 2);
            }
            local_78 = (undefined8 *)0x0;
            local_70 = 0;
            local_68._0_12_ = ZEXT812(0);
            FUN_1446efa72(local_68,0,5,0x10);
            pvVar2 = local_c8;
            local_68._8_4_ = 5;
            *(undefined ***)local_68._0_8_ = &PTR_LAB_149e020b0;
            LOCK();
            UNLOCK();
            lVar12 = DAT_14c758608 + 1;
            lVar14 = DAT_14c758608 + 1;
            if (lVar12 == 0) {
              LOCK();
              UNLOCK();
              lVar12 = DAT_14c758608 + 2;
              lVar14 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar14;
            *(longlong *)(local_68._0_8_ + 0x10) = lVar12;
            *(undefined ***)local_68._0_8_ = &PTR_FUN_14b9debb0;
            *(code **)(local_68._0_8_ + 0x18) = local_e8;
            *(longlong *)(local_68._0_8_ + 0x20) = lStack_e0;
            *(undefined4 *)(local_68._0_8_ + 0x28) = local_d8;
            *(undefined4 *)(local_68._0_8_ + 0x2c) = uStack_d4;
            *(undefined4 *)(local_68._0_8_ + 0x30) = uStack_d0;
            *(undefined4 *)(local_68._0_8_ + 0x34) = uStack_cc;
            *(undefined8 *)(local_68._0_8_ + 0x38) = 0;
            lVar14 = (longlong)local_c0;
            *(int *)(local_68._0_8_ + 0x40) = local_c0;
            if (lVar14 == 0) {
              *(undefined4 *)(local_68._0_8_ + 0x44) = 0;
            }
            else {
              puVar11 = (undefined8 *)(local_68._0_8_ + 0x38);
              FUN_1446dd670(puVar11,local_c0,0);
              memcpy((void *)*puVar11,pvVar2,lVar14 * 2);
            }
            uVar4 = local_68._0_8_;
            uVar5 = local_68._8_4_;
            local_68._0_12_ = ZEXT812(0);
            if (local_70 == 0) {
LAB_1412eb243:
              if (local_78 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            else if (local_78 != (undefined8 *)0x0) {
              (**(code **)*local_78)(local_78,0);
              FUN_1446efa72(&local_78,0,0,0x10);
              local_70 = 0;
              goto LAB_1412eb243;
            }
            local_78 = (undefined8 *)uVar4;
            local_70 = uVar5;
            puVar11 = (undefined8 *)local_68._0_8_;
            if (local_68._8_4_ == 0) {
LAB_1412eb2ae:
              if (puVar11 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            else if ((undefined8 *)local_68._0_8_ != (undefined8 *)0x0) {
              (*(code *)**(undefined8 **)local_68._0_8_)(local_68._0_8_,0);
              FUN_1446efa72(local_68,0,0,0x10);
              local_68._8_4_ = 0;
              puVar11 = (undefined8 *)local_68._0_8_;
              goto LAB_1412eb2ae;
            }
            local_88[0] = 0;
            local_88[1] = 0;
            local_68 = *(undefined1 (*) [16])(lVar18 + 0x528);
            local_58 = (void *)0x0;
            local_50 = *(int *)(lVar18 + 0x540);
            lVar14 = (longlong)local_50;
            pvVar2 = *(void **)(lVar18 + 0x538);
            if (lVar14 == 0) {
              local_4c = 0;
            }
            else {
              FUN_1446dd670(&local_58,local_50,0);
              memcpy(local_58,pvVar2,lVar14 * 2);
            }
            local_a0 = &local_48;
            local_a8 = local_68;
            FUN_140a1e2b2(&local_98);
            local_120 = local_88;
            local_128 = local_128 & 0xffffff00;
            local_130 = local_130 & 0xffffff00;
            local_138 = local_138 & 0xffffffff00000000;
            FUN_140421d62(lVar17 + 0x1e8,local_b8,&local_98,&local_78);
            FUN_140861e20(local_98,local_90);
            if (local_98 != 0) {
              FUN_1400020a8();
            }
            if (local_58 != (void *)0x0) {
              FUN_1400020a8();
            }
            if (local_88[0] != 0) {
              FUN_1400020a8();
            }
            if (local_70 == 0) {
LAB_1412eb40e:
              if (local_78 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            else if (local_78 != (undefined8 *)0x0) {
              (**(code **)*local_78)(local_78,0);
              FUN_1446efa72(&local_78,0,0,0x10);
              local_70 = 0;
              goto LAB_1412eb40e;
            }
            if (local_b0 != (longlong *)0x0) {
              LOCK();
              plVar13 = local_b0 + 1;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)*plVar13 == 0) {
                (**(code **)*local_b0)(local_b0);
                LOCK();
                piVar1 = (int *)((longlong)local_b0 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_b0 + 0x10))(local_b0);
                }
              }
            }
            if (local_c8 != (void *)0x0) {
              FUN_1400020a8();
            }
          }
        }
      }
    }
  }
LAB_1412eae22:
  *(undefined1 *)(param_1 + 0x2912) = 1;
LAB_1412eae29:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412eb6ec FUN_1412eb6ec body=228 status=ok
// SIG undefined FUN_1412eb6ec(void)

longlong FUN_1412eb6ec(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9ebe8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_148b781dd;
    local_40 = &LAB_1459fe3e1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x450;
    FUN_14081cfa3(L"/Script/GameplayDebugger",L"GameplayDebuggerCategoryReplicator",&DAT_14cb9ebe8,
                  FUN_1465a1750);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9ebe8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412eb7d2 FUN_1412eb7d2 body=9 status=ok
// SIG undefined FUN_1412eb7d2(void)

uint FUN_1412eb7d2(longlong param_1)

{
  return *(uint *)(param_1 + 8) & 0x7fffffff;
}



// FUNCTION 1412eb7dc FUN_1412eb7dc body=40 status=ok
// SIG undefined FUN_1412eb7dc(void)

longlong FUN_1412eb7dc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xf8);
  if (lVar1 != 0) {
    lVar2 = 0;
    if (*(longlong *)(lVar1 + 0xb4) == DAT_14cb08720) {
      lVar2 = lVar1 + -8;
    }
    return lVar2;
  }
  return 0;
}



// FUNCTION 1412eb804 FUN_1412eb804 body=382 status=ok
// SIG undefined FUN_1412eb804(void)

undefined4 * FUN_1412eb804(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1412eb9fa(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  lVar7 = ((longlong *)*param_3)[1];
  *local_40 = *(longlong *)*param_3;
  local_40[1] = lVar7;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(local_40 + 2) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar2;
  *(undefined4 *)(local_40 + 3) = uVar3;
  *(undefined4 *)((longlong)local_40 + 0x1c) = uVar4;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar6 = local_40[1];
  uVar11 = *local_40 + 0x9ae16a3b2f90404f;
  uVar11 = ((uVar11 << 0x27 | uVar11 >> 0x19) + uVar6) * -0x651e95c4d06fbf91;
  uVar6 = (*local_40 + (uVar6 << 0x1b | uVar6 >> 0x25) * -0x651e95c4d06fbf91 + 0x9ae16a3b2f90404f ^
          uVar11) * -0x651e95c4d06fbf91;
  lVar7 = (uVar6 >> 0x2f ^ uVar11 ^ uVar6) * -0x651e95c4d06fbf91;
  uVar9 = ((uint)((ulonglong)lVar7 >> 0x2f) ^ (uint)lVar7) * 0x2f90406f;
  local_58 = 0;
  cVar5 = FUN_1412eb984(param_1,uVar9,local_40);
  if (cVar5 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar6 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x24) = uVar9;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_1412ebbe0(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412eb984 FUN_1412eb984 body=118 status=ok
// SIG undefined FUN_1412eb984(void)

void FUN_1412eb984(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  int iVar11;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar11 = FUN_140f5cbae();
    if (iVar11 != -1) {
      lVar2 = *param_1;
      uVar3 = *param_3;
      uVar4 = param_3[1];
      uVar5 = param_3[2];
      uVar6 = param_3[3];
      uVar7 = param_3[5];
      uVar8 = param_3[6];
      uVar9 = param_3[7];
      puVar1 = (undefined4 *)(lVar2 + 0x10 + (longlong)iVar11 * 0x28);
      *puVar1 = param_3[4];
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar1 = (undefined4 *)(lVar2 + (longlong)iVar11 * 0x28);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_1467f4556(param_1,*param_4,1);
      *param_4 = iVar11;
      uVar10 = 1;
      goto LAB_1412eb9b3;
    }
  }
  uVar10 = 0;
LAB_1412eb9b3:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar10;
  }
  return;
}



// FUNCTION 1412eb9fa FUN_1412eb9fa body=485 status=ok
// SIG undefined FUN_1412eb9fa(void)

int * FUN_1412eb9fa(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_14055df60(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x28);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x28) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1412ebbe0 FUN_1412ebbe0 body=650 status=ok
// SIG undefined FUN_1412ebbe0(void)

void FUN_1412ebbe0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      uVar3 = 0;
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar8 != uVar3);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] == 0) {
      uVar10 = 1;
      local_50._0_4_ = 0xffffffff;
      local_50._4_4_ = 0;
      local_60._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      uVar10 = local_60 >> 0x20;
    }
    iVar4 = (int)local_60;
    uVar8 = (uint)local_50;
    iVar9 = local_50._4_4_;
    iVar7 = local_48;
    if (local_50._4_4_ < (int)local_58[3]) {
      do {
        lVar6 = *param_1;
        lVar11 = (longlong)iVar9;
        lVar15 = *(longlong *)(lVar6 + lVar11 * 0x28);
        uVar14 = *(ulonglong *)(lVar6 + 8 + lVar11 * 0x28);
        uVar12 = lVar15 + 0x9ae16a3b2f90404f;
        uVar12 = ((uVar12 << 0x27 | uVar12 >> 0x19) + uVar14) * -0x651e95c4d06fbf91;
        uVar14 = (lVar15 + (uVar14 << 0x1b | uVar14 >> 0x25) * -0x651e95c4d06fbf91 +
                  0x9ae16a3b2f90404f ^ uVar12) * -0x651e95c4d06fbf91;
        lVar15 = (uVar14 >> 0x2f ^ uVar12 ^ uVar14) * -0x651e95c4d06fbf91;
        uVar14 = (longlong)(int)(((uint)((ulonglong)lVar15 >> 0x2f) ^ (uint)lVar15) * 0x2f90406f) &
                 (longlong)(int)param_1[9] - 1U;
        iVar13 = (int)uVar14;
        *(int *)(lVar6 + 0x24 + lVar11 * 0x28) = iVar13;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x20 + lVar11 * 0x28) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar14) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar13 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9
        ;
        uVar8 = ~(uint)uVar10 & uVar8;
        plVar5 = (longlong *)local_58[2];
        if ((longlong *)local_58[2] == (longlong *)0x0) {
          plVar5 = local_58;
        }
        iVar13 = (int)local_58[3];
        lVar6 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar5 + lVar6 * 4) & uVar8;
        if (uVar3 == 0) {
          iVar9 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar9 = iVar13 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar2 = iVar9;
          if (iVar9 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar9 <= iVar4) break;
          lVar15 = 0;
          while( true ) {
            iVar7 = iVar7 + 0x20;
            uVar3 = *(uint *)((longlong)plVar5 + lVar15 * 4 + lVar6 * 4 + 4);
            if (uVar3 != 0) break;
            lVar15 = lVar15 + 1;
            if (iVar2 - lVar6 == lVar15) goto LAB_1412ebe09;
          }
          iVar4 = iVar4 + (int)lVar15 + 1;
          uVar8 = 0xffffffff;
        }
        uVar10 = (ulonglong)(-uVar3 & uVar3);
        uVar14 = uVar10 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar9 = (iVar7 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
      } while (iVar9 < iVar13);
    }
  }
LAB_1412ebe09:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412ebe6c FUN_1412ebe6c body=377 status=ok
// SIG undefined FUN_1412ebe6c(void)

undefined8 * FUN_1412ebe6c(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *param_1 = &PTR_FUN_14ac67f80;
  param_1[9] = DAT_14c9ab028;
  *(undefined1 *)(param_1 + 10) = 2;
  param_1[8] = &PTR_FUN_14a1a0a60;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0;
  uVar4 = DAT_14c846500;
  param_1[0x11] = DAT_14c8464f8;
  param_1[0x12] = uVar4;
  param_1[0x13] = DAT_14c846508;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x17) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar3;
  param_1[0x19] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1b] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x1e) = 0x447a0000;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_14044066a(param_1 + 0x21,10,1);
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined2 *)(param_1 + 0x2f) = 0x100;
  param_1[0x31] = DAT_14c9ab028;
  *(undefined1 *)(param_1 + 0x32) = 2;
  param_1[0x30] = &PTR_FUN_14a1a0a20;
  *(undefined8 *)((longlong)param_1 + 0x1b1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b9) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  return param_1;
}



// FUNCTION 1412ebfe6 FUN_1412ebfe6 body=228 status=ok
// SIG undefined FUN_1412ebfe6(void)

void FUN_1412ebfe6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  
  iVar2 = *(int *)(param_1 + 0x28);
  iVar9 = -1;
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    uVar10 = 0;
    do {
      plVar1 = (longlong *)(uVar10 + lVar3);
      lVar6 = *(longlong *)(lVar3 + 8 + uVar10);
      if (lVar6 == 0) {
        uVar7 = FUN_14117f018();
        lVar6 = FUN_14477b664(uVar7);
        plVar1[1] = lVar6;
      }
      lVar8 = *(longlong *)(lVar3 + 0x10 + uVar10);
      if (((lVar8 == 0) && (lVar8 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
        plVar4 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar4 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
          lVar8 = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar8 = FUN_144aff482(uVar7,plVar1);
        }
        *(longlong *)(lVar3 + 0x10 + uVar10) = lVar8;
      }
      if (lVar8 == param_2) {
        iVar9 = (int)(uVar10 >> 3) * -0x33333333;
        break;
      }
      uVar10 = uVar10 + 0x28;
    } while ((longlong)iVar2 * 0x28 != uVar10);
  }
  FUN_1412ec0ca(param_1,iVar9);
  return;
}



// FUNCTION 1412ec0ca FUN_1412ec0ca body=807 status=ok
// SIG undefined FUN_1412ec0ca(void)

undefined8 FUN_1412ec0ca(longlong param_1,uint param_2)

{
  longlong *plVar1;
  void *_Dst;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((int)param_2 < 0) || (uVar8 = (ulonglong)param_2, *(int *)(param_1 + 0x28) <= (int)param_2))
  {
    uVar5 = 0;
    goto LAB_1412ec259;
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  lVar9 = *plVar1;
  local_68 = *(longlong *)(lVar9 + uVar8 * 0x28);
  uVar5 = FUN_14477b664(*(undefined8 *)(lVar9 + 8 + uVar8 * 0x28));
  local_60 = FUN_14477b664(uVar5);
  local_58 = *(longlong *)(lVar9 + 0x10 + uVar8 * 0x28);
  local_50 = 0;
  iVar4 = *(int *)(lVar9 + 0x20 + uVar8 * 0x28);
  uVar5 = *(undefined8 *)(lVar9 + 0x18 + uVar8 * 0x28);
  local_48 = iVar4;
  if (iVar4 == 0) {
    local_44 = 0;
  }
  else {
    FUN_148b80bbe(&local_50,iVar4,0);
    FUN_148b80c20(local_50,uVar5,iVar4);
  }
  lVar9 = *plVar1;
  FUN_140368c45(*(undefined8 *)(lVar9 + 0x18 + uVar8 * 0x28),
                *(undefined4 *)(lVar9 + 0x20 + uVar8 * 0x28));
  if (*(longlong *)(lVar9 + 0x18 + uVar8 * 0x28) != 0) {
    FUN_1400020a8();
  }
  iVar4 = *(int *)(param_1 + 0x28);
  if (~param_2 + iVar4 != 0) {
    _Dst = (void *)(lVar9 + uVar8 * 0x28);
    memmove(_Dst,(void *)((longlong)_Dst + 0x28),(longlong)(int)(~param_2 + iVar4) * 0x28);
    iVar4 = *(int *)(param_1 + 0x28);
  }
  *(int *)(param_1 + 0x28) = iVar4 + -1;
  FUN_1412ec4bc(plVar1);
  if (local_60 == 0) {
    uVar5 = FUN_14117f018();
    local_60 = FUN_14477b664(uVar5);
  }
  if (local_58 == 0) {
    if ((local_60 != 0) && (local_68 != 0)) {
      plVar1 = *(longlong **)(local_60 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
        local_58 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
        local_58 = FUN_144aff482(uVar5,&local_68);
        if (local_58 != 0) goto LAB_1412ec1b2;
      }
    }
  }
  else {
LAB_1412ec1b2:
    lVar9 = local_58;
    if (*(char *)(local_58 + 0x20) == '\0') {
      lVar7 = *(longlong *)(local_58 + 0x30);
      if (lVar7 == 0) {
        uVar5 = FUN_140feeb70();
        lVar7 = FUN_14477b664(uVar5);
        *(longlong *)(lVar9 + 0x30) = lVar7;
      }
      lVar6 = *(longlong *)(lVar9 + 0x38);
      if (lVar6 == 0) {
        if ((lVar7 != 0) && (*(longlong *)(lVar9 + 0x28) != 0)) {
          plVar1 = *(longlong **)(lVar7 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
            *(undefined8 *)(lVar9 + 0x38) = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar9 + 0x28));
            *(longlong *)(lVar9 + 0x38) = lVar6;
            if (lVar6 != 0) goto LAB_1412ec1d6;
          }
        }
      }
      else {
LAB_1412ec1d6:
        if ((((*(longlong **)(param_1 + 0x38) != (longlong *)0x0) && (*(int *)(param_1 + 0x34) != 0)
             ) && (uVar2 = *(uint *)(param_1 + 0x30), -1 < (int)uVar2)) &&
           ((((int)uVar2 < DAT_14c9647dc &&
             (lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar9 != 0)) &&
            ((*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0x34) &&
             ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)))))) {
          uVar5 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
          FUN_1412ec3f2(uVar5,lVar6);
        }
      }
    }
    else {
      FUN_14053d8da(&local_50,1);
    }
  }
  FUN_140eb0b6a(param_1);
  FUN_140368c45(local_50,local_48);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  uVar5 = 1;
LAB_1412ec259:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1412ec3f2 FUN_1412ec3f2 body=201 status=ok
// SIG undefined FUN_1412ec3f2(void)

undefined8 FUN_1412ec3f2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = 0;
  if ((param_2 != 0) && ((*(byte *)(param_1 + 0x20c) & 1) == 0)) {
    if ((longlong)*(int *)(param_1 + 0x40) != 0) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar3);
        if (((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) &&
           (*(longlong *)(lVar1 + 0xa8) == param_2)) {
          if ((*(byte *)(lVar1 + 0x248) & 1) == 0) {
            local_28 = lVar1;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar1);
            }
            local_20 = &local_28;
            FUN_14120b094(param_1 + 0x38);
            FUN_140cfcf4e(lVar1);
            uVar2 = 1;
            goto LAB_1412ec45c;
          }
          break;
        }
        lVar3 = lVar3 + 8;
      } while ((longlong)*(int *)(param_1 + 0x40) * 8 != lVar3);
    }
    uVar2 = 0;
  }
LAB_1412ec45c:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412ec4bc FUN_1412ec4bc body=158 status=ok
// SIG undefined FUN_1412ec4bc(void)

void FUN_1412ec4bc(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x28)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x28,8);
      uVar3 = uVar3 / 0x28;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x28,8);
    }
  }
  return;
}



// FUNCTION 1412ec55a FUN_1412ec55a body=1962 status=ok
// SIG undefined FUN_1412ec55a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1412ec55a(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  char *pcVar1;
  uint *puVar2;
  ulonglong *puVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined1 auStack_3e8 [32];
  wchar_t *local_3c8;
  ulonglong uStack_3c0;
  undefined8 local_3b8;
  wchar_t *pwStack_3b0;
  wchar_t *local_3a8;
  code *local_3a0;
  undefined1 *local_398;
  undefined ***local_390;
  code *local_388;
  code *local_380;
  undefined **local_378 [17];
  undefined ***local_2f0;
  undefined ***local_2e8;
  undefined2 local_2e0;
  undefined **local_2d8 [5];
  byte local_2b0;
  byte local_2af;
  longlong local_298;
  longlong *local_280;
  longlong local_260;
  undefined ***local_250;
  undefined ***local_248;
  longlong *local_240;
  undefined8 local_238;
  undefined8 local_230;
  longlong local_228 [2];
  uint local_214;
  undefined8 local_210;
  undefined **local_208;
  undefined ***pppuStack_200;
  undefined **local_1f8;
  undefined ***pppuStack_1f0;
  char local_1d9;
  undefined **local_1d8;
  undefined ***pppuStack_1d0;
  undefined ***local_1c8;
  undefined ****local_1c0;
  undefined ***local_150;
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  local_1d9 = '\0';
  puVar3 = (ulonglong *)param_2[1];
  pcVar1 = (char *)*puVar3 + 1;
  if ((char *)puVar3[1] < pcVar1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_1d9,1);
  }
  else {
    local_1d9 = *(char *)*puVar3;
    *puVar3 = (ulonglong)pcVar1;
  }
  if (local_1d9 == '\0') {
    local_1f8 = (undefined **)0x0;
    pppuStack_1f0 = (undefined ***)0x0;
    local_208 = (undefined **)0x0;
    pppuStack_200 = (undefined ***)0x0;
    local_210 = 0;
    local_214 = 0;
    local_228[0] = 0;
    local_228[1] = 0;
    if (((*(byte *)(param_2 + 5) & 4) != 0) && (*param_3 != 0)) {
      lVar6 = *(longlong *)(*param_3 + 0x10);
      if (lVar6 == 0) {
        local_1d8 = (undefined **)0x0;
        pppuStack_1d0 = (undefined ***)0x0;
      }
      else {
        FUN_14010318a(lVar6,&local_1d8,0);
        if (local_1f8 != (undefined **)0x0) {
          FUN_1400020a8();
        }
      }
      local_1f8 = local_1d8;
      pppuStack_1f0 = pppuStack_1d0;
      if (*(longlong *)(*param_3 + 0x20) == 0) {
        local_1d8 = (undefined **)0x0;
        pppuStack_1d0 = (undefined ***)0x0;
      }
      else {
        FUN_14010318a(*(longlong *)(*param_3 + 0x20),&local_1d8,0);
      }
      if (local_208 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      local_208 = local_1d8;
      pppuStack_200 = pppuStack_1d0;
      local_210 = *(undefined8 *)(*param_3 + 0x18);
      local_214 = *(uint *)(*param_3 + 8) & 0x2d4003b;
      if (lVar6 != 0) {
        memset(&local_1d8,0,0x90);
        FUN_144869430(&local_1d8);
        local_148 = 0;
        local_1d8 = &PTR_FUN_149e1e590;
        local_140 = local_228;
        local_138 = 0;
        FUN_144a69558(&local_1d8,1);
        (*(code *)local_1d8[0x1e])(&local_1d8,0);
        local_1d8 = &PTR_FUN_149e1e330;
        FUN_1407134c4(local_2d8,&local_1d8);
        local_250 = local_150;
        local_2d8[0] = &PTR_FUN_149eae6c0;
        local_240 = (longlong *)((ulonglong)local_240 & 0xffffffffffff0000);
        local_3c8 = (wchar_t *)0x0;
        uStack_3c0 = 0;
        local_248 = &local_1d8;
        local_150 = local_2d8;
        FUN_14496b17c(lVar6,local_2d8,*param_3,lVar6);
        FUN_14041e0ea(local_2d8);
        FUN_144a7fc42(&local_1d8);
      }
    }
    FUN_14021219d(param_2,&local_1f8);
    FUN_14021219d(param_2,&local_208);
    (**(code **)(*param_2 + 0x160))(param_2,&local_210);
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_214,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_214);
      }
    }
    else {
      local_214 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
    FUN_140077068(param_2,local_228);
    ppuVar9 = local_1f8;
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *param_3 = 0;
      if (1 < (int)pppuStack_1f0) {
        if (DAT_14c949118 == 0) {
          local_2d8[0] = (undefined **)FUN_140631fbe;
          lVar6 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          DAT_14c949118 = lVar6;
          FUN_1446f470e(&local_1d8,L"Class",1);
          local_398 = &LAB_146891e90;
          local_3a0 = (code *)&LAB_146273097;
          pwStack_3b0 = L"Engine";
          local_3a8 = (wchar_t *)CONCAT44(local_3a8._4_4_,199);
          local_3b8 = 0x20;
          uStack_3c0 = CONCAT44(uStack_3c0._4_4_,0x10000000);
          local_3c8 = (wchar_t *)CONCAT44(local_3c8._4_4_,8);
          local_390 = local_2d8;
          FUN_14574b4b2(lVar6);
          DAT_14c949118 = lVar6;
          uVar7 = FUN_144a7a812();
          lVar6 = DAT_14c949118;
          uVar8 = FUN_1449e2fb2();
          local_3c8 = L"Class";
          FUN_14574b446(uVar8,lVar6,uVar7,L"/Script/CoreUObject");
        }
        pwStack_3b0 = (wchar_t *)0x0;
        uStack_3c0 = 0;
        local_3b8 = CONCAT71(local_3b8._1_7_,1);
        local_3c8 = (wchar_t *)((ulonglong)local_3c8 & 0xffffffff00000000);
        plVar5 = (longlong *)FUN_1412ecd05(DAT_14c949118,0,ppuVar9,0);
        if (plVar5 != (longlong *)0x0) {
          ppuVar9 = local_208;
          if ((int)pppuStack_200 == 0) {
            ppuVar9 = (undefined **)&DAT_149dfb77a;
          }
          if (DAT_14c927740 == 0) {
            local_390 = &local_1d8;
            local_1d8 = (undefined **)FUN_1449e2820;
            local_380 = FUN_14081d0ea;
            local_388 = FUN_14081d0ea;
            local_398 = &LAB_146856450;
            local_3a0 = FUN_1427b121c;
            local_3a8 = L"Engine";
            pwStack_3b0 = (wchar_t *)0x0;
            local_3b8 = CONCAT44(local_3b8._4_4_,0x10000021);
            uStack_3c0 = CONCAT44(uStack_3c0._4_4_,8);
            local_3c8 = (wchar_t *)CONCAT44(local_3c8._4_4_,0x28);
            FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
          }
          lVar6 = FUN_140277b32(DAT_14c927740,0,ppuVar9,0);
          uVar4 = local_214;
          if (lVar6 != 0) {
            _DAT_14c9642e4 = _DAT_14c9642e4 + 1;
            FUN_1400021e4(&local_210,&local_1d8);
            ppuVar9 = local_1d8;
            if ((int)pppuStack_1d0 == 0) {
              ppuVar9 = (undefined **)&DAT_149dfb77a;
            }
            FUN_1446f470e(&local_230,ppuVar9,1);
            local_3b8 = 0;
            pwStack_3b0 = (wchar_t *)0x0;
            uStack_3c0 = uStack_3c0 & 0xffffffffffffff00;
            local_3c8 = (wchar_t *)0x0;
            lVar6 = FUN_140584627(lVar6,plVar5,local_230,uVar4);
            if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar6);
            }
            *param_3 = lVar6;
            if (local_1d8 != (undefined **)0x0) {
              FUN_1400020a8();
            }
            memset(local_2d8,0,0x90);
            FUN_144869430(local_2d8);
            local_248 = (undefined ***)0x0;
            local_2d8[0] = &PTR_FUN_149e1e050;
            local_238 = 0x7fffffffffffffff;
            local_2b0 = local_2b0 | 1;
            local_2af = local_2af & 0xfe;
            local_298 = param_2[8];
            local_240 = local_228;
            FUN_1407134c4(local_378,local_2d8);
            local_2f0 = local_250;
            local_378[0] = &PTR_FUN_149eae6c0;
            local_2e0 = 0;
            local_1c0 = &local_1c8;
            local_1d8 = &PTR_FUN_149e37810;
            local_3c8 = (wchar_t *)0x0;
            uStack_3c0 = 0;
            local_2e8 = local_2d8;
            local_250 = local_378;
            pppuStack_1d0 = local_378;
            local_1c8 = &local_1d8;
            (**(code **)(*plVar5 + 0x2d0))(plVar5,local_1c0,*param_3,plVar5);
            FUN_14041e0ea(local_378);
            local_2d8[0] = &PTR__purecall_149e35f70;
            if (local_280 != (longlong *)0x0) {
              if (*local_280 != 0) {
                FUN_1400020a8();
              }
              FUN_1400020a8(local_280);
            }
            if (local_260 != 0) {
              if (*(longlong *)(local_260 + 0x40) != 0) {
                FUN_1400020a8();
              }
              FUN_1400020a8(local_260);
            }
            _DAT_14c9642e4 = _DAT_14c9642e4 + -1;
          }
        }
      }
    }
    if (local_228[0] != 0) {
      FUN_1400020a8();
    }
    if (local_208 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    if (local_1f8 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_14572541c(param_2);
  }
  if ((local_48 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1412ecd05 FUN_1412ecd05 body=2042 status=ok
// SIG undefined FUN_1412ecd05(void)

longlong FUN_1412ecd05(longlong param_1,longlong param_2,wchar_t *param_3,undefined8 param_4,
                      uint param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  code *pcVar1;
  void *_Src;
  wchar_t *pwVar2;
  undefined1 *puVar3;
  char cVar4;
  longlong lVar5;
  size_t sVar6;
  wchar_t *pwVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_578 [32];
  uint local_558;
  undefined8 local_550;
  longlong *local_548;
  undefined1 local_53c [4];
  undefined1 local_538 [16];
  undefined1 *local_528;
  undefined4 local_520;
  longlong *local_518;
  undefined8 uStack_510;
  undefined1 local_4fc [4];
  longlong local_4f8 [4];
  longlong *local_4d8;
  int local_4d0;
  undefined4 local_4cc;
  undefined2 *local_4c8;
  ulonglong uStack_4c0;
  longlong *local_4b8;
  longlong local_4b0;
  wchar_t *local_4a8;
  undefined8 uStack_4a0;
  longlong *local_498;
  undefined4 local_490;
  undefined1 *local_480;
  undefined1 *local_478;
  ulonglong *local_470;
  char local_468;
  undefined1 local_460 [1024];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_578;
  local_550 = param_8;
  local_558 = CONCAT31(local_558._1_3_,param_7);
  local_4b0 = param_2;
  lVar5 = FUN_14283d4f9(param_1,param_2,param_3,param_5);
  if (lVar5 != 0) goto LAB_1412ed468;
  local_468 = '\0';
  local_470 = local_60;
  local_480 = local_460;
  local_478 = local_460;
  if (param_3 != (wchar_t *)0x0) {
    sVar6 = wcslen(param_3);
    iVar11 = (int)sVar6;
    if (iVar11 < 0x200) {
      if (iVar11 == 0) goto LAB_1412ecde3;
    }
    else {
      FUN_140213274(&local_480,(longlong)iVar11);
    }
    puVar3 = local_478;
    memcpy(local_478,param_3,(longlong)(sVar6 << 0x20) >> 0x1f);
    local_478 = puVar3 + (longlong)iVar11 * 2;
  }
LAB_1412ecde3:
  local_558 = param_5 & 4;
  local_550 = param_8;
  FUN_144922754(&local_4b0,&local_480,1,0);
  if (local_4b0 == 0) {
LAB_1412ece92:
    local_4c8 = (undefined2 *)0x0;
    uStack_4c0 = 0;
    if (param_1 == 0) {
      local_4a8 = L"None";
      uStack_4a0._0_4_ = 4;
      FUN_1446e940c(local_4f8 + 2,&local_4a8);
      local_4a8 = L"Core";
      uStack_4a0._0_4_ = 4;
      FUN_1446e940c(&local_518,&local_4a8);
      local_4a8 = L"None";
      uStack_4a0 = CONCAT44(uStack_4a0._4_4_,4);
      FUN_140208c1e(&local_4d8,&local_518,local_4f8 + 2,&local_4a8);
    }
    else {
      local_4a8 = *(wchar_t **)(param_1 + 0x18);
      FUN_1400021e4(&local_4a8,local_4f8 + 2);
      FUN_140233b1a(&local_4d8,local_4f8 + 2);
    }
    local_4a8 = (wchar_t *)CONCAT44(local_4a8._4_4_,4);
    FUN_14023423e(&local_498,&local_4d8);
    FUN_140056680(local_4f8,L"ClassName");
    FUN_140233eec(&local_4c8,local_4f8,&local_4a8);
    if (local_4f8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_498 != (longlong *)0x0) {
      (**(code **)(*local_498 + 0x10))();
      local_498 = (longlong *)0x0;
      local_490 = 0;
    }
    if (local_4d8 != (longlong *)0x0) {
      (**(code **)(*local_4d8 + 0x10))();
    }
    if ((param_1 != 0) && (local_4f8[2] != 0)) {
      FUN_1400020a8();
    }
    lVar10 = local_4b0;
    if (local_4b0 == 0) {
      local_4a8 = L"None";
      uStack_4a0._0_4_ = 4;
      FUN_1446e940c(local_4f8,&local_4a8);
      local_4a8 = L"Core";
      uStack_4a0._0_4_ = 4;
      FUN_1446e940c(local_4fc,&local_4a8);
      local_4a8 = L"None";
      uStack_4a0 = CONCAT44(uStack_4a0._4_4_,4);
      FUN_140208c1e(&local_4d8,local_4fc,local_4f8,&local_4a8);
    }
    else {
      local_4f8[0] = 0;
      local_4f8[1] = 0;
      FUN_1401031ac(local_4b0,0,local_4f8);
      FUN_140233b1a(&local_4d8,local_4f8);
    }
    local_4a8 = (wchar_t *)CONCAT44(local_4a8._4_4_,4);
    FUN_14023423e(&local_498,&local_4d8);
    FUN_140056680(&local_518,L"OuterName");
    FUN_140233eec(&local_4c8,&local_518,&local_4a8);
    if (local_518 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_498 != (longlong *)0x0) {
      (**(code **)(*local_498 + 0x10))();
      local_498 = (longlong *)0x0;
      local_490 = 0;
    }
    if (local_4d8 != (longlong *)0x0) {
      (**(code **)(*local_4d8 + 0x10))();
    }
    if ((lVar10 != 0) && (local_4f8[0] != 0)) {
      FUN_1400020a8();
    }
    local_528 = local_480;
    local_520 = (undefined4)((ulonglong)((longlong)local_478 - (longlong)local_480) >> 1);
    FUN_1417036e0(&local_4d8);
    local_4a8 = (wchar_t *)CONCAT44(local_4a8._4_4_,4);
    FUN_14023423e(&local_498,&local_4d8);
    FUN_140056680(&local_518,L"ObjectName");
    FUN_140233eec(&local_4c8,&local_518,&local_4a8);
    if (local_518 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_498 != (longlong *)0x0) {
      (**(code **)(*local_498 + 0x10))();
      local_498 = (longlong *)0x0;
      local_490 = 0;
    }
    if (local_4d8 != (longlong *)0x0) {
      (**(code **)(*local_4d8 + 0x10))();
    }
    local_4a8 = L"ObjectNotFound";
    uStack_4a0._0_4_ = 0xe;
    FUN_1446e940c(local_4fc,&local_4a8);
    local_4a8 = L"Core";
    uStack_4a0._0_4_ = 4;
    FUN_1446e940c(local_53c,&local_4a8);
    local_4a8 = L"Failed to find object \'{ClassName} {OuterName}.{ObjectName}\'";
    uStack_4a0 = CONCAT44(uStack_4a0._4_4_,0x3c);
    FUN_140208c1e(&local_518,local_53c,local_4fc,&local_4a8);
    FUN_14023409e(local_538,&local_518,1);
    FUN_140233c04(&local_4a8,local_538,&local_4c8);
    pwVar2 = local_4a8;
    pwVar7 = local_4a8;
    if (*(code **)(*(longlong *)local_4a8 + 0x50) != FUN_144828418) {
      pwVar7 = (wchar_t *)(**(code **)(*(longlong *)local_4a8 + 0x50))(local_4a8);
    }
    FUN_1447a1fc0(pwVar7);
    pcVar1 = *(code **)(*(longlong *)pwVar2 + 0x28);
    if (pcVar1 == FUN_14482841c) {
      pwVar7 = (wchar_t *)(*(longlong *)(pwVar2 + 0x14) + 8);
      if (*(longlong *)(pwVar2 + 0x14) == 0) {
        pwVar7 = pwVar2 + 0xc;
      }
    }
    else if (pcVar1 == (code *)&LAB_14010c34c) {
      pwVar7 = pwVar2 + 8;
    }
    else {
      pwVar7 = (wchar_t *)(*pcVar1)(pwVar2);
    }
    local_4d8 = (longlong *)0x0;
    local_4d0 = *(int *)(pwVar7 + 4);
    lVar10 = (longlong)local_4d0;
    _Src = *(void **)pwVar7;
    if (lVar10 == 0) {
      local_4cc = 0;
    }
    else {
      FUN_1446dd670(&local_4d8,local_4d0,0);
      memcpy(local_4d8,_Src,lVar10 * 2);
    }
    if (pwVar2 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)pwVar2 + 0x10))(pwVar2);
    }
    if (local_518 != (longlong *)0x0) {
      (**(code **)(*local_518 + 0x10))();
    }
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    FUN_14054d46e(&DAT_14c846b20,L"TREATLOADWARNINGSASERRORS");
    if ((local_4b0 != 0) && ((*(uint *)(local_4b0 + 8) >> 0x13 & 1) == 0)) {
      local_518 = (longlong *)0x0;
      uStack_510 = 0;
      FUN_1401031ac(local_4b0,0,&local_518);
      plVar9 = local_518;
      if ((int)uStack_510 == 0) {
        plVar9 = (longlong *)&DAT_149dfb77a;
      }
      FUN_1446f470e(&local_548,plVar9,1);
      local_4a8 = (wchar_t *)0x0;
      uStack_4a0 = 0;
      local_498 = local_548;
      FUN_1457e748a(0x40,&local_4a8,0x4000000);
      if (local_518 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_4d8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_14010f8af(local_4c8,uStack_4c0 & 0xffffffff);
    if (local_4c8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_4c8 = (undefined2 *)0x0;
    uStack_4c0 = 0;
    FUN_1401031ac(local_4b0,0,&local_4c8);
    puVar8 = local_4c8;
    if ((int)uStack_4c0 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_4b8,puVar8,1);
    local_4a8 = (wchar_t *)0x0;
    uStack_4a0 = 0;
    local_498 = local_4b8;
    cVar4 = FUN_145c98d34(0x40);
    if (local_4c8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (cVar4 == '\0') goto LAB_1412ece92;
  }
  if (local_468 == '\x01') {
    FUN_1400020a8(local_480);
  }
LAB_1412ed468:
  if ((local_60[0] ^ (ulonglong)auStack_578) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 1412ed500 FUN_1412ed500 body=121 status=ok
// SIG undefined FUN_1412ed500(void)

void FUN_1412ed500(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 0xc) = 4;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0xe) = 3;
  *(char *)(param_1 + 0x10) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 0x1a) = 4;
  param_1[0x14] = 0x43fa0000;
  *(undefined1 *)(param_1 + 0x1c) = 3;
  *(char *)(param_1 + 0x1e) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x81) = 0;
  return;
}



// FUNCTION 1412ed57a FUN_1412ed57a body=4979 status=ok
// SIG undefined FUN_1412ed57a(void)

void FUN_1412ed57a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  byte *pbVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  uint *puVar10;
  undefined8 *puVar11;
  ulonglong *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_428 [32];
  undefined8 local_408;
  undefined8 *local_400;
  ulonglong *local_3f8;
  code *local_3f0;
  undefined8 *local_3e8;
  ulonglong *local_3e0;
  undefined8 *local_3d8;
  ulonglong *local_3d0;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  longlong local_3b8;
  undefined8 local_3b0;
  undefined4 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398 [12];
  ulonglong local_338;
  undefined8 uStack_330;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 local_2e8 [9];
  ulonglong local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  ulonglong local_280 [3];
  longlong local_268;
  uint3 uStack_263;
  undefined8 local_260;
  undefined4 local_258;
  undefined1 local_254;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  ulonglong local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined8 uStack_1e4;
  undefined4 uStack_1dc;
  uint local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined2 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a4;
  undefined4 local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  longlong lStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  longlong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined8 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined **local_80;
  undefined *local_78;
  longlong local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_428;
  local_138 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_3f8 = (ulonglong *)FUN_1446ddbd2();
      local_3f0 = FUN_1468d96f0;
      local_400 = (undefined8 *)0x0;
      local_408 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_138);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_138);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_138);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_138 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_138);
    }
  }
  local_150 = 0xffffffffffffffff;
  uStack_148 = 0;
  lStack_140 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_3f8 = (ulonglong *)FUN_1446ddbd2();
      local_3f0 = FUN_1403a682c;
      local_400 = (undefined8 *)0x0;
      local_408 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_150);
LAB_1412ed6fd:
    pbVar5 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_150);
      goto LAB_1412ed6fd;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_150);
      goto LAB_1412ed6fd;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&local_150);
      goto LAB_1412ed6fd;
    }
    local_150 = *(undefined8 *)(pbVar5 + 1);
    pbVar5 = pbVar5 + 9;
    *(byte **)(param_2 + 0x20) = pbVar5;
  }
  local_158 = 0;
  plVar1 = (longlong *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_158);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_158);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_158);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_158 = *(longlong *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_158);
    }
  }
  plVar7 = &local_158;
  if ((longlong *)*plVar1 != (longlong *)0x0) {
    plVar7 = (longlong *)*plVar1;
  }
  local_170 = 0;
  local_168 = 0x4000;
  local_160 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_3f8 = (ulonglong *)FUN_1446ddbd2();
      local_3f0 = FUN_14170fd90;
      local_400 = (undefined8 *)0x8000000000000000;
      local_408 = 0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_170);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_170);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_170);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_170 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_170);
    }
  }
  local_178 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_3f8 = (ulonglong *)FUN_1446ddbd2();
      local_3f0 = FUN_1468d96f0;
      local_400 = (undefined8 *)0x0;
      local_408 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_178);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_178);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_178);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_178 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_178);
    }
  }
  local_1d8 = local_1d8 & 0xffffff00;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  uStack_1b8 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  local_1b0 = DAT_14c846508;
  local_1a8 = 0;
  local_1a4 = 0;
  local_198 = 0;
  local_190 = (undefined4)DAT_14c8464e0;
  uStack_18c = DAT_14c8464e0._4_4_;
  uStack_188 = (undefined4)DAT_14c8464e8;
  uStack_184 = DAT_14c8464e8._4_4_;
  local_180 = DAT_14c8464f0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_3f8 = (ulonglong *)FUN_1446ddbd2();
      local_3f0 = FUN_1403a682c;
      local_400 = (undefined8 *)0x0;
      local_408 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1d8);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_1d8);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_1d8);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
      local_1d8 = (uint)uVar2;
      uStack_1d4 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_1d8);
    }
  }
  local_208 = local_208 & 0xffffffffffff0000;
  uStack_200 = (undefined4)DAT_14c8464f8;
  uStack_1fc = DAT_14c8464f8._4_4_;
  uStack_1f8 = (undefined4)DAT_14c846500;
  uStack_1f4 = DAT_14c846500._4_4_;
  uStack_1f0 = DAT_14c846508;
  local_1e8 = 0;
  uStack_1e4 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_3f8 = (ulonglong *)FUN_1446ddbd2();
      local_3f0 = FUN_1403a682c;
      local_400 = (undefined8 *)0x0;
      local_408 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_208);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_208);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_208);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_208 = *(ulonglong *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_208);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_3f8 = (ulonglong *)FUN_1446ddbd2();
      local_3f0 = FUN_1403a682c;
      local_400 = (undefined8 *)0x0;
      local_408 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_220);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_220);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_220);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_220 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_220);
    }
  }
  local_268 = (ulonglong)uStack_263 << 0x28;
  local_260 = 0xbf80000000000000;
  local_258 = 0xc4750000;
  local_254 = 0;
  local_250 = 0;
  uStack_248 = 0;
  local_240 = 0;
  uStack_238 = 0;
  local_230 = 0;
  uStack_228 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_3f8 = (ulonglong *)FUN_1446ddbd2();
      local_3f0 = FUN_1403a682c;
      local_400 = (undefined8 *)0x0;
      local_408 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&stack0xfffffffffffffd98);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&stack0xfffffffffffffd98);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&stack0xfffffffffffffd98);
    }
    else {
      if (pcVar3 == (code *)&LAB_1428293cc) {
        local_268 = *(longlong *)(pbVar5 + 1);
        pbVar5 = pbVar5 + 9;
        *(byte **)(param_2 + 0x20) = pbVar5;
        goto LAB_1412edc56;
      }
      (*pcVar3)(uVar2,param_2,&stack0xfffffffffffffd98);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
LAB_1412edc56:
  local_280[0] = local_280[0] & 0xffffffffffffff00;
  local_280[1] = 0;
  local_280[2] = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_280);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_280);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_280);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_280[0] = *(ulonglong *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_280);
    }
  }
  puVar12 = local_280;
  if (*(ulonglong **)(param_2 + 0x38) != (ulonglong *)0x0) {
    puVar12 = *(ulonglong **)(param_2 + 0x38);
  }
  local_130 = (ulonglong)local_130._4_4_ << 0x20;
  local_128 = 0;
  local_120 = 0x3002;
  local_118 = 0;
  local_e0 = 0;
  local_d8 = 0x200000000;
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0xf00000d0;
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  FUN_1405c5fa2();
  local_78 = &DAT_14cb769e8;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = &PTR_FUN_14b0394b0;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_130);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_130);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_130);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_130 = *(longlong *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_130);
    }
  }
  puVar13 = &local_130;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar13 = *(undefined8 **)(param_2 + 0x38);
  }
  local_2a0 = local_2a0 & 0xffffffffffffff00;
  local_298 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_290 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_288 = DAT_14c8464f0;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2a0);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2a0);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2a0);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_2a0 = *(ulonglong *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2a0);
    }
  }
  puVar8 = &local_2a0;
  if (*(ulonglong **)(param_2 + 0x38) != (ulonglong *)0x0) {
    puVar8 = *(ulonglong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar9 = &stack0xfffffffffffffd98;
  puVar11 = local_2e8;
  for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  local_2f8 = local_210;
  local_308 = local_220;
  uStack_300 = uStack_218;
  uStack_330 = CONCAT44(uStack_1fc,uStack_200);
  local_338 = local_208;
  local_328 = uStack_1f8;
  uStack_324 = uStack_1f4;
  uStack_320 = (undefined4)uStack_1f0;
  uStack_31c = uStack_1f0._4_4_;
  local_318 = local_1e8;
  uStack_314 = (undefined4)uStack_1e4;
  uStack_310 = uStack_1e4._4_4_;
  uStack_30c = uStack_1dc;
  puVar10 = &local_1d8;
  puVar9 = local_398;
  for (lVar6 = 0xc; uVar2 = local_178, lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *(undefined8 *)puVar10;
    puVar10 = puVar10 + 2;
    puVar9 = puVar9 + 1;
  }
  local_3b0 = local_170;
  local_3a8 = local_168;
  local_3a0 = 0;
  local_3c8 = (undefined4)local_150;
  uStack_3c4 = local_150._4_4_;
  uStack_3c0 = (undefined4)uStack_148;
  uStack_3bc = uStack_148._4_4_;
  local_3b8 = lStack_140;
  if ((lStack_140 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_3f0 = (code *)&local_308;
  local_3f8 = &local_338;
  local_408 = uVar2;
  local_400 = local_398;
  local_3e8 = local_2e8;
  local_3e0 = puVar12;
  local_3d8 = puVar13;
  local_3d0 = puVar8;
  FUN_1412ee8ee(local_138,&local_3c8,plVar7,&local_3b0);
  if ((DAT_14c950c29 == 1) && (*plVar7 != 0)) {
    FUN_14689c22e();
  }
  local_80 = (undefined **)&DAT_14a171d50;
  uVar4 = uStack_68 >> 0x20;
  uStack_68 = uStack_68 & 0xffffffff00000000;
  if ((int)uVar4 != 0) {
    FUN_140115c12(&local_70,0);
  }
  local_78 = (undefined *)0x0;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_428) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412ee8ee FUN_1412ee8ee body=664 status=ok
// SIG undefined FUN_1412ee8ee(void)

void FUN_1412ee8ee(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = param_11;
  local_98 = param_9;
  uStack_90 = param_10;
  local_a0 = param_8;
  local_a8 = param_12;
  local_b8 = param_6;
  uStack_b0 = param_7;
  FUN_1412eed22(&local_58,param_1,param_4,param_5);
  if ((param_1 != (longlong *)0x0) && (lVar6 = (**(code **)(*param_1 + 0x180))(param_1), lVar6 != 0)
     ) {
    if (local_58 == 0) {
      local_78 = *param_2;
      uStack_74 = param_2[1];
      uStack_70 = param_2[2];
      uStack_6c = param_2[3];
      local_68 = *(longlong *)(param_2 + 4);
      if ((local_68 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_1412eeba4(lVar6,&local_78);
    }
    else {
      if (*(longlong *)(lVar6 + 0x1f0) == 0) {
        lVar6 = lVar6 + 0x460;
      }
      else {
        lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x1f0) + 0xf8);
      }
      puVar7 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      uVar2 = *param_2;
      uVar4 = *(undefined8 *)(param_2 + 2);
      lVar9 = *(longlong *)(param_2 + 4);
      if ((lVar9 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar9);
      }
      *puVar7 = &PTR_FUN_14b422470;
      puVar7[1] = param_3;
      *(undefined4 *)(puVar7 + 2) = uVar2;
      *(undefined8 *)((longlong)puVar7 + 0x14) = uVar4;
      *(undefined4 *)(puVar7 + 4) = 0;
      if (lVar9 == 0) {
        *(undefined4 *)((longlong)puVar7 + 0x1c) = 0;
        iVar5 = 0;
      }
      else {
        uVar3 = *(uint *)(lVar9 + 0xc);
        *(uint *)((longlong)puVar7 + 0x1c) = uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar5 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar10 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar10) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
          }
          LOCK();
          iVar5 = *(int *)(lVar9 + 0x10);
          bVar10 = iVar5 == 0;
          if (bVar10) {
            *(int *)(lVar9 + 0x10) = iVar8;
            iVar5 = 0;
          }
          UNLOCK();
          if (bVar10) {
            iVar5 = iVar8;
          }
        }
      }
      *(int *)(puVar7 + 4) = iVar5;
      puVar7[5] = local_58;
      puVar7[6] = local_50;
      if (local_50 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = *(int *)(local_50 + 1) + 1;
        UNLOCK();
      }
      FUN_140b1330e(lVar6,*(undefined8 *)(param_2 + 4),param_2[1],puVar7);
    }
  }
  if (local_50 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_50 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412eeba4 FUN_1412eeba4 body=381 status=ok
// SIG undefined FUN_1412eeba4(void)

void FUN_1412eeba4(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      lVar3 = lVar3 + 0x460;
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x1f0) + 0xf8);
    }
    lVar4 = FUN_140b1315a(lVar3,*(undefined8 *)(param_2 + 4),param_2[1],&local_31);
    if (lVar4 == 0) {
      puVar5 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *puVar5 = &PTR_FUN_14a9b0820;
      *(byte *)(puVar5 + 1) = (byte)DAT_14c872be0 & 1;
      *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_2 + 2);
      *(undefined4 *)((longlong)puVar5 + 0x14) = *param_2;
      *(undefined4 *)((longlong)puVar5 + 0x1c) = 0;
      if (*(longlong *)(param_2 + 4) == 0) {
        *(undefined4 *)(puVar5 + 3) = 0;
        iVar2 = 0;
      }
      else {
        uVar1 = *(uint *)(*(longlong *)(param_2 + 4) + 0xc);
        *(uint *)(puVar5 + 3) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        iVar2 = *(int *)(lVar4 + 0x10);
        if (*(int *)(lVar4 + 0x10) == 0) {
          LOCK();
          iVar2 = DAT_14c964868 + 1;
          UNLOCK();
          iVar6 = DAT_14c964868 + 1;
          bVar7 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar7) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar6);
          }
          LOCK();
          iVar2 = *(int *)(lVar4 + 0x10);
          bVar7 = iVar2 == 0;
          if (bVar7) {
            *(int *)(lVar4 + 0x10) = iVar6;
            iVar2 = 0;
          }
          UNLOCK();
          if (bVar7) {
            iVar2 = iVar6;
          }
        }
      }
      *(int *)((longlong)puVar5 + 0x1c) = iVar2;
      FUN_140b1330e(lVar3,*(undefined8 *)(param_2 + 4),param_2[1],puVar5);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412eed22 FUN_1412eed22 body=2376 status=ok
// SIG undefined FUN_1412eed22(void)

longlong *
FUN_1412eed22(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
             undefined8 param_5,byte *param_6,undefined8 param_7,undefined4 *param_8,
             undefined8 *param_9,byte *param_10,undefined8 *param_11)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  code *pcVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  byte bVar18;
  bool bVar19;
  float fVar20;
  uint uVar21;
  undefined1 auStack_398 [32];
  longlong local_378;
  undefined1 *local_370;
  longlong *local_368;
  uint *local_360;
  wchar_t *local_358;
  code **local_350;
  undefined1 *local_348;
  code **local_340;
  undefined1 *local_338;
  code *local_330;
  undefined4 local_324;
  longlong local_320;
  longlong local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  uint local_300;
  undefined1 local_2f8 [24];
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  float local_2a0;
  float local_298;
  char local_294;
  uint local_260;
  byte local_25c;
  undefined8 local_258;
  longlong *local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined1 local_238 [48];
  undefined1 *local_208;
  undefined4 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined **local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  ulonglong uStack_190;
  char local_188;
  undefined1 local_180 [24];
  wchar_t local_168 [12];
  undefined1 local_150;
  code *local_148;
  longlong *local_140;
  undefined4 local_138;
  longlong local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  float local_118;
  undefined8 local_f8;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  char local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if (((param_2 == (longlong *)0x0) ||
      (lVar9 = (**(code **)(*param_2 + 0x180))(param_2), lVar9 == 0)) || (param_4 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_398);
  }
  local_258 = *param_3;
  FUN_1446dcdd4(&local_148);
  lVar10 = FUN_140a4bd48(&local_148);
  if (local_130 != 0) {
    FUN_1400020a8();
  }
  if ((lVar10 == 0) ||
     (((*(byte *)(lVar10 + 0x590) & 1) != 0 && (iVar8 = FUN_14490d72a(lVar9), iVar8 == 3)))) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar16 = &local_2a8;
    for (lVar15 = 9; lVar15 != 0; lVar15 = lVar15 + -1) {
      *puVar16 = *param_9;
      param_9 = param_9 + 1;
      puVar16 = puVar16 + 1;
    }
    local_320 = lVar10;
    if (((local_294 == '\x01') && (local_298 == 0.0)) && ((!NAN(local_298) && (local_2a0 <= 0.0))))
    {
      local_2a0 = (float)FUN_140b536be(lVar10,local_2a0,param_5,param_7);
    }
    FUN_140d4f03f(local_2f8,param_4,param_5,param_7);
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_2c8 = 0;
    uStack_2c0 = 0;
    local_2d0 = *(undefined8 *)(param_8 + 4);
    local_2e0 = *param_8;
    uStack_2dc = param_8[1];
    uStack_2d8 = param_8[2];
    uStack_2d4 = param_8[3];
    fVar20 = 0.0;
    if ((*(longlong *)(lVar9 + 0x30) != 0) &&
       (plVar14 = *(longlong **)(*(longlong *)(lVar9 + 0x30) + 0x2b0), plVar14 != (longlong *)0x0))
    {
      if (*(code **)(*plVar14 + 0x660) == FUN_1449fb17e) {
        if ((*(byte *)((longlong)plVar14 + 0x39e) & 1) == 0) {
          if ((*(byte *)((longlong)plVar14 + 0x39e) & 2) == 0) {
            if (DAT_14caf84d0 == 0) {
              local_148 = FUN_1449e2820;
              local_330 = FUN_14081d0ea;
              local_338 = &LAB_145a62952;
              local_348 = &LAB_147c8cd45;
              local_350 = (code **)&LAB_1461468ae;
              local_358 = L"Engine";
              local_360 = (uint *)0x0;
              local_368 = (longlong *)CONCAT44(local_368._4_4_,0x10000006);
              local_370 = (undefined1 *)CONCAT44(local_370._4_4_,8);
              local_378 = CONCAT44(local_378._4_4_,0x218);
              local_340 = &local_148;
              FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
            }
            lVar15 = DAT_14caf84d0;
            lVar10 = *(longlong *)(DAT_14caf84d0 + 0x110);
            if (lVar10 == 0) {
              FUN_140aa6c08(DAT_14caf84d0);
              lVar10 = *(longlong *)(lVar15 + 0x110);
            }
            pfVar11 = (float *)(lVar10 + 0x38);
          }
          else {
            pfVar11 = (float *)((longlong)plVar14 + 0x41c);
          }
          fVar20 = *pfVar11;
          *(float *)(plVar14 + 0x83) = fVar20;
        }
        else {
          fVar20 = *(float *)(plVar14 + 0x83);
        }
      }
      else {
        fVar20 = (float)(**(code **)(*plVar14 + 0x660))(plVar14);
      }
    }
    uStack_2b0 = CONCAT44(uStack_2b0._4_4_,fVar20);
    FUN_14125d732(&local_2a8,&local_148);
    local_308 = local_120;
    local_318 = local_130;
    uStack_310 = uStack_128;
    if (local_294 != '\0') {
      fVar20 = local_298;
    }
    uVar21 = ~-(uint)(fVar20 != 0.0) & 0x3f800000 |
             (uint)(local_118 / fVar20) & -(uint)(fVar20 != 0.0);
    local_300 = uVar21;
    if ((*param_6 & 0xfd) == 0) {
      local_324 = 0;
    }
    else {
      uVar12 = FUN_140d0fb16(param_6,local_180,param_4,0);
      local_324 = (undefined4)CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
    }
    local_188 = '\0';
    cVar7 = FUN_1418a5b2c(param_11);
    if (&local_258 != param_11 && cVar7 == '\x01') {
      if (local_188 == '\x01') {
        local_1a8 = (undefined **)&DAT_14a171d50;
        uVar4 = uStack_190 >> 0x20;
        uStack_190 = uStack_190 & 0xffffffff00000000;
        if ((int)uVar4 != 0) {
          FUN_140115c12(&local_198,0);
        }
        local_1a0 = 0;
        if (local_198 != 0) {
          FUN_1400020a8();
        }
        if (local_208 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
      }
      local_258 = CONCAT44(local_258._4_4_,*(undefined4 *)param_11);
      local_250 = (longlong *)param_11[1];
      local_248 = *(undefined4 *)(param_11 + 2);
      local_240 = 0;
      local_208 = (undefined1 *)0x0;
      puVar16 = param_11 + 4;
      if ((undefined8 *)param_11[10] != (undefined8 *)0x0) {
        puVar16 = (undefined8 *)param_11[10];
      }
      FUN_1400709d4(local_238,puVar16,*(undefined4 *)(param_11 + 0xb),0);
      local_1f8 = *(undefined4 *)(param_11 + 0xc);
      local_1f0 = param_11[0xd];
      local_1e8 = *(undefined4 *)(param_11 + 0xe);
      local_1e0 = param_11[0xf];
      local_1d8 = *(undefined4 *)(param_11 + 0x10);
      local_1d0 = 0;
      local_1c8 = param_11[0x12];
      uStack_1c0 = param_11[0x13];
      local_1b8 = *(undefined4 *)(param_11 + 0x14);
      uStack_1b4 = *(undefined4 *)((longlong)param_11 + 0xa4);
      uStack_1b0 = *(undefined4 *)(param_11 + 0x15);
      uStack_1ac = *(undefined4 *)((longlong)param_11 + 0xac);
      local_1a8 = (undefined **)&DAT_14a171d50;
      local_198 = 0;
      uStack_190 = 0;
      local_1a0 = param_11[0x17];
      FUN_1406022fe(&local_198,param_11 + 0x18);
      local_1a8 = &PTR_FUN_14b0394b0;
      local_188 = '\x01';
    }
    lVar10 = param_4;
    if ((*param_10 | 2) == 3) {
      lVar10 = *(longlong *)(param_10 + 8);
    }
    lVar13 = FUN_143e0f1c4(param_10,param_4);
    lVar15 = 0;
    if (lVar13 != param_4) {
      lVar15 = param_4;
    }
    bVar18 = *(byte *)(local_320 + 0x175) & 1;
    plVar14 = (longlong *)FUN_14001cc68(0x1e0,0x10);
    plVar14[1] = (longlong)&DAT_100000001;
    *plVar14 = (longlong)&PTR_FUN_14b4227d0;
    local_78 = local_188;
    if (local_188 == '\x01') {
      local_148 = (code *)CONCAT44(local_148._4_4_,(undefined4)local_258);
      local_140 = local_250;
      local_138 = local_248;
      local_130 = 0;
      local_f8 = 0;
      puVar17 = local_208;
      if (local_208 == (undefined1 *)0x0) {
        puVar17 = local_238;
      }
      FUN_1400709d4(&uStack_128,puVar17,local_200,0);
      local_e8 = local_1f8;
      local_e0 = local_1f0;
      local_d8 = local_1e8;
      local_d0 = local_1e0;
      local_c8 = local_1d8;
      local_c0 = 0;
      local_b8 = local_1c8;
      uStack_b0 = uStack_1c0;
      local_a8 = CONCAT44(uStack_1b4,local_1b8);
      uStack_a0 = CONCAT44(uStack_1ac,uStack_1b0);
      local_98 = (undefined **)&DAT_14a171d50;
      local_88 = 0;
      uStack_80 = 0;
      local_90 = local_1a0;
      FUN_1406022fe(&local_88,&local_198);
      local_98 = &PTR_FUN_14b0394b0;
    }
    local_25c = bVar18 ^ 1;
    local_150 = (undefined1)local_324;
    if (bVar18 == 0) {
      local_260 = uVar21;
    }
    local_350 = &local_148;
    local_358 = local_168;
    local_360 = &local_260;
    local_368 = &local_318;
    local_370 = local_2f8;
    local_378 = lVar15;
    FUN_1415e3b80(plVar14 + 2,param_3,lVar10,lVar13);
    *param_1 = (longlong)(plVar14 + 2);
    param_1[1] = (longlong)plVar14;
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      LOCK();
      plVar3 = plVar14 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    FUN_140e67fb0(&local_148,lVar9);
    if (local_140 != (longlong *)0x0) {
      iVar8 = (int)local_140[1];
      do {
        if (iVar8 == 0) {
          plVar14 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar6 = (int)local_140[1];
        bVar19 = iVar8 == iVar6;
        if (bVar19) {
          *(int *)(local_140 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
        plVar14 = local_140;
      } while (!bVar19);
      LOCK();
      piVar1 = (int *)((longlong)local_140 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_140 + 0x10))();
      }
      pcVar5 = local_148;
      if (plVar14 != (longlong *)0x0) {
        if (local_148 != (code *)0x0) {
          local_148 = (code *)*param_1;
          plVar3 = (longlong *)param_1[1];
          local_140 = plVar3;
          if (plVar3 == (longlong *)0x0) {
            FUN_140e67c44(pcVar5,&local_148);
          }
          else {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
            FUN_140e67c44();
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar3 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
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
        }
        LOCK();
        plVar3 = plVar14 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
    }
    if (local_188 == '\x01') {
      local_1a8 = (undefined **)&DAT_14a171d50;
      uVar4 = uStack_190 >> 0x20;
      uStack_190 = uStack_190 & 0xffffffff00000000;
      if ((int)uVar4 != 0) {
        FUN_140115c12(&local_198,0);
      }
      local_1a0 = 0;
      if (local_198 != 0) {
        FUN_1400020a8();
      }
      if (local_208 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1412ef66c FUN_1412ef66c body=1783 status=ok
// SIG undefined FUN_1412ef66c(void)

void FUN_1412ef66c(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  longlong lVar23;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar22 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar22 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar22) {
      FUN_1412efd64(param_1,iVar22);
    }
    iVar20 = (int)param_1[5];
    if (iVar20 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar6 = iVar20 + -1;
      }
      iVar6 = iVar6 >> 5;
    }
    plVar17 = param_1 + 2;
    iVar10 = iVar20 + 1;
    iVar11 = iVar20 + 0x1f;
    if (-1 < iVar20) {
      iVar11 = iVar20;
    }
    if (iVar11 >> 5 == iVar6) {
      *(int *)(param_1 + 5) = iVar10;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar20) {
        if (iVar20 + 0x20U < 0xa0) {
          iVar10 = 0x80;
          iVar6 = iVar20;
        }
        else {
          uVar7 = iVar20 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar14 = 4;
            if (4 < uVar7) {
              uVar14 = uVar7;
            }
          }
          else {
            uVar14 = (uVar7 * 3 >> 3) + uVar7 + 0x10;
          }
          uVar13 = FUN_144a3809e(uVar14 << 2,0);
          iVar6 = (int)(uVar13 >> 2);
          iVar10 = -0x20;
          if ((int)uVar7 <= iVar6) {
            iVar10 = iVar6 << 5;
          }
          iVar6 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar10;
        FUN_1446efbd8(plVar17,iVar6);
        iVar10 = (int)param_1[5] + 1;
      }
      iVar6 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar6 = iVar10;
      }
      *(int *)(param_1 + 5) = iVar10;
      if (iVar10 % 0x20 != 0) {
        plVar16 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar16 = plVar17;
        }
        bVar9 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar16 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar16 + (longlong)(iVar6 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar8 = (longlong)iVar22;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar17 = (longlong *)param_1[4];
    }
    bVar9 = (byte)iVar20 & 0x1f;
    puVar1 = (uint *)((longlong)plVar17 + (longlong)(iVar11 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar22 = (int)param_1[6];
    lVar8 = (longlong)iVar22;
    iVar20 = *(int *)(*param_1 + 4 + lVar8 * 0x220);
    *(int *)(param_1 + 6) = iVar20;
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar20 * 0x220) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar12 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar12 = puVar1;
  }
  iVar20 = iVar22 + 0x1f;
  if (-1 < iVar22) {
    iVar20 = iVar22;
  }
  puVar12[iVar20 >> 5] = puVar12[iVar20 >> 5] | 1 << ((byte)iVar22 & 0x1f);
  plVar17 = (longlong *)(*param_1 + lVar8 * 0x220);
  puVar3 = (undefined8 *)param_3[1];
  lVar8 = *param_1 + 0x94 + lVar8 * 0x220;
  *(undefined8 *)(lVar8 + -0x94) = *(undefined8 *)*param_3;
  *(undefined8 *)(lVar8 + -0x8c) = *puVar3;
  *(undefined4 *)(lVar8 + -0x84) = *(undefined4 *)(puVar3 + 1);
  lVar23 = 0;
  do {
    *(undefined8 *)(lVar8 + -0x54 + lVar23) = 0;
    *(undefined4 *)(lVar8 + -0x4c + lVar23) = 0;
    puVar2 = (undefined8 *)(lVar8 + -0x74 + lVar23);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined8 *)(lVar8 + -0x48 + lVar23) = 0xffffffff00000080;
    *(undefined4 *)(lVar8 + -0x40 + lVar23) = 0;
    *(undefined8 *)(lVar8 + -0x34 + lVar23) = 0;
    *(undefined4 *)(lVar8 + -0x2c + lVar23) = 0;
    puVar2 = (undefined8 *)(lVar8 + -0x24 + lVar23);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined ***)(lVar8 + -0x7c + lVar23) = &PTR_FUN_14a176fc0;
    *(undefined4 *)(lVar8 + -0x14 + lVar23) = *(undefined4 *)((longlong)puVar3 + lVar23 + 0x78);
    *(undefined2 *)(lVar8 + -0x10 + lVar23) = *(undefined2 *)((longlong)puVar3 + lVar23 + 0x7c);
    *(undefined **)(lVar8 + -0x7c + lVar23) = &DAT_14a176f00;
    *(undefined8 *)(lVar8 + -0xc + lVar23) = 0;
    iVar20 = *(int *)((longlong)puVar3 + lVar23 + 0x88);
    pvVar4 = *(void **)((longlong)puVar3 + lVar23 + 0x80);
    *(int *)(lVar8 + -4 + lVar23) = iVar20;
    if ((longlong)iVar20 == 0) {
      *(undefined4 *)(lVar8 + lVar23) = 0;
    }
    else {
      FUN_140501c24((longlong)plVar17 + lVar23 + 0x88,iVar20,0);
      memcpy(*(void **)(lVar8 + -0xc + lVar23),pvVar4,(longlong)iVar20 * 0x1c);
    }
    lVar23 = lVar23 + 0x80;
  } while (lVar23 != 0x200);
  *(undefined4 *)(plVar17 + 0x43) = 0xffffffff;
  lVar8 = *plVar17;
  uVar7 = (uint)((ulonglong)lVar8 >> 0x10);
  uVar14 = (uint)lVar8 & 0xffff;
  uVar7 = ((uint)lVar8 << 0x10 | uVar14) + (int)((ulonglong)lVar8 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar14 >> 4);
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar14 != 0) && (uVar14 != 1)) {
    plVar16 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[8];
    }
    iVar20 = *(int *)((longlong)plVar16 + (ulonglong)((int)param_1[9] - 1U & uVar7) * 4);
    if (iVar20 != -1) {
      do {
        pvVar4 = (void *)(*param_1 + (longlong)iVar20 * 0x220);
        if (*(longlong *)(*param_1 + (longlong)iVar20 * 0x220) == lVar8) {
          FUN_140b623da((longlong)pvVar4 + 8);
          memmove(pvVar4,plVar17,0x218);
          FUN_1486085fe(param_1,iVar22);
          iVar22 = iVar20;
          goto LAB_1412ef962;
        }
        iVar20 = *(int *)((longlong)pvVar4 + 0x218);
      } while (iVar20 != -1);
    }
  }
  if (uVar14 < 4) {
    uVar19 = 1;
  }
  else {
    uVar13 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
    lVar8 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar19 = 1 << ((byte)lVar8 & 0x1f);
  }
  if (((int)uVar14 < 1) || ((int)uVar19 <= (int)param_1[9])) {
    uVar7 = (int)param_1[9] - 1U & uVar7;
    *(uint *)((longlong)plVar17 + 0x21c) = uVar7;
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    *(undefined4 *)(plVar17 + 0x43) =
         *(undefined4 *)
          ((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar17 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar17 = param_1 + 7;
    }
    *(int *)((longlong)plVar17 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         iVar22;
    goto LAB_1412ef962;
  }
  *(uint *)(param_1 + 9) = uVar19;
  plVar17 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar17,0,0,4);
    uVar19 = *(uint *)(param_1 + 9);
  }
  plVar16 = param_1 + 7;
  if (uVar19 == 1) {
    if (*plVar17 != 0) {
      FUN_1446efa72(plVar17,0,0,4);
    }
LAB_1412efa03:
    uVar7 = 0;
    do {
      plVar17 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar17 = plVar16;
      }
      *(undefined4 *)((longlong)plVar17 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
           0xffffffff;
      uVar7 = uVar7 + 1;
    } while (uVar19 != uVar7);
  }
  else {
    if (uVar19 == 0) goto LAB_1412ef962;
    FUN_1446efa72(plVar17,0,uVar19,4);
    if (0 < (int)uVar19) goto LAB_1412efa03;
  }
  iVar20 = (int)param_1[5];
  if (iVar20 == 0) {
    uVar13 = 0;
    uVar18 = 1;
    iVar6 = 0;
    iVar11 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar7 = *puVar12;
    if (uVar7 == 0) {
      iVar6 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar6 = iVar20 + -1;
      }
      uVar13 = 0;
      uVar18 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar18 = uVar13;
      }
      iVar11 = 0;
      do {
        if (uVar18 == uVar13) goto LAB_1412ef962;
        iVar11 = iVar11 + 0x20;
        uVar7 = puVar12[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar13 = 0;
      iVar11 = 0;
    }
    uVar18 = (ulonglong)(-uVar7 & uVar7);
    uVar21 = uVar18 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar6 = (iVar11 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar20 <= iVar6) {
      iVar6 = iVar20;
    }
  }
  if (iVar6 < iVar20) {
    uVar7 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar23 = (longlong)iVar6 * 0x220;
      uVar5 = *(undefined8 *)(lVar8 + lVar23);
      uVar14 = (uint)((ulonglong)uVar5 >> 0x10);
      uVar19 = (uint)uVar5 & 0xffff;
      uVar21 = (longlong)
               (int)(((uint)uVar5 << 0x10 | uVar19) + (int)((ulonglong)uVar5 >> 0x20) +
                     (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar19 >> 4)) &
               (longlong)(int)param_1[9] - 1U;
      iVar20 = (int)uVar21;
      *(int *)(lVar8 + 0x21c + lVar23) = iVar20;
      plVar17 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar17 = plVar16;
      }
      *(undefined4 *)(lVar8 + 0x218 + lVar23) =
           *(undefined4 *)((longlong)plVar17 + ((longlong)(int)param_1[9] - 1U & uVar21) * 4);
      plVar17 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar17 = plVar16;
      }
      *(int *)((longlong)plVar17 + ((longlong)iVar20 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
      uVar7 = ~(uint)uVar18 & uVar7;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puVar1;
      }
      iVar20 = (int)param_1[5];
      iVar6 = (int)uVar13;
      lVar8 = (longlong)iVar6;
      uVar14 = puVar12[lVar8] & uVar7;
      if (uVar14 == 0) {
        iVar10 = iVar20 + 0x1e;
        if (-1 < iVar20 + -1) {
          iVar10 = iVar20 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar15 = iVar10;
        if (iVar10 < iVar6) {
          iVar15 = iVar6;
        }
        if (iVar10 <= iVar6) break;
        lVar23 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar14 = puVar12[lVar8 + lVar23 + 1];
          if (uVar14 != 0) break;
          lVar23 = lVar23 + 1;
          if (iVar15 - lVar8 == lVar23) goto LAB_1412ef962;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar23 + 1);
        uVar7 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar14 & uVar14);
      uVar21 = uVar18 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar6 = (iVar11 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar20);
  }
LAB_1412ef962:
  *param_2 = iVar22;
  return;
}



// FUNCTION 1412efd64 FUN_1412efd64 body=274 status=ok
// SIG undefined FUN_1412efd64(void)

void FUN_1412efd64(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x220;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x220)) {
      uVar5 = uVar4 / 0x220 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x220,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1412efe78 FUN_1412efe78 body=765 status=ok
// SIG undefined FUN_1412efe78(void)

undefined4 * FUN_1412efe78(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = 0;
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_2 + 0xe) = 0;
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_2 + 0x12) = 0;
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_2 + 0x16) = 0;
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_2 + 0x1a) = 0;
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_2 + 0x1e) = 0;
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_2 + 0x22) = 0;
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  *(undefined8 *)(param_2 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_2 + 0x26) = 0;
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  *(undefined8 *)(param_2 + 0x28) = 0;
  FUN_1412f0176(param_1 + 0x2a,param_2 + 0x2a);
  cVar1 = *(char *)((longlong)param_2 + 0xd9);
  *(char *)((longlong)param_1 + 0xd9) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x36) = *(undefined1 *)(param_2 + 0x36);
  }
  *(undefined1 *)((longlong)param_1 + 0xda) = *(undefined1 *)((longlong)param_2 + 0xda);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  param_1[0x3a] = param_2[0x3a];
  param_1[0x3b] = param_2[0x3b];
  *(undefined8 *)(param_2 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)(param_2 + 0x3c) = 0;
  param_1[0x3e] = param_2[0x3e];
  param_1[0x3f] = param_2[0x3f];
  *(undefined8 *)(param_2 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  param_1[0x42] = param_2[0x42];
  param_1[0x43] = param_2[0x43];
  *(undefined8 *)(param_2 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  *(undefined8 *)(param_2 + 0x44) = 0;
  param_1[0x46] = param_2[0x46];
  param_1[0x47] = param_2[0x47];
  *(undefined8 *)(param_2 + 0x46) = 0;
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4a) = *(undefined8 *)(param_2 + 0x4a);
  *(undefined8 *)(param_2 + 0x4a) = 0;
  param_1[0x4c] = param_2[0x4c];
  param_1[0x4d] = param_2[0x4d];
  *(undefined8 *)(param_2 + 0x4c) = 0;
  return param_1;
}



// FUNCTION 1412f0176 FUN_1412f0176 body=95 status=ok
// SIG undefined FUN_1412f0176(void)

void FUN_1412f0176(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    *param_1 = *param_2;
    param_1[1] = 0;
    param_1[1] = param_2[1];
    param_2[1] = 0;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    param_2[2] = 0;
    param_1[3] = 0;
    param_1[3] = param_2[3];
    param_2[3] = 0;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    param_2[4] = 0;
  }
  return;
}



// FUNCTION 1412f01d6 FUN_1412f01d6 body=354 status=ok
// SIG undefined FUN_1412f01d6(void)

void FUN_1412f01d6(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1405e47c6(param_1 + -0xdf8,1);
  plVar1 = *(longlong **)(param_1 + -0xc30);
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14cac6e60 == 0) {
      local_40 = &local_20;
      local_20 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b47bc4;
      local_48 = &LAB_1478989f1;
      local_50 = &LAB_146391124;
      local_58 = L"Engine";
      local_60 = 0x10000000000;
      local_68 = 0x10000005;
      local_70 = 0x10;
      local_78 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
        DAT_14cac6e60 + 0x30)) {
      (**(code **)(*plVar1 + 0x4a0))(plVar1,&DAT_14cadad9c);
      (**(code **)(*plVar1 + 0x720))(plVar1,2);
      (**(code **)(*plVar1 + 0x690))(plVar1,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_1412f033a(param_1 + -0xdf8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412f033a FUN_1412f033a body=381 status=ok
// SIG undefined FUN_1412f033a(void)

void FUN_1412f033a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  undefined1 **local_a8;
  undefined1 local_a0 [8];
  longlong local_98;
  longlong *local_90;
  undefined1 *local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_140c7cbb8(param_1 + 0xf78,param_1);
    lVar3 = FUN_140ad802e();
    lVar3 = FUN_140963a30(lVar3 + 0x88);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_c8);
    }
    local_a8 = &local_88;
    local_68 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = (undefined1 *)0x0;
    uStack_80 = 0;
    uStack_60 = 0x8000000000;
    local_58 = 0xffffffff;
    FUN_14122243a(param_1 + 0xf78,&local_98,lVar3,0);
    uStack_40 = uStack_40 & 0xffffffff00000000;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140333f4e(&local_88);
    if (local_98 != 0) {
      local_88 = &LAB_145883ed6;
      uStack_80 = uStack_80 & 0xffffffff00000000;
      FUN_1458c740e(local_98 + 0x18,local_a0,param_1);
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)local_90 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_90 + 0x10))(local_90);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412f04d6 FUN_1412f04d6 body=1466 status=ok
// SIG undefined FUN_1412f04d6(void)

void FUN_1412f04d6(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  param_1[0xf] = param_2;
  if ((*(longlong *)(param_2 + 0x88) == 0) || (*(longlong **)(param_2 + 0x90) == (longlong *)0x0)) {
    plVar11 = (longlong *)0x0;
  }
  else {
    plVar11 = (longlong *)(**(code **)(**(longlong **)(param_2 + 0x90) + 8))();
  }
  lVar2 = param_1[5];
  lVar9 = (**(code **)(*plVar11 + 0x498))();
  bVar14 = false;
  if ((lVar2 != 0) && (bVar14 = false, lVar9 != 0)) {
    bVar14 = *(int *)(lVar9 + 0x1d2c) == *(int *)(lVar2 + 0x1d2c);
  }
  *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) & 0xfe | bVar14;
  FUN_1458c763c(param_2 + 0x1f0,&local_60,param_1,&LAB_14097d6d2);
  FUN_1458c7732(param_2 + 0x120,&local_60,param_1);
  if ((longlong)*(int *)(param_2 + 200) != 0) {
    plVar11 = *(longlong **)(param_2 + 0xc0);
    plVar13 = plVar11 + (longlong)*(int *)(param_2 + 200) * 2;
    do {
      lVar2 = *plVar11;
      if (*(int *)(lVar2 + 0x34) != -1) {
        local_60 = (longlong *)0x0;
        local_58 = 0;
        FUN_1446efa72(&local_60,0,3,0x10);
        plVar1 = local_60;
        local_58 = 3;
        *local_60 = (longlong)&PTR_LAB_149e35290;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar9 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar9 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar9;
        local_60[2] = lVar10;
        *local_60 = (longlong)&PTR_FUN_14b42c610;
        local_60[3] = 0;
        if (param_1 == (longlong *)0x0) {
          iVar6 = 0;
        }
        else {
          uVar8 = *(uint *)((longlong)param_1 + 0xc);
          *(uint *)(local_60 + 3) = uVar8;
          if ((int)uVar8 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          iVar6 = *(int *)(lVar9 + 0x10);
          if (*(int *)(lVar9 + 0x10) == 0) {
            LOCK();
            iVar6 = DAT_14c964868 + 1;
            UNLOCK();
            iVar7 = DAT_14c964868 + 1;
            bVar14 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar6;
            if (bVar14) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar7);
            }
            LOCK();
            iVar6 = *(int *)(lVar9 + 0x10);
            bVar14 = iVar6 == 0;
            if (bVar14) {
              *(int *)(lVar9 + 0x10) = iVar7;
              iVar6 = 0;
            }
            UNLOCK();
            if (bVar14) {
              iVar6 = iVar7;
            }
          }
        }
        *(int *)((longlong)plVar1 + 0x1c) = iVar6;
        plVar1[4] = (longlong)&LAB_14124f5ec;
        if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
           (cVar5 = (**(code **)(*local_60 + 0x30))(), cVar5 == '\0')) {
          if (local_58 == 0) goto LAB_1412f0743;
          if (local_60 != (longlong *)0x0) {
            (**(code **)*local_60)(local_60,0);
            FUN_1446efa72(&local_60,0,0,0x10);
            goto LAB_1412f0736;
          }
        }
        else {
          plVar1 = (longlong *)(lVar2 + 0x38);
          if (*(int *)(lVar2 + 0x4c) < 1) {
            iVar6 = *(int *)(lVar2 + 0x40);
            iVar7 = *(int *)(lVar2 + 0x48) + -1;
            *(int *)(lVar2 + 0x48) = iVar7;
            if (iVar7 <= iVar6) {
              iVar7 = iVar6;
              if (0 < iVar6) {
                iVar12 = 0;
                do {
                  if (((*(int *)(*plVar1 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                      (plVar3 = *(longlong **)(*plVar1 + (longlong)iVar12 * 0x10),
                      plVar3 == (longlong *)0x0)) ||
                     (cVar5 = (**(code **)(*plVar3 + 0x28))(), cVar5 != '\0')) {
                    FUN_14005b288(plVar1,iVar12);
                    FUN_14005b248(plVar1);
                  }
                  else {
                    iVar12 = iVar12 + 1;
                  }
                  iVar7 = *(int *)(lVar2 + 0x40);
                } while (iVar12 < iVar7);
              }
              iVar12 = iVar7 * 2;
              if (iVar12 < 3) {
                iVar12 = 2;
              }
              *(int *)(lVar2 + 0x48) = iVar12;
              if ((iVar12 < iVar6) && (*(int *)(lVar2 + 0x44) != iVar7)) {
                FUN_14045812c(plVar1);
              }
            }
          }
          if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
            (**(code **)(*local_60 + 0x38))();
          }
          iVar6 = *(int *)(lVar2 + 0x40);
          uVar8 = iVar6 + 1;
          *(uint *)(lVar2 + 0x40) = uVar8;
          if (*(uint *)(lVar2 + 0x44) < uVar8) {
            FUN_1447a71f6(plVar1);
          }
          lVar2 = *plVar1;
          lVar9 = (longlong)iVar6 * 0x10;
          *(undefined8 *)(lVar2 + lVar9) = 0;
          *(undefined4 *)(lVar2 + 8 + lVar9) = 0;
          *(longlong **)(lVar2 + lVar9) = local_60;
          local_60 = (longlong *)0x0;
          *(int *)(lVar2 + 8 + lVar9) = local_58;
LAB_1412f0736:
          local_58 = 0;
LAB_1412f0743:
          if (local_60 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        FUN_1412f0a92(param_1);
      }
      plVar11 = plVar11 + 2;
    } while (plVar11 != plVar13);
  }
  lVar9 = FUN_14001cc68(0x90,0x10);
  local_60 = (longlong *)0x0;
  FUN_14485c47a(&local_60,param_2);
  FUN_1458c7cde(lVar9,&local_60,param_2 + 0xe0);
  lVar2 = param_1[0x17];
  param_1[0x17] = lVar9;
  if (lVar2 != 0) {
    FUN_145797fa4(lVar2);
    FUN_1400020a8(lVar2);
    lVar9 = param_1[0x17];
  }
  if (((*(int *)(lVar9 + 0x68) == -1) || (*(int *)(lVar9 + 0x6c) == -1)) &&
     (*(int *)(lVar9 + 0x80) != 0)) {
    FUN_14097d6da(param_1,4);
  }
  FUN_1458c7926(param_2 + 0x220,&local_60,param_1);
  if ((*(byte *)(param_1 + 0x1a) & 1) != 0) {
    if (*(int *)(param_2 + 0x240) != 3) {
      FUN_1446efa72((longlong *)(param_2 + 0x238),0,3,0x10);
      *(undefined4 *)(param_2 + 0x240) = 3;
    }
    puVar4 = *(undefined8 **)(param_2 + 0x238);
    *puVar4 = &PTR_LAB_14b42c6f0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    puVar4[2] = lVar9;
    *puVar4 = &PTR_FUN_14b42c680;
    puVar4[3] = 0;
    FUN_14485c47a(puVar4 + 3,param_1);
    puVar4[4] = FUN_141239110;
  }
  cVar5 = FUN_1458c7b02(param_1);
  if (cVar5 == '\0') {
    lVar2 = param_1[5];
    local_60 = param_1;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_1);
    }
    FUN_1405f6d44(lVar2 + 0x16c8,&local_60);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412f0a92 FUN_1412f0a92 body=290 status=ok
// SIG undefined FUN_1412f0a92(void)

void FUN_1412f0a92(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = (**(code **)(*(longlong *)*param_2 + 8))();
  FUN_143e3b1b4(&DAT_14cb8b480,&local_40,uVar5);
  lVar6 = local_40;
  if (local_40 != 0) {
    iVar3 = *(int *)(param_1 + 0xb0);
    *(uint *)(param_1 + 0xb0) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0xb4) < iVar3 + 1U) {
      FUN_1418ac1ee((longlong *)(param_1 + 0xa8),iVar3);
    }
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar3 * 0x48);
    *puVar2 = *param_2;
    lVar4 = param_2[1];
    puVar2[1] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
      lVar6 = local_40;
    }
    puVar2[2] = lVar6;
    puVar2[3] = local_38;
    if (local_38 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = *(int *)(local_38 + 1) + 1;
      UNLOCK();
    }
    *(undefined1 *)(puVar2 + 5) = 0;
    puVar2[6] = 0;
    *(undefined1 *)(puVar2 + 7) = 0;
    puVar2[8] = 0x3ff0000000000000;
  }
  if (local_38 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_38 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412f0c66 FUN_1412f0c66 body=406 status=ok
// SIG undefined FUN_1412f0c66(void)

undefined4 * FUN_1412f0c66(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1412f0faa(param_1,local_40);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  *local_38 = *puVar2;
  lVar12 = puVar2[1];
  local_38[1] = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  local_38[2] = *puVar3;
  lVar12 = puVar3[1];
  local_38[3] = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_38 + 4) = 0xffffffff;
  local_44 = local_40[0];
  plVar4 = (longlong *)*local_38;
  plVar5 = (longlong *)local_38[1];
  if (plVar5 == (longlong *)0x0) {
    uVar8 = (**(code **)(*plVar4 + 0x40))();
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    uVar8 = (**(code **)(*plVar4 + 0x40))();
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  cVar7 = FUN_1412f0dfe(param_1,uVar8,local_38,&local_44);
  uVar6 = local_44;
  if (cVar7 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar9 < 4) {
      iVar11 = 1;
    }
    else {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_38 + 0x24) = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 4) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_1412f1190(param_1);
    }
  }
  *param_2 = uVar6;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412f0dfe FUN_1412f0dfe body=242 status=ok
// SIG undefined FUN_1412f0dfe(void)

undefined8 FUN_1412f0dfe(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_38 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar12 = FUN_1412f0ef2(param_1,param_2,&local_40);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar12 = FUN_1412f0ef2(param_1);
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
    }
    if (iVar12 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x28);
      FUN_148fa0d04(puVar3);
      uVar5 = *(undefined4 *)param_3;
      uVar6 = *(undefined4 *)((longlong)param_3 + 4);
      uVar7 = *(undefined4 *)(param_3 + 1);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar10 = *(undefined4 *)(param_3 + 3);
      uVar11 = *(undefined4 *)((longlong)param_3 + 0x1c);
      puVar3[4] = *(undefined4 *)(param_3 + 2);
      puVar3[5] = uVar9;
      puVar3[6] = uVar10;
      puVar3[7] = uVar11;
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_148fa0c92(param_1,*param_4);
      *param_4 = iVar12;
      uVar13 = 1;
      goto LAB_1412f0e6b;
    }
  }
  uVar13 = 0;
LAB_1412f0e6b:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412f0ef2 FUN_1412f0ef2 body=183 status=ok
// SIG undefined FUN_1412f0ef2(void)

int FUN_1412f0ef2(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      lVar6 = *param_1;
      do {
        lVar7 = (longlong)iVar8;
        puVar3 = *(undefined8 **)(lVar6 + lVar7 * 0x28);
        plVar5 = *(longlong **)(lVar6 + 8 + lVar7 * 0x28);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        if (puVar3 == (undefined8 *)*param_3) {
          cVar4 = '\x01';
        }
        else {
          cVar4 = (**(code **)*puVar3)();
        }
        if (plVar5 != (longlong *)0x0) {
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
        }
        if (cVar4 != '\0') {
          return iVar8;
        }
        lVar6 = *param_1;
        iVar8 = *(int *)(lVar6 + 0x20 + lVar7 * 0x28);
      } while (iVar8 != -1);
    }
  }
  return -1;
}



// FUNCTION 1412f0faa FUN_1412f0faa body=485 status=ok
// SIG undefined FUN_1412f0faa(void)

int * FUN_1412f0faa(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_140549c28(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x28);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x28) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1412f1190 FUN_1412f1190 body=651 status=ok
// SIG undefined FUN_1412f1190(void)

void FUN_1412f1190(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar13 = *(uint *)(param_1 + 9);
  if (uVar13 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar13,4);
    if (0 < (int)uVar13) {
      uVar6 = 0;
      do {
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(undefined4 *)((longlong)plVar11 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar6) * 4)
             = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar13 != uVar6);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_70 = plVar1;
    if ((int)param_1[5] == 0) {
      uVar14 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar14 = local_68 >> 0x20;
    }
    plVar1 = local_60;
    iVar15 = (int)local_68;
    uVar13 = (uint)local_58;
    iVar9 = local_58._4_4_;
    iVar7 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar12 = *param_1;
        lVar10 = (longlong)iVar9;
        plVar11 = *(longlong **)(lVar12 + lVar10 * 0x28);
        plVar4 = *(longlong **)(lVar12 + 8 + lVar10 * 0x28);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        lVar12 = lVar12 + lVar10 * 0x28;
        local_74 = iVar7;
        iVar7 = (**(code **)(*plVar11 + 0x40))();
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar12 + 0x24) = iVar7;
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = local_70;
        }
        *(undefined4 *)(lVar12 + 0x20) =
             *(undefined4 *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = local_70;
        }
        *(int *)((longlong)plVar11 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9
        ;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar4 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
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
        uVar13 = uVar13 & ~(uint)uVar14;
        plVar11 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        iVar3 = (int)plVar1[3];
        lVar12 = (longlong)iVar15;
        uVar6 = *(uint *)((longlong)plVar11 + lVar12 * 4) & uVar13;
        iVar7 = local_74;
        if (uVar6 == 0) {
          iVar9 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar9 = iVar3 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar5 = iVar9;
          if (iVar9 < iVar15) {
            iVar5 = iVar15;
          }
          if (iVar9 <= iVar15) break;
          lVar10 = 0;
          while( true ) {
            iVar7 = iVar7 + 0x20;
            uVar6 = *(uint *)((longlong)plVar11 + lVar10 * 4 + lVar12 * 4 + 4);
            if (uVar6 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar5 - lVar12 == lVar10) goto LAB_1412f1390;
          }
          iVar15 = iVar15 + (int)lVar10 + 1;
          uVar13 = 0xffffffff;
        }
        uVar14 = (ulonglong)(-uVar6 & uVar6);
        uVar8 = uVar14 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar9 = (iVar7 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar9 < iVar3);
    }
  }
LAB_1412f1390:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412f141c FUN_1412f141c body=197 status=ok
// SIG undefined FUN_1412f141c(void)

longlong FUN_1412f141c(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x30;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x30) == *param_3) {
          if (lVar3 != 0) goto LAB_1412f1481;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x28);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_1412f14e2(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x30 + *param_1;
LAB_1412f1481:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1412f14e2 FUN_1412f14e2 body=655 status=ok
// SIG undefined FUN_1412f14e2(void)

int * FUN_1412f14e2(longlong *param_1,int *param_2,uint param_3,undefined8 *param_4,char *param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  longlong *plVar17;
  char cVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar22 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar22 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar22) {
      FUN_140044672(param_1,iVar22);
    }
    lVar23 = (longlong)iVar22;
    iVar21 = FUN_144a54ea4(param_1 + 2,1);
    plVar17 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar17 = param_1 + 2;
    }
    iVar19 = iVar21 + 0x1f;
    if (-1 < iVar21) {
      iVar19 = iVar21;
    }
    bVar7 = (byte)iVar21 & 0x1f;
    puVar1 = (uint *)((longlong)plVar17 + (longlong)(iVar19 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar22 = (int)param_1[6];
    lVar23 = (longlong)iVar22;
    iVar21 = *(int *)(*param_1 + 4 + lVar23 * 0x30);
    *(int *)(param_1 + 6) = iVar21;
    iVar19 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar19;
    if (iVar19 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar21 * 0x30) = 0xffffffff;
    }
  }
  plVar17 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar17 = (longlong *)param_1[4];
  }
  iVar21 = iVar22 + 0x1f;
  if (-1 < iVar22) {
    iVar21 = iVar22;
  }
  puVar1 = (uint *)((longlong)plVar17 + (longlong)(iVar21 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar22 & 0x1f);
  lVar5 = *param_1;
  lVar23 = lVar23 * 0x30;
  puVar2 = (undefined4 *)(lVar5 + lVar23);
  lVar6 = *(longlong *)*param_4;
  *(longlong *)(lVar5 + lVar23) = lVar6;
  puVar4 = (undefined8 *)(lVar5 + 8 + lVar23);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4 = (undefined8 *)(lVar5 + 0x18 + lVar23);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(lVar5 + 0x28 + lVar23) = 0xffffffff;
  cVar18 = '\0';
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar17 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar17 = (longlong *)param_1[8];
    }
    iVar21 = *(int *)((longlong)plVar17 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
    if (iVar21 == -1) {
      cVar18 = '\0';
    }
    else {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar21 * 0x30);
        if (*(longlong *)(*param_1 + (longlong)iVar21 * 0x30) == lVar6) {
          if (*(longlong *)(puVar3 + 6) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(puVar3 + 2) != 0) {
            FUN_1400020a8();
          }
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          uVar10 = puVar2[2];
          uVar11 = puVar2[3];
          uVar12 = puVar2[4];
          uVar13 = puVar2[5];
          uVar14 = puVar2[6];
          uVar15 = puVar2[7];
          *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar2 + 8);
          puVar3[4] = uVar12;
          puVar3[5] = uVar13;
          puVar3[6] = uVar14;
          puVar3[7] = uVar15;
          *puVar3 = uVar8;
          puVar3[1] = uVar9;
          puVar3[2] = uVar10;
          puVar3[3] = uVar11;
          FUN_140cf1394(param_1,iVar22,1);
          cVar18 = '\x01';
          break;
        }
        iVar21 = puVar3[10];
        cVar18 = '\0';
      } while (iVar21 != -1);
    }
  }
  if (param_5 != (char *)0x0) {
    *param_5 = cVar18;
  }
  if (cVar18 == '\0') {
    uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar16 < 4) {
      iVar21 = 1;
    }
    else {
      uVar20 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
      lVar23 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      iVar21 = 1 << ((byte)lVar23 & 0x1f);
    }
    if (((int)uVar16 < 1) || (iVar21 <= (int)param_1[9])) {
      param_3 = (int)param_1[9] - 1U & param_3;
      puVar2[0xb] = param_3;
      plVar17 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar17 = param_1 + 7;
      }
      puVar2[10] = *(undefined4 *)
                    ((longlong)plVar17 +
                    ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4);
      plVar17 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar17 = param_1 + 7;
      }
      *(int *)((longlong)plVar17 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
           iVar22;
    }
    else {
      *(int *)(param_1 + 9) = iVar21;
      FUN_1458c818e(param_1);
    }
  }
  *param_2 = iVar22;
  return param_2;
}



// FUNCTION 1412f1772 FUN_1412f1772 body=550 status=ok
// SIG undefined FUN_1412f1772(void)

void FUN_1412f1772(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined1 *local_70;
  undefined8 *local_60;
  undefined4 local_58;
  undefined1 local_49;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1446e0b6e();
  local_38 = 0;
  uStack_30 = 0;
  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
    lVar8 = (longlong)*(int *)(param_1 + 0x68) * 0x90;
    lVar7 = *(longlong *)(param_1 + 0x60) + 8;
    do {
      FUN_1412f199a(lVar7,&local_38);
      lVar7 = lVar7 + 0x90;
      lVar8 = lVar8 + -0x90;
    } while (lVar8 != 0);
    if ((int)uStack_30 != 0) {
      lVar7 = FUN_14050fd64();
      local_60 = (undefined8 *)0x0;
      local_58 = 0;
      FUN_1446efa72(&local_60,0,3,0x10);
      puVar4 = local_60;
      local_58 = 3;
      *local_60 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      local_60[2] = lVar5;
      *local_60 = &PTR_FUN_14b962c50;
      local_60[3] = 0;
      FUN_14485c47a(local_60 + 3,param_1);
      puVar4[4] = param_1;
      local_70 = &local_49;
      local_78 = 0;
      local_80 = 0;
      local_88 = 0;
      FUN_1457028c8(lVar7 + 0x1e8,&local_48,&local_38,&local_60);
      plVar1 = local_40;
      if ((undefined8 *)(param_1 + 0x70) != &local_48) {
        *(undefined8 *)(param_1 + 0x70) = local_48;
        local_48 = 0;
        plVar3 = *(longlong **)(param_1 + 0x78);
        if (local_40 != plVar3) {
          local_40 = (longlong *)0x0;
          *(longlong **)(param_1 + 0x78) = plVar1;
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
        }
      }
      plVar1 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_40 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      FUN_1449db362(&local_60);
      uVar6 = uStack_30 & 0xffffffff;
      goto LAB_1412f17e9;
    }
  }
  *(undefined1 *)(param_1 + 0x80) = 1;
  uVar6 = 0;
LAB_1412f17e9:
  FUN_140861e20(local_38,uVar6);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412f199a FUN_1412f199a body=132 status=ok
// SIG undefined FUN_1412f199a(void)

void FUN_1412f199a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,param_2);
      }
      lVar5 = lVar5 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar5);
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar2 + lVar5);
      if (lVar4 != 0) {
        FUN_1412f199a(lVar4,param_2);
      }
      lVar5 = lVar5 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar5);
  }
  return;
}



// FUNCTION 1412f1a1e FUN_1412f1a1e body=991 status=ok
// SIG undefined FUN_1412f1a1e(void)

byte FUN_1412f1a1e(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50;
  longlong *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  plVar9 = (longlong *)(param_1 + 0x18);
  local_50 = (code *)0x0;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_50 = (code *)*plVar9;
    (**(code **)(*param_2 + 0x160))(param_2);
  }
  else {
    (**(code **)(*param_2 + 0x160))(param_2,&local_50);
    if ((code *)*plVar9 != local_50) {
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    *plVar9 = (longlong)local_50;
  }
  FUN_14041e882(plVar9,param_2);
  bVar5 = FUN_1408ee61b(param_2,param_3,param_1 + 0x30);
  local_40 = 0;
  if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_1412f1b5a;
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x38);
    local_40 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1412f1b5a;
    plVar9 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar9 != (longlong *)0x0) &&
       (((int)plVar9[2] == *(int *)(param_1 + 0x3c) && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)))
       ) {
      local_40 = *plVar9;
      goto LAB_1412f1b5a;
    }
  }
  local_40 = 0;
LAB_1412f1b5a:
  if (DAT_14caf64b8 == 0) {
    local_70 = &local_50;
    local_50 = FUN_141030f22;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_142b4754c;
    local_78 = &LAB_147c45ce0;
    local_80 = &LAB_1463f1ff4;
    local_88 = &DAT_149e063b2;
    local_90 = 0x4000000000;
    local_98 = 0x10000004;
    local_a0 = 8;
    local_a8 = CONCAT44(local_a8._4_4_,0x428);
    FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
  }
  local_a8 = 0;
  bVar6 = (**(code **)(*param_3 + 0x2a8))(param_3,param_2,DAT_14caf64b8,&local_40);
  bVar7 = *(byte *)(param_2 + 5) & 1;
  if ((local_40 != 0 & bVar7) == 1) {
    uVar2 = *(uint *)(local_40 + 0xc);
    *(uint *)(param_1 + 0x38) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar8 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar8 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar8 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar10;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar8 = iVar10;
      }
    }
    *(int *)(param_1 + 0x3c) = iVar8;
    bVar7 = *(byte *)(param_2 + 5) & 1;
  }
  if (bVar7 != 0) {
    FUN_1405fab15(&local_50);
    plVar9 = local_48;
    if ((code **)(param_1 + 0x40) != &local_50) {
      *(code **)(param_1 + 0x40) = local_50;
      local_50 = (code *)0x0;
      plVar4 = *(longlong **)(param_1 + 0x48);
      if (local_48 != plVar4) {
        local_48 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x48) = plVar9;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar4 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
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
      }
    }
    plVar9 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_48 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))(*(longlong **)(param_1 + 0x40),param_2);
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar5 & bVar6;
}



// FUNCTION 1412f1dfe FUN_1412f1dfe body=1838 status=ok
// SIG undefined FUN_1412f1dfe(void)

void FUN_1412f1dfe(longlong param_1,longlong *param_2)

{
  ushort *puVar1;
  byte bVar2;
  ulonglong *puVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_88 [46];
  undefined2 local_5a;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_5a = 0;
  bVar2 = *(byte *)(param_2 + 5);
  if ((bVar2 & 4) == 0) {
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (ushort *)*puVar3 + 1;
    if ((ushort *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_5a,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_5a);
      }
    }
    else {
      local_5a = *(ushort *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    *(byte *)(param_1 + 0x278) = *(byte *)(param_1 + 0x278) & 0xdf | local_5a._1_1_ >> 2 & 0x20;
    if ((local_5a & 1) == 0) goto LAB_1412f1fe7;
    if (*(char *)(param_1 + 0xc) == '\0') {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
  }
  else {
    if (*(int *)(param_1 + 0x50) < 1) {
LAB_1412f1eb8:
      bVar4 = 0;
    }
    else {
      plVar6 = (longlong *)(param_1 + 0x18);
      if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
        plVar6 = *(longlong **)(param_1 + 0x48);
      }
      if (*plVar6 == 0) goto LAB_1412f1eb8;
      bVar4 = ((int)plVar6[1] - 1U < 0xfffffffe) << 2;
    }
    local_5a = CONCAT11((*(byte *)(param_1 + 0x278) & 0x30) << 2 | *(byte *)(param_1 + 0x238) |
                        (*(longlong *)(param_1 + 0x240) != 0) * '\x02' |
                        *(char *)(param_1 + 0x264) << 2 | *(char *)(param_1 + 0x26c) << 3 |
                        (*(longlong *)(param_1 + 0x290) != 0) << 4 |
                        (1e-08 < ABS(*(float *)(param_1 + 0x2c0) + -1.0)) << 5,
                        *(char *)(param_1 + 0x218) << 7 |
                        *(char *)(param_1 + 0x1f8) << 6 |
                        *(char *)(param_1 + 0x1c4) << 5 |
                        *(char *)(param_1 + 0x98) << 4 |
                        *(char *)(param_1 + 0x7c) << 3 |
                        (*(longlong *)(param_1 + 0x10) != 0) * '\x02' | *(byte *)(param_1 + 0xc) |
                        bVar4);
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (ushort *)*puVar3 + 1;
    if ((ushort *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_5a,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_5a);
      }
    }
    else {
      local_5a = *(ushort *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    if ((local_5a & 1) == 0) goto LAB_1412f1fe7;
  }
  puVar7 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar7 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 8),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 8) = *puVar7;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
LAB_1412f1fe7:
  if ((local_5a & 2) != 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    if ((bVar2 & 4) == 0) {
      FUN_14075f7c0(param_2,&local_58);
      if (DAT_14cb77da0 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_144837462(DAT_14cb77da0,&local_58);
      }
      *(undefined8 *)(param_1 + 0x10) = uVar5;
    }
    else {
      if (*(longlong *)(param_1 + 0x10) == 0) {
        puVar7 = &DAT_14c9485f0;
      }
      else {
        puVar8 = *(undefined4 **)(*(longlong *)(param_1 + 0x10) + 8);
        puVar7 = &DAT_14c9485f0;
        if (puVar8 != (undefined4 *)0x0) {
          puVar7 = puVar8;
        }
      }
      FUN_1447715ec(&local_58,puVar7);
      FUN_14075f7c0(param_2,&local_58);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  bVar4 = (byte)local_5a;
  if (((byte)local_5a & 4) != 0) {
    FUN_14075f528(param_2,param_1 + 0x18);
    *(byte *)(param_1 + 0x278) = *(byte *)(param_1 + 0x278) & 0xef | local_5a._1_1_ >> 2 & 0x10;
    bVar4 = (byte)local_5a;
  }
  if ((bVar4 & 8) != 0) {
    if (((bVar2 & 4) == 0) && (*(char *)(param_1 + 0x7c) == '\0')) {
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined1 *)(param_1 + 0x7c) = 1;
    }
    puVar7 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar7 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x78),4);
      }
      else {
        thunk_FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x78) = *puVar7;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  if ((local_5a & 0x10) != 0) {
    if (((bVar2 & 4) == 0) && (*(char *)(param_1 + 0x98) == '\0')) {
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x98) = 1;
    }
    FUN_14480c34d(param_2,param_1 + 0x80);
  }
  if (((byte)local_5a & 0x20) != 0) {
    if (((bVar2 & 4) == 0) && (*(char *)(param_1 + 0x1c4) == '\0')) {
      *(undefined4 *)(param_1 + 0x1c0) = 0;
      *(undefined1 *)(param_1 + 0x1c4) = 1;
    }
    puVar7 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar7 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x1c0),4);
      }
      else {
        thunk_FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1c0) = *puVar7;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  if ((local_5a & 0x40) != 0) {
    if (((bVar2 & 4) == 0) && (*(char *)(param_1 + 0x1f8) == '\0')) {
      *(undefined8 *)(param_1 + 0x1e0) = 0;
      *(undefined8 *)(param_1 + 0x1e8) = 0;
      *(undefined8 *)(param_1 + 0x1f0) = 0;
      *(undefined1 *)(param_1 + 0x1f8) = 1;
    }
    FUN_14480c34d(param_2,param_1 + 0x1e0);
  }
  if ((char)(byte)local_5a < '\0') {
    if (((bVar2 & 4) == 0) && (*(char *)(param_1 + 0x218) == '\0')) {
      *(undefined8 *)(param_1 + 0x200) = 0;
      *(undefined8 *)(param_1 + 0x208) = 0;
      *(undefined8 *)(param_1 + 0x210) = 0;
      *(undefined1 *)(param_1 + 0x218) = 1;
    }
    FUN_1401fb57a(param_2,param_1 + 0x200);
  }
  if ((local_5a & 0x100) != 0) {
    if (((bVar2 & 4) == 0) && (*(char *)(param_1 + 0x238) == '\0')) {
      *(undefined8 *)(param_1 + 0x220) = 0;
      *(undefined8 *)(param_1 + 0x228) = 0;
      *(undefined8 *)(param_1 + 0x230) = 0;
      *(undefined1 *)(param_1 + 0x238) = 1;
    }
    FUN_14480c34d(param_2,param_1 + 0x220);
  }
  bVar4 = local_5a._1_1_;
  if ((local_5a._1_1_ & 2) != 0) {
    (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x240);
    bVar4 = local_5a._1_1_;
  }
  if ((bVar4 & 4) != 0) {
    if (((bVar2 & 4) == 0) && (*(char *)(param_1 + 0x264) == '\0')) {
      *(undefined4 *)(param_1 + 0x260) = 0;
      *(undefined1 *)(param_1 + 0x264) = 1;
    }
    puVar7 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar7 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x260),4);
      }
      else {
        thunk_FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x260) = *puVar7;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  if ((local_5a & 0x800) != 0) {
    if (((bVar2 & 4) == 0) && (*(char *)(param_1 + 0x26c) == '\0')) {
      *(undefined4 *)(param_1 + 0x268) = 0;
      *(undefined1 *)(param_1 + 0x26c) = 1;
    }
    puVar7 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar7 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x268),4);
      }
      else {
        thunk_FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x268) = *puVar7;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  if ((local_5a & 0x1000) != 0) {
    FUN_14041e7fb(param_2,param_1 + 0x290);
  }
  if ((local_5a._1_1_ & 0x20) != 0) {
    puVar8 = (undefined4 *)(param_1 + 0x2c0);
    puVar7 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar7 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,puVar8,4);
      }
      else {
        thunk_FUN_14572512c(param_2,puVar8);
      }
    }
    else {
      *puVar8 = *puVar7;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412f252e FUN_1412f252e body=33 status=ok
// SIG undefined FUN_1412f252e(void)

void FUN_1412f252e(longlong param_1)

{
  FUN_1412f2550();
  FUN_140ebeee8(param_1 + 0x4de8);
  return;
}



// FUNCTION 1412f2550 FUN_1412f2550 body=919 status=ok
// SIG undefined FUN_1412f2550(void)

void FUN_1412f2550(longlong param_1)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  uint *puVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar3 = FUN_14487fd02();
  if (iVar3 - 1U < 2) {
    *(byte *)(param_1 + 0x61) = *(byte *)(param_1 + 0x61) | 1;
    uVar1 = *(ulonglong *)(param_1 + 0x28);
    if (uVar1 < 0xffffffff00000000) {
      plVar7 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar7 = (longlong *)0x0;
      }
      (**(code **)(*plVar7 + 0x58))(plVar7,param_1,uVar1,2);
    }
    else {
      uVar9 = (uint)uVar1;
      if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c998088)) {
        puVar5 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar5 = DAT_14c998080;
        }
        if ((*(uint *)(puVar5 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar9 & 0x1f) & 1) != 0) {
          lVar4 = DAT_14c998060 + (ulonglong)(uVar9 & 0x7fffffff) * 0x68;
          puVar6 = *(uint **)(lVar4 + 0x18);
          if (*(uint **)(lVar4 + 0x18) == (uint *)0x0) {
            puVar6 = (uint *)(lVar4 + 8);
          }
          *puVar6 = *puVar6 | 4;
          *(byte *)(lVar4 + 0x60) = *(byte *)(lVar4 + 0x60) | 1;
        }
      }
    }
    if ((((*(uint *)(param_1 + 8) & 0x10) == 0) &&
        (lVar4 = *(longlong *)(param_1 + 0x20), lVar4 != 0)) &&
       (-1 < (short)*(undefined4 *)(lVar4 + 8))) {
      uVar9 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar9 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
        if (DAT_14cae8b20 == 0) {
          local_50 = &local_30;
          local_30 = (code *)&LAB_14355090c;
          local_40 = FUN_14081d0ea;
          local_48 = FUN_14081d0ea;
          local_58 = &LAB_147b8e16d;
          local_60 = (code *)&LAB_140810a38;
          local_68 = L"Engine";
          local_70 = 0x800000000;
          local_78 = 0x10000000;
          local_80 = 8;
          local_88 = 0x3f0;
          FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
        }
        lVar4 = DAT_14cae8b20;
        if (DAT_14c951858 == 0) {
          local_50 = &local_30;
          local_30 = FUN_1449e2820;
          local_40 = FUN_14081d0ea;
          local_48 = FUN_14081d0ea;
          local_58 = &LAB_1468c5283;
          local_60 = FUN_142809da0;
          local_68 = L"Engine";
          local_70 = 0x400000000;
          local_78 = 0x10000000;
          local_80 = 8;
          local_88 = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar10 = *(longlong *)(param_1 + 0x20);
        if (lVar10 != 0) {
          iVar3 = *(int *)(lVar4 + 0x38);
          do {
            if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < iVar3) ||
               (lVar8 = lVar10,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar3 * 8) !=
               lVar4 + 0x30)) {
              lVar8 = 0;
            }
          } while ((lVar8 == 0) && (lVar10 = *(longlong *)(lVar10 + 0x20), lVar10 != 0));
          if ((lVar8 != 0) &&
             ((*(longlong *)(lVar8 + 0xc0) != 0 && ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0)
              ))) {
            lVar4 = 0;
            do {
              lVar10 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar4);
              if (*(longlong *)(lVar10 + 0x360) == *(longlong *)(lVar8 + 0xc0)) {
                if ((lVar10 != 0) && (iVar3 = *(int *)(lVar10 + 0x2b8), (longlong)iVar3 != 0)) {
                  lVar4 = *(longlong *)(lVar10 + 0x2b0);
                  lVar10 = 0;
                  do {
                    plVar7 = *(longlong **)(lVar4 + lVar10);
                    if ((plVar7 != (longlong *)0x0) &&
                       (cVar2 = (**(code **)(*plVar7 + 0x440))(plVar7,param_1), cVar2 != '\0')) {
                      plVar7 = *(longlong **)(lVar4 + lVar10);
                      (**(code **)(*plVar7 + 0x3a8))(plVar7,param_1);
                    }
                    lVar10 = lVar10 + 0x10;
                  } while ((longlong)iVar3 * 0x10 != lVar10);
                }
                break;
              }
              lVar4 = lVar4 + 8;
            } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar4);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412f28e8 FUN_1412f28e8 body=1594 status=ok
// SIG undefined FUN_1412f28e8(void)

longlong * FUN_1412f28e8(longlong param_1,longlong *param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined4 uVar19;
  undefined1 auStack_118 [40];
  longlong *local_f0;
  longlong *local_e8;
  char local_e0 [16];
  longlong *local_d0;
  undefined4 local_b8 [2];
  undefined4 local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar13 = param_3[1];
  if (lVar13 == 0) {
    uVar7 = FUN_1458c8590();
    lVar13 = FUN_14477b664(uVar7);
    param_3[1] = lVar13;
  }
  lVar8 = param_3[2];
  if (lVar8 == 0) {
    if ((lVar13 == 0) || (*param_3 == 0)) {
LAB_1412f2942:
      *param_2 = 0;
      param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_118);
    }
    plVar14 = *(longlong **)(lVar13 + 0xb8);
    if ((plVar14 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar14 + 0x108))(plVar14), cVar6 == '\0')) {
      param_3[2] = 0;
      goto LAB_1412f2942;
    }
    uVar7 = (**(code **)(*plVar14 + 0x110))(plVar14);
    lVar8 = FUN_144aff482(uVar7,param_3);
    param_3[2] = lVar8;
    if (lVar8 == 0) goto LAB_1412f2942;
  }
  local_e8 = param_2;
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    plVar14 = *(longlong **)(param_1 + 0x38);
    lVar13 = (longlong)*(int *)(param_1 + 0x40) << 4;
    do {
      puVar4 = (undefined8 *)*plVar14;
      plVar9 = (longlong *)plVar14[1];
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      plVar11 = (longlong *)*puVar4;
      lVar16 = param_3[1];
      if (lVar16 == 0) {
        uVar7 = FUN_1458c8590();
        lVar16 = FUN_14477b664(uVar7);
        param_3[1] = lVar16;
      }
      plVar10 = (longlong *)param_3[2];
      if (((plVar10 == (longlong *)0x0) &&
          (plVar10 = (longlong *)0x0, local_f0 = plVar11, lVar16 != 0)) && (*param_3 != 0)) {
        plVar11 = *(longlong **)(lVar16 + 0xb8);
        if ((plVar11 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar6 == '\0')) {
          plVar10 = (longlong *)0x0;
        }
        else {
          uVar7 = (**(code **)(*plVar11 + 0x110))(plVar11);
          plVar10 = (longlong *)FUN_144aff482(uVar7,param_3);
        }
        param_3[2] = (longlong)plVar10;
        plVar11 = local_f0;
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          local_f0 = plVar11;
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          plVar11 = local_f0;
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            plVar11 = local_f0;
          }
        }
      }
      if (plVar11 == plVar10) {
        if (plVar14 != (longlong *)0x0) {
          lVar13 = *plVar14;
          plVar14 = (longlong *)plVar14[1];
          if (plVar14 == (longlong *)0x0) goto LAB_1412f2e87;
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          LOCK();
          plVar9 = plVar14 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
          *local_e8 = lVar13;
          local_e8[1] = (longlong)plVar14;
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          plVar11 = local_e8 + 1;
          LOCK();
          plVar9 = plVar14 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
          goto LAB_1412f2a89;
        }
        break;
      }
      plVar14 = plVar14 + 2;
      lVar13 = lVar13 + -0x10;
    } while (lVar13 != 0);
  }
  lVar13 = 0;
LAB_1412f2e87:
  *local_e8 = lVar13;
  plVar11 = local_e8 + 1;
  local_e8[1] = 0;
LAB_1412f2a89:
  plVar14 = local_e8;
  if (param_4 != '\x01' || *local_e8 != 0) goto LAB_1412f2c3b;
  local_f0 = plVar11;
  plVar9 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14b42fe20;
  FUN_1458c855c(plVar9 + 2,lVar8);
  iVar3 = *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x44) < iVar3 + 1U) {
    FUN_1412f2f24((longlong *)(param_1 + 0x38),iVar3);
  }
  lVar13 = *(longlong *)(param_1 + 0x38);
  lVar16 = (longlong)iVar3 * 0x10;
  *(longlong **)(lVar13 + lVar16) = plVar9 + 2;
  *(longlong **)(lVar13 + 8 + lVar16) = plVar9;
  if (plVar9 == (longlong *)0x0) {
    bVar18 = true;
    plVar11 = (longlong *)0x0;
    lVar17 = 0x10;
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    lVar17 = *(longlong *)(lVar13 + lVar16);
    plVar11 = (longlong *)((longlong *)(lVar13 + lVar16))[1];
    bVar18 = plVar11 == (longlong *)0x0;
    if (!bVar18) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    LOCK();
    plVar10 = plVar9 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar14 = local_e8;
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        plVar14 = local_e8;
      }
    }
  }
  if ((*(longlong *)(param_1 + 8) == 0) || (*(longlong **)(param_1 + 0x10) == (longlong *)0x0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
  }
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_1456bb102(local_e0,uVar7);
  puVar15 = &local_b0;
  FUN_1448729ea(lVar8 + 0x18,puVar15,local_e0);
  uVar19 = local_b0;
  if (local_90 != 3) {
    puVar12 = &local_88;
    FUN_1400b56fe(puVar12,&local_b0,3);
    uVar19 = local_88;
    if (local_68 == 0) {
      uVar19 = 0x3f800000;
    }
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar5 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar12 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar5)(puVar12);
      plVar14 = local_e8;
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  *(undefined4 *)(lVar17 + 0x10) = uVar19;
  FUN_14020a6cc(lVar17 + 8,1);
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar5 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar15 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar5)(puVar15);
    plVar14 = local_e8;
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_d0 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  if (!bVar18) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  *plVar14 = lVar17;
  plVar9 = (longlong *)plVar14[1];
  if (plVar11 == plVar9) {
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar11 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar9 = plVar11;
        goto joined_r0x0001412f2d6e;
      }
    }
  }
  else {
    *local_f0 = (longlong)plVar11;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar9 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x0001412f2d6e:
        if (iVar3 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  if (!bVar18) {
    LOCK();
    plVar9 = plVar11 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
LAB_1412f2c3b:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar14;
}



// FUNCTION 1412f2f24 FUN_1412f2f24 body=269 status=ok
// SIG undefined FUN_1412f2f24(void)

void FUN_1412f2f24(longlong param_1,int param_2)

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



// FUNCTION 1412f3031 FUN_1412f3031 body=40 status=ok
// SIG undefined FUN_1412f3031(void)

void FUN_1412f3031(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    lVar1 = *(longlong *)(param_2 + 8 + lVar2);
    *(longlong *)(param_1 + 8 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1412f305a FUN_1412f305a body=58 status=ok
// SIG undefined FUN_1412f305a(void)

void FUN_1412f305a(longlong *param_1)

{
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_14142fefb(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1412f3094 FUN_1412f3094 body=460 status=ok
// SIG undefined FUN_1412f3094(void)

ulonglong FUN_1412f3094(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                       float param_5)

{
  undefined4 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  float fVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  float local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_5c = -1.0;
  uVar6 = 0;
  lVar3 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
  if (lVar3 != 0) {
    cVar2 = FUN_14004245a(lVar3,param_3,&local_5c,&local_58);
    if ((cVar2 == '\0') || ((fVar10 = 0.0, 0.0 < param_5 && (param_5 * param_5 < local_5c)))) {
      uVar6 = 0;
    }
    else {
      local_68 = local_48;
      local_78 = local_58;
      uStack_70 = uStack_50;
      if (0.0 < local_5c) {
        if (local_5c < 0.0) {
          fVar10 = sqrtf(local_5c);
        }
        else {
          fVar10 = SQRT(local_5c);
        }
      }
      if (param_1 == (longlong *)0x0) {
        uVar8 = 0;
        iVar7 = 0;
      }
      else {
        uVar8 = *(uint *)((longlong)param_1 + 0xc);
        if ((int)uVar8 < DAT_14c9647dc) {
          lVar3 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
        }
        else {
          lVar3 = 0;
        }
        iVar7 = *(int *)(lVar3 + 0x10);
        if (*(int *)(lVar3 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar5 = DAT_14c964868 + 1;
          bVar9 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar9) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar5);
          }
          LOCK();
          iVar7 = *(int *)(lVar3 + 0x10);
          bVar9 = iVar7 == 0;
          if (bVar9) {
            *(int *)(lVar3 + 0x10) = iVar5;
            iVar7 = 0;
          }
          UNLOCK();
          if (bVar9) {
            iVar7 = iVar5;
          }
        }
      }
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_1412f3262(param_2,iVar5);
      }
      lVar3 = *param_2;
      lVar4 = (longlong)iVar5 * 0x30;
      *(undefined8 *)(lVar3 + 0x10 + lVar4) = local_68;
      puVar1 = (undefined4 *)(lVar3 + lVar4);
      *puVar1 = (undefined4)local_78;
      puVar1[1] = local_78._4_4_;
      puVar1[2] = (undefined4)uStack_70;
      puVar1[3] = uStack_70._4_4_;
      *(float *)(lVar3 + 0x18 + lVar4) = fVar10;
      *(uint *)(lVar3 + 0x1c + lVar4) = uVar8;
      *(int *)(lVar3 + 0x20 + lVar4) = iVar7;
      *(undefined8 *)(lVar3 + 0x24 + lVar4) = 0;
      uVar6 = CONCAT71((int7)(int3)((uint)iVar5 >> 8),1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1412f3262 FUN_1412f3262 body=275 status=ok
// SIG undefined FUN_1412f3262(void)

void FUN_1412f3262(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1412f3376 FUN_1412f3376 body=679 status=ok
// SIG undefined FUN_1412f3376(void)

undefined8 * FUN_1412f3376(undefined8 *param_1)

{
  longlong *plVar1;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b5f8c60;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
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
  }
  plVar1 = DAT_14c844840;
  param_1[3] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
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
  }
  plVar1 = DAT_14c844840;
  param_1[5] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_1400b22c2(param_1 + 0x10);
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  memset(param_1 + 0x29,0,0xa1);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  return param_1;
}



// FUNCTION 1412f361e FUN_1412f361e body=314 status=ok
// SIG undefined FUN_1412f361e(void)

void FUN_1412f361e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1478c0a72;
      local_50 = &LAB_1417b2375;
      local_58 = L"Engine";
      local_60 = 0x1000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
      lVar1 = FUN_1447210f0(param_2);
      if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412f3774 FUN_1412f3774 body=2688 status=ok
// SIG undefined FUN_1412f3774(void)

ulonglong FUN_1412f3774(longlong param_1,longlong *param_2,char param_3,ulonglong param_4)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined8 unaff_RBP;
  code **ppcVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_348 [32];
  undefined4 local_328;
  undefined4 local_320;
  undefined4 local_318;
  undefined8 local_310;
  wchar_t *local_308;
  code *local_300;
  undefined1 *local_2f8;
  code **local_2f0;
  code *local_2e8;
  code *local_2e0;
  undefined1 local_2d1;
  ulonglong local_2d0;
  void *local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  undefined8 uStack_2b0;
  void *local_2a8;
  ulonglong uStack_2a0;
  undefined8 local_298;
  code *local_290;
  code *local_288;
  code *local_280;
  char local_278;
  undefined1 local_270 [160];
  code **local_1d0;
  undefined8 local_1c8;
  ulonglong local_70 [6];
  
  uVar14 = param_4 & 0xffffffff;
  uVar22 = (undefined4)param_4;
  local_70[0] = DAT_14c707940 ^ (ulonglong)auStack_348;
  FUN_1447210f0(param_2);
  lVar18 = DAT_14cae8bf8;
  bVar6 = *(byte *)((longlong)param_2 + 0x65);
  ppcVar16 = (code **)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (((bVar6 & 2) != 0) || ((*(uint *)(param_2 + 1) >> 0x1e & 1) != 0)) goto LAB_1412f3890;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    plVar12 = (longlong *)0x0;
  }
  else {
    plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x2b0);
  }
  if (plVar12 != param_2) {
    bVar1 = *(byte *)(param_1 + 0x152);
    if ((bVar1 != 1) && ((6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0)))) {
LAB_1412f38f7:
      *(byte *)((longlong)param_2 + 0x65) = bVar6 | 2;
      plVar12 = (longlong *)FUN_140083894();
      (**(code **)(*plVar12 + 0x60))(plVar12,param_2);
      FUN_1400da9ba(param_1 + 0x3f8,param_2);
      (**(code **)(*param_2 + 0x508))(param_2);
      local_2b8 = 0;
      uStack_2b0 = 0;
      FUN_14490f2e4(param_2,&local_2b8,1,0);
      if (0 < (int)uStack_2b0) {
        local_2d1 = (undefined1)uVar14;
        local_1d0 = (code **)0x0;
        local_1c8 = 0x1800000000;
        FUN_140a44582(param_2,&local_290,0);
        if (0 < (int)uStack_2b0) {
          lVar18 = 0;
          iVar7 = (int)uStack_2b0;
          do {
            lVar17 = *(longlong *)(local_2b8 + lVar18 * 8);
            if (lVar17 != 0) {
              ppcVar16 = local_1d0;
              if (local_1d0 == (code **)0x0) {
                ppcVar16 = &local_290;
              }
              lVar20 = (longlong)(int)local_1c8;
              if (lVar20 != 0) {
                uVar14 = 0;
                do {
                  FUN_1417b136c(lVar17,*(undefined8 *)((longlong)ppcVar16 + uVar14),&DAT_14cadad9c);
                  uVar14 = uVar14 + 8;
                } while (lVar20 * 8 != uVar14);
                iVar7 = (int)uStack_2b0;
              }
            }
            lVar18 = lVar18 + 1;
          } while ((int)lVar18 < iVar7);
        }
        if (local_1d0 != (code **)0x0) {
          FUN_1400020a8();
        }
        uVar22 = (undefined4)CONCAT71((int7)(uVar14 >> 8),local_2d1);
      }
      plVar12 = (longlong *)param_2[0x39];
      if ((plVar12 != (longlong *)0x0) && (plVar12[0x24] != 0)) {
        (**(code **)(*plVar12 + 0x4a0))(plVar12,&DAT_14cadad9c);
      }
      FUN_14024d9f0(param_2);
      if (param_2[0x2d] != 0) {
        (**(code **)(*param_2 + 0x440))(param_2,0);
      }
      if (DAT_14cae8b20 == 0) {
        local_2f0 = &local_290;
        local_290 = (code *)&LAB_14355090c;
        local_2e0 = FUN_14081d0ea;
        local_2e8 = FUN_14081d0ea;
        local_2f8 = &LAB_147b8e16d;
        local_300 = (code *)&LAB_140810a38;
        local_308 = L"Engine";
        local_310 = 0x800000000;
        local_318 = 0x10000000;
        local_320 = 8;
        local_328 = 0x3f0;
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar18 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        local_2f0 = &local_290;
        local_290 = FUN_1449e2820;
        local_2e0 = FUN_14081d0ea;
        local_2e8 = FUN_14081d0ea;
        local_2f8 = &LAB_1468c5283;
        local_300 = FUN_142809da0;
        local_308 = L"Engine";
        local_310 = 0x400000000;
        local_318 = 0x10000000;
        local_320 = 8;
        local_328 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar17 = param_2[4];
      if (lVar17 != 0) {
        iVar7 = *(int *)(lVar18 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x38) < iVar7) ||
             (lVar20 = lVar17,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) + (longlong)iVar7 * 8)
             != lVar18 + 0x30)) {
            lVar20 = 0;
          }
        } while ((lVar20 == 0) && (lVar17 = *(longlong *)(lVar17 + 0x20), lVar17 != 0));
        if (lVar20 != 0) {
          if (((*(longlong *)(lVar20 + 0x2e8) == 0) ||
              (lVar18 = *(longlong *)(*(longlong *)(lVar20 + 0x2e8) + 0x18), lVar18 == 0)) &&
             (lVar18 = *(longlong *)(param_1 + 0x108), lVar18 == 0)) {
LAB_1412f3b01:
            if (param_2 != (longlong *)0x0) {
LAB_1412f3b06:
              if (((DAT_14caf2188 == '\0') && (cVar5 = FUN_14008df0e(param_2), cVar5 != '\0')) &&
                 ((cVar5 = (**(code **)(*param_2 + 0x200))(param_2), cVar5 != '\0' &&
                  ((char)param_2[0xd] != '\0')))) {
                local_2d1 = (undefined1)uVar22;
                local_2c0 = param_2[3];
                local_2a8 = (void *)0x0;
                uStack_2a0 = 0;
                FUN_14005eb28(&local_2a8,0x80);
                local_290 = (code *)local_270;
                local_278 = '\0';
                local_280 = (code *)local_70;
                local_298 = *(undefined8 *)(param_2[2] + 0x18);
                local_288 = local_290;
                FUN_14005eb5c(&local_298,&local_290);
                if (local_280 <= local_288 + 2) {
                  FUN_140213274(&local_290,1);
                }
                *(undefined2 *)local_288 = 0x20;
                local_288 = local_288 + 2;
                FUN_144750bde(param_2,0,&local_290);
                FUN_1400020e8(&local_2a8,local_290,
                              (ulonglong)((longlong)local_288 - (longlong)local_290) >> 1);
                if (local_278 == '\x01') {
                  FUN_1400020a8(local_290);
                }
                uVar14 = uStack_2a0;
                lVar18 = param_2[0x39];
                if (lVar18 == 0) {
                  puVar13 = &DAT_14c8464e0;
                  uVar22 = (undefined4)DAT_14c8464f0;
                  uVar23 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                }
                else {
                  uVar22 = (undefined4)*(undefined8 *)(lVar18 + 0x270);
                  uVar23 = (undefined4)((ulonglong)*(undefined8 *)(lVar18 + 0x270) >> 0x20);
                  puVar13 = (undefined8 *)(lVar18 + 0x260);
                }
                iVar7 = (int)uStack_2a0;
                ppcVar16 = (code **)(uStack_2a0 & 0xffffffff);
                local_2c8 = local_2a8;
                uVar3 = *puVar13;
                uVar4 = puVar13[1];
                if (param_2[4] == 0) {
                  local_2d0 = 0;
                  uVar11 = 0;
                }
                else {
                  uVar15 = *(uint *)(param_2[4] + 0xc);
                  local_2d0 = (ulonglong)uVar15;
                  if ((int)uVar15 < DAT_14c9647dc) {
                    lVar18 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
                  }
                  else {
                    lVar18 = 0;
                  }
                  if (*(uint *)(lVar18 + 0x10) == 0) {
                    LOCK();
                    iVar2 = DAT_14c964868 + 1;
                    UNLOCK();
                    uVar15 = DAT_14c964868 + 1;
                    bVar21 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar2;
                    if (bVar21) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,uVar15);
                    }
                    LOCK();
                    uVar8 = *(uint *)(lVar18 + 0x10);
                    bVar21 = uVar8 == 0;
                    if (bVar21) {
                      *(uint *)(lVar18 + 0x10) = uVar15;
                      uVar8 = 0;
                    }
                    UNLOCK();
                    if (bVar21) {
                      uVar8 = uVar15;
                    }
                    uVar11 = (ulonglong)uVar8;
                  }
                  else {
                    uVar11 = (ulonglong)*(uint *)(lVar18 + 0x10);
                  }
                }
                lVar18 = param_2[2];
                if ((lVar18 != 0) && (DAT_14c950c29 != '\0')) {
                  FUN_1456cec3c(lVar18);
                }
                iVar2 = *(int *)(lVar20 + 0x3c0);
                *(uint *)(lVar20 + 0x3c0) = iVar2 + 1U;
                if (*(uint *)(lVar20 + 0x3c4) < iVar2 + 1U) {
                  FUN_1463e7c88((longlong *)(lVar20 + 0x3b8),iVar2);
                }
                lVar20 = *(longlong *)(lVar20 + 0x3b8);
                lVar19 = (longlong)iVar2 * 0x40;
                lVar17 = lVar20 + lVar19;
                *(longlong *)(lVar20 + lVar19) = local_2c0;
                *(undefined8 *)(lVar20 + 8 + lVar19) = 0;
                *(int *)(lVar20 + 0x10 + lVar19) = iVar7;
                if (iVar7 == 0) {
                  *(undefined4 *)(lVar17 + 0x14) = 0;
                }
                else {
                  puVar13 = (undefined8 *)(lVar19 + lVar20 + 8);
                  FUN_1446dd670(puVar13,uVar14 & 0xffffffff,0);
                  memcpy((void *)*puVar13,local_2c8,(longlong)iVar7 * 2);
                }
                *(undefined8 *)(lVar17 + 0x18) = uVar3;
                *(undefined8 *)(lVar17 + 0x20) = uVar4;
                *(ulonglong *)(lVar17 + 0x28) = CONCAT44(uVar23,uVar22);
                *(int *)(lVar17 + 0x30) = (int)local_2d0;
                *(int *)(lVar17 + 0x34) = (int)uVar11;
                *(longlong *)(lVar17 + 0x38) = lVar18;
                if ((lVar18 != 0) && (DAT_14c950c29 != '\0')) {
                  FUN_1456cec3c(lVar18);
                }
                uVar22 = (undefined4)CONCAT71((int7)(uVar11 >> 8),local_2d1);
                if (local_2c8 != (void *)0x0) {
                  FUN_1400020a8(local_2c8);
                }
              }
            }
          }
          else if (*(char *)(lVar18 + 0xcbe) == '\0') {
            if (*(longlong *)(lVar18 + 0xf0) == 0) goto LAB_1412f3b01;
            iVar7 = FUN_143587a6a();
            if ((param_2 == (longlong *)0x0) || (iVar7 != 1)) goto LAB_1412f3b1f;
            goto LAB_1412f3b06;
          }
        }
      }
LAB_1412f3b1f:
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c998000) && (FUN_144b3d300(&DAT_14c998000), DAT_14c998000 == -1))
      {
        FUN_145984cc0(&DAT_14c997f90);
        atexit((_func_5014 *)&LAB_142a64008);
        _Init_thread_footer(&DAT_14c998000);
      }
      if (param_2 != (longlong *)0x0) {
        uVar15 = *(uint *)((longlong)param_2 + 0xc);
        if ((int)uVar15 < DAT_14c9647dc) {
          lVar18 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
        }
        else {
          lVar18 = 0;
        }
        if (*(int *)(lVar18 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          uVar15 = DAT_14c964868 + 1;
          ppcVar16 = (code **)(ulonglong)uVar15;
          bVar21 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar21) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,ppcVar16);
          }
          LOCK();
          if (*(uint *)(lVar18 + 0x10) == 0) {
            *(uint *)(lVar18 + 0x10) = uVar15;
          }
          UNLOCK();
        }
      }
      FUN_14098f4de(&DAT_14c997f90);
      if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
        lVar18 = 0;
        do {
          lVar17 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar18);
          if (*(longlong *)(lVar17 + 0x360) == param_1) {
            if ((lVar17 != 0) && (iVar7 = *(int *)(lVar17 + 0x2b8), (longlong)iVar7 != 0)) {
              lVar18 = *(longlong *)(lVar17 + 0x2b0);
              lVar17 = 0;
              do {
                plVar12 = *(longlong **)(lVar18 + lVar17);
                if ((plVar12 != (longlong *)0x0) &&
                   (cVar5 = (**(code **)(*plVar12 + 0x440))(plVar12,param_2), cVar5 != '\0')) {
                  plVar12 = *(longlong **)(lVar18 + lVar17);
                  (**(code **)(*plVar12 + 0x388))(plVar12,param_2,0);
                }
                lVar17 = lVar17 + 0x10;
              } while ((longlong)iVar7 * 0x10 != lVar17);
            }
            break;
          }
          lVar18 = lVar18 + 8;
        } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar18);
      }
      FUN_1448ff2ee(param_1,param_2,uVar22);
      FUN_1400da9ba(param_1 + 0x440,param_2);
      lVar18 = 0;
      (**(code **)(*param_2 + 0x4c0))(param_2,0);
      FUN_144757f48(param_2,0x40000000);
      uVar15 = *(uint *)((longlong)param_2 + 0xc);
      if ((int)uVar15 < DAT_14c9647dc) {
        lVar18 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
      }
      do {
        uVar15 = *(uint *)(lVar18 + 8);
        if ((uVar15 >> 0x15 & 1) != 0) break;
        LOCK();
        bVar21 = uVar15 == *(uint *)(lVar18 + 8);
        if (bVar21) {
          *(uint *)(lVar18 + 8) = uVar15 | 0x200000;
        }
        UNLOCK();
      } while (!bVar21);
      FUN_14282b7b8(param_2);
      ppcVar16 = (code **)CONCAT71((int7)((ulonglong)ppcVar16 >> 8),1);
      FUN_1417b2844(param_2,1);
      FUN_144958ee8(param_2,0,1);
      if (local_2b8 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1412f3890;
    }
    cVar5 = (char)param_2[0x2f];
    if ((cVar5 == '\x03' || param_3 != '\0') ||
       ((cVar5 == '\0' || ((*(byte *)(param_2 + 0xc) & 1) != 0)))) {
      iVar7 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (iVar7 == 0x40000002) {
        uVar11 = 0;
      }
      else {
        bVar21 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar7 != 2)) {
          if (iVar7 == 1) {
            DVar9 = FUN_140ad26c0();
            DVar10 = GetCurrentThreadId();
            bVar21 = DVar9 == DVar10;
          }
          else {
            bVar21 = false;
          }
        }
        uVar11 = (ulonglong)(bVar21 ^ 1);
      }
      if (((cVar5 != '\0') || (*(int *)(lVar18 + uVar11 * 4) != 0)) &&
         (cVar5 = (**(code **)(*param_2 + 0x4a0))(param_2), cVar5 == '\0')) {
        bVar6 = *(byte *)((longlong)param_2 + 0x65);
        if ((bVar6 & 0x18) == 8) {
          *(byte *)((longlong)param_2 + 0x65) = bVar6 | 4;
          goto LAB_1412f3890;
        }
        goto LAB_1412f38f7;
      }
    }
  }
  ppcVar16 = (code **)0x0;
LAB_1412f3890:
  if ((local_70[0] ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)ppcVar16 & 0xffffffff;
}



// FUNCTION 1412f41f5 FUN_1412f41f5 body=43 status=ok
// SIG undefined FUN_1412f41f5(void)

void FUN_1412f41f5(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 7;
  }
  return;
}



// FUNCTION 1412f4220 FUN_1412f4220 body=377 status=ok
// SIG undefined FUN_1412f4220(void)

void FUN_1412f4220(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  void *_Dst;
  undefined1 auStack_58 [44];
  undefined1 local_2c [12];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1;
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
      if ((*(uint *)(lVar1 + 8) & 0x30) != 0) goto LAB_1412f42fe;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
    bVar2 = DAT_14c8442b8;
    if (DAT_14c872bf0 == '\x01') {
      if (DAT_14c872bf1 != '\x01') goto LAB_1412f42fe;
      bVar2 = DAT_14c8442b8 & 1;
    }
    if (bVar2 == 0) {
      _Dst = (void *)FUN_14001cc68(0xc0);
      memset(_Dst,0,0xc0);
      FUN_1458c91bc(_Dst);
      *(void **)(param_1 + 0x1c0) = _Dst;
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2d0))
                (*(longlong **)(param_1 + 0x28),local_2c);
      FUN_1412f439a(_Dst,local_2c);
      FUN_140308182(*(undefined8 *)(param_1 + 0x1c0),0);
    }
  }
LAB_1412f42fe:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412f439a FUN_1412f439a body=1256 status=ok
// SIG undefined FUN_1412f439a(void)

void FUN_1412f439a(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = *(undefined4 *)(param_2 + 1);
  local_78 = *param_2;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_1412f43ea;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1412f43ef;
      goto LAB_1412f4425;
    }
  }
  else {
LAB_1412f43ea:
    if (iVar6 != 0x10) {
LAB_1412f4425:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_1412f43ef;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_1412f43ef;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_1412f4591;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_1437009ee);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_1412f4591:
          puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar15 + 0x18);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar15 + 0x18);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_1412f4611;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_1412f4611:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar15,0);
        *puVar15 = &PTR_FUN_14aab0280;
        puVar15[0x15] = param_1;
        puVar15[0x16] = local_78;
        *(undefined4 *)(puVar15 + 0x17) = local_70;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
        }
        puVar15[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar15[9] = puVar15;
        puVar15[10] = puVar15;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar15[0xf] = uVar11;
        puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar6;
        if (puVar15 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar15);
          LOCK();
          piVar1 = (int *)(puVar15 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar15)(puVar15,1);
          }
        }
      }
      else {
        local_88 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14aab01f0;
        local_38 = local_78;
        local_30 = local_70;
        local_68[0] = &LAB_143701ee8;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"FTextureRenderResources_UpdateGlobalVolumeResolution",
                      &DAT_14cb09094);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_1412f44cc;
    }
  }
LAB_1412f43ef:
  *(undefined4 *)(param_1 + 0x88) = local_70;
  *(undefined8 *)(param_1 + 0x80) = local_78;
LAB_1412f44cc:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412f4884 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412f488a FUN_1412f488a body=31 status=ok
// SIG undefined FUN_1412f488a(void)

undefined8 FUN_1412f488a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1412f48aa FUN_1412f48aa body=31 status=ok
// SIG undefined FUN_1412f48aa(void)

undefined8 FUN_1412f48aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1412f48ca FUN_1412f48ca body=971 status=ok
// SIG undefined FUN_1412f48ca(void)

ulonglong FUN_1412f48ca(longlong param_1,int param_2,char param_3,char param_4)

{
  void *pvVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulonglong unaff_RBP;
  undefined7 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  uint local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar5 == '\0') goto LAB_1412f49b4;
  }
  uVar8 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      local_38[0] = *(uint *)(*(longlong *)(param_1 + 0x68) + 8 + (longlong)param_2 * 0xc);
      local_40 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc);
      FUN_140d0e176(param_1 + 0x18);
      FUN_1412f4c96(param_1 + 0x68,param_2);
      uVar6 = *(uint *)(param_1 + 0xa8);
      lVar3 = *(longlong *)(param_1 + 0xa0);
      uVar12 = 0;
      if (0 < (int)uVar6) {
        uVar12 = 0;
        uVar11 = uVar6;
        do {
          uVar10 = (uVar11 >> 1) + uVar12;
          if (*(int *)(lVar3 + (ulonglong)uVar10 * 8) < param_2) {
            uVar12 = uVar10 + (uVar11 & 1);
          }
          bVar4 = 1 < uVar11;
          uVar11 = uVar11 >> 1;
        } while (bVar4);
      }
      if (((int)uVar12 < (int)uVar6) && (*(int *)(lVar3 + (ulonglong)uVar12 * 8) <= param_2)) {
        if (~uVar12 + uVar6 != 0) {
          pvVar1 = (void *)(lVar3 + (ulonglong)uVar12 * 8);
          memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)(int)(~uVar12 + uVar6) << 3);
          uVar6 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar6 - 1;
LAB_1412f4c3a:
        FUN_1476b4220(param_1 + 0xa0);
      }
LAB_1412f499c:
      if ((local_38[0] & 0x1000000) != 0) {
        FUN_1412f4d06(&local_40,local_38);
      }
      unaff_RBP = 0;
      goto LAB_1412f49b4;
    }
    unaff_RBP = CONCAT71(uVar8,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0xb + (longlong)param_2 * 0xc) & 1) == 0)
    goto LAB_1412f49b4;
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc);
  }
  else {
    uVar6 = *(uint *)(param_1 + 0xa8);
    lVar3 = *(longlong *)(param_1 + 0xa0);
    uVar12 = 0;
    if (0 < (int)uVar6) {
      uVar12 = 0;
      uVar9 = (ulonglong)uVar6;
      uVar11 = uVar6;
      do {
        uVar9 = uVar9 >> 1;
        uVar10 = (uint)uVar9 + uVar12;
        if (*(int *)(lVar3 + (ulonglong)uVar10 * 8) < param_2) {
          uVar12 = uVar10 + (uVar11 & 1);
        }
        bVar4 = 1 < uVar11;
        uVar11 = (uint)uVar9;
      } while (bVar4);
    }
    if ((((int)uVar12 < (int)uVar6) && (*(int *)(lVar3 + (ulonglong)uVar12 * 8) <= param_2)) &&
       (lVar3 + (ulonglong)uVar12 * 8 != -4)) {
      FUN_1412f4d06((longlong)param_2 * 0xc + *(longlong *)(param_1 + 0x68));
      uVar6 = *(uint *)(param_1 + 0xa8);
      lVar3 = *(longlong *)(param_1 + 0xa0);
      uVar11 = 0;
      uVar12 = uVar6;
      if (0 < (int)uVar6) {
        do {
          uVar10 = (uVar12 >> 1) + uVar11;
          if (*(int *)(lVar3 + (ulonglong)uVar10 * 8) < param_2) {
            uVar11 = uVar10 + (uVar12 & 1);
          }
          bVar4 = 1 < uVar12;
          uVar12 = uVar12 >> 1;
        } while (bVar4);
      }
      unaff_RBP = CONCAT71(uVar8,1);
      if (((int)uVar11 < (int)uVar6) && (*(int *)(lVar3 + (ulonglong)uVar11 * 8) <= param_2)) {
        if (~uVar11 + uVar6 != 0) {
          pvVar1 = (void *)(lVar3 + (ulonglong)uVar11 * 8);
          memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)(int)(~uVar11 + uVar6) << 3);
          uVar6 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar6 - 1;
        FUN_1476b4220(param_1 + 0xa0);
      }
      goto LAB_1412f49b4;
    }
    unaff_RBP = CONCAT71(uVar8,1);
    if (param_4 == '\0') {
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc);
      if ((*(byte *)((longlong)puVar7 + 0xb) & 2) == 0) {
        local_38[0] = *(uint *)(puVar7 + 1);
        local_40 = *puVar7;
        FUN_140d0e176(param_1 + 0x18);
        FUN_1412f4c96(param_1 + 0x68,param_2);
        uVar6 = *(uint *)(param_1 + 0xa8);
        lVar3 = *(longlong *)(param_1 + 0xa0);
        uVar12 = 0;
        if (0 < (int)uVar6) {
          uVar12 = 0;
          uVar11 = uVar6;
          do {
            uVar10 = (uVar11 >> 1) + uVar12;
            if (*(int *)(lVar3 + (ulonglong)uVar10 * 8) < param_2) {
              uVar12 = uVar10 + (uVar11 & 1);
            }
            bVar4 = 1 < uVar11;
            uVar11 = uVar11 >> 1;
          } while (bVar4);
        }
        if (((int)uVar12 < (int)uVar6) && (*(int *)(lVar3 + (ulonglong)uVar12 * 8) <= param_2)) {
          if (~uVar12 + uVar6 != 0) {
            pvVar1 = (void *)(lVar3 + (ulonglong)uVar12 * 8);
            memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)(int)(~uVar12 + uVar6) << 3);
            uVar6 = *(uint *)(param_1 + 0xa8);
          }
          *(uint *)(param_1 + 0xa8) = uVar6 - 1;
          goto LAB_1412f4c3a;
        }
        goto LAB_1412f499c;
      }
      if ((*(byte *)((longlong)puVar7 + 0xb) & 1) == 0) goto LAB_1412f49b4;
    }
    else {
      if (param_4 != '\x01') goto LAB_1412f49b4;
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0xb + (longlong)param_2 * 0xc);
      if ((bVar2 & 1) == 0) goto LAB_1412f49b4;
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc);
      *(byte *)((longlong)puVar7 + 0xb) = bVar2 | 2;
    }
  }
  FUN_1412f4d06(puVar7,puVar7 + 1);
LAB_1412f49b4:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 1412f4c96 FUN_1412f4c96 body=112 status=ok
// SIG undefined FUN_1412f4c96(void)

void FUN_1412f4c96(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0xc) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0xc);
  *puVar1 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1412f4d06 FUN_1412f4d06 body=603 status=ok
// SIG undefined FUN_1412f4d06(void)

void FUN_1412f4d06(uint *param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
      && ((plVar5 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar5 != (longlong *)0x0 && (*(uint *)(plVar5 + 2) == param_1[1])))) &&
     (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
      (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)))) {
    if (DAT_14cac9ca8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1478c0a72;
      local_50 = &LAB_1417b2375;
      local_58 = L"Engine";
      local_60 = 0x1000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    lVar3 = plVar5[2];
    iVar4 = *(int *)(lVar3 + 0x38);
    if (*(int *)(DAT_14cac9ca8 + 0x38) <= iVar4) {
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
          == DAT_14cac9ca8 + 0x30) {
        (**(code **)(*plVar5 + 0x330))
                  (plVar5,CONCAT71((int7)((ulonglong)(DAT_14cac9ca8 + 0x30) >> 8),*param_2));
        goto LAB_1412f4de6;
      }
    }
    if (DAT_14cac7648 == 0) {
      local_40 = &local_20;
      local_20 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_143242436;
      local_48 = &LAB_14789ef1f;
      local_50 = &LAB_1417b008f;
      local_58 = L"Engine";
      local_60 = 0x8000000000;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x2b0;
      FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
      lVar3 = plVar5[2];
      iVar4 = *(int *)(lVar3 + 0x38);
    }
    iVar2 = *(int *)(DAT_14cac7648 + 0x38);
    if ((iVar2 <= iVar4) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) == DAT_14cac7648 + 0x30)) {
      FUN_1449e3cec(plVar5,CONCAT71((int7)((ulonglong)(DAT_14cac7648 + 0x30) >> 8),*param_2),
                    CONCAT71((int7)(int3)((uint)iVar2 >> 8),1));
      FUN_14045627c(plVar5,param_2[2],1);
    }
  }
LAB_1412f4de6:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412f4f62 FUN_1412f4f62 body=154 status=ok
// SIG undefined FUN_1412f4f62(void)

longlong FUN_1412f4f62(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_1412f4f8e;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_1412f4f8e:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_1412f4ffc(param_1,param_2);
  return param_1;
}



// FUNCTION 1412f4ffc FUN_1412f4ffc body=325 status=ok
// SIG undefined FUN_1412f4ffc(void)

undefined8 * FUN_1412f4ffc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *_Dst;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1405b6d9a(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14021b4e8(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar3 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar5 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar5;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      puVar4 = (undefined8 *)param_2[4];
      if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
        puVar4 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[4];
      }
      memcpy(_Dst,puVar4,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      puVar7 = (undefined4 *)*param_1;
      puVar8 = (undefined4 *)*param_2;
      uVar6 = 0;
      do {
        puVar4 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar4 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *puVar7 = *puVar8;
          puVar7[1] = puVar8[1];
        }
        else {
          FUN_14878080e(puVar7,puVar8);
          *(undefined8 *)(puVar7 + 0x10) = *(undefined8 *)(puVar8 + 0x10);
        }
        uVar6 = uVar6 + 1;
        puVar8 = puVar8 + 0x12;
        puVar7 = puVar7 + 0x12;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 1412f5142 FUN_1412f5142 body=378 status=ok
// SIG undefined FUN_1412f5142(void)

void FUN_1412f5142(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x18 + (longlong)iStack_54 * 0x28);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412f52be FUN_1412f52be body=378 status=ok
// SIG undefined FUN_1412f52be(void)

void FUN_1412f52be(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x68;
      *(undefined4 *)(lVar2 + 0x58 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x50 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_14654e288(lVar2 + lVar3 + 0x10);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14059f004(param_1,0);
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



// FUNCTION 1412f5456 FUN_1412f5456 body=533 status=ok
// SIG undefined FUN_1412f5456(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1412f5456(longlong param_1)

{
  void *_Src;
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150 [2];
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  void *local_130;
  int local_128;
  undefined4 local_124;
  undefined8 local_120 [31];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*(longlong **)(param_1 + 0x408) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x408) + 0x2c0))();
    *(undefined8 *)(param_1 + 0x408) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 1000);
  if (((lVar2 == 0) || (*(char *)(lVar2 + 0x28) != '\x01')) ||
     (*(char *)(param_1 + 0x410) != '\x01')) goto LAB_1412f5499;
  local_150[1] = 0;
  local_140 = *(undefined4 *)(lVar2 + 0x30);
  uStack_13c = *(undefined4 *)(lVar2 + 0x34);
  uStack_138 = *(undefined4 *)(lVar2 + 0x38);
  uStack_134 = *(undefined4 *)(lVar2 + 0x3c);
  local_130 = (void *)0x0;
  local_128 = *(int *)(lVar2 + 0x48);
  lVar4 = (longlong)local_128;
  _Src = *(void **)(lVar2 + 0x40);
  if (lVar4 == 0) {
    local_124 = 0;
  }
  else {
    FUN_1446dd670(&local_130,local_128,0);
    memcpy(local_130,_Src,lVar4 * 2);
  }
  FUN_1413e28b0(local_120);
  FUN_1458ca2cc(local_120,local_150,local_150 + 1);
  FUN_140f77756(local_120);
  if (((local_150[0] != 0) && (lVar2 = FUN_145991796(), lVar2 != 0)) &&
     ((*(int *)(lVar2 + 0x38) <= *(int *)(local_150[0] + 0x38) &&
      (*(longlong *)(*(longlong *)(local_150[0] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30)))) {
    local_158 = local_150[0];
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(local_150[0]);
    }
    uVar3 = FUN_1447210f0(param_1);
    lVar2 = FUN_143377f0d(uVar3,&local_158);
    if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
      *(longlong *)(param_1 + 0x408) = lVar2;
      if (lVar2 == 0) goto LAB_1412f5529;
    }
    else {
      FUN_1456cec3c(lVar2);
      *(longlong *)(param_1 + 0x408) = lVar2;
    }
    FUN_14781ecd0(*(undefined8 *)(param_1 + 1000));
    plVar1 = *(longlong **)(param_1 + 0x408);
    local_120[0] = *(undefined8 *)(*(longlong *)(param_1 + 1000) + 0x50);
    uVar3 = FUN_14477b072(plVar1,DAT_14cabccd0);
    (**(code **)(*plVar1 + 0x248))(plVar1,uVar3,local_120);
    FUN_14781f038(*(undefined8 *)(param_1 + 0x408),param_1);
    FUN_147792a26(*(undefined8 *)(param_1 + 0x408),0);
  }
LAB_1412f5529:
  if (local_130 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1412f5499:
  if ((local_28 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412f566c FUN_1412f566c body=305 status=ok
// SIG undefined FUN_1412f566c(void)

void FUN_1412f566c(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_1412f5706;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  iVar3 = 0;
  if ((int)param_2[1] == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    param_2 = (longlong *)*param_2;
    puVar2 = (undefined8 *)0x0;
    iVar3 = 0;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_30);
      puVar2 = local_30;
      iVar3 = local_28;
    }
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_1412f56df:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_1412f56df;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_1412f5706;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1412f5706:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412f579e FUN_1412f579e body=185 status=ok
// SIG undefined FUN_1412f579e(void)

undefined4 FUN_1412f579e(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 1) = 0;
  FUN_1412f566c(puVar2,param_2);
  *(undefined8 **)(param_1 + 0x28) = puVar2;
  local_2c = 0;
  uVar1 = vx_issue_request3(param_1);
  if ((int)param_2[1] != 0) {
    puVar2 = (undefined8 *)*param_2;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1412f582f;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_2,0,0,0x10);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
LAB_1412f582f:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412f5858 FUN_1412f5858 body=1907 status=ok
// SIG undefined FUN_1412f5858(void)

void FUN_1412f5858(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  int local_98;
  undefined8 local_90;
  int local_88;
  longlong local_80;
  char local_78;
  undefined7 uStack_77;
  int local_70;
  longlong *local_68;
  longlong local_60;
  undefined4 local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar9 = param_1[4];
  }
  else {
    lVar9 = 0;
  }
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  local_98 = 0;
  lVar6 = param_1[0x34];
  if (lVar6 == 0) {
    lVar6 = FUN_1402d1dc0(param_1[0xf] + 0x60);
  }
  plVar7 = (longlong *)FUN_140b51ce6(param_1[0xf] + 0x88);
  if (plVar7 != (longlong *)0x0) {
    lVar6 = (**(code **)(*plVar7 + 0x18))(plVar7,(char)param_1[0x36],&local_90);
  }
  lVar8 = param_1[0x35];
  if (lVar8 == 0) {
    lVar8 = FUN_1402d1dc0(param_1[0xf] + 0xb0);
  }
  plVar7 = (longlong *)FUN_140b51ce6(param_1[0xf] + 0xd8);
  if (plVar7 != (longlong *)0x0) {
    lVar8 = (**(code **)(*plVar7 + 0x18))
                      (plVar7,*(undefined1 *)((longlong)param_1 + 0x1b1),&local_a0);
  }
  if ((*(int *)((longlong)param_1 + 0x24c) != 0) && (*(char *)(lVar9 + 0x178) != '\x03')) {
    if ((longlong)*(int *)(lVar9 + 0x398) != 0) {
      lVar11 = 0;
      do {
        lVar13 = *(longlong *)(*(longlong *)(lVar9 + 0x390) + lVar11);
        if ((lVar13 != 0) && (*(int *)(lVar13 + 0x60) == *(int *)((longlong)param_1 + 0x24c)))
        goto LAB_1412f5d90;
        lVar11 = lVar11 + 8;
      } while ((longlong)*(int *)(lVar9 + 0x398) * 8 != lVar11);
    }
    lVar13 = 0;
LAB_1412f5d90:
    FUN_1488dfed2(param_1,lVar13);
  }
  iVar5 = FUN_14487fd02(lVar9);
  if (iVar5 != 1) {
    if (((*(byte *)((longlong)param_1 + 0x2ea) & 1) == 0) || (param_1[0x19] == 0)) {
LAB_1412f594b:
      bVar2 = false;
    }
    else {
      plVar7 = (longlong *)FUN_140f5ffbc(param_1);
      if ((plVar7 == (longlong *)0x0) ||
         ((cVar4 = FUN_1449ce97a(plVar7), cVar4 == '\0' ||
          (cVar4 = (**(code **)(*plVar7 + 0x700))(plVar7), uVar3 = DAT_14cb0d2b0, cVar4 == '\0'))))
      {
        *(byte *)((longlong)param_1 + 0x2ea) = *(byte *)((longlong)param_1 + 0x2ea) & 0xfe;
        goto LAB_1412f594b;
      }
      uVar10 = (**(code **)(*param_1 + 0x180))(param_1);
      iVar5 = FUN_1458cac74(uVar3,uVar10);
      bVar2 = 1 < iVar5;
      lVar11 = lVar6;
      if (lVar8 != 0) {
        lVar11 = lVar8;
      }
      lVar11 = FUN_1412f5fcc(lVar9,lVar11);
      if ((lVar11 == 0) || (DAT_14c950c29 == '\0')) {
        param_1[0x10] = lVar11;
        if (lVar11 != 0) goto LAB_1412f5c85;
      }
      else {
        FUN_1456cec3c(lVar11);
        param_1[0x10] = lVar11;
LAB_1412f5c85:
        if ((lVar8 == 0) || (local_98 < 1)) {
          if (local_88 != 0) {
            local_78 = '\0';
            local_50[0] = 0;
            FUN_1456bb102(&local_78,param_1[0x31]);
            lVar8 = param_1[0x10];
            puVar14 = &local_90;
            goto LAB_1412f5ebb;
          }
        }
        else {
          local_78 = '\0';
          local_50[0] = 0;
          FUN_1456bb102(&local_78,param_1[0x31]);
          lVar8 = param_1[0x10];
          puVar14 = &local_a0;
LAB_1412f5ebb:
          FUN_140e99737(lVar8,puVar14,&local_78);
          FUN_144a5ac3a(&local_78);
        }
        if (0 < *(int *)(param_1[0xf] + 0xa8)) {
          local_78 = '\0';
          local_50[0] = 0;
          FUN_1456bb102(&local_78,param_1[0x31]);
          local_b8 = *(undefined8 *)(param_1[0xf] + 0xa0);
          local_b0 = *(undefined4 *)(param_1[0xf] + 0xa8);
          FUN_140e99737(param_1[0x10],&local_b8,&local_78);
          FUN_144a5ac3a(&local_78);
        }
        cVar4 = (**(code **)(*plVar7 + 0x798))(plVar7);
        *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) & 0xfb | cVar4 << 2;
        FUN_140c056bc(param_1[0x10],1 < iVar5);
        FUN_140e996a4(param_1[0x10],param_1[0x31]);
      }
    }
    if (param_1[0x10] == 0) {
      lVar9 = FUN_1412f5fcc(lVar9,lVar6);
      if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar9);
      }
      param_1[0x10] = lVar9;
      if (local_88 != 0) {
        local_78 = '\0';
        local_50[0] = 0;
        FUN_1456bb102(&local_78,param_1[0x31]);
        FUN_140e99737(param_1[0x10],&local_90,&local_78);
        FUN_1448173f8(local_50);
        if ((local_78 == '\x03') && (local_68 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_68 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_68 + 0x10))();
          }
        }
      }
      if (0 < *(int *)(param_1[0xf] + 0xa8)) {
        local_78 = '\0';
        local_50[0] = 0;
        FUN_1456bb102(&local_78,param_1[0x31]);
        local_b8 = *(undefined8 *)(param_1[0xf] + 0xa0);
        local_b0 = *(undefined4 *)(param_1[0xf] + 0xa8);
        FUN_140e99737(param_1[0x10],&local_b8,&local_78);
        FUN_1448173f8(local_50);
        if ((local_78 == '\x03') && (local_68 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_68 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_68 + 0x10))();
          }
        }
      }
LAB_1412f59fd:
      if (param_1[0x10] == 0) goto LAB_1412f5aa3;
    }
    else if (bVar2) {
      lVar9 = FUN_1412f5fcc(lVar9,lVar6);
      if ((lVar9 == 0) || (DAT_14c950c29 == '\0')) {
        param_1[0x11] = lVar9;
        if (lVar9 == 0) goto LAB_1412f59fd;
      }
      else {
        FUN_1456cec3c(lVar9);
        param_1[0x11] = lVar9;
      }
      if (local_88 != 0) {
        local_78 = '\0';
        local_50[0] = 0;
        FUN_1456bb102(&local_78,param_1[0x31]);
        FUN_140e99737(param_1[0x11],&local_90,&local_78);
        FUN_144a5ac3a(&local_78);
      }
      if (0 < *(int *)(param_1[0xf] + 0xf8)) {
        local_78 = '\0';
        local_50[0] = 0;
        FUN_1456bb102(&local_78,param_1[0x31]);
        local_b8 = *(undefined8 *)(param_1[0xf] + 0xf0);
        local_b0 = *(undefined4 *)(param_1[0xf] + 0xf8);
        FUN_140e99737(param_1[0x10],&local_b8,&local_78);
        FUN_144a5ac3a(&local_78);
      }
      FUN_140c0563c(param_1[0x11],1);
      FUN_140e996a4(param_1[0x11],param_1[0x31]);
      goto LAB_1412f59fd;
    }
    lVar9 = param_1[0x43];
    if (param_1[0x5f] == lVar9) {
      iVar5 = (int)param_1[0x44];
      iVar12 = (int)param_1[0x60];
      if ((int)param_1[0x60] != iVar5) goto LAB_1412f5a33;
    }
    else {
      iVar5 = (int)param_1[0x44];
LAB_1412f5a33:
      param_1[0x5f] = lVar9;
      *(int *)(param_1 + 0x60) = iVar5;
      param_1[0x61] = 0;
      iVar12 = iVar5;
    }
    if ((lVar9 == 0) || (0xfffffffd < iVar12 - 1U)) {
      lVar6 = *(longlong *)(param_1[0xf] + 0x110);
      if ((lVar6 != 0) && (iVar5 = *(int *)(param_1[0xf] + 0x118), iVar5 - 1U < 0xfffffffe)) {
        if (iVar5 == 0x3d418293) {
          local_b8 = 0;
          local_b0 = (undefined4)param_1[0x46];
          local_80 = param_1[0x38];
          FUN_1446dcdd4(&local_78);
          if (DAT_14cb77da0 == 0) {
            local_a8 = 0;
          }
          else {
            local_a8 = FUN_144837462(DAT_14cb77da0,&local_78);
          }
          if (local_60 != 0) {
            FUN_1400020a8();
          }
          FUN_141125464(param_1[0xf] + 0x110,&local_78,&local_b8);
          if ((param_1[0x5f] != CONCAT71(uStack_77,local_78)) || ((int)param_1[0x60] != local_70)) {
            param_1[0x5f] = CONCAT71(uStack_77,local_78);
            *(int *)(param_1 + 0x60) = local_70;
            param_1[0x61] = 0;
          }
        }
        else {
          if (lVar9 != lVar6) {
            param_1[0x61] = 0;
          }
          param_1[0x5f] = lVar6;
        }
      }
    }
  }
  *(byte *)((longlong)param_1 + 0x311) = *(byte *)((longlong)param_1 + 0x311) | 8;
LAB_1412f5aa3:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412f5fcc FUN_1412f5fcc body=1608 status=ok
// SIG undefined FUN_1412f5fcc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1412f5fcc(longlong param_1,longlong param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  float fVar16;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  uint local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  code *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((param_2 != 0) && (iVar3 = FUN_14487fd02(), iVar3 != 1)) {
    lVar5 = FUN_1447210f0(param_1);
    if (0 < *(int *)(param_1 + 0x3f0)) {
      fVar16 = (float)(*(double *)(lVar5 + 0x6d0) - (double)_DAT_14c7639a8);
      lVar6 = *(longlong *)(param_1 + 1000);
      uVar10 = 0xffffffff;
      lVar13 = 0;
      uVar12 = 0;
      do {
        plVar8 = *(longlong **)(lVar6 + lVar13);
        if ((plVar8 != (longlong *)0x0) && ((*(uint *)(plVar8 + 1) >> 0x1e & 1) == 0)) {
          lVar6 = (**(code **)(*plVar8 + 0xa70))(plVar8);
          if (lVar6 == param_2) {
            iVar3 = *(int *)(param_1 + 0x3f0);
            if (iVar3 + -1 != (int)uVar12) {
              iVar9 = (iVar3 + -1) - (int)uVar12;
              iVar11 = 1;
              if (iVar9 < 1) {
                iVar11 = iVar9;
              }
              memmove((void *)(lVar13 + *(longlong *)(param_1 + 1000)),
                      (void *)((longlong)(iVar3 - iVar11) * 0x10 + *(longlong *)(param_1 + 1000)),
                      (longlong)iVar11 << 4);
              iVar3 = *(int *)(param_1 + 0x3f0);
            }
            *(int *)(param_1 + 0x3f0) = iVar3 + -1;
            FUN_1412f6616(plVar8,&DAT_14c8464e0,&DAT_14c8464f8);
            goto LAB_1412f611d;
          }
          lVar6 = *(longlong *)(param_1 + 1000);
          fVar1 = *(float *)(lVar6 + 8 + lVar13);
          if (fVar1 < fVar16) {
            uVar10 = uVar12 & 0xffffffff;
            fVar16 = fVar1;
          }
        }
        uVar12 = uVar12 + 1;
        iVar3 = *(int *)(param_1 + 0x3f0);
        lVar13 = lVar13 + 0x10;
      } while ((longlong)uVar12 < (longlong)iVar3);
      uVar4 = (uint)uVar10;
      if (uVar4 != 0xffffffff) {
        iVar11 = ~uVar4 + iVar3;
        if (iVar11 != 0) {
          iVar9 = 1;
          if (iVar11 < 1) {
            iVar9 = iVar11;
          }
          memmove((void *)((longlong)(int)uVar4 * 0x10 + lVar6),
                  (void *)((longlong)(iVar3 - iVar9) * 0x10 + lVar6),(longlong)iVar9 << 4);
          iVar3 = *(int *)(param_1 + 0x3f0);
        }
        *(int *)(param_1 + 0x3f0) = iVar3 + -1;
      }
    }
    uVar7 = FUN_14058439c();
    local_b8 = 0;
    uStack_b0 = 0;
    local_c0 = local_c0 & 0xffffff00;
    local_c8 = 0;
    plVar8 = (longlong *)FUN_140584627(param_1,uVar7,0,0);
    plVar14 = (longlong *)0x0;
    if (plVar8 == (longlong *)0x0) goto LAB_1412f6216;
    lVar13 = FUN_140288b94();
    lVar6 = plVar8[2];
    iVar3 = *(int *)(lVar6 + 0x38);
    if ((*(int *)(lVar13 + 0x38) <= iVar3) &&
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) ==
        lVar13 + 0x30)) {
      if (DAT_14cb39ca0 == 0) {
        local_90 = &local_70;
        local_70 = FUN_144a7958c;
        local_80 = FUN_14081d0ea;
        local_88 = &LAB_14638c6c0;
        local_98 = &LAB_14811044c;
        local_a0 = &LAB_1407f5cf8;
        local_a8 = L"Engine";
        uStack_b0 = 0;
        local_b8 = CONCAT44(local_b8._4_4_,0x10000004);
        local_c0 = 0x10;
        local_c8 = CONCAT44(local_c8._4_4_,0x8e0);
        FUN_14081cfa3(L"/Script/Niagara",L"NiagaraComponent",&DAT_14cb39ca0,FUN_14646d392);
        lVar6 = plVar8[2];
        iVar3 = *(int *)(lVar6 + 0x38);
      }
      if ((*(int *)(DAT_14cb39ca0 + 0x38) <= iVar3) &&
         (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cb39ca0 + 0x38) * 8)
          == DAT_14cb39ca0 + 0x30)) {
        *(undefined1 *)(plVar8 + 0xce) = 1;
        if (plVar8[0xec] != 0) {
          FUN_1481f517c(*(undefined8 *)(plVar8[0xec] + 0x30),
                        CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1));
        }
        *(undefined1 *)(plVar8 + 9) = 6;
      }
LAB_1412f611d:
      lVar6 = (**(code **)(*plVar8 + 0xa70))(plVar8);
      if (lVar6 == param_2) {
        if (DAT_14cb39ca0 == 0) {
          local_90 = &local_70;
          local_70 = FUN_144a7958c;
          local_80 = FUN_14081d0ea;
          local_88 = &LAB_14638c6c0;
          local_98 = &LAB_14811044c;
          local_a0 = &LAB_1407f5cf8;
          local_a8 = L"Engine";
          uStack_b0 = 0;
          local_b8 = CONCAT44(local_b8._4_4_,0x10000004);
          local_c0 = 0x10;
          local_c8 = CONCAT44(local_c8._4_4_,0x8e0);
          FUN_14081cfa3(L"/Script/Niagara",L"NiagaraComponent",&DAT_14cb39ca0,FUN_14646d392);
        }
        if ((*(int *)(DAT_14cb39ca0 + 0x38) <= *(int *)(plVar8[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(DAT_14cb39ca0 + 0x38) * 8) ==
            DAT_14cb39ca0 + 0x30)) {
          uVar7 = FUN_1447210f0(param_1);
          FUN_140579be4(plVar8,uVar7);
        }
      }
      else {
        (**(code **)(*plVar8 + 0xaa0))(plVar8);
        (**(code **)(*plVar8 + 0xaa8))(plVar8,0);
        *(byte *)((longlong)plVar8 + 0x9e) = *(byte *)((longlong)plVar8 + 0x9e) & 0xf3 | 4;
        local_70 = (code *)0x14a9fa140;
        local_68 = 0x18;
        local_64 = 0;
        uVar4 = FUN_14001a6c0(&local_70,1);
        if (param_1 == 0) {
          uRam00000000000004a0 = 0;
          iVar3 = 0;
        }
        else {
          uVar2 = *(uint *)(param_1 + 0xc);
          *(uint *)(param_1 + 0x4a0) = uVar2;
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar6 = 0;
          }
          iVar3 = *(int *)(lVar6 + 0x10);
          if (*(int *)(lVar6 + 0x10) == 0) {
            LOCK();
            iVar3 = DAT_14c964868 + 1;
            UNLOCK();
            iVar11 = DAT_14c964868 + 1;
            bVar15 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar3;
            if (bVar15) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                           );
            }
            LOCK();
            iVar3 = *(int *)(lVar6 + 0x10);
            bVar15 = iVar3 == 0;
            if (bVar15) {
              *(int *)(lVar6 + 0x10) = iVar11;
              iVar3 = 0;
            }
            UNLOCK();
            if (bVar15) {
              iVar3 = iVar11;
            }
          }
        }
        *(int *)(param_1 + 0x4a4) = iVar3;
        *(ulonglong *)(param_1 + 0x4a8) = (ulonglong)uVar4;
        (**(code **)(*plVar8 + 0xa80))(plVar8,param_1 + 0x4a0);
        (**(code **)(*plVar8 + 0xa78))(plVar8,param_2);
      }
      FUN_14057a3b2(plVar8,1,1,1);
      *(byte *)((longlong)plVar8 + 0x2e4) = *(byte *)((longlong)plVar8 + 0x2e4) & 0xfe;
      FUN_140c056bc(plVar8,0);
      FUN_140c0563c(plVar8,0);
      FUN_1449e3cec(plVar8,0,1);
      FUN_140357fa8(plVar8,0,0);
      FUN_140e996a4(plVar8,0);
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(plVar8);
      }
      iVar3 = *(int *)(param_1 + 0x3e0);
      *(uint *)(param_1 + 0x3e0) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x3e4) < iVar3 + 1U) {
        FUN_140affc12((longlong *)(param_1 + 0x3d8),iVar3);
      }
      *(longlong **)(*(longlong *)(param_1 + 0x3d8) + (longlong)iVar3 * 8) = plVar8;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(plVar8);
      }
      FUN_140b506dc(plVar8,lVar5,0);
      plVar14 = plVar8;
      goto LAB_1412f6216;
    }
  }
  plVar14 = (longlong *)0x0;
LAB_1412f6216:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar14;
}



// FUNCTION 1412f6616 FUN_1412f6616 body=2403 status=ok
// SIG undefined FUN_1412f6616(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412f6616(longlong param_1,double *param_2,double *param_3)

{
  ulonglong uVar1;
  int iVar2;
  double *pdVar3;
  longlong lVar4;
  double *pdVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined *puVar8;
  uint *puVar9;
  longlong *plVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auStack_208 [32];
  double *local_1e8;
  undefined1 local_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_198 [2];
  double local_188;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158 [2];
  double local_148;
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined1 local_d8 [16];
  double local_c8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  plVar10 = *(longlong **)(param_1 + 0x120);
  if (plVar10 == (longlong *)0x0) {
    local_1a8 = param_2[2];
    local_1b8 = *param_2;
    dStack_1b0 = param_2[1];
    uVar1 = *(ulonglong *)(param_1 + 0x38);
    if (uVar1 < 0xffffffff00000000) {
      plVar10 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar10 = (longlong *)0x0;
      }
      (**(code **)(*plVar10 + 0x58))(plVar10,param_1,uVar1,5);
    }
    else {
      uVar7 = (uint)uVar1;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
        puVar8 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar8 = DAT_14c998080;
        }
        if ((*(uint *)(puVar8 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
          lVar4 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
          puVar9 = *(uint **)(lVar4 + 0x18);
          if (*(uint **)(lVar4 + 0x18) == (uint *)0x0) {
            puVar9 = (uint *)(lVar4 + 8);
          }
          *puVar9 = *puVar9 | 0x20;
          *(byte *)(lVar4 + 0x60) = *(byte *)(lVar4 + 0x60) | 1;
        }
      }
    }
    *(double *)(param_1 + 0x1a8) = local_1a8;
    *(double *)(param_1 + 0x198) = local_1b8;
    *(double *)(param_1 + 0x1a0) = dStack_1b0;
    local_1c8 = param_3[2];
    local_1d8 = *param_3;
    dStack_1d0 = param_3[1];
    uVar1 = *(ulonglong *)(param_1 + 0x38);
    if (uVar1 < 0xffffffff00000000) {
      plVar10 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar10 = (longlong *)0x0;
      }
      (**(code **)(*plVar10 + 0x58))(plVar10,param_1,uVar1,6);
    }
    else {
      uVar7 = (uint)uVar1;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
        puVar8 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar8 = DAT_14c998080;
        }
        if ((*(uint *)(puVar8 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
          lVar4 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
          puVar9 = *(uint **)(lVar4 + 0x18);
          if (*(uint **)(lVar4 + 0x18) == (uint *)0x0) {
            puVar9 = (uint *)(lVar4 + 8);
          }
          *puVar9 = *puVar9 | 0x40;
          *(byte *)(lVar4 + 0x60) = *(byte *)(lVar4 + 0x60) | 1;
        }
      }
    }
    *(double *)(param_1 + 0x1c0) = local_1c8;
    dVar11 = local_1d8;
    dVar12 = dStack_1d0;
  }
  else {
    (**(code **)(*plVar10 + 0x4a8))(plVar10,&local_118,*(undefined8 *)(param_1 + 0x128),0);
    if ((*(byte *)(param_1 + 0x1f8) & 4) == 0) {
      dVar26 = *param_2 - local_f8;
      dVar30 = param_2[1] - dStack_f0;
      dVar32 = param_2[2] - local_e8;
      dVar35 = local_108 * -1.0;
      dVar38 = dStack_100 * 1.0;
      dVar11 = -local_118;
      dVar12 = -dStack_110;
      dVar15 = dVar26 * dVar35 - dVar11 * dVar32;
      dVar13 = dVar30 * dVar11 - dVar26 * dVar12;
      dVar14 = dVar32 * dVar12 - dVar30 * dVar35;
      dVar14 = dVar14 + dVar14;
      dVar15 = dVar15 + dVar15;
      dVar13 = dVar13 + dVar13;
      dVar34 = local_118 * dVar13;
      auVar16 = divpd(_DAT_149934d80,local_d8);
      FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),5);
      *(double *)(param_1 + 0x198) =
           (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_d8._0_8_)) & auVar16._0_8_) *
           ((dVar13 * dVar12 - dVar15 * dVar35) + dVar38 * dVar14 + dVar26);
      *(double *)(param_1 + 0x1a0) =
           (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_d8._8_8_)) & auVar16._8_8_) *
           (dVar34 + dVar35 * dVar14 + dVar38 * dVar15 + dVar30);
      *(double *)(param_1 + 0x1a8) =
           (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8)) & (ulonglong)(1.0 / local_c8)
                   ) * (dVar38 * dVar13 + dVar32 + (dVar15 * dVar11 - dVar14 * dVar12));
    }
    else {
      local_128 = param_2[2];
      local_138 = *param_2;
      dStack_130 = param_2[1];
      FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),5);
      *(double *)(param_1 + 0x1a8) = local_128;
      *(double *)(param_1 + 0x198) = local_138;
      *(double *)(param_1 + 0x1a0) = dStack_130;
    }
    if ((*(byte *)(param_1 + 0x1f8) & 8) == 0) {
      dVar11 = local_108 * -1.0;
      dVar12 = dStack_100 * 1.0;
      dVar13 = (double)FUN_144a7484c(param_3,&local_178);
      uVar6 = SUB84(param_3,0);
      dVar15 = dStack_170 * dVar11 * -1.0 +
               ((dVar12 * local_178 - local_118 * dStack_160 * 1.0) - dStack_110 * local_168);
      dVar32 = local_178 * dVar11 * 1.0 +
               ((dVar12 * dStack_170 - local_118 * local_168 * -1.0) - dStack_110 * dStack_160);
      dVar14 = dStack_160 * dVar11 * 1.0 +
               dStack_110 * local_178 + (dVar12 * local_168 - local_118 * dStack_170 * 1.0);
      dVar11 = local_168 * dVar11 * -1.0 +
               dStack_110 * dStack_170 + (dVar12 * dStack_160 - local_118 * local_178 * -1.0);
      pdVar5 = *(double **)(param_1 + 0x230);
      if (pdVar5 == (double *)0x0) {
        uVar6 = 0x40;
        pdVar5 = (double *)FUN_14001cc68(0x40,0x10);
        dVar12 = DAT_14c8463d8;
        *pdVar5 = DAT_14c8463d0;
        pdVar5[1] = dVar12;
        dVar12 = DAT_14c8463e8;
        pdVar5[2] = DAT_14c8463e0;
        pdVar5[3] = dVar12;
        dVar12 = DAT_14c846500;
        pdVar5[4] = DAT_14c8464f8;
        pdVar5[5] = dVar12;
        dVar13 = DAT_14c846508;
        pdVar5[6] = DAT_14c846508;
        *(double **)(param_1 + 0x230) = pdVar5;
      }
      auVar16._8_8_ = -(ulonglong)(pdVar5[1] != dVar32);
      auVar16._0_8_ = -(ulonglong)(*pdVar5 != dVar15);
      iVar2 = movmskpd(SUB84(dVar13,0),auVar16);
      auVar22._8_8_ = -(ulonglong)(pdVar5[3] != dVar11);
      auVar22._0_8_ = -(ulonglong)(pdVar5[2] != dVar14);
      uVar7 = movmskpd(uVar6,auVar22);
      if ((uVar7 & 0x3fffffff) != 0 || iVar2 != 0) {
        dVar12 = dVar14 * dVar14 + dVar15 * dVar15;
        dVar13 = dVar11 * dVar11 + dVar32 * dVar32;
        auVar23._0_8_ = dVar12 + dVar13;
        auVar23._8_8_ = dVar12 + dVar13;
        auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_);
        auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_);
        auVar16 = sqrtpd(auVar23,auVar23);
        auVar22 = divpd(_DAT_149934d80,auVar16);
        auVar24._0_8_ = auVar22._0_8_ * dVar14;
        auVar24._8_8_ = auVar22._8_8_ * dVar11;
        auVar16 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar24,auVar21);
        *pdVar5 = (double)((ulonglong)(dVar15 * auVar22._0_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_));
        pdVar5[1] = (double)((ulonglong)(dVar32 * auVar22._8_8_) &
                            -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_));
        *(undefined1 (*) [16])(pdVar5 + 2) = auVar16;
        FUN_1448052ee(pdVar5,&local_178);
        pdVar5[6] = local_168;
        pdVar5[4] = local_178;
        pdVar5[5] = dStack_170;
      }
      local_188 = pdVar5[6];
      pdVar3 = local_198;
      dVar11 = pdVar5[4];
      dVar12 = pdVar5[5];
    }
    else {
      local_148 = param_3[2];
      pdVar3 = local_158;
      dVar11 = *param_3;
      dVar12 = param_3[1];
    }
    *pdVar3 = dVar11;
    pdVar3[1] = dVar12;
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),6);
    *(double *)(param_1 + 0x1c0) = pdVar3[2];
    dVar11 = *pdVar3;
    dVar12 = pdVar3[1];
  }
  *(double *)(param_1 + 0x1b0) = dVar11;
  *(double *)(param_1 + 0x1b8) = dVar12;
  auVar16 = *(undefined1 (*) [16])(param_1 + 0x1b0);
  dVar12 = auVar16._0_8_;
  dVar13 = auVar16._8_8_;
  dVar11 = *(double *)(param_1 + 0x1c0);
  pdVar3 = *(double **)(param_1 + 0x230);
  if (pdVar3 == (double *)0x0) {
    pdVar3 = (double *)FUN_14001cc68(0x40,0x10);
    dVar14 = DAT_14c8463d8;
    *pdVar3 = DAT_14c8463d0;
    pdVar3[1] = dVar14;
    dVar14 = DAT_14c8463e8;
    pdVar3[2] = DAT_14c8463e0;
    pdVar3[3] = dVar14;
    dVar14 = DAT_14c846500;
    pdVar3[4] = DAT_14c8464f8;
    pdVar3[5] = dVar14;
    pdVar3[6] = DAT_14c846508;
    *(double **)(param_1 + 0x230) = pdVar3;
  }
  auVar22 = _DAT_1499387d0;
  if ((((pdVar3[4] != dVar12) || (NAN(pdVar3[4]) || NAN(dVar12))) || (pdVar3[5] != dVar13)) ||
     (((NAN(pdVar3[5]) || NAN(dVar13) || (pdVar3[6] != dVar11)) || (NAN(pdVar3[6]) || NAN(dVar11))))
     ) {
    auVar27._8_8_ = 0;
    auVar27._0_8_ = dVar11;
    dVar14 = (double)DAT_1499387d0;
    dVar15 = DAT_1499387d0._8_8_;
    auVar16 = divpd(auVar16,_DAT_1499387d0);
    auVar21 = divpd(auVar27,_DAT_1499387d0);
    auVar16 = roundpd(auVar16,auVar16,3);
    auVar21 = roundpd(auVar21,auVar21,3);
    auVar36._0_8_ = dVar12 - auVar16._0_8_ * dVar14;
    auVar36._8_8_ = dVar13 - auVar16._8_8_ * dVar15;
    auVar28._0_8_ = dVar11 - auVar21._0_8_ * dVar14;
    auVar28._8_8_ = 0.0 - auVar21._8_8_ * dVar15;
    auVar33._0_8_ = auVar36._0_8_ + dVar14;
    auVar33._8_8_ = auVar36._8_8_ + dVar15;
    auVar25._0_8_ = auVar28._0_8_ + dVar14;
    auVar25._8_8_ = auVar28._8_8_ + dVar15;
    auVar17._8_8_ = -(ulonglong)(0.0 <= auVar36._8_8_);
    auVar17._0_8_ = -(ulonglong)(0.0 <= auVar36._0_8_);
    auVar21 = blendvpd(auVar33,auVar36,auVar17);
    auVar18._8_8_ = -(ulonglong)(0.0 <= auVar28._8_8_);
    auVar18._0_8_ = -(ulonglong)(0.0 <= auVar28._0_8_);
    auVar16 = blendvpd(auVar25,auVar28,auVar18);
    auVar29._0_8_ = auVar21._0_8_ + -360.0;
    auVar29._8_8_ = auVar21._8_8_ + -360.0;
    auVar31._0_8_ = auVar16._0_8_ + -360.0;
    auVar31._8_8_ = auVar16._8_8_ + 0.0;
    auVar19._8_8_ = -(ulonglong)(180.0 < auVar21._8_8_);
    auVar19._0_8_ = -(ulonglong)(180.0 < auVar21._0_8_);
    auVar21 = blendvpd(auVar21,auVar29,auVar19);
    auVar20._8_8_ = -(ulonglong)(180.0 < auVar16._8_8_);
    auVar20._0_8_ = -(ulonglong)(180.0 < auVar16._0_8_);
    auVar16 = blendvpd(auVar16,auVar31,auVar20);
    *(undefined1 (*) [16])(pdVar3 + 4) = auVar21;
    dVar11 = auVar16._0_8_;
    pdVar3[6] = dVar11;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = dVar11;
    auVar16 = divpd(auVar21,auVar22);
    auVar22 = divpd(auVar37,auVar22);
    auVar16 = roundpd(auVar16,auVar16,3);
    auVar22 = roundpd(auVar22,auVar22,3);
    dVar32 = (auVar21._0_8_ - auVar16._0_8_ * dVar14) * 0.008726646259971648;
    dVar34 = (auVar21._8_8_ - auVar16._8_8_ * dVar15) * 0.008726646259971648;
    dVar35 = (dVar11 - auVar22._0_8_ * dVar14) * 0.008726646259971648;
    dVar38 = (0.0 - auVar22._8_8_ * dVar15) * 0.008726646259971648;
    dVar11 = sin(dVar32);
    dVar12 = sin(dVar34);
    dVar13 = sin(dVar35);
    sin(dVar38);
    dVar14 = cos(dVar32);
    dVar15 = cos(dVar34);
    dVar32 = cos(dVar35);
    cos(dVar38);
    *pdVar3 = dVar11 * dVar12 * dVar32 - dVar14 * dVar15 * dVar13;
    pdVar3[1] = -(dVar11 * dVar15 * dVar32) - dVar14 * dVar12 * dVar13;
    pdVar3[2] = -(dVar15 * dVar11 * dVar13) + dVar12 * dVar14 * dVar32;
    pdVar3[3] = dVar12 * dVar11 * dVar13 + dVar15 * dVar14 * dVar32;
  }
  local_118 = *pdVar3;
  dStack_110 = pdVar3[1];
  local_108 = pdVar3[2];
  dStack_100 = pdVar3[3];
  local_1e8 = &local_118;
  local_1e0 = 0;
  FUN_140092404(param_1,*(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x128),1);
  if ((local_b0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412f6f7a FUN_1412f6f7a body=154 status=ok
// SIG undefined FUN_1412f6f7a(void)

void FUN_1412f6f7a(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar4);
      if ((char)plVar2[1] == '\0') {
        *(undefined1 *)(plVar2 + 1) = 1;
        (**(code **)(*plVar2 + 8))(plVar2,param_2);
        FUN_1412f7014();
        FUN_140457ffc(&DAT_14cb96850,plVar2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1458cad28(param_1);
    return;
  }
  return;
}



// FUNCTION 1412f7014 FUN_1412f7014 body=112 status=ok
// SIG undefined FUN_1412f7014(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412f7014(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb96868) {
    FUN_144b3d300(&DAT_14cb96868);
    if (DAT_14cb96868 == -1) {
      DAT_14cb96850 = 0;
      _DAT_14cb96858 = 0;
      _DAT_14cb96860 = 2;
      atexit(FUN_143eeef4f);
      _Init_thread_footer(&DAT_14cb96868);
      return;
    }
  }
  return;
}



// FUNCTION 1412f7084 FUN_1412f7084 body=457 status=ok
// SIG undefined FUN_1412f7084(void)

void FUN_1412f7084(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb96828 == (undefined8 *)0x0) {
    DAT_14cb96828 = (undefined8 *)FUN_14001cc68();
    *DAT_14cb96828 = 0;
    DAT_14cb96828[1] = 0;
    DAT_14cb96828[2] = 0;
    DAT_14cb96828[3] = 0;
    DAT_14cb96828[4] = 0;
    DAT_14cb96828[5] = 0;
  }
  puVar1 = DAT_14cb96828;
  lVar4 = DAT_14cb96828[2];
  iVar3 = *(int *)(DAT_14cb96828 + 3);
  lVar9 = (longlong)iVar3;
  if (lVar9 != 0) {
    uVar6 = 0;
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar4 + 0xc + uVar6) == *(longlong *)(param_1 + 0x10)) {
        if ((int)(~uVar6 >> 7) != 0) {
          *(longlong *)(lVar4 + 0x28 + (lVar5 >> 0x20) * 0x80) = param_1;
          goto LAB_1412f71c0;
        }
        break;
      }
      lVar5 = lVar5 + 0x100000000;
      uVar6 = uVar6 + 0x80;
    } while (lVar9 << 7 != uVar6);
  }
  *(uint *)(DAT_14cb96828 + 3) = iVar3 + 1U;
  if (*(uint *)((longlong)puVar1 + 0x1c) < iVar3 + 1U) {
    plVar7 = puVar1 + 2;
    FUN_1458cad58(plVar7,iVar3);
    lVar4 = *plVar7;
  }
  lVar5 = lVar4 + lVar9 * 0x80;
  puVar1 = (undefined8 *)(lVar4 + lVar9 * 0x80);
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 0x18);
  *(undefined8 *)((longlong)puVar1 + 0xc) = *(undefined8 *)(param_1 + 0x10);
  FUN_1400021e4((undefined8 *)((longlong)puVar1 + 0xc),&local_40);
  uVar6 = (ulonglong)(local_38 - 1);
  if (local_38 == 0) {
    uVar6 = 0;
  }
  if (0 < (int)uVar6) {
    uVar8 = 0;
    do {
      uVar2 = *(ushort *)(local_40 + uVar8 * 2);
      *(ushort *)(local_40 + uVar8 * 2) = (ushort)(uVar2 - 0x41 < 0x1a) * 0x20 + uVar2;
      uVar8 = uVar8 + 1;
    } while (uVar6 != uVar8);
  }
  *(longlong *)(lVar5 + 0x18) = local_40;
  *(int *)(lVar5 + 0x20) = local_38;
  *(undefined4 *)(lVar5 + 0x24) = local_34;
  *(longlong *)(lVar5 + 0x28) = param_1;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  *(undefined4 *)(lVar5 + 0x58) = 0;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  *(undefined8 *)(lVar5 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)(lVar5 + 100) = 0;
  *(undefined8 *)(lVar5 + 0x70) = 0;
  *(undefined4 *)(lVar5 + 0x78) = 0;
LAB_1412f71c0:
  *(undefined1 *)(param_2 + 200) = 1;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412f724e FUN_1412f724e body=1154 status=ok
// SIG undefined FUN_1412f724e(void)

void FUN_1412f724e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_1412f7339;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_1412f7339:
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_38);
            goto LAB_1412f7406;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_38) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_38,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_38,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_38,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_38,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
LAB_1412f7406:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1412f76d2(param_1,local_30,local_38);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412f76d2 FUN_1412f76d2 body=113 status=ok
// SIG undefined FUN_1412f76d2(void)

void FUN_1412f76d2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = param_1 + 0xb8;
  cVar2 = FUN_14008355a(lVar1,0);
  if (cVar2 == '\0') {
    cVar2 = FUN_1412f7744(lVar1,param_2);
    if (cVar2 != '\0') {
      FUN_141252210(param_1);
      return;
    }
    cVar2 = FUN_1412f7744(lVar1,param_3);
    if (cVar2 != '\0') {
      FUN_1412526d2(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1412f7744 FUN_1412f7744 body=311 status=ok
// SIG undefined FUN_1412f7744(void)

ulonglong FUN_1412f7744(uint *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  if (param_2 == 0) {
    local_28 = 0;
    uVar3 = 0;
  }
  else {
    local_28 = *(uint *)(param_2 + 0xc);
    if ((int)local_28 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((local_28 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = (ulonglong)*(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar2 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar2 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar2 = uVar5;
      }
      uVar3 = (ulonglong)uVar2;
    }
  }
  local_24 = (uint)uVar3;
  uVar5 = *param_1;
  uVar2 = param_1[1];
  if ((uVar5 == local_28) && (uVar2 == local_24)) {
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  else if (((uVar2 == 0) ||
           ((((int)uVar5 < 0 || (DAT_14c9647dc <= (int)uVar5)) ||
            (lVar4 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar4 == 0))))
          || ((*(uint *)(lVar4 + 0x10) != uVar2 || ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)))) {
    uVar3 = FUN_144729dda(&local_28);
    uVar3 = uVar3 ^ 1;
  }
  else {
    uVar3 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1412f78d8 FUN_1412f78d8 body=106 status=ok
// SIG undefined FUN_1412f78d8(void)

void FUN_1412f78d8(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x7968) + *(int *)(param_1 + 0x7958);
  if (iVar1 == 0) {
    FUN_1440ae47e(param_1);
    iVar1 = *(int *)(param_1 + 0x7968) + *(int *)(param_1 + 0x7958);
  }
  if (iVar1 < 1) {
    if (((*(char *)(param_1 + 0x178) == '\x03') && (*(longlong *)(param_1 + 0x3f70) != 0)) &&
       (*(char *)(param_1 + 0x7920) == '\0')) {
      FUN_14111c46e(param_1);
      return;
    }
    return;
  }
  FUN_148cccd00(param_1);
  return;
}



// FUNCTION 1412f7942 FUN_1412f7942 body=970 status=ok
// SIG undefined FUN_1412f7942(void)

void FUN_1412f7942(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x360) != 0) {
    if (((*(int *)(param_1 + 0x34c) != 0) && (uVar3 = *(uint *)(param_1 + 0x348), -1 < (int)uVar3))
       && ((int)uVar3 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x34c))) &&
         (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar1 = *plVar4, lVar1 != 0)))) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar1);
        }
        if (DAT_14cb56270 == 0) {
          local_40 = &local_20;
          local_20 = FUN_1449e2820;
          local_30 = FUN_14081d0ea;
          local_38 = FUN_1427b09ee;
          local_48 = &LAB_148630fef;
          local_50 = FUN_1464b6a91;
          local_58 = L"Engine";
          local_60 = 0;
          local_68 = 0x10004001;
          local_70 = 8;
          local_78 = 0x28;
          FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
        }
        plVar4 = (longlong *)FUN_144718840(lVar1,DAT_14cb56270);
        if (plVar4 != (longlong *)0x0) {
          lVar1 = (**(code **)(*plVar4 + 0x20))(plVar4);
          if (lVar1 != 0) {
            lVar1 = (**(code **)(*plVar4 + 0x20))(plVar4);
            if (*(longlong *)(param_1 + 0x360) != 0) {
              FUN_14480f766(lVar1 + 400);
            }
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x360) = 0;
  }
  if (*(longlong *)(param_1 + 0x370) != 0) {
    if (((*(int *)(param_1 + 0x34c) != 0) && (uVar3 = *(uint *)(param_1 + 0x348), -1 < (int)uVar3))
       && ((int)uVar3 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x34c))) &&
          ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) && (lVar1 = *plVar4, lVar1 != 0)) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar1);
        }
        if (DAT_14cb56270 == 0) {
          local_40 = &local_20;
          local_20 = FUN_1449e2820;
          local_30 = FUN_14081d0ea;
          local_38 = FUN_1427b09ee;
          local_48 = &LAB_148630fef;
          local_50 = FUN_1464b6a91;
          local_58 = L"Engine";
          local_60 = 0;
          local_68 = 0x10004001;
          local_70 = 8;
          local_78 = 0x28;
          FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
        }
        plVar4 = (longlong *)FUN_144718840(lVar1,DAT_14cb56270);
        if (plVar4 != (longlong *)0x0) {
          lVar1 = (**(code **)(*plVar4 + 0x20))(plVar4);
          if (lVar1 != 0) {
            lVar1 = (**(code **)(*plVar4 + 0x20))(plVar4);
            if (*(longlong *)(param_1 + 0x370) != 0) {
              FUN_14480f766(lVar1 + 0x1f8);
            }
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x370) = 0;
  }
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  if (*(longlong *)(param_1 + 0x380) != 0) {
    lVar2 = FUN_1401b4c98(*(undefined8 *)(param_1 + 0x238));
    lVar1 = *(longlong *)(param_1 + 0x380);
    if (lVar1 != 0) {
      uVar3 = (uint)lVar1;
      if ((int)(uVar3 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
        lVar5 = lVar2 + 0x18;
        if (*(longlong *)(lVar2 + 0x28) != 0) {
          lVar5 = *(longlong *)(lVar2 + 0x28);
        }
        if ((*(uint *)(lVar5 + (ulonglong)((uVar3 & 0xffffff) >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0
           ) {
          lVar5 = *(longlong *)(lVar2 + 8);
          lVar6 = (ulonglong)(uVar3 & 0xffffff) * 0x70;
          if (((lVar5 + lVar6 != 0) && (*(longlong *)(lVar5 + 0x60 + lVar6) == lVar1)) &&
             (*(char *)(lVar5 + 1 + lVar6) != '\x04')) {
            FUN_1405a424c(lVar2);
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x380) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412f7d0e FUN_1412f7d0e body=1 status=ok
// SIG undefined FUN_1412f7d0e(void)

void FUN_1412f7d0e(void)

{
  return;
}



// FUNCTION 1412f7d10 FUN_1412f7d10 body=18 status=ok
// SIG undefined FUN_1412f7d10(void)

undefined8 FUN_1412f7d10(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x4a0));
  }
  return 0;
}



// FUNCTION 1412f7d22 FUN_1412f7d22 body=207 status=ok
// SIG undefined FUN_1412f7d22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1412f7d22(void)

{
  if ((DAT_14caa095f & 2) == 0) {
    DAT_14caa095f = DAT_14caa095f | 2;
    _DAT_14caa0900 = L"FVertexFactoryShaderParameters";
    _DAT_14caa0918 = FUN_146826540;
    _DAT_14caa0920 = FUN_146825d77;
    _DAT_14caa0928 = FUN_146825fd6;
    _DAT_14caa0930 = FUN_1407e02ea;
    _DAT_14caa0938 = FUN_146826273;
    _DAT_14caa0910 = &LAB_147442a14;
    _DAT_14caa0950 = 0xffffffff00000004;
    _DAT_14caa0958 = 4;
    DAT_14caa095c = 0;
    _DAT_14caa0940 = &LAB_147442a1c;
    FUN_1458cd0fc();
    FUN_1407e00cc(&DAT_14caa08f8);
  }
  return &DAT_14caa08f8;
}



// FUNCTION 1412f7df2 FUN_1412f7df2 body=18 status=ok
// SIG undefined FUN_1412f7df2(void)

void FUN_1412f7df2(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe;
    FUN_140834d9a();
    return;
  }
  return;
}



// FUNCTION 1412f7e04 FUN_1412f7e04 body=248 status=ok
// SIG undefined FUN_1412f7e04(void)

void FUN_1412f7e04(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x2674) != 0) {
    puVar1 = (uint *)(param_1 + 0x2670);
    uVar2 = *puVar1;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      if ((lVar3 != 0) &&
         ((*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x2674) &&
          ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
        lVar3 = FUN_14479d2ce(puVar1);
        if (*(longlong *)(param_1 + 0x2650) != 0) {
          FUN_14480f766(lVar3 + 0x2620);
        }
        lVar3 = FUN_14479d2ce(puVar1);
        if (*(longlong *)(param_1 + 0x2658) != 0) {
          FUN_14480f766(lVar3 + 0x2648);
        }
        lVar3 = FUN_14479d2ce(puVar1);
        if (*(longlong *)(param_1 + 0x2660) != 0) {
          FUN_14480f766(lVar3 + 0x2670);
        }
        lVar3 = FUN_14479d2ce(puVar1);
        if (*(longlong *)(param_1 + 0x2668) != 0) {
          FUN_14480f766(lVar3 + 0x2b8);
        }
        *(undefined8 *)(param_1 + 0x2660) = 0;
        *(undefined8 *)(param_1 + 0x2668) = 0;
        *(undefined8 *)(param_1 + 0x2650) = 0;
        *(undefined8 *)(param_1 + 0x2658) = 0;
      }
    }
  }
  return;
}



// FUNCTION 1412f7efc FUN_1412f7efc body=404 status=ok
// SIG undefined FUN_1412f7efc(void)

void FUN_1412f7efc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  lVar2 = FUN_1447210f0();
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      plVar3 = (longlong *)(lVar2 + 0x458);
    }
    else {
      plVar3 = (longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    lVar2 = *plVar3;
    lVar1 = *(longlong *)(param_1 + 0x2688);
    if (lVar1 != 0) {
      uVar6 = (uint)lVar1;
      if ((int)(uVar6 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
        lVar5 = lVar2 + 0x18;
        if (*(longlong *)(lVar2 + 0x28) != 0) {
          lVar5 = *(longlong *)(lVar2 + 0x28);
        }
        if ((*(uint *)(lVar5 + (ulonglong)((uVar6 & 0xffffff) >> 5) * 4) >> (uVar6 & 0x1f) & 1) != 0
           ) {
          lVar5 = *(longlong *)(lVar2 + 8);
          lVar4 = (ulonglong)(uVar6 & 0xffffff) * 0x70;
          if (((lVar5 + lVar4 != 0) && (*(longlong *)(lVar5 + 0x60 + lVar4) == lVar1)) &&
             (*(char *)(lVar5 + 1 + lVar4) != '\x04')) {
            FUN_1405a424c(lVar2);
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x2688) = 0;
    lVar1 = *(longlong *)(param_1 + 0x2690);
    if (lVar1 != 0) {
      uVar6 = (uint)lVar1;
      if ((int)(uVar6 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
        lVar5 = lVar2 + 0x18;
        if (*(longlong *)(lVar2 + 0x28) != 0) {
          lVar5 = *(longlong *)(lVar2 + 0x28);
        }
        if ((*(uint *)(lVar5 + (ulonglong)((uVar6 & 0xffffff) >> 5) * 4) >> (uVar6 & 0x1f) & 1) != 0
           ) {
          lVar5 = *(longlong *)(lVar2 + 8);
          lVar4 = (ulonglong)(uVar6 & 0xffffff) * 0x70;
          if (((lVar5 + lVar4 != 0) && (*(longlong *)(lVar5 + 0x60 + lVar4) == lVar1)) &&
             (*(char *)(lVar5 + 1 + lVar4) != '\x04')) {
            FUN_1405a424c(lVar2);
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x2690) = 0;
    lVar1 = *(longlong *)(param_1 + 0x2698);
    if (lVar1 != 0) {
      uVar6 = (uint)lVar1;
      if ((int)(uVar6 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
        lVar5 = lVar2 + 0x18;
        if (*(longlong *)(lVar2 + 0x28) != 0) {
          lVar5 = *(longlong *)(lVar2 + 0x28);
        }
        if ((*(uint *)(lVar5 + (ulonglong)((uVar6 & 0xffffff) >> 5) * 4) >> (uVar6 & 0x1f) & 1) != 0
           ) {
          lVar5 = *(longlong *)(lVar2 + 8);
          lVar4 = (ulonglong)(uVar6 & 0xffffff) * 0x70;
          if (((lVar5 + lVar4 != 0) && (*(longlong *)(lVar5 + 0x60 + lVar4) == lVar1)) &&
             (*(char *)(lVar5 + 1 + lVar4) != '\x04')) {
            FUN_1405a424c(lVar2);
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x2698) = 0;
  }
  return;
}



// FUNCTION 1412f8090 FUN_1412f8090 body=307 status=ok
// SIG undefined FUN_1412f8090(void)

void FUN_1412f8090(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_1412f8119;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_1412f80f2:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_1412f80f2;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_1412f8119;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1412f8119:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412f81c4 FUN_1412f81c4 body=93 status=ok
// SIG undefined FUN_1412f81c4(void)

void FUN_1412f81c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad80f50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1412f8222 FUN_1412f8222 body=921 status=ok
// SIG undefined FUN_1412f8222(void)

ulonglong FUN_1412f8222(longlong param_1,int param_2,char param_3,char param_4)

{
  void *pvVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  ulonglong unaff_RBP;
  undefined7 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar5 == '\0') goto LAB_1412f82cd;
  }
  uVar8 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x10);
      local_48 = *puVar7;
      uStack_44 = puVar7[1];
      uStack_40 = puVar7[2];
      uStack_3c = puVar7[3];
      FUN_140d0e176(param_1 + 0x18);
      FUN_140d0e104(param_1 + 0x68,param_2);
      uVar6 = *(uint *)(param_1 + 0xa8);
      lVar3 = *(longlong *)(param_1 + 0xa0);
      uVar12 = 0;
      if (0 < (int)uVar6) {
        uVar12 = 0;
        uVar11 = uVar6;
        do {
          uVar10 = (uVar11 >> 1) + uVar12;
          if (*(int *)(lVar3 + (ulonglong)uVar10 * 8) < param_2) {
            uVar12 = uVar10 + (uVar11 & 1);
          }
          bVar4 = 1 < uVar11;
          uVar11 = uVar11 >> 1;
        } while (bVar4);
      }
      if (((int)uVar12 < (int)uVar6) && (*(int *)(lVar3 + (ulonglong)uVar12 * 8) <= param_2)) {
        if (~uVar12 + uVar6 != 0) {
          pvVar1 = (void *)(lVar3 + (ulonglong)uVar12 * 8);
          memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)(int)(~uVar12 + uVar6) << 3);
          uVar6 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar6 - 1;
LAB_1412f8401:
        FUN_1458cde80(param_1 + 0xa0);
      }
LAB_1412f82b7:
      if ((uStack_3c & 1) != 0) {
        FUN_1412f85bc(&local_48,uStack_40);
      }
      unaff_RBP = 0;
      goto LAB_1412f82cd;
    }
    unaff_RBP = CONCAT71(uVar8,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0xc + (longlong)param_2 * 0x10) & 1) == 0)
    goto LAB_1412f82cd;
    puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x10);
  }
  else {
    uVar6 = *(uint *)(param_1 + 0xa8);
    lVar3 = *(longlong *)(param_1 + 0xa0);
    uVar12 = 0;
    if (0 < (int)uVar6) {
      uVar9 = (ulonglong)uVar6;
      uVar11 = uVar6;
      do {
        uVar9 = uVar9 >> 1;
        uVar10 = (uint)uVar9 + uVar12;
        if (*(int *)(lVar3 + (ulonglong)uVar10 * 8) < param_2) {
          uVar12 = uVar10 + (uVar11 & 1);
        }
        bVar4 = 1 < uVar11;
        uVar11 = (uint)uVar9;
      } while (bVar4);
    }
    if ((((int)uVar12 < (int)uVar6) && (*(int *)(lVar3 + (ulonglong)uVar12 * 8) <= param_2)) &&
       (puVar7 = (undefined4 *)(lVar3 + (ulonglong)uVar12 * 8 + 4), puVar7 != (undefined4 *)0x0)) {
      FUN_1412f85bc((longlong)param_2 * 0x10 + *(longlong *)(param_1 + 0x68),*puVar7);
      uVar6 = *(uint *)(param_1 + 0xa8);
      lVar3 = *(longlong *)(param_1 + 0xa0);
      uVar11 = 0;
      uVar12 = uVar6;
      if (0 < (int)uVar6) {
        do {
          uVar10 = (uVar12 >> 1) + uVar11;
          if (*(int *)(lVar3 + (ulonglong)uVar10 * 8) < param_2) {
            uVar11 = uVar10 + (uVar12 & 1);
          }
          bVar4 = 1 < uVar12;
          uVar12 = uVar12 >> 1;
        } while (bVar4);
      }
      unaff_RBP = CONCAT71(uVar8,1);
      if (((int)uVar11 < (int)uVar6) && (*(int *)(lVar3 + (ulonglong)uVar11 * 8) <= param_2)) {
        if (~uVar11 + uVar6 != 0) {
          pvVar1 = (void *)(lVar3 + (ulonglong)uVar11 * 8);
          memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)(int)(~uVar11 + uVar6) << 3);
          uVar6 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar6 - 1;
        FUN_1458cde80(param_1 + 0xa0);
      }
      goto LAB_1412f82cd;
    }
    unaff_RBP = CONCAT71(uVar8,1);
    if (param_4 == '\0') {
      puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x10);
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0xc + (longlong)param_2 * 0x10);
      if ((bVar2 & 2) == 0) {
        local_48 = *puVar7;
        uStack_44 = puVar7[1];
        uStack_40 = puVar7[2];
        uStack_3c = puVar7[3];
        FUN_140d0e176(param_1 + 0x18);
        FUN_140d0e104(param_1 + 0x68,param_2);
        uVar6 = *(uint *)(param_1 + 0xa8);
        lVar3 = *(longlong *)(param_1 + 0xa0);
        uVar11 = 0;
        uVar12 = uVar6;
        if (0 < (int)uVar6) {
          do {
            uVar10 = (uVar12 >> 1) + uVar11;
            if (*(int *)(lVar3 + (ulonglong)uVar10 * 8) < param_2) {
              uVar11 = uVar10 + (uVar12 & 1);
            }
            bVar4 = 1 < uVar12;
            uVar12 = uVar12 >> 1;
          } while (bVar4);
        }
        if (((int)uVar11 < (int)uVar6) && (*(int *)(lVar3 + (ulonglong)uVar11 * 8) <= param_2)) {
          if (~uVar11 + uVar6 != 0) {
            pvVar1 = (void *)(lVar3 + (ulonglong)uVar11 * 8);
            memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)(int)(~uVar11 + uVar6) << 3);
            uVar6 = *(uint *)(param_1 + 0xa8);
          }
          *(uint *)(param_1 + 0xa8) = uVar6 - 1;
          goto LAB_1412f8401;
        }
        goto LAB_1412f82b7;
      }
      if ((bVar2 & 1) == 0) goto LAB_1412f82cd;
    }
    else {
      if (param_4 != '\x01') goto LAB_1412f82cd;
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0xc + (longlong)param_2 * 0x10);
      if ((bVar2 & 1) == 0) goto LAB_1412f82cd;
      puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x10);
      *(byte *)(puVar7 + 3) = bVar2 | 2;
    }
  }
  FUN_1412f85bc(puVar7,puVar7[2]);
LAB_1412f82cd:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 1412f85bc FUN_1412f85bc body=351 status=ok
// SIG undefined FUN_1412f85bc(void)

void FUN_1412f85bc(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && (*(uint *)(plVar2 + 2) == param_1[1])) &&
       (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 &&
        (plVar2 = (longlong *)*plVar2, plVar2 != (longlong *)0x0)))) {
      if (DAT_14cac7648 == 0) {
        local_40 = &local_20;
        local_20 = FUN_144a7958c;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_143242436;
        local_48 = &LAB_14789ef1f;
        local_50 = &LAB_1417b008f;
        local_58 = L"Engine";
        local_60 = 0x8000000000;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x2b0;
        FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
      }
      if ((*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) ==
          DAT_14cac7648 + 0x30)) {
        (**(code **)(*plVar2 + 0x588))(plVar2,param_2);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412f871c FUN_1412f871c body=47 status=ok
// SIG undefined FUN_1412f871c(void)

void FUN_1412f871c(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1412f874c FUN_1412f874c body=983 status=ok
// SIG undefined FUN_1412f874c(void)

int FUN_1412f874c(undefined8 param_1,uint param_2,longlong *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong *plVar12;
  short sVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar11 = *(int *)((longlong)param_3 + 0x34);
  uVar14 = param_2 & 0xffff;
  sVar13 = (short)param_2;
  if ((int)param_3[1] != iVar11) {
    plVar6 = param_3 + 7;
    if ((longlong *)param_3[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_3[8];
    }
    iVar15 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_3[9] - 1U & uVar14) * 4);
    if (iVar15 != -1) {
      do {
        lVar17 = *param_3 + (longlong)iVar15 * 0x10;
        if (*(short *)(*param_3 + (longlong)iVar15 * 0x10) == sVar13) {
          if ((int *)(lVar17 + 4) != (int *)0x0 && lVar17 != 0) {
            iVar15 = *(int *)(lVar17 + 4);
            goto LAB_1412f8973;
          }
          break;
        }
        iVar15 = *(int *)(lVar17 + 8);
      } while (iVar15 != -1);
    }
  }
  FUN_1412f8b24(param_1,&local_58,param_2);
  iVar15 = 1;
  if ((longlong)local_50 != 0) {
    lVar17 = 0;
    iVar15 = 0;
    do {
      iVar11 = FUN_1412f874c(param_1,*(undefined2 *)(local_58 + 2 + lVar17),param_3);
      if (iVar15 < iVar11) {
        iVar15 = iVar11;
      }
      lVar17 = lVar17 + 4;
    } while ((longlong)local_50 * 4 != lVar17);
    iVar15 = iVar15 + 1;
    iVar11 = *(int *)((longlong)param_3 + 0x34);
  }
  if (iVar11 == 0) {
    iVar19 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar19 + 1;
    if (*(int *)((longlong)param_3 + 0xc) == iVar19) {
      FUN_144869a3c(param_3,iVar19);
    }
    iVar11 = (int)param_3[5];
    if (iVar11 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar11 + 0x1e;
      if (-1 < iVar11 + -1) {
        iVar5 = iVar11 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar6 = param_3 + 2;
    iVar8 = iVar11 + 1;
    iVar18 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar18 = iVar11;
    }
    if (iVar18 >> 5 == iVar5) {
      *(int *)(param_3 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_3 + 0x2c) <= iVar11) {
        if (iVar11 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar5 = iVar11;
        }
        else {
          uVar16 = iVar11 + 0x20U >> 5;
          local_60 = (ulonglong)uVar16;
          if (*(int *)((longlong)param_3 + 0x2c) + 0x1fU < 0xa0) {
            uVar9 = 4;
            if (4 < uVar16) {
              uVar9 = uVar16;
            }
          }
          else {
            uVar9 = (uVar16 * 3 >> 3) + uVar16 + 0x10;
          }
          uVar10 = FUN_144a3809e(uVar9 << 2,0);
          iVar5 = (int)(uVar10 >> 2);
          iVar8 = -0x20;
          if ((int)local_60 <= iVar5) {
            iVar8 = iVar5 << 5;
          }
          iVar5 = (int)param_3[5];
        }
        *(int *)((longlong)param_3 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar6,iVar5);
        iVar8 = (int)param_3[5] + 1;
      }
      iVar5 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar5 = iVar8;
      }
      *(int *)(param_3 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar12 = (longlong *)param_3[4];
        if ((longlong *)param_3[4] == (longlong *)0x0) {
          plVar12 = plVar6;
        }
        bVar7 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar12 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar12 + (longlong)(iVar5 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar17 = (longlong)iVar19;
    if ((longlong *)param_3[4] != (longlong *)0x0) {
      plVar6 = (longlong *)param_3[4];
    }
    bVar7 = (byte)iVar11 & 0x1f;
    puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar18 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar19 = (int)param_3[6];
    lVar17 = (longlong)iVar19;
    iVar5 = *(int *)(*param_3 + 4 + lVar17 * 0x10);
    *(int *)(param_3 + 6) = iVar5;
    *(int *)((longlong)param_3 + 0x34) = iVar11 + -1;
    if (iVar11 + -1 != 0) {
      *(undefined4 *)(*param_3 + (longlong)iVar5 * 0x10) = 0xffffffff;
    }
  }
  iVar11 = 1;
  plVar6 = param_3 + 2;
  if ((longlong *)param_3[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_3[4];
  }
  iVar5 = iVar19 + 0x1f;
  if (-1 < iVar19) {
    iVar5 = iVar19;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar19 & 0x1f);
  lVar4 = *param_3;
  lVar17 = lVar17 * 0x10;
  puVar2 = (undefined8 *)(lVar4 + lVar17);
  *(short *)(lVar4 + lVar17) = sVar13;
  *(int *)(lVar4 + 4 + lVar17) = iVar15;
  *(undefined4 *)(lVar4 + 8 + lVar17) = 0xffffffff;
  uVar16 = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
  if ((uVar16 != 0) && (uVar16 != 1)) {
    plVar6 = param_3 + 7;
    if ((longlong *)param_3[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_3[8];
    }
    iVar5 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_3[9] - 1U & uVar14) * 4);
    if (iVar5 != -1) {
      do {
        puVar3 = (undefined8 *)(*param_3 + (longlong)iVar5 * 0x10);
        if (*(short *)(*param_3 + (longlong)iVar5 * 0x10) == sVar13) {
          *puVar3 = *puVar2;
          FUN_1475809cc(param_3,iVar19);
          goto LAB_1412f8973;
        }
        iVar5 = *(int *)(puVar3 + 1);
      } while (iVar5 != -1);
    }
  }
  if (3 < uVar16) {
    uVar10 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
    lVar17 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar11 = 1 << ((byte)lVar17 & 0x1f);
  }
  if (((int)uVar16 < 1) || (iVar11 <= (int)param_3[9])) {
    uVar14 = (int)param_3[9] - 1U & uVar14;
    *(uint *)((longlong)puVar2 + 0xc) = uVar14;
    plVar6 = (longlong *)param_3[8];
    if ((longlong *)param_3[8] == (longlong *)0x0) {
      plVar6 = param_3 + 7;
    }
    *(undefined4 *)(puVar2 + 1) =
         *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_3[9] - 1U & uVar14) * 4);
    plVar6 = (longlong *)param_3[8];
    if ((longlong *)param_3[8] == (longlong *)0x0) {
      plVar6 = param_3 + 7;
    }
    *(int *)((longlong)plVar6 + (ulonglong)((int)param_3[9] - 1U & uVar14) * 4) = iVar19;
  }
  else {
    *(int *)(param_3 + 9) = iVar11;
    FUN_1412f8ba0(param_3);
  }
LAB_1412f8973:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412f8b24 FUN_1412f8b24 body=124 status=ok
// SIG undefined FUN_1412f8b24(void)

void FUN_1412f8b24(longlong param_1,longlong *param_2,ushort param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  uVar2 = *(uint *)(param_1 + 0x28);
  uVar5 = 0;
  if (0 < (int)uVar2) {
    uVar5 = 0;
    uVar4 = uVar2;
    do {
      uVar1 = (uVar4 >> 1) + uVar5;
      if (*(ushort *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar1 * 4) < param_3) {
        uVar5 = uVar1 + (uVar4 & 1);
      }
      bVar7 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
    } while (bVar7);
  }
  uVar4 = uVar2 - uVar5;
  if (uVar4 == 0 || (int)uVar2 < (int)uVar5) {
    lVar6 = 0;
    uVar4 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x20) + (ulonglong)uVar5 * 4;
    uVar3 = 0;
    do {
      if (*(ushort *)(lVar6 + uVar3 * 4) != param_3) {
        uVar4 = (uint)uVar3;
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar4 != uVar3);
    if (uVar4 == 0) {
      lVar6 = 0;
    }
  }
  *param_2 = lVar6;
  *(uint *)(param_2 + 1) = uVar4;
  return;
}



// FUNCTION 1412f8ba0 FUN_1412f8ba0 body=537 status=ok
// SIG undefined FUN_1412f8ba0(void)

void FUN_1412f8ba0(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar7,4);
    if (0 < (int)uVar7) {
      uVar5 = 0;
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar7 != uVar5);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar10 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar10 = local_58 >> 0x20;
    }
    iVar6 = (int)local_58;
    uVar7 = (uint)local_48;
    iVar8 = local_48._4_4_;
    iVar11 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar13 = *param_1;
        lVar12 = (longlong)iVar8 * 0x10;
        uVar5 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar13 + lVar12);
        *(uint *)(lVar13 + 0xc + lVar12) = uVar5;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar13 + 8 + lVar12) =
             *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & uVar5) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & uVar5) * 4) = iVar8;
        uVar7 = ~(uint)uVar10 & uVar7;
        plVar9 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar9 = local_50;
        }
        iVar3 = (int)local_50[3];
        lVar13 = (longlong)iVar6;
        uVar5 = *(uint *)((longlong)plVar9 + lVar13 * 4) & uVar7;
        if (uVar5 == 0) {
          iVar8 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar8 = iVar3 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar4 = iVar8;
          if (iVar8 < iVar6) {
            iVar4 = iVar6;
          }
          if (iVar8 <= iVar6) break;
          lVar12 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar5 = *(uint *)((longlong)plVar9 + lVar12 * 4 + lVar13 * 4 + 4);
            if (uVar5 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar4 - lVar13 == lVar12) goto LAB_1412f8d74;
          }
          iVar6 = iVar6 + (int)lVar12 + 1;
          uVar7 = 0xffffffff;
        }
        uVar10 = (ulonglong)(-uVar5 & uVar5);
        uVar2 = uVar10 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar8 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar8 < iVar3);
    }
  }
LAB_1412f8d74:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412f8dba FUN_1412f8dba body=180 status=ok
// SIG undefined FUN_1412f8dba(void)

void FUN_1412f8dba(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_40 = param_2;
    local_38 = param_3;
    FUN_141270afc(0,&local_58,0);
    lVar2 = local_58;
    lVar4 = (longlong)(int)uStack_50;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        lVar1 = *(longlong *)(lVar2 + lVar5);
        if ((lVar1 != 0) && (cVar3 = FUN_143893b9e(lVar1,&local_40), cVar3 != '\0')) {
          FUN_1415e434e(lVar1);
        }
        lVar5 = lVar5 + 8;
      } while (lVar4 * 8 != lVar5);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412f8e70 FUN_1412f8e70 body=47 status=ok
// SIG undefined FUN_1412f8e70(void)

void FUN_1412f8e70(longlong *param_1,char param_2)

{
  if ((param_2 == '\0') && (*(char *)(param_1[7] + 0x90) == '\x01')) {
    (**(code **)(*param_1 + 0x2f0))(param_1);
  }
  *(undefined1 *)((longlong)param_1 + 0x66) = 1;
  return;
}



// FUNCTION 1412f8ea0 FUN_1412f8ea0 body=1264 status=ok
// SIG undefined FUN_1412f8ea0(void)

void FUN_1412f8ea0(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 *local_a0;
  undefined1 local_91;
  char local_90 [16];
  longlong *local_80;
  int local_68;
  char local_60;
  undefined8 local_58;
  longlong *local_50;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(*(longlong *)(param_1 + 0x30) + 0x178) == '\x03') {
    lVar3 = *(longlong *)(param_1 + 0x38);
    if ((0 < *(int *)(lVar3 + 0xa0)) && (*(int *)(param_1 + 0x70) == 0)) {
      local_90[0] = '\0';
      local_68 = 0;
      FUN_1456bb102(local_90);
      local_60 = '\0';
      local_38 = 0;
      local_a0 = &local_91;
      local_a8 = 0;
      FUN_140c3fc86(*(longlong *)(param_1 + 0x38) + 0x98,param_1 + 0x68,
                    *(undefined8 *)(param_1 + 0x30),local_90);
      lVar3 = DAT_14c9a3da0;
      if ((longlong)local_38 != 0) {
        lVar8 = (longlong)local_38 + -1;
        lVar6 = lVar8 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar6),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar6));
        if (*(longlong *)(lVar3 + lVar6) != 0) {
          FUN_1400020a8();
        }
        lVar3 = DAT_14c9a3da0;
        iVar7 = (int)lVar8;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
        }
        *(undefined4 *)(lVar3 + lVar6) = 0xffffffff;
        iVar4 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar4 = DAT_14c9a3dd0;
        }
        *(int *)(lVar3 + 4 + lVar6) = iVar4;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar5 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar5 = DAT_14c9a3dc0;
        }
        iVar4 = iVar7 + 0x1f;
        if (-1 < iVar7) {
          iVar4 = iVar7;
        }
        bVar2 = (byte)lVar8 & 0x1f;
        DAT_14c9a3dd0 = iVar7;
        *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
             *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) &
             (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        local_38 = 0;
      }
      if (local_60 != '\0') {
        if (local_60 == '\x01') {
          local_58 = 0;
        }
        else if ((local_60 == '\x03') && (local_50 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_50 + 0x10))();
          }
        }
        local_60 = '\0';
      }
      lVar3 = DAT_14c9a3da0;
      if ((longlong)local_68 != 0) {
        lVar8 = (longlong)local_68 + -1;
        lVar6 = lVar8 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar6),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar6));
        if (*(longlong *)(lVar3 + lVar6) != 0) {
          FUN_1400020a8();
        }
        lVar3 = DAT_14c9a3da0;
        iVar7 = (int)lVar8;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
        }
        *(undefined4 *)(lVar3 + lVar6) = 0xffffffff;
        iVar4 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar4 = DAT_14c9a3dd0;
        }
        *(int *)(lVar3 + 4 + lVar6) = iVar4;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar5 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar5 = DAT_14c9a3dc0;
        }
        iVar4 = iVar7 + 0x1f;
        if (-1 < iVar7) {
          iVar4 = iVar7;
        }
        bVar2 = (byte)lVar8 & 0x1f;
        DAT_14c9a3dd0 = iVar7;
        *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
             *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) &
             (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        local_68 = 0;
      }
      if ((local_90[0] == '\x03') && (local_80 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_80 + 0x10))();
        }
      }
      lVar3 = *(longlong *)(param_1 + 0x38);
    }
    if ((0 < *(int *)(lVar3 + 0xb0)) && (*(int *)(param_1 + 0x80) == 0)) {
      local_90[0] = '\0';
      local_68 = 0;
      FUN_1456bb102(local_90,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x1b0));
      local_60 = '\0';
      local_38 = 0;
      local_a0 = &local_91;
      local_a8 = 0;
      FUN_140c3fc86(*(longlong *)(param_1 + 0x38) + 0xa8,param_1 + 0x78,
                    *(undefined8 *)(param_1 + 0x30),local_90);
      lVar3 = DAT_14c9a3da0;
      if ((longlong)local_38 != 0) {
        lVar6 = (longlong)local_38 + -1;
        lVar8 = lVar6 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar8),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar8));
        if (*(longlong *)(lVar3 + lVar8) != 0) {
          FUN_1400020a8();
        }
        lVar3 = DAT_14c9a3da0;
        iVar7 = (int)lVar6;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
        }
        *(undefined4 *)(lVar3 + lVar8) = 0xffffffff;
        iVar4 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar4 = DAT_14c9a3dd0;
        }
        *(int *)(lVar3 + 4 + lVar8) = iVar4;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar5 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar5 = DAT_14c9a3dc0;
        }
        iVar4 = iVar7 + 0x1f;
        if (-1 < iVar7) {
          iVar4 = iVar7;
        }
        bVar2 = (byte)lVar6 & 0x1f;
        DAT_14c9a3dd0 = iVar7;
        *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
             *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) &
             (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        local_38 = 0;
      }
      if (local_60 != '\0') {
        if (local_60 == '\x01') {
          local_58 = 0;
        }
        else if ((local_60 == '\x03') && (local_50 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_50 + 0x10))();
          }
        }
        local_60 = '\0';
      }
      lVar3 = DAT_14c9a3da0;
      if ((longlong)local_68 != 0) {
        lVar6 = (longlong)local_68 + -1;
        lVar8 = lVar6 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar8),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar8));
        if (*(longlong *)(lVar3 + lVar8) != 0) {
          FUN_1400020a8();
        }
        lVar3 = DAT_14c9a3da0;
        iVar7 = (int)lVar6;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
        }
        *(undefined4 *)(lVar3 + lVar8) = 0xffffffff;
        iVar4 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar4 = DAT_14c9a3dd0;
        }
        *(int *)(lVar3 + 4 + lVar8) = iVar4;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar5 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar5 = DAT_14c9a3dc0;
        }
        iVar4 = iVar7 + 0x1f;
        if (-1 < iVar7) {
          iVar4 = iVar7;
        }
        bVar2 = (byte)lVar6 & 0x1f;
        DAT_14c9a3dd0 = iVar7;
        *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
             *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) &
             (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        local_68 = 0;
      }
      if ((local_90[0] == '\x03') && (local_80 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_80 + 0x10))();
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412f9391 FUN_1412f9391 body=75 status=ok
// SIG undefined FUN_1412f9391(void)

void FUN_1412f9391(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1412f93dc FUN_1412f93dc body=75 status=ok
// SIG undefined FUN_1412f93dc(void)

void FUN_1412f93dc(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
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



// FUNCTION 1412f9427 FUN_1412f9427 body=276 status=ok
// SIG undefined FUN_1412f9427(void)

void FUN_1412f9427(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int *piVar4;
  
  puVar3 = (undefined8 *)(param_1 + 0x20);
  piVar4 = (int *)(param_2 + 0x28);
  do {
    puVar3[-4] = 0;
    iVar1 = piVar4[-8];
    pvVar2 = *(void **)(piVar4 + -10);
    *(int *)(puVar3 + -3) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)puVar3 + -0x14) = 0;
    }
    else {
      FUN_1446dd670(puVar3 + -4,iVar1,0);
      memcpy((void *)puVar3[-4],pvVar2,(longlong)iVar1 * 2);
    }
    puVar3[-2] = 0;
    iVar1 = piVar4[-4];
    pvVar2 = *(void **)(piVar4 + -6);
    *(int *)(puVar3 + -1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)puVar3 + -4) = 0;
    }
    else {
      FUN_1446dd670(puVar3 + -2,iVar1,0);
      memcpy((void *)puVar3[-2],pvVar2,(longlong)iVar1 * 2);
    }
    *puVar3 = 0;
    iVar1 = *piVar4;
    pvVar2 = *(void **)(piVar4 + -2);
    *(int *)(puVar3 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar3,iVar1,0);
      memcpy((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
    }
    puVar3 = puVar3 + 6;
    piVar4 = piVar4 + 0xc;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1412f953b FUN_1412f953b body=280 status=ok
// SIG undefined FUN_1412f953b(void)

void FUN_1412f953b(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = (undefined8 *)(param_1 + 0x20);
  puVar4 = (undefined4 *)(param_2 + 0x30);
  do {
    puVar3[-4] = 0;
    iVar1 = puVar4[-10];
    pvVar2 = *(void **)(puVar4 + -0xc);
    *(int *)(puVar3 + -3) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)puVar3 + -0x14) = 0;
    }
    else {
      FUN_1446dd670(puVar3 + -4,iVar1,0);
      memcpy((void *)puVar3[-4],pvVar2,(longlong)iVar1 * 2);
    }
    puVar3[-2] = 0;
    iVar1 = puVar4[-6];
    pvVar2 = *(void **)(puVar4 + -8);
    *(int *)(puVar3 + -1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)puVar3 + -4) = 0;
    }
    else {
      FUN_1446dd670(puVar3 + -2,iVar1,0);
      memcpy((void *)puVar3[-2],pvVar2,(longlong)iVar1 * 2);
    }
    *puVar3 = 0;
    iVar1 = puVar4[-2];
    pvVar2 = *(void **)(puVar4 + -4);
    *(int *)(puVar3 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar3,iVar1,0);
      memcpy((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
    }
    *(undefined4 *)(puVar3 + 2) = *puVar4;
    puVar3 = puVar3 + 7;
    puVar4 = puVar4 + 0xe;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1412f9654 FUN_1412f9654 body=1967 status=ok
// SIG undefined FUN_1412f9654(void)

void FUN_1412f9654(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_1c8 [32];
  undefined2 *local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined2 *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  uint *local_170;
  undefined1 *local_168;
  code *local_160;
  int local_14c;
  longlong local_148;
  longlong local_140;
  longlong *local_138;
  longlong local_130;
  undefined2 local_128;
  undefined2 uStack_126;
  undefined4 uStack_124;
  int local_120;
  longlong local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined1 local_fc [4];
  uint local_f8 [4];
  undefined1 local_e8;
  undefined8 local_e4;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  longlong *plStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined2 local_67;
  undefined1 local_65;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  plVar5 = (longlong *)FUN_1400d7050(param_1 + 6);
  if (plVar5 != (longlong *)0x0) {
    if (DAT_14cbadd90 == 0) {
      local_170 = local_f8;
      local_f8[0] = 0x41030f22;
      local_f8[1] = 1;
      local_160 = FUN_14081d0ea;
      local_168 = &LAB_1459f2e4c;
      local_178 = &LAB_148c39de3;
      local_180 = &LAB_1457a9eb2;
      local_188 = &DAT_149e063b2;
      local_190 = 0;
      local_198 = 0x10000004;
      local_1a0 = 0x10;
      local_1a8 = (undefined2 *)CONCAT44(local_1a8._4_4_,0x3de0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
        DAT_14cbadd90 + 0x30)) {
      if ((char)plVar5[0x657] == '\0') {
        local_118 = 0;
        lVar6 = (**(code **)(*param_1 + 0x180))(param_1);
        if (*(longlong *)(lVar6 + 0x1f0) == 0) {
          puVar10 = (undefined8 *)(lVar6 + 0x458);
        }
        else {
          puVar10 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
        }
        uVar7 = *puVar10;
        local_110 = (longlong *)0x0;
        local_108 = (longlong *)((ulonglong)local_108 & 0xffffffff00000000);
        FUN_1446efa72(&local_110,0,3,0x10);
        plVar5 = local_110;
        local_108 = (longlong *)CONCAT44(local_108._4_4_,3);
        *local_110 = (longlong)&PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 1;
        lVar6 = DAT_14c758608 + 1;
        if (lVar11 == 0) {
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 2;
          lVar6 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar6;
        local_110[2] = lVar11;
        *local_110 = (longlong)&PTR_FUN_14b9b9720;
        local_110[3] = 0;
        iVar12 = 0;
        if (param_1 != (longlong *)0x0) {
          uVar1 = *(uint *)((longlong)param_1 + 0xc);
          *(uint *)(local_110 + 3) = uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar6 = 0;
          }
          iVar12 = *(int *)(lVar6 + 0x10);
          if (*(int *)(lVar6 + 0x10) == 0) {
            LOCK();
            iVar12 = DAT_14c964868 + 1;
            UNLOCK();
            iVar13 = DAT_14c964868 + 1;
            bVar14 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar12;
            if (bVar14) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar13);
            }
            LOCK();
            iVar12 = *(int *)(lVar6 + 0x10);
            bVar14 = iVar12 == 0;
            if (bVar14) {
              *(int *)(lVar6 + 0x10) = iVar13;
              iVar12 = 0;
            }
            UNLOCK();
            if (bVar14) {
              iVar12 = iVar13;
            }
          }
        }
        *(int *)((longlong)plVar5 + 0x1c) = iVar12;
        plVar5[4] = (longlong)param_1;
        local_f8[0] = 0;
        local_f8[1] = 0;
        local_f8[2] = 0;
        FUN_14487d8d8(local_f8,&local_110);
        plStack_b8 = (longlong *)CONCAT71(plStack_b8._1_7_,1);
        local_1a8 = &local_128;
        local_128 = 0;
        uStack_124 = 0xbf800000;
        FUN_1406f4044(uVar7,&local_118,local_f8,0x3f000000);
        (*(code *)(&PTR_LAB_14a1c87a0)[(ulonglong)plStack_b8 & 0xff])(local_f8);
        plVar5 = local_110;
        if ((int)local_108 != 0) {
          if (local_110 == (longlong *)0x0) goto LAB_1412f984f;
          (**(code **)*local_110)(local_110,0);
          FUN_1446efa72(&local_110,0,0,0x10);
          local_108 = (longlong *)((ulonglong)local_108 & 0xffffffff00000000);
          plVar5 = local_110;
        }
      }
      else {
        uVar7 = FUN_140f7e331();
        FUN_14111d472(uVar7,&local_128);
        plVar8 = (longlong *)(**(code **)(*plVar5 + 0x14d0))(plVar5);
        if (plVar8 != (longlong *)0x0) {
          local_138 = param_1 + 9;
          FUN_145cc7936(local_138,0);
          local_148 = (longlong)local_120;
          if (local_148 != 0) {
            local_140 = CONCAT44(uStack_124,CONCAT22(uStack_126,local_128));
            local_148 = local_148 << 3;
            lVar6 = 0;
            do {
              local_118 = *(longlong *)(local_140 + lVar6);
              if (local_118 != 0) {
                local_f8[0] = local_f8[0] & 0xffffff00;
                local_f8[1] = 0;
                local_f8[2] = 0;
                local_f8[3] = 0;
                local_e8 = 0;
                uStack_d4 = 0;
                iStack_d0 = 0;
                local_e4 = 0;
                uStack_dc = 0;
                uStack_d8 = 0;
                local_c8 = 0xc69c4000;
                local_78 = 0;
                local_70 = 0;
                local_68 = 0;
                local_80 = 0;
                local_90 = 0;
                uStack_88 = 0;
                local_a0 = 0;
                uStack_98 = 0;
                local_b0 = 0;
                uStack_a8 = 0;
                local_c0 = 0;
                local_67 = 1;
                local_65 = 0;
                local_64 = 0;
                local_110 = (longlong *)0x0;
                local_108 = (longlong *)((ulonglong)local_108 & 0xffffffff00000000);
                plStack_b8 = plVar5;
                FUN_1446efa72(&local_110,0,3,0x10);
                plVar2 = local_110;
                local_108._0_4_ = 3;
                *local_110 = (longlong)&PTR_LAB_14b3e6310;
                LOCK();
                UNLOCK();
                lVar9 = DAT_14c758608 + 1;
                lVar11 = DAT_14c758608 + 1;
                if (lVar9 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar9 = DAT_14c758608 + 2;
                  lVar11 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar11;
                local_110[2] = lVar9;
                *local_110 = (longlong)&PTR_FUN_14b9b9790;
                local_110[3] = 0;
                if (param_1 == (longlong *)0x0) {
                  iVar12 = 0;
                }
                else {
                  uVar1 = *(uint *)((longlong)param_1 + 0xc);
                  *(uint *)(local_110 + 3) = uVar1;
                  if ((int)uVar1 < DAT_14c9647dc) {
                    lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
                  }
                  else {
                    lVar11 = 0;
                  }
                  iVar12 = *(int *)(lVar11 + 0x10);
                  if (*(int *)(lVar11 + 0x10) == 0) {
                    LOCK();
                    iVar12 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar13 = DAT_14c964868 + 1;
                    bVar14 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar12;
                    if (bVar14) {
                      local_14c = iVar13;
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,iVar13);
                      iVar13 = local_14c;
                    }
                    LOCK();
                    iVar12 = *(int *)(lVar11 + 0x10);
                    bVar14 = iVar12 == 0;
                    if (bVar14) {
                      *(int *)(lVar11 + 0x10) = iVar13;
                      iVar12 = 0;
                    }
                    UNLOCK();
                    if (bVar14) {
                      iVar12 = iVar13;
                    }
                  }
                }
                uVar4 = (int)local_108;
                plVar3 = local_110;
                *(int *)((longlong)plVar2 + 0x1c) = iVar12;
                plVar2[4] = (longlong)FUN_14575fb82;
                *(undefined4 *)(plVar2 + 5) = 0;
                local_110 = (longlong *)0x0;
                local_108 = (longlong *)((ulonglong)local_108._4_4_ << 0x20);
                if (iStack_d0 == 0) {
LAB_1412f9ae1:
                  if (CONCAT44(uStack_d4,uStack_d8) != 0) {
                    FUN_1400020a8();
                  }
                }
                else {
                  puVar10 = (undefined8 *)CONCAT44(uStack_d4,uStack_d8);
                  if (puVar10 != (undefined8 *)0x0) {
                    (**(code **)*puVar10)(puVar10,0);
                    FUN_1446efa72(&uStack_d8,0,0,0x10);
                    iStack_d0 = 0;
                    goto LAB_1412f9ae1;
                  }
                }
                uStack_d8 = SUB84(plVar3,0);
                uStack_d4 = (undefined4)((ulonglong)plVar3 >> 0x20);
                iStack_d0 = uVar4;
                if ((int)local_108 == 0) {
LAB_1412f9b28:
                  if (local_110 != (longlong *)0x0) {
                    FUN_1400020a8();
                  }
                }
                else if (local_110 != (longlong *)0x0) {
                  (**(code **)*local_110)(local_110,0);
                  FUN_1446efa72(&local_110,0,0,0x10);
                  local_108 = (longlong *)((ulonglong)local_108 & 0xffffffff00000000);
                  goto LAB_1412f9b28;
                }
                (**(code **)(*plVar8 + 0x28))(plVar8,&local_130,local_118 + 0x90,local_f8);
                if (local_130 != 0) {
                  local_110 = &local_118;
                  local_108 = &local_130;
                  FUN_1412f9e04(local_138,local_fc,&local_110,0);
                }
                FUN_1409838b8(local_f8);
              }
              lVar6 = lVar6 + 8;
            } while (local_148 != lVar6);
          }
        }
        plVar5 = (longlong *)CONCAT44(uStack_124,CONCAT22(uStack_126,local_128));
      }
      if (plVar5 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1412f984f:
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412f9e04 FUN_1412f9e04 body=349 status=ok
// SIG undefined FUN_1412f9e04(void)

undefined4 *
FUN_1412f9e04(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1412f9ffa(param_1,local_50);
  puVar1 = (ulonglong *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *local_48 = uVar4;
  local_48[1] = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_68 = param_4;
  cVar2 = FUN_1412f9f62(param_1,uVar3,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_48 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1412fa1e0(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412f9f62 FUN_1412f9f62 body=152 status=ok
// SIG undefined FUN_1412f9f62(void)

void FUN_1412f9f62(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
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
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_148d88866((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_1412f9fcb;
    }
  }
  uVar5 = 0;
LAB_1412f9fcb:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 1412f9ffa FUN_1412f9ffa body=485 status=ok
// SIG undefined FUN_1412f9ffa(void)

int * FUN_1412f9ffa(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_14482b872(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1412fa1e0 FUN_1412fa1e0 body=604 status=ok
// SIG undefined FUN_1412fa1e0(void)

void FUN_1412fa1e0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6;
        uVar13 = *(ulonglong *)(lVar11 + lVar10 * 0x18);
        uVar3 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x14 + lVar10 * 0x18) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x10 + lVar10 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_1412fa3da;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_1412fa3da:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412fa43e FUN_1412fa43e body=1261 status=ok
// SIG undefined FUN_1412fa43e(void)

void FUN_1412fa43e(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong *plVar5;
  uint *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 auStack_128 [32];
  wchar_t *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  wchar_t *local_f0;
  wchar_t *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  undefined2 **local_d0;
  code *local_c8;
  code *local_c0;
  longlong local_b8;
  int local_ac;
  longlong local_a8;
  ulonglong local_a0;
  undefined8 *local_98;
  uint *local_90;
  longlong local_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined2 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar18 = *param_1;
  uVar17 = 0;
  plVar5 = (longlong *)
           FUN_140d6a126(DAT_14c872ce0,L"Internationalization.AssetGroupClasses",0,param_2);
  if (plVar5 != (longlong *)0x0) {
    uVar2 = *(uint *)(plVar5 + 5);
    if (uVar2 == 0) {
      uVar15 = 1;
      iVar13 = 0;
      uVar4 = 0;
    }
    else {
      puVar6 = (uint *)plVar5[4];
      if ((uint *)plVar5[4] == (uint *)0x0) {
        puVar6 = (uint *)(plVar5 + 2);
      }
      uVar4 = *puVar6;
      if (uVar4 == 0) {
        iVar13 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar13 = uVar2 - 1;
        }
        uVar17 = 0;
        uVar15 = (ulonglong)(uint)(iVar13 >> 5);
        if (iVar13 >> 5 < 1) {
          uVar15 = uVar17;
        }
        iVar13 = 0;
        do {
          if (uVar15 == uVar17) goto LAB_1412fa519;
          iVar13 = iVar13 + 0x20;
          uVar4 = puVar6[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar4 == 0);
      }
      else {
        uVar17 = 0;
        iVar13 = 0;
      }
      uVar15 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar15 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar4 = (iVar13 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      if ((int)uVar2 <= (int)uVar4) {
        uVar4 = uVar2;
      }
    }
    if (uVar4 != uVar2) {
      local_98 = (undefined8 *)(lVar18 + 0x50);
      uVar12 = 0xffffffff;
      local_a0 = (ulonglong)uVar2;
      local_90 = (uint *)(plVar5 + 2);
      local_88 = lVar18;
      do {
        lVar18 = *plVar5;
        lVar11 = (longlong)(int)uVar4 * 0x40;
        local_80 = *(longlong *)(lVar18 + lVar11);
        iVar16 = *(int *)(lVar18 + 0x28 + lVar11);
        local_ac = iVar13;
        if (DAT_14c948f88 == 0) {
          local_50 = &DAT_1427db2a2;
          DAT_14c948f88 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          local_b8 = DAT_14c948f88;
          FUN_1446f470e(&local_78,L"Struct",1);
          local_d0 = &local_50;
          local_d8 = &LAB_146891313;
          local_e0 = FUN_146272f63;
          local_f0 = L"Engine";
          local_e8 = (wchar_t *)CONCAT44(local_e8._4_4_,199);
          local_f8 = 8;
          local_100 = 0x10000020;
          local_108._0_4_ = 8;
          FUN_14574b4b2(local_b8);
          DAT_14c948f88 = local_b8;
          local_a8 = DAT_14c927740;
          if (DAT_14c927740 == 0) {
            local_60 = FUN_1449e2820;
            local_c0 = FUN_14081d0ea;
            local_c8 = FUN_14081d0ea;
            local_d0 = (undefined2 **)&local_60;
            local_d8 = &LAB_146856450;
            local_e0 = FUN_1427b121c;
            local_e8 = L"Engine";
            local_f0 = (wchar_t *)0x0;
            local_f8 = CONCAT44(local_f8._4_4_,0x10000021);
            local_100 = 8;
            local_108._0_4_ = 0x28;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
            local_b8 = DAT_14c948f88;
          }
          DAT_14c948f88 = local_b8;
          local_a8 = DAT_14c927740;
          uVar8 = FUN_1400163b0();
          local_108 = L"Struct";
          FUN_14574b446(uVar8,local_b8,local_a8,L"/Script/CoreUObject");
        }
        local_108 = L"ReadAssetGroupClassSettings";
        FUN_146891db8(&local_60,DAT_14c948f88,
                      lVar18 + lVar11 + (ulonglong)(iVar16 - 2U < 0x7fffffff) * 0x10 + 0x10,1);
        puVar3 = local_98;
        iVar13 = local_ac;
        plVar7 = *(longlong **)(local_88 + 0x50);
        iVar16 = *(int *)(local_88 + 0x58);
        lVar18 = (longlong)iVar16;
        if (lVar18 != 0) {
          lVar11 = lVar18 * 0x18;
          plVar14 = plVar7;
          do {
            if (((code *)*plVar14 == local_60) && (plVar14[1] == CONCAT44(uStack_54,uStack_58))) {
              if (plVar14 != (longlong *)0x0) goto LAB_1412fa66e;
              break;
            }
            plVar14 = plVar14 + 3;
            lVar11 = lVar11 + -0x18;
          } while (lVar11 != 0);
        }
        local_78 = (undefined4)local_60;
        uStack_74 = local_60._4_4_;
        uStack_70 = uStack_58;
        uStack_6c = uStack_54;
        *(uint *)(local_88 + 0x58) = iVar16 + 1U;
        if (*(uint *)(local_88 + 0x5c) < iVar16 + 1U) {
          FUN_146872e40(local_98,iVar16);
          plVar7 = (longlong *)*puVar3;
        }
        plVar14 = plVar7 + lVar18 * 3;
        *(undefined4 *)plVar14 = local_78;
        *(undefined4 *)((longlong)plVar14 + 4) = uStack_74;
        *(undefined4 *)(plVar14 + 1) = uStack_70;
        *(undefined4 *)((longlong)plVar14 + 0xc) = uStack_6c;
        plVar7[lVar18 * 3 + 2] = local_80;
LAB_1412fa66e:
        uVar12 = uVar12 & ~(uint)uVar15;
        puVar6 = (uint *)plVar5[4];
        if ((uint *)plVar5[4] == (uint *)0x0) {
          puVar6 = local_90;
        }
        uVar2 = *(uint *)(plVar5 + 5);
        iVar16 = (int)uVar17;
        lVar18 = (longlong)iVar16;
        uVar4 = puVar6[lVar18] & uVar12;
        if (uVar4 == 0) {
          iVar9 = uVar2 + 0x1e;
          if (-1 < (int)(uVar2 - 1)) {
            iVar9 = uVar2 - 1;
          }
          iVar9 = iVar9 >> 5;
          iVar13 = iVar13 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar16) {
            iVar10 = iVar16;
          }
          if (iVar16 < iVar9) {
            lVar11 = 0;
            do {
              uVar4 = (puVar6 + lVar18 + 1)[lVar11];
              if (uVar4 != 0) {
                uVar17 = (ulonglong)(iVar16 + (int)lVar11 + 1);
                uVar12 = 0xffffffff;
                goto LAB_1412fa6f1;
              }
              iVar13 = iVar13 + 0x20;
              lVar11 = lVar11 + 1;
            } while (iVar10 - lVar18 != lVar11);
            uVar12 = 0xffffffff;
            iVar16 = iVar10;
          }
          uVar17 = (ulonglong)(iVar16 + 1);
          uVar4 = uVar2;
        }
        else {
LAB_1412fa6f1:
          uVar15 = (ulonglong)(-uVar4 & uVar4);
          uVar1 = uVar15 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          uVar4 = (iVar13 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          if ((int)uVar2 <= (int)uVar4) {
            uVar4 = uVar2;
          }
        }
      } while (uVar4 != (uint)local_a0);
    }
  }
LAB_1412fa519:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412fa92c FUN_1412fa92c body=637 status=ok
// SIG undefined FUN_1412fa92c(void)

longlong * FUN_1412fa92c(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar2 = (int)param_3[1];
  if (iVar2 < 2) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
  }
  if ((longlong)*(int *)(param_1 + 0x48) == 0) {
LAB_1412fa96c:
    plVar4 = (longlong *)FUN_14001cc68(0x110,0x10);
    plVar4[1] = (longlong)&DAT_100000001;
    *plVar4 = (longlong)&PTR_FUN_149e62610;
    FUN_1458cf376(plVar4 + 2,param_1,param_3);
    *param_2 = (longlong)(plVar4 + 2);
    param_2[1] = (longlong)plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
    local_58 = 0;
    uStack_50 = 0;
    FUN_1412fac7e(&local_58,0,0,0);
    if ((longlong)(int)uStack_50 != 0) {
      lVar11 = *param_2;
      lVar9 = (longlong)(int)uStack_50 << 4;
      lVar10 = local_58;
      do {
        FUN_1412fabac(lVar11,lVar10);
        lVar10 = lVar10 + 0x10;
        lVar9 = lVar9 + -0x10;
      } while (lVar9 != 0);
    }
    FUN_1458cf280(&local_78,param_3,param_2);
    iVar2 = *(int *)(param_1 + 0x48);
    uVar3 = iVar2 + 1;
    *(uint *)(param_1 + 0x48) = uVar3;
    if (*(uint *)(param_1 + 0x4c) < uVar3) {
      FUN_1458cf2f2((longlong *)(param_1 + 0x40));
    }
    lVar11 = *(longlong *)(param_1 + 0x40);
    lVar10 = (longlong)iVar2 * 0x20;
    *(undefined8 *)(lVar11 + lVar10) = 0;
    *(undefined8 *)(lVar11 + lVar10) = local_78;
    local_78 = 0;
    *(undefined4 *)(lVar11 + 8 + lVar10) = (undefined4)local_70;
    *(undefined4 *)(lVar11 + 0xc + lVar10) = local_70._4_4_;
    local_70 = 0;
    *(undefined8 *)(lVar11 + 0x10 + lVar10) = local_68;
    *(undefined8 *)(lVar11 + 0x18 + lVar10) = uStack_60;
    local_68 = 0;
    uStack_60 = 0;
    FUN_1458cf234();
    FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
LAB_1412faaa4:
    if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  plVar4 = *(longlong **)(param_1 + 0x40);
  plVar5 = plVar4 + (longlong)*(int *)(param_1 + 0x48) * 4;
LAB_1412faaf4:
  if ((int)plVar4[1] == iVar2) {
    lVar11 = 0;
    do {
      uVar7 = *(ushort *)(*plVar4 + lVar11);
      uVar8 = (ulonglong)uVar7;
      uVar6 = *(ushort *)(*param_3 + lVar11);
      if (uVar7 == uVar6) {
        if (uVar7 == 0) goto LAB_1412fab82;
      }
      else {
        if (0x7f < (uVar6 | uVar7)) goto LAB_1412fab7a;
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        uVar12 = (ulonglong)uVar6;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
        if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar12]) goto LAB_1412fab7a;
      }
      lVar11 = lVar11 + 2;
    } while( true );
  }
  if ((int)plVar4[1] + iVar2 != 1) goto LAB_1412fab4a;
  goto LAB_1412fab82;
LAB_1412fab7a:
  if (uVar7 == uVar6) {
LAB_1412fab82:
    if (plVar4 != (longlong *)0x0) {
      *param_2 = plVar4[2];
      lVar11 = plVar4[3];
      param_2[1] = lVar11;
      if (lVar11 != 0) {
        LOCK();
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
        UNLOCK();
      }
      goto LAB_1412faaa4;
    }
    goto LAB_1412fa96c;
  }
LAB_1412fab4a:
  plVar4 = plVar4 + 4;
  if (plVar4 == plVar5) goto LAB_1412fa96c;
  goto LAB_1412faaf4;
}



// FUNCTION 1412fabac FUN_1412fabac body=59 status=ok
// SIG undefined FUN_1412fabac(void)

void FUN_1412fabac(LPCRITICAL_SECTION param_1,undefined8 param_2)

{
  EnterCriticalSection(param_1);
  FUN_1412fabe8(param_1 + 2,param_2);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001412fabd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 1412fabe8 FUN_1412fabe8 body=149 status=ok
// SIG undefined FUN_1412fabe8(void)

int FUN_1412fabe8(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  int iVar4;
  longlong lVar5;
  
  iVar4 = FUN_144a075de();
  if (iVar4 == -1) {
    iVar4 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
      FUN_1447a1bd6(param_1,iVar4);
    }
    lVar3 = *param_1;
    lVar5 = (longlong)iVar4 * 0x10;
    puVar1 = (undefined8 *)(lVar3 + lVar5);
    *(undefined8 *)(lVar3 + lVar5) = 0;
    iVar2 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(lVar3 + 8 + lVar5) = iVar2;
    if ((longlong)iVar2 == 0) {
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar2,0);
      memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
    }
  }
  return iVar4;
}



// FUNCTION 1412fac7e FUN_1412fac7e body=1015 status=ok
// SIG undefined FUN_1412fac7e(void)

void FUN_1412fac7e(longlong *param_1,byte param_2,byte param_3,byte param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  PVOID pvVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong lVar6;
  short *_Dst;
  int iVar7;
  PSRWLOCK SRWLock;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  
  SRWLock = (PSRWLOCK)FUN_1412fb076();
  AcquireSRWLockShared(SRWLock);
  iVar7 = *(int *)&SRWLock[0x32].Ptr;
  iVar9 = (uint)param_2 + iVar7;
  if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar9);
  }
  if (*(int *)((longlong)param_1 + 0xc) < iVar9) {
    FUN_1408be2c4(param_1);
    iVar7 = *(int *)&SRWLock[0x32].Ptr;
  }
  if (iVar7 != 0) {
    pvVar3 = SRWLock[0x31].Ptr;
    lVar10 = 0;
    do {
      puVar4 = *(undefined8 **)((longlong)pvVar3 + lVar10);
      if ((*(byte *)(puVar4 + 6) & 6) == 0 && (*(byte *)(puVar4 + 6) & 1) == 0) {
        iVar9 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar9 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar9 + 1U) {
          FUN_1447a1bd6(param_1,iVar9);
        }
        lVar13 = *param_1;
        lVar12 = (longlong)iVar9 * 0x10;
        puVar1 = (undefined8 *)(lVar13 + lVar12);
        *(undefined8 *)(lVar13 + lVar12) = 0;
        iVar9 = *(int *)(puVar4 + 1);
        pvVar5 = (void *)*puVar4;
        *(int *)(lVar13 + 8 + lVar12) = iVar9;
        if ((longlong)iVar9 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar9,0);
          memcpy((void *)*puVar1,pvVar5,(longlong)iVar9 * 2);
        }
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar7 * 8 != lVar10);
    iVar7 = *(int *)&SRWLock[0x32].Ptr;
    if ((longlong)iVar7 != 0) {
      pvVar3 = SRWLock[0x31].Ptr;
      lVar10 = 0;
      do {
        puVar4 = *(undefined8 **)((longlong)pvVar3 + lVar10);
        if ((*(byte *)(puVar4 + 6) & 1) != 0) {
          iVar9 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar9 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar9 + 1U) {
            FUN_1447a1bd6(param_1,iVar9);
          }
          lVar13 = *param_1;
          lVar12 = (longlong)iVar9 * 0x10;
          puVar1 = (undefined8 *)(lVar13 + lVar12);
          *(undefined8 *)(lVar13 + lVar12) = 0;
          iVar9 = *(int *)(puVar4 + 1);
          pvVar5 = (void *)*puVar4;
          *(int *)(lVar13 + 8 + lVar12) = iVar9;
          if ((longlong)iVar9 == 0) {
            *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar1,iVar9,0);
            memcpy((void *)*puVar1,pvVar5,(longlong)iVar9 * 2);
          }
        }
        lVar10 = lVar10 + 8;
      } while ((longlong)iVar7 * 8 != lVar10);
    }
  }
  if (param_2 != 0) {
    iVar7 = *(int *)&SRWLock[0x32].Ptr;
    if ((longlong)iVar7 != 0) {
      pvVar3 = SRWLock[0x31].Ptr;
      lVar10 = 0;
      do {
        puVar4 = *(undefined8 **)((longlong)pvVar3 + lVar10);
        if ((*(byte *)(puVar4 + 6) & 6) == 2 && (*(byte *)(puVar4 + 6) & 1) == 0) {
          iVar9 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar9 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar9 + 1U) {
            FUN_1447a1bd6(param_1,iVar9);
          }
          lVar13 = *param_1;
          lVar12 = (longlong)iVar9 * 0x10;
          puVar1 = (undefined8 *)(lVar13 + lVar12);
          *(undefined8 *)(lVar13 + lVar12) = 0;
          iVar9 = *(int *)(puVar4 + 1);
          pvVar5 = (void *)*puVar4;
          *(int *)(lVar13 + 8 + lVar12) = iVar9;
          if ((longlong)iVar9 == 0) {
            *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar1,iVar9,0);
            memcpy((void *)*puVar1,pvVar5,(longlong)iVar9 * 2);
          }
        }
        lVar10 = lVar10 + 8;
      } while ((longlong)iVar7 * 8 != lVar10);
    }
    iVar7 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar7 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
      FUN_1447a1bd6(param_1,iVar7);
    }
    lVar10 = *param_1;
    lVar13 = (longlong)iVar7 * 0x10;
    puVar4 = (undefined8 *)(lVar10 + lVar13);
    *(undefined8 *)(lVar10 + lVar13) = 0;
    iVar7 = *(int *)&SRWLock[10].Ptr;
    pvVar5 = SRWLock[9].Ptr;
    *(int *)(lVar10 + 8 + lVar13) = iVar7;
    if ((longlong)iVar7 == 0) {
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar4,iVar7,0);
      memcpy((void *)*puVar4,pvVar5,(longlong)iVar7 * 2);
    }
  }
  ReleaseSRWLockShared(SRWLock);
  if (((param_3 | param_4) == 1) && (lVar10 = param_1[1], (longlong)(int)lVar10 != 0)) {
    lVar13 = *param_1;
    lVar12 = 0;
    do {
      if (param_4 != 0) {
        iVar7 = *(int *)(lVar13 + 8 + lVar12);
        uVar8 = iVar7 - 1;
        if (iVar7 == 0) {
          uVar8 = 0;
        }
        if (1 < (int)uVar8) {
          lVar6 = *(longlong *)(lVar13 + lVar12);
          uVar11 = (ulonglong)uVar8;
          if (*(short *)(lVar6 + -2 + uVar11 * 2) == 0x2f) {
            if (iVar7 - uVar8 != 0) {
              memmove((void *)(lVar6 + uVar11 * 2 + -2),(void *)(lVar6 + uVar11 * 2),
                      (longlong)(int)(iVar7 - uVar8) * 2);
              iVar7 = *(int *)(lVar13 + 8 + lVar12);
            }
            *(int *)(lVar13 + 8 + lVar12) = iVar7 + -1;
          }
        }
      }
      if (((param_3 != 0) && (iVar7 = *(int *)(lVar13 + 8 + lVar12), iVar7 - 3U < 0x7ffffffe)) &&
         (_Dst = *(short **)(lVar13 + lVar12), *_Dst == 0x2f)) {
        memmove(_Dst,_Dst + 1,(ulonglong)(iVar7 - 1) * 2);
        piVar2 = (int *)(lVar13 + 8 + lVar12);
        *piVar2 = *piVar2 + -1;
      }
      lVar12 = lVar12 + 0x10;
    } while ((longlong)(int)lVar10 * 0x10 != lVar12);
  }
  return;
}



// FUNCTION 1412fb076 FUN_1412fb076 body=108 status=ok
// SIG undefined FUN_1412fb076(void)

undefined * FUN_1412fb076(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c948490) {
    FUN_144b3d300(&DAT_14c948490);
    if (DAT_14c948490 == -1) {
      FUN_1400684da(&DAT_14c9482f8);
      atexit(FUN_1427b7fa2);
      _Init_thread_footer(&DAT_14c948490);
    }
  }
  return &DAT_14c9482f8;
}



// FUNCTION 1412fb0ed FUN_1412fb0ed body=105 status=ok
// SIG undefined FUN_1412fb0ed(void)

void FUN_1412fb0ed(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x28);
    do {
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar3 + 4) * 0x120));
      if (pcVar1 != (code *)0x0) {
        puVar2 = puVar3;
        if (0x18 < *(ushort *)(puVar3 + 3)) {
          puVar2 = (undefined8 *)*puVar3;
        }
        (*pcVar1)(puVar2);
      }
      if (0x18 < *(ushort *)(puVar3 + 3)) {
        FUN_1400020a8(*puVar3);
      }
      puVar3 = puVar3 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1412fb156 FUN_1412fb156 body=2491 status=ok
// SIG undefined FUN_1412fb156(void)

void FUN_1412fb156(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  byte *pbVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined1 auStack_2e8 [32];
  longlong *local_2c8;
  longlong *local_2c0;
  longlong *local_2b8;
  longlong local_2b0;
  undefined8 *local_2a8;
  longlong local_2a0;
  undefined8 *local_298;
  undefined8 *local_290;
  undefined8 *local_288;
  undefined8 *local_280;
  undefined1 local_274 [4];
  longlong local_270;
  undefined4 local_268;
  undefined1 local_260 [4];
  undefined1 local_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  longlong lStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1ec;
  undefined4 local_1e4;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8 [5];
  undefined8 local_1a0;
  undefined2 local_198;
  undefined8 local_194 [2];
  int local_180;
  int iStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  longlong lStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 auStack_d8 [5];
  undefined8 local_b0;
  undefined2 local_a8;
  undefined8 auStack_a4 [2];
  undefined1 local_90 [40];
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  local_90[0] = 0;
  local_68 = 0;
  FUN_14119f284(param_1 + 0x30,6);
  if ((((byte *)*param_2 != (byte *)0x0) && ((*(byte *)*param_2 & 3) != 0)) &&
     (cVar4 = FUN_144a7c06e(param_2), cVar4 != '\0')) {
    pbVar3 = (byte *)*param_2;
    plVar9 = &DAT_14c9a1288;
    if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 2) != 0)) {
      plVar9 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
    }
    if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
      plVar12 = plVar9 + 8;
      if ((longlong *)plVar9[9] != (longlong *)0x0) {
        plVar12 = (longlong *)plVar9[9];
      }
      iVar11 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar9[10] - 1U & DAT_14cbe7410) * 4);
      if (iVar11 != -1) {
        lVar13 = *plVar9;
        iVar14 = iVar11;
        do {
          if (*(uint *)(lVar13 + (longlong)iVar14 * 0x40) == DAT_14cbe7410) goto LAB_1412fb23a;
          iVar14 = *(int *)((longlong)iVar14 * 0x40 + lVar13 + 0x38);
        } while (iVar14 != -1);
      }
    }
  }
  goto LAB_1412fb9d7;
  while (iVar11 = *(int *)(lVar15 + 0x38), iVar11 != -1) {
LAB_1412fb23a:
    lVar15 = lVar13 + (longlong)iVar11 * 0x40;
    if (*(uint *)(lVar13 + (longlong)iVar11 * 0x40) == DAT_14cbe7410) goto LAB_1412fb24f;
  }
  lVar15 = 0;
LAB_1412fb24f:
  pbVar3 = *(byte **)(lVar15 + 0x28);
  plVar9 = &DAT_14c9a1288;
  if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 2) != 0)) {
    plVar9 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
  }
  uStack_160 = CONCAT44(uStack_160._4_4_,DAT_14cbe7528);
  local_168 = DAT_14cbe7520;
  FUN_1448075d0(&local_258,&local_168);
  if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
    plVar12 = plVar9 + 8;
    plVar10 = (longlong *)plVar9[9];
    if ((longlong *)plVar9[9] == (longlong *)0x0) {
      plVar10 = plVar12;
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar9[10] - 1U & (uint)local_258) * 4);
    if (iVar11 != -1) {
      do {
        lVar13 = *plVar9 + (longlong)iVar11 * 0x40;
        if (*(uint *)(*plVar9 + (longlong)iVar11 * 0x40) == (uint)local_258) {
          if (lStack_240 != 0) {
            FUN_1400020a8();
          }
          local_2c0 = plVar12;
          local_2b8 = plVar9;
          if (lVar13 == 0) goto LAB_1412fb9d7;
          puVar6 = (undefined8 *)FUN_1407cbaec(lVar13 + 0x28);
          if ((longlong)*(int *)(puVar6 + 2) == 0) goto LAB_1412fb920;
          puVar16 = (undefined8 *)*puVar6;
          local_280 = puVar16 + (longlong)*(int *)(puVar6 + 2) * 2;
          local_288 = auStack_d8;
          local_298 = auStack_a4;
          local_2a8 = local_1c8;
          local_290 = local_194;
          local_2a0 = param_1 + 0x78;
          local_2c8 = (longlong *)(param_1 + 0xe0);
          local_2b0 = param_1 + 0xf0;
          goto LAB_1412fb3b1;
        }
        iVar11 = *(int *)(lVar13 + 0x38);
      } while (iVar11 != -1);
    }
  }
  if (lStack_240 != 0) {
    FUN_1400020a8();
  }
  goto LAB_1412fb9d7;
LAB_1412fb3b1:
  pbVar3 = (byte *)*puVar16;
  plVar9 = &DAT_14c9a1288;
  if ((pbVar3 != (byte *)0x0) && (plVar9 = &DAT_14c9a1288, (*pbVar3 & 2) != 0)) {
    plVar9 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
  }
  uStack_160 = CONCAT44(uStack_160._4_4_,DAT_14cbe7558);
  local_168 = DAT_14cbe7550;
  FUN_1448075d0(&local_258,&local_168);
  if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
    plVar12 = plVar9 + 8;
    plVar10 = (longlong *)plVar9[9];
    if ((longlong *)plVar9[9] == (longlong *)0x0) {
      plVar10 = plVar12;
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar9[10] - 1U & (uint)local_258) * 4);
    if (iVar11 != -1) {
      do {
        if (*(uint *)(*plVar9 + (longlong)iVar11 * 0x40) == (uint)local_258) {
          local_268 = DAT_14cbe7570;
          local_270 = DAT_14cbe7568;
          FUN_1448075d0(&local_168,&local_270);
          if ((int)plVar9[2] == *(int *)((longlong)plVar9 + 0x3c)) goto LAB_1412fba4b;
          plVar10 = (longlong *)plVar9[9];
          if ((longlong *)plVar9[9] == (longlong *)0x0) {
            plVar10 = plVar12;
          }
          iVar11 = *(int *)((longlong)plVar10 +
                           (ulonglong)((int)plVar9[10] - 1U & (uint)local_168) * 4);
          if (iVar11 == -1) goto LAB_1412fba4b;
          goto LAB_1412fb4a4;
        }
        iVar11 = *(int *)((longlong)iVar11 * 0x40 + *plVar9 + 0x38);
      } while (iVar11 != -1);
    }
  }
  goto LAB_1412fba58;
  while (iVar11 = *(int *)((longlong)iVar11 * 0x40 + *plVar9 + 0x38), iVar11 != -1) {
LAB_1412fb4a4:
    if (*(uint *)(*plVar9 + (longlong)iVar11 * 0x40) == (uint)local_168) {
      if (lStack_150 != 0) {
        FUN_1400020a8();
      }
      if (lStack_240 != 0) {
        FUN_1400020a8();
      }
      local_108 = 0;
      local_100 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      lStack_150 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_fc = 0xffffffff00000080;
      local_f4 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_288[4] = 0;
      local_288[2] = 0;
      local_288[3] = 0;
      *local_288 = 0;
      local_288[1] = 0;
      local_b0 = 0xf;
      local_a8 = 1;
      *local_298 = 0;
      local_298[1] = 0;
      local_268 = DAT_14cbe7558;
      local_270 = DAT_14cbe7550;
      FUN_1448075d0(&local_258,&local_270);
      lVar13 = 0;
      if ((int)plVar9[2] == *(int *)((longlong)plVar9 + 0x3c)) goto LAB_1412fb5d2;
      plVar10 = (longlong *)plVar9[9];
      if ((longlong *)plVar9[9] == (longlong *)0x0) {
        plVar10 = plVar12;
      }
      iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar9[10] - 1U & (uint)local_258) * 4)
      ;
      if (iVar11 == -1) goto LAB_1412fba2e;
      goto LAB_1412fb5b4;
    }
  }
LAB_1412fba4b:
  if (lStack_150 != 0) {
    FUN_1400020a8();
  }
LAB_1412fba58:
  if (lStack_240 != 0) {
    FUN_1400020a8();
  }
  goto LAB_1412fb8ae;
  while (iVar11 = *(int *)(lVar13 + 0x38), iVar11 != -1) {
LAB_1412fb5b4:
    lVar13 = *plVar9 + (longlong)iVar11 * 0x40;
    if (*(uint *)(*plVar9 + (longlong)iVar11 * 0x40) == (uint)local_258) goto LAB_1412fb5d2;
  }
LAB_1412fba2e:
  lVar13 = 0;
LAB_1412fb5d2:
  pbVar3 = *(byte **)(lVar13 + 0x28);
  if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) != 1)) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(pbVar3 + 8);
  }
  FUN_1400b22c2(&local_270,uVar7);
  cVar4 = FUN_14088c870(&local_168,&local_270);
  if (local_270 != 0) {
    FUN_1400020a8();
  }
  if (lStack_240 != 0) {
    FUN_1400020a8();
  }
  if (cVar4 != '\0') {
    local_268 = DAT_14cbe7570;
    local_270 = DAT_14cbe7568;
    FUN_1448075d0(&local_258);
    if ((int)plVar9[2] == *(int *)((longlong)plVar9 + 0x3c)) {
LAB_1412fba35:
      lVar13 = 0;
    }
    else {
      if ((longlong *)plVar9[9] != (longlong *)0x0) {
        plVar12 = (longlong *)plVar9[9];
      }
      iVar11 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar9[10] - 1U & (uint)local_258) * 4)
      ;
      if (iVar11 == -1) goto LAB_1412fba35;
      do {
        lVar13 = *plVar9 + (longlong)iVar11 * 0x40;
        if (*(uint *)(*plVar9 + (longlong)iVar11 * 0x40) == (uint)local_258) break;
        iVar11 = *(int *)(lVar13 + 0x38);
        lVar13 = 0;
      } while (iVar11 != -1);
    }
    if (*(longlong *)(lVar13 + 0x28) == 0) {
      cVar4 = '\0';
    }
    else {
      cVar4 = FUN_14000584e(*(longlong *)(lVar13 + 0x28),0);
    }
    if (lStack_240 != 0) {
      FUN_1400020a8();
    }
    uVar7 = FUN_14087dee0(&local_168);
    local_25c = 0;
    puVar8 = (uint *)FUN_1412fbb12(param_1,&local_168,local_260,uVar7);
    if (puVar8 != (uint *)0x0) {
      uVar2 = *puVar8;
      local_270 = CONCAT44(local_270._4_4_,uVar2);
      local_1f8 = 0;
      local_1f0 = 0;
      local_258 = 0;
      uStack_250 = 0;
      local_248 = 0;
      lStack_240 = 0;
      local_238 = 0;
      uStack_230 = 0;
      local_228 = 0;
      uStack_220 = 0;
      local_218 = 0;
      uStack_210 = 0;
      local_1ec = 0xffffffff00000080;
      local_1e4 = 0;
      local_1d8 = 0;
      local_1d0 = 0;
      local_2a8[4] = 0;
      local_2a8[2] = 0;
      local_2a8[3] = 0;
      *local_2a8 = 0;
      local_2a8[1] = 0;
      local_1a0 = 0xf;
      local_198 = 1;
      local_170 = 0;
      *local_290 = 0;
      local_290[1] = 0;
      iStack_178 = 0;
      uStack_174 = (uint)uStack_174._3_1_ << 0x18;
      local_180 = 0;
      iStack_17c = 0;
      lVar13 = 0;
      if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
        lVar13 = *(longlong *)(param_1 + 0x80);
        if (*(longlong *)(param_1 + 0x80) == 0) {
          lVar13 = local_2a0;
        }
        iVar11 = *(int *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x88) - 1U & uVar2) * 4);
        if (iVar11 == -1) {
          lVar13 = 0;
        }
        else {
          do {
            lVar13 = *(longlong *)(param_1 + 0x40) + (longlong)iVar11 * 0x100;
            if (*(uint *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar11 * 0x100) == uVar2) break;
            iVar11 = *(int *)(lVar13 + 0xf8);
            lVar13 = 0;
          } while (iVar11 != -1);
        }
      }
      FUN_1407b25f0(&local_258,lVar13 + 0x10);
      local_180 = DAT_14c7640d0;
      local_170 = CONCAT44((undefined4)local_270,(undefined4)local_170);
      DAT_14c7640d0 = DAT_14c7640d0 + 1;
      FUN_1412fc308(param_1);
      if (cVar4 != '\0') {
        iVar11 = *(int *)(param_1 + 0xe8);
        *(uint *)(param_1 + 0xe8) = iVar11 + 1U;
        if (*(uint *)(param_1 + 0xec) < iVar11 + 1U) {
          FUN_14088cbea(local_2c8,iVar11);
        }
        lVar13 = *local_2c8;
        lVar15 = (longlong)iVar11 * 0xf0;
        FUN_140d8ebf0(lVar13 + lVar15,&local_258);
        piVar1 = (int *)(lVar13 + 0xd8 + lVar15);
        *piVar1 = local_180;
        piVar1[1] = iStack_17c;
        piVar1[2] = iStack_178;
        piVar1[3] = uStack_174;
        *(undefined8 *)(lVar13 + 0xe8 + lVar15) = local_170;
        FUN_1412800a8(local_2b0,local_274,&local_270);
      }
      FUN_140368b56(&local_258);
    }
  }
  FUN_140368b56(&local_168);
LAB_1412fb8ae:
  puVar16 = puVar16 + 2;
  if (puVar16 == local_280) goto LAB_1412fb920;
  goto LAB_1412fb3b1;
LAB_1412fb920:
  uStack_160 = CONCAT44(uStack_160._4_4_,DAT_14cbe7540);
  local_168 = DAT_14cbe7538;
  FUN_1448075d0(&local_258);
  if ((int)local_2b8[2] != *(int *)((longlong)local_2b8 + 0x3c)) {
    plVar9 = local_2c0;
    if ((longlong *)local_2b8[9] != (longlong *)0x0) {
      plVar9 = (longlong *)local_2b8[9];
    }
    iVar11 = *(int *)((longlong)plVar9 + (ulonglong)((int)local_2b8[10] - 1U & (uint)local_258) * 4)
    ;
    if (iVar11 != -1) {
      do {
        lVar13 = *local_2b8 + (longlong)iVar11 * 0x40;
        if (*(uint *)(*local_2b8 + (longlong)iVar11 * 0x40) == (uint)local_258) {
          if (lStack_240 != 0) {
            FUN_1400020a8();
          }
          if (lVar13 == 0) goto LAB_1412fbb00;
          uVar5 = FUN_140e1edd4(lVar13 + 0x28,0xffffffff);
          *(undefined4 *)(param_1 + 0x148) = uVar5;
          goto LAB_1412fb9ca;
        }
        iVar11 = *(int *)(lVar13 + 0x38);
      } while (iVar11 != -1);
    }
  }
  if (lStack_240 != 0) {
    FUN_1400020a8();
  }
LAB_1412fbb00:
  uVar5 = *(undefined4 *)(param_1 + 0x148);
LAB_1412fb9ca:
  FUN_1412fcac6(param_1,1,uVar5);
LAB_1412fb9d7:
  FUN_144a5ac3a(local_90);
  if ((local_60 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412fbb12 FUN_1412fbb12 body=1879 status=ok
// SIG undefined FUN_1412fbb12(void)

longlong FUN_1412fbb12(longlong param_1,undefined8 param_2,uint *param_3,longlong param_4)

{
  longlong *plVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  longlong *plVar17;
  undefined1 auStack_188 [40];
  ulonglong local_160;
  longlong *local_158;
  int local_14c;
  int local_148 [2];
  uint *local_140;
  uint local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  uint local_58;
  int iStack_54;
  uint uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (((char)param_3[1] == '\x01') && (*(int *)(param_1 + 0x98) != *(int *)(param_1 + 0xc4))) {
    uVar9 = *param_3;
    lVar6 = param_1 + 200;
    if (*(longlong *)(param_1 + 0xd0) != 0) {
      lVar6 = *(longlong *)(param_1 + 0xd0);
    }
    iVar13 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0xd8) - 1U & uVar9) * 4);
    if (iVar13 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x90);
      iVar12 = iVar13;
      do {
        if (*(uint *)(lVar6 + (longlong)iVar12 * 0x10) == uVar9) goto LAB_1412fc1ab;
        iVar12 = *(int *)((longlong)iVar12 * 0x10 + lVar6 + 8);
      } while (iVar12 != -1);
    }
  }
  local_138 = 0;
  local_d0 = 0;
  local_c8 = 0x8000000000;
  uStack_c0 = 0xffffffff;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_78 = 0xf;
  local_70 = 1;
  iStack_54 = 0;
  uStack_50 = 0;
  local_6c = 0;
  uStack_64 = 0;
  local_58 = DAT_14c7640d4;
  DAT_14c7640d4 = DAT_14c7640d4 + 1;
  FUN_1407b25f0(&local_130);
  lVar6 = FUN_14011c349();
  plVar1 = (longlong *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x74) < *(int *)(lVar6 + 0x7f4)) {
LAB_1412fbc57:
    if ((param_4 == 0) || (*(char *)(param_4 + 0x149) == '\0')) {
      iStack_54 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x74);
    }
    else {
      iStack_54 = -1;
    }
    if ((char)param_3[1] == '\x01') {
      local_138 = *param_3;
      plVar17 = (longlong *)(param_1 + 0x90);
      if (*(int *)(param_1 + 0xc4) == 0) {
        iVar13 = *(int *)(param_1 + 0x98);
        *(int *)(param_1 + 0x98) = iVar13 + 1;
        if (*(int *)(param_1 + 0x9c) == iVar13) {
          FUN_144869a3c(plVar17,iVar13);
        }
        iVar12 = *(int *)(param_1 + 0xb8);
        if (iVar12 == 0) {
          iVar8 = -1;
        }
        else {
          iVar8 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar8 = iVar12 + -1;
          }
          iVar8 = iVar8 >> 5;
        }
        lVar6 = param_1 + 0xa0;
        iVar10 = iVar12 + 1;
        iVar16 = iVar12 + 0x1f;
        if (-1 < iVar12) {
          iVar16 = iVar12;
        }
        local_158 = plVar17;
        if (iVar16 >> 5 == iVar8) {
          *(int *)(param_1 + 0xb8) = iVar10;
        }
        else {
          if (*(int *)(param_1 + 0xbc) <= iVar12) {
            if (iVar12 + 0x20U < 0xa0) {
              iVar10 = 0x80;
              iVar8 = iVar12;
            }
            else {
              uVar9 = iVar12 + 0x20U >> 5;
              local_160 = (ulonglong)uVar9;
              if (*(int *)(param_1 + 0xbc) + 0x1fU < 0xa0) {
                uVar14 = 4;
                if (4 < uVar9) {
                  uVar14 = uVar9;
                }
              }
              else {
                uVar14 = (uVar9 * 3 >> 3) + uVar9 + 0x10;
              }
              uVar11 = FUN_144a3809e(uVar14 << 2,0);
              iVar8 = (int)(uVar11 >> 2);
              iVar10 = -0x20;
              if ((int)local_160 <= iVar8) {
                iVar10 = iVar8 << 5;
              }
              iVar8 = *(int *)(param_1 + 0xb8);
            }
            *(int *)(param_1 + 0xbc) = iVar10;
            FUN_1446efbd8(lVar6,iVar8);
            iVar10 = *(int *)(param_1 + 0xb8) + 1;
          }
          iVar8 = iVar10 + 0x1f;
          if (-1 < iVar10) {
            iVar8 = iVar10;
          }
          *(int *)(param_1 + 0xb8) = iVar10;
          if (iVar10 % 0x20 != 0) {
            lVar15 = *(longlong *)(param_1 + 0xb0);
            if (*(longlong *)(param_1 + 0xb0) == 0) {
              lVar15 = lVar6;
            }
            bVar7 = -(char)(iVar10 % 0x20);
            *(uint *)(lVar15 + (longlong)(iVar8 >> 5) * 4) =
                 (uint)(*(int *)(lVar15 + (longlong)(iVar8 >> 5) * 4) << (bVar7 & 0x1f)) >>
                 (bVar7 & 0x1f);
          }
        }
        lVar15 = (longlong)iVar13;
        if (*(longlong *)(param_1 + 0xb0) != 0) {
          lVar6 = *(longlong *)(param_1 + 0xb0);
        }
        bVar7 = (byte)iVar12 & 0x1f;
        puVar2 = (uint *)(lVar6 + (longlong)(iVar16 >> 5) * 4);
        *puVar2 = *puVar2 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
        plVar17 = local_158;
      }
      else {
        iVar13 = *(int *)(param_1 + 0xc0);
        lVar15 = (longlong)iVar13;
        iVar12 = *(int *)(*(longlong *)(param_1 + 0x90) + 4 + lVar15 * 0x10);
        *(int *)(param_1 + 0xc0) = iVar12;
        iVar8 = *(int *)(param_1 + 0xc4) + -1;
        *(int *)(param_1 + 0xc4) = iVar8;
        if (iVar8 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar12 * 0x10) = 0xffffffff;
        }
      }
      lVar6 = param_1 + 0xa0;
      if (*(longlong *)(param_1 + 0xb0) != 0) {
        lVar6 = *(longlong *)(param_1 + 0xb0);
      }
      iVar12 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar12 = iVar13;
      }
      puVar2 = (uint *)(lVar6 + (longlong)(iVar12 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)iVar13 & 0x1f);
      iVar12 = 1;
      lVar6 = *(longlong *)(param_1 + 0x90);
      lVar15 = lVar15 * 0x10;
      puVar3 = (undefined8 *)(lVar6 + lVar15);
      uVar9 = *param_3;
      *(uint *)(lVar6 + lVar15) = uVar9;
      *(uint *)(lVar6 + 4 + lVar15) = local_58;
      *(undefined4 *)(lVar6 + 8 + lVar15) = 0xffffffff;
      uVar14 = *(int *)(param_1 + 0x98) - *(int *)(param_1 + 0xc4);
      if ((uVar14 != 0) && (uVar14 != 1)) {
        lVar6 = param_1 + 200;
        if (*(longlong *)(param_1 + 0xd0) != 0) {
          lVar6 = *(longlong *)(param_1 + 0xd0);
        }
        iVar8 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0xd8) - 1U & uVar9) * 4);
        if (iVar8 != -1) {
          do {
            puVar4 = (undefined8 *)(*plVar17 + (longlong)iVar8 * 0x10);
            if (*(uint *)(*plVar17 + (longlong)iVar8 * 0x10) == uVar9) {
              *puVar4 = *puVar3;
              FUN_14127fb74(plVar17,iVar13);
              goto LAB_1412fbe26;
            }
            iVar8 = *(int *)(puVar4 + 1);
          } while (iVar8 != -1);
        }
      }
      if (3 < uVar14) {
        uVar11 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
        lVar6 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar12 = 1 << ((byte)lVar6 & 0x1f);
      }
      if (((int)uVar14 < 1) || (iVar12 <= *(int *)(param_1 + 0xd8))) {
        uVar9 = *(int *)(param_1 + 0xd8) - 1U & uVar9;
        *(uint *)((longlong)puVar3 + 0xc) = uVar9;
        lVar6 = *(longlong *)(param_1 + 0xd0);
        if (*(longlong *)(param_1 + 0xd0) == 0) {
          lVar6 = param_1 + 200;
        }
        *(undefined4 *)(puVar3 + 1) =
             *(undefined4 *)
              (lVar6 + ((longlong)*(int *)(param_1 + 0xd8) - 1U & (longlong)(int)uVar9) * 4);
        lVar6 = *(longlong *)(param_1 + 0xd0);
        if (*(longlong *)(param_1 + 0xd0) == 0) {
          lVar6 = param_1 + 200;
        }
        *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0xd8) - 1U & (longlong)(int)uVar9) * 4) =
             iVar13;
      }
      else {
        *(int *)(param_1 + 0xd8) = iVar12;
        FUN_1412fc8aa(plVar17);
      }
    }
LAB_1412fbe26:
    FUN_1412fc4a2(plVar1,local_148);
    *local_140 = local_58;
    local_140[2] = local_138;
    FUN_1406fd608(local_140 + 4,&local_130);
    *(ulonglong *)(local_140 + 0x3a) = CONCAT44(iStack_54,local_58);
    local_140[0x3c] = uStack_50;
    local_140[0x3e] = 0xffffffff;
    local_14c = local_148[0];
    uVar9 = *local_140;
    cVar5 = FUN_1412fc26a(plVar1,uVar9,local_140);
    if (cVar5 == '\0') {
      uVar14 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x74);
      if (uVar14 < 4) {
        iVar13 = 1;
      }
      else {
        uVar11 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
        lVar6 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar13 = 1 << ((byte)lVar6 & 0x1f);
      }
      if (((int)uVar14 < 1) || (iVar13 <= *(int *)(param_1 + 0x88))) {
        uVar9 = *(int *)(param_1 + 0x88) - 1U & uVar9;
        local_140[0x3f] = uVar9;
        lVar6 = *(longlong *)(param_1 + 0x80);
        if (*(longlong *)(param_1 + 0x80) == 0) {
          lVar6 = param_1 + 0x78;
        }
        local_140[0x3e] =
             *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x88) - 1U & (longlong)(int)uVar9) * 4)
        ;
        lVar6 = *(longlong *)(param_1 + 0x80);
        if (*(longlong *)(param_1 + 0x80) == 0) {
          lVar6 = param_1 + 0x78;
        }
        *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x88) - 1U & (longlong)(int)uVar9) * 4) =
             local_14c;
      }
      else {
        *(int *)(param_1 + 0x88) = iVar13;
        FUN_1412fc684(plVar1);
      }
    }
    if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x74)) {
LAB_1412fc1c1:
      lVar15 = 0;
    }
    else {
      lVar6 = param_1 + 0x78;
      if (*(longlong *)(param_1 + 0x80) != 0) {
        lVar6 = *(longlong *)(param_1 + 0x80);
      }
      iVar13 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x88) - 1U & local_58) * 4);
      if (iVar13 == -1) goto LAB_1412fc1c1;
      do {
        lVar15 = *plVar1 + (longlong)iVar13 * 0x100;
        if (*(uint *)(*plVar1 + (longlong)iVar13 * 0x100) == local_58) break;
        iVar13 = *(int *)(lVar15 + 0xf8);
        lVar15 = 0;
      } while (iVar13 != -1);
    }
    FUN_1412fc308(param_1);
    lVar15 = lVar15 + 0xe8;
  }
  else {
    local_148[0] = -1;
    FUN_148f07e20(param_1,&local_14c);
    if (local_14c != 0) {
      FUN_14127fd72(plVar1,&local_14c);
      if (local_148[0] != -1) {
        FUN_145872da4(param_1 + 0xe0);
        FUN_14127fbe6(param_1 + 0xf0,&local_14c);
      }
      goto LAB_1412fbc57;
    }
    lVar15 = 0;
  }
  FUN_140368b56(&local_130);
  bVar7 = (byte)param_3[1];
LAB_1412fbf9d:
  if ((bVar7 & 1) != 0) {
    *(undefined1 *)(param_3 + 1) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar15;
  while (iVar13 = *(int *)(lVar15 + 8), iVar13 != -1) {
LAB_1412fc1ab:
    lVar15 = lVar6 + (longlong)iVar13 * 0x10;
    if (*(uint *)(lVar6 + (longlong)iVar13 * 0x10) == uVar9) goto LAB_1412fc261;
  }
  lVar15 = 0;
LAB_1412fc261:
  lVar15 = lVar15 + 4;
  bVar7 = 1;
  goto LAB_1412fbf9d;
}



// FUNCTION 1412fc26a FUN_1412fc26a body=157 status=ok
// SIG undefined FUN_1412fc26a(void)

undefined8 FUN_1412fc26a(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x100);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x100) == *param_3) {
          FUN_140368b56((longlong)_Dst + 0x10);
          memmove(_Dst,param_3,0xf8);
          FUN_14127fe2a(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0xf8);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1412fc308 FUN_1412fc308 body=408 status=ok
// SIG undefined FUN_1412fc308(void)

undefined4 FUN_1412fc308(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  undefined4 uVar9;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_14011c349();
  uVar9 = 0xbf800000;
  if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
    lVar4 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x80);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x88) - 1U & param_2) * 4);
    if (iVar5 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x40);
      iVar6 = iVar5;
      do {
        if (*(uint *)(lVar4 + (longlong)iVar6 * 0x100) == param_2) goto LAB_1412fc39f;
        iVar6 = *(int *)((longlong)iVar6 * 0x100 + lVar4 + 0xf8);
      } while (iVar6 != -1);
    }
  }
  goto LAB_1412fc478;
  while (iVar5 = *(int *)(lVar7 + 0xf8), iVar5 != -1) {
LAB_1412fc39f:
    lVar7 = lVar4 + (longlong)iVar5 * 0x100;
    if (*(uint *)(lVar4 + (longlong)iVar5 * 0x100) == param_2) goto LAB_1412fc3b4;
  }
  lVar7 = 0;
LAB_1412fc3b4:
  FUN_140c65c56(lVar7 + 0x10,&local_50);
  if (local_50 == 0) {
    uVar9 = 0xbf800000;
  }
  else {
    lVar4 = FUN_14087dee0(lVar7 + 0x10);
    uVar9 = 0;
    fVar8 = 0.0;
    if (lVar4 != 0) {
      fVar8 = ((float)*(int *)(lVar4 + 0x140) / *(float *)(lVar3 + 0x7f8)) * 150.0;
    }
    *(float *)(lVar7 + 0xf0) =
         (((float)*(int *)(local_50 + 0x40) / *(float *)(lVar3 + 0x800)) * 50.0) / 3.0 +
         ((float)*(int *)(local_50 + 0x38) / *(float *)(lVar3 + 0x7fc)) * 100.0 + fVar8;
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
LAB_1412fc478:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1412fc4a2 FUN_1412fc4a2 body=482 status=ok
// SIG undefined FUN_1412fc4a2(void)

int * FUN_1412fc4a2(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1406c169c(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x100);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x100) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x100 + *param_1;
  return param_2;
}



// FUNCTION 1412fc684 FUN_1412fc684 body=549 status=ok
// SIG undefined FUN_1412fc684(void)

void FUN_1412fc684(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x100;
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + lVar10);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0xfc + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0xf8 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_1412fc860;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_1412fc860:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412fc8aa FUN_1412fc8aa body=539 status=ok
// SIG undefined FUN_1412fc8aa(void)

void FUN_1412fc8aa(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x10;
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + lVar10);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0xc + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 8 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_1412fca80;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_1412fca80:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412fcac6 FUN_1412fcac6 body=2017 status=ok
// SIG undefined FUN_1412fcac6(void)

void FUN_1412fcac6(longlong *param_1,char param_2,int param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  undefined4 *puVar23;
  ulonglong uVar24;
  bool bVar25;
  bool bVar26;
  undefined1 auStack_f8 [40];
  int local_d0;
  char local_c9;
  uint *local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  longlong local_b0;
  int local_a4;
  longlong *local_a0;
  uint local_94;
  ulonglong local_90;
  uint *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  uint *local_68;
  ulonglong uStack_60;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_a4 = param_3;
  if (param_3 == -1) {
    local_a4 = *(int *)((longlong)param_1 + 0x34);
  }
  lVar8 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar8 == 0) || (local_80 = (longlong *)FUN_14007a5e6(lVar8), local_80 == (longlong *)0x0))
  goto LAB_1412fd1fc;
  local_68 = (uint *)0x0;
  uStack_60 = 0;
  plVar1 = param_1 + 8;
  local_78 = 0;
  uStack_70 = 0;
  uVar7 = *(uint *)(param_1 + 0xd);
  local_50 = param_1;
  if (uVar7 == 0) {
    uVar24 = 1;
    uVar16 = 0;
    iVar22 = 0;
    uVar6 = 0;
  }
  else {
    puVar9 = (uint *)param_1[0xc];
    if ((uint *)param_1[0xc] == (uint *)0x0) {
      puVar9 = (uint *)(param_1 + 10);
    }
    uVar6 = *puVar9;
    if (uVar6 == 0) {
      iVar22 = uVar7 + 0x1e;
      if (-1 < (int)(uVar7 - 1)) {
        iVar22 = uVar7 - 1;
      }
      uVar16 = 0;
      uVar24 = (ulonglong)(uint)(iVar22 >> 5);
      if (iVar22 >> 5 < 1) {
        uVar24 = uVar16;
      }
      iVar22 = 0;
      do {
        if (uVar24 == uVar16) goto LAB_1412fd19d;
        iVar22 = iVar22 + 0x20;
        uVar6 = puVar9[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar16 = 0;
      iVar22 = 0;
    }
    uVar24 = (ulonglong)(-uVar6 & uVar6);
    uVar2 = uVar24 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar6 = (iVar22 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if ((int)uVar7 <= (int)uVar6) {
      uVar6 = uVar7;
    }
  }
  if (uVar6 != uVar7) {
    local_a0 = param_1 + 0xf;
    uVar15 = 0xffffffff;
    local_c9 = param_2;
    local_90 = (ulonglong)uVar7;
    local_88 = (uint *)(param_1 + 10);
LAB_1412fcbfc:
    lVar8 = *plVar1;
    cVar5 = (**(code **)(*local_80 + 0x108))(local_80,(longlong)(int)uVar6 * 0x100 + lVar8 + 8);
    uVar2 = uStack_70;
    if (cVar5 == '\0') {
      puVar23 = (undefined4 *)(lVar8 + (longlong)(int)uVar6 * 0x100);
      if ((int)uStack_60 < local_a4) {
        FUN_14434c120(&local_68,puVar23,&local_50);
      }
      else if ((0 < (int)uStack_60) && ((int)param_1[9] != *(int *)((longlong)param_1 + 0x74))) {
        uVar7 = *local_68;
        plVar14 = (longlong *)param_1[0x10];
        if ((longlong *)param_1[0x10] == (longlong *)0x0) {
          plVar14 = local_a0;
        }
        iVar13 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[0x11] - 1U & uVar7) * 4);
        if (iVar13 != -1) {
          do {
            lVar8 = *plVar1 + (longlong)iVar13 * 0x100;
            if (*(uint *)(*plVar1 + (longlong)iVar13 * 0x100) == uVar7) {
              if ((lVar8 + 8U & 0xfffffffffffffff7) != 0) {
                if (*(float *)(lVar8 + 0xf0) <= (float)puVar23[0x3c] &&
                    (float)puVar23[0x3c] != *(float *)(lVar8 + 0xf0)) {
                  iVar13 = 0;
                  if ((int)uStack_60 != 1) {
                    *local_68 = local_68[(uStack_60 & 0xffffffff) - 1];
                    iVar13 = (int)uStack_60 + -1;
                  }
                  uStack_60 = CONCAT44(uStack_60._4_4_,iVar13);
                  local_94 = uVar7;
                  FUN_14595fed0(&local_68);
                  if ((int)uStack_60 < 2) goto LAB_1412fd10b;
                  local_c8 = local_68;
                  iVar13 = 0;
                  iVar11 = 1;
                  local_d0 = 0;
                  local_b4 = (int)uStack_60;
                  goto LAB_1412fce31;
                }
                lVar8 = (longlong)(int)uStack_70;
                uVar7 = (int)uStack_70 + 1;
                uStack_70 = CONCAT44(uStack_70._4_4_,uVar7);
                if (uStack_70._4_4_ < uVar7) {
                  FUN_14664d78a(&local_78,uVar2 & 0xffffffff);
                }
                *(undefined4 *)(local_78 + lVar8 * 4) = *puVar23;
              }
              break;
            }
            iVar13 = *(int *)(lVar8 + 0xf8);
          } while (iVar13 != -1);
        }
      }
    }
    goto LAB_1412fcd10;
  }
  goto LAB_1412fd19d;
LAB_1412fce31:
  iVar13 = iVar13 + 2;
  iVar12 = (int)param_1[9];
  iVar3 = *(int *)((longlong)param_1 + 0x74);
  iVar20 = iVar11;
  if (iVar13 < (int)uStack_60) {
    bVar4 = 1;
    if (iVar12 == iVar3) {
      bVar25 = false;
    }
    else {
      local_b8 = local_d0;
      uVar7 = local_68[iVar11];
      plVar14 = (longlong *)param_1[0x10];
      if ((longlong *)param_1[0x10] == (longlong *)0x0) {
        plVar14 = local_a0;
      }
      uVar6 = (int)param_1[0x11] - 1;
      iVar20 = *(int *)((longlong)plVar14 + (ulonglong)(uVar6 & uVar7) * 4);
      if (iVar20 == -1) {
        bVar25 = false;
      }
      else {
        iVar17 = iVar20;
        do {
          bVar25 = *(uint *)(*plVar1 + (longlong)iVar17 * 0x100) == uVar7;
          if (bVar25) break;
          iVar17 = *(int *)((longlong)iVar17 * 0x100 + *plVar1 + 0xf8);
        } while (iVar17 != -1);
      }
      uVar21 = local_68[iVar13];
      iVar17 = *(int *)((longlong)plVar14 + (ulonglong)(uVar6 & uVar21) * 4);
      local_c0 = iVar3;
      local_bc = iVar12;
      if (iVar17 != -1) {
        lVar8 = *plVar1;
        iVar18 = iVar17;
        do {
          if (*(uint *)(lVar8 + (longlong)iVar18 * 0x100) == uVar21) {
            if (bVar25) goto LAB_1412fcf1a;
            bVar25 = false;
            bVar4 = 0;
            break;
          }
          iVar18 = *(int *)((longlong)iVar18 * 0x100 + lVar8 + 0xf8);
          bVar4 = 1;
        } while (iVar18 != -1);
      }
    }
    bVar25 = (bool)(bVar4 | bVar25);
    goto LAB_1412fcf6c;
  }
  goto LAB_1412fcf72;
LAB_1412fcf1a:
  if (iVar20 == -1) goto LAB_1412fd0b4;
  lVar19 = lVar8 + (longlong)iVar20 * 0x100;
  if (*(uint *)(lVar8 + (longlong)iVar20 * 0x100) == uVar7) goto LAB_1412fd0b7;
  iVar20 = *(int *)(lVar19 + 0xf8);
  goto LAB_1412fcf1a;
LAB_1412fd0b4:
  lVar19 = 0;
LAB_1412fd0b7:
  do {
    lVar10 = lVar8 + (longlong)iVar17 * 0x100;
    if (*(uint *)(lVar8 + (longlong)iVar17 * 0x100) == uVar21) goto LAB_1412fd0e4;
    iVar17 = *(int *)(lVar10 + 0xf8);
  } while (iVar17 != -1);
  lVar10 = 0;
LAB_1412fd0e4:
  bVar25 = *(float *)(lVar19 + 0xf0) < *(float *)(lVar10 + 0xf0);
LAB_1412fcf6c:
  iVar20 = iVar13;
  if (bVar25) {
    iVar20 = iVar11;
  }
LAB_1412fcf72:
  local_b0 = (longlong)local_d0;
  uVar7 = local_68[iVar20];
  local_d0 = iVar20;
  if (iVar12 == iVar3) {
    uVar21 = local_68[local_b0];
  }
  else {
    plVar14 = (longlong *)param_1[0x10];
    if ((longlong *)param_1[0x10] == (longlong *)0x0) {
      plVar14 = local_a0;
    }
    uVar6 = (int)param_1[0x11] - 1;
    iVar13 = *(int *)((longlong)plVar14 + (ulonglong)(uVar6 & uVar7) * 4);
    if (iVar13 == -1) {
      bVar25 = true;
    }
    else {
      iVar11 = iVar13;
      do {
        bVar26 = *(uint *)(*plVar1 + (longlong)iVar11 * 0x100) == uVar7;
        bVar25 = !bVar26;
        if (bVar26) break;
        iVar11 = *(int *)((longlong)iVar11 * 0x100 + *plVar1 + 0xf8);
      } while (iVar11 != -1);
    }
    uVar21 = local_68[local_b0];
    iVar11 = *(int *)((longlong)plVar14 + (ulonglong)(uVar6 & uVar21) * 4);
    if (iVar11 != -1) {
      lVar8 = *plVar1;
      iVar12 = iVar11;
      do {
        if (*(uint *)(lVar8 + (longlong)iVar12 * 0x100) == uVar21) {
          if (bVar25) goto LAB_1412fd10b;
          goto LAB_1412fd059;
        }
        iVar12 = *(int *)((longlong)iVar12 * 0x100 + lVar8 + 0xf8);
      } while (iVar12 != -1);
    }
  }
  goto LAB_1412fd023;
LAB_1412fd059:
  if (iVar13 == -1) goto LAB_1412fd077;
  lVar19 = lVar8 + (longlong)iVar13 * 0x100;
  if (*(uint *)(lVar8 + (longlong)iVar13 * 0x100) == uVar7) goto LAB_1412fd079;
  iVar13 = *(int *)(lVar19 + 0xf8);
  goto LAB_1412fd059;
LAB_1412fd077:
  lVar19 = 0;
LAB_1412fd079:
  do {
    lVar10 = lVar8 + (longlong)iVar11 * 0x100;
    if (*(uint *)(lVar8 + (longlong)iVar11 * 0x100) == uVar21) goto LAB_1412fd0a1;
    iVar11 = *(int *)(lVar10 + 0xf8);
  } while (iVar11 != -1);
  lVar10 = 0;
LAB_1412fd0a1:
  if (*(float *)(lVar10 + 0xf0) <= *(float *)(lVar19 + 0xf0)) goto LAB_1412fd10b;
LAB_1412fd023:
  local_68[local_b0] = uVar7;
  local_68[iVar20] = uVar21;
  iVar13 = iVar20 * 2;
  iVar11 = iVar20 * 2 + 1;
  if ((int)uStack_60 <= iVar11) goto LAB_1412fd10b;
  goto LAB_1412fce31;
LAB_1412fd10b:
  FUN_14434c120(&local_68,puVar23,&local_50);
  uVar2 = uStack_70;
  lVar8 = (longlong)(int)uStack_70;
  uVar7 = (int)uStack_70 + 1;
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar7);
  if (uStack_70._4_4_ < uVar7) {
    FUN_14664d78a(&local_78,uVar2 & 0xffffffff);
  }
  *(uint *)(local_78 + lVar8 * 4) = local_94;
LAB_1412fcd10:
  param_2 = local_c9;
  uVar15 = uVar15 & ~(uint)uVar24;
  puVar9 = (uint *)param_1[0xc];
  if ((uint *)param_1[0xc] == (uint *)0x0) {
    puVar9 = local_88;
  }
  uVar7 = *(uint *)(param_1 + 0xd);
  iVar13 = (int)uVar16;
  lVar8 = (longlong)iVar13;
  uVar6 = puVar9[lVar8] & uVar15;
  if (uVar6 == 0) {
    iVar11 = uVar7 + 0x1e;
    if (-1 < (int)(uVar7 - 1)) {
      iVar11 = uVar7 - 1;
    }
    iVar11 = iVar11 >> 5;
    iVar22 = iVar22 + 0x20;
    iVar12 = iVar11;
    if (iVar11 < iVar13) {
      iVar12 = iVar13;
    }
    if (iVar13 < iVar11) {
      lVar19 = 0;
      do {
        uVar6 = puVar9[lVar8 + lVar19 + 1];
        if (uVar6 != 0) {
          uVar16 = (ulonglong)(iVar13 + (int)lVar19 + 1);
          uVar15 = 0xffffffff;
          goto LAB_1412fcd93;
        }
        iVar22 = iVar22 + 0x20;
        lVar19 = lVar19 + 1;
      } while (iVar12 - lVar8 != lVar19);
      uVar15 = 0xffffffff;
      iVar13 = iVar12;
    }
    uVar16 = (ulonglong)(iVar13 + 1);
    uVar6 = uVar7;
  }
  else {
LAB_1412fcd93:
    uVar24 = (ulonglong)(-uVar6 & uVar6);
    uVar2 = uVar24 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar6 = (iVar22 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if ((int)uVar7 <= (int)uVar6) {
      uVar6 = uVar7;
    }
  }
  if (uVar6 == (uint)local_90) goto LAB_1412fd18a;
  goto LAB_1412fcbfc;
LAB_1412fd18a:
  if ((int)uStack_60 != 0) {
    FUN_1411b79c1(param_1[0x1c],(int)param_1[0x1d]);
    *(undefined4 *)(param_1 + 0x1d) = 0;
    if (*(int *)((longlong)param_1 + 0xec) != 0) {
      FUN_14575f6a0(param_1 + 0x1c);
    }
    FUN_14575f6d0(param_1 + 0x1e);
    if ((longlong)(int)uStack_60 != 0) {
      lVar8 = (longlong)(int)uStack_60 << 2;
      puVar9 = local_68;
      do {
        FUN_14127fe9c(param_1,puVar9);
        puVar9 = puVar9 + 1;
        lVar8 = lVar8 + -4;
      } while (lVar8 != 0);
    }
  }
LAB_1412fd19d:
  if (param_2 != '\0') {
    if ((longlong)(int)uStack_70 != 0) {
      lVar19 = (longlong)(int)uStack_70 << 2;
      lVar8 = local_78;
      do {
        FUN_14127fd72(plVar1,lVar8);
        lVar8 = lVar8 + 4;
        lVar19 = lVar19 + -4;
      } while (lVar19 != 0);
    }
  }
  FUN_14127fc36(param_1);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (uint *)0x0) {
    FUN_1400020a8();
  }
LAB_1412fd1fc:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412fd2a8 FUN_1412fd2a8 body=84 status=ok
// SIG undefined FUN_1412fd2a8(void)

void FUN_1412fd2a8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1412fd2fe(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x78) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412fd2fe FUN_1412fd2fe body=726 status=ok
// SIG undefined FUN_1412fd2fe(void)

void FUN_1412fd2fe(longlong *param_1,ushort *param_2)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  lVar4 = *param_1;
  uVar2 = *param_2;
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 != 0 && iVar3 <= iVar6) {
    if (iVar3 == 0) {
LAB_1412fd34b:
      if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(lVar4 + 0x24) = 0x100;
        FUN_14497ddce(lVar4,iVar3);
        iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
      }
      iVar7 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar7 = iVar6;
      }
      *(int *)(lVar4 + 0x20) = iVar6;
      if (iVar6 % 0x20 != 0) {
        bVar5 = -(char)(iVar6 % 0x20);
        *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else {
      iVar7 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar7 = iVar3 + -1;
      }
      if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1412fd34b;
      *(int *)(lVar4 + 0x20) = iVar6;
    }
    FUN_1447c45ca(lVar4,iVar3,iVar8,0);
  }
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  lVar4 = *param_1;
  uVar2 = param_2[0xc];
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 != 0 && iVar3 <= iVar6) {
    if (iVar3 == 0) {
LAB_1412fd3dd:
      if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(lVar4 + 0x24) = 0x100;
        FUN_14497ddce(lVar4,iVar3);
        iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
      }
      iVar7 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar7 = iVar6;
      }
      *(int *)(lVar4 + 0x20) = iVar6;
      if (iVar6 % 0x20 != 0) {
        bVar5 = -(char)(iVar6 % 0x20);
        *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else {
      iVar7 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar7 = iVar3 + -1;
      }
      if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1412fd3dd;
      *(int *)(lVar4 + 0x20) = iVar6;
    }
    FUN_1447c45ca(lVar4,iVar3,iVar8,0);
  }
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  lVar4 = *param_1;
  uVar2 = param_2[0x18];
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 != 0 && iVar3 <= iVar6) {
    if (iVar3 == 0) {
LAB_1412fd465:
      if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(lVar4 + 0x24) = 0x100;
        FUN_14497ddce(lVar4,iVar3);
        iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
      }
      iVar7 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar7 = iVar6;
      }
      *(int *)(lVar4 + 0x20) = iVar6;
      if (iVar6 % 0x20 != 0) {
        bVar5 = -(char)(iVar6 % 0x20);
        *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else {
      iVar7 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar7 = iVar3 + -1;
      }
      if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1412fd465;
      *(int *)(lVar4 + 0x20) = iVar6;
    }
    FUN_1447c45ca(lVar4,iVar3,iVar8,0);
  }
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  lVar4 = *param_1;
  uVar2 = param_2[0x28];
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 == 0 || iVar6 < iVar3) goto LAB_1412fd52e;
  if (iVar3 == 0) {
LAB_1412fd4ef:
    if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
      *(undefined4 *)(lVar4 + 0x24) = 0x100;
      FUN_14497ddce(lVar4,iVar3);
      iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
    }
    iVar7 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(lVar4 + 0x20) = iVar6;
    if (iVar6 % 0x20 != 0) {
      bVar5 = -(char)(iVar6 % 0x20);
      *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
           (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
    }
  }
  else {
    iVar7 = iVar3 + 0x1e;
    if (-1 < iVar3 + -1) {
      iVar7 = iVar3 + -1;
    }
    if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1412fd4ef;
    *(int *)(lVar4 + 0x20) = iVar6;
  }
  FUN_1447c45ca(lVar4,iVar3,iVar8,0);
LAB_1412fd52e:
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  return;
}



// FUNCTION 1412fd5d4 FUN_1412fd5d4 body=118 status=ok
// SIG undefined FUN_1412fd5d4(void)

undefined8 FUN_1412fd5d4(longlong *param_1,longlong *param_2)

{
  char cVar1;
  
  if ((((param_1[0x9b8] == 0) || (param_1[0x9b9] == 0)) && ((char)param_1[0x9bc] == '\0')) &&
     (((*(char *)((longlong)param_1 + 0x4db9) == '\0' &&
       (cVar1 = (**(code **)(*param_2 + 0x38))(param_2,param_1), cVar1 != '\0')) &&
      ((char)param_1[-0x73a] == '\x03')))) {
    FUN_1459651f0(param_1 + 0x9b1,param_2);
    (**(code **)(*param_1 + 0x88))(param_1,param_2);
    return 1;
  }
  return 0;
}



// FUNCTION 1412fd64a FUN_1412fd64a body=286 status=ok
// SIG undefined FUN_1412fd64a(void)

undefined8 FUN_1412fd64a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1412fd762;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1412fd762;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1412fd762:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1412fd70f;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_1412fd70f;
    }
  }
  uVar6 = 0;
LAB_1412fd70f:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412fd76a FUN_1412fd76a body=198 status=ok
// SIG undefined FUN_1412fd76a(void)

void FUN_1412fd76a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1449027d0(param_1,&local_40);
  lVar3 = *(longlong *)(local_40 + 0x30);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x40));
  *(int *)(lVar3 + 0x38) = *(int *)(lVar3 + 0x38) + 1;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((param_2 != 0) && (*(int *)(param_2 + 0x40) == *(int *)(param_1 + 0x68))) {
    FUN_140775496(lVar3,param_2 + 0x20);
    FUN_140775496(lVar3 + 0x18,param_2 + 0x30);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x40));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412fd832 FUN_1412fd832 body=993 status=ok
// SIG undefined FUN_1412fd832(void)

int * FUN_1412fd832(longlong *param_1,int *param_2,undefined8 *param_3)

{
  int *piVar1;
  uint *puVar2;
  byte *pbVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  int iVar10;
  ulonglong uVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar20 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar20 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar20) {
      FUN_1447711aa(param_1,iVar20);
    }
    iVar10 = (int)param_1[5];
    if (iVar10 == 0) {
      iVar13 = -1;
    }
    else {
      iVar13 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar13 = iVar10 + -1;
      }
      iVar13 = iVar13 >> 5;
    }
    plVar15 = param_1 + 2;
    iVar14 = iVar10 + 1;
    iVar18 = iVar10 + 0x1f;
    if (-1 < iVar10) {
      iVar18 = iVar10;
    }
    if (iVar18 >> 5 == iVar13) {
      *(int *)(param_1 + 5) = iVar14;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar10) {
        if (iVar10 + 0x20U < 0xa0) {
          iVar14 = 0x80;
          iVar13 = iVar10;
        }
        else {
          uVar19 = iVar10 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar21 = 4;
            if (4 < uVar19) {
              uVar21 = uVar19;
            }
          }
          else {
            uVar21 = (uVar19 * 3 >> 3) + uVar19 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar21 << 2,0);
          iVar13 = (int)(uVar11 >> 2);
          iVar14 = -0x20;
          if ((int)uVar19 <= iVar13) {
            iVar14 = iVar13 << 5;
          }
          iVar13 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar14;
        FUN_1446efbd8(plVar15,iVar13);
        iVar14 = (int)param_1[5] + 1;
      }
      iVar13 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar13 = iVar14;
      }
      *(int *)(param_1 + 5) = iVar14;
      if (iVar14 % 0x20 != 0) {
        plVar17 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar17 = plVar15;
        }
        bVar12 = -(char)(iVar14 % 0x20);
        *(uint *)((longlong)plVar17 + (longlong)(iVar13 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar17 + (longlong)(iVar13 >> 5) * 4) << (bVar12 & 0x1f)) >>
             (bVar12 & 0x1f);
      }
    }
    lVar16 = (longlong)iVar20;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[4];
    }
    bVar12 = (byte)iVar10 & 0x1f;
    puVar2 = (uint *)((longlong)plVar15 + (longlong)(iVar18 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
  }
  else {
    iVar20 = (int)param_1[6];
    lVar16 = (longlong)iVar20;
    iVar10 = *(int *)(*param_1 + 4 + lVar16 * 0x20);
    *(int *)(param_1 + 6) = iVar10;
    iVar13 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x20) = 0xffffffff;
    }
  }
  iVar10 = 1;
  uVar19 = 1 << ((byte)iVar20 & 0x1f);
  plVar15 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar15 = param_1 + 2;
  }
  iVar13 = iVar20 + 0x1f;
  if (-1 < iVar20) {
    iVar13 = iVar20;
  }
  puVar2 = (uint *)((longlong)plVar15 + (longlong)(iVar13 >> 5) * 4);
  *puVar2 = *puVar2 | uVar19;
  lVar4 = *param_1;
  lVar16 = lVar16 * 0x20;
  pbVar3 = (byte *)(lVar4 + lVar16);
  puVar5 = (undefined8 *)param_3[1];
  bVar12 = *(byte *)*param_3;
  *(byte *)(lVar4 + lVar16) = bVar12;
  *(undefined8 *)(lVar4 + 8 + lVar16) = *puVar5;
  lVar6 = puVar5[1];
  *(longlong *)(lVar4 + 0x10 + lVar16) = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    bVar12 = *pbVar3;
  }
  pbVar3[0x18] = 0xff;
  pbVar3[0x19] = 0xff;
  pbVar3[0x1a] = 0xff;
  pbVar3[0x1b] = 0xff;
  uVar21 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar21 != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar15 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar15 = (longlong *)param_1[8];
      }
      iVar14 = *(int *)((longlong)plVar15 + (ulonglong)((int)param_1[9] - 1U & (uint)bVar12) * 4);
      if (iVar14 != -1) {
        do {
          puVar5 = (undefined8 *)(*param_1 + (longlong)iVar14 * 0x20);
          if (*(byte *)(*param_1 + (longlong)iVar14 * 0x20) == bVar12) {
            plVar15 = (longlong *)puVar5[2];
            if (plVar15 != (longlong *)0x0) {
              LOCK();
              plVar17 = plVar15 + 1;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              if ((int)*plVar17 == 0) {
                (**(code **)*plVar15)(plVar15);
                LOCK();
                piVar1 = (int *)((longlong)plVar15 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar15 + 0x10))(plVar15);
                }
              }
            }
            uVar7 = *(undefined8 *)pbVar3;
            uVar8 = *(undefined8 *)(pbVar3 + 8);
            puVar5[2] = *(undefined8 *)(pbVar3 + 0x10);
            *puVar5 = uVar7;
            puVar5[1] = uVar8;
            lVar16 = *param_1;
            if (*(int *)((longlong)param_1 + 0x34) != 0) {
              *(int *)(lVar16 + (longlong)(int)param_1[6] * 0x20) = iVar20;
            }
            *(undefined4 *)(lVar16 + (longlong)iVar20 * 0x20) = 0xffffffff;
            uVar9 = 0xffffffff;
            if (0 < *(int *)((longlong)param_1 + 0x34)) {
              uVar9 = (undefined4)param_1[6];
            }
            *(undefined4 *)(lVar16 + (longlong)iVar20 * 0x20 + 4) = uVar9;
            *(int *)(param_1 + 6) = iVar20;
            *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
            plVar15 = param_1 + 2;
            if ((longlong *)param_1[4] != (longlong *)0x0) {
              plVar15 = (longlong *)param_1[4];
            }
            puVar2 = (uint *)((longlong)plVar15 + (longlong)(iVar13 >> 5) * 4);
            *puVar2 = *puVar2 & ~uVar19;
            iVar20 = iVar14;
            goto LAB_1412fda62;
          }
          iVar14 = *(int *)(puVar5 + 3);
        } while (iVar14 != -1);
      }
    }
    if (3 < uVar21) {
      uVar11 = (ulonglong)(uVar21 & 0xfffffffe) + 0xf;
      lVar16 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar16 & 0x1f);
    }
  }
  if (((int)uVar21 < 1) || (iVar10 <= (int)param_1[9])) {
    uVar19 = (int)param_1[9] - 1U & (uint)bVar12;
    *(uint *)(pbVar3 + 0x1c) = uVar19;
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(undefined4 *)(pbVar3 + 0x18) =
         *(undefined4 *)((longlong)plVar15 + (ulonglong)((int)param_1[9] - 1U & uVar19) * 4);
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(int *)((longlong)plVar15 + (ulonglong)((int)param_1[9] - 1U & uVar19) * 4) = iVar20;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    FUN_1458cfd28(param_1);
  }
LAB_1412fda62:
  *param_2 = iVar20;
  return param_2;
}



// FUNCTION 1412fdc14 FUN_1412fdc14 body=24 status=ok
// SIG undefined FUN_1412fdc14(void)

void FUN_1412fdc14(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001412fdc28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1412fdc2c FUN_1412fdc2c body=2887 status=ok
// SIG undefined FUN_1412fdc2c(void)

undefined8
FUN_1412fdc2c(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar5 = (**(code **)(*param_1 + 0x180))();
  if ((lVar5 != 0) && (lVar7 = *(longlong *)(lVar5 + 0x1f0), lVar7 != 0)) {
    lVar6 = FUN_140dbac94(lVar7);
    if (lVar6 != 0) {
      lVar7 = FUN_140dbafcc(lVar7);
      if (lVar7 != 0) {
        lVar5 = FUN_1400f6f32(lVar5);
        if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x68), lVar5 != 0)) {
          lVar6 = FUN_140bccd38(lVar5,param_2 + 0x18);
          if (lVar6 != 0) {
            FUN_1404963c2(lVar7,&local_68,lVar6);
            lVar7 = FUN_1458cfed0(lVar7,&local_68);
            if (lVar7 != 0) {
              lVar6 = FUN_140ade7fe();
              if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
                uVar4 = FUN_140def96c(lVar5,param_2 + 0x18);
                local_68 = 0;
                plStack_60 = (longlong *)0x0;
                FUN_14009b010(&local_68,3,0);
                if (param_5 != &DAT_14c9a1308) {
                  if (plStack_60 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
                    UNLOCK();
                  }
                  plVar9 = (longlong *)param_5[1];
                  *param_5 = local_68;
                  param_5[1] = (longlong)plStack_60;
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
                }
                plVar9 = plStack_60;
                if (plStack_60 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plStack_60 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*plStack_60)(plStack_60);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar9 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar9 + 0x10))(plVar9);
                    }
                  }
                }
                puVar8 = (undefined4 *)FUN_140ade790(lVar7,uVar4);
                if (puVar8 != (undefined4 *)0x0) {
                  local_78 = 0;
                  plStack_70 = (longlong *)0x0;
                  cVar3 = '\0';
                  FUN_14009b010(&local_78,3,0);
                  local_88 = DAT_14cbe5738;
                  local_80 = DAT_14cbe5740;
                  FUN_1448075d0(&local_68);
                  if (*param_5 != 0) {
                    local_d8 = 0;
                    cVar3 = FUN_14014191c(*param_5,&local_68,&local_78,0);
                  }
                  if (local_50 != 0) {
                    FUN_1400020a8();
                  }
                  plVar9 = plStack_70;
                  if (plStack_70 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = plStack_70 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*plStack_70)(plStack_70);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar9 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)(*plVar9 + 0x10))(plVar9);
                      }
                    }
                  }
                  if (cVar3 != '\0') {
                    local_98 = DAT_14cbe5738;
                    local_90 = DAT_14cbe5740;
                    FUN_1448075d0(&local_68);
                    plVar9 = (longlong *)FUN_14039d0c8(param_5,&local_68);
                    if (local_50 != 0) {
                      FUN_1400020a8();
                    }
                    local_78 = 0;
                    plStack_70 = (longlong *)0x0;
                    FUN_14009b010(&local_78,1,0);
                    if (local_78 != 0) {
                      FUN_1406111c2(local_78,*puVar8);
                    }
                    local_a8 = DAT_14cbe5744;
                    local_a0 = DAT_14cbe574c;
                    FUN_1448075d0(&local_68);
                    if (*plVar9 != 0) {
                      local_d8 = 0;
                      FUN_14014191c(*plVar9,&local_68,&local_78,0);
                    }
                    if (local_50 != 0) {
                      FUN_1400020a8();
                    }
                    local_b8 = 0;
                    plStack_b0 = (longlong *)0x0;
                    FUN_14009b010(&local_b8,1,0);
                    if (local_b8 != 0) {
                      FUN_1406111c2(local_b8,puVar8[1]);
                    }
                    local_c8 = DAT_14cbe5750;
                    local_c0 = DAT_14cbe5758;
                    FUN_1448075d0(&local_68);
                    if (*plVar9 != 0) {
                      local_d8 = 0;
                      FUN_14014191c(*plVar9,&local_68,&local_b8,0);
                    }
                    if (local_50 != 0) {
                      FUN_1400020a8();
                    }
                    plVar9 = plStack_b0;
                    if (plStack_b0 != (longlong *)0x0) {
                      LOCK();
                      plVar1 = plStack_b0 + 1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)*plVar1 == 0) {
                        (**(code **)*plStack_b0)(plStack_b0);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar9 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar9 + 0x10))(plVar9);
                        }
                      }
                    }
                    plVar9 = plStack_70;
                    if (plStack_70 != (longlong *)0x0) {
                      LOCK();
                      plVar1 = plStack_70 + 1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)*plVar1 == 0) {
                        (**(code **)*plStack_70)(plStack_70);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar9 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar9 + 0x10))(plVar9);
                        }
                      }
                    }
                  }
                }
                lVar5 = FUN_140ade790(lVar7,uVar4);
                if (lVar5 != 0) {
                  local_78 = 0;
                  plStack_70 = (longlong *)0x0;
                  cVar3 = '\0';
                  FUN_14009b010(&local_78,3,0);
                  local_88 = DAT_14cbe575c;
                  local_80 = DAT_14cbe5764;
                  FUN_1448075d0(&local_68);
                  if (*param_5 != 0) {
                    local_d8 = 0;
                    cVar3 = FUN_14014191c(*param_5,&local_68,&local_78,0);
                  }
                  if (local_50 != 0) {
                    FUN_1400020a8();
                  }
                  plVar9 = plStack_70;
                  if (plStack_70 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = plStack_70 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*plStack_70)(plStack_70);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar9 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)(*plVar9 + 0x10))(plVar9);
                      }
                    }
                  }
                  if (cVar3 != '\0') {
                    local_98 = DAT_14cbe575c;
                    local_90 = DAT_14cbe5764;
                    FUN_1448075d0(&local_68);
                    plVar9 = (longlong *)FUN_14039d0c8(param_5,&local_68);
                    if (local_50 != 0) {
                      FUN_1400020a8();
                    }
                    local_78 = 0;
                    plStack_70 = (longlong *)0x0;
                    FUN_14009b010(&local_78,1,0);
                    if (local_78 != 0) {
                      FUN_1406114f4(local_78,*(undefined4 *)(lVar5 + 0xc));
                    }
                    local_a8 = DAT_14cbe5768;
                    local_a0 = DAT_14cbe5770;
                    FUN_1448075d0(&local_68);
                    if (*plVar9 != 0) {
                      local_d8 = 0;
                      FUN_14014191c(*plVar9,&local_68,&local_78,0);
                    }
                    if (local_50 != 0) {
                      FUN_1400020a8();
                    }
                    local_b8 = 0;
                    plStack_b0 = (longlong *)0x0;
                    FUN_14009b010(&local_b8,1,0);
                    if (local_b8 != 0) {
                      FUN_1406114f4(local_b8,*(undefined4 *)(lVar5 + 0x10));
                    }
                    local_c8 = DAT_14cbe5774;
                    local_c0 = DAT_14cbe577c;
                    FUN_1448075d0(&local_68);
                    if (*plVar9 != 0) {
                      local_d8 = 0;
                      FUN_14014191c(*plVar9,&local_68,&local_b8,0);
                    }
                    if (local_50 != 0) {
                      FUN_1400020a8();
                    }
                    plVar9 = plStack_b0;
                    if (plStack_b0 != (longlong *)0x0) {
                      LOCK();
                      plVar1 = plStack_b0 + 1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)*plVar1 == 0) {
                        (**(code **)*plStack_b0)(plStack_b0);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar9 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar9 + 0x10))(plVar9);
                        }
                      }
                    }
                    plVar9 = plStack_70;
                    if (plStack_70 != (longlong *)0x0) {
                      LOCK();
                      plVar1 = plStack_70 + 1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)*plVar1 == 0) {
                        (**(code **)*plStack_70)(plStack_70);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar9 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar9 + 0x10))(plVar9);
                        }
                      }
                    }
                  }
                }
                lVar5 = FUN_140ade790(lVar7,uVar4);
                if (lVar5 != 0) {
                  local_78 = 0;
                  plStack_70 = (longlong *)0x0;
                  FUN_14009b010(&local_78,1,0);
                  if (local_78 != 0) {
                    FUN_1406114f4(local_78,*(undefined4 *)(lVar5 + 8));
                  }
                  local_b8 = DAT_14cbe5780;
                  plStack_b0 = (longlong *)CONCAT44(plStack_b0._4_4_,DAT_14cbe5788);
                  FUN_1448075d0(&local_68);
                  if (*param_5 != 0) {
                    local_d8 = 0;
                    FUN_14014191c(*param_5,&local_68,&local_78,0);
                  }
                  if (local_50 != 0) {
                    FUN_1400020a8();
                  }
                  plVar9 = plStack_70;
                  if (plStack_70 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = plStack_70 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*plStack_70)(plStack_70);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar9 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)(*plVar9 + 0x10))(plVar9);
                      }
                    }
                  }
                }
                lVar5 = FUN_140ade790(lVar7,uVar4);
                if (lVar5 != 0) {
                  local_78 = 0;
                  plStack_70 = (longlong *)0x0;
                  cVar3 = '\0';
                  FUN_14009b010(&local_78,3,0);
                  local_88 = DAT_14cbe578c;
                  local_80 = DAT_14cbe5794;
                  FUN_1448075d0(&local_68);
                  if (*param_5 != 0) {
                    local_d8 = 0;
                    cVar3 = FUN_14014191c(*param_5,&local_68,&local_78,0);
                  }
                  if (local_50 != 0) {
                    FUN_1400020a8();
                  }
                  plVar9 = plStack_70;
                  if (plStack_70 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = plStack_70 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*plStack_70)(plStack_70);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar9 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)(*plVar9 + 0x10))(plVar9);
                      }
                    }
                  }
                  if (cVar3 != '\0') {
                    local_98 = DAT_14cbe578c;
                    local_90 = DAT_14cbe5794;
                    FUN_1448075d0(&local_68);
                    plVar9 = (longlong *)FUN_14039d0c8(param_5,&local_68);
                    if (local_50 != 0) {
                      FUN_1400020a8();
                    }
                    local_78 = 0;
                    plStack_70 = (longlong *)0x0;
                    FUN_14009b010(&local_78,1,0);
                    if ((local_78 != 0) && ((*(byte *)(local_78 + 1) & 2) == 0)) {
                      pcVar11 = "false";
                      if (*(char *)(lVar5 + 0x14) != '\0') {
                        pcVar11 = "true";
                      }
                      FUN_140126aca(local_78,pcVar11);
                    }
                    local_a8 = DAT_14cbe5798;
                    local_a0 = DAT_14cbe57a0;
                    FUN_1448075d0(&local_68);
                    if (*plVar9 != 0) {
                      local_d8 = 0;
                      FUN_14014191c(*plVar9,&local_68,&local_78,0);
                    }
                    if (local_50 != 0) {
                      FUN_1400020a8();
                    }
                    local_b8 = 0;
                    plStack_b0 = (longlong *)0x0;
                    FUN_14009b010(&local_b8,1,0);
                    if ((local_b8 != 0) && ((*(byte *)(local_b8 + 1) & 2) == 0)) {
                      pcVar11 = "false";
                      if (*(char *)(lVar5 + 0x15) != '\0') {
                        pcVar11 = "true";
                      }
                      FUN_140126aca(local_b8,pcVar11);
                    }
                    local_c8 = DAT_14cbe57a4;
                    local_c0 = DAT_14cbe57ac;
                    FUN_1448075d0(&local_68);
                    if (*plVar9 != 0) {
                      local_d8 = 0;
                      FUN_14014191c(*plVar9,&local_68,&local_b8,0);
                    }
                    if (local_50 != 0) {
                      FUN_1400020a8();
                    }
                    plVar9 = plStack_b0;
                    if (plStack_b0 != (longlong *)0x0) {
                      LOCK();
                      plVar1 = plStack_b0 + 1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)*plVar1 == 0) {
                        (**(code **)*plStack_b0)(plStack_b0);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar9 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar9 + 0x10))(plVar9);
                        }
                      }
                    }
                    plVar9 = plStack_70;
                    if (plStack_70 != (longlong *)0x0) {
                      LOCK();
                      plVar1 = plStack_70 + 1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)*plVar1 == 0) {
                        (**(code **)*plStack_70)(plStack_70);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar9 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar9 + 0x10))(plVar9);
                        }
                      }
                    }
                  }
                }
                uVar10 = 1;
                goto LAB_1412fe535;
              }
            }
          }
        }
      }
    }
  }
  uVar10 = 0;
LAB_1412fe535:
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412fe774 FUN_1412fe774 body=246 status=ok
// SIG undefined FUN_1412fe774(void)

longlong FUN_1412fe774(uint *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar4);
      if (lVar4 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar3 = FUN_14018d992();
  if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 1412fe86a FUN_1412fe86a body=265 status=ok
// SIG undefined FUN_1412fe86a(void)

undefined * FUN_1412fe86a(void)

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
              0x110) < DAT_14c9c0ce8) {
    FUN_144b3d300(&DAT_14c9c0ce8);
    if (DAT_14c9c0ce8 == -1) {
      FUN_1458d0364(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FVirtualShadowMapSamplingParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0xbf;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c0c68,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8fb1f);
      _Init_thread_footer(&DAT_14c9c0ce8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c0c68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412fe974 FUN_1412fe974 body=364 status=ok
// SIG undefined FUN_1412fe974(void)

undefined8 * FUN_1412fe974(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [39];
  undefined1 local_71;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 local_5c [4];
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140ecae36();
  *param_1 = &PTR_FUN_14b1e83a0;
  puVar1 = param_1 + 0x12;
  local_71 = 3;
  local_68 = (undefined1 *)CONCAT44(local_68._4_4_,DAT_14cb8dbd8);
  local_70 = DAT_14cb8dbd0;
  FUN_1448075d0(local_58,&local_70);
  local_70 = local_58;
  local_68 = &local_71;
  FUN_140ecaa46(puVar1,local_5c,&local_70,0);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_71 = 3;
  local_68 = (undefined1 *)CONCAT44(local_68._4_4_,DAT_14cb8dbf0);
  local_70 = DAT_14cb8dbe8;
  FUN_1448075d0(local_58,&local_70);
  local_70 = local_58;
  local_68 = &local_71;
  FUN_140ecaa46(puVar1,local_5c,&local_70,0);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_71 = 3;
  local_68 = (undefined1 *)CONCAT44(local_68._4_4_,DAT_14cb8dc08);
  local_70 = DAT_14cb8dc00;
  FUN_1448075d0(local_58,&local_70);
  local_70 = local_58;
  local_68 = &local_71;
  FUN_140ecaa46(puVar1,local_5c,&local_70,0);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


