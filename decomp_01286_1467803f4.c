// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1467803f4 FUN_1467803f4 body=12 status=ok
// SIG undefined FUN_1467803f4(void)

void FUN_1467803f4(void)

{
  FUN_14678ce76(&DAT_14c758470);
  return;
}



// FUNCTION 146780400 FUN_146780400 body=85 status=ok
// SIG undefined FUN_146780400(void)

undefined8 FUN_146780400(undefined8 param_1,undefined8 param_2,undefined4 *param_3,longlong param_4)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_4 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_146782b1c();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146780456 FUN_146780456 body=338 status=ok
// SIG undefined FUN_146780456(void)

undefined1 *
FUN_146780456(undefined1 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((longlong)param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((longlong)param_4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  FUN_1467837c0(local_50,param_3,param_4);
  if ((longlong)local_40 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar3 = (param_4 * param_3) / local_40;
  uVar2 = 0;
  uVar6 = 0;
  if ((param_2 % param_3) % local_40 == 0) {
    uVar4 = uVar3 / param_4;
    if ((longlong)uVar4 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar5 = (longlong)(((param_2 % param_3) / local_40) * local_48) % (longlong)uVar4;
    uVar6 = (lVar5 >> 0x3f & uVar4) + lVar5;
    if ((longlong)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar4 <= uVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar6 = uVar6 * param_4;
    if ((longlong)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar4 = ~uVar6 + uVar3 + param_2;
    uVar6 = (uVar4 - uVar4 % uVar3) + uVar6;
    if (uVar6 % param_4 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar2 = 1;
    if ((uVar6 - param_2) % param_3 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  *param_1 = uVar2;
  *(ulonglong *)(param_1 + 8) = uVar6;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467805a9 FUN_1467805a9 body=233 status=ok
// SIG undefined FUN_1467805a9(void)

byte * FUN_1467805a9(byte *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                    ulonglong param_5)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [40];
  byte local_50;
  undefined4 local_4f;
  undefined3 uStack_4b;
  ulonglong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = param_4;
  uVar4 = param_5;
  if (param_2 < param_4) {
    uVar3 = param_2;
    uVar4 = param_3;
    param_2 = param_4;
    param_3 = param_5;
  }
  FUN_146780456(&local_50,param_2 - uVar3,param_3,uVar4);
  if (((local_50 & 1) == 0) || (lVar2 = local_48 + uVar3, CARRY8(local_48,uVar3))) {
    *param_1 = 0;
    lVar2 = 0;
  }
  else {
    if ((lVar2 - param_2) % param_3 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((lVar2 - uVar3) % uVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    *param_1 = local_50;
    *(undefined4 *)(param_1 + 1) = local_4f;
    *(uint *)(param_1 + 4) = CONCAT31(uStack_4b,local_4f._3_1_);
  }
  *(longlong *)(param_1 + 8) = lVar2;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146780693 FUN_146780693 body=23 status=ok
// SIG undefined FUN_146780693(void)

void FUN_146780693(undefined8 *param_1,undefined4 param_2)

{
  *param_1 = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = param_2;
  return;
}



// FUNCTION 1467806aa FUN_1467806aa body=22 status=ok
// SIG undefined FUN_1467806aa(void)

void FUN_1467806aa(ulonglong *param_1,ulonglong param_2)

{
  code *pcVar1;
  
  if (*param_1 == 0xffffffffffffffff) {
    *param_1 = param_2;
  }
  else if (param_2 <= *param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  return;
}



// FUNCTION 1467806c0 FUN_1467806c0 body=80 status=ok
// SIG undefined FUN_1467806c0(void)

void FUN_1467806c0(ulonglong *param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  
  uVar1 = *param_1;
  if (uVar1 != 0xffffffffffffffff) {
    if (param_3 < uVar1 || param_3 - uVar1 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = (param_3 - uVar1) * *(longlong *)(param_4 + 0x28);
    FUN_14678d9b9(param_2 + uVar1 * *(longlong *)(param_4 + 0x28),lVar3,(int)param_1[3]);
    *param_1 = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 1) = 1;
    param_1[2] = param_1[2] + lVar3;
  }
  return;
}



// FUNCTION 146780710 FUN_146780710 body=176 status=ok
// SIG undefined FUN_146780710(void)

void FUN_146780710(ulonglong *param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,undefined4 param_7)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_1;
  if (uVar1 != 0xffffffffffffffff) {
    if (param_3 < uVar1 || param_3 - uVar1 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = (param_3 - uVar1) * *(longlong *)(param_6 + 0x28);
    local_38 = param_2 + uVar1 * *(longlong *)(param_6 + 0x28);
    local_28 = 0;
    if ((char)param_1[1] == '\0') {
      local_28 = param_5;
    }
    local_20 = (undefined4)param_1[3];
    local_30 = lVar3 + local_38;
    FUN_14678196f(param_4,&local_38,param_7);
    *param_1 = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 1) = 1;
    param_1[2] = param_1[2] + lVar3;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467807c1 FUN_1467807c1 body=310 status=ok
// SIG undefined FUN_1467807c1(void)

void FUN_1467807c1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  BOOLEAN BVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((DAT_14c80acf8 == 0) == (DAT_14c8084ec != 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (DAT_14c80acf8 == 0) {
    local_48 = 0x4000;
    local_40 = 0;
    local_58 = 1;
    FUN_146780f0e(&local_38,0x1400000,&local_48,"pas_large_expendable_memory");
    if ((local_30 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (local_38 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    FUN_146790cbb(local_38,0x1400000);
    DAT_14c80acf8 = local_38;
    FUN_146782f9f(&DAT_14c8084e8,0x1400000);
  }
  if (DAT_14c8084ec == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (DAT_14c80acf8 != 0) {
    local_58 = 6;
    local_50 = param_3;
    FUN_1467832cf(&DAT_14c8084e8,DAT_14c80acf8,param_1,param_2);
    if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1467808f8 FUN_1467808f8 body=80 status=ok
// SIG undefined FUN_1467808f8(void)

void FUN_1467808f8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  BOOLEAN BVar2;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (DAT_14c8084ec != 0) {
    if (DAT_14c80acf8 != 0) {
      FUN_1467832fc(&DAT_14c8084e8,DAT_14c80acf8,param_1,param_2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 146780948 FUN_146780948 body=88 status=ok
// SIG undefined FUN_146780948(void)

undefined8 FUN_146780948(undefined4 param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  undefined8 uVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((DAT_14c80acf8 == 0) != (DAT_14c8084ec != 0)) {
    if (DAT_14c80acf8 != 0) {
      uVar3 = FUN_14678341b(&DAT_14c8084e8,DAT_14c80acf8,param_1);
      return uVar3;
    }
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1467809a0 FUN_1467809a0 body=1149 status=ok
// SIG undefined FUN_1467809a0(void)

ulonglong * FUN_1467809a0(ulonglong *param_1,ulonglong param_2,longlong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_60;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ad00);
  if (DAT_14c80aed0 == 0) {
    DAT_14c80aed0 = FUN_14678d6e8();
  }
  uVar4 = DAT_14c80aed0;
  if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (DAT_14c80ad08 == 0) {
    if (DAT_14c80aed0 == 0) {
      DAT_14c80aed0 = FUN_14678d6e8();
    }
    if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((DAT_14c758498 & DAT_14c80aed0 - 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_88 = 1;
    local_80 = 0;
    FUN_14678d79a(&local_78,DAT_14c758498,&local_88,0);
    if (local_60 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (local_50 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (local_78 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (local_70 != DAT_14c758498) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    DAT_14c80ad08 = local_78;
    if (DAT_14c80aed0 == 0) {
      DAT_14c80ad10 = FUN_14678d6e8();
      DAT_14c80aed0 = DAT_14c80ad10;
      if (DAT_14c80ad10 == 0) {
        DAT_14c80aed0 = FUN_14678d6e8();
      }
    }
    else {
      DAT_14c80ad10 = DAT_14c80aed0;
    }
    if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((DAT_14c80ad08 & DAT_14c80aed0 - 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  if (DAT_14c80aed0 == 0) {
    DAT_14c80aed0 = FUN_14678d6e8();
  }
  if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((DAT_14c80ad08 & DAT_14c80aed0 - 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (DAT_14c80aed0 == 0) {
    DAT_14c80aed0 = FUN_14678d6e8();
  }
  uVar2 = DAT_14c80ad10;
  uVar5 = DAT_14c80ad08;
  if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((DAT_14c80ad10 & DAT_14c80aed0 - 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((int)POPCOUNT(param_3) != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar3 = DAT_14c758498 + DAT_14c80ad08;
  if (DAT_14c80aed0 == 0) {
    DAT_14c80aed0 = FUN_14678d6e8();
  }
  if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((DAT_14c80aed0 - 1 & uVar3) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (DAT_14c80aed0 == 0) {
    DAT_14c80aed0 = FUN_14678d6e8();
  }
  if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar5 = uVar5 + uVar2;
  if ((DAT_14c80aed0 - 1 & uVar5) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (DAT_14c80aed0 == 0) {
    DAT_14c80aed0 = FUN_14678d6e8();
  }
  if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar2 = -param_3 & (param_3 + uVar5) - 1;
  if ((DAT_14c80aed0 - 1 & uVar2) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar4 = -uVar4 & (param_2 + uVar4) - 1;
  if ((bool)(uVar5 <= uVar2 & ~(uVar3 < uVar2) & uVar4 <= uVar3 - uVar2)) {
    if (DAT_14c80aed0 == 0) {
      DAT_14c80aed0 = FUN_14678d6e8();
    }
    if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((DAT_14c80aed0 - 1 & uVar2 + uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    DAT_14c80ad10 = (uVar2 + uVar4) - DAT_14c80ad08;
    if (DAT_14c80aed0 == 0) {
      DAT_14c80aed0 = FUN_14678d6e8();
    }
    if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((DAT_14c80ad10 & DAT_14c80aed0 - 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ad00);
    if (DAT_14c80aed0 == 0) {
      DAT_14c80aed0 = FUN_14678d6e8();
    }
    if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((DAT_14c80aed0 - 1 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (DAT_14c80aed0 == 0) {
      DAT_14c80aed0 = FUN_14678d6e8();
    }
    if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((DAT_14c80aed0 - 1 & uVar2 - uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (DAT_14c80aed0 == 0) {
      DAT_14c80aed0 = FUN_14678d6e8();
    }
    if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((DAT_14c80aed0 - 1 & uVar2) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (DAT_14c80aed0 == 0) {
      DAT_14c80aed0 = FUN_14678d6e8();
    }
    if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((DAT_14c80aed0 - 1 & uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    *param_1 = uVar2;
    param_1[1] = param_2;
    param_1[2] = uVar5;
    param_1[3] = uVar2 - uVar5;
    param_1[4] = uVar2 + param_2;
    param_1[5] = uVar4 - param_2;
    *(undefined4 *)(param_1 + 6) = 1;
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ad00);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146780e1e FUN_146780e1e body=239 status=ok
// SIG undefined FUN_146780e1e(void)

undefined8
FUN_146780e1e(undefined8 param_1,ulonglong param_2,undefined4 *param_3,undefined8 param_4,
             int param_5)

{
  code *pcVar1;
  BOOLEAN BVar2;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_5 != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (DAT_14c80aed0 == 0) {
    DAT_14c80aed0 = FUN_14678d6e8();
  }
  if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((DAT_14c80aed0 - 1U & param_2) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 == '\0') {
    local_78 = &local_50;
    local_50 = 1;
    local_48 = 1;
    local_40 = FUN_146780f75;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_68 = *param_3;
    uStack_64 = param_3[1];
    uStack_60 = param_3[2];
    uStack_5c = param_3[3];
    FUN_146799db0(param_1,&DAT_14c80ad18,param_2);
    if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 146780f0e FUN_146780f0e body=102 status=ok
// SIG undefined FUN_146780f0e(void)

longlong *
FUN_146780f0e(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             undefined4 param_5)

{
  code *pcVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_38 = param_5;
  FUN_146780e1e(param_1);
  if ((char)param_1[1] == '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (*param_1 != 0) {
    if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 146780f75 FUN_146780f75 body=41 status=ok
// SIG undefined FUN_146780f75(void)

undefined8 FUN_146780f75(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  code *pcVar1;
  
  if (param_4 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_3[1] == 0) {
    FUN_1467809a0(param_1,param_2,*param_3);
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 146780f9e FUN_146780f9e body=115 status=ok
// SIG undefined FUN_146780f9e(void)

undefined4 FUN_146780f9e(undefined8 param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  uVar2 = FUN_14678942f(param_1,param_2);
  if ((char)uVar2 == '\0') {
    if (param_3 != 0) {
      if (param_3 == 1) {
        FUN_1467a2796("Large heap did not find object",param_1);
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    FUN_146790ecd();
  }
  return uVar2;
}



// FUNCTION 146781011 FUN_146781011 body=12 status=ok
// SIG undefined FUN_146781011(void)

char FUN_146781011(longlong param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  
  if (param_1 == 0) {
    return '\x01';
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  cVar2 = FUN_14678942f(param_1,param_2);
  if (cVar2 == '\0') {
    if (param_3 != 0) {
      if (param_3 == 1) {
        FUN_1467a2796("Large heap did not find object",param_1);
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    FUN_146790ecd();
  }
  return cVar2;
}



// FUNCTION 14678101d FUN_14678101d body=635 status=ok
// SIG undefined FUN_14678101d(void)

undefined8 FUN_14678101d(ulonglong param_1,longlong param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar7 = *(ulonglong *)(lVar3 + 0x2a8);
  if (uVar7 != 1) {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x114) == '\0') {
      __dyn_tls_on_demand_init();
      uVar7 = *(ulonglong *)(lVar3 + 0x2a8);
    }
    if (uVar7 < 2) {
      FUN_14679dbf8(param_2,0);
    }
  }
  iVar6 = (**(code **)(param_2 + 0x408))(param_1);
  if (iVar6 == 0) {
    pcVar8 = (char *)(**(code **)(param_2 + 0x418))(param_1);
    if (pcVar8 == (char *)0x0) {
      if (param_1 == 0) {
        return 1;
      }
      uVar10 = FUN_146780f9e(param_1,param_2,param_3);
      return uVar10;
    }
    switch(*pcVar8) {
    case '\x01':
      if (*(char *)(param_2 + 0x410) == '\x01') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      goto LAB_146781229;
    case '\x02':
      if (*(char *)(param_2 + 0x410) == '\x01') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      goto LAB_146781245;
    case '\x03':
      param_2 = param_2 + 0x120;
      goto LAB_14678122d;
    case '\x04':
      param_2 = param_2 + 0x120;
      goto LAB_146781249;
    case '\x05':
      if (*(char *)(param_2 + 0x411) == '\x01') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      goto LAB_146781168;
    case '\x06':
      (**(code **)(param_2 + 0x340))(pcVar8,param_1);
      break;
    case '\a':
      (**(code **)(param_2 + 1000))(pcVar8,param_1);
      break;
    default:
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
  else {
    if (iVar6 == 2) {
      bVar1 = *(byte *)(param_2 + 0x38);
      lVar3 = *(longlong *)(param_2 + 0x58);
      pcVar4 = *(code **)(param_2 + 0x78);
      bVar2 = *(byte *)(param_2 + 0x410);
      if (((*(byte *)(param_2 + 0x208) & 1) == 0) || ((*(byte *)(param_2 + 0x411) & 1) == 0)) {
        if (((bVar1 & 1) == 0) || ((bVar2 & 1) == 0)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if ((int)POPCOUNT(lVar3) != 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        (*pcVar4)(-lVar3 & param_1);
      }
      else {
        lVar5 = *(longlong *)(param_2 + 0x228);
        if ((int)POPCOUNT(lVar5) != 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        pcVar8 = (char *)(**(code **)(param_2 + 0x248))(-lVar5 & param_1);
        if (((bVar1 & 1) == 0) || ((bVar2 & 1) == 0)) {
LAB_146781168:
          (**(code **)(param_2 + 0x298))(pcVar8,param_1);
          return 1;
        }
        if (lVar5 != lVar3) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if ((int)POPCOUNT(lVar3) != 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        pcVar9 = (char *)(*pcVar4)(-lVar3 & param_1);
        if (pcVar9 != pcVar8) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (*pcVar8 == '\x05') goto LAB_146781168;
        if (*pcVar8 != '\x01') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
      }
LAB_146781229:
      param_2 = param_2 + 0x38;
LAB_14678122d:
      uVar10 = 0;
    }
    else {
      if (iVar6 != 1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
LAB_146781245:
      param_2 = param_2 + 0x38;
LAB_146781249:
      uVar10 = 1;
    }
    FUN_146781298(param_1,param_2,uVar10);
  }
  return 1;
}



// FUNCTION 146781298 FUN_146781298 body=1246 status=ok
// SIG undefined FUN_146781298(void)

void FUN_146781298(ulonglong param_1,byte *param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  code *pcVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  PSRWLOCK SRWLock;
  byte bVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  byte bVar16;
  bool bVar17;
  ulonglong uVar18;
  char cVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  
  if ((*param_2 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  uVar11 = *(ulonglong *)(param_2 + 0x20);
  if ((int)POPCOUNT(uVar11) != 1) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  bVar2 = param_2[0x1c];
  uVar18 = *(ulonglong *)(param_2 + 0x28);
  iVar5 = *(int *)(param_2 + 0x68);
  uVar20 = *(uint *)(param_2 + 0x6c);
  bVar3 = param_2[0x78];
  uVar6 = *(ulonglong *)(param_2 + 0x80);
  bVar4 = param_2[0xb1];
  bVar16 = param_2[0xb2];
  bVar12 = param_2[0xb3];
  lVar9 = (**(code **)(param_2 + 0x40))(-uVar11 & param_1);
  if ((uVar20 == 1) || (*(longlong *)(lVar9 + 8) == 0)) {
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)FUN_146794d20(lVar9,0);
  }
  uVar14 = uVar11 >> (bVar2 + 5 & 0x3f);
  if ((int)POPCOUNT(uVar14) != 1) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  uVar14 = uVar14 - 1 & param_1 >> (bVar2 + 5 & 0x3f);
  lVar10 = lVar9 + 0x2c;
  uVar21 = *(uint *)(lVar9 + 0x2c + uVar14 * 4);
  uVar8 = (uint)(param_1 >> (bVar2 & 0x3f));
  if ((bVar4 & 1) != 0) {
    uVar15 = (ulonglong)bVar16;
    if ((uVar21 >> (uVar8 & 0x1f) & 1) == 0) {
      lVar10 = FUN_146795809();
      uVar15 = param_1;
    }
    bVar16 = (byte)uVar15;
  }
  uVar21 = uVar21 & ~(1 << (uVar8 & 0x1f));
  *(uint *)(lVar10 + uVar14 * 4) = uVar21;
  if (param_3 == 0) {
    bVar12 = bVar16;
  }
  if (((bVar12 & 1) == 0) || (uVar21 == 0)) {
    uVar14 = *(ulonglong *)(lVar9 + 0x20);
    if (param_3 == 1) {
      if ((uVar14 & 7) != 0) {
        uVar14 = uVar14 & 0xfffffffffffffff8;
        if (*(char *)(lVar9 + 1) == '\x01') {
          *(undefined1 *)(lVar9 + 2) = 1;
        }
        else {
          FUN_146791662((ulonglong)
                        ((uint)*(byte *)(uVar14 + 10) * 0x80000 + (uint)*(ushort *)(uVar14 + 8) * 8)
                        + DAT_14c80ad08);
        }
        *(ulonglong *)(lVar9 + 0x20) = uVar14;
      }
    }
    else {
      if (((uint)uVar14 & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      uVar15 = ((uVar11 - 1 & param_1) >> (bVar2 & 0x3f)) >> (bVar3 & 0x3f);
      if (uVar6 >> (bVar3 & 0x3f) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      uVar14 = (ulonglong)*(uint *)((uVar14 & 0xfffffffffffffff8) + 0x14 + uVar15 * 4);
      lVar13 = uVar14 * 8 + DAT_14c80ad08;
      if (uVar14 == 0) {
        lVar13 = 0;
      }
      if ((*(byte *)(lVar13 + 0x11) & 4) == 0) {
        FUN_146795935();
      }
    }
  }
  if (uVar18 < uVar11) {
    param_1 = uVar11 - 1 & param_1;
    uVar14 = *(ulonglong *)(lVar9 + 0x20);
    if ((uVar14 & 6) == 0) {
      uVar8 = *(uint *)(lVar9 + 4);
    }
    else {
      if (((uint)uVar14 & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      uVar15 = (param_1 >> (bVar2 & 0x3f)) >> (bVar3 & 0x3f);
      if (uVar6 >> (bVar3 & 0x3f) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      uVar14 = (ulonglong)*(uint *)((uVar14 & 0xfffffffffffffff8) + 0x14 + uVar15 * 4);
      lVar13 = DAT_14c80ad08 + uVar14 * 8;
      if (uVar14 == 0) {
        lVar13 = 0;
      }
      uVar8 = *(uint *)((ulonglong)
                        ((uint)*(byte *)(lVar13 + 0xd) * 0x80000 +
                        (uint)*(ushort *)(lVar13 + 0xb) * 8) + 0x20 + DAT_14c80ad08) & 0x7ffffff;
    }
    if (uVar8 != 0) {
      uVar14 = ((uVar8 + param_1) - 1) / uVar18;
      if (uVar11 / uVar18 <= uVar14) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      param_1 = param_1 / uVar18;
      if (param_1 <= uVar14) {
        lVar10 = lVar10 + (uVar6 + 0x1f >> 5) * 4;
        bVar22 = false;
        do {
          bVar17 = bVar22;
          cVar19 = *(char *)(lVar10 + param_1);
          if (cVar19 == '\0') {
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          if (cVar19 == -1) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          cVar19 = cVar19 + -1;
          *(char *)(lVar10 + param_1) = cVar19;
          param_1 = param_1 + 1;
          bVar22 = (bool)(bVar17 | cVar19 == '\0');
        } while (param_1 <= uVar14);
        if (bVar17 || cVar19 == '\0') {
          FUN_146795211(lVar9,1);
        }
      }
    }
  }
  if ((uVar20 & 0xfffffffe) == 4) {
    lVar10 = *(longlong *)(lVar9 + 0x18) - (ulonglong)*(uint *)(lVar9 + 4);
    if (lVar10 != 0) {
LAB_146781576:
      *(longlong *)(lVar9 + 0x18) = lVar10;
      goto LAB_14678157a;
    }
    if (*(longlong *)(lVar9 + -0x18) != 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    uVar11 = lVar9 - 0x30;
    if (iVar5 == 1) {
      uVar11 = *(ulonglong *)(lVar9 + -0x40);
    }
    if (uVar11 >> 0x30 != 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    lVar10 = *(longlong *)(&DAT_14c80b3a0 + (uVar11 >> 0x22) * 8);
    uVar18 = (ulonglong)((uint)(uVar11 >> 0x13) & 0x7fff);
    if (iVar5 == 1) {
      uVar20 = *(uint *)(lVar10 + uVar18 * 4);
      if ((uVar20 & 3) != 2) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      uVar11 = (ulonglong)(uVar20 & 0xfffffff8);
      if (DAT_14c80ad08 + uVar11 + 0x40 != lVar9) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      if ((uVar20 & 4) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      if (DAT_14c80ad08 + uVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      if (DAT_14c758498 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      *(uint *)(lVar10 + uVar18 * 4) = uVar20 & 0xfffffff8 | 2;
    }
    else if (iVar5 == 0) {
      if ((*(byte *)(lVar10 + uVar18 * 4) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      if ((uVar11 & 0x7c000) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      bVar2 = (byte)((uint)uVar11 >> 0xe) & 0x1f;
      do {
        uVar20 = *(uint *)(lVar10 + uVar18 * 4);
        uVar21 = uVar20 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        if (uVar20 == uVar21) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        puVar1 = (uint *)(lVar10 + uVar18 * 4);
        LOCK();
        bVar22 = uVar20 == *puVar1;
        if (bVar22) {
          *puVar1 = uVar21;
        }
        UNLOCK();
      } while (!bVar22);
    }
  }
  else {
    if (uVar21 != 0) goto LAB_14678157a;
    lVar10 = *(longlong *)(lVar9 + 0x18) + -1;
    if (lVar10 != 0) goto LAB_146781576;
  }
  FUN_146795211(lVar9,0);
LAB_14678157a:
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  return;
}



// FUNCTION 146781776 FUN_146781776 body=124 status=ok
// SIG undefined FUN_146781776(void)

void FUN_146781776(void *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  
  if (param_4 == 0) {
    memset(param_1,0,0x418);
  }
  else {
    if (param_2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (param_3 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    memset(param_1,0,0x418);
    param_2 = param_4 + 8;
    param_3 = 1;
  }
  *(undefined8 *)((longlong)param_1 + 0x418) = 0;
  *(undefined8 *)((longlong)param_1 + 0x420) = 0;
  *(longlong *)((longlong)param_1 + 0x428) = param_2;
  *(longlong *)((longlong)param_1 + 0x430) = param_3;
  *(longlong *)((longlong)param_1 + 0x438) = param_4;
  return;
}



// FUNCTION 1467817f2 FUN_1467817f2 body=77 status=ok
// SIG undefined FUN_1467817f2(void)

void FUN_1467817f2(longlong *param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (*param_1 != 0) {
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)invalidInstructionException();
    (*UNRECOVERED_JUMPTABLE)();
  }
  if (param_1[0x84] == 0) {
    if (param_2 == 0) {
      UNRECOVERED_JUMPTABLE = (code *)&LAB_1467803cf;
    }
    else {
      if (param_2 != 1) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)invalidInstructionException();
        (*UNRECOVERED_JUMPTABLE)();
      }
      UNRECOVERED_JUMPTABLE = FUN_1467803e9;
    }
                    /* WARNING: Could not recover jumptable at 0x000146781836. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1[0x81],param_1[0x82] << 5,0,0);
    return;
  }
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)invalidInstructionException();
  (*UNRECOVERED_JUMPTABLE)();
}



// FUNCTION 14678183f FUN_14678183f body=174 status=ok
// SIG undefined FUN_14678183f(void)

undefined8 FUN_14678183f(ulonglong *param_1,PSRWLOCK param_2,int param_3)

{
  ulonglong uVar1;
  BOOLEAN BVar2;
  undefined8 uVar3;
  undefined7 extraout_var;
  undefined7 uVar4;
  undefined7 extraout_var_00;
  ulonglong uVar5;
  bool bVar6;
  
  uVar1 = *param_1;
  if (uVar1 < 100) {
    uVar5 = param_1[0x86];
    do {
      bVar6 = uVar5 == 0;
      uVar5 = uVar5 - 1;
      if (bVar6) {
        if ((param_2 != (PSRWLOCK)&DAT_14c80b368) || (param_1[0x84] == 0)) {
          if ((param_1[0x86] == 0 && uVar1 == 0) && param_3 == 0) {
            AcquireSRWLockExclusive(param_2);
            uVar4 = extraout_var;
          }
          else {
            BVar2 = TryAcquireSRWLockExclusive(param_2);
            uVar4 = extraout_var_00;
            if (BVar2 == '\0') {
              if (param_1[0x87] != 0) {
                FUN_14678f2ed(param_1[0x87],param_2);
              }
              goto LAB_1467818cb;
            }
          }
          if (param_2 != (PSRWLOCK)&DAT_14c80b368) {
            return CONCAT71(uVar4,1);
          }
          param_1[0x84] = param_1[0x84] + 1;
          return CONCAT71(uVar4,1);
        }
        param_1[0x84] = param_1[0x84] + 1;
        break;
      }
    } while (*(PSRWLOCK *)(param_1[0x85] + uVar5 * 8) != param_2);
    uVar3 = CONCAT71((int7)(uVar1 >> 8),1);
  }
  else {
LAB_1467818cb:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1467818ed FUN_1467818ed body=129 status=ok
// SIG undefined FUN_1467818ed(void)

undefined8 FUN_1467818ed(ulonglong *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*param_1 < 100) &&
     ((*(longlong *)(param_2 + 4) == 0 ||
      (cVar1 = FUN_14678183f(param_1,*(longlong *)(param_2 + 4),param_3), cVar1 != '\0')))) {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = param_2[4];
    uStack_34 = param_2[5];
    uStack_30 = param_2[6];
    uStack_2c = param_2[7];
    FUN_14678196f(param_1,&local_48,param_3);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14678196f FUN_14678196f body=753 status=ok
// SIG undefined FUN_14678196f(void)

void FUN_14678196f(ulonglong *param_1,ulonglong *param_2,int param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  bool bVar3;
  code *pcVar4;
  void *_Dst;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  code *pcVar12;
  undefined1 auStack_b8 [40];
  code *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2[1] < *param_2) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  param_1[0x83] = param_1[0x83] + (param_2[1] - *param_2);
  if (param_3 == 0) {
    pcVar12 = (code *)&LAB_1467803cf;
    pcVar4 = FUN_14678038a;
  }
  else {
    if (param_3 != 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    pcVar12 = FUN_1467803e9;
    pcVar4 = FUN_1467803da;
  }
  uVar2 = *param_2;
  local_78 = param_2[3];
  local_88 = (undefined4)param_2[1];
  uStack_84 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_80 = (undefined4)param_2[2];
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar6 = *param_1;
  uVar8 = param_1[0x82];
  uVar5 = uVar8 + 0x20;
  if (uVar5 <= uVar6) {
    if (uVar6 != uVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar9 = 4;
    if (4 < uVar8 * 2) {
      uVar9 = uVar8 * 2;
    }
    if (uVar9 <= uVar8) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    _Dst = (void *)(*pcVar4)(uVar9 << 5,"pas_virtual_range_min_heap/outline_array",0,0);
    uVar5 = uVar9 + 0x20;
    if (uVar5 <= uVar6) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    local_90 = pcVar12;
    memset(_Dst,0,uVar9 << 5);
    if ((void *)param_1[0x81] == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      memcpy(_Dst,(void *)param_1[0x81],uVar6 * 0x20 - 0x400);
      uVar7 = param_1[0x81];
    }
    (*local_90)(uVar7,uVar8 << 5,0,0);
    param_1[0x81] = (ulonglong)_Dst;
    param_1[0x82] = uVar9;
  }
  if (uVar5 <= uVar6) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar5 = uVar6 + 1;
  if (uVar6 < 0x20) {
    param_1[uVar6 * 4 + 3] = 0;
    (param_1 + uVar6 * 4 + 3)[1] = 0;
    param_1[uVar6 * 4 + 1] = 0;
    (param_1 + uVar6 * 4 + 1)[1] = 0;
    *param_1 = uVar5;
    if (uVar6 != 0) goto LAB_146781b16;
    if (param_1[0x82] == 0xffffffffffffffe0) goto LAB_146781c57;
    uVar6 = 0;
  }
  else {
    uVar8 = param_1[0x81];
    puVar1 = (undefined8 *)((uVar8 - 0x3f0) + uVar6 * 0x20);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((uVar8 - 0x400) + uVar6 * 0x20);
    *puVar1 = 0;
    puVar1[1] = 0;
    *param_1 = uVar5;
LAB_146781b16:
    do {
      uVar8 = uVar5 >> 1;
      uVar6 = uVar8 - 1;
      uVar9 = param_1[0x82] + 0x20;
      if (uVar9 <= uVar6) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (uVar5 < 0x42) {
        puVar10 = param_1 + uVar6 * 4 + 1;
      }
      else {
        puVar10 = (ulonglong *)(uVar6 * 0x20 + param_1[0x81] + -0x400);
      }
      local_58 = puVar10[3];
      local_68 = puVar10[1];
      uStack_60 = puVar10[2];
      if (*puVar10 <= uVar2) {
        uVar6 = uVar5 - 1;
        goto LAB_146781bde;
      }
      uVar7 = uVar5 - 1;
      if (uVar9 <= uVar7) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (uVar5 < 0x21) {
        puVar11 = param_1 + uVar7 * 4 + 1;
      }
      else {
        puVar11 = (ulonglong *)(uVar7 * 0x20 + param_1[0x81] + -0x400);
      }
      *puVar11 = *puVar10;
      puVar11[1] = local_68;
      puVar11[2] = uStack_60;
      puVar11[3] = local_58;
      bVar3 = 3 < uVar5;
      uVar5 = uVar8;
    } while (bVar3);
    uVar9 = param_1[0x82] + 0x20;
LAB_146781bde:
    if (uVar9 <= uVar6) {
LAB_146781c57:
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (0x20 < uVar5) {
      param_1 = (ulonglong *)(param_1[0x81] + uVar6 * 0x20 + -0x400);
      goto LAB_146781bf5;
    }
  }
  param_1 = param_1 + uVar6 * 4 + 1;
LAB_146781bf5:
  *param_1 = uVar2;
  *(undefined4 *)(param_1 + 1) = local_88;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_84;
  *(undefined4 *)(param_1 + 2) = uStack_80;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_7c;
  param_1[3] = local_78;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146781c61 FUN_146781c61 body=117 status=ok
// SIG undefined FUN_146781c61(void)

undefined8 FUN_146781c61(undefined8 param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == 0) {
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    local_18 = param_2[4];
    uStack_14 = param_2[5];
    uStack_10 = param_2[6];
    uStack_c = param_2[7];
    uVar2 = FUN_1467818ed(local_28,&local_28,param_4);
  }
  else {
    if (param_3 != 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    local_18 = param_2[4];
    uStack_14 = param_2[5];
    uStack_10 = param_2[6];
    uStack_c = param_2[7];
    FUN_14678196f(local_28,&local_28,param_4);
    uVar2 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146781cd7 FUN_146781cd7 body=51 status=ok
// SIG undefined FUN_146781cd7(void)

void FUN_146781cd7(longlong param_1,PSRWLOCK param_2)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x430);
  do {
    bVar3 = lVar2 == 0;
    lVar2 = lVar2 + -1;
    if (bVar3) {
      if (param_2 != (PSRWLOCK)&DAT_14c80b368) {
                    /* WARNING: Could not recover jumptable at 0x000146781d01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive(param_2);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  } while (*(PSRWLOCK *)(*(longlong *)(param_1 + 0x428) + lVar2 * 8) != param_2);
  return;
}



// FUNCTION 146781d0a thunk_FUN_146781d0f body=5 status=ok
// SIG undefined thunk_FUN_146781d0f(void)

void thunk_FUN_146781d0f(ulonglong *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  PSRWLOCK SRWLock;
  code *pcVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auStack_f8 [40];
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_48;
  
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar8 = *param_1;
  if (uVar8 != 0) {
    puVar1 = param_1 + 1;
    uVar9 = uVar8;
    do {
      uStack_d0 = uVar8;
      if (param_1[0x82] == 0xffffffffffffffe0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uStack_c8 = *puVar1;
      uStack_c0 = param_1[2];
      uStack_b8 = param_1[3];
      uStack_b0 = param_1[4];
      uVar2 = uVar9 - 1;
      if (param_1[0x82] + 0x20 <= uVar2) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      if (uVar9 < 0x21) {
        puVar7 = puVar1 + uVar2 * 4;
        puVar10 = puVar1 + uVar2 * 4 + 1;
      }
      else {
        puVar7 = (ulonglong *)(param_1[0x81] + uVar2 * 0x20 + -0x400);
        puVar10 = (ulonglong *)(uVar2 * 0x20 + param_1[0x81] + -0x3f8);
      }
      uVar4 = *puVar7;
      uStack_98 = puVar10[2];
      uStack_a8 = *puVar10;
      uStack_a0 = puVar10[1];
      puVar7[2] = 0;
      puVar7[3] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      if (param_1[0x82] == 0xffffffffffffffe0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      param_1[3] = 0;
      param_1[4] = 0;
      *puVar1 = 0;
      param_1[2] = 0;
      *param_1 = uVar2;
      if (uVar9 == 1) {
        uVar9 = 0;
LAB_146781e1f:
        puVar7 = puVar1 + uVar9 * 4;
      }
      else {
        uVar9 = 1;
LAB_146781e4e:
        uVar6 = uVar9 * 2;
        uVar12 = uVar9 * 2 + 1;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        if (uVar6 < uVar2) {
          uVar13 = param_1[0x82] + 0x20;
          if (uVar13 <= uVar6) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if (uVar12 < 0x21) {
            puVar7 = puVar1 + uVar9 * 8;
          }
          else {
            puVar7 = (ulonglong *)(param_1[0x81] + uVar9 * 0x40 + -0x400);
          }
          uVar14 = *puVar7;
          uStack_58 = puVar7[3];
          uStack_68 = puVar7[1];
          uStack_60 = puVar7[2];
          bVar15 = uVar4 <= uVar14;
          if (uVar6 <= uVar2) goto LAB_146781eac;
          if (uVar4 <= uVar14) goto LAB_146782020;
LAB_146781f24:
          uVar6 = uVar9 - 1;
          if (uVar13 <= uVar6) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if (uVar9 < 0x21) {
            puVar7 = puVar1 + uVar6 * 4;
          }
          else {
            puVar7 = (ulonglong *)(uVar6 * 0x20 + param_1[0x81] + -0x400);
          }
          *puVar7 = uVar14;
          puVar10 = &uStack_68;
          uVar9 = uVar12;
LAB_146781f88:
          puVar7[3] = puVar10[2];
          uVar12 = puVar10[1];
          puVar7[1] = *puVar10;
          puVar7[2] = uVar12;
          goto LAB_146781e4e;
        }
        if (uVar6 <= uVar2) {
          bVar15 = true;
          uVar14 = 0;
LAB_146781eac:
          if (uVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar3 = uVar6 - 1;
          uVar13 = param_1[0x82] + 0x20;
          if (uVar13 <= uVar3) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if (uVar6 < 0x21) {
            puVar7 = puVar1 + uVar3 * 4;
          }
          else {
            puVar7 = (ulonglong *)(uVar3 * 0x20 + param_1[0x81] + -0x400);
          }
          uVar3 = *puVar7;
          uStack_78 = puVar7[3];
          uStack_88 = puVar7[1];
          uStack_80 = puVar7[2];
          if ((!bVar15) && (uVar4 <= uVar3 || uVar14 < uVar3)) goto LAB_146781f24;
          if (uVar4 <= uVar3) goto LAB_146782020;
          uVar12 = uVar9 - 1;
          if (uVar13 <= uVar12) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if (uVar9 < 0x21) {
            puVar7 = puVar1 + uVar12 * 4;
          }
          else {
            puVar7 = (ulonglong *)(uVar12 * 0x20 + param_1[0x81] + -0x400);
          }
          *puVar7 = uVar3;
          puVar10 = &uStack_88;
          uVar9 = uVar6;
          goto LAB_146781f88;
        }
        uVar13 = param_1[0x82] + 0x20;
LAB_146782020:
        uVar2 = uVar9 - 1;
        if (uVar13 <= uVar2) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if (uVar9 < 0x21) {
          puVar7 = puVar1 + uVar2 * 4;
        }
        else {
          puVar7 = (ulonglong *)(uVar2 * 0x20 + param_1[0x81] + -0x400);
        }
        *puVar7 = uVar4;
        puVar7[1] = uStack_a8;
        puVar7[2] = uStack_a0;
        puVar7[3] = uStack_98;
        uVar9 = *param_1;
        if (uVar9 == 0xffffffffffffffff) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          uStack_a8 = uStack_c8;
          uStack_a0 = uStack_c0;
          uStack_98 = uStack_b8;
          uStack_90 = uStack_b0;
          (*pcVar5)();
        }
        if (param_1[0x82] + 0x20 <= uVar9) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          uStack_a8 = uStack_c8;
          uStack_a0 = uStack_c0;
          uStack_98 = uStack_b8;
          uStack_90 = uStack_b0;
          (*pcVar5)();
        }
        if (uVar9 + 1 < 0x21) goto LAB_146781e1f;
        puVar7 = (ulonglong *)(uVar9 * 0x20 + param_1[0x81] + -0x400);
      }
      puVar7[2] = uStack_b8;
      puVar7[3] = uStack_b0;
      *puVar7 = uStack_c8;
      puVar7[1] = uStack_c0;
      uVar9 = *param_1;
      uStack_a8 = uStack_c8;
      uStack_a0 = uStack_c0;
      uStack_98 = uStack_b8;
      uStack_90 = uStack_b0;
    } while (uVar9 != 0);
    *param_1 = uVar8;
    do {
      uVar9 = uVar8 - 1;
      if (param_1[0x82] + 0x20 <= uVar9) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      if (uVar8 < 0x21) {
        puVar7 = puVar1 + uVar9 * 4;
      }
      else {
        puVar7 = (ulonglong *)(uVar9 * 0x20 + param_1[0x81] + -0x400);
      }
      uVar2 = *puVar7;
      lVar11 = uVar8 * 0x20 + -0x440;
      uVar12 = uVar8;
      uVar4 = puVar7[1];
      do {
        uVar13 = uVar4;
        uVar6 = uVar9;
        uStack_d0 = uVar8;
        if (uVar6 == 0) break;
        if (param_1[0x82] + 0x20 <= uVar8 - 2) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if (uVar6 + 1 < 0x22) {
          puVar10 = puVar1 + (uVar12 - 2) * 4;
        }
        else {
          puVar10 = (ulonglong *)(param_1[0x81] + lVar11);
        }
        uVar9 = *puVar10;
        uVar4 = puVar10[1];
        if (uVar4 < uVar9) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if (uVar13 < uVar2) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if ((uVar13 != uVar2) && (uVar9 != uVar4)) {
          if (uVar4 <= uVar9) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if ((uVar9 < uVar13) && (uVar2 < uVar4)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
        }
        if (uVar9 < uVar13) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if (uVar9 != uVar13) break;
        lVar11 = lVar11 + -0x20;
        uVar12 = uVar12 - 1;
        uVar9 = uVar6 - 1;
      } while ((int)puVar10[3] == (int)puVar7[3]);
      if (uVar13 < uVar2) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      FUN_14678db4f(uVar2,uVar13 - uVar2);
      if (uStack_d0 < uVar6 + 1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar8 = uVar6;
    } while (uVar6 != 0);
    uVar8 = *param_1;
joined_r0x0001467821e9:
    if (uVar8 != 0) {
      uVar9 = uVar8 - 1;
      if (param_1[0x82] + 0x20 <= uVar9) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      if (uVar8 < 0x21) {
        puVar7 = puVar1 + uVar9 * 4;
      }
      else {
        puVar7 = (ulonglong *)(param_1[0x81] + uVar9 * 0x20 + -0x400);
      }
      SRWLock = (PSRWLOCK)puVar7[2];
      uVar8 = uVar9;
      if (SRWLock != (PSRWLOCK)0x0) {
        uVar9 = param_1[0x86];
        do {
          bVar15 = uVar9 == 0;
          uVar9 = uVar9 - 1;
          if (bVar15) {
            if (SRWLock == (PSRWLOCK)&DAT_14c80b368) {
              if (param_1[0x84] == 0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
              uVar9 = param_1[0x84] - 1;
              param_1[0x84] = uVar9;
              if (uVar9 != 0) break;
            }
            ReleaseSRWLockExclusive(SRWLock);
            break;
          }
        } while (*(PSRWLOCK *)(param_1[0x85] + uVar9 * 8) != SRWLock);
      }
      goto joined_r0x0001467821e9;
    }
  }
  *param_1 = 0;
  param_1[0x83] = 0;
  if ((uStack_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146781d0f FUN_146781d0f body=1508 status=ok
// SIG undefined FUN_146781d0f(void)

void FUN_146781d0f(ulonglong *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  PSRWLOCK SRWLock;
  code *pcVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auStack_f8 [40];
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar8 = *param_1;
  if (uVar8 != 0) {
    puVar1 = param_1 + 1;
    uVar9 = uVar8;
    do {
      local_d0 = uVar8;
      if (param_1[0x82] == 0xffffffffffffffe0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      local_c8 = *puVar1;
      uStack_c0 = param_1[2];
      local_b8 = param_1[3];
      uStack_b0 = param_1[4];
      uVar2 = uVar9 - 1;
      if (param_1[0x82] + 0x20 <= uVar2) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      if (uVar9 < 0x21) {
        puVar7 = puVar1 + uVar2 * 4;
        puVar10 = puVar1 + uVar2 * 4 + 1;
      }
      else {
        puVar7 = (ulonglong *)(param_1[0x81] + uVar2 * 0x20 + -0x400);
        puVar10 = (ulonglong *)(uVar2 * 0x20 + param_1[0x81] + -0x3f8);
      }
      uVar4 = *puVar7;
      local_98 = puVar10[2];
      local_a8 = *puVar10;
      uStack_a0 = puVar10[1];
      puVar7[2] = 0;
      puVar7[3] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      if (param_1[0x82] == 0xffffffffffffffe0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      param_1[3] = 0;
      param_1[4] = 0;
      *puVar1 = 0;
      param_1[2] = 0;
      *param_1 = uVar2;
      if (uVar9 == 1) {
        uVar9 = 0;
LAB_146781e1f:
        puVar7 = puVar1 + uVar9 * 4;
      }
      else {
        uVar9 = 1;
LAB_146781e4e:
        uVar6 = uVar9 * 2;
        uVar12 = uVar9 * 2 + 1;
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        if (uVar6 < uVar2) {
          uVar13 = param_1[0x82] + 0x20;
          if (uVar13 <= uVar6) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if (uVar12 < 0x21) {
            puVar7 = puVar1 + uVar9 * 8;
          }
          else {
            puVar7 = (ulonglong *)(param_1[0x81] + uVar9 * 0x40 + -0x400);
          }
          uVar14 = *puVar7;
          local_58 = puVar7[3];
          local_68 = puVar7[1];
          uStack_60 = puVar7[2];
          bVar15 = uVar4 <= uVar14;
          if (uVar6 <= uVar2) goto LAB_146781eac;
          if (uVar4 <= uVar14) goto LAB_146782020;
LAB_146781f24:
          uVar6 = uVar9 - 1;
          if (uVar13 <= uVar6) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if (uVar9 < 0x21) {
            puVar7 = puVar1 + uVar6 * 4;
          }
          else {
            puVar7 = (ulonglong *)(uVar6 * 0x20 + param_1[0x81] + -0x400);
          }
          *puVar7 = uVar14;
          puVar10 = &local_68;
          uVar9 = uVar12;
LAB_146781f88:
          puVar7[3] = puVar10[2];
          uVar12 = puVar10[1];
          puVar7[1] = *puVar10;
          puVar7[2] = uVar12;
          goto LAB_146781e4e;
        }
        if (uVar6 <= uVar2) {
          bVar15 = true;
          uVar14 = 0;
LAB_146781eac:
          if (uVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar3 = uVar6 - 1;
          uVar13 = param_1[0x82] + 0x20;
          if (uVar13 <= uVar3) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if (uVar6 < 0x21) {
            puVar7 = puVar1 + uVar3 * 4;
          }
          else {
            puVar7 = (ulonglong *)(uVar3 * 0x20 + param_1[0x81] + -0x400);
          }
          uVar3 = *puVar7;
          local_78 = puVar7[3];
          local_88 = puVar7[1];
          uStack_80 = puVar7[2];
          if ((!bVar15) && (uVar4 <= uVar3 || uVar14 < uVar3)) goto LAB_146781f24;
          if (uVar4 <= uVar3) goto LAB_146782020;
          uVar12 = uVar9 - 1;
          if (uVar13 <= uVar12) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if (uVar9 < 0x21) {
            puVar7 = puVar1 + uVar12 * 4;
          }
          else {
            puVar7 = (ulonglong *)(uVar12 * 0x20 + param_1[0x81] + -0x400);
          }
          *puVar7 = uVar3;
          puVar10 = &local_88;
          uVar9 = uVar6;
          goto LAB_146781f88;
        }
        uVar13 = param_1[0x82] + 0x20;
LAB_146782020:
        uVar2 = uVar9 - 1;
        if (uVar13 <= uVar2) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if (uVar9 < 0x21) {
          puVar7 = puVar1 + uVar2 * 4;
        }
        else {
          puVar7 = (ulonglong *)(uVar2 * 0x20 + param_1[0x81] + -0x400);
        }
        *puVar7 = uVar4;
        puVar7[1] = local_a8;
        puVar7[2] = uStack_a0;
        puVar7[3] = local_98;
        uVar9 = *param_1;
        if (uVar9 == 0xffffffffffffffff) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          local_a8 = local_c8;
          uStack_a0 = uStack_c0;
          local_98 = local_b8;
          uStack_90 = uStack_b0;
          (*pcVar5)();
        }
        if (param_1[0x82] + 0x20 <= uVar9) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          local_a8 = local_c8;
          uStack_a0 = uStack_c0;
          local_98 = local_b8;
          uStack_90 = uStack_b0;
          (*pcVar5)();
        }
        if (uVar9 + 1 < 0x21) goto LAB_146781e1f;
        puVar7 = (ulonglong *)(uVar9 * 0x20 + param_1[0x81] + -0x400);
      }
      puVar7[2] = local_b8;
      puVar7[3] = uStack_b0;
      *puVar7 = local_c8;
      puVar7[1] = uStack_c0;
      uVar9 = *param_1;
      local_a8 = local_c8;
      uStack_a0 = uStack_c0;
      local_98 = local_b8;
      uStack_90 = uStack_b0;
    } while (uVar9 != 0);
    *param_1 = uVar8;
    do {
      uVar9 = uVar8 - 1;
      if (param_1[0x82] + 0x20 <= uVar9) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      if (uVar8 < 0x21) {
        puVar7 = puVar1 + uVar9 * 4;
      }
      else {
        puVar7 = (ulonglong *)(uVar9 * 0x20 + param_1[0x81] + -0x400);
      }
      uVar2 = *puVar7;
      lVar11 = uVar8 * 0x20 + -0x440;
      uVar12 = uVar8;
      uVar4 = puVar7[1];
      do {
        uVar13 = uVar4;
        uVar6 = uVar9;
        local_d0 = uVar8;
        if (uVar6 == 0) break;
        if (param_1[0x82] + 0x20 <= uVar8 - 2) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if (uVar6 + 1 < 0x22) {
          puVar10 = puVar1 + (uVar12 - 2) * 4;
        }
        else {
          puVar10 = (ulonglong *)(param_1[0x81] + lVar11);
        }
        uVar9 = *puVar10;
        uVar4 = puVar10[1];
        if (uVar4 < uVar9) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if (uVar13 < uVar2) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if ((uVar13 != uVar2) && (uVar9 != uVar4)) {
          if (uVar4 <= uVar9) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if ((uVar9 < uVar13) && (uVar2 < uVar4)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
        }
        if (uVar9 < uVar13) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if (uVar9 != uVar13) break;
        lVar11 = lVar11 + -0x20;
        uVar12 = uVar12 - 1;
        uVar9 = uVar6 - 1;
      } while ((int)puVar10[3] == (int)puVar7[3]);
      if (uVar13 < uVar2) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      FUN_14678db4f(uVar2,uVar13 - uVar2);
      if (local_d0 < uVar6 + 1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar8 = uVar6;
    } while (uVar6 != 0);
    uVar8 = *param_1;
joined_r0x0001467821e9:
    if (uVar8 != 0) {
      uVar9 = uVar8 - 1;
      if (param_1[0x82] + 0x20 <= uVar9) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      if (uVar8 < 0x21) {
        puVar7 = puVar1 + uVar9 * 4;
      }
      else {
        puVar7 = (ulonglong *)(param_1[0x81] + uVar9 * 0x20 + -0x400);
      }
      SRWLock = (PSRWLOCK)puVar7[2];
      uVar8 = uVar9;
      if (SRWLock != (PSRWLOCK)0x0) {
        uVar9 = param_1[0x86];
        do {
          bVar15 = uVar9 == 0;
          uVar9 = uVar9 - 1;
          if (bVar15) {
            if (SRWLock == (PSRWLOCK)&DAT_14c80b368) {
              if (param_1[0x84] == 0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
              uVar9 = param_1[0x84] - 1;
              param_1[0x84] = uVar9;
              if (uVar9 != 0) break;
            }
            ReleaseSRWLockExclusive(SRWLock);
            break;
          }
        } while (*(PSRWLOCK *)(param_1[0x85] + uVar9 * 8) != SRWLock);
      }
      goto joined_r0x0001467821e9;
    }
  }
  *param_1 = 0;
  param_1[0x83] = 0;
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467822f4 FUN_1467822f4 body=1458 status=ok
// SIG undefined FUN_1467822f4(void)

void FUN_1467822f4(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  BOOLEAN BVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  uint local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar1 = *(byte *)(param_2 + 0x38);
  bVar2 = *(byte *)(param_2 + 0x54);
  lVar6 = *(longlong *)(param_2 + 0xb8);
  bVar3 = *(byte *)(param_2 + 0x120);
  lVar9 = *(longlong *)(param_2 + 0x1a0);
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar5 != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (DAT_14c80b080 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (DAT_14c758530 != 8) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (*(int *)(param_1 + 0x18) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_58 = param_1;
  local_50 = param_2;
  if ((bVar3 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if ((bVar1 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar14 = lVar9 + 0x3f;
  uVar13 = (uint)((uVar14 >> 3) + 0x40 >> 3);
  if ((uVar14 & 0xffffffffffffffc0) < 0x81) {
    uVar13 = 10;
  }
  uVar14 = lVar6 + 0x3f;
  local_48 = (uint)((uVar14 >> 3) + 0x40 >> 3);
  if ((uVar14 & 0xffffffffffffffc0) < 0x81) {
    local_48 = 10;
  }
  if (local_48 <= uVar13) {
    local_48 = uVar13;
  }
  local_44 = 0;
  lVar6 = 1L << (bVar2 & 0x3f);
  if (lVar6 == 0x20) {
    FUN_1467828a7(&local_58,0,1,0x20);
    FUN_1467828a7(&local_58,2,2,0x40);
    FUN_1467828a7(&local_58,3,3,0x60);
    FUN_1467828a7(&local_58,4,4,0x80);
    FUN_1467828a7(&local_58,5,5,0xa0);
    FUN_1467828a7(&local_58,6,6,0xc0);
    FUN_1467828a7(&local_58,7,7,0xe0);
    FUN_1467828a7(&local_58,8,8,0x100);
    FUN_1467828a7(&local_58,9,10,0x140);
    FUN_1467828a7(&local_58,0xb,0xc,0x180);
    uVar12 = 0x1c0;
    uVar8 = 0xd;
    uVar11 = 0xe;
  }
  else if (lVar6 == 0x10) {
    FUN_1467828a7(&local_58,0,1,0x10);
    FUN_1467828a7(&local_58,2,2,0x20);
    FUN_1467828a7(&local_58,3,3,0x30);
    FUN_1467828a7(&local_58,4,4,0x40);
    FUN_1467828a7(&local_58,5,5,0x50);
    FUN_1467828a7(&local_58,6,6,0x60);
    FUN_1467828a7(&local_58,7,8,0x80);
    FUN_1467828a7(&local_58,9,10,0xa0);
    FUN_1467828a7(&local_58,0xb,0xc,0xc0);
    FUN_1467828a7(&local_58,0xd,0xe,0xe0);
    FUN_1467828a7(&local_58,0xf,0x10,0x100);
    FUN_1467828a7(&local_58,0x11,0x13,0x130);
    FUN_1467828a7(&local_58,0x14,0x16,0x160);
    uVar12 = 0x1a0;
    uVar8 = 0x17;
    uVar11 = 0x1a;
  }
  else {
    if (lVar6 != 8) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    FUN_1467828a7(&local_58,0,1,8);
    FUN_1467828a7(&local_58,2,2,0x10);
    FUN_1467828a7(&local_58,3,3,0x18);
    FUN_1467828a7(&local_58,4,4,0x20);
    FUN_1467828a7(&local_58,5,5,0x28);
    FUN_1467828a7(&local_58,6,6,0x30);
    FUN_1467828a7(&local_58,7,8,0x40);
    FUN_1467828a7(&local_58,9,10,0x50);
    FUN_1467828a7(&local_58,0xb,0xc,0x60);
    FUN_1467828a7(&local_58,0xd,0x10,0x80);
    FUN_1467828a7(&local_58,0x11,0x14,0xa0);
    FUN_1467828a7(&local_58,0x15,0x18,0xc0);
    FUN_1467828a7(&local_58,0x19,0x1c,0xe0);
    FUN_1467828a7(&local_58,0x1d,0x20,0x100);
    uVar12 = 0x130;
    uVar8 = 0x21;
    uVar11 = 0x26;
  }
  FUN_1467828a7(&local_58,uVar8,uVar11,uVar12);
  if (DAT_14c80b030 != (uint *)0x0) {
    lVar6 = 0;
    if (7 < (ulonglong)*DAT_14c80b030) {
      lVar6 = DAT_14c80ad08;
    }
    uVar14 = lVar6 + (ulonglong)*DAT_14c80b030;
    if (uVar14 != 0) {
      lVar9 = 0;
      lVar6 = DAT_14c80ad08;
      puVar10 = DAT_14c80b030;
      do {
        if ((uVar14 & 3) == 0) {
          FUN_14679753a();
          lVar6 = DAT_14c80ad08;
        }
        lVar7 = 0;
        if (7 < (ulonglong)puVar10[lVar9 + 1]) {
          lVar7 = lVar6;
        }
        uVar14 = lVar7 + (ulonglong)puVar10[lVar9 + 1];
        if (uVar14 == 0) {
          puVar10 = *(uint **)(puVar10 + 0x102);
          if (puVar10 == (uint *)0x0) break;
          lVar9 = lVar6;
          if ((ulonglong)*puVar10 < 8) {
            lVar9 = 0;
          }
          uVar14 = lVar9 + (ulonglong)*puVar10;
          lVar9 = 0;
        }
        else {
          lVar9 = lVar9 + 1;
        }
      } while (uVar14 != 0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467828a7 FUN_1467828a7 body=626 status=ok
// SIG undefined FUN_1467828a7(void)

void FUN_1467828a7(undefined8 *param_1,uint param_2,uint param_3,ulonglong param_4)

{
  code *pcVar1;
  BOOLEAN BVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  if ((ulonglong)param_3 << (*(byte *)(param_1[1] + 0x54) & 0x3f) != param_4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_3 + 1 <= param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (*(uint *)((longlong)param_1 + 0x14) != param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar4 = FUN_14679ffad();
  if (lVar4 == 0) {
    if (param_2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  else {
    uVar5 = FUN_14679ffad();
    lVar4 = FUN_14679fffe(uVar5);
    if (param_4 <= (*(uint *)(lVar4 + 0x20) & 0x7ffffff)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  iVar11 = 0;
  lVar4 = 0;
  do {
    lVar6 = (ulonglong)(param_2 + iVar11) * (ulonglong)*(uint *)(param_1 + 2);
    uVar3 = (uint)lVar6;
    if ((int)((ulonglong)lVar6 >> 0x20) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar9 = uVar3 + 8;
    if (0xfffffff7 < uVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar9 < DAT_14c758530) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    DAT_14c758530 = uVar9;
    if (iVar11 == 0) {
      if (lVar4 != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      lVar4 = FUN_1467928b4(*param_1,param_4,1,1,param_1[1],0,0);
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar3 = FUN_14679944f(lVar4);
      lVar6 = param_1[1];
      if ((*(byte *)(lVar6 + 0x120) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if ((*(byte *)(lVar6 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar8 = *(longlong *)(lVar6 + 0x1a0) + 0x3f;
      uVar7 = (uint)((uVar8 >> 3) + 0x40 >> 3);
      if ((uVar8 & 0xffffffffffffffc0) < 0x81) {
        uVar7 = 10;
      }
      uVar8 = *(longlong *)(lVar6 + 0xb8) + 0x3f;
      uVar10 = (uint)((uVar8 >> 3) + 0x40 >> 3);
      if ((uVar8 & 0xffffffffffffffc0) < 0x81) {
        uVar10 = 10;
      }
      if (uVar10 <= uVar7) {
        uVar10 = uVar7;
      }
      if (uVar10 < uVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if ((*(uint *)(lVar4 + 0x20) & 0x7ffffff) != param_4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      FUN_14679758b(lVar4);
      if (*(uint *)(lVar4 + 0x2c) != uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    else {
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar3 = FUN_14679fe73(lVar4);
      if (uVar3 != uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar5 = FUN_14679ffad();
      lVar6 = FUN_14679fffe(uVar5);
      if (lVar6 != lVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar3 = FUN_1467a00d6(uVar5);
      if (uVar3 != uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if ((ulonglong)(*(int *)(param_1 + 2) * param_2) + 8 != (ulonglong)*(uint *)(lVar4 + 0x2c)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    iVar11 = iVar11 + 1;
    if ((param_3 - param_2) + 1 == iVar11) {
      *(uint *)((longlong)param_1 + 0x14) = param_3 + 1;
      return;
    }
  } while( true );
}



// FUNCTION 146782b19 FUN_146782b19 body=3 status=ok
// SIG undefined FUN_146782b19(void)

undefined1 FUN_146782b19(void)

{
  return 1;
}



// FUNCTION 146782b1c FUN_146782b1c body=121 status=ok
// SIG undefined FUN_146782b1c(void)

longlong * FUN_146782b1c(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_14678d79a();
  if (*param_1 != 0) {
    local_38 = param_1[2];
    local_30 = param_1[5] + param_1[4];
    if (local_30 < local_38) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    FUN_146782b96(&DAT_14c80ad38);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146782b96 FUN_146782b96 body=354 status=ok
// SIG undefined FUN_146782b96(void)

void FUN_146782b96(uint *param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  BOOLEAN BVar3;
  uint uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (*param_2 == param_2[1]) {
    return;
  }
  puVar7 = (undefined4 *)((ulonglong)*param_1 * 8 + DAT_14c80ad08);
  if (puVar7 == (undefined4 *)0x0 || (ulonglong)*param_1 == 0) {
    uVar8 = 0;
    puVar5 = (undefined4 *)FUN_14678871b(0xa8,"pas_enumerable_range_list_chunk",0);
  }
  else {
    uVar4 = puVar7[1];
    if (uVar4 < 10) goto LAB_146782c48;
    if (uVar4 != 10) {
                    /* WARNING: Subroutine does not return */
      FUN_1467a2725("ThirdParty\\libpas\\src\\libpas\\pas_enumerable_range_list.c",0x32,
                    "void __cdecl pas_enumerable_range_list_append(pas_enumerable_range_list *, pas_range)"
                    ,"!chunk || chunk->num_entries == PAS_ENUMERABLE_RANGE_LIST_CHUNK_SIZE");
    }
    puVar5 = (undefined4 *)FUN_14678871b(0xa8,"pas_enumerable_range_list_chunk",0);
    uVar6 = (longlong)puVar7 - DAT_14c80ad08;
    if (DAT_14c758498 <= uVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar6 < 8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar8 = (undefined4)(uVar6 >> 3);
  }
  *puVar5 = uVar8;
  puVar5[1] = 0;
  if (puVar5 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar6 = (longlong)puVar5 - DAT_14c80ad08;
    if (DAT_14c758498 <= uVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar6 < 8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar4 = (uint)(uVar6 >> 3);
  }
  *param_1 = uVar4;
  uVar4 = puVar5[1];
  puVar7 = puVar5;
  if (9 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_1467a2725("ThirdParty\\libpas\\src\\libpas\\pas_enumerable_range_list.c",0x3e,
                  "void __cdecl pas_enumerable_range_list_append(pas_enumerable_range_list *, pas_range)"
                  ,"chunk->num_entries < PAS_ENUMERABLE_RANGE_LIST_CHUNK_SIZE");
  }
LAB_146782c48:
  lVar2 = param_2[1];
  *(longlong *)(puVar7 + (ulonglong)uVar4 * 4 + 2) = *param_2;
  *(longlong *)((longlong)(puVar7 + (ulonglong)uVar4 * 4 + 2) + 8) = lVar2;
  puVar7[1] = puVar7[1] + 1;
  return;
}



// FUNCTION 146782cf8 thunk_FUN_146782e05 body=5 status=ok
// SIG undefined thunk_FUN_146782e05(void)

longlong thunk_FUN_146782e05(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [40];
  undefined8 uStack_70;
  undefined8 uStack_68;
  longlong *plStack_60;
  longlong lStack_58;
  longlong *plStack_50;
  longlong lStack_48;
  longlong lStack_38;
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = param_2 + 7U & 0xfffffffffffffff8;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    lVar3 = plVar2[2];
    uVar1 = plVar2[1] - lVar3;
    if (uVar4 <= uVar1) goto LAB_146782ec3;
  }
  uStack_70 = 1;
  uStack_68 = 0;
  FUN_14678d79a(&plStack_60,uVar4 + 0x18,&uStack_70,1);
  if (plStack_60 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1467a2725("ThirdParty\\libpas\\src\\libpas\\pas_enumerator_region.c",0x3a,
                  "void *__cdecl pas_enumerator_region_allocate(pas_enumerator_region **, size_t)",
                  "allocation_result.result");
  }
  if (plStack_60 != plStack_50) {
                    /* WARNING: Subroutine does not return */
    FUN_1467a2725("ThirdParty\\libpas\\src\\libpas\\pas_enumerator_region.c",0x3b,
                  "void *__cdecl pas_enumerator_region_allocate(pas_enumerator_region **, size_t)",
                  "allocation_result.result == allocation_result.left_padding");
  }
  if (lStack_48 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1467a2725("ThirdParty\\libpas\\src\\libpas\\pas_enumerator_region.c",0x3c,
                  "void *__cdecl pas_enumerator_region_allocate(pas_enumerator_region **, size_t)",
                  "!allocation_result.left_padding_size");
  }
  *plStack_60 = (longlong)plVar2;
  plStack_60[1] = lStack_58 + lStack_38 + -0x18;
  plStack_60[2] = 0;
  *param_1 = plStack_60;
  lVar3 = plStack_60[2];
  uVar1 = plStack_60[1] - lVar3;
  plVar2 = plStack_60;
LAB_146782ec3:
  if (uVar1 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_1467a2725("ThirdParty\\libpas\\src\\libpas\\pas_enumerator_region.c",0x4a,
                  "void *__cdecl pas_enumerator_region_allocate(pas_enumerator_region **, size_t)",
                  "region->size - region->offset >= size");
  }
  plVar2[2] = uVar4 + lVar3;
  if ((uStack_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (longlong)plVar2 + lVar3 + 0x18;
}



// FUNCTION 146782cfd FUN_146782cfd body=108 status=ok
// SIG undefined FUN_146782cfd(void)

ulonglong FUN_146782cfd(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  if (7 < param_2) {
    uVar1 = *(ulonglong *)(param_1 + 0x28);
    if (param_2 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1467a2725("ThirdParty\\libpas\\src\\libpas\\pas_enumerator.c",0xbf,
                    "void *__cdecl pas_enumerator_read_compact(pas_enumerator *, void *)",
                    "remote_address >= (void*)((uintptr_t)enumerator->compact_heap_remote_base)");
    }
    if (*(longlong *)(param_1 + 0x38) + uVar1 <= param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_1467a2725("ThirdParty\\libpas\\src\\libpas\\pas_enumerator.c",0xc1,
                    "void *__cdecl pas_enumerator_read_compact(pas_enumerator *, void *)",
                    "remote_address < (void*)((uintptr_t)enumerator->compact_heap_remote_base + enumerator->compact_heap_size)"
                   );
    }
    param_2 = (param_2 - uVar1) + *(longlong *)(param_1 + 0x30);
  }
  return param_2;
}



// FUNCTION 146782d6a FUN_146782d6a body=154 status=ok
// SIG undefined FUN_146782d6a(void)

longlong FUN_146782d6a(longlong param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1467a2725("ThirdParty\\libpas\\src\\libpas\\pas_enumerator.c",0xcd,
                  "void *__cdecl pas_enumerator_read(pas_enumerator *, void *, size_t)",
                  "remote_address");
  }
  uVar1 = *(longlong *)(param_1 + 0x38) + *(ulonglong *)(param_1 + 0x28);
  if (uVar1 <= param_2 || param_2 < *(ulonglong *)(param_1 + 0x28)) {
    if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000146782da6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (**(code **)(param_1 + 0x58))();
      return lVar2;
    }
    return param_1 + 0x48;
  }
  if (param_3 + param_2 <= uVar1) {
    lVar2 = FUN_146782cfd();
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1467a2725("ThirdParty\\libpas\\src\\libpas\\pas_enumerator.c",0xd4,
                "void *__cdecl pas_enumerator_read(pas_enumerator *, void *, size_t)",
                "(uintptr_t)remote_address + size <= (uintptr_t)compact_heap_end");
}



// FUNCTION 146782e05 FUN_146782e05 body=371 status=ok
// SIG undefined FUN_146782e05(void)

longlong FUN_146782e05(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = param_2 + 7U & 0xfffffffffffffff8;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    lVar3 = plVar2[2];
    uVar1 = plVar2[1] - lVar3;
    if (uVar4 <= uVar1) goto LAB_146782ec3;
  }
  local_70 = 1;
  local_68 = 0;
  FUN_14678d79a(&local_60,uVar4 + 0x18,&local_70,1);
  if (local_60 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1467a2725("ThirdParty\\libpas\\src\\libpas\\pas_enumerator_region.c",0x3a,
                  "void *__cdecl pas_enumerator_region_allocate(pas_enumerator_region **, size_t)",
                  "allocation_result.result");
  }
  if (local_60 != local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_1467a2725("ThirdParty\\libpas\\src\\libpas\\pas_enumerator_region.c",0x3b,
                  "void *__cdecl pas_enumerator_region_allocate(pas_enumerator_region **, size_t)",
                  "allocation_result.result == allocation_result.left_padding");
  }
  if (local_48 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1467a2725("ThirdParty\\libpas\\src\\libpas\\pas_enumerator_region.c",0x3c,
                  "void *__cdecl pas_enumerator_region_allocate(pas_enumerator_region **, size_t)",
                  "!allocation_result.left_padding_size");
  }
  *local_60 = (longlong)plVar2;
  local_60[1] = local_58 + local_38 + -0x18;
  local_60[2] = 0;
  *param_1 = local_60;
  lVar3 = local_60[2];
  uVar1 = local_60[1] - lVar3;
  plVar2 = local_60;
LAB_146782ec3:
  if (uVar1 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_1467a2725("ThirdParty\\libpas\\src\\libpas\\pas_enumerator_region.c",0x4a,
                  "void *__cdecl pas_enumerator_region_allocate(pas_enumerator_region **, size_t)",
                  "region->size - region->offset >= size");
  }
  plVar2[2] = uVar4 + lVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (longlong)plVar2 + lVar3 + 0x18;
}



// FUNCTION 146782f7a FUN_146782f7a body=37 status=ok
// SIG undefined FUN_146782f7a(void)

void FUN_146782f7a(void)

{
  code *pcVar1;
  longlong lVar2;
  
  lVar2 = FUN_14678d394();
  if (lVar2 != 0) {
    if (DAT_14c80ad3c == '\0') {
      DAT_14c80ad3c = '\x01';
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 146782f9f FUN_146782f9f body=210 status=ok
// SIG undefined FUN_146782f9f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146782f9f(undefined4 *param_1,ulonglong param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  *param_1 = 0;
  if (param_2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  param_1[1] = (int)param_2;
  *(undefined2 *)(param_1 + 2) = 1;
  auVar3 = _DAT_149931e80;
  if ((param_2 & 0x3fff) == 0) {
    if (param_2 != 0) {
      param_2 = param_2 >> 0xe;
      lVar1 = param_2 - 1;
      auVar6._8_4_ = (int)lVar1;
      auVar6._0_8_ = lVar1;
      auVar6._12_4_ = (int)((ulonglong)lVar1 >> 0x20);
      puVar4 = (undefined8 *)(param_1 + param_2 * 2 + 2);
      uVar5 = 0;
      auVar7 = pmovsxbq(in_XMM1,0x100);
      auVar6 = auVar6 ^ _DAT_149931e80;
      do {
        if ((bool)(~(auVar6._0_8_ < (longlong)(uVar5 ^ auVar3._0_8_)) & 1)) {
          *puVar4 = 8;
        }
        auVar8._8_4_ = (int)uVar5;
        auVar8._0_8_ = uVar5;
        auVar8._12_4_ = (int)(uVar5 >> 0x20);
        if ((longlong)((auVar8._8_8_ | auVar7._8_8_) ^ auVar3._8_8_) <= auVar6._8_8_) {
          puVar4[-1] = 8;
        }
        uVar5 = uVar5 + 2;
        puVar4 = puVar4 + -2;
      } while (((int)param_2 + 1U & 0x7fffe) != uVar5);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



// FUNCTION 146783071 FUN_146783071 body=606 status=ok
// SIG undefined FUN_146783071(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_146783071(uint *param_1,longlong param_2,ulonglong param_3,longlong param_4,
                      uint param_5)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  BOOLEAN BVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar5 != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar1 = param_1[1];
  uVar12 = (ulonglong)uVar1;
  if ((uVar1 & 0x3fff) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if ((param_5 & 0xfffffffe) != 6) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if ((param_3 != 0) && (uVar2 = *param_1, 7 < uVar12 - uVar2 && uVar2 < uVar1)) {
    if ((int)POPCOUNT(param_4) != 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar7 = -param_4 & (ulonglong)uVar2 + param_4 + 7;
    if (param_3 <= uVar12 - uVar7 && uVar7 < uVar12) {
      if ((char)param_1[2] == '\0') {
        if (DAT_14c80aed0 == 0) {
          DAT_14c80aed0 = FUN_14678d6e8();
        }
        lVar10 = DAT_14c80aed0;
        if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar1 = *param_1;
        uVar2 = param_1[1];
        if (DAT_14c80aed0 == 0) {
          DAT_14c80aed0 = FUN_14678d6e8();
        }
        if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if ((DAT_14c80aed0 - 1U & (ulonglong)uVar2 + param_2) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar12 = -lVar10 & (param_2 + lVar10 + (ulonglong)uVar1) - 1;
        FUN_14678d9b9(uVar12,((ulonglong)uVar2 + param_2) - uVar12,1);
        *(undefined1 *)(param_1 + 2) = 1;
      }
      *(undefined1 *)((longlong)param_1 + 9) = 0;
      uVar9 = uVar7 - 8 >> 0xe;
      uVar6 = (uVar7 + param_3) - 1 >> 0xe;
      uVar12 = *(ulonglong *)(param_1 + uVar9 * 2 + 4) >> 3;
      if (*(ulonglong *)(param_1 + uVar9 * 2 + 4) >> 3 <=
          *(ulonglong *)(param_1 + uVar6 * 2 + 4) >> 3) {
        uVar12 = *(ulonglong *)(param_1 + uVar6 * 2 + 4) >> 3;
      }
      lVar10 = uVar12 * 8 + 2;
      *(longlong *)(param_1 + uVar9 * 2 + 4) = lVar10;
      *(longlong *)(param_1 + uVar6 * 2 + 4) = lVar10;
      auVar4 = _DAT_149931e80;
      if (uVar9 + 1 < uVar6) {
        uVar8 = uVar12 * 8 | 1;
        lVar10 = ~uVar9 + uVar6 + -1;
        auVar13._8_4_ = (int)lVar10;
        auVar13._0_8_ = lVar10;
        auVar13._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
        uVar11 = 0;
        auVar14 = pmovsxbq(in_XMM1,0x100);
        auVar13 = auVar13 ^ _DAT_149931e80;
        do {
          if ((bool)(~(auVar13._0_8_ < (longlong)(uVar11 ^ auVar4._0_8_)) & 1)) {
            *(ulonglong *)(param_1 + uVar9 * 2 + uVar11 * 2 + 6) = uVar8;
          }
          auVar15._8_4_ = (int)uVar11;
          auVar15._0_8_ = uVar11;
          auVar15._12_4_ = (int)(uVar11 >> 0x20);
          if ((longlong)((auVar15._8_8_ | auVar14._8_8_) ^ auVar4._8_8_) <= auVar13._8_8_) {
            *(ulonglong *)(param_1 + uVar9 * 2 + uVar11 * 2 + 8) = uVar8;
          }
          uVar11 = uVar11 + 2;
        } while ((uVar6 - uVar9 & 0xfffffffffffffffe) != uVar11);
      }
      if (uVar7 + param_3 >> 0x20 == 0) {
        *param_1 = (uint)(uVar7 + param_3);
        *(ulonglong *)(param_2 + -8 + uVar7) = uVar12;
        return param_2 + uVar7;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
                    /* WARNING: Read-only address (ram,0x000149931e80) is written */
  return 0;
}



// FUNCTION 1467832cf FUN_1467832cf body=45 status=ok
// SIG undefined FUN_1467832cf(void)

void FUN_1467832cf(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  longlong lVar2;
  
  lVar2 = FUN_146783071();
  if (param_3 == 0 || lVar2 != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1467832fc FUN_1467832fc body=287 status=ok
// SIG undefined FUN_1467832fc(void)

undefined8 FUN_1467832fc(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar8 = (param_3 - param_2) - 8U >> 0xe;
  uVar7 = (param_4 + (param_3 - param_2)) - 1U >> 0xe;
  uVar5 = *(ulonglong *)(param_3 + -8);
  uVar6 = *(ulonglong *)(param_1 + 0x10 + uVar8 * 8) >> 3;
  if ((uVar8 == uVar7) ||
     (uVar2 = *(ulonglong *)(param_1 + 0x10 + uVar7 * 8), ((uint)uVar2 & 7) == 1)) {
    if (uVar6 != uVar5) {
      if (uVar6 <= uVar5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
      if (BVar4 != '\0') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar5 = DAT_14c7584a0 + 1;
      DAT_14c7584a0 = uVar5;
      if (uVar5 < 2) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      *(ulonglong *)(param_1 + 0x10 + uVar8 * 8) = uVar5 * 8 + 2;
      goto LAB_14678339c;
    }
  }
  else if ((uVar6 != uVar5) || (uVar2 >> 3 != uVar5)) {
    if (uVar6 < uVar5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    if (BVar4 != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar5 = DAT_14c7584a0 + 1;
    DAT_14c7584a0 = uVar5;
    if (uVar5 < 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar1 = uVar5 * 8 + 2;
    *(longlong *)(param_1 + 0x10 + uVar8 * 8) = lVar1;
    *(longlong *)(param_1 + 0x10 + uVar7 * 8) = lVar1;
LAB_14678339c:
    *(ulonglong *)(param_3 + -8) = uVar5;
    return CONCAT71((int7)(uVar5 >> 8),1);
  }
  return 0;
}



// FUNCTION 14678341b FUN_14678341b body=933 status=ok
// SIG undefined FUN_14678341b(void)

undefined8 FUN_14678341b(uint *param_1,longlong param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  if (param_3 == 0) {
    BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    if (BVar4 != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    if (BVar4 != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar8 = DAT_14c7584a0 + 1;
    DAT_14c7584a0 = uVar8;
    if (uVar8 < 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar5 = param_1[1];
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if ((uVar5 & 0x3fff) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar2 = *param_1;
    if (uVar5 <= uVar2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if ((ulonglong)uVar2 == 0) {
      uVar6 = 0;
    }
    else {
      uVar12 = (ulonglong)uVar2 + 0x3fff >> 0xe;
      uVar11 = 0;
      uVar6 = 0;
      do {
        uVar5 = (uint)*(ulonglong *)(param_1 + uVar11 * 2 + 4) & 7;
        if (1 < uVar5) {
          if (uVar5 < 5) {
            *(ulonglong *)(param_1 + uVar11 * 2 + 4) =
                 (ulonglong)(uVar5 + 1) |
                 *(ulonglong *)(param_1 + uVar11 * 2 + 4) & 0xfffffffffffffff8;
            uVar6 = 1;
          }
          else {
            if (uVar5 != 5) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            uVar7 = uVar11;
            if (uVar11 < uVar12) {
              uVar9 = uVar11;
              do {
                if ((param_1[uVar9 * 2 + 4] & 7) != 1) {
                  uVar7 = uVar9;
                  if ((param_1[uVar9 * 2 + 4] & 7) != 5) break;
                  *(ulonglong *)(param_1 + uVar9 * 2 + 4) = uVar8 * 8;
                }
                uVar9 = uVar9 + 1;
                uVar7 = uVar12;
              } while (uVar12 != uVar9);
            }
            FUN_14678dd69(uVar11 * 0x4000 + param_2,(uVar7 - uVar11) * 0x4000,0);
            uVar11 = uVar7 - 1;
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar12);
    }
    if ((char)param_1[2] == '\x01') {
      if (DAT_14c80aed0 == 0) {
        DAT_14c80aed0 = FUN_14678d6e8();
      }
      lVar10 = DAT_14c80aed0;
      if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar5 = *param_1;
      uVar2 = param_1[1];
      if (DAT_14c80aed0 == 0) {
        DAT_14c80aed0 = FUN_14678d6e8();
      }
      if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((DAT_14c80aed0 - 1U & (ulonglong)uVar2 + param_2) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      bVar1 = *(byte *)((longlong)param_1 + 9);
      if (bVar1 == 3) {
        uVar8 = -lVar10 & ((ulonglong)uVar5 + param_2 + lVar10) - 1;
        FUN_14678db4f(uVar8,((ulonglong)uVar2 + param_2) - uVar8,1);
        *(undefined1 *)(param_1 + 2) = 0;
      }
      else {
        if (2 < bVar1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        *(byte *)((longlong)param_1 + 9) = bVar1 + 1;
        uVar6 = 1;
      }
    }
  }
  else {
    if (2 < param_3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    if (BVar4 != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    if (BVar4 != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    DAT_14c7584a0 = DAT_14c7584a0 + 1;
    if (DAT_14c7584a0 < 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar5 = param_1[1];
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if ((uVar5 & 0x3fff) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar2 = *param_1;
    if (uVar5 <= uVar2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if ((ulonglong)uVar2 != 0) {
      uVar11 = (ulonglong)uVar2 + 0x3fff >> 0xe;
      lVar10 = DAT_14c7584a0 * 8;
      uVar8 = 0;
      do {
        if ((param_1[uVar8 * 2 + 4] & 6) != 0) {
          uVar12 = uVar8;
          uVar7 = uVar8;
          if (uVar8 < uVar11) {
            do {
              if ((param_1[uVar7 * 2 + 4] & 7) != 1) {
                uVar12 = uVar7;
                if ((param_1[uVar7 * 2 + 4] & 7) == 0) break;
                *(longlong *)(param_1 + uVar7 * 2 + 4) = lVar10;
              }
              uVar7 = uVar7 + 1;
              uVar12 = uVar11;
            } while (uVar11 != uVar7);
          }
          if (param_3 != 2) {
            FUN_14678dd69(uVar8 * 0x4000 + param_2,(uVar12 - uVar8) * 0x4000,0);
          }
          uVar8 = uVar12 - 1;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar11);
    }
    if ((char)param_1[2] == '\x01') {
      if (DAT_14c80aed0 == 0) {
        DAT_14c80aed0 = FUN_14678d6e8();
      }
      lVar10 = DAT_14c80aed0;
      if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar5 = *param_1;
      uVar2 = param_1[1];
      if (DAT_14c80aed0 == 0) {
        DAT_14c80aed0 = FUN_14678d6e8();
      }
      if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((DAT_14c80aed0 - 1U & (ulonglong)uVar2 + param_2) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (param_3 != 2) {
        uVar8 = -lVar10 & ((ulonglong)uVar5 + param_2 + lVar10) - 1;
        FUN_14678db4f(uVar8,((ulonglong)uVar2 + param_2) - uVar8,1);
      }
      *(undefined1 *)(param_1 + 2) = 0;
    }
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 1467837c0 FUN_1467837c0 body=140 status=ok
// SIG undefined FUN_1467837c0(void)

longlong * FUN_1467837c0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = 1;
  if (param_2 == 1) {
    param_3 = 0;
    param_2 = 1;
  }
  else if (param_3 != 0) {
    if (param_3 == 1) {
      lVar6 = 0;
      param_2 = param_3;
    }
    else {
      lVar2 = param_2;
      lVar4 = param_3;
      lVar1 = 1;
      lVar5 = 0;
      lVar3 = 0;
      lVar7 = 1;
      do {
        lVar6 = lVar3;
        param_3 = lVar1;
        param_2 = lVar4;
        lVar3 = lVar2 / param_2;
        lVar4 = lVar2 % param_2;
        lVar2 = param_2;
        lVar1 = lVar5 - lVar3 * param_3;
        lVar5 = param_3;
        lVar3 = lVar7 - lVar3 * lVar6;
        lVar7 = lVar6;
      } while (lVar4 != 0);
    }
  }
  *param_1 = lVar6;
  param_1[1] = param_3;
  param_1[2] = param_2;
  return param_1;
}



// FUNCTION 14678384c FUN_14678384c body=21 status=ok
// SIG undefined FUN_14678384c(void)

void FUN_14678384c(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 146783861 FUN_146783861 body=4604 status=ok
// SIG undefined FUN_146783861(void)

undefined8 *
FUN_146783861(undefined8 *param_1,uint3 *param_2,ulonglong *****param_3,undefined8 *param_4,
             ulonglong *param_5)

{
  uint3 *puVar1;
  code *pcVar2;
  uint3 uVar3;
  uint uVar4;
  BOOLEAN BVar5;
  ulonglong *****pppppuVar6;
  ulonglong ****ppppuVar7;
  uint3 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *****pppppuVar11;
  ulonglong *****pppppuVar12;
  longlong lVar13;
  ulonglong *****pppppuVar14;
  ulonglong *****pppppuVar15;
  undefined1 *puVar16;
  ulonglong *****pppppuVar17;
  char cVar18;
  undefined1 *puVar19;
  ulonglong *****pppppuVar20;
  ulonglong *****pppppuVar21;
  longlong lVar22;
  ulonglong ****ppppuVar23;
  longlong lVar24;
  ulonglong *****pppppuVar25;
  ulonglong uVar26;
  ulonglong ****ppppuVar27;
  uint uVar28;
  ulonglong *****pppppuVar29;
  undefined1 *puVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auStack_198 [32];
  ulonglong ****local_178;
  ulonglong ****local_170;
  ulonglong ***local_168;
  uint3 *local_160;
  ulonglong ****local_158;
  undefined8 *local_150;
  ulonglong ****local_148;
  ulonglong ****local_140;
  ulonglong ****local_138;
  ulonglong ****local_130;
  ulonglong ****local_128;
  ulonglong ****local_120;
  ulonglong ***local_118;
  ulonglong ****local_110;
  longlong local_108;
  longlong local_100;
  ulonglong ***local_f8;
  longlong local_f0;
  ulonglong ****local_e8;
  ulonglong ****ppppuStack_e0;
  ulonglong ****local_d8;
  ulonglong ***pppuStack_d0;
  undefined8 local_c8;
  ulonglong ****local_c0;
  ulonglong ****local_b8;
  ulonglong ***local_b0;
  ulonglong ****local_a8;
  ulonglong ****ppppuStack_a0;
  uint local_98;
  undefined4 uStack_94;
  ulonglong ***pppuStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (param_3 != (ulonglong *****)0x0) {
    pppppuVar15 = (ulonglong *****)*param_4;
    if ((int)POPCOUNT(pppppuVar15) != 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pppppuVar25 = (ulonglong *****)param_4[1];
    if (pppppuVar15 <= pppppuVar25) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    if (BVar5 != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    puVar8 = (uint3 *)(DAT_14c80ad08 + (ulonglong)(uint)*(uint3 *)((longlong)param_2 + 3) * 8);
    local_160 = param_2;
    if (puVar8 != (uint3 *)0x0 && *(uint3 *)((longlong)param_2 + 3) != 0) {
      do {
        if (param_3 <=
            (ulonglong *****)
            ((*(ulonglong *)(puVar8 + 6) & 0xffffffffffff) -
            (*(ulonglong *)(puVar8 + 4) & 0xffffffffffff))) {
          local_110 = (ulonglong ****)&local_c8;
          lVar24 = DAT_14c80ad08;
          local_150 = param_1;
          local_148 = (ulonglong ****)param_3;
          local_138 = (ulonglong ****)pppppuVar25;
          goto LAB_146783dfd;
        }
      } while ((*puVar8 != 0) &&
              (puVar8 = (uint3 *)(DAT_14c80ad08 + (ulonglong)(uint)*puVar8 * 8),
              puVar8 != (uint3 *)0x0));
    }
    goto LAB_14678391f;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  goto LAB_146783a9f;
LAB_146783dfd:
  do {
    pppppuVar25 = *(ulonglong ******)(puVar8 + 4);
    pppppuVar14 = (ulonglong *****)(*(ulonglong *)(puVar8 + 6) & 0xffffffffffff);
    pppppuVar6 = (ulonglong *****)((ulonglong)pppppuVar25 & 0xffffffffffff);
    pppppuVar11 = (ulonglong *****)((longlong)pppppuVar14 - (longlong)pppppuVar6);
    if (local_148 <= pppppuVar11) {
      pppppuVar20 = *(ulonglong ******)(puVar8 + 8);
      ppppuVar27 = *(ulonglong *****)(puVar8 + 10);
      local_158 = (ulonglong ****)((ulonglong)pppppuVar20 & 0xffffffffffff);
      lVar24 = DAT_14c80ad08;
      if ((ulonglong *****)local_158 == (ulonglong *****)0x0) {
        if (((longlong)pppppuVar6 - (longlong)local_138 & (ulonglong)((longlong)pppppuVar15 + -1))
            == 0) {
          if ((int)POPCOUNT(param_5[1]) != 1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if ((param_5[1] - 1 & (ulonglong)local_148) == 0) {
            pppppuVar17 = (ulonglong *****)
                          ((ulonglong)((longlong)pppppuVar25 + (longlong)local_148) & 0xffffffffffff
                          );
            local_140 = (ulonglong ****)((ulonglong)local_148 % *param_5 & 0xffffffffffff);
            pppppuVar29 = (ulonglong *****)
                          (*(ulonglong *)(puVar8 + 6) & 0xffff000000000000 | (ulonglong)pppppuVar6);
            ppppuVar7 = (ulonglong ****)((ulonglong)ppppuVar27 & 0xff);
            ppppuVar23 = ppppuVar27;
LAB_14678420d:
            lVar24 = DAT_14c80ad08;
            if (pppppuVar17 != pppppuVar6) {
              local_170 = (ulonglong ****)pppppuVar6;
              if (pppppuVar6 == (ulonglong *****)0x0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                local_128 = (ulonglong ****)pppppuVar15;
                (*pcVar2)();
              }
              if ((ulonglong *****)((longlong)pppppuVar17 - (longlong)pppppuVar6) !=
                  (ulonglong *****)local_148) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                local_128 = (ulonglong ****)pppppuVar15;
                (*pcVar2)();
              }
              if ((((ulonglong)pppppuVar25 ^ (ulonglong)pppppuVar29) & 0xffffffffffff) == 0) {
                if (pppppuVar17 == pppppuVar14) {
                  local_128 = (ulonglong ****)pppppuVar15;
                  FUN_146786cb6(local_160,puVar8);
                }
                else {
LAB_1467845cb:
                  *local_110 = (ulonglong ***)pppppuVar17;
                  local_110[1] = (ulonglong ***)pppppuVar14;
                  local_110[2] = (ulonglong ***)local_140;
                  local_110[3] = (ulonglong ***)ppppuVar7;
                  local_d8 = local_b8;
                  pppuStack_d0 = local_b0;
                  local_e8 = (ulonglong ****)local_c8;
                  ppppuStack_e0 = local_c0;
                  local_128 = (ulonglong ****)pppppuVar15;
                  FUN_146784be4(local_160,puVar8);
                  if ((((ulonglong)pppppuVar25 ^ (ulonglong)pppppuVar29) & 0xffffffffffff) != 0) {
                    local_d8 = (ulonglong ****)CONCAT44(uStack_94,local_98);
                    pppuStack_d0 = pppuStack_90;
                    local_e8 = local_a8;
                    ppppuStack_e0 = ppppuStack_a0;
                    FUN_146787054(local_160);
                  }
                }
              }
              else {
                local_110 = (ulonglong ****)&local_a8;
                local_c8 = pppppuVar25;
                local_c0 = (ulonglong ****)pppppuVar29;
                local_b8 = (ulonglong ****)pppppuVar20;
                local_b0 = (ulonglong ***)ppppuVar27;
                if (pppppuVar17 != pppppuVar14) goto LAB_1467845cb;
                local_128 = (ulonglong ****)pppppuVar15;
                local_e8 = (ulonglong ****)pppppuVar25;
                ppppuStack_e0 = (ulonglong ****)pppppuVar29;
                local_d8 = (ulonglong ****)pppppuVar20;
                pppuStack_d0 = (ulonglong ***)ppppuVar27;
                FUN_146784be4(local_160,puVar8);
              }
              local_168 = (ulonglong ***)CONCAT44(local_168._4_4_,(int)(char)ppppuVar23);
              pppppuVar6 = (ulonglong *****)local_170;
              pppppuVar15 = (ulonglong *****)local_128;
              pppppuVar25 = (ulonglong *****)local_138;
              param_1 = local_150;
              goto LAB_146783a55;
            }
          }
          else {
            uVar9 = 1;
            pppppuVar20 = pppppuVar11;
            pppppuVar17 = pppppuVar6;
            if (pppppuVar14 != pppppuVar6) goto LAB_146783eb0;
          }
        }
        else if (pppppuVar14 != pppppuVar6) {
          uVar9 = *param_5;
          pppppuVar20 = pppppuVar6;
          goto LAB_146783e5c;
        }
      }
      else if (pppppuVar14 != pppppuVar6) {
        uVar9 = *param_5;
        pppppuVar20 = (ulonglong *****)((uVar9 - (longlong)local_158) + (longlong)pppppuVar6);
        if (pppppuVar20 < pppppuVar14) {
LAB_146783e5c:
          local_178 = (ulonglong ****)pppppuVar15;
          FUN_1467805a9(&local_c8,pppppuVar20,uVar9,local_138);
          uVar9 = (ulonglong)local_c8 & 0xffffffff;
          pppppuVar17 = (ulonglong *****)local_c0;
          if (((byte)local_c8 & local_c0 < pppppuVar14) == 0) {
            uVar9 = 0;
            pppppuVar17 = (ulonglong *****)0x0;
          }
          pppppuVar20 = (ulonglong *****)((longlong)pppppuVar14 - (longlong)pppppuVar17);
LAB_146783eb0:
          lVar24 = DAT_14c80ad08;
          if (((uVar9 & 1) != 0) && (local_148 <= pppppuVar20)) {
            pppppuVar29 = (ulonglong *****)
                          ((ulonglong)
                           ((longlong)pppppuVar25 + ((longlong)pppppuVar17 - (longlong)pppppuVar6))
                          & 0xffffffffffff);
            uVar9 = *param_5;
            pppppuVar25 = (ulonglong *****)param_5[1];
            puVar19 = (undefined1 *)((longlong)pppppuVar17 + (longlong)local_148);
            pppppuVar20 = (ulonglong *****)
                          ((ulonglong)
                           (puVar19 +
                           (((ulonglong)
                             (((longlong)pppppuVar17 - (longlong)pppppuVar6) + (longlong)local_158)
                             % uVar9 & 0xffffffffffff) - (longlong)pppppuVar29)) % uVar9);
            if ((int)POPCOUNT(pppppuVar25) != 1) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (pppppuVar25 == (ulonglong *****)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            pppppuVar17 = (ulonglong *****)((longlong)pppppuVar29 - (longlong)pppppuVar6);
            if (pppppuVar17 == (ulonglong *****)0x0) {
LAB_146784105:
              pppppuVar21 = (ulonglong *****)0x0;
            }
            else {
              local_140 = (ulonglong ****)pppppuVar20;
              if ((ulonglong *****)local_158 == (ulonglong *****)0x0) {
                pppppuVar12 = pppppuVar6;
                pppppuVar21 = pppppuVar17;
                if (((ulonglong)((longlong)pppppuVar25 + 0xffffffffffff) & (ulonglong)pppppuVar6) !=
                    0) {
LAB_146784675:
                  local_178 = (ulonglong ****)pppppuVar25;
                  local_170 = (ulonglong ****)pppppuVar6;
                  local_168 = (ulonglong ***)ppppuVar27;
                  FUN_1467805a9(&local_c8,pppppuVar12,uVar9,0);
                  pppppuVar20 = (ulonglong *****)local_140;
                  ppppuVar27 = (ulonglong ****)local_168;
                  pppppuVar6 = (ulonglong *****)local_170;
                  if (((ulonglong)local_c8 & 1) == 0) goto LAB_146784105;
                  uVar9 = (longlong)pppppuVar29 - (longlong)local_c0;
                  pppppuVar21 = (ulonglong *****)0x0;
                  if ((local_c0 <= pppppuVar29 && uVar9 != 0) &&
                     (pppppuVar21 = pppppuVar17, local_c0 != local_170)) {
                    uVar9 = uVar9 - uVar9 % param_5[1];
                    pppppuVar21 = (ulonglong *****)(uVar9 - uVar9 % *param_5);
                  }
                }
              }
              else {
                pppppuVar12 = (ulonglong *****)
                              ((uVar9 - (longlong)local_158) + (longlong)pppppuVar6);
                if (pppppuVar12 < pppppuVar29) goto LAB_146784675;
                pppppuVar21 = (ulonglong *****)0x0;
              }
            }
            pppppuVar12 = (ulonglong *****)param_5[1];
            if ((int)POPCOUNT(pppppuVar12) != 1) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (pppppuVar12 == (ulonglong *****)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            pppppuVar17 = (ulonglong *****)((ulonglong)puVar19 & 0xffffffffffff);
            local_140 = (ulonglong ****)((ulonglong)pppppuVar20 & 0xffffffffffff);
            lVar24 = (longlong)pppppuVar14 - (longlong)pppppuVar17;
            if (lVar24 == 0) {
LAB_1467841a5:
              lVar22 = 0;
              ppppuVar23 = ppppuVar27;
              pppppuVar25 = pppppuVar6;
            }
            else {
              ppppuVar23 = ppppuVar27;
              pppppuVar25 = pppppuVar6;
              if ((ulonglong *****)local_140 == (ulonglong *****)0x0) {
                lVar22 = lVar24;
                if (((ulonglong)((longlong)pppppuVar12 + 0xffffffffffff) & (ulonglong)pppppuVar17)
                    != 0) {
                  uVar9 = *param_5;
                  pppppuVar20 = pppppuVar17;
LAB_146784757:
                  local_178 = (ulonglong ****)pppppuVar12;
                  local_170 = (ulonglong ****)pppppuVar6;
                  local_168 = (ulonglong ***)ppppuVar27;
                  local_120 = (ulonglong ****)pppppuVar21;
                  FUN_1467805a9(&local_c8,pppppuVar20,uVar9,0);
                  pppppuVar21 = (ulonglong *****)local_120;
                  ppppuVar27 = (ulonglong ****)local_168;
                  pppppuVar6 = (ulonglong *****)local_170;
                  if (((ulonglong)local_c8 & 1) == 0) goto LAB_1467841a5;
                  uVar9 = (longlong)pppppuVar14 - (longlong)local_c0;
                  lVar22 = 0;
                  ppppuVar23 = (ulonglong ****)local_168;
                  pppppuVar25 = (ulonglong *****)local_170;
                  if ((local_c0 <= pppppuVar14 && uVar9 != 0) &&
                     (lVar22 = lVar24, (ulonglong *****)local_c0 != pppppuVar17)) {
                    uVar9 = uVar9 - uVar9 % param_5[1];
                    lVar22 = uVar9 - uVar9 % *param_5;
                  }
                }
              }
              else {
                uVar9 = *param_5;
                pppppuVar20 = (ulonglong *****)
                              ((uVar9 - (longlong)local_140) + (longlong)pppppuVar17);
                if (pppppuVar20 < pppppuVar14) goto LAB_146784757;
                lVar22 = 0;
                local_170 = (ulonglong ****)pppppuVar6;
                local_168 = (ulonglong ***)ppppuVar27;
                local_120 = (ulonglong ****)pppppuVar21;
              }
            }
            auVar31._8_4_ = (int)((ulonglong)pppppuVar11 >> 0x20);
            auVar31._0_8_ = pppppuVar11;
            auVar31._12_4_ = 0x45300000;
            puVar19 = (undefined1 *)((longlong)pppppuVar21 + (longlong)local_148) + lVar22;
            auVar33._8_4_ = (int)((ulonglong)puVar19 >> 0x20);
            auVar33._0_8_ = puVar19;
            auVar33._12_4_ = 0x45300000;
            lVar24 = DAT_14c80ad08;
            if ((((double)CONCAT44(0x43300000,(int)pppppuVar11) - 4503599627370496.0) +
                (auVar31._8_8_ - 1.9342813113834067e+25)) /
                (((double)CONCAT44(0x43300000,(int)puVar19) - 4503599627370496.0) +
                (auVar33._8_8_ - 1.9342813113834067e+25)) <= 1.3) {
              ppppuVar7 = (ulonglong ****)((ulonglong)ppppuVar23 & 0xff);
              pppppuVar20 = (ulonglong *****)local_158;
              ppppuVar27 = ppppuVar7;
              pppppuVar6 = pppppuVar29;
              goto LAB_14678420d;
            }
          }
        }
      }
    }
    param_3 = (ulonglong *****)local_148;
    pppppuVar25 = (ulonglong *****)local_138;
    param_1 = local_150;
    if (((*(uint3 *)((longlong)puVar8 + 6) == 0) ||
        (puVar1 = (uint3 *)(lVar24 + (ulonglong)(uint)*(uint3 *)((longlong)puVar8 + 6) * 8),
        puVar1 == (uint3 *)0x0)) ||
       ((ulonglong *****)
        ((*(ulonglong *)(puVar1 + 6) & 0xffffffffffff) -
        (*(ulonglong *)(puVar1 + 4) & 0xffffffffffff)) < local_148)) {
      uVar3 = *puVar8;
      puVar1 = puVar8;
      while( true ) {
        if (((uVar3 == 0) ||
            (puVar8 = (uint3 *)(lVar24 + (ulonglong)(uint)uVar3 * 8), puVar8 == (uint3 *)0x0)) ||
           ((ulonglong *****)
            ((*(ulonglong *)(puVar8 + 6) & 0xffffffffffff) -
            (*(ulonglong *)(puVar8 + 4) & 0xffffffffffff)) < local_148)) goto LAB_14678391f;
        if ((*(uint3 *)((longlong)puVar8 + 6) == 0) ||
           (puVar1 != (uint3 *)(lVar24 + (ulonglong)(uint)*(uint3 *)((longlong)puVar8 + 6) * 8)))
        break;
        uVar3 = *puVar8;
        puVar1 = puVar8;
      }
    }
    else {
      do {
        puVar8 = puVar1;
        if ((*(uint3 *)((longlong)puVar8 + 3) == 0) ||
           (puVar1 = (uint3 *)(lVar24 + (ulonglong)(uint)*(uint3 *)((longlong)puVar8 + 3) * 8),
           puVar1 == (uint3 *)0x0)) break;
      } while (local_148 <=
               (ulonglong *****)
               ((*(ulonglong *)(puVar1 + 6) & 0xffffffffffff) -
               (*(ulonglong *)(puVar1 + 4) & 0xffffffffffff)));
    }
  } while (puVar8 != (uint3 *)0x0);
LAB_14678391f:
  local_e8 = (ulonglong ****)pppppuVar15;
  ppppuStack_e0 = (ulonglong ****)pppppuVar25;
  (*(code *)param_5[2])(&local_c8,param_3,&local_e8,param_5[3]);
  puVar8 = local_160;
  local_110 = (ulonglong ****)local_c8;
  if (local_c8 != (ulonglong *****)0x0) {
    if ((ulonglong *****)local_c0 != param_3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    local_168 = (ulonglong ***)CONCAT44(local_168._4_4_,local_98);
    local_148 = (ulonglong ****)param_3;
    if (1 < local_98) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      local_128 = (ulonglong ****)pppppuVar15;
      (*pcVar2)();
    }
    local_158 = local_b8;
    local_f8 = local_b0;
    local_140 = local_a8;
    local_120 = ppppuStack_a0;
    lVar24 = DAT_14c80ad08 + (ulonglong)(uint)*local_160 * 8;
    local_128 = (ulonglong ****)pppppuVar15;
    if (lVar24 == 0 || *local_160 == 0) {
LAB_1467839f0:
      pppppuVar6 = (ulonglong *****)local_110;
      ppppuVar7 = local_120;
      pppppuVar15 = (ulonglong *****)local_128;
      ppppuVar23 = local_140;
      ppppuVar27 = local_148;
      pppppuVar11 = (ulonglong *****)((longlong)local_110 + (longlong)local_148);
      if (local_140 < pppppuVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (param_5[4] == 0) {
        *(undefined1 **)(puVar8 + 2) =
             (undefined1 *)
             ((longlong)local_120 +
             (longlong)local_148 + *(longlong *)(puVar8 + 2) + (longlong)local_f8);
        uVar9 = *param_5;
        if (uVar9 == 1) {
          if (CARRY8((ulonglong)local_f8,(ulonglong)local_158)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          uVar9 = 1;
          if ((ulonglong ****)local_f8 != (ulonglong ****)0x0) {
            if ((ulonglong *****)local_158 == (ulonglong *****)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            local_c8 = (ulonglong *****)((ulonglong)local_158 & 0xffffffffffff);
            local_c0 = (ulonglong ****)((longlong)local_f8 + (longlong)local_158 & 0xffffffffffff);
            local_b8 = (ulonglong ****)0x0;
            local_b0 = (ulonglong ***)CONCAT44(local_b0._4_4_,local_168._0_4_);
            FUN_146785655(puVar8,&local_c8,param_5);
            uVar9 = *param_5;
          }
        }
        else if ((ulonglong ****)local_f8 != (ulonglong ****)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        pppppuVar14 = (ulonglong *****)((longlong)ppppuVar7 + (longlong)local_140);
        if (pppppuVar14 < pppppuVar11) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (pppppuVar14 != pppppuVar11) {
          if (pppppuVar11 == (ulonglong *****)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          local_c8 = (ulonglong *****)((ulonglong)pppppuVar11 & 0xffffffffffff);
          local_c0 = (ulonglong ****)((ulonglong)pppppuVar14 & 0xffffffffffff);
          local_b8 = (ulonglong ****)((ulonglong)ppppuVar27 % uVar9 & 0xffffffffffff);
          local_b0 = (ulonglong ***)CONCAT44(local_b0._4_4_,local_168._0_4_);
          FUN_146785655(puVar8,&local_c8,param_5);
        }
      }
      else {
        *(longlong *)(puVar8 + 2) = *(longlong *)(puVar8 + 2) + (longlong)local_148;
        (*(code *)param_5[4])(local_158,local_f8,param_5[5]);
        (*(code *)param_5[4])(ppppuVar23,local_120,param_5[5]);
        pppppuVar15 = (ulonglong *****)local_128;
      }
    }
    else {
      lVar22 = 0;
      do {
        if ((ulonglong *****)(*(ulonglong *)(lVar24 + 0x10) & 0xffffffffffff) < local_b8) {
          uVar3 = *(uint3 *)(lVar24 + 6);
          lVar22 = lVar24;
        }
        else {
          uVar3 = *(uint3 *)(lVar24 + 3);
        }
      } while ((uVar3 != 0) && (lVar24 = (ulonglong)uVar3 * 8 + DAT_14c80ad08, lVar24 != 0));
      if ((lVar22 == 0) ||
         ((ulonglong *****)((ulonglong)*(undefined1 **)(lVar22 + 0x18) & 0xffffffffffff) !=
          (ulonglong *****)local_b8)) goto LAB_1467839f0;
      pppppuVar6 = (ulonglong *****)(*(ulonglong *)(lVar22 + 0x20) & 0xffffffffffff);
      pppppuVar11 = (ulonglong *****)*param_5;
      local_150 = param_1;
      local_138 = (ulonglong ****)pppppuVar25;
      if (pppppuVar11 <= pppppuVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pppppuVar14 = (ulonglong *****)local_b8;
      uVar9 = (((longlong)pppppuVar6 + (longlong)local_b8) -
              ((ulonglong)*(ulonglong ******)(lVar22 + 0x10) & 0xffffffffffff)) %
              (ulonglong)pppppuVar11;
      puVar19 = *(undefined1 **)(lVar22 + 0x18);
      pppppuVar6 = *(ulonglong ******)(lVar22 + 0x10);
      uVar10 = *(ulonglong *)(lVar22 + 0x20);
      puVar16 = (undefined1 *)((longlong)ppppuStack_a0 + (longlong)local_a8);
      uVar4 = *(uint *)(lVar22 + 0x28);
      do {
        uVar28 = local_98;
        local_98 = uVar4;
        puVar30 = puVar16;
        uVar26 = uVar10;
        pppppuVar20 = pppppuVar6;
        puVar16 = puVar19;
        uVar10 = uVar9;
        pppppuVar6 = pppppuVar14;
        pppppuVar14 = pppppuVar20;
        uVar9 = uVar26;
        puVar19 = puVar30;
        uVar4 = uVar28;
      } while ((((ulonglong)pppppuVar20 ^ (ulonglong)puVar30) & 0xffffffffffff) == 0);
      local_100 = lVar22;
      if ((((ulonglong)pppppuVar6 ^ (ulonglong)puVar16) & 0xffffffffffff) != 0) goto LAB_1467839f0;
      pppppuVar14 = (ulonglong *****)(uVar26 & 0xffffffffffff);
      if (pppppuVar11 < pppppuVar14 || (longlong)pppppuVar11 - (longlong)pppppuVar14 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pppppuVar6 = (ulonglong *****)((ulonglong)pppppuVar20 & 0xffffffffffff);
      if (((((ulonglong)puVar16 & 0xffffffffffff) - (longlong)pppppuVar6) + (longlong)pppppuVar14) %
          (ulonglong)pppppuVar11 != (uVar10 & 0xffffffffffff)) goto LAB_1467839f0;
      cVar18 = (char)local_98;
      ppppuVar27 = (ulonglong ****)(ulonglong)(uint)(int)cVar18;
      if (cVar18 != '\0') {
        if ((int)cVar18 != 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        cVar18 = (char)uVar28;
        ppppuVar27 = (ulonglong ****)(ulonglong)(uint)(int)cVar18;
        if (cVar18 != '\0') {
          if ((int)cVar18 != 1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          ppppuVar27 = (ulonglong ****)0x1;
        }
      }
      pppppuVar17 = (ulonglong *****)((ulonglong)puVar30 & 0xffffffffffff);
      lVar24 = (longlong)pppppuVar17 - (longlong)pppppuVar6;
      if (lVar24 == 0) goto LAB_1467839f0;
      local_130 = (ulonglong ****)pppppuVar6;
      if (pppppuVar14 != (ulonglong *****)0x0) {
        pppppuVar6 = (ulonglong *****)
                     (((longlong)pppppuVar11 - (longlong)pppppuVar14) + (longlong)pppppuVar6);
        if (pppppuVar6 < pppppuVar17) goto LAB_146783cf1;
        goto LAB_1467839f0;
      }
      if (((longlong)pppppuVar6 - (longlong)pppppuVar25 & (ulonglong)((longlong)pppppuVar15 + -1))
          != 0) {
LAB_146783cf1:
        local_178 = (ulonglong ****)pppppuVar15;
        FUN_1467805a9(&local_c8,pppppuVar6,pppppuVar11,pppppuVar25);
        pppppuVar29 = (ulonglong *****)0x0;
        pppppuVar6 = pppppuVar29;
        if (((byte)local_c8 & local_c0 < pppppuVar17) != 0) {
          pppppuVar29 = (ulonglong *****)((ulonglong)local_c8 & 0xffffffff);
          pppppuVar6 = (ulonglong *****)local_c0;
        }
LAB_146783d39:
        if ((((ulonglong)pppppuVar29 & 1) != 0) &&
           (local_148 <= (ulonglong *****)((longlong)pppppuVar17 - (longlong)pppppuVar6))) {
          pppppuVar25 = (ulonglong *****)((ulonglong)pppppuVar6 & 0xffffffffffff);
          uVar9 = *param_5;
          pppppuVar15 = (ulonglong *****)param_5[1];
          puVar19 = (undefined1 *)((longlong)pppppuVar6 + (longlong)local_148);
          pppppuVar11 = (ulonglong *****)
                        ((ulonglong)
                         (puVar19 +
                         (((ulonglong)
                           (((longlong)pppppuVar14 - (longlong)local_130) + (longlong)pppppuVar6) %
                           uVar9 & 0xffffffffffff) - (longlong)pppppuVar25)) % uVar9);
          local_f0 = lVar24;
          if ((int)POPCOUNT(pppppuVar15) != 1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (pppppuVar15 == (ulonglong *****)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          lVar24 = (longlong)pppppuVar25 - (longlong)local_130;
          if (lVar24 == 0) {
LAB_146783dbd:
            lVar22 = 0;
          }
          else {
            local_170 = (ulonglong ****)pppppuVar11;
            if (pppppuVar14 == (ulonglong *****)0x0) {
              pppppuVar6 = (ulonglong *****)local_130;
              lVar22 = lVar24;
              if (((ulonglong)((longlong)pppppuVar15 + 0xffffffffffff) & (ulonglong)local_130) != 0)
              {
LAB_14678486f:
                local_178 = (ulonglong ****)pppppuVar15;
                local_118 = (ulonglong ***)ppppuVar27;
                FUN_1467805a9(&local_c8,pppppuVar6,uVar9,0);
                pppppuVar11 = (ulonglong *****)local_170;
                ppppuVar27 = (ulonglong ****)local_118;
                param_1 = local_150;
                puVar8 = local_160;
                if (((ulonglong)local_c8 & 1) == 0) goto LAB_146783dbd;
                uVar9 = (longlong)pppppuVar25 - (longlong)local_c0;
                lVar22 = 0;
                if ((local_c0 <= pppppuVar25 && uVar9 != 0) &&
                   (lVar22 = lVar24, local_c0 != local_130)) {
                  uVar9 = uVar9 - uVar9 % param_5[1];
                  lVar22 = uVar9 - uVar9 % *param_5;
                }
              }
            }
            else {
              pppppuVar6 = (ulonglong *****)((uVar9 - (longlong)pppppuVar14) + (longlong)local_130);
              if (pppppuVar6 < pppppuVar25) goto LAB_14678486f;
              lVar22 = 0;
            }
          }
          pppppuVar15 = (ulonglong *****)param_5[1];
          if ((int)POPCOUNT(pppppuVar15) != 1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (pppppuVar15 == (ulonglong *****)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          pppppuVar20 = (ulonglong *****)((ulonglong)puVar19 & 0xffffffffffff);
          pppppuVar11 = (ulonglong *****)((ulonglong)pppppuVar11 & 0xffffffffffff);
          lVar22 = lVar22 + (longlong)local_148;
          lVar24 = (longlong)pppppuVar17 - (longlong)pppppuVar20;
          pppppuVar6 = pppppuVar25;
          if (lVar24 == 0) {
            lVar13 = 0;
          }
          else if (pppppuVar11 == (ulonglong *****)0x0) {
            lVar13 = lVar24;
            if (((ulonglong)((longlong)pppppuVar15 + 0xffffffffffff) & (ulonglong)pppppuVar20) != 0)
            {
              uVar9 = *param_5;
              pppppuVar6 = pppppuVar20;
LAB_146784983:
              local_178 = (ulonglong ****)pppppuVar15;
              local_170 = (ulonglong ****)pppppuVar25;
              local_118 = (ulonglong ***)ppppuVar27;
              local_108 = lVar22;
              FUN_1467805a9(&local_c8,pppppuVar6,uVar9,0);
              if (((ulonglong)local_c8 & 1) == 0) goto LAB_146784936;
              uVar9 = (longlong)pppppuVar17 - (longlong)local_c0;
              lVar13 = 0;
              lVar22 = local_108;
              pppppuVar6 = (ulonglong *****)local_170;
              ppppuVar27 = (ulonglong ****)local_118;
              param_1 = local_150;
              puVar8 = local_160;
              if ((local_c0 <= pppppuVar17 && uVar9 != 0) &&
                 (lVar13 = lVar24, (ulonglong *****)local_c0 != pppppuVar20)) {
                uVar9 = uVar9 - uVar9 % param_5[1];
                lVar13 = uVar9 - uVar9 % *param_5;
              }
            }
          }
          else {
            uVar9 = *param_5;
            pppppuVar6 = (ulonglong *****)((uVar9 - (longlong)pppppuVar11) + (longlong)pppppuVar20);
            local_170 = (ulonglong ****)pppppuVar25;
            local_118 = (ulonglong ***)ppppuVar27;
            local_108 = lVar22;
            if (pppppuVar6 < pppppuVar17) goto LAB_146784983;
LAB_146784936:
            lVar13 = 0;
            lVar22 = local_108;
            pppppuVar6 = (ulonglong *****)local_170;
            ppppuVar27 = (ulonglong ****)local_118;
            param_1 = local_150;
            puVar8 = local_160;
          }
          auVar32._8_4_ = (int)((ulonglong)local_f0 >> 0x20);
          auVar32._0_8_ = local_f0;
          auVar32._12_4_ = 0x45300000;
          lVar22 = lVar22 + lVar13;
          auVar34._8_4_ = (int)((ulonglong)lVar22 >> 0x20);
          auVar34._0_8_ = lVar22;
          auVar34._12_4_ = 0x45300000;
          pppppuVar25 = (ulonglong *****)local_138;
          if ((((double)CONCAT44(0x43300000,(int)local_f0) - 4503599627370496.0) +
              (auVar32._8_8_ - 1.9342813113834067e+25)) /
              (((double)CONCAT44(0x43300000,(int)lVar22) - 4503599627370496.0) +
              (auVar34._8_8_ - 1.9342813113834067e+25)) <= 1.3) goto LAB_146784412;
        }
        goto LAB_1467839f0;
      }
      if ((int)POPCOUNT(param_5[1]) != 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pppppuVar29 = (ulonglong *****)&DAT_00000001;
      if (((ulonglong)param_3 & param_5[1] - 1) != 0) goto LAB_146783d39;
      pppppuVar20 = (ulonglong *****)((longlong)pppppuVar20 + (longlong)param_3 & 0xffffffffffff);
      pppppuVar11 = (ulonglong *****)((ulonglong)param_3 % (ulonglong)pppppuVar11 & 0xffffffffffff);
LAB_146784412:
      puVar1 = local_160;
      pppppuVar25 = (ulonglong *****)local_138;
      if ((local_110 <= pppppuVar6) || (pppppuVar6 == pppppuVar20)) goto LAB_1467839f0;
      if (local_158 <= pppppuVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (pppppuVar6 == (ulonglong *****)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((ulonglong *****)local_130 == pppppuVar6) {
        FUN_146786cb6(local_160,local_100);
      }
      else {
        local_c8 = (ulonglong *****)local_130;
        local_c0 = (ulonglong ****)pppppuVar6;
        local_b8 = (ulonglong ****)pppppuVar14;
        local_b0 = (ulonglong ***)ppppuVar27;
        FUN_146784be4(local_160,local_100);
      }
      if (param_5[4] == 0) {
        *(longlong *)(puVar1 + 2) =
             (longlong)pppppuVar17 + (*(longlong *)(puVar1 + 2) - (longlong)local_158);
        if (pppppuVar17 < pppppuVar20) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (pppppuVar17 != pppppuVar20) {
          if (pppppuVar20 == (ulonglong *****)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          local_b0 = (ulonglong ***)CONCAT44(local_b0._4_4_,(int)ppppuVar27);
          local_c8 = pppppuVar20;
          local_c0 = (ulonglong ****)pppppuVar17;
          local_b8 = (ulonglong ****)pppppuVar11;
          FUN_146785655(local_160,&local_c8,param_5);
        }
      }
      else {
        *(undefined1 **)(puVar1 + 2) =
             (undefined1 *)
             ((longlong)pppppuVar20 + (*(longlong *)(puVar1 + 2) - (longlong)local_158));
        (*(code *)param_5[4])(pppppuVar20,(longlong)pppppuVar17 - (longlong)pppppuVar20,param_5[5]);
      }
      local_168 = (ulonglong ***)CONCAT44(local_168._4_4_,(int)ppppuVar27);
      pppppuVar15 = (ulonglong *****)local_128;
      pppppuVar25 = (ulonglong *****)local_138;
      param_1 = local_150;
    }
LAB_146783a55:
    if (((longlong)pppppuVar6 - (longlong)pppppuVar25 & (ulonglong)((longlong)pppppuVar15 + -1)) !=
        0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    *param_1 = pppppuVar6;
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined2 *)((longlong)param_1 + 9) = (undefined2)local_c8;
    *(undefined1 *)((longlong)param_1 + 0xb) = local_c8._2_1_;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_168._0_4_;
    goto LAB_146783aa7;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
LAB_146783a9f:
  *param_1 = 0;
LAB_146783aa7:
  if ((local_80 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146784a5e FUN_146784a5e body=128 status=ok
// SIG undefined FUN_146784a5e(void)

void FUN_146784a5e(undefined8 param_1,ulonglong param_2,ulonglong param_3,uint param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  undefined8 local_18;
  uint local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 < param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_3 != param_2) {
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (1 < param_4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_28 = param_2 & 0xffffffffffff;
    local_20 = param_3 & 0xffffffffffff;
    local_18 = 0;
    local_10 = param_4;
    FUN_146785655(param_1,&local_28,param_5);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146784adf FUN_146784adf body=196 status=ok
// SIG undefined FUN_146784adf(void)

uint3 * FUN_146784adf(uint3 *param_1)

{
  uint3 *puVar1;
  uint3 *puVar2;
  uint3 *puVar3;
  
  puVar2 = (uint3 *)(DAT_14c80ad08 + (ulonglong)(uint)*(uint3 *)((longlong)param_1 + 6) * 8);
  if (puVar2 == (uint3 *)0x0 || *(uint3 *)((longlong)param_1 + 6) == 0) {
    puVar2 = (uint3 *)((ulonglong)*param_1 * 8 + DAT_14c80ad08);
    if (puVar2 == (uint3 *)0x0 || *param_1 == 0) {
      return (uint3 *)0x0;
    }
    puVar1 = (uint3 *)0x0;
    do {
      puVar3 = (uint3 *)(DAT_14c80ad08 + (ulonglong)(uint)*(uint3 *)((longlong)puVar2 + 6) * 8);
      if (*(uint3 *)((longlong)puVar2 + 6) == 0) {
        puVar3 = puVar1;
      }
      if (param_1 != puVar3) {
        return puVar2;
      }
    } while ((*puVar2 != 0) &&
            (puVar3 = (uint3 *)(DAT_14c80ad08 + (ulonglong)(uint)*puVar2 * 8), param_1 = puVar2,
            puVar2 = puVar3, puVar3 != (uint3 *)0x0));
  }
  else {
    do {
      puVar1 = puVar2;
      if (*(uint3 *)((longlong)puVar1 + 3) == 0) {
        return puVar1;
      }
      puVar2 = (uint3 *)(DAT_14c80ad08 + (ulonglong)(uint)*(uint3 *)((longlong)puVar1 + 3) * 8);
    } while (puVar2 != (uint3 *)0x0);
  }
  return puVar1;
}



// FUNCTION 146784ba3 FUN_146784ba3 body=65 status=ok
// SIG undefined FUN_146784ba3(void)

void FUN_146784ba3(longlong param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2 - DAT_14c80ad08;
    if (DAT_14c758498 <= uVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((uVar3 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar3 < 8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar3 = uVar3 >> 3;
  }
  lVar2 = 0;
  do {
    *(char *)(param_1 + lVar2) = (char)uVar3;
    uVar3 = uVar3 >> 8;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  return;
}



// FUNCTION 146784be4 FUN_146784be4 body=2673 status=ok
// SIG undefined FUN_146784be4(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_146784be4(uint3 *param_1,uint3 *param_2,ulonglong *param_3)

{
  undefined2 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint3 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint3 *puVar16;
  uint3 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  uint3 *puVar24;
  uint uVar25;
  longlong lVar26;
  bool bVar27;
  ulonglong uVar28;
  bool bVar29;
  
  uVar20 = *param_3 & 0xffffffffffff;
  uVar18 = *(ulonglong *)(param_2 + 4) & 0xffffffffffff;
  if (uVar20 == uVar18) {
LAB_146784c19:
    bVar27 = false;
  }
  else if (uVar20 < uVar18) {
    puVar17 = (uint3 *)(DAT_14c80ad08 + (ulonglong)(uint)*(uint3 *)((longlong)param_2 + 3) * 8);
    if (puVar17 == (uint3 *)0x0 || *(uint3 *)((longlong)param_2 + 3) == 0) {
      puVar17 = (uint3 *)((ulonglong)*param_2 * 8 + DAT_14c80ad08);
      if (puVar17 == (uint3 *)0x0 || *param_2 == 0) goto LAB_146784c19;
      puVar16 = param_2;
      do {
        puVar24 = puVar17;
        puVar17 = (uint3 *)(DAT_14c80ad08 + (ulonglong)(uint)*(uint3 *)((longlong)puVar24 + 3) * 8);
        if (*(uint3 *)((longlong)puVar24 + 3) == 0) {
          puVar17 = (uint3 *)0x0;
        }
        if (puVar16 != puVar17) goto LAB_146784d1b;
        bVar27 = false;
      } while ((*puVar24 != 0) &&
              (puVar17 = (uint3 *)(DAT_14c80ad08 + (ulonglong)(uint)*puVar24 * 8), puVar16 = puVar24
              , bVar27 = false, puVar17 != (uint3 *)0x0));
    }
    else {
      do {
        puVar24 = puVar17;
        if (*(uint3 *)((longlong)puVar24 + 6) == 0) break;
        puVar17 = (uint3 *)(DAT_14c80ad08 + (ulonglong)(uint)*(uint3 *)((longlong)puVar24 + 6) * 8);
      } while (puVar17 != (uint3 *)0x0);
LAB_146784d1b:
      bVar27 = uVar20 <= (*(ulonglong *)(puVar24 + 4) & 0xffffffffffff);
    }
  }
  else {
    lVar11 = FUN_146784adf(param_2);
    if (lVar11 == 0) goto LAB_146784c19;
    bVar27 = (*(ulonglong *)(lVar11 + 0x10) & 0xffffffffffff) <= uVar20;
  }
  uVar20 = (param_3[1] & 0xffffffffffff) - uVar20;
  uVar18 = (*(ulonglong *)(param_2 + 6) & 0xffffffffffff) - uVar18;
  if (uVar20 == uVar18) {
    if (!bVar27) goto LAB_146784d6b;
  }
  else {
    if (uVar20 < uVar18) {
      lVar11 = DAT_14c80ad08 + (ulonglong)(uint)*param_2 * 8;
      if (lVar11 == 0 || *param_2 == 0) {
LAB_146784d61:
        bVar29 = false;
      }
      else {
        bVar29 = uVar20 < (*(ulonglong *)(lVar11 + 0x18) & 0xffffffffffff) -
                          (*(ulonglong *)(lVar11 + 0x10) & 0xffffffffffff);
      }
    }
    else {
      lVar11 = 0;
      if (*(uint3 *)((longlong)param_2 + 6) != 0) {
        lVar11 = DAT_14c80ad08 + (ulonglong)(uint)*(uint3 *)((longlong)param_2 + 6) * 8;
      }
      lVar15 = DAT_14c80ad08 + (ulonglong)(uint)*(uint3 *)((longlong)param_2 + 3) * 8;
      if ((lVar15 != 0 && *(uint3 *)((longlong)param_2 + 3) != 0) &&
         ((*(ulonglong *)(lVar15 + 0x18) & 0xffffffffffff) -
          (*(ulonglong *)(lVar15 + 0x10) & 0xffffffffffff) < uVar20)) goto LAB_146784e34;
      if (lVar11 == 0) goto LAB_146784d61;
      bVar29 = (*(ulonglong *)(lVar11 + 0x18) & 0xffffffffffff) -
               (*(ulonglong *)(lVar11 + 0x10) & 0xffffffffffff) < uVar20;
    }
    if (!bVar27 && !bVar29) {
LAB_146784d6b:
      uVar20 = *param_3;
      uVar18 = param_3[1];
      uVar28 = param_3[3];
      *(ulonglong *)(param_2 + 8) = param_3[2];
      *(ulonglong *)(param_2 + 10) = uVar28;
      *(ulonglong *)(param_2 + 4) = uVar20;
      *(ulonglong *)(param_2 + 6) = uVar18;
      return;
    }
  }
LAB_146784e34:
  lVar11 = (longlong)param_1 + 3;
  puVar17 = (uint3 *)0x0;
  if (*(uint3 *)((longlong)param_1 + 3) != 0) {
    puVar17 = (uint3 *)(DAT_14c80ad08 + (ulonglong)(uint)*(uint3 *)((longlong)param_1 + 3) * 8);
  }
  if (puVar17 == param_2) {
    uVar8 = FUN_146784adf(param_2);
    FUN_146784ba3(lVar11,uVar8);
  }
  lVar9 = 0;
  lVar15 = DAT_14c80ad08 + (ulonglong)(uint)*param_2 * 8;
  if (*param_2 == 0) {
    lVar15 = lVar9;
  }
  lVar13 = DAT_14c80ad08 + (ulonglong)(uint)*(uint3 *)((longlong)param_2 + 3) * 8;
  if (*(uint3 *)((longlong)param_2 + 3) == 0) {
    lVar13 = lVar9;
  }
  lVar26 = DAT_14c80ad08 + (ulonglong)(uint)*(uint3 *)((longlong)param_2 + 6) * 8;
  if (*(uint3 *)((longlong)param_2 + 6) == 0) {
    lVar26 = lVar9;
  }
  puVar17 = param_1;
  if (lVar15 != 0) {
    puVar24 = (uint3 *)0x0;
    if (*(uint3 *)(lVar15 + 3) != 0) {
      puVar24 = (uint3 *)(DAT_14c80ad08 + (ulonglong)(uint)*(uint3 *)(lVar15 + 3) * 8);
    }
    puVar17 = (uint3 *)(lVar15 + 6);
    if (puVar24 == param_2) {
      puVar17 = (uint3 *)(lVar15 + 3);
    }
  }
  if (lVar13 == 0) {
    FUN_146784ba3(puVar17,lVar26);
    if (lVar26 != 0) {
LAB_146784f68:
      FUN_146784ba3(lVar26,lVar15);
    }
  }
  else {
    if (lVar26 == 0) {
      uVar20 = lVar13 - DAT_14c80ad08;
      if (DAT_14c758498 <= uVar20) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar20 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar20 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar20 = uVar20 >> 3;
      lVar9 = 0;
      do {
        *(char *)((longlong)puVar17 + lVar9) = (char)uVar20;
        uVar20 = uVar20 >> 8;
        lVar9 = lVar9 + 1;
        lVar26 = lVar13;
      } while (lVar9 != 3);
      goto LAB_146784f68;
    }
    uVar28 = (*(ulonglong *)(lVar13 + 0x18) & 0xffffffffffff) -
             (*(ulonglong *)(lVar13 + 0x10) & 0xffffffffffff);
    uVar18 = (*(ulonglong *)(lVar26 + 0x18) & 0xffffffffffff) -
             (*(ulonglong *)(lVar26 + 0x10) & 0xffffffffffff);
    uVar20 = uVar18;
    lVar9 = lVar26;
    if (uVar28 < uVar18) {
      uVar20 = uVar28;
      lVar9 = lVar13;
      lVar13 = lVar26;
    }
    uVar14 = lVar13 - DAT_14c80ad08;
    if (DAT_14c758498 <= uVar14) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((uVar14 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar14 < 8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar14 = uVar14 >> 3;
    lVar26 = 0;
    do {
      *(char *)((longlong)puVar17 + lVar26) = (char)uVar14;
      uVar14 = uVar14 >> 8;
      lVar26 = lVar26 + 1;
    } while (lVar26 != 3);
    FUN_146784ba3(lVar13,lVar15);
    puVar17 = (uint3 *)((ulonglong)(uVar18 <= uVar28) * 3 + lVar13 + 3);
    if ((*puVar17 != 0) && (lVar15 = DAT_14c80ad08 + (ulonglong)(uint)*puVar17 * 8, lVar15 != 0)) {
      lVar23 = (ulonglong)(uVar18 <= uVar28) * 3 + 3;
      lVar19 = (ulonglong)(uVar28 < uVar18) * 3 + 3;
      lVar26 = DAT_14c80ad08;
      lVar21 = lVar13;
LAB_146785230:
      lVar13 = lVar15;
      uVar18 = (*(ulonglong *)(lVar13 + 0x18) & 0xffffffffffff) -
               (*(ulonglong *)(lVar13 + 0x10) & 0xffffffffffff);
      if (uVar18 < uVar20) {
        FUN_146784ba3(puVar17,lVar9);
        FUN_146784ba3(lVar9,lVar21);
LAB_146785295:
        lVar15 = lVar9;
        uVar12 = (uint)CONCAT12(*(undefined1 *)(lVar15 + 2 + lVar19),
                                *(undefined2 *)(lVar15 + lVar19));
        if ((uVar12 != 0) && (lVar9 = DAT_14c80ad08 + (ulonglong)uVar12 * 8, lVar9 != 0))
        goto code_r0x0001467852be;
        uVar20 = lVar13 - DAT_14c80ad08;
        if (DAT_14c758498 <= uVar20) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if ((uVar20 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (uVar20 < 8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar20 = uVar20 >> 3;
        lVar9 = 0;
        do {
          *(char *)(lVar19 + lVar15 + lVar9) = (char)uVar20;
          uVar20 = uVar20 >> 8;
          lVar9 = lVar9 + 1;
          lVar26 = lVar13;
        } while (lVar9 != 3);
        goto LAB_146784f68;
      }
      goto LAB_146785248;
    }
LAB_146785589:
    FUN_146784ba3(puVar17,lVar9);
    FUN_146784ba3(lVar9,lVar13);
  }
  uVar20 = *param_3;
  uVar3 = *(undefined4 *)((longlong)param_3 + 4);
  uVar18 = param_3[1];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar28 = param_3[3];
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(int *)(param_2 + 8) = (int)param_3[2];
  *(undefined4 *)(param_2 + 9) = uVar5;
  *(int *)(param_2 + 10) = (int)uVar28;
  *(undefined4 *)(param_2 + 0xb) = uVar6;
  *(int *)(param_2 + 4) = (int)uVar20;
  *(undefined4 *)(param_2 + 5) = uVar3;
  *(int *)(param_2 + 6) = (int)uVar18;
  *(undefined4 *)(param_2 + 7) = uVar4;
  uVar20 = param_3[1];
  uVar18 = *param_3 & 0xffffffffffff;
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined8 *)param_2 = 0;
  puVar17 = (uint3 *)(DAT_14c80ad08 + (ulonglong)(uint)*param_1 * 8);
  if (puVar17 != (uint3 *)0x0 && *param_1 != 0) {
    uVar20 = (uVar20 & 0xffffffffffff) - uVar18;
    uVar28 = *(ulonglong *)(puVar17 + 4) & 0xffffffffffff;
    if ((*(ulonglong *)(puVar17 + 6) & 0xffffffffffff) - uVar28 < uVar20) {
      bVar27 = true;
      puVar24 = (uint3 *)0x0;
    }
    else {
      bVar27 = true;
      do {
        puVar24 = puVar17;
        bVar27 = (bool)(uVar18 < uVar28 & bVar27);
        lVar9 = (ulonglong)(uVar28 <= uVar18) * 3 + 3;
        lVar15 = (ulonglong)(uVar28 <= uVar18) * 3;
        uVar12 = (uint)CONCAT12(*(undefined1 *)((longlong)puVar24 + lVar15 + 5),
                                *(undefined2 *)((longlong)puVar24 + lVar15 + 3));
        if ((uVar12 == 0) ||
           (puVar17 = (uint3 *)(DAT_14c80ad08 + (ulonglong)uVar12 * 8), puVar17 == (uint3 *)0x0)) {
          FUN_146784ba3(param_2);
          FUN_146784ba3(lVar9 + (longlong)puVar24,param_2);
          if (!bVar27) {
            return;
          }
          goto LAB_146784fde;
        }
        uVar28 = *(ulonglong *)(puVar17 + 4) & 0xffffffffffff;
      } while (uVar20 <= (*(ulonglong *)(puVar17 + 6) & 0xffffffffffff) - uVar28);
      param_1 = (uint3 *)(lVar9 + (longlong)puVar24);
    }
    FUN_146784ba3(param_2,puVar24);
    FUN_146784ba3(param_1,param_2);
    uVar20 = (longlong)puVar17 - DAT_14c80ad08;
    if (DAT_14c758498 <= uVar20) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((uVar20 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar20 < 8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    bVar27 = (bool)(bVar27 & uVar18 <= uVar28);
    uVar14 = (ulonglong)(uVar18 <= uVar28);
    lVar15 = uVar14 * 3;
    lVar9 = lVar15 + 3;
    uVar20 = uVar20 >> 3;
    lVar13 = 0;
    do {
      *(char *)((longlong)param_2 + lVar13 + uVar14 * 3 + 3) = (char)uVar20;
      uVar20 = uVar20 >> 8;
      lVar13 = lVar13 + 1;
    } while (lVar13 != 3);
    FUN_146784ba3(puVar17,param_2);
    lVar13 = (ulonglong)(uVar28 < uVar18) * 3;
    puVar10 = (undefined2 *)((longlong)param_2 + lVar13 + 3);
    uVar12 = (uint)CONCAT12(*(undefined1 *)((longlong)puVar17 + lVar13 + 5),
                            *(undefined2 *)((longlong)puVar17 + lVar13 + 3));
    uVar20 = (ulonglong)(uVar12 * 8);
    puVar24 = (uint3 *)(uVar20 + DAT_14c80ad08);
    if (puVar24 == (uint3 *)0x0 || uVar12 == 0) {
LAB_146785107:
      *(undefined1 *)(puVar10 + 1) = 0;
      *puVar10 = 0;
      if (bVar27) goto LAB_146784fde;
    }
    else {
      lVar13 = (ulonglong)(uVar28 < uVar18) * 3;
      lVar26 = lVar13 + 3;
      puVar16 = param_2;
      do {
        uVar25 = (uint)((*(ulonglong *)(puVar24 + 4) & 0xffffffffffff) != uVar18);
        if ((*(ulonglong *)(puVar24 + 4) & 0xffffffffffff) < uVar18) {
          uVar25 = 0xffffffff;
        }
        puVar7 = puVar17;
        uVar22 = -uVar25;
        if (uVar28 < uVar18) {
          uVar22 = uVar25;
        }
        while (puVar17 = puVar24, (int)uVar22 < 1) {
          uVar12 = (uint)CONCAT12(*(undefined1 *)((longlong)puVar17 + lVar13 + 5),
                                  *(undefined2 *)((longlong)puVar17 + lVar26));
          if (uVar12 == 0) goto LAB_146785107;
          uVar20 = (ulonglong)(uVar12 * 8);
          puVar24 = (uint3 *)(uVar20 + DAT_14c80ad08);
          if (puVar24 == (uint3 *)0x0) goto LAB_146785107;
          uVar25 = (uint)((*(ulonglong *)(puVar24 + 4) & 0xffffffffffff) != uVar18);
          if ((*(ulonglong *)(puVar24 + 4) & 0xffffffffffff) < uVar18) {
            uVar25 = 0xffffffff;
          }
          puVar7 = puVar17;
          uVar22 = -uVar25;
          if (uVar28 < uVar18) {
            uVar22 = uVar25;
          }
        }
        uVar14 = (ulonglong)uVar12;
        if (DAT_14c758498 <= uVar20) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        puVar1 = (undefined2 *)((longlong)puVar7 + lVar26);
        lVar21 = 0;
        do {
          *(char *)((longlong)puVar10 + lVar21) = (char)uVar14;
          uVar14 = uVar14 >> 8;
          lVar21 = lVar21 + 1;
        } while (lVar21 != 3);
        FUN_146784ba3(puVar17,puVar16);
        do {
          puVar16 = puVar17;
          uVar12 = (uint)CONCAT12(*(undefined1 *)((longlong)puVar16 + lVar15 + 5),
                                  *(undefined2 *)((longlong)puVar16 + lVar9));
          uVar20 = (ulonglong)uVar12;
          if (uVar12 == 0) {
LAB_1467855e3:
            *(undefined1 *)(puVar1 + 1) = 0;
            *puVar1 = 0;
            return;
          }
          puVar17 = (uint3 *)((ulonglong)(uVar12 * 8) + DAT_14c80ad08);
          if (puVar17 == (uint3 *)0x0) goto LAB_1467855e3;
          uVar25 = (uint)((*(ulonglong *)(puVar17 + 4) & 0xffffffffffff) != uVar18);
          if ((*(ulonglong *)(puVar17 + 4) & 0xffffffffffff) < uVar18) {
            uVar25 = 0xffffffff;
          }
          uVar22 = -uVar25;
          if (uVar28 < uVar18) {
            uVar22 = uVar25;
          }
        } while (0 < (int)uVar22);
        if (DAT_14c758498 <= uVar12 * 8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        puVar10 = (undefined2 *)((longlong)puVar16 + lVar9);
        lVar21 = 0;
        do {
          *(char *)((longlong)puVar1 + lVar21) = (char)uVar20;
          uVar20 = uVar20 >> 8;
          lVar21 = lVar21 + 1;
        } while (lVar21 != 3);
        uVar20 = (longlong)puVar7 - DAT_14c80ad08;
        if (DAT_14c758498 <= uVar20) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if ((uVar20 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (uVar20 < 8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar20 = uVar20 >> 3;
        lVar21 = 0;
        do {
          *(char *)((longlong)puVar17 + lVar21) = (char)uVar20;
          uVar20 = uVar20 >> 8;
          lVar21 = lVar21 + 1;
        } while (lVar21 != 3);
        uVar12 = (uint)CONCAT12(*(undefined1 *)((longlong)puVar17 + lVar13 + 5),
                                *(undefined2 *)((longlong)puVar17 + lVar26));
        if (uVar12 == 0) break;
        uVar20 = (ulonglong)(uVar12 * 8);
        bVar27 = false;
        puVar24 = (uint3 *)(uVar20 + DAT_14c80ad08);
      } while (puVar24 != (uint3 *)0x0);
      *(undefined1 *)(puVar10 + 1) = 0;
      *puVar10 = 0;
    }
    return;
  }
  *(undefined1 *)((longlong)param_2 + 2) = 0;
  *(undefined2 *)param_2 = 0;
  FUN_146784ba3(param_1,param_2);
LAB_146784fde:
  FUN_146784ba3(lVar11,param_2);
  return;
code_r0x0001467852be:
  uVar20 = (*(ulonglong *)(lVar9 + 0x18) & 0xffffffffffff) -
           (*(ulonglong *)(lVar9 + 0x10) & 0xffffffffffff);
  if (uVar20 < uVar18) goto code_r0x0001467852d4;
  goto LAB_146785295;
code_r0x0001467852d4:
  uVar18 = lVar13 - DAT_14c80ad08;
  if (DAT_14c758498 <= uVar18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((uVar18 & 7) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (uVar18 < 8) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar18 = uVar18 >> 3;
  lVar26 = 0;
  do {
    *(char *)(lVar15 + lVar19 + lVar26) = (char)uVar18;
    uVar18 = uVar18 >> 8;
    lVar26 = lVar26 + 1;
  } while (lVar26 != 3);
  FUN_146784ba3(lVar13);
  lVar26 = DAT_14c80ad08;
LAB_146785248:
  puVar17 = (uint3 *)(lVar13 + lVar23);
  uVar12 = (uint)CONCAT12(*(undefined1 *)(lVar13 + 2 + lVar23),*(undefined2 *)(lVar13 + lVar23));
  if ((uVar12 == 0) || (lVar15 = lVar26 + (ulonglong)uVar12 * 8, lVar21 = lVar13, lVar15 == 0))
  goto LAB_146785589;
  goto LAB_146785230;
}



// FUNCTION 146785655 FUN_146785655 body=5210 status=ok
// SIG undefined FUN_146785655(void)

void FUN_146785655(uint3 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  code *pcVar4;
  uint3 uVar5;
  uint3 *puVar6;
  char cVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  uint3 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  byte bVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  uint3 *puVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint3 *puVar26;
  uint uVar27;
  byte bVar28;
  ulonglong uVar29;
  bool bVar30;
  undefined1 auStack_118 [40];
  ulonglong local_f0;
  uint3 *local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  puVar12 = (uint3 *)(DAT_14c80ad08 + (ulonglong)(uint)*param_1 * 8);
  if (puVar12 == (uint3 *)0x0 || *param_1 == 0) {
LAB_1467856b5:
    puVar19 = (uint3 *)0x0;
  }
  else {
    puVar19 = (uint3 *)0x0;
    do {
      if ((*(ulonglong *)(puVar12 + 4) & 0xffffffffffff) < (*param_2 & 0xffffffffffff)) {
        uVar5 = *(uint3 *)((longlong)puVar12 + 6);
        puVar19 = puVar12;
      }
      else {
        uVar5 = *(uint3 *)((longlong)puVar12 + 3);
      }
    } while ((uVar5 != 0) &&
            (puVar12 = (uint3 *)((ulonglong)uVar5 * 8 + DAT_14c80ad08), puVar12 != (uint3 *)0x0));
    if ((puVar19 == (uint3 *)0x0) ||
       (((*param_2 ^ *(ulonglong *)(puVar19 + 6)) & 0xffffffffffff) != 0)) goto LAB_1467856b5;
    local_78 = *(ulonglong *)(puVar19 + 4);
    uStack_70 = *(ulonglong *)(puVar19 + 6);
    local_68 = *(ulonglong *)(puVar19 + 8);
    uStack_60 = *(ulonglong *)(puVar19 + 10);
    local_98 = *param_2;
    uStack_90 = param_2[1];
    local_88 = param_2[2];
    uStack_80 = param_2[3];
    cVar7 = FUN_146786ade(&local_78,&local_98,param_3);
    if (cVar7 == '\0') goto LAB_1467856b5;
  }
  uVar24 = param_2[1];
  puVar12 = (uint3 *)(DAT_14c80ad08 + (ulonglong)(uint)*param_1 * 8);
  if (puVar12 == (uint3 *)0x0 || *param_1 == 0) {
    puVar26 = (uint3 *)0x0;
  }
  else {
    puVar26 = (uint3 *)0x0;
    while ((*(ulonglong *)(puVar12 + 4) & 0xffffffffffff) != (uVar24 & 0xffffffffffff)) {
      if ((uVar24 & 0xffffffffffff) < (*(ulonglong *)(puVar12 + 4) & 0xffffffffffff)) {
        uVar3 = *(undefined2 *)((longlong)puVar12 + 3);
        uVar2 = *(undefined1 *)((longlong)puVar12 + 5);
      }
      else {
        uVar3 = *(undefined2 *)((longlong)puVar12 + 6);
        uVar2 = (undefined1)puVar12[2];
      }
      if ((CONCAT12(uVar2,uVar3) == 0) ||
         (puVar12 = (uint3 *)((ulonglong)CONCAT12(uVar2,uVar3) * 8 + DAT_14c80ad08),
         puVar12 == (uint3 *)0x0)) goto LAB_1467856e8;
    }
    local_78 = *(ulonglong *)(puVar12 + 4);
    uStack_70 = *(ulonglong *)(puVar12 + 6);
    local_68 = *(ulonglong *)(puVar12 + 8);
    uStack_60 = *(ulonglong *)(puVar12 + 10);
    local_98 = *param_2;
    uStack_90 = param_2[1];
    local_88 = param_2[2];
    uStack_80 = param_2[3];
    cVar7 = FUN_146786ade(&local_78,&local_98,param_3);
    puVar26 = (uint3 *)0x0;
    if (cVar7 != '\0') {
      puVar26 = puVar12;
    }
    uVar24 = param_2[1];
  }
LAB_1467856e8:
  local_58 = param_2[2];
  uStack_50 = param_2[3];
  if (puVar19 == (uint3 *)0x0) {
    uVar16 = *param_2;
    if (puVar26 == (uint3 *)0x0) {
      local_78 = *param_2;
      uStack_70 = param_2[1];
      local_68 = param_2[2];
      uStack_60 = param_2[3];
      FUN_146787054(param_1);
      goto LAB_146785964;
    }
LAB_146785992:
    local_88 = local_58;
    uStack_80 = uStack_50;
    local_b8 = *(undefined4 *)(puVar26 + 4);
    uStack_b4 = *(undefined4 *)(puVar26 + 5);
    uStack_b0 = *(undefined4 *)(puVar26 + 6);
    uStack_ac = *(undefined4 *)(puVar26 + 7);
    local_a8 = *(undefined4 *)(puVar26 + 8);
    uStack_a4 = *(undefined4 *)(puVar26 + 9);
    uStack_a0 = *(undefined4 *)(puVar26 + 10);
    uStack_9c = *(undefined4 *)(puVar26 + 0xb);
    local_98 = uVar16;
    uStack_90 = uVar24;
    FUN_146786bd0(&local_78);
    uVar16 = local_78;
    local_e0 = uStack_70;
    local_58 = local_68;
    uStack_50 = uStack_60;
    if (puVar19 == (uint3 *)0x0) {
      uVar24 = (longlong)param_1 + 3;
      puVar12 = (uint3 *)0x0;
      if (*(uint3 *)((longlong)param_1 + 3) != 0) {
        puVar12 = (uint3 *)(DAT_14c80ad08 + (ulonglong)(uint)*(uint3 *)((longlong)param_1 + 3) * 8);
      }
      if (puVar12 == puVar26) {
        uVar8 = FUN_146784adf(puVar26);
        FUN_146784ba3(uVar24,uVar8);
      }
      lVar20 = 0;
      lVar11 = DAT_14c80ad08 + (ulonglong)(uint)*puVar26 * 8;
      if (*puVar26 == 0) {
        lVar11 = lVar20;
      }
      lVar21 = DAT_14c80ad08 + (ulonglong)(uint)*(uint3 *)((longlong)puVar26 + 3) * 8;
      if (*(uint3 *)((longlong)puVar26 + 3) == 0) {
        lVar21 = lVar20;
      }
      lVar14 = DAT_14c80ad08 + (ulonglong)(uint)*(uint3 *)((longlong)puVar26 + 6) * 8;
      if (*(uint3 *)((longlong)puVar26 + 6) == 0) {
        lVar14 = lVar20;
      }
      puVar12 = param_1;
      if (lVar11 != 0) {
        puVar19 = (uint3 *)0x0;
        if (*(uint3 *)(lVar11 + 3) != 0) {
          puVar19 = (uint3 *)(DAT_14c80ad08 + (ulonglong)(uint)*(uint3 *)(lVar11 + 3) * 8);
        }
        puVar12 = (uint3 *)(lVar11 + 6);
        if (puVar19 == puVar26) {
          puVar12 = (uint3 *)(lVar11 + 3);
        }
      }
      local_e8 = puVar26;
      if (lVar21 == 0) {
        FUN_146784ba3(puVar12,lVar14);
        if (lVar14 != 0) {
LAB_146785b96:
          FUN_146784ba3(lVar14,lVar11);
        }
      }
      else {
        if (lVar14 == 0) {
          uVar23 = lVar21 - DAT_14c80ad08;
          if (DAT_14c758498 <= uVar23) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if ((uVar23 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if (uVar23 < 8) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar23 = uVar23 >> 3;
          lVar20 = 0;
          do {
            *(char *)((longlong)puVar12 + lVar20) = (char)uVar23;
            uVar23 = uVar23 >> 8;
            lVar20 = lVar20 + 1;
            lVar14 = lVar21;
          } while (lVar20 != 3);
          goto LAB_146785b96;
        }
        local_d0 = uVar16;
        local_d8 = (*(ulonglong *)(lVar21 + 0x18) & 0xffffffffffff) -
                   (*(ulonglong *)(lVar21 + 0x10) & 0xffffffffffff);
        uVar23 = (*(ulonglong *)(lVar14 + 0x18) & 0xffffffffffff) -
                 (*(ulonglong *)(lVar14 + 0x10) & 0xffffffffffff);
        uVar16 = uVar23;
        lVar20 = lVar14;
        if (local_d8 < uVar23) {
          uVar16 = local_d8;
          lVar20 = lVar21;
          lVar21 = lVar14;
        }
        uVar29 = lVar21 - DAT_14c80ad08;
        if (DAT_14c758498 <= uVar29) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if ((uVar29 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (uVar29 < 8) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar29 = uVar29 >> 3;
        lVar14 = 0;
        do {
          *(char *)((longlong)puVar12 + lVar14) = (char)uVar29;
          uVar29 = uVar29 >> 8;
          lVar14 = lVar14 + 1;
        } while (lVar14 != 3);
        bVar30 = uVar23 <= local_d8;
        local_f0 = uVar24;
        FUN_146784ba3(lVar21,lVar11);
        puVar12 = (uint3 *)(lVar21 + (ulonglong)bVar30 * 3 + 3);
        if ((*puVar12 != 0) && (lVar11 = DAT_14c80ad08 + (ulonglong)(uint)*puVar12 * 8, lVar11 != 0)
           ) {
          uVar24 = (ulonglong)bVar30 * 3 + 3;
          lVar17 = (ulonglong)(local_d8 < uVar23) * 3 + 3;
          lVar14 = DAT_14c80ad08;
          lVar25 = lVar21;
          local_c8 = uVar24;
LAB_146785f62:
          lVar21 = lVar11;
          uVar23 = (*(ulonglong *)(lVar21 + 0x18) & 0xffffffffffff) -
                   (*(ulonglong *)(lVar21 + 0x10) & 0xffffffffffff);
          if (uVar23 < uVar16) {
            FUN_146784ba3(puVar12,lVar20);
            FUN_146784ba3(lVar20,lVar25);
            puVar26 = local_e8;
            uVar24 = local_f0;
LAB_146785fc5:
            lVar11 = lVar20;
            uVar10 = (uint)CONCAT12(*(undefined1 *)(lVar11 + 2 + lVar17),
                                    *(undefined2 *)(lVar11 + lVar17));
            if ((uVar10 != 0) && (lVar20 = DAT_14c80ad08 + (ulonglong)uVar10 * 8, lVar20 != 0))
            goto code_r0x000146785fee;
            uVar16 = lVar21 - DAT_14c80ad08;
            if (DAT_14c758498 <= uVar16) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            if ((uVar16 & 7) != 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            if (uVar16 < 8) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            uVar16 = uVar16 >> 3;
            lVar20 = 0;
            do {
              *(char *)(lVar17 + lVar11 + lVar20) = (char)uVar16;
              uVar16 = uVar16 >> 8;
              lVar20 = lVar20 + 1;
            } while (lVar20 != 3);
            FUN_146784ba3(lVar21);
            uVar16 = local_d0;
            goto LAB_146785b9e;
          }
          goto LAB_146785f78;
        }
LAB_14678690c:
        FUN_146784ba3(puVar12,lVar20);
        FUN_146784ba3(lVar20,lVar21);
        uVar24 = local_f0;
        uVar16 = local_d0;
        puVar26 = local_e8;
      }
LAB_146785b9e:
      puVar12 = local_e8;
      if (((*(ulonglong *)(puVar26 + 6) ^ local_e0) & 0xffffffffffff) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      *(ulonglong *)(puVar26 + 4) = uVar16;
      *(ulonglong *)(puVar26 + 6) = local_e0;
      *(undefined4 *)(puVar26 + 8) = (undefined4)local_58;
      *(undefined4 *)(puVar26 + 9) = local_58._4_4_;
      *(undefined4 *)(puVar26 + 10) = (undefined4)uStack_50;
      *(undefined4 *)(puVar26 + 0xb) = uStack_50._4_4_;
      *(undefined8 *)puVar26 = 0;
      *(undefined1 *)(puVar26 + 2) = 0;
      puVar19 = (uint3 *)(DAT_14c80ad08 + (ulonglong)(uint)*param_1 * 8);
      if (puVar19 == (uint3 *)0x0 || *param_1 == 0) {
        *(undefined1 *)((longlong)puVar26 + 2) = 0;
        *(undefined2 *)puVar26 = 0;
        FUN_146784ba3(param_1,puVar26);
LAB_146785c1b:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_118);
      }
      uVar16 = uVar16 & 0xffffffffffff;
      uVar23 = (local_e0 & 0xffffffffffff) - uVar16;
      uVar29 = *(ulonglong *)(puVar19 + 4) & 0xffffffffffff;
      if ((*(ulonglong *)(puVar19 + 6) & 0xffffffffffff) - uVar29 < uVar23) {
        bVar28 = 1;
        puVar26 = (uint3 *)0x0;
      }
      else {
        bVar28 = 1;
        do {
          puVar26 = puVar19;
          bVar28 = uVar16 < uVar29 & bVar28;
          lVar20 = (ulonglong)(uVar29 <= uVar16) * 3 + 3;
          lVar11 = (ulonglong)(uVar29 <= uVar16) * 3;
          uVar10 = (uint)CONCAT12(*(undefined1 *)((longlong)puVar26 + lVar11 + 5),
                                  *(undefined2 *)((longlong)puVar26 + lVar11 + 3));
          if ((uVar10 == 0) ||
             (puVar19 = (uint3 *)(DAT_14c80ad08 + (ulonglong)uVar10 * 8), puVar19 == (uint3 *)0x0))
          {
            FUN_146784ba3(local_e8);
            FUN_146784ba3(lVar20 + (longlong)puVar26,puVar12);
            goto joined_r0x000146786517;
          }
          uVar29 = *(ulonglong *)(puVar19 + 4) & 0xffffffffffff;
        } while (uVar23 <= (*(ulonglong *)(puVar19 + 6) & 0xffffffffffff) - uVar29);
        param_1 = (uint3 *)(lVar20 + (longlong)puVar26);
      }
      local_e0 = CONCAT71(local_e0._1_7_,uVar16 <= uVar29);
      local_f0 = uVar24;
      local_d0 = uVar16;
      FUN_146784ba3(local_e8,puVar26);
      FUN_146784ba3(param_1,puVar12);
      uVar24 = local_d0;
      puVar12 = local_e8;
      uVar16 = (longlong)puVar19 - DAT_14c80ad08;
      if (DAT_14c758498 <= uVar16) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if ((uVar16 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (uVar16 < 8) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      bVar28 = bVar28 & (byte)local_e0;
      uVar23 = local_e0 & 0xff;
      local_e0 = uVar23 * 3 + 3;
      uVar16 = uVar16 >> 3;
      lVar11 = 0;
      do {
        *(char *)((longlong)local_e8 + lVar11 + uVar23 * 3 + 3) = (char)uVar16;
        uVar16 = uVar16 >> 8;
        lVar11 = lVar11 + 1;
      } while (lVar11 != 3);
      bVar30 = uVar29 < local_d0;
      FUN_146784ba3(puVar19,local_e8);
      lVar11 = (ulonglong)bVar30 * 3;
      puVar9 = (undefined2 *)((longlong)puVar12 + lVar11 + 3);
      uVar10 = (uint)CONCAT12(*(undefined1 *)((longlong)puVar19 + lVar11 + 5),
                              *(undefined2 *)((longlong)puVar19 + lVar11 + 3));
      uVar16 = (ulonglong)(uVar10 * 8);
      puVar26 = (uint3 *)(uVar16 + DAT_14c80ad08);
      if (puVar26 != (uint3 *)0x0 && uVar10 != 0) {
        lVar11 = (ulonglong)bVar30 * 3;
        lVar20 = lVar11 + 3;
        do {
          uVar27 = (uint)((*(ulonglong *)(puVar26 + 4) & 0xffffffffffff) != uVar24);
          if ((*(ulonglong *)(puVar26 + 4) & 0xffffffffffff) < uVar24) {
            uVar27 = 0xffffffff;
          }
          puVar6 = puVar19;
          uVar22 = -uVar27;
          if (uVar29 < uVar24) {
            uVar22 = uVar27;
          }
          while (puVar19 = puVar26, (int)uVar22 < 1) {
            uVar10 = (uint)CONCAT12(*(undefined1 *)((longlong)puVar19 + lVar11 + 5),
                                    *(undefined2 *)((longlong)puVar19 + lVar20));
            if (uVar10 == 0) goto LAB_146785d67;
            uVar16 = (ulonglong)(uVar10 * 8);
            puVar26 = (uint3 *)(uVar16 + DAT_14c80ad08);
            if (puVar26 == (uint3 *)0x0) goto LAB_146785d67;
            uVar27 = (uint)((*(ulonglong *)(puVar26 + 4) & 0xffffffffffff) != uVar24);
            if ((*(ulonglong *)(puVar26 + 4) & 0xffffffffffff) < uVar24) {
              uVar27 = 0xffffffff;
            }
            puVar6 = puVar19;
            uVar22 = -uVar27;
            if (uVar29 < uVar24) {
              uVar22 = uVar27;
            }
          }
          uVar23 = (ulonglong)uVar10;
          if (DAT_14c758498 <= uVar16) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          puVar1 = (undefined2 *)((longlong)puVar6 + lVar20);
          lVar21 = 0;
          do {
            *(char *)((longlong)puVar9 + lVar21) = (char)uVar23;
            uVar23 = uVar23 >> 8;
            lVar21 = lVar21 + 1;
          } while (lVar21 != 3);
          FUN_146784ba3(puVar19,puVar12);
          do {
            puVar12 = puVar19;
            uVar10 = (uint)CONCAT12(*(undefined1 *)((longlong)puVar12 + local_e0 + 2),
                                    *(undefined2 *)((longlong)puVar12 + local_e0));
            uVar16 = (ulonglong)uVar10;
            if (uVar10 == 0) {
LAB_146786965:
              *(undefined1 *)(puVar1 + 1) = 0;
              *puVar1 = 0;
              goto LAB_146786972;
            }
            puVar19 = (uint3 *)((ulonglong)(uVar10 * 8) + DAT_14c80ad08);
            if (puVar19 == (uint3 *)0x0) goto LAB_146786965;
            uVar27 = (uint)((*(ulonglong *)(puVar19 + 4) & 0xffffffffffff) != uVar24);
            if ((*(ulonglong *)(puVar19 + 4) & 0xffffffffffff) < uVar24) {
              uVar27 = 0xffffffff;
            }
            uVar22 = -uVar27;
            if (uVar29 < uVar24) {
              uVar22 = uVar27;
            }
          } while (0 < (int)uVar22);
          if (DAT_14c758498 <= uVar10 * 8) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          puVar9 = (undefined2 *)((longlong)puVar12 + local_e0);
          lVar21 = 0;
          do {
            *(char *)((longlong)puVar1 + lVar21) = (char)uVar16;
            uVar16 = uVar16 >> 8;
            lVar21 = lVar21 + 1;
          } while (lVar21 != 3);
          uVar16 = (longlong)puVar6 - DAT_14c80ad08;
          if (DAT_14c758498 <= uVar16) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if ((uVar16 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if (uVar16 < 8) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar16 = uVar16 >> 3;
          lVar21 = 0;
          do {
            *(char *)((longlong)puVar19 + lVar21) = (char)uVar16;
            uVar16 = uVar16 >> 8;
            lVar21 = lVar21 + 1;
          } while (lVar21 != 3);
          uVar10 = (uint)CONCAT12(*(undefined1 *)((longlong)puVar19 + lVar11 + 5),
                                  *(undefined2 *)((longlong)puVar19 + lVar20));
          if (uVar10 == 0) break;
          uVar16 = (ulonglong)(uVar10 * 8);
          bVar28 = 0;
          puVar26 = (uint3 *)(uVar16 + DAT_14c80ad08);
        } while (puVar26 != (uint3 *)0x0);
        goto LAB_14678628f;
      }
LAB_146785d67:
      *(undefined1 *)(puVar9 + 1) = 0;
      *puVar9 = 0;
joined_r0x000146786517:
      if (bVar28 != 0) goto LAB_146785c1b;
      goto LAB_146785964;
    }
    FUN_146786cb6(param_1,puVar26);
    uVar24 = local_e0;
  }
  else {
    local_88 = param_2[2];
    uStack_80 = param_2[3];
    local_b8 = *(undefined4 *)(puVar19 + 4);
    uStack_b4 = *(undefined4 *)(puVar19 + 5);
    uStack_b0 = *(undefined4 *)(puVar19 + 6);
    uStack_ac = *(undefined4 *)(puVar19 + 7);
    local_a8 = *(undefined4 *)(puVar19 + 8);
    uStack_a4 = *(undefined4 *)(puVar19 + 9);
    uStack_a0 = *(undefined4 *)(puVar19 + 10);
    uStack_9c = *(undefined4 *)(puVar19 + 0xb);
    local_98 = *param_2;
    uStack_90 = uVar24;
    FUN_146786bd0(&local_78);
    local_58 = local_68;
    uStack_50 = uStack_60;
    uVar16 = local_78;
    uVar24 = uStack_70;
    if (puVar26 != (uint3 *)0x0) goto LAB_146785992;
  }
  uVar23 = *(ulonglong *)(puVar19 + 4) & 0xffffffffffff;
  if (uVar23 != (uVar16 & 0xffffffffffff)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_e8 = (uint3 *)(uVar24 & 0xffffffffffff);
  if (local_e8 <= (uint3 *)(*(ulonglong *)(puVar19 + 6) & 0xffffffffffff)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar10 = (uint)*(uint3 *)((longlong)puVar19 + 3);
  uVar29 = (ulonglong)(uint)*(uint3 *)((longlong)puVar19 + 6);
  lVar11 = DAT_14c80ad08 + uVar29 * 8;
  lVar20 = 0;
  if (*(uint3 *)((longlong)puVar19 + 6) != 0) {
    lVar20 = lVar11;
  }
  lVar21 = DAT_14c80ad08 + (ulonglong)uVar10 * 8;
  local_e0 = uVar24;
  if (((lVar21 == 0 || uVar10 == 0) ||
      ((longlong)local_e8 - uVar23 <=
       (*(ulonglong *)(lVar21 + 0x18) & 0xffffffffffff) -
       (*(ulonglong *)(lVar21 + 0x10) & 0xffffffffffff))) &&
     ((lVar20 == 0 ||
      ((longlong)local_e8 - uVar23 <=
       (*(ulonglong *)(lVar20 + 0x18) & 0xffffffffffff) -
       (*(ulonglong *)(lVar20 + 0x10) & 0xffffffffffff))))) {
    *(ulonglong *)(puVar19 + 4) = uVar16;
    *(ulonglong *)(puVar19 + 6) = uVar24;
    *(undefined4 *)(puVar19 + 8) = (undefined4)local_58;
    *(undefined4 *)(puVar19 + 9) = local_58._4_4_;
    *(undefined4 *)(puVar19 + 10) = (undefined4)uStack_50;
    *(undefined4 *)(puVar19 + 0xb) = uStack_50._4_4_;
    goto LAB_146785964;
  }
  uVar24 = (longlong)param_1 + 3;
  puVar12 = (uint3 *)0x0;
  if (*(uint3 *)((longlong)param_1 + 3) != 0) {
    puVar12 = (uint3 *)(DAT_14c80ad08 + (ulonglong)(uint)*(uint3 *)((longlong)param_1 + 3) * 8);
  }
  if (puVar12 == puVar19) {
    uVar8 = FUN_146784adf(puVar19);
    FUN_146784ba3(uVar24,uVar8);
    uVar10 = (uint)*(uint3 *)((longlong)puVar19 + 3);
    uVar29 = (ulonglong)*(uint3 *)((longlong)puVar19 + 6);
    lVar21 = DAT_14c80ad08 + (ulonglong)*(uint3 *)((longlong)puVar19 + 3) * 8;
    lVar11 = DAT_14c80ad08 + uVar29 * 8;
  }
  lVar14 = 0;
  lVar20 = DAT_14c80ad08 + (ulonglong)(uint)*puVar19 * 8;
  if (*puVar19 == 0) {
    lVar20 = lVar14;
  }
  if (uVar10 == 0) {
    lVar21 = lVar14;
  }
  if ((int)uVar29 == 0) {
    lVar11 = lVar14;
  }
  puVar12 = param_1;
  if (lVar20 != 0) {
    puVar26 = (uint3 *)0x0;
    if (*(uint3 *)(lVar20 + 3) != 0) {
      puVar26 = (uint3 *)(DAT_14c80ad08 + (ulonglong)(uint)*(uint3 *)(lVar20 + 3) * 8);
    }
    puVar12 = (uint3 *)(lVar20 + 6);
    if (puVar26 == puVar19) {
      puVar12 = (uint3 *)(lVar20 + 3);
    }
  }
  local_f0 = uVar23;
  if (lVar21 == 0) {
    FUN_146784ba3(puVar12,lVar11);
    if (lVar11 != 0) {
LAB_1467862e4:
      FUN_146784ba3(lVar11,lVar20);
    }
  }
  else {
    if (lVar11 == 0) {
      uVar29 = lVar21 - DAT_14c80ad08;
      if (DAT_14c758498 <= uVar29) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if ((uVar29 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (uVar29 < 8) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar29 = uVar29 >> 3;
      lVar14 = 0;
      do {
        *(char *)((longlong)puVar12 + lVar14) = (char)uVar29;
        uVar29 = uVar29 >> 8;
        lVar14 = lVar14 + 1;
        lVar11 = lVar21;
      } while (lVar14 != 3);
      goto LAB_1467862e4;
    }
    local_c8 = (*(ulonglong *)(lVar21 + 0x18) & 0xffffffffffff) -
               (*(ulonglong *)(lVar21 + 0x10) & 0xffffffffffff);
    uVar23 = (*(ulonglong *)(lVar11 + 0x18) & 0xffffffffffff) -
             (*(ulonglong *)(lVar11 + 0x10) & 0xffffffffffff);
    uVar29 = uVar23;
    lVar14 = lVar11;
    if (local_c8 < uVar23) {
      uVar29 = local_c8;
      lVar14 = lVar21;
      lVar21 = lVar11;
    }
    uVar13 = lVar21 - DAT_14c80ad08;
    local_d0 = uVar16;
    if (DAT_14c758498 <= uVar13) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if ((uVar13 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (uVar13 < 8) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar13 = uVar13 >> 3;
    lVar11 = 0;
    do {
      *(char *)((longlong)puVar12 + lVar11) = (char)uVar13;
      uVar13 = uVar13 >> 8;
      lVar11 = lVar11 + 1;
    } while (lVar11 != 3);
    bVar30 = uVar23 <= local_c8;
    local_d8 = uVar24;
    FUN_146784ba3(lVar21,lVar20);
    puVar12 = (uint3 *)(lVar21 + (ulonglong)bVar30 * 3 + 3);
    if ((*puVar12 != 0) && (lVar11 = DAT_14c80ad08 + (ulonglong)(uint)*puVar12 * 8, lVar11 != 0)) {
      lVar17 = (ulonglong)bVar30 * 3 + 3;
      lVar18 = (ulonglong)(local_c8 < uVar23) * 3 + 3;
      lVar20 = DAT_14c80ad08;
      lVar25 = lVar21;
      local_c0 = lVar17;
LAB_146786610:
      lVar21 = lVar11;
      uVar16 = (*(ulonglong *)(lVar21 + 0x18) & 0xffffffffffff) -
               (*(ulonglong *)(lVar21 + 0x10) & 0xffffffffffff);
      if (uVar16 < uVar29) {
        FUN_146784ba3(puVar12,lVar14);
        FUN_146784ba3(lVar14,lVar25);
        uVar24 = local_d8;
        uVar23 = local_f0;
LAB_146786671:
        lVar11 = lVar14;
        uVar10 = (uint)CONCAT12(*(undefined1 *)(lVar11 + 2 + lVar18),
                                *(undefined2 *)(lVar11 + lVar18));
        if ((uVar10 != 0) && (lVar14 = DAT_14c80ad08 + (ulonglong)uVar10 * 8, lVar14 != 0))
        goto code_r0x000146786692;
        uVar16 = lVar21 - DAT_14c80ad08;
        if (DAT_14c758498 <= uVar16) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if ((uVar16 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (uVar16 < 8) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar16 = uVar16 >> 3;
        lVar20 = 0;
        do {
          *(char *)(lVar18 + lVar11 + lVar20) = (char)uVar16;
          uVar16 = uVar16 >> 8;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 3);
        FUN_146784ba3(lVar21);
        uVar16 = local_d0;
        goto LAB_1467862ec;
      }
      goto LAB_146786626;
    }
LAB_1467869d3:
    FUN_146784ba3(puVar12,lVar14);
    FUN_146784ba3(lVar14,lVar21);
    uVar24 = local_d8;
    uVar16 = local_d0;
    uVar23 = local_f0;
  }
LAB_1467862ec:
  *(ulonglong *)(puVar19 + 4) = uVar16;
  *(ulonglong *)(puVar19 + 6) = local_e0;
  *(undefined4 *)(puVar19 + 8) = (undefined4)local_58;
  *(undefined4 *)(puVar19 + 9) = local_58._4_4_;
  *(undefined4 *)(puVar19 + 10) = (undefined4)uStack_50;
  *(undefined4 *)(puVar19 + 0xb) = uStack_50._4_4_;
  *(undefined8 *)puVar19 = 0;
  *(undefined1 *)(puVar19 + 2) = 0;
  puVar12 = (uint3 *)(DAT_14c80ad08 + (ulonglong)(uint)*param_1 * 8);
  if (puVar12 == (uint3 *)0x0 || *param_1 == 0) {
    *(undefined1 *)((longlong)puVar19 + 2) = 0;
    *(undefined2 *)puVar19 = 0;
    FUN_146784ba3(param_1,puVar19);
  }
  else {
    uVar16 = *(ulonglong *)(puVar12 + 4) & 0xffffffffffff;
    bVar15 = 1;
    bVar28 = 1;
    local_d8 = uVar24;
    if ((*(ulonglong *)(puVar12 + 6) & 0xffffffffffff) - uVar16 < (longlong)local_e8 - uVar23) {
      puVar26 = (uint3 *)0x0;
    }
    else {
      do {
        puVar26 = puVar12;
        bVar15 = uVar23 < uVar16 & bVar28;
        lVar20 = (ulonglong)(uVar16 <= uVar23) * 3 + 3;
        lVar11 = (ulonglong)(uVar16 <= uVar23) * 3;
        uVar10 = (uint)CONCAT12(*(undefined1 *)((longlong)puVar26 + lVar11 + 5),
                                *(undefined2 *)((longlong)puVar26 + lVar11 + 3));
        if ((uVar10 == 0) ||
           (puVar12 = (uint3 *)(DAT_14c80ad08 + (ulonglong)uVar10 * 8), puVar12 == (uint3 *)0x0)) {
          FUN_146784ba3(puVar19);
          FUN_146784ba3(lVar20 + (longlong)puVar26,puVar19);
          goto LAB_14678647f;
        }
        uVar16 = *(ulonglong *)(puVar12 + 4) & 0xffffffffffff;
        bVar28 = bVar15;
      } while ((longlong)local_e8 - uVar23 <=
               (*(ulonglong *)(puVar12 + 6) & 0xffffffffffff) - uVar16);
      param_1 = (uint3 *)(lVar20 + (longlong)puVar26);
    }
    local_e0 = CONCAT71(local_e0._1_7_,local_f0 <= uVar16);
    FUN_146784ba3(puVar19,puVar26);
    FUN_146784ba3(param_1,puVar19);
    uVar24 = (longlong)puVar12 - DAT_14c80ad08;
    if (DAT_14c758498 <= uVar24) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if ((uVar24 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (uVar24 < 8) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    bVar15 = bVar15 & (byte)local_e0;
    uVar23 = local_e0 & 0xff;
    local_e0 = uVar23 * 3 + 3;
    uVar24 = uVar24 >> 3;
    lVar11 = 0;
    do {
      *(char *)((longlong)puVar19 + lVar11 + uVar23 * 3 + 3) = (char)uVar24;
      uVar24 = uVar24 >> 8;
      lVar11 = lVar11 + 1;
    } while (lVar11 != 3);
    bVar30 = uVar16 < local_f0;
    FUN_146784ba3(puVar12,puVar19);
    lVar11 = (ulonglong)bVar30 * 3;
    puVar9 = (undefined2 *)((longlong)puVar19 + lVar11 + 3);
    uVar10 = (uint)CONCAT12(*(undefined1 *)((longlong)puVar12 + lVar11 + 5),
                            *(undefined2 *)((longlong)puVar12 + lVar11 + 3));
    uVar24 = (ulonglong)(uVar10 * 8);
    puVar26 = (uint3 *)(uVar24 + DAT_14c80ad08);
    if (puVar26 != (uint3 *)0x0 && uVar10 != 0) {
      lVar11 = (ulonglong)bVar30 * 3;
      lVar20 = lVar11 + 3;
      local_e8 = puVar19;
      do {
        uVar27 = (uint)((*(ulonglong *)(puVar26 + 4) & 0xffffffffffff) != local_f0);
        if ((*(ulonglong *)(puVar26 + 4) & 0xffffffffffff) < local_f0) {
          uVar27 = 0xffffffff;
        }
        puVar19 = puVar12;
        uVar22 = -uVar27;
        if (uVar16 < local_f0) {
          uVar22 = uVar27;
        }
        while (puVar12 = puVar26, (int)uVar22 < 1) {
          uVar10 = (uint)CONCAT12(*(undefined1 *)((longlong)puVar12 + lVar11 + 5),
                                  *(undefined2 *)((longlong)puVar12 + lVar20));
          if (uVar10 == 0) goto LAB_146786472;
          uVar24 = (ulonglong)(uVar10 * 8);
          puVar26 = (uint3 *)(uVar24 + DAT_14c80ad08);
          if (puVar26 == (uint3 *)0x0) goto LAB_146786472;
          uVar27 = (uint)((*(ulonglong *)(puVar26 + 4) & 0xffffffffffff) != local_f0);
          if ((*(ulonglong *)(puVar26 + 4) & 0xffffffffffff) < local_f0) {
            uVar27 = 0xffffffff;
          }
          puVar19 = puVar12;
          uVar22 = -uVar27;
          if (uVar16 < local_f0) {
            uVar22 = uVar27;
          }
        }
        uVar23 = (ulonglong)uVar10;
        if (DAT_14c758498 <= uVar24) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        puVar1 = (undefined2 *)((longlong)puVar19 + lVar20);
        lVar21 = 0;
        do {
          *(char *)((longlong)puVar9 + lVar21) = (char)uVar23;
          uVar23 = uVar23 >> 8;
          lVar21 = lVar21 + 1;
        } while (lVar21 != 3);
        FUN_146784ba3(puVar12,local_e8);
        do {
          puVar26 = puVar12;
          uVar10 = (uint)CONCAT12(*(undefined1 *)((longlong)puVar26 + local_e0 + 2),
                                  *(undefined2 *)((longlong)puVar26 + local_e0));
          uVar24 = (ulonglong)uVar10;
          if (uVar10 == 0) {
LAB_146786a35:
            *(undefined1 *)(puVar1 + 1) = 0;
            *puVar1 = 0;
            goto LAB_146786972;
          }
          puVar12 = (uint3 *)((ulonglong)(uVar10 * 8) + DAT_14c80ad08);
          if (puVar12 == (uint3 *)0x0) goto LAB_146786a35;
          uVar27 = (uint)((*(ulonglong *)(puVar12 + 4) & 0xffffffffffff) != local_f0);
          if ((*(ulonglong *)(puVar12 + 4) & 0xffffffffffff) < local_f0) {
            uVar27 = 0xffffffff;
          }
          uVar22 = -uVar27;
          if (uVar16 < local_f0) {
            uVar22 = uVar27;
          }
        } while (0 < (int)uVar22);
        if (DAT_14c758498 <= uVar10 * 8) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        puVar9 = (undefined2 *)(local_e0 + (longlong)puVar26);
        lVar21 = 0;
        do {
          *(char *)((longlong)puVar1 + lVar21) = (char)uVar24;
          uVar24 = uVar24 >> 8;
          lVar21 = lVar21 + 1;
        } while (lVar21 != 3);
        uVar24 = (longlong)puVar19 - DAT_14c80ad08;
        if (DAT_14c758498 <= uVar24) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if ((uVar24 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        if (uVar24 < 8) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar24 = uVar24 >> 3;
        lVar21 = 0;
        do {
          *(char *)((longlong)puVar12 + lVar21) = (char)uVar24;
          uVar24 = uVar24 >> 8;
          lVar21 = lVar21 + 1;
        } while (lVar21 != 3);
        uVar10 = (uint)CONCAT12(*(undefined1 *)((longlong)puVar12 + lVar11 + 5),
                                *(undefined2 *)((longlong)puVar12 + lVar20));
        local_e8 = puVar26;
        if (uVar10 == 0) break;
        uVar24 = (ulonglong)(uVar10 * 8);
        bVar15 = 0;
        puVar26 = (uint3 *)(uVar24 + DAT_14c80ad08);
      } while (puVar26 != (uint3 *)0x0);
LAB_14678628f:
      *(undefined1 *)(puVar9 + 1) = 0;
      *puVar9 = 0;
LAB_146786972:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_118);
    }
LAB_146786472:
    *(undefined1 *)(puVar9 + 1) = 0;
    *puVar9 = 0;
LAB_14678647f:
    if (bVar15 == 0) {
LAB_146785964:
      if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_118);
code_r0x000146785fee:
  uVar16 = (*(ulonglong *)(lVar20 + 0x18) & 0xffffffffffff) -
           (*(ulonglong *)(lVar20 + 0x10) & 0xffffffffffff);
  if (uVar16 < uVar23) goto code_r0x000146786004;
  goto LAB_146785fc5;
code_r0x000146786004:
  uVar24 = lVar21 - DAT_14c80ad08;
  if (DAT_14c758498 <= uVar24) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if ((uVar24 & 7) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (uVar24 < 8) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar24 = uVar24 >> 3;
  lVar14 = 0;
  do {
    *(char *)(lVar11 + lVar17 + lVar14) = (char)uVar24;
    uVar24 = uVar24 >> 8;
    lVar14 = lVar14 + 1;
  } while (lVar14 != 3);
  FUN_146784ba3(lVar21);
  lVar14 = DAT_14c80ad08;
  uVar24 = local_c8;
LAB_146785f78:
  puVar12 = (uint3 *)(lVar21 + uVar24);
  uVar10 = (uint)CONCAT12(*(undefined1 *)(lVar21 + 2 + uVar24),*(undefined2 *)(lVar21 + uVar24));
  if ((uVar10 == 0) || (lVar11 = lVar14 + (ulonglong)uVar10 * 8, lVar25 = lVar21, lVar11 == 0))
  goto LAB_14678690c;
  goto LAB_146785f62;
code_r0x000146786692:
  uVar29 = (*(ulonglong *)(lVar14 + 0x18) & 0xffffffffffff) -
           (*(ulonglong *)(lVar14 + 0x10) & 0xffffffffffff);
  if (uVar29 < uVar16) goto code_r0x0001467866a8;
  goto LAB_146786671;
code_r0x0001467866a8:
  uVar24 = lVar21 - DAT_14c80ad08;
  if (DAT_14c758498 <= uVar24) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if ((uVar24 & 7) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (uVar24 < 8) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar24 = uVar24 >> 3;
  lVar20 = 0;
  do {
    *(char *)(lVar11 + lVar18 + lVar20) = (char)uVar24;
    uVar24 = uVar24 >> 8;
    lVar20 = lVar20 + 1;
  } while (lVar20 != 3);
  FUN_146784ba3(lVar21);
  lVar20 = DAT_14c80ad08;
  lVar17 = local_c0;
LAB_146786626:
  puVar12 = (uint3 *)(lVar21 + lVar17);
  uVar10 = (uint)CONCAT12(*(undefined1 *)(lVar21 + 2 + lVar17),*(undefined2 *)(lVar21 + lVar17));
  if ((uVar10 == 0) || (lVar11 = lVar20 + (ulonglong)uVar10 * 8, lVar25 = lVar21, lVar11 == 0))
  goto LAB_1467869d3;
  goto LAB_146786610;
}



// FUNCTION 146786ade FUN_146786ade body=242 status=ok
// SIG undefined FUN_146786ade(void)

undefined8 FUN_146786ade(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  if ((((param_2[1] ^ *param_1) & 0xffffffffffff) == 0) ||
     (((*param_2 ^ param_1[1]) & 0xffffffffffff) == 0)) {
    uVar5 = param_2[1];
    uVar7 = param_2[2];
    uVar2 = *param_2;
    uVar8 = param_1[2];
    uVar4 = param_1[1];
    uVar13 = *param_1;
    uVar3 = (uint)param_1[3];
    uVar10 = (uint)param_2[3];
    do {
      uVar12 = uVar10;
      uVar10 = uVar3;
      uVar14 = uVar13;
      uVar15 = uVar4;
      uVar9 = uVar8;
      uVar13 = uVar2;
      uVar8 = uVar7;
      uVar4 = uVar5;
      uVar5 = uVar15;
      uVar7 = uVar9;
      uVar2 = uVar14;
      uVar3 = uVar12;
    } while (((uVar4 ^ uVar14) & 0xffffffffffff) == 0);
    if (((uVar13 ^ uVar15) & 0xffffffffffff) == 0) {
      uVar9 = uVar9 & 0xffffffffffff;
      if (*param_3 <= uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar14 = uVar14 & 0xffffffffffff;
      uVar7 = 0;
      uVar5 = 0;
      if ((((uVar15 & 0xffffffffffff) + uVar9) - uVar14) % *param_3 == (uVar8 & 0xffffffffffff)) {
        uVar7 = uVar4 & 0xffffffffffff;
        cVar11 = (char)uVar10;
        uVar5 = uVar14;
        if (cVar11 != '\0') {
          if (cVar11 != '\x01') {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if ((uVar12 & 0xfe) != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
      }
    }
    else {
      uVar7 = 0;
      uVar5 = 0;
    }
    uVar6 = CONCAT71((int7)(uVar5 >> 8),uVar5 != uVar7);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 146786bd0 FUN_146786bd0 body=230 status=ok
// SIG undefined FUN_146786bd0(void)

void FUN_146786bd0(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  uint uVar8;
  char cVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = *param_3;
  uVar6 = param_2[1];
  uVar13 = *param_2;
  uVar11 = param_2[2];
  uVar5 = (int)param_2[3];
  uVar7 = (int)param_3[3];
  do {
    uVar10 = uVar7;
    uVar7 = uVar5;
    uVar12 = uVar11;
    uVar14 = uVar13;
    uVar15 = uVar6;
    uVar13 = uVar4;
    uVar11 = uVar3;
    uVar6 = uVar2;
    uVar2 = uVar15;
    uVar3 = uVar12;
    uVar4 = uVar14;
    uVar5 = uVar10;
  } while (((uVar6 ^ uVar14) & 0xffffffffffff) == 0);
  if (((uVar13 ^ uVar15) & 0xffffffffffff) == 0) {
    uVar12 = uVar12 & 0xffffffffffff;
    if (*param_4 <= uVar12) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar14 = uVar14 & 0xffffffffffff;
    if ((((uVar15 & 0xffffffffffff) + uVar12) - uVar14) % *param_4 == (uVar11 & 0xffffffffffff)) {
      cVar9 = (char)uVar7;
      uVar8 = (uint)cVar9;
      if (cVar9 != '\0') {
        if (uVar8 != 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar8 = (uint)(char)uVar10;
        if (1 < uVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      }
      *param_1 = uVar14;
      param_1[1] = uVar6 & 0xffffffffffff;
      param_1[2] = uVar12;
      *(uint *)(param_1 + 3) = uVar8;
      if (uVar14 != (uVar6 & 0xffffffffffff)) {
        return;
      }
      goto LAB_146786cb0;
    }
  }
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
LAB_146786cb0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 146786cb6 FUN_146786cb6 body=926 status=ok
// SIG undefined FUN_146786cb6(void)

void FUN_146786cb6(longlong param_1,uint3 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint3 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  
  puVar7 = (uint3 *)0x0;
  if (*(uint3 *)(param_1 + 3) != 0) {
    puVar7 = (uint3 *)(DAT_14c80ad08 + (ulonglong)(uint)*(uint3 *)(param_1 + 3) * 8);
  }
  if (puVar7 == param_2) {
    uVar2 = FUN_146784adf(param_2);
    FUN_146784ba3(param_1 + 3,uVar2);
  }
  lVar3 = 0;
  lVar10 = DAT_14c80ad08 + (ulonglong)(uint)*param_2 * 8;
  if (*param_2 == 0) {
    lVar10 = lVar3;
  }
  lVar5 = DAT_14c80ad08 + (ulonglong)(uint)*(uint3 *)((longlong)param_2 + 3) * 8;
  if (*(uint3 *)((longlong)param_2 + 3) == 0) {
    lVar5 = lVar3;
  }
  lVar4 = DAT_14c80ad08 + (ulonglong)(uint)*(uint3 *)((longlong)param_2 + 6) * 8;
  if (*(uint3 *)((longlong)param_2 + 6) == 0) {
    lVar4 = lVar3;
  }
  if (lVar10 != 0) {
    puVar7 = (uint3 *)0x0;
    if (*(uint3 *)(lVar10 + 3) != 0) {
      puVar7 = (uint3 *)(DAT_14c80ad08 + (ulonglong)(uint)*(uint3 *)(lVar10 + 3) * 8);
    }
    param_1 = lVar10 + 6;
    if (puVar7 == param_2) {
      param_1 = lVar10 + 3;
    }
  }
  if (lVar5 == 0) {
    FUN_146784ba3(param_1,lVar4);
    if (lVar4 == 0) goto LAB_146786df1;
  }
  else {
    if (lVar4 != 0) {
      uVar12 = (*(ulonglong *)(lVar5 + 0x18) & 0xffffffffffff) -
               (*(ulonglong *)(lVar5 + 0x10) & 0xffffffffffff);
      uVar11 = (*(ulonglong *)(lVar4 + 0x18) & 0xffffffffffff) -
               (*(ulonglong *)(lVar4 + 0x10) & 0xffffffffffff);
      uVar9 = uVar11;
      lVar3 = lVar4;
      if (uVar12 < uVar11) {
        uVar9 = uVar12;
        lVar3 = lVar5;
        lVar5 = lVar4;
      }
      uVar6 = lVar5 - DAT_14c80ad08;
      if (DAT_14c758498 <= uVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if ((uVar6 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (uVar6 < 8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar6 = uVar6 >> 3;
      lVar4 = 0;
      do {
        *(char *)(param_1 + lVar4) = (char)uVar6;
        uVar6 = uVar6 >> 8;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 3);
      FUN_146784ba3(lVar5,lVar10);
      puVar7 = (uint3 *)(lVar5 + (ulonglong)(uVar11 <= uVar12) * 3 + 3);
      if ((*puVar7 != 0) && (lVar10 = DAT_14c80ad08 + (ulonglong)(uint)*puVar7 * 8, lVar10 != 0)) {
        lVar4 = (ulonglong)(uVar11 <= uVar12) * 3 + 3;
        lVar14 = (ulonglong)(uVar12 < uVar11) * 3 + 3;
        lVar13 = DAT_14c80ad08;
        lVar15 = lVar5;
LAB_146786ef6:
        lVar5 = lVar10;
        uVar11 = (*(ulonglong *)(lVar5 + 0x18) & 0xffffffffffff) -
                 (*(ulonglong *)(lVar5 + 0x10) & 0xffffffffffff);
        if (uVar11 < uVar9) {
          FUN_146784ba3(puVar7,lVar3);
          FUN_146784ba3(lVar3,lVar15);
LAB_146786f53:
          lVar10 = lVar3;
          uVar8 = (uint)CONCAT12(*(undefined1 *)(lVar10 + 2 + lVar14),
                                 *(undefined2 *)(lVar10 + lVar14));
          if ((uVar8 != 0) && (lVar3 = DAT_14c80ad08 + (ulonglong)uVar8 * 8, lVar3 != 0))
          goto code_r0x000146786f74;
          uVar9 = lVar5 - DAT_14c80ad08;
          if (DAT_14c758498 <= uVar9) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if ((uVar9 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if (uVar9 < 8) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          uVar9 = uVar9 >> 3;
          lVar3 = 0;
          do {
            *(char *)(lVar14 + lVar10 + lVar3) = (char)uVar9;
            uVar9 = uVar9 >> 8;
            lVar3 = lVar3 + 1;
            lVar4 = lVar5;
          } while (lVar3 != 3);
          goto LAB_146786dec;
        }
        goto LAB_146786f0c;
      }
LAB_14678701f:
      FUN_146784ba3(puVar7,lVar3);
      FUN_146784ba3(lVar3,lVar5);
      goto LAB_146786df1;
    }
    uVar9 = lVar5 - DAT_14c80ad08;
    if (DAT_14c758498 <= uVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((uVar9 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar9 < 8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar9 = uVar9 >> 3;
    lVar3 = 0;
    do {
      *(char *)(param_1 + lVar3) = (char)uVar9;
      uVar9 = uVar9 >> 8;
      lVar3 = lVar3 + 1;
      lVar4 = lVar5;
    } while (lVar3 != 3);
  }
LAB_146786dec:
  FUN_146784ba3(lVar4,lVar10);
LAB_146786df1:
  FUN_1467a08c6(param_2);
  return;
code_r0x000146786f74:
  uVar9 = (*(ulonglong *)(lVar3 + 0x18) & 0xffffffffffff) -
          (*(ulonglong *)(lVar3 + 0x10) & 0xffffffffffff);
  if (uVar9 < uVar11) goto code_r0x000146786f8a;
  goto LAB_146786f53;
code_r0x000146786f8a:
  uVar11 = lVar5 - DAT_14c80ad08;
  if (DAT_14c758498 <= uVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((uVar11 & 7) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (uVar11 < 8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar11 = uVar11 >> 3;
  lVar13 = 0;
  do {
    *(char *)(lVar10 + lVar14 + lVar13) = (char)uVar11;
    uVar11 = uVar11 >> 8;
    lVar13 = lVar13 + 1;
  } while (lVar13 != 3);
  FUN_146784ba3(lVar5);
  lVar13 = DAT_14c80ad08;
LAB_146786f0c:
  puVar7 = (uint3 *)(lVar5 + lVar4);
  uVar8 = (uint)CONCAT12(*(undefined1 *)(lVar5 + 2 + lVar4),*(undefined2 *)(lVar5 + lVar4));
  if ((uVar8 == 0) || (lVar10 = lVar13 + (ulonglong)uVar8 * 8, lVar15 = lVar5, lVar10 == 0))
  goto LAB_14678701f;
  goto LAB_146786ef6;
}



// FUNCTION 146787054 FUN_146787054 body=1242 status=ok
// SIG undefined FUN_146787054(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_146787054(uint3 *param_1,ulonglong *param_2)

{
  undefined2 *puVar1;
  code *pcVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  bool bVar15;
  bool bVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint3 *puVar25;
  undefined8 *puVar26;
  undefined8 *local_60;
  
  if ((*param_2 & 0xffffffffffff) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((param_2[1] & 0xffffffffffff) <= (*param_2 & 0xffffffffffff)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  puVar9 = (undefined8 *)FUN_1467a08ac(0x30,"pas_fast_large_free_heap_node");
  uVar4 = *(undefined4 *)((longlong)param_2 + 4);
  uVar10 = param_2[1];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar23 = param_2[2];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar24 = param_2[3];
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(int *)(puVar9 + 2) = (int)*param_2;
  *(undefined4 *)((longlong)puVar9 + 0x14) = uVar4;
  *(int *)(puVar9 + 3) = (int)uVar10;
  *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar5;
  *(int *)(puVar9 + 4) = (int)uVar23;
  *(undefined4 *)((longlong)puVar9 + 0x24) = uVar6;
  *(int *)(puVar9 + 5) = (int)uVar24;
  *(undefined4 *)((longlong)puVar9 + 0x2c) = uVar7;
  uVar10 = param_2[1];
  uVar23 = *param_2 & 0xffffffffffff;
  *(undefined1 *)(puVar9 + 1) = 0;
  *puVar9 = 0;
  puVar26 = (undefined8 *)(DAT_14c80ad08 + (ulonglong)(uint)*param_1 * 8);
  if (puVar26 == (undefined8 *)0x0 || *param_1 == 0) {
    *(undefined1 *)((longlong)puVar9 + 2) = 0;
    *(undefined2 *)puVar9 = 0;
    FUN_146784ba3(param_1,puVar9);
LAB_14678710d:
    FUN_146784ba3((longlong)param_1 + 3,puVar9);
    return;
  }
  uVar10 = (uVar10 & 0xffffffffffff) - uVar23;
  uVar24 = puVar26[2] & 0xffffffffffff;
  bVar15 = true;
  bVar16 = true;
  if ((puVar26[3] & 0xffffffffffff) - uVar24 < uVar10) {
    puVar22 = (undefined8 *)0x0;
    puVar25 = param_1;
  }
  else {
    do {
      puVar22 = puVar26;
      bVar15 = (bool)(uVar23 < uVar24 & bVar16);
      lVar13 = (ulonglong)(uVar24 <= uVar23) * 3 + 3;
      lVar3 = (ulonglong)(uVar24 <= uVar23) * 3;
      uVar12 = (uint)CONCAT12(*(undefined1 *)((longlong)puVar22 + lVar3 + 5),
                              *(undefined2 *)((longlong)puVar22 + lVar3 + 3));
      if ((uVar12 == 0) ||
         (puVar26 = (undefined8 *)(DAT_14c80ad08 + (ulonglong)uVar12 * 8),
         puVar26 == (undefined8 *)0x0)) {
        FUN_146784ba3(puVar9);
        FUN_146784ba3(lVar13 + (longlong)puVar22,puVar9);
        if (!bVar15) {
          return;
        }
        goto LAB_14678710d;
      }
      uVar24 = puVar26[2] & 0xffffffffffff;
      bVar16 = bVar15;
    } while (uVar10 <= (puVar26[3] & 0xffffffffffff) - uVar24);
    puVar25 = (uint3 *)(lVar13 + (longlong)puVar22);
  }
  FUN_146784ba3(puVar9,puVar22);
  FUN_146784ba3(puVar25,puVar9);
  uVar10 = (longlong)puVar26 - DAT_14c80ad08;
  if (DAT_14c758498 <= uVar10) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((uVar10 & 7) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (uVar10 < 8) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  bVar15 = (bool)(bVar15 & uVar23 <= uVar24);
  uVar14 = (ulonglong)(uVar23 <= uVar24);
  lVar3 = uVar14 * 3;
  lVar19 = lVar3 + 3;
  uVar10 = uVar10 >> 3;
  lVar13 = 0;
  do {
    *(char *)((longlong)puVar9 + lVar13 + uVar14 * 3 + 3) = (char)uVar10;
    uVar10 = uVar10 >> 8;
    lVar13 = lVar13 + 1;
  } while (lVar13 != 3);
  FUN_146784ba3(puVar26,puVar9);
  lVar13 = (ulonglong)(uVar24 < uVar23) * 3;
  puVar11 = (undefined2 *)((longlong)puVar9 + lVar13 + 3);
  uVar12 = (uint)CONCAT12(*(undefined1 *)((longlong)puVar26 + lVar13 + 5),
                          *(undefined2 *)((longlong)puVar26 + lVar13 + 3));
  uVar10 = (ulonglong)(uVar12 * 8);
  puVar22 = (undefined8 *)(uVar10 + DAT_14c80ad08);
  if (puVar22 == (undefined8 *)0x0 || uVar12 == 0) {
LAB_146787239:
    *(undefined1 *)(puVar11 + 1) = 0;
    *puVar11 = 0;
    if (bVar15) goto LAB_14678710d;
  }
  else {
    lVar13 = (ulonglong)(uVar24 < uVar23) * 3;
    lVar17 = lVar13 + 3;
    local_60 = puVar9;
    do {
      uVar18 = (uint)((puVar22[2] & 0xffffffffffff) != uVar23);
      if ((puVar22[2] & 0xffffffffffff) < uVar23) {
        uVar18 = 0xffffffff;
      }
      puVar8 = puVar26;
      uVar21 = -uVar18;
      if (uVar24 < uVar23) {
        uVar21 = uVar18;
      }
      while (puVar26 = puVar22, (int)uVar21 < 1) {
        uVar12 = (uint)CONCAT12(*(undefined1 *)((longlong)puVar26 + lVar13 + 5),
                                *(undefined2 *)((longlong)puVar26 + lVar17));
        if (uVar12 == 0) goto LAB_146787239;
        uVar10 = (ulonglong)(uVar12 * 8);
        puVar22 = (undefined8 *)(uVar10 + DAT_14c80ad08);
        if (puVar22 == (undefined8 *)0x0) goto LAB_146787239;
        uVar18 = (uint)((puVar22[2] & 0xffffffffffff) != uVar23);
        if ((puVar22[2] & 0xffffffffffff) < uVar23) {
          uVar18 = 0xffffffff;
        }
        puVar8 = puVar26;
        uVar21 = -uVar18;
        if (uVar24 < uVar23) {
          uVar21 = uVar18;
        }
      }
      uVar14 = (ulonglong)uVar12;
      if (DAT_14c758498 <= uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      puVar1 = (undefined2 *)((longlong)puVar8 + lVar17);
      lVar20 = 0;
      do {
        *(char *)((longlong)puVar11 + lVar20) = (char)uVar14;
        uVar14 = uVar14 >> 8;
        lVar20 = lVar20 + 1;
      } while (lVar20 != 3);
      FUN_146784ba3(puVar26,local_60);
      do {
        local_60 = puVar26;
        uVar12 = (uint)CONCAT12(*(undefined1 *)((longlong)local_60 + lVar3 + 5),
                                *(undefined2 *)((longlong)local_60 + lVar19));
        uVar10 = (ulonglong)uVar12;
        if (uVar12 == 0) {
LAB_1467874cc:
          *(undefined1 *)(puVar1 + 1) = 0;
          *puVar1 = 0;
          return;
        }
        puVar26 = (undefined8 *)((ulonglong)(uVar12 * 8) + DAT_14c80ad08);
        if (puVar26 == (undefined8 *)0x0) goto LAB_1467874cc;
        uVar18 = (uint)((puVar26[2] & 0xffffffffffff) != uVar23);
        if ((puVar26[2] & 0xffffffffffff) < uVar23) {
          uVar18 = 0xffffffff;
        }
        uVar21 = -uVar18;
        if (uVar24 < uVar23) {
          uVar21 = uVar18;
        }
      } while (0 < (int)uVar21);
      if (DAT_14c758498 <= uVar12 * 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      puVar11 = (undefined2 *)((longlong)local_60 + lVar19);
      lVar20 = 0;
      do {
        *(char *)((longlong)puVar1 + lVar20) = (char)uVar10;
        uVar10 = uVar10 >> 8;
        lVar20 = lVar20 + 1;
      } while (lVar20 != 3);
      uVar10 = (longlong)puVar8 - DAT_14c80ad08;
      if (DAT_14c758498 <= uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar10 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar10 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar10 = uVar10 >> 3;
      lVar20 = 0;
      do {
        *(char *)((longlong)puVar26 + lVar20) = (char)uVar10;
        uVar10 = uVar10 >> 8;
        lVar20 = lVar20 + 1;
      } while (lVar20 != 3);
      uVar12 = (uint)CONCAT12(*(undefined1 *)((longlong)puVar26 + lVar13 + 5),
                              *(undefined2 *)((longlong)puVar26 + lVar17));
      if (uVar12 == 0) break;
      uVar10 = (ulonglong)(uVar12 * 8);
      bVar15 = false;
      puVar22 = (undefined8 *)(uVar10 + DAT_14c80ad08);
    } while (puVar22 != (undefined8 *)0x0);
    *(undefined1 *)(puVar11 + 1) = 0;
    *puVar11 = 0;
  }
  return;
}



// FUNCTION 14678752e FUN_14678752e body=118 status=ok
// SIG undefined FUN_14678752e(void)

void FUN_14678752e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_28 = &local_res10;
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_144737586();
  local_38 = &local_res10;
  __stdio_common_vfprintf(*puVar2,uVar1,param_1,0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467875a5 FUN_1467875a5 body=163 status=ok
// SIG undefined FUN_1467875a5(void)

void FUN_1467875a5(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  code *local_20;
  undefined8 *local_18;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0x1000000;
  local_38 = *(longlong *)(param_3 + 0x20);
  local_50 = param_2;
  local_48 = param_4;
  if ((int)POPCOUNT(local_38) != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (local_38 != 0) {
    local_28 = 0;
    local_20 = FUN_146787649;
    local_18 = &local_50;
    local_10 = param_5;
    local_30 = local_38;
    FUN_14678cfae(param_1,&local_40,param_6,param_7);
    if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 146787649 FUN_146787649 body=80 status=ok
// SIG undefined FUN_146787649(void)

void FUN_146787649(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  
  uVar1 = *param_2;
  iVar3 = FUN_146787699(uVar1,param_1);
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  FUN_1467876f1(uVar1,param_1,*(undefined4 *)(param_2 + 1),1);
  iVar3 = FUN_146787699(*param_2,param_1);
  if (iVar3 == *(int *)(param_2 + 1)) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



// FUNCTION 146787699 FUN_146787699 body=88 status=ok
// SIG undefined FUN_146787699(void)

uint FUN_146787699(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  
  if ((0x7ffff < param_2) ||
     (uVar2 = 1, (*(uint *)(param_1 + (param_2 >> 5) * 4) >> ((uint)param_2 & 0x1f) & 1) == 0)) {
    puVar1 = *(ulonglong **)(param_1 + 0x10000);
    uVar2 = 0;
    if ((*puVar1 <= param_2) && (param_2 < puVar1[1])) {
      uVar2 = *(uint *)((longlong)puVar1 + (param_2 - *puVar1 >> 2 & 0x1ffffffffffffffc) + 0x18) >>
              ((char)(param_2 - *puVar1) * '\x02' & 0x1fU) & 3;
    }
  }
  return uVar2;
}



// FUNCTION 1467876f1 FUN_1467876f1 body=659 status=ok
// SIG undefined FUN_1467876f1(void)

void FUN_1467876f1(longlong param_1,ulonglong param_2,uint param_3,int param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  code *pcVar3;
  ulonglong *_Dst;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if (param_4 == 0) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  }
  if (param_3 == 1 && param_2 < 0x80000) {
    puVar1 = (uint *)(param_1 + (param_2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
  }
  else {
    puVar2 = *(ulonglong **)(param_1 + 0x10000);
    uVar5 = *puVar2;
    uVar6 = puVar2[1];
    if (param_2 < uVar6 && uVar5 <= param_2) {
      if (3 < param_3) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      bVar4 = (char)(param_2 - uVar5) * '\x02';
      uVar5 = param_2 - uVar5 >> 2 & 0x1ffffffffffffffc;
      *(uint *)((longlong)puVar2 + uVar5 + 0x18) =
           param_3 << (bVar4 & 0x1f) |
           ~(3 << (bVar4 & 0x1f)) & *(uint *)((longlong)puVar2 + uVar5 + 0x18);
    }
    else {
      if (puVar2 == &DAT_14c80ad60) {
        uVar9 = param_2 + 1;
        uVar8 = param_2;
      }
      else if (param_2 < uVar5) {
        if (uVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar8 = uVar5 * 2 - uVar6;
        uVar9 = uVar6;
        if (param_2 < uVar8) {
          uVar8 = param_2;
        }
      }
      else {
        if ((uVar5 == 0) || (uVar6 == 0)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (param_2 < uVar6) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar9 = uVar6 * 2 - uVar5;
        uVar8 = uVar5;
        if (uVar9 < param_2 + 1) {
          uVar9 = param_2 + 1;
        }
      }
      if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar9 = ((uVar9 - uVar8) * 2 + 0x1f >> 5) * 4 + 0x1f & 0xfffffffffffffff8;
      uVar10 = (uVar9 * 8 - 0xc0 >> 1) + uVar8;
      if (uVar10 <= uVar8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      _Dst = (ulonglong *)FUN_14678871b(uVar9,"pas_fast_megapage_table/instance",0);
      memset(_Dst,0,uVar9);
      *_Dst = uVar8;
      _Dst[1] = uVar10;
      _Dst[2] = (ulonglong)puVar2;
      lVar7 = uVar6 - uVar5;
      if (uVar5 <= uVar6 && lVar7 != 0) {
        uVar6 = 0;
        do {
          bVar4 = (byte)uVar6 + (char)uVar5 * '\x02' + (char)uVar8 * -2 & 0x1e;
          uVar9 = uVar5 * 2 + uVar8 * -2 + uVar6 >> 5;
          *(uint *)((longlong)_Dst + uVar9 * 4 + 0x18) =
               (*(uint *)((longlong)puVar2 + (uVar6 >> 5) * 4 + 0x18) >> ((byte)uVar6 & 0x1e) & 3)
               << bVar4 | ~(3 << bVar4) & *(uint *)((longlong)_Dst + uVar9 * 4 + 0x18);
          uVar6 = uVar6 + 2;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      LOCK();
      UNLOCK();
      *(ulonglong **)(param_1 + 0x10000) = _Dst;
      if (3 < param_3) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      bVar4 = (char)(param_2 - uVar8) * '\x02';
      uVar5 = param_2 - uVar8 >> 2 & 0x1ffffffffffffffc;
      *(uint *)((longlong)_Dst + uVar5 + 0x18) =
           param_3 << (bVar4 & 0x1f) |
           ~(3 << (bVar4 & 0x1f)) & *(uint *)((longlong)_Dst + uVar5 + 0x18);
    }
    if (param_4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146787946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
      return;
    }
  }
  return;
}



// FUNCTION 146787984 FUN_146787984 body=144 status=ok
// SIG undefined FUN_146787984(void)

void FUN_146787984(void *param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  
  uVar3 = *(ulonglong *)(param_3 + 0x20) / *(ulonglong *)(param_3 + 0x28);
  if (uVar3 < 2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (uVar3 < 0x401) {
    memset(param_1,0,0x88);
    do {
      uVar3 = uVar3 - 1;
      if (((*(longlong *)(param_3 + 0x30) == 0) ||
          ((*(uint *)(*(longlong *)(param_3 + 0x30) + (uVar3 >> 5) * 4) >> ((uint)uVar3 & 0x1f) & 1)
           == 0)) && (*(char *)(param_2 + uVar3) == '\0')) {
        puVar1 = (uint *)((longlong)param_1 + (uVar3 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)uVar3 & 0x1f);
        *(longlong *)((longlong)param_1 + 0x80) = *(longlong *)((longlong)param_1 + 0x80) + 1;
        *(undefined1 *)(param_2 + uVar3) = 0xff;
      }
    } while (uVar3 != 0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



// FUNCTION 146787a14 FUN_146787a14 body=139 status=ok
// SIG undefined FUN_146787a14(void)

void FUN_146787a14(void *param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  
  uVar3 = *(ulonglong *)(param_3 + 0x20) / *(ulonglong *)(param_3 + 0x28);
  if (uVar3 < 2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (uVar3 < 0x401) {
    memset(param_1,0,0x88);
    do {
      uVar3 = uVar3 - 1;
      if (((*(longlong *)(param_3 + 0x30) == 0) ||
          ((*(uint *)(*(longlong *)(param_3 + 0x30) + (uVar3 >> 5) * 4) >> ((uint)uVar3 & 0x1f) & 1)
           == 0)) && (*(char *)(param_2 + uVar3) != -1)) {
        puVar1 = (uint *)((longlong)param_1 + (uVar3 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)uVar3 & 0x1f);
        *(longlong *)((longlong)param_1 + 0x80) = *(longlong *)((longlong)param_1 + 0x80) + 1;
      }
    } while (uVar3 != 0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



// FUNCTION 146787a9f FUN_146787a9f body=120 status=ok
// SIG undefined FUN_146787a9f(void)

void FUN_146787a9f(longlong param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  
  uVar2 = *(ulonglong *)(param_3 + 0x20) / *(ulonglong *)(param_3 + 0x28);
  if (uVar2 < 2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (uVar2 < 0x401) {
    lVar3 = 0;
    while( true ) {
      do {
        bVar4 = uVar2 == 0;
        uVar2 = uVar2 - 1;
        if (bVar4) {
          if (lVar3 == *(longlong *)(param_1 + 0x80)) {
            return;
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      } while ((*(uint *)(param_1 + (uVar2 >> 5) * 4) >> ((uint)uVar2 & 0x1f) & 1) == 0);
      if (*(char *)(param_2 + uVar2) != -1) break;
      if ((*(longlong *)(param_3 + 0x30) != 0) &&
         ((*(uint *)(*(longlong *)(param_3 + 0x30) + (uVar2 >> 5) * 4) & 1 << ((byte)uVar2 & 0x1f))
          != 0)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      *(undefined1 *)(param_2 + uVar2) = 0;
      lVar3 = lVar3 + 1;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 146787b17 FUN_146787b17 body=315 status=ok
// SIG undefined FUN_146787b17(void)

void FUN_146787b17(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined4 param_6)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  undefined4 local_78;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(ulonglong *)(param_5 + 0x20) / *(ulonglong *)(param_5 + 0x28);
  if (uVar2 < 2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (uVar2 < 0x401) {
    FUN_146780693(local_68,*(undefined4 *)(*(longlong *)(param_5 + 8) + 0x438));
    uVar4 = 0;
    do {
      if ((*(uint *)(param_1 + (uVar4 >> 5) * 4) >> ((uint)uVar4 & 0x1f) & 1) == 0) {
        uVar3 = (**(code **)(param_5 + 0x48))(param_2);
        local_78 = param_6;
        local_80 = param_5;
        local_88 = param_4;
        FUN_146780710(local_68,uVar3,uVar4,param_3);
      }
      else {
        if ((*(longlong *)(param_5 + 0x30) != 0) &&
           ((*(uint *)(*(longlong *)(param_5 + 0x30) + (uVar4 >> 5) * 4) & 1 << ((byte)uVar4 & 0x1f)
            ) != 0)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        FUN_1467806aa(local_68,uVar4);
      }
      uVar4 = uVar4 + 1;
      if (uVar2 <= uVar4) {
        uVar3 = (**(code **)(param_5 + 0x48))(param_2);
        local_78 = param_6;
        local_80 = param_5;
        local_88 = param_4;
        FUN_146780710(local_68,uVar3,uVar2,param_3);
        if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    } while( true );
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 146787c53 FUN_146787c53 body=180 status=ok
// SIG undefined FUN_146787c53(void)

ulonglong * FUN_146787c53(ulonglong *param_1,ulonglong param_2,undefined4 *param_3)

{
  code *pcVar1;
  BOOLEAN BVar2;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_78 = &local_50;
  local_50 = 1;
  local_48 = 1;
  local_40 = FUN_146787f03;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146799db0(param_1,&DAT_14c80ad80,param_2);
  if (((char)param_1[1] == '\x01') && (CARRY8(param_2,*param_1))) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146787d08 FUN_146787d08 body=370 status=ok
// SIG undefined FUN_146787d08(void)

ulonglong *
FUN_146787d08(ulonglong *param_1,ulonglong param_2,undefined4 *param_3,longlong *param_4)

{
  code *pcVar1;
  char cVar2;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  byte local_90;
  undefined2 local_8f;
  undefined1 local_8d;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  code *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_4 == (longlong *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_88 = 1;
  local_80 = 1;
  local_78 = FUN_146787f03;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  local_b8 = &local_88;
  FUN_146799db0(&local_98,&DAT_14c80ad80,param_2,&local_58);
  local_58._0_3_ = CONCAT12(local_8d,local_8f);
  if ((local_90 & 1) != 0) {
    if (CARRY8(param_2,local_98)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_a8 = local_98;
    local_a0 = param_2 + local_98;
    cVar2 = FUN_146789cf3(&local_a8,param_4,1,1);
    if (cVar2 == '\0') {
      if (*param_4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      local_b8 = &local_88;
      FUN_14679ce4c(&DAT_14c80ad80,local_98,param_2 + local_98,local_8c);
      *(undefined1 *)(param_1 + 1) = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      goto LAB_146787e10;
    }
  }
  *param_1 = local_98;
  *(byte *)(param_1 + 1) = local_90;
  *(undefined2 *)((longlong)param_1 + 9) = (undefined2)local_58;
  *(undefined1 *)((longlong)param_1 + 0xb) = local_58._2_1_;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_8c;
LAB_146787e10:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146787e7b FUN_146787e7b body=135 status=ok
// SIG undefined FUN_146787e7b(void)

undefined8
FUN_146787e7b(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,int param_7,longlong param_8)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_8 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_7 == 2) {
    local_28 = *param_3;
    uStack_24 = param_3[1];
    uStack_20 = param_3[2];
    uStack_1c = param_3[3];
    FUN_146787d08(param_1,param_2,&local_28,param_6);
  }
  else {
    if (param_7 != 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_28 = *param_3;
    uStack_24 = param_3[1];
    uStack_20 = param_3[2];
    uStack_1c = param_3[3];
    FUN_146787c53(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146787f03 FUN_146787f03 body=157 status=ok
// SIG undefined FUN_146787f03(void)

longlong * FUN_146787f03(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_146782b1c();
  if (*param_1 != 0) {
    lVar1 = param_1[5];
    FUN_14678ec26(param_1[3] + param_1[1] + lVar1);
    if ((int)param_1[6] != 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    local_30 = lVar1 + param_1[4];
    local_38 = param_1[2];
    if (local_30 < local_38) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    FUN_146789c0d(&local_38,1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146787fa1 FUN_146787fa1 body=249 status=ok
// SIG undefined FUN_146787fa1(void)

undefined8 * FUN_146787fa1(undefined8 *param_1,uint param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  
  lVar3 = (**(code **)(param_3 + 0x18))(*param_1);
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar4 = (**(code **)(param_3 + 0x20))(*param_1);
  if ((int)POPCOUNT(uVar4) != 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar3 = (**(code **)(param_3 + 0x20))(*param_1);
  uVar5 = (**(code **)(param_3 + 0x18))(*param_1);
  if ((int)POPCOUNT(lVar3) != 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((uVar5 & lVar3 - 1U) == 0) {
    puVar6 = (undefined8 *)FUN_14678871b(0x50,"pas_heap",0);
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[7] = *param_1;
    FUN_146791fca(puVar6,puVar6,param_3,param_4);
    thunk_FUN_14678384c(puVar6 + 5);
    puVar6[8] = param_1;
    uVar1 = *(uint *)((longlong)puVar6 + 0x4c);
    uVar7 = (param_2 & 3) << 6;
    *(uint *)((longlong)puVar6 + 0x4c) = uVar1 & 0xffffff3f | uVar7;
    *(uint *)((longlong)puVar6 + 0x4c) = uVar1 & 0xffffff00 | uVar7 | *(uint *)(param_3 + 8) & 0x3f;
    FUN_14677da69(puVar6);
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



// FUNCTION 14678809a FUN_14678809a body=52 status=ok
// SIG undefined FUN_14678809a(void)

undefined8 FUN_14678809a(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    return 1;
  }
  iVar2 = *(int *)(param_1 + 0x4c) << 0x1a;
  if (iVar2 != 0) {
    if (*(longlong *)(&DAT_14c7584b0 + (longlong)(iVar2 >> 0x1a) * 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001467880c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(longlong *)(&DAT_14c7584b0 + (longlong)(iVar2 >> 0x1a) * 8) + 0x18))
                        (*(undefined8 *)(param_1 + 0x38));
      return uVar3;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1467880ce FUN_1467880ce body=41 status=ok
// SIG undefined FUN_1467880ce(void)

undefined8 FUN_1467880ce(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001467880ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)
                          (&DAT_14c7584b0 +
                          ((longlong)((ulonglong)*(uint *)(param_1 + 0x4c) << 0x3a) >> 0x3a) * 8) +
                        0x20))(*(undefined8 *)(param_1 + 0x38));
    return uVar1;
  }
  return 1;
}



// FUNCTION 1467880f7 FUN_1467880f7 body=114 status=ok
// SIG undefined FUN_1467880f7(void)

undefined8
FUN_1467880f7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  uVar1 = FUN_1467928b4(param_1,param_2,param_3,param_4,param_5,param_6,1);
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  return uVar1;
}



// FUNCTION 146788169 FUN_146788169 body=62 status=ok
// SIG undefined FUN_146788169(void)

undefined4 FUN_146788169(longlong param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  undefined4 uVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 == '\0') {
    uVar3 = FUN_1467881a7(*(undefined4 *)(param_1 + 8));
    if (((char)uVar3 != '\0') && (*(code **)(param_1 + 0x10) != (code *)0x0)) {
      (**(code **)(param_1 + 0x10))();
    }
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1467881a7 FUN_1467881a7 body=82 status=ok
// SIG undefined FUN_1467881a7(void)

undefined8 FUN_1467881a7(uint param_1)

{
  uint uVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  uint uVar4;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar3 == '\0') {
    uVar1 = *(uint *)(&DAT_14c80ada0 + ((ulonglong)(longlong)(int)param_1 >> 5) * 4);
    uVar4 = 1 << ((byte)param_1 & 0x1f);
    if ((uVar1 >> (param_1 & 0x1f) & 1) == 0) {
      *(uint *)(&DAT_14c80ada0 + ((ulonglong)(longlong)(int)param_1 >> 5) * 4) = uVar1 | uVar4;
    }
    return CONCAT71((uint7)(int7)(int3)(param_1 >> 8) >> 5,(uVar1 & uVar4) == 0);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



// FUNCTION 1467881f9 FUN_1467881f9 body=66 status=ok
// SIG undefined FUN_1467881f9(void)

void FUN_1467881f9(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar1 = *param_1;
  bVar4 = true;
  lVar3 = 0x90;
  do {
    cVar2 = FUN_146799b77(lVar3 + *(longlong *)(lVar1 + 0x28),param_2,param_3);
    if (!bVar4) {
      return;
    }
    lVar3 = 0x160;
    bVar4 = false;
  } while (cVar2 != '\0');
  return;
}



// FUNCTION 14678823b FUN_14678823b body=137 status=ok
// SIG undefined FUN_14678823b(void)

undefined8
FUN_14678823b(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = FUN_146782d6a(param_1,*param_2,0x30);
  if ((lVar2 == 0) ||
     (lVar2 = FUN_146782d6a(param_1,*(undefined8 *)(lVar2 + 0x28),0x170), lVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    bVar1 = true;
    do {
      lVar4 = lVar2 + 0x160;
      if (bVar1) {
        lVar4 = lVar2 + 0x90;
      }
      uVar3 = FUN_146799bcf(lVar4,param_1,param_3,param_4);
    } while ((bVar1) && (bVar1 = false, (char)uVar3 != '\0'));
  }
  return uVar3;
}



// FUNCTION 1467882c4 FUN_1467882c4 body=227 status=ok
// SIG undefined FUN_1467882c4(void)

longlong *
FUN_1467882c4(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  byte local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  lVar1 = *param_3;
  if ((int)POPCOUNT(lVar1) != 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar3 = -lVar1 & (param_2 + lVar1) - 1U;
  local_48 = (undefined4)*param_3;
  uStack_44 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_40 = (undefined4)param_3[1];
  uStack_3c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_58 = param_5;
  FUN_1467895b4(&local_38,*(undefined8 *)(*(longlong *)(param_4 + -0x28) + 0x28),uVar3);
  if ((local_30 & 1) != 0) {
    if (local_2c == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    *param_1 = local_38;
    param_1[1] = param_2;
    param_1[2] = local_38;
    param_1[3] = 0;
    param_1[4] = local_38 + param_2;
    param_1[5] = uVar3 - param_2;
    *(int *)(param_1 + 6) = local_2c;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467883a8 FUN_1467883a8 body=220 status=ok
// SIG undefined FUN_1467883a8(void)

undefined8 * FUN_1467883a8(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_146782d6a(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x70),0x20);
  if (((lVar2 != 0) &&
      (lVar2 = FUN_146782d6a(param_1,*(undefined8 *)(lVar2 + (longlong)*(int *)(param_2 + 8) * 8),
                             0x498), lVar2 != 0)) &&
     (puVar3 = (undefined8 *)FUN_146782d6a(param_1,*(undefined8 *)(lVar2 + 0x440),0x10),
     puVar3 != (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)thunk_FUN_146782e05(param_1,0x18);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    uVar5 = FUN_146782d6a(param_1,*puVar3,0x10);
    cVar1 = FUN_14677dce8(puVar4,param_1,uVar5);
    if (cVar1 != '\0') {
      uVar5 = FUN_146782d6a(param_1,puVar3[1],0x10);
      cVar1 = FUN_14677dce8(puVar4,param_1,uVar5);
      if (cVar1 == '\0') {
        return (undefined8 *)0x0;
      }
      return puVar4;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 146788484 FUN_146788484 body=100 status=ok
// SIG undefined FUN_146788484(void)

longlong FUN_146788484(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  
  if (param_2 != 2) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    lVar2 = *(longlong *)(param_1 + 8);
    if (lVar2 == 0) {
      lVar2 = FUN_146787fa1(param_1,param_2,param_3,param_4);
      *(longlong *)(param_1 + 8) = lVar2;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1467884e8 FUN_1467884e8 body=31 status=ok
// SIG undefined FUN_1467884e8(void)

void FUN_1467884e8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  
  uVar2 = (**(code **)(param_1 + 0x20))(param_2,param_3);
  if (uVar2 < 0x100) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 146788523 FUN_146788523 body=470 status=ok
// SIG undefined FUN_146788523(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_146788523(ulonglong param_1,longlong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  ulonglong local_58;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80adb0);
  DAT_14c80adc9 = 0;
  if ((int)POPCOUNT(param_2) != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar2 = -param_2 & (DAT_14c80add0 + param_2) - 1;
  if ((DAT_14c80add8 - uVar2 < param_1 || DAT_14c80add8 < uVar2) || uVar2 < DAT_14c80add0) {
    if ((DAT_14c80adc8 & 1) == 0) {
      FUN_146788795(FUN_14678db4f);
    }
    if (DAT_14c80aed0 == 0) {
      DAT_14c80aed0 = FUN_14678d6e8();
    }
    if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar2 = 0x10000;
    if (0x10000 < param_1) {
      uVar2 = param_1;
    }
    uVar2 = -DAT_14c80aed0 & (uVar2 + DAT_14c80aed0) - 1;
    FUN_1467809a0(&local_60,uVar2,param_2);
    if (local_60 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (local_58 != uVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (local_38 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    FUN_146790cbb(local_60,uVar2);
    DAT_14c80add0 = local_60;
    DAT_14c80add8 = local_60 + uVar2;
    _DAT_14c80adb8 = _DAT_14c80adb8 + uVar2;
    DAT_14c80adc8 = 0;
    FUN_146790ea6();
    if ((DAT_14c80add8 < DAT_14c80add0) || (DAT_14c80add8 - DAT_14c80add0 < param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar2 = DAT_14c80add0;
    if ((DAT_14c80add0 & param_2 - 1U) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  else if ((DAT_14c80adc8 & 1) != 0) {
    FUN_146788795(FUN_14678d9b9);
    DAT_14c80adc8 = 0;
    FUN_146790ea6();
  }
  DAT_14c80add0 = uVar2 + param_1;
  _DAT_14c80adc0 = _DAT_14c80adc0 + param_1;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80adb0);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467886fa FUN_1467886fa body=33 status=ok
// SIG undefined FUN_1467886fa(void)

void FUN_1467886fa(undefined8 param_1,ulonglong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  
  if (param_2 < 9) {
    param_2 = 8;
  }
  uVar2 = FUN_146788523(param_1,param_2);
  if ((uVar2 & 7) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14678871b FUN_14678871b body=25 status=ok
// SIG undefined FUN_14678871b(void)

void FUN_14678871b(undefined8 param_1)

{
  code *pcVar1;
  byte bVar2;
  
  bVar2 = FUN_146788523(param_1,8);
  if ((bVar2 & 7) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 146788734 FUN_146788734 body=97 status=ok
// SIG undefined FUN_146788734(void)

ulonglong FUN_146788734(void)

{
  undefined8 unaff_RSI;
  ulonglong uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80adb0);
  if (DAT_14c80adc8 == '\0') {
    uVar1 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),DAT_14c80adc9 < 3);
    if (DAT_14c80adc9 < 3) {
      DAT_14c80adc9 = DAT_14c80adc9 + 1;
    }
    else {
      FUN_146788795(FUN_14678db4f);
      DAT_14c80adc8 = '\x01';
      DAT_14c80adc9 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80adb0);
  return uVar1 & 0xffffffff;
}



// FUNCTION 146788795 FUN_146788795 body=232 status=ok
// SIG undefined FUN_146788795(void)

void FUN_146788795(code *UNRECOVERED_JUMPTABLE)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  BOOLEAN BVar4;
  ulonglong uVar5;
  
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80adb0);
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (DAT_14c80aed0 == 0) {
    DAT_14c80aed0 = FUN_14678d6e8();
  }
  lVar3 = DAT_14c80aed0;
  uVar2 = DAT_14c80add8;
  if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar5 = DAT_14c80aed0 + -1 + DAT_14c80add0;
  if (DAT_14c80aed0 == 0) {
    DAT_14c80aed0 = FUN_14678d6e8();
  }
  if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar5 = uVar5 & -lVar3;
  if ((DAT_14c80aed0 - 1U & uVar5) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (DAT_14c80aed0 == 0) {
    DAT_14c80aed0 = FUN_14678d6e8();
  }
  if ((int)POPCOUNT(DAT_14c80aed0) == 1) {
    if ((DAT_14c80aed0 - 1U & uVar2) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar5 <= uVar2) {
      if (uVar2 - uVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000146788861. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(uVar5,uVar2 - uVar5,1);
        return;
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14678887d FUN_14678887d body=158 status=ok
// SIG undefined FUN_14678887d(void)

void FUN_14678887d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  longlong lVar2;
  BOOLEAN BVar3;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar3 == '\0') {
    if (DAT_14c80ade0 == 0) {
      FUN_14678891b();
    }
    lVar2 = FUN_146783071(DAT_14c80ade0 + 8,DAT_14c80ade0 + 0x4000,param_1,param_2,7,param_3);
    if (lVar2 == 0) {
      FUN_14678891b();
      FUN_1467832cf(DAT_14c80ade0 + 8,DAT_14c80ade0 + 0x4000,param_1,param_2,7,param_3);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14678891b FUN_14678891b body=188 status=ok
// SIG undefined FUN_14678891b(void)

void FUN_14678891b(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_30 = 0x2000000;
  local_28 = 0;
  local_38 = 1;
  FUN_146790da4(&local_20,0x1ff8000,&local_30,"pas_large_expendable_memory");
  if ((local_18 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (local_20 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  FUN_146790cbb(local_20,0x1ff8000);
  *local_20 = DAT_14c80ade0;
  FUN_146782f9f(local_20 + 1,0x1ff4000);
  DAT_14c80ade0 = local_20;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467889d8 FUN_1467889d8 body=69 status=ok
// SIG undefined FUN_1467889d8(void)

void FUN_1467889d8(ulonglong param_1,undefined8 param_2)

{
  code *pcVar1;
  BOOLEAN BVar2;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 == '\0') {
    FUN_1467832fc(param_1 & 0xfffffffffe000000 | 8,(param_1 & 0xfffffffffe000000) + 0x4000,param_1,
                  param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 146788a1d FUN_146788a1d body=83 status=ok
// SIG undefined FUN_146788a1d(void)

byte FUN_146788a1d(undefined4 param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  byte bVar3;
  undefined8 *puVar4;
  byte bVar5;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 == '\0') {
    bVar5 = 0;
    puVar4 = DAT_14c80ade0;
    while( true ) {
      if (puVar4 == (undefined8 *)0x0) break;
      bVar3 = FUN_14678341b(puVar4 + 1,puVar4 + 0x800,param_1);
      bVar5 = bVar5 | bVar3;
      puVar4 = (undefined8 *)*puVar4;
    }
    return bVar5 & 1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 146788a70 FUN_146788a70 body=13 status=ok
// SIG undefined FUN_146788a70(void)

void FUN_146788a70(void *param_1)

{
  memset(param_1,0,800);
  return;
}



// FUNCTION 146788a7d FUN_146788a7d body=56 status=ok
// SIG undefined FUN_146788a7d(void)

void FUN_146788a7d(longlong *param_1)

{
  code *pcVar1;
  
  if (param_1[99] != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (*param_1 == 0) {
    FUN_1467803e9(param_1[0x61],param_1[0x62] * 0x18,0,0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 146788ab5 FUN_146788ab5 body=762 status=ok
// SIG undefined FUN_146788ab5(void)

undefined8 FUN_146788ab5(ulonglong *param_1,ulonglong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  bool bVar3;
  code *pcVar4;
  BOOLEAN BVar5;
  void *_Dst;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((param_1[99] == 0) && (*(undefined **)(param_3 + 8) != &DAT_14c80b368)) &&
     (BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80b368), BVar5 == '\0')) {
    FUN_14678f2ed(param_3,&DAT_14c80b368);
    uVar7 = 0;
    goto LAB_146788d5a;
  }
  if (param_2[1] < *param_2) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  param_1[99] = param_1[99] + (param_2[1] - *param_2);
  uVar2 = *param_2;
  local_68 = (undefined4)param_2[1];
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_60 = (undefined4)param_2[2];
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar8 = *param_1;
  uVar10 = param_1[0x62];
  uVar6 = uVar10 + 0x20;
  if (uVar6 <= uVar8) {
    if (uVar8 != uVar6) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar11 = 4;
    if (4 < uVar10 * 2) {
      uVar11 = uVar10 * 2;
    }
    if (uVar11 <= uVar10) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    _Dst = (void *)FUN_1467803da(uVar11 * 0x18,"pas_large_virtual_range_min_heap/outline_array",0,0)
    ;
    uVar6 = uVar11 + 0x20;
    if (uVar6 <= uVar8) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    memset(_Dst,0,uVar11 * 0x18);
    if ((void *)param_1[0x61] == (void *)0x0) {
      uVar9 = 0;
    }
    else {
      memcpy(_Dst,(void *)param_1[0x61],uVar8 * 0x18 - 0x300);
      uVar9 = param_1[0x61];
    }
    FUN_1467803e9(uVar9,uVar10 * 0x18,0,0);
    param_1[0x61] = (ulonglong)_Dst;
    param_1[0x62] = uVar11;
  }
  if (uVar6 <= uVar8) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar6 = uVar8 + 1;
  if (uVar8 < 0x20) {
    param_1[uVar8 * 3 + 1] = 0;
    (param_1 + uVar8 * 3 + 1)[1] = 0;
    param_1[uVar8 * 3 + 3] = 0;
    *param_1 = uVar6;
    if (uVar8 != 0) goto LAB_146788c49;
    if (param_1[0x62] == 0xffffffffffffffe0) goto LAB_146788da8;
    uVar8 = 0;
LAB_146788d40:
    param_1 = param_1 + uVar8 * 3 + 1;
  }
  else {
    uVar10 = param_1[0x61];
    puVar1 = (undefined8 *)((uVar10 - 0x300) + uVar8 * 0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((uVar10 - 0x2f0) + uVar8 * 0x18) = 0;
    *param_1 = uVar6;
LAB_146788c49:
    do {
      uVar10 = uVar6 >> 1;
      uVar8 = uVar10 - 1;
      uVar11 = param_1[0x62] + 0x20;
      if (uVar11 <= uVar8) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (uVar6 < 0x42) {
        puVar13 = param_1 + uVar8 * 3 + 1;
      }
      else {
        puVar13 = (ulonglong *)(param_1[0x61] + uVar8 * 0x18 + -0x300);
      }
      local_58 = puVar13[1];
      uStack_50 = puVar13[2];
      if (*puVar13 <= uVar2) {
        uVar8 = uVar6 - 1;
        goto LAB_146788d35;
      }
      uVar9 = uVar6 - 1;
      if (uVar11 <= uVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (uVar6 < 0x21) {
        puVar12 = param_1 + uVar9 * 3 + 1;
      }
      else {
        puVar12 = (ulonglong *)(param_1[0x61] + uVar9 * 0x18 + -0x300);
      }
      *puVar12 = *puVar13;
      puVar12[1] = local_58;
      puVar12[2] = uStack_50;
      bVar3 = 3 < uVar6;
      uVar6 = uVar10;
    } while (bVar3);
    uVar11 = param_1[0x62] + 0x20;
LAB_146788d35:
    if (uVar11 <= uVar8) {
LAB_146788da8:
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (uVar6 < 0x21) goto LAB_146788d40;
    param_1 = (ulonglong *)(param_1[0x61] + uVar8 * 0x18 + -0x300);
  }
  *param_1 = uVar2;
  *(undefined4 *)(param_1 + 1) = local_68;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_64;
  *(undefined4 *)(param_1 + 2) = uStack_60;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_5c;
  uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
LAB_146788d5a:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 146788db0 thunk_FUN_146788db5 body=5 status=ok
// SIG undefined thunk_FUN_146788db5(void)

void thunk_FUN_146788db5(ulonglong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  code *pcVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_e8 [40];
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  longlong lStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong uStack_60;
  
  uStack_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_1[99] != 0) {
    uVar17 = *param_1;
    if (uVar17 != 0) {
      puVar1 = param_1 + 1;
      uVar11 = 0;
      uVar12 = 0;
      uVar16 = 0;
      lStack_a0 = param_2;
      do {
        uStack_a8 = uVar12;
        if (param_1[0x62] == 0xffffffffffffffe0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        uVar14 = uVar17 - 1;
        if (param_1[0x62] + 0x20 <= uVar14) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        if (uVar17 < 0x21) {
          puVar10 = puVar1 + uVar14 * 3;
          puVar18 = puVar1 + uVar14 * 3 + 1;
        }
        else {
          puVar10 = (ulonglong *)(param_1[0x61] + uVar14 * 0x18 + -0x300);
          puVar18 = (ulonglong *)(param_1[0x61] + uVar14 * 0x18 + -0x2f8);
        }
        uVar4 = param_1[1];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        uVar7 = *puVar10;
        uVar9 = *puVar18;
        uStack_74 = *(undefined4 *)((longlong)puVar18 + 4);
        uStack_70 = (undefined4)puVar18[1];
        uStack_6c = *(undefined4 *)((longlong)puVar18 + 0xc);
        uStack_78 = (int)uVar9;
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        if (param_1[0x62] == 0xffffffffffffffe0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        *puVar1 = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        *param_1 = uVar14;
        if (uVar17 != 1) {
          uVar17 = 1;
LAB_146788f11:
          uVar15 = uVar17 * 2;
          uVar3 = uVar17 * 2 + 1;
          uStack_88 = 0;
          uStack_80 = 0;
          uStack_c0 = uVar6;
          uStack_b8 = uVar16;
          uStack_b0 = uVar11;
          if (uVar15 < uVar14) {
            uVar13 = param_1[0x62] + 0x20;
            if (uVar13 <= uVar15) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            if (uVar3 < 0x21) {
              puVar10 = puVar1 + uVar17 * 6;
            }
            else {
              puVar10 = (ulonglong *)(param_1[0x61] + uVar17 * 0x30 + -0x300);
            }
            uVar19 = *puVar10;
            uStack_88 = puVar10[1];
            uStack_80 = puVar10[2];
            bVar20 = uVar7 <= uVar19;
            if (uVar15 <= uVar14) goto LAB_146788f5e;
            if (uVar7 <= uVar19) goto LAB_1467890cd;
LAB_146788fc5:
            uVar15 = uVar17 - 1;
            if (uVar13 <= uVar15) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            if (uVar17 < 0x21) {
              puVar10 = puVar1 + uVar15 * 3;
            }
            else {
              puVar10 = (ulonglong *)(param_1[0x61] + uVar15 * 0x18 + -0x300);
            }
            *puVar10 = uVar19;
            puVar18 = &uStack_88;
            uVar15 = uVar3;
LAB_146789022:
            uVar17 = puVar18[1];
            puVar10[1] = *puVar18;
            puVar10[2] = uVar17;
            uVar17 = uVar15;
            goto LAB_146788f11;
          }
          if (uVar15 <= uVar14) {
            bVar20 = true;
            uVar19 = 0;
LAB_146788f5e:
            if (uVar15 == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            uVar2 = uVar15 - 1;
            uVar13 = param_1[0x62] + 0x20;
            if (uVar13 <= uVar2) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            if (uVar15 < 0x21) {
              puVar10 = puVar1 + uVar2 * 3;
            }
            else {
              puVar10 = (ulonglong *)(param_1[0x61] + uVar2 * 0x18 + -0x300);
            }
            uVar2 = *puVar10;
            uStack_98 = puVar10[1];
            uStack_90 = puVar10[2];
            if ((!bVar20) && (uVar7 <= uVar2 || uVar19 < uVar2)) goto LAB_146788fc5;
            if (uVar7 <= uVar2) goto LAB_1467890cd;
            uVar3 = uVar17 - 1;
            if (uVar13 <= uVar3) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            if (uVar17 < 0x21) {
              puVar10 = puVar1 + uVar3 * 3;
            }
            else {
              puVar10 = (ulonglong *)(param_1[0x61] + uVar3 * 0x18 + -0x300);
            }
            *puVar10 = uVar2;
            puVar18 = &uStack_98;
            goto LAB_146789022;
          }
          uVar13 = param_1[0x62] + 0x20;
LAB_1467890cd:
          uVar14 = uVar17 - 1;
          if (uVar13 <= uVar14) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          if (uVar17 < 0x21) {
            puVar10 = puVar1 + uVar14 * 3;
          }
          else {
            puVar10 = (ulonglong *)(param_1[0x61] + uVar14 * 0x18 + -0x300);
          }
          *puVar10 = uVar7;
          *(int *)(puVar10 + 1) = (int)uVar9;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_74;
          *(undefined4 *)(puVar10 + 2) = uStack_70;
          *(undefined4 *)((longlong)puVar10 + 0x14) = uStack_6c;
        }
        if (uVar5 < uVar4) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        uVar14 = uVar16;
        if (uVar5 == uVar4) break;
        if (uVar12 < uVar11) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        if (uVar12 == uVar11) {
          bVar20 = uVar4 == uVar11;
          uVar14 = uVar6;
          uVar11 = uVar4;
          if (bVar20) {
            uVar14 = uVar16;
          }
        }
        else {
          if (uVar5 <= uVar4) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          if (uVar11 < uVar5 && uVar4 < uVar12) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          if (uVar4 != uVar12) {
            FUN_14678d9b9();
            uVar14 = uVar6;
            uVar11 = uVar4;
          }
        }
        uVar17 = *param_1;
        uVar12 = uVar5;
        uVar16 = uVar14;
      } while (uVar17 != 0);
      param_2 = lStack_a0;
      if (uVar12 < uVar11) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      if (uVar12 - uVar11 != 0) {
        FUN_14678d9b9(uVar11,uVar12 - uVar11,uVar14);
      }
    }
    if (*(undefined **)(param_2 + 8) != &DAT_14c80b368) {
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80b368);
    }
    param_1[99] = 0;
  }
  if ((uStack_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146788db5 FUN_146788db5 body=1029 status=ok
// SIG undefined FUN_146788db5(void)

void FUN_146788db5(ulonglong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  code *pcVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_e8 [40];
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_1[99] != 0) {
    uVar17 = *param_1;
    if (uVar17 != 0) {
      puVar1 = param_1 + 1;
      uVar11 = 0;
      uVar12 = 0;
      uVar16 = 0;
      local_a0 = param_2;
      do {
        local_a8 = uVar12;
        if (param_1[0x62] == 0xffffffffffffffe0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        uVar14 = uVar17 - 1;
        if (param_1[0x62] + 0x20 <= uVar14) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        if (uVar17 < 0x21) {
          puVar10 = puVar1 + uVar14 * 3;
          puVar18 = puVar1 + uVar14 * 3 + 1;
        }
        else {
          puVar10 = (ulonglong *)(param_1[0x61] + uVar14 * 0x18 + -0x300);
          puVar18 = (ulonglong *)(param_1[0x61] + uVar14 * 0x18 + -0x2f8);
        }
        uVar4 = param_1[1];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        uVar7 = *puVar10;
        uVar9 = *puVar18;
        uStack_74 = *(undefined4 *)((longlong)puVar18 + 4);
        uStack_70 = (undefined4)puVar18[1];
        uStack_6c = *(undefined4 *)((longlong)puVar18 + 0xc);
        local_78 = (int)uVar9;
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        if (param_1[0x62] == 0xffffffffffffffe0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        *puVar1 = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        *param_1 = uVar14;
        if (uVar17 != 1) {
          uVar17 = 1;
LAB_146788f11:
          uVar15 = uVar17 * 2;
          uVar3 = uVar17 * 2 + 1;
          local_88 = 0;
          uStack_80 = 0;
          local_c0 = uVar6;
          local_b8 = uVar16;
          local_b0 = uVar11;
          if (uVar15 < uVar14) {
            uVar13 = param_1[0x62] + 0x20;
            if (uVar13 <= uVar15) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            if (uVar3 < 0x21) {
              puVar10 = puVar1 + uVar17 * 6;
            }
            else {
              puVar10 = (ulonglong *)(param_1[0x61] + uVar17 * 0x30 + -0x300);
            }
            uVar19 = *puVar10;
            local_88 = puVar10[1];
            uStack_80 = puVar10[2];
            bVar20 = uVar7 <= uVar19;
            if (uVar15 <= uVar14) goto LAB_146788f5e;
            if (uVar7 <= uVar19) goto LAB_1467890cd;
LAB_146788fc5:
            uVar15 = uVar17 - 1;
            if (uVar13 <= uVar15) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            if (uVar17 < 0x21) {
              puVar10 = puVar1 + uVar15 * 3;
            }
            else {
              puVar10 = (ulonglong *)(param_1[0x61] + uVar15 * 0x18 + -0x300);
            }
            *puVar10 = uVar19;
            puVar18 = &local_88;
            uVar15 = uVar3;
LAB_146789022:
            uVar17 = puVar18[1];
            puVar10[1] = *puVar18;
            puVar10[2] = uVar17;
            uVar17 = uVar15;
            goto LAB_146788f11;
          }
          if (uVar15 <= uVar14) {
            bVar20 = true;
            uVar19 = 0;
LAB_146788f5e:
            if (uVar15 == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            uVar2 = uVar15 - 1;
            uVar13 = param_1[0x62] + 0x20;
            if (uVar13 <= uVar2) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            if (uVar15 < 0x21) {
              puVar10 = puVar1 + uVar2 * 3;
            }
            else {
              puVar10 = (ulonglong *)(param_1[0x61] + uVar2 * 0x18 + -0x300);
            }
            uVar2 = *puVar10;
            local_98 = puVar10[1];
            uStack_90 = puVar10[2];
            if ((!bVar20) && (uVar7 <= uVar2 || uVar19 < uVar2)) goto LAB_146788fc5;
            if (uVar7 <= uVar2) goto LAB_1467890cd;
            uVar3 = uVar17 - 1;
            if (uVar13 <= uVar3) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            if (uVar17 < 0x21) {
              puVar10 = puVar1 + uVar3 * 3;
            }
            else {
              puVar10 = (ulonglong *)(param_1[0x61] + uVar3 * 0x18 + -0x300);
            }
            *puVar10 = uVar2;
            puVar18 = &local_98;
            goto LAB_146789022;
          }
          uVar13 = param_1[0x62] + 0x20;
LAB_1467890cd:
          uVar14 = uVar17 - 1;
          if (uVar13 <= uVar14) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          if (uVar17 < 0x21) {
            puVar10 = puVar1 + uVar14 * 3;
          }
          else {
            puVar10 = (ulonglong *)(param_1[0x61] + uVar14 * 0x18 + -0x300);
          }
          *puVar10 = uVar7;
          *(int *)(puVar10 + 1) = (int)uVar9;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_74;
          *(undefined4 *)(puVar10 + 2) = uStack_70;
          *(undefined4 *)((longlong)puVar10 + 0x14) = uStack_6c;
        }
        if (uVar5 < uVar4) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        uVar14 = uVar16;
        if (uVar5 == uVar4) break;
        if (uVar12 < uVar11) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        if (uVar12 == uVar11) {
          bVar20 = uVar4 == uVar11;
          uVar14 = uVar6;
          uVar11 = uVar4;
          if (bVar20) {
            uVar14 = uVar16;
          }
        }
        else {
          if (uVar5 <= uVar4) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          if (uVar11 < uVar5 && uVar4 < uVar12) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          if (uVar4 != uVar12) {
            FUN_14678d9b9();
            uVar14 = uVar6;
            uVar11 = uVar4;
          }
        }
        uVar17 = *param_1;
        uVar12 = uVar5;
        uVar16 = uVar14;
      } while (uVar17 != 0);
      param_2 = local_a0;
      if (uVar12 < uVar11) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      if (uVar12 - uVar11 != 0) {
        FUN_14678d9b9(uVar11,uVar12 - uVar11,uVar14);
      }
    }
    if (*(undefined **)(param_2 + 8) != &DAT_14c80b368) {
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80b368);
    }
    param_1[99] = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467891bb thunk_FUN_14678384c body=5 status=ok
// SIG undefined thunk_FUN_14678384c(void)

void thunk_FUN_14678384c(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 1467891c0 FUN_1467891c0 body=622 status=ok
// SIG undefined FUN_1467891c0(void)

ulonglong *
FUN_1467891c0(ulonglong *param_1,code *param_2,longlong param_3,ulonglong param_4,longlong param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_f8 [32];
  ulonglong *local_d8;
  undefined4 local_cc;
  ulonglong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  byte local_a0;
  undefined2 local_9f;
  undefined1 local_9d;
  undefined4 local_9c;
  undefined8 local_98;
  code *local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  code *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  code *local_58;
  undefined2 local_4c;
  undefined1 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((int)POPCOUNT(param_4) != 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  if (param_3 == 0) {
    param_3 = (**(code **)(param_5 + 0x18))(uVar1);
  }
  uVar5 = (**(code **)(param_5 + 0x20))(uVar1);
  if (uVar5 < param_4) {
    uVar5 = param_4;
  }
  if (uVar5 <= *(ulonglong *)(param_5 + 0x30)) {
    uVar5 = *(ulonglong *)(param_5 + 0x30);
  }
  if ((int)POPCOUNT(uVar5) != 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_98 = *(undefined8 *)(param_5 + 0x420);
  local_88 = param_5;
  local_90 = param_2;
  local_80 = (**(code **)(param_5 + 0x18))(*(undefined8 *)(param_2 + 0x10));
  local_78 = *(longlong *)(param_5 + 0x30);
  local_70 = FUN_146789556;
  local_60 = *(undefined8 *)(param_5 + 0x430);
  local_68 = &local_98;
  local_58 = param_2;
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar6 = -uVar5 & (uVar5 - 1) + param_3;
  local_b0 = 0;
  local_d8 = &local_80;
  local_b8 = uVar5;
  FUN_146783861(&local_a8,param_2,uVar6);
  local_4c = local_9f;
  local_4a = local_9d;
  if ((local_a0 & 1) == 0) {
LAB_1467893e0:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    if (*(char *)(param_5 + 0x428) == '\x01') {
      if (CARRY8(local_a8,uVar6)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      local_cc = local_9c;
      local_c8 = local_a8;
      local_c0 = local_a8 + uVar6;
      cVar4 = FUN_146789cf3(&local_c8,param_6,1,*(undefined4 *)(param_5 + 0x438));
      local_9c = local_cc;
      if (cVar4 == '\0') {
        local_d8 = &local_80;
        FUN_146784a5e(param_2,local_a8,local_a8 + uVar6);
        goto LAB_1467893e0;
      }
    }
    if ((local_a8 & uVar5 - 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    *(undefined1 *)((longlong)param_1 + 0xb) = local_4a;
    *(undefined2 *)((longlong)param_1 + 9) = local_4c;
    *param_1 = local_a8;
    *(byte *)(param_1 + 1) = local_a0;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_9c;
    local_78 = uVar6 + local_a8;
    local_80 = local_a8;
    local_70 = param_2;
    FUN_1467897de();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14678942f FUN_14678942f body=294 status=ok
// SIG undefined FUN_14678942f(void)

bool FUN_14678942f(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  BOOLEAN BVar4;
  undefined1 auStack_98 [32];
  ulonglong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  code *local_50;
  undefined8 local_48;
  undefined8 local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  FUN_146789924(&local_60,param_1);
  pcVar1 = local_50;
  uVar3 = local_58;
  uVar2 = local_60;
  if (local_60 != 0) {
    if (*(longlong *)
         (&DAT_14c7584b0 + ((longlong)((ulonglong)*(uint *)(local_50 + 0x24) << 0x3a) >> 0x3a) * 8)
        != param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (*(char *)(param_2 + 0x428) == '\x01') {
      if (local_58 < local_60) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      local_70 = local_60;
      local_68 = local_58;
      FUN_146789c80(&local_70,1,*(undefined4 *)(param_2 + 0x438));
    }
    local_60 = (**(code **)(param_2 + 0x18))(*(undefined8 *)(local_50 + 0x10));
    local_58 = *(ulonglong *)(param_2 + 0x30);
    local_50 = FUN_146789556;
    local_48 = 0;
    local_40 = *(undefined8 *)(param_2 + 0x430);
    local_38 = pcVar1;
    local_78 = &local_60;
    FUN_146784a5e(pcVar1,uVar2,uVar3,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146789556 FUN_146789556 body=93 status=ok
// SIG undefined FUN_146789556(void)

undefined8
FUN_146789556(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_38 = param_4[2];
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  (*(code *)*param_4)();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467895b4 FUN_1467895b4 body=152 status=ok
// SIG undefined FUN_1467895b4(void)

undefined8
FUN_1467895b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5)

{
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = &local_20;
  local_18 = param_5;
  local_78 = &local_50;
  local_50 = 1;
  local_48 = 1;
  local_40 = FUN_14678964d;
  local_30 = 0;
  uStack_28 = 0;
  local_68 = *param_4;
  uStack_64 = param_4[1];
  uStack_60 = param_4[2];
  uStack_5c = param_4[3];
  local_20 = param_2;
  FUN_146799db0(param_1);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14678964d FUN_14678964d body=400 status=ok
// SIG undefined FUN_14678964d(void)

ulonglong * FUN_14678964d(ulonglong *param_1,ulonglong param_2,ulonglong *param_3,longlong *param_4)

{
  code *pcVar1;
  BOOLEAN BVar2;
  ulonglong uVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  byte local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (DAT_14c80aed0 == 0) {
    DAT_14c80aed0 = FUN_14678d6e8();
  }
  if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_50 = *param_3;
  if ((int)POPCOUNT(local_50) != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_48 = param_3[1];
  if (local_48 < local_50) {
    if (local_50 <= DAT_14c80aed0) {
      local_50 = DAT_14c80aed0;
    }
    if ((int)POPCOUNT(local_50) != 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar3 = -DAT_14c80aed0 & (param_2 + DAT_14c80aed0) - 1;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    local_70 = *(undefined8 *)(*param_4 + 0x28);
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 1;
    (**(code **)(*param_4 + 0x20))
              (&local_40,uVar3,&local_50,"pas_large_heap_physical_page_sharing_cache/chunk");
    if ((local_38 & 1) != 0) {
      if (local_34 != 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      local_58 = local_40 + uVar3;
      if (CARRY8(local_40,uVar3)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      local_60 = local_40;
      FUN_146782b96(&DAT_14c80ade8);
      *param_1 = local_40;
      param_1[1] = param_2;
      param_1[2] = local_40;
      param_1[3] = 0;
      param_1[4] = local_40 + param_2;
      param_1[5] = uVar3 - param_2;
      *(undefined4 *)(param_1 + 6) = 1;
    }
    if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1467897de FUN_1467897de body=325 status=ok
// SIG undefined FUN_1467897de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1467897de(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  uint uVar5;
  ulonglong *puVar6;
  uint uVar7;
  ulonglong *puVar8;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar1 = *param_1;
  local_28 = (undefined4)param_1[1];
  uStack_24 = *(undefined4 *)((longlong)param_1 + 0xc);
  uStack_20 = (undefined4)param_1[2];
  uStack_1c = *(undefined4 *)((longlong)param_1 + 0x14);
  if (DAT_14c80adf8 <= (uint)((DAT_14c80ae04 + DAT_14c80ae00) * 2)) {
    uVar5 = DAT_14c80adf8 * 2;
    if ((uint)(DAT_14c80ae00 * 6) < DAT_14c80adf8 * 2) {
      uVar5 = DAT_14c80adf8;
    }
    uVar7 = 0x10;
    if (DAT_14c80adf8 != 0) {
      uVar7 = uVar5;
    }
    FUN_146789aad(uVar7);
  }
  uVar5 = (uint)(uVar1 >> 4) & 0xfffffff ^ (uint)uVar1;
  uVar7 = (uint)(uVar1 >> 0x20);
  uVar7 = uVar7 >> 4 ^ uVar7;
  uVar5 = uVar7 * 0x20 + (uVar7 ^ 0xdeadbeef) ^ uVar5 * 0x20 + (uVar5 ^ 0xdeadbeef);
  uVar5 = uVar5 >> 0xb ^ uVar5;
  puVar6 = (ulonglong *)0x0;
  do {
    puVar8 = (ulonglong *)(DAT_14c80adf0 + (ulonglong)(uVar5 & DAT_14c80adfc) * 0x18);
    uVar2 = *puVar8;
    if (uVar2 == 1) {
      if (puVar6 == (ulonglong *)0x0) {
        puVar6 = puVar8;
      }
    }
    else {
      if (uVar2 == 0) {
        if (puVar6 != (ulonglong *)0x0) {
          DAT_14c80ae04 = DAT_14c80ae04 + -1;
          puVar8 = puVar6;
        }
        DAT_14c80ae00 = DAT_14c80ae00 + 1;
        *puVar8 = uVar1;
        *(undefined4 *)(puVar8 + 1) = local_28;
        *(undefined4 *)((longlong)puVar8 + 0xc) = uStack_24;
        *(undefined4 *)(puVar8 + 2) = uStack_20;
        *(undefined4 *)((longlong)puVar8 + 0x14) = uStack_1c;
        _DAT_14c80ae20 = 0;
        if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      if (uVar2 == uVar1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
    uVar5 = uVar5 + 1;
  } while( true );
}



// FUNCTION 146789924 FUN_146789924 body=256 status=ok
// SIG undefined FUN_146789924(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_146789924(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  puVar5 = (undefined8 *)FUN_146789a27(param_2);
  if (puVar5 == (undefined8 *)0x0) {
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
  }
  else {
    local_28 = puVar5[2];
    local_38 = *puVar5;
    uStack_30 = puVar5[1];
    *puVar5 = 1;
    puVar5[1] = 0;
    puVar5[2] = 0;
    DAT_14c80ae04 = DAT_14c80ae04 + 1;
    _DAT_14c80ae20 = 0;
    iVar1 = DAT_14c80ae00 + -1;
    iVar2 = DAT_14c80ae00 * 2;
    DAT_14c80ae00 = iVar1;
    if (0x10 < DAT_14c80adf8 && (uint)((iVar2 + -2) * 3) < DAT_14c80adf8) {
      FUN_146789aad(DAT_14c80adf8 >> 1);
    }
    if (param_1 != (undefined8 *)0x0) {
      param_1[2] = local_28;
      *(undefined4 *)param_1 = (undefined4)local_38;
      *(undefined4 *)((longlong)param_1 + 4) = local_38._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_30._4_4_;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146789a27 FUN_146789a27 body=134 status=ok
// SIG undefined FUN_146789a27(void)

longlong FUN_146789a27(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = (uint)((ulonglong)param_1 >> 0x20);
  if (DAT_14c80adf0 == 0) {
    return 0;
  }
  uVar2 = (uint)param_1 >> 4 ^ (uint)param_1;
  uVar3 = uVar3 >> 4 ^ uVar3;
  uVar3 = uVar3 * 0x20 + (uVar3 ^ 0xdeadbeef) ^ uVar2 * 0x20 + (uVar2 ^ 0xdeadbeef);
  uVar3 = uVar3 >> 0xb ^ uVar3;
  do {
    uVar4 = (ulonglong)(uVar3 & DAT_14c80adfc);
    lVar1 = *(longlong *)(DAT_14c80adf0 + uVar4 * 0x18);
    if (*(longlong *)(DAT_14c80adf0 + 8 + uVar4 * 0x18) == 0) {
      if (lVar1 != 1) {
        return 0;
      }
    }
    else if (lVar1 == param_1) {
      return DAT_14c80adf0 + uVar4 * 0x18;
    }
    uVar3 = uVar3 + 1;
  } while( true );
}



// FUNCTION 146789aad FUN_146789aad body=352 status=ok
// SIG undefined FUN_146789aad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146789aad(uint param_1)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  void *_Dst;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  if (POPCOUNT(param_1) == 1) {
    _Dst = (void *)FUN_14678b965((ulonglong)param_1 * 0x18,"pas_large_map_hashtable/table",0,0);
    if (param_1 != 0) {
      memset(_Dst,0,(ulonglong)param_1 * 0x18);
    }
    lVar6 = (longlong)DAT_14c80adf0;
    uVar7 = (ulonglong)DAT_14c80adf8;
    if (uVar7 == 0) {
      uVar7 = 0;
    }
    else {
      uVar8 = 0;
      do {
        if (*(longlong *)((longlong)DAT_14c80adf0 + 8 + uVar8 * 0x18) != 0) {
          puVar1 = (ulonglong *)((longlong)DAT_14c80adf0 + uVar8 * 0x18);
          uVar10 = *puVar1;
          uVar11 = (uint)(uVar10 >> 4) & 0xfffffff ^ (uint)uVar10;
          uVar9 = (uint)(uVar10 >> 0x20);
          uVar9 = uVar9 >> 4 ^ uVar9;
          uVar9 = uVar9 * 0x20 + (uVar9 ^ 0xdeadbeef) ^ uVar11 * 0x20 + (uVar11 ^ 0xdeadbeef);
          uVar9 = uVar9 >> 0xb ^ uVar9;
          do {
            uVar10 = (ulonglong)(uVar9 & param_1 - 1);
            uVar9 = uVar9 + 1;
          } while (*(longlong *)((longlong)_Dst + uVar10 * 0x18 + 8) != 0);
          puVar2 = (undefined4 *)((longlong)_Dst + uVar10 * 0x18);
          *(ulonglong *)(puVar2 + 4) = puVar1[2];
          uVar4 = *(undefined4 *)((longlong)puVar1 + 4);
          uVar10 = puVar1[1];
          uVar5 = *(undefined4 *)((longlong)puVar1 + 0xc);
          *puVar2 = (int)*puVar1;
          puVar2[1] = uVar4;
          puVar2[2] = (int)uVar10;
          puVar2[3] = uVar5;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar7);
    }
    DAT_14c80ae04 = 0;
    _DAT_14c80ae08 = 0;
    _DAT_14c80ae10 = 0;
    _DAT_14c80ae18 = 0;
    DAT_14c80adf0 = _Dst;
    DAT_14c80adf8 = param_1;
    DAT_14c80adfc = param_1 - 1;
    FUN_14678b9d2(lVar6,uVar7 * 0x18,0,0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



// FUNCTION 146789c0d FUN_146789c0d body=114 status=ok
// SIG undefined FUN_146789c0d(void)

void FUN_146789c0d(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = FUN_146782f7a();
  local_38 = *param_1;
  uStack_30 = param_1[1];
  local_58 = 0;
  uStack_50 = 0;
  local_48 = param_2;
  local_40 = param_3;
  cVar2 = FUN_146789e47(&local_38,3,uVar3,0);
  if (cVar2 == '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146789c80 FUN_146789c80 body=114 status=ok
// SIG undefined FUN_146789c80(void)

void FUN_146789c80(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = FUN_146782f7a();
  local_38 = *param_1;
  uStack_30 = param_1[1];
  local_58 = 0;
  uStack_50 = 0;
  local_48 = param_2;
  local_40 = param_3;
  cVar2 = FUN_146789e47(&local_38,2,uVar3,0);
  if (cVar2 == '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146789cf3 FUN_146789cf3 body=339 status=ok
// SIG undefined FUN_146789cf3(void)

undefined4 FUN_146789cf3(undefined8 *param_1,longlong param_2,int param_3,undefined4 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined1 auStack_3a8 [32];
  undefined8 local_388;
  longlong local_380;
  int local_378;
  undefined4 local_370;
  undefined *local_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined1 local_358 [792];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  uVar4 = FUN_146782f7a();
  FUN_146788a70(local_358);
  local_368 = (undefined *)*param_1;
  uStack_360 = *(undefined4 *)(param_1 + 1);
  uStack_35c = *(undefined4 *)((longlong)param_1 + 0xc);
  ppuVar5 = &local_368;
  local_388 = 0;
  local_380 = param_2;
  local_378 = param_3;
  local_370 = param_4;
  uVar3 = FUN_146789e47(ppuVar5,1,uVar4,local_358);
  if ((char)uVar3 == '\0') goto LAB_146789d87;
  if (param_3 != 1) {
    if ((param_3 == 0) && (local_40 != 0)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    goto LAB_146789d87;
  }
  if ((local_40 == 0) && (-1 < DAT_14c80af30)) goto LAB_146789d87;
  puVar1 = *(undefined **)(param_2 + 8);
  if (puVar1 == (undefined *)0x0) {
    uVar4 = 1;
    if (local_40 != 0) goto LAB_146789e0a;
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    local_368 = puVar1;
    if (puVar1 != &DAT_14c80b368 && local_40 != 0) {
      ppuVar5 = (undefined **)&uStack_360;
      uVar4 = 2;
LAB_146789e0a:
      *ppuVar5 = &DAT_14c80b368;
    }
  }
  FUN_14678eb1f(local_40,1,&local_368,uVar4);
  thunk_FUN_146788db5(local_358,param_2);
LAB_146789d87:
  FUN_146788a7d(local_358);
  if ((local_38 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146789e47 FUN_146789e47 body=2438 status=ok
// SIG undefined FUN_146789e47(void)

ulonglong FUN_146789e47(ulonglong *param_1,uint param_2,ulonglong param_3,undefined8 param_4,
                       longlong param_5,undefined8 param_6,uint param_7,uint param_8)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  BOOLEAN BVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 unaff_RBP;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  ulonglong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  uint local_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined *local_78;
  uint local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  uVar13 = (ulonglong)param_2;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar14 = *param_1;
  uVar17 = param_1[1];
  BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar6 != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar16 = uVar17 - uVar14;
  if (uVar17 < uVar14) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar15 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (uVar16 == 0) goto LAB_146789ea2;
  BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar6 != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (((ulonglong)DAT_14c80ae28 == 0) || ((ulonglong)DAT_14c80ae28 << 3 == -DAT_14c80ad08)) {
    FUN_14678de07(&DAT_14c80ae80);
    uVar9 = FUN_14678dd74(0,4);
    FUN_14678e496(&DAT_14c80aee0,uVar9);
    local_88 = 0;
    local_80 = 0x1000000000000;
    local_f8 = 1;
    local_100 = 1;
    local_108 = 0x1000000000000;
    FUN_14678b2ec(&local_88,0,0,1);
  }
  local_d0 = param_3;
  local_b0 = param_4;
  if (DAT_14c80aed0 == 0) {
    DAT_14c80aed0 = FUN_14678d6e8();
  }
  uVar2 = DAT_14c80aed0;
  lVar12 = DAT_14c80ae98;
  local_b8 = DAT_14c80ae30;
  lVar10 = FUN_14678b574(uVar14);
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_d8 = lVar12;
  if (((param_2 == 2) || ((param_2 == 1 && ((*(byte *)(lVar10 + 0xc) & 2) != 0)))) &&
     (uVar16 < uVar2)) {
    uVar18 = *(ulonglong *)(lVar10 + 0x18);
    if (uVar18 < *(ulonglong *)(lVar10 + 0x10)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (uVar18 - *(ulonglong *)(lVar10 + 0x10) != uVar2) goto LAB_14678a02f;
    if (uVar18 < uVar17) {
      lVar11 = FUN_14678a920();
      uVar16 = *(ulonglong *)(lVar11 + 0x10);
      uVar18 = *(ulonglong *)(lVar11 + 0x18);
      if (uVar18 < uVar16) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((uVar18 - uVar16 != uVar2) ||
         (((param_2 & 0xfffffffe) != 2 && ((*(byte *)(lVar11 + 0xc) & 2) == 0))))
      goto LAB_14678a02f;
      if (uVar17 <= uVar16) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (uVar18 < uVar17) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      FUN_14678a9f6(lVar10);
      FUN_14678a9f6(lVar11);
      uVar13 = *(ulonglong *)(lVar10 + 0x20);
      if (*(ulonglong *)(lVar10 + 0x20) <= local_d0) {
        uVar13 = local_d0;
      }
      *(ulonglong *)(lVar10 + 0x20) = uVar13;
      uVar13 = local_d0;
      if (local_d0 < *(ulonglong *)(lVar11 + 0x20)) {
        uVar13 = *(ulonglong *)(lVar11 + 0x20);
      }
      *(ulonglong *)(lVar11 + 0x20) = uVar13;
      uVar13 = *(ulonglong *)(lVar10 + 0x10);
      uVar16 = *(ulonglong *)(lVar10 + 0x18);
      local_a0 = uVar14;
      local_98 = uVar17;
      local_88 = uVar13;
      local_80 = uVar16;
      cVar7 = FUN_14678a9a6();
      if (cVar7 == '\0') {
        uVar16 = 0;
        uVar13 = 0;
      }
      else {
        if (uVar17 <= uVar16) {
          uVar16 = uVar17;
        }
        if (uVar13 <= uVar14) {
          uVar13 = uVar14;
        }
        if (uVar16 < uVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
      }
      FUN_14678ade5(lVar10,uVar16 - uVar13,param_2 == 2);
      uVar13 = *(ulonglong *)(lVar11 + 0x10);
      uVar16 = *(ulonglong *)(lVar11 + 0x18);
      local_a0 = uVar14;
      local_98 = uVar17;
      local_88 = uVar13;
      local_80 = uVar16;
      cVar7 = FUN_14678a9a6();
      lVar12 = local_d8;
      if (cVar7 == '\0') {
        uVar17 = 0;
        uVar14 = 0;
      }
      else {
        if (uVar16 < uVar17) {
          uVar17 = uVar16;
        }
        if (uVar14 < uVar13) {
          uVar14 = uVar13;
        }
        if (uVar17 < uVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
      }
      FUN_14678ade5(lVar11,uVar17 - uVar14,param_2 == 2);
      FUN_14678ae19(lVar10);
      FUN_14678ae19(lVar11);
      uVar15 = 1;
    }
    else {
      FUN_14678a9f6(lVar10);
      uVar14 = local_d0;
      if (local_d0 < *(ulonglong *)(lVar10 + 0x20)) {
        uVar14 = *(ulonglong *)(lVar10 + 0x20);
      }
      *(ulonglong *)(lVar10 + 0x20) = uVar14;
      FUN_14678ade5(lVar10,uVar16,param_2 == 2);
      FUN_14678ae19(lVar10);
    }
  }
  else {
LAB_14678a02f:
    if (*(ulonglong *)(lVar10 + 0x10) < uVar14) {
      if ((int)POPCOUNT(uVar2) != 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((uVar2 - 1 & uVar14) == 0) {
        lVar10 = FUN_14678b0bb(lVar10,uVar14);
      }
      else {
        uVar9 = FUN_14678b0bb(lVar10,-uVar2 & uVar14);
        lVar10 = FUN_14678b0dc(uVar9,(uVar14 + uVar2) - 1 & -uVar2);
      }
    }
    local_c0 = FUN_14678b574(uVar17 - 1);
    if (uVar17 < *(ulonglong *)(local_c0 + 0x18)) {
      if ((int)POPCOUNT(uVar2) != 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((uVar2 - 1 & uVar17) == 0) {
        local_c0 = FUN_14678b0dc(local_c0,uVar17);
      }
      else {
        uVar9 = FUN_14678b0dc(local_c0,(uVar17 - 1) + uVar2 & -uVar2);
        local_c0 = FUN_14678b0bb(uVar9,uVar17 & -uVar2);
        uVar15 = uVar2;
      }
    }
    local_e8 = FUN_14678a920();
    local_f0 = uVar13;
    local_e0 = lVar10;
    if (param_2 == 0) {
      bVar5 = false;
LAB_14678a11d:
      if (lVar10 != local_e8) {
        local_a8 = POPCOUNT(uVar2);
        local_c8 = uVar2 - 1;
        uVar15 = 0;
        do {
          while( true ) {
            uVar8 = *(uint *)(lVar10 + 0xc);
            if (((uVar8 >> 1 & 1) != (uint)local_f0) &&
               (((uVar13 = *(ulonglong *)(lVar10 + 0x10), bVar5 ||
                 (uVar13 == *(ulonglong *)(lVar10 + 0x18))) ||
                (*(ulonglong *)(lVar10 + 0x18) <= uVar17 && uVar14 <= uVar13)))) break;
            lVar10 = FUN_14678a920(lVar10);
            if (lVar10 == local_e8) goto LAB_14678a364;
          }
          if ((int)local_a8 != 1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if ((local_c8 & uVar13) != 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar16 = uVar13;
          lVar12 = lVar10;
          if (lVar10 == local_e8) {
LAB_14678a7ca:
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          do {
            if (!bVar5) {
              if ((*(ulonglong *)(lVar12 + 0x10) != *(ulonglong *)(lVar12 + 0x18)) &&
                 (uVar17 < *(ulonglong *)(lVar12 + 0x18) || *(ulonglong *)(lVar12 + 0x10) < uVar14))
              break;
            }
            if ((uVar8 >> 2 & 1) != param_7) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            if ((uVar8 >> 3 & 1) != param_8) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            uVar16 = *(ulonglong *)(lVar12 + 0x18);
            lVar12 = FUN_14678a920(lVar12);
            if (lVar12 == local_e8) break;
            uVar8 = *(uint *)(lVar12 + 0xc);
          } while ((uVar8 >> 1 & 1) != (uint)local_f0);
          if (lVar12 == lVar10) goto LAB_14678a7ca;
          if ((lVar12 != 0) && (*(ulonglong *)(lVar12 + 0x10) != uVar16)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if ((local_c8 & uVar16) != 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          lVar10 = uVar16 - uVar13;
          if (uVar16 < uVar13 || lVar10 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (param_7 == 1) {
            if ((local_f0 & 1) == 0) {
              local_78 = &DAT_14c80b368;
              local_70 = param_8;
              local_88 = uVar13;
              local_80 = uVar16;
              cVar7 = FUN_1467818ed(param_5,&local_88,1);
            }
            else {
              local_90 = param_8;
              local_a0 = uVar13;
              local_98 = uVar16;
              cVar7 = FUN_146788ab5(local_b0,&local_a0,param_6);
            }
            lVar10 = local_e0;
            if (cVar7 == '\0') {
              if (uVar15 != 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              FUN_14678b118(local_e0);
              if (local_c0 != lVar10) {
                FUN_14678b118();
              }
              uVar15 = 0;
              goto LAB_146789ea2;
            }
          }
          else if (param_7 == 0) {
            if ((local_f0 & 1) == 0) {
              FUN_14678db4f(uVar13,lVar10,param_8);
              *(longlong *)(param_5 + 0x418) = *(longlong *)(param_5 + 0x418) + lVar10;
            }
            else {
              FUN_14678d9b9(uVar13,lVar10,param_8);
              FUN_14678ec26(lVar10);
            }
          }
          uVar15 = 1;
          lVar10 = lVar12;
        } while (lVar12 != local_e8);
      }
    }
    else if (param_2 == 1) {
      bVar5 = true;
      goto LAB_14678a11d;
    }
LAB_14678a364:
    if (local_e0 != local_e8) {
      iVar4 = (int)local_f0;
      uVar13 = local_f0;
      lVar12 = local_e0;
      do {
        FUN_14678a9f6(lVar12);
        uVar16 = *(ulonglong *)(lVar12 + 0x20);
        if (*(ulonglong *)(lVar12 + 0x20) <= local_d0) {
          uVar16 = local_d0;
        }
        *(ulonglong *)(lVar12 + 0x20) = uVar16;
        if (iVar4 - 2U < 3) {
          uVar13 = *(ulonglong *)(lVar12 + 0x10);
          uVar16 = *(ulonglong *)(lVar12 + 0x18);
          local_68 = uVar14;
          local_60 = uVar17;
          local_58 = uVar13;
          local_50 = uVar16;
          cVar7 = FUN_14678a9a6(&local_58,&local_68);
          if (cVar7 == '\0') {
            uVar16 = 0;
            uVar13 = 0;
          }
          else {
            if (uVar17 <= uVar16) {
              uVar16 = uVar17;
            }
            if (uVar13 <= uVar14) {
              uVar13 = uVar14;
            }
            if (uVar16 < uVar13) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
          }
          puVar1 = (ulonglong *)(lVar12 + 0x28);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - (uVar16 - uVar13);
          if (uVar2 < uVar16 - uVar13) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar13 = local_f0;
          if ((uint)local_f0 < 3) goto LAB_14678a4a9;
          uVar8 = *(uint *)(lVar12 + 0xc);
          if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if ((uVar8 & 2) == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if ((uVar8 & 4) == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if ((uVar8 & 8) == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          *(uint *)(lVar12 + 0xc) = (uVar8 & 0xfffffff2) + (param_8 & 1) * 8 + (param_7 & 1) * 4 + 1
          ;
        }
        else {
          if ((int)uVar13 == 1) {
            *(byte *)(lVar12 + 0xc) = *(byte *)(lVar12 + 0xc) | 2;
            uVar13 = *(ulonglong *)(lVar12 + 0x10);
            uVar16 = *(ulonglong *)(lVar12 + 0x18);
            local_68 = uVar14;
            local_60 = uVar17;
            local_58 = uVar13;
            local_50 = uVar16;
            cVar7 = FUN_14678a9a6(&local_58,&local_68);
            if (cVar7 == '\0') {
              uVar16 = 0;
              uVar13 = 0;
            }
            else {
              if (uVar17 <= uVar16) {
                uVar16 = uVar17;
              }
              if (uVar13 <= uVar14) {
                uVar13 = uVar14;
              }
              if (uVar16 < uVar13) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
            }
            uVar2 = *(ulonglong *)(lVar12 + 0x28);
            uVar18 = (uVar16 - uVar13) + *(ulonglong *)(lVar12 + 0x28);
            *(ulonglong *)(lVar12 + 0x28) = uVar18;
            if (CARRY8(uVar16 - uVar13,uVar2)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            if (*(ulonglong *)(lVar12 + 0x18) < *(ulonglong *)(lVar12 + 0x10)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            uVar13 = local_f0;
            if (*(ulonglong *)(lVar12 + 0x18) - *(ulonglong *)(lVar12 + 0x10) < uVar18) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
          }
          else if ((*(ulonglong *)(lVar12 + 0x10) == *(ulonglong *)(lVar12 + 0x18)) ||
                  (*(ulonglong *)(lVar12 + 0x18) <= uVar17 &&
                   uVar14 <= *(ulonglong *)(lVar12 + 0x10))) {
            *(byte *)(lVar12 + 0xc) = *(byte *)(lVar12 + 0xc) & 0xfd;
          }
LAB_14678a4a9:
          uVar8 = *(uint *)(lVar12 + 0xc);
          if ((uVar8 & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if ((uVar8 >> 2 & 1) != param_7) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if ((uVar8 >> 3 & 1) != param_8) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        FUN_14678ae19(lVar12);
        lVar12 = FUN_14678a920(lVar12);
      } while (lVar12 != local_e8);
    }
    lVar12 = local_d8;
    uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
    for (lVar10 = local_e0; (lVar10 != 0 && (*(ulonglong *)(lVar10 + 0x10) < uVar17));
        lVar10 = FUN_14678b118(lVar10)) {
    }
  }
  if ((lVar12 != DAT_14c80ae98) || ((DAT_14c80ae30 == 0) == (local_b8 != 0))) {
    uVar9 = FUN_14678dd74(0,4);
    FUN_14678ec29(&DAT_14c80aee0,uVar9);
  }
LAB_146789ea2:
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar15 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14678a7ce FUN_14678a7ce body=190 status=ok
// SIG undefined FUN_14678a7ce(void)

byte FUN_14678a7ce(undefined8 param_1)

{
  code *pcVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  uint local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  lVar2 = DAT_14c80ae38;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar3 = 0;
  if (DAT_14c80ae30 != 0) {
    if (DAT_14c80ae60 == -4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (DAT_14c80ae38 != 0) {
      if (*(longlong *)(DAT_14c80ae38 + 0x28) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if ((*(byte *)(DAT_14c80ae38 + 0xc) & 2) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      FUN_14678a88d(DAT_14c80ae38);
      local_30 = *(uint *)(lVar2 + 0xc) >> 3 & 1;
      local_38 = *(uint *)(lVar2 + 0xc) >> 2 & 1;
      local_28 = *(undefined4 *)(lVar2 + 0x10);
      uStack_24 = *(undefined4 *)(lVar2 + 0x14);
      uStack_20 = *(undefined4 *)(lVar2 + 0x18);
      uStack_1c = *(undefined4 *)(lVar2 + 0x1c);
      local_40 = 0;
      local_48 = param_1;
      bVar3 = FUN_146789e47(&local_28,0,0,0);
      bVar3 = bVar3 | 2;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14678a88d FUN_14678a88d body=147 status=ok
// SIG undefined FUN_14678a88d(void)

void FUN_14678a88d(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  
  if (DAT_14c80aed0 == 0) {
    DAT_14c80aed0 = FUN_14678d6e8();
  }
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  uVar2 = *(ulonglong *)(param_1 + 0x18);
  if (uVar2 <= uVar1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (uVar2 - uVar1 < *(ulonglong *)(param_1 + 0x28)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if ((int)POPCOUNT(DAT_14c80aed0) == 1) {
    if ((uVar1 & DAT_14c80aed0 - 1) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if ((DAT_14c80aed0 - 1 & uVar2) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (*(ulonglong *)(param_1 + 0x28) != 0) {
      if (DAT_14c80aed0 == 0) {
        DAT_14c80aed0 = FUN_14678d6e8();
      }
      if (uVar2 - uVar1 != DAT_14c80aed0) {
        if (*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (*(longlong *)(param_1 + 0x28) !=
            *(ulonglong *)(param_1 + 0x18) - *(ulonglong *)(param_1 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



// FUNCTION 14678a920 FUN_14678a920 body=134 status=ok
// SIG undefined FUN_14678a920(void)

uint * FUN_14678a920(uint *param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint *puVar3;
  
  puVar1 = (uint *)(DAT_14c80ad08 + (ulonglong)param_1[1] * 8);
  if (puVar1 == (uint *)0x0 || (ulonglong)param_1[1] == 0) {
    lVar2 = 0;
    if (7 < (ulonglong)param_1[2]) {
      lVar2 = DAT_14c80ad08;
    }
    puVar1 = (uint *)(lVar2 + (ulonglong)param_1[2] & 0xfffffffffffffffe);
    puVar3 = (uint *)0x0;
    if (puVar1 != (uint *)0x0) {
      do {
        puVar3 = puVar1;
        puVar1 = (uint *)(DAT_14c80ad08 + (ulonglong)puVar3[1] * 8);
        if ((ulonglong)puVar3[1] == 0) {
          puVar1 = (uint *)0x0;
        }
        if (param_1 != puVar1) {
          return puVar3;
        }
        lVar2 = DAT_14c80ad08;
        if ((ulonglong)puVar3[2] < 8) {
          lVar2 = 0;
        }
        puVar1 = (uint *)(lVar2 + (ulonglong)puVar3[2] & 0xfffffffffffffffe);
        param_1 = puVar3;
      } while (puVar1 != (uint *)0x0);
      puVar3 = (uint *)0x0;
    }
  }
  else {
    do {
      puVar3 = puVar1;
      if ((ulonglong)*puVar3 == 0) {
        return puVar3;
      }
      puVar1 = (uint *)(DAT_14c80ad08 + (ulonglong)*puVar3 * 8);
    } while (puVar1 != (uint *)0x0);
  }
  return puVar3;
}



// FUNCTION 14678a9a6 FUN_14678a9a6 body=80 status=ok
// SIG undefined FUN_14678a9a6(void)

undefined8 FUN_14678a9a6(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if (uVar2 < uVar1) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar3 = *param_2;
  uVar4 = param_2[1];
  if (uVar4 < uVar3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (uVar3 == uVar4 || uVar1 == uVar2) {
    uVar6 = 0;
  }
  else {
    if (uVar2 <= uVar1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    if (uVar4 <= uVar3) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar6 = CONCAT71((int7)(uVar1 >> 8),uVar1 < uVar4 && uVar3 < uVar2);
  }
  return uVar6;
}



// FUNCTION 14678a9f6 FUN_14678a9f6 body=1007 status=ok
// SIG undefined FUN_14678a9f6(void)

void FUN_14678a9f6(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  code *pcVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar14 = DAT_14c80ae30;
  uVar2 = *(uint *)(param_1 + 0xc);
  if (0xf < uVar2) {
    uVar13 = (ulonglong)(uVar2 >> 4);
    uVar11 = uVar13 - 1;
    if (DAT_14c80ae60 + 4U <= uVar11) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    plVar9 = (longlong *)(DAT_14c80ae58 + -0x20 + uVar11 * 8);
    if (uVar2 < 0x50) {
      plVar9 = (longlong *)(&DAT_14c80ae30 + uVar13);
    }
    if (*plVar9 != param_1) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    if (DAT_14c80ae30 < uVar13) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    uVar12 = DAT_14c80ae30 - 1;
    if (DAT_14c80ae60 + 4U <= uVar12) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    lVar3 = *plVar9;
    plVar9 = (longlong *)(DAT_14c80ae58 + -0x20 + uVar12 * 8);
    if (DAT_14c80ae30 < 5) {
      plVar9 = (longlong *)(&DAT_14c80ae30 + DAT_14c80ae30);
    }
    lVar4 = *plVar9;
    *plVar9 = 0;
    if (DAT_14c80ae60 + 4U <= uVar11) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    plVar9 = (longlong *)(DAT_14c80ae58 + -0x20 + uVar11 * 8);
    if (uVar2 < 0x50) {
      plVar9 = (longlong *)(&DAT_14c80ae30 + uVar13);
    }
    *plVar9 = 0;
    DAT_14c80ae30 = uVar12;
    if (uVar14 == uVar13) {
      puVar1 = (uint *)(lVar3 + 0xc);
      *puVar1 = *puVar1 & 0xf;
    }
    else {
      if (uVar2 >> 4 == 1) {
LAB_14678ab1e:
        do {
          uVar11 = uVar13 * 2;
          uVar14 = uVar13 * 2 + 1;
          if (uVar11 < uVar12) {
            if (DAT_14c80ae60 + 4U <= uVar11) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            plVar9 = (longlong *)(DAT_14c80ae58 + -0x20 + uVar13 * 0x10);
            if (uVar14 < 5) {
              plVar9 = (longlong *)(&DAT_14c80ae30 + uVar14);
            }
            lVar10 = *plVar9;
            bVar7 = *(ulonglong *)(lVar4 + 0x20) <= *(ulonglong *)(lVar10 + 0x20);
          }
          else {
            if (uVar12 < uVar11) goto LAB_14678ac6f;
            bVar7 = true;
            lVar10 = 0;
          }
          if (uVar11 == 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          if (DAT_14c80ae60 + 4U <= uVar11 - 1) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          plVar9 = (longlong *)(DAT_14c80ae58 + -0x20 + (uVar11 - 1) * 8);
          if (uVar11 < 5) {
            plVar9 = (longlong *)(&DAT_14c80ae30 + uVar13 * 2);
          }
          lVar5 = *plVar9;
          uVar6 = *(ulonglong *)(lVar5 + 0x20);
          if (bVar7) {
            if (*(ulonglong *)(lVar4 + 0x20) <= uVar6) goto LAB_14678ac6f;
LAB_14678abc6:
            *(uint *)(lVar5 + 0xc) = *(uint *)(lVar5 + 0xc) & 0xf | (int)uVar13 << 4;
            if (0xfffffff < uVar13) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            lVar10 = lVar5;
            uVar14 = uVar11;
            if (DAT_14c80ae60 + 4U <= uVar13 - 1) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
          }
          else {
            if ((uVar6 < *(ulonglong *)(lVar4 + 0x20)) && (uVar6 <= *(ulonglong *)(lVar10 + 0x20)))
            goto LAB_14678abc6;
            *(uint *)(lVar10 + 0xc) = *(uint *)(lVar10 + 0xc) & 0xf | (int)uVar13 << 4;
            if (0xfffffff < uVar13) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            if (DAT_14c80ae60 + 4U <= uVar13 - 1) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
          }
          plVar9 = (longlong *)(DAT_14c80ae58 + -0x20 + (uVar13 - 1) * 8);
          if (uVar13 < 5) {
            plVar9 = (longlong *)(&DAT_14c80ae30 + uVar13);
          }
          *plVar9 = lVar10;
          uVar13 = uVar14;
        } while( true );
      }
      uVar14 = (ulonglong)(uVar2 >> 5);
      if (DAT_14c80ae60 + 4U <= uVar14 - 1) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      plVar9 = (longlong *)(DAT_14c80ae58 + -0x20 + (uVar14 - 1) * 8);
      if (uVar2 < 0xa0) {
        plVar9 = (longlong *)(&DAT_14c80ae30 + uVar14);
      }
      lVar10 = *plVar9;
      uVar11 = uVar13;
      if (*(ulonglong *)(lVar10 + 0x20) <= *(ulonglong *)(lVar4 + 0x20)) goto LAB_14678ab1e;
      do {
        uVar13 = uVar14;
        *(uint *)(lVar10 + 0xc) = *(uint *)(lVar10 + 0xc) & 0xf | (int)uVar11 << 4;
        if (DAT_14c80ae60 + 4U <= uVar11 - 1) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        plVar9 = (longlong *)(DAT_14c80ae58 + -0x20 + (uVar11 - 1) * 8);
        if (uVar11 < 5) {
          plVar9 = (longlong *)(&DAT_14c80ae30 + uVar11);
        }
        *plVar9 = lVar10;
        if (uVar13 == 1) {
          uVar13 = 1;
          break;
        }
        uVar14 = uVar13 >> 1;
        if (DAT_14c80ae60 + 4U <= uVar14 - 1) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        plVar9 = (longlong *)(DAT_14c80ae58 + -0x20 + (uVar14 - 1) * 8);
        if (uVar13 < 10) {
          plVar9 = (longlong *)(&DAT_14c80ae30 + uVar14);
        }
        lVar10 = *plVar9;
        uVar11 = uVar13;
      } while (*(ulonglong *)(lVar4 + 0x20) < *(ulonglong *)(lVar10 + 0x20));
LAB_14678ac6f:
      if (DAT_14c80ae60 + 4U <= uVar13 - 1) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      plVar9 = (longlong *)(DAT_14c80ae58 + -0x20 + (uVar13 - 1) * 8);
      if (uVar13 < 5) {
        plVar9 = (longlong *)(&DAT_14c80ae30 + uVar13);
      }
      *plVar9 = lVar4;
      *(uint *)(lVar4 + 0xc) = *(uint *)(lVar4 + 0xc) & 0xf | (int)uVar13 << 4;
      if (0xfffffff < uVar13) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      puVar1 = (uint *)(lVar3 + 0xc);
      *puVar1 = *puVar1 & 0xf;
      uVar12 = DAT_14c80ae30;
    }
    if (uVar12 != 0) {
      if (DAT_14c80ae60 == -4) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      if (DAT_14c80ae38 != 0) {
        DAT_14c80ae98 = *(undefined8 *)(DAT_14c80ae38 + 0x20);
      }
    }
  }
  return;
}



// FUNCTION 14678ade5 FUN_14678ade5 body=52 status=ok
// SIG undefined FUN_14678ade5(void)

void FUN_14678ade5(longlong param_1,ulonglong param_2,int param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0x28);
  if (param_3 == 1) {
    *(ulonglong *)(param_1 + 0x28) = uVar1 - param_2;
    if (uVar1 < param_2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  else {
    *(ulonglong *)(param_1 + 0x28) = uVar1 + param_2;
    if (CARRY8(uVar1,param_2)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 0x10)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (*(ulonglong *)(param_1 + 0x18) - *(ulonglong *)(param_1 + 0x10) < uVar1 + param_2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  return;
}



// FUNCTION 14678ae19 FUN_14678ae19 body=674 status=ok
// SIG undefined FUN_14678ae19(void)

void FUN_14678ae19(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  code *pcVar3;
  void *_Dst;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  void *pvVar10;
  
  uVar4 = DAT_14c80ae60;
  uVar6 = DAT_14c80ae30;
  if (0xf < *(uint *)(param_1 + 0xc)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (((*(uint *)(param_1 + 0xc) & 2) != 0) && (*(longlong *)(param_1 + 0x28) == 0)) {
    uVar7 = DAT_14c80ae60 + 4;
    if (uVar7 <= DAT_14c80ae30) {
      if (DAT_14c80ae30 != uVar7) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar9 = 4;
      if (4 < DAT_14c80ae60 * 2) {
        uVar9 = DAT_14c80ae60 * 2;
      }
      if (uVar9 <= DAT_14c80ae60) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      _Dst = (void *)FUN_1467803da(uVar9 * 8,"pas_large_sharing_min_heap/outline_array",0,0);
      uVar7 = uVar9 + 4;
      if (uVar7 <= uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      memset(_Dst,0,uVar9 * 8);
      pvVar10 = (void *)0x0;
      if (DAT_14c80ae58 != (void *)0x0) {
        memcpy(_Dst,DAT_14c80ae58,uVar6 * 8 - 0x20);
        pvVar10 = DAT_14c80ae58;
      }
      FUN_1467803e9(pvVar10,uVar4 << 3,0,0);
      DAT_14c80ae58 = _Dst;
      DAT_14c80ae60 = uVar9;
    }
    if (uVar7 <= uVar6) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    DAT_14c80ae30 = uVar6 + 1;
    puVar8 = (undefined8 *)((longlong)DAT_14c80ae58 + uVar6 * 8 + -0x20);
    if (uVar6 < 4) {
      puVar8 = &DAT_14c80ae30 + DAT_14c80ae30;
    }
    *puVar8 = 0;
    uVar4 = DAT_14c80ae30;
    if (uVar6 == 0) {
      uVar4 = 1;
    }
    else {
      do {
        uVar6 = uVar4 >> 1;
        if (DAT_14c80ae60 + 4 <= uVar6 - 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        plVar5 = (longlong *)((longlong)DAT_14c80ae58 + (uVar6 - 1) * 8 + -0x20);
        if (uVar4 < 10) {
          plVar5 = (longlong *)(&DAT_14c80ae30 + uVar6);
        }
        lVar1 = *plVar5;
        if (*(ulonglong *)(lVar1 + 0x20) <= *(ulonglong *)(param_1 + 0x20)) {
          *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xf | (int)uVar4 << 4;
          if (0xfffffff < uVar4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          goto LAB_14678b01e;
        }
        *(uint *)(lVar1 + 0xc) = *(uint *)(lVar1 + 0xc) & 0xf | (int)uVar4 << 4;
        if (0xfffffff < uVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (DAT_14c80ae60 + 4 <= uVar4 - 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        plVar5 = (longlong *)((longlong)DAT_14c80ae58 + (uVar4 - 1) * 8 + -0x20);
        if (uVar4 < 5) {
          plVar5 = (longlong *)(&DAT_14c80ae30 + uVar4);
        }
        *plVar5 = lVar1;
        bVar2 = 3 < uVar4;
        uVar4 = uVar6;
      } while (bVar2);
    }
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xf | (int)uVar4 << 4;
LAB_14678b01e:
    if (DAT_14c80ae60 + 4 <= uVar4 - 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    plVar5 = (longlong *)((longlong)DAT_14c80ae58 + (uVar4 - 1) * 8 + -0x20);
    if (uVar4 < 5) {
      plVar5 = (longlong *)(&DAT_14c80ae30 + uVar4);
    }
    *plVar5 = param_1;
    if (DAT_14c80ae30 != 0) {
      if (DAT_14c80ae60 == 0xfffffffffffffffc) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (DAT_14c80ae38 != 0) {
        DAT_14c80ae98 = *(undefined8 *)(DAT_14c80ae38 + 0x20);
      }
    }
  }
  return;
}



// FUNCTION 14678b0bb FUN_14678b0bb body=33 status=ok
// SIG undefined FUN_14678b0bb(void)

longlong FUN_14678b0bb(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong lStack_48;
  uint uStack_40;
  uint uStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  
  if (param_2 <= *(ulonglong *)(param_1 + 0x10)) {
    if (*(ulonglong *)(param_1 + 0x10) == param_2) {
      return param_1;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (*(ulonglong *)(param_1 + 0x18) <= param_2) {
    if (*(ulonglong *)(param_1 + 0x18) == param_2) {
      lVar3 = FUN_14678a920();
      return lVar3;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c80aed0 == 0) {
    DAT_14c80aed0 = FUN_14678d6e8();
  }
  if ((int)POPCOUNT(DAT_14c80aed0) == 1) {
    if ((DAT_14c80aed0 - 1U & param_2) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    FUN_14678a9f6(param_1);
    uStack_28 = *(ulonglong *)(param_1 + 0x18);
    lStack_48 = uStack_28 - param_2;
    if (param_2 <= uStack_28) {
      uVar1 = *(uint *)(param_1 + 0xc);
      if (*(longlong *)(param_1 + 0x28) == 0) {
        lStack_48 = 0;
      }
      uStack_40 = uVar1 >> 2 & 1;
      uStack_38 = uVar1 >> 3 & 1;
      uStack_30 = param_2;
      lVar3 = FUN_14678b2ec(&uStack_30,*(undefined8 *)(param_1 + 0x20),uVar1 & 1,uVar1 >> 1 & 1);
      *(ulonglong *)(param_1 + 0x18) = param_2;
      if (*(longlong *)(param_1 + 0x28) == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = param_2 - *(longlong *)(param_1 + 0x10);
      }
      *(longlong *)(param_1 + 0x28) = lVar4;
      FUN_14678ae19(param_1);
      FUN_14678ae19(lVar3);
      if ((uStack_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
        return lVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



// FUNCTION 14678b0dc FUN_14678b0dc body=60 status=ok
// SIG undefined FUN_14678b0dc(void)

longlong FUN_14678b0dc(longlong param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  
  if (param_2 <= *(ulonglong *)(param_1 + 0x10)) {
    if (*(ulonglong *)(param_1 + 0x10) == param_2) {
      lVar2 = FUN_14678b4ef(param_1);
      return lVar2;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_2 < *(ulonglong *)(param_1 + 0x18)) {
    FUN_14678b3e3(param_1);
  }
  else if (*(ulonglong *)(param_1 + 0x18) != param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  return param_1;
}



// FUNCTION 14678b118 FUN_14678b118 body=468 status=ok
// SIG undefined FUN_14678b118(void)

longlong FUN_14678b118(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar3 = FUN_14678b4ef();
  lVar4 = FUN_14678a920(param_1);
  if (lVar3 != 0) {
    if (*(ulonglong *)(lVar3 + 0x18) <= *(ulonglong *)(lVar3 + 0x10)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (*(ulonglong *)(lVar3 + 0x18) != *(ulonglong *)(param_1 + 0x10)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  if (lVar4 != 0) {
    if (*(ulonglong *)(lVar4 + 0x18) <= *(ulonglong *)(lVar4 + 0x10)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (*(ulonglong *)(lVar4 + 0x10) != *(ulonglong *)(param_1 + 0x18)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  if (lVar3 != 0) {
    cVar2 = FUN_14678b5c7(param_1,lVar3);
    if (cVar2 != '\0') {
      FUN_14678a9f6(lVar3);
      FUN_14678a9f6(param_1);
      lVar7 = *(longlong *)(lVar3 + 0x28);
      if (lVar7 != 0) {
        if (*(ulonglong *)(lVar3 + 0x18) < *(ulonglong *)(lVar3 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (*(ulonglong *)(lVar3 + 0x18) - *(ulonglong *)(lVar3 + 0x10) != lVar7) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        lVar6 = *(ulonglong *)(param_1 + 0x18) - *(ulonglong *)(param_1 + 0x10);
        if (*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (lVar6 != *(longlong *)(param_1 + 0x28)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        *(longlong *)(param_1 + 0x28) = lVar6 + lVar7;
      }
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar3 + 0x10);
      uVar5 = *(ulonglong *)(lVar3 + 0x20);
      if (*(ulonglong *)(lVar3 + 0x20) < *(ulonglong *)(param_1 + 0x20)) {
        uVar5 = *(ulonglong *)(param_1 + 0x20);
      }
      *(ulonglong *)(param_1 + 0x20) = uVar5;
      FUN_14678a9f6(lVar3);
      FUN_14678feae(&DAT_14c80ae28,lVar3,&DAT_14c80ae68);
      FUN_1467a08c6(lVar3);
      FUN_14678ae19(param_1);
    }
  }
  if (lVar4 != 0) {
    cVar2 = FUN_14678b5c7(param_1,lVar4);
    if (cVar2 != '\0') {
      FUN_14678a9f6(param_1);
      FUN_14678a9f6(lVar4);
      lVar3 = *(longlong *)(lVar4 + 0x28);
      if (lVar3 != 0) {
        if (*(ulonglong *)(lVar4 + 0x18) < *(ulonglong *)(lVar4 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (*(ulonglong *)(lVar4 + 0x18) - *(ulonglong *)(lVar4 + 0x10) != lVar3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        lVar7 = *(ulonglong *)(param_1 + 0x18) - *(ulonglong *)(param_1 + 0x10);
        if (*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (lVar7 != *(longlong *)(param_1 + 0x28)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        *(longlong *)(lVar4 + 0x28) = lVar7 + lVar3;
      }
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(param_1 + 0x10);
      uVar5 = *(ulonglong *)(lVar4 + 0x20);
      if (*(ulonglong *)(lVar4 + 0x20) < *(ulonglong *)(param_1 + 0x20)) {
        uVar5 = *(ulonglong *)(param_1 + 0x20);
      }
      *(ulonglong *)(lVar4 + 0x20) = uVar5;
      FUN_14678a9f6(param_1);
      FUN_14678feae(&DAT_14c80ae28,param_1,&DAT_14c80ae68);
      FUN_1467a08c6(param_1);
      FUN_14678ae19(lVar4);
    }
  }
  return lVar4;
}



// FUNCTION 14678b2ec FUN_14678b2ec body=225 status=ok
// SIG undefined FUN_14678b2ec(void)

undefined8 *
FUN_14678b2ec(ulonglong *param_1,undefined8 param_2,uint param_3,uint param_4,longlong param_5,
             uint param_6,uint param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  puVar4 = (undefined8 *)FUN_1467a08ac(0x30,"pas_large_sharing_node");
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  if (param_3 == 0) {
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (uVar2 < uVar1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (uVar2 - uVar1 != param_5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (param_6 != 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (param_7 != 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  puVar4[2] = uVar1;
  puVar4[3] = uVar2;
  puVar4[4] = param_2;
  puVar4[5] = param_5;
  *(uint *)((longlong)puVar4 + 0xc) =
       (param_3 & 1) + (param_4 & 1) * 2 + (param_6 & 1) * 4 + (param_7 & 1) * 8;
  FUN_14678f376(&DAT_14c80ae28,puVar4,&LAB_14678b3cd,&DAT_14c80ae68);
  return puVar4;
}



// FUNCTION 14678b3e3 FUN_14678b3e3 body=267 status=ok
// SIG undefined FUN_14678b3e3(void)

undefined8 FUN_14678b3e3(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  uint local_40;
  uint local_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c80aed0 == 0) {
    DAT_14c80aed0 = FUN_14678d6e8();
  }
  if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((DAT_14c80aed0 - 1U & param_2) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  FUN_14678a9f6(param_1);
  local_28 = *(ulonglong *)(param_1 + 0x18);
  local_48 = local_28 - param_2;
  if (param_2 <= local_28) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if (*(longlong *)(param_1 + 0x28) == 0) {
      local_48 = 0;
    }
    local_40 = uVar1 >> 2 & 1;
    local_38 = uVar1 >> 3 & 1;
    local_30 = param_2;
    uVar3 = FUN_14678b2ec(&local_30,*(undefined8 *)(param_1 + 0x20),uVar1 & 1,uVar1 >> 1 & 1);
    *(ulonglong *)(param_1 + 0x18) = param_2;
    if (*(longlong *)(param_1 + 0x28) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = param_2 - *(longlong *)(param_1 + 0x10);
    }
    *(longlong *)(param_1 + 0x28) = lVar4;
    FUN_14678ae19(param_1);
    FUN_14678ae19(uVar3);
    if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



// FUNCTION 14678b4ef FUN_14678b4ef body=133 status=ok
// SIG undefined FUN_14678b4ef(void)

uint * FUN_14678b4ef(uint *param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint *puVar3;
  
  puVar1 = (uint *)(DAT_14c80ad08 + (ulonglong)*param_1 * 8);
  if (puVar1 == (uint *)0x0 || (ulonglong)*param_1 == 0) {
    lVar2 = 0;
    if (7 < (ulonglong)param_1[2]) {
      lVar2 = DAT_14c80ad08;
    }
    puVar1 = (uint *)(lVar2 + (ulonglong)param_1[2] & 0xfffffffffffffffe);
    puVar3 = (uint *)0x0;
    if (puVar1 != (uint *)0x0) {
      do {
        puVar3 = puVar1;
        puVar1 = (uint *)(DAT_14c80ad08 + (ulonglong)*puVar3 * 8);
        if ((ulonglong)*puVar3 == 0) {
          puVar1 = (uint *)0x0;
        }
        if (param_1 != puVar1) {
          return puVar3;
        }
        lVar2 = DAT_14c80ad08;
        if ((ulonglong)puVar3[2] < 8) {
          lVar2 = 0;
        }
        puVar1 = (uint *)(lVar2 + (ulonglong)puVar3[2] & 0xfffffffffffffffe);
        param_1 = puVar3;
      } while (puVar1 != (uint *)0x0);
      puVar3 = (uint *)0x0;
    }
  }
  else {
    do {
      puVar3 = puVar1;
      if ((ulonglong)puVar3[1] == 0) {
        return puVar3;
      }
      puVar1 = (uint *)(DAT_14c80ad08 + (ulonglong)puVar3[1] * 8);
    } while (puVar1 != (uint *)0x0);
  }
  return puVar3;
}



// FUNCTION 14678b574 FUN_14678b574 body=83 status=ok
// SIG undefined FUN_14678b574(void)

uint * FUN_14678b574(ulonglong param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(DAT_14c80ad08 + (ulonglong)DAT_14c80ae28 * 8);
  if (puVar2 != (uint *)0x0 && (ulonglong)DAT_14c80ae28 != 0) {
    do {
      if ((*(ulonglong *)(puVar2 + 4) <= param_1) && (param_1 < *(ulonglong *)(puVar2 + 6))) {
        return puVar2;
      }
      if (*(ulonglong *)(puVar2 + 4) < param_1) {
        uVar1 = puVar2[1];
      }
      else {
        uVar1 = *puVar2;
      }
    } while ((uVar1 != 0) &&
            (puVar2 = (uint *)((ulonglong)uVar1 * 8 + DAT_14c80ad08), puVar2 != (uint *)0x0));
  }
  return (uint *)0x0;
}



// FUNCTION 14678b5c7 FUN_14678b5c7 body=123 status=ok
// SIG undefined FUN_14678b5c7(void)

undefined8 FUN_14678b5c7(longlong param_1,longlong param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if (((*(uint *)(param_2 + 0xc) ^ uVar1) & 0xf) == 0) {
    if (*(longlong *)(param_1 + 0x28) == 0) {
      bVar4 = *(longlong *)(param_2 + 0x28) == 0;
    }
    else {
      bVar4 = false;
    }
    if (*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 0x10)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (*(ulonglong *)(param_1 + 0x18) - *(ulonglong *)(param_1 + 0x10) ==
        *(longlong *)(param_1 + 0x28)) {
      if (*(ulonglong *)(param_2 + 0x18) < *(ulonglong *)(param_2 + 0x10)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      bVar3 = *(ulonglong *)(param_2 + 0x18) - *(ulonglong *)(param_2 + 0x10) ==
              *(longlong *)(param_2 + 0x28);
    }
    else {
      bVar3 = false;
    }
    if ((bool)(bVar4 | bVar3)) {
      if ((uVar1 & 2) == 0 || bVar3) {
        return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
      }
      return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x20) >> 8),
                      *(longlong *)(param_1 + 0x20) == *(longlong *)(param_2 + 0x20));
    }
  }
  return 0;
}



// FUNCTION 14678b642 FUN_14678b642 body=349 status=ok
// SIG undefined FUN_14678b642(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14678b642(ulonglong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  char cVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  ulonglong local_88;
  longlong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_60;
  byte local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_50 = 1;
  local_48 = 1;
  local_40 = FUN_14678b9e5;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uVar1 = *param_2;
  if ((int)POPCOUNT(uVar1) != 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (uVar1 <= param_2[1]) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar5 = 8;
  if (8 < uVar1) {
    uVar5 = uVar1;
  }
  if ((int)POPCOUNT(uVar5) != 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  *param_2 = uVar5;
  local_78 = *param_2;
  local_70 = param_2[1];
  local_98 = &local_50;
  FUN_146783861(&local_60,&DAT_14c80aea0,param_1);
  uVar1 = DAT_14c80aeb8;
  if ((local_58 & 1) != 0) {
    local_80 = local_60 + param_1;
    if (CARRY8(local_60,param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    local_88 = local_60;
    cVar4 = FUN_146789cf3(&local_88,0,0,1);
    if (cVar4 == '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    _DAT_14c80aeb0 = param_1 + _DAT_14c80aeb0;
    uVar1 = _DAT_14c80aeb0;
    if (_DAT_14c80aeb0 <= DAT_14c80aeb8) {
      uVar1 = DAT_14c80aeb8;
    }
  }
  DAT_14c80aeb8 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_60;
}



// FUNCTION 14678b7a0 FUN_14678b7a0 body=68 status=ok
// SIG undefined FUN_14678b7a0(void)

ulonglong * FUN_14678b7a0(ulonglong *param_1,ulonglong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  
  uVar1 = *param_2;
  if ((int)POPCOUNT(uVar1) != 1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar2 = param_2[1];
  if (uVar1 <= uVar2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if ((int)POPCOUNT(param_3) != 1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (param_3 < uVar1) {
    param_3 = uVar1;
  }
  if ((int)POPCOUNT(param_3) == 1) {
    *param_1 = param_3;
    param_1[1] = uVar2;
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



// FUNCTION 14678b7e4 FUN_14678b7e4 body=85 status=ok
// SIG undefined FUN_14678b7e4(void)

void FUN_14678b7e4(longlong param_1,undefined4 *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  lVar2 = FUN_14678b642();
  if (param_1 != 0 && lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14678b83a FUN_14678b83a body=94 status=ok
// SIG undefined FUN_14678b83a(void)

void FUN_14678b83a(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 1;
  local_18 = 0;
  lVar2 = FUN_14678b642();
  if (param_1 != 0 && lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14678b899 FUN_14678b899 body=203 status=ok
// SIG undefined FUN_14678b899(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14678b899(ulonglong param_1,ulonglong param_2)

{
  code *pcVar1;
  BOOLEAN BVar2;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  ulonglong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_2 != 0) {
    local_50 = 1;
    local_48 = 1;
    local_40 = FUN_14678b9e5;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    if (CARRY8(param_1,param_2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_60 = param_1;
    local_58 = param_1 + param_2;
    FUN_146789c80(&local_60,0,1);
    local_68 = &local_50;
    FUN_146784a5e(&DAT_14c80aea0,param_1,param_1 + param_2,0);
    _DAT_14c80aeb0 = _DAT_14c80aeb0 - param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14678b965 FUN_14678b965 body=108 status=ok
// SIG undefined FUN_14678b965(void)

void FUN_14678b965(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_4 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_20 = 1;
  local_18 = 0;
  lVar2 = FUN_14678b642();
  if (param_1 != 0 && lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14678b9d2 FUN_14678b9d2 body=19 status=ok
// SIG undefined FUN_14678b9d2(void)

void FUN_14678b9d2(undefined8 param_1,undefined8 param_2,int param_3,longlong param_4)

{
  code *pcVar1;
  
  if (param_3 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_4 == 0) {
    FUN_14678b899();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14678b9e5 FUN_14678b9e5 body=352 status=ok
// SIG undefined FUN_14678b9e5(void)

ulonglong * FUN_14678b9e5(ulonglong *param_1,ulonglong param_2,undefined4 *param_3,longlong param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  ulonglong local_68;
  longlong local_60;
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  uint uStack_40;
  int iStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_4 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (DAT_14c80aed0 == 0) {
    DAT_14c80aed0 = FUN_14678d6e8();
  }
  if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar3 = -DAT_14c80aed0 & (param_2 + DAT_14c80aed0) - 1;
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  iStack_3c = param_3[3];
  FUN_14678b7a0(local_58);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  FUN_14678ec26(uVar3);
  local_78 = 1;
  FUN_146790cc6(&local_48,uVar3,local_58,"pas_large_utility_free_heap/chunk");
  if ((uStack_40 & 1) == 0) {
    FUN_14678ec27(uVar3);
  }
  else {
    if (iStack_3c != 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar2 = CONCAT44(uStack_44,local_48);
    FUN_146790cbb(uVar2,uVar3);
    local_60 = uVar2 + uVar3;
    if (CARRY8(uVar2,uVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_68 = uVar2;
    FUN_146789c0d(&local_68,0,1);
    *param_1 = uVar2;
    param_1[1] = param_2;
    param_1[2] = uVar2;
    param_1[3] = 0;
    param_1[4] = uVar2 + param_2;
    param_1[5] = uVar3 - param_2;
    *(undefined4 *)(param_1 + 6) = 1;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14678bb46 FUN_14678bb46 body=258 status=ok
// SIG undefined FUN_14678bb46(void)

void FUN_14678bb46(undefined2 *param_1,ulonglong param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  ulonglong uVar3;
  byte bVar4;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(byte *)((longlong)param_1 + 3) = (char)param_3 << 7 | 2;
  if (1 < param_3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar2 = *(uint *)(param_2 + 0x20) & 0x7ffffff;
  *(uint *)(param_1 + 0xe) = uVar2;
  if (uVar2 != 0) {
    bVar4 = (byte)((uint)*(undefined4 *)(param_2 + 0x20) >> 0x1b);
    *(byte *)(param_1 + 2) = bVar4;
    if ((*(char *)(param_2 + 0xc) != '\0') && ((~(-1 << bVar4) & uVar2) != 0)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar3 = param_2 | 5;
    if (param_2 == 0) {
      uVar3 = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(ulonglong *)(param_1 + 0x1c) = uVar3;
    bVar4 = *(byte *)(param_2 + 0xc);
    if (bVar4 == 0) {
      uVar2 = (uint)*(char *)((ulonglong)
                              ((uint)*(byte *)(param_2 + 0x5a) * 0x80000 +
                              (uint)*(ushort *)(param_2 + 0x58) * 8) + 0x7c + DAT_14c80ad08);
      if (3 < uVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      *(uint *)(param_1 + 4) = uVar2 + (*(uint *)(param_1 + 4) & 0xffffff00) + 0xe;
      FUN_14677dfbd(param_1 + 0x20,param_2 + 0x40);
    }
    else {
      if (0x5ffffff < (uint)bVar4 << 0x18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      *(uint *)(param_1 + 4) = (uint)bVar4 * 2 + (*(uint *)(param_1 + 4) & 0xffffff00) + 2;
    }
    *(undefined1 *)(param_1 + 6) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14678bc48 FUN_14678bc48 body=30 status=ok
// SIG undefined FUN_14678bc48(void)

void FUN_14678bc48(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)((longlong)param_1 + 3) = 2;
  *(undefined4 *)(param_1 + 1) = 1;
  return;
}



// FUNCTION 14678bc66 FUN_14678bc66 body=123 status=ok
// SIG undefined FUN_14678bc66(void)

void FUN_14678bc66(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x38);
  if (((uint)uVar3 & 7) == 5) {
    uVar3 = uVar3 & 0xfffffffffffffff8;
  }
  else {
    uVar3 = FUN_146799574(uVar3);
  }
  uVar1 = *(uint *)(uVar3 + 0xc);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar4 = uVar3 | 5;
  if (uVar3 == 0) {
    uVar4 = 0;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(ulonglong *)(param_1 + 0x38) = uVar4;
  if (uVar1 << 0x18 < 0x6000000) {
    *(uint *)(param_1 + 8) = (*(uint *)(param_1 + 8) & 0xffffff00) + (uVar1 & 0xff) * 2 + 2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



// FUNCTION 14678bce1 FUN_14678bce1 body=243 status=ok
// SIG undefined FUN_14678bce1(void)

void FUN_14678bce1(char *param_1,char *param_2)

{
  code *pcVar1;
  BOOLEAN BVar2;
  size_t _Size;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (*param_2 == '\x01') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (((uint)*(ulonglong *)(param_2 + 0x38) & 7) == 5) {
    uVar3 = *(ulonglong *)(param_2 + 0x38) & 0xfffffffffffffff8;
  }
  else {
    uVar3 = FUN_146799574();
  }
  _Size = FUN_1467993fd(uVar3);
  memcpy(param_1,param_2,_Size);
  if (((uint)(int)param_1[8] < 0xe) && ((0x2aa8U >> ((int)param_1[8] & 0x1fU) & 1) != 0)) {
    if (((uint)*(ulonglong *)(param_1 + 0x38) & 7) == 4) {
      puVar5 = (undefined8 *)(*(ulonglong *)(param_1 + 0x38) & 0xfffffffffffffff8);
      lVar4 = 0;
      if (*(uint3 *)(puVar5 + 1) != 0) {
        lVar4 = (ulonglong)((uint)*(uint3 *)(puVar5 + 1) * 8) + DAT_14c80ad08;
      }
      AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x10));
      if ((char *)*puVar5 == param_2 + 0x40) {
        *puVar5 = param_1 + 0x40;
      }
                    /* WARNING: Could not recover jumptable at 0x00014678bdba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x10));
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  return;
}



// FUNCTION 14678bdd4 FUN_14678bdd4 body=1229 status=ok
// SIG undefined FUN_14678bdd4(void)

undefined8 FUN_14678bdd4(char *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  ulonglong uVar8;
  longlong lVar9;
  PSRWLOCK SRWLock;
  bool bVar10;
  code *pcVar11;
  char cVar12;
  BOOLEAN BVar13;
  longlong lVar14;
  ulonglong uVar15;
  PSRWLOCK SRWLock_00;
  undefined8 uVar16;
  char *pcVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  
  if (*param_1 == '\x01') {
    FUN_14678cc2f("allocator = %p\n",param_1);
    uVar16 = FUN_14678c2a1(param_1[3] & 0x7f);
    FUN_14678cc2f("allocator->scavenger_data.kind = %s\n",uVar16);
    pcVar17 = "not_in_thread_local_cache";
    if (-1 < param_1[3]) {
      pcVar17 = "in_thread_local_cache";
    }
    FUN_14678cc2f("allocator->scavenger_data.location = %s\n",pcVar17);
    puVar18 = &DAT_149dfbe7b;
    if (*param_1 != '\0') {
      puVar18 = &DAT_149dfbe7e;
    }
    FUN_14678cc2f("allocator->scavenger_data.is_in_use = %s\n",puVar18);
    FUN_14678cc2f("at time of assert: allocator->scavenger_data.is_in_use = %s\n",&DAT_149dfbe7e);
                    /* WARNING: Does not return */
    pcVar11 = (code *)invalidInstructionException();
    (*pcVar11)();
  }
  cVar12 = FUN_14678c2eb(param_1);
  if (cVar12 != '\0') {
    return 1;
  }
  *param_1 = '\x01';
  cVar12 = FUN_14678c2eb(param_1);
  uVar16 = 1;
  if (cVar12 != '\0') goto LAB_14678be47;
  if ((int)param_1[8] - 0xeU < 4) {
    if (*(longlong *)(param_1 + 0x20) != 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)invalidInstructionException();
      (*pcVar11)();
    }
    FUN_14677dfc9(param_1 + 0x40);
  }
  else if (*(longlong *)(param_1 + 0x20) != 0) {
    uVar19 = *(ulonglong *)(param_1 + 0x38);
    uVar23 = (uint)uVar19 & 7;
    if (uVar23 == 5) {
      uVar20 = uVar19 & 0xfffffffffffffff8;
    }
    else {
      uVar20 = FUN_146799574(uVar19);
    }
    pbVar7 = *(byte **)(&DAT_14c758500 + (longlong)*(char *)(uVar20 + 0xc) * 8);
    uVar15 = *(ulonglong *)(pbVar7 + 0x20);
    if ((int)POPCOUNT(uVar15) != 1) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)invalidInstructionException();
      (*pcVar11)();
    }
    bVar1 = *pbVar7;
    uVar8 = *(ulonglong *)(pbVar7 + 0x28);
    iVar4 = *(int *)(pbVar7 + 0x6c);
    lVar9 = *(longlong *)(pbVar7 + 0x80);
    pcVar11 = *(code **)(pbVar7 + 0xe0);
    lVar14 = (**(code **)(pbVar7 + 0x40))(-uVar15 & *(ulonglong *)(param_1 + 0x20));
    if (uVar23 == 5) {
      uVar19 = *(ulonglong *)(lVar14 + 0x20);
      if ((uVar19 & 6) != 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
    }
    else if (uVar23 != 4) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)invalidInstructionException();
      (*pcVar11)();
    }
    if ((bVar1 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)invalidInstructionException();
      (*pcVar11)();
    }
    if (iVar4 == 1) {
      SRWLock_00 = (PSRWLOCK)0x0;
    }
    else {
      if (param_2 == 0) {
        SRWLock_00 = *(PSRWLOCK *)(lVar14 + 8);
        if (SRWLock_00 != (PSRWLOCK)0x0) {
          BVar13 = TryAcquireSRWLockExclusive(SRWLock_00);
          while (BVar13 != '\0') {
            SRWLock = *(PSRWLOCK *)(lVar14 + 8);
            if (SRWLock_00 == SRWLock) goto LAB_14678c026;
            ReleaseSRWLockExclusive(SRWLock_00);
            BVar13 = TryAcquireSRWLockExclusive(SRWLock);
            SRWLock_00 = SRWLock;
          }
          uVar16 = 0;
          goto LAB_14678be47;
        }
LAB_14678c021:
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      if (param_2 != 1) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      if (*(longlong *)(lVar14 + 8) == 0) goto LAB_14678c021;
      SRWLock_00 = (PSRWLOCK)FUN_146794d20(lVar14,0);
LAB_14678c026:
      if (SRWLock_00 == (PSRWLOCK)0x0) goto LAB_14678c021;
    }
    (*pcVar11)(param_1,uVar19,lVar14,uVar20);
    lVar21 = DAT_14c80ad08;
    uVar23 = (uint)uVar19 & 7;
    if (uVar23 < 2) {
      uVar19 = uVar19 & 0xfffffffffffffff8;
      cVar12 = *(char *)(lVar14 + 2);
      if (cVar12 == '\x01') {
        *(undefined1 *)(lVar14 + 2) = 0;
      }
      uVar5 = *(undefined4 *)(uVar19 + 0xc);
      bVar10 = true;
      lVar21 = (ulonglong)
               ((uint)*(byte *)(uVar19 + 10) * 0x80000 + (uint)*(ushort *)(uVar19 + 8) * 8) +
               DAT_14c80ad08;
      if (*(longlong *)(lVar14 + 0x18) != 0) {
        if (uVar15 == uVar8) {
          bVar10 = false;
        }
        else {
          if (uVar15 <= uVar8) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)invalidInstructionException();
            (*pcVar11)();
          }
          uVar15 = uVar15 / uVar8;
          do {
            bVar10 = uVar15 != 0;
            if (uVar15 == 0) break;
            pcVar17 = (char *)(lVar14 + (lVar9 + 0x1fU >> 5) * 4 + 0x2b + uVar15);
            uVar15 = uVar15 - 1;
          } while (*pcVar17 != '\0');
        }
      }
      *(undefined1 *)(lVar14 + 1) = 0;
      if (cVar12 != '\0') {
        FUN_146791662(lVar21,uVar5);
      }
      if (bVar10) {
        FUN_146791740(lVar21,uVar5);
      }
    }
    else {
      if (uVar23 != 4) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      uVar19 = uVar19 & 0xfffffffffffffff8;
      uVar22 = (ulonglong)
               ((uint)*(byte *)(uVar19 + 10) * 0x80000 + (uint)*(ushort *)(uVar19 + 8) * 8);
      uVar20 = *(ulonglong *)(uVar22 + DAT_14c80ad08);
      if ((uVar20 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      if ((*(byte *)(uVar19 + 0x11) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      bVar1 = *(byte *)(uVar19 + 0xd);
      uVar3 = *(ushort *)(uVar19 + 0xb);
      uVar16 = *(undefined8 *)((uVar20 & 0xfffffffffffffffe) + 8);
      if ((*(PSRWLOCK *)(lVar14 + 8) != (PSRWLOCK)0x0) &&
         (BVar13 = TryAcquireSRWLockExclusive(*(PSRWLOCK *)(lVar14 + 8)), BVar13 != '\0')) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      uVar22 = uVar22 + lVar21;
      if (*(int *)(uVar22 + 0x24) == 1) {
        bVar10 = true;
        if (*(longlong *)(lVar14 + 0x18) != 0) {
          if (uVar15 == uVar8) goto LAB_14678c0d9;
          if (uVar15 <= uVar8) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)invalidInstructionException();
            (*pcVar11)();
          }
          uVar15 = uVar15 / uVar8;
          do {
            bVar10 = uVar15 != 0;
            if (uVar15 == 0) break;
            pcVar17 = (char *)(lVar14 + (lVar9 + 0x1fU >> 5) * 4 + 0x2b + uVar15);
            uVar15 = uVar15 - 1;
          } while (*pcVar17 != '\0');
        }
      }
      else {
LAB_14678c0d9:
        bVar10 = false;
      }
      bVar2 = *(byte *)(uVar19 + 0x11);
      *(byte *)(uVar19 + 0x11) = bVar2 & 0xfc;
      iVar6 = *(int *)(uVar22 + 0x24);
      if ((bVar2 & 2) == 0) {
        if (iVar6 == 0) {
LAB_14678c291:
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        *(int *)(uVar22 + 0x24) = iVar6 + -1;
      }
      else {
        if (iVar6 == 0) goto LAB_14678c291;
        *(int *)(uVar22 + 0x24) = iVar6 + -1;
        if ((*(byte *)(uVar19 + 0x11) & 4) == 0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        FUN_146791720((ulonglong)((uint)bVar1 * 0x80000 + (uint)uVar3 * 8) + lVar21,uVar19 | 4);
      }
      if (bVar10) {
        if (*(int *)(uVar22 + 0x24) != 0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        FUN_1467918b2(uVar16,uVar22 | 2);
      }
    }
    FUN_14678bc66(param_1);
    if (iVar4 != 1) {
      ReleaseSRWLockExclusive(SRWLock_00);
    }
  }
  param_1[1] = '\0';
  param_1[3] = (param_1[3] & 0x80U) + 1;
  uVar16 = 1;
LAB_14678be47:
  *param_1 = '\0';
  return uVar16;
}



// FUNCTION 14678c2a1 FUN_14678c2a1 body=21 status=ok
// SIG undefined FUN_14678c2a1(void)

undefined * FUN_14678c2a1(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 5) {
    return (&PTR_s_decommitted_149dfc8f8)[param_1];
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14678c2b6 FUN_14678c2b6 body=53 status=ok
// SIG undefined FUN_14678c2b6(void)

undefined8 FUN_14678c2b6(longlong param_1,int param_2)

{
  code *pcVar1;
  
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    if ((param_2 == 1) && (*(char *)(param_1 + 2) == '\x01')) {
      *(undefined1 *)(param_1 + 2) = 0;
      return 1;
    }
    FUN_14678bdd4(param_1,1);
  }
  return 0;
}



// FUNCTION 14678c2eb FUN_14678c2eb body=30 status=ok
// SIG undefined FUN_14678c2eb(void)

bool FUN_14678c2eb(longlong param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(param_1 + 3) & 0x7f) < 5) {
    return (0xbU >> (*(byte *)(param_1 + 3) & 0x1f) & 1) != 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14678c309 FUN_14678c309 body=495 status=ok
// SIG undefined FUN_14678c309(void)

void FUN_14678c309(char *param_1,int param_2,uint param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  bool bVar8;
  
  if ((param_3 != 2) && (param_3 != 4)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  bVar8 = param_2 == 0;
  if (param_1[3] < '\0') {
    if ((param_1[3] & 0x7fU) != 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (param_3 != 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((bool)*param_1 != bVar8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    param_1[3] = -0x7e;
  }
  else {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar1 = *(ulonglong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2a8
             );
    if (uVar1 < 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    bVar4 = param_1[3];
    if ((bVar4 & 0x7f | 2) == 3) {
      if (param_2 == 0) {
        AcquireSRWLockExclusive((PSRWLOCK)(*(longlong *)(uVar1 + 0x1f50) + 0x18));
      }
      bVar4 = param_1[3];
      if ((bVar4 & 0x7f) == 0) {
        bVar3 = false;
      }
      else {
        if ((bVar4 & 0x7f) == 3) {
          if (param_3 != 4) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          param_1[3] = bVar4 & 0x80 | 4;
          FUN_14678c8f3(param_1);
        }
        else {
          if ((bVar4 & 0x7f) != 1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (param_3 != 2) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          param_1[3] = bVar4 & 0x80 | 2;
        }
        bVar3 = true;
      }
      if (param_2 == 0) {
        ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)(uVar1 + 0x1f50) + 0x18));
      }
      if (bVar3) {
        if ((bool)*param_1 != bVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (((byte)param_1[3] & 0x7f) == param_3) {
          return;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      bVar4 = param_1[3];
    }
    if ((bVar4 & 0x7f) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (param_2 == 0) {
      AcquireSRWLockExclusive((PSRWLOCK)(*(longlong *)(uVar1 + 0x1f50) + 0x18));
    }
    if ((param_1[3] & 0x7fU) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar5 = FUN_14679e8fc(uVar1,param_1);
    uVar7 = FUN_14679fec8(uVar5);
    FUN_1467a0128(uVar7,uVar1);
    uVar6 = (byte)param_1[3] & 0x7f;
    if (uVar6 != param_3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (((char)uVar6 != '\x02') && (uVar6 != 4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    *param_1 = bVar8;
    if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014678c4cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)(uVar1 + 0x1f50) + 0x18));
      return;
    }
  }
  return;
}



// FUNCTION 14678c4f8 FUN_14678c4f8 body=43 status=ok
// SIG undefined FUN_14678c4f8(void)

undefined8 FUN_14678c4f8(longlong param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = *(byte *)(param_1 + 3) & 0x7f;
  if (uVar2 < 5) {
    switch(uVar2) {
    default:
      return CONCAT71((int7)((ulonglong)
                             ((longlong)&switchD_14678c512::switchdataD_149dfc920 +
                             (longlong)(int)(&switchD_14678c512::switchdataD_149dfc920)[uVar2]) >> 8
                            ),1);
    case 2:
      uVar3 = FUN_14678bdd4();
      return uVar3;
    case 4:
      uVar3 = FUN_14678c59e();
      return uVar3;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14678c523 FUN_14678c523 body=68 status=ok
// SIG undefined FUN_14678c523(void)

void FUN_14678c523(longlong param_1)

{
  code *pcVar1;
  byte bVar2;
  BOOLEAN BVar3;
  
  bVar2 = *(byte *)(param_1 + 3) & 0x7f;
  if ((bVar2 < 2) || (bVar2 == 3)) {
    BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    if (BVar3 == '\0') {
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0x80;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((bVar2 != 4) && (bVar2 != 2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14678c567 FUN_14678c567 body=20 status=ok
// SIG undefined FUN_14678c567(void)

void FUN_14678c567(undefined4 *param_1,undefined1 param_2)

{
  *param_1 = 0x4000000;
  *(undefined1 *)(param_1 + 1) = param_2;
  *(undefined2 *)((longlong)param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 7) = 1;
  return;
}



// FUNCTION 14678c59e FUN_14678c59e body=853 status=ok
// SIG undefined FUN_14678c59e(void)

undefined8 FUN_14678c59e(char *param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  PSRWLOCK pRVar3;
  byte *pbVar4;
  char cVar5;
  BOOLEAN BVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  PSRWLOCK SRWLock;
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  code *pcVar14;
  byte bVar15;
  bool bVar16;
  int local_6c;
  ulonglong local_60;
  ulonglong local_58;
  longlong local_48;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Does not return */
    pcVar14 = (code *)invalidInstructionException();
    (*pcVar14)();
  }
  cVar5 = FUN_14678c2eb();
  uVar7 = 1;
  if (cVar5 == '\0') {
    *param_1 = '\x01';
    cVar5 = FUN_14678c2eb(param_1);
    uVar7 = 1;
    if (cVar5 == '\0') {
      bVar15 = 0;
      local_58 = 0;
      local_60 = 0;
      pcVar14 = (code *)0x0;
      local_6c = 0;
      local_48 = 0;
      SRWLock = (PSRWLOCK)0x0;
      lVar12 = 0;
      while( true ) {
        bVar1 = param_1[5];
        if ((param_1[6] == bVar1) && (param_1[7] != '\x02')) break;
        bVar10 = bVar1 + 1;
        if ((byte)param_1[4] <= bVar10) {
          bVar10 = 0;
        }
        param_1[5] = bVar10;
        lVar8 = DAT_14c80ad08;
        uVar9 = (ulonglong)
                ((uint)(byte)param_1[(ulonglong)bVar1 * 3 + 10] * 0x80000 +
                (uint)*(ushort *)(param_1 + (ulonglong)bVar1 * 3 + 8) * 8);
        param_1[7] = '\x01';
        lVar11 = (ulonglong)
                 ((uint)*(byte *)(uVar9 + 10 + lVar8) * 0x80000 +
                 (uint)*(ushort *)(uVar9 + 8 + lVar8) * 8) + DAT_14c80ad08;
        if (lVar12 == 0) {
          pbVar4 = *(byte **)(&DAT_14c758500 + (longlong)*(char *)(lVar11 + 0xc) * 8);
          bVar15 = *pbVar4;
          local_58 = *(ulonglong *)(pbVar4 + 0x20);
          local_60 = *(ulonglong *)(pbVar4 + 0x28);
          pcVar14 = *(code **)(pbVar4 + 0x40);
          local_6c = *(int *)(pbVar4 + 0x6c);
          local_48 = *(longlong *)(pbVar4 + 0x80);
        }
        else {
          bVar16 = lVar12 != lVar11;
          lVar11 = lVar12;
          if (bVar16) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)invalidInstructionException();
            (*pcVar14)();
          }
        }
        puVar13 = (undefined8 *)(uVar9 + lVar8);
        lVar8 = (*pcVar14)(*puVar13);
        if ((bVar15 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)invalidInstructionException();
          (*pcVar14)();
        }
        if (local_6c != 1) {
          if (param_2 == 1) {
            if (SRWLock != *(PSRWLOCK *)(lVar8 + 8)) {
              SRWLock = (PSRWLOCK)FUN_146794d20(lVar8);
            }
          }
          else {
            if (param_2 != 0) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)invalidInstructionException();
              (*pcVar14)();
            }
            pRVar3 = *(PSRWLOCK *)(lVar8 + 8);
            if (SRWLock != pRVar3) {
              if (SRWLock != (PSRWLOCK)0x0) {
                ReleaseSRWLockExclusive(SRWLock);
              }
              BVar6 = TryAcquireSRWLockExclusive(pRVar3);
              SRWLock = pRVar3;
LAB_14678c719:
              if (BVar6 == '\0') {
                if (param_1[7] == '\x02') {
                    /* WARNING: Does not return */
                  pcVar14 = (code *)invalidInstructionException();
                  (*pcVar14)();
                }
                bVar15 = param_1[6];
                cVar5 = bVar15 + 1;
                if ((byte)param_1[4] <= (byte)(bVar15 + 1)) {
                  cVar5 = '\0';
                }
                if (cVar5 == param_1[5]) {
                  param_1[7] = '\x02';
                }
                if (puVar13 == (undefined8 *)0x0) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = (longlong)puVar13 - DAT_14c80ad08;
                  if (DAT_14c758498 <= uVar9) {
                    /* WARNING: Does not return */
                    pcVar14 = (code *)invalidInstructionException();
                    (*pcVar14)();
                  }
                  if ((uVar9 & 7) != 0) {
                    /* WARNING: Does not return */
                    pcVar14 = (code *)invalidInstructionException();
                    (*pcVar14)();
                  }
                  if (uVar9 < 8) {
                    /* WARNING: Does not return */
                    pcVar14 = (code *)invalidInstructionException();
                    (*pcVar14)();
                  }
                  uVar9 = uVar9 >> 3;
                }
                lVar12 = -3;
                do {
                  param_1[lVar12 + (ulonglong)bVar15 * 3 + 0xb] = (char)uVar9;
                  uVar9 = uVar9 >> 8;
                  lVar12 = lVar12 + 1;
                } while (lVar12 != 0);
                param_1[6] = cVar5;
                uVar7 = 0;
                goto LAB_14678c87e;
              }
              pRVar3 = *(PSRWLOCK *)(lVar8 + 8);
              if (SRWLock != pRVar3) goto code_r0x00014678c72f;
            }
          }
        }
        uVar2 = *(undefined4 *)((longlong)puVar13 + 0xc);
        lVar12 = lVar11;
        if (*(longlong *)(lVar8 + 0x18) == 0) {
LAB_14678c7c3:
          *(undefined1 *)(lVar8 + 1) = 0;
          FUN_146791662(lVar11,uVar2);
          FUN_146791740(lVar11,uVar2);
        }
        else {
          if (local_58 != local_60) {
            if (local_58 <= local_60) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)invalidInstructionException();
              (*pcVar14)();
            }
            uVar9 = local_58 / local_60;
            do {
              bVar16 = uVar9 == 0;
              uVar9 = uVar9 - 1;
              if (bVar16) goto LAB_14678c6c8;
            } while (*(char *)(lVar8 + (local_48 + 0x1fU >> 5) * 4 + 0x2c + uVar9) != '\0');
            goto LAB_14678c7c3;
          }
LAB_14678c6c8:
          *(undefined1 *)(lVar8 + 1) = 0;
          FUN_146791662(lVar11,uVar2);
        }
      }
      if (SRWLock != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(SRWLock);
      }
      if (param_1[7] != '\x01') {
                    /* WARNING: Does not return */
        pcVar14 = (code *)invalidInstructionException();
        (*pcVar14)();
      }
      if (param_1[6] != param_1[5]) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)invalidInstructionException();
        (*pcVar14)();
      }
      param_1[7] = '\0';
      param_1[1] = '\0';
      param_1[3] = param_1[3] & 0x80U | 3;
      uVar7 = 1;
    }
LAB_14678c87e:
    *param_1 = '\0';
  }
  return uVar7;
code_r0x00014678c72f:
  ReleaseSRWLockExclusive(SRWLock);
  BVar6 = TryAcquireSRWLockExclusive(pRVar3);
  SRWLock = pRVar3;
  goto LAB_14678c719;
}



// FUNCTION 14678c8f3 FUN_14678c8f3 body=5 status=ok
// SIG undefined FUN_14678c8f3(void)

void FUN_14678c8f3(longlong param_1)

{
  *(undefined1 *)(param_1 + 7) = 1;
  return;
}



// FUNCTION 14678c8f8 FUN_14678c8f8 body=567 status=ok
// SIG undefined FUN_14678c8f8(void)

ulonglong FUN_14678c8f8(undefined8 *param_1,code *param_2,undefined8 param_3,longlong param_4,
                       undefined8 param_5,int param_6)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined1 auVar3 [16];
  BOOLEAN BVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  size_t sVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 (*pauVar12) [16];
  longlong lVar13;
  ulonglong uVar14;
  size_t _Size;
  longlong *plVar15;
  uint uVar16;
  undefined1 local_b8 [32];
  undefined4 local_98;
  undefined8 local_88;
  code *local_80;
  ulonglong local_78;
  undefined8 *local_70;
  longlong *local_68 [2];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_b8;
  local_88 = param_3;
  local_80 = param_2;
  if (param_4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  plVar15 = (longlong *)*param_1;
  if (plVar15 == (longlong *)0x0) {
    uVar11 = 0x10;
  }
  else {
    if ((uint)((int)plVar15[2] * 2) < *(uint *)(plVar15 + 1)) goto LAB_14678ca5b;
    uVar11 = (ulonglong)(*(uint *)(plVar15 + 1) * 2);
  }
  iVar10 = (int)uVar11;
  if (POPCOUNT(iVar10) != 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar16 = iVar10 - 1;
  _Size = uVar11 * 0x10 + 0x20;
  local_58 = 0x10;
  local_50 = 0;
  local_98 = 0;
  sVar8 = _Size;
  FUN_1467800db(local_68,_Size,&local_58,"pas_lock_free_read_ptr_ptr_hashtable/table");
  memset(local_68[0],(int)CONCAT71((int7)(sVar8 >> 8),0xff),_Size);
  *local_68[0] = (longlong)plVar15;
  if (plVar15 == (longlong *)0x0) {
    *(int *)(local_68[0] + 1) = iVar10;
    *(uint *)((longlong)local_68[0] + 0xc) = uVar16;
    uVar6 = 0;
  }
  else {
    uVar5 = *(uint *)(plVar15 + 1);
    local_78 = uVar11;
    local_70 = param_1;
    if (uVar5 != 0) {
      uVar11 = 0;
      do {
        if (plVar15[uVar11 * 2 + 4] != -1) {
          uVar5 = (*local_80)(plVar15[uVar11 * 2 + 4],local_88);
          do {
            uVar7 = uVar5 & uVar16;
            uVar5 = uVar5 + 1;
          } while (local_68[0][(ulonglong)uVar7 * 2 + 4] != -1);
          lVar13 = (plVar15 + uVar11 * 2 + 4)[1];
          local_68[0][(ulonglong)uVar7 * 2 + 4] = plVar15[uVar11 * 2 + 4];
          (local_68[0] + (ulonglong)uVar7 * 2 + 4)[1] = lVar13;
          uVar5 = *(uint *)(plVar15 + 1);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar5);
    }
    *(int *)(local_68[0] + 1) = (int)local_78;
    *(uint *)((longlong)local_68[0] + 0xc) = uVar16;
    uVar6 = (undefined4)plVar15[2];
    param_1 = local_70;
  }
  *(undefined4 *)(local_68[0] + 2) = uVar6;
  LOCK();
  UNLOCK();
  *param_1 = local_68[0];
  plVar15 = local_68[0];
LAB_14678ca5b:
  uVar11 = (*local_80)(param_4,local_88);
  plVar9 = (longlong *)((ulonglong)(*(uint *)((longlong)plVar15 + 0xc) & (uint)uVar11) * 0x10);
  pauVar12 = (undefined1 (*) [16])((longlong *)((longlong)plVar9 + (longlong)plVar15) + 4);
  lVar13 = *(longlong *)*pauVar12;
  if (lVar13 == -1) {
LAB_14678cad4:
    do {
      uVar11 = *(ulonglong *)*pauVar12;
      plVar9 = *(longlong **)(*pauVar12 + 8);
      auVar3 = *pauVar12;
      LOCK();
      auVar1 = *pauVar12;
      if (auVar3 == auVar1) {
        *(longlong *)*pauVar12 = param_4;
        *(undefined8 *)(*pauVar12 + 8) = param_5;
      }
      else {
        plVar9 = auVar1._8_8_;
        uVar11 = auVar1._0_8_;
      }
      UNLOCK();
    } while (auVar3 != auVar1);
    *(int *)(plVar15 + 2) = (int)plVar15[2] + 1;
  }
  else {
    if (lVar13 != param_4) {
      plVar9 = plVar15 + 4;
      uVar11 = (ulonglong)((uint)uVar11 + 1);
      do {
        if (lVar13 == param_4) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar14 = (ulonglong)((uint)uVar11 & *(uint *)((longlong)plVar15 + 0xc));
        pauVar12 = (undefined1 (*) [16])(plVar9 + uVar14 * 2);
        lVar13 = plVar9[uVar14 * 2];
        if (lVar13 == -1) goto LAB_14678cad4;
        uVar11 = (ulonglong)((uint)uVar11 + 1);
      } while (lVar13 != param_4);
    }
    if (param_6 != 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    *(longlong *)*pauVar12 = param_4;
    *(undefined8 *)(*pauVar12 + 8) = param_5;
  }
  if ((local_48 ^ (ulonglong)local_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)local_b8,plVar9);
  }
  return uVar11;
}



// FUNCTION 14678cb30 FUN_14678cb30 body=238 status=ok
// SIG undefined FUN_14678cb30(void)

void FUN_14678cb30(int param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  uint uVar5;
  ulonglong *puVar6;
  int *piVar7;
  ulonglong uVar8;
  undefined1 *_Buf;
  bool bVar9;
  undefined1 auStack_468 [32];
  undefined8 local_448;
  undefined8 local_440;
  undefined1 local_438 [1024];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_468;
  DVar3 = DAT_14c80aec0;
  do {
    DAT_14c80aec0 = DVar3;
    if (DVar3 == 0) break;
    DVar4 = GetCurrentThreadId();
    bVar9 = DVar3 != DVar4;
    DVar3 = DAT_14c80aec0;
  } while (bVar9);
  puVar6 = (ulonglong *)FUN_144737586();
  local_448 = 0;
  _Buf = local_438;
  local_440 = param_3;
  uVar5 = __stdio_common_vsprintf(*puVar6 | 2,_Buf,0x400,param_2);
  if ((int)uVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (uVar5 != 0) {
    uVar2 = 0x3ff;
    if (uVar5 < 0x3ff) {
      uVar2 = uVar5;
    }
    uVar8 = (ulonglong)uVar2;
    do {
      while( true ) {
        uVar5 = _write(param_1,_Buf,(uint)uVar8);
        if (-1 < (int)uVar5) break;
        piVar7 = _errno();
        if (*piVar7 != 4) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      }
      if (uVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      _Buf = _Buf + uVar5;
      uVar8 = uVar8 - uVar5;
    } while (uVar8 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14678cc1f FUN_14678cc1f body=16 status=ok
// SIG undefined FUN_14678cc1f(void)

void FUN_14678cc1f(undefined8 param_1,undefined8 param_2)

{
  FUN_14678cb30(1,param_1,param_2);
  return;
}



// FUNCTION 14678cc2f FUN_14678cc2f body=86 status=ok
// SIG undefined FUN_14678cc2f(void)

void FUN_14678cc2f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_38 [40];
  undefined8 *local_10;
  ulonglong local_8;
  
  local_10 = &local_res10;
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_14678cb30(1,param_1,local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14678cc86 FUN_14678cc86 body=26 status=ok
// SIG undefined FUN_14678cc86(void)

void FUN_14678cc86(void)

{
  DAT_14c80aec0 = GetCurrentThreadId();
  LOCK();
  UNLOCK();
  return;
}



// FUNCTION 14678cca0 FUN_14678cca0 body=82 status=ok
// SIG undefined FUN_14678cca0(void)

undefined8 FUN_14678cca0(longlong param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  undefined8 uVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x21) = 0;
    if (*(char *)(param_1 + 0x20) == '\0') {
      uVar3 = FUN_14678ccf2(param_1,&LAB_14678ce0b,0);
      *(undefined1 *)(param_1 + 0x20) = 1;
      FUN_146790ea6();
    }
    else {
      uVar3 = 0;
    }
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14678ccf2 FUN_14678ccf2 body=281 status=ok
// SIG undefined FUN_14678ccf2(void)

longlong FUN_14678ccf2(longlong *param_1,code *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar6 = param_1[1];
  if (lVar6 == 0) {
    lVar9 = 0;
  }
  else {
    lVar8 = lVar6 * 0x20 + -0x18;
    lVar9 = 0;
    lVar4 = DAT_14c80aed0;
    do {
      uVar7 = *(ulonglong *)(*param_1 + -8 + lVar8);
      uVar1 = *(ulonglong *)(*param_1 + lVar8);
      if (lVar4 == 0) {
        lVar4 = FUN_14678d6e8();
        DAT_14c80aed0 = lVar4;
      }
      if ((int)POPCOUNT(lVar4) != 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar5 = lVar4;
      if (lVar4 == 0) {
        lVar5 = FUN_14678d6e8();
        DAT_14c80aed0 = lVar5;
      }
      if ((int)POPCOUNT(lVar5) != 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar10 = -lVar4 & ((uVar7 & 0xffffffffffff) + lVar4) - 1;
      uVar7 = -lVar5 & uVar1 & 0xffffffffffff;
      lVar4 = lVar5;
      if (uVar10 < uVar7) {
        (*param_2)(uVar10,uVar7,param_3);
        lVar9 = (lVar9 - uVar10) + uVar7;
        lVar4 = DAT_14c80aed0;
      }
      lVar6 = lVar6 + -1;
      lVar8 = lVar8 + -0x20;
    } while (lVar6 != 0);
  }
  return lVar9;
}



// FUNCTION 14678ce20 FUN_14678ce20 body=65 status=ok
// SIG undefined FUN_14678ce20(void)

undefined8 FUN_14678ce20(longlong param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  undefined8 uVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 == '\0') {
    if (*(char *)(param_1 + 0x20) == '\x01') {
      uVar3 = FUN_14678ccf2(param_1,&LAB_14678ce61,0);
      *(undefined1 *)(param_1 + 0x20) = 0;
    }
    else {
      uVar3 = 0;
    }
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14678ce76 FUN_14678ce76 body=75 status=ok
// SIG undefined FUN_14678ce76(void)

undefined8 FUN_14678ce76(longlong param_1)

{
  byte bVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  undefined7 extraout_var;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (*(char *)(param_1 + 0x20) == '\x01') {
    bVar1 = *(byte *)(param_1 + 0x21);
    if (3 < bVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (bVar1 != 3) {
      *(byte *)(param_1 + 0x21) = bVar1 + 1;
      return CONCAT71(extraout_var,1);
    }
    *(undefined1 *)(param_1 + 0x21) = 0;
    FUN_14678ce20(param_1);
  }
  return 0;
}



// FUNCTION 14678cec1 FUN_14678cec1 body=93 status=ok
// SIG undefined FUN_14678cec1(void)

undefined8
FUN_14678cec1(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_2 + 0x20) == '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_28 = *param_4;
  uStack_24 = param_4[1];
  uStack_20 = param_4[2];
  uStack_1c = param_4[3];
  local_38 = param_5;
  FUN_146799db0();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14678cf1f FUN_14678cf1f body=12 status=ok
// SIG undefined FUN_14678cf1f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14678cf1f(longlong *param_1,ulonglong param_2,ulonglong param_3,uint param_4,
                  ulonglong *param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  BOOLEAN BVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  char cVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined1 auStack_138 [32];
  longlong *plStack_118;
  uint uStack_10c;
  longlong lStack_108;
  ulonglong uStack_100;
  ulonglong *puStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  longlong lStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong uStack_98;
  ulonglong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  uint uStack_60;
  undefined4 uStack_5c;
  ulonglong auStack_58 [3];
  
  if ((char)param_1[4] == '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  puStack_f8 = param_5;
  auStack_58[2] = DAT_14c707940 ^ (ulonglong)auStack_138;
  uStack_10c = param_4;
  uStack_c8 = param_3;
  if (param_3 <= param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  BVar12 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar12 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (1 < uStack_10c) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uStack_d8 = param_2 & 0xffffffffffff;
  _DAT_14c80af90 = _DAT_14c80af90 + 1;
  uStack_e0 = uStack_c8 & 0xffffffffffff;
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uStack_d0 = param_1[2];
    lStack_c0 = uVar16 + DAT_14c80af98;
    uVar26 = 0;
    uStack_100 = 0;
    do {
      DAT_14c80af98 = DAT_14c80af98 + 1;
      plStack_118 = param_1;
      uStack_f0 = param_2;
      uStack_e8 = uVar16;
      if (uVar26 < uStack_d0) {
        puVar13 = (ulonglong *)(uVar26 * 0x20 + *param_1);
      }
      else {
        if (param_1 != &DAT_14c758470) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (3 < uVar26 - uStack_d0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        puVar13 = (ulonglong *)(&DAT_14c80afb0 + (uVar26 - uStack_d0) * 0x20);
      }
      if ((((*puVar13 ^ uStack_c8) & 0xffffffffffff) == 0) ||
         (((puVar13[1] ^ param_2) & 0xffffffffffff) == 0)) {
        uVar8 = uStack_e0;
        uVar9 = *puVar13;
        uVar10 = 0;
        uVar20 = puVar13[2];
        uVar14 = puVar13[1];
        uVar19 = uStack_d8;
        uVar11 = (uint)puVar13[3];
        uVar22 = uStack_10c;
        do {
          uVar24 = uVar22;
          uVar22 = uVar11;
          uVar27 = uVar19;
          uVar25 = uVar14;
          uVar21 = uVar20;
          uVar20 = uVar10;
          uVar19 = uVar9;
          uVar14 = uVar8;
          uVar8 = uVar25;
          uVar9 = uVar27;
          uVar10 = uVar21;
          uVar11 = uVar24;
        } while (((uVar14 ^ uVar19) & 0xffffffffffff) == 0);
        lStack_108 = DAT_14c80af98;
        if (((uVar27 ^ uVar25) & 0xffffffffffff) == 0) {
          uVar21 = uVar21 & 0xffffffffffff;
          if (*puStack_f8 <= uVar21) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if ((((uVar25 & 0xffffffffffff) + uVar21) - (uVar19 & 0xffffffffffff)) % *puStack_f8 ==
              (uVar20 & 0xffffffffffff)) {
            cVar23 = (char)uVar22;
            if (cVar23 != '\0') {
              if (cVar23 != '\x01') {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              if ((uVar24 & 0xfe) != 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
            }
            if ((uVar19 & 0xffffffffffff) != (uVar14 & 0xffffffffffff)) {
              if (1 < uStack_100) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              auStack_58[uStack_100] = uVar26;
              uStack_100 = uStack_100 + 1;
            }
          }
        }
      }
      uVar8 = uStack_100;
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar16);
    DAT_14c80af98 = lStack_c0;
    if (2 < uStack_100) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uStack_100 != 0) {
      if (auStack_58[0] < uStack_d0) {
        puVar15 = (undefined4 *)(auStack_58[0] * 0x20 + *param_1);
      }
      else {
        if (param_1 != &DAT_14c758470) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (3 < auStack_58[0] - uStack_d0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        puVar15 = (undefined4 *)(&DAT_14c80afb0 + (auStack_58[0] - uStack_d0) * 0x20);
      }
      uStack_88 = 0;
      uStack_80 = CONCAT44(uStack_80._4_4_,uStack_10c);
      uStack_b8 = *puVar15;
      uStack_b4 = puVar15[1];
      uStack_b0 = puVar15[2];
      uStack_ac = puVar15[3];
      uStack_a8 = puVar15[4];
      uStack_a4 = puVar15[5];
      uStack_a0 = puVar15[6];
      uStack_9c = puVar15[7];
      uStack_98 = uStack_d8;
      uStack_90 = uStack_e0;
      FUN_14679d619(&uStack_78,&uStack_98,&uStack_b8,puStack_f8);
      if (uVar8 != 2) {
        uVar16 = auStack_58[0] - param_1[2];
        if (auStack_58[0] < (ulonglong)param_1[2]) {
          puVar15 = (undefined4 *)(auStack_58[0] * 0x20 + *param_1);
        }
        else {
          if (param_1 != &DAT_14c758470) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (3 < uVar16) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          puVar15 = (undefined4 *)(&DAT_14c80afb0 + uVar16 * 0x20);
          param_1 = plStack_118;
        }
        *(undefined8 *)(puVar15 + 4) = uStack_68;
        *(ulonglong *)(puVar15 + 6) = CONCAT44(uStack_5c,uStack_60);
        *puVar15 = (undefined4)uStack_78;
        puVar15[1] = uStack_78._4_4_;
        puVar15[2] = (undefined4)uStack_70;
        puVar15[3] = uStack_70._4_4_;
        goto LAB_14679cf22;
      }
      uVar16 = auStack_58[1] - param_1[2];
      if (auStack_58[1] < (ulonglong)param_1[2]) {
        puVar15 = (undefined4 *)(auStack_58[1] * 0x20 + *param_1);
      }
      else {
        if (param_1 != &DAT_14c758470) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (3 < uVar16) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        puVar15 = (undefined4 *)(&DAT_14c80afb0 + uVar16 * 0x20);
        param_1 = plStack_118;
      }
      uStack_80 = CONCAT44(uStack_5c,uStack_60);
      uStack_88 = uStack_68;
      uStack_98 = uStack_78;
      uStack_90 = uStack_70;
      uStack_b8 = *puVar15;
      uStack_b4 = puVar15[1];
      uStack_b0 = puVar15[2];
      uStack_ac = puVar15[3];
      uStack_a8 = puVar15[4];
      uStack_a4 = puVar15[5];
      uStack_a0 = puVar15[6];
      uStack_9c = puVar15[7];
      FUN_14679d619(&uStack_78,&uStack_98,&uStack_b8,puStack_f8);
      uVar16 = auStack_58[0] - param_1[2];
      if (auStack_58[0] < (ulonglong)param_1[2]) {
        lVar18 = *param_1;
        puVar1 = (undefined8 *)(lVar18 + 0x10 + auStack_58[0] * 0x20);
        *puVar1 = uStack_68;
        puVar1[1] = CONCAT44(uStack_5c,uStack_60);
        puVar13 = (ulonglong *)(lVar18 + auStack_58[0] * 0x20);
        *puVar13 = uStack_78;
        puVar13[1] = uStack_70;
        uVar16 = param_1[2];
        if (auStack_58[1] < uVar16) {
          lVar18 = *param_1;
          puVar15 = (undefined4 *)(auStack_58[1] * 0x20 + lVar18);
          uVar26 = param_1[1] - 1;
          param_1[1] = uVar26;
          if (uVar16 <= uVar26) {
            if (param_1 != &DAT_14c758470) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            goto LAB_14679d434;
          }
        }
        else {
          if (param_1 != &DAT_14c758470) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
LAB_14679d3eb:
          if (3 < auStack_58[1] - uVar16) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          puVar15 = (undefined4 *)(&DAT_14c80afb0 + (auStack_58[1] - uVar16) * 0x20);
          uVar26 = plStack_118[1] - 1;
          plStack_118[1] = uVar26;
          if (uVar16 <= uVar26) goto LAB_14679d434;
          lVar18 = *plStack_118;
          param_1 = plStack_118;
        }
LAB_14679d260:
        puVar17 = (undefined4 *)(uVar26 * 0x20 + lVar18);
      }
      else {
        if (param_1 != &DAT_14c758470) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (3 < uVar16) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar18 = uVar16 * 0x20;
        *(undefined8 *)(&DAT_14c80afc0 + lVar18) = uStack_68;
        *(ulonglong *)(&DAT_14c80afc8 + lVar18) = CONCAT44(uStack_5c,uStack_60);
        *(ulonglong *)(&DAT_14c80afb0 + lVar18) = uStack_78;
        *(ulonglong *)(&DAT_14c80afb8 + lVar18) = uStack_70;
        lVar18 = DAT_14c758470;
        uVar16 = plStack_118[2];
        if (uVar16 <= auStack_58[1]) goto LAB_14679d3eb;
        puVar15 = (undefined4 *)(auStack_58[1] * 0x20 + DAT_14c758470);
        uVar26 = plStack_118[1] - 1;
        plStack_118[1] = uVar26;
        param_1 = plStack_118;
        if (uVar26 < uVar16) goto LAB_14679d260;
LAB_14679d434:
        if (3 < uVar26 - uVar16) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        puVar17 = (undefined4 *)(&DAT_14c80afb0 + (uVar26 - uVar16) * 0x20);
        param_1 = plStack_118;
      }
      uVar3 = *puVar17;
      uVar4 = puVar17[1];
      uVar5 = puVar17[2];
      uVar6 = puVar17[3];
      uVar7 = *(undefined8 *)(puVar17 + 6);
      *(undefined8 *)(puVar15 + 4) = *(undefined8 *)(puVar17 + 4);
      *(undefined8 *)(puVar15 + 6) = uVar7;
      *puVar15 = uVar3;
      puVar15[1] = uVar4;
      puVar15[2] = uVar5;
      puVar15[3] = uVar6;
      goto LAB_14679cf22;
    }
  }
  uStack_68 = 0;
  uStack_60 = uStack_10c;
  uStack_78 = uStack_d8;
  uStack_70 = uStack_e0;
  FUN_14679d49d(param_1);
LAB_14679cf22:
  if ((auStack_58[2] ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_14679c7f3(param_1,puStack_f8);
  return;
}



// FUNCTION 14678cf2b FUN_14678cf2b body=130 status=ok
// SIG undefined FUN_14678cf2b(void)

void FUN_14678cf2b(undefined8 param_1,longlong param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0x1000000;
  local_38 = *(longlong *)(param_2 + 0x20);
  if ((int)POPCOUNT(local_38) != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (local_38 != 0) {
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    local_30 = local_38;
    local_10 = param_3;
    FUN_14678cfae(0,&local_40,param_4,param_5);
    if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14678cfae FUN_14678cfae body=201 status=ok
// SIG undefined FUN_14678cfae(void)

longlong FUN_14678cfae(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  byte local_70;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  code *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_50 = &local_38;
  local_98 = &local_68;
  local_68 = 1;
  local_60 = 1;
  local_58 = FUN_14678d078;
  local_48 = 0;
  uStack_40 = 0;
  local_88 = *(undefined4 *)(param_2 + 0x10);
  uStack_84 = *(undefined4 *)(param_2 + 0x14);
  uStack_80 = *(undefined4 *)(param_2 + 0x18);
  uStack_7c = *(undefined4 *)(param_2 + 0x1c);
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_3;
  local_20 = param_4;
  FUN_146790e4d(&local_78,param_1,*(undefined8 *)(param_2 + 8));
  if ((local_70 & 1) == 0) {
    local_78 = 0;
  }
  else {
    if (local_78 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((*(char *)(param_2 + 0x30) == '\x01') && (local_6c != 1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return local_78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14678d078 FUN_14678d078 body=795 status=ok
// SIG undefined FUN_14678d078(void)

undefined8 *
FUN_14678d078(undefined8 *param_1,ulonglong param_2,ulonglong *param_3,longlong *param_4)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  ulonglong _Size;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  void *pvVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined8 local_90;
  ulonglong local_88;
  longlong local_80;
  void *local_78;
  void *local_70;
  ulonglong local_68;
  longlong local_60;
  void *local_58;
  byte local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar2 = (ulonglong *)param_4[1];
  if ((int)POPCOUNT(puVar2[1]) != 1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar9 = puVar2[2];
  if ((int)POPCOUNT(uVar9) != 1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar5 = puVar2[3];
  if (uVar9 <= uVar5) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (puVar2[1] != param_2) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if ((*param_3 != uVar9) || (param_3[1] != uVar5)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar3 = *param_4;
  uVar6 = uVar9;
  if (uVar5 == 0) {
    _Size = *puVar2;
    if (*puVar2 <= param_2) {
      _Size = param_2;
    }
    if (uVar9 < _Size) {
      uVar6 = _Size;
    }
  }
  else {
    _Size = *puVar2;
    if (*puVar2 <= param_2) {
      _Size = param_2;
    }
    if (uVar9 < _Size) {
      uVar6 = _Size;
    }
    uVar9 = uVar9 - uVar5;
    if (uVar9 != 0) {
      if ((int)POPCOUNT(uVar6) != 1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar8 = uVar6 - uVar9;
      if (uVar6 < uVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      goto LAB_14678d156;
    }
  }
  if ((int)POPCOUNT(uVar6) != 1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar9 = 0;
  lVar8 = 0;
LAB_14678d156:
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  local_90 = *(undefined8 *)(lVar3 + 0x58);
  local_a8 = (undefined4)param_4[2];
  uStack_a4 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_a0 = (undefined4)param_4[3];
  uStack_9c = *(undefined4 *)((longlong)param_4 + 0x1c);
  local_98 = 2;
  local_68 = uVar6;
  local_60 = lVar8;
  (**(code **)(lVar3 + 0x50))(&local_58,_Size,&local_68,"pas_megapage_cache/chunk");
  if ((local_50 & 1) != 0) {
    pvVar10 = (void *)((longlong)local_58 + _Size);
    local_88 = param_2;
    if (CARRY8((ulonglong)local_58,_Size)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    local_78 = local_58;
    local_80 = lVar8;
    local_70 = pvVar10;
    FUN_14678f241();
    if (local_58 == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    iVar7 = local_4c;
    if ((local_4c == 0 & (byte)puVar2[6]) == 1) {
      memset(local_58,0,_Size);
      iVar7 = 1;
    }
    if ((int)POPCOUNT(puVar2[2]) != 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar5 = puVar2[2] - 1;
    if (((longlong)local_58 - puVar2[3] & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (((longlong)pvVar10 - puVar2[3] & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if ((int)POPCOUNT(uVar6) != 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar6 = uVar6 - 1;
    if (((longlong)local_58 - local_80 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (((longlong)pvVar10 - local_80 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (pvVar10 <= local_58) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar5 = *puVar2;
    if ((int)POPCOUNT(uVar5) != 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar1 = (longlong)local_58 + uVar9;
    if ((uVar5 - 1 & uVar1) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar9 = (longlong)pvVar10 + uVar9;
    if ((uVar5 - 1 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if ((uVar1 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (uVar9 <= uVar1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (puVar2[4] == 0) {
      if (puVar2[5] != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
    }
    else {
      uVar9 = uVar9 / uVar5;
      while (uVar1 / uVar5 < uVar9) {
        uVar9 = uVar9 - 1;
        (*(code *)puVar2[4])(uVar9,puVar2[5]);
      }
    }
    *param_1 = local_58;
    param_1[1] = local_88;
    param_1[2] = local_58;
    param_1[3] = 0;
    param_1[4] = (longlong)local_58 + local_88;
    param_1[5] = _Size - local_88;
    *(int *)(param_1 + 6) = iVar7;
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14678d394 FUN_14678d394 body=66 status=ok
// SIG undefined FUN_14678d394(void)

longlong FUN_14678d394(void)

{
  undefined1 auStack_38 [32];
  ULONGLONG local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  QueryUnbiasedInterruptTime(&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return local_18 * 100;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14678d3d7 FUN_14678d3d7 body=180 status=ok
// SIG undefined FUN_14678d3d7(void)

longlong FUN_14678d3d7(longlong param_1,int param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x18) == 1) {
    if (2 < param_2 - 5U) {
      if (param_2 - 1U < 4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar2 = *(ulonglong *)(param_1 + 0x20) / *(ulonglong *)(param_1 + 0x28);
    lVar3 = uVar2 + 7;
    if (uVar2 == 1) {
      lVar3 = 1;
    }
    uVar2 = lVar3 + ((*(ulonglong *)(param_1 + 0x20) >> (*(byte *)(param_1 + 0x1c) & 0x3f)) + 0x3f
                     >> 2 & 0xfffffffffffffff0);
    lVar3 = 0x10;
  }
  else {
    if (*(int *)(param_1 + 0x18) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (3 < param_2 - 1U) {
      if (param_2 - 5U < 3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar2 = *(ulonglong *)(param_1 + 0x20) / *(ulonglong *)(param_1 + 0x28);
    lVar3 = 4;
    if (uVar2 != 1) {
      lVar3 = uVar2 + 7;
    }
    uVar2 = lVar3 + (*(longlong *)(param_1 + 0x80) + 0x1fU >> 5) * 4;
    lVar3 = 0x2c;
  }
  return (uVar2 & 0xfffffffffffffff8) + lVar3;
}



// FUNCTION 14678d48b FUN_14678d48b body=194 status=ok
// SIG undefined FUN_14678d48b(void)

void FUN_14678d48b(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146780693(local_48,*(undefined4 *)(*(longlong *)(param_2 + 8) + 0x438));
  if (*(ulonglong *)(param_2 + 0x20) < *(ulonglong *)(param_2 + 0x28)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    do {
      if ((*(longlong *)(param_2 + 0x30) == 0) ||
         ((*(uint *)(*(longlong *)(param_2 + 0x30) + (uVar1 >> 5) * 4) >> ((uint)uVar1 & 0x1f) & 1)
          == 0)) {
        FUN_1467806aa(local_48);
      }
      else {
        FUN_1467806c0(local_48,param_1,uVar1,param_2);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ulonglong *)(param_2 + 0x20) / *(ulonglong *)(param_2 + 0x28));
  }
  FUN_1467806c0(local_48,param_1,uVar1,param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14678d54e FUN_14678d54e body=276 status=ok
// SIG undefined FUN_14678d54e(void)

ulonglong * FUN_14678d54e(ulonglong *param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong *puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if ((int)POPCOUNT(param_2) != 1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if ((param_2 - 1 & param_4) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (*param_1 != param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar1 = param_1[1];
  if (uVar1 != 0) {
    uVar5 = (uint)(param_4 / param_2);
    uVar5 = uVar5 >> 4 ^ uVar5;
    uVar5 = uVar5 * 0x20 + (uVar5 ^ 0xdeadbeef);
    uVar5 = uVar5 >> 0xb ^ uVar5;
    uVar6 = (ulonglong)(uVar5 & *(uint *)(uVar1 + 0xc));
    uVar2 = *(ulonglong *)(uVar1 + 0x20 + uVar6 * 0x10);
    while (uVar2 != param_4) {
      uVar5 = uVar5 + 1;
      if (uVar2 == 0xffffffffffffffff) goto LAB_14678d5dd;
      uVar6 = (ulonglong)(uVar5 & *(uint *)(uVar1 + 0xc));
      uVar2 = *(ulonglong *)(uVar1 + 0x20 + uVar6 * 0x10);
    }
    if (*(longlong *)(uVar1 + 0x28 + uVar6 * 0x10) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
LAB_14678d5dd:
  puVar4 = (ulonglong *)FUN_1467a0897(param_3 + 0x10,0x10,"pas_page_header_table/header");
  *puVar4 = param_4;
  FUN_14678c8f8(param_1 + 1,&LAB_14678d662,param_2,param_4,puVar4 + 2,1);
  return puVar4 + 2;
}



// FUNCTION 14678d689 FUN_14678d689 body=95 status=ok
// SIG undefined FUN_14678d689(void)

void FUN_14678d689(longlong *param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  
  if (*param_1 != param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((int)POPCOUNT(param_2) == 1) {
    if ((param_2 - 1U & *(ulonglong *)(param_3 + -0x10)) == 0) {
      FUN_14678c8f8(param_1 + 1,&LAB_14678d662,param_2,*(ulonglong *)(param_3 + -0x10),0,1);
      FUN_1467a08c6(param_3 + -0x10);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14678d6e8 FUN_14678d6e8 body=105 status=ok
// SIG undefined FUN_14678d6e8(void)

undefined8 FUN_14678d6e8(void)

{
  code *pcVar1;
  undefined1 auStack_68 [40];
  _SYSTEM_INFO local_40;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  GetSystemInfo(&local_40);
  if (local_40.dwPageSize == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (local_40.dwPageSize < 0x1000) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (POPCOUNT(local_40.dwPageSize) != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (local_40.dwPageSize == 0x1000) {
    if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return 0x1000;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14678d752 FUN_14678d752 body=72 status=ok
// SIG undefined FUN_14678d752(void)

ulonglong FUN_14678d752(void)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  
  if (DAT_14c80aed0 == 0) {
    FUN_14678d6e8();
    DAT_14c80aed0 = 0x1000;
    uVar3 = 0xc;
  }
  else {
    uVar1 = 0x3f;
    if (DAT_14c80aed0 != 0) {
      for (; DAT_14c80aed0 >> uVar1 == 0; uVar1 = uVar1 - 1) {
      }
    }
    if (1L << ((byte)uVar1 & 0x3f) != DAT_14c80aed0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar3 = uVar1 & 0xffffffff;
    if (0xc < (uint)uVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  return uVar3;
}



// FUNCTION 14678d79a FUN_14678d79a body=543 status=ok
// SIG undefined FUN_14678d79a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14678d79a(undefined8 *param_1,longlong param_2,ulonglong *param_3,uint param_4)

{
  LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  LPVOID pvVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  SIZE_T dwSize;
  bool bVar8;
  
  if ((int)POPCOUNT(*param_3) != 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (*param_3 <= param_3[1]) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (1 < param_4) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  if (DAT_14c80aed0 == 0) {
    FUN_14678d6e8();
    DAT_14c80aed0 = 0x1000;
  }
  if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar6 = -DAT_14c80aed0 & (*param_3 + DAT_14c80aed0) - 1;
  if ((int)POPCOUNT(uVar6) != 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar7 = -uVar6;
  dwSize = (param_2 + uVar6) - 1 & uVar7;
  if (((uVar6 <= DAT_14c80aed0) && (param_3[1] == 0)) ||
     (bVar8 = CARRY8(dwSize,uVar6), dwSize = dwSize + uVar6, !bVar8)) {
    pvVar3 = VirtualAlloc((LPVOID)0x0,dwSize,(param_4 == 1 | 2) << 0xc,4);
    if (pvVar3 != (LPVOID)0x0) {
      pvVar1 = (LPVOID)((longlong)pvVar3 + dwSize);
      pvVar4 = (LPVOID)(((longlong)pvVar3 + (uVar6 - 1) & uVar7) + param_3[1]);
      pvVar5 = (LPVOID)(param_2 + (longlong)pvVar4);
      if (pvVar1 < pvVar5) {
        if (param_3[1] == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        pvVar4 = (LPVOID)((longlong)pvVar4 + uVar7);
        if (pvVar4 < pvVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (pvVar1 < pvVar4) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        pvVar5 = (LPVOID)((longlong)pvVar5 + uVar7);
        if (pvVar5 < pvVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (pvVar1 < pvVar5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
      }
      if (DAT_14c80aed0 == 0) {
        FUN_14678d6e8();
        DAT_14c80aed0 = 0x1000;
      }
      if (((uVar6 <= DAT_14c80aed0) && (pvVar3 != pvVar4)) && (param_3[1] == 0)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((int)POPCOUNT(*param_3) != 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (((longlong)pvVar4 - param_3[1] & *param_3 - 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      _DAT_14c80aec8 = _DAT_14c80aec8 + dwSize;
      *param_1 = pvVar4;
      param_1[1] = param_2;
      param_1[2] = pvVar3;
      param_1[3] = (longlong)pvVar4 - (longlong)pvVar3;
      param_1[4] = pvVar5;
      param_1[5] = (longlong)pvVar1 - (longlong)pvVar5;
      *(undefined4 *)(param_1 + 6) = 1;
    }
  }
  return param_1;
}



// FUNCTION 14678d9b9 FUN_14678d9b9 body=11 status=ok
// SIG undefined FUN_14678d9b9(void)

void FUN_14678d9b9(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_14678d9c4(param_1,param_2,1,param_3);
  return;
}



// FUNCTION 14678d9c4 FUN_14678d9c4 body=383 status=ok
// SIG undefined FUN_14678d9c4(void)

void FUN_14678d9c4(LPVOID param_1,SIZE_T param_2,char param_3,int param_4)

{
  code *pcVar1;
  LPVOID pvVar2;
  SIZE_T SVar3;
  ulonglong dwSize;
  undefined1 auStack_98 [40];
  _MEMORY_BASIC_INFORMATION local_70;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c80aed0 == 0) {
    FUN_14678d6e8();
    DAT_14c80aed0 = 0x1000;
  }
  if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((DAT_14c80aed0 - 1U & (ulonglong)param_1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  pvVar2 = (LPVOID)((longlong)param_1 + param_2);
  if (pvVar2 != (LPVOID)(-DAT_14c80aed0 & (longlong)pvVar2 + DAT_14c80aed0 + -1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (pvVar2 < param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((param_3 == '\x01' && param_4 != 0) && param_2 != 0) {
    pvVar2 = VirtualAlloc(param_1,param_2,0x1000,4);
    if (pvVar2 != param_1 && pvVar2 != (LPVOID)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (pvVar2 == (LPVOID)0x0) {
      do {
        SVar3 = VirtualQuery(param_1,&local_70,0x30);
        if (SVar3 != 0x30) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (local_70.BaseAddress != param_1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        dwSize = local_70.RegionSize;
        if (param_2 < local_70.RegionSize) {
          dwSize = param_2;
        }
        pvVar2 = VirtualAlloc(param_1,dwSize,0x1000,4);
        if (pvVar2 != param_1 && pvVar2 != (LPVOID)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (pvVar2 == (LPVOID)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        param_1 = (LPVOID)((longlong)param_1 + dwSize);
        param_2 = param_2 - dwSize;
      } while (param_2 != 0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14678db44 FUN_14678db44 body=11 status=ok
// SIG undefined FUN_14678db44(void)

void FUN_14678db44(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_14678d9c4(param_1,param_2,0,param_3);
  return;
}



// FUNCTION 14678db4f FUN_14678db4f body=11 status=ok
// SIG undefined FUN_14678db4f(void)

void FUN_14678db4f(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_14678db5a(param_1,param_2,1,param_3);
  return;
}



// FUNCTION 14678db5a FUN_14678db5a body=526 status=ok
// SIG undefined FUN_14678db5a(void)

void FUN_14678db5a(LPVOID param_1,ulonglong param_2,char param_3,int param_4)

{
  code *pcVar1;
  BOOL BVar2;
  SIZE_T SVar3;
  LPVOID pvVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [40];
  _MEMORY_BASIC_INFORMATION local_70;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (CARRY8((ulonglong)param_1,param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (DAT_14c80aed0 == 0) {
    FUN_14678d6e8();
    DAT_14c80aed0 = 0x1000;
  }
  if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((LPVOID)(-DAT_14c80aed0 & (longlong)param_1 + DAT_14c80aed0 + -1) != param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((DAT_14c80aed0 - 1U & (longlong)param_1 + param_2) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_3 == '\x01' && param_4 != 0) {
    BVar2 = VirtualFree(param_1,param_2,0x4000);
    if ((param_2 != 0) && (BVar2 == 0)) {
      do {
        SVar3 = VirtualQuery(param_1,&local_70,0x30);
        if (SVar3 != 0x30) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (local_70.BaseAddress != param_1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar5 = local_70.RegionSize;
        if (param_2 < local_70.RegionSize) {
          uVar5 = param_2;
        }
        BVar2 = VirtualFree(param_1,uVar5,0x4000);
        if (BVar2 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        param_1 = (LPVOID)((longlong)param_1 + uVar5);
        param_2 = param_2 - uVar5;
      } while (param_2 != 0);
    }
  }
  else {
    pvVar4 = VirtualAlloc(param_1,param_2,0x80000,4);
    if (pvVar4 != param_1 && pvVar4 != (LPVOID)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (param_2 != 0 && pvVar4 == (LPVOID)0x0) {
      do {
        SVar3 = VirtualQuery(param_1,&local_70,0x30);
        if (SVar3 != 0x30) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (local_70.BaseAddress != param_1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar5 = local_70.RegionSize;
        if (param_2 < local_70.RegionSize) {
          uVar5 = param_2;
        }
        pvVar4 = VirtualAlloc(param_1,uVar5,0x80000,4);
        if (pvVar4 != param_1 && pvVar4 != (LPVOID)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (pvVar4 == (LPVOID)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        param_1 = (LPVOID)((longlong)param_1 + uVar5);
        param_2 = param_2 - uVar5;
      } while (param_2 != 0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14678dd69 FUN_14678dd69 body=11 status=ok
// SIG undefined FUN_14678dd69(void)

void FUN_14678dd69(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_14678db5a(param_1,param_2,0,param_3);
  return;
}



// FUNCTION 14678dd74 FUN_14678dd74 body=32 status=ok
// SIG undefined FUN_14678dd74(void)

void FUN_14678dd74(ulonglong param_1,uint param_2)

{
  code *pcVar1;
  
  if ((((longlong)(int)param_2 | param_1) & 0xfffffffffffffff8) != param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (((uint)((longlong)(int)param_2 | param_1) & 7) == param_2) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14678dd94 FUN_14678dd94 body=100 status=ok
// SIG undefined FUN_14678dd94(void)

undefined * FUN_14678dd94(ulonglong param_1)

{
  code *pcVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  
  uVar2 = (uint)param_1 & 7;
  if (uVar2 < 6) {
    param_1 = param_1 & 0xfffffffffffffff8;
    switch(uVar2) {
    case 0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    default:
      lVar3 = DAT_14c80ad08 + (ulonglong)*(uint *)(param_1 + 4) * 8;
      if ((ulonglong)*(uint *)(param_1 + 4) == 0) {
        lVar3 = 0;
      }
      lVar4 = 0;
      if (7 < (ulonglong)*(uint *)(lVar3 + 0x38)) {
        lVar4 = DAT_14c80ad08;
      }
      puVar5 = (undefined *)(lVar4 + (ulonglong)*(uint *)(lVar3 + 0x38) & 0xfffffffffffffffe);
      break;
    case 3:
      puVar5 = (undefined *)(param_1 + 0x60);
      break;
    case 4:
      puVar5 = &DAT_14c80ae80;
      break;
    case 5:
      puVar5 = (undefined *)(param_1 + 0x28);
    }
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14678ddf8 FUN_14678ddf8 body=15 status=ok
// SIG undefined FUN_14678ddf8(void)

void FUN_14678ddf8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 14678de07 FUN_14678de07 body=11 status=ok
// SIG undefined FUN_14678de07(void)

void FUN_14678de07(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 14678de12 FUN_14678de12 body=57 status=ok
// SIG undefined FUN_14678de12(void)

undefined8 FUN_14678de12(ulonglong param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = (uint)param_1 & 7;
  if (uVar2 < 6) {
    switch(uVar2) {
    case 0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    default:
      uVar3 = FUN_146791334();
      return uVar3;
    case 3:
      uVar3 = FUN_14677ef75();
      return uVar3;
    case 4:
      return DAT_14c80ae98;
    case 5:
      return *(undefined8 *)((param_1 & 0xfffffffffffffff8) + 0x40);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14678de4b FUN_14678de4b body=34 status=ok
// SIG undefined FUN_14678de4b(void)

void FUN_14678de4b(uint param_1,undefined8 *param_2)

{
  code *pcVar1;
  
  if (4 < (param_1 & 7) - 1) {
    if ((param_1 & 7) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_2 == &DAT_14c80aee0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14678de6d FUN_14678de6d body=122 status=ok
// SIG undefined FUN_14678de6d(void)

undefined8 FUN_14678de6d(ulonglong param_1)

{
  code *pcVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  
  uVar2 = (uint)param_1 & 7;
  if (uVar2 < 6) {
    param_1 = param_1 & 0xfffffffffffffff8;
    lVar3 = (longlong)&switchD_14678de89::switchdataD_149dfc9c8 +
            (longlong)(int)(&switchD_14678de89::switchdataD_149dfc9c8)[uVar2];
    switch(uVar2) {
    case 0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    default:
      lVar3 = (ulonglong)*(uint *)(param_1 + 4) * 8 + DAT_14c80ad08;
      if (lVar3 == 0 || (ulonglong)*(uint *)(param_1 + 4) == 0) {
        uVar5 = (ulonglong)(*(uint *)(param_1 + 8) >> 1 & 1);
      }
      else {
        lVar6 = *(longlong *)(lVar3 + 0x18);
        do {
          uVar5 = *(ulonglong *)(lVar3 + 0x10);
          bVar7 = *(longlong *)(lVar3 + 0x18) != lVar6;
          lVar6 = *(longlong *)(lVar3 + 0x18);
        } while (bVar7);
      }
      bVar7 = uVar5 == 0;
      break;
    case 3:
      bVar7 = *(longlong *)(param_1 + 0x20) == 0;
      break;
    case 4:
      bVar7 = DAT_14c80ae30 == 0;
      break;
    case 5:
      uVar4 = FUN_146799cc8();
      return uVar4;
    }
    return CONCAT71((int7)((ulonglong)lVar3 >> 8),!bVar7);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14678dee7 FUN_14678dee7 body=239 status=ok
// SIG undefined FUN_14678dee7(void)

ulonglong FUN_14678dee7(ulonglong param_1,longlong param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = (uint)param_1 & 7;
  if (5 < uVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  param_1 = param_1 & 0xfffffffffffffff8;
  switch(uVar2) {
  case 0:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  case 1:
    if (param_2 != 0) {
      uVar3 = FUN_1467962ed(param_1,param_2,param_3);
      return uVar3;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  case 2:
    uVar3 = FUN_146798917(param_1,param_2,param_3);
    return uVar3;
  case 3:
    if (param_2 != 0) {
      uVar3 = FUN_14677f175(param_1,param_2,param_3);
      return uVar3;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  case 4:
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (param_3 == 0) {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    }
    uVar2 = FUN_14678a7ce(param_2);
    break;
  case 5:
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (param_3 == 0) {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    }
    uVar2 = FUN_146799ccc(param_1,param_2);
  }
  if (param_3 == 0) {
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  }
  return (ulonglong)uVar2;
}



// FUNCTION 14678dfd6 FUN_14678dfd6 body=1216 status=ok
// SIG undefined FUN_14678dfd6(void)

ulonglong FUN_14678dfd6(undefined1 (*param_1) [16],undefined8 param_2,ulonglong param_3)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  BOOLEAN BVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  void *pvVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  lVar6 = *(longlong *)(*param_1 + 8);
  do {
    lVar5 = lVar6;
    uVar11 = *(ulonglong *)*param_1;
    lVar6 = *(longlong *)(*param_1 + 8);
  } while (*(longlong *)(*param_1 + 8) != lVar5);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar6 = FUN_14678dd94(param_2);
  uVar12 = (uint)param_3;
  *(uint *)(lVar6 + 8) = uVar12;
  FUN_14678de4b(param_2,param_1);
  uVar15 = *(uint *)(param_1[1] + 4);
  do {
    if ((uint)(param_3 >> 5) < uVar15) {
      LOCK();
      UNLOCK();
      uVar15 = *(uint *)param_1[2];
      uVar9 = (ulonglong)uVar15;
      do {
        uVar17 = (uint)uVar9;
        if (uVar12 < uVar17) {
          lVar6 = DAT_14c80ad08 + (ulonglong)*(uint *)(param_1[1] + 0xc) * 8;
          if ((ulonglong)*(uint *)(param_1[1] + 0xc) == 0) {
            lVar6 = 0;
          }
          uVar9 = (ulonglong)*(uint *)(lVar6 + (param_3 & 0xfffffffffffffffc));
          lVar6 = DAT_14c80ad08 + uVar9 * 8;
          if (uVar9 == 0) {
            lVar6 = 0;
          }
          if (*(longlong *)(lVar6 + (ulonglong)(uVar12 & 3) * 8) != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          *(undefined8 *)(lVar6 + (ulonglong)(uVar12 & 3) * 8) = param_2;
          auVar2._8_8_ = lVar5;
          auVar2._0_8_ = uVar11;
          if ((uVar11 == uVar15) && (lVar5 != -1 && uVar15 < *(uint *)param_1[2])) {
            LOCK();
            if (auVar2 == *param_1) {
              *(ulonglong *)*param_1 = (ulonglong)*(uint *)param_1[2];
              *(ulonglong *)(*param_1 + 8) = (ulonglong)((uint)lVar5 & 1) + lVar5;
            }
            else {
              uVar11 = SUB168(*param_1,0);
            }
            UNLOCK();
          }
          return uVar11;
        }
        uVar14 = uVar17 + 3 >> 2;
        uVar16 = *(uint *)(param_1[2] + 4);
        if (uVar16 < uVar14) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar9 = uVar9 >> 2;
        pvVar13 = (void *)(DAT_14c80ad08 + (ulonglong)*(uint *)(param_1[1] + 0xc) * 8);
        if ((ulonglong)*(uint *)(param_1[1] + 0xc) == 0) {
          pvVar13 = (void *)0x0;
        }
        if (uVar16 <= (uint)uVar9) {
          pvVar7 = (void *)FUN_14678871b((ulonglong)uVar16 * 8 + 8,
                                         "pas_page_sharing_pool_segmented_participant_vector/spine",
                                         0);
          if (3 < uVar17 + 3) {
            memcpy(pvVar7,pvVar13,(ulonglong)(uVar14 * 4));
          }
          lVar6 = (ulonglong)uVar16 * 2 + 2;
          memset((void *)((ulonglong)uVar14 * 4 + (longlong)pvVar7),0,
                 (lVar6 - (ulonglong)uVar14) * 4);
          LOCK();
          UNLOCK();
          if (pvVar7 == (void *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar10 = (longlong)pvVar7 - DAT_14c80ad08;
            if (DAT_14c758498 <= uVar10) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            if ((uVar10 & 7) != 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            if (uVar10 < 8) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            uVar4 = (undefined4)(uVar10 >> 3);
          }
          *(undefined4 *)(param_1[1] + 0xc) = uVar4;
          LOCK();
          UNLOCK();
          *(int *)(param_1[2] + 4) = (int)lVar6;
          pvVar13 = pvVar7;
        }
        uVar16 = *(uint *)((longlong)pvVar13 + uVar9 * 4);
        uVar10 = (ulonglong)uVar16;
        if ((uint)uVar9 == uVar14) {
          if ((uVar16 != 0) && (uVar10 << 3 != -DAT_14c80ad08)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if ((ulonglong)(uVar17 & 3) != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          puVar8 = (undefined8 *)
                   FUN_1467886fa(0x20,8,"pas_page_sharing_pool_segmented_participant_vector/segment"
                                 ,0);
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          puVar8[3] = 0;
          LOCK();
          UNLOCK();
          if (puVar8 == (undefined8 *)0x0) {
            uVar10 = 0;
          }
          else {
            uVar10 = (longlong)puVar8 - DAT_14c80ad08;
            if (DAT_14c758498 <= uVar10) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            if ((uVar10 & 7) != 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            if (uVar10 < 8) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            uVar10 = uVar10 >> 3;
          }
          *(int *)((longlong)pvVar13 + uVar9 * 4) = (int)uVar10;
        }
        lVar6 = 0;
        if ((int)uVar10 != 0) {
          lVar6 = DAT_14c80ad08 + (uVar10 & 0xffffffff) * 8;
        }
        *(undefined8 *)(lVar6 + (ulonglong)(uVar17 & 3) * 8) = 0;
        LOCK();
        UNLOCK();
        uVar17 = *(int *)param_1[2] + 1;
        uVar9 = (ulonglong)uVar17;
        *(uint *)param_1[2] = uVar17;
        if (uVar17 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      } while( true );
    }
    uVar16 = uVar15 + 3 >> 2;
    uVar17 = *(uint *)(param_1[1] + 8);
    if (uVar17 < uVar16) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar14 = uVar15 >> 2;
    pvVar13 = (void *)(DAT_14c80ad08 + (ulonglong)*(uint *)param_1[1] * 8);
    if ((ulonglong)*(uint *)param_1[1] == 0) {
      pvVar13 = (void *)0x0;
    }
    if (uVar17 <= uVar14) {
      pvVar7 = (void *)FUN_14678871b((ulonglong)uVar17 * 8 + 8,
                                     "pas_page_sharing_pool_segmented_delta_bitvector/spine",0);
      if (uVar15 != 0) {
        memcpy(pvVar7,pvVar13,(ulonglong)(uVar16 * 4));
      }
      lVar6 = (ulonglong)uVar17 * 2 + 2;
      memset((void *)((longlong)pvVar7 + (ulonglong)uVar16 * 4),0,(lVar6 - (ulonglong)uVar16) * 4);
      LOCK();
      UNLOCK();
      if (pvVar7 == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar9 = (longlong)pvVar7 - DAT_14c80ad08;
        if (DAT_14c758498 <= uVar9) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if ((uVar9 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (uVar9 < 8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar4 = (undefined4)(uVar9 >> 3);
      }
      *(undefined4 *)param_1[1] = uVar4;
      LOCK();
      UNLOCK();
      *(int *)(param_1[1] + 8) = (int)lVar6;
      pvVar13 = pvVar7;
    }
    uVar17 = *(uint *)((longlong)pvVar13 + (ulonglong)uVar14 * 4);
    uVar9 = (ulonglong)uVar17;
    if (uVar14 == uVar16) {
      if ((uVar17 != 0) && (uVar9 << 3 != -DAT_14c80ad08)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if ((ulonglong)(uVar15 & 3) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      puVar8 = (undefined8 *)
               FUN_1467886fa(0x10,4,"pas_page_sharing_pool_segmented_delta_bitvector/segment",0);
      *puVar8 = 0;
      puVar8[1] = 0;
      LOCK();
      UNLOCK();
      if (puVar8 == (undefined8 *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (longlong)puVar8 - DAT_14c80ad08;
        if (DAT_14c758498 <= uVar9) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if ((uVar9 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (uVar9 < 8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar9 = uVar9 >> 3;
      }
      *(int *)((longlong)pvVar13 + (ulonglong)uVar14 * 4) = (int)uVar9;
    }
    lVar6 = 0;
    if ((int)uVar9 != 0) {
      lVar6 = DAT_14c80ad08 + (uVar9 & 0xffffffff) * 8;
    }
    *(undefined4 *)(lVar6 + (ulonglong)(uVar15 & 3) * 4) = 0;
    LOCK();
    UNLOCK();
    uVar15 = *(int *)(param_1[1] + 4) + 1;
    *(uint *)(param_1[1] + 4) = uVar15;
    if (uVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  } while( true );
}



// FUNCTION 14678e496 FUN_14678e496 body=9 status=ok
// SIG undefined FUN_14678e496(void)

void FUN_14678e496(longlong param_1,undefined8 param_2)

{
  FUN_14678dfd6(param_1,param_2,*(undefined4 *)(param_1 + 0x20));
  return;
}



// FUNCTION 14678e49f FUN_14678e49f body=1664 status=ok
// SIG undefined FUN_14678e49f(void)

/* WARNING: Removing unreachable block (ram,0x00014678e62a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14678e49f(undefined8 param_1,ulonglong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  char cVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  void *_Dst;
  undefined8 *puVar13;
  ulonglong *puVar14;
  uint uVar15;
  ulonglong uVar16;
  void *pvVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  code *pcVar21;
  ulonglong uVar22;
  code *pcVar23;
  ulonglong uVar24;
  bool bVar25;
  
  pcVar21 = AcquireSRWLockExclusive_exref;
  pcVar23 = TryAcquireSRWLockExclusive_exref;
  do {
    lVar18 = DAT_14c80af28;
    if ((((param_2 == 0) || (DAT_14c80af28 == 0)) ||
        (cVar5 = FUN_14678de6d(DAT_14c80af28), cVar5 == '\0')) ||
       (uVar6 = FUN_14678de12(lVar18), param_2 < uVar6)) {
      lVar18 = DAT_14c80af28;
      if (DAT_14c80aee0 == DAT_14c80af00) {
        if (DAT_14c80af28 == 0) {
          return 0;
        }
        plVar7 = (longlong *)FUN_14678dd94(DAT_14c80af28);
        lVar8 = FUN_14678de12(lVar18);
        if ((lVar8 != *plVar7) || (cVar5 = FUN_14678de6d(lVar18), cVar5 == '\0')) {
          FUN_14678ec29(&DAT_14c80aee0,lVar18);
          goto LAB_14678e588;
        }
      }
      else {
        lVar18 = 0;
LAB_14678e588:
        (*pcVar21)(&DAT_14c80ada8);
        if (DAT_14c80af00 == 0) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)invalidInstructionException();
          (*pcVar21)();
        }
        cVar5 = (*pcVar23)(&DAT_14c80ada8);
        if (cVar5 != '\0') {
                    /* WARNING: Does not return */
          pcVar21 = (code *)invalidInstructionException();
          (*pcVar21)();
        }
        if (lVar18 != 0) {
          lVar8 = FUN_14678dd94(lVar18);
          if ((ulonglong)*(uint *)(lVar8 + 0xc) != 0) {
            uVar6 = (ulonglong)*(uint *)(lVar8 + 0xc) - 1;
            if (DAT_14c80af20 + 1 <= uVar6) {
                    /* WARNING: Does not return */
              pcVar21 = (code *)invalidInstructionException();
              (*pcVar21)();
            }
            plVar7 = (longlong *)((longlong)DAT_14c80af18 + uVar6 * 8 + -8);
            if (uVar6 == 0) {
              plVar7 = &DAT_14c80af10;
            }
            if (*plVar7 != lVar18) {
                    /* WARNING: Does not return */
              pcVar21 = (code *)invalidInstructionException();
              (*pcVar21)();
            }
          }
        }
        do {
          do {
            uVar6 = DAT_14c80aee0;
            uVar16 = DAT_14c80aee8;
            if ((DAT_14c80aee8 & 1) == 0) {
              uVar16 = DAT_14c80aee8 | 1;
              LOCK();
              DAT_14c80aee8 = uVar16;
              UNLOCK();
            }
            if ((uVar16 & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar21 = (code *)invalidInstructionException();
              (*pcVar21)();
            }
            uVar19 = CONCAT44(0,DAT_14c80af00);
            uVar24 = uVar6;
            if (uVar6 < uVar19) {
              do {
                uVar22 = (ulonglong)((uint)(uVar24 >> 5) & 3);
                lVar18 = DAT_14c80ad08 + (ulonglong)DAT_14c80aef0 * 8;
                if ((ulonglong)DAT_14c80aef0 == 0) {
                  lVar18 = 0;
                }
                uVar11 = (ulonglong)*(uint *)(lVar18 + (uVar24 >> 7) * 4);
                lVar18 = DAT_14c80ad08 + uVar11 * 8;
                if (uVar11 == 0) {
                  lVar18 = 0;
                }
                bVar3 = (byte)uVar24 & 0x1f;
                do {
                  uVar2 = *(uint *)(lVar18 + uVar22 * 4);
                  uVar15 = uVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
                  if (uVar2 == uVar15) goto LAB_14678e98c;
                  puVar1 = (uint *)(lVar18 + uVar22 * 4);
                  LOCK();
                  bVar25 = uVar2 == *puVar1;
                  if (bVar25) {
                    *puVar1 = uVar15;
                  }
                  UNLOCK();
                } while (!bVar25);
                lVar18 = DAT_14c80ad08 + (ulonglong)DAT_14c80aefc * 8;
                if ((ulonglong)DAT_14c80aefc == 0) {
                  lVar18 = 0;
                }
                uVar22 = (ulonglong)*(uint *)(lVar18 + (uVar24 & 0xfffffffffffffffc));
                lVar18 = DAT_14c80ad08 + uVar22 * 8;
                if (uVar22 == 0) {
                  lVar18 = 0;
                }
                lVar18 = *(longlong *)(lVar18 + (ulonglong)((uint)uVar24 & 3) * 8);
                puVar12 = (undefined8 *)FUN_14678dd94(lVar18);
                uVar10 = FUN_14678de12(lVar18);
                *puVar12 = uVar10;
                *(undefined1 *)(puVar12 + 2) = 0;
                LOCK();
                UNLOCK();
                cVar5 = FUN_14678de6d(lVar18);
                if (cVar5 == '\0') {
                  if ((*(int *)((longlong)puVar12 + 0xc) != 0) &&
                     (FUN_14678ed37(lVar18), *(int *)((longlong)puVar12 + 0xc) != 0)) {
                    /* WARNING: Does not return */
                    pcVar21 = (code *)invalidInstructionException();
                    (*pcVar21)();
                  }
                }
                else {
                  lVar8 = FUN_14678dd94(lVar18);
                  if (*(int *)(lVar8 + 0xc) == 0) {
LAB_14678e732:
                    uVar11 = DAT_14c80af20;
                    uVar22 = DAT_14c80af08;
                    if (DAT_14c80af20 + 1 <= DAT_14c80af08) {
                      if (DAT_14c80af08 != DAT_14c80af20 + 1) {
                    /* WARNING: Does not return */
                        pcVar21 = (code *)invalidInstructionException();
                        (*pcVar21)();
                      }
                      uVar20 = DAT_14c80af20 * 2;
                      if (uVar20 < 5) {
                        uVar20 = 4;
                      }
                      if (uVar20 <= DAT_14c80af20) {
                    /* WARNING: Does not return */
                        pcVar21 = (code *)invalidInstructionException();
                        (*pcVar21)();
                      }
                      _Dst = (void *)FUN_1467803da(uVar20 * 8,
                                                   "pas_page_sharing_pool_min_heap/outline_array",0,
                                                   0);
                      if (uVar20 < uVar22) {
                    /* WARNING: Does not return */
                        pcVar21 = (code *)invalidInstructionException();
                        (*pcVar21)();
                      }
                      memset(_Dst,0,uVar20 * 8);
                      if (DAT_14c80af18 == (void *)0x0) {
                        pvVar17 = (void *)0x0;
                      }
                      else {
                        memcpy(_Dst,DAT_14c80af18,uVar22 * 8 - 8);
                        pvVar17 = DAT_14c80af18;
                      }
                      FUN_1467803e9(pvVar17,uVar11 << 3,0,0);
                      DAT_14c80af18 = _Dst;
                      DAT_14c80af20 = uVar20;
                    }
                    if (DAT_14c80af20 < uVar22) {
                    /* WARNING: Does not return */
                      pcVar21 = (code *)invalidInstructionException();
                      (*pcVar21)();
                    }
                    DAT_14c80af08 = uVar22 + 1;
                    if (uVar22 == 0) {
                      DAT_14c80af10 = 0;
                      uVar22 = 1;
                    }
                    else {
                      *(undefined8 *)((longlong)DAT_14c80af18 + uVar22 * 8 + -8) = 0;
                      uVar11 = DAT_14c80af08;
                      do {
                        uVar22 = uVar11 >> 1;
                        uVar20 = uVar22 - 1;
                        if (DAT_14c80af20 + 1 <= uVar20) {
                    /* WARNING: Does not return */
                          pcVar21 = (code *)invalidInstructionException();
                          (*pcVar21)();
                        }
                        puVar13 = (undefined8 *)((longlong)DAT_14c80af18 + uVar20 * 8 + -8);
                        if (uVar20 == 0) {
                          puVar13 = &DAT_14c80af10;
                        }
                        uVar10 = *puVar13;
                        puVar9 = (ulonglong *)FUN_14678dd94(lVar18);
                        puVar14 = (ulonglong *)FUN_14678dd94(uVar10);
                        if (*puVar14 <= *puVar9) {
                          uVar22 = uVar11;
                          if (uVar11 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                            pcVar21 = (code *)invalidInstructionException();
                            (*pcVar21)();
                          }
                          break;
                        }
                        if (uVar11 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                          pcVar21 = (code *)invalidInstructionException();
                          (*pcVar21)();
                        }
                        lVar8 = FUN_14678dd94(uVar10);
                        *(int *)(lVar8 + 0xc) = (int)uVar11;
                        if (DAT_14c80af20 + 1 <= uVar11 - 1) {
                    /* WARNING: Does not return */
                          pcVar21 = (code *)invalidInstructionException();
                          (*pcVar21)();
                        }
                        *(undefined8 *)((longlong)DAT_14c80af18 + uVar11 * 8 + -0x10) = uVar10;
                        bVar25 = 3 < uVar11;
                        uVar11 = uVar22;
                      } while (bVar25);
                    }
                    lVar8 = FUN_14678dd94(lVar18);
                    *(int *)(lVar8 + 0xc) = (int)uVar22;
                    uVar22 = uVar22 - 1;
                    if (DAT_14c80af20 + 1 <= uVar22) {
                    /* WARNING: Does not return */
                      pcVar21 = (code *)invalidInstructionException();
                      (*pcVar21)();
                    }
                    plVar7 = (longlong *)((longlong)DAT_14c80af18 + uVar22 * 8 + -8);
                    if (uVar22 == 0) {
                      plVar7 = &DAT_14c80af10;
                    }
                    *plVar7 = lVar18;
                  }
                  else {
                    cVar5 = FUN_14678f116(lVar18);
                    if (cVar5 == '\0') {
                      FUN_14678ed37(lVar18);
                      goto LAB_14678e732;
                    }
                  }
                  if ((ulonglong)*(uint *)((longlong)puVar12 + 0xc) == 0) {
                    /* WARNING: Does not return */
                    pcVar21 = (code *)invalidInstructionException();
                    (*pcVar21)();
                  }
                  uVar22 = (ulonglong)*(uint *)((longlong)puVar12 + 0xc) - 1;
                  if (DAT_14c80af20 + 1 <= uVar22) {
                    /* WARNING: Does not return */
                    pcVar21 = (code *)invalidInstructionException();
                    (*pcVar21)();
                  }
                  plVar7 = (longlong *)((longlong)DAT_14c80af18 + uVar22 * 8 + -8);
                  if (uVar22 == 0) {
                    plVar7 = &DAT_14c80af10;
                  }
                  if (*plVar7 != lVar18) {
                    /* WARNING: Does not return */
                    pcVar21 = (code *)invalidInstructionException();
                    (*pcVar21)();
                  }
                }
LAB_14678e98c:
                uVar24 = uVar24 + 1;
              } while (uVar24 != uVar19);
            }
            lVar18 = DAT_14c80af10;
          } while (uVar16 == 0xffffffffffffffff);
          LOCK();
          auVar4._8_8_ = uVar16;
          auVar4._0_8_ = uVar6;
          bVar25 = auVar4 == _DAT_14c80aee0;
          if (bVar25) {
            DAT_14c80aee8 = uVar16 + 1;
            DAT_14c80aee0 = uVar19;
          }
          else {
            uVar16 = DAT_14c80aee0._8_8_;
          }
          UNLOCK();
        } while (!bVar25);
        if (DAT_14c80af08 == 0) {
          DAT_14c80af28 = 0;
LAB_14678eabe:
          lVar18 = 0;
        }
        else {
          if (DAT_14c80af20 == 0xffffffffffffffff) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)invalidInstructionException();
            (*pcVar21)();
          }
          DAT_14c80af28 = DAT_14c80af10;
          if (DAT_14c80af10 == 0) goto LAB_14678eabe;
          lVar8 = FUN_14678dd94(DAT_14c80af10,uVar16);
          if (*(int *)(lVar8 + 0xc) == 0) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)invalidInstructionException();
            (*pcVar21)();
          }
        }
        pcVar23 = TryAcquireSRWLockExclusive_exref;
        pcVar21 = AcquireSRWLockExclusive_exref;
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
        if (lVar18 == 0) {
          return 0;
        }
      }
      puVar9 = (ulonglong *)FUN_14678dd94(lVar18);
      if ((param_2 != 0) && (param_2 < *puVar9)) {
        return 1;
      }
    }
    uVar10 = FUN_14678dee7(lVar18,param_1,0);
    if ((int)uVar10 - 2U < 2) {
      return uVar10;
    }
    if ((int)uVar10 == 0) {
      lVar8 = FUN_14678dd94(lVar18);
      *(undefined1 *)(lVar8 + 0x10) = 0;
      FUN_14678ec29(&DAT_14c80aee0,lVar18);
    }
  } while( true );
}



// FUNCTION 14678eb1f FUN_14678eb1f body=1 status=ok
// SIG undefined FUN_14678eb1f(void)

void FUN_14678eb1f(void)

{
  return;
}



// FUNCTION 14678eb20 FUN_14678eb20 body=261 status=ok
// SIG undefined FUN_14678eb20(void)

/* WARNING: Removing unreachable block (ram,0x00014678ebaa) */

uint * FUN_14678eb20(uint *param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_4a8 [32];
  undefined1 local_488 [16];
  undefined1 local_478 [1048];
  longlong local_60;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  FUN_14678f287(local_488);
  lVar4 = 0;
  while( true ) {
    FUN_14678f28e(local_488);
    FUN_146781776(local_478,0,0,local_488);
    do {
      uVar3 = FUN_14678e49f(local_478,param_2);
    } while (uVar3 == 3);
    DAT_14c80af30 = (longlong)(local_60 + DAT_14c80af30) >> 0x3f & local_60 + DAT_14c80af30;
    LOCK();
    UNLOCK();
    lVar4 = lVar4 + local_60;
    thunk_FUN_146781d0f(local_478);
    FUN_1467817f2(local_478);
    if (uVar3 < 2) break;
    if (uVar3 != 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    FUN_14678f2c1(local_488);
  }
  cVar2 = FUN_14678f2c1(local_488);
  if (cVar2 == '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *param_1 = uVar3;
  *(longlong *)(param_1 + 2) = lVar4;
  if ((local_38 ^ (ulonglong)auStack_4a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14678ec26 FUN_14678ec26 body=1 status=ok
// SIG undefined FUN_14678ec26(void)

void FUN_14678ec26(void)

{
  return;
}



// FUNCTION 14678ec27 FUN_14678ec27 body=1 status=ok
// SIG undefined FUN_14678ec27(void)

void FUN_14678ec27(void)

{
  return;
}



// FUNCTION 14678ec28 FUN_14678ec28 body=1 status=ok
// SIG undefined FUN_14678ec28(void)

void FUN_14678ec28(void)

{
  return;
}



// FUNCTION 14678ec29 FUN_14678ec29 body=270 status=ok
// SIG undefined FUN_14678ec29(void)

void FUN_14678ec29(undefined1 (*param_1) [16],longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  bool bVar15;
  
  lVar7 = FUN_14678dd94(param_2);
  uVar11 = (ulonglong)(*(uint *)(lVar7 + 8) & 3);
  lVar13 = DAT_14c80ad08 + (ulonglong)*(uint *)(param_1[1] + 0xc) * 8;
  if ((ulonglong)*(uint *)(param_1[1] + 0xc) == 0) {
    lVar13 = 0;
  }
  uVar8 = (ulonglong)*(uint *)(lVar13 + (ulonglong)(*(uint *)(lVar7 + 8) & 0xfffffffc));
  lVar13 = DAT_14c80ad08 + uVar8 * 8;
  if (uVar8 == 0) {
    lVar13 = 0;
  }
  if (*(longlong *)(lVar13 + uVar11 * 8) != param_2) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (*(char *)(lVar7 + 0x10) == '\0') {
    *(undefined1 *)(lVar7 + 0x10) = 1;
    LOCK();
    UNLOCK();
    uVar2 = *(uint *)(lVar7 + 8);
    uVar14 = (ulonglong)uVar2;
    uVar11 = (ulonglong)(uVar2 >> 5 & 3);
    lVar13 = DAT_14c80ad08 + (ulonglong)*(uint *)param_1[1] * 8;
    if ((ulonglong)*(uint *)param_1[1] == 0) {
      lVar13 = 0;
    }
    uVar8 = (ulonglong)*(uint *)(lVar13 + (ulonglong)(uVar2 >> 5 & 0x7fffffc));
    lVar13 = DAT_14c80ad08 + uVar8 * 8;
    if (uVar8 == 0) {
      lVar13 = 0;
    }
    do {
      uVar3 = *(uint *)(lVar13 + uVar11 * 4);
      uVar9 = uVar3 | 1 << ((byte)uVar2 & 0x1f);
      if (uVar3 == uVar9) break;
      puVar1 = (uint *)(lVar13 + uVar11 * 4);
      LOCK();
      bVar15 = uVar3 == *puVar1;
      if (bVar15) {
        *puVar1 = uVar9;
      }
      UNLOCK();
    } while (!bVar15);
    do {
      do {
        uVar11 = *(ulonglong *)(*param_1 + 8);
        do {
          uVar8 = uVar11;
          uVar4 = *(ulonglong *)*param_1;
          uVar11 = *(ulonglong *)(*param_1 + 8);
        } while (*(ulonglong *)(*param_1 + 8) != uVar8);
        uVar12 = uVar14;
        if (uVar4 < uVar14) {
          uVar12 = uVar4;
        }
      } while (uVar8 == 0xffffffffffffffff);
      uVar11 = uVar8;
      if ((uVar8 & 1) == 0) {
        uVar10 = uVar8;
        if (uVar4 <= uVar14) break;
      }
      else {
        uVar10 = uVar8 + 1;
      }
      LOCK();
      auVar6._8_8_ = uVar8;
      auVar6._0_8_ = uVar4;
      bVar15 = auVar6 == *param_1;
      if (bVar15) {
        *(ulonglong *)*param_1 = uVar12;
        *(ulonglong *)(*param_1 + 8) = uVar10;
      }
      else {
        uVar11 = SUB168(*param_1,8);
      }
      UNLOCK();
      uVar8 = CONCAT71((int7)(uVar10 >> 8),bVar15);
    } while (!bVar15);
  }
  FUN_146790ea6(uVar8,uVar11);
  return;
}



// FUNCTION 14678ed37 FUN_14678ed37 body=991 status=ok
// SIG undefined FUN_14678ed37(void)

void FUN_14678ed37(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  code *pcVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  
  lVar8 = FUN_14678dd94();
  uVar16 = DAT_14c80af08;
  uVar3 = *(uint *)(lVar8 + 0xc);
  uVar14 = (ulonglong)uVar3;
  if (uVar14 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  uVar1 = uVar14 - 1;
  if (DAT_14c80af20 + 1U <= uVar1) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  plVar15 = (longlong *)(DAT_14c80af18 + -8 + uVar1 * 8);
  if (uVar1 == 0) {
    plVar15 = &DAT_14c80af10;
  }
  if (*plVar15 != param_1) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  if (DAT_14c80af08 < uVar14) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  uVar2 = DAT_14c80af08 - 1;
  if (DAT_14c80af20 + 1U <= uVar2) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  lVar8 = *plVar15;
  puVar12 = (undefined8 *)(DAT_14c80af18 + -8 + uVar2 * 8);
  if (uVar2 == 0) {
    puVar12 = &DAT_14c80af10;
  }
  uVar4 = *puVar12;
  *puVar12 = 0;
  if (DAT_14c80af20 + 1U <= uVar1) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  puVar12 = (undefined8 *)(DAT_14c80af18 + -8 + uVar1 * 8);
  if (uVar1 == 0) {
    puVar12 = &DAT_14c80af10;
  }
  *puVar12 = 0;
  DAT_14c80af08 = uVar2;
  if (uVar16 != uVar14) {
    if (uVar3 != 1) {
      uVar16 = (ulonglong)(uVar3 >> 1) - 1;
      if (DAT_14c80af20 + 1U <= uVar16) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      puVar12 = (undefined8 *)(DAT_14c80af18 + -8 + uVar16 * 8);
      if (uVar16 == 0) {
        puVar12 = &DAT_14c80af10;
      }
      uVar13 = *puVar12;
      puVar9 = (ulonglong *)FUN_14678dd94(uVar4);
      puVar10 = (ulonglong *)FUN_14678dd94(uVar13);
      uVar16 = uVar14;
      uVar1 = (ulonglong)(uVar3 >> 1);
      if (*puVar9 < *puVar10) {
        do {
          uVar14 = uVar1;
          lVar11 = FUN_14678dd94(uVar13);
          *(int *)(lVar11 + 0xc) = (int)uVar16;
          uVar16 = uVar16 - 1;
          if (DAT_14c80af20 + 1U <= uVar16) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          puVar12 = (undefined8 *)(DAT_14c80af18 + -8 + uVar16 * 8);
          if (uVar16 == 0) {
            puVar12 = &DAT_14c80af10;
          }
          *puVar12 = uVar13;
          if (uVar14 == 1) {
            uVar14 = 1;
            break;
          }
          uVar16 = (uVar14 >> 1) - 1;
          if (DAT_14c80af20 + 1U <= uVar16) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          puVar12 = (undefined8 *)(DAT_14c80af18 + -8 + uVar16 * 8);
          if (uVar16 == 0) {
            puVar12 = &DAT_14c80af10;
          }
          uVar13 = *puVar12;
          puVar9 = (ulonglong *)FUN_14678dd94(uVar4);
          puVar10 = (ulonglong *)FUN_14678dd94(uVar13);
          uVar16 = uVar14;
          uVar1 = uVar14 >> 1;
        } while (*puVar9 < *puVar10);
LAB_14678efaa:
        if (DAT_14c80af20 + 1U <= uVar14 - 1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        uVar13 = uVar4;
        if ((uVar14 != 1) &&
           (*(undefined8 *)(DAT_14c80af18 + -0x10 + uVar14 * 8) = uVar4, uVar13 = DAT_14c80af10,
           uVar14 >> 0x20 != 0)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        DAT_14c80af10 = uVar13;
        lVar11 = FUN_14678dd94(uVar4);
        *(int *)(lVar11 + 0xc) = (int)uVar14;
        goto LAB_14678ee0b;
      }
    }
    do {
      uVar16 = uVar14 * 2;
      if (uVar16 < uVar2) {
        if (DAT_14c80af20 + 1U <= uVar16) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        puVar12 = (undefined8 *)(DAT_14c80af18 + -8 + uVar14 * 0x10);
        if (uVar16 == 0) {
          puVar12 = &DAT_14c80af10;
        }
        uVar13 = *puVar12;
        puVar9 = (ulonglong *)FUN_14678dd94(uVar4);
        puVar10 = (ulonglong *)FUN_14678dd94(uVar13);
        bVar6 = *puVar9 <= *puVar10;
      }
      else {
        if (uVar2 < uVar16) goto LAB_14678efaa;
        bVar6 = true;
        uVar13 = 0;
      }
      if (uVar16 == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      if (DAT_14c80af20 + 1U <= uVar16 - 1) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      uVar5 = *(undefined8 *)(DAT_14c80af18 + -0x10 + uVar14 * 0x10);
      puVar9 = (ulonglong *)FUN_14678dd94(uVar4);
      puVar10 = (ulonglong *)FUN_14678dd94(uVar5);
      if (bVar6) {
        if (*puVar9 <= *puVar10) goto LAB_14678efaa;
LAB_14678eef0:
        if (uVar14 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        lVar11 = FUN_14678dd94(uVar5);
        *(int *)(lVar11 + 0xc) = (int)uVar14;
        uVar13 = uVar5;
        if (DAT_14c80af20 + 1U <= uVar14 - 1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
      }
      else {
        if (*puVar10 < *puVar9) {
          puVar9 = (ulonglong *)FUN_14678dd94(uVar13);
          puVar10 = (ulonglong *)FUN_14678dd94(uVar5);
          if (*puVar10 <= *puVar9) goto LAB_14678eef0;
        }
        if (uVar14 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        lVar11 = FUN_14678dd94(uVar13);
        *(int *)(lVar11 + 0xc) = (int)uVar14;
        if (DAT_14c80af20 + 1U <= uVar14 - 1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        uVar16 = uVar14 * 2 + 1;
      }
      puVar12 = (undefined8 *)(DAT_14c80af18 + -8 + (uVar14 - 1) * 8);
      if (uVar14 - 1 == 0) {
        puVar12 = &DAT_14c80af10;
      }
      *puVar12 = uVar13;
      uVar14 = uVar16;
    } while( true );
  }
LAB_14678ee0b:
  lVar8 = FUN_14678dd94(lVar8);
  *(undefined4 *)(lVar8 + 0xc) = 0;
  return;
}



// FUNCTION 14678f116 FUN_14678f116 body=299 status=ok
// SIG undefined FUN_14678f116(void)

undefined8 FUN_14678f116(undefined8 param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  lVar3 = FUN_14678dd94();
  uVar2 = DAT_14c80af08;
  uVar8 = (ulonglong)*(uint *)(lVar3 + 0xc);
  if (uVar8 < 2) {
LAB_14678f19a:
    lVar3 = DAT_14c80af18;
    uVar4 = uVar8 * 2;
    if (uVar4 <= uVar2) {
      if (uVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (DAT_14c80af20 + 1U <= uVar4 - 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      puVar5 = (ulonglong *)FUN_14678dd94(param_1);
      puVar6 = (ulonglong *)FUN_14678dd94(*(undefined8 *)(lVar3 + -0x10 + uVar8 * 0x10));
      if (*puVar6 < *puVar5) goto LAB_14678f18a;
    }
    if (uVar4 < uVar2) {
      if (DAT_14c80af20 + 1U <= uVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      puVar9 = &DAT_14c80af10;
      if (uVar8 != 0) {
        puVar9 = (undefined8 *)(DAT_14c80af18 + -8 + uVar8 * 0x10);
      }
      puVar5 = (ulonglong *)FUN_14678dd94(param_1);
      puVar6 = (ulonglong *)FUN_14678dd94(*puVar9);
      if (*puVar6 < *puVar5) goto LAB_14678f18a;
    }
    uVar7 = 1;
  }
  else {
    uVar4 = (ulonglong)(*(uint *)(lVar3 + 0xc) >> 1) - 1;
    if (DAT_14c80af20 + 1U <= uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    puVar9 = &DAT_14c80af10;
    if (uVar4 != 0) {
      puVar9 = (undefined8 *)(DAT_14c80af18 + -8 + uVar4 * 8);
    }
    puVar5 = (ulonglong *)FUN_14678dd94(param_1);
    puVar6 = (ulonglong *)FUN_14678dd94(*puVar9);
    if (*puVar6 <= *puVar5) goto LAB_14678f19a;
LAB_14678f18a:
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 14678f241 FUN_14678f241 body=69 status=ok
// SIG undefined FUN_14678f241(void)

void FUN_14678f241(undefined4 *param_1)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_1;
  uStack_14 = param_1[1];
  uStack_10 = param_1[2];
  uStack_c = param_1[3];
  FUN_146782b96(&DAT_14c80af38);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14678f287 FUN_14678f287 body=7 status=ok
// SIG undefined FUN_14678f287(void)

void FUN_14678f287(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 14678f28e FUN_14678f28e body=51 status=ok
// SIG undefined FUN_14678f28e(void)

void FUN_14678f28e(undefined8 *param_1)

{
  code *pcVar1;
  
  if (param_1[1] == 0) {
    if ((PSRWLOCK)*param_1 != (PSRWLOCK)0x0) {
      AcquireSRWLockExclusive((PSRWLOCK)*param_1);
      param_1[1] = *param_1;
      *param_1 = 0;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14678f2c1 FUN_14678f2c1 body=44 status=ok
// SIG undefined FUN_14678f2c1(void)

bool FUN_14678f2c1(longlong *param_1)

{
  if ((PSRWLOCK)param_1[1] != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)param_1[1]);
    param_1[1] = 0;
  }
  return *param_1 == 0;
}



// FUNCTION 14678f2ed FUN_14678f2ed body=27 status=ok
// SIG undefined FUN_14678f2ed(void)

void FUN_14678f2ed(longlong *param_1,longlong param_2)

{
  code *pcVar1;
  
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_1[1] != param_2) {
    if (*param_1 == 0) {
      *param_1 = param_2;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14678f308 FUN_14678f308 body=110 status=ok
// SIG undefined FUN_14678f308(void)

void FUN_14678f308(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar2 = FUN_14678871b(8,"pas_redundant_local_allocator_node",0);
  if (param_1 != 0) {
    uVar4 = param_1 - DAT_14c80ad08;
    if (DAT_14c758498 <= uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((uVar4 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar4 < 8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar4 = uVar4 >> 3;
  }
  lVar3 = 0;
  do {
    *(char *)(lVar2 + lVar3) = (char)uVar4;
    uVar4 = uVar4 >> 8;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  *(undefined4 *)(lVar2 + 4) = 0;
  return;
}



// FUNCTION 14678f376 FUN_14678f376 body=1617 status=ok
// SIG undefined FUN_14678f376(void)

void FUN_14678f376(uint *param_1,uint *param_2,code *param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint *puVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  bool bVar14;
  
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  puVar9 = (uint *)(DAT_14c80ad08 + (ulonglong)*param_1 * 8);
  if (puVar9 == (uint *)0x0 || (ulonglong)*param_1 == 0) {
    puVar13 = param_1;
    if (param_2 == (uint *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar5 = (longlong)param_2 - DAT_14c80ad08;
      if (DAT_14c758498 <= uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar5 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar5 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar4 = (uint)(uVar5 >> 3);
    }
  }
  else {
    do {
      puVar13 = puVar9;
      iVar3 = (*param_3)(param_2,puVar13);
      if (iVar3 < 0) {
        uVar4 = *puVar13;
      }
      else {
        uVar4 = puVar13[1];
      }
    } while (((ulonglong)uVar4 != 0) &&
            (puVar9 = (uint *)(DAT_14c80ad08 + (ulonglong)uVar4 * 8), puVar9 != (uint *)0x0));
    iVar3 = 0;
    if (7 < param_2[2]) {
      iVar3 = (int)DAT_14c80ad08;
    }
    uVar5 = (ulonglong)(iVar3 + param_2[2] & 1) | (ulonglong)puVar13;
    if (&DAT_00000007 < puVar13) {
      uVar5 = uVar5 - DAT_14c80ad08;
      if (DAT_14c758498 <= uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    param_2[2] = (uint)uVar5;
    iVar3 = (*param_3)(param_2);
    if (iVar3 < 0) {
      if (param_2 == (uint *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar5 = (longlong)param_2 - DAT_14c80ad08;
        if (DAT_14c758498 <= uVar5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if ((uVar5 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (uVar5 < 8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar4 = (uint)(uVar5 >> 3);
      }
    }
    else {
      if (param_2 == (uint *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar5 = (longlong)param_2 - DAT_14c80ad08;
        if (DAT_14c758498 <= uVar5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if ((uVar5 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (uVar5 < 8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar4 = (uint)(uVar5 >> 3);
      }
      puVar13 = puVar13 + 1;
    }
  }
  *puVar13 = uVar4;
  uVar5 = DAT_14c80ad08;
  uVar7 = 0;
  if (7 < (ulonglong)param_2[2]) {
    uVar7 = DAT_14c80ad08;
  }
  uVar7 = uVar7 + param_2[2];
  uVar6 = uVar7 & 0xfffffffffffffffe;
  if (7 < uVar7) {
    uVar6 = uVar6 - DAT_14c80ad08;
    if (DAT_14c758498 <= uVar6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  param_2[2] = (uint)uVar6;
  puVar9 = (uint *)(uVar5 + (ulonglong)*param_1 * 8);
  if ((ulonglong)*param_1 == 0) {
    puVar9 = (uint *)0x0;
  }
  if (puVar9 != param_2) {
    uVar7 = 0;
    if (7 < (uint)uVar6) {
      uVar7 = uVar5;
    }
    puVar13 = (uint *)(uVar7 + (uVar6 & 0xffffffff) & 0xfffffffffffffffe);
    uVar4 = puVar13[2];
    bVar14 = uVar4 < 8;
    iVar3 = (int)uVar5;
    if (bVar14) {
      iVar3 = 0;
    }
    if ((iVar3 + uVar4 & 1) == 0) {
      uVar6 = 0;
      uVar7 = uVar5;
      do {
        puVar9 = puVar13 + 2;
        uVar10 = uVar5;
        if (bVar14) {
          uVar10 = uVar6;
        }
        uVar10 = uVar10 + uVar4;
        puVar8 = (uint *)(uVar10 & 0xfffffffffffffffe);
        puVar12 = (uint *)(uVar5 + (ulonglong)*puVar8 * 8);
        if ((ulonglong)*puVar8 == 0) {
          puVar12 = (uint *)0x0;
        }
        iVar3 = (int)uVar7;
        if (puVar12 == puVar13) {
          if (((ulonglong)puVar8[1] != 0) && (lVar1 = uVar5 + (ulonglong)puVar8[1] * 8, lVar1 != 0))
          {
            if (*(uint *)(lVar1 + 8) < 8) {
              iVar3 = 0;
            }
            if ((iVar3 + *(uint *)(lVar1 + 8) & 1) == 0) {
              uVar7 = uVar10 | 1;
              if (7 < uVar10) {
                uVar7 = uVar7 - uVar5;
                if (DAT_14c758498 <= uVar7) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                if (uVar7 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
              }
              *puVar9 = (uint)uVar7;
              uVar7 = uVar5;
              if ((ulonglong)*(uint *)(lVar1 + 8) < 8) {
                uVar7 = uVar6;
              }
              uVar7 = uVar7 + *(uint *)(lVar1 + 8);
              uVar10 = uVar7 | 1;
              if (7 < uVar7) {
                uVar10 = uVar10 - uVar5;
                if (DAT_14c758498 <= uVar10) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                if (uVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
              }
              *(int *)(lVar1 + 8) = (int)uVar10;
              uVar7 = uVar5;
              if ((ulonglong)puVar8[2] < 8) {
                uVar7 = uVar6;
              }
              uVar7 = uVar7 + puVar8[2];
              uVar10 = uVar7 & 0xfffffffffffffffe;
              if (7 < uVar7) {
                uVar10 = uVar10 - uVar5;
                if (DAT_14c758498 <= uVar10) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                if (uVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
              }
              goto LAB_14678f57a;
            }
          }
          puVar12 = (uint *)(uVar5 + (ulonglong)puVar13[1] * 8);
          if ((ulonglong)puVar13[1] == 0) {
            puVar12 = (uint *)0x0;
          }
          puVar11 = puVar13;
          if (param_2 == puVar12) {
            FUN_14678f9c7(param_1,puVar13,param_4);
            uVar5 = DAT_14c80ad08;
            if ((ulonglong)*puVar9 < 8) {
              uVar5 = uVar6;
            }
            puVar11 = (uint *)(uVar5 + *puVar9 & 0xfffffffffffffffe);
            uVar10 = DAT_14c80ad08;
            if ((ulonglong)puVar11[2] < 8) {
              uVar10 = uVar6;
            }
            uVar10 = uVar10 + puVar11[2];
            puVar8 = (uint *)(uVar10 & 0xfffffffffffffffe);
            uVar5 = DAT_14c80ad08;
            param_2 = puVar13;
          }
          uVar7 = uVar10 | 1;
          if (7 < uVar10) {
            uVar7 = uVar7 - uVar5;
            if (DAT_14c758498 <= uVar7) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (uVar7 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
          }
          puVar11[2] = (uint)uVar7;
          uVar7 = uVar5;
          if ((ulonglong)puVar8[2] < 8) {
            uVar7 = uVar6;
          }
          uVar7 = uVar7 + puVar8[2];
          uVar10 = uVar7 & 0xfffffffffffffffe;
          if (7 < uVar7) {
            uVar10 = uVar10 - uVar5;
            if (DAT_14c758498 <= uVar10) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (uVar10 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
          }
          puVar8[2] = (uint)uVar10;
          FUN_14678fc3b(param_1);
        }
        else {
          if (puVar12 != (uint *)0x0) {
            if (puVar12[2] < 8) {
              iVar3 = 0;
            }
            if ((iVar3 + puVar12[2] & 1) == 0) {
              uVar7 = uVar10 | 1;
              if (7 < uVar10) {
                uVar7 = uVar7 - uVar5;
                if (DAT_14c758498 <= uVar7) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                if (uVar7 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
              }
              *puVar9 = (uint)uVar7;
              uVar7 = uVar5;
              if ((ulonglong)puVar12[2] < 8) {
                uVar7 = uVar6;
              }
              uVar7 = uVar7 + puVar12[2];
              uVar10 = uVar7 | 1;
              if (7 < uVar7) {
                uVar10 = uVar10 - uVar5;
                if (DAT_14c758498 <= uVar10) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                if (uVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
              }
              puVar12[2] = (uint)uVar10;
              uVar7 = uVar5;
              if ((ulonglong)puVar8[2] < 8) {
                uVar7 = uVar6;
              }
              uVar7 = uVar7 + puVar8[2];
              uVar10 = uVar7 & 0xfffffffffffffffe;
              if (7 < uVar7) {
                uVar10 = uVar10 - uVar5;
                if (DAT_14c758498 <= uVar10) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                if (uVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
              }
LAB_14678f57a:
              puVar8[2] = (uint)uVar10;
              param_2 = puVar8;
              goto LAB_14678f580;
            }
          }
          puVar12 = (uint *)(uVar5 + (ulonglong)*puVar13 * 8);
          if ((ulonglong)*puVar13 == 0) {
            puVar12 = (uint *)0x0;
          }
          puVar11 = puVar13;
          if (param_2 == puVar12) {
            FUN_14678fc3b(param_1,puVar13,param_4);
            uVar5 = DAT_14c80ad08;
            if ((ulonglong)*puVar9 < 8) {
              uVar5 = uVar6;
            }
            puVar11 = (uint *)(uVar5 + *puVar9 & 0xfffffffffffffffe);
            uVar10 = DAT_14c80ad08;
            if ((ulonglong)puVar11[2] < 8) {
              uVar10 = uVar6;
            }
            uVar10 = uVar10 + puVar11[2];
            puVar8 = (uint *)(uVar10 & 0xfffffffffffffffe);
            uVar5 = DAT_14c80ad08;
            param_2 = puVar13;
          }
          uVar7 = uVar10 | 1;
          if (7 < uVar10) {
            uVar7 = uVar7 - uVar5;
            if (DAT_14c758498 <= uVar7) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (uVar7 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
          }
          puVar11[2] = (uint)uVar7;
          uVar7 = uVar5;
          if ((ulonglong)puVar8[2] < 8) {
            uVar7 = uVar6;
          }
          uVar7 = uVar7 + puVar8[2];
          uVar10 = uVar7 & 0xfffffffffffffffe;
          if (7 < uVar7) {
            uVar10 = uVar10 - uVar5;
            if (DAT_14c758498 <= uVar10) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (uVar10 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
          }
          puVar8[2] = (uint)uVar10;
          FUN_14678f9c7(param_1);
        }
LAB_14678f580:
        puVar9 = (uint *)(DAT_14c80ad08 + (ulonglong)*param_1 * 8);
        if ((ulonglong)*param_1 == 0) {
          puVar9 = (uint *)0x0;
        }
        uVar5 = DAT_14c80ad08;
        if (param_2 == puVar9) break;
        uVar7 = DAT_14c80ad08;
        if ((ulonglong)param_2[2] < 8) {
          uVar7 = uVar6;
        }
        puVar13 = (uint *)(uVar7 + param_2[2] & 0xfffffffffffffffe);
        uVar4 = puVar13[2];
        bVar14 = uVar4 < 8;
        iVar3 = (int)DAT_14c80ad08;
        if (bVar14) {
          iVar3 = 0;
        }
        uVar7 = DAT_14c80ad08 & 0xffffffff;
      } while ((iVar3 + uVar4 & 1) == 0);
    }
  }
  uVar7 = 0;
  if (7 < (ulonglong)puVar9[2]) {
    uVar7 = uVar5;
  }
  uVar7 = uVar7 + puVar9[2];
  uVar6 = uVar7 | 1;
  if (7 < uVar7) {
    uVar6 = uVar6 - uVar5;
    if (DAT_14c758498 <= uVar6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  puVar9[2] = (uint)uVar6;
  return;
}



// FUNCTION 14678f9c7 FUN_14678f9c7 body=628 status=ok
// SIG undefined FUN_14678f9c7(void)

void FUN_14678f9c7(uint *param_1,ulonglong param_2,ulonglong *param_3)

{
  code *pcVar1;
  uint *puVar2;
  longlong lVar3;
  uint *puVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  
  puVar2 = (uint *)((ulonglong)*(uint *)(param_2 + 4) * 8 + DAT_14c80ad08);
  if ((ulonglong)*(uint *)(param_2 + 4) == 0) {
    puVar2 = (uint *)0x0;
  }
  *param_3 = param_2;
  param_3[1] = (ulonglong)puVar2;
  uVar7 = *puVar2;
  uVar8 = (ulonglong)uVar7 * 8;
  lVar3 = DAT_14c80ad08 + uVar8;
  if (lVar3 == 0 || (ulonglong)uVar7 == 0) {
    *(undefined4 *)(param_2 + 4) = 0;
    lVar5 = DAT_14c80ad08;
  }
  else {
    if (DAT_14c758498 <= uVar8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    *(uint *)(param_2 + 4) = uVar7;
    lVar5 = DAT_14c80ad08;
    iVar6 = 0;
    if (7 < *(uint *)(lVar3 + 8)) {
      iVar6 = (int)DAT_14c80ad08;
    }
    uVar8 = iVar6 + *(uint *)(lVar3 + 8) & 1 | param_2;
    if (7 < param_2) {
      uVar8 = uVar8 - DAT_14c80ad08;
      if (DAT_14c758498 <= uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (uVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    *(int *)(lVar3 + 8) = (int)uVar8;
  }
  lVar3 = 0;
  if (7 < (ulonglong)*(uint *)(param_2 + 8)) {
    lVar3 = lVar5;
  }
  puVar4 = (uint *)(lVar3 + (ulonglong)*(uint *)(param_2 + 8) & 0xfffffffffffffffe);
  iVar6 = 0;
  if (7 < puVar2[2]) {
    iVar6 = (int)lVar5;
  }
  uVar8 = (ulonglong)(iVar6 + puVar2[2] & 1) | (ulonglong)puVar4;
  if (&DAT_00000007 < puVar4) {
    uVar8 = uVar8 - lVar5;
    if (DAT_14c758498 <= uVar8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  puVar2[2] = (uint)uVar8;
  if (puVar4 == (uint *)0x0) {
    puVar4 = param_1;
    if (puVar2 == (uint *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar8 = (longlong)puVar2 - lVar5;
      if (DAT_14c758498 <= uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if ((uVar8 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (uVar8 < 8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar7 = (uint)(uVar8 >> 3);
    }
  }
  else {
    uVar8 = lVar5 + (ulonglong)*puVar4 * 8;
    if ((ulonglong)*puVar4 == 0) {
      uVar8 = 0;
    }
    if (uVar8 == param_2) {
      if (puVar2 == (uint *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar8 = (longlong)puVar2 - lVar5;
        if (DAT_14c758498 <= uVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if ((uVar8 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (uVar8 < 8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar7 = (uint)(uVar8 >> 3);
      }
    }
    else {
      if (puVar2 == (uint *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar8 = (longlong)puVar2 - lVar5;
        if (DAT_14c758498 <= uVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if ((uVar8 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (uVar8 < 8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar7 = (uint)(uVar8 >> 3);
      }
      puVar4 = puVar4 + 1;
    }
  }
  *puVar4 = uVar7;
  if (param_2 == 0) {
    uVar7 = 0;
  }
  else {
    uVar8 = param_2 - DAT_14c80ad08;
    if (DAT_14c758498 <= uVar8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((uVar8 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar8 < 8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar7 = (uint)(uVar8 >> 3);
  }
  *puVar2 = uVar7;
  iVar6 = 0;
  if (7 < *(uint *)(param_2 + 8)) {
    iVar6 = (int)DAT_14c80ad08;
  }
  uVar8 = (ulonglong)(iVar6 + *(uint *)(param_2 + 8) & 1) | (ulonglong)puVar2;
  if (&DAT_00000007 < puVar2) {
    uVar8 = uVar8 - DAT_14c80ad08;
    if (DAT_14c758498 <= uVar8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  *(int *)(param_2 + 8) = (int)uVar8;
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



// FUNCTION 14678fc3b FUN_14678fc3b body=627 status=ok
// SIG undefined FUN_14678fc3b(void)

void FUN_14678fc3b(uint *param_1,uint *param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint *puVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint *puVar10;
  
  uVar2 = (ulonglong)*param_2 * 8 + DAT_14c80ad08;
  if ((ulonglong)*param_2 == 0) {
    uVar2 = 0;
  }
  *param_3 = param_2;
  param_3[1] = uVar2;
  uVar8 = *(uint *)(uVar2 + 4);
  uVar9 = (ulonglong)uVar8 * 8;
  lVar4 = DAT_14c80ad08 + uVar9;
  if (lVar4 == 0 || (ulonglong)uVar8 == 0) {
    *param_2 = 0;
    lVar6 = DAT_14c80ad08;
  }
  else {
    if (DAT_14c758498 <= uVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    *param_2 = uVar8;
    lVar6 = DAT_14c80ad08;
    iVar7 = 0;
    if (7 < *(uint *)(lVar4 + 8)) {
      iVar7 = (int)DAT_14c80ad08;
    }
    uVar9 = (ulonglong)(iVar7 + *(uint *)(lVar4 + 8) & 1) | (ulonglong)param_2;
    if (&DAT_00000007 < param_2) {
      uVar9 = uVar9 - DAT_14c80ad08;
      if (DAT_14c758498 <= uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (uVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    *(int *)(lVar4 + 8) = (int)uVar9;
  }
  lVar4 = 0;
  if (7 < (ulonglong)param_2[2]) {
    lVar4 = lVar6;
  }
  puVar5 = (uint *)(lVar4 + (ulonglong)param_2[2] & 0xfffffffffffffffe);
  iVar7 = 0;
  if (7 < *(uint *)(uVar2 + 8)) {
    iVar7 = (int)lVar6;
  }
  uVar9 = (ulonglong)(iVar7 + *(uint *)(uVar2 + 8) & 1) | (ulonglong)puVar5;
  if (&DAT_00000007 < puVar5) {
    uVar9 = uVar9 - lVar6;
    if (DAT_14c758498 <= uVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  *(int *)(uVar2 + 8) = (int)uVar9;
  if (puVar5 == (uint *)0x0) {
    puVar5 = param_1;
    if (uVar2 == 0) {
      uVar8 = 0;
    }
    else {
      uVar9 = uVar2 - lVar6;
      if (DAT_14c758498 <= uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if ((uVar9 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (uVar9 < 8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar8 = (uint)(uVar9 >> 3);
    }
  }
  else {
    puVar10 = (uint *)(lVar6 + (ulonglong)*puVar5 * 8);
    if ((ulonglong)*puVar5 == 0) {
      puVar10 = (uint *)0x0;
    }
    if (puVar10 == param_2) {
      if (uVar2 == 0) {
        uVar8 = 0;
      }
      else {
        uVar9 = uVar2 - lVar6;
        if (DAT_14c758498 <= uVar9) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if ((uVar9 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (uVar9 < 8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar8 = (uint)(uVar9 >> 3);
      }
    }
    else {
      if (uVar2 == 0) {
        uVar8 = 0;
      }
      else {
        uVar9 = uVar2 - lVar6;
        if (DAT_14c758498 <= uVar9) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if ((uVar9 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (uVar9 < 8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar8 = (uint)(uVar9 >> 3);
      }
      puVar5 = puVar5 + 1;
    }
  }
  *puVar5 = uVar8;
  if (param_2 == (uint *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar9 = (longlong)param_2 - DAT_14c80ad08;
    if (DAT_14c758498 <= uVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((uVar9 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar9 < 8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar3 = (undefined4)(uVar9 >> 3);
  }
  *(undefined4 *)(uVar2 + 4) = uVar3;
  iVar7 = 0;
  if (7 < param_2[2]) {
    iVar7 = (int)DAT_14c80ad08;
  }
  uVar9 = iVar7 + param_2[2] & 1 | uVar2;
  if (7 < uVar2) {
    uVar9 = uVar9 - DAT_14c80ad08;
    if (DAT_14c758498 <= uVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  param_2[2] = (uint)uVar9;
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



// FUNCTION 14678feae FUN_14678feae body=1496 status=ok
// SIG undefined FUN_14678feae(void)

uint * FUN_14678feae(uint *param_1,uint *param_2,longlong param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint *puVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  
  puVar15 = DAT_14c80ad08;
  if (param_2 == (uint *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  puVar6 = (uint *)0x0;
  if (7 < (ulonglong)param_2[2]) {
    puVar6 = DAT_14c80ad08;
  }
  if ((undefined1 *)((longlong)puVar6 + (ulonglong)param_2[2]) < (undefined1 *)0x2) {
    puVar6 = DAT_14c80ad08 + (ulonglong)*param_1 * 2;
    if ((ulonglong)*param_1 == 0) {
      puVar6 = (uint *)0x0;
    }
    if (puVar6 != param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  uVar3 = *param_2;
  lVar10 = (ulonglong)uVar3 << 3;
  puVar6 = param_2;
  if ((lVar10 != -(longlong)DAT_14c80ad08 && uVar3 != 0) &&
     ((ulonglong)param_2[1] << 3 != -(longlong)DAT_14c80ad08 && param_2[1] != 0)) {
    puVar6 = (uint *)FUN_146790486();
    uVar3 = *puVar6;
    lVar10 = (ulonglong)uVar3 << 3;
  }
  if (((uVar3 == 0) || (puVar11 = (uint *)(lVar10 + (longlong)puVar15), puVar11 == (uint *)0x0)) &&
     (puVar11 = puVar15 + (ulonglong)puVar6[1] * 2, puVar11 == (uint *)0x0 || puVar6[1] == 0)) {
    uVar3 = puVar6[2];
    puVar11 = puVar15;
    if ((ulonglong)uVar3 < 8) {
      puVar11 = (uint *)0x0;
    }
    *(uint **)(param_3 + 0x10) = puVar6;
    puVar4 = (uint *)((ulonglong)((longlong)puVar11 + (ulonglong)uVar3) & 0xfffffffffffffffe);
    if (puVar4 == (uint *)0x0) {
      uVar3 = 0;
      puVar4 = param_1;
      puVar12 = (uint *)0x0;
      puVar5 = (uint *)0x0;
      goto LAB_14679004f;
    }
    puVar15 = puVar15 + (ulonglong)*puVar4 * 2;
    if ((ulonglong)*puVar4 == 0) {
      puVar15 = (uint *)0x0;
    }
    puVar11 = (uint *)0x0;
    uVar3 = 0;
    puVar12 = (uint *)0x0;
    puVar5 = puVar4;
    uVar2 = 0;
    if (puVar6 == puVar15) goto LAB_14679004f;
  }
  else {
    puVar5 = puVar15;
    if ((ulonglong)puVar6[2] < 8) {
      puVar5 = (uint *)0x0;
    }
    puVar5 = (uint *)((ulonglong)((longlong)puVar5 + (ulonglong)puVar6[2]) & 0xfffffffffffffffe);
    iVar7 = 0;
    if (7 < puVar11[2]) {
      iVar7 = (int)puVar15;
    }
    uVar13 = (ulonglong)(iVar7 + puVar11[2] & 1) | (ulonglong)puVar5;
    if (&DAT_00000007 < puVar5) {
      uVar13 = uVar13 - (longlong)puVar15;
      if (DAT_14c758498 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (uVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    puVar11[2] = (uint)uVar13;
    *(uint **)(param_3 + 0x10) = puVar6;
    puVar12 = puVar11;
    if (puVar5 == (uint *)0x0) {
      uVar13 = (longlong)puVar11 - (longlong)puVar15;
      if (DAT_14c758498 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if ((uVar13 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (uVar13 < 8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar3 = (uint)(uVar13 >> 3);
      puVar4 = param_1;
      puVar5 = (uint *)0x0;
      goto LAB_14679004f;
    }
    puVar4 = puVar15 + (ulonglong)*puVar5 * 2;
    if ((ulonglong)*puVar5 == 0) {
      puVar4 = (uint *)0x0;
    }
    uVar13 = (longlong)puVar11 - (longlong)puVar15;
    if (puVar6 == puVar4) {
      if (DAT_14c758498 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if ((uVar13 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (uVar13 < 8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar3 = (uint)(uVar13 >> 3);
      puVar4 = puVar5;
      goto LAB_14679004f;
    }
    if (DAT_14c758498 <= uVar13) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((uVar13 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar13 < 8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar2 = (uint)(uVar13 >> 3);
  }
  uVar3 = uVar2;
  puVar4 = puVar5 + 1;
  puVar12 = puVar11;
LAB_14679004f:
  *puVar4 = uVar3;
  iVar7 = 0;
  if (7 < puVar6[2]) {
    iVar7 = (int)DAT_14c80ad08;
  }
  uVar3 = iVar7 + puVar6[2];
  if (puVar6 == param_2) {
    if ((uVar3 & 1) != 0) {
      FUN_14679050c(param_1,puVar12,puVar5,param_3);
    }
  }
  else {
    if ((uVar3 & 1) != 0) {
      FUN_14679050c(param_1,puVar12,puVar5);
    }
    uVar13 = (ulonglong)*param_2;
    uVar3 = 0;
    if (((uVar13 != 0) && (DAT_14c80ad08 + uVar13 * 2 != (uint *)0x0)) &&
       (uVar3 = *param_2, DAT_14c758498 <= uVar13 * 8)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    *puVar6 = uVar3;
    uVar13 = (ulonglong)param_2[1];
    uVar3 = 0;
    if (((uVar13 != 0) && (DAT_14c80ad08 + uVar13 * 2 != (uint *)0x0)) &&
       (uVar3 = param_2[1], DAT_14c758498 <= uVar13 * 8)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    puVar6[1] = uVar3;
    puVar15 = DAT_14c80ad08;
    puVar11 = (uint *)0x0;
    if (7 < (ulonglong)param_2[2]) {
      puVar11 = DAT_14c80ad08;
    }
    uVar13 = (ulonglong)((longlong)puVar11 + (ulonglong)param_2[2]) & 0xfffffffffffffffe;
    iVar7 = (int)DAT_14c80ad08;
    iVar8 = 0;
    if (7 < puVar6[2]) {
      iVar8 = iVar7;
    }
    uVar9 = iVar8 + puVar6[2] & 1 | uVar13;
    if (7 < uVar13) {
      uVar9 = uVar9 - (longlong)DAT_14c80ad08;
      if (DAT_14c758498 <= uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (uVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    puVar6[2] = (uint)uVar9;
    iVar8 = 0;
    if (7 < param_2[2]) {
      iVar8 = iVar7;
    }
    puVar11 = (uint *)0x0;
    if (7 < (uint)uVar9) {
      puVar11 = puVar15;
    }
    puVar14 = (undefined1 *)((longlong)puVar11 + (uVar9 & 0xffffffff));
    uVar13 = (ulonglong)(iVar8 + param_2[2] & 1) | (ulonglong)puVar14 & 0xfffffffffffffffe;
    if ((undefined1 *)0x7 < puVar14) {
      uVar13 = uVar13 - (longlong)puVar15;
      if (DAT_14c758498 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (uVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    puVar6[2] = (uint)uVar13;
    puVar11 = puVar15 + (ulonglong)*param_2 * 2;
    if (puVar11 != (uint *)0x0 && *param_2 != 0) {
      iVar8 = 0;
      if (7 < puVar11[2]) {
        iVar8 = iVar7;
      }
      uVar13 = (ulonglong)(iVar8 + puVar11[2] & 1) | (ulonglong)puVar6;
      if (&DAT_00000007 < puVar6) {
        uVar13 = uVar13 - (longlong)puVar15;
        if (DAT_14c758498 <= uVar13) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (uVar13 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      }
      puVar11[2] = (uint)uVar13;
    }
    puVar11 = puVar15 + (ulonglong)param_2[1] * 2;
    if (puVar11 != (uint *)0x0 && param_2[1] != 0) {
      iVar8 = 0;
      if (7 < puVar11[2]) {
        iVar8 = iVar7;
      }
      uVar13 = (ulonglong)(iVar8 + puVar11[2] & 1) | (ulonglong)puVar6;
      if (&DAT_00000007 < puVar6) {
        uVar13 = uVar13 - (longlong)puVar15;
        if (DAT_14c758498 <= uVar13) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (uVar13 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      }
      puVar11[2] = (uint)uVar13;
    }
    puVar11 = (uint *)0x0;
    if (7 < (ulonglong)param_2[2]) {
      puVar11 = puVar15;
    }
    puVar11 = (uint *)((ulonglong)((longlong)puVar11 + (ulonglong)param_2[2]) & 0xfffffffffffffffe);
    if (puVar11 == (uint *)0x0) {
      puVar11 = puVar15 + (ulonglong)*param_1 * 2;
      if ((ulonglong)*param_1 == 0) {
        puVar11 = (uint *)0x0;
      }
      if (puVar11 != param_2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (puVar6 == (uint *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar13 = (longlong)puVar6 - (longlong)puVar15;
        if (DAT_14c758498 <= uVar13) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if ((uVar13 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (uVar13 < 8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar3 = (uint)(uVar13 >> 3);
      }
      *param_1 = uVar3;
    }
    else {
      puVar5 = puVar15 + (ulonglong)*puVar11 * 2;
      if ((ulonglong)*puVar11 == 0) {
        puVar5 = (uint *)0x0;
      }
      if (puVar5 == param_2) {
        if (puVar6 == (uint *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar13 = (longlong)puVar6 - (longlong)puVar15;
          if (DAT_14c758498 <= uVar13) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if ((uVar13 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if (uVar13 < 8) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          uVar3 = (uint)(uVar13 >> 3);
        }
        *puVar11 = uVar3;
      }
      else {
        if (puVar6 == (uint *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar13 = (longlong)puVar6 - (longlong)puVar15;
          if (DAT_14c758498 <= uVar13) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if ((uVar13 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if (uVar13 < 8) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          uVar3 = (uint)(uVar13 >> 3);
        }
        puVar11[1] = uVar3;
      }
    }
  }
  *(undefined8 *)(param_3 + 0x10) = 0;
  if (DAT_14c80ad08 + (ulonglong)*param_1 * 2 != (uint *)0x0 && (ulonglong)*param_1 != 0) {
    uVar3 = (DAT_14c80ad08 + (ulonglong)*param_1 * 2)[2];
    iVar7 = 0;
    if (7 < uVar3) {
      iVar7 = (int)DAT_14c80ad08;
    }
    if ((iVar7 + uVar3 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  return param_2;
}



// FUNCTION 146790486 FUN_146790486 body=134 status=ok
// SIG undefined FUN_146790486(void)

uint * FUN_146790486(uint *param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint *puVar3;
  
  puVar1 = (uint *)(DAT_14c80ad08 + (ulonglong)param_1[1] * 8);
  if (puVar1 == (uint *)0x0 || (ulonglong)param_1[1] == 0) {
    lVar2 = 0;
    if (7 < (ulonglong)param_1[2]) {
      lVar2 = DAT_14c80ad08;
    }
    puVar1 = (uint *)(lVar2 + (ulonglong)param_1[2] & 0xfffffffffffffffe);
    puVar3 = (uint *)0x0;
    if (puVar1 != (uint *)0x0) {
      do {
        puVar3 = puVar1;
        puVar1 = (uint *)(DAT_14c80ad08 + (ulonglong)puVar3[1] * 8);
        if ((ulonglong)puVar3[1] == 0) {
          puVar1 = (uint *)0x0;
        }
        if (param_1 != puVar1) {
          return puVar3;
        }
        lVar2 = DAT_14c80ad08;
        if ((ulonglong)puVar3[2] < 8) {
          lVar2 = 0;
        }
        puVar1 = (uint *)(lVar2 + (ulonglong)puVar3[2] & 0xfffffffffffffffe);
        param_1 = puVar3;
      } while (puVar1 != (uint *)0x0);
      puVar3 = (uint *)0x0;
    }
  }
  else {
    do {
      puVar3 = puVar1;
      if ((ulonglong)*puVar3 == 0) {
        return puVar3;
      }
      puVar1 = (uint *)(DAT_14c80ad08 + (ulonglong)*puVar3 * 8);
    } while (puVar1 != (uint *)0x0);
  }
  return puVar3;
}



// FUNCTION 14679050c FUN_14679050c body=1891 status=ok
// SIG undefined FUN_14679050c(void)

void FUN_14679050c(uint *param_1,uint *param_2,uint *param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  
  puVar7 = (uint *)(DAT_14c80ad08 + (ulonglong)*param_1 * 8);
  if ((ulonglong)*param_1 == 0) {
    puVar7 = (uint *)0x0;
  }
  uVar5 = DAT_14c80ad08;
  if (puVar7 != param_2) {
    uVar12 = 0;
    do {
      iVar11 = (int)uVar5;
      if (param_2 != (uint *)0x0) {
        uVar6 = param_2[2];
        iVar8 = iVar11;
        if (uVar6 < 8) {
          iVar8 = 0;
        }
        if ((iVar8 + uVar6 & 1) == 0) goto LAB_146790bac;
      }
      puVar7 = (uint *)(uVar5 + (ulonglong)*param_3 * 8);
      puVar9 = (uint *)0x0;
      if ((ulonglong)*param_3 != 0) {
        puVar9 = puVar7;
      }
      if (param_2 == puVar9) {
        if (((ulonglong)param_3[1] == 0) ||
           (puVar7 = (uint *)(uVar5 + (ulonglong)param_3[1] * 8), puVar7 == (uint *)0x0)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar6 = puVar7[2];
        if ((ulonglong)uVar6 < 8) {
          iVar11 = 0;
        }
        if ((iVar11 + uVar6 & 1) == 0) {
          uVar10 = uVar5;
          if (uVar6 < 8) {
            uVar10 = uVar12;
          }
          uVar10 = uVar10 + uVar6;
          uVar3 = uVar10 | 1;
          if (7 < uVar10) {
            uVar3 = uVar3 - uVar5;
            if (DAT_14c758498 <= uVar3) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            if (uVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
          }
          puVar7[2] = (uint)uVar3;
          uVar10 = uVar5;
          if ((ulonglong)param_3[2] < 8) {
            uVar10 = uVar12;
          }
          uVar10 = uVar10 + param_3[2];
          uVar3 = uVar10 & 0xfffffffffffffffe;
          if (7 < uVar10) {
            uVar3 = uVar3 - uVar5;
            if (DAT_14c758498 <= uVar3) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            if (uVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
          }
          param_3[2] = (uint)uVar3;
          FUN_14678f9c7(param_1,param_3,param_4);
          puVar7 = (uint *)(DAT_14c80ad08 + (ulonglong)param_3[1] * 8);
          uVar5 = DAT_14c80ad08;
          if ((ulonglong)param_3[1] == 0) {
            puVar7 = (uint *)0x0;
          }
        }
        lVar4 = uVar5 + (ulonglong)*puVar7 * 8;
        if ((ulonglong)*puVar7 == 0) {
          lVar4 = 0;
        }
        lVar2 = uVar5 + (ulonglong)puVar7[1] * 8;
        if ((ulonglong)puVar7[1] == 0) {
          lVar2 = 0;
        }
        iVar11 = (int)uVar5;
        if (lVar4 == 0) {
LAB_1467906e4:
          if (lVar2 != 0) {
            uVar6 = *(uint *)(lVar2 + 8);
            iVar8 = iVar11;
            if (uVar6 < 8) {
              iVar8 = 0;
            }
            if ((iVar8 + uVar6 & 1) == 0) {
LAB_146790a34:
              if (uVar6 < 8) {
                iVar11 = 0;
              }
              uVar10 = uVar5 & 0xffffffff;
              if ((iVar11 + uVar6 & 1) != 0) {
                uVar6 = *(uint *)(lVar4 + 8);
                goto LAB_146790a4c;
              }
              goto LAB_146790aba;
            }
          }
          uVar10 = uVar5;
          if ((ulonglong)puVar7[2] < 8) {
            uVar10 = uVar12;
          }
          uVar10 = uVar10 + puVar7[2];
          uVar3 = uVar10 & 0xfffffffffffffffe;
          if (7 < uVar10) {
            uVar3 = uVar3 - uVar5;
            if (DAT_14c758498 <= uVar3) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            if (uVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
          }
          goto LAB_14679063a;
        }
        uVar6 = *(uint *)(lVar4 + 8);
        iVar8 = iVar11;
        if (uVar6 < 8) {
          iVar8 = 0;
        }
        if ((iVar8 + uVar6 & 1) != 0) goto LAB_1467906e4;
        if (lVar2 != 0) {
          uVar6 = *(uint *)(lVar2 + 8);
          goto LAB_146790a34;
        }
LAB_146790a4c:
        uVar10 = uVar5;
        if (uVar6 < 8) {
          uVar10 = uVar12;
        }
        uVar3 = uVar10 + uVar6 | 1;
        if (7 < uVar10 + uVar6) {
          uVar3 = uVar3 - uVar5;
          if (DAT_14c758498 <= uVar3) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if (uVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(int *)(lVar4 + 8) = (int)uVar3;
        uVar10 = uVar5;
        if ((ulonglong)puVar7[2] < 8) {
          uVar10 = uVar12;
        }
        uVar10 = uVar10 + puVar7[2];
        uVar3 = uVar10 & 0xfffffffffffffffe;
        if (7 < uVar10) {
          uVar3 = uVar3 - uVar5;
          if (DAT_14c758498 <= uVar3) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if (uVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        puVar7[2] = (uint)uVar3;
        FUN_14678fc3b(param_1,puVar7,param_4);
        puVar7 = (uint *)(DAT_14c80ad08 + (ulonglong)param_3[1] * 8);
        uVar5 = DAT_14c80ad08;
        uVar10 = DAT_14c80ad08;
        if ((ulonglong)param_3[1] == 0) {
          puVar7 = (uint *)0x0;
        }
LAB_146790aba:
        iVar11 = (int)uVar10;
        if (param_3[2] < 8) {
          iVar11 = 0;
        }
        uVar10 = 0;
        if (7 < (ulonglong)puVar7[2]) {
          uVar10 = uVar5;
        }
        uVar10 = uVar10 + puVar7[2];
        uVar3 = (ulonglong)(iVar11 + param_3[2] & 1) | uVar10 & 0xfffffffffffffffe;
        if (7 < uVar10) {
          uVar3 = uVar3 - uVar5;
          if (DAT_14c758498 <= uVar3) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if (uVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        puVar7[2] = (uint)uVar3;
        uVar10 = uVar5;
        if ((ulonglong)param_3[2] < 8) {
          uVar10 = uVar12;
        }
        uVar10 = uVar10 + param_3[2];
        uVar3 = uVar10 | 1;
        if (7 < uVar10) {
          uVar3 = uVar3 - uVar5;
          if (DAT_14c758498 <= uVar3) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if (uVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        param_3[2] = (uint)uVar3;
        if (((ulonglong)puVar7[1] != 0) && (lVar4 = uVar5 + (ulonglong)puVar7[1] * 8, lVar4 != 0)) {
          uVar10 = uVar5;
          if ((ulonglong)*(uint *)(lVar4 + 8) < 8) {
            uVar10 = uVar12;
          }
          uVar10 = uVar10 + *(uint *)(lVar4 + 8);
          uVar3 = uVar10 | 1;
          if (7 < uVar10) {
            uVar3 = uVar3 - uVar5;
            if (DAT_14c758498 <= uVar3) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            if (uVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
          }
          *(int *)(lVar4 + 8) = (int)uVar3;
        }
        FUN_14678f9c7(param_1,param_3,param_4);
LAB_146790983:
        param_2 = (uint *)(DAT_14c80ad08 + (ulonglong)*param_1 * 8);
        uVar5 = DAT_14c80ad08;
        if ((ulonglong)*param_1 == 0) {
          param_2 = (uint *)0x0;
        }
      }
      else {
        if (puVar9 == (uint *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar6 = puVar9[2];
        if ((ulonglong)uVar6 < 8) {
          iVar11 = 0;
        }
        if ((iVar11 + uVar6 & 1) == 0) {
          uVar10 = uVar5;
          if (uVar6 < 8) {
            uVar10 = uVar12;
          }
          uVar10 = uVar10 + uVar6;
          uVar3 = uVar10 | 1;
          if (7 < uVar10) {
            uVar3 = uVar3 - uVar5;
            if (DAT_14c758498 <= uVar3) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            if (uVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
          }
          puVar9[2] = (uint)uVar3;
          uVar10 = uVar5;
          if ((ulonglong)param_3[2] < 8) {
            uVar10 = uVar12;
          }
          uVar10 = uVar10 + param_3[2];
          uVar3 = uVar10 & 0xfffffffffffffffe;
          if (7 < uVar10) {
            uVar3 = uVar3 - uVar5;
            if (DAT_14c758498 <= uVar3) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            if (uVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
          }
          param_3[2] = (uint)uVar3;
          FUN_14678fc3b(param_1,param_3,param_4);
          puVar7 = (uint *)(DAT_14c80ad08 + (ulonglong)*param_3 * 8);
          uVar5 = DAT_14c80ad08;
          if ((ulonglong)*param_3 == 0) {
            puVar7 = (uint *)0x0;
          }
        }
        lVar4 = uVar5 + (ulonglong)*puVar7 * 8;
        if ((ulonglong)*puVar7 == 0) {
          lVar4 = 0;
        }
        lVar2 = uVar5 + (ulonglong)puVar7[1] * 8;
        if ((ulonglong)puVar7[1] == 0) {
          lVar2 = 0;
        }
        iVar11 = (int)uVar5;
        if (lVar2 != 0) {
          uVar6 = *(uint *)(lVar2 + 8);
          iVar8 = iVar11;
          if (uVar6 < 8) {
            iVar8 = 0;
          }
          if ((iVar8 + uVar6 & 1) != 0) goto LAB_1467905df;
          if (lVar4 == 0) {
LAB_146790808:
            uVar10 = uVar5;
            if (uVar6 < 8) {
              uVar10 = uVar12;
            }
            uVar3 = uVar10 + uVar6 | 1;
            if (7 < uVar10 + uVar6) {
              uVar3 = uVar3 - uVar5;
              if (DAT_14c758498 <= uVar3) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
              if (uVar3 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
            }
            *(int *)(lVar2 + 8) = (int)uVar3;
            uVar10 = uVar5;
            if ((ulonglong)puVar7[2] < 8) {
              uVar10 = uVar12;
            }
            uVar10 = uVar10 + puVar7[2];
            uVar3 = uVar10 & 0xfffffffffffffffe;
            if (7 < uVar10) {
              uVar3 = uVar3 - uVar5;
              if (DAT_14c758498 <= uVar3) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
              if (uVar3 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
            }
            puVar7[2] = (uint)uVar3;
            FUN_14678f9c7(param_1,puVar7,param_4);
            puVar7 = (uint *)(DAT_14c80ad08 + (ulonglong)*param_3 * 8);
            uVar5 = DAT_14c80ad08;
            uVar10 = DAT_14c80ad08;
            if ((ulonglong)*param_3 == 0) {
              puVar7 = (uint *)0x0;
            }
          }
          else {
            uVar6 = *(uint *)(lVar4 + 8);
LAB_1467907ec:
            if (uVar6 < 8) {
              iVar11 = 0;
            }
            uVar10 = uVar5 & 0xffffffff;
            if ((iVar11 + uVar6 & 1) != 0) {
              uVar6 = *(uint *)(lVar2 + 8);
              goto LAB_146790808;
            }
          }
          iVar11 = (int)uVar10;
          if (param_3[2] < 8) {
            iVar11 = 0;
          }
          uVar10 = 0;
          if (7 < (ulonglong)puVar7[2]) {
            uVar10 = uVar5;
          }
          uVar10 = uVar10 + puVar7[2];
          uVar3 = (ulonglong)(iVar11 + param_3[2] & 1) | uVar10 & 0xfffffffffffffffe;
          if (7 < uVar10) {
            uVar3 = uVar3 - uVar5;
            if (DAT_14c758498 <= uVar3) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            if (uVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
          }
          puVar7[2] = (uint)uVar3;
          uVar10 = uVar5;
          if ((ulonglong)param_3[2] < 8) {
            uVar10 = uVar12;
          }
          uVar10 = uVar10 + param_3[2];
          uVar3 = uVar10 | 1;
          if (7 < uVar10) {
            uVar3 = uVar3 - uVar5;
            if (DAT_14c758498 <= uVar3) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            if (uVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
          }
          param_3[2] = (uint)uVar3;
          if (((ulonglong)*puVar7 != 0) && (lVar4 = uVar5 + (ulonglong)*puVar7 * 8, lVar4 != 0)) {
            uVar10 = uVar5;
            if ((ulonglong)*(uint *)(lVar4 + 8) < 8) {
              uVar10 = uVar12;
            }
            uVar10 = uVar10 + *(uint *)(lVar4 + 8);
            uVar3 = uVar10 | 1;
            if (7 < uVar10) {
              uVar3 = uVar3 - uVar5;
              if (DAT_14c758498 <= uVar3) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
              if (uVar3 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
            }
            *(int *)(lVar4 + 8) = (int)uVar3;
          }
          FUN_14678fc3b(param_1,param_3,param_4);
          goto LAB_146790983;
        }
LAB_1467905df:
        if (lVar4 != 0) {
          uVar6 = *(uint *)(lVar4 + 8);
          iVar8 = iVar11;
          if (uVar6 < 8) {
            iVar8 = 0;
          }
          if ((iVar8 + uVar6 & 1) == 0) goto LAB_1467907ec;
        }
        uVar10 = uVar5;
        if ((ulonglong)puVar7[2] < 8) {
          uVar10 = uVar12;
        }
        uVar10 = uVar10 + puVar7[2];
        uVar3 = uVar10 & 0xfffffffffffffffe;
        if (7 < uVar10) {
          uVar3 = uVar3 - uVar5;
          if (DAT_14c758498 <= uVar3) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if (uVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
LAB_14679063a:
        puVar7[2] = (uint)uVar3;
        param_2 = param_3;
      }
      uVar10 = 0;
      if (7 < (ulonglong)param_2[2]) {
        uVar10 = uVar5;
      }
      param_3 = (uint *)(uVar10 + param_2[2] & 0xfffffffffffffffe);
      puVar7 = (uint *)(uVar5 + (ulonglong)*param_1 * 8);
      if ((ulonglong)*param_1 == 0) {
        puVar7 = (uint *)0x0;
      }
    } while (param_2 != puVar7);
  }
  if (param_2 != (uint *)0x0) {
    uVar6 = param_2[2];
LAB_146790bac:
    uVar12 = 0;
    if (7 < uVar6) {
      uVar12 = uVar5;
    }
    uVar10 = uVar12 + uVar6 | 1;
    if (7 < uVar12 + uVar6) {
      uVar10 = uVar10 - uVar5;
      if (DAT_14c758498 <= uVar10) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (uVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    param_2[2] = (uint)uVar10;
  }
  return;
}



// FUNCTION 146790c6f FUN_146790c6f body=75 status=ok
// SIG undefined FUN_146790c6f(void)

undefined8 FUN_146790c6f(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_146782b1c();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146790cbb FUN_146790cbb body=11 status=ok
// SIG undefined FUN_146790cbb(void)

void FUN_146790cbb(undefined8 param_1,undefined8 param_2)

{
  FUN_14678d9b9(param_1,param_2,1);
  return;
}



// FUNCTION 146790cc6 FUN_146790cc6 body=221 status=ok
// SIG undefined FUN_146790cc6(void)

undefined8 FUN_146790cc6(undefined8 param_1,ulonglong param_2,undefined4 *param_3)

{
  code *pcVar1;
  BOOLEAN BVar2;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c80aed0 == 0) {
    DAT_14c80aed0 = FUN_14678d6e8();
  }
  if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((DAT_14c80aed0 - 1U & param_2) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 == '\0') {
    local_78 = &local_50;
    local_50 = 1;
    local_48 = 1;
    local_40 = FUN_146790dfd;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_68 = *param_3;
    uStack_64 = param_3[1];
    uStack_60 = param_3[2];
    uStack_5c = param_3[3];
    FUN_146799db0(param_1,&DAT_14c80af40,param_2);
    if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 146790da4 FUN_146790da4 body=88 status=ok
// SIG undefined FUN_146790da4(void)

longlong * FUN_146790da4(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined1 auStack_58 [48];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_146790cc6();
  if ((char)param_1[1] == '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (*param_1 != 0) {
    if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 146790dfd FUN_146790dfd body=79 status=ok
// SIG undefined FUN_146790dfd(void)

undefined8 FUN_146790dfd(undefined8 param_1,undefined8 param_2,undefined4 *param_3,longlong param_4)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_4 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_146790c6f();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146790e4d FUN_146790e4d body=88 status=ok
// SIG undefined FUN_146790e4d(void)

undefined8
FUN_146790e4d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_4;
  uStack_24 = param_4[1];
  uStack_20 = param_4[2];
  uStack_1c = param_4[3];
  local_38 = param_5;
  FUN_146799d35(param_1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146790ea6 FUN_146790ea6 body=39 status=ok
// SIG undefined FUN_146790ea6(void)

undefined4 FUN_146790ea6(void)

{
  if ((DAT_14c80af64 != 1) && (DAT_14c80af60 == '\0')) {
    LOCK();
    UNLOCK();
    DAT_14c80af60 = '\x01';
  }
  return CONCAT31((int3)((uint)DAT_14c80af64 >> 8),DAT_14c80af64 != 1);
}



// FUNCTION 146790ecd FUN_146790ecd body=158 status=ok
// SIG undefined FUN_146790ecd(void)

void FUN_146790ecd(void)

{
  char cVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (DAT_14c80af60 == '\x01') {
    cVar1 = FUN_146782b19();
    if (cVar1 != '\0') {
      LOCK();
      UNLOCK();
      DAT_14c80af60 = '\0';
      LOCK();
      UNLOCK();
      if (DAT_14c80af64 != 1) {
        lpCriticalSection = (LPCRITICAL_SECTION)FUN_146790f6a();
        EnterCriticalSection(lpCriticalSection);
        if (DAT_14c80af64 == 0) {
          DAT_14c80af64 = 1;
          FUN_1467a2810(FUN_146790fe0,0);
        }
        if (DAT_14c80af64 == 2) {
          DAT_14c80af64 = 1;
          WakeAllConditionVariable((PCONDITION_VARIABLE)(lpCriticalSection + 1));
        }
        LeaveCriticalSection(lpCriticalSection);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146790f6a FUN_146790f6a body=118 status=ok
// SIG undefined FUN_146790f6a(void)

LPCRITICAL_SECTION FUN_146790f6a(void)

{
  LPCRITICAL_SECTION p_Var1;
  
  p_Var1 = DAT_14c80af68;
  if (DAT_14c80af68 == (LPCRITICAL_SECTION)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    if (DAT_14c80af68 == (LPCRITICAL_SECTION)0x0) {
      p_Var1 = (LPCRITICAL_SECTION)FUN_14678871b(0x30,"pas_scavenger_data",0);
      InitializeCriticalSection(p_Var1);
      InitializeConditionVariable((PCONDITION_VARIABLE)(p_Var1 + 1));
      LOCK();
      UNLOCK();
      DAT_14c80af68 = p_Var1;
    }
    p_Var1 = DAT_14c80af68;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  }
  return p_Var1;
}



// FUNCTION 146790fe0 FUN_146790fe0 body=655 status=ok
// SIG undefined FUN_146790fe0(void)

undefined8 FUN_146790fe0(void)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION ConditionVariable;
  bool bVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_c8 [40];
  int local_a0 [4];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14c80af64 != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_146790f6a();
  ConditionVariable = lpCriticalSection + 1;
  do {
    bVar2 = FUN_14677dc63(1);
    bVar3 = FUN_1467a0976(1,0);
    bVar4 = FUN_14679eb18(1,1,1);
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    bVar5 = FUN_146780948(0);
    bVar6 = FUN_146788a1d(0);
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    FUN_146782f7a();
    FUN_14678eb20(local_a0);
    if (local_a0[0] == 1) {
      bVar2 = 1;
    }
    else {
      if (local_a0[0] == 2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (local_a0[0] == 3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      bVar2 = bVar5 | bVar6 | bVar2 | bVar3 | bVar4;
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    bVar3 = FUN_1467803f4();
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    bVar4 = FUN_146788734();
    bVar5 = FUN_1467a759f();
    EnterCriticalSection(lpCriticalSection);
    if (1 < DAT_14c80af64 - 1U) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    dVar8 = (double)FUN_1467a27aa();
    if ((byte)(bVar4 | bVar5 | bVar2 | bVar3) == 1) {
      if (DAT_14c80af64 != 1) {
        DAT_14c80af64 = 1;
      }
LAB_14679117b:
      bVar7 = false;
    }
    else {
      if (DAT_14c80af64 == 1) {
        DAT_14c80af64 = 2;
        goto LAB_14679117b;
      }
      if (DAT_14c80af64 != 2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      dVar10 = dVar8 + 10000.0;
      dVar9 = (double)FUN_1467a27aa();
      bVar7 = DAT_14c80af64 == 2;
      if (dVar9 < dVar10 && bVar7) {
        do {
          FUN_1467a2866(ConditionVariable,lpCriticalSection,dVar10);
          dVar9 = (double)FUN_1467a27aa();
          bVar7 = DAT_14c80af64 == 2;
          if (dVar10 <= dVar9) break;
        } while (DAT_14c80af64 == 2);
      }
    }
    while (dVar10 = (double)FUN_1467a27aa(), dVar10 < dVar8 + 125.0) {
      FUN_1467a2866(ConditionVariable,lpCriticalSection,dVar8 + 125.0);
    }
    if (bVar7) {
      DAT_14c80af64 = 0;
      WakeAllConditionVariable((PCONDITION_VARIABLE)ConditionVariable);
      LeaveCriticalSection(lpCriticalSection);
      if ((local_90 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    LeaveCriticalSection(lpCriticalSection);
  } while( true );
}



// FUNCTION 146791270 FUN_146791270 body=51 status=ok
// SIG undefined FUN_146791270(void)

void FUN_146791270(undefined8 *param_1,uint param_2,uint param_3,uint param_4)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(uint *)((longlong)param_1 + 0xc) =
       (param_4 & 0xff) << 0x10 | (param_3 & 0xff) << 8 | param_2 & 0xff;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 1467912a3 FUN_1467912a3 body=145 status=ok
// SIG undefined FUN_1467912a3(void)

void FUN_1467912a3(longlong param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  if ((ulonglong)*(uint *)(param_1 + 4) * 8 + DAT_14c80ad08 == 0 ||
      (ulonglong)*(uint *)(param_1 + 4) == 0) {
    uVar3 = 0;
    puVar2 = (undefined8 *)FUN_1467886fa(0x40,0x10,"pas_segregated_directory_data",0);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined8 *)((longlong)puVar2 + 0x2c) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x34) = 0;
    LOCK();
    UNLOCK();
    if (puVar2 != (undefined8 *)0x0) {
      uVar4 = (longlong)puVar2 - DAT_14c80ad08;
      if (DAT_14c758498 <= uVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if ((uVar4 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (uVar4 < 8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar3 = (undefined4)(uVar4 >> 3);
    }
    *(undefined4 *)(param_1 + 4) = uVar3;
  }
  return;
}



// FUNCTION 146791334 FUN_146791334 body=281 status=ok
// SIG undefined FUN_146791334(void)

longlong FUN_146791334(longlong param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  lVar3 = (ulonglong)*(uint *)(param_1 + 4) * 8 + DAT_14c80ad08;
  if (lVar3 == 0 || (ulonglong)*(uint *)(param_1 + 4) == 0) {
    uVar10 = (ulonglong)(*(uint *)(param_1 + 8) >> 1 & 1);
  }
  else {
    uVar10 = *(ulonglong *)(lVar3 + 0x10);
  }
  if (uVar10 == 0) {
    return 0;
  }
  iVar9 = (int)uVar10 + -2;
  do {
    uVar11 = uVar10 - 1;
    if (uVar11 == 0) {
      uVar7 = *(uint *)(param_1 + 8) & 2;
    }
    else {
      uVar6 = (ulonglong)*(uint *)(DAT_14c80ad08 + 0x20 + (ulonglong)*(uint *)(param_1 + 4) * 8);
      lVar3 = DAT_14c80ad08 + uVar6 * 8;
      if (uVar6 == 0) {
        lVar3 = 0;
      }
      uVar6 = (ulonglong)*(uint *)(lVar3 + (uVar10 - 2 >> 7) * 4);
      lVar3 = DAT_14c80ad08 + uVar6 * 8;
      if (uVar6 == 0) {
        lVar3 = 0;
      }
      uVar7 = 1 << ((byte)iVar9 & 0x1f) &
              *(uint *)(lVar3 + 4 + (ulonglong)((uint)(uVar10 - 2 >> 2) & 0x18));
    }
    if (((uVar7 == 0) || (uVar4 = FUN_14679144d(param_1), ((uint)uVar4 & 7) == 4)) ||
       (cVar2 = thunk_FUN_146799942(uVar4), cVar2 == '\0')) {
      if (uVar11 == 0) {
        return 0;
      }
    }
    else {
      lVar5 = FUN_14679975a();
      lVar3 = 0;
      lVar8 = 0;
      LOCK();
      auVar1 = *(undefined1 (*) [16])(lVar5 + 0x10);
      if (ZEXT816(0) == auVar1) {
        *(undefined8 *)*(undefined1 (*) [16])(lVar5 + 0x10) = 0;
        *(undefined8 *)(lVar5 + 0x18) = 0;
      }
      else {
        lVar8 = auVar1._8_8_;
        lVar3 = auVar1._0_8_;
      }
      UNLOCK();
      if (lVar8 != 0) {
        lVar3 = 0;
      }
      FUN_146799983(uVar4);
      if (uVar11 == 0) {
        return lVar3;
      }
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    iVar9 = iVar9 + -1;
    uVar10 = uVar11;
  } while( true );
}



// FUNCTION 14679144d FUN_14679144d body=112 status=ok
// SIG undefined FUN_14679144d(void)

longlong FUN_14679144d(uint *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = 0;
  if (7 < (ulonglong)*param_1) {
    lVar2 = DAT_14c80ad08;
  }
  lVar2 = lVar2 + (ulonglong)*param_1;
  if (lVar2 != 0) {
    lVar3 = (ulonglong)param_1[1] * 8 + DAT_14c80ad08;
    uVar4 = 1;
    if (lVar3 != 0 && param_1[1] != 0) {
      uVar4 = (ulonglong)(*(int *)(lVar3 + 0x30) + 1);
    }
    if (param_2 < uVar4) {
      if (param_2 != 0) {
        lVar2 = DAT_14c80ad08 + (ulonglong)*(uint *)(lVar3 + 0x2c) * 8;
        if ((ulonglong)*(uint *)(lVar3 + 0x2c) == 0) {
          lVar2 = 0;
        }
        uVar4 = (ulonglong)*(uint *)(lVar2 + -4 + param_2 * 4);
        lVar2 = 0;
        if (7 < uVar4) {
          lVar2 = DAT_14c80ad08;
        }
        lVar2 = lVar2 + uVar4;
      }
      return lVar2;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1467914bd FUN_1467914bd body=337 status=ok
// SIG undefined FUN_1467914bd(void)

void FUN_1467914bd(longlong param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar5;
  
  cVar1 = *(char *)(param_1 + 0xd);
  if (cVar1 != '\x02') {
    if (cVar1 == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (cVar1 != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (((ulonglong)*(uint *)(param_1 + 4) == 0) ||
     (lVar7 = DAT_14c80ad08 + (ulonglong)*(uint *)(param_1 + 4) * 8, lVar7 == 0)) {
    lVar7 = FUN_1467912a3(param_1);
  }
  iVar3 = (int)DAT_14c80ad08;
  if (*(uint *)(lVar7 + 0x38) < 8) {
    iVar3 = 0;
  }
  if ((iVar3 + *(uint *)(lVar7 + 0x38) & 1) == 0) {
    lVar5 = DAT_14c80ad08;
    if ((ulonglong)*(uint *)(lVar7 + 0x38) < 8) {
      lVar5 = 0;
    }
    uVar4 = lVar5 + (ulonglong)*(uint *)(lVar7 + 0x38);
    if ((uVar4 & 1) == 0 && uVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar4 == 0) {
      uVar6 = FUN_14678871b(0x18,"pas_segregated_directory_data/sharing_payload",0);
      FUN_14678ddf8(uVar6);
      uVar4 = uVar6;
      if (7 < uVar6) {
        uVar4 = uVar6 - DAT_14c80ad08;
        if (DAT_14c758498 <= uVar4) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
      }
      *(int *)(lVar7 + 0x38) = (int)uVar4;
      uVar8 = 2;
      if (*(char *)(param_1 + 0xe) != '\0') {
        if (*(char *)(param_1 + 0xe) != '\x01') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar8 = 1;
      }
      uVar8 = FUN_14678dd74(param_1,uVar8);
      FUN_14678e496(&DAT_14c80aee0,uVar8);
      LOCK();
      UNLOCK();
      uVar4 = uVar6 | 1;
      if (7 < uVar6) {
        uVar4 = uVar4 - DAT_14c80ad08;
        if (DAT_14c758498 <= uVar4) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
      }
      *(int *)(lVar7 + 0x38) = (int)uVar4;
    }
  }
  return;
}



// FUNCTION 14679160e FUN_14679160e body=84 status=ok
// SIG undefined FUN_14679160e(void)

ulonglong FUN_14679160e(longlong param_1,ulonglong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  undefined1 (*pauVar5) [16];
  
  pauVar5 = (undefined1 (*) [16])((ulonglong)*(uint *)(param_1 + 4) * 8 + DAT_14c80ad08);
  uVar4 = *param_2;
  if (pauVar5 == (undefined1 (*) [16])0x0 || (ulonglong)*(uint *)(param_1 + 4) == 0) {
    if (1 < uVar4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (1 < param_3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  else {
    uVar1 = param_2[1];
    if (uVar1 != 0xffffffffffffffff) {
      if ((uVar1 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      LOCK();
      auVar3._8_8_ = uVar1;
      auVar3._0_8_ = uVar4;
      if (auVar3 == *pauVar5) {
        *(ulonglong *)*pauVar5 = param_3;
        *(ulonglong *)(*pauVar5 + 8) = uVar1 + 2;
      }
      else {
        uVar4 = SUB168(*pauVar5,0);
      }
      UNLOCK();
    }
  }
  return uVar4;
}



// FUNCTION 146791662 FUN_146791662 body=190 status=ok
// SIG undefined FUN_146791662(void)

undefined8 FUN_146791662(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint *puVar2;
  uint uVar3;
  code *pcVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  
  if (param_2 == 0) {
    do {
      uVar3 = *(uint *)(param_1 + 8);
      if ((uVar3 | 1) == uVar3) {
        return 0;
      }
      LOCK();
      bVar9 = uVar3 == *(uint *)(param_1 + 8);
      if (bVar9) {
        *(uint *)(param_1 + 8) = uVar3 | 1;
      }
      UNLOCK();
    } while (!bVar9);
  }
  else {
    uVar1 = param_2 - 1;
    uVar7 = (ulonglong)((uint)(uVar1 >> 5) & 3);
    uVar5 = (ulonglong)*(uint *)(DAT_14c80ad08 + 0x20 + (ulonglong)*(uint *)(param_1 + 4) * 8);
    lVar8 = DAT_14c80ad08 + uVar5 * 8;
    if (uVar5 == 0) {
      lVar8 = 0;
    }
    uVar5 = (ulonglong)*(uint *)(lVar8 + (uVar1 >> 7) * 4);
    lVar8 = DAT_14c80ad08 + uVar5 * 8;
    if (uVar5 == 0) {
      lVar8 = 0;
    }
    do {
      uVar3 = *(uint *)(lVar8 + uVar7 * 8);
      uVar6 = uVar3 | 1 << ((byte)uVar1 & 0x1f);
      if (uVar3 == uVar6) {
        return 0;
      }
      puVar2 = (uint *)(lVar8 + uVar7 * 8);
      LOCK();
      bVar9 = uVar3 == *puVar2;
      if (bVar9) {
        *puVar2 = uVar6;
      }
      UNLOCK();
    } while (!bVar9);
  }
  if ((ulonglong)*(uint *)(param_1 + 4) * 8 + DAT_14c80ad08 == 0 ||
      (ulonglong)*(uint *)(param_1 + 4) == 0) {
    if (param_2 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
  else {
    FUN_1467a2964();
  }
  return 1;
}



// FUNCTION 146791720 FUN_146791720 body=32 status=ok
// SIG undefined FUN_146791720(void)

void FUN_146791720(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14679968c(param_2);
  FUN_146791662(param_1,uVar1);
  return;
}



// FUNCTION 146791740 FUN_146791740 body=370 status=ok
// SIG undefined FUN_146791740(void)

ulonglong FUN_146791740(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint *puVar2;
  uint uVar3;
  code *pcVar4;
  char cVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong unaff_RDI;
  ulonglong uVar11;
  bool bVar12;
  
  if (param_2 == 0) {
    do {
      uVar3 = *(uint *)(param_1 + 8);
      if ((uVar3 | 2) == uVar3) goto LAB_146791880;
      LOCK();
      bVar12 = uVar3 == *(uint *)(param_1 + 8);
      if (bVar12) {
        *(uint *)(param_1 + 8) = uVar3 | 2;
      }
      UNLOCK();
    } while (!bVar12);
  }
  else {
    uVar1 = param_2 - 1;
    uVar11 = (ulonglong)((uint)(uVar1 >> 5) & 3);
    uVar6 = (ulonglong)*(uint *)(DAT_14c80ad08 + 0x20 + (ulonglong)*(uint *)(param_1 + 4) * 8);
    lVar9 = DAT_14c80ad08 + uVar6 * 8;
    if (uVar6 == 0) {
      lVar9 = 0;
    }
    uVar6 = (ulonglong)*(uint *)(lVar9 + (uVar1 >> 7) * 4);
    lVar9 = DAT_14c80ad08 + uVar6 * 8;
    if (uVar6 == 0) {
      lVar9 = 0;
    }
    do {
      uVar3 = *(uint *)(lVar9 + 4 + uVar11 * 8);
      uVar7 = uVar3 | 1 << ((byte)uVar1 & 0x1f);
      if (uVar3 == uVar7) goto LAB_146791880;
      puVar2 = (uint *)(lVar9 + 4 + uVar11 * 8);
      LOCK();
      bVar12 = uVar3 == *puVar2;
      if (bVar12) {
        *puVar2 = uVar7;
      }
      UNLOCK();
    } while (!bVar12);
  }
  lVar9 = (ulonglong)*(uint *)(param_1 + 4) * 8 + DAT_14c80ad08;
  if (lVar9 == 0 || (ulonglong)*(uint *)(param_1 + 4) == 0) {
    if (param_2 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
  else {
    lVar9 = FUN_1467a29b6(lVar9 + 0x10,param_2 + 1);
    unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
    if (lVar9 != 0) goto LAB_146791882;
  }
  unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
  cVar5 = (char)((uint)*(undefined4 *)(param_1 + 0xc) >> 8);
  if (cVar5 != '\x01') {
    if (cVar5 != '\x02') {
      if (cVar5 != '\0') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (((ulonglong)*(uint *)(param_1 + 4) != 0) &&
       (lVar9 = DAT_14c80ad08 + (ulonglong)*(uint *)(param_1 + 4) * 8, lVar9 != 0)) {
      uVar3 = *(uint *)(lVar9 + 0x38);
      iVar8 = (int)DAT_14c80ad08;
      if (uVar3 < 8) {
        iVar8 = 0;
      }
      if ((iVar8 + uVar3 & 1) != 0) {
        uVar10 = 2;
        cVar5 = (char)((uint)*(undefined4 *)(param_1 + 0xc) >> 0x10);
        if (cVar5 != '\0') {
          if (cVar5 != '\x01') {
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar10 = 1;
        }
        uVar10 = FUN_14678dd74(param_1,uVar10);
        FUN_14678ec29(&DAT_14c80aee0,uVar10);
        goto LAB_146791882;
      }
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
LAB_146791882:
  return unaff_RDI & 0xffffffff;
LAB_146791880:
  unaff_RDI = 0;
  goto LAB_146791882;
}



// FUNCTION 1467918b2 FUN_1467918b2 body=32 status=ok
// SIG undefined FUN_1467918b2(void)

void FUN_1467918b2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14679968c(param_2);
  FUN_146791740(param_1,uVar1);
  return;
}



// FUNCTION 1467918d2 FUN_1467918d2 body=99 status=ok
// SIG undefined FUN_1467918d2(void)

ulonglong * FUN_1467918d2(longlong param_1,ulonglong *param_2,ulonglong *param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  longlong lVar6;
  
  lVar6 = (ulonglong)*(uint *)(param_1 + 4) * 8 + DAT_14c80ad08;
  if (lVar6 == 0 || (ulonglong)*(uint *)(param_1 + 4) == 0) {
    if (1 < *param_2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (&DAT_00000001 < param_3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  else {
    uVar2 = param_2[1];
    if (uVar2 != 0xffffffffffffffff) {
      param_2 = (ulonglong *)*param_2;
      if ((uVar2 & 1) == 0) {
        uVar5 = uVar2;
        if (param_2 == param_3) {
          return param_2;
        }
      }
      else {
        uVar5 = uVar2 + 1;
      }
      LOCK();
      auVar1 = *(undefined1 (*) [16])(lVar6 + 0x10);
      auVar4._8_8_ = uVar2;
      auVar4._0_8_ = param_2;
      if (auVar4 == auVar1) {
        *(ulonglong **)*(undefined1 (*) [16])(lVar6 + 0x10) = param_3;
        *(ulonglong *)(lVar6 + 0x18) = uVar5;
      }
      else {
        param_2 = auVar1._0_8_;
      }
      UNLOCK();
    }
  }
  return param_2;
}



// FUNCTION 146791935 FUN_146791935 body=1314 status=ok
// SIG undefined FUN_146791935(void)

void FUN_146791935(uint *param_1,ulonglong param_2,ulonglong param_3)

{
  int *piVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  void *pvVar6;
  char cVar7;
  uint uVar8;
  ulonglong uVar9;
  void *pvVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined4 uVar17;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar9 = 0;
  uVar15 = DAT_14c80ad08;
  if ((ulonglong)*param_1 < 8) {
    uVar15 = uVar9;
  }
  if (uVar15 + *param_1 != 0) {
    lVar12 = (ulonglong)param_1[1] * 8 + DAT_14c80ad08;
    uVar9 = 1;
    if (lVar12 != 0 && param_1[1] != 0) {
      uVar9 = (ulonglong)(*(int *)(lVar12 + 0x30) + 1);
    }
  }
  if (uVar9 != param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (param_3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar15 = param_3 & 0xffffffff;
  uVar11 = (uint)param_3 & 7;
  if (uVar11 < 2) {
LAB_1467919d0:
    uVar8 = param_1[3];
    if ((uVar8 & 0xff0000) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (2 < uVar11) {
      if (uVar11 != 4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      goto LAB_1467919f4;
    }
  }
  else {
    if (uVar11 != 2) {
      if (uVar11 != 4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      goto LAB_1467919d0;
    }
    uVar8 = param_1[3];
    if ((uVar8 & 0xff0000) != 0x10000) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  cVar7 = (char)(uVar8 >> 8);
  if (cVar7 != '\x01') {
    if (cVar7 != '\x02') {
      if (cVar7 != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    FUN_1467914bd(param_1);
  }
LAB_1467919f4:
  uVar11 = param_1[1];
  lVar12 = DAT_14c80ad08 + (ulonglong)uVar11 * 8;
  if (param_2 == 0) {
    if ((lVar12 != 0 && uVar11 != 0) && (*(int *)(lVar12 + 0x30) != 0)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((param_1[2] & 3) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (7 < param_3) {
      uVar15 = param_3 - DAT_14c80ad08;
      if (DAT_14c758498 <= uVar15) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (DAT_14c80ad08 == param_3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    *param_1 = (uint)uVar15;
  }
  else {
    if ((uVar11 == 0) || (lVar12 == 0)) {
      lVar12 = FUN_1467912a3(param_1);
    }
    uVar9 = param_2 + 0x1f >> 5;
    uVar11 = *(uint *)(lVar12 + 0x24);
    if (uVar11 < uVar9) {
      uVar16 = uVar11 + 3 >> 2;
      uVar8 = *(uint *)(lVar12 + 0x28);
      if (uVar8 < uVar16) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar14 = uVar11 >> 2;
      pvVar10 = (void *)(DAT_14c80ad08 + (ulonglong)*(uint *)(lVar12 + 0x20) * 8);
      if ((ulonglong)*(uint *)(lVar12 + 0x20) == 0) {
        pvVar10 = (void *)0x0;
      }
      if (uVar8 <= uVar14) {
        lVar13 = (ulonglong)uVar8 * 2 + 2;
        pvVar6 = (void *)FUN_14678871b((ulonglong)uVar8 * 8 + 8,
                                       "pas_segregated_directory_segmented_bitvectors/spine",0);
        if (3 < uVar11 + 3) {
          memcpy(pvVar6,pvVar10,(ulonglong)(uVar16 * 4));
        }
        uVar17 = 0;
        memset((void *)((longlong)pvVar6 + (ulonglong)uVar16 * 4),0,(lVar13 - (ulonglong)uVar16) * 4
              );
        LOCK();
        UNLOCK();
        if (pvVar6 != (void *)0x0) {
          uVar5 = (longlong)pvVar6 - DAT_14c80ad08;
          if (DAT_14c758498 <= uVar5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if ((uVar5 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (uVar5 < 8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          uVar17 = (undefined4)(uVar5 >> 3);
        }
        *(undefined4 *)(lVar12 + 0x20) = uVar17;
        LOCK();
        UNLOCK();
        *(int *)(lVar12 + 0x28) = (int)lVar13;
        pvVar10 = pvVar6;
      }
      uVar8 = *(uint *)((longlong)pvVar10 + (ulonglong)uVar14 * 4);
      uVar5 = (ulonglong)uVar8;
      if (uVar14 == uVar16) {
        if ((uVar8 != 0) && (uVar5 << 3 != -DAT_14c80ad08)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if ((ulonglong)(uVar11 & 3) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar5 = 0;
        puVar4 = (undefined8 *)
                 FUN_1467886fa(0x20,4,"pas_segregated_directory_segmented_bitvectors/segment",0);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        LOCK();
        UNLOCK();
        if (puVar4 != (undefined8 *)0x0) {
          uVar5 = (longlong)puVar4 - DAT_14c80ad08;
          if (DAT_14c758498 <= uVar5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if ((uVar5 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (uVar5 < 8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          uVar5 = uVar5 >> 3;
        }
        *(int *)((longlong)pvVar10 + (ulonglong)uVar14 * 4) = (int)uVar5;
      }
      lVar13 = 0;
      if ((int)uVar5 != 0) {
        lVar13 = DAT_14c80ad08 + (uVar5 & 0xffffffff) * 8;
      }
      *(undefined8 *)(lVar13 + (ulonglong)(uVar11 & 3) * 8) = 0;
      LOCK();
      UNLOCK();
      uVar11 = *(int *)(lVar12 + 0x24) + 1;
      *(uint *)(lVar12 + 0x24) = uVar11;
      if (uVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar9 != uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    if (7 < param_3) {
      uVar15 = param_3 - DAT_14c80ad08;
      if (DAT_14c758498 <= uVar15) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (DAT_14c80ad08 == param_3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    uVar11 = *(uint *)(lVar12 + 0x30);
    pvVar10 = (void *)(DAT_14c80ad08 + (ulonglong)*(uint *)(lVar12 + 0x2c) * 8);
    if ((ulonglong)*(uint *)(lVar12 + 0x2c) == 0) {
      pvVar10 = (void *)0x0;
    }
    if (*(uint *)(lVar12 + 0x34) <= uVar11) {
      if (uVar11 != *(uint *)(lVar12 + 0x34)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar8 = uVar11 * 2 + 2;
      if (uVar8 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar9 = 0;
      pvVar6 = (void *)FUN_14678871b((ulonglong)uVar8 * 4,
                                     "pas_segregated_directory_view_vector/array",0);
      if ((ulonglong)*(uint *)(lVar12 + 0x30) != 0) {
        memcpy(pvVar6,pvVar10,(ulonglong)*(uint *)(lVar12 + 0x30) << 2);
        uVar9 = (ulonglong)*(uint *)(lVar12 + 0x30);
      }
      uVar17 = 0;
      memset((void *)((longlong)pvVar6 + uVar9 * 4),0,(uVar8 - uVar9) * 4);
      LOCK();
      UNLOCK();
      if (pvVar6 != (void *)0x0) {
        uVar9 = (longlong)pvVar6 - DAT_14c80ad08;
        if (DAT_14c758498 <= uVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if ((uVar9 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (uVar9 < 8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar17 = (undefined4)(uVar9 >> 3);
      }
      *(undefined4 *)(lVar12 + 0x2c) = uVar17;
      LOCK();
      UNLOCK();
      *(uint *)(lVar12 + 0x34) = uVar8;
      uVar11 = *(uint *)(lVar12 + 0x30);
      pvVar10 = pvVar6;
    }
    *(int *)((longlong)pvVar10 + (ulonglong)uVar11 * 4) = (int)uVar15;
    LOCK();
    UNLOCK();
    piVar1 = (int *)(lVar12 + 0x30);
    *piVar1 = *piVar1 + 1;
    if (*piVar1 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  if ((param_1[3] & 0xfe) != 4) {
    return;
  }
  if ((param_1[3] & 0xff0000) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  FUN_1467a78ab(**(longlong **)(param_1 + 6) + 0xd0,param_3 & 0xfffffffffffffff8);
  return;
}



// FUNCTION 146791e57 FUN_146791e57 body=172 status=ok
// SIG undefined FUN_146791e57(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_146791e57(longlong param_1,ulonglong param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  puVar2 = (undefined8 *)FUN_14678871b(0x20,"pas_segregated_exclusive_view",0);
  _DAT_14c80af70 = _DAT_14c80af70 + 1;
  *puVar2 = 0;
  if (param_1 != 0) {
    uVar4 = param_1 - DAT_14c80ad08;
    if (DAT_14c758498 <= uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((uVar4 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar4 < 8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar4 = uVar4 >> 3;
  }
  lVar3 = 8;
  do {
    *(char *)((longlong)puVar2 + lVar3) = (char)uVar4;
    uVar4 = uVar4 >> 8;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0xb);
  *(int *)((longlong)puVar2 + 0xc) = (int)param_2;
  if (param_2 >> 0x20 == 0) {
    *(undefined1 *)((longlong)puVar2 + 0xb) = 0;
    InitializeSRWLock((PSRWLOCK)(puVar2 + 2));
    InitializeSRWLock((PSRWLOCK)(puVar2 + 3));
    return puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 146791f03 FUN_146791f03 body=39 status=ok
// SIG undefined FUN_146791f03(void)

void FUN_146791f03(longlong param_1,longlong param_2)

{
  if (*(char *)(param_2 + 1) != '\0') {
    return;
  }
  FUN_146791740((ulonglong)
                ((uint)*(byte *)(param_1 + 10) * 0x80000 + (uint)*(ushort *)(param_1 + 8) * 8) +
                DAT_14c80ad08,*(undefined4 *)(param_1 + 0xc));
  return;
}



// FUNCTION 146791f2a FUN_146791f2a body=160 status=ok
// SIG undefined FUN_146791f2a(void)

void FUN_146791f2a(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar6 = DAT_14c80ad08;
  uVar7 = (ulonglong)
          ((uint)*(byte *)((longlong)param_1 + 10) * 0x80000 + (uint)*(ushort *)(param_1 + 1) * 8);
  lVar5 = *(longlong *)(&DAT_14c758500 + (longlong)*(char *)(uVar7 + 0xc + DAT_14c80ad08) * 8);
  uVar1 = *(ulonglong *)(lVar5 + 0x20);
  uVar2 = *(ulonglong *)(lVar5 + 0x28);
  lVar3 = *(longlong *)(lVar5 + 0x80);
  lVar5 = (**(code **)(lVar5 + 0x40))(*param_1);
  if (uVar1 <= uVar2) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar6 = FUN_146797eee(uVar7 + lVar6);
  if (7 < (ulonglong)*(uint *)(lVar6 + 0x10)) {
    memcpy((void *)(lVar5 + (lVar3 + 0x1fU >> 5) * 4 + 0x2c),
           (void *)((ulonglong)*(uint *)(lVar6 + 0x10) + DAT_14c80ad08),uVar1 / uVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



// FUNCTION 146791fca FUN_146791fca body=107 status=ok
// SIG undefined FUN_146791fca(void)

void FUN_146791fca(undefined8 *param_1,undefined8 *param_2,undefined **param_3,char *param_4)

{
  byte bVar1;
  code *pcVar2;
  
  if (param_4 == (char *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (*param_4 == '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  *param_1 = param_4;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  bVar1 = param_4[4];
  if ((bVar1 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (((bVar1 & 2) == 0) != (param_2 != (undefined8 *)0x0)) {
    if ((bool)((bVar1 & 2) >> 1) == (param_3 == &PTR_LOOP_149dfd458)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((bVar1 & 2) == 0) {
      param_1 = (undefined8 *)0x0;
    }
    if (param_1 == param_2) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



// FUNCTION 146792035 FUN_146792035 body=191 status=ok
// SIG undefined FUN_146792035(void)

longlong FUN_146792035(longlong param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = (ulonglong)*(uint *)(param_1 + 0x20) * 8 + DAT_14c80ad08;
  if (lVar4 == 0 || (ulonglong)*(uint *)(param_1 + 0x20) == 0) {
    if (param_3 == 0) {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    }
    lVar4 = (ulonglong)*(uint *)(param_1 + 0x20) * 8 + DAT_14c80ad08;
    if (lVar4 == 0 || (ulonglong)*(uint *)(param_1 + 0x20) == 0) {
      lVar4 = FUN_14677f59c(param_1,param_2);
      if (lVar4 == 0) {
        uVar2 = 0;
      }
      else {
        uVar3 = lVar4 - DAT_14c80ad08;
        if (DAT_14c758498 <= uVar3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if ((uVar3 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (uVar3 < 8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar2 = (undefined4)(uVar3 >> 3);
      }
      *(undefined4 *)(param_1 + 0x20) = uVar2;
    }
    if (param_3 == 0) {
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    }
  }
  return lVar4;
}



// FUNCTION 1467920f4 FUN_1467920f4 body=101 status=ok
// SIG undefined FUN_1467920f4(void)

ulonglong FUN_1467920f4(longlong *param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if ((*(byte *)(*param_1 + 4) & 2) == 0) {
    param_1 = (longlong *)0x0;
  }
  lVar2 = FUN_14678809a(param_1);
  uVar4 = 0xffffffffffffffff;
  if ((*(byte *)(param_2 + 0x208) & 1) != 0) {
    uVar4 = (ulonglong)*(byte *)(param_2 + 0x224);
  }
  uVar3 = (ulonglong)*(byte *)(param_2 + 0x54);
  if (uVar4 < *(byte *)(param_2 + 0x54)) {
    uVar3 = uVar4;
  }
  if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0xffffffffffffffff) {
    return (lVar2 + (1L << ((byte)uVar3 & 0x3f))) - 1U >> ((byte)uVar3 & 0x3f);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 146792159 FUN_146792159 body=191 status=ok
// SIG undefined FUN_146792159(void)

longlong FUN_146792159(longlong param_1,ulonglong param_2,uint *param_3,undefined8 param_4)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_3 == (uint *)0x0) {
    uVar2 = FUN_1467920f4(param_1,param_4);
  }
  else {
    uVar2 = (ulonglong)*param_3;
    if (uVar2 == 0xffffffff) goto LAB_1467921a2;
  }
  if (((uVar2 == param_2) &&
      (lVar3 = (ulonglong)*(uint *)(param_1 + 0x18) * 8 + DAT_14c80ad08,
      lVar3 != 0 && (ulonglong)*(uint *)(param_1 + 0x18) != 0)) && (*(char *)(lVar3 + 0x10) != '\0')
     ) {
    return lVar3;
  }
LAB_1467921a2:
  if (param_2 < *(uint *)(param_1 + 0x24)) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (((ulonglong)*(uint *)(param_1 + 0x1c) != 0) &&
       ((ulonglong)*(uint *)(param_1 + 0x1c) << 3 != -DAT_14c80ad08)) {
      lVar3 = 0;
      puVar1 = (uint *)FUN_1467922f6(param_1,param_2,0,1);
      if ((puVar1 != (uint *)0x0) &&
         (lVar3 = (ulonglong)*puVar1 * 8 + DAT_14c80ad08, (ulonglong)*puVar1 == 0)) {
        lVar3 = 0;
      }
    }
  }
  return lVar3;
}



// FUNCTION 146792218 FUN_146792218 body=222 status=ok
// SIG undefined FUN_146792218(void)

longlong FUN_146792218(longlong param_1,ulonglong param_2,int param_3,int param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  puVar5 = (ulonglong *)((ulonglong)*(uint *)(param_1 + 0x1c) * 8 + DAT_14c80ad08);
  if (puVar5 == (ulonglong *)0x0 || (ulonglong)*(uint *)(param_1 + 0x1c) == 0) {
    return 0;
  }
  if ((param_4 != 1) && ((*puVar5 & 1) == 0)) {
    uVar6 = *(uint *)((longlong)puVar5 + 0xc);
    lVar3 = (ulonglong)(uint)puVar5[1] * 8 + DAT_14c80ad08;
    if ((ulonglong)(uint)puVar5[1] == 0) {
      lVar3 = 0;
    }
    if (uVar6 == 0) {
      lVar2 = 0;
    }
    else {
      uVar8 = 0;
      lVar4 = 0;
      do {
        uVar7 = uVar6 + uVar8 >> 1;
        uVar9 = (ulonglong)*(uint *)(lVar3 + 8 + (ulonglong)uVar7 * 0x10);
        if (uVar9 == 0) goto LAB_1467922d4;
        lVar2 = (ulonglong)uVar7 * 0x10 + lVar3;
        if (uVar9 <= param_2) {
          if (param_2 <= *(uint *)(lVar2 + 0xc)) goto LAB_1467922d6;
          uVar8 = uVar7 + 1;
          lVar2 = lVar4;
          uVar7 = uVar6;
        }
        uVar6 = uVar7;
        lVar4 = lVar2;
      } while (uVar8 < uVar6);
    }
    if (param_3 == 0) {
LAB_1467922d4:
      lVar2 = 0;
    }
    else if (param_3 != 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
LAB_1467922d6:
    if (*puVar5 == *puVar5) {
      return lVar2;
    }
  }
  lVar3 = FUN_1467922f6();
  return lVar3;
}



// FUNCTION 1467922f6 FUN_1467922f6 body=206 status=ok
// SIG undefined FUN_1467922f6(void)

longlong FUN_1467922f6(longlong param_1,ulonglong param_2,int param_3,int param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  if (param_4 == 0) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  }
  lVar9 = DAT_14c80ad08 + (ulonglong)*(uint *)(param_1 + 0x1c) * 8;
  if ((ulonglong)*(uint *)(param_1 + 0x1c) == 0) {
    lVar9 = 0;
  }
  lVar2 = DAT_14c80ad08 + (ulonglong)*(uint *)(lVar9 + 8) * 8;
  if ((ulonglong)*(uint *)(lVar9 + 8) == 0) {
    lVar2 = 0;
  }
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (*(uint *)(lVar9 + 0xc) == 0) {
    lVar9 = 0;
  }
  else {
    uVar7 = 0;
    lVar3 = 0;
    uVar4 = (ulonglong)*(uint *)(lVar9 + 0xc);
    do {
      uVar6 = (int)uVar4 + uVar7 >> 1;
      uVar5 = (ulonglong)uVar6;
      uVar8 = (ulonglong)*(uint *)(lVar2 + 8 + uVar5 * 0x10);
      if (uVar8 == 0) goto LAB_1467923a1;
      lVar9 = uVar5 * 0x10 + lVar2;
      if (uVar8 <= param_2) {
        if (param_2 <= *(uint *)(lVar9 + 0xc)) goto LAB_1467923a4;
        uVar7 = uVar6 + 1;
        lVar9 = lVar3;
        uVar5 = uVar4;
      }
      lVar3 = lVar9;
      uVar4 = uVar5;
    } while (uVar7 < (uint)uVar5);
  }
  if (param_3 == 0) {
LAB_1467923a1:
    lVar9 = 0;
  }
  else if (param_3 != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
LAB_1467923a4:
  if (param_4 == 0) {
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  }
  return lVar9;
}



// FUNCTION 1467923c4 FUN_1467923c4 body=26 status=ok
// SIG undefined FUN_1467923c4(void)

undefined4 FUN_1467923c4(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_146792218();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 4);
  }
  return uVar1;
}



// FUNCTION 1467923de FUN_1467923de body=657 status=ok
// SIG undefined FUN_1467923de(void)

uint FUN_1467923de(longlong *param_1,longlong param_2,ulonglong param_3,int param_4,
                  undefined **param_5,uint *param_6)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  byte bVar4;
  BOOLEAN BVar5;
  ulonglong uVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar5 != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar1 = *(uint *)(param_2 + 0x20);
  uVar6 = FUN_14679404a(param_1,param_5);
  if ((uVar1 & 0x7ffffff) < uVar6) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  FUN_14679266f(param_1,param_5,param_6);
  plVar11 = (longlong *)0x0;
  if ((*(byte *)(*param_1 + 4) & 2) != 0) {
    plVar11 = param_1;
  }
  if ((*(uint *)(param_2 + 0x20) & 0x7ffffff) < param_3) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (param_5 == &PTR_LOOP_149dfd458) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar6 = 0xffffffffffffffff;
  if (((ulonglong)param_5[0x41] & 1) != 0) {
    uVar6 = (ulonglong)*(byte *)((longlong)param_5 + 0x224);
  }
  uVar10 = (ulonglong)*(byte *)((longlong)param_5 + 0x54);
  if (uVar6 < *(byte *)((longlong)param_5 + 0x54)) {
    uVar10 = uVar6;
  }
  if (((ulonglong)param_5[7] & 1) == 0) {
    uVar10 = uVar6;
  }
  if (uVar10 == 0xffffffffffffffff) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar6 = (param_3 + (1L << ((byte)uVar10 & 0x3f))) - 1 >> ((byte)uVar10 & 0x3f);
  uVar1 = *(uint *)(param_2 + 0x2c);
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (uVar1 == 0xffffffff) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (param_6 == (uint *)0x0) {
    uVar10 = FUN_1467920f4(param_1,param_5);
  }
  else {
    uVar10 = (ulonglong)*param_6;
    if (uVar10 == 0xffffffff) {
      bVar4 = 1;
      goto LAB_146792524;
    }
  }
  bVar4 = 1;
  if (((uVar10 == uVar6) && (plVar11 != (longlong *)0x0)) && (lVar9 = plVar11[8], lVar9 != 0)) {
    if (*(uint *)(lVar9 + 0x10) != uVar1 && *(uint *)(lVar9 + 0x10) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *(uint *)(lVar9 + 0x10) = uVar1;
    bVar4 = 0;
  }
LAB_146792524:
  uVar10 = (ulonglong)*(uint *)((longlong)param_1 + 0x24);
  if (uVar10 == 0) {
    uVar10 = (ulonglong)*(byte *)((longlong)param_5 + 0x224);
    if (((ulonglong)param_5[0x41] & 1) == 0) {
      uVar10 = 0xffffffffffffffff;
    }
    uVar8 = (ulonglong)*(byte *)((longlong)param_5 + 0x54);
    if (uVar10 < *(byte *)((longlong)param_5 + 0x54)) {
      uVar8 = uVar10;
    }
    if (((ulonglong)param_5[7] & 1) == 0) {
      uVar8 = uVar10;
    }
    if (uVar8 == 0xffffffffffffffff) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar10 = ((ulonglong)(param_5[0x80] + ~(-1L << ((byte)uVar8 & 0x3f))) >> ((byte)uVar8 & 0x3f)) +
             1;
  }
  if (uVar6 < uVar10) {
    if ((!(bool)(param_4 == 1 | bVar4)) && (*(uint *)((longlong)param_1 + 0x24) == 0)) {
      return uVar1;
    }
    FUN_1467927d0(param_1,param_5);
    if (*(uint *)((longlong)param_1 + 0x24) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar2 = *(uint *)(param_1[1] + uVar6 * 4);
    if (uVar2 != uVar1 && uVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    puVar7 = (uint *)(param_1[1] + uVar6 * 4);
  }
  else {
    if ((((ulonglong)*(uint *)((longlong)param_1 + 0x1c) == 0) ||
        ((ulonglong)*(uint *)((longlong)param_1 + 0x1c) << 3 == -DAT_14c80ad08)) ||
       (puVar7 = (uint *)FUN_1467922f6(param_1,uVar6,0,1), puVar7 == (uint *)0x0)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar9 = (ulonglong)*puVar7 * 8 + DAT_14c80ad08;
    if ((ulonglong)*puVar7 == 0) {
      lVar9 = 0;
    }
    if (lVar9 != param_2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    puVar7 = puVar7 + 1;
  }
  *puVar7 = uVar1;
  return uVar1;
}



// FUNCTION 14679266f FUN_14679266f body=353 status=ok
// SIG undefined FUN_14679266f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14679266f(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (((*(byte *)(*param_1 + 4) & 1) == 0) &&
     (uVar8 = (ulonglong)*(uint *)((longlong)param_1 + 0x24), uVar8 != 0)) {
    if (param_1[1] == 0) {
      bVar5 = 0;
    }
    else {
      bVar5 = FUN_1467889d8(param_1[1],uVar8 * 4);
    }
    if (param_1[2] != 0) {
      bVar6 = FUN_1467889d8(param_1[2],uVar8 << 2);
      bVar5 = bVar5 | bVar6;
    }
  }
  else {
    bVar5 = 0;
  }
  lVar1 = DAT_14c80ad08 + (ulonglong)*(uint *)((longlong)param_1 + 0x1c) * 8;
  if (lVar1 != 0 && (ulonglong)*(uint *)((longlong)param_1 + 0x1c) != 0) {
    lVar7 = DAT_14c80ad08 + (ulonglong)*(uint *)(lVar1 + 8) * 8;
    if ((ulonglong)*(uint *)(lVar1 + 8) == 0) {
      lVar7 = 0;
    }
    if ((ulonglong)*(uint *)(lVar1 + 0xc) != 0) {
      if (lVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      bVar6 = FUN_1467808f8(lVar7,(ulonglong)*(uint *)(lVar1 + 0xc) << 4);
      if ((bVar5 | bVar6) != 1) {
        return;
      }
      goto LAB_146792759;
    }
  }
  if (bVar5 == 0) {
    return;
  }
LAB_146792759:
  _DAT_14c80af78 = _DAT_14c80af78 + 1;
  if (((ulonglong)*(uint *)((longlong)param_1 + 0x1c) == 0) ||
     (puVar2 = (ulonglong *)(DAT_14c80ad08 + (ulonglong)*(uint *)((longlong)param_1 + 0x1c) * 8),
     puVar2 == (ulonglong *)0x0)) {
    FUN_1467943d1(param_1,param_2,param_3,param_1);
  }
  else {
    if ((*puVar2 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *puVar2 = *puVar2 | 1;
    LOCK();
    UNLOCK();
    FUN_1467943d1(param_1,param_2,param_3,param_1);
    LOCK();
    UNLOCK();
    if ((*puVar2 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *puVar2 = *puVar2 + 1;
  }
  return;
}



// FUNCTION 1467927d0 FUN_1467927d0 body=228 status=ok
// SIG undefined FUN_1467927d0(void)

void FUN_1467927d0(longlong *param_1,undefined **param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)param_1 + 0x24) == 0) {
    if ((*(byte *)(*param_1 + 4) & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (param_2 == &PTR_LOOP_149dfd458) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar2 = (ulonglong)*(byte *)((longlong)param_2 + 0x224);
    if (((ulonglong)param_2[0x41] & 1) == 0) {
      uVar2 = 0xffffffffffffffff;
    }
    uVar4 = (ulonglong)*(byte *)((longlong)param_2 + 0x54);
    if (uVar2 < *(byte *)((longlong)param_2 + 0x54)) {
      uVar4 = uVar2;
    }
    if (((ulonglong)param_2[7] & 1) == 0) {
      uVar4 = uVar2;
    }
    if (uVar4 == 0xffffffffffffffff) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar2 = (ulonglong)(param_2[0x80] + ~(-1L << ((byte)uVar4 & 0x3f))) >> ((byte)uVar4 & 0x3f);
    lVar5 = (uVar2 + 1) * 4;
    lVar3 = FUN_14678887d(lVar5,4,"pas_segregated_heap/index_to_size_directory");
    lVar5 = FUN_14678887d(lVar5,4,"pas_segregated_heap/index_to_allocator_index");
    uVar2 = uVar2 + 1;
    if (uVar2 != 0) {
      uVar4 = 0;
      do {
        *(undefined4 *)(lVar3 + uVar4 * 4) = 0;
        *(undefined4 *)(lVar5 + uVar4 * 4) = 0;
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < uVar2);
    }
    LOCK();
    UNLOCK();
    *(int *)((longlong)param_1 + 0x24) = (int)uVar2;
    param_1[2] = lVar3;
    param_1[1] = lVar5;
  }
  return;
}



// FUNCTION 1467928b4 FUN_1467928b4 body=6038 status=ok
// SIG undefined FUN_1467928b4(void)

/* WARNING: Type propagation algorithm not settling */

longlong FUN_1467928b4(longlong *param_1,ulonglong param_2,ulonglong param_3,int param_4,
                      undefined **param_5,uint *param_6,undefined4 param_7)

{
  undefined4 *_Src;
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  uint *puVar11;
  void *_Dst;
  byte bVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  char *pcVar16;
  undefined *puVar17;
  uint *puVar18;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  void *_Src_00;
  longlong *plVar25;
  undefined **ppuVar26;
  int iVar27;
  int iVar28;
  ulonglong uVar29;
  undefined **ppuVar30;
  undefined *puVar31;
  int iVar32;
  longlong lVar33;
  int iVar34;
  ulonglong uVar35;
  bool bVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  double dVar39;
  undefined1 auVar40 [16];
  int iVar41;
  double dVar42;
  undefined1 auVar43 [16];
  
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  FUN_146788169(param_5);
  FUN_14679266f(param_1,param_5,param_6);
  plVar25 = (longlong *)0x0;
  if ((*(byte *)(*param_1 + 4) & 2) != 0) {
    plVar25 = param_1;
  }
  uVar7 = FUN_1467880ce(plVar25);
  if (param_3 < uVar7) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar35 = 0xffffffffffffffff;
  if (((ulonglong)param_5[0x41] & 1) != 0) {
    uVar35 = (ulonglong)*(byte *)((longlong)param_5 + 0x224);
  }
  uVar8 = (ulonglong)*(byte *)((longlong)param_5 + 0x54);
  if (uVar35 < *(byte *)((longlong)param_5 + 0x54)) {
    uVar8 = uVar35;
  }
  if (((ulonglong)param_5[7] & 1) == 0) {
    uVar8 = uVar35;
  }
  if (uVar8 == 0xffffffffffffffff) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  bVar12 = (byte)uVar8;
  uVar8 = ((1L << (bVar12 & 0x3f)) + param_2) - 1 >> (bVar12 & 0x3f);
  uVar35 = uVar8 << (bVar12 & 0x3f);
  if (uVar35 < param_2) {
    if (uVar35 == 0) {
      return 0;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar9 = FUN_14679404a(param_1,param_5);
  if (uVar35 < uVar9) {
    uVar35 = uVar9;
  }
  uVar9 = 0xffffffffffffffff;
  if (((ulonglong)param_5[0x41] & 1) != 0) {
    uVar9 = (ulonglong)*(byte *)((longlong)param_5 + 0x224);
  }
  uVar29 = (ulonglong)*(byte *)((longlong)param_5 + 0x54);
  if (uVar9 < *(byte *)((longlong)param_5 + 0x54)) {
    uVar29 = uVar9;
  }
  if (((ulonglong)param_5[7] & 1) == 0) {
    uVar29 = uVar9;
  }
  if (uVar29 == 0xffffffffffffffff) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar29 = 1L << ((byte)uVar29 & 0x3f);
  uVar9 = FUN_14679404a(param_1,param_5);
  if (uVar9 < uVar29) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if ((uVar29 - 1 & uVar35) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if ((int)POPCOUNT(uVar9) != 1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar35 = -uVar9 & (uVar35 + uVar9) - 1;
  if (uVar9 < param_3) {
    uVar9 = param_3;
  }
  if (uVar7 < uVar9) {
    if ((int)POPCOUNT(uVar9) != 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if ((uVar9 - 1 & uVar35) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  else {
    if ((int)POPCOUNT(uVar9) != 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar35 = -uVar9 & (uVar9 + uVar35) - 1;
  }
  if (uVar35 < param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if ((uVar35 | uVar9) >> 0x20 != 0) {
    return 0;
  }
  iVar6 = 2;
  do {
    ppuVar30 = param_5 + 0x41;
    if ((iVar6 != 0) && (ppuVar30 = param_5 + 0x6b, iVar6 != 2)) {
      ppuVar30 = param_5 + 0x56;
    }
    if ((((ulonglong)*ppuVar30 & 1) != 0) &&
       (uVar7 = (ulonglong)*(uint *)(*param_1 + 0x18), uVar7 != 0)) {
      iVar14 = *(int *)(ppuVar30 + 0xd);
      bVar12 = DAT_14c758440;
      if ((iVar14 != 0) &&
         ((bVar12 = DAT_14c758442, iVar14 != 2 && (bVar12 = DAT_14c758441, iVar14 != 1)))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((bVar12 & 1) != 0) {
        uVar29 = ((ulonglong)ppuVar30[7] >> (*(byte *)((longlong)ppuVar30 + 0x1c) & 0x3f)) <<
                 (*(byte *)((longlong)ppuVar30 + 0x1c) & 0x3f);
        if (uVar7 < uVar29) {
          uVar29 = uVar7;
        }
        break;
      }
    }
    bVar36 = iVar6 != 0;
    iVar6 = iVar6 + -1;
    uVar29 = 0;
  } while (bVar36);
  iVar6 = -1;
  do {
    lVar24 = 0x120;
    if (iVar6 == 0) {
      lVar24 = 0x38;
    }
    if (((*(byte *)((longlong)param_5 + lVar24) & 1) != 0) &&
       (uVar7 = (ulonglong)*(uint *)(*param_1 + 0x14), uVar7 != 0)) {
      iVar14 = *(int *)((longlong)param_5 + lVar24 + 0x68);
      bVar12 = DAT_14c7584f0;
      if ((iVar14 != 0) && (bVar12 = DAT_14c7584f1, iVar14 != 1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((bVar12 & 1) != 0) {
        bVar12 = *(byte *)((longlong)param_5 + lVar24 + 0x1c);
        uVar20 = (*(ulonglong *)((longlong)param_5 + lVar24 + 0x38) >> (bVar12 & 0x3f)) <<
                 (bVar12 & 0x3f);
        if (uVar7 < uVar20) {
          uVar20 = uVar7;
        }
        break;
      }
    }
    iVar6 = iVar6 + 1;
    uVar20 = 0;
  } while (iVar6 != 1);
  if (uVar29 < uVar20) {
    uVar29 = uVar20;
  }
  if (uVar29 < uVar35) {
    return 0;
  }
  if (param_4 == 1) {
LAB_146792c08:
    uVar7 = (ulonglong)*(uint *)((longlong)param_1 + 0x24);
    if (uVar7 == 0) {
      uVar7 = (ulonglong)*(byte *)((longlong)param_5 + 0x224);
      if (((ulonglong)param_5[0x41] & 1) == 0) {
        uVar7 = 0xffffffffffffffff;
      }
      uVar29 = (ulonglong)*(byte *)((longlong)param_5 + 0x54);
      if (uVar7 < *(byte *)((longlong)param_5 + 0x54)) {
        uVar29 = uVar7;
      }
      if (((ulonglong)param_5[7] & 1) == 0) {
        uVar29 = uVar7;
      }
      if (uVar29 == 0xffffffffffffffff) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar7 = ((ulonglong)(param_5[0x80] + ~(-1L << ((byte)uVar29 & 0x3f))) >> ((byte)uVar29 & 0x3f)
              ) + 1;
    }
    if (uVar8 < uVar7) {
      FUN_1467927d0(param_1,param_5);
    }
  }
  else if (param_6 == (uint *)0x0) {
    uVar7 = FUN_1467920f4(param_1,param_5);
LAB_146792d3c:
    if (uVar7 != uVar8) goto LAB_146792c08;
  }
  else {
    uVar7 = (ulonglong)*param_6;
    if (uVar7 != 0xffffffff) goto LAB_146792d3c;
  }
  uVar13 = (uint)uVar8;
  if (((((uVar8 < *(uint *)((longlong)param_1 + 0x24)) && (param_1[2] != 0)) &&
       (uVar7 = (ulonglong)*(uint *)(param_1[2] + uVar8 * 4), uVar7 != 0)) &&
      (lVar24 = uVar7 * 8 + DAT_14c80ad08, lVar24 != 0)) ||
     (lVar24 = FUN_146792159(param_1,uVar8,param_6,param_5), lVar24 != 0)) {
    bVar12 = (byte)(*(uint *)(lVar24 + 0x20) >> 0x1b);
    uVar5 = *(uint *)(lVar24 + 0x20) & 0x7ffffff;
    uVar7 = (ulonglong)uVar5;
    if (((~(-1 << bVar12) & uVar5) != 0) && (*(char *)(lVar24 + 0xc) != '\0')) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (uVar9 <= (ulonglong)(1L << bVar12)) {
      return lVar24;
    }
    if (*(char *)(lVar24 + 0xc) == '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (uVar7 < uVar35) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar29 = 0xffffffffffffffff;
    if (((ulonglong)param_5[0x41] & 1) != 0) {
      uVar29 = (ulonglong)*(byte *)((longlong)param_5 + 0x224);
    }
    uVar20 = (ulonglong)*(byte *)((longlong)param_5 + 0x54);
    if (uVar29 < *(byte *)((longlong)param_5 + 0x54)) {
      uVar20 = uVar29;
    }
    if (((ulonglong)param_5[7] & 1) == 0) {
      uVar20 = uVar29;
    }
    if (uVar20 == 0xffffffffffffffff) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    bVar12 = (byte)uVar20;
    if (uVar7 < uVar8 << (bVar12 & 0x3f)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar7 = (uVar7 + (1L << (bVar12 & 0x3f))) - 1 >> (bVar12 & 0x3f);
    if (uVar7 < uVar8) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (uVar7 == uVar8) {
      do {
        uVar5 = *(uint *)(lVar24 + 0x24);
        LOCK();
        bVar36 = uVar5 == *(uint *)(lVar24 + 0x24);
        if (bVar36) {
          *(uint *)(lVar24 + 0x24) = uVar5 | 0xffffff80;
        }
        UNLOCK();
      } while (!bVar36);
    }
    else {
      if (uVar8 == 0xffffffffffffffff) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar29 = uVar8 + 1;
      if (uVar7 < uVar29) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (uVar29 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (0xffffff7f < *(uint *)(lVar24 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar23 = (uint)uVar29;
      uVar5 = 0xffffffff;
      if ((uVar23 & 0x1ffffff) != 0x1ffffff) {
        uVar5 = uVar23 & 0x1ffffff;
      }
      if (uVar5 != uVar23) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      do {
        uVar5 = *(uint *)(lVar24 + 0x24);
        LOCK();
        bVar36 = uVar5 == *(uint *)(lVar24 + 0x24);
        if (bVar36) {
          *(uint *)(lVar24 + 0x24) = uVar5 & 0x7f | uVar23 << 7;
        }
        UNLOCK();
      } while (!bVar36);
    }
    uVar7 = (ulonglong)*(uint *)((longlong)param_1 + 0x24);
    if (uVar7 != 0) {
      lVar15 = param_1[1];
      lVar21 = param_1[2];
      if (uVar8 < uVar7) {
        uVar29 = (ulonglong)*(uint *)(lVar21 + uVar8 * 4);
        lVar33 = uVar29 * 8 + DAT_14c80ad08;
        if (uVar29 == 0) {
          lVar33 = 0;
        }
        if (lVar33 != lVar24) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
      }
      else if (uVar8 == 0xffffffffffffffff) goto LAB_146792ef4;
      if (uVar8 + 1 < uVar7) {
        uVar7 = uVar8 + 1;
      }
      do {
        uVar29 = (ulonglong)*(uint *)(lVar21 + -4 + uVar7 * 4);
        lVar33 = uVar29 * 8 + DAT_14c80ad08;
        if (uVar29 == 0) {
          lVar33 = 0;
        }
        if (lVar33 != lVar24) break;
        *(undefined4 *)(lVar21 + -4 + uVar7 * 4) = 0;
        if (param_5 != &PTR_LOOP_149dfd458) {
          *(undefined4 *)(lVar15 + -4 + uVar7 * 4) = 0;
        }
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
LAB_146792ef4:
    if ((((ulonglong)*(uint *)((longlong)param_1 + 0x1c) != 0) &&
        ((ulonglong)*(uint *)((longlong)param_1 + 0x1c) << 3 != -DAT_14c80ad08)) &&
       (lVar15 = FUN_1467922f6(param_1,uVar8,0,1), lVar15 != 0)) {
      if (uVar8 < *(uint *)(lVar15 + 8)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (*(uint *)(lVar15 + 0xc) < uVar8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (((ulonglong)*(uint *)((longlong)param_1 + 0x1c) == 0) ||
         (puVar10 = (ulonglong *)
                    ((ulonglong)*(uint *)((longlong)param_1 + 0x1c) * 8 + DAT_14c80ad08),
         puVar10 == (ulonglong *)0x0)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((*puVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      *puVar10 = *puVar10 | 1;
      LOCK();
      UNLOCK();
      if (uVar8 < *(uint *)(lVar15 + 0xc)) {
        *(uint *)(lVar15 + 8) = uVar13 + 1;
      }
      else {
        if (uVar8 != *(uint *)(lVar15 + 0xc)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar21 = (ulonglong)(uint)puVar10[1] * 8 + DAT_14c80ad08;
        if ((ulonglong)(uint)puVar10[1] == 0) {
          lVar21 = 0;
        }
        lVar15 = lVar15 - lVar21;
        if ((ulonglong)*(uint *)((longlong)puVar10 + 0xc) <= (ulonglong)(lVar15 >> 4)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        memmove((void *)(lVar21 + lVar15),(void *)(lVar21 + lVar15 + 0x10),
                (~(lVar15 >> 4) + (ulonglong)*(uint *)((longlong)puVar10 + 0xc)) * 0x10);
        *(int *)((longlong)puVar10 + 0xc) = *(int *)((longlong)puVar10 + 0xc) + -1;
      }
      FUN_146794150(param_1);
      LOCK();
      UNLOCK();
      if ((*puVar10 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      *puVar10 = *puVar10 + 1;
    }
    lVar15 = (ulonglong)*(uint *)(param_1 + 3) * 8 + DAT_14c80ad08;
    if ((ulonglong)*(uint *)(param_1 + 3) == 0) {
      lVar15 = 0;
    }
    if ((lVar15 == lVar24) && (*(char *)(lVar24 + 0x10) == '\x01')) {
      if (param_6 == (uint *)0x0) {
        uVar7 = FUN_1467920f4(param_1,param_5);
      }
      else {
        uVar7 = (ulonglong)*param_6;
        if (uVar7 == 0xffffffff) goto LAB_146792f34;
      }
      if (((uVar7 <= uVar8) && (*(undefined1 *)(lVar24 + 0x10) = 0, plVar25 != (longlong *)0x0)) &&
         (plVar25[8] != 0)) {
        *(undefined4 *)(plVar25[8] + 0x10) = 0;
      }
    }
  }
LAB_146792f34:
  lVar24 = DAT_14c80ad08;
  if (uVar8 < *(uint *)((longlong)param_1 + 0x24)) {
    uVar7 = uVar8;
    do {
      uVar5 = *(uint *)(param_1[2] + uVar7 * 4);
      lVar15 = (ulonglong)uVar5 * 8 + DAT_14c80ad08;
      if (lVar15 != 0 && uVar5 != 0) {
        uVar5 = *(uint *)(param_1 + 3);
        if (param_6 == (uint *)0x0) {
          uVar29 = FUN_1467920f4(param_1,param_5);
        }
        else {
          uVar29 = (ulonglong)*param_6;
          if (uVar29 == 0xffffffff) goto LAB_14679301f;
        }
        if (((uVar7 <= uVar29) || (uVar5 == 0)) ||
           (lVar24 = lVar24 + (ulonglong)uVar5 * 8, lVar24 == 0)) goto LAB_14679301f;
        goto LAB_146792f9e;
      }
      uVar7 = uVar7 + 1;
    } while (*(uint *)((longlong)param_1 + 0x24) != uVar7);
  }
  if ((ulonglong)*(uint *)(param_1 + 3) == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = 0;
    lVar24 = (ulonglong)*(uint *)(param_1 + 3) * 8 + DAT_14c80ad08;
    if (lVar24 != 0) {
LAB_146792f9e:
      if ((*(char *)(lVar24 + 0x10) == '\x01') && (uVar35 <= (*(uint *)(lVar24 + 0x20) & 0x7ffffff))
         ) {
        lVar15 = lVar24;
      }
    }
  }
LAB_14679301f:
  puVar11 = (uint *)(param_1 + 3);
  if ((((ulonglong)*(uint *)((longlong)param_1 + 0x1c) != 0) &&
      ((ulonglong)*(uint *)((longlong)param_1 + 0x1c) << 3 != -DAT_14c80ad08)) &&
     (puVar18 = (uint *)FUN_1467922f6(param_1,uVar8,1,1), puVar18 != (uint *)0x0)) {
    lVar24 = (ulonglong)*puVar18 * 8 + DAT_14c80ad08;
    if ((ulonglong)*puVar18 == 0) {
      lVar24 = 0;
    }
    if ((lVar15 == 0) ||
       ((*(uint *)(lVar24 + 0x20) & 0x7ffffff) < (*(uint *)(lVar15 + 0x20) & 0x7ffffff))) {
      lVar15 = lVar24;
    }
  }
  uVar5 = *(uint *)(*param_1 + 0x14);
  if (uVar5 < uVar35) {
LAB_146793052:
    if (*(uint *)(*param_1 + 0x18) < uVar35) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar5 = FUN_14677f627(uVar35,param_5);
    if (param_5 == &PTR_LOOP_149dfd458) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    ppuVar30 = (undefined **)0x0;
    dVar42 = (double)uVar5;
    bVar36 = true;
  }
  else {
    uVar37 = 0;
    uVar38 = 0x7ff00000;
    iVar6 = -1;
    ppuVar30 = (undefined **)0x0;
    do {
      ppuVar26 = param_5 + 0x24;
      if (iVar6 == 0) {
        ppuVar26 = param_5 + 7;
      }
      if ((uVar5 != 0) && (((ulonglong)*ppuVar26 & 1) != 0)) {
        uVar23 = *(uint *)(ppuVar26 + 0xd);
        pcVar16 = (char *)&DAT_14c7584f0;
        if ((ulonglong)uVar23 != 0) {
          if (uVar23 != 1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pcVar16 = (char *)&DAT_14c7584f1;
        }
        if (*pcVar16 == '\x01') {
          iVar14 = (int)(1L << (*(byte *)((longlong)ppuVar26 + 0x1c) & 0x3f));
          uVar22 = -iVar14 & (int)uVar35 + -1 + iVar14;
          uVar7 = -1L << (*(byte *)((longlong)ppuVar26 + 0x1c) & 0x3f);
          puVar31 = (undefined *)(ulonglong)uVar22;
          if (puVar31 <= (undefined *)(uVar7 & (ulonglong)ppuVar26[7])) {
            if ((uVar22 & ~(uint)uVar7) != 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            if (ppuVar26[7] < puVar31) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            puVar1 = ppuVar26[4];
            puVar2 = ppuVar26[0x12];
            auVar43._8_4_ = (int)((ulonglong)puVar1 >> 0x20);
            auVar43._0_8_ = puVar1;
            auVar43._12_4_ = 0x45300000;
            iVar41 = (int)puVar1;
            puVar17 = ppuVar26[0x14] + (longlong)puVar2;
            iVar14 = (int)puVar17 - (int)((ulonglong)puVar17 % (ulonglong)puVar31);
            iVar34 = (int)((ulonglong)(puVar31 + (longlong)puVar2 + -1) % (ulonglong)puVar31);
            iVar32 = (int)(puVar31 + (longlong)puVar2 + -1);
            iVar27 = ((int)((ulonglong)(puVar31 + (longlong)puVar1 + (-1 - (longlong)puVar17)) %
                           (ulonglong)puVar31) -
                     (int)(puVar31 + (longlong)puVar1 + (-1 - (longlong)puVar17))) + iVar41;
            iVar28 = ((int)((ulonglong)((longlong)puVar1 - (longlong)puVar2) % (ulonglong)puVar31) -
                     (int)((longlong)puVar1 - (longlong)puVar2)) + iVar41;
            iVar19 = iVar32 - iVar34;
            if ((uint)((iVar34 - iVar32) + iVar14) < (uint)(iVar27 - iVar28)) {
              iVar19 = iVar28;
              iVar14 = iVar27;
            }
            dVar42 = ((((double)CONCAT44(0x43300000,iVar41) - 4503599627370496.0) +
                      (auVar43._8_8_ - 1.9342813113834067e+25)) /
                     (double)((ulonglong)(uint)(iVar14 - iVar19) / (ulonglong)uVar22)) *
                     (double)ppuVar26[0xe] * *(double *)(&DAT_14c7584e0 + (ulonglong)uVar23 * 8);
            if (dVar42 <= (double)CONCAT44(uVar38,uVar37) &&
                (double)CONCAT44(uVar38,uVar37) != dVar42) {
              ppuVar30 = ppuVar26;
            }
            if ((double)CONCAT44(uVar38,uVar37) <= dVar42) {
              dVar42 = (double)CONCAT44(uVar38,uVar37);
            }
            uVar37 = SUB84(dVar42,0);
            uVar38 = (undefined4)((ulonglong)dVar42 >> 0x20);
          }
        }
      }
      dVar42 = (double)CONCAT44(uVar38,uVar37);
      iVar6 = iVar6 + 1;
    } while (iVar6 != 1);
    if (ppuVar30 == (undefined **)0x0) goto LAB_146793052;
    if ((double)CONCAT44(uVar38,uVar37) < 0.0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if ((double)CONCAT44(uVar38,uVar37) == INFINITY) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    bVar36 = false;
  }
  if ((lVar15 == 0) ||
     (uVar5 = *(uint *)(lVar15 + 0x20), (ulonglong)(1L << (byte)(uVar5 >> 0x1b)) < uVar9)) {
LAB_1467930a8:
    if (bVar36) {
      if (param_5 == &PTR_LOOP_149dfd458) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar7 = (longlong)(dVar42 - 9.223372036854776e+18) & (longlong)dVar42 >> 0x3f |
              (longlong)dVar42;
    }
    else {
      uVar7 = 1L << (*(byte *)((longlong)ppuVar30 + 0x1c) & 0x3f);
      if (uVar7 < uVar35) {
        uVar7 = uVar35;
      }
      uVar7 = FUN_1467941ce(uVar7,uVar9,ppuVar30);
      uVar35 = 1L << (*(byte *)((longlong)ppuVar30 + 0x1c) & 0x3f);
      if (uVar9 <= uVar35) {
        uVar9 = uVar35;
      }
    }
    if (uVar7 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (uVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (*(int *)(*param_1 + 8) == 0) {
      uVar9 = -uVar7 & uVar7;
      if (uVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((uVar9 + 0xffffffff & uVar7) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((uVar9 * 2 + 0xffffffff & uVar7) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
    lVar15 = FUN_1467973af(param_1,uVar7,uVar9 & 0xffffffff,param_5,ppuVar30,param_7);
    lVar21 = DAT_14c80ad08;
    uVar5 = *(uint *)(param_1 + 3);
    uVar35 = (ulonglong)uVar5;
    lVar24 = DAT_14c80ad08 + uVar35 * 8;
    puVar18 = puVar11;
    if (lVar24 != 0 && uVar35 != 0) {
      puVar18 = (uint *)(lVar24 + 0x34);
      if (*(char *)(lVar24 + 0x10) == '\0') {
        puVar18 = puVar11;
      }
      uVar5 = *puVar18;
      uVar35 = (ulonglong)uVar5;
    }
    uVar23 = 0;
    if (((uVar5 != 0) && (uVar35 << 3 != -DAT_14c80ad08)) &&
       (uVar23 = uVar5, DAT_14c758498 <= uVar35 << 3)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *(uint *)(lVar15 + 0x34) = uVar23;
    if (lVar15 == 0) {
      uVar5 = 0;
    }
    else {
      uVar35 = lVar15 - lVar21;
      if (DAT_14c758498 <= uVar35) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((uVar35 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (uVar35 < 8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar5 = (uint)(uVar35 >> 3);
    }
    *puVar18 = uVar5;
  }
  else {
    iVar6 = *(int *)(lVar15 + 0xc) << 0x18;
    if (iVar6 == 0) {
      dVar39 = (double)(uVar5 & 0x7ffffff);
    }
    else {
      lVar24 = *(longlong *)(&DAT_14c758500 + (longlong)(iVar6 >> 0x18) * 8);
      if (1 < (ulonglong)*(uint *)(lVar24 + 0x68)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar23 = uVar5 & 0x7ffffff;
      uVar7 = (ulonglong)uVar23;
      if ((~(uint)(-1L << (*(byte *)(lVar24 + 0x1c) & 0x3f)) & uVar23) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (*(ulonglong *)(lVar24 + 0x38) < uVar7) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar21 = *(longlong *)(lVar24 + 0x20);
      lVar33 = *(longlong *)(lVar24 + 0x90);
      auVar40._8_4_ = (int)((ulonglong)lVar21 >> 0x20);
      auVar40._0_8_ = lVar21;
      auVar40._12_4_ = 0x45300000;
      iVar34 = (int)lVar21;
      uVar29 = *(longlong *)(lVar24 + 0xa0) + lVar33;
      uVar20 = (lVar21 + uVar7 + -1) - uVar29;
      iVar6 = (int)uVar29 - (int)(uVar29 % uVar7);
      uVar29 = (uVar7 + lVar33) - 1;
      iVar32 = (int)(uVar29 % uVar7);
      iVar27 = (int)uVar29;
      iVar28 = ((int)(uVar20 % uVar7) - (int)uVar20) + iVar34;
      iVar19 = ((int)((ulonglong)(lVar21 - lVar33) % uVar7) - (int)(lVar21 - lVar33)) + iVar34;
      iVar14 = iVar27 - iVar32;
      if ((uint)((iVar32 - iVar27) + iVar6) < (uint)(iVar28 - iVar19)) {
        iVar14 = iVar19;
        iVar6 = iVar28;
      }
      dVar39 = ((((double)CONCAT44(0x43300000,iVar34) - 4503599627370496.0) +
                (auVar40._8_8_ - 1.9342813113834067e+25)) /
               (double)((ulonglong)(uint)(iVar6 - iVar14) / (ulonglong)uVar23)) *
               *(double *)(lVar24 + 0x70) *
               *(double *)(&DAT_14c7584e0 + (ulonglong)*(uint *)(lVar24 + 0x68) * 8);
    }
    if (dVar42 * 1.3 <= dVar39) goto LAB_1467930a8;
    uVar7 = (ulonglong)(uVar5 & 0x7ffffff);
  }
  if (param_6 == (uint *)0x0) {
    uVar35 = FUN_1467920f4(param_1,param_5);
LAB_146793436:
    if (uVar35 == uVar8) goto LAB_14679343f;
  }
  else {
    uVar35 = (ulonglong)*param_6;
    if (uVar35 != 0xffffffff) goto LAB_146793436;
LAB_14679343f:
    uVar35 = (ulonglong)*puVar11;
    lVar24 = uVar35 * 8 + DAT_14c80ad08;
    if ((lVar24 != 0 && uVar35 != 0) && (*(char *)(lVar24 + 0x10) == '\x01')) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (param_6 != (uint *)0x0) {
      if (((ulonglong)*param_6 != 0xffffffff) && (uVar8 != *param_6)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      *param_6 = uVar13;
      uVar35 = (ulonglong)*puVar11;
    }
    lVar24 = DAT_14c80ad08;
    if ((int)uVar35 == 0) {
LAB_14679401c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar21 = DAT_14c80ad08 + uVar35 * 8;
    puVar18 = puVar11;
    if (lVar15 != lVar21) {
      do {
        lVar33 = lVar21;
        if (*(char *)(lVar33 + 0x10) == '\x01') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if ((ulonglong)*(uint *)(lVar33 + 0x34) == 0) goto LAB_14679401c;
        lVar21 = DAT_14c80ad08 + (ulonglong)*(uint *)(lVar33 + 0x34) * 8;
      } while (lVar15 != lVar21);
      puVar18 = (uint *)(lVar33 + 0x34);
    }
    uVar5 = *(uint *)(lVar15 + 0x34);
    uVar35 = -DAT_14c80ad08;
    uVar23 = 0;
    if (((ulonglong)uVar5 << 3 != uVar35 && uVar5 != 0) &&
       (uVar23 = uVar5, DAT_14c758498 <= (ulonglong)uVar5 << 3)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *puVar18 = uVar23;
    *(undefined4 *)(lVar15 + 0x34) = 0;
    uVar5 = *puVar11;
    uVar23 = 0;
    if (((ulonglong)uVar5 << 3 != uVar35 && uVar5 != 0) &&
       (uVar23 = uVar5, DAT_14c758498 <= (ulonglong)uVar5 << 3)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *(uint *)(lVar15 + 0x34) = uVar23;
    if (lVar15 == 0) {
      uVar5 = 0;
    }
    else {
      uVar35 = lVar15 - lVar24;
      if (DAT_14c758498 <= uVar35) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((uVar35 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (uVar35 < 8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar5 = (uint)(uVar35 >> 3);
    }
    *puVar11 = uVar5;
    *(undefined1 *)(lVar15 + 0x10) = 1;
  }
  uVar5 = *(uint *)((longlong)param_1 + 0x24);
  uVar35 = (ulonglong)uVar5;
  if (uVar8 < uVar35) {
    lVar24 = param_1[2];
    if (*(int *)(lVar24 + uVar8 * 4) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar9 = uVar8;
    uVar29 = uVar35;
    if ((param_5 != &PTR_LOOP_149dfd458) && (*(int *)(param_1[1] + uVar8 * 4) != 0)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    do {
      uVar5 = (uint)uVar29;
      uVar29 = (ulonglong)*(byte *)((longlong)param_5 + 0x224);
      if (((ulonglong)param_5[0x41] & 1) == 0) {
        uVar29 = 0xffffffffffffffff;
      }
      uVar20 = (ulonglong)*(byte *)((longlong)param_5 + 0x54);
      if (uVar29 < *(byte *)((longlong)param_5 + 0x54)) {
        uVar20 = uVar29;
      }
      if (((ulonglong)param_5[7] & 1) == 0) {
        uVar20 = uVar29;
      }
      if (uVar20 == 0xffffffffffffffff) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((ulonglong)(*(uint *)(lVar15 + 0x20) & 0x7ffffff) < uVar9 << ((byte)uVar20 & 0x3f)) break;
      uVar29 = (ulonglong)*(uint *)(lVar24 + uVar9 * 4);
      lVar21 = DAT_14c80ad08 + uVar29 * 8;
      if (lVar21 != 0 && uVar29 != 0) {
        if ((lVar15 != lVar21) && ((*(uint *)(lVar21 + 0x20) & 0x7ffffff) <= uVar7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        break;
      }
      if (lVar15 == 0) {
        uVar37 = 0;
      }
      else {
        uVar29 = lVar15 - DAT_14c80ad08;
        if (DAT_14c758498 <= uVar29) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if ((uVar29 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (uVar29 < 8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar37 = (undefined4)(uVar29 >> 3);
      }
      *(undefined4 *)(param_1[2] + uVar9 * 4) = uVar37;
      uVar9 = uVar9 + 1;
      uVar5 = *(uint *)((longlong)param_1 + 0x24);
      uVar29 = (ulonglong)uVar5;
    } while (uVar9 < uVar5);
  }
  if (uVar7 != (*(uint *)(lVar15 + 0x20) & 0x7ffffff)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar9 = 0xffffffffffffffff;
  if (((ulonglong)param_5[0x41] & 1) != 0) {
    uVar9 = (ulonglong)*(byte *)((longlong)param_5 + 0x224);
  }
  uVar29 = (ulonglong)*(byte *)((longlong)param_5 + 0x54);
  if (uVar9 < *(byte *)((longlong)param_5 + 0x54)) {
    uVar29 = uVar9;
  }
  if (((ulonglong)param_5[7] & 1) == 0) {
    uVar29 = uVar9;
  }
  if (uVar29 == 0xffffffffffffffff) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  bVar12 = (byte)uVar29;
  lVar24 = 1L << (bVar12 & 0x3f);
  uVar9 = (uVar7 + lVar24) - 1 >> (bVar12 & 0x3f);
  if (uVar9 < uVar8) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (uVar5 == 0) {
    uVar29 = ((ulonglong)(param_5[0x80] + lVar24 + -1) >> (bVar12 & 0x3f)) + 1;
  }
  else {
    uVar29 = (ulonglong)uVar5;
  }
  if (uVar9 < uVar29) {
    if (uVar35 <= uVar8) goto LAB_146793778;
  }
  else {
    if (uVar9 < uVar5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar5 = *(uint *)((longlong)param_1 + 0x1c);
    uVar35 = (ulonglong)uVar5;
    puVar10 = (ulonglong *)(DAT_14c80ad08 + uVar35 * 8);
    lVar24 = DAT_14c80ad08;
    if (puVar10 == (ulonglong *)0x0 || uVar35 == 0) {
      uVar35 = 0;
      puVar10 = (ulonglong *)FUN_14678871b(0x18,"pas_segregated_heap_rare_data",0);
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      lVar24 = DAT_14c80ad08;
      LOCK();
      UNLOCK();
      if (puVar10 != (ulonglong *)0x0) {
        uVar35 = (longlong)puVar10 - DAT_14c80ad08;
        if (DAT_14c758498 <= uVar35) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if ((uVar35 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (uVar35 < 8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar35 = uVar35 >> 3;
      }
      uVar5 = (uint)uVar35;
      *(uint *)((longlong)param_1 + 0x1c) = uVar5;
      uVar35 = uVar35 & 0xffffffff;
    }
    if (((uVar5 == 0) || (uVar35 << 3 == -lVar24)) ||
       (puVar11 = (uint *)FUN_1467922f6(param_1,uVar8,1,1), lVar24 = DAT_14c80ad08,
       puVar11 == (uint *)0x0)) {
      uVar7 = (ulonglong)*(uint *)((longlong)puVar10 + 0xc);
      _Src_00 = (void *)(lVar24 + (ulonglong)(uint)puVar10[1] * 8);
      if ((ulonglong)(uint)puVar10[1] == 0) {
        _Src_00 = (void *)0x0;
      }
    }
    else {
      lVar24 = DAT_14c80ad08 + (ulonglong)*puVar11 * 8;
      if ((ulonglong)*puVar11 == 0) {
        lVar24 = 0;
      }
      if (lVar24 == lVar15) {
        uVar7 = (ulonglong)puVar11[2];
        if (uVar8 < puVar11[2]) {
          uVar7 = uVar8;
        }
        if (uVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        puVar11[2] = (uint)uVar7;
        goto LAB_146793728;
      }
      _Src_00 = (void *)(DAT_14c80ad08 + (ulonglong)(uint)puVar10[1] * 8);
      if ((ulonglong)(uint)puVar10[1] == 0) {
        _Src_00 = (void *)0x0;
      }
      if (puVar11[3] <= uVar8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (puVar11[3] <= uVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((*(uint *)(lVar24 + 0x20) & 0x7ffffff) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar7 = (longlong)puVar11 - (longlong)_Src_00 >> 4;
      if ((longlong)(ulonglong)*(uint *)((longlong)puVar10 + 0xc) <= (longlong)uVar7) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
    if ((*puVar10 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *puVar10 = *puVar10 | 1;
    LOCK();
    UNLOCK();
    uVar5 = *(uint *)((longlong)puVar10 + 0xc);
    uVar23 = (uint)puVar10[2];
    if (uVar23 <= uVar5) {
      uVar5 = uVar23 * 2 + 2;
      _Dst = (void *)FUN_1467807c1((ulonglong)uVar5 << 4,4,
                                   "pas_segregated_heap_rare_data/medium_directories");
      memcpy(_Dst,_Src_00,(ulonglong)*(uint *)((longlong)puVar10 + 0xc) << 4);
      LOCK();
      UNLOCK();
      if (_Dst == (void *)0x0) {
        uVar37 = 0;
      }
      else {
        uVar35 = (longlong)_Dst - DAT_14c80ad08;
        if (DAT_14c758498 <= uVar35) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if ((uVar35 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (uVar35 < 8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar37 = (undefined4)(uVar35 >> 3);
      }
      *(undefined4 *)(puVar10 + 1) = uVar37;
      LOCK();
      UNLOCK();
      *(uint *)(puVar10 + 2) = uVar5;
      FUN_146794150(param_1);
      uVar5 = *(uint *)((longlong)puVar10 + 0xc);
      uVar23 = (uint)puVar10[2];
      _Src_00 = _Dst;
    }
    if (uVar23 <= uVar5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    _Src = (undefined4 *)(uVar7 * 0x10 + (longlong)_Src_00);
    memmove((void *)((longlong)_Src_00 + uVar7 * 0x10 + 0x10),_Src,(uVar5 - uVar7) * 0x10);
    if (uVar8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (uVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (lVar15 == 0) {
      uVar37 = 0;
    }
    else {
      uVar7 = lVar15 - DAT_14c80ad08;
      if (DAT_14c758498 <= uVar7) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((uVar7 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (uVar7 < 8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar37 = (undefined4)(uVar7 >> 3);
    }
    *_Src = uVar37;
    _Src[1] = 0;
    if (uVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    _Src[2] = uVar13;
    _Src[3] = (int)uVar9;
    LOCK();
    UNLOCK();
    *(int *)((longlong)puVar10 + 0xc) = *(int *)((longlong)puVar10 + 0xc) + 1;
    FUN_146794150(param_1);
    LOCK();
    UNLOCK();
    if ((*puVar10 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *puVar10 = *puVar10 + 1;
  }
LAB_146793728:
  uVar5 = *(uint *)(lVar15 + 0x24) >> 7;
  if (uVar5 == 0x1ffffff) {
    uVar5 = 0xffffffff;
  }
  if (uVar8 < uVar5) {
    uVar5 = uVar13 & 0x1ffffff;
    if (uVar5 == 0x1ffffff) {
      uVar5 = 0xffffffff;
    }
    if (uVar5 != uVar13) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    do {
      uVar5 = *(uint *)(lVar15 + 0x24);
      LOCK();
      bVar36 = uVar5 == *(uint *)(lVar15 + 0x24);
      if (bVar36) {
        *(uint *)(lVar15 + 0x24) = uVar5 & 0x7f | uVar13 << 7;
      }
      UNLOCK();
    } while (!bVar36);
  }
LAB_146793778:
  if (((*(uint *)((longlong)param_1 + 0x24) <= uVar8) || (param_1[2] == 0)) ||
     ((uVar7 = (ulonglong)*(uint *)(param_1[2] + uVar8 * 4), uVar7 == 0 ||
      (lVar24 = uVar7 * 8 + DAT_14c80ad08, lVar24 == 0)))) {
    lVar24 = FUN_146792159(param_1,uVar8,param_6,param_5);
  }
  if (lVar24 != lVar15) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  return lVar15;
}



// FUNCTION 14679404a FUN_14679404a body=262 status=ok
// SIG undefined FUN_14679404a(void)

/* WARNING: Type propagation algorithm not settling */

longlong FUN_14679404a(longlong *param_1,longlong param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  byte *pbVar8;
  
  bVar4 = true;
  do {
    bVar3 = bVar4;
    lVar6 = 0x120;
    if (bVar3) {
      lVar6 = 0x38;
    }
    if (((*(byte *)(param_2 + lVar6) & 1) != 0) && (*(int *)(*param_1 + 0x14) != 0)) {
      iVar5 = *(int *)(param_2 + 0x68 + lVar6);
      bVar7 = DAT_14c7584f0;
      if ((iVar5 != 0) && (bVar7 = DAT_14c7584f1, iVar5 != 1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((bVar7 & 1) != 0) {
        bVar7 = *(byte *)(param_2 + 0x1c + lVar6);
        goto LAB_14679413d;
      }
    }
    iVar5 = 0;
    bVar4 = false;
  } while (bVar3);
  do {
    pbVar8 = (byte *)(param_2 + 0x208);
    if ((iVar5 != 0) && (pbVar8 = (byte *)(param_2 + 0x358), iVar5 != 2)) {
      pbVar8 = (byte *)(param_2 + 0x2b0);
    }
    if (((*pbVar8 & 1) != 0) && (*(int *)(*param_1 + 0x18) != 0)) {
      iVar1 = *(int *)(pbVar8 + 0x68);
      bVar7 = DAT_14c758440;
      if ((iVar1 != 0) &&
         ((bVar7 = DAT_14c758442, iVar1 != 2 && (bVar7 = DAT_14c758441, iVar1 != 1)))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((bVar7 & 1) != 0) {
        bVar7 = pbVar8[0x1c];
LAB_14679413d:
        return 1L << (bVar7 & 0x3f);
      }
    }
    iVar5 = iVar5 + 1;
    if (iVar5 == 3) {
      return *(longlong *)(param_2 + 0x30);
    }
  } while( true );
}



// FUNCTION 146794150 FUN_146794150 body=126 status=ok
// SIG undefined FUN_146794150(void)

void FUN_146794150(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  
  lVar8 = DAT_14c80ad08 + (ulonglong)*(uint *)(param_1 + 0x1c) * 8;
  if (lVar8 != 0 && (ulonglong)*(uint *)(param_1 + 0x1c) != 0) {
    uVar4 = (ulonglong)*(uint *)(lVar8 + 0xc);
    lVar6 = DAT_14c80ad08 + (ulonglong)*(uint *)(lVar8 + 8) * 8;
    if ((ulonglong)*(uint *)(lVar8 + 8) == 0) {
      lVar6 = 0;
    }
    lVar8 = uVar4 << 4;
    while (lVar8 + -0x10 != -0x10) {
      puVar7 = (uint *)(lVar6 + -8 + lVar8);
      puVar1 = (uint *)(lVar6 + -4 + lVar8);
      lVar8 = lVar8 + -0x10;
      if (*puVar1 < *puVar7) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
    uVar5 = uVar4 + 1;
    puVar7 = (uint *)(lVar6 + uVar4 * 0x10 + -8);
    while (uVar5 = uVar5 - 1, 1 < uVar5) {
      puVar1 = puVar7 + -3;
      uVar2 = *puVar7;
      puVar7 = puVar7 + -4;
      if (uVar2 <= *puVar1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
  }
  return;
}



// FUNCTION 1467941ce FUN_1467941ce body=515 status=ok
// SIG undefined FUN_1467941ce(void)

ulonglong FUN_1467941ce(longlong param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  
  uVar23 = 1L << (*(byte *)(param_3 + 0x1c) & 0x3f);
  if ((int)POPCOUNT(param_2) != 1) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar21 = -uVar23 & (param_1 + uVar23) - 1;
  if (param_2 <= uVar23) {
    param_2 = uVar23;
  }
  uVar8 = -1L << (*(byte *)(param_3 + 0x1c) & 0x3f);
  uVar7 = ~(uint)uVar8;
  if (((uint)uVar21 & uVar7) != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar2 = *(ulonglong *)(param_3 + 0x38);
  uVar13 = uVar21 & 0xffffffff;
  if (uVar2 < uVar13) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar3 = *(longlong *)(param_3 + 0x20);
  lVar4 = *(longlong *)(param_3 + 0x90);
  uVar9 = *(longlong *)(param_3 + 0xa0) + lVar4;
  iVar16 = (int)uVar9 - (int)(uVar9 % uVar13);
  uVar18 = (uVar13 + lVar4) - 1;
  iVar11 = (int)(uVar18 % uVar13);
  iVar14 = (int)uVar18;
  uVar18 = ~uVar9 + lVar3 + uVar13;
  iVar6 = (int)lVar3;
  iVar12 = ((int)(uVar18 % uVar13) - (int)uVar18) + iVar6;
  uVar18 = lVar3 - lVar4;
  iVar10 = ((int)(uVar18 % uVar13) - (int)uVar18) + iVar6;
  iVar17 = iVar14 - iVar11;
  if ((uint)((iVar11 - iVar14) + iVar16) < (uint)(iVar12 - iVar10)) {
    iVar17 = iVar10;
    iVar16 = iVar12;
  }
  uVar13 = uVar21 & 0xffffffff;
  if ((int)POPCOUNT(param_2) == 1) {
    uVar19 = uVar21;
    while( true ) {
      uVar22 = uVar19;
      uVar21 = uVar21 + uVar23;
      if ((uVar21 & param_2 - 1) != 0) {
        return uVar22;
      }
      if ((uVar8 & uVar2) < uVar21) {
        return uVar22;
      }
      if ((uVar7 & (uint)uVar21) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar19 = uVar21 & 0xffffffff;
      if (uVar2 < uVar19) break;
      iVar12 = (int)uVar9 - (int)(uVar9 % uVar19);
      uVar1 = lVar4 + -1 + uVar19;
      iVar15 = (int)(uVar1 % uVar19);
      iVar14 = (int)uVar1;
      uVar1 = ~uVar9 + lVar3 + uVar19;
      iVar20 = ((int)(uVar1 % uVar19) - (int)uVar1) + iVar6;
      iVar11 = ((int)(uVar18 % uVar19) - (int)uVar18) + iVar6;
      iVar10 = iVar14 - iVar15;
      if ((uint)((iVar15 - iVar14) + iVar12) < (uint)(iVar20 - iVar11)) {
        iVar10 = iVar11;
        iVar12 = iVar20;
      }
      uVar19 = uVar22 + uVar23;
      if ((int)((ulonglong)(uint)(iVar12 - iVar10) / (uVar21 & 0xffffffff)) !=
          (int)((uint)(iVar16 - iVar17) / uVar13)) {
        return uVar22;
      }
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



// FUNCTION 1467943d1 FUN_1467943d1 body=2075 status=ok
// SIG undefined FUN_1467943d1(void)

void FUN_1467943d1(longlong param_1,longlong param_2,uint *param_3,longlong param_4)

{
  int iVar1;
  bool bVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  void *pvVar8;
  ulonglong *puVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_708 [40];
  longlong local_6e0;
  void *local_6d8;
  longlong local_6d0;
  uint *local_6c8;
  void *local_6c0;
  ulonglong local_6b8;
  undefined4 local_6b0;
  int local_6ac;
  uint local_6a8;
  undefined4 local_6a4;
  ulonglong local_6a0 [201];
  void *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  lVar14 = DAT_14c80ad08;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_708;
  if (*(int *)(param_1 + 0x24) != 0) {
LAB_146794464:
    local_6e0 = param_1;
    memset(local_6a0,0,0x658);
    uVar19 = (ulonglong)*(uint *)(local_6e0 + 0x18) * 8 + lVar14;
    lVar14 = local_6e0;
    lVar5 = param_4;
    puVar15 = param_3;
    if (uVar19 != 0 && *(uint *)(local_6e0 + 0x18) != 0) {
      do {
        local_6c8 = puVar15;
        local_6d0 = lVar5;
        iVar1 = *(int *)(uVar19 + 0x2c);
        if (iVar1 == -1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if ((iVar1 == 0) || (*(char *)(uVar19 + 0x10) != '\x01')) {
LAB_146794532:
          uVar16 = 0;
          bVar20 = false;
        }
        else {
          if (param_3 == (uint *)0x0) {
            uVar16 = FUN_1467920f4(lVar14,param_2);
            lVar14 = local_6e0;
          }
          else {
            uVar16 = (ulonglong)*param_3;
            if (uVar16 == 0xffffffff) goto LAB_146794532;
          }
          bVar20 = uVar16 < *(uint *)(lVar14 + 0x24);
          if (!bVar20) {
            uVar16 = 0;
          }
        }
        uVar11 = *(uint *)(uVar19 + 0x24) >> 7;
        uVar12 = (ulonglong)uVar11;
        if (uVar11 != 0x1ffffff) {
          uVar6 = (ulonglong)*(byte *)(param_2 + 0x224);
          if ((*(byte *)(param_2 + 0x208) & 1) == 0) {
            uVar6 = 0xffffffffffffffff;
          }
          uVar7 = (ulonglong)*(byte *)(param_2 + 0x54);
          if (uVar6 < *(byte *)(param_2 + 0x54)) {
            uVar7 = uVar6;
          }
          if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
            uVar7 = uVar6;
          }
          if (uVar7 == 0xffffffffffffffff) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (~(-1L << ((byte)uVar7 & 0x3f)) + (ulonglong)(*(uint *)(uVar19 + 0x20) & 0x7ffffff) >>
              ((byte)uVar7 & 0x3f) < uVar12) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          while( true ) {
            uVar18 = local_50;
            uVar4 = local_6a0[0];
            uVar17 = (ulonglong)*(uint *)(lVar14 + 0x24);
            uVar7 = ~(-1L << ((byte)uVar7 & 0x3f)) +
                    (ulonglong)(*(uint *)(uVar19 + 0x20) & 0x7ffffff) >> ((byte)uVar7 & 0x3f);
            uVar6 = uVar7 + 1;
            if (uVar17 <= uVar6) {
              uVar6 = uVar17;
            }
            if (uVar6 <= uVar12) break;
            FUN_146794c6a(uVar12,uVar19,param_4);
            bVar2 = bVar20;
            if (iVar1 != 0) {
              if (*(longlong *)(param_4 + 8) == 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              if (*(uint *)(param_4 + 0x24) <= uVar12) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              if (uVar16 == uVar12) {
                bVar2 = false;
              }
              *(int *)(*(longlong *)(param_4 + 8) + uVar12 * 4) = iVar1;
              if (!bVar20) {
                bVar2 = bVar20;
              }
            }
            bVar20 = bVar2;
            uVar12 = uVar12 + 1;
            uVar6 = (ulonglong)*(byte *)(param_2 + 0x224);
            if ((*(byte *)(param_2 + 0x208) & 1) == 0) {
              uVar6 = 0xffffffffffffffff;
            }
            uVar7 = (ulonglong)*(byte *)(param_2 + 0x54);
            if (uVar6 < *(byte *)(param_2 + 0x54)) {
              uVar7 = uVar6;
            }
            if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
              uVar7 = uVar6;
            }
            lVar14 = local_6e0;
            if (uVar7 == 0xffffffffffffffff) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
          }
          if (uVar17 <= uVar7) {
            uVar12 = local_50 + 200;
            if (uVar12 <= local_6a0[0]) {
              if (local_6a0[0] != uVar12) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              uVar6 = local_50 * 2;
              if (uVar6 < 5) {
                uVar6 = 4;
              }
              if (uVar6 <= local_50) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              local_6d8 = (void *)(uVar6 * 8);
              pvVar8 = (void *)FUN_14678b965(local_6d8,"size_directory_min_heap/outline_array",0,0);
              uVar12 = uVar6 + 200;
              local_6b8 = uVar6;
              if (uVar12 <= uVar4) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              local_6c0 = pvVar8;
              memset(pvVar8,0,(size_t)local_6d8);
              pvVar8 = local_58;
              if (local_58 != (void *)0x0) {
                local_6d8 = local_58;
                memcpy(local_6c0,local_58,uVar4 * 8 - 0x640);
                pvVar8 = local_6d8;
              }
              FUN_14678b9d2(pvVar8,uVar18 << 3,0,0);
              local_58 = local_6c0;
              local_50 = local_6b8;
            }
            if (uVar12 <= uVar4) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            puVar9 = (ulonglong *)((longlong)local_58 + uVar4 * 8 + -0x640);
            if (uVar4 < 200) {
              puVar9 = local_6a0 + uVar4 + 1;
            }
            uVar12 = uVar4 + 1;
            *puVar9 = 0;
            local_6a0[0] = uVar12;
            if (uVar4 == 0) {
              uVar12 = 1;
            }
            else {
              do {
                uVar6 = uVar12 >> 1;
                if (local_50 + 200 <= uVar6 - 1) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)invalidInstructionException();
                  (*pcVar3)();
                }
                puVar9 = (ulonglong *)((longlong)local_58 + (uVar6 - 1) * 8 + -0x640);
                if (uVar12 < 0x192) {
                  puVar9 = local_6a0 + uVar6;
                }
                if ((*(uint *)(*puVar9 + 0x20) & 0x7ffffff) <=
                    (*(uint *)(uVar19 + 0x20) & 0x7ffffff)) break;
                if (local_50 + 200 <= uVar12 - 1) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)invalidInstructionException();
                  (*pcVar3)();
                }
                puVar13 = (ulonglong *)((longlong)local_58 + (uVar12 - 1) * 8 + -0x640);
                if (uVar12 < 0xc9) {
                  puVar13 = local_6a0 + uVar12;
                }
                *puVar13 = *puVar9;
                bVar2 = 3 < uVar12;
                uVar12 = uVar6;
              } while (bVar2);
            }
            if (local_50 + 200 <= uVar12 - 1) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            puVar9 = (ulonglong *)((longlong)local_58 + (uVar12 - 1) * 8 + -0x640);
            if (uVar12 < 0xc9) {
              puVar9 = local_6a0 + uVar12;
            }
            *puVar9 = uVar19;
            param_4 = local_6d0;
            lVar14 = local_6e0;
            param_3 = local_6c8;
          }
        }
        if (bVar20) {
          if (*(longlong *)(param_4 + 8) == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (*(uint *)(param_4 + 0x24) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          *(int *)(*(longlong *)(param_4 + 8) + uVar16 * 4) = iVar1;
        }
      } while (((ulonglong)*(uint *)(uVar19 + 0x34) != 0) &&
              (uVar19 = (ulonglong)*(uint *)(uVar19 + 0x34) * 8 + DAT_14c80ad08, lVar5 = local_6d0,
              puVar15 = local_6c8, uVar19 != 0));
      if (local_6a0[0] != 0) {
        puVar15 = (uint *)0x0;
LAB_146794901:
        uVar16 = local_6a0[1];
        uVar19 = local_6a0[0];
        if (local_50 == 0xffffffffffffff38) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar12 = local_6a0[0] - 1;
        if (local_50 + 200 <= uVar12) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        local_6e0 = local_6a0[1];
        puVar9 = (ulonglong *)((longlong)local_58 + uVar12 * 8 + -0x640);
        if (local_6a0[0] < 0xc9) {
          puVar9 = local_6a0 + local_6a0[0];
        }
        uVar6 = *puVar9;
        *puVar9 = 0;
        if (local_50 == 0xffffffffffffff38) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        local_6a0[1] = 0;
        local_6a0[0] = uVar12;
        if (uVar19 != 1) {
          uVar19 = 1;
          do {
            uVar4 = uVar19 * 2;
            uVar7 = uVar19 * 2 + 1;
            local_6c8 = puVar15;
            if (uVar4 < uVar12) {
              if (local_50 + 200 <= uVar4) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              puVar9 = (ulonglong *)((longlong)local_58 + uVar19 * 0x10 + -0x640);
              if (uVar7 < 0xc9) {
                puVar9 = local_6a0 + uVar7;
              }
              uVar18 = *puVar9;
              bVar20 = (*(uint *)(uVar6 + 0x20) & 0x7ffffff) <=
                       (*(uint *)(uVar18 + 0x20) & 0x7ffffff);
            }
            else {
              if (uVar12 < uVar4) goto LAB_146794b9f;
              bVar20 = true;
              uVar18 = 0;
            }
            if (uVar4 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            uVar17 = local_50 + 200;
            if (uVar17 <= uVar4 - 1) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            puVar9 = (ulonglong *)((longlong)local_58 + (uVar4 - 1) * 8 + -0x640);
            if (uVar4 < 0xc9) {
              puVar9 = local_6a0 + uVar19 * 2;
            }
            uVar11 = *(uint *)(uVar6 + 0x20) & 0x7ffffff;
            uVar10 = *(uint *)(*puVar9 + 0x20) & 0x7ffffff;
            param_4 = local_6d0;
            if (bVar20) {
              if (uVar11 <= uVar10) goto LAB_146794b9f;
LAB_146794b38:
              uVar7 = uVar4;
              uVar18 = *puVar9;
              if (uVar17 <= uVar19 - 1) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
            }
            else {
              if ((uVar10 < uVar11) && (uVar10 <= (*(uint *)(uVar18 + 0x20) & 0x7ffffff)))
              goto LAB_146794b38;
              if (uVar17 <= uVar19 - 1) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
            }
            puVar9 = (ulonglong *)((longlong)local_58 + (uVar19 - 1) * 8 + -0x640);
            if (uVar19 < 0xc9) {
              puVar9 = local_6a0 + uVar19;
            }
            *puVar9 = uVar18;
            uVar19 = uVar7;
          } while( true );
        }
        goto LAB_14679497d;
      }
    }
LAB_14679449a:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_708);
  }
  lVar5 = (ulonglong)*(uint *)(param_1 + 0x1c) * 8 + DAT_14c80ad08;
  if (lVar5 != 0 && *(uint *)(param_1 + 0x1c) != 0) {
    if (*(int *)(lVar5 + 0xc) != 0) goto LAB_146794464;
    if (*(int *)(lVar5 + 0x10) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_708) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146794b9f:
  if (local_50 + 200 <= uVar19 - 1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  puVar9 = (ulonglong *)((longlong)local_58 + (uVar19 - 1) * 8 + -0x640);
  if (uVar19 < 0xc9) {
    puVar9 = local_6a0 + uVar19;
  }
  *puVar9 = uVar6;
LAB_14679497d:
  if (uVar16 == 0) goto LAB_14679449a;
  uVar19 = uVar16 - DAT_14c80ad08;
  if (DAT_14c758498 <= uVar19) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if ((uVar19 & 7) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (uVar19 < 8) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_6b0 = (undefined4)(uVar19 >> 3);
  local_6ac = *(int *)(uVar16 + 0x2c);
  if (local_6ac == -1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_6a8 = *(uint *)(uVar16 + 0x24) >> 7;
  if (local_6a8 == 0x1ffffff) {
    local_6a8 = 0xffffffff;
  }
  if (local_6a8 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar19 = (ulonglong)*(byte *)(param_2 + 0x224);
  if ((*(byte *)(param_2 + 0x208) & 1) == 0) {
    uVar19 = 0xffffffffffffffff;
  }
  uVar12 = (ulonglong)*(byte *)(param_2 + 0x54);
  if (uVar19 < *(byte *)(param_2 + 0x54)) {
    uVar12 = uVar19;
  }
  if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
    uVar12 = uVar19;
  }
  if (uVar12 == 0xffffffffffffffff) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_6a4 = (undefined4)
              (~(-1L << ((byte)uVar12 & 0x3f)) + (ulonglong)(*(uint *)(uVar16 + 0x20) & 0x7ffffff)
              >> ((byte)uVar12 & 0x3f));
  FUN_146794c11(puVar15,&local_6b0,param_4);
  puVar15 = (uint *)((longlong)puVar15 + 1);
  if (local_6a0[0] == 0) goto LAB_14679449a;
  goto LAB_146794901;
}



// FUNCTION 146794c11 FUN_146794c11 body=89 status=ok
// SIG undefined FUN_146794c11(void)

void FUN_146794c11(ulonglong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  if ((ulonglong)*(uint *)(param_3 + 0x1c) != 0) {
    lVar1 = DAT_14c80ad08 + (ulonglong)*(uint *)(param_3 + 0x1c) * 8;
    if (lVar1 != 0) {
      if (*(uint *)(lVar1 + 0xc) <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (param_1 < *(uint *)(lVar1 + 0x10)) {
        if (((ulonglong)*(uint *)(lVar1 + 8) != 0) &&
           (lVar1 = DAT_14c80ad08 + (ulonglong)*(uint *)(lVar1 + 8) * 8, lVar1 != 0)) {
          if (*(int *)(param_2 + 1) != 0) {
            uVar4 = param_2[1];
            puVar2 = (undefined8 *)(lVar1 + param_1 * 0x10);
            *puVar2 = *param_2;
            puVar2[1] = uVar4;
            return;
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



// FUNCTION 146794c6a FUN_146794c6a body=72 status=ok
// SIG undefined FUN_146794c6a(void)

void FUN_146794c6a(ulonglong param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  if (*(longlong *)(param_3 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (*(uint *)(param_3 + 0x24) <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = param_2 - DAT_14c80ad08;
    if (DAT_14c758498 <= uVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((uVar3 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar3 < 8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar2 = (undefined4)(uVar3 >> 3);
  }
  *(undefined4 *)(*(longlong *)(param_3 + 0x10) + param_1 * 4) = uVar2;
  return;
}



// FUNCTION 146794cb2 FUN_146794cb2 body=110 status=ok
// SIG undefined FUN_146794cb2(void)

bool FUN_146794cb2(longlong param_1,undefined8 *param_2,PSRWLOCK param_3)

{
  PSRWLOCK pRVar1;
  code *pcVar2;
  ulonglong uVar3;
  PSRWLOCK SRWLock;
  
  AcquireSRWLockExclusive(param_3);
  pRVar1 = *(PSRWLOCK *)(param_1 + 8);
  if ((pRVar1 == param_3) && ((*(ulonglong *)(param_1 + 0x20) & 6) == 0)) {
    uVar3 = *(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffff8;
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    SRWLock = (PSRWLOCK)(uVar3 + 0x18);
    if (SRWLock != param_3) {
      AcquireSRWLockExclusive(SRWLock);
      *(PSRWLOCK *)(param_1 + 8) = SRWLock;
      ReleaseSRWLockExclusive(param_3);
      *param_2 = SRWLock;
    }
  }
  return pRVar1 == param_3;
}



// FUNCTION 146794d20 FUN_146794d20 body=171 status=ok
// SIG undefined FUN_146794d20(void)

PSRWLOCK FUN_146794d20(longlong param_1,PSRWLOCK param_2,PSRWLOCK param_3)

{
  code *pcVar1;
  BOOLEAN BVar2;
  char cVar3;
  PSRWLOCK pRVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  PSRWLOCK local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  do {
    while( true ) {
      if (param_2 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(param_2);
      }
      local_38 = param_3;
      BVar2 = TryAcquireSRWLockExclusive(param_3);
      if (BVar2 != '\0') break;
      cVar3 = FUN_146794cb2(param_1,&local_38,param_3);
      pRVar4 = local_38;
      if (cVar3 != '\0') goto LAB_146794d82;
      param_3 = *(PSRWLOCK *)(param_1 + 8);
      param_2 = local_38;
    }
    bVar5 = *(PSRWLOCK *)(param_1 + 8) != param_3;
    pRVar4 = param_3;
    param_2 = param_3;
    param_3 = *(PSRWLOCK *)(param_1 + 8);
  } while (bVar5);
LAB_146794d82:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pRVar4;
}



// FUNCTION 146794dcc FUN_146794dcc body=377 status=ok
// SIG undefined FUN_146794dcc(void)

void FUN_146794dcc(longlong param_1,undefined8 *param_2,longlong param_3)

{
  PSRWLOCK SRWLock;
  ulonglong uVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  PSRWLOCK pRVar4;
  PSRWLOCK pRVar5;
  PSRWLOCK SRWLock_00;
  bool bVar6;
  
  SRWLock = (PSRWLOCK)(param_3 + 0x10);
  SRWLock_00 = *(PSRWLOCK *)(param_1 + 8);
  pRVar4 = (PSRWLOCK)*param_2;
  bVar6 = pRVar4 == SRWLock;
  if (pRVar4 != SRWLock_00 || !bVar6) {
    do {
      uVar1 = *(ulonglong *)(param_1 + 0x20);
      if (param_3 == 0 || (uVar1 & 6) != 0) {
        pRVar4 = (PSRWLOCK)*param_2;
        if (pRVar4 != SRWLock_00) {
          if (pRVar4 != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(pRVar4);
          }
          if (SRWLock_00 != (PSRWLOCK)0x0) {
            AcquireSRWLockExclusive(SRWLock_00);
          }
          *param_2 = SRWLock_00;
        }
        pRVar5 = *(PSRWLOCK *)(param_1 + 8);
        if (pRVar5 == SRWLock_00) {
          return;
        }
        pRVar4 = (PSRWLOCK)*param_2;
      }
      else {
        if (bVar6) {
          BVar3 = TryAcquireSRWLockExclusive(SRWLock_00);
          if (BVar3 == '\0') {
            pRVar4 = (PSRWLOCK)*param_2;
            goto LAB_146794e4a;
          }
        }
        else {
LAB_146794e4a:
          if (pRVar4 == SRWLock_00) {
            BVar3 = TryAcquireSRWLockExclusive(SRWLock);
            if (BVar3 != '\0') goto LAB_146794e8f;
            pRVar4 = (PSRWLOCK)*param_2;
          }
          if (pRVar4 != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(pRVar4);
          }
          if (SRWLock == SRWLock_00) {
            AcquireSRWLockExclusive(SRWLock_00);
            *param_2 = SRWLock_00;
            pRVar5 = *(PSRWLOCK *)(param_1 + 8);
            pRVar4 = SRWLock_00;
            if (pRVar5 == SRWLock) {
              return;
            }
            goto LAB_146794ec8;
          }
          pRVar5 = SRWLock;
          pRVar4 = SRWLock_00;
          if (SRWLock < SRWLock_00 || (PSRWLOCK)((uVar1 & 0xfffffffffffffff8) + 0x18) == SRWLock_00)
          {
            pRVar5 = SRWLock_00;
            pRVar4 = SRWLock;
          }
          AcquireSRWLockExclusive(pRVar4);
          AcquireSRWLockExclusive(pRVar5);
        }
LAB_146794e8f:
        if (SRWLock_00 == SRWLock) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (*(PSRWLOCK *)(param_1 + 8) == SRWLock_00) {
          *(PSRWLOCK *)(param_1 + 8) = SRWLock;
          ReleaseSRWLockExclusive(SRWLock_00);
          *param_2 = SRWLock;
          return;
        }
        ReleaseSRWLockExclusive(SRWLock_00);
        *param_2 = SRWLock;
        pRVar5 = *(PSRWLOCK *)(param_1 + 8);
        pRVar4 = SRWLock;
      }
LAB_146794ec8:
      bVar6 = pRVar4 == SRWLock;
      SRWLock_00 = pRVar5;
    } while (pRVar4 != pRVar5 || !bVar6);
  }
  return;
}



// FUNCTION 146794f45 FUN_146794f45 body=716 status=ok
// SIG undefined FUN_146794f45(void)

void FUN_146794f45(undefined1 *param_1,ulonglong param_2,char param_3,longlong param_4)

{
  undefined1 *_Dst;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  undefined8 uVar10;
  ulonglong _Size;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 uVar14;
  uint uVar15;
  undefined1 uVar16;
  ulonglong uVar17;
  longlong lVar18;
  bool bVar19;
  
  if (*(int *)(param_4 + 0x18) != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  uVar11 = *(ulonglong *)(param_4 + 0x20);
  uVar12 = *(ulonglong *)(param_4 + 0x28);
  iVar1 = *(int *)(param_4 + 0x6c);
  lVar2 = *(longlong *)(param_4 + 0x80);
  lVar3 = *(longlong *)(param_4 + 0x88);
  lVar4 = *(longlong *)(param_4 + 0x90);
  lVar5 = *(longlong *)(param_4 + 0x98);
  lVar18 = *(longlong *)(param_4 + 0xa0);
  uVar15 = (uint)param_2 & 7;
  if (uVar15 < 2) {
    bVar7 = true;
    uVar14 = 2;
    uVar16 = 4;
    bVar8 = false;
  }
  else {
    if (uVar15 != 3) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    uVar14 = 1;
    uVar16 = 3;
    bVar7 = false;
    bVar8 = true;
  }
  if ((*(int *)(param_4 + 0x68) != 0) && (uVar14 = uVar16, *(int *)(param_4 + 0x68) != 1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  *param_1 = uVar14;
  if (iVar1 == 1) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_14679981f(param_2);
  }
  *(undefined8 *)(param_1 + 8) = uVar10;
  *(ulonglong *)(param_1 + 0x20) = param_2;
  uVar17 = lVar2 + 0x1f;
  memset(param_1 + 0x2c,0,uVar17 >> 3 & 0xfffffffffffffffc);
  do {
    LOCK();
    bVar19 = *(undefined1 (*) [16])(param_1 + 0x10) == *(undefined1 (*) [16])(param_1 + 0x10);
    if (bVar19) {
      *(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    UNLOCK();
  } while (!bVar19);
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  if (bVar7) {
    if (((uint)param_2 & 7) == 5) {
      param_2 = param_2 & 0xfffffffffffffff8;
    }
    else {
      param_2 = FUN_146799574(param_2);
    }
    uVar15 = *(uint *)(param_2 + 0x20) & 0x7ffffff;
    if (uVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    *(uint *)(param_1 + 4) = uVar15;
    if (uVar15 != (*(uint *)(param_2 + 0x20) & 0x7ffffff)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    cVar9 = FUN_146797f2b(param_2);
    iVar1 = *(int *)(param_2 + 0x28);
    if (cVar9 == '\0') {
      if (iVar1 != -1) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
    }
    else {
      if (iVar1 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      *(int *)(param_1 + 0x28) = iVar1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if (uVar11 != uVar12) {
    if (uVar11 <= uVar12) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    _Dst = param_1 + 0x2c + (uVar17 >> 5) * 4;
    _Size = uVar11 / uVar12;
    uVar17 = _Size;
    if (param_3 == '\0') {
      memset(_Dst,0,_Size);
    }
    else {
      do {
        uVar13 = uVar17 - 1;
        if (_Dst[uVar17 - 1] != -1) {
          _Dst[uVar13] = 0;
        }
        uVar17 = uVar13;
      } while (uVar13 != 0);
    }
    if (bVar8) {
      lVar18 = lVar5;
      lVar4 = lVar3;
    }
    if (lVar4 != 0) {
      uVar17 = (lVar4 - 1U) / uVar12;
      if (_Size <= uVar17) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      uVar13 = 0;
      do {
        if (_Dst[uVar13] == -1) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        cVar9 = _Dst[uVar13] + '\x01';
        if (cVar9 == -1) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        _Dst[uVar13] = cVar9;
        uVar13 = uVar13 + 1;
      } while (uVar13 <= uVar17);
    }
    if (lVar4 + lVar18 != uVar11) {
      uVar11 = (uVar11 - 1) / uVar12;
      if (_Size <= uVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      for (uVar12 = (ulonglong)(lVar4 + lVar18) / uVar12; uVar12 <= uVar11; uVar12 = uVar12 + 1) {
        if (_Dst[uVar12] == -1) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        cVar9 = _Dst[uVar12] + '\x01';
        if (cVar9 == -1) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        _Dst[uVar12] = cVar9;
      }
    }
  }
  param_1[2] = 0;
  return;
}


