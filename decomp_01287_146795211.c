// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146795211 FUN_146795211 body=79 status=ok
// SIG undefined FUN_146795211(void)

void FUN_146795211(longlong param_1,int param_2)

{
  undefined8 uVar1;
  bool bVar2;
  
  if (param_2 == 1) {
    uVar1 = FUN_146782f7a();
    *(undefined8 *)(param_1 + 0x10) = uVar1;
  }
  else if (param_2 == 0) {
    uVar1 = FUN_146782f7a();
    do {
      LOCK();
      bVar2 = *(undefined1 (*) [16])(param_1 + 0x10) == *(undefined1 (*) [16])(param_1 + 0x10);
      if (bVar2) {
        *(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x10) = uVar1;
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      UNLOCK();
    } while (!bVar2);
  }
  FUN_14679999a(*(undefined8 *)(param_1 + 0x20),param_1);
  return;
}



// FUNCTION 146795260 FUN_146795260 body=492 status=ok
// SIG undefined FUN_146795260(void)

undefined8
FUN_146795260(longlong param_1,undefined8 param_2,longlong *param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  char cVar2;
  byte *pbVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_108 [32];
  byte *local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined1 local_d0 [128];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar7 = *(longlong *)(param_1 + 0x18);
  pbVar3 = (byte *)FUN_146799671(*(undefined8 *)(param_1 + 0x20));
  if (*(ulonglong *)(pbVar3 + 0x20) <= *(ulonglong *)(pbVar3 + 0x28)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar4 = *(ulonglong *)(pbVar3 + 0x20) / *(ulonglong *)(pbVar3 + 0x28);
  if (uVar4 < 2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (0x400 < uVar4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (*(int *)(pbVar3 + 0x6c) == 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((*pbVar3 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  pcVar1 = *(code **)(pbVar3 + 0x48);
  lVar8 = *(longlong *)(pbVar3 + 0x80);
  if (*param_3 != *(longlong *)(param_1 + 8)) {
    lVar6 = FUN_146794d20(param_1);
    *param_3 = lVar6;
  }
  if (*(char *)(param_1 + 3) == '\x01') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar8 = param_1 + (lVar8 + 0x1fU >> 5) * 4 + 0x2c;
  if (lVar7 == 0) {
    FUN_146787a14(local_d0,lVar8,pbVar3);
  }
  else {
    FUN_146787984();
  }
  if ((PSRWLOCK)*param_3 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)*param_3);
    *param_3 = 0;
  }
  if (local_50 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_d8 = lVar7;
  (*pcVar1)(param_1);
  if (param_4 == 0) {
    uVar5 = FUN_14679979b(*(undefined8 *)(param_1 + 0x20));
    cVar2 = FUN_14678183f(param_2,uVar5,param_5);
    if (cVar2 == '\0') {
      if (*param_3 != *(longlong *)(param_1 + 8)) {
        lVar7 = FUN_146794d20(param_1);
        *param_3 = lVar7;
      }
      if (*(char *)(param_1 + 3) == '\x01') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (local_d8 != 0) {
        FUN_146787a9f(local_d0,lVar8,pbVar3);
      }
      uVar5 = 0;
      goto LAB_146795388;
    }
  }
  uVar5 = FUN_14679979b(*(undefined8 *)(param_1 + 0x20));
  local_e0 = param_5;
  local_e8 = pbVar3;
  FUN_146787b17(local_d0,param_1,param_2,uVar5);
  uVar5 = 1;
LAB_146795388:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14679544d FUN_14679544d body=246 status=ok
// SIG undefined FUN_14679544d(void)

undefined4 FUN_14679544d(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  longlong lVar5;
  PSRWLOCK pRVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  PSRWLOCK local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = FUN_146799671(*(undefined8 *)(param_1 + 0x20));
  if (*(int *)(lVar5 + 0x6c) == 1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar1 = *(ulonglong *)(lVar5 + 0x20);
  if (*(ulonglong *)(lVar5 + 0x28) < uVar1) {
    local_68 = (PSRWLOCK)0x0;
    local_78 = param_4;
    uVar4 = FUN_146795260(param_1,param_2,&local_68,param_3);
    if (local_68 != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(local_68);
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x18) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar2 = *(longlong *)(lVar5 + 8);
    pRVar6 = (PSRWLOCK)(**(code **)(lVar5 + 0x48))(param_1);
    uVar4 = *(undefined4 *)(lVar2 + 0x438);
    local_58 = FUN_14679979b(*(undefined8 *)(param_1 + 0x20));
    local_60 = (longlong)&pRVar6->Ptr + uVar1;
    local_68 = pRVar6;
    local_50 = uVar4;
    uVar4 = FUN_146781c61(param_2,&local_68,param_3,param_4);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146795544 FUN_146795544 body=708 status=ok
// SIG undefined FUN_146795544(void)

void FUN_146795544(longlong param_1,longlong *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong *plVar5;
  BOOLEAN BVar6;
  ulonglong *puVar7;
  PSRWLOCK SRWLock;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  int local_9c;
  ulonglong local_98;
  code *local_90;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  PSRWLOCK local_70;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_9c = param_3;
  puVar7 = (ulonglong *)FUN_146799671(*(undefined8 *)(param_1 + 0x20));
  uVar14 = *puVar7;
  local_78 = puVar7[1];
  uVar8 = puVar7[4];
  local_98 = puVar7[5];
  uVar3 = puVar7[6];
  local_90 = (code *)puVar7[9];
  iVar2 = *(int *)((longlong)puVar7 + 0x6c);
  uVar9 = puVar7[0x10];
  if (*(PSRWLOCK *)(param_1 + 8) == (PSRWLOCK)0x0) {
    lVar12 = 0;
  }
  else {
    BVar6 = TryAcquireSRWLockExclusive(*(PSRWLOCK *)(param_1 + 8));
    if (BVar6 != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    lVar12 = *(longlong *)(param_1 + 8);
  }
  if (*param_2 != lVar12) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (*(char *)(param_1 + 3) == '\x01') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (local_9c == 1) {
    SRWLock = (PSRWLOCK)FUN_14679979b(*(undefined8 *)(param_1 + 0x20));
    BVar6 = TryAcquireSRWLockExclusive(SRWLock);
    if (BVar6 != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
  if (local_98 < uVar8) {
    if (iVar2 == 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    lVar12 = param_1 + (uVar9 + 0x1f >> 5) * 4;
    lVar13 = 0;
    uVar8 = uVar8 / local_98;
    uVar9 = uVar8;
    do {
      pcVar1 = (char *)(lVar12 + 0x2b + uVar9);
      uVar9 = uVar9 - 1;
      lVar13 = lVar13 + (ulonglong)(*pcVar1 == -1);
    } while (uVar9 != 0);
    if (lVar13 != 0) {
      *(undefined1 *)(param_1 + 3) = 1;
      local_88 = uVar14;
      if ((PSRWLOCK)*param_2 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive((PSRWLOCK)*param_2);
        *param_2 = 0;
      }
      iVar2 = local_9c;
      bVar15 = local_9c == 1;
      local_80 = param_2;
      local_70 = (PSRWLOCK)FUN_14679979b(*(undefined8 *)(param_1 + 0x20));
      local_a8 = (ulonglong)bVar15;
      FUN_14678ec28(local_98 * lVar13,puVar7,0);
      if (iVar2 == 0) {
        AcquireSRWLockExclusive(local_70);
      }
      FUN_146780693(local_68,*(undefined4 *)(local_78 + 0x438));
      uVar14 = 0;
      do {
        if (((uVar3 == 0) ||
            ((*(uint *)(uVar3 + (uVar14 >> 5) * 4) >> ((uint)uVar14 & 0x1f) & 1) == 0)) &&
           (*(char *)(lVar12 + 0x2c + uVar14) == -1)) {
          FUN_1467806aa(local_68,uVar14);
        }
        else {
          uVar10 = (*local_90)(param_1);
          FUN_1467806c0(local_68,uVar10,uVar14,puVar7);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar8);
      uVar10 = (*local_90)(param_1);
      FUN_1467806c0(local_68,uVar10,uVar14,puVar7);
      if (local_9c == 0) {
        ReleaseSRWLockExclusive(local_70);
      }
      plVar5 = local_80;
      if ((local_88 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (*local_80 != *(longlong *)(param_1 + 8)) {
        lVar11 = FUN_146794d20(param_1);
        *plVar5 = lVar11;
      }
      if (*(char *)(param_1 + 3) == '\0') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      *(undefined1 *)(param_1 + 3) = 0;
      lVar11 = 0;
      do {
        pcVar1 = (char *)(lVar12 + 0x2b + uVar8);
        uVar8 = uVar8 - 1;
        if (*pcVar1 == -1) {
          lVar11 = lVar11 + 1;
          *(undefined1 *)(lVar12 + 0x2c + uVar8) = 0;
        }
      } while (uVar8 != 0);
      if (lVar13 != lVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
    }
    if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



// FUNCTION 146795809 FUN_146795809 body=20 status=ok
// SIG undefined FUN_146795809(void)

void FUN_146795809(undefined8 param_1)

{
  code *pcVar1;
  
  FUN_1467a2796("Alloc bit not set in pas_segregated_page_deallocate_with_page",param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 14679581d FUN_14679581d body=100 status=ok
// SIG undefined FUN_14679581d(void)

longlong FUN_14679581d(longlong param_1)

{
  char *pcVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar3 = FUN_146799671(*(undefined8 *)(param_1 + 0x20));
  if (*(ulonglong *)(lVar3 + 0x28) < *(ulonglong *)(lVar3 + 0x20)) {
    lVar5 = 0;
    uVar4 = *(ulonglong *)(lVar3 + 0x20) / *(ulonglong *)(lVar3 + 0x28);
    do {
      pcVar1 = (char *)(param_1 + (*(longlong *)(lVar3 + 0x80) + 0x1fU >> 5) * 4 + 0x2b + uVar4);
      uVar4 = uVar4 - 1;
      lVar5 = lVar5 + (ulonglong)(*pcVar1 != -1);
    } while (uVar4 != 0);
    return lVar5;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



// FUNCTION 146795881 FUN_146795881 body=21 status=ok
// SIG undefined FUN_146795881(void)

undefined * FUN_146795881(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 6) {
    return (&PTR_DAT_149dfcdc0)[param_1];
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 146795896 FUN_146795896 body=159 status=ok
// SIG undefined FUN_146795896(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146795896(longlong param_1,ulonglong param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  puVar2 = (undefined8 *)FUN_14678871b(0x18,"pas_segregated_partial_view",0);
  _DAT_14c80af80 = _DAT_14c80af80 + 1;
  *(undefined1 *)((longlong)puVar2 + 10) = 0;
  *(undefined2 *)(puVar2 + 1) = 0;
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
  lVar3 = 0xb;
  do {
    *(char *)((longlong)puVar2 + lVar3) = (char)uVar4;
    uVar4 = uVar4 >> 8;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0xe);
  if (param_2 < 0x100) {
    *(char *)((longlong)puVar2 + 0xe) = (char)param_2;
    *(undefined2 *)((longlong)puVar2 + 0xf) = 0;
    *puVar2 = 0;
    *(byte *)((longlong)puVar2 + 0x11) = *(byte *)((longlong)puVar2 + 0x11) & 0xe0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 146795935 FUN_146795935 body=93 status=ok
// SIG undefined FUN_146795935(void)

void FUN_146795935(ulonglong param_1,longlong param_2)

{
  code *pcVar1;
  BOOLEAN BVar2;
  byte bVar3;
  
  if (*(PSRWLOCK *)(param_2 + 8) != (PSRWLOCK)0x0) {
    BVar2 = TryAcquireSRWLockExclusive(*(PSRWLOCK *)(param_2 + 8));
    if (BVar2 != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  bVar3 = *(byte *)(param_1 + 0x11);
  if ((bVar3 & 4) == 0) {
    if ((bVar3 & 1) == 0) {
      FUN_146791720((ulonglong)
                    ((uint)*(byte *)(param_1 + 0xd) * 0x80000 + (uint)*(ushort *)(param_1 + 0xb) * 8
                    ) + DAT_14c80ad08,param_1 | 4);
      bVar3 = *(byte *)(param_1 + 0x11);
    }
    else {
      bVar3 = bVar3 | 2;
    }
    *(byte *)(param_1 + 0x11) = bVar3 | 4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 146795992 FUN_146795992 body=16 status=ok
// SIG undefined FUN_146795992(void)

void FUN_146795992(longlong param_1,longlong param_2)

{
  int *piVar1;
  code *pcVar2;
  
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 1;
  piVar1 = (int *)(param_2 + 0x24);
  *piVar1 = *piVar1 + 1;
  if (*piVar1 != 0) {
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfb;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



// FUNCTION 1467959a2 FUN_1467959a2 body=205 status=ok
// SIG undefined FUN_1467959a2(void)

ulonglong * FUN_1467959a2(ulonglong *param_1,ulonglong param_2,longlong param_3)

{
  code *pcVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (*(int *)(param_3 + 0x6c) == 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar5 = *(ulonglong *)(param_3 + 0x80) >> (*(byte *)(param_3 + 0x78) & 0x3f);
  puVar2 = (ulonglong *)FUN_1467a08ac((uVar5 * 4 + 7 & 0xfffffffffffffff8) + 0x14);
  if ((*param_1 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *puVar2 = *param_1;
  if (param_1 == (ulonglong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (longlong)param_1 - DAT_14c80ad08;
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
  lVar4 = 0x10;
  do {
    *(char *)((longlong)puVar2 + lVar4) = (char)uVar3;
    uVar3 = uVar3 >> 8;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x13);
  puVar2[1] = param_2;
  if (uVar5 != 0) {
    memset((void *)((longlong)puVar2 + 0x14),0,uVar5 * 4);
  }
  *param_1 = (ulonglong)puVar2 | 1;
  return puVar2;
}



// FUNCTION 146795a6f FUN_146795a6f body=68 status=ok
// SIG undefined FUN_146795a6f(void)

void FUN_146795a6f(ulonglong *param_1)

{
  code *pcVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)0x0;
  if ((uint3)param_1[2] != 0) {
    puVar2 = (ulonglong *)((ulonglong)((uint)(uint3)param_1[2] * 8) + DAT_14c80ad08);
  }
  if ((*puVar2 & 1) != 0) {
    if ((ulonglong *)(*puVar2 & 0xfffffffffffffffe) == param_1) {
      *puVar2 = *param_1;
      FUN_1467a08c6();
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



// FUNCTION 146795ab3 FUN_146795ab3 body=60 status=ok
// SIG undefined FUN_146795ab3(void)

void FUN_146795ab3(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (*(uint3 *)(param_1 + 0x10) != 0) {
    uVar1 = (ulonglong)((uint)*(uint3 *)(param_1 + 0x10) * 8) + DAT_14c80ad08;
  }
  if (*(int *)(uVar1 + 0x24) != 0) {
    return;
  }
  FUN_1467918b2(*(undefined8 *)(param_1 + 8),uVar1 | 2);
  return;
}



// FUNCTION 146795aef FUN_146795aef body=1795 status=ok
// SIG undefined FUN_146795aef(void)

ulonglong FUN_146795aef(uint *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  byte bVar13;
  undefined1 local_328 [44];
  int local_2fc;
  ulonglong local_2f8;
  ulonglong local_2f0;
  uint *local_2e8;
  ulonglong local_2e0;
  ulonglong local_2d8;
  undefined8 local_2d0;
  ulonglong local_2c8;
  ulonglong local_2c0;
  longlong local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  ulonglong local_2a8;
  undefined1 local_2a0 [232];
  uint *local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  longlong local_198;
  undefined5 uStack_190;
  undefined3 uStack_18b;
  uint uStack_188;
  undefined1 uStack_184;
  ulonglong local_180;
  code *local_178;
  code *local_170;
  undefined4 *local_168;
  undefined1 local_160 [232];
  ulonglong local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)local_328;
  local_2fc = param_4;
  memcpy(local_160,*(void **)(&DAT_14c758500 + (longlong)(char)param_1[3] * 8),0xe8);
  local_2b0 = param_2;
  local_2ac = param_3;
  memcpy(local_2a0,local_160,0xe8);
  local_2e8 = param_1;
  do {
    local_178 = FUN_1467961f3;
    local_170 = FUN_1467961f7;
    local_168 = &local_2b0;
    local_2a8 = 0;
    uVar10 = (ulonglong)*param_1;
    local_1b8 = param_1;
    do {
      lVar6 = DAT_14c80ad08;
      if ((uint)uVar10 < 8) {
        lVar6 = 0;
      }
      uVar7 = (ulonglong)local_1b8[1];
      if (lVar6 + uVar10 == 0) {
        lVar6 = DAT_14c80ad08 + uVar7 * 8;
        uVar11 = 0;
      }
      else {
        lVar6 = uVar7 * 8 + DAT_14c80ad08;
        uVar11 = 1;
        if (lVar6 != 0 && local_1b8[1] != 0) {
          uVar11 = (ulonglong)(*(int *)(lVar6 + 0x30) + 1);
        }
      }
      if ((uVar7 == 0) || (lVar6 == 0)) {
        uVar9 = 0xffffffffffffffff;
        if ((local_1b8[2] & 1) == 0) {
          local_1b0 = (ulonglong)((uint)uVar10 != 0);
        }
        else {
          local_1b0 = 0;
        }
      }
      else {
        FUN_146796fca(&local_78);
        local_1b0 = local_78;
        uVar9 = local_70;
      }
      if (local_1b0 == uVar11) goto LAB_14679602d;
      LOCK();
      UNLOCK();
      local_1a0 = 0xffffffffffffffff;
      local_180 = 0;
      uStack_188 = 0;
      uStack_184 = 0;
      local_198 = 0;
      uStack_190 = 0;
      uStack_18b = 0;
      local_2d8 = local_1b0;
      local_2d0 = uVar9;
      local_2c8 = uVar11;
      local_1a8 = uVar11;
      if (local_1b0 == 0) {
        uVar10 = CONCAT44(local_1b8[2] >> 1,local_1b8[2]) & 0x100000001;
        iVar8 = (*local_178)(uVar10,&local_1b8);
        if (iVar8 == 0) goto LAB_146795c86;
        local_1b0 = 0;
        local_198 = 0;
        uStack_190 = 0;
        uStack_18b = 0;
        uStack_188 = 1;
        uStack_184 = 1;
        local_1a0 = 0;
        bVar13 = 1;
        local_180 = uVar10;
        if (((local_1a8 != 0) && (local_170 != (code *)0x0)) &&
           (cVar4 = (*local_170)(&local_1b8), cVar4 == '\0')) goto LAB_146795c86;
LAB_146795f26:
        if (local_1a0 != 0xffffffffffffffff && local_1b0 < local_1a0) {
LAB_1467961e9:
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if ((bool)(bVar13 & local_1b0 < local_2c8)) {
          if (local_2c8 < local_1a0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          local_78 = local_2d8;
          local_70 = local_2d0;
          FUN_14679160e(local_1b8);
          uVar10 = local_2a8;
          if ((local_2a8 == 0) &&
             (FUN_14678cc2f("Erroneously found a null view at index = %zu, directory = %p.\n",
                            local_1b0,local_2e8), uVar10 = local_2a8, local_2a8 == 0)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          goto LAB_14679611b;
        }
      }
      else {
LAB_146795c86:
        lVar6 = (ulonglong)local_1b8[1] * 8 + DAT_14c80ad08;
        if (lVar6 != 0 && (ulonglong)local_1b8[1] != 0) {
          uVar10 = (local_1b0 - 1) + (ulonglong)(local_1b0 == 0);
          local_2f8 = uVar10 >> 7;
          local_2e0 = (ulonglong)*(uint *)(lVar6 + 0x24);
          local_2b8 = (ulonglong)*(uint *)(lVar6 + 0x20) * 8 + DAT_14c80ad08;
          if ((ulonglong)*(uint *)(lVar6 + 0x20) == 0) {
            local_2b8 = 0;
          }
          local_2f0 = local_2f8 * 4;
          if (local_2f0 < local_2e0) {
            uVar10 = (ulonglong)((uint)(uVar10 >> 5) & 3);
            do {
              uVar7 = (ulonglong)*(uint *)(local_2b8 + local_2f8 * 4);
              lVar6 = uVar7 * 8 + DAT_14c80ad08;
              if (uVar7 == 0) {
                lVar6 = 0;
              }
              uVar7 = local_2e0 - local_2f0;
              local_2c0 = 4;
              if (uVar7 < 4) {
                local_2c0 = uVar7;
              }
              if (uVar10 < uVar7) {
                do {
                  uVar7 = *(ulonglong *)(lVar6 + uVar10 * 8);
                  uVar5 = (*local_178)(uVar7,&local_1b8);
                  if (uVar5 != 0) {
                    lVar1 = lVar6 + uVar10 * 8;
                    lVar2 = local_2f0 + uVar10;
                    do {
                      uVar12 = 0;
                      if (uVar5 != 0) {
                        for (; (uVar5 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
                        }
                      }
                      local_1b0 = lVar2 * 0x20 + 1 + (ulonglong)uVar12;
                      uVar12 = 1 << ((byte)uVar12 & 0x1f);
                      uStack_190 = (undefined5)local_1b0;
                      uStack_18b = (undefined3)(local_1b0 >> 0x28);
                      uStack_184 = 0;
                      if (local_1a0 == 0xffffffffffffffff) {
                        local_1a0 = local_1b0;
                      }
                      bVar13 = 1;
                      local_198 = lVar1;
                      uStack_188 = uVar12;
                      local_180 = uVar7;
                      if (((local_1a8 <= local_1b0) || (local_170 == (code *)0x0)) ||
                         (cVar4 = (*local_170)(&local_1b8), cVar4 != '\0')) goto LAB_146795f26;
                      uVar5 = uVar5 & ~uVar12;
                    } while (uVar5 != 0);
                  }
                  uVar10 = uVar10 + 1;
                } while (uVar10 < local_2c0);
              }
              local_2f0 = local_2f8 * 4 + 4;
              local_2f8 = local_2f8 + 1;
              uVar10 = 0;
              bVar13 = 0;
            } while (local_2f0 < local_2e0);
          }
          else {
            bVar13 = 0;
          }
          goto LAB_146795f26;
        }
        if ((local_1a0 != 0xffffffffffffffff) && (local_1b0 < local_1a0)) goto LAB_1467961e9;
      }
      param_1 = local_2e8;
      LOCK();
      UNLOCK();
      uVar10 = (ulonglong)*local_1b8;
      lVar6 = DAT_14c80ad08;
      if (uVar10 < 8) {
        lVar6 = 0;
      }
      iVar8 = 0;
      if (lVar6 + uVar10 != 0) {
        lVar6 = (ulonglong)local_1b8[1] * 8 + DAT_14c80ad08;
        iVar8 = 1;
        if (lVar6 != 0 && local_1b8[1] != 0) {
          iVar8 = *(int *)(lVar6 + 0x30) + 1;
        }
      }
    } while (iVar8 != (int)local_2c8);
    if (local_2c8 < local_1a0) {
      local_1a0 = local_2c8;
    }
    local_78 = local_2d8;
    local_70 = local_2d0;
    local_1b0 = local_2c8;
    FUN_14679160e(local_1b8,&local_78);
LAB_14679602d:
    if (local_2fc == 0) {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    }
    lVar6 = DAT_14c80ad08;
    if ((ulonglong)*param_1 < 8) {
      lVar6 = 0;
    }
    uVar10 = 0;
    if (lVar6 + (ulonglong)*param_1 != 0) {
      lVar6 = (ulonglong)param_1[1] * 8 + DAT_14c80ad08;
      uVar10 = 1;
      if (lVar6 != 0 && param_1[1] != 0) {
        uVar10 = (ulonglong)(*(int *)(lVar6 + 0x30) + 1);
      }
    }
    if (uVar10 < local_1b0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (uVar10 <= local_1b0) {
      uVar10 = FUN_146797013();
      if (uVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar6 = 0;
      if (7 < (ulonglong)*param_1) {
        lVar6 = DAT_14c80ad08;
      }
      if ((lVar6 + (ulonglong)*param_1 == 0) ||
         ((lVar6 = (ulonglong)param_1[1] * 8 + DAT_14c80ad08, lVar6 != 0 && param_1[1] != 0 &&
          (*(int *)(lVar6 + 0x30) == -1)))) {
        FUN_14677dae1(param_1);
      }
      FUN_146791935(param_1,local_1b0,uVar10 | 2);
      FUN_146791662(param_1,local_1b0);
      if (local_2fc == 0) {
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
      }
LAB_14679611b:
      if ((local_60 ^ (ulonglong)local_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return uVar10;
    }
    if (local_2fc == 0) {
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    }
  } while( true );
}



// FUNCTION 1467961f3 FUN_1467961f3 body=4 status=ok
// SIG undefined FUN_1467961f3(void)

undefined8 FUN_1467961f3(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 1467961f7 FUN_1467961f7 body=246 status=ok
// SIG undefined FUN_1467961f7(void)

undefined8 FUN_1467961f7(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  code *pcVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  
  piVar7 = (int *)param_1[10];
  uVar10 = FUN_146796f5a(*param_1,param_1[1]);
  if (((uint)uVar10 & 7) != 2) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  iVar4 = piVar7[1];
  if (POPCOUNT(iVar4) != 1) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  uVar10 = uVar10 & 0xfffffffffffffff8;
  iVar5 = piVar7[0x26];
  iVar6 = piVar7[0x2a];
  uVar11 = (-iVar4 & (*(int *)(uVar10 + 0x20) + iVar4) - 1U) + *piVar7;
  if ((uint)(iVar5 + iVar6) < uVar11) {
    uVar12 = DAT_14c7584d0 << 0xd ^ DAT_14c7584d0;
    uVar12 = uVar12 >> 0x11 ^ uVar12;
    uVar10 = (ulonglong)uVar12;
    DAT_14c7584d0 = uVar12 << 5 ^ uVar12;
    if (0xdffffffe < DAT_14c7584d0 + 0xe0000000) {
      if ((*(byte *)((longlong)param_1 + 0x34) & 1) == 0) {
        puVar1 = (uint *)param_1[4];
        uVar12 = *(uint *)(param_1 + 6);
        do {
          uVar2 = *puVar1;
          uVar10 = (ulonglong)uVar2;
          if (uVar2 == (uVar2 & ~uVar12)) break;
          LOCK();
          uVar3 = *puVar1;
          if (uVar2 == uVar3) {
            *puVar1 = uVar2 & ~uVar12;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        } while (uVar2 != uVar3);
      }
      else {
        lVar8 = *param_1;
        do {
          uVar12 = *(uint *)(lVar8 + 8);
          uVar10 = (ulonglong)uVar12;
          if (uVar12 == (uVar12 & 0xfffffffe)) break;
          puVar1 = (uint *)(lVar8 + 8);
          LOCK();
          uVar2 = *puVar1;
          if (uVar12 == uVar2) {
            *puVar1 = uVar12 & 0xfffffffe;
          }
          else {
            uVar10 = (ulonglong)uVar2;
          }
          UNLOCK();
        } while (uVar12 != uVar2);
      }
    }
  }
  else {
    *(ulonglong *)(piVar7 + 2) = uVar10;
  }
  return CONCAT71((int7)(uVar10 >> 8),uVar11 <= (uint)(iVar5 + iVar6));
}



// FUNCTION 1467962ed FUN_1467962ed body=931 status=ok
// SIG undefined FUN_1467962ed(void)

undefined4 FUN_1467962ed(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  code *pcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  longlong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  longlong local_90;
  undefined5 uStack_88;
  undefined3 uStack_83;
  uint uStack_80;
  undefined1 uStack_7c;
  ulonglong local_78;
  code *local_70;
  code *local_68;
  undefined8 *local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = *(undefined8 *)(&DAT_14c758500 + (longlong)*(char *)(param_1 + 0xc) * 8);
  local_60 = &local_d0;
  local_b8 = 0;
  local_70 = FUN_146796691;
  local_68 = FUN_146796699;
  uVar5 = *(uint *)(param_1 + 4);
  lVar7 = (ulonglong)uVar5 * 8 + DAT_14c80ad08;
  local_d0 = param_2;
  local_c8 = param_3;
  local_b0 = param_1;
  if (lVar7 == 0 || (ulonglong)uVar5 == 0) {
    if ((*(byte *)(param_1 + 8) & 2) != 0) {
      local_58 = 1;
      local_f8 = 0xffffffffffffffff;
LAB_1467963d5:
      local_a8 = local_58 - 1;
      local_98 = 0xffffffffffffffff;
      local_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      uStack_83 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      pcVar8 = FUN_146796691;
      local_d8 = local_58;
      local_a0 = local_58;
      if (((local_a8 != 0 && uVar5 != 0) && lVar7 != 0) && ((ulonglong)*(uint *)(lVar7 + 0x24) != 0)
         ) {
        uVar9 = local_58 - 2 >> 7;
        local_f0 = (ulonglong)*(uint *)(lVar7 + 0x20) * 8 + DAT_14c80ad08;
        if ((ulonglong)*(uint *)(lVar7 + 0x20) == 0) {
          local_f0 = 0;
        }
        if (*(uint *)(lVar7 + 0x24) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        uVar10 = (ulonglong)((uint)(local_58 - 2 >> 5) & 3);
        do {
          uVar6 = (ulonglong)*(uint *)(local_f0 + uVar9 * 4);
          lVar7 = uVar6 * 8 + DAT_14c80ad08;
          if (uVar6 == 0) {
            lVar7 = 0;
          }
          local_e0 = uVar9 * 0x80 + 1;
          local_e8 = uVar9;
          do {
            uVar9 = *(ulonglong *)(lVar7 + uVar10 * 8);
            uVar5 = (*local_70)(uVar9,&local_b0);
            if (uVar5 != 0) {
              lVar1 = lVar7 + uVar10 * 8;
              lVar12 = uVar10 * 0x20 + local_e0;
              do {
                uVar11 = 0x1f;
                if (uVar5 != 0) {
                  for (; uVar5 >> uVar11 == 0; uVar11 = uVar11 - 1) {
                  }
                }
                local_a8 = (ulonglong)uVar11 + lVar12;
                uVar11 = 1 << ((byte)uVar11 & 0x1f);
                uStack_88 = (undefined5)local_a8;
                uStack_83 = (undefined3)(local_a8 >> 0x28);
                uStack_7c = 0;
                if (local_98 == 0xffffffffffffffff) {
                  local_98 = local_a8;
                }
                bVar13 = true;
                local_90 = lVar1;
                uStack_80 = uVar11;
                local_78 = uVar9;
                if (((local_a0 <= local_a8) || (local_68 == (code *)0x0)) ||
                   (cVar2 = (*local_68)(&local_b0), cVar2 != '\0')) goto LAB_1467964af;
                uVar5 = uVar5 & ~uVar11;
              } while (uVar5 != 0);
            }
            bVar13 = uVar10 != 0;
            uVar10 = uVar10 - 1;
          } while (bVar13);
          uVar10 = 3;
          uVar9 = local_e8 - 1;
          pcVar8 = local_70;
          param_1 = local_b0;
        } while (local_e8 != 0);
      }
      uVar9 = CONCAT44(*(uint *)(param_1 + 8) >> 1,*(uint *)(param_1 + 8)) & 0x100000001;
      iVar4 = (*pcVar8)(uVar9,&local_b0);
      if (iVar4 == 0) {
LAB_1467964a4:
        local_a8 = 0;
        bVar13 = false;
      }
      else {
        local_a8 = 0;
        local_90 = 0;
        uStack_88 = 0;
        uStack_83 = 0;
        uStack_80 = 1;
        uStack_7c = 1;
        if (local_98 == 0xffffffffffffffff) {
          local_98 = 0;
        }
        bVar13 = true;
        local_78 = uVar9;
        if ((local_68 != (code *)0x0) && (cVar2 = (*local_68)(&local_b0), cVar2 == '\0'))
        goto LAB_1467964a4;
      }
LAB_1467964af:
      local_58 = local_d8;
      local_50 = local_f8;
      FUN_1467918d2(local_b0,&local_58,local_98 + 1);
      uVar3 = 0;
      if (bVar13) {
        uVar3 = local_b8;
      }
      goto LAB_146796398;
    }
  }
  else {
    FUN_146796fca(&local_58,lVar7 + 0x10);
    if (local_58 != 0) {
      local_f8 = local_50;
      uVar5 = *(uint *)(param_1 + 4);
      lVar7 = (ulonglong)uVar5 * 8 + DAT_14c80ad08;
      goto LAB_1467963d5;
    }
  }
  uVar3 = 0;
LAB_146796398:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 146796691 FUN_146796691 body=8 status=ok
// SIG undefined FUN_146796691(void)

ulonglong FUN_146796691(ulonglong param_1)

{
  return param_1 >> 0x20;
}



// FUNCTION 146796699 FUN_146796699 body=2240 status=ok
// SIG undefined FUN_146796699(void)

ulonglong FUN_146796699(longlong *param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  code *pcVar8;
  byte bVar9;
  longlong lVar10;
  PSRWLOCK pRVar11;
  char cVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined8 *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined7 uVar24;
  int iVar25;
  ulonglong uVar26;
  undefined1 *puVar27;
  int iVar28;
  ulonglong uVar29;
  PSRWLOCK pRVar30;
  bool bVar31;
  undefined1 auStack_d8 [32];
  int local_b8;
  int local_b0;
  int local_ac;
  ulonglong *local_a8;
  longlong local_a0;
  undefined8 *local_98;
  int local_8c;
  ulonglong local_88;
  ulonglong local_80;
  code *local_78;
  ulonglong local_70;
  code *local_68;
  ulonglong local_60;
  ulonglong local_58;
  PSRWLOCK local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar17 = *param_1;
  lVar15 = param_1[1];
  lVar5 = param_1[4];
  uVar20 = *(uint *)(param_1 + 6);
  bVar2 = *(byte *)((longlong)param_1 + 0x34);
  plVar6 = (longlong *)param_1[10];
  puVar14 = (ulonglong *)plVar6[2];
  local_58 = *puVar14;
  local_60 = puVar14[1];
  local_80 = puVar14[4];
  local_88 = puVar14[5];
  pcVar7 = (code *)puVar14[8];
  local_68 = (code *)puVar14[9];
  pcVar8 = (code *)puVar14[0xc];
  iVar28 = *(int *)((longlong)puVar14 + 0x6c);
  uVar26 = puVar14[0xf];
  local_70 = puVar14[0x10];
  lVar22 = *plVar6;
  lVar10 = plVar6[1];
  local_50 = (PSRWLOCK)0x0;
  if ((bVar2 & 1) == 0) {
    do {
      uVar3 = *(uint *)(lVar5 + 4);
      if (uVar3 == (uVar3 & ~uVar20)) goto LAB_146796829;
      LOCK();
      bVar31 = uVar3 == *(uint *)(lVar5 + 4);
      if (bVar31) {
        *(uint *)(lVar5 + 4) = uVar3 & ~uVar20;
      }
      UNLOCK();
    } while (!bVar31);
  }
  else {
    do {
      uVar3 = *(uint *)(lVar17 + 8);
      if (uVar3 == (uVar3 & 0xfffffffd)) goto LAB_146796829;
      LOCK();
      bVar31 = uVar3 == *(uint *)(lVar17 + 8);
      if (bVar31) {
        *(uint *)(lVar17 + 8) = uVar3 & 0xfffffffd;
      }
      UNLOCK();
    } while (!bVar31);
  }
  local_b0 = (int)lVar10;
  local_ac = iVar28;
  local_a0 = lVar22;
  local_78 = pcVar8;
  uVar13 = FUN_146796f5a(lVar17,lVar15);
  if (((uint)uVar13 & 7) != 2) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  puVar14 = (ulonglong *)(uVar13 & 0xfffffffffffffff8);
  if (local_ac == 1) {
    if (local_b0 == 0) {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    }
    iVar28 = 1;
    pRVar11 = local_50;
  }
  else {
    local_a8 = puVar14;
    cVar12 = FUN_14678183f(local_a0,puVar14 + 1);
    if (cVar12 == '\0') {
      FUN_146791740(lVar17,lVar15);
      *(undefined4 *)(plVar6 + 3) = 2;
      uVar26 = 1;
      goto LAB_14679682b;
    }
    pRVar30 = (PSRWLOCK)(local_a8 + 2);
    puVar14 = local_a8;
    iVar28 = local_b0;
    pRVar11 = local_50;
    if (local_50 != pRVar30) {
      if (local_50 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(local_50);
      }
      puVar14 = local_a8;
      iVar28 = local_b0;
      pRVar11 = pRVar30;
      if (pRVar30 != (PSRWLOCK)0x0) {
        AcquireSRWLockExclusive(pRVar30);
        puVar14 = local_a8;
        iVar28 = local_b0;
      }
    }
  }
  local_50 = pRVar11;
  if (((*(byte *)((longlong)puVar14 + 0x1c) & 1) == 0) || (*(int *)((longlong)puVar14 + 0x24) != 0))
  {
    uVar26 = 0;
    lVar17 = local_a0;
    iVar28 = local_ac;
    iVar25 = local_b0;
  }
  else {
    local_a8 = puVar14;
    local_8c = iVar28;
    if ((*puVar14 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    local_98 = (undefined8 *)(*puVar14 & 0xfffffffffffffffe);
    uVar13 = local_70 >> ((byte)uVar26 & 0x3f);
    if (uVar13 != 0) {
      uVar26 = uVar13;
      do {
        uVar19 = (ulonglong)*(uint *)((longlong)local_98 + uVar26 * 4 + 0x10);
        lVar15 = DAT_14c80ad08 + uVar19 * 8;
        if ((lVar15 != 0 && uVar19 != 0) && ((*(byte *)(lVar15 + 0x11) & 8) == 0)) {
          lVar22 = DAT_14c80ad08 + (ulonglong)(uint)*(uint3 *)(lVar15 + 0xb) * 8;
          if (*(uint3 *)(lVar15 + 0xb) == 0) {
            lVar22 = 0;
          }
          if ((ulonglong)*(byte *)(lVar15 + 0xe) == 0) {
            do {
              uVar3 = *(uint *)(lVar22 + 8);
              if ((uVar3 & 0xfffffffe) == uVar3) goto LAB_146796aa8;
              LOCK();
              bVar31 = uVar3 == *(uint *)(lVar22 + 8);
              if (bVar31) {
                *(uint *)(lVar22 + 8) = uVar3 & 0xfffffffe;
              }
              UNLOCK();
            } while (!bVar31);
          }
          else {
            uVar19 = (ulonglong)*(byte *)(lVar15 + 0xe) - 1;
            uVar29 = (ulonglong)((uint)(uVar19 >> 5) & 3);
            uVar23 = (ulonglong)
                     *(uint *)(DAT_14c80ad08 + 0x20 + (ulonglong)*(uint *)(lVar22 + 4) * 8);
            lVar22 = DAT_14c80ad08 + uVar23 * 8;
            if (uVar23 == 0) {
              lVar22 = 0;
            }
            uVar23 = (ulonglong)*(uint *)(lVar22 + (uVar19 >> 7) * 4);
            lVar22 = DAT_14c80ad08 + uVar23 * 8;
            if (uVar23 == 0) {
              lVar22 = 0;
            }
            bVar9 = (byte)uVar19 & 0x1f;
            do {
              uVar3 = *(uint *)(lVar22 + uVar29 * 8);
              uVar18 = uVar3 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
              if (uVar3 == uVar18) goto LAB_146796aa8;
              puVar1 = (uint *)(lVar22 + uVar29 * 8);
              LOCK();
              bVar31 = uVar3 == *puVar1;
              if (bVar31) {
                *puVar1 = uVar18;
              }
              UNLOCK();
            } while (!bVar31);
          }
          bVar9 = *(byte *)(lVar15 + 0x11);
          if ((bVar9 & 4) == 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          if ((bVar9 & 1) != 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          *(byte *)(lVar15 + 0x11) = bVar9 | 8;
        }
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
    }
    if ((bVar2 & 1) == 0) {
      do {
        uVar3 = *(uint *)(lVar5 + 4);
        if (uVar3 == (uVar3 & ~uVar20)) break;
        LOCK();
        bVar31 = uVar3 == *(uint *)(lVar5 + 4);
        if (bVar31) {
          *(uint *)(lVar5 + 4) = uVar3 & ~uVar20;
        }
        UNLOCK();
      } while (!bVar31);
    }
    else {
      do {
        uVar3 = *(uint *)(lVar17 + 8);
        if (uVar3 == (uVar3 & 0xfffffffd)) break;
        LOCK();
        bVar31 = uVar3 == *(uint *)(lVar17 + 8);
        if (bVar31) {
          *(uint *)(lVar17 + 8) = uVar3 & 0xfffffffd;
        }
        UNLOCK();
      } while (!bVar31);
    }
    lVar15 = (*pcVar7)(*local_98);
    uVar26 = local_80;
    puVar21 = local_98;
    if ((local_58 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    if (*(longlong *)(lVar15 + 0x18) == 0) {
LAB_146796baa:
      puVar1 = (uint *)(lVar5 + 4);
      if ((bVar2 & 1) != 0) {
        uVar20 = 2;
        puVar1 = (uint *)(lVar17 + 8);
      }
      if ((*puVar1 & uVar20) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      bVar2 = *(byte *)((longlong)local_a8 + 0x1c);
      if ((bVar2 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      iVar28 = *(int *)((longlong)local_a8 + 0x24);
      if (iVar28 != 0) {
        uVar16 = FUN_146795881(local_ac,local_a0);
        FUN_14678cc2f("Error: shared view %p (%s) has is_in_use_for_allocation_count = %u\n",
                      local_a8,uVar16,iVar28);
        puVar21 = local_98;
        if (uVar13 != 0) {
          uVar26 = 0;
          lVar17 = DAT_14c80ad08;
          do {
            uVar19 = (ulonglong)*(uint *)((longlong)puVar21 + uVar26 * 4 + 0x14);
            if ((uVar19 != 0) && (lVar15 = lVar17 + uVar19 * 8, lVar15 != 0)) {
              puVar27 = &DAT_149dfbe7e;
              if ((*(byte *)(lVar15 + 0x11) & 1) == 0) {
                puVar27 = &DAT_149dfbe7b;
              }
              FUN_14678cc2f("partial_index = %zu, partial_view = %p, is_in_use_for_allocation = %s\n"
                            ,uVar26,lVar15,puVar27);
              lVar17 = DAT_14c80ad08;
            }
            uVar26 = uVar26 + 1;
          } while (uVar13 != uVar26);
        }
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      uVar24 = (undefined7)((ulonglong)lVar15 >> 8);
      if (local_ac == 1) {
        if (local_80 != local_88) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        *(byte *)((longlong)local_a8 + 0x1c) = bVar2 & 0xfe;
        uVar4 = *(undefined4 *)(local_60 + 0x438);
        uVar16 = (*local_68)(lVar15);
        FUN_14678db4f(uVar16,uVar26,uVar4);
        (*local_78)(lVar15,1);
        *(longlong *)(local_a0 + 0x418) = *(longlong *)(local_a0 + 0x418) + uVar26;
        puVar21 = local_98;
      }
      else {
        if (*(longlong *)(lVar15 + 0x18) != 0) {
          if (local_80 <= local_88) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          local_b8 = local_b0;
          cVar12 = FUN_146795260(lVar15,local_a0,&local_50,1);
          if (cVar12 == '\0') {
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          lVar17 = FUN_14679581d(lVar15);
          if (lVar17 == 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          *(undefined4 *)(plVar6 + 3) = 3;
          uVar26 = CONCAT71(uVar24,1);
          goto LAB_146796adf;
        }
        *(byte *)((longlong)local_a8 + 0x1c) = bVar2 & 0xfe;
        if (local_50 != (PSRWLOCK)0x0) {
          ReleaseSRWLockExclusive(local_50);
          local_50 = (PSRWLOCK)0x0;
        }
        iVar28 = local_b0;
        cVar12 = FUN_14679544d(lVar15,local_a0,1);
        if (cVar12 == '\0') {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        (*local_78)(lVar15,iVar28);
        pRVar30 = (PSRWLOCK)(local_a8 + 2);
        if (pRVar30 != (PSRWLOCK)0x0) {
          AcquireSRWLockExclusive(pRVar30);
          local_50 = pRVar30;
        }
      }
      iVar28 = local_8c;
      if (uVar13 != 0) {
        lVar17 = DAT_14c80ad08;
        do {
          uVar26 = (ulonglong)*(uint *)((longlong)puVar21 + uVar13 * 4 + 0x10);
          if (((uVar26 != 0) && (lVar15 = lVar17 + uVar26 * 8, lVar15 != 0)) &&
             (bVar2 = *(byte *)(lVar15 + 0x11), (bVar2 & 8) != 0)) {
            *(byte *)(lVar15 + 0x11) = bVar2 & 0xf7;
            if ((bVar2 & 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            lVar17 = lVar17 + (ulonglong)(uint)*(uint3 *)(lVar15 + 0xb) * 8;
            if (*(uint3 *)(lVar15 + 0xb) == 0) {
              lVar17 = 0;
            }
            *(byte *)(lVar15 + 0x11) = bVar2 & 0xe7;
            cVar12 = FUN_146791662(lVar17,*(undefined1 *)(lVar15 + 0xe));
            lVar17 = DAT_14c80ad08;
            iVar28 = local_8c;
            if (cVar12 == '\0') {
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
          }
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      if (local_50 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(local_50);
        local_50 = (PSRWLOCK)0x0;
        iVar28 = local_8c;
      }
      if (iVar28 == 0) {
        AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
        FUN_146795a6f(puVar21);
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
      }
      else {
        FUN_146795a6f(puVar21);
      }
      *(undefined4 *)(plVar6 + 3) = 3;
      uVar26 = CONCAT71(uVar24,1);
      puVar14 = local_a8;
      lVar17 = local_a0;
      iVar28 = local_ac;
      iVar25 = local_b0;
    }
    else {
      if (local_80 != local_88) {
        if (local_80 <= local_88) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        uVar19 = local_80 / local_88;
        do {
          bVar31 = uVar19 == 0;
          uVar19 = uVar19 - 1;
          if (bVar31) goto LAB_146796aa8;
        } while (*(char *)((local_70 + 0x1f >> 5) * 4 + 0x2c + lVar15 + uVar19) != '\0');
        goto LAB_146796baa;
      }
LAB_146796aa8:
      puVar21 = local_98;
      if (local_ac == 1) {
        uVar26 = 0;
        pRVar11 = local_50;
      }
      else {
        uVar26 = 0;
LAB_146796adf:
        pRVar30 = (PSRWLOCK)(local_a8 + 2);
        pRVar11 = local_50;
        if (local_50 != pRVar30) {
          if (local_50 != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(local_50);
          }
          puVar21 = local_98;
          pRVar11 = pRVar30;
          if (pRVar30 != (PSRWLOCK)0x0) {
            AcquireSRWLockExclusive(pRVar30);
            puVar21 = local_98;
          }
        }
      }
      local_50 = pRVar11;
      puVar14 = local_a8;
      lVar17 = local_a0;
      iVar28 = local_ac;
      iVar25 = local_b0;
      if (uVar13 != 0) {
        lVar15 = DAT_14c80ad08;
        do {
          uVar19 = (ulonglong)*(uint *)((longlong)puVar21 + uVar13 * 4 + 0x10);
          if (((uVar19 != 0) && (lVar5 = lVar15 + uVar19 * 8, lVar5 != 0)) &&
             ((*(byte *)(lVar5 + 0x11) & 8) != 0)) {
            lVar17 = lVar15 + (ulonglong)(uint)*(uint3 *)(lVar5 + 0xb) * 8;
            if (*(uint3 *)(lVar5 + 0xb) == 0) {
              lVar17 = 0;
            }
            cVar12 = FUN_146791662(lVar17,*(undefined1 *)(lVar5 + 0xe));
            lVar15 = DAT_14c80ad08;
            if (cVar12 == '\0') {
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            *(byte *)(lVar5 + 0x11) = *(byte *)(lVar5 + 0x11) & 0xf7;
            puVar14 = local_a8;
            lVar17 = local_a0;
            iVar28 = local_ac;
            iVar25 = local_b0;
          }
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
    }
  }
  if (local_50 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_50);
    local_50 = (PSRWLOCK)0x0;
    lVar17 = local_a0;
    iVar28 = local_ac;
    iVar25 = local_b0;
  }
  if (iVar28 == 1) {
    if (iVar25 == 0) {
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    }
  }
  else if ((char)uVar26 == '\0') {
    FUN_146781cd7(lVar17,puVar14 + 1);
  }
LAB_14679682b:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar26 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_146796829:
  uVar26 = 0;
  goto LAB_14679682b;
}



// FUNCTION 146796f5a FUN_146796f5a body=112 status=ok
// SIG undefined FUN_146796f5a(void)

longlong FUN_146796f5a(uint *param_1,ulonglong param_2)

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



// FUNCTION 146796fca FUN_146796fca body=73 status=ok
// SIG undefined FUN_146796fca(void)

undefined8 * FUN_146796fca(undefined8 *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  ulonglong uVar5;
  
  do {
    uVar5 = *(ulonglong *)(*param_2 + 8);
    do {
      uVar4 = uVar5;
      uVar2 = *(undefined8 *)*param_2;
      uVar5 = *(ulonglong *)(*param_2 + 8);
    } while (*(ulonglong *)(*param_2 + 8) != uVar4);
    uVar5 = uVar4;
    if ((uVar4 & 1) != 0) break;
    uVar5 = uVar4 | 1;
    LOCK();
    auVar1 = *param_2;
    auVar3._8_8_ = uVar4;
    auVar3._0_8_ = uVar2;
    if (auVar3 == auVar1) {
      *(undefined8 *)*param_2 = uVar2;
      *(ulonglong *)(*param_2 + 8) = uVar5;
    }
    UNLOCK();
  } while (auVar3 != auVar1);
  *param_1 = uVar2;
  param_1[1] = uVar5;
  return param_1;
}



// FUNCTION 146797013 FUN_146797013 body=120 status=ok
// SIG undefined FUN_146797013(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_146797013(ulonglong param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14678871b(0x28,"pas_segregated_shared_view",0);
  _DAT_14c80af88 = _DAT_14c80af88 + 1;
  *puVar2 = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 1));
  InitializeSRWLock((PSRWLOCK)(puVar2 + 2));
  puVar2[4] = 0;
  *(uint *)(puVar2 + 3) = *(uint *)(puVar2 + 3) & 0x80000000 | (uint)param_1 & 0x7fffffff;
  if ((param_1 & 0xffffffff80000000) == 0) {
    *(byte *)((longlong)puVar2 + 0x1c) = *(byte *)((longlong)puVar2 + 0x1c) & 0xfe;
    return puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14679708b FUN_14679708b body=803 status=ok
// SIG undefined FUN_14679708b(void)

longlong *
FUN_14679708b(byte *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,longlong param_5)

{
  code *pcVar1;
  BOOLEAN BVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  PSRWLOCK *ppRVar8;
  code *pcVar9;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  int local_94;
  longlong *local_90;
  code *local_88;
  code *local_80;
  byte *local_78;
  code *local_70;
  ulonglong local_68;
  undefined8 local_60;
  PSRWLOCK local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*param_1 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  local_68 = (ulonglong)*(byte *)(param_5 + 0x1c);
  pcVar9 = *(code **)(param_5 + 0x40);
  local_70 = *(code **)(param_5 + 0x48);
  local_88 = *(code **)(param_5 + 0x58);
  local_94 = *(int *)(param_5 + 0x68);
  iVar4 = *(int *)(param_5 + 0x6c);
  local_60 = *(undefined8 *)(param_5 + 0x88);
  pcVar1 = *(code **)(param_5 + 0xb8);
  cVar3 = *(char *)(param_3 + 0xd);
  if (cVar3 != '\x01') {
    if (cVar3 != '\x02') {
      if (cVar3 != '\0') {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    uVar7 = *(undefined8 *)(param_5 + 0x20);
    if (iVar4 == 1) {
      local_58[0] = (PSRWLOCK)0x0;
    }
    else {
      local_58[0] = (PSRWLOCK)(param_1 + 8);
      BVar2 = TryAcquireSRWLockExclusive(local_58[0]);
      if (BVar2 != '\0') {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
    }
    local_a8 = (ulonglong)(iVar4 != 1);
    FUN_14678ec28(uVar7,param_5,iVar4 == 1,local_58);
  }
  if (iVar4 != 1) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  }
  plVar5 = (longlong *)FUN_1467959a2(param_1,param_3,param_5);
  if (*plVar5 != 0) {
    if (iVar4 != 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    }
    FUN_14678d48b(*plVar5,param_5);
    uVar7 = 1;
    if (local_94 != 0) {
      if (local_94 != 1) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      uVar7 = 3;
    }
    (*local_88)(*plVar5,uVar7,0);
LAB_1467971e4:
    uVar7 = (*pcVar9)(*plVar5);
    FUN_146794f45(uVar7,(ulonglong)plVar5 | 3,0,param_5);
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x10));
    param_1[0x1c] = param_1[0x1c] | 1;
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x10));
LAB_14679721d:
    if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return plVar5;
  }
  local_90 = plVar5;
  local_80 = pcVar9;
  local_78 = param_1;
  if (iVar4 != 1) {
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  }
  FUN_14678f287(local_58);
  do {
    FUN_14678f28e(local_58);
    if (iVar4 == 1) {
      ppRVar8 = (PSRWLOCK *)0x0;
    }
    else {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
      ppRVar8 = local_58;
    }
    lVar6 = (*pcVar1)(param_2,ppRVar8,0);
    if (iVar4 == 1) {
      cVar3 = FUN_14678f2c1(local_58);
      if (cVar3 != '\0') {
LAB_1467972f0:
        param_1 = local_78;
        pcVar9 = local_80;
        plVar5 = local_90;
        if (lVar6 == 0) {
          FUN_146795a6f(local_90);
          if (iVar4 != 1) {
            ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
          }
          plVar5 = (longlong *)0x0;
          goto LAB_14679721d;
        }
        uVar7 = 1;
        if (local_94 != 0) {
          if (local_94 != 1) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          uVar7 = 3;
        }
        uVar7 = (*local_88)(lVar6,uVar7,1);
        if (iVar4 != 1) {
          ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
        }
        lVar6 = (*local_70)(uVar7);
        *plVar5 = lVar6;
        iVar4 = (int)(1L << ((byte)local_68 & 0x3f));
        *(uint *)(param_1 + 0x20) = -iVar4 & ((int)local_60 + iVar4) - 1U;
        goto LAB_1467971e4;
      }
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
      cVar3 = FUN_14678f2c1(local_58);
      if (cVar3 != '\0') {
        AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
        goto LAB_1467972f0;
      }
    }
    if (lVar6 != 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
  } while( true );
}



// FUNCTION 1467973af FUN_1467973af body=395 status=ok
// SIG undefined FUN_1467973af(void)

longlong FUN_1467973af(undefined8 *param_1,uint param_2,uint param_3,longlong param_4,
                      longlong param_5,int param_6)

{
  int iVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  bool bVar8;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (param_5 == 0) {
    FUN_146788169(param_4);
    uVar7 = 0;
    lVar5 = FUN_1467886fa(0x60,0x10,"pas_segregated_size_directory+pas_bitfit_size_class",0);
  }
  else {
    if (*(longlong *)(param_5 + 8) != param_4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar7 = *(undefined4 *)(param_5 + 0x6c);
    FUN_146788169(param_4);
    lVar5 = FUN_14678871b(0x38,"pas_segregated_size_directory",0);
  }
  FUN_146791270(lVar5,uVar7,(int)*(char *)*param_1,0);
  *(undefined8 **)(lVar5 + 0x18) = param_1;
  *(uint *)(lVar5 + 0x20) = *(uint *)(lVar5 + 0x20) & 0xf8000000 | param_2 & 0x7ffffff;
  if (POPCOUNT(param_3) != 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((param_3 - 1 & param_2) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  iVar1 = 0x1f;
  if (param_3 != 0) {
    for (; param_3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  uVar4 = param_2 | 0xf8000000;
  if (param_5 != 0) {
    uVar4 = iVar1 << 0x1b | param_2 & 0x7ffffff;
  }
  *(uint *)(lVar5 + 0x20) = uVar4;
  *(undefined8 *)(lVar5 + 0x24) = 0xffffffffffffffc0;
  *(undefined8 *)(lVar5 + 0x2c) = 0;
  if (param_5 == 0) {
    lVar6 = FUN_146792035(param_1,param_4,1);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    FUN_14677f6f4(lVar6,lVar5 + 0x40,param_2,param_4,*param_1);
  }
  *(undefined4 *)(lVar5 + 0x34) = 0;
  do {
    uVar4 = *(uint *)(lVar5 + 8);
    if ((uVar4 & 0xfffffffb) == uVar4) break;
    LOCK();
    bVar8 = uVar4 == *(uint *)(lVar5 + 8);
    if (bVar8) {
      *(uint *)(lVar5 + 8) = uVar4 & 0xfffffffb;
    }
    UNLOCK();
  } while (!bVar8);
  if (param_6 == 1) {
    FUN_14679753a(lVar5);
  }
  return lVar5;
}



// FUNCTION 14679753a FUN_14679753a body=81 status=ok
// SIG undefined FUN_14679753a(void)

void FUN_14679753a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  lVar2 = *plVar1;
  if (*(int *)(lVar2 + 0xc) == 0) {
    FUN_14679758b(param_1);
    lVar2 = *plVar1;
  }
  if (*(int *)(lVar2 + 8) == 0) {
    FUN_1467975e0(param_1);
    lVar2 = *plVar1;
  }
  if (*(int *)(lVar2 + 0x10) != 0) {
    return;
  }
  FUN_146797d0f(param_1);
  return;
}



// FUNCTION 14679758b FUN_14679758b body=85 status=ok
// SIG undefined FUN_14679758b(void)

void FUN_14679758b(longlong param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (*(char *)(param_1 + 0xc) != '\x01') {
    FUN_146797e10(param_1);
    if (*(int *)(param_1 + 0x2c) == 0) {
      FUN_14679fe59(param_1);
      if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (*(int *)(param_1 + 0x2c) == -1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    else if (*(int *)(param_1 + 0x2c) == -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  return;
}



// FUNCTION 1467975e0 FUN_1467975e0 body=1839 status=ok
// SIG undefined FUN_1467975e0(void)

void FUN_1467975e0(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  ulonglong uVar4;
  code *pcVar5;
  uint uVar6;
  void *pvVar7;
  BOOLEAN BVar8;
  uint *puVar9;
  undefined1 *_Dst;
  undefined1 *puVar10;
  void *_Dst_00;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  char cVar15;
  uint uVar16;
  longlong lVar17;
  longlong *plVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong *plVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  uint *puVar30;
  
  BVar8 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar8 != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  puVar9 = (uint *)FUN_146797e10(param_1);
  if ((puVar9[2] != 0) || (iVar23 = *(int *)(param_1 + 0xc) << 0x18, iVar23 == 0)) {
    return;
  }
  uVar24 = iVar23 >> 0x18;
  pbVar3 = *(byte **)(&DAT_14c758500 + (longlong)(int)uVar24 * 8);
  uVar20 = *(uint *)(param_1 + 0x20) & 0x7ffffff;
  uVar28 = (ulonglong)uVar20;
  if (DAT_14c80ad40 != (void *)0x0) {
    uVar21 = uVar20 >> 4 ^ uVar20;
    uVar21 = uVar21 * 0x20 + (uVar21 ^ 0xdeadbeef);
    uVar21 = uVar21 >> 0xb ^ uVar24 ^ uVar21;
    do {
      uVar11 = *(ulonglong *)((longlong)DAT_14c80ad40 + (ulonglong)(uVar21 & DAT_14c80ad4c) * 8);
      if (uVar11 < 2) {
        if (uVar11 != 1) break;
      }
      else if ((longlong)
               (int5)(CONCAT14(*(undefined1 *)(uVar11 + 0xc),*(undefined4 *)(uVar11 + 0x20)) &
                     0xff07ffffff) ==
               (CONCAT44(uVar24,*(uint *)(param_1 + 0x20)) & 0xffffffff07ffffff)) {
        if (uVar11 != 0 &&
            (void *)((longlong)DAT_14c80ad40 + (ulonglong)(uVar21 & DAT_14c80ad4c) * 8) !=
            (void *)0x0) {
          puVar30 = (uint *)((ulonglong)*(uint *)(uVar11 + 0x30) * 8 + DAT_14c80ad08);
          if ((ulonglong)*(uint *)(uVar11 + 0x30) == 0) {
            puVar30 = (uint *)0x0;
          }
          puVar9[3] = puVar30[3];
          *puVar9 = *puVar30;
          puVar9[1] = puVar30[1];
          if (*(ulonglong *)(pbVar3 + 0x28) < *(ulonglong *)(pbVar3 + 0x20)) {
            lVar17 = FUN_146797eee(param_1);
            lVar13 = FUN_146797eee(uVar11);
            *(undefined4 *)(lVar17 + 0x10) = *(undefined4 *)(lVar13 + 0x10);
          }
          LOCK();
          UNLOCK();
          puVar9[2] = puVar30[2];
          return;
        }
        break;
      }
      uVar21 = uVar21 + 1;
    } while( true );
  }
  bVar1 = *pbVar3;
  bVar2 = pbVar3[0x1c];
  uVar11 = *(ulonglong *)(pbVar3 + 0x20);
  uVar4 = *(ulonglong *)(pbVar3 + 0x28);
  uVar25 = *(ulonglong *)(pbVar3 + 0x38);
  uVar24 = *(uint *)(pbVar3 + 0x6c);
  uVar12 = *(ulonglong *)(pbVar3 + 0x90);
  lVar17 = *(longlong *)(pbVar3 + 0xa0);
  uVar29 = *(longlong *)(pbVar3 + 0x80) + 0x1f;
  uVar19 = uVar29 >> 3 & 0xfffffffffffffffc;
  _Dst = (undefined1 *)
         FUN_146788523(uVar19,4,"pas_segregated_size_directory_data/full_alloc_bits",0);
  puVar10 = _Dst;
  if (&DAT_00000007 < _Dst) {
    puVar10 = _Dst + -DAT_14c80ad08;
    if (DAT_14c758498 <= puVar10) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    if (puVar10 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
  }
  lVar13 = 0xc;
  do {
    *(char *)((longlong)puVar9 + lVar13) = (char)puVar10;
    puVar10 = (undefined1 *)((ulonglong)puVar10 >> 8);
    lVar13 = lVar13 + 1;
  } while (lVar13 != 0x10);
  memset(_Dst,0,uVar19);
  if ((~(uint)(-1L << (bVar2 & 0x3f)) & uVar20) != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (uVar25 < uVar28) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar25 = lVar17 + uVar12;
  uVar27 = (int)uVar25 - (int)(uVar25 % uVar28);
  uVar19 = (uVar12 + uVar28) - 1;
  iVar23 = (int)(uVar19 % uVar28);
  iVar22 = (int)uVar19;
  uVar19 = (uVar11 + uVar28 + -1) - uVar25;
  uVar21 = ((int)(uVar19 % uVar28) - (int)uVar19) + (int)uVar11;
  uVar16 = ((int)((uVar11 - uVar12) % uVar28) - (int)(uVar11 - uVar12)) + (int)uVar11;
  if (uVar21 - uVar16 <= (iVar23 - iVar22) + uVar27) {
    uVar21 = uVar27;
    uVar16 = iVar22 - iVar23;
  }
  *puVar9 = uVar16;
  puVar9[1] = uVar21;
  uVar27 = uVar21 - uVar16;
  if (uVar16 <= uVar21 && uVar27 != 0) {
    do {
      uVar6 = uVar16 >> (bVar2 & 0x3f);
      *(uint *)(_Dst + (ulonglong)(uVar6 >> 5) * 4) =
           *(uint *)(_Dst + (ulonglong)(uVar6 >> 5) * 4) | 1 << ((byte)uVar6 & 0x1f);
      uVar16 = uVar16 + uVar20;
    } while (uVar16 < uVar21);
  }
  if ((uVar24 & 0xfffffffe) != 4) {
    if (uVar29 < 0x20) goto LAB_146797d0d;
    uVar29 = uVar29 >> 5;
    uVar27 = 0;
    do {
      uVar27 = (uVar27 + 1) - (uint)(*(int *)(_Dst + uVar29 * 4 + -4) == 0);
      uVar29 = uVar29 - 1;
    } while (uVar29 != 0);
  }
  if (uVar27 == 0) {
LAB_146797d0d:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (uVar11 <= uVar4) {
LAB_1467978c6:
    LOCK();
    UNLOCK();
    puVar9[2] = uVar27;
    cVar15 = *(char *)(param_1 + 0xc);
    uVar20 = *(uint *)(param_1 + 0x20);
    if (DAT_14c80ad48 <= (uint)((DAT_14c80ad54 + DAT_14c80ad50) * 2)) {
      uVar24 = DAT_14c80ad48 * 2;
      if ((uint)(DAT_14c80ad50 * 6) < DAT_14c80ad48 * 2) {
        uVar24 = DAT_14c80ad48;
      }
      uVar28 = 0x10;
      if (DAT_14c80ad48 != 0) {
        uVar28 = (ulonglong)uVar24;
      }
      uVar24 = (uint)uVar28;
      if (POPCOUNT(uVar24) != 1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      _Dst_00 = (void *)FUN_1467803da(uVar28 * 8,"pas_exclusive_view_template_memo_table/table",0,0)
      ;
      if (uVar24 != 0) {
        memset(_Dst_00,0,uVar28 * 8);
      }
      pvVar7 = DAT_14c80ad40;
      uVar28 = (ulonglong)DAT_14c80ad48;
      if (uVar28 == 0) {
        lVar17 = 0;
      }
      else {
        uVar11 = 0;
        do {
          uVar4 = *(ulonglong *)((longlong)DAT_14c80ad40 + uVar11 * 8);
          if (1 < uVar4) {
            uVar21 = *(uint *)(uVar4 + 0x20) & 0x7ffffff;
            uVar21 = uVar21 >> 4 ^ uVar21;
            uVar21 = uVar21 * 0x20 + (uVar21 ^ 0xdeadbeef);
            uVar21 = uVar21 >> 0xb ^ (int)*(char *)(uVar4 + 0xc) ^ uVar21;
            do {
              uVar25 = (ulonglong)(uVar21 & uVar24 - 1);
              uVar21 = uVar21 + 1;
            } while (1 < *(ulonglong *)((longlong)_Dst_00 + uVar25 * 8));
            *(ulonglong *)((longlong)_Dst_00 + uVar25 * 8) = uVar4;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar28);
        lVar17 = uVar28 << 3;
      }
      DAT_14c80ad54 = 0;
      DAT_14c80ad40 = _Dst_00;
      DAT_14c80ad48 = uVar24;
      DAT_14c80ad4c = uVar24 - 1;
      FUN_1467803e9(pvVar7,lVar17,0,0);
    }
    uVar24 = uVar20 & 0x7ffffff;
    uVar24 = uVar24 >> 4 ^ uVar24;
    uVar24 = uVar24 * 0x20 + (uVar24 ^ 0xdeadbeef);
    uVar24 = uVar24 >> 0xb ^ (int)cVar15 ^ uVar24;
    plVar18 = (longlong *)0x0;
    do {
      plVar26 = (longlong *)((longlong)DAT_14c80ad40 + (ulonglong)(uVar24 & DAT_14c80ad4c) * 8);
      lVar17 = *plVar26;
      if (lVar17 == 1) {
        if (plVar18 == (longlong *)0x0) {
          plVar18 = plVar26;
        }
      }
      else {
        if (lVar17 == 0) {
          if (plVar18 != (longlong *)0x0) {
            DAT_14c80ad54 = DAT_14c80ad54 + -1;
            plVar26 = plVar18;
          }
          DAT_14c80ad50 = DAT_14c80ad50 + 1;
          *plVar26 = param_1;
          return;
        }
        if ((longlong)
            (int5)(CONCAT14(*(undefined1 *)(lVar17 + 0xc),*(undefined4 *)(lVar17 + 0x20)) &
                  0xff07ffffff) == (CONCAT44((int)cVar15,uVar20) & 0xffffffff07ffffff)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
      }
      uVar24 = uVar24 + 1;
    } while( true );
  }
  lVar17 = FUN_146797eee(param_1);
  uVar28 = uVar11 / uVar4;
  puVar10 = (undefined1 *)
            FUN_146788523(uVar28,1,"pas_extended_segregated_size_directory_data/full_use_counts",0);
  if ((bVar1 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar19 = uVar28 * uVar4;
  memset(puVar10,0,uVar28);
  if (uVar12 != 0) {
    if (uVar19 == 0) goto LAB_146797c28;
    uVar29 = uVar19;
    if (uVar12 < uVar19) {
      uVar29 = uVar12;
    }
    uVar29 = (uVar29 - 1) / uVar4;
    if (uVar28 <= uVar29) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar14 = 0;
    do {
      if (puVar10[uVar14] == -1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      cVar15 = puVar10[uVar14] + '\x01';
      if (cVar15 == -1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      puVar10[uVar14] = cVar15;
      uVar14 = uVar14 + 1;
    } while (uVar14 <= uVar29);
  }
  if (uVar12 <= uVar19) {
    uVar20 = *(uint *)(DAT_14c80ad08 + 4 + (ulonglong)*(uint *)(param_1 + 0x30) * 8);
    uVar24 = *(uint *)(param_1 + 0x20) & 0x7ffffff;
    uVar12 = (ulonglong)*(uint *)(DAT_14c80ad08 + (ulonglong)*(uint *)(param_1 + 0x30) * 8);
    do {
      if (uVar20 <= uVar12) {
        if (uVar11 <= uVar25) goto LAB_146797c8b;
        if (uVar25 < uVar19) {
          uVar12 = uVar19;
          if (uVar11 < uVar19) {
            uVar12 = uVar11;
          }
          uVar12 = (uVar12 - 1) / uVar4;
          if (uVar28 <= uVar12) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          for (uVar25 = uVar25 / uVar4; uVar25 <= uVar12; uVar25 = uVar25 + 1) {
            if (puVar10[uVar25] == -1) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            cVar15 = puVar10[uVar25] + '\x01';
            if (cVar15 == -1) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            puVar10[uVar25] = cVar15;
          }
          if (uVar19 < uVar11) break;
LAB_146797c8b:
          if (&DAT_00000007 < puVar10) {
            puVar10 = puVar10 + -DAT_14c80ad08;
            if (DAT_14c758498 <= puVar10) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            if (puVar10 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
          }
          lVar13 = 0;
          do {
            *(char *)(lVar17 + 0x10 + lVar13) = (char)puVar10;
            puVar10 = (undefined1 *)((ulonglong)puVar10 >> 8);
            lVar13 = lVar13 + 1;
          } while (lVar13 != 4);
          goto LAB_1467978c6;
        }
        break;
      }
      if (uVar19 <= uVar12) break;
      uVar29 = uVar12 + uVar24;
      if (uVar24 != 0) {
        uVar14 = uVar19;
        if (uVar29 < uVar19) {
          uVar14 = uVar29;
        }
        uVar14 = (uVar14 - 1) / uVar4;
        if (uVar28 <= uVar14) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        for (uVar12 = uVar12 / uVar4; uVar12 <= uVar14; uVar12 = uVar12 + 1) {
          if (puVar10[uVar12] == -1) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          cVar15 = puVar10[uVar12] + '\x01';
          if (cVar15 == -1) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          puVar10[uVar12] = cVar15;
        }
      }
      uVar12 = uVar29;
    } while (uVar29 <= uVar19);
  }
LAB_146797c28:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



// FUNCTION 146797d0f FUN_146797d0f body=257 status=ok
// SIG undefined FUN_146797d0f(void)

void FUN_146797d0f(uint *param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((char)param_1[3] != '\x01') {
    do {
      uVar6 = param_1[2];
      if ((uVar6 | 4) == uVar6) {
        return;
      }
      LOCK();
      bVar8 = uVar6 == param_1[2];
      if (bVar8) {
        param_1[2] = uVar6 | 4;
      }
      UNLOCK();
    } while (!bVar8);
    cVar3 = FUN_146797f2b(param_1);
    if (cVar3 != '\0') {
      if (param_1[10] != 0xffffffff) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      FUN_14679fea5(param_1);
      if (param_1[10] == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (param_1[10] == 0xffffffff) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      lVar5 = 0;
      if (7 < (ulonglong)*param_1) {
        lVar5 = DAT_14c80ad08;
      }
      if (lVar5 + (ulonglong)*param_1 != 0) {
        lVar5 = (ulonglong)param_1[1] * 8 + DAT_14c80ad08;
        uVar7 = 1;
        if ((lVar5 == 0 || param_1[1] == 0) ||
           (uVar6 = *(int *)(lVar5 + 0x30) + 1, uVar7 = (ulonglong)uVar6, uVar6 != 0)) {
          do {
            uVar7 = uVar7 - 1;
            uVar4 = FUN_146797f65(param_1,uVar7);
            if (((uVar4 & 6) == 0) && (cVar3 = thunk_FUN_146799942(uVar4), cVar3 != '\0')) {
              uVar6 = param_1[10];
              lVar5 = FUN_14679975a(uVar4);
              *(uint *)(lVar5 + 0x28) = uVar6;
              FUN_146799983(uVar4);
            }
          } while (uVar7 != 0);
        }
      }
    }
  }
  return;
}



// FUNCTION 146797e10 FUN_146797e10 body=222 status=ok
// SIG undefined FUN_146797e10(void)

void FUN_146797e10(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
  if (((ulonglong)*(uint *)(param_1 + 0x30) * 8 + DAT_14c80ad08 == 0 ||
       (ulonglong)*(uint *)(param_1 + 0x30) == 0) &&
     (lVar1 = *(longlong *)(&DAT_14c758500 + (longlong)*(char *)(param_1 + 0xc) * 8),
     (ulonglong)*(uint *)(param_1 + 0x30) * 8 + DAT_14c80ad08 == 0 ||
     (ulonglong)*(uint *)(param_1 + 0x30) == 0)) {
    if ((lVar1 == 0) || (*(ulonglong *)(lVar1 + 0x20) <= *(ulonglong *)(lVar1 + 0x28))) {
      puVar3 = (undefined8 *)FUN_14678871b(0x10,"pas_segregated_size_directory_data",0);
    }
    else {
      puVar3 = (undefined8 *)FUN_14678871b(0x14,"pas_extended_segregated_size_directory_data",0);
      *(undefined4 *)(puVar3 + 2) = 0;
    }
    *puVar3 = 0;
    puVar3[1] = 0;
    LOCK();
    UNLOCK();
    if (puVar3 == (undefined8 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar5 = (longlong)puVar3 - DAT_14c80ad08;
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
      uVar4 = (undefined4)(uVar5 >> 3);
    }
    *(undefined4 *)(param_1 + 0x30) = uVar4;
  }
  return;
}



// FUNCTION 146797eee FUN_146797eee body=61 status=ok
// SIG undefined FUN_146797eee(void)

longlong FUN_146797eee(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(&DAT_14c758500 + (longlong)*(char *)(param_1 + 0xc) * 8);
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (*(ulonglong *)(lVar2 + 0x28) < *(ulonglong *)(lVar2 + 0x20)) {
    lVar2 = (ulonglong)*(uint *)(param_1 + 0x30) * 8 + DAT_14c80ad08;
    if ((ulonglong)*(uint *)(param_1 + 0x30) == 0) {
      lVar2 = 0;
    }
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 146797f2b FUN_146797f2b body=58 status=ok
// SIG undefined FUN_146797f2b(void)

undefined8 FUN_146797f2b(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc) << 0x18;
  if ((iVar1 != 0) &&
     (*(char *)(*(longlong *)(&DAT_14c758500 + (longlong)(iVar1 >> 0x18) * 8) + 0xb4) == '\x01')) {
    uVar2 = FUN_1467884e8(**(undefined8 **)(param_1 + 0x18),*(uint *)(param_1 + 0x20) & 0x7ffffff);
    return uVar2;
  }
  return 0;
}



// FUNCTION 146797f65 FUN_146797f65 body=112 status=ok
// SIG undefined FUN_146797f65(void)

longlong FUN_146797f65(uint *param_1,ulonglong param_2)

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



// FUNCTION 146797fd5 FUN_146797fd5 body=556 status=ok
// SIG undefined FUN_146797fd5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

PSRWLOCK FUN_146797fd5(longlong param_1)

{
  PVOID pvVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  PSRWLOCK SRWLock;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  FUN_14677dba6();
LAB_146797ffc:
  do {
    uVar5 = *(uint *)(param_1 + 0x24) & 0x7f;
    if (uVar5 < 0x20) {
      SRWLock = (PSRWLOCK)((ulonglong)uVar5 * 0x148 + DAT_14c8084d0);
      AcquireSRWLockExclusive(SRWLock);
      if ((*(uint *)(param_1 + 0x24) & 0x7f) == uVar5) {
        return SRWLock;
      }
    }
    else {
      if (uVar5 < 0x40) {
        uVar5 = uVar5 - 0x20;
      }
      else {
        if (uVar5 != 0x40) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar3 = FUN_14677dc3e();
        uVar4 = FUN_14677dc3e();
        uVar5 = uVar3;
        if (((*(longlong *)(DAT_14c8084d0 + 0x28 + (ulonglong)uVar3 * 0x148) != 0) &&
            (uVar5 = uVar4, *(longlong *)(DAT_14c8084d0 + 0x28 + (ulonglong)uVar4 * 0x148) != 0)) &&
           (*(longlong *)(DAT_14c8084d0 + (ulonglong)uVar3 * 0x148 + 0x40) == 0)) {
          uVar5 = uVar3;
        }
        do {
          uVar3 = *(uint *)(param_1 + 0x24);
          if ((uVar3 & 0x7f) != 0x40) goto LAB_146797ffc;
          uVar6 = uVar3 >> 7;
          uVar4 = uVar6;
          if (uVar6 == 0x1ffffff) {
            uVar4 = 0xffffffff;
          }
          if (0x7f < uVar5 + 0x20) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (((~uVar4 & 0x1ffffff) != 0) == (uVar6 == 0x1ffffff)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          LOCK();
          bVar8 = uVar3 == *(uint *)(param_1 + 0x24);
          if (bVar8) {
            *(uint *)(param_1 + 0x24) = uVar4 << 7 | uVar5 + 0x20;
          }
          UNLOCK();
        } while (!bVar8);
      }
      SRWLock = (PSRWLOCK)((ulonglong)uVar5 * 0x148 + DAT_14c8084d0);
      AcquireSRWLockExclusive(SRWLock);
      uVar3 = *(uint *)(param_1 + 0x24) & 0x7f;
      if (uVar3 == uVar5) {
        return SRWLock;
      }
      if (uVar3 == uVar5 + 0x20) {
        if (SRWLock[8].Ptr != (PVOID)0x0) {
          _DAT_14c8084c0 = _DAT_14c8084c0 + 1;
          pvVar1 = SRWLock[8].Ptr;
          if (((uint)pvVar1 & 7) == 5) {
            uVar7 = (ulonglong)pvVar1 & 0xfffffffffffffff8;
          }
          else {
            uVar7 = FUN_146799574(pvVar1);
          }
          FUN_14677db66(SRWLock);
          do {
            uVar3 = *(uint *)(uVar7 + 0x24);
            uVar4 = uVar3 >> 7;
            bVar8 = uVar4 == 0x1ffffff;
            if (bVar8) {
              uVar4 = 0xffffffff;
            }
            if (((~uVar4 & 0x1ffffff) != 0) == bVar8) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            LOCK();
            bVar8 = uVar3 == *(uint *)(uVar7 + 0x24);
            if (bVar8) {
              *(uint *)(uVar7 + 0x24) = uVar4 << 7 | 0x40;
            }
            UNLOCK();
          } while (!bVar8);
        }
        FUN_14677db24(SRWLock,param_1);
        if (0x7f < uVar5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        do {
          uVar3 = *(uint *)(param_1 + 0x24);
          uVar4 = uVar3 >> 7;
          bVar8 = uVar4 == 0x1ffffff;
          if (bVar8) {
            uVar4 = 0xffffffff;
          }
          if (((~uVar4 & 0x1ffffff) != 0) == bVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          LOCK();
          bVar8 = uVar3 == *(uint *)(param_1 + 0x24);
          if (bVar8) {
            *(uint *)(param_1 + 0x24) = uVar4 << 7 | uVar5;
          }
          UNLOCK();
        } while (!bVar8);
        return SRWLock;
      }
    }
    ReleaseSRWLockExclusive(SRWLock);
  } while( true );
}



// FUNCTION 146798201 FUN_146798201 body=1813 status=ok
// SIG undefined FUN_146798201(void)

ulonglong FUN_146798201(uint *param_1)

{
  uint *puVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  byte bVar13;
  bool bVar14;
  undefined1 local_148 [44];
  int local_11c;
  ulonglong local_118;
  ulonglong local_110;
  uint *local_108;
  ulonglong local_100;
  ulonglong local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  uint *local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  uint *local_b0;
  undefined5 uStack_a8;
  undefined3 uStack_a3;
  uint uStack_a0;
  byte bStack_9c;
  ulonglong local_98;
  code *local_90;
  code *local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)local_148;
  local_11c = *(int *)(*(longlong *)(&DAT_14c758500 + (longlong)(char)param_1[3] * 8) + 0x6c);
  local_108 = param_1;
LAB_146798252:
  do {
    local_90 = FUN_1467994a1;
    local_88 = (code *)0x0;
    uStack_80 = 0;
    uVar8 = (ulonglong)*param_1;
    local_d0 = param_1;
    do {
      lVar6 = DAT_14c80ad08;
      if ((uint)uVar8 < 8) {
        lVar6 = 0;
      }
      uVar7 = (ulonglong)local_d0[1];
      if (lVar6 + uVar8 == 0) {
        lVar6 = DAT_14c80ad08 + uVar7 * 8;
        uVar12 = 0;
      }
      else {
        lVar6 = uVar7 * 8 + DAT_14c80ad08;
        uVar12 = 1;
        if (lVar6 != 0 && local_d0[1] != 0) {
          uVar12 = (ulonglong)(*(int *)(lVar6 + 0x30) + 1);
        }
      }
      if ((uVar7 == 0) || (lVar6 == 0)) {
        uVar10 = 0xffffffffffffffff;
        if ((local_d0[2] & 1) == 0) {
          local_c8 = (ulonglong)((uint)uVar8 != 0);
        }
        else {
          local_c8 = 0;
        }
      }
      else {
        FUN_1467994a5(&local_78);
        local_c8 = local_78;
        uVar10 = local_70;
      }
      if (local_c8 == uVar12) goto LAB_1467986d2;
      LOCK();
      UNLOCK();
      local_b8 = 0xffffffffffffffff;
      local_98 = 0;
      uStack_a0 = 0;
      bStack_9c = 0;
      local_b0 = (uint *)0x0;
      uStack_a8 = 0;
      uStack_a3 = 0;
      local_f8 = local_c8;
      local_f0 = uVar10;
      local_e8 = uVar12;
      local_c0 = uVar12;
      if (local_c8 == 0) {
        uVar8 = CONCAT44(local_d0[2] >> 1,local_d0[2]) & 0x100000001;
        iVar9 = (*local_90)(uVar8,&local_d0);
        if (iVar9 == 0) goto LAB_146798344;
        local_c8 = 0;
        local_b0 = (uint *)0x0;
        uStack_a8 = 0;
        uStack_a3 = 0;
        uStack_a0 = 1;
        bStack_9c = 1;
        local_b8 = 0;
        bVar13 = 1;
        local_98 = uVar8;
        if (((local_c0 != 0) && (local_88 != (code *)0x0)) &&
           (cVar4 = (*local_88)(&local_d0), cVar4 == '\0')) goto LAB_146798344;
LAB_1467985ce:
        if (local_b8 != 0xffffffffffffffff && local_c8 < local_b8) {
LAB_1467988da:
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if ((bool)(bVar13 & local_c8 < local_e8)) {
          if (local_e8 < local_b8) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          local_78 = local_f8;
          local_70 = local_f0;
          FUN_14679160e(local_d0,&local_78);
          param_1 = local_108;
          uVar8 = FUN_146797f65(local_108,local_c8);
          if ((bStack_9c & 1) != 0) goto LAB_1467987b3;
          goto LAB_1467987e0;
        }
      }
      else {
LAB_146798344:
        lVar6 = (ulonglong)local_d0[1] * 8 + DAT_14c80ad08;
        if (lVar6 != 0 && (ulonglong)local_d0[1] != 0) {
          uVar8 = (local_c8 - 1) + (ulonglong)(local_c8 == 0);
          local_118 = uVar8 >> 7;
          local_100 = (ulonglong)*(uint *)(lVar6 + 0x24);
          local_d8 = (ulonglong)*(uint *)(lVar6 + 0x20) * 8 + DAT_14c80ad08;
          if ((ulonglong)*(uint *)(lVar6 + 0x20) == 0) {
            local_d8 = 0;
          }
          local_110 = local_118 * 4;
          if (local_110 < local_100) {
            uVar8 = (ulonglong)((uint)(uVar8 >> 5) & 3);
            do {
              uVar7 = (ulonglong)*(uint *)(local_d8 + local_118 * 4);
              lVar6 = uVar7 * 8 + DAT_14c80ad08;
              if (uVar7 == 0) {
                lVar6 = 0;
              }
              uVar7 = local_100 - local_110;
              local_e0 = 4;
              if (uVar7 < 4) {
                local_e0 = uVar7;
              }
              if (uVar8 < uVar7) {
                do {
                  uVar7 = *(ulonglong *)(lVar6 + uVar8 * 8);
                  uVar5 = (*local_90)(uVar7,&local_d0);
                  if (uVar5 != 0) {
                    puVar1 = (uint *)(lVar6 + uVar8 * 8);
                    lVar2 = local_110 + uVar8;
                    do {
                      uVar11 = 0;
                      if (uVar5 != 0) {
                        for (; (uVar5 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
                        }
                      }
                      local_c8 = lVar2 * 0x20 + 1 + (ulonglong)uVar11;
                      uVar11 = 1 << ((byte)uVar11 & 0x1f);
                      uStack_a8 = (undefined5)local_c8;
                      uStack_a3 = (undefined3)(local_c8 >> 0x28);
                      bStack_9c = 0;
                      if (local_b8 == 0xffffffffffffffff) {
                        local_b8 = local_c8;
                      }
                      bVar13 = 1;
                      local_b0 = puVar1;
                      uStack_a0 = uVar11;
                      local_98 = uVar7;
                      if (((local_c0 <= local_c8) || (local_88 == (code *)0x0)) ||
                         (cVar4 = (*local_88)(&local_d0), cVar4 != '\0')) goto LAB_1467985ce;
                      uVar5 = uVar5 & ~uVar11;
                    } while (uVar5 != 0);
                  }
                  uVar8 = uVar8 + 1;
                } while (uVar8 < local_e0);
              }
              local_110 = local_118 * 4 + 4;
              local_118 = local_118 + 1;
              uVar8 = 0;
              bVar13 = 0;
            } while (local_110 < local_100);
          }
          else {
            bVar13 = 0;
          }
          goto LAB_1467985ce;
        }
        if ((local_b8 != 0xffffffffffffffff) && (local_c8 < local_b8)) goto LAB_1467988da;
      }
      param_1 = local_108;
      LOCK();
      UNLOCK();
      uVar8 = (ulonglong)*local_d0;
      lVar6 = DAT_14c80ad08;
      if (uVar8 < 8) {
        lVar6 = 0;
      }
      iVar9 = 0;
      if (lVar6 + uVar8 != 0) {
        lVar6 = (ulonglong)local_d0[1] * 8 + DAT_14c80ad08;
        iVar9 = 1;
        if (lVar6 != 0 && local_d0[1] != 0) {
          iVar9 = *(int *)(lVar6 + 0x30) + 1;
        }
      }
    } while (iVar9 != (int)local_e8);
    if (local_e8 < local_b8) {
      local_b8 = local_e8;
    }
    local_78 = local_f8;
    local_70 = local_f0;
    local_c8 = local_e8;
    FUN_14679160e(local_d0,&local_78);
LAB_1467986d2:
    if (local_11c != 1) {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    }
    puVar1 = local_d0;
    lVar6 = DAT_14c80ad08;
    if ((ulonglong)*param_1 < 8) {
      lVar6 = 0;
    }
    uVar8 = 0;
    if (lVar6 + (ulonglong)*param_1 != 0) {
      lVar6 = (ulonglong)param_1[1] * 8 + DAT_14c80ad08;
      uVar8 = 1;
      if (lVar6 != 0 && param_1[1] != 0) {
        uVar8 = (ulonglong)(*(int *)(lVar6 + 0x30) + 1);
      }
    }
    if (uVar8 < local_c8) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (uVar8 == local_c8) {
      lVar6 = **(longlong **)(local_d0 + 6);
      if (*(uint *)(lVar6 + 8) <= (uint)uVar8) {
        FUN_1467975e0(local_d0);
        uVar8 = local_c8;
      }
      if (*(uint *)(lVar6 + 0xc) <= uVar8) {
        FUN_14679758b(puVar1);
        uVar8 = local_c8;
      }
      if (*(uint *)(lVar6 + 0x10) <= uVar8) {
        FUN_146797d0f(puVar1);
      }
      lVar6 = (ulonglong)puVar1[0xc] * 8 + DAT_14c80ad08;
      if ((lVar6 == 0 || (ulonglong)puVar1[0xc] == 0) || (*(int *)(lVar6 + 8) == 0)) {
        uVar8 = FUN_146795896(puVar1,local_c8);
        uVar8 = uVar8 | 4;
      }
      else {
        uVar8 = FUN_146791e57(puVar1,local_c8);
      }
      FUN_146791935(param_1,local_c8,uVar8);
      if (local_11c != 1) {
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
      }
LAB_146798886:
      if ((local_60 ^ (ulonglong)local_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return uVar8;
    }
    if (local_11c != 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    }
  } while( true );
LAB_1467987b3:
  uVar5 = param_1[2];
  if (uVar5 == (uVar5 & 0xfffffffe)) goto LAB_146798252;
  LOCK();
  bVar14 = uVar5 == param_1[2];
  if (bVar14) {
    param_1[2] = uVar5 & 0xfffffffe;
  }
  UNLOCK();
  if (bVar14) goto LAB_146798886;
  goto LAB_1467987b3;
LAB_1467987e0:
  uVar5 = *local_b0;
  if (uVar5 == (uVar5 & ~uStack_a0)) goto LAB_146798252;
  LOCK();
  uVar11 = *local_b0;
  if (uVar5 == uVar11) {
    *local_b0 = uVar5 & ~uStack_a0;
  }
  UNLOCK();
  if (uVar5 == uVar11) goto LAB_146798886;
  goto LAB_1467987e0;
}



// FUNCTION 146798917 FUN_146798917 body=1026 status=ok
// SIG undefined FUN_146798917(void)

undefined4 FUN_146798917(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  ulonglong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  undefined5 uStack_a8;
  undefined3 uStack_a3;
  uint uStack_a0;
  undefined1 uStack_9c;
  ulonglong local_98;
  code *local_90;
  code *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_80 = &local_78;
  local_60 = 0;
  local_68 = *(undefined8 *)(&DAT_14c758500 + (longlong)*(char *)(param_1 + 0xc) * 8);
  local_90 = FUN_146798d1a;
  local_88 = FUN_146798d22;
  local_d0 = param_1;
  local_78 = param_2;
  local_70 = param_3;
  if (DAT_14c80ad08 + (ulonglong)*(uint *)(param_1 + 4) * 8 == 0 ||
      (ulonglong)*(uint *)(param_1 + 4) == 0) {
    if ((*(byte *)(param_1 + 8) & 2) != 0) {
      local_58 = 1;
      local_f8 = 0xffffffffffffffff;
LAB_146798a02:
      local_c8 = local_58 - 1;
      local_b8 = 0xffffffffffffffff;
      local_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      uStack_a3 = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      local_f0 = local_58;
      local_c0 = local_58;
      if ((((local_c8 != 0) && (*(uint *)(local_d0 + 4) != 0)) &&
          (lVar13 = DAT_14c80ad08 + (ulonglong)*(uint *)(local_d0 + 4) * 8, lVar13 != 0)) &&
         ((ulonglong)*(uint *)(lVar13 + 0x24) != 0)) {
        uVar10 = local_58 - 2 >> 7;
        local_e8 = (ulonglong)*(uint *)(lVar13 + 0x20) * 8 + DAT_14c80ad08;
        if ((ulonglong)*(uint *)(lVar13 + 0x20) == 0) {
          local_e8 = 0;
        }
        if (*(uint *)(lVar13 + 0x24) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar9 = (ulonglong)((uint)(local_58 - 2 >> 5) & 3);
        do {
          uVar7 = (ulonglong)*(uint *)(local_e8 + uVar10 * 4);
          lVar13 = uVar7 * 8 + DAT_14c80ad08;
          if (uVar7 == 0) {
            lVar13 = 0;
          }
          local_d8 = uVar10 * 0x80 + 1;
          local_e0 = uVar10;
          do {
            uVar10 = *(ulonglong *)(lVar13 + uVar9 * 8);
            uVar5 = (*local_90)(uVar10,&local_d0);
            if (uVar5 != 0) {
              lVar1 = lVar13 + uVar9 * 8;
              lVar12 = uVar9 * 0x20 + local_d8;
              do {
                uVar11 = 0x1f;
                if (uVar5 != 0) {
                  for (; uVar5 >> uVar11 == 0; uVar11 = uVar11 - 1) {
                  }
                }
                local_c8 = (ulonglong)uVar11 + lVar12;
                uVar11 = 1 << ((byte)uVar11 & 0x1f);
                uStack_a8 = (undefined5)local_c8;
                uStack_a3 = (undefined3)(local_c8 >> 0x28);
                uStack_9c = 0;
                if (local_b8 == 0xffffffffffffffff) {
                  local_b8 = local_c8;
                }
                local_b0 = lVar1;
                uStack_a0 = uVar11;
                local_98 = uVar10;
                if (((local_c0 <= local_c8) || (local_88 == (code *)0x0)) ||
                   (cVar3 = (*local_88)(&local_d0), cVar3 != '\0')) goto LAB_146798bff;
                uVar5 = uVar5 & ~uVar11;
              } while (uVar5 != 0);
            }
            bVar14 = uVar9 != 0;
            uVar9 = uVar9 - 1;
          } while (bVar14);
          uVar9 = 3;
          uVar10 = local_e0 - 1;
        } while (local_e0 != 0);
      }
      uVar10 = CONCAT44(*(uint *)(local_d0 + 8) >> 1,*(uint *)(local_d0 + 8)) & 0x100000001;
      iVar6 = (*local_90)(uVar10);
      if (iVar6 != 0) {
        local_c8 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        uStack_a3 = 0;
        uStack_a0 = 1;
        uStack_9c = 1;
        if (local_b8 == 0xffffffffffffffff) {
          local_b8 = 0;
        }
        local_98 = uVar10;
        if ((local_88 == (code *)0x0) || (cVar3 = (*local_88)(&local_d0), cVar3 != '\0')) {
LAB_146798bff:
          local_58 = local_f0;
          local_50 = local_f8;
          FUN_1467918d2(local_d0,&local_58,local_b8 + 1);
          if (((ulonglong)*(uint *)(param_1 + 4) == 0) ||
             (lVar13 = DAT_14c80ad08 + (ulonglong)*(uint *)(param_1 + 4) * 8, lVar13 == 0)) {
LAB_146798d14:
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          uVar5 = *(uint *)(lVar13 + 0x38);
          iVar6 = (int)DAT_14c80ad08;
          if (uVar5 < 8) {
            iVar6 = 0;
          }
          if ((iVar6 + uVar5 & 1) == 0) goto LAB_146798d14;
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
          FUN_14678ec29(&DAT_14c80aee0,uVar8);
          uVar4 = local_60;
          goto LAB_1467989c2;
        }
      }
      local_c8 = 0;
      local_58 = local_f0;
      local_50 = local_f8;
      FUN_1467918d2(local_d0,&local_58,local_b8 + 1);
    }
  }
  else {
    FUN_1467994a5(&local_58);
    if (local_58 != 0) {
      local_f8 = local_50;
      goto LAB_146798a02;
    }
  }
  uVar4 = 0;
LAB_1467989c2:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 146798d1a FUN_146798d1a body=8 status=ok
// SIG undefined FUN_146798d1a(void)

ulonglong FUN_146798d1a(ulonglong param_1)

{
  return param_1 >> 0x20;
}



// FUNCTION 146798d22 FUN_146798d22 body=1289 status=ok
// SIG undefined FUN_146798d22(void)

undefined8 FUN_146798d22(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  code *pcVar8;
  byte bVar9;
  ulonglong uVar10;
  char cVar11;
  BOOLEAN BVar12;
  uint uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  PSRWLOCK pRVar18;
  PSRWLOCK pRVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  bool bVar25;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_8c;
  longlong local_88;
  code *local_80;
  ulonglong local_78;
  code *local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  PSRWLOCK local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = *param_1;
  lVar5 = param_1[1];
  cVar11 = FUN_1467994ee(lVar4,lVar5);
  if (cVar11 != '\0') {
    puVar14 = (undefined8 *)FUN_146797f65(lVar4,lVar5);
    if ((puVar14 == (undefined8 *)0x0) || (((ulonglong)puVar14 & 7) != 0)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    local_50 = (PSRWLOCK)0x0;
    plVar6 = (longlong *)param_1[10];
    puVar7 = (ulonglong *)plVar6[2];
    local_8c = (int)plVar6[1];
    local_88 = *plVar6;
    uVar17 = *puVar7;
    local_68 = puVar7[1];
    local_58 = puVar7[4];
    local_78 = puVar7[5];
    pcVar8 = (code *)puVar7[8];
    local_70 = (code *)puVar7[9];
    local_80 = (code *)puVar7[0xc];
    iVar2 = *(int *)((longlong)puVar7 + 0x6c);
    local_60 = puVar7[0x10];
    if (iVar2 == 1) {
      if (local_8c == 0) {
        pRVar19 = (PSRWLOCK)&DAT_14c80ada8;
        goto LAB_146798e2a;
      }
      if (local_8c != 1) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
LAB_146798e3e:
      BVar12 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
      if (BVar12 != '\0') {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
    }
    else {
      pRVar19 = (PSRWLOCK)(puVar14 + 3);
LAB_146798e2a:
      AcquireSRWLockExclusive(pRVar19);
      local_50 = pRVar19;
      if (iVar2 == 1) goto LAB_146798e3e;
    }
    if (*(char *)((longlong)puVar14 + 0xb) == '\x01') {
      lVar15 = (*pcVar8)(*puVar14);
      pRVar19 = local_50;
      uVar10 = local_58;
      if (lVar5 == 0) {
        do {
          uVar13 = *(uint *)(lVar4 + 8);
          if ((uVar13 & 0xfffffffe) == uVar13) goto LAB_146798f33;
          LOCK();
          bVar25 = uVar13 == *(uint *)(lVar4 + 8);
          if (bVar25) {
            *(uint *)(lVar4 + 8) = uVar13 & 0xfffffffe;
          }
          UNLOCK();
        } while (!bVar25);
      }
      else {
        uVar20 = lVar5 - 1;
        uVar23 = (ulonglong)((uint)(uVar20 >> 5) & 3);
        uVar16 = (ulonglong)*(uint *)(DAT_14c80ad08 + 0x20 + (ulonglong)*(uint *)(lVar4 + 4) * 8);
        lVar24 = DAT_14c80ad08 + uVar16 * 8;
        if (uVar16 == 0) {
          lVar24 = 0;
        }
        uVar16 = (ulonglong)*(uint *)(lVar24 + (uVar20 >> 7) * 4);
        lVar24 = DAT_14c80ad08 + uVar16 * 8;
        if (uVar16 == 0) {
          lVar24 = 0;
        }
        bVar9 = (byte)uVar20 & 0x1f;
        do {
          uVar13 = *(uint *)(lVar24 + uVar23 * 8);
          uVar22 = uVar13 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
          if (uVar13 == uVar22) goto LAB_146798f33;
          puVar1 = (uint *)(lVar24 + uVar23 * 8);
          LOCK();
          bVar25 = uVar13 == *puVar1;
          if (bVar25) {
            *puVar1 = uVar22;
          }
          UNLOCK();
        } while (!bVar25);
      }
      if (*(char *)((longlong)puVar14 + 0xb) != '\0') {
        if ((uVar17 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        if (*(longlong *)(lVar15 + 0x18) != 0) {
          if (local_58 == local_78) {
LAB_146798ef2:
            FUN_146791662(lVar4,lVar5);
            goto LAB_146798f33;
          }
          if (local_58 <= local_78) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          uVar17 = local_58 / local_78;
          do {
            bVar25 = uVar17 == 0;
            uVar17 = uVar17 - 1;
            if (bVar25) goto LAB_146798ef2;
          } while (*(char *)(lVar15 + (local_60 + 0x1f >> 5) * 4 + 0x2c + uVar17) != '\0');
        }
        if (iVar2 == 1) {
          if (local_8c == 1) {
            pRVar18 = (PSRWLOCK)0x0;
          }
          else {
            if (local_8c != 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            pRVar18 = (PSRWLOCK)&DAT_14c80ada8;
          }
          if (local_50 != pRVar18) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          BVar12 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
          if (BVar12 != '\0') {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
        }
        else if (local_50 != *(PSRWLOCK *)(lVar15 + 8)) {
          pRVar19 = (PSRWLOCK)FUN_146794d20(lVar15,local_50);
          local_50 = pRVar19;
        }
        if (lVar5 == 0) {
          uVar13 = *(uint *)(lVar4 + 8) & 1;
        }
        else {
          uVar17 = lVar5 - 1;
          uVar20 = (ulonglong)*(uint *)(DAT_14c80ad08 + 0x20 + (ulonglong)*(uint *)(lVar4 + 4) * 8);
          lVar24 = DAT_14c80ad08 + uVar20 * 8;
          if (uVar20 == 0) {
            lVar24 = 0;
          }
          uVar20 = (ulonglong)*(uint *)(lVar24 + (uVar17 >> 7) * 4);
          lVar24 = DAT_14c80ad08 + uVar20 * 8;
          if (uVar20 == 0) {
            lVar24 = 0;
          }
          uVar13 = 1 << ((byte)uVar17 & 0x1f) &
                   *(uint *)(lVar24 + (ulonglong)((uint)(uVar17 >> 2) & 0x18));
        }
        if (uVar13 != 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        FUN_1467994ee(lVar4,lVar5);
        if (iVar2 == 1) {
          if (uVar10 != local_78) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          BVar12 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
          if (BVar12 != '\0') {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          *(undefined1 *)((longlong)puVar14 + 0xb) = 0;
          uVar3 = *(undefined4 *)(local_68 + 0x438);
          uVar21 = (*local_70)(lVar15);
          FUN_14678db4f(uVar21,uVar10,uVar3);
          *(longlong *)(local_88 + 0x418) = *(longlong *)(local_88 + 0x418) + uVar10;
          (*local_80)(lVar15,1);
          FUN_146791662(lVar4,lVar5);
          if (pRVar19 != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(pRVar19);
          }
LAB_1467990c6:
          *(undefined4 *)(plVar6 + 3) = 3;
        }
        else {
          if (*(longlong *)(lVar15 + 0x18) == 0) {
            pRVar18 = (PSRWLOCK)(puVar14 + 3);
            if (pRVar19 != pRVar18) {
              if (pRVar19 != (PSRWLOCK)0x0) {
                ReleaseSRWLockExclusive(pRVar19);
              }
              AcquireSRWLockExclusive(pRVar18);
              pRVar19 = pRVar18;
            }
            *(undefined1 *)((longlong)puVar14 + 0xb) = 0;
            if (pRVar19 != (PSRWLOCK)0x0) {
              ReleaseSRWLockExclusive(pRVar19);
            }
            iVar2 = local_8c;
            cVar11 = FUN_14679544d(lVar15,local_88,0,local_8c);
            if (cVar11 == '\0') {
              if (*(char *)(lVar4 + 0xc) == '\x01') {
                    /* WARNING: Does not return */
                pcVar8 = (code *)invalidInstructionException();
                (*pcVar8)();
              }
              AcquireSRWLockExclusive(pRVar18);
              *(undefined1 *)((longlong)puVar14 + 0xb) = 1;
              ReleaseSRWLockExclusive(pRVar18);
              FUN_146791662(lVar4,lVar5);
              goto LAB_14679912b;
            }
            (*local_80)(lVar15,iVar2);
            FUN_146791662(lVar4,lVar5);
            goto LAB_1467990c6;
          }
          local_98 = local_8c;
          cVar11 = FUN_146795260(lVar15,local_88,&local_50,0);
          if (local_50 != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(local_50);
            local_50 = (PSRWLOCK)0x0;
          }
          lVar15 = FUN_14679581d(lVar15);
          if (lVar15 == 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          FUN_146791662(lVar4,lVar5);
          if (cVar11 != '\0') goto LAB_1467990c6;
LAB_14679912b:
          FUN_146791740(lVar4,lVar5);
          *(undefined4 *)(plVar6 + 3) = 2;
        }
        uVar21 = 1;
        goto LAB_146798d5c;
      }
      cVar11 = FUN_146791662(lVar4,lVar5);
      if (cVar11 == '\0') {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
    }
LAB_146798f33:
    if (local_50 != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(local_50);
    }
  }
  uVar21 = 0;
LAB_146798d5c:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar21;
}



// FUNCTION 14679922c FUN_14679922c body=464 status=ok
// SIG undefined FUN_14679922c(void)

undefined1 *
FUN_14679922c(undefined1 *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined **param_5,undefined8 param_6)

{
  code *pcVar1;
  ulonglong uVar2;
  uint uVar3;
  PSRWLOCK SRWLock;
  uint uVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined **local_68;
  undefined8 local_60;
  byte local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_2 + 0x2c) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_5 != &PTR_LOOP_149dfd458) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    local_60 = param_6;
    local_68 = param_5;
    FUN_1467923de(*(undefined8 *)(param_2 + 0x18),param_2,param_3,param_4);
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    uVar4 = *(uint *)(param_2 + 0x24) & 0x7f;
    if (uVar4 < 0x20) {
      SRWLock = (PSRWLOCK)((ulonglong)uVar4 * 0x148 + DAT_14c8084d0);
      AcquireSRWLockExclusive(SRWLock);
      if ((*(uint *)(param_2 + 0x24) & 0x7f) == uVar4) {
        FUN_14677db66(SRWLock);
        do {
          uVar4 = *(uint *)(param_2 + 0x24);
          uVar3 = uVar4 >> 7;
          bVar5 = uVar3 == 0x1ffffff;
          if (bVar5) {
            uVar3 = 0xffffffff;
          }
          if (((~uVar3 & 0x1ffffff) != 0) == bVar5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          LOCK();
          bVar5 = uVar4 == *(uint *)(param_2 + 0x24);
          if (bVar5) {
            *(uint *)(param_2 + 0x24) = uVar3 << 7 | 0x40;
          }
          UNLOCK();
        } while (!bVar5);
      }
      ReleaseSRWLockExclusive(SRWLock);
    }
    uVar4 = *(uint *)(param_2 + 0x2c);
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar2 = *(ulonglong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2a8
             );
    if (uVar2 < 2) {
      uVar2 = FUN_14679dbf8(param_5,0);
    }
    if (uVar4 < *(uint *)(uVar2 + 0x1f74)) {
      local_48 = uVar2 + (ulonglong)uVar4 * 8 + 0x1f80;
    }
    else if ((uVar4 == 0xffffffff) ||
            (FUN_14679dc84(local_50,uVar2,uVar4,0), (local_50[0] & 1) == 0)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    *param_1 = 1;
    *(longlong *)(param_1 + 8) = local_48;
    *(undefined8 *)(param_1 + 0x10) = 0;
    if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1467993fd FUN_1467993fd body=82 status=ok
// SIG undefined FUN_1467993fd(void)

longlong FUN_1467993fd(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  iVar2 = *(int *)(param_1 + 0xc) << 0x18;
  if (iVar2 == 0) {
    return 0x50;
  }
  if ((**(byte **)(&DAT_14c758500 + (longlong)(iVar2 >> 0x18) * 8) & 1) != 0) {
    uVar3 = *(longlong *)(*(byte **)(&DAT_14c758500 + (longlong)(iVar2 >> 0x18) * 8) + 0x80) + 0x3fU
            >> 6;
    lVar4 = 0x50;
    if (0x10 < uVar3 * 8) {
      lVar4 = uVar3 * 8 + 0x40;
    }
    return lVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14679944f FUN_14679944f body=82 status=ok
// SIG undefined FUN_14679944f(void)

ulonglong FUN_14679944f(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  iVar2 = *(int *)(param_1 + 0xc) << 0x18;
  if (iVar2 == 0) {
    return 10;
  }
  if ((**(byte **)(&DAT_14c758500 + (longlong)(iVar2 >> 0x18) * 8) & 1) != 0) {
    uVar3 = *(longlong *)(*(byte **)(&DAT_14c758500 + (longlong)(iVar2 >> 0x18) * 8) + 0x80) + 0x3f;
    uVar4 = 10;
    if (0x80 < (uVar3 & 0xffffffffffffffc0)) {
      uVar4 = (uVar3 >> 3) + 0x40 >> 3 & 0xffffffff;
    }
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1467994a1 FUN_1467994a1 body=4 status=ok
// SIG undefined FUN_1467994a1(void)

undefined8 FUN_1467994a1(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 1467994a5 FUN_1467994a5 body=73 status=ok
// SIG undefined FUN_1467994a5(void)

undefined8 * FUN_1467994a5(undefined8 *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  ulonglong uVar5;
  
  do {
    uVar5 = *(ulonglong *)(*param_2 + 8);
    do {
      uVar4 = uVar5;
      uVar2 = *(undefined8 *)*param_2;
      uVar5 = *(ulonglong *)(*param_2 + 8);
    } while (*(ulonglong *)(*param_2 + 8) != uVar4);
    uVar5 = uVar4;
    if ((uVar4 & 1) != 0) break;
    uVar5 = uVar4 | 1;
    LOCK();
    auVar1 = *param_2;
    auVar3._8_8_ = uVar4;
    auVar3._0_8_ = uVar2;
    if (auVar3 == auVar1) {
      *(undefined8 *)*param_2 = uVar2;
      *(ulonglong *)(*param_2 + 8) = uVar5;
    }
    UNLOCK();
  } while (auVar3 != auVar1);
  *param_1 = uVar2;
  param_1[1] = uVar5;
  return param_1;
}



// FUNCTION 1467994ee FUN_1467994ee body=134 status=ok
// SIG undefined FUN_1467994ee(void)

ulonglong FUN_1467994ee(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  
  if (param_2 == 0) {
    do {
      uVar2 = *(uint *)(param_1 + 8);
      uVar5 = uVar2 & 0xfffffffd;
      uVar6 = (ulonglong)(uVar5 != uVar2);
      if (uVar5 == uVar2) break;
      LOCK();
      bVar9 = uVar2 == *(uint *)(param_1 + 8);
      if (bVar9) {
        *(uint *)(param_1 + 8) = uVar5;
      }
      UNLOCK();
    } while (!bVar9);
  }
  else {
    uVar6 = param_2 - 1;
    uVar7 = (ulonglong)((uint)(uVar6 >> 5) & 3);
    uVar4 = (ulonglong)*(uint *)(DAT_14c80ad08 + 0x20 + (ulonglong)*(uint *)(param_1 + 4) * 8);
    lVar8 = DAT_14c80ad08 + uVar4 * 8;
    if (uVar4 == 0) {
      lVar8 = 0;
    }
    uVar4 = (ulonglong)*(uint *)(lVar8 + (uVar6 >> 7) * 4);
    lVar8 = DAT_14c80ad08 + uVar4 * 8;
    if (uVar4 == 0) {
      lVar8 = 0;
    }
    bVar3 = (byte)uVar6 & 0x1f;
    do {
      uVar2 = *(uint *)(lVar8 + 4 + uVar7 * 8);
      uVar5 = uVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      uVar6 = CONCAT71((int7)(uVar6 >> 8),uVar2 != uVar5);
      if (uVar2 == uVar5) break;
      puVar1 = (uint *)(lVar8 + 4 + uVar7 * 8);
      LOCK();
      bVar9 = uVar2 == *puVar1;
      if (bVar9) {
        *puVar1 = uVar5;
      }
      UNLOCK();
    } while (!bVar9);
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 146799574 FUN_146799574 body=74 status=ok
// SIG undefined FUN_146799574(void)

longlong FUN_146799574(ulonglong param_1)

{
  code *pcVar1;
  longlong lVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar3 = (uint)param_1 & 7;
  lVar2 = 8;
  if (1 < uVar3) {
    if (uVar3 != 4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar2 = 0xb;
    if (((uint)param_1 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  return (ulonglong)
         ((uint)*(byte *)((param_1 & 0xfffffffffffffff8) + 2 + lVar2) * 0x80000 +
         (uint)*(ushort *)((param_1 & 0xfffffffffffffff8) + lVar2) * 8) + DAT_14c80ad08;
}



// FUNCTION 1467995be FUN_1467995be body=179 status=ok
// SIG undefined FUN_1467995be(void)

int FUN_1467995be(ulonglong param_1)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1;
  switch(uVar4 & 7) {
  case 0:
  case 1:
    bVar1 = *(byte *)((param_1 & 0xfffffffffffffff8) + 10);
    uVar2 = *(ushort *)((param_1 & 0xfffffffffffffff8) + 8);
    goto LAB_1467995ec;
  case 2:
    if ((uVar4 & 7) != 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if ((*(ulonglong *)(param_1 & 0xfffffffffffffff8) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    param_1 = *(ulonglong *)
               ((*(ulonglong *)(param_1 & 0xfffffffffffffff8) & 0xfffffffffffffffe) + 8);
    break;
  case 3:
    if ((uVar4 & 7) != 3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    param_1 = *(ulonglong *)((param_1 & 0xfffffffffffffff8) + 8);
    break;
  case 4:
    if ((uVar4 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    bVar1 = *(byte *)((param_1 & 0xfffffffffffffff8) + 0xd);
    uVar2 = *(ushort *)((param_1 & 0xfffffffffffffff8) + 0xb);
LAB_1467995ec:
    param_1 = (ulonglong)((uint)bVar1 * 0x80000 + (uint)uVar2 * 8) + DAT_14c80ad08;
    break;
  case 5:
    if ((uVar4 & 7) == 5) {
      param_1 = param_1 & 0xfffffffffffffff8;
    }
    else {
      param_1 = FUN_146799574();
    }
    break;
  default:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  return (int)*(char *)(param_1 + 0xc);
}



// FUNCTION 146799671 FUN_146799671 body=27 status=ok
// SIG undefined FUN_146799671(void)

undefined8 FUN_146799671(void)

{
  int iVar1;
  
  iVar1 = FUN_1467995be();
  return *(undefined8 *)(&DAT_14c758500 + (longlong)iVar1 * 8);
}



// FUNCTION 14679968c FUN_14679968c body=89 status=ok
// SIG undefined FUN_14679968c(void)

uint FUN_14679968c(ulonglong param_1)

{
  code *pcVar1;
  uint uVar2;
  
  switch((uint)param_1 & 7) {
  case 0:
  case 1:
    return *(uint *)((param_1 & 0xfffffffffffffff8) + 0xc);
  case 2:
    uVar2 = *(uint *)((param_1 & 0xfffffffffffffff8) + 0x18);
    break;
  case 3:
    uVar2 = *(uint *)((ulonglong)
                      ((uint)*(byte *)((param_1 & 0xfffffffffffffff8) + 0x12) * 0x80000 +
                      (uint)*(ushort *)((param_1 & 0xfffffffffffffff8) + 0x10) * 8) + 0x18 +
                     DAT_14c80ad08);
    break;
  case 4:
    return (uint)*(byte *)((param_1 & 0xfffffffffffffff8) + 0xe);
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  return uVar2 & 0x7fffffff;
}



// FUNCTION 1467996e5 FUN_1467996e5 body=117 status=ok
// SIG undefined FUN_1467996e5(void)

ulonglong FUN_1467996e5(ulonglong param_1)

{
  code *pcVar1;
  uint3 uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  
  switch((uint)param_1 & 7) {
  case 0:
  case 1:
  case 3:
    puVar3 = (ulonglong *)(param_1 & 0xfffffffffffffff8);
    goto LAB_146799703;
  case 2:
    uVar4 = *(ulonglong *)(param_1 & 0xfffffffffffffff8);
    break;
  case 4:
    if (((uint)param_1 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar2 = *(uint3 *)((param_1 & 0xfffffffffffffff8) + 8);
    puVar3 = (ulonglong *)((ulonglong)uVar2 * 8 + DAT_14c80ad08);
    if (puVar3 == (ulonglong *)0x0 || uVar2 == 0) {
      return 0;
    }
    uVar4 = *puVar3;
    break;
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((uVar4 & 1) != 0) {
    puVar3 = (ulonglong *)(uVar4 & 0xfffffffffffffffe);
LAB_146799703:
    uVar4 = *puVar3;
  }
  return uVar4;
}



// FUNCTION 14679975a FUN_14679975a body=65 status=ok
// SIG undefined FUN_14679975a(void)

undefined8 FUN_14679975a(undefined8 param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_1467995be();
  lVar1 = *(longlong *)(&DAT_14c758500 + (longlong)iVar2 * 8);
  lVar3 = FUN_1467996e5(param_1);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014679978e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(lVar1 + 0x40))(lVar3);
    return uVar4;
  }
  return 0;
}



// FUNCTION 14679979b FUN_14679979b body=132 status=ok
// SIG undefined FUN_14679979b(void)

longlong FUN_14679979b(ulonglong param_1)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar5 = (uint)param_1;
  switch(uVar5 & 7) {
  case 0:
  case 1:
    param_1 = param_1 & 0xfffffffffffffff8;
    lVar4 = 0x10;
    goto LAB_146799810;
  case 2:
    if ((uVar5 & 7) != 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    param_1 = param_1 & 0xfffffffffffffff8;
    goto LAB_14679980b;
  case 3:
    if ((uVar5 & 7) != 3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    bVar1 = *(byte *)((param_1 & 0xfffffffffffffff8) + 0x12);
    uVar2 = *(ushort *)((param_1 & 0xfffffffffffffff8) + 0x10);
    break;
  case 4:
    if ((uVar5 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    bVar1 = *(byte *)((param_1 & 0xfffffffffffffff8) + 10);
    uVar2 = *(ushort *)((param_1 & 0xfffffffffffffff8) + 8);
    break;
  default:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  param_1 = (ulonglong)((uint)bVar1 * 0x80000 + (uint)uVar2 * 8) + DAT_14c80ad08;
LAB_14679980b:
  lVar4 = 8;
LAB_146799810:
  return param_1 + lVar4;
}



// FUNCTION 14679981f FUN_14679981f body=132 status=ok
// SIG undefined FUN_14679981f(void)

longlong FUN_14679981f(ulonglong param_1)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar5 = (uint)param_1;
  switch(uVar5 & 7) {
  case 0:
  case 1:
    param_1 = param_1 & 0xfffffffffffffff8;
    lVar4 = 0x18;
    goto LAB_146799894;
  case 2:
    if ((uVar5 & 7) != 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    param_1 = param_1 & 0xfffffffffffffff8;
    goto LAB_14679988f;
  case 3:
    if ((uVar5 & 7) != 3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    bVar1 = *(byte *)((param_1 & 0xfffffffffffffff8) + 0x12);
    uVar2 = *(ushort *)((param_1 & 0xfffffffffffffff8) + 0x10);
    break;
  case 4:
    if ((uVar5 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    bVar1 = *(byte *)((param_1 & 0xfffffffffffffff8) + 10);
    uVar2 = *(ushort *)((param_1 & 0xfffffffffffffff8) + 8);
    break;
  default:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  param_1 = (ulonglong)((uint)bVar1 * 0x80000 + (uint)uVar2 * 8) + DAT_14c80ad08;
LAB_14679988f:
  lVar4 = 0x10;
LAB_146799894:
  return param_1 + lVar4;
}



// FUNCTION 1467998a3 FUN_1467998a3 body=154 status=ok
// SIG undefined FUN_1467998a3(void)

ulonglong FUN_1467998a3(ulonglong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  uint7 uVar5;
  longlong lVar4;
  uint uVar6;
  
  uVar6 = (uint)param_1;
  uVar3 = uVar6 & 7;
  if (4 < uVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  switch(uVar3) {
  default:
    uVar2 = *(undefined1 *)((param_1 & 0xfffffffffffffff8) + 0xb);
    uVar5 = (uint7)((ulonglong)
                    ((longlong)&switchD_1467998bf::switchdataD_149dfd0c8 +
                    (longlong)(int)(&switchD_1467998bf::switchdataD_149dfd0c8)[uVar3]) >> 8);
    break;
  case 2:
    if ((uVar6 & 7) != 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar2 = *(undefined1 *)((param_1 & 0xfffffffffffffff8) + 0x1c);
    uVar5 = 0;
    break;
  case 3:
    if ((uVar6 & 7) != 3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = (ulonglong)*(byte *)((param_1 & 0xfffffffffffffff8) + 0x12) << 0x13;
    uVar5 = (uint7)((ulonglong)lVar4 >> 8);
    uVar2 = 1;
    if ((*(byte *)((ulonglong)
                   ((int)lVar4 + (uint)*(ushort *)((param_1 & 0xfffffffffffffff8) + 0x10) * 8) +
                   0x1c + DAT_14c80ad08) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    break;
  case 4:
    if ((uVar6 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar3 = (uint)*(byte *)((param_1 & 0xfffffffffffffff8) + 10) * 0x80000 +
            (uint)*(ushort *)((param_1 & 0xfffffffffffffff8) + 8) * 8;
    uVar2 = *(undefined1 *)((ulonglong)uVar3 + 0x1c + DAT_14c80ad08);
    uVar5 = (uint7)(uint3)(uVar3 >> 8);
  }
  return CONCAT71(uVar5,uVar2) & 0xffffffffffffff01;
}



// FUNCTION 14679993d thunk_FUN_146799942 body=5 status=ok
// SIG undefined thunk_FUN_146799942(void)

undefined4 thunk_FUN_146799942(undefined8 param_1)

{
  undefined4 uVar1;
  PSRWLOCK pRVar2;
  
  pRVar2 = (PSRWLOCK)FUN_14679981f();
  AcquireSRWLockExclusive(pRVar2);
  uVar1 = FUN_1467998a3(param_1);
  if ((char)uVar1 == '\0') {
    pRVar2 = (PSRWLOCK)FUN_14679981f(param_1);
    ReleaseSRWLockExclusive(pRVar2);
  }
  return uVar1;
}



// FUNCTION 146799942 FUN_146799942 body=65 status=ok
// SIG undefined FUN_146799942(void)

undefined4 FUN_146799942(undefined8 param_1)

{
  undefined4 uVar1;
  PSRWLOCK pRVar2;
  
  pRVar2 = (PSRWLOCK)FUN_14679981f();
  AcquireSRWLockExclusive(pRVar2);
  uVar1 = FUN_1467998a3(param_1);
  if ((char)uVar1 == '\0') {
    pRVar2 = (PSRWLOCK)FUN_14679981f(param_1);
    ReleaseSRWLockExclusive(pRVar2);
  }
  return uVar1;
}



// FUNCTION 146799983 FUN_146799983 body=23 status=ok
// SIG undefined FUN_146799983(void)

void FUN_146799983(void)

{
  PSRWLOCK SRWLock;
  
  SRWLock = (PSRWLOCK)FUN_14679981f();
                    /* WARNING: Could not recover jumptable at 0x000146799993. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive(SRWLock);
  return;
}



// FUNCTION 14679999a FUN_14679999a body=47 status=ok
// SIG undefined FUN_14679999a(void)

void FUN_14679999a(ulonglong param_1)

{
  code *pcVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1 & 7;
  if (uVar2 < 2) {
    FUN_146791f03(param_1 & 0xfffffffffffffff8);
    return;
  }
  if (uVar2 == 3) {
    if (((uint)param_1 & 7) == 3) {
      FUN_146795ab3(param_1 & 0xfffffffffffffff8);
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



// FUNCTION 1467999c9 FUN_1467999c9 body=430 status=ok
// SIG undefined FUN_1467999c9(void)

byte * FUN_1467999c9(int *param_1,uint param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  uint uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  bool bVar13;
  
  pbVar8 = *(byte **)(param_1 + 2);
  if (pbVar8 == (byte *)0x0) {
    uVar7 = (uint)(1L << (*(byte *)(param_3 + 0x1c) & 0x3f));
    if (param_2 < uVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    uVar3 = *(uint *)(param_3 + 0x38);
    if (uVar3 < param_2) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    iVar4 = *param_1;
    uVar10 = uVar3 >> (*(byte *)(param_3 + 0x1c) & 0x1f);
    uVar9 = (ulonglong)uVar10 - 1;
    lVar5 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar12 = 0;
    if (1 < uVar10) {
      uVar12 = ((uint)lVar5 ^ 0xffffffc0) + 0x41;
    }
    uVar12 = uVar12 >> ((byte)iVar4 & 0x1f);
    if (uVar3 - uVar7 < uVar12) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    iVar1 = uVar12 + 1;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    pbVar8 = *(byte **)(param_1 + 2);
    if (pbVar8 == (byte *)0x0) {
      pbVar8 = (byte *)FUN_14678871b(iVar1 * 0x28 + 8,"pas_shared_page_directory_by_size_data",0);
      *(int *)pbVar8 = iVar4;
      *(int *)(pbVar8 + 4) = iVar1;
      uVar9 = (ulonglong)uVar12;
      pbVar11 = pbVar8 + uVar9 * 0x28 + 8;
      do {
        uVar7 = ((uint)param_4 & 0xff000000 | (uint)*(byte *)(param_3 + 0x6c)) +
                (param_1[1] & 0xffU) * 0x100 + 0x10000;
        param_4 = (ulonglong)uVar7;
        bVar2 = *(byte *)(param_3 + 0x1c);
        pbVar11[0] = 0;
        pbVar11[1] = 0;
        pbVar11[2] = 0;
        pbVar11[3] = 0;
        pbVar11[4] = 0;
        pbVar11[5] = 0;
        pbVar11[6] = 0;
        pbVar11[7] = 0;
        pbVar11[8] = 0;
        pbVar11[9] = 0;
        pbVar11[10] = 0;
        pbVar11[0xb] = 0;
        *(uint *)(pbVar11 + 0xc) = uVar7;
        pbVar11[0x10] = 0;
        pbVar11[0x18] = 0;
        pbVar11[0x19] = 0;
        pbVar11[0x1a] = 0;
        pbVar11[0x1b] = 0;
        pbVar11[0x1c] = 0;
        pbVar11[0x1d] = 0;
        pbVar11[0x1e] = 0;
        pbVar11[0x1f] = 0;
        *(longlong *)(pbVar11 + 0x20) =
             (1L << ((byte)(uVar9 << ((byte)iVar4 & 0x3f)) & 0x3f)) << (bVar2 & 0x3f);
        pbVar11 = pbVar11 + -0x28;
        bVar13 = uVar9 != 0;
        uVar9 = uVar9 - 1;
      } while (bVar13);
      LOCK();
      UNLOCK();
      *(byte **)(param_1 + 2) = pbVar8;
    }
    else {
      if (*(int *)pbVar8 != iVar4) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      if (*(int *)(pbVar8 + 4) != iVar1) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  }
  param_2 = param_2 >> (*(byte *)(param_3 + 0x1c) & 0x1f);
  uVar9 = (ulonglong)param_2 - 1;
  lVar5 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar5 == 0; lVar5 = lVar5 + -1) {
    }
  }
  uVar7 = 0;
  if (1 < param_2) {
    uVar7 = ((uint)lVar5 ^ 0xffffffc0) + 0x41;
  }
  uVar7 = uVar7 >> (*pbVar8 & 0x1f);
  if (uVar7 < *(uint *)(pbVar8 + 4)) {
    return pbVar8 + (ulonglong)uVar7 * 0x28 + 8;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}



// FUNCTION 146799b77 FUN_146799b77 body=88 status=ok
// SIG undefined FUN_146799b77(void)

ulonglong FUN_146799b77(longlong param_1,code *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ulonglong unaff_RBX;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 == 0) {
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
  }
  else {
    lVar4 = (ulonglong)*(uint *)(lVar2 + 4) * 0x28;
    do {
      lVar1 = lVar4 + -0x28;
      unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),lVar1 == -0x28);
      if (lVar1 == -0x28) break;
      cVar3 = (*param_2)(lVar4 + lVar2 + -0x20,param_3);
      lVar4 = lVar1;
    } while (cVar3 != '\0');
  }
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 146799bcf FUN_146799bcf body=108 status=ok
// SIG undefined FUN_146799bcf(void)

ulonglong FUN_146799bcf(longlong param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong unaff_RBP;
  
  lVar3 = FUN_146782cfd(param_2,*(undefined8 *)(param_1 + 8));
  if (lVar3 == 0) {
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
  }
  else {
    lVar4 = (ulonglong)*(uint *)(lVar3 + 4) * 0x28;
    do {
      lVar1 = lVar4 + -0x28;
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),lVar1 == -0x28);
      if (lVar1 == -0x28) break;
      cVar2 = (*param_3)(param_2,lVar4 + lVar3 + -0x20,param_4);
      lVar4 = lVar1;
    } while (cVar2 != '\0');
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 146799c3b FUN_146799c3b body=26 status=ok
// SIG undefined FUN_146799c3b(void)

void FUN_146799c3b(undefined8 param_1,longlong param_2)

{
  FUN_14679d700(param_1,"Size = %zu",*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 146799c55 FUN_146799c55 body=115 status=ok
// SIG undefined FUN_146799c55(void)

void FUN_146799c55(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  BOOLEAN BVar3;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar3 == '\0') {
    FUN_14678cca0(param_1);
    if (*(char *)(param_1 + 0x48) == '\0') {
      uVar2 = FUN_14678dd74(param_1,5);
      FUN_14678e496(&DAT_14c80aee0,uVar2);
      *(undefined1 *)(param_1 + 0x48) = 1;
    }
    uVar2 = FUN_146782f7a();
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    uVar2 = FUN_14678dd74(param_1,5);
    FUN_14678ec29(&DAT_14c80aee0,uVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 146799cc8 FUN_146799cc8 body=4 status=ok
// SIG undefined FUN_146799cc8(void)

undefined1 FUN_146799cc8(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



// FUNCTION 146799ccc FUN_146799ccc body=105 status=ok
// SIG undefined FUN_146799ccc(void)

char FUN_146799ccc(longlong param_1,longlong param_2)

{
  code *pcVar1;
  BOOLEAN BVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (*(char *)(param_1 + 0x48) != '\0') {
    lVar3 = FUN_14678ce20(param_1);
    *(longlong *)(param_2 + 0x418) = *(longlong *)(param_2 + 0x418) + lVar3;
    uVar4 = FUN_14678dd74(param_1,5);
    FUN_14678ec29(&DAT_14c80aee0,uVar4);
    return (lVar3 != 0) * '\x03';
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 146799d35 FUN_146799d35 body=122 status=ok
// SIG undefined FUN_146799d35(void)

undefined8
FUN_146799d35(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146799c55(param_2);
  local_48 = *param_4;
  uStack_44 = param_4[1];
  uStack_40 = param_4[2];
  uStack_3c = param_4[3];
  local_58 = param_5;
  FUN_14678cec1(param_1,param_2,param_3);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146799db0 FUN_146799db0 body=103 status=ok
// SIG undefined FUN_146799db0(void)

undefined8
FUN_146799db0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_4;
  uStack_34 = param_4[1];
  uStack_30 = param_4[2];
  uStack_2c = param_4[3];
  local_48 = param_5;
  FUN_146799e18();
  FUN_14679c7f3(param_2,param_5);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146799e18 FUN_146799e18 body=10714 status=ok
// SIG undefined FUN_146799e18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong *
FUN_146799e18(ulonglong *param_1,longlong *param_2,ulonglong param_3,ulonglong *param_4,
             ulonglong *param_5)

{
  bool bVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  char cVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  undefined *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong *plVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong uVar31;
  longlong lVar32;
  bool bVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 uVar37;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined8 uVar40;
  undefined1 auVar41 [16];
  undefined1 auStack_208 [32];
  ulonglong local_1e8;
  longlong *local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  ulonglong *local_190;
  ulonglong local_188;
  ulonglong local_180;
  ulonglong local_178;
  ulonglong local_170;
  ulonglong local_168;
  ulonglong local_160;
  ulonglong local_158;
  ulonglong local_150;
  ulonglong local_148;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong local_130;
  ulonglong local_128;
  ulonglong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  ulonglong uStack_f0;
  ulonglong local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  ulonglong local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  uint local_a8;
  undefined4 uStack_a4;
  ulonglong uStack_a0;
  ulonglong local_98 [11];
  
  local_98[3] = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1d8 = param_2;
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined4 *)((longlong)param_1 + 0xc) = 1;
LAB_14679a6f4:
    *param_1 = 0;
    goto LAB_14679a6fb;
  }
  local_1d0 = *param_4;
  if ((int)POPCOUNT(local_1d0) != 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_150 = param_4[1];
  if (local_1d0 <= local_150) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_190 = param_1;
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  _DAT_14c80afa0 = _DAT_14c80afa0 + 1;
  uVar6 = local_1d0;
  local_1a8 = param_3;
  if (local_1d8[1] == 0) {
LAB_14679a55f:
    uVar23 = local_1a8;
    uStack_f0 = local_150;
    local_f8 = uVar6;
    (*(code *)param_5[2])(&local_d8,local_1a8,&local_f8,param_5[3]);
    uVar6 = local_c8;
    local_180 = local_d8;
    if (local_d8 == 0) {
      *(undefined1 *)(local_190 + 1) = 0;
      *(undefined4 *)((longlong)local_190 + 0xc) = 0;
      param_1 = local_190;
      goto LAB_14679a6f4;
    }
    if (uStack_d0 != uVar23) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    local_178 = CONCAT44(local_178._4_4_,local_a8);
    if (1 < local_a8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    local_160 = local_b8;
    local_188 = uStack_b0;
    local_1b0 = local_c8;
    local_1a0 = uStack_c0;
    if (local_1d8[1] != 0) {
      uVar23 = local_1d8[2];
      uVar29 = 0;
      uVar31 = 0;
      do {
        if (uVar31 < uVar23) {
          puVar21 = (undefined *)*local_1d8;
          if ((*(ulonglong *)(puVar21 + uVar29 + 8) & 0xffffffffffff) != local_c8)
          goto LAB_14679a657;
LAB_14679a8d1:
          puVar9 = (ulonglong *)(puVar21 + uVar29);
          if ((puVar9[1] & 0xffffffffffff) != local_c8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          uVar23 = puVar9[2] & 0xffffffffffff;
          uVar24 = *param_5;
          local_168 = uVar29;
          if (uVar24 <= uVar23) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          uVar23 = ((local_c8 - (*puVar9 & 0xffffffffffff)) + uVar23) % uVar24;
          uVar29 = puVar9[1];
          uVar4 = puVar9[2];
          uVar13 = *puVar9;
          uVar14 = puVar9[3];
          uVar22 = uStack_b0 + local_b8;
          uVar28 = local_c8;
          do {
            uVar17 = local_a8;
            uVar10 = uVar28;
            uVar12 = uVar22;
            uVar28 = uVar13;
            uVar8 = uVar4;
            uVar22 = uVar29;
            uVar4 = uVar23;
            cVar16 = (char)uVar14;
            local_a8 = (uint)uVar14;
            uVar23 = uVar8;
            uVar29 = uVar12;
            uVar13 = uVar10;
            uVar14 = (ulonglong)uVar17;
          } while (((uVar28 ^ uVar12) & 0xffffffffffff) == 0);
          local_1c8 = uVar24;
          if (((uVar10 ^ uVar22) & 0xffffffffffff) != 0) break;
          uVar8 = uVar8 & 0xffffffffffff;
          if (uVar24 < uVar8 || uVar24 - uVar8 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          uVar23 = uVar28 & 0xffffffffffff;
          local_198 = uVar23;
          local_170 = uVar8;
          if ((((uVar22 & 0xffffffffffff) - uVar23) + uVar8) % uVar24 != (uVar4 & 0xffffffffffff))
          break;
          uVar29 = (ulonglong)(uint)(int)cVar16;
          if (cVar16 != '\0') {
            if ((int)cVar16 != 1) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            cVar16 = (char)uVar17;
            uVar29 = (ulonglong)(uint)(int)cVar16;
            if (cVar16 != '\0') {
              if ((int)cVar16 != 1) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              uVar29 = 1;
            }
          }
          local_1c0 = uVar12 & 0xffffffffffff;
          lVar26 = local_1c0 - uVar23;
          if (lVar26 == 0) break;
          if (uVar8 != 0) {
            uVar23 = (uVar24 - uVar8) + uVar23;
            if (uVar23 < local_1c0) goto LAB_14679aa4e;
            break;
          }
          if ((uVar23 - local_150 & local_1d0 - 1) == 0) {
            if ((int)POPCOUNT(param_5[1]) != 1) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            uVar4 = 1;
            uVar13 = uVar23;
            if ((local_1a8 & param_5[1] - 1) != 0) goto LAB_14679aa93;
            uVar14 = uVar28 + local_1a8 & 0xffffffffffff;
            uVar4 = local_1a8 % uVar24 & 0xffffffffffff;
          }
          else {
LAB_14679aa4e:
            local_1e8 = local_1d0;
            FUN_1467805a9(&local_d8,uVar23,uVar24,local_150);
            uVar4 = 0;
            uVar13 = uVar4;
            if (((byte)local_d8 & uStack_d0 < local_1c0) != 0) {
              uVar4 = local_d8 & 0xffffffff;
              uVar13 = uStack_d0;
            }
LAB_14679aa93:
            if (((uVar4 & 1) == 0) || (local_1c0 - uVar13 < local_1a8)) break;
            uVar23 = uVar13 & 0xffffffffffff;
            uVar6 = *param_5;
            uVar24 = param_5[1];
            uVar14 = uVar13 + local_1a8;
            uVar4 = ((uVar14 - uVar23) +
                    (((local_170 - local_198) + uVar13) % uVar6 & 0xffffffffffff)) % uVar6;
            if ((int)POPCOUNT(uVar24) != 1) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (uVar24 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            lVar32 = uVar23 - local_198;
            if (lVar32 == 0) {
LAB_14679ab23:
              lVar15 = 0;
            }
            else {
              if (local_170 != 0) {
                uVar13 = (uVar6 - local_170) + local_198;
                if (uVar13 < uVar23) goto LAB_14679beb6;
                goto LAB_14679ab23;
              }
              uVar13 = local_198;
              lVar15 = lVar32;
              if ((uVar24 + 0xffffffffffff & local_198) != 0) {
LAB_14679beb6:
                local_1e8 = uVar24;
                local_1b8 = uVar4;
                FUN_1467805a9(&local_d8,uVar13,uVar6,0);
                lVar15 = 0;
                uVar4 = local_1b8;
                if ((((local_d8 & 1) != 0) &&
                    (uVar6 = uVar23 - uStack_d0, lVar15 = 0, uStack_d0 <= uVar23 && uVar6 != 0)) &&
                   (lVar15 = lVar32, uStack_d0 != local_198)) {
                  uVar6 = uVar6 - uVar6 % param_5[1];
                  lVar15 = uVar6 - uVar6 % *param_5;
                }
              }
            }
            uVar6 = param_5[1];
            if ((int)POPCOUNT(uVar6) != 1) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (uVar6 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            uVar14 = uVar14 & 0xffffffffffff;
            uVar4 = uVar4 & 0xffffffffffff;
            lVar15 = lVar15 + local_1a8;
            lVar32 = local_1c0 - uVar14;
            if (lVar32 == 0) {
LAB_14679b32d:
              lVar11 = 0;
            }
            else if (uVar4 == 0) {
              lVar11 = lVar32;
              if ((uVar6 + 0xffffffffffff & uVar14) != 0) {
                uVar24 = *param_5;
                uVar13 = uVar14;
LAB_14679bf75:
                local_1e8 = uVar6;
                local_1c8 = uVar14;
                local_1b8 = uVar4;
                FUN_1467805a9(&local_d8,uVar13,uVar24,0);
                uVar4 = local_1b8;
                uVar14 = local_1c8;
                if ((local_d8 & 1) == 0) goto LAB_14679b32d;
                uVar6 = local_1c0 - uStack_d0;
                lVar11 = 0;
                if ((uStack_d0 <= local_1c0 && uVar6 != 0) &&
                   (lVar11 = lVar32, uStack_d0 != local_1c8)) {
                  uVar6 = uVar6 - uVar6 % param_5[1];
                  lVar11 = uVar6 - uVar6 % *param_5;
                }
              }
            }
            else {
              uVar24 = *param_5;
              uVar13 = (uVar24 - uVar4) + uVar14;
              if (uVar13 < local_1c0) goto LAB_14679bf75;
              lVar11 = 0;
              local_1c8 = uVar14;
              local_1b8 = uVar4;
            }
            auVar36._8_4_ = (int)((ulonglong)lVar26 >> 0x20);
            auVar36._0_8_ = lVar26;
            auVar36._12_4_ = 0x45300000;
            lVar15 = lVar15 + lVar11;
            auVar41._8_4_ = (int)((ulonglong)lVar15 >> 0x20);
            auVar41._0_8_ = lVar15;
            auVar41._12_4_ = 0x45300000;
            uVar6 = local_1b0;
            if (1.3 < (((double)CONCAT44(0x43300000,(int)lVar26) - 4503599627370496.0) +
                      (auVar36._8_8_ - 1.9342813113834067e+25)) /
                      (((double)CONCAT44(0x43300000,(int)lVar15) - 4503599627370496.0) +
                      (auVar41._8_8_ - 1.9342813113834067e+25))) break;
          }
          uVar6 = local_1b0;
          if ((local_180 <= uVar23) || (uVar23 == uVar14)) break;
          if (local_1b0 <= uVar23) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (uVar23 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          uVar6 = local_1d8[2];
          local_1b8 = uVar4;
          if (local_198 == uVar23) {
            if (uVar31 < uVar6) {
              lVar26 = *local_1d8;
              puVar7 = (undefined8 *)(lVar26 + local_168);
              uVar24 = local_1d8[1] - 1;
              local_1d8[1] = uVar24;
              if (uVar6 <= uVar24) {
                if (local_1d8 != &DAT_14c758470) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
LAB_14679c284:
                if (3 < uVar24 - uVar6) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                lVar26 = (uVar24 - uVar6) * 0x20;
                uVar34 = *(undefined8 *)(&DAT_14c80afb0 + lVar26);
                uVar37 = *(undefined8 *)(&DAT_14c80afb8 + lVar26);
                uVar38 = *(undefined8 *)(&DAT_14c80afc0 + lVar26);
                uVar40 = *(undefined8 *)(&DAT_14c80afc8 + lVar26);
                goto LAB_14679c2a7;
              }
              puVar5 = (undefined8 *)(lVar26 + uVar24 * 0x20);
              uVar34 = *puVar5;
              uVar37 = puVar5[1];
              puVar5 = (undefined8 *)(lVar26 + 0x10 + uVar24 * 0x20);
              uVar38 = puVar5[1];
              puVar7[2] = *puVar5;
              puVar7[3] = uVar38;
              *puVar7 = uVar34;
              puVar7[1] = uVar37;
              uVar6 = local_1d8[2];
              if (uVar6 <= uVar31) {
                if (local_1d8 != &DAT_14c758470) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                goto LAB_14679c2e6;
              }
LAB_14679b43a:
              puVar21 = (undefined *)*local_1d8;
              uVar31 = *(ulonglong *)(puVar21 + local_168) & 0xffffffffffff;
              if (uVar31 == 0) {
LAB_14679c348:
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
            }
            else {
              if (local_1d8 != &DAT_14c758470) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              if (3 < uVar31 - uVar6) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              puVar7 = (undefined8 *)(&DAT_14c80afb0 + local_168 + uVar6 * -0x20);
              uVar24 = DAT_14c758478 - 1;
              DAT_14c758478 = uVar24;
              if (uVar6 <= uVar24) goto LAB_14679c284;
              puVar5 = (undefined8 *)(DAT_14c758470 + uVar24 * 0x20);
              uVar34 = *puVar5;
              uVar37 = puVar5[1];
              puVar5 = (undefined8 *)(DAT_14c758470 + 0x10 + uVar24 * 0x20);
              uVar38 = *puVar5;
              uVar40 = puVar5[1];
LAB_14679c2a7:
              puVar7[2] = uVar38;
              puVar7[3] = uVar40;
              *puVar7 = uVar34;
              puVar7[1] = uVar37;
              uVar6 = local_1d8[2];
              if (uVar31 < uVar6) goto LAB_14679b43a;
LAB_14679c2e6:
              if (3 < uVar31 - uVar6) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              uVar31 = *(ulonglong *)(&DAT_14c80afb0 + local_168 + uVar6 * -0x20) & 0xffffffffffff;
              if (uVar31 == 0) goto LAB_14679c348;
              puVar21 = &DAT_14c80afb0 + uVar6 * -0x20;
            }
            if ((*(ulonglong *)(puVar21 + local_168 + 8) & 0xffffffffffff) <= uVar31) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
          }
          else {
            if (uVar31 < uVar6) {
              puVar21 = (undefined *)*local_1d8;
            }
            else {
              if (local_1d8 != &DAT_14c758470) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              if (3 < uVar31 - uVar6) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              puVar21 = &DAT_14c80afb0 + uVar6 * -0x20;
            }
            puVar9 = (ulonglong *)(puVar21 + local_168);
            *puVar9 = local_198;
            puVar9[1] = uVar23;
            puVar9[2] = local_170;
            puVar9[3] = uVar29;
          }
          uVar19 = (undefined4)uVar29;
          if (param_5[4] == 0) {
            local_1d8[3] = (local_1c0 - local_1b0) + local_1d8[3];
            if (local_1c0 < uVar14) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (local_1c0 == uVar14) {
              local_178 = CONCAT44(local_178._4_4_,uVar19);
              uVar6 = local_1d0;
            }
            else {
              local_1c8 = uVar14;
              local_1a8 = uVar29;
              local_188 = uVar23;
              if (uVar14 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              _DAT_14c80af90 = _DAT_14c80af90 + 1;
              local_178 = local_1d8[1];
              local_e8 = uVar4;
              if (local_178 != 0) {
                local_160 = local_1d8[2];
                local_180 = local_178 + DAT_14c80af98;
                uVar6 = 0;
                local_1b0 = 0;
                do {
                  DAT_14c80af98 = DAT_14c80af98 + 1;
                  if (uVar6 < local_160) {
                    puVar9 = (ulonglong *)(uVar6 * 0x20 + *local_1d8);
                  }
                  else {
                    if (local_1d8 != &DAT_14c758470) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)invalidInstructionException();
                      (*pcVar2)();
                    }
                    if (3 < uVar6 - local_160) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)invalidInstructionException();
                      (*pcVar2)();
                    }
                    puVar9 = (ulonglong *)(&DAT_14c80afb0 + (uVar6 - local_160) * 0x20);
                  }
                  if (((*puVar9 & 0xffffffffffff) == local_1c0) ||
                     ((puVar9[1] & 0xffffffffffff) == uVar14)) {
                    uVar23 = local_1c0;
                    uVar31 = uVar4;
                    uVar24 = puVar9[1];
                    uVar13 = uVar14;
                    uVar22 = puVar9[2];
                    uVar28 = *puVar9;
                    uVar8 = uVar29;
                    uVar17 = (uint)puVar9[3];
                    do {
                      uVar30 = uVar17;
                      uVar27 = uVar8;
                      uVar20 = uVar28;
                      uVar12 = uVar22;
                      uVar28 = uVar13;
                      uVar10 = uVar24;
                      uVar22 = uVar31;
                      uVar24 = uVar23;
                      uVar23 = uVar10;
                      uVar31 = uVar12;
                      uVar13 = uVar20;
                      uVar8 = (ulonglong)uVar30;
                      uVar17 = (uint)uVar27;
                    } while (((uVar24 ^ uVar20) & 0xffffffffffff) == 0);
                    local_1a0 = DAT_14c80af98;
                    if (((uVar28 ^ uVar10) & 0xffffffffffff) == 0) {
                      uVar12 = uVar12 & 0xffffffffffff;
                      if (*param_5 <= uVar12) {
                    /* WARNING: Does not return */
                        pcVar2 = (code *)invalidInstructionException();
                        (*pcVar2)();
                      }
                      if ((((uVar10 & 0xffffffffffff) + uVar12) - (uVar20 & 0xffffffffffff)) %
                          *param_5 == (uVar22 & 0xffffffffffff)) {
                        cVar16 = (char)uVar30;
                        if (cVar16 != '\0') {
                          if (cVar16 != '\x01') {
                    /* WARNING: Does not return */
                            pcVar2 = (code *)invalidInstructionException();
                            (*pcVar2)();
                          }
                          if ((uVar27 & 0xfe) != 0) {
                    /* WARNING: Does not return */
                            pcVar2 = (code *)invalidInstructionException();
                            (*pcVar2)();
                          }
                        }
                        if ((uVar20 & 0xffffffffffff) != (uVar24 & 0xffffffffffff)) {
                          if (1 < local_1b0) {
                    /* WARNING: Does not return */
                            pcVar2 = (code *)invalidInstructionException();
                            (*pcVar2)();
                          }
                          local_98[local_1b0] = uVar6;
                          local_1b0 = local_1b0 + 1;
                        }
                      }
                    }
                  }
                  uVar6 = uVar6 + 1;
                } while (uVar6 != local_178);
                DAT_14c80af98 = local_180;
                if (2 < local_1b0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                if (local_1b0 != 0) {
                  if (local_98[0] < local_160) {
                    puVar7 = (undefined8 *)(local_98[0] * 0x20 + *local_1d8);
                  }
                  else {
                    if (local_1d8 != &DAT_14c758470) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)invalidInstructionException();
                      (*pcVar2)();
                    }
                    if (3 < local_98[0] - local_160) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)invalidInstructionException();
                      (*pcVar2)();
                    }
                    puVar7 = (undefined8 *)(&DAT_14c80afb0 + (local_98[0] - local_160) * 0x20);
                  }
                  uStack_f0 = local_1c0;
                  uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar19);
                  local_118 = *puVar7;
                  uStack_110 = puVar7[1];
                  local_108 = puVar7[2];
                  uStack_100 = puVar7[3];
                  local_f8 = uVar14;
                  FUN_14679d619(&local_d8,&local_f8,&local_118,param_5);
                  if (local_1b0 == 2) {
                    uVar6 = local_98[1] - local_1d8[2];
                    if (local_98[1] < (ulonglong)local_1d8[2]) {
                      puVar7 = (undefined8 *)(local_98[1] * 0x20 + *local_1d8);
                    }
                    else {
                      if (local_1d8 != &DAT_14c758470) {
                    /* WARNING: Does not return */
                        pcVar2 = (code *)invalidInstructionException();
                        (*pcVar2)();
                      }
                      if (3 < uVar6) {
                    /* WARNING: Does not return */
                        pcVar2 = (code *)invalidInstructionException();
                        (*pcVar2)();
                      }
                      puVar7 = (undefined8 *)(&DAT_14c80afb0 + uVar6 * 0x20);
                    }
                    local_e8 = local_c8;
                    uStack_e0 = uStack_c0;
                    local_f8 = local_d8;
                    uStack_f0 = uStack_d0;
                    local_118 = *puVar7;
                    uStack_110 = puVar7[1];
                    local_108 = puVar7[2];
                    uStack_100 = puVar7[3];
                    FUN_14679d619(&local_d8,&local_f8,&local_118,param_5);
                    uVar6 = local_98[0] - local_1d8[2];
                    if (local_98[0] < (ulonglong)local_1d8[2]) {
                      lVar26 = *local_1d8;
                      puVar9 = (ulonglong *)(lVar26 + 0x10 + local_98[0] * 0x20);
                      *puVar9 = local_c8;
                      puVar9[1] = uStack_c0;
                      puVar9 = (ulonglong *)(lVar26 + local_98[0] * 0x20);
                      *puVar9 = local_d8;
                      puVar9[1] = uStack_d0;
                      uVar6 = local_1d8[2];
                      if (local_98[1] < uVar6) {
                        puVar7 = (undefined8 *)(local_98[1] * 0x20 + *local_1d8);
                        uVar23 = local_1d8[1] - 1;
                        local_1d8[1] = uVar23;
                        lVar26 = *local_1d8;
                        if (uVar23 < uVar6) goto LAB_14679c17d;
                        if (local_1d8 != &DAT_14c758470) {
                    /* WARNING: Does not return */
                          pcVar2 = (code *)invalidInstructionException();
                          (*pcVar2)();
                        }
                      }
                      else {
                        if (local_1d8 != &DAT_14c758470) {
                    /* WARNING: Does not return */
                          pcVar2 = (code *)invalidInstructionException();
                          (*pcVar2)();
                        }
LAB_14679c744:
                        if (3 < local_98[1] - uVar6) {
                    /* WARNING: Does not return */
                          pcVar2 = (code *)invalidInstructionException();
                          (*pcVar2)();
                        }
                        puVar7 = (undefined8 *)(&DAT_14c80afb0 + (local_98[1] - uVar6) * 0x20);
                        uVar23 = local_1d8[1] - 1;
                        local_1d8[1] = uVar23;
                        if (uVar23 < uVar6) {
                          lVar26 = *local_1d8;
                          goto LAB_14679c17d;
                        }
                      }
LAB_14679c78f:
                      if (3 < uVar23 - uVar6) {
                    /* WARNING: Does not return */
                        pcVar2 = (code *)invalidInstructionException();
                        (*pcVar2)();
                      }
                      puVar5 = (undefined8 *)(&DAT_14c80afb0 + (uVar23 - uVar6) * 0x20);
                    }
                    else {
                      if (local_1d8 != &DAT_14c758470) {
                    /* WARNING: Does not return */
                        pcVar2 = (code *)invalidInstructionException();
                        (*pcVar2)();
                      }
                      if (3 < uVar6) {
                    /* WARNING: Does not return */
                        pcVar2 = (code *)invalidInstructionException();
                        (*pcVar2)();
                      }
                      lVar26 = uVar6 * 0x20;
                      *(ulonglong *)(&DAT_14c80afc0 + lVar26) = local_c8;
                      *(ulonglong *)(&DAT_14c80afc8 + lVar26) = uStack_c0;
                      *(ulonglong *)(&DAT_14c80afb0 + lVar26) = local_d8;
                      *(ulonglong *)(&DAT_14c80afb8 + lVar26) = uStack_d0;
                      uVar6 = DAT_14c758480;
                      if (DAT_14c758480 <= local_98[1]) goto LAB_14679c744;
                      puVar7 = (undefined8 *)(local_98[1] * 0x20 + DAT_14c758470);
                      uVar23 = DAT_14c758478 - 1;
                      lVar26 = DAT_14c758470;
                      DAT_14c758478 = uVar23;
                      if (DAT_14c758480 <= uVar23) goto LAB_14679c78f;
LAB_14679c17d:
                      puVar5 = (undefined8 *)(uVar23 * 0x20 + lVar26);
                    }
                    uVar34 = *puVar5;
                    uVar37 = puVar5[1];
                    uVar38 = puVar5[3];
                    puVar7[2] = puVar5[2];
                    puVar7[3] = uVar38;
                    *puVar7 = uVar34;
                    puVar7[1] = uVar37;
                  }
                  else {
                    uVar6 = local_98[0] - local_1d8[2];
                    if (local_98[0] < (ulonglong)local_1d8[2]) {
                      puVar9 = (ulonglong *)(local_98[0] * 0x20 + *local_1d8);
                    }
                    else {
                      if (local_1d8 != &DAT_14c758470) {
                    /* WARNING: Does not return */
                        pcVar2 = (code *)invalidInstructionException();
                        (*pcVar2)();
                      }
                      if (3 < uVar6) {
                    /* WARNING: Does not return */
                        pcVar2 = (code *)invalidInstructionException();
                        (*pcVar2)();
                      }
                      puVar9 = (ulonglong *)(&DAT_14c80afb0 + uVar6 * 0x20);
                    }
                    puVar9[2] = local_c8;
                    puVar9[3] = uStack_c0;
                    *puVar9 = local_d8;
                    puVar9[1] = uStack_d0;
                  }
                  local_178 = CONCAT44(local_178._4_4_,(int)local_1a8);
                  uVar23 = local_188;
                  uVar6 = local_1d0;
                  goto LAB_14679a518;
                }
              }
              uStack_f0 = local_1c0;
              uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar19);
              local_f8 = uVar14;
              FUN_14679d49d(local_1d8);
              local_178 = CONCAT44(local_178._4_4_,uVar19);
              uVar23 = local_188;
              uVar6 = local_1d0;
            }
          }
          else {
            local_1d8[3] = (uVar14 - local_1b0) + local_1d8[3];
            (*(code *)param_5[4])(uVar14,local_1c0 - uVar14,param_5[5]);
            local_178 = CONCAT44(local_178._4_4_,uVar19);
            uVar6 = local_1d0;
          }
          goto LAB_14679a518;
        }
        if (local_1d8 != &DAT_14c758470) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (3 < uVar31 - uVar23) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        puVar21 = &DAT_14c80afb0 + uVar23 * -0x20;
        if ((*(ulonglong *)(&DAT_14c80afb8 + uVar29 + uVar23 * -0x20) & 0xffffffffffff) == local_c8)
        goto LAB_14679a8d1;
LAB_14679a657:
        uVar31 = uVar31 + 1;
        uVar29 = uVar29 + 0x20;
      } while (local_1d8[1] != uVar31);
    }
    uVar31 = local_188;
    uVar23 = local_1a8;
    uVar29 = local_180 + local_1a8;
    if (local_160 < uVar29) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (param_5[4] != 0) {
      local_1d8[3] = local_1d8[3] + local_1a8;
      (*(code *)param_5[4])(uVar6,local_1a0,param_5[5]);
      (*(code *)param_5[4])(local_160,uVar31,param_5[5]);
      uVar23 = local_180;
      uVar6 = local_1d0;
      goto LAB_14679a518;
    }
    local_1d8[3] = local_1d8[3] + local_1a0 + local_1a8 + local_188;
    uVar24 = *param_5;
    if (uVar24 == 1) {
      local_1c8 = local_1a0 + uVar6;
      if (CARRY8(local_1a0,uVar6)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar24 = 1;
      if (local_1a0 != 0) {
        if (uVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        local_170 = uVar6 & 0xffffffffffff;
        _DAT_14c80af90 = _DAT_14c80af90 + 1;
        local_1c0 = local_1c8 & 0xffffffffffff;
        uVar24 = local_1d8[1];
        if (uVar24 == 0) {
LAB_14679a87c:
          local_c8 = 0;
          uStack_c0 = CONCAT44(uStack_c0._4_4_,(uint)local_178);
          local_d8 = local_170;
          uStack_d0 = local_1c0;
          FUN_14679d49d();
        }
        else {
          local_168 = local_1d8[2];
          local_148 = DAT_14c80af98 + uVar24;
          uVar4 = 0;
          local_158 = 0;
          do {
            DAT_14c80af98 = DAT_14c80af98 + 1;
            local_1b8 = uVar24;
            local_198 = uVar29;
            if (uVar4 < local_168) {
              puVar9 = (ulonglong *)(uVar4 * 0x20 + *local_1d8);
            }
            else {
              if (local_1d8 != &DAT_14c758470) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              if (3 < uVar4 - local_168) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              puVar9 = (ulonglong *)(&DAT_14c80afb0 + (uVar4 - local_168) * 0x20);
            }
            if ((((*puVar9 ^ local_1c8) & 0xffffffffffff) == 0) ||
               (((puVar9[1] ^ uVar6) & 0xffffffffffff) == 0)) {
              uVar6 = 0;
              uVar13 = puVar9[1];
              uVar14 = local_1c0;
              uVar22 = *puVar9;
              uVar28 = local_170;
              uVar8 = puVar9[2];
              uVar17 = (uint)puVar9[3];
              uVar30 = (uint)local_178;
              do {
                uVar18 = uVar30;
                uVar30 = uVar17;
                uVar20 = uVar8;
                uVar10 = uVar28;
                uVar28 = uVar22;
                uVar12 = uVar13;
                uVar8 = uVar6;
                uVar27 = uVar14 ^ uVar28;
                uVar6 = uVar20;
                uVar13 = uVar14;
                uVar14 = uVar12;
                uVar22 = uVar10;
                uVar17 = uVar18;
              } while ((uVar27 & 0xffffffffffff) == 0);
              uVar6 = local_1b0;
              local_1a0 = DAT_14c80af98;
              if (((uVar10 ^ uVar12) & 0xffffffffffff) == 0) {
                if ((uVar20 & 0xffffffffffff) != 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                if ((uVar8 & 0xffffffffffff) == 0) {
                  cVar16 = (char)uVar30;
                  if (cVar16 != '\0') {
                    if (cVar16 != '\x01') {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)invalidInstructionException();
                      (*pcVar2)();
                    }
                    if ((uVar18 & 0xfe) != 0) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)invalidInstructionException();
                      (*pcVar2)();
                    }
                  }
                  if (1 < local_158) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)invalidInstructionException();
                    (*pcVar2)();
                  }
                  local_98[local_158] = uVar4;
                  local_158 = local_158 + 1;
                }
              }
            }
            uVar14 = local_98[0];
            uVar13 = local_158;
            uVar4 = uVar4 + 1;
          } while (uVar4 != uVar24);
          DAT_14c80af98 = local_148;
          if (2 < local_158) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (local_158 == 0) goto LAB_14679a87c;
          if (local_98[0] < local_168) {
            puVar7 = (undefined8 *)(local_98[0] * 0x20 + *local_1d8);
          }
          else {
            if (local_1d8 != &DAT_14c758470) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (3 < local_98[0] - local_168) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            puVar7 = (undefined8 *)(&DAT_14c80afb0 + (local_98[0] - local_168) * 0x20);
          }
          local_e8 = 0;
          uStack_e0 = CONCAT44(uStack_e0._4_4_,(uint)local_178);
          local_118 = *puVar7;
          uStack_110 = puVar7[1];
          local_108 = puVar7[2];
          uStack_100 = puVar7[3];
          local_f8 = local_170;
          uStack_f0 = local_1c0;
          FUN_14679d619(&local_d8,&local_f8,&local_118,param_5);
          uVar6 = local_98[1];
          if (uVar13 == 2) {
            uVar23 = local_98[1] - local_1d8[2];
            if (local_98[1] < (ulonglong)local_1d8[2]) {
              puVar7 = (undefined8 *)(local_98[1] * 0x20 + *local_1d8);
            }
            else {
              if (local_1d8 != &DAT_14c758470) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              if (3 < uVar23) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              puVar7 = (undefined8 *)(&DAT_14c80afb0 + uVar23 * 0x20);
            }
            local_e8 = local_c8;
            uStack_e0 = uStack_c0;
            local_f8 = local_d8;
            uStack_f0 = uStack_d0;
            local_118 = *puVar7;
            uStack_110 = puVar7[1];
            local_108 = puVar7[2];
            uStack_100 = puVar7[3];
            FUN_14679d619(&local_d8,&local_f8,&local_118,param_5);
            uVar23 = uVar14 - local_1d8[2];
            if (uVar14 < (ulonglong)local_1d8[2]) {
              lVar26 = *local_1d8;
              puVar9 = (ulonglong *)(lVar26 + 0x10 + uVar14 * 0x20);
              *puVar9 = local_c8;
              puVar9[1] = uStack_c0;
              puVar9 = (ulonglong *)(lVar26 + uVar14 * 0x20);
              *puVar9 = local_d8;
              puVar9[1] = uStack_d0;
              uVar23 = local_1d8[2];
              if (uVar6 < uVar23) {
                puVar7 = (undefined8 *)(uVar6 * 0x20 + *local_1d8);
                uVar6 = local_1d8[1] - 1;
                local_1d8[1] = uVar6;
                lVar26 = *local_1d8;
                if (uVar6 < uVar23) goto LAB_14679b93a;
                if (local_1d8 != &DAT_14c758470) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
              }
              else {
                if (local_1d8 != &DAT_14c758470) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
LAB_14679c577:
                if (3 < uVar6 - uVar23) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                puVar7 = (undefined8 *)(&DAT_14c80afb0 + (uVar6 - uVar23) * 0x20);
                uVar6 = local_1d8[1] - 1;
                local_1d8[1] = uVar6;
                if (uVar6 < uVar23) {
                  lVar26 = *local_1d8;
                  goto LAB_14679b93a;
                }
              }
LAB_14679c5c6:
              if (3 < uVar6 - uVar23) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              puVar5 = (undefined8 *)(&DAT_14c80afb0 + (uVar6 - uVar23) * 0x20);
            }
            else {
              if (local_1d8 != &DAT_14c758470) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              if (3 < uVar23) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              lVar26 = uVar23 * 0x20;
              *(ulonglong *)(&DAT_14c80afc0 + lVar26) = local_c8;
              *(ulonglong *)(&DAT_14c80afc8 + lVar26) = uStack_c0;
              *(ulonglong *)(&DAT_14c80afb0 + lVar26) = local_d8;
              *(ulonglong *)(&DAT_14c80afb8 + lVar26) = uStack_d0;
              uVar23 = DAT_14c758480;
              if (DAT_14c758480 <= uVar6) goto LAB_14679c577;
              puVar7 = (undefined8 *)(uVar6 * 0x20 + DAT_14c758470);
              uVar6 = DAT_14c758478 - 1;
              lVar26 = DAT_14c758470;
              DAT_14c758478 = uVar6;
              if (DAT_14c758480 <= uVar6) goto LAB_14679c5c6;
LAB_14679b93a:
              puVar5 = (undefined8 *)(uVar6 * 0x20 + lVar26);
            }
            uVar34 = *puVar5;
            uVar37 = puVar5[1];
            uVar38 = puVar5[3];
            puVar7[2] = puVar5[2];
            puVar7[3] = uVar38;
            *puVar7 = uVar34;
            puVar7[1] = uVar37;
            uVar29 = local_198;
            uVar23 = local_1a8;
            uVar31 = local_188;
          }
          else {
            uVar6 = uVar14 - local_1d8[2];
            if (uVar14 < (ulonglong)local_1d8[2]) {
              puVar9 = (ulonglong *)(uVar14 * 0x20 + *local_1d8);
            }
            else {
              if (local_1d8 != &DAT_14c758470) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              if (3 < uVar6) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              puVar9 = (ulonglong *)(&DAT_14c80afb0 + uVar6 * 0x20);
              uVar29 = local_198;
              uVar23 = local_1a8;
              uVar31 = local_188;
            }
            puVar9[2] = local_c8;
            puVar9[3] = uStack_c0;
            *puVar9 = local_d8;
            puVar9[1] = uStack_d0;
          }
        }
        uVar24 = *param_5;
      }
    }
    else if (local_1a0 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    local_1c8 = uVar23 % uVar24;
    local_160 = local_160 + uVar31;
    if (local_160 < uVar29) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar23 = local_180;
    uVar6 = local_1d0;
    if (local_160 != uVar29) {
      local_1c0 = uVar24;
      if (uVar29 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      local_168 = uVar29 & 0xffffffffffff;
      _DAT_14c80af90 = _DAT_14c80af90 + 1;
      local_188 = local_160 & 0xffffffffffff;
      local_1c8 = local_1c8 & 0xffffffffffff;
      uVar6 = local_1d8[1];
      if (uVar6 != 0) {
        local_1b0 = local_1d8[2];
        local_158 = uVar6 + DAT_14c80af98;
        uVar23 = 0;
        local_1b8 = 0;
        do {
          DAT_14c80af98 = DAT_14c80af98 + 1;
          local_198 = uVar29;
          local_170 = uVar6;
          if (uVar23 < local_1b0) {
            puVar9 = (ulonglong *)(uVar23 * 0x20 + *local_1d8);
          }
          else {
            if (local_1d8 != &DAT_14c758470) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (3 < uVar23 - local_1b0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            puVar9 = (ulonglong *)(&DAT_14c80afb0 + (uVar23 - local_1b0) * 0x20);
          }
          uVar31 = *puVar9;
          uVar4 = puVar9[1];
          uVar13 = local_188;
          uVar14 = puVar9[2];
          uVar22 = local_1c8;
          uVar28 = local_168;
          uVar17 = (uint)puVar9[3];
          uVar30 = (uint)local_178;
          if ((((uVar31 ^ local_160) & 0xffffffffffff) == 0) ||
             (((uVar4 ^ uVar29) & 0xffffffffffff) == 0)) {
            do {
              uVar18 = uVar30;
              uVar30 = uVar17;
              uVar10 = uVar28;
              uVar28 = uVar31;
              uVar12 = uVar4;
              uVar8 = uVar22;
              uVar22 = uVar14;
              uVar4 = uVar13;
              uVar13 = uVar12;
              uVar14 = uVar8;
              uVar31 = uVar10;
              uVar17 = uVar18;
            } while (((uVar4 ^ uVar28) & 0xffffffffffff) == 0);
            local_1a8 = uVar23;
            local_1a0 = DAT_14c80af98;
            if (((uVar10 ^ uVar12) & 0xffffffffffff) == 0) {
              uVar22 = uVar22 & 0xffffffffffff;
              if (uVar24 <= uVar22) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              if ((((uVar12 & 0xffffffffffff) + uVar22) - (uVar28 & 0xffffffffffff)) % uVar24 ==
                  (uVar8 & 0xffffffffffff)) {
                cVar16 = (char)uVar30;
                if (cVar16 != '\0') {
                  if (cVar16 != '\x01') {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)invalidInstructionException();
                    (*pcVar2)();
                  }
                  if ((uVar18 & 0xfe) != 0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)invalidInstructionException();
                    (*pcVar2)();
                  }
                }
                if ((uVar28 & 0xffffffffffff) != (uVar4 & 0xffffffffffff)) {
                  if (1 < local_1b8) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)invalidInstructionException();
                    (*pcVar2)();
                  }
                  local_98[local_1b8] = uVar23;
                  local_1b8 = local_1b8 + 1;
                }
              }
            }
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 != uVar6);
        DAT_14c80af98 = local_158;
        if (2 < local_1b8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (local_1b8 != 0) {
          if (local_98[0] < local_1b0) {
            puVar7 = (undefined8 *)(local_98[0] * 0x20 + *local_1d8);
          }
          else {
            if (local_1d8 != &DAT_14c758470) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (3 < local_98[0] - local_1b0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            puVar7 = (undefined8 *)(&DAT_14c80afb0 + (local_98[0] - local_1b0) * 0x20);
          }
          uStack_e0 = CONCAT44(uStack_e0._4_4_,(uint)local_178);
          local_118 = *puVar7;
          uStack_110 = puVar7[1];
          local_108 = puVar7[2];
          uStack_100 = puVar7[3];
          local_f8 = local_168;
          uStack_f0 = local_188;
          local_e8 = local_1c8;
          FUN_14679d619(&local_d8,&local_f8,&local_118,param_5);
          plVar25 = local_1d8;
          if (local_1b8 != 2) {
            uVar6 = local_98[0] - local_1d8[2];
            if (local_98[0] < (ulonglong)local_1d8[2]) {
              puVar9 = (ulonglong *)(local_98[0] * 0x20 + *local_1d8);
            }
            else {
              if (local_1d8 != &DAT_14c758470) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              if (3 < uVar6) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              puVar9 = (ulonglong *)(&DAT_14c80afb0 + uVar6 * 0x20);
            }
            puVar9[2] = local_c8;
            puVar9[3] = uStack_c0;
            *puVar9 = local_d8;
            puVar9[1] = uStack_d0;
            uVar23 = local_180;
            uVar6 = local_1d0;
            goto LAB_14679a518;
          }
          uVar6 = local_98[1] - local_1d8[2];
          if (local_98[1] < (ulonglong)local_1d8[2]) {
            puVar7 = (undefined8 *)(local_98[1] * 0x20 + *local_1d8);
          }
          else {
            if (local_1d8 != &DAT_14c758470) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (3 < uVar6) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            puVar7 = (undefined8 *)(&DAT_14c80afb0 + uVar6 * 0x20);
          }
          local_e8 = local_c8;
          uStack_e0 = uStack_c0;
          local_f8 = local_d8;
          uStack_f0 = uStack_d0;
          local_118 = *puVar7;
          uStack_110 = puVar7[1];
          local_108 = puVar7[2];
          uStack_100 = puVar7[3];
          FUN_14679d619(&local_d8,&local_f8,&local_118,param_5);
          uVar6 = local_98[0] - plVar25[2];
          if (local_98[0] < (ulonglong)plVar25[2]) {
            lVar26 = *plVar25;
            puVar9 = (ulonglong *)(lVar26 + 0x10 + local_98[0] * 0x20);
            *puVar9 = local_c8;
            puVar9[1] = uStack_c0;
            puVar9 = (ulonglong *)(lVar26 + local_98[0] * 0x20);
            *puVar9 = local_d8;
            puVar9[1] = uStack_d0;
            uVar6 = plVar25[2];
            if (local_98[1] < uVar6) {
              lVar26 = *plVar25;
              puVar7 = (undefined8 *)(local_98[1] * 0x20 + lVar26);
              uVar23 = plVar25[1] - 1;
              plVar25[1] = uVar23;
              if (uVar23 < uVar6) goto LAB_14679b7f9;
              if (local_1d8 != &DAT_14c758470) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
            }
            else {
              if (plVar25 != &DAT_14c758470) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
LAB_14679c43e:
              if (3 < local_98[1] - uVar6) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              puVar7 = (undefined8 *)(&DAT_14c80afb0 + (local_98[1] - uVar6) * 0x20);
              uVar23 = local_1d8[1] - 1;
              local_1d8[1] = uVar23;
              if (uVar23 < uVar6) {
                lVar26 = *local_1d8;
                goto LAB_14679b7f9;
              }
            }
LAB_14679c48d:
            if (3 < uVar23 - uVar6) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            puVar5 = (undefined8 *)(&DAT_14c80afb0 + (uVar23 - uVar6) * 0x20);
          }
          else {
            if (plVar25 != &DAT_14c758470) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (3 < uVar6) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            lVar26 = uVar6 * 0x20;
            *(ulonglong *)(&DAT_14c80afc0 + lVar26) = local_c8;
            *(ulonglong *)(&DAT_14c80afc8 + lVar26) = uStack_c0;
            *(ulonglong *)(&DAT_14c80afb0 + lVar26) = local_d8;
            *(ulonglong *)(&DAT_14c80afb8 + lVar26) = uStack_d0;
            lVar26 = DAT_14c758470;
            uVar6 = local_1d8[2];
            if (uVar6 <= local_98[1]) goto LAB_14679c43e;
            puVar7 = (undefined8 *)(local_98[1] * 0x20 + DAT_14c758470);
            uVar23 = local_1d8[1] - 1;
            local_1d8[1] = uVar23;
            if (uVar6 <= uVar23) goto LAB_14679c48d;
LAB_14679b7f9:
            puVar5 = (undefined8 *)(uVar23 * 0x20 + lVar26);
          }
          uVar34 = *puVar5;
          uVar37 = puVar5[1];
          uVar38 = puVar5[3];
          puVar7[2] = puVar5[2];
          puVar7[3] = uVar38;
          *puVar7 = uVar34;
          puVar7[1] = uVar37;
          uVar23 = local_180;
          uVar6 = local_1d0;
          goto LAB_14679a518;
        }
      }
      uStack_c0 = CONCAT44(uStack_c0._4_4_,(uint)local_178);
      local_d8 = local_168;
      uStack_d0 = local_188;
      local_c8 = local_1c8;
      FUN_14679d49d();
      uVar23 = local_180;
      uVar6 = local_1d0;
    }
  }
  else {
    local_198 = local_1d0 - 1;
    puVar21 = &DAT_14c80afb0;
    uVar31 = 0;
    local_128 = 0;
    local_130 = 0;
    local_1b8 = 0;
    local_158 = 0;
    local_148 = local_148 & 0xffffffff00000000;
    local_1c0 = 0;
    uVar23 = 0;
    local_138 = 0;
    local_140 = 0;
    local_178 = 0;
    local_160 = 0;
    uVar29 = 0;
    plVar25 = local_1d8;
    do {
      _DAT_14c80afa8 = _DAT_14c80afa8 + 1;
      uVar24 = plVar25[2];
      if (uVar31 < uVar24) {
        puVar9 = (ulonglong *)(uVar31 * 0x20 + *plVar25);
      }
      else {
        if (plVar25 != &DAT_14c758470) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (3 < uVar31 - uVar24) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        puVar9 = (ulonglong *)(puVar21 + uVar24 * -0x20);
      }
      uVar24 = *puVar9;
      uVar4 = puVar9[2];
      uVar13 = puVar9[3];
      uVar31 = uVar31 + 1;
      uVar22 = uVar24 & 0xffffffffffff;
      uVar14 = uVar23 & 0xffffffffffff;
      if ((uVar29 == 0) || (uVar22 <= uVar14)) {
        uVar28 = puVar9[1] & 0xffffffffffff;
        uVar8 = uVar28 - uVar22;
        local_1a0 = uVar29;
        if (local_1a8 <= uVar8) {
          local_1b0 = uVar4 & 0xffffffffffff;
          if (local_1b0 == 0) {
            if ((local_198 & uVar22 - local_150) == 0) {
              if ((int)POPCOUNT(param_5[1]) != 1) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                local_180 = uVar13;
                (*pcVar2)();
              }
              if ((param_5[1] - 1 & local_1a8) == 0) {
                uVar12 = uVar24 + local_1a8 & 0xffffffffffff;
                local_168 = local_1a8 % *param_5 & 0xffffffffffff;
                uVar20 = puVar9[1] & 0xffff000000000000 | uVar22;
                local_1b0 = uVar13 & 0xff;
                uVar8 = uVar22;
                local_188 = uVar23;
                local_180 = uVar13;
LAB_14679a2f3:
                uVar23 = local_188;
                uVar29 = local_1a0;
                if (uVar8 != uVar12) {
                  if (uVar8 == 0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)invalidInstructionException();
                    (*pcVar2)();
                  }
                  if ((local_1a0 == 0) || (uVar8 < uVar14)) {
                    local_148 = CONCAT44(local_148._4_4_,(uint)(byte)local_180);
                    local_130 = local_168;
                    local_128 = local_1b0;
                    uVar23 = uVar8;
                    uVar29 = uVar31;
                    local_1c0 = uVar12;
                    local_1b8 = uVar28;
                    local_178 = uVar20;
                    local_160 = uVar24;
                    local_158 = uVar12;
                    local_140 = uVar4;
                    local_138 = uVar13;
                  }
                }
              }
              else {
                uVar4 = 1;
                uVar12 = uVar8;
                uVar10 = uVar22;
                local_180 = uVar13;
                if (uVar28 != uVar22) goto LAB_14679a09c;
              }
            }
            else if (uVar28 != uVar22) {
              uVar4 = *param_5;
              uVar12 = uVar22;
              goto LAB_14679a04c;
            }
          }
          else if (uVar28 != uVar22) {
            uVar4 = *param_5;
            uVar12 = (uVar4 - local_1b0) + uVar22;
            local_180 = uVar13;
            if (uVar12 < uVar28) {
LAB_14679a04c:
              local_1e8 = uVar6;
              local_180 = uVar13;
              FUN_1467805a9(&local_d8,uVar12,uVar4,local_150);
              uVar4 = local_d8 & 0xffffffff;
              uVar10 = uStack_d0;
              if (((byte)local_d8 & uStack_d0 < uVar28) == 0) {
                uVar4 = 0;
                uVar10 = 0;
              }
              uVar12 = uVar28 - uVar10;
              plVar25 = local_1d8;
              uVar6 = local_1d0;
LAB_14679a09c:
              uVar29 = local_1a0;
              if (((uVar4 & 1) != 0) && (uVar6 = local_1d0, local_1a8 <= uVar12)) {
                uVar20 = uVar24 + (uVar10 - uVar22) & 0xffffffffffff;
                uVar6 = *param_5;
                uVar29 = param_5[1];
                local_1c8 = uVar10 + local_1a8;
                uVar24 = ((local_1c8 - uVar20) +
                         (((uVar10 - uVar22) + local_1b0) % uVar6 & 0xffffffffffff)) % uVar6;
                if ((int)POPCOUNT(uVar29) != 1) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  local_188 = uVar23;
                  (*pcVar2)();
                }
                if (uVar29 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  local_188 = uVar23;
                  (*pcVar2)();
                }
                uVar4 = uVar20 - uVar22;
                local_168 = uVar24;
                if (uVar4 == 0) {
LAB_14679a133:
                  local_170 = 0;
                  local_188 = uVar23;
                }
                else {
                  if (local_1b0 != 0) {
                    uVar24 = (uVar6 - local_1b0) + uVar22;
                    if (uVar24 < uVar20) goto LAB_14679b546;
                    goto LAB_14679a133;
                  }
                  uVar24 = uVar22;
                  local_188 = uVar23;
                  local_170 = uVar4;
                  if ((uVar29 + 0xffffffffffff & uVar22) != 0) {
LAB_14679b546:
                    local_170 = 0;
                    local_1e8 = uVar29;
                    local_188 = uVar23;
                    FUN_1467805a9(&local_d8,uVar24,uVar6,0);
                    plVar25 = local_1d8;
                    if ((((local_d8 & 1) != 0) &&
                        (uVar6 = uVar20 - uStack_d0, uStack_d0 <= uVar20 && uVar6 != 0)) &&
                       (local_170 = uVar4, uStack_d0 != uVar22)) {
                      uVar6 = uVar6 - uVar6 % param_5[1];
                      local_170 = uVar6 - uVar6 % *param_5;
                    }
                  }
                }
                uVar6 = param_5[1];
                if ((int)POPCOUNT(uVar6) != 1) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                if (uVar6 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                local_1c8 = local_1c8 & 0xffffffffffff;
                local_168 = local_168 & 0xffffffffffff;
                lVar26 = uVar28 - local_1c8;
                if (lVar26 == 0) {
LAB_14679a266:
                  lVar32 = 0;
                }
                else {
                  if (local_168 != 0) {
                    uVar23 = *param_5;
                    uVar29 = (uVar23 - local_168) + local_1c8;
                    if (uVar29 < uVar28) goto LAB_14679b62a;
                    goto LAB_14679a266;
                  }
                  lVar32 = lVar26;
                  if ((local_1c8 & uVar6 + 0xffffffffffff) != 0) {
                    uVar23 = *param_5;
                    uVar29 = local_1c8;
LAB_14679b62a:
                    local_1e8 = uVar6;
                    FUN_1467805a9(&local_d8,uVar29,uVar23,0);
                    plVar25 = local_1d8;
                    if ((local_d8 & 1) == 0) {
                      lVar32 = 0;
                    }
                    else {
                      local_120 = uVar28 - uStack_d0;
                      lVar32 = 0;
                      if ((uStack_d0 <= uVar28 && local_120 != 0) &&
                         (lVar32 = lVar26, uStack_d0 != local_1c8)) {
                        uVar6 = local_120 - local_120 % param_5[1];
                        lVar32 = uVar6 - uVar6 % *param_5;
                      }
                    }
                  }
                }
                auVar35._8_4_ = (int)(uVar8 >> 0x20);
                auVar35._0_8_ = uVar8;
                auVar35._12_4_ = 0x45300000;
                lVar32 = local_170 + local_1a8 + lVar32;
                auVar39._8_4_ = (int)((ulonglong)lVar32 >> 0x20);
                auVar39._0_8_ = lVar32;
                auVar39._12_4_ = 0x45300000;
                uVar23 = local_188;
                uVar6 = local_1d0;
                uVar29 = local_1a0;
                if ((((double)CONCAT44(0x43300000,(int)uVar8) - 4503599627370496.0) +
                    (auVar35._8_8_ - 1.9342813113834067e+25)) /
                    (((double)CONCAT44(0x43300000,(int)lVar32) - 4503599627370496.0) +
                    (auVar39._8_8_ - 1.9342813113834067e+25)) <= 1.3) {
                  uVar13 = local_180 & 0xff;
                  uVar4 = local_1b0;
                  uVar8 = uVar20;
                  uVar12 = local_1c8;
                  uVar24 = uVar22;
                  local_1b0 = uVar13;
                  goto LAB_14679a2f3;
                }
              }
            }
          }
        }
      }
      uVar24 = plVar25[1];
      puVar21 = puVar21 + 0x20;
    } while (uVar31 < uVar24);
    if (uVar29 == 0) goto LAB_14679a55f;
    if (((local_1c0 ^ uVar23) & 0xffffffffffff) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar23 = uVar23 & 0xffffffffffff;
    if (uVar23 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((local_1c0 & 0xffffffffffff) - uVar23 != local_1a8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    bVar33 = ((local_178 ^ local_160) & 0xffffffffffff) == 0;
    bVar1 = !bVar33;
    puVar9 = &local_d8;
    if (bVar33) {
      if (((local_1b8 ^ local_158) & 0xffffffffffff) != 0) goto LAB_14679a4ad;
      uVar29 = uVar29 - 1;
      uVar31 = plVar25[2];
      if (uVar29 < uVar31) {
        lVar26 = *plVar25;
        puVar7 = (undefined8 *)(uVar29 * 0x20 + lVar26);
        uVar4 = uVar24 - 1;
        plVar25[1] = uVar4;
        if (uVar31 <= uVar4) {
          if (plVar25 != &DAT_14c758470) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
LAB_14679b9f0:
          uVar31 = (uVar24 - 1) - uVar31;
          if (3 < uVar31) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          lVar26 = uVar31 * 0x20;
          uVar34 = *(undefined8 *)(&DAT_14c80afb0 + lVar26);
          uVar37 = *(undefined8 *)(&DAT_14c80afb8 + lVar26);
          uVar38 = *(undefined8 *)(&DAT_14c80afc0 + lVar26);
          uVar40 = *(undefined8 *)(&DAT_14c80afc8 + lVar26);
          goto LAB_14679ba13;
        }
        puVar5 = (undefined8 *)(lVar26 + uVar4 * 0x20);
        uVar34 = *puVar5;
        uVar37 = puVar5[1];
        puVar5 = (undefined8 *)(lVar26 + 0x10 + uVar4 * 0x20);
        uVar38 = puVar5[1];
        puVar7[2] = *puVar5;
        puVar7[3] = uVar38;
        *puVar7 = uVar34;
        puVar7[1] = uVar37;
        uVar31 = plVar25[2];
        if (uVar31 <= uVar29) {
          if (plVar25 != &DAT_14c758470) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          goto LAB_14679ba4a;
        }
LAB_14679a7c2:
        uVar31 = *(ulonglong *)(*plVar25 + uVar29 * 0x20) & 0xffffffffffff;
        if (uVar31 == 0) {
LAB_14679ba91:
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        puVar21 = (undefined *)(*plVar25 + uVar29 * 0x20);
      }
      else {
        if (plVar25 != &DAT_14c758470) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (3 < uVar29 - uVar31) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        puVar7 = (undefined8 *)(&DAT_14c80afb0 + (uVar29 - uVar31) * 0x20);
        uVar6 = uVar24 - 1;
        local_1d8[1] = uVar6;
        if (uVar31 <= uVar6) goto LAB_14679b9f0;
        puVar5 = (undefined8 *)(DAT_14c758470 + uVar6 * 0x20);
        uVar34 = *puVar5;
        uVar37 = puVar5[1];
        puVar5 = (undefined8 *)(DAT_14c758470 + 0x10 + uVar6 * 0x20);
        uVar38 = *puVar5;
        uVar40 = puVar5[1];
LAB_14679ba13:
        puVar7[2] = uVar38;
        puVar7[3] = uVar40;
        *puVar7 = uVar34;
        puVar7[1] = uVar37;
        uVar31 = local_1d8[2];
        plVar25 = local_1d8;
        uVar6 = local_1d0;
        if (uVar29 < uVar31) goto LAB_14679a7c2;
LAB_14679ba4a:
        if (3 < uVar29 - uVar31) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar26 = (uVar29 - uVar31) * 0x20;
        uVar31 = *(ulonglong *)(&DAT_14c80afb0 + lVar26) & 0xffffffffffff;
        if (uVar31 == 0) goto LAB_14679ba91;
        puVar21 = &DAT_14c80afb0 + lVar26;
        uVar6 = local_1d0;
      }
      if ((*(ulonglong *)(puVar21 + 8) & 0xffffffffffff) <= uVar31) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      local_d8 = local_160;
      uStack_d0 = local_178;
      local_c8 = local_140;
      uStack_c0 = local_138;
      puVar9 = &local_b8;
      if (((local_1b8 ^ local_158) & 0xffffffffffff) == 0) {
        bVar1 = false;
      }
      else {
LAB_14679a4ad:
        *puVar9 = local_158;
        puVar9[1] = local_1b8;
        puVar9[2] = local_130;
        puVar9[3] = local_128;
      }
      uVar29 = uVar29 - 1;
      uVar31 = uVar29 - plVar25[2];
      if (uVar29 < (ulonglong)plVar25[2]) {
        puVar9 = (ulonglong *)(uVar29 * 0x20 + *plVar25);
      }
      else {
        if (plVar25 != &DAT_14c758470) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (3 < uVar31) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        puVar9 = (ulonglong *)(&DAT_14c80afb0 + uVar31 * 0x20);
        plVar25 = local_1d8;
        uVar6 = local_1d0;
      }
      puVar9[2] = local_c8;
      puVar9[3] = uStack_c0;
      *puVar9 = local_d8;
      puVar9[1] = uStack_d0;
      if (bVar1) {
        local_e8 = CONCAT44(uStack_a4,local_a8);
        uStack_e0 = uStack_a0;
        local_f8 = local_b8;
        uStack_f0 = uStack_b0;
        FUN_14679d49d(plVar25);
        uVar6 = local_1d0;
      }
    }
    local_178 = CONCAT44(local_178._4_4_,(int)(char)local_148);
  }
LAB_14679a518:
  if ((uVar23 - local_150 & uVar6 - 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  *local_190 = uVar23;
  *(undefined1 *)(local_190 + 1) = 1;
  *(undefined2 *)((longlong)local_190 + 9) = (undefined2)local_d8;
  *(undefined1 *)((longlong)local_190 + 0xb) = local_d8._2_1_;
  *(uint *)((longlong)local_190 + 0xc) = (uint)local_178;
  param_1 = local_190;
LAB_14679a6fb:
  if ((local_98[3] ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14679c7f3 FUN_14679c7f3 body=1624 status=ok
// SIG undefined FUN_14679c7f3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14679c7f3(undefined8 *param_1,ulonglong *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  char cVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong *puVar23;
  undefined1 auStack_158 [32];
  ulonglong *local_138;
  ulonglong local_128;
  ulonglong *local_120;
  ulonglong local_118;
  ulonglong *local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  longlong local_f0;
  ulonglong *local_e8;
  ulonglong *local_e0;
  ulonglong *local_d8 [2];
  undefined8 local_c8;
  undefined8 local_c0;
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
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58 [3];
  
  uVar12 = DAT_14c758480;
  puVar23 = DAT_14c758470;
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((ulonglong **)param_1 == &DAT_14c758470) {
    if (*param_2 != 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (DAT_14c758480 < DAT_14c758478) {
      uVar11 = 4;
      if (4 < DAT_14c758478 * 2) {
        uVar11 = DAT_14c758478 * 2;
      }
      local_c8 = 8;
      local_c0 = 0;
      local_138 = param_2;
      FUN_146799e18(local_d8,&DAT_14c758470);
      if (local_d8[0] == (ulonglong *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (uVar11 < DAT_14c758478) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (DAT_14c758478 == 0) {
        uVar15 = 0;
      }
      else {
        puVar7 = &DAT_14c80afb0;
        uVar17 = 0;
        puVar9 = local_d8[0];
        do {
          if (uVar17 < DAT_14c758480) {
            puVar16 = DAT_14c758470 + uVar17 * 4;
          }
          else {
            if (3 < uVar17 - DAT_14c758480) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            puVar16 = (ulonglong *)(puVar7 + DAT_14c758480 * -0x20);
          }
          uVar2 = *(undefined4 *)((longlong)puVar16 + 4);
          uVar5 = puVar16[1];
          uVar3 = *(undefined4 *)((longlong)puVar16 + 0xc);
          uVar15 = puVar16[2];
          uVar4 = puVar16[3];
          *(int *)puVar9 = (int)*puVar16;
          *(undefined4 *)((longlong)puVar9 + 4) = uVar2;
          *(int *)(puVar9 + 1) = (int)uVar5;
          *(undefined4 *)((longlong)puVar9 + 0xc) = uVar3;
          puVar9[2] = uVar15;
          puVar9[3] = uVar4;
          if ((*puVar9 & 0xffffffffffff) == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if ((puVar9[1] & 0xffffffffffff) <= (*puVar9 & 0xffffffffffff)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          uVar17 = uVar17 + 1;
          puVar7 = puVar7 + 0x20;
          puVar9 = puVar9 + 4;
          uVar15 = DAT_14c758478;
        } while (uVar17 < DAT_14c758478);
      }
      DAT_14c758470 = local_d8[0];
      DAT_14c758480 = uVar11;
      if (puVar23 != (ulonglong *)0x0) {
        uVar17 = uVar12 * 0x20;
        local_e0 = puVar23 + uVar12 * 4;
        if (CARRY8(uVar17,(ulonglong)puVar23)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (uVar17 != 0) {
          local_f8 = (ulonglong)puVar23 & 0xffffffffffff;
          local_100 = (ulonglong)local_e0 & 0xffffffffffff;
          _DAT_14c80af90 = _DAT_14c80af90 + 1;
          if (uVar15 != 0) {
            uVar12 = 0;
            local_128 = 0;
            local_e8 = local_d8[0];
            local_110 = puVar23;
            do {
              DAT_14c80af98 = DAT_14c80af98 + 1;
              local_120 = param_2;
              local_118 = uVar15;
              local_108 = uVar11;
              if (uVar12 < uVar11) {
                puVar9 = local_d8[0] + uVar12 * 4;
              }
              else {
                if (3 < uVar12 - uVar11) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)invalidInstructionException();
                  (*pcVar1)();
                }
                puVar9 = (ulonglong *)(&DAT_14c80afb0 + (uVar12 - uVar11) * 0x20);
              }
              if ((((*puVar9 ^ (ulonglong)local_e0) & 0xffffffffffff) == 0) ||
                 (((puVar9[1] ^ (ulonglong)puVar23) & 0xffffffffffff) == 0)) {
                uVar17 = local_100;
                uVar4 = puVar9[2];
                uVar5 = local_f8;
                uVar8 = puVar9[1];
                uVar13 = *puVar9;
                uVar22 = 0;
                uVar6 = (uint)puVar9[3];
                uVar10 = 0;
                do {
                  uVar20 = uVar10;
                  uVar10 = uVar6;
                  uVar21 = uVar22;
                  uVar18 = uVar13;
                  uVar14 = uVar8;
                  uVar13 = uVar5;
                  uVar22 = uVar4;
                  uVar8 = uVar17;
                  uVar17 = uVar14;
                  uVar4 = uVar21;
                  uVar5 = uVar18;
                  uVar6 = uVar20;
                } while (((uVar8 ^ uVar18) & 0xffffffffffff) == 0);
                local_f0 = DAT_14c80af98;
                if (((uVar13 ^ uVar14) & 0xffffffffffff) == 0) {
                  uVar22 = uVar22 & 0xffffffffffff;
                  if (*param_2 <= uVar22) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)invalidInstructionException();
                    (*pcVar1)();
                  }
                  if ((((uVar14 & 0xffffffffffff) + uVar22) - (uVar18 & 0xffffffffffff)) % *param_2
                      == (uVar21 & 0xffffffffffff)) {
                    cVar19 = (char)uVar10;
                    if (cVar19 != '\0') {
                      if (cVar19 != '\x01') {
                    /* WARNING: Does not return */
                        pcVar1 = (code *)invalidInstructionException();
                        (*pcVar1)();
                      }
                      if ((uVar20 & 0xfe) != 0) {
                    /* WARNING: Does not return */
                        pcVar1 = (code *)invalidInstructionException();
                        (*pcVar1)();
                      }
                    }
                    if ((uVar18 & 0xffffffffffff) != (uVar8 & 0xffffffffffff)) {
                      if (1 < local_128) {
                    /* WARNING: Does not return */
                        pcVar1 = (code *)invalidInstructionException();
                        (*pcVar1)();
                      }
                      local_58[local_128] = uVar12;
                      local_128 = local_128 + 1;
                    }
                  }
                }
              }
              uVar17 = local_128;
              uVar12 = uVar12 + 1;
            } while (uVar12 != uVar15);
            if (local_128 != 0) {
              if (local_58[0] < uVar11) {
                local_d8[0] = local_d8[0] + local_58[0] * 4;
              }
              else {
                if (3 < local_58[0] - uVar11) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)invalidInstructionException();
                  (*pcVar1)();
                }
                local_d8[0] = (ulonglong *)(&DAT_14c80afb0 + (local_58[0] - uVar11) * 0x20);
              }
              local_88 = 0;
              uStack_80 = uStack_80 & 0xffffffff00000000;
              local_b8 = (undefined4)*local_d8[0];
              uStack_b4 = *(undefined4 *)((longlong)local_d8[0] + 4);
              uStack_b0 = (undefined4)local_d8[0][1];
              uStack_ac = *(undefined4 *)((longlong)local_d8[0] + 0xc);
              local_a8 = (undefined4)local_d8[0][2];
              uStack_a4 = *(undefined4 *)((longlong)local_d8[0] + 0x14);
              uStack_a0 = (undefined4)local_d8[0][3];
              uStack_9c = *(undefined4 *)((longlong)local_d8[0] + 0x1c);
              local_98 = local_f8;
              uStack_90 = local_100;
              FUN_14679d619(&local_78,&local_98,&local_b8,param_2);
              if (uVar17 == 2) {
                if (local_58[1] < DAT_14c758480) {
                  puVar23 = DAT_14c758470 + local_58[1] * 4;
                }
                else {
                  if (3 < local_58[1] - DAT_14c758480) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)invalidInstructionException();
                    (*pcVar1)();
                  }
                  puVar23 = (ulonglong *)(&DAT_14c80afb0 + (local_58[1] - DAT_14c758480) * 0x20);
                }
                uStack_80 = CONCAT44(uStack_5c,uStack_60);
                local_88 = local_68;
                local_98 = local_78;
                uStack_90 = uStack_70;
                local_b8 = (undefined4)*puVar23;
                uStack_b4 = *(undefined4 *)((longlong)puVar23 + 4);
                uStack_b0 = (undefined4)puVar23[1];
                uStack_ac = *(undefined4 *)((longlong)puVar23 + 0xc);
                local_a8 = (undefined4)puVar23[2];
                uStack_a4 = *(undefined4 *)((longlong)puVar23 + 0x14);
                uStack_a0 = (undefined4)puVar23[3];
                uStack_9c = *(undefined4 *)((longlong)puVar23 + 0x1c);
                FUN_14679d619(&local_78,&local_98,&local_b8,local_120);
                if (local_58[0] < DAT_14c758480) {
                  puVar23 = DAT_14c758470 + local_58[0] * 4;
                }
                else {
                  if (3 < local_58[0] - DAT_14c758480) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)invalidInstructionException();
                    (*pcVar1)();
                  }
                  puVar23 = (ulonglong *)(&DAT_14c80afb0 + (local_58[0] - DAT_14c758480) * 0x20);
                }
                puVar23[2] = local_68;
                puVar23[3] = CONCAT44(uStack_5c,uStack_60);
                *puVar23 = local_78;
                puVar23[1] = uStack_70;
                if (local_58[1] < DAT_14c758480) {
                  puVar23 = DAT_14c758470 + local_58[1] * 4;
                }
                else {
                  if (3 < local_58[1] - DAT_14c758480) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)invalidInstructionException();
                    (*pcVar1)();
                  }
                  puVar23 = (ulonglong *)(&DAT_14c80afb0 + (local_58[1] - DAT_14c758480) * 0x20);
                }
                DAT_14c758478 = DAT_14c758478 - 1;
                if (DAT_14c758478 < DAT_14c758480) {
                  puVar9 = DAT_14c758470 + DAT_14c758478 * 4;
                }
                else {
                  if (3 < DAT_14c758478 - DAT_14c758480) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)invalidInstructionException();
                    (*pcVar1)();
                  }
                  puVar9 = (ulonglong *)(&DAT_14c80afb0 + (DAT_14c758478 - DAT_14c758480) * 0x20);
                }
                uVar11 = *puVar9;
                uVar2 = *(undefined4 *)((longlong)puVar9 + 4);
                uVar15 = puVar9[1];
                uVar3 = *(undefined4 *)((longlong)puVar9 + 0xc);
                uVar12 = puVar9[3];
                puVar23[2] = puVar9[2];
                puVar23[3] = uVar12;
                *(int *)puVar23 = (int)uVar11;
                *(undefined4 *)((longlong)puVar23 + 4) = uVar2;
                *(int *)(puVar23 + 1) = (int)uVar15;
                *(undefined4 *)((longlong)puVar23 + 0xc) = uVar3;
              }
              else {
                if (local_58[0] < DAT_14c758480) {
                  puVar23 = DAT_14c758470 + local_58[0] * 4;
                }
                else {
                  if (3 < local_58[0] - DAT_14c758480) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)invalidInstructionException();
                    (*pcVar1)();
                  }
                  puVar23 = (ulonglong *)(&DAT_14c80afb0 + (local_58[0] - DAT_14c758480) * 0x20);
                }
                puVar23[2] = local_68;
                puVar23[3] = CONCAT44(uStack_5c,uStack_60);
                *(undefined4 *)puVar23 = (undefined4)local_78;
                *(undefined4 *)((longlong)puVar23 + 4) = local_78._4_4_;
                *(undefined4 *)(puVar23 + 1) = (undefined4)uStack_70;
                *(undefined4 *)((longlong)puVar23 + 0xc) = uStack_70._4_4_;
              }
              goto LAB_14679c824;
            }
          }
          local_68 = 0;
          uStack_60 = 0;
          local_78 = local_f8;
          uStack_70 = local_100;
          FUN_14679d49d(&DAT_14c758470);
        }
      }
    }
  }
LAB_14679c824:
  if ((local_58[2] ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14679ce4c FUN_14679ce4c body=1616 status=ok
// SIG undefined FUN_14679ce4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14679ce4c(longlong *param_1,ulonglong param_2,ulonglong param_3,uint param_4,
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
  longlong *local_118;
  uint local_10c;
  longlong local_108;
  ulonglong local_100;
  ulonglong *local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
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
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  uint uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58 [3];
  
  local_f8 = param_5;
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_10c = param_4;
  local_c8 = param_3;
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
  if (1 < local_10c) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_d8 = param_2 & 0xffffffffffff;
  _DAT_14c80af90 = _DAT_14c80af90 + 1;
  local_e0 = local_c8 & 0xffffffffffff;
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    local_d0 = param_1[2];
    local_c0 = uVar16 + DAT_14c80af98;
    uVar26 = 0;
    local_100 = 0;
    do {
      DAT_14c80af98 = DAT_14c80af98 + 1;
      local_118 = param_1;
      local_f0 = param_2;
      local_e8 = uVar16;
      if (uVar26 < local_d0) {
        puVar13 = (ulonglong *)(uVar26 * 0x20 + *param_1);
      }
      else {
        if (param_1 != &DAT_14c758470) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (3 < uVar26 - local_d0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        puVar13 = (ulonglong *)(&DAT_14c80afb0 + (uVar26 - local_d0) * 0x20);
      }
      if ((((*puVar13 ^ local_c8) & 0xffffffffffff) == 0) ||
         (((puVar13[1] ^ param_2) & 0xffffffffffff) == 0)) {
        uVar8 = local_e0;
        uVar9 = *puVar13;
        uVar10 = 0;
        uVar20 = puVar13[2];
        uVar14 = puVar13[1];
        uVar19 = local_d8;
        uVar11 = (uint)puVar13[3];
        uVar22 = local_10c;
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
        local_108 = DAT_14c80af98;
        if (((uVar27 ^ uVar25) & 0xffffffffffff) == 0) {
          uVar21 = uVar21 & 0xffffffffffff;
          if (*local_f8 <= uVar21) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if ((((uVar25 & 0xffffffffffff) + uVar21) - (uVar19 & 0xffffffffffff)) % *local_f8 ==
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
              if (1 < local_100) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              local_58[local_100] = uVar26;
              local_100 = local_100 + 1;
            }
          }
        }
      }
      uVar8 = local_100;
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar16);
    DAT_14c80af98 = local_c0;
    if (2 < local_100) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (local_100 != 0) {
      if (local_58[0] < local_d0) {
        puVar15 = (undefined4 *)(local_58[0] * 0x20 + *param_1);
      }
      else {
        if (param_1 != &DAT_14c758470) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (3 < local_58[0] - local_d0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        puVar15 = (undefined4 *)(&DAT_14c80afb0 + (local_58[0] - local_d0) * 0x20);
      }
      local_88 = 0;
      uStack_80 = CONCAT44(uStack_80._4_4_,local_10c);
      local_b8 = *puVar15;
      uStack_b4 = puVar15[1];
      uStack_b0 = puVar15[2];
      uStack_ac = puVar15[3];
      local_a8 = puVar15[4];
      uStack_a4 = puVar15[5];
      uStack_a0 = puVar15[6];
      uStack_9c = puVar15[7];
      local_98 = local_d8;
      uStack_90 = local_e0;
      FUN_14679d619(&local_78,&local_98,&local_b8,local_f8);
      if (uVar8 != 2) {
        uVar16 = local_58[0] - param_1[2];
        if (local_58[0] < (ulonglong)param_1[2]) {
          puVar15 = (undefined4 *)(local_58[0] * 0x20 + *param_1);
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
          param_1 = local_118;
        }
        *(undefined8 *)(puVar15 + 4) = local_68;
        *(ulonglong *)(puVar15 + 6) = CONCAT44(uStack_5c,uStack_60);
        *puVar15 = (undefined4)local_78;
        puVar15[1] = local_78._4_4_;
        puVar15[2] = (undefined4)uStack_70;
        puVar15[3] = uStack_70._4_4_;
        goto LAB_14679cf22;
      }
      uVar16 = local_58[1] - param_1[2];
      if (local_58[1] < (ulonglong)param_1[2]) {
        puVar15 = (undefined4 *)(local_58[1] * 0x20 + *param_1);
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
        param_1 = local_118;
      }
      uStack_80 = CONCAT44(uStack_5c,uStack_60);
      local_88 = local_68;
      local_98 = local_78;
      uStack_90 = uStack_70;
      local_b8 = *puVar15;
      uStack_b4 = puVar15[1];
      uStack_b0 = puVar15[2];
      uStack_ac = puVar15[3];
      local_a8 = puVar15[4];
      uStack_a4 = puVar15[5];
      uStack_a0 = puVar15[6];
      uStack_9c = puVar15[7];
      FUN_14679d619(&local_78,&local_98,&local_b8,local_f8);
      uVar16 = local_58[0] - param_1[2];
      if (local_58[0] < (ulonglong)param_1[2]) {
        lVar18 = *param_1;
        puVar1 = (undefined8 *)(lVar18 + 0x10 + local_58[0] * 0x20);
        *puVar1 = local_68;
        puVar1[1] = CONCAT44(uStack_5c,uStack_60);
        puVar13 = (ulonglong *)(lVar18 + local_58[0] * 0x20);
        *puVar13 = local_78;
        puVar13[1] = uStack_70;
        uVar16 = param_1[2];
        if (local_58[1] < uVar16) {
          lVar18 = *param_1;
          puVar15 = (undefined4 *)(local_58[1] * 0x20 + lVar18);
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
          if (3 < local_58[1] - uVar16) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          puVar15 = (undefined4 *)(&DAT_14c80afb0 + (local_58[1] - uVar16) * 0x20);
          uVar26 = local_118[1] - 1;
          local_118[1] = uVar26;
          if (uVar16 <= uVar26) goto LAB_14679d434;
          lVar18 = *local_118;
          param_1 = local_118;
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
        *(undefined8 *)(&DAT_14c80afc0 + lVar18) = local_68;
        *(ulonglong *)(&DAT_14c80afc8 + lVar18) = CONCAT44(uStack_5c,uStack_60);
        *(ulonglong *)(&DAT_14c80afb0 + lVar18) = local_78;
        *(ulonglong *)(&DAT_14c80afb8 + lVar18) = uStack_70;
        lVar18 = DAT_14c758470;
        uVar16 = local_118[2];
        if (uVar16 <= local_58[1]) goto LAB_14679d3eb;
        puVar15 = (undefined4 *)(local_58[1] * 0x20 + DAT_14c758470);
        uVar26 = local_118[1] - 1;
        local_118[1] = uVar26;
        param_1 = local_118;
        if (uVar26 < uVar16) goto LAB_14679d260;
LAB_14679d434:
        if (3 < uVar26 - uVar16) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        puVar17 = (undefined4 *)(&DAT_14c80afb0 + (uVar26 - uVar16) * 0x20);
        param_1 = local_118;
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
  local_68 = 0;
  uStack_60 = local_10c;
  local_78 = local_d8;
  uStack_70 = local_e0;
  FUN_14679d49d(param_1);
LAB_14679cf22:
  if ((local_58[2] ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_14679c7f3(param_1,local_f8);
  return;
}



// FUNCTION 14679d49d FUN_14679d49d body=379 status=ok
// SIG undefined FUN_14679d49d(void)

void FUN_14679d49d(longlong *param_1,ulonglong *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_68 [40];
  void *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*param_2 & 0xffffffffffff) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((param_2[1] & 0xffffffffffff) <= (*param_2 & 0xffffffffffff)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_1 == &DAT_14c758470) {
    if (DAT_14c758480 + 4 <= DAT_14c758478) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar10 = DAT_14c758478 + 1;
    bVar11 = DAT_14c758480 <= DAT_14c758478;
    uVar8 = DAT_14c758478 - DAT_14c758480;
    uVar6 = DAT_14c758478;
    DAT_14c758478 = uVar10;
    if (bVar11) {
      if (3 < uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      puVar7 = (undefined4 *)(&DAT_14c80afb0 + uVar8 * 0x20);
      goto LAB_14679d59e;
    }
  }
  else {
    uVar6 = param_1[1];
    uVar10 = param_1[2];
    if (uVar10 < uVar6 + 1) {
      uVar10 = uVar10 * 2 + 2;
      lVar9 = 0;
      FUN_14678007b(local_40,uVar10 * 0x20,"pas_simple_large_free_heap/free_list",0);
      if (param_1[1] != 0) {
        memcpy(local_40[0],(void *)*param_1,param_1[1] << 5);
        lVar9 = param_1[1];
      }
      memset((void *)(lVar9 * 0x20 + (longlong)local_40[0]),0,(uVar10 - lVar9) * 0x20);
      FUN_146780222(*param_1,param_1[2] << 5,0);
      *param_1 = (longlong)local_40[0];
      param_1[2] = uVar10;
      uVar6 = param_1[1];
    }
    if (uVar10 <= uVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    param_1[1] = uVar6 + 1;
  }
  puVar7 = (undefined4 *)(uVar6 * 0x20 + *param_1);
LAB_14679d59e:
  uVar10 = *param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar6 = param_2[1];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar8 = param_2[3];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
  puVar7[4] = (int)param_2[2];
  puVar7[5] = uVar4;
  puVar7[6] = (int)uVar8;
  puVar7[7] = uVar5;
  *puVar7 = (int)uVar10;
  puVar7[1] = uVar2;
  puVar7[2] = (int)uVar6;
  puVar7[3] = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14679d619 FUN_14679d619 body=230 status=ok
// SIG undefined FUN_14679d619(void)

void FUN_14679d619(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4)

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
      goto LAB_14679d6f9;
    }
  }
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
LAB_14679d6f9:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14679d700 FUN_14679d700 body=72 status=ok
// SIG undefined FUN_14679d700(void)

void FUN_14679d700(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_38 [40];
  undefined8 *local_10;
  ulonglong local_8;
  
  local_10 = &local_res18;
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_res18 = param_3;
  local_res20 = param_4;
  (**(code **)*param_1)(param_1,param_2,local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14679d749 FUN_14679d749 body=69 status=ok
// SIG undefined FUN_14679d749(void)

ulonglong FUN_14679d749(int param_1)

{
  code *pcVar1;
  
  if (DAT_14c80aed0 == 0) {
    DAT_14c80aed0 = FUN_14678d6e8();
  }
  if ((int)POPCOUNT(DAT_14c80aed0) == 1) {
    return -DAT_14c80aed0 &
           (ulonglong)(&DAT_00001f7f + (ulonglong)(uint)(param_1 << 3) + DAT_14c80aed0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14679d78e FUN_14679d78e body=109 status=ok
// SIG undefined FUN_14679d78e(void)

void FUN_14679d78e(longlong param_1)

{
  code *pcVar1;
  
  FUN_14677399f(1);
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(longlong *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2a8) == 1
     ) {
    if (param_1 == 1) {
      return;
    }
    FUN_14679d7fb(param_1,0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14679d7fb FUN_14679d7fb body=215 status=ok
// SIG undefined FUN_14679d7fb(void)

void FUN_14679d7fb(longlong param_1,int param_2)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  code *pcVar2;
  BOOL BVar3;
  
  if (param_2 == 0) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  }
  if (param_1 != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)(*(longlong *)(param_1 + 0x1f50) + 0x18));
    FUN_14679f0b2(param_1);
    *(undefined4 *)(param_1 + 8000) = 0;
    *(undefined8 *)(param_1 + 0x1f48) = 0;
    *(undefined1 *)(param_1 + 0x1f44) = 1;
    ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)(param_1 + 0x1f50) + 0x18));
    FUN_14679e93c(param_1);
  }
  lVar1 = *(longlong *)(param_1 + 0x1f50);
  SRWLock = (PSRWLOCK)(lVar1 + 0x18);
  AcquireSRWLockExclusive(SRWLock);
  FUN_1467a059b(lVar1);
  BVar3 = CloseHandle(*(HANDLE *)(param_1 + 0x1f68));
  if (BVar3 != 0) {
    FUN_14679e5d6(param_1);
    ReleaseSRWLockExclusive(SRWLock);
    if (param_2 != 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014679d8c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



// FUNCTION 14679d8d2 FUN_14679d8d2 body=298 status=ok
// SIG undefined FUN_14679d8d2(void)

longlong FUN_14679d8d2(void)

{
  code *pcVar1;
  undefined4 uVar2;
  BOOL BVar3;
  longlong lVar4;
  undefined8 uVar5;
  HANDLE hTargetProcessHandle;
  HANDLE hSourceHandle;
  HANDLE hSourceProcessHandle;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  
  uVar2 = DAT_14c758530;
  lVar4 = FUN_14679d9fc();
  uVar5 = FUN_1467a04f3();
  *(undefined8 *)(lVar4 + 0x1f50) = uVar5;
  hTargetProcessHandle = GetCurrentProcess();
  hSourceHandle = GetCurrentThread();
  hSourceProcessHandle = GetCurrentProcess();
  BVar3 = DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,
                          (LPHANDLE)(lVar4 + 0x1f68),0,0,2);
  if (BVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *(undefined4 *)(lVar4 + 0x1f74) = uVar2;
  FUN_14678bc48();
  if (DAT_14c80b030 != (uint *)0x0) {
    lVar6 = DAT_14c80ad08;
    if ((ulonglong)*DAT_14c80b030 < 8) {
      lVar6 = 0;
    }
    lVar6 = lVar6 + (ulonglong)*DAT_14c80b030;
    if (lVar6 != 0) {
      lVar8 = 0;
      puVar7 = DAT_14c80b030;
      do {
        FUN_1467a0128(lVar6,lVar4);
        lVar6 = 0;
        if (7 < (ulonglong)puVar7[lVar8 + 1]) {
          lVar6 = DAT_14c80ad08;
        }
        lVar6 = lVar6 + (ulonglong)puVar7[lVar8 + 1];
        if (lVar6 == 0) {
          puVar7 = *(uint **)(puVar7 + 0x102);
          if (puVar7 == (uint *)0x0) break;
          lVar6 = DAT_14c80ad08;
          if ((ulonglong)*puVar7 < 8) {
            lVar6 = 0;
          }
          lVar6 = lVar6 + (ulonglong)*puVar7;
          lVar8 = 0;
        }
        else {
          lVar8 = lVar8 + 1;
        }
      } while (lVar6 != 0);
    }
  }
  *(longlong *)(*(longlong *)(lVar4 + 0x1f50) + 0x20) = lVar4;
  FUN_14679db73(lVar4);
  return lVar4;
}



// FUNCTION 14679d9fc FUN_14679d9fc body=374 status=ok
// SIG undefined FUN_14679d9fc(void)

void * FUN_14679d9fc(uint param_1)

{
  uint *puVar1;
  code *pcVar2;
  size_t sVar3;
  void *_Dst;
  void *_Dst_00;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [40];
  longlong local_30 [3];
  
  local_30[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 < 8) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  sVar3 = FUN_14679d749();
  if (DAT_14c80aed0 == 0) {
    DAT_14c80aed0 = FUN_14678d6e8();
  }
  if ((int)POPCOUNT(DAT_14c80aed0) != 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (DAT_14c80aed0 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_30[1] = 0;
  local_30[0] = DAT_14c80aed0;
  _Dst = (void *)FUN_14678b7e4(sVar3,local_30,"pas_thread_local_cache");
  memset(_Dst,0,sVar3);
  uVar6 = (ulonglong)(param_1 + 0x1f >> 3 & 0xfffffffc);
  _Dst_00 = (void *)FUN_14678b83a(uVar6);
  *(void **)((longlong)_Dst + 0x1f58) = _Dst_00;
  memset(_Dst_00,0,uVar6);
  lVar4 = FUN_14679f839(param_1);
  if (lVar4 != 0) {
    uVar5 = FUN_14679f839(param_1);
    uVar5 = FUN_14678b83a(uVar5);
    *(undefined8 *)((longlong)_Dst + 0x1f60) = uVar5;
    sVar3 = FUN_14679f839(param_1);
    memset(*(void **)((longlong)_Dst + 0x1f60),0,sVar3);
    uVar6 = FUN_14679d749(param_1);
    if (DAT_14c80aed8 == 0) {
      DAT_14c80aed8 = FUN_14678d752();
    }
    uVar6 = uVar6 >> ((byte)DAT_14c80aed8 & 0x3f);
    while (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      puVar1 = (uint *)(*(longlong *)((longlong)_Dst + 0x1f60) + (uVar6 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)uVar6 & 0x1f);
    }
    *(uint *)((longlong)_Dst + 0x1f78) = param_1;
    if ((local_30[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return _Dst;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



// FUNCTION 14679db73 FUN_14679db73 body=133 status=ok
// SIG undefined FUN_14679db73(void)

void FUN_14679db73(undefined8 param_1)

{
  longlong lVar1;
  code *pcVar2;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(longlong *)(lVar1 + 0x2a8) != 1) {
LAB_14679dbba:
    FUN_14677399f(param_1);
    return;
  }
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
    if (1 < *(ulonglong *)(lVar1 + 0x2a8)) goto LAB_14679dbba;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



// FUNCTION 14679dbf8 FUN_14679dbf8 body=140 status=ok
// SIG undefined FUN_14679dbf8(void)

undefined8 FUN_14679dbf8(undefined8 param_1,int param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  }
  FUN_14677399e();
  FUN_146788169(param_1);
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(ulonglong *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2a8) < 2)
  {
    uVar2 = FUN_14679d8d2();
    if (param_2 == 0) {
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    }
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14679dc84 FUN_14679dc84 body=745 status=ok
// SIG undefined FUN_14679dc84(void)

void FUN_14679dc84(undefined1 *param_1,longlong param_2,uint param_3,int param_4)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  
  if (param_3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar1 = *(uint *)(param_2 + 0x1f74);
  if (param_3 < uVar1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (param_3 == 0xffffffff) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  FUN_14679df6d(param_2,param_4);
  if (param_4 == 0) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  }
  AcquireSRWLockExclusive((PSRWLOCK)(*(longlong *)(param_2 + 0x1f50) + 0x18));
  uVar3 = DAT_14c758530;
  if (DAT_14c758530 <= param_3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar5 = param_2;
  if (*(uint *)(param_2 + 0x1f78) < DAT_14c758530) {
    uVar4 = *(uint *)(param_2 + 0x1f78) * 2;
    if (uVar4 <= DAT_14c758530) {
      uVar4 = DAT_14c758530;
    }
    lVar5 = FUN_14679d9fc(uVar4);
    *(undefined8 *)(lVar5 + 0x1f50) = *(undefined8 *)(param_2 + 0x1f50);
    *(undefined8 *)(lVar5 + 0x1f68) = *(undefined8 *)(param_2 + 0x1f68);
    *(undefined4 *)(lVar5 + 0x1f74) = *(undefined4 *)(param_2 + 0x1f74);
    FUN_14678bc48(lVar5 + 0x1f80);
    if (DAT_14c80b030 != (uint *)0x0) {
      lVar8 = DAT_14c80ad08;
      if ((ulonglong)*DAT_14c80b030 < 8) {
        lVar8 = 0;
      }
      lVar8 = lVar8 + (ulonglong)*DAT_14c80b030;
      if (lVar8 != 0) {
        lVar6 = 0;
        puVar7 = DAT_14c80b030;
        do {
          uVar4 = FUN_1467a00a4(lVar8);
          if (uVar1 <= uVar4) break;
          FUN_1467a0261(lVar8,lVar5,param_2);
          lVar8 = 0;
          if (7 < (ulonglong)puVar7[lVar6 + 1]) {
            lVar8 = DAT_14c80ad08;
          }
          lVar8 = lVar8 + (ulonglong)puVar7[lVar6 + 1];
          if (lVar8 == 0) {
            puVar7 = *(uint **)(puVar7 + 0x102);
            if (puVar7 == (uint *)0x0) break;
            lVar8 = DAT_14c80ad08;
            if ((ulonglong)*puVar7 < 8) {
              lVar8 = 0;
            }
            lVar8 = lVar8 + (ulonglong)*puVar7;
            lVar6 = 0;
          }
          else {
            lVar6 = lVar6 + 1;
          }
        } while (lVar8 != 0);
      }
    }
    memcpy(*(void **)(lVar5 + 0x1f58),*(void **)(param_2 + 0x1f58),
           (ulonglong)(*(int *)(param_2 + 0x1f74) + 0x1fU >> 3 & 0xfffffffc));
    *(longlong *)(*(longlong *)(lVar5 + 0x1f50) + 0x20) = lVar5;
  }
  if (DAT_14c80b030 != (uint *)0x0) {
    lVar8 = DAT_14c80ad08;
    if ((ulonglong)*DAT_14c80b030 < 8) {
      lVar8 = 0;
    }
    lVar8 = lVar8 + (ulonglong)*DAT_14c80b030;
    if (lVar8 != 0) {
      lVar6 = 0;
      puVar7 = DAT_14c80b030;
      do {
        uVar4 = FUN_1467a00a4(lVar8);
        if (uVar1 <= uVar4) {
          if (uVar3 <= uVar4) break;
          FUN_1467a0128(lVar8,lVar5);
        }
        lVar8 = 0;
        if (7 < (ulonglong)puVar7[lVar6 + 1]) {
          lVar8 = DAT_14c80ad08;
        }
        lVar8 = lVar8 + (ulonglong)puVar7[lVar6 + 1];
        if (lVar8 == 0) {
          puVar7 = *(uint **)(puVar7 + 0x102);
          if (puVar7 == (uint *)0x0) break;
          lVar8 = DAT_14c80ad08;
          if ((ulonglong)*puVar7 < 8) {
            lVar8 = 0;
          }
          lVar8 = lVar8 + (ulonglong)*puVar7;
          lVar6 = 0;
        }
        else {
          lVar6 = lVar6 + 1;
        }
      } while (lVar8 != 0);
    }
  }
  *(uint *)(lVar5 + 0x1f74) = uVar3;
  if (lVar5 == param_2) {
    ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)(param_2 + 0x1f50) + 0x18));
    if (param_4 == 0) {
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    }
  }
  else {
    FUN_14679e5d6(param_2);
    ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)(param_2 + 0x1f50) + 0x18));
    if (param_4 == 0) {
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    }
    FUN_14679db73(lVar5);
  }
  if (*(uint *)(lVar5 + 0x1f74) <= param_3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  *param_1 = 1;
  *(ulonglong *)(param_1 + 8) = lVar5 + (ulonglong)param_3 * 8 + 0x1f80;
  return;
}



// FUNCTION 14679df6d FUN_14679df6d body=1641 status=ok
// SIG undefined FUN_14679df6d(void)

void FUN_14679df6d(longlong param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  PSRWLOCK SRWLock;
  undefined8 uVar8;
  char cVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  char *pcVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  
  if (param_1 == 0) {
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(*(longlong *)(param_1 + 0x1f50) + 0x18));
  if ((ulonglong)*(uint *)(param_1 + 8000) != 0) {
    SRWLock = (PSRWLOCK)0x0;
    uVar15 = (ulonglong)*(uint *)(param_1 + 8000);
LAB_14679dfd3:
    uVar17 = uVar15 - 1;
    uVar10 = *(ulonglong *)(param_1 + -8 + uVar15 * 8);
    uVar14 = uVar17;
    switch((uint)uVar10 & 0x3f) {
    case 0:
      do {
        if (0x3f < uVar10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (uVar15 == 1) goto LAB_14679e4c4;
        uVar10 = *(ulonglong *)(param_1 + -0x10 + uVar15 * 8);
        uVar15 = uVar15 - 1;
        uVar14 = uVar15;
      } while ((uVar10 & 0x3f) == 0);
      goto switchD_14679dffa_default;
    case 1:
      do {
        uVar8 = 0;
LAB_14679e5c1:
        uVar8 = FUN_146795881(uVar8);
        pcVar13 = "exclusive";
LAB_14679e5b7:
        FUN_1467a2694("Deallocation logging is disabled for %s/%s, but here we are.\n",uVar8,pcVar13
                     );
      } while( true );
    case 2:
      uVar8 = 1;
      break;
    case 3:
      uVar8 = 1;
      goto LAB_14679e5c1;
    case 4:
      uVar8 = 2;
      break;
    case 5:
      do {
        uVar14 = uVar17;
        uVar15 = uVar10 >> 6 & 0x3ffffffffffc000;
        if (SRWLock != *(PSRWLOCK *)(uVar15 + 8)) {
          SRWLock = (PSRWLOCK)FUN_146794d20(uVar15,SRWLock);
        }
        bVar2 = (byte)((uint)uVar10 >> 10) & 0x1f;
        puVar1 = (uint *)(uVar15 + 0x2c + (ulonglong)((uint)(uVar10 >> 0xd) & 0x7c));
        *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        if (*puVar1 == 0) {
          if ((*(ulonglong *)(uVar15 + 0x20) & 7) != 0) {
            uVar17 = *(ulonglong *)(uVar15 + 0x20) & 0xfffffffffffffff8;
            if (*(char *)(uVar15 + 1) == '\x01') {
              *(undefined1 *)(uVar15 + 2) = 1;
            }
            else if (*(uint *)(uVar15 + 0x28) < *(uint *)(param_1 + 0x1f74)) {
              lVar6 = param_1 + 0x1f80 + (ulonglong)*(uint *)(uVar15 + 0x28) * 8;
              if (*(char *)(lVar6 + 7) != '\x01') {
                if (*(char *)(lVar6 + 7) != '\0') goto LAB_14679e17b;
                FUN_14678c309(lVar6,1,4);
              }
              *(undefined1 *)(uVar15 + 1) = 1;
              bVar2 = *(byte *)(lVar6 + 6);
              bVar4 = bVar2 + 1;
              if (*(byte *)(lVar6 + 4) <= bVar4) {
                bVar4 = 0;
              }
              if (bVar4 == *(byte *)(lVar6 + 5)) {
                *(undefined1 *)(lVar6 + 7) = 2;
              }
              if (uVar17 == 0) {
                uVar10 = 0;
              }
              else {
                uVar10 = uVar17 - DAT_14c80ad08;
                if (DAT_14c758498 <= uVar10) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)invalidInstructionException();
                  (*pcVar3)();
                }
                if ((uVar10 & 7) != 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)invalidInstructionException();
                  (*pcVar3)();
                }
                if (uVar10 < 8) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)invalidInstructionException();
                  (*pcVar3)();
                }
                uVar10 = uVar10 >> 3;
              }
              lVar7 = -3;
              do {
                *(char *)((ulonglong)bVar2 * 3 + lVar6 + 0xb + lVar7) = (char)uVar10;
                uVar10 = uVar10 >> 8;
                lVar7 = lVar7 + 1;
              } while (lVar7 != 0);
              *(byte *)(lVar6 + 6) = bVar4;
            }
            else {
LAB_14679e17b:
              FUN_146791662((ulonglong)
                            ((uint)*(byte *)(uVar17 + 10) * 0x80000 +
                            (uint)*(ushort *)(uVar17 + 8) * 8) + DAT_14c80ad08,
                            *(undefined4 *)(uVar17 + 0xc));
            }
            *(ulonglong *)(uVar15 + 0x20) = uVar17;
          }
          lVar6 = *(longlong *)(uVar15 + 0x18) + -1;
          if (lVar6 == 0) {
            FUN_146795211(uVar15,0);
          }
          else {
            *(longlong *)(uVar15 + 0x18) = lVar6;
          }
        }
        *(undefined8 *)(param_1 + uVar14 * 8) = 0;
        if (uVar14 == 0) goto LAB_14679e4c4;
        uVar10 = *(ulonglong *)(param_1 + (uVar14 - 1) * 8);
        uVar17 = uVar14 - 1;
      } while (((uint)uVar10 & 0x3f) == 5);
      goto switchD_14679dffa_default;
    case 6:
      uVar8 = 3;
      break;
    case 7:
      do {
        uVar14 = uVar17;
        if (DAT_14c758428 == 0) {
LAB_14679e244:
          lVar6 = 0;
        }
        else {
          uVar11 = (uint)(uVar10 >> 0x1b) & 0xfffffff ^ (uint)(uVar10 >> 0x17);
          uVar11 = uVar11 * 0x20 + (uVar11 ^ 0xdeadbeef);
          uVar11 = uVar11 >> 0xb ^ uVar11;
          uVar17 = (ulonglong)(*(uint *)(DAT_14c758428 + 0xc) & uVar11);
          uVar15 = *(ulonglong *)(DAT_14c758428 + 0x20 + uVar17 * 0x10);
          while (uVar15 != (uVar10 >> 6 & 0x3fffffffffe0000)) {
            uVar11 = uVar11 + 1;
            if (uVar15 == 0xffffffffffffffff) goto LAB_14679e244;
            uVar17 = (ulonglong)(uVar11 & *(uint *)(DAT_14c758428 + 0xc));
            uVar15 = *(ulonglong *)(DAT_14c758428 + 0x20 + uVar17 * 0x10);
          }
          lVar6 = *(longlong *)(DAT_14c758428 + 0x28 + uVar17 * 0x10);
        }
        if (SRWLock != *(PSRWLOCK *)(lVar6 + 8)) {
          SRWLock = (PSRWLOCK)FUN_146794d20(lVar6,SRWLock);
        }
        uVar15 = (ulonglong)((uint)(uVar10 >> 0x12) & 0x1c);
        uVar11 = *(uint *)(lVar6 + 0x2c + uVar15) & ~(1 << ((uint)uVar10 >> 0xf & 0x1f));
        *(uint *)(lVar6 + 0x2c + uVar15) = uVar11;
        uVar15 = *(ulonglong *)(lVar6 + 0x20);
        if ((uVar15 & 7) != 0) {
          uVar15 = uVar15 & 0xfffffffffffffff8;
          if (*(char *)(lVar6 + 1) == '\x01') {
            *(undefined1 *)(lVar6 + 2) = 1;
          }
          else if (*(uint *)(lVar6 + 0x28) < *(uint *)(param_1 + 0x1f74)) {
            lVar7 = param_1 + 0x1f80 + (ulonglong)*(uint *)(lVar6 + 0x28) * 8;
            if (*(char *)(lVar7 + 7) != '\x01') {
              if (*(char *)(lVar7 + 7) != '\0') goto LAB_14679e47f;
              FUN_14678c309(lVar7,1,4);
            }
            *(undefined1 *)(lVar6 + 1) = 1;
            bVar2 = *(byte *)(lVar7 + 6);
            bVar4 = bVar2 + 1;
            if (*(byte *)(lVar7 + 4) <= bVar4) {
              bVar4 = 0;
            }
            if (bVar4 == *(byte *)(lVar7 + 5)) {
              *(undefined1 *)(lVar7 + 7) = 2;
            }
            if (uVar15 == 0) {
              uVar17 = 0;
            }
            else {
              uVar17 = uVar15 - DAT_14c80ad08;
              if (DAT_14c758498 <= uVar17) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              if ((uVar17 & 7) != 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              if (uVar17 < 8) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              uVar17 = uVar17 >> 3;
            }
            lVar12 = -3;
            do {
              *(char *)((ulonglong)bVar2 * 3 + lVar7 + 0xb + lVar12) = (char)uVar17;
              uVar17 = uVar17 >> 8;
              lVar12 = lVar12 + 1;
            } while (lVar12 != 0);
            *(byte *)(lVar7 + 6) = bVar4;
          }
          else {
LAB_14679e47f:
            FUN_146791662((ulonglong)
                          ((uint)*(byte *)(uVar15 + 10) * 0x80000 +
                          (uint)*(ushort *)(uVar15 + 8) * 8) + DAT_14c80ad08,
                          *(undefined4 *)(uVar15 + 0xc));
          }
          *(ulonglong *)(lVar6 + 0x20) = uVar15;
        }
        uVar16 = (uint)(uVar10 >> 6) & 0x1ffff;
        if ((uVar15 & 6) == 0) {
          uVar5 = *(uint *)(lVar6 + 4);
        }
        else {
          if (((uint)uVar15 & 7) != 3) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar15 = (ulonglong)
                   *(uint *)((uVar15 & 0xfffffffffffffff8) + 0x14 + (ulonglong)(uVar16 >> 0xc) * 4);
          lVar7 = DAT_14c80ad08 + uVar15 * 8;
          if (uVar15 == 0) {
            lVar7 = 0;
          }
          uVar5 = *(uint *)((ulonglong)
                            ((uint)*(byte *)(lVar7 + 0xd) * 0x80000 +
                            (uint)*(ushort *)(lVar7 + 0xb) * 8) + 0x20 + DAT_14c80ad08) & 0x7ffffff;
        }
        if (uVar5 != 0) {
          if (0x20000 < (ulonglong)uVar16 + (ulonglong)uVar5) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar15 = ((ulonglong)uVar5 + (ulonglong)uVar16) - 1 >> 0xc;
          uVar17 = (ulonglong)(uVar16 >> 0xc);
          if (uVar17 <= uVar15) {
            bVar2 = 0;
            do {
              bVar4 = bVar2;
              cVar9 = *(char *)(lVar6 + 0x4c + uVar17);
              if (cVar9 == '\0') {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              if (cVar9 == -1) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              cVar9 = cVar9 + -1;
              *(char *)(lVar6 + 0x4c + uVar17) = cVar9;
              uVar17 = uVar17 + 1;
              bVar2 = bVar4 | cVar9 == '\0';
            } while (uVar15 + 1 != uVar17);
            if ((bool)(bVar4 | cVar9 == '\0')) {
              FUN_146795211(lVar6,1);
            }
          }
        }
        if (uVar11 == 0) {
          lVar7 = *(longlong *)(lVar6 + 0x18) + -1;
          if (lVar7 == 0) {
            FUN_146795211(lVar6,0);
          }
          else {
            *(longlong *)(lVar6 + 0x18) = lVar7;
          }
        }
        *(undefined8 *)(param_1 + uVar14 * 8) = 0;
        if (uVar14 == 0) goto LAB_14679e4c4;
        uVar10 = *(ulonglong *)(param_1 + (uVar14 - 1) * 8);
        uVar17 = uVar14 - 1;
      } while (((uint)uVar10 & 0x3f) == 7);
      goto switchD_14679dffa_default;
    case 8:
      uVar8 = 4;
      break;
    case 9:
      uVar8 = 4;
      goto LAB_14679e5c1;
    case 10:
      uVar8 = 5;
      break;
    case 0xb:
      uVar8 = 5;
      goto LAB_14679e5c1;
    default:
      goto switchD_14679dffa_default;
    }
    uVar8 = FUN_146795881(uVar8);
    pcVar13 = "shared";
    goto LAB_14679e5b7;
  }
LAB_14679e4cd:
  *(undefined4 *)(param_1 + 8000) = 0;
  *(undefined8 *)(param_1 + 0x1f48) = 0;
  *(undefined1 *)(param_1 + 0x1f44) = 1;
  ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)(param_1 + 0x1f50) + 0x18));
  if (param_2 != 0) {
    return;
  }
  FUN_146790ecd();
  return;
switchD_14679dffa_default:
  uVar15 = uVar14;
  if (uVar14 == 0) goto LAB_14679e4c4;
  goto LAB_14679dfd3;
LAB_14679e4c4:
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  goto LAB_14679e4cd;
}



// FUNCTION 14679e5d6 FUN_14679e5d6 body=110 status=ok
// SIG undefined FUN_14679e5d6(void)

void FUN_14679e5d6(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_14678b899(*(undefined8 *)(param_1 + 0x1f58),
                *(int *)(param_1 + 0x1f78) + 0x1fU >> 3 & 0xfffffffc);
  uVar1 = FUN_14679f839(*(undefined4 *)(param_1 + 0x1f78));
  FUN_14678b899(*(undefined8 *)(param_1 + 0x1f60),uVar1);
  uVar1 = FUN_14679d749(*(undefined4 *)(param_1 + 0x1f78));
  FUN_14678db44(param_1,uVar1,1);
  FUN_14678b899(param_1,uVar1);
  return;
}



// FUNCTION 14679e644 FUN_14679e644 body=163 status=ok
// SIG undefined FUN_14679e644(void)

undefined8 FUN_14679e644(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (DAT_14c80aed8 == 0) {
    DAT_14c80aed8 = FUN_14678d752();
  }
  uVar4 = (param_2 & 0xffffffff) * 8 + 0x1f80 >> ((byte)DAT_14c80aed8 & 0x3f);
  uVar3 = (ulonglong)(&DAT_00001f7f + (param_3 & 0xffffffff) * 8) >> ((byte)DAT_14c80aed8 & 0x3f);
  uVar2 = CONCAT71((int7)((param_3 & 0xffffffff) >> 8),1);
  if (uVar4 <= uVar3) {
    lVar1 = *(longlong *)(param_1 + 0x1f60);
    if ((*(uint *)(lVar1 + (uVar4 >> 5) * 4) >> ((uint)uVar4 & 0x1f) & 1) == 0) {
      uVar2 = 0;
    }
    else {
      do {
        uVar5 = uVar4;
        uVar4 = uVar5 + 1;
        if (uVar4 - uVar3 == 1) break;
      } while ((*(uint *)(lVar1 + (uVar4 >> 5) * 4) >> ((uint)uVar4 & 0x1f) & 1) != 0);
      uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),uVar3 <= uVar5);
    }
  }
  return uVar2;
}



// FUNCTION 14679e6e7 FUN_14679e6e7 body=273 status=ok
// SIG undefined FUN_14679e6e7(void)

ulonglong * FUN_14679e6e7(ulonglong *param_1,longlong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar5 = (param_4 & 0xffffffff) * 8;
  uVar9 = (param_3 & 0xffffffff) * 8;
  if (uVar5 < uVar9) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar9 = uVar9 + 0x1f80;
  if (DAT_14c80aed8 == 0) {
    DAT_14c80aed8 = FUN_14678d752();
    uVar10 = (ulonglong)(&DAT_00001f7f + uVar5) >> ((byte)DAT_14c80aed8 & 0x3f);
    if (DAT_14c80aed8 == 0) {
      DAT_14c80aed8 = FUN_14678d752();
      bVar3 = 0;
      goto LAB_14679e739;
    }
  }
  else {
    uVar10 = (ulonglong)(&DAT_00001f7f + uVar5) >> ((byte)DAT_14c80aed8 & 0x3f);
  }
  bVar3 = (byte)DAT_14c80aed8;
LAB_14679e739:
  uVar5 = uVar5 + 0x1f80;
  uVar8 = uVar9 >> (bVar3 & 0x3f);
  uVar4 = uVar9;
  uVar7 = uVar5;
  if (uVar8 <= uVar10) {
    do {
      uVar1 = uVar8 + 1;
      if ((*(uint *)(*(longlong *)(param_2 + 0x1f60) + (uVar8 >> 5) * 4) >> ((uint)uVar8 & 0x1f) & 1
          ) == 0) {
        uVar6 = uVar1 << ((byte)DAT_14c80aed8 & 0x3f);
        if (uVar5 < uVar6) {
          uVar6 = uVar5;
        }
        if (uVar4 <= uVar6) {
          uVar4 = uVar6;
        }
        uVar8 = uVar8 << ((byte)DAT_14c80aed8 & 0x3f);
        if (uVar8 < uVar9) {
          uVar8 = uVar9;
        }
        if (uVar8 <= uVar7) {
          uVar7 = uVar8;
        }
      }
      uVar8 = uVar1;
    } while (uVar10 + 1 != uVar1);
  }
  *param_1 = uVar4;
  param_1[1] = uVar7;
  if (uVar4 == uVar7) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  return param_1;
}



// FUNCTION 14679e7f8 FUN_14679e7f8 body=260 status=ok
// SIG undefined FUN_14679e7f8(void)

void FUN_14679e7f8(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  uint *puVar1;
  code *pcVar2;
  longlong lVar3;
  BOOLEAN BVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (DAT_14c80aed8 == 0) {
    DAT_14c80aed8 = FUN_14678d752();
  }
  uVar5 = (param_2 & 0xffffffff) * 8 + 0x1f80 >> ((byte)DAT_14c80aed8 & 0x3f);
  uVar6 = (ulonglong)(&DAT_00001f7f + (param_3 & 0xffffffff) * 8) >> ((byte)DAT_14c80aed8 & 0x3f);
  if (uVar5 <= uVar6) {
    do {
      if ((*(uint *)(*(longlong *)(param_1 + 0x1f60) + (uVar5 >> 5) * 4) >> ((uint)uVar5 & 0x1f) & 1
          ) == 0) {
        BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)(*(longlong *)(param_1 + 0x1f50) + 0x18));
        if (BVar4 != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (DAT_14c80aed0 == 0) {
          DAT_14c80aed0 = FUN_14678d6e8();
        }
        lVar3 = DAT_14c80aed0;
        if (DAT_14c80aed8 == 0) {
          DAT_14c80aed8 = FUN_14678d752();
        }
        FUN_14678db44((uVar5 << ((byte)DAT_14c80aed8 & 0x3f)) + param_1,lVar3,1);
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x1f60) + (uVar5 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)uVar5 & 0x1f);
      }
      uVar5 = uVar5 + 1;
    } while (uVar6 + 1 != uVar5);
  }
  return;
}



// FUNCTION 14679e8fc FUN_14679e8fc body=64 status=ok
// SIG undefined FUN_14679e8fc(void)

void FUN_14679e8fc(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  
  uVar1 = param_1 + 0x1f80;
  if (param_2 < uVar1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (uVar1 + (ulonglong)*(uint *)(param_1 + 0x1f74) * 8 <= param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  param_2 = param_2 - uVar1;
  if ((param_2 & 7) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (param_2 >> 3 < (ulonglong)*(uint *)(param_1 + 0x1f74)) {
    if (param_2 >> 0x23 == 0) {
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



// FUNCTION 14679e93c FUN_14679e93c body=228 status=ok
// SIG undefined FUN_14679e93c(void)

void FUN_14679e93c(longlong param_1)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  AcquireSRWLockExclusive((PSRWLOCK)(*(longlong *)(param_1 + 0x1f50) + 0x18));
  if (DAT_14c80b030 != (uint *)0x0) {
    lVar4 = DAT_14c80ad08;
    if ((ulonglong)*DAT_14c80b030 < 8) {
      lVar4 = 0;
    }
    lVar4 = lVar4 + (ulonglong)*DAT_14c80b030;
    if (lVar4 != 0) {
      lVar5 = 0;
      puVar3 = DAT_14c80b030;
      do {
        uVar2 = FUN_1467a00a4(lVar4);
        if (*(uint *)(param_1 + 0x1f74) <= uVar2) break;
        cVar1 = FUN_1467a034a(lVar4,param_1);
        if (cVar1 != '\0') {
          FUN_1467a03a3(lVar4,param_1,1);
        }
        lVar4 = 0;
        if (7 < (ulonglong)puVar3[lVar5 + 1]) {
          lVar4 = DAT_14c80ad08;
        }
        lVar4 = lVar4 + (ulonglong)puVar3[lVar5 + 1];
        if (lVar4 == 0) {
          puVar3 = *(uint **)(puVar3 + 0x102);
          if (puVar3 == (uint *)0x0) break;
          lVar4 = DAT_14c80ad08;
          if ((ulonglong)*puVar3 < 8) {
            lVar4 = 0;
          }
          lVar4 = lVar4 + (ulonglong)*puVar3;
          lVar5 = 0;
        }
        else {
          lVar5 = lVar5 + 1;
        }
      } while (lVar4 != 0);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)(param_1 + 0x1f50) + 0x18));
  return;
}



// FUNCTION 14679ea20 FUN_14679ea20 body=248 status=ok
// SIG undefined FUN_14679ea20(void)

void FUN_14679ea20(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  byte bVar5;
  code *pcVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if (*(char *)(param_1 + 0x1f70) != '\x01') {
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(*(longlong *)(param_1 + 0x1f50) + 0x18));
  uVar7 = *(int *)(param_1 + 0x1f74) + 0x1f;
  if (0x1f < uVar7) {
    lVar3 = *(longlong *)(param_1 + 0x1f58);
    uVar11 = 0;
    do {
      uVar10 = *(uint *)(lVar3 + uVar11 * 4);
      if (uVar10 != 0) {
        do {
          uVar4 = 0;
          if (uVar10 != 0) {
            for (; (uVar10 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
            }
          }
          bVar5 = (byte)uVar4 & 0x1f;
          uVar9 = -2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5;
          puVar1 = (uint *)(lVar3 + uVar11 * 4);
          *puVar1 = *puVar1 & uVar9;
          uVar8 = uVar11 << 5 | (ulonglong)uVar4;
          if (*(uint *)(param_1 + 0x1f74) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          lVar2 = param_1 + 0x1f80 + uVar8 * 8;
          if ((lVar2 != param_2) && (*(char *)(lVar2 + 1) != '\0')) {
            FUN_14678c4f8(lVar2,1);
          }
          uVar10 = uVar10 & uVar9;
        } while (uVar10 != 0);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar7 >> 5);
  }
  *(undefined1 *)(param_1 + 0x1f70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014679ea85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)(param_1 + 0x1f50) + 0x18));
  return;
}



// FUNCTION 14679eb18 FUN_14679eb18 body=1433 status=ok
// SIG undefined FUN_14679eb18(void)

ulonglong FUN_14679eb18(int param_1,int param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined1 *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  DWORD DVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  longlong lVar11;
  code *pcVar12;
  PSRWLOCK SRWLock;
  uint *puVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  uint *local_d0;
  longlong local_c8;
  longlong local_b8;
  int local_ac;
  int local_a8;
  int local_a4;
  longlong local_a0;
  longlong local_98;
  undefined1 *local_90;
  PSRWLOCK local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  PSRWLOCK local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined2 local_4c;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_a8 = param_1;
  local_a4 = param_3;
  if (DAT_14c80aed0 == 0) {
    DAT_14c80aed0 = FUN_14678d6e8();
  }
  lVar1 = DAT_14c80aed0;
  local_98 = DAT_14c80aed8;
  if (DAT_14c80aed8 == 0) {
    DAT_14c80aed8 = FUN_14678d752();
  }
  pcVar12 = AcquireSRWLockExclusive_exref;
  local_49 = 0;
  local_98 = DAT_14c80aed8;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80b088);
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (DAT_14c80b080 == 0) {
    uVar9 = 0;
  }
  else {
    local_78 = POPCOUNT(lVar1);
    SRWLock = (PSRWLOCK)-lVar1;
    lVar19 = DAT_14c80b080;
    local_ac = param_2;
    local_88 = SRWLock;
    local_80 = lVar1;
    do {
      lVar1 = *(longlong *)(lVar19 + 0x20);
      if (lVar1 != 0) {
        SRWLock = (PSRWLOCK)(lVar19 + 0x18);
        (*pcVar12)(SRWLock);
        if (param_2 == 1) {
          if (*(char *)(lVar1 + 0x1f44) != '\x01') goto LAB_14679ee6d;
          *(undefined1 *)(lVar1 + 0x1f44) = 0;
          local_49 = *(int *)(lVar1 + 8000) != 0;
        }
        else if (param_2 == 2) {
LAB_14679ee6d:
          FUN_14679f0b2(lVar1);
        }
        if (local_a8 != 0) {
          local_4c = 0;
          puVar15 = (undefined1 *)0x1fc0;
          local_68 = SRWLock;
          if (DAT_14c80b030 == (uint *)0x0) {
            puVar16 = (uint *)0x0;
            lVar18 = 0;
            puVar13 = (uint *)0x0;
            lVar17 = 0;
          }
          else {
            lVar11 = 0;
            if (7 < (ulonglong)*DAT_14c80b030) {
              lVar11 = DAT_14c80ad08;
            }
            lVar11 = lVar11 + (ulonglong)*DAT_14c80b030;
            puVar13 = DAT_14c80b030;
            if (lVar11 == 0) {
              puVar16 = (uint *)0x0;
              lVar18 = 0;
              lVar17 = 0;
              pcVar12 = AcquireSRWLockExclusive_exref;
              param_2 = local_ac;
            }
            else {
              local_a0 = lVar1 + 0x1f80;
              puVar16 = (uint *)0x0;
              lVar18 = 0;
              lVar17 = 0;
              do {
                local_b8 = lVar17;
                uVar5 = FUN_1467a00a4(lVar11);
                lVar17 = local_b8;
                if (*(uint *)(lVar1 + 0x1f74) <= uVar5) break;
                if (local_a4 == 1) {
                  local_70 = local_a0 + (ulonglong)uVar5 * 8;
                  iVar6 = FUN_1467a0037(lVar11);
                  FUN_14679e6e7(&local_60,lVar1,uVar5,uVar5 + iVar6);
                  puVar3 = local_58;
                  lVar17 = local_70;
                  if (local_60 < puVar15) {
                    /* WARNING: Does not return */
                    pcVar12 = (code *)invalidInstructionException();
                    (*pcVar12)();
                  }
                  if (local_58 < puVar15) {
                    /* WARNING: Does not return */
                    pcVar12 = (code *)invalidInstructionException();
                    (*pcVar12)();
                  }
                  puVar8 = puVar3;
                  puVar10 = local_60;
                  if (local_60 < local_58) {
                    local_90 = local_60;
                    local_d0 = (uint *)&local_4c;
                    local_d8 = &local_49;
                    FUN_14679f4d7(lVar1,local_a8,uVar5,local_70);
                    cVar4 = FUN_14678c2eb(lVar17);
                    puVar8 = local_90;
                    puVar10 = puVar3;
                    if ((cVar4 != '\0') &&
                       (puVar8 = puVar3, puVar10 = local_90, puVar16 == (uint *)0x0)) {
                      puVar16 = puVar13;
                      lVar18 = local_b8;
                    }
                  }
                  lVar17 = local_b8;
                  if (puVar8 < puVar10) {
                    local_c8 = local_b8;
                    local_d8 = puVar8;
                    local_d0 = puVar13;
                    FUN_14679f5e5(lVar1,puVar16,lVar18);
                    lVar18 = 0;
                    puVar16 = (uint *)0x0;
                    puVar15 = puVar10;
                  }
                }
                else {
                  local_d0 = (uint *)&local_4c;
                  local_d8 = &local_49;
                  FUN_14679f4d7(lVar1,local_a8,uVar5);
                  lVar17 = local_b8;
                }
                lVar11 = 0;
                if (7 < (ulonglong)puVar13[lVar17 + 1]) {
                  lVar11 = DAT_14c80ad08;
                }
                lVar11 = lVar11 + (ulonglong)puVar13[lVar17 + 1];
                if (lVar11 == 0) {
                  puVar13 = *(uint **)(puVar13 + 0x102);
                  if (puVar13 == (uint *)0x0) {
                    puVar13 = (uint *)0x0;
                    lVar17 = 0;
                    break;
                  }
                  lVar11 = DAT_14c80ad08;
                  if ((ulonglong)*puVar13 < 8) {
                    lVar11 = 0;
                  }
                  lVar11 = lVar11 + (ulonglong)*puVar13;
                  lVar17 = 0;
                }
                else {
                  lVar17 = lVar17 + 1;
                }
              } while (lVar11 != 0);
              param_2 = local_ac;
              pcVar12 = AcquireSRWLockExclusive_exref;
              if ((((local_4c & 1) != 0) && (local_4c._1_1_ == '\0')) &&
                 (local_b8 = lVar17, DVar7 = ResumeThread(*(HANDLE *)(lVar1 + 0x1f68)),
                 lVar17 = local_b8, DVar7 == 0xffffffff)) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)invalidInstructionException();
                (*pcVar12)();
              }
            }
          }
          SRWLock = local_68;
          if (local_a4 == 1) {
            if ((int)local_78 != 1) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)invalidInstructionException();
              (*pcVar12)();
            }
            bVar2 = (byte)local_98;
            uVar14 = ((ulonglong)(puVar15 + local_80 + -1) & (ulonglong)local_88) >> (bVar2 & 0x3f);
            local_b8 = lVar17;
            local_a0 = lVar18;
            uVar9 = FUN_14679d749(*(undefined4 *)(lVar1 + 0x1f78));
            lVar17 = local_b8;
            uVar9 = uVar9 >> (bVar2 & 0x3f);
            lVar18 = local_a0;
            if (uVar14 < uVar9) {
              do {
                if ((*(uint *)(*(longlong *)(lVar1 + 0x1f60) + (uVar14 >> 5) * 4) >>
                     ((uint)uVar14 & 0x1f) & 1) == 0) {
                  bVar2 = (byte)local_98;
                  local_d8 = (undefined1 *)(uVar14 << (bVar2 & 0x3f));
                  local_c8 = lVar17;
                  local_d0 = puVar13;
                  FUN_14679f5e5(lVar1,puVar16,lVar18,puVar15);
                  puVar15 = (undefined1 *)(uVar14 + 1 << (bVar2 & 0x3f));
                  lVar18 = 0;
                  puVar16 = (uint *)0x0;
                }
                uVar14 = uVar14 + 1;
              } while (uVar14 != uVar9);
            }
            local_d8 = (undefined1 *)FUN_14679d749(*(undefined4 *)(lVar1 + 0x1f78));
            local_c8 = lVar17;
            local_d0 = puVar13;
            FUN_14679f5e5(lVar1,puVar16,lVar18,puVar15);
            pcVar12 = AcquireSRWLockExclusive_exref;
            SRWLock = local_68;
            param_2 = local_ac;
          }
        }
        ReleaseSRWLockExclusive(SRWLock);
      }
      lVar19 = *(longlong *)(lVar19 + 8);
    } while (lVar19 != 0);
    uVar9 = CONCAT71((int7)((ulonglong)SRWLock >> 8),local_49);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80b088);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar9 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14679f0b2 FUN_14679f0b2 body=1061 status=ok
// SIG undefined FUN_14679f0b2(void)

void FUN_14679f0b2(longlong param_1)

{
  uint *puVar1;
  byte bVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  PSRWLOCK SRWLock;
  undefined8 uVar8;
  char cVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  char *pcVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  if ((ulonglong)*(uint *)(param_1 + 8000) == 0) {
    return;
  }
  SRWLock = (PSRWLOCK)0x0;
  uVar16 = (ulonglong)*(uint *)(param_1 + 8000);
LAB_14679f0e8:
  uVar11 = *(ulonglong *)(param_1 + -8 + uVar16 * 8);
  uVar15 = uVar16 - 1;
  uVar14 = uVar16 - 1;
  switch((uint)uVar11 & 0x3f) {
  case 0:
    do {
      if (0x3f < uVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (uVar16 == 1) goto LAB_14679f41e;
      uVar11 = *(ulonglong *)(param_1 + -0x10 + uVar16 * 8);
      uVar14 = uVar16 - 1;
      uVar16 = uVar14;
    } while ((uVar11 & 0x3f) == 0);
switchD_14679f10e_default:
    uVar16 = uVar14;
    if (uVar14 == 0) {
LAB_14679f41e:
      if (SRWLock == (PSRWLOCK)0x0) {
        return;
      }
      ReleaseSRWLockExclusive(SRWLock);
      return;
    }
    goto LAB_14679f0e8;
  case 1:
    goto switchD_14679f10e_caseD_1;
  case 2:
    uVar8 = 1;
    break;
  case 3:
    uVar8 = 1;
    goto LAB_14679f4c2;
  case 4:
    uVar8 = 2;
    break;
  case 5:
    do {
      uVar15 = uVar11 >> 6 & 0x3ffffffffffc000;
      if (SRWLock != *(PSRWLOCK *)(uVar15 + 8)) {
        SRWLock = (PSRWLOCK)FUN_146794d20(uVar15,SRWLock);
      }
      bVar2 = (byte)((uint)uVar11 >> 10) & 0x1f;
      puVar1 = (uint *)(uVar15 + 0x2c + (ulonglong)((uint)(uVar11 >> 0xd) & 0x7c));
      *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
      if (*puVar1 == 0) {
        if ((*(ulonglong *)(uVar15 + 0x20) & 7) != 0) {
          uVar11 = *(ulonglong *)(uVar15 + 0x20) & 0xfffffffffffffff8;
          if (*(char *)(uVar15 + 1) == '\x01') {
            *(undefined1 *)(uVar15 + 2) = 1;
          }
          else {
            FUN_146791662((ulonglong)
                          ((uint)*(byte *)(uVar11 + 10) * 0x80000 +
                          (uint)*(ushort *)(uVar11 + 8) * 8) + DAT_14c80ad08,
                          *(undefined4 *)(uVar11 + 0xc));
          }
          *(ulonglong *)(uVar15 + 0x20) = uVar11;
        }
        lVar6 = *(longlong *)(uVar15 + 0x18) + -1;
        if (lVar6 == 0) {
          FUN_146795211(uVar15,0);
        }
        else {
          *(longlong *)(uVar15 + 0x18) = lVar6;
        }
      }
      *(undefined8 *)(param_1 + -8 + uVar16 * 8) = 0;
      if (uVar16 == 1) goto LAB_14679f41e;
      uVar11 = *(ulonglong *)(param_1 + -0x10 + uVar16 * 8);
      uVar16 = uVar16 - 1;
      uVar14 = uVar16;
    } while (((uint)uVar11 & 0x3f) == 5);
    goto switchD_14679f10e_default;
  case 6:
    uVar8 = 3;
    break;
  case 7:
    do {
      uVar14 = uVar15;
      if (DAT_14c758428 == 0) {
LAB_14679f291:
        lVar6 = 0;
      }
      else {
        uVar12 = (uint)(uVar11 >> 0x1b) & 0xfffffff ^ (uint)(uVar11 >> 0x17);
        uVar12 = uVar12 * 0x20 + (uVar12 ^ 0xdeadbeef);
        uVar12 = uVar12 >> 0xb ^ uVar12;
        uVar15 = (ulonglong)(*(uint *)(DAT_14c758428 + 0xc) & uVar12);
        uVar16 = *(ulonglong *)(DAT_14c758428 + 0x20 + uVar15 * 0x10);
        while (uVar16 != (uVar11 >> 6 & 0x3fffffffffe0000)) {
          uVar12 = uVar12 + 1;
          if (uVar16 == 0xffffffffffffffff) goto LAB_14679f291;
          uVar15 = (ulonglong)(uVar12 & *(uint *)(DAT_14c758428 + 0xc));
          uVar16 = *(ulonglong *)(DAT_14c758428 + 0x20 + uVar15 * 0x10);
        }
        lVar6 = *(longlong *)(DAT_14c758428 + 0x28 + uVar15 * 0x10);
      }
      if (SRWLock != *(PSRWLOCK *)(lVar6 + 8)) {
        SRWLock = (PSRWLOCK)FUN_146794d20(lVar6,SRWLock);
      }
      uVar16 = (ulonglong)((uint)(uVar11 >> 0x12) & 0x1c);
      uVar12 = *(uint *)(lVar6 + 0x2c + uVar16) & ~(1 << ((uint)uVar11 >> 0xf & 0x1f));
      *(uint *)(lVar6 + 0x2c + uVar16) = uVar12;
      uVar16 = *(ulonglong *)(lVar6 + 0x20);
      if ((uVar16 & 7) != 0) {
        uVar16 = uVar16 & 0xfffffffffffffff8;
        if (*(char *)(lVar6 + 1) == '\x01') {
          *(undefined1 *)(lVar6 + 2) = 1;
        }
        else {
          FUN_146791662((ulonglong)
                        ((uint)*(byte *)(uVar16 + 10) * 0x80000 + (uint)*(ushort *)(uVar16 + 8) * 8)
                        + DAT_14c80ad08,*(undefined4 *)(uVar16 + 0xc));
        }
        *(ulonglong *)(lVar6 + 0x20) = uVar16;
      }
      uVar10 = (uint)(uVar11 >> 6) & 0x1ffff;
      if ((uVar16 & 6) == 0) {
        uVar5 = *(uint *)(lVar6 + 4);
      }
      else {
        if (((uint)uVar16 & 7) != 3) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar16 = (ulonglong)
                 *(uint *)((uVar16 & 0xfffffffffffffff8) + 0x14 + (ulonglong)(uVar10 >> 0xc) * 4);
        lVar7 = DAT_14c80ad08 + uVar16 * 8;
        if (uVar16 == 0) {
          lVar7 = 0;
        }
        uVar5 = *(uint *)((ulonglong)
                          ((uint)*(byte *)(lVar7 + 0xd) * 0x80000 +
                          (uint)*(ushort *)(lVar7 + 0xb) * 8) + 0x20 + DAT_14c80ad08) & 0x7ffffff;
      }
      if (uVar5 != 0) {
        if (0x20000 < (ulonglong)uVar10 + (ulonglong)uVar5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar16 = ((ulonglong)uVar5 + (ulonglong)uVar10) - 1 >> 0xc;
        uVar11 = (ulonglong)(uVar10 >> 0xc);
        if (uVar11 <= uVar16) {
          bVar2 = 0;
          do {
            bVar4 = bVar2;
            cVar9 = *(char *)(lVar6 + 0x4c + uVar11);
            if (cVar9 == '\0') {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            if (cVar9 == -1) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            cVar9 = cVar9 + -1;
            *(char *)(lVar6 + 0x4c + uVar11) = cVar9;
            uVar11 = uVar11 + 1;
            bVar2 = bVar4 | cVar9 == '\0';
          } while (uVar16 + 1 != uVar11);
          if ((bool)(bVar4 | cVar9 == '\0')) {
            FUN_146795211(lVar6,1);
          }
        }
      }
      if (uVar12 == 0) {
        lVar7 = *(longlong *)(lVar6 + 0x18) + -1;
        if (lVar7 == 0) {
          FUN_146795211(lVar6,0);
        }
        else {
          *(longlong *)(lVar6 + 0x18) = lVar7;
        }
      }
      *(undefined8 *)(param_1 + uVar14 * 8) = 0;
      if (uVar14 == 0) goto LAB_14679f41e;
      uVar11 = *(ulonglong *)(param_1 + (uVar14 - 1) * 8);
      uVar15 = uVar14 - 1;
    } while (((uint)uVar11 & 0x3f) == 7);
    goto switchD_14679f10e_default;
  case 8:
    uVar8 = 4;
    break;
  case 9:
    uVar8 = 4;
    goto LAB_14679f4c2;
  case 10:
    uVar8 = 5;
    break;
  case 0xb:
    uVar8 = 5;
    goto LAB_14679f4c2;
  default:
    goto switchD_14679f10e_default;
  }
  uVar8 = FUN_146795881(uVar8);
  pcVar13 = "shared";
  goto LAB_14679f4b8;
switchD_14679f10e_caseD_1:
  do {
    uVar8 = 0;
LAB_14679f4c2:
    uVar8 = FUN_146795881(uVar8);
    pcVar13 = "exclusive";
LAB_14679f4b8:
    FUN_1467a2694("Deallocation logging is disabled for %s/%s, but here we are.\n",uVar8,pcVar13);
  } while( true );
}



// FUNCTION 14679f4d7 FUN_14679f4d7 body=270 status=ok
// SIG undefined FUN_14679f4d7(void)

void FUN_14679f4d7(longlong param_1,int param_2,ulonglong param_3,char *param_4,undefined1 *param_5,
                  char *param_6)

{
  uint *puVar1;
  byte bVar2;
  HANDLE Thread;
  code *pcVar3;
  char cVar4;
  DWORD DVar5;
  DWORD DVar6;
  
  if (param_2 == 1) {
    if (param_4[2] == '\x01') {
      param_4[2] = '\0';
      goto LAB_14679f4f5;
    }
    cVar4 = FUN_14678c2eb(param_4);
    if (cVar4 != '\0') {
      return;
    }
    bVar2 = param_4[1];
    if (bVar2 < 5) {
      param_4[1] = bVar2 + 1;
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x1f58) + ((param_3 & 0xffffffff) >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
      *(undefined1 *)(param_1 + 0x1f70) = 1;
      goto LAB_14679f4f5;
    }
    if (bVar2 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  else if (param_2 != 2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  cVar4 = FUN_14678c2eb(param_4);
  if (cVar4 != '\0') {
    return;
  }
  if (*param_6 == '\0') {
    *param_6 = '\x01';
    Thread = *(HANDLE *)(param_1 + 0x1f68);
    if (Thread == (HANDLE)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    DVar5 = GetThreadId(Thread);
    DVar6 = GetCurrentThreadId();
    param_6[1] = DVar5 == DVar6;
    if ((DVar5 != DVar6) && (DVar5 = SuspendThread(Thread), DVar5 == 0xffffffff)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  if (*param_6 == '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (*param_4 == '\0') {
    if (*param_4 == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    cVar4 = FUN_14678c4f8(param_4,0);
    if (cVar4 != '\0') {
      return;
    }
  }
LAB_14679f4f5:
  *param_5 = 1;
  return;
}



// FUNCTION 14679f5e5 FUN_14679f5e5 body=549 status=ok
// SIG undefined FUN_14679f5e5(void)

void FUN_14679f5e5(longlong param_1,uint *param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,uint *param_6,longlong param_7)

{
  uint uVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [40];
  longlong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)(*(longlong *)(param_1 + 0x1f50) + 0x18));
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (DAT_14c80aed0 == 0) {
    DAT_14c80aed0 = FUN_14678d6e8();
  }
  lVar5 = DAT_14c80aed0;
  if (DAT_14c80aed8 == 0) {
    DAT_14c80aed8 = FUN_14678d752();
  }
  if ((int)POPCOUNT(lVar5) != 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  bVar4 = (byte)DAT_14c80aed8;
  uVar7 = (-lVar5 & (param_4 + lVar5) - 1U) >> (bVar4 & 0x3f);
  param_5 = param_5 >> (bVar4 & 0x3f);
  if (uVar7 < param_5) {
    uVar8 = param_5 << (bVar4 & 0x3f);
    uVar6 = uVar7 << (bVar4 & 0x3f);
    local_60 = uVar8 - uVar6;
    if (uVar8 < uVar6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((param_2 != (uint *)0x0) && (param_3 != param_7 || param_2 != param_6)) {
      lVar5 = DAT_14c80ad08;
      if ((ulonglong)param_2[param_3] < 8) {
        lVar5 = 0;
      }
      lVar5 = lVar5 + (ulonglong)param_2[param_3];
      do {
        local_58 = uVar6;
        local_50 = uVar8;
        FUN_1467a0409(lVar5,param_1,&local_58);
        if (param_2 == (uint *)0x0) {
LAB_14679f742:
          param_2 = *(uint **)(param_2 + 0x102);
          if (param_2 == (uint *)0x0) {
            param_3 = 0;
            param_2 = (uint *)0x0;
            lVar5 = 0;
          }
          else {
            lVar5 = 0;
            if (7 < (ulonglong)*param_2) {
              lVar5 = DAT_14c80ad08;
            }
            lVar5 = lVar5 + (ulonglong)*param_2;
            param_3 = 0;
          }
        }
        else {
          lVar5 = DAT_14c80ad08;
          if ((ulonglong)param_2[param_3 + 1] < 8) {
            lVar5 = 0;
          }
          lVar5 = lVar5 + (ulonglong)param_2[param_3 + 1];
          if (lVar5 == 0) goto LAB_14679f742;
          param_3 = param_3 + 1;
        }
      } while (param_3 != param_7 || param_2 != param_6);
    }
    do {
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x1f60) + (uVar7 >> 5) * 4);
      if ((uVar1 >> ((uint)uVar7 & 0x1f) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      *(uint *)(*(longlong *)(param_1 + 0x1f60) + (uVar7 >> 5) * 4) =
           uVar1 & ~(1 << ((byte)uVar7 & 0x1f));
      uVar7 = uVar7 + 1;
    } while (param_5 != uVar7);
    FUN_14678dd69(param_1 + uVar6,local_60,1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14679f80b FUN_14679f80b body=46 status=ok
// SIG undefined FUN_14679f80b(void)

void FUN_14679f80b(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = *(uint *)(param_1 + 8000);
  if ((ulonglong)uVar1 < 1000) {
    *(longlong *)(param_1 + (ulonglong)uVar1 * 8) = (longlong)param_3 | param_2 << 6;
    *(uint *)(param_1 + 8000) = uVar1 + 1;
    FUN_14679df6d(param_1,0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



// FUNCTION 14679f839 FUN_14679f839 body=64 status=ok
// SIG undefined FUN_14679f839(void)

ulonglong FUN_14679f839(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_14679d749();
  if (DAT_14c80aed8 == 0) {
    DAT_14c80aed8 = FUN_14678d752();
  }
  return (uVar1 >> ((byte)DAT_14c80aed8 & 0x3f)) + 0x1f >> 3 & 0xfffffffffffffffc;
}



// FUNCTION 14679f879 FUN_14679f879 body=1503 status=ok
// SIG undefined FUN_14679f879(void)

uint FUN_14679f879(ulonglong param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *_Dst;
  void *pvVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  uint *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint *puVar19;
  void *pvVar20;
  undefined1 local_88 [36];
  uint local_64;
  ulonglong local_60;
  ulonglong local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_88;
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar18 = param_1 & 0xffffffff;
  uVar3 = (uint)param_1 & 3;
  if (uVar3 < 2) {
    iVar4 = FUN_1467a00a4(param_1);
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  else if ((uVar3 == 2) && (iVar4 = FUN_1467a00a4(param_1), iVar4 != -1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar3 = DAT_14c758530;
  if (DAT_14c758530 == 0xffffffff) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  FUN_1467a00f6(param_1,DAT_14c758530);
  uVar14 = DAT_14c758530;
  uVar5 = FUN_1467a0037(param_1);
  DAT_14c758530 = uVar5 + uVar14;
  if (!CARRY4(uVar5,uVar14)) {
    if ((DAT_14c80b068 == (undefined4 *)0x0) || (DAT_14c80b070 == 0x101)) {
      _Dst = (undefined4 *)FUN_1467a08ac(0x410);
      memset(_Dst,0,0x410);
      if (7 < param_1) {
        uVar18 = param_1 - DAT_14c80ad08;
        if (DAT_14c758498 <= uVar18) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (DAT_14c80ad08 == param_1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      }
      *_Dst = (int)uVar18;
      DAT_14c80b070 = 1;
      LOCK();
      UNLOCK();
      if (DAT_14c80b068 == (undefined4 *)0x0) {
        if (DAT_14c80b030 != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (uVar3 != 8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        puVar10 = &DAT_14c80b030;
      }
      else {
        puVar10 = (undefined8 *)(DAT_14c80b068 + 0x102);
      }
      *puVar10 = _Dst;
      DAT_14c80b068 = _Dst;
    }
    else {
      if (uVar3 < 9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      LOCK();
      UNLOCK();
      uVar16 = (ulonglong)DAT_14c80b070;
      DAT_14c80b070 = DAT_14c80b070 + 1;
      if (7 < param_1) {
        uVar18 = param_1 - DAT_14c80ad08;
        if (DAT_14c758498 <= uVar18) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (DAT_14c80ad08 == param_1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      }
      DAT_14c80b068[uVar16] = (int)uVar18;
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80b060);
    uVar18 = param_1;
    if (7 < param_1) {
      uVar18 = param_1 - DAT_14c80ad08;
      if (DAT_14c758498 <= uVar18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (uVar18 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    lVar12 = 0;
    do {
      *(char *)((longlong)&local_4c + lVar12) = (char)uVar18;
      uVar18 = uVar18 >> 8;
      lVar12 = lVar12 + 1;
    } while (lVar12 != 4);
    uVar18 = (ulonglong)local_4c;
    if (uVar18 < 8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar5 = FUN_1467a00a4(DAT_14c80ad08 + uVar18);
    uVar14 = local_4c;
    if (DAT_14c80b040 <= (uint)((DAT_14c80b058 + DAT_14c80b050) * 2)) {
      uVar6 = DAT_14c80b040 * 2;
      if ((uint)(DAT_14c80b050 * 6) < DAT_14c80b040 * 2) {
        uVar6 = DAT_14c80b040;
      }
      uVar16 = 0x10;
      if (DAT_14c80b040 != 0) {
        uVar16 = (ulonglong)uVar6;
      }
      iVar4 = (int)uVar16;
      if (POPCOUNT(iVar4) != 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      pvVar20 = (void *)FUN_14678b965(uVar16 * 4,"pas_thread_local_cache_layout_hashtable/table",0,0
                                     );
      local_58 = uVar16;
      if (iVar4 != 0) {
        memset(pvVar20,0,uVar16 * 4);
      }
      pvVar9 = DAT_14c80b038;
      uVar16 = (ulonglong)DAT_14c80b040;
      if (uVar16 == 0) {
        lVar12 = 0;
      }
      else {
        local_64 = uVar3;
        uVar17 = 0;
        uVar13 = DAT_14c80ad08;
        local_60 = uVar18;
        do {
          uVar3 = *(uint *)((longlong)pvVar9 + uVar17 * 4);
          uVar11 = (ulonglong)uVar3;
          uVar18 = 0;
          if (7 < uVar11) {
            uVar18 = uVar13;
          }
          if (1 < uVar18 + uVar11) {
            if (uVar3 < 8) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            uVar3 = FUN_1467a00a4(uVar13 + uVar11);
            uVar3 = uVar3 >> 4 ^ uVar3;
            uVar3 = uVar3 * 0x20 + (uVar3 ^ 0xdeadbeef);
            uVar3 = uVar3 >> 0xb ^ uVar3;
            do {
              uVar13 = (ulonglong)(uVar3 & iVar4 - 1U);
              uVar11 = (ulonglong)*(uint *)((longlong)pvVar20 + uVar13 * 4);
              uVar18 = DAT_14c80ad08;
              if (uVar11 < 8) {
                uVar18 = 0;
              }
              uVar3 = uVar3 + 1;
            } while (1 < uVar18 + uVar11);
            *(undefined4 *)((longlong)pvVar20 + uVar13 * 4) =
                 *(undefined4 *)((longlong)pvVar9 + uVar17 * 4);
            uVar13 = DAT_14c80ad08;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar16);
        lVar12 = uVar16 << 2;
        uVar14 = (uint)local_60;
        uVar3 = local_64;
      }
      DAT_14c80b040 = (uint)local_58;
      DAT_14c80b058 = 0;
      DAT_14c80b038 = pvVar20;
      DAT_14c80b048 = iVar4 - 1U;
      FUN_14678b9d2(pvVar9,lVar12,0,0);
    }
    uVar6 = uVar5 >> 4 ^ uVar5;
    uVar7 = uVar6 * 0x20 + (uVar6 ^ 0xdeadbeef);
    uVar7 = uVar7 >> 0xb ^ uVar7;
    puVar15 = (uint *)((longlong)DAT_14c80b038 + (ulonglong)(DAT_14c80b048 & uVar7) * 4);
    uVar6 = *puVar15;
    if (uVar6 != 0) {
      puVar19 = (uint *)0x0;
      uVar18 = DAT_14c80ad08;
      pvVar20 = DAT_14c80b038;
      uVar8 = DAT_14c80b048;
      do {
        uVar7 = uVar7 + 1;
        uVar16 = 0;
        if (7 < uVar6) {
          uVar16 = uVar18;
        }
        if (uVar16 + uVar6 == 1) {
          if (puVar19 == (uint *)0x0) {
            puVar19 = puVar15;
          }
        }
        else {
          if (uVar6 < 8) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          uVar6 = FUN_1467a00a4(uVar18 + uVar6);
          uVar18 = DAT_14c80ad08;
          pvVar20 = DAT_14c80b038;
          uVar8 = DAT_14c80b048;
          if (uVar6 == uVar5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        puVar15 = (uint *)((longlong)pvVar20 + (ulonglong)(uVar8 & uVar7) * 4);
        uVar6 = *puVar15;
      } while (uVar6 != 0);
      if (puVar19 != (uint *)0x0) {
        DAT_14c80b058 = DAT_14c80b058 + -1;
        puVar15 = puVar19;
      }
    }
    DAT_14c80b050 = DAT_14c80b050 + 1;
    *puVar15 = uVar14;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80b060);
    lVar12 = FUN_14679fffe(param_1);
    if ((*(uint *)(lVar12 + 0xc) & 0xfe) == 4) {
      pvVar20 = (void *)((ulonglong)DAT_14c80b388 * 8 + DAT_14c80ad08);
      if ((ulonglong)DAT_14c80b388 == 0) {
        pvVar20 = (void *)0x0;
      }
      if (DAT_14c80b390 <= DAT_14c80b38c) {
        if (DAT_14c80b38c != DAT_14c80b390) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar14 = DAT_14c80b38c * 2 + 2;
        if (uVar14 <= DAT_14c80b38c) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar18 = 0;
        pvVar9 = (void *)FUN_14678871b((ulonglong)uVar14 * 8,
                                       "verse_heap_thread_local_cache_layout_node_vector/array",0);
        if ((ulonglong)DAT_14c80b38c != 0) {
          memcpy(pvVar9,pvVar20,(ulonglong)DAT_14c80b38c << 3);
          uVar18 = (ulonglong)DAT_14c80b38c;
        }
        uVar5 = 0;
        memset((void *)((longlong)pvVar9 + uVar18 * 8),0,(uVar14 - uVar18) * 8);
        LOCK();
        UNLOCK();
        if (pvVar9 != (void *)0x0) {
          uVar18 = (longlong)pvVar9 - DAT_14c80ad08;
          if (DAT_14c758498 <= uVar18) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if ((uVar18 & 7) != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if (uVar18 < 8) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          uVar5 = (uint)(uVar18 >> 3);
        }
        LOCK();
        UNLOCK();
        pvVar20 = pvVar9;
        DAT_14c80b388 = uVar5;
        DAT_14c80b390 = uVar14;
      }
      *(ulonglong *)((longlong)pvVar20 + (ulonglong)DAT_14c80b38c * 8) = param_1;
      LOCK();
      UNLOCK();
      DAT_14c80b38c = DAT_14c80b38c + 1;
      if (DAT_14c80b38c == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    if ((local_48 ^ (ulonglong)local_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14679fe59 FUN_14679fe59 body=26 status=ok
// SIG undefined FUN_14679fe59(void)

void FUN_14679fe59(ulonglong param_1)

{
  code *pcVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((param_1 & 3) == 0) {
    if ((param_1 & 3) == 0) {
      FUN_14679f879();
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



// FUNCTION 14679fe73 FUN_14679fe73 body=50 status=ok
// SIG undefined FUN_14679fe73(void)

void FUN_14679fe73(void)

{
  code *pcVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_14678f308();
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((uVar2 & 3) == 0) {
    if (((uint)uVar2 & 3 | 1) == 1) {
      FUN_14679f879(uVar2 | 1);
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



// FUNCTION 14679fea5 FUN_14679fea5 body=35 status=ok
// SIG undefined FUN_14679fea5(void)

void FUN_14679fea5(ulonglong param_1)

{
  code *pcVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((param_1 & 3) == 0) {
    if (((uint)param_1 & 3 | 2) == 2) {
      FUN_14679f879();
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



// FUNCTION 14679fec8 FUN_14679fec8 body=229 status=ok
// SIG undefined FUN_14679fec8(void)

longlong FUN_14679fec8(uint param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint *puVar8;
  longlong lVar9;
  uint uVar10;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80b060);
  lVar5 = DAT_14c80b038;
  if (DAT_14c80b038 == 0) {
LAB_14679ff89:
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80b060);
    return 0;
  }
  uVar2 = param_1 >> 4 ^ param_1;
  uVar3 = uVar2 * 0x20 + (uVar2 ^ 0xdeadbeef);
  uVar3 = uVar3 >> 0xb ^ uVar3;
  lVar6 = DAT_14c80ad08;
  uVar2 = DAT_14c80b048;
  do {
    uVar10 = uVar3 & uVar2;
    uVar4 = *(uint *)(lVar5 + (ulonglong)uVar10 * 4);
    uVar7 = (ulonglong)uVar4;
    lVar9 = lVar6;
    if (uVar7 < 8) {
      lVar9 = 0;
    }
    if (lVar9 + uVar7 < 2) {
      if (lVar9 + uVar7 != 1) goto LAB_14679ff89;
    }
    else {
      if (uVar4 < 8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar4 = FUN_1467a00a4(lVar6 + uVar7);
      lVar6 = DAT_14c80ad08;
      uVar2 = DAT_14c80b048;
      if (uVar4 == param_1) {
        puVar8 = (uint *)(lVar5 + (ulonglong)uVar10 * 4);
        if (puVar8 != (uint *)0x0) {
          uVar2 = *puVar8;
          ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80b060);
          lVar5 = DAT_14c80ad08;
          if (uVar2 < 8) {
            lVar5 = 0;
          }
          return lVar5 + (ulonglong)uVar2;
        }
        goto LAB_14679ff89;
      }
    }
    uVar3 = uVar3 + 1;
  } while( true );
}



// FUNCTION 14679ffad FUN_14679ffad body=81 status=ok
// SIG undefined FUN_14679ffad(void)

longlong FUN_14679ffad(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (DAT_14c80b068 == 0) {
    lVar3 = 0;
  }
  else {
    if (DAT_14c80b070 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar4 = (ulonglong)*(uint *)(DAT_14c80b068 + (ulonglong)(DAT_14c80b070 - 1) * 4);
    lVar3 = DAT_14c80ad08;
    if (uVar4 < 8) {
      lVar3 = 0;
    }
    lVar3 = lVar3 + uVar4;
  }
  return lVar3;
}



// FUNCTION 14679fffe FUN_14679fffe body=57 status=ok
// SIG undefined FUN_14679fffe(void)

ulonglong FUN_14679fffe(ulonglong param_1)

{
  code *pcVar1;
  
  switch((uint)param_1 & 3) {
  case 1:
    param_1 = (ulonglong)
              ((uint)(byte)((ushort *)(param_1 & 0xfffffffffffffffc))[1] * 0x80000 +
              (uint)*(ushort *)(param_1 & 0xfffffffffffffffc) * 8) + DAT_14c80ad08;
    break;
  case 2:
    param_1 = param_1 & 0xfffffffffffffffc;
    break;
  case 3:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  return param_1;
}



// FUNCTION 1467a0037 FUN_1467a0037 body=109 status=ok
// SIG undefined FUN_1467a0037(void)

ulonglong FUN_1467a0037(ulonglong param_1)

{
  code *pcVar1;
  byte bVar2;
  ulonglong uVar3;
  
  uVar3 = param_1;
  switch((uint)param_1 & 3) {
  case 1:
    uVar3 = (ulonglong)
            ((uint)(byte)((ushort *)(param_1 & 0xfffffffffffffffc))[1] * 0x80000 +
            (uint)*(ushort *)(param_1 & 0xfffffffffffffffc) * 8) + DAT_14c80ad08;
    break;
  case 2:
    uVar3 = param_1 & 0xfffffffffffffffc;
    break;
  case 3:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((param_1 & 2) == 0) {
    uVar3 = FUN_14679944f(uVar3);
    return uVar3;
  }
  bVar2 = FUN_146797f2b(uVar3);
  return (ulonglong)((uint)bVar2 + (uint)bVar2 * 2 + 0xf >> 3);
}



// FUNCTION 1467a00a4 FUN_1467a00a4 body=50 status=ok
// SIG undefined FUN_1467a00a4(void)

undefined4 FUN_1467a00a4(ulonglong param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  switch((uint)param_1 & 3) {
  case 0:
    puVar2 = (undefined4 *)(param_1 + 0x2c);
    break;
  case 1:
    puVar2 = (undefined4 *)((param_1 & 0xfffffffffffffffc) + 4);
    break;
  case 2:
    puVar2 = (undefined4 *)((param_1 & 0xfffffffffffffffc) + 0x28);
    break;
  case 3:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  return *puVar2;
}



// FUNCTION 1467a00d6 FUN_1467a00d6 body=32 status=ok
// SIG undefined FUN_1467a00d6(void)

undefined4 FUN_1467a00d6(ulonglong param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  if ((param_1 & 2) == 0) {
    puVar2 = (undefined4 *)((param_1 & 0xfffffffffffffffc) + 4);
    if ((param_1 & 1) == 0) {
      puVar2 = (undefined4 *)(param_1 + 0x2c);
    }
    return *puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1467a00f6 FUN_1467a00f6 body=50 status=ok
// SIG undefined FUN_1467a00f6(void)

void FUN_1467a00f6(ulonglong param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  
  switch((uint)param_1 & 3) {
  case 0:
    puVar2 = (undefined4 *)(param_1 + 0x2c);
    break;
  case 1:
    puVar2 = (undefined4 *)((param_1 & 0xfffffffffffffffc) + 4);
    break;
  case 2:
    puVar2 = (undefined4 *)((param_1 & 0xfffffffffffffffc) + 0x28);
    break;
  case 3:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *puVar2 = param_2;
  return;
}



// FUNCTION 1467a0128 FUN_1467a0128 body=224 status=ok
// SIG undefined FUN_1467a0128(void)

void FUN_1467a0128(ushort *param_1,longlong param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  ushort *puVar4;
  uint *puVar5;
  ushort *puVar6;
  
  FUN_1467a0208();
  if (((ulonglong)param_1 & 2) == 0) {
    puVar4 = param_1;
    puVar6 = param_1;
    if (((ulonglong)param_1 & 1) != 0) {
      puVar4 = (ushort *)((ulonglong)param_1 & 0xfffffffffffffffc);
      puVar6 = (ushort *)
               ((ulonglong)((uint)(byte)puVar4[1] * 0x80000 + (uint)*puVar4 * 8) + DAT_14c80ad08);
    }
    puVar5 = (uint *)(puVar4 + 2);
    if (((ulonglong)param_1 & 1) == 0) {
      puVar5 = (uint *)(param_1 + 0x16);
    }
    if (*puVar5 < *(uint *)(param_2 + 0x1f78)) {
      FUN_14678bb46(param_2 + (ulonglong)*puVar5 * 8 + 0x1f80,puVar6,0);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  switch((uint)param_1 & 3) {
  case 1:
    param_1 = (ushort *)
              ((ulonglong)
               ((uint)(byte)((ushort *)((ulonglong)param_1 & 0xfffffffffffffffc))[1] * 0x80000 +
               (uint)*(ushort *)((ulonglong)param_1 & 0xfffffffffffffffc) * 8) + DAT_14c80ad08);
  case 0:
    FUN_146797f2b(param_1);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  case 3:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar3 = FUN_146797f2b((ulonglong)param_1 & 0xfffffffffffffffc);
  uVar1 = *(uint *)(((ulonglong)param_1 & 0xfffffffffffffffc) + 0x28);
  if (uVar1 < *(uint *)(param_2 + 0x1f78)) {
    FUN_14678c567(param_2 + (ulonglong)uVar1 * 8 + 0x1f80,uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



// FUNCTION 1467a0208 FUN_1467a0208 body=89 status=ok
// SIG undefined FUN_1467a0208(void)

void FUN_1467a0208(ulonglong param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  
  switch((uint)param_1 & 3) {
  case 0:
    piVar4 = (int *)(param_1 + 0x2c);
    break;
  case 1:
    piVar4 = (int *)((param_1 & 0xfffffffffffffffc) + 4);
    break;
  case 2:
    piVar4 = (int *)((param_1 & 0xfffffffffffffffc) + 0x28);
    break;
  case 3:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  iVar1 = *piVar4;
  iVar3 = FUN_1467a0037();
  FUN_14679e7f8(param_2,iVar1,iVar3 + iVar1);
  return;
}



// FUNCTION 1467a0261 FUN_1467a0261 body=268 status=ok
// SIG undefined FUN_1467a0261(void)

void FUN_1467a0261(ulonglong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  uint *puVar5;
  char *_Dst;
  char *_Src;
  ulonglong uVar6;
  
  cVar4 = FUN_1467a034a();
  if (cVar4 == '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  switch((uint)param_1 & 3) {
  case 0:
    puVar5 = (uint *)(param_1 + 0x2c);
    break;
  case 1:
    puVar5 = (uint *)((param_1 & 0xfffffffffffffffc) + 4);
    break;
  case 2:
    puVar5 = (uint *)((param_1 & 0xfffffffffffffffc) + 0x28);
    break;
  case 3:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar2 = *puVar5;
  uVar6 = (ulonglong)uVar2;
  cVar4 = FUN_1467a034a(param_1,param_3);
  if (cVar4 != '\0') {
    if (*(uint *)(param_3 + 0x1f74) <= uVar2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if ((*(byte *)(param_3 + 0x1f83 + uVar6 * 8) & 0x7f) != 0) {
      param_3 = param_3 + uVar6 * 8;
      _Src = (char *)(param_3 + 0x1f80);
      if ((param_1 & 2) == 0) {
        if (uVar2 < *(uint *)(param_2 + 0x1f78)) {
          FUN_14678bce1(param_2 + uVar6 * 8 + 0x1f80);
          return;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (*(uint *)(param_2 + 0x1f78) <= uVar2) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      _Dst = (char *)(param_2 + uVar6 * 8 + 0x1f80);
      if (*_Dst != '\x01') {
        if (*_Src != '\x01') {
          bVar1 = *(byte *)(param_3 + 0x1f84);
          memcpy(_Dst,_Src,(ulonglong)((uint)bVar1 + (uint)bVar1 * 2 + 0xf & 0xfffffff8));
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
  }
  FUN_1467a0128(param_1,param_2);
  return;
}



// FUNCTION 1467a034a FUN_1467a034a body=89 status=ok
// SIG undefined FUN_1467a034a(void)

void FUN_1467a034a(ulonglong param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  
  switch((uint)param_1 & 3) {
  case 0:
    piVar4 = (int *)(param_1 + 0x2c);
    break;
  case 1:
    piVar4 = (int *)((param_1 & 0xfffffffffffffffc) + 4);
    break;
  case 2:
    piVar4 = (int *)((param_1 & 0xfffffffffffffffc) + 0x28);
    break;
  case 3:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  iVar1 = *piVar4;
  iVar3 = FUN_1467a0037();
  FUN_14679e644(param_2,iVar1,iVar3 + iVar1);
  return;
}



// FUNCTION 1467a03a3 FUN_1467a03a3 body=102 status=ok
// SIG undefined FUN_1467a03a3(void)

void FUN_1467a03a3(ulonglong param_1,longlong param_2,undefined4 param_3)

{
  code *pcVar1;
  uint *puVar2;
  longlong lVar3;
  
  switch((uint)param_1 & 3) {
  case 0:
    puVar2 = (uint *)(param_1 + 0x2c);
    break;
  case 1:
    puVar2 = (uint *)((param_1 & 0xfffffffffffffffc) + 4);
    break;
  case 2:
    puVar2 = (uint *)((param_1 & 0xfffffffffffffffc) + 0x28);
    break;
  case 3:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (*puVar2 < *(uint *)(param_2 + 0x1f74)) {
    lVar3 = param_2 + (ulonglong)*puVar2 * 8 + 0x1f80;
    if ((param_1 & 2) == 0) {
      FUN_14678bdd4(lVar3,param_3);
      return;
    }
    FUN_14678c59e(lVar3,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1467a0409 FUN_1467a0409 body=234 status=ok
// SIG undefined FUN_1467a0409(void)

void FUN_1467a0409(ulonglong param_1,longlong param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  
  cVar6 = FUN_1467a034a();
  if (cVar6 == '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  switch((uint)param_1 & 3) {
  case 0:
    puVar8 = (uint *)(param_1 + 0x2c);
    break;
  case 1:
    puVar8 = (uint *)((param_1 & 0xfffffffffffffffc) + 4);
    break;
  case 2:
    puVar8 = (uint *)((param_1 & 0xfffffffffffffffc) + 0x28);
    break;
  case 3:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar2 = *puVar8;
  iVar7 = FUN_1467a0037(param_1);
  uVar9 = (ulonglong)(iVar7 + uVar2) * 8;
  uVar1 = (ulonglong)uVar2 * 8;
  if (uVar9 < uVar1) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar3 = *param_3;
  uVar4 = param_3[1];
  if (uVar4 < uVar3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (uVar3 != uVar4 && uVar1 + (ulonglong)(iVar7 + uVar2) * -8 != 0) {
    if (uVar9 <= uVar1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    if (uVar4 <= uVar3) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    if ((uVar3 < uVar9 + 0x1f80) && (uVar1 + 0x1f80 < uVar4)) {
      if (uVar2 < *(uint *)(param_2 + 0x1f74)) {
        FUN_14678c523(param_2 + (ulonglong)uVar2 * 8 + 0x1f80);
        return;
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
  }
  return;
}



// FUNCTION 1467a04f3 FUN_1467a04f3 body=168 status=ok
// SIG undefined FUN_1467a04f3(void)

undefined8 * FUN_1467a04f3(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  BOOLEAN BVar3;
  undefined8 *puVar4;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  puVar4 = DAT_14c80b078;
  if (BVar3 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (DAT_14c80b078 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_1467886fa(0x40,0x40,"pas_thread_local_cache_node",0);
    puVar4[5] = 1;
    *puVar4 = 0;
    puVar4[1] = DAT_14c80b080;
    InitializeSRWLock((PSRWLOCK)(puVar4 + 2));
    InitializeSRWLock((PSRWLOCK)(puVar4 + 3));
    puVar4[4] = 0;
    LOCK();
    UNLOCK();
    DAT_14c80b080 = puVar4;
  }
  else {
    puVar2 = (undefined8 *)*DAT_14c80b078;
    *DAT_14c80b078 = 0;
    DAT_14c80b078 = puVar2;
    if (puVar4[4] != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  return puVar4;
}



// FUNCTION 1467a059b FUN_1467a059b body=86 status=ok
// SIG undefined FUN_1467a059b(void)

void FUN_1467a059b(longlong *param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  
  if (*param_1 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 == '\0') {
    BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)(param_1 + 3));
    if (BVar2 == '\0') {
      param_1[5] = param_1[5] + 1;
      param_1[4] = 0;
      *param_1 = (longlong)DAT_14c80b078;
      DAT_14c80b078 = param_1;
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



// FUNCTION 1467a05f1 FUN_1467a05f1 body=667 status=ok
// SIG undefined FUN_1467a05f1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1467a05f1(longlong param_1,ulonglong param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  BOOLEAN BVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined1 *local_50;
  undefined4 local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar6 != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if ((int)POPCOUNT(param_2) != 1) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar9 = -param_2 & (param_1 + param_2) - 1;
  uVar11 = uVar9 + 7 >> 3;
  if (0x57f < uVar9 + 7) {
    local_58 = (undefined **)uVar11;
    FUN_14678cc2f("Cannot allocate size = %zu (alignment = %zu, aligned_size = %zu, index = %zu) with utility heap.\n"
                  ,param_1,param_2,uVar9);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (DAT_14c80b350 == 0) {
    DAT_14c80b350 = FUN_14678871b(0xdc00,"pas_utility_heap_allocators",0);
    lVar8 = 56000;
    do {
      *(undefined4 *)(DAT_14c80b350 + lVar8) = 0x82000000;
      puVar2 = (undefined8 *)(DAT_14c80b350 + 4 + lVar8);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(DAT_14c80b350 + 0x14 + lVar8);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(DAT_14c80b350 + 0x24 + lVar8);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(DAT_14c80b350 + 0x34 + lVar8);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)(DAT_14c80b350 + 0x44 + lVar8) = 0;
      lVar8 = lVar8 + -0x140;
    } while (lVar8 != -0x140);
  }
  lVar8 = DAT_14c80b350;
  lVar12 = uVar11 * 0x140;
  puVar1 = (undefined1 *)(DAT_14c80b350 + lVar12);
  if ((*(longlong *)(DAT_14c80b350 + 0x38 + lVar12) == 0) ||
     ((ulonglong)(1L << (puVar1[4] & 0x3f)) < param_2)) {
    _DAT_14c80b358 = _DAT_14c80b358 + 1;
    local_58 = &PTR_LOOP_149dfd458;
    local_48 = 1;
    local_50 = (undefined1 *)0x0;
    lVar7 = FUN_1467928b4(&PTR_DAT_14c758560,uVar9,param_2,1);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    FUN_14678bb46(puVar1,lVar7,1);
  }
  *puVar1 = 1;
  uVar3 = *(uint *)(puVar1 + 0x18);
  if ((ulonglong)uVar3 == 0) {
    lVar7 = *(longlong *)(puVar1 + 0x20);
    uVar11 = *(ulonglong *)(puVar1 + 0x30);
    if (uVar11 == 0) {
      if (puVar1[8] != '\x04') {
        local_50 = &LAB_1467a088d;
        local_58 = (undefined **)&DAT_14c80b360;
        FUN_1467a2117(local_40,puVar1,uVar9,param_2);
        goto LAB_1467a0708;
      }
      uVar3 = *(uint *)(puVar1 + 0x2c);
      uVar4 = *(uint *)(puVar1 + 0x28);
      uVar9 = (ulonglong)uVar4;
      if (uVar3 <= uVar4) {
LAB_1467a084b:
        FUN_1467a16e5(local_40,puVar1,&DAT_14c80b360,&LAB_1467a088d);
        goto LAB_1467a0708;
      }
      *(undefined8 *)(puVar1 + uVar9 * 8 + 0x40) = 0;
      lVar10 = 0;
      do {
        if ((uVar9 - (uVar3 - 1)) + lVar10 == 0) {
          *(uint *)(puVar1 + 0x28) = uVar3;
          goto LAB_1467a084b;
        }
        lVar7 = lVar7 + 0x200;
        uVar11 = *(ulonglong *)(lVar8 + lVar12 + uVar9 * 8 + 0x48 + lVar10 * 8);
        lVar10 = lVar10 + 1;
      } while (uVar11 == 0);
      *(uint *)(puVar1 + 0x28) = uVar4 + (int)lVar10;
      *(longlong *)(puVar1 + 0x20) = lVar7;
    }
    uVar9 = 0;
    if (uVar11 != 0) {
      for (; (uVar11 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
      }
    }
    *(ulonglong *)(puVar1 + 0x30) = uVar11 & ~(1L << (uVar9 & 0x3f));
    local_40[0] = lVar7 + uVar9 * 8;
  }
  else {
    *(uint *)(puVar1 + 0x18) = uVar3 - *(int *)(puVar1 + 0x1c);
    local_40[0] = *(longlong *)(puVar1 + 0x10) - (ulonglong)uVar3;
  }
  *puVar1 = 0;
LAB_1467a0708:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_40[0];
}



// FUNCTION 1467a0897 FUN_1467a0897 body=21 status=ok
// SIG undefined FUN_1467a0897(void)

void FUN_1467a0897(void)

{
  code *pcVar1;
  longlong lVar2;
  
  lVar2 = FUN_1467a05f1();
  if (lVar2 != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1467a08ac FUN_1467a08ac body=26 status=ok
// SIG undefined FUN_1467a08ac(void)

void FUN_1467a08ac(undefined8 param_1)

{
  code *pcVar1;
  longlong lVar2;
  
  lVar2 = FUN_1467a05f1(param_1,1);
  if (lVar2 != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1467a08c6 FUN_1467a08c6 body=176 status=ok
// SIG undefined FUN_1467a08c6(void)

void FUN_1467a08c6(ulonglong param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_1 != 0) {
    uVar5 = param_1 & 0xffffffffffffc000;
    uVar6 = (ulonglong)((uint)(param_1 >> 6) & 0xfc);
    uVar4 = *(uint *)(uVar5 + 0x2c + uVar6) & ~(1 << ((uint)(param_1 >> 3) & 0x1f));
    *(uint *)(uVar5 + 0x2c + uVar6) = uVar4;
    if ((*(ulonglong *)(uVar5 + 0x20) & 7) != 0) {
      uVar6 = *(ulonglong *)(uVar5 + 0x20) & 0xfffffffffffffff8;
      if (*(char *)(uVar5 + 1) == '\x01') {
        *(undefined1 *)(uVar5 + 2) = 1;
      }
      else {
        FUN_146791662((ulonglong)
                      ((uint)*(byte *)(uVar6 + 10) * 0x80000 + (uint)*(ushort *)(uVar6 + 8) * 8) +
                      DAT_14c80ad08,*(undefined4 *)(uVar6 + 0xc));
      }
      *(ulonglong *)(uVar5 + 0x20) = uVar6;
    }
    if (uVar4 == 0) {
      lVar3 = *(longlong *)(uVar5 + 0x18) + -1;
      if (lVar3 == 0) {
        FUN_146795211(uVar5,0);
        return;
      }
      *(longlong *)(uVar5 + 0x18) = lVar3;
    }
  }
  return;
}



// FUNCTION 1467a0976 FUN_1467a0976 body=124 status=ok
// SIG undefined FUN_1467a0976(void)

byte FUN_1467a0976(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  }
  if (DAT_14c80b350 == 0) {
    bVar2 = 0;
  }
  else {
    lVar3 = 56000;
    bVar2 = 0;
    do {
      bVar1 = FUN_14678c2b6(DAT_14c80b350 + lVar3,param_1);
      bVar2 = bVar2 | bVar1;
      lVar3 = lVar3 + -0x140;
    } while (lVar3 != -0x140);
  }
  if (param_2 == 0) {
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  }
  return bVar2 & 1;
}



// FUNCTION 1467a0a06 FUN_1467a0a06 body=135 status=ok
// SIG undefined FUN_1467a0a06(void)

undefined8 FUN_1467a0a06(undefined8 param_1,longlong param_2,int param_3)

{
  code *pcVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_3 == 1) {
    local_20 = 0x4000;
    local_18 = 0;
    local_38 = 1;
    FUN_146780e1e(local_30,0x4000,&local_20,"pas_utility_heap/page");
    FUN_146790cbb(local_30[0],0x4000);
    if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return local_30[0];
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1467a0a90 FUN_1467a0a90 body=2 status=ok
// SIG undefined FUN_1467a0a90(void)

void FUN_1467a0a90(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1467a0a94 FUN_1467a0a94 body=2020 status=ok
// SIG undefined FUN_1467a0a94(void)

undefined8 FUN_1467a0a94(longlong param_1)

{
  ulonglong *puVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  uint3 uVar8;
  char cVar9;
  BOOLEAN BVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong *plVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined4 uVar24;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar16 = *(ulonglong *)(param_1 + 0x38);
  if (((uint)uVar16 & 7) == 5) {
    uVar16 = uVar16 & 0xfffffffffffffff8;
  }
  else {
    uVar16 = FUN_146799574(uVar16);
  }
  plVar21 = *(longlong **)(uVar16 + 0x18);
  if (((*(byte *)(*plVar21 + 4) & 1) == 0) &&
     (uVar22 = (ulonglong)*(uint *)((longlong)plVar21 + 0x24), uVar22 != 0)) {
    uVar15 = plVar21[1];
    if (uVar15 != 0) {
      uVar12 = uVar15 & 0xfffffffffe000000;
      uVar15 = (ulonglong)((uint)uVar15 & 0x1ffffff);
      uVar17 = uVar15 - 0x4008 >> 0xe;
      uVar15 = (uVar15 + uVar22 * 4) - 0x4001 >> 0xe;
      do {
        uVar20 = *(ulonglong *)(uVar12 + 0x18 + uVar17 * 8);
        uVar11 = (uint)uVar20 & 7;
        if (uVar11 == 2) break;
        if (uVar11 == 1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        if ((uVar20 & 7) == 0) break;
        puVar1 = (ulonglong *)(uVar12 + 0x18 + uVar17 * 8);
        LOCK();
        bVar23 = uVar20 == *puVar1;
        if (bVar23) {
          *puVar1 = uVar20 & 0xfffffffffffffff8 | 2;
        }
        UNLOCK();
      } while (!bVar23);
      if (uVar17 != uVar15) {
        do {
          uVar17 = *(ulonglong *)(uVar12 + 0x18 + uVar15 * 8);
          if (((uint)uVar17 & 7) < 3) break;
          puVar1 = (ulonglong *)(uVar12 + 0x18 + uVar15 * 8);
          LOCK();
          bVar23 = uVar17 == *puVar1;
          if (bVar23) {
            *puVar1 = uVar17 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar23);
      }
    }
    uVar15 = plVar21[2];
    if (uVar15 != 0) {
      uVar12 = uVar15 & 0xfffffffffe000000;
      uVar15 = (ulonglong)((uint)uVar15 & 0x1ffffff);
      uVar17 = uVar15 - 0x4008 >> 0xe;
      uVar22 = (uVar15 + uVar22 * 4) - 0x4001 >> 0xe;
      do {
        uVar15 = *(ulonglong *)(uVar12 + 0x18 + uVar17 * 8);
        uVar11 = (uint)uVar15 & 7;
        if (uVar11 == 2) break;
        if (uVar11 == 1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        if ((uVar15 & 7) == 0) break;
        puVar1 = (ulonglong *)(uVar12 + 0x18 + uVar17 * 8);
        LOCK();
        bVar23 = uVar15 == *puVar1;
        if (bVar23) {
          *puVar1 = uVar15 & 0xfffffffffffffff8 | 2;
        }
        UNLOCK();
      } while (!bVar23);
      if (uVar17 != uVar22) {
        do {
          uVar15 = *(ulonglong *)(uVar12 + 0x18 + uVar22 * 8);
          if (((uint)uVar15 & 7) < 3) break;
          puVar1 = (ulonglong *)(uVar12 + 0x18 + uVar22 * 8);
          LOCK();
          bVar23 = uVar15 == *puVar1;
          if (bVar23) {
            *puVar1 = uVar15 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar23);
      }
    }
  }
  lVar14 = (ulonglong)*(uint *)((longlong)plVar21 + 0x1c) * 8 + DAT_14c80ad08;
  if (lVar14 != 0 && (ulonglong)*(uint *)((longlong)plVar21 + 0x1c) != 0) {
    lVar19 = (ulonglong)*(uint *)(lVar14 + 8) * 8 + DAT_14c80ad08;
    if ((ulonglong)*(uint *)(lVar14 + 8) == 0) {
      lVar19 = 0;
    }
    if ((ulonglong)*(uint *)(lVar14 + 0xc) != 0) {
      if (lVar19 == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      uVar15 = (lVar19 - DAT_14c80acf8) - 8U >> 0xe;
      uVar22 = ((lVar19 - DAT_14c80acf8) + (ulonglong)*(uint *)(lVar14 + 0xc) * 0x10) - 1 >> 0xe;
      do {
        uVar12 = *(ulonglong *)(&DAT_14c8084f8 + uVar15 * 8);
        uVar11 = (uint)uVar12 & 7;
        if (uVar11 == 2) break;
        if (uVar11 == 1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        if ((uVar12 & 7) == 0) break;
        LOCK();
        bVar23 = uVar12 == *(ulonglong *)(&DAT_14c8084f8 + uVar15 * 8);
        if (bVar23) {
          *(ulonglong *)(&DAT_14c8084f8 + uVar15 * 8) = uVar12 & 0xfffffffffffffff8 | 2;
        }
        UNLOCK();
      } while (!bVar23);
      if (uVar15 != uVar22) {
        do {
          uVar15 = *(ulonglong *)(&DAT_14c8084f8 + uVar22 * 8);
          if (((uint)uVar15 & 7) < 3) break;
          LOCK();
          bVar23 = uVar15 == *(ulonglong *)(&DAT_14c8084f8 + uVar22 * 8);
          if (bVar23) {
            *(ulonglong *)(&DAT_14c8084f8 + uVar22 * 8) = uVar15 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar23);
      }
    }
  }
  *(undefined2 *)(param_1 + 1) = 0x100;
  cVar9 = FUN_146790ea6();
  if ((cVar9 != '\0') &&
     (BVar10 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8), BVar10 != '\0')) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  if (*(ulonglong *)(param_1 + 0x20) == 0) {
    uVar15 = 0;
    uVar22 = 0;
  }
  else {
    uVar15 = *(ulonglong *)(param_1 + 0x20) & 0xffffffffffffc000;
    uVar22 = *(ulonglong *)(uVar15 + 0x20);
    if ((uVar22 & 6) != 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar12 = uVar16 | 5;
  if (uVar16 == 0) {
    uVar12 = 0;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(ulonglong *)(param_1 + 0x38) = uVar12;
  *(undefined1 *)(param_1 + 8) = 4;
  if (uVar22 == 0) {
LAB_1467a0b97:
    uVar12 = FUN_146798201(uVar16);
    lVar14 = DAT_14c80ad08;
    if (uVar12 == 0) {
LAB_1467a0ea7:
      uVar12 = 0;
    }
    else {
      uVar11 = (uint)uVar12 & 7;
      if (1 < uVar11) {
        if (uVar11 != 4) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      plVar21 = (longlong *)(uVar12 & 0xfffffffffffffff8);
      if (*(char *)((longlong)plVar21 + 0xb) == '\0') {
        uVar8 = *(uint3 *)(plVar21 + 1);
        if (*plVar21 == 0) {
          cVar9 = *(char *)(DAT_14c80ad08 + 0xd + (ulonglong)uVar8 * 8);
          if (cVar9 != '\x01') {
            if (cVar9 != '\x02') {
              if (cVar9 != '\0') {
                    /* WARNING: Does not return */
                pcVar7 = (code *)invalidInstructionException();
                (*pcVar7)();
              }
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            local_78 = 0;
            FUN_14678ec28(0x4000,&DAT_149dfd490,1,0);
            lVar14 = *plVar21;
            if (lVar14 != 0) goto LAB_1467a0c4e;
          }
          FUN_14678f287(local_58);
          do {
            if (*plVar21 != 0) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            uVar24 = FUN_14678f28e(local_58);
            lVar14 = FUN_1467a0a06(uVar24,0,1);
            *plVar21 = lVar14;
            cVar9 = FUN_14678f2c1(local_58);
          } while (cVar9 == '\0');
          lVar14 = *plVar21;
          if (lVar14 == 0) goto LAB_1467a0ea7;
        }
        else {
          BVar10 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
          if (BVar10 != '\0') {
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          cVar9 = *(char *)(lVar14 + 0xd + (ulonglong)uVar8 * 8);
          if (cVar9 != '\x01') {
            if (cVar9 != '\x02') {
              if (cVar9 != '\0') {
                    /* WARNING: Does not return */
                pcVar7 = (code *)invalidInstructionException();
                (*pcVar7)();
              }
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            local_78 = 0;
            FUN_14678ec28(0x4000,&DAT_149dfd490,1,local_58);
          }
          FUN_14678d48b(*plVar21,&DAT_149dfd490);
          lVar14 = *plVar21;
        }
LAB_1467a0c4e:
        FUN_146794f45(lVar14,(longlong)plVar21 + 1,0,&DAT_149dfd490);
        *(undefined1 *)((longlong)plVar21 + 0xb) = 1;
      }
    }
    if (uVar22 != 0) {
      uVar11 = (uint)uVar22 & 7;
      if (uVar11 < 2) {
        cVar9 = *(char *)(uVar15 + 2);
        if (cVar9 == '\x01') {
          *(undefined1 *)(uVar15 + 2) = 0;
        }
        lVar19 = (ulonglong)
                 ((uint)*(byte *)((uVar22 & 0xfffffffffffffff8) + 10) * 0x80000 +
                 (uint)*(ushort *)((uVar22 & 0xfffffffffffffff8) + 8) * 8) + DAT_14c80ad08;
        lVar14 = *(longlong *)(uVar15 + 0x18);
        *(undefined1 *)(uVar15 + 1) = 0;
        if (cVar9 != '\0') {
          FUN_146791662(lVar19);
        }
        if (lVar14 == 0) {
          FUN_146791740(lVar19);
        }
      }
      else {
        if (uVar11 != 4) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        uVar22 = uVar22 & 0xfffffffffffffff8;
        uVar20 = (ulonglong)
                 ((uint)*(byte *)(uVar22 + 10) * 0x80000 + (uint)*(ushort *)(uVar22 + 8) * 8);
        uVar17 = *(ulonglong *)(uVar20 + DAT_14c80ad08);
        if ((uVar17 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        if ((*(byte *)(uVar22 + 0x11) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        bVar2 = *(byte *)(uVar22 + 0xd);
        uVar4 = *(ushort *)(uVar22 + 0xb);
        local_60 = *(undefined8 *)((uVar17 & 0xfffffffffffffffe) + 8);
        lVar14 = DAT_14c80ad08;
        if (*(PSRWLOCK *)(uVar15 + 8) != (PSRWLOCK)0x0) {
          local_68 = DAT_14c80ad08;
          BVar10 = TryAcquireSRWLockExclusive(*(PSRWLOCK *)(uVar15 + 8));
          lVar14 = local_68;
          if (BVar10 != '\0') {
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
        }
        lVar19 = uVar20 + lVar14;
        if (*(int *)(lVar19 + 0x24) == 1) {
          bVar23 = *(longlong *)(uVar15 + 0x18) == 0;
        }
        else {
          bVar23 = false;
        }
        bVar3 = *(byte *)(uVar22 + 0x11);
        *(byte *)(uVar22 + 0x11) = bVar3 & 0xfc;
        iVar6 = *(int *)(lVar19 + 0x24);
        if ((bVar3 & 2) == 0) {
          if (iVar6 == 0) {
LAB_1467a11e5:
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          *(int *)(lVar19 + 0x24) = iVar6 + -1;
        }
        else {
          if (iVar6 == 0) goto LAB_1467a11e5;
          *(int *)(lVar19 + 0x24) = iVar6 + -1;
          if ((*(byte *)(uVar22 + 0x11) & 4) == 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          FUN_146791720((ulonglong)((uint)bVar2 * 0x80000 + (uint)uVar4 * 8) + lVar14);
        }
        if (bVar23) {
          if (*(int *)(lVar19 + 0x24) != 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          FUN_1467918b2(local_60);
        }
      }
    }
    if (uVar12 == 0) {
      uVar13 = 0;
      goto LAB_1467a0ff6;
    }
    if ((uVar12 & 6) != 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    uVar15 = *(ulonglong *)(uVar12 & 0xfffffffffffffff8);
    *(undefined1 *)(uVar15 + 1) = 1;
    *(ulonglong *)(uVar15 + 0x20) = uVar12 | 1;
  }
  else {
    if ((uVar22 & 7) != 0) {
      if (((uint)uVar22 & 7) == 4) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      goto LAB_1467a0b97;
    }
    *(ulonglong *)(uVar15 + 0x20) = uVar22 | 1;
    *(undefined1 *)(uVar15 + 2) = 0;
  }
  lVar14 = DAT_14c80ad08;
  if (*(longlong *)(uVar15 + 0x18) == 0) {
    uVar16 = (ulonglong)*(uint *)(uVar16 + 0x30);
    uVar11 = *(uint *)(DAT_14c80ad08 + 4 + uVar16 * 8);
    iVar6 = *(int *)(DAT_14c80ad08 + uVar16 * 8);
    *(ulonglong *)(uVar15 + 0x18) = (ulonglong)*(uint *)(DAT_14c80ad08 + 8 + uVar16 * 8);
    *(ulonglong *)(param_1 + 0x10) = uVar11 + uVar15;
    *(uint *)(param_1 + 0x18) = uVar11 - iVar6;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(ulonglong *)(param_1 + 0x20) = uVar15;
    uVar16 = (ulonglong)*(uint *)(lVar14 + 0xc + uVar16 * 8);
    if (uVar16 < 8) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    memcpy((void *)(uVar15 + 0x2c),(void *)(uVar16 + DAT_14c80ad08),0x100);
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    uVar22 = (ulonglong)*(uint *)(uVar16 + 0x30);
    uVar12 = (ulonglong)*(uint *)(DAT_14c80ad08 + 0xc + uVar22 * 8);
    if (uVar12 < 8) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    uVar11 = *(uint *)(DAT_14c80ad08 + uVar22 * 8);
    uVar18 = uVar11 >> 9;
    uVar5 = *(uint *)(DAT_14c80ad08 + 4 + uVar22 * 8);
    lVar19 = uVar12 + DAT_14c80ad08;
    *(uint *)(param_1 + 0x28) = uVar18;
    *(uint *)(param_1 + 0x2c) = ((uVar5 >> 3) - 1 >> 6) + 1;
    lVar14 = 0;
    memset((void *)(param_1 + 0x40),0,0x100);
    *(ulonglong *)(param_1 + 0x20) = (uVar11 & 0xfffffe00) + uVar15;
    do {
      uVar11 = *(uint *)(lVar19 + lVar14 * 4);
      uVar5 = *(uint *)(uVar15 + 0x2c + lVar14 * 4);
      *(uint *)(param_1 + 0x40 + lVar14 * 4) = ~uVar5 & uVar11;
      *(uint *)(uVar15 + 0x2c + lVar14 * 4) = uVar5 | uVar11;
      lVar14 = lVar14 + 1;
    } while (lVar14 != 0x40);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x40 + (ulonglong)uVar18 * 8);
    *(undefined1 *)(param_1 + 0xc) = 1;
    *(ulonglong *)(uVar15 + 0x18) =
         (ulonglong)*(uint *)(DAT_14c80ad08 + 8 + (ulonglong)*(uint *)(uVar16 + 0x30) * 8);
  }
  uVar13 = 1;
LAB_1467a0ff6:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 1467a1279 FUN_1467a1279 body=1113 status=ok
// SIG undefined FUN_1467a1279(void)

void FUN_1467a1279(longlong param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  ulonglong local_48;
  
  uVar7 = (uint)param_2;
  if ((uVar7 & 7) < 2) {
    if (((uint)(int)*(char *)(param_1 + 8) < 0xe) &&
       ((0x2aa8U >> ((int)*(char *)(param_1 + 8) & 0x1fU) & 1) != 0)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x18);
    if (uVar11 != 0) {
      uVar10 = *(ulonglong *)(param_1 + 0x10);
      uVar8 = uVar10 - uVar11;
      if (uVar11 <= uVar10) {
        uVar6 = *(uint *)(param_1 + 0x1c);
        do {
          uVar11 = (ulonglong)((uint)(uVar8 >> 6) & 0xfc);
          uVar9 = *(uint *)(param_3 + 0x2c + uVar11) &
                  ~(1 << ((uint)((uVar8 & 0xffffffff) >> 3) & 0x1f));
          *(uint *)(param_3 + 0x2c + uVar11) = uVar9;
          if ((*(ulonglong *)(param_3 + 0x20) & 7) != 0) {
            uVar11 = *(ulonglong *)(param_3 + 0x20) & 0xfffffffffffffff8;
            if (*(char *)(param_3 + 1) == '\x01') {
              *(undefined1 *)(param_3 + 2) = 1;
            }
            else {
              FUN_146791662((ulonglong)
                            ((uint)*(byte *)(uVar11 + 10) * 0x80000 +
                            (uint)*(ushort *)(uVar11 + 8) * 8) + DAT_14c80ad08,
                            *(undefined4 *)(uVar11 + 0xc));
            }
            *(ulonglong *)(param_3 + 0x20) = uVar11;
          }
          if (uVar9 == 0) {
            lVar4 = *(longlong *)(param_3 + 0x18) + -1;
            if (lVar4 == 0) {
              FUN_146795211(param_3,0);
            }
            else {
              *(longlong *)(param_3 + 0x18) = lVar4;
            }
          }
          uVar8 = uVar8 + uVar6;
        } while (uVar8 < uVar10);
      }
    }
    if (*(uint *)(param_1 + 0x28) != *(uint *)(param_1 + 0x2c)) {
      *(undefined8 *)(param_1 + 0x40 + (ulonglong)*(uint *)(param_1 + 0x28) * 8) =
           *(undefined8 *)(param_1 + 0x30);
      if (((uint)(int)*(char *)(param_1 + 8) < 0xe) &&
         ((0x2aa8U >> ((int)*(char *)(param_1 + 8) & 0x1fU) & 1) != 0)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if ((param_2 & 6) == 0) {
        uVar11 = (ulonglong)
                 *(uint *)(DAT_14c80ad08 + 0xc + (ulonglong)*(uint *)(param_4 + 0x30) * 8);
        if (uVar11 < 8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        lVar4 = DAT_14c80ad08 + uVar11;
        local_48 = 0x40;
        uVar11 = 0;
      }
      else {
        if ((uVar7 & 7) != 4) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        plVar5 = (longlong *)(param_2 & 0xfffffffffffffff8);
        if ((ulonglong)*(byte *)((longlong)plVar5 + 0xf) == 0) {
          return;
        }
        uVar11 = (ulonglong)*(byte *)(plVar5 + 2);
        local_48 = *(byte *)((longlong)plVar5 + 0xf) + uVar11;
        lVar4 = *plVar5;
      }
      do {
        uVar7 = *(uint *)(param_1 + 0x40 + uVar11 * 4) & *(uint *)(lVar4 + uVar11 * 4);
        if (uVar7 != 0) {
          uVar10 = (ulonglong)((uint)uVar11 & 0x3f);
          do {
            uVar6 = -uVar7 & uVar7;
            uVar9 = ~uVar6 & *(uint *)(param_3 + 0x2c + uVar10 * 4);
            *(uint *)(param_3 + 0x2c + uVar10 * 4) = uVar9;
            if ((*(ulonglong *)(param_3 + 0x20) & 7) != 0) {
              uVar8 = *(ulonglong *)(param_3 + 0x20) & 0xfffffffffffffff8;
              if (*(char *)(param_3 + 1) == '\x01') {
                *(undefined1 *)(param_3 + 2) = 1;
              }
              else {
                FUN_146791662((ulonglong)
                              ((uint)*(byte *)(uVar8 + 10) * 0x80000 +
                              (uint)*(ushort *)(uVar8 + 8) * 8) + DAT_14c80ad08,
                              *(undefined4 *)(uVar8 + 0xc));
              }
              *(ulonglong *)(param_3 + 0x20) = uVar8;
            }
            if (uVar9 == 0) {
              lVar3 = *(longlong *)(param_3 + 0x18) + -1;
              if (lVar3 == 0) {
                FUN_146795211(param_3,0);
              }
              else {
                *(longlong *)(param_3 + 0x18) = lVar3;
              }
            }
            bVar12 = uVar6 != uVar7;
            uVar7 = uVar6 ^ uVar7;
          } while (bVar12);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != local_48);
    }
  }
  else {
    if ((uVar7 & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (((uint)(int)*(char *)(param_1 + 8) < 0xe) &&
       ((0x2aa8U >> ((int)*(char *)(param_1 + 8) & 0x1fU) & 1) != 0)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x18);
    if (uVar11 != 0) {
      uVar10 = *(ulonglong *)(param_1 + 0x10);
      uVar8 = uVar10 - uVar11;
      if (uVar11 <= uVar10) {
        uVar6 = *(uint *)(param_1 + 0x1c);
        do {
          uVar11 = (ulonglong)((uint)(uVar8 >> 8) & 0x3f);
          uVar9 = *(uint *)(param_3 + 0x2c + uVar11 * 4) &
                  ~(1 << ((uint)((uVar8 & 0xffffffff) >> 3) & 0x1f));
          *(uint *)(param_3 + 0x2c + uVar11 * 4) = uVar9;
          if (((uint)*(ulonglong *)(param_3 + 0x20) & 7) != 3) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          uVar11 = (ulonglong)
                   *(uint *)((*(ulonglong *)(param_3 + 0x20) & 0xfffffffffffffff8) + 0x14 +
                            uVar11 * 4);
          lVar4 = uVar11 * 8 + DAT_14c80ad08;
          if (uVar11 == 0) {
            lVar4 = 0;
          }
          if ((*(byte *)(lVar4 + 0x11) & 4) == 0) {
            FUN_146795935(lVar4,param_3);
          }
          if (uVar9 == 0) {
            lVar4 = *(longlong *)(param_3 + 0x18) + -1;
            if (lVar4 == 0) {
              FUN_146795211(param_3,0);
            }
            else {
              *(longlong *)(param_3 + 0x18) = lVar4;
            }
          }
          uVar8 = uVar8 + uVar6;
        } while (uVar8 < uVar10);
      }
    }
    if (*(uint *)(param_1 + 0x28) != *(uint *)(param_1 + 0x2c)) {
      *(undefined8 *)(param_1 + 0x40 + (ulonglong)*(uint *)(param_1 + 0x28) * 8) =
           *(undefined8 *)(param_1 + 0x30);
      if (((uint)(int)*(char *)(param_1 + 8) < 0xe) &&
         ((0x2aa8U >> ((int)*(char *)(param_1 + 8) & 0x1fU) & 1) != 0)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if ((param_2 & 6) == 0) {
        uVar11 = (ulonglong)
                 *(uint *)(DAT_14c80ad08 + 0xc + (ulonglong)*(uint *)(param_4 + 0x30) * 8);
        if (uVar11 < 8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        lVar4 = DAT_14c80ad08 + uVar11;
        uVar11 = 0x40;
        uVar10 = 0;
      }
      else {
        if ((uVar7 & 7) != 4) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        plVar5 = (longlong *)(param_2 & 0xfffffffffffffff8);
        if ((ulonglong)*(byte *)((longlong)plVar5 + 0xf) == 0) {
          return;
        }
        uVar10 = (ulonglong)*(byte *)(plVar5 + 2);
        uVar11 = *(byte *)((longlong)plVar5 + 0xf) + uVar10;
        lVar4 = *plVar5;
      }
      do {
        uVar7 = *(uint *)(param_1 + 0x40 + uVar10 * 4) & *(uint *)(lVar4 + uVar10 * 4);
        if (uVar7 != 0) {
          uVar8 = (ulonglong)((uint)uVar10 & 0x3f);
          do {
            uVar9 = -uVar7 & uVar7;
            uVar6 = ~uVar9 & *(uint *)(param_3 + 0x2c + uVar8 * 4);
            *(uint *)(param_3 + 0x2c + uVar8 * 4) = uVar6;
            if (((uint)*(ulonglong *)(param_3 + 0x20) & 7) != 3) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            uVar2 = (ulonglong)
                    *(uint *)((*(ulonglong *)(param_3 + 0x20) & 0xfffffffffffffff8) + 0x14 +
                             uVar8 * 4);
            lVar3 = uVar2 * 8 + DAT_14c80ad08;
            if (uVar2 == 0) {
              lVar3 = 0;
            }
            if ((*(byte *)(lVar3 + 0x11) & 4) == 0) {
              FUN_146795935(lVar3,param_3);
            }
            if (uVar6 == 0) {
              lVar3 = *(longlong *)(param_3 + 0x18) + -1;
              if (lVar3 == 0) {
                FUN_146795211(param_3,0);
              }
              else {
                *(longlong *)(param_3 + 0x18) = lVar3;
              }
            }
            bVar12 = uVar9 != uVar7;
            uVar7 = uVar9 ^ uVar7;
          } while (bVar12);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar11);
    }
  }
  return;
}



// FUNCTION 1467a16e5 FUN_1467a16e5 body=2424 status=ok
// SIG undefined FUN_1467a16e5(void)

undefined8 FUN_1467a16e5(undefined8 param_1,char *param_2,undefined8 param_3,code *param_4)

{
  char *pcVar1;
  ulonglong *puVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  uint3 uVar9;
  char cVar10;
  BOOLEAN BVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  code *local_a0;
  uint *local_98;
  undefined8 local_90;
  ulonglong local_88;
  undefined8 local_80;
  char *local_78;
  longlong local_70;
  undefined1 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_2[3] & 0x7fU) != 2) {
    param_2[3] = param_2[3] & 0x80U | 2;
  }
  if (*param_2 != '\x01') {
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  local_98 = (uint *)(param_2 + 0x28);
  local_78 = param_2 + 0x48;
  do {
    uVar18 = *(ulonglong *)(param_2 + 0x38);
    if (((uint)uVar18 & 7) == 5) {
      uVar18 = uVar18 & 0xfffffffffffffff8;
    }
    else {
      uVar18 = FUN_146799574(uVar18);
    }
    plVar19 = *(longlong **)(uVar18 + 0x18);
    if (((*(byte *)(*plVar19 + 4) & 1) == 0) &&
       (uVar22 = (ulonglong)*(uint *)((longlong)plVar19 + 0x24), uVar22 != 0)) {
      uVar15 = plVar19[1];
      if (uVar15 != 0) {
        uVar13 = uVar15 & 0xfffffffffe000000;
        uVar15 = (ulonglong)((uint)uVar15 & 0x1ffffff);
        uVar17 = uVar15 - 0x4008 >> 0xe;
        uVar15 = (uVar15 + uVar22 * 4) - 0x4001 >> 0xe;
        do {
          uVar21 = *(ulonglong *)(uVar13 + 0x18 + uVar17 * 8);
          uVar12 = (uint)uVar21 & 7;
          if (uVar12 == 2) break;
          if (uVar12 == 1) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          if ((uVar21 & 7) == 0) break;
          puVar2 = (ulonglong *)(uVar13 + 0x18 + uVar17 * 8);
          LOCK();
          bVar23 = uVar21 == *puVar2;
          if (bVar23) {
            *puVar2 = uVar21 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar23);
        if (uVar17 != uVar15) {
          do {
            uVar17 = *(ulonglong *)(uVar13 + 0x18 + uVar15 * 8);
            if (((uint)uVar17 & 7) < 3) break;
            puVar2 = (ulonglong *)(uVar13 + 0x18 + uVar15 * 8);
            LOCK();
            bVar23 = uVar17 == *puVar2;
            if (bVar23) {
              *puVar2 = uVar17 & 0xfffffffffffffff8 | 2;
            }
            UNLOCK();
          } while (!bVar23);
        }
      }
      uVar15 = plVar19[2];
      if (uVar15 != 0) {
        uVar13 = uVar15 & 0xfffffffffe000000;
        uVar15 = (ulonglong)((uint)uVar15 & 0x1ffffff);
        uVar17 = uVar15 - 0x4008 >> 0xe;
        uVar22 = (uVar15 + uVar22 * 4) - 0x4001 >> 0xe;
        do {
          uVar15 = *(ulonglong *)(uVar13 + 0x18 + uVar17 * 8);
          uVar12 = (uint)uVar15 & 7;
          if (uVar12 == 2) break;
          if (uVar12 == 1) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          if ((uVar15 & 7) == 0) break;
          puVar2 = (ulonglong *)(uVar13 + 0x18 + uVar17 * 8);
          LOCK();
          bVar23 = uVar15 == *puVar2;
          if (bVar23) {
            *puVar2 = uVar15 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar23);
        if (uVar17 != uVar22) {
          do {
            uVar15 = *(ulonglong *)(uVar13 + 0x18 + uVar22 * 8);
            if (((uint)uVar15 & 7) < 3) break;
            puVar2 = (ulonglong *)(uVar13 + 0x18 + uVar22 * 8);
            LOCK();
            bVar23 = uVar15 == *puVar2;
            if (bVar23) {
              *puVar2 = uVar15 & 0xfffffffffffffff8 | 2;
            }
            UNLOCK();
          } while (!bVar23);
        }
      }
    }
    lVar14 = (ulonglong)*(uint *)((longlong)plVar19 + 0x1c) * 8 + DAT_14c80ad08;
    if (lVar14 != 0 && (ulonglong)*(uint *)((longlong)plVar19 + 0x1c) != 0) {
      lVar20 = (ulonglong)*(uint *)(lVar14 + 8) * 8 + DAT_14c80ad08;
      if ((ulonglong)*(uint *)(lVar14 + 8) == 0) {
        lVar20 = 0;
      }
      if ((ulonglong)*(uint *)(lVar14 + 0xc) != 0) {
        if (lVar20 == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        uVar15 = (lVar20 - DAT_14c80acf8) - 8U >> 0xe;
        uVar22 = ((lVar20 - DAT_14c80acf8) + (ulonglong)*(uint *)(lVar14 + 0xc) * 0x10) - 1 >> 0xe;
        do {
          uVar13 = *(ulonglong *)(&DAT_14c8084f8 + uVar15 * 8);
          uVar12 = (uint)uVar13 & 7;
          if (uVar12 == 2) break;
          if (uVar12 == 1) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          if ((uVar13 & 7) == 0) break;
          LOCK();
          bVar23 = uVar13 == *(ulonglong *)(&DAT_14c8084f8 + uVar15 * 8);
          if (bVar23) {
            *(ulonglong *)(&DAT_14c8084f8 + uVar15 * 8) = uVar13 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar23);
        if (uVar15 != uVar22) {
          do {
            uVar15 = *(ulonglong *)(&DAT_14c8084f8 + uVar22 * 8);
            if (((uint)uVar15 & 7) < 3) break;
            LOCK();
            bVar23 = uVar15 == *(ulonglong *)(&DAT_14c8084f8 + uVar22 * 8);
            if (bVar23) {
              *(ulonglong *)(&DAT_14c8084f8 + uVar22 * 8) = uVar15 & 0xfffffffffffffff8 | 2;
            }
            UNLOCK();
          } while (!bVar23);
        }
      }
    }
    param_2[1] = '\0';
    param_2[2] = '\x01';
    cVar10 = FUN_146790ea6();
    if ((cVar10 != '\0') &&
       (BVar11 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8), BVar11 != '\0')) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    if (*(ulonglong *)(param_2 + 0x20) == 0) {
      uVar15 = 0;
      uVar22 = 0;
    }
    else {
      uVar15 = *(ulonglong *)(param_2 + 0x20) & 0xffffffffffffc000;
      uVar22 = *(ulonglong *)(uVar15 + 0x20);
      if ((uVar22 & 6) != 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
    }
    param_2[0x20] = '\0';
    param_2[0x21] = '\0';
    param_2[0x22] = '\0';
    param_2[0x23] = '\0';
    param_2[0x24] = '\0';
    param_2[0x25] = '\0';
    param_2[0x26] = '\0';
    param_2[0x27] = '\0';
    param_2[0xc] = '\0';
    param_2[0x10] = '\0';
    param_2[0x11] = '\0';
    param_2[0x12] = '\0';
    param_2[0x13] = '\0';
    param_2[0x14] = '\0';
    param_2[0x15] = '\0';
    param_2[0x16] = '\0';
    param_2[0x17] = '\0';
    param_2[0x18] = '\0';
    param_2[0x19] = '\0';
    param_2[0x1a] = '\0';
    param_2[0x1b] = '\0';
    uVar13 = uVar18 | 5;
    if (uVar18 == 0) {
      uVar13 = 0;
    }
    local_98[0] = 0;
    local_98[1] = 0;
    local_98[2] = 0;
    local_98[3] = 0;
    *(ulonglong *)(param_2 + 0x38) = uVar13;
    param_2[8] = '\x04';
    if (uVar22 == 0) {
LAB_1467a1827:
      local_90 = param_1;
      uVar13 = FUN_146798201();
      lVar14 = DAT_14c80ad08;
      if (uVar13 == 0) {
LAB_1467a19d1:
        uVar13 = 0;
      }
      else {
        uVar12 = (uint)uVar13 & 7;
        if (1 < uVar12) {
          if (uVar12 != 4) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        plVar19 = (longlong *)(uVar13 & 0xfffffffffffffff8);
        if (*(char *)((longlong)plVar19 + 0xb) == '\0') {
          uVar9 = *(uint3 *)(plVar19 + 1);
          local_a0 = param_4;
          if (*plVar19 == 0) {
            cVar10 = *(char *)(DAT_14c80ad08 + 0xd + (ulonglong)uVar9 * 8);
            if (cVar10 != '\x01') {
              if (cVar10 != '\x02') {
                if (cVar10 != '\0') {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)invalidInstructionException();
                  (*pcVar8)();
                }
                    /* WARNING: Does not return */
                pcVar8 = (code *)invalidInstructionException();
                (*pcVar8)();
              }
              local_a8 = 0;
              FUN_14678ec28(0x4000,&DAT_149dfd490,1,0);
              lVar14 = *plVar19;
              if (lVar14 != 0) goto LAB_1467a1b9f;
            }
            FUN_14678f287(&local_70);
            do {
              if (*plVar19 != 0) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)invalidInstructionException();
                (*pcVar8)();
              }
              FUN_14678f28e(&local_70);
              lVar14 = FUN_1467a0a06();
              *plVar19 = lVar14;
              cVar10 = FUN_14678f2c1(&local_70);
            } while (cVar10 == '\0');
            lVar14 = *plVar19;
            if (lVar14 == 0) goto LAB_1467a19d1;
          }
          else {
            BVar11 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
            param_4 = local_a0;
            if (BVar11 != '\0') {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            cVar10 = *(char *)(lVar14 + 0xd + (ulonglong)uVar9 * 8);
            if (cVar10 != '\x01') {
              if (cVar10 != '\x02') {
                if (cVar10 != '\0') {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)invalidInstructionException();
                  (*pcVar8)();
                }
                    /* WARNING: Does not return */
                pcVar8 = (code *)invalidInstructionException();
                (*pcVar8)();
              }
              local_a8 = 0;
              FUN_14678ec28(0x4000,&DAT_149dfd490,1,&local_70);
            }
            FUN_14678d48b(*plVar19,&DAT_149dfd490);
            lVar14 = *plVar19;
          }
LAB_1467a1b9f:
          FUN_146794f45(lVar14,(longlong)plVar19 + 1,0);
          *(undefined1 *)((longlong)plVar19 + 0xb) = 1;
        }
      }
      lVar14 = DAT_14c80ad08;
      if (uVar22 != 0) {
        uVar12 = (uint)uVar22 & 7;
        if (uVar12 < 2) {
          cVar10 = *(char *)(uVar15 + 2);
          if (cVar10 == '\x01') {
            *(undefined1 *)(uVar15 + 2) = 0;
          }
          uVar22 = uVar22 & 0xfffffffffffffff8;
          lVar20 = (ulonglong)
                   ((uint)*(byte *)(uVar22 + 10) * 0x80000 + (uint)*(ushort *)(uVar22 + 8) * 8) +
                   DAT_14c80ad08;
          uVar5 = *(undefined4 *)(uVar22 + 0xc);
          lVar14 = *(longlong *)(uVar15 + 0x18);
          *(undefined1 *)(uVar15 + 1) = 0;
          if (cVar10 != '\0') {
            FUN_146791662(lVar20,uVar5);
          }
          if (lVar14 == 0) {
            FUN_146791740(lVar20,uVar5);
          }
        }
        else {
          if (uVar12 != 4) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          uVar22 = uVar22 & 0xfffffffffffffff8;
          uVar21 = (ulonglong)
                   ((uint)*(byte *)(uVar22 + 10) * 0x80000 + (uint)*(ushort *)(uVar22 + 8) * 8);
          uVar17 = *(ulonglong *)(uVar21 + DAT_14c80ad08);
          if ((uVar17 & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          local_a0 = param_4;
          if ((*(byte *)(uVar22 + 0x11) & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          uVar12 = (uint)*(byte *)(uVar22 + 0xd);
          uVar4 = *(ushort *)(uVar22 + 0xb);
          local_80 = *(undefined8 *)((uVar17 & 0xfffffffffffffffe) + 8);
          if (*(PSRWLOCK *)(uVar15 + 8) != (PSRWLOCK)0x0) {
            local_88 = (ulonglong)*(byte *)(uVar22 + 0xd);
            BVar11 = TryAcquireSRWLockExclusive(*(PSRWLOCK *)(uVar15 + 8));
            uVar12 = (uint)local_88;
            if (BVar11 != '\0') {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
          }
          uVar21 = uVar21 + lVar14;
          if (*(int *)(uVar21 + 0x24) == 1) {
            bVar23 = *(longlong *)(uVar15 + 0x18) == 0;
          }
          else {
            bVar23 = false;
          }
          bVar3 = *(byte *)(uVar22 + 0x11);
          *(byte *)(uVar22 + 0x11) = bVar3 & 0xfc;
          iVar7 = *(int *)(uVar21 + 0x24);
          if ((bVar3 & 2) == 0) {
            if (iVar7 == 0) {
LAB_1467a1f43:
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            *(int *)(uVar21 + 0x24) = iVar7 + -1;
          }
          else {
            if (iVar7 == 0) goto LAB_1467a1f43;
            *(int *)(uVar21 + 0x24) = iVar7 + -1;
            if ((*(byte *)(uVar22 + 0x11) & 4) == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            FUN_146791720((ulonglong)(uVar12 * 0x80000 + (uint)uVar4 * 8) + lVar14,uVar22 | 4);
          }
          param_4 = local_a0;
          if (bVar23) {
            if (*(int *)(uVar21 + 0x24) != 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            FUN_1467918b2(local_80,uVar21 | 2);
          }
        }
      }
      param_1 = local_90;
      if (uVar13 == 0) {
        local_70 = 0;
        local_68 = 0;
        goto LAB_1467a1ea3;
      }
      if ((uVar13 & 6) != 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      uVar15 = *(ulonglong *)(uVar13 & 0xfffffffffffffff8);
      *(undefined1 *)(uVar15 + 1) = 1;
      *(ulonglong *)(uVar15 + 0x20) = uVar13 | 1;
    }
    else {
      if ((uVar22 & 7) != 0) {
        if (((uint)uVar22 & 7) == 4) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        goto LAB_1467a1827;
      }
      *(ulonglong *)(uVar15 + 0x20) = uVar22 | 1;
      *(undefined1 *)(uVar15 + 2) = 0;
    }
    lVar14 = DAT_14c80ad08;
    if (*(longlong *)(uVar15 + 0x18) == 0) {
      uVar18 = (ulonglong)*(uint *)(uVar18 + 0x30);
      uVar12 = *(uint *)(DAT_14c80ad08 + 4 + uVar18 * 8);
      iVar7 = *(int *)(DAT_14c80ad08 + uVar18 * 8);
      *(ulonglong *)(uVar15 + 0x18) = (ulonglong)*(uint *)(DAT_14c80ad08 + 8 + uVar18 * 8);
      *(ulonglong *)(param_2 + 0x10) = uVar12 + uVar15;
      *(uint *)(param_2 + 0x18) = uVar12 - iVar7;
      local_98[0] = 0;
      local_98[1] = 0;
      local_98[2] = 0;
      local_98[3] = 0;
      *(ulonglong *)(param_2 + 0x20) = uVar15;
      uVar18 = (ulonglong)*(uint *)(lVar14 + 0xc + uVar18 * 8);
      if (uVar18 < 8) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      memcpy((void *)(uVar15 + 0x2c),(void *)(uVar18 + DAT_14c80ad08),0x100);
    }
    else {
      param_2[0x10] = '\0';
      param_2[0x11] = '\0';
      param_2[0x12] = '\0';
      param_2[0x13] = '\0';
      param_2[0x14] = '\0';
      param_2[0x15] = '\0';
      param_2[0x16] = '\0';
      param_2[0x17] = '\0';
      param_2[0x18] = '\0';
      param_2[0x19] = '\0';
      param_2[0x1a] = '\0';
      param_2[0x1b] = '\0';
      uVar22 = (ulonglong)*(uint *)(uVar18 + 0x30);
      uVar13 = (ulonglong)*(uint *)(DAT_14c80ad08 + 0xc + uVar22 * 8);
      if (uVar13 < 8) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      uVar12 = *(uint *)(DAT_14c80ad08 + uVar22 * 8);
      uVar16 = uVar12 >> 9;
      uVar6 = *(uint *)(DAT_14c80ad08 + 4 + uVar22 * 8);
      lVar20 = uVar13 + DAT_14c80ad08;
      *(uint *)(param_2 + 0x28) = uVar16;
      *(uint *)(param_2 + 0x2c) = ((uVar6 >> 3) - 1 >> 6) + 1;
      memset(param_2 + 0x40,0,0x100);
      *(ulonglong *)(param_2 + 0x20) = (uVar12 & 0xfffffe00) + uVar15;
      lVar14 = 0;
      do {
        uVar12 = *(uint *)(lVar20 + lVar14 * 4);
        uVar6 = *(uint *)(uVar15 + 0x2c + lVar14 * 4);
        *(uint *)(param_2 + lVar14 * 4 + 0x40) = ~uVar6 & uVar12;
        *(uint *)(uVar15 + 0x2c + lVar14 * 4) = uVar6 | uVar12;
        lVar14 = lVar14 + 1;
      } while (lVar14 != 0x40);
      *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + (ulonglong)uVar16 * 8 + 0x40);
      param_2[0xc] = '\x01';
      *(ulonglong *)(uVar15 + 0x18) =
           (ulonglong)*(uint *)(DAT_14c80ad08 + 8 + (ulonglong)*(uint *)(uVar18 + 0x30) * 8);
    }
    uVar12 = *(uint *)(param_2 + 0x18);
    if ((ulonglong)uVar12 != 0) {
      *(uint *)(param_2 + 0x18) = uVar12 - *(int *)(param_2 + 0x1c);
      local_70 = *(longlong *)(param_2 + 0x10) - (ulonglong)uVar12;
      goto LAB_1467a1ea1;
    }
    local_70 = *(longlong *)(param_2 + 0x20);
    uVar18 = *(ulonglong *)(param_2 + 0x30);
    if (uVar18 != 0) {
LAB_1467a1e91:
      uVar22 = 0;
      if (uVar18 != 0) {
        for (; (uVar18 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
        }
      }
      *(ulonglong *)(param_2 + 0x30) = uVar18 & ~(1L << (uVar22 & 0x3f));
      local_70 = local_70 + uVar22 * 8;
LAB_1467a1ea1:
      local_68 = 1;
LAB_1467a1ea3:
      *param_2 = '\0';
      local_64 = 0;
      (*param_4)(param_1);
      if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
    if (param_2[8] == '\x04') {
      uVar12 = *(uint *)(param_2 + 0x2c);
      uVar6 = *local_98;
      uVar22 = (ulonglong)uVar6;
      if (uVar6 < uVar12) {
        pcVar1 = param_2 + uVar22 * 8 + 0x40;
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        pcVar1[4] = '\0';
        pcVar1[5] = '\0';
        pcVar1[6] = '\0';
        pcVar1[7] = '\0';
        lVar14 = 0;
        while ((uVar22 - (uVar12 - 1)) + lVar14 != 0) {
          local_70 = local_70 + 0x200;
          uVar18 = *(ulonglong *)(local_78 + lVar14 * 8 + uVar22 * 8);
          lVar14 = lVar14 + 1;
          if (uVar18 != 0) {
            *(uint *)(param_2 + 0x28) = uVar6 + (int)lVar14;
            *(longlong *)(param_2 + 0x20) = local_70;
            goto LAB_1467a1e91;
          }
        }
        *local_98 = uVar12;
      }
    }
  } while( true );
}



// FUNCTION 1467a2060 FUN_1467a2060 body=183 status=ok
// SIG undefined FUN_1467a2060(void)

void FUN_1467a2060(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_2 + 0x18);
  if ((ulonglong)uVar2 == 0) {
    lVar6 = *(longlong *)(param_2 + 0x20);
    uVar8 = *(ulonglong *)(param_2 + 0x30);
    if (uVar8 == 0) {
      if (*(char *)(param_2 + 8) == '\x04') {
        uVar2 = *(uint *)(param_2 + 0x2c);
        uVar3 = *(uint *)(param_2 + 0x28);
        if (uVar3 < uVar2) {
          lVar1 = param_2 + (ulonglong)uVar3 * 8;
          *(undefined8 *)(lVar1 + 0x40) = 0;
          lVar7 = 0;
          do {
            if (((ulonglong)uVar3 - (ulonglong)(uVar2 - 1)) + lVar7 == 0) {
              *(uint *)(param_2 + 0x28) = uVar2;
              goto LAB_1467a210e;
            }
            lVar6 = lVar6 + 0x200;
            uVar8 = *(ulonglong *)(lVar1 + 0x48 + lVar7 * 8);
            lVar7 = lVar7 + 1;
          } while (uVar8 == 0);
          *(uint *)(param_2 + 0x28) = uVar3 + (int)lVar7;
          *(longlong *)(param_2 + 0x20) = lVar6;
          goto LAB_1467a20a1;
        }
      }
LAB_1467a210e:
      uVar5 = 0;
      lVar6 = 0;
      goto LAB_1467a2084;
    }
LAB_1467a20a1:
    uVar4 = 0;
    if (uVar8 != 0) {
      for (; (uVar8 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    *(ulonglong *)(param_2 + 0x30) = uVar8 & ~(1L << (uVar4 & 0x3f));
    lVar6 = lVar6 + uVar4 * 8;
  }
  else {
    *(uint *)(param_2 + 0x18) = uVar2 - *(int *)(param_2 + 0x1c);
    lVar6 = *(longlong *)(param_2 + 0x10) - (ulonglong)uVar2;
  }
  uVar5 = 1;
LAB_1467a2084:
  *(undefined1 *)(param_1 + 1) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *param_1 = lVar6;
  return;
}



// FUNCTION 1467a2117 FUN_1467a2117 body=350 status=ok
// SIG undefined FUN_1467a2117(void)

undefined8
FUN_1467a2117(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,code *param_6)

{
  char cVar1;
  code *pcVar2;
  code *unaff_R15;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  byte local_58;
  undefined2 local_57;
  undefined1 local_55;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined2 local_4c;
  undefined1 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2[3] & 0x7fU) != 2) {
    param_2[3] = param_2[3] & 0x80U | 2;
  }
  if (*param_2 != '\x01') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  cVar1 = param_2[8];
  if (cVar1 != '\x05') {
    do {
      if (0xb < (int)cVar1 - 2U) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      (**(code **)(*(longlong *)
                    (&DAT_14c758500 +
                    *(longlong *)(&DAT_149dfd908 + (ulonglong)((int)cVar1 - 2U) * 8) * 8) + 0xd8))
                (param_2,param_5);
      if (*(longlong *)(param_2 + 0x20) == 0) goto LAB_1467a21f3;
      FUN_1467a2060(&local_60,param_2);
      local_4c = local_57;
      local_4a = local_55;
      if ((local_58 & 1) != 0) {
        local_4e = local_55;
        local_50 = local_57;
        goto LAB_1467a21fa;
      }
      cVar1 = param_2[8];
      unaff_R15 = param_6;
    } while (cVar1 != '\x05');
  }
  FUN_1467a0a90();
  param_6 = unaff_R15;
LAB_1467a21f3:
  local_60 = 0;
  local_58 = 0;
  local_54 = 0;
LAB_1467a21fa:
  *param_2 = '\0';
  local_57 = local_50;
  local_55 = local_4e;
  (*param_6)(param_1);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467a2276 FUN_1467a2276 body=1027 status=ok
// SIG undefined FUN_1467a2276(void)

longlong *
FUN_1467a2276(longlong *param_1,longlong param_2,int param_3,longlong param_4,undefined8 param_5,
             undefined8 param_6,undefined **param_7,undefined4 param_8)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  PSRWLOCK SRWLock;
  ulonglong uVar5;
  PVOID pvVar6;
  ulonglong uVar7;
  PSRWLOCK pRVar8;
  PVOID pvVar9;
  longlong lVar10;
  undefined2 *puVar11;
  undefined1 auStack_98 [32];
  undefined **local_78;
  undefined2 *local_70;
  undefined2 local_68;
  undefined1 uStack_66;
  undefined5 uStack_65;
  undefined1 local_60;
  undefined2 uStack_5f;
  undefined1 uStack_5d;
  undefined4 uStack_5c;
  PSRWLOCK local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  (*(code *)0x0)();
  lVar10 = *(longlong *)(param_2 + 8);
  if (lVar10 == 0) {
    lVar10 = FUN_146788484(param_2,param_3,&PTR_LOOP_149dfd458,param_6);
  }
  puVar11 = (undefined2 *)0x0;
  if (param_3 == 1) {
    puVar11 = (undefined2 *)(param_2 + 0x18);
  }
  uVar7 = param_4 + 7U >> 3;
  if ((((*(uint *)(lVar10 + 0x24) <= uVar7) || (*(longlong *)(lVar10 + 0x10) == 0)) ||
      (uVar5 = (ulonglong)*(uint *)(*(longlong *)(lVar10 + 0x10) + uVar7 * 4), uVar5 == 0)) ||
     (uVar5 << 3 == -DAT_14c80ad08)) {
    FUN_146792159(lVar10,uVar7,puVar11,&PTR_LOOP_149dfd458);
  }
  local_78 = &PTR_LOOP_149dfd458;
  local_70 = puVar11;
  uVar7 = FUN_1467880f7(lVar10,param_4,0xffffffffffffffff,param_8);
  if (uVar7 == 0) {
    FUN_14678f287(&local_68);
    do {
      if ((char)param_1[1] == '\x01') {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      FUN_14678f28e(&local_68);
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
      local_78 = &PTR_LOOP_149dfd458;
      local_70 = &local_68;
      FUN_1467891c0(param_1,lVar10 + 0x28,param_4,0xffffffffffffffff);
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
      cVar4 = FUN_14678f2c1(&local_68);
    } while (cVar4 == '\0');
    FUN_146790ecd();
    goto LAB_1467a2548;
  }
  if (*(int *)(uVar7 + 0x2c) == 0) {
LAB_1467a2476:
    uVar1 = *(uint *)(uVar7 + 0x24);
    while (uVar1 = uVar1 & 0x7f, uVar1 < 0x20) {
      SRWLock = (PSRWLOCK)((ulonglong)uVar1 * 0x148 + DAT_14c8084d0);
      AcquireSRWLockExclusive(SRWLock);
      if ((*(uint *)(uVar7 + 0x24) & 0x7f) == uVar1) goto LAB_1467a248c;
      ReleaseSRWLockExclusive(SRWLock);
      uVar1 = *(uint *)(uVar7 + 0x24);
    }
    SRWLock = (PSRWLOCK)FUN_146797fd5(uVar7);
LAB_1467a248c:
    pvVar6 = SRWLock[8].Ptr;
    if (((uint)pvVar6 & 7) == 5) {
      uVar5 = (ulonglong)pvVar6 & 0xfffffffffffffff8;
    }
    else {
      uVar5 = FUN_146799574(pvVar6);
    }
    if (uVar5 != uVar7) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pRVar8 = SRWLock + 1;
  }
  else {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar5 = *(ulonglong *)(lVar10 + 0x2a8);
    if (uVar5 < 2) {
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x114) == '\0') {
        __dyn_tls_on_demand_init();
        uVar5 = *(ulonglong *)(lVar10 + 0x2a8);
      }
      if (uVar5 == 1) goto LAB_1467a2476;
    }
    local_78 = &PTR_LOOP_149dfd458;
    local_70 = puVar11;
    FUN_14679922c(&local_68,uVar7,param_4,param_8);
    pRVar8 = (PSRWLOCK)CONCAT44(uStack_5c,CONCAT13(uStack_5d,CONCAT21(uStack_5f,local_60)));
    SRWLock = local_58;
  }
  *(undefined1 *)&pRVar8->Ptr = 1;
  uVar1 = *(uint *)&pRVar8[3].Ptr;
  if ((ulonglong)uVar1 == 0) {
    pvVar6 = pRVar8[4].Ptr;
    pvVar9 = pRVar8[6].Ptr;
    if (pvVar9 != (PVOID)0x0) {
LAB_1467a2580:
      uVar7 = 0;
      if (pvVar9 != (PVOID)0x0) {
        for (; ((ulonglong)pvVar9 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
      pRVar8[6].Ptr = (PVOID)((ulonglong)pvVar9 & ~(1L << (uVar7 & 0x3f)));
      pvVar6 = (PVOID)((longlong)pvVar6 + uVar7 * 8);
      goto LAB_1467a2519;
    }
    if (*(char *)&pRVar8[1].Ptr == '\x04') {
      uVar1 = *(uint *)((longlong)&pRVar8[5].Ptr + 4);
      uVar2 = *(uint *)&pRVar8[5].Ptr;
      uVar7 = (ulonglong)uVar2;
      if (uVar2 < uVar1) {
        pRVar8[uVar7 + 8].Ptr = (PVOID)0x0;
        lVar10 = 0;
        do {
          if ((uVar7 - (uVar1 - 1)) + lVar10 == 0) {
            *(uint *)&pRVar8[5].Ptr = uVar1;
            goto LAB_1467a263c;
          }
          pvVar6 = (PVOID)((longlong)pvVar6 + 0x200);
          pvVar9 = pRVar8[uVar7 + lVar10 + 9].Ptr;
          lVar10 = lVar10 + 1;
        } while (pvVar9 == (PVOID)0x0);
        *(uint *)&pRVar8[5].Ptr = uVar2 + (int)lVar10;
        pRVar8[4].Ptr = pvVar6;
        goto LAB_1467a2580;
      }
LAB_1467a263c:
      FUN_1467a16e5(&local_68,pRVar8,uVar1,&LAB_1467a268a);
    }
    else {
      local_70 = (undefined2 *)&LAB_1467a268a;
      local_78 = param_7;
      FUN_1467a2117(&local_68);
    }
    pvVar6 = (PVOID)CONCAT53(uStack_65,CONCAT12(uStack_66,local_68));
    uStack_66 = uStack_5d;
    local_68 = uStack_5f;
  }
  else {
    *(uint *)&pRVar8[3].Ptr = uVar1 - *(int *)((longlong)&pRVar8[3].Ptr + 4);
    pvVar6 = (PVOID)((longlong)pRVar8[2].Ptr - (ulonglong)uVar1);
LAB_1467a2519:
    *(undefined1 *)&pRVar8->Ptr = 0;
    uStack_5c = 0;
    local_60 = 1;
  }
  *param_1 = (longlong)pvVar6;
  *(undefined1 *)(param_1 + 1) = local_60;
  *(undefined1 *)((longlong)param_1 + 0xb) = uStack_66;
  *(undefined2 *)((longlong)param_1 + 9) = local_68;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_5c;
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
LAB_1467a2548:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467a2694 FUN_1467a2694 body=99 status=ok
// SIG undefined FUN_1467a2694(void)

void FUN_1467a2694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_14678cc86();
  iVar2 = _getpid();
  FUN_14678cc2f("[%d] pas panic: ",iVar2);
  FUN_14678cc1f(param_1,&local_res10);
  FUN_1467a26fe(param_1,0,0,0,0,0,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 1467a26f7 _getpid body=7 status=ok
// SIG int _getpid(void)

int __cdecl _getpid(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001467a26f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _getpid();
  return iVar1;
}



// FUNCTION 1467a26fe FUN_1467a26fe body=37 status=ok
// SIG undefined FUN_1467a26fe(void)

void FUN_1467a26fe(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1,param_2,param_4,param_3);
  return;
}



// FUNCTION 1467a2725 FUN_1467a2725 body=111 status=ok
// SIG undefined FUN_1467a2725(void)

void FUN_1467a2725(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = _getpid();
  FUN_14678cc2f("[%d] pas assertion failed: ",iVar2);
  FUN_14678cc2f("%s:%d: %s: assertion %s failed.\n",param_1,param_2,param_3,param_4);
  FUN_1467a26fe(param_1,(longlong)param_2,param_3,param_4,0xbeefbff0,0x2a,0x539);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 1467a2794 FUN_1467a2794 body=2 status=ok
// SIG undefined FUN_1467a2794(void)

void FUN_1467a2794(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1467a2796 FUN_1467a2796 body=20 status=ok
// SIG undefined FUN_1467a2796(void)

void FUN_1467a2796(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  
  FUN_1467a2694("deallocation did fail at %p: %s\n",param_2,param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 1467a27aa FUN_1467a27aa body=101 status=ok
// SIG undefined FUN_1467a27aa(void)

void FUN_1467a27aa(void)

{
  undefined1 auStack_38 [32];
  ULONGLONG local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  QueryUnbiasedInterruptTime(&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(SUB84(((((double)CONCAT44(0x43300000,(int)local_18) - 4503599627370496.0) +
                       ((double)CONCAT44(0x45300000,(int)(local_18 >> 0x20)) -
                       1.9342813113834067e+25)) / 10.0) / 1000.0,0));
}



// FUNCTION 1467a2810 FUN_1467a2810 body=58 status=ok
// SIG undefined FUN_1467a2810(void)

void FUN_1467a2810(LPTHREAD_START_ROUTINE param_1,LPVOID param_2)

{
  code *pcVar1;
  HANDLE hObject;
  
  hObject = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,param_1,param_2,0,(LPDWORD)0x0);
  if (hObject != (HANDLE)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001467a2841. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CloseHandle(hObject);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1467a284a InitializeCriticalSection body=7 status=ok
// SIG void InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x0001467a284a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1467a2851 EnterCriticalSection body=7 status=ok
// SIG void EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x0001467a2851. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1467a2858 LeaveCriticalSection body=7 status=ok
// SIG void LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x0001467a2858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1467a285f InitializeConditionVariable body=7 status=ok
// SIG void InitializeConditionVariable(PCONDITION_VARIABLE ConditionVariable)

void __stdcall InitializeConditionVariable(PCONDITION_VARIABLE ConditionVariable)

{
                    /* WARNING: Could not recover jumptable at 0x0001467a285f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeConditionVariable(ConditionVariable);
  return;
}



// FUNCTION 1467a2866 FUN_1467a2866 body=210 status=ok
// SIG undefined FUN_1467a2866(void)

void FUN_1467a2866(PCONDITION_VARIABLE param_1,PCRITICAL_SECTION param_2,double param_3)

{
  code *pcVar1;
  DWORD dwMilliseconds;
  double dVar4;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar5;
  undefined1 auStack_58 [32];
  ULONGLONG local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  QueryUnbiasedInterruptTime(&local_38);
  auVar3._0_8_ = (double)CONCAT44(0x43300000,(int)local_38);
  auVar3._8_4_ = (int)(local_38 >> 0x20);
  auVar3._12_4_ = 0x45300000;
  dVar4 = auVar3._8_8_ - 1.9342813113834067e+25;
  auVar2._8_8_ = (auVar3._0_8_ - 4503599627370496.0) + dVar4;
  auVar2._0_8_ = (((auVar3._0_8_ - 4503599627370496.0) + dVar4) / -10.0) / 1000.0 + param_3;
  auVar3 = roundsd(auVar2,auVar2,9);
  dwMilliseconds = 0;
  dVar4 = auVar3._0_8_;
  if ((0.0 <= dVar4) && (dwMilliseconds = 0xfffffffe, dVar4 < 4294967295.0)) {
    dwMilliseconds = (DWORD)(longlong)dVar4;
    if (dwMilliseconds == 0xffffffff) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    dVar5 = (double)((longlong)dVar4 & 0xffffffff);
    if ((dVar4 != dVar5) || (NAN(dVar4) || NAN(dVar5))) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  SleepConditionVariableCS(param_1,param_2,dwMilliseconds);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467a2939 WakeAllConditionVariable body=7 status=ok
// SIG void WakeAllConditionVariable(PCONDITION_VARIABLE ConditionVariable)

void __stdcall WakeAllConditionVariable(PCONDITION_VARIABLE ConditionVariable)

{
                    /* WARNING: Could not recover jumptable at 0x0001467a2939. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeAllConditionVariable(ConditionVariable);
  return;
}



// FUNCTION 1467a2940 FUN_1467a2940 body=20 status=ok
// SIG undefined FUN_1467a2940(void)

void FUN_1467a2940(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001467a294d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitOnceExecuteOnce(param_1,FUN_1467a2954,param_2,0);
  return;
}



// FUNCTION 1467a2954 FUN_1467a2954 body=16 status=ok
// SIG undefined FUN_1467a2954(void)

undefined8 FUN_1467a2954(undefined8 param_1,code *param_2)

{
  (*param_2)();
  return 1;
}



// FUNCTION 1467a2964 FUN_1467a2964 body=82 status=ok
// SIG undefined FUN_1467a2964(void)

ulonglong FUN_1467a2964(undefined1 (*param_1) [16],ulonglong param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  do {
    do {
      uVar6 = *(ulonglong *)(*param_1 + 8);
      do {
        uVar4 = uVar6;
        uVar2 = *(ulonglong *)*param_1;
        uVar6 = *(ulonglong *)(*param_1 + 8);
      } while (*(ulonglong *)(*param_1 + 8) != uVar4);
      uVar6 = uVar2;
      if (param_2 < uVar2) {
        uVar6 = param_2;
      }
    } while (uVar4 == 0xffffffffffffffff);
    if ((uVar4 & 1) == 0) {
      uVar5 = uVar4;
      if (uVar2 <= param_2) {
        return uVar2;
      }
    }
    else {
      uVar5 = uVar4 + 1;
    }
    LOCK();
    auVar1 = *param_1;
    auVar3._8_8_ = uVar4;
    auVar3._0_8_ = uVar2;
    if (auVar3 == auVar1) {
      *(ulonglong *)*param_1 = uVar6;
      *(ulonglong *)(*param_1 + 8) = uVar5;
    }
    UNLOCK();
  } while (auVar3 != auVar1);
  return uVar2;
}



// FUNCTION 1467a29b6 FUN_1467a29b6 body=82 status=ok
// SIG undefined FUN_1467a29b6(void)

ulonglong FUN_1467a29b6(undefined1 (*param_1) [16],ulonglong param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  do {
    do {
      uVar6 = *(ulonglong *)(*param_1 + 8);
      do {
        uVar4 = uVar6;
        uVar2 = *(ulonglong *)*param_1;
        uVar6 = *(ulonglong *)(*param_1 + 8);
      } while (*(ulonglong *)(*param_1 + 8) != uVar4);
      uVar6 = uVar2;
      if (uVar2 < param_2) {
        uVar6 = param_2;
      }
    } while (uVar4 == 0xffffffffffffffff);
    if ((uVar4 & 1) == 0) {
      uVar5 = uVar4;
      if (param_2 <= uVar2) {
        return uVar2;
      }
    }
    else {
      uVar5 = uVar4 + 1;
    }
    LOCK();
    auVar1 = *param_1;
    auVar3._8_8_ = uVar4;
    auVar3._0_8_ = uVar2;
    if (auVar3 == auVar1) {
      *(ulonglong *)*param_1 = uVar6;
      *(ulonglong *)(*param_1 + 8) = uVar5;
    }
    UNLOCK();
  } while (auVar3 != auVar1);
  return uVar2;
}



// FUNCTION 1467a2a08 FUN_1467a2a08 body=43 status=ok
// SIG undefined FUN_1467a2a08(void)

ulonglong FUN_1467a2a08(undefined1 (*param_1) [16],ulonglong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  
  uVar4 = *param_2;
  if ((uVar4 < param_3) && (uVar1 = param_2[1], uVar1 != 0xffffffffffffffff)) {
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    LOCK();
    auVar3._8_8_ = uVar1;
    auVar3._0_8_ = uVar4;
    if (auVar3 == *param_1) {
      *(ulonglong *)*param_1 = param_3;
      *(ulonglong *)(*param_1 + 8) = uVar1 + 2;
    }
    else {
      uVar4 = SUB168(*param_1,0);
    }
    UNLOCK();
  }
  return uVar4;
}



// FUNCTION 1467a2a33 FUN_1467a2a33 body=231 status=ok
// SIG undefined FUN_1467a2a33(void)

longlong FUN_1467a2a33(ulonglong param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  byte local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_1 >> 0x30 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar3 = *(longlong *)(&DAT_14c80b3a0 + (param_1 >> 0x22) * 8);
  if (*(longlong *)(&DAT_14c80b3a0 + (param_1 >> 0x22) * 8) == 0) {
    local_48 = 4;
    local_40 = 0;
    local_58 = 0;
    FUN_146790da4(&local_38,0x20000,&local_48,"verse_heap_chunk_map/second_level");
    if ((local_30 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (local_2c != 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    FUN_146790cbb(local_38,0x20000);
    *(longlong *)(&DAT_14c80b3a0 + (param_1 >> 0x22) * 8) = local_38;
    lVar3 = local_38;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar3 + (ulonglong)((uint)(param_1 >> 0x13) & 0x7fff) * 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467a2b1b FUN_1467a2b1b body=86 status=ok
// SIG undefined FUN_1467a2b1b(void)

void FUN_1467a2b1b(void)

{
  code *pcVar1;
  
  if (DAT_14c80aed0 == 0) {
    DAT_14c80aed0 = FUN_14678d6e8();
  }
  if (DAT_14c80aed0 != 0x1000) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (DAT_14c80aed8 == 0) {
    DAT_14c80aed8 = FUN_14678d752();
  }
  if (DAT_14c80aed8 == 0xc) {
    FUN_146788169(&PTR_LOOP_149dfb7a0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1467a2b88 FUN_1467a2b88 body=196 status=ok
// SIG undefined FUN_1467a2b88(void)

ulonglong * FUN_1467a2b88(ulonglong param_1,int param_2,int param_3)

{
  code *pcVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 == 2) {
    puVar2 = (ulonglong *)(param_1 + 0x30);
  }
  else {
    if (param_2 != 4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (param_3 == 0) {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    }
    puVar2 = (ulonglong *)FUN_1467a765f();
    if (param_3 == 0) {
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
    }
    *puVar2 = param_1;
    if (param_1 >> 0x30 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar4 = (ulonglong)((uint)(param_1 >> 0x13) & 0x7fff);
    if (*(int *)(*(longlong *)(&DAT_14c80b3a0 + (param_1 >> 0x22) * 8) + uVar4 * 4) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (puVar2 == (ulonglong *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar3 = (longlong)puVar2 - DAT_14c80ad08;
    if (DAT_14c758498 <= uVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((uVar3 & 3) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    *(uint *)(*(longlong *)(&DAT_14c80b3a0 + (param_1 >> 0x22) * 8) + uVar4 * 4) = (uint)uVar3 | 2;
    puVar2 = puVar2 + 8;
  }
  return puVar2;
}



// FUNCTION 1467a2c4c FUN_1467a2c4c body=196 status=ok
// SIG undefined FUN_1467a2c4c(void)

void FUN_1467a2c4c(char *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  code *pcVar3;
  uint uVar4;
  
  if (*param_1 != '\x02') {
    if (*param_1 != '\x04') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar2 = *(ulonglong *)(param_1 + -0x40);
    if (uVar2 >> 0x30 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar4 = (uint)(uVar2 >> 0x13) & 0x7fff;
    uVar1 = *(uint *)(*(longlong *)(&DAT_14c80b3a0 + (uVar2 >> 0x22) * 8) + (ulonglong)uVar4 * 4);
    if ((uVar1 & 3) != 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    param_1 = param_1 + -0x40;
    if ((char *)((ulonglong)(uVar1 & 0xfffffff8) + DAT_14c80ad08) != param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if ((uVar1 & 4) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *(undefined4 *)(*(longlong *)(&DAT_14c80b3a0 + (uVar2 >> 0x22) * 8) + (ulonglong)uVar4 * 4) = 0;
    if (param_2 == 0) {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
      thunk_FUN_1467a08c6(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001467a2cff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
      return;
    }
    thunk_FUN_1467a08c6(param_1);
  }
  return;
}



// FUNCTION 1467a2d10 FUN_1467a2d10 body=202 status=ok
// SIG undefined FUN_1467a2d10(void)

undefined8 FUN_1467a2d10(longlong *param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  byte local_58;
  int local_54;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  longlong *local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_50 = *param_1;
  local_28 = &local_50;
  local_78 = &local_40;
  local_40 = 1;
  local_38 = 1;
  local_30 = FUN_1467a70b3;
  local_20 = 0;
  uStack_18 = 0;
  local_70 = 0x4000;
  local_68 = 0;
  local_48 = param_2;
  FUN_146790e4d(&local_60,local_50 + 0x80,0x4000);
  if ((local_58 & 1) == 0) {
    local_60 = 0;
  }
  else if (local_54 != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((local_10 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_60;
}



// FUNCTION 1467a2ddd FUN_1467a2ddd body=444 status=ok
// SIG undefined FUN_1467a2ddd(void)

undefined8 * FUN_1467a2ddd(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  uint3 uVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  void *_Dst;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  bool bVar11;
  
  lVar4 = DAT_14c80ad08;
  if (((uint)*(ulonglong *)(param_2 + 0x38) & 7) != 4) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(longlong *)(param_2 + 0x20);
  uVar3 = *(uint3 *)((*(ulonglong *)(param_2 + 0x38) & 0xfffffffffffffff8) + 8);
  if (*(longlong *)(lVar1 + 0x38) != 0) {
    FUN_146794d20(lVar1 + 0x30);
  }
  if (0x1f < *(byte *)(param_2 + 4)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar8 = (ulonglong)uVar3;
  iVar6 = (int)(1L << (*(byte *)(param_2 + 4) & 0x3f));
  if ((-iVar6 & (*(int *)(lVar4 + 0x20 + uVar8 * 8) + iVar6) - 1U) + *(int *)(param_2 + 0x1c) == 0)
  {
    *(undefined4 *)(lVar4 + 0x20 + uVar8 * 8) = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((0xd < (uint)(int)*(char *)(param_2 + 8)) ||
     ((0x2aa8U >> ((int)*(char *)(param_2 + 8) & 0x1fU) & 1) == 0)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (((uint)*(ulonglong *)(param_2 + 0x38) & 7) != 4) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar8 = 0xffffffffffffffff;
  bVar5 = false;
  uVar9 = 0xffffffffffffffff;
  uVar7 = 0;
  do {
    bVar11 = *(int *)(param_2 + 0x40 + uVar7 * 4) != 0;
    if (bVar11) {
      uVar9 = uVar7;
    }
    if (bVar11 && !bVar5) {
      bVar5 = true;
      uVar8 = uVar7;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != 0x20);
  if (!bVar5) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar9 = (uVar9 + 1) - uVar8;
  if (uVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (0xff < uVar9) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  puVar10 = (undefined8 *)(*(ulonglong *)(param_2 + 0x38) & 0xfffffffffffffff8);
  *(char *)((longlong)puVar10 + 0xf) = (char)uVar9;
  if (0xff < uVar8) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  *(char *)(puVar10 + 2) = (char)uVar8;
  _Dst = (void *)FUN_146788523(uVar9 * 4,4,"pas_segregated_partial_view/alloc_bits",0);
  memcpy(_Dst,(void *)(param_2 + 0x40 + uVar8 * 4),uVar9 * 4);
  *puVar10 = (void *)((longlong)_Dst + uVar8 * -4);
  ReleaseSRWLockExclusive(*(PSRWLOCK *)(lVar1 + 0x38));
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1467a2f99 FUN_1467a2f99 body=2 status=ok
// SIG undefined FUN_1467a2f99(void)

void FUN_1467a2f99(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1467a2f9b FUN_1467a2f9b body=3299 status=ok
// SIG undefined FUN_1467a2f9b(void)

/* WARNING: Removing unreachable block (ram,0x0001467a3984) */
/* WARNING: Removing unreachable block (ram,0x0001467a373e) */
/* WARNING: Removing unreachable block (ram,0x0001467a3845) */
/* WARNING: Removing unreachable block (ram,0x0001467a3b35) */

ulonglong FUN_1467a2f9b(undefined1 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  uint *puVar4;
  ulonglong *puVar5;
  byte bVar6;
  ushort uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  code *pcVar11;
  uint3 uVar12;
  char cVar13;
  BOOLEAN BVar14;
  byte bVar15;
  uint uVar16;
  ulonglong uVar17;
  PSRWLOCK pRVar18;
  uint uVar19;
  PSRWLOCK pRVar20;
  longlong lVar21;
  PVOID pvVar22;
  ulonglong uVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  longlong lVar26;
  PVOID pvVar27;
  longlong *plVar28;
  ulonglong uVar29;
  undefined1 *puVar30;
  ulonglong uVar31;
  PSRWLOCK pRVar32;
  ulonglong uVar33;
  bool bVar34;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  PSRWLOCK local_78;
  undefined8 *local_70;
  undefined4 *local_68;
  PSRWLOCK local_60;
  PSRWLOCK local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar33 = *(ulonglong *)(param_1 + 0x38);
  if (((uint)uVar33 & 7) == 5) {
    pRVar32 = (PSRWLOCK)(uVar33 & 0xfffffffffffffff8);
  }
  else {
    pRVar32 = (PSRWLOCK)FUN_146799574(uVar33);
  }
  plVar28 = pRVar32[3].Ptr;
  if (((*(byte *)(*plVar28 + 4) & 1) == 0) &&
     (uVar33 = (ulonglong)*(uint *)((longlong)plVar28 + 0x24), uVar33 != 0)) {
    uVar23 = plVar28[1];
    if (uVar23 != 0) {
      uVar17 = uVar23 & 0xfffffffffe000000;
      uVar23 = (ulonglong)((uint)uVar23 & 0x1ffffff);
      uVar29 = uVar23 - 0x4008 >> 0xe;
      uVar23 = (uVar23 + uVar33 * 4) - 0x4001 >> 0xe;
      do {
        uVar31 = *(ulonglong *)(uVar17 + 0x18 + uVar29 * 8);
        uVar16 = (uint)uVar31 & 7;
        if (uVar16 == 2) break;
        if (uVar16 == 1) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        if ((uVar31 & 7) == 0) break;
        puVar5 = (ulonglong *)(uVar17 + 0x18 + uVar29 * 8);
        LOCK();
        bVar34 = uVar31 == *puVar5;
        if (bVar34) {
          *puVar5 = uVar31 & 0xfffffffffffffff8 | 2;
        }
        UNLOCK();
      } while (!bVar34);
      if (uVar29 != uVar23) {
        do {
          uVar29 = *(ulonglong *)(uVar17 + 0x18 + uVar23 * 8);
          if (((uint)uVar29 & 7) < 3) break;
          puVar5 = (ulonglong *)(uVar17 + 0x18 + uVar23 * 8);
          LOCK();
          bVar34 = uVar29 == *puVar5;
          if (bVar34) {
            *puVar5 = uVar29 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar34);
      }
    }
    uVar23 = plVar28[2];
    if (uVar23 != 0) {
      uVar17 = uVar23 & 0xfffffffffe000000;
      uVar23 = (ulonglong)((uint)uVar23 & 0x1ffffff);
      uVar29 = uVar23 - 0x4008 >> 0xe;
      uVar33 = (uVar23 + uVar33 * 4) - 0x4001 >> 0xe;
      do {
        uVar23 = *(ulonglong *)(uVar17 + 0x18 + uVar29 * 8);
        uVar16 = (uint)uVar23 & 7;
        if (uVar16 == 2) break;
        if (uVar16 == 1) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        if ((uVar23 & 7) == 0) break;
        puVar5 = (ulonglong *)(uVar17 + 0x18 + uVar29 * 8);
        LOCK();
        bVar34 = uVar23 == *puVar5;
        if (bVar34) {
          *puVar5 = uVar23 & 0xfffffffffffffff8 | 2;
        }
        UNLOCK();
      } while (!bVar34);
      if (uVar29 != uVar33) {
        do {
          uVar23 = *(ulonglong *)(uVar17 + 0x18 + uVar33 * 8);
          if (((uint)uVar23 & 7) < 3) break;
          puVar5 = (ulonglong *)(uVar17 + 0x18 + uVar33 * 8);
          LOCK();
          bVar34 = uVar23 == *puVar5;
          if (bVar34) {
            *puVar5 = uVar23 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar34);
      }
    }
  }
  pRVar18 = DAT_14c80ad08 + *(uint *)((longlong)plVar28 + 0x1c);
  if (pRVar18 != (PSRWLOCK)0x0 && (ulonglong)*(uint *)((longlong)plVar28 + 0x1c) != 0) {
    uVar33 = (ulonglong)*(uint *)((longlong)&pRVar18[1].Ptr + 4);
    pRVar20 = DAT_14c80ad08 + *(uint *)&pRVar18[1].Ptr;
    if ((ulonglong)*(uint *)&pRVar18[1].Ptr == 0) {
      pRVar20 = (PSRWLOCK)0x0;
    }
    if (uVar33 != 0) {
      if (pRVar20 == (PSRWLOCK)0x0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      uVar23 = (ulonglong)((longlong)pRVar20 + (-8 - DAT_14c80acf8)) >> 0xe;
      uVar33 = (ulonglong)((longlong)pRVar20 + (uVar33 * 0x10 - DAT_14c80acf8) + -1) >> 0xe;
      do {
        uVar17 = *(ulonglong *)(&DAT_14c8084f8 + uVar23 * 8);
        uVar16 = (uint)uVar17 & 7;
        if (uVar16 == 2) break;
        if (uVar16 == 1) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        if ((uVar17 & 7) == 0) break;
        LOCK();
        bVar34 = uVar17 == *(ulonglong *)(&DAT_14c8084f8 + uVar23 * 8);
        if (bVar34) {
          *(ulonglong *)(&DAT_14c8084f8 + uVar23 * 8) = uVar17 & 0xfffffffffffffff8 | 2;
        }
        UNLOCK();
      } while (!bVar34);
      if (uVar23 != uVar33) {
        do {
          uVar23 = *(ulonglong *)(&DAT_14c8084f8 + uVar33 * 8);
          if (((uint)uVar23 & 7) < 3) break;
          LOCK();
          bVar34 = uVar23 == *(ulonglong *)(&DAT_14c8084f8 + uVar33 * 8);
          if (bVar34) {
            *(ulonglong *)(&DAT_14c8084f8 + uVar33 * 8) = uVar23 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar34);
      }
    }
  }
  *(undefined2 *)(param_1 + 1) = 0x100;
  cVar13 = FUN_146790ea6();
  if (cVar13 != '\0') {
    FUN_146790ecd();
  }
  if (*(ulonglong *)(param_1 + 0x20) == 0) {
    uVar33 = 0;
    uVar23 = 0;
  }
  else {
    uVar33 = *(ulonglong *)(param_1 + 0x20) & 0xffffffffffffc000;
    uVar23 = *(ulonglong *)(uVar33 + 0x50);
    uVar33 = uVar33 | 0x30;
    if ((uVar23 & 6) != 0) {
      if (((uint)uVar23 & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      uVar23 = *(ulonglong *)(param_1 + 0x38);
      if (((uint)uVar23 & 7) != 4) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
    }
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar17 = (ulonglong)pRVar32 | 5;
  if (pRVar32 == (PSRWLOCK)0x0) {
    uVar17 = 0;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(ulonglong *)(param_1 + 0x38) = uVar17;
  param_1[8] = 10;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  puVar24 = *(undefined4 **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (1 < *(ulonglong *)(puVar24 + 0xaa)) {
    FUN_14679ea20(*(ulonglong *)(puVar24 + 0xaa),param_1);
  }
  local_68 = puVar24;
  if (uVar23 == 0) {
LAB_1467a32ce:
    uVar17 = FUN_146798201(pRVar32);
    pRVar18 = DAT_14c80ad08;
    if (uVar17 == 0) {
LAB_1467a347f:
      uVar17 = 0;
    }
    else {
      uVar16 = (uint)uVar17 & 7;
      if (1 < uVar16) {
        if (uVar16 == 4) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        goto LAB_1467a3bf3;
      }
      plVar28 = (longlong *)(uVar17 & 0xfffffffffffffff8);
      if (*(char *)((longlong)plVar28 + 0xb) == '\0') {
        uVar29 = (ulonglong)*(uint3 *)(plVar28 + 1);
        if (*plVar28 == 0) {
          cVar13 = *(char *)((longlong)&DAT_14c80ad08[uVar29 + 1].Ptr + 5);
          if (cVar13 != '\x01') {
            if (cVar13 != '\x02') {
              if (cVar13 != '\0') {
                    /* WARNING: Does not return */
                pcVar11 = (code *)invalidInstructionException();
                (*pcVar11)();
              }
                    /* WARNING: Does not return */
              pcVar11 = (code *)invalidInstructionException();
              (*pcVar11)();
            }
            local_88 = 0;
            FUN_14678ec28(0x4000,&DAT_149dfda48,0,0);
            lVar26 = *plVar28;
            if (lVar26 != 0) goto LAB_1467a3390;
          }
          local_78 = pRVar18;
          FUN_14678f287(local_58);
          do {
            if (*plVar28 != 0) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)invalidInstructionException();
              (*pcVar11)();
            }
            FUN_14678f28e(local_58);
            AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
            lVar26 = FUN_1467a2d10(local_78[uVar29 + 3].Ptr,local_58,1);
            *plVar28 = lVar26;
            ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
            cVar13 = FUN_14678f2c1(local_58);
          } while (cVar13 == '\0');
          lVar26 = *plVar28;
          if (lVar26 == 0) goto LAB_1467a347f;
        }
        else {
          pRVar20 = (PSRWLOCK)(plVar28 + 2);
          local_78 = pRVar32;
          AcquireSRWLockExclusive(pRVar20);
          pRVar32 = local_78;
          cVar13 = *(char *)((longlong)&pRVar18[uVar29 + 1].Ptr + 5);
          local_58[0] = pRVar20;
          if (cVar13 != '\x01') {
            if (cVar13 != '\x02') {
              if (cVar13 != '\0') {
                    /* WARNING: Does not return */
                pcVar11 = (code *)invalidInstructionException();
                (*pcVar11)();
              }
                    /* WARNING: Does not return */
              pcVar11 = (code *)invalidInstructionException();
              (*pcVar11)();
            }
            local_88 = 1;
            FUN_14678ec28(0x4000,&DAT_149dfda48,0,local_58);
          }
          FUN_14678d48b(*plVar28,&DAT_149dfda48);
          ReleaseSRWLockExclusive(pRVar20);
          lVar26 = *plVar28;
        }
LAB_1467a3390:
        FUN_146794f45(lVar26 + 0x30,(longlong)plVar28 + 1,0,&DAT_149dfda48);
        FUN_1467a78f0(*plVar28);
        AcquireSRWLockExclusive((PSRWLOCK)(plVar28 + 3));
        *(undefined1 *)((longlong)plVar28 + 0xb) = 1;
        ReleaseSRWLockExclusive((PSRWLOCK)(plVar28 + 3));
      }
    }
    if (uVar23 == 0) {
      if (uVar17 == 0) goto LAB_1467a39a1;
      pRVar18 = (PSRWLOCK)0x0;
    }
    else {
      if (*(longlong *)(uVar33 + 8) == 0) {
        pRVar18 = (PSRWLOCK)0x0;
      }
      else {
        pRVar18 = (PSRWLOCK)FUN_146794d20(uVar33,0);
      }
      uVar16 = (uint)uVar23 & 7;
      if (uVar16 < 2) {
        uVar23 = uVar23 & 0xfffffffffffffff8;
        cVar13 = *(char *)(uVar33 + 2);
        if (cVar13 == '\x01') {
          *(undefined1 *)(uVar33 + 2) = 0;
        }
        puVar30 = (undefined1 *)
                  ((longlong)&DAT_14c80ad08->Ptr +
                  (ulonglong)
                  ((uint)*(byte *)(uVar23 + 10) * 0x80000 + (uint)*(ushort *)(uVar23 + 8) * 8));
        uVar8 = *(undefined4 *)(uVar23 + 0xc);
        lVar26 = *(longlong *)(uVar33 + 0x18);
        *(undefined1 *)(uVar33 + 1) = 0;
        if (cVar13 != '\0') {
          FUN_146791662(puVar30,uVar8);
        }
        if (lVar26 == 0) {
          FUN_146791740(puVar30,uVar8);
        }
      }
      else {
        if (uVar16 != 4) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        uVar23 = uVar23 & 0xfffffffffffffff8;
        uVar31 = (ulonglong)
                 ((uint)*(byte *)(uVar23 + 10) * 0x80000 + (uint)*(ushort *)(uVar23 + 8) * 8);
        uVar29 = *(ulonglong *)((longlong)&DAT_14c80ad08->Ptr + uVar31);
        if ((uVar29 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        local_78 = pRVar18;
        if ((*(byte *)(uVar23 + 0x11) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        bVar15 = *(byte *)(uVar23 + 0xd);
        uVar7 = *(ushort *)(uVar23 + 0xb);
        local_70 = *(undefined8 **)((uVar29 & 0xfffffffffffffffe) + 8);
        pRVar18 = DAT_14c80ad08;
        if (*(PSRWLOCK *)(uVar33 + 8) != (PSRWLOCK)0x0) {
          local_60 = DAT_14c80ad08;
          BVar14 = TryAcquireSRWLockExclusive(*(PSRWLOCK *)(uVar33 + 8));
          pRVar18 = local_60;
          if (BVar14 != '\0') {
                    /* WARNING: Does not return */
            pcVar11 = (code *)invalidInstructionException();
            (*pcVar11)();
          }
        }
        puVar30 = (undefined1 *)((longlong)&pRVar18->Ptr + uVar31);
        if (*(int *)(puVar30 + 0x24) == 1) {
          bVar34 = *(longlong *)(uVar33 + 0x18) == 0;
        }
        else {
          bVar34 = false;
        }
        bVar6 = *(byte *)(uVar23 + 0x11);
        *(byte *)(uVar23 + 0x11) = bVar6 & 0xfc;
        iVar9 = *(int *)(puVar30 + 0x24);
        if ((bVar6 & 2) == 0) {
          if (iVar9 == 0) {
LAB_1467a3b0d:
                    /* WARNING: Does not return */
            pcVar11 = (code *)invalidInstructionException();
            (*pcVar11)();
          }
          *(int *)(puVar30 + 0x24) = iVar9 + -1;
        }
        else {
          if (iVar9 == 0) goto LAB_1467a3b0d;
          *(int *)(puVar30 + 0x24) = iVar9 + -1;
          if ((*(byte *)(uVar23 + 0x11) & 4) == 0) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)invalidInstructionException();
            (*pcVar11)();
          }
          FUN_146791720((undefined1 *)
                        ((longlong)&pRVar18->Ptr +
                        (ulonglong)((uint)bVar15 * 0x80000 + (uint)uVar7 * 8)),uVar23 | 4);
        }
        pRVar18 = local_78;
        if (bVar34) {
          if (*(int *)(puVar30 + 0x24) != 0) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)invalidInstructionException();
            (*pcVar11)();
          }
          FUN_1467918b2(local_70,(ulonglong)puVar30 | 2);
        }
      }
      if (uVar17 == 0) {
        if (pRVar18 != (PSRWLOCK)0x0) {
          ReleaseSRWLockExclusive(pRVar18);
        }
LAB_1467a39a1:
        uVar33 = 0;
        goto LAB_1467a394c;
      }
    }
    if ((uVar17 & 6) != 0) {
      if (((uint)uVar17 & 7) != 4) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      uVar12 = *(uint3 *)((uVar17 & 0xfffffffffffffff8) + 8);
      pRVar32 = DAT_14c80ad08 + uVar12;
      if (pRVar32 != (PSRWLOCK)0x0 && uVar12 != 0) {
        pvVar27 = pRVar32->Ptr;
        pvVar22 = pvVar27;
        if (((ulonglong)pvVar27 & 1) != 0) {
          pvVar22 = *(PVOID *)((ulonglong)pvVar27 & 0xfffffffffffffffe);
        }
        if (pRVar18 != *(PSRWLOCK *)((longlong)pvVar22 + 0x38)) {
          FUN_146794d20((longlong)pvVar22 + 0x30,pRVar18,*(PSRWLOCK *)((longlong)pvVar22 + 0x38));
          pvVar27 = pRVar32->Ptr;
        }
        if (((ulonglong)pvVar27 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        FUN_146795992(uVar17 & 0xfffffffffffffff8,pRVar32,(ulonglong)pvVar27 & 0xfffffffffffffffe);
LAB_1467a3c29:
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      if (pRVar18 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(pRVar18);
      }
      FUN_1467a2f99();
LAB_1467a3bf3:
                    /* WARNING: Does not return */
      pcVar11 = (code *)invalidInstructionException();
      (*pcVar11)();
    }
    plVar28 = (longlong *)(uVar17 & 0xfffffffffffffff8);
    lVar26 = *plVar28;
    uVar33 = lVar26 + 0x30;
    if (pRVar18 != *(PSRWLOCK *)(lVar26 + 0x38)) {
      pRVar18 = (PSRWLOCK)FUN_146794d20(uVar33,pRVar18);
    }
    *(undefined1 *)(lVar26 + 0x31) = 1;
    *(ulonglong *)(lVar26 + 0x50) = uVar17 | 1;
    local_78 = pRVar18;
  }
  else {
    if (((uint)uVar23 & 7) == 4) {
      uVar17 = uVar23 & 0xfffffffffffffff8;
      bVar15 = *(byte *)(uVar17 + 0x11);
      if ((bVar15 & 4) != 0) {
        if (*(longlong *)(uVar33 + 8) != 0) {
          FUN_146794d20(uVar33,0);
          bVar15 = *(byte *)(uVar17 + 0x11);
        }
        *(byte *)(uVar17 + 0x11) = bVar15 & 0xf9;
        goto LAB_1467a3c29;
      }
      goto LAB_1467a32ce;
    }
    if ((uVar23 & 7) != 0) goto LAB_1467a32ce;
    plVar28 = (longlong *)(uVar23 & 0xfffffffffffffff8);
    if (*(longlong *)(uVar33 + 8) == 0) {
      local_78 = (PSRWLOCK)0x0;
    }
    else {
      local_78 = (PSRWLOCK)FUN_146794d20(uVar33,0);
    }
    *(ulonglong *)(uVar33 + 0x20) = uVar23 | 1;
    *(undefined1 *)(uVar33 + 2) = 0;
  }
  lVar26 = DAT_14c80b370;
  plVar1 = (longlong *)(uVar33 - 0x30);
  if (*(longlong *)(uVar33 + 0x18) == 0) {
    if ((DAT_14c80b370 != 0) && (*plVar1 != DAT_14c80b370)) {
      *plVar1 = DAT_14c80b370;
    }
    if (*(longlong *)(uVar33 - 0x28) != 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)invalidInstructionException();
      (*pcVar11)();
    }
    if ((ulonglong)plVar1 >> 0x30 != 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)invalidInstructionException();
      (*pcVar11)();
    }
    lVar26 = *(longlong *)(&DAT_14c80b3a0 + ((ulonglong)plVar1 >> 0x22) * 8);
    uVar23 = (ulonglong)((uint)((ulonglong)plVar1 >> 0x13) & 0x7fff);
    do {
      uVar16 = *(uint *)(lVar26 + uVar23 * 4);
      if ((uVar16 & 1) == 0) {
        if (uVar16 != 0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        piVar3 = (int *)(lVar26 + uVar23 * 4);
        LOCK();
        if (*piVar3 == 0) {
          *piVar3 = 1;
        }
        UNLOCK();
      }
      else {
        if (((ulonglong)plVar1 & 0x7c000) == 0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        do {
          uVar10 = *(uint *)(lVar26 + uVar23 * 4);
          uVar19 = uVar10 | 1 << ((byte)((ulonglong)plVar1 >> 0xe) & 0x1f);
          if (uVar10 == uVar19) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)invalidInstructionException();
            (*pcVar11)();
          }
          puVar4 = (uint *)(lVar26 + uVar23 * 4);
          LOCK();
          bVar34 = uVar10 == *puVar4;
          if (bVar34) {
            *puVar4 = uVar19;
          }
          UNLOCK();
        } while (!bVar34);
      }
      pRVar18 = DAT_14c80ad08;
    } while ((uVar16 & 1) == 0);
    uVar17 = (ulonglong)*(uint *)&pRVar32[6].Ptr;
    iVar9 = *(int *)&DAT_14c80ad08[uVar17].Ptr;
    uVar16 = *(uint *)((longlong)&DAT_14c80ad08[uVar17].Ptr + 4);
    uVar23 = (ulonglong)*(uint *)&DAT_14c80ad08[uVar17 + 1].Ptr;
    *(ulonglong *)(uVar33 + 0x18) = uVar23;
    if (uVar23 != 0) {
      uVar23 = DAT_14c80b380 + uVar23;
      if (uVar23 <= DAT_14c80b380) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      LOCK();
      UNLOCK();
      DAT_14c80b380 = uVar23;
      if (uVar23 == 0xffffffffffffffff) {
        (*(code *)0x0)();
      }
    }
    *(ulonglong *)(param_1 + 0x10) = (ulonglong)uVar16 + (longlong)plVar1;
    *(uint *)(param_1 + 0x18) = uVar16 - iVar9;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(longlong **)(param_1 + 0x20) = plVar1;
    uVar23 = (ulonglong)*(uint *)((longlong)&pRVar18[uVar17 + 1].Ptr + 4);
    if (uVar23 < 8) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)invalidInstructionException();
      (*pcVar11)();
    }
    puVar24 = (undefined4 *)((longlong)&DAT_14c80ad08->Ptr + uVar23);
    puVar25 = (undefined4 *)(uVar33 + 0x2c);
    for (lVar26 = 0x20; pRVar18 = local_78, lVar26 != 0; lVar26 = lVar26 + -1) {
      *puVar25 = *puVar24;
      puVar24 = puVar24 + 1;
      puVar25 = puVar25 + 1;
    }
  }
  else {
    if (DAT_14c80b370 != 0) {
      puVar2 = (undefined8 *)(local_68 + 0xaa);
      uVar23 = (ulonglong)*(uint *)(*(longlong *)pRVar32[3].Ptr + 0xd8);
      do {
        bVar34 = uVar23 == 0;
        uVar23 = uVar23 - 1;
        if (bVar34) goto LAB_1467a3851;
      } while (*(longlong *)(*(longlong *)(*(longlong *)pRVar32[3].Ptr + 0xd0) + uVar23 * 8) !=
               DAT_14c80b378);
      if (*plVar1 != DAT_14c80b370) {
        if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x114) == '\0') {
          __dyn_tls_on_demand_init();
        }
        pRVar18 = (PSRWLOCK)*puVar2;
        local_60 = (PSRWLOCK)0x0;
        if (pRVar18 != (PSRWLOCK)&DAT_00000001) {
          local_60 = pRVar18;
        }
        *(undefined1 *)(uVar33 - 0x1f) = 1;
        pRVar18 = (PSRWLOCK)(plVar28 + 3);
        local_70 = puVar2;
        ReleaseSRWLockExclusive(pRVar18);
        local_68 = (undefined4 *)FUN_146773d17(0x80);
        puVar24 = (undefined4 *)(uVar33 + 0x2c);
        puVar25 = local_68;
        for (lVar21 = 0x20; lVar21 != 0; lVar21 = lVar21 + -1) {
          *puVar25 = *puVar24;
          puVar24 = puVar24 + 1;
          puVar25 = puVar25 + 1;
        }
        AcquireSRWLockExclusive(pRVar18);
        *(undefined1 *)(uVar33 - 0x1f) = 0;
        if (*(longlong *)(uVar33 - 0x30) == lVar26) {
          ReleaseSRWLockExclusive(pRVar18);
          FUN_146773e73(local_68);
          AcquireSRWLockExclusive(pRVar18);
        }
        else {
          *(longlong *)(uVar33 - 0x30) = lVar26;
          if (*(longlong *)(uVar33 - 0x28) != 0) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)invalidInstructionException();
            (*pcVar11)();
          }
          if (local_68 == (undefined4 *)0x0) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)invalidInstructionException();
            (*pcVar11)();
          }
          *(undefined4 **)(uVar33 - 0x28) = local_68;
        }
        puVar2 = local_70;
        if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x114) == '\0') {
          __dyn_tls_on_demand_init();
        }
        pRVar18 = (PSRWLOCK)0x0;
        if ((PSRWLOCK)*puVar2 != (PSRWLOCK)&DAT_00000001) {
          pRVar18 = (PSRWLOCK)*puVar2;
        }
        if (pRVar18 != local_60) {
          param_1 = (undefined1 *)(((longlong)param_1 - (longlong)local_60) + (longlong)pRVar18);
        }
      }
    }
LAB_1467a3851:
    pRVar18 = local_78;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    pRVar20 = DAT_14c80ad08;
    uVar17 = (ulonglong)*(uint *)&pRVar32[6].Ptr;
    uVar23 = (ulonglong)*(uint *)((longlong)&DAT_14c80ad08[uVar17 + 1].Ptr + 4);
    if (uVar23 < 8) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)invalidInstructionException();
      (*pcVar11)();
    }
    uVar16 = *(uint *)&DAT_14c80ad08[uVar17].Ptr;
    uVar19 = uVar16 >> 10;
    uVar10 = *(uint *)((longlong)&DAT_14c80ad08[uVar17].Ptr + 4);
    *(uint *)(param_1 + 0x28) = uVar19;
    *(uint *)(param_1 + 0x2c) = ((uVar10 >> 4) - 1 >> 6) + 1;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(ulonglong *)(param_1 + 0x20) = (ulonglong)(uVar16 & 0xfffffc00) + (longlong)plVar1;
    lVar26 = 0;
    do {
      uVar16 = *(uint *)((longlong)&pRVar20->Ptr + lVar26 * 4 + uVar23);
      uVar10 = *(uint *)(uVar33 + 0x2c + lVar26 * 4);
      *(uint *)(param_1 + lVar26 * 4 + 0x40) = ~uVar10 & uVar16;
      *(uint *)(uVar33 + 0x2c + lVar26 * 4) = uVar10 | uVar16;
      lVar26 = lVar26 + 1;
    } while (lVar26 != 0x20);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + (ulonglong)uVar19 * 8 + 0x40);
    param_1[0xc] = 1;
    puVar24 = (undefined4 *)
              (ulonglong)*(uint *)&DAT_14c80ad08[(ulonglong)*(uint *)&pRVar32[6].Ptr + 1].Ptr;
    lVar26 = (longlong)puVar24 - *(longlong *)(uVar33 + 0x18);
    if (lVar26 < 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)invalidInstructionException();
      (*pcVar11)();
    }
    if (lVar26 != 0) {
      uVar23 = DAT_14c80b380 + lVar26;
      if (uVar23 <= DAT_14c80b380) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      LOCK();
      UNLOCK();
      DAT_14c80b380 = uVar23;
      if (uVar23 == 0xffffffffffffffff) {
        (*(code *)0x0)();
      }
    }
    *(undefined4 **)(uVar33 + 0x18) = puVar24;
  }
  uVar33 = CONCAT71((int7)((ulonglong)puVar24 >> 8),1);
  if (pRVar18 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(pRVar18);
  }
LAB_1467a394c:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar33 & 0xffffffff;
}



// FUNCTION 1467a3c7f FUN_1467a3c7f body=1228 status=ok
// SIG undefined FUN_1467a3c7f(void)

/* WARNING: Removing unreachable block (ram,0x0001467a3e14) */

ulonglong FUN_1467a3c7f(longlong param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  ulonglong uVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  BOOLEAN BVar6;
  uint uVar7;
  void *_Dst;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  bool bVar20;
  bool bVar21;
  ulonglong local_70;
  
  uVar7 = (uint)param_2 & 7;
  if (1 < uVar7) {
    if (uVar7 != 4) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  BVar6 = TryAcquireSRWLockExclusive(*(PSRWLOCK *)(param_3 + 8));
  if (BVar6 != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar2 = *(ulonglong *)(param_3 + 0x18);
  if (((uint)(int)*(char *)(param_1 + 8) < 0xe) &&
     ((0x2aa8U >> ((int)*(char *)(param_1 + 8) & 0x1fU) & 1) != 0)) {
    if (((uint)*(ulonglong *)(param_1 + 0x38) & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar16 = 0xffffffffffffffff;
    bVar21 = false;
    uVar19 = 0xffffffffffffffff;
    uVar11 = 0;
    do {
      bVar20 = *(int *)(param_1 + 0x40 + uVar11 * 4) != 0;
      if (bVar20) {
        uVar19 = uVar11;
      }
      if (bVar20 && !bVar21) {
        bVar21 = true;
        uVar16 = uVar11;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0x20);
    if (!bVar21) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar19 = (uVar19 + 1) - uVar16;
    if (uVar19 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    if (0xff < uVar19) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    puVar12 = (undefined8 *)(*(ulonglong *)(param_1 + 0x38) & 0xfffffffffffffff8);
    *(char *)((longlong)puVar12 + 0xf) = (char)uVar19;
    if (0xff < uVar16) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    *(char *)(puVar12 + 2) = (char)uVar16;
    _Dst = (void *)FUN_146788523(uVar19 * 4,4,"pas_segregated_partial_view/alloc_bits",0);
    memcpy(_Dst,(void *)(param_1 + 0x40 + uVar16 * 4),uVar19 * 4);
    *puVar12 = (void *)((longlong)_Dst + uVar16 * -4);
  }
  uVar16 = (ulonglong)*(uint *)(param_1 + 0x18);
  if (uVar16 != 0) {
    uVar19 = *(ulonglong *)(param_1 + 0x10);
    uVar11 = uVar19 - uVar16;
    if (uVar16 <= uVar19) {
      uVar7 = *(uint *)(param_1 + 0x1c);
      uVar16 = param_3 - 0x30;
      uVar15 = (ulonglong)((uint)(uVar16 >> 0x13) & 0x7fff);
      bVar3 = (byte)(uVar16 >> 0xe) & 0x1f;
      do {
        bVar4 = (byte)(uVar11 >> 4) & 0x1f;
        puVar1 = (uint *)(param_3 + 0x2c + (ulonglong)((uint)(uVar11 >> 7) & 0x7c));
        *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
        if ((*(ulonglong *)(param_3 + 0x20) & 7) != 0) {
          uVar17 = *(ulonglong *)(param_3 + 0x20) & 0xfffffffffffffff8;
          if (*(char *)(param_3 + 1) == '\x01') {
            *(undefined1 *)(param_3 + 2) = 1;
          }
          else {
            FUN_146791662((ulonglong)
                          ((uint)*(byte *)(uVar17 + 10) * 0x80000 +
                          (uint)*(ushort *)(uVar17 + 8) * 8) + DAT_14c80ad08,
                          *(undefined4 *)(uVar17 + 0xc));
          }
          *(ulonglong *)(param_3 + 0x20) = uVar17;
        }
        lVar14 = *(longlong *)(param_3 + 0x18) - (ulonglong)*(uint *)(param_3 + 4);
        if (lVar14 == 0) {
          if (*(longlong *)(param_3 + -0x18) != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if (0xffffffffffff < uVar16) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          lVar14 = *(longlong *)(&DAT_14c80b3a0 + (uVar16 >> 0x22) * 8);
          if ((*(byte *)(lVar14 + uVar15 * 4) & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if ((uVar16 & 0x7c000) == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          do {
            uVar18 = *(uint *)(lVar14 + uVar15 * 4);
            uVar10 = uVar18 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
            if (uVar18 == uVar10) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            puVar1 = (uint *)(lVar14 + uVar15 * 4);
            LOCK();
            bVar21 = uVar18 == *puVar1;
            if (bVar21) {
              *puVar1 = uVar10;
            }
            UNLOCK();
          } while (!bVar21);
          FUN_146795211(param_3,0);
        }
        else {
          *(longlong *)(param_3 + 0x18) = lVar14;
        }
        uVar11 = uVar11 + uVar7;
      } while (uVar11 < uVar19);
    }
  }
  if (*(uint *)(param_1 + 0x28) != *(uint *)(param_1 + 0x2c)) {
    *(undefined8 *)(param_1 + 0x40 + (ulonglong)*(uint *)(param_1 + 0x28) * 8) =
         *(undefined8 *)(param_1 + 0x30);
    if (((uint)(int)*(char *)(param_1 + 8) < 0xe) &&
       ((0x2aa8U >> ((int)*(char *)(param_1 + 8) & 0x1fU) & 1) != 0)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    if ((param_2 & 6) == 0) {
      uVar16 = (ulonglong)*(uint *)(DAT_14c80ad08 + 0xc + (ulonglong)*(uint *)(param_4 + 0x30) * 8);
      if (uVar16 < 8) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar14 = DAT_14c80ad08 + uVar16;
      uVar7 = 0;
      local_70 = 0x20;
    }
    else {
      if (((uint)param_2 & 7) != 4) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      plVar13 = (longlong *)(param_2 & 0xfffffffffffffff8);
      if (*(byte *)((longlong)plVar13 + 0xf) == 0) goto LAB_1467a3de7;
      uVar7 = (uint)*(byte *)(plVar13 + 2);
      local_70 = (ulonglong)
                 ((uint)*(byte *)((longlong)plVar13 + 0xf) + (uint)*(byte *)(plVar13 + 2));
      lVar14 = *plVar13;
    }
    uVar19 = (ulonglong)uVar7;
    uVar16 = param_3 - 0x30;
    uVar11 = (ulonglong)((uint)(uVar16 >> 0x13) & 0x7fff);
    bVar3 = (byte)(uVar16 >> 0xe) & 0x1f;
    do {
      uVar7 = *(uint *)(param_1 + 0x40 + uVar19 * 4) & *(uint *)(lVar14 + uVar19 * 4);
      if (uVar7 != 0) {
        do {
          uVar18 = -uVar7 & uVar7;
          puVar1 = (uint *)(param_3 + 0x2c + (ulonglong)((uint)uVar19 & 0x1f) * 4);
          *puVar1 = *puVar1 & ~uVar18;
          if ((*(ulonglong *)(param_3 + 0x20) & 7) != 0) {
            uVar15 = *(ulonglong *)(param_3 + 0x20) & 0xfffffffffffffff8;
            if (*(char *)(param_3 + 1) == '\x01') {
              *(undefined1 *)(param_3 + 2) = 1;
            }
            else {
              FUN_146791662((ulonglong)
                            ((uint)*(byte *)(uVar15 + 10) * 0x80000 +
                            (uint)*(ushort *)(uVar15 + 8) * 8) + DAT_14c80ad08,
                            *(undefined4 *)(uVar15 + 0xc));
            }
            *(ulonglong *)(param_3 + 0x20) = uVar15;
          }
          lVar8 = *(longlong *)(param_3 + 0x18) - (ulonglong)*(uint *)(param_3 + 4);
          if (lVar8 == 0) {
            if (*(longlong *)(param_3 + -0x18) != 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            if (0xffffffffffff < uVar16) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            lVar8 = *(longlong *)(&DAT_14c80b3a0 + (uVar16 >> 0x22) * 8);
            if ((*(byte *)(lVar8 + uVar11 * 4) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            if ((uVar16 & 0x7c000) == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            do {
              uVar10 = *(uint *)(lVar8 + uVar11 * 4);
              uVar9 = uVar10 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
              if (uVar10 == uVar9) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
              puVar1 = (uint *)(lVar8 + uVar11 * 4);
              LOCK();
              bVar21 = uVar10 == *puVar1;
              if (bVar21) {
                *puVar1 = uVar9;
              }
              UNLOCK();
            } while (!bVar21);
            FUN_146795211(param_3,0);
          }
          else {
            *(longlong *)(param_3 + 0x18) = lVar8;
          }
          bVar21 = uVar18 != uVar7;
          uVar7 = uVar18 ^ uVar7;
        } while (bVar21);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != local_70);
  }
LAB_1467a3de7:
  uVar16 = *(ulonglong *)(param_3 + 0x18);
  uVar19 = uVar2 - uVar16;
  if (uVar2 < uVar16) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if ((longlong)uVar19 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (uVar19 != 0) {
    if (DAT_14c80b380 < uVar19) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    LOCK();
    UNLOCK();
    uVar16 = DAT_14c80b380;
    DAT_14c80b380 = DAT_14c80b380 - uVar19;
  }
  *(undefined1 *)(param_3 + -0x20) = 1;
  return uVar16;
}



// FUNCTION 1467a41d6 FUN_1467a41d6 body=103 status=ok
// SIG undefined FUN_1467a41d6(void)

undefined8 FUN_1467a41d6(undefined8 *param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined8 local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_28 = 2;
  FUN_1467a7915(local_20,*param_1,0x80000,param_2);
  FUN_1467a71b0(local_20[0]);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_20[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467a423e FUN_1467a423e body=516 status=ok
// SIG undefined FUN_1467a423e(void)

undefined8 * FUN_1467a423e(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  uint3 uVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  void *_Dst;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  bool bVar11;
  
  lVar4 = DAT_14c80ad08;
  uVar9 = *(ulonglong *)(param_2 + 0x20);
  if ((uVar9 >> 0x30 == 0) && (*(longlong *)(&DAT_14c80b3a0 + (uVar9 >> 0x22) * 8) != 0)) {
    uVar9 = (ulonglong)
            (*(uint *)(*(longlong *)(&DAT_14c80b3a0 + (uVar9 >> 0x22) * 8) +
                      (ulonglong)((uint)(uVar9 >> 0x13) & 0x7fff) * 4) & 0xfffffff9);
  }
  else {
    uVar9 = 0;
  }
  if (((uint)*(ulonglong *)(param_2 + 0x38) & 7) != 4) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = DAT_14c80ad08 + uVar9;
  uVar3 = *(uint3 *)((*(ulonglong *)(param_2 + 0x38) & 0xfffffffffffffff8) + 8);
  if (*(longlong *)(lVar1 + 0x48) != 0) {
    FUN_146794d20(DAT_14c80ad08 + uVar9 + 0x40);
  }
  if (0x1f < *(byte *)(param_2 + 4)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar9 = (ulonglong)uVar3;
  iVar6 = (int)(1L << (*(byte *)(param_2 + 4) & 0x3f));
  if ((-iVar6 & (*(int *)(lVar4 + 0x20 + uVar9 * 8) + iVar6) - 1U) + *(int *)(param_2 + 0x1c) == 0)
  {
    *(undefined4 *)(lVar4 + 0x20 + uVar9 * 8) = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((0xd < (uint)(int)*(char *)(param_2 + 8)) ||
     ((0x2aa8U >> ((int)*(char *)(param_2 + 8) & 0x1fU) & 1) == 0)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (((uint)*(ulonglong *)(param_2 + 0x38) & 7) != 4) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar9 = 0xffffffffffffffff;
  bVar5 = false;
  uVar8 = 0xffffffffffffffff;
  uVar7 = 0;
  do {
    bVar11 = *(int *)(param_2 + 0x40 + uVar7 * 4) != 0;
    if (bVar11) {
      uVar8 = uVar7;
    }
    if (bVar11 && !bVar5) {
      bVar5 = true;
      uVar9 = uVar7;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != 0x20);
  if (bVar5) {
    uVar8 = (uVar8 + 1) - uVar9;
    if (uVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (0xff < uVar8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    puVar10 = (undefined8 *)(*(ulonglong *)(param_2 + 0x38) & 0xfffffffffffffff8);
    *(char *)((longlong)puVar10 + 0xf) = (char)uVar8;
    if (0xff < uVar9) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    *(char *)(puVar10 + 2) = (char)uVar9;
    _Dst = (void *)FUN_146788523(uVar8 * 4,4,"pas_segregated_partial_view/alloc_bits",0);
    memcpy(_Dst,(void *)(param_2 + 0x40 + uVar9 * 4),uVar8 * 4);
    *puVar10 = (void *)((longlong)_Dst + uVar9 * -4);
    ReleaseSRWLockExclusive(*(PSRWLOCK *)(lVar1 + 0x48));
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    *param_1 = 0;
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



// FUNCTION 1467a4442 FUN_1467a4442 body=2 status=ok
// SIG undefined FUN_1467a4442(void)

void FUN_1467a4442(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1467a4444 FUN_1467a4444 body=4001 status=ok
// SIG undefined FUN_1467a4444(void)

/* WARNING: Removing unreachable block (ram,0x0001467a4f65) */
/* WARNING: Removing unreachable block (ram,0x0001467a4d8f) */
/* WARNING: Removing unreachable block (ram,0x0001467a4e1a) */
/* WARNING: Removing unreachable block (ram,0x0001467a523a) */

ulonglong FUN_1467a4444(longlong param_1)

{
  ulonglong *puVar1;
  char *pcVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  PSRWLOCK pRVar9;
  code *pcVar10;
  char cVar11;
  BOOLEAN BVar12;
  byte bVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined4 *puVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined4 *puVar22;
  ulonglong uVar23;
  undefined4 *puVar24;
  ulonglong uVar25;
  ulonglong *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  bool bVar29;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  ulonglong local_98;
  longlong local_90;
  ulonglong *local_88;
  ulonglong local_80;
  ulonglong local_78;
  PSRWLOCK local_70;
  undefined1 local_68 [16];
  PSRWLOCK local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar23 = *(ulonglong *)(param_1 + 0x38);
  if (((uint)uVar23 & 7) == 5) {
    uVar23 = uVar23 & 0xfffffffffffffff8;
  }
  else {
    uVar23 = FUN_146799574(uVar23);
  }
  plVar7 = *(longlong **)(uVar23 + 0x18);
  if (((*(byte *)(*plVar7 + 4) & 1) == 0) &&
     (uVar27 = (ulonglong)*(uint *)((longlong)plVar7 + 0x24), uVar27 != 0)) {
    uVar15 = plVar7[1];
    if (uVar15 != 0) {
      uVar28 = uVar15 & 0xfffffffffe000000;
      uVar15 = (ulonglong)((uint)uVar15 & 0x1ffffff);
      uVar25 = uVar15 - 0x4008 >> 0xe;
      uVar15 = (uVar15 + uVar27 * 4) - 0x4001 >> 0xe;
      do {
        uVar8 = *(ulonglong *)(uVar28 + 0x18 + uVar25 * 8);
        uVar14 = (uint)uVar8 & 7;
        if (uVar14 == 2) break;
        if (uVar14 == 1) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        if ((uVar8 & 7) == 0) break;
        puVar26 = (ulonglong *)(uVar28 + 0x18 + uVar25 * 8);
        LOCK();
        bVar29 = uVar8 == *puVar26;
        if (bVar29) {
          *puVar26 = uVar8 & 0xfffffffffffffff8 | 2;
        }
        UNLOCK();
      } while (!bVar29);
      if (uVar25 != uVar15) {
        do {
          uVar25 = *(ulonglong *)(uVar28 + 0x18 + uVar15 * 8);
          if (((uint)uVar25 & 7) < 3) break;
          puVar26 = (ulonglong *)(uVar28 + 0x18 + uVar15 * 8);
          LOCK();
          bVar29 = uVar25 == *puVar26;
          if (bVar29) {
            *puVar26 = uVar25 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar29);
      }
    }
    uVar15 = plVar7[2];
    if (uVar15 != 0) {
      uVar28 = uVar15 & 0xfffffffffe000000;
      uVar15 = (ulonglong)((uint)uVar15 & 0x1ffffff);
      uVar25 = uVar15 - 0x4008 >> 0xe;
      uVar27 = (uVar15 + uVar27 * 4) - 0x4001 >> 0xe;
      do {
        uVar15 = *(ulonglong *)(uVar28 + 0x18 + uVar25 * 8);
        uVar14 = (uint)uVar15 & 7;
        if (uVar14 == 2) break;
        if (uVar14 == 1) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        if ((uVar15 & 7) == 0) break;
        puVar26 = (ulonglong *)(uVar28 + 0x18 + uVar25 * 8);
        LOCK();
        bVar29 = uVar15 == *puVar26;
        if (bVar29) {
          *puVar26 = uVar15 & 0xfffffffffffffff8 | 2;
        }
        UNLOCK();
      } while (!bVar29);
      if (uVar25 != uVar27) {
        do {
          uVar15 = *(ulonglong *)(uVar28 + 0x18 + uVar27 * 8);
          if (((uint)uVar15 & 7) < 3) break;
          puVar26 = (ulonglong *)(uVar28 + 0x18 + uVar27 * 8);
          LOCK();
          bVar29 = uVar15 == *puVar26;
          if (bVar29) {
            *puVar26 = uVar15 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar29);
      }
    }
  }
  lVar20 = (ulonglong)*(uint *)((longlong)plVar7 + 0x1c) * 8 + DAT_14c80ad08;
  if (lVar20 != 0 && (ulonglong)*(uint *)((longlong)plVar7 + 0x1c) != 0) {
    lVar18 = (ulonglong)*(uint *)(lVar20 + 8) * 8 + DAT_14c80ad08;
    if ((ulonglong)*(uint *)(lVar20 + 8) == 0) {
      lVar18 = 0;
    }
    if ((ulonglong)*(uint *)(lVar20 + 0xc) != 0) {
      if (lVar18 == 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
      uVar15 = (lVar18 - DAT_14c80acf8) - 8U >> 0xe;
      uVar27 = ((lVar18 - DAT_14c80acf8) + (ulonglong)*(uint *)(lVar20 + 0xc) * 0x10) - 1 >> 0xe;
      do {
        uVar28 = *(ulonglong *)(&DAT_14c8084f8 + uVar15 * 8);
        uVar14 = (uint)uVar28 & 7;
        if (uVar14 == 2) break;
        if (uVar14 == 1) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        if ((uVar28 & 7) == 0) break;
        LOCK();
        bVar29 = uVar28 == *(ulonglong *)(&DAT_14c8084f8 + uVar15 * 8);
        if (bVar29) {
          *(ulonglong *)(&DAT_14c8084f8 + uVar15 * 8) = uVar28 & 0xfffffffffffffff8 | 2;
        }
        UNLOCK();
      } while (!bVar29);
      if (uVar15 != uVar27) {
        do {
          uVar15 = *(ulonglong *)(&DAT_14c8084f8 + uVar27 * 8);
          if (((uint)uVar15 & 7) < 3) break;
          LOCK();
          bVar29 = uVar15 == *(ulonglong *)(&DAT_14c8084f8 + uVar27 * 8);
          if (bVar29) {
            *(ulonglong *)(&DAT_14c8084f8 + uVar27 * 8) = uVar15 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar29);
      }
    }
  }
  *(undefined2 *)(param_1 + 1) = 0x100;
  cVar11 = FUN_146790ea6();
  if (cVar11 != '\0') {
    FUN_146790ecd();
  }
  uVar27 = *(ulonglong *)(param_1 + 0x20);
  if (uVar27 == 0) {
    lVar20 = 0;
    uVar27 = 0;
  }
  else {
    if (((uVar27 & 0xfffffffffff80000) < 0x1000000000000) &&
       (*(longlong *)(&DAT_14c80b3a0 + (uVar27 >> 0x22) * 8) != 0)) {
      uVar27 = (ulonglong)
               (*(uint *)(*(longlong *)(&DAT_14c80b3a0 + (uVar27 >> 0x22) * 8) +
                         (ulonglong)((uint)(uVar27 >> 0x13) & 0x7fff) * 4) & 0xfffffff9);
    }
    else {
      uVar27 = 0;
    }
    lVar20 = DAT_14c80ad08 + uVar27 + 0x40;
    uVar27 = *(ulonglong *)(DAT_14c80ad08 + uVar27 + 0x60);
    if ((uVar27 & 6) != 0) {
      if (((uint)uVar27 & 7) != 3) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
      uVar27 = *(ulonglong *)(param_1 + 0x38);
      if (((uint)uVar27 & 7) != 4) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
    }
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar15 = uVar23 | 5;
  if (uVar23 == 0) {
    uVar15 = 0;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(ulonglong *)(param_1 + 0x38) = uVar15;
  *(undefined1 *)(param_1 + 8) = 0xc;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  puVar26 = *(ulonglong **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (1 < puVar26[0x55]) {
    FUN_14679ea20(puVar26[0x55],param_1);
  }
  local_70 = (PSRWLOCK)0x0;
  local_88 = puVar26;
  if (uVar27 == 0) {
LAB_1467a47d8:
    uVar15 = FUN_146798201(uVar23);
    lVar18 = DAT_14c80ad08;
    local_80 = uVar23;
    if (uVar15 == 0) {
LAB_1467a499c:
      uVar15 = 0;
    }
    else {
      uVar14 = (uint)uVar15 & 7;
      if (1 < uVar14) {
        if (uVar14 == 4) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        goto LAB_1467a530b;
      }
      puVar26 = (ulonglong *)(uVar15 & 0xfffffffffffffff8);
      if (*(char *)((longlong)puVar26 + 0xb) == '\0') {
        uVar23 = (ulonglong)(uint3)puVar26[1];
        local_98 = uVar15;
        if (*puVar26 == 0) {
          cVar11 = *(char *)(DAT_14c80ad08 + 0xd + uVar23 * 8);
          if (cVar11 != '\x01') {
            if (cVar11 != '\x02') {
              if (cVar11 != '\0') {
                    /* WARNING: Does not return */
                pcVar10 = (code *)invalidInstructionException();
                (*pcVar10)();
              }
                    /* WARNING: Does not return */
              pcVar10 = (code *)invalidInstructionException();
              (*pcVar10)();
            }
            local_a8 = 0;
            FUN_14678ec28(0x80000,&DAT_149dfdb30,0,0);
            uVar28 = *puVar26;
            if (uVar28 != 0) goto LAB_1467a492d;
          }
          local_90 = param_1;
          local_78 = uVar27;
          FUN_14678f287(local_68);
          do {
            if (*puVar26 != 0) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)invalidInstructionException();
              (*pcVar10)();
            }
            FUN_14678f28e(local_68);
            AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
            local_a8 = CONCAT44(local_a8._4_4_,2);
            FUN_1467a7915(local_58,**(undefined8 **)(lVar18 + 0x18 + uVar23 * 8),0x80000,local_68);
            pRVar9 = local_58[0];
            FUN_1467a71b0(local_58[0]);
            *puVar26 = (ulonglong)pRVar9;
            if (pRVar9 != (PSRWLOCK)0x0) {
              FUN_1467a2b88(pRVar9,4,1);
            }
            ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
            cVar11 = FUN_14678f2c1(local_68);
          } while (cVar11 == '\0');
          uVar28 = *puVar26;
          param_1 = local_90;
          uVar27 = local_78;
          if (uVar28 == 0) goto LAB_1467a499c;
        }
        else {
          pRVar9 = (PSRWLOCK)(puVar26 + 2);
          AcquireSRWLockExclusive(pRVar9);
          cVar11 = *(char *)(lVar18 + 0xd + uVar23 * 8);
          local_58[0] = pRVar9;
          if (cVar11 != '\x01') {
            if (cVar11 != '\x02') {
              if (cVar11 != '\0') {
                    /* WARNING: Does not return */
                pcVar10 = (code *)invalidInstructionException();
                (*pcVar10)();
              }
                    /* WARNING: Does not return */
              pcVar10 = (code *)invalidInstructionException();
              (*pcVar10)();
            }
            local_a8 = 1;
            FUN_14678ec28(0x80000,&DAT_149dfdb30,0,local_58);
          }
          FUN_14678d48b(*puVar26,&DAT_149dfdb30);
          FUN_1467a2b88(*puVar26,4,0);
          ReleaseSRWLockExclusive(pRVar9);
          uVar28 = *puVar26;
        }
LAB_1467a492d:
        uVar15 = local_98;
        if (uVar28 < 0x1000000000000) {
          if (*(longlong *)(&DAT_14c80b3a0 + (uVar28 >> 0x22) * 8) == 0) {
            uVar23 = 0;
          }
          else {
            uVar23 = (ulonglong)
                     (*(uint *)(*(longlong *)(&DAT_14c80b3a0 + (uVar28 >> 0x22) * 8) +
                               (ulonglong)((uint)(uVar28 >> 0x13) & 0x7fff) * 4) & 0xfffffff9);
          }
        }
        else {
          uVar23 = 0;
        }
        uVar28 = 0;
        FUN_146794f45(DAT_14c80ad08 + uVar23 + 0x40,(longlong)puVar26 + 1,0,&DAT_149dfdb30);
        uVar23 = *puVar26;
        if (uVar23 < 0x1000000000000) {
          if (*(longlong *)(&DAT_14c80b3a0 + (uVar23 >> 0x22) * 8) == 0) {
            uVar28 = 0;
          }
          else {
            uVar28 = (ulonglong)
                     (*(uint *)(*(longlong *)(&DAT_14c80b3a0 + (uVar23 >> 0x22) * 8) +
                               (ulonglong)((uint)(uVar23 >> 0x13) & 0x7fff) * 4) & 0xfffffff9);
          }
        }
        FUN_1467a78f0(DAT_14c80ad08 + uVar28 + 0x10);
        AcquireSRWLockExclusive((PSRWLOCK)(puVar26 + 3));
        *(undefined1 *)((longlong)puVar26 + 0xb) = 1;
        ReleaseSRWLockExclusive((PSRWLOCK)(puVar26 + 3));
      }
    }
    if (uVar27 != 0) {
      if (local_70 != *(PSRWLOCK *)(lVar20 + 8)) {
        local_70 = (PSRWLOCK)FUN_146794d20(lVar20);
      }
      lVar18 = DAT_14c80ad08;
      uVar14 = (uint)uVar27 & 7;
      if (uVar14 < 2) {
        uVar27 = uVar27 & 0xfffffffffffffff8;
        cVar11 = *(char *)(lVar20 + 2);
        if (cVar11 == '\x01') {
          *(undefined1 *)(lVar20 + 2) = 0;
        }
        uVar5 = *(undefined4 *)(uVar27 + 0xc);
        if (*(longlong *)(lVar20 + 0x18) == 0) {
          bVar29 = true;
        }
        else {
          lVar18 = 299;
          do {
            bVar29 = lVar18 != 0xab;
            if (lVar18 == 0xab) break;
            pcVar2 = (char *)(lVar20 + lVar18);
            lVar18 = lVar18 + -1;
          } while (*pcVar2 != '\0');
        }
        lVar18 = (ulonglong)
                 ((uint)*(byte *)(uVar27 + 10) * 0x80000 + (uint)*(ushort *)(uVar27 + 8) * 8) +
                 DAT_14c80ad08;
        *(undefined1 *)(lVar20 + 1) = 0;
        if (cVar11 != '\0') {
          FUN_146791662(lVar18,uVar5);
        }
        if (bVar29) {
          FUN_146791740(lVar18,uVar5);
        }
      }
      else {
        if (uVar14 != 4) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        uVar27 = uVar27 & 0xfffffffffffffff8;
        uVar28 = (ulonglong)
                 ((uint)*(byte *)(uVar27 + 10) * 0x80000 + (uint)*(ushort *)(uVar27 + 8) * 8);
        uVar23 = *(ulonglong *)(uVar28 + DAT_14c80ad08);
        if ((uVar23 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        local_98 = uVar15;
        if ((*(byte *)(uVar27 + 0x11) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        bVar13 = *(byte *)(uVar27 + 0xd);
        uVar4 = *(ushort *)(uVar27 + 0xb);
        lVar21 = *(longlong *)((uVar23 & 0xfffffffffffffffe) + 8);
        if ((*(PSRWLOCK *)(lVar20 + 8) != (PSRWLOCK)0x0) &&
           (BVar12 = TryAcquireSRWLockExclusive(*(PSRWLOCK *)(lVar20 + 8)), BVar12 != '\0')) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        uVar28 = uVar28 + lVar18;
        if (*(int *)(uVar28 + 0x24) == 1) {
          if (*(longlong *)(lVar20 + 0x18) == 0) {
            bVar29 = true;
          }
          else {
            lVar16 = 299;
            do {
              bVar29 = lVar16 != 0xab;
              if (lVar16 == 0xab) break;
              pcVar2 = (char *)(lVar20 + lVar16);
              lVar16 = lVar16 + -1;
            } while (*pcVar2 != '\0');
          }
        }
        else {
          bVar29 = false;
        }
        bVar3 = *(byte *)(uVar27 + 0x11);
        *(byte *)(uVar27 + 0x11) = bVar3 & 0xfc;
        iVar6 = *(int *)(uVar28 + 0x24);
        local_90 = lVar21;
        if ((bVar3 & 2) == 0) {
          if (iVar6 == 0) {
LAB_1467a5212:
                    /* WARNING: Does not return */
            pcVar10 = (code *)invalidInstructionException();
            (*pcVar10)();
          }
          *(int *)(uVar28 + 0x24) = iVar6 + -1;
        }
        else {
          if (iVar6 == 0) goto LAB_1467a5212;
          *(int *)(uVar28 + 0x24) = iVar6 + -1;
          if ((*(byte *)(uVar27 + 0x11) & 4) == 0) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)invalidInstructionException();
            (*pcVar10)();
          }
          FUN_146791720((ulonglong)((uint)bVar13 * 0x80000 + (uint)uVar4 * 8) + lVar18,uVar27 | 4);
        }
        uVar15 = local_98;
        if (bVar29) {
          if (*(int *)(uVar28 + 0x24) != 0) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)invalidInstructionException();
            (*pcVar10)();
          }
          FUN_1467918b2(local_90,uVar28 | 2);
        }
      }
    }
    uVar23 = local_80;
    if (uVar15 == 0) {
      if (local_70 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(local_70);
        local_70 = (PSRWLOCK)0x0;
      }
      uVar23 = 0;
      goto LAB_1467a4f27;
    }
    if ((uVar15 & 6) != 0) {
      if (((uint)uVar15 & 7) != 4) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
      uVar14 = (uint)*(uint3 *)((uVar15 & 0xfffffffffffffff8) + 8);
      puVar26 = (ulonglong *)(DAT_14c80ad08 + (ulonglong)uVar14 * 8);
      if (puVar26 != (ulonglong *)0x0 && uVar14 != 0) {
        uVar23 = *puVar26;
        uVar27 = uVar23;
        if ((uVar23 & 1) != 0) {
          uVar27 = *(ulonglong *)(uVar23 & 0xfffffffffffffffe);
        }
        if ((uVar27 < 0x1000000000000) &&
           (*(longlong *)(&DAT_14c80b3a0 + (uVar27 >> 0x22) * 8) != 0)) {
          uVar27 = (ulonglong)
                   (*(uint *)(*(longlong *)(&DAT_14c80b3a0 + (uVar27 >> 0x22) * 8) +
                             (ulonglong)((uint)(uVar27 >> 0x13) & 0x7fff) * 4) & 0xfffffff9);
        }
        else {
          uVar27 = 0;
        }
        pRVar9 = *(PSRWLOCK *)(uVar27 + 0x48 + DAT_14c80ad08);
        if (local_70 != pRVar9) {
          local_70 = (PSRWLOCK)FUN_146794d20(uVar27 + DAT_14c80ad08 + 0x40,local_70,pRVar9);
          uVar23 = *puVar26;
        }
        if ((uVar23 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        }
        FUN_146795992(uVar15 & 0xfffffffffffffff8,puVar26,uVar23 & 0xfffffffffffffffe);
LAB_1467a536c:
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
      if (local_70 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(local_70);
        local_70 = (PSRWLOCK)0x0;
      }
      FUN_1467a4442();
LAB_1467a530b:
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    puVar26 = (ulonglong *)(uVar15 & 0xfffffffffffffff8);
    uVar27 = *puVar26;
    if ((uVar27 < 0x1000000000000) && (*(longlong *)(&DAT_14c80b3a0 + (uVar27 >> 0x22) * 8) != 0)) {
      uVar27 = (ulonglong)
               (*(uint *)(*(longlong *)(&DAT_14c80b3a0 + (uVar27 >> 0x22) * 8) +
                         (ulonglong)((uint)(uVar27 >> 0x13) & 0x7fff) * 4) & 0xfffffff9);
    }
    else {
      uVar27 = 0;
    }
    lVar18 = DAT_14c80ad08 + uVar27;
    lVar20 = DAT_14c80ad08 + uVar27 + 0x40;
    if (local_70 != *(PSRWLOCK *)(DAT_14c80ad08 + uVar27 + 0x48)) {
      local_70 = (PSRWLOCK)FUN_146794d20(lVar20);
    }
    *(undefined1 *)(lVar18 + 0x41) = 1;
    FUN_146795544(lVar20,&local_70,0);
    *(ulonglong *)(lVar18 + 0x60) = uVar15 | 1;
  }
  else {
    if (((uint)uVar27 & 7) == 4) {
      uVar15 = uVar27 & 0xfffffffffffffff8;
      bVar13 = *(byte *)(uVar15 + 0x11);
      if ((bVar13 & 4) != 0) {
        if (*(longlong *)(lVar20 + 8) != 0) {
          local_70 = (PSRWLOCK)FUN_146794d20(lVar20,0);
          bVar13 = *(byte *)(uVar15 + 0x11);
        }
        *(byte *)(uVar15 + 0x11) = bVar13 & 0xf9;
        goto LAB_1467a536c;
      }
      goto LAB_1467a47d8;
    }
    if ((uVar27 & 7) != 0) goto LAB_1467a47d8;
    puVar26 = (ulonglong *)(uVar27 & 0xfffffffffffffff8);
    if (*(longlong *)(lVar20 + 8) != 0) {
      local_70 = (PSRWLOCK)FUN_146794d20(lVar20,0);
    }
    *(ulonglong *)(lVar20 + 0x20) = uVar27 | 1;
    *(undefined1 *)(lVar20 + 2) = 0;
  }
  lVar18 = DAT_14c80b370;
  uVar27 = *(ulonglong *)(lVar20 + -0x40);
  if (*(longlong *)(lVar20 + 0x18) == 0) {
    if ((DAT_14c80b370 != 0) && (*(longlong *)(lVar20 + -0x30) != DAT_14c80b370)) {
      *(longlong *)(lVar20 + -0x30) = DAT_14c80b370;
    }
    if (*(longlong *)(lVar20 + -0x28) != 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    if (0xffffffffffff < uVar27) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    uVar19 = (uint)(uVar27 >> 0x13) & 0x7fff;
    uVar14 = *(uint *)(*(longlong *)(&DAT_14c80b3a0 + (uVar27 >> 0x22) * 8) + (ulonglong)uVar19 * 4)
    ;
    if ((uVar14 & 3) != 2) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    uVar15 = (ulonglong)(uVar14 & 0xfffffff8);
    if (DAT_14c80ad08 + uVar15 + 0x40 != lVar20) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    if ((uVar14 & 4) != 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    if (DAT_14c80ad08 + uVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    if (DAT_14c758498 <= uVar15) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    *(uint *)(*(longlong *)(&DAT_14c80b3a0 + (uVar27 >> 0x22) * 8) + (ulonglong)uVar19 * 4) =
         uVar14 | 6;
    FUN_146791f2a(puVar26);
    lVar18 = DAT_14c80ad08;
    uVar15 = (ulonglong)*(uint *)(uVar23 + 0x30);
    iVar6 = *(int *)(DAT_14c80ad08 + uVar15 * 8);
    uVar14 = *(uint *)(DAT_14c80ad08 + 4 + uVar15 * 8);
    uVar23 = (ulonglong)*(uint *)(DAT_14c80ad08 + 8 + uVar15 * 8);
    *(ulonglong *)(lVar20 + 0x18) = uVar23;
    if (uVar23 != 0) {
      uVar23 = DAT_14c80b380 + uVar23;
      if (uVar23 <= DAT_14c80b380) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
      LOCK();
      UNLOCK();
      DAT_14c80b380 = uVar23;
      if (uVar23 == 0xffffffffffffffff) {
        (*(code *)0x0)();
      }
    }
    lVar21 = uVar14 + uVar27;
    *(longlong *)(param_1 + 0x10) = lVar21;
    *(int *)(param_1 + 0x18) = (int)lVar21 - (iVar6 + (int)uVar27);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(ulonglong *)(param_1 + 0x20) = uVar27;
    uVar23 = (ulonglong)*(uint *)(lVar18 + 0xc + uVar15 * 8);
    if (uVar23 < 8) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    puVar22 = (undefined4 *)(uVar23 + DAT_14c80ad08);
    puVar24 = (undefined4 *)(lVar20 + 0x2c);
    for (lVar18 = 0x20; lVar18 != 0; lVar18 = lVar18 + -1) {
      *puVar24 = *puVar22;
      puVar22 = puVar22 + 1;
      puVar24 = puVar24 + 1;
    }
  }
  else {
    if (DAT_14c80b370 != 0) {
      puVar1 = local_88 + 0x55;
      uVar15 = (ulonglong)*(uint *)(**(longlong **)(uVar23 + 0x18) + 0xd8);
      do {
        bVar29 = uVar15 == 0;
        uVar15 = uVar15 - 1;
        if (bVar29) goto LAB_1467a4e26;
      } while (*(longlong *)(*(longlong *)(**(longlong **)(uVar23 + 0x18) + 0xd0) + uVar15 * 8) !=
               DAT_14c80b378);
      if (*(longlong *)(lVar20 + -0x30) != DAT_14c80b370) {
        local_90 = param_1;
        local_80 = uVar23;
        if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x114) == '\0') {
          __dyn_tls_on_demand_init();
        }
        uVar23 = *puVar1;
        local_98 = 0;
        if (uVar23 != 1) {
          local_98 = uVar23;
        }
        *(undefined1 *)(lVar20 + -0x1f) = 1;
        pRVar9 = (PSRWLOCK)(puVar26 + 3);
        local_88 = puVar1;
        ReleaseSRWLockExclusive(pRVar9);
        puVar17 = (undefined4 *)FUN_146773d17(0x80);
        puVar22 = (undefined4 *)(lVar20 + 0x2c);
        puVar24 = puVar17;
        for (lVar21 = 0x20; lVar21 != 0; lVar21 = lVar21 + -1) {
          *puVar24 = *puVar22;
          puVar22 = puVar22 + 1;
          puVar24 = puVar24 + 1;
        }
        AcquireSRWLockExclusive(pRVar9);
        *(undefined1 *)(lVar20 + -0x1f) = 0;
        if (*(longlong *)(lVar20 + -0x30) == lVar18) {
          ReleaseSRWLockExclusive(pRVar9);
          FUN_146773e73(puVar17);
          AcquireSRWLockExclusive(pRVar9);
        }
        else {
          *(longlong *)(lVar20 + -0x30) = lVar18;
          if (*(longlong *)(lVar20 + -0x28) != 0) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)invalidInstructionException();
            (*pcVar10)();
          }
          if (puVar17 == (undefined4 *)0x0) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)invalidInstructionException();
            (*pcVar10)();
          }
          *(undefined4 **)(lVar20 + -0x28) = puVar17;
        }
        uVar23 = local_80;
        puVar1 = local_88;
        param_1 = local_90;
        if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x114) == '\0') {
          __dyn_tls_on_demand_init();
        }
        uVar15 = 0;
        if (*puVar1 != 1) {
          uVar15 = *puVar1;
        }
        if (uVar15 != local_98) {
          param_1 = (param_1 - local_98) + uVar15;
        }
      }
    }
LAB_1467a4e26:
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_146791f2a(puVar26);
    uVar28 = (ulonglong)*(uint *)(uVar23 + 0x30);
    uVar15 = (ulonglong)*(uint *)(DAT_14c80ad08 + 0xc + uVar28 * 8);
    if (uVar15 < 8) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    uVar14 = *(uint *)(DAT_14c80ad08 + uVar28 * 8);
    uVar19 = *(uint *)(DAT_14c80ad08 + 4 + uVar28 * 8);
    lVar18 = uVar15 + DAT_14c80ad08;
    *(uint *)(param_1 + 0x28) = uVar14 >> 0xf;
    *(uint *)(param_1 + 0x2c) = ((uVar19 >> 9) - 1 >> 6) + 1;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(ulonglong *)(param_1 + 0x20) = uVar27 + (uVar14 & 0xffff8000);
    lVar21 = 0;
    do {
      uVar14 = *(uint *)(lVar18 + lVar21 * 4);
      uVar19 = *(uint *)(lVar20 + 0x2c + lVar21 * 4);
      *(uint *)(param_1 + 0x40 + lVar21 * 4) = ~uVar19 & uVar14;
      *(uint *)(lVar20 + 0x2c + lVar21 * 4) = uVar19 | uVar14;
      lVar21 = lVar21 + 1;
    } while (lVar21 != 0x20);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
    puVar22 = (undefined4 *)
              (ulonglong)*(uint *)(DAT_14c80ad08 + 8 + (ulonglong)*(uint *)(uVar23 + 0x30) * 8);
    lVar18 = (longlong)puVar22 - *(longlong *)(lVar20 + 0x18);
    if (lVar18 < 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    if (lVar18 != 0) {
      uVar23 = DAT_14c80b380 + lVar18;
      if (uVar23 <= DAT_14c80b380) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
      LOCK();
      UNLOCK();
      DAT_14c80b380 = uVar23;
      if (uVar23 == 0xffffffffffffffff) {
        (*(code *)0x0)();
      }
    }
    *(undefined4 **)(lVar20 + 0x18) = puVar22;
  }
  uVar23 = CONCAT71((int7)((ulonglong)puVar22 >> 8),1);
  if (local_70 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_70);
    local_70 = (PSRWLOCK)0x0;
  }
LAB_1467a4f27:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23 & 0xffffffff;
}



// FUNCTION 1467a53e6 FUN_1467a53e6 body=1767 status=ok
// SIG undefined FUN_1467a53e6(void)

/* WARNING: Removing unreachable block (ram,0x0001467a5574) */

ulonglong FUN_1467a53e6(longlong param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  ulonglong uVar2;
  uint uVar3;
  byte bVar4;
  code *pcVar5;
  byte bVar6;
  BOOLEAN BVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  void *_Dst;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  char cVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  bool bVar22;
  ulonglong local_60;
  
  uVar9 = (uint)param_2 & 7;
  if (1 < uVar9) {
    if (uVar9 != 4) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  BVar7 = TryAcquireSRWLockExclusive(*(PSRWLOCK *)(param_3 + 8));
  if (BVar7 != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar2 = *(ulonglong *)(param_3 + 0x18);
  if (((uint)(int)*(char *)(param_1 + 8) < 0xe) &&
     ((0x2aa8U >> ((int)*(char *)(param_1 + 8) & 0x1fU) & 1) != 0)) {
    if (((uint)*(ulonglong *)(param_1 + 0x38) & 7) != 4) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar18 = 0xffffffffffffffff;
    bVar8 = false;
    uVar20 = 0xffffffffffffffff;
    uVar14 = 0;
    do {
      bVar22 = *(int *)(param_1 + 0x40 + uVar14 * 4) != 0;
      if (bVar22) {
        uVar20 = uVar14;
      }
      if (bVar22 && !bVar8) {
        bVar8 = true;
        uVar18 = uVar14;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != 0x20);
    if (!bVar8) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar20 = (uVar20 + 1) - uVar18;
    if (uVar20 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    if (0xff < uVar20) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    puVar16 = (undefined8 *)(*(ulonglong *)(param_1 + 0x38) & 0xfffffffffffffff8);
    *(char *)((longlong)puVar16 + 0xf) = (char)uVar20;
    if (0xff < uVar18) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    *(char *)(puVar16 + 2) = (char)uVar18;
    _Dst = (void *)FUN_146788523(uVar20 * 4,4,"pas_segregated_partial_view/alloc_bits",0);
    memcpy(_Dst,(void *)(param_1 + 0x40 + uVar18 * 4),uVar20 * 4);
    *puVar16 = (void *)((longlong)_Dst + uVar18 * -4);
  }
  uVar18 = (ulonglong)*(uint *)(param_1 + 0x18);
  if (uVar18 != 0) {
    uVar20 = *(ulonglong *)(param_1 + 0x10);
    uVar14 = uVar20 - uVar18;
    if (uVar18 <= uVar20) {
      uVar9 = *(uint *)(param_1 + 0x1c);
      do {
        uVar3 = (uint)(uVar14 >> 0xc);
        bVar4 = (byte)(uVar14 >> 9) & 0x1f;
        puVar1 = (uint *)(param_3 + 0x2c + (ulonglong)(uVar3 & 0x7c));
        *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
        uVar18 = *(ulonglong *)(param_3 + 0x20);
        if ((uVar18 & 7) != 0) {
          uVar18 = uVar18 & 0xfffffffffffffff8;
          if (*(char *)(param_3 + 1) == '\x01') {
            *(undefined1 *)(param_3 + 2) = 1;
          }
          else {
            FUN_146791662((ulonglong)
                          ((uint)*(byte *)(uVar18 + 10) * 0x80000 +
                          (uint)*(ushort *)(uVar18 + 8) * 8) + DAT_14c80ad08,
                          *(undefined4 *)(uVar18 + 0xc));
          }
          *(ulonglong *)(param_3 + 0x20) = uVar18;
        }
        uVar10 = (uint)uVar14 & 0x7ffff;
        if ((uVar18 & 6) == 0) {
          uVar11 = *(uint *)(param_3 + 4);
        }
        else {
          if (((uint)uVar18 & 7) != 3) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar18 = (ulonglong)
                   *(uint *)((uVar18 & 0xfffffffffffffff8) + 0x14 + (ulonglong)(uVar10 >> 9) * 4);
          lVar13 = DAT_14c80ad08 + uVar18 * 8;
          if (uVar18 == 0) {
            lVar13 = 0;
          }
          uVar11 = *(uint *)((ulonglong)
                             ((uint)*(byte *)(lVar13 + 0xd) * 0x80000 +
                             (uint)*(ushort *)(lVar13 + 0xb) * 8) + 0x20 + DAT_14c80ad08) &
                   0x7ffffff;
        }
        if (uVar11 != 0) {
          if (0x80000 < (ulonglong)uVar10 + (ulonglong)uVar11) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar18 = ((ulonglong)uVar11 + (ulonglong)uVar10) - 1 >> 0xc;
          if (uVar10 >> 0xc <= uVar18) {
            uVar21 = (ulonglong)(uVar3 & 0x7f) - 1;
            bVar4 = 0;
            do {
              bVar6 = bVar4;
              cVar17 = *(char *)(param_3 + 0xad + uVar21);
              if (cVar17 == '\0') {
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
              if (cVar17 == -1) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
              cVar17 = cVar17 + -1;
              *(char *)(param_3 + 0xad + uVar21) = cVar17;
              uVar21 = uVar21 + 1;
              bVar4 = bVar6 | cVar17 == '\0';
            } while (uVar21 < uVar18);
            if ((bool)(bVar6 | cVar17 == '\0')) {
              FUN_146795211(param_3,1);
            }
          }
        }
        lVar13 = *(longlong *)(param_3 + 0x18) - (ulonglong)*(uint *)(param_3 + 4);
        if (lVar13 == 0) {
          if (*(longlong *)(param_3 + -0x18) != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar18 = *(ulonglong *)(param_3 + -0x40);
          if (0xffffffffffff < uVar18) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar10 = (uint)(uVar18 >> 0x13) & 0x7fff;
          uVar3 = *(uint *)(*(longlong *)(&DAT_14c80b3a0 + (uVar18 >> 0x22) * 8) +
                           (ulonglong)uVar10 * 4);
          if ((uVar3 & 3) != 2) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar21 = (ulonglong)(uVar3 & 0xfffffff8);
          if (DAT_14c80ad08 + uVar21 + 0x40 != param_3) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if ((uVar3 & 4) == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if (DAT_14c80ad08 + uVar21 == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if (DAT_14c758498 <= uVar21) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          *(uint *)(*(longlong *)(&DAT_14c80b3a0 + (uVar18 >> 0x22) * 8) + (ulonglong)uVar10 * 4) =
               uVar3 & 0xfffffff8 | 2;
          FUN_146795211(param_3,0);
        }
        else {
          *(longlong *)(param_3 + 0x18) = lVar13;
        }
        uVar14 = uVar14 + uVar9;
      } while (uVar14 < uVar20);
    }
  }
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x2c)) {
    if (((uint)(int)*(char *)(param_1 + 8) < 0xe) &&
       ((0x2aa8U >> ((int)*(char *)(param_1 + 8) & 0x1fU) & 1) != 0)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    if ((param_2 & 6) == 0) {
      uVar18 = (ulonglong)*(uint *)(DAT_14c80ad08 + 0xc + (ulonglong)*(uint *)(param_4 + 0x30) * 8);
      if (uVar18 < 8) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar13 = DAT_14c80ad08 + uVar18;
      uVar9 = 0;
      local_60 = 0x20;
    }
    else {
      if (((uint)param_2 & 7) != 4) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      plVar15 = (longlong *)(param_2 & 0xfffffffffffffff8);
      if (*(byte *)((longlong)plVar15 + 0xf) == 0) goto LAB_1467a5547;
      uVar9 = (uint)*(byte *)(plVar15 + 2);
      local_60 = (ulonglong)
                 ((uint)*(byte *)((longlong)plVar15 + 0xf) + (uint)*(byte *)(plVar15 + 2));
      lVar13 = *plVar15;
    }
    uVar18 = (ulonglong)uVar9;
    iVar19 = uVar9 << 5;
    do {
      uVar9 = *(uint *)(param_1 + 0x40 + uVar18 * 4) & *(uint *)(lVar13 + uVar18 * 4);
      if (uVar9 != 0) {
        do {
          uVar3 = 0;
          if (uVar9 != 0) {
            for (; (uVar9 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
            }
          }
          uVar10 = uVar3 | (int)uVar18 << 5;
          bVar4 = (byte)uVar10 & 0x1f;
          puVar1 = (uint *)(param_3 + 0x2c + (ulonglong)(uVar10 >> 3 & 0x7c));
          *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
          uVar20 = *(ulonglong *)(param_3 + 0x20);
          if ((uVar20 & 7) != 0) {
            uVar20 = uVar20 & 0xfffffffffffffff8;
            if (*(char *)(param_3 + 1) == '\x01') {
              *(undefined1 *)(param_3 + 2) = 1;
            }
            else {
              FUN_146791662((ulonglong)
                            ((uint)*(byte *)(uVar20 + 10) * 0x80000 +
                            (uint)*(ushort *)(uVar20 + 8) * 8) + DAT_14c80ad08);
            }
            *(ulonglong *)(param_3 + 0x20) = uVar20;
          }
          uVar14 = (ulonglong)((uVar10 & 0x3ff) << 9);
          if ((uVar20 & 6) == 0) {
            uVar11 = *(uint *)(param_3 + 4);
          }
          else {
            if (((uint)uVar20 & 7) != 3) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            uVar20 = (ulonglong)
                     *(uint *)((uVar20 & 0xfffffffffffffff8) + 0x14 +
                              (ulonglong)((uVar10 & 0x3ff) << 2));
            lVar12 = DAT_14c80ad08 + uVar20 * 8;
            if (uVar20 == 0) {
              lVar12 = 0;
            }
            uVar11 = *(uint *)((ulonglong)
                               ((uint)*(byte *)(lVar12 + 0xd) * 0x80000 +
                               (uint)*(ushort *)(lVar12 + 0xb) * 8) + 0x20 + DAT_14c80ad08) &
                     0x7ffffff;
          }
          if (uVar11 != 0) {
            if (0x80000 < uVar14 + uVar11) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            uVar20 = (uVar11 + uVar14) - 1 >> 0xc;
            if ((uVar10 & 0x3ff) >> 3 <= uVar20) {
              uVar14 = (ulonglong)(uVar3 + iVar19 >> 3 & 0x7f) - 1;
              bVar4 = 0;
              do {
                bVar6 = bVar4;
                cVar17 = *(char *)(param_3 + 0xad + uVar14);
                if (cVar17 == '\0') {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)invalidInstructionException();
                  (*pcVar5)();
                }
                if (cVar17 == -1) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)invalidInstructionException();
                  (*pcVar5)();
                }
                cVar17 = cVar17 + -1;
                *(char *)(param_3 + 0xad + uVar14) = cVar17;
                uVar14 = uVar14 + 1;
                bVar4 = bVar6 | cVar17 == '\0';
              } while (uVar14 < uVar20);
              if ((bool)(bVar6 | cVar17 == '\0')) {
                FUN_146795211(param_3,1);
              }
            }
          }
          lVar12 = *(longlong *)(param_3 + 0x18) - (ulonglong)*(uint *)(param_3 + 4);
          if (lVar12 == 0) {
            if (*(longlong *)(param_3 + -0x18) != 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            uVar20 = *(ulonglong *)(param_3 + -0x40);
            if (0xffffffffffff < uVar20) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            uVar11 = (uint)(uVar20 >> 0x13) & 0x7fff;
            uVar10 = *(uint *)(*(longlong *)(&DAT_14c80b3a0 + (uVar20 >> 0x22) * 8) +
                              (ulonglong)uVar11 * 4);
            if ((uVar10 & 3) != 2) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            uVar14 = (ulonglong)(uVar10 & 0xfffffff8);
            if (DAT_14c80ad08 + uVar14 + 0x40 != param_3) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            if ((uVar10 & 4) == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            if (DAT_14c80ad08 + uVar14 == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            if (DAT_14c758498 <= uVar14) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            *(uint *)(*(longlong *)(&DAT_14c80b3a0 + (uVar20 >> 0x22) * 8) + (ulonglong)uVar11 * 4)
                 = uVar10 & 0xfffffff8 | 2;
            FUN_146795211(param_3,0);
          }
          else {
            *(longlong *)(param_3 + 0x18) = lVar12;
          }
          bVar4 = (byte)uVar3 & 0x1f;
          uVar9 = uVar9 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
        } while (uVar9 != 0);
      }
      uVar18 = uVar18 + 1;
      iVar19 = iVar19 + 0x20;
    } while (uVar18 != local_60);
  }
LAB_1467a5547:
  uVar18 = *(ulonglong *)(param_3 + 0x18);
  uVar20 = uVar2 - uVar18;
  if (uVar2 < uVar18) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if ((longlong)uVar20 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (uVar20 != 0) {
    if (DAT_14c80b380 < uVar20) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    LOCK();
    UNLOCK();
    uVar18 = DAT_14c80b380;
    DAT_14c80b380 = DAT_14c80b380 - uVar20;
  }
  *(undefined1 *)(param_3 + -0x20) = 1;
  return uVar18;
}



// FUNCTION 1467a5adb FUN_1467a5adb body=3718 status=ok
// SIG undefined FUN_1467a5adb(void)

/* WARNING: Removing unreachable block (ram,0x0001467a604e) */
/* WARNING: Removing unreachable block (ram,0x0001467a60be) */
/* WARNING: Removing unreachable block (ram,0x0001467a675c) */
/* WARNING: Removing unreachable block (ram,0x0001467a61fd) */

undefined8 FUN_1467a5adb(undefined8 param_1,char *param_2,undefined8 param_3,code *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  ulonglong *puVar4;
  ushort uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  code *pcVar9;
  uint3 uVar10;
  char cVar11;
  BOOLEAN BVar12;
  byte bVar13;
  uint uVar14;
  ulonglong uVar15;
  char *pcVar16;
  PSRWLOCK pRVar17;
  PSRWLOCK pRVar18;
  longlong lVar19;
  PVOID pvVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  PVOID pvVar26;
  longlong lVar27;
  ulonglong uVar28;
  PSRWLOCK pRVar29;
  longlong *plVar30;
  ulonglong uVar31;
  bool bVar32;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  PSRWLOCK local_b0;
  ulonglong local_a8;
  undefined4 *local_a0;
  undefined8 local_98;
  uint *local_90;
  ulonglong *local_88;
  char *local_80;
  code *local_78;
  PSRWLOCK local_70;
  undefined1 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = param_4;
  if ((param_2[3] & 0x7fU) != 2) {
    FUN_14678c309(param_2,0,2);
  }
  if (*param_2 != '\x01') {
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  local_90 = (uint *)(param_2 + 0x28);
  local_80 = param_2 + 0x48;
  do {
    uVar23 = *(ulonglong *)(param_2 + 0x38);
    if (((uint)uVar23 & 7) == 5) {
      pRVar29 = (PSRWLOCK)(uVar23 & 0xfffffffffffffff8);
    }
    else {
      pRVar29 = (PSRWLOCK)FUN_146799574(uVar23);
    }
    plVar30 = pRVar29[3].Ptr;
    if (((*(byte *)(*plVar30 + 4) & 1) == 0) &&
       (uVar23 = (ulonglong)*(uint *)((longlong)plVar30 + 0x24), uVar23 != 0)) {
      uVar22 = plVar30[1];
      if (uVar22 != 0) {
        uVar15 = uVar22 & 0xfffffffffe000000;
        uVar22 = (ulonglong)((uint)uVar22 & 0x1ffffff);
        uVar28 = uVar22 - 0x4008 >> 0xe;
        uVar22 = (uVar22 + uVar23 * 4) - 0x4001 >> 0xe;
        do {
          uVar31 = *(ulonglong *)(uVar15 + 0x18 + uVar28 * 8);
          uVar14 = (uint)uVar31 & 7;
          if (uVar14 == 2) break;
          if (uVar14 == 1) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          if ((uVar31 & 7) == 0) break;
          puVar4 = (ulonglong *)(uVar15 + 0x18 + uVar28 * 8);
          LOCK();
          bVar32 = uVar31 == *puVar4;
          if (bVar32) {
            *puVar4 = uVar31 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar32);
        if (uVar28 != uVar22) {
          do {
            uVar28 = *(ulonglong *)(uVar15 + 0x18 + uVar22 * 8);
            if (((uint)uVar28 & 7) < 3) break;
            puVar4 = (ulonglong *)(uVar15 + 0x18 + uVar22 * 8);
            LOCK();
            bVar32 = uVar28 == *puVar4;
            if (bVar32) {
              *puVar4 = uVar28 & 0xfffffffffffffff8 | 2;
            }
            UNLOCK();
          } while (!bVar32);
        }
      }
      uVar22 = plVar30[2];
      if (uVar22 != 0) {
        uVar15 = uVar22 & 0xfffffffffe000000;
        uVar22 = (ulonglong)((uint)uVar22 & 0x1ffffff);
        uVar28 = uVar22 - 0x4008 >> 0xe;
        uVar23 = (uVar22 + uVar23 * 4) - 0x4001 >> 0xe;
        do {
          uVar22 = *(ulonglong *)(uVar15 + 0x18 + uVar28 * 8);
          uVar14 = (uint)uVar22 & 7;
          if (uVar14 == 2) break;
          if (uVar14 == 1) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          if ((uVar22 & 7) == 0) break;
          puVar4 = (ulonglong *)(uVar15 + 0x18 + uVar28 * 8);
          LOCK();
          bVar32 = uVar22 == *puVar4;
          if (bVar32) {
            *puVar4 = uVar22 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar32);
        if (uVar28 != uVar23) {
          do {
            uVar22 = *(ulonglong *)(uVar15 + 0x18 + uVar23 * 8);
            if (((uint)uVar22 & 7) < 3) break;
            puVar4 = (ulonglong *)(uVar15 + 0x18 + uVar23 * 8);
            LOCK();
            bVar32 = uVar22 == *puVar4;
            if (bVar32) {
              *puVar4 = uVar22 & 0xfffffffffffffff8 | 2;
            }
            UNLOCK();
          } while (!bVar32);
        }
      }
    }
    pRVar17 = DAT_14c80ad08 + *(uint *)((longlong)plVar30 + 0x1c);
    if (pRVar17 != (PSRWLOCK)0x0 && (ulonglong)*(uint *)((longlong)plVar30 + 0x1c) != 0) {
      uVar23 = (ulonglong)*(uint *)((longlong)&pRVar17[1].Ptr + 4);
      pRVar18 = DAT_14c80ad08 + *(uint *)&pRVar17[1].Ptr;
      if ((ulonglong)*(uint *)&pRVar17[1].Ptr == 0) {
        pRVar18 = (PSRWLOCK)0x0;
      }
      if (uVar23 != 0) {
        if (pRVar18 == (PSRWLOCK)0x0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        uVar22 = (ulonglong)((longlong)pRVar18 + (-8 - DAT_14c80acf8)) >> 0xe;
        uVar23 = (longlong)pRVar18 + (uVar23 * 0x10 - DAT_14c80acf8) + -1 >> 0xe;
        do {
          uVar15 = *(ulonglong *)(&DAT_14c8084f8 + uVar22 * 8);
          uVar14 = (uint)uVar15 & 7;
          if (uVar14 == 2) break;
          if (uVar14 == 1) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          if ((uVar15 & 7) == 0) break;
          LOCK();
          bVar32 = uVar15 == *(ulonglong *)(&DAT_14c8084f8 + uVar22 * 8);
          if (bVar32) {
            *(ulonglong *)(&DAT_14c8084f8 + uVar22 * 8) = uVar15 & 0xfffffffffffffff8 | 2;
          }
          UNLOCK();
        } while (!bVar32);
        if (uVar22 != uVar23) {
          do {
            uVar22 = *(ulonglong *)(&DAT_14c8084f8 + uVar23 * 8);
            if (((uint)uVar22 & 7) < 3) break;
            LOCK();
            bVar32 = uVar22 == *(ulonglong *)(&DAT_14c8084f8 + uVar23 * 8);
            if (bVar32) {
              *(ulonglong *)(&DAT_14c8084f8 + uVar23 * 8) = uVar22 & 0xfffffffffffffff8 | 2;
            }
            UNLOCK();
          } while (!bVar32);
        }
      }
    }
    param_2[1] = '\0';
    param_2[2] = '\x01';
    cVar11 = FUN_146790ea6();
    if (cVar11 != '\0') {
      FUN_146790ecd();
    }
    if (*(ulonglong *)(param_2 + 0x20) == 0) {
      uVar23 = 0;
      uVar22 = 0;
    }
    else {
      uVar23 = *(ulonglong *)(param_2 + 0x20) & 0xffffffffffffc000;
      uVar22 = *(ulonglong *)(uVar23 + 0x50);
      uVar23 = uVar23 | 0x30;
      if ((uVar22 & 6) != 0) {
        if (((uint)uVar22 & 7) != 3) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        uVar22 = *(ulonglong *)(param_2 + 0x38);
        if (((uint)uVar22 & 7) != 4) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
      }
    }
    lVar27 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    param_2[0x20] = '\0';
    param_2[0x21] = '\0';
    param_2[0x22] = '\0';
    param_2[0x23] = '\0';
    param_2[0x24] = '\0';
    param_2[0x25] = '\0';
    param_2[0x26] = '\0';
    param_2[0x27] = '\0';
    param_2[0xc] = '\0';
    param_2[0x10] = '\0';
    param_2[0x11] = '\0';
    param_2[0x12] = '\0';
    param_2[0x13] = '\0';
    param_2[0x14] = '\0';
    param_2[0x15] = '\0';
    param_2[0x16] = '\0';
    param_2[0x17] = '\0';
    param_2[0x18] = '\0';
    param_2[0x19] = '\0';
    param_2[0x1a] = '\0';
    param_2[0x1b] = '\0';
    uVar15 = (ulonglong)pRVar29 | 5;
    if (pRVar29 == (PSRWLOCK)0x0) {
      uVar15 = 0;
    }
    local_90[0] = 0;
    local_90[1] = 0;
    local_90[2] = 0;
    local_90[3] = 0;
    *(ulonglong *)(param_2 + 0x38) = uVar15;
    param_2[8] = '\n';
    local_98 = param_1;
    if (*(char *)(lVar27 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    local_88 = (ulonglong *)(lVar27 + 0x2a8);
    if (1 < *local_88) {
      FUN_14679ea20(*local_88,param_2);
    }
    if (uVar22 == 0) {
LAB_1467a5e21:
      uVar15 = FUN_146798201();
      pRVar17 = DAT_14c80ad08;
      if (uVar15 == 0) {
LAB_1467a5e72:
        uVar15 = 0;
      }
      else {
        uVar14 = (uint)uVar15 & 7;
        if (1 < uVar14) goto LAB_1467a6837;
        plVar30 = (longlong *)(uVar15 & 0xfffffffffffffff8);
        if (*(char *)((longlong)plVar30 + 0xb) == '\0') {
          uVar28 = (ulonglong)*(uint3 *)(plVar30 + 1);
          if (*plVar30 == 0) {
            cVar11 = *(char *)((longlong)&DAT_14c80ad08[uVar28 + 1].Ptr + 5);
            if (cVar11 != '\x01') {
              if (cVar11 != '\x02') {
                if (cVar11 == '\0') {
                    /* WARNING: Does not return */
                  pcVar9 = (code *)invalidInstructionException();
                  (*pcVar9)();
                }
                    /* WARNING: Does not return */
                pcVar9 = (code *)invalidInstructionException();
                (*pcVar9)();
              }
              local_b8 = 0;
              FUN_14678ec28(0x4000,&DAT_149dfda48,0,0);
              lVar27 = *plVar30;
              if (lVar27 != 0) goto LAB_1467a5dd3;
            }
            local_b0 = pRVar17;
            FUN_14678f287(&local_70);
            do {
              if (*plVar30 != 0) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)invalidInstructionException();
                (*pcVar9)();
              }
              FUN_14678f28e(&local_70);
              AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
              lVar27 = FUN_1467a2d10(local_b0[uVar28 + 3].Ptr,&local_70,1);
              *plVar30 = lVar27;
              ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
              cVar11 = FUN_14678f2c1(&local_70);
            } while (cVar11 == '\0');
            lVar27 = *plVar30;
            if (lVar27 == 0) goto LAB_1467a5e72;
          }
          else {
            pRVar18 = (PSRWLOCK)(plVar30 + 2);
            local_b0 = pRVar29;
            AcquireSRWLockExclusive(pRVar18);
            pRVar29 = local_b0;
            cVar11 = *(char *)((longlong)&pRVar17[uVar28 + 1].Ptr + 5);
            local_70 = pRVar18;
            if (cVar11 != '\x01') {
              if (cVar11 != '\x02') {
                if (cVar11 == '\0') {
                    /* WARNING: Does not return */
                  pcVar9 = (code *)invalidInstructionException();
                  (*pcVar9)();
                }
                    /* WARNING: Does not return */
                pcVar9 = (code *)invalidInstructionException();
                (*pcVar9)();
              }
              local_b8 = 1;
              FUN_14678ec28(0x4000,&DAT_149dfda48,0,&local_70);
            }
            FUN_14678d48b(*plVar30,&DAT_149dfda48);
            ReleaseSRWLockExclusive(pRVar18);
            lVar27 = *plVar30;
          }
LAB_1467a5dd3:
          FUN_146794f45(lVar27 + 0x30,(longlong)plVar30 + 1,0,&DAT_149dfda48);
          FUN_1467a78f0(*plVar30);
          AcquireSRWLockExclusive((PSRWLOCK)(plVar30 + 3));
          *(undefined1 *)((longlong)plVar30 + 0xb) = 1;
          ReleaseSRWLockExclusive((PSRWLOCK)(plVar30 + 3));
        }
      }
      if (uVar22 == 0) {
        if (uVar15 == 0) goto LAB_1467a65f8;
        pRVar17 = (PSRWLOCK)0x0;
      }
      else {
        if (*(longlong *)(uVar23 + 8) == 0) {
          pRVar17 = (PSRWLOCK)0x0;
        }
        else {
          pRVar17 = (PSRWLOCK)FUN_146794d20(uVar23,0);
        }
        pRVar18 = DAT_14c80ad08;
        uVar14 = (uint)uVar22 & 7;
        if (uVar14 < 2) {
          cVar11 = *(char *)(uVar23 + 2);
          if (cVar11 == '\x01') {
            *(undefined1 *)(uVar23 + 2) = 0;
          }
          uVar22 = uVar22 & 0xfffffffffffffff8;
          lVar19 = (longlong)&DAT_14c80ad08->Ptr +
                   (ulonglong)
                   ((uint)*(byte *)(uVar22 + 10) * 0x80000 + (uint)*(ushort *)(uVar22 + 8) * 8);
          uVar6 = *(undefined4 *)(uVar22 + 0xc);
          lVar27 = *(longlong *)(uVar23 + 0x18);
          *(undefined1 *)(uVar23 + 1) = 0;
          if (cVar11 != '\0') {
            FUN_146791662(lVar19,uVar6);
          }
          if (lVar27 == 0) {
            FUN_146791740(lVar19,uVar6);
          }
        }
        else {
          local_b0 = pRVar17;
          if (uVar14 != 4) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          uVar22 = uVar22 & 0xfffffffffffffff8;
          uVar31 = (ulonglong)
                   ((uint)*(byte *)(uVar22 + 10) * 0x80000 + (uint)*(ushort *)(uVar22 + 8) * 8);
          uVar28 = *(ulonglong *)((longlong)&DAT_14c80ad08->Ptr + uVar31);
          if ((uVar28 & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          if ((*(byte *)(uVar22 + 0x11) & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          uVar14 = (uint)*(byte *)(uVar22 + 0xd);
          uVar5 = *(ushort *)(uVar22 + 0xb);
          local_a0 = *(undefined4 **)((uVar28 & 0xfffffffffffffffe) + 8);
          if (*(PSRWLOCK *)(uVar23 + 8) != (PSRWLOCK)0x0) {
            local_a8 = (ulonglong)*(byte *)(uVar22 + 0xd);
            BVar12 = TryAcquireSRWLockExclusive(*(PSRWLOCK *)(uVar23 + 8));
            uVar14 = (uint)local_a8;
            if (BVar12 != '\0') {
                    /* WARNING: Does not return */
              pcVar9 = (code *)invalidInstructionException();
              (*pcVar9)();
            }
          }
          uVar31 = (longlong)&pRVar18->Ptr + uVar31;
          if (*(int *)(uVar31 + 0x24) == 1) {
            bVar32 = *(longlong *)(uVar23 + 0x18) == 0;
          }
          else {
            bVar32 = false;
          }
          bVar13 = *(byte *)(uVar22 + 0x11);
          *(byte *)(uVar22 + 0x11) = bVar13 & 0xfc;
          iVar7 = *(int *)(uVar31 + 0x24);
          if ((bVar13 & 2) == 0) {
            if (iVar7 == 0) {
LAB_1467a6764:
                    /* WARNING: Does not return */
              pcVar9 = (code *)invalidInstructionException();
              (*pcVar9)();
            }
            *(int *)(uVar31 + 0x24) = iVar7 + -1;
          }
          else {
            if (iVar7 == 0) goto LAB_1467a6764;
            *(int *)(uVar31 + 0x24) = iVar7 + -1;
            if ((*(byte *)(uVar22 + 0x11) & 4) == 0) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)invalidInstructionException();
              (*pcVar9)();
            }
            FUN_146791720((longlong)&pRVar18->Ptr + (ulonglong)(uVar14 * 0x80000 + (uint)uVar5 * 8),
                          uVar22 | 4);
          }
          pRVar17 = local_b0;
          if (bVar32) {
            if (*(int *)(uVar31 + 0x24) != 0) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)invalidInstructionException();
              (*pcVar9)();
            }
            FUN_1467918b2(local_a0,uVar31 | 2);
          }
        }
        if (uVar15 == 0) {
          if (pRVar17 != (PSRWLOCK)0x0) {
            ReleaseSRWLockExclusive(pRVar17);
          }
LAB_1467a65f8:
          local_70 = (PSRWLOCK)0x0;
          local_68 = 0;
          param_1 = local_98;
          goto LAB_1467a66ad;
        }
      }
      if ((uVar15 & 6) != 0) {
        if (((uint)uVar15 & 7) != 4) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        uVar10 = *(uint3 *)((uVar15 & 0xfffffffffffffff8) + 8);
        pRVar29 = DAT_14c80ad08 + uVar10;
        if (pRVar29 != (PSRWLOCK)0x0 && uVar10 != 0) {
          pvVar26 = pRVar29->Ptr;
          pvVar20 = pvVar26;
          if (((ulonglong)pvVar26 & 1) != 0) {
            pvVar20 = *(PVOID *)((ulonglong)pvVar26 & 0xfffffffffffffffe);
          }
          if (pRVar17 != *(PSRWLOCK *)((longlong)pvVar20 + 0x38)) {
            FUN_146794d20((longlong)pvVar20 + 0x30,pRVar17,*(PSRWLOCK *)((longlong)pvVar20 + 0x38));
            pvVar26 = pRVar29->Ptr;
          }
          if (((ulonglong)pvVar26 & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          FUN_146795992(uVar15 & 0xfffffffffffffff8,pRVar29,(ulonglong)pvVar26 & 0xfffffffffffffffe)
          ;
LAB_1467a6872:
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        if (pRVar17 != (PSRWLOCK)0x0) {
          ReleaseSRWLockExclusive(pRVar17);
        }
        uVar14 = FUN_1467a2f99();
LAB_1467a6837:
        if (uVar14 == 4) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      plVar30 = (longlong *)(uVar15 & 0xfffffffffffffff8);
      lVar27 = *plVar30;
      uVar23 = lVar27 + 0x30;
      if (pRVar17 != *(PSRWLOCK *)(lVar27 + 0x38)) {
        pRVar17 = (PSRWLOCK)FUN_146794d20(uVar23,pRVar17);
      }
      *(undefined1 *)(lVar27 + 0x31) = 1;
      *(ulonglong *)(lVar27 + 0x50) = uVar15 | 1;
      local_b0 = pRVar17;
    }
    else {
      if (((uint)uVar22 & 7) == 4) {
        uVar15 = uVar22 & 0xfffffffffffffff8;
        bVar13 = *(byte *)(uVar15 + 0x11);
        if ((bVar13 & 4) != 0) {
          if (*(longlong *)(uVar23 + 8) != 0) {
            FUN_146794d20(uVar23,0);
            bVar13 = *(byte *)(uVar15 + 0x11);
          }
          *(byte *)(uVar15 + 0x11) = bVar13 & 0xf9;
          goto LAB_1467a6872;
        }
        goto LAB_1467a5e21;
      }
      if ((uVar22 & 7) != 0) goto LAB_1467a5e21;
      if (*(longlong *)(uVar23 + 8) == 0) {
        local_b0 = (PSRWLOCK)0x0;
      }
      else {
        local_b0 = (PSRWLOCK)FUN_146794d20(uVar23,0);
      }
      plVar30 = (longlong *)(uVar22 & 0xfffffffffffffff8);
      *(ulonglong *)(uVar23 + 0x20) = uVar22 | 1;
      *(undefined1 *)(uVar23 + 2) = 0;
    }
    lVar27 = DAT_14c80b370;
    plVar1 = (longlong *)(uVar23 - 0x30);
    if (*(longlong *)(uVar23 + 0x18) == 0) {
      if ((DAT_14c80b370 != 0) && (*plVar1 != DAT_14c80b370)) {
        *plVar1 = DAT_14c80b370;
      }
      if (*(longlong *)(uVar23 - 0x28) != 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      if ((ulonglong)plVar1 >> 0x30 != 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      lVar27 = *(longlong *)(&DAT_14c80b3a0 + ((ulonglong)plVar1 >> 0x22) * 8);
      uVar22 = (ulonglong)((uint)((ulonglong)plVar1 >> 0x13) & 0x7fff);
      do {
        uVar14 = *(uint *)(lVar27 + uVar22 * 4);
        if ((uVar14 & 1) == 0) {
          if (uVar14 != 0) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          piVar2 = (int *)(lVar27 + uVar22 * 4);
          LOCK();
          if (*piVar2 == 0) {
            *piVar2 = 1;
          }
          UNLOCK();
        }
        else {
          if (((ulonglong)plVar1 & 0x7c000) == 0) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          do {
            uVar8 = *(uint *)(lVar27 + uVar22 * 4);
            uVar21 = uVar8 | 1 << ((byte)((ulonglong)plVar1 >> 0xe) & 0x1f);
            if (uVar8 == uVar21) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)invalidInstructionException();
              (*pcVar9)();
            }
            puVar3 = (uint *)(lVar27 + uVar22 * 4);
            LOCK();
            bVar32 = uVar8 == *puVar3;
            if (bVar32) {
              *puVar3 = uVar21;
            }
            UNLOCK();
          } while (!bVar32);
        }
        pRVar17 = DAT_14c80ad08;
      } while ((uVar14 & 1) == 0);
      uVar15 = (ulonglong)*(uint *)&pRVar29[6].Ptr;
      iVar7 = *(int *)&DAT_14c80ad08[uVar15].Ptr;
      uVar14 = *(uint *)((longlong)&DAT_14c80ad08[uVar15].Ptr + 4);
      uVar22 = (ulonglong)*(uint *)&DAT_14c80ad08[uVar15 + 1].Ptr;
      *(ulonglong *)(uVar23 + 0x18) = uVar22;
      if (uVar22 != 0) {
        uVar22 = DAT_14c80b380 + uVar22;
        if (uVar22 <= DAT_14c80b380) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        LOCK();
        UNLOCK();
        DAT_14c80b380 = uVar22;
        if (uVar22 == 0xffffffffffffffff) {
          (*(code *)0x0)();
        }
      }
      *(ulonglong *)(param_2 + 0x10) = (ulonglong)uVar14 + (longlong)plVar1;
      *(uint *)(param_2 + 0x18) = uVar14 - iVar7;
      local_90[0] = 0;
      local_90[1] = 0;
      local_90[2] = 0;
      local_90[3] = 0;
      *(longlong **)(param_2 + 0x20) = plVar1;
      uVar22 = (ulonglong)*(uint *)((longlong)&pRVar17[uVar15 + 1].Ptr + 4);
      if (uVar22 < 8) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      puVar24 = (undefined4 *)((longlong)&DAT_14c80ad08->Ptr + uVar22);
      puVar25 = (undefined4 *)(uVar23 + 0x2c);
      for (lVar27 = 0x20; pRVar17 = local_b0, lVar27 != 0; lVar27 = lVar27 + -1) {
        *puVar25 = *puVar24;
        puVar24 = puVar24 + 1;
        puVar25 = puVar25 + 1;
      }
    }
    else {
      pcVar16 = param_2;
      if (DAT_14c80b370 != 0) {
        uVar22 = (ulonglong)*(uint *)(*(longlong *)pRVar29[3].Ptr + 0xd8);
        do {
          bVar32 = uVar22 == 0;
          uVar22 = uVar22 - 1;
          if (bVar32) goto LAB_1467a60cd;
        } while (*(longlong *)(*(longlong *)(*(longlong *)pRVar29[3].Ptr + 0xd0) + uVar22 * 8) !=
                 DAT_14c80b378);
        if (*plVar1 != DAT_14c80b370) {
          if (*(char *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x114)
              == '\0') {
            __dyn_tls_on_demand_init();
          }
          local_a8 = 0;
          if (*local_88 != 1) {
            local_a8 = *local_88;
          }
          *(undefined1 *)(uVar23 - 0x1f) = 1;
          pRVar17 = (PSRWLOCK)(plVar30 + 3);
          ReleaseSRWLockExclusive(pRVar17);
          local_a0 = (undefined4 *)FUN_146773d17(0x80);
          puVar24 = (undefined4 *)(uVar23 + 0x2c);
          puVar25 = local_a0;
          for (lVar19 = 0x20; lVar19 != 0; lVar19 = lVar19 + -1) {
            *puVar25 = *puVar24;
            puVar24 = puVar24 + 1;
            puVar25 = puVar25 + 1;
          }
          AcquireSRWLockExclusive(pRVar17);
          *(undefined1 *)(uVar23 - 0x1f) = 0;
          if (*(longlong *)(uVar23 - 0x30) == lVar27) {
            ReleaseSRWLockExclusive(pRVar17);
            FUN_146773e73(local_a0);
            AcquireSRWLockExclusive(pRVar17);
          }
          else {
            *(longlong *)(uVar23 - 0x30) = lVar27;
            if (*(longlong *)(uVar23 - 0x28) != 0) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)invalidInstructionException();
              (*pcVar9)();
            }
            if (local_a0 == (undefined4 *)0x0) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)invalidInstructionException();
              (*pcVar9)();
            }
            *(undefined4 **)(uVar23 - 0x28) = local_a0;
          }
          uVar22 = local_a8;
          if (*(char *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x114)
              == '\0') {
            __dyn_tls_on_demand_init();
          }
          uVar15 = 0;
          if (*local_88 != 1) {
            uVar15 = *local_88;
          }
          if (uVar15 != uVar22) {
            pcVar16 = param_2 + (uVar15 - uVar22);
          }
        }
      }
LAB_1467a60cd:
      pRVar17 = local_b0;
      pcVar16[0x10] = '\0';
      pcVar16[0x11] = '\0';
      pcVar16[0x12] = '\0';
      pcVar16[0x13] = '\0';
      pcVar16[0x14] = '\0';
      pcVar16[0x15] = '\0';
      pcVar16[0x16] = '\0';
      pcVar16[0x17] = '\0';
      pcVar16[0x18] = '\0';
      pRVar18 = DAT_14c80ad08;
      pcVar16[0x19] = '\0';
      pcVar16[0x1a] = '\0';
      pcVar16[0x1b] = '\0';
      uVar15 = (ulonglong)*(uint *)&pRVar29[6].Ptr;
      uVar22 = (ulonglong)*(uint *)((longlong)&DAT_14c80ad08[uVar15 + 1].Ptr + 4);
      if (uVar22 < 8) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      uVar14 = *(uint *)&DAT_14c80ad08[uVar15].Ptr;
      uVar21 = uVar14 >> 10;
      uVar8 = *(uint *)((longlong)&DAT_14c80ad08[uVar15].Ptr + 4);
      *(uint *)(pcVar16 + 0x28) = uVar21;
      *(uint *)(pcVar16 + 0x2c) = ((uVar8 >> 4) - 1 >> 6) + 1;
      pcVar16[0x40] = '\0';
      pcVar16[0x41] = '\0';
      pcVar16[0x42] = '\0';
      pcVar16[0x43] = '\0';
      pcVar16[0x44] = '\0';
      pcVar16[0x45] = '\0';
      pcVar16[0x46] = '\0';
      pcVar16[0x47] = '\0';
      pcVar16[0x48] = '\0';
      pcVar16[0x49] = '\0';
      pcVar16[0x4a] = '\0';
      pcVar16[0x4b] = '\0';
      pcVar16[0x4c] = '\0';
      pcVar16[0x4d] = '\0';
      pcVar16[0x4e] = '\0';
      pcVar16[0x4f] = '\0';
      pcVar16[0x50] = '\0';
      pcVar16[0x51] = '\0';
      pcVar16[0x52] = '\0';
      pcVar16[0x53] = '\0';
      pcVar16[0x54] = '\0';
      pcVar16[0x55] = '\0';
      pcVar16[0x56] = '\0';
      pcVar16[0x57] = '\0';
      pcVar16[0x58] = '\0';
      pcVar16[0x59] = '\0';
      pcVar16[0x5a] = '\0';
      pcVar16[0x5b] = '\0';
      pcVar16[0x5c] = '\0';
      pcVar16[0x5d] = '\0';
      pcVar16[0x5e] = '\0';
      pcVar16[0x5f] = '\0';
      pcVar16[0x60] = '\0';
      pcVar16[0x61] = '\0';
      pcVar16[0x62] = '\0';
      pcVar16[99] = '\0';
      pcVar16[100] = '\0';
      pcVar16[0x65] = '\0';
      pcVar16[0x66] = '\0';
      pcVar16[0x67] = '\0';
      pcVar16[0x68] = '\0';
      pcVar16[0x69] = '\0';
      pcVar16[0x6a] = '\0';
      pcVar16[0x6b] = '\0';
      pcVar16[0x6c] = '\0';
      pcVar16[0x6d] = '\0';
      pcVar16[0x6e] = '\0';
      pcVar16[0x6f] = '\0';
      pcVar16[0x70] = '\0';
      pcVar16[0x71] = '\0';
      pcVar16[0x72] = '\0';
      pcVar16[0x73] = '\0';
      pcVar16[0x74] = '\0';
      pcVar16[0x75] = '\0';
      pcVar16[0x76] = '\0';
      pcVar16[0x77] = '\0';
      pcVar16[0x78] = '\0';
      pcVar16[0x79] = '\0';
      pcVar16[0x7a] = '\0';
      pcVar16[0x7b] = '\0';
      pcVar16[0x7c] = '\0';
      pcVar16[0x7d] = '\0';
      pcVar16[0x7e] = '\0';
      pcVar16[0x7f] = '\0';
      pcVar16[0x80] = '\0';
      pcVar16[0x81] = '\0';
      pcVar16[0x82] = '\0';
      pcVar16[0x83] = '\0';
      pcVar16[0x84] = '\0';
      pcVar16[0x85] = '\0';
      pcVar16[0x86] = '\0';
      pcVar16[0x87] = '\0';
      pcVar16[0x88] = '\0';
      pcVar16[0x89] = '\0';
      pcVar16[0x8a] = '\0';
      pcVar16[0x8b] = '\0';
      pcVar16[0x8c] = '\0';
      pcVar16[0x8d] = '\0';
      pcVar16[0x8e] = '\0';
      pcVar16[0x8f] = '\0';
      pcVar16[0x90] = '\0';
      pcVar16[0x91] = '\0';
      pcVar16[0x92] = '\0';
      pcVar16[0x93] = '\0';
      pcVar16[0x94] = '\0';
      pcVar16[0x95] = '\0';
      pcVar16[0x96] = '\0';
      pcVar16[0x97] = '\0';
      pcVar16[0x98] = '\0';
      pcVar16[0x99] = '\0';
      pcVar16[0x9a] = '\0';
      pcVar16[0x9b] = '\0';
      pcVar16[0x9c] = '\0';
      pcVar16[0x9d] = '\0';
      pcVar16[0x9e] = '\0';
      pcVar16[0x9f] = '\0';
      pcVar16[0xa0] = '\0';
      pcVar16[0xa1] = '\0';
      pcVar16[0xa2] = '\0';
      pcVar16[0xa3] = '\0';
      pcVar16[0xa4] = '\0';
      pcVar16[0xa5] = '\0';
      pcVar16[0xa6] = '\0';
      pcVar16[0xa7] = '\0';
      pcVar16[0xa8] = '\0';
      pcVar16[0xa9] = '\0';
      pcVar16[0xaa] = '\0';
      pcVar16[0xab] = '\0';
      pcVar16[0xac] = '\0';
      pcVar16[0xad] = '\0';
      pcVar16[0xae] = '\0';
      pcVar16[0xaf] = '\0';
      pcVar16[0xb0] = '\0';
      pcVar16[0xb1] = '\0';
      pcVar16[0xb2] = '\0';
      pcVar16[0xb3] = '\0';
      pcVar16[0xb4] = '\0';
      pcVar16[0xb5] = '\0';
      pcVar16[0xb6] = '\0';
      pcVar16[0xb7] = '\0';
      pcVar16[0xb8] = '\0';
      pcVar16[0xb9] = '\0';
      pcVar16[0xba] = '\0';
      pcVar16[0xbb] = '\0';
      pcVar16[0xbc] = '\0';
      pcVar16[0xbd] = '\0';
      pcVar16[0xbe] = '\0';
      pcVar16[0xbf] = '\0';
      *(ulonglong *)(pcVar16 + 0x20) = (ulonglong)(uVar14 & 0xfffffc00) + (longlong)plVar1;
      lVar27 = 0;
      do {
        uVar14 = *(uint *)((longlong)&pRVar18->Ptr + lVar27 * 4 + uVar22);
        uVar8 = *(uint *)(uVar23 + 0x2c + lVar27 * 4);
        *(uint *)(pcVar16 + lVar27 * 4 + 0x40) = ~uVar8 & uVar14;
        *(uint *)(uVar23 + 0x2c + lVar27 * 4) = uVar8 | uVar14;
        lVar27 = lVar27 + 1;
      } while (lVar27 != 0x20);
      *(undefined8 *)(pcVar16 + 0x30) = *(undefined8 *)(pcVar16 + (ulonglong)uVar21 * 8 + 0x40);
      pcVar16[0xc] = '\x01';
      uVar14 = *(uint *)&DAT_14c80ad08[(ulonglong)*(uint *)&pRVar29[6].Ptr + 1].Ptr;
      lVar27 = (ulonglong)uVar14 - *(longlong *)(uVar23 + 0x18);
      if (lVar27 < 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      if (lVar27 != 0) {
        uVar22 = DAT_14c80b380 + lVar27;
        if (uVar22 <= DAT_14c80b380) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)invalidInstructionException();
          (*pcVar9)();
        }
        LOCK();
        UNLOCK();
        DAT_14c80b380 = uVar22;
        if (uVar22 == 0xffffffffffffffff) {
          (*(code *)0x0)();
        }
      }
      *(ulonglong *)(uVar23 + 0x18) = (ulonglong)uVar14;
    }
    param_1 = local_98;
    if (pRVar17 != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(pRVar17);
    }
    uVar14 = *(uint *)(param_2 + 0x18);
    if ((ulonglong)uVar14 != 0) {
      *(uint *)(param_2 + 0x18) = uVar14 - *(int *)(param_2 + 0x1c);
      local_70 = (PSRWLOCK)(*(longlong *)(param_2 + 0x10) - (ulonglong)uVar14);
      goto LAB_1467a66ab;
    }
    lVar27 = *(longlong *)(param_2 + 0x20);
    uVar23 = *(ulonglong *)(param_2 + 0x30);
    if (uVar23 != 0) {
LAB_1467a6699:
      uVar22 = 0;
      if (uVar23 != 0) {
        for (; (uVar23 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
        }
      }
      *(ulonglong *)(param_2 + 0x30) = uVar23 & ~(1L << (uVar22 & 0x3f));
      local_70 = (PSRWLOCK)((ulonglong)(uint)((int)uVar22 << 4) + lVar27);
LAB_1467a66ab:
      local_68 = 1;
LAB_1467a66ad:
      *param_2 = '\0';
      local_64 = 0;
      (*local_78)(param_1);
      if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    if (param_2[8] == '\n') {
      uVar14 = *(uint *)(param_2 + 0x2c);
      uVar8 = *local_90;
      uVar22 = (ulonglong)uVar8;
      if (uVar8 < uVar14) {
        pcVar16 = param_2 + uVar22 * 8 + 0x40;
        pcVar16[0] = '\0';
        pcVar16[1] = '\0';
        pcVar16[2] = '\0';
        pcVar16[3] = '\0';
        pcVar16[4] = '\0';
        pcVar16[5] = '\0';
        pcVar16[6] = '\0';
        pcVar16[7] = '\0';
        lVar19 = 0;
        while ((uVar22 - (uVar14 - 1)) + lVar19 != 0) {
          lVar27 = lVar27 + 0x400;
          uVar23 = *(ulonglong *)(local_80 + lVar19 * 8 + uVar22 * 8);
          lVar19 = lVar19 + 1;
          if (uVar23 != 0) {
            *(uint *)(param_2 + 0x28) = uVar8 + (int)lVar19;
            *(longlong *)(param_2 + 0x20) = lVar27;
            goto LAB_1467a6699;
          }
        }
        *local_90 = uVar14;
      }
    }
  } while( true );
}



// FUNCTION 1467a6962 FUN_1467a6962 body=116 status=ok
// SIG undefined FUN_1467a6962(void)

void FUN_1467a6962(longlong *param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar4 = (ulonglong)*(uint *)(param_2 + 0x28);
  uVar1 = *(uint *)(param_2 + 0x2c);
  if (*(uint *)(param_2 + 0x28) < uVar1) {
    uVar5 = *(ulonglong *)(param_2 + 0x40 + uVar4 * 8);
    lVar6 = *(longlong *)(param_2 + 0x20);
    if (uVar5 == 0) {
      do {
        if (uVar1 - 1 == uVar4) {
          *(uint *)(param_2 + 0x28) = uVar1;
          goto LAB_1467a69cf;
        }
        lVar6 = lVar6 + 0x8000;
        uVar5 = *(ulonglong *)(param_2 + 0x48 + uVar4 * 8);
        uVar4 = uVar4 + 1;
      } while (uVar5 == 0);
      *(int *)(param_2 + 0x28) = (int)uVar4;
      *(longlong *)(param_2 + 0x20) = lVar6;
      uVar4 = uVar4 & 0xffffffff;
    }
    uVar2 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    *(ulonglong *)(param_2 + 0x40 + uVar4 * 8) = uVar5 & ~(1L << (uVar2 & 0x3f));
    lVar6 = (ulonglong)(uint)((int)uVar2 << 9) + lVar6;
    uVar3 = 1;
  }
  else {
LAB_1467a69cf:
    uVar3 = 0;
    lVar6 = 0;
  }
  *(undefined1 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *param_1 = lVar6;
  return;
}



// FUNCTION 1467a69d6 FUN_1467a69d6 body=187 status=ok
// SIG undefined FUN_1467a69d6(void)

void FUN_1467a69d6(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_2 + 0x18);
  if ((ulonglong)uVar2 == 0) {
    lVar7 = *(longlong *)(param_2 + 0x20);
    uVar8 = *(ulonglong *)(param_2 + 0x30);
    if (uVar8 == 0) {
      if (*(char *)(param_2 + 8) == '\n') {
        uVar2 = *(uint *)(param_2 + 0x2c);
        uVar3 = *(uint *)(param_2 + 0x28);
        if (uVar3 < uVar2) {
          lVar1 = param_2 + (ulonglong)uVar3 * 8;
          *(undefined8 *)(lVar1 + 0x40) = 0;
          lVar6 = 0;
          do {
            if (((ulonglong)uVar3 - (ulonglong)(uVar2 - 1)) + lVar6 == 0) {
              *(uint *)(param_2 + 0x28) = uVar2;
              goto LAB_1467a6a87;
            }
            lVar7 = lVar7 + 0x400;
            uVar8 = *(ulonglong *)(lVar1 + 0x48 + lVar6 * 8);
            lVar6 = lVar6 + 1;
          } while (uVar8 == 0);
          *(uint *)(param_2 + 0x28) = uVar3 + (int)lVar6;
          *(longlong *)(param_2 + 0x20) = lVar7;
          goto LAB_1467a6a17;
        }
      }
LAB_1467a6a87:
      uVar5 = 0;
      lVar7 = 0;
      goto LAB_1467a69fa;
    }
LAB_1467a6a17:
    uVar4 = 0;
    if (uVar8 != 0) {
      for (; (uVar8 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    *(ulonglong *)(param_2 + 0x30) = uVar8 & ~(1L << (uVar4 & 0x3f));
    lVar7 = (ulonglong)(uint)((int)uVar4 << 4) + lVar7;
  }
  else {
    *(uint *)(param_2 + 0x18) = uVar2 - *(int *)(param_2 + 0x1c);
    lVar7 = *(longlong *)(param_2 + 0x10) - (ulonglong)uVar2;
  }
  uVar5 = 1;
LAB_1467a69fa:
  *(undefined1 *)(param_1 + 1) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *param_1 = lVar7;
  return;
}



// FUNCTION 1467a6a91 FUN_1467a6a91 body=459 status=ok
// SIG undefined FUN_1467a6a91(void)

undefined8
FUN_1467a6a91(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,code *param_6)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined1 auStack_a8 [40];
  char local_80 [8];
  char local_78 [24];
  undefined8 local_60;
  byte local_58;
  undefined2 local_57;
  undefined1 local_55;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined2 local_4c;
  undefined1 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_2[3] & 0x7fU) != 2) {
    FUN_14678c309(param_2,0);
  }
  if (*param_2 != '\x01') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  do {
    iVar2 = (int)param_2[8];
    if (iVar2 == 0xb) {
      pcVar3 = local_78 + 8;
      FUN_1467a2ddd(pcVar3,param_2);
LAB_1467a6b6a:
      if (pcVar3[8] != '\0') {
        local_60 = *(undefined8 *)pcVar3;
        local_54 = 0;
        local_58 = 1;
        goto LAB_1467a6b81;
      }
      iVar2 = (int)param_2[8];
    }
    else {
      if (iVar2 == 0xc) {
        FUN_1467a6962(&local_60,param_2);
        pcVar3 = (char *)&local_60;
        goto LAB_1467a6b6a;
      }
      if (iVar2 == 0xd) {
        FUN_1467a423e(local_80,param_2);
        pcVar3 = local_80;
        goto LAB_1467a6b6a;
      }
    }
    if (0xb < iVar2 - 2U) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    (**(code **)(*(longlong *)
                  (&DAT_14c758500 + *(longlong *)(&DAT_149dfdea8 + (ulonglong)(iVar2 - 2U) * 8) * 8)
                + 0xd8))(param_2,param_5);
    if (*(longlong *)(param_2 + 0x20) == 0) {
      local_60 = 0;
      local_58 = 0;
      local_54 = 0;
      goto LAB_1467a6b81;
    }
    FUN_1467a69d6(&local_60,param_2);
    local_4c = local_57;
    local_4a = local_55;
  } while ((local_58 & 1) == 0);
  local_4e = local_55;
  local_50 = local_57;
LAB_1467a6b81:
  *param_2 = '\0';
  local_57 = local_50;
  local_55 = local_4e;
  (*param_6)(param_1);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467a6c5d FUN_1467a6c5d body=1107 status=ok
// SIG undefined FUN_1467a6c5d(void)

longlong *
FUN_1467a6c5d(longlong *param_1,ulonglong *param_2,int param_3,longlong param_4,ulonglong param_5,
             undefined8 param_6,undefined **param_7,undefined4 param_8)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  PSRWLOCK SRWLock;
  ulonglong uVar5;
  PVOID pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  PSRWLOCK pRVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  PVOID pvVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  undefined1 auStack_98 [32];
  undefined **local_78;
  ulonglong *local_70;
  undefined2 local_68;
  undefined1 uStack_66;
  undefined5 uStack_65;
  undefined1 local_60;
  undefined2 uStack_5f;
  undefined1 uStack_5d;
  undefined4 uStack_5c;
  PSRWLOCK local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  uVar5 = param_2[1];
  uVar14 = *param_2;
  if (*param_2 < param_5) {
    uVar14 = param_5;
  }
  if (uVar5 == 0) {
    uVar5 = FUN_146788484(param_2,param_3,&PTR_LOOP_149dfda10,param_6);
  }
  puVar13 = (ulonglong *)0x0;
  if (param_3 == 1) {
    puVar13 = param_2 + 3;
  }
  uVar8 = param_4 + 0xfU >> 4;
  if (((((*(uint *)(uVar5 + 0x24) <= uVar8) || (*(longlong *)(uVar5 + 0x10) == 0)) ||
       (uVar10 = (ulonglong)*(uint *)(*(longlong *)(uVar5 + 0x10) + uVar8 * 4),
       uVar11 = uVar10 * 8 + DAT_14c80ad08, uVar11 == 0 || uVar10 == 0)) &&
      (uVar11 = FUN_146792159(uVar5,uVar8,puVar13,&PTR_LOOP_149dfda10), uVar11 == 0)) ||
     ((ulonglong)(1L << (byte)((uint)*(undefined4 *)(uVar11 + 0x20) >> 0x1b)) < uVar14)) {
    local_78 = &PTR_LOOP_149dfda10;
    local_70 = puVar13;
    uVar11 = FUN_1467880f7(uVar5,param_4,uVar14,param_8);
    if (uVar11 == 0) {
      FUN_14678f287(&local_68);
      do {
        if ((char)param_1[1] == '\x01') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        FUN_14678f28e(&local_68);
        AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
        local_78 = &PTR_LOOP_149dfda10;
        local_70 = (ulonglong *)&local_68;
        FUN_1467891c0(param_1,uVar5 + 0x28,param_4,uVar14);
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
        cVar4 = FUN_14678f2c1(&local_68);
      } while (cVar4 == '\0');
      FUN_146790ecd();
      goto LAB_1467a6f7d;
    }
  }
  if (*(int *)(uVar11 + 0x2c) == 0) {
LAB_1467a6e1e:
    uVar1 = *(uint *)(uVar11 + 0x24);
    while (uVar1 = uVar1 & 0x7f, uVar1 < 0x20) {
      SRWLock = (PSRWLOCK)((ulonglong)uVar1 * 0x148 + DAT_14c8084d0);
      AcquireSRWLockExclusive(SRWLock);
      if ((*(uint *)(uVar11 + 0x24) & 0x7f) == uVar1) goto LAB_1467a6e38;
      ReleaseSRWLockExclusive(SRWLock);
      uVar1 = *(uint *)(uVar11 + 0x24);
    }
    SRWLock = (PSRWLOCK)FUN_146797fd5(uVar11);
LAB_1467a6e38:
    pvVar6 = SRWLock[8].Ptr;
    if (((uint)pvVar6 & 7) == 5) {
      uVar5 = (ulonglong)pvVar6 & 0xfffffffffffffff8;
    }
    else {
      uVar5 = FUN_146799574(pvVar6);
    }
    if (uVar5 != uVar11) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pRVar9 = SRWLock + 1;
  }
  else {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar5 = *(ulonglong *)(lVar7 + 0x2a8);
    if (uVar5 < 2) {
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x114) == '\0') {
        __dyn_tls_on_demand_init();
        uVar5 = *(ulonglong *)(lVar7 + 0x2a8);
      }
      if (uVar5 == 1) goto LAB_1467a6e1e;
    }
    local_78 = &PTR_LOOP_149dfda10;
    local_70 = puVar13;
    FUN_14679922c(&local_68,uVar11,param_4,param_8);
    pRVar9 = (PSRWLOCK)CONCAT44(uStack_5c,CONCAT13(uStack_5d,CONCAT21(uStack_5f,local_60)));
    SRWLock = local_58;
  }
  *(undefined1 *)&pRVar9->Ptr = 1;
  uVar1 = *(uint *)&pRVar9[3].Ptr;
  if ((ulonglong)uVar1 == 0) {
    pvVar6 = pRVar9[4].Ptr;
    pvVar12 = pRVar9[6].Ptr;
    if (pvVar12 != (PVOID)0x0) {
LAB_1467a6fb5:
      uVar5 = 0;
      if (pvVar12 != (PVOID)0x0) {
        for (; ((ulonglong)pvVar12 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      pRVar9[6].Ptr = (PVOID)((ulonglong)pvVar12 & ~(1L << (uVar5 & 0x3f)));
      lVar7 = (ulonglong)(uint)((int)uVar5 << 4) + (longlong)pvVar6;
      goto LAB_1467a6f4e;
    }
    if (*(char *)&pRVar9[1].Ptr == '\n') {
      uVar1 = *(uint *)((longlong)&pRVar9[5].Ptr + 4);
      uVar2 = *(uint *)&pRVar9[5].Ptr;
      uVar5 = (ulonglong)uVar2;
      if (uVar2 < uVar1) {
        pRVar9[uVar5 + 8].Ptr = (PVOID)0x0;
        lVar7 = 0;
        do {
          if ((uVar5 - (uVar1 - 1)) + lVar7 == 0) {
            *(uint *)&pRVar9[5].Ptr = uVar1;
            goto LAB_1467a7073;
          }
          pvVar6 = (PVOID)((longlong)pvVar6 + 0x400);
          pvVar12 = pRVar9[uVar5 + lVar7 + 9].Ptr;
          lVar7 = lVar7 + 1;
        } while (pvVar12 == (PVOID)0x0);
        *(uint *)&pRVar9[5].Ptr = uVar2 + (int)lVar7;
        pRVar9[4].Ptr = pvVar6;
        goto LAB_1467a6fb5;
      }
LAB_1467a7073:
      FUN_1467a5adb(&local_68,pRVar9,uVar1,&LAB_1467a71a6);
    }
    else {
      local_70 = (ulonglong *)&LAB_1467a71a6;
      local_78 = param_7;
      FUN_1467a6a91(&local_68);
    }
    lVar7 = CONCAT53(uStack_65,CONCAT12(uStack_66,local_68));
    uStack_66 = uStack_5d;
    local_68 = uStack_5f;
  }
  else {
    *(uint *)&pRVar9[3].Ptr = uVar1 - *(int *)((longlong)&pRVar9[3].Ptr + 4);
    lVar7 = (longlong)pRVar9[2].Ptr - (ulonglong)uVar1;
LAB_1467a6f4e:
    *(undefined1 *)&pRVar9->Ptr = 0;
    uStack_5c = 0;
    local_60 = 1;
  }
  *param_1 = lVar7;
  *(undefined1 *)(param_1 + 1) = local_60;
  *(undefined1 *)((longlong)param_1 + 0xb) = uStack_66;
  *(undefined2 *)((longlong)param_1 + 9) = local_68;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_5c;
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
LAB_1467a6f7d:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467a70b3 FUN_1467a70b3 body=242 status=ok
// SIG undefined FUN_1467a70b3(void)

longlong * FUN_1467a70b3(longlong *param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  longlong local_28;
  byte local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0x4000) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (*param_3 != 0x4000) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_3[1] != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_38 = 2;
  FUN_1467a7915(&local_28,*param_4,0x80000,param_4[1]);
  if ((local_20 & 1) == 0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
  }
  else {
    if (local_1c != 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    FUN_1467a71b0(local_28);
    *param_1 = local_28 + 0x4000;
    param_1[1] = 0x4000;
    param_1[2] = local_28 + 0x4000;
    param_1[3] = 0;
    param_1[4] = local_28 + 0x8000;
    param_1[5] = 0x78000;
    *(undefined4 *)(param_1 + 6) = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467a71b0 FUN_1467a71b0 body=745 status=ok
// SIG undefined FUN_1467a71b0(void)

/* WARNING: Removing unreachable block (ram,0x0001467a722f) */

ulonglong * FUN_1467a71b0(ulonglong param_1)

{
  code *pcVar1;
  longlong lVar2;
  uint uVar3;
  BOOLEAN BVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  void *_Dst;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  void *_Src;
  uint uVar10;
  uint uVar11;
  undefined1 local_78 [45];
  undefined2 local_4b;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_78;
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar4 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if ((param_1 & 0x7ffff) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  puVar5 = (ulonglong *)FUN_14678871b(0x10,"verse_heap_mark_bits_page_commit_controller",0);
  DAT_14c82b3b8 = 0;
  FUN_146790ea6();
  *puVar5 = param_1;
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar3 = DAT_14c82b3c0;
  DAT_14c82b3a8 = DAT_14c82b3a8 + 1;
  LOCK();
  UNLOCK();
  if (puVar5 == (ulonglong *)0x0) {
    uVar6 = 0;
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
    uVar6 = uVar6 >> 3;
  }
  lVar8 = 0;
  do {
    *(char *)((longlong)&local_4b + lVar8) = (char)uVar6;
    uVar6 = uVar6 >> 8;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 3);
  uVar9 = DAT_14c82b3c0 + 0x1f;
  uVar10 = uVar9 >> 5;
  if (DAT_14c82b3c4 < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar11 = DAT_14c82b3c0 >> 5;
  _Src = (void *)(DAT_14c80ad08 + (ulonglong)DAT_14c82b3bc * 8);
  if ((ulonglong)DAT_14c82b3bc == 0) {
    _Src = (void *)0x0;
  }
  if (DAT_14c82b3c4 <= uVar11) {
    lVar8 = (ulonglong)DAT_14c82b3c4 * 2 + 2;
    _Dst = (void *)FUN_14678871b((ulonglong)DAT_14c82b3c4 * 8 + 8,
                                 "verse_heap_mark_bits_page_commit_controller_vector/spine",0);
    if (0x1f < uVar9) {
      memcpy(_Dst,_Src,(ulonglong)(uVar10 * 4));
    }
    uVar9 = 0;
    memset((void *)((longlong)_Dst + (ulonglong)uVar10 * 4),0,(lVar8 - (ulonglong)uVar10) * 4);
    LOCK();
    UNLOCK();
    if (_Dst != (void *)0x0) {
      uVar6 = (longlong)_Dst - DAT_14c80ad08;
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
      uVar9 = (uint)(uVar6 >> 3);
    }
    LOCK();
    UNLOCK();
    DAT_14c82b3c4 = (uint)lVar8;
    _Src = _Dst;
    DAT_14c82b3bc = uVar9;
  }
  uVar9 = *(uint *)((longlong)_Src + (ulonglong)uVar11 * 4);
  uVar6 = (ulonglong)uVar9;
  if (uVar11 == uVar10) {
    if ((uVar9 != 0) && (uVar6 << 3 != -DAT_14c80ad08)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((ulonglong)(uVar3 & 0x1f) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar6 = 0;
    puVar7 = (undefined8 *)
             FUN_1467886fa(0x60,1,"verse_heap_mark_bits_page_commit_controller_vector/segment",0);
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    LOCK();
    UNLOCK();
    if (puVar7 != (undefined8 *)0x0) {
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
      uVar6 = uVar6 >> 3;
    }
    *(int *)((longlong)_Src + (ulonglong)uVar11 * 4) = (int)uVar6;
  }
  lVar8 = 0;
  if ((int)uVar6 != 0) {
    lVar8 = DAT_14c80ad08 + (uVar6 & 0xffffffff) * 8;
  }
  lVar2 = (ulonglong)(uVar3 & 0x1f) * 3;
  *(undefined1 *)(lVar8 + 2 + lVar2) = local_49;
  *(undefined2 *)(lVar8 + lVar2) = local_4b;
  LOCK();
  UNLOCK();
  DAT_14c82b3c0 = DAT_14c82b3c0 + 1;
  if (DAT_14c82b3c0 != 0) {
    if ((local_48 ^ (ulonglong)local_78) == DAT_14c707940) {
      return puVar5;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1467a749a FUN_1467a749a body=214 status=ok
// SIG undefined FUN_1467a749a(void)

void FUN_1467a749a(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar4 = (ulonglong)DAT_14c82b3c0;
  lVar5 = (ulonglong)DAT_14c82b3bc * 8 + DAT_14c80ad08;
  if ((ulonglong)DAT_14c82b3bc == 0) {
    lVar5 = 0;
  }
  if (uVar4 != 0) {
    uVar1 = uVar4 - 1;
    uVar8 = 0;
    do {
      uVar2 = 0x20;
      if (uVar4 < 0x20) {
        uVar2 = uVar4;
      }
      uVar3 = (ulonglong)*(uint *)(lVar5 + uVar8 * 4);
      lVar6 = uVar3 * 8 + DAT_14c80ad08;
      if (uVar3 == 0) {
        lVar6 = 0;
      }
      lVar7 = 0;
      do {
        FUN_1467a75fd((ulonglong)
                      ((uint)*(byte *)(lVar6 + 2 + lVar7) * 0x80000 +
                      (uint)*(ushort *)(lVar6 + lVar7) * 8) + DAT_14c80ad08);
        lVar7 = lVar7 + 3;
      } while ((uVar2 + (uVar2 == 0)) * 3 != lVar7);
      uVar4 = uVar4 - 0x20;
      bVar9 = uVar8 != uVar1 >> 5;
      uVar8 = uVar8 + 1;
    } while (bVar9);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
                    /* WARNING: Could not recover jumptable at 0x0001467a7569. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  return;
}



// FUNCTION 1467a7570 FUN_1467a7570 body=47 status=ok
// SIG undefined FUN_1467a7570(void)

void FUN_1467a7570(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c82b3a0);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (DAT_14c82b3a8 == 0) {
    return;
  }
  FUN_1467a749a();
  return;
}



// FUNCTION 1467a759f FUN_1467a759f body=94 status=ok
// SIG undefined FUN_1467a759f(void)

ulonglong FUN_1467a759f(void)

{
  undefined8 unaff_RSI;
  undefined7 uVar2;
  ulonglong uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c82b3a0);
  if (DAT_14c82b3a8 == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (undefined7)((ulonglong)unaff_RSI >> 8);
    if (DAT_14c82b3b8 < 3) {
      DAT_14c82b3b8 = DAT_14c82b3b8 + 1;
      uVar1 = CONCAT71(uVar2,1);
    }
    else {
      FUN_1467a7570();
      uVar1 = CONCAT71(uVar2,DAT_14c82b3a8 != 0);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c82b3a0);
  return uVar1 & 0xffffffff;
}



// FUNCTION 1467a75fd FUN_1467a75fd body=98 status=ok
// SIG undefined FUN_1467a75fd(void)

/* WARNING: Removing unreachable block (ram,0x0001467a761d) */
/* WARNING: Removing unreachable block (ram,0x0001467a7633) */

void FUN_1467a75fd(undefined8 *param_1)

{
  code *pcVar1;
  
  if (*(int *)(param_1 + 1) != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    DAT_14c82b3a8 = DAT_14c82b3a8 + -1;
    LOCK();
    UNLOCK();
    DAT_14c82b3b0 = DAT_14c82b3b0 + 1;
    LOCK();
    UNLOCK();
    FUN_14678db4f(*param_1,0x1000,1);
    if (*(int *)(param_1 + 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  return;
}



// FUNCTION 1467a765f FUN_1467a765f body=17 status=ok
// SIG undefined FUN_1467a765f(void)

void FUN_1467a765f(void)

{
  FUN_1467a08ac(0x16c,"verse_heap_medium_page_header_object");
  return;
}



// FUNCTION 1467a7670 thunk_FUN_1467a08c6 body=5 status=ok
// SIG undefined thunk_FUN_1467a08c6(void)

void thunk_FUN_1467a08c6(ulonglong param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_1 != 0) {
    uVar5 = param_1 & 0xffffffffffffc000;
    uVar6 = (ulonglong)((uint)(param_1 >> 6) & 0xfc);
    uVar4 = *(uint *)(uVar5 + 0x2c + uVar6) & ~(1 << ((uint)(param_1 >> 3) & 0x1f));
    *(uint *)(uVar5 + 0x2c + uVar6) = uVar4;
    if ((*(ulonglong *)(uVar5 + 0x20) & 7) != 0) {
      uVar6 = *(ulonglong *)(uVar5 + 0x20) & 0xfffffffffffffff8;
      if (*(char *)(uVar5 + 1) == '\x01') {
        *(undefined1 *)(uVar5 + 2) = 1;
      }
      else {
        FUN_146791662((ulonglong)
                      ((uint)*(byte *)(uVar6 + 10) * 0x80000 + (uint)*(ushort *)(uVar6 + 8) * 8) +
                      DAT_14c80ad08,*(undefined4 *)(uVar6 + 0xc));
      }
      *(ulonglong *)(uVar5 + 0x20) = uVar6;
    }
    if (uVar4 == 0) {
      lVar3 = *(longlong *)(uVar5 + 0x18) + -1;
      if (lVar3 == 0) {
        FUN_146795211(uVar5,0);
        return;
      }
      *(longlong *)(uVar5 + 0x18) = lVar3;
    }
  }
  return;
}



// FUNCTION 1467a7675 FUN_1467a7675 body=566 status=ok
// SIG undefined FUN_1467a7675(void)

void FUN_1467a7675(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  BOOLEAN BVar5;
  void *pvVar6;
  longlong lVar7;
  void *_Src;
  undefined4 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar5 != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (param_2 == 0) {
    uVar8 = 0;
  }
  else {
    uVar9 = param_2 - DAT_14c80ad08;
    if (DAT_14c758498 <= uVar9) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if ((uVar9 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (uVar9 < 8) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar8 = (undefined4)(uVar9 >> 3);
  }
  uVar2 = *(uint *)(param_1 + 0x1c);
  uVar3 = *(uint *)(param_1 + 0x20);
  uVar11 = uVar2 + 0x7f >> 7;
  if (uVar3 < uVar11) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar10 = uVar2 >> 7;
  _Src = (void *)(DAT_14c80ad08 + (ulonglong)*(uint *)(param_1 + 0x18) * 8);
  if ((ulonglong)*(uint *)(param_1 + 0x18) == 0) {
    _Src = (void *)0x0;
  }
  if (uVar3 <= uVar10) {
    lVar7 = (ulonglong)uVar3 * 2 + 2;
    pvVar6 = (void *)FUN_14678871b((ulonglong)uVar3 * 8 + 8,"verse_heap_view_vector/spine",0);
    if (0x7f < uVar2 + 0x7f) {
      memcpy(pvVar6,_Src,(ulonglong)(uVar11 * 4));
    }
    uVar12 = 0;
    memset((void *)((longlong)pvVar6 + (ulonglong)uVar11 * 4),0,(lVar7 - (ulonglong)uVar11) * 4);
    LOCK();
    UNLOCK();
    if (pvVar6 != (void *)0x0) {
      uVar9 = (longlong)pvVar6 - DAT_14c80ad08;
      if (DAT_14c758498 <= uVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if ((uVar9 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (uVar9 < 8) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar12 = (undefined4)(uVar9 >> 3);
    }
    *(undefined4 *)(param_1 + 0x18) = uVar12;
    LOCK();
    UNLOCK();
    *(int *)(param_1 + 0x20) = (int)lVar7;
    _Src = pvVar6;
  }
  uVar3 = *(uint *)((longlong)_Src + (ulonglong)uVar10 * 4);
  uVar9 = (ulonglong)uVar3;
  if (uVar10 == uVar11) {
    if ((uVar3 != 0) && (uVar9 << 3 != -DAT_14c80ad08)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if ((ulonglong)(uVar2 & 0x7f) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar9 = 0;
    pvVar6 = (void *)FUN_1467886fa(0x200,4,"verse_heap_view_vector/segment",0);
    memset(pvVar6,0,0x200);
    LOCK();
    UNLOCK();
    if (pvVar6 != (void *)0x0) {
      uVar9 = (longlong)pvVar6 - DAT_14c80ad08;
      if (DAT_14c758498 <= uVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if ((uVar9 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (uVar9 < 8) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar9 = uVar9 >> 3;
    }
    *(int *)((longlong)_Src + (ulonglong)uVar10 * 4) = (int)uVar9;
  }
  lVar7 = 0;
  if ((int)uVar9 != 0) {
    lVar7 = DAT_14c80ad08 + (uVar9 & 0xffffffff) * 8;
  }
  *(undefined4 *)(lVar7 + (ulonglong)(uVar2 & 0x7f) * 4) = uVar8;
  LOCK();
  UNLOCK();
  piVar1 = (int *)(param_1 + 0x1c);
  *piVar1 = *piVar1 + 1;
  if (*piVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  return;
}



// FUNCTION 1467a78ab FUN_1467a78ab body=69 status=ok
// SIG undefined FUN_1467a78ab(void)

void FUN_1467a78ab(longlong *param_1,undefined8 param_2)

{
  code *pcVar1;
  BOOLEAN BVar2;
  ulonglong uVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&DAT_14c80ada8);
  if (BVar2 != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  for (uVar3 = (ulonglong)*(uint *)(param_1 + 1); uVar3 != 0; uVar3 = uVar3 - 1) {
    FUN_1467a7675(*(undefined8 *)(*param_1 + -8 + uVar3 * 8),param_2);
  }
  return;
}



// FUNCTION 1467a78f0 FUN_1467a78f0 body=37 status=ok
// SIG undefined FUN_1467a78f0(void)

void FUN_1467a78f0(undefined8 *param_1)

{
  *param_1 = DAT_14c758588;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[1] = 0;
  param_1[3] = 0;
                    /* WARNING: Could not recover jumptable at 0x0001467a790e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSRWLock((PSRWLOCK)(param_1 + 4));
  return;
}



// FUNCTION 1467a7915 FUN_1467a7915 body=186 status=ok
// SIG undefined FUN_1467a7915(void)

ulonglong *
FUN_1467a7915(ulonglong *param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
             undefined4 param_5)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_3 & 0x7ffff) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_40 = *(undefined8 *)(param_2 + 0x48);
  local_30 = 0x80000;
  local_28 = 0;
  local_48 = param_5;
  local_58 = 0;
  local_50 = param_4;
  (**(code **)(param_2 + 0x40))(param_1,param_3,&local_30,"verse_heap_chunk");
  if ((char)param_1[1] == '\x01') {
    if (*(int *)((longlong)param_1 + 0xc) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar2 = *param_1;
    param_3 = param_3 + uVar2;
    for (; uVar2 < param_3; uVar2 = uVar2 + 0x80000) {
      FUN_1467a2a33(uVar2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467a79d0 FUN_1467a79d0 body=31 status=ok
// SIG undefined FUN_1467a79d0(void)

void FUN_1467a79d0(undefined8 param_1,undefined8 param_2)

{
  FUN_14679d700(param_2,"Size/Alignment = %zu",param_1);
  return;
}



// FUNCTION 1467a79f0 FUN_1467a79f0 body=119 status=ok
// SIG undefined FUN_1467a79f0(void)

longlong FUN_1467a79f0(void)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  
  uVar2 = DAT_14c82b3d0;
  do {
    if ((int)uVar2 == -1) {
      return 0;
    }
    lVar3 = *DAT_14c82b3d8;
    lVar4 = (longlong)(int)uVar2 * 0x40;
    lVar1 = *(longlong *)(lVar3 + 0x18 + lVar4);
    uVar5 = (ulonglong)(lVar1 - lVar3) >> 6 & 0xffffffff;
    if (lVar1 == 0) {
      uVar5 = 0xffffffff;
    }
    LOCK();
    bVar6 = uVar2 != DAT_14c82b3d0;
    uVar5 = uVar5 + (uVar2 & 0xffffffff00000000 | 0xffffffff) + 1;
    if (bVar6) {
      uVar2 = DAT_14c82b3d0;
      uVar5 = DAT_14c82b3d0;
    }
    DAT_14c82b3d0 = uVar5;
    UNLOCK();
  } while (bVar6);
  lVar3 = lVar3 + lVar4;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  return lVar3;
}



// FUNCTION 1467a7a68 FUN_1467a7a68 body=154 status=ok
// SIG undefined FUN_1467a7a68(void)

void FUN_1467a7a68(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7b80));
  *(undefined1 *)(param_1 + 0x7c00) = 1;
  FUN_140f14872(param_1,0);
  FUN_145a06e4a(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined1 *)(param_1 + 0x7c00) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001467a7afb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7b80));
  return;
}



// FUNCTION 1467a7b7a FUN_1467a7b7a body=481 status=ok
// SIG undefined FUN_1467a7b7a(void)

ulonglong FUN_1467a7b7a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar6 = *(int *)(param_1 + 0x28);
  if (iVar6 == 0) {
    uVar11 = 0xffffffff;
  }
  else {
    if (iVar6 < 1) {
      bVar4 = false;
    }
    else {
      uVar11 = 0;
      do {
        lVar8 = *(longlong *)(param_1 + 0x20);
        if (*(longlong *)(param_1 + 0x20) == 0) {
          lVar8 = param_1;
        }
        lVar8 = *(longlong *)(lVar8 + uVar11 * 8);
        if (lVar8 != 0) {
          if ((*(byte *)(lVar8 + 0xa0) & 1) != 0) goto LAB_1467a7be6;
          iVar6 = *(int *)(param_1 + 0x28);
        }
        uVar11 = uVar11 + 1;
      } while ((longlong)uVar11 < (longlong)iVar6);
      bVar4 = 0 < iVar6;
    }
    local_70 = param_2;
    plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_149e00120;
    plVar7[2] = 0;
    if (bVar4) {
      lVar8 = 0;
      lVar9 = 0;
      do {
        lVar10 = *(longlong *)(param_1 + 0x20);
        if (*(longlong *)(param_1 + 0x20) == 0) {
          lVar10 = param_1;
        }
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        local_58 = (undefined4)lVar9;
        local_50 = (undefined8 *)0x0;
        local_68 = plVar7 + 2;
        local_60 = plVar7;
        FUN_142743a34(&local_50,&local_68,lVar10 + lVar8);
        if (local_50 != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(local_50 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*local_50)(local_50,1);
          }
        }
        plVar3 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_60 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 8;
      } while (lVar9 < *(int *)(param_1 + 0x28));
    }
    cVar5 = FUN_141701220(plVar7 + 2,((double)local_70 / 10000.0) * 0.001);
    uVar11 = 0xffffffff;
    if (cVar5 != '\0') {
      uVar11 = (ulonglong)*(uint *)((longlong)plVar7 + 0x14);
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar7 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
LAB_1467a7be6:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467a7d5c FUN_1467a7d5c body=423 status=ok
// SIG undefined FUN_1467a7d5c(void)

double * FUN_1467a7d5c(double *param_1,double *param_2,double *param_3,double *param_4,
                      double *param_5)

{
  double dVar1;
  bool bVar2;
  longlong lVar3;
  double *pdVar4;
  double *pdVar5;
  undefined1 auStack_c8 [32];
  double local_a8 [17];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = dVar1;
  dVar1 = param_3[1];
  param_1[2] = *param_3;
  param_1[3] = dVar1;
  dVar1 = param_4[1];
  param_1[4] = *param_4;
  param_1[5] = dVar1;
  dVar1 = param_5[1];
  param_1[6] = *param_5;
  param_1[7] = dVar1;
  if ((((1e-07 < ABS(*param_1 + -0.64)) || (1e-07 < ABS(param_1[1] + -0.33))) ||
      (1e-07 < ABS(param_1[2] + -0.3))) ||
     (((1e-07 < ABS(param_1[3] + -0.6) || (1e-07 < ABS(param_1[4] + -0.15))) ||
      ((1e-07 < ABS(param_1[5] + -0.06) || (1e-07 < ABS(param_1[6] + -0.3127))))))) {
    bVar2 = false;
  }
  else {
    bVar2 = ABS(param_1[7] + -0.329) <= 1e-07;
  }
  *(bool *)(param_1 + 0x28) = bVar2;
  FUN_14603eb60(param_1,local_a8);
  pdVar4 = local_a8;
  pdVar5 = param_1 + 8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pdVar5 = *pdVar4;
    pdVar4 = pdVar4 + 1;
    pdVar5 = pdVar5 + 1;
  }
  FUN_14494412e(param_1 + 8,local_a8);
  pdVar4 = local_a8;
  pdVar5 = param_1 + 0x18;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pdVar5 = *pdVar4;
    pdVar4 = pdVar4 + 1;
    pdVar5 = pdVar5 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467a7f04 FUN_1467a7f04 body=98 status=ok
// SIG undefined FUN_1467a7f04(void)

undefined * FUN_1467a7f04(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c82b8f0) {
    FUN_144b3d300(&DAT_14c82b8f0);
    if (DAT_14c82b8f0 == -1) {
      FUN_14603e9e6(&DAT_14c82b7a0,1);
      _Init_thread_footer(&DAT_14c82b8f0);
    }
  }
  return &DAT_14c82b7a0;
}



// FUNCTION 1467a7f66 thunk_FUN_1467a7f6c body=5 status=ok
// SIG undefined thunk_FUN_1467a7f6c(void)

bool thunk_FUN_1467a7f6c(double *param_1,double *param_2,double param_3)

{
  bool bVar1;
  
  if ((((param_3 < ABS(*param_1 - *param_2)) || (param_3 < ABS(param_1[1] - param_2[1]))) ||
      (param_3 < ABS(param_1[2] - param_2[2]))) ||
     (((param_3 < ABS(param_1[3] - param_2[3]) || (param_3 < ABS(param_1[4] - param_2[4]))) ||
      ((param_3 < ABS(param_1[5] - param_2[5]) || (param_3 < ABS(param_1[6] - param_2[6]))))))) {
    bVar1 = false;
  }
  else {
    bVar1 = ABS(param_1[7] - param_2[7]) <= param_3;
  }
  return bVar1;
}



// FUNCTION 1467a7f6c FUN_1467a7f6c body=200 status=ok
// SIG undefined FUN_1467a7f6c(void)

bool FUN_1467a7f6c(double *param_1,double *param_2,double param_3)

{
  bool bVar1;
  
  if ((((param_3 < ABS(*param_1 - *param_2)) || (param_3 < ABS(param_1[1] - param_2[1]))) ||
      (param_3 < ABS(param_1[2] - param_2[2]))) ||
     (((param_3 < ABS(param_1[3] - param_2[3]) || (param_3 < ABS(param_1[4] - param_2[4]))) ||
      ((param_3 < ABS(param_1[5] - param_2[5]) || (param_3 < ABS(param_1[6] - param_2[6]))))))) {
    bVar1 = false;
  }
  else {
    bVar1 = ABS(param_1[7] - param_2[7]) <= param_3;
  }
  return bVar1;
}



// FUNCTION 1467a8034 FUN_1467a8034 body=44 status=ok
// SIG undefined FUN_1467a8034(void)

float FUN_1467a8034(longlong param_1,float *param_2)

{
  return (float)*(double *)(param_1 + 0x88) * param_2[2] +
         (float)*(double *)(param_1 + 0x48) * *param_2 +
         (float)*(double *)(param_1 + 0x68) * param_2[1];
}



// FUNCTION 1467a8060 FUN_1467a8060 body=123 status=ok
// SIG undefined FUN_1467a8060(void)

undefined * FUN_1467a8060(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c82b980) {
    FUN_144b3d300(&DAT_14c82b980);
    if (DAT_14c82b980 == -1) {
      FUN_14029dc1a();
      FUN_1467a7f04();
      FUN_14603ed46(&DAT_14c82b900,&DAT_14c82b7a0,&DAT_14c82b640,1);
      _Init_thread_footer(&DAT_14c82b980);
    }
  }
  return &DAT_14c82b900;
}



// FUNCTION 1467a80dc FUN_1467a80dc body=128 status=ok
// SIG undefined FUN_1467a80dc(void)

float * FUN_1467a80dc(double *param_1,float *param_2,undefined8 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  dVar15 = (double)(float)*param_3;
  dVar16 = (double)(float)((ulonglong)*param_3 >> 0x20);
  dVar13 = (double)(float)param_3[1];
  dVar14 = (double)(float)((ulonglong)param_3[1] >> 0x20);
  dVar1 = param_1[1];
  dVar2 = param_1[2];
  dVar3 = param_1[3];
  dVar4 = param_1[5];
  dVar5 = param_1[6];
  dVar6 = param_1[7];
  dVar7 = param_1[9];
  dVar8 = param_1[10];
  dVar9 = param_1[0xb];
  dVar10 = param_1[0xd];
  dVar11 = param_1[0xe];
  dVar12 = param_1[0xf];
  *param_2 = (float)(param_1[0xc] * dVar14 +
                    param_1[8] * dVar13 + param_1[4] * dVar16 + *param_1 * dVar15);
  param_2[1] = (float)(dVar10 * dVar14 + dVar7 * dVar13 + dVar4 * dVar16 + dVar1 * dVar15);
  param_2[2] = (float)(dVar14 * dVar11 + dVar13 * dVar8 + dVar16 * dVar5 + dVar15 * dVar2);
  param_2[3] = (float)(dVar14 * dVar12 + dVar13 * dVar9 + dVar16 * dVar6 + dVar15 * dVar3);
  return param_2;
}



// FUNCTION 1467a815c FUN_1467a815c body=127 status=ok
// SIG undefined FUN_1467a815c(void)

void FUN_1467a815c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = param_1[1];
  uVar2 = param_2 - lVar1;
  if (uVar2 != 0 && lVar1 <= param_2) {
    param_1[1] = param_2;
    if ((ulonglong)(param_1[2] - lVar1) < uVar2) {
      FUN_1467abbd2(param_1);
    }
    memset((void *)(lVar1 * 4 + *param_1),0,uVar2 * 4);
    return;
  }
  if (-1 < param_2) {
    if (lVar1 <= param_2) {
      return;
    }
    param_1[1] = param_2;
    FUN_1467abc60(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1467a81dc FUN_1467a81dc body=107 status=ok
// SIG undefined FUN_1467a81dc(void)

longlong * FUN_1467a81dc(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    if (((ulonglong)plVar1[3] >> 0x3e & 1) == 0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    lVar3 = plVar1[2];
    param_1 = (longlong *)*param_1;
    if (param_1 != (longlong *)0x0) {
      if ((param_1[3] & 0x4000000000000000U) == 0) {
        (**(code **)(*param_1 + 8))(param_1);
      }
      lVar2 = param_1[1];
      goto LAB_1467a8219;
    }
  }
  lVar2 = 0;
LAB_1467a8219:
  *param_2 = lVar2;
  param_2[1] = lVar3;
  return param_2;
}



// FUNCTION 1467a8248 FUN_1467a8248 body=309 status=ok
// SIG undefined FUN_1467a8248(void)

void FUN_1467a8248(uint *param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_98 [36];
  uint local_74;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar11 = *param_1;
  uVar4 = param_1[1];
  uVar1 = param_1[2];
  uVar12 = param_1[3];
  uVar6 = *(ulonglong *)(param_1 + 4);
  uVar5 = *(ulonglong *)(param_1 + 6);
  local_58 = *(undefined8 *)(param_1 + 0xc);
  uStack_50 = *(undefined8 *)(param_1 + 0xe);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 10);
  uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
  uVar9 = uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18 |
          (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
          (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38;
  uVar10 = uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
           (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
           (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
  puVar8 = (uint *)*param_2;
  *puVar8 = uVar11;
  puVar8[1] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  puVar8[2] = uVar1;
  puVar8[3] = uVar12;
  *(ulonglong *)(puVar8 + 4) = uVar9;
  *(ulonglong *)(puVar8 + 6) = uVar10;
  local_68._0_4_ = (uint)uVar2;
  local_68._4_4_ = (uint)((ulonglong)uVar2 >> 0x20);
  uStack_60._0_4_ = (uint)uVar3;
  uStack_60._4_4_ = (uint)((ulonglong)uVar3 >> 0x20);
  *(undefined8 *)(puVar8 + 0xc) = local_58;
  *(undefined8 *)(puVar8 + 0xe) = uStack_50;
  puVar8[8] = (uint)local_68;
  puVar8[9] = local_68._4_4_;
  puVar8[10] = (uint)uStack_60;
  puVar8[0xb] = uStack_60._4_4_;
  puVar8 = (uint *)*param_2;
  uVar6 = param_2[1];
  uVar5 = 8;
  if (uVar6 < 8) {
    uVar5 = uVar6;
  }
  uVar6 = uVar6 - uVar5;
  local_68 = uVar2;
  uStack_60 = uVar3;
  if (uVar6 == 0) {
    uVar4 = 0;
  }
  else {
    lVar7 = (longlong)puVar8 + uVar5;
    uVar4 = 0;
    local_74 = uVar1;
    local_70 = param_2;
    do {
      uVar5 = 0x7fffffff;
      if (uVar6 < 0x7fffffff) {
        uVar5 = uVar6;
      }
      uVar4 = (*(code *)PTR_FUN_14c75b148)(lVar7,uVar5 & 0xffffffff,uVar4);
      lVar7 = lVar7 + uVar5;
      uVar6 = uVar6 - uVar5;
    } while (uVar6 != 0);
    puVar8 = (uint *)*local_70;
    uVar1 = local_74;
  }
  *puVar8 = uVar11;
  puVar8[1] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  puVar8[2] = uVar1;
  puVar8[3] = uVar12;
  *(ulonglong *)(puVar8 + 4) = uVar9;
  *(ulonglong *)(puVar8 + 6) = uVar10;
  puVar8[8] = (uint)local_68;
  puVar8[9] = local_68._4_4_;
  puVar8[10] = (uint)uStack_60;
  puVar8[0xb] = uStack_60._4_4_;
  puVar8[0xc] = (uint)local_58;
  puVar8[0xd] = local_58._4_4_;
  puVar8[0xe] = (uint)uStack_50;
  puVar8[0xf] = uStack_50._4_4_;
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467a837e FUN_1467a837e body=226 status=ok
// SIG undefined FUN_1467a837e(void)

longlong FUN_1467a837e(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0x100000000;
  iVar4 = *(int *)(param_3 + 8);
  if (iVar4 < -1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4 + 1);
  }
  if (iVar4 < 1) {
    iVar4 = 0;
    uVar2 = 1;
  }
  else {
    FUN_1467aad6e(param_1);
    iVar4 = *(int *)(param_1 + 0x10);
    uVar2 = *(uint *)(param_1 + 0x14);
  }
  *(uint *)(param_1 + 0x10) = iVar4 + 1U;
  if (uVar2 < iVar4 + 1U) {
    FUN_1467aae4a(param_1,iVar4);
  }
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar3 = param_1;
  }
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(lVar3 + (longlong)iVar4 * 8) = uVar1;
  FUN_1467abfbe(param_1,param_3);
  local_30 = &LAB_1467aad66;
  FUN_1467aac4a(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467a8462 FUN_1467a8462 body=383 status=ok
// SIG undefined FUN_1467a8462(void)

undefined8 *
FUN_1467a8462(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6,undefined8 param_7,undefined8 param_8)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  char cVar6;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  undefined8 local_90;
  undefined1 *local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  longlong *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140e03604(&local_58,param_8);
  FUN_1467a81dc(&local_58,local_68);
  local_78 = *param_6;
  uStack_74 = param_6[1];
  uStack_70 = param_6[2];
  uStack_6c = param_6[3];
  local_98 = &local_78;
  local_90 = param_7;
  local_80 = 0;
  local_88 = local_68;
  cVar6 = FUN_140e03d9c(param_1,param_3,param_4,param_5);
  plVar5 = local_58;
  if (cVar6 == '\0') {
    param_2[1] = 0;
    param_2[2] = 0x100000000;
  }
  else {
    local_58 = (longlong *)0x0;
    param_2[1] = 0;
    param_2[2] = &DAT_100000001;
    *param_2 = plVar5;
    local_50 = &LAB_1467aad66;
    FUN_1467aac4a(param_2);
  }
  plVar5 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 3;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar3 & 0x3fffffff) == 1) {
      (**(code **)(*local_58 + 0x10))(local_58);
      plVar5[1] = 0;
      plVar5[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar5 + 3);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if ((uVar4 & 0xfffffffc0000000) == 0x40000000) {
        (**(code **)*plVar5)(plVar5,1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467a85e2 FUN_1467a85e2 body=408 status=ok
// SIG undefined FUN_1467a85e2(void)

undefined8 FUN_1467a85e2(undefined8 param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_b8 [32];
  longlong **local_98;
  longlong local_90;
  ulonglong local_88;
  longlong *local_80;
  int local_78;
  int local_74;
  char local_70;
  ulonglong local_60;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = FUN_1467fdf84();
  if (0x3f < uVar5) {
    FUN_1467a877c(&local_78,param_1);
    if ((local_78 == -0x488a9c9e) && (local_60 <= uVar5)) {
      if (local_70 == '\0') {
        ppuVar7 = &PTR_PTR_14c7585b0;
      }
      else if (local_70 == '\x04') {
        ppuVar7 = &PTR_PTR_14c7585c0;
      }
      else {
        if (local_70 != '\x03') goto LAB_1467a8611;
        ppuVar7 = &PTR_PTR_14c7585b8;
      }
      local_80 = (longlong *)0x0;
      uVar6 = (**(code **)*ppuVar7)(ppuVar7,&local_78);
      iVar4 = 0;
      local_98 = &local_80;
      FUN_1467fe474(param_1,&local_90,0,uVar6);
      uVar5 = 8;
      if (local_88 < 8) {
        uVar5 = local_88;
      }
      uVar9 = local_88 - uVar5;
      if (uVar9 != 0) {
        lVar8 = uVar5 + local_90;
        iVar4 = 0;
        do {
          uVar5 = 0x7fffffff;
          if (uVar9 < 0x7fffffff) {
            uVar5 = uVar9;
          }
          iVar4 = (*(code *)PTR_FUN_14c75b148)(lVar8,uVar5 & 0xffffffff,iVar4);
          lVar8 = lVar8 + uVar5;
          uVar9 = uVar9 - uVar5;
        } while (uVar9 != 0);
      }
      plVar3 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_80 + 3;
        lVar8 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (((uint)lVar8 & 0x3fffffff) == 1) {
          (**(code **)(*local_80 + 0x10))(local_80);
          plVar3[1] = 0;
          plVar3[2] = 0;
          LOCK();
          puVar2 = (ulonglong *)(plVar3 + 3);
          uVar5 = *puVar2;
          *puVar2 = *puVar2 - 0x40000000;
          UNLOCK();
          if ((uVar5 & 0xfffffffc0000000) == 0x40000000) {
            (**(code **)*plVar3)(plVar3,1);
          }
        }
      }
      if (local_74 == iVar4) {
        uVar6 = 1;
        goto LAB_1467a8613;
      }
    }
  }
LAB_1467a8611:
  uVar6 = 0;
LAB_1467a8613:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467a877c FUN_1467a877c body=169 status=ok
// SIG undefined FUN_1467a877c(void)

uint * FUN_1467a877c(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  uint *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0xb7756362;
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
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar3 = FUN_1467fdf84(param_2);
  if (0x3f < uVar3) {
    local_20 = 0x40;
    local_28 = param_1;
    FUN_1467fe5c0(param_2,&local_28,0);
    uVar1 = *param_1;
    uVar2 = param_1[1];
    *param_1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    param_1[1] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar1 = param_1[3];
    param_1[3] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar3 = *(ulonglong *)(param_1 + 4);
    *(ulonglong *)(param_1 + 4) =
         uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
         (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
         (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
    uVar3 = *(ulonglong *)(param_1 + 6);
    *(ulonglong *)(param_1 + 6) =
         uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
         (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
         (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467a8826 FUN_1467a8826 body=215 status=ok
// SIG undefined FUN_1467a8826(void)

longlong FUN_1467a8826(longlong param_1,undefined8 param_2,undefined1 param_3,char param_4,
                      longlong param_5)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined **local_48;
  undefined1 local_40;
  char local_3f;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0x100000000;
  if (param_4 != '\0') {
    lVar1 = 0x40000;
    if (param_5 != 0) {
      lVar1 = param_5;
    }
    local_48 = &PTR_FUN_149dffdb0;
    local_40 = param_3;
    local_3f = param_4;
    FUN_142732ab0(&local_48,local_38,param_2,lVar1);
    FUN_1467aaaf0(param_1,local_38);
    FUN_1458cf622(local_38);
    if (*(int *)(param_1 + 0x10) != 0) goto LAB_1467a8880;
  }
  FUN_1467a8990();
  FUN_1467aaaf0(param_1,local_38);
  FUN_1458cf622(local_38);
LAB_1467a8880:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1467a88fe FUN_1467a88fe body=144 status=ok
// SIG undefined FUN_1467a88fe(void)

undefined8 FUN_1467a88fe(undefined8 param_1)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  local_28 = 0x100000000;
  FUN_1467abb70(local_38);
  local_40 = &LAB_1467aad66;
  FUN_1467aac4a(local_38);
  local_48 = 0;
  FUN_1467a8826(param_1,local_38,2,2);
  FUN_1458cf622(local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467a8990 FUN_1467a8990 body=446 status=ok
// SIG undefined FUN_1467a8990(void)

undefined8 FUN_1467a8990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined1 local_98 [16];
  longlong *local_88;
  undefined1 local_80 [24];
  undefined4 local_68;
  undefined8 local_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 local_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = 0xb7756362;
  local_64 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50._0_4_ = 0;
  uStack_50._4_4_ = 0;
  uStack_48 = 0;
  local_44 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_5c = 1;
  uStack_50 = FUN_1467fdf84(param_3);
  uStack_58 = (undefined4)uStack_50;
  uStack_54 = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_50 = uStack_50 + 0x40;
  FUN_1467c4fea(&uStack_48,param_3);
  FUN_140e03604(&local_88,0x40);
  FUN_1467a81dc(&local_88,local_98);
  FUN_1467a8248(&local_68,local_98);
  FUN_1467fdfee(param_3,local_80);
  local_a0 = local_88;
  local_88 = (longlong *)0x0;
  FUN_1467aab66(param_2,&local_a0,local_80);
  plVar5 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a0 + 3;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar3 & 0x3fffffff) == 1) {
      (**(code **)(*local_a0 + 0x10))(local_a0);
      plVar5[1] = 0;
      plVar5[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar5 + 3);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if ((uVar4 & 0xfffffffc0000000) == 0x40000000) {
        (**(code **)*plVar5)(plVar5,1);
      }
    }
  }
  FUN_1458cf622(local_80);
  plVar5 = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_88 + 3;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar3 & 0x3fffffff) == 1) {
      (**(code **)(*local_88 + 0x10))(local_88);
      plVar5[1] = 0;
      plVar5[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar5 + 3);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if ((uVar4 & 0xfffffffc0000000) == 0x40000000) {
        (**(code **)*plVar5)(plVar5,1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467a8b50 FUN_1467a8b50 body=168 status=ok
// SIG undefined FUN_1467a8b50(void)

undefined8
FUN_1467a8b50(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_38 = 0x100000000;
  FUN_1467abb70(local_48);
  local_50 = &LAB_1467aad66;
  FUN_1467aac4a(local_48);
  local_58 = param_5;
  FUN_1467a8826(param_1,local_48,param_3,param_4);
  FUN_1458cf622(local_48);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467a8bf9 FUN_1467a8bf9 body=145 status=ok
// SIG undefined FUN_1467a8bf9(void)

undefined8 * FUN_1467a8bf9(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar2 = FUN_1467ac110(param_2);
  param_1[1] = 0;
  if (cVar2 == '\0') {
    param_1[2] = 0x100000000;
  }
  else {
    param_1[2] = &DAT_100000001;
    uVar1 = *param_2;
    *param_2 = 0;
    *param_1 = uVar1;
    local_20 = &LAB_1467aad66;
    FUN_1467aac4a(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467a8c8c FUN_1467a8c8c body=683 status=ok
// SIG undefined FUN_1467a8c8c(void)

longlong FUN_1467a8c8c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  longlong *local_88;
  uint *local_80;
  ulonglong local_78;
  uint local_68;
  undefined8 uStack_64;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  undefined8 local_44;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0xb7756362;
  uStack_64 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  local_44 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  (**(code **)(*param_2 + 0x170))(param_2,&local_68,0x40);
  uVar5 = uStack_58;
  uVar8 = local_68 >> 0x18 | (local_68 & 0xff0000) >> 8 | (local_68 & 0xff00) << 8 |
          local_68 << 0x18;
  uVar7 = (uint)uStack_64 >> 0x18 | ((uint)uStack_64 & 0xff0000) >> 8 |
          ((uint)uStack_64 & 0xff00) << 8 | (uint)uStack_64 << 0x18;
  uStack_5c = uStack_5c >> 0x18 | (uStack_5c & 0xff0000) >> 8 | (uStack_5c & 0xff00) << 8 |
              uStack_5c << 0x18;
  lVar3 = CONCAT44(uStack_54,uStack_58);
  uStack_58 = uStack_54 >> 0x18 | uStack_54 >> 8 & 0xff00 | (uStack_54 & 0xff00) << 8 |
              uStack_54 << 0x18;
  uStack_54 = uVar5 >> 0x18 | uVar5 >> 8 & 0xff00 |
              (uint)((((ulonglong)uVar5 & 0xff00) << 0x28) >> 0x20) |
              (uint)((ulonglong)(lVar3 << 0x38) >> 0x20);
  uVar6 = (ulonglong)(uStack_4c >> 0x18) | ((ulonglong)uStack_4c & 0xff0000) >> 8 |
          ((ulonglong)uStack_4c & 0xff00) << 8 | ((ulonglong)uStack_4c & 0xff) << 0x18;
  uVar9 = uVar6 | ((ulonglong)uStack_50 & 0xff000000) << 8 |
          ((ulonglong)uStack_50 & 0xff0000) << 0x18 | ((ulonglong)uStack_50 & 0xff00) << 0x28 |
          CONCAT44(uStack_4c,uStack_50) << 0x38;
  uStack_50 = (uint)uVar6;
  uStack_4c = (uint)(uVar9 >> 0x20);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0x100000000;
  bVar10 = local_68 == 0x626375b7;
  local_68 = uVar8;
  uStack_64._0_4_ = uVar7;
  if ((bVar10) && (uVar9 - 0x40 < 0xffffffffffc1)) {
    FUN_140e03604(&local_88);
    uVar7 = uStack_50;
    uVar5 = uStack_58;
    local_68 = local_68 >> 0x18 | (local_68 & 0xff0000) >> 8 | (local_68 & 0xff00) << 8 |
               local_68 << 0x18;
    uStack_64._0_4_ =
         (uint)uStack_64 >> 0x18 | ((uint)uStack_64 & 0xff0000) >> 8 |
         ((uint)uStack_64 & 0xff00) << 8 | (uint)uStack_64 << 0x18;
    uStack_5c = uStack_5c >> 0x18 | (uStack_5c & 0xff0000) >> 8 | (uStack_5c & 0xff00) << 8 |
                uStack_5c << 0x18;
    lVar3 = CONCAT44(uStack_54,uStack_58);
    uStack_58 = uStack_54 >> 0x18 | uStack_54 >> 8 & 0xff00 | (uStack_54 & 0xff00) << 8 |
                uStack_54 << 0x18;
    uStack_54 = uVar5 >> 0x18 | uVar5 >> 8 & 0xff00 |
                (uint)((((ulonglong)uVar5 & 0xff00) << 0x28) >> 0x20) |
                (uint)((ulonglong)(lVar3 << 0x38) >> 0x20);
    lVar3 = CONCAT44(uStack_4c,uStack_50);
    uStack_50 = uStack_4c >> 0x18 | uStack_4c >> 8 & 0xff00 | (uStack_4c & 0xff00) << 8 |
                uStack_4c << 0x18;
    uStack_4c = uVar7 >> 0x18 | uVar7 >> 8 & 0xff00 |
                (uint)((((ulonglong)uVar7 & 0xff00) << 0x28) >> 0x20) |
                (uint)((ulonglong)(lVar3 << 0x38) >> 0x20);
    FUN_1467a81dc(&local_88,&local_80);
    local_80[0xc] = uStack_38;
    local_80[0xd] = uStack_34;
    local_80[0xe] = (uint)uStack_30;
    local_80[0xf] = uStack_30._4_4_;
    local_80[8] = uStack_48;
    local_80[9] = (uint)local_44;
    local_80[10] = local_44._4_4_;
    local_80[0xb] = uStack_3c;
    local_80[4] = uStack_58;
    local_80[5] = uStack_54;
    local_80[6] = uStack_50;
    local_80[7] = uStack_4c;
    *local_80 = local_68;
    local_80[1] = (uint)uStack_64;
    local_80[2] = uStack_64._4_4_;
    local_80[3] = uStack_5c;
    uVar6 = 0x40;
    if (local_78 < 0x40) {
      uVar6 = local_78;
    }
    (**(code **)(*param_2 + 0x170))(param_2,(longlong)local_80 + uVar6,local_78 - uVar6);
    plVar4 = local_88;
    if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
      local_88 = (longlong *)0x0;
      local_90 = plVar4;
      FUN_1467a8bf9(&local_80,&local_90);
      FUN_1467aaaf0(param_1,&local_80);
      FUN_1458cf622(&local_80);
      plVar4 = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_90 + 3;
        lVar3 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (((uint)lVar3 & 0x3fffffff) == 1) {
          (**(code **)(*local_90 + 0x10))(local_90);
          plVar4[1] = 0;
          plVar4[2] = 0;
          LOCK();
          puVar2 = (ulonglong *)(plVar4 + 3);
          uVar6 = *puVar2;
          *puVar2 = *puVar2 - 0x40000000;
          UNLOCK();
          if ((uVar6 & 0xfffffffc0000000) == 0x40000000) {
            (**(code **)*plVar4)(plVar4,1);
          }
        }
      }
    }
    plVar4 = local_88;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_88 + 3;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (((uint)lVar3 & 0x3fffffff) == 1) {
        (**(code **)(*local_88 + 0x10))(local_88);
        plVar4[1] = 0;
        plVar4[2] = 0;
        LOCK();
        puVar2 = (ulonglong *)(plVar4 + 3);
        uVar6 = *puVar2;
        *puVar2 = *puVar2 - 0x40000000;
        UNLOCK();
        if ((uVar6 & 0xfffffffc0000000) == 0x40000000) {
          (**(code **)*plVar4)(plVar4,1);
        }
      }
    }
    if (*(int *)(param_1 + 0x10) != 0) goto LAB_1467a8e5b;
  }
  FUN_14572541c(param_2);
LAB_1467a8e5b:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467a8f38 FUN_1467a8f38 body=157 status=ok
// SIG undefined FUN_1467a8f38(void)

void FUN_1467a8f38(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar6 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(lVar6 + lVar5);
      if (plVar2 == (longlong *)0x0) {
        lVar4 = 0;
LAB_1467a8fab:
        lVar3 = 0;
      }
      else {
        if ((plVar2[3] & 0x4000000000000000U) == 0) {
          (**(code **)(*plVar2 + 8))(plVar2);
        }
        lVar4 = plVar2[2];
        plVar2 = *(longlong **)(lVar6 + lVar5);
        if (plVar2 == (longlong *)0x0) goto LAB_1467a8fab;
        if ((plVar2[3] & 0x4000000000000000U) == 0) {
          (**(code **)(*plVar2 + 8))(plVar2);
        }
        lVar3 = plVar2[1];
      }
      (**(code **)(*param_2 + 0x170))(param_2,lVar3,lVar4);
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 1467a8fd6 FUN_1467a8fd6 body=117 status=ok
// SIG undefined FUN_1467a8fd6(void)

undefined8 * FUN_1467a8fd6(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_1467a877c(local_58,param_1);
    *(undefined4 *)(param_2 + 2) = local_28;
    *(undefined4 *)param_2 = local_38;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_34;
    *(undefined4 *)(param_2 + 1) = uStack_30;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_2c;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
  }
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467a904e FUN_1467a904e body=453 status=ok
// SIG undefined FUN_1467a904e(void)

undefined8 * FUN_1467a904e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong *plStack_38;
  longlong *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x10) == 0) {
    *param_2 = 0;
  }
  else {
    local_68 = 0;
    lStack_60 = 0;
    local_58 = 0xffffffffffffffff;
    local_50 = 0;
    local_48 = 0xffffffff00000000;
    local_40 = (longlong *)0x0;
    plStack_38 = (longlong *)0x0;
    local_30 = (longlong *)0x0;
    if (param_1 != 0) {
      lStack_60 = param_1;
    }
    FUN_140e03374(&local_68,param_2,0,0xffffffffffffffff);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 3;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (((uint)lVar3 & 0x3fffffff) == 1) {
        (**(code **)(*local_30 + 0x10))(local_30);
        plVar5[1] = 0;
        plVar5[2] = 0;
        LOCK();
        puVar2 = (ulonglong *)(plVar5 + 3);
        uVar4 = *puVar2;
        *puVar2 = *puVar2 - 0x40000000;
        UNLOCK();
        if ((uVar4 & 0xfffffffc0000000) == 0x40000000) {
          (**(code **)*plVar5)(plVar5,1);
        }
      }
    }
    plVar5 = plStack_38;
    if (plStack_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_38 + 3;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (((uint)lVar3 & 0x3fffffff) == 1) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        plVar5[1] = 0;
        plVar5[2] = 0;
        LOCK();
        puVar2 = (ulonglong *)(plVar5 + 3);
        uVar4 = *puVar2;
        *puVar2 = *puVar2 - 0x40000000;
        UNLOCK();
        if ((uVar4 & 0xfffffffc0000000) == 0x40000000) {
          (**(code **)*plVar5)(plVar5,1);
        }
      }
    }
    plVar5 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 3;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (((uint)lVar3 & 0x3fffffff) == 1) {
        (**(code **)(*local_40 + 0x10))(local_40);
        plVar5[1] = 0;
        plVar5[2] = 0;
        LOCK();
        puVar2 = (ulonglong *)(plVar5 + 3);
        uVar4 = *puVar2;
        *puVar2 = *puVar2 - 0x40000000;
        UNLOCK();
        if ((uVar4 & 0xfffffffc0000000) == 0x40000000) {
          (**(code **)*plVar5)(plVar5,1);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467a9214 FUN_1467a9214 body=115 status=ok
// SIG undefined FUN_1467a9214(void)

longlong FUN_1467a9214(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    FUN_1467a8f38(param_2,param_1);
  }
  else {
    FUN_1467a8c8c(local_38,param_1);
    FUN_1467aaaf0(param_2,local_38);
    FUN_1458cf622(local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467a9288 FUN_1467a9288 body=1890 status=ok
// SIG undefined FUN_1467a9288(void)

int FUN_1467a9288(ushort *param_1,uint *param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  uint *puVar2;
  ushort *puVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  undefined8 uVar11;
  ushort *puVar12;
  uint uVar13;
  ushort *puVar14;
  uint *puVar15;
  uint *puVar16;
  longlong lVar17;
  longlong lVar18;
  size_t _Size;
  uint *puVar19;
  ulonglong uVar20;
  byte *pbVar21;
  uint *puVar22;
  uint uVar23;
  ushort *puVar24;
  ulonglong uVar25;
  ushort *puVar26;
  uint *puVar27;
  uint *puVar28;
  uint *_Dst;
  undefined1 in_XMM0 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  if ((int)param_4 < 0 || param_1 == (ushort *)0x0) {
    return -1;
  }
  if (param_4 == 0) {
    if (param_3 != 1) {
      return -1;
    }
    return -(uint)((byte)*param_1 != 0);
  }
  if (param_3 == 0) {
    return -1;
  }
  pbVar1 = (byte *)((longlong)param_3 + (longlong)param_1);
  puVar2 = (uint *)((longlong)param_2 + (ulonglong)param_4);
  puVar3 = (ushort *)((longlong)param_1 + (longlong)param_3 + -0x10);
  puVar27 = (uint *)((longlong)param_2 + ((ulonglong)param_4 - 0x20));
  iVar8 = (int)param_1;
  _Dst = param_2;
  if (param_4 < 0x40) goto LAB_1467a9902;
  auVar29 = pmovsxbq(in_XMM0,0x100);
  puVar26 = param_1;
LAB_1467a9348:
  param_1 = (ushort *)((longlong)puVar26 + 1);
  bVar6 = (byte)*puVar26;
  uVar13 = (uint)bVar6;
  _Size = (size_t)(uint)(bVar6 >> 4);
  if (bVar6 >> 4 == 0xf) {
    if (param_1 < pbVar1 + -0xf) {
      puVar12 = puVar26 + 1;
      lVar18 = 0;
      puVar26 = puVar26 + 8;
      do {
        puVar24 = puVar26;
        lVar17 = lVar18;
        puVar14 = param_1;
        param_1 = puVar24 + -7;
        if (pbVar1 + -0xf < param_1) goto LAB_1467a951e;
        param_1 = (ushort *)((longlong)puVar14 + 1);
        uVar20 = (ulonglong)*(byte *)((longlong)puVar24 + -0xf);
        lVar18 = lVar17 + uVar20;
        puVar12 = (ushort *)((longlong)puVar12 + 1);
        puVar26 = (ushort *)((longlong)puVar24 + 1);
      } while (uVar20 == 0xff);
      if (lVar18 == -1) {
        param_1 = puVar24 + -7;
      }
      else {
        _Size = lVar18 + 0xf;
        puVar28 = (uint *)((longlong)_Dst + _Size);
        if ((!CARRY8((ulonglong)_Dst,_Size)) && (_Size <= (ulonglong)-(longlong)puVar12)) {
          if ((puVar27 < puVar28) ||
             (puVar26 = (ushort *)(lVar17 + uVar20 + (longlong)puVar24 + 1),
             pbVar1 + -0x20 < puVar26)) {
            param_1 = puVar24 + -7;
            goto LAB_1467a9805;
          }
          lVar18 = 0;
          do {
            uVar11 = *(undefined8 *)((byte *)((longlong)param_1 + lVar18) + 8);
            pbVar21 = (byte *)((longlong)_Dst + lVar18);
            *(undefined8 *)pbVar21 = *(undefined8 *)((longlong)param_1 + lVar18);
            *(undefined8 *)(pbVar21 + 8) = uVar11;
            pbVar4 = (byte *)((longlong)puVar14 + lVar18 + 0x11);
            uVar11 = *(undefined8 *)(pbVar4 + 8);
            *(undefined8 *)(pbVar21 + 0x10) = *(undefined8 *)pbVar4;
            *(undefined8 *)(pbVar21 + 0x18) = uVar11;
            lVar18 = lVar18 + 0x20;
          } while (pbVar21 + 0x20 < puVar28);
          goto LAB_1467a942a;
        }
      }
    }
  }
  else {
    puVar28 = (uint *)((longlong)_Dst + _Size);
    if (pbVar1 + -0x11 < param_1) goto LAB_1467a9805;
    uVar11 = *(undefined8 *)((longlong)puVar26 + 9);
    *(undefined8 *)_Dst = *(undefined8 *)param_1;
    *(undefined8 *)(_Dst + 2) = uVar11;
    puVar26 = (ushort *)(_Size + (longlong)param_1);
LAB_1467a942a:
    uVar7 = *puVar26;
    uVar25 = (ulonglong)uVar7;
    param_1 = puVar26 + 1;
    puVar15 = (uint *)((longlong)puVar28 - uVar25);
    uVar20 = (ulonglong)(bVar6 & 0xf);
    if (uVar20 != 0xf) {
      _Dst = (uint *)((longlong)puVar28 + uVar20 + 4);
      uVar20 = uVar20 + 4;
      if (puVar2 + -0x10 <= _Dst) goto LAB_1467a98a3;
      if ((uVar7 < 8) || (puVar15 < param_2)) {
LAB_1467a9497:
        if (puVar15 < param_2) goto LAB_1467a951e;
        _Dst = (uint *)((longlong)puVar28 + uVar20);
        puVar26 = param_1;
        if (uVar7 < 0x10) {
          if (uVar25 == 4) {
            uVar13 = *puVar15;
            uVar23 = uVar13 >> 0x10;
            uVar10 = uVar13;
          }
          else {
            if (uVar7 == 2) {
              uVar7 = (ushort)*puVar15;
              uVar10 = CONCAT22(uVar7,uVar7);
            }
            else {
              if (uVar7 != 1) {
                if (uVar7 < 8) {
                  *puVar28 = 0;
                  *(byte *)puVar28 = (byte)*puVar15;
                  *(byte *)((longlong)puVar28 + 1) = *(byte *)((longlong)puVar15 + 1);
                  *(byte *)((longlong)puVar28 + 2) = *(byte *)((longlong)puVar15 + 2);
                  *(byte *)((longlong)puVar28 + 3) = *(byte *)((longlong)puVar15 + 3);
                  uVar13 = *(uint *)(&DAT_149dffe20 + (ulonglong)uVar7 * 4);
                  puVar28[1] = *(uint *)((longlong)puVar15 + (ulonglong)uVar13);
                  puVar15 = (uint *)((longlong)puVar15 +
                                    ((ulonglong)uVar13 -
                                    (longlong)*(int *)(&DAT_149dffe40 + (ulonglong)uVar7 * 4)));
                }
                else {
                  *(undefined8 *)puVar28 = *(undefined8 *)puVar15;
                  puVar15 = puVar15 + 2;
                }
                puVar28 = puVar28 + 2;
                do {
                  *(undefined8 *)puVar28 = *(undefined8 *)puVar15;
                  puVar28 = puVar28 + 2;
                  puVar15 = puVar15 + 2;
                } while (puVar28 < _Dst);
                goto LAB_1467a9348;
              }
              bVar6 = (byte)*puVar15;
              uVar7 = CONCAT11(bVar6,bVar6);
              uVar10 = (uint)bVar6 * 0x1010101;
            }
            uVar13 = (uint)uVar7;
            uVar23 = uVar13;
          }
          uVar11 = CONCAT44(uVar10,uVar13 & 0xffff | uVar23 << 0x10);
          *(undefined8 *)puVar28 = uVar11;
          if (8 < (longlong)uVar20) {
            puVar15 = (uint *)(uVar20 + (longlong)puVar28);
            if ((uint *)(uVar20 + (longlong)puVar28) <= puVar28 + 4) {
              puVar15 = puVar28 + 4;
            }
            pbVar21 = (byte *)((longlong)puVar15 + (-9 - (longlong)puVar28));
            auVar30._8_4_ = (int)pbVar21;
            auVar30._0_8_ = pbVar21;
            auVar30._12_4_ = (int)((ulonglong)pbVar21 >> 0x20);
            uVar20 = 0;
            do {
              if ((bool)(~((longlong)((ulonglong)pbVar21 >> 3 | 0x8000000000000000) <
                          (longlong)(uVar20 ^ 0x8000000000000000)) & 1)) {
                *(undefined8 *)(puVar28 + uVar20 * 2 + 2) = uVar11;
              }
              auVar31._8_4_ = (int)uVar20;
              auVar31._0_8_ = uVar20;
              auVar31._12_4_ = (int)(uVar20 >> 0x20);
              if ((longlong)((auVar31._8_8_ | auVar29._8_8_) ^ 0x8000000000000000) <=
                  (longlong)(auVar30._8_8_ >> 3 | 0x8000000000000000)) {
                *(undefined8 *)(puVar28 + uVar20 * 2 + 4) = uVar11;
              }
              uVar20 = uVar20 + 2;
            } while ((((ulonglong)pbVar21 >> 3) + 2 & 0xfffffffffffffffe) != uVar20);
          }
          goto LAB_1467a9348;
        }
        do {
          puVar5 = (undefined8 *)((longlong)puVar28 + -uVar25);
          uVar11 = puVar5[1];
          *(undefined8 *)puVar28 = *puVar5;
          *(undefined8 *)(puVar28 + 2) = uVar11;
          pbVar21 = (byte *)((longlong)puVar28 + -uVar25 + 0x10);
          uVar11 = *(undefined8 *)(pbVar21 + 8);
          *(undefined8 *)(puVar28 + 4) = *(undefined8 *)pbVar21;
          *(undefined8 *)(puVar28 + 6) = uVar11;
          puVar28 = puVar28 + 8;
        } while (puVar28 < _Dst);
      }
      else {
        *(undefined8 *)puVar28 = *(undefined8 *)puVar15;
        *(undefined8 *)(puVar28 + 2) = *(undefined8 *)(puVar15 + 2);
        *(short *)(puVar28 + 4) = (short)puVar15[4];
        puVar26 = param_1;
      }
      goto LAB_1467a9348;
    }
    lVar18 = 0;
    puVar26 = param_1;
    do {
      param_1 = (ushort *)((longlong)puVar26 + 1);
      if (pbVar1 + -4 < param_1) goto LAB_1467a951e;
      uVar9 = *puVar26;
      lVar18 = lVar18 + (ulonglong)(byte)uVar9;
      puVar26 = param_1;
    } while ((ulonglong)(byte)uVar9 == 0xff);
    if (lVar18 != -1) {
      uVar20 = lVar18 + 0x13;
      if ((CARRY8((ulonglong)puVar28,uVar20)) || (puVar15 < param_2)) goto LAB_1467a951e;
      if ((uint *)((longlong)puVar28 + uVar20) < puVar2 + -0x10) goto LAB_1467a9497;
      goto LAB_1467a98a3;
    }
  }
LAB_1467a951e:
  uVar10 = (uint)param_1;
  goto LAB_1467a9523;
LAB_1467a98a3:
  if (puVar15 < param_2) {
LAB_1467a99c7:
    uVar10 = (uint)param_1;
LAB_1467a9523:
    return ~uVar10 + iVar8;
  }
  _Dst = (uint *)((longlong)puVar28 + uVar20);
  if ((uint)uVar25 < 8) {
    *puVar28 = 0;
    *(byte *)puVar28 = (byte)*puVar15;
    *(byte *)((longlong)puVar28 + 1) = *(byte *)((longlong)puVar15 + 1);
    *(byte *)((longlong)puVar28 + 2) = *(byte *)((longlong)puVar15 + 2);
    *(byte *)((longlong)puVar28 + 3) = *(byte *)((longlong)puVar15 + 3);
    uVar10 = (uint)uVar25 << 2;
    uVar13 = *(uint *)(&DAT_149dffe20 + uVar10);
    puVar28[1] = *(uint *)((longlong)puVar15 + (ulonglong)uVar13);
    puVar15 = (uint *)((longlong)puVar15 +
                      ((ulonglong)uVar13 - (longlong)*(int *)(&DAT_149dffe40 + uVar10)));
  }
  else {
    *(undefined8 *)puVar28 = *(undefined8 *)puVar15;
    puVar15 = puVar15 + 2;
  }
  puVar16 = puVar28 + 2;
  if (puVar2 + -3 < _Dst) {
    if ((uint *)((longlong)puVar2 + -5) < _Dst) goto LAB_1467a99c7;
    puVar28 = (uint *)((longlong)puVar2 + -7);
    puVar19 = puVar16;
    puVar22 = puVar15;
    if (puVar16 < puVar28) {
      do {
        *(undefined8 *)puVar19 = *(undefined8 *)puVar22;
        puVar19 = puVar19 + 2;
        puVar22 = puVar22 + 2;
      } while (puVar19 < puVar28);
      puVar15 = (uint *)((longlong)puVar15 + ((longlong)puVar28 - (longlong)puVar16));
      puVar16 = puVar28;
    }
    for (; puVar16 < _Dst; puVar16 = (uint *)((longlong)puVar16 + 1)) {
      uVar13 = *puVar15;
      puVar15 = (uint *)((longlong)puVar15 + 1);
      *(byte *)puVar16 = (byte)uVar13;
    }
  }
  else {
    *(undefined8 *)puVar16 = *(undefined8 *)puVar15;
    if (0x10 < uVar20) {
      puVar28 = puVar28 + 4;
      do {
        puVar15 = puVar15 + 2;
        *(undefined8 *)puVar28 = *(undefined8 *)puVar15;
        puVar28 = puVar28 + 2;
      } while (puVar28 < _Dst);
    }
  }
LAB_1467a9902:
  bVar6 = (byte)*param_1;
  param_1 = (ushort *)((longlong)param_1 + 1);
  while( true ) {
    uVar13 = (uint)bVar6;
    if (bVar6 >> 4 == 0xf) break;
    _Size = (size_t)(uint)(bVar6 >> 4);
    if ((puVar3 <= param_1) || (puVar27 < _Dst)) goto LAB_1467a97fc;
    uVar11 = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)_Dst = *(undefined8 *)param_1;
    *(undefined8 *)(_Dst + 2) = uVar11;
    puVar28 = (uint *)((longlong)_Dst + _Size);
    uVar20 = (ulonglong)(uVar13 & 0xf);
    puVar12 = (ushort *)((longlong)param_1 + _Size) + 1;
    uVar7 = *(ushort *)((longlong)param_1 + _Size);
    uVar25 = (ulonglong)uVar7;
    puVar15 = (uint *)((longlong)puVar28 - uVar25);
    if ((((uVar13 & 0xf) == 0xf) || (uVar7 < 8)) || (puVar15 < param_2)) goto LAB_1467a9848;
    *(undefined8 *)puVar28 = *(undefined8 *)puVar15;
    *(undefined8 *)(puVar28 + 2) = *(undefined8 *)(puVar15 + 2);
    *(short *)(puVar28 + 4) = (short)puVar15[4];
    _Dst = (uint *)((longlong)puVar28 + uVar20 + 4);
    bVar6 = *(byte *)((longlong)param_1 + _Size + 2);
    param_1 = (ushort *)((longlong)param_1 + _Size + 3);
  }
  if (pbVar1 + -0xf <= param_1) goto LAB_1467a99c7;
  pbVar21 = (byte *)((longlong)param_1 + 1);
  lVar18 = 0;
  do {
    puVar26 = param_1;
    param_1 = (ushort *)((longlong)puVar26 + 1);
    if (pbVar1 + -0xf < param_1) goto LAB_1467a993b;
    lVar18 = lVar18 + (ulonglong)(byte)*puVar26;
    pbVar21 = pbVar21 + 1;
  } while ((ulonglong)(byte)*puVar26 == 0xff);
  uVar10 = (int)puVar26 + 1;
  if (((lVar18 == -1) || (_Size = lVar18 + 0xf, CARRY8((ulonglong)_Dst,_Size))) ||
     ((ulonglong)-(longlong)pbVar21 < _Size)) goto LAB_1467a9523;
LAB_1467a97fc:
  puVar28 = (uint *)((longlong)_Dst + _Size);
LAB_1467a9805:
  if ((puVar2 + -3 < puVar28) ||
     (puVar12 = (ushort *)((longlong)param_1 + _Size), pbVar1 + -8 < puVar12)) {
    if (((byte *)((longlong)param_1 + _Size) == pbVar1) && (puVar28 <= puVar2)) {
      memmove(_Dst,param_1,_Size);
      return ((int)_Dst + (int)_Size) - (int)param_2;
    }
    uVar10 = (uint)param_1;
    goto LAB_1467a9523;
  }
  do {
    *(undefined8 *)_Dst = *(undefined8 *)param_1;
    _Dst = _Dst + 2;
    param_1 = param_1 + 4;
  } while (_Dst < puVar28);
  uVar25 = (ulonglong)*puVar12;
  puVar12 = puVar12 + 1;
  puVar15 = (uint *)((longlong)puVar28 - uVar25);
  uVar20 = (ulonglong)(uVar13 & 0xf);
LAB_1467a9848:
  if ((int)uVar20 == 0xf) {
    lVar18 = 0;
    do {
      puVar26 = puVar12;
      puVar12 = (ushort *)((longlong)puVar26 + 1);
      if (pbVar1 + -4 < puVar12) goto LAB_1467a993b;
      lVar18 = lVar18 + (ulonglong)(byte)*puVar26;
    } while ((ulonglong)(byte)*puVar26 == 0xff);
    uVar20 = lVar18 + 0xf;
    uVar10 = (int)puVar26 + 1;
    if ((lVar18 == -1) || (~(ulonglong)puVar28 < uVar20)) goto LAB_1467a9523;
  }
  uVar20 = uVar20 + 4;
  param_1 = puVar12;
  goto LAB_1467a98a3;
LAB_1467a993b:
  uVar10 = (int)puVar26 + 1;
  goto LAB_1467a9523;
}



// FUNCTION 1467a99ea FUN_1467a99ea body=421 status=ok
// SIG undefined FUN_1467a99ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1467a99ea(void *param_1,undefined8 param_2,undefined8 param_3,uint param_4,int param_5,
             uint param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  int local_58;
  uint local_50;
  uint local_48;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = 0;
  local_3c = param_4;
  if (((ulonglong)param_1 & 7) == 0) {
    if (*(char *)((longlong)param_1 + 0x40027) == '\0') {
      if (*(longlong *)((longlong)param_1 + 0x40000) == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = *(longlong *)((longlong)param_1 + 0x40000) -
                *(longlong *)((longlong)param_1 + 0x40008);
      }
      *(undefined8 *)((longlong)param_1 + 0x40028) = 0;
      lVar6 = 0;
    }
    else {
      lVar2 = _DAT_00040000;
      lVar6 = _DAT_00040008;
      if (param_1 != (void *)0x0) {
        memset(param_1,0,0x40030);
        lVar2 = 0;
        lVar6 = 0;
      }
    }
    uVar3 = 0xc;
    if (param_6 < 0xc) {
      uVar3 = param_6;
    }
    uVar4 = 9;
    if (0 < (int)param_6) {
      uVar4 = (short)uVar3;
    }
    *(undefined2 *)((longlong)param_1 + 0x40024) = uVar4;
    uVar7 = (ulonglong)*(uint *)((longlong)param_1 + 0x40018) + (lVar2 - lVar6);
    if (0x40000000 < uVar7) {
      uVar7 = 0;
      uVar1 = 0;
      memset(param_1,0,0x20000);
      memset((void *)((longlong)param_1 + 0x20000),(int)CONCAT71((int7)((ulonglong)uVar1 >> 8),0xff)
             ,0x20000);
    }
    iVar5 = (int)uVar7 + 0x10000;
    *(int *)((longlong)param_1 + 0x40020) = iVar5;
    *(undefined8 *)((longlong)param_1 + 0x40008) = param_2;
    *(undefined8 *)((longlong)param_1 + 0x40000) = param_2;
    *(undefined8 *)((longlong)param_1 + 0x40010) = param_2;
    *(int *)((longlong)param_1 + 0x40018) = iVar5;
    *(int *)((longlong)param_1 + 0x4001c) = iVar5;
    iVar5 = 0;
    if (param_4 < 0x7e000001) {
      iVar5 = (uint)((ulonglong)param_4 * 0x8080808081 >> 0x27) + 0x10;
    }
    local_50 = param_6;
    local_58 = param_5;
    local_48 = (uint)(param_5 < iVar5);
    uVar1 = FUN_14273398c(param_1,param_2,param_3,&local_3c);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1467a9b90 FUN_1467a9b90 body=146 status=ok
// SIG undefined FUN_1467a9b90(void)

undefined4
FUN_1467a9b90(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  void *_Dst;
  
  _Dst = malloc(0x40038);
  if (_Dst == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (((ulonglong)_Dst & 7) == 0) {
      memset(_Dst,0,0x40030);
      *(undefined2 *)((longlong)_Dst + 0x40024) = 9;
      uVar1 = FUN_1467a99ea(_Dst,param_1,param_2,param_3,param_4,param_5);
    }
    free(_Dst);
  }
  return uVar1;
}



// FUNCTION 1467a9c22 FUN_1467a9c22 body=1 status=ok
// SIG undefined FUN_1467a9c22(void)

void FUN_1467a9c22(void)

{
  return;
}



// FUNCTION 1467a9c24 FUN_1467a9c24 body=9 status=ok
// SIG undefined FUN_1467a9c24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1467a9c24(void)

{
  return _DAT_00000001;
}



// FUNCTION 1467a9c2e FUN_1467a9c2e body=9 status=ok
// SIG undefined FUN_1467a9c2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1467a9c2e(void)

{
  return _DAT_00000001;
}



// FUNCTION 1467a9c38 FUN_1467a9c38 body=1 status=ok
// SIG undefined FUN_1467a9c38(void)

void FUN_1467a9c38(void)

{
  return;
}



// FUNCTION 1467a9c3a FUN_1467a9c3a body=3 status=ok
// SIG undefined FUN_1467a9c3a(void)

undefined8 FUN_1467a9c3a(void)

{
  return 0;
}



// FUNCTION 1467a9c3e FUN_1467a9c3e body=3 status=ok
// SIG undefined FUN_1467a9c3e(void)

undefined8 FUN_1467a9c3e(void)

{
  return 0;
}



// FUNCTION 1467a9c42 FUN_1467a9c42 body=3 status=ok
// SIG undefined FUN_1467a9c42(void)

undefined8 FUN_1467a9c42(void)

{
  return 0;
}



// FUNCTION 1467a9c46 FUN_1467a9c46 body=1 status=ok
// SIG undefined FUN_1467a9c46(void)

void FUN_1467a9c46(void)

{
  return;
}



// FUNCTION 1467a9c48 FUN_1467a9c48 body=9 status=ok
// SIG undefined FUN_1467a9c48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1467a9c48(void)

{
  return _DAT_00000001;
}



// FUNCTION 1467a9c52 FUN_1467a9c52 body=9 status=ok
// SIG undefined FUN_1467a9c52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1467a9c52(void)

{
  return _DAT_00000001;
}



// FUNCTION 1467a9c5c FUN_1467a9c5c body=3 status=ok
// SIG undefined FUN_1467a9c5c(void)

undefined8 FUN_1467a9c5c(void)

{
  return 0;
}



// FUNCTION 1467a9c60 FUN_1467a9c60 body=3 status=ok
// SIG undefined FUN_1467a9c60(void)

undefined8 FUN_1467a9c60(void)

{
  return 0;
}



// FUNCTION 1467a9c64 FUN_1467a9c64 body=3 status=ok
// SIG undefined FUN_1467a9c64(void)

undefined8 FUN_1467a9c64(void)

{
  return 0;
}



// FUNCTION 1467a9c68 FUN_1467a9c68 body=83 status=ok
// SIG undefined FUN_1467a9c68(void)

undefined8 * FUN_1467a9c68(undefined8 *param_1,int param_2)

{
  *param_1 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,param_1[1],1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467a9cbc FUN_1467a9cbc body=83 status=ok
// SIG undefined FUN_1467a9cbc(void)

undefined8 * FUN_1467a9cbc(undefined8 *param_1,int param_2)

{
  *param_1 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,param_1[1],1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467a9d10 FUN_1467a9d10 body=47 status=ok
// SIG undefined FUN_1467a9d10(void)

undefined8 FUN_1467a9d10(longlong param_1)

{
  LPVOID pvVar1;
  ulonglong uVar2;
  
  pvVar1 = TlsGetValue(*(DWORD *)(param_1 + 0x18));
  uVar2 = (ulonglong)pvVar1 |
          *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  return CONCAT71((int7)(uVar2 >> 8),uVar2 != 0);
}



// FUNCTION 1467a9d94 FUN_1467a9d94 body=24 status=ok
// SIG undefined FUN_1467a9d94(void)

undefined1 FUN_1467a9d94(longlong param_1)

{
  TlsSetValue(*(DWORD *)(param_1 + 0x14),*(LPVOID *)(param_1 + 0x30));
  return 1;
}



// FUNCTION 1467a9dac FUN_1467a9dac body=40 status=ok
// SIG undefined FUN_1467a9dac(void)

undefined8 FUN_1467a9dac(longlong *param_1)

{
  (**(code **)(*param_1 + 0x30))(param_1,0);
  if (DAT_14c872d28 != (longlong *)0x0) {
    (**(code **)(*DAT_14c872d28 + 0x90))();
  }
  return 0;
}



// FUNCTION 1467a9dec FUN_1467a9dec body=49 status=ok
// SIG undefined FUN_1467a9dec(void)

undefined8 FUN_1467a9dec(undefined8 param_1,int param_2)

{
  FUN_1467aa30e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x340,0x40);
  }
  return param_1;
}



// FUNCTION 1467a9e1e FUN_1467a9e1e body=57 status=ok
// SIG undefined FUN_1467a9e1e(void)

void FUN_1467a9e1e(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_2 * 0x180;
  *(undefined1 *)(param_1 + 0x184 + lVar2) = 0;
  piVar1 = (int *)(param_1 + 0x180 + lVar2);
  *piVar1 = *piVar1 + 1;
  FUN_14010d70a(param_1,(longlong)param_2,0);
  piVar1 = (int *)(param_1 + 0x180 + lVar2);
  *piVar1 = *piVar1 + -1;
  return;
}



// FUNCTION 1467a9e58 FUN_1467a9e58 body=1117 status=ok
// SIG undefined FUN_1467a9e58(void)

ulonglong FUN_1467a9e58(longlong param_1,int param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  longlong lVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  bool bVar12;
  ulonglong local_60;
  
  uVar3 = FUN_144a23f14(*(ulonglong *)(param_3 + 0x80) >> 0x3b & 0xffffffffffffff07,
                        *(undefined4 *)(param_3 + 0x1c));
  param_1 = param_1 + (longlong)param_2 * 0x180;
  uVar2 = *(ulonglong *)(param_1 + 0x140);
  uVar4 = FUN_14493c560();
  if (uVar4 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = (ulonglong)((uVar4 & 0x3fff) * 0x18) +
            *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar4 >> 0xe) * 8);
  }
  *(longlong *)(lVar9 + 8) = param_3;
  puVar10 = (ulonglong *)(param_1 + (ulonglong)((uVar3 >> 9 & 1) == 0) * 0x80 + 0x80);
  do {
    while( true ) {
      do {
        uVar7 = *puVar10;
        if ((uVar7 & 0x3ffffff) == 0) {
          puVar11 = (ulonglong *)0x0;
        }
        else {
          puVar11 = (ulonglong *)
                    ((ulonglong)(((uint)uVar7 & 0x3fff) * 0x18) +
                    *(longlong *)
                     (&DAT_14c833b00 + (ulonglong)(((uint)uVar7 & 0x3ffffff) >> 0xe) * 8));
        }
        uVar6 = *puVar11;
      } while (*puVar10 != uVar7);
      if ((uVar6 & 0x3ffffff) == 0) break;
      uVar5 = (uVar7 & 0xfffffffffc000000) + 0x4000000;
      if (uVar5 >> 0x1a < uVar7 >> 0x1a) {
        FUN_14274643a();
      }
      LOCK();
      if (uVar7 == *puVar10) {
        *puVar10 = uVar5 | (uint)uVar6 & 0x3ffffff;
      }
      UNLOCK();
    }
    uVar5 = (uVar6 & 0xfffffffffc000000) + 0x4000000;
    if (uVar5 >> 0x1a < uVar6 >> 0x1a) {
      FUN_14274643a();
    }
    LOCK();
    uVar1 = *puVar11;
    if (uVar6 == uVar1) {
      *puVar11 = uVar5 | uVar4;
    }
    UNLOCK();
  } while (uVar6 != uVar1);
  uVar6 = (uVar7 & 0xfffffffffc000000) + 0x4000000;
  if (uVar6 >> 0x1a < uVar7 >> 0x1a) {
    FUN_14274643a();
  }
  LOCK();
  if (uVar7 == *puVar10) {
    *puVar10 = uVar6 | uVar4;
  }
  UNLOCK();
  local_60 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
  if (local_60 >> 0x1a < uVar2 >> 0x1a) {
    FUN_14274643a();
  }
  uVar3 = (uint)uVar2;
  if ((uVar2 & 0x3ffffff) != 0) {
    if ((uVar2 & 1) == 0) {
      bVar8 = 0;
      uVar7 = uVar2 & 0x3ffffff;
      do {
        bVar8 = bVar8 + 1;
        uVar6 = uVar7 & 2;
        uVar7 = uVar7 >> 1;
      } while (uVar6 == 0);
    }
    else {
      bVar8 = 0;
    }
    uVar3 = uVar3 & ~(uint)(1L << (bVar8 & 0x3f));
  }
  local_60 = local_60 | uVar3 & 0x3ffffff;
  LOCK();
  uVar7 = *(ulonglong *)(param_1 + 0x140);
  bVar12 = uVar2 == uVar7;
  if (bVar12) {
    *(ulonglong *)(param_1 + 0x140) = local_60;
    uVar7 = uVar2;
  }
  UNLOCK();
  while (!bVar12) {
    uVar2 = *(ulonglong *)(param_1 + 0x140);
    uVar7 = (uVar2 & 0xfffffffffc000000) + (ulonglong)((uint)local_60 & 0x3ffffff) + 0x4000000;
    if (uVar7 >> 0x1a < uVar2 >> 0x1a) {
      FUN_14274643a();
    }
    if ((uVar2 & 0x3ffffff) == 0) {
      local_60 = uVar7 & 0xfffffffffc000000 | (ulonglong)((uint)uVar2 & 0x3ffffff);
    }
    else {
      bVar8 = 0;
      if ((uVar2 & 1) == 0) {
        bVar8 = 0;
        uVar6 = uVar2 & 0x3ffffff;
        do {
          bVar8 = bVar8 + 1;
          uVar5 = uVar6 & 2;
          uVar6 = uVar6 >> 1;
        } while (uVar5 == 0);
      }
      local_60 = uVar7 & 0xfffffffffc000000 |
                 (ulonglong)((uint)uVar2 & ~(uint)(1L << (bVar8 & 0x3f)) & 0x3ffffff);
    }
    LOCK();
    uVar7 = *(ulonglong *)(param_1 + 0x140);
    bVar12 = uVar2 == uVar7;
    if (bVar12) {
      *(ulonglong *)(param_1 + 0x140) = local_60;
      uVar7 = uVar2;
    }
    UNLOCK();
  }
  return uVar7;
}



// FUNCTION 1467aa2b6 FUN_1467aa2b6 body=56 status=ok
// SIG undefined FUN_1467aa2b6(void)

longlong FUN_1467aa2b6(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1467aa30e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x340,0x40);
  }
  return param_1;
}



// FUNCTION 1467aa30e FUN_1467aa30e body=109 status=ok
// SIG undefined FUN_1467aa30e(void)

void FUN_1467aa30e(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149dffad0;
  param_1[1] = &PTR_FUN_149dffb38;
  lVar1 = 0x1c0;
  do {
    FUN_1467aa37c((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x180;
  } while (lVar1 != -0x140);
  *param_1 = &PTR_FUN_149dffb50;
  param_1[1] = &PTR_LAB_149dffbb8;
  if (param_1[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1467aa37c FUN_1467aa37c body=82 status=ok
// SIG undefined FUN_1467aa37c(void)

void FUN_1467aa37c(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  FUN_14018802a(param_1[0x29]);
  param_1[0x29] = 0;
  puVar2 = param_1 + 0x20;
  do {
    puVar2 = puVar2 + -0x10;
    do {
      lVar1 = FUN_1467aa3ce(puVar2);
    } while (lVar1 != 0);
    FUN_1447d080c((uint)*puVar2 & 0x3ffffff);
  } while (puVar2 != param_1);
  return;
}



// FUNCTION 1467aa3ce FUN_1467aa3ce body=512 status=ok
// SIG undefined FUN_1467aa3ce(void)

undefined8 FUN_1467aa3ce(ulonglong *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong *puVar8;
  
  do {
    while( true ) {
      do {
        uVar5 = *param_1;
        uVar4 = param_1[8];
        uVar6 = (uint)uVar5;
        puVar8 = (ulonglong *)0x0;
        if ((uVar5 & 0x3ffffff) != 0) {
          puVar8 = (ulonglong *)
                   ((ulonglong)((uVar6 & 0x3fff) * 0x18) +
                   *(longlong *)(&DAT_14c833b00 + (ulonglong)((uVar6 & 0x3ffffff) >> 0xe) * 8));
        }
        uVar1 = *puVar8;
      } while (uVar5 != *param_1);
      uVar7 = (uint)uVar1;
      if ((((uint)uVar4 ^ uVar6) & 0x3ffffff) != 0) break;
      if ((uVar1 & 0x3ffffff) == 0) {
        return 0;
      }
      uVar5 = (uVar4 & 0xfffffffffc000000) + 0x4000000;
      if (uVar5 >> 0x1a < uVar4 >> 0x1a) {
        FUN_14274643a();
      }
      LOCK();
      if (uVar4 == param_1[8]) {
        param_1[8] = uVar5 | uVar7 & 0x3ffffff;
      }
      UNLOCK();
    }
    if ((uVar1 & 0x3ffffff) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulonglong)((uVar7 & 0x3fff) * 0x18) +
              *(longlong *)(&DAT_14c833b00 + (ulonglong)((uVar7 & 0x3ffffff) >> 0xe) * 8);
    }
    uVar2 = *(undefined8 *)(lVar3 + 8);
    uVar4 = (uVar5 & 0xfffffffffc000000) + 0x4000000;
    if (uVar4 >> 0x1a < uVar5 >> 0x1a) {
      FUN_14274643a();
    }
    LOCK();
    uVar1 = *param_1;
    if (uVar5 == uVar1) {
      *param_1 = uVar4 | uVar7 & 0x3ffffff;
    }
    UNLOCK();
  } while (uVar5 != uVar1);
  FUN_1447d080c(uVar6 & 0x3ffffff);
  return uVar2;
}



// FUNCTION 1467aa5ce FUN_1467aa5ce body=2 status=ok
// SIG undefined FUN_1467aa5ce(void)

void FUN_1467aa5ce(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1467aa5d0 FUN_1467aa5d0 body=2 status=ok
// SIG undefined FUN_1467aa5d0(void)

void FUN_1467aa5d0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1467aa5d2 FUN_1467aa5d2 body=88 status=ok
// SIG undefined FUN_1467aa5d2(void)

void FUN_1467aa5d2(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  if (((ulonglong)param_3 & 7) == 0 && 0xf < param_5) {
    *param_2 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
               TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
               ::vftable;
    *param_3 = *param_4;
    param_3[1] = param_4[1];
    param_4[1] = 0;
  }
  else {
    FUN_142733e04(param_2,param_4);
  }
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return;
}



// FUNCTION 1467aa62a FUN_1467aa62a body=26 status=ok
// SIG undefined FUN_1467aa62a(void)

undefined8 FUN_1467aa62a(undefined8 param_1,undefined8 *param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_1456b2388(*param_2);
  }
  return 0;
}



// FUNCTION 1467aa644 FUN_1467aa644 body=111 status=ok
// SIG undefined FUN_1467aa644(void)

undefined8
FUN_1467aa644(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,char param_5)

{
  if (param_5 != '\0') {
    FUN_1456b2388(*param_3);
  }
  if (param_4 < 0x10) {
    FUN_142733e04(param_2 + 5,param_3,param_2);
  }
  else {
    param_2[5] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_3[1] = 0;
  }
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return 0;
}



// FUNCTION 1467aa6b4 FUN_1467aa6b4 body=30 status=ok
// SIG undefined FUN_1467aa6b4(void)

void FUN_1467aa6b4(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 8);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001467aa6cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1467aa6d2 FUN_1467aa6d2 body=3 status=ok
// SIG undefined FUN_1467aa6d2(void)

undefined8 FUN_1467aa6d2(void)

{
  return 0;
}



// FUNCTION 1467aa6d6 FUN_1467aa6d6 body=3 status=ok
// SIG undefined FUN_1467aa6d6(void)

undefined1 FUN_1467aa6d6(void)

{
  return 1;
}



// FUNCTION 1467aa6da FUN_1467aa6da body=6 status=ok
// SIG undefined FUN_1467aa6da(void)

undefined8 FUN_1467aa6da(void)

{
  return 0x10;
}



// FUNCTION 1467aa6e0 FUN_1467aa6e0 body=27 status=ok
// SIG undefined FUN_1467aa6e0(void)

void FUN_1467aa6e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_2 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,1>
             ::vftable;
  *param_3 = *param_4;
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return;
}



// FUNCTION 1467aa6fc FUN_1467aa6fc body=29 status=ok
// SIG undefined FUN_1467aa6fc(void)

undefined8 FUN_1467aa6fc(undefined8 param_1,undefined8 *param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_1456b2388(*(undefined8 *)*param_2);
  }
  return 0;
}



// FUNCTION 1467aa71a FUN_1467aa71a body=73 status=ok
// SIG undefined FUN_1467aa71a(void)

undefined8
FUN_1467aa71a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             char param_5)

{
  if (param_5 != '\0') {
    FUN_1456b2388(*(undefined8 *)*param_3);
  }
  param_2[5] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
               TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,1>
               ::vftable;
  *param_2 = *param_3;
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return 0;
}



// FUNCTION 1467aa764 FUN_1467aa764 body=3 status=ok
// SIG undefined FUN_1467aa764(void)

undefined1 FUN_1467aa764(void)

{
  return 1;
}



// FUNCTION 1467aa768 FUN_1467aa768 body=3 status=ok
// SIG undefined FUN_1467aa768(void)

undefined1 FUN_1467aa768(void)

{
  return 1;
}



// FUNCTION 1467aa76c FUN_1467aa76c body=6 status=ok
// SIG undefined FUN_1467aa76c(void)

undefined8 FUN_1467aa76c(void)

{
  return 0x10;
}



// FUNCTION 1467aa772 FUN_1467aa772 body=114 status=ok
// SIG undefined FUN_1467aa772(void)

void FUN_1467aa772(undefined8 *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x340);
  if ((uVar1 & 1) == 0) {
    *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x340
             ) = uVar1 | 1;
    __tlregdtor(&LAB_142734034);
  }
  *(undefined8 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x338) =
       *param_1;
  return;
}



// FUNCTION 1467aa7e4 FUN_1467aa7e4 body=178 status=ok
// SIG undefined FUN_1467aa7e4(void)

void FUN_1467aa7e4(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  longlong lVar4;
  void *_Memory;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    *(longlong *)(lVar2 + 0x40) = lVar2 + 0x10000;
    puVar3 = (uint *)*param_1;
    LOCK();
    uVar1 = *puVar3;
    *puVar3 = *puVar3 + puVar3[0x12] + 1;
    UNLOCK();
    if ((uVar1 ^ puVar3[0x12]) == 0xffffffff) {
      lVar2 = *param_1;
      uVar1 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar1 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar1 | 1;
        __tlregdtor(&LAB_142733bf0);
      }
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      _Memory = *(void **)(lVar4 + 0x310);
      *(longlong *)(lVar4 + 0x310) = lVar2;
      if (_Memory != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001467aa865. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        _aligned_free(_Memory);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1467aa896 FUN_1467aa896 body=38 status=ok
// SIG undefined FUN_1467aa896(void)

undefined8 FUN_1467aa896(undefined8 param_1,int param_2)

{
  FUN_144afd1ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467aa8bc FUN_1467aa8bc body=132 status=ok
// SIG undefined FUN_1467aa8bc(void)

void FUN_1467aa8bc(longlong param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  cVar3 = FUN_144a53f06();
  if (cVar3 != '\0') {
    iVar4 = *(int *)(param_1 + 0x20);
    iVar1 = DAT_14c7585a8;
    if (iVar4 <= DAT_14c7585a8) {
      iVar1 = iVar4;
    }
    iVar2 = iVar4 - iVar1;
    if (iVar4 - iVar1 < 2) {
      iVar2 = 1;
    }
    *(int *)(param_1 + 0x24) = iVar2;
    iVar4 = iVar4 - iVar2;
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    *(int *)(param_1 + 0x28) = iVar4;
    FUN_140f14872(&DAT_14c82ba00,CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1));
    FUN_145a06e4a(&DAT_14c82ba00,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x24),1,
                  param_2,2,0,0);
  }
  return;
}


