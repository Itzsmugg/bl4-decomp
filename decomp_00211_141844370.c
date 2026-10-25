// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141844370 FUN_141844370 body=118 status=ok
// SIG undefined FUN_141844370(void)

undefined8 FUN_141844370(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb89790 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb89790,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418443e8 FUN_1418443e8 body=84 status=ok
// SIG undefined FUN_1418443e8(void)

longlong * FUN_1418443e8(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14184443c FUN_14184443c body=84 status=ok
// SIG undefined FUN_14184443c(void)

longlong * FUN_14184443c(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 141844490 FUN_141844490 body=48 status=ok
// SIG undefined FUN_141844490(void)

void FUN_141844490(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x120);
  FUN_140f23ff6(param_2);
  *(undefined8 *)((longlong)param_2 + 0x110) = 0;
  *(undefined8 *)((longlong)param_2 + 0x118) = 0;
  return;
}



// FUNCTION 1418444c0 FUN_1418444c0 body=58 status=ok
// SIG undefined FUN_1418444c0(void)

void FUN_1418444c0(undefined8 param_1,longlong param_2)

{
  FUN_1409deebc(*(undefined8 *)(param_2 + 0x110),*(undefined4 *)(param_2 + 0x118));
  if (*(longlong *)(param_2 + 0x110) != 0) {
    FUN_1400020a8();
  }
  FUN_1409def00(param_2);
  return;
}



// FUNCTION 1418444fa FUN_1418444fa body=86 status=ok
// SIG undefined FUN_1418444fa(void)

longlong * FUN_1418444fa(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 141844550 FUN_141844550 body=109 status=ok
// SIG undefined FUN_141844550(void)

void FUN_141844550(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14affe3c0;
  plVar3 = (longlong *)param_1[5];
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
  *param_1 = &PTR_FUN_14afff080;
  FUN_1403d9eef(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1418445c3 FUN_1418445c3 body=49 status=ok
// SIG undefined FUN_1418445c3(void)

longlong FUN_1418445c3(void)

{
  if (DAT_14cb55738 == 0) {
    FUN_14086a14e(&DAT_14cb55738,&PTR_FUN_14b004678);
  }
  return DAT_14cb55738;
}



// FUNCTION 1418445f4 FUN_1418445f4 body=101 status=ok
// SIG undefined FUN_1418445f4(void)

undefined8 * FUN_1418445f4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b00be10;
  FUN_14487da0a(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_14487da48(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14184465a FUN_14184465a body=74 status=ok
// SIG undefined FUN_14184465a(void)

void FUN_14184465a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
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
                    /* WARNING: Could not recover jumptable at 0x000141844693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1418446da FUN_1418446da body=40 status=ok
// SIG undefined FUN_1418446da(void)

undefined8 FUN_1418446da(undefined8 param_1,int param_2)

{
  FUN_14051f4c4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141844746 FUN_141844746 body=268 status=ok
// SIG undefined FUN_141844746(void)

undefined8 FUN_141844746(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  
  if (param_4 != 0) {
    piVar6 = (int *)(param_3 + 0xc0);
    puVar5 = (undefined8 *)(param_2 + 0xb8);
    do {
      *(int *)(puVar5 + -0x15) = piVar6[-0x2c];
      iVar1 = piVar6[-0x2f];
      iVar2 = piVar6[-0x2e];
      iVar3 = piVar6[-0x2d];
      *(int *)(puVar5 + -0x17) = piVar6[-0x30];
      *(int *)((longlong)puVar5 + -0xb4) = iVar1;
      *(int *)(puVar5 + -0x16) = iVar2;
      *(int *)((longlong)puVar5 + -0xac) = iVar3;
      *(int *)(puVar5 + -6) = piVar6[-0xe];
      *(short *)((longlong)puVar5 + -0x2c) = (short)piVar6[-0xd];
      FUN_14093c00e(puVar5 + -5,piVar6 + -0xc);
      puVar5[-3] = *(undefined8 *)(piVar6 + -8);
      iVar1 = piVar6[-5];
      iVar2 = piVar6[-4];
      iVar3 = piVar6[-3];
      *(int *)(puVar5 + -2) = piVar6[-6];
      *(int *)((longlong)puVar5 + -0xc) = iVar1;
      *(int *)(puVar5 + -1) = iVar2;
      *(int *)((longlong)puVar5 + -4) = iVar3;
      if ((int *)(puVar5 + -0x17) != piVar6 + -0x30) {
        iVar1 = *piVar6;
        _Src = *(void **)(piVar6 + -2);
        *(int *)(puVar5 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)puVar5 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar5,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
          }
        }
      }
      *(int *)(puVar5 + 4) = piVar6[6];
      uVar4 = *(undefined8 *)(piVar6 + 4);
      puVar5[2] = *(undefined8 *)(piVar6 + 2);
      puVar5[3] = uVar4;
      piVar6 = piVar6 + 0x38;
      puVar5 = puVar5 + 0x1c;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141844924 FUN_141844924 body=118 status=ok
// SIG undefined FUN_141844924(void)

undefined8 FUN_141844924(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb723f8 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb723f8,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14184499c FUN_14184499c body=118 status=ok
// SIG undefined FUN_14184499c(void)

undefined8 FUN_14184499c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb72578 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb72578,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141844a14 FUN_141844a14 body=117 status=ok
// SIG undefined FUN_141844a14(void)

undefined8 * FUN_141844a14(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 141844a89 FUN_141844a89 body=49 status=ok
// SIG undefined FUN_141844a89(void)

longlong FUN_141844a89(void)

{
  if (DAT_14cb56058 == 0) {
    FUN_14073dd9a(&DAT_14cb56058,&PTR_LAB_14b01c730);
  }
  return DAT_14cb56058;
}



// FUNCTION 141844aba FUN_141844aba body=46 status=ok
// SIG undefined FUN_141844aba(void)

void FUN_141844aba(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14060481e(puVar1,param_1);
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_14b01c770;
  return;
}



// FUNCTION 141844ae8 FUN_141844ae8 body=39 status=ok
// SIG undefined FUN_141844ae8(void)

bool FUN_141844ae8(longlong param_1)

{
  FUN_1405f85e0(param_1 + 0x988);
  return (byte)(*(char *)(param_1 + 0xa89) - 3U) < 2;
}



// FUNCTION 141844b10 FUN_141844b10 body=40 status=ok
// SIG undefined FUN_141844b10(void)

undefined8 FUN_141844b10(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141844b38 FUN_141844b38 body=521 status=ok
// SIG undefined FUN_141844b38(void)

void FUN_141844b38(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  memset(param_2 + 1,0,0x178);
  *param_2 = &PTR_FUN_14ab51200;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x44610000;
  *(undefined2 *)((longlong)param_2 + 0x24) = 0x100;
  *(undefined1 *)((longlong)param_2 + 0x26) = 1;
  local_48 = (longlong *)FUN_14001cc68(0x98,0x10);
  local_48[1] = (longlong)&DAT_100000001;
  *local_48 = (longlong)&PTR_FUN_14a1b6cc0;
  local_50 = local_48 + 2;
  local_48[2] = (longlong)&PTR_FUN_14a18e458;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  local_48[8] = 0;
  local_48[9] = 0;
  local_48[10] = 0;
  local_48[0xb] = 0;
  local_48[0xc] = 0;
  local_48[0xd] = 0;
  local_48[0xe] = 0;
  local_48[0xf] = 0;
  local_48[0x10] = 0;
  local_48[0x11] = 0;
  local_48[0x12] = 0;
  FUN_1404e24cc(&local_50);
  FUN_1404e256a(param_2 + 5,&local_50);
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xfc;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0x466a6000;
  *(undefined4 *)((longlong)param_2 + 0x4b) = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *param_2 = &PTR_FUN_14b01fe10;
  param_2[0x12] = &PTR_FUN_14b023b08;
  param_2[0x13] = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  param_2[0x15] = 0;
  *(undefined2 *)(param_2 + 0x16) = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  *(undefined4 *)(param_2 + 0x1b) = 0x3b9cbb9e;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  *(undefined4 *)(param_2 + 0x1f) = 0x42c80000;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  *(undefined4 *)(param_2 + 0x26) = 0xf00000d0;
  param_2[0x27] = 0;
  *(undefined4 *)(param_2 + 0x28) = 0x3f800000;
  *(undefined2 *)(param_2 + 0x29) = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  *(undefined1 *)(param_2 + 0x2c) = 1;
  *(undefined8 *)((longlong)param_2 + 0x164) = 0;
  *(undefined1 *)((longlong)param_2 + 0x16c) = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141844d68 FUN_141844d68 body=40 status=ok
// SIG undefined FUN_141844d68(void)

undefined8 FUN_141844d68(undefined8 param_1,int param_2)

{
  FUN_140485912();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141844d90 FUN_141844d90 body=88 status=ok
// SIG undefined FUN_141844d90(void)

longlong * FUN_141844d90(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 141844de8 FUN_141844de8 body=71 status=ok
// SIG undefined FUN_141844de8(void)

undefined8 * FUN_141844de8(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 141844e30 FUN_141844e30 body=40 status=ok
// SIG undefined FUN_141844e30(void)

undefined8 FUN_141844e30(undefined8 param_1,int param_2)

{
  FUN_14063a91c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141844e58 FUN_141844e58 body=205 status=ok
// SIG undefined FUN_141844e58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141844e58(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b023870;
  FUN_14063ab1b(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_14063ab1b(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141844f26 FUN_141844f26 body=40 status=ok
// SIG undefined FUN_141844f26(void)

undefined8 FUN_141844f26(undefined8 param_1,int param_2)

{
  FUN_14063b166();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141844f4e FUN_141844f4e body=187 status=ok
// SIG undefined FUN_141844f4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141844f4e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b023b20;
  param_1[3] = &PTR_FUN_14b023b40;
  if ((longlong *)param_1[0x15] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x15] + 0x10))();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141845010 FUN_141845010 body=71 status=ok
// SIG undefined FUN_141845010(void)

undefined8 * FUN_141845010(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 141845057 FUN_141845057 body=42 status=ok
// SIG undefined FUN_141845057(void)

void FUN_141845057(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1408d5686(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b02dd60;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 141845082 FUN_141845082 body=307 status=ok
// SIG undefined FUN_141845082(void)

longlong * FUN_141845082(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if ((*param_1 != *param_2) || ((int)param_1[1] != (int)param_2[1])) {
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    param_1[2] = 0;
  }
  if (param_1 != param_2) {
    plVar3 = param_2 + 3;
    if ((longlong *)param_2[9] != (longlong *)0x0) {
      plVar3 = (longlong *)param_2[9];
    }
    FUN_1400709d4(param_1 + 3,plVar3,(int)param_2[10],*(undefined4 *)((longlong)param_1 + 0x54));
  }
  lVar2 = param_2[0xb];
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[0xb];
    }
  }
  bVar1 = DAT_14c950c29;
  param_1[0xb] = lVar2;
  lVar2 = param_2[0xc];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[0xc];
    }
  }
  param_1[0xc] = lVar2;
  plVar3 = param_2 + 0xd;
  plVar4 = param_1 + 0xd;
  for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
    *plVar4 = *plVar3;
    plVar3 = plVar3 + 1;
    plVar4 = plVar4 + 1;
  }
  *(int *)(param_1 + 0x18) = (int)param_2[0x18];
  FUN_1403e062e(param_1 + 0x19,param_2 + 0x19);
  (**(code **)(param_1[0x1b] + 0x20))(param_1 + 0x1b,0);
  param_1[0x1c] = param_2[0x1c];
  FUN_1406022fe(param_1 + 0x1d,param_2 + 0x1d);
  return param_1;
}



// FUNCTION 1418451b6 FUN_1418451b6 body=154 status=ok
// SIG undefined FUN_1418451b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1418451b6(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b02dcc0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x00014184523b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 141845250 FUN_141845250 body=71 status=ok
// SIG undefined FUN_141845250(void)

void FUN_141845250(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b02dcf0;
  FUN_140c874be(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141845298 FUN_141845298 body=274 status=ok
// SIG undefined FUN_141845298(void)

undefined8 * FUN_141845298(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b02dd20;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49) = 0;
  *(undefined8 *)((longlong)param_1 + 0x51) = 0;
  FUN_1405c5fa2();
  param_1[0xd] = &DAT_14cb769e8;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = &PTR_FUN_14b0394b0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xf00000d0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf00000d0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xf00000d0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *param_1 = &PTR_FUN_14b02d230;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  return param_1;
}



// FUNCTION 1418453aa FUN_1418453aa body=45 status=ok
// SIG undefined FUN_1418453aa(void)

undefined8 FUN_1418453aa(undefined8 param_1,int param_2)

{
  FUN_140bb741a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 1418453d8 FUN_1418453d8 body=216 status=ok
// SIG undefined FUN_1418453d8(void)

void FUN_1418453d8(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 5);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x20,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1418454b0 FUN_1418454b0 body=216 status=ok
// SIG undefined FUN_1418454b0(void)

void FUN_1418454b0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 5);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x20,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 141845588 FUN_141845588 body=216 status=ok
// SIG undefined FUN_141845588(void)

void FUN_141845588(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 5);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x20,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 141845660 FUN_141845660 body=234 status=ok
// SIG undefined FUN_141845660(void)

void FUN_141845660(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  memset(param_2,0,0x128);
  *(undefined4 *)((longlong)param_2 + 0x10) = 0x3002;
  *(undefined4 *)((longlong)param_2 + 0x5c) = 2;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)((longlong)param_2 + 0x78) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0)
  ;
  *(undefined8 *)((longlong)param_2 + 0x80) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0x88) = DAT_14c8464f0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)((longlong)param_2 + 0x90) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0)
  ;
  *(undefined8 *)((longlong)param_2 + 0x98) = uVar1;
  *(undefined4 *)((longlong)param_2 + 0xb0) = 0x3006;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_2 + 200) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd0) = 0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)((longlong)param_2 + 0xd8) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 0xdc) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0xe0) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xe4) = uVar4;
  *(undefined8 *)((longlong)param_2 + 0xe8) = DAT_14c8464f0;
  *(undefined4 *)((longlong)param_2 + 0xf8) = 0;
  FUN_1405c5fa2();
  *(undefined **)((longlong)param_2 + 0x108) = &DAT_14cb769e8;
  *(undefined8 *)((longlong)param_2 + 0x110) = 0;
  *(undefined8 *)((longlong)param_2 + 0x118) = 0;
  *(undefined ***)((longlong)param_2 + 0x100) = &PTR_FUN_14b0394b0;
  *(undefined4 *)((longlong)param_2 + 0x120) = 0x1000000;
  return;
}



// FUNCTION 14184574a FUN_14184574a body=129 status=ok
// SIG undefined FUN_14184574a(void)

void FUN_14184574a(undefined8 param_1,longlong param_2)

{
  *(undefined2 **)(param_2 + 0x100) = &DAT_14a171d50;
  *(undefined4 *)(param_2 + 0x118) = 0;
  if (*(int *)(param_2 + 0x11c) != 0) {
    FUN_140115c12(param_2 + 0x110,0);
  }
  *(undefined8 *)(param_2 + 0x108) = 0;
  if (*(longlong *)(param_2 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x50) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418457cc FUN_1418457cc body=63 status=ok
// SIG undefined FUN_1418457cc(void)

undefined1 FUN_1418457cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14095ec78(param_2,param_3);
    param_3 = param_3 + 0x128;
    param_2 = param_2 + 0x128;
  }
  return 1;
}



// FUNCTION 14184580c FUN_14184580c body=267 status=ok
// SIG undefined FUN_14184580c(void)

undefined4 * FUN_14184580c(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0x3002;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0x200000000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0x1e) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x22) = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0x24) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0x26) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = DAT_14c8464f0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  param_1[0x2c] = 0x3006;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  param_1[0x36] = (undefined4)DAT_14c8464e0;
  param_1[0x37] = uVar2;
  param_1[0x38] = uVar3;
  param_1[0x39] = uVar4;
  *(undefined8 *)(param_1 + 0x3a) = DAT_14c8464f0;
  param_1[0x3c] = 0;
  *(undefined2 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  FUN_1405c5fa2();
  *(undefined **)(param_1 + 0x42) = &DAT_14cb769e8;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_14b0394b0;
  param_1[0x48] = 0x1000000;
  return param_1;
}



// FUNCTION 141845918 FUN_141845918 body=193 status=ok
// SIG undefined FUN_141845918(void)

void FUN_141845918(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  memset(param_2,0,0xf8);
  *(undefined4 *)((longlong)param_2 + 8) = 0x3002;
  *(undefined4 *)((longlong)param_2 + 0x54) = 2;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)((longlong)param_2 + 0x78) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0)
  ;
  *(undefined8 *)((longlong)param_2 + 0x80) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0xa0) = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)((longlong)param_2 + 0x90) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0)
  ;
  *(undefined8 *)((longlong)param_2 + 0x98) = uVar1;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)((longlong)param_2 + 0xa8) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 0xac) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0xb0) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xb4) = uVar4;
  *(undefined8 *)((longlong)param_2 + 0xb8) = DAT_14c8464f0;
  *(undefined8 *)((longlong)param_2 + 200) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd0) = 0;
  FUN_1405c5fa2();
  *(undefined **)((longlong)param_2 + 0xe0) = &DAT_14cb769e8;
  *(undefined8 *)((longlong)param_2 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf0) = 0;
  *(undefined ***)((longlong)param_2 + 0xd8) = &PTR_FUN_14b0394b0;
  return;
}



// FUNCTION 1418459da FUN_1418459da body=129 status=ok
// SIG undefined FUN_1418459da(void)

void FUN_1418459da(undefined8 param_1,longlong param_2)

{
  *(undefined2 **)(param_2 + 0xd8) = &DAT_14a171d50;
  *(undefined4 *)(param_2 + 0xf0) = 0;
  if (*(int *)(param_2 + 0xf4) != 0) {
    FUN_140115c12(param_2 + 0xe8,0);
  }
  *(undefined8 *)(param_2 + 0xe0) = 0;
  if (*(longlong *)(param_2 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x48) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141845a5c FUN_141845a5c body=394 status=ok
// SIG undefined FUN_141845a5c(void)

undefined8 FUN_141845a5c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  
  if (param_4 != 0) {
    lVar11 = 0;
    do {
      if ((*(longlong *)(param_2 + lVar11) != *(longlong *)(param_3 + lVar11)) ||
         (*(int *)(param_2 + 8 + lVar11) != *(int *)(param_3 + 8 + lVar11))) {
        *(longlong *)(param_2 + lVar11) = *(longlong *)(param_3 + lVar11);
        *(undefined4 *)(param_2 + 8 + lVar11) = *(undefined4 *)(param_3 + 8 + lVar11);
        *(undefined8 *)(param_2 + 0x10 + lVar11) = 0;
      }
      lVar1 = param_3 + lVar11;
      lVar2 = param_2 + lVar11;
      if (lVar2 != lVar1) {
        lVar6 = param_3 + lVar11;
        lVar3 = param_2 + 0x18 + lVar11;
        lVar7 = *(longlong *)(lVar6 + 0x48);
        if (*(longlong *)(lVar6 + 0x48) == 0) {
          lVar7 = lVar6 + 0x18;
        }
        FUN_1400709d4(lVar3,lVar7,*(undefined4 *)(lVar6 + 0x50),*(undefined4 *)(lVar3 + 0x3c));
      }
      lVar6 = *(longlong *)(param_3 + 0x58 + lVar11);
      if (DAT_14c950c29 == 1) {
        if (lVar6 == 0) {
          lVar6 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar6 = *(longlong *)(param_3 + 0x58 + lVar11);
        }
      }
      bVar5 = DAT_14c950c29;
      *(longlong *)(param_2 + 0x58 + lVar11) = lVar6;
      lVar6 = *(longlong *)(param_3 + 0x60 + lVar11);
      if ((bVar5 & 1) != 0) {
        if (lVar6 == 0) {
          lVar6 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar6 = *(longlong *)(param_3 + 0x60 + lVar11);
        }
      }
      lVar3 = param_2 + lVar11;
      *(longlong *)(lVar3 + 0x60) = lVar6;
      puVar4 = (undefined8 *)(param_3 + 0x68 + lVar11);
      puVar8 = puVar4;
      puVar10 = (undefined8 *)(lVar3 + 0x68);
      for (lVar6 = 0xb; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      *(undefined4 *)(lVar3 + 0xc0) = *(undefined4 *)(puVar4 + 0xb);
      FUN_1403e062e(lVar2 + 200,lVar1 + 200);
      plVar9 = (longlong *)(param_2 + lVar11 + 0xd8);
      (**(code **)(*plVar9 + 0x20))(plVar9,0);
      *(undefined8 *)(param_2 + lVar11 + 0xe0) = puVar4[0xf];
      FUN_1406022fe(lVar2 + 0xe8,lVar1 + 0xe8);
      lVar11 = lVar11 + 0xf8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141845be6 FUN_141845be6 body=129 status=ok
// SIG undefined FUN_141845be6(void)

void FUN_141845be6(longlong param_1)

{
  *(undefined2 **)(param_1 + 0xd8) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(int *)(param_1 + 0xf4) != 0) {
    FUN_140115c12(param_1 + 0xe8,0);
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141845c68 FUN_141845c68 body=100 status=ok
// SIG undefined FUN_141845c68(void)

void FUN_141845c68(longlong param_1)

{
  *(undefined2 **)(param_1 + 0x68) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_140115c12(param_1 + 0x78,0);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141845ccc FUN_141845ccc body=57 status=ok
// SIG undefined FUN_141845ccc(void)

void FUN_141845ccc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56700 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56700 = FUN_140002ddd(FUN_1464b8408,uVar1,L"DamageModifierDamageTypeDef");
  }
  return;
}



// FUNCTION 141845d06 FUN_141845d06 body=57 status=ok
// SIG undefined FUN_141845d06(void)

void FUN_141845d06(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56778 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56778 = FUN_140002ddd(FUN_1464b8592,uVar1,L"DamageModifierHitRegionDef");
  }
  return;
}



// FUNCTION 141845d40 FUN_141845d40 body=57 status=ok
// SIG undefined FUN_141845d40(void)

void FUN_141845d40(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56808 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56808 = FUN_140002ddd(FUN_1464b8710,uVar1,L"DamageModifierValueDef");
  }
  return;
}



// FUNCTION 141845d7a FUN_141845d7a body=221 status=ok
// SIG undefined FUN_141845d7a(void)

void FUN_141845d7a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x108);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b02dd20;
  *(undefined4 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x29) = 0;
  *(undefined8 *)((longlong)param_2 + 0x31) = 0;
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x49) = 0;
  *(undefined8 *)((longlong)param_2 + 0x51) = 0;
  FUN_1405c5fa2();
  param_2[0xd] = &DAT_14cb769e8;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = &PTR_FUN_14b0394b0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 0xf00000d0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf00000d0;
  param_2[0x15] = 0;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  *(undefined4 *)(param_2 + 0x1f) = 0xf00000d0;
  param_2[0x20] = 0;
  *(undefined4 *)(param_2 + 0x21) = 0x3f800000;
  *(undefined1 *)(param_2 + 0x22) = 0;
  return;
}



// FUNCTION 141845e58 FUN_141845e58 body=215 status=ok
// SIG undefined FUN_141845e58(void)

undefined8 * FUN_141845e58(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b02dd20;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49) = 0;
  *(undefined8 *)((longlong)param_1 + 0x51) = 0;
  FUN_1405c5fa2();
  param_1[0xd] = &DAT_14cb769e8;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = &PTR_FUN_14b0394b0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xf00000d0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf00000d0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xf00000d0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x22) = 0;
  return param_1;
}



// FUNCTION 141845f30 FUN_141845f30 body=73 status=ok
// SIG undefined FUN_141845f30(void)

void FUN_141845f30(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  FUN_1405c5fa2();
  param_2[2] = &DAT_14cb769e8;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = &PTR_FUN_14b0394b0;
  return;
}



// FUNCTION 141845f7a FUN_141845f7a body=78 status=ok
// SIG undefined FUN_141845f7a(void)

void FUN_141845f7a(undefined8 param_1,longlong param_2)

{
  *(undefined2 **)(param_2 + 8) = &DAT_14a171d50;
  *(undefined4 *)(param_2 + 0x20) = 0;
  if (*(int *)(param_2 + 0x24) != 0) {
    FUN_140115c12(param_2 + 0x18,0);
  }
  *(undefined8 *)(param_2 + 0x10) = 0;
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141845fc8 FUN_141845fc8 body=519 status=ok
// SIG undefined FUN_141845fc8(void)

void FUN_141845fc8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x2e8);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b039520;
  *(undefined4 *)(param_2 + 4) = 0xf00000d0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  *(undefined1 *)(param_2 + 0xb) = 1;
  param_2[0xc] = 0;
  *(undefined4 *)(param_2 + 0xd) = 0xf00000d0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 1;
  *(undefined1 *)(param_2 + 0x15) = 0;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc9) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe9) = 0;
  FUN_1405c5fa2();
  param_2[0x20] = &DAT_14cb769e8;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x1f] = &PTR_FUN_14b0394b0;
  *(undefined1 *)(param_2 + 0x23) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  *(undefined4 *)(param_2 + 0x2b) = 0xf00000d0;
  param_2[0x2c] = 0;
  *(undefined4 *)(param_2 + 0x2d) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x2e) = 0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined4 *)(param_2 + 0x35) = 0xf00000d0;
  param_2[0x36] = 0;
  *(undefined4 *)(param_2 + 0x37) = 0x3f800000;
  *(undefined2 *)(param_2 + 0x38) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c4) = 0;
  *(undefined1 *)(param_2 + 0x39) = 0;
  *(undefined4 *)(param_2 + 0x3a) = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  *(undefined4 *)(param_2 + 0x41) = 0xf00000d0;
  param_2[0x42] = 0;
  *(undefined4 *)(param_2 + 0x43) = 0x3f800000;
  *(undefined2 *)(param_2 + 0x44) = 1;
  *(undefined1 *)((longlong)param_2 + 0x222) = 1;
  *param_2 = &PTR_FUN_14b0376a0;
  param_2[0x45] = 0;
  *(undefined4 *)(param_2 + 0x46) = 0x3002;
  param_2[0x51] = 0;
  param_2[0x52] = 0x200000000;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  *(undefined8 *)((longlong)param_2 + 0x246) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24e) = 0;
  *(undefined1 *)(param_2 + 0x53) = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  param_2[0x55] = 0;
  param_2[0x56] = 0;
  param_2[0x57] = 0;
  param_2[0x58] = 0;
  param_2[0x59] = 0;
  param_2[0x5a] = 0;
  *(undefined4 *)(param_2 + 0x5b) = 0xf00000d0;
  param_2[0x5c] = 0;
  *(undefined4 *)(param_2 + 0x5d) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x5e) = 0;
  return;
}



// FUNCTION 1418461d0 FUN_1418461d0 body=410 status=ok
// SIG undefined FUN_1418461d0(void)

undefined8 * FUN_1418461d0(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b039520;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0xf00000d0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xf00000d0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  FUN_1405c5fa2();
  param_1[0x20] = &DAT_14cb769e8;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = &PTR_FUN_14b0394b0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0xf00000d0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0xf00000d0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0xf00000d0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x44) = 1;
  *(undefined1 *)((longlong)param_1 + 0x222) = 1;
  return param_1;
}



// FUNCTION 14184636a FUN_14184636a body=395 status=ok
// SIG undefined FUN_14184636a(void)

void FUN_14184636a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x218);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b039520;
  *(undefined4 *)(param_2 + 4) = 0xf00000d0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  *(undefined1 *)(param_2 + 0xb) = 1;
  param_2[0xc] = 0;
  *(undefined4 *)(param_2 + 0xd) = 0xf00000d0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 1;
  *(undefined1 *)(param_2 + 0x15) = 0;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc9) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe9) = 0;
  FUN_1405c5fa2();
  param_2[0x20] = &DAT_14cb769e8;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x1f] = &PTR_FUN_14b0394b0;
  *(undefined1 *)(param_2 + 0x23) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  *(undefined4 *)(param_2 + 0x2b) = 0xf00000d0;
  param_2[0x2c] = 0;
  *(undefined4 *)(param_2 + 0x2d) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x2e) = 0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined4 *)(param_2 + 0x35) = 0xf00000d0;
  param_2[0x36] = 0;
  *(undefined4 *)(param_2 + 0x37) = 0x3f800000;
  *(undefined2 *)(param_2 + 0x38) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c4) = 0;
  *(undefined1 *)(param_2 + 0x39) = 0;
  *(undefined4 *)(param_2 + 0x3a) = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  *(undefined4 *)(param_2 + 0x41) = 0xf00000d0;
  param_2[0x42] = 0;
  *(undefined4 *)(param_2 + 0x43) = 0x3f800000;
  *(undefined2 *)(param_2 + 0x44) = 1;
  *(undefined1 *)((longlong)param_2 + 0x222) = 1;
  return;
}



// FUNCTION 1418464f6 FUN_1418464f6 body=694 status=ok
// SIG undefined FUN_1418464f6(void)

void FUN_1418464f6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x408);
  *param_2 = &PTR_FUN_14b039520;
  *(undefined4 *)(param_2 + 4) = 0xf00000d0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  *(undefined1 *)(param_2 + 0xb) = 1;
  param_2[0xc] = 0;
  *(undefined4 *)(param_2 + 0xd) = 0xf00000d0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined1 *)(param_2 + 0x14) = 1;
  *(undefined1 *)(param_2 + 0x15) = 0;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc9) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe9) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xdc) = 0;
  FUN_1405c5fa2();
  param_2[0x20] = &DAT_14cb769e8;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x1f] = &PTR_FUN_14b0394b0;
  *(undefined1 *)(param_2 + 0x23) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  *(undefined4 *)(param_2 + 0x2b) = 0xf00000d0;
  param_2[0x2c] = 0;
  *(undefined4 *)(param_2 + 0x2d) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x2e) = 0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined4 *)(param_2 + 0x35) = 0xf00000d0;
  param_2[0x36] = 0;
  *(undefined4 *)(param_2 + 0x37) = 0x3f800000;
  *(undefined2 *)(param_2 + 0x38) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c4) = 0;
  *(undefined1 *)(param_2 + 0x39) = 0;
  *(undefined4 *)(param_2 + 0x3a) = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  *(undefined4 *)(param_2 + 0x41) = 0xf00000d0;
  param_2[0x42] = 0;
  *(undefined4 *)(param_2 + 0x43) = 0x3f800000;
  *(undefined2 *)(param_2 + 0x44) = 1;
  *(undefined1 *)((longlong)param_2 + 0x222) = 1;
  *param_2 = &PTR_FUN_14b038450;
  *(undefined1 *)(param_2 + 0x45) = 0;
  *(undefined4 *)(param_2 + 0x46) = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  *(undefined4 *)(param_2 + 0x4d) = 0xf00000d0;
  param_2[0x4e] = 0;
  *(undefined4 *)(param_2 + 0x4f) = 0x3f800000;
  param_2[0x50] = 0;
  param_2[0x51] = 0;
  *(undefined2 *)(param_2 + 0x52) = 1;
  *(undefined1 *)((longlong)param_2 + 0x292) = 0;
  *(undefined4 *)(param_2 + 0x59) = 0;
  param_2[0x5e] = 0;
  param_2[0x5f] = 0;
  param_2[0x5c] = 0;
  param_2[0x5d] = 0;
  param_2[0x5a] = 0;
  param_2[0x5b] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2b1) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2b9) = 0;
  param_2[0x55] = 0;
  param_2[0x56] = 0;
  param_2[0x53] = 0;
  param_2[0x54] = 0;
  *(undefined4 *)(param_2 + 0x60) = 0xf00000d0;
  param_2[0x61] = 0;
  *(undefined4 *)(param_2 + 0x62) = 0x3f800000;
  *(undefined4 *)(param_2 + 99) = 0;
  param_2[0x68] = 0;
  param_2[0x69] = 0;
  param_2[0x66] = 0;
  param_2[0x67] = 0;
  param_2[100] = 0;
  param_2[0x65] = 0;
  *(undefined4 *)(param_2 + 0x6a) = 0xf00000d0;
  param_2[0x6b] = 0;
  *(undefined4 *)(param_2 + 0x6c) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x6e) = 0;
  *(undefined4 *)((longlong)param_2 + 0x36b) = 0;
  *(undefined4 *)(param_2 + 0x6d) = 0;
  param_2[0x73] = 0;
  param_2[0x74] = 0;
  param_2[0x71] = 0;
  param_2[0x72] = 0;
  param_2[0x6f] = 0;
  param_2[0x70] = 0;
  *(undefined4 *)(param_2 + 0x75) = 0xf00000d0;
  param_2[0x76] = 0;
  *(undefined4 *)(param_2 + 0x77) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x78) = 0;
  param_2[0x7d] = 0;
  param_2[0x7e] = 0;
  param_2[0x7b] = 0;
  param_2[0x7c] = 0;
  param_2[0x79] = 0;
  param_2[0x7a] = 0;
  *(undefined4 *)(param_2 + 0x7f) = 0xf00000d0;
  param_2[0x80] = 0;
  *(undefined4 *)(param_2 + 0x81) = 0x3f800000;
  return;
}



// FUNCTION 1418467ac FUN_1418467ac body=95 status=ok
// SIG undefined FUN_1418467ac(void)

undefined8 * FUN_1418467ac(undefined8 *param_1,int param_2)

{
  *param_1 = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_140115c12(param_1 + 2,0);
  }
  param_1[1] = 0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14184680b FUN_14184680b body=49 status=ok
// SIG undefined FUN_14184680b(void)

longlong FUN_14184680b(void)

{
  if (DAT_14cb569f0 == 0) {
    FUN_14086a14e(&DAT_14cb569f0,&PTR_FUN_14b03a890);
  }
  return DAT_14cb569f0;
}



// FUNCTION 14184683c FUN_14184683c body=303 status=ok
// SIG undefined FUN_14184683c(void)

undefined4 * FUN_14184683c(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = *param_2;
  if ((*(longlong *)(param_1 + 2) != *(longlong *)(param_2 + 2)) || (param_1[4] != param_2[4])) {
    *(longlong *)(param_1 + 2) = *(longlong *)(param_2 + 2);
    param_1[4] = param_2[4];
    *(undefined8 *)(param_1 + 6) = 0;
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  FUN_1403e062e(param_1 + 10,param_2 + 10);
  if ((*(longlong *)(param_1 + 0xe) != *(longlong *)(param_2 + 0xe)) ||
     (param_1[0x10] != param_2[0x10])) {
    *(longlong *)(param_1 + 0xe) = *(longlong *)(param_2 + 0xe);
    param_1[0x10] = param_2[0x10];
    *(undefined8 *)(param_1 + 0x12) = 0;
  }
  if (param_1 != param_2) {
    puVar2 = param_2 + 0x14;
    if (*(undefined4 **)(param_2 + 0x20) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_2 + 0x20);
    }
    FUN_1400709d4(param_1 + 0x14,puVar2,param_2[0x22],param_1[0x23]);
  }
  puVar3 = (undefined8 *)(param_2 + 0x24);
  puVar4 = (undefined8 *)(param_1 + 0x24);
  for (lVar1 = 0xb; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_1 + 0x3b) = *(undefined1 *)(param_2 + 0x3b);
  param_1[0x3a] = param_2[0x3a];
  (**(code **)(*(longlong *)(param_1 + 0x3c) + 0x20))(param_1 + 0x3c,0);
  *(undefined8 *)(param_1 + 0x3e) = *(undefined8 *)(param_2 + 0x3e);
  FUN_1406022fe(param_1 + 0x40,param_2 + 0x40);
  return param_1;
}



// FUNCTION 14184696b FUN_14184696b body=49 status=ok
// SIG undefined FUN_14184696b(void)

longlong FUN_14184696b(void)

{
  if (DAT_14cb56c28 == 0) {
    FUN_14073dd9a(&DAT_14cb56c28,&PTR_LAB_14b040c80);
  }
  return DAT_14cb56c28;
}



// FUNCTION 14184699c FUN_14184699c body=283 status=ok
// SIG undefined FUN_14184699c(void)

undefined4 * FUN_14184699c(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0x3002;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0x200000000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x24) = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0x20) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0x22) = uVar1;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0x26) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x2a) = DAT_14c8464f0;
  *(undefined8 *)(param_1 + 0x30) = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0x2c) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0x2e) = uVar1;
  *(undefined8 *)(param_1 + 0x32) = 0;
  param_1[0x34] = 0x3006;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x42) = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  param_1[0x3e] = (undefined4)DAT_14c8464e0;
  param_1[0x3f] = uVar2;
  param_1[0x40] = uVar3;
  param_1[0x41] = uVar4;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  FUN_1405c5fa2();
  *(undefined **)(param_1 + 0x48) = &DAT_14cb769e8;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined ***)(param_1 + 0x46) = &PTR_FUN_14b0394b0;
  param_1[0x4e] = 0x3f800000;
  return param_1;
}



// FUNCTION 141846ab8 FUN_141846ab8 body=129 status=ok
// SIG undefined FUN_141846ab8(void)

void FUN_141846ab8(longlong param_1)

{
  *(undefined2 **)(param_1 + 0x118) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (*(int *)(param_1 + 0x134) != 0) {
    FUN_140115c12(param_1 + 0x128,0);
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141846b3a FUN_141846b3a body=1123 status=ok
// SIG undefined FUN_141846b3a(void)

void FUN_141846b3a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  int local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60 [6];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_30 = 0;
  local_28 = 0x200000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_60);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_60);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_60[0] = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_60);
    }
  }
  puVar5 = local_60;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  uStack_78 = 0;
  uStack_74 = 0;
  local_70 = 0x3003;
  local_68 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_a8 = FUN_1446ddbd2();
      local_a0 = FUN_14170fd90;
      local_b0 = 0x8000000000000000;
      local_b8 = 0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_78);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_78);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_78);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_78 = (undefined4)uVar2;
      uStack_74 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_78);
    }
  }
  local_7c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_a8 = FUN_1446ddbd2();
      local_a0 = FUN_14067a048;
      local_b0 = 0;
      local_b8 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_7c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_7c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_7c = (int)uVar2;
      uStack_78 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_7c);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = CONCAT44(uStack_74,uStack_78);
  local_90 = local_70;
  local_88 = 0;
  uVar4 = FUN_140334510(puVar5,&local_98,local_7c != 0);
  *param_3 = uVar4;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141846f9e FUN_141846f9e body=40 status=ok
// SIG undefined FUN_141846f9e(void)

undefined8 FUN_141846f9e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141846fc6 FUN_141846fc6 body=75 status=ok
// SIG undefined FUN_141846fc6(void)

undefined1 FUN_141846fc6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      lVar1 = *(longlong *)(param_3 + 0x30);
      if (*(longlong *)(param_3 + 0x30) == 0) {
        lVar1 = param_3;
      }
      FUN_1400709d4(param_2,lVar1,*(undefined4 *)(param_3 + 0x38),*(undefined4 *)(param_2 + 0x3c));
    }
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 141847012 FUN_141847012 body=19 status=ok
// SIG undefined FUN_141847012(void)

undefined1 FUN_141847012(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1409d584a(param_3);
  return 1;
}



// FUNCTION 141847025 FUN_141847025 body=49 status=ok
// SIG undefined FUN_141847025(void)

longlong FUN_141847025(void)

{
  if (DAT_14cb56c38 == 0) {
    FUN_14086a14e(&DAT_14cb56c38,&PTR_FUN_14b041758);
  }
  return DAT_14cb56c38;
}



// FUNCTION 141847056 FUN_141847056 body=49 status=ok
// SIG undefined FUN_141847056(void)

longlong FUN_141847056(void)

{
  if (DAT_14cb56c68 == 0) {
    FUN_14086a14e(&DAT_14cb56c68,&PTR_FUN_14b041d60);
  }
  return DAT_14cb56c68;
}



// FUNCTION 141847087 FUN_141847087 body=49 status=ok
// SIG undefined FUN_141847087(void)

longlong FUN_141847087(void)

{
  if (DAT_14cb56e70 == 0) {
    FUN_14086a14e(&DAT_14cb56e70,&PTR_FUN_14b043e68);
  }
  return DAT_14cb56e70;
}



// FUNCTION 1418470b8 FUN_1418470b8 body=49 status=ok
// SIG undefined FUN_1418470b8(void)

longlong FUN_1418470b8(void)

{
  if (DAT_14cb56e90 == 0) {
    FUN_14086a14e(&DAT_14cb56e90,&PTR_FUN_14b044218);
  }
  return DAT_14cb56e90;
}



// FUNCTION 1418470e9 FUN_1418470e9 body=49 status=ok
// SIG undefined FUN_1418470e9(void)

longlong FUN_1418470e9(void)

{
  if (DAT_14cb56ea8 == 0) {
    FUN_14086a14e(&DAT_14cb56ea8,&PTR_FUN_14b0443a0);
  }
  return DAT_14cb56ea8;
}



// FUNCTION 14184711a FUN_14184711a body=49 status=ok
// SIG undefined FUN_14184711a(void)

longlong FUN_14184711a(void)

{
  if (DAT_14cb57110 == 0) {
    FUN_14086a14e(&DAT_14cb57110,&PTR_FUN_14b048fd8);
  }
  return DAT_14cb57110;
}



// FUNCTION 14184714b FUN_14184714b body=49 status=ok
// SIG undefined FUN_14184714b(void)

longlong FUN_14184714b(void)

{
  if (DAT_14cb570e0 == 0) {
    FUN_14086a14e(&DAT_14cb570e0,&PTR_FUN_14b048e60);
  }
  return DAT_14cb570e0;
}



// FUNCTION 14184717c FUN_14184717c body=49 status=ok
// SIG undefined FUN_14184717c(void)

longlong FUN_14184717c(void)

{
  if (DAT_14cb57098 == 0) {
    FUN_14086a14e(&DAT_14cb57098,&PTR_FUN_14b0489f8);
  }
  return DAT_14cb57098;
}



// FUNCTION 1418471ae FUN_1418471ae body=47 status=ok
// SIG undefined FUN_1418471ae(void)

void FUN_1418471ae(undefined8 param_1,undefined8 *param_2)

{
  FUN_1405c5fa2();
  param_2[1] = &DAT_14cb769e8;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = &PTR_FUN_14b0394b0;
  return;
}



// FUNCTION 1418471de FUN_1418471de body=78 status=ok
// SIG undefined FUN_1418471de(void)

undefined8 FUN_1418471de(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    do {
      (**(code **)(*param_2 + 0x20))(param_2,0);
      param_2[1] = *(longlong *)(param_3 + -8);
      FUN_1406022fe(param_2 + 2);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 4;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14184722c FUN_14184722c body=58 status=ok
// SIG undefined FUN_14184722c(void)

void FUN_14184722c(undefined8 param_1,uint *param_2)

{
  *param_2 = *param_2 & 0xffffffe0 | 3;
  FUN_1405c5fa2();
  *(undefined **)(param_2 + 4) = &DAT_14cb769e8;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined ***)(param_2 + 2) = &PTR_FUN_14b0394b0;
  return;
}



// FUNCTION 141847266 FUN_141847266 body=78 status=ok
// SIG undefined FUN_141847266(void)

void FUN_141847266(undefined8 param_1,longlong param_2)

{
  *(undefined2 **)(param_2 + 8) = &DAT_14a171d50;
  *(undefined4 *)(param_2 + 0x20) = 0;
  if (*(int *)(param_2 + 0x24) != 0) {
    FUN_140115c12(param_2 + 0x18,0);
  }
  *(undefined8 *)(param_2 + 0x10) = 0;
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418472b4 FUN_1418472b4 body=138 status=ok
// SIG undefined FUN_1418472b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1418472b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b04c460;
  if (param_1[6] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x000141847329. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 14184733e FUN_14184733e body=118 status=ok
// SIG undefined FUN_14184733e(void)

undefined8 FUN_14184733e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb7f6e8 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb7f6e8,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418473b6 FUN_1418473b6 body=84 status=ok
// SIG undefined FUN_1418473b6(void)

longlong * FUN_1418473b6(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14184740a FUN_14184740a body=118 status=ok
// SIG undefined FUN_14184740a(void)

undefined8 FUN_14184740a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb7f708 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144815d88(DAT_14cb7f708,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141847482 FUN_141847482 body=71 status=ok
// SIG undefined FUN_141847482(void)

undefined8 * FUN_141847482(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1418474da FUN_1418474da body=71 status=ok
// SIG undefined FUN_1418474da(void)

undefined8 * FUN_1418474da(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 141847522 FUN_141847522 body=117 status=ok
// SIG undefined FUN_141847522(void)

undefined8 * FUN_141847522(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 141847598 FUN_141847598 body=118 status=ok
// SIG undefined FUN_141847598(void)

undefined8 FUN_141847598(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb7ea18 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144815d88(DAT_14cb7ea18,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141847610 FUN_141847610 body=117 status=ok
// SIG undefined FUN_141847610(void)

undefined8 * FUN_141847610(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 14184768e FUN_14184768e body=294 status=ok
// SIG undefined FUN_14184768e(void)

undefined8 FUN_14184768e(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_4 != 0) {
    do {
      if (param_2 != param_3) {
        uStack_b0 = CONCAT71(uStack_b0._1_7_,*(byte *)(param_3 + 7));
        (*(code *)(&PTR_FUN_14b04c4f0)[*(byte *)(param_3 + 7)])(&local_e8,param_3);
        local_78 = (undefined4)local_b8;
        uStack_74 = local_b8._4_4_;
        uStack_70 = (undefined4)uStack_b0;
        uStack_6c = uStack_b0._4_4_;
        local_88 = (undefined4)local_c8;
        uStack_84 = local_c8._4_4_;
        uStack_80 = (undefined4)uStack_c0;
        uStack_7c = uStack_c0._4_4_;
        local_98 = (undefined4)local_d8;
        uStack_94 = local_d8._4_4_;
        uStack_90 = (undefined4)uStack_d0;
        uStack_8c = uStack_d0._4_4_;
        local_a8 = (undefined4)local_e8;
        uStack_a4 = local_e8._4_4_;
        uStack_a0 = (undefined4)uStack_e0;
        uStack_9c = uStack_e0._4_4_;
        uVar1 = *param_2;
        uVar2 = param_2[1];
        uVar3 = param_2[2];
        uVar4 = param_2[3];
        uVar5 = param_2[4];
        uVar6 = param_2[5];
        uVar7 = param_2[6];
        uVar8 = param_2[7];
        *(undefined4 *)(param_2 + 6) = (undefined4)local_b8;
        *(undefined4 *)((longlong)param_2 + 0x34) = local_b8._4_4_;
        *(undefined4 *)(param_2 + 7) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_b0._4_4_;
        *(undefined4 *)(param_2 + 4) = (undefined4)local_c8;
        *(undefined4 *)((longlong)param_2 + 0x24) = local_c8._4_4_;
        *(undefined4 *)(param_2 + 5) = (undefined4)uStack_c0;
        *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_c0._4_4_;
        *(undefined4 *)(param_2 + 2) = (undefined4)local_d8;
        *(undefined4 *)((longlong)param_2 + 0x14) = local_d8._4_4_;
        *(undefined4 *)(param_2 + 3) = (undefined4)uStack_d0;
        *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_d0._4_4_;
        *(undefined4 *)param_2 = (undefined4)local_e8;
        *(undefined4 *)((longlong)param_2 + 4) = local_e8._4_4_;
        *(undefined4 *)(param_2 + 1) = (undefined4)uStack_e0;
        *(undefined4 *)((longlong)param_2 + 0xc) = uStack_e0._4_4_;
        local_e8 = uVar1;
        uStack_e0 = uVar2;
        local_d8 = uVar3;
        uStack_d0 = uVar4;
        local_c8 = uVar5;
        uStack_c0 = uVar6;
        local_b8 = uVar7;
        uStack_b0 = uVar8;
        (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[uVar8 & 0xff])(&local_e8);
      }
      param_3 = param_3 + 8;
      param_2 = param_2 + 8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418477b5 FUN_1418477b5 body=512 status=ok
// SIG undefined FUN_1418477b5(void)

void FUN_1418477b5(longlong *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b04f090;
  FUN_140ca180a(puVar1 + 6);
  FUN_140ca180a(puVar1 + 0x3a);
  puVar1[0x6e] = 0;
  *(undefined2 *)(puVar1 + 0x72) = 0;
  *(undefined1 *)(puVar1 + 0x73) = 0;
  *(undefined1 *)(puVar1 + 0x74) = 0;
  puVar1[0x75] = 0;
  puVar1[0x76] = 0;
  puVar1[0x77] = 0;
  puVar1[0x78] = 0;
  puVar1[0x79] = 0;
  puVar1[0x7a] = 0;
  *(undefined2 *)(puVar1 + 0x7e) = 4;
  *(undefined4 *)(puVar1 + 0x7b) = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x7f) = 3;
  cVar2 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(char *)(puVar1 + 0x80) = cVar2;
  puVar1[0x81] = 0;
  *(undefined2 *)(puVar1 + 0x85) = 4;
  *(undefined4 *)(puVar1 + 0x82) = 0;
  *(undefined1 *)(puVar1 + 0x86) = 3;
  *(char *)(puVar1 + 0x87) = cVar2;
  *(undefined2 *)(puVar1 + 0x88) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x442) = 0;
  puVar1[0x89] = 0;
  *(undefined2 *)(puVar1 + 0x8d) = 0;
  *(undefined1 *)(puVar1 + 0x8e) = 0;
  *(undefined1 *)(puVar1 + 0x8f) = 0;
  *(undefined1 *)(puVar1 + 0x90) = 0;
  FUN_140ca180a(puVar1 + 0x91);
  puVar1[0xc5] = 0;
  puVar1[0xc6] = 0;
  *(undefined2 *)(puVar1 + 0xca) = 4;
  *(undefined4 *)(puVar1 + 199) = 0x3f800000;
  *(undefined1 *)(puVar1 + 0xcb) = 3;
  cVar2 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(char *)(puVar1 + 0xcc) = cVar2;
  puVar1[0xcd] = 0;
  *(undefined2 *)(puVar1 + 0xd1) = 4;
  *(undefined4 *)(puVar1 + 0xce) = 0;
  *(undefined1 *)(puVar1 + 0xd2) = 3;
  *(char *)(puVar1 + 0xd3) = cVar2;
  *(undefined2 *)(puVar1 + 0xd4) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x6a2) = 0;
  puVar1[0xd5] = 0;
  *(undefined2 *)(puVar1 + 0xd9) = 0;
  *(undefined1 *)(puVar1 + 0xda) = 0;
  *(undefined1 *)(puVar1 + 0xdb) = 0;
  *(undefined1 *)(puVar1 + 0xdc) = 0;
  puVar1[0xdd] = 0;
  *(undefined2 *)(puVar1 + 0xe1) = 0;
  *(undefined1 *)(puVar1 + 0xe2) = 0;
  *(undefined1 *)(puVar1 + 0xe3) = 0;
  puVar1[0xe4] = 0;
  *(undefined2 *)(puVar1 + 0xe8) = 4;
  *(undefined4 *)(puVar1 + 0xe5) = 0x40000000;
  *(undefined1 *)(puVar1 + 0xe9) = 3;
  *(char *)(puVar1 + 0xea) = cVar2;
  puVar1[0xeb] = 0;
  *(undefined2 *)(puVar1 + 0xef) = 4;
  *(undefined4 *)(puVar1 + 0xec) = 0x41200000;
  *(undefined1 *)(puVar1 + 0xf0) = 3;
  *(char *)(puVar1 + 0xf1) = cVar2;
  return;
}



// FUNCTION 1418479b5 FUN_1418479b5 body=49 status=ok
// SIG undefined FUN_1418479b5(void)

longlong FUN_1418479b5(void)

{
  if (DAT_14cb575a0 == 0) {
    FUN_14086a14e(&DAT_14cb575a0,&PTR_FUN_14b053280);
  }
  return DAT_14cb575a0;
}



// FUNCTION 1418479e6 FUN_1418479e6 body=1292 status=ok
// SIG undefined FUN_1418479e6(void)

undefined8 * FUN_1418479e6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b04f090;
  plVar1 = param_1 + 0xec;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xf0) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xef)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xef)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xe5;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xe9) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xe8)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xe8)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xde;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xe2) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xe1)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xe1)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xd6;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xda) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xd9)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xd9)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xce;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xd2) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xd1)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xd1)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 199;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xcb) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xca)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xca)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xbc;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xc0) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xbf)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xbf)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xb5;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xb9) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb8)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb8)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_140d4a904(param_1 + 0x91);
  FUN_140d4a904(param_1 + 0x6e);
  plVar1 = param_1 + 0x65;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x69) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x68)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x68)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x5e;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x62) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x61)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x61)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_140d4a904(param_1 + 0x3a);
  plVar1 = param_1 + 0x31;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x35) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x34)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x34)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x2a;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x2e) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x2d)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x2d)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_140d4a904(param_1 + 6);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141847ef2 FUN_141847ef2 body=118 status=ok
// SIG undefined FUN_141847ef2(void)

undefined8 FUN_141847ef2(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb7f748 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144815d88(DAT_14cb7f748,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141847f6a FUN_141847f6a body=104 status=ok
// SIG undefined FUN_141847f6a(void)

undefined8 FUN_141847f6a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_1403f9bcc(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141847fd4 FUN_141847fd4 body=118 status=ok
// SIG undefined FUN_141847fd4(void)

undefined8 FUN_141847fd4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb7f988 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144815d88(DAT_14cb7f988,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14184804c FUN_14184804c body=117 status=ok
// SIG undefined FUN_14184804c(void)

undefined8 * FUN_14184804c(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 1418480c2 FUN_1418480c2 body=214 status=ok
// SIG undefined FUN_1418480c2(void)

longlong FUN_1418480c2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_144983130();
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x38);
    }
  }
  *(longlong *)(param_1 + 0x38) = lVar1;
  FUN_1401f3db8(param_1 + 0x40,param_2 + 0x40);
  lVar1 = *(longlong *)(param_2 + 0x58);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x58);
    }
  }
  *(longlong *)(param_1 + 0x58) = lVar1;
  FUN_144983130(param_1 + 0x60,param_2 + 0x60);
  FUN_144983130(param_1 + 0x98,param_2 + 0x98);
  *(undefined2 *)(param_1 + 0xd0) = *(undefined2 *)(param_2 + 0xd0);
  *(undefined1 *)(param_1 + 0xd2) = *(undefined1 *)(param_2 + 0xd2);
  FUN_144983130(param_1 + 0xd8,param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  return param_1;
}



// FUNCTION 141848198 FUN_141848198 body=169 status=ok
// SIG undefined FUN_141848198(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141848198(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  *(undefined ***)(param_2 + 0x20) = &PTR_FUN_14b023b20;
  *(undefined ***)(param_2 + 0x38) = &PTR_FUN_14b023b40;
  if (*(longlong **)(param_2 + 200) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 200) + 0x10))();
  }
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_2 + 0x20) = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_2 + 0x30) != '\0') &&
     (puVar1 = *(undefined8 **)(param_2 + 0x28), puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00014184822c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 14184825a FUN_14184825a body=78 status=ok
// SIG undefined FUN_14184825a(void)

undefined8 FUN_14184825a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_1447715ec();
      lVar2 = lVar2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1418482a8 FUN_1418482a8 body=31 status=ok
// SIG undefined FUN_1418482a8(void)

undefined1
FUN_1418482a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_14493b798(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 1418482c8 FUN_1418482c8 body=441 status=ok
// SIG undefined FUN_1418482c8(void)

undefined4 FUN_1418482c8(longlong *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_d8 [44];
  undefined1 local_ac [12];
  undefined1 local_a0 [12];
  undefined1 local_94 [12];
  undefined1 local_88 [12];
  undefined1 local_7c [12];
  undefined4 local_70 [6];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 8))(param_1,local_70);
  if (*param_2 == '\x01') {
    FUN_1447a97f4(local_70,param_2 + 0x10);
    iVar2 = FUN_144aff4ae(local_70);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        FUN_144a7c8fe(local_70,local_7c,iVar2,1);
        cVar1 = FUN_144aff4be(local_7c,&DAT_14cb7beb0);
        if (cVar1 == '\0') {
          FUN_144a7c8fe(local_70,local_88,iVar2,1);
          cVar1 = FUN_144aff4be(local_88,&DAT_14cb7bec8);
          if (cVar1 != '\0') goto LAB_141848444;
          FUN_144a7c8fe(local_70,local_94,iVar2,1);
          cVar1 = FUN_144aff4be(local_94,&DAT_14cb7bee0);
          if (cVar1 != '\0') goto LAB_141848444;
          FUN_144a7c8fe(local_70,local_a0,iVar2,1);
          cVar1 = FUN_144aff4be(local_a0,&DAT_14cb7bef8);
          if (cVar1 != '\0') goto LAB_141848444;
          FUN_144a7c8fe(local_70,local_ac,iVar2,1);
          cVar1 = FUN_144aff4be(local_ac,&DAT_14cb7bf10);
          if (cVar1 != '\0') goto LAB_141848444;
        }
        else {
LAB_141848444:
          FUN_1402b5374(local_70,iVar2,0);
        }
        iVar2 = iVar2 + 1;
        iVar3 = FUN_144aff4ae(local_70);
      } while (iVar2 < iVar3);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_70[0] = *(undefined4 *)(param_2 + 0x10);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return local_70[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141848482 FUN_141848482 body=63 status=ok
// SIG undefined FUN_141848482(void)

void FUN_141848482(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x68);
  if (lVar1 != 0) {
    FUN_144a2da94(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (*(longlong *)(param_2 + 0x28) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418484c1 FUN_1418484c1 body=49 status=ok
// SIG undefined FUN_1418484c1(void)

longlong FUN_1418484c1(void)

{
  if (DAT_14cb576a8 == 0) {
    FUN_14086a14e(&DAT_14cb576a8,&PTR_FUN_14b058390);
  }
  return DAT_14cb576a8;
}



// FUNCTION 1418484f2 FUN_1418484f2 body=49 status=ok
// SIG undefined FUN_1418484f2(void)

longlong FUN_1418484f2(void)

{
  if (DAT_14cb576f8 == 0) {
    FUN_14086a14e(&DAT_14cb576f8,&PTR_FUN_14b058c20);
  }
  return DAT_14cb576f8;
}



// FUNCTION 141848523 FUN_141848523 body=49 status=ok
// SIG undefined FUN_141848523(void)

longlong FUN_141848523(void)

{
  if (DAT_14cb57838 == 0) {
    FUN_14073dd9a(&DAT_14cb57838,&PTR_LAB_14b05b8c0);
  }
  return DAT_14cb57838;
}



// FUNCTION 141848554 FUN_141848554 body=49 status=ok
// SIG undefined FUN_141848554(void)

longlong FUN_141848554(void)

{
  if (DAT_14cb57890 == 0) {
    FUN_14086a14e(&DAT_14cb57890,&PTR_FUN_14b05bfc0);
  }
  return DAT_14cb57890;
}



// FUNCTION 141848586 FUN_141848586 body=83 status=ok
// SIG undefined FUN_141848586(void)

undefined8 * FUN_141848586(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0585b0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418485da FUN_1418485da body=132 status=ok
// SIG undefined FUN_1418485da(void)

undefined8 FUN_1418485da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0x20;
    do {
      lVar1 = *(longlong *)(param_3 + -0x18 + lVar3);
      if (*(longlong *)(param_2 + -0x18 + lVar3) != lVar1) {
        *(undefined8 *)(param_2 + -8 + lVar3) = 0;
      }
      *(longlong *)(param_2 + -0x18 + lVar3) = lVar1;
      if (*(longlong *)(param_2 + -0x10 + lVar3) != *(longlong *)(param_3 + -0x10 + lVar3)) {
        *(undefined8 *)(param_2 + -8 + lVar3) = 0;
      }
      uVar2 = FUN_14477b664();
      uVar2 = FUN_14477b664(uVar2);
      *(undefined8 *)(param_2 + -0x10 + lVar3) = uVar2;
      *(undefined8 *)(param_2 + -8 + lVar3) = *(undefined8 *)(param_3 + -8 + lVar3);
      *(undefined1 *)(param_2 + lVar3) = *(undefined1 *)(param_3 + lVar3);
      lVar3 = lVar3 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14184865e FUN_14184865e body=43 status=ok
// SIG undefined FUN_14184865e(void)

void FUN_14184865e(undefined8 param_1,longlong *param_2)

{
  FUN_1447cd778(*param_2,(int)param_2[1]);
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14184868a FUN_14184868a body=48 status=ok
// SIG undefined FUN_14184868a(void)

undefined8 FUN_14184868a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  pbVar1 = (byte *)*param_2;
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(pbVar1 + 8);
  }
  FUN_140822ef4(param_3,uVar2,1);
  return 1;
}



// FUNCTION 1418486c2 FUN_1418486c2 body=1075 status=ok
// SIG undefined FUN_1418486c2(void)

undefined8 FUN_1418486c2(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
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
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  uVar15 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60 = uVar15;
  if (param_4 != 0) {
    do {
      uVar3 = *param_3;
      uVar4 = param_3[1];
      uVar5 = param_3[2];
      uVar6 = param_3[3];
      uVar7 = param_3[4];
      uVar8 = param_3[5];
      uVar9 = param_3[6];
      uVar10 = param_3[7];
      uVar11 = param_3[9];
      uVar12 = param_3[10];
      uVar13 = param_3[0xb];
      param_2[8] = param_3[8];
      param_2[9] = uVar11;
      param_2[10] = uVar12;
      param_2[0xb] = uVar13;
      param_2[4] = uVar7;
      param_2[5] = uVar8;
      param_2[6] = uVar9;
      param_2[7] = uVar10;
      *param_2 = uVar3;
      param_2[1] = uVar4;
      param_2[2] = uVar5;
      param_2[3] = uVar6;
      if (param_2 == param_3) {
        *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
        puVar17 = (undefined8 *)(param_3 + 0x1e);
        puVar18 = (undefined8 *)(param_2 + 0x1e);
        for (lVar16 = 9; lVar16 != 0; lVar16 = lVar16 + -1) {
          *puVar18 = *puVar17;
          puVar17 = puVar17 + 1;
          puVar18 = puVar18 + 1;
        }
      }
      else {
        FUN_14028f58f(*(undefined8 *)(param_2 + 0xc),param_2[0xe]);
        iVar1 = param_3[0xe];
        uVar2 = *(undefined8 *)(param_3 + 0xc);
        param_2[0xe] = iVar1;
        if (iVar1 == 0 && param_2[0xf] == 0) {
          param_2[0xf] = 0;
        }
        else {
          FUN_1486454ee(param_2 + 0xc,iVar1);
          FUN_148645560(*(undefined8 *)(param_2 + 0xc),uVar2,iVar1);
        }
        *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
        local_78 = 0;
        uStack_70 = 0;
        iVar1 = param_3[0x14];
        if ((longlong)iVar1 != 0) {
          local_90 = *(longlong *)(param_3 + 0x12);
          lVar16 = 0;
          do {
            if ((*(int *)(local_90 + 8 + lVar16) != 0) &&
               (*(longlong **)(local_90 + lVar16) != (longlong *)0x0)) {
              local_88 = 0;
              local_80 = 0;
              (**(code **)(**(longlong **)(local_90 + lVar16) + 0x40))();
              lVar19 = (longlong)(int)uStack_70;
              uVar14 = (int)uStack_70 + 1;
              uStack_70 = CONCAT44(uStack_70._4_4_,uVar14);
              if (uStack_70._4_4_ < uVar14) {
                FUN_1447a71f6(&local_78);
              }
              lVar19 = lVar19 * 0x10;
              *(undefined8 *)(local_78 + lVar19) = 0;
              *(undefined4 *)(local_78 + 8 + lVar19) = 0;
              *(undefined8 *)(local_78 + lVar19) = local_88;
              local_88 = 0;
              *(undefined4 *)(local_78 + 8 + lVar19) = local_80;
              local_80 = 0;
              FUN_1449db362(&local_88);
            }
            lVar16 = lVar16 + 0x10;
          } while ((longlong)iVar1 * 0x10 != lVar16);
        }
        FUN_1448a8284(param_2 + 0x12);
        if (&local_78 == (longlong *)(param_2 + 0x12)) {
          uVar15 = uStack_70 & 0xffffffff;
        }
        else {
          FUN_144760e21(*(undefined8 *)(param_2 + 0x12),param_2[0x14]);
          if (*(longlong *)(param_2 + 0x12) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_2 + 0x12) = local_78;
          local_78 = 0;
          param_2[0x14] = (int)uStack_70;
          param_2[0x15] = uStack_70._4_4_;
          uStack_70 = 0;
          uVar15 = 0;
        }
        FUN_144760e21(local_78,uVar15);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        local_78 = 0;
        uStack_70 = 0;
        iVar1 = param_3[0x1a];
        if ((longlong)iVar1 != 0) {
          local_90 = *(longlong *)(param_3 + 0x18);
          lVar16 = 0;
          do {
            if ((*(int *)(local_90 + 8 + lVar16) != 0) &&
               (*(longlong **)(local_90 + lVar16) != (longlong *)0x0)) {
              local_88 = 0;
              local_80 = 0;
              (**(code **)(**(longlong **)(local_90 + lVar16) + 0x40))();
              lVar19 = (longlong)(int)uStack_70;
              uVar14 = (int)uStack_70 + 1;
              uStack_70 = CONCAT44(uStack_70._4_4_,uVar14);
              if (uStack_70._4_4_ < uVar14) {
                FUN_1447a71f6(&local_78);
              }
              lVar19 = lVar19 * 0x10;
              *(undefined8 *)(local_78 + lVar19) = 0;
              *(undefined4 *)(local_78 + 8 + lVar19) = 0;
              *(undefined8 *)(local_78 + lVar19) = local_88;
              local_88 = 0;
              *(undefined4 *)(local_78 + 8 + lVar19) = local_80;
              local_80 = 0;
              FUN_1449db362(&local_88);
            }
            lVar16 = lVar16 + 0x10;
          } while ((longlong)iVar1 * 0x10 != lVar16);
        }
        FUN_1448a8284(param_2 + 0x18);
        if (&local_78 == (longlong *)(param_2 + 0x18)) {
          uVar15 = uStack_70 & 0xffffffff;
        }
        else {
          FUN_144760e21(*(undefined8 *)(param_2 + 0x18),param_2[0x1a]);
          if (*(longlong *)(param_2 + 0x18) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_2 + 0x18) = local_78;
          local_78 = 0;
          param_2[0x1a] = (int)uStack_70;
          param_2[0x1b] = uStack_70._4_4_;
          uStack_70 = 0;
          uVar15 = 0;
        }
        FUN_144760e21(local_78,uVar15);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        puVar17 = (undefined8 *)(param_3 + 0x1e);
        puVar18 = (undefined8 *)(param_2 + 0x1e);
        for (lVar16 = 9; lVar16 != 0; lVar16 = lVar16 + -1) {
          *puVar18 = *puVar17;
          puVar17 = puVar17 + 1;
          puVar18 = puVar18 + 1;
        }
        if (param_2 != param_3) {
          FUN_14028f532(*(undefined8 *)(param_2 + 0x30),param_2[0x32]);
          iVar1 = param_3[0x32];
          uVar2 = *(undefined8 *)(param_3 + 0x30);
          param_2[0x32] = iVar1;
          if (iVar1 == 0 && param_2[0x33] == 0) {
            param_2[0x33] = 0;
          }
          else {
            FUN_148645754(param_2 + 0x30,iVar1);
            FUN_1486457b6(*(undefined8 *)(param_2 + 0x30),uVar2,iVar1);
          }
        }
      }
      uVar15 = *(ulonglong *)(param_3 + 0x34);
      param_3 = param_3 + 0x36;
      *(ulonglong *)(param_2 + 0x34) = uVar15;
      param_2 = param_2 + 0x36;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar15 >> 8),1);
}



// FUNCTION 141848af6 FUN_141848af6 body=49 status=ok
// SIG undefined FUN_141848af6(void)

longlong FUN_141848af6(void)

{
  if (DAT_14cb57aa0 == 0) {
    FUN_14086a14e(&DAT_14cb57aa0,&PTR_FUN_14b061118);
  }
  return DAT_14cb57aa0;
}



// FUNCTION 141848b27 FUN_141848b27 body=73 status=ok
// SIG undefined FUN_141848b27(void)

void FUN_141848b27(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b061d20;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x44) = 1;
  *(undefined4 *)(puVar1 + 9) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x4c) = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x59) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x61) = 0;
  *(undefined4 *)(puVar1 + 0xe) = 0xff00ff00;
  return;
}



// FUNCTION 141848b70 FUN_141848b70 body=49 status=ok
// SIG undefined FUN_141848b70(void)

longlong FUN_141848b70(void)

{
  if (DAT_14cb57b50 == 0) {
    FUN_14086a14e(&DAT_14cb57b50,&PTR_FUN_14b0623b0);
  }
  return DAT_14cb57b50;
}



// FUNCTION 141848ba1 FUN_141848ba1 body=49 status=ok
// SIG undefined FUN_141848ba1(void)

longlong FUN_141848ba1(void)

{
  if (DAT_14cb57bc8 == 0) {
    FUN_14086a14e(&DAT_14cb57bc8,&PTR_FUN_14b062ca0);
  }
  return DAT_14cb57bc8;
}



// FUNCTION 141848bd2 FUN_141848bd2 body=49 status=ok
// SIG undefined FUN_141848bd2(void)

longlong FUN_141848bd2(void)

{
  if (DAT_14cb57c80 == 0) {
    FUN_14086a14e(&DAT_14cb57c80,&PTR_FUN_14b0642a0);
  }
  return DAT_14cb57c80;
}



// FUNCTION 141848c08 FUN_141848c08 body=49 status=ok
// SIG undefined FUN_141848c08(void)

longlong FUN_141848c08(void)

{
  if (DAT_14cb57d30 == 0) {
    FUN_14073dd9a(&DAT_14cb57d30,&PTR_LAB_14b065ea0);
  }
  return DAT_14cb57d30;
}



// FUNCTION 141848c39 FUN_141848c39 body=49 status=ok
// SIG undefined FUN_141848c39(void)

longlong FUN_141848c39(void)

{
  if (DAT_14cb57d70 == 0) {
    FUN_14086a14e(&DAT_14cb57d70,&PTR_FUN_14b066378);
  }
  return DAT_14cb57d70;
}



// FUNCTION 141848c6a FUN_141848c6a body=40 status=ok
// SIG undefined FUN_141848c6a(void)

undefined8 FUN_141848c6a(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141848c92 FUN_141848c92 body=118 status=ok
// SIG undefined FUN_141848c92(void)

undefined8 FUN_141848c92(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb7d618 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb7d618,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141848d0a FUN_141848d0a body=71 status=ok
// SIG undefined FUN_141848d0a(void)

void FUN_141848d0a(undefined8 param_1,longlong *param_2)

{
  FUN_140da32e9(param_2[3],(int)param_2[4]);
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_2,(int)param_2[1]);
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141848d52 FUN_141848d52 body=31 status=ok
// SIG undefined FUN_141848d52(void)

undefined1
FUN_141848d52(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_140280fd6(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 141848d72 FUN_141848d72 body=84 status=ok
// SIG undefined FUN_141848d72(void)

longlong * FUN_141848d72(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 141848dc6 FUN_141848dc6 body=49 status=ok
// SIG undefined FUN_141848dc6(void)

longlong FUN_141848dc6(void)

{
  if (DAT_14cb57ee8 == 0) {
    FUN_14086a14e(&DAT_14cb57ee8,&PTR_FUN_14b06b670);
  }
  return DAT_14cb57ee8;
}



// FUNCTION 141848df8 FUN_141848df8 body=57 status=ok
// SIG undefined FUN_141848df8(void)

void FUN_141848df8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57f98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57f98 = FUN_140002ddd(FUN_1464bfd44,uVar1,L"GbxActivityAreaStampContextDef");
  }
  return;
}



// FUNCTION 141848e32 FUN_141848e32 body=57 status=ok
// SIG undefined FUN_141848e32(void)

void FUN_141848e32(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58018 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58018 = FUN_140002ddd(FUN_1464bfd73,uVar1,L"GbxActivityAreaStampLayoutDef");
  }
  return;
}



// FUNCTION 141848e6c FUN_141848e6c body=57 status=ok
// SIG undefined FUN_141848e6c(void)

void FUN_141848e6c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58048 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58048 = FUN_140002ddd(FUN_1464bfdd8,uVar1,L"GbxActivityAreaStampLayoutGroupDef");
  }
  return;
}



// FUNCTION 141848ea6 FUN_141848ea6 body=118 status=ok
// SIG undefined FUN_141848ea6(void)

undefined8 FUN_141848ea6(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb70378 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144815d88(DAT_14cb70378,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141848f1e FUN_141848f1e body=118 status=ok
// SIG undefined FUN_141848f1e(void)

undefined8 FUN_141848f1e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb704c8 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144815d88(DAT_14cb704c8,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141848f96 FUN_141848f96 body=149 status=ok
// SIG undefined FUN_141848f96(void)

void FUN_141848f96(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  FUN_1447cd778(*(undefined8 *)(param_2 + 0x70),*(undefined4 *)(param_2 + 0x78));
  if (*(longlong *)(param_2 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)(param_2 + 0x20);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_2 + 0x40) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_2 + 0x38)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (*(ushort *)(param_2 + 0x38) < 0x19) {
    return;
  }
  FUN_1400020a8(*plVar1);
  return;
}



// FUNCTION 14184902c FUN_14184902c body=149 status=ok
// SIG undefined FUN_14184902c(void)

void FUN_14184902c(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  FUN_1447cd778(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x40) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x38)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (*(ushort *)(param_1 + 0x38) < 0x19) {
    return;
  }
  FUN_1400020a8(*plVar1);
  return;
}



// FUNCTION 1418490c1 FUN_1418490c1 body=49 status=ok
// SIG undefined FUN_1418490c1(void)

longlong FUN_1418490c1(void)

{
  if (DAT_14cb584b8 == 0) {
    FUN_14086a14e(&DAT_14cb584b8,&PTR_FUN_14b078d28);
  }
  return DAT_14cb584b8;
}



// FUNCTION 1418490f2 FUN_1418490f2 body=57 status=ok
// SIG undefined FUN_1418490f2(void)

void FUN_1418490f2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58610 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58610 = FUN_140002ddd(FUN_1464c1a56,uVar1,L"GbxActorPartDef_DialogEvents");
  }
  return;
}



// FUNCTION 14184912c FUN_14184912c body=71 status=ok
// SIG undefined FUN_14184912c(void)

undefined8 * FUN_14184912c(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 141849174 FUN_141849174 body=117 status=ok
// SIG undefined FUN_141849174(void)

undefined8 * FUN_141849174(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 1418491ea FUN_1418491ea body=87 status=ok
// SIG undefined FUN_1418491ea(void)

void FUN_1418491ea(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x98) = 0;
  if (*(longlong *)(param_2 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_140c86960(param_2 + 0x50);
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140c86928(param_2);
  return;
}



// FUNCTION 141849242 FUN_141849242 body=121 status=ok
// SIG undefined FUN_141849242(void)

void FUN_141849242(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_2 + 0x98) = 0;
  if (*(longlong *)(param_2 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_140c86960(param_2 + 0x50);
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140c86928(param_2);
  return;
}



// FUNCTION 1418492bc FUN_1418492bc body=164 status=ok
// SIG undefined FUN_1418492bc(void)

void FUN_1418492bc(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x138);
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b07d840;
  param_2[0x15] = 0;
  *(undefined4 *)(param_2 + 0x16) = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *(undefined8 *)((longlong)param_2 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0xbc) = 0;
  param_2[0x19] = 0;
  *(undefined4 *)(param_2 + 0x1a) = 0;
  param_2[0x1f] = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  *(undefined8 *)((longlong)param_2 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x10c) = 0;
  param_2[0x23] = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  return;
}



// FUNCTION 14184936e FUN_14184936e body=72 status=ok
// SIG undefined FUN_14184936e(void)

void FUN_14184936e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb8);
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b07dc30;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined8 *)((longlong)param_2 + 0xa1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa9) = 0;
  return;
}



// FUNCTION 1418493c4 FUN_1418493c4 body=87 status=ok
// SIG undefined FUN_1418493c4(void)

void FUN_1418493c4(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xa8);
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b07de20;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *(undefined4 *)(param_2 + 0x13) = 1;
  *(undefined2 *)((longlong)param_2 + 0x9c) = 1;
  *(undefined4 *)(param_2 + 0x14) = 0x3f800000;
  return;
}



// FUNCTION 14184942a FUN_14184942a body=87 status=ok
// SIG undefined FUN_14184942a(void)

void FUN_14184942a(undefined8 param_1,longlong *param_2)

{
  *(undefined4 *)(param_2 + 0x10) = 0;
  if (param_2[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1406f0462(param_2 + 7);
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141849482 FUN_141849482 body=58 status=ok
// SIG undefined FUN_141849482(void)

void FUN_141849482(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x98);
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b07e620;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  return;
}



// FUNCTION 1418494ca FUN_1418494ca body=60 status=ok
// SIG undefined FUN_1418494ca(void)

void FUN_1418494ca(undefined8 param_1,longlong *param_2)

{
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141849506 FUN_141849506 body=58 status=ok
// SIG undefined FUN_141849506(void)

void FUN_141849506(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x98);
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b07eae0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  return;
}



// FUNCTION 14184954e FUN_14184954e body=76 status=ok
// SIG undefined FUN_14184954e(void)

void FUN_14184954e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb0);
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b07f2f0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  return;
}



// FUNCTION 1418495a8 FUN_1418495a8 body=43 status=ok
// SIG undefined FUN_1418495a8(void)

void FUN_1418495a8(undefined8 param_1,longlong *param_2)

{
  FUN_140925a98(*param_2,(int)param_2[1]);
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418495d4 FUN_1418495d4 body=81 status=ok
// SIG undefined FUN_1418495d4(void)

void FUN_1418495d4(undefined8 param_1,longlong *param_2)

{
  *(undefined4 *)(param_2 + 0xb) = 0;
  if (param_2[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140925aca(param_2 + 2);
  FUN_140925a98(*param_2,(int)param_2[1]);
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141849626 FUN_141849626 body=109 status=ok
// SIG undefined FUN_141849626(void)

void FUN_141849626(undefined8 param_1,longlong *param_2)

{
  if (param_2[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_2[0xc] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_2 + 0xb) = 0;
  if (param_2[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140925aca(param_2 + 2);
  FUN_140925a98(*param_2,(int)param_2[1]);
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141849694 FUN_141849694 body=213 status=ok
// SIG undefined FUN_141849694(void)

void FUN_141849694(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1a0);
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b07f9b0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0xcc) = 0;
  param_2[0x1b] = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  param_2[0x2e] = 0;
  *(undefined4 *)(param_2 + 0x2f) = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  *(undefined1 *)(param_2 + 0x29) = 0;
  *(undefined8 *)((longlong)param_2 + 0x17c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x184) = 0;
  param_2[0x32] = 0;
  *(undefined4 *)(param_2 + 0x33) = 0;
  return;
}



// FUNCTION 141849769 FUN_141849769 body=110 status=ok
// SIG undefined FUN_141849769(void)

void FUN_141849769(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1407f5d04(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b084280;
  puVar1[5] = &PTR_FUN_14b084d50;
  puVar1[6] = &PTR_LAB_14b084d90;
  puVar1[0x55] = &PTR_FUN_14b084de0;
  puVar1[0x56] = &PTR_FUN_14b084e60;
  puVar1[0x57] = &PTR_FUN_14b084e70;
  puVar1[0x11b] = 0;
  return;
}



// FUNCTION 1418497d8 FUN_1418497d8 body=57 status=ok
// SIG undefined FUN_1418497d8(void)

void FUN_1418497d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb589a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb589a0 = FUN_140002ddd(FUN_1464c2f68,uVar1,L"GbxActorInstanceData_Parts");
  }
  return;
}



// FUNCTION 141849811 FUN_141849811 body=110 status=ok
// SIG undefined FUN_141849811(void)

void FUN_141849811(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400ea704(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b086360;
  puVar1[5] = &PTR_FUN_14b086e60;
  puVar1[6] = &PTR_FUN_14b086ea0;
  puVar1[0x55] = &PTR_FUN_14b086ef0;
  puVar1[0x56] = &PTR_FUN_14b086f70;
  puVar1[0x57] = &PTR_FUN_14b086f80;
  puVar1[0xe3] = 0;
  return;
}



// FUNCTION 14184987f FUN_14184987f body=49 status=ok
// SIG undefined FUN_14184987f(void)

longlong FUN_14184987f(void)

{
  if (DAT_14cb58b78 == 0) {
    FUN_14073dd9a(&DAT_14cb58b78,&PTR_LAB_14b088460);
  }
  return DAT_14cb58b78;
}



// FUNCTION 1418498b0 FUN_1418498b0 body=60 status=ok
// SIG undefined FUN_1418498b0(void)

void FUN_1418498b0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  bool bVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = (**(code **)(*param_1 + 0x2b8))();
  if (lVar1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(char *)(lVar1 + 0x178) == '\x03';
  }
  *param_3 = bVar2;
  return;
}



// FUNCTION 1418498f9 FUN_1418498f9 body=49 status=ok
// SIG undefined FUN_1418498f9(void)

longlong FUN_1418498f9(void)

{
  if (DAT_14cb58bb8 == 0) {
    FUN_14086a14e(&DAT_14cb58bb8,&PTR_FUN_14b088d50);
  }
  return DAT_14cb58bb8;
}



// FUNCTION 14184992a FUN_14184992a body=289 status=ok
// SIG undefined FUN_14184992a(void)

void FUN_14184992a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar3 = (undefined8 *)*param_1;
  FUN_14094d83e(puVar3,param_1);
  *puVar3 = &PTR_FUN_14b0894d0;
  puVar3[0x4a] = &PTR_FUN_14b0898d0;
  puVar3[0x76] = &PTR_FUN_14b0898f0;
  puVar3[0x77] = 0;
  puVar3[0x78] = 0;
  local_38 = (longlong *)FUN_14001cc68(0x98,0x10);
  local_38[1] = (longlong)&DAT_100000001;
  *local_38 = (longlong)&PTR_FUN_14a1b6cc0;
  local_40 = local_38 + 2;
  local_38[2] = (longlong)&PTR_FUN_14a18e458;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_38[8] = 0;
  local_38[9] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0;
  local_38[0xc] = 0;
  local_38[0xd] = 0;
  local_38[0xe] = 0;
  local_38[0xf] = 0;
  local_38[0x10] = 0;
  local_38[0x11] = 0;
  local_38[0x12] = 0;
  FUN_1404e24cc(&local_40);
  FUN_1404e256a(puVar3 + 0x79,&local_40);
  plVar4 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141849a4c FUN_141849a4c body=42 status=ok
// SIG undefined FUN_141849a4c(void)

void FUN_141849a4c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1408d5686(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b08ddf0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 141849a76 FUN_141849a76 body=801 status=ok
// SIG undefined FUN_141849a76(void)

void FUN_141849a76(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uStack_20 = 0;
  uStack_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1409e12a0;
      local_40 = 0;
      local_48 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_20 = (undefined4)uVar2;
      uStack_1c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_20);
    }
  }
  local_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_24 = (int)uVar2;
      uStack_20 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_24);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x18))(param_1,CONCAT44(uStack_1c,uStack_20),local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141849d98 FUN_141849d98 body=137 status=ok
// SIG undefined FUN_141849d98(void)

void FUN_141849d98(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406046aa(puVar1);
  *puVar1 = &PTR_FUN_14b08a8d0;
  puVar1[5] = &PTR_FUN_14b08abd0;
  puVar1[6] = &PTR_FUN_14b08ac00;
  puVar1[0x14] = &PTR_FUN_14b08ac30;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  *(undefined4 *)((longlong)puVar1 + 0xac) = 1;
  *(undefined1 *)(puVar1 + 0x16) = 1;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xc1) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xc9) = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  return;
}



// FUNCTION 141849e22 FUN_141849e22 body=40 status=ok
// SIG undefined FUN_141849e22(void)

undefined8 FUN_141849e22(undefined8 param_1,int param_2)

{
  FUN_1403aec46();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141849e4a FUN_141849e4a body=40 status=ok
// SIG undefined FUN_141849e4a(void)

undefined8 FUN_141849e4a(undefined8 param_1,int param_2)

{
  FUN_14006e248();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141849e72 FUN_141849e72 body=40 status=ok
// SIG undefined FUN_141849e72(void)

undefined8 FUN_141849e72(undefined8 param_1,int param_2)

{
  FUN_14042c3da();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141849e9a FUN_141849e9a body=26 status=ok
// SIG undefined FUN_141849e9a(void)

undefined8 FUN_141849e9a(longlong param_1,undefined8 param_2)

{
  FUN_14053d784(param_1 + 0x18);
  return param_2;
}



// FUNCTION 141849eb4 FUN_141849eb4 body=67 status=ok
// SIG undefined FUN_141849eb4(void)

undefined8 * FUN_141849eb4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b08ddf0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141849ef8 FUN_141849ef8 body=72 status=ok
// SIG undefined FUN_141849ef8(void)

void FUN_141849ef8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb8);
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b08ae00;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  return;
}



// FUNCTION 141849f4e FUN_141849f4e body=61 status=ok
// SIG undefined FUN_141849f4e(void)

void FUN_141849f4e(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141849f8c FUN_141849f8c body=247 status=ok
// SIG undefined FUN_141849f8c(void)

void FUN_141849f8c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  memset(param_2,0,0x180);
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b08b340;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb9) = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  uVar1 = DAT_14c8464e8;
  param_2[0x1b] = DAT_14c8464e0;
  param_2[0x1c] = uVar1;
  param_2[0x1d] = DAT_14c8464f0;
  param_2[0x20] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_2[0x1e] = DAT_14c8464f8;
  param_2[0x1f] = uVar1;
  param_2[0x21] = 0x3ff0000000000000;
  param_2[0x22] = 0x3ff0000000000000;
  param_2[0x23] = 0x3ff0000000000000;
  *(undefined1 *)(param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x124) = 0;
  param_2[0x2a] = 0;
  *(undefined4 *)(param_2 + 0x2b) = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  *(undefined8 *)((longlong)param_2 + 0x15c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x164) = 0;
  param_2[0x2e] = 0;
  *(undefined4 *)(param_2 + 0x2f) = 0;
  return;
}



// FUNCTION 14184a084 FUN_14184a084 body=72 status=ok
// SIG undefined FUN_14184a084(void)

void FUN_14184a084(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb8);
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b08b900;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined8 *)((longlong)param_2 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xac) = 0;
  return;
}



// FUNCTION 14184a0da FUN_14184a0da body=82 status=ok
// SIG undefined FUN_14184a0da(void)

void FUN_14184a0da(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb0);
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b08bf20;
  *(undefined1 *)(param_2 + 0x11) = 0;
  *(undefined4 *)((longlong)param_2 + 0x8c) = 0x3f800000;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  return;
}



// FUNCTION 14184a13a FUN_14184a13a body=58 status=ok
// SIG undefined FUN_14184a13a(void)

void FUN_14184a13a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x98);
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b08c110;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  return;
}



// FUNCTION 14184a182 FUN_14184a182 body=48 status=ok
// SIG undefined FUN_14184a182(void)

void FUN_14184a182(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x88);
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b08c300;
  return;
}



// FUNCTION 14184a1c8 FUN_14184a1c8 body=60 status=ok
// SIG undefined FUN_14184a1c8(void)

void FUN_14184a1c8(undefined8 param_1,longlong *param_2)

{
  FUN_14028f404(param_2[2],(int)param_2[3]);
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14184a204 FUN_14184a204 body=60 status=ok
// SIG undefined FUN_14184a204(void)

void FUN_14184a204(longlong *param_1)

{
  FUN_14028f404(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14184a240 FUN_14184a240 body=91 status=ok
// SIG undefined FUN_14184a240(void)

void FUN_14184a240(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)(param_2 + 0x28);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_2 + 0x48) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_2 + 0x40)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (*(ushort *)(param_2 + 0x40) < 0x19) {
    return;
  }
  FUN_1400020a8(*plVar1);
  return;
}



// FUNCTION 14184a29c FUN_14184a29c body=45 status=ok
// SIG undefined FUN_14184a29c(void)

void FUN_14184a29c(undefined8 param_1,longlong param_2)

{
  FUN_14028f43e(*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x20));
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14184a2ca FUN_14184a2ca body=298 status=ok
// SIG undefined FUN_14184a2ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14184a2ca(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar3 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b096320;
  plVar1 = plVar3 + 2;
  plVar3[7] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[0xc] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[0xd] = 0;
  *(undefined4 *)(plVar3 + 8) = 0xffffffff;
  plVar3[9] = 0;
  plVar3[10] = 0;
  *(undefined1 *)(plVar3 + 0xb) = 0;
  plVar3[2] = (longlong)&PTR_FUN_14b094d50;
  if (plVar3 == (longlong *)0x0) {
    _DAT_00000018 = 0x10;
    plVar5 = (longlong *)&DAT_00000020;
    plVar4 = _DAT_00000020;
    if (_DAT_00000020 != (longlong *)0x0) {
LAB_14184a3d3:
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      *plVar5 = (longlong)plVar3;
      if (plVar3 != (longlong *)0x0) goto LAB_14184a35d;
    }
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar3;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    plVar3[3] = (longlong)plVar1;
    if ((longlong *)plVar3[4] != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar3[4] != (longlong *)0x0) {
        plVar5 = plVar3 + 4;
        plVar4 = (longlong *)plVar3[4];
        goto LAB_14184a3d3;
      }
      plVar3[4] = (longlong)plVar3;
    }
LAB_14184a35d:
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 14184a3f4 FUN_14184a3f4 body=26 status=ok
// SIG undefined FUN_14184a3f4(void)

undefined8 FUN_14184a3f4(longlong param_1,undefined8 param_2)

{
  FUN_14053d784(param_1 + 0x48);
  return param_2;
}



// FUNCTION 14184a40e FUN_14184a40e body=40 status=ok
// SIG undefined FUN_14184a40e(void)

undefined8 FUN_14184a40e(undefined8 param_1,int param_2)

{
  FUN_140bcc9da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14184a436 FUN_14184a436 body=384 status=ok
// SIG undefined FUN_14184a436(void)

undefined8 FUN_14184a436(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  void *_Src;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      lVar5 = *(longlong *)(param_3 + 8 + lVar10);
      if (*(longlong *)(param_2 + 8 + lVar10) != lVar5) {
        *(longlong *)(param_2 + 8 + lVar10) = lVar5;
        *(undefined4 *)(param_2 + 0x10 + lVar10) = *(undefined4 *)(param_3 + 0x10 + lVar10);
      }
      lVar5 = *(longlong *)(param_3 + 0x14 + lVar10);
      if (*(longlong *)(param_2 + 0x14 + lVar10) != lVar5) {
        *(longlong *)(param_2 + 0x14 + lVar10) = lVar5;
        *(undefined4 *)(param_2 + 0x1c + lVar10) = *(undefined4 *)(param_3 + 0x1c + lVar10);
      }
      lVar5 = param_3 + lVar10;
      lVar1 = param_2 + 0x30 + lVar10;
      *(undefined1 *)(lVar1 + -0x10) = *(undefined1 *)(lVar5 + 0x20);
      *(undefined1 *)(lVar1 + -8) = *(undefined1 *)(lVar5 + 0x28);
      FUN_1401f3db8(lVar1,lVar5 + 0x30);
      if ((*(longlong *)(lVar1 + 0x18) != *(longlong *)(lVar5 + 0x48)) ||
         (*(int *)(param_2 + 0x50 + lVar10) != *(int *)(param_3 + 0x50 + lVar10))) {
        *(longlong *)(param_2 + 0x48 + lVar10) = *(longlong *)(lVar5 + 0x48);
        *(undefined4 *)(param_2 + 0x50 + lVar10) = *(undefined4 *)(param_3 + 0x50 + lVar10);
        *(undefined8 *)(param_2 + 0x58 + lVar10) = 0;
      }
      *(undefined8 *)(param_2 + 0x60 + lVar10) = *(undefined8 *)(param_3 + 0x60 + lVar10);
      puVar2 = (undefined4 *)(param_3 + 0x68 + lVar10);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      puVar3 = (undefined4 *)(param_2 + 0x68 + lVar10);
      *puVar3 = *puVar2;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      if (param_2 + lVar10 != param_3 + lVar10) {
        iVar4 = *(int *)(param_3 + 0x80 + lVar10);
        _Src = *(void **)(param_3 + 0x78 + lVar10);
        *(int *)(param_2 + 0x80 + lVar10) = iVar4;
        if (iVar4 == 0 && *(int *)(param_2 + 0x84 + lVar10) == 0) {
          *(undefined4 *)(param_2 + 0x84 + lVar10) = 0;
        }
        else {
          puVar9 = (undefined8 *)(param_2 + lVar10 + 0x78);
          FUN_1446dd670(puVar9,iVar4);
          if (iVar4 != 0) {
            memcpy((void *)*puVar9,_Src,(longlong)iVar4 * 2);
          }
        }
      }
      *(undefined4 *)(param_2 + 0x97 + lVar10) = *(undefined4 *)(param_3 + 0x97 + lVar10);
      puVar2 = (undefined4 *)(param_3 + 0x88 + lVar10);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      puVar3 = (undefined4 *)(param_2 + 0x88 + lVar10);
      *puVar3 = *puVar2;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      lVar10 = lVar10 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14184a5b6 FUN_14184a5b6 body=86 status=ok
// SIG undefined FUN_14184a5b6(void)

longlong * FUN_14184a5b6(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14184a60c FUN_14184a60c body=86 status=ok
// SIG undefined FUN_14184a60c(void)

longlong * FUN_14184a60c(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14184a662 FUN_14184a662 body=29 status=ok
// SIG undefined FUN_14184a662(void)

undefined8 FUN_14184a662(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14184a680 FUN_14184a680 body=118 status=ok
// SIG undefined FUN_14184a680(void)

undefined8 FUN_14184a680(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb71850 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb71850,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14184a6f8 FUN_14184a6f8 body=118 status=ok
// SIG undefined FUN_14184a6f8(void)

undefined8 FUN_14184a6f8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb71928 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb71928,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14184a770 FUN_14184a770 body=153 status=ok
// SIG undefined FUN_14184a770(void)

undefined8 * FUN_14184a770(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0a0930;
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_14090bbce(param_1 + 0x1e);
  FUN_144909e75(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14184a80a FUN_14184a80a body=76 status=ok
// SIG undefined FUN_14184a80a(void)

void FUN_14184a80a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0a0e90;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14184a856 FUN_14184a856 body=282 status=ok
// SIG undefined FUN_14184a856(void)

undefined8 FUN_14184a856(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
    do {
      *(undefined2 *)(param_2 + -0x40) = *(undefined2 *)(param_3 + -0x40);
      *(undefined8 *)(param_2 + -0x48) = *(undefined8 *)(param_3 + -0x48);
      uVar1 = *(undefined4 *)(param_3 + -0x34);
      uVar2 = *(undefined4 *)(param_3 + -0x30);
      uVar3 = *(undefined4 *)(param_3 + -0x2c);
      uVar4 = *(undefined4 *)(param_3 + -0x28);
      uVar5 = *(undefined4 *)(param_3 + -0x24);
      uVar6 = *(undefined4 *)(param_3 + -0x20);
      uVar7 = *(undefined4 *)(param_3 + -0x1c);
      *(undefined4 *)(param_2 + -0x38) = *(undefined4 *)(param_3 + -0x38);
      *(undefined4 *)(param_2 + -0x34) = uVar1;
      *(undefined4 *)(param_2 + -0x30) = uVar2;
      *(undefined4 *)(param_2 + -0x2c) = uVar3;
      *(undefined4 *)(param_2 + -0x28) = uVar4;
      *(undefined4 *)(param_2 + -0x24) = uVar5;
      *(undefined4 *)(param_2 + -0x20) = uVar6;
      *(undefined4 *)(param_2 + -0x1c) = uVar7;
      *(undefined8 *)(param_2 + -0x1b) = *(undefined8 *)(param_3 + -0x1b);
      FUN_140472d3c(param_2 + -0x10,param_3 + -0x10);
      FUN_140472cde(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      lVar9 = *(longlong *)(param_3 + 0x18);
      if (DAT_14c950c29 == 1) {
        if (lVar9 == 0) {
          lVar9 = 0;
        }
        else {
          FUN_14689c22e();
          lVar9 = *(longlong *)(param_3 + 0x18);
        }
      }
      bVar8 = DAT_14c950c29;
      *(longlong *)(param_2 + 0x18) = lVar9;
      uVar1 = *(undefined4 *)(param_3 + 0x20);
      uVar2 = *(undefined4 *)(param_3 + 0x24);
      uVar3 = *(undefined4 *)(param_3 + 0x28);
      uVar4 = *(undefined4 *)(param_3 + 0x2c);
      uVar5 = *(undefined4 *)(param_3 + 0x34);
      uVar6 = *(undefined4 *)(param_3 + 0x38);
      uVar7 = *(undefined4 *)(param_3 + 0x3c);
      *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30);
      *(undefined4 *)(param_2 + 0x34) = uVar5;
      *(undefined4 *)(param_2 + 0x38) = uVar6;
      *(undefined4 *)(param_2 + 0x3c) = uVar7;
      *(undefined4 *)(param_2 + 0x20) = uVar1;
      *(undefined4 *)(param_2 + 0x24) = uVar2;
      *(undefined4 *)(param_2 + 0x28) = uVar3;
      *(undefined4 *)(param_2 + 0x2c) = uVar4;
      lVar9 = *(longlong *)(param_3 + 0x40);
      if ((bVar8 & 1) != 0) {
        if (lVar9 == 0) {
          lVar9 = 0;
        }
        else {
          FUN_14689c22e();
          lVar9 = *(longlong *)(param_3 + 0x40);
        }
      }
      *(longlong *)(param_2 + 0x40) = lVar9;
      puVar10 = (undefined8 *)(param_3 + 0x48);
      puVar11 = (undefined8 *)(param_2 + 0x48);
      for (lVar9 = 0xd; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      *(undefined1 *)(param_2 + 0xb0) = *(undefined1 *)(param_3 + 0xb0);
      param_3 = param_3 + 0x108;
      param_2 = param_2 + 0x108;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14184a970 FUN_14184a970 body=1688 status=ok
// SIG undefined FUN_14184a970(void)

undefined8 FUN_14184a970(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  byte bVar19;
  undefined1 uVar20;
  longlong lVar21;
  longlong lVar22;
  
  if (param_4 != 0) {
    lVar22 = 0;
    do {
      lVar1 = param_3 + lVar22;
      lVar3 = param_2 + 0x20 + lVar22;
      *(undefined2 *)(lVar3 + -0x10) = *(undefined2 *)(lVar1 + 0x10);
      *(undefined8 *)(lVar3 + -0x18) = *(undefined8 *)(lVar1 + 8);
      *(undefined1 *)(lVar3 + -8) = *(undefined1 *)(lVar1 + 0x18);
      FUN_1404306dc(lVar3,lVar1 + 0x20);
      uVar8 = *(undefined4 *)(lVar1 + 0x34);
      uVar9 = *(undefined4 *)(lVar1 + 0x38);
      uVar10 = *(undefined4 *)(lVar1 + 0x3c);
      *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(lVar1 + 0x30);
      *(undefined4 *)(lVar3 + 0x14) = uVar8;
      *(undefined4 *)(lVar3 + 0x18) = uVar9;
      *(undefined4 *)(lVar3 + 0x1c) = uVar10;
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar1 + 0x40);
      lVar1 = param_2 + 0x48 + lVar22;
      FUN_140430734(lVar1,param_3 + lVar22 + 0x48);
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_3 + lVar22 + 0x58);
      if (param_2 != param_3) {
        if (*(char *)(param_3 + 100 + lVar22) == '\x01') {
          *(undefined4 *)(param_2 + 0x60 + lVar22) = *(undefined4 *)(param_3 + 0x60 + lVar22);
          uVar20 = 1;
        }
        else {
          if (*(char *)(param_2 + 100 + lVar22) != '\x01') goto LAB_14184aa16;
          uVar20 = 0;
        }
        *(undefined1 *)(param_2 + 100 + lVar22) = uVar20;
      }
LAB_14184aa16:
      lVar1 = param_3 + lVar22;
      lVar3 = param_2 + lVar22;
      lVar21 = param_2 + lVar22;
      lVar2 = param_3 + lVar22;
      FUN_14043078c(lVar21 + 0x68,lVar2 + 0x68);
      FUN_1404307f4(lVar3 + 0x100,lVar1 + 0x100);
      *(undefined2 *)(lVar21 + 0x140) = *(undefined2 *)(lVar2 + 0x140);
      *(undefined8 *)(lVar21 + 0x138) = *(undefined8 *)(lVar2 + 0x138);
      uVar8 = *(undefined4 *)(lVar2 + 0x14c);
      uVar9 = *(undefined4 *)(lVar2 + 0x150);
      uVar10 = *(undefined4 *)(lVar2 + 0x154);
      uVar11 = *(undefined4 *)(lVar2 + 0x158);
      uVar12 = *(undefined4 *)(lVar2 + 0x15c);
      uVar13 = *(undefined4 *)(lVar2 + 0x160);
      uVar14 = *(undefined4 *)(lVar2 + 0x164);
      *(undefined4 *)(lVar21 + 0x148) = *(undefined4 *)(lVar2 + 0x148);
      *(undefined4 *)(lVar21 + 0x14c) = uVar8;
      *(undefined4 *)(lVar21 + 0x150) = uVar9;
      *(undefined4 *)(lVar21 + 0x154) = uVar10;
      *(undefined4 *)(lVar21 + 0x158) = uVar11;
      *(undefined4 *)(lVar21 + 0x15c) = uVar12;
      *(undefined4 *)(lVar21 + 0x160) = uVar13;
      *(undefined4 *)(lVar21 + 0x164) = uVar14;
      *(undefined8 *)(lVar21 + 0x165) = *(undefined8 *)(lVar2 + 0x165);
      *(undefined1 *)(lVar21 + 0x170) = *(undefined1 *)(lVar2 + 0x170);
      *(undefined4 *)(lVar21 + 0x17f) = *(undefined4 *)(lVar2 + 0x17f);
      *(undefined8 *)(lVar21 + 0x178) = *(undefined8 *)(lVar2 + 0x178);
      lVar21 = *(longlong *)(lVar2 + 0x188);
      if (DAT_14c950c29 == 1) {
        if (lVar21 == 0) {
          lVar21 = 0;
        }
        else {
          FUN_14689c22e();
          lVar21 = *(longlong *)(param_3 + 0x188 + lVar22);
        }
      }
      bVar19 = DAT_14c950c29;
      *(longlong *)(param_2 + 0x188 + lVar22) = lVar21;
      *(undefined4 *)(param_2 + 0x1a0 + lVar22) = *(undefined4 *)(param_3 + 0x1a0 + lVar22);
      puVar4 = (undefined8 *)(param_3 + 400 + lVar22);
      uVar16 = puVar4[1];
      puVar5 = (undefined8 *)(param_2 + 400 + lVar22);
      *puVar5 = *puVar4;
      puVar5[1] = uVar16;
      puVar4 = (undefined8 *)(param_3 + 0x1a8 + lVar22);
      uVar16 = puVar4[1];
      puVar5 = (undefined8 *)(param_2 + 0x1a8 + lVar22);
      *puVar5 = *puVar4;
      puVar5[1] = uVar16;
      *(undefined2 *)(param_2 + 0x1c8 + lVar22) = *(undefined2 *)(param_3 + 0x1c8 + lVar22);
      *(undefined8 *)(param_2 + 0x1c0 + lVar22) = *(undefined8 *)(param_3 + 0x1c0 + lVar22);
      *(undefined8 *)(param_2 + 0x1ed + lVar22) = *(undefined8 *)(param_3 + 0x1ed + lVar22);
      puVar6 = (undefined4 *)(param_3 + 0x1d0 + lVar22);
      uVar8 = *puVar6;
      uVar9 = puVar6[1];
      uVar10 = puVar6[2];
      uVar11 = puVar6[3];
      puVar6 = (undefined4 *)(param_3 + 0x1e0 + lVar22);
      uVar12 = puVar6[1];
      uVar13 = puVar6[2];
      uVar14 = puVar6[3];
      puVar7 = (undefined4 *)(param_2 + 0x1e0 + lVar22);
      *puVar7 = *puVar6;
      puVar7[1] = uVar12;
      puVar7[2] = uVar13;
      puVar7[3] = uVar14;
      puVar6 = (undefined4 *)(param_2 + 0x1d0 + lVar22);
      *puVar6 = uVar8;
      puVar6[1] = uVar9;
      puVar6[2] = uVar10;
      puVar6[3] = uVar11;
      *(undefined1 *)(param_2 + 0x1f8 + lVar22) = *(undefined1 *)(param_3 + 0x1f8 + lVar22);
      *(undefined4 *)(param_2 + 0x207 + lVar22) = *(undefined4 *)(param_3 + 0x207 + lVar22);
      *(undefined8 *)(param_2 + 0x200 + lVar22) = *(undefined8 *)(param_3 + 0x200 + lVar22);
      lVar21 = *(longlong *)(param_3 + 0x210 + lVar22);
      if ((bVar19 & 1) != 0) {
        if (lVar21 == 0) {
          lVar21 = 0;
        }
        else {
          FUN_14689c22e();
          lVar21 = *(longlong *)(param_3 + 0x210 + lVar22);
          bVar19 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 0x210 + lVar22) = lVar21;
      *(undefined4 *)(param_2 + 0x228 + lVar22) = *(undefined4 *)(param_3 + 0x228 + lVar22);
      puVar4 = (undefined8 *)(param_3 + 0x218 + lVar22);
      uVar16 = puVar4[1];
      puVar5 = (undefined8 *)(param_2 + 0x218 + lVar22);
      *puVar5 = *puVar4;
      puVar5[1] = uVar16;
      puVar4 = (undefined8 *)(param_3 + 0x230 + lVar22);
      uVar16 = puVar4[1];
      puVar5 = (undefined8 *)(param_2 + 0x230 + lVar22);
      *puVar5 = *puVar4;
      puVar5[1] = uVar16;
      puVar6 = (undefined4 *)(param_3 + 0x240 + lVar22);
      uVar8 = puVar6[1];
      uVar9 = puVar6[2];
      uVar10 = puVar6[3];
      puVar7 = (undefined4 *)(param_2 + 0x240 + lVar22);
      *puVar7 = *puVar6;
      puVar7[1] = uVar8;
      puVar7[2] = uVar9;
      puVar7[3] = uVar10;
      *(undefined8 *)(param_2 + 0x250 + lVar22) = *(undefined8 *)(param_3 + 0x250 + lVar22);
      lVar21 = *(longlong *)(param_3 + 600 + lVar22);
      if ((bVar19 & 1) != 0) {
        if (lVar21 == 0) {
          lVar21 = 0;
        }
        else {
          FUN_14689c22e();
          lVar21 = *(longlong *)(param_3 + 600 + lVar22);
          bVar19 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 600 + lVar22) = lVar21;
      *(undefined4 *)(param_2 + 0x260 + lVar22) = *(undefined4 *)(param_3 + 0x260 + lVar22);
      *(undefined8 *)(param_2 + 0x268 + lVar22) = *(undefined8 *)(param_3 + 0x268 + lVar22);
      lVar21 = *(longlong *)(param_3 + 0x270 + lVar22);
      if ((bVar19 & 1) != 0) {
        if (lVar21 == 0) {
          lVar21 = 0;
        }
        else {
          FUN_14689c22e();
          lVar21 = *(longlong *)(param_3 + 0x270 + lVar22);
          bVar19 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 0x270 + lVar22) = lVar21;
      *(undefined4 *)(param_2 + 0x278 + lVar22) = *(undefined4 *)(param_3 + 0x278 + lVar22);
      *(undefined1 *)(param_2 + 0x284 + lVar22) = *(undefined1 *)(param_3 + 0x284 + lVar22);
      *(undefined4 *)(param_2 + 0x280 + lVar22) = *(undefined4 *)(param_3 + 0x280 + lVar22);
      lVar21 = *(longlong *)(param_3 + 0x288 + lVar22);
      if ((bVar19 & 1) != 0) {
        if (lVar21 == 0) {
          lVar21 = 0;
        }
        else {
          FUN_14689c22e();
          lVar21 = *(longlong *)(param_3 + 0x288 + lVar22);
          bVar19 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 0x288 + lVar22) = lVar21;
      lVar21 = *(longlong *)(param_3 + 0x290 + lVar22);
      if ((bVar19 & 1) != 0) {
        if (lVar21 == 0) {
          lVar21 = 0;
        }
        else {
          FUN_14689c22e();
          lVar21 = *(longlong *)(param_3 + 0x290 + lVar22);
          bVar19 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 0x290 + lVar22) = lVar21;
      *(undefined1 *)(param_2 + 0x298 + lVar22) = *(undefined1 *)(param_3 + 0x298 + lVar22);
      *(undefined1 *)(param_2 + 0x2a4 + lVar22) = *(undefined1 *)(param_3 + 0x2a4 + lVar22);
      *(undefined4 *)(param_2 + 0x2a0 + lVar22) = *(undefined4 *)(param_3 + 0x2a0 + lVar22);
      lVar21 = *(longlong *)(param_3 + 0x2a8 + lVar22);
      if ((bVar19 & 1) != 0) {
        if (lVar21 == 0) {
          lVar21 = 0;
        }
        else {
          FUN_14689c22e();
          lVar21 = *(longlong *)(param_3 + 0x2a8 + lVar22);
          bVar19 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 0x2a8 + lVar22) = lVar21;
      lVar21 = *(longlong *)(param_3 + 0x2b0 + lVar22);
      if ((bVar19 & 1) != 0) {
        if (lVar21 == 0) {
          lVar21 = 0;
        }
        else {
          FUN_14689c22e();
          lVar21 = *(longlong *)(param_3 + 0x2b0 + lVar22);
        }
      }
      *(longlong *)(param_2 + 0x2b0 + lVar22) = lVar21;
      *(undefined1 *)(param_2 + 0x2b8 + lVar22) = *(undefined1 *)(param_3 + 0x2b8 + lVar22);
      puVar4 = (undefined8 *)(param_3 + 0x2c0 + lVar22);
      uVar16 = puVar4[1];
      puVar5 = (undefined8 *)(param_3 + 0x2d0 + lVar22);
      uVar17 = *puVar5;
      uVar18 = puVar5[1];
      puVar6 = (undefined4 *)(param_3 + 0x2e0 + lVar22);
      uVar8 = *puVar6;
      uVar9 = puVar6[1];
      uVar10 = puVar6[2];
      uVar11 = puVar6[3];
      puVar6 = (undefined4 *)(param_3 + 0x2f0 + lVar22);
      uVar12 = *puVar6;
      uVar13 = puVar6[1];
      uVar14 = puVar6[2];
      uVar15 = puVar6[3];
      puVar5 = (undefined8 *)(param_2 + 0x2c0 + lVar22);
      *puVar5 = *puVar4;
      puVar5[1] = uVar16;
      puVar4 = (undefined8 *)(param_2 + 0x2d0 + lVar22);
      *puVar4 = uVar17;
      puVar4[1] = uVar18;
      puVar6 = (undefined4 *)(param_2 + 0x2e0 + lVar22);
      *puVar6 = uVar8;
      puVar6[1] = uVar9;
      puVar6[2] = uVar10;
      puVar6[3] = uVar11;
      puVar6 = (undefined4 *)(param_2 + 0x2f0 + lVar22);
      *puVar6 = uVar12;
      puVar6[1] = uVar13;
      puVar6[2] = uVar14;
      puVar6[3] = uVar15;
      if (lVar3 != lVar1) {
        if (*(char *)(param_3 + 0x30c + lVar22) == '\x01') {
          *(undefined4 *)(lVar3 + 0x308) = *(undefined4 *)(lVar1 + 0x308);
          *(undefined8 *)(lVar3 + 0x300) = *(undefined8 *)(lVar1 + 0x300);
          uVar20 = 1;
LAB_14184af53:
          *(undefined1 *)(param_2 + 0x30c + lVar22) = uVar20;
        }
        else if (*(char *)(param_2 + 0x30c + lVar22) == '\x01') {
          uVar20 = 0;
          goto LAB_14184af53;
        }
        if (*(char *)(param_3 + 0x314 + lVar22) == '\x01') {
          *(undefined4 *)(param_2 + 0x310 + lVar22) = *(undefined4 *)(param_3 + 0x310 + lVar22);
          *(undefined1 *)(param_2 + 0x314 + lVar22) = 1;
        }
        else if (*(char *)(param_2 + 0x314 + lVar22) == '\x01') {
          *(undefined1 *)(param_2 + 0x314 + lVar22) = 0;
        }
        if (*(char *)(param_3 + 0x340 + lVar22) == '\x01') {
          puVar4 = (undefined8 *)(param_3 + 800 + lVar22);
          uVar16 = *puVar4;
          uVar17 = puVar4[1];
          puVar4 = (undefined8 *)(param_3 + 0x330 + lVar22);
          uVar18 = puVar4[1];
          puVar5 = (undefined8 *)(param_2 + 0x330 + lVar22);
          *puVar5 = *puVar4;
          puVar5[1] = uVar18;
          puVar4 = (undefined8 *)(param_2 + 800 + lVar22);
          *puVar4 = uVar16;
          puVar4[1] = uVar17;
          *(undefined1 *)(param_2 + 0x340 + lVar22) = 1;
        }
        else if (*(char *)(param_2 + 0x340 + lVar22) == '\x01') {
          *(undefined1 *)(param_2 + 0x340 + lVar22) = 0;
        }
      }
      puVar6 = (undefined4 *)(param_3 + 0x350 + lVar22);
      uVar8 = *puVar6;
      uVar9 = puVar6[1];
      uVar10 = puVar6[2];
      uVar11 = puVar6[3];
      puVar6 = (undefined4 *)(param_3 + 0x360 + lVar22);
      uVar12 = puVar6[1];
      uVar13 = puVar6[2];
      uVar14 = puVar6[3];
      puVar7 = (undefined4 *)(param_2 + 0x360 + lVar22);
      *puVar7 = *puVar6;
      puVar7[1] = uVar12;
      puVar7[2] = uVar13;
      puVar7[3] = uVar14;
      puVar6 = (undefined4 *)(param_2 + 0x350 + lVar22);
      *puVar6 = uVar8;
      puVar6[1] = uVar9;
      puVar6[2] = uVar10;
      puVar6[3] = uVar11;
      lVar22 = lVar22 + 0x370;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14184b008 FUN_14184b008 body=46 status=ok
// SIG undefined FUN_14184b008(void)

void FUN_14184b008(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_140751bbe(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14b0afc80;
  *(undefined2 *)(puVar1 + 6) = 1;
  return;
}



// FUNCTION 14184b036 FUN_14184b036 body=40 status=ok
// SIG undefined FUN_14184b036(void)

undefined8 FUN_14184b036(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14184b05e FUN_14184b05e body=49 status=ok
// SIG undefined FUN_14184b05e(void)

longlong FUN_14184b05e(void)

{
  if (DAT_14cb5a328 == 0) {
    FUN_14086a14e(&DAT_14cb5a328,&PTR_FUN_14b0b5358);
  }
  return DAT_14cb5a328;
}



// FUNCTION 14184b08f FUN_14184b08f body=49 status=ok
// SIG undefined FUN_14184b08f(void)

longlong FUN_14184b08f(void)

{
  if (DAT_14cb5a340 == 0) {
    FUN_14086a14e(&DAT_14cb5a340,&PTR_FUN_14b0b53c8);
  }
  return DAT_14cb5a340;
}



// FUNCTION 14184b0c0 FUN_14184b0c0 body=40 status=ok
// SIG undefined FUN_14184b0c0(void)

undefined8 FUN_14184b0c0(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14184b0e8 FUN_14184b0e8 body=32 status=ok
// SIG undefined FUN_14184b0e8(void)

undefined8 FUN_14184b0e8(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"AudioVolume");
  return param_2;
}



// FUNCTION 14184b116 FUN_14184b116 body=40 status=ok
// SIG undefined FUN_14184b116(void)

undefined8 FUN_14184b116(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14184b13e FUN_14184b13e body=166 status=ok
// SIG undefined FUN_14184b13e(void)

undefined8 * FUN_14184b13e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0bbf20;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b0be080;
  FUN_140160f86(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14184b200 FUN_14184b200 body=40 status=ok
// SIG undefined FUN_14184b200(void)

undefined8 FUN_14184b200(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14184b228 FUN_14184b228 body=166 status=ok
// SIG undefined FUN_14184b228(void)

undefined8 * FUN_14184b228(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0bc080;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b0be080;
  FUN_140160f86(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14184b2ce FUN_14184b2ce body=88 status=ok
// SIG undefined FUN_14184b2ce(void)

longlong * FUN_14184b2ce(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14184b326 FUN_14184b326 body=166 status=ok
// SIG undefined FUN_14184b326(void)

undefined8 * FUN_14184b326(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0b9f10;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b0be080;
  FUN_140160f86(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14184b3e8 FUN_14184b3e8 body=122 status=ok
// SIG undefined FUN_14184b3e8(void)

undefined8 * FUN_14184b3e8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0bbfd0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b0be130;
  FUN_1408a47eb(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14184b462 FUN_14184b462 body=201 status=ok
// SIG undefined FUN_14184b462(void)

undefined8 * FUN_14184b462(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0be1e0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_1401b95a9(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b0be080;
  FUN_140160f86(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14184b532 FUN_14184b532 body=372 status=ok
// SIG undefined FUN_14184b532(void)

undefined8 FUN_14184b532(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    if (DAT_14cac7648 == 0) {
      local_40 = &local_28;
      local_28 = FUN_144a7958c;
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
    if ((*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) == DAT_14cac7648 + 0x30)) goto LAB_14184b58d;
  }
  param_2 = 0;
LAB_14184b58d:
  lVar2 = param_1 + 0x68;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x128);
  }
  if ((longlong)*(int *)(param_1 + 0x130) == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = (longlong)*(int *)(param_1 + 0x130) * 0x18;
    do {
      lVar3 = lVar3 + -0x18;
      uVar1 = FUN_1403e9e5e(lVar2,param_2);
      if ((char)uVar1 != '\0') break;
      lVar2 = lVar2 + 0x18;
    } while (lVar3 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14184b6a8 FUN_14184b6a8 body=191 status=ok
// SIG undefined FUN_14184b6a8(void)

undefined8 * FUN_14184b6a8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b0bac30;
  plVar1 = (longlong *)param_1[0x18];
  if (plVar1 == (longlong *)0x0) goto LAB_14184b6fb;
  *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + -1;
  if ((int)plVar1[0x26] < 1) {
    FUN_1400847bc(plVar1 + 0x17,0);
    if ((int)plVar1[0x21] == 0) {
      FUN_140087e46(plVar1);
      if (*plVar1 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_14184b6f0;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
      }
    }
  }
LAB_14184b6f0:
  param_1[0x18] = 0;
LAB_14184b6fb:
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14184b768 FUN_14184b768 body=174 status=ok
// SIG undefined FUN_14184b768(void)

undefined8 * FUN_14184b768(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b0baf50;
  plVar1 = (longlong *)param_1[0x16];
  if (plVar1 == (longlong *)0x0) goto LAB_14184b7bb;
  *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + -1;
  if ((int)plVar1[0x26] < 1) {
    FUN_1400847bc(plVar1 + 0x17,0);
    if ((int)plVar1[0x21] == 0) {
      FUN_140087e46(plVar1);
      if (*plVar1 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_14184b7b0;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
      }
    }
  }
LAB_14184b7b0:
  param_1[0x16] = 0;
LAB_14184b7bb:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14184b816 FUN_14184b816 body=629 status=ok
// SIG undefined FUN_14184b816(void)

undefined8 FUN_14184b816(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  
  if (param_4 != 0) {
    lVar12 = 0x78;
    do {
      *(undefined4 *)(param_2 + -0x68 + lVar12) = *(undefined4 *)(param_3 + -0x68 + lVar12);
      *(undefined8 *)(param_2 + -0x70 + lVar12) = *(undefined8 *)(param_3 + -0x70 + lVar12);
      lVar4 = *(longlong *)(param_3 + -0x60 + lVar12);
      if (*(longlong *)(param_2 + -0x60 + lVar12) != lVar4) {
        *(undefined8 *)(param_2 + -0x50 + lVar12) = 0;
      }
      *(longlong *)(param_2 + -0x60 + lVar12) = lVar4;
      if (*(longlong *)(param_2 + -0x58 + lVar12) != *(longlong *)(param_3 + -0x58 + lVar12)) {
        *(undefined8 *)(param_2 + -0x50 + lVar12) = 0;
      }
      uVar10 = FUN_14477b664();
      uVar10 = FUN_14477b664(uVar10);
      *(undefined8 *)(param_2 + -0x58 + lVar12) = uVar10;
      *(undefined8 *)(param_2 + -0x50 + lVar12) = *(undefined8 *)(param_3 + -0x50 + lVar12);
      lVar4 = *(longlong *)(param_2 + -0x48 + lVar12);
      if ((lVar4 != 0 & DAT_14cb26569) == 1) {
        FUN_1400848c0(*(undefined8 *)(lVar4 + 0x50));
      }
      bVar9 = DAT_14cb26569;
      lVar4 = *(longlong *)(param_3 + -0x48 + lVar12);
      *(longlong *)(param_2 + -0x48 + lVar12) = lVar4;
      if ((lVar4 != 0) && ((bVar9 & 1) != 0)) {
        piVar1 = *(int **)(lVar4 + 0x50);
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (DAT_14cb259f8 == 0) {
          iVar11 = 5;
        }
        else {
          if ((char)piVar1[1] != '\x01') {
            FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
            goto LAB_14184b8bf;
          }
          iVar11 = 2;
        }
        LOCK();
        piVar1[2] = iVar11;
        UNLOCK();
      }
LAB_14184b8bf:
      *(undefined4 *)(param_2 + -0x38 + lVar12) = *(undefined4 *)(param_3 + -0x38 + lVar12);
      *(undefined8 *)(param_2 + -0x40 + lVar12) = *(undefined8 *)(param_3 + -0x40 + lVar12);
      lVar4 = *(longlong *)(param_3 + -0x30 + lVar12);
      if (*(longlong *)(param_2 + -0x30 + lVar12) != lVar4) {
        *(undefined8 *)(param_2 + -0x20 + lVar12) = 0;
      }
      *(longlong *)(param_2 + -0x30 + lVar12) = lVar4;
      if (*(longlong *)(param_2 + -0x28 + lVar12) != *(longlong *)(param_3 + -0x28 + lVar12)) {
        *(undefined8 *)(param_2 + -0x20 + lVar12) = 0;
      }
      uVar10 = FUN_14477b664();
      uVar10 = FUN_14477b664(uVar10);
      *(undefined8 *)(param_2 + -0x28 + lVar12) = uVar10;
      *(undefined8 *)(param_2 + -0x20 + lVar12) = *(undefined8 *)(param_3 + -0x20 + lVar12);
      lVar4 = *(longlong *)(param_2 + -0x18 + lVar12);
      if ((lVar4 != 0 & DAT_14cb26569) == 1) {
        FUN_1400848c0(*(undefined8 *)(lVar4 + 0x50));
      }
      bVar9 = DAT_14cb26569;
      lVar4 = *(longlong *)(param_3 + -0x18 + lVar12);
      *(longlong *)(param_2 + -0x18 + lVar12) = lVar4;
      if ((lVar4 != 0) && ((bVar9 & 1) != 0)) {
        piVar1 = *(int **)(lVar4 + 0x50);
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (DAT_14cb259f8 == 0) {
          iVar11 = 5;
        }
        else {
          if ((char)piVar1[1] != '\x01') {
            FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
            goto LAB_14184b947;
          }
          iVar11 = 2;
        }
        LOCK();
        piVar1[2] = iVar11;
        UNLOCK();
      }
LAB_14184b947:
      uVar10 = *(undefined8 *)(param_3 + -0x10 + lVar12);
      lVar4 = *(longlong *)(param_3 + -8 + lVar12);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
        UNLOCK();
      }
      plVar5 = *(longlong **)(param_2 + -8 + lVar12);
      *(undefined8 *)(param_2 + -0x10 + lVar12) = uVar10;
      *(longlong *)(param_2 + -8 + lVar12) = lVar4;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      puVar2 = (undefined4 *)(param_3 + lVar12);
      uVar6 = puVar2[1];
      uVar7 = puVar2[2];
      uVar8 = puVar2[3];
      puVar3 = (undefined4 *)(param_2 + lVar12);
      *puVar3 = *puVar2;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      lVar12 = lVar12 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14184ba8c FUN_14184ba8c body=557 status=ok
// SIG undefined FUN_14184ba8c(void)

undefined8 FUN_14184ba8c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  int *piVar2;
  byte bVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0x70;
    do {
      *(undefined4 *)(param_2 + -0x60 + lVar6) = *(undefined4 *)(param_3 + -0x60 + lVar6);
      *(undefined8 *)(param_2 + -0x68 + lVar6) = *(undefined8 *)(param_3 + -0x68 + lVar6);
      lVar1 = *(longlong *)(param_3 + -0x58 + lVar6);
      if (*(longlong *)(param_2 + -0x58 + lVar6) != lVar1) {
        *(undefined8 *)(param_2 + -0x48 + lVar6) = 0;
      }
      *(longlong *)(param_2 + -0x58 + lVar6) = lVar1;
      if (*(longlong *)(param_2 + -0x50 + lVar6) != *(longlong *)(param_3 + -0x50 + lVar6)) {
        *(undefined8 *)(param_2 + -0x48 + lVar6) = 0;
      }
      uVar4 = FUN_14477b664();
      uVar4 = FUN_14477b664(uVar4);
      *(undefined8 *)(param_2 + -0x50 + lVar6) = uVar4;
      *(undefined8 *)(param_2 + -0x48 + lVar6) = *(undefined8 *)(param_3 + -0x48 + lVar6);
      lVar1 = *(longlong *)(param_2 + -0x40 + lVar6);
      if ((lVar1 != 0 & DAT_14cb26569) == 1) {
        FUN_1400848c0(*(undefined8 *)(lVar1 + 0x50));
      }
      bVar3 = DAT_14cb26569;
      lVar1 = *(longlong *)(param_3 + -0x40 + lVar6);
      *(longlong *)(param_2 + -0x40 + lVar6) = lVar1;
      if ((lVar1 != 0) && ((bVar3 & 1) != 0)) {
        piVar2 = *(int **)(lVar1 + 0x50);
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
        if (DAT_14cb259f8 == 0) {
          iVar5 = 5;
        }
        else {
          if ((char)piVar2[1] != '\x01') {
            FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
            goto LAB_14184bb35;
          }
          iVar5 = 2;
        }
        LOCK();
        piVar2[2] = iVar5;
        UNLOCK();
      }
LAB_14184bb35:
      *(undefined4 *)(param_2 + -0x30 + lVar6) = *(undefined4 *)(param_3 + -0x30 + lVar6);
      *(undefined8 *)(param_2 + -0x38 + lVar6) = *(undefined8 *)(param_3 + -0x38 + lVar6);
      lVar1 = *(longlong *)(param_3 + -0x28 + lVar6);
      if (*(longlong *)(param_2 + -0x28 + lVar6) != lVar1) {
        *(undefined8 *)(param_2 + -0x18 + lVar6) = 0;
      }
      *(longlong *)(param_2 + -0x28 + lVar6) = lVar1;
      if (*(longlong *)(param_2 + -0x20 + lVar6) != *(longlong *)(param_3 + -0x20 + lVar6)) {
        *(undefined8 *)(param_2 + -0x18 + lVar6) = 0;
      }
      uVar4 = FUN_14477b664();
      uVar4 = FUN_14477b664(uVar4);
      *(undefined8 *)(param_2 + -0x20 + lVar6) = uVar4;
      *(undefined8 *)(param_2 + -0x18 + lVar6) = *(undefined8 *)(param_3 + -0x18 + lVar6);
      lVar1 = *(longlong *)(param_2 + -0x10 + lVar6);
      if ((lVar1 != 0 & DAT_14cb26569) == 1) {
        FUN_1400848c0(*(undefined8 *)(lVar1 + 0x50));
      }
      bVar3 = DAT_14cb26569;
      lVar1 = *(longlong *)(param_3 + -0x10 + lVar6);
      *(longlong *)(param_2 + -0x10 + lVar6) = lVar1;
      if ((lVar1 != 0) && ((bVar3 & 1) != 0)) {
        piVar2 = *(int **)(lVar1 + 0x50);
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
        if (DAT_14cb259f8 == 0) {
          iVar5 = 5;
        }
        else {
          if ((char)piVar2[1] != '\x01') {
            FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
            goto LAB_14184bbb9;
          }
          iVar5 = 2;
        }
        LOCK();
        piVar2[2] = iVar5;
        UNLOCK();
      }
LAB_14184bbb9:
      *(undefined8 *)(param_2 + -8 + lVar6) = *(undefined8 *)(param_3 + -8 + lVar6);
      *(undefined8 *)(param_2 + lVar6) = *(undefined8 *)(param_3 + lVar6);
      lVar6 = lVar6 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14184bcba FUN_14184bcba body=120 status=ok
// SIG undefined FUN_14184bcba(void)

undefined8 FUN_14184bcba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0x18;
    do {
      lVar1 = *(longlong *)(param_3 + -0x10 + lVar3);
      if (*(longlong *)(param_2 + -0x10 + lVar3) != lVar1) {
        *(undefined8 *)(param_2 + lVar3) = 0;
      }
      *(longlong *)(param_2 + -0x10 + lVar3) = lVar1;
      if (*(longlong *)(param_2 + -8 + lVar3) != *(longlong *)(param_3 + -8 + lVar3)) {
        *(undefined8 *)(param_2 + lVar3) = 0;
      }
      uVar2 = FUN_14477b664();
      uVar2 = FUN_14477b664(uVar2);
      *(undefined8 *)(param_2 + -8 + lVar3) = uVar2;
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar3 = lVar3 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14184bd32 FUN_14184bd32 body=120 status=ok
// SIG undefined FUN_14184bd32(void)

undefined8 FUN_14184bd32(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0x18;
    do {
      lVar1 = *(longlong *)(param_3 + -0x10 + lVar3);
      if (*(longlong *)(param_2 + -0x10 + lVar3) != lVar1) {
        *(undefined8 *)(param_2 + lVar3) = 0;
      }
      *(longlong *)(param_2 + -0x10 + lVar3) = lVar1;
      if (*(longlong *)(param_2 + -8 + lVar3) != *(longlong *)(param_3 + -8 + lVar3)) {
        *(undefined8 *)(param_2 + lVar3) = 0;
      }
      uVar2 = FUN_14477b664();
      uVar2 = FUN_14477b664(uVar2);
      *(undefined8 *)(param_2 + -8 + lVar3) = uVar2;
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar3 = lVar3 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14184bdc6 FUN_14184bdc6 body=79 status=ok
// SIG undefined FUN_14184bdc6(void)

undefined8 * FUN_14184bdc6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0bba40;
  FUN_1403ad639(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14184be16 FUN_14184be16 body=76 status=ok
// SIG undefined FUN_14184be16(void)

undefined8 * FUN_14184be16(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b0c12d0;
  plVar2 = (longlong *)param_1[9];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14184be70 FUN_14184be70 body=317 status=ok
// SIG undefined FUN_14184be70(void)

void FUN_14184be70(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14184bede;
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
LAB_14184bede:
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



// FUNCTION 14184bfca FUN_14184bfca body=45 status=ok
// SIG undefined FUN_14184bfca(void)

undefined8 FUN_14184bfca(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14184bff8 FUN_14184bff8 body=171 status=ok
// SIG undefined FUN_14184bff8(void)

undefined8 * FUN_14184bff8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0c8bd0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b0be080;
  FUN_140160f86(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 14184c10c FUN_14184c10c body=131 status=ok
// SIG undefined FUN_14184c10c(void)

undefined8 * FUN_14184c10c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0c4b30;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14184c190 FUN_14184c190 body=244 status=ok
// SIG undefined FUN_14184c190(void)

undefined8 * FUN_14184c190(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0c4d30;
  plVar1 = param_1 + 0xe;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x12) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x11)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x11)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14b0be080;
  FUN_140160f86(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 14184c292 FUN_14184c292 body=45 status=ok
// SIG undefined FUN_14184c292(void)

undefined8 FUN_14184c292(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 14184c2dc FUN_14184c2dc body=45 status=ok
// SIG undefined FUN_14184c2dc(void)

undefined8 FUN_14184c2dc(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 14184c326 FUN_14184c326 body=103 status=ok
// SIG undefined FUN_14184c326(void)

undefined8 * FUN_14184c326(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0c74c0;
  plVar3 = (longlong *)param_1[0x1c];
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
  FUN_14049e650(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 14184c38e FUN_14184c38e body=139 status=ok
// SIG undefined FUN_14184c38e(void)

void FUN_14184c38e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xa8);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_2 + 7,0x14,1);
  param_2[0xe] = 0;
  *(undefined4 *)(param_2 + 0xf) = 0x1010101;
  *(undefined1 *)((longlong)param_2 + 0x7c) = 1;
  *param_2 = &PTR_FUN_14b0c7740;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  return;
}



// FUNCTION 14184c436 FUN_14184c436 body=131 status=ok
// SIG undefined FUN_14184c436(void)

undefined8 * FUN_14184c436(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 14184c4ba FUN_14184c4ba body=45 status=ok
// SIG undefined FUN_14184c4ba(void)

undefined8 FUN_14184c4ba(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 14184c504 FUN_14184c504 body=45 status=ok
// SIG undefined FUN_14184c504(void)

undefined8 FUN_14184c504(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 14184c532 FUN_14184c532 body=176 status=ok
// SIG undefined FUN_14184c532(void)

void FUN_14184c532(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xc0);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_2 + 7,0x14,1);
  param_2[0xe] = 0;
  *(undefined4 *)(param_2 + 0xf) = 0x1010101;
  *(undefined1 *)((longlong)param_2 + 0x7c) = 1;
  *param_2 = &PTR_FUN_14b0c8880;
  *(undefined1 *)(param_2 + 0x10) = 0;
  param_2[0x11] = 0;
  *(undefined2 *)(param_2 + 0x15) = 4;
  *(undefined4 *)(param_2 + 0x12) = 0x3f800000;
  *(undefined1 *)(param_2 + 0x16) = 3;
  *(char *)(param_2 + 0x17) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_2 + 0x18) = 0;
  return;
}



// FUNCTION 14184c5fe FUN_14184c5fe body=221 status=ok
// SIG undefined FUN_14184c5fe(void)

undefined8 * FUN_14184c5fe(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0c8880;
  plVar1 = param_1 + 0x12;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x16) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x15)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x15)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,200);
  }
  return param_1;
}



// FUNCTION 14184c6dc FUN_14184c6dc body=45 status=ok
// SIG undefined FUN_14184c6dc(void)

undefined8 FUN_14184c6dc(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 14184c718 FUN_14184c718 body=84 status=ok
// SIG undefined FUN_14184c718(void)

undefined8 * FUN_14184c718(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b0cea90;
  plVar2 = (longlong *)param_1[0x1e];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_14049e650(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 14184c76c FUN_14184c76c body=123 status=ok
// SIG undefined FUN_14184c76c(void)

void FUN_14184c76c(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0x1e) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_2 + 7,0x14,1);
  param_2[0xe] = 0;
  *param_2 = &PTR_FUN_14b405360;
  *(undefined4 *)((longlong)param_2 + 0x79) = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined8 *)((longlong)param_2 + 0x89) = 0;
  *(undefined8 *)((longlong)param_2 + 0x91) = 0;
  *(undefined1 *)(param_2 + 0xf) = 1;
  return;
}



// FUNCTION 14184c804 FUN_14184c804 body=143 status=ok
// SIG undefined FUN_14184c804(void)

undefined8 * FUN_14184c804(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0cf6d0;
  plVar1 = param_1 + 0x1c;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x20) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1f)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1f)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_14049e650(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 14184c8b0 FUN_14184c8b0 body=262 status=ok
// SIG undefined FUN_14184c8b0(void)

undefined8 * FUN_14184c8b0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0d07e0;
  plVar3 = (longlong *)param_1[0x30];
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
  plVar3 = (longlong *)param_1[0x25];
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
  *param_1 = &PTR_FUN_14ac442c0;
  plVar3 = (longlong *)param_1[0x22];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x1e];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x1c];
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
  FUN_14049e650(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,400);
  }
  return param_1;
}



// FUNCTION 14184c9c4 FUN_14184c9c4 body=260 status=ok
// SIG undefined FUN_14184c9c4(void)

void FUN_14184c9c4(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x118);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_2 + 7,0x14,1);
  param_2[0xe] = 0;
  *(undefined1 *)((longlong)param_2 + 0x7c) = 1;
  *(undefined4 *)(param_2 + 0xf) = 0x1010101;
  *param_2 = &PTR_FUN_14b0d16d0;
  param_2[0x13] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0;
  *(undefined2 *)(param_2 + 0x17) = 4;
  *(undefined4 *)(param_2 + 0x14) = 1;
  *(undefined1 *)(param_2 + 0x18) = 2;
  *(byte *)(param_2 + 0x19) = (byte)~DAT_14c9a8754 >> 4 & 2;
  param_2[0x1a] = 0;
  *(undefined2 *)(param_2 + 0x1e) = 4;
  *(undefined4 *)(param_2 + 0x1b) = 0x3f800000;
  *(undefined1 *)(param_2 + 0x1f) = 3;
  *(char *)(param_2 + 0x20) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined4 *)(param_2 + 0x21) = 0;
  *(undefined1 *)((longlong)param_2 + 0x10c) = 1;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  return;
}



// FUNCTION 14184cac8 FUN_14184cac8 body=45 status=ok
// SIG undefined FUN_14184cac8(void)

undefined8 FUN_14184cac8(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 14184caf6 FUN_14184caf6 body=45 status=ok
// SIG undefined FUN_14184caf6(void)

undefined8 FUN_14184caf6(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 14184cb5b FUN_14184cb5b body=49 status=ok
// SIG undefined FUN_14184cb5b(void)

longlong FUN_14184cb5b(void)

{
  if (DAT_14cb5b390 == 0) {
    FUN_14073dd9a(&DAT_14cb5b390,&PTR_LAB_14b0d9270);
  }
  return DAT_14cb5b390;
}



// FUNCTION 14184cba2 FUN_14184cba2 body=46 status=ok
// SIG undefined FUN_14184cba2(void)

undefined8 FUN_14184cba2(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + -8) + 0x18))(param_1 + -8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014184cbc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x50) + 0x10))(lVar1 + 0x50);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14184cc08 FUN_14184cc08 body=133 status=ok
// SIG undefined FUN_14184cc08(void)

undefined8 * FUN_14184cc08(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac4f5c0;
  param_1[0x26] = &PTR_FUN_14ac52c10;
  if (param_1[0x2e] != 0) {
    FUN_14387f5b2(param_1 + 0x26);
  }
  FUN_1403d7f26(param_1 + 0x26);
  *param_1 = &PTR_FUN_14ac4dde0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_14049e650(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14184ccf0 FUN_14184ccf0 body=118 status=ok
// SIG undefined FUN_14184ccf0(void)

undefined8 FUN_14184ccf0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb75748 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144815d88(DAT_14cb75748,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14184cd68 FUN_14184cd68 body=118 status=ok
// SIG undefined FUN_14184cd68(void)

undefined8 FUN_14184cd68(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb758b8 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb758b8,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14184cde0 FUN_14184cde0 body=117 status=ok
// SIG undefined FUN_14184cde0(void)

undefined8 * FUN_14184cde0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 14184ce56 FUN_14184ce56 body=40 status=ok
// SIG undefined FUN_14184ce56(void)

undefined8 FUN_14184ce56(undefined8 param_1,int param_2)

{
  FUN_14063a79a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14184ce7e FUN_14184ce7e body=78 status=ok
// SIG undefined FUN_14184ce7e(void)

undefined8 * FUN_14184ce7e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0e72c0;
  param_1[6] = &PTR_LAB_14b0e7560;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14184cecc FUN_14184cecc body=38 status=ok
// SIG undefined FUN_14184cecc(void)

undefined8 FUN_14184cecc(undefined8 param_1,int param_2)

{
  FUN_140998e52();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14184cef2 FUN_14184cef2 body=176 status=ok
// SIG undefined FUN_14184cef2(void)

undefined8 FUN_14184cef2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined1 *)(param_2 + lVar3);
      *puVar1 = *(undefined1 *)(param_3 + lVar3);
      *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_3 + 8 + lVar3);
      FUN_1403ed422(puVar1 + 0x10,param_3 + 0x10 + lVar3);
      lVar2 = *(longlong *)(param_3 + 0x28 + lVar3);
      if (DAT_14c950c29 == '\x01') {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + 0x28 + lVar3);
        }
      }
      *(longlong *)(puVar1 + 0x28) = lVar2;
      puVar4 = (undefined8 *)(param_3 + 0x30 + lVar3);
      puVar5 = (undefined8 *)(puVar1 + 0x30);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar1[0x78] = *(undefined1 *)(param_3 + 0x78 + lVar3);
      lVar3 = lVar3 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14184cfa2 FUN_14184cfa2 body=138 status=ok
// SIG undefined FUN_14184cfa2(void)

undefined8 FUN_14184cfa2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(param_2 + lVar3);
      *puVar1 = *(undefined8 *)(param_3 + lVar3);
      FUN_1403ed422(puVar1 + 1,param_3 + 8 + lVar3);
      *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_3 + 0x20 + lVar3);
      lVar2 = *(longlong *)(param_3 + 0x28 + lVar3);
      if (DAT_14c950c29 == '\x01') {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + 0x28 + lVar3);
        }
      }
      puVar1[5] = lVar2;
      lVar3 = lVar3 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14184d02c FUN_14184d02c body=71 status=ok
// SIG undefined FUN_14184d02c(void)

undefined8 * FUN_14184d02c(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 14184d080 FUN_14184d080 body=49 status=ok
// SIG undefined FUN_14184d080(void)

longlong FUN_14184d080(void)

{
  if (DAT_14cb5bad8 == 0) {
    FUN_14073dd9a(&DAT_14cb5bad8,&PTR_LAB_14b0ec350);
  }
  return DAT_14cb5bad8;
}



// FUNCTION 14184d0b2 FUN_14184d0b2 body=7 status=ok
// SIG undefined FUN_14184d0b2(void)

void FUN_14184d0b2(undefined8 param_1)

{
  FUN_1447cd2ec(param_1,0);
  return;
}



// FUNCTION 14184d0ba FUN_14184d0ba body=5421 status=ok
// SIG undefined FUN_14184d0ba(void)

void FUN_14184d0ba(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  int *piVar13;
  undefined1 *_Src;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  undefined8 local_150;
  undefined *local_148;
  code *local_140;
  undefined1 local_138;
  undefined1 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_e9;
  int local_e8;
  int local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  char local_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  char local_50;
  undefined4 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_9c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_140 = FUN_1408a629c;
      local_148 = &DAT_14c9520b8;
      local_150 = 0;
      local_158 = (undefined8 *)0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
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
          cVar10 = (*pcVar3)(plVar1);
          if (cVar10 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_9c);
            goto LAB_14184d1b6;
          }
        }
        puVar11 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar11 != &local_9c) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_9c,puVar11,(int)plVar1[6]);
          }
          else {
            memcpy(&local_9c,puVar11,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_150 = CONCAT44(local_150._4_4_,(int)plVar1[6]);
        local_158 = (undefined8 *)((ulonglong)local_158 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_9c,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_9c,lVar2);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar12;
        puVar12 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
LAB_14184d1b6:
  local_68 = 0;
  local_50 = '\0';
  local_48 = 0;
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_148 = (undefined *)FUN_1446ddbd2();
      local_140 = FUN_1403a682c;
      local_150 = 0;
      local_158 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
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
          cVar10 = (*pcVar3)(plVar1);
          if (cVar10 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_68);
            goto LAB_14184d2a5;
          }
        }
        puVar12 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar12 != &local_68) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_68,puVar12,(int)plVar1[6]);
          }
          else {
            memcpy(&local_68,puVar12,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_150 = CONCAT44(local_150._4_4_,(int)plVar1[6]);
        local_158 = (undefined8 *)((ulonglong)local_158 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_68,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_68,lVar2);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar12;
        puVar12 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
LAB_14184d2a5:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_148 = (undefined *)FUN_1446ddbd2();
      local_140 = FUN_1403a682c;
      local_150 = 0;
      local_158 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
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
          cVar10 = (*pcVar3)(plVar1);
          if (cVar10 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_b8);
            goto LAB_14184d36f;
          }
        }
        puVar11 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar11 != &local_b8) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_b8,puVar11,(int)plVar1[6]);
          }
          else {
            memcpy(&local_b8,puVar11,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_150 = CONCAT44(local_150._4_4_,(int)plVar1[6]);
        local_158 = (undefined8 *)((ulonglong)local_158 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_b8,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_b8,lVar2);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar12;
        puVar12 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
LAB_14184d36f:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_148 = (undefined *)FUN_1446ddbd2();
      local_140 = FUN_1403a682c;
      local_150 = 0;
      local_158 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
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
          cVar10 = (*pcVar3)(plVar1);
          if (cVar10 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_d0);
            goto LAB_14184d439;
          }
        }
        puVar12 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar12 != &local_d0) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_d0,puVar12,(int)plVar1[6]);
          }
          else {
            memcpy(&local_d0,puVar12,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_150 = CONCAT44(local_150._4_4_,(int)plVar1[6]);
        local_158 = (undefined8 *)((ulonglong)local_158 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_d0,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_d0,lVar2);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar12;
        puVar12 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
LAB_14184d439:
  local_d8 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_148 = (undefined *)FUN_1446ddbd2();
      local_140 = FUN_1468d96f0;
      local_150 = 0;
      local_158 = (undefined8 *)0x4008001;
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
          cVar10 = (*pcVar3)(plVar1);
          if (cVar10 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_d8);
            goto LAB_14184d50f;
          }
        }
        puVar12 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar12 != &local_d8) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_d8,puVar12,(int)plVar1[6]);
          }
          else {
            memcpy(&local_d8,puVar12,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_150 = CONCAT44(local_150._4_4_,(int)plVar1[6]);
        local_158 = (undefined8 *)((ulonglong)local_158 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_d8,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_d8,lVar2);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar12;
        puVar12 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
LAB_14184d50f:
  local_e0 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_148 = (undefined *)FUN_1446ddbd2();
      local_140 = FUN_1409e12a0;
      local_150 = 0;
      local_158 = (undefined8 *)0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
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
          cVar10 = (*pcVar3)(plVar1);
          if (cVar10 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_e0);
            goto LAB_14184d5e5;
          }
        }
        puVar12 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar12 != &local_e0) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_e0,puVar12,(int)plVar1[6]);
          }
          else {
            memcpy(&local_e0,puVar12,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_150 = CONCAT44(local_150._4_4_,(int)plVar1[6]);
        local_158 = (undefined8 *)((ulonglong)local_158 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_e0,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_e0,lVar2);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar12;
        puVar12 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
LAB_14184d5e5:
  local_e4 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_148 = (undefined *)FUN_1446ddbd2();
      local_140 = FUN_14067a048;
      local_150 = 0;
      local_158 = (undefined8 *)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
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
          cVar10 = (*pcVar3)(plVar1);
          if (cVar10 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_e4);
            goto LAB_14184d6ba;
          }
        }
        piVar13 = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (piVar13 != &local_e4) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_e4,piVar13,(int)plVar1[6]);
          }
          else {
            memcpy(&local_e4,piVar13,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_150 = CONCAT44(local_150._4_4_,(int)plVar1[6]);
        local_158 = (undefined8 *)((ulonglong)local_158 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_e4,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_e4,lVar2);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar12;
        puVar12 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e4);
  }
LAB_14184d6ba:
  iVar7 = local_e4;
  local_e8 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_148 = (undefined *)FUN_1446ddbd2();
      local_140 = FUN_14067a048;
      local_150 = 0;
      local_158 = (undefined8 *)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
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
          cVar10 = (*pcVar3)(plVar1);
          if (cVar10 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_e8);
            goto LAB_14184d796;
          }
        }
        piVar13 = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (piVar13 != &local_e8) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_e8,piVar13,(int)plVar1[6]);
          }
          else {
            memcpy(&local_e8,piVar13,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_150 = CONCAT44(local_150._4_4_,(int)plVar1[6]);
        local_158 = (undefined8 *)((ulonglong)local_158 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_e8,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_e8,lVar2);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar12;
        puVar12 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
LAB_14184d796:
  iVar6 = local_e8;
  local_e9 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d78) {
    FUN_144b3d300(&DAT_14c951d78);
    if (DAT_14c951d78 == -1) {
      FUN_14475b26a();
      local_140 = FUN_1409f1a5c;
      local_148 = &DAT_14c9520b8;
      local_150 = 0;
      local_158 = (undefined8 *)0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
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
          cVar10 = (*pcVar3)(plVar1);
          if (cVar10 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_e9);
            goto LAB_14184d870;
          }
        }
        _Src = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_e9) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_e9,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_e9,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_150 = CONCAT44(local_150._4_4_,(int)plVar1[6]);
        local_158 = (undefined8 *)((ulonglong)local_158 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_e9,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_e9,lVar2);
      }
    }
    else {
      puVar12 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar12;
        puVar12 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e9);
  }
LAB_14184d870:
  uVar9 = local_d8;
  uVar8 = local_e0;
  uVar5 = local_e9;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_108 = local_d0;
  uStack_100 = uStack_c8;
  local_f8 = local_c0;
  local_128 = local_b8;
  uStack_124 = uStack_b4;
  uStack_120 = uStack_b0;
  uStack_11c = uStack_ac;
  local_118 = local_a8;
  local_98 = local_68;
  local_80 = local_50;
  if (local_50 == '\x01') {
    local_90 = 0;
    local_88 = 0;
    FUN_14867b726(&local_90,local_60);
  }
  local_78 = local_48;
  local_70 = local_40;
  if ((local_40 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_138 = iVar6 != 0;
  local_140 = (code *)CONCAT71(local_140._1_7_,iVar7 != 0);
  local_130 = uVar5;
  local_148 = (undefined *)uVar8;
  local_150 = uVar9;
  local_158 = &local_108;
  (**(code **)(*param_1 + 0xc80))(param_1,local_9c,&local_98,&local_128);
  if (local_50 == '\x01') {
    FUN_1449db362(local_60);
  }
  if ((local_38 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14184e5e8 FUN_14184e5e8 body=446 status=ok
// SIG undefined FUN_14184e5e8(void)

void FUN_14184e5e8(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  byte local_21;
  undefined7 uStack_20;
  undefined1 uStack_19;
  
  uStack_20 = (undefined7)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_19 = (undefined1)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x38);
  local_21 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_140a4831c;
      local_48 = 0x1000000008001;
      local_40 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_21);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_21);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_21 = (byte)uVar2;
      uStack_20 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_21);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = (**(code **)(*param_1 + 0xe78))(param_1,1 << (local_21 & 0x1f));
  *param_3 = uVar4;
  if ((CONCAT17(uStack_19,uStack_20) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14184e7a8 FUN_14184e7a8 body=3314 status=ok
// SIG undefined FUN_14184e7a8(void)

void FUN_14184e7a8(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  int *_Src;
  undefined8 *puVar7;
  undefined4 *_Src_00;
  undefined1 *_Src_01;
  undefined1 auStack_198 [32];
  ulonglong local_178;
  undefined8 local_170;
  undefined1 *local_168;
  code *local_160;
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined4 local_b4;
  undefined4 local_88;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_40);
            goto LAB_14184e8a5;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_40,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_40,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
LAB_14184e8a5:
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_48);
            goto LAB_14184e97b;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_48) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_48,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_48,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_48,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_48,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
LAB_14184e97b:
  local_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_50);
            goto LAB_14184ea51;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_50) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_50,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_50,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_50,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_50,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
LAB_14184ea51:
  local_54 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_160 = FUN_1405ebbb2;
      local_168 = &DAT_14c9520b8;
      local_170 = 0;
      local_178 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_54);
            goto LAB_14184eb26;
          }
        }
        _Src_00 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_00 != &local_54) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_54,_Src_00,(int)plVar1[6]);
          }
          else {
            memcpy(&local_54,_Src_00,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_54,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_54,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
LAB_14184eb26:
  local_58 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_14067a048;
      local_170 = 0;
      local_178 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_58);
            goto LAB_14184ebf9;
          }
        }
        _Src = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_58) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_58,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_58,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_58,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_58,lVar2);
      }
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
LAB_14184ebf9:
  iVar5 = local_58;
  memset(local_158,0,0x100);
  local_88 = 0xffffffff;
  local_154 = 0x3f800000;
  local_b4 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,local_158);
            goto LAB_14184ecd0;
          }
        }
        _Src_01 = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_01 != local_158) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_158,_Src_01,(int)plVar1[6]);
          }
          else {
            memcpy(local_158,_Src_01,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,local_158,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,local_158,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_158);
  }
LAB_14184ecd0:
  local_168 = local_158;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_168 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_170 = CONCAT71(local_170._1_7_,iVar5 != 0);
  local_178 = CONCAT44(local_178._4_4_,local_54);
  (**(code **)(*param_1 + 0xea0))(param_1,local_40,local_48,local_50);
  if ((local_38 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


