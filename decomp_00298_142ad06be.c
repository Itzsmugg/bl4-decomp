// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142ad06be FUN_142ad06be body=1498 status=ok
// SIG undefined FUN_142ad06be(void)

void FUN_142ad06be(longlong param_1)

{
  longlong lVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  byte bVar9;
  bool bVar10;
  undefined1 auStack_2b8 [45];
  byte local_28b;
  char local_28a;
  byte local_289;
  PSRWLOCK local_288;
  undefined8 *local_280;
  int *local_278;
  longlong local_270;
  LPCRITICAL_SECTION local_268;
  longlong local_260;
  undefined8 *local_258;
  longlong lStack_250;
  undefined2 local_248;
  undefined8 local_238;
  undefined8 local_230;
  longlong local_228;
  longlong *local_218;
  longlong local_208 [4];
  undefined1 local_1e8;
  undefined1 *local_1d8;
  undefined8 **local_1d0;
  longlong local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  undefined2 local_1a8;
  undefined1 local_198 [16];
  undefined1 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined7 uStack_138;
  undefined1 uStack_131;
  undefined2 uStack_130;
  byte bStack_12e;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  local_288 = (PSRWLOCK)(param_1 + 0xe40);
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockExclusive(local_288);
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  local_108 = 0;
  local_100 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_fc = 0xffffffff00000080;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_88 = 0xffffffffffffffff;
  local_80 = 1;
  FUN_140be8873();
  FUN_140be88df();
  if (*(longlong *)(param_1 + 0x978) == 0) {
    local_28a = *(char *)(param_1 + 0xdc0);
    bVar9 = *(byte *)(param_1 + 0xdc1);
  }
  else {
    FUN_142acbcd6(*(longlong *)(param_1 + 0x978),0x3dcccccd);
    local_28a = *(char *)(param_1 + 0xdc0);
    bVar9 = *(byte *)(param_1 + 0xdc1);
    if (*(longlong *)(param_1 + 0x978) != 0) {
      local_28b = *(byte *)(*(longlong *)(param_1 + 0x978) + 0x6c) ^ 1;
      goto LAB_142ad07c8;
    }
  }
  local_28b = 1;
LAB_142ad07c8:
  local_90 = 0;
  FUN_140cb527e(&local_d8);
  local_e0 = 0;
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  local_260 = param_1 + -0x28;
  lVar1 = param_1 + 8;
  FUN_14010514e(&local_128);
  ReleaseSRWLockExclusive(local_288);
  local_280 = (undefined8 *)(param_1 + 0x818);
  local_268 = (LPCRITICAL_SECTION)(param_1 + 0x1428);
  local_270 = param_1 + 0x13a8;
  local_278 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
  local_289 = bVar9;
  do {
    local_188 = 0;
    uStack_130 = 0;
    bStack_12e = 0;
    local_140 = 0;
    uStack_138 = 0;
    uStack_131 = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    uStack_178 = 0;
    LOCK();
    *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
    UNLOCK();
    AcquireSRWLockExclusive(local_288);
    LOCK();
    *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
    UNLOCK();
    local_258 = (undefined8 *)0x0;
    lStack_250 = 0;
    local_248 = 0;
    local_108 = 0;
    local_100 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_fc = 0xffffffff00000080;
    local_f4 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_ac = 0xffffffff00000080;
    local_a4 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0xffffffffffffffff;
    local_80 = 1;
    lVar5 = FUN_140be8873();
    lVar6 = FUN_140be88df();
    bVar10 = false;
    local_258 = &local_128;
    if (*(char *)(param_1 + 0x810) == '\x01') {
      local_258 = local_280;
      if (*(char *)(param_1 + 0x8c0) == '\0') {
        bVar10 = *(longlong *)(param_1 + 0x8b8) == lVar6;
      }
      else {
        bVar10 = false;
      }
    }
    local_248 = CONCAT11(*(longlong *)(param_1 + 0x8c8) == lVar5,bVar10);
    lStack_250 = lVar1;
    if ((DAT_14c86a9f8 == '\x01') && (*local_278 != 2)) {
      if (*local_278 == 1) {
        DVar3 = FUN_140ad26c0();
        DVar4 = GetCurrentThreadId();
        if (DVar3 == DVar4) goto LAB_142ad0b97;
      }
    }
    else {
LAB_142ad0b97:
      lpCriticalSection = local_268;
      EnterCriticalSection(local_268);
      lVar5 = local_270;
      FUN_145bfdd1a(local_198,local_270);
      FUN_1457de678(lVar5);
      LeaveCriticalSection(lpCriticalSection);
    }
    lVar5 = *(longlong *)(param_1 + 0x978);
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x60) == 0)) {
      FUN_142acbcd6(lVar5,0xbf800000);
    }
    local_238 = 0xbff0000000000000;
    local_230 = 0xbff0000000000000;
    local_228 = 0;
    local_218 = (longlong *)0x0;
    local_1e8 = 0;
    local_1d8 = local_198;
    local_1d0 = &local_258;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1a8 = 0x101;
    bVar2 = FUN_142acf63a(lVar1,&local_238);
    if (local_1b8 != 0) {
      local_1b8 = 0;
      uStack_1b0 = 0;
    }
    if (local_1c8 != 0) {
      local_1c8 = 0;
      uStack_1c0 = 0;
    }
    if (local_228 != 0) {
      plVar8 = local_218;
      if (local_218 == (longlong *)0x0) {
        plVar8 = local_208;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    local_90 = 0;
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    FUN_140cb527e(&local_d8);
    local_e0 = 0;
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    FUN_14010514e(&local_128);
    ReleaseSRWLockExclusive(local_288);
    FUN_140fdd62a(local_260,local_198,1);
    bVar9 = bVar9 & 1 | bStack_12e;
    if ((2 < bVar2) && (bVar2 != 5)) {
      if ((bVar2 == 3) && (local_28a != '\0')) {
        LOCK();
        *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
        UNLOCK();
        AcquireSRWLockExclusive(local_288);
        LOCK();
        *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
        UNLOCK();
        if (((((*(byte *)(param_1 + 0xdc1) & 1) != 0) && (bVar9 == 0)) && ((local_289 & 1) == 0)) &&
           ((DAT_14c86a9f8 == '\x01' && (*local_278 == 1)))) {
          FUN_140ad26c0();
          GetCurrentThreadId();
        }
        ReleaseSRWLockExclusive(local_288);
      }
      FUN_140cb5138(local_198);
      if ((local_70 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    uVar7 = FUN_141552594();
    FUN_14275a71e(uVar7,0);
    if (bVar2 == 0 && local_28b == 0) {
      Sleep(9);
    }
    FUN_140cb5138(local_198);
  } while( true );
}



// FUNCTION 142ad0c9a FUN_142ad0c9a body=377 status=ok
// SIG undefined FUN_142ad0c9a(void)

void FUN_142ad0c9a(longlong param_1)

{
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  longlong local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined1 local_b0 [16];
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined4 uStack_49;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_49 = 0;
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  local_148 = 0;
  local_140 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_13c = 0xffffffff00000080;
  local_134 = 0;
  local_128 = 0;
  local_120 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_ec = 0xffffffff00000080;
  local_e4 = 0;
  local_d8 = 0;
  local_c8 = 0xffffffffffffffff;
  local_c0 = 1;
  FUN_140be8873();
  FUN_140be88df();
  FUN_146ff06c6(param_1 + 0xe30,param_1 + -0x28);
  local_d0 = 0;
  FUN_140cb527e(&local_118);
  local_120 = 0;
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  FUN_14010514e(&local_168);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
  FUN_140fdd62a(param_1 + -0x28,local_b0,0);
  FUN_140cb5138(local_b0);
  if ((local_40 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad0e14 FUN_142ad0e14 body=74 status=ok
// SIG undefined FUN_142ad0e14(void)

void FUN_142ad0e14(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  if (*(longlong *)(param_1 + 0x978) != 0) {
    FUN_146fea3ac();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ad0e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
  return;
}



// FUNCTION 142ad0e5e FUN_142ad0e5e body=383 status=ok
// SIG undefined FUN_142ad0e5e(void)

void FUN_142ad0e5e(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_128 [32];
  longlong local_108;
  int local_100;
  longlong local_f8 [3];
  undefined8 local_e0;
  int local_d8;
  longlong local_d0;
  int local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined4 uStack_59;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_59 = 0;
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  if ((*(byte *)(param_1 + 0xdc1) & 1) == 0) {
    local_f8[0] = 0;
    local_f8[1] = 0;
    FUN_140056680(&local_108);
    local_d0 = local_108;
    local_c8 = local_100 + -1;
    if (local_100 == 0) {
      local_c8 = 0;
    }
    local_e0 = *param_2;
    local_d8 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_d8 = 0;
    }
    cVar1 = FUN_1404d3d28(&local_e0,local_f8);
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    if (cVar1 != '\0') {
      FUN_146ff15ce(param_1 + 8,local_c0,param_2,local_f8);
    }
    if (local_f8[0] != 0) {
      FUN_1400020a8();
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
  FUN_140fdd62a(param_1 + -0x28,local_c0,0);
  FUN_140cb5138(local_c0);
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad0fde FUN_142ad0fde body=532 status=ok
// SIG undefined FUN_142ad0fde(void)

undefined8 FUN_142ad0fde(longlong param_1,LARGE_INTEGER *param_2,char param_3)

{
  ulonglong uVar1;
  undefined1 auStack_118 [40];
  LARGE_INTEGER *local_f0;
  code *local_e8;
  LARGE_INTEGER **local_e0;
  code *local_d8;
  LARGE_INTEGER **local_d0;
  LARGE_INTEGER *local_c8;
  code **local_c0;
  undefined4 local_b8;
  longlong local_b0;
  code *local_a8;
  LARGE_INTEGER **local_a0;
  LARGE_INTEGER local_98;
  ulonglong uStack_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  QueryPerformanceCounter(&local_98);
  local_78 = 0;
  local_70 = 0;
  local_98.QuadPart = 0;
  uStack_90 = 0;
  local_6c = 0x80;
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  if (param_3 == '\0') {
    local_e0 = &local_c8;
    local_e8 = FUN_142ade69a;
    local_c8 = param_2;
    FUN_146ff2ff0(&local_98,&local_a8);
  }
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  local_f0 = param_2;
  FUN_144731a98(&local_98,param_1 + 0x770);
  local_c0 = &local_d8;
  local_d8 = FUN_142ade6da;
  local_a0 = &local_c8;
  local_b8 = 0;
  local_a8 = FUN_142aea36e;
  local_d0 = &local_f0;
  local_c8 = &local_98;
  local_b0 = param_1 + 8;
  FUN_1415625f6(param_1 + 8);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  uVar1 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_14472eb64(&local_98,0);
  }
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_98.QuadPart != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad11f4 FUN_142ad11f4 body=130 status=ok
// SIG undefined FUN_142ad11f4(void)

void FUN_142ad11f4(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_147010bf2(param_1 + 8,&local_38,param_3);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad1278 FUN_142ad1278 body=141 status=ok
// SIG undefined FUN_142ad1278(void)

undefined8 * FUN_142ad1278(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_142ae1410(param_1 + 8,param_2);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad1306 FUN_142ad1306 body=271 status=ok
// SIG undefined FUN_142ad1306(void)

void FUN_142ad1306(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = (int)param_1[1];
  iVar4 = (int)param_2[1] + iVar2;
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
    FUN_1402191ca(param_2);
    iVar2 = (int)param_1[1];
  }
  if (iVar2 != 0) {
    lVar3 = *param_1;
    lVar9 = 0;
    do {
      if (*(longlong *)(lVar3 + lVar9) != 0) {
        iVar4 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
          FUN_1446f84a2(param_2,iVar4);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar4 * 8) = *(undefined8 *)(lVar3 + lVar9);
      }
      lVar9 = lVar9 + 0x20;
    } while ((longlong)iVar2 * 0x20 != lVar9);
  }
  FUN_144a41f4e(*param_2,(int)param_2[1]);
  uVar5 = (ulonglong)(int)param_2[1];
  if (1 < (longlong)uVar5) {
    plVar1 = (longlong *)*param_2;
    lVar3 = uVar5 * 8 + -8;
    plVar6 = plVar1;
    plVar8 = plVar1;
    do {
      plVar7 = plVar6;
      if ((*plVar6 != plVar8[1]) && (plVar7 = plVar6 + 1, plVar8 != plVar6)) {
        *plVar7 = plVar8[1];
      }
      plVar8 = plVar8 + 1;
      lVar3 = lVar3 + -8;
      plVar6 = plVar7;
    } while (lVar3 != 0);
    uVar5 = (ulonglong)((longlong)plVar7 + (8 - (longlong)plVar1)) >> 3;
  }
  FUN_1406089a0(param_2,uVar5,0);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ad1418 FUN_142ad1418 body=782 status=ok
// SIG undefined FUN_142ad1418(void)

undefined8 * FUN_142ad1418(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  PSRWLOCK SRWLock;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_1d8 [32];
  undefined8 **local_1b8;
  undefined1 local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 *local_188;
  longlong lStack_180;
  undefined2 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  longlong local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined1 local_b0 [16];
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined4 uStack_49;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  SRWLock = (PSRWLOCK)(param_1 + 0xe40);
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared(SRWLock);
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  lVar1 = param_1 + 8;
  if ((*(char *)(param_1 + 0xdc6) == '\x01') && ((*(byte *)(param_1 + 0xdc1) & 1) != 0)) {
    local_1b0 = 0;
    local_1b8 = (undefined8 **)0x0;
    FUN_146ff41aa(lVar1,param_2,param_3,0);
    ReleaseSRWLockShared(SRWLock);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_1d8);
  }
  ReleaseSRWLockShared(SRWLock);
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  bVar4 = false;
  uStack_49 = 0;
  local_188 = (undefined8 *)0x0;
  lStack_180 = 0;
  local_178 = 0;
  local_148 = 0;
  local_140 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_13c = 0xffffffff00000080;
  local_134 = 0;
  local_128 = 0;
  local_120 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_ec = 0xffffffff00000080;
  local_e4 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0xffffffffffffffff;
  local_c0 = 1;
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockExclusive(SRWLock);
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  lVar2 = FUN_140be8873();
  lVar3 = FUN_140be88df();
  if (*(char *)(param_1 + 0x810) == '\x01') {
    local_188 = (undefined8 *)(param_1 + 0x818);
    if (*(char *)(param_1 + 0x8c0) == '\0') {
      bVar4 = *(longlong *)(param_1 + 0x8b8) == lVar3;
    }
    else {
      bVar4 = false;
    }
  }
  else {
    local_188 = &local_168;
  }
  local_1b8 = &local_188;
  local_178 = CONCAT11(*(longlong *)(param_1 + 0x8c8) == lVar2,bVar4);
  local_1b0 = 1;
  lStack_180 = lVar1;
  FUN_146ff41aa(lVar1,&local_1a8,param_3,local_b0);
  *(undefined4 *)param_2 = local_1a8;
  *(undefined4 *)((longlong)param_2 + 4) = uStack_1a4;
  *(undefined4 *)(param_2 + 1) = uStack_1a0;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_19c;
  if ((undefined8 *)&local_1a8 == param_2) {
    if (local_198 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_2[2] != 0) {
      FUN_1400020a8();
    }
    param_2[2] = local_198;
    local_198 = 0;
    *(undefined4 *)(param_2 + 3) = local_190;
    *(undefined4 *)((longlong)param_2 + 0x1c) = local_18c;
  }
  ReleaseSRWLockExclusive(SRWLock);
  FUN_140fdd62a(param_1 + -0x28,local_b0,0);
  local_d0 = 0;
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  FUN_140cb527e(&local_118);
  local_120 = 0;
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  FUN_14010514e(&local_168);
  FUN_140cb5138(local_b0);
  if ((local_40 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad172c FUN_142ad172c body=663 status=ok
// SIG undefined FUN_142ad172c(void)

longlong FUN_142ad172c(undefined8 *param_1)

{
  uint uVar1;
  longlong *plVar2;
  void *_Src;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar7 = (longlong *)*param_1;
  FUN_1400e7e08(&local_58,param_1[1]);
  local_88 = local_58;
  uStack_80 = uStack_50;
  uVar1 = (uint)((ulonglong)uStack_50 >> 0x10);
  uVar10 = (uint)uStack_50 & 0xffff;
  uVar4 = (uint)((ulonglong)local_58 >> 0x10);
  uVar9 = (uint)local_58 & 0xffff;
  uVar4 = ((uint)local_58 << 0x10 | uVar9) + local_58._4_4_ + (uVar4 << 0x13 | uVar4 & 0xffff) +
          (uVar9 >> 4);
  iVar5 = FUN_1447fff98(plVar7,(uVar4 >> 2) +
                               ((uint)uStack_50 << 0x10 | uVar10) + uStack_50._4_4_ +
                               (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar10 >> 4) + uVar4 * 0x40 +
                               0x9e3779b9 ^ uVar4,&local_88);
  if (((iVar5 == -1) ||
      (plVar6 = (longlong *)((longlong)iVar5 * 0x10 + *plVar7), plVar6 == (longlong *)0x0)) ||
     (lVar8 = *plVar6, lVar8 == 0)) {
    plVar6 = (longlong *)param_1[1];
    if (*plVar6 != 0) {
      uVar1 = *(uint *)(plVar6 + 3);
      if (1 < (int)uVar1) {
        plVar2 = (longlong *)param_1[2];
        if (plVar2 != plVar6 + 2) {
          _Src = (void *)plVar6[2];
          *(uint *)(plVar2 + 1) = uVar1;
          FUN_1446dd670(plVar2,(ulonglong)uVar1,*(undefined4 *)((longlong)plVar2 + 0xc));
          memcpy((void *)*plVar2,_Src,(ulonglong)uVar1 * 2);
          plVar6 = (longlong *)param_1[1];
        }
        local_68 = *plVar6;
        lStack_60 = plVar6[1];
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_58 = 0;
        uStack_50 = 0;
        FUN_1400b3bc2(&local_88);
        puVar3 = (undefined8 *)param_1[1];
        *(undefined4 *)puVar3 = (undefined4)local_88;
        *(undefined4 *)((longlong)puVar3 + 4) = local_88._4_4_;
        *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_80._4_4_;
        if (puVar3 == &local_88) {
          if (local_78 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (puVar3[2] != 0) {
            FUN_1400020a8();
          }
          puVar3[2] = local_78;
          local_78 = 0;
          *(undefined4 *)(puVar3 + 3) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_70._4_4_;
        }
        FUN_1400e7e08(&local_58,param_1[1]);
        local_88 = local_58;
        uStack_80 = uStack_50;
        uVar1 = (uint)((ulonglong)uStack_50 >> 0x10);
        uVar10 = (uint)uStack_50 & 0xffff;
        uVar4 = (uint)((ulonglong)local_58 >> 0x10);
        uVar9 = (uint)local_58 & 0xffff;
        uVar4 = ((uint)local_58 << 0x10 | uVar9) + local_58._4_4_ + (uVar4 << 0x13 | uVar4 & 0xffff)
                + (uVar9 >> 4);
        iVar5 = FUN_1447fff98(plVar7,(uVar4 >> 2) +
                                     ((uint)uStack_50 << 0x10 | uVar10) + uStack_50._4_4_ +
                                     (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar10 >> 4) + uVar4 * 0x40
                                     + 0x9e3779b9 ^ uVar4);
        if ((iVar5 != -1) &&
           (plVar7 = (longlong *)((longlong)iVar5 * 0x10 + *plVar7), plVar7 != (longlong *)0x0)) {
          lVar8 = *plVar7;
          goto LAB_142ad199e;
        }
      }
    }
    lVar8 = 0;
  }
LAB_142ad199e:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad19c4 FUN_142ad19c4 body=628 status=ok
// SIG undefined FUN_142ad19c4(void)

undefined8 FUN_142ad19c4(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar11;
  
  FUN_14624a6fc();
  param_1 = (longlong *)*param_1;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    uVar15 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar14 = (uint)lVar2 & 0xffff;
    uVar5 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar9 = (uint)lVar3 & 0xffff;
    uVar15 = (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar14) +
             (uVar15 << 0x13 | uVar15 & 0xffff) + (uVar14 >> 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    iVar10 = *(int *)((longlong)plVar12 +
                     (ulonglong)
                     ((int)param_1[9] - 1U &
                     ((uVar15 >> 2) +
                      ((uint)lVar3 << 0x10 | uVar9) + (int)((ulonglong)lVar3 >> 0x20) +
                      (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4) + uVar15 * 0x40 + 0x9e3779b9 ^
                     uVar15)) * 4);
    if (iVar10 != -1) {
      lVar4 = *param_1;
      do {
        lVar11 = (longlong)iVar10;
        if ((*(longlong *)(lVar4 + lVar11 * 0x28) == lVar2) &&
           (*(longlong *)(lVar4 + 8 + lVar11 * 0x28) == lVar3)) {
          if (param_2 == (longlong *)0x0) {
            return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
          }
          uVar15 = 0;
          goto LAB_142ad1aed;
        }
        iVar10 = *(int *)(lVar4 + lVar11 * 0x28 + 0x20);
      } while (iVar10 != -1);
    }
  }
  return 0;
LAB_142ad1aed:
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
LAB_142ad1c1e:
    uVar8 = (ulonglong)(uVar15 + 1);
LAB_142ad1c24:
    return CONCAT71((int7)(uVar8 >> 8),(int)uVar8 != 0x10000);
  }
  lVar2 = *param_2;
  lVar3 = param_2[1];
  uVar9 = (uint)((ulonglong)lVar2 >> 0x10);
  uVar13 = (uint)lVar2 & 0xffff;
  uVar5 = (uint)((ulonglong)lVar3 >> 0x10);
  uVar14 = (uint)lVar3 & 0xffff;
  uVar9 = (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar13) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar13 >> 4);
  plVar12 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar12 = param_1 + 7;
  }
  iVar10 = *(int *)((longlong)plVar12 +
                   (ulonglong)
                   ((int)param_1[9] - 1U &
                   ((uVar9 >> 2) +
                    ((uint)lVar3 << 0x10 | uVar14) + (int)((ulonglong)lVar3 >> 0x20) +
                    (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar14 >> 4) + uVar9 * 0x40 + 0x9e3779b9 ^
                   uVar9)) * 4);
  if (iVar10 == -1) goto LAB_142ad1c1e;
  while( true ) {
    plVar12 = (longlong *)(*param_1 + (longlong)iVar10 * 0x28);
    if ((*plVar12 == lVar2) && (*(longlong *)(*param_1 + 8 + (longlong)iVar10 * 0x28) == lVar3))
    break;
    iVar10 = (int)plVar12[4];
    if (iVar10 == -1) goto LAB_142ad1c1e;
  }
  if ((plVar12 == (longlong *)0x0) || (param_2 = plVar12 + 2, *param_2 == 0)) goto LAB_142ad1c1e;
  iVar10 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar10 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar10 + 1U) {
    FUN_1401d5364(param_3,iVar10);
  }
  uVar6 = *(undefined4 *)((longlong)plVar12 + 0x14);
  lVar2 = plVar12[3];
  uVar7 = *(undefined4 *)((longlong)plVar12 + 0x1c);
  puVar1 = (undefined4 *)(*param_3 + (longlong)iVar10 * 0x10);
  *puVar1 = (int)*param_2;
  puVar1[1] = uVar6;
  puVar1[2] = (int)lVar2;
  puVar1[3] = uVar7;
  uVar8 = (ulonglong)(uVar15 + 1);
  if ((0xfffe < uVar15) || (uVar15 = uVar15 + 1, param_2 == (longlong *)0x0)) goto LAB_142ad1c24;
  goto LAB_142ad1aed;
}



// FUNCTION 142ad1c38 FUN_142ad1c38 body=200 status=ok
// SIG undefined FUN_142ad1c38(void)

void FUN_142ad1c38(longlong param_1,longlong *param_2)

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
    FUN_1414db28a(param_1,uVar3);
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
      FUN_1403afb7e(param_1);
    }
    iVar1 = (int)param_2[1];
  }
  if (iVar1 != 0) {
    lVar4 = *param_2;
    lVar5 = (longlong)iVar1 << 5;
    do {
      FUN_1449774fc(param_1,local_2c,lVar4,0);
      lVar4 = lVar4 + 0x20;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ad1d02 FUN_142ad1d02 body=260 status=ok
// SIG undefined FUN_142ad1d02(void)

void FUN_142ad1d02(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)FUN_140d57cf8();
  FUN_1468581d0(&DAT_14c927a10,&local_70,*(undefined4 *)(param_1 + 0x30));
  if ((longlong)local_68 == 0) {
    fVar4 = 3.4028235e+38;
  }
  else {
    lVar2 = 0;
    fVar5 = 3.4028235e+38;
    do {
      fVar3 = (float)(**(code **)(*plVar1 + 0x20))
                               (plVar1,*(undefined4 *)(local_70 + lVar2),param_2 != 0);
      if (param_2 != 0) {
        fVar3 = 100.0 - fVar3;
      }
      fVar4 = 0.0;
      if (fVar3 <= 0.0) break;
      fVar4 = fVar3;
      if (fVar5 <= fVar3) {
        fVar4 = fVar5;
      }
      lVar2 = lVar2 + 4;
      fVar5 = fVar4;
    } while ((longlong)local_68 * 4 != lVar2);
  }
  if (param_2 != 0) {
    fVar4 = 100.0 - fVar4;
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(fVar4);
  }
  return;
}



// FUNCTION 142ad1e08 FUN_142ad1e08 body=37 status=ok
// SIG undefined FUN_142ad1e08(void)

void FUN_142ad1e08(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_140d57cf8();
                    /* WARNING: Could not recover jumptable at 0x000142ad1e2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2 != 0,*(code **)(*plVar1 + 0x18));
  return;
}



// FUNCTION 142ad1e2e FUN_142ad1e2e body=273 status=ok
// SIG undefined FUN_142ad1e2e(void)

undefined4 FUN_142ad1e2e(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  int local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined7 uStack_40;
  undefined4 uStack_39;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_39 = 0;
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  local_b0 = *param_2;
  uVar4 = (ulonglong)((int)param_2[1] - 1);
  if ((int)param_2[1] == 0) {
    uVar4 = 0;
  }
  iVar3 = (int)uVar4;
  if (0 < iVar3) {
    iVar1 = wcsncmp(L"/",(wchar_t *)(local_b0 + uVar4 * 2 + -2),1);
    iVar3 = iVar3 - (uint)(iVar1 == 0);
  }
  local_a8 = iVar3;
  uVar2 = FUN_140a8f1ea(param_1 + 8,local_a0);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
  FUN_140fdd62a(param_1 + -0x28,local_a0,0);
  FUN_140cb5138(local_a0);
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad1f40 FUN_142ad1f40 body=131 status=ok
// SIG undefined FUN_142ad1f40(void)

longlong * FUN_142ad1f40(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong _MaxCount;
  
  uVar6 = *(uint *)(param_3 + 1);
  _MaxCount = (ulonglong)uVar6;
  uVar1 = *(uint *)(param_2 + 1);
  uVar3 = uVar1;
  if ((int)uVar6 < (int)uVar1) {
    uVar3 = uVar6;
  }
  uVar5 = 0;
  if (0 < (int)uVar3) {
    uVar5 = uVar3;
  }
  if (uVar6 == uVar5) {
    lVar2 = *param_2;
    if ((_MaxCount != 0) && (0 < (int)uVar3)) {
      iVar4 = wcsncmp((wchar_t *)*param_3,
                      (wchar_t *)(lVar2 + (longlong)(int)uVar1 * 2 + _MaxCount * -2),_MaxCount);
      if (iVar4 != 0) goto LAB_142ad1fbb;
    }
    uVar3 = uVar1 - uVar6;
    if ((int)uVar1 <= (int)(uVar1 - uVar6)) {
      uVar3 = uVar1;
    }
    uVar6 = 0;
    if (0 < (int)uVar3) {
      uVar6 = uVar3;
    }
    *param_1 = lVar2;
    *(uint *)(param_1 + 1) = uVar6;
  }
  else {
LAB_142ad1fbb:
    lVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar2;
  }
  return param_1;
}



// FUNCTION 142ad1fc4 FUN_142ad1fc4 body=296 status=ok
// SIG undefined FUN_142ad1fc4(void)

undefined4 FUN_142ad1fc4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined7 uStack_48;
  undefined4 uStack_41;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_41 = 0;
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  lVar1 = *param_2;
  uVar4 = (ulonglong)((int)param_2[1] - 1);
  if ((int)param_2[1] == 0) {
    uVar4 = 0;
  }
  if (0 < (int)uVar4) {
    iVar2 = wcsncmp(L"/",(wchar_t *)(lVar1 + uVar4 * 2 + -2),1);
    uVar4 = (ulonglong)((int)uVar4 - (uint)(iVar2 == 0));
  }
  FUN_1446f82e2(&local_b0,uVar4,lVar1,1);
  uVar3 = FUN_146ff6390(param_1 + 8,local_a8,local_b0);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
  FUN_140fdd62a(param_1 + -0x28,local_a8,0);
  FUN_140cb5138(local_a8);
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad20ee FUN_142ad20ee body=948 status=ok
// SIG undefined FUN_142ad20ee(void)

void FUN_142ad20ee(longlong param_1,LARGE_INTEGER *param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined1 uVar1;
  byte bVar2;
  double dVar3;
  LARGE_INTEGER LVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  LARGE_INTEGER *lpPerformanceCount;
  bool bVar9;
  undefined1 auStack_2b8 [32];
  undefined8 *local_298;
  undefined4 local_290;
  undefined8 local_288;
  undefined4 local_274;
  LARGE_INTEGER local_270;
  DWORD local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  double local_248;
  undefined1 local_240;
  byte local_23f;
  undefined1 local_238 [64];
  undefined8 *local_1f8;
  int local_1f0;
  undefined4 local_1d0;
  LARGE_INTEGER *local_1c8;
  longlong lStack_1c0;
  undefined2 local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  LARGE_INTEGER *local_198;
  undefined8 local_190;
  LARGE_INTEGER local_188;
  undefined8 uStack_180;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  longlong local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined1 local_d0 [16];
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined7 uStack_70;
  undefined4 uStack_69;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  lpPerformanceCount = &local_188;
  QueryPerformanceCounter(lpPerformanceCount);
  dVar3 = (double)local_188.QuadPart * DAT_14c83f420;
  local_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  bVar9 = false;
  uStack_69 = 0;
  local_1c8 = (LARGE_INTEGER *)0x0;
  lStack_1c0 = 0;
  local_1b8 = 0;
  local_168 = 0;
  local_160 = 0;
  local_188.QuadPart = 0;
  uStack_180 = 0;
  local_15c = 0xffffffff00000080;
  local_154 = 0;
  local_148 = 0;
  local_140 = 0;
  local_118 = 0;
  local_110 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_10c = 0xffffffff00000080;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0xffffffffffffffff;
  local_e0 = 1;
  local_288 = 0;
  local_298 = param_3;
  local_290 = param_4;
  local_274 = param_4;
  FUN_142accb5c(local_238,local_d0,&local_1c8,param_2);
  LOCK();
  *(int *)(param_1 + 0xe70) = *(int *)(param_1 + 0xe70) + 1;
  UNLOCK();
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe68));
  LOCK();
  *(int *)(param_1 + 0xe70) = *(int *)(param_1 + 0xe70) + -1;
  UNLOCK();
  lVar5 = FUN_140be8873();
  lVar6 = FUN_140be88df();
  if (*(char *)(param_1 + 0x838) == '\x01') {
    lpPerformanceCount = (LARGE_INTEGER *)(param_1 + 0x840);
    if (*(char *)(param_1 + 0x8e8) == '\0') {
      bVar9 = *(longlong *)(param_1 + 0x8e0) == lVar6;
    }
    else {
      bVar9 = false;
    }
  }
  local_1b8 = CONCAT11(*(longlong *)(param_1 + 0x8f0) == lVar5,bVar9);
  uVar1 = *(undefined1 *)(param_1 + 0xde8);
  bVar2 = *(byte *)(param_1 + 0xde9);
  local_1c8 = lpPerformanceCount;
  lStack_1c0 = param_1 + 0x30;
  FUN_146ff06c6(param_1 + 0xe58,param_1);
  FUN_142acd1a2(param_1 + 0x30,local_238);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe68));
  if (local_1f0 != 0) {
    FUN_140fdd62a(param_1,local_d0,0);
    if (local_1f0 < 2) {
      if (*(int *)(local_1f8 + 1) == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      else {
        puVar8 = (undefined2 *)*local_1f8;
      }
      FUN_140002266(&local_270,L"\'%s\'",puVar8);
    }
    else {
      if (*(int *)(local_1f8 + 1) == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      else {
        puVar8 = (undefined2 *)*local_1f8;
      }
      FUN_140002266(&local_270,L"\'%s\' and %d other paths",puVar8,local_1f0 + -1);
    }
    LVar4 = local_270;
    QueryPerformanceCounter(&local_270);
    local_248 = ((double)local_270.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar3 + 16777216.0);
    local_270 = *param_2;
    local_268 = param_2[1].s.LowPart;
    local_260 = *param_3;
    local_258 = *(undefined4 *)(param_3 + 1);
    local_250 = local_274;
    local_24c = local_1d0;
    local_240 = uVar1;
    local_23f = bVar2 & 1;
    uVar7 = FUN_146294004();
    local_190 = 0x38;
    local_1a8 = 0x2b4b9f1a;
    uStack_1a4 = 0xdcfd4958;
    uStack_1a0 = 0xbe43ba9d;
    uStack_19c = 0xae309392;
    local_198 = &local_270;
    FUN_1461df2f2(uVar7);
    if (LVar4.QuadPart != 0) {
      FUN_1400020a8(LVar4.QuadPart);
    }
  }
  FUN_146ff0bf0(local_238);
  local_f0 = 0;
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  FUN_140cb527e(&local_138);
  local_140 = 0;
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  FUN_14010514e(&local_188);
  FUN_140cb5138(local_d0);
  if ((local_60 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad24a4 FUN_142ad24a4 body=82 status=ok
// SIG undefined FUN_142ad24a4(void)

void FUN_142ad24a4(longlong param_1,undefined8 param_2)

{
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  if (*(longlong *)(param_1 + 0x978) != 0) {
    FUN_146febaa2(*(longlong *)(param_1 + 0x978),param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x000142ad24e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
  return;
}



// FUNCTION 142ad24f6 FUN_142ad24f6 body=757 status=ok
// SIG undefined FUN_142ad24f6(void)

void FUN_142ad24f6(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong **pplVar6;
  undefined1 auStack_1e8 [40];
  undefined8 local_1c0;
  longlong local_1b8 [2];
  longlong **local_1a8;
  int local_1a0;
  longlong *local_198;
  longlong *local_190;
  undefined1 local_158 [16];
  longlong *local_148;
  longlong local_138;
  code *local_128;
  longlong **local_120;
  undefined1 local_e8 [16];
  longlong *local_d8;
  longlong local_c8;
  longlong local_b8 [2];
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined7 uStack_58;
  undefined4 uStack_51;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if ((param_2 != (longlong *)0x0) &&
     (cVar2 = (**(code **)(*param_2 + 0x1c0))(param_2), cVar2 != '\0')) {
    plVar4 = param_2;
LAB_142ad256b:
    plVar3 = plVar4;
    plVar4 = plVar3;
    if ((longlong *)plVar3[4] != (longlong *)0x0) goto code_r0x000142ad257a;
    goto LAB_142ad258f;
  }
LAB_142ad2536:
  if ((local_48 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000142ad257a:
  plVar4 = (longlong *)plVar3[4];
  if ((*(uint *)(plVar3 + 1) >> 0x1c & 1) == 0) goto LAB_142ad256b;
  plVar4 = (longlong *)FUN_142840154(plVar3);
LAB_142ad258f:
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)plVar3[4];
    goto LAB_142ad256b;
  }
  *(byte *)((longlong)plVar4 + 0x2c) = *(byte *)((longlong)plVar4 + 0x2c) | 1;
  local_b8[0] = plVar4[3];
  FUN_1400021e4(local_b8,local_1b8);
  local_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_51 = 0;
  LOCK();
  *(int *)(param_1 + 0x1c9) = (int)param_1[0x1c9] + 1;
  UNLOCK();
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x1c8));
  LOCK();
  *(int *)(param_1 + 0x1c9) = (int)param_1[0x1c9] + -1;
  UNLOCK();
  FUN_144a8b5fe(param_1 + 0xee,plVar4[3]);
  FUN_140d2be42(&local_1a8,local_1b8);
  pplVar6 = local_1a8;
  if (local_1a0 == 0) {
    pplVar6 = (longlong **)&DAT_149dfb77a;
  }
  FUN_1446f470e(&local_1c0,pplVar6,1);
  local_128 = FUN_142adf94e;
  local_198 = param_1 + 1;
  local_190 = local_b8;
  local_120 = &local_198;
  FUN_140a8f30a(param_1 + 0x11b,local_1c0);
  if (local_1a8 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x1c8));
  FUN_140fdd62a(param_1 + -5,local_b8,0);
  FUN_146857ca8(&local_128,param_2,2,0);
  FUN_14700766a(param_1 + 0x1ed,&local_128);
  uVar5 = (**(code **)(*param_1 + 0x330))(param_1);
  FUN_1400e7d28(&local_198,&local_128);
  local_1a0 = 1;
  local_1a8 = &local_198;
  FUN_147007728(uVar5);
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if (local_148 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_148 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_148)(local_148);
      LOCK();
      piVar1 = (int *)((longlong)local_148 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_148 + 0x10))(local_148);
      }
    }
  }
  FUN_1400b4210(local_158);
  FUN_147007810(param_1 + 0x235,param_2);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_d8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  FUN_1400b4210(local_e8);
  FUN_140cb5138(local_b8);
  if (local_1b8[0] != 0) {
    FUN_1400020a8();
  }
  goto LAB_142ad2536;
}



// FUNCTION 142ad27ec FUN_142ad27ec body=516 status=ok
// SIG undefined FUN_142ad27ec(void)

void FUN_142ad27ec(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined4 local_120;
  undefined1 local_118 [64];
  undefined1 local_d8 [16];
  longlong *local_c8;
  longlong local_b8;
  longlong local_a8 [8];
  undefined1 local_68 [16];
  longlong *local_58;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((param_2 != (longlong *)0x0) &&
     (cVar2 = (**(code **)(*param_2 + 0x1c0))(param_2), plVar4 = param_2, cVar2 != '\0')) {
LAB_142ad2855:
    plVar3 = plVar4;
    plVar4 = plVar3;
    if ((longlong *)plVar3[4] != (longlong *)0x0) goto code_r0x000142ad2864;
    goto LAB_142ad2879;
  }
LAB_142ad2828:
  if ((local_38 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000142ad2864:
  plVar4 = (longlong *)plVar3[4];
  if ((*(uint *)(plVar3 + 1) >> 0x1c & 1) == 0) goto LAB_142ad2855;
  plVar4 = (longlong *)FUN_142840154(plVar3);
LAB_142ad2879:
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)plVar3[4];
    goto LAB_142ad2855;
  }
  cVar2 = FUN_1468f01ba(plVar4,param_2);
  LOCK();
  *(int *)(param_1 + 0x1c9) = (int)param_1[0x1c9] + 1;
  UNLOCK();
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x1c8));
  LOCK();
  *(int *)(param_1 + 0x1c9) = (int)param_1[0x1c9] + -1;
  UNLOCK();
  if (cVar2 != '\0') {
    local_a8[0] = plVar4[3];
    FUN_144a13f80(param_1 + 0xee,local_118,local_a8,0);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x1c8));
  FUN_146857ca8(local_a8,param_2,2,0);
  FUN_14700766a(param_1 + 0x1f5,local_a8);
  uVar5 = (**(code **)(*param_1 + 0x340))(param_1);
  FUN_1400e7d28(local_118,local_a8);
  local_120 = 1;
  local_128 = local_118;
  FUN_147007728(uVar5);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_c8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar1 = (int *)((longlong)local_c8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c8 + 0x10))(local_c8);
      }
    }
  }
  FUN_1400b4210(local_d8);
  FUN_147007810(param_1 + 0x23d,param_2);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_58 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  FUN_1400b4210(local_68);
  goto LAB_142ad2828;
}



// FUNCTION 142ad29f2 FUN_142ad29f2 body=913 status=ok
// SIG undefined FUN_142ad29f2(void)

void FUN_142ad29f2(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_1a0;
  longlong local_198;
  undefined2 *local_190;
  int local_188;
  undefined8 local_180;
  longlong local_178 [2];
  undefined2 *local_168;
  undefined8 uStack_160;
  longlong local_158 [2];
  longlong local_148 [2];
  longlong local_138;
  longlong *local_130;
  code *local_128;
  longlong *local_120;
  undefined1 local_e8 [16];
  longlong *local_d8;
  longlong local_c8;
  longlong local_b8 [2];
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined7 uStack_58;
  undefined4 uStack_51;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if ((param_2 != (longlong *)0x0) &&
     (cVar2 = (**(code **)(*param_2 + 0x1c0))(param_2), cVar2 != '\0')) {
    local_198 = param_1 + -0x28;
    plVar4 = param_2;
LAB_142ad2a6f:
    plVar3 = plVar4;
    plVar4 = plVar3;
    if ((longlong *)plVar3[4] != (longlong *)0x0) goto code_r0x000142ad2a7e;
    goto LAB_142ad2a93;
  }
LAB_142ad2a35:
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000142ad2a7e:
  plVar4 = (longlong *)plVar3[4];
  if ((*(uint *)(plVar3 + 1) >> 0x1c & 1) == 0) goto LAB_142ad2a6f;
  plVar4 = (longlong *)FUN_142840154(plVar3);
LAB_142ad2a93:
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)plVar3[4];
    goto LAB_142ad2a6f;
  }
  local_b8[0] = plVar4[3];
  FUN_1400021e4(local_b8,local_148);
  uVar5 = FUN_146872264();
  FUN_141509698(local_158,local_148,uVar5);
  local_168 = (undefined2 *)0x0;
  uStack_160 = 0;
  local_178[0] = 0;
  local_178[1] = 0;
  FUN_140056680(local_b8,&DAT_149e0635c);
  local_1a0 = 0;
  local_1a8 = 1;
  cVar2 = FUN_1407cdbc6(param_3,local_b8,local_178 + 2,local_178);
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (cVar2 == '\0') {
    lVar8 = 0;
    cVar2 = '\0';
  }
  else {
    puVar7 = local_168;
    if ((int)uStack_160 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    lVar6 = FUN_140277851(0,puVar7);
    cVar2 = '\0';
    lVar8 = 0;
    if (lVar6 != 0) {
      cVar2 = FUN_1468f01ba(lVar6,0);
      lVar8 = lVar6;
    }
  }
  local_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_51 = 0;
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  FUN_144a8b5fe(param_1 + 0x770,plVar4[3]);
  if (cVar2 != '\0') {
    local_128 = *(code **)(lVar8 + 0x18);
    FUN_144a13f80(param_1 + 0x770,&local_138,&local_128,0);
  }
  FUN_140d2be42(&local_190,local_148);
  puVar7 = local_190;
  if (local_188 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_180,puVar7,1);
  local_120 = &local_138;
  local_128 = FUN_142adf94e;
  local_138 = param_1 + 8;
  local_130 = local_b8;
  FUN_140a8f30a(param_1 + 0x8d8,local_180);
  if (local_190 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
  FUN_140fdd62a(local_198,local_b8,0);
  FUN_146857ca8(&local_128,param_2,2,0);
  FUN_1470078ce(param_1 + 0xfe8,&local_128,param_3);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_d8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  FUN_1400b4210(local_e8);
  FUN_140cb5138(local_b8);
  if (local_178[0] != 0) {
    FUN_1400020a8();
  }
  if (local_168 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_158[0] != 0) {
    FUN_1400020a8();
  }
  if (local_148[0] != 0) {
    FUN_1400020a8();
  }
  goto LAB_142ad2a35;
}



// FUNCTION 142ad2d84 FUN_142ad2d84 body=628 status=ok
// SIG undefined FUN_142ad2d84(void)

undefined4 FUN_142ad2d84(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_948 [40];
  undefined8 local_920;
  undefined8 local_918;
  int local_910;
  void *local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  int local_8f0;
  void *local_8e8;
  int local_8e0;
  undefined1 local_8d8;
  undefined8 local_8d0;
  undefined8 uStack_8c8;
  undefined8 local_8c0;
  undefined8 uStack_8b8;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined8 local_8a0;
  undefined8 uStack_898;
  undefined8 local_890;
  undefined7 uStack_888;
  undefined4 uStack_881;
  undefined2 *local_878;
  undefined2 *local_870;
  undefined2 *local_868;
  char local_860;
  undefined2 local_858 [1035];
  undefined2 local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_948;
  local_8f8 = *param_2;
  uVar4 = 0;
  local_8f0 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_8f0 = 0;
  }
  cVar3 = FUN_146febe82();
  if (cVar3 != '\0') {
    local_908 = (void *)0x0;
    uStack_900 = 0;
    uVar4 = FUN_140f11842(param_2,&local_908,0,1);
    _Src = local_908;
    if ((char)uVar4 != '\0') {
      local_878 = local_858;
      local_860 = '\0';
      local_868 = &local_42;
      uVar1 = (uint)uStack_900;
      iVar5 = (uint)uStack_900 - 1;
      if ((uint)uStack_900 == 0) {
        iVar5 = 0;
      }
      lVar6 = (longlong)iVar5;
      local_870 = local_878;
      if (0x40a < iVar5) {
        FUN_140213274(&local_878,lVar6);
      }
      puVar2 = local_870;
      if (1 < uVar1) {
        memcpy(local_870,_Src,lVar6 * 2);
        local_870 = puVar2 + lVar6;
      }
      puVar2 = local_870;
      local_918 = *param_2;
      local_910 = *(int *)(param_2 + 1) + -1;
      if (*(int *)(param_2 + 1) == 0) {
        local_910 = 0;
      }
      FUN_140fede38(&local_8e8,&local_918,1);
      lVar6 = (longlong)local_8e0;
      if (local_868 <= puVar2 + lVar6) {
        FUN_140213274(&local_878,lVar6);
      }
      puVar2 = local_870;
      if (local_8e0 != 0) {
        memcpy(local_870,local_8e8,lVar6 * 2);
        local_870 = puVar2 + lVar6;
      }
      local_8d8 = 0;
      local_8d0 = 0;
      uStack_8c8 = 0;
      local_8c0 = 0;
      uStack_8b8 = 0;
      local_8b0 = 0;
      uStack_8a8 = 0;
      local_8a0 = 0;
      uStack_898 = 0;
      local_890 = 0;
      uStack_888 = 0;
      uStack_881 = 0;
      LOCK();
      *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
      UNLOCK();
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
      LOCK();
      *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
      UNLOCK();
      *local_870 = 0;
      FUN_1446f470e(&local_920,local_878,1);
      FUN_146ff6672(param_1 + 8,&local_8e8,local_920);
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
      FUN_140fdd62a(param_1 + -0x28,&local_8e8,0);
      FUN_140cb5138(&local_8e8);
      if (local_860 == '\x01') {
        FUN_1400020a8(local_878);
      }
    }
    if (local_908 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_948) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad2ffa FUN_142ad2ffa body=628 status=ok
// SIG undefined FUN_142ad2ffa(void)

undefined4 FUN_142ad2ffa(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_948 [40];
  undefined8 local_920;
  undefined8 local_918;
  int local_910;
  void *local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  int local_8f0;
  void *local_8e8;
  int local_8e0;
  undefined1 local_8d8;
  undefined8 local_8d0;
  undefined8 uStack_8c8;
  undefined8 local_8c0;
  undefined8 uStack_8b8;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined8 local_8a0;
  undefined8 uStack_898;
  undefined8 local_890;
  undefined7 uStack_888;
  undefined4 uStack_881;
  undefined2 *local_878;
  undefined2 *local_870;
  undefined2 *local_868;
  char local_860;
  undefined2 local_858 [1035];
  undefined2 local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_948;
  local_8f8 = *param_2;
  uVar4 = 0;
  local_8f0 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_8f0 = 0;
  }
  cVar3 = FUN_146febe82();
  if (cVar3 != '\0') {
    local_908 = (void *)0x0;
    uStack_900 = 0;
    uVar4 = FUN_140f11842(param_2,&local_908,0,1);
    _Src = local_908;
    if ((char)uVar4 != '\0') {
      local_878 = local_858;
      local_860 = '\0';
      local_868 = &local_42;
      uVar1 = (uint)uStack_900;
      iVar5 = (uint)uStack_900 - 1;
      if ((uint)uStack_900 == 0) {
        iVar5 = 0;
      }
      lVar6 = (longlong)iVar5;
      local_870 = local_878;
      if (0x40a < iVar5) {
        FUN_140213274(&local_878,lVar6);
      }
      puVar2 = local_870;
      if (1 < uVar1) {
        memcpy(local_870,_Src,lVar6 * 2);
        local_870 = puVar2 + lVar6;
      }
      puVar2 = local_870;
      local_918 = *param_2;
      local_910 = *(int *)(param_2 + 1) + -1;
      if (*(int *)(param_2 + 1) == 0) {
        local_910 = 0;
      }
      FUN_140fede38(&local_8e8,&local_918,1);
      lVar6 = (longlong)local_8e0;
      if (local_868 <= puVar2 + lVar6) {
        FUN_140213274(&local_878,lVar6);
      }
      puVar2 = local_870;
      if (local_8e0 != 0) {
        memcpy(local_870,local_8e8,lVar6 * 2);
        local_870 = puVar2 + lVar6;
      }
      local_8d8 = 0;
      local_8d0 = 0;
      uStack_8c8 = 0;
      local_8c0 = 0;
      uStack_8b8 = 0;
      local_8b0 = 0;
      uStack_8a8 = 0;
      local_8a0 = 0;
      uStack_898 = 0;
      local_890 = 0;
      uStack_888 = 0;
      uStack_881 = 0;
      LOCK();
      *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
      UNLOCK();
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
      LOCK();
      *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
      UNLOCK();
      *local_870 = 0;
      FUN_1446f470e(&local_920,local_878,1);
      FUN_146ff687e(param_1 + 8,&local_8e8,local_920);
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
      FUN_140fdd62a(param_1 + -0x28,&local_8e8,0);
      FUN_140cb5138(&local_8e8);
      if (local_860 == '\x01') {
        FUN_1400020a8(local_878);
      }
    }
    if (local_908 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_948) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad3270 FUN_142ad3270 body=215 status=ok
// SIG undefined FUN_142ad3270(void)

void FUN_142ad3270(longlong param_1,longlong param_2)

{
  undefined1 auStack_b8 [40];
  undefined1 local_90 [16];
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined7 uStack_30;
  undefined4 uStack_29;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_29 = 0;
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
    UNLOCK();
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
    LOCK();
    *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
    UNLOCK();
    FUN_146ff6a98(param_1 + 8,local_90,*(undefined8 *)(param_2 + 0x18));
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
  }
  FUN_140fdd62a(param_1 + -0x28,local_90,0);
  FUN_140cb5138(local_90);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad3348 FUN_142ad3348 body=1398 status=ok
// SIG undefined FUN_142ad3348(void)

void FUN_142ad3348(longlong param_1,float param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  double dVar1;
  BOOL BVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  LPCRITICAL_SECTION lpCriticalSection_00;
  bool bVar7;
  float fVar8;
  undefined1 auStack_2d8 [32];
  LARGE_INTEGER *local_2b8;
  longlong local_2b0;
  undefined8 local_2a8;
  longlong local_2a0;
  PSRWLOCK local_298;
  LPCRITICAL_SECTION local_290;
  LARGE_INTEGER *local_288;
  longlong lStack_280;
  undefined2 local_278;
  double local_268;
  double local_260;
  longlong local_258;
  longlong *local_248;
  longlong local_238 [4];
  char local_218;
  undefined1 *local_208;
  LARGE_INTEGER **local_200;
  longlong local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e8;
  undefined8 uStack_1e0;
  undefined2 local_1d8;
  LARGE_INTEGER local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  longlong local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  longlong local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined1 local_110 [16];
  char local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  char cStack_a8;
  char cStack_a7;
  undefined1 uStack_a6;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  if (0.0 <= param_2) {
    QueryPerformanceCounter(&local_1c8);
    dVar1 = (double)local_1c8.QuadPart * DAT_14c83f420 + 16777216.0;
  }
  else {
    dVar1 = -1.0;
  }
  fVar8 = DAT_14c75f4cc;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1428);
  EnterCriticalSection(lpCriticalSection);
  FUN_146294c32(param_1 + -0x28);
  LeaveCriticalSection(lpCriticalSection);
  lpCriticalSection_00 = (LPCRITICAL_SECTION)(param_1 + 0xe50);
  local_298 = (PSRWLOCK)(param_1 + 0xe40);
  local_2b0 = param_1 + 8;
  local_2b8 = (LARGE_INTEGER *)(param_1 + 0x818);
  local_2a0 = param_1 + 0x13a8;
  local_2a8 = 0;
  local_290 = lpCriticalSection_00;
  do {
    local_100 = '\0';
    local_b8 = 0;
    iStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    uStack_ac = 0;
    cStack_a8 = '\0';
    cStack_a7 = '\0';
    uStack_a6 = 0;
    BVar2 = TryEnterCriticalSection(lpCriticalSection_00);
    if (BVar2 == 0) {
      EnterCriticalSection(lpCriticalSection);
      lVar3 = local_2a0;
      FUN_1457de4d0(local_110,local_2a0);
      FUN_1457de678(lVar3);
      LeaveCriticalSection(lpCriticalSection);
      cVar6 = '\0';
    }
    else {
      LOCK();
      *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
      UNLOCK();
      AcquireSRWLockExclusive(local_298);
      LOCK();
      *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
      UNLOCK();
      local_288 = (LARGE_INTEGER *)0x0;
      lStack_280 = 0;
      local_278 = 0;
      bVar7 = false;
      local_1a8 = 0;
      local_1a0 = 0;
      local_1c8.QuadPart = 0;
      uStack_1c0 = 0;
      local_19c = 0xffffffff00000080;
      local_194 = 0;
      local_188 = 0;
      local_180 = 0;
      local_158 = 0;
      local_150 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_14c = 0xffffffff00000080;
      local_144 = 0;
      local_138 = 0;
      local_130 = 0;
      local_128 = 0xffffffffffffffff;
      local_120 = 1;
      lVar3 = FUN_140be8873();
      lVar4 = FUN_140be88df();
      local_288 = &local_1c8;
      if (*(char *)(param_1 + 0x810) == '\x01') {
        local_288 = local_2b8;
        if (*(char *)(param_1 + 0x8c0) == '\0') {
          bVar7 = *(longlong *)(param_1 + 0x8b8) == lVar4;
        }
        else {
          bVar7 = false;
        }
      }
      lStack_280 = local_2b0;
      local_278 = CONCAT11(*(longlong *)(param_1 + 0x8c8) == lVar3,bVar7);
      EnterCriticalSection(lpCriticalSection);
      lVar3 = local_2a0;
      FUN_145bfdd1a(local_110,local_2a0);
      FUN_1457de678(lVar3);
      LeaveCriticalSection(lpCriticalSection);
      cVar6 = '\x01';
      if (((((cStack_a7 == '\0') && (cStack_a8 == '\0')) && (local_100 == '\0')) &&
          (((int)uStack_f0 == 0 && ((int)uStack_e0 == 0)))) &&
         (((int)uStack_c0 == 0 && (iStack_b0 == 0)))) {
        local_258 = 0;
        local_248 = (longlong *)0x0;
        local_218 = '\0';
        local_208 = local_110;
        local_200 = &local_288;
        local_1e8 = 0;
        uStack_1e0 = 0;
        local_1f8 = 0;
        uStack_1f0 = 0;
        fVar8 = *(float *)(param_1 + 0xdcc);
        local_260 = (double)fVar8;
        local_1d8 = 0x101;
        local_268 = dVar1;
        local_2a8 = FUN_142acf63a(local_2b0,&local_268);
        cVar6 = local_218;
        if (local_1e8 != 0) {
          local_1e8 = 0;
          uStack_1e0 = 0;
        }
        if (local_1f8 != 0) {
          local_1f8 = 0;
          uStack_1f0 = 0;
        }
        if (local_258 != 0) {
          plVar5 = local_248;
          if (local_248 == (longlong *)0x0) {
            plVar5 = local_238;
          }
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      lpCriticalSection_00 = local_290;
      LeaveCriticalSection(local_290);
      local_130 = 0;
      if (local_138 != 0) {
        FUN_1400020a8();
      }
      FUN_140cb527e(&local_178);
      local_180 = 0;
      if (local_188 != 0) {
        FUN_1400020a8();
      }
      FUN_14010514e(&local_1c8);
      ReleaseSRWLockExclusive(local_298);
    }
    FUN_140fdd62a(param_1 + -0x28,local_110,1);
    FUN_140cb5138(local_110);
  } while (((cVar6 != '\0') || ((char)local_2a8 == '\x05')) &&
          ((dVar1 < 0.0 ||
           (QueryPerformanceCounter(&local_1c8),
           ((double)local_1c8.QuadPart * DAT_14c83f420 + 16777216.0) - dVar1 <= (double)fVar8))));
  if ((local_a0 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ad38c0 FUN_142ad38c0 body=699 status=ok
// SIG undefined FUN_142ad38c0(void)

void FUN_142ad38c0(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  undefined1 local_9c [4];
  LARGE_INTEGER local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar3 = *param_1;
    puVar4 = (undefined8 *)param_1[3];
    if (*(double *)*puVar4 <= 0.0) {
      QueryPerformanceCounter(&local_98);
      *(double *)*puVar4 = (double)local_98.QuadPart * DAT_14c83f420 + 16777216.0;
    }
    lVar13 = param_1[2];
    pcVar5 = *(code **)(lVar13 + 0x70);
    if (pcVar5 != (code *)0x0) {
      uVar11 = 0;
      local_78 = 0;
      local_70 = 0;
      local_98.QuadPart = 0;
      uStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      iVar2 = (int)param_2[5];
      uVar16 = 1;
      iVar14 = 0;
      iVar12 = 0;
      if (iVar2 != 0) {
        puVar9 = (uint *)param_2[4];
        if ((uint *)param_2[4] == (uint *)0x0) {
          puVar9 = (uint *)(param_2 + 2);
        }
        uVar15 = *puVar9;
        if (uVar15 == 0) {
          iVar12 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar12 = iVar2 + -1;
          }
          uVar11 = 0;
          uVar16 = (ulonglong)(uint)(iVar12 >> 5);
          if (iVar12 >> 5 < 1) {
            uVar16 = uVar11;
          }
          iVar14 = 0;
          do {
            if (uVar16 == uVar11) goto LAB_142ad3b3f;
            iVar14 = iVar14 + 0x20;
            uVar15 = puVar9[uVar11 + 1];
            uVar11 = uVar11 + 1;
          } while (uVar15 == 0);
        }
        else {
          uVar11 = 0;
        }
        uVar16 = (ulonglong)(-uVar15 & uVar15);
        uVar1 = uVar16 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar12 = (iVar14 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar12) {
          iVar12 = iVar2;
        }
      }
      if (iVar12 < iVar2) {
        uVar15 = 0xffffffff;
        do {
          local_b0 = *param_2 + (longlong)iVar12 * 0x18;
          local_b8 = *(undefined8 *)(local_b0 + 8);
          local_a8 = &local_b8;
          FUN_146ffccc4(&local_98,local_9c,&local_b0);
          uVar15 = ~(uint)uVar16 & uVar15;
          puVar9 = (uint *)param_2[4];
          if ((uint *)param_2[4] == (uint *)0x0) {
            puVar9 = (uint *)(param_2 + 2);
          }
          iVar2 = (int)param_2[5];
          iVar12 = (int)uVar11;
          lVar13 = (longlong)iVar12;
          uVar6 = puVar9[lVar13] & uVar15;
          if (uVar6 == 0) {
            iVar7 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar7 = iVar2 + -1;
            }
            iVar7 = iVar7 >> 5;
            iVar8 = iVar7;
            if (iVar7 < iVar12) {
              iVar8 = iVar12;
            }
            if (iVar7 <= iVar12) break;
            lVar10 = 0;
            while( true ) {
              iVar14 = iVar14 + 0x20;
              uVar6 = puVar9[lVar13 + lVar10 + 1];
              if (uVar6 != 0) break;
              lVar10 = lVar10 + 1;
              if (iVar8 - lVar13 == lVar10) goto LAB_142ad3b37;
            }
            uVar11 = (ulonglong)(iVar12 + (int)lVar10 + 1);
            uVar15 = 0xffffffff;
          }
          uVar16 = (ulonglong)(-uVar6 & uVar6);
          uVar1 = uVar16 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar12 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        } while (iVar12 < iVar2);
LAB_142ad3b37:
        lVar13 = param_1[2];
        pcVar5 = *(code **)(lVar13 + 0x70);
      }
LAB_142ad3b3f:
      (*pcVar5)(*(undefined8 *)(lVar13 + 0x78),&local_98);
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_146ffd0b2(&local_98);
    }
    FUN_142ad4834(uVar3,param_1[1],param_2,param_1[4]);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad3b7c FUN_142ad3b7c body=342 status=ok
// SIG undefined FUN_142ad3b7c(void)

void FUN_142ad3b7c(longlong param_1,double param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined1 auStack_108 [40];
  LARGE_INTEGER local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float local_a4;
  float local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  LARGE_INTEGER *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_146fea074(*(undefined8 *)(param_1 + 0x970),&local_a4);
  fVar1 = *(float *)(param_1 + 0xda8);
  QueryPerformanceCounter(&local_e0);
  local_e0 = (LARGE_INTEGER)(((double)local_e0.QuadPart * DAT_14c83f420 + 16777216.0) - param_2);
  local_d8 = (double)(local_a4 + local_a0 + fVar1);
  local_d0 = (double)local_a4;
  local_c8 = (double)local_a0;
  local_c0 = (double)*(float *)(param_1 + 0xda8);
  local_b8 = local_98;
  uStack_b4 = uStack_94;
  uStack_b0 = uStack_90;
  uStack_ac = uStack_8c;
  uVar2 = FUN_146294004();
  local_68 = 0x38;
  local_88 = 0xafcec052;
  uStack_84 = 0x5d2c4850;
  uStack_80 = 0xbfc6d11d;
  uStack_7c = 0x3163ccd5;
  local_70 = &local_e0;
  FUN_1461df2f2(uVar2);
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad3cd4 FUN_142ad3cd4 body=1704 status=ok
// SIG undefined FUN_142ad3cd4(void)

void FUN_142ad3cd4(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_1e8 [40];
  longlong *local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  ulonglong uStack_180;
  longlong local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 *local_160;
  longlong local_158;
  undefined1 local_14c [4];
  LARGE_INTEGER local_148;
  longlong local_140;
  longlong local_138;
  longlong *local_128;
  longlong local_118 [4];
  undefined1 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  int local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar7 = *param_1;
  local_178 = 0;
  uStack_170 = 0;
  local_198 = lVar7 + 0x978;
  local_188 = 0;
  uStack_180 = 0;
  local_168 = param_2;
  FUN_146ffd140(local_198,param_2,&local_178);
  local_1a0 = lVar7 + 0x9c8;
  FUN_146ffd140(local_1a0,param_2,&local_178);
  FUN_146ffd228(lVar7 + 0xa30,param_2,&local_188);
  FUN_146ffd60a(lVar7 + 0xa30,param_2);
  lVar8 = lVar7 + 0xa80;
  FUN_146ffd228(lVar8,param_2,&local_188);
  FUN_146ffd60a(lVar8,param_2);
  local_1a8 = lVar7 + 0xc18;
  FUN_146ffd140(local_1a8,param_2,&local_178);
  local_190 = lVar7 + 0xc68;
  FUN_146ffd140(local_190,param_2,&local_178);
  FUN_146ffd228(lVar7 + 0xcb8,param_2,&local_188);
  FUN_146ffd60a(lVar7 + 0xcb8,param_2);
  lVar3 = lVar7 + 0xd08;
  FUN_146ffd228(lVar3,param_2,&local_188);
  local_1b0 = lVar3;
  FUN_146ffd60a(lVar3,param_2);
  if (0 < (int)(uint)uStack_170) {
    uVar5 = (uint)uStack_170;
    local_1b8 = lVar7;
    if (*(double *)param_1[1] <= 0.0) {
      QueryPerformanceCounter(&local_148);
      *(double *)param_1[1] = (double)local_148.QuadPart * DAT_14c83f420 + 16777216.0;
      uVar5 = (uint)uStack_170;
    }
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_1c0 = param_1;
    if (uVar5 != 0) {
      if ((int)uVar5 < 0) goto LAB_142ad4375;
      FUN_146ffd7bc(&local_98,uVar5);
      iVar1 = 1;
      if (3 < uVar5) {
        uVar5 = (uVar5 | 1) + 0xe;
        iVar1 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> iVar1 == 0; iVar1 = iVar1 + -1) {
          }
        }
        iVar1 = 1 << ((byte)iVar1 & 0x1f);
      }
      if ((local_50 == 0) || (local_50 < iVar1)) {
        local_50 = iVar1;
        FUN_146ffd958();
      }
    }
    lVar3 = local_178;
    lVar7 = (longlong)(int)(uint)uStack_170;
    if (lVar7 != 0) {
      lVar4 = 0;
      do {
        local_140 = *(undefined8 *)(lVar3 + lVar4);
        local_148.QuadPart = (LONGLONG)&local_168;
        FUN_1470013a2(&local_98,&local_e8,&local_148);
        lVar4 = lVar4 + 8;
      } while (lVar7 * 8 != lVar4);
    }
    FUN_146ffdb32(local_198,local_168);
    FUN_146ffdb32(local_1a0,local_168);
    FUN_146ffdb32(local_1a8,local_168);
    lVar3 = local_190;
    FUN_146ffdb32(local_190,local_168);
    lVar7 = local_1b8;
    param_1 = local_1c0;
    uVar6 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_bc = 0xffffffff00000080;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_148.QuadPart = -0x4010000000000000;
    local_140 = 0xbff0000000000000;
    local_138 = 0;
    local_128 = (longlong *)0x0;
    local_f8 = 0;
    FUN_142ad4834(local_1b8,local_1c0[2],&local_98);
    if ((int)uStack_e0 != local_b4) {
      FUN_146ff6d58(lVar3,&local_e8);
      if ((longlong)(int)uStack_180 != 0) {
        lVar4 = (longlong)(int)uStack_180 * 0xe8;
        lVar3 = local_188;
        do {
          local_160 = &local_168;
          local_158 = lVar3;
          FUN_146ffdce4(lVar8,local_14c,&local_160);
          lVar3 = lVar3 + 0xe8;
          lVar4 = lVar4 + -0xe8;
        } while (lVar4 != 0);
        uVar6 = uStack_180 & 0xffffffff;
        param_1 = local_1c0;
      }
      FUN_146ffe131(local_188,uVar6);
      uVar6 = uStack_180 >> 0x20;
      uStack_180 = uStack_180 & 0xffffffff00000000;
      if ((int)uVar6 != 0) {
        FUN_146ffe15a(&local_188,0);
      }
    }
    if (local_138 != 0) {
      plVar2 = local_128;
      if (local_128 == (longlong *)0x0) {
        plVar2 = local_118;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    local_a0 = 0;
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_145c17668(&local_e8);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_145c17668(&local_98);
  }
  uVar6 = uStack_180 & 0xffffffff;
  if (0 < (int)uStack_180) {
    if (*(double *)param_1[1] <= 0.0) {
      QueryPerformanceCounter(&local_148);
      *(double *)param_1[1] = (double)local_148.QuadPart * DAT_14c83f420 + 16777216.0;
      uVar6 = uStack_180 & 0xffffffff;
    }
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    uVar5 = (uint)uVar6;
    if (uVar5 != 0) {
      if ((int)uVar5 < 0) {
LAB_142ad4375:
        local_50 = 0;
        local_58 = 0;
        local_64 = 0;
        local_6c = 0xffffffff00000080;
        local_70 = 0;
        local_78 = 0;
        uStack_90 = 0;
        local_98 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar5);
      }
      FUN_146ffe1ca(&local_98,uVar6);
      iVar1 = 1;
      if (3 < uVar5) {
        uVar5 = (uVar5 | 1) + 0xe;
        iVar1 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> iVar1 == 0; iVar1 = iVar1 + -1) {
          }
        }
        iVar1 = 1 << ((byte)iVar1 & 0x1f);
      }
      if ((local_50 == 0) || (local_50 < iVar1)) {
        local_50 = iVar1;
        FUN_146ffdf4e();
      }
    }
    if ((longlong)(int)uStack_180 != 0) {
      lVar3 = (longlong)(int)uStack_180 * 0xe8;
      lVar8 = local_188;
      do {
        local_148.QuadPart = (LONGLONG)&local_168;
        local_140 = lVar8;
        FUN_147001620(&local_98,&local_e8,&local_148);
        lVar8 = lVar8 + 0xe8;
        lVar3 = lVar3 + -0xe8;
      } while (lVar3 != 0);
    }
    local_148.QuadPart = -0x4010000000000000;
    local_140 = 0xbff0000000000000;
    local_138 = 0;
    local_128 = (longlong *)0x0;
    local_f8 = 0;
    FUN_142ad57be(lVar7,&local_98,local_1b0,&local_148);
    if (local_138 != 0) {
      plVar2 = local_128;
      if (local_128 == (longlong *)0x0) {
        plVar2 = local_118;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_145c17632(&local_98);
    uVar6 = uStack_180 & 0xffffffff;
  }
  FUN_146ffe131(local_188,uVar6);
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad437e FUN_142ad437e body=212 status=ok
// SIG undefined FUN_142ad437e(void)

void FUN_142ad437e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined7 uStack_40;
  undefined4 uStack_39;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_39 = 0;
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  local_a8 = 1;
  FUN_14576f24a(param_1 + 8,local_a0,param_2,2);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
  FUN_140fdd62a(param_1 + -0x28,local_a0,0);
  FUN_140cb5138(local_a0);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad4454 FUN_142ad4454 body=991 status=ok
// SIG undefined FUN_142ad4454(void)

longlong FUN_142ad4454(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong local_58;
  
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  lVar2 = FUN_142ae2e08(param_1 + 8,param_2);
  lVar10 = 0;
  lVar3 = (longlong)*(int *)(param_1 + 0x7b8) * 4;
  if ((ulonglong)(longlong)*(int *)(param_1 + 0x7b8) < 2) {
    lVar3 = lVar10;
  }
  lVar16 = (longlong)*(int *)(param_1 + 0x808) * 4;
  if ((ulonglong)(longlong)*(int *)(param_1 + 0x808) < 2) {
    lVar16 = lVar10;
  }
  lVar15 = (longlong)*(int *)(param_1 + 0xe18) * 4;
  if ((ulonglong)(longlong)*(int *)(param_1 + 0xe18) < 2) {
    lVar15 = lVar10;
  }
  lVar15 = (longlong)*(int *)(param_1 + 0x77c) * 0x10 +
           (ulonglong)(*(int *)(param_1 + 0x79c) + 0x1fU >> 5) * 4 + lVar3 +
           (longlong)*(int *)(param_1 + 0x7cc) * 0x28 +
           (ulonglong)(*(int *)(param_1 + 0x7ec) + 0x1fU >> 5) * 4 + lVar16 +
           (longlong)*(int *)(param_1 + 0xddc) * 0x18 +
           (ulonglong)(*(int *)(param_1 + 0xdfc) + 0x1fU >> 5) * 4 + lVar15;
  lVar3 = FUN_146ff73a8(param_1 + 0x980);
  local_58 = FUN_146ff74c8(param_1 + 0x8d8);
  if ((*(char *)(param_1 + 0x810) == '\x01') && (*(char *)(param_1 + 0x811) == '\0')) {
    lVar10 = (longlong)*(int *)(param_1 + 0x860) * 4;
    if ((ulonglong)(longlong)*(int *)(param_1 + 0x860) < 2) {
      lVar10 = 0;
    }
    lVar16 = (longlong)*(int *)(param_1 + 0x8b0) * 4;
    if ((ulonglong)(longlong)*(int *)(param_1 + 0x8b0) < 2) {
      lVar16 = 0;
    }
    lVar15 = lVar15 + (ulonglong)(*(int *)(param_1 + 0x844) + 0x1fU >> 5) * 4 + lVar10 +
             ((longlong)*(int *)(param_1 + 0x874) + (longlong)*(int *)(param_1 + 0x824)) * 0x28 +
             (ulonglong)(*(int *)(param_1 + 0x894) + 0x1fU >> 5) * 4 + lVar16;
  }
  local_58 = local_58 + lVar3;
  if (*(longlong *)(param_1 + 0x978) != 0) {
    lVar3 = FUN_146feb000();
    local_58 = local_58 + lVar3 + 0x230;
  }
  iVar1 = *(int *)(param_1 + 0x5a8);
  uVar5 = 0;
  uVar13 = (longlong)*(int *)(param_1 + 0x5c8) * 4;
  if ((ulonglong)(longlong)*(int *)(param_1 + 0x5c8) < 2) {
    uVar13 = uVar5;
  }
  lVar3 = (longlong)*(int *)(param_1 + 0x58c) * 0x68 + lVar15 +
          (ulonglong)(*(int *)(param_1 + 0x5ac) + 0x1fU >> 5) * 4 + uVar13;
  if (iVar1 == 0) {
    uVar13 = 1;
    iVar9 = 0;
    iVar6 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x5a0);
    if (*(uint **)(param_1 + 0x5a0) == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 0x590);
    }
    uVar11 = *puVar4;
    if (uVar11 == 0) {
      iVar6 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar6 = iVar1 + -1;
      }
      uVar5 = 0;
      uVar13 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar13 = uVar5;
      }
      iVar9 = 0;
      do {
        if (uVar13 == uVar5) goto LAB_142ad47de;
        iVar9 = iVar9 + 0x20;
        uVar11 = puVar4[uVar5 + 1];
        uVar5 = uVar5 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar5 = 0;
      iVar9 = 0;
    }
    uVar13 = (ulonglong)(-uVar11 & uVar11);
    uVar8 = uVar13 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar6 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar6) {
      iVar6 = iVar1;
    }
  }
  if (iVar6 != iVar1) {
    lVar10 = *(longlong *)(param_1 + 0x580);
    puVar4 = (uint *)(param_1 + 0x590);
    if (*(uint **)(param_1 + 0x5a0) != (uint *)0x0) {
      puVar4 = *(uint **)(param_1 + 0x5a0);
    }
    iVar14 = iVar1 + 0x1e;
    if (-1 < iVar1 + -1) {
      iVar14 = iVar1 + -1;
    }
    iVar14 = iVar14 >> 5;
    uVar11 = 0xffffffff;
    do {
      lVar15 = (longlong)iVar6 * 0x68;
      uVar8 = (ulonglong)*(int *)(lVar10 + 0x58 + lVar15);
      lVar16 = uVar8 * 4;
      if (uVar8 < 2) {
        lVar16 = 0;
      }
      lVar3 = (ulonglong)(*(int *)(lVar10 + 0x3c + lVar15) + 0x1fU >> 5) * 4 +
              (longlong)*(int *)(lVar10 + 0x1c + lVar15) * 0x10 + lVar3 + lVar16;
      uVar11 = ~(uint)uVar13 & uVar11;
      iVar6 = (int)uVar5;
      lVar16 = (longlong)iVar6;
      uVar7 = puVar4[lVar16] & uVar11;
      if (uVar7 == 0) {
        iVar12 = iVar14;
        if (iVar14 < iVar6) {
          iVar12 = iVar6;
        }
        if (iVar14 <= iVar6) break;
        lVar15 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar7 = puVar4[lVar16 + lVar15 + 1];
          if (uVar7 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar12 - lVar16 == lVar15) goto LAB_142ad47de;
        }
        uVar5 = (ulonglong)(iVar6 + (int)lVar15 + 1);
        uVar11 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar7 & uVar7);
      uVar8 = uVar13 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar1);
  }
LAB_142ad47de:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  return lVar2 + local_58 + lVar3 + 0x1478;
}



// FUNCTION 142ad4834 FUN_142ad4834 body=3976 status=ok
// SIG undefined FUN_142ad4834(void)

void FUN_142ad4834(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  short *psVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong **pplVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  longlong lVar16;
  short *psVar17;
  wchar_t *pwVar18;
  undefined8 *puVar19;
  wchar_t *_Src;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  ushort uVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong lVar29;
  ushort uVar30;
  uint uVar31;
  ulonglong uVar32;
  longlong **pplVar33;
  uint *puVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  undefined1 auStack_898 [40];
  undefined8 *local_870;
  wchar_t *local_868;
  longlong *local_860;
  uint *local_858;
  int local_84c;
  longlong local_848;
  uint local_83c;
  ulonglong local_838;
  longlong local_830;
  wchar_t *local_828;
  longlong *local_820;
  longlong local_818;
  longlong **local_810;
  longlong *local_808;
  longlong ***local_800;
  undefined8 local_7f8;
  undefined1 *local_7f0;
  longlong local_7e8 [4];
  undefined4 local_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  longlong **local_7b8;
  undefined4 local_7b0;
  wchar_t *local_7a8;
  uint local_7a0;
  longlong local_798;
  int local_790;
  longlong *local_788;
  undefined4 local_780;
  undefined4 local_778;
  undefined4 uStack_774;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_748;
  undefined4 local_740;
  undefined8 local_73c;
  undefined4 local_734;
  longlong local_728;
  undefined4 local_720;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined8 local_6f8;
  undefined4 local_6f0;
  undefined8 local_6ec;
  undefined4 local_6e4;
  longlong local_6d8;
  undefined4 local_6d0;
  wchar_t *local_6c8;
  wchar_t *local_6c0;
  longlong **local_6b8;
  char local_6b0;
  wchar_t local_6a8;
  wchar_t local_6a6 [255];
  longlong *local_4a8;
  longlong *local_4a0;
  longlong ***local_498;
  char local_490;
  longlong local_488 [64];
  longlong **local_288;
  longlong **pplStack_280;
  undefined1 *local_278;
  char local_270;
  longlong *local_268 [64];
  undefined1 auStack_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_898;
  local_7f8 = param_4;
  FUN_1416a9fc6();
  uVar21 = 0;
  local_6f8 = 0;
  local_6f0 = 0;
  local_718 = 0;
  uStack_710 = 0;
  local_6ec = 0xffffffff00000080;
  local_6e4 = 0;
  local_6d8 = 0;
  local_6d0 = 0;
  local_7e8[2] = 0;
  local_7e8[3] = 0;
  local_7e8[0] = 0;
  local_7e8[1] = 0;
  if ((*(int *)((longlong)param_3 + 0x34) < (int)param_3[1]) &&
     (*(char *)((longlong)param_1 + 0xdbd) == '\x01')) {
    local_288 = (longlong **)0x0;
    pplStack_280 = (longlong **)0x0;
    FUN_1412fac7e(&local_288,1,0,1);
    FUN_140e82fa0(&local_718,&local_288);
    FUN_1447a1747(local_288,(ulonglong)pplStack_280 & 0xffffffff);
    if (local_288 != (longlong **)0x0) {
      FUN_1400020a8();
    }
  }
  local_748 = 0;
  local_740 = 0;
  local_768 = 0;
  uStack_760 = 0;
  local_73c = 0xffffffff00000080;
  local_734 = 0;
  local_728 = 0;
  local_720 = 0;
  puVar34 = (uint *)(param_3 + 2);
  iVar6 = (int)param_3[5];
  if (iVar6 == 0) {
    uVar36 = 1;
    iVar20 = 0;
    iVar10 = 0;
  }
  else {
    puVar15 = (uint *)param_3[4];
    if ((uint *)param_3[4] == (uint *)0x0) {
      puVar15 = puVar34;
    }
    uVar26 = *puVar15;
    if (uVar26 == 0) {
      iVar20 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar20 = iVar6 + -1;
      }
      uVar21 = 0;
      uVar36 = (ulonglong)(uint)(iVar20 >> 5);
      if (iVar20 >> 5 < 1) {
        uVar36 = uVar21;
      }
      iVar20 = 0;
      do {
        if (uVar36 == uVar21) goto LAB_142ad5723;
        iVar20 = iVar20 + 0x20;
        uVar26 = puVar15[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar26 == 0);
    }
    else {
      uVar21 = 0;
      iVar20 = 0;
    }
    uVar36 = (ulonglong)(-uVar26 & uVar26);
    uVar35 = uVar36 * 2 + 1;
    lVar29 = 0x3f;
    if (uVar35 != 0) {
      for (; uVar35 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    iVar10 = (iVar20 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar10) {
      iVar10 = iVar6;
    }
  }
  if (iVar10 < iVar6) {
    local_808 = param_1 + 0x11a;
    local_7f0 = auStack_68;
    local_800 = &local_288;
    local_810 = &local_4a8;
    local_83c = 0xffffffff;
    local_818 = 0;
    local_860 = param_1;
    local_858 = puVar34;
    local_820 = param_2;
LAB_142ad4a6b:
    puVar19 = *(undefined8 **)(*param_3 + 8 + (longlong)iVar10 * 0x18);
    *(undefined8 *)(*param_3 + 8 + (longlong)iVar10 * 0x18) = 0;
    local_84c = iVar20;
    FUN_146ffdbd8(param_3);
    local_270 = '\0';
    local_288 = local_268;
    local_278 = local_7f0;
    local_870 = puVar19;
    pplStack_280 = local_288;
    FUN_14005eb5c(puVar19,&local_288);
    pplVar9 = local_288;
    iVar6 = (int)((ulonglong)((longlong)pplStack_280 - (longlong)local_288) >> 1);
    if (iVar6 < 0x12) goto LAB_142ad51fc;
    pplVar33 = (longlong **)((longlong)local_288 + ((ulonglong)(uint)(iVar6 * 2) - 0x24));
    if (local_288 <= pplVar33) {
      uVar35 = 0;
      do {
        iVar6 = wcsncmp((wchar_t *)((longlong)pplVar9 + uVar35),L"__ExternalActors__",0x12);
        puVar34 = local_858;
        if (iVar6 == 0) {
          if ((~uVar35 & 0x1fffffffe) == 0) {
            bVar4 = false;
            param_1 = local_860;
            goto LAB_142ad4b63;
          }
          local_490 = '\0';
          local_4a8 = local_488;
          local_498 = local_800;
          local_4a0 = local_4a8;
          FUN_146857ee0(local_870,&local_4a8);
          local_788 = local_4a8;
          local_780 = (undefined4)((ulonglong)((longlong)local_4a0 - (longlong)local_4a8) >> 1);
          FUN_146872670(&local_778,&local_788);
          local_798 = 0;
          local_790 = 0;
          local_7a8 = (wchar_t *)0x0;
          local_7a0 = 0;
          local_7b8 = local_288;
          local_7b0 = (undefined4)((ulonglong)((longlong)pplStack_280 - (longlong)local_288) >> 1);
          FUN_146872574(&local_6c8,&local_7b8,&local_798);
          local_7c8 = local_778;
          uStack_7c4 = uStack_774;
          uStack_7c0 = uStack_770;
          uStack_7bc = uStack_76c;
          FUN_146872574(&local_6c8,&local_7c8);
          param_1 = local_860;
          if ((longlong)local_790 < 0x12) goto LAB_142ad4ed3;
          local_868 = (wchar_t *)((ulonglong)local_6c0 & 0xffffffff);
          lVar22 = (longlong)(int)(uint)local_6c0;
          lVar29 = 0x12;
          lVar23 = 0;
          goto LAB_142ad4e72;
        }
        lVar29 = uVar35 + 2;
        uVar35 = uVar35 + 2;
      } while ((longlong **)(lVar29 + (longlong)pplVar9) <= pplVar33);
    }
    bVar4 = false;
    puVar34 = local_858;
    param_1 = local_860;
    goto LAB_142ad4b63;
  }
LAB_142ad5723:
  FUN_1403950f6(&local_768);
  if (local_7e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_7e8[2] != 0) {
    FUN_1400020a8();
  }
  local_6d0 = 0;
  if (local_6d8 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_718);
  if ((local_60 ^ (ulonglong)auStack_898) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_142ad4e72:
  uVar25 = *(ushort *)((longlong)L"__ExternalActors__" + lVar23);
  uVar35 = (ulonglong)uVar25;
  uVar30 = *(ushort *)(local_798 + lVar23);
  if (uVar25 != uVar30) {
    if ((uVar30 | uVar25) < 0x80) {
      uVar25 = (ushort)(byte)(&DAT_149e05da0)[uVar35];
      uVar24 = (ulonglong)uVar30;
      uVar30 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
      if ((&DAT_149e05da0)[uVar35] == (&DAT_149e05da0)[uVar24]) goto LAB_142ad4e87;
    }
    if ((local_790 == 0x12) || (uVar25 != uVar30)) goto LAB_142ad4ed3;
    goto LAB_142ad5041;
  }
  if (uVar25 == 0) goto LAB_142ad4eca;
LAB_142ad4e87:
  lVar29 = lVar29 + -1;
  if (lVar29 == 0) goto LAB_142ad4eca;
  lVar23 = lVar23 + 2;
  goto LAB_142ad4e72;
LAB_142ad4eca:
  if (local_790 != 0x12) {
LAB_142ad5041:
    lVar29 = local_798 + (longlong)local_790 * 2;
    if (*(short *)(lVar29 + (ulonglong)(local_790 - 0x12) * -2) == 0x2f) {
      uVar26 = local_790 - 0x13;
      uVar35 = 0;
      if (0 < (int)uVar26) {
        uVar35 = (ulonglong)uVar26;
      }
      lVar23 = lVar29 - (ulonglong)(uint)((int)uVar35 * 2);
      local_828 = local_6c8;
      uVar24 = uVar35;
      local_830 = lVar22;
      if (local_790 < 0x20) {
        if (local_790 < 0x16) goto LAB_142ad52a8;
LAB_142ad5122:
        lVar8 = 3;
        lVar16 = 0;
        while( true ) {
          uVar25 = *(ushort *)((longlong)&DAT_149fc8334 + lVar16);
          uVar28 = (ulonglong)uVar25;
          uVar30 = *(ushort *)(lVar23 + lVar16);
          if (uVar25 != uVar30) break;
          bVar4 = true;
          iVar6 = -3;
          if ((uVar25 == 0) || (lVar8 == 1)) goto LAB_142ad519b;
LAB_142ad515c:
          lVar8 = lVar8 + -1;
          lVar16 = lVar16 + 2;
        }
        if ((uVar30 | uVar25) < 0x80) {
          uVar25 = (ushort)(byte)(&DAT_149e05da0)[uVar28];
          uVar32 = (ulonglong)uVar30;
          uVar30 = (ushort)(byte)(&DAT_149e05da0)[uVar32];
          if ((&DAT_149e05da0)[uVar28] != (&DAT_149e05da0)[uVar32]) goto LAB_142ad55b7;
          if (lVar8 != 1) goto LAB_142ad515c;
        }
        else {
LAB_142ad55b7:
          puVar34 = local_858;
          local_848 = lVar29;
          local_838 = uVar35;
          if (uVar25 != uVar30) goto LAB_142ad52a8;
        }
        bVar4 = true;
        iVar6 = -3;
      }
      else {
        lVar8 = 0xd;
        lVar16 = 0;
        while( true ) {
          uVar25 = *(ushort *)((longlong)L"ContentBundle" + lVar16);
          uVar28 = (ulonglong)uVar25;
          uVar30 = *(ushort *)(lVar23 + lVar16);
          if (uVar25 != uVar30) break;
          bVar4 = false;
          iVar6 = -0xd;
          if ((uVar25 == 0) || (lVar8 == 1)) goto LAB_142ad519b;
LAB_142ad50d0:
          lVar8 = lVar8 + -1;
          lVar16 = lVar16 + 2;
        }
        if ((uVar30 | uVar25) < 0x80) {
          uVar25 = (ushort)(byte)(&DAT_149e05da0)[uVar28];
          uVar32 = (ulonglong)uVar30;
          uVar30 = (ushort)(byte)(&DAT_149e05da0)[uVar32];
          if ((&DAT_149e05da0)[uVar28] == (&DAT_149e05da0)[uVar32]) {
            if (lVar8 != 1) goto LAB_142ad50d0;
            bVar4 = false;
            iVar6 = -0xd;
            goto LAB_142ad519b;
          }
        }
        puVar34 = local_858;
        if (uVar25 != uVar30) goto LAB_142ad5122;
        iVar6 = -0xd;
        bVar4 = false;
      }
LAB_142ad519b:
      uVar26 = uVar26 + iVar6;
      local_848 = lVar29;
      local_838 = uVar35;
      if ((uVar26 != 0) &&
         ((*(short *)(lVar29 + (ulonglong)uVar26 * -2) == 0x2f && (1 < (int)uVar26)))) {
        uVar26 = uVar26 - 1;
        psVar17 = (short *)(lVar29 + (ulonglong)uVar26 * -2);
        psVar2 = psVar17 + (int)uVar26;
        uVar11 = (local_790 + iVar6) - 0x15;
        iVar20 = 0;
        do {
          if (*psVar17 == 0x2f) {
            if (iVar20 != -1) {
              uVar27 = ((iVar6 + local_790) - iVar20) - 0x15;
              if ((int)uVar26 <= (int)uVar27) {
                uVar27 = uVar26;
              }
              if ((int)uVar27 < 1) {
                uVar27 = 0;
              }
              if (!bVar4) {
                lVar23 = lVar29 - (ulonglong)(uVar27 * 2);
                uVar24 = (ulonglong)uVar27;
                goto LAB_142ad52a8;
              }
              uVar31 = uVar27;
              if ((int)(uint)local_6c0 < (int)uVar27) {
                uVar31 = (uint)local_6c0;
              }
              uVar14 = 0;
              if (0 < (int)uVar31) {
                uVar14 = uVar31;
              }
              if ((uint)local_6c0 == uVar14) {
                if ((int)uVar31 < 1) goto LAB_142ad525e;
                if ((int)uVar11 < (int)uVar26) {
                  uVar26 = uVar11;
                }
                if ((int)uVar26 < 1) {
                  uVar26 = 0;
                }
                lVar23 = 0;
                pwVar18 = local_868;
                goto LAB_142ad550a;
              }
            }
            break;
          }
          psVar17 = psVar17 + 1;
          iVar20 = iVar20 + 1;
          uVar11 = uVar11 - 1;
        } while (psVar17 < psVar2);
      }
      goto LAB_142ad51ee;
    }
  }
LAB_142ad4ed3:
  if (local_490 == '\x01') {
    FUN_1400020a8();
  }
  bVar4 = true;
  goto LAB_142ad4b63;
LAB_142ad550a:
  uVar25 = *(ushort *)((longlong)local_6c8 + lVar23);
  uVar24 = (ulonglong)uVar25;
  uVar30 = *(ushort *)((lVar29 - (ulonglong)(uVar26 * 2)) + lVar23);
  if (uVar25 == uVar30) {
    if ((uVar25 == 0) || (pwVar18 == (wchar_t *)&DAT_00000001)) goto LAB_142ad525e;
LAB_142ad5531:
    pwVar18 = (wchar_t *)((longlong)pwVar18 + -1);
    lVar23 = lVar23 + 2;
    goto LAB_142ad550a;
  }
  if ((uVar30 | uVar25) < 0x80) {
    uVar25 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
    uVar28 = (ulonglong)uVar30;
    uVar30 = (ushort)(byte)(&DAT_149e05da0)[uVar28];
    if ((&DAT_149e05da0)[uVar24] == (&DAT_149e05da0)[uVar28]) {
      puVar34 = local_858;
      if (pwVar18 != (wchar_t *)&DAT_00000001) goto LAB_142ad5531;
      goto LAB_142ad525e;
    }
  }
  puVar34 = local_858;
  if (uVar25 != uVar30) goto LAB_142ad51ee;
LAB_142ad525e:
  uVar26 = uVar27 - (uint)local_6c0;
  if ((int)uVar27 <= (int)(uVar27 - (uint)local_6c0)) {
    uVar26 = uVar27;
  }
  if ((0 < (int)uVar26) && (*(short *)(lVar29 + (ulonglong)uVar26 * -2) == 0x2f)) {
    lVar23 = lVar29 + (ulonglong)(uVar26 - 1) * -2;
    uVar24 = (ulonglong)(uVar26 - 1);
LAB_142ad52a8:
    uVar35 = (ulonglong)local_7a0;
    uVar26 = (uint)uVar24;
    if ((int)local_7a0 < (int)(uint)uVar24) {
      uVar26 = local_7a0;
    }
    uVar11 = 0;
    if (0 < (int)uVar26) {
      uVar11 = uVar26;
    }
    if (local_7a0 != uVar11) {
LAB_142ad5345:
      local_6b0 = '\0';
      local_6c8 = &local_6a8;
      local_6b8 = local_810;
      local_6a8 = L'/';
      local_6c0 = local_6a6;
      if ((int)(uint)local_6c0 < 0xff) {
        if (local_868 != (wchar_t *)0x0) goto LAB_142ad53a0;
      }
      else {
        FUN_140213274(&local_6c8,lVar22);
LAB_142ad53a0:
        lVar29 = local_830;
        local_868 = local_6c0;
        memcpy(local_6c0,local_828,local_830 * 2);
        local_6c0 = local_868 + lVar29;
      }
      if (local_6b8 <= local_6c0 + 1) {
        FUN_140213274(&local_6c8,1);
      }
      *local_6c0 = L'/';
      pwVar18 = local_6c0 + 1;
      if (local_6b8 <= local_6c0 + 0x13) {
        local_6c0 = local_6c0 + 1;
        FUN_140213274(&local_6c8,0x12);
        pwVar18 = local_6c0;
      }
      builtin_wcsncpy(pwVar18,L"__ExternalActors__",0x12);
      local_6c0 = pwVar18 + 0x12;
      if (local_6b8 <= pwVar18 + 0x13) {
        FUN_140213274(&local_6c8,1);
      }
      uVar26 = local_7a0;
      *local_6c0 = L'/';
      pwVar18 = local_6c0 + 1;
      lVar29 = (longlong)(int)local_7a0;
      pplVar9 = (longlong **)(local_6c0 + lVar29 + 1);
      _Src = local_7a8;
      local_6c0 = pwVar18;
      if (local_6b8 <= pplVar9) {
        local_868 = local_7a8;
        FUN_140213274(&local_6c8,lVar29);
        _Src = local_868;
      }
      if (uVar26 != 0) {
        local_868 = local_6c0;
        memcpy(local_6c0,_Src,lVar29 * 2);
        local_6c0 = local_868 + lVar29;
      }
      if (local_6b0 == '\x01') {
        FUN_1400020a8();
      }
      if (local_490 == '\x01') {
        FUN_1400020a8();
      }
      bVar4 = true;
      goto LAB_142ad4b63;
    }
    if ((uVar35 != 0) && (0 < (int)uVar26)) {
      lVar29 = 0;
      while( true ) {
        uVar25 = *(ushort *)((longlong)local_7a8 + lVar29);
        uVar24 = (ulonglong)uVar25;
        uVar30 = *(ushort *)(lVar23 + lVar29);
        if (uVar25 != uVar30) break;
        if (uVar25 == 0) goto LAB_142ad51ee;
LAB_142ad52fb:
        uVar35 = uVar35 - 1;
        if (uVar35 == 0) goto LAB_142ad51ee;
        lVar29 = lVar29 + 2;
      }
      if ((uVar30 | uVar25) < 0x80) {
        uVar25 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
        uVar28 = (ulonglong)uVar30;
        uVar30 = (ushort)(byte)(&DAT_149e05da0)[uVar28];
        if ((&DAT_149e05da0)[uVar24] == (&DAT_149e05da0)[uVar28]) goto LAB_142ad52fb;
      }
      puVar34 = local_858;
      if (uVar25 != uVar30) goto LAB_142ad5345;
    }
  }
LAB_142ad51ee:
  if (local_490 == '\x01') {
    FUN_1400020a8();
  }
LAB_142ad51fc:
  bVar4 = false;
LAB_142ad4b63:
  if (local_270 == '\x01') {
    FUN_1400020a8();
  }
  if (!bVar4) {
    local_868 = (wchar_t *)local_870[1];
    local_6c8 = local_868;
    if (*(char *)((longlong)param_1 + 0xdbd) == '\x01') {
      FUN_1400348e2(&local_6c8,local_7e8 + 2);
      cVar5 = FUN_146ff80d5(local_7e8 + 2,&local_718,local_7e8);
      if (cVar5 == '\0') goto LAB_142ad4b7e;
    }
    *(undefined1 *)((longlong)param_1 + 0xdc1) = 1;
    if (local_870 == (undefined8 *)0x0) {
      pplStack_280 = (longlong **)0x0;
      local_288 = (longlong **)0x0;
    }
    else {
      local_288 = (longlong **)*local_870;
      pplStack_280 = (longlong **)local_870[2];
    }
    uVar26 = (uint)((ulonglong)pplStack_280 >> 0x10);
    uVar27 = (uint)pplStack_280 & 0xffff;
    uVar11 = (uint)((ulonglong)local_288 >> 0x10);
    uVar31 = (uint)local_288 & 0xffff;
    uVar11 = ((uint)local_288 << 0x10 | uVar31) + (int)((ulonglong)local_288 >> 0x20) +
             (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar31 >> 4);
    iVar6 = FUN_1447fff98(param_1,(uVar11 >> 2) +
                                  (uint)pplStack_280 * 0x10000 +
                                  (int)((ulonglong)pplStack_280 >> 0x20) + uVar27 +
                                  (uVar26 << 0x13 | uVar26 & 0xffff) + (uVar27 >> 4) + uVar11 * 0x40
                                  + 0x9e3779b9 ^ uVar11,&local_288);
    plVar3 = local_820;
    if (((iVar6 == -1) ||
        (plVar7 = (longlong *)((longlong)iVar6 * 0x10 + *param_1), plVar7 == (longlong *)0x0)) ||
       (lVar29 = *plVar7, lVar29 == 0)) {
      FUN_146ff868e(param_1,local_820,local_870);
      local_870 = (undefined8 *)0x0;
    }
    else {
      FUN_146ff81b8(param_1,local_820,lVar29,local_870);
    }
    local_4a0 = plVar3;
    pplStack_280 = &local_4a8;
    local_288 = (longlong **)FUN_142adf94e;
    local_4a8 = param_1;
    FUN_140a8f30a(local_808,local_868,&local_288);
    puVar34 = local_858;
  }
LAB_142ad4b7e:
  puVar19 = local_870;
  if (local_870 != (undefined8 *)0x0) {
    if (local_870[0xc] != 0) {
      FUN_1400020a8();
    }
    plVar3 = (longlong *)puVar19[10];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar3 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        local_870 = puVar19;
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        puVar19 = local_870;
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          puVar19 = local_870;
        }
      }
    }
    FUN_1400b4210(puVar19 + 8);
    FUN_1400020a8(puVar19);
  }
  iVar20 = local_84c;
  local_818 = local_818 + 1;
  if (((ulonglong)(local_818 * -0x3333333333333333) >> 1 |
      (ulonglong)((local_818 * -0x3333333333333333 & 1U) != 0) << 0x3f) < 0x199999999999999a) {
    cVar5 = FUN_146ff6cb2(local_7f8);
  }
  else {
    cVar5 = '\0';
  }
  uVar26 = local_83c & ~(uint)uVar36;
  puVar15 = (uint *)param_3[4];
  if ((uint *)param_3[4] == (uint *)0x0) {
    puVar15 = puVar34;
  }
  iVar6 = (int)param_3[5];
  iVar10 = (int)uVar21;
  lVar29 = (longlong)iVar10;
  uVar11 = puVar15[lVar29] & uVar26;
  if (uVar11 == 0) {
    iVar12 = iVar6 + 0x1e;
    if (-1 < iVar6 + -1) {
      iVar12 = iVar6 + -1;
    }
    iVar12 = iVar12 >> 5;
    iVar13 = iVar12;
    if (iVar12 < iVar10) {
      iVar13 = iVar10;
    }
    if (iVar12 <= iVar10) goto LAB_142ad5706;
    lVar22 = 0;
    while( true ) {
      iVar20 = iVar20 + 0x20;
      uVar11 = puVar15[lVar29 + lVar22 + 1];
      if (uVar11 != 0) break;
      lVar22 = lVar22 + 1;
      if (iVar13 - lVar29 == lVar22) goto LAB_142ad5706;
    }
    uVar21 = (ulonglong)(iVar10 + (int)lVar22 + 1);
    local_83c = 0xffffffff;
    uVar26 = local_83c;
  }
  local_83c = uVar26;
  uVar36 = (ulonglong)(-uVar11 & uVar11);
  uVar35 = uVar36 * 2 + 1;
  lVar29 = 0x3f;
  if (uVar35 != 0) {
    for (; uVar35 >> lVar29 == 0; lVar29 = lVar29 + -1) {
    }
  }
  iVar12 = (iVar20 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
  iVar10 = iVar12;
  if (iVar6 <= iVar12) {
    iVar10 = iVar6;
  }
  if (cVar5 != '\0' || iVar6 <= iVar12) goto LAB_142ad5706;
  goto LAB_142ad4a6b;
LAB_142ad5706:
  local_720 = 0;
  if (local_728 != 0) {
    FUN_1400020a8();
  }
  goto LAB_142ad5723;
}



// FUNCTION 142ad57be FUN_142ad57be body=4107 status=ok
// SIG undefined FUN_142ad57be(void)

void FUN_142ad57be(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  PSRWLOCK pRVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  char cVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  undefined8 uVar13;
  uint *puVar14;
  void *pvVar15;
  longlong lVar16;
  int iVar17;
  uint *puVar18;
  longlong lVar19;
  undefined ***pppuVar20;
  ulonglong uVar21;
  int iVar22;
  longlong lVar23;
  undefined8 *puVar24;
  longlong *plVar25;
  byte bVar26;
  int iVar27;
  void **ppvVar28;
  undefined7 uVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  int iVar33;
  uint uVar34;
  ulonglong uVar35;
  longlong *plVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  undefined1 auStack_b48 [32];
  ulonglong local_b28;
  PSRWLOCK *ppRStack_b20;
  undefined1 local_b18;
  int local_b04;
  void *local_b00;
  uint local_af8;
  int local_af4;
  ulonglong local_af0;
  longlong local_ae8;
  ulonglong local_ae0;
  uint *local_ad8;
  undefined8 local_ad0;
  undefined8 local_ac8;
  longlong *local_ac0;
  ulonglong local_ab8;
  longlong *local_ab0;
  longlong local_aa8;
  longlong local_aa0;
  longlong local_a98;
  longlong local_a90;
  undefined ***local_a88;
  undefined4 local_a80;
  PSRWLOCK local_a78;
  undefined8 uStack_a70;
  longlong local_a68;
  undefined8 local_a60;
  longlong local_a50;
  PSRWLOCK local_a48;
  char local_a40;
  undefined ***local_a38;
  undefined ***pppuStack_a30;
  undefined ***pppuStack_a28;
  undefined ***local_a20;
  undefined **local_a18;
  void *local_a10;
  undefined **local_202;
  ulonglong local_1f8 [2];
  longlong local_1e8 [2];
  uint *local_1d8;
  uint local_1d0;
  undefined8 local_1cc;
  undefined4 local_1c4;
  longlong local_1b8;
  undefined4 local_1b0;
  undefined ***local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 local_178;
  undefined1 local_170 [80];
  void *local_120;
  int local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined5 uStack_f8;
  undefined3 uStack_f3;
  undefined5 uStack_f0;
  undefined8 uStack_eb;
  longlong *local_e0;
  int local_d8;
  undefined8 *local_d0;
  int local_c8;
  char local_c0;
  char local_bf;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  piVar1 = DAT_14c950c20;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b48;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar27 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar27 != 2)) {
    if (iVar27 == 1) {
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_142ad5885;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(piVar1 + 4);
    while( true ) {
      if (0 < piVar1[1]) {
        (**(code **)(**(longlong **)(piVar1 + 0xe) + 0x20))
                  (*(longlong **)(piVar1 + 0xe),0xffffffff,0);
      }
      EnterCriticalSection(lpCriticalSection);
      if (piVar1[1] == 0) break;
      LeaveCriticalSection(lpCriticalSection);
    }
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    LeaveCriticalSection(lpCriticalSection);
  }
LAB_142ad5885:
  uVar32 = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  puVar14 = (uint *)(param_2 + 2);
  iVar27 = (int)param_2[5];
  if (iVar27 == 0) {
    plVar25 = (longlong *)&DAT_00000001;
    iVar33 = 0;
    iVar22 = 0;
  }
  else {
    puVar18 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar18 = puVar14;
    }
    uVar8 = *puVar18;
    if (uVar8 == 0) {
      iVar22 = iVar27 + 0x1e;
      if (-1 < iVar27 + -1) {
        iVar22 = iVar27 + -1;
      }
      uVar32 = 0;
      uVar35 = (ulonglong)(uint)(iVar22 >> 5);
      if (iVar22 >> 5 < 1) {
        uVar35 = uVar32;
      }
      iVar33 = 0;
      do {
        if (uVar35 == uVar32) goto LAB_142ad6719;
        iVar33 = iVar33 + 0x20;
        uVar8 = puVar18[uVar32 + 1];
        uVar32 = uVar32 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar32 = 0;
      iVar33 = 0;
    }
    plVar25 = (longlong *)(ulonglong)(-uVar8 & uVar8);
    uVar35 = (longlong)plVar25 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar35 != 0) {
      for (; uVar35 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar22 = (iVar33 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar27 <= iVar22) {
      iVar22 = iVar27;
    }
  }
  if (iVar22 < iVar27) {
    local_a98 = param_1 + 0xc50;
    local_aa0 = param_1 + 0xca0;
    lVar16 = 0;
    local_b04 = iVar33;
    local_af0 = uVar32;
    local_ad8 = puVar14;
    local_ad0 = param_4;
    local_ac8 = param_3;
    local_ac0 = param_2;
    uVar8 = 0xffffffff;
LAB_142ad59bd:
    local_af8 = uVar8;
    lVar23 = *param_2;
    lVar19 = (longlong)iVar22 * 0xf8;
    lVar31 = *(longlong *)(lVar23 + lVar19);
    uVar34 = (uint)lVar31;
    iVar27 = (int)((ulonglong)lVar31 >> 0x20);
    uVar8 = (uint)((ulonglong)lVar31 >> 0x10);
    if (*(int *)(param_1 + 0xc20) != *(int *)(param_1 + 0xc4c)) {
      lVar30 = *(longlong *)(param_1 + 0xc58);
      if (*(longlong *)(param_1 + 0xc58) == 0) {
        lVar30 = local_a98;
      }
      iVar33 = *(int *)(lVar30 + (ulonglong)
                                 (*(int *)(param_1 + 0xc60) - 1U &
                                 iVar27 + (uVar34 << 0x10 | uVar34 & 0xffff) +
                                 (uVar8 << 0x13 | uVar8 & 0xffff) + ((uVar34 & 0xffff) >> 4)) * 4);
      if (iVar33 != -1) {
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0xc18) + (longlong)iVar33 * 0x18) == lVar31)
          goto LAB_142ad5bb1;
          iVar33 = *(int *)(*(longlong *)(param_1 + 0xc18) + (longlong)iVar33 * 0x18 + 0x10);
        } while (iVar33 != -1);
      }
    }
    if (*(int *)(param_1 + 0xc70) != *(int *)(param_1 + 0xc9c)) {
      lVar30 = *(longlong *)(param_1 + 0xca8);
      if (*(longlong *)(param_1 + 0xca8) == 0) {
        lVar30 = local_aa0;
      }
      iVar27 = *(int *)(lVar30 + (ulonglong)
                                 (*(int *)(param_1 + 0xcb0) - 1U &
                                 iVar27 + (uVar34 << 0x10 | uVar34 & 0xffff) +
                                 (uVar8 << 0x13 | uVar8 & 0xffff) + ((uVar34 & 0xffff) >> 4)) * 4);
      if (iVar27 != -1) {
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0xc68) + (longlong)iVar27 * 0x18) == lVar31)
          goto LAB_142ad5bb1;
          iVar27 = *(int *)(*(longlong *)(param_1 + 0xc68) + (longlong)iVar27 * 0x18 + 0x10);
        } while (iVar27 != -1);
      }
    }
    FUN_146ff8996(&local_1a0,lVar23 + lVar19 + 8);
    FUN_146ffd6b8(param_2,iVar22);
    if (local_c0 == '\x01') {
      puVar11 = (undefined4 *)FUN_14700eea0(param_1,local_1a0);
      *puVar11 = local_198;
      puVar11[1] = uStack_194;
      puVar11[2] = uStack_190;
      puVar11[3] = uStack_18c;
      puVar11[4] = local_188;
      puVar11[5] = uStack_184;
      puVar11[6] = uStack_180;
      puVar11[7] = uStack_17c;
      *(undefined1 *)(puVar11 + 8) = local_178;
      FUN_146ffcaac(puVar11 + 10,local_170);
      iVar27 = local_118;
      ppvVar28 = (void **)(puVar11 + 0x1e);
      if (ppvVar28 != &local_120) {
        lVar23 = (longlong)local_118;
        puVar11[0x20] = local_118;
        if (local_118 == 0 && puVar11[0x21] == 0) {
          puVar11[0x21] = 0;
        }
        else {
          local_b00 = local_120;
          FUN_1401b309e(ppvVar28,local_118);
          if (iVar27 != 0) {
            memcpy(*ppvVar28,local_b00,lVar23 << 3);
          }
        }
      }
      *(ulonglong *)((longlong)puVar11 + 0xa5) = CONCAT53(uStack_f0,uStack_f3);
      *(undefined8 *)((longlong)puVar11 + 0xad) = uStack_eb;
      *(undefined8 *)(puVar11 + 0x26) = local_100;
      *(ulonglong *)(puVar11 + 0x28) = CONCAT35(uStack_f3,uStack_f8);
      puVar11[0x22] = local_110;
      puVar11[0x23] = uStack_10c;
      puVar11[0x24] = uStack_108;
      puVar11[0x25] = uStack_104;
      puVar14 = local_ad8;
    }
    if (local_bf == '\x01') {
      local_a38 = local_1a0;
      local_a20 = (undefined ***)0x0;
      pppuStack_a30 = (undefined ***)0x0;
      pppuStack_a28 = (undefined ***)0x0;
      local_b00 = (void *)FUN_14700ef9c(param_1,&local_a38);
      local_1e8[0] = 0;
      local_1e8[1] = 0x100000000;
      local_1f8[0] = local_1f8[0] & 0xffffffffffff0000;
      pppuStack_a28 = (undefined ***)0x0;
      local_a18 = &PTR_LAB_149fca230;
      local_a38 = (undefined ***)&LAB_142adf8ee;
      local_a10 = local_b00;
      FUN_14700f04e(local_b00,&local_a38,0xf,local_1f8);
      if (local_a38 != (undefined ***)0x0) {
        pppuVar20 = pppuStack_a28;
        if (pppuStack_a28 == (undefined ***)0x0) {
          pppuVar20 = &local_a18;
        }
        (*(code *)(*pppuVar20)[2])();
      }
      if (local_1e8[0] != 0) {
        FUN_1400020a8();
      }
      FUN_14701156a(local_b00,0xf);
      bVar26 = 1;
      FUN_147012f0e(local_b00,0xf);
      if (*(char *)(param_1 + 0xdbc) != '\x01') {
        bVar26 = (DAT_14c75f4d4 ^ 1) & *(char *)(param_1 + 0xdbc) == '\0';
      }
      local_ab0 = plVar25;
      local_aa8 = lVar16;
      FUN_147012fda(local_b00,bVar26);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c99de90) &&
         (FUN_144b3d300(&DAT_14c99de90), uVar5 = DAT_14c9480b0, uVar4 = DAT_14c9480a8,
         uVar3 = DAT_14c9480a0, uVar13 = DAT_14c948098, DAT_14c99de90 == -1)) {
        DAT_14c99de80 = (undefined8 *)0x0;
        DAT_14c99de88 = 4;
        FUN_1401b309e(&DAT_14c99de80,4);
        puVar38 = DAT_14c99de80;
        *DAT_14c99de80 = uVar13;
        puVar38[1] = uVar3;
        puVar38[2] = uVar4;
        puVar38[3] = uVar5;
        atexit((_func_5014 *)&LAB_142ad67ca);
        _Init_thread_footer(&DAT_14c99de90);
      }
      local_1d8 = (uint *)0x0;
      local_1d0 = 0;
      local_1f8[0] = 0;
      local_1f8[1] = 0;
      local_1cc = 0xffffffff00000080;
      local_1c4 = 0;
      local_1b8 = 0;
      local_1b0 = 0;
      if ((longlong)local_d8 != 0) {
        plVar25 = (longlong *)((longlong)local_e0 + (longlong)local_d8 * 0xc);
        plVar36 = local_e0;
        do {
          local_a50 = *plVar36;
          if (((*(byte *)(plVar36 + 1) & 1) != 0) && ((longlong)DAT_14c99de88 != 0)) {
            lVar16 = 0;
            do {
              if (*(longlong *)((longlong)DAT_14c99de80 + lVar16) == local_a50) goto LAB_142ad5fe4;
              lVar16 = lVar16 + 8;
            } while ((longlong)DAT_14c99de88 * 8 != lVar16);
          }
          local_a38 = (undefined ***)0x0;
          uVar8 = (uint)((ulonglong)local_a50 >> 0x10);
          uVar34 = (uint)local_a50 & 0xffff;
          plVar12 = (longlong *)
                    FUN_1470085bc(&local_b8,
                                  ((uint)local_a50 << 0x10 | uVar34) +
                                  (int)((ulonglong)local_a50 >> 0x20) +
                                  (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar34 >> 4),&local_a50,
                                  &local_a38);
          DVar9 = DAT_14c949610;
          lVar16 = *plVar12;
          if (lVar16 == 0) {
            local_a78 = (PSRWLOCK)0x0;
            uStack_a70 = 0;
            local_a68 = local_a50;
            local_a48 = (PSRWLOCK)&DAT_14c949608;
            local_a40 = '\x01';
            if ((DAT_14c949610 == 0) || (DVar10 = GetCurrentThreadId(), DVar9 != DVar10)) {
              AcquireSRWLockShared((PSRWLOCK)&DAT_14c949608);
            }
            else {
              DAT_14c949614 = DAT_14c949614 + 1;
            }
            local_a38 = (undefined ***)0x0;
            pppuStack_a30 = (undefined ***)0x0;
            pppuStack_a28 = (undefined ***)0x0;
            ppRStack_b20 = &local_a48;
            local_b28 = local_b28 & 0xffffffff00000000;
            FUN_140159c68(0x40,&local_a78,&local_a38,0);
            pRVar2 = local_a48;
            if (local_a40 == '\x01') {
              if (*(int *)((longlong)&local_a48[1].Ptr + 4) < 1) {
                ReleaseSRWLockShared(local_a48);
              }
              else {
                GetCurrentThreadId();
                piVar1 = (int *)((longlong)&pRVar2[1].Ptr + 4);
                *piVar1 = *piVar1 + -1;
              }
            }
            *plVar12 = (longlong)pppuStack_a28;
            lVar16 = *plVar12;
          }
          uVar8 = (uint)((ulonglong)lVar16 >> 0x10);
          uVar34 = (uint)lVar16 & 0xffff;
          local_a50 = lVar16;
          uVar13 = FUN_147008794(local_1f8,
                                 ((uint)lVar16 << 0x10 | uVar34) + (int)((ulonglong)lVar16 >> 0x20)
                                 + (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar34 >> 4));
          FUN_146ff8ac0(uVar13,*(byte *)(plVar36 + 1) & 7);
LAB_142ad5fe4:
          plVar36 = (longlong *)((longlong)plVar36 + 0xc);
        } while (plVar36 != plVar25);
        uVar32 = (ulonglong)local_1d0;
        if (local_1d0 != 0) {
          puVar14 = local_1d8;
          if (local_1d8 == (uint *)0x0) {
            puVar14 = (uint *)local_1e8;
          }
          uVar8 = *puVar14;
          if (uVar8 == 0) {
            iVar27 = local_1d0 + 0x1e;
            if (-1 < (int)(local_1d0 - 1)) {
              iVar27 = local_1d0 - 1;
            }
            uVar35 = 0;
            uVar21 = (ulonglong)(uint)(iVar27 >> 5);
            if (iVar27 >> 5 < 1) {
              uVar21 = uVar35;
            }
            iVar27 = 0;
            do {
              if (uVar21 == uVar35) goto LAB_142ad637e;
              iVar27 = iVar27 + 0x20;
              uVar8 = puVar14[uVar35 + 1];
              uVar35 = uVar35 + 1;
            } while (uVar8 == 0);
          }
          else {
            uVar35 = 0;
            iVar27 = 0;
          }
          plVar25 = (longlong *)(ulonglong)(-uVar8 & uVar8);
          uVar21 = (longlong)plVar25 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar21 != 0) {
            for (; uVar21 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar8 = (iVar27 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if ((int)uVar8 < (int)local_1d0) {
            uVar34 = 0xffffffff;
            local_ab8 = uVar32;
            do {
              uVar21 = local_1f8[0];
              local_ae8 = CONCAT44(local_ae8._4_4_,uVar34);
              pRVar2 = *(PSRWLOCK *)(local_1f8[0] + (longlong)(int)uVar8 * 0x14);
              uStack_a70 = 0;
              local_a68 = 0;
              local_a60 = 0;
              local_af4 = iVar27;
              local_ae0 = uVar35;
              local_a78 = pRVar2;
              pvVar15 = (void *)FUN_14700ef9c(param_1,&local_a78);
              if (pvVar15 != local_b00 && pvVar15 != (void *)0x0) {
                if (*(int *)((longlong)pvVar15 + 0x38) + *(int *)((longlong)pvVar15 + 0x28) +
                    *(int *)((longlong)pvVar15 + 0x48) + *(int *)((longlong)pvVar15 + 0x58) == 0) {
                  uVar29 = (undefined7)(uVar32 >> 8);
                  uVar32 = CONCAT71(uVar29,1);
                  bVar26 = 1;
                  if (*(char *)(param_1 + 0xdbc) != '\x01') {
                    bVar26 = (DAT_14c99d8e0 ^ 1) & *(char *)(param_1 + 0xdbc) == '\0';
                  }
                  FUN_147012f0e(pvVar15,0xf,bVar26);
                  if (*(char *)(param_1 + 0xdbc) != '\x01') {
                    uVar32 = CONCAT71(uVar29,(DAT_14c75f4d4 ^ 1) &
                                             *(char *)(param_1 + 0xdbc) == '\0');
                  }
                  FUN_147012fda(pvVar15,uVar32 & 0xffffffff);
                  local_a20 = (undefined ***)((ulonglong)local_a20 & 0xffffffffffffff00);
                  local_a38 = &local_a18;
                  pppuStack_a28 = &local_202;
                  local_a48 = pRVar2;
                  pppuStack_a30 = local_a38;
                  FUN_14005eb5c(&local_a48,&local_a38);
                  local_a88 = local_a38;
                  local_a80 = (undefined4)
                              ((ulonglong)((longlong)pppuStack_a30 - (longlong)local_a38) >> 1);
                  cVar7 = FUN_14475c62c(&local_a88);
                  if (cVar7 != '\0') {
                    *(undefined2 *)pppuStack_a30 = 0;
                    lVar16 = FUN_140277851(0,local_a38);
                    if (lVar16 != 0) {
                      FUN_14700eea0(param_1,pRVar2);
                    }
                  }
                  if ((char)local_a20 == '\x01') {
                    FUN_1400020a8(local_a38);
                  }
                }
                pvVar6 = local_b00;
                FUN_1470149f0(local_b00,pvVar15,uVar21 + (longlong)(int)uVar8 * 0x14 + 8);
                local_b28 = 0;
                ppRStack_b20 = (PSRWLOCK *)0x0;
                local_b18 = (undefined1)((*(uint *)((longlong)pvVar15 + 0xc0) & 8) >> 3);
                FUN_147014b4c(pvVar6,0,0,(longlong)pvVar15 + 0x50);
                uVar32 = local_ab8;
              }
              uVar34 = (uint)local_ae8 & ~(uint)plVar25;
              puVar14 = local_1d8;
              if (local_1d8 == (uint *)0x0) {
                puVar14 = (uint *)local_1e8;
              }
              iVar22 = (int)local_ae0;
              lVar16 = (longlong)iVar22;
              uVar8 = puVar14[lVar16] & uVar34;
              uVar35 = local_ae0;
              iVar27 = local_af4;
              if (uVar8 == 0) {
                iVar33 = local_1d0 + 0x1e;
                if (-1 < (int)(local_1d0 - 1)) {
                  iVar33 = local_1d0 - 1;
                }
                iVar33 = iVar33 >> 5;
                iVar27 = local_af4 + 0x20;
                iVar17 = iVar33;
                if (iVar33 < iVar22) {
                  iVar17 = iVar22;
                }
                if (iVar22 < iVar33) {
                  lVar23 = 0;
                  do {
                    uVar8 = puVar14[lVar16 + lVar23 + 1];
                    if (uVar8 != 0) {
                      uVar34 = 0xffffffff;
                      uVar35 = (ulonglong)(iVar22 + (int)lVar23 + 1);
                      goto LAB_142ad632a;
                    }
                    iVar27 = iVar27 + 0x20;
                    lVar23 = lVar23 + 1;
                  } while (iVar17 - lVar16 != lVar23);
                  uVar34 = 0xffffffff;
                  iVar22 = iVar17;
                }
                uVar35 = (ulonglong)(iVar22 + 1);
                uVar8 = local_1d0;
              }
              else {
LAB_142ad632a:
                plVar25 = (longlong *)(ulonglong)(-uVar8 & uVar8);
                uVar21 = (longlong)plVar25 * 2 + 1;
                lVar16 = 0x3f;
                if (uVar21 != 0) {
                  for (; uVar21 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                  }
                }
                uVar8 = (iVar27 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                if ((int)local_1d0 <= (int)uVar8) {
                  uVar8 = local_1d0;
                }
              }
            } while (uVar8 != (uint)uVar32);
          }
        }
      }
LAB_142ad637e:
      if ((longlong)local_c8 != 0) {
        puVar24 = local_d0 + (longlong)local_c8 * 4;
        local_ae0 = (longlong)local_b00 + 0xa0;
        local_ae8 = (longlong)local_b00 + 0x30;
        puVar38 = local_d0;
        local_a90 = param_1;
        do {
          if ((longlong)*(int *)(puVar38 + 3) != 0) {
            puVar37 = (undefined8 *)puVar38[2];
            lVar16 = (longlong)*(int *)(puVar38 + 3) << 3;
            do {
              pppuVar20 = (undefined ***)*puVar37;
              cVar7 = FUN_14017678e(puVar37);
              if (cVar7 == '\0') {
                plVar25 = (longlong *)0x0;
              }
              else {
                local_a78 = (PSRWLOCK)((ulonglong)local_a78 & 0xffffffffffffff00);
                FUN_14686b366(&local_a38,puVar37,&local_a78);
                plVar25 = (longlong *)CONCAT71((int7)((ulonglong)plVar25 >> 8),(char)local_a78 << 7)
                ;
                pppuVar20 = local_a38;
              }
              local_a38 = (undefined ***)*puVar38;
              pppuStack_a28 = (undefined ***)puVar38[1];
              pppuStack_a30 = (undefined ***)0x0;
              local_a20 = pppuVar20;
              lVar23 = FUN_14700ef9c(param_1,&local_a38);
              pvVar15 = local_b00;
              if (lVar23 != 0) {
                ppRStack_b20 = (PSRWLOCK *)&LAB_1470149e2;
                local_b28 = local_ae0;
                local_b18 = (undefined1)((*(uint *)((longlong)local_b00 + 0xc0) & 2) >> 1);
                FUN_147014853(lVar23,(ulonglong)plVar25 & 0xffffffff,0x80,local_ae8);
                param_1 = local_a90;
                local_b28 = 0;
                ppRStack_b20 = (PSRWLOCK *)0x0;
                local_b18 = (undefined1)((*(uint *)(lVar23 + 0xc0) & 8) >> 3);
                FUN_147014b4c(pvVar15,0,0,lVar23 + 0x50);
              }
              puVar37 = puVar37 + 1;
              lVar16 = lVar16 + -8;
            } while (lVar16 != 0);
          }
          puVar38 = puVar38 + 4;
        } while (puVar38 != puVar24);
      }
      *(byte *)((longlong)local_b00 + 0xc0) = *(byte *)((longlong)local_b00 + 0xc0) | 0x10;
      local_1b0 = 0;
      if (local_1b8 != 0) {
        FUN_1400020a8();
      }
      FUN_146ffe546(local_1f8);
      plVar25 = local_ab0;
      puVar14 = local_ad8;
      lVar16 = local_aa8;
      param_2 = local_ac0;
    }
    FUN_146ff7a86(&local_1a0);
    goto LAB_142ad654f;
  }
  goto LAB_142ad6719;
LAB_142ad5bb1:
  local_a38 = (undefined ***)(lVar23 + lVar19);
  pppuStack_a30 = local_a38 + 1;
  FUN_147007d3e(local_ac8,&local_1a0,&local_a38);
  FUN_146ffd6b8(param_2,iVar22);
LAB_142ad654f:
  lVar16 = lVar16 + 1;
  if (((ulonglong)(lVar16 * -0x3333333333333333) >> 1 |
      (ulonglong)((lVar16 * -0x3333333333333333 & 1U) != 0) << 0x3f) < 0x199999999999999a) {
    cVar7 = FUN_146ff6cb2(local_ad0);
  }
  else {
    cVar7 = '\0';
  }
  uVar8 = local_af8 & ~(uint)plVar25;
  puVar18 = (uint *)param_2[4];
  if ((uint *)param_2[4] == (uint *)0x0) {
    puVar18 = puVar14;
  }
  iVar27 = (int)param_2[5];
  iVar22 = (int)local_af0;
  lVar23 = (longlong)iVar22;
  uVar34 = puVar18[lVar23] & uVar8;
  if (uVar34 == 0) {
    iVar33 = iVar27 + 0x1e;
    if (-1 < iVar27 + -1) {
      iVar33 = iVar27 + -1;
    }
    iVar33 = iVar33 >> 5;
    iVar17 = iVar33;
    if (iVar33 < iVar22) {
      iVar17 = iVar22;
    }
    if (iVar33 <= iVar22) goto LAB_142ad66fc;
    local_b04 = local_b04 + 0x20;
    lVar31 = 0;
    while (uVar34 = puVar18[lVar23 + lVar31 + 1], uVar34 == 0) {
      local_b04 = local_b04 + 0x20;
      lVar31 = lVar31 + 1;
      if (iVar17 - lVar23 == lVar31) goto LAB_142ad66fc;
    }
    local_af0 = (ulonglong)(iVar22 + (int)lVar31 + 1);
    uVar8 = 0xffffffff;
  }
  plVar25 = (longlong *)(ulonglong)(-uVar34 & uVar34);
  uVar32 = (longlong)plVar25 * 2 + 1;
  lVar23 = 0x3f;
  if (uVar32 != 0) {
    for (; uVar32 >> lVar23 == 0; lVar23 = lVar23 + -1) {
    }
  }
  iVar33 = (local_b04 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
  iVar22 = iVar33;
  if (iVar27 <= iVar33) {
    iVar22 = iVar27;
  }
  if (cVar7 != '\0' || iVar27 <= iVar33) goto LAB_142ad66fc;
  goto LAB_142ad59bd;
LAB_142ad66fc:
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
LAB_142ad6719:
  FUN_140105116(&local_b8);
  piVar1 = DAT_14c950c20;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar27 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar27 != 2)) {
    if (iVar27 == 1) {
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_142ad675c;
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
LAB_142ad675c:
  if ((local_60 ^ (ulonglong)auStack_b48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ad67dc FUN_142ad67dc body=584 status=ok
// SIG undefined FUN_142ad67dc(void)

void FUN_142ad67dc(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined8 *local_198;
  longlong lStack_190;
  undefined2 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  longlong local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined1 local_c0 [16];
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined4 uStack_59;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  bVar3 = false;
  uStack_59 = 0;
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  local_198 = (undefined8 *)0x0;
  lStack_190 = 0;
  local_188 = 0;
  local_158 = 0;
  local_150 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_14c = 0xffffffff00000080;
  local_144 = 0;
  local_138 = 0;
  local_130 = 0;
  local_108 = 0;
  local_100 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_fc = 0xffffffff00000080;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0xffffffffffffffff;
  local_d0 = 1;
  lVar1 = FUN_140be8873();
  lVar2 = FUN_140be88df();
  if (*(char *)(param_1 + 0x810) == '\x01') {
    local_198 = (undefined8 *)(param_1 + 0x818);
    if (*(char *)(param_1 + 0x8c0) == '\0') {
      bVar3 = *(longlong *)(param_1 + 0x8b8) == lVar2;
    }
    else {
      bVar3 = false;
    }
  }
  else {
    local_198 = &local_178;
  }
  lStack_190 = param_1 + 8;
  local_188 = CONCAT11(*(longlong *)(param_1 + 0x8c8) == lVar1,bVar3);
  local_1a8 = param_3;
  FUN_146ff8da6(lStack_190,local_c0,&local_198,param_2);
  local_e0 = 0;
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  FUN_140cb527e(&local_128);
  local_130 = 0;
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  FUN_14010514e(&local_178);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
  FUN_140fdd62a(param_1 + -0x28,local_c0,0);
  FUN_140cb5138(local_c0);
  if ((local_50 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad6a26 FUN_142ad6a26 body=73 status=ok
// SIG undefined FUN_142ad6a26(void)

void FUN_142ad6a26(longlong param_1,undefined4 param_2)

{
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  FUN_146022340(param_1 + 8,param_2);
                    /* WARNING: Could not recover jumptable at 0x000142ad6a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
  return;
}



// FUNCTION 142ad6a70 FUN_142ad6a70 body=62 status=ok
// SIG undefined FUN_142ad6a70(void)

void FUN_142ad6a70(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  *(undefined1 *)(param_1 + 0x8c0) = 1;
                    /* WARNING: Could not recover jumptable at 0x000142ad6aa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
  return;
}



// FUNCTION 142ad6aae FUN_142ad6aae body=5098 status=ok
// SIG undefined FUN_142ad6aae(void)

void FUN_142ad6aae(longlong param_1,longlong *param_2,char param_3,ulonglong param_4,
                  longlong *param_5,ulonglong *param_6)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined ********ppppppppuVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  ulonglong *puVar13;
  undefined ***pppuVar14;
  longlong *******ppppppplVar15;
  byte bVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  byte bVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  bool bVar28;
  undefined1 auStack_348 [32];
  longlong local_328;
  undefined1 *puStack_320;
  undefined1 local_318;
  undefined1 local_301;
  longlong local_300;
  longlong *local_2f8;
  uint *local_2f0;
  longlong local_2e8;
  uint local_2e0;
  int local_2dc;
  PSRWLOCK local_2d8;
  ulonglong local_2d0;
  ulonglong local_2c8;
  longlong *local_2c0;
  longlong *local_2b8;
  code **local_2b0;
  longlong *local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  code **local_290;
  code **local_288;
  longlong *local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  ulonglong uStack_260;
  longlong local_258 [2];
  undefined2 local_248;
  longlong local_238;
  undefined8 local_230;
  code *local_228;
  undefined8 uStack_220;
  undefined *******local_218;
  undefined8 uStack_210;
  undefined ******local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 *local_1e8 [2];
  undefined ***local_1d8;
  undefined **local_1c8;
  longlong **local_1c0;
  longlong local_1b8;
  longlong local_1a8 [2];
  uint local_198 [4];
  uint *local_188;
  int local_180;
  undefined8 local_17c;
  undefined4 local_174;
  longlong local_168;
  undefined4 local_160;
  longlong local_158 [2];
  uint local_148 [4];
  uint *local_138;
  int local_130;
  undefined8 local_12c;
  undefined4 local_124;
  longlong local_118;
  undefined4 local_110;
  code *local_108;
  undefined8 uStack_100;
  undefined *******local_f8;
  undefined8 uStack_f0;
  undefined ******local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined4 local_c0;
  code *local_b8;
  undefined8 uStack_b0;
  undefined *******local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong ******local_98;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  param_4 = param_4 & 0xffffffff;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_348;
  local_2d8 = (PSRWLOCK)(param_1 + 0xe40);
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  local_2f8 = param_2;
  AcquireSRWLockExclusive(local_2d8);
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  local_228 = (code *)*param_6;
  local_218 = (undefined *******)0x0;
  if (local_228 != (code *)0x0) {
    puVar13 = param_6 + 4;
    if ((ulonglong *)param_6[2] != (ulonglong *)0x0) {
      puVar13 = (ulonglong *)param_6[2];
    }
    (**(code **)*puVar13)(puVar13,&local_218);
    if (local_228 != (code *)0x0) goto LAB_142ad6c68;
  }
  uVar2 = uStack_210;
  local_f8 = local_218;
  local_108 = local_228;
  uStack_e0 = (undefined4)uStack_200;
  uStack_dc = uStack_200._4_4_;
  uStack_88 = local_1f8;
  uStack_84 = uStack_1f4;
  uStack_80 = uStack_1f0;
  uStack_7c = uStack_1ec;
  local_98 = (longlong ******)local_208;
  uStack_90 = (undefined4)uStack_200;
  uStack_8c = uStack_200._4_4_;
  local_a8 = local_218;
  uStack_a0 = (undefined4)uStack_210;
  uStack_9c = uStack_210._4_4_;
  local_b8 = local_228;
  local_228 = FUN_14700946a;
  uStack_220 = uStack_100;
  local_218 = (undefined *******)0x0;
  uStack_210 = uStack_f0;
  local_208 = (undefined ******)&PTR_LAB_149fca250;
  uStack_200 = &LAB_142adfc84;
  uStack_d8 = local_1f8;
  uStack_d4 = uStack_1f4;
  uStack_d0 = uStack_1f0;
  uStack_cc = uStack_1ec;
  uStack_f0 = uVar2;
  if (local_108 != (code *)0x0) {
    ppppppplVar15 = (longlong *******)local_f8;
    if ((longlong *******)local_f8 == (longlong *******)0x0) {
      ppppppplVar15 = (longlong *******)&local_e8;
    }
    (*(code *)(*ppppppplVar15)[2])();
  }
LAB_142ad6c68:
  local_301 = (undefined1)param_4;
  local_300 = param_1;
  if (param_3 != '\0') {
    puVar10 = (uint *)(param_1 + 0x1a8);
    iVar21 = *(int *)(param_1 + 0x1c0);
    iVar3 = iVar21;
    if (iVar21 == 0) {
      uVar25 = 1;
      iVar19 = 0;
      uVar20 = 0;
      iVar17 = 0;
    }
    else {
      puVar9 = *(uint **)(param_1 + 0x1b8);
      if (*(uint **)(param_1 + 0x1b8) == (uint *)0x0) {
        puVar9 = puVar10;
      }
      uVar26 = *puVar9;
      if (uVar26 == 0) {
        iVar19 = iVar21 + 0x1e;
        if (-1 < iVar21 + -1) {
          iVar19 = iVar21 + -1;
        }
        uVar20 = 0;
        uVar22 = (ulonglong)(uint)(iVar19 >> 5);
        if (iVar19 >> 5 < 1) {
          uVar22 = uVar20;
        }
        iVar19 = 0;
        do {
          if (uVar22 == uVar20) goto LAB_142ad6d18;
          iVar19 = iVar19 + 0x20;
          uVar26 = puVar9[uVar20 + 1];
          uVar20 = uVar20 + 1;
        } while (uVar26 == 0);
      }
      else {
        iVar19 = 0;
        uVar20 = 0;
      }
      uVar25 = (ulonglong)(-uVar26 & uVar26);
      uVar22 = uVar25 * 2 + 1;
      lVar24 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      iVar17 = (iVar19 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
      if (iVar21 <= iVar17) {
        iVar17 = iVar21;
      }
    }
    if (iVar17 != iVar21) {
      uVar26 = 0xffffffff;
      do {
        local_f8 = (undefined *******)0x0;
        uStack_f0 = 0x100000000;
        local_108 = (code *)((ulonglong)local_108 & 0xffffffffffff0000);
        local_a8 = (undefined *******)0x0;
        local_98 = (longlong ******)&PTR_LAB_149fca270;
        uStack_90 = (uint)param_5;
        uStack_8c = (undefined4)((ulonglong)param_5 >> 0x20);
        local_b8 = FUN_142adfc8a;
        FUN_14700f04e(*(undefined8 *)
                       (*(longlong *)(local_300 + 0x198) + 0x20 + (longlong)iVar17 * 0x30),&local_b8
                      ,2,&local_108);
        if (local_b8 != (code *)0x0) {
          ppppppplVar15 = (longlong *******)local_a8;
          if ((longlong *******)local_a8 == (longlong *******)0x0) {
            ppppppplVar15 = &local_98;
          }
          (*(code *)(*ppppppplVar15)[2])();
        }
        if ((longlong *******)local_f8 != (longlong *******)0x0) {
          FUN_1400020a8();
        }
        uVar26 = uVar26 & ~(uint)uVar25;
        puVar9 = *(uint **)(local_300 + 0x1b8);
        if (*(uint **)(local_300 + 0x1b8) == (uint *)0x0) {
          puVar9 = puVar10;
        }
        iVar3 = *(int *)(local_300 + 0x1c0);
        iVar17 = (int)uVar20;
        lVar24 = (longlong)iVar17;
        uVar4 = puVar9[lVar24] & uVar26;
        if (uVar4 == 0) {
          iVar11 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar11 = iVar3 + -1;
          }
          iVar11 = iVar11 >> 5;
          iVar19 = iVar19 + 0x20;
          iVar12 = iVar11;
          if (iVar11 < iVar17) {
            iVar12 = iVar17;
          }
          if (iVar17 < iVar11) {
            lVar7 = 0;
            do {
              uVar4 = puVar9[lVar7 + lVar24 + 1];
              if (uVar4 != 0) {
                uVar20 = (ulonglong)(iVar17 + (int)lVar7 + 1);
                uVar26 = 0xffffffff;
                goto LAB_142ad7c31;
              }
              iVar19 = iVar19 + 0x20;
              lVar7 = lVar7 + 1;
            } while (iVar12 - lVar24 != lVar7);
            uVar26 = 0xffffffff;
            iVar17 = iVar12;
          }
          uVar20 = (ulonglong)(iVar17 + 1);
          iVar17 = iVar3;
        }
        else {
LAB_142ad7c31:
          uVar25 = (ulonglong)(-uVar4 & uVar4);
          uVar22 = uVar25 * 2 + 1;
          lVar24 = 0x3f;
          if (uVar22 != 0) {
            for (; uVar22 >> lVar24 == 0; lVar24 = lVar24 + -1) {
            }
          }
          iVar17 = (iVar19 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar17) {
            iVar17 = iVar3;
          }
        }
      } while (iVar17 != iVar21);
    }
LAB_142ad6d18:
    param_1 = local_300;
    if (iVar3 == 0) {
      uVar25 = 1;
      iVar21 = 0;
      uVar20 = 0;
      iVar19 = 0;
    }
    else {
      puVar9 = *(uint **)(local_300 + 0x1b8);
      if (*(uint **)(local_300 + 0x1b8) == (uint *)0x0) {
        puVar9 = puVar10;
      }
      uVar26 = *puVar9;
      if (uVar26 == 0) {
        iVar21 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar21 = iVar3 + -1;
        }
        uVar20 = 0;
        uVar22 = (ulonglong)(uint)(iVar21 >> 5);
        if (iVar21 >> 5 < 1) {
          uVar22 = uVar20;
        }
        iVar21 = 0;
        do {
          if (uVar22 == uVar20) goto LAB_142ad6db9;
          iVar21 = iVar21 + 0x20;
          uVar26 = puVar9[uVar20 + 1];
          uVar20 = uVar20 + 1;
        } while (uVar26 == 0);
      }
      else {
        iVar21 = 0;
        uVar20 = 0;
      }
      uVar25 = (ulonglong)(-uVar26 & uVar26);
      uVar22 = uVar25 * 2 + 1;
      lVar24 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      iVar19 = (iVar21 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar19) {
        iVar19 = iVar3;
      }
    }
    if (iVar19 != iVar3) {
      uVar26 = 0xffffffff;
      do {
        FUN_14701156a(*(undefined8 *)
                       (*(longlong *)(param_1 + 0x198) + 0x20 + (longlong)iVar19 * 0x30),2);
        uVar26 = ~(uint)uVar25 & uVar26;
        puVar9 = *(uint **)(param_1 + 0x1b8);
        if (*(uint **)(param_1 + 0x1b8) == (uint *)0x0) {
          puVar9 = puVar10;
        }
        iVar17 = *(int *)(param_1 + 0x1c0);
        iVar19 = (int)uVar20;
        lVar24 = (longlong)iVar19;
        uVar4 = puVar9[lVar24] & uVar26;
        if (uVar4 == 0) {
          iVar11 = iVar17 + 0x1e;
          if (-1 < iVar17 + -1) {
            iVar11 = iVar17 + -1;
          }
          iVar11 = iVar11 >> 5;
          iVar21 = iVar21 + 0x20;
          iVar12 = iVar11;
          if (iVar11 < iVar19) {
            iVar12 = iVar19;
          }
          if (iVar19 < iVar11) {
            lVar7 = 0;
            do {
              uVar4 = puVar9[lVar7 + lVar24 + 1];
              if (uVar4 != 0) {
                uVar20 = (ulonglong)(iVar19 + (int)lVar7 + 1);
                uVar26 = 0xffffffff;
                goto LAB_142ad7d15;
              }
              iVar21 = iVar21 + 0x20;
              lVar7 = lVar7 + 1;
            } while (iVar12 - lVar24 != lVar7);
            uVar26 = 0xffffffff;
            lVar24 = (longlong)iVar12;
          }
          uVar20 = lVar24 + 1U & 0xffffffff;
          param_1 = local_300;
          iVar19 = iVar17;
        }
        else {
LAB_142ad7d15:
          uVar25 = (ulonglong)(-uVar4 & uVar4);
          uVar22 = uVar25 * 2 + 1;
          lVar24 = 0x3f;
          if (uVar22 != 0) {
            for (; uVar22 >> lVar24 == 0; lVar24 = lVar24 + -1) {
            }
          }
          iVar19 = (iVar21 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
          if (iVar17 <= iVar19) {
            iVar19 = iVar17;
          }
        }
      } while (iVar19 != iVar3);
    }
LAB_142ad6db9:
    iVar21 = (int)param_5[5];
    if (iVar21 == 0) {
      uVar25 = 1;
      uVar20 = 0;
      iVar3 = 0;
      iVar19 = 0;
    }
    else {
      puVar10 = (uint *)param_5[4];
      if ((uint *)param_5[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_5 + 2);
      }
      uVar26 = *puVar10;
      if (uVar26 == 0) {
        iVar3 = iVar21 + 0x1e;
        if (-1 < iVar21 + -1) {
          iVar3 = iVar21 + -1;
        }
        uVar20 = 0;
        uVar22 = (ulonglong)(uint)(iVar3 >> 5);
        if (iVar3 >> 5 < 1) {
          uVar22 = uVar20;
        }
        iVar3 = 0;
        do {
          if (uVar22 == uVar20) goto LAB_142ad6e42;
          iVar3 = iVar3 + 0x20;
          uVar26 = puVar10[uVar20 + 1];
          uVar20 = uVar20 + 1;
        } while (uVar26 == 0);
      }
      else {
        uVar20 = 0;
        iVar3 = 0;
      }
      uVar25 = (ulonglong)(-uVar26 & uVar26);
      uVar22 = uVar25 * 2 + 1;
      lVar24 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      iVar19 = (iVar3 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
      if (iVar21 <= iVar19) {
        iVar19 = iVar21;
      }
    }
    if (iVar19 != iVar21) {
      uVar26 = 0xffffffff;
      do {
        puVar10 = (uint *)(*(longlong *)(*param_5 + (longlong)iVar19 * 0x10) + 0xc0);
        *puVar10 = *puVar10 & 0xfffffff7;
        FUN_147014f56();
        uVar26 = ~(uint)uVar25 & uVar26;
        puVar10 = (uint *)param_5[4];
        if ((uint *)param_5[4] == (uint *)0x0) {
          puVar10 = (uint *)(param_5 + 2);
        }
        iVar17 = (int)param_5[5];
        iVar19 = (int)uVar20;
        lVar24 = (longlong)iVar19;
        uVar4 = puVar10[lVar24] & uVar26;
        if (uVar4 == 0) {
          iVar11 = iVar17 + 0x1e;
          if (-1 < iVar17 + -1) {
            iVar11 = iVar17 + -1;
          }
          iVar11 = iVar11 >> 5;
          iVar3 = iVar3 + 0x20;
          iVar12 = iVar11;
          if (iVar11 < iVar19) {
            iVar12 = iVar19;
          }
          if (iVar19 < iVar11) {
            lVar7 = 0;
            do {
              uVar4 = puVar10[lVar7 + lVar24 + 1];
              if (uVar4 != 0) {
                uVar20 = (ulonglong)(iVar19 + (int)lVar7 + 1);
                uVar26 = 0xffffffff;
                goto LAB_142ad7e03;
              }
              iVar3 = iVar3 + 0x20;
              lVar7 = lVar7 + 1;
            } while (iVar12 - lVar24 != lVar7);
            uVar26 = 0xffffffff;
            lVar24 = (longlong)iVar12;
          }
          uVar20 = lVar24 + 1U & 0xffffffff;
          param_1 = local_300;
          iVar19 = iVar17;
        }
        else {
LAB_142ad7e03:
          uVar25 = (ulonglong)(-uVar4 & uVar4);
          uVar22 = uVar25 * 2 + 1;
          lVar24 = 0x3f;
          if (uVar22 != 0) {
            for (; uVar22 >> lVar24 == 0; lVar24 = lVar24 + -1) {
            }
          }
          iVar19 = (iVar3 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
          if (iVar17 <= iVar19) {
            iVar19 = iVar17;
          }
        }
      } while (iVar19 != iVar21);
    }
LAB_142ad6e42:
    FUN_146ff9c72(param_5);
    param_4 = CONCAT71((int7)(uVar20 >> 8),local_301);
  }
  param_1 = param_1 + 8;
  uVar20 = 0;
  local_98 = (longlong ******)0x0;
  uStack_90 = 0;
  local_b8 = (code *)0x0;
  uStack_b0 = 0;
  uStack_8c = 0x80;
  uStack_88 = 0xffffffff;
  uStack_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_2f0 = (uint *)(local_2f8 + 2);
  iVar21 = (int)local_2f8[5];
  uVar25 = 1;
  uVar22 = 0;
  iVar19 = 0;
  iVar3 = 0;
  local_2e8 = param_1;
  if (iVar21 != 0) {
    puVar10 = (uint *)local_2f8[4];
    if ((uint *)local_2f8[4] == (uint *)0x0) {
      puVar10 = local_2f0;
    }
    uVar26 = *puVar10;
    if (uVar26 == 0) {
      iVar3 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar3 = iVar21 + -1;
      }
      uVar22 = 0;
      uVar25 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar25 = 0;
      }
      iVar19 = 0;
      do {
        if (uVar25 == uVar22) {
          uVar20 = 0;
          goto LAB_142ad70b2;
        }
        iVar19 = iVar19 + 0x20;
        uVar26 = puVar10[uVar22 + 1];
        uVar22 = uVar22 + 1;
      } while (uVar26 == 0);
    }
    else {
      uVar22 = 0;
    }
    uVar25 = (ulonglong)(-uVar26 & uVar26);
    uVar27 = uVar25 * 2 + 1;
    lVar24 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    iVar3 = (iVar19 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
    if (iVar21 <= iVar3) {
      iVar3 = iVar21;
    }
  }
  if (iVar3 != iVar21) {
    uVar26 = 0xffffffff;
    do {
      lVar24 = *local_2f8;
      lVar5 = (longlong)iVar3;
      lVar7 = lVar5 * 9;
      local_108 = (code *)FUN_147011492(param_1,lVar24 + lVar5 * 0x48 + 0x20);
      if (local_108 != (code *)0x0) {
        uVar4 = ((uint)((ulonglong)local_108 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_108 >> 4))
                * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        plVar6 = (longlong *)FUN_147009be2(&local_b8,uVar4 >> 0x10 ^ uVar4,&local_108);
        lVar7 = FUN_14700ef9c(param_1,lVar24 + lVar5 * 0x48);
        iVar3 = (int)plVar6[1];
        *(uint *)(plVar6 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)plVar6 + 0xc) < iVar3 + 1U) {
          FUN_14700a186(plVar6,iVar3);
        }
        *(longlong *)(*plVar6 + (longlong)iVar3 * 8) = lVar7;
        param_1 = local_2e8;
      }
      uVar26 = uVar26 & ~(uint)uVar25;
      puVar10 = (uint *)local_2f8[4];
      if ((uint *)local_2f8[4] == (uint *)0x0) {
        puVar10 = local_2f0;
      }
      iVar17 = (int)local_2f8[5];
      iVar3 = (int)uVar22;
      lVar24 = (longlong)iVar3;
      uVar4 = puVar10[lVar24] & uVar26;
      if (uVar4 == 0) {
        iVar11 = iVar17 + 0x1e;
        if (-1 < iVar17 + -1) {
          iVar11 = iVar17 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar19 = iVar19 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar3) {
          iVar12 = iVar3;
        }
        if (iVar3 < iVar11) {
          lVar5 = 0;
          do {
            uVar4 = (puVar10 + lVar24 + 1)[lVar5];
            if (uVar4 != 0) {
              uVar22 = (ulonglong)(iVar3 + (int)lVar5 + 1);
              uVar26 = 0xffffffff;
              goto LAB_142ad7058;
            }
            iVar19 = iVar19 + 0x20;
            lVar5 = lVar5 + 1;
          } while (iVar12 - lVar24 != lVar5);
          uVar26 = 0xffffffff;
          iVar3 = iVar12;
        }
        uVar22 = (ulonglong)(iVar3 + 1);
        param_1 = local_2e8;
        iVar3 = iVar17;
      }
      else {
LAB_142ad7058:
        uVar25 = (ulonglong)(-uVar4 & uVar4);
        uVar20 = uVar25 * 2 + 1;
        lVar24 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        iVar3 = (iVar19 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
        if (iVar17 <= iVar3) {
          iVar3 = iVar17;
        }
      }
    } while (iVar3 != iVar21);
    uVar20 = (ulonglong)uStack_90;
    param_4 = CONCAT71((int7)((ulonglong)lVar7 >> 8),local_301);
  }
LAB_142ad70b2:
  uVar25 = 0;
  local_e8 = (undefined ******)0x0;
  uStack_e0 = 0;
  local_108 = (code *)0x0;
  uStack_100 = 0;
  uStack_dc = 0x80;
  uStack_d8 = 0xffffffff;
  uStack_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_138 = (uint *)0x0;
  local_130 = 0;
  local_158[0] = 0;
  local_158[1] = 0;
  local_12c = 0xffffffff00000080;
  local_124 = 0;
  local_118 = 0;
  local_110 = 0;
  local_258[0] = 0;
  local_258[1] = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_188 = (uint *)0x0;
  local_180 = 0;
  local_1a8[0] = 0;
  local_1a8[1] = 0;
  local_17c = 0xffffffff00000080;
  local_174 = 0;
  local_168 = 0;
  local_160 = 0;
  uVar27 = 1;
  iVar21 = 0;
  iVar3 = (int)uVar20;
  uVar22 = 0;
  if (iVar3 != 0) {
    ppppppppuVar8 = (undefined ********)local_98;
    if ((undefined ********)local_98 == (undefined ********)0x0) {
      ppppppppuVar8 = &local_a8;
    }
    uVar26 = *(uint *)ppppppppuVar8;
    if (uVar26 == 0) {
      iVar21 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar21 = iVar3 + -1;
      }
      uVar25 = 0;
      uVar22 = (ulonglong)(uint)(iVar21 >> 5);
      if (iVar21 >> 5 < 1) {
        uVar22 = uVar25;
      }
      iVar21 = 0;
      do {
        if (uVar22 == uVar25) goto LAB_142ad7950;
        iVar21 = iVar21 + 0x20;
        uVar26 = *(uint *)((longlong)ppppppppuVar8 + (uVar25 + 1) * 4);
        uVar25 = uVar25 + 1;
      } while (uVar26 == 0);
    }
    else {
      uVar25 = 0;
    }
    uVar27 = (ulonglong)(-uVar26 & uVar26);
    uVar22 = uVar27 * 2 + 1;
    lVar24 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    uVar26 = (iVar21 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
    uVar22 = (ulonglong)uVar26;
    if (iVar3 <= (int)uVar26) {
      uVar22 = uVar20;
    }
  }
  if ((int)uVar22 != iVar3) {
    uVar26 = 0xffffffff;
    uVar18 = uVar20;
    local_2d0 = uVar20;
    do {
      lVar24 = (longlong)(int)uVar22 * 0x20;
      if ((longlong)*(int *)(local_b8 + lVar24 + 0x10) != 0) {
        local_2f8 = *(longlong **)(local_b8 + lVar24);
        puVar10 = *(uint **)(local_b8 + lVar24 + 8);
        local_2f0 = puVar10 + (longlong)*(int *)(local_b8 + lVar24 + 0x10) * 2;
        local_2e0 = uVar26;
        local_2dc = iVar21;
        local_2c8 = uVar25;
        do {
          local_270 = *(longlong *)puVar10;
          FUN_146ff9cb6(&local_108);
          FUN_14700a242(local_158);
          bVar28 = (longlong)uStack_260 < 0;
          uStack_260 = uStack_260 & 0xffffffff00000000;
          if (bVar28) {
            FUN_14700a3ca(&local_268,0);
          }
          local_278 = local_270;
          local_2c0 = &local_270;
          local_2b8 = &local_278;
          local_2b0 = &local_228;
          local_2a0 = local_258;
          local_288 = &local_b8;
          local_2a8 = local_158;
          local_298 = &local_268;
          local_290 = &local_108;
          local_280 = param_5;
          FUN_142ad7e9a(&local_2c0,local_2f8,2,8);
          if ((int)uStack_260 != 0 && (char)param_4 != '\0') {
            do {
              lVar24 = *(longlong *)(local_268 + -8 + (longlong)(int)uStack_260 * 8);
              uStack_260 = CONCAT44(uStack_260._4_4_,(int)uStack_260 + -1);
              FUN_14700a42a(&local_268);
              local_278 = lVar24;
              FUN_1470094f0(&local_108,local_1e8,&local_278,0);
              local_238 = 0;
              local_230 = 0x100000000;
              local_248 = 0;
              local_1d8 = (undefined ***)0x0;
              local_1c8 = &PTR_LAB_149fca290;
              local_1c0 = &local_2c0;
              local_1b8 = local_278;
              local_1e8[0] = &LAB_142adfd08;
              FUN_14700f04e(local_278,local_1e8,param_4 & 0xffffffff);
              if (local_1e8[0] != (undefined1 *)0x0) {
                pppuVar14 = local_1d8;
                if (local_1d8 == (undefined ***)0x0) {
                  pppuVar14 = &local_1c8;
                }
                (*(code *)(*pppuVar14)[2])();
              }
              if (local_238 != 0) {
                FUN_1400020a8();
              }
            } while ((int)uStack_260 != 0);
          }
          iVar21 = local_130;
          *(uint *)(local_270 + 0xc0) = *(uint *)(local_270 + 0xc0) & 0xfffffffb;
          if (local_130 == 0) {
            uVar22 = 1;
            uVar20 = 0;
            iVar19 = 0;
            iVar3 = 0;
          }
          else {
            puVar9 = local_138;
            if (local_138 == (uint *)0x0) {
              puVar9 = local_148;
            }
            uVar26 = *puVar9;
            if (uVar26 == 0) {
              iVar3 = local_130 + 0x1e;
              if (-1 < local_130 + -1) {
                iVar3 = local_130 + -1;
              }
              uVar20 = 0;
              uVar22 = (ulonglong)(uint)(iVar3 >> 5);
              if (iVar3 >> 5 < 1) {
                uVar22 = uVar20;
              }
              iVar19 = 0;
              do {
                if (uVar22 == uVar20) goto LAB_142ad7506;
                iVar19 = iVar19 + 0x20;
                uVar26 = puVar9[uVar20 + 1];
                uVar20 = uVar20 + 1;
              } while (uVar26 == 0);
            }
            else {
              uVar20 = 0;
              iVar19 = 0;
            }
            uVar22 = (ulonglong)(-uVar26 & uVar26);
            uVar25 = uVar22 * 2 + 1;
            lVar24 = 0x3f;
            if (uVar25 != 0) {
              for (; uVar25 >> lVar24 == 0; lVar24 = lVar24 + -1) {
              }
            }
            iVar3 = (iVar19 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
            if (local_130 <= iVar3) {
              iVar3 = local_130;
            }
          }
          if (iVar3 != local_130) {
            param_4 = 0xffffffff;
            do {
              plVar6 = (longlong *)(local_158[0] + (longlong)iVar3 * 0x18);
              *(uint *)(*plVar6 + 0xc0) = *(uint *)(*plVar6 + 0xc0) & 0xfffffff7;
              local_328 = 0;
              puStack_320 = (undefined1 *)0x0;
              local_318 = (undefined1)((*(uint *)(*plVar6 + 0xc0) & 8) >> 3);
              FUN_147014b4c(local_270,0,0,*plVar6 + 0x50);
              local_328 = local_270 + 0x80;
              puStack_320 = &LAB_1470149e8;
              local_318 = (undefined1)((*(uint *)(local_270 + 0xc0) & 4) >> 2);
              FUN_147014853(*plVar6,(char)plVar6[1],CONCAT71((int7)((ulonglong)local_328 >> 8),8),
                            local_270 + 0x40);
              FUN_1470094f0(local_1a8,local_1e8,plVar6,0);
              uVar26 = ~(uint)uVar22 & (uint)param_4;
              puVar9 = local_138;
              if (local_138 == (uint *)0x0) {
                puVar9 = local_148;
              }
              iVar3 = (int)uVar20;
              lVar24 = (longlong)iVar3;
              uVar4 = puVar9[lVar24] & uVar26;
              if (uVar4 == 0) {
                iVar17 = local_130 + 0x1e;
                if (-1 < local_130 + -1) {
                  iVar17 = local_130 + -1;
                }
                iVar17 = iVar17 >> 5;
                iVar19 = iVar19 + 0x20;
                iVar11 = iVar17;
                if (iVar17 < iVar3) {
                  iVar11 = iVar3;
                }
                if (iVar3 < iVar17) {
                  lVar7 = 0;
                  do {
                    uVar4 = puVar9[lVar7 + lVar24 + 1];
                    if (uVar4 != 0) {
                      uVar20 = (ulonglong)(iVar3 + (int)lVar7 + 1);
                      uVar26 = 0xffffffff;
                      goto LAB_142ad7669;
                    }
                    iVar19 = iVar19 + 0x20;
                    lVar7 = lVar7 + 1;
                  } while (iVar11 - lVar24 != lVar7);
                  uVar26 = 0xffffffff;
                  lVar24 = (longlong)iVar11;
                }
                uVar20 = lVar24 + 1U & 0xffffffff;
                iVar3 = local_130;
              }
              else {
LAB_142ad7669:
                uVar22 = (ulonglong)(-uVar4 & uVar4);
                uVar25 = uVar22 * 2 + 1;
                lVar24 = 0x3f;
                if (uVar25 != 0) {
                  for (; uVar25 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                  }
                }
                iVar3 = (iVar19 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
                if (local_130 <= iVar3) {
                  iVar3 = local_130;
                }
              }
              param_4 = (ulonglong)uVar26;
            } while (iVar3 != iVar21);
          }
LAB_142ad7506:
          puVar10 = puVar10 + 2;
          param_4 = CONCAT71((int7)(param_4 >> 8),local_301);
        } while (puVar10 != local_2f0);
        uVar20 = (ulonglong)uStack_90;
        uVar18 = local_2d0;
        uVar25 = local_2c8;
        iVar21 = local_2dc;
        uVar26 = local_2e0;
      }
      iVar3 = local_180;
      uVar26 = uVar26 & ~(uint)uVar27;
      ppppppppuVar8 = (undefined ********)local_98;
      if ((undefined ********)local_98 == (undefined ********)0x0) {
        ppppppppuVar8 = &local_a8;
      }
      iVar17 = (int)uVar25;
      lVar24 = (longlong)iVar17;
      uVar4 = *(uint *)((longlong)ppppppppuVar8 + lVar24 * 4) & uVar26;
      iVar19 = (int)uVar20;
      if (uVar4 == 0) {
        iVar11 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar11 = iVar19 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar21 = iVar21 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar17) {
          iVar12 = iVar17;
        }
        if (iVar17 < iVar11) {
          lVar7 = 0;
          do {
            uVar4 = ((uint *)((longlong)ppppppppuVar8 + (lVar24 + 1) * 4))[lVar7];
            if (uVar4 != 0) {
              uVar25 = (ulonglong)(iVar17 + (int)lVar7 + 1);
              uVar26 = 0xffffffff;
              goto LAB_142ad776d;
            }
            iVar21 = iVar21 + 0x20;
            lVar7 = lVar7 + 1;
          } while (iVar12 - lVar24 != lVar7);
          uVar26 = 0xffffffff;
          lVar24 = (longlong)iVar12;
        }
        uVar25 = lVar24 + 1U & 0xffffffff;
        param_4 = CONCAT71((int7)(param_4 >> 8),local_301);
        uVar22 = uVar20;
      }
      else {
LAB_142ad776d:
        uVar27 = (ulonglong)(-uVar4 & uVar4);
        uVar22 = uVar27 * 2 + 1;
        lVar24 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        uVar4 = (iVar21 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
        uVar22 = (ulonglong)uVar4;
        if (iVar19 <= (int)uVar4) {
          uVar22 = uVar20;
        }
      }
    } while ((int)uVar22 != (int)uVar18);
    if (local_180 != 0) {
      puVar10 = local_188;
      if (local_188 == (uint *)0x0) {
        puVar10 = local_198;
      }
      uVar26 = *puVar10;
      if (uVar26 == 0) {
        iVar21 = local_180 + 0x1e;
        if (-1 < local_180 + -1) {
          iVar21 = local_180 + -1;
        }
        uVar20 = 0;
        uVar22 = (ulonglong)(uint)(iVar21 >> 5);
        if (iVar21 >> 5 < 1) {
          uVar22 = uVar20;
        }
        iVar21 = 0;
        do {
          if (uVar22 == uVar20) goto LAB_142ad7950;
          iVar21 = iVar21 + 0x20;
          uVar26 = puVar10[uVar20 + 1];
          uVar20 = uVar20 + 1;
        } while (uVar26 == 0);
      }
      else {
        uVar20 = 0;
        iVar21 = 0;
      }
      uVar25 = (ulonglong)(-uVar26 & uVar26);
      uVar22 = uVar25 * 2 + 1;
      lVar24 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      iVar19 = (iVar21 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
      if (iVar19 < local_180) {
        uVar26 = 0xffffffff;
        do {
          local_2c0 = *(longlong **)(local_1a8[0] + (longlong)iVar19 * 0x10);
          FUN_1470094f0(param_5,local_1e8,&local_2c0,0);
          uVar26 = ~(uint)uVar25 & uVar26;
          puVar10 = local_188;
          if (local_188 == (uint *)0x0) {
            puVar10 = local_198;
          }
          iVar19 = (int)uVar20;
          lVar24 = (longlong)iVar19;
          uVar4 = puVar10[lVar24] & uVar26;
          if (uVar4 == 0) {
            iVar17 = local_180 + 0x1e;
            if (-1 < local_180 + -1) {
              iVar17 = local_180 + -1;
            }
            iVar17 = iVar17 >> 5;
            iVar21 = iVar21 + 0x20;
            iVar11 = iVar17;
            if (iVar17 < iVar19) {
              iVar11 = iVar19;
            }
            if (iVar19 < iVar17) {
              lVar7 = 0;
              do {
                uVar4 = puVar10[lVar24 + lVar7 + 1];
                if (uVar4 != 0) {
                  uVar20 = (ulonglong)(iVar19 + (int)lVar7 + 1);
                  uVar26 = 0xffffffff;
                  goto LAB_142ad7909;
                }
                iVar21 = iVar21 + 0x20;
                lVar7 = lVar7 + 1;
              } while (iVar11 - lVar24 != lVar7);
              uVar26 = 0xffffffff;
              lVar24 = (longlong)iVar11;
            }
            uVar20 = lVar24 + 1U & 0xffffffff;
            iVar19 = local_180;
          }
          else {
LAB_142ad7909:
            uVar25 = (ulonglong)(-uVar4 & uVar4);
            uVar22 = uVar25 * 2 + 1;
            lVar24 = 0x3f;
            if (uVar22 != 0) {
              for (; uVar22 >> lVar24 == 0; lVar24 = lVar24 + -1) {
              }
            }
            iVar19 = (iVar21 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
            if (local_180 <= iVar19) {
              iVar19 = local_180;
            }
          }
        } while (iVar19 != iVar3);
      }
    }
  }
LAB_142ad7950:
  cVar1 = *(char *)(local_300 + 0xdc4);
  bVar23 = 1;
  bVar16 = 1;
  if (cVar1 != '\x01') {
    bVar23 = (DAT_14c75f4d4 ^ 1) & cVar1 == '\0';
    bVar16 = (DAT_14c99d8e0 ^ 1) & cVar1 == '\0';
  }
  FUN_14576f8ee(local_2e8,bVar16,bVar23);
  local_160 = 0;
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  FUN_14700a20c(local_1a8);
  if (local_268 != 0) {
    FUN_1400020a8();
  }
  if (local_258[0] != 0) {
    FUN_1400020a8();
  }
  local_110 = 0;
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  FUN_146ffeace(local_158);
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_14700a20c(&local_108);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_146ffeb5c(&local_b8);
  if (local_228 != (code *)0x0) {
    ppppppplVar15 = (longlong *******)local_218;
    if ((longlong *******)local_218 == (longlong *******)0x0) {
      ppppppplVar15 = (longlong *******)&local_208;
    }
    (*(code *)(*ppppppplVar15)[2])();
  }
  ReleaseSRWLockExclusive(local_2d8);
  if (*param_6 != 0) {
    puVar13 = param_6 + 4;
    if ((ulonglong *)param_6[2] != (ulonglong *)0x0) {
      puVar13 = (ulonglong *)param_6[2];
    }
    (**(code **)(*puVar13 + 0x10))(puVar13);
  }
  if ((local_60 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad7e9a FUN_142ad7e9a body=724 status=ok
// SIG undefined FUN_142ad7e9a(void)

void FUN_142ad7e9a(undefined8 *param_1,ulonglong param_2,char param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_a8 [32];
  char *local_88;
  undefined1 *local_80;
  ulonglong **local_78;
  ulonglong local_68;
  ulonglong *local_60;
  char *local_58;
  undefined1 local_50 [7];
  char local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar10 = (longlong *)param_1[6];
  local_68 = param_2;
  if ((int)plVar10[1] != *(int *)((longlong)plVar10 + 0x34)) {
    uVar8 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    plVar9 = plVar10 + 7;
    if ((longlong *)plVar10[8] != (longlong *)0x0) {
      plVar9 = (longlong *)plVar10[8];
    }
    iVar6 = *(int *)((longlong)plVar9 +
                    (ulonglong)((int)plVar10[9] - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
    if (iVar6 != -1) {
      do {
        if (*(ulonglong *)(*plVar10 + (longlong)iVar6 * 0x10) == param_2) goto LAB_142ad80e7;
        iVar6 = *(int *)((longlong)iVar6 * 0x10 + *plVar10 + 8);
      } while (iVar6 != -1);
    }
  }
  lVar2 = *(longlong *)param_1[1];
  lVar3 = *(longlong *)*param_1;
  plVar10 = (longlong *)param_1[8];
  uVar8 = 0;
  uVar11 = 0;
  if ((int)plVar10[1] != *(int *)((longlong)plVar10 + 0x34)) {
    uVar11 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
    plVar9 = plVar10 + 7;
    if ((longlong *)plVar10[8] != (longlong *)0x0) {
      plVar9 = (longlong *)plVar10[8];
    }
    iVar6 = *(int *)((longlong)plVar9 +
                    (ulonglong)((int)plVar10[9] - 1U & (uVar11 >> 0x10 ^ uVar11)) * 4);
    uVar11 = 0;
    if (iVar6 != -1) {
      do {
        if (*(ulonglong *)(*plVar10 + (longlong)iVar6 * 0x10) == param_2) {
          uVar11 = 2;
          goto LAB_142ad7fe8;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x10 + *plVar10 + 8);
      } while (iVar6 != -1);
      uVar11 = 0;
    }
  }
LAB_142ad7fe8:
  plVar10 = (longlong *)param_1[7];
  if ((int)plVar10[1] != *(int *)((longlong)plVar10 + 0x34)) {
    uVar12 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
    plVar9 = plVar10 + 7;
    if ((longlong *)plVar10[8] != (longlong *)0x0) {
      plVar9 = (longlong *)plVar10[8];
    }
    iVar6 = *(int *)((longlong)plVar9 +
                    (ulonglong)((int)plVar10[9] - 1U & (uVar12 >> 0x10 ^ uVar12)) * 4);
    if (iVar6 != -1) {
      do {
        lVar1 = *plVar10 + (longlong)iVar6 * 0x20;
        if (*(ulonglong *)(*plVar10 + (longlong)iVar6 * 0x20) == param_2) {
          uVar8 = (uint)((lVar1 + 8U & 0xfffffffffffffff7) != 0 && lVar2 != lVar3) << 2;
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x18);
      } while (iVar6 != -1);
    }
  }
  puVar4 = (undefined8 *)param_1[2];
  local_60 = (ulonglong *)CONCAT44(local_60._4_4_,uVar11 | lVar2 == lVar3 | uVar8);
  pcVar5 = (code *)*puVar4;
  plVar10 = puVar4 + 4;
  if ((longlong *)puVar4[2] != (longlong *)0x0) {
    plVar10 = (longlong *)puVar4[2];
  }
  local_50[0] = param_4;
  local_49 = param_3;
  uVar7 = (**(code **)(*plVar10 + 8))();
  local_88 = &local_49;
  local_80 = local_50;
  local_78 = &local_60;
  iVar6 = (*pcVar5)(uVar7,lVar3,lVar2,param_2);
  if (iVar6 != 0) {
    local_49 = (lVar2 == lVar3) << 3;
    local_60 = &local_68;
    local_58 = &local_49;
    FUN_146ffe5d4(param_1[3],local_50);
    if (iVar6 == 2) {
      plVar10 = (longlong *)param_1[5];
      iVar6 = (int)plVar10[1];
      *(uint *)(plVar10 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)plVar10 + 0xc) < iVar6 + 1U) {
        FUN_14700a186(plVar10,iVar6);
      }
      *(ulonglong *)(*plVar10 + (longlong)iVar6 * 8) = local_68;
    }
  }
LAB_142ad80e7:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ad8170 FUN_142ad8170 body=225 status=ok
// SIG undefined FUN_142ad8170(void)

undefined4 FUN_142ad8170(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [16];
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined7 uStack_48;
  undefined4 uStack_41;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_41 = 0;
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  local_b8 = *param_3;
  uStack_b4 = param_3[1];
  uStack_b0 = param_3[2];
  uStack_ac = param_3[3];
  uVar1 = FUN_146ff9cfa(param_1 + 8,local_a8,param_2);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xe40));
  FUN_140fdd62a(param_1 + -0x28,local_a8,0);
  FUN_140cb5138(local_a8);
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad8252 FUN_142ad8252 body=147 status=ok
// SIG undefined FUN_142ad8252(void)

void FUN_142ad8252(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  local_40 = *param_2;
  local_28 = &local_40;
  local_38 = param_2[1];
  local_30 = FUN_142adfd54;
  FUN_146ff9eb2(param_1 + 8);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad82e6 FUN_142ad82e6 body=191 status=ok
// SIG undefined FUN_142ad82e6(void)

void FUN_142ad82e6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = 0;
  lVar4 = 0;
  do {
    iVar1 = *(int *)(*param_1 + 8 + lVar3);
    if (iVar1 != 0) {
      local_48 = *(undefined8 *)(*param_1 + lVar3);
      local_40 = iVar1;
      FUN_147007728(param_1[1] + lVar4,&local_48);
      lVar2 = *param_1;
      iVar1 = *(int *)(lVar2 + 0xc + lVar3);
      FUN_140195631(*(undefined8 *)(lVar2 + lVar3),*(undefined4 *)(lVar2 + 8 + lVar3));
      *(undefined4 *)(lVar2 + 8 + lVar3) = 0;
      if ((iVar1 < 0) && (*(int *)(lVar2 + lVar3 + 0xc) != 0)) {
        FUN_147000e7a(lVar2 + lVar3,0);
      }
    }
    lVar4 = lVar4 + 0x40;
    lVar3 = lVar3 + 0x10;
  } while (lVar4 != 0x100);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad83a6 FUN_142ad83a6 body=69 status=ok
// SIG undefined FUN_142ad83a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ad83a6(void)

{
  _DAT_14c99dea0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ad83e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99dea8,1);
  return;
}



// FUNCTION 142ad83fa FUN_142ad83fa body=254 status=ok
// SIG undefined FUN_142ad83fa(void)

void FUN_142ad83fa(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar4 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar3 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar3 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar3 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar2 = uVar4 * 0x10;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar1 < 0x800) {
            uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4]];
          }
          else {
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
          }
        }
        else {
          uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
          iVar3 = *(int *)(param_1 + 0xc);
        }
      }
      uVar4 = uVar2 >> 4 & 0xffffffff;
    }
    if ((int)uVar4 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar4;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x10,8);
    }
  }
  return;
}



// FUNCTION 142ad852e FUN_142ad852e body=206 status=ok
// SIG undefined FUN_142ad852e(void)

void FUN_142ad852e(undefined8 param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < *(int *)(param_2 + 1)) {
    local_28 = 0;
    uStack_20 = 0;
    if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    else {
      puVar1 = *(undefined2 **)*param_2;
    }
    FUN_1446f470e(&local_30,puVar1,1);
    local_38 = 1;
    (**(code **)(*DAT_14c9485b8 + 0x18))(DAT_14c9485b8,local_30,&local_28,0);
    if (0 < (int)uStack_20) {
      lVar2 = 0;
      lVar3 = 0;
      do {
        FUN_142ad9370(local_28 + lVar2);
        lVar3 = lVar3 + 1;
        lVar2 = lVar2 + 0x70;
      } while (lVar3 < (int)uStack_20);
    }
    FUN_140195631(local_28);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad85fe FUN_142ad85fe body=206 status=ok
// SIG undefined FUN_142ad85fe(void)

void FUN_142ad85fe(undefined8 param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < *(int *)(param_2 + 1)) {
    local_28 = 0;
    uStack_20 = 0;
    if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    else {
      puVar1 = *(undefined2 **)*param_2;
    }
    FUN_1446f470e(&local_30,puVar1,1);
    local_38 = 0;
    (**(code **)(*DAT_14c9485b8 + 0x20))(DAT_14c9485b8,local_30,&local_28,0);
    if (0 < (int)uStack_20) {
      lVar2 = 0;
      lVar3 = 0;
      do {
        FUN_142ad9370(local_28 + lVar2);
        lVar3 = lVar3 + 1;
        lVar2 = lVar2 + 0x70;
      } while (lVar3 < (int)uStack_20);
    }
    FUN_140195631(local_28);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad86ce FUN_142ad86ce body=225 status=ok
// SIG undefined FUN_142ad86ce(void)

void FUN_142ad86ce(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong uStack_40;
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < (int)param_2[1]) {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_30 = *(undefined8 *)*param_2;
    iVar1 = *(int *)((undefined8 *)*param_2 + 1);
    uVar3 = 0;
    local_28 = iVar1 + -1;
    if (iVar1 == 0) {
      local_28 = 0;
    }
    FUN_1468fe3e4(&local_58);
    if (local_58 != 0) {
      local_68 = (undefined4)local_58;
      uStack_64 = local_58._4_4_;
      uStack_60 = (undefined4)uStack_50;
      uStack_5c = uStack_50._4_4_;
      (**(code **)(*DAT_14c9485b8 + 0x30))(DAT_14c9485b8,&local_68,&local_48,0);
      uVar3 = uStack_40 & 0xffffffff;
      if (0 < (int)uStack_40) {
        lVar4 = 0;
        lVar2 = 0;
        do {
          FUN_142ad9370(local_48 + lVar4);
          lVar2 = lVar2 + 1;
          uVar3 = (ulonglong)(int)uStack_40;
          lVar4 = lVar4 + 0x70;
        } while (lVar2 < (longlong)uVar3);
      }
    }
    FUN_140195631(local_48,uVar3 & 0xffffffff);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad87b0 FUN_142ad87b0 body=355 status=ok
// SIG undefined FUN_142ad87b0(void)

void FUN_142ad87b0(undefined8 param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  undefined8 *puStack_a0;
  undefined1 local_8c [4];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (1 < *(int *)(param_2 + 1)) {
    local_68 = 0;
    local_60 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_5c = 0xffffffff00000080;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    param_2 = (undefined8 *)*param_2;
    if (*(int *)(param_2 + 1) == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    else {
      puVar1 = (undefined2 *)*param_2;
    }
    FUN_1446f470e(local_b0,puVar1,1);
    local_a8 = local_b0;
    puStack_a0 = param_2 + 2;
    FUN_146ffc174(&local_88,local_8c,&local_a8);
    local_a8 = (undefined1 *)0x0;
    puStack_a0 = (undefined8 *)0x0;
    (**(code **)(*DAT_14c9485b8 + 0x40))(DAT_14c9485b8,&local_88,&local_a8);
    if (0 < (int)puStack_a0) {
      lVar2 = 0;
      lVar3 = 0;
      do {
        FUN_142ad9370(local_a8 + lVar2);
        lVar3 = lVar3 + 1;
        lVar2 = lVar2 + 0x70;
      } while (lVar3 < (int)puStack_a0);
    }
    FUN_140195631(local_a8);
    if (local_a8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    local_40 = 0;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140bb2a1a(&local_88);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad8914 FUN_142ad8914 body=200 status=ok
// SIG undefined FUN_142ad8914(void)

void FUN_142ad8914(undefined8 param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  longlong local_58 [3];
  undefined8 local_40;
  undefined2 local_38 [8];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < *(int *)(param_2 + 1)) {
    if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    else {
      puVar1 = *(undefined2 **)*param_2;
    }
    FUN_1446f470e(&local_40,puVar1,1);
    local_58[0] = 0;
    local_58[1] = 0;
    local_68 = local_38;
    local_28 = 0;
    local_20 = 0x100000000;
    local_38[0] = 0;
    (**(code **)(*DAT_14c9485b8 + 0xf8))(DAT_14c9485b8,local_40,local_58,1);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad89de FUN_142ad89de body=200 status=ok
// SIG undefined FUN_142ad89de(void)

void FUN_142ad89de(undefined8 param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  longlong local_58 [3];
  undefined8 local_40;
  undefined2 local_38 [8];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < *(int *)(param_2 + 1)) {
    if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    else {
      puVar1 = *(undefined2 **)*param_2;
    }
    FUN_1446f470e(&local_40,puVar1,1);
    local_58[0] = 0;
    local_58[1] = 0;
    local_68 = local_38;
    local_28 = 0;
    local_20 = 0x100000000;
    local_38[0] = 0;
    (**(code **)(*DAT_14c9485b8 + 0x118))(DAT_14c9485b8,local_40,local_58,1);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad8aa8 FUN_142ad8aa8 body=246 status=ok
// SIG undefined FUN_142ad8aa8(void)

void FUN_142ad8aa8(void)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58;
  char local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  (**(code **)(*DAT_14c9485b8 + 200))(DAT_14c9485b8,&local_48,0);
  if (0 < (int)uStack_40) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      lVar2 = local_48 + lVar3;
      local_50 = '\0';
      local_58 = 0;
      FUN_1400021e4(lVar2,local_68);
      cVar1 = FUN_1427b6ea4(local_68,0xff,0,&local_58);
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      if ((cVar1 != '\0') && (local_50 == '\x01')) {
        FUN_1406742aa(lVar2);
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x70;
    } while (lVar4 < (int)uStack_40);
  }
  FUN_140195631(local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad8ba0 FUN_142ad8ba0 body=1710 status=ok
// SIG undefined FUN_142ad8ba0(void)

void FUN_142ad8ba0(undefined8 param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  uint uVar9;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  undefined2 **ppuVar14;
  undefined2 **ppuVar15;
  bool bVar16;
  bool bVar17;
  byte bVar18;
  bool bVar19;
  undefined1 auStack_f8 [40];
  undefined2 *local_d0;
  undefined2 **local_c8;
  ulonglong *local_c0;
  undefined2 **local_b8;
  ulonglong *local_b0;
  longlong local_a8;
  int local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  longlong local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  int7 iVar10;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_78 = (undefined2 *)0x0;
  uStack_70 = 0;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    ppuVar14 = (undefined2 **)*param_2;
    ppuVar15 = ppuVar14 + (longlong)*(int *)(param_2 + 1) * 2;
    bVar17 = false;
    bVar19 = false;
    bVar18 = false;
    uVar4 = 0;
    do {
      uVar13 = *(uint *)(ppuVar14 + 1);
      psVar6 = &DAT_149dfb77a;
      if ((longlong)(int)uVar13 != 0) {
        psVar6 = *ppuVar14;
      }
      if (*psVar6 == 0x2d) {
        iVar10 = (int7)(int3)(uVar13 >> 8);
        uVar9 = (uint)CONCAT71(iVar10,1);
        bVar16 = bVar17 == false;
        bVar17 = true;
        if (bVar16) {
          FUN_140056680(&local_68,L"-forcerescan");
          iVar5 = *(int *)(ppuVar14 + 1);
          if (iVar5 == local_60) {
            bVar17 = true;
            if (1 < iVar5) {
              lVar11 = 0;
              while( true ) {
                uVar1 = *(ushort *)((longlong)*ppuVar14 + lVar11);
                uVar13 = (uint)uVar1;
                uVar2 = *(ushort *)(local_68 + lVar11);
                uVar12 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_142ad8c72;
                  }
                  iVar5 = uVar13 - uVar12;
                  goto LAB_142ad8cb7;
                }
                if (uVar1 == 0) break;
LAB_142ad8c72:
                lVar11 = lVar11 + 2;
              }
              iVar5 = 0;
LAB_142ad8cb7:
              bVar17 = iVar5 == 0;
            }
          }
          else {
            bVar17 = local_60 + iVar5 == 1;
          }
          if (local_68 != 0) {
            FUN_1400020a8();
          }
        }
        if ((uVar4 & 1) == 0) {
          FUN_140056680(&local_68,L"-ignoreDenyLists");
          iVar5 = *(int *)(ppuVar14 + 1);
          if (iVar5 == local_60) {
            uVar9 = (uint)CONCAT71(iVar10,1);
            if (1 < iVar5) {
              lVar11 = 0;
              while( true ) {
                uVar1 = *(ushort *)((longlong)*ppuVar14 + lVar11);
                uVar4 = (uint)uVar1;
                uVar2 = *(ushort *)(local_68 + lVar11);
                uVar13 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_142ad8d1b;
                  }
                  iVar5 = uVar4 - uVar13;
                  goto LAB_142ad8d60;
                }
                if (uVar1 == 0) break;
LAB_142ad8d1b:
                lVar11 = lVar11 + 2;
              }
              iVar5 = 0;
LAB_142ad8d60:
              uVar9 = (uint)CONCAT71(iVar10,iVar5 == 0);
            }
          }
          else {
            uVar9 = (uint)CONCAT71(iVar10,local_60 + iVar5 == 1);
          }
          if (local_68 != 0) {
            FUN_1400020a8();
          }
        }
        bVar16 = (bool)bVar18 == false;
        bVar18 = true;
        if (bVar16) {
          FUN_140056680(&local_68,L"-asdir");
          iVar5 = *(int *)(ppuVar14 + 1);
          if (iVar5 == local_60) {
            bVar18 = true;
            if (1 < iVar5) {
              lVar11 = 0;
              while( true ) {
                uVar1 = *(ushort *)((longlong)*ppuVar14 + lVar11);
                uVar4 = (uint)uVar1;
                uVar2 = *(ushort *)(local_68 + lVar11);
                uVar13 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_142ad8dc7;
                  }
                  iVar5 = uVar4 - uVar13;
                  goto LAB_142ad8e0c;
                }
                if (uVar1 == 0) break;
LAB_142ad8dc7:
                lVar11 = lVar11 + 2;
              }
              iVar5 = 0;
LAB_142ad8e0c:
              bVar18 = iVar5 == 0;
            }
          }
          else {
            bVar18 = local_60 + iVar5 == 1;
          }
          if (local_68 != 0) {
            FUN_1400020a8();
          }
        }
        if (bVar19) {
          bVar19 = true;
        }
        else {
          FUN_140056680(&local_68,L"-asfile");
          iVar5 = *(int *)(ppuVar14 + 1);
          if (iVar5 == local_60) {
            bVar19 = true;
            if (1 < iVar5) {
              lVar11 = 0;
              while( true ) {
                uVar1 = *(ushort *)((longlong)*ppuVar14 + lVar11);
                uVar4 = (uint)uVar1;
                uVar2 = *(ushort *)(local_68 + lVar11);
                uVar13 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_142ad8e74;
                  }
                  iVar5 = uVar4 - uVar13;
                  goto LAB_142ad8eb9;
                }
                if (uVar1 == 0) break;
LAB_142ad8e74:
                lVar11 = lVar11 + 2;
              }
              iVar5 = 0;
LAB_142ad8eb9:
              bVar19 = iVar5 == 0;
            }
          }
          else {
            bVar19 = local_60 + iVar5 == 1;
          }
          if (local_68 != 0) {
            FUN_1400020a8();
          }
        }
      }
      else {
        uVar9 = uVar4;
        if (&local_78 != ppuVar14) {
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar13);
          if (uStack_70._4_4_ == 0 && uVar13 == 0) {
            uStack_70 = (ulonglong)uVar13;
          }
          else {
            local_d0 = *ppuVar14;
            FUN_1446dd670(&local_78,uVar13);
            if (uVar13 != 0) {
              memcpy(local_78,local_d0,(longlong)(int)uVar13 * 2);
            }
          }
        }
      }
      ppuVar14 = ppuVar14 + 2;
      uVar4 = uVar9;
    } while (ppuVar14 != ppuVar15);
    if (1 < (int)uStack_70) {
      if (((bool)bVar18 == false) && (!bVar19)) {
        local_88 = local_78;
        local_80 = (int)uStack_70 + -1;
        cVar3 = FUN_14022f3b8(&local_88,0,0);
        if (cVar3 == '\0') {
          plVar7 = (longlong *)FUN_14054d1d4();
          puVar8 = local_78;
          if ((int)uStack_70 == 0) {
            puVar8 = &DAT_149dfb77a;
          }
          bVar18 = (**(code **)(*plVar7 + 0x48))(plVar7,puVar8);
          bVar18 = bVar18 ^ 1;
        }
        else {
          local_98 = 0;
          uStack_90 = 0;
          FUN_140056680(&local_a8,&DAT_149dfb77a);
          local_68 = local_a8;
          local_60 = local_a0 + -1;
          if (local_a0 == 0) {
            local_60 = 0;
          }
          local_58 = local_78;
          local_50 = (int)uStack_70 + -1;
          if ((int)uStack_70 == 0) {
            local_50 = 0;
          }
          cVar3 = FUN_1404d3d28(&local_58,&local_98);
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          bVar18 = true;
          if (cVar3 != '\0') {
            local_60 = (int)uStack_90 + -1;
            if ((int)uStack_90 == 0) {
              local_60 = 0;
            }
            local_68 = local_98;
            FUN_1427b94de(&local_58,&local_68,&local_a8);
            cVar3 = FUN_1407f0622(&local_58,0xff,0,&local_58);
            bVar18 = cVar3 == '\0';
          }
          if (local_98 != 0) {
            FUN_1400020a8();
          }
        }
      }
      puVar8 = local_78;
      plVar7 = DAT_14c9485b8;
      if ((bVar18 & 1) == 0) {
        local_58 = (undefined2 *)0x0;
        lVar11 = (longlong)(int)uStack_70;
        local_50 = (int)uStack_70;
        if (lVar11 == 0) {
          local_4c = 0;
        }
        else {
          FUN_1446dd670(&local_58,uStack_70 & 0xffffffff,0);
          memcpy(local_58,puVar8,lVar11 * 2);
        }
        local_c8 = &local_58;
        local_c0 = &local_48;
        FUN_141469cae(&local_68);
        (**(code **)(*plVar7 + 0x248))(plVar7,&local_68,bVar17);
      }
      else {
        local_58 = (undefined2 *)0x0;
        lVar11 = (longlong)(int)uStack_70;
        local_50 = (int)uStack_70;
        if (lVar11 == 0) {
          local_4c = 0;
        }
        else {
          FUN_1446dd670(&local_58,uStack_70 & 0xffffffff,0);
          memcpy(local_58,puVar8,lVar11 * 2);
        }
        local_b8 = &local_58;
        local_b0 = &local_48;
        FUN_141469cae(&local_68);
        (**(code **)(*plVar7 + 0x240))(plVar7,&local_68,bVar17,uVar9);
      }
      FUN_1447a1747(local_68,local_60);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ad9266 FUN_142ad9266 body=233 status=ok
// SIG undefined FUN_142ad9266(void)

void FUN_142ad9266(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  
  if ((longlong)*(int *)(param_2 + 1) == 0) {
    return;
  }
  puVar2 = (undefined8 *)*param_2;
  puVar1 = puVar2 + (longlong)*(int *)(param_2 + 1) * 2;
  puVar8 = puVar2;
LAB_142ad9299:
  puVar9 = &DAT_149dfb77a;
  if (*(int *)(puVar8 + 1) != 0) {
    puVar9 = (undefined2 *)*puVar8;
  }
  lVar7 = 0;
  do {
    uVar4 = *(ushort *)((longlong)puVar9 + lVar7);
    uVar5 = (ulonglong)uVar4;
    uVar6 = *(ushort *)((longlong)&DAT_149e06118 + lVar7);
    if (uVar4 == uVar6) {
      if (uVar4 == 0) goto LAB_142ad92f6;
    }
    else {
      if (0x7f < (uVar6 | uVar4)) break;
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
      uVar3 = (ulonglong)uVar6;
      uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[uVar3]) break;
    }
    lVar7 = lVar7 + 2;
  } while( true );
  if ((uVar4 == uVar6) || (puVar8 = puVar8 + 2, puVar8 == puVar1)) goto LAB_142ad92f6;
  goto LAB_142ad9299;
LAB_142ad92f6:
  puVar9 = &DAT_149dfb77a;
  if (*(int *)(puVar2 + 1) != 0) {
    puVar9 = (undefined2 *)*puVar2;
  }
  lVar7 = 0;
  do {
    uVar4 = *(ushort *)((longlong)puVar9 + lVar7);
    uVar5 = (ulonglong)uVar4;
    uVar6 = *(ushort *)((longlong)&DAT_149fc99d2 + lVar7);
    if (uVar4 == uVar6) {
      if (uVar4 == 0) {
        return;
      }
    }
    else {
      if (0x7f < (uVar6 | uVar4)) break;
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
      uVar3 = (ulonglong)uVar6;
      uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[uVar3]) break;
    }
    lVar7 = lVar7 + 2;
  } while( true );
  if (uVar4 == uVar6) {
    return;
  }
  puVar2 = puVar2 + 2;
  if (puVar2 == puVar1) {
    return;
  }
  goto LAB_142ad92f6;
}



// FUNCTION 142ad9350 FUN_142ad9350 body=31 status=ok
// SIG undefined FUN_142ad9350(void)

undefined8 FUN_142ad9350(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ad9370 FUN_142ad9370 body=157 status=ok
// SIG undefined FUN_142ad9370(void)

void FUN_142ad9370(longlong param_1)

{
  uint uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  longlong *local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (longlong *)(param_1 + 0x40);
  local_30 = 0;
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    if (*local_38 == 0) goto LAB_142ad93d9;
    uVar1 = *(uint *)(*local_38 + 8);
  }
  else {
    uVar1 = (uint)*(ushort *)(param_1 + 0x42);
  }
  if (uVar1 != 0) {
    do {
      FUN_144a5de44(&local_38,local_48);
      local_30 = local_30 + 1;
    } while (local_30 != uVar1);
  }
LAB_142ad93d9:
  FUN_1468581d0(&DAT_14c927a10,&local_38,*(undefined4 *)(param_1 + 0x30));
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad940e FUN_142ad940e body=1105 status=ok
// SIG undefined FUN_142ad940e(void)

void FUN_142ad940e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong *plVar11;
  uint *puVar12;
  undefined8 *puVar13;
  undefined ***pppuVar14;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined1 local_b8;
  undefined1 local_a9;
  longlong local_a8;
  longlong *local_98;
  longlong local_88 [4];
  undefined1 *local_68;
  undefined ***local_58;
  undefined **local_48;
  longlong lStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined1 *)(param_1 + 0x560) = 3;
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))();
  local_a8 = 0;
  local_98 = (longlong *)0x0;
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_149fc9a00;
  local_68 = &LAB_1461cfcfa;
  lStack_40 = param_1;
  FUN_14170b918(&local_c8);
  plVar6 = plStack_c0;
  local_b8 = 1;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
    UNLOCK();
  }
  puVar3 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar8 = (uint *)*puVar3;
  if (puVar8 != (uint *)0x0) goto LAB_142ad9542;
  while( true ) {
    uVar10 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar10 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar10 | 1;
      __tlregdtor(&LAB_142ad84f8);
    }
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar7 = *(undefined4 **)(lVar5 + 0x310);
    *(undefined8 *)(lVar5 + 0x310) = 0;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar7 = 0xffffffff;
    *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
    puVar7[0x12] = 0;
    *puVar3 = puVar7;
    FUN_140217a48(puVar3);
    puVar8 = (uint *)*puVar3;
LAB_142ad9542:
    puVar13 = (undefined8 *)(*(longlong *)(puVar8 + 0x10) + 0xfU & 0xfffffffffffffff0);
    puVar12 = (uint *)(puVar13 + 0x22);
    uVar10 = puVar8[0x12];
    if (puVar12 <= puVar8 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar8 + 0x10) = puVar8 + 0x4000;
      LOCK();
      uVar4 = *puVar8;
      *puVar8 = *puVar8 + uVar10 + 1;
      UNLOCK();
      if ((uVar4 ^ uVar10) != 0xffffffff) break;
      puVar8 = (uint *)*puVar3;
      *puVar8 = 0xffffffff;
      *(uint **)(puVar8 + 0x10) = puVar8 + 0x16;
      puVar8[0x12] = 0;
      *puVar3 = puVar8;
      puVar13 = (undefined8 *)((longlong)puVar8 + 0x67U & 0xfffffffffffffff0);
      puVar12 = (uint *)(puVar13 + 0x22);
      uVar10 = 0;
      if (puVar12 <= puVar8 + 0x4000) {
        uVar10 = 1;
        goto LAB_142ad95c2;
      }
    }
  }
  uVar10 = uVar10 + 1;
LAB_142ad95c2:
  *(uint **)(puVar8 + 0x10) = puVar12;
  puVar8[0x12] = uVar10;
  FUN_1447247dc(puVar13,0);
  *puVar13 = TGraphTask<TAsyncGraphTask<void>_>::vftable;
  puVar13[0x16] = local_68;
  puVar13[0x18] = local_58;
  local_58 = (undefined ***)0x0;
  *(undefined4 *)(puVar13 + 0x1c) = local_38;
  *(undefined4 *)((longlong)puVar13 + 0xe4) = uStack_34;
  *(undefined4 *)(puVar13 + 0x1d) = uStack_30;
  *(undefined4 *)((longlong)puVar13 + 0xec) = uStack_2c;
  puVar13[0x1a] = local_48;
  puVar13[0x1b] = lStack_40;
  if (local_68 != (undefined1 *)0x0) {
    local_68 = (undefined1 *)0x0;
  }
  puVar13[0x1e] = local_c8;
  puVar13[0x1f] = plStack_c0;
  local_c8 = 0;
  plStack_c0 = (longlong *)0x0;
  *(undefined1 *)(puVar13 + 0x20) = 0;
  *(undefined4 *)(puVar13 + 0x21) = 0xff;
  if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
  }
  puVar13[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar13[9] = puVar13;
  puVar13[10] = puVar13;
  lVar5 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar5 + 0x30);
  }
  puVar13[0xf] = uVar9;
  puVar13[0x10] = 0xc80000527800b400;
  *(undefined4 *)((longlong)puVar13 + 0x1c) = 0;
  if (puVar13 == (undefined8 *)0x0) {
    local_a9 = 1;
    FUN_1447439e4(0);
  }
  else {
    LOCK();
    *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
    UNLOCK();
    local_a9 = 1;
    FUN_1447439e4(puVar13);
    LOCK();
    piVar2 = (int *)(puVar13 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar13)(puVar13,1);
    }
  }
  plVar11 = plStack_c0;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (local_68 != (undefined1 *)0x0) {
    pppuVar14 = &local_48;
    if (local_58 != (undefined ***)0x0) {
      pppuVar14 = local_58;
    }
    (*(code *)(*pppuVar14)[2])(pppuVar14);
  }
  if (local_a8 != 0) {
    plVar11 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar11 = local_88;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar6 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad9860 FUN_142ad9860 body=530 status=ok
// SIG undefined FUN_142ad9860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ad9860(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  code *local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  longlong local_b0;
  longlong lStack_a8;
  longlong *local_a0;
  longlong *plStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined5 uStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 uStack_44;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar1 = *param_1;
  if (*(char *)(*(longlong *)(lVar1 + 0x160) + 0x78 + (longlong)param_4 * 0x80) == '\0') {
    if (*(char *)(*param_2 + (longlong)param_3) == '\0') {
      if ((*(byte *)(lVar1 + 0xda) & 1) == 0) {
        lVar4 = *(longlong *)(lVar1 + 0x160) + (longlong)param_4 * 0x80;
        local_68 = (longlong *)0x0;
        uStack_60 = 0;
        local_78 = 0;
        lStack_70 = 0;
        local_58 = _DAT_14c83e2d8;
        uStack_54 = uRam000000014c83e2dc;
        uStack_50 = _DAT_14c83e2e0;
        uStack_4c = uRam000000014c83e2e4;
        uStack_48 = DAT_14c83e2e8;
        uStack_44 = 0;
        local_d8 = lVar1;
        local_d0 = lVar4;
        local_c8 = &local_78;
        local_b0 = lVar1;
        lStack_a8 = lVar4;
        if (*(char *)(lVar1 + 0x1b1) == '\0') {
          plVar2 = (longlong *)FUN_14054d1d4();
          uStack_b8 = &local_b0;
          local_a0 = &local_d8;
          local_c0 = FUN_142ada558;
          **(undefined2 **)(lVar4 + 0x18) = 0;
          (**(code **)(*plVar2 + 0xa8))(plVar2,*(undefined8 *)(lVar4 + 0x10));
        }
        else {
          plVar3 = (longlong *)FUN_1400dbadc();
          plVar2 = (longlong *)*plVar3;
          if (plVar2 == (longlong *)0x0) {
            plVar2 = (longlong *)FUN_140e92164();
            *plVar3 = (longlong)plVar2;
          }
          local_e0 = &local_b0;
          plStack_98 = &local_d8;
          local_e8 = FUN_142ad9ee8;
          **(undefined2 **)(lVar4 + 0x18) = 0;
          local_a0 = &local_78;
          (**(code **)(*plVar2 + 0x158))(plVar2,*(undefined8 *)(lVar4 + 0x10));
          local_b0 = local_78;
          lStack_a8 = lStack_70;
          local_78 = 0;
          lStack_70 = 0;
          local_a0 = local_68;
          plStack_98 = (longlong *)uStack_60;
          local_68 = (longlong *)0x0;
          uStack_60 = 0;
          local_90 = local_58;
          uStack_8c = uStack_54;
          uStack_88 = uStack_50;
          uStack_80 = CONCAT14(uStack_44,uStack_48);
          uStack_84 = uStack_4c;
          FUN_14006620a(&local_c0,*(longlong *)(lVar4 + 0x10),
                        (ulonglong)(*(longlong *)(lVar4 + 0x18) - *(longlong *)(lVar4 + 0x10)) >> 1)
          ;
          local_f8 = (undefined4)local_c0;
          uStack_f4 = local_c0._4_4_;
          uStack_f0 = (undefined4)uStack_b8;
          uStack_ec = uStack_b8._4_4_;
          FUN_146feda4c(lVar1 + 0x180,&local_f8,&local_b0);
        }
        *(undefined1 *)(lVar4 + 0x78) = 1;
        FUN_146fedb88(&local_78);
      }
      else {
        *(undefined1 *)(*param_2 + (longlong)param_3) = 1;
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad9a74 FUN_142ad9a74 body=125 status=ok
// SIG undefined FUN_142ad9a74(void)

void FUN_142ad9a74(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar3 = *param_1;
  LOCK();
  piVar1 = (int *)(lVar3 + 0x28);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((iVar2 != -1) && (iVar2 < *(int *)(lVar3 + 0x60))) {
    local_18 = (undefined8 *)*param_1;
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = *(int *)(local_18 + 1) + 1;
      UNLOCK();
    }
    FUN_142adaa70(&local_18);
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_18 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_18)(local_18,1);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad9af2 FUN_142ad9af2 body=939 status=ok
// SIG undefined FUN_142ad9af2(void)

ulonglong FUN_142ad9af2(longlong *param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD dwTlsIndex;
  DWORD DVar7;
  LPVOID lpTlsValue;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_108 [38];
  byte local_e2;
  byte local_e1;
  longlong local_e0;
  int local_d4;
  longlong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  char local_98;
  undefined8 local_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dwTlsIndex = DAT_14c7585d0;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar7 = 0xffffffff;
    LOCK();
    bVar14 = DAT_14c7585d0 != 0xffffffff;
    DVar6 = dwTlsIndex;
    if (bVar14) {
      DVar7 = DAT_14c7585d0;
      DVar6 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar6;
    UNLOCK();
    if (bVar14) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar7;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_b0);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_b0 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a8 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a0 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_98 = '\0';
  local_90 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_b0;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  local_d0 = -0x8000000000000000;
  lVar8 = *param_1;
  if (param_2 == 0) {
    lVar8 = *param_1;
    uVar11 = (ulonglong)*(uint *)(lVar8 + 0x34);
    if (*(int *)(lVar8 + 0x20) + 2 <= (int)*(uint *)(lVar8 + 0x34)) {
      FUN_142ad9a74(param_1);
      lVar8 = *param_1;
    }
    uVar13 = 0;
    if ('\x02' < *(char *)(lVar8 + 0x50)) {
      QueryPerformanceCounter(&local_88);
      auVar17._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar17._8_8_ = 0;
      auVar17 = roundpd(auVar17,auVar17,1);
      local_d0 = (longlong)auVar17._0_8_;
      if (0 < (int)DAT_14c7585cc) {
        uVar13 = (ulonglong)DAT_14c7585cc;
      }
      auVar15._0_8_ = (double)(int)uVar13 * 10000.0 + 0.5;
      auVar15._8_8_ = 0;
      auVar17 = roundpd(auVar15,auVar15,1);
      local_e0 = (longlong)auVar17._0_8_;
      lVar8 = *param_1;
      local_c0 = CONCAT71((int7)(uVar13 >> 8),1);
      goto LAB_142ad9c78;
    }
  }
  else {
    uVar11 = (ulonglong)*(uint *)(lVar8 + 0x34);
  }
  local_c0 = 0;
  local_e0 = 0;
LAB_142ad9c78:
  iVar2 = *(int *)(lVar8 + 0x2c);
  local_b8 = (ulonglong)*(uint *)(lVar8 + 0x30);
  uVar3 = *(undefined8 *)(lVar8 + 0x38);
  uVar4 = *(undefined8 *)(lVar8 + 0x40);
  local_d4 = (int)uVar11 + -1;
  local_e1 = param_2 ^ 1;
  local_c0 = local_c0 ^ 1;
  local_e2 = param_2;
  local_c8 = uVar11;
  do {
    LOCK();
    piVar1 = (int *)(lVar8 + 0x20);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((int)local_c8 < iVar2) {
      bVar14 = local_d4 <= iVar9;
      if (local_d4 <= iVar9) {
        iVar9 = local_d4;
      }
      if ((local_e1 & bVar14) != 0) goto LAB_142ad9dc4;
    }
    iVar9 = iVar9 * (int)local_b8;
    iVar12 = iVar9 + (int)local_b8;
    iVar5 = iVar2;
    if (iVar12 < iVar2) {
      iVar5 = iVar12;
    }
    iVar10 = iVar9;
    if (iVar9 < iVar5) {
      do {
        FUN_142ad9860(uVar4,uVar3,(int)param_1[1],iVar10);
        iVar10 = iVar10 + 1;
      } while (iVar5 != iVar10);
    }
    if (iVar9 < iVar2) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x24);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar11 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        if (local_e2 == 0) {
          (**(code **)(*(longlong *)**(undefined8 **)(*param_1 + 0x48) + 0x10))();
        }
        goto LAB_142ad9dc6;
      }
    }
    if (iVar12 < iVar2 && (char)local_c0 == '\0') {
      QueryPerformanceCounter(&local_88);
      auVar16._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar16._8_8_ = 0;
      auVar17 = roundpd(auVar16,auVar16,1);
      if (local_e0 < (longlong)auVar17._0_8_ - local_d0) {
        *(undefined1 *)((longlong)param_1 + 0xc) = 1;
LAB_142ad9dc4:
        uVar11 = 0;
LAB_142ad9dc6:
        if (local_98 == '\0') {
          local_98 = '\x01';
          *(int *)(local_b0 + 4) = *(int *)(local_b0 + 4) + -1;
          if (local_a0 != local_b0[2]) {
            FUN_14004673c();
          }
          *local_b0 = local_a8;
          local_b0[3] = local_90;
        }
        if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return uVar11 & 0xffffffff;
      }
    }
    else if (iVar2 <= iVar12) goto LAB_142ad9dc4;
    lVar8 = *param_1;
  } while( true );
}



// FUNCTION 142ad9e9e FUN_142ad9e9e body=73 status=ok
// SIG undefined FUN_142ad9e9e(void)

void FUN_142ad9e9e(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
      FUN_142adaa70(param_1,(int)param_1[1]);
      puVar2 = (undefined8 *)*param_1;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
    }
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142ad9edd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 142ad9ee8 FUN_142ad9ee8 body=101 status=ok
// SIG undefined FUN_142ad9ee8(void)

undefined8 FUN_142ad9ee8(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = *(undefined4 *)(param_3 + 0x18);
  local_38 = &local_28;
  local_28 = *(undefined4 *)(param_3 + 8);
  uStack_24 = *(undefined4 *)(param_3 + 0xc);
  uStack_20 = *(undefined4 *)(param_3 + 0x10);
  uStack_1c = *(undefined4 *)(param_3 + 0x14);
  FUN_142ad9f4e(*(undefined8 *)(param_1 + 0x18),*param_2,(*(byte *)(param_3 + 0x1c) & 2) >> 1,
                param_3);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ad9f4e FUN_142ad9f4e body=1545 status=ok
// SIG undefined FUN_142ad9f4e(void)

void FUN_142ad9f4e(longlong *param_1,wchar_t *param_2,char param_3,longlong *param_4,
                  undefined4 *param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  char cVar8;
  undefined4 uVar9;
  size_t sVar10;
  longlong lVar11;
  int iVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  size_t sVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  char local_1b0;
  undefined1 local_1a8;
  longlong *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  wchar_t *local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  wchar_t *local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined4 local_e0;
  wchar_t *local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar11 = *param_1;
  uVar9 = 0;
  sVar18 = 0;
  local_a8 = param_2;
  if (param_2 != (wchar_t *)0x0) {
    sVar18 = wcslen(param_2);
  }
  uStack_a0 = (undefined4)sVar18;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = *(longlong *)(param_1[1] + 0x10);
  local_c0 = (undefined4)((ulonglong)(*(longlong *)(param_1[1] + 0x18) - local_c8) >> 1);
  local_d8 = param_2;
  if (param_2 != (wchar_t *)0x0) {
    sVar10 = wcslen(param_2);
    uVar9 = (int)sVar10;
  }
  local_d0 = uVar9;
  cVar7 = FUN_14022fd12(&local_d8,&local_c8,&local_b8);
  if (cVar7 == '\0') {
    FUN_140056680(&local_88,param_2);
    FUN_140aa5ef8(&local_78,&local_88);
    iVar3 = (uint)uStack_70;
    pwVar15 = local_78;
    local_78 = (wchar_t *)0x0;
    uStack_70 = 0;
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    sVar18 = (size_t)(iVar3 - 1);
    if (iVar3 == 0) {
      sVar18 = 0;
    }
    local_a8 = pwVar15;
    local_f0 = (undefined4)sVar18;
    local_e8 = *(longlong *)(param_1[1] + 0x10);
    local_e0 = (undefined4)((ulonglong)(*(longlong *)(param_1[1] + 0x18) - local_e8) >> 1);
    local_f8 = pwVar15;
    uStack_a0 = local_f0;
    cVar7 = FUN_14022fd12(&local_f8,&local_e8,&local_b8);
    param_2 = pwVar15;
    if (cVar7 == '\0') goto LAB_142ada0c4;
  }
  else {
    pwVar15 = (wchar_t *)0x0;
  }
  local_1a0 = param_4;
  FUN_146818f9a(&local_78,&local_b8);
  uVar16 = uStack_70 & 0xffffffff;
  if ((uint)uStack_70 == uStack_b0) {
    lVar4 = param_1[1];
    lVar5 = *(longlong *)(lVar4 + 0x38);
    lVar6 = *(longlong *)(lVar4 + 0x30);
    if (param_3 == '\0') {
      if (*(char *)(lVar11 + 0x1b1) != '\0') {
        lVar11 = param_1[2];
        iVar3 = *(int *)(lVar11 + 0x18);
        *(uint *)(lVar11 + 0x18) = iVar3 + 1U;
        if (*(uint *)(lVar11 + 0x1c) < iVar3 + 1U) {
          FUN_146fffa86((longlong *)(lVar11 + 0x10),iVar3);
          uVar16 = (ulonglong)uStack_b0;
        }
        plVar1 = (longlong *)(*(longlong *)(lVar11 + 0x10) + (longlong)iVar3 * 0x18);
        *plVar1 = 0;
        plVar1[1] = 0;
        plVar1[2] = 0;
        FUN_14006620a(&local_78,local_b8,uVar16);
        pwVar13 = local_78;
        uVar9 = (uint)uStack_70;
        uVar17 = uStack_70._4_4_;
        if (*plVar1 != 0) {
          FUN_1400020a8();
        }
        *plVar1 = (longlong)pwVar13;
        *(undefined4 *)(plVar1 + 1) = uVar9;
        *(undefined4 *)((longlong)plVar1 + 0xc) = uVar17;
        plVar1[2] = *local_1a0;
      }
      local_138 = (undefined4)local_b8;
      uStack_134 = local_b8._4_4_;
      uStack_130 = uStack_b0;
      uStack_12c = uStack_ac;
      uVar9 = FUN_146fe6bcc();
      cVar7 = (char)uVar9;
      if (cVar7 != '\0') {
        FUN_140feddc0(&local_148,&local_b8);
        cVar8 = FUN_146fe6d28(uVar9,&local_148);
        if (cVar8 == '\0') {
          lVar11 = param_1[1];
          iVar3 = *(int *)(lVar11 + 0x68);
          if (iVar3 <= *(int *)(lVar11 + 0x74)) {
            *(uint *)(lVar11 + 0x68) = iVar3 + 1U;
            if (*(uint *)(lVar11 + 0x6c) < iVar3 + 1U) {
              FUN_146fff8fc((longlong *)(lVar11 + 0x60),iVar3);
            }
            lVar11 = *(longlong *)(lVar11 + 0x60);
            lVar20 = (longlong)iVar3 * 0x40;
            puVar2 = (undefined8 *)(lVar11 + 0x30 + lVar20);
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2 = (undefined8 *)(lVar11 + 0x20 + lVar20);
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2 = (undefined8 *)(lVar11 + 0x10 + lVar20);
            *puVar2 = 0;
            puVar2[1] = 0;
            *(undefined8 *)(lVar11 + lVar20) = 0;
            ((undefined8 *)(lVar11 + lVar20))[1] = 0;
            lVar11 = param_1[1];
          }
          local_158 = local_148;
          uStack_154 = uStack_144;
          uStack_150 = uStack_140;
          uStack_14c = uStack_13c;
          FUN_1404d3f7a(lVar11 + 0x30);
          if (cVar7 == '\x02') {
            local_1a8 = FUN_146fe3cd7(&local_a8);
          }
          else {
            local_1a8 = 0;
          }
          lVar11 = param_1[1];
          iVar3 = *(int *)(lVar11 + 0x74);
          *(int *)(lVar11 + 0x74) = iVar3 + 1;
          uStack_160 = CONCAT44(uStack_ac,uStack_b0);
          local_168 = local_b8;
          local_178 = *(longlong *)(param_1[1] + 0x30);
          local_170 = (undefined4)((ulonglong)(*(longlong *)(param_1[1] + 0x38) - local_178) >> 1);
          local_188 = (undefined4)local_a8;
          uStack_184 = local_a8._4_4_;
          uStack_180 = uStack_a0;
          uStack_17c = uStack_9c;
          local_1b8 = local_1a0;
          local_1b0 = cVar7;
          FUN_146fe3f8a((longlong)iVar3 * 0x40 + *(longlong *)(lVar11 + 0x60));
        }
      }
    }
    else {
      lVar20 = lVar4;
      if (*(char *)(lVar11 + 0x1b1) != '\0') {
        local_1a0 = (longlong *)param_1[2];
        FUN_14006620a(&local_78,local_b8);
        iVar3 = (int)local_1a0[1];
        *(uint *)(local_1a0 + 1) = iVar3 + 1U;
        pwVar13 = local_78;
        uVar9 = (uint)uStack_70;
        uVar17 = uStack_70._4_4_;
        if (*(uint *)((longlong)local_1a0 + 0xc) < iVar3 + 1U) {
          local_190 = local_78;
          local_194 = (uint)uStack_70;
          local_198 = uStack_70._4_4_;
          FUN_1447a1bd6(local_1a0,iVar3);
          pwVar13 = local_190;
          uVar9 = local_194;
          uVar17 = local_198;
        }
        lVar20 = *local_1a0;
        lVar14 = (longlong)iVar3 * 0x10;
        *(wchar_t **)(lVar20 + lVar14) = pwVar13;
        *(undefined4 *)(lVar20 + 8 + lVar14) = uVar9;
        *(undefined4 *)(lVar20 + 0xc + lVar14) = uVar17;
        local_58 = param_5[4];
        local_68 = *param_5;
        uStack_64 = param_5[1];
        uStack_60 = param_5[2];
        uStack_5c = param_5[3];
        FUN_14006620a(&local_78,param_2,sVar18 & 0xffffffff);
        local_108 = (undefined4)local_78;
        uStack_104 = local_78._4_4_;
        uStack_100 = (uint)uStack_70;
        uStack_fc = uStack_70._4_4_;
        FUN_146fedbce(lVar11 + 0x180,&local_108,&local_68);
        lVar20 = param_1[1];
      }
      local_118 = (undefined4)local_b8;
      uStack_114 = local_b8._4_4_;
      uStack_110 = uStack_b0;
      uStack_10c = uStack_ac;
      FUN_1404d3f7a(lVar20 + 0x30);
      local_128 = (undefined4)local_b8;
      uStack_124 = local_b8._4_4_;
      uStack_120 = uStack_b0;
      uStack_11c = uStack_ac;
      cVar7 = FUN_1449073fc(&local_128,0);
      if (cVar7 == '\0') {
        lVar11 = param_1[1];
        iVar3 = *(int *)(lVar11 + 0x58);
        iVar12 = *(int *)(lVar11 + 0x70);
        if (iVar3 <= iVar12) {
          *(uint *)(lVar11 + 0x58) = iVar3 + 1U;
          if (*(uint *)(lVar11 + 0x5c) < iVar3 + 1U) {
            FUN_146fff8fc((longlong *)(lVar11 + 0x50),iVar3);
          }
          lVar11 = *(longlong *)(lVar11 + 0x50);
          lVar20 = (longlong)iVar3 * 0x40;
          puVar2 = (undefined8 *)(lVar11 + 0x30 + lVar20);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(lVar11 + 0x20 + lVar20);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(lVar11 + 0x10 + lVar20);
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined8 *)(lVar11 + lVar20) = 0;
          ((undefined8 *)(lVar11 + lVar20))[1] = 0;
          lVar11 = param_1[1];
          iVar12 = *(int *)(lVar11 + 0x70);
        }
        *(int *)(lVar11 + 0x70) = iVar12 + 1;
        lVar11 = *(longlong *)(lVar11 + 0x50);
        lVar19 = (longlong)iVar12 * 0x40;
        uStack_90 = CONCAT44(uStack_ac,uStack_b0);
        local_98 = local_b8;
        lVar20 = *(longlong *)(param_1[1] + 0x30);
        lVar14 = *(longlong *)(param_1[1] + 0x38);
        local_78 = local_a8;
        uStack_70 = CONCAT44(uStack_9c,uStack_a0);
        FUN_146fe3d88(lVar11 + lVar19);
        local_80 = (undefined4)((ulonglong)(lVar14 - lVar20) >> 1);
        local_88 = lVar20;
        FUN_146fe3d88(lVar11 + lVar19 + 0x10);
        FUN_146fe3d88(lVar11 + lVar19 + 0x20,&local_98);
        *(undefined2 *)(lVar11 + lVar19 + 0x38) = 1;
      }
    }
    *(longlong *)(lVar4 + 0x38) =
         *(longlong *)(lVar4 + 0x38) +
         (longlong)
         ((int)((ulonglong)(*(longlong *)(lVar4 + 0x38) - *(longlong *)(lVar4 + 0x30)) >> 1) -
         (int)((ulonglong)(lVar5 - lVar6) >> 1)) * -2;
  }
LAB_142ada0c4:
  if (pwVar15 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar15);
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ada558 FUN_142ada558 body=98 status=ok
// SIG undefined FUN_142ada558(void)

undefined8 FUN_142ada558(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &local_28;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  FUN_142ad9f4e(*(undefined8 *)(param_1 + 0x10),*param_2,
                (uint)CONCAT71((int7)(local_8 >> 8),*(undefined1 *)(param_3 + 0x20)) & 0xffffff01,
                param_3 + 0x10);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ada5bc FUN_142ada5bc body=434 status=ok
// SIG undefined FUN_142ada5bc(void)

undefined8 * FUN_142ada5bc(undefined8 *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 uVar4;
  longlong lVar5;
  int *piVar6;
  
  *param_1 = &PTR_FUN_149fc9ad0;
  lVar2 = param_1[0xb];
  if ((longlong)*(int *)(param_1 + 0xc) == 0) {
    uVar4 = 0;
  }
  else {
    lVar5 = 0;
    do {
      param_3 = *(longlong *)(lVar2 + 0x40 + lVar5);
      if (param_3 != -1) {
        param_3 = *(longlong *)(lVar2 + 0x40 + lVar5);
      }
      lVar5 = lVar5 + 0x48;
    } while ((longlong)*(int *)(param_1 + 0xc) * 0x48 != lVar5);
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    lVar2 = param_1[0xb];
  }
  FUN_142adaa40(lVar2,uVar4,param_3);
  if (param_1[0xb] != 0) {
    piVar6 = (int *)(param_1[0xb] & 0xffffffffffff0000);
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      piVar3 = piVar6;
      if (*(longlong *)(piVar6 + 0x10) - (longlong)piVar6 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142ad84f8);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        piVar3 = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar6;
        if (piVar3 == (int *)0x0) goto LAB_142ada686;
      }
      _aligned_free(piVar3);
    }
  }
LAB_142ada686:
  *param_1 = &PTR_FUN_149e002e8;
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar6 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      piVar3 = piVar6;
      if (*(longlong *)(piVar6 + 0x10) - (longlong)piVar6 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142ad84f8);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        piVar3 = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar6;
        if (piVar3 == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(piVar3);
    }
  }
  return param_1;
}



// FUNCTION 142ada76e FUN_142ada76e body=53 status=ok
// SIG undefined FUN_142ada76e(void)

void FUN_142ada76e(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x40);
  do {
    puVar1[-3] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
    puVar1[-2] = 0;
    puVar1[-1] = 0xe800000000000020;
    *puVar1 = 0xffffffffffffffff;
    puVar1 = puVar1 + 9;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 142ada7a4 FUN_142ada7a4 body=667 status=ok
// SIG undefined FUN_142ada7a4(void)

void FUN_142ada7a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *_Src;
  longlong lVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *_Memory;
  uint *puVar9;
  int *piVar10;
  void *_Dst;
  
  uVar7 = *(uint *)(param_1 + 1);
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar7) {
      uVar3 = uVar7;
    }
  }
  else {
    uVar3 = (int)((ulonglong)uVar7 * 3 >> 3) + uVar7 + 0x10;
  }
  uVar8 = 0x7fffffff;
  if ((int)uVar7 <= (int)uVar3) {
    uVar8 = (ulonglong)uVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar8,0x48);
  }
  uVar8 = uVar8 * 0x48;
  _Src = (void *)*param_1;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar5 = (uint *)*puVar1;
  if (puVar5 != (uint *)0x0) goto LAB_142ada89f;
  while( true ) {
    uVar7 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar7 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar7 | 1;
      __tlregdtor(&LAB_142ad84f8);
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar4 = *(undefined4 **)(lVar2 + 0x310);
    *(undefined8 *)(lVar2 + 0x310) = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar4 = 0xffffffff;
    *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    FUN_140217a48(puVar1);
    puVar5 = (uint *)*puVar1;
LAB_142ada89f:
    _Dst = (void *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
    puVar9 = (uint *)((longlong)_Dst + uVar8);
    uVar7 = puVar5[0x12];
    if (puVar9 <= puVar5 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
      LOCK();
      uVar3 = *puVar5;
      *puVar5 = *puVar5 + uVar7 + 1;
      UNLOCK();
      if ((uVar3 ^ uVar7) != 0xffffffff) break;
      puVar5 = (uint *)*puVar1;
      *puVar5 = 0xffffffff;
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar1 = puVar5;
      _Dst = (void *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
      puVar9 = (uint *)((longlong)_Dst + uVar8);
      uVar7 = 0;
      if (puVar9 <= puVar5 + 0x4000) {
        uVar7 = 1;
        goto LAB_142ada919;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_142ada919:
  *(uint **)(puVar5 + 0x10) = puVar9;
  puVar5[0x12] = uVar7;
  uVar6 = ((longlong)_Src + 0xffffU & 0xffffffffffff0000) - (longlong)_Src;
  if (uVar6 == 0 || _Src == (void *)0x0) {
    if (_Src == (void *)0x0) goto LAB_142ada9c0;
  }
  else {
    if (uVar6 < uVar8) {
      uVar8 = uVar6;
    }
    memcpy(_Dst,_Src,uVar8);
  }
  piVar10 = (int *)((ulonglong)_Src & 0xffffffffffff0000);
  LOCK();
  *piVar10 = *piVar10 + -1;
  UNLOCK();
  if (*piVar10 == 0) {
    _Memory = piVar10;
    if (*(longlong *)(piVar10 + 0x10) - (longlong)piVar10 == 0x10000) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_142ad84f8);
      }
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      _Memory = *(int **)(lVar2 + 0x310);
      *(int **)(lVar2 + 0x310) = piVar10;
      if (_Memory == (int *)0x0) goto LAB_142ada9c0;
    }
    _aligned_free(_Memory);
  }
LAB_142ada9c0:
  *param_1 = _Dst;
  return;
}



// FUNCTION 142adaa40 FUN_142adaa40 body=47 status=ok
// SIG undefined FUN_142adaa40(void)

void FUN_142adaa40(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar1 + -5);
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 142adaa70 FUN_142adaa70 body=369 status=ok
// SIG undefined FUN_142adaa70(void)

void FUN_142adaa70(longlong *param_1,int param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  undefined1 local_4c;
  undefined8 local_48;
  int local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)(*(longlong *)(*param_1 + 0x58) + (longlong)param_2 * 0x48);
  uVar4 = *(ulonglong *)(*param_1 + 0x18);
  bVar3 = *(byte *)(*param_1 + 0x50);
  uVar6 = (ulonglong)bVar3;
  LOCK();
  plVar2[8] = -1;
  UNLOCK();
  lVar5 = *param_1;
  *param_1 = 0;
  local_4c = 0;
  local_58 = 0;
  local_3c = 0;
  local_50 = param_2;
  local_40 = param_2;
  (**(code **)(plVar2[5] + 0x18))(plVar2 + 5,plVar2);
  plVar2[5] = (longlong)&PTR_FUN_149fc9ae0;
  *plVar2 = lVar5;
  local_48 = 0;
  *(undefined1 *)((longlong)plVar2 + 0xc) = local_4c;
  *(int *)(plVar2 + 1) = local_50;
  FUN_142ad9e9e(&local_48);
  lVar5 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar5 == 0) {
    uVar6 = 1;
    if (bVar3 != 6) {
      uVar6 = (ulonglong)bVar3;
    }
    lVar5 = 0;
  }
  else {
    if (bVar3 == 6) {
      uVar6 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
    }
    lVar5 = *(longlong *)(lVar5 + 0x30);
  }
  plVar2[6] = lVar5;
  plVar2[7] = uVar6 << 0x3b | (uVar4 & 0x1fffffffffffff) << 6 | 0xc000000000000000;
  FUN_142ad9e9e(&local_58);
  LOCK();
  puVar1 = (ulonglong *)(plVar2 + 7);
  uVar4 = *puVar1;
  *puVar1 = *puVar1 | 2;
  UNLOCK();
  if ((uVar4 >> 1 & 1) != 0) {
    if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 142adac00 FUN_142adac00 body=450 status=ok
// SIG undefined FUN_142adac00(void)

void FUN_142adac00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint *puVar8;
  
  if (((ulonglong)param_3 & 7) == 0 && 0xf < param_5) {
    *param_2 = &PTR_FUN_149fc9ae0;
    puVar6 = param_3;
  }
  else {
    *param_2 = &PTR_LAB_149fc9b20;
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x330
             );
    puVar5 = (uint *)*puVar1;
    if (puVar5 != (uint *)0x0) goto LAB_142adacdd;
    while( true ) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_142ad84f8);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar4 = *(undefined4 **)(lVar3 + 0x310);
      *(undefined8 *)(lVar3 + 0x310) = 0;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar4 = 0xffffffff;
      *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
      puVar4[0x12] = 0;
      *puVar1 = puVar4;
      FUN_1467aa772(puVar1);
      puVar5 = (uint *)*puVar1;
LAB_142adacdd:
      puVar6 = (undefined8 *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar8 = (uint *)(puVar6 + 2);
      uVar7 = puVar5[0x12];
      if (puVar8 <= puVar5 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
        LOCK();
        uVar2 = *puVar5;
        *puVar5 = *puVar5 + uVar7 + 1;
        UNLOCK();
        if ((uVar2 ^ uVar7) != 0xffffffff) break;
        puVar5 = (uint *)*puVar1;
        *puVar5 = 0xffffffff;
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
        puVar5[0x12] = 0;
        *puVar1 = puVar5;
        puVar6 = (undefined8 *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
        puVar8 = (uint *)(puVar6 + 2);
        uVar7 = 0;
        if (puVar8 <= puVar5 + 0x4000) {
          uVar7 = 1;
          goto LAB_142adad57;
        }
      }
    }
    uVar7 = uVar7 + 1;
LAB_142adad57:
    *(uint **)(puVar5 + 0x10) = puVar8;
    puVar5[0x12] = uVar7;
    *param_3 = puVar6;
  }
  *puVar6 = *param_4;
  *param_4 = 0;
  *(undefined1 *)((longlong)puVar6 + 0xc) = *(undefined1 *)((longlong)param_4 + 0xc);
  *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_4 + 1);
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return;
}



// FUNCTION 142adadc2 FUN_142adadc2 body=26 status=ok
// SIG undefined FUN_142adadc2(void)

undefined8 FUN_142adadc2(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_142ad9af2(param_2,0);
  }
  return 0;
}



// FUNCTION 142adaddc FUN_142adaddc body=72 status=ok
// SIG undefined FUN_142adaddc(void)

undefined8
FUN_142adaddc(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,char param_5
             )

{
  if (param_5 != '\0') {
    FUN_142ad9af2(param_3,0);
  }
  FUN_142adac00(param_1,param_2 + 0x28,param_2,param_3,param_4);
  return 0;
}



// FUNCTION 142adae56 FUN_142adae56 body=26 status=ok
// SIG undefined FUN_142adae56(void)

undefined8 FUN_142adae56(undefined8 param_1,undefined8 *param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_142ad9af2(*param_2,0);
  }
  return 0;
}



// FUNCTION 142adae70 FUN_142adae70 body=70 status=ok
// SIG undefined FUN_142adae70(void)

undefined8
FUN_142adae70(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             char param_5)

{
  if (param_5 != '\0') {
    FUN_142ad9af2(*param_3,0);
  }
  param_2[5] = &PTR_LAB_149fc9b20;
  *param_2 = *param_3;
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return 0;
}



// FUNCTION 142adaeb6 FUN_142adaeb6 body=179 status=ok
// SIG undefined FUN_142adaeb6(void)

void FUN_142adaeb6(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *_Memory;
  int *piVar4;
  
  uVar2 = *param_2;
  FUN_142ad9e9e(uVar2);
  if (uVar2 != 0) {
    piVar4 = (int *)(uVar2 & 0xffffffffffff0000);
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 == 0) {
      _Memory = piVar4;
      if (*(longlong *)(piVar4 + 0x10) - (longlong)piVar4 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142ad84f8);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar3 + 0x310);
        *(int **)(lVar3 + 0x310) = piVar4;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000142adaf31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 142adaf78 FUN_142adaf78 body=262 status=ok
// SIG undefined FUN_142adaf78(void)

void FUN_142adaf78(longlong param_1,int param_2)

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



// FUNCTION 142adb07e FUN_142adb07e body=1161 status=ok
// SIG undefined FUN_142adb07e(void)

void FUN_142adb07e(longlong *param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  void *_Src;
  longlong *plVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  LARGE_INTEGER *pLVar11;
  LARGE_INTEGER *pLVar12;
  undefined1 auStack_6f8 [32];
  undefined1 local_6d8;
  undefined1 local_6d0;
  undefined1 local_6c8;
  void *local_6b8;
  int local_6b0;
  undefined **local_6a8 [5];
  byte local_680;
  longlong local_620;
  longlong *local_618;
  longlong local_610;
  longlong lStack_608;
  longlong local_600;
  undefined8 local_5f8;
  undefined2 *local_5f0;
  int local_5e8;
  undefined2 *local_5e0;
  int local_5d8;
  undefined4 local_5d4;
  undefined4 local_5cc;
  LARGE_INTEGER local_5c8 [5];
  undefined8 local_59c;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_54c;
  longlong local_528;
  ulonglong *local_520;
  byte local_4fe;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_6f8;
  puVar6 = DAT_14c99d680;
  if (DAT_14c99d688 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  lVar5 = *param_1;
  plVar10 = (longlong *)((longlong)*param_2 * 0x10 + *(longlong *)param_1[3]);
  FUN_140002266(&local_6b8,L"%s_%d.bin",puVar6);
  _Src = local_6b8;
  if ((local_6b0 < 2) || ((*(byte *)(lVar5 + 0x92) & 1) == 0)) {
    lVar5 = 0;
  }
  else {
    local_5e0 = (undefined2 *)0x0;
    local_5d8 = local_6b0;
    if ((longlong)local_6b0 == 0) {
      local_5d4 = 0;
      iVar8 = 0;
    }
    else {
      FUN_1446dd670(&local_5e0,local_6b0,0);
      memcpy(local_5e0,_Src,(longlong)local_6b0 * 2);
      iVar8 = local_5d8;
    }
    puVar6 = local_5e0;
    local_5f0 = (undefined2 *)0x0;
    local_5e8 = iVar8;
    FUN_1446dd670(&local_5f0,iVar8 + (uint)(iVar8 == 0) + 4,0);
    if (iVar8 != 0) {
      memcpy(local_5f0,puVar6,(longlong)iVar8 * 2);
    }
    FUN_1400020e8(&local_5f0,L".tmp",4);
    plVar4 = (longlong *)FUN_14054d1d4();
    puVar6 = local_5f0;
    if (local_5e8 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    lVar5 = 0;
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,puVar6,0);
    if (plVar4 != (longlong *)0x0) {
      local_5f8 = 0x2779e7e000000013;
      puVar3 = (ulonglong *)plVar4[1];
      puVar1 = (undefined8 *)*puVar3 + 1;
      if ((undefined8 *)puVar3[1] < puVar1) {
        if ((*(byte *)((longlong)plVar4 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar4 + 0x170))(plVar4,&local_5f8,8);
        }
        else {
          FUN_146821949(plVar4,&local_5f8);
        }
      }
      else {
        local_5f8 = *(undefined8 *)*puVar3;
        *puVar3 = (ulonglong)puVar1;
      }
      FUN_1407134c4(local_6a8);
      local_620 = plVar4[0x11];
      plVar4[0x11] = (longlong)local_6a8;
      local_6a8[0] = &PTR_FUN_149fc88c0;
      uVar9 = (ulonglong)((local_680 & 1) << 0x16) ^ 0x400000;
      local_610 = 0;
      lStack_608 = 0;
      local_600 = 0;
      local_618 = plVar4;
      if ((local_680 & 1) == 0) {
        local_610 = FUN_14001cc68(uVar9);
      }
      local_600 = uVar9 + local_610;
      local_6a8[0] = &PTR_FUN_149fc8660;
      lStack_608 = local_610;
      memset(local_5c8,0,0xa0);
      local_59c = 0xffffffff00000080;
      local_578 = 0;
      uStack_570 = 0;
      local_54c = 0xffffffff00000080;
      FUN_14700aa36(&local_528,local_5c8,local_6a8);
      FUN_146ffb54a(local_5c8);
      QueryPerformanceCounter(local_5c8);
      local_5cc = (undefined4)plVar10[1];
      puVar2 = (undefined4 *)*local_520 + 1;
      if ((undefined4 *)local_520[1] < puVar2) {
        if ((local_4fe & 2) == 0) {
          (**(code **)(local_528 + 0x170))(&local_528,&local_5cc,4);
        }
        else {
          FUN_14572512c(&local_528,&local_5cc);
        }
      }
      else {
        local_5cc = *(undefined4 *)*local_520;
        *local_520 = (ulonglong)puVar2;
      }
      if ((longlong)(int)plVar10[1] != 0) {
        pLVar11 = (LARGE_INTEGER *)*plVar10;
        pLVar12 = pLVar11 + (longlong)(int)plVar10[1] * 2;
        do {
          local_5c8[0] = *pLVar11;
          (**(code **)(local_528 + 0x160))(&local_528,local_5c8);
          FUN_146fead22(pLVar11[1].QuadPart,&local_528);
          pLVar11 = pLVar11 + 2;
        } while (pLVar11 != pLVar12);
      }
      FUN_14700acd0(&local_528);
      FUN_1470026c2(local_6a8);
      lVar5 = (**(code **)(*plVar4 + 0x30))(plVar4);
      (**(code **)*plVar4)(plVar4,1);
      plVar10 = (longlong *)FUN_14054d1d4();
      puVar6 = &DAT_149dfb77a;
      if (local_5e8 != 0) {
        puVar6 = local_5f0;
      }
      puVar7 = &DAT_149dfb77a;
      if (local_5d8 != 0) {
        puVar7 = local_5e0;
      }
      local_6c8 = 0;
      local_6d0 = 0;
      local_6d8 = 0;
      (**(code **)(*plVar10 + 0x40))(plVar10,puVar7,puVar6,1);
    }
    if (local_5f0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_5e0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  LOCK();
  *(longlong *)param_1[2] = *(longlong *)param_1[2] + lVar5;
  UNLOCK();
  if (local_6b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_6f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142adb508 FUN_142adb508 body=94 status=ok
// SIG undefined FUN_142adb508(void)

void FUN_142adb508(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x118);
    do {
      FUN_1447a1747(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_146ff7a86(puVar1 + -0x3c);
      if (*(longlong *)(puVar1 + -0x40) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 0x4a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 142adb566 FUN_142adb566 body=362 status=ok
// SIG undefined FUN_142adb566(void)

void FUN_142adb566(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
  uVar5 = lVar4 * 0x128;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_142adb5fb;
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
LAB_142adb5fb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x128)) {
    uVar7 = uVar5 / 0x128 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x128,8);
  return;
}



// FUNCTION 142adb6d0 FUN_142adb6d0 body=329 status=ok
// SIG undefined FUN_142adb6d0(void)

void FUN_142adb6d0(longlong *param_1,int *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined1 auStack_308 [32];
  int local_2e8;
  undefined8 local_2e0;
  int local_2d8;
  undefined8 local_2d0;
  int local_2c8;
  char local_2b9;
  undefined1 local_2b8 [648];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_308;
  lVar1 = *param_1;
  lVar5 = (longlong)*param_2 * 0x128 + *(longlong *)param_1[1];
  if ((*(char *)(lVar1 + 0x22c) == '\0') && (*(int *)(lVar1 + 0x7c) != 0)) {
    *(undefined1 *)(lVar5 + 0x122) = 1;
  }
  else {
    puVar2 = *(undefined8 **)(lVar5 + 0x10);
    *(undefined1 *)(lVar5 + 0x120) = 0;
    *(undefined4 *)(lVar5 + 0x20) = 0;
    if (*(int *)(lVar5 + 0x24) < 0) {
      FUN_140944cba(lVar5 + 0x18,0);
    }
    FUN_147017cf6();
    local_2d0 = *puVar2;
    local_2c8 = *(int *)(puVar2 + 1) + -1;
    if (*(int *)(puVar2 + 1) == 0) {
      local_2c8 = 0;
    }
    local_2e0 = puVar2[2];
    local_2d8 = *(int *)(puVar2 + 3) + -1;
    if (*(int *)(puVar2 + 3) == 0) {
      local_2d8 = 0;
    }
    cVar3 = FUN_147017f02(local_2b8,&local_2e0,&local_2d0,&local_2b9);
    if (cVar3 == '\0') {
      *(byte *)(lVar5 + 0x120) = (DAT_14c867cfc ^ 1) & local_2b9 == '\x05';
      uVar4 = 0;
    }
    else {
      local_2e8 = (uint)*(byte *)(lVar1 + 0x6d) + (uint)*(byte *)(lVar1 + 0x6e) * 2;
      uVar4 = FUN_146fe98e8(local_2b8,lVar5 + 0x18,lVar5 + 0x28,lVar5 + 0x110);
    }
    FUN_147017d8a(local_2b8);
    *(undefined1 *)(lVar5 + 0x121) = uVar4;
  }
  if ((local_30 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142adb81a FUN_142adb81a body=3994 status=ok
// SIG undefined FUN_142adb81a(void)

void FUN_142adb81a(undefined8 *param_1,int *param_2)

{
  uint *puVar1;
  int *piVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  size_t _Size;
  undefined1 auVar5 [16];
  DWORD DVar6;
  LARGE_INTEGER LVar7;
  byte bVar8;
  DWORD dwTlsIndex;
  DWORD DVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  ulonglong *puVar19;
  LPVOID lpTlsValue;
  int iVar20;
  undefined2 *puVar21;
  uint uVar22;
  void *pvVar23;
  longlong *plVar24;
  void *pvVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  bool bVar28;
  undefined1 auStack_2c8 [32];
  undefined1 local_2a8;
  void *local_298;
  longlong local_290;
  LARGE_INTEGER local_288;
  ulonglong *puStack_280;
  undefined8 local_278;
  undefined8 local_268;
  int local_260;
  longlong *local_258;
  ulonglong uStack_250;
  ulonglong local_248;
  undefined8 *local_238;
  undefined8 *puStack_230;
  longlong local_228;
  undefined5 uStack_220;
  undefined3 uStack_21b;
  undefined5 uStack_218;
  LARGE_INTEGER local_208;
  ulonglong *local_200;
  byte local_1df;
  byte local_1de;
  undefined1 local_141;
  uint local_140;
  undefined1 local_139;
  LARGE_INTEGER local_138;
  undefined8 uStack_130;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong *local_e0;
  longlong local_c0;
  longlong local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  pvVar23 = (void *)(longlong)*param_2;
  puVar4 = (undefined8 *)(*(longlong *)*param_1 + (longlong)pvVar23 * 0x10);
  local_228 = 0;
  uStack_220 = 0;
  uStack_21b = 0;
  uStack_218 = 0;
  if (*(int *)(*(longlong *)*param_1 + 8 + (longlong)pvVar23 * 0x10) == 0) {
    puVar21 = &DAT_149dfb77a;
  }
  else {
    puVar21 = (undefined2 *)*puVar4;
  }
  FUN_147002506(&local_238,puVar21);
  plVar10 = TlsGetValue(DAT_14c896140);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
    *plVar10 = 0;
    plVar10[1] = 0;
    *(undefined4 *)(plVar10 + 2) = 0;
    TlsSetValue(DAT_14c896140,plVar10);
  }
  plVar24 = (longlong *)plVar10[1];
  if (plVar24 == (longlong *)0x0) {
    plVar24 = (longlong *)*plVar10;
    if (plVar24 == (longlong *)0x0) {
      uVar22 = DAT_14c896180.s.LowPart;
      LVar7 = DAT_14c896180;
      while (DAT_14c896180 = LVar7, local_138 = LVar7, (LVar7.QuadPart & 0x3ffffffU) != 0) {
        local_208.QuadPart = (LVar7.QuadPart & 0xfffffffffc000000U) + 0x4000000;
        if ((ulonglong)local_208.QuadPart >> 0x1a < (ulonglong)LVar7.QuadPart >> 0x1a) {
          FUN_14000f986(0x3a83126f);
        }
        uVar26 = (ulonglong)((uVar22 & 0x3ffffff) >> 0xe);
        uVar27 = (ulonglong)(LVar7.s.LowPart & 0x3fff);
        local_208.QuadPart =
             local_208.QuadPart & 0xfffffffffc000000U |
             (ulonglong)*(uint *)(*(longlong *)(&DAT_14c833b00 + uVar26 * 8) + 0x10 + uVar27 * 0x18)
        ;
        LOCK();
        bVar28 = local_138.QuadPart == DAT_14c896180.QuadPart;
        LVar7.QuadPart = local_208.QuadPart;
        if (!bVar28) {
          LVar7 = DAT_14c896180;
        }
        DAT_14c896180 = LVar7;
        UNLOCK();
        if (bVar28) {
          *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar26 * 8) + uVar27 * 0x18 + 0x10) = 0;
          plVar24 = *(longlong **)
                     (*(longlong *)(&DAT_14c833b00 + uVar26 * 8) + 8 +
                     (ulonglong)(uVar22 & 0x3fff) * 0x18);
          FUN_1447d080c(uVar22 & 0x3ffffff);
          plVar10[1] = (longlong)plVar24;
          if (plVar24 == (longlong *)0x0) goto LAB_142adba54;
          goto LAB_142adba8f;
        }
        uVar22 = DAT_14c896180.s.LowPart;
        LVar7 = DAT_14c896180;
      }
      plVar10[1] = 0;
LAB_142adba54:
      puVar11 = (undefined8 *)FUN_14001cc68(0x10000,0);
      plVar10[1] = (longlong)puVar11;
      iVar20 = 0xff;
      do {
        puVar14 = puVar11 + 0x20;
        *puVar11 = puVar14;
        iVar20 = iVar20 + -1;
        puVar11 = puVar14;
      } while (iVar20 != 0);
      *puVar14 = 0;
      plVar24 = (longlong *)plVar10[1];
    }
    else {
      plVar10[1] = (longlong)plVar24;
      *plVar10 = 0;
    }
LAB_142adba8f:
    *(undefined4 *)(plVar10 + 2) = 0x100;
    iVar20 = 0x100;
  }
  else {
    iVar20 = (int)plVar10[2];
  }
  plVar10[1] = *plVar24;
  *(int *)(plVar10 + 2) = iVar20 + -1;
  *plVar24 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  plVar24[1] = (longlong)&DAT_100000002;
  plVar24[2] = 0;
  *(undefined4 *)(plVar24 + 3) = 0;
  *(undefined4 *)(plVar24 + 4) = 0xffffffff;
  plVar24[6] = 0;
  plVar24[7] = 0x100000000;
  *(undefined1 *)(plVar24 + 8) = 1;
  plVar24[0xe] = (longlong)
                 LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
  plVar24[0xf] = 0;
  plVar24[0x10] = -0x17ffffffffffffe0;
  plVar24[0x12] = 0;
  plVar24[0x13] = 0x100000000;
  *(undefined2 *)(plVar24 + 0x14) = 0;
  LOCK();
  bVar28 = (char)plVar24[8] == '\x01';
  if (bVar28) {
    *(char *)(plVar24 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar28) {
    FUN_14008cdb0(plVar24 + 8);
  }
  *plVar24 = (longlong)&PTR_FUN_149fc9c58;
  if (*(code **)(plVar24[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(plVar24[0xe] + 0x18))(plVar24 + 0xe,plVar24 + 9);
  }
  plVar24[0xe] = (longlong)
                 LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  plVar24[9] = (longlong)plVar24;
  plVar24[10] = (longlong)plVar24;
  local_290 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(longlong *)(local_290 + 0x2b8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(local_290 + 0x2b8) + 0x30);
  }
  plVar24[0xf] = lVar12;
  plVar24[0x10] = -0x37ffffad80d92a00;
  *(undefined4 *)((longlong)plVar24 + 0x1c) = 0;
  plVar24[0x15] = (longlong)&local_238;
  *plVar24 = (longlong)&PTR_FUN_149fc9c48;
  local_138.s.LowPart._0_1_ = 1;
  FUN_1447439e4(plVar24);
  if (puStack_230 == (undefined8 *)0x0) {
    local_258 = (longlong *)0x0;
    uStack_250 = 0;
    local_248 = 0;
  }
  else {
    plVar10 = *(longlong **)((longlong)puStack_230 + 8);
    local_248 = *(ulonglong *)((longlong)puStack_230 + 0x10);
    local_258 = plVar10;
    uStack_250 = local_248;
    if (7 < local_248) {
      local_258 = plVar10 + 1;
      uStack_250 = local_248 - 8;
      if (*plVar10 == 0x2779e7e000000013) {
        local_268 = *puVar4;
        local_260 = *(int *)(puVar4 + 1) + -1;
        if (*(int *)(puVar4 + 1) == 0) {
          local_260 = 0;
        }
        FUN_147002570(&local_138,&local_258);
        FUN_14614a106(&local_208,&local_138,0,0x13);
        if ((local_1df & 2) == 0) {
          QueryPerformanceCounter(&local_288);
          local_140 = 0;
          puVar1 = (uint *)*local_200 + 1;
          if ((uint *)local_200[1] < puVar1) {
            if ((local_1de & 2) == 0) {
              (**(code **)(local_208.QuadPart + 0x170))(&local_208,&local_140,4);
            }
            else {
              FUN_14572512c(&local_208,&local_140);
            }
          }
          else {
            local_140 = *(uint *)*local_200;
            *local_200 = (ulonglong)puVar1;
          }
          lVar12 = (**(code **)(local_208.QuadPart + 0x30))(&local_208);
          lVar13 = (**(code **)(local_208.QuadPart + 0x28))(&local_208);
          if ((int)local_140 < 0 || (local_1df & 2) != 0) {
LAB_142adbd8f:
            FUN_14572541c(&local_208);
            goto LAB_142adbd9c;
          }
          lVar12 = lVar12 - lVar13;
          lVar13 = lVar12 + 3;
          if (-1 < lVar12) {
            lVar13 = lVar12;
          }
          if (lVar13 >> 2 < (longlong)(ulonglong)local_140) goto LAB_142adbd8f;
          if ((ulonglong)local_140 == 0) {
            local_288.QuadPart = 0;
            puStack_280 = (ulonglong *)0x0;
            local_278 = 0x100000000;
          }
          else {
            local_2a8 = 2;
            FUN_145c78a6c(&local_141,0,0,0);
            uVar22 = local_140;
            uVar26 = (ulonglong)(int)local_140;
            _Size = uVar26 * 8;
            lVar12 = _Size + (_Size == 0);
            if ((longlong)uVar26 < 0) {
              lVar12 = -1;
            }
            local_298 = (void *)FUN_14001cc68(lVar12);
            if (uVar26 != 0) {
              memset(local_298,0,_Size);
            }
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar26;
            uVar27 = 0xffffffffffffffff;
            if (SUB168(auVar5 * ZEXT816(0x110),8) == 0) {
              uVar27 = SUB168(auVar5 * ZEXT816(0x110),0) | 8;
            }
            puVar19 = (ulonglong *)FUN_14001cc68(uVar27,0x10);
            puVar3 = puVar19 + 1;
            *puVar19 = uVar26;
            if (uVar22 != 0) {
              lVar12 = uVar26 * 0x110;
              puVar19 = puVar19 + 6;
              do {
                puVar19[-3] = 0;
                puVar19[-2] = 0;
                puVar19[-5] = 0;
                puVar19[-4] = 0;
                puVar19[-1] = 0;
                FUN_146ff79cc(puVar19);
                puVar19 = puVar19 + 0x22;
                lVar12 = lVar12 + -0x110;
              } while (lVar12 != 0);
              if (0 < (int)local_140) {
                lVar12 = 0;
                pvVar25 = local_298;
                puVar19 = puVar3;
                do {
                  (**(code **)(local_208.QuadPart + 0x160))(&local_208,pvVar25);
                  FUN_146feae70(puVar19,&local_208);
                  if ((local_1df & 2) != 0) break;
                  lVar12 = lVar12 + 1;
                  puVar19 = puVar19 + 0x22;
                  pvVar25 = (void *)((longlong)pvVar25 + 8);
                } while (lVar12 < (int)local_140);
              }
            }
            if ((local_1df & 2) == 0) {
              local_288.QuadPart = (LONGLONG)local_298;
              local_278._0_5_ = CONCAT14(1,local_140);
              puStack_280 = puVar3;
            }
            else {
              local_288.QuadPart = 0;
              puStack_280 = (ulonglong *)0x0;
              local_278 = 0;
              FUN_146ffb142(puVar3);
              if (local_298 != (void *)0x0) {
                FUN_1400020a8();
              }
            }
            dwTlsIndex = DAT_14c75ebfc;
            if (DAT_14c75ebfc == 0xffffffff) {
              dwTlsIndex = TlsAlloc();
              DVar9 = 0xffffffff;
              LOCK();
              bVar28 = DAT_14c75ebfc != 0xffffffff;
              DVar6 = dwTlsIndex;
              if (bVar28) {
                DVar9 = DAT_14c75ebfc;
                DVar6 = DAT_14c75ebfc;
              }
              DAT_14c75ebfc = DVar6;
              UNLOCK();
              if (bVar28) {
                TlsFree(dwTlsIndex);
                dwTlsIndex = DVar9;
              }
            }
            lpTlsValue = TlsGetValue(dwTlsIndex);
            if (lpTlsValue == (LPVOID)0x0) {
              lpTlsValue = (LPVOID)FUN_146271634(&local_139);
              FUN_140fddf04(lpTlsValue);
              TlsSetValue(dwTlsIndex,lpTlsValue);
            }
            *(int *)((longlong)lpTlsValue + 0x18) = *(int *)((longlong)lpTlsValue + 0x18) + -1;
            FUN_145a9f146((longlong)lpTlsValue + 0x10);
          }
        }
        else {
LAB_142adbd9c:
          local_288.QuadPart = 0;
          puStack_280 = (ulonglong *)0x0;
          local_278 = 0;
        }
        FUN_145a4210a(&local_208);
        FUN_147002666(&local_228,&local_288);
        FUN_146ffb142(puStack_280);
        if ((void *)local_288.QuadPart != (void *)0x0) {
          FUN_1400020a8();
        }
        local_138.QuadPart = (LONGLONG)&PTR_FUN_149fc9c70;
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        local_138.QuadPart = (LONGLONG)&PTR__purecall_149e35f70;
        if (local_e0 != (longlong *)0x0) {
          if (*local_e0 != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(local_e0);
        }
        if (local_c0 != 0) {
          if (*(longlong *)(local_c0 + 0x40) != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(local_c0);
        }
      }
    }
  }
  if (plVar24 != (longlong *)0x0) {
    if (DAT_14c87e718 == '\0') {
      iVar20 = *(int *)((longlong)plVar24 + 0x1c);
      if ((2 < iVar20) && (bVar8 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar8 < 3)
         ) {
        local_138.QuadPart = 0x20100000001;
        uStack_130 = 0x30100000101;
        local_128 = DAT_14c7585c8;
        local_124 = DAT_14c7585c8 | 0x200;
        local_120 = DAT_14c7585c8 | 0x100;
        local_11c = DAT_14c7585c8 | 0x300;
        local_118 = 0;
        uStack_114 = 0x200;
        uStack_110 = 0x100;
        uStack_10c = 0x300;
        if (*(byte *)((longlong)&local_138 + (ulonglong)(iVar20 - 3) * 4) == bVar8)
        goto LAB_142adc709;
      }
      QueryPerformanceCounter(&local_138);
      uStack_130 = 0xffffffffffffffff;
      FUN_140056092(plVar24,&local_138);
    }
    else {
LAB_142adc709:
      FUN_140082318(plVar24);
    }
  }
  puVar11 = puStack_230;
  puVar4 = local_238;
  local_238 = (undefined8 *)0x0;
  puStack_230 = (undefined8 *)0x0;
  puVar14 = TlsGetValue(DAT_14c896140);
  if (puVar14 == (undefined8 *)0x0) {
    puVar14 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar14 = 0;
    puVar14[1] = 0;
    *(undefined4 *)(puVar14 + 2) = 0;
    TlsSetValue(DAT_14c896140,puVar14);
  }
  puVar15 = (undefined8 *)puVar14[1];
  if (puVar15 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)*puVar14;
    if (puVar15 == (undefined8 *)0x0) {
      uVar22 = DAT_14c896180.s.LowPart;
      local_298 = pvVar23;
      LVar7 = DAT_14c896180;
      while (DAT_14c896180 = LVar7, local_138 = LVar7, (LVar7.QuadPart & 0x3ffffffU) != 0) {
        local_208.QuadPart = (LVar7.QuadPart & 0xfffffffffc000000U) + 0x4000000;
        if ((ulonglong)local_208.QuadPart >> 0x1a < (ulonglong)LVar7.QuadPart >> 0x1a) {
          FUN_14000f986(0x3a83126f);
        }
        uVar26 = (ulonglong)((uVar22 & 0x3ffffff) >> 0xe);
        uVar27 = (ulonglong)(LVar7.s.LowPart & 0x3fff);
        local_208.QuadPart =
             local_208.QuadPart & 0xfffffffffc000000U |
             (ulonglong)*(uint *)(*(longlong *)(&DAT_14c833b00 + uVar26 * 8) + 0x10 + uVar27 * 0x18)
        ;
        LOCK();
        bVar28 = local_138.QuadPart == DAT_14c896180.QuadPart;
        LVar7.QuadPart = local_208.QuadPart;
        if (!bVar28) {
          LVar7 = DAT_14c896180;
        }
        DAT_14c896180 = LVar7;
        UNLOCK();
        if (bVar28) {
          *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar26 * 8) + uVar27 * 0x18 + 0x10) = 0;
          puVar15 = *(undefined8 **)
                     (*(longlong *)(&DAT_14c833b00 + uVar26 * 8) + 8 +
                     (ulonglong)(uVar22 & 0x3fff) * 0x18);
          FUN_1447d080c(uVar22 & 0x3ffffff);
          puVar14[1] = puVar15;
          pvVar23 = local_298;
          if (puVar15 == (undefined8 *)0x0) goto LAB_142adc061;
          goto LAB_142adc090;
        }
        uVar22 = DAT_14c896180.s.LowPart;
        LVar7 = DAT_14c896180;
      }
      puVar14[1] = 0;
LAB_142adc061:
      pvVar23 = local_298;
      puVar15 = (undefined8 *)FUN_14001cc68(0x10000,0);
      puVar14[1] = puVar15;
      iVar20 = 0xff;
      puVar16 = puVar15;
      do {
        puVar17 = puVar16 + 0x20;
        *puVar16 = puVar17;
        iVar20 = iVar20 + -1;
        puVar16 = puVar17;
      } while (iVar20 != 0);
    }
    else {
      puVar14[1] = puVar15;
      puVar17 = puVar14;
    }
    *puVar17 = 0;
LAB_142adc090:
    *(undefined4 *)(puVar14 + 2) = 0x100;
    iVar20 = 0xff;
  }
  else {
    iVar20 = *(int *)(puVar14 + 2) + -1;
  }
  puVar14[1] = *puVar15;
  *(int *)(puVar14 + 2) = iVar20;
  *puVar15 = UE::Tasks::Private::FTaskBase::vftable;
  puVar15[1] = &DAT_100000002;
  puVar15[2] = 0;
  *(undefined4 *)(puVar15 + 3) = 0;
  *(undefined4 *)(puVar15 + 4) = 0xffffffff;
  puVar15[6] = 0;
  puVar15[7] = 0x100000000;
  *(undefined1 *)(puVar15 + 8) = 1;
  puVar15[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
  puVar15[0xf] = 0;
  puVar15[0x10] = 0xe800000000000020;
  puVar15[0x12] = 0;
  puVar15[0x13] = 0x100000000;
  *(undefined2 *)(puVar15 + 0x14) = 0;
  LOCK();
  bVar28 = *(char *)(puVar15 + 8) == '\x01';
  if (bVar28) {
    *(char *)(puVar15 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar28) {
    FUN_14008cdb0(puVar15 + 8);
  }
  plVar10 = (longlong *)(local_290 + 0x2b8);
  *puVar15 = &PTR_FUN_149fc9ee0;
  if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
  }
  puVar15[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar15[9] = puVar15;
  puVar15[10] = puVar15;
  if (*plVar10 == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = *(undefined8 *)(*plVar10 + 0x30);
  }
  puVar15[0xf] = uVar18;
  puVar15[0x10] = 0xc80000527f26f400;
  *(undefined4 *)((longlong)puVar15 + 0x1c) = 0;
  puVar15[0x15] = puVar4;
  puVar15[0x16] = puVar11;
  *puVar15 = &PTR_FUN_149fc9ed0;
  local_138.s.LowPart._0_1_ = 1;
  FUN_1447439e4(puVar15);
  if (DAT_14c872bf0 == '\x01') {
    if (puVar15 == (undefined8 *)0x0) goto LAB_142adc24a;
    if (DAT_14c87e718 == '\0') {
      iVar20 = *(int *)((longlong)puVar15 + 0x1c);
      if ((2 < iVar20) && (bVar8 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar8 < 3)
         ) {
        local_138.QuadPart = 0x20100000001;
        uStack_130 = 0x30100000101;
        local_128 = DAT_14c7585c8;
        local_124 = DAT_14c7585c8 | 0x200;
        local_120 = DAT_14c7585c8 | 0x100;
        local_11c = DAT_14c7585c8 | 0x300;
        local_118 = 0;
        uStack_114 = 0x200;
        uStack_110 = 0x100;
        uStack_10c = 0x300;
        if (*(byte *)((longlong)&local_138 + (ulonglong)(iVar20 - 3) * 4) == bVar8)
        goto LAB_142adc7a8;
      }
      QueryPerformanceCounter(&local_208);
      local_200 = (ulonglong *)0xffffffffffffffff;
      FUN_140056092(puVar15,&local_208);
    }
    else {
LAB_142adc7a8:
      FUN_140082318(puVar15);
    }
  }
  else if (puVar15 == (undefined8 *)0x0) goto LAB_142adc24a;
  LOCK();
  piVar2 = (int *)(puVar15 + 1);
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (*piVar2 == 0) {
    (**(code **)*puVar15)(puVar15,1);
  }
LAB_142adc24a:
  if (plVar24 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar24 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar24)(plVar24,1);
    }
  }
  if (puStack_230 != (undefined8 *)0x0) {
    (**(code **)*puStack_230)(puStack_230,1);
  }
  if (local_238 != (undefined8 *)0x0) {
    (**(code **)*local_238)(local_238,1);
  }
  FUN_147002666((longlong)pvVar23 * 0x18 + *(longlong *)param_1[1],&local_228);
  FUN_146ffb142(CONCAT35(uStack_21b,uStack_220));
  if (local_228 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142adc7b6 FUN_142adc7b6 body=547 status=ok
// SIG undefined FUN_142adc7b6(void)

longlong * FUN_142adc7b6(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142adca02 FUN_142adca02 body=110 status=ok
// SIG undefined FUN_142adca02(void)

undefined8 * FUN_142adca02(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142adca70 FUN_142adca70 body=276 status=ok
// SIG undefined FUN_142adca70(void)

void FUN_142adca70(longlong param_1,void *param_2,ulonglong param_3)

{
  void *_Src;
  ulonglong _Size;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong local_50;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  _Size = *(ulonglong *)(param_1 + 0xb0);
  if (_Size < param_3) {
    do {
      if ((*(byte *)(param_1 + 0x29) & 2) != 0) goto LAB_142adcb7b;
      _Src = *(void **)(param_1 + 0xa8);
      *(ulonglong *)(param_1 + 0xa8) = (longlong)_Src + _Size;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      if (_Size != 0) {
        memcpy(param_2,_Src,_Size);
      }
      FUN_142adcba2(&local_58,param_1 + 0x90);
      if (local_48 == '\0') {
        FUN_14572541c(param_1);
        goto LAB_142adcb7b;
      }
      param_2 = (void *)((longlong)param_2 + _Size);
      param_3 = param_3 - _Size;
      *(longlong *)(param_1 + 0xa8) = local_58;
      *(ulonglong *)(param_1 + 0xb0) = local_50;
      *(ulonglong *)(param_1 + 0xb8) = local_50;
      _Size = local_50;
    } while (local_50 < param_3);
  }
  else {
    local_58 = *(longlong *)(param_1 + 0xa8);
    local_50 = _Size;
  }
  *(ulonglong *)(param_1 + 0xa8) = param_3 + local_58;
  *(ulonglong *)(param_1 + 0xb0) = local_50 - param_3;
  if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
LAB_142adcb7b:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142adcba2 FUN_142adcba2 body=157 status=ok
// SIG undefined FUN_142adcba2(void)

longlong * FUN_142adcba2(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  
  if (0xf < (ulonglong)param_2[1]) {
    piVar2 = (int *)*param_2;
    piVar1 = piVar2 + 4;
    *param_2 = (longlong)piVar1;
    uVar4 = param_2[1] - 0x10;
    param_2[1] = uVar4;
    if (*piVar2 == 0xb1a3) {
      uVar6 = (ulonglong)(uint)piVar2[1];
      if (uVar6 <= uVar4) {
        lVar3 = *(longlong *)(piVar2 + 2);
        *param_2 = (longlong)piVar1 + uVar6;
        param_2[1] = uVar4 - uVar6;
        uVar7 = 0;
        lVar5 = FUN_140ab9477(piVar1,uVar6,0,&DAT_149e18840,0xc0,&LAB_142760e05);
        if (lVar5 == lVar3) {
          *param_1 = (longlong)piVar1;
          param_1[1] = uVar6;
          uVar7 = 1;
        }
        goto LAB_142adcbdf;
      }
    }
  }
  uVar7 = 0;
LAB_142adcbdf:
  *(undefined1 *)(param_1 + 2) = uVar7;
  return param_1;
}



// FUNCTION 142adcc40 FUN_142adcc40 body=547 status=ok
// SIG undefined FUN_142adcc40(void)

longlong * FUN_142adcc40(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142adce64 FUN_142adce64 body=68 status=ok
// SIG undefined FUN_142adce64(void)

void FUN_142adce64(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0xb0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0xa8);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142adce9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 142adcea8 FUN_142adcea8 body=110 status=ok
// SIG undefined FUN_142adcea8(void)

undefined8 * FUN_142adcea8(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142adcf16 FUN_142adcf16 body=198 status=ok
// SIG undefined FUN_142adcf16(void)

void FUN_142adcf16(longlong *param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_888 [32];
  undefined1 *local_868;
  undefined4 local_860;
  undefined2 *local_858;
  undefined4 local_850;
  longlong local_848;
  code *local_840;
  longlong *local_838;
  undefined8 local_830;
  undefined1 local_828 [2056];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_888;
  iVar1 = *param_2;
  local_830 = *(undefined8 *)(*(longlong *)(*param_1 + 0xb8) + (longlong)iVar1 * 0x10);
  local_860 = FUN_140278f2a(&local_830,local_828);
  local_848 = (longlong)iVar1 * 0x90 + *(longlong *)param_1[1];
  local_838 = &local_848;
  local_840 = FUN_142adcfde;
  local_858 = &DAT_149e065c6;
  local_850 = 1;
  local_868 = local_828;
  FUN_1403deae6();
  if ((local_20 ^ (ulonglong)auStack_888) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142adcfde FUN_142adcfde body=137 status=ok
// SIG undefined FUN_142adcfde(void)

void FUN_142adcfde(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *param_1;
  FUN_1446f82e2(&local_28,*(undefined4 *)(param_2 + 1),*param_2,1);
  iVar1 = *(int *)(lVar2 + 0x88);
  *(uint *)(lVar2 + 0x88) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x8c) < iVar1 + 1U) {
    FUN_1468b3bb8(lVar2,iVar1);
  }
  lVar3 = *(longlong *)(lVar2 + 0x80);
  if (*(longlong *)(lVar2 + 0x80) == 0) {
    lVar3 = lVar2;
  }
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142add068 FUN_142add068 body=229 status=ok
// SIG undefined FUN_142add068(void)

void FUN_142add068(longlong *param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RBP;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined4 uStack_49;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = *param_2;
  lVar2 = *param_1;
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_49 = 0;
  lVar3 = param_1[1];
  LOCK();
  *(int *)(lVar3 + 0xe70) = *(int *)(lVar3 + 0xe70) + 1;
  UNLOCK();
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0xe68));
  LOCK();
  *(int *)(lVar3 + 0xe70) = *(int *)(lVar3 + 0xe70) + -1;
  UNLOCK();
  local_b8 = param_3;
  FUN_14623400c(lVar2 + 0xe28,param_1[1],local_b0,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0xe68));
  FUN_140fdd62a(param_1[1],local_b0,0);
  FUN_140cb5138(local_b0);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142add16c FUN_142add16c body=12 status=ok
// SIG undefined FUN_142add16c(void)

void FUN_142add16c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142add175. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142add178 FUN_142add178 body=29 status=ok
// SIG undefined FUN_142add178(void)

undefined8 FUN_142add178(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142add196 FUN_142add196 body=1366 status=ok
// SIG undefined FUN_142add196(void)

void FUN_142add196(longlong *param_1,undefined1 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong *plVar10;
  uint *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined1 auStack_608 [32];
  undefined8 local_5e8;
  longlong *plStack_5e0;
  undefined1 local_5d8;
  undefined1 local_5c9;
  undefined1 local_5c8;
  undefined1 local_5c0 [1224];
  longlong local_f8;
  longlong *local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8 [2];
  longlong *local_a8;
  longlong local_98 [4];
  code *local_78;
  longlong *local_68;
  longlong local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_608;
  local_5c8 = *param_2;
  local_b8[0] = 0;
  local_a8 = (longlong *)0x0;
  FUN_14570b686(local_5c0,param_3);
  local_f8 = *param_1;
  local_e8 = (longlong *)param_1[2];
  param_1[2] = 0;
  local_d8 = (undefined4)param_1[4];
  uStack_d4 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_d0 = (undefined4)param_1[5];
  uStack_cc = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_c8 = (undefined4)param_1[6];
  uStack_c4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_c0 = (undefined4)param_1[7];
  uStack_bc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (local_f8 != 0) {
    *param_1 = 0;
  }
  local_78 = (code *)0x0;
  puVar5 = (undefined8 *)FUN_14001cc68(0x520,0x10);
  *puVar5 = &PTR_LAB_149fc9f30;
  *(undefined1 *)(puVar5 + 2) = local_5c8;
  local_68 = puVar5;
  FUN_14570b686(puVar5 + 3,local_5c0);
  puVar5[0x9c] = local_f8;
  puVar5[0x9e] = local_e8;
  local_e8 = (longlong *)0x0;
  *(undefined4 *)(puVar5 + 0xa2) = local_c8;
  *(undefined4 *)((longlong)puVar5 + 0x514) = uStack_c4;
  *(undefined4 *)(puVar5 + 0xa3) = uStack_c0;
  *(undefined4 *)((longlong)puVar5 + 0x51c) = uStack_bc;
  *(undefined4 *)(puVar5 + 0xa0) = local_d8;
  *(undefined4 *)((longlong)puVar5 + 0x504) = uStack_d4;
  *(undefined4 *)(puVar5 + 0xa1) = uStack_d0;
  *(undefined4 *)((longlong)puVar5 + 0x50c) = uStack_cc;
  if (local_f8 != 0) {
    local_f8 = 0;
  }
  if (puVar5 != (undefined8 *)&DAT_fffffffffffffff0) {
    local_78 = FUN_142add7c4;
  }
  FUN_14170b918(&local_5e8,local_b8);
  plVar12 = plStack_5e0;
  local_5d8 = 1;
  if (plStack_5e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_5e0 + 1) = (int)plStack_5e0[1] + 1;
    UNLOCK();
  }
  puVar5 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar7 = (uint *)*puVar5;
  if (puVar7 != (uint *)0x0) goto LAB_142add388;
  while( true ) {
    uVar9 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar9 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar9 | 1;
      __tlregdtor(&LAB_142ad84f8);
    }
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar6 = *(undefined4 **)(lVar4 + 0x310);
    *(undefined8 *)(lVar4 + 0x310) = 0;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar6 = 0xffffffff;
    *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
    puVar6[0x12] = 0;
    *puVar5 = puVar6;
    FUN_140217a48(puVar5);
    puVar7 = (uint *)*puVar5;
LAB_142add388:
    puVar13 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 0xfU & 0xfffffffffffffff0);
    puVar11 = (uint *)(puVar13 + 0x22);
    uVar9 = puVar7[0x12];
    if (puVar11 <= puVar7 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
      LOCK();
      uVar3 = *puVar7;
      *puVar7 = *puVar7 + uVar9 + 1;
      UNLOCK();
      if ((uVar3 ^ uVar9) != 0xffffffff) break;
      puVar7 = (uint *)*puVar5;
      *puVar7 = 0xffffffff;
      *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
      puVar7[0x12] = 0;
      *puVar5 = puVar7;
      puVar13 = (undefined8 *)((longlong)puVar7 + 0x67U & 0xfffffffffffffff0);
      puVar11 = (uint *)(puVar13 + 0x22);
      uVar9 = 0;
      if (puVar11 <= puVar7 + 0x4000) {
        uVar9 = 1;
        goto LAB_142add408;
      }
    }
  }
  uVar9 = uVar9 + 1;
LAB_142add408:
  *(uint **)(puVar7 + 0x10) = puVar11;
  puVar7[0x12] = uVar9;
  FUN_1447247dc(puVar13,0);
  *puVar13 = TGraphTask<TAsyncGraphTask<void>_>::vftable;
  puVar13[0x16] = local_78;
  puVar13[0x18] = local_68;
  local_68 = (longlong *)0x0;
  *(undefined4 *)(puVar13 + 0x1c) = local_48;
  *(undefined4 *)((longlong)puVar13 + 0xe4) = uStack_44;
  *(undefined4 *)(puVar13 + 0x1d) = uStack_40;
  *(undefined4 *)((longlong)puVar13 + 0xec) = uStack_3c;
  puVar13[0x1a] = local_58;
  puVar13[0x1b] = uStack_50;
  if (local_78 != (code *)0x0) {
    local_78 = (code *)0x0;
  }
  puVar13[0x1e] = local_5e8;
  puVar13[0x1f] = plStack_5e0;
  local_5e8 = 0;
  plStack_5e0 = (longlong *)0x0;
  *(undefined1 *)(puVar13 + 0x20) = 0;
  *(undefined4 *)(puVar13 + 0x21) = 0xff;
  if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
  }
  puVar13[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar13[9] = puVar13;
  puVar13[10] = puVar13;
  lVar4 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar4 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar4 + 0x30);
  }
  puVar13[0xf] = uVar8;
  puVar13[0x10] = 0xc80000527800b400;
  *(undefined4 *)((longlong)puVar13 + 0x1c) = 0;
  if (puVar13 == (undefined8 *)0x0) {
    local_5c9 = 1;
    FUN_1447439e4(0);
  }
  else {
    LOCK();
    *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
    UNLOCK();
    local_5c9 = 1;
    FUN_1447439e4(puVar13);
    LOCK();
    piVar2 = (int *)(puVar13 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar13)(puVar13,1);
    }
  }
  plVar10 = plStack_5e0;
  if (plStack_5e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_5e0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_5e0)(plStack_5e0);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (local_78 != (code *)0x0) {
    plVar10 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar10 = &local_58;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (local_b8[0] != 0) {
    plVar10 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar10 = local_98;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar12 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (local_f8 != 0) {
    plVar12 = (longlong *)&local_d8;
    if (local_e8 != (longlong *)0x0) {
      plVar12 = local_e8;
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  FUN_145969a1a(local_5c0);
  if ((local_30 ^ (ulonglong)auStack_608) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142add6ee FUN_142add6ee body=106 status=ok
// SIG undefined FUN_142add6ee(void)

undefined8 * FUN_142add6ee(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_149fc9f10;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  puVar2[4] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 4);
  }
  return puVar2 + 2;
}



// FUNCTION 142add75e FUN_142add75e body=29 status=ok
// SIG undefined FUN_142add75e(void)

void FUN_142add75e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142add77c FUN_142add77c body=71 status=ok
// SIG undefined FUN_142add77c(void)

undefined8 * FUN_142add77c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_149fc9f10;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142add7c4 FUN_142add7c4 body=110 status=ok
// SIG undefined FUN_142add7c4(void)

void FUN_142add7c4(undefined1 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = *param_1;
  pcVar1 = *(code **)(param_1 + 0x4d0);
  plVar3 = (longlong *)(param_1 + 0x4f0);
  if (*(longlong **)(param_1 + 0x4e0) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x4e0);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_21,param_1 + 8);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142add83e FUN_142add83e body=29 status=ok
// SIG undefined FUN_142add83e(void)

void FUN_142add83e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142add85c FUN_142add85c body=89 status=ok
// SIG undefined FUN_142add85c(void)

undefined8 * FUN_142add85c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_149fc9f30;
  if (param_1[0x9c] != 0) {
    plVar1 = param_1 + 0xa0;
    if ((longlong *)param_1[0x9e] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x9e];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_145969a1a(param_1 + 3);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142add8ea FUN_142add8ea body=12 status=ok
// SIG undefined FUN_142add8ea(void)

void FUN_142add8ea(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142add8f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142add8f6 FUN_142add8f6 body=29 status=ok
// SIG undefined FUN_142add8f6(void)

undefined8 FUN_142add8f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142add914 FUN_142add914 body=421 status=ok
// SIG undefined FUN_142add914(void)

/* WARNING: Removing unreachable block (ram,0x000142adda41) */
/* WARNING: Removing unreachable block (ram,0x000142adda50) */

undefined8 FUN_142add914(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58 [2];
  undefined2 *local_48;
  int local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = param_1[1];
  FUN_1400021e4(param_2,local_38);
  puVar3 = (undefined8 *)(**(code **)(**(longlong **)*param_1 + 8))();
  puVar5 = &DAT_149dfb77a;
  if (*(int *)(puVar3 + 1) != 0) {
    puVar5 = (undefined2 *)*puVar3;
  }
  FUN_140002266(&local_48,L"/%s/",puVar5);
  puVar5 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar5 = local_48;
  }
  local_88 = 1;
  FUN_140807d8e(local_38,local_58,puVar5,L"/Game/");
  FUN_147006a3e(&local_78,local_58,local_38);
  iVar1 = *(int *)(lVar2 + 0xe20);
  *(uint *)(lVar2 + 0xe20) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xe24) < iVar1 + 1U) {
    FUN_147006ada((longlong *)(lVar2 + 0xe18),iVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 0xe18);
  lVar4 = (longlong)iVar1 * 0x20;
  *(undefined8 *)(lVar2 + lVar4) = 0;
  *(undefined8 *)(lVar2 + lVar4) = local_78;
  *(undefined4 *)(lVar2 + 8 + lVar4) = (undefined4)local_70;
  *(undefined4 *)(lVar2 + 0xc + lVar4) = local_70._4_4_;
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = local_68;
  *(undefined4 *)(lVar2 + 0x18 + lVar4) = (undefined4)local_60;
  *(undefined4 *)(lVar2 + 0x1c + lVar4) = local_60._4_4_;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142addaba FUN_142addaba body=635 status=ok
// SIG undefined FUN_142addaba(void)

undefined8 FUN_142addaba(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  int local_90;
  longlong local_88;
  int local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  undefined4 *local_60;
  undefined1 local_54 [4];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = *param_2;
  lVar2 = *param_1;
  FUN_146ff8bfc(uVar1,&local_88,DAT_14c947b10);
  FUN_146ff8bfc(uVar1,&local_98,DAT_14c947d08);
  if ((1 < local_80) && (1 < local_90)) {
    FUN_1459853a0(&local_78,&local_88);
    local_a8 = 0;
    lStack_a0 = 0;
    iVar4 = iStack_70 + -1;
    if (iStack_70 == 0) {
      iVar4 = 0;
    }
    local_60 = (undefined4 *)CONCAT44(local_60._4_4_,iVar4);
    FUN_1468fe3e4(&local_a8);
    if (CONCAT44(uStack_74,local_78) != 0) {
      FUN_1400020a8();
    }
    FUN_1459853a0(&local_78,&local_98);
    local_b8 = 0;
    uStack_b0 = 0;
    local_68 = (longlong *)CONCAT44(uStack_74,local_78);
    iVar4 = iStack_70 + -1;
    if (iStack_70 == 0) {
      iVar4 = 0;
    }
    local_60 = (undefined4 *)CONCAT44(local_60._4_4_,iVar4);
    FUN_1468fe3e4();
    if (CONCAT44(uStack_74,local_78) != 0) {
      FUN_1400020a8();
    }
    if (*(int *)(lVar2 + 0x7c0) != *(int *)(lVar2 + 0x7ec)) {
      uVar9 = (uint)((ulonglong)local_a8 >> 0x10);
      uVar8 = (uint)local_a8 & 0xffff;
      uVar3 = (uint)((ulonglong)lStack_a0 >> 0x10);
      uVar5 = (uint)lStack_a0 & 0xffff;
      uVar9 = (int)((ulonglong)local_a8 >> 0x20) + ((uint)local_a8 << 0x10 | uVar8) +
              (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar8 >> 4);
      lVar6 = lVar2 + 0x7f0;
      if (*(longlong *)(lVar2 + 0x7f8) != 0) {
        lVar6 = *(longlong *)(lVar2 + 0x7f8);
      }
      iVar4 = *(int *)(lVar6 + (ulonglong)
                               (*(int *)(lVar2 + 0x800) - 1U &
                               ((uVar9 >> 2) +
                                ((uint)lStack_a0 << 0x10 | uVar5) +
                                (int)((ulonglong)lStack_a0 >> 0x20) +
                                (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4) + uVar9 * 0x40 +
                                0x9e3779b9 ^ uVar9)) * 4);
      if (iVar4 != -1) {
        lVar6 = *(longlong *)(lVar2 + 0x7b8);
        do {
          lVar7 = (longlong)iVar4;
          if ((*(longlong *)(lVar6 + lVar7 * 0x28) == local_a8) &&
             (*(longlong *)(lVar6 + 8 + lVar7 * 0x28) == lStack_a0)) goto LAB_142addb23;
          iVar4 = *(int *)(lVar6 + lVar7 * 0x28 + 0x20);
        } while (iVar4 != -1);
      }
    }
    local_78 = (undefined4)local_b8;
    uStack_74 = local_b8._4_4_;
    iStack_70 = (int)uStack_b0;
    uStack_6c = uStack_b0._4_4_;
    local_68 = &local_a8;
    local_60 = &local_78;
    FUN_1408b7084((longlong *)(lVar2 + 0x7b8),local_54);
    *(undefined1 *)(lVar2 + 0x8b8) = 1;
  }
LAB_142addb23:
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142addd36 FUN_142addd36 body=42 status=ok
// SIG undefined FUN_142addd36(void)

ulonglong FUN_142addd36(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_14701050c(*param_1,*param_2,1);
  *(undefined1 *)param_1[1] = uVar1;
  return CONCAT71((int7)((ulonglong)param_1[1] >> 8),*(undefined1 *)param_1[1]) ^ 1;
}



// FUNCTION 142addd70 FUN_142addd70 body=63 status=ok
// SIG undefined FUN_142addd70(void)

undefined8 FUN_142addd70(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14171b750(param_1,iVar1);
  }
  FUN_14583ed9c((longlong)iVar1 * 0x70 + *param_1,param_2);
  return 1;
}



// FUNCTION 142adddb0 FUN_142adddb0 body=63 status=ok
// SIG undefined FUN_142adddb0(void)

undefined8 FUN_142adddb0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14171b750(param_1,iVar1);
  }
  FUN_1400e7d28((longlong)iVar1 * 0x70 + *param_1,param_2);
  return 1;
}



// FUNCTION 142adddf0 FUN_142adddf0 body=63 status=ok
// SIG undefined FUN_142adddf0(void)

undefined8 FUN_142adddf0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14171b750(param_1,iVar1);
  }
  FUN_14583ed9c((longlong)iVar1 * 0x70 + *param_1,param_2);
  return 1;
}



// FUNCTION 142adde3e FUN_142adde3e body=86 status=ok
// SIG undefined FUN_142adde3e(void)

undefined8 FUN_142adde3e(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x3808);
  *(uint *)(lVar2 + 0x3808) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x380c) < iVar1 + 1U) {
    FUN_147006e8e(lVar2,iVar1);
  }
  lVar3 = *(longlong *)(lVar2 + 0x3800);
  if (*(longlong *)(lVar2 + 0x3800) == 0) {
    lVar3 = lVar2;
  }
  FUN_1400e7d28((longlong)iVar1 * 0x70 + lVar3,param_2);
  return 1;
}



// FUNCTION 142adde94 FUN_142adde94 body=61 status=ok
// SIG undefined FUN_142adde94(void)

void FUN_142adde94(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = *param_2;
  lVar3 = *param_1;
  iVar1 = *(int *)(lVar3 + 0x58);
  *(uint *)(lVar3 + 0x58) = iVar1 + 1U;
  if (*(uint *)(lVar3 + 0x5c) < iVar1 + 1U) {
    FUN_141734404(lVar3,iVar1);
  }
  lVar4 = *(longlong *)(lVar3 + 0x50);
  if (*(longlong *)(lVar3 + 0x50) == 0) {
    lVar4 = lVar3;
  }
  *(undefined8 *)(lVar4 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 142added2 FUN_142added2 body=82 status=ok
// SIG undefined FUN_142added2(void)

undefined8 FUN_142added2(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)*param_2;
  cVar4 = (**(code **)(*plVar2 + 0x1c0))(plVar2);
  if (cVar4 != '\0') {
    lVar3 = *param_1;
    iVar1 = *(int *)(lVar3 + 0x58);
    *(uint *)(lVar3 + 0x58) = iVar1 + 1U;
    if (*(uint *)(lVar3 + 0x5c) < iVar1 + 1U) {
      FUN_141734404(lVar3,iVar1);
    }
    lVar5 = *(longlong *)(lVar3 + 0x50);
    if (*(longlong *)(lVar3 + 0x50) == 0) {
      lVar5 = lVar3;
    }
    *(longlong **)(lVar5 + (longlong)iVar1 * 8) = plVar2;
  }
  return 1;
}



// FUNCTION 142addf24 FUN_142addf24 body=61 status=ok
// SIG undefined FUN_142addf24(void)

void FUN_142addf24(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 142addf62 FUN_142addf62 body=248 status=ok
// SIG undefined FUN_142addf62(void)

void FUN_142addf62(longlong param_1,int param_2)

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
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 142ade05a FUN_142ade05a body=1599 status=ok
// SIG undefined FUN_142ade05a(void)

ulonglong FUN_142ade05a(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  uint *puVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  PSRWLOCK SRWLock;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined1 auStack_178 [40];
  longlong local_150;
  longlong local_148;
  uint local_13c;
  ulonglong local_138;
  ulonglong local_130;
  longlong *local_128;
  uint *local_120;
  ushort *local_118;
  undefined8 *local_110;
  uint local_108;
  int iStack_104;
  uint uStack_100;
  int iStack_fc;
  undefined8 local_f8;
  uint uStack_f0;
  int iStack_ec;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  char local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar2 = *param_2;
  local_110 = &local_c8;
  local_a8 = 0;
  local_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  local_5c = 0;
  local_54 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_150 = param_3;
  local_78 = uVar2;
  FUN_1407c5c32(uVar2);
  SRWLock = (PSRWLOCK)param_1[2];
  LOCK();
  *(int *)&SRWLock[1].Ptr = *(int *)&SRWLock[1].Ptr + 1;
  UNLOCK();
  AcquireSRWLockShared(SRWLock);
  LOCK();
  *(int *)&SRWLock[1].Ptr = *(int *)&SRWLock[1].Ptr + -1;
  UNLOCK();
  plVar11 = (longlong *)param_1[3];
  FUN_1400bbfc4(&local_e8,uVar2);
  FUN_1400e7e08(&local_108,&local_e8);
  local_f8 = (longlong *)CONCAT44(iStack_104,local_108);
  uStack_f0 = uStack_100;
  iStack_ec = iStack_fc;
  uVar10 = (uint)(CONCAT44(iStack_fc,uStack_100) >> 0x10);
  uVar5 = (uint)((ulonglong)local_f8 >> 0x10);
  uVar5 = (local_108 << 0x10 | local_108 & 0xffff) + iStack_104 + (uVar5 << 0x13 | uVar5 & 0xffff) +
          ((local_108 & 0xffff) >> 4);
  iVar6 = FUN_1447fff98(plVar11,(uVar5 >> 2) +
                                (uStack_100 << 0x10 | uStack_100 & 0xffff) + iStack_fc +
                                (uVar10 << 0x13 | uVar10 & 0xffff) + ((uStack_100 & 0xffff) >> 4) +
                                uVar5 * 0x40 + 0x9e3779b9 ^ uVar5);
  lVar20 = local_150;
  if ((iVar6 == -1) ||
     (plVar11 = (longlong *)((longlong)iVar6 * 0x10 + *plVar11), plVar11 == (longlong *)0x0)) {
    lVar22 = 0;
  }
  else {
    lVar22 = *plVar11;
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if (lVar22 != 0) {
    FUN_14125972a(&local_e8,lVar20,lVar22);
    if (local_d0 == '\x01') {
      local_f8 = (longlong *)0x0;
      iVar6 = (int)local_e0;
      if ((int)local_e0 != 0) {
        local_f8 = (longlong *)FUN_14001cc68(0x18,0x10);
        *local_f8 = local_e8;
        local_e8 = 0;
        *(int *)(local_f8 + 1) = iVar6;
        *(undefined4 *)((longlong)local_f8 + 0xc) = local_e0._4_4_;
        local_e0 = 0;
        *(undefined4 *)(local_f8 + 2) = 0;
        LOCK();
        *(undefined4 *)(local_f8 + 2) = 1;
        UNLOCK();
      }
      FUN_14020871a(lVar20 + 0x40,&local_f8);
      FUN_1400b4210(&local_f8);
    }
    FUN_1468581d0(&DAT_14c927a10,&local_f8,*(undefined4 *)(lVar22 + 0x30));
    FUN_1406ddeb8(&DAT_14c927a10,&local_108,&local_f8);
    *(uint *)(lVar20 + 0x30) = local_108;
    if ((local_d0 == '\x01') && (FUN_140958ed1(local_e8,local_e0 & 0xffffffff), local_e8 != 0)) {
      FUN_1400020a8();
    }
  }
  ReleaseSRWLockShared(SRWLock);
  lVar20 = *param_1;
  local_128 = param_1;
  if (*(int *)(lVar20 + 0x214) < *(int *)(lVar20 + 0x1e8)) {
    uVar5 = *(uint *)(lVar20 + 0x208);
    if (uVar5 == 0) {
      uVar24 = 1;
      uVar18 = 0;
      iVar6 = 0;
      uVar10 = 0;
    }
    else {
      puVar12 = *(uint **)(lVar20 + 0x200);
      if (*(uint **)(lVar20 + 0x200) == (uint *)0x0) {
        puVar12 = (uint *)(lVar20 + 0x1f0);
      }
      uVar10 = *puVar12;
      if (uVar10 == 0) {
        iVar6 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar6 = uVar5 - 1;
        }
        uVar18 = 0;
        uVar14 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar14 = uVar18;
        }
        iVar6 = 0;
        do {
          if (uVar14 == uVar18) goto LAB_142ade685;
          iVar6 = iVar6 + 0x20;
          uVar10 = puVar12[uVar18 + 1];
          uVar18 = uVar18 + 1;
        } while (uVar10 == 0);
      }
      else {
        uVar18 = 0;
        iVar6 = 0;
      }
      uVar24 = (ulonglong)(-uVar10 & uVar10);
      uVar14 = uVar24 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      uVar10 = (iVar6 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
      if ((int)uVar5 <= (int)uVar10) {
        uVar10 = uVar5;
      }
    }
    uVar14 = CONCAT71((int7)((ulonglong)SRWLock >> 8),1);
    if (uVar10 != uVar5) {
      local_118 = (ushort *)(local_150 + 0x40);
      uVar17 = 0xffffffff;
      SRWLock = (PSRWLOCK)(ulonglong)uVar5;
      local_148 = lVar20;
      local_130 = (ulonglong)uVar5;
      local_120 = (uint *)(lVar20 + 0x1f0);
      do {
        lVar22 = *(longlong *)(lVar20 + 0x1e0);
        uVar14 = *(ulonglong *)(lVar22 + (longlong)(int)uVar10 * 0x20);
        uVar1 = *local_118;
        if ((uVar1 & 1) == 0) {
          plVar11 = *(longlong **)local_118;
          uVar15 = local_138;
          if (plVar11 != (longlong *)0x0) {
            uVar15 = uVar14 >> 0x20;
            local_13c = *(uint *)(plVar11 + 1);
            lVar16 = *plVar11;
            local_138._0_4_ = (int)(uVar14 >> 0x20);
            if ((int)local_13c < 1) {
              uVar19 = 0;
            }
            else {
              uVar19 = 0;
              uVar21 = (ulonglong)local_13c;
              uVar5 = local_13c;
              do {
                uVar21 = uVar21 >> 1;
                uVar23 = (uint)uVar21 + (int)uVar19;
                iVar7 = *(int *)(lVar16 + (ulonglong)uVar23 * 0x18) - (int)uVar14;
                if (iVar7 == 0) {
                  iVar7 = *(int *)(lVar16 + 4 + (ulonglong)uVar23 * 0x18) - (int)local_138;
                }
                if (iVar7 < 0) {
                  uVar19 = (ulonglong)(uVar23 + (uVar5 & 1));
                }
                bVar3 = 1 < uVar5;
                uVar5 = (uint)uVar21;
              } while (bVar3);
            }
            lVar20 = local_148;
            if ((int)uVar19 < (int)local_13c) {
              iVar7 = (int)uVar14 - *(int *)(lVar16 + uVar19 * 0x18);
              if (iVar7 == 0) {
                iVar7 = (int)local_138 - *(int *)(lVar16 + 4 + uVar19 * 0x18);
              }
              if (-1 < iVar7) {
                plVar11 = (longlong *)(lVar16 + uVar19 * 0x18 + 8);
                local_138 = uVar15;
                goto LAB_142ade413;
              }
            }
          }
        }
        else {
          puVar13 = (undefined4 *)FUN_146859566();
          if (puVar13 == (undefined4 *)0x0) {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = (longlong *)((ulonglong)CONCAT24(uVar1 >> 2,*puVar13) | 0x8000000000000000);
          }
LAB_142ade413:
          lVar20 = local_148;
          uVar15 = local_138;
          if (plVar11 != (longlong *)0x0) {
            lVar22 = lVar22 + (longlong)(int)uVar10 * 0x20;
            if (*(int *)(lVar22 + 0x14) == -1) goto LAB_142ade615;
            local_e8 = *(longlong *)(lVar22 + 8);
            iVar7 = *(int *)(lVar22 + 0x10) + -1;
            if (*(int *)(lVar22 + 0x10) == 0) {
              iVar7 = 0;
            }
            local_e0 = CONCAT44(local_e0._4_4_,iVar7);
            local_f8 = plVar11;
            cVar4 = FUN_140c20914(&local_f8,&local_e8);
            if (cVar4 != '\0') goto LAB_142ade615;
            SRWLock = (PSRWLOCK)(ulonglong)*(uint *)(local_148 + 0x208);
            lVar20 = local_148;
            uVar15 = local_138;
          }
        }
        local_138 = uVar15;
        uVar17 = uVar17 & ~(uint)uVar24;
        puVar12 = *(uint **)(lVar20 + 0x200);
        if (*(uint **)(lVar20 + 0x200) == (uint *)0x0) {
          puVar12 = local_120;
        }
        iVar7 = (int)uVar18;
        lVar22 = (longlong)iVar7;
        uVar5 = puVar12[lVar22] & uVar17;
        uVar23 = (uint)SRWLock;
        if (uVar5 == 0) {
          iVar8 = uVar23 + 0x1e;
          if (-1 < (int)(uVar23 - 1)) {
            iVar8 = uVar23 - 1;
          }
          iVar8 = iVar8 >> 5;
          iVar6 = iVar6 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar7) {
            iVar9 = iVar7;
          }
          if (iVar7 < iVar8) {
            lVar16 = 0;
            do {
              uVar5 = puVar12[lVar22 + lVar16 + 1];
              if (uVar5 != 0) {
                uVar18 = (ulonglong)(iVar7 + (int)lVar16 + 1);
                uVar17 = 0xffffffff;
                goto LAB_142ade4f7;
              }
              iVar6 = iVar6 + 0x20;
              lVar16 = lVar16 + 1;
            } while (iVar9 - lVar22 != lVar16);
            uVar17 = 0xffffffff;
            iVar7 = iVar9;
          }
          uVar18 = (ulonglong)(iVar7 + 1);
          lVar20 = local_148;
          uVar10 = uVar23;
        }
        else {
LAB_142ade4f7:
          uVar24 = (ulonglong)(-uVar5 & uVar5);
          uVar14 = uVar24 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          uVar10 = (iVar6 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          if ((int)uVar23 <= (int)uVar10) {
            uVar10 = uVar23;
          }
        }
      } while (uVar10 != (uint)local_130);
LAB_142ade685:
      uVar14 = CONCAT71((int7)((ulonglong)SRWLock >> 8),1);
    }
  }
  else {
LAB_142ade615:
    uVar5 = (**(code **)local_128[1])(((undefined8 *)local_128[1])[1],local_150);
    uVar14 = (ulonglong)uVar5;
  }
  local_80 = 0;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_14598d4fc(&local_c8);
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffff;
}



// FUNCTION 142ade69a FUN_142ade69a body=63 status=ok
// SIG undefined FUN_142ade69a(void)

undefined8 FUN_142ade69a(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14171b750(param_1,iVar1);
  }
  FUN_14583ed9c((longlong)iVar1 * 0x70 + *param_1,param_2);
  return 1;
}



// FUNCTION 142ade6da FUN_142ade6da body=63 status=ok
// SIG undefined FUN_142ade6da(void)

undefined8 FUN_142ade6da(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14171b750(param_1,iVar1);
  }
  FUN_1400e7d28((longlong)iVar1 * 0x70 + *param_1,param_2);
  return 1;
}



// FUNCTION 142ade728 FUN_142ade728 body=86 status=ok
// SIG undefined FUN_142ade728(void)

undefined8 FUN_142ade728(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x3808);
  *(uint *)(lVar2 + 0x3808) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x380c) < iVar1 + 1U) {
    FUN_147006e8e(lVar2,iVar1);
  }
  lVar3 = *(longlong *)(lVar2 + 0x3800);
  if (*(longlong *)(lVar2 + 0x3800) == 0) {
    lVar3 = lVar2;
  }
  FUN_1400e7d28((longlong)iVar1 * 0x70 + lVar3,param_2);
  return 1;
}



// FUNCTION 142ade77e FUN_142ade77e body=167 status=ok
// SIG undefined FUN_142ade77e(void)

/* WARNING: Removing unreachable block (ram,0x000142ade801) */

undefined8 FUN_142ade77e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *param_2;
  param_1 = (longlong *)*param_1;
  FUN_1400021e4(&local_20,&local_30);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1447a1bd6(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = local_30;
  *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_28;
  *(undefined4 *)(lVar2 + 0xc + lVar3) = local_28._4_4_;
  local_28 = 0;
  local_30 = 0;
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 142ade826 FUN_142ade826 body=108 status=ok
// SIG undefined FUN_142ade826(void)

undefined4 FUN_142ade826(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_2;
  puVar1 = (undefined8 *)*param_1;
  FUN_1400021e4(&local_28,local_38);
  uVar2 = (*(code *)*puVar1)(puVar1[1],local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ade894 FUN_142ade894 body=55 status=ok
// SIG undefined FUN_142ade894(void)

undefined8 FUN_142ade894(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_1,iVar1);
  }
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = uVar2;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 142ade8cc FUN_142ade8cc body=167 status=ok
// SIG undefined FUN_142ade8cc(void)

/* WARNING: Removing unreachable block (ram,0x000142ade94f) */

undefined8 FUN_142ade8cc(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *param_2;
  param_1 = (longlong *)*param_1;
  FUN_1400021e4(&local_20,&local_30);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1447a1bd6(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = local_30;
  *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_28;
  *(undefined4 *)(lVar2 + 0xc + lVar3) = local_28._4_4_;
  local_28 = 0;
  local_30 = 0;
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}



// FUNCTION 142ade974 FUN_142ade974 body=55 status=ok
// SIG undefined FUN_142ade974(void)

undefined8 FUN_142ade974(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_1,iVar1);
  }
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = uVar2;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 142ade9ac FUN_142ade9ac body=75 status=ok
// SIG undefined FUN_142ade9ac(void)

undefined8 FUN_142ade9ac(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = *param_2;
  lVar3 = *param_1;
  iVar1 = *(int *)(lVar3 + 0x208);
  *(uint *)(lVar3 + 0x208) = iVar1 + 1U;
  if (*(uint *)(lVar3 + 0x20c) < iVar1 + 1U) {
    FUN_1417345fc(lVar3,iVar1);
  }
  lVar4 = *(longlong *)(lVar3 + 0x200);
  if (*(longlong *)(lVar3 + 0x200) == 0) {
    lVar4 = lVar3;
  }
  *(undefined8 *)(lVar4 + (longlong)iVar1 * 8) = uVar2;
  return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
}



// FUNCTION 142ade9f8 FUN_142ade9f8 body=75 status=ok
// SIG undefined FUN_142ade9f8(void)

undefined8 FUN_142ade9f8(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = *param_2;
  lVar3 = *param_1;
  iVar1 = *(int *)(lVar3 + 0x208);
  *(uint *)(lVar3 + 0x208) = iVar1 + 1U;
  if (*(uint *)(lVar3 + 0x20c) < iVar1 + 1U) {
    FUN_1417345fc(lVar3,iVar1);
  }
  lVar4 = *(longlong *)(lVar3 + 0x200);
  if (*(longlong *)(lVar3 + 0x200) == 0) {
    lVar4 = lVar3;
  }
  *(undefined8 *)(lVar4 + (longlong)iVar1 * 8) = uVar2;
  return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
}



// FUNCTION 142adea6e FUN_142adea6e body=12 status=ok
// SIG undefined FUN_142adea6e(void)

void FUN_142adea6e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142adea77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142adea7a FUN_142adea7a body=29 status=ok
// SIG undefined FUN_142adea7a(void)

undefined8 FUN_142adea7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142adea98 FUN_142adea98 body=29 status=ok
// SIG undefined FUN_142adea98(void)

undefined8 FUN_142adea98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142adeaca FUN_142adeaca body=93 status=ok
// SIG undefined FUN_142adeaca(void)

void FUN_142adeaca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149fca1b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142adeb28 FUN_142adeb28 body=93 status=ok
// SIG undefined FUN_142adeb28(void)

void FUN_142adeb28(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149fca1b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142adeb86 FUN_142adeb86 body=126 status=ok
// SIG undefined FUN_142adeb86(void)

void FUN_142adeb86(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149fca1b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142adebf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142adec04 FUN_142adec04 body=32 status=ok
// SIG undefined FUN_142adec04(void)

undefined8 FUN_142adec04(longlong param_1)

{
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28) + 0x3c0))
            (*(longlong *)(param_1 + 0x18) + 0x28,0);
  return 0;
}



// FUNCTION 142adec24 FUN_142adec24 body=32 status=ok
// SIG undefined FUN_142adec24(void)

undefined8 FUN_142adec24(longlong param_1)

{
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28) + 0x3c0))
            (*(longlong *)(param_1 + 0x18) + 0x28,0);
  return 1;
}



// FUNCTION 142adec44 FUN_142adec44 body=1038 status=ok
// SIG undefined FUN_142adec44(void)

void FUN_142adec44(undefined8 *param_1,longlong param_2)

{
  ushort uVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  ushort *puVar12;
  int iVar13;
  int *piVar14;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  int *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong lStack_a0;
  longlong local_98;
  code *local_88;
  int **ppiStack_80;
  undefined8 local_78;
  longlong lStack_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  longlong lVar15;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  piVar2 = (int *)*param_1;
  uStack_b0 = param_1[1];
  ppiStack_80 = &local_b8;
  local_88 = FUN_142adf94e;
  local_b8 = piVar2;
  FUN_140a8f30a(piVar2 + 0x234,*(undefined8 *)(param_2 + 8));
  if (piVar2[0x374] != piVar2[0x37f]) {
    lVar3 = *(longlong *)(param_2 + 0x20);
    lVar4 = *(longlong *)(param_2 + 0x28);
    uVar20 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar17 = (uint)lVar3 & 0xffff;
    uVar19 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar9 = (uint)lVar4 & 0xffff;
    uVar20 = (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar17) +
             (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar17 >> 4);
    piVar14 = piVar2 + 0x380;
    if (*(int **)(piVar2 + 0x382) != (int *)0x0) {
      piVar14 = *(int **)(piVar2 + 0x382);
    }
    iVar13 = piVar14[piVar2[900] - 1U &
                     ((uVar20 >> 2) +
                      ((uint)lVar4 << 0x10 | uVar9) + (int)((ulonglong)lVar4 >> 0x20) +
                      (uVar19 << 0x13 | uVar19 & 0xffff) + (uVar9 >> 4) + uVar20 * 0x40 + 0x9e3779b9
                     ^ uVar20)];
    if (iVar13 != -1) {
      lVar5 = *(longlong *)(piVar2 + 0x372);
      do {
        lVar15 = (longlong)iVar13;
        if ((*(longlong *)(lVar5 + lVar15 * 0x18) == lVar3) &&
           (*(longlong *)(lVar5 + 8 + lVar15 * 0x18) == lVar4)) {
          uVar1 = *(ushort *)(param_2 + 0x40);
          plVar10 = (longlong *)(ulonglong)uVar1;
          puVar12 = (ushort *)(param_2 + 0x40);
          if ((uVar1 & 1) == 0) {
            plVar10 = *(longlong **)puVar12;
            if (plVar10 == (longlong *)0x0) goto LAB_142adef08;
            uVar20 = *(uint *)(plVar10 + 1);
            lVar3 = *plVar10;
            uVar16 = 0;
            iVar13 = (int)((ulonglong)DAT_14c947b10 >> 0x20);
            if (0 < (int)uVar20) {
              uVar18 = (ulonglong)uVar20;
              uVar19 = uVar20;
              do {
                uVar18 = uVar18 >> 1;
                uVar9 = (uint)uVar18 + (int)uVar16;
                iVar11 = *(int *)(lVar3 + (ulonglong)uVar9 * 0x18) - (int)DAT_14c947b10;
                if (iVar11 == 0) {
                  iVar11 = *(int *)(lVar3 + 4 + (ulonglong)uVar9 * 0x18) - iVar13;
                }
                if (iVar11 < 0) {
                  uVar16 = (ulonglong)(uVar9 + (uVar19 & 1));
                }
                bVar6 = 1 < uVar19;
                uVar19 = (uint)uVar18;
              } while (bVar6);
            }
            if ((int)uVar16 < (int)uVar20) {
              piVar14 = (int *)(lVar3 + uVar16 * 0x18);
              iVar11 = (int)DAT_14c947b10 - *piVar14;
              if (iVar11 == 0) {
                iVar11 = iVar13 - piVar14[1];
              }
              local_b8 = (int *)0x0;
              if (-1 < iVar11) {
                local_b8 = piVar14 + 2;
              }
            }
            else {
LAB_142adedc6:
              local_b8 = (int *)0x0;
            }
          }
          else {
            puVar7 = (undefined4 *)FUN_146859566();
            if (puVar7 == (undefined4 *)0x0) goto LAB_142adedc6;
            local_b8 = (int *)((ulonglong)CONCAT24(uVar1 >> 2,*puVar7) | 0x8000000000000000);
          }
          if (local_b8 == (int *)0x0) {
LAB_142adef08:
            local_78 = 0;
            lStack_70 = 0;
            local_88 = (code *)0x0;
            ppiStack_80 = (int **)0x0;
            local_68 = 0;
          }
          else {
            FUN_1407fba0e(&local_b8,&local_88);
            plVar10 = (longlong *)(ulonglong)*puVar12;
          }
          if (((ulonglong)plVar10 & 1) == 0) {
            plVar10 = *(longlong **)puVar12;
            if (plVar10 != (longlong *)0x0) {
              uVar20 = *(uint *)(plVar10 + 1);
              lVar3 = *plVar10;
              uVar9 = 0;
              iVar13 = (int)((ulonglong)DAT_14c947d08 >> 0x20);
              uVar19 = uVar20;
              if (0 < (int)uVar20) {
                do {
                  uVar17 = (uVar19 >> 1) + uVar9;
                  iVar11 = *(int *)(lVar3 + (ulonglong)uVar17 * 0x18) - (int)DAT_14c947d08;
                  if (iVar11 == 0) {
                    iVar11 = *(int *)(lVar3 + 4 + (ulonglong)uVar17 * 0x18) - iVar13;
                  }
                  if (iVar11 < 0) {
                    uVar9 = uVar17 + (uVar19 & 1);
                  }
                  bVar6 = 1 < uVar19;
                  uVar19 = uVar19 >> 1;
                } while (bVar6);
              }
              if ((int)uVar20 <= (int)uVar9) goto LAB_142adee09;
              piVar14 = (int *)(lVar3 + (ulonglong)uVar9 * 0x18);
              iVar11 = (int)DAT_14c947d08 - *piVar14;
              if (iVar11 == 0) {
                iVar11 = iVar13 - piVar14[1];
              }
              local_50 = (longlong *)0x0;
              if (-1 < iVar11) {
                local_50 = (longlong *)(piVar14 + 2);
              }
              goto LAB_142adee0b;
            }
LAB_142adef32:
            local_a8 = 0;
            lStack_a0 = 0;
            local_b8 = (int *)0x0;
            uStack_b0 = 0;
            local_98 = 0;
          }
          else {
            puVar8 = (uint *)FUN_146859566(puVar12);
            if (puVar8 == (uint *)0x0) {
LAB_142adee09:
              local_50 = (longlong *)0x0;
            }
            else {
              local_50 = (longlong *)
                         ((((ulonglong)plVar10 & 0xffff) >> 2) << 0x20 | (ulonglong)*puVar8 |
                         0x8000000000000000);
            }
LAB_142adee0b:
            if (local_50 == (longlong *)0x0) goto LAB_142adef32;
            FUN_1407fba0e(&local_50,&local_b8);
          }
          if (((local_88 != (code *)0x0 || lStack_70 != 0) || local_68 != 0) &&
             ((local_b8 != (int *)0x0 || lStack_a0 != 0) || local_98 != 0)) {
            local_50 = &local_c8;
            local_c8 = lStack_70;
            local_c0 = local_68;
            local_48 = &local_60;
            local_60 = lStack_a0;
            local_58 = local_98;
            FUN_1408b7084(piVar2 + 0x1ee,local_3c);
            *(undefined1 *)(piVar2 + 0x22e) = 1;
          }
          break;
        }
        iVar13 = *(int *)(lVar5 + lVar15 * 0x18 + 0x10);
      } while (iVar13 != -1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142adf054 FUN_142adf054 body=111 status=ok
// SIG undefined FUN_142adf054(void)

undefined8 FUN_142adf054(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_1;
  FUN_1468fc08c(local_38,*param_2,param_2[2]);
  FUN_14700811a(uVar1,local_3c,local_38,0);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142adf0c4 FUN_142adf0c4 body=111 status=ok
// SIG undefined FUN_142adf0c4(void)

undefined8 FUN_142adf0c4(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_1;
  FUN_1468fc08c(local_38,*(undefined8 *)*param_2,((undefined8 *)*param_2)[2]);
  FUN_14700811a(uVar1,local_3c,local_38,0);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142adf134 FUN_142adf134 body=1901 status=ok
// SIG undefined FUN_142adf134(void)

/* WARNING: Removing unreachable block (ram,0x000142adf5cb) */

void FUN_142adf134(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ushort *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  ushort uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ushort uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong lVar19;
  uint *puVar20;
  longlong lVar21;
  undefined8 *puVar22;
  longlong lVar23;
  undefined8 *puVar24;
  undefined1 auStack_348 [36];
  uint local_324;
  ulonglong local_320;
  ulonglong local_318;
  undefined2 *local_310;
  int local_304;
  undefined8 *local_300;
  longlong *local_2f8;
  ulonglong local_2f0;
  undefined8 *local_2e8;
  ulonglong local_2e0;
  uint *local_2d8;
  undefined8 *local_2d0;
  ulonglong *local_2c8;
  ulonglong local_2c0;
  undefined2 *local_2b8;
  undefined2 *local_2b0;
  ushort *local_2a8;
  int local_2a0;
  undefined2 *local_298;
  int local_290;
  undefined2 *local_288;
  undefined2 *local_280;
  undefined8 *local_278;
  char local_270;
  undefined2 local_268 [128];
  undefined8 local_168;
  undefined8 uStack_160;
  ulonglong *local_158;
  undefined8 local_150;
  undefined2 local_148 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_348;
  *(int *)(param_1[1] + 0x68) = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  iVar10 = *(int *)(param_1[1] + 0x68) + *(int *)(param_1[2] + 8);
  if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar10);
  }
  if (*(int *)(param_1[2] + 0xc) < iVar10) {
    FUN_1402191ca();
  }
  uVar5 = *(uint *)(param_2 + 5);
  if (uVar5 == 0) {
    local_2f0 = 1;
    uVar15 = 0;
    iVar10 = 0;
    uVar4 = 0;
  }
  else {
    puVar6 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar6 = (uint *)(param_2 + 2);
    }
    uVar4 = *puVar6;
    if (uVar4 == 0) {
      iVar10 = uVar5 + 0x1e;
      if (-1 < (int)(uVar5 - 1)) {
        iVar10 = uVar5 - 1;
      }
      uVar15 = 0;
      uVar14 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar14 = uVar15;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar15) goto LAB_142adf21b;
        iVar10 = iVar10 + 0x20;
        uVar4 = puVar6[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar4 == 0);
    }
    else {
      uVar15 = 0;
      iVar10 = 0;
    }
    local_2f0 = (ulonglong)(-uVar4 & uVar4);
    uVar14 = local_2f0 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    uVar4 = (iVar10 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    if ((int)uVar5 <= (int)uVar4) {
      uVar4 = uVar5;
    }
  }
  if (uVar4 != uVar5) {
    local_2d0 = &local_168;
    local_2c8 = &local_48;
    local_324 = 0xffffffff;
    local_300 = param_1;
    local_2f8 = param_2;
    local_2e0 = (ulonglong)uVar5;
    local_2d8 = (uint *)(param_2 + 2);
    do {
      puVar22 = *(undefined8 **)(*param_2 + 8 + (longlong)(int)uVar4 * 0x18);
      local_270 = '\0';
      local_288 = local_268;
      local_278 = local_2d0;
      local_320 = uVar15;
      local_304 = iVar10;
      local_280 = local_288;
      FUN_14005eb5c(puVar22,&local_288);
      local_318 = (longlong)local_280 - (longlong)local_288;
      *local_280 = 0;
      local_2b8 = local_288;
      param_1 = (undefined8 *)*param_1;
      local_150 = local_150 & 0xffffffffffffff00;
      local_168 = local_148;
      local_158 = local_2c8;
      local_2e8 = puVar22;
      uStack_160 = local_168;
      FUN_14005eb5c(puVar22,&local_168);
      uVar15 = (longlong)uStack_160 - (longlong)local_168;
      *uStack_160 = 0;
      local_310 = local_168;
      lVar23 = (longlong)*(int *)((undefined8 *)*param_1 + 1);
      if (lVar23 != 0) {
        puVar22 = *(undefined8 **)*param_1;
        puVar24 = puVar22 + lVar23 * 2;
        uVar4 = (uint)(uVar15 >> 1);
        uVar5 = (int)uVar4 >> 0x1f & uVar4;
        iVar10 = uVar4 - uVar5;
        local_2b0 = local_168 + (int)uVar5;
        local_2c0 = (ulonglong)-uVar4;
        do {
          puVar2 = (ushort *)*puVar22;
          uVar5 = *(int *)(puVar22 + 1) - 1;
          if (*(int *)(puVar22 + 1) == 0) {
            uVar5 = 0;
          }
          lVar23 = 0;
LAB_142adf3da:
          iVar11 = (int)((ulonglong)uVar5 + lVar23);
          if (2 < iVar11) {
            uVar15 = (ulonglong)uVar5 + lVar23 & 0xffffffff;
            if (((puVar2[uVar15 - 1] != 0x2f) && (puVar2[uVar15 - 1] != 0x5c)) ||
               (puVar2[uVar15 - 2] == 0x3a)) goto LAB_142adf43d;
LAB_142adf3fe:
            lVar23 = lVar23 + -1;
            goto LAB_142adf3da;
          }
          if (iVar11 == 2) {
            if (((puVar2[1] != 0x5c) && (puVar2[1] != 0x2f)) ||
               ((*puVar2 - 0x2f < 0x2e &&
                ((0x200000000801U >> ((ulonglong)(*puVar2 - 0x2f) & 0x3f) & 1) != 0))))
            goto LAB_142adf43d;
            goto LAB_142adf3fe;
          }
          if (iVar11 == 0) goto LAB_142adf4d6;
LAB_142adf43d:
          if (iVar11 <= (int)uVar4) {
            local_290 = iVar10;
            if (iVar11 < iVar10) {
              local_290 = iVar11;
            }
            if (local_290 < 1) {
              local_290 = 0;
            }
            local_298 = local_2b0;
            local_2a8 = puVar2;
            local_2a0 = iVar11;
            cVar3 = FUN_14005b3f4(&local_2a8,&local_298);
            if (cVar3 != '\0') {
              if (iVar11 + (int)local_2c0 == 0) {
LAB_142adf506:
                if ((char)local_150 == '\x01') {
                  FUN_1400020a8(local_310);
                }
                lVar23 = local_300[1];
                goto LAB_142adf531;
              }
              if ((puVar2[(longlong)(int)uVar5 + lVar23 + -1] == 0x2f) ||
                 (puVar2[(longlong)(int)uVar5 + lVar23 + -1] == 0x5c)) {
                if ((uVar5 + (int)lVar23 != 1) || ((local_310[1] != 0x2f && (local_310[1] != 0x5c)))
                   ) goto LAB_142adf506;
              }
              else if ((local_310[(int)uVar5 + lVar23] == 0x5c) ||
                      (local_310[(int)uVar5 + lVar23] == 0x2f)) goto LAB_142adf506;
            }
          }
LAB_142adf4d6:
          puVar22 = puVar22 + 2;
        } while (puVar22 != puVar24);
      }
      if ((char)local_150 == '\x01') {
        FUN_1400020a8(local_310);
      }
      lVar23 = local_300[1];
      uVar15 = local_320;
      puVar6 = local_2d8;
      param_2 = local_2f8;
      param_1 = local_300;
      iVar10 = local_304;
      if ((longlong)*(int *)(lVar23 + 0x28) != 0) {
        plVar18 = *(longlong **)(lVar23 + 0x20);
        plVar9 = plVar18 + (longlong)*(int *)(lVar23 + 0x28) * 2;
        iVar11 = (int)(local_318 >> 1);
        uVar14 = (local_318 & 0x1ffffffff) >> 1;
LAB_142adf65b:
        uVar5 = *(uint *)(plVar18 + 1);
        iVar7 = uVar5 - 1;
        if (uVar5 == 0) {
          iVar7 = 0;
        }
        if (iVar7 != iVar11) goto LAB_142adf716;
        if ((iVar11 != 0 && uVar14 != 0) && 1 < uVar5) {
          lVar21 = 0;
          lVar19 = (longlong)iVar11;
          do {
            uVar16 = *(ushort *)((longlong)local_2b8 + lVar21);
            uVar17 = (ulonglong)uVar16;
            uVar12 = *(ushort *)(*plVar18 + lVar21);
            if (uVar16 == uVar12) {
              if (uVar16 == 0) break;
            }
            else {
              local_318 = uVar14;
              if (0x7f < (uVar12 | uVar16)) goto LAB_142adf702;
              uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
              uVar13 = (ulonglong)uVar12;
              uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
              if ((&DAT_149e05da0)[uVar17] != (&DAT_149e05da0)[uVar13]) goto LAB_142adf702;
            }
            if (lVar19 == 1) break;
            lVar19 = lVar19 + -1;
            lVar21 = lVar21 + 2;
          } while( true );
        }
LAB_142adf531:
        puVar6 = local_2d8;
        param_2 = local_2f8;
        param_1 = local_300;
        iVar10 = local_304;
        uVar15 = local_320;
        plVar18 = *(longlong **)(lVar23 + 0x60);
        if (plVar18 != (longlong *)0x0) {
          FUN_1468fc08c(&local_168,*local_2e8,local_2e8[2]);
          lVar23 = plVar18[1];
          uVar5 = (int)lVar23 + 1;
          *(uint *)(plVar18 + 1) = uVar5;
          if (*(uint *)((longlong)plVar18 + 0xc) < uVar5) {
            FUN_1406f071e(plVar18);
          }
          lVar19 = *plVar18;
          lVar23 = (longlong)(int)lVar23 * 0x20;
          puVar1 = (undefined4 *)(lVar19 + lVar23);
          *puVar1 = (undefined4)local_168;
          puVar1[1] = local_168._4_4_;
          puVar1[2] = (undefined4)uStack_160;
          puVar1[3] = uStack_160._4_4_;
          *(undefined8 *)(lVar19 + 0x10 + lVar23) = 0;
          *(ulonglong **)(lVar19 + 0x10 + lVar23) = local_158;
          local_158 = (ulonglong *)0x0;
          *(undefined4 *)(lVar19 + 0x18 + lVar23) = (undefined4)local_150;
          *(undefined4 *)(lVar19 + 0x1c + lVar23) = local_150._4_4_;
          local_150 = 0;
        }
        plVar18 = (longlong *)param_1[2];
        iVar11 = (int)plVar18[1];
        *(uint *)(plVar18 + 1) = iVar11 + 1U;
        if (*(uint *)((longlong)plVar18 + 0xc) < iVar11 + 1U) {
          FUN_1446f84a2(plVar18,iVar11);
        }
        *(undefined8 *)(*plVar18 + (longlong)iVar11 * 8) = *local_2e8;
      }
LAB_142adf723:
      lVar23 = param_1[3];
      if (*(int *)(lVar23 + 8) != *(int *)(lVar23 + 0x34)) {
        FUN_1468fc08c(&local_168,*local_2e8,local_2e8[2]);
        FUN_147008394(lVar23,&local_168);
        if (local_158 != (ulonglong *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_270 == '\x01') {
        FUN_1400020a8(local_288);
      }
      local_324 = local_324 & ~(uint)local_2f0;
      puVar20 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar20 = puVar6;
      }
      uVar5 = *(uint *)(param_2 + 5);
      iVar11 = (int)uVar15;
      lVar23 = (longlong)iVar11;
      uVar4 = puVar20[lVar23] & local_324;
      if (uVar4 == 0) {
        iVar7 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar7 = uVar5 - 1;
        }
        iVar7 = iVar7 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar11) {
          iVar8 = iVar11;
        }
        if (iVar11 < iVar7) {
          lVar19 = 0;
          do {
            uVar4 = puVar20[lVar23 + lVar19 + 1];
            if (uVar4 != 0) {
              uVar15 = (ulonglong)(iVar11 + (int)lVar19 + 1);
              local_324 = 0xffffffff;
              goto LAB_142adf7cc;
            }
            iVar10 = iVar10 + 0x20;
            lVar19 = lVar19 + 1;
          } while (iVar8 - lVar23 != lVar19);
          local_324 = 0xffffffff;
          iVar11 = iVar8;
        }
        uVar15 = (ulonglong)(iVar11 + 1);
        param_2 = local_2f8;
        param_1 = local_300;
        uVar4 = uVar5;
      }
      else {
LAB_142adf7cc:
        local_2f0 = (ulonglong)(-uVar4 & uVar4);
        uVar14 = local_2f0 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        uVar4 = (iVar10 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
        if ((int)uVar5 <= (int)uVar4) {
          uVar4 = uVar5;
        }
      }
    } while (uVar4 != (uint)local_2e0);
  }
LAB_142adf21b:
  if ((local_48 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_142adf702:
  if (uVar16 == uVar12) goto LAB_142adf531;
LAB_142adf716:
  plVar18 = plVar18 + 2;
  if (plVar18 == plVar9) goto LAB_142adf723;
  goto LAB_142adf65b;
}



// FUNCTION 142adf8a4 FUN_142adf8a4 body=73 status=ok
// SIG undefined FUN_142adf8a4(void)

void FUN_142adf8a4(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if ((*(int *)(*param_1 + 8) != *(int *)(*param_1 + 0x34)) &&
     (lVar2 = param_2[2], iVar1 = *(int *)((longlong)param_2 + 0xc), (int)lVar2 != iVar1)) {
    iVar3 = 0;
    do {
      FUN_144a8b5fe(*param_1,*(undefined8 *)
                              (*param_2 +
                              (ulonglong)
                              (*(int *)((longlong)param_2 + 0xc) + iVar3 & *(uint *)(param_2 + 1)) *
                              8));
      iVar3 = iVar3 + 1;
    } while ((int)lVar2 - iVar1 != iVar3);
  }
  return;
}



// FUNCTION 142adf924 FUN_142adf924 body=12 status=ok
// SIG undefined FUN_142adf924(void)

void FUN_142adf924(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142adf92d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142adf930 FUN_142adf930 body=29 status=ok
// SIG undefined FUN_142adf930(void)

undefined8 FUN_142adf930(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142adf94e FUN_142adf94e body=184 status=ok
// SIG undefined FUN_142adf94e(void)

/* WARNING: Removing unreachable block (ram,0x000142adf9e3) */

void FUN_142adf94e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_2;
  lVar1 = *(longlong *)(param_1 + 8);
  FUN_1400021e4(&local_28);
  lVar3 = (longlong)*(int *)(lVar1 + 0x20);
  uVar2 = *(int *)(lVar1 + 0x20) + 1;
  *(uint *)(lVar1 + 0x20) = uVar2;
  if (*(uint *)(lVar1 + 0x24) < uVar2) {
    FUN_140fde09a((longlong *)(lVar1 + 0x18));
  }
  lVar1 = *(longlong *)(lVar1 + 0x18);
  *(undefined8 *)(lVar1 + lVar3 * 0x18) = 0;
  *(undefined8 *)(lVar1 + lVar3 * 0x18) = local_38;
  *(undefined4 *)(lVar1 + 8 + lVar3 * 0x18) = (undefined4)local_30;
  *(undefined4 *)(lVar1 + 0xc + lVar3 * 0x18) = local_30._4_4_;
  *(undefined4 *)(lVar1 + 0x10 + lVar3 * 0x18) = 0;
  local_30 = 0;
  local_38 = 0;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142adfa12 FUN_142adfa12 body=184 status=ok
// SIG undefined FUN_142adfa12(void)

/* WARNING: Removing unreachable block (ram,0x000142adfaa7) */

void FUN_142adfa12(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_2;
  lVar1 = *(longlong *)(param_1 + 8);
  FUN_1400021e4(&local_28);
  lVar3 = (longlong)*(int *)(lVar1 + 0x20);
  uVar2 = *(int *)(lVar1 + 0x20) + 1;
  *(uint *)(lVar1 + 0x20) = uVar2;
  if (*(uint *)(lVar1 + 0x24) < uVar2) {
    FUN_140fde09a((longlong *)(lVar1 + 0x18));
  }
  lVar1 = *(longlong *)(lVar1 + 0x18);
  *(undefined8 *)(lVar1 + lVar3 * 0x18) = 0;
  *(undefined8 *)(lVar1 + lVar3 * 0x18) = local_38;
  *(undefined4 *)(lVar1 + 8 + lVar3 * 0x18) = (undefined4)local_30;
  *(undefined4 *)(lVar1 + 0xc + lVar3 * 0x18) = local_30._4_4_;
  *(undefined4 *)(lVar1 + 0x10 + lVar3 * 0x18) = 1;
  local_30 = 0;
  local_38 = 0;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142adfacc FUN_142adfacc body=63 status=ok
// SIG undefined FUN_142adfacc(void)

undefined8 FUN_142adfacc(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = *param_2;
  lVar3 = *param_1;
  iVar1 = *(int *)(lVar3 + 0x10);
  *(uint *)(lVar3 + 0x10) = iVar1 + 1U;
  if (*(uint *)(lVar3 + 0x14) < iVar1 + 1U) {
    FUN_140899908(lVar3,iVar1);
  }
  lVar4 = *(longlong *)(lVar3 + 8);
  if (*(longlong *)(lVar3 + 8) == 0) {
    lVar4 = lVar3;
  }
  *(undefined8 *)(lVar4 + (longlong)iVar1 * 8) = uVar2;
  return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
}



// FUNCTION 142adfb0c FUN_142adfb0c body=65 status=ok
// SIG undefined FUN_142adfb0c(void)

undefined8 FUN_142adfb0c(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = *param_2;
  lVar3 = *param_1;
  iVar1 = *(int *)(lVar3 + 0x10);
  *(uint *)(lVar3 + 0x10) = iVar1 + 1U;
  if (*(uint *)(lVar3 + 0x14) < iVar1 + 1U) {
    FUN_14700906e(lVar3,iVar1);
  }
  lVar4 = *(longlong *)(lVar3 + 8);
  if (*(longlong *)(lVar3 + 8) == 0) {
    lVar4 = lVar3;
  }
  *(undefined8 *)(lVar4 + (longlong)iVar1 * 8) = uVar2;
  return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
}



// FUNCTION 142adfb4e FUN_142adfb4e body=55 status=ok
// SIG undefined FUN_142adfb4e(void)

undefined8 FUN_142adfb4e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1407de694(param_1,iVar1);
  }
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = uVar2;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 142adfb86 FUN_142adfb86 body=252 status=ok
// SIG undefined FUN_142adfb86(void)

void FUN_142adfb86(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_298 [36];
  undefined1 local_274 [4];
  undefined1 local_270 [8];
  undefined1 *local_268;
  undefined4 local_260;
  undefined8 local_258;
  int local_250;
  char local_241;
  undefined8 local_240;
  undefined1 *local_238;
  undefined1 *local_230;
  ulonglong *local_228;
  char local_220;
  undefined1 local_218 [512];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_240 = *param_2;
  lVar1 = *param_1;
  local_238 = local_218;
  local_220 = '\0';
  local_228 = &local_18;
  local_230 = local_238;
  FUN_14005eb5c(&local_240,&local_238);
  local_268 = local_238;
  local_260 = (undefined4)((ulonglong)((longlong)local_230 - (longlong)local_238) >> 1);
  FUN_144aa0ab0(&local_258,&local_268,&local_241,0);
  if ((local_250 != 0) && (local_241 == '\0')) {
    FUN_1446f82e2(local_270,local_250,local_258,1);
    FUN_144869592(lVar1 + 0xd58,local_274,local_270,0);
  }
  if (local_220 == '\x01') {
    FUN_1400020a8(local_238);
  }
  if ((local_18 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142adfc8a FUN_142adfc8a body=73 status=ok
// SIG undefined FUN_142adfc8a(void)

void FUN_142adfc8a(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  FUN_1470094f0(*param_1,local_14,&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142adfcde FUN_142adfcde body=12 status=ok
// SIG undefined FUN_142adfcde(void)

void FUN_142adfcde(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142adfce7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142adfcea FUN_142adfcea body=29 status=ok
// SIG undefined FUN_142adfcea(void)

undefined8 FUN_142adfcea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142adfd2a FUN_142adfd2a body=12 status=ok
// SIG undefined FUN_142adfd2a(void)

void FUN_142adfd2a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142adfd33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142adfd36 FUN_142adfd36 body=29 status=ok
// SIG undefined FUN_142adfd36(void)

undefined8 FUN_142adfd36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142adfd54 FUN_142adfd54 body=158 status=ok
// SIG undefined FUN_142adfd54(void)

undefined8 FUN_142adfd54(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = *param_2;
  local_48 = 0;
  local_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_3c = 0xffffffff00000080;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  (*(code *)*param_1)(param_1[1],&local_70,&local_68);
  local_20 = 0;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_14700a4fc(&local_68);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142adfdf3 FUN_142adfdf3 body=1023 status=ok
// SIG undefined FUN_142adfdf3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142adfdf3(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_149fc3820;
  local_68 = 1;
  FUN_14282b410(L"/Script/AssetRegistry",&PTR_FUN_149fc3870,1,&PTR_FUN_149fc3840);
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  _DAT_14c99d640 = (ulonglong)uVar2;
  DAT_14c99d648 = 0x58028e44000;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14c99d658,L"AssetRegistry.BlockPackagesWithMarkOfTheWeb",&DAT_14c99d650,
                L"Whether package files with mark of the web are blocked from the asset registry");
  atexit(FUN_142ac3355);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14c99d670,L"AssetRegistry.IgnoreEmptyDirectories",&DAT_14c99d668,
                L"If true, completely empty leaf directories are ignored by the asset registry while scanning"
               );
  atexit(FUN_142ac339a);
  DAT_14c99d680 = 0;
  _DAT_14c99d688 = 0;
  DAT_14c99d690 = 0;
  DAT_14c99d698._0_1_ = 0;
  ram0x00014c99d699 = 0;
  DAT_14c99d6a0 = 0;
  _DAT_14c99d6a1 = 0;
  atexit(FUN_142ac33df);
  FUN_140056680(&local_40,L"4F4C364CC08C47B9BF18278136E1CB6E");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14c99d6b8);
  if (cVar1 == '\0') {
    _DAT_14c99d6b8 = 0;
    _DAT_14c99d6c0 = 0;
  }
  if (local_40 != (char *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/AssetRegistry",&PTR_FUN_149fc6fb0,1,&PTR_FUN_149fc6f80);
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  FUN_14282b410(L"/Script/AssetRegistry",&PTR_FUN_149fc7070,1,0);
  FUN_14605a7b6();
  atexit((_func_5014 *)&LAB_142acc56b);
  FUN_1446f470e(&DAT_14c99ded0,&DAT_149e060b2,1);
  FUN_1446f470e(&local_40,&DAT_149e060b2,1);
  FUN_1446f470e(&local_48,&DAT_149fc7098,1);
  DAT_14c99dec0 = local_48;
  DAT_14c99dec8 = local_40;
  FUN_1446f470e(&DAT_14c99d890,L"Stage_ChunkCount",1);
  FUN_1446f470e(&DAT_14c99d898,L"Stage_ChunkSize",1);
  FUN_1446f470e(&DAT_14c99d8a0,L"Stage_ChunkCompressedSize",1);
  FUN_1446f470e(&DAT_14c99d8a8,L"Stage_ChunkInstalledSize",1);
  FUN_1446f470e(&DAT_14c99d8b0,L"Stage_ChunkStreamingSize",1);
  FUN_1446f470e(&DAT_14c99d8b8,L"Stage_ChunkOptionalSize",1);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14c99d8c0,L"AssetRegistry.MaxSecondsPerFrame",&DAT_14c75f4cc,
                L"Maximum amount of time allowed for Asset Registry processing, in seconds");
  atexit(FUN_142acc570);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14c99d8d0,L"AssetRegistry.MaxSecondsPerTickBackgroundThread",&DAT_14c75f4d0,
                L"Maximum amount of time allowed for Asset Registry processing, in seconds, per iteration on the background thread. Very large values could result in main thread delays due to the background thread holding locks."
               );
  atexit(FUN_142acc5b5);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14c99d8e8,L"AssetRegistry.DeferDependencySort",&DAT_14c99d8e0,
                L"If true, the dependency lists on dependency nodes will not be sorted until after the initial load is complete"
               );
  atexit(FUN_142acc5fa);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14c99d8f8,L"AssetRegistry.DeferReferencerSort",&DAT_14c75f4d4,
                L"If true, the referencer list on dependency nodes will not be sorted until after the initial load is complete"
               );
  atexit(FUN_142acc63f);
  FUN_1446f470e(&DAT_14c99d908,L"DestinationObject",1);
  FUN_145c80362();
  atexit((_func_5014 *)&LAB_142acc684);
  local_40 = (char *)CONCAT71(local_40._1_7_,1);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14c99dea0,L"gbx.EnableAssetRegistryWaitForPath",&local_40,
                L"Will enable use of the gbx custom WaitForPath asset registry function. If disabled, will use ScanPathsSynchronous."
               );
  atexit(FUN_142ad83a6);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ae01f4 FUN_142ae01f4 body=656 status=ok
// SIG undefined FUN_142ae01f4(void)

void FUN_142ae01f4(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_288 [32];
  code *local_268;
  undefined8 *local_260;
  undefined8 local_258;
  undefined8 local_250;
  longlong local_248;
  undefined4 local_240;
  longlong local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined8 *puStack_220;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined4 local_1f4;
  longlong local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  longlong local_198;
  undefined4 local_190;
  undefined1 local_188 [48];
  undefined1 local_158 [8];
  undefined4 local_150;
  int local_14c;
  longlong local_148;
  undefined8 local_140;
  char local_47;
  ulonglong local_38;
  
  plVar1 = DAT_14c9485b8;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_288;
  FUN_14700c3ac(local_188,param_1);
  local_150 = 0;
  if (local_14c != 0) {
    FUN_1402191ca(local_158,0);
  }
  lVar5 = local_148;
  local_238 = local_148;
  local_148 = 0;
  uVar2 = (int)local_140;
  local_230 = (int)local_140;
  local_22c = local_140._4_4_;
  local_140 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1ac = 0xffffffff00000080;
  local_1a4 = 0;
  local_198 = 0;
  local_190 = 0;
  if (local_47 == '\x01') {
    local_208 = 0;
    local_200 = 0;
    local_228 = 0;
    puStack_220 = (undefined8 *)0x0;
    local_1fc = 0xffffffff00000080;
    local_1f4 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    (**(code **)(*plVar1 + 0x168))(plVar1,&local_238,&local_228,&local_1d8);
    local_1e0 = 0;
    if (local_1e8 != 0) {
      FUN_1400020a8();
    }
    FUN_1403950f6(&local_228);
  }
  else {
    local_248 = lVar5;
    local_240 = uVar2;
    FUN_1412c8198(&local_1d8);
  }
  uVar4 = local_140._4_4_;
  local_140 = (ulonglong)local_140._4_4_ << 0x20;
  if ((int)uVar4 < 1) {
    FUN_1403af196(&local_148,1);
  }
  FUN_1446f470e(&local_250,L"BlueprintCore",1);
  FUN_1446f470e(&local_258,L"/Script/Engine",1);
  uVar3 = local_140;
  lVar5 = (longlong)(int)local_140;
  uVar4 = (int)local_140 + 1;
  local_140 = CONCAT44(local_140._4_4_,uVar4);
  if (local_140._4_4_ < uVar4) {
    FUN_1401d5364(&local_148,uVar3 & 0xffffffff);
  }
  *(undefined8 *)(local_148 + lVar5 * 0x10) = local_258;
  *(undefined8 *)(local_148 + 8 + lVar5 * 0x10) = local_250;
  local_47 = 1;
  local_260 = &local_228;
  puStack_220 = &local_1d8;
  local_268 = FUN_142ae9a38;
  local_228 = param_2;
  (**(code **)(*plVar1 + 0x70))(plVar1,local_188,&local_268,0);
  local_190 = 0;
  if (local_198 != 0) {
    FUN_1400020a8();
  }
  FUN_1403950f6(&local_1d8);
  if (local_238 != 0) {
    FUN_1400020a8();
  }
  FUN_14019571a(local_188);
  if ((local_38 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ae0486 FUN_142ae0486 body=41 status=ok
// SIG undefined FUN_142ae0486(void)

void FUN_142ae0486(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_145b17780();
  if (plVar1[0x22] != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142ae04a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 1000))(plVar1);
  return;
}



// FUNCTION 142ae04b0 FUN_142ae04b0 body=3826 status=ok
// SIG undefined FUN_142ae04b0(void)

void FUN_142ae04b0(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined ***pppuVar10;
  undefined1 *puVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined ***pppuVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  undefined ***pppuVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined1 auStack_448 [32];
  undefined ***local_428;
  char *local_420;
  longlong local_418;
  int local_40c;
  longlong local_408;
  longlong local_400;
  longlong *local_3f8;
  longlong *local_3f0;
  longlong *local_3e8;
  longlong *local_3e0;
  longlong *local_3d8;
  undefined ***local_3d0;
  undefined4 local_3c8;
  undefined **local_3c0;
  undefined ***local_3b8;
  undefined8 uStack_3b0;
  char local_399;
  undefined ***local_398;
  undefined4 local_390;
  undefined8 *local_388;
  int local_380;
  undefined ***local_378;
  undefined ***local_370;
  undefined ***pppuStack_368;
  ulonglong local_360;
  undefined **local_358;
  longlong *local_350;
  undefined **local_158;
  undefined8 uStack_150;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  int local_124;
  undefined1 local_120 [8];
  undefined1 *local_118;
  int local_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  int local_d4;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  int local_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  undefined1 local_a8 [16];
  longlong local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 uStack_88;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_448;
  lVar22 = param_2[0x15];
  iVar12 = *(int *)((longlong)param_2 + 0xd4);
  local_3f8 = (longlong *)CONCAT44(local_3f8._4_4_,(int)param_2[1]);
  local_400 = CONCAT44(local_400._4_4_,*(undefined4 *)((longlong)param_2 + 0x34));
  iVar16 = (int)param_2[0xb];
  local_408 = CONCAT44(local_408._4_4_,*(undefined4 *)((longlong)param_2 + 0x84));
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0x80;
  uStack_88 = 0xffffffff;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_418 = param_1;
  FUN_147010340(param_1,&local_388);
  local_e8 = 0;
  local_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = (undefined1 *)0x0;
  local_c0 = 0;
  local_138 = 0;
  local_130 = 0;
  local_158 = (undefined **)0x0;
  uStack_150 = 0;
  local_12c = 0xffffffff00000080;
  local_124 = 0;
  local_118 = (undefined1 *)0x0;
  local_110 = 0;
  if ((longlong)local_380 != 0) {
    puVar27 = local_388 + local_380;
    local_3e8 = param_2 + 0x1b;
    local_3d8 = param_2 + 7;
    local_3e0 = param_2 + 0x11;
    local_3f0 = (longlong *)(local_418 + 400);
    puVar26 = local_388;
    local_40c = iVar16;
LAB_142ae0bd3:
    plVar13 = (longlong *)*puVar26;
    if ((int)lVar22 != iVar12) {
      FUN_1468581d0(&DAT_14c927a10,&local_378,(int)plVar13[6]);
      iVar16 = local_40c;
      if ((longlong)(int)local_370 != 0) {
        plVar14 = (longlong *)param_2[0x1c];
        if ((longlong *)param_2[0x1c] == (longlong *)0x0) {
          plVar14 = local_3e8;
        }
        pppuVar10 = local_378;
        do {
          if ((int)param_2[0x15] != *(int *)((longlong)param_2 + 0xd4)) {
            for (iVar9 = *(int *)((longlong)plVar14 +
                                 (ulonglong)(*(uint *)pppuVar10 & (int)param_2[0x1d] - 1U) * 4);
                iVar9 != -1; iVar9 = *(int *)(param_2[0x14] + (longlong)iVar9 * 0xc + 4)) {
              if (*(uint *)(param_2[0x14] + (longlong)iVar9 * 0xc) == *(uint *)pppuVar10) {
                if (pppuVar10 == (undefined ***)0x0) goto LAB_142ae0e32;
                goto LAB_142ae0be0;
              }
            }
          }
          pppuVar10 = (undefined ***)((longlong)pppuVar10 + 4);
        } while (pppuVar10 != (undefined ***)((longlong)local_378 + (longlong)(int)local_370 * 4));
      }
      cVar6 = '\x01';
      goto LAB_142ae0e3e;
    }
LAB_142ae0be0:
    if ((int)local_3f8 != (int)local_400) {
      cVar6 = '\x01';
      if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
        lVar18 = *plVar13;
        uVar7 = (uint)((ulonglong)lVar18 >> 0x10);
        uVar17 = (uint)lVar18 & 0xffff;
        plVar14 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar14 = local_3d8;
        }
        iVar9 = *(int *)((longlong)plVar14 +
                        (ulonglong)
                        ((int)param_2[9] - 1U &
                        (int)((ulonglong)lVar18 >> 0x20) + ((uint)lVar18 << 0x10 | uVar17) +
                        (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar17 >> 4)) * 4);
        if (iVar9 != -1) {
          do {
            if (*(longlong *)(*param_2 + (longlong)iVar9 * 0x10) == lVar18) goto LAB_142ae0bee;
            iVar9 = *(int *)((longlong)iVar9 * 0x10 + *param_2 + 8);
          } while (iVar9 != -1);
        }
      }
      goto LAB_142ae0e3e;
    }
LAB_142ae0bee:
    if ((iVar16 != (int)local_408) && ((int)param_2[0xb] != *(int *)((longlong)param_2 + 0x84))) {
      lVar18 = *plVar13;
      uVar7 = (uint)((ulonglong)lVar18 >> 0x10);
      uVar17 = (uint)lVar18 & 0xffff;
      plVar14 = (longlong *)param_2[0x12];
      if ((longlong *)param_2[0x12] == (longlong *)0x0) {
        plVar14 = local_3e0;
      }
      iVar9 = *(int *)((longlong)plVar14 +
                      (ulonglong)
                      ((int)param_2[0x13] - 1U &
                      (int)((ulonglong)lVar18 >> 0x20) + ((uint)lVar18 << 0x10 | uVar17) +
                      (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar17 >> 4)) * 4);
      if (iVar9 != -1) {
        do {
          if (*(longlong *)(param_2[10] + (longlong)iVar9 * 0x10) == lVar18) goto LAB_142ae0e32;
          iVar9 = *(int *)((longlong)iVar9 * 0x10 + param_2[10] + 8);
        } while (iVar9 != -1);
      }
    }
    if (*(char *)((longlong)param_2 + 0xf6) == '\x01') {
      if ((*(byte *)(plVar13 + 8) & 1) == 0) {
        if (plVar13[8] != 0) {
          uVar7 = *(uint *)(plVar13[8] + 8);
          goto LAB_142ae0d24;
        }
      }
      else {
        uVar7 = (uint)*(ushort *)((longlong)plVar13 + 0x42);
LAB_142ae0d24:
        if (uVar7 != 0) goto LAB_142ae0d2c;
      }
      local_360 = local_360 & 0xffffffffffffff00;
      local_378 = &local_358;
      pppuStack_368 = &local_158;
      local_370 = local_378;
      FUN_14005eb5c(plVar13,&local_378);
      local_398 = local_378;
      local_390 = (undefined4)((ulonglong)((longlong)local_370 - (longlong)local_378) >> 1);
      cVar6 = FUN_14686edb4(&local_398);
      if (cVar6 == '\0') {
        uVar7 = *(uint *)((longlong)plVar13 + 0x3c);
        if ((char)local_360 == '\x01') {
          FUN_1400020a8(local_378);
        }
        iVar16 = local_40c;
        if ((uVar7 >> 0x1b & 1) == 0) {
          cVar6 = *(char *)((longlong)param_2 + 0xf7);
          goto LAB_142ae0e3e;
        }
      }
      else if ((char)local_360 == '\x01') {
        FUN_1400020a8(local_378);
      }
    }
LAB_142ae0d2c:
    if ((((char)param_2[0x3e] == '\x01') &&
        (FUN_1400b428a(plVar13,&local_378), local_378 != (undefined ***)0x0)) &&
       (local_370 != (undefined ***)0x0)) {
      FUN_140da9508(&local_158,&local_3b8,&local_378);
    }
    goto LAB_142ae0f19;
  }
LAB_142ae05d9:
  local_408 = local_418 + 400;
  local_3b8 = (undefined ***)0x0;
  uStack_3b0 = 0;
  FUN_14700f13c(local_408,&local_3b8);
  if ((longlong)(int)uStack_3b0 != 0) {
    pppuVar19 = local_3b8 + (int)uStack_3b0;
    local_400 = local_418 + 0x88;
    local_3f8 = param_2 + 0x46;
    pppuVar10 = local_3b8;
    do {
      ppuVar1 = *pppuVar10;
      local_3c0 = ppuVar1;
      if ((int)uStack_100 != local_d4) {
        uVar7 = ((uint)((ulonglong)ppuVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)ppuVar1 >> 4)) *
                -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        puVar11 = local_c8;
        if (local_c8 == (undefined1 *)0x0) {
          puVar11 = local_d0;
        }
        for (iVar12 = *(int *)(puVar11 + (ulonglong)(local_c0 - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
            iVar12 != -1; iVar12 = *(int *)((longlong)iVar12 * 0x10 + local_108 + 8)) {
          if (*(undefined ***)(local_108 + (longlong)iVar12 * 0x10) == ppuVar1) goto LAB_142ae0b65;
        }
      }
      if (((char)param_2[0x1f] == '\x01') && (ppuVar1[3] != (undefined *)0x0)) {
LAB_142ae0b4a:
        FUN_1470094f0(&local_108,&local_378,&local_3c0,0);
      }
      else {
        puVar2 = *ppuVar1;
        if ((puVar2 != (undefined *)0x0) &&
           ((ppuVar1[2] == (undefined *)0x0 && (ppuVar1[3] == (undefined *)0x0)))) {
          uVar17 = (uint)puVar2;
          iVar12 = (int)((ulonglong)puVar2 >> 0x20);
          uVar7 = (uint)((ulonglong)puVar2 >> 0x10);
          if (*(int *)(local_418 + 0x58) != *(int *)(local_418 + 0x84)) {
            lVar22 = *(longlong *)(local_418 + 0x90);
            if (*(longlong *)(local_418 + 0x90) == 0) {
              lVar22 = local_400;
            }
            iVar16 = *(int *)(lVar22 + (ulonglong)
                                       (*(int *)(local_418 + 0x98) - 1U &
                                       iVar12 + (uVar17 << 0x10 | uVar17 & 0xffff) +
                                       (uVar7 << 0x13 | uVar7 & 0xffff) + ((uVar17 & 0xffff) >> 4))
                                       * 4);
            if (iVar16 != -1) {
              do {
                if (*(undefined **)(*(longlong *)(local_418 + 0x50) + (longlong)iVar16 * 0x28) ==
                    puVar2) goto LAB_142ae089e;
                iVar16 = *(int *)(*(longlong *)(local_418 + 0x50) + (longlong)iVar16 * 0x28 + 0x20);
              } while (iVar16 != -1);
            }
          }
          if ((int)uStack_b0 != local_84) {
            puVar11 = local_78;
            if (local_78 == (undefined1 *)0x0) {
              puVar11 = local_80;
            }
            for (iVar12 = *(int *)(puVar11 +
                                  (ulonglong)
                                  (local_70 - 1U &
                                  iVar12 + (uVar17 << 0x10 | uVar17 & 0xffff) +
                                  (uVar7 << 0x13 | uVar7 & 0xffff) + ((uVar17 & 0xffff) >> 4)) * 4);
                iVar12 != -1; iVar12 = *(int *)((longlong)iVar12 * 0x10 + local_b8 + 8)) {
              if (*(undefined **)(local_b8 + (longlong)iVar12 * 0x10) == puVar2) goto LAB_142ae089e;
            }
          }
          local_360 = local_360 & 0xffffffffffffff00;
          local_378 = &local_358;
          pppuStack_368 = &local_158;
          local_370 = local_378;
          FUN_14005eb5c(ppuVar1,&local_378);
          local_3d0 = local_378;
          local_3c8 = (undefined4)((ulonglong)((longlong)local_370 - (longlong)local_378) >> 1);
          cVar6 = FUN_14475c62c(&local_3d0);
          if ((char)local_360 == '\x01') {
            FUN_1400020a8(local_378);
          }
          if (cVar6 == '\0') goto LAB_142ae0b4a;
        }
LAB_142ae089e:
        if (((((char)param_2[0x3e] == '\x01') && (puVar2 = ppuVar1[1], puVar2 != (undefined *)0x0))
            && (puVar3 = ppuVar1[2], puVar3 != (undefined *)0x0)) &&
           (ppuVar1[3] == (undefined *)0x0)) {
          uVar17 = (uint)puVar2;
          iVar12 = (int)((ulonglong)puVar2 >> 0x20);
          uVar7 = (uint)((ulonglong)puVar2 >> 0x10);
          if ((int)uStack_150 != local_124) {
            uVar21 = (uint)((ulonglong)puVar3 >> 0x10);
            uVar20 = (uint)puVar3 & 0xffff;
            uVar20 = (int)((ulonglong)puVar3 >> 0x20) + ((uint)puVar3 << 0x10 | uVar20) +
                     (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar20 >> 4);
            uVar21 = (uVar17 << 0x10 | uVar17 & 0xffff) + iVar12 + (uVar7 << 0x13 | uVar7 & 0xffff)
                     + ((uVar17 & 0xffff) >> 4);
            uVar24 = uVar21 >> 0xd ^ -uVar21;
            uVar23 = uVar24 << 8 ^ (-0x61c88647 - uVar21) - uVar24;
            uVar21 = uVar23 >> 0xd ^ (uVar21 - uVar24) - uVar23;
            uVar24 = uVar21 >> 0xc ^ (uVar24 - uVar23) - uVar21;
            uVar25 = uVar24 << 0x10 ^ (uVar23 - uVar21) - uVar24;
            uVar23 = uVar25 >> 5 ^ (uVar21 - uVar24) - uVar25;
            uVar21 = uVar23 >> 3 ^ (uVar24 - uVar25) - uVar23;
            uVar24 = uVar21 << 10 ^ (uVar25 - uVar23) - uVar21;
            uVar21 = uVar20 >> 0xd ^ (uVar24 >> 0xf ^ uVar23 - (uVar21 + uVar24)) - uVar20;
            uVar24 = uVar21 << 8 ^ (-0x61c88647 - uVar20) - uVar21;
            uVar20 = uVar24 >> 0xd ^ (uVar20 - uVar21) - uVar24;
            uVar21 = uVar20 >> 0xc ^ (uVar21 - uVar24) - uVar20;
            uVar24 = uVar21 << 0x10 ^ (uVar24 - uVar20) - uVar21;
            uVar20 = uVar24 >> 5 ^ (uVar20 - uVar21) - uVar24;
            uVar23 = uVar20 >> 3 ^ (uVar21 - uVar24) - uVar20;
            uVar21 = uVar23 << 10 ^ (uVar24 - uVar20) - uVar23;
            puVar11 = local_118;
            if (local_118 == (undefined1 *)0x0) {
              puVar11 = local_120;
            }
            iVar16 = *(int *)(puVar11 +
                             (ulonglong)
                             (local_110 - 1U & (uVar21 >> 0xf ^ uVar20 - (uVar23 + uVar21))) * 4);
            while (iVar16 != -1) {
              lVar22 = (longlong)iVar16;
              if ((local_158[lVar22 * 3] == puVar2) && (local_158[lVar22 * 3 + 1] == puVar3))
              goto LAB_142ae0b65;
              iVar16 = *(int *)(local_158 + lVar22 * 3 + 2);
            }
          }
          if ((int)param_2[0x40] != *(int *)((longlong)param_2 + 0x22c)) {
            plVar13 = (longlong *)param_2[0x47];
            if ((longlong *)param_2[0x47] == (longlong *)0x0) {
              plVar13 = local_3f8;
            }
            iVar12 = *(int *)((longlong)plVar13 +
                             (ulonglong)
                             ((int)param_2[0x48] - 1U &
                             (uVar17 << 0x10 | uVar17 & 0xffff) + iVar12 +
                             (uVar7 << 0x13 | uVar7 & 0xffff) + ((uVar17 & 0xffff) >> 4)) * 4);
            if (iVar12 != -1) {
              do {
                if (*(undefined **)(param_2[0x3f] + (longlong)iVar12 * 0x10) == puVar2)
                goto LAB_142ae0b65;
                iVar12 = *(int *)((longlong)iVar12 * 0x10 + param_2[0x3f] + 8);
              } while (iVar12 != -1);
            }
          }
          goto LAB_142ae0b4a;
        }
      }
LAB_142ae0b65:
      pppuVar10 = pppuVar10 + 1;
    } while (pppuVar10 != pppuVar19);
    if ((longlong)(int)uStack_3b0 != 0) {
      pppuVar10 = local_3b8 + (int)uStack_3b0;
      lVar22 = local_418 + 0x278;
      pppuVar19 = local_3b8;
      do {
        ppuVar1 = *pppuVar19;
        if ((int)uStack_100 != local_d4) {
          uVar7 = ((uint)((ulonglong)ppuVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)ppuVar1 >> 4)) *
                  -0x7a143595;
          uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
          puVar11 = local_c8;
          if (local_c8 == (undefined1 *)0x0) {
            puVar11 = local_d0;
          }
          for (iVar12 = *(int *)(puVar11 + (ulonglong)(local_c0 - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4)
              ; iVar12 != -1; iVar12 = *(int *)((longlong)iVar12 * 0x10 + local_108 + 8)) {
            if (*(undefined ***)(local_108 + (longlong)iVar12 * 0x10) == ppuVar1) {
              FUN_14701c258(local_408,ppuVar1);
              *(int *)(local_418 + 0x264) = *(int *)(local_418 + 0x264) + -1;
              FUN_1400b4012(&local_378,ppuVar1);
              FUN_147019fe0(lVar22,&local_3c0,&local_378);
              if ((ppuVar1 != (undefined **)0x0) && (*(int *)(local_418 + 0x248) == 0)) {
                FUN_14700e1a8(ppuVar1);
                FUN_1400020a8(ppuVar1);
              }
              goto LAB_142ae1307;
            }
          }
        }
        pppuStack_368 = (undefined ***)0x0;
        local_358 = &PTR_LAB_149fcb930;
        local_350 = &local_108;
        local_378 = (undefined ***)&LAB_142aea24e;
        FUN_147010478(ppuVar1,&local_378);
        if (local_378 != (undefined ***)0x0) {
          pppuVar15 = pppuStack_368;
          if (pppuStack_368 == (undefined ***)0x0) {
            pppuVar15 = &local_358;
          }
          (*(code *)(*pppuVar15)[2])();
        }
LAB_142ae1307:
        pppuVar19 = pppuVar19 + 1;
      } while (pppuVar19 != pppuVar10);
    }
  }
  FUN_14700f13c(local_408,&local_3b8);
  pppuVar10 = local_3b8;
  lVar22 = (longlong)(int)uStack_3b0;
  if (lVar22 != 0) {
    lVar18 = 0;
    do {
      lVar4 = *(longlong *)((longlong)pppuVar10 + lVar18);
      if (*(int *)(lVar4 + 0x38) + *(int *)(lVar4 + 0x28) + *(int *)(lVar4 + 0x48) +
          *(int *)(lVar4 + 0x58) == 0) {
        FUN_14700f290(local_418);
      }
      lVar18 = lVar18 + 8;
    } while (lVar22 * 8 != lVar18);
  }
  FUN_14700f48a(local_418 + 0x270);
  if (local_3b8 != (undefined ***)0x0) {
    FUN_1400020a8();
  }
  local_110 = 0;
  if (local_118 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1457d2cd8(&local_158);
  local_c0 = 0;
  if (local_c8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14700a20c(&local_108);
  if (local_388 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar5 = uStack_b0 >> 0x20;
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    FUN_14472eb64(&local_b8,0);
  }
  uStack_88 = 0xffffffff;
  local_84 = 0;
  local_90 = 0;
  if (0x80 < local_8c) {
    local_8c = 0x80;
    FUN_1446efbd8(local_a8,0);
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_448) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_142ae0e32:
  cVar6 = '\x01';
LAB_142ae0e3e:
  local_3b8 = (undefined ***)*plVar13;
  if (plVar13 == (longlong *)0x0) {
    local_3c0 = (undefined **)((ulonglong)local_3c0 & 0xffffffffffffff00);
    local_399 = '\0';
  }
  else {
    local_378 = (undefined ***)*plVar13;
    local_370 = (undefined ***)plVar13[2];
    local_420 = &local_399;
    local_428 = &local_3c0;
    FUN_1470131b6(local_418,plVar13,&local_378,0);
  }
  plVar13 = local_3f0;
  if (cVar6 == '\0') {
    FUN_144a13f80(&local_b8,&local_378,&local_3b8);
  }
  else if (local_399 == '\x01') {
    local_378 = local_3b8;
    local_370 = (undefined ***)0x0;
    pppuStack_368 = (undefined ***)0x0;
    local_360 = 0;
    uVar8 = FUN_147008ecb(&local_378);
    iVar9 = FUN_147008e62(plVar13,uVar8,&local_378);
    if ((iVar9 != -1) &&
       (lVar18 = (longlong)iVar9 * 0x30 + *plVar13, lVar18 != -0x20 && lVar18 != 0)) {
      FUN_1470094f0(&local_108,&local_378);
    }
  }
LAB_142ae0f19:
  puVar26 = puVar26 + 1;
  if (puVar26 == puVar27) goto LAB_142ae05d9;
  goto LAB_142ae0bd3;
}



// FUNCTION 142ae13a4 FUN_142ae13a4 body=106 status=ok
// SIG undefined FUN_142ae13a4(void)

void FUN_142ae13a4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined1 *param_4,
                  undefined1 *param_5)

{
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == (undefined8 *)0x0) {
    *param_4 = 0;
    *param_5 = 0;
  }
  else {
    local_18 = *param_2;
    local_10 = param_2[2];
    local_20 = param_5;
    local_28 = param_4;
    FUN_1470131b6();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ae1410 FUN_142ae1410 body=144 status=ok
// SIG undefined FUN_142ae1410(void)

undefined8 * FUN_142ae1410(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [48];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = (undefined8 *)0x0;
  uStack_20 = 0;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_147010bf2(local_38,&local_38,&local_28);
  if ((int)uStack_20 == 0) {
    uVar1 = 0;
  }
  else {
    if (1 < (int)uStack_20) {
      FUN_14063460b(local_28);
    }
    uVar1 = *local_28;
  }
  *param_2 = uVar1;
  if (local_28 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ae2e08 FUN_142ae2e08 body=3856 status=ok
// SIG undefined FUN_142ae2e08(void)

longlong FUN_142ae2e08(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  int iVar29;
  longlong lVar30;
  undefined1 auStack_258 [40];
  longlong local_230;
  longlong local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  ulonglong local_208;
  ulonglong local_200;
  longlong local_1f8;
  ulonglong local_1f0;
  ulonglong local_1e8;
  ulonglong local_1e0;
  ulonglong local_1d8;
  ulonglong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  longlong *local_108;
  undefined8 *local_100;
  code *local_f8;
  longlong **local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8;
  code **local_c0;
  undefined1 *local_b8;
  code ***local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  iVar7 = *(int *)(param_1 + 0x78);
  if (iVar7 == 0) {
    uVar24 = 1;
    uVar12 = 0;
    iVar18 = 0;
    iVar29 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0x70);
    if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 0x60);
    }
    uVar23 = *puVar8;
    if (uVar23 == 0) {
      iVar18 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar18 = iVar7 + -1;
      }
      uVar27 = 0;
      uVar24 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar24 = uVar27;
      }
      uVar12 = 0;
      iVar18 = 0;
      do {
        if (uVar24 == uVar12) goto LAB_142ae2f9e;
        iVar18 = iVar18 + 0x20;
        uVar23 = puVar8[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar23 == 0);
    }
    else {
      uVar12 = 0;
      iVar18 = 0;
    }
    uVar24 = (ulonglong)(-uVar23 & uVar23);
    uVar27 = uVar24 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar29 = (iVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar29) {
      iVar29 = iVar7;
    }
  }
  if (iVar29 == iVar7) {
    uVar27 = 0;
  }
  else {
    puVar8 = (uint *)(param_1 + 0x60);
    if (*(uint **)(param_1 + 0x70) != (uint *)0x0) {
      puVar8 = *(uint **)(param_1 + 0x70);
    }
    iVar19 = iVar7 + 0x1e;
    if (-1 < iVar7 + -1) {
      iVar19 = iVar7 + -1;
    }
    iVar19 = iVar19 >> 5;
    uVar23 = 0xffffffff;
    uVar27 = 0;
    do {
      uVar25 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x50) + 0x1c + (longlong)iVar29 * 0x28);
      lVar15 = uVar25 * 8;
      if (uVar25 < 2) {
        lVar15 = 0;
      }
      uVar27 = lVar15 + uVar27;
      uVar23 = ~(uint)uVar24 & uVar23;
      iVar29 = (int)uVar12;
      lVar15 = (longlong)iVar29;
      uVar13 = puVar8[lVar15] & uVar23;
      if (uVar13 == 0) {
        iVar22 = iVar19;
        if (iVar19 < iVar29) {
          iVar22 = iVar29;
        }
        if (iVar19 <= iVar29) break;
        lVar30 = 0;
        while( true ) {
          iVar18 = iVar18 + 0x20;
          uVar13 = puVar8[lVar15 + lVar30 + 1];
          if (uVar13 != 0) break;
          lVar30 = lVar30 + 1;
          if (iVar22 - lVar15 == lVar30) goto LAB_142ae2f9e;
        }
        uVar12 = (ulonglong)(iVar29 + (int)lVar30 + 1);
        uVar23 = 0xffffffff;
      }
      uVar24 = (ulonglong)(-uVar13 & uVar13);
      uVar25 = uVar24 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar29 = (iVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar29 < iVar7);
  }
LAB_142ae2f9e:
  iVar7 = *(int *)(param_1 + 200);
  if (iVar7 == 0) {
    uVar25 = 1;
    uVar12 = 0;
    iVar18 = 0;
    iVar29 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0xc0);
    if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 0xb0);
    }
    uVar23 = *puVar8;
    if (uVar23 == 0) {
      iVar18 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar18 = iVar7 + -1;
      }
      uVar12 = 0;
      uVar24 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar24 = uVar12;
      }
      iVar18 = 0;
      do {
        if (uVar24 == uVar12) goto LAB_142ae30ff;
        iVar18 = iVar18 + 0x20;
        uVar23 = puVar8[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar23 == 0);
    }
    else {
      uVar12 = 0;
      iVar18 = 0;
    }
    uVar25 = (ulonglong)(-uVar23 & uVar23);
    uVar24 = uVar25 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar29 = (iVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar29) {
      iVar29 = iVar7;
    }
  }
  if (iVar29 != iVar7) {
    puVar8 = (uint *)(param_1 + 0xb0);
    if (*(uint **)(param_1 + 0xc0) != (uint *)0x0) {
      puVar8 = *(uint **)(param_1 + 0xc0);
    }
    iVar19 = iVar7 + 0x1e;
    if (-1 < iVar7 + -1) {
      iVar19 = iVar7 + -1;
    }
    iVar19 = iVar19 >> 5;
    uVar23 = 0xffffffff;
    do {
      uVar27 = uVar27 + (longlong)
                        *(int *)(*(longlong *)(param_1 + 0xa0) + 0x14 + (longlong)iVar29 * 0x20) * 8
      ;
      uVar23 = ~(uint)uVar25 & uVar23;
      iVar29 = (int)uVar12;
      lVar15 = (longlong)iVar29;
      uVar13 = puVar8[lVar15] & uVar23;
      if (uVar13 == 0) {
        iVar22 = iVar19;
        if (iVar19 < iVar29) {
          iVar22 = iVar29;
        }
        if (iVar19 <= iVar29) break;
        lVar30 = 0;
        while( true ) {
          iVar18 = iVar18 + 0x20;
          uVar13 = puVar8[lVar15 + lVar30 + 1];
          if (uVar13 != 0) break;
          lVar30 = lVar30 + 1;
          if (iVar22 - lVar15 == lVar30) goto LAB_142ae30ff;
        }
        uVar12 = (ulonglong)(iVar29 + (int)lVar30 + 1);
        uVar23 = 0xffffffff;
      }
      uVar25 = (ulonglong)(-uVar13 & uVar13);
      uVar24 = uVar25 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar29 = (iVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar29 < iVar7);
  }
LAB_142ae30ff:
  iVar7 = *(int *)(param_1 + 0x118);
  if (iVar7 == 0) {
    uVar25 = 1;
    iVar18 = 0;
    uVar12 = 0;
    iVar29 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0x110);
    if (*(uint **)(param_1 + 0x110) == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 0x100);
    }
    uVar23 = *puVar8;
    if (uVar23 == 0) {
      iVar18 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar18 = iVar7 + -1;
      }
      uVar12 = 0;
      uVar24 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar24 = uVar12;
      }
      iVar18 = 0;
      do {
        if (uVar24 == uVar12) goto LAB_142ae328f;
        iVar18 = iVar18 + 0x20;
        uVar23 = puVar8[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar23 == 0);
    }
    else {
      iVar18 = 0;
      uVar12 = 0;
    }
    uVar25 = (ulonglong)(-uVar23 & uVar23);
    uVar24 = uVar25 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar29 = (iVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar29) {
      iVar29 = iVar7;
    }
  }
  if (iVar29 != iVar7) {
    lVar15 = *(longlong *)(param_1 + 0xf0);
    puVar8 = (uint *)(param_1 + 0x100);
    if (*(uint **)(param_1 + 0x110) != (uint *)0x0) {
      puVar8 = *(uint **)(param_1 + 0x110);
    }
    iVar19 = iVar7 + 0x1e;
    if (-1 < iVar7 + -1) {
      iVar19 = iVar7 + -1;
    }
    iVar19 = iVar19 >> 5;
    uVar23 = 0xffffffff;
    do {
      lVar16 = (longlong)iVar29 * 0x68;
      uVar24 = (ulonglong)*(int *)(lVar15 + 0x58 + lVar16);
      lVar30 = uVar24 * 4;
      if (uVar24 < 2) {
        lVar30 = 0;
      }
      uVar27 = (longlong)*(int *)(lVar15 + 0x1c + lVar16) * 0x10 + uVar27 +
               (ulonglong)(*(int *)(lVar15 + 0x3c + lVar16) + 0x1fU >> 5) * 4 + lVar30;
      uVar23 = ~(uint)uVar25 & uVar23;
      iVar29 = (int)uVar12;
      lVar30 = (longlong)iVar29;
      uVar13 = puVar8[lVar30] & uVar23;
      if (uVar13 == 0) {
        iVar22 = iVar19;
        if (iVar19 < iVar29) {
          iVar22 = iVar29;
        }
        if (iVar19 <= iVar29) break;
        lVar16 = 0;
        while( true ) {
          iVar18 = iVar18 + 0x20;
          uVar13 = puVar8[lVar30 + lVar16 + 1];
          if (uVar13 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar22 - lVar30 == lVar16) goto LAB_142ae328f;
        }
        uVar12 = (ulonglong)(iVar29 + (int)lVar16 + 1);
        uVar23 = 0xffffffff;
      }
      uVar25 = (ulonglong)(-uVar13 & uVar13);
      uVar24 = uVar25 * 2 + 1;
      lVar30 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      iVar29 = (iVar18 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
    } while (iVar29 < iVar7);
  }
LAB_142ae328f:
  iVar7 = *(int *)(param_1 + 0x168);
  if (iVar7 == 0) {
    uVar25 = 1;
    uVar12 = 0;
    iVar18 = 0;
    iVar29 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0x160);
    if (*(uint **)(param_1 + 0x160) == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 0x150);
    }
    uVar23 = *puVar8;
    if (uVar23 == 0) {
      iVar18 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar18 = iVar7 + -1;
      }
      uVar12 = 0;
      uVar24 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar24 = uVar12;
      }
      iVar18 = 0;
      do {
        if (uVar24 == uVar12) goto LAB_142ae3422;
        iVar18 = iVar18 + 0x20;
        uVar23 = puVar8[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar23 == 0);
    }
    else {
      uVar12 = 0;
      iVar18 = 0;
    }
    uVar25 = (ulonglong)(-uVar23 & uVar23);
    uVar24 = uVar25 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar29 = (iVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar29) {
      iVar29 = iVar7;
    }
  }
  if (iVar29 != iVar7) {
    lVar15 = *(longlong *)(param_1 + 0x140);
    puVar8 = (uint *)(param_1 + 0x150);
    if (*(uint **)(param_1 + 0x160) != (uint *)0x0) {
      puVar8 = *(uint **)(param_1 + 0x160);
    }
    iVar19 = iVar7 + 0x1e;
    if (-1 < iVar7 + -1) {
      iVar19 = iVar7 + -1;
    }
    iVar19 = iVar19 >> 5;
    uVar23 = 0xffffffff;
    do {
      lVar16 = (longlong)iVar29 * 0x60;
      uVar24 = (ulonglong)*(int *)(lVar15 + 0x50 + lVar16);
      lVar30 = uVar24 * 4;
      if (uVar24 < 2) {
        lVar30 = 0;
      }
      uVar27 = uVar27 + (longlong)*(int *)(lVar15 + 0x14 + lVar16) * 0x18 +
               (ulonglong)(*(int *)(lVar15 + 0x34 + lVar16) + 0x1fU >> 5) * 4 + lVar30;
      uVar23 = ~(uint)uVar25 & uVar23;
      iVar29 = (int)uVar12;
      lVar30 = (longlong)iVar29;
      uVar13 = puVar8[lVar30] & uVar23;
      if (uVar13 == 0) {
        iVar22 = iVar19;
        if (iVar19 < iVar29) {
          iVar22 = iVar29;
        }
        if (iVar19 <= iVar29) break;
        lVar16 = 0;
        while( true ) {
          iVar18 = iVar18 + 0x20;
          uVar13 = puVar8[lVar30 + lVar16 + 1];
          if (uVar13 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar22 - lVar30 == lVar16) goto LAB_142ae3422;
        }
        uVar12 = (ulonglong)(iVar29 + (int)lVar16 + 1);
        uVar23 = 0xffffffff;
      }
      uVar25 = (ulonglong)(-uVar13 & uVar13);
      uVar24 = uVar25 * 2 + 1;
      lVar30 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      iVar29 = (iVar18 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
    } while (iVar29 < iVar7);
  }
LAB_142ae3422:
  local_1c8 = (longlong)*(int *)(param_1 + 0xc);
  local_208 = (ulonglong)*(uint *)(param_1 + 0x2c);
  local_190 = (longlong)*(int *)(param_1 + 0x48);
  local_140 = (longlong)*(int *)(param_1 + 0x5c);
  local_1e0 = (ulonglong)*(uint *)(param_1 + 0x7c);
  local_188 = (longlong)*(int *)(param_1 + 0x98);
  local_1f8 = (longlong)*(int *)(param_1 + 0xac);
  local_200 = (ulonglong)*(uint *)(param_1 + 0xcc);
  local_180 = (longlong)*(int *)(param_1 + 0xe8);
  local_178 = (longlong)*(int *)(param_1 + 0xfc);
  local_1d8 = (ulonglong)*(uint *)(param_1 + 0x11c);
  local_218 = (longlong)*(int *)(param_1 + 0x138);
  local_170 = (longlong)*(int *)(param_1 + 0x14c);
  local_1d0 = (ulonglong)*(uint *)(param_1 + 0x16c);
  local_210 = (longlong)*(int *)(param_1 + 0x188);
  local_168 = (longlong)*(int *)(param_1 + 0x19c);
  local_1f0 = (ulonglong)*(uint *)(param_1 + 0x1bc);
  local_160 = (longlong)*(int *)(param_1 + 0x1d8);
  local_138 = (longlong)*(int *)(param_1 + 0x1ec);
  local_1e8 = (ulonglong)*(uint *)(param_1 + 0x20c);
  local_158 = (longlong)*(int *)(param_1 + 0x228);
  local_148 = (longlong)*(int *)(param_1 + 0x23c);
  iVar7 = *(int *)(param_1 + 0x24c);
  local_150 = (longlong)*(int *)(param_1 + 0x25c);
  iVar19 = 0;
  local_120 = &local_a8;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_128 = &local_c8;
  local_c8 = 0;
  local_f0 = &local_128;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_118 = &local_d8;
  local_d8 = 0;
  local_110 = &local_e0;
  local_e0 = 0;
  local_108 = &local_d0;
  local_d0 = 0;
  local_100 = &local_e8;
  local_e8 = 0;
  local_c0 = &local_f8;
  local_f8 = FUN_142aea62a;
  local_b0 = &local_c0;
  local_b8 = &LAB_142aea360;
  local_230 = param_1;
  FUN_1415625f6(param_1);
  iVar18 = *(int *)(param_1 + 0x1b8);
  uVar24 = 1;
  uVar12 = 0;
  iVar29 = 0;
  if (iVar18 != 0) {
    puVar8 = *(uint **)(param_1 + 0x1b0);
    if (*(uint **)(param_1 + 0x1b0) == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 0x1a0);
    }
    uVar23 = *puVar8;
    if (uVar23 == 0) {
      iVar29 = iVar18 + 0x1e;
      if (-1 < iVar18 + -1) {
        iVar29 = iVar18 + -1;
      }
      uVar13 = iVar29 >> 5;
      if (iVar29 >> 5 < 1) {
        uVar13 = 0;
      }
      uVar12 = 0;
      iVar19 = 0;
      do {
        if (uVar13 == uVar12) goto LAB_142ae36c7;
        iVar19 = iVar19 + 0x20;
        uVar23 = puVar8[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar23 == 0);
    }
    else {
      iVar19 = 0;
      uVar12 = 0;
    }
    uVar24 = (ulonglong)(-uVar23 & uVar23);
    uVar25 = uVar24 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar29 = (iVar19 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar18 <= iVar29) {
      iVar29 = iVar18;
    }
  }
  if (iVar29 == iVar18) {
LAB_142ae36c7:
    local_228 = 0;
    local_220 = 0;
  }
  else {
    puVar8 = (uint *)(param_1 + 0x1a0);
    if (*(uint **)(param_1 + 0x1b0) != (uint *)0x0) {
      puVar8 = *(uint **)(param_1 + 0x1b0);
    }
    iVar22 = iVar18 + 0x1e;
    if (-1 < iVar18 + -1) {
      iVar22 = iVar18 + -1;
    }
    iVar22 = iVar22 >> 5;
    uVar23 = 0xffffffff;
    local_220 = 0;
    local_228 = 0;
    do {
      lVar15 = *(longlong *)(*(longlong *)(param_1 + 400) + 0x20 + (longlong)iVar29 * 0x30);
      local_220 = local_220 + 200;
      local_228 = local_228 + (ulonglong)(*(int *)(lVar15 + 0x7c) + 0x1fU >> 5) * 4 +
                  (ulonglong)(*(int *)(lVar15 + 0x9c) + 0x1fU >> 5) * 4 +
                  ((longlong)*(int *)(lVar15 + 0x5c) + (longlong)*(int *)(lVar15 + 0x4c) +
                  (longlong)*(int *)(lVar15 + 0x3c) + (longlong)*(int *)(lVar15 + 0x2c)) * 8;
      uVar23 = ~(uint)uVar24 & uVar23;
      iVar29 = (int)uVar12;
      lVar15 = (longlong)iVar29;
      uVar13 = puVar8[lVar15] & uVar23;
      if (uVar13 == 0) {
        iVar20 = iVar22;
        if (iVar22 < iVar29) {
          iVar20 = iVar29;
        }
        if (iVar22 <= iVar29) break;
        lVar30 = 0;
        while( true ) {
          iVar19 = iVar19 + 0x20;
          uVar13 = puVar8[lVar15 + lVar30 + 1];
          if (uVar13 != 0) break;
          lVar30 = lVar30 + 1;
          if (iVar20 - lVar15 == lVar30) goto LAB_142ae3800;
        }
        uVar12 = (ulonglong)(iVar29 + (int)lVar30 + 1);
        uVar23 = 0xffffffff;
      }
      uVar24 = (ulonglong)(-uVar13 & uVar13);
      uVar25 = uVar24 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar29 = (iVar19 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar29 < iVar18);
  }
LAB_142ae3800:
  lVar15 = ((longlong)*(int *)(local_230 + 0x1e8) - (longlong)*(int *)(local_230 + 0x214)) * 0xc0;
  iVar18 = *(int *)(local_230 + 0x208);
  if (iVar18 == 0) {
    uVar25 = 1;
    uVar12 = 0;
    iVar29 = 0;
    iVar19 = 0;
  }
  else {
    puVar8 = *(uint **)(local_230 + 0x200);
    if (*(uint **)(local_230 + 0x200) == (uint *)0x0) {
      puVar8 = (uint *)(local_230 + 0x1f0);
    }
    uVar23 = *puVar8;
    if (uVar23 == 0) {
      iVar29 = iVar18 + 0x1e;
      if (-1 < iVar18 + -1) {
        iVar29 = iVar18 + -1;
      }
      uVar12 = 0;
      uVar24 = (ulonglong)(uint)(iVar29 >> 5);
      if (iVar29 >> 5 < 1) {
        uVar24 = uVar12;
      }
      iVar29 = 0;
      do {
        if (uVar24 == uVar12) goto LAB_142ae3985;
        iVar29 = iVar29 + 0x20;
        uVar23 = puVar8[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar23 == 0);
    }
    else {
      uVar12 = 0;
      iVar29 = 0;
    }
    uVar25 = (ulonglong)(-uVar23 & uVar23);
    uVar24 = uVar25 * 2 + 1;
    lVar30 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar30 == 0; lVar30 = lVar30 + -1) {
      }
    }
    iVar19 = (iVar29 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
    if (iVar18 <= iVar19) {
      iVar19 = iVar18;
    }
  }
  if (iVar19 != iVar18) {
    puVar8 = (uint *)(local_230 + 0x1f0);
    if (*(uint **)(local_230 + 0x200) != (uint *)0x0) {
      puVar8 = *(uint **)(local_230 + 0x200);
    }
    iVar22 = iVar18 + 0x1e;
    if (-1 < iVar18 + -1) {
      iVar22 = iVar18 + -1;
    }
    iVar22 = iVar22 >> 5;
    uVar23 = 0xffffffff;
    do {
      lVar15 = lVar15 + (longlong)
                        *(int *)(*(longlong *)
                                  (*(longlong *)(local_230 + 0x1e0) + 8 + (longlong)iVar19 * 0x18) +
                                0x84) * 8;
      uVar23 = ~(uint)uVar25 & uVar23;
      iVar19 = (int)uVar12;
      lVar30 = (longlong)iVar19;
      uVar13 = puVar8[lVar30] & uVar23;
      if (uVar13 == 0) {
        iVar20 = iVar22;
        if (iVar22 < iVar19) {
          iVar20 = iVar19;
        }
        if (iVar22 <= iVar19) break;
        lVar16 = 0;
        while( true ) {
          iVar29 = iVar29 + 0x20;
          uVar13 = puVar8[lVar30 + lVar16 + 1];
          if (uVar13 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar20 - lVar30 == lVar16) goto LAB_142ae3985;
        }
        uVar12 = (ulonglong)(iVar19 + (int)lVar16 + 1);
        uVar23 = 0xffffffff;
      }
      uVar25 = (ulonglong)(-uVar13 & uVar13);
      uVar24 = uVar25 * 2 + 1;
      lVar30 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      iVar19 = (iVar29 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
    } while (iVar19 < iVar18);
  }
LAB_142ae3985:
  local_1a0 = local_c8;
  local_198 = local_d0;
  local_130 = (longlong)iVar7;
  local_1b0 = FUN_14685b5a6(&local_a8);
  local_1a8 = local_58;
  local_1c0 = (longlong)*(int *)(local_230 + 0x284);
  iVar7 = *(int *)(local_230 + 0x2a4);
  local_1b8 = (longlong)*(int *)(local_230 + 0x2c0);
  local_230 = FUN_147016450(local_230 + 0x2c8);
  local_60 = 0;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  local_1c8 = local_1c8 * 0x10;
  iVar18 = (int)local_208;
  lVar30 = local_190 << 2;
  if ((uint)local_190 < 2) {
    lVar30 = 0;
  }
  lVar16 = 0;
  local_1e0 = (ulonglong)((int)local_1e0 + 0x1fU >> 5);
  local_208 = local_188 << 2;
  if ((uint)local_188 < 2) {
    local_208 = lVar16;
  }
  lVar10 = local_1f8 * 0x20;
  iVar29 = (int)local_200;
  local_1f8 = local_180 << 2;
  if ((uint)local_180 < 2) {
    local_1f8 = lVar16;
  }
  local_200 = local_178 * 0x68;
  local_1d8 = (ulonglong)((int)local_1d8 + 0x1fU >> 5);
  uVar23 = (uint)local_218;
  local_218 = local_218 << 2;
  if (uVar23 < 2) {
    local_218 = lVar16;
  }
  local_1d0 = (ulonglong)((int)local_1d0 + 0x1fU >> 5);
  uVar23 = (uint)local_210;
  local_210 = local_210 << 2;
  if (uVar23 < 2) {
    local_210 = lVar16;
  }
  iVar19 = (int)local_1f0;
  lVar21 = local_160 << 2;
  if ((uint)local_160 < 2) {
    lVar21 = lVar16;
  }
  iVar22 = (int)local_1e8;
  lVar9 = local_158 << 2;
  if ((uint)local_158 < 2) {
    lVar9 = lVar16;
  }
  local_1e8 = local_1c0 * 0x1c;
  local_1f0 = (ulonglong)(iVar7 + 0x1fU >> 5);
  lVar16 = local_1b8 << 2;
  if ((uint)local_1b8 < 2) {
    lVar16 = 0;
  }
  lVar14 = local_130 + local_148 + local_150;
  lVar5 = local_1c8 + (ulonglong)(iVar18 + 0x1fU >> 5) * 4;
  lVar6 = local_140 * 0x28;
  lVar1 = local_1e0 * 4;
  lVar10 = lVar10 + local_208;
  lVar11 = local_200 + local_1f8;
  lVar2 = local_1d8 * 4;
  lVar26 = local_170 * 0x60 + local_218;
  lVar3 = local_1d0 * 4;
  lVar17 = local_168 * 0x30 + local_210;
  lVar4 = local_138 * 0x18;
  lVar28 = uVar27 + local_228 + local_220 + lVar15 + local_1a0 + local_198 + local_1b0 + local_1a8 +
           local_1e8 + local_230;
  lVar15 = local_1f0 * 4;
  FUN_1401bc218(&local_a8);
  if ((local_48 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return lVar28 + lVar17 + lVar26 + lVar11 + lVar10 + lVar6 + lVar5 + lVar30 + lVar1 +
                                               (ulonglong)(iVar29 + 0x1fU >> 5) * 4 + lVar2 + lVar3
                    + (ulonglong)(iVar19 + 0x1fU >> 5) * 4 + lVar21 + lVar4 +
                    (ulonglong)(iVar22 + 0x1fU >> 5) * 4 + lVar9 + lVar14 * 8 + lVar15 + lVar16;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ae3d1a FUN_142ae3d1a body=1825 status=ok
// SIG undefined FUN_142ae3d1a(void)

void FUN_142ae3d1a(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  bool bVar26;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  uint *local_68;
  int local_5c;
  longlong *local_58;
  uint local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *param_1;
  local_88 = (longlong *)(lVar1 + 0xf0);
  FUN_1457a1d1e();
  lVar6 = (longlong)(int)((ulonglong *)param_1[1])[1];
  local_80 = param_1;
  if (lVar6 != 0) {
    uVar24 = *(ulonglong *)param_1[1];
    uVar25 = uVar24 >> 4;
    puVar13 = (undefined8 *)(uVar24 + 0x20);
    lVar6 = lVar6 * 0x70;
    do {
      uVar2 = *puVar13;
      uVar3 = puVar13[1];
      uVar12 = (uint)((ulonglong)uVar3 >> 0x10);
      uVar21 = (uint)uVar3 & 0xffff;
      uVar17 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar23 = (uint)uVar2 & 0xffff;
      uVar17 = ((uint)uVar2 << 0x10 | uVar23) + (int)((ulonglong)uVar2 >> 0x20) +
               (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar23 >> 4);
      lVar15 = FUN_1410ff204(local_88,(uVar17 >> 2) +
                                      ((uint)uVar3 << 0x10 | uVar21) +
                                      (int)((ulonglong)uVar3 >> 0x20) +
                                      (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar21 >> 4) +
                                      uVar17 * 0x40 + 0x9e3779b9 ^ uVar17,puVar13);
      FUN_1402ba9e4(lVar15,&local_58);
      plVar16 = (longlong *)CONCAT44(uStack_4c,local_50);
      *plVar16 = (longlong)(puVar13 + -4);
      *(undefined4 *)(plVar16 + 1) = 0xffffffff;
      local_78 = (uint)local_58;
      uVar12 = ((uint)(uVar25 >> 0x10) & 0xffff ^ (uint)uVar25) * -0x7a143595;
      uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
      uVar12 = uVar12 >> 0x10 ^ uVar12;
      cVar4 = FUN_140dba1e0(lVar15,uVar12,plVar16,&local_78);
      if (cVar4 == '\0') {
        uVar17 = *(int *)(lVar15 + 8) - *(int *)(lVar15 + 0x34);
        if (uVar17 < 4) {
          iVar18 = 1;
        }
        else {
          uVar24 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
          lVar11 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          iVar18 = 1 << ((byte)lVar11 & 0x1f);
        }
        if (((int)uVar17 < 1) || (iVar18 <= *(int *)(lVar15 + 0x48))) {
          uVar12 = *(int *)(lVar15 + 0x48) - 1U & uVar12;
          *(uint *)((longlong)plVar16 + 0xc) = uVar12;
          lVar11 = *(longlong *)(lVar15 + 0x40);
          if (*(longlong *)(lVar15 + 0x40) == 0) {
            lVar11 = lVar15 + 0x38;
          }
          *(undefined4 *)(plVar16 + 1) =
               *(undefined4 *)
                (lVar11 + ((longlong)*(int *)(lVar15 + 0x48) - 1U & (longlong)(int)uVar12) * 4);
          lVar11 = lVar15 + 0x38;
          if (*(longlong *)(lVar15 + 0x40) != 0) {
            lVar11 = *(longlong *)(lVar15 + 0x40);
          }
          *(uint *)(lVar11 + ((longlong)*(int *)(lVar15 + 0x48) - 1U & (longlong)(int)uVar12) * 4) =
               local_78;
        }
        else {
          *(int *)(lVar15 + 0x48) = iVar18;
          FUN_140dba25c(lVar15);
        }
      }
      uVar25 = (ulonglong)((uint)uVar25 + 7);
      puVar13 = puVar13 + 0xe;
      lVar6 = lVar6 + -0x70;
    } while (lVar6 != 0);
  }
  FUN_141584174(local_88);
  local_88 = (longlong *)(lVar1 + 0x140);
  FUN_145915d52();
  lVar6 = (longlong)(int)((longlong *)local_80[1])[1];
  if (lVar6 != 0) {
    lVar15 = *(longlong *)local_80[1];
    lVar6 = lVar6 * 0x70 + lVar15;
    do {
      local_58 = (longlong *)(lVar15 + 0x40);
      local_50 = 0;
      if ((*(byte *)(lVar15 + 0x40) & 1) == 0) {
        if (*local_58 != 0) {
          uVar12 = *(uint *)(*local_58 + 8);
          goto LAB_142ae3dde;
        }
      }
      else {
        uVar12 = (uint)*(ushort *)(lVar15 + 0x42);
LAB_142ae3dde:
        if (uVar12 != 0) {
          do {
            FUN_144a5de44(&local_58,&local_78);
            uVar17 = (uint)((ulonglong)CONCAT44(iStack_74,local_78) >> 0x10);
            uVar17 = (local_78 << 0x10 | local_78 & 0xffff) + iStack_74 +
                     (uVar17 << 0x13 | uVar17 & 0xffff) + ((local_78 & 0xffff) >> 4);
            if (*(int *)(lVar1 + 0x148) != *(int *)(lVar1 + 0x174)) {
              lVar11 = *(longlong *)(lVar1 + 0x180);
              if (*(longlong *)(lVar1 + 0x180) == 0) {
                lVar11 = lVar1 + 0x178;
              }
              iVar18 = *(int *)(lVar11 + (ulonglong)(*(int *)(lVar1 + 0x188) - 1U & uVar17) * 4);
              if (iVar18 != -1) {
                do {
                  lVar11 = *local_88 + (longlong)iVar18 * 0x60;
                  if (*(longlong *)(*local_88 + (longlong)iVar18 * 0x60) ==
                      CONCAT44(iStack_74,local_78)) {
                    if (lVar11 != 0) goto LAB_142ae3ec2;
                    break;
                  }
                  iVar18 = *(int *)(lVar11 + 0x58);
                } while (iVar18 != -1);
              }
            }
            local_68 = &local_78;
            FUN_140f8a5ea(local_88,&local_5c,uVar17,&local_68);
            lVar11 = *local_88 + (longlong)local_5c * 0x60;
LAB_142ae3ec2:
            FUN_144972254(lVar11 + 8,&local_68,lVar15 + 0x20,0);
            local_50 = local_50 + 1;
          } while (local_50 != uVar12);
        }
      }
      lVar15 = lVar15 + 0x70;
    } while (lVar15 != lVar6);
  }
  plVar16 = local_88;
  FUN_1462951ca(local_88);
  FUN_14701a8e2(plVar16,*(int *)(lVar1 + 0x148) - *(int *)(lVar1 + 0x174));
  iVar18 = *(int *)(lVar1 + 0x168);
  if (iVar18 == 0) {
    uVar25 = 1;
    uVar24 = 0;
    iVar14 = 0;
    iVar5 = 0;
  }
  else {
    puVar7 = *(uint **)(lVar1 + 0x160);
    if (*(uint **)(lVar1 + 0x160) == (uint *)0x0) {
      puVar7 = (uint *)(lVar1 + 0x150);
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar5 = iVar18 + 0x1e;
      if (-1 < iVar18 + -1) {
        iVar5 = iVar18 + -1;
      }
      uVar24 = 0;
      uVar25 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar25 = uVar24;
      }
      iVar14 = 0;
      do {
        if (uVar25 == uVar24) goto LAB_142ae4179;
        iVar14 = iVar14 + 0x20;
        uVar12 = puVar7[uVar24 + 1];
        uVar24 = uVar24 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar24 = 0;
      iVar14 = 0;
    }
    uVar25 = (ulonglong)(-uVar12 & uVar12);
    uVar20 = uVar25 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar5 = (iVar14 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar18 <= iVar5) {
      iVar5 = iVar18;
    }
  }
  if (iVar5 != iVar18) {
    uVar12 = 0xffffffff;
    do {
      lVar6 = *local_88 + (longlong)iVar5 * 0x60;
      plVar16 = (longlong *)(lVar6 + 8);
      lVar11 = (longlong)iVar5 * 0x60 + *local_88;
      lVar15 = lVar11 + 0x18;
      iVar5 = *(int *)(lVar11 + 0x30);
      iVar19 = -1;
      if (iVar5 != 0) {
        lVar11 = *(longlong *)(lVar6 + 0x28);
        if (*(longlong *)(lVar6 + 0x28) == 0) {
          lVar11 = lVar15;
        }
        uVar20 = (ulonglong)(iVar5 + 0x1fU >> 5);
        iVar19 = -0x3e - (iVar5 + 0x1fU & 0xffffffe0);
        uVar17 = 0xffffffff >> (-(char)iVar5 & 0x1fU);
        do {
          bVar26 = uVar20 == 0;
          uVar20 = uVar20 - 1;
          if (bVar26) {
            iVar19 = -1;
            goto LAB_142ae4237;
          }
          iVar19 = iVar19 + 0x20;
          uVar21 = uVar17 & *(uint *)(lVar11 + uVar20 * 4);
          uVar17 = 0xffffffff;
        } while (uVar21 == 0);
        uVar20 = (ulonglong)uVar21 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar19 = -(((uint)lVar11 ^ 0x3f) + iVar19);
      }
LAB_142ae4237:
      iVar5 = iVar19 + 1;
      iVar9 = *(int *)(lVar6 + 0x10);
      if (iVar5 < iVar9) {
        if ((0 < *(int *)(lVar6 + 0x3c)) &&
           (uVar20 = (ulonglong)*(uint *)(lVar6 + 0x38), *(uint *)(lVar6 + 0x38) != 0xffffffff)) {
          lVar11 = *plVar16;
          do {
            lVar22 = (longlong)(int)uVar20;
            if (iVar19 < (int)uVar20) {
              iVar9 = *(int *)(lVar11 + lVar22 * 0x18);
              iVar10 = *(int *)(lVar11 + 4 + lVar22 * 0x18);
              uVar20 = (ulonglong)iVar10;
              if (uVar20 != 0xffffffffffffffff) {
                *(int *)(lVar11 + uVar20 * 0x18) = iVar9;
              }
              if (iVar9 == -1) {
                *(int *)(lVar6 + 0x38) = iVar10;
              }
              else {
                *(int *)(lVar11 + 4 + (longlong)iVar9 * 0x18) = iVar10;
              }
              *(int *)(lVar6 + 0x3c) = *(int *)(lVar6 + 0x3c) + -1;
            }
            else {
              uVar20 = (ulonglong)*(uint *)(lVar11 + 4 + lVar22 * 0x18);
            }
          } while ((int)uVar20 != -1);
          iVar9 = *(int *)(lVar6 + 0x10);
        }
        if (iVar9 != iVar5) {
          *(int *)(lVar6 + 0x10) = iVar5;
        }
        *(int *)(lVar6 + 0x30) = iVar5;
        iVar19 = iVar19 + 0x20;
        if (-1 < iVar5) {
          iVar19 = iVar5;
        }
        iVar9 = iVar5;
        if (iVar5 % 0x20 != 0) {
          if (*(longlong *)(lVar6 + 0x28) != 0) {
            lVar15 = *(longlong *)(lVar6 + 0x28);
          }
          bVar8 = -(char)(iVar5 % 0x20);
          *(uint *)(lVar15 + (longlong)(iVar19 >> 5) * 4) =
               (uint)(*(int *)(lVar15 + (longlong)(iVar19 >> 5) * 4) << (bVar8 & 0x1f)) >>
               (bVar8 & 0x1f);
          iVar9 = *(int *)(lVar6 + 0x10);
        }
      }
      if (*(int *)(lVar6 + 0x14) != iVar9) {
        FUN_1405357e8(plVar16);
        iVar9 = *(int *)(lVar6 + 0x10);
      }
      uVar17 = iVar9 - *(int *)(lVar6 + 0x3c);
      iVar5 = 1;
      if (3 < uVar17) {
        uVar20 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
        lVar15 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar15 & 0x1f);
      }
      if ((0 < (int)uVar17 && *(int *)(lVar6 + 0x50) < iVar5) || (iVar5 < *(int *)(lVar6 + 0x50))) {
        *(int *)(lVar6 + 0x50) = iVar5;
        FUN_144972968(plVar16);
      }
      uVar12 = uVar12 & ~(uint)uVar25;
      puVar7 = *(uint **)(lVar1 + 0x160);
      if (*(uint **)(lVar1 + 0x160) == (uint *)0x0) {
        puVar7 = (uint *)(lVar1 + 0x150);
      }
      iVar19 = *(int *)(lVar1 + 0x168);
      iVar5 = (int)uVar24;
      lVar6 = (longlong)iVar5;
      uVar17 = puVar7[lVar6] & uVar12;
      if (uVar17 == 0) {
        iVar9 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar9 = iVar19 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar5) {
          iVar10 = iVar5;
        }
        if (iVar5 < iVar9) {
          lVar15 = 0;
          do {
            uVar17 = puVar7[lVar6 + lVar15 + 1];
            if (uVar17 != 0) {
              uVar24 = (ulonglong)(iVar5 + (int)lVar15 + 1);
              uVar12 = 0xffffffff;
              goto LAB_142ae43b8;
            }
            iVar14 = iVar14 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar10 - lVar6 != lVar15);
          uVar12 = 0xffffffff;
          iVar5 = iVar10;
        }
        uVar24 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar19;
      }
      else {
LAB_142ae43b8:
        uVar25 = (ulonglong)(-uVar17 & uVar17);
        uVar20 = uVar25 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar5 = (iVar14 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
        if (iVar19 <= iVar5) {
          iVar5 = iVar19;
        }
      }
    } while (iVar5 != iVar18);
  }
LAB_142ae4179:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ae443c FUN_142ae443c body=144 status=ok
// SIG undefined FUN_142ae443c(void)

undefined8 FUN_142ae443c(ulonglong *param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  
  if (param_3 == '\0') {
    uVar3 = 0xffffffff;
    if ((longlong)(int)param_2[1] != 0) {
      lVar5 = (longlong)(int)param_2[1] << 3;
      uVar6 = 0;
      do {
        if (*(ulonglong *)(*param_2 + uVar6 * 8) == *param_1) {
          uVar3 = uVar6 & 0xffffffff;
          break;
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
  }
  else {
    uVar1 = *(uint *)(param_2 + 1);
    if ((int)uVar1 < 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      uVar6 = (ulonglong)uVar1;
      uVar7 = uVar1;
      do {
        uVar6 = uVar6 >> 1;
        uVar4 = (uint)uVar6 + (int)uVar3;
        if (*(ulonglong *)(*param_2 + (ulonglong)uVar4 * 8) < *param_1) {
          uVar3 = (ulonglong)(uVar4 + (uVar7 & 1));
        }
        bVar2 = 1 < uVar7;
        uVar7 = (uint)uVar6;
      } while (bVar2);
    }
    if (((int)uVar1 <= (int)uVar3) || (*param_1 < *(ulonglong *)(*param_2 + uVar3 * 8))) {
      uVar3 = 0xffffffff;
    }
  }
  return CONCAT71((int7)(uVar3 >> 8),(int)uVar3 != -1);
}



// FUNCTION 142ae44d8 FUN_142ae44d8 body=1861 status=ok
// SIG undefined FUN_142ae44d8(void)

void FUN_142ae44d8(undefined8 *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int iVar14;
  int *piVar15;
  ulonglong uVar16;
  longlong lVar17;
  int *piVar18;
  byte bVar19;
  int iVar20;
  int *piVar21;
  int *piVar22;
  ulonglong uVar23;
  int *piVar24;
  int *piVar25;
  longlong lVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int *piVar31;
  longlong lVar32;
  int *piVar33;
  ulonglong uVar34;
  int *piVar35;
  bool bVar36;
  float fVar37;
  undefined1 auStack_398 [32];
  int local_378;
  undefined8 local_370;
  undefined8 *local_368;
  longlong local_360;
  ulonglong local_358;
  undefined1 local_349;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  plVar1 = (longlong *)param_1[2];
  local_370 = param_4;
  local_368 = param_1;
  local_360 = param_3;
  FUN_14701a9be(plVar1);
  lVar26 = param_2[1];
  if (0 < (longlong)(int)lVar26) {
    lVar17 = 0;
    lVar32 = 0;
    do {
      puVar2 = (undefined8 *)local_368[1];
      local_348 = *(longlong *)(*param_2 + lVar32 * 8);
      local_349 = param_5;
      pcVar3 = (code *)*puVar2;
      plVar11 = puVar2 + 4;
      if ((longlong *)puVar2[2] != (longlong *)0x0) {
        plVar11 = (longlong *)puVar2[2];
      }
      uVar9 = (**(code **)(*plVar11 + 8))();
      uVar6 = (*pcVar3)(uVar9,&local_348,&local_349);
      if (-1 < (int)uVar6) {
        lVar4 = plVar1[1];
        uVar7 = (int)lVar4 + 1;
        *(uint *)(plVar1 + 1) = uVar7;
        if (*(uint *)((longlong)plVar1 + 0xc) < uVar7) {
          FUN_14701aa48(plVar1);
        }
        *(ulonglong *)(*plVar1 + (longlong)(int)lVar4 * 8) = (ulonglong)uVar6 + lVar17;
      }
      lVar32 = lVar32 + 1;
      lVar17 = lVar17 + 0x100000000;
    } while ((int)lVar26 != lVar32);
  }
  lVar26 = plVar1[1];
  uVar34 = (ulonglong)(int)lVar26;
  if (1 < (longlong)uVar34) {
    lVar17 = *plVar1;
    memset(local_338,0,0x2f0);
    local_340 = lVar17 + uVar34 * 8 + -8;
    local_348 = lVar17;
    fVar37 = logf((float)(int)lVar26);
    local_338[0] = (int)(longlong)(fVar37 + fVar37);
    plVar11 = &local_348;
    do {
      piVar15 = (int *)*plVar11;
      piVar24 = (int *)plVar11[1];
      iVar27 = (int)plVar11[2];
      iVar30 = (int)((ulonglong)((longlong)piVar24 - (longlong)piVar15) >> 3);
      uVar6 = iVar30 + 1;
      piVar22 = piVar24;
      piVar35 = piVar15;
      if (iVar27 != 0) {
LAB_142ae463a:
        piVar21 = piVar15;
        if (8 < (int)uVar6) {
          uVar9 = *(undefined8 *)(piVar21 + (ulonglong)(uVar6 >> 1) * 2);
          *(undefined8 *)(piVar21 + (ulonglong)(uVar6 >> 1) * 2) = *(undefined8 *)piVar21;
          *(undefined8 *)piVar21 = uVar9;
          piVar31 = piVar24 + 2;
          piVar15 = piVar21;
          do {
            piVar5 = piVar15 + 2;
            piVar25 = piVar15 + 2;
            do {
              piVar15 = piVar25;
              piVar18 = piVar5;
              if (piVar24 < piVar15) break;
              piVar5 = piVar18 + 2;
              piVar25 = piVar15 + 2;
            } while (*piVar15 <= *piVar21);
            piVar5 = piVar31 + -4;
            do {
              piVar25 = piVar31;
              piVar33 = piVar5;
              piVar31 = piVar25 + -2;
              if (piVar31 <= piVar21) break;
              piVar5 = piVar33 + -2;
            } while (*piVar21 <= *piVar31);
            if (piVar31 < piVar15) goto LAB_142ae46ba;
            uVar9 = *(undefined8 *)piVar15;
            *(undefined8 *)piVar15 = *(undefined8 *)piVar31;
            *(undefined8 *)piVar31 = uVar9;
          } while( true );
        }
        if (piVar21 < piVar24) {
          do {
            piVar15 = piVar21;
            if (piVar21 + 2 <= piVar24) {
              piVar22 = piVar21 + 2;
              iVar27 = *piVar21;
              do {
                iVar30 = *piVar22;
                iVar29 = iVar27;
                if (iVar27 <= iVar30) {
                  iVar29 = iVar30;
                }
                if (iVar27 < iVar30) {
                  piVar15 = piVar22;
                }
                piVar22 = piVar22 + 2;
                iVar27 = iVar29;
              } while (piVar22 <= piVar24);
            }
            uVar9 = *(undefined8 *)piVar15;
            *(undefined8 *)piVar15 = *(undefined8 *)piVar24;
            *(undefined8 *)piVar24 = uVar9;
            piVar24 = piVar24 + -2;
          } while (piVar21 < piVar24);
        }
        goto LAB_142ae48c5;
      }
LAB_142ae474d:
      if (uVar6 != 0) {
        iVar27 = (iVar30 - (iVar30 + -1 >> 0x1f)) + -1 >> 1;
        iVar30 = iVar27;
joined_r0x000142ae4774:
        do {
          iVar29 = iVar27 * 2 + 1;
          if (iVar29 < (int)uVar6) {
            iVar28 = iVar27 * 2 + 2;
            if ((iVar28 < (int)uVar6) &&
               (piVar15[(longlong)iVar29 * 2] <= piVar15[(longlong)iVar28 * 2])) {
              iVar29 = iVar28;
            }
            lVar17 = (longlong)iVar27;
            lVar26 = (longlong)iVar29;
            if (piVar15[lVar17 * 2] < piVar15[lVar26 * 2]) {
              uVar9 = *(undefined8 *)(piVar15 + lVar17 * 2);
              *(undefined8 *)(piVar15 + lVar17 * 2) = *(undefined8 *)(piVar15 + lVar26 * 2);
              *(undefined8 *)(piVar15 + lVar26 * 2) = uVar9;
              iVar27 = iVar29;
              goto joined_r0x000142ae4774;
            }
          }
          bVar36 = iVar30 != 0;
          iVar27 = iVar30 + -1;
          iVar30 = iVar27;
        } while (bVar36);
        if (1 < (int)uVar6) {
          uVar34 = (ulonglong)uVar6;
          uVar9 = *(undefined8 *)piVar15;
          *(undefined8 *)piVar15 = *(undefined8 *)(piVar15 + uVar34 * 2 + -2);
          *(undefined8 *)(piVar15 + uVar34 * 2 + -2) = uVar9;
          if (uVar6 != 2) {
            do {
              uVar34 = uVar34 - 1;
              iVar27 = 0;
              iVar29 = 1;
              iVar30 = 0;
              do {
                iVar27 = iVar27 + 2;
                iVar28 = iVar29;
                if (((longlong)iVar27 < (longlong)uVar34) &&
                   (piVar15[(longlong)iVar29 * 2] <= piVar15[(longlong)iVar27 * 2])) {
                  iVar28 = iVar27;
                }
                lVar26 = (longlong)iVar30;
                lVar17 = (longlong)iVar28;
                if (piVar15[lVar17 * 2] <= piVar15[lVar26 * 2]) break;
                uVar9 = *(undefined8 *)(piVar15 + lVar26 * 2);
                *(undefined8 *)(piVar15 + lVar26 * 2) = *(undefined8 *)(piVar15 + lVar17 * 2);
                *(undefined8 *)(piVar15 + lVar17 * 2) = uVar9;
                iVar27 = iVar28 * 2;
                iVar29 = iVar28 * 2 + 1;
                iVar30 = iVar28;
              } while ((longlong)iVar29 < (longlong)uVar34);
              uVar9 = *(undefined8 *)piVar15;
              *(undefined8 *)piVar15 = *(undefined8 *)(piVar15 + uVar34 * 2 + -2);
              *(undefined8 *)(piVar15 + uVar34 * 2 + -2) = uVar9;
            } while (2 < uVar34);
          }
        }
      }
LAB_142ae48c5:
      plVar11 = plVar11 + -3;
    } while (&local_348 <= plVar11);
    uVar34 = (ulonglong)*(uint *)(plVar1 + 1);
  }
  iVar27 = (int)uVar34;
  if (iVar27 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar34 & 0xffffffff);
  }
  plVar11 = plVar1 + 2;
  *(undefined4 *)(plVar1 + 3) = 0;
  if (*(int *)((longlong)plVar1 + 0x1c) < iVar27) {
    FUN_14481578e(plVar11,uVar34 & 0xffffffff);
    iVar27 = (int)plVar1[1];
  }
  if (iVar27 != 0) {
    lVar26 = *plVar1;
    lVar17 = 0;
    do {
      iVar30 = (int)plVar1[3];
      *(uint *)(plVar1 + 3) = iVar30 + 1U;
      if (*(uint *)((longlong)plVar1 + 0x1c) < iVar30 + 1U) {
        FUN_1446f48e2(plVar11,iVar30);
      }
      *(undefined4 *)(*plVar11 + (longlong)iVar30 * 4) = *(undefined4 *)(lVar26 + lVar17);
      lVar17 = lVar17 + 8;
    } while ((longlong)iVar27 * 8 != lVar17);
  }
  FUN_1403b0476(*local_368,plVar11);
  if (local_360 != 0) {
    plVar11 = plVar1 + 4;
    *(undefined4 *)(plVar1 + 7) = 0;
    iVar27 = (int)local_370;
    local_358 = uVar34;
    if ((longlong)(int)plVar1[1] != 0) {
      lVar17 = *plVar1;
      lVar26 = lVar17 + (longlong)(int)plVar1[1] * 8;
      uVar9 = local_370;
      do {
        iVar30 = *(int *)(lVar17 + 4);
        iVar28 = (int)uVar9;
        iVar29 = (int)plVar1[7];
        if (0 < iVar28) {
          if (iVar29 == 0) {
            iVar27 = -1;
          }
          else {
            iVar27 = iVar29 + 0x1e;
            if (-1 < iVar29 + -1) {
              iVar27 = iVar29 + -1;
            }
            iVar27 = iVar27 >> 5;
          }
          iVar20 = iVar28 + iVar29;
          iVar10 = iVar28 + iVar29 + -1;
          iVar14 = iVar28 + iVar29 + 0x1e;
          if (-1 < iVar10) {
            iVar14 = iVar10;
          }
          if (iVar14 >> 5 == iVar27) {
            *(int *)(plVar1 + 7) = iVar20;
          }
          else {
            if (*(int *)((longlong)plVar1 + 0x3c) < iVar20) {
              iVar27 = iVar29;
              if (iVar20 + 0x1fU < 0xa0) {
                iVar14 = 0x80;
              }
              else {
                uVar6 = iVar20 + 0x1fU >> 5;
                if (*(int *)((longlong)plVar1 + 0x3c) + 0x1fU < 0xa0) {
                  uVar7 = 4;
                  if (4 < uVar6) {
                    uVar7 = uVar6;
                  }
                }
                else {
                  uVar7 = uVar6 + (uVar6 * 3 >> 3) + 0x10;
                }
                uVar34 = (ulonglong)(uVar7 * 4);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                    uVar8 = (uint)(uVar34 + 0xf);
                    if (uVar7 < 0x1ffd) {
                      uVar34 = (ulonglong)
                               (ushort)(&DAT_14c841d90)
                                       [0x32 - (byte)(&DAT_14c841e00)[uVar34 + 0xf >> 4]];
                    }
                    else {
                      uVar13 = (ulonglong)(uVar8 & 0xfffffff0);
                      uVar9 = local_370;
                      if (uVar13 < 0x7ff1) {
                        bVar19 = (&DAT_14c841e00)[uVar8 >> 4];
                        uVar16 = 0x32;
                        if (0x32 < bVar19) {
                          uVar16 = (ulonglong)bVar19;
                        }
                        uVar23 = 0x32 - (ulonglong)bVar19;
                        do {
                          uVar34 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar23 & 0xffffffff];
                          if (((&DAT_14c841d90)[uVar23 & 0xffffffff] & 0xf) == 0)
                          goto LAB_142ae4acb;
                          lVar32 = uVar16 + 1 + uVar23;
                          uVar23 = uVar23 - 1;
                        } while (lVar32 != 0x33);
                      }
                      uVar34 = (ulonglong)DAT_14c841df8;
                      if (DAT_14c841df8 < 0x11) {
                        uVar34 = 0x10;
                      }
                      uVar34 = -uVar34 & (uVar13 + uVar34) - 1;
                    }
                  }
                  else {
                    uVar34 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar34,0);
                    iVar27 = (int)plVar1[7];
                  }
                }
LAB_142ae4acb:
                iVar10 = (int)(uVar34 >> 2);
                iVar14 = iVar10 << 5;
                if (iVar10 < (int)uVar6) {
                  iVar14 = -0x20;
                }
              }
              *(int *)((longlong)plVar1 + 0x3c) = iVar14;
              FUN_1446efbd8(plVar11,iVar27);
              iVar20 = (int)plVar1[7] + (int)uVar9;
            }
            iVar27 = iVar20 + 0x1f;
            if (-1 < iVar20) {
              iVar27 = iVar20;
            }
            *(int *)(plVar1 + 7) = iVar20;
            if (iVar20 % 0x20 != 0) {
              plVar12 = (longlong *)plVar1[6];
              if ((longlong *)plVar1[6] == (longlong *)0x0) {
                plVar12 = plVar11;
              }
              bVar19 = -(char)(iVar20 % 0x20);
              *(uint *)((longlong)plVar12 + (longlong)(iVar27 >> 5) * 4) =
                   (uint)(*(int *)((longlong)plVar12 + (longlong)(iVar27 >> 5) * 4) <<
                         (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
            }
          }
        }
        iVar27 = (int)uVar9;
        lVar32 = *(longlong *)(local_360 + 0x10);
        if (*(longlong *)(local_360 + 0x10) == 0) {
          lVar32 = local_360;
        }
        plVar12 = (longlong *)plVar1[6];
        if ((longlong *)plVar1[6] == (longlong *)0x0) {
          plVar12 = plVar11;
        }
        local_378 = iVar27;
        FUN_14493566c(plVar12,iVar29,lVar32,iVar30 * iVar28);
        lVar17 = lVar17 + 8;
      } while (lVar17 != lVar26);
    }
    if ((longlong *)plVar1[6] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar1[6];
    }
    (**(code **)(*(longlong *)*local_368 + 0x170))
              ((longlong *)*local_368,plVar11,(int)local_358 * iVar27 + 0x1fU >> 3 & 0xfffffffc);
  }
  if ((local_48 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_142ae46ba:
  uVar9 = *(undefined8 *)piVar21;
  *(undefined8 *)piVar21 = *(undefined8 *)piVar31;
  *(undefined8 *)piVar31 = uVar9;
  iVar27 = iVar27 + -1;
  piVar25 = piVar25 + -4;
  if ((longlong)piVar33 - (longlong)piVar35 < (longlong)piVar22 - (longlong)piVar18) {
    if (piVar15 < piVar24) {
      *plVar11 = (longlong)piVar15;
      plVar11[1] = (longlong)piVar24;
      *(int *)(plVar11 + 2) = iVar27;
      plVar11 = plVar11 + 3;
    }
    piVar15 = piVar21;
    if (piVar31 <= piVar21 + 2) goto LAB_142ae48c5;
  }
  else {
    if (piVar21 + 2 < piVar31) {
      *plVar11 = (longlong)piVar21;
      plVar11[1] = (longlong)piVar25;
      *(int *)(plVar11 + 2) = iVar27;
      plVar11 = plVar11 + 3;
    }
    piVar21 = piVar18;
    piVar25 = piVar24;
    piVar33 = piVar24;
    if (piVar24 <= piVar15) goto LAB_142ae48c5;
  }
  iVar30 = (int)((ulonglong)((longlong)piVar33 - (longlong)piVar21) >> 3);
  uVar6 = iVar30 + 1;
  piVar24 = piVar25;
  piVar22 = piVar33;
  piVar35 = piVar21;
  if (iVar27 == 0) goto LAB_142ae474d;
  goto LAB_142ae463a;
}



// FUNCTION 142ae4c20 FUN_142ae4c20 body=1692 status=ok
// SIG undefined FUN_142ae4c20(void)

void FUN_142ae4c20(undefined8 *param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 uVar7;
  longlong lVar8;
  int *piVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  int *piVar13;
  longlong *plVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  ulonglong uVar18;
  int *piVar19;
  longlong *plVar20;
  int iVar21;
  int iVar22;
  int *piVar23;
  int *piVar24;
  int iVar25;
  int *piVar26;
  uint uVar27;
  longlong lVar28;
  int *piVar29;
  bool bVar30;
  float fVar31;
  undefined1 auStack_3b8 [32];
  int local_398;
  longlong *local_390;
  longlong *local_388;
  longlong *local_380;
  longlong *local_378;
  ulonglong local_370;
  int local_364;
  longlong *local_360;
  ulonglong local_358;
  longlong local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  local_388 = (longlong *)param_1[2];
  *(undefined4 *)(local_388 + 1) = 0;
  local_380 = param_2;
  if (*(int *)((longlong)local_388 + 0xc) < 0) {
    FUN_14481578e(local_388,0);
  }
  plVar14 = local_388;
  plVar12 = local_388 + 2;
  plVar1 = local_388 + 4;
  FUN_1403b0476(*param_1,local_388);
  local_370 = (ulonglong)*(uint *)(plVar14 + 1);
  local_358 = 0;
  local_350 = param_3;
  if (param_3 != 0) {
    uVar27 = *(uint *)(plVar14 + 1) * param_4;
    local_358 = (ulonglong)uVar27;
    uVar27 = uVar27 + 0x1f >> 5;
    FUN_14017c08a(plVar12,uVar27,1);
    (**(code **)(*(longlong *)*param_1 + 0x170))((longlong *)*param_1,*plVar12,uVar27 << 2);
  }
  local_360 = plVar12;
  FUN_14700e224(plVar1,local_370);
  lVar5 = local_388[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar2 = *local_388;
    lVar28 = 0;
    do {
      puVar3 = (undefined8 *)param_1[1];
      local_348 = CONCAT44(local_348._4_4_,*(undefined4 *)(lVar2 + lVar28));
      pcVar4 = (code *)*puVar3;
      plVar12 = puVar3 + 4;
      if ((longlong *)puVar3[2] != (longlong *)0x0) {
        plVar12 = (longlong *)puVar3[2];
      }
      uVar7 = (**(code **)(*plVar12 + 8))();
      lVar8 = (*pcVar4)(uVar7,&local_348);
      if (lVar8 == 0) {
        FUN_14572541c(*param_1);
        goto LAB_142ae5244;
      }
      iVar25 = (int)local_388[5];
      *(uint *)(local_388 + 5) = iVar25 + 1U;
      if (*(uint *)((longlong)local_388 + 0x2c) < iVar25 + 1U) {
        FUN_14700a186(plVar1,iVar25);
      }
      *(longlong *)(*plVar1 + (longlong)iVar25 * 8) = lVar8;
      lVar28 = lVar28 + 4;
    } while ((longlong)(int)lVar5 * 4 != lVar28);
  }
  uVar18 = local_370;
  iVar25 = (int)local_370;
  if (iVar25 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_370);
  }
  local_378 = local_388 + 6;
  *(undefined4 *)(local_388 + 7) = 0;
  if (*(int *)((longlong)local_388 + 0x3c) < iVar25) {
    FUN_14481578e(local_378,local_370 & 0xffffffff);
  }
  plVar12 = local_380;
  plVar14 = local_388;
  plVar20 = local_378;
  if (uVar18 != 0) {
    iVar16 = 0;
    do {
      iVar22 = (int)plVar14[7];
      *(uint *)(plVar14 + 7) = iVar22 + 1U;
      if (*(uint *)((longlong)plVar14 + 0x3c) < iVar22 + 1U) {
        FUN_1446f48e2(plVar20,iVar22);
        plVar12 = local_380;
        plVar14 = local_388;
        plVar20 = local_378;
      }
      *(int *)(*plVar20 + (longlong)iVar22 * 4) = iVar16;
      iVar16 = iVar16 + 1;
    } while (iVar25 != iVar16);
  }
  iVar25 = (int)plVar14[7];
  local_364 = param_4;
  if (1 < (longlong)iVar25) {
    lVar5 = *plVar20;
    memset(local_338,0,0x2f0);
    local_340 = lVar5 + (longlong)iVar25 * 4 + -4;
    local_348 = lVar5;
    fVar31 = logf((float)iVar25);
    local_338[0] = (int)(longlong)(fVar31 + fVar31);
    plVar11 = &local_348;
    do {
      piVar13 = (int *)*plVar11;
      piVar9 = (int *)plVar11[1];
      iVar25 = (int)plVar11[2];
      iVar16 = (int)((ulonglong)((longlong)piVar9 - (longlong)piVar13) >> 2);
      uVar27 = iVar16 + 1;
      piVar23 = piVar9;
      piVar29 = piVar13;
      local_390 = plVar11;
      if (iVar25 != 0) {
LAB_142ae4e5c:
        piVar19 = piVar13;
        if (8 < (int)uVar27) {
          iVar16 = piVar19[uVar27 >> 1];
          piVar19[uVar27 >> 1] = *piVar19;
          *piVar19 = iVar16;
          piVar26 = piVar23 + 1;
          piVar13 = piVar19;
          do {
            piVar6 = piVar13 + 1;
            piVar24 = piVar13 + 1;
            do {
              piVar17 = piVar24;
              piVar13 = piVar6;
              if (piVar23 < piVar13) break;
              piVar6 = piVar13 + 1;
              piVar24 = piVar17 + 1;
            } while (*(ulonglong *)(*plVar1 + (longlong)*piVar13 * 8) <=
                     *(ulonglong *)(*plVar1 + (longlong)*piVar19 * 8));
            piVar6 = piVar26 + -2;
            do {
              piVar24 = piVar26;
              piVar15 = piVar6;
              piVar26 = piVar24 + -1;
              if (piVar26 <= piVar19) break;
              piVar6 = piVar15 + -1;
            } while (*(ulonglong *)(*plVar1 + (longlong)*piVar19 * 8) <=
                     *(ulonglong *)(*plVar1 + (longlong)*piVar26 * 8));
            if (piVar26 < piVar13) goto LAB_142ae4ef4;
            iVar16 = *piVar13;
            *piVar13 = *piVar26;
            *piVar26 = iVar16;
          } while( true );
        }
        if (piVar19 < piVar23) {
          do {
            piVar13 = piVar19;
            if (piVar19 + 1 <= piVar23) {
              iVar25 = *piVar19;
              piVar9 = piVar19 + 1;
              do {
                piVar29 = piVar9;
                iVar16 = *piVar9;
                if (*(ulonglong *)(*plVar1 + (longlong)*piVar9 * 8) <=
                    *(ulonglong *)(*plVar1 + (longlong)iVar25 * 8)) {
                  piVar29 = piVar13;
                  iVar16 = iVar25;
                }
                iVar25 = iVar16;
                piVar13 = piVar29;
                piVar9 = piVar9 + 1;
              } while (piVar9 <= piVar23);
            }
            iVar25 = *piVar13;
            *piVar13 = *piVar23;
            *piVar23 = iVar25;
            piVar23 = piVar23 + -1;
          } while (piVar19 < piVar23);
        }
        goto LAB_142ae5140;
      }
LAB_142ae4f9b:
      if (uVar27 != 0) {
        iVar25 = (iVar16 - (iVar16 + -1 >> 0x1f)) + -1 >> 1;
        iVar16 = iVar25;
joined_r0x000142ae4fbc:
        do {
          iVar22 = iVar25 * 2 + 1;
          if (iVar22 < (int)uVar27) {
            iVar21 = iVar25 * 2 + 2;
            lVar5 = *plVar1;
            if ((iVar21 < (int)uVar27) &&
               (*(ulonglong *)(lVar5 + (longlong)piVar13[iVar22] * 8) <=
                *(ulonglong *)(lVar5 + (longlong)piVar13[iVar21] * 8))) {
              iVar22 = iVar21;
            }
            iVar21 = piVar13[iVar25];
            if (*(ulonglong *)(lVar5 + (longlong)iVar21 * 8) <
                *(ulonglong *)(lVar5 + (longlong)piVar13[iVar22] * 8)) {
              piVar13[iVar25] = piVar13[iVar22];
              piVar13[iVar22] = iVar21;
              iVar25 = iVar22;
              goto joined_r0x000142ae4fbc;
            }
          }
          bVar30 = iVar16 != 0;
          iVar25 = iVar16 + -1;
          iVar16 = iVar25;
        } while (bVar30);
        if (1 < (int)uVar27) {
          uVar18 = (ulonglong)uVar27;
          iVar25 = *piVar13;
          *piVar13 = piVar13[uVar18 - 1];
          piVar13[uVar18 - 1] = iVar25;
          if (uVar27 != 2) {
            do {
              uVar10 = uVar18 - 1;
              iVar25 = 0;
              iVar22 = 1;
              iVar16 = 0;
              do {
                iVar25 = iVar25 + 2;
                lVar5 = *plVar1;
                iVar21 = iVar22;
                if (((longlong)iVar25 < (longlong)uVar10) &&
                   (*(ulonglong *)(lVar5 + (longlong)piVar13[iVar22] * 8) <=
                    *(ulonglong *)(lVar5 + (longlong)piVar13[iVar25] * 8))) {
                  iVar21 = iVar25;
                }
                iVar25 = piVar13[iVar16];
                if (*(ulonglong *)(lVar5 + (longlong)piVar13[iVar21] * 8) <=
                    *(ulonglong *)(lVar5 + (longlong)iVar25 * 8)) break;
                piVar13[iVar16] = piVar13[iVar21];
                piVar13[iVar21] = iVar25;
                iVar25 = iVar21 * 2;
                iVar22 = iVar21 * 2 + 1;
                iVar16 = iVar21;
              } while ((longlong)iVar22 < (longlong)uVar10);
              iVar25 = *piVar13;
              *piVar13 = piVar13[uVar18 - 2];
              piVar13[uVar18 - 2] = iVar25;
              uVar18 = uVar10;
            } while (2 < uVar10);
          }
        }
      }
LAB_142ae5140:
      plVar11 = local_390 + -3;
      plVar12 = local_380;
      plVar14 = local_388;
      uVar18 = local_370;
      plVar20 = local_378;
    } while (&local_348 <= plVar11);
  }
  *(undefined4 *)(plVar12 + 1) = 0;
  if (*(int *)((longlong)plVar12 + 0xc) != (int)uVar18) {
    FUN_14700a3ca(plVar12,uVar18 & 0xffffffff);
    plVar12 = local_380;
    plVar14 = local_388;
    plVar20 = local_378;
  }
  lVar5 = plVar14[7];
  if ((longlong)(int)lVar5 != 0) {
    lVar2 = plVar14[6];
    lVar28 = 0;
    do {
      iVar25 = *(int *)(lVar2 + lVar28);
      lVar8 = *plVar1;
      iVar16 = (int)plVar12[1];
      *(uint *)(plVar12 + 1) = iVar16 + 1U;
      if (*(uint *)((longlong)plVar12 + 0xc) < iVar16 + 1U) {
        FUN_14700a186(plVar12,iVar16);
        plVar12 = local_380;
        plVar20 = local_378;
      }
      *(undefined8 *)(*plVar12 + (longlong)iVar16 * 8) =
           *(undefined8 *)(lVar8 + (longlong)iVar25 * 8);
      lVar28 = lVar28 + 4;
    } while ((longlong)(int)lVar5 * 4 != lVar28);
  }
  lVar5 = local_350;
  iVar25 = local_364;
  if ((local_350 != 0) && (FUN_144a686e6(local_350,local_358), local_370 != 0)) {
    lVar2 = *local_360;
    uVar18 = 1;
    if (1 < (int)local_370) {
      uVar18 = local_370 & 0xffffffff;
    }
    iVar16 = 0;
    uVar10 = 0;
    do {
      lVar28 = *(longlong *)(lVar5 + 0x10);
      if (lVar28 == 0) {
        lVar28 = lVar5;
      }
      local_398 = iVar25;
      FUN_14493566c(lVar28,iVar16,lVar2,*(int *)(*plVar20 + uVar10 * 4) * iVar25);
      uVar10 = uVar10 + 1;
      iVar16 = iVar16 + iVar25;
    } while (uVar18 != uVar10);
  }
LAB_142ae5244:
  if ((local_48 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_142ae4ef4:
  iVar16 = *piVar19;
  *piVar19 = *piVar26;
  *piVar26 = iVar16;
  iVar25 = iVar25 + -1;
  piVar24 = piVar24 + -2;
  if ((longlong)piVar15 - (longlong)piVar29 < (longlong)piVar9 - (longlong)piVar17) {
    if (piVar13 < piVar23) {
      *local_390 = (longlong)piVar13;
      local_390[1] = (longlong)piVar23;
      *(int *)(local_390 + 2) = iVar25;
      local_390 = local_390 + 3;
    }
    piVar13 = piVar19;
    piVar9 = piVar15;
    if (piVar26 <= piVar19 + 1) goto LAB_142ae5140;
  }
  else {
    if (piVar19 + 1 < piVar26) {
      *local_390 = (longlong)piVar19;
      local_390[1] = (longlong)piVar24;
      *(int *)(local_390 + 2) = iVar25;
      local_390 = local_390 + 3;
    }
    piVar19 = piVar17;
    piVar24 = piVar23;
    piVar9 = piVar23;
    if (piVar23 <= piVar13) goto LAB_142ae5140;
  }
  iVar16 = (int)((ulonglong)((longlong)piVar9 - (longlong)piVar19) >> 2);
  uVar27 = iVar16 + 1;
  piVar23 = piVar24;
  piVar29 = piVar19;
  if (iVar25 == 0) goto LAB_142ae4f9b;
  goto LAB_142ae4e5c;
}



// FUNCTION 142ae52be FUN_142ae52be body=527 status=ok
// SIG undefined FUN_142ae52be(void)

void FUN_142ae52be(longlong *param_1,int param_2,longlong *param_3,longlong param_4,int param_5,
                  undefined8 param_6,byte param_7,char param_8)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  char cVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [32];
  int local_68;
  byte local_51;
  int local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < param_2) {
    local_51 = param_4 != 0 & param_7;
    iVar14 = 0;
    cVar12 = param_8;
    local_50 = param_2;
    do {
      local_4c = 0;
      plVar3 = (longlong *)*param_1;
      puVar4 = (ulonglong *)plVar3[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        if ((*(byte *)((longlong)plVar3 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar3 + 0x170))(plVar3,&local_4c,4);
        }
        else {
          FUN_14572512c(plVar3,&local_4c);
        }
      }
      else {
        local_4c = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      if (((int)local_4c < 0) || ((int)param_1[2] <= (int)local_4c)) {
        FUN_14572541c(*param_1);
        break;
      }
      if (cVar12 != '\0') {
        uVar13 = (ulonglong)local_4c * 200 + param_1[1];
        uVar2 = *(uint *)(param_3 + 1);
        lVar6 = *param_3;
        uVar11 = 0;
        if ((int)uVar2 < 1) {
LAB_142ae53c3:
          *(uint *)(param_3 + 1) = uVar2 + 1;
          if (*(uint *)((longlong)param_3 + 0xc) < uVar2 + 1) {
            FUN_14700a186(param_3,uVar2);
            lVar6 = *param_3;
          }
          memmove((void *)(lVar6 + uVar11 * 8 + 8),(void *)(lVar6 + uVar11 * 8),
                  (ulonglong)(uVar2 - (int)uVar11) << 3);
          param_2 = local_50;
          cVar12 = param_8;
          *(ulonglong *)(*param_3 + uVar11 * 8) = uVar13;
          if (param_4 == 0) goto LAB_142ae540c;
          iVar10 = (int)uVar11 * param_5;
          FUN_147014b00(param_4,iVar10,param_5);
        }
        else {
          uVar7 = (ulonglong)uVar2;
          uVar8 = uVar2;
          do {
            uVar7 = uVar7 >> 1;
            uVar9 = (uint)uVar7 + (int)uVar11;
            if (*(ulonglong *)(lVar6 + (ulonglong)uVar9 * 8) < uVar13) {
              uVar11 = (ulonglong)(uVar9 + (uVar8 & 1));
            }
            bVar5 = 1 < uVar8;
            uVar8 = (uint)uVar7;
          } while (bVar5);
          if (((int)uVar2 <= (int)uVar11) || (*(ulonglong *)(lVar6 + uVar11 * 8) != uVar13))
          goto LAB_142ae53c3;
          cVar12 = param_8;
          if (local_51 == 0) goto LAB_142ae540c;
          iVar10 = (int)uVar11 * param_5;
        }
        lVar6 = *(longlong *)(param_4 + 0x10);
        if (*(longlong *)(param_4 + 0x10) == 0) {
          lVar6 = param_4;
        }
        local_68 = param_5;
        FUN_14493566c(lVar6,iVar10,&param_6,0);
      }
LAB_142ae540c:
      iVar14 = iVar14 + 1;
    } while (iVar14 != param_2);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ae54ec FUN_142ae54ec body=476 status=ok
// SIG undefined FUN_142ae54ec(void)

void FUN_142ae54ec(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar14 = 1;
    uVar13 = 0;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 2);
    }
    uVar15 = *puVar6;
    if (uVar15 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar12 = 0;
      do {
        if (uVar14 == uVar13) {
          return;
        }
        iVar12 = iVar12 + 0x20;
        uVar15 = puVar6[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar13 = 0;
      iVar12 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar1 = uVar14 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar4 = (iVar12 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar15 = 0xffffffff;
    do {
      lVar16 = (longlong)iVar4 * 0x1c + *param_1;
      lVar7 = *param_2;
      uVar5 = FUN_14498da01(lVar16);
      iVar4 = FUN_1447c11f0((longlong *)(lVar7 + 0x58),uVar5,lVar16);
      uVar5 = 0xffffffff;
      if (iVar4 != -1) {
        lVar7 = (longlong)iVar4 * 0x20 + *(longlong *)(lVar7 + 0x58);
        puVar8 = (undefined4 *)(lVar7 + 0x14);
        uVar5 = 0xffffffff;
        if (puVar8 != (undefined4 *)0x0 && lVar7 != 0) {
          uVar5 = *puVar8;
        }
      }
      FUN_147020e48(param_3,uVar5);
      uVar15 = uVar15 & ~(uint)uVar14;
      puVar6 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)param_1[5];
      iVar4 = (int)uVar13;
      lVar7 = (longlong)iVar4;
      uVar11 = puVar6[lVar7] & uVar15;
      if (uVar11 == 0) {
        iVar9 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar9 = iVar3 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar4) {
          iVar10 = iVar4;
        }
        if (iVar4 < iVar9) {
          lVar16 = 0;
          do {
            uVar11 = puVar6[lVar7 + lVar16 + 1];
            if (uVar11 != 0) {
              uVar13 = (ulonglong)(iVar4 + (int)lVar16 + 1);
              uVar15 = 0xffffffff;
              goto LAB_142ae5684;
            }
            iVar12 = iVar12 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar10 - lVar7 != lVar16);
          uVar15 = 0xffffffff;
          iVar4 = iVar10;
        }
        uVar13 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_142ae5684:
        uVar14 = (ulonglong)(-uVar11 & uVar11);
        uVar1 = uVar14 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar4 = (iVar12 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
  return;
}



// FUNCTION 142ae56c8 FUN_142ae56c8 body=440 status=ok
// SIG undefined FUN_142ae56c8(void)

void FUN_142ae56c8(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  
  uVar12 = 0;
  uVar10 = (longlong)(int)param_1[9] * 4;
  if ((ulonglong)(longlong)(int)param_1[9] < 2) {
    uVar10 = uVar12;
  }
  lVar4 = (longlong)*(int *)((longlong)param_1 + 0xc) * 0x20 + *param_2 +
          (ulonglong)(*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5) * 4 + uVar10;
  *param_2 = lVar4;
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar10 = 1;
    iVar13 = 0;
    iVar11 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = (uint *)(param_1 + 2);
    }
    uVar5 = *puVar9;
    if (uVar5 == 0) {
      iVar11 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar11 = iVar2 + -1;
      }
      uVar12 = 0;
      uVar10 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar10 = uVar12;
      }
      iVar13 = 0;
      do {
        if (uVar10 == uVar12) {
          return;
        }
        iVar13 = iVar13 + 0x20;
        uVar5 = puVar9[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar12 = 0;
      iVar13 = 0;
    }
    uVar10 = (ulonglong)(-uVar5 & uVar5);
    uVar1 = uVar10 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar11 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar11) {
      iVar11 = iVar2;
    }
  }
  if (iVar11 != iVar2) {
    uVar5 = 0xffffffff;
    do {
      lVar4 = lVar4 + (longlong)*(int *)(*param_1 + 0x14 + (longlong)iVar11 * 0x20) * 4;
      *param_2 = lVar4;
      uVar5 = ~(uint)uVar10 & uVar5;
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)param_1[5];
      iVar11 = (int)uVar12;
      lVar14 = (longlong)iVar11;
      uVar6 = puVar9[lVar14] & uVar5;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar11) {
          iVar8 = iVar11;
        }
        if (iVar11 < iVar7) {
          lVar15 = 0;
          do {
            uVar6 = puVar9[lVar14 + lVar15 + 1];
            if (uVar6 != 0) {
              uVar12 = (ulonglong)(iVar11 + (int)lVar15 + 1);
              uVar5 = 0xffffffff;
              goto LAB_142ae5832;
            }
            iVar13 = iVar13 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar8 - lVar14 != lVar15);
          uVar5 = 0xffffffff;
          lVar14 = (longlong)iVar8;
        }
        uVar12 = lVar14 + 1U & 0xffffffff;
        iVar11 = iVar3;
      }
      else {
LAB_142ae5832:
        uVar10 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar10 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar11 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar11) {
          iVar11 = iVar3;
        }
      }
    } while (iVar11 != iVar2);
  }
  return;
}



// FUNCTION 142ae5880 FUN_142ae5880 body=440 status=ok
// SIG undefined FUN_142ae5880(void)

void FUN_142ae5880(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  
  uVar12 = 0;
  uVar10 = (longlong)(int)param_1[9] * 4;
  if ((ulonglong)(longlong)(int)param_1[9] < 2) {
    uVar10 = uVar12;
  }
  lVar4 = (longlong)*(int *)((longlong)param_1 + 0xc) * 0x20 + *param_2 +
          (ulonglong)(*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5) * 4 + uVar10;
  *param_2 = lVar4;
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar10 = 1;
    iVar13 = 0;
    iVar11 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = (uint *)(param_1 + 2);
    }
    uVar5 = *puVar9;
    if (uVar5 == 0) {
      iVar11 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar11 = iVar2 + -1;
      }
      uVar12 = 0;
      uVar10 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar10 = uVar12;
      }
      iVar13 = 0;
      do {
        if (uVar10 == uVar12) {
          return;
        }
        iVar13 = iVar13 + 0x20;
        uVar5 = puVar9[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar12 = 0;
      iVar13 = 0;
    }
    uVar10 = (ulonglong)(-uVar5 & uVar5);
    uVar1 = uVar10 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar11 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar11) {
      iVar11 = iVar2;
    }
  }
  if (iVar11 != iVar2) {
    uVar5 = 0xffffffff;
    do {
      lVar4 = lVar4 + (longlong)*(int *)(*param_1 + 0x14 + (longlong)iVar11 * 0x20) * 4;
      *param_2 = lVar4;
      uVar5 = ~(uint)uVar10 & uVar5;
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)param_1[5];
      iVar11 = (int)uVar12;
      lVar14 = (longlong)iVar11;
      uVar6 = puVar9[lVar14] & uVar5;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar11) {
          iVar8 = iVar11;
        }
        if (iVar11 < iVar7) {
          lVar15 = 0;
          do {
            uVar6 = puVar9[lVar14 + lVar15 + 1];
            if (uVar6 != 0) {
              uVar12 = (ulonglong)(iVar11 + (int)lVar15 + 1);
              uVar5 = 0xffffffff;
              goto LAB_142ae59ea;
            }
            iVar13 = iVar13 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar8 - lVar14 != lVar15);
          uVar5 = 0xffffffff;
          lVar14 = (longlong)iVar8;
        }
        uVar12 = lVar14 + 1U & 0xffffffff;
        iVar11 = iVar3;
      }
      else {
LAB_142ae59ea:
        uVar10 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar10 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar11 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar11) {
          iVar11 = iVar3;
        }
      }
    } while (iVar11 != iVar2);
  }
  return;
}



// FUNCTION 142ae5a38 FUN_142ae5a38 body=143 status=ok
// SIG undefined FUN_142ae5a38(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_142ae5a38(void)

{
  longlong lVar1;
  undefined1 auStack_8058 [40];
  undefined1 *local_8030;
  undefined1 *local_8028;
  ulonglong *local_8020;
  char local_8018;
  undefined1 local_8010 [32768];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_8058;
  lVar1 = FUN_1400b3e1a();
  if (lVar1 != 0) {
    local_8030 = local_8010;
    local_8018 = '\0';
    local_8020 = &local_10;
    local_8028 = local_8030;
    FUN_147016580(lVar1 + 0x58,&local_8030);
    if (local_8018 == '\x01') {
      FUN_1400020a8(local_8030);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_8058) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ae5ac8 FUN_142ae5ac8 body=143 status=ok
// SIG undefined FUN_142ae5ac8(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_142ae5ac8(void)

{
  longlong lVar1;
  undefined1 auStack_8058 [40];
  undefined1 *local_8030;
  undefined1 *local_8028;
  ulonglong *local_8020;
  char local_8018;
  undefined1 local_8010 [32768];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_8058;
  lVar1 = FUN_1400b3e1a();
  if (lVar1 != 0) {
    local_8030 = local_8010;
    local_8018 = '\0';
    local_8020 = &local_10;
    local_8028 = local_8030;
    FUN_1470168d2(lVar1 + 0x58,&local_8030);
    if (local_8018 == '\x01') {
      FUN_1400020a8(local_8030);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_8058) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ae5b58 FUN_142ae5b58 body=143 status=ok
// SIG undefined FUN_142ae5b58(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_142ae5b58(void)

{
  longlong lVar1;
  undefined1 auStack_8058 [40];
  undefined1 *local_8030;
  undefined1 *local_8028;
  ulonglong *local_8020;
  char local_8018;
  undefined1 local_8010 [32768];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_8058;
  lVar1 = FUN_1400b3e1a();
  if (lVar1 != 0) {
    local_8030 = local_8010;
    local_8018 = '\0';
    local_8020 = &local_10;
    local_8028 = local_8030;
    FUN_147016c24(lVar1 + 0x58,&local_8030);
    if (local_8018 == '\x01') {
      FUN_1400020a8(local_8030);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_8058) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ae5be8 FUN_142ae5be8 body=282 status=ok
// SIG undefined FUN_142ae5be8(void)

void FUN_142ae5be8(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_868 [32];
  undefined1 *local_848;
  undefined1 *local_840;
  ulonglong *local_838;
  char local_830;
  undefined1 local_828 [2048];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_868;
  lVar1 = FUN_1400b3e1a();
  if (lVar1 != 0) {
    local_848 = local_828;
    local_830 = '\0';
    local_838 = &local_28;
    local_840 = local_848;
    FUN_147016f76(lVar1 + 0x58,&local_848);
    lVar2 = FUN_147016450(lVar1 + 0x58);
    lVar3 = 0;
    if (1 < (ulonglong)(longlong)*(int *)(lVar1 + 0x50)) {
      lVar3 = (longlong)*(int *)(lVar1 + 0x50) * 4;
    }
    uVar4 = lVar3 + (longlong)*(int *)(lVar1 + 0x14) * 0x1c +
                    (ulonglong)(*(int *)(lVar1 + 0x34) + 0x1fU >> 5) * 4;
    FUN_140212e80(&local_848,L"%s = %u KB\r\n",L"Pending Prune Set",uVar4 >> 10);
    FUN_140212e80(&local_848,L"%s = %u KB\r\n",L"Combined Total",uVar4 + lVar2 >> 10);
    if (local_830 == '\x01') {
      FUN_1400020a8(local_848);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_868) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ae5d03 FUN_142ae5d03 body=69 status=ok
// SIG undefined FUN_142ae5d03(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ae5d03(void)

{
  _DAT_14c99df30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ae5d45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99df38,1);
  return;
}



// FUNCTION 142ae5d48 FUN_142ae5d48 body=69 status=ok
// SIG undefined FUN_142ae5d48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ae5d48(void)

{
  _DAT_14c99df40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ae5d8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99df48,1);
  return;
}



// FUNCTION 142ae5d8d FUN_142ae5d8d body=69 status=ok
// SIG undefined FUN_142ae5d8d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ae5d8d(void)

{
  _DAT_14c99df50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ae5dcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99df58,1);
  return;
}



// FUNCTION 142ae5dd2 FUN_142ae5dd2 body=69 status=ok
// SIG undefined FUN_142ae5dd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ae5dd2(void)

{
  _DAT_14c99df60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ae5e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99df68,1);
  return;
}



// FUNCTION 142ae5e17 FUN_142ae5e17 body=101 status=ok
// SIG undefined FUN_142ae5e17(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ae5e17(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = DAT_14c99dfc8;
  _DAT_14c99df70 = &PTR__purecall_149e35f70;
  if (DAT_14c99dfc8 != (longlong *)0x0) {
    if (*DAT_14c99dfc8 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
  }
  lVar2 = DAT_14c99dfe8;
  if (DAT_14c99dfe8 == 0) {
    return;
  }
  if (*(longlong *)(DAT_14c99dfe8 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(lVar2);
  return;
}



// FUNCTION 142ae5e7c FUN_142ae5e7c body=304 status=ok
// SIG undefined FUN_142ae5e7c(void)

longlong * FUN_142ae5e7c(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [32];
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    }
    else {
      FUN_14572512c(param_1,&local_24);
    }
  }
  else {
    local_24 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (((int)local_24 < 0) || ((int)param_1[0x14] <= (int)local_24)) {
    param_1[0x12] = (longlong)&DAT_14c99df70;
    FUN_14572541c(param_1);
    *param_2 = 0;
  }
  else {
    uVar4 = (ulonglong)*(uint *)(param_1[0x13] + (ulonglong)local_24 * 4);
    puVar2 = (ulonglong *)param_1[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_28,4);
      }
      else {
        FUN_14572512c(param_1,&local_28);
      }
    }
    else {
      local_28 = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = (ulonglong)local_28;
    }
    *param_2 = uVar3 << 0x20 | uVar4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142ae5fae FUN_142ae5fae body=779 status=ok
// SIG undefined FUN_142ae5fae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142ae5fae(longlong *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  int *piVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  int *piVar8;
  undefined1 auStack_208 [32];
  int *local_1e8;
  int local_1e0;
  undefined **local_1d8;
  longlong *local_1d0;
  undefined ***local_1c8;
  undefined ****local_1c0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  *param_2 = '\0';
  if (param_1[0x16] == 0) {
    *param_2 = '\x01';
  }
  else {
    local_1c0 = &local_1c8;
    local_1d8 = &PTR_FUN_149e37810;
    local_1c8 = &local_1d8;
    local_1d0 = param_1;
    FUN_142809e3f(local_1c0,param_1 + 0x17);
    if (((int)param_1[0x17] == -0x61d57c3f) && ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0)) {
      if (DAT_14c75eca0 == 0 || 0xd5 < *(int *)((longlong)param_1 + 0xbc)) {
        if ((int)DAT_14c89603c < *(int *)((longlong)param_1 + 0xbc)) {
LAB_142ae60b1:
          if (DAT_14c75eca0 == 0) {
LAB_142ae60ba:
            if ((int)param_1[0x15] == 0) {
              puVar7 = &DAT_149dfb77a;
            }
            else {
              puVar7 = (undefined2 *)param_1[0x14];
            }
            FUN_1468254f0(&local_1e8,param_1 + 0x19,puVar7);
            if ((longlong)local_1e0 != 0) {
              piVar5 = local_1e8 + (longlong)local_1e0 * 4;
              piVar8 = local_1e8;
              do {
                iVar1 = *piVar8;
                if (iVar1 == 3) {
                  cVar3 = '\x06';
LAB_142ae615d:
                  if (DAT_14c75eca0 != 0) {
LAB_142ae6166:
                    *param_2 = cVar3;
                  }
                }
                else if (iVar1 == 1) {
                  if (DAT_14c75eca0 != 0) {
                    piVar2 = *(int **)(piVar8 + 2);
                    if (((((piVar2[1] == 0 && *piVar2 == 0) && piVar2[2] == 0) &&
                         (piVar2[3] == -0x662bf3f)) &&
                        (*(int *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0x110) < DAT_14c87e490)) &&
                       (FUN_144b3d300(&DAT_14c87e490), DAT_14c87e490 == -1)) {
                      FUN_1446f470e(&local_1d8,L"Unused custom version",1);
                      _DAT_14c87e468 = 0;
                      uRam000000014c87e46c = 0;
                      uRam000000014c87e470 = 0;
                      uRam000000014c87e474 = 0xf99d40c1;
                      _DAT_14c87e478 = 0x100000000;
                      _DAT_14c87e480 = 0;
                      DAT_14c87e488 = local_1d8;
                      _Init_thread_footer(&DAT_14c87e490);
                    }
                    FUN_140191ac2(&local_1d8,piVar2);
                    cVar3 = '\x04';
                    goto LAB_142ae6166;
                  }
                }
                else if (iVar1 == 0) {
                  cVar3 = '\x05';
                  goto LAB_142ae615d;
                }
                piVar8 = piVar8 + 4;
              } while (piVar8 != piVar5);
            }
            (**(code **)(*param_1 + 0xf8))(param_1,*(undefined8 *)((longlong)param_1 + 0xbc));
            (**(code **)(*param_1 + 0x100))(param_1,*(undefined4 *)((longlong)param_1 + 0xc4));
            (**(code **)(*param_1 + 0x108))(param_1,param_1 + 0x2c);
            (**(code **)(*param_1 + 0x60))(param_1,param_1 + 0x19);
            (**(code **)(*param_1 + 0xe0))(param_1,*(uint *)(param_1 + 0x1b) >> 0xd & 1);
            lVar4 = (**(code **)(*(longlong *)param_1[0x16] + 0x30))();
            param_1[0x4e] = lVar4;
            if ((int)param_1[0x13] < 2) {
              iVar1 = (int)param_1[0x1d] + -1;
              if ((int)param_1[0x1d] == 0) {
                iVar1 = 0;
              }
              FUN_1402980a2(param_1 + 0x12,param_1[0x1c],iVar1);
            }
            uVar6 = CONCAT71((int7)((ulonglong)param_2 >> 8),*param_2 == '\0');
            if (local_1e8 != (int *)0x0) {
              FUN_1400020a8();
            }
            goto LAB_142ae6058;
          }
        }
        else if ((int)param_1[0x18] <= DAT_14c89603c._4_4_ || DAT_14c75eca0 == 0) {
          if (1 < *(int *)((longlong)param_1 + 0xc4)) goto LAB_142ae60b1;
          goto LAB_142ae60ba;
        }
        *param_2 = '\x04';
      }
      else {
        *param_2 = '\x03';
      }
    }
    else {
      *param_2 = '\x02';
    }
  }
  uVar6 = 0;
LAB_142ae6058:
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 142ae62ba FUN_142ae62ba body=401 status=ok
// SIG undefined FUN_142ae62ba(void)

ulonglong FUN_142ae62ba(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  size_t sVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_888 [32];
  longlong *local_868;
  wchar_t *local_860;
  undefined4 local_858;
  undefined1 local_854;
  char local_84e [2];
  wchar_t local_84c [1024];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_888;
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (((int)param_1[0x3f] < 1) && (0 < (int)param_1[0x1e])) {
    cVar3 = FUN_1470180e0(param_1,(longlong)*(int *)((longlong)param_1 + 0xf4));
    if (cVar3 != '\0') {
      lVar2 = param_1[0x4e];
      lVar4 = (**(code **)(*param_1 + 0x28))(param_1);
      if (lVar4 + (int)param_1[0x1e] <= lVar2) {
        if (0 < (int)param_1[0x1e]) {
          local_868 = param_1 + 0x3e;
          iVar7 = 0;
          do {
            local_84e[0] = '\0';
            local_4c = 0;
            FUN_14279233f(param_1,local_84e);
            if ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0) {
              *(undefined4 *)(param_1 + 0x3f) = 0;
              if (*(int *)((longlong)param_1 + 0x1fc) < 0) {
                FUN_1402191ca(local_868,0);
              }
              goto LAB_142ae6359;
            }
            bVar9 = local_84e[0] == '\x01';
            if (bVar9) {
              sVar5 = wcslen(local_84c);
              local_858 = (int)sVar5;
            }
            else {
              sVar5 = strlen((char *)local_84c);
              local_858 = (undefined4)sVar5;
            }
            local_860 = local_84c;
            local_854 = bVar9;
            uVar6 = FUN_14001a6c0(&local_860,1);
            iVar1 = (int)param_1[0x3f];
            *(uint *)(param_1 + 0x3f) = iVar1 + 1U;
            if (*(uint *)((longlong)param_1 + 0x1fc) < iVar1 + 1U) {
              FUN_1446f84a2(local_868,iVar1);
            }
            *(ulonglong *)(param_1[0x3e] + (longlong)iVar1 * 8) = uVar6 & 0xffffffff;
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)param_1[0x1e]);
        }
        goto LAB_142ae62f7;
      }
    }
LAB_142ae6359:
    uVar8 = 0;
  }
LAB_142ae62f7:
  if ((local_48 ^ (ulonglong)auStack_888) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 142ae644c FUN_142ae644c body=811 status=ok
// SIG undefined FUN_142ae644c(void)

ulonglong FUN_142ae644c(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_258 [40];
  longlong *local_230;
  longlong local_228 [2];
  longlong *local_218 [2];
  longlong local_208;
  ulonglong uStack_200;
  undefined **local_1f0;
  longlong *local_1e8;
  undefined ***local_1e0;
  undefined ****local_1d8;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (((int)param_1[0x41] < 1) && (0 < (int)param_1[0x24])) {
    cVar4 = FUN_1470180e0(param_1,(longlong)*(int *)((longlong)param_1 + 0x124));
    if (cVar4 != '\0') {
      lVar3 = param_1[0x4e];
      lVar5 = (**(code **)(*param_1 + 0x28))(param_1);
      iVar7 = (int)param_1[0x24];
      if (lVar5 + iVar7 <= lVar3) {
        if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar7);
        }
        local_230 = param_1 + 0x40;
        if (*(int *)((longlong)param_1 + 0x20c) < iVar7) {
          FUN_1468bbcd2(local_230);
          iVar7 = (int)param_1[0x24];
        }
        if (0 < iVar7) {
          iVar7 = 0;
          do {
            iVar2 = (int)param_1[0x41];
            *(uint *)(param_1 + 0x41) = iVar2 + 1U;
            if (*(uint *)((longlong)param_1 + 0x20c) < iVar2 + 1U) {
              FUN_1468bbf04(local_230,iVar2);
            }
            lVar3 = param_1[0x40];
            lVar5 = (longlong)iVar2 * 0x38;
            puVar1 = (undefined8 *)(lVar3 + 0xc + lVar5);
            *puVar1 = 0;
            puVar1[1] = 0;
            *(undefined8 *)(lVar3 + lVar5) = 0;
            ((undefined8 *)(lVar3 + lVar5))[1] = 0;
            *(undefined8 *)(lVar3 + 0x1c + lVar5) = 0xffffffff;
            puVar1 = (undefined8 *)(lVar3 + 0x28 + lVar5);
            *puVar1 = 0;
            puVar1[1] = 0;
            local_1f0 = &PTR_FUN_149e37810;
            local_1e8 = param_1;
            local_1e0 = &local_1f0;
            local_1d8 = &local_1e0;
            FUN_1468bf5da(&local_1e0,lVar3 + lVar5);
            if ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0) {
              local_208 = 0;
              uStack_200 = 0;
              FUN_140009b9a(local_218,param_1 + 0x14);
              local_1f0 = (undefined **)CONCAT44(local_1f0._4_4_,4);
              FUN_14023423e(&local_1e0,local_218);
              FUN_140056680(local_228,L"FileName");
              FUN_140233eec(&local_208,local_228,&local_1f0);
              if (local_228[0] != 0) {
                FUN_1400020a8();
              }
              if (local_1e0 != (undefined ***)0x0) {
                (*(code *)(*local_1e0)[2])();
                local_1e0 = (undefined ***)0x0;
                local_1d8 = (undefined ****)((ulonglong)local_1d8 & 0xffffffff00000000);
              }
              if (local_218[0] != (longlong *)0x0) {
                (**(code **)(*local_218[0] + 0x10))();
              }
              FUN_14010f8af(local_208,uStack_200 & 0xffffffff);
              if (local_208 != 0) {
                FUN_1400020a8();
              }
              *(undefined4 *)(param_1 + 0x41) = 0;
              if (-1 < *(int *)((longlong)param_1 + 0x20c)) goto LAB_142ae65b6;
              uVar6 = 0;
              FUN_1468bbcd2(local_230,0);
              break;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)param_1[0x24]);
        }
        goto LAB_142ae6490;
      }
    }
    local_208 = 0;
    uStack_200 = 0;
    FUN_140009b9a(local_218,param_1 + 0x14);
    local_1f0 = (undefined **)CONCAT44(local_1f0._4_4_,4);
    FUN_14023423e(&local_1e0,local_218);
    FUN_140056680(local_228,L"FileName");
    FUN_140233eec(&local_208,local_228,&local_1f0);
    if (local_228[0] != 0) {
      FUN_1400020a8();
    }
    if (local_1e0 != (undefined ***)0x0) {
      (*(code *)(*local_1e0)[2])();
      local_1e0 = (undefined ***)0x0;
      local_1d8 = (undefined ****)((ulonglong)local_1d8 & 0xffffffff00000000);
    }
    if (local_218[0] != (longlong *)0x0) {
      (**(code **)(*local_218[0] + 0x10))();
    }
    FUN_14010f8af(local_208,uStack_200 & 0xffffffff);
    if (local_208 != 0) {
      FUN_1400020a8();
    }
LAB_142ae65b6:
    uVar6 = 0;
  }
LAB_142ae6490:
  if ((local_60 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 142ae677a FUN_142ae677a body=856 status=ok
// SIG undefined FUN_142ae677a(void)

ulonglong FUN_142ae677a(longlong *param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  int iVar8;
  undefined1 auStack_258 [40];
  longlong *local_230;
  longlong local_228 [2];
  longlong *local_218 [2];
  longlong local_208;
  ulonglong uStack_200;
  undefined **local_1f0;
  longlong *local_1e8;
  undefined ***local_1e0;
  undefined ****local_1d8;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (((int)param_1[0x43] < 1) && (0 < (int)param_1[0x23])) {
    cVar5 = FUN_1470180e0(param_1,(longlong)*(int *)((longlong)param_1 + 0x11c));
    if (cVar5 != '\0') {
      lVar4 = param_1[0x4e];
      lVar6 = (**(code **)(*param_1 + 0x28))(param_1);
      iVar8 = (int)param_1[0x23];
      if (lVar6 + iVar8 <= lVar4) {
        if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar8);
        }
        local_230 = param_1 + 0x42;
        if (*(int *)((longlong)param_1 + 0x21c) < iVar8) {
          FUN_1468bbd40(local_230);
          iVar8 = (int)param_1[0x23];
        }
        if (0 < iVar8) {
          iVar8 = 0;
          do {
            iVar3 = (int)param_1[0x43];
            *(uint *)(param_1 + 0x43) = iVar3 + 1U;
            if (*(uint *)((longlong)param_1 + 0x21c) < iVar3 + 1U) {
              FUN_1468bbf9a(local_230,iVar3);
            }
            lVar4 = param_1[0x42];
            lVar6 = (longlong)iVar3 * 0x68;
            puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar6);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar6);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar6);
            *puVar1 = 0;
            puVar1[1] = 0;
            *(undefined8 *)(lVar4 + lVar6) = 0;
            ((undefined8 *)(lVar4 + lVar6))[1] = 0;
            *(undefined8 *)(lVar4 + 0x40 + lVar6) = 0;
            *(undefined4 *)(lVar4 + 0x48 + lVar6) = 0xffffffff;
            *(undefined1 *)(lVar4 + 0x4c + lVar6) = 8;
            pbVar2 = (byte *)(lVar4 + 0x4d + lVar6);
            *pbVar2 = *pbVar2 & 0xfe;
            *(undefined8 *)(lVar4 + 0x50 + lVar6) = 0xffffffff00000000;
            puVar1 = (undefined8 *)(lVar4 + 0x58 + lVar6);
            *puVar1 = 0;
            puVar1[1] = 0;
            local_1f0 = &PTR_FUN_149e37810;
            local_1e8 = param_1;
            local_1e0 = &local_1f0;
            local_1d8 = &local_1e0;
            FUN_1468bf238(&local_1e0,lVar4 + lVar6);
            if ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0) {
              local_208 = 0;
              uStack_200 = 0;
              FUN_140009b9a(local_218,param_1 + 0x14);
              local_1f0 = (undefined **)CONCAT44(local_1f0._4_4_,4);
              FUN_14023423e(&local_1e0,local_218);
              FUN_140056680(local_228,L"FileName");
              FUN_140233eec(&local_208,local_228,&local_1f0);
              if (local_228[0] != 0) {
                FUN_1400020a8();
              }
              if (local_1e0 != (undefined ***)0x0) {
                (*(code *)(*local_1e0)[2])();
                local_1e0 = (undefined ***)0x0;
                local_1d8 = (undefined ****)((ulonglong)local_1d8 & 0xffffffff00000000);
              }
              if (local_218[0] != (longlong *)0x0) {
                (**(code **)(*local_218[0] + 0x10))();
              }
              FUN_14010f8af(local_208,uStack_200 & 0xffffffff);
              if (local_208 != 0) {
                FUN_1400020a8();
              }
              *(undefined4 *)(param_1 + 0x43) = 0;
              if (-1 < *(int *)((longlong)param_1 + 0x21c)) goto LAB_142ae68e4;
              uVar7 = 0;
              FUN_1468bbd40(local_230,0);
              break;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)param_1[0x23]);
        }
        goto LAB_142ae67be;
      }
    }
    local_208 = 0;
    uStack_200 = 0;
    FUN_140009b9a(local_218,param_1 + 0x14);
    local_1f0 = (undefined **)CONCAT44(local_1f0._4_4_,4);
    FUN_14023423e(&local_1e0,local_218);
    FUN_140056680(local_228,L"FileName");
    FUN_140233eec(&local_208,local_228,&local_1f0);
    if (local_228[0] != 0) {
      FUN_1400020a8();
    }
    if (local_1e0 != (undefined ***)0x0) {
      (*(code *)(*local_1e0)[2])();
      local_1e0 = (undefined ***)0x0;
      local_1d8 = (undefined ****)((ulonglong)local_1d8 & 0xffffffff00000000);
    }
    if (local_218[0] != (longlong *)0x0) {
      (**(code **)(*local_218[0] + 0x10))();
    }
    FUN_14010f8af(local_208,uStack_200 & 0xffffffff);
    if (local_208 != 0) {
      FUN_1400020a8();
    }
LAB_142ae68e4:
    uVar7 = 0;
  }
LAB_142ae67be:
  if ((local_60 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 142ae6ad4 FUN_142ae6ad4 body=1344 status=ok
// SIG undefined FUN_142ae6ad4(void)

ulonglong FUN_142ae6ad4(longlong *param_1)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  longlong local_c8 [2];
  longlong *local_b8 [2];
  longlong *local_a8;
  ulonglong uStack_a0;
  undefined2 *local_98;
  undefined8 uStack_90;
  undefined4 local_80;
  undefined4 uStack_7c;
  int local_78;
  undefined4 local_74;
  longlong *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (((((int)param_1[0x47] < 1) && (0x17f < (int)param_1[8])) && (0 < (int)param_1[0x26])) &&
     (0 < *(int *)((longlong)param_1 + 300))) {
    cVar4 = FUN_1470180e0(param_1);
    if (cVar4 != '\0') {
      lVar3 = param_1[0x4e];
      lVar6 = (**(code **)(*param_1 + 0x28))(param_1);
      iVar9 = *(int *)((longlong)param_1 + 300);
      if (lVar6 + iVar9 <= lVar3) {
        if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar9);
        }
        plVar1 = param_1 + 0x46;
        if (*(int *)((longlong)param_1 + 0x23c) < iVar9) {
          FUN_1402191ca(plVar1);
          iVar9 = *(int *)((longlong)param_1 + 300);
        }
        if ((int)param_1[8] < 0x202) {
          if (0 < iVar9) {
            local_d0 = param_1 + 0x14;
            iVar9 = 0;
            do {
              local_98 = (undefined2 *)0x0;
              uStack_90 = 0;
              FUN_14021219d(param_1,&local_98);
              bVar2 = *(byte *)((longlong)param_1 + 0x29);
              bVar10 = (bVar2 & 2) == 0;
              uVar8 = CONCAT71((int7)(uVar8 >> 8),bVar10);
              if (bVar10) {
                if ((int)param_1[8] < 0x1e4) {
                  FUN_1427b76f8(&local_80,&local_98);
                  if (local_98 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                  local_98 = (undefined2 *)CONCAT44(uStack_7c,local_80);
                  uStack_90 = CONCAT44(local_74,local_78);
                  iVar5 = local_78;
                  if (1 < local_78) {
                    FUN_14064b67c(&local_80,&local_98);
                    if (local_98 != (undefined2 *)0x0) {
                      FUN_1400020a8();
                    }
                    local_98 = (undefined2 *)CONCAT44(uStack_7c,local_80);
                    uStack_90 = CONCAT44(local_74,local_78);
                    iVar5 = local_78;
                  }
                }
                else {
                  iVar5 = (int)uStack_90;
                }
                puVar7 = local_98;
                if (iVar5 == 0) {
                  puVar7 = &DAT_149dfb77a;
                }
                FUN_1446f470e(&local_80,puVar7,1);
                iVar5 = (int)param_1[0x47];
                *(uint *)(param_1 + 0x47) = iVar5 + 1U;
                if (*(uint *)((longlong)param_1 + 0x23c) < iVar5 + 1U) {
                  FUN_1446f84a2(plVar1,iVar5);
                }
                *(ulonglong *)(*plVar1 + (longlong)iVar5 * 8) = CONCAT44(uStack_7c,local_80);
              }
              else {
                local_a8 = (longlong *)0x0;
                uStack_a0 = 0;
                FUN_140009b9a(local_b8,local_d0);
                local_80 = 4;
                FUN_14023423e(&local_70,local_b8);
                FUN_140056680(local_c8,L"FileName");
                FUN_140233eec(&local_a8,local_c8,&local_80);
                if (local_c8[0] != 0) {
                  FUN_1400020a8();
                }
                if (local_70 != (longlong *)0x0) {
                  (**(code **)(*local_70 + 0x10))();
                  local_70 = (longlong *)0x0;
                  local_68 = 0;
                }
                if (local_b8[0] != (longlong *)0x0) {
                  (**(code **)(*local_b8[0] + 0x10))();
                }
                FUN_14010f8af(local_a8,uStack_a0 & 0xffffffff);
                if (local_a8 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
                *(undefined4 *)(param_1 + 0x47) = 0;
                if (*(int *)((longlong)param_1 + 0x23c) < 0) {
                  FUN_1402191ca(plVar1,0);
                }
              }
              if (local_98 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
            } while (((bVar2 & 2) == 0) &&
                    (iVar9 = iVar9 + 1, iVar9 < *(int *)((longlong)param_1 + 300)));
          }
        }
        else if (0 < iVar9) {
          iVar9 = 0;
          do {
            local_c8[0] = 0;
            (**(code **)(*param_1 + 0x160))(param_1,local_c8);
            if ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0) {
              local_98 = (undefined2 *)0x0;
              uStack_90 = 0;
              FUN_140009b9a(&local_a8,param_1 + 0x14);
              local_80 = 4;
              FUN_14023423e(&local_70,&local_a8);
              FUN_140056680(local_b8,L"FileName");
              FUN_140233eec(&local_98,local_b8,&local_80);
              if (local_b8[0] != (longlong *)0x0) {
                FUN_1400020a8();
              }
              if (local_70 != (longlong *)0x0) {
                (**(code **)(*local_70 + 0x10))();
                local_70 = (longlong *)0x0;
                local_68 = 0;
              }
              if (local_a8 != (longlong *)0x0) {
                (**(code **)(*local_a8 + 0x10))();
              }
              FUN_14010f8af(local_98,uStack_90 & 0xffffffff);
              if (local_98 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              *(undefined4 *)(param_1 + 0x47) = 0;
              if (*(int *)((longlong)param_1 + 0x23c) < 0) {
                FUN_1402191ca(plVar1,0);
              }
              goto LAB_142ae6c55;
            }
            iVar5 = (int)param_1[0x47];
            *(uint *)(param_1 + 0x47) = iVar5 + 1U;
            if (*(uint *)((longlong)param_1 + 0x23c) < iVar5 + 1U) {
              FUN_1446f84a2(plVar1,iVar5);
            }
            *(longlong *)(param_1[0x46] + (longlong)iVar5 * 8) = local_c8[0];
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(int *)((longlong)param_1 + 300));
        }
        goto LAB_142ae6b2d;
      }
    }
    local_98 = (undefined2 *)0x0;
    uStack_90 = 0;
    FUN_140009b9a(&local_a8,param_1 + 0x14);
    local_80 = 4;
    FUN_14023423e(&local_70,&local_a8);
    FUN_140056680(local_b8,L"FileName");
    FUN_140233eec(&local_98,local_b8,&local_80);
    if (local_b8[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_70 != (longlong *)0x0) {
      (**(code **)(*local_70 + 0x10))();
      local_70 = (longlong *)0x0;
      local_68 = 0;
    }
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x10))();
    }
    FUN_14010f8af(local_98,uStack_90 & 0xffffffff);
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
LAB_142ae6c55:
    uVar8 = 0;
  }
LAB_142ae6b2d:
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 142ae7016 FUN_142ae7016 body=1681 status=ok
// SIG undefined FUN_142ae7016(void)

ulonglong FUN_142ae7016(longlong *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  void *_Src;
  ulonglong *puVar6;
  longlong lVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 unaff_RSI;
  ulonglong uVar12;
  undefined4 uVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_948 [44];
  undefined4 local_91c;
  longlong *local_918;
  longlong local_910;
  longlong *local_908;
  longlong local_900 [2];
  longlong *local_8f0 [2];
  undefined4 local_8e0;
  int local_8dc;
  longlong local_8d8;
  ulonglong uStack_8d0;
  longlong *local_8c8;
  undefined8 uStack_8c0;
  longlong *local_8b8;
  ulonglong uStack_8b0;
  void *local_8a8;
  ulonglong uStack_8a0;
  undefined4 local_898;
  undefined4 uStack_894;
  longlong local_890;
  longlong *local_888;
  undefined4 local_880;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_948;
  uVar12 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((0 < (int)param_1[0x4d]) || ((int)param_1[0x27] < 1)) goto LAB_142ae705e;
  cVar8 = FUN_1470180e0(param_1);
  if (cVar8 == '\0') {
    local_8a8 = (void *)0x0;
    uStack_8a0 = 0;
    FUN_140009b9a(&local_8b8,param_1 + 0x14);
    local_898 = 4;
    FUN_14023423e(&local_888,&local_8b8);
    FUN_140056680(&local_8c8,L"FileName");
    FUN_140233eec(&local_8a8,&local_8c8,&local_898);
    if (local_8c8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_888 != (longlong *)0x0) {
      (**(code **)(*local_888 + 0x10))();
      local_888 = (longlong *)0x0;
      local_880 = 0;
    }
    if (local_8b8 != (longlong *)0x0) {
      (**(code **)(*local_8b8 + 0x10))();
    }
    FUN_14010f8af(local_8a8,uStack_8a0 & 0xffffffff);
    if (local_8a8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_8a8 = (void *)0x0;
    uStack_8a0 = 0;
    uVar4 = *(uint *)(param_1 + 0x13);
    if ((int)uVar4 < 2) {
      cVar8 = FUN_140f11842(param_1 + 0x14,&local_8a8,0,0);
      if (cVar8 != '\0') goto LAB_142ae726a;
      local_8b8 = (longlong *)0x0;
      uStack_8b0 = 0;
      FUN_140009b9a(&local_8c8,param_1 + 0x14);
      local_898 = 4;
      FUN_14023423e(&local_888,&local_8c8);
      FUN_140056680(&local_8d8,L"FileName");
      FUN_140233eec(&local_8b8,&local_8d8,&local_898);
LAB_142ae734d:
      if (local_8d8 != 0) {
        FUN_1400020a8();
      }
      if (local_888 != (longlong *)0x0) {
        (**(code **)(*local_888 + 0x10))();
        local_888 = (longlong *)0x0;
        local_880 = 0;
      }
      if (local_8c8 != (longlong *)0x0) {
        (**(code **)(*local_8c8 + 0x10))();
      }
      FUN_14010f8af(local_8b8,uStack_8b0 & 0xffffffff);
      if (local_8b8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      bVar15 = false;
    }
    else {
      if (&local_8a8 != (void **)(param_1 + 0x12)) {
        _Src = (void *)param_1[0x12];
        uStack_8a0 = (ulonglong)uVar4;
        FUN_1446dd670(&local_8a8,(ulonglong)uVar4,0);
        memcpy(local_8a8,_Src,(ulonglong)uVar4 * 2);
      }
LAB_142ae726a:
      local_8dc = 0;
      puVar6 = (ulonglong *)param_1[1];
      piVar1 = (int *)*puVar6 + 1;
      if ((int *)puVar6[1] < piVar1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_8dc,4);
        }
        else {
          FUN_14572512c(param_1,&local_8dc);
        }
      }
      else {
        local_8dc = *(int *)*puVar6;
        *puVar6 = (ulonglong)piVar1;
      }
      if ((((*(byte *)((longlong)param_1 + 0x29) & 2) != 0) || (local_8dc < 0)) ||
         (lVar10 = param_1[0x4e], lVar9 = (**(code **)(*param_1 + 0x28))(param_1),
         lVar10 < lVar9 + (longlong)(int)param_1[0x22] * 0x14)) {
        local_8b8 = (longlong *)0x0;
        uStack_8b0 = 0;
        FUN_140009b9a(&local_8c8,param_1 + 0x14);
        local_898 = 4;
        FUN_14023423e(&local_888,&local_8c8);
        FUN_140056680(&local_8d8,L"FileName");
        FUN_140233eec(&local_8b8,&local_8d8,&local_898);
        goto LAB_142ae734d;
      }
      local_918 = param_1 + 0x4c;
      FUN_147018f8a(local_918,local_8dc);
      if (local_8dc < 1) {
        bVar15 = true;
      }
      else {
        plVar11 = param_1 + 0x14;
        iVar14 = 0;
        do {
          local_8b8 = (longlong *)0x0;
          uStack_8b0 = 0;
          FUN_14021219d(param_1,&local_8b8);
          local_8c8 = (longlong *)0x0;
          uStack_8c0 = 0;
          FUN_14021219d(param_1,&local_8c8);
          local_8e0 = 0;
          puVar6 = (ulonglong *)param_1[1];
          puVar2 = (undefined4 *)*puVar6 + 1;
          if ((undefined4 *)puVar6[1] < puVar2) {
            if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
              (**(code **)(*param_1 + 0x170))(param_1,&local_8e0,4);
            }
            else {
              FUN_14572512c(param_1,&local_8e0);
            }
          }
          else {
            local_8e0 = *(undefined4 *)*puVar6;
            *puVar6 = (ulonglong)puVar2;
          }
          bVar3 = *(byte *)((longlong)param_1 + 0x29);
          bVar15 = (bVar3 & 2) == 0;
          if (bVar15) {
            local_908 = plVar11;
            FUN_1470226d6(&local_898,&local_8b8,&local_8a8,&local_8c8);
            FUN_1446f82e2(&local_8d8,(ulonglong)(local_890 - CONCAT44(uStack_894,local_898)) >> 1,
                          CONCAT44(uStack_894,local_898),1);
            lVar10 = local_8d8;
            if ((char)local_880 == '\x01') {
              FUN_1400020a8(CONCAT44(uStack_894,local_898));
            }
            iVar5 = (int)param_1[0x4d];
            lVar9 = (longlong)iVar5;
            *(uint *)(param_1 + 0x4d) = iVar5 + 1U;
            uVar13 = local_8e0;
            if (*(uint *)((longlong)param_1 + 0x26c) < iVar5 + 1U) {
              local_910 = lVar10;
              local_91c = local_8e0;
              FUN_1470227bc(local_918,iVar5);
              lVar10 = local_910;
              uVar13 = local_91c;
            }
            lVar7 = *local_918;
            *(longlong *)(lVar7 + lVar9 * 0x18) = lVar10;
            *(undefined8 *)(lVar7 + 8 + lVar9 * 0x18) = 0;
            *(undefined4 *)(lVar7 + 0x10 + lVar9 * 0x18) = uVar13;
            plVar11 = local_908;
          }
          else {
            local_8d8 = 0;
            uStack_8d0 = 0;
            FUN_140009b9a(local_8f0,plVar11);
            local_898 = 4;
            FUN_14023423e(&local_888,local_8f0);
            FUN_140056680(local_900,L"FileName");
            FUN_140233eec(&local_8d8,local_900,&local_898);
            if (local_900[0] != 0) {
              FUN_1400020a8();
            }
            if (local_888 != (longlong *)0x0) {
              (**(code **)(*local_888 + 0x10))();
              local_888 = (longlong *)0x0;
              local_880 = 0;
            }
            if (local_8f0[0] != (longlong *)0x0) {
              (**(code **)(*local_8f0[0] + 0x10))();
            }
            FUN_14010f8af(local_8d8,uStack_8d0 & 0xffffffff);
            if (local_8d8 != 0) {
              FUN_1400020a8();
            }
          }
          if (local_8c8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          if (local_8b8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        } while (((bVar3 & 2) == 0) && (iVar14 = iVar14 + 1, iVar14 < local_8dc));
      }
    }
    if (local_8a8 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (bVar15) goto LAB_142ae705e;
  }
  uVar12 = 0;
LAB_142ae705e:
  if ((local_60 ^ (ulonglong)auStack_948) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 142ae76a8 FUN_142ae76a8 body=2480 status=ok
// SIG undefined FUN_142ae76a8(void)

ulonglong FUN_142ae76a8(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined2 uVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  longlong **pplVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined1 auStack_9d8 [32];
  uint local_9b8;
  int local_9b4;
  longlong *local_9b0;
  ulonglong local_9a8;
  longlong *local_9a0;
  longlong local_998 [2];
  longlong *local_988 [2];
  longlong *local_978;
  ulonglong uStack_970;
  longlong *local_968;
  ulonglong uStack_960;
  longlong *local_958;
  undefined4 local_950;
  undefined8 local_940;
  longlong *local_938;
  longlong *local_930;
  longlong **local_928;
  longlong local_920 [258];
  undefined1 local_10a [2];
  longlong *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  longlong **pplStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong local_98;
  ulonglong uStack_90;
  uint local_88 [4];
  uint *local_78;
  uint local_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_9d8;
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_1402191ca(param_3,0);
  }
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0x80;
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  if ((int)param_1[0x23] < 1) {
LAB_142ae773f:
    local_940 = (undefined **)((ulonglong)local_940._4_4_ << 0x20);
    iVar14 = (int)param_2[1];
    if (0 < iVar14) {
      iVar6 = 0;
      lVar15 = DAT_14c99e000;
      do {
        if ((*(longlong *)(*param_2 + 0xc + (longlong)iVar6 * 0x38) == lVar15) &&
           (*(longlong *)(*param_2 + (longlong)iVar6 * 0x38 + 0x14) == DAT_14c99e008)) {
          FUN_1447cbafe(&local_98,&local_108,&local_940,0);
          iVar14 = (int)param_2[1];
          lVar15 = DAT_14c99e000;
          iVar6 = (int)local_940;
        }
        iVar6 = iVar6 + 1;
        local_940 = (undefined **)CONCAT44(local_940._4_4_,iVar6);
      } while (iVar6 < iVar14);
    }
    pplStack_e0 = (longlong **)0x0;
    local_d8 = 0x500000000;
    local_928 = (longlong **)((ulonglong)local_928 & 0xffffffffffffff00);
    local_940 = (undefined **)local_920;
    local_938 = local_920;
    local_930 = (longlong *)local_10a;
    if (local_70 == 0) {
      uVar17 = 1;
      uVar10 = 0;
      iVar14 = 0;
      uVar3 = 0;
    }
    else {
      puVar4 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar4 = local_88;
      }
      uVar3 = *puVar4;
      if (uVar3 == 0) {
        iVar14 = local_70 + 0x1e;
        if (-1 < (int)(local_70 - 1)) {
          iVar14 = local_70 - 1;
        }
        uVar10 = 0;
        uVar17 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar17 = uVar10;
        }
        iVar14 = 0;
        do {
          if (uVar17 == uVar10) goto LAB_142ae7894;
          iVar14 = iVar14 + 0x20;
          uVar3 = puVar4[uVar10 + 1];
          uVar10 = uVar10 + 1;
        } while (uVar3 == 0);
      }
      else {
        uVar10 = 0;
        iVar14 = 0;
      }
      uVar17 = (ulonglong)(-uVar3 & uVar3);
      uVar13 = uVar17 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      uVar3 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if ((int)local_70 <= (int)uVar3) {
        uVar3 = local_70;
      }
    }
    if (uVar3 != local_70) {
      local_9b8 = 0xffffffff;
      local_9b0 = param_3;
      local_9a8 = (ulonglong)local_70;
      do {
        uVar3 = *(uint *)(local_98 + (longlong)(int)uVar3 * 0xc);
        bVar18 = (longlong)local_d8 < 0;
        local_d8 = local_d8 & 0xffffffff00000000;
        local_9b4 = iVar14;
        if (bVar18) {
          FUN_147022526(&local_108);
        }
        local_938 = (longlong *)local_940;
        if ((int)uVar3 < 0) {
LAB_142ae7ba7:
          local_978 = (longlong *)0x0;
          uStack_970 = 0;
          FUN_140009b9a(local_988,param_1 + 0x14);
          local_968 = (longlong *)CONCAT44(local_968._4_4_,4);
          FUN_14023423e(&local_958,local_988);
          FUN_140056680(local_998,L"FileName");
          FUN_140233eec(&local_978,local_998,&local_968);
          if (local_998[0] != 0) {
            FUN_1400020a8();
          }
          if (local_958 != (longlong *)0x0) {
            (**(code **)(*local_958 + 0x10))();
            local_958 = (longlong *)0x0;
            local_950 = 0;
          }
          if (local_988[0] != (longlong *)0x0) {
            (**(code **)(*local_988[0] + 0x10))();
          }
          FUN_14010f8af(local_978,uStack_970 & 0xffffffff);
          if (local_978 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          uVar10 = 0;
          goto LAB_142ae7c6a;
        }
        while( true ) {
          uVar13 = local_d8;
          if ((int)param_2[1] <= (int)uVar3) goto LAB_142ae7ba7;
          puVar11 = (undefined8 *)((ulonglong)uVar3 * 0x38 + *param_2);
          lVar15 = (longlong)(int)local_d8;
          uVar3 = (int)local_d8 + 1;
          local_d8 = CONCAT44(local_d8._4_4_,uVar3);
          if (local_d8._4_4_ < uVar3) {
            FUN_1470225f6(&local_108,uVar13 & 0xffffffff);
          }
          pplVar5 = pplStack_e0;
          if (pplStack_e0 == (longlong **)0x0) {
            pplVar5 = &local_108;
          }
          pplVar5[lVar15] = (longlong *)*puVar11;
          uVar3 = *(uint *)(puVar11 + 1);
          if (-1 < (int)uVar3) break;
          uVar3 = ~uVar3;
        }
        if (uVar3 == 0) {
          iVar14 = (int)local_d8;
          lVar15 = (longlong)(int)local_d8;
          pplVar5 = pplStack_e0;
          if (pplStack_e0 == (longlong **)0x0) {
            pplVar5 = &local_108;
          }
          local_9a0 = param_1;
          FUN_14005eb5c(pplVar5 + lVar15 + -1,&local_940);
          if (1 < lVar15) {
            lVar16 = (ulonglong)(iVar14 - 2) << 3;
            uVar13 = 0;
            lVar15 = (ulonglong)(iVar14 - 2) + 1;
            do {
              iVar14 = (int)uVar13;
              uVar1 = (&DAT_149fcb560)[uVar13];
              if (local_930 <= (longlong *)((longlong)local_938 + 2U)) {
                FUN_140213274(&local_940,1);
              }
              *(undefined2 *)local_938 = uVar1;
              if (0 < iVar14) {
                iVar14 = 1;
              }
              uVar13 = (ulonglong)(iVar14 + 1);
              pplVar5 = pplStack_e0;
              if (pplStack_e0 == (longlong **)0x0) {
                pplVar5 = &local_108;
              }
              local_938 = (longlong *)((longlong)local_938 + 2);
              FUN_14005eb5c((longlong)pplVar5 + lVar16,&local_940);
              lVar16 = lVar16 + -8;
              lVar12 = lVar15 + -1;
              bVar18 = 0 < lVar15;
              lVar15 = lVar12;
            } while (lVar12 != 0 && bVar18);
          }
          plVar9 = local_9b0;
          iVar14 = (int)local_9b0[1];
          *(uint *)(local_9b0 + 1) = iVar14 + 1U;
          if (*(uint *)((longlong)local_9b0 + 0xc) < iVar14 + 1U) {
            FUN_1446f84a2(local_9b0,iVar14);
          }
          lVar15 = *plVar9;
          FUN_1446f82e2(&local_968,(ulonglong)((longlong)local_938 - (longlong)local_940) >> 1,
                        local_940,1);
          *(longlong **)(lVar15 + (longlong)iVar14 * 8) = local_968;
          param_1 = local_9a0;
        }
        local_9b8 = local_9b8 & ~(uint)uVar17;
        puVar4 = local_78;
        if (local_78 == (uint *)0x0) {
          puVar4 = local_88;
        }
        iVar6 = (int)uVar10;
        lVar15 = (longlong)iVar6;
        uVar3 = puVar4[lVar15] & local_9b8;
        iVar14 = local_9b4;
        if (uVar3 == 0) {
          iVar7 = local_70 + 0x1e;
          if (-1 < (int)(local_70 - 1)) {
            iVar7 = local_70 - 1;
          }
          iVar7 = iVar7 >> 5;
          iVar14 = local_9b4 + 0x20;
          iVar8 = iVar7;
          if (iVar7 < iVar6) {
            iVar8 = iVar6;
          }
          if (iVar6 < iVar7) {
            lVar16 = 0;
            do {
              uVar3 = puVar4[lVar15 + lVar16 + 1];
              if (uVar3 != 0) {
                uVar10 = (ulonglong)(iVar6 + (int)lVar16 + 1);
                local_9b8 = 0xffffffff;
                goto LAB_142ae7b45;
              }
              iVar14 = iVar14 + 0x20;
              lVar16 = lVar16 + 1;
            } while (iVar8 - lVar15 != lVar16);
            local_9b8 = 0xffffffff;
            iVar6 = iVar8;
          }
          uVar10 = (ulonglong)(iVar6 + 1);
          uVar3 = local_70;
        }
        else {
LAB_142ae7b45:
          uVar17 = (ulonglong)(-uVar3 & uVar3);
          uVar13 = uVar17 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          uVar3 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if ((int)local_70 <= (int)uVar3) {
            uVar3 = local_70;
          }
        }
        param_3 = local_9b0;
      } while (uVar3 != (uint)local_9a8);
    }
LAB_142ae7894:
    FUN_14063460b(*param_3,(int)param_3[1]);
    uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
LAB_142ae7c6a:
    if ((char)local_928 == '\x01') {
      FUN_1400020a8(local_940);
    }
    if (pplStack_e0 != (longlong **)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    cVar2 = FUN_1470180e0(param_1,(longlong)*(int *)((longlong)param_1 + 0x11c));
    if (cVar2 != '\0') {
      lVar15 = param_1[0x4e];
      lVar16 = (**(code **)(*param_1 + 0x28))(param_1);
      if (lVar16 + (int)param_1[0x23] <= lVar15) {
        local_d8 = 0;
        uStack_d0 = 0;
        local_e8 = 0;
        pplStack_e0 = (longlong **)0x0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_108 = (longlong *)0x0;
        uStack_100 = 0;
        local_c8 = 0;
        local_c0 = 0xffffffff;
        local_bc = 8;
        local_b8 = 0xffffffff00000000;
        local_b0 = 0;
        uStack_a8 = 0;
        if (0 < (int)param_1[0x23]) {
          iVar14 = 0;
          do {
            local_940 = &PTR_FUN_149e37810;
            local_938 = param_1;
            local_930 = &local_940;
            local_928 = &local_930;
            FUN_1468bf238(&local_930,&local_108);
            if ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0) {
              local_968 = (longlong *)0x0;
              uStack_960 = 0;
              FUN_140009b9a(&local_978,param_1 + 0x14);
              local_940 = (undefined **)CONCAT44(local_940._4_4_,4);
              FUN_14023423e(&local_930,&local_978);
              FUN_140056680(local_988,L"FileName");
              FUN_140233eec(&local_968,local_988,&local_940);
              if (local_988[0] != (longlong *)0x0) {
                FUN_1400020a8();
              }
              if (local_930 != (longlong *)0x0) {
                (**(code **)(*local_930 + 0x10))();
                local_930 = (longlong *)0x0;
                local_928 = (longlong **)((ulonglong)local_928 & 0xffffffff00000000);
              }
              if (local_978 != (longlong *)0x0) {
                (**(code **)(*local_978 + 0x10))();
              }
              FUN_14010f8af(local_968,uStack_960 & 0xffffffff);
              plVar9 = local_968;
              goto LAB_142ae7e4d;
            }
            if ((longlong)uStack_100 < 0) {
              local_940 = (undefined **)CONCAT44(local_940._4_4_,~uStack_100._4_4_);
              FUN_144984904(&local_98,&local_968,&local_940,0);
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)param_1[0x23]);
        }
        goto LAB_142ae773f;
      }
    }
    local_108 = (longlong *)0x0;
    uStack_100 = 0;
    FUN_140009b9a(&local_968,param_1 + 0x14);
    local_940 = (undefined **)CONCAT44(local_940._4_4_,4);
    FUN_14023423e(&local_930,&local_968);
    FUN_140056680(&local_978,L"FileName");
    FUN_140233eec(&local_108,&local_978,&local_940);
    if (local_978 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_930 != (longlong *)0x0) {
      (**(code **)(*local_930 + 0x10))();
      local_930 = (longlong *)0x0;
      local_928 = (longlong **)((ulonglong)local_928 & 0xffffffff00000000);
    }
    if (local_968 != (longlong *)0x0) {
      (**(code **)(*local_968 + 0x10))();
    }
    FUN_14010f8af(local_108,uStack_100 & 0xffffffff);
    plVar9 = local_108;
LAB_142ae7e4d:
    if (plVar9 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    uVar10 = 0;
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  uVar17 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar17 != 0) {
    FUN_1447a08a2(&local_98,0);
  }
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_9d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 142ae805a FUN_142ae805a body=4922 status=ok
// SIG undefined FUN_142ae805a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_142ae805a(longlong *param_1,longlong *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  undefined8 *puVar6;
  bool bVar7;
  wchar_t *pwVar8;
  int iVar9;
  undefined4 uVar10;
  char cVar11;
  uint uVar12;
  ulonglong uVar13;
  size_t sVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  wchar_t *pwVar17;
  undefined2 *puVar18;
  int iVar19;
  longlong lVar20;
  undefined8 unaff_RSI;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  bool bVar25;
  undefined1 auStack_13f8 [32];
  undefined8 *local_13d8;
  undefined8 *local_13d0;
  longlong *local_13c8;
  undefined4 local_13c0;
  char local_13a9;
  undefined4 local_13a8;
  int local_13a4;
  longlong *local_13a0;
  longlong *local_1398;
  longlong *local_1390;
  undefined1 *local_1388;
  int local_137c;
  undefined2 *local_1378;
  ulonglong uStack_1370;
  undefined8 local_1368;
  undefined8 uStack_1360;
  undefined4 local_1350;
  undefined4 uStack_134c;
  undefined4 uStack_1348;
  undefined4 uStack_1344;
  undefined4 local_1340;
  longlong local_1338;
  undefined4 local_1330;
  undefined4 local_1328;
  undefined4 uStack_1324;
  undefined4 uStack_1320;
  undefined4 uStack_131c;
  undefined8 local_1318;
  undefined8 uStack_1310;
  undefined8 local_1308;
  undefined8 uStack_1300;
  undefined8 local_12f8;
  undefined8 uStack_12f0;
  undefined4 local_12e8;
  wchar_t *local_12d8;
  wchar_t *pwStack_12d0;
  wchar_t *local_12c8;
  wchar_t *pwStack_12c0;
  int local_12b8;
  undefined8 local_12b0;
  undefined8 local_12a8;
  undefined8 local_12a0;
  undefined8 local_1298;
  undefined8 local_1290;
  undefined8 local_1288;
  undefined8 local_1280;
  undefined8 local_1278;
  undefined8 uStack_1270;
  undefined8 local_1268;
  longlong local_1258;
  undefined4 local_1250;
  undefined2 *local_1248;
  int local_1240;
  undefined8 local_1238;
  undefined4 uStack_1230;
  undefined4 uStack_122c;
  undefined8 local_1228;
  undefined4 uStack_1220;
  undefined4 uStack_121c;
  undefined8 local_1218;
  undefined4 uStack_1210;
  undefined4 uStack_120c;
  longlong local_1208;
  int local_1200;
  undefined2 *local_11f8;
  int local_11f0;
  longlong local_11e8;
  int local_11e0;
  wchar_t *local_11d8;
  undefined4 uStack_11d0;
  undefined4 uStack_11cc;
  wchar_t *local_11c8;
  undefined4 uStack_11c0;
  undefined4 uStack_11bc;
  wchar_t **local_11b8;
  wchar_t **local_11b0;
  longlong local_11a8 [2];
  longlong local_1198;
  undefined8 local_1190;
  undefined4 local_1188;
  undefined4 uStack_1184;
  undefined4 uStack_1180;
  undefined4 uStack_117c;
  undefined4 local_1178;
  undefined4 uStack_1174;
  undefined4 uStack_1170;
  undefined4 uStack_116c;
  undefined8 local_1168;
  int local_1160;
  undefined8 local_1158;
  undefined4 uStack_1150;
  undefined4 uStack_114c;
  undefined8 local_1148;
  undefined4 uStack_1140;
  undefined4 uStack_113c;
  undefined8 local_1138;
  int local_1130;
  longlong local_1128;
  int local_1120;
  wchar_t *local_1118;
  wchar_t *pwStack_1110;
  undefined1 local_10f8 [32];
  wchar_t *local_10d8;
  undefined8 uStack_10d0;
  undefined1 *local_10c8;
  char local_10c0;
  wchar_t local_10b8 [1035];
  undefined1 auStack_8a2 [10];
  wchar_t *local_898;
  wchar_t *pwStack_890;
  longlong *local_888;
  ulonglong uStack_880;
  wchar_t local_878 [32];
  undefined8 local_838;
  undefined4 uStack_830;
  undefined8 local_82c;
  undefined4 local_824;
  undefined8 local_818;
  undefined4 local_810;
  undefined1 auStack_62 [26];
  undefined8 uStack_48;
  
  uStack_48 = 0x142ae8070;
  auStack_62._2_8_ = DAT_14c707940 ^ (ulonglong)auStack_13f8;
  *param_3 = 0;
  if ((int)param_1[0x1b] < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(auStack_62._2_8_ ^ (ulonglong)auStack_13f8);
  }
  cVar11 = FUN_142ae62ba(param_1);
  if (((cVar11 == '\0') || (cVar11 = FUN_142ae644c(param_1), cVar11 == '\0')) ||
     (cVar11 = FUN_142ae677a(param_1), cVar11 == '\0')) {
    uVar16 = 0;
    goto LAB_142ae80c6;
  }
  cVar11 = FUN_1470180e0(param_1,(longlong)*(int *)((longlong)param_1 + 0x1ac));
  if (cVar11 == '\0') {
    cVar11 = FUN_1470185c6(param_1,param_2);
    uVar16 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((cVar11 == '\0') &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) < 0)) {
      FUN_140944cba(param_2,0);
    }
    goto LAB_142ae80c6;
  }
  local_1378 = (undefined2 *)0x0;
  uStack_1370 = 0;
  uVar5 = *(uint *)(param_1 + 0x13);
  if ((int)uVar5 < 2) {
    uVar16 = 0;
    cVar11 = FUN_140f11842(param_1 + 0x14,&local_1378,0,0);
    if (cVar11 != '\0') goto LAB_142ae8217;
  }
  else {
    if (&local_1378 != (undefined2 **)(param_1 + 0x12)) {
      puVar18 = (undefined2 *)param_1[0x12];
      uStack_1370 = (ulonglong)uVar5;
      FUN_1446dd670(&local_1378,uVar5,0);
      memcpy(local_1378,puVar18,(ulonglong)uVar5 * 2);
    }
LAB_142ae8217:
    uVar16 = 0;
    local_137c = 0;
    FUN_140d2be42(&local_11f8,&local_1378);
    (**(code **)(*param_1 + 0x30))(param_1);
    uVar5 = *(uint *)(param_1 + 0x1b);
    local_1208 = -1;
    local_1200 = 0;
    cVar11 = FUN_147018fb4(&local_1208,param_1,param_1 + 0x17,&local_137c);
    if (cVar11 != '\0') {
      param_1[0x4f] = local_1208;
      local_1238 = 0;
      uStack_1230 = 0;
      local_1228 = 0;
      uStack_1220 = 0;
      local_1218 = 0;
      uStack_1210 = 0;
      local_1248 = local_1378;
      local_1240 = (int)uStack_1370 + -1;
      if ((int)uStack_1370 == 0) {
        local_1240 = 0;
      }
      local_13a9 = FUN_1468c5297(param_1 + 0x17);
      if (((uVar5 >> 0x11 & 1) != 0) &&
         ((*(int *)((longlong)param_1 + 0xbc) < 0x151 || (local_1200 == 0)))) {
        FUN_141090af6(&local_898,&local_1378);
        uVar16 = FUN_14001cc68(0x70,0x10);
        lVar20 = param_1[0x1b];
        local_1258 = param_1[0x38];
        local_1250 = (undefined4)param_1[0x39];
        local_1278 = 0;
        uStack_1270 = 0;
        local_1268 = 0;
        FUN_1446f470e(&local_1290,L"World",1);
        FUN_1446f470e(&local_1298,L"/Script/Engine",1);
        local_1288 = local_1298;
        local_1280 = local_1290;
        pwVar17 = L"";
        if ((int)pwStack_890 != 0) {
          pwVar17 = local_898;
        }
        FUN_1446f470e(&local_12a0,pwVar17,1);
        puVar18 = &DAT_149dfb77a;
        if (local_11f0 != 0) {
          puVar18 = local_11f8;
        }
        FUN_1446f470e(&local_12a8,puVar18,1);
        puVar18 = &DAT_149dfb77a;
        if ((int)uStack_1370 != 0) {
          puVar18 = local_1378;
        }
        FUN_1446f470e(&local_12b0,puVar18,1);
        local_13c8 = &local_1258;
        local_13d0 = &local_1278;
        local_13d8 = &local_1288;
        local_13c0 = (int)lVar20;
        FUN_146857b14(uVar16,local_12b0,local_12a8,local_12a0);
        iVar19 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar19 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar19 + 1U) {
          FUN_1407de694(param_2,iVar19);
        }
        *(ulonglong *)(*param_2 + (longlong)iVar19 * 8) = uVar16;
        if (local_898 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      uVar16 = CONCAT71((int7)(uVar16 >> 8),1);
      if (0 < local_1200) {
        local_1390 = param_1 + 0x42;
        local_1398 = param_1 + 0x40;
        local_13a0 = (longlong *)auStack_62;
        local_1388 = auStack_8a2;
        iVar19 = 0;
        do {
          local_12c8 = (wchar_t *)0x0;
          pwStack_12c0 = (wchar_t *)0x0;
          local_12d8 = (wchar_t *)0x0;
          pwStack_12d0 = (wchar_t *)0x0;
          local_12b8 = 0;
          cVar11 = FUN_14701911c(&local_12d8,param_1);
          bVar7 = true;
          if (cVar11 != '\0') {
            local_12f8 = 0;
            uStack_12f0 = 0;
            local_12e8 = 0;
            local_13a4 = iVar19;
            if (local_12b8 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(local_12b8);
            }
            if ((local_12b8 != 0) && (FUN_140958f00(&local_12f8), 0 < local_12b8)) {
              iVar19 = 0;
              do {
                local_888 = (longlong *)0x0;
                uStack_880 = 0;
                local_898 = (wchar_t *)0x0;
                pwStack_890 = (wchar_t *)0x0;
                FUN_14021219d(param_1,&local_898);
                FUN_14021219d(param_1,&local_888);
                if ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0) {
                  local_137c = 3;
                  if (local_888 != (longlong *)0x0) {
                    FUN_1400020a8();
                  }
                  if (local_898 != (wchar_t *)0x0) {
                    FUN_1400020a8();
                  }
                  bVar7 = true;
                  goto LAB_142ae8e92;
                }
                if ((1 < (int)pwStack_890) && (1 < (int)uStack_880)) {
                  FUN_1446f470e(&local_10d8,local_898,1);
                  FUN_147022850(&local_12f8,&local_10d8);
                }
                if (local_888 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
                if (local_898 != (wchar_t *)0x0) {
                  FUN_1400020a8();
                }
                iVar19 = iVar19 + 1;
              } while (iVar19 < local_12b8);
            }
            if (local_13a9 != '\0') {
              uStack_1310 = CONCAT44(uStack_121c,uStack_1220);
              uStack_1300 = CONCAT44(uStack_120c,uStack_1210);
              local_1308 = local_1218;
              local_1318 = local_1228;
              local_1328 = (undefined4)local_1238;
              uStack_1324 = local_1238._4_4_;
              uStack_1320 = uStack_1230;
              uStack_131c = uStack_122c;
              if ((longlong)(int)uStack_12f0 != 0) {
                lVar23 = (longlong)(int)uStack_12f0 * 0x18 + local_12f8;
                lVar20 = local_12f8;
                do {
                  if (1 < *(int *)(lVar20 + 0x10)) {
                    plVar1 = (longlong *)(lVar20 + 8);
                    local_1128 = *plVar1;
                    local_1120 = *(int *)(lVar20 + 0x10) + -1;
                    cVar11 = FUN_1468716aa(&local_1128,0);
                    if (cVar11 == '\0') {
                      local_1148 = (wchar_t *)0x0;
                      uStack_1140 = 0;
                      local_1158 = (wchar_t *)0x0;
                      uStack_1150 = 0;
                      local_1168 = *(undefined8 *)(lVar20 + 8);
                      local_1160 = *(int *)(lVar20 + 0x10) + -1;
                      if (*(int *)(lVar20 + 0x10) == 0) {
                        local_1160 = 0;
                      }
                      cVar11 = FUN_14475e408(&local_1168);
                      if (cVar11 != '\0') {
                        uStack_880 = uStack_880 & 0xffffffffffffff00;
                        local_888 = local_13a0;
                        local_1178 = (undefined4)local_1148;
                        uStack_1174 = local_1148._4_4_;
                        uStack_1170 = uStack_1140;
                        uStack_116c = uStack_113c;
                        local_898 = local_878;
                        pwStack_890 = local_878;
                        cVar11 = FUN_1468c53ba(&local_1328,&local_1178,&local_898);
                        if (cVar11 == '\0') {
                          local_13a8 = 0;
                        }
                        else {
                          local_13a8 = (undefined4)
                                       CONCAT71((int7)((ulonglong)
                                                       ((longlong)pwStack_890 - (longlong)local_898)
                                                      >> 8),
                                                ((longlong)pwStack_890 - (longlong)local_898 &
                                                0x1fffffffeU) != 0);
                        }
                        local_10c0 = '\0';
                        local_10d8 = local_10b8;
                        local_10c8 = local_1388;
                        local_1188 = (undefined4)local_1158;
                        uStack_1184 = local_1158._4_4_;
                        uStack_1180 = uStack_1150;
                        uStack_117c = uStack_114c;
                        uStack_10d0 = local_10d8;
                        cVar11 = FUN_1468c53ba(&local_1328,&local_1188,&local_10d8);
                        uVar13 = (longlong)uStack_10d0 - (longlong)local_10d8;
                        if ((char)local_13a8 == '\0') {
                          local_11c8 = local_1148;
                          uStack_11c0 = uStack_1140;
                          uStack_11bc = uStack_113c;
                          uVar10 = uStack_11c0;
                        }
                        else {
                          *pwStack_890 = L'\0';
                          local_11c8 = local_898;
                          uVar10 = 0;
                          if (local_898 != (wchar_t *)0x0) {
                            sVar14 = wcslen(local_898);
                            uVar10 = (int)sVar14;
                          }
                        }
                        uStack_11c0 = uVar10;
                        FUN_14681a842(&local_1118,&local_11c8);
                        if (cVar11 == '\0' || (uVar13 & 0x1fffffffe) == 0) {
                          local_11d8 = local_1158;
                          uStack_11d0 = uStack_1150;
                          uStack_11cc = uStack_114c;
                          uVar10 = uStack_11d0;
                        }
                        else {
                          *uStack_10d0 = L'\0';
                          local_11d8 = local_10d8;
                          uVar10 = 0;
                          if (local_10d8 != (wchar_t *)0x0) {
                            sVar14 = wcslen(local_10d8);
                            uVar10 = (int)sVar14;
                          }
                        }
                        uStack_11d0 = uVar10;
                        FUN_14681a842(local_10f8,&local_11d8);
                        local_11b8 = &local_1118;
                        local_11b0 = &local_10d8;
                        FUN_1407adb6e(local_11a8,&local_11b8);
                        FUN_140230a63();
                        FUN_140230ad0(&DAT_14c8731a8,&local_1198,L"{0}\'{1}\'",local_11a8);
                        FUN_1407adb3e(local_11a8[0]);
                        if (local_11a8[0] != 0) {
                          FUN_1400020a8();
                        }
                        lVar22 = 0x40;
                        do {
                          if (*(longlong *)((longlong)&local_1128 + lVar22) != 0) {
                            FUN_1400020a8();
                          }
                          lVar22 = lVar22 + -0x20;
                        } while (lVar22 != 0);
                        if (plVar1 == &local_1198) {
                          iVar19 = *(int *)(lVar20 + 0x10);
                        }
                        else {
                          if (*(longlong *)(lVar20 + 8) != 0) {
                            FUN_1400020a8();
                          }
                          *(longlong *)(lVar20 + 8) = local_1198;
                          local_1198 = 0;
                          iVar19 = (int)local_1190;
                          *(int *)(lVar20 + 0x10) = (int)local_1190;
                          *(undefined4 *)(lVar20 + 0x14) = local_1190._4_4_;
                          local_1190 = 0;
                        }
                        local_11e8 = *plVar1;
                        local_11e0 = iVar19 + -1;
                        if (iVar19 == 0) {
                          local_11e0 = 0;
                        }
                        FUN_14475e408(&local_11e8);
                        if (local_1198 != 0) {
                          FUN_1400020a8();
                        }
                        if (local_10c0 == '\x01') {
                          FUN_1400020a8(local_10d8);
                        }
                        if ((char)uStack_880 == '\x01') {
                          FUN_1400020a8(local_898);
                        }
                      }
                    }
                    else {
                      uStack_880 = uStack_880 & 0xffffffffffffff00;
                      local_888 = local_13a0;
                      local_1138 = *(undefined8 *)(lVar20 + 8);
                      local_1130 = *(int *)(lVar20 + 0x10) + -1;
                      if (*(int *)(lVar20 + 0x10) == 0) {
                        local_1130 = 0;
                      }
                      local_898 = local_878;
                      pwStack_890 = local_878;
                      cVar11 = FUN_1468c53ba(&local_1328);
                      if ((cVar11 != '\0') &&
                         (((longlong)pwStack_890 - (longlong)local_898 & 0x1fffffffeU) != 0)) {
                        *pwStack_890 = L'\0';
                        FUN_14020fad6(plVar1);
                      }
                      if ((char)uStack_880 == '\x01') {
                        FUN_1400020a8(local_898);
                      }
                    }
                  }
                  lVar20 = lVar20 + 0x18;
                } while (lVar20 != lVar23);
              }
            }
            if (((uVar5 >> 0x11 & 1) == 0) || (0x150 < *(int *)((longlong)param_1 + 0xbc))) {
LAB_142ae8bb6:
              pwVar17 = L"";
              if ((int)pwStack_12d0 != 0) {
                pwVar17 = local_12d8;
              }
              iVar19 = wcsncmp(pwVar17,L"/",1);
              if (iVar19 == 0) {
                bVar7 = false;
                if (0x207 < *(int *)((longlong)param_1 + 0xbc)) goto LAB_142ae8d79;
              }
              else {
                local_13d0 = (undefined8 *)CONCAT44(local_13d0._4_4_,0xffffffff);
                local_13d8 = (undefined8 *)((ulonglong)local_13d8 & 0xffffffff00000000);
                iVar19 = FUN_1447ee042(&local_12d8,&DAT_149e0635c,1,0);
                puVar18 = local_1378;
                bVar7 = false;
                if (iVar19 == -1) {
                  lVar20 = (longlong)(int)uStack_1370;
                  local_10d8 = (wchar_t *)0x0;
                  uStack_10d0 = (wchar_t *)CONCAT44(uStack_10d0._4_4_,(int)uStack_1370);
                  FUN_1446dd670(&local_10d8,(uint)(lVar20 == 0) + (int)uStack_1370 + 1,0);
                  if (lVar20 != 0) {
                    memcpy(local_10d8,puVar18,lVar20 * 2);
                  }
                  FUN_1400020e8(&local_10d8,&DAT_149e0635c,1);
                  pwVar8 = uStack_10d0;
                  pwVar17 = local_12d8;
                  iVar19 = (int)uStack_10d0;
                  if ((int)uStack_10d0 < 2) {
                    local_898 = (wchar_t *)0x0;
                    lVar20 = (longlong)(int)pwStack_12d0;
                    pwStack_890 = (wchar_t *)CONCAT44(pwStack_890._4_4_,(int)pwStack_12d0);
                    if (lVar20 == 0) {
                      pwStack_890 = (wchar_t *)((ulonglong)pwStack_12d0 & 0xffffffff);
                    }
                    else {
                      FUN_1446dd670(&local_898,(ulonglong)pwStack_12d0 & 0xffffffff,0);
                      memcpy(local_898,pwVar17,lVar20 * 2);
                    }
                  }
                  else {
                    iVar24 = (int)pwStack_12d0 + -1;
                    if ((int)pwStack_12d0 == 0) {
                      iVar24 = 0;
                    }
                    local_898 = local_10d8;
                    iVar9 = uStack_10d0._4_4_;
                    local_10d8 = (wchar_t *)0x0;
                    uStack_10d0 = (wchar_t *)0x0;
                    pwStack_890 = pwVar8;
                    iVar2 = iVar24 + iVar19;
                    if (iVar2 < iVar19) {
                    /* WARNING: Subroutine does not return */
                      FUN_1456afac4((longlong)iVar24);
                    }
                    if (iVar9 < iVar2) {
                      FUN_1446f8c06(&local_898);
                    }
                    FUN_1400020e8(&local_898,local_12d8,iVar24);
                  }
                  if (local_12d8 != (wchar_t *)0x0) {
                    FUN_1400020a8(local_12d8);
                  }
                  local_12d8 = local_898;
                  pwStack_12d0 = pwStack_890;
                  local_898 = (wchar_t *)0x0;
                  pwStack_890 = (wchar_t *)0x0;
                  if (local_10d8 != (wchar_t *)0x0) {
                    FUN_1400020a8();
                  }
LAB_142ae8d79:
                  if (1 < (longlong)(int)pwStack_12c0) {
                    lVar20 = 0;
                    do {
                      if (*(short *)((longlong)local_12c8 + lVar20) == 0x2f) goto LAB_142ae8d8b;
                      lVar20 = lVar20 + 2;
                    } while ((longlong)(int)pwStack_12c0 * 2 + -2 != lVar20);
                    uVar15 = (**(code **)(*param_1 + 0x28))(param_1);
                    iVar19 = 0;
                    pwVar17 = L"";
                    if ((int)pwStack_12c0 != 0) {
                      pwVar17 = local_12c8;
                    }
                    FUN_1446f470e(&local_1128,pwVar17,1);
                    local_838 = 0;
                    uStack_830 = 0;
                    local_898 = (wchar_t *)0x0;
                    pwStack_890 = (wchar_t *)0x0;
                    local_888 = (longlong *)0x0;
                    uStack_880 = 0;
                    local_878[0] = L'\0';
                    local_878[1] = L'\0';
                    local_878[2] = L'\0';
                    local_878[3] = L'\0';
                    local_878[4] = L'\0';
                    local_878[5] = L'\0';
                    local_878[6] = L'\0';
                    local_878[7] = L'\0';
                    local_878[8] = L'\0';
                    local_878[9] = L'\0';
                    local_878[10] = L'\0';
                    local_878[0xb] = L'\0';
                    local_878[0xc] = L'\0';
                    local_878[0xd] = L'\0';
                    local_878[0xe] = L'\0';
                    local_878[0xf] = L'\0';
                    local_878[0x10] = L'\0';
                    local_878[0x11] = L'\0';
                    local_878[0x12] = L'\0';
                    local_878[0x13] = L'\0';
                    local_878[0x14] = L'\0';
                    local_878[0x15] = L'\0';
                    local_878[0x16] = L'\0';
                    local_878[0x17] = L'\0';
                    local_82c = 0xffffffff00000080;
                    local_824 = 0;
                    local_818 = 0;
                    local_810 = 0;
                    FUN_147018130(&local_898,local_1398);
                    FUN_147018186(&local_888,local_1390);
                    local_1118 = (wchar_t *)0x0;
                    pwStack_1110 = (wchar_t *)0x0;
                    if ((longlong)(int)uStack_880 != 0) {
                      lVar20 = 0;
                      do {
                        uVar12 = *(uint *)((longlong)local_888 + lVar20 + 0xc);
                        if ((longlong)(int)uVar12 < 0) {
                          if (*(longlong *)(local_898 + (ulonglong)~uVar12 * 0x1c) == local_1128) {
                            FUN_1468b5820(&local_898,&local_10d8,(ulonglong)~uVar12);
                            goto LAB_142ae916b;
                          }
                        }
                        else if ((uVar12 != 0) &&
                                (local_888[(longlong)(int)uVar12 * 0xd + -0xd] == local_1128)) {
                          local_13d8 = (undefined8 *)((ulonglong)local_13d8 & 0xffffffffffffff00);
                          FUN_1468b5ac4(&local_898,&local_10d8,&local_1378,uVar12 - 1);
LAB_142ae916b:
                          local_1118 = local_10d8;
                          pwStack_1110 = uStack_10d0;
                          iVar19 = uStack_10d0._4_4_;
                          if (1 < (int)uStack_10d0) goto LAB_142ae91a0;
                          break;
                        }
                        lVar20 = lVar20 + 0x68;
                      } while ((longlong)(int)uStack_880 * 0x68 - lVar20 != 0);
                    }
                    pwVar17 = local_12c8;
                    iVar24 = (int)pwStack_12c0;
                    lVar20 = (longlong)(int)pwStack_12c0;
                    pwStack_1110 = (wchar_t *)CONCAT44(pwStack_1110._4_4_,(int)pwStack_12c0);
                    if ((int)pwStack_12c0 == 0 && iVar19 == 0) {
                      pwStack_1110 = (wchar_t *)((ulonglong)pwStack_12c0 & 0xffffffff);
                    }
                    else {
                      FUN_1446dd670(&local_1118,(ulonglong)pwStack_12c0 & 0xffffffff,iVar19);
                      if (iVar24 != 0) {
                        memcpy(local_1118,pwVar17,lVar20 * 2);
                      }
                    }
LAB_142ae91a0:
                    FUN_1468b626c(&local_898);
                    if (local_12c8 != (wchar_t *)0x0) {
                      FUN_1400020a8();
                    }
                    local_12c8 = local_1118;
                    pwStack_12c0 = pwStack_1110;
                    (**(code **)(*param_1 + 0x1a0))(param_1,uVar15);
                  }
LAB_142ae8d8b:
                  uVar15 = FUN_14001cc68(0x70,0x10);
                  lVar20 = param_1[0x1b];
                  local_1338 = param_1[0x38];
                  local_1330 = (undefined4)param_1[0x39];
                  local_1350 = (undefined4)local_12f8;
                  uStack_134c = local_12f8._4_4_;
                  uStack_1348 = (int)uStack_12f0;
                  uStack_1344 = uStack_12f0._4_4_;
                  local_12f8 = 0;
                  uStack_12f0 = 0;
                  local_1340 = 0;
                  puVar6 = *(undefined8 **)((longlong)param_1 + 0xbc);
                  local_1368 = 0;
                  uStack_1360 = 0;
                  local_898 = local_12c8;
                  iVar19 = (int)pwStack_12c0 + -1;
                  if ((int)pwStack_12c0 == 0) {
                    iVar19 = 0;
                  }
                  pwStack_890 = (wchar_t *)CONCAT44(pwStack_890._4_4_,iVar19);
                  FUN_1468fe3e4(&local_1368,&local_898);
                  local_13c8 = &local_1338;
                  local_13d0 = (undefined8 *)&local_1350;
                  local_13d8 = puVar6;
                  local_13c0 = (int)lVar20;
                  FUN_1406ddcc2(uVar15,&local_1378,&local_12d8);
                  iVar19 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar19 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar19 + 1U) {
                    FUN_1407de694(param_2,iVar19);
                  }
                  *(undefined8 *)(*param_2 + (longlong)iVar19 * 8) = uVar15;
                  bVar7 = false;
                }
              }
            }
            else {
              FUN_141090af6(&local_898,&local_1378);
              if ((int)pwStack_12d0 == (int)pwStack_890) {
                bVar25 = true;
                if (1 < (int)pwStack_12d0) {
                  lVar20 = 0;
                  while( true ) {
                    uVar3 = *(ushort *)((longlong)local_12d8 + lVar20);
                    uVar12 = (uint)uVar3;
                    uVar4 = *(ushort *)((longlong)local_898 + lVar20);
                    uVar21 = (uint)uVar4;
                    if (uVar3 != uVar4) {
                      if ((uVar4 | uVar3) < 0x80) {
                        uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                        uVar21 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                        if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_142ae8b1d;
                      }
                      iVar19 = uVar12 - uVar21;
                      goto LAB_142ae8b98;
                    }
                    if (uVar3 == 0) break;
LAB_142ae8b1d:
                    lVar20 = lVar20 + 2;
                  }
                  iVar19 = 0;
LAB_142ae8b98:
                  bVar25 = iVar19 == 0;
                }
              }
              else {
                bVar25 = (int)pwStack_890 + (int)pwStack_12d0 == 1;
              }
              if (local_898 != (wchar_t *)0x0) {
                FUN_1400020a8();
              }
              bVar7 = false;
              if (bVar25) goto LAB_142ae8bb6;
            }
LAB_142ae8e92:
            FUN_140958ed1(local_12f8,uStack_12f0 & 0xffffffff);
            iVar19 = local_13a4;
            if (local_12f8 != 0) {
              FUN_1400020a8();
              iVar19 = local_13a4;
            }
          }
          if (local_12c8 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          if (local_12d8 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          if (bVar7) {
            uVar16 = 0;
            break;
          }
          iVar19 = iVar19 + 1;
        } while (iVar19 < local_1200);
      }
    }
    if (local_11f8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if ((char)uVar16 == '\0') {
      local_10d8 = (wchar_t *)0x0;
      uStack_10d0 = (wchar_t *)0x0;
      FUN_140009b9a(&local_1118,param_1 + 0x14);
      local_898 = (wchar_t *)CONCAT44(local_898._4_4_,4);
      FUN_14023423e(&local_888,&local_1118);
      FUN_140056680(&local_1238,L"FileName");
      FUN_140233eec(&local_10d8,&local_1238,&local_898);
      if (local_1238 != 0) {
        FUN_1400020a8();
      }
      if (local_888 != (longlong *)0x0) {
        (**(code **)(*local_888 + 0x10))();
        local_888 = (longlong *)0x0;
        uStack_880 = uStack_880 & 0xffffffff00000000;
      }
      if (local_1118 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_1118 + 0x10))();
      }
      FUN_14010f8af(local_10d8,(ulonglong)uStack_10d0 & 0xffffffff);
      if (local_10d8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_1378 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_142ae80c6:
  if ((auStack_62._2_8_ ^ (ulonglong)auStack_13f8) == DAT_14c707940) {
    return uVar16 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ae93c0 FUN_142ae93c0 body=692 status=ok
// SIG undefined FUN_142ae93c0(void)

undefined4 FUN_142ae93c0(longlong param_1,undefined4 *param_2,undefined4 *param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined1 auStack_128 [32];
  longlong local_108 [2];
  longlong *local_f8 [2];
  longlong local_e8;
  ulonglong uStack_e0;
  undefined4 local_d0 [4];
  longlong *local_c0;
  undefined4 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_80 = 0;
  local_78 = 0x8000000000;
  local_60 = 0;
  local_58 = 0x8000000000;
  local_50 = 0;
  uStack_48 = 0;
  local_a8 = *(undefined8 *)(param_1 + 0x278);
  local_a0 = *(undefined4 *)(param_1 + 0x208);
  local_9c = *(undefined4 *)(param_1 + 0x238);
  local_98 = *(undefined8 *)(param_1 + 0xbc);
  local_b0 = param_1;
  FUN_1468216da(param_1);
  FUN_1468216da(*(undefined8 *)(param_1 + 0xb0));
  uVar1 = FUN_1470188da(&local_b0);
  if ((char)uVar1 == '\0') {
    local_e8 = 0;
    uStack_e0 = 0;
    FUN_140009b9a(local_f8,param_1 + 0xa0);
    local_d0[0] = 4;
    FUN_14023423e(&local_c0,local_f8);
    FUN_140056680(local_108,L"FileName");
    FUN_140233eec(&local_e8,local_108,local_d0);
    if (local_108[0] != 0) {
      FUN_1400020a8();
    }
    if (local_c0 != (longlong *)0x0) {
      (**(code **)(*local_c0 + 0x10))();
      local_c0 = (longlong *)0x0;
      local_b8 = 0;
    }
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
    FUN_14010f8af(local_e8,uStack_e0 & 0xffffffff);
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (&local_90 != param_2) {
      if (local_80 == 0) {
        *param_2 = local_90;
        param_2[1] = uStack_8c;
        param_2[2] = uStack_88;
        param_2[3] = uStack_84;
      }
      if (*(longlong *)(param_2 + 4) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 4) = local_80;
      local_80 = 0;
      param_2[6] = (undefined4)local_78;
      param_2[7] = local_78._4_4_;
      local_78 = 0;
    }
    if (&local_70 != param_3) {
      if (local_60 == 0) {
        *param_3 = local_70;
        param_3[1] = uStack_6c;
        param_3[2] = uStack_68;
        param_3[3] = uStack_64;
      }
      if (*(longlong *)(param_3 + 4) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_3 + 4) = local_60;
      local_60 = 0;
      param_3[6] = (undefined4)local_58;
      param_3[7] = local_58._4_4_;
      local_58 = 0;
    }
    if (&local_50 != param_4) {
      if (*param_4 != 0) {
        FUN_1400020a8();
      }
      *param_4 = local_50;
      local_50 = 0;
      *(undefined4 *)(param_4 + 1) = (undefined4)uStack_48;
      *(undefined4 *)((longlong)param_4 + 0xc) = uStack_48._4_4_;
      uStack_48 = 0;
    }
  }
  FUN_147018af4(&local_b0);
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ae9676 FUN_142ae9676 body=356 status=ok
// SIG undefined FUN_142ae9676(void)

ulonglong FUN_142ae9676(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  undefined1 auStack_208 [32];
  longlong local_1e8 [2];
  longlong *local_1d8 [2];
  longlong local_1c8;
  ulonglong uStack_1c0;
  undefined **local_1b0;
  longlong local_1a8;
  undefined ***local_1a0;
  undefined ****local_198;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_208;
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if ((0x1fd < *(int *)(param_1 + 0x40)) && (0 < *(int *)(param_1 + 0x134))) {
    cVar1 = FUN_1470180e0(param_1);
    if (cVar1 != '\0') {
      local_198 = &local_1a0;
      local_1b0 = &PTR_FUN_149e37810;
      local_1a0 = &local_1b0;
      local_1a8 = param_1;
      FUN_1468b5512(param_2);
      if ((*(byte *)(param_1 + 0x29) & 2) == 0) goto LAB_142ae96b0;
    }
    local_1c8 = 0;
    uStack_1c0 = 0;
    FUN_140009b9a(local_1d8,param_1 + 0xa0);
    local_1b0 = (undefined **)CONCAT44(local_1b0._4_4_,4);
    FUN_14023423e(&local_1a0,local_1d8);
    FUN_140056680(local_1e8,L"FileName");
    FUN_140233eec(&local_1c8,local_1e8,&local_1b0);
    if (local_1e8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_1a0 != (undefined ***)0x0) {
      (*(code *)(*local_1a0)[2])();
      local_1a0 = (undefined ***)0x0;
      local_198 = (undefined ****)((ulonglong)local_198 & 0xffffffff00000000);
    }
    if (local_1d8[0] != (longlong *)0x0) {
      (**(code **)(*local_1d8[0] + 0x10))();
    }
    FUN_14010f8af(local_1c8,uStack_1c0 & 0xffffffff);
    if (local_1c8 != 0) {
      FUN_1400020a8();
    }
    uVar2 = 0;
  }
LAB_142ae96b0:
  if ((local_20 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 142ae97dc FUN_142ae97dc body=372 status=ok
// SIG undefined FUN_142ae97dc(void)

longlong * FUN_142ae97dc(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (((int)local_1c < 0) || ((int)param_1[0x3f] <= (int)local_1c)) {
    FUN_14572541c(param_1);
  }
  else if (*(longlong *)(param_1[0x3e] + (ulonglong)local_1c * 8) == 0) {
    puVar3 = (ulonglong *)param_1[1];
    if (puVar3[1] < *puVar3 + 4) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_20,4);
      }
      else {
        FUN_14572512c(param_1,&local_20);
      }
    }
    else {
      *puVar3 = *puVar3 + 4;
    }
    *param_2 = 0;
  }
  else {
    puVar3 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_20,4);
      }
      else {
        FUN_14572512c(param_1,&local_20);
      }
    }
    else {
      local_20 = *(undefined4 *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
    *param_2 = CONCAT44(local_20,*(undefined4 *)(param_1[0x3e] + (longlong)(int)local_1c * 8));
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142ae9952 FUN_142ae9952 body=228 status=ok
// SIG undefined FUN_142ae9952(void)

uint FUN_142ae9952(longlong param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(param_2 + 0x10,&local_30);
  FUN_1400021e4(param_1 + 0x10,&local_40);
  puVar5 = local_30;
  if (local_28 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  puVar3 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar3 = local_40;
  }
  lVar6 = 0;
  while( true ) {
    uVar1 = *(ushort *)((longlong)puVar3 + lVar6);
    uVar4 = (uint)uVar1;
    uVar2 = *(ushort *)((longlong)puVar5 + lVar6);
    uVar7 = (uint)uVar2;
    if (uVar1 != uVar2) {
      if ((uVar2 | uVar1) < 0x80) {
        uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
        uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_142ae99ce;
      }
      uVar4 = uVar4 - uVar7;
      goto LAB_142ae99f7;
    }
    if (uVar1 == 0) break;
LAB_142ae99ce:
    lVar6 = lVar6 + 2;
  }
  uVar4 = 0;
LAB_142ae99f7:
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8(local_40);
  }
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ae9a38 FUN_142ae9a38 body=92 status=ok
// SIG undefined FUN_142ae9a38(void)

undefined8 FUN_142ae9a38(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  
  if ((*(int *)(param_1[1] + 8) != *(int *)(param_1[1] + 0x34)) &&
     (cVar2 = FUN_14700dbe6(param_2), cVar2 == '\0')) {
    return 1;
  }
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14171b750(param_1,iVar1);
  }
  FUN_1400e7d28((longlong)iVar1 * 0x70 + *param_1,param_2);
  return 1;
}



// FUNCTION 142ae9a94 FUN_142ae9a94 body=1282 status=ok
// SIG undefined FUN_142ae9a94(void)

void FUN_142ae9a94(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  uint *puVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_2f8 [32];
  undefined4 *local_2d8;
  undefined1 *local_2d0;
  undefined1 *local_2c8;
  undefined4 local_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined1 local_2a0 [16];
  undefined4 local_290;
  undefined1 local_288 [16];
  uint *local_278;
  undefined4 local_270;
  uint *local_268;
  uint *puStack_260;
  ulonglong *local_258;
  char local_250;
  uint local_248 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  lVar3 = param_1[6];
  if ((char)param_1[4] == '\x01') {
    FUN_1468581d0(&DAT_14c927a10,&local_268,(int)param_2[6]);
    if ((longlong)(int)puStack_260 != 0) {
      plVar4 = (longlong *)param_1[2];
      puVar7 = local_268;
      do {
        if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
          plVar11 = (longlong *)plVar4[8];
          if ((longlong *)plVar4[8] == (longlong *)0x0) {
            plVar11 = plVar4 + 7;
          }
          iVar9 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[9] - 1U & *puVar7) * 4);
          if (iVar9 != -1) {
            do {
              if (*(uint *)(*plVar4 + (longlong)iVar9 * 0xc) == *puVar7) {
                if (puVar7 == (uint *)0x0) goto LAB_142ae9f57;
                goto LAB_142ae9acd;
              }
              iVar9 = *(int *)(*plVar4 + (longlong)iVar9 * 0xc + 4);
            } while (iVar9 != -1);
          }
        }
        puVar7 = puVar7 + 1;
      } while (puVar7 != local_268 + (int)puStack_260);
    }
    goto LAB_142ae9f57;
  }
LAB_142ae9acd:
  if (*(char *)((longlong)param_1 + 0x21) == '\x01') {
    plVar4 = (longlong *)*param_1;
    if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
      lVar14 = *param_2;
      uVar17 = (uint)((ulonglong)lVar14 >> 0x10);
      uVar13 = (uint)lVar14 & 0xffff;
      plVar11 = plVar4 + 7;
      if ((longlong *)plVar4[8] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar4[8];
      }
      iVar9 = *(int *)((longlong)plVar11 +
                      (ulonglong)
                      ((int)plVar4[9] - 1U &
                      (int)((ulonglong)lVar14 >> 0x20) + ((uint)lVar14 << 0x10 | uVar13) +
                      (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar13 >> 4)) * 4);
      if (iVar9 != -1) {
        do {
          if (*(longlong *)(*plVar4 + (longlong)iVar9 * 0x10) == lVar14) goto LAB_142ae9b5e;
          iVar9 = *(int *)((longlong)iVar9 * 0x10 + *plVar4 + 8);
        } while (iVar9 != -1);
      }
    }
    goto LAB_142ae9f57;
  }
LAB_142ae9b5e:
  if ((*(char *)((longlong)param_1 + 0x22) == '\x01') &&
     (plVar4 = (longlong *)param_1[1], (int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34))) {
    lVar14 = *param_2;
    uVar17 = (uint)((ulonglong)lVar14 >> 0x10);
    uVar13 = (uint)lVar14 & 0xffff;
    plVar11 = plVar4 + 7;
    if ((longlong *)plVar4[8] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[8];
    }
    iVar9 = *(int *)((longlong)plVar11 +
                    (ulonglong)
                    ((int)plVar4[9] - 1U &
                    (int)((ulonglong)lVar14 >> 0x20) + ((uint)lVar14 << 0x10 | uVar13) +
                    (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar13 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        if (*(longlong *)(*plVar4 + (longlong)iVar9 * 0x10) == lVar14) goto LAB_142ae9f57;
        iVar9 = *(int *)((longlong)iVar9 * 0x10 + *plVar4 + 8);
      } while (iVar9 != -1);
    }
  }
  if (*(char *)(param_1[3] + 6) == '\x01') {
    if ((*(byte *)(param_2 + 8) & 1) == 0) {
      if (param_2[8] != 0) {
        uVar17 = *(uint *)(param_2[8] + 8);
        goto LAB_142ae9cb7;
      }
    }
    else {
      uVar17 = (uint)*(ushort *)((longlong)param_2 + 0x42);
LAB_142ae9cb7:
      if (uVar17 != 0) goto LAB_142ae9d4e;
    }
    local_268 = local_248;
    local_250 = '\0';
    local_258 = &local_48;
    puStack_260 = local_268;
    FUN_14005eb5c(param_2,&local_268);
    local_278 = local_268;
    local_270 = (undefined4)((ulonglong)((longlong)puStack_260 - (longlong)local_268) >> 1);
    cVar6 = FUN_14686edb4();
    if (local_250 == '\x01') {
      FUN_1400020a8(local_268);
    }
    if (cVar6 == '\0') {
      if (*(char *)(param_1[3] + 7) == '\0') {
        FUN_144a13f80(param_1[5],&local_268,param_2,0);
      }
      goto LAB_142ae9f57;
    }
  }
LAB_142ae9d4e:
  local_268 = (uint *)0x0;
  puStack_260 = (uint *)0x0;
  local_258 = (ulonglong *)((ulonglong)local_258 & 0xffffffff00000000);
  lVar14 = param_1[3];
  if (*(int *)(lVar14 + 0x18) != *(int *)(lVar14 + 0x44)) {
    lVar5 = param_2[4];
    lVar8 = param_2[5];
    uVar17 = (uint)((ulonglong)lVar5 >> 0x10);
    uVar16 = (uint)lVar5 & 0xffff;
    uVar13 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar10 = (uint)lVar8 & 0xffff;
    uVar17 = (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar16) +
             (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar16 >> 4);
    lVar12 = lVar14 + 0x48;
    if (*(longlong *)(lVar14 + 0x50) != 0) {
      lVar12 = *(longlong *)(lVar14 + 0x50);
    }
    iVar9 = *(int *)(lVar12 + (ulonglong)
                              (*(int *)(lVar14 + 0x58) - 1U &
                              ((uVar17 >> 2) +
                               ((uint)lVar8 << 0x10 | uVar10) + (int)((ulonglong)lVar8 >> 0x20) +
                               (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar10 >> 4) + uVar17 * 0x40 +
                               0x9e3779b9 ^ uVar17)) * 4);
    if (iVar9 != -1) {
      lVar14 = *(longlong *)(lVar14 + 0x10);
      do {
        lVar15 = (longlong)iVar9 * 0x68;
        lVar12 = lVar14 + lVar15;
        if ((*(longlong *)(lVar14 + lVar15) == lVar5) &&
           (*(longlong *)(lVar14 + 8 + lVar15) == lVar8)) goto LAB_142ae9e4f;
        iVar9 = *(int *)(lVar12 + 0x60);
      } while (iVar9 != -1);
    }
  }
  lVar12 = 0;
LAB_142ae9e4f:
  lVar14 = lVar12 + 0x10;
  if (lVar12 == 0) {
    lVar14 = 0;
  }
  FUN_140af61de(param_2 + 8,&local_268,lVar14);
  lVar8 = FUN_14001cc68(0x70,0x10);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x3c);
  FUN_1468581d0(&DAT_14c927a10,local_288,(int)param_2[6]);
  FUN_1458f81e6(local_2a0,&local_268);
  local_290 = 0;
  local_2b8 = (undefined4)param_2[4];
  uStack_2b4 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_2b0 = (undefined4)param_2[5];
  uStack_2ac = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_2d8 = &local_2b8;
  local_2d0 = local_2a0;
  local_2c8 = local_288;
  local_2c0 = uVar2;
  FUN_146857b14(lVar8,*param_2,param_2[1],param_2[2]);
  lVar14 = param_2[9];
  lVar5 = param_2[10];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(lVar8 + 0x50);
  *(longlong *)(lVar8 + 0x48) = lVar14;
  *(longlong *)(lVar8 + 0x50) = lVar5;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar4 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  FUN_140af5ea4(lVar3,lVar8);
  FUN_140958ed1(local_268,(ulonglong)puStack_260 & 0xffffffff);
  if (local_268 != (uint *)0x0) {
    FUN_1400020a8();
  }
LAB_142ae9f57:
  if ((local_48 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ae9f98 FUN_142ae9f98 body=292 status=ok
// SIG undefined FUN_142ae9f98(void)

void FUN_142ae9f98(longlong param_1,ulonglong *param_2,byte *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  byte bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  int iVar10;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    uVar4 = *param_2;
    uVar8 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    plVar9 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar9 = (longlong *)plVar3[8];
    }
    iVar10 = *(int *)((longlong)plVar9 +
                     (ulonglong)((int)plVar3[9] - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
    if (iVar10 != -1) {
      uVar1 = *param_4;
      bVar2 = *param_3;
      do {
        if (*(ulonglong *)(*plVar3 + (longlong)iVar10 * 0x10) == uVar4) {
          lVar7 = FUN_14700ef9c(*(undefined8 *)(param_1 + 0x18));
          lVar5 = *(longlong *)(param_1 + 8);
          if ((bVar2 & 1) != 0) {
            *(byte *)(lVar5 + 0xc0) = *(byte *)(lVar5 + 0xc0) & 0xfe;
          }
          if ((bVar2 & 4) != 0) {
            *(byte *)(lVar5 + 0xc0) = *(byte *)(lVar5 + 0xc0) & 0xfd;
          }
          if ((bVar2 & 2) != 0) {
            *(byte *)(lVar5 + 0xc0) = *(byte *)(lVar5 + 0xc0) & 0xfb;
          }
          FUN_147011738(*(undefined8 *)(param_1 + 8),lVar7,
                        CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar2) & 0xffffffff,
                        CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
          *(byte *)(lVar7 + 0xc0) = *(byte *)(lVar7 + 0xc0) & 0xf7;
          uVar6 = *(undefined8 *)(param_1 + 8);
          iVar10 = *(int *)(lVar7 + 0x58);
          *(uint *)(lVar7 + 0x58) = iVar10 + 1U;
          if (*(uint *)(lVar7 + 0x5c) < iVar10 + 1U) {
            FUN_14700a186((longlong *)(lVar7 + 0x50),iVar10);
          }
          *(undefined8 *)(*(longlong *)(lVar7 + 0x50) + (longlong)iVar10 * 8) = uVar6;
          return;
        }
        iVar10 = *(int *)((longlong)iVar10 * 0x10 + *plVar3 + 8);
      } while (iVar10 != -1);
    }
  }
  return;
}



// FUNCTION 142aea0c6 FUN_142aea0c6 body=29 status=ok
// SIG undefined FUN_142aea0c6(void)

void FUN_142aea0c6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142aea0e4 FUN_142aea0e4 body=29 status=ok
// SIG undefined FUN_142aea0e4(void)

undefined8 FUN_142aea0e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142aea102 FUN_142aea102 body=261 status=ok
// SIG undefined FUN_142aea102(void)

void FUN_142aea102(undefined8 *param_1,undefined8 *param_2,byte *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  
  uVar1 = *param_4;
  bVar2 = *param_3;
  uVar3 = *param_2;
  uVar4 = *param_1;
  plVar5 = (longlong *)param_1[1];
  uVar8 = FUN_147008ecb(uVar3);
  iVar9 = FUN_147008e62(plVar5,uVar8,uVar3);
  if ((iVar9 == -1) || (((longlong)iVar9 * 0x30 + *plVar5 + 0x20U & 0xffffffffffffffdf) == 0)) {
    uVar6 = param_1[2];
    uVar8 = FUN_147008ecb(uVar3);
    iVar9 = FUN_14701ba96(uVar6,uVar8,uVar3);
    if (iVar9 == -1) {
      return;
    }
  }
  lVar10 = FUN_14700ef9c(uVar4,uVar3);
  lVar7 = param_1[3];
  if ((bVar2 & 1) != 0) {
    *(byte *)(lVar7 + 0xc0) = *(byte *)(lVar7 + 0xc0) & 0xfe;
  }
  if ((bVar2 & 4) != 0) {
    *(byte *)(lVar7 + 0xc0) = *(byte *)(lVar7 + 0xc0) & 0xfd;
  }
  if ((bVar2 & 2) != 0) {
    *(byte *)(lVar7 + 0xc0) = *(byte *)(lVar7 + 0xc0) & 0xfb;
  }
  FUN_147011738(param_1[3],lVar10,CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar2) & 0xffffffff,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  *(byte *)(lVar10 + 0xc0) = *(byte *)(lVar10 + 0xc0) & 0xf7;
  uVar3 = param_1[3];
  iVar9 = *(int *)(lVar10 + 0x58);
  *(uint *)(lVar10 + 0x58) = iVar9 + 1U;
  if (*(uint *)(lVar10 + 0x5c) < iVar9 + 1U) {
    FUN_14700a186((longlong *)(lVar10 + 0x50),iVar9);
  }
  *(undefined8 *)(*(longlong *)(lVar10 + 0x50) + (longlong)iVar9 * 8) = uVar3;
  return;
}



// FUNCTION 142aea212 FUN_142aea212 body=29 status=ok
// SIG undefined FUN_142aea212(void)

void FUN_142aea212(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142aea230 FUN_142aea230 body=29 status=ok
// SIG undefined FUN_142aea230(void)

undefined8 FUN_142aea230(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142aea2e0 FUN_142aea2e0 body=12 status=ok
// SIG undefined FUN_142aea2e0(void)

void FUN_142aea2e0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142aea2e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142aea2ec FUN_142aea2ec body=29 status=ok
// SIG undefined FUN_142aea2ec(void)

undefined8 FUN_142aea2ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142aea320 FUN_142aea320 body=63 status=ok
// SIG undefined FUN_142aea320(void)

undefined8 FUN_142aea320(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14171b750(param_1,iVar1);
  }
  FUN_1400e7d28((longlong)iVar1 * 0x70 + *param_1,param_2);
  return 1;
}



// FUNCTION 142aea36e FUN_142aea36e body=150 status=ok
// SIG undefined FUN_142aea36e(void)

void FUN_142aea36e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  
  plVar1 = (longlong *)*param_1;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    plVar5 = plVar1 + 7;
    if ((longlong *)plVar1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)plVar1[9] - 1U &
                    (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        if (*(longlong *)(*plVar1 + (longlong)iVar4 * 0x10) == lVar2) {
          return;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x10 + *plVar1 + 8);
      } while (iVar4 != -1);
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)param_1[1];
                    /* WARNING: Could not recover jumptable at 0x000142aea3fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(((undefined8 *)param_1[1])[1],param_2,UNRECOVERED_JUMPTABLE);
  return;
}



// FUNCTION 142aea404 FUN_142aea404 body=194 status=ok
// SIG undefined FUN_142aea404(void)

void FUN_142aea404(longlong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1 = (longlong *)*param_1;
  FUN_1468fc08c(&local_68,*param_2,param_2[2]);
  lVar4 = local_58;
  local_48 = local_68;
  uStack_44 = uStack_64;
  uStack_40 = uStack_60;
  uStack_3c = uStack_5c;
  local_58 = 0;
  uVar5 = (undefined4)local_50;
  uVar6 = local_50._4_4_;
  local_50 = 0;
  iVar2 = (int)param_1[1];
  lVar7 = (longlong)iVar2;
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_14701daa2(param_1,iVar2);
  }
  lVar3 = *param_1;
  *(undefined8 **)(lVar3 + lVar7 * 0x28) = param_2;
  puVar1 = (undefined4 *)(lVar3 + 8 + lVar7 * 0x28);
  *puVar1 = local_48;
  puVar1[1] = uStack_44;
  puVar1[2] = uStack_40;
  puVar1[3] = uStack_3c;
  *(longlong *)(lVar3 + 0x18 + lVar7 * 0x28) = lVar4;
  *(undefined4 *)(lVar3 + 0x20 + lVar7 * 0x28) = uVar5;
  *(undefined4 *)(lVar3 + 0x24 + lVar7 * 0x28) = uVar6;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aea4c8 FUN_142aea4c8 body=220 status=ok
// SIG undefined FUN_142aea4c8(void)

undefined4 FUN_142aea4c8(undefined8 *param_1,ulonglong *param_2,char *param_3)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  
  uVar3 = *param_2;
  if (*param_3 == '\0') {
    uVar3 = FUN_147012bc2(*param_1,uVar3,*param_1,param_1[1]);
  }
  if ((uVar3 != 0) &&
     (plVar2 = (longlong *)param_1[2], (int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34))) {
    uVar4 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = plVar2 + 7;
    if ((longlong *)plVar2[8] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar2[8];
    }
    iVar6 = *(int *)((longlong)plVar5 +
                    (ulonglong)((int)plVar2[9] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (iVar6 != -1) {
      do {
        puVar1 = (ulonglong *)(*plVar2 + (longlong)iVar6 * 0x18);
        if (*puVar1 == uVar3) {
          if (puVar1 + 1 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) {
            return 0xffffffff;
          }
          return (int)puVar1[1];
        }
        iVar6 = (int)puVar1[2];
      } while (iVar6 != -1);
    }
  }
  return 0xffffffff;
}



// FUNCTION 142aea5ae FUN_142aea5ae body=12 status=ok
// SIG undefined FUN_142aea5ae(void)

void FUN_142aea5ae(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142aea5b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142aea5ba FUN_142aea5ba body=29 status=ok
// SIG undefined FUN_142aea5ba(void)

undefined8 FUN_142aea5ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142aea600 FUN_142aea600 body=12 status=ok
// SIG undefined FUN_142aea600(void)

void FUN_142aea600(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142aea609. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142aea60c FUN_142aea60c body=29 status=ok
// SIG undefined FUN_142aea60c(void)

undefined8 FUN_142aea60c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142aea62a FUN_142aea62a body=155 status=ok
// SIG undefined FUN_142aea62a(void)

void FUN_142aea62a(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(longlong *)*param_1 = *(longlong *)*param_1 + 0x70;
  FUN_14685b510(param_1[1]);
  if (*(longlong *)(param_2 + 0x48) != 0) {
    *(longlong *)param_1[4] = *(longlong *)param_1[4] + 0x10;
    *(longlong *)param_1[4] =
         *(longlong *)param_1[4] + (longlong)*(int *)(*(longlong *)(param_2 + 0x48) + 0xc) * 0x18;
    *(longlong *)param_1[2] =
         *(longlong *)param_1[2] + (longlong)*(int *)(*(longlong *)(param_2 + 0x48) + 8);
    lVar2 = (longlong)(int)(*(longlong **)(param_2 + 0x48))[1];
    if (lVar2 != 0) {
      lVar1 = **(longlong **)(param_2 + 0x48);
      lVar3 = 0;
      do {
        *(longlong *)param_1[4] =
             *(longlong *)param_1[4] + (longlong)*(int *)(lVar1 + 0x14 + lVar3) * 0x10;
        *(longlong *)param_1[5] = *(longlong *)param_1[5] + (longlong)*(int *)(lVar1 + 0x10 + lVar3)
        ;
        lVar3 = lVar3 + 0x18;
      } while (lVar2 * 0x18 != lVar3);
    }
  }
  return;
}



// FUNCTION 142aea6c6 FUN_142aea6c6 body=352 status=ok
// SIG undefined FUN_142aea6c6(void)

undefined8 FUN_142aea6c6(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined2 local_98 [8];
  longlong local_88;
  undefined8 local_80;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(longlong *)(*param_2 + 0x20) == DAT_14c948098) &&
     (*(longlong *)(*param_2 + 0x28) == DAT_14c9480c0)) {
    lVar1 = param_1[3];
    local_a0 = 0;
    uVar4 = *(undefined8 *)*param_1;
    local_88 = 0;
    local_80 = 0x100000000;
    local_98[0] = 0;
    lVar2 = param_1[1];
    lVar3 = param_1[2];
    local_78[0] = (code *)0x0;
    local_68 = (longlong *)FUN_14001cc68(0x28,8);
    *local_68 = (longlong)&PTR_LAB_149fcb990;
    local_68[1] = lVar2;
    local_68[2] = (longlong)&local_a0;
    local_68[3] = lVar3;
    local_68[4] = lVar1;
    if (local_68 + 1 != (longlong *)0x0) {
      local_78[0] = FUN_142aea828;
    }
    FUN_14700f04e(uVar4,local_78,1,local_98);
    if (local_78[0] != (code *)0x0) {
      plVar5 = local_68;
      if (local_68 == (longlong *)0x0) {
        plVar5 = local_58;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_a0 != 0) {
      *(longlong *)*param_1 = local_a0;
      uVar4 = 0;
      goto LAB_142aea713;
    }
  }
  else {
    *(undefined8 *)param_1[2] = *(undefined8 *)*param_1;
  }
  uVar4 = CONCAT71((int7)((ulonglong)param_1[2] >> 8),*(longlong *)param_1[2] == 0);
LAB_142aea713:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aea828 FUN_142aea828 body=472 status=ok
// SIG undefined FUN_142aea828(void)

void FUN_142aea828(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  char *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_60 [16];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*param_5 == '\0') {
    param_2 = (longlong *)*param_2;
    lVar1 = param_1[3];
    local_78 = 0;
    uStack_70 = 0;
    FUN_1403f0b60(local_60,*param_2,param_2[2]);
    uVar2 = *param_1;
    FUN_1400e7e08(local_88,local_60);
    uVar7 = (uint)local_88._8_8_ & 0xffff;
    uVar6 = (uint)local_88._0_8_ & 0xffff;
    uVar6 = ((uint)local_88._0_8_ << 0x10 | uVar6) + SUB84(local_88._0_8_,4) +
            (SUB84(local_88._0_8_,2) << 0x13 | SUB84(local_88._0_8_,2) & 0xffff) + (uVar6 >> 4);
    iVar3 = FUN_1447fff98(uVar2,(uVar6 >> 2) +
                                ((uint)local_88._8_8_ << 0x10 | uVar7) + SUB84(local_88._8_8_,4) +
                                (SUB84(local_88._8_8_,2) << 0x13 | SUB84(local_88._8_8_,2) & 0xffff)
                                + (uVar7 >> 4) + uVar6 * 0x40 + 0x9e3779b9 ^ uVar6,local_88);
    lVar4 = 0x10;
    if (iVar3 == -1) {
      if (*(int *)(lVar1 + 0x58) != *(int *)(lVar1 + 0x84)) {
        lVar4 = *param_2;
        uVar6 = (uint)((ulonglong)lVar4 >> 0x10);
        uVar7 = (uint)lVar4 & 0xffff;
        lVar5 = lVar1 + 0x88;
        if (*(longlong *)(lVar1 + 0x90) != 0) {
          lVar5 = *(longlong *)(lVar1 + 0x90);
        }
        iVar3 = *(int *)(lVar5 + (ulonglong)
                                 (*(int *)(lVar1 + 0x98) - 1U &
                                 (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar7) +
                                 (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar7 >> 4)) * 4);
        if (iVar3 != -1) {
          do {
            if (*(longlong *)(*(longlong *)(lVar1 + 0x50) + (longlong)iVar3 * 0x28) == lVar4) {
              lVar4 = 8;
              goto LAB_142aea92e;
            }
            iVar3 = *(int *)(*(longlong *)(lVar1 + 0x50) + (longlong)iVar3 * 0x28 + 0x20);
          } while (iVar3 != -1);
        }
      }
    }
    else {
LAB_142aea92e:
      **(longlong **)((longlong)param_1 + lVar4) = (longlong)param_2;
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aeaa0c FUN_142aeaa0c body=29 status=ok
// SIG undefined FUN_142aeaa0c(void)

void FUN_142aeaa0c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142aeaa2a FUN_142aeaa2a body=29 status=ok
// SIG undefined FUN_142aeaa2a(void)

undefined8 FUN_142aeaa2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142aeaa48 FUN_142aeaa48 body=139 status=ok
// SIG undefined FUN_142aeaa48(void)

void FUN_142aeaa48(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1 = (longlong *)*param_1;
  lVar1 = *param_1;
  FUN_145b089da(lVar1,*(undefined4 *)(lVar1 + 0x260));
  plVar2 = (longlong *)param_1[1];
  lVar3 = (longlong)(int)plVar2[1];
  if (lVar3 != 0) {
    lVar4 = *plVar2;
    lVar3 = lVar3 * 0x70;
    do {
      local_38 = lVar4;
      FUN_1402ba776(lVar1,local_3c,&local_38);
      lVar4 = lVar4 + 0x70;
      lVar3 = lVar3 + -0x70;
    } while (lVar3 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aeaade FUN_142aeaade body=12 status=ok
// SIG undefined FUN_142aeaade(void)

void FUN_142aeaade(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142aeaae7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142aeaaea FUN_142aeaaea body=29 status=ok
// SIG undefined FUN_142aeaaea(void)

undefined8 FUN_142aeaaea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142aeab2e FUN_142aeab2e body=181 status=ok
// SIG undefined FUN_142aeab2e(void)

void FUN_142aeab2e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  
  param_1 = (longlong *)*param_1;
  lVar2 = *param_1;
  FUN_1459b85fe(lVar2 + 0x50,*(undefined4 *)(param_1[1] + 8));
  lVar5 = (longlong)*(int *)((undefined8 *)param_1[1] + 1);
  if (lVar5 != 0) {
    puVar7 = *(undefined8 **)param_1[1];
    lVar5 = lVar5 * 0x70;
    do {
      uVar3 = *puVar7;
      uVar4 = (uint)((ulonglong)uVar3 >> 0x10);
      uVar8 = (uint)uVar3 & 0xffff;
      lVar6 = FUN_141734d66(lVar2 + 0x50,
                            ((uint)uVar3 << 0x10 | uVar8) + (int)((ulonglong)uVar3 >> 0x20) +
                            (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4),puVar7);
      iVar1 = *(int *)(lVar6 + 0x10);
      *(uint *)(lVar6 + 0x10) = iVar1 + 1U;
      if (*(uint *)(lVar6 + 0x14) < iVar1 + 1U) {
        FUN_140899908(lVar6,iVar1);
      }
      if (*(longlong *)(lVar6 + 8) != 0) {
        lVar6 = *(longlong *)(lVar6 + 8);
      }
      *(undefined8 **)(lVar6 + (longlong)iVar1 * 8) = puVar7;
      puVar7 = puVar7 + 0xe;
      lVar5 = lVar5 + -0x70;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 142aeabee FUN_142aeabee body=12 status=ok
// SIG undefined FUN_142aeabee(void)

void FUN_142aeabee(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142aeabf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142aeabfa FUN_142aeabfa body=29 status=ok
// SIG undefined FUN_142aeabfa(void)

undefined8 FUN_142aeabfa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142aeac18 FUN_142aeac18 body=112 status=ok
// SIG undefined FUN_142aeac18(void)

undefined8 FUN_142aeac18(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  code *local_18;
  undefined8 **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  local_20 = &local_30;
  local_28 = param_2[1];
  local_10 = &local_20;
  local_18 = FUN_142aeac8a;
  FUN_147013962(param_1[1],*(undefined8 *)*param_1);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aeac8a FUN_142aeac8a body=67 status=ok
// SIG undefined FUN_142aeac8a(void)

void FUN_142aeac8a(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aeacce FUN_142aeacce body=65 status=ok
// SIG undefined FUN_142aeacce(void)

void FUN_142aeacce(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  char *param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*param_5 == '\0') {
    uVar2 = *param_2;
    param_1 = (longlong *)*param_1;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_14700a186(param_1,iVar1);
    }
    *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  }
  return;
}



// FUNCTION 142aead1a FUN_142aead1a body=12 status=ok
// SIG undefined FUN_142aead1a(void)

void FUN_142aead1a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142aead23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142aead26 FUN_142aead26 body=29 status=ok
// SIG undefined FUN_142aead26(void)

undefined8 FUN_142aead26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142aead44 FUN_142aead44 body=81 status=ok
// SIG undefined FUN_142aead44(void)

void FUN_142aead44(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  char *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*param_5 == '\0') {
    puVar3 = (undefined8 *)*param_2;
    param_1 = (longlong *)*param_1;
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_14701d986(param_1,iVar2);
    }
    lVar4 = *param_1;
    uVar5 = *puVar3;
    uVar6 = puVar3[1];
    uVar7 = puVar3[3];
    puVar1 = (undefined8 *)(lVar4 + 0x10 + (longlong)iVar2 * 0x20);
    *puVar1 = puVar3[2];
    puVar1[1] = uVar7;
    puVar3 = (undefined8 *)(lVar4 + (longlong)iVar2 * 0x20);
    *puVar3 = uVar5;
    puVar3[1] = uVar6;
  }
  return;
}



// FUNCTION 142aeada0 FUN_142aeada0 body=12 status=ok
// SIG undefined FUN_142aeada0(void)

void FUN_142aeada0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142aeada9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142aeadac FUN_142aeadac body=29 status=ok
// SIG undefined FUN_142aeadac(void)

undefined8 FUN_142aeadac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142aeadca FUN_142aeadca body=145 status=ok
// SIG undefined FUN_142aeadca(void)

void FUN_142aeadca(longlong *param_1,longlong *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_4;
  uVar2 = *param_3;
  puVar4 = (undefined4 *)*param_2;
  param_1 = (longlong *)*param_1;
  local_48 = *puVar4;
  uStack_44 = puVar4[1];
  uStack_40 = puVar4[2];
  uStack_3c = puVar4[3];
  local_38 = puVar4[4];
  uStack_34 = puVar4[5];
  uStack_30 = puVar4[6];
  uStack_2c = puVar4[7];
  iVar3 = (int)param_1[1];
  lVar6 = (longlong)iVar3;
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_14701fc64(param_1,iVar3);
  }
  lVar5 = *param_1;
  puVar4 = (undefined4 *)(lVar5 + 0x10 + lVar6 * 0x24);
  *puVar4 = local_38;
  puVar4[1] = uStack_34;
  puVar4[2] = uStack_30;
  puVar4[3] = uStack_2c;
  puVar4 = (undefined4 *)(lVar5 + lVar6 * 0x24);
  *puVar4 = local_48;
  puVar4[1] = uStack_44;
  puVar4[2] = uStack_40;
  puVar4[3] = uStack_3c;
  *(undefined1 *)(lVar5 + 0x20 + lVar6 * 0x24) = uVar2;
  *(undefined1 *)(lVar5 + 0x21 + lVar6 * 0x24) = uVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aeae66 FUN_142aeae66 body=12 status=ok
// SIG undefined FUN_142aeae66(void)

void FUN_142aeae66(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142aeae6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142aeae72 FUN_142aeae72 body=29 status=ok
// SIG undefined FUN_142aeae72(void)

undefined8 FUN_142aeae72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142aeaea2 FUN_142aeaea2 body=12 status=ok
// SIG undefined FUN_142aeaea2(void)

void FUN_142aeaea2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142aeaeab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142aeaeae FUN_142aeaeae body=29 status=ok
// SIG undefined FUN_142aeaeae(void)

undefined8 FUN_142aeaeae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142aeaecc FUN_142aeaecc body=146 status=ok
// SIG undefined FUN_142aeaecc(void)

void FUN_142aeaecc(longlong *param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_4;
  uVar2 = *param_3;
  plVar4 = (longlong *)*param_1;
  puVar5 = (undefined4 *)param_1[1];
  local_48 = *puVar5;
  uStack_44 = puVar5[1];
  uStack_40 = puVar5[2];
  uStack_3c = puVar5[3];
  local_38 = puVar5[4];
  uStack_34 = puVar5[5];
  uStack_30 = puVar5[6];
  uStack_2c = puVar5[7];
  iVar3 = (int)plVar4[1];
  lVar7 = (longlong)iVar3;
  *(uint *)(plVar4 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)plVar4 + 0xc) < iVar3 + 1U) {
    FUN_14701fc64(plVar4,iVar3);
  }
  lVar6 = *plVar4;
  puVar5 = (undefined4 *)(lVar6 + 0x10 + lVar7 * 0x24);
  *puVar5 = local_38;
  puVar5[1] = uStack_34;
  puVar5[2] = uStack_30;
  puVar5[3] = uStack_2c;
  puVar5 = (undefined4 *)(lVar6 + lVar7 * 0x24);
  *puVar5 = local_48;
  puVar5[1] = uStack_44;
  puVar5[2] = uStack_40;
  puVar5[3] = uStack_3c;
  *(undefined1 *)(lVar6 + 0x20 + lVar7 * 0x24) = uVar2;
  *(undefined1 *)(lVar6 + 0x21 + lVar7 * 0x24) = uVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aeaf6a FUN_142aeaf6a body=12 status=ok
// SIG undefined FUN_142aeaf6a(void)

void FUN_142aeaf6a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142aeaf73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142aeaf76 FUN_142aeaf76 body=29 status=ok
// SIG undefined FUN_142aeaf76(void)

undefined8 FUN_142aeaf76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142aeaf94 FUN_142aeaf94 body=182 status=ok
// SIG undefined FUN_142aeaf94(void)

void FUN_142aeaf94(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  iVar3 = *(int *)(param_1 + 0x18) - param_3;
  if ((0 < param_3) && (param_2 < iVar3)) {
    iVar3 = -param_3;
    do {
      uVar1 = iVar3 + *(int *)(param_1 + 0x18);
      lVar7 = *(longlong *)(param_1 + 0x10);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar7 = param_1;
      }
      uVar4 = *(int *)(param_1 + 0x18) + iVar3 + 0x1f;
      if (-1 < (int)uVar1) {
        uVar4 = uVar1;
      }
      uVar8 = 1 << ((byte)param_2 & 0x1f);
      iVar5 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar5 = param_2;
      }
      lVar6 = (longlong)(iVar5 >> 5);
      if ((*(uint *)(lVar7 + (longlong)((int)uVar4 >> 5) * 4) >> (uVar1 & 0x1f) & 1) == 0) {
        uVar8 = ~uVar8 & *(uint *)(lVar7 + lVar6 * 4);
      }
      else {
        uVar8 = uVar8 | *(uint *)(lVar7 + lVar6 * 4);
      }
      *(uint *)(lVar7 + lVar6 * 4) = uVar8;
      param_2 = param_2 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0);
    iVar3 = *(int *)(param_1 + 0x18) - param_3;
  }
  iVar5 = iVar3 + 0x1f;
  if (-1 < iVar3) {
    iVar5 = iVar3;
  }
  *(int *)(param_1 + 0x18) = iVar3;
  if (iVar3 % 0x20 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar7 = param_1;
    }
    bVar2 = -(char)(iVar3 % 0x20);
    *(uint *)(lVar7 + (longlong)(iVar5 >> 5) * 4) =
         (uint)(*(int *)(lVar7 + (longlong)(iVar5 >> 5) * 4) << (bVar2 & 0x1f)) >> (bVar2 & 0x1f);
  }
  return;
}



// FUNCTION 142aeb0da FUN_142aeb0da body=12 status=ok
// SIG undefined FUN_142aeb0da(void)

void FUN_142aeb0da(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142aeb0e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142aeb0e6 FUN_142aeb0e6 body=29 status=ok
// SIG undefined FUN_142aeb0e6(void)

undefined8 FUN_142aeb0e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142aeb104 FUN_142aeb104 body=122 status=ok
// SIG undefined FUN_142aeb104(void)

undefined4 * FUN_142aeb104(longlong *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar4 = (undefined4 *)FUN_147020fb8(*param_1 + 0x58,param_3);
  if (puVar4 != (undefined4 *)0x0) {
    param_2[4] = puVar4[4];
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    *param_2 = *puVar4;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
  }
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1400b4012(param_2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aeb181 FUN_142aeb181 body=1579 status=ok
// SIG undefined FUN_142aeb181(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142aeb181(void)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_3c;
  char *local_38;
  int iStack_30;
  uint uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = "AssetRegistry";
  iStack_30 = 0xd;
  uStack_2c = uStack_2c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_38,1);
  DAT_14c99ded8 = (ulonglong)uVar2;
  local_38 = (char *)0x8000000149e5e52e;
  local_3c = 0xd;
  iStack_30 = FUN_14577453c();
  uStack_2c = CONCAT31(uStack_2c._1_3_,1);
  FUN_1462950e2(&local_38);
  local_38 = (char *)0x1ab14c2f91a14971;
  iStack_30 = 0x95aeda06;
  uStack_2c = 0x50e6530f;
  _DAT_14c99dee4 = 0x91a14971;
  uRam000000014c99dee8 = 0x1ab14c2f;
  uRam000000014c99deec = 0x95aeda06;
  uRam000000014c99def0 = 0x50e6530f;
  FUN_141005458(&local_38,0,L"GbxDependsNode",0);
  atexit((_func_5014 *)&LAB_142ae44cc);
  local_38 = "GameDataHandle";
  iStack_30 = 0xe;
  uStack_2c = uStack_2c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_38,1);
  _DAT_14c99def8 = (ulonglong)uVar2;
  local_38 = "GameplayTag";
  iStack_30 = 0xb;
  uStack_2c = uStack_2c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_38,1);
  _DAT_14c99df00 = (ulonglong)uVar2;
  local_38 = "Map";
  iStack_30 = 3;
  uStack_2c = uStack_2c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_38,1);
  DAT_14c99df08 = (ulonglong)uVar2;
  DAT_14c99df10 = (undefined4 *)0x0;
  DAT_14c99df18 = 1;
  FUN_1447bda9e(&DAT_14c99df10,1,0);
  *DAT_14c99df10 = 0;
  atexit((_func_5014 *)&LAB_142ae54ce);
  local_38 = (char *)0xf68b4791710e667a;
  iStack_30 = 0xbfcde086;
  uStack_2c = 0xee660622;
  _DAT_14c99df20 = 0x710e667a;
  uRam000000014c99df24 = 0xf68b4791;
  uRam000000014c99df28 = 0xbfcde086;
  uRam000000014c99df2c = 0xee660622;
  FUN_141005458(&local_38,1,L"NexusAssetRegistryState",0);
  atexit((_func_5014 *)&LAB_142ae54df);
  local_38 = (char *)0x0;
  iStack_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  iStack_30 = 2;
  *(undefined ***)local_38 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_38 + 0x10) = lVar3;
  *(undefined ***)local_38 = &PTR_FUN_149e062c0;
  *(code **)(local_38 + 0x18) = FUN_142ae5a38;
  local_48 = 0;
  FUN_14152bcb8(&DAT_14c99df30,L"gbx.Nexus.Refs.DumpDependencies",
                L"Print the contents of the NexusAssetRegistryState\'s dependency maps to the log",
                &local_38);
  if (iStack_30 == 0) {
LAB_142aeb3ff:
    if (local_38 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_38 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    iStack_30 = 0;
    goto LAB_142aeb3ff;
  }
  atexit(FUN_142ae5d03);
  local_38 = (char *)0x0;
  iStack_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  iStack_30 = 2;
  *(undefined ***)local_38 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_38 + 0x10) = lVar3;
  *(undefined ***)local_38 = &PTR_FUN_149e062c0;
  *(code **)(local_38 + 0x18) = FUN_142ae5ac8;
  local_48 = 0;
  FUN_14152bcb8(&DAT_14c99df40,L"gbx.Nexus.Refs.DumpReferencers",
                L"Print the contents of the NexusAssetRegistryState\'s referencers maps to the log",
                &local_38);
  if (iStack_30 == 0) {
LAB_142aeb4dd:
    if (local_38 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_38 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    iStack_30 = 0;
    goto LAB_142aeb4dd;
  }
  atexit(FUN_142ae5d48);
  local_38 = (char *)0x0;
  iStack_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  iStack_30 = 2;
  *(undefined ***)local_38 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_38 + 0x10) = lVar3;
  *(undefined ***)local_38 = &PTR_FUN_149e062c0;
  *(code **)(local_38 + 0x18) = FUN_142ae5b58;
  local_48 = 0;
  FUN_14152bcb8(&DAT_14c99df50,L"gbx.Nexus.Refs.DumpReentrancies",
                L"Print the contents of the NexusAssetRegistryState\'s reentrancy maps to the log",
                &local_38);
  if (iStack_30 == 0) {
LAB_142aeb5bb:
    if (local_38 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_38 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    iStack_30 = 0;
    goto LAB_142aeb5bb;
  }
  atexit(FUN_142ae5d8d);
  local_38 = (char *)0x0;
  iStack_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  iStack_30 = 2;
  *(undefined ***)local_38 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_38 + 0x10) = lVar3;
  *(undefined ***)local_38 = &PTR_FUN_149e062c0;
  *(code **)(local_38 + 0x18) = FUN_142ae5be8;
  local_48 = 0;
  FUN_14152bcb8(&DAT_14c99df60,L"gbx.Nexus.Refs.DumpMemUsage",
                L"Print the memory size of the NexusAssetRegistryState\'s maps to the log",&local_38
               );
  if (iStack_30 != 0) {
    if (local_38 == (char *)0x0) goto LAB_142aeb6a7;
    (*(code *)**(undefined8 **)local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    iStack_30 = 0;
  }
  if (local_38 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_142aeb6a7:
  atexit(FUN_142ae5dd2);
  FUN_144869430(&DAT_14c99df70);
  _DAT_14c99df70 = &PTR_FUN_149fcb580;
  FUN_14572541c(&DAT_14c99df70);
  atexit(FUN_142ae5e17);
  FUN_1446f470e(&DAT_14c99e000,L"/Script/CoreUObject",1);
  FUN_1446f470e(&DAT_14c99e008,L"ScriptStruct",1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aeb7b0 FUN_142aeb7b0 body=2108 status=ok
// SIG undefined FUN_142aeb7b0(void)

ulonglong FUN_142aeb7b0(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  void *_Src;
  void *_Dst;
  undefined8 *puVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  byte bVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined8 unaff_RBX;
  ushort uVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  ushort uVar26;
  int iVar27;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar18 = (int)param_2[1];
  plVar3 = (longlong *)*param_1;
  if (iVar18 == (int)param_1[4]) {
    uVar16 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if (iVar18 != 0) {
      lVar14 = 0;
      lVar25 = (longlong)iVar18;
      while( true ) {
        uVar26 = *(ushort *)(*param_2 + lVar14);
        uVar17 = (ulonglong)uVar26;
        uVar22 = *(ushort *)(param_1[3] + lVar14);
        if (uVar26 != uVar22) break;
        if (uVar26 == 0) goto LAB_142aebbfc;
LAB_142aeb813:
        lVar25 = lVar25 + -1;
        if (lVar25 == 0) goto LAB_142aebbfc;
        lVar14 = lVar14 + 2;
      }
      if ((uVar22 | uVar26) < 0x80) {
        uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
        uVar21 = (ulonglong)uVar22;
        uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
        if ((&DAT_149e05da0)[uVar17] == (&DAT_149e05da0)[uVar21]) goto LAB_142aeb813;
      }
      if (uVar26 != uVar22) goto LAB_142aeb851;
    }
  }
  else {
    lVar25 = DAT_14c99e020;
    if (iVar18 != 0) {
LAB_142aeb851:
      FUN_1446f82e2(&local_58,(longlong)iVar18,*param_2,1);
      lVar25 = CONCAT44(uStack_54,local_58);
    }
    plVar10 = plVar3 + 10;
    plVar20 = (longlong *)param_1[2];
    lVar14 = *plVar20;
    uVar23 = (uint)((ulonglong)lVar14 >> 0x10);
    uVar5 = (uint)lVar14 & 0xffff;
    uVar23 = ((uint)lVar14 << 0x10 | uVar5) + (int)((ulonglong)lVar14 >> 0x20) +
             (uVar23 << 0x13 | uVar23 & 0xffff) + (uVar5 >> 4);
    if ((int)plVar3[0xb] != *(int *)((longlong)plVar3 + 0x84)) {
      plVar15 = plVar3 + 0x11;
      if ((longlong *)plVar3[0x12] != (longlong *)0x0) {
        plVar15 = (longlong *)plVar3[0x12];
      }
      iVar18 = *(int *)((longlong)plVar15 + (ulonglong)((int)plVar3[0x13] - 1U & uVar23) * 4);
      if (iVar18 != -1) {
        do {
          plVar15 = (longlong *)(*plVar10 + (longlong)iVar18 * 0x18);
          if (*plVar15 == lVar14) {
            if (plVar15 != (longlong *)0x0) goto LAB_142aeb9d2;
            break;
          }
          iVar18 = (int)plVar15[2];
        } while (iVar18 != -1);
      }
    }
    FUN_1402ca3ce(plVar10,&local_58);
    *local_50 = *plVar20;
    local_50[1] = lVar25;
    *(undefined4 *)(local_50 + 2) = 0xffffffff;
    local_68 = 0;
    cVar4 = FUN_14090688a(plVar10,uVar23,local_50,&local_58);
    if (cVar4 == '\0') {
      uVar5 = (int)plVar3[0xb] - *(int *)((longlong)plVar3 + 0x84);
      if (uVar5 < 4) {
        iVar18 = 1;
      }
      else {
        uVar16 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
        lVar14 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar18 = 1 << ((byte)lVar14 & 0x1f);
      }
      if (((int)uVar5 < 1) || (iVar18 <= (int)plVar3[0x13])) {
        uVar23 = (int)plVar3[0x13] - 1U & uVar23;
        *(uint *)((longlong)local_50 + 0x14) = uVar23;
        plVar10 = (longlong *)plVar3[0x12];
        if ((longlong *)plVar3[0x12] == (longlong *)0x0) {
          plVar10 = plVar3 + 0x11;
        }
        *(undefined4 *)(local_50 + 2) =
             *(undefined4 *)
              ((longlong)plVar10 + ((longlong)(int)plVar3[0x13] - 1U & (longlong)(int)uVar23) * 4);
        plVar10 = (longlong *)plVar3[0x12];
        if ((longlong *)plVar3[0x12] == (longlong *)0x0) {
          plVar10 = plVar3 + 0x11;
        }
        *(undefined4 *)
         ((longlong)plVar10 + ((longlong)(int)plVar3[0x13] - 1U & (longlong)(int)uVar23) * 4) =
             local_58;
      }
      else {
        *(int *)(plVar3 + 0x13) = iVar18;
        FUN_140906920(plVar10);
      }
    }
LAB_142aeb9d2:
    uVar23 = (uint)((ulonglong)lVar25 >> 0x10);
    uVar5 = (uint)lVar25 & 0xffff;
    uVar23 = ((uint)lVar25 << 0x10 | uVar5) + (int)((ulonglong)lVar25 >> 0x20) +
             (uVar23 << 0x13 | uVar23 & 0xffff) + (uVar5 >> 4);
    iVar18 = (int)plVar3[1];
    iVar7 = *(int *)((longlong)plVar3 + 0x34);
    if (iVar18 != iVar7) {
      plVar10 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar10 = (longlong *)plVar3[8];
      }
      iVar6 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar3[9] - 1U & uVar23) * 4);
      if (iVar6 != -1) {
        do {
          lVar14 = *plVar3 + (longlong)iVar6 * 0x60;
          if (*(longlong *)(*plVar3 + (longlong)iVar6 * 0x60) == lVar25) {
            if (lVar14 + 8 != 0 && lVar14 != 0) {
              uVar16 = 0;
              FUN_144a13f80(lVar14 + 8,&local_58,param_1[2],0);
              goto LAB_142aebbfc;
            }
            break;
          }
          iVar6 = *(int *)(lVar14 + 0x58);
        } while (iVar6 != -1);
      }
    }
    if (iVar7 == 0) {
      *(int *)(plVar3 + 1) = iVar18 + 1;
      if (*(int *)((longlong)plVar3 + 0xc) == iVar18) {
        FUN_14488f93c(plVar3,iVar18);
      }
      iVar7 = (int)plVar3[5];
      if (iVar7 == 0) {
        iVar6 = -1;
      }
      else {
        iVar6 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar6 = iVar7 + -1;
        }
        iVar6 = iVar6 >> 5;
      }
      plVar10 = plVar3 + 2;
      iVar13 = iVar7 + 1;
      iVar27 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar27 = iVar7;
      }
      if (iVar27 >> 5 == iVar6) {
        *(int *)(plVar3 + 5) = iVar13;
      }
      else {
        if (*(int *)((longlong)plVar3 + 0x2c) <= iVar7) {
          iVar6 = iVar7;
          if (iVar7 + 0x20U < 0xa0) {
            iVar13 = 0x80;
          }
          else {
            uVar5 = iVar7 + 0x20U >> 5;
            if (*(int *)((longlong)plVar3 + 0x2c) + 0x1fU < 0xa0) {
              uVar19 = 4;
              if (4 < uVar5) {
                uVar19 = uVar5;
              }
            }
            else {
              uVar19 = uVar5 + (uVar5 * 3 >> 3) + 0x10;
            }
            uVar16 = (ulonglong)(uVar19 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar8 = (uint)(uVar16 + 0xf);
                if (uVar19 < 0x1ffd) {
                  uVar16 = (ulonglong)
                           (ushort)(&DAT_14c841d90)
                                   [0x32 - (byte)(&DAT_14c841e00)[uVar16 + 0xf >> 4]];
                }
                else {
                  uVar17 = (ulonglong)(uVar8 & 0xfffffff0);
                  if (uVar17 < 0x7ff1) {
                    bVar12 = (&DAT_14c841e00)[uVar8 >> 4];
                    uVar21 = 0x32;
                    if (0x32 < bVar12) {
                      uVar21 = (ulonglong)bVar12;
                    }
                    uVar24 = 0x32 - (ulonglong)bVar12;
                    do {
                      uVar16 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar24 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar24 & 0xffffffff] & 0xf) == 0) goto LAB_142aebde2;
                      lVar14 = uVar21 + 1 + uVar24;
                      uVar24 = uVar24 - 1;
                    } while (lVar14 != 0x33);
                  }
                  uVar16 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar16 = (ulonglong)DAT_14c841df8;
                  }
                  uVar16 = -uVar16 & (uVar17 + uVar16) - 1;
                }
              }
              else {
                local_60 = (ulonglong)uVar5;
                uVar16 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar16,0);
                uVar5 = (uint)local_60;
                iVar6 = (int)plVar3[5];
              }
            }
LAB_142aebde2:
            iVar9 = (int)(uVar16 >> 2);
            iVar13 = -0x20;
            if ((int)uVar5 <= iVar9) {
              iVar13 = iVar9 << 5;
            }
          }
          *(int *)((longlong)plVar3 + 0x2c) = iVar13;
          FUN_1446efbd8(plVar10,iVar6);
          iVar13 = (int)plVar3[5] + 1;
        }
        iVar6 = iVar13 + 0x1f;
        if (-1 < iVar13) {
          iVar6 = iVar13;
        }
        *(int *)(plVar3 + 5) = iVar13;
        if (iVar13 % 0x20 != 0) {
          plVar20 = (longlong *)plVar3[4];
          if ((longlong *)plVar3[4] == (longlong *)0x0) {
            plVar20 = plVar10;
          }
          bVar12 = -(char)(iVar13 % 0x20);
          *(uint *)((longlong)plVar20 + (longlong)(iVar6 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar20 + (longlong)(iVar6 >> 5) * 4) << (bVar12 & 0x1f))
               >> (bVar12 & 0x1f);
        }
      }
      lVar14 = (longlong)iVar18;
      if ((longlong *)plVar3[4] != (longlong *)0x0) {
        plVar10 = (longlong *)plVar3[4];
      }
      bVar12 = (byte)iVar7 & 0x1f;
      puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar27 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
    }
    else {
      iVar18 = (int)plVar3[6];
      lVar14 = (longlong)iVar18;
      iVar6 = *(int *)(*plVar3 + 4 + lVar14 * 0x60);
      *(int *)(plVar3 + 6) = iVar6;
      *(int *)((longlong)plVar3 + 0x34) = iVar7 + -1;
      if (iVar7 + -1 != 0) {
        *(undefined4 *)(*plVar3 + (longlong)iVar6 * 0x60) = 0xffffffff;
      }
    }
    plVar10 = plVar3 + 2;
    if ((longlong *)plVar3[4] != (longlong *)0x0) {
      plVar10 = (longlong *)plVar3[4];
    }
    iVar7 = iVar18 + 0x1f;
    if (-1 < iVar18) {
      iVar7 = iVar18;
    }
    puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar7 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)iVar18 & 0x1f);
    iVar7 = 1;
    lVar11 = *plVar3;
    lVar14 = lVar14 * 0x60;
    _Src = (void *)(lVar11 + lVar14);
    *(longlong *)(lVar11 + lVar14) = lVar25;
    *(undefined8 *)(lVar11 + 0x28 + lVar14) = 0;
    *(undefined4 *)(lVar11 + 0x30 + lVar14) = 0;
    puVar2 = (undefined8 *)(lVar11 + 8 + lVar14);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined8 *)(lVar11 + 0x34 + lVar14) = 0xffffffff00000080;
    *(undefined4 *)(lVar11 + 0x3c + lVar14) = 0;
    *(undefined8 *)(lVar11 + 0x48 + lVar14) = 0;
    *(undefined4 *)(lVar11 + 0x50 + lVar14) = 0;
    *(undefined4 *)(lVar11 + 0x58 + lVar14) = 0xffffffff;
    uVar5 = (int)plVar3[1] - *(int *)((longlong)plVar3 + 0x34);
    if (1 < uVar5) {
      plVar10 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar10 = (longlong *)plVar3[8];
      }
      iVar6 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar3[9] - 1U & uVar23) * 4);
      if (iVar6 != -1) {
        do {
          _Dst = (void *)(*plVar3 + (longlong)iVar6 * 0x60);
          if (*(longlong *)(*plVar3 + (longlong)iVar6 * 0x60) == lVar25) {
            *(undefined4 *)((longlong)_Dst + 0x50) = 0;
            if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
              FUN_1400020a8();
            }
            *(undefined4 *)((longlong)_Dst + 0x10) = 0;
            if (*(int *)((longlong)_Dst + 0x14) != 0) {
              FUN_14472eb64((longlong *)((longlong)_Dst + 8),0);
            }
            *(undefined8 *)((longlong)_Dst + 0x38) = 0xffffffff;
            *(undefined4 *)((longlong)_Dst + 0x30) = 0;
            if (0x80 < *(uint *)((longlong)_Dst + 0x34)) {
              *(undefined4 *)((longlong)_Dst + 0x34) = 0x80;
              FUN_1446efbd8((longlong)_Dst + 0x18,0);
            }
            if (*(longlong *)((longlong)_Dst + 0x28) != 0) {
              FUN_1400020a8();
            }
            if (*(longlong *)((longlong)_Dst + 8) != 0) {
              FUN_1400020a8();
            }
            memmove(_Dst,_Src,0x58);
            FUN_1470239fe(plVar3,iVar18,1);
            goto LAB_142aebb9b;
          }
          iVar6 = *(int *)((longlong)_Dst + 0x58);
        } while (iVar6 != -1);
      }
    }
    if (3 < uVar5) {
      uVar16 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar14 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= (int)plVar3[9])) {
      uVar23 = (int)plVar3[9] - 1U & uVar23;
      *(uint *)((longlong)_Src + 0x5c) = uVar23;
      plVar10 = (longlong *)plVar3[8];
      if ((longlong *)plVar3[8] == (longlong *)0x0) {
        plVar10 = plVar3 + 7;
      }
      *(undefined4 *)((longlong)_Src + 0x58) =
           *(undefined4 *)
            ((longlong)plVar10 + ((longlong)(int)plVar3[9] - 1U & (longlong)(int)uVar23) * 4);
      plVar10 = (longlong *)plVar3[8];
      if ((longlong *)plVar3[8] == (longlong *)0x0) {
        plVar10 = plVar3 + 7;
      }
      *(int *)((longlong)plVar10 + ((longlong)(int)plVar3[9] - 1U & (longlong)(int)uVar23) * 4) =
           iVar18;
    }
    else {
      *(int *)(plVar3 + 9) = iVar7;
      FUN_144a550a6(plVar3);
    }
LAB_142aebb9b:
    FUN_144a13f80((longlong)iVar18 * 0x60 + *plVar3 + 8,&local_58,param_1[2],0);
    lVar14 = param_1[1];
    iVar18 = *(int *)(lVar14 + 0x88);
    *(uint *)(lVar14 + 0x88) = iVar18 + 1U;
    if (*(uint *)(lVar14 + 0x8c) < iVar18 + 1U) {
      FUN_1468b3bb8(lVar14,iVar18);
    }
    lVar11 = *(longlong *)(lVar14 + 0x80);
    if (*(longlong *)(lVar14 + 0x80) == 0) {
      lVar11 = lVar14;
    }
    *(longlong *)(lVar11 + (longlong)iVar18 * 8) = lVar25;
    *(longlong *)param_1[2] = lVar25;
    uVar16 = CONCAT71((int7)(int3)((uint)iVar18 >> 8),1);
  }
LAB_142aebbfc:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16 & 0xffffffff;
}



// FUNCTION 142aebfee FUN_142aebfee body=75 status=ok
// SIG undefined FUN_142aebfee(void)

undefined8 FUN_142aebfee(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  FUN_140f0091e(*param_1,local_14,&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aec03c FUN_142aec03c body=616 status=ok
// SIG undefined FUN_142aec03c(void)

void FUN_142aec03c(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  
  lVar17 = *param_1;
  iVar15 = *(int *)(param_2 + 0x10);
  iVar7 = iVar15 + 1;
  iVar2 = *(int *)(lVar17 + 0x20);
  iVar13 = iVar7 - iVar2;
  if (0 < iVar13) {
    if (iVar2 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar3 = iVar2 + -1;
      }
      iVar3 = iVar3 >> 5;
    }
    lVar18 = lVar17 + 8;
    iVar9 = iVar15 + 0x1f;
    if (-1 < iVar15) {
      iVar9 = iVar15;
    }
    if (iVar9 >> 5 == iVar3) {
      *(int *)(lVar17 + 0x20) = iVar7;
    }
    else {
      if (*(int *)(lVar17 + 0x24) <= iVar15) {
        iVar7 = iVar2;
        if (iVar15 + 0x20U < 0xa0) {
          iVar15 = 0x80;
        }
        else {
          uVar16 = iVar15 + 0x20U >> 5;
          if (*(int *)(lVar17 + 0x24) + 0x1fU < 0xa0) {
            uVar10 = 4;
            if (4 < uVar16) {
              uVar10 = uVar16;
            }
          }
          else {
            uVar10 = uVar16 + (uVar16 * 3 >> 3) + 0x10;
          }
          uVar5 = (ulonglong)(uVar10 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar4 = (uint)(uVar5 + 0xf);
              if (uVar10 < 0x1ffd) {
                uVar5 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 + 0xf >> 4]];
              }
              else {
                uVar8 = (ulonglong)(uVar4 & 0xfffffff0);
                if (uVar8 < 0x7ff1) {
                  bVar6 = (&DAT_14c841e00)[uVar4 >> 4];
                  uVar12 = 0x32;
                  if (0x32 < bVar6) {
                    uVar12 = (ulonglong)bVar6;
                  }
                  uVar14 = 0x32 - (ulonglong)bVar6;
                  do {
                    uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar14 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar14 & 0xffffffff] & 0xf) == 0) goto LAB_142aec1cc;
                    lVar11 = uVar12 + 1 + uVar14;
                    uVar14 = uVar14 - 1;
                  } while (lVar11 != 0x33);
                }
                uVar5 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar5 = (ulonglong)DAT_14c841df8;
                }
                uVar5 = -uVar5 & (uVar8 + uVar5) - 1;
              }
            }
            else {
              uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
              iVar7 = *(int *)(lVar17 + 0x20);
            }
          }
LAB_142aec1cc:
          iVar3 = (int)(uVar5 >> 2);
          iVar15 = -0x20;
          if ((int)uVar16 <= iVar3) {
            iVar15 = iVar3 << 5;
          }
        }
        *(int *)(lVar17 + 0x24) = iVar15;
        FUN_1446efbd8(lVar18,iVar7);
        iVar7 = *(int *)(lVar17 + 0x20) + iVar13;
      }
      iVar15 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar15 = iVar7;
      }
      *(int *)(lVar17 + 0x20) = iVar7;
      if (iVar7 % 0x20 != 0) {
        lVar11 = *(longlong *)(lVar17 + 0x18);
        if (*(longlong *)(lVar17 + 0x18) == 0) {
          lVar11 = lVar18;
        }
        bVar6 = -(char)(iVar7 % 0x20);
        *(uint *)(lVar11 + (longlong)(iVar15 >> 5) * 4) =
             (uint)(*(int *)(lVar11 + (longlong)(iVar15 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    FUN_1447c6044(lVar18,iVar2,iVar13,0);
    lVar17 = *param_1;
    iVar15 = *(int *)(param_2 + 0x10);
  }
  lVar18 = lVar17 + 8;
  if (*(longlong *)(lVar17 + 0x18) != 0) {
    lVar18 = *(longlong *)(lVar17 + 0x18);
  }
  iVar7 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar7 = iVar15;
  }
  puVar1 = (uint *)(lVar18 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  return;
}



// FUNCTION 142aec2a4 FUN_142aec2a4 body=616 status=ok
// SIG undefined FUN_142aec2a4(void)

void FUN_142aec2a4(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  
  lVar17 = *param_1;
  iVar15 = *(int *)(param_2 + 0x10);
  iVar7 = iVar15 + 1;
  iVar2 = *(int *)(lVar17 + 0x20);
  iVar13 = iVar7 - iVar2;
  if (0 < iVar13) {
    if (iVar2 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar3 = iVar2 + -1;
      }
      iVar3 = iVar3 >> 5;
    }
    lVar18 = lVar17 + 8;
    iVar9 = iVar15 + 0x1f;
    if (-1 < iVar15) {
      iVar9 = iVar15;
    }
    if (iVar9 >> 5 == iVar3) {
      *(int *)(lVar17 + 0x20) = iVar7;
    }
    else {
      if (*(int *)(lVar17 + 0x24) <= iVar15) {
        iVar7 = iVar2;
        if (iVar15 + 0x20U < 0xa0) {
          iVar15 = 0x80;
        }
        else {
          uVar16 = iVar15 + 0x20U >> 5;
          if (*(int *)(lVar17 + 0x24) + 0x1fU < 0xa0) {
            uVar10 = 4;
            if (4 < uVar16) {
              uVar10 = uVar16;
            }
          }
          else {
            uVar10 = uVar16 + (uVar16 * 3 >> 3) + 0x10;
          }
          uVar5 = (ulonglong)(uVar10 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar4 = (uint)(uVar5 + 0xf);
              if (uVar10 < 0x1ffd) {
                uVar5 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 + 0xf >> 4]];
              }
              else {
                uVar8 = (ulonglong)(uVar4 & 0xfffffff0);
                if (uVar8 < 0x7ff1) {
                  bVar6 = (&DAT_14c841e00)[uVar4 >> 4];
                  uVar12 = 0x32;
                  if (0x32 < bVar6) {
                    uVar12 = (ulonglong)bVar6;
                  }
                  uVar14 = 0x32 - (ulonglong)bVar6;
                  do {
                    uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar14 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar14 & 0xffffffff] & 0xf) == 0) goto LAB_142aec434;
                    lVar11 = uVar12 + 1 + uVar14;
                    uVar14 = uVar14 - 1;
                  } while (lVar11 != 0x33);
                }
                uVar5 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar5 = (ulonglong)DAT_14c841df8;
                }
                uVar5 = -uVar5 & (uVar8 + uVar5) - 1;
              }
            }
            else {
              uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
              iVar7 = *(int *)(lVar17 + 0x20);
            }
          }
LAB_142aec434:
          iVar3 = (int)(uVar5 >> 2);
          iVar15 = -0x20;
          if ((int)uVar16 <= iVar3) {
            iVar15 = iVar3 << 5;
          }
        }
        *(int *)(lVar17 + 0x24) = iVar15;
        FUN_1446efbd8(lVar18,iVar7);
        iVar7 = *(int *)(lVar17 + 0x20) + iVar13;
      }
      iVar15 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar15 = iVar7;
      }
      *(int *)(lVar17 + 0x20) = iVar7;
      if (iVar7 % 0x20 != 0) {
        lVar11 = *(longlong *)(lVar17 + 0x18);
        if (*(longlong *)(lVar17 + 0x18) == 0) {
          lVar11 = lVar18;
        }
        bVar6 = -(char)(iVar7 % 0x20);
        *(uint *)(lVar11 + (longlong)(iVar15 >> 5) * 4) =
             (uint)(*(int *)(lVar11 + (longlong)(iVar15 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    FUN_1447c6044(lVar18,iVar2,iVar13,0);
    lVar17 = *param_1;
    iVar15 = *(int *)(param_2 + 0x10);
  }
  lVar18 = lVar17 + 8;
  if (*(longlong *)(lVar17 + 0x18) != 0) {
    lVar18 = *(longlong *)(lVar17 + 0x18);
  }
  iVar7 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar7 = iVar15;
  }
  puVar1 = (uint *)(lVar18 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  return;
}



// FUNCTION 142aec51a FUN_142aec51a body=313 status=ok
// SIG undefined FUN_142aec51a(void)

ulonglong FUN_142aec51a(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  param_3 = param_3 & 0xffffffff;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_2 + 0x20);
  if (plVar1 == (longlong *)0x0 || *(int *)(param_2 + 0x28) == 0) {
    local_30 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_30);
  }
  if (local_30 == *(longlong *)param_1[1]) {
    lVar4 = *param_1;
    if (*(short *)(lVar4 + 0x10) < 1) {
      FUN_1470244f6(lVar4,param_3);
    }
    else {
      puVar2 = *(undefined8 **)(param_2 + 0x20);
      if (puVar2 != (undefined8 *)0x0 && *(int *)(param_2 + 0x28) != 0) {
        param_3 = param_2 + 0x20;
        (**(code **)*puVar2)(puVar2,0);
        FUN_1446efa72(param_3,0,0,0x10);
        *(undefined4 *)(param_2 + 0x28) = 0;
        lVar4 = *param_1;
      }
      *(short *)(lVar4 + 0x12) = *(short *)(lVar4 + 0x12) + 1;
    }
    lVar4 = 0x18;
    lVar5 = 0x10;
  }
  else {
    cVar3 = FUN_14135aabc(param_2,param_1[4]);
    param_3 = CONCAT71((int7)(param_3 >> 8),1);
    if (cVar3 == '\0') goto LAB_142aec625;
    if (*(longlong **)(param_2 + 0x20) == (longlong *)0x0 || *(int *)(param_2 + 0x28) == 0)
    goto LAB_142aec625;
    cVar3 = (**(code **)(**(longlong **)(param_2 + 0x20) + 0x30))();
    if (cVar3 == '\0') goto LAB_142aec625;
    lVar4 = 0x10;
    lVar5 = 0x18;
  }
  **(undefined1 **)((longlong)param_1 + lVar5) = 1;
  param_3 = CONCAT71((int7)(param_3 >> 8),**(undefined1 **)((longlong)param_1 + lVar4)) ^ 1;
LAB_142aec625:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aec654 FUN_142aec654 body=356 status=ok
// SIG undefined FUN_142aec654(void)

ulonglong FUN_142aec654(longlong *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong unaff_RBX;
  
  puVar2 = (uint *)param_1[1];
  if ((((*(longlong *)(param_2 + 0x14) == *(longlong *)(puVar2 + 2)) && (puVar2[1] != 0)) &&
      (uVar1 = *puVar2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    unaff_RBX = param_3 & 0xffffffff;
    plVar7 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar7 == (longlong *)0x0) || (*(uint *)(plVar7 + 2) != puVar2[1])) ||
       (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (*plVar7 == 0)))) goto LAB_142aec75a;
    if (*(longlong **)(param_2 + 0x20) == (longlong *)0x0 || *(int *)(param_2 + 0x28) == 0)
    goto LAB_142aec75a;
    cVar4 = (**(code **)(**(longlong **)(param_2 + 0x20) + 0x20))();
    if (cVar4 == '\0') goto LAB_142aec75a;
    lVar5 = *param_1;
    if (*(short *)(lVar5 + 0x10) < 1) {
      FUN_1470244f6(lVar5,unaff_RBX);
    }
    else {
      puVar3 = *(undefined8 **)(param_2 + 0x20);
      if (puVar3 != (undefined8 *)0x0 && *(int *)(param_2 + 0x28) != 0) {
        unaff_RBX = param_2 + 0x20;
        (**(code **)*puVar3)(puVar3,0);
        FUN_1446efa72(unaff_RBX,0,0,0x10);
        *(undefined4 *)(param_2 + 0x28) = 0;
        lVar5 = *param_1;
      }
      *(short *)(lVar5 + 0x12) = *(short *)(lVar5 + 0x12) + 1;
    }
    lVar5 = 0x18;
    lVar6 = 0x10;
  }
  else {
LAB_142aec75a:
    cVar4 = FUN_14135aabc(param_2,param_1[4]);
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
    if (cVar4 == '\0') goto LAB_142aec7a5;
    if (*(longlong **)(param_2 + 0x20) == (longlong *)0x0 || *(int *)(param_2 + 0x28) == 0)
    goto LAB_142aec7a5;
    cVar4 = (**(code **)(**(longlong **)(param_2 + 0x20) + 0x30))();
    if (cVar4 == '\0') goto LAB_142aec7a5;
    lVar5 = 0x10;
    lVar6 = 0x18;
  }
  **(undefined1 **)((longlong)param_1 + lVar6) = 1;
  unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),**(undefined1 **)((longlong)param_1 + lVar5)) ^ 1;
LAB_142aec7a5:
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 142aec7b8 FUN_142aec7b8 body=201 status=ok
// SIG undefined FUN_142aec7b8(void)

void FUN_142aec7b8(void)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/FieldNotification",0,0,&PTR_FUN_149fcbde0);
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_14282b410(L"/Script/FieldNotification",&PTR_FUN_149fcc250,1,0);
  local_38 = 0x8000000149fcc278;
  local_24 = 0x11;
  local_30 = FUN_14577453c();
  local_2c = 1;
  FUN_14171c728(&DAT_14c99e080,&local_38);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aec884 FUN_142aec884 body=57 status=ok
// SIG undefined FUN_142aec884(void)

void FUN_142aec884(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99e120 == 0) {
    uVar1 = FUN_14582fb07();
    DAT_14c99e120 = FUN_14171c317(FUN_1462956c4,uVar1,L"ELocatorResolveFlags");
  }
  return;
}



// FUNCTION 142aec8be FUN_142aec8be body=10 status=ok
// SIG undefined FUN_142aec8be(void)

undefined8 * FUN_142aec8be(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 142aec8c8 FUN_142aec8c8 body=918 status=ok
// SIG undefined FUN_142aec8c8(void)

void FUN_142aec8c8(undefined8 *param_1,longlong *param_2)

{
  code **ppcVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  undefined ***pppuVar15;
  ulonglong uVar16;
  byte bVar17;
  bool bVar18;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  code *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined ***local_c8;
  undefined **local_b8;
  undefined8 local_b0;
  longlong *plStack_a8;
  code *local_98;
  longlong lStack_90;
  byte local_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  byte local_70;
  longlong local_68;
  longlong lStack_60;
  byte local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined ***local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar4 = *(int *)(param_1 + 0xb);
  iVar13 = (int)((longlong)iVar4 + 1);
  *(int *)(param_1 + 0xb) = iVar13;
  iVar12 = *(int *)(param_1 + 3) + -2;
  local_68 = *param_2;
  if (iVar4 != iVar12) {
    *(byte *)((longlong)param_1 + 0x5d) = *(byte *)(param_2 + 1) & 1;
  }
  if ((iVar13 == *(int *)(param_1 + 3)) || ((local_68 == 0 && (iVar13 != 0)))) {
    if (*(char *)(param_1 + 7) == '\x01') {
      *(byte *)(param_2 + 1) =
           *(byte *)(param_2 + 1) & 0xfd | *(char *)((longlong)param_1 + 0x5d) * '\x02';
      lVar5 = param_1[4];
      uVar7 = *(undefined4 *)((longlong)param_2 + 4);
      lVar11 = param_2[1];
      uVar8 = *(undefined4 *)((longlong)param_2 + 0xc);
      *(int *)(lVar5 + 0x80) = (int)*param_2;
      *(undefined4 *)(lVar5 + 0x84) = uVar7;
      *(int *)(lVar5 + 0x88) = (int)lVar11;
      *(undefined4 *)(lVar5 + 0x8c) = uVar8;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_108);
    }
    local_68 = *param_2;
    lStack_60 = param_2[1];
    local_58 = 0;
    plVar14 = param_1 + 8;
    if (&local_68 == plVar14) {
      uVar16 = 0;
    }
    else {
      local_38 = (undefined ***)((ulonglong)local_38 & 0xffffffffffffff00);
      uVar7 = *(undefined4 *)((longlong)param_2 + 4);
      local_d8 = (code *)*param_2;
      uStack_d0 = (undefined4)param_2[1];
      uStack_cc = *(undefined4 *)((longlong)param_2 + 0xc);
      local_c8 = local_38;
      uVar16 = param_1[10];
      local_48 = (code *)*plVar14;
      uStack_40 = param_1[9];
      *(int *)plVar14 = (int)*param_2;
      *(undefined4 *)((longlong)param_1 + 0x44) = uVar7;
      *(undefined4 *)(param_1 + 9) = uStack_d0;
      *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_cc;
      param_1[10] = local_38;
      local_38 = (undefined ***)uVar16;
      (*(code *)(&PTR_FUN_149fcd7f0)[uVar16 & 0xff])();
      uVar16 = (ulonglong)local_58;
    }
    plVar14 = &local_68;
    goto LAB_142aecaba;
  }
  bVar17 = (byte)*(undefined4 *)((longlong)param_1 + 0x5c);
  lStack_60 = 0;
  local_58 = bVar17 & 0xfd;
  if (iVar4 == iVar12) {
    local_58 = bVar17;
  }
  FUN_140522308(((longlong)iVar4 + 1) * 0x20 + param_1[2],&local_80);
  if (local_70 == 1) {
    if ((CONCAT44(local_80._4_4_,(undefined4)local_80) != 0) &&
       ((*(byte *)(CONCAT44(local_80._4_4_,(undefined4)local_80) + 0x78) & 1) != 0)) {
      lVar5 = CONCAT44(local_80._4_4_,(undefined4)local_80);
      while ((*(byte *)(lVar5 + 0x78) & 1) == 0) {
        (**(code **)(**(longlong **)(lVar5 + 0x70) + 0x20))
                  (*(longlong **)(lVar5 + 0x70),0xffffffff,0);
      }
      local_80._0_4_ = *(undefined4 *)(lVar5 + 0x80);
      local_80._4_4_ = *(undefined4 *)(lVar5 + 0x84);
      uStack_78 = *(undefined4 *)(lVar5 + 0x88);
      uStack_74 = *(undefined4 *)(lVar5 + 0x8c);
      goto LAB_142aeca95;
    }
    if ((&DAT_149fcd800)[*(byte *)(param_1 + 10)] == '\0') {
      ppcVar1 = (code **)(param_1 + 8);
      FUN_147028cca(param_1 + 4);
      *(undefined1 *)(param_1 + 6) = 1;
      pcVar6 = (code *)param_1[4];
      lVar5 = param_1[5];
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      local_88 = 1;
      uVar16 = 1;
      local_98 = pcVar6;
      lStack_90 = lVar5;
      if (&local_98 != ppcVar1) {
        local_38 = (undefined ***)CONCAT71(local_38._1_7_,1);
        local_98 = (code *)0x0;
        lStack_90 = 0;
        local_c8 = local_38;
        local_48._0_4_ = SUB84(pcVar6,0);
        local_48._4_4_ = (undefined4)((ulonglong)pcVar6 >> 0x20);
        uStack_40._0_4_ = (undefined4)lVar5;
        uStack_40._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
        uStack_d0 = (undefined4)uStack_40;
        uStack_cc = uStack_40._4_4_;
        uVar16 = param_1[10];
        pcVar9 = *ppcVar1;
        uVar10 = param_1[9];
        *(undefined4 *)ppcVar1 = (undefined4)local_48;
        *(undefined4 *)((longlong)param_1 + 0x44) = local_48._4_4_;
        *(undefined4 *)(param_1 + 9) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_40._4_4_;
        param_1[10] = local_38;
        local_d8 = pcVar6;
        local_48 = pcVar9;
        uStack_40 = uVar10;
        local_38 = (undefined ***)uVar16;
        (*(code *)(&PTR_FUN_149fcd7f0)[uVar16 & 0xff])();
        uVar16 = (ulonglong)local_88;
      }
      (*(code *)(&PTR_FUN_149fcd7f0)[uVar16])(&local_98);
    }
    plStack_a8 = (longlong *)param_1[1];
    if (plStack_a8 == (longlong *)0x0) {
LAB_142aecba7:
      local_b0 = 0;
      plStack_a8 = (longlong *)0x0;
      bVar18 = true;
    }
    else {
      iVar12 = (int)plStack_a8[1];
      do {
        if (iVar12 == 0) goto LAB_142aecba7;
        LOCK();
        iVar4 = (int)plStack_a8[1];
        bVar18 = iVar12 == iVar4;
        if (bVar18) {
          *(int *)(plStack_a8 + 1) = iVar12 + 1;
          iVar4 = iVar12;
        }
        iVar12 = iVar4;
        UNLOCK();
      } while (!bVar18);
      local_b0 = *param_1;
      bVar18 = false;
      LOCK();
      *(int *)(plStack_a8 + 1) = (int)plStack_a8[1] + 1;
      UNLOCK();
    }
    plVar14 = plStack_a8;
    local_b8 = &PTR_LAB_149fcd850;
    local_c8 = (undefined ***)0x0;
    local_d8 = FUN_142aedc30;
    FUN_147028d1a(&local_80,&local_d8);
    if (local_d8 != (code *)0x0) {
      pppuVar15 = &local_b8;
      if (local_c8 != (undefined ***)0x0) {
        pppuVar15 = local_c8;
      }
      (*(code *)(*pppuVar15)[2])(pppuVar15);
    }
    if (!bVar18) {
      LOCK();
      plVar2 = plVar14 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar3 = (int *)((longlong)plVar14 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
  }
  else {
LAB_142aeca95:
    local_e8 = (undefined4)local_80;
    uStack_e4 = local_80._4_4_;
    uStack_e0 = uStack_78;
    uStack_dc = uStack_74;
    FUN_142aec8c8(param_1,&local_e8);
  }
  plVar14 = &local_80;
  uVar16 = (ulonglong)local_70;
LAB_142aecaba:
  (*(code *)(&PTR_FUN_149fcd7f0)[uVar16])(plVar14);
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aecc74 FUN_142aecc74 body=3077 status=ok
// SIG undefined FUN_142aecc74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_142aecc74(longlong param_1,longlong *param_2,longlong *param_3,byte *param_4)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_138 [40];
  undefined1 local_110 [4];
  undefined1 local_10c [4];
  longlong *local_108 [2];
  undefined8 local_f8;
  longlong *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8 [2];
  wchar_t *local_c8;
  undefined4 local_c0;
  wchar_t *local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong *local_90;
  wchar_t **local_88;
  undefined1 *local_80;
  wchar_t *local_78;
  undefined4 local_70;
  wchar_t *local_68;
  ulonglong uStack_60;
  longlong *local_58 [2];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar5 = (int)param_3[1];
  if (iVar5 == 0) {
    local_68 = (wchar_t *)0x0;
    uStack_60 = 0;
    local_58[0] = (longlong *)0x0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
      DAT_14c844840 = (wchar_t *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[4] = L'\0';
      DAT_14c844840[5] = L'\0';
      DAT_14c844840[6] = L'\0';
      DAT_14c844840[7] = L'\0';
      *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
      DAT_14c844840[8] = L'\xffff';
      DAT_14c844840[9] = L'\xffff';
      DAT_14c844840[10] = L'\xffff';
      DAT_14c844840[0xb] = L'\xffff';
      DAT_14c844840[0xc] = L'\0';
      DAT_14c844840[0xd] = L'\0';
      DAT_14c844840[0xe] = L'\0';
      DAT_14c844840[0xf] = L'\0';
      DAT_14c844840[0x10] = L'\0';
      DAT_14c844840[0x11] = L'\0';
      DAT_14c844840[0x12] = L'\0';
      DAT_14c844840[0x13] = L'\0';
      DAT_14c844840[0x14] = L'\0';
      DAT_14c844840[0x15] = L'\0';
      DAT_14c844840[0x16] = L'\0';
      DAT_14c844840[0x17] = L'\0';
      if (DAT_14c844840 != (wchar_t *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
    local_68 = DAT_14c844840;
    if (DAT_14c844840 != (wchar_t *)0x0) {
      if (*(code **)(*(longlong *)DAT_14c844840 + 8) == FUN_144907e24) {
        LOCK();
        *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*(longlong *)DAT_14c844840 + 8))();
      }
    }
    uStack_60 = uStack_60 & 0xffffffff00000000;
    local_58[0] = (longlong *)((ulonglong)local_58[0] & 0xffffff0000000000);
    if ((*param_4 & 1) == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
      {
        DAT_14c844840 = (wchar_t *)FUN_14001cc68(0x30,0x10);
        DAT_14c844840[4] = L'\0';
        DAT_14c844840[5] = L'\0';
        DAT_14c844840[6] = L'\0';
        DAT_14c844840[7] = L'\0';
        *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
        DAT_14c844840[8] = L'\xffff';
        DAT_14c844840[9] = L'\xffff';
        DAT_14c844840[10] = L'\xffff';
        DAT_14c844840[0xb] = L'\xffff';
        DAT_14c844840[0xc] = L'\0';
        DAT_14c844840[0xd] = L'\0';
        DAT_14c844840[0xe] = L'\0';
        DAT_14c844840[0xf] = L'\0';
        DAT_14c844840[0x10] = L'\0';
        DAT_14c844840[0x11] = L'\0';
        DAT_14c844840[0x12] = L'\0';
        DAT_14c844840[0x13] = L'\0';
        DAT_14c844840[0x14] = L'\0';
        DAT_14c844840[0x15] = L'\0';
        DAT_14c844840[0x16] = L'\0';
        DAT_14c844840[0x17] = L'\0';
        if (DAT_14c844840 != (wchar_t *)0x0) {
          LOCK();
          *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
          UNLOCK();
        }
        DAT_14c844848 = 0;
        atexit(FUN_142760bef);
        _Init_thread_footer(&DAT_14c844850);
      }
      local_78 = DAT_14c844840;
      if (DAT_14c844840 != (wchar_t *)0x0) {
        if (*(code **)(*(longlong *)DAT_14c844840 + 8) == FUN_144907e24) {
          LOCK();
          *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
          UNLOCK();
        }
        else {
          (**(code **)(*(longlong *)DAT_14c844840 + 8))();
        }
      }
      local_70 = 0;
    }
    else {
      local_b8 = L"Error_EmptyFragmentType";
      uStack_b0._0_4_ = 0x17;
      FUN_1446e940c(&local_88,&local_b8);
      local_b8 = L"UOL";
      uStack_b0._0_4_ = 3;
      FUN_1446e940c(&local_98,&local_b8);
      local_b8 = L"Fragment type specifier is empty.";
      uStack_b0 = CONCAT44(uStack_b0._4_4_,0x21);
      FUN_140208c1e(&local_78,&local_98,&local_88,&local_b8);
    }
    plVar8 = (longlong *)FUN_147027222(&local_68,&local_78);
    plVar6 = (longlong *)*plVar8;
    *param_2 = (longlong)plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    *(int *)(param_2 + 1) = (int)plVar8[1];
    *(undefined1 *)((longlong)param_2 + 0x14) = *(undefined1 *)((longlong)plVar8 + 0x14);
    *(int *)(param_2 + 2) = (int)plVar8[2];
    pwVar10 = local_68;
    if (local_78 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_78 + 0x10))();
      pwVar10 = local_68;
    }
  }
  else {
    iVar11 = 4;
    if (iVar5 < 4) {
      iVar11 = iVar5;
    }
    lVar7 = (longlong)iVar11;
    lVar9 = 0;
LAB_142aecccf:
    uVar3 = *(ushort *)(*param_3 + lVar9);
    uVar4 = *(ushort *)((longlong)&DAT_149e62e78 + lVar9);
    if (uVar3 == uVar4) {
      iVar11 = 0;
      if ((uVar3 == 0) || (iVar11 = 0, lVar7 == 1)) goto LAB_142aecefc;
LAB_142aeccf4:
      lVar7 = lVar7 + -1;
      lVar9 = lVar9 + 2;
      goto LAB_142aecccf;
    }
    if ((uVar4 | uVar3) < 0x80) {
      if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[(uint)uVar4]) {
        iVar11 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar4];
        goto LAB_142aecefc;
      }
      if (lVar7 == 1) {
        iVar11 = 0;
        goto LAB_142aecefc;
      }
      goto LAB_142aeccf4;
    }
    iVar11 = (uint)uVar3 - (uint)uVar4;
LAB_142aecefc:
    if ((iVar5 == 4) && (iVar11 == 0)) {
      FUN_14084385c(param_1);
      *(undefined1 *)(param_1 + 0x1e) = 0xff;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
      {
        DAT_14c844840 = (wchar_t *)FUN_14001cc68(0x30,0x10);
        DAT_14c844840[4] = L'\0';
        DAT_14c844840[5] = L'\0';
        DAT_14c844840[6] = L'\0';
        DAT_14c844840[7] = L'\0';
        *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
        DAT_14c844840[8] = L'\xffff';
        DAT_14c844840[9] = L'\xffff';
        DAT_14c844840[10] = L'\xffff';
        DAT_14c844840[0xb] = L'\xffff';
        DAT_14c844840[0xc] = L'\0';
        DAT_14c844840[0xd] = L'\0';
        DAT_14c844840[0xe] = L'\0';
        DAT_14c844840[0xf] = L'\0';
        DAT_14c844840[0x10] = L'\0';
        DAT_14c844840[0x11] = L'\0';
        DAT_14c844840[0x12] = L'\0';
        DAT_14c844840[0x13] = L'\0';
        DAT_14c844840[0x14] = L'\0';
        DAT_14c844840[0x15] = L'\0';
        DAT_14c844840[0x16] = L'\0';
        DAT_14c844840[0x17] = L'\0';
        if (DAT_14c844840 != (wchar_t *)0x0) {
          LOCK();
          *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
          UNLOCK();
        }
        DAT_14c844848 = 0;
        atexit(FUN_142760bef);
        _Init_thread_footer(&DAT_14c844850);
      }
      pwVar10 = DAT_14c844840;
      if (DAT_14c844840 != (wchar_t *)0x0) {
        if (*(code **)(*(longlong *)DAT_14c844840 + 8) == FUN_144907e24) {
          LOCK();
          *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
          UNLOCK();
        }
        else {
          (**(code **)(*(longlong *)DAT_14c844840 + 8))(DAT_14c844840);
        }
        *param_2 = (longlong)pwVar10;
        (**(code **)(*(longlong *)pwVar10 + 8))(pwVar10);
        *(undefined4 *)(param_2 + 1) = 0;
        *(undefined4 *)(param_2 + 2) = 4;
        *(undefined1 *)((longlong)param_2 + 0x14) = 1;
        (**(code **)(*(longlong *)pwVar10 + 0x10))(pwVar10);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_138);
      }
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = 0;
      *(undefined4 *)(param_2 + 2) = 4;
LAB_142aed442:
      *(undefined1 *)((longlong)param_2 + 0x14) = 1;
      goto LAB_142aed3e8;
    }
    FUN_1446f82e2(&local_a0,iVar5,*param_3,0);
    if (local_a0 != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c99e178) && (FUN_144b3d300(&DAT_14c99e178), DAT_14c99e178 == -1))
      {
        _DAT_14c99e148 = &PTR_LAB_149e668b0;
        _DAT_14c99e150 = 0;
        FUN_1405bceb4(&DAT_14c99e148);
        _DAT_14c99e148 = &PTR_FUN_149fcd880;
        DAT_14c99e158 = 0;
        _DAT_14c99e160 = 0;
        _DAT_14c99e168 = 0;
        _DAT_14c99e170 = 0;
        atexit((_func_5014 *)&LAB_142aedb63);
        _Init_thread_footer(&DAT_14c99e178);
      }
      if ((longlong)DAT_14c99e170 != 0) {
        lVar12 = -_DAT_14c99e168;
        lVar9 = (longlong)DAT_14c99e170 * 0x58;
        lVar7 = _DAT_14c99e168;
        do {
          if (*(longlong *)(lVar7 + 0x40) == local_a0) {
            if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x28) != 0)) {
              FUN_14084385c(param_1);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c99e178) &&
                 (FUN_144b3d300(&DAT_14c99e178), DAT_14c99e178 == -1)) {
                _DAT_14c99e148 = &PTR_LAB_149e668b0;
                _DAT_14c99e150 = 0;
                FUN_1405bceb4(&DAT_14c99e148);
                _DAT_14c99e148 = &PTR_FUN_149fcd880;
                DAT_14c99e158 = 0;
                _DAT_14c99e160 = 0;
                _DAT_14c99e168 = 0;
                _DAT_14c99e170 = 0;
                atexit((_func_5014 *)&LAB_142aedb63);
                _Init_thread_footer(&DAT_14c99e178);
              }
              *(char *)(param_1 + 0x1e) = (char)((uint)-((int)lVar12 + DAT_14c99e168) >> 3) * -0x5d;
              FUN_1411b5c94(param_1,lVar7);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c844850) &&
                 (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
                DAT_14c844840 = (wchar_t *)FUN_14001cc68(0x30,0x10);
                DAT_14c844840[4] = L'\0';
                DAT_14c844840[5] = L'\0';
                DAT_14c844840[6] = L'\0';
                DAT_14c844840[7] = L'\0';
                *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
                DAT_14c844840[8] = L'\xffff';
                DAT_14c844840[9] = L'\xffff';
                DAT_14c844840[10] = L'\xffff';
                DAT_14c844840[0xb] = L'\xffff';
                DAT_14c844840[0xc] = L'\0';
                DAT_14c844840[0xd] = L'\0';
                DAT_14c844840[0xe] = L'\0';
                DAT_14c844840[0xf] = L'\0';
                DAT_14c844840[0x10] = L'\0';
                DAT_14c844840[0x11] = L'\0';
                DAT_14c844840[0x12] = L'\0';
                DAT_14c844840[0x13] = L'\0';
                DAT_14c844840[0x14] = L'\0';
                DAT_14c844840[0x15] = L'\0';
                DAT_14c844840[0x16] = L'\0';
                DAT_14c844840[0x17] = L'\0';
                if (DAT_14c844840 != (wchar_t *)0x0) {
                  LOCK();
                  *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
                  UNLOCK();
                }
                DAT_14c844848 = 0;
                atexit(FUN_142760bef);
                _Init_thread_footer(&DAT_14c844850);
              }
              pwVar10 = DAT_14c844840;
              if (DAT_14c844840 == (wchar_t *)0x0) {
                lVar7 = param_3[1];
                *param_2 = 0;
                *(undefined4 *)(param_2 + 1) = 0;
                *(int *)(param_2 + 2) = (int)lVar7;
                goto LAB_142aed442;
              }
              if (*(code **)(*(longlong *)DAT_14c844840 + 8) == FUN_144907e24) {
                LOCK();
                *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
                UNLOCK();
              }
              else {
                (**(code **)(*(longlong *)DAT_14c844840 + 8))(DAT_14c844840);
              }
              lVar7 = param_3[1];
              *param_2 = (longlong)pwVar10;
              (**(code **)(*(longlong *)pwVar10 + 8))(pwVar10);
              *(undefined4 *)(param_2 + 1) = 0;
              *(int *)(param_2 + 2) = (int)lVar7;
              *(undefined1 *)((longlong)param_2 + 0x14) = 1;
              lVar7 = *(longlong *)pwVar10;
              goto LAB_142aed3e5;
            }
            break;
          }
          lVar7 = lVar7 + 0x58;
          lVar12 = lVar12 + -0x58;
          lVar9 = lVar9 + -0x58;
        } while (lVar9 != 0);
      }
    }
    local_b8 = (wchar_t *)0x0;
    uStack_b0 = 0;
    local_a8 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
      DAT_14c844840 = (wchar_t *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[4] = L'\0';
      DAT_14c844840[5] = L'\0';
      DAT_14c844840[6] = L'\0';
      DAT_14c844840[7] = L'\0';
      *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
      DAT_14c844840[8] = L'\xffff';
      DAT_14c844840[9] = L'\xffff';
      DAT_14c844840[10] = L'\xffff';
      DAT_14c844840[0xb] = L'\xffff';
      DAT_14c844840[0xc] = L'\0';
      DAT_14c844840[0xd] = L'\0';
      DAT_14c844840[0xe] = L'\0';
      DAT_14c844840[0xf] = L'\0';
      DAT_14c844840[0x10] = L'\0';
      DAT_14c844840[0x11] = L'\0';
      DAT_14c844840[0x12] = L'\0';
      DAT_14c844840[0x13] = L'\0';
      DAT_14c844840[0x14] = L'\0';
      DAT_14c844840[0x15] = L'\0';
      DAT_14c844840[0x16] = L'\0';
      DAT_14c844840[0x17] = L'\0';
      if (DAT_14c844840 != (wchar_t *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
    local_b8 = DAT_14c844840;
    if (DAT_14c844840 != (wchar_t *)0x0) {
      if (*(code **)(*(longlong *)DAT_14c844840 + 8) == FUN_144907e24) {
        LOCK();
        *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*(longlong *)DAT_14c844840 + 8))();
      }
    }
    uStack_b0 = uStack_b0 & 0xffffffff00000000;
    local_a8 = local_a8 & 0xffffff0000000000;
    bVar2 = *param_4;
    if ((bVar2 & 1) == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
      {
        DAT_14c844840 = (wchar_t *)FUN_14001cc68(0x30,0x10);
        DAT_14c844840[4] = L'\0';
        DAT_14c844840[5] = L'\0';
        DAT_14c844840[6] = L'\0';
        DAT_14c844840[7] = L'\0';
        *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
        DAT_14c844840[8] = L'\xffff';
        DAT_14c844840[9] = L'\xffff';
        DAT_14c844840[10] = L'\xffff';
        DAT_14c844840[0xb] = L'\xffff';
        DAT_14c844840[0xc] = L'\0';
        DAT_14c844840[0xd] = L'\0';
        DAT_14c844840[0xe] = L'\0';
        DAT_14c844840[0xf] = L'\0';
        DAT_14c844840[0x10] = L'\0';
        DAT_14c844840[0x11] = L'\0';
        DAT_14c844840[0x12] = L'\0';
        DAT_14c844840[0x13] = L'\0';
        DAT_14c844840[0x14] = L'\0';
        DAT_14c844840[0x15] = L'\0';
        DAT_14c844840[0x16] = L'\0';
        DAT_14c844840[0x17] = L'\0';
        if (DAT_14c844840 != (wchar_t *)0x0) {
          LOCK();
          *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
          UNLOCK();
        }
        DAT_14c844848 = 0;
        atexit(FUN_142760bef);
        _Init_thread_footer(&DAT_14c844850);
      }
      local_c8 = DAT_14c844840;
      if (DAT_14c844840 != (wchar_t *)0x0) {
        if (*(code **)(*(longlong *)DAT_14c844840 + 8) == FUN_144907e24) {
          LOCK();
          *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
          UNLOCK();
        }
        else {
          (**(code **)(*(longlong *)DAT_14c844840 + 8))();
        }
      }
      local_c0 = 0;
    }
    else {
      local_e8 = (undefined4)*param_3;
      uStack_e4 = *(undefined4 *)((longlong)param_3 + 4);
      uStack_e0 = (undefined4)param_3[1];
      uStack_dc = *(undefined4 *)((longlong)param_3 + 0xc);
      FUN_1417036e0(local_d8);
      local_68 = L"Error_UnknownFragmentType";
      uStack_60._0_4_ = 0x19;
      FUN_1446e940c(local_10c,&local_68);
      local_68 = L"UOL";
      uStack_60._0_4_ = 3;
      FUN_1446e940c(local_110,&local_68);
      local_68 = L"Unknown fragment type specifier {0}.";
      uStack_60 = CONCAT44(uStack_60._4_4_,0x24);
      FUN_140208c1e(local_108,local_110,local_10c,&local_68);
      FUN_14023409e(&local_f8,local_108,1);
      local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
      FUN_14023423e(local_58,local_d8);
      local_80 = local_48;
      local_88 = &local_68;
      FUN_14010d304(&local_78);
      local_98 = local_f8;
      local_90 = local_f0;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(&local_c8,&local_98,&local_78);
      FUN_14007f2db(local_78,local_70);
      if (local_78 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (local_58[0] != (longlong *)0x0) {
        (**(code **)(*local_58[0] + 0x10))();
      }
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_f0 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar1 = (int *)((longlong)local_f0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_f0 + 0x10))(local_f0);
          }
        }
      }
      if (local_d8[0] != (longlong *)0x0) {
        (**(code **)(*local_d8[0] + 0x10))();
      }
    }
    plVar8 = (longlong *)FUN_147027222(&local_b8,&local_c8);
    plVar6 = (longlong *)*plVar8;
    *param_2 = (longlong)plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    *(int *)(param_2 + 1) = (int)plVar8[1];
    *(undefined1 *)((longlong)param_2 + 0x14) = *(undefined1 *)((longlong)plVar8 + 0x14);
    *(int *)(param_2 + 2) = (int)plVar8[2];
    if (local_c8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_c8 + 0x10))();
    }
    pwVar10 = local_b8;
    if (((bVar2 & 1) != 0) && (local_108[0] != (longlong *)0x0)) {
      (**(code **)(*local_108[0] + 0x10))();
      pwVar10 = local_b8;
    }
  }
  if (pwVar10 != (wchar_t *)0x0) {
    lVar7 = *(longlong *)pwVar10;
LAB_142aed3e5:
    (**(code **)(lVar7 + 0x10))(pwVar10);
  }
LAB_142aed3e8:
  if ((local_40 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 142aed880 FUN_142aed880 body=312 status=ok
// SIG undefined FUN_142aed880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142aed880(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  cVar2 = *(char *)((longlong)param_2 + 0x1e);
  *(char *)((longlong)param_1 + 0x1e) = cVar2;
  *(undefined1 *)((longlong)param_1 + 0x1f) = 0;
  if ((*(byte *)((longlong)param_2 + 0x1f) & 1) != 0) {
    if (cVar2 == -1) {
      lVar3 = 0;
    }
    else {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c99e178) {
        FUN_144b3d300(&DAT_14c99e178);
        if (DAT_14c99e178 == -1) {
          _DAT_14c99e148 = &PTR_LAB_149e668b0;
          _DAT_14c99e150 = 0;
          FUN_1405bceb4(&DAT_14c99e148);
          _DAT_14c99e148 = &PTR_FUN_149fcd880;
          DAT_14c99e158 = 0;
          _DAT_14c99e160 = 0;
          _DAT_14c99e168 = 0;
          _DAT_14c99e170 = 0;
          atexit((_func_5014 *)&LAB_142aedb63);
          _Init_thread_footer(&DAT_14c99e178);
        }
      }
      lVar3 = (ulonglong)*(byte *)((longlong)param_1 + 0x1e) * 0x58 + _DAT_14c99e168;
    }
    FUN_1411b5c94(param_1,lVar3);
    pbVar1 = (byte *)((longlong)param_2 + 0x1f);
    if ((*pbVar1 & 2) == 0) {
      param_2 = (undefined8 *)*param_2;
    }
    puVar4 = param_1;
    if ((*(byte *)((longlong)param_1 + 0x1f) & 2) == 0) {
      puVar4 = (undefined8 *)*param_1;
    }
    FUN_1449b16b6(*(undefined8 *)(lVar3 + 0x28),
                  (ulonglong)((uint)(1L << (*(byte *)((longlong)param_1 + 0x1f) >> 2)) & 0xfffffffe)
                  + (longlong)puVar4,
                  (ulonglong)((uint)(1L << (*pbVar1 >> 2)) & 0xfffffffe) + (longlong)param_2,1);
  }
  return param_1;
}



// FUNCTION 142aed9b8 FUN_142aed9b8 body=328 status=ok
// SIG undefined FUN_142aed9b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142aed9b8(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  FUN_14084385c();
  if ((*(byte *)((longlong)param_2 + 0x1f) & 1) == 0) {
    *(byte *)((longlong)param_1 + 0x1f) = *(byte *)((longlong)param_1 + 0x1f) & 0xfe;
    *(undefined1 *)((longlong)param_1 + 0x1e) = 0xff;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x1e) == -1) {
      lVar2 = 0;
    }
    else {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c99e178) {
        FUN_144b3d300(&DAT_14c99e178);
        if (DAT_14c99e178 == -1) {
          _DAT_14c99e148 = &PTR_LAB_149e668b0;
          _DAT_14c99e150 = 0;
          FUN_1405bceb4(&DAT_14c99e148);
          _DAT_14c99e148 = &PTR_FUN_149fcd880;
          DAT_14c99e158 = 0;
          _DAT_14c99e160 = 0;
          _DAT_14c99e168 = 0;
          _DAT_14c99e170 = 0;
          atexit((_func_5014 *)&LAB_142aedb63);
          _Init_thread_footer(&DAT_14c99e178);
        }
      }
      lVar2 = (ulonglong)*(byte *)((longlong)param_1 + 0x1e) * 0x58 + _DAT_14c99e168;
    }
    *(undefined1 *)((longlong)param_1 + 0x1e) = *(undefined1 *)((longlong)param_2 + 0x1e);
    FUN_1411b5c94(param_1,lVar2);
    pbVar1 = (byte *)((longlong)param_2 + 0x1f);
    if ((*pbVar1 & 2) == 0) {
      param_2 = (undefined8 *)*param_2;
    }
    puVar3 = param_1;
    if ((*(byte *)((longlong)param_1 + 0x1f) & 2) == 0) {
      puVar3 = (undefined8 *)*param_1;
    }
    FUN_1449b16b6(*(undefined8 *)(lVar2 + 0x28),
                  (ulonglong)((uint)(1L << (*(byte *)((longlong)param_1 + 0x1f) >> 2)) & 0xfffffffe)
                  + (longlong)puVar3,
                  (ulonglong)((uint)(1L << (*pbVar1 >> 2)) & 0xfffffffe) + (longlong)param_2,1);
  }
  return param_1;
}



// FUNCTION 142aedb00 FUN_142aedb00 body=99 status=ok
// SIG undefined FUN_142aedb00(void)

longlong * FUN_142aedb00(undefined8 *param_1,longlong *param_2,ulonglong param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  
  *(byte *)((longlong)param_1 + 0x1f) = (*(byte *)((longlong)param_1 + 0x1f) & 2) + 1;
  bVar2 = 3;
  puVar1 = param_1;
  if (0x1e < param_3 || 8 < param_4) {
    puVar1 = (undefined8 *)FUN_14001cc68(param_3,(int)param_4);
    *param_1 = puVar1;
    bVar2 = *(byte *)((longlong)param_1 + 0x1f) & 0xfd;
  }
  *(byte *)((longlong)param_1 + 0x1f) = bVar2;
  *param_2 = (ulonglong)(1 << (bVar2 >> 2 & 0x1f) & 0xfffffffe) + (longlong)puVar1;
  return param_2;
}


